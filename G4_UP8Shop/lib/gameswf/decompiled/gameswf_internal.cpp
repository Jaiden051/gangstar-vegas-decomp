#include "Core/Utils/DecompTypes.h"
#include "gameswf_internal.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: stb_vorbis_seek_start  (binary VA: 0x10512a0)
// Original: stb_vorbis_seek_start
// ----------------------------------------------------------------------------
int stb_vorbis_seek_start(int a1)
{
  int v1;
  int v2;
  unsigned int v3;
  unsigned int v4;
  int result;
  int v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v12)) > _g4_s5 ? (28u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v1 = *(uint32_t *)(a1 + 32);
  v2 = *(uint32_t *)(a1 + 52);
  *(uint32_t *)(a1 + 112) = 0;
  if ( v1 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 36) + v2;
    v4 = *(uint32_t *)(a1 + 40);
    if ( v2 >= 0 && v3 < v4 )
    {
      *(uint32_t *)(a1 + 32) = v3;
    }
    else
    {
      *(uint32_t *)(a1 + 32) = v4;
      *(uint32_t *)(a1 + 112) = 1;
    }
  }
  else
  {
    if ( v2 < 0 || v2 > (unsigned int)(*(uint32_t *)(a1 + 24) + v2) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v6 = 0x7FFFFFFF;
    }
    else
    {
      v6 = *(uint32_t *)(a1 + 24) + v2;
    }
    if ( fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v6, 0) != 0 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), *(uint32_t *)(a1 + 24), 2);
    }
  }
  *(uint32_t *)(a1 + 1008) = 0;
  *(uint8_t *)(a1 + 1393) = 1;
  *(uint32_t *)(a1 + 1396) = -1;
  result = sub_10494C0(a1, &v9, v4, &v11, &v8, v12, &v10);
  if ( result != 0 )
  {
    result = sub_104B770(
               a1,
               &v7,
               (uint8_t *)(a1 + 6 * v10 + 428),
               *(uint8_t *)(a1 + 6 * v10 + 429),
               v9,
               v8,
               v12[0],
               &v9);
    if ( result != 0 )
      return sub_1047070((int *)a1, v7, v9, v8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_stream_length_in_samples  (binary VA: 0x1051420)
// Original: stb_vorbis_stream_length_in_samples
// ----------------------------------------------------------------------------
int stb_vorbis_stream_length_in_samples(int a1)
{
  int result;
  int file_offset;
  unsigned int v3;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  uint8_t *v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  uint8_t *v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int v26;
  uint8_t v27;
  int v28;
  int v29;
  uint8_t v30;
  int v31;
  int v32;
  uint8_t v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  uint8_t v42;
  uint8_t v43;
  int v44;
  int v45;
  unsigned int v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t _g4_t_v60[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v47)) > _g4_s0 ? (4u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v48)) > _g4_s1 ? (4u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v49)) > _g4_s2 ? (4u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v50)) > _g4_s3 ? (4u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v51)) > _g4_s4 ? (4u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v52)) > _g4_s5 ? (4u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v53)) > _g4_s6 ? (4u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v54)) > _g4_s7 ? (8u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v55)) > _g4_s8 ? (12u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v56)) > _g4_s9 ? (16u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v57)) > _g4_s10 ? (16u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v58)) > _g4_s11 ? (20u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v59)) > _g4_s12 ? (24u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (30u + sizeof(_g4_t_v60)) > _g4_s13 ? (30u + sizeof(_g4_t_v60)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 30u);

  result = *(uint32_t *)(a1 + 812);
  if ( result != 0 )
    goto LABEL_2;
  file_offset = stb_vorbis_get_file_offset(a1);
  v3 = *(uint32_t *)(a1 + 44);
  v55 = file_offset;
  if ( v3 > 0xFFFF )
  {
    v4 = v3 - 0x10000;
    if ( (unsigned int)v4 < *(uint32_t *)(a1 + 52) )
      v4 = *(uint32_t *)(a1 + 52);
  }
  else
  {
    v4 = *(uint32_t *)(a1 + 52);
  }
  v5 = *(uint32_t *)(a1 + 32);
  *(uint32_t *)(a1 + 112) = 0;
  if ( v5 != 0 )
  {
    v6 = *(uint32_t *)(a1 + 36) + v4;
    v7 = *(uint32_t *)(a1 + 40);
    if ( v4 >= 0 && v6 < v7 )
    {
      *(uint32_t *)(a1 + 32) = v6;
    }
    else
    {
      *(uint32_t *)(a1 + 32) = v7;
      *(uint32_t *)(a1 + 112) = 1;
    }
  }
  else
  {
    v24 = *(uint32_t *)(a1 + 24) + v4;
    if ( v4 < 0 || v4 > v24 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v24 = 0x7FFFFFFF;
    }
    if ( fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v24, 0) != 0 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), *(uint32_t *)(a1 + 24), 2);
    }
  }
  if ( sub_104EB90(a1, &v58, &v59) != 0 )
  {
    v11 = stb_vorbis_get_file_offset(a1);
    v54 = v11;
    if ( v59 == 0 )
    {
      v56 = v4;
      v12 = v11;
      do
      {
        v13 = *(uint32_t *)(a1 + 32);
        v14 = v58;
        *(uint32_t *)(a1 + 112) = 0;
        if ( v13 != 0 )
        {
          v15 = *(uint32_t *)(a1 + 36) + v14;
          v16 = *(uint32_t *)(a1 + 40);
          if ( v14 < 0 || v15 >= v16 )
          {
            *(uint32_t *)(a1 + 32) = v16;
            *(uint32_t *)(a1 + 112) = 1;
          }
          else
          {
            *(uint32_t *)(a1 + 32) = v15;
          }
        }
        else
        {
          v17 = *(uint32_t *)(a1 + 24) + v14;
          if ( v14 < 0 || v14 > v17 )
          {
            *(uint32_t *)(a1 + 112) = 1;
            v17 = 0x7FFFFFFF;
          }
          if ( fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v17, 0) != 0 )
          {
            *(uint32_t *)(a1 + 112) = 1;
            fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), *(uint32_t *)(a1 + 24), 2);
          }
        }
        if ( sub_104EB90(a1, &v58, &v59) == 0 )
          break;
        v56 = v12 + 1;
        v12 = stb_vorbis_get_file_offset(a1);
      }
      while ( v59 == 0 );
      v54 = v12;
      v4 = v56;
    }
    v18 = *(uint32_t *)(a1 + 32);
    *(uint32_t *)(a1 + 112) = 0;
    if ( v18 != 0 )
    {
      v8 = (uint8_t *)(*(uint32_t *)(a1 + 36) + v54);
      v19 = *(uint8_t **)(a1 + 40);
      if ( v54 >= 0 && v8 < v19 )
      {
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8);
      }
      else
      {
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v19);
        *(uint32_t *)(a1 + 112) = 1;
        v8 = v19;
      }
    }
    else
    {
      v46 = *(uint32_t *)(a1 + 24) + v54;
      if ( v54 < 0 || v54 > v46 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        v46 = 0x7FFFFFFF;
      }
      if ( fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v46, 0) != 0 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), *(uint32_t *)(a1 + 24), 2);
      }
      v8 = *(uint8_t **)(a1 + 32);
    }
    if ( v8 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v8 + 6) > *(uint32_t *)(a1 + 40) )
      {
        *(uint32_t *)(a1 + 112) = 1;
        goto LABEL_44;
      }
      v60[0] = *(uint32_t *)v8;
      LOWORD(v60[1]) = *((uint16_t *)v8 + 2);
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8 + 6);
      v8 += 6;
    }
    else
    {
      if ( fread(v60, 6u, 1u, *(vox::StreamCursorInterface::Self **)(a1 + 20)) != 1 )
        *(uint32_t *)(a1 + 112) = 1;
      v8 = *(uint8_t **)(a1 + 32);
    }
    if ( v8 == nullptr )
    {
      v45 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      v20 = (uint8_t)v45;
      if ( v45 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        v20 = 0;
      }
      v8 = *(uint8_t **)(a1 + 32);
      goto LABEL_109;
    }
LABEL_44:
    if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v8) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v20 = 0;
      goto LABEL_46;
    }
    LOBYTE(v20) = *v8++;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8);
    v20 = (uint8_t)v20;
LABEL_109:
    if ( v8 == nullptr )
    {
      v53 = v20;
      v44 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      v20 = v53;
      v34 = (uint8_t)v44 << 8;
      if ( v44 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        v34 = 0;
      }
      v8 = *(uint8_t **)(a1 + 32);
      goto LABEL_89;
    }
LABEL_46:
    if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v8) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_48;
    }
    v33 = *v8++;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8);
    v34 = v33 << 8;
LABEL_89:
    v20 += v34;
    if ( v8 == nullptr )
    {
      v49 = v20;
      v35 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      v20 = v49;
      v36 = (uint8_t)v35 << 16;
      if ( v35 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        v36 = 0;
      }
      v8 = *(uint8_t **)(a1 + 32);
      goto LABEL_93;
    }
LABEL_48:
    if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v8) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_50;
    }
    v42 = *v8++;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8);
    v36 = v42 << 16;
LABEL_93:
    v20 += v36;
    if ( v8 == nullptr )
    {
      v50 = v20;
      v37 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      v20 = v50;
      v38 = v37 << 24;
      if ( v37 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        v38 = 0;
      }
      v8 = *(uint8_t **)(a1 + 32);
      goto LABEL_97;
    }
LABEL_50:
    if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v8) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_52;
    }
    v41 = *v8++;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8);
    v38 = v41 << 24;
LABEL_97:
    v20 += v38;
    if ( v8 == nullptr )
    {
      v51 = v20;
      v39 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      v57 = (uint8_t)v39;
      v20 = v51;
      if ( v39 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        v57 = 0;
      }
      v8 = *(uint8_t **)(a1 + 32);
      goto LABEL_101;
    }
LABEL_52:
    if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v8) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v57 = 0;
      goto LABEL_54;
    }
    v43 = *v8++;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8);
    v57 = v43;
LABEL_101:
    if ( v8 == nullptr )
    {
      v52 = v20;
      v40 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      v20 = v52;
      v31 = (uint8_t)v40 << 8;
      if ( v40 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        v31 = 0;
      }
      v8 = *(uint8_t **)(a1 + 32);
      goto LABEL_84;
    }
LABEL_54:
    if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v8) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_56;
    }
    v30 = *v8++;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8);
    v31 = v30 << 8;
LABEL_84:
    v57 += v31;
    if ( v8 == nullptr )
    {
      v48 = v20;
      v32 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      v20 = v48;
      v28 = (uint8_t)v32 << 16;
      if ( v32 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        v28 = 0;
      }
      v8 = *(uint8_t **)(a1 + 32);
      goto LABEL_79;
    }
LABEL_56:
    if ( *(uint32_t *)(a1 + 40) <= (unsigned int)(uintptr_t)(v8) )
    {
      *(uint32_t *)(a1 + 112) = 1;
      goto LABEL_58;
    }
    v27 = *v8++;
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8);
    v28 = v27 << 16;
LABEL_79:
    v57 += v28;
    if ( v8 == nullptr )
    {
      v47 = v20;
      v29 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      v20 = v47;
      v21 = v29 << 24;
      if ( v29 == -1 )
      {
        *(uint32_t *)(a1 + 112) = 1;
        v21 = 0;
      }
      v8 = *(uint8_t **)(a1 + 32);
      goto LABEL_60;
    }
LABEL_58:
    if ( *(uint32_t *)(a1 + 40) > (unsigned int)(uintptr_t)(v8) )
    {
      v26 = *v8++;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v8);
      v21 = v26 << 24;
    }
    else
    {
      *(uint32_t *)(a1 + 112) = 1;
      v21 = 0;
    }
LABEL_60:
    v22 = v57 + v21;
    if ( v22 == -1 && v20 == -1 )
    {
      *(uint32_t *)(a1 + 116) = 36;
      *(uint32_t *)(a1 + 812) = -1;
    }
    else
    {
      *(uint32_t *)(a1 + 88) = -1;
      *(uint32_t *)(a1 + 84) = v4;
      if ( v22 != 0 )
        v20 = -2;
      *(uint32_t *)(a1 + 76) = v54;
      v25 = v58;
      *(uint32_t *)(a1 + 812) = v20;
      *(uint32_t *)(a1 + 80) = v25;
      *(uint32_t *)(a1 + 92) = v20;
    }
    goto LABEL_13;
  }
  *(uint32_t *)(a1 + 116) = 36;
  *(uint32_t *)(a1 + 812) = -1;
  v8 = *(uint8_t **)(a1 + 32);
LABEL_13:
  *(uint32_t *)(a1 + 112) = 0;
  if ( v8 != nullptr )
  {
    v9 = *(uint32_t *)(a1 + 36) + v55;
    v10 = *(uint32_t *)(a1 + 40);
    if ( v55 >= 0 && v9 < v10 )
    {
      *(uint32_t *)(a1 + 32) = v9;
      result = *(uint32_t *)(a1 + 812);
    }
    else
    {
      *(uint32_t *)(a1 + 32) = v10;
      *(uint32_t *)(a1 + 112) = 1;
      result = *(uint32_t *)(a1 + 812);
    }
  }
  else
  {
    v23 = *(uint32_t *)(a1 + 24) + v55;
    if ( v55 < 0 || v55 > v23 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v23 = 0x7FFFFFFF;
    }
    if ( fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v23, 0) != 0 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), *(uint32_t *)(a1 + 24), 2);
    }
    result = *(uint32_t *)(a1 + 812);
  }
LABEL_2:
  if ( result == -1 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_stream_length_in_seconds  (binary VA: 0x1051ba0)
// Original: stb_vorbis_stream_length_in_seconds
// ----------------------------------------------------------------------------
long double stb_vorbis_stream_length_in_seconds(uint32_t *a1)
{
  unsigned int v1;

  v1 = stb_vorbis_stream_length_in_samples((int)(uintptr_t)(a1));
  return (float)((float)((float)((float)HIWORD(v1) * 65536.0) + (float)(uint16_t)v1)
               / (float)((float)((float)HIWORD(*a1) * 65536.0) + (float)(uint16_t)*a1));
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_frame_float  (binary VA: 0x1051c10)
// Original: stb_vorbis_get_frame_float
// ----------------------------------------------------------------------------
int stb_vorbis_get_frame_float(uint8_t *a1, int *a2, uint32_t *a3)
{
  int v3;
  uint8_t *v4;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  __m128i v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[3];
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[3];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v19)) > _g4_s5 ? (20u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v21)) > _g4_s7 ? (28u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v22)) > _g4_s8 ? (32u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v23)) > _g4_s9 ? (44u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v24)) > _g4_s10 ? (48u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v25)) > _g4_s11 ? (52u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v26)) > _g4_s12 ? (56u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v27)) > _g4_s13 ? (60u + sizeof(_g4_t_v27)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);

  v4 = a1;
  if ( sub_10494C0((int)(uintptr_t)(a1), v22, v3, &v26, &v24, v27, &v25) == 0
    || sub_104B770((int)(uintptr_t)(a1), &v23, &a1[6 * v25 + 428], a1[6 * v25 + 429], v22[0], v24, v27[0], v22) == 0 )
  {
    *((uint32_t *)a1 + 361) = 0;
    *((uint32_t *)a1 + 360) = 0;
    return 0;
  }
  v6 = sub_1047070((int *)a1, v23, v22[0], v24);
  v7 = *((uint32_t *)a1 + 1);
  v20 = v6;
  v23 = v6;
  v21 = v7;
  if ( v7 <= 0 )
  {
    v18 = v22[0];
  }
  else
  {
    v18 = v22[0];
    v17 = 4 * v22[0];
    v8 = -((uint8_t)((uint8_t)(uintptr_t)a1 & 0xF) >> 2) & 3;
    if ( v8 > v7 )
      v8 = v7;
    v9 = 0;
    if ( v8 == 0 )
      goto LABEL_11;
    do
    {
      *(uint32_t *)&a1[4 * v9 + 880] = v17 + *(uint32_t *)&a1[4 * v9 + 816];
      ++v9;
    }
    while ( v8 > v9 );
    if ( v7 != v8 )
    {
LABEL_11:
      v16 = v7 - v8;
      v19 = (v7 - v8) >> 2;
      v15 = 4 * v19;
      if ( 4 * v19 == 0 )
        goto LABEL_23;
      v10 = (int)(uintptr_t)(&a1[4 * v8 + 880]);
      v14 = (int)(uintptr_t)(&a1[4 * v8 + 816]);
      v11 = 0;
      v12 = 0;
      v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v17), 0);
      do
      {
        ++v12;
        *(__m128i *)(v10 + v11) = _mm_add_epi32(*(__m128i *)(v14 + v11), v13);
        v11 += 16;
      }
      while ( v12 < v19 );
      v9 += v15;
      v4 = a1;
      if ( v16 != v15 )
      {
LABEL_23:
        do
        {
          *(uint32_t *)&v4[4 * v9 + 880] = v17 + *(uint32_t *)&v4[4 * v9 + 816];
          ++v9;
        }
        while ( v21 > (int)v9 );
      }
    }
  }
  *((uint32_t *)v4 + 360) = v18;
  *((uint32_t *)v4 + 361) = v18 + v20;
  if ( a2 != nullptr )
    *a2 = v21;
  if ( a3 == nullptr )
    return v20;
  *a3 = (uint32_t)(uintptr_t)(v4 + 880);
  return v20;
}

// ----------------------------------------------------------------------------
// Function: sub_1051E30  (binary VA: 0x1051e30)
// Original: sub_1051E30
// ----------------------------------------------------------------------------
int sub_1051E30(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6;
  unsigned int v7;
  bool v8;
  unsigned int v9;
  int v10;
  uint8_t v12;
  int v13;
  unsigned int v14;
  char *v15;
  char v16;
  int v17;
  int v19;
  uint8_t *v20;
  int v21;
  char *v22;
  char v23;
  char *v24;
  char v25;
  uint8_t *v26;
  int v27;
  char *v28;
  char v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  uint8_t v40;
  int v41;
  unsigned int v42;
  int v43;
  char *v44;
  char v45;
  char *v46;
  char v47;
  char *v48;
  char v49;
  char *v50;
  char v51;
  char *v52;
  char v53;
  int v54;
  int v55;
  int v56;
  int v57;
  bool v58;
  char v59; // di
  int v60;
  bool v61;
  char *v62;
  char v63;
  char *v64;
  char v65;
  char *v66;
  char v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  uint8_t v71;
  int v72;
  unsigned int v73;
  char *v74;
  char *v75;
  char v76;
  int v77;
  int v78;
  int v79;
  int i;
  int v81;
  char *v82;
  char v83;
  int v84;
  int v85;
  int v86;
  int v87;
  char v88;
  char *v89;
  char v90;
  int v91;
  int v92;
  unsigned int v93;
  int v94;
  char *v95;
  char v96;
  char *v97;
  char v98;
  char v99;
  char *v100;
  char v101;
  char *v102;
  char v103;
  char *v104;
  char v105;
  char *v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  unsigned int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef bool _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v124)) > _g4_s0 ? (4u + sizeof(_g4_t_v124)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v125)) > _g4_s1 ? (12u + sizeof(_g4_t_v125)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v126)) > _g4_s2 ? (16u + sizeof(_g4_t_v126)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v127)) > _g4_s3 ? (32u + sizeof(_g4_t_v127)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v128)) > _g4_s4 ? (32u + sizeof(_g4_t_v128)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v129)) > _g4_s5 ? (36u + sizeof(_g4_t_v129)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v130)) > _g4_s6 ? (36u + sizeof(_g4_t_v130)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v132)) > _g4_s7 ? (44u + sizeof(_g4_t_v132)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v133)) > _g4_s8 ? (44u + sizeof(_g4_t_v133)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v134)) > _g4_s9 ? (56u + sizeof(_g4_t_v134)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v135)) > _g4_s10 ? (60u + sizeof(_g4_t_v135)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v136)) > _g4_s11 ? (64u + sizeof(_g4_t_v136)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v137)) > _g4_s12 ? (68u + sizeof(_g4_t_v137)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v138)) > _g4_s13 ? (72u + sizeof(_g4_t_v138)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v139)) > _g4_s14 ? (76u + sizeof(_g4_t_v139)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 4u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 12u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 16u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 32u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 32u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 36u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 36u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 44u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 44u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 56u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 60u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 64u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 68u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 72u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 76u);

  *(uint32_t *)(a1 + 112) = 0;
  if ( *(uint32_t *)(a1 + 32) != 0 )
  {
    v6 = (unsigned int)a2 >> 31;
    v7 = a2 + *(uint32_t *)(a1 + 36);
    v8 = a2 >= 0;
    v9 = *(uint32_t *)(a1 + 40);
    v126 = v6;
    if ( v8 && v7 < v9 )
    {
      *(uint32_t *)(a1 + 32) = v7;
      v10 = 0;
    }
    else
    {
      *(uint32_t *)(a1 + 32) = v9;
      *(uint32_t *)(a1 + 112) = 1;
      v10 = 1;
    }
  }
  else
  {
    v93 = a2 + *(uint32_t *)(a1 + 24);
    v126 = a2 < 0;
    if ( a2 < 0 || a2 > v93 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v93 = 0x7FFFFFFF;
    }
    if ( fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v93, 0) != 0 )
    {
      v94 = *(uint32_t *)(a1 + 24);
      *(uint32_t *)(a1 + 112) = 1;
      fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v94, 2);
    }
    v10 = *(uint32_t *)(a1 + 112);
  }
  *(uint32_t *)(a1 + 1396) = -1;
  *(uint32_t *)(a1 + 1444) = 0;
  *(uint32_t *)(a1 + 1440) = 0;
  if ( v10 != 0 )
    goto LABEL_28;
  v125 = 0;
  while ( 1 )
  {
LABEL_7:
    if ( *(uint32_t *)(a1 + 1396) == -1 )
    {
      v15 = *(char **)(a1 + 32);
      if ( v15 != nullptr )
      {
        if ( (unsigned int)(uintptr_t)(v15) >= *(uint32_t *)(a1 + 40) )
          goto LABEL_49;
        v16 = *v15;
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v15 + 1);
        v17 = *(uint32_t *)(a1 + 112);
      }
      else
      {
        v54 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
        if ( v54 == -1 )
          goto LABEL_49;
        v16 = v54;
        v17 = *(uint32_t *)(a1 + 112);
      }
      if ( v17 != 0 || v16 != 79 )
        goto LABEL_28;
      v50 = *(char **)(a1 + 32);
      if ( v50 != nullptr )
      {
        if ( (unsigned int)(uintptr_t)(v50) >= *(uint32_t *)(a1 + 40) )
          goto LABEL_49;
        v51 = *v50;
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v50 + 1);
      }
      else
      {
        v87 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
        if ( v87 == -1 )
          goto LABEL_49;
        v51 = v87;
      }
      if ( v51 != 103 )
        goto LABEL_28;
      v52 = *(char **)(a1 + 32);
      if ( v52 != nullptr )
      {
        if ( (unsigned int)(uintptr_t)(v52) >= *(uint32_t *)(a1 + 40) )
          goto LABEL_49;
        v53 = *v52;
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v52 + 1);
      }
      else
      {
        v120 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
        if ( v120 == -1 )
        {
LABEL_49:
          *(uint32_t *)(a1 + 112) = 1;
          goto LABEL_28;
        }
        v53 = v120;
      }
      if ( v53 != 103 || (uint8_t)sub_1047790(a1) != 83 || sub_1047F90(a1) == 0 )
        goto LABEL_28;
      if ( (*(uint8_t *)(a1 + 1391) & 1) != 0 )
      {
        *(uint32_t *)(a1 + 1400) = 0;
        *(uint8_t *)(a1 + 1392) = 0;
        goto LABEL_28;
      }
      while ( *(uint32_t *)(a1 + 1396) == -1 )
      {
        v26 = *(uint8_t **)(a1 + 32);
        if ( v26 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v26) >= *(uint32_t *)(a1 + 40) )
            goto LABEL_49;
          LOBYTE(v19) = *v26;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v26 + 1);
        }
        else
        {
          v19 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          if ( v19 == -1 )
          {
            *(uint32_t *)(a1 + 112) = 1;
            goto LABEL_28;
          }
        }
        if ( (uint8_t)v19 != 79 )
          goto LABEL_28;
        v20 = *(uint8_t **)(a1 + 32);
        if ( v20 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v20) >= *(uint32_t *)(a1 + 40) )
            goto LABEL_49;
          LOBYTE(v21) = *v20;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v20 + 1);
        }
        else
        {
          v21 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          if ( v21 == -1 )
          {
            *(uint32_t *)(a1 + 112) = 1;
            goto LABEL_28;
          }
        }
        if ( (uint8_t)v21 != 103 )
          goto LABEL_28;
        v22 = *(char **)(a1 + 32);
        if ( v22 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v22) >= *(uint32_t *)(a1 + 40) )
            goto LABEL_49;
          v23 = *v22;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v22 + 1);
        }
        else
        {
          v91 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          if ( v91 == -1 )
            goto LABEL_49;
          v23 = v91;
        }
        if ( v23 != 103 )
          goto LABEL_28;
        v24 = *(char **)(a1 + 32);
        if ( v24 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v24) >= *(uint32_t *)(a1 + 40) )
            goto LABEL_49;
          v25 = *v24;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v24 + 1);
        }
        else
        {
          v92 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          if ( v92 == -1 )
            goto LABEL_49;
          v25 = v92;
        }
        if ( v25 != 83 || sub_1047F90(a1) == 0 || (*(uint8_t *)(a1 + 1391) & 1) != 0 )
          goto LABEL_28;
      }
    }
    *(uint32_t *)(a1 + 1400) = 0;
    *(uint32_t *)(a1 + 1412) = 0;
    *(uint32_t *)(a1 + 1416) = 0;
    *(uint8_t *)(a1 + 1392) = 0;
    if ( sub_1049200(a1, 1, v6) == 0 )
      break;
    v12 = *(uint8_t *)(a1 + 1392);
    while ( 1 )
    {
      if ( v12 != 0 )
        goto LABEL_20;
      if ( *(uint32_t *)(a1 + 1400) != 0 )
        goto LABEL_50;
      v13 = *(uint32_t *)(a1 + 1396);
      if ( v13 == -1 )
        break;
LABEL_15:
      v12 = *(uint8_t *)(a1 + v13 + 1136);
      v6 = v12;
      *(uint32_t *)(a1 + 1396) = v13 + 1;
      if ( v12 != 255 )
      {
        *(uint32_t *)(a1 + 1400) = 1;
        *(uint32_t *)(a1 + 1404) = v13;
      }
      if ( v13 + 1 >= *(uint32_t *)(a1 + 1132) )
        *(uint32_t *)(a1 + 1396) = -1;
      *(uint8_t *)(a1 + 1392) = v12;
      if ( v12 == 0 )
      {
LABEL_50:
        v27 = *(uint32_t *)(a1 + 112);
        goto LABEL_51;
      }
LABEL_20:
      v14 = *(uint32_t *)(a1 + 32);
      --v12;
      ++*(uint32_t *)(a1 + 1416);
      *(uint8_t *)(a1 + 1392) = v12;
      if ( v14 != 0 )
      {
        if ( v14 >= *(uint32_t *)(a1 + 40) )
          *(uint32_t *)(a1 + 112) = 1;
        else
          *(uint32_t *)(a1 + 32) = v14 + 1;
      }
      else
      {
        if ( fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20)) == -1 )
          *(uint32_t *)(a1 + 112) = 1;
        v12 = *(uint8_t *)(a1 + 1392);
      }
      *(uint32_t *)(a1 + 1412) = 0;
    }
    *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
    v28 = *(char **)(a1 + 32);
    if ( v28 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v28) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_63;
      v29 = *v28;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v28 + 1);
    }
    else
    {
      v55 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v55 == -1 )
        goto LABEL_161;
      v29 = v55;
    }
    if ( v29 != 79 )
      goto LABEL_60;
    v46 = *(char **)(a1 + 32);
    if ( v46 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v46) >= *(uint32_t *)(a1 + 40) )
        goto LABEL_63;
      v47 = *v46;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v46 + 1);
    }
    else
    {
      v86 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v86 == -1 )
        goto LABEL_161;
      v47 = v86;
    }
    if ( v47 != 103 )
      goto LABEL_60;
    v48 = *(char **)(a1 + 32);
    if ( v48 != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v48) >= *(uint32_t *)(a1 + 40) )
      {
LABEL_63:
        *(uint32_t *)(a1 + 112) = 1;
        v27 = 1;
LABEL_61:
        *(uint32_t *)(a1 + 116) = 30;
LABEL_62:
        *(uint32_t *)(a1 + 1400) = 1;
        goto LABEL_51;
      }
      v49 = *v48;
      *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v48 + 1);
    }
    else
    {
      v119 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
      if ( v119 == -1 )
      {
LABEL_161:
        *(uint32_t *)(a1 + 112) = 1;
LABEL_60:
        v27 = *(uint32_t *)(a1 + 112);
        goto LABEL_61;
      }
      v49 = v119;
    }
    if ( v49 != 103 || (uint8_t)sub_1047790(a1) != 83 )
      goto LABEL_60;
    if ( sub_1047F90(a1) == 0 )
    {
      v27 = *(uint32_t *)(a1 + 112);
      goto LABEL_62;
    }
    if ( (*(uint8_t *)(a1 + 1391) & 1) != 0 )
    {
      v13 = *(uint32_t *)(a1 + 1396);
      goto LABEL_15;
    }
    *(uint32_t *)(a1 + 116) = 32;
    v27 = *(uint32_t *)(a1 + 112);
LABEL_51:
    *(uint32_t *)(a1 + 1412) = 0;
    if ( v27 != 0 )
    {
LABEL_28:
      *(uint32_t *)(a1 + 116) = 37;
      return 0;
    }
  }
  v30 = *(uint32_t *)(a1 + 424);
  v31 = v30 - 1;
  if ( (unsigned int)(v30 - 1) > 0x3FFF )
  {
    if ( (unsigned int)v31 > 0xFFFFFF )
    {
      if ( (unsigned int)v31 <= 0x1FFFFFFF )
      {
        v32 = byte_1CC1C80[v31 >> 25] + 25;
      }
      else
      {
        v32 = 0;
        if ( v31 >= 0 )
          v32 = byte_1CC1C80[v31 >> 30] + 30;
      }
    }
    else if ( (unsigned int)v31 > 0x7FFFF )
    {
      v32 = byte_1CC1C80[v31 >> 20] + 20;
    }
    else
    {
      v32 = byte_1CC1C80[v31 >> 15] + 15;
    }
  }
  else if ( (unsigned int)v31 <= 0xF )
  {
    v32 = byte_1CC1C7F[v30];
  }
  else if ( (unsigned int)v31 > 0x1FF )
  {
    v32 = byte_1CC1C80[v31 >> 10] + 10;
  }
  else
  {
    v32 = byte_1CC1C80[v31 >> 5] + 5;
  }
  v33 = sub_1049200(a1, v32, v6);
  if ( v33 == -1 || v33 >= *(uint32_t *)(a1 + 424) )
    goto LABEL_28;
  v34 = 3 * v33;
  v35 = a1 + 2 * v34 + 416;
  if ( *(uint8_t *)(a1 + 2 * v34 + 428) != 0 )
  {
    v124 = *(uint32_t *)(a1 + 132);
    v132 = sub_1049200(a1, 1, v124);
    v57 = sub_1049200(a1, 1, v56);
    v127 = v124 >> 1;
    v58 = *(uint8_t *)(v35 + 12) != 0;
    v59 = v58;
    if ( v132 != 0 || !v58 )
    {
      v37 = v124 >> 1;
      v61 = v57 == 0;
      v36 = 0;
    }
    else
    {
      v60 = *(uint32_t *)(a1 + 128);
      v36 = (v124 - v60) >> 2;
      v59 = 1;
      v37 = (v124 + v60) >> 2;
      v61 = v57 == 0;
    }
    if ( v61 && v59 != 0 )
      v127 = (3 * v124 - *(uint32_t *)(a1 + 128)) >> 2;
  }
  else
  {
    v36 = 0;
    v37 = *(int *)(a1 + 128) >> 1;
    v127 = v37;
  }
  v38 = v36;
  if ( v125 == 0 )
    v38 = v37;
  v129 = v38;
  v39 = a3 + v127 - v38;
  if ( v39 <= a4 )
  {
LABEL_75:
    v40 = *(uint8_t *)(a1 + 1392);
    while ( 1 )
    {
      if ( v40 != 0 )
        goto LABEL_84;
      v6 = *(uint32_t *)(a1 + 1400);
      if ( v6 != 0 )
      {
LABEL_88:
        v43 = *(uint32_t *)(a1 + 112);
        goto LABEL_89;
      }
LABEL_78:
      v41 = *(uint32_t *)(a1 + 1396);
      if ( v41 == -1 )
      {
        *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
        v44 = *(char **)(a1 + 32);
        if ( v44 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v44) >= *(uint32_t *)(a1 + 40) )
            goto LABEL_127;
          v45 = *v44;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v44 + 1);
        }
        else
        {
          v85 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          if ( v85 == -1 )
            goto LABEL_250;
          v45 = v85;
        }
        if ( v45 != 79 )
          goto LABEL_98;
        v62 = *(char **)(a1 + 32);
        if ( v62 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v62) >= *(uint32_t *)(a1 + 40) )
            goto LABEL_127;
          v63 = *v62;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v62 + 1);
        }
        else
        {
          v123 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          if ( v123 == -1 )
          {
LABEL_250:
            *(uint32_t *)(a1 + 112) = 1;
LABEL_98:
            v43 = *(uint32_t *)(a1 + 112);
            goto LABEL_99;
          }
          v63 = v123;
        }
        if ( v63 != 103 )
          goto LABEL_98;
        v64 = *(char **)(a1 + 32);
        if ( v64 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v64) >= *(uint32_t *)(a1 + 40) )
            goto LABEL_127;
          v65 = *v64;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v64 + 1);
        }
        else
        {
          v122 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          if ( v122 == -1 )
            goto LABEL_250;
          v65 = v122;
        }
        if ( v65 != 103 )
          goto LABEL_98;
        v66 = *(char **)(a1 + 32);
        if ( v66 != nullptr )
        {
          if ( (unsigned int)(uintptr_t)(v66) >= *(uint32_t *)(a1 + 40) )
          {
LABEL_127:
            *(uint32_t *)(a1 + 112) = 1;
            v43 = 1;
LABEL_99:
            *(uint32_t *)(a1 + 116) = 30;
            goto LABEL_100;
          }
          v67 = *v66;
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v66 + 1);
        }
        else
        {
          v121 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          if ( v121 == -1 )
            goto LABEL_250;
          v67 = v121;
        }
        if ( v67 != 83 )
          goto LABEL_98;
        if ( sub_1047F90(a1) == 0 )
        {
          v43 = *(uint32_t *)(a1 + 112);
LABEL_100:
          *(uint32_t *)(a1 + 1400) = 1;
LABEL_89:
          if ( v43 != 0 )
            goto LABEL_28;
          a3 += v127 - v129;
          ++v125;
          *(uint32_t *)(a1 + 1444) = 0;
          *(uint32_t *)(a1 + 1440) = 0;
          goto LABEL_7;
        }
        if ( (*(uint8_t *)(a1 + 1391) & 1) == 0 )
        {
          *(uint32_t *)(a1 + 116) = 32;
          v43 = *(uint32_t *)(a1 + 112);
          goto LABEL_89;
        }
        v41 = *(uint32_t *)(a1 + 1396);
      }
      v40 = *(uint8_t *)(a1 + v41 + 1136);
      v6 = v40;
      *(uint32_t *)(a1 + 1396) = v41 + 1;
      if ( v40 != 255 )
      {
        *(uint32_t *)(a1 + 1400) = 1;
        *(uint32_t *)(a1 + 1404) = v41;
      }
      if ( v41 + 1 >= *(uint32_t *)(a1 + 1132) )
        *(uint32_t *)(a1 + 1396) = -1;
      *(uint8_t *)(a1 + 1392) = v40;
      if ( v40 == 0 )
        goto LABEL_88;
      while ( 1 )
      {
LABEL_84:
        v42 = *(uint32_t *)(a1 + 32);
        --v40;
        ++*(uint32_t *)(a1 + 1416);
        *(uint8_t *)(a1 + 1392) = v40;
        if ( v42 == 0 )
        {
          if ( fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20)) == -1 )
            *(uint32_t *)(a1 + 112) = 1;
          goto LABEL_75;
        }
        if ( v42 < *(uint32_t *)(a1 + 40) )
          break;
        *(uint32_t *)(a1 + 112) = 1;
        if ( v40 == 0 )
        {
          v6 = *(uint32_t *)(a1 + 1400);
          if ( v6 != 0 )
            goto LABEL_88;
          goto LABEL_78;
        }
      }
      *(uint32_t *)(a1 + 32) = v42 + 1;
    }
  }
  v128 = v37 - v36;
  v133 = v37 - v36;
  if ( a4 <= a3 + v37 - v36 )
  {
    --v125;
    v133 = -1;
    v128 = -1;
  }
  v68 = *(uint32_t *)(a1 + 32);
  *(uint32_t *)(a1 + 112) = 0;
  if ( v68 != 0 )
  {
    v69 = *(uint32_t *)(a1 + 36) + a2;
    v70 = *(uint32_t *)(a1 + 40);
    if ( v126 || v69 >= v70 )
    {
      *(uint32_t *)(a1 + 32) = v70;
      *(uint32_t *)(a1 + 112) = 1;
    }
    else
    {
      *(uint32_t *)(a1 + 32) = v69;
    }
  }
  else
  {
    v112 = *(uint32_t *)(a1 + 24) + a2;
    if ( v126 || a2 > v112 )
    {
      *(uint32_t *)(a1 + 112) = 1;
      v112 = 0x7FFFFFFF;
    }
    if ( fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v112, 0) != 0 )
    {
      v113 = *(uint32_t *)(a1 + 24);
      *(uint32_t *)(a1 + 112) = 1;
      fseek(*(vox::StreamCursorInterface::Self **)(a1 + 20), v113, 2);
    }
  }
  *(uint32_t *)(a1 + 1396) = -1;
  if ( v125 > 0 )
  {
    v130 = 0;
    while ( 2 )
    {
      v74 = *(char **)(a1 + 32);
      if ( v74 != nullptr )
      {
        if ( (unsigned int)(uintptr_t)(v74) >= *(uint32_t *)(a1 + 40) )
        {
          *(uint32_t *)(a1 + 112) = 1;
          v71 = *(uint8_t *)(a1 + 1392);
          goto LABEL_170;
        }
        v83 = *v74;
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v74 + 1);
        v84 = *(uint32_t *)(a1 + 112);
LABEL_210:
        if ( v84 == 0 )
        {
          if ( v83 != 79 )
          {
LABEL_212:
            *(uint32_t *)(a1 + 116) = 30;
            v71 = *(uint8_t *)(a1 + 1392);
            goto LABEL_170;
          }
          v95 = *(char **)(a1 + 32);
          if ( v95 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v95) < *(uint32_t *)(a1 + 40) )
            {
              v96 = *v95;
              *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v95 + 1);
              goto LABEL_254;
            }
LABEL_282:
            *(uint32_t *)(a1 + 112) = 1;
            goto LABEL_212;
          }
          v115 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
          v96 = v115;
          if ( v115 == -1 )
            goto LABEL_282;
LABEL_254:
          if ( v96 != 103 )
            goto LABEL_212;
          v97 = *(char **)(a1 + 32);
          if ( v97 != nullptr )
          {
            if ( (unsigned int)(uintptr_t)(v97) >= *(uint32_t *)(a1 + 40) )
              goto LABEL_282;
            v98 = *v97;
            *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v97 + 1);
          }
          else
          {
            v116 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            v98 = v116;
            if ( v116 == -1 )
              goto LABEL_282;
          }
          if ( v98 != 103 || (uint8_t)sub_1047790(a1) != 83 )
            goto LABEL_212;
          if ( sub_1047F90(a1) != 0 )
          {
            if ( (*(uint8_t *)(a1 + 1391) & 1) != 0 )
            {
              *(uint32_t *)(a1 + 1400) = 0;
              *(uint8_t *)(a1 + 1392) = 0;
              *(uint32_t *)(a1 + 116) = 32;
              v71 = 0;
              goto LABEL_170;
            }
            while ( *(uint32_t *)(a1 + 1396) == -1 )
            {
              v106 = *(char **)(a1 + 32);
              if ( v106 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v106) >= *(uint32_t *)(a1 + 40) )
                  goto LABEL_282;
                v99 = *v106;
                *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v106 + 1);
              }
              else
              {
                v107 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
                if ( v107 == -1 )
                  goto LABEL_282;
                v99 = v107;
              }
              if ( v99 != 79 )
                goto LABEL_212;
              v100 = *(char **)(a1 + 32);
              if ( v100 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v100) >= *(uint32_t *)(a1 + 40) )
                  goto LABEL_282;
                v101 = *v100;
                *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v100 + 1);
              }
              else
              {
                v108 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
                if ( v108 == -1 )
                  goto LABEL_282;
                v101 = v108;
              }
              if ( v101 != 103 )
                goto LABEL_212;
              v102 = *(char **)(a1 + 32);
              if ( v102 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v102) >= *(uint32_t *)(a1 + 40) )
                  goto LABEL_282;
                v103 = *v102;
                *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v102 + 1);
              }
              else
              {
                v118 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
                if ( v118 == -1 )
                  goto LABEL_282;
                v103 = v118;
              }
              if ( v103 != 103 )
                goto LABEL_212;
              v104 = *(char **)(a1 + 32);
              if ( v104 != nullptr )
              {
                if ( (unsigned int)(uintptr_t)(v104) >= *(uint32_t *)(a1 + 40) )
                  goto LABEL_282;
                v105 = *v104;
                *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v104 + 1);
              }
              else
              {
                v117 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
                if ( v117 == -1 )
                  goto LABEL_282;
                v105 = v117;
              }
              if ( v105 != 83 )
                goto LABEL_212;
              if ( sub_1047F90(a1) == 0 )
                goto LABEL_189;
              if ( (*(uint8_t *)(a1 + 1391) & 1) != 0 )
              {
                *(uint32_t *)(a1 + 116) = 32;
                v71 = *(uint8_t *)(a1 + 1392);
                goto LABEL_170;
              }
            }
LABEL_169:
            *(uint32_t *)(a1 + 1400) = 0;
            *(uint32_t *)(a1 + 1412) = 0;
            *(uint32_t *)(a1 + 1416) = 0;
            *(uint8_t *)(a1 + 1392) = 0;
            v71 = 0;
LABEL_170:
            if ( v71 != 0 )
              goto LABEL_178;
            if ( *(uint32_t *)(a1 + 1400) != 0 )
              goto LABEL_182;
LABEL_172:
            v72 = *(uint32_t *)(a1 + 1396);
            if ( v72 != -1 )
            {
LABEL_173:
              v71 = *(uint8_t *)(a1 + v72 + 1136);
              v39 = v71;
              *(uint32_t *)(a1 + 1396) = v72 + 1;
              if ( v71 != 255 )
              {
                *(uint32_t *)(a1 + 1400) = 1;
                *(uint32_t *)(a1 + 1404) = v72;
              }
              if ( v72 + 1 >= *(uint32_t *)(a1 + 1132) )
                *(uint32_t *)(a1 + 1396) = -1;
              *(uint8_t *)(a1 + 1392) = v71;
              if ( v71 != 0 )
              {
LABEL_178:
                while ( 1 )
                {
                  v73 = *(uint32_t *)(a1 + 32);
                  --v71;
                  ++*(uint32_t *)(a1 + 1416);
                  *(uint8_t *)(a1 + 1392) = v71;
                  if ( v73 == 0 )
                    break;
                  if ( v73 < *(uint32_t *)(a1 + 40) )
                  {
                    *(uint32_t *)(a1 + 32) = v73 + 1;
                    goto LABEL_170;
                  }
                  *(uint32_t *)(a1 + 112) = 1;
                  if ( v71 == 0 )
                  {
                    if ( *(uint32_t *)(a1 + 1400) == 0 )
                      goto LABEL_172;
                    goto LABEL_182;
                  }
                }
                if ( fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20)) == -1 )
                  goto LABEL_213;
                break;
              }
              goto LABEL_182;
            }
            *(uint32_t *)(a1 + 1404) = *(uint32_t *)(a1 + 1132) - 1;
            v75 = *(char **)(a1 + 32);
            if ( v75 != nullptr )
            {
              if ( (unsigned int)(uintptr_t)(v75) < *(uint32_t *)(a1 + 40) )
              {
                v76 = *v75;
                *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v75 + 1);
                goto LABEL_193;
              }
LABEL_208:
              *(uint32_t *)(a1 + 112) = 1;
              goto LABEL_194;
            }
            v110 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
            if ( v110 == -1 )
              goto LABEL_208;
            v76 = v110;
LABEL_193:
            if ( v76 != 79 )
              goto LABEL_194;
            v82 = *(char **)(a1 + 32);
            if ( v82 != nullptr )
            {
              if ( (unsigned int)(uintptr_t)(v82) >= *(uint32_t *)(a1 + 40) )
                goto LABEL_208;
              v88 = *v82;
              *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v82 + 1);
            }
            else
            {
              v111 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
              if ( v111 == -1 )
                goto LABEL_208;
              v88 = v111;
            }
            if ( v88 != 103 )
              goto LABEL_194;
            v89 = *(char **)(a1 + 32);
            if ( v89 != nullptr )
            {
              if ( (unsigned int)(uintptr_t)(v89) >= *(uint32_t *)(a1 + 40) )
                goto LABEL_208;
              v90 = *v89;
              *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v89 + 1);
            }
            else
            {
              v114 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
              if ( v114 == -1 )
                goto LABEL_208;
              v90 = v114;
            }
            if ( v90 == 103 && (uint8_t)sub_1047790(a1) == 83 )
            {
              if ( sub_1047F90(a1) != 0 )
              {
                if ( (*(uint8_t *)(a1 + 1391) & 1) != 0 )
                {
                  v72 = *(uint32_t *)(a1 + 1396);
                  goto LABEL_173;
                }
                *(uint32_t *)(a1 + 116) = 32;
LABEL_182:
                if ( ++v130 == v125 )
                  goto LABEL_196;
LABEL_183:
                if ( *(uint32_t *)(a1 + 1396) == -1 )
                  continue;
                goto LABEL_169;
              }
            }
            else
            {
LABEL_194:
              *(uint32_t *)(a1 + 116) = 30;
            }
            ++v130;
            *(uint32_t *)(a1 + 1400) = 1;
            if ( v130 == v125 )
              goto LABEL_196;
            goto LABEL_183;
          }
        }
      }
      else
      {
        v109 = fgetc(*(vox::StreamCursorInterface::Self **)(a1 + 20));
        if ( v109 != -1 )
        {
          v83 = v109;
          v84 = *(uint32_t *)(a1 + 112);
          goto LABEL_210;
        }
LABEL_213:
        *(uint32_t *)(a1 + 112) = 1;
      }
      break;
    }
LABEL_189:
    v71 = *(uint8_t *)(a1 + 1392);
    goto LABEL_170;
  }
LABEL_196:
  if ( v128 < 0 )
  {
    *(uint32_t *)(a1 + 1008) = 0;
    if ( sub_10494C0(a1, &v136, v39, &v138, &v135, v139, &v137) != 0
      && sub_104B770(
           a1,
           &v134,
           (uint8_t *)(a1 + 6 * v137 + 428),
           *(uint8_t *)(a1 + 6 * v137 + 429),
           v136,
           v135,
           v139[0],
           &v136) != 0 )
    {
      sub_1047070((int *)a1, v134, v136, v135);
    }
  }
  else
  {
    v77 = *(uint32_t *)(a1 + 128);
    *(uint32_t *)(a1 + 1428) = v128;
    v78 = *(uint32_t *)(a1 + 4);
    v79 = v77 >> 1;
    for ( i = 0; i < v78; ++i )
    {
      v81 = 0;
      if ( v79 > 0 )
      {
        do
          *(uint32_t *)(*(uint32_t *)(a1 + 4 * i + 944) + 4 * v81++) = 0;
        while ( v81 != v79 );
        v78 = *(uint32_t *)(a1 + 4);
      }
    }
    *(uint32_t *)(a1 + 1008) = v79;
    a3 += v133;
  }
  if ( a5 == 0 || a4 == a3 )
    return 0;
  stb_vorbis_get_frame_float((uint8_t *)a1, v139, nullptr);
  *(uint32_t *)(a1 + 1440) += a4 - a3;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1052FE0  (binary VA: 0x1052fe0)
// Original: sub_1052FE0
// ----------------------------------------------------------------------------
int sub_1052FE0(uint32_t *a1, unsigned int a2, __m128d a3, int a4)
{
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __m128d v8;
  __m128d v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  bool v15;
  int v16;
  char *v17;
  char *v18;
  size_t v19;
  size_t v20;
  __m128i v21;
  size_t v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  int v26;
  __m128i v27;
  int v28;
  int v29;
  int16_t v30; // kr00_2
  int16_t v31; // kr02_2
  bool v32;
  int v33;
  char *v34;
  char v35;
  int v36;
  uint8_t v37;
  int v38;
  bool v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v48;
  unsigned int v49;
  int v50;
  int *v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef uint8_t _g4_t_v58;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef int _g4_t_file_offset;
  typedef int _g4_t_v66;
  typedef char _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef char *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int16_t _g4_t_v78;
  typedef uint8_t _g4_t_v79;
  typedef uint8_t _g4_t_dest[268];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_v55)) > _g4_s0 ? (0u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v56)) > _g4_s1 ? (8u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v57)) > _g4_s2 ? (12u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (19u + sizeof(_g4_t_v58)) > _g4_s3 ? (19u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v60)) > _g4_s4 ? (20u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v61)) > _g4_s5 ? (24u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v62)) > _g4_s6 ? (28u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v63)) > _g4_s7 ? (32u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v64)) > _g4_s8 ? (36u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_file_offset)) > _g4_s9 ? (40u + sizeof(_g4_t_file_offset)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v66)) > _g4_s10 ? (44u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v67)) > _g4_s11 ? (48u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v68)) > _g4_s12 ? (64u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v69)) > _g4_s13 ? (68u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v70)) > _g4_s14 ? (76u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v71)) > _g4_s15 ? (76u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v72)) > _g4_s16 ? (80u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v73)) > _g4_s17 ? (84u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v74)) > _g4_s18 ? (88u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v75)) > _g4_s19 ? (92u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v76)) > _g4_s20 ? (96u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v77)) > _g4_s21 ? (100u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v78)) > _g4_s22 ? (104u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (106u + sizeof(_g4_t_v79)) > _g4_s23 ? (106u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_dest)) > _g4_s24 ? (112u + sizeof(_g4_t_dest)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 19u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_file_offset &file_offset = *reinterpret_cast<_g4_t_file_offset *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 76u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 80u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 88u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 100u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 104u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 106u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 112u);

  v69 = (int)(uintptr_t)(a1);
  v57 = a1[19];
  if ( v57 == 0 )
  {
    if ( stb_vorbis_stream_length_in_samples((int)(uintptr_t)(a1)) == 0 )
    {
      *(uint32_t *)(v69 + 116) = 36;
      return 0;
    }
    v57 = *(uint32_t *)(v69 + 76);
    a1 = (uint32_t *)v69;
  }
  v4 = a1[14];
  v68 = a1[15];
  v64 = a1[18];
  v62 = *(uint32_t *)(v69 + 84);
  v61 = *(uint32_t *)(v69 + 92);
  v5 = v61 - 1;
  if ( a2 < v61 )
    v5 = a2;
  v60 = v5;
  if ( v5 < v64 )
  {
    sub_1051E30(v69, v4, 0, v5, a4);
    return 0;
  }
  if ( v68 >= v57 )
    goto LABEL_93;
  if ( v64 == -1 || v61 == -1 )
    goto LABEL_74;
  v63 = 0;
  while ( 1 )
  {
    v6 = v62 - 4000;
    if ( v68 + 4000 >= v62 )
      v6 = v62;
    v7 = v6 - v68;
    g4_m128_lane_ref<double>(a3, 0) = (float)((float)((float)((float)((float)HIWORD(v7) * 65536.0) + (float)(uint16_t)v7)
                                    / (float)((float)((float)((v61 - v64) >> 16) * 65536.0)
                                            + (float)(uint16_t)(v61 - v64)))
                            * (float)((float)((float)((v60 - v64) >> 16) * 65536.0)
                                    + (float)(uint16_t)(v60 - v64)));
    v8 = _mm_and_pd(a3, g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL));
    if ( g4_m128_lane_ref<double>(v8, 0) < 4503599627370496.0 )
    {
      g4_m128_lane_ref<double>(v8, 0) = g4_m128_lane_ref<double>(v8, 0) + 4503599627370496.0 - 4503599627370496.0;
      v9 = _mm_or_pd(v8, _mm_andn_pd(g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL), a3));
      g4_m128_lane_ref<double>(v9, 0) = g4_m128_lane_ref<double>(v9, 0)
                      - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v9, a3), 0) & 0x3FF0000000000000LL);
      a3 = v9;
    }
    v10 = v68 + (int)g4_m128_lane_ref<double>(a3, 0);
    v66 = v10;
    if ( v63 > 3 )
    {
      v11 = v68 + (v7 >> 1);
      if ( v63 > 7 )
      {
        v66 = v11;
      }
      else
      {
        if ( v10 >= v11 )
          v10 = (v10 - v11) >> 1;
        else
          v11 = (v11 - v10) >> 1;
        v66 = v11 + v10;
      }
    }
    ++v63;
    v12 = *(uint32_t *)(v69 + 32);
    *(uint32_t *)(v69 + 112) = 0;
    if ( v12 != 0 )
    {
      v13 = *(uint32_t *)(v69 + 36) + v66;
      v14 = *(uint32_t *)(v69 + 40);
      if ( v66 >= 0 && v13 < v14 )
      {
        *(uint32_t *)(v69 + 32) = v13;
      }
      else
      {
        *(uint32_t *)(v69 + 32) = v14;
        *(uint32_t *)(v69 + 112) = 1;
      }
    }
    else
    {
      v52 = *(uint32_t *)(v69 + 24) + v66;
      if ( v66 < 0 || v66 > v52 )
      {
        *(uint32_t *)(v69 + 112) = 1;
        v52 = 0x7FFFFFFF;
      }
      if ( fseek(*(vox::StreamCursorInterface::Self **)(v69 + 20), v52, 0) != 0 )
      {
        *(uint32_t *)(v69 + 112) = 1;
        fseek(*(vox::StreamCursorInterface::Self **)(v69 + 20), *(uint32_t *)(v69 + 24), 2);
      }
    }
    v15 = sub_104EB90(v69, nullptr, nullptr) == 0;
    v16 = v69;
    if ( v15 )
      goto LABEL_128;
    file_offset = stb_vorbis_get_file_offset(v69);
    v17 = *(char **)(v69 + 32);
    v70 = v17;
    if ( v17 != nullptr )
    {
      v18 = v17 + 27;
      if ( (unsigned int)(uintptr_t)(v18) > *(uint32_t *)(v69 + 40) )
      {
        *(uint32_t *)(v69 + 112) = 1;
        v58 = v79;
        v19 = v79;
        goto LABEL_26;
      }
      v51 = *(int **)(v69 + 32);
      v70 = v18;
      v72 = *v51;
      v73 = v51[1];
      v74 = v51[2];
      v75 = v51[3];
      v76 = v51[4];
      v77 = v51[5];
      v78 = *((uint16_t *)v51 + 12);
      v79 = *((uint8_t *)v51 + 26);
      *(uint32_t *)(v69 + 32) = (uint32_t)(uintptr_t)(v18);
    }
    else
    {
      if ( fread(&v72, 0x1Bu, 1u, *(vox::StreamCursorInterface::Self **)(v69 + 20)) != 1 )
        *(uint32_t *)(v69 + 112) = 1;
      v70 = *(char **)(v69 + 32);
    }
    v58 = v79;
    v19 = v79;
    if ( v70 == nullptr )
    {
      if ( fread(dest, v79, 1u, *(vox::StreamCursorInterface::Self **)(v69 + 20)) != 1 )
        *(uint32_t *)(v69 + 112) = 1;
      v58 = v79;
      v19 = v79;
      v70 = *(char **)(v69 + 32);
LABEL_28:
      if ( v19 == 0 )
        goto LABEL_96;
      goto LABEL_29;
    }
LABEL_26:
    if ( (unsigned int)(uintptr_t)(&v70[v19]) > *(uint32_t *)(v69 + 40) )
    {
      *(uint32_t *)(v69 + 112) = 1;
      goto LABEL_28;
    }
    memcpy(dest, v70, v19);
    v70 += v19;
    *(uint32_t *)(v69 + 32) = (uint32_t)(uintptr_t)(v70);
    if ( v19 == 0 )
    {
LABEL_96:
      v56 = 0;
      goto LABEL_36;
    }
LABEL_29:
    if ( v19 > 0xF && 16 * (v19 >> 4) != 0 )
    {
      v20 = 0;
g4_m128_raw(v21) = 0;
      do
      {
        v22 = v20++;
        v23 = *(__m128i *)&dest[16 * v22];
        v24 = _mm_unpackhi_epi8(v23, g4_m128_from<__m128i>(0LL));
        v25 = _mm_unpacklo_epi8(v23, g4_m128_from<__m128i>(0LL));
        v21 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(v21, _mm_unpacklo_epi16(v25, g4_m128_from<__m128i>(0LL))),
                    _mm_unpackhi_epi16(v25, g4_m128_from<__m128i>(0LL))),
                  _mm_unpacklo_epi16(v24, g4_m128_from<__m128i>(0LL))),
                _mm_unpackhi_epi16(v24, g4_m128_from<__m128i>(0LL)));
      }
      while ( v19 >> 4 > v20 );
      v26 = 16 * (v19 >> 4);
      v27 = _mm_add_epi32(v21, _mm_srli_si128(v21, 8));
      a3 = g4_m128_from<__m128d>(_mm_add_epi32(v27, _mm_srli_si128(v27, 4)));
      v28 = _mm_cvtsi128_si32(G4_BITCAST<__m128i>(a3));
      if ( v19 == v26 )
        goto LABEL_35;
    }
    else
    {
      v28 = 0;
      v26 = 0;
    }
    do
    {
      v29 = (uint8_t)dest[v26++];
      v28 += v29;
    }
    while ( (int)v19 > v26 );
LABEL_35:
    v56 = v28;
LABEL_36:
    v30 = HIWORD(v73);
    v31 = v74;
    if ( (v73 & 0x400) == 0 && v19 != 0 )
      break;
LABEL_64:
    *(uint32_t *)(v69 + 112) = 0;
    if ( v70 != nullptr )
    {
      v44 = *(uint32_t *)(v69 + 36) + file_offset;
      v45 = *(uint32_t *)(v69 + 40);
      if ( file_offset >= 0 && v44 < v45 )
      {
        *(uint32_t *)(v69 + 32) = v44;
      }
      else
      {
        *(uint32_t *)(v69 + 32) = v45;
        *(uint32_t *)(v69 + 112) = 1;
      }
    }
    else
    {
      v53 = *(uint32_t *)(v69 + 24) + file_offset;
      if ( file_offset < 0 || file_offset > v53 )
      {
        *(uint32_t *)(v69 + 112) = 1;
        v53 = 0x7FFFFFFF;
      }
      if ( fseek(*(vox::StreamCursorInterface::Self **)(v69 + 20), v53, 0) != 0 )
      {
        *(uint32_t *)(v69 + 112) = 1;
        fseek(*(vox::StreamCursorInterface::Self **)(v69 + 20), *(uint32_t *)(v69 + 24), 2);
      }
    }
    if ( file_offset != v57 )
    {
      if ( v60 >= ((uint8_t)v31 << 16) + (HIBYTE(v30) << 8) + (uint8_t)v30 + (HIBYTE(v31) << 16) )
      {
        v64 = ((uint8_t)v31 << 16) + (HIBYTE(v30) << 8) + (uint8_t)v30 + (HIBYTE(v31) << 16);
        v68 = v56 + file_offset + v58 + 27;
        v46 = v57;
        goto LABEL_71;
      }
      v61 = ((uint8_t)v31 << 16) + (HIBYTE(v30) << 8) + (uint8_t)v30 + (HIBYTE(v31) << 16);
      v62 = v66;
      v57 = file_offset;
      if ( v68 < file_offset )
        goto LABEL_72;
LABEL_92:
      if ( v60 >= v64 )
      {
LABEL_93:
        if ( v60 < v61 )
        {
          sub_1051E30(v69, v57, v64, v60, a4);
          return 0;
        }
      }
      v16 = v69;
LABEL_128:
      *(uint32_t *)(v16 + 116) = 37;
      return 0;
    }
    v61 = ((uint8_t)v31 << 16) + (HIBYTE(v30) << 8) + (uint8_t)v30 + (HIBYTE(v31) << 16);
    v62 = v66;
    v46 = v57;
LABEL_71:
    if ( v68 >= v46 )
      goto LABEL_92;
LABEL_72:
    if ( v61 == -1 || v64 == -1 )
      goto LABEL_74;
  }
  v32 = !(v73 & 0x100);
  v33 = 0;
  v34 = v70;
  while ( 1 )
  {
    if ( !v32 )
    {
      v37 = dest[v33];
      v38 = v37;
      if ( v34 == nullptr )
        goto LABEL_62;
      goto LABEL_45;
    }
    if ( dest[v33] == 0 )
      break;
    if ( v34 != nullptr )
    {
      if ( *(uint32_t *)(v69 + 40) <= (unsigned int)(uintptr_t)(v34) )
      {
        *(uint32_t *)(v69 + 112) = 1;
        v67 = 0;
        goto LABEL_54;
      }
      LOBYTE(v41) = *v34++;
      v41 = (uint8_t)v41;
      *(uint32_t *)(v69 + 32) = (uint32_t)(uintptr_t)(v34);
      v42 = v41 & 1;
    }
    else
    {
      v50 = fgetc(*(vox::StreamCursorInterface::Self **)(v69 + 20));
      v41 = (uint8_t)v50;
      v42 = v50 & 1;
      if ( v50 == -1 )
      {
        *(uint32_t *)(v69 + 112) = 1;
        v42 = 0;
        v41 = 0;
      }
      v34 = *(char **)(v69 + 32);
    }
    if ( v42 != 0 )
      break;
    v67 = v41 >> 1;
LABEL_54:
    v71 = *(uint32_t *)(v69 + 424);
    v40 = v71 - 1;
    if ( (unsigned int)(v71 - 1) <= 0x3FFF )
    {
      if ( (unsigned int)v40 <= 0xF )
      {
        v35 = byte_1CC1C7F[v71];
      }
      else if ( (unsigned int)v40 > 0x1FF )
      {
        v35 = byte_1CC1C80[v40 >> 10] + 10;
      }
      else
      {
        v35 = byte_1CC1C80[v40 >> 5] + 5;
      }
      goto LABEL_42;
    }
    if ( (unsigned int)v40 <= 0xFFFFFF )
    {
      if ( (unsigned int)v40 > 0x7FFFF )
        v35 = byte_1CC1C80[v40 >> 20] + 20;
      else
        v35 = byte_1CC1C80[v40 >> 15] + 15;
      goto LABEL_42;
    }
    if ( (unsigned int)v40 <= 0x1FFFFFFF )
    {
      v35 = byte_1CC1C80[v40 >> 25] + 25;
      goto LABEL_42;
    }
    v36 = 0;
    if ( v40 >= 0 )
    {
      v35 = byte_1CC1C80[v40 >> 30] + 30;
LABEL_42:
      v36 = (uint8_t)(v67 & ((1 << v35) - 1));
    }
    if ( v71 <= v36 )
      break;
    v37 = dest[v33];
    v38 = v37 - 1;
    if ( v34 == nullptr )
    {
LABEL_62:
      v55 = v38;
      v43 = ftell(*(vox::StreamCursorInterface::Self **)(v69 + 20));
      fseek(*(vox::StreamCursorInterface::Self **)(v69 + 20), v55 + v43, 0);
      v37 = dest[v33++];
      v34 = *(char **)(v69 + 32);
      if ( v33 >= v79 )
        goto LABEL_63;
      goto LABEL_48;
    }
LABEL_45:
    v34 += v38;
    v39 = (unsigned int)(uintptr_t)(v34) < *(uint32_t *)(v69 + 40);
    *(uint32_t *)(v69 + 32) = (uint32_t)(uintptr_t)(v34);
    if ( !v39 )
      *(uint32_t *)(v69 + 112) = 1;
    if ( ++v33 >= v79 )
    {
LABEL_63:
      v70 = v34;
      goto LABEL_64;
    }
LABEL_48:
    v32 = v37 != 0xFF;
  }
  *(uint32_t *)(v69 + 112) = 0;
  if ( v34 != nullptr )
  {
    v48 = *(uint32_t *)(v69 + 36) + file_offset;
    v49 = *(uint32_t *)(v69 + 40);
    if ( file_offset >= 0 && v48 < v49 )
    {
      *(uint32_t *)(v69 + 32) = v48;
    }
    else
    {
      *(uint32_t *)(v69 + 32) = v49;
      *(uint32_t *)(v69 + 112) = 1;
    }
  }
  else
  {
    v54 = *(uint32_t *)(v69 + 24) + file_offset;
    if ( file_offset < 0 || file_offset > v54 )
    {
      *(uint32_t *)(v69 + 112) = 1;
      v54 = 0x7FFFFFFF;
    }
    if ( fseek(*(vox::StreamCursorInterface::Self **)(v69 + 20), v54, 0) != 0 )
    {
      *(uint32_t *)(v69 + 112) = 1;
      fseek(*(vox::StreamCursorInterface::Self **)(v69 + 20), *(uint32_t *)(v69 + 24), 2);
    }
  }
LABEL_74:
  *(uint32_t *)(v69 + 116) = 37;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_seek  (binary VA: 0x1053ab0)
// Original: stb_vorbis_seek
// ----------------------------------------------------------------------------
int stb_vorbis_seek(__m128d a1, uint32_t *a2, unsigned int a3)
{
  return sub_1052FE0(a2, a3, a1, 1);
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_seek_frame  (binary VA: 0x1053ad0)
// Original: stb_vorbis_seek_frame
// ----------------------------------------------------------------------------
int stb_vorbis_seek_frame(__m128d a1, uint32_t *a2, unsigned int a3)
{
  return sub_1052FE0(a2, a3, a1, 0);
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_open_file_section  (binary VA: 0x1053af0)
// Original: stb_vorbis_open_file_section
// ----------------------------------------------------------------------------
int * stb_vorbis_open_file_section(vox::StreamCursorInterface::Self *a1, int a2, uint32_t *a3, int *a4, int a5)
{
  int v5;
  int v6;
  int v7;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[367];
  enum : size_t {
    _g4_s0 = 1584u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v13)) > _g4_s4 ? (36u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v14)) > _g4_s5 ? (40u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v15)) > _g4_s6 ? (44u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v16)) > _g4_s7 ? (48u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);

  memset(v16, 0, 0x5A8u);
  if ( a4 != nullptr )
  {
    v5 = a4[1];
    v16[24] = *a4;
    v16[25] = (v5 + 3) & 0xFFFFFFFC;
    v16[27] = v16[25];
  }
  v16[359] = -1;
  v16[5] = (int)(uintptr_t)(a1);
  v16[6] = ftell(a1);
  v16[11] = a5;
  v16[7] = a2;
  if ( sub_104F160((int)(uintptr_t)(v16)) == 0 )
    goto LABEL_14;
  v16[2] += 1448;
  if ( v16[24] == 0 )
  {
    v6 = sub_4EC020(0x5A8u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("setup_malloc"), 643);
    goto LABEL_7;
  }
  if ( v16[26] + 1448 > v16[27] )
  {
    v6 = sub_4EC020(0x5A8u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("setup_malloc"), 639);
LABEL_7:
    v9 = (int *)v6;
    goto LABEL_9;
  }
  v7 = v16[24] + v16[26];
  v16[26] += 1448;
  v9 = (int *)v7;
LABEL_9:
  if ( v9 != nullptr )
  {
    std::memcpy(v9, v16, 1448);
    if ( sub_10494C0((int)(uintptr_t)(v9), &v12, 0, &v14, &v11, &v15, &v13) == 0
      || sub_104B770(
           (int)(uintptr_t)(v9),
           &v10,
           (uint8_t *)v9 + 6 * v13 + 428,
           *((uint8_t *)v9 + 6 * v13 + 429),
           v12,
           v11,
           v15,
           &v12) == 0 )
    {
      return v9;
    }
    sub_1047070(v9, v10, v12, v11);
    return v9;
  }
LABEL_14:
  if ( a3 != nullptr )
    *a3 = v16[29];
  sub_1047800(v16);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_open_file  (binary VA: 0x1053d00)
// Original: stb_vorbis_open_file
// ----------------------------------------------------------------------------
int * stb_vorbis_open_file(vox::StreamCursorInterface::Self *a1, int a2, uint32_t *a3, int *a4)
{
  int v4;
  int v5;

  v4 = ftell(a1);
  fseek(a1, 0, 2);
  v5 = ftell(a1);
  fseek(a1, v4, 0);
  return stb_vorbis_open_file_section(a1, a2, a3, a4, v5 - v4);
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_open_filename  (binary VA: 0x1053da0)
// Original: stb_vorbis_open_filename
// ----------------------------------------------------------------------------
int stb_vorbis_open_filename(int a1, uint32_t *a2)
{
  if ( a2 != nullptr )
    *a2 = 6;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_open_memory  (binary VA: 0x1053dc0)
// Original: stb_vorbis_open_memory
// ----------------------------------------------------------------------------
uint32_t * stb_vorbis_open_memory(int a1, int a2, uint32_t *a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[367];
  enum : size_t {
    _g4_s0 = 1584u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v15)) > _g4_s7 ? (48u + sizeof(_g4_t_v15)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);

  v8 = nullptr;
  if ( a1 == 0 )
    return v8;
  memset(v15, 0, 0x5A8u);
  if ( a4 != nullptr )
  {
    v4 = a4[1];
    v15[24] = *a4;
    v15[25] = (v4 + 3) & 0xFFFFFFFC;
    v15[27] = v15[25];
  }
  v15[8] = a1;
  v15[9] = a1;
  v15[10] = a1 + a2;
  v15[359] = -1;
  v15[11] = a2;
  if ( sub_104F160((int)(uintptr_t)(v15)) != 0 )
  {
    v15[2] += 1448;
    if ( v15[24] != 0 )
    {
      if ( v15[26] + 1448 <= v15[27] )
      {
        v6 = v15[24] + v15[26];
        v15[26] += 1448;
        v8 = (uint32_t *)v6;
LABEL_10:
        if ( v8 != nullptr )
        {
          std::memcpy(v8, v15, 1448);
          if ( sub_10494C0((int)(uintptr_t)(v8), &v11, 0, &v13, &v10, &v14, &v12) != 0
            && sub_104B770(
                 (int)(uintptr_t)(v8),
                 &v9,
                 (uint8_t *)v8 + 6 * v12 + 428,
                 *((uint8_t *)v8 + 6 * v12 + 429),
                 v11,
                 v10,
                 v14,
                 &v11) != 0 )
          {
            sub_1047070(v8, v9, v11, v10);
          }
          if ( a3 != nullptr )
            *a3 = v8[29];
          return v8;
        }
        goto LABEL_17;
      }
      v5 = sub_4EC020(0x5A8u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("setup_malloc"), 639);
    }
    else
    {
      v5 = sub_4EC020(0x5A8u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("setup_malloc"), 643);
    }
    v8 = (uint32_t *)v5;
    goto LABEL_10;
  }
LABEL_17:
  if ( a3 != nullptr )
    *a3 = v15[29];
  sub_1047800(v15);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_frame_short  (binary VA: 0x1053ff0)
// Original: stb_vorbis_get_frame_short
// ----------------------------------------------------------------------------
int stb_vorbis_get_frame_short(int a1, int a2, int a3, int a4)
{
  int v4;
  int frame_float;
  int v7;
  int v8;
  int v9;
  int i;
  int v11;
  int v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v14)) > _g4_s1 ? (32u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v15)) > _g4_s2 ? (36u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v16)) > _g4_s3 ? (40u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v17)) > _g4_s4 ? (44u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v18)) > _g4_s5 ? (48u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  v4 = a4;
  frame_float = stb_vorbis_get_frame_float((uint8_t *)a1, nullptr, &v18);
  if ( frame_float <= a4 )
    v4 = frame_float;
  v17 = v4;
  if ( v4 == 0 )
    return v17;
  v14 = v18;
  v7 = *(uint32_t *)(a1 + 4);
  if ( a2 > 2 || v7 == a2 || v7 > 6 )
  {
    if ( a2 <= v7 )
      v7 = a2;
    v15 = v7;
    if ( v7 <= 0 )
    {
      v15 = 0;
    }
    else
    {
      v16 = 0;
      do
      {
        v8 = *(uint32_t *)(v14 + 4 * v16);
        v9 = *(uint32_t *)(a3 + 4 * v16);
        if ( v17 > 0 )
        {
          for ( i = 0; i != v17; ++i )
          {
            v11 = (int)(float)(*(float *)(v8 + 4 * i) * 32768.0);
            if ( (unsigned int)(v11 + 0x8000) > 0xFFFF )
              LOWORD(v11) = ((v11 >> 31) & 1) + 0x7FFF;
            *(uint16_t *)(v9 + 2 * i) = v11;
          }
        }
        ++v16;
      }
      while ( v16 != v15 );
    }
    if ( a2 <= v15 )
      return v17;
    v12 = v15;
    do
    {
      v13 = *(void **)(a3 + 4 * v12++);
      memset(v13, 0, 2 * v17);
    }
    while ( v12 != a2 );
    return v17;
  }
  else
  {
    sub_1047250(a2, a3, 0, *(uint32_t *)(a1 + 4), v18, 0, v4);
    return v4;
  }
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_frame_short_interleaved  (binary VA: 0x1054180)
// Original: stb_vorbis_get_frame_short_interleaved
// ----------------------------------------------------------------------------
int stb_vorbis_get_frame_short_interleaved(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int i;
  int v10;
  int v11;
  unsigned int v12;
  uint16_t *v13;
  __m128i *v14;
  unsigned int v15;
  uint16_t *v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v20)) > _g4_s3 ? (24u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v21)) > _g4_s4 ? (28u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v22)) > _g4_s5 ? (32u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v23)) > _g4_s6 ? (36u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v24)) > _g4_s7 ? (40u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v25)) > _g4_s8 ? (44u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v26)) > _g4_s9 ? (48u + sizeof(_g4_t_v26)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);

  v4 = a4;
  if ( a2 == 1 )
    return stb_vorbis_get_frame_short(a1, 1, (int)(uintptr_t)(&a3), a4);
  result = stb_vorbis_get_frame_float((uint8_t *)a1, nullptr, &v26);
  v18 = result;
  if ( result != 0 )
  {
    if ( v4 < a2 * result )
      v18 = v4 / a2;
    v6 = v26;
    v7 = *(uint32_t *)(a1 + 4);
    v25 = a3;
    if ( a2 > 2 || a2 == v7 || v7 > 6 )
    {
      if ( a2 <= v7 )
        v7 = a2;
      v24 = v7;
      v21 = 0;
      if ( v18 > 0 )
      {
        v17 = 2 * v7;
        do
        {
          v8 = 0;
          if ( v24 > 0 )
          {
            for ( i = 0; i != v24; ++i )
            {
              v10 = (int)(float)(*(float *)(*(uint32_t *)(v6 + 4 * i) + 4 * v21) * 32768.0);
              if ( (unsigned int)(v10 + 0x8000) > 0xFFFF )
                LOWORD(v10) = ((v10 >> 31) & 1) + 0x7FFF;
              *(uint16_t *)(v25 + 2 * i) = v10;
            }
            v25 += v17;
            v8 = v24;
          }
          if ( a2 > v8 )
          {
            v23 = a2 - v8;
            v11 = v8;
            v12 = -((uint8_t)(v25 & 0xF) >> 1) & 7;
            if ( v12 > a2 - v8 )
              v12 = a2 - v8;
            v13 = (uint16_t *)v25;
            if ( v12 == 0 )
              goto LABEL_23;
            do
            {
              ++v11;
              *v13++ = 0;
            }
            while ( v12 > v11 - v8 );
            if ( v23 != v12 )
            {
LABEL_23:
              v19 = v23 - v12;
              v22 = (v23 - v12) >> 3;
              v20 = 8 * v22;
              if ( 8 * v22 == 0 )
                goto LABEL_27;
              v14 = (__m128i *)(v25 + 2 * v12);
              v15 = 0;
              do
              {
                ++v15;
                *v14++ = g4_m128_from<__m128i>(0LL);
              }
              while ( v15 < v22 );
              v11 += v20;
              v13 += 8 * v22;
              if ( v19 != v20 )
              {
LABEL_27:
                v16 = &v13[-v11];
                do
                  v16[v11++] = 0;
                while ( a2 > v11 );
              }
            }
            v25 += 2 * v23;
          }
          ++v21;
        }
        while ( v21 != v18 );
      }
      return v18;
    }
    else
    {
      sub_1047480(a2, a3, v7, v26, 0, v18);
      return v18;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_samples_short_interleaved  (binary VA: 0x10543e0)
// Original: stb_vorbis_get_samples_short_interleaved
// ----------------------------------------------------------------------------
int stb_vorbis_get_samples_short_interleaved(int a1, int a2, int a3, int a4)
{
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint16_t *v11;
  unsigned int v12;
  int v13;
  __m128i *v14;
  unsigned int v15;
  uint16_t *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v19)) > _g4_s1 ? (20u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v20)) > _g4_s2 ? (24u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v21)) > _g4_s3 ? (28u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v22)) > _g4_s4 ? (32u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v23)) > _g4_s5 ? (36u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v24)) > _g4_s6 ? (40u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v25)) > _g4_s7 ? (44u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v26)) > _g4_s8 ? (48u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v27)) > _g4_s9 ? (52u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v28)) > _g4_s10 ? (56u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v29)) > _g4_s11 ? (60u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v30)) > _g4_s12 ? (76u + sizeof(_g4_t_v30)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);

  v20 = 0;
  v19 = a4 / a2;
  if ( a4 / a2 > 0 )
  {
    do
    {
      v5 = *(uint32_t *)(a1 + 1440);
      v6 = *(uint32_t *)(a1 + 1444) - v5;
      v24 = v6;
      if ( v19 <= v6 + v20 )
      {
        v24 = v19 - v20;
        v4 = v19 == v20;
        v20 = a4 / a2;
        if ( !v4 )
          goto LABEL_9;
      }
      else
      {
        v20 += v6;
        if ( v6 != 0 )
        {
LABEL_9:
          v7 = *(uint32_t *)(a1 + 4);
          if ( a2 > 2 || a2 == v7 || v7 > 6 )
          {
            if ( a2 <= v7 )
              v7 = a2;
            v28 = v7;
            if ( v24 > 0 )
            {
              v29 = 4 * v5;
              v27 = a3;
              v22 = 0;
              v18 = 2 * v7;
              do
              {
                v8 = 0;
                if ( v28 <= 0 )
                {
                  v10 = 0;
                }
                else
                {
                  do
                  {
                    v9 = (int)(float)(*(float *)(*(uint32_t *)(a1 + 816 + 4 * v8) + v29) * 32768.0);
                    if ( (unsigned int)(v9 + 0x8000) > 0xFFFF )
                      LOWORD(v9) = ((v9 >> 31) & 1) + 0x7FFF;
                    *(uint16_t *)(v27 + 2 * v8++) = v9;
                  }
                  while ( v8 != v28 );
                  v10 = v28;
                  v27 += v18;
                }
                if ( a2 > v10 )
                {
                  v26 = a2 - v10;
                  v11 = (uint16_t *)v27;
                  v12 = -((uint8_t)(v27 & 0xF) >> 1) & 7;
                  if ( v12 > a2 - v10 )
                    v12 = a2 - v10;
                  v13 = v10;
                  if ( v12 == 0 )
                    goto LABEL_28;
                  do
                  {
                    ++v13;
                    *v11++ = 0;
                  }
                  while ( v12 > v13 - v10 );
                  if ( v26 != v12 )
                  {
LABEL_28:
                    v21 = v26 - v12;
                    v25 = (v26 - v12) >> 3;
                    v23 = 8 * v25;
                    if ( 8 * v25 == 0 )
                      goto LABEL_32;
                    v14 = (__m128i *)(v27 + 2 * v12);
                    v15 = 0;
                    do
                    {
                      ++v15;
                      *v14++ = g4_m128_from<__m128i>(0LL);
                    }
                    while ( v15 < v25 );
                    v13 += v23;
                    v11 += 8 * v25;
                    if ( v21 != v23 )
                    {
LABEL_32:
                      v16 = &v11[-v13];
                      do
                        v16[v13++] = 0;
                      while ( a2 > v13 );
                    }
                  }
                  v27 += 2 * v26;
                }
                ++v22;
                v29 += 4;
              }
              while ( v22 != v24 );
              v5 = *(uint32_t *)(a1 + 1440);
            }
          }
          else
          {
            sub_1047480(a2, a3, v7, a1 + 816, v5, v24);
            v5 = *(uint32_t *)(a1 + 1440);
          }
        }
      }
      a3 += 2 * a2 * v24;
      *(uint32_t *)(a1 + 1440) = v24 + v5;
    }
    while ( v19 != v20 && stb_vorbis_get_frame_float((uint8_t *)a1, nullptr, &v30) != 0 && v19 > v20 );
  }
  return v20;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_samples_short  (binary VA: 0x10546e0)
// Original: stb_vorbis_get_samples_short
// ----------------------------------------------------------------------------
int stb_vorbis_get_samples_short(int a1, int a2, int a3, int a4)
{
  int i;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int j;
  int v11;
  size_t n;
  int v13;
  typedef void *_g4_t_s;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v16)) > _g4_s1 ? (56u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v17)) > _g4_s2 ? (56u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v18)) > _g4_s3 ? (60u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v19)) > _g4_s4 ? (64u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v20)) > _g4_s5 ? (68u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v21)) > _g4_s6 ? (72u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v22)) > _g4_s7 ? (92u + sizeof(_g4_t_v22)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);

  v18 = 0;
  if ( a4 > 0 )
  {
    v20 = 0;
    for ( i = 0; ; i = v18 )
    {
      v5 = *(uint32_t *)(a1 + 1440);
      v6 = *(uint32_t *)(a1 + 1444) - v5;
      v18 = v6 + i;
      if ( a4 <= v6 + i )
      {
        v18 = a4;
        v6 = a4 - v20;
      }
      if ( v6 != 0 )
      {
        v21 = a1 + 816;
        v7 = *(uint32_t *)(a1 + 4);
        if ( a2 > 2 || a2 == v7 || v7 > 6 )
        {
          if ( a2 <= v7 )
            v7 = a2;
          v19 = v7;
          if ( v7 <= 0 )
          {
            v19 = 0;
          }
          else
          {
            v16 = 0;
            do
            {
              v8 = *(uint32_t *)(v21 + 4 * v16);
              v9 = *(uint32_t *)(a3 + 4 * v16) + 2 * v20;
              if ( v6 > 0 )
              {
                for ( j = 0; j != v6; ++j )
                {
                  v11 = (int)(float)(*(float *)(v8 + 4 * j) * 32768.0);
                  if ( (unsigned int)(v11 + 0x8000) > 0xFFFF )
                    LOWORD(v11) = ((v11 >> 31) & 1) + 0x7FFF;
                  *(uint16_t *)(v9 + 2 * j) = v11;
                }
              }
              ++v16;
            }
            while ( v16 != v19 );
          }
          n = 2 * v6;
          if ( a2 > v19 )
          {
            v17 = v6;
            v13 = v19;
            do
            {
              s = (void *)(*(uint32_t *)(a3 + 4 * v13++) + 2 * v20);
              memset(s, 0, n);
            }
            while ( v13 != a2 );
            v6 = v17;
          }
          v5 = *(uint32_t *)(a1 + 1440);
        }
        else
        {
          sub_1047250(a2, a3, v20, v7, v21, v5, v6);
          v5 = *(uint32_t *)(a1 + 1440);
        }
      }
      *(uint32_t *)(a1 + 1440) = v6 + v5;
      if ( a4 == v18 || stb_vorbis_get_frame_float((uint8_t *)a1, nullptr, v22) == 0 || a4 <= v18 )
        break;
      v20 = v18;
    }
  }
  return v18;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_decode_filename  (binary VA: 0x1054960)
// Original: stb_vorbis_decode_filename
// ----------------------------------------------------------------------------
int stb_vorbis_decode_filename(char *a1, int *a2, int16_t **a3)
{
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int frame_short_interleaved;
  void *dest;
  typedef int _g4_t_v12;
  typedef void *_g4_t_src;
  typedef int _g4_t_v14;
  typedef int _g4_t_n;
  typedef uint32_t _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_src)) > _g4_s1 ? (12u + sizeof(_g4_t_src)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_n)) > _g4_s3 ? (20u + sizeof(_g4_t_n)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v16)) > _g4_s4 ? (44u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v3 = stb_vorbis_open_filename((int)(uintptr_t)(a1), v16);
  v4 = (int *)v3;
  if ( v3 == 0 )
    return -1;
  v5 = *(uint32_t *)(v3 + 4);
  v14 = v5 << 12;
  *a2 = v5;
  src = (void *)sub_4EC020(
                  v5 << 13,
                  (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"),
                  (int)(uintptr_t)("stb_vorbis_decode_filename"),
                  5038);
  if ( src != nullptr )
  {
    v6 = v4[1];
    v7 = v14;
    v8 = 0;
    v12 = 0;
    while ( 1 )
    {
      frame_short_interleaved = stb_vorbis_get_frame_short_interleaved((int)(uintptr_t)(v4), v6, (int)(uintptr_t)(src) + 2 * v8, v7 - v8);
      if ( frame_short_interleaved == 0 )
        break;
      v6 = v4[1];
      v12 += frame_short_interleaved;
      v8 += v6 * frame_short_interleaved;
      if ( v7 < v8 + v14 )
      {
        n = 2 * v7;
        dest = (void *)sub_4EC020(
                         4 * v7,
                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"),
                         (int)(uintptr_t)("stb_vorbis_decode_filename"),
                         5053);
        memcpy(dest, src, n);
        sub_4EC120((int)(uintptr_t)(src));
        if ( dest == nullptr )
          goto LABEL_10;
        src = dest;
        v6 = v4[1];
        v7 = n;
      }
    }
    *a3 = (int16_t *)src;
    stb_vorbis_close(v4);
    return v12;
  }
LABEL_10:
  stb_vorbis_close(v4);
  return -2;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_decode_memory  (binary VA: 0x1054ae0)
// Original: stb_vorbis_decode_memory
// ----------------------------------------------------------------------------
int stb_vorbis_decode_memory(uint8_t *a1, int a2, int *a3, int *a4, int16_t **a5)
{
  int *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int frame_short_interleaved;
  void *dest;
  typedef int _g4_t_v14;
  typedef void *_g4_t_src;
  typedef int _g4_t_v16;
  typedef int _g4_t_n;
  typedef uint32_t _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_src)) > _g4_s1 ? (12u + sizeof(_g4_t_src)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_n)) > _g4_s3 ? (20u + sizeof(_g4_t_n)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  v5 = (int *)(stb_vorbis_open_memory((int)(uintptr_t)(a1), a2, v18, nullptr));
  v6 = v5;
  if ( v5 == nullptr )
    return -1;
  v7 = v5[1];
  v16 = v7 << 12;
  *a3 = v7;
  *a4 = *v6;
  src = (void *)sub_4EC020(
                  v7 << 13,
                  (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"),
                  (int)(uintptr_t)("stb_vorbis_decode_memory"),
                  5080);
  if ( src != nullptr )
  {
    v8 = v6[1];
    v9 = v16;
    v10 = 0;
    v14 = 0;
    while ( 1 )
    {
      frame_short_interleaved = stb_vorbis_get_frame_short_interleaved((int)(uintptr_t)(v6), v8, (int)(uintptr_t)(src) + 2 * v10, v9 - v10);
      if ( frame_short_interleaved == 0 )
        break;
      v8 = v6[1];
      v14 += frame_short_interleaved;
      v10 += v8 * frame_short_interleaved;
      if ( v9 < v10 + v16 )
      {
        n = 2 * v9;
        dest = (void *)sub_4EC020(
                         4 * v9,
                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"),
                         (int)(uintptr_t)("stb_vorbis_decode_memory"),
                         5095);
        memcpy(dest, src, n);
        sub_4EC120((int)(uintptr_t)(src));
        if ( dest == nullptr )
          goto LABEL_10;
        src = dest;
        v8 = v6[1];
        v9 = n;
      }
    }
    *a5 = (int16_t *)src;
    stb_vorbis_close(v6);
    return v14;
  }
LABEL_10:
  stb_vorbis_close(v6);
  return -2;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_samples_float_interleaved  (binary VA: 0x1054c70)
// Original: stb_vorbis_get_samples_float_interleaved
// ----------------------------------------------------------------------------
int stb_vorbis_get_samples_float_interleaved(int a1, int a2, uint32_t *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  uint32_t *v11;
  g4_int128_t *v12;
  unsigned int v13;
  uint32_t *v14;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v21)) > _g4_s5 ? (28u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v22)) > _g4_s6 ? (32u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v23)) > _g4_s7 ? (36u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v24)) > _g4_s8 ? (40u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v25)) > _g4_s9 ? (44u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v26)) > _g4_s10 ? (60u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  v17 = 0;
  v16 = a4 / a2;
  v4 = *(uint32_t *)(a1 + 4);
  if ( a2 <= v4 )
    v4 = a2;
  v24 = v4;
  if ( a4 / a2 > 0 )
  {
    do
    {
      v5 = *(uint32_t *)(a1 + 1440);
      v19 = *(uint32_t *)(a1 + 1444) - v5;
      if ( v16 > v19 + v17 )
      {
        v17 += v19;
      }
      else
      {
        v6 = v16 - v17;
        v17 = a4 / a2;
        v19 = v6;
      }
      v25 = 0;
      v18 = a2 + 1;
      if ( v19 > 0 )
      {
        do
        {
          v7 = 0;
          v8 = 0;
          if ( v24 > 0 )
          {
            do
            {
              a3[v7] = *(uint32_t *)(*(uint32_t *)(a1 + 4 * v7 + 816) + 4 * (*(uint32_t *)(a1 + 1440) + v25));
              ++v7;
            }
            while ( v7 != v24 );
            v8 = v24;
            a3 += v24;
          }
          if ( a2 > v8 )
          {
            v23 = v18 + ~v8;
            v9 = -((uint8_t)((uint8_t)(uintptr_t)(a3) & 0xF) >> 2) & 3;
            v10 = v8;
            if ( v9 > v23 )
              v9 = v18 + ~v8;
            v11 = a3;
            if ( v9 == 0 )
              goto LABEL_16;
            do
            {
              ++v10;
              *v11++ = 0;
            }
            while ( v9 > v10 - v8 );
            if ( v23 != v9 )
            {
LABEL_16:
              v20 = v23 - v9;
              v22 = (v23 - v9) >> 2;
              v21 = 4 * v22;
              if ( 4 * v22 == 0 )
                goto LABEL_20;
              v12 = (g4_int128_t *)(&a3[v9]);
              v13 = 0;
              do
              {
                ++v13;
                *v12++ = 0;
              }
              while ( v13 < v22 );
              v10 += v21;
              v11 += 4 * v22;
              if ( v20 != v21 )
              {
LABEL_20:
                v14 = &v11[-v10];
                do
                  v14[v10++] = 0;
                while ( a2 > v10 );
              }
            }
            a3 += v23;
          }
          ++v25;
        }
        while ( v25 != v19 );
        v5 = *(uint32_t *)(a1 + 1440);
      }
      *(uint32_t *)(a1 + 1440) = v19 + v5;
    }
    while ( v16 != v17 && stb_vorbis_get_frame_float((uint8_t *)a1, nullptr, &v26) != 0 && v16 > v17 );
  }
  return v17;
}

// ----------------------------------------------------------------------------
// Function: stb_vorbis_get_samples_float  (binary VA: 0x1054eb0)
// Original: stb_vorbis_get_samples_float
// ----------------------------------------------------------------------------
int stb_vorbis_get_samples_float(int a1, int a2, int a3, int a4)
{
  int v4;
  int i;
  int v6;
  int v7;
  typedef void *_g4_t_dest;
  typedef void *_g4_t_desta;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_desta)) > _g4_s1 ? (0u + sizeof(_g4_t_desta)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v12)) > _g4_s3 ? (36u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v13)) > _g4_s4 ? (40u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v14)) > _g4_s5 ? (44u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v15)) > _g4_s6 ? (60u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);

  v13 = 0;
  v4 = *(uint32_t *)(a1 + 4);
  if ( a2 <= v4 )
    v4 = a2;
  v12 = v4;
  if ( a4 > 0 )
  {
    v14 = 0;
    for ( i = 0; ; i = v13 )
    {
      v6 = *(uint32_t *)(a1 + 1440);
      v11 = *(uint32_t *)(a1 + 1444) - v6;
      v13 = v11 + i;
      if ( a4 <= v11 + i )
      {
        v13 = a4;
        v11 = a4 - v14;
      }
      if ( v11 != 0 )
      {
        v7 = 0;
        if ( v12 > 0 )
        {
          while ( 1 )
          {
            dest = (void *)(*(uint32_t *)(a3 + 4 * v7++) + 4 * v14);
            memcpy(dest, (const void *)(a1 + 4 * v6 + 816), 4 * v11);
            if ( v7 == v12 )
              break;
            v6 = *(uint32_t *)(a1 + 1440);
          }
          v7 = v12;
        }
        if ( v7 < a2 )
        {
          do
          {
            desta = (void *)(*(uint32_t *)(a3 + 4 * v7++) + 4 * v14);
            memset(desta, 0, 4 * v11);
          }
          while ( v7 != a2 );
        }
        v6 = *(uint32_t *)(a1 + 1440);
      }
      *(uint32_t *)(a1 + 1440) = v11 + v6;
      if ( a4 == v13 || stb_vorbis_get_frame_float((uint8_t *)a1, nullptr, v15) == 0 || a4 <= v13 )
        break;
      v14 = v13;
    }
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: sub_105503D  (binary VA: 0x105503d)
// Original: sub_105503D
// ----------------------------------------------------------------------------
int sub_105503D(uint32_t *a1, int a2)
{
  size_t v2;
  int v3;
  signed int v4;
  int result;

  v2 = (a2 + 3) & 0xFFFFFFFC;
  v3 = a1[24];
  if ( v3 == 0 )
    return sub_4EC020(v2, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("setup_temp_malloc"), 665);
  v4 = a1[27] - v2;
  if ( v4 >= a1[26] )
  {
    a1[27] = v4;
    return v3 + v4;
  }
  else
  {
    result = 0;
    if ( v2 != 0 )
      return sub_4EC020(v2, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/stb_vorbis.cpp"), (int)(uintptr_t)("setup_temp_malloc"), 661);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10550A8  (binary VA: 0x10550a8)
// Original: sub_10550A8
// ----------------------------------------------------------------------------
float sub_10550A8(int a1)
{
  double v1; // xmm0_8
  float v2; // xmm0_4

  v1 = (double)(a1 & 0x1FFFFF);
  if ( a1 < 0 )
    v1 = -v1;
  v2 = v1;
  return ldexp(v2, ((a1 & 0x7FE00000u) >> 21) - 788);
}

// ----------------------------------------------------------------------------
// Function: sub_1055122  (binary VA: 0x1055122)
// Original: sub_1055122
// ----------------------------------------------------------------------------
int sub_1055122(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  int v11;
  float *v12;
  int v13;
  float v14; // xmm1_4
  float v15; // xmm0_4
  int i;
  float v17; // xmm0_4
  float v18; // xmm0_4
  int v19;
  int v21;
  double v22;
  uint32_t *v23;
  int v24;
  float *v25;
  int v26;
  double v28;
  double v29;
  int v30;
  double v31;
  double v32;
  int v33;
  int v34;
  int v35;

  v3 = a1;
  v24 = a3 >> 1;
  v26 = 4 * (a3 >> 1);
  v30 = a3 >> 3;
  a1[a2 + 271] = sub_1046F30(a1, v26);
  v3[a2 + 273] = sub_1046F30(v3, v26);
  v4 = sub_1046F30(v3, 4 * (a3 >> 2));
  v3[a2 + 275] = v4;
  v25 = (float *)v4;
  if ( v3[a2 + 271] == 0 )
    goto LABEL_15;
  v34 = v3[a2 + 273];
  if ( v34 == 0 )
    goto LABEL_15;
  if ( v4 == 0 )
    goto LABEL_15;
  v23 = v3;
  v5 = 0;
  v6 = v3[a2 + 271];
  v31 = 1.0 / (double)a3;
  v29 = v31 * 3.141592653589793;
  v28 = v31 * 1.5707963267948966;
  while ( a3 >> 2 > v5 )
  {
    v7 = cos((double)(4 * v5) * v29);
    *(float *)(v6 + 8 * v5) = v7;
    v8 = sin((double)(4 * v5) * v29);
    *(float *)(v6 + 8 * v5 + 4) = -v8;
    v9 = cos((double)(2 * v5 + 1) * v28);
    *(float *)(v34 + 8 * v5) = v9 * 0.5;
    v10 = sin((double)(2 * v5 + 1) * v28);
    *(float *)(v34 + 8 * v5++ + 4) = v10 * 0.5;
  }
  v11 = 0;
  v12 = v25;
  v32 = v31 * 3.141592653589793;
  while ( v30 > v11 )
  {
    v13 = 4 * v11++ + 2;
    v22 = (double)v13 * v32;
    v14 = cos(v22);
    *v12 = v14;
    v15 = sin(v22);
    v12[1] = -v15;
    v12 += 2;
  }
  v3 = v23;
  v33 = sub_1046F30(v23, v26);
  v23[a2 + 277] = v33;
  if ( v33 == 0 )
    goto LABEL_15;
  for ( i = 0; v24 > i; *(float *)(v33 + 4 * i++) = v18 )
  {
    v17 = sin(((double)i + 0.5) * (1.5707963267948966 / (double)v24));
    v18 = sin((float)(v17 * v17) * 1.5707963267948966);
  }
  v3 = v23;
  v19 = sub_1046F30(v23, 2 * v30);
  v23[a2 + 279] = v19;
  if ( v19 != 0 )
  {
    v21 = 0;
    v35 = 36 - sub_1046FC0(a3);
    while ( v30 > v21 )
    {
      *(uint16_t *)(v19 + 2 * v21) = 4 * ((unsigned int)sub_1046AC0(v21) >> v35);
      ++v21;
    }
    return 1;
  }
  else
  {
LABEL_15:
    v3[29] = 3;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_105548C  (binary VA: 0x105548c)
// Original: sub_105548C
// ----------------------------------------------------------------------------
uint32_t * sub_105548C(uint32_t *result, int a2, int a3)
{
  int v3;

  v3 = result[24];
  if ( v3 == 0 || v3 > a2 || result[25] + v3 <= a2 )
    return (uint32_t *)sub_4EC120(a2);
  result[27] += (a3 + 3) & 0xFFFFFFFC;
  return result;
}

// ----------------------------------------------------------------------------
// Function: VoxSetDataThreshold  (binary VA: 0x1055580)
// Original: VoxSetDataThreshold
// ----------------------------------------------------------------------------
void VoxSetDataThreshold()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VoxSetAndroidAPILevel  (binary VA: 0x1055590)
// Original: VoxSetAndroidAPILevel
// ----------------------------------------------------------------------------
uint32_t * VoxSetAndroidAPILevel(int a1)
{
  vox::DriverAndroid::s_androidAPILevel[0] = a1;
  return (uint32_t *)(vox::DriverAndroid::s_androidAPILevel);
}

// ----------------------------------------------------------------------------
// Function: g4_std::basic_string_char_char_traits_char_vo_fb0ee3::assign  (binary VA: 0x1057380)
// Original: std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>::assign
// ----------------------------------------------------------------------------
void ** g4_std::basic_string_char_char_traits_char_vo_fb0ee3::assign(void **self, const char *src, size_t n)
{
  char *v3;
  size_t v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  uint8_t *dest;
  unsigned int v10;
  int v11;
  char *v12;

  v3 = (char *)*self;
  if ( n > 0x3FFFFFFC )
    sub_1900180("basic_string::assign");
  if ( src < v3 || src > &v3[*((uint32_t *)*self - 3)] || *((int *)v3 - 1) > 0 )
  {
    v4 = *((uint32_t *)v3 - 2);
    if ( n <= v4 )
    {
      v5 = n;
      if ( *((int *)v3 - 1) <= 0 )
      {
LABEL_14:
        if ( v3 - 12 != (char *)g4_empty_string_rep )
        {
          *((uint32_t *)v3 - 1) = 0;
          *((uint32_t *)v3 - 3) = n;
          v3[n] = 0;
        }
        if ( n != 0 )
        {
          dest = (uint8_t *)(*self);
          if ( n == 1 )
            *dest = *src;
          else
            memcpy(dest, src, n);
        }
        return self;
      }
    }
    else
    {
      v5 = 2 * v4;
      if ( n >= 2 * v4 )
        v5 = n;
    }
    if ( v5 + 29 > 0x1000 && v4 < v5 )
    {
      v6 = v5 + 4096 - (((uint16_t)v5 + 29) & 0xFFF);
      v5 = 1073741820;
      if ( v6 <= 0x3FFFFFFC )
        v5 = v6;
    }
    v10 = v5;
    v7 = VoxAllocInternal(v5 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)(v7 + 4) = v10;
    v11 = v7;
    v12 = (char *)*self - 12;
    if ( v12 != (char *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)*self - 1, 0xFFFFFFFF) <= 0 )
    {
      VoxFreeInternal(v12);
    }
    v3 = (char *)(v11 + 12);
    *self = (void *)(v11 + 12);
    goto LABEL_14;
  }
  if ( n <= src - v3 )
  {
    if ( n != 1 )
    {
      memcpy(*self, src, n);
      v3 = (char *)*self;
      goto LABEL_24;
    }
  }
  else
  {
    if ( src == v3 )
      goto LABEL_24;
    if ( n != 1 )
    {
      memmove(*self, src, n);
      v3 = (char *)*self;
      goto LABEL_24;
    }
  }
  *v3 = *src;
  v3 = (char *)*self;
LABEL_24:
  if ( v3 - 12 != (char *)g4_empty_string_rep )
  {
    *((uint32_t *)v3 - 1) = 0;
    *((uint32_t *)v3 - 3) = n;
    v3[n] = 0;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_vox_Group_vox_SAllocator_af16e1::M_fill_insert  (binary VA: 0x1059da0)
// Original: std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_vox_Group_vox_SAllocator_af16e1::M_fill_insert(int *a1, char *a2, unsigned int a3, int a4)
{
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  bool v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  char *v13;
  char *v14;
  unsigned int v15;
  char *v16;
  char *v17;
  void (**v18)(char *);
  char v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  uint32_t *v27;
  bool v28;
  char *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  size_t v34;
  int v35;
  unsigned int v36;
  int v37;
  char *v38;
  int v39; // xmm0_4
  int v40;
  char *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef int _g4_t_v53;
  typedef char _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef char _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef char *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef char *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint32_t *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef unsigned int _g4_t_v85;
  typedef unsigned int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef void (**_g4_t_v92)(vox::Group::Self *);
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef char _g4_t_v104;
  typedef char _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (76u + sizeof(_g4_t_v47)) > _g4_s1 ? (76u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (80u + sizeof(_g4_t_v48)) > _g4_s2 ? (80u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v49)) > _g4_s3 ? (80u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v50)) > _g4_s4 ? (84u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v51)) > _g4_s5 ? (84u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v52)) > _g4_s6 ? (88u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v53)) > _g4_s7 ? (88u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v54)) > _g4_s8 ? (92u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v55)) > _g4_s9 ? (92u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v56)) > _g4_s10 ? (96u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v57)) > _g4_s11 ? (96u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v58)) > _g4_s12 ? (100u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v59)) > _g4_s13 ? (100u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v60)) > _g4_s14 ? (100u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v61)) > _g4_s15 ? (104u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v62)) > _g4_s16 ? (104u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v63)) > _g4_s17 ? (104u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v64)) > _g4_s18 ? (108u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v65)) > _g4_s19 ? (108u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v66)) > _g4_s20 ? (108u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v67)) > _g4_s21 ? (112u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v68)) > _g4_s22 ? (112u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v69)) > _g4_s23 ? (112u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v70)) > _g4_s24 ? (116u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v71)) > _g4_s25 ? (116u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v72)) > _g4_s26 ? (120u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v73)) > _g4_s27 ? (120u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v74)) > _g4_s28 ? (120u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v75)) > _g4_s29 ? (120u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v76)) > _g4_s30 ? (124u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v77)) > _g4_s31 ? (124u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v78)) > _g4_s32 ? (124u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v79)) > _g4_s33 ? (128u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v80)) > _g4_s34 ? (128u + sizeof(_g4_t_v80)) : _g4_s34,
    _g4_s36 = (132u + sizeof(_g4_t_v81)) > _g4_s35 ? (132u + sizeof(_g4_t_v81)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v82)) > _g4_s36 ? (132u + sizeof(_g4_t_v82)) : _g4_s36,
    _g4_s38 = (132u + sizeof(_g4_t_v83)) > _g4_s37 ? (132u + sizeof(_g4_t_v83)) : _g4_s37,
    _g4_s39 = (132u + sizeof(_g4_t_v84)) > _g4_s38 ? (132u + sizeof(_g4_t_v84)) : _g4_s38,
    _g4_s40 = (136u + sizeof(_g4_t_v85)) > _g4_s39 ? (136u + sizeof(_g4_t_v85)) : _g4_s39,
    _g4_s41 = (136u + sizeof(_g4_t_v86)) > _g4_s40 ? (136u + sizeof(_g4_t_v86)) : _g4_s40,
    _g4_s42 = (136u + sizeof(_g4_t_v87)) > _g4_s41 ? (136u + sizeof(_g4_t_v87)) : _g4_s41,
    _g4_s43 = (136u + sizeof(_g4_t_v88)) > _g4_s42 ? (136u + sizeof(_g4_t_v88)) : _g4_s42,
    _g4_s44 = (140u + sizeof(_g4_t_v89)) > _g4_s43 ? (140u + sizeof(_g4_t_v89)) : _g4_s43,
    _g4_s45 = (140u + sizeof(_g4_t_v90)) > _g4_s44 ? (140u + sizeof(_g4_t_v90)) : _g4_s44,
    _g4_s46 = (140u + sizeof(_g4_t_v91)) > _g4_s45 ? (140u + sizeof(_g4_t_v91)) : _g4_s45,
    _g4_s47 = (144u + sizeof(_g4_t_v92)) > _g4_s46 ? (144u + sizeof(_g4_t_v92)) : _g4_s46,
    _g4_s48 = (148u + sizeof(_g4_t_v93)) > _g4_s47 ? (148u + sizeof(_g4_t_v93)) : _g4_s47,
    _g4_s49 = (152u + sizeof(_g4_t_v94)) > _g4_s48 ? (152u + sizeof(_g4_t_v94)) : _g4_s48,
    _g4_s50 = (156u + sizeof(_g4_t_v95)) > _g4_s49 ? (156u + sizeof(_g4_t_v95)) : _g4_s49,
    _g4_s51 = (160u + sizeof(_g4_t_v96)) > _g4_s50 ? (160u + sizeof(_g4_t_v96)) : _g4_s50,
    _g4_s52 = (164u + sizeof(_g4_t_v97)) > _g4_s51 ? (164u + sizeof(_g4_t_v97)) : _g4_s51,
    _g4_s53 = (168u + sizeof(_g4_t_v98)) > _g4_s52 ? (168u + sizeof(_g4_t_v98)) : _g4_s52,
    _g4_s54 = (172u + sizeof(_g4_t_v99)) > _g4_s53 ? (172u + sizeof(_g4_t_v99)) : _g4_s53,
    _g4_s55 = (176u + sizeof(_g4_t_v100)) > _g4_s54 ? (176u + sizeof(_g4_t_v100)) : _g4_s54,
    _g4_s56 = (180u + sizeof(_g4_t_v101)) > _g4_s55 ? (180u + sizeof(_g4_t_v101)) : _g4_s55,
    _g4_s57 = (184u + sizeof(_g4_t_v102)) > _g4_s56 ? (184u + sizeof(_g4_t_v102)) : _g4_s56,
    _g4_s58 = (188u + sizeof(_g4_t_v103)) > _g4_s57 ? (188u + sizeof(_g4_t_v103)) : _g4_s57,
    _g4_s59 = (192u + sizeof(_g4_t_v104)) > _g4_s58 ? (192u + sizeof(_g4_t_v104)) : _g4_s58,
    _g4_s60 = (193u + sizeof(_g4_t_v105)) > _g4_s59 ? (193u + sizeof(_g4_t_v105)) : _g4_s59,
    _g4_s61 = (196u + sizeof(_g4_t_v106)) > _g4_s60 ? (196u + sizeof(_g4_t_v106)) : _g4_s60,
    _g4_s62 = (200u + sizeof(_g4_t_v107)) > _g4_s61 ? (200u + sizeof(_g4_t_v107)) : _g4_s61,
    _g4_s63 = (204u + sizeof(_g4_t_v108)) > _g4_s62 ? (204u + sizeof(_g4_t_v108)) : _g4_s62,
    _g4_s64 = (208u + sizeof(_g4_t_v109)) > _g4_s63 ? (208u + sizeof(_g4_t_v109)) : _g4_s63,
    _g4_s65 = (212u + sizeof(_g4_t_v110)) > _g4_s64 ? (212u + sizeof(_g4_t_v110)) : _g4_s64,
    _g4_s66 = (216u + sizeof(_g4_t_v111)) > _g4_s65 ? (216u + sizeof(_g4_t_v111)) : _g4_s65,
    _g4_s67 = (220u + sizeof(_g4_t_v112)) > _g4_s66 ? (220u + sizeof(_g4_t_v112)) : _g4_s66,
    _g4_s68 = (224u + sizeof(_g4_t_v113)) > _g4_s67 ? (224u + sizeof(_g4_t_v113)) : _g4_s67,
    _g4_s69 = (228u + sizeof(_g4_t_v114)) > _g4_s68 ? (228u + sizeof(_g4_t_v114)) : _g4_s68,
    _g4_s70 = (232u + sizeof(_g4_t_v115)) > _g4_s69 ? (232u + sizeof(_g4_t_v115)) : _g4_s69,
    _g4_s71 = (236u + sizeof(_g4_t_v116)) > _g4_s70 ? (236u + sizeof(_g4_t_v116)) : _g4_s70,
    _g4_s72 = (240u + sizeof(_g4_t_v117)) > _g4_s71 ? (240u + sizeof(_g4_t_v117)) : _g4_s71,
    _g4_s73 = (244u + sizeof(_g4_t_v118)) > _g4_s72 ? (244u + sizeof(_g4_t_v118)) : _g4_s72
  };
  alignas(16) uint8_t _g4_sf[_g4_s73];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 76u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 80u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 84u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 88u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 96u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 100u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 100u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 100u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 104u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 104u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 104u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 108u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 108u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 108u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 112u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 112u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 112u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 116u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 116u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 120u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 120u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 120u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 120u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 124u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 124u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 124u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 128u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 128u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 132u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 132u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 132u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 132u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 136u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 136u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 136u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 136u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 140u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 140u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 140u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 144u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 148u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 152u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 156u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 160u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 164u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 168u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 172u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 176u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 180u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 184u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 188u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 192u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 193u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 196u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 200u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 204u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 208u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 212u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 216u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 220u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 224u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 228u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 232u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 236u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 240u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 244u);

  if ( a3 == 0 )
    return;
  v4 = a1[1];
  v76 = (char *)v4;
  if ( a3 > -991146299 * ((a1[2] - v4) >> 3) )
  {
    v5 = -991146299 * ((v4 - *a1) >> 3);
    if ( a3 > 41297762 - v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = -991146299 * ((v4 - *a1) >> 3);
    v7 = -991146299 * ((int)(uintptr_t)(&a2[-*a1]) >> 3);
    v8 = __CFADD__(v6, v5);
    v9 = v6 - 991146299 * ((v4 - *a1) >> 3);
    if ( v8 || v9 > 0x2762762 )
    {
      v77 = -48;
      v34 = 0xFFFFFFD0;
    }
    else
    {
      if ( v9 == 0 )
      {
        v77 = 0;
        v81 = 0;
        goto LABEL_10;
      }
      v77 = 104 * v9;
      v34 = 104 * v9;
    }
    v81 = VoxAllocInternal(v34, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
LABEL_10:
    v10 = a3;
    v11 = v81 + 104 * v7;
    do
    {
      if ( v11 != 0 )
      {
        *(uint32_t *)v11 = ((uint32_t)(uintptr_t)&off_208DC40);
        *(uint32_t *)(v11 + 4) = *(uint32_t *)(a4 + 4);
        *(uint32_t *)(v11 + 8) = *(uint32_t *)(a4 + 8);
        *(uint32_t *)(v11 + 12) = *(uint32_t *)(a4 + 12);
        *(uint32_t *)(v11 + 16) = *(uint32_t *)(a4 + 16);
        *(uint32_t *)(v11 + 20) = *(uint32_t *)(a4 + 20);
        *(uint32_t *)(v11 + 24) = *(uint32_t *)(a4 + 24);
        *(uint32_t *)(v11 + 28) = *(uint32_t *)(a4 + 28);
        *(uint32_t *)(v11 + 32) = *(uint32_t *)(a4 + 32);
        *(uint32_t *)(v11 + 36) = *(uint32_t *)(a4 + 36);
        *(uint32_t *)(v11 + 40) = *(uint32_t *)(a4 + 40);
        *(uint32_t *)(v11 + 44) = *(uint32_t *)(a4 + 44);
        *(uint8_t *)(v11 + 48) = *(uint8_t *)(a4 + 48);
        *(uint8_t *)(v11 + 49) = *(uint8_t *)(a4 + 49);
        *(uint32_t *)(v11 + 52) = *(uint32_t *)(a4 + 52);
        *(uint32_t *)(v11 + 56) = *(uint32_t *)(a4 + 56);
        *(uint32_t *)(v11 + 60) = *(uint32_t *)(a4 + 60);
        *(uint32_t *)(v11 + 64) = *(uint32_t *)(a4 + 64);
        *(uint32_t *)(v11 + 68) = *(uint32_t *)(a4 + 68);
        *(uint32_t *)(v11 + 72) = *(uint32_t *)(a4 + 72);
        *(uint32_t *)(v11 + 76) = *(uint32_t *)(a4 + 76);
        *(uint32_t *)(v11 + 80) = *(uint32_t *)(a4 + 80);
        *(uint32_t *)(v11 + 84) = *(uint32_t *)(a4 + 84);
        *(uint32_t *)(v11 + 88) = *(uint32_t *)(a4 + 88);
        *(uint32_t *)(v11 + 92) = *(uint32_t *)(a4 + 92);
        *(uint32_t *)(v11 + 96) = *(uint32_t *)(a4 + 96);
        *(uint32_t *)(v11 + 100) = *(uint32_t *)(a4 + 100);
      }
      v11 += 104;
      --v10;
    }
    while ( v10 != 0 );
    v12 = v81;
    if ( (char *)*a1 != a2 )
    {
      v13 = (char *)*a1;
      v72 = *a1;
      do
      {
        if ( v12 != 0 )
        {
          *(uint32_t *)v12 = ((uint32_t)(uintptr_t)&off_208DC40);
          *(uint32_t *)(v12 + 4) = *((uint32_t *)v13 + 1);
          *(uint32_t *)(v12 + 8) = *((uint32_t *)v13 + 2);
          *(uint32_t *)(v12 + 12) = *((uint32_t *)v13 + 3);
          *(uint32_t *)(v12 + 16) = *((uint32_t *)v13 + 4);
          *(uint32_t *)(v12 + 20) = *((uint32_t *)v13 + 5);
          *(uint32_t *)(v12 + 24) = *((uint32_t *)v13 + 6);
          *(uint32_t *)(v12 + 28) = *((uint32_t *)v13 + 7);
          *(uint32_t *)(v12 + 32) = *((uint32_t *)v13 + 8);
          *(uint32_t *)(v12 + 36) = *((uint32_t *)v13 + 9);
          *(uint32_t *)(v12 + 40) = *((uint32_t *)v13 + 10);
          *(uint32_t *)(v12 + 44) = *((uint32_t *)v13 + 11);
          *(uint8_t *)(v12 + 48) = v13[48];
          *(uint8_t *)(v12 + 49) = v13[49];
          *(uint32_t *)(v12 + 52) = *((uint32_t *)v13 + 13);
          *(uint32_t *)(v12 + 56) = *((uint32_t *)v13 + 14);
          *(uint32_t *)(v12 + 60) = *((uint32_t *)v13 + 15);
          *(uint32_t *)(v12 + 64) = *((uint32_t *)v13 + 16);
          *(uint32_t *)(v12 + 68) = *((uint32_t *)v13 + 17);
          *(uint32_t *)(v12 + 72) = *((uint32_t *)v13 + 18);
          *(uint32_t *)(v12 + 76) = *((uint32_t *)v13 + 19);
          *(uint32_t *)(v12 + 80) = *((uint32_t *)v13 + 20);
          *(uint32_t *)(v12 + 84) = *((uint32_t *)v13 + 21);
          *(uint32_t *)(v12 + 88) = *((uint32_t *)v13 + 22);
          *(uint32_t *)(v12 + 92) = *((uint32_t *)v13 + 23);
          *(uint32_t *)(v12 + 96) = *((uint32_t *)v13 + 24);
          *(uint32_t *)(v12 + 100) = *((uint32_t *)v13 + 25);
        }
        v13 += 104;
        v12 += 104;
      }
      while ( a2 != v13 );
      v12 = v81 + 104 * (((82595525 * ((unsigned int)(uintptr_t)(&a2[-v72 - 104]) >> 3)) & 0x1FFFFFFF) + 1);
    }
    v85 = v12 + 104 * a3;
    v14 = (char *)a1[1];
    if ( v14 != a2 )
    {
      v15 = v12 + 104 * a3;
      v16 = a2;
      do
      {
        if ( v15 != 0 )
        {
          *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_208DC40);
          *(uint32_t *)(v15 + 4) = *((uint32_t *)v16 + 1);
          *(uint32_t *)(v15 + 8) = *((uint32_t *)v16 + 2);
          *(uint32_t *)(v15 + 12) = *((uint32_t *)v16 + 3);
          *(uint32_t *)(v15 + 16) = *((uint32_t *)v16 + 4);
          *(uint32_t *)(v15 + 20) = *((uint32_t *)v16 + 5);
          *(uint32_t *)(v15 + 24) = *((uint32_t *)v16 + 6);
          *(uint32_t *)(v15 + 28) = *((uint32_t *)v16 + 7);
          *(uint32_t *)(v15 + 32) = *((uint32_t *)v16 + 8);
          *(uint32_t *)(v15 + 36) = *((uint32_t *)v16 + 9);
          *(uint32_t *)(v15 + 40) = *((uint32_t *)v16 + 10);
          *(uint32_t *)(v15 + 44) = *((uint32_t *)v16 + 11);
          *(uint8_t *)(v15 + 48) = v16[48];
          *(uint8_t *)(v15 + 49) = v16[49];
          *(uint32_t *)(v15 + 52) = *((uint32_t *)v16 + 13);
          *(uint32_t *)(v15 + 56) = *((uint32_t *)v16 + 14);
          *(uint32_t *)(v15 + 60) = *((uint32_t *)v16 + 15);
          *(uint32_t *)(v15 + 64) = *((uint32_t *)v16 + 16);
          *(uint32_t *)(v15 + 68) = *((uint32_t *)v16 + 17);
          *(uint32_t *)(v15 + 72) = *((uint32_t *)v16 + 18);
          *(uint32_t *)(v15 + 76) = *((uint32_t *)v16 + 19);
          *(uint32_t *)(v15 + 80) = *((uint32_t *)v16 + 20);
          *(uint32_t *)(v15 + 84) = *((uint32_t *)v16 + 21);
          *(uint32_t *)(v15 + 88) = *((uint32_t *)v16 + 22);
          *(uint32_t *)(v15 + 92) = *((uint32_t *)v16 + 23);
          *(uint32_t *)(v15 + 96) = *((uint32_t *)v16 + 24);
          *(uint32_t *)(v15 + 100) = *((uint32_t *)v16 + 25);
        }
        v16 += 104;
        v15 += 104;
      }
      while ( v14 != v16 );
      v85 += 104 * (((82595525 * ((unsigned int)(v14 - (a2 + 104)) >> 3)) & 0x1FFFFFFF) + 1);
      v14 = (char *)a1[1];
    }
    v17 = (char *)*a1;
    if ( (char *)*a1 != v14 )
    {
      do
      {
        v18 = *(void (***)(char *))v17;
        v46 = v17;
        v17 += 104;
        (*v18)(v46);
      }
      while ( v17 != v14 );
      v17 = (char *)*a1;
    }
    if ( v17 != nullptr )
      VoxFreeInternal(v17);
    *a1 = v81;
    a1[1] = v85;
    a1[2] = v77 + v81;
    return;
  }
  v93 = *(uint32_t *)(a4 + 4);
  v94 = *(uint32_t *)(a4 + 8);
  v95 = *(uint32_t *)(a4 + 12);
  v96 = *(uint32_t *)(a4 + 16);
  v97 = *(uint32_t *)(a4 + 20);
  v98 = *(uint32_t *)(a4 + 24);
  v99 = *(uint32_t *)(a4 + 28);
  v100 = *(uint32_t *)(a4 + 32);
  v101 = *(uint32_t *)(a4 + 36);
  v102 = *(uint32_t *)(a4 + 40);
  v103 = *(uint32_t *)(a4 + 44);
  v19 = *(uint8_t *)(a4 + 48);
  v92 = (void (**)(vox::Group::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208DC40));
  v104 = v19;
  v105 = *(uint8_t *)(a4 + 49);
  v106 = *(uint32_t *)(a4 + 52);
  v107 = *(uint32_t *)(a4 + 56);
  v108 = *(uint32_t *)(a4 + 60);
  v109 = *(uint32_t *)(a4 + 64);
  v110 = *(uint32_t *)(a4 + 68);
  v111 = *(uint32_t *)(a4 + 72);
  v112 = *(uint32_t *)(a4 + 76);
  v113 = *(uint32_t *)(a4 + 80);
  v114 = *(uint32_t *)(a4 + 84);
  v115 = *(uint32_t *)(a4 + 88);
  v116 = *(uint32_t *)(a4 + 92);
  v117 = *(uint32_t *)(a4 + 96);
  v118 = *(uint32_t *)(a4 + 100);
  v20 = -991146299 * ((v4 - (int)(uintptr_t)(a2)) >> 3);
  if ( a3 >= v20 )
  {
    v35 = v4;
    v36 = a3 - v20;
    if ( a3 != v20 )
    {
      do
      {
        if ( v35 != 0 )
        {
          *(uint32_t *)v35 = ((uint32_t)(uintptr_t)&off_208DC40);
          *(uint32_t *)(v35 + 4) = v93;
          *(uint32_t *)(v35 + 8) = v94;
          *(uint32_t *)(v35 + 12) = v95;
          *(uint32_t *)(v35 + 16) = v96;
          *(uint32_t *)(v35 + 20) = v97;
          *(uint32_t *)(v35 + 24) = v98;
          *(uint32_t *)(v35 + 28) = v99;
          *(uint32_t *)(v35 + 32) = v100;
          *(uint32_t *)(v35 + 36) = v101;
          *(uint32_t *)(v35 + 40) = v102;
          *(uint32_t *)(v35 + 44) = v103;
          *(uint8_t *)(v35 + 48) = v104;
          *(uint8_t *)(v35 + 49) = v105;
          *(uint32_t *)(v35 + 52) = v106;
          *(uint32_t *)(v35 + 56) = v107;
          *(uint32_t *)(v35 + 60) = v108;
          *(uint32_t *)(v35 + 64) = v109;
          *(uint32_t *)(v35 + 68) = v110;
          *(uint32_t *)(v35 + 72) = v111;
          *(uint32_t *)(v35 + 76) = v112;
          *(uint32_t *)(v35 + 80) = v113;
          *(uint32_t *)(v35 + 84) = v114;
          *(uint32_t *)(v35 + 88) = v115;
          *(uint32_t *)(v35 + 92) = v116;
          *(uint32_t *)(v35 + 96) = v117;
          *(uint32_t *)(v35 + 100) = v118;
        }
        v35 += 104;
        --v36;
      }
      while ( v36 != 0 );
      v35 = a1[1];
    }
    v37 = 104 * (a3 - v20) + v35;
    v38 = a2;
    a1[1] = v37;
    if ( v76 == a2 )
    {
      a1[1] = 8 * ((v76 - a2) >> 3) + v37;
    }
    else
    {
      do
      {
        if ( v37 != 0 )
        {
          *(uint32_t *)v37 = ((uint32_t)(uintptr_t)&off_208DC40);
          *(uint32_t *)(v37 + 4) = *((uint32_t *)v38 + 1);
          *(uint32_t *)(v37 + 8) = *((uint32_t *)v38 + 2);
          *(uint32_t *)(v37 + 12) = *((uint32_t *)v38 + 3);
          *(uint32_t *)(v37 + 16) = *((uint32_t *)v38 + 4);
          *(uint32_t *)(v37 + 20) = *((uint32_t *)v38 + 5);
          *(uint32_t *)(v37 + 24) = *((uint32_t *)v38 + 6);
          *(uint32_t *)(v37 + 28) = *((uint32_t *)v38 + 7);
          *(uint32_t *)(v37 + 32) = *((uint32_t *)v38 + 8);
          *(uint32_t *)(v37 + 36) = *((uint32_t *)v38 + 9);
          *(uint32_t *)(v37 + 40) = *((uint32_t *)v38 + 10);
          *(uint32_t *)(v37 + 44) = *((uint32_t *)v38 + 11);
          *(uint8_t *)(v37 + 48) = v38[48];
          *(uint8_t *)(v37 + 49) = v38[49];
          *(uint32_t *)(v37 + 52) = *((uint32_t *)v38 + 13);
          *(uint32_t *)(v37 + 56) = *((uint32_t *)v38 + 14);
          *(uint32_t *)(v37 + 60) = *((uint32_t *)v38 + 15);
          *(uint32_t *)(v37 + 64) = *((uint32_t *)v38 + 16);
          *(uint32_t *)(v37 + 68) = *((uint32_t *)v38 + 17);
          *(uint32_t *)(v37 + 72) = *((uint32_t *)v38 + 18);
          *(uint32_t *)(v37 + 76) = *((uint32_t *)v38 + 19);
          *(uint32_t *)(v37 + 80) = *((uint32_t *)v38 + 20);
          *(uint32_t *)(v37 + 84) = *((uint32_t *)v38 + 21);
          *(uint32_t *)(v37 + 88) = *((uint32_t *)v38 + 22);
          *(uint32_t *)(v37 + 92) = *((uint32_t *)v38 + 23);
          *(uint32_t *)(v37 + 96) = *((uint32_t *)v38 + 24);
          *(uint32_t *)(v37 + 100) = *((uint32_t *)v38 + 25);
        }
        v38 += 104;
        v37 += 104;
      }
      while ( v76 != v38 );
      v39 = v94;
      v40 = v95;
      a1[1] += 8 * ((v76 - a2) >> 3);
      v57 = v104;
      v51 = v105;
      v60 = v111;
      v49 = v93;
      v63 = v117;
      v91 = v96;
      v88 = v97;
      v84 = v98;
      v55 = v40;
      v75 = v99;
      v71 = v100;
      v69 = v101;
      v53 = v118;
      v41 = a2;
      v66 = v102;
      v80 = v103;
      do
      {
        *((uint32_t *)v41 + 5) = v88;
        *((uint32_t *)v41 + 1) = v49;
        *((uint32_t *)v41 + 8) = v71;
        *((uint32_t *)v41 + 3) = v55;
        *((uint32_t *)v41 + 11) = v80;
        v42 = v106;
        *((uint32_t *)v41 + 6) = v84;
        *((uint32_t *)v41 + 13) = v42;
        v43 = v107;
        *((uint32_t *)v41 + 4) = v91;
        *((uint32_t *)v41 + 9) = v69;
        *((uint32_t *)v41 + 14) = v43;
        v44 = v108;
        *((uint32_t *)v41 + 7) = v75;
        v41[48] = v57;
        *((uint32_t *)v41 + 15) = v44;
        v45 = v109;
        *((uint32_t *)v41 + 2) = v39;
        v41[49] = v51;
        *((uint32_t *)v41 + 10) = v66;
        *((uint32_t *)v41 + 16) = v45;
        v41[68] = v110;
        *((uint32_t *)v41 + 18) = v60;
        *((uint32_t *)v41 + 19) = v112;
        *((uint32_t *)v41 + 20) = v113;
        *((uint32_t *)v41 + 21) = v114;
        *((uint32_t *)v41 + 22) = v115;
        LOBYTE(v45) = v116;
        *((uint32_t *)v41 + 24) = v63;
        v41[92] = v45;
        *((uint32_t *)v41 + 25) = v53;
        v41 += 104;
      }
      while ( v76 != v41 );
    }
  }
  else
  {
    v21 = v4 - 104 * a3;
    v58 = 104 * a3;
    v22 = v4;
    v61 = v21;
    if ( v4 != v21 )
    {
      do
      {
        if ( v22 != 0 )
        {
          *(uint32_t *)v22 = ((uint32_t)(uintptr_t)&off_208DC40);
          *(uint32_t *)(v22 + 4) = *(uint32_t *)(v21 + 4);
          *(uint32_t *)(v22 + 8) = *(uint32_t *)(v21 + 8);
          *(uint32_t *)(v22 + 12) = *(uint32_t *)(v21 + 12);
          *(uint32_t *)(v22 + 16) = *(uint32_t *)(v21 + 16);
          *(uint32_t *)(v22 + 20) = *(uint32_t *)(v21 + 20);
          *(uint32_t *)(v22 + 24) = *(uint32_t *)(v21 + 24);
          *(uint32_t *)(v22 + 28) = *(uint32_t *)(v21 + 28);
          *(uint32_t *)(v22 + 32) = *(uint32_t *)(v21 + 32);
          *(uint32_t *)(v22 + 36) = *(uint32_t *)(v21 + 36);
          *(uint32_t *)(v22 + 40) = *(uint32_t *)(v21 + 40);
          *(uint32_t *)(v22 + 44) = *(uint32_t *)(v21 + 44);
          *(uint8_t *)(v22 + 48) = *(uint8_t *)(v21 + 48);
          *(uint8_t *)(v22 + 49) = *(uint8_t *)(v21 + 49);
          *(uint32_t *)(v22 + 52) = *(uint32_t *)(v21 + 52);
          *(uint32_t *)(v22 + 56) = *(uint32_t *)(v21 + 56);
          *(uint32_t *)(v22 + 60) = *(uint32_t *)(v21 + 60);
          *(uint32_t *)(v22 + 64) = *(uint32_t *)(v21 + 64);
          *(uint32_t *)(v22 + 68) = *(uint32_t *)(v21 + 68);
          *(uint32_t *)(v22 + 72) = *(uint32_t *)(v21 + 72);
          *(uint32_t *)(v22 + 76) = *(uint32_t *)(v21 + 76);
          *(uint32_t *)(v22 + 80) = *(uint32_t *)(v21 + 80);
          *(uint32_t *)(v22 + 84) = *(uint32_t *)(v21 + 84);
          *(uint32_t *)(v22 + 88) = *(uint32_t *)(v21 + 88);
          *(uint32_t *)(v22 + 92) = *(uint32_t *)(v21 + 92);
          *(uint32_t *)(v22 + 96) = *(uint32_t *)(v21 + 96);
          *(uint32_t *)(v22 + 100) = *(uint32_t *)(v21 + 100);
        }
        v21 += 104;
        v22 += 104;
      }
      while ( v4 != v21 );
      v22 = a1[1];
    }
    a1[1] = v58 + v22;
    v73 = -991146299 * ((int)(v61 - (uint32_t)(uintptr_t)(a2)) >> 3);
    if ( v73 > 0 )
    {
      v89 = v4;
      v86 = v61;
      v23 = v4 - 104;
      v24 = v61;
      v64 = v4 - 104;
      v25 = v4;
      while ( 1 )
      {
        v67 = v25 - 104;
        v26 = v25 - 104 - v4;
        *(uint32_t *)(v26 + v23 + 108) = *(uint32_t *)(v24 - 208 + 108);
        *(uint32_t *)(v26 + v23 + 112) = *(uint32_t *)(v24 - 208 + 112);
        *(uint32_t *)(v26 + v23 + 116) = *(uint32_t *)(v24 - 208 + 116);
        *(uint32_t *)(v26 + v23 + 120) = *(uint32_t *)(v24 - 208 + 120);
        *(uint32_t *)(v26 + v23 + 124) = *(uint32_t *)(v24 - 208 + 124);
        *(uint32_t *)(v26 + v23 + 128) = *(uint32_t *)(v24 - 208 + 128);
        *(uint32_t *)(v26 + v23 + 132) = *(uint32_t *)(v24 - 208 + 132);
        *(uint32_t *)(v26 + v23 + 136) = *(uint32_t *)(v24 - 208 + 136);
        *(uint32_t *)(v26 + v23 + 140) = *(uint32_t *)(v24 - 208 + 140);
        *(uint32_t *)(v26 + v23 + 144) = *(uint32_t *)(v24 - 208 + 144);
        *(uint32_t *)(v26 + v23 + 148) = *(uint32_t *)(v24 - 208 + 148);
        *(uint8_t *)(v26 + v64 + 152) = *(uint8_t *)(v24 - 208 + 152);
        *(uint8_t *)(v26 + v64 + 153) = *(uint8_t *)(v24 - 208 + 153);
        *(uint32_t *)(v89 - 52) = *(uint32_t *)(v86 - 52);
        v27 = (uint32_t *)(v89 - 52);
        v27[1] = *(uint32_t *)(v86 - 52 + 4);
        v27[2] = *(uint32_t *)(v86 - 52 + 8);
        v27[3] = *(uint32_t *)(v86 - 52 + 12);
        *(uint8_t *)(v89 - 52 + 16) = *(uint8_t *)(v86 - 52 + 16);
        *(uint32_t *)(v26 + v64 + 176) = *(uint32_t *)(v24 - 208 + 176);
        v82 = (uint32_t *)(v89 - 28);
        *(uint32_t *)(v89 - 28) = *(uint32_t *)(v86 - 28);
        v82[1] = *(uint32_t *)(v86 - 28 + 4);
        v82[2] = *(uint32_t *)(v86 - 28 + 8);
        v28 = v73-- == 1;
        v82[3] = *(uint32_t *)(v86 - 28 + 12);
        *(uint8_t *)(v89 - 28 + 16) = *(uint8_t *)(v86 - 28 + 16);
        *(uint32_t *)(v26 + v64 + 200) = *(uint32_t *)(v24 - 208 + 200);
        *(uint32_t *)(v26 + v64 + 204) = *(uint32_t *)(v24 - 208 + 204);
        if ( v28 )
          break;
        v86 = v24 - 104;
        v24 -= 104;
        v89 = v67;
        v25 = v67;
        v23 = v4 - 104;
      }
    }
    v78 = &a2[v58];
    if ( &a2[v58] != a2 )
    {
      v62 = v93;
      v56 = v95;
      v59 = v94;
      v54 = v104;
      v52 = v105;
      v29 = a2;
      v50 = v111;
      v90 = v96;
      v48 = v117;
      v87 = v97;
      v83 = v98;
      v74 = v99;
      v70 = v100;
      v68 = v101;
      v65 = v102;
      v47 = v118;
      v79 = v103;
      do
      {
        *((uint32_t *)v29 + 5) = v87;
        *((uint32_t *)v29 + 1) = v62;
        *((uint32_t *)v29 + 8) = v70;
        *((uint32_t *)v29 + 3) = v56;
        *((uint32_t *)v29 + 11) = v79;
        v30 = v106;
        *((uint32_t *)v29 + 6) = v83;
        *((uint32_t *)v29 + 13) = v30;
        v31 = v107;
        *((uint32_t *)v29 + 4) = v90;
        *((uint32_t *)v29 + 9) = v68;
        *((uint32_t *)v29 + 14) = v31;
        v32 = v108;
        *((uint32_t *)v29 + 7) = v74;
        v29[48] = v54;
        *((uint32_t *)v29 + 15) = v32;
        v33 = v109;
        *((uint32_t *)v29 + 2) = v59;
        v29[49] = v52;
        *((uint32_t *)v29 + 10) = v65;
        *((uint32_t *)v29 + 16) = v33;
        v29[68] = v110;
        *((uint32_t *)v29 + 18) = v50;
        *((uint32_t *)v29 + 19) = v112;
        *((uint32_t *)v29 + 20) = v113;
        *((uint32_t *)v29 + 21) = v114;
        *((uint32_t *)v29 + 22) = v115;
        LOBYTE(v33) = v116;
        *((uint32_t *)v29 + 24) = v48;
        v29[92] = v33;
        *((uint32_t *)v29 + 25) = v47;
        v29 += 104;
      }
      while ( v78 != v29 );
    }
  }
  vox::Group::Destroy((vox::Group::Self *)&v92);
}

// ----------------------------------------------------------------------------
// Function: huff_init_lut  (binary VA: 0x105ac90)
// Original: huff_init_lut
// ----------------------------------------------------------------------------
int huff_init_lut(int a1)
{
  char *v1;
  int v2;
  int v3;
  char *v4;
  char *v5;
  char *v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  char *v11;
  char *v12;
  int v13;
  char *v14;
  int v15;
  char *v16;
  uint8_t v17;
  int v18;
  char *v19;
  int v20;
  char *v21;
  uint8_t v22;
  int v23;
  char *v24;
  int v25;
  char *v26;
  uint8_t v27;
  int v28;
  char *v29;
  int v30;
  char *v31;
  uint8_t v32;
  int v33;
  char *v34;
  int v35;
  char *v36;
  uint8_t v37;
  int v38;
  char *v39;
  int v40;
  char *v41;
  uint8_t v42;
  int v43;
  char *v44;
  int v45;
  char *v46;
  uint8_t v47;
  int v48;
  char *v49;
  int v50;
  char *v51;
  uint8_t v52;
  int result;
  int v54;
  int v55;
  int v56;
  uint16_t *v57;
  uint8_t v58;
  int v59;
  void **v60;
  int v61;
  uint8_t *v62;
  uint16_t *v63;
  uint8_t v64;
  char *v65;
  char *v66;
  char *v67;
  char *v68;
  char *v69;
  char *v70;
  char *v71;
  char *v72;
  char *v73;
  char *v74;
  char *v75;
  char *v76;
  char *v77;
  char *v78;
  char *v79;
  char *v80;
  char *v81;
  char *v82;
  uint8_t v83;
  uint8_t v84;
  char *v85;
  char *v86;
  char *v87;
  char *v88;
  char *v89;
  char *v90;
  char *v91;
  char *v92;
  char *v93;
  char *v94;
  char *v95;
  char *v96;
  char *v97;
  char *v98;
  char *v99;
  char *v100;
  char *v101;
  char *v102;
  uint8_t *v103;
  char v104;
  uint8_t *v105;
  uint8_t *v106;
  uint8_t *v107;
  uint8_t *v108;
  void **v109;
  void **v110;
  uint8_t *v111;
  uint8_t *v112;
  int *v113;
  int v114;
  int v115;
  int v116;
  int *v117;
  int i;
  int *v119;

  v104 = 16 - a1;
  v1 = (char *)mpc_HuffDSCF;
  v116 = (1 << a1) - 1;
  if ( v116 >= 0 )
  {
    v2 = (1 << a1) - 1;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v5 = &v1[4 * v3];
        if ( (int)*(uint16_t *)v5 >> v104 >= v2 )
          break;
        v4 = (char *)&mpc_HuffDSCF + 2 * v2--;
        v4[4] = v5[2];
        v4[5] = v5[3];
        if ( v2 == -1 )
          goto LABEL_10;
      }
      v83 = v5[2];
      v6 = (char *)&mpc_HuffDSCF + 2 * v2;
      if ( a1 < v83 )
      {
        v6[4] = 0;
        v6[5] = v3;
      }
      else
      {
        v6[4] = v83;
        v6[5] = v5[3];
      }
      if ( v2 == 0 )
        break;
      do
        ++v3;
      while ( v2 == (int)*(uint16_t *)&v1[4 * v3] >> v104 );
      --v2;
    }
    while ( v2 != -1 );
LABEL_10:
    v7 = (1 << a1) - 1;
    v8 = 0;
    v9 = (char *)mpc_HuffHdr;
    do
    {
      while ( 1 )
      {
        v11 = &v9[4 * v8];
        if ( (int)*(uint16_t *)v11 >> v104 >= v7 )
          break;
        v10 = (char *)&mpc_HuffHdr + 2 * v7--;
        v10[4] = v11[2];
        v10[5] = v11[3];
        if ( v7 == -1 )
          goto LABEL_18;
      }
      v84 = v11[2];
      v12 = (char *)&mpc_HuffHdr + 2 * v7;
      if ( a1 < v84 )
      {
        v12[4] = 0;
        v12[5] = v8;
      }
      else
      {
        v12[4] = v84;
        v12[5] = v11[3];
      }
      if ( v7 == 0 )
        break;
      do
        ++v8;
      while ( v7 == (int)*(uint16_t *)&v9[4 * v8] >> v104 );
      --v7;
    }
    while ( v7 != -1 );
LABEL_18:
    v13 = (1 << a1) - 1;
    v14 = (char *)mpc_can_SCFI;
    v105 = (uint8_t *)(uintptr_t)(off_20C33A4);
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = &v14[4 * v15];
        v17 = v16[2];
        if ( (int)*(uint16_t *)v16 >> v104 < v13 )
          break;
        if ( a1 < v17 )
        {
          v68 = (char *)&mpc_can_SCFI + 2 * v13;
          v68[8] = 0;
          v68[9] = v15;
        }
        else
        {
          v86 = (char *)&mpc_can_SCFI + 2 * v13;
          v86[8] = v17;
          v86[9] = v105[(uint8_t)(v16[3] - (v13 >> (a1 - v16[2])))];
        }
        if ( v13 != 0 )
        {
          do
            ++v15;
          while ( v13 == (int)*(uint16_t *)&v14[4 * v15] >> v104 );
          if ( --v13 != -1 )
            continue;
        }
        goto LABEL_28;
      }
      if ( a1 < v17 )
      {
        v67 = (char *)&mpc_can_SCFI + 2 * v13;
        v67[8] = 0;
        v67[9] = v15;
      }
      else
      {
        v85 = (char *)&mpc_can_SCFI + 2 * v13;
        v85[8] = v17;
        v85[9] = v105[(uint8_t)(v16[3] - (v13 >> (a1 - v16[2])))];
      }
      --v13;
    }
    while ( v13 != -1 );
LABEL_28:
    v18 = (1 << a1) - 1;
    v19 = (char *)off_20C3428;
    v106 = (uint8_t *)(uintptr_t)(off_20C342C);
    v20 = 0;
    do
    {
      while ( 1 )
      {
        v21 = &v19[4 * v20];
        v22 = v21[2];
        if ( (int)*(uint16_t *)v21 >> v104 < v18 )
          break;
        if ( a1 < v22 )
        {
          v70 = (char *)&mpc_can_SCFI + 2 * v18 + 136;
          v70[8] = 0;
          v70[9] = v20;
        }
        else
        {
          v88 = (char *)&mpc_can_SCFI + 2 * v18 + 136;
          v88[8] = v22;
          v88[9] = v106[(uint8_t)(v21[3] - (v18 >> (a1 - v21[2])))];
        }
        if ( v18 != 0 )
        {
          do
            ++v20;
          while ( v18 == (int)*(uint16_t *)&v19[4 * v20] >> v104 );
          if ( --v18 != -1 )
            continue;
        }
        goto LABEL_38;
      }
      if ( a1 < v22 )
      {
        v69 = (char *)&mpc_can_SCFI + 2 * v18 + 136;
        v69[8] = 0;
        v69[9] = v20;
      }
      else
      {
        v87 = (char *)&mpc_can_SCFI + 2 * v18 + 136;
        v87[8] = v22;
        v87[9] = v106[(uint8_t)(v21[3] - (v18 >> (a1 - v21[2])))];
      }
      --v18;
    }
    while ( v18 != -1 );
LABEL_38:
    v23 = (1 << a1) - 1;
    v24 = (char *)mpc_can_DSCF;
    v107 = (uint8_t *)(uintptr_t)(off_20C3284);
    v25 = 0;
    do
    {
      while ( 1 )
      {
        v26 = &v24[4 * v25];
        v27 = v26[2];
        if ( (int)*(uint16_t *)v26 >> v104 < v23 )
          break;
        if ( a1 < v27 )
        {
          v72 = (char *)&mpc_can_DSCF + 2 * v23;
          v72[8] = 0;
          v72[9] = v25;
        }
        else
        {
          v90 = (char *)&mpc_can_DSCF + 2 * v23;
          v90[8] = v27;
          v90[9] = v107[(uint8_t)(v26[3] - (v23 >> (a1 - v26[2])))];
        }
        if ( v23 != 0 )
        {
          do
            ++v25;
          while ( v23 == (int)*(uint16_t *)&v24[4 * v25] >> v104 );
          if ( --v23 != -1 )
            continue;
        }
        goto LABEL_48;
      }
      if ( a1 < v27 )
      {
        v71 = (char *)&mpc_can_DSCF + 2 * v23;
        v71[8] = 0;
        v71[9] = v25;
      }
      else
      {
        v89 = (char *)&mpc_can_DSCF + 2 * v23;
        v89[8] = v27;
        v89[9] = v107[(uint8_t)(v26[3] - (v23 >> (a1 - v26[2])))];
      }
      --v23;
    }
    while ( v23 != -1 );
LABEL_48:
    v28 = (1 << a1) - 1;
    v29 = (char *)off_20C3308;
    v108 = (uint8_t *)(uintptr_t)(off_20C330C);
    v30 = 0;
    do
    {
      while ( 1 )
      {
        v31 = &v29[4 * v30];
        v32 = v31[2];
        if ( (int)*(uint16_t *)v31 >> v104 < v28 )
          break;
        if ( a1 < v32 )
        {
          v74 = (char *)&mpc_can_DSCF + 2 * v28 + 136;
          v74[8] = 0;
          v74[9] = v30;
        }
        else
        {
          v92 = (char *)&mpc_can_DSCF + 2 * v28 + 136;
          v92[8] = v32;
          v92[9] = v108[(uint8_t)(v31[3] - (v28 >> (a1 - v31[2])))];
        }
        if ( v28 != 0 )
        {
          do
            ++v30;
          while ( v28 == (int)*(uint16_t *)&v29[4 * v30] >> v104 );
          if ( --v28 != -1 )
            continue;
        }
        goto LABEL_58;
      }
      if ( a1 < v32 )
      {
        v73 = (char *)&mpc_can_DSCF + 2 * v28 + 136;
        v73[8] = 0;
        v73[9] = v30;
      }
      else
      {
        v91 = (char *)&mpc_can_DSCF + 2 * v28 + 136;
        v91[8] = v32;
        v91[9] = v108[(uint8_t)(v31[3] - (v28 >> (a1 - v31[2])))];
      }
      --v28;
    }
    while ( v28 != -1 );
LABEL_58:
    v33 = (1 << a1) - 1;
    v34 = (char *)mpc_can_Res;
    v109 = (void **)(uintptr_t)(off_20C30C4);
    v35 = 0;
    do
    {
      while ( 1 )
      {
        v36 = &v34[4 * v35];
        v37 = v36[2];
        if ( (int)*(uint16_t *)v36 >> v104 < v33 )
          break;
        if ( a1 < v37 )
        {
          v76 = (char *)&mpc_can_Res + 2 * v33;
          v76[8] = 0;
          v76[9] = v35;
        }
        else
        {
          v94 = (char *)&mpc_can_Res + 2 * v33;
          v94[8] = v37;
          v94[9] = *((uint8_t *)v109 + (uint8_t)(v36[3] - (v33 >> (a1 - v36[2]))));
        }
        if ( v33 != 0 )
        {
          do
            ++v35;
          while ( v33 == (int)*(uint16_t *)&v34[4 * v35] >> v104 );
          if ( --v33 != -1 )
            continue;
        }
        goto LABEL_68;
      }
      if ( a1 < v37 )
      {
        v75 = (char *)&mpc_can_Res + 2 * v33;
        v75[8] = 0;
        v75[9] = v35;
      }
      else
      {
        v93 = (char *)&mpc_can_Res + 2 * v33;
        v93[8] = v37;
        v93[9] = *((uint8_t *)v109 + (uint8_t)(v36[3] - (v33 >> (a1 - v36[2]))));
      }
      --v33;
    }
    while ( v33 != -1 );
LABEL_68:
    v38 = (1 << a1) - 1;
    v39 = (char *)off_20C3148;
    v110 = (void **)(uintptr_t)(off_20C314C);
    v40 = 0;
    do
    {
      while ( 1 )
      {
        v41 = &v39[4 * v40];
        v42 = v41[2];
        if ( (int)*(uint16_t *)v41 >> v104 < v38 )
          break;
        if ( a1 < v42 )
        {
          v78 = (char *)&mpc_can_Res + 2 * v38 + 136;
          v78[8] = 0;
          v78[9] = v40;
        }
        else
        {
          v96 = (char *)&mpc_can_Res + 2 * v38 + 136;
          v96[8] = v42;
          v96[9] = *((uint8_t *)v110 + (uint8_t)(v41[3] - (v38 >> (a1 - v41[2]))));
        }
        if ( v38 != 0 )
        {
          do
            ++v40;
          while ( v38 == (int)*(uint16_t *)&v39[4 * v40] >> v104 );
          if ( --v38 != -1 )
            continue;
        }
        goto LABEL_78;
      }
      if ( a1 < v42 )
      {
        v77 = (char *)&mpc_can_Res + 2 * v38 + 136;
        v77[8] = 0;
        v77[9] = v40;
      }
      else
      {
        v95 = (char *)&mpc_can_Res + 2 * v38 + 136;
        v95[8] = v42;
        v95[9] = *((uint8_t *)v110 + (uint8_t)(v41[3] - (v38 >> (a1 - v41[2]))));
      }
      --v38;
    }
    while ( v38 != -1 );
LABEL_78:
    v43 = (1 << a1) - 1;
    v44 = (char *)mpc_can_Q1;
    v111 = (uint8_t *)(uintptr_t)(off_20C3024);
    v45 = 0;
    do
    {
      while ( 1 )
      {
        v46 = &v44[4 * v45];
        v47 = v46[2];
        if ( (int)*(uint16_t *)v46 >> v104 < v43 )
          break;
        if ( a1 < v47 )
        {
          v80 = (char *)&mpc_can_Q1 + 2 * v43;
          v80[8] = 0;
          v80[9] = v45;
        }
        else
        {
          v98 = (char *)&mpc_can_Q1 + 2 * v43;
          v98[8] = v47;
          v98[9] = v111[(uint8_t)(v46[3] - (v43 >> (a1 - v46[2])))];
        }
        if ( v43 != 0 )
        {
          do
            ++v45;
          while ( v43 == (int)*(uint16_t *)&v44[4 * v45] >> v104 );
          if ( --v43 != -1 )
            continue;
        }
        goto LABEL_88;
      }
      if ( a1 < v47 )
      {
        v79 = (char *)&mpc_can_Q1 + 2 * v43;
        v79[8] = 0;
        v79[9] = v45;
      }
      else
      {
        v97 = (char *)&mpc_can_Q1 + 2 * v43;
        v97[8] = v47;
        v97[9] = v111[(uint8_t)(v46[3] - (v43 >> (a1 - v46[2])))];
      }
      --v43;
    }
    while ( v43 != -1 );
LABEL_88:
    v48 = (1 << a1) - 1;
    v49 = (char *)mpc_can_Q9up;
    v112 = (uint8_t *)(uintptr_t)(off_20C2F84);
    v50 = 0;
    do
    {
      while ( 1 )
      {
        v51 = &v49[4 * v50];
        v52 = v51[2];
        if ( v48 > (int)*(uint16_t *)v51 >> v104 )
          break;
        if ( a1 < v52 )
        {
          v82 = (char *)&mpc_can_Q9up + 2 * v48;
          v82[8] = 0;
          v82[9] = v50;
        }
        else
        {
          v100 = (char *)&mpc_can_Q9up + 2 * v48;
          v100[8] = v52;
          v100[9] = v112[(uint8_t)(v51[3] - (v48 >> (a1 - v51[2])))];
        }
        if ( v48 != 0 )
        {
          do
            ++v50;
          while ( v48 == (int)*(uint16_t *)&v49[4 * v50] >> v104 );
          if ( --v48 != -1 )
            continue;
        }
        goto LABEL_98;
      }
      if ( a1 < v52 )
      {
        v81 = (char *)&mpc_can_Q9up + 2 * v48;
        v81[8] = 0;
        v81[9] = v50;
      }
      else
      {
        v99 = (char *)&mpc_can_Q9up + 2 * v48;
        v99[8] = v52;
        v99[9] = v112[(uint8_t)(v51[3] - (v48 >> (a1 - v51[2])))];
      }
      --v48;
    }
    while ( v48 != -1 );
  }
LABEL_98:
  v119 = (int *)&mpc_can_Q;
  for ( i = 0; i != 7; ++i )
  {
    v115 = 0;
    v113 = v119;
    v117 = (int *)(&mpc_HuffQ + 66 * i);
    do
    {
      if ( i == 6 )
      {
        v59 = *v117;
        result = (1 << a1) - 1;
        if ( v116 < 0 )
          goto LABEL_121;
        v60 = (void **)(&mpc_HuffQ + 33 * v115 + 397);
      }
      else
      {
        result = (int)(uintptr_t)(v113);
        v54 = *v113;
        v114 = v113[1];
        if ( v116 < 0 )
          goto LABEL_121;
        v55 = (1 << a1) - 1;
        v56 = 0;
        do
        {
          while ( 1 )
          {
            v57 = (uint16_t *)(v54 + 4 * v56);
            v58 = *((uint8_t *)v57 + 2);
            if ( v55 > (int)*v57 >> v104 )
              break;
            if ( a1 < v58 )
            {
              v66 = (char *)v113 + 2 * v55;
              v66[8] = 0;
              v66[9] = v56;
            }
            else
            {
              v102 = (char *)v113 + 2 * v55;
              v102[8] = v58;
              v102[9] = *(uint8_t *)(v114 + (uint8_t)(*((uint8_t *)v57 + 3) - (v55 >> (a1 - *((uint8_t *)v57 + 2)))));
            }
            if ( v55 != 0 )
            {
              do
                ++v56;
              while ( v55 == (int)*(uint16_t *)(v54 + 4 * v56) >> v104 );
              if ( --v55 != -1 )
                continue;
            }
            goto LABEL_112;
          }
          if ( a1 < v58 )
          {
            v65 = (char *)v113 + 2 * v55;
            v65[8] = 0;
            v65[9] = v56;
          }
          else
          {
            v101 = (char *)v113 + 2 * v55;
            v101[8] = v58;
            v101[9] = *(uint8_t *)(v114 + (uint8_t)(*((uint8_t *)v57 + 3) - (v55 >> (a1 - *((uint8_t *)v57 + 2)))));
          }
          --v55;
        }
        while ( v55 != -1 );
LABEL_112:
        v59 = *v117;
        v60 = (void **)(&mpc_HuffQ + 66 * i + 33 * v115 + 1);
      }
      v61 = (1 << a1) - 1;
      v103 = (uint8_t *)v60 + 2 * v116;
      result = 0;
      do
      {
        while ( 1 )
        {
          v63 = (uint16_t *)(v59 + 4 * result);
          v64 = *((uint8_t *)v63 + 2);
          if ( v61 <= (int)*v63 >> v104 )
            break;
          v62 = v103;
          v103 -= 2;
          --v61;
          *v62 = v64;
          v62[1] = *((uint8_t *)v63 + 3);
          if ( v61 < 0 )
            goto LABEL_121;
        }
        if ( a1 < v64 )
        {
          *v103 = 0;
          v103[1] = result;
        }
        else
        {
          *v103 = v64;
          v103[1] = *((uint8_t *)v63 + 3);
        }
        if ( v61 == 0 )
          break;
        do
          ++result;
        while ( v61 == (int)*(uint16_t *)(v59 + 4 * result) >> v104 );
        v103 -= 2;
        --v61;
      }
      while ( v61 >= 0 );
LABEL_121:
      ++v115;
      v117 += 33;
      v113 += 34;
    }
    while ( v115 != 2 );
    v119 += 68;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: opAdd  (binary VA: 0x1066130)
// Original: operator+
// ----------------------------------------------------------------------------
size_t ** opAdd(size_t **a1, size_t **a2, size_t **a3)
{
  *a1 = TiXmlString::nullrep_;
  TiXmlString::reserve(a1, **a2 + **a3);
  TiXmlString::append(a1, (const char *)*a2 + 8, **a2);
  TiXmlString::append(a1, (const char *)*a3 + 8, **a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: opAdd  (binary VA: 0x10661c0)
// Original: operator+
// ----------------------------------------------------------------------------
size_t ** opAdd(size_t **a1, const char *a2, char *s)
{
  size_t v3;

  *a1 = TiXmlString::nullrep_;
  v3 = strlen(s);
  TiXmlString::reserve(a1, v3 + **(uint32_t **)a2);
  TiXmlString::append(a1, (const char *)(*(uint32_t *)a2 + 8), **(uint32_t **)a2);
  TiXmlString::append(a1, s, v3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: opAdd  (binary VA: 0x1066260)
// Original: operator+
// ----------------------------------------------------------------------------
size_t ** opAdd(size_t **a1, const TiXmlString::Self *s, size_t **a3)
{
  size_t v4;

  *a1 = TiXmlString::nullrep_;
  v4 = strlen((const char *)s);
  TiXmlString::reserve(a1, v4 + **a3);
  TiXmlString::append(a1, (const char *)s, v4);
  TiXmlString::append(a1, (const char *)*a3 + 8, **a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1066C60  (binary VA: 0x1066c60)
// Original: sub_1066C60
// ----------------------------------------------------------------------------
void * sub_1066C60()
{
  gameswf::s_profilingData = 0;
  return &gameswf::s_profilingData;
}

// ----------------------------------------------------------------------------
// Function: opNewArray_ea1066e90  (binary VA: 0x1066e90)
// Original: operator new[]
// ----------------------------------------------------------------------------
int opNewArray_ea1066e90(size_t a1)
{
  return gameswf::malloc_internal(a1);
}

// ----------------------------------------------------------------------------
// Function: opNewArray  (binary VA: 0x1066f00)
// Original: operator new[]
// ----------------------------------------------------------------------------
int opNewArray(size_t a1, int a2, int a3, int a4)
{
  return gameswf::malloc_internal(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_106AA10  (binary VA: 0x106aa10)
// Original: sub_106AA10
// ----------------------------------------------------------------------------
uint32_t * sub_106AA10()
{
  memset(gameswf::Matrix::identity, 0, 0x18u);
  gameswf::Matrix::identity[0] = 1065353216;
  gameswf::Matrix::identity[4] = 1065353216;
  gameswf::CxForm::identity[0] = 1065353216;
  gameswf::CxForm::identity[2] = 1065353216;
  gameswf::CxForm::identity[4] = 1065353216;
  gameswf::CxForm::identity[6] = 1065353216;
  gameswf::CxForm::identity[1] = 0;
  gameswf::CxForm::identity[3] = 0;
  gameswf::CxForm::identity[5] = 0;
  gameswf::CxForm::identity[7] = 0;
  return (uint32_t *)(gameswf::CxForm::identity);
}

// ----------------------------------------------------------------------------
// Function: sub_106EE60  (binary VA: 0x106ee60)
// Original: sub_106EE60
// ----------------------------------------------------------------------------
int sub_106EE60()
{
  dword_20E2D60 = 0;
  dword_20E2D64 = 0;
  dword_20E2D68 = 0;
  dword_20E2D6C = 0;
  return __cxa_atexit((void (*)(void *))gameswf::array_gameswf_StringI_cce660::Destroy, &dword_20E2D60, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_106F070  (binary VA: 0x106f070)
// Original: sub_106F070
// ----------------------------------------------------------------------------
char * sub_106F070()
{
  dword_20D6388 |= 0x7FFFFFu;
  byte_20D6378 = 1;
  byte_20D6379 = 0;
  BYTE2(dword_20D6388) &= ~0x80u;
  HIBYTE(dword_20D6388) |= 1u;
  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
  __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
  return (char *)(&byte_20D6378);
}

// ----------------------------------------------------------------------------
// Function: sub_106F530  (binary VA: 0x106f530)
// Original: sub_106F530
// ----------------------------------------------------------------------------
char * sub_106F530(char a1, int a2)
{
  char *v2;
  int v4;

  if ( a1 == 3 || a1 == 4 )
    return *(char **)a2;
  v2 = (char *)(&byte_20D6378);
  if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
  {
    byte_20D6378 = 1;
    v4 = dword_20D6388 | 0x7FFFFF;
    byte_20D6379 = 0;
    dword_20D6388 = v4;
    BYTE2(dword_20D6388) = BYTE2(v4) & 0x7F;
    HIBYTE(dword_20D6388) = HIBYTE(v4) | 1;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
    __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1082BE0  (binary VA: 0x1082be0)
// Original: sub_1082BE0
// ----------------------------------------------------------------------------
int sub_1082BE0()
{
  gameswf::Self *v0;

  sub_1900D70(&unk_20E2E94);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E2E94, &unk_20D1280);
  dword_20E2E98 = 1056964608;
  dword_20E2E9C = 1056964608;
  dword_20E2EA0 = 1056964608;
  byte_20E2E80 = 1;
  byte_20E2E81 = 0;
  gameswf::String::resize((gameswf::String::Self *)&byte_20E2E80, 0);
  v0 = (gameswf::Self *)&byte_20E2E81;
  if ( byte_20E2E80 == -1 )
    v0 = (gameswf::Self *)dword_20E2E8C;
  gameswf::Strcpy_s(v0, (char *)&dword_0 + 1, (gameswf::Self *)&unk_1B15112);
  dword_20E2E90 |= 0x7FFFFFu;
  HIBYTE(dword_20E2E90) |= 1u;
  BYTE2(dword_20E2E90) |= 0x80u;
  return __cxa_atexit((void (*)(void *))gameswf::PermanentString::Destroy, &byte_20E2E80, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_10876F0  (binary VA: 0x10876f0)
// Original: sub_10876F0
// ----------------------------------------------------------------------------
int sub_10876F0()
{
  dword_20E2ED0 |= 0x7FFFFFu;
  byte_20E2EC0 = 1;
  byte_20E2EC1 = 0;
  BYTE2(dword_20E2ED0) &= ~0x80u;
  HIBYTE(dword_20E2ED0) |= 1u;
  return __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20E2EC0, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_10877F0  (binary VA: 0x10877f0)
// Original: sub_10877F0
// ----------------------------------------------------------------------------
int sub_10877F0(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  uint8_t *v13;
  const char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  const char *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  const char *v27;
  int v28;
  float v29; // xmm0_4
  int v30;
  int v31;
  char *v32;
  int v33;
  char *v34;
  int v35;
  int v36;
  const char *v37;
  typedef const char *_g4_t_v38;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v38)) > _g4_s0 ? (4u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v41)) > _g4_s1 ? (44u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v42)) > _g4_s2 ? (56u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v43)) > _g4_s3 ? (60u + sizeof(_g4_t_v43)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);

  v3 = 1;
  v4 = *(uint32_t *)(a1 + 8);
  if ( v4 > 0 )
  {
    v5 = 0;
    while ( 2 )
    {
      switch ( *(uint32_t *)(*(uint32_t *)(a1 + 4) + 4 * v5) )
      {
        case 1:
          LOBYTE(v6) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v6;
          if ( (int)(a2[21] << 8) >> 8 > (int)(uintptr_t)(v42) )
          {
            v7 = *(uint32_t *)(*(uint32_t *)(a2[43] + 16)
                           + 4 * *(uint32_t *)(a2[29] + 4 * (*(uint32_t *)(a2[20] + 8 * (uint32_t)(uintptr_t)(v42)) >> 8)));
            if ( *(uint8_t *)v7 == 0xFF )
              gameswf::logMsg((gameswf::Self *)"\t\tmultiname: %s\n", *(const char **)(v7 + 12));
            else
              gameswf::logMsg((gameswf::Self *)"\t\tmultiname: %s\n", (const char *)(v7 + 1));
            v4 = *(uint32_t *)(a1 + 8);
            goto LABEL_8;
          }
          ++v5;
          gameswf::logMsg((gameswf::Self *)"\t\tmultiname: runtime %i\n", v42);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 2:
          LOBYTE(v35) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v35;
          v36 = *(uint32_t *)(*(uint32_t *)(a2[43] + 16)
                          + 4 * *(uint32_t *)(a2[29] + 4 * (*(uint32_t *)(a2[16] + 4 * (uint32_t)(uintptr_t)(v42)) >> 8)));
          if ( *(uint8_t *)v36 == 0xFF )
            v37 = *(const char **)(v36 + 12);
          else
            v37 = (const char *)(v36 + 1);
          ++v5;
          gameswf::logMsg((gameswf::Self *)"\t\tnamespace: %s\n", v37);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 3:
          ++v5;
          v34 = (char *)*(uint8_t *)(a3 + v3++);
          v42 = v34;
          gameswf::logMsg((gameswf::Self *)"\t\tvalue: %i\n", v34);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 4:
          LOBYTE(v33) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v33;
          v32 = v42;
          goto LABEL_41;
        case 5:
          LOBYTE(v31) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v31;
          v32 = *(char **)(a2[10] + 4 * (uint32_t)(uintptr_t)(v42));
LABEL_41:
          ++v5;
          gameswf::logMsg((gameswf::Self *)"\t\tvalue: %i\n", v32);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 >= v4 )
            return v3;
          continue;
        case 6:
          ++v5;
          LOBYTE(v30) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v30;
          gameswf::logMsg((gameswf::Self *)"\t\tvalue: %ui\n", *(const char **)(a2[12] + 4 * (uint32_t)(uintptr_t)(v42)));
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 7:
          ++v5;
          LOBYTE(v28) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v28;
          v29 = *(double *)(a2[14] + 8 * (uint32_t)(uintptr_t)(v42));
          gameswf::logMsg(
            (gameswf::Self *)"\t\tvalue: %f\n",
            (const char *)COERCE_UNSIGNED_INT64(v29),
            (uint32_t)HIDWORD(COERCE_UNSIGNED_INT64(v29)));
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 8:
          LOBYTE(v25) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v25;
          v26 = *(uint32_t *)(*(uint32_t *)(a2[43] + 16) + 4 * *(uint32_t *)(a2[29] + 4 * (uint32_t)(uintptr_t)(v42)));
          if ( *(uint8_t *)v26 == 0xFF )
            v27 = *(const char **)(v26 + 12);
          else
            v27 = (const char *)(v26 + 1);
          ++v5;
          gameswf::logMsg((gameswf::Self *)"\t\tstring: %s\n", v27);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 9:
          ++v5;
          LOBYTE(v24) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v24;
          gameswf::logMsg((gameswf::Self *)"\t\tcount: %i\n", v42);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 0xA:
          ++v5;
          LOBYTE(v23) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v23;
          gameswf::logMsg((gameswf::Self *)"\t\tclass: %i\n", v42);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 0xB:
          LOBYTE(v20) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v20;
          v21 = *(uint32_t *)(*(uint32_t *)(a2[43] + 16)
                          + 4
                          * *(uint32_t *)(a2[29] + 4
                                               * (*(uint32_t *)(*(uint32_t *)(a2[33] + 4 * (uint32_t)(uintptr_t)(v42)) + 60) & 0xFFFFFF)));
          if ( *(uint8_t *)v21 == 0xFF )
            v22 = *(const char **)(v21 + 12);
          else
            v22 = (const char *)(v21 + 1);
          ++v5;
          gameswf::logMsg((gameswf::Self *)"\t\tfunction: %s\n", v22);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 0xC:
          ++v5;
          LOBYTE(v19) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v19;
          gameswf::logMsg((gameswf::Self *)"\t\texception: %i\n", v42);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 0xD:
          ++v5;
          LOBYTE(v18) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v18;
          gameswf::logMsg((gameswf::Self *)"\t\tregister: %i\n", v42);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 0xE:
          ++v5;
          LOBYTE(v17) = gameswf::readVU30((gameswf::Self *)&v42, (int *)(v3 + a3));
          v3 += v17;
          gameswf::logMsg((gameswf::Self *)"\t\tslot index: %i\n", v42);
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 0xF:
          ++v5;
          v15 = (*(uint8_t *)(a3 + v3 + 2) << 16) | (*(uint8_t *)(a3 + v3 + 1) << 8);
          v16 = *(uint8_t *)(a3 + v3);
          v3 += 3;
          v42 = (char *)(v16 | v15);
          gameswf::logMsg((gameswf::Self *)"\t\toffset: %i\n", (const char *)(v16 | v15));
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        case 0x10:
          v9 = (*(char *)(a3 + v3 + 2) << 16) | (*(uint8_t *)(a3 + v3 + 1) << 8);
          v10 = *(uint8_t *)(a3 + v3);
          v11 = v3 + 3;
          v42 = (char *)(v10 | v9);
          gameswf::logMsg((gameswf::Self *)"\t\tdefault offset: %i\n", (const char *)(v10 | v9));
          LOBYTE(v12) = gameswf::readVU30((gameswf::Self *)v43, (int *)(v11 + a3));
          v3 = v12 + v11;
          if ( v43[0] >= 0 )
          {
            v41 = v5;
            v13 = (uint8_t *)(v3 + a3);
            v14 = nullptr;
            do
            {
              v3 += 3;
              v38 = v14++;
              v42 = (char *)(*v13 | ((char)v13[2] << 16) | (v13[1] << 8));
              v13 += 3;
              gameswf::logMsg((gameswf::Self *)"\t\toffset %i: %i\n", v38, v42);
            }
            while ( (int)(uintptr_t)(v14) <= v43[0] );
            v5 = v41;
          }
          ++v5;
          v4 = *(uint32_t *)(a1 + 8);
          if ( v5 < v4 )
            continue;
          return v3;
        default:
LABEL_8:
          if ( ++v5 < v4 )
            continue;
          return v3;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1088630  (binary VA: 0x1088630)
// Original: sub_1088630
// ----------------------------------------------------------------------------
void sub_1088630()
{
  int v0;
  int v1;
  typedef int _g4_t_v2[161];
  typedef int _g4_t_v3;
  typedef unsigned int _g4_t_v4;
  typedef gameswf::Self *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 3152u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (644u + sizeof(_g4_t_v3)) > _g4_s1 ? (644u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (676u + sizeof(_g4_t_v4)) > _g4_s2 ? (676u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (680u + sizeof(_g4_t_v5)) > _g4_s3 ? (680u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (684u + sizeof(_g4_t_v6)) > _g4_s4 ? (684u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (688u + sizeof(_g4_t_v7)) > _g4_s5 ? (688u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (692u + sizeof(_g4_t_v8)) > _g4_s6 ? (692u + sizeof(_g4_t_v8)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 644u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 676u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 680u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 684u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 688u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 692u);

  v4 = (unsigned int)(uintptr_t)("throw");
  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v2[0] = 3;
  gameswf::hash_int_gameswf_inst_info_av_de57da::add(
    (gameswf::hash<int, gameswf::inst_info_avm2::Self, gameswf::fixed_size_hash<int>> *)&dword_20E4F00,
    v2,
    (const gameswf::inst_info_avm2::Self *)&v4);
  v0 = v6;
  if ( v6 < 0 )
  {
    v1 = 4 * v6;
    do
    {
      if ( (gameswf::Self *)((char *)v5 + v1) != nullptr )
        *(uint32_t *)((char *)v5 + v1) = 0;
      v1 += 4;
      ++v0;
    }
    while ( v0 != 0 );
  }
  v6 = 0;
  if ( v8 == 0 )
  {
    v7 = 0;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    v5 = nullptr;
  }
  gameswf::inst_info_avm2::Construct(&v3, "getsuper", 1);
}

// ----------------------------------------------------------------------------
// Function: sub_108DB60  (binary VA: 0x108db60)
// Original: sub_108DB60
// ----------------------------------------------------------------------------
int sub_108DB60()
{
  dword_20E4F00 = 0;
  return __cxa_atexit(
           (void (*)(void *))gameswf::hash_int_gameswf_inst_info_av_de57da::Destroy,
           &dword_20E4F00,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_10949A0  (binary VA: 0x10949a0)
// Original: sub_10949A0
// ----------------------------------------------------------------------------
int sub_10949A0()
{
  sub_1900D70(&unk_20E4F04);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E4F04, &unk_20D1280);
  dword_20E4F08 = 1056964608;
  dword_20E4F0C = 1056964608;
  dword_20E4F10 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_1098950  (binary VA: 0x1098950)
// Original: sub_1098950
// ----------------------------------------------------------------------------
int sub_1098950()
{
  gameswf::Effect::identity[0] = 0;
  gameswf::Effect::identity[1] = 0;
  gameswf::Effect::identity[2] = 0;
  gameswf::Effect::identity[3] = 0;
  gameswf::Effect::identity[4] = 0;
  return __cxa_atexit((void (*)(void *))gameswf::Effect::Destroy, gameswf::Effect::identity, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gameswf_ASValue_int_game_6cd4a4  (binary VA: 0x10a5100)
// Original: std::__introsort_loop<gameswf::ASValue *,int,gameswf::FrameLabelSorter>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gameswf_ASValue_int_game_6cd4a4(uint32_t *a1, gameswf::ASValue::Self *a2, int a3)
{
  uint8_t *v3;
  int result;
  gameswf::ASValue::Self *i;
  const gameswf::ASValue::Self *v6;
  char v7;
  int v8;
  int v9;
  bool v10; // cc
  int v11;
  int v12;
  int v13;
  int v14;
  gameswf::ASValue::Self *v15;
  gameswf::ASValue::Self *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  const gameswf::ASValue::Self *v23;
  const gameswf::ASValue::Self *v24;
  const gameswf::ASValue::Self *v25;
  int v26;
  gameswf::ASValue::Self *j;
  int v28;
  uint8_t *v29;
  int v30;
  uint8_t *k;
  uint8_t *v32;
  uint8_t *v33;
  int m;
  int v35;
  int v36;
  int v37;
  const gameswf::ASValue::Self *v38;
  int n;
  char *v40;
  const gameswf::ASValue::Self *v41;
  int ii;
  int v43;
  int v44;
  typedef int _g4_t_v45;
  typedef const gameswf::ASValue::Self *_g4_t_v46;
  typedef const gameswf::ASValue::Self *_g4_t_v47;
  typedef uint8_t *_g4_t_v48;
  typedef uint8_t *_g4_t_v49;
  typedef uint8_t *_g4_t_v50;
  typedef const gameswf::ASValue::Self *_g4_t_v51;
  typedef const gameswf::ASValue::Self *_g4_t_v52;
  typedef uint8_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef gameswf::ASValue::Self *_g4_t_v55;
  typedef const gameswf::ASValue::Self *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef gameswf::ASValue::Self *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef char _g4_t_v63;
  typedef int _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef const gameswf::ASValue::Self *_g4_t_v69;
  typedef const gameswf::ASValue::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef uint8_t _g4_t_v75[4];
  typedef int _g4_t_v76;
  typedef char _g4_t_v77;
  typedef char _g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint8_t _g4_t_v80[12];
  typedef uint8_t _g4_t_v81[12];
  typedef uint8_t _g4_t_v82[24];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v45)) > _g4_s0 ? (12u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v46)) > _g4_s1 ? (16u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v47)) > _g4_s2 ? (16u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v48)) > _g4_s3 ? (16u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v49)) > _g4_s4 ? (16u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v50)) > _g4_s5 ? (16u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v51)) > _g4_s6 ? (16u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v52)) > _g4_s7 ? (16u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v53)) > _g4_s8 ? (16u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v54)) > _g4_s9 ? (20u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v55)) > _g4_s10 ? (24u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v56)) > _g4_s11 ? (28u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v57)) > _g4_s12 ? (36u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v58)) > _g4_s13 ? (36u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v59)) > _g4_s14 ? (40u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v60)) > _g4_s15 ? (40u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v61)) > _g4_s16 ? (44u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v62)) > _g4_s17 ? (44u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v63)) > _g4_s18 ? (48u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v64)) > _g4_s19 ? (48u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v65)) > _g4_s20 ? (52u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v66)) > _g4_s21 ? (52u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v67)) > _g4_s22 ? (52u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v68)) > _g4_s23 ? (52u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v69)) > _g4_s24 ? (56u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v70)) > _g4_s25 ? (56u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v71)) > _g4_s26 ? (60u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v72)) > _g4_s27 ? (60u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v73)) > _g4_s28 ? (60u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v74)) > _g4_s29 ? (60u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v75)) > _g4_s30 ? (64u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v76)) > _g4_s31 ? (68u + sizeof(_g4_t_v76)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v77)) > _g4_s32 ? (80u + sizeof(_g4_t_v77)) : _g4_s32,
    _g4_s34 = (81u + sizeof(_g4_t_v78)) > _g4_s33 ? (81u + sizeof(_g4_t_v78)) : _g4_s33,
    _g4_s35 = (84u + sizeof(_g4_t_v79)) > _g4_s34 ? (84u + sizeof(_g4_t_v79)) : _g4_s34,
    _g4_s36 = (92u + sizeof(_g4_t_v80)) > _g4_s35 ? (92u + sizeof(_g4_t_v80)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v81)) > _g4_s36 ? (104u + sizeof(_g4_t_v81)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v82)) > _g4_s37 ? (116u + sizeof(_g4_t_v82)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 80u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 81u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 84u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 104u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 116u);

  v3 = (uint8_t *)(a1);
  result = a2 - (gameswf::ASValue::Self *)a1;
  if ( a2 - (gameswf::ASValue::Self *)a1 <= 203 )
    return result;
  if ( a3 != 0 )
  {
    for ( i = a2; ; i = v16 )
    {
      --a3;
      v69 = (gameswf::ASValue::Self *)((char *)i - 12);
      v6 = (const gameswf::ASValue::Self *)&v3[12 * ((-1431655765 * (result >> 2)) >> 1)];
      v7 = *v3;
      v8 = 0;
      if ( v7 == 5 )
        v8 = a1[1];
      v65 = *(uint8_t *)v6;
      v9 = 0;
      if ( *(uint8_t *)v6 == 5 )
        v9 = *((uint32_t *)v6 + 1);
      v10 = *(uint32_t *)(v8 + 40) < *(uint32_t *)(v9 + 40);
      v11 = 0;
      if ( v10 )
      {
        if ( v65 == 5 )
          v11 = *((uint32_t *)v6 + 1);
        v66 = *((uint8_t *)a2 - 12);
        v12 = 0;
        if ( v66 == 5 )
          v12 = *((uint32_t *)a2 - 2);
        if ( *(uint32_t *)(v11 + 40) < *(uint32_t *)(v12 + 40) )
        {
          v82[0] = 0;
          v82[1] = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v82, (const gameswf::ASValue::Self *)a1);
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)a1, v6);
          gameswf::ASValue::opAssign(v6, (const gameswf::ASValue::Self *)v82);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
          v7 = *(uint8_t *)a1;
        }
        else
        {
          v13 = 0;
          if ( v7 == 5 )
            v13 = a1[1];
          v14 = 0;
          if ( v66 == 5 )
            v14 = *((uint32_t *)a2 - 2);
          if ( *(uint32_t *)(v13 + 40) < *(uint32_t *)(v14 + 40) )
          {
            v82[0] = 0;
            v82[1] = 0;
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v82, (const gameswf::ASValue::Self *)a1);
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)a1, v69);
            gameswf::ASValue::opAssign(v69, (const gameswf::ASValue::Self *)v82);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
            v7 = *(uint8_t *)a1;
          }
        }
      }
      else
      {
        if ( v7 == 5 )
          v11 = a1[1];
        v63 = *((uint8_t *)a2 - 12);
        v20 = 0;
        if ( v63 == 5 )
          v20 = *((uint32_t *)a2 - 2);
        if ( *(uint32_t *)(v11 + 40) >= *(uint32_t *)(v20 + 40) )
        {
          v21 = 0;
          if ( v65 == 5 )
            v21 = *((uint32_t *)v6 + 1);
          v22 = 0;
          if ( v63 == 5 )
            v22 = *((uint32_t *)a2 - 2);
          v10 = *(uint32_t *)(v21 + 40) < *(uint32_t *)(v22 + 40);
          v82[0] = 0;
          v82[1] = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v82, (const gameswf::ASValue::Self *)a1);
          if ( v10 )
          {
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)a1, v69);
            gameswf::ASValue::opAssign(v69, (const gameswf::ASValue::Self *)v82);
          }
          else
          {
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)a1, v6);
            gameswf::ASValue::opAssign(v6, (const gameswf::ASValue::Self *)v82);
          }
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
          v7 = *(uint8_t *)a1;
        }
      }
      v15 = a2;
      v16 = (gameswf::ASValue::Self *)(a1 + 3);
      if ( v7 == 5 )
        break;
      while ( 1 )
      {
        while ( *(uint8_t *)v16 == 5 && *(int *)(*((uint32_t *)v16 + 1) + 40) < 2097204 )
          v16 = (gameswf::ASValue::Self *)((char *)v16 + 12);
        do
        {
          v15 = (gameswf::ASValue::Self *)((char *)v15 - 12);
          if ( *(uint8_t *)v15 != 5 )
            goto LABEL_27;
        }
        while ( *(int *)(*((uint32_t *)v15 + 1) + 40) > 2097204 );
        if ( v16 >= v15 )
          break;
LABEL_28:
        v82[0] = 0;
        v82[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v82, v16);
        gameswf::ASValue::opAssign(v16, v15);
        v16 = (gameswf::ASValue::Self *)((char *)v16 + 12);
        gameswf::ASValue::opAssign(v15, (const gameswf::ASValue::Self *)v82);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
        if ( *(uint8_t *)a1 == 5 )
          goto LABEL_32;
      }
LABEL_36:
      g4_std::introsort_loop_gameswf_ASValue_int_game_6cd4a4((int)(uintptr_t)(v16), a2, a3);
      result = v16 - (gameswf::ASValue::Self *)a1;
      if ( v16 - (gameswf::ASValue::Self *)a1 <= 203 )
        return result;
      if ( a3 == 0 )
      {
        v3 = (uint8_t *)(a1);
        a2 = v16;
        goto LABEL_63;
      }
      a2 = v16;
      v3 = (uint8_t *)(a1);
    }
    while ( 1 )
    {
LABEL_32:
      v18 = 0;
      if ( *(uint8_t *)v16 == 5 )
        v18 = *((uint32_t *)v16 + 1);
      v17 = *(uint32_t *)(a1[1] + 40);
      if ( *(uint32_t *)(v18 + 40) >= v17 )
        break;
      v16 = (gameswf::ASValue::Self *)((char *)v16 + 12);
    }
    do
    {
      v15 = (gameswf::ASValue::Self *)((char *)v15 - 12);
      v19 = 0;
      if ( *(uint8_t *)v15 == 5 )
        v19 = *((uint32_t *)v15 + 1);
    }
    while ( v17 < *(uint32_t *)(v19 + 40) );
LABEL_27:
    if ( v16 >= v15 )
      goto LABEL_36;
    goto LABEL_28;
  }
LABEL_63:
  v26 = -1431655765 * (result >> 2);
  v54 = v26 & 1;
  v64 = (v26 - 1) >> 1;
  v57 = (v26 - 2) >> 1;
  v61 = v57;
  v56 = (const gameswf::ASValue::Self *)&v3[24 * v57 + 12];
  v55 = (gameswf::ASValue::Self *)&v3[12 * v57];
  v59 = v55;
  for ( j = v55; ; j = v59 )
  {
    v48 = v3;
    v82[0] = 0;
    v82[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v82, j);
    v80[0] = 0;
    v80[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v80, (const gameswf::ASValue::Self *)v82);
    v28 = v61;
    v29 = v48;
    if ( v64 > v61 )
    {
      v30 = v61;
      for ( k = v48; ; k = v48 )
      {
        v67 = 0;
        v28 = 2 * (v30 + 1);
        v71 = v28 - 1;
        v32 = &k[12 * v28 - 12];
        j = (gameswf::ASValue::Self *)&v48[24 * v30 + 24];
        if ( *(uint8_t *)j == 5 )
        {
          v67 = *((uint32_t *)j + 1);
          v45 = 0;
          if ( *v32 != 5 )
            goto LABEL_67;
        }
        else
        {
          v45 = 0;
          if ( *v32 != 5 )
            goto LABEL_67;
        }
        v45 = *((uint32_t *)v32 + 1);
LABEL_67:
        if ( *(uint32_t *)(v67 + 40) < *(uint32_t *)(v45 + 40) )
        {
          --v28;
          j = (gameswf::ASValue::Self *)&v48[12 * v71];
        }
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v48[12 * v30], j);
        if ( v64 <= v28 )
        {
          v29 = v48;
          break;
        }
        v30 = v28;
      }
    }
    if ( v54 == 0 && v57 == v28 )
    {
      v53 = v29;
      j = (gameswf::ASValue::Self *)(v56);
      gameswf::ASValue::opAssign(v55, v56);
      v28 = 2 * v57 + 1;
      v29 = v53;
    }
    v49 = v29;
    v75[0] = 0;
    v75[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v75, (const gameswf::ASValue::Self *)v80);
    v33 = v49;
    if ( v61 < v28 )
    {
      v72 = v28;
      for ( m = (v28 - 1) / 2; ; m = (m - 1) / 2 )
      {
        v35 = 0;
        j = (gameswf::ASValue::Self *)&v33[12 * m];
        if ( *(uint8_t *)j == 5 )
          v35 = *((uint32_t *)j + 1);
        v36 = 0;
        if ( v75[0] == 5 )
          v36 = v76;
        if ( *(uint32_t *)(v35 + 40) >= *(uint32_t *)(v36 + 40) )
        {
          v33 = v49;
          j = (gameswf::ASValue::Self *)&v49[12 * v72];
          goto LABEL_86;
        }
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v49[12 * v72], j);
        if ( v61 >= m )
          break;
        v72 = m;
        v33 = v49;
      }
      v33 = v49;
    }
LABEL_86:
    v50 = v33;
    gameswf::ASValue::opAssign(j, (const gameswf::ASValue::Self *)v75);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v75);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v80);
    v59 = (gameswf::ASValue::Self *)((char *)v59 - 12);
    if ( v61 == 0 )
      break;
    --v61;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
    v3 = v50;
  }
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
  v25 = (const gameswf::ASValue::Self *)v50;
  do
  {
    a2 = (gameswf::ASValue::Self *)((char *)a2 - 12);
    v51 = v25;
    v82[0] = 0;
    v82[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v82, a2);
    gameswf::ASValue::opAssign(a2, v51);
    v81[0] = 0;
    v81[1] = 0;
    v37 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v81, (const gameswf::ASValue::Self *)v82);
    v23 = v51;
    v60 = (char *)(a2 - v51);
    v38 = v51;
    v62 = -1431655765 * ((a2 - v51) >> 2);
    if ( (v62 - 1) / 2 <= 0 )
      goto LABEL_57;
    for ( n = 0; ; n = v37 )
    {
      v68 = 0;
      v37 = 2 * (n + 1);
      v73 = v37 - 1;
      v40 = (char *)v51 + 12 * v37 - 12;
      v38 = (const gameswf::ASValue::Self *)((char *)v51 + 24 * n + 24);
      if ( *(uint8_t *)v38 == 5 )
      {
        v68 = *((uint32_t *)v38 + 1);
        v58 = 0;
        if ( *v40 != 5 )
          goto LABEL_95;
      }
      else
      {
        v58 = 0;
        if ( *v40 != 5 )
          goto LABEL_95;
      }
      v58 = *((uint32_t *)v40 + 1);
LABEL_95:
      if ( *(uint32_t *)(v68 + 40) < *(uint32_t *)(v58 + 40) )
      {
        --v37;
        v38 = (const gameswf::ASValue::Self *)((char *)v51 + 12 * v73);
      }
      gameswf::ASValue::opAssign((const gameswf::ASValue::Self *)((char *)v51 + 12 * n), v38);
      if ( v37 >= (v62 - 1) / 2 )
        break;
    }
    v23 = v51;
LABEL_57:
    if ( (v62 & 1) == 0 && v37 == (v62 - 2) / 2 )
    {
      v37 = 2 * v37 + 1;
      v52 = v23;
      gameswf::ASValue::opAssign(v38, (const gameswf::ASValue::Self *)((char *)v23 + 12 * v37));
      v77 = 0;
      v78 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v77, (const gameswf::ASValue::Self *)v81);
      v24 = v52;
    }
    else
    {
      v46 = v23;
      v77 = 0;
      v78 = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v77, (const gameswf::ASValue::Self *)v81);
      v24 = v46;
      if ( v37 <= 0 )
        goto LABEL_60;
    }
    v74 = v37;
    v70 = v24;
    v41 = v24;
    for ( ii = (v37 - 1) >> 1; ; ii = (ii - 1) / 2 )
    {
      v38 = (const gameswf::ASValue::Self *)((char *)v41 + 12 * ii);
      v43 = 0;
      if ( *(uint8_t *)v38 == 5 )
        v43 = *((uint32_t *)v38 + 1);
      v44 = 0;
      if ( v77 == 5 )
        v44 = v79;
      if ( *(uint32_t *)(v43 + 40) >= *(uint32_t *)(v44 + 40) )
      {
        v24 = v70;
        v38 = (const gameswf::ASValue::Self *)((char *)v70 + 12 * v74);
        goto LABEL_60;
      }
      gameswf::ASValue::opAssign((const gameswf::ASValue::Self *)((char *)v70 + 12 * v74), v38);
      if ( ii == 0 )
        break;
      v74 = ii;
      v41 = v70;
    }
    v24 = v70;
LABEL_60:
    v47 = v24;
    gameswf::ASValue::opAssign(v38, (const gameswf::ASValue::Self *)&v77);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v77);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v81);
    result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
    v25 = v47;
  }
  while ( (int)(uintptr_t)(v60) > 23 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gameswf_ASValue_gameswf_7f8acd  (binary VA: 0x10a5af0)
// Original: std::__insertion_sort<gameswf::ASValue *,gameswf::FrameLabelSorter>
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * g4_std::insertion_sort_gameswf_ASValue_gameswf_7f8acd(gameswf::ASValue::Self *a1, gameswf::ASValue::Self *a2)
{
  gameswf::ASValue::Self *result;
  const gameswf::ASValue::Self *v3;
  int v4;
  gameswf::ASValue::Self *v5;
  int v6;
  bool v7; // cc
  int v8;
  gameswf::ASValue::Self *v9;
  const gameswf::ASValue::Self *i;
  int v11;
  typedef gameswf::ASValue::Self *_g4_t_v12;
  typedef const gameswf::ASValue::Self *_g4_t_v13;
  typedef gameswf::ASValue::Self *_g4_t_v14;
  typedef uint8_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v15)) > _g4_s3 ? (32u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v16)) > _g4_s4 ? (36u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);

  result = a2;
  if ( a1 != a2 )
  {
    result = (gameswf::ASValue::Self *)((char *)a1 + 12);
    if ( a2 != (gameswf::ASValue::Self *)((char *)a1 + 12) )
    {
      v14 = (gameswf::ASValue::Self *)((char *)a1 + 12);
      do
      {
        v3 = v14;
        v4 = 0;
        if ( *(uint8_t *)v14 == 5 )
        {
          v5 = a1;
          v6 = 0;
          v4 = *((uint32_t *)v14 + 1);
          if ( *(uint8_t *)a1 == 5 )
LABEL_21:
            v6 = *((uint32_t *)v5 + 1);
        }
        else
        {
          v5 = a1;
          v6 = 0;
          if ( *(uint8_t *)a1 == 5 )
            goto LABEL_21;
        }
        v7 = *(uint32_t *)(v4 + 40) < *(uint32_t *)(v6 + 40);
        v15[0] = 0;
        v15[1] = 0;
        if ( !v7 )
        {
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v15, v14);
          for ( i = (gameswf::ASValue::Self *)((char *)v14 - 12); ; i = (const gameswf::ASValue::Self *)((char *)i - 12) )
          {
            v11 = 0;
            if ( v15[0] == 5 )
              v11 = v16;
            if ( *(uint8_t *)i == 5 )
            {
              if ( *(uint32_t *)(v11 + 40) >= *(uint32_t *)(*((uint32_t *)i + 1) + 40) )
              {
LABEL_19:
                gameswf::ASValue::opAssign(v3, (const gameswf::ASValue::Self *)v15);
                gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
                result = (gameswf::ASValue::Self *)((char *)v14 + 12);
                v9 = (gameswf::ASValue::Self *)((char *)v14 + 12);
                goto LABEL_10;
              }
            }
            else if ( *(int *)(v11 + 40) >= 2097204 )
            {
              goto LABEL_19;
            }
            v13 = i;
            v12 = (gameswf::ASValue::Self *)(v3);
            v3 = i;
            gameswf::ASValue::opAssign(v12, v13);
          }
        }
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v15, v14);
        v8 = -1431655765 * ((v14 - a1) >> 2);
        if ( v8 > 0 )
        {
          do
          {
            v3 = (const gameswf::ASValue::Self *)((char *)v3 - 12);
            gameswf::ASValue::opAssign((const gameswf::ASValue::Self *)((char *)v3 + 12), v3);
            --v8;
          }
          while ( v8 != 0 );
        }
        gameswf::ASValue::opAssign(a1, (const gameswf::ASValue::Self *)v15);
        result = (gameswf::ASValue::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
        v9 = (gameswf::ASValue::Self *)((char *)v14 + 12);
LABEL_10:
        v14 = v9;
      }
      while ( a2 != v9 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10A6720  (binary VA: 0x10a6720)
// Original: sub_10A6720
// ----------------------------------------------------------------------------
int sub_10A6720()
{
  gameswf::Self *v0;

  sub_1900D70(&unk_20E5014);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E5014, &unk_20D1280);
  dword_20E5018 = 1056964608;
  dword_20E501C = 1056964608;
  dword_20E5020 = 1056964608;
  byte_20E5000 = 1;
  byte_20E5001 = 0;
  gameswf::String::resize((gameswf::String::Self *)&byte_20E5000, 0);
  v0 = (gameswf::Self *)&byte_20E5001;
  if ( byte_20E5000 == -1 )
    v0 = (gameswf::Self *)dword_20E500C;
  gameswf::Strcpy_s(v0, (char *)&dword_0 + 1, (gameswf::Self *)&unk_1B15112);
  dword_20E5010 |= 0x7FFFFFu;
  HIBYTE(dword_20E5010) |= 1u;
  BYTE2(dword_20E5010) |= 0x80u;
  return __cxa_atexit((void (*)(void *))gameswf::PermanentString::Destroy, &byte_20E5000, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_10AAD10  (binary VA: 0x10aad10)
// Original: sub_10AAD10
// ----------------------------------------------------------------------------
int sub_10AAD10(uint32_t *a1, char **a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;
  char *v13;
  char *v14;
  gameswf::String::Self *v15;
  int v16;
  int v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  char *v25;
  int v26;

  v3 = *a1;
  if ( v3 == 0 )
    return -1;
  v25 = *a2;
  v26 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v25 == -1 )
    {
      v19 = *((char **)v25 + 3);
      v18 = *((uint32_t *)v25 + 1) - 1;
    }
    else
    {
      v18 = *v25 - 1;
      v19 = v25 + 1;
    }
    v4 = 5381;
    v20 = 5381;
    if ( v18 > 0 )
    {
      do
      {
        --v18;
        v21 = 33 * v20;
        v22 = (uint8_t)v19[v18] + 32;
        if ( (uint8_t)(v19[v18] - 65) > 0x19u )
          v22 = (uint8_t)v19[v18];
        v20 = v21 ^ v22;
      }
      while ( v18 != 0 );
      v20 = v20 << 9 >> 9;
      v4 = v20;
    }
    *((uint32_t *)v25 + 4) = v20 & 0x7FFFFF | v26 & 0xFF800000;
    v3 = *a1;
  }
  else
  {
    v4 = v26 << 9 >> 9;
  }
  v5 = *(uint32_t *)(v3 + 4);
  v6 = v5 & v4;
  v7 = (int *)(v3 + 16 * (v5 & v4) + 8);
  if ( *v7 == -2 )
    return -1;
  v8 = *(uint32_t *)(v3 + 16 * (v5 & v4) + 12);
  if ( v6 != (v8 & v5) )
    return -1;
  v9 = a1;
  v10 = v6;
  v11 = v9;
  while ( 1 )
  {
    if ( v8 == v4 )
    {
      v12 = v7[2];
      v13 = *a2;
      if ( (char *)v12 == *a2 )
        break;
      v14 = *v13 == -1 ? *((char **)v13 + 3) : v13 + 1;
      v15 = *(uint8_t *)v12 == 0xFF ? *(gameswf::String::Self **)(v12 + 12) : (gameswf::String::Self *)(v12 + 1);
      v23 = v11;
      v16 = gameswf::String::stricmp(v15, v14);
      v11 = v23;
      if ( v16 == 0 )
        break;
    }
    v10 = *v7;
    if ( *v7 == -1 )
      break;
    v7 = (int *)(*v11 + 16 * v10 + 8);
    v8 = v7[1];
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: sub_10ADD90  (binary VA: 0x10add90)
// Original: sub_10ADD90
// ----------------------------------------------------------------------------
uint8_t * sub_10ADD90(int *a1, char *a2)
{
  int index;
  uint8_t *v5;
  char v7;
  int v8;
  int v9;
  int v10;
  const char *src;
  int v12;
  int v13;
  int v14;
  uint8_t *v15;
  char *v16;
  gameswf::Self *v17;
  int v18;
  typedef size_t _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v20)) > _g4_s1 ? (20u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v21)) > _g4_s2 ? (24u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v22)) > _g4_s3 ? (28u + sizeof(_g4_t_v22)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);

  v20 = a2;
  index = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
            a1,
            &v20);
  if ( index >= 0 )
    return *(uint8_t **)(*a1 + 16 * index + 20);
  v7 = *a2;
  if ( *a2 == -1 )
  {
    if ( *((uint32_t *)a2 + 1) - 1 > 13 )
      goto LABEL_6;
LABEL_19:
    v15 = (uint8_t *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(a1 + 1), 20);
    v5 = v15;
    if ( *a2 == -1 )
      v16 = *((char **)a2 + 3);
    else
      v16 = a2 + 1;
    if ( v15 != nullptr )
    {
      *v15 = 1;
      v15[1] = 0;
      if ( v16 != nullptr )
      {
        v19 = strlen(v16);
        gameswf::String::resize((gameswf::String::Self *)v5, v19);
        v17 = (gameswf::Self *)(v5 + 1);
        if ( *v5 == 0xFF )
          v17 = *((gameswf::Self **)v5 + 3);
        gameswf::Strcpy_s(v17, (char *)(v19 + 1), (gameswf::Self *)v16);
      }
      v18 = *((uint32_t *)v5 + 4) | 0x7FFFFF;
      *((uint32_t *)v5 + 4) = v18;
      v5[19] = HIBYTE(v18) | 1;
      v5[18] = BYTE2(v18) | 0x80;
    }
    goto LABEL_15;
  }
  if ( *a2 - 1 <= 13 )
    goto LABEL_19;
LABEL_6:
  if ( v7 == -1 )
    v8 = *((uint32_t *)a2 + 1) - 1;
  else
    v8 = v7 - 1;
  v9 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(a1 + 1), v8 + 21);
  v5 = (uint8_t *)v9;
  if ( v9 != 0 )
  {
    *(uint8_t *)v9 = 1;
    *(uint8_t *)(v9 + 1) = 0;
    v10 = *(uint32_t *)(v9 + 16) | 0x7FFFFF;
    *((uint32_t *)v5 + 4) = v10;
    v5[19] = HIBYTE(v10) | 1;
    v5[18] = BYTE2(v10) | 0x80;
  }
  src = a2 + 1;
  if ( *a2 == -1 )
    src = *((const char **)a2 + 3);
  strcpy(v5 + 20, src);
  if ( *a2 == -1 )
    v12 = *((uint32_t *)a2 + 1) - 1;
  else
    v12 = *a2 - 1;
  v13 = v12 + 1;
  gameswf::String::resize((gameswf::String::Self *)v5, 0);
  *v5 = -1;
  *((uint32_t *)v5 + 3) = (uint32_t)(uintptr_t)(v5 + 20);
  *((uint32_t *)v5 + 1) = v13;
  *((uint32_t *)v5 + 2) = v13;
  v5[19] &= ~1u;
LABEL_15:
  v21 = (char *)(v5);
  v14 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
          a1,
          &v21);
  if ( v14 < 0 )
  {
    v22[0] = 0;
    gameswf::hash_gameswf_StringPointer_ga_128477::add(
      (int **)a1,
      &v21,
      v22);
    v14 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
            a1,
            &v21);
  }
  *(uint32_t *)(*a1 + 16 * v14 + 20) = (uint32_t)(uintptr_t)(v5);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_10B19E0  (binary VA: 0x10b19e0)
// Original: sub_10B19E0
// ----------------------------------------------------------------------------
int sub_10B19E0()
{
  dword_20E5260 = 0;
  return __cxa_atexit(
           (void (*)(void *))gameswf::hash_int_void_gameswf_Stream_6376d1::Destroy,
           &dword_20E5260,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_10B5330  (binary VA: 0x10b5330)
// Original: sub_10B5330
// ----------------------------------------------------------------------------
int sub_10B5330()
{
  char *v0;
  int result;
  int v2;

  v0 = (char *)&unk_20E5524;
  do
  {
    v2 = (int)(uintptr_t)(v0);
    v0 -= 20;
    result = sub_59CE50(v2);
  }
  while ( v0 != (char *)&unk_20E5524 - 440 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10BEC00  (binary VA: 0x10bec00)
// Original: sub_10BEC00
// ----------------------------------------------------------------------------
int sub_10BEC00()
{
  dword_20E5300 = 0;
  dword_20E5304 = 0;
  dword_20E5308 = 0;
  dword_20E530C = 0;
  dword_20E5310 = 0;
  dword_20E5314 = 0x10000;
  dword_20E5318 = 0;
  __cxa_atexit((void (*)(void *))gameswf::PermanentStringCache::Destroy, &dword_20E5300, &unk_20D1280);
  dword_20E5350 = 0;
  dword_20E5354 = 0;
  dword_20E5358 = 0;
  dword_20E535C = 0;
  __cxa_atexit((void (*)(void *))gameswf::array_gameswf_String_8c822b::Destroy, &dword_20E5350, &unk_20D1280);
  dword_20E5360 = 0;
  __cxa_atexit(
    (void (*)(void *))((void (*)(gameswf::Self **))gameswf::string_hash_gameswf_as_standard_memb_7ad87c::Destroy),
    &dword_20E5360,
    &unk_20D1280);
  sub_776320((gameswf::String::Self *)&unk_20E5380, (gameswf::Self *)"_x");
  sub_776320((gameswf::String::Self *)&unk_20E5394, (gameswf::Self *)"_y");
  sub_776320((gameswf::String::Self *)&unk_20E53A8, (gameswf::Self *)"_xscale");
  sub_776320((gameswf::String::Self *)&unk_20E53BC, (gameswf::Self *)"_yscale");
  sub_776320((gameswf::String::Self *)&unk_20E53D0, (gameswf::Self *)"_currentframe");
  sub_776320((gameswf::String::Self *)&unk_20E53E4, (gameswf::Self *)"_totalframes");
  sub_776320((gameswf::String::Self *)&unk_20E53F8, (gameswf::Self *)"_alpha");
  sub_776320((gameswf::String::Self *)&unk_20E540C, (gameswf::Self *)"_visible");
  sub_776320((gameswf::String::Self *)&unk_20E5420, (gameswf::Self *)"_width");
  sub_776320((gameswf::String::Self *)&unk_20E5434, (gameswf::Self *)"_height");
  sub_776320((gameswf::String::Self *)&unk_20E5448, (gameswf::Self *)"_rotation");
  sub_776320((gameswf::String::Self *)&unk_20E545C, (gameswf::Self *)"_target");
  sub_776320((gameswf::String::Self *)&unk_20E5470, (gameswf::Self *)"_framesloaded");
  sub_776320((gameswf::String::Self *)&unk_20E5484, (gameswf::Self *)"_name");
  sub_776320((gameswf::String::Self *)&unk_20E5498, (gameswf::Self *)"_droptarget");
  sub_776320((gameswf::String::Self *)&unk_20E54AC, (gameswf::Self *)"_url");
  sub_776320((gameswf::String::Self *)&unk_20E54C0, (gameswf::Self *)"_highquality");
  sub_776320((gameswf::String::Self *)&unk_20E54D4, (gameswf::Self *)"_focusrect");
  sub_776320((gameswf::String::Self *)&unk_20E54E8, (gameswf::Self *)"_soundbuftime");
  sub_776320((gameswf::String::Self *)&unk_20E54FC, (gameswf::Self *)"@@ mystery");
  sub_776320((gameswf::String::Self *)&unk_20E5510, (gameswf::Self *)"_xmouse");
  sub_776320((gameswf::String::Self *)&unk_20E5524, (gameswf::Self *)"_ymouse");
  return __cxa_atexit((void (*)(void *))sub_10B5330, nullptr, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_10C45E0  (binary VA: 0x10c45e0)
// Original: sub_10C45E0
// ----------------------------------------------------------------------------
void sub_10C45E0(int a1, volatile int32_t **a2, __m128d a3)
{
  volatile int32_t *v5;
  glitch::video::CMaterial::Self *v6;
  bool v7;
  volatile int32_t *v8;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v9;
  volatile int32_t *v10;
  int v11;
  const char *s;
  int v13;
  char *v14;
  size_t v15;
  char *v16;
  glitch::video::CMaterialRenderer::Self *v17;
  char TechniqueID;
  const char **v19;
  typedef char _g4_t_v20;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v21)) > _g4_s1 ? (28u + sizeof(_g4_t_v21)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);

  v5 = *a2;
  if ( *a2 != nullptr )
    __sync_add_and_fetch(v5, 1u);
  v6 = *(glitch::video::CMaterial::Self **)(a1 + 4);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v5);
  if ( v6 != nullptr )
  {
    v7 = *(uint32_t *)v6 == 2;
    _mm_mfence();
    if ( v7 )
      glitch::video::CMaterial::removeFromRootSceneNode(v6);
    if ( __sync_fetch_and_add((volatile int32_t *)v6, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v6);
      gll_operator_delete_arr((int)(uintptr_t)(v6));
    }
  }
  v8 = *((volatile int32_t **)*a2 + 1);
  if ( v8 != nullptr )
    __sync_add_and_fetch(v8, 1u);
  v9 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self ****)a1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v8);
  if ( v9 != nullptr )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterialRenderer::Destroy(v9);
      gll_operator_delete_arr((int)(uintptr_t)(v9));
    }
    v8 = *(volatile int32_t **)a1;
  }
  *(uint16_t *)(a1 + 8) = glitch::video::CMaterialRenderer::getParameterID((int)(uintptr_t)(v8), 2, 0, 0);
  *(uint16_t *)(a1 + 14) = glitch::video::CMaterialRenderer::getParameterID(*(uint32_t *)a1, 6, 0, 0);
  *(uint16_t *)(a1 + 16) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"additive-color",
                          1u);
  *(uint16_t *)(a1 + 18) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"blur-size",
                          1u);
  *(uint16_t *)(a1 + 20) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"color-matrix",
                          1u);
  *(uint16_t *)(a1 + 22) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"color-matrix2",
                          1u);
  v10 = *a2;
  v11 = *(uint32_t *)a1;
  s = nullptr;
  LOBYTE(v10) = *((uint8_t *)v10 + 8);
  *(uint8_t *)(a1 + 36) = (uint8_t)(uintptr_t)(v10);
  v13 = *(uint32_t *)(*(uint32_t *)(v11 + 24) + 12 * (uint8_t)(uintptr_t)(v10));
  if ( v13 != 0 )
    s = (const char *)(v13 + 4);
  v14 = nullptr;
  v15 = strlen(s) + 7;
  if ( v15 != 0 )
    v14 = (char *)glitch::core::allocProcessBuffer(v15);
  v16 = strcpy(v14, s);
  strcpy(&v16[strlen(v16)], "-split");
  v17 = *(glitch::video::CMaterialRenderer::Self **)a1;
  v21 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                 a3,
                                                                 (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)v14,
                                                                 nullptr);
  TechniqueID = glitch::video::CMaterialRenderer::getTechniqueID(v17, (const glitch::core::SSharedString::Self *)&v21);
  v19 = (const char **)v21;
  if ( v21 != nullptr && __sync_fetch_and_add((volatile int32_t *)v21, 0xFFFFFFFF) == 1 )
  {
    v20 = TechniqueID;
    glitch::core::detail::SSharedStringHeapEntry::SData::release(v19);
    *(uint8_t *)(a1 + 37) = v20;
    if ( v20 != -1 )
      goto LABEL_21;
  }
  else
  {
    *(uint8_t *)(a1 + 37) = TechniqueID;
    if ( TechniqueID != -1 )
      goto LABEL_21;
  }
  *(uint8_t *)(a1 + 37) = *(uint8_t *)(a1 + 36);
LABEL_21:
  *(uint16_t *)(a1 + 10) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"texture-cb",
                          1u);
  *(uint16_t *)(a1 + 12) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"texture-cr",
                          1u);
  *(uint16_t *)(a1 + 24) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"texture-map",
                          1u);
  *(uint16_t *)(a1 + 26) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"component",
                          1u);
  *(uint16_t *)(a1 + 28) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"scale",
                          1u);
  *(uint16_t *)(a1 + 30) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"map-point",
                          1u);
  *(uint16_t *)(a1 + 32) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"map-scale",
                          1u);
  *(uint16_t *)(a1 + 34) = glitch::video::CMaterialRenderer::getParameterID(
                          *(glitch::video::CMaterialRenderer::Self **)a1,
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"uv-matrix",
                          0);
  if ( v14 != nullptr )
    glitch::core::releaseProcessBuffer((glitch::core::Self *)v14);
}

// ----------------------------------------------------------------------------
// Function: sub_10C4960  (binary VA: 0x10c4960)
// Original: sub_10C4960
// ----------------------------------------------------------------------------
void sub_10C4960(int a1, volatile int32_t **a2, __m128d a3, int a4, glitch::core::detail::SSharedStringHeapEntry::SData::Self *a5)
{
  int v5;
  __m128d v6;
  char TechniqueID;
  const char **v8;
  glitch::video::CMaterial::Self *v9;
  bool v10;
  typedef volatile int32_t *_g4_t_v12;
  typedef char _g4_t_v13;
  typedef glitch::video::CMaterial::Self *_g4_t_v14;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v5 = a1 + 40 * a4 + 80;
  glitch::video::CMaterial::allocate(&v14, a2, nullptr, 0);
  v12 = *a2;
  v15 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                 a3,
                                                                 a5,
                                                                 nullptr);
  TechniqueID = glitch::video::CMaterialRenderer::getTechniqueID(
                  (glitch::video::CMaterialRenderer::Self *)v12,
                  (const glitch::core::SSharedString::Self *)&v15);
  v8 = (const char **)v15;
  if ( v15 != nullptr && __sync_fetch_and_add((volatile int32_t *)v15, 0xFFFFFFFF) == 1 )
  {
    v13 = TechniqueID;
    glitch::core::detail::SSharedStringHeapEntry::SData::release(v8);
    TechniqueID = v13;
    if ( v13 != -1 )
    {
LABEL_4:
      *((uint8_t *)v14 + 8) = TechniqueID;
      sub_10C45E0(v5, (volatile int32_t **)&v14, v6);
      v9 = v14;
      if ( v14 == nullptr )
        return;
      v10 = *(uint32_t *)v14 == 2;
      _mm_mfence();
      if ( !v10 )
        goto LABEL_6;
      goto LABEL_12;
    }
  }
  else if ( TechniqueID != -1 )
  {
    goto LABEL_4;
  }
  sub_10C45E0(v5, (volatile int32_t **)&v14, v6);
  gameswf::logMsg((gameswf::Self *)"unsupported blend mode technique: %s\n", (const char *)a5);
  v9 = v14;
  if ( v14 == nullptr )
    return;
  v10 = *(uint32_t *)v14 == 2;
  _mm_mfence();
  if ( v10 )
LABEL_12:
    glitch::video::CMaterial::removeFromRootSceneNode(v9);
LABEL_6:
  if ( __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterial::Destroy(v9);
    gll_operator_delete_arr((int)(uintptr_t)(v9));
  }
}

// ----------------------------------------------------------------------------
// Function: sub_10C4AC0  (binary VA: 0x10c4ac0)
// Original: sub_10C4AC0
// ----------------------------------------------------------------------------
int sub_10C4AC0(int result, int a2, int *a3, float *a4)
{
  uint16_t *v4;
  unsigned int v5;
  uint16_t *v6;
  uint16_t *v7;
  unsigned int v8;
  uint16_t *v9;
  uint16_t *v10;
  unsigned int v11;
  uint16_t *v12;
  float v13; // xmm1_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  int v17;
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v28;

  v4 = (uint16_t *)result;
  v5 = 64;
  if ( (result & 1) != 0 )
  {
    v4 = (uint16_t *)(result + 1);
    *(uint8_t *)result = 0;
    LOBYTE(v5) = 63;
    if ( ((result + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (result & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v4 = 0;
  v5 -= 2;
  ++v4;
LABEL_3:
  memset(v4, 0, 4 * (v5 >> 2));
  v6 = &v4[2 * (v5 >> 2)];
  if ( (v5 & 2) != 0 )
    *v6++ = 0;
  if ( (v5 & 1) != 0 )
    *(uint8_t *)v6 = 0;
  v7 = (uint16_t *)(result + 64);
  *(uint32_t *)result = 1065353216;
  *(uint32_t *)(result + 20) = 1065353216;
  *(uint32_t *)(result + 40) = 1065353216;
  *(uint32_t *)(result + 60) = 1065353216;
  v8 = 64;
  if ( ((result + 64) & 1) != 0 )
  {
    v7 = (uint16_t *)(result + 65);
    *(uint8_t *)(result + 64) = 0;
    LOBYTE(v8) = 63;
    if ( ((result + 65) & 2) == 0 )
      goto LABEL_9;
  }
  else if ( ((uint8_t)(uintptr_t)(v7) & 2) == 0 )
  {
    goto LABEL_9;
  }
  *v7 = 0;
  v8 -= 2;
  ++v7;
LABEL_9:
  memset(v7, 0, 4 * (v8 >> 2));
  v9 = &v7[2 * (v8 >> 2)];
  if ( (v8 & 2) != 0 )
    *v9++ = 0;
  if ( (v8 & 1) != 0 )
    *(uint8_t *)v9 = 0;
  v10 = (uint16_t *)(result + 128);
  *(uint32_t *)(result + 64) = 1065353216;
  *(uint32_t *)(result + 84) = 1065353216;
  *(uint32_t *)(result + 104) = 1065353216;
  *(uint32_t *)(result + 124) = 1065353216;
  v11 = 64;
  if ( ((result + 128) & 1) != 0 )
  {
    v10 = (uint16_t *)(result + 129);
    *(uint8_t *)(result + 128) = 0;
    LOBYTE(v11) = 63;
    if ( ((result + 129) & 2) == 0 )
      goto LABEL_15;
  }
  else if ( ((uint8_t)(uintptr_t)(v10) & 2) == 0 )
  {
    goto LABEL_15;
  }
  *v10 = 0;
  v11 -= 2;
  ++v10;
LABEL_15:
  memset(v10, 0, 4 * (v11 >> 2));
  v12 = &v10[2 * (v11 >> 2)];
  if ( (v11 & 2) != 0 )
    *v12++ = 0;
  if ( (v11 & 1) != 0 )
    *(uint8_t *)v12 = 0;
  *(uint32_t *)(result + 128) = 1065353216;
  *(uint32_t *)(result + 148) = 1065353216;
  *(uint32_t *)(result + 168) = 1065353216;
  *(uint32_t *)(result + 188) = 1065353216;
  *(uint32_t *)(result + 192) = 0;
  *(uint32_t *)(result + 196) = 0;
  *(uint32_t *)(result + 200) = 0;
  *(uint32_t *)(result + 204) = 0;
  v13 = *(float *)(a2 + 16);
  v14 = 0.5 / (float)(*(float *)(a2 + 8) / v13);
  v15 = (float)(v13 + v13) / (float)((float)((float)a3[1] * -2.0) * v14);
  v16 = (float)*a3 + (float)*a3;
  *(float *)(result + 40) = (float)(v13 + 200000.0) / (float)(v13 - 200000.0);
  *(uint32_t *)(result + 4) = 0;
  *(uint32_t *)(result + 8) = 0;
  *(uint32_t *)(result + 12) = 0;
  *(uint32_t *)(result + 16) = 0;
  *(uint32_t *)(result + 24) = 0;
  *(uint32_t *)(result + 28) = 0;
  *(uint32_t *)(result + 32) = 0;
  *(uint32_t *)(result + 36) = 0;
  *(uint32_t *)(result + 44) = -1082130432;
  *(uint32_t *)(result + 48) = 0;
  *(uint32_t *)(result + 52) = 0;
  *(uint32_t *)(result + 60) = 0;
  *(float *)(result + 20) = v15;
  *(float *)result = (float)(v13 + v13) / (float)(v16 * v14);
  *(float *)(result + 56) = (float)((float)(v13 + v13) * 200000.0) / (float)(v13 - 200000.0);
  v17 = glitch::core::IdentityMatrix[0];
  std::memcpy((void *)(result + 64), glitch::core::IdentityMatrix, 64);
  v18 = -*(float *)(a2 + 8);
  v19 = (float)-a3[1] * 0.5;
  *(float *)(result + 112) = (float)-*a3 * 0.5;
  *(uint32_t *)(result + 64) = 1065353216;
  v20 = glitch::core::IdentityMatrix[1];
  *(uint32_t *)(result + 84) = 1065353216;
  *(uint32_t *)(result + 132) = v20;
  *(uint32_t *)(result + 136) = glitch::core::IdentityMatrix[2];
  *(uint32_t *)(result + 140) = glitch::core::IdentityMatrix[3];
  *(uint32_t *)(result + 144) = glitch::core::IdentityMatrix[4];
  *(uint32_t *)(result + 148) = glitch::core::IdentityMatrix[5];
  *(uint32_t *)(result + 152) = glitch::core::IdentityMatrix[6];
  *(uint32_t *)(result + 156) = glitch::core::IdentityMatrix[7];
  *(uint32_t *)(result + 160) = glitch::core::IdentityMatrix[8];
  *(uint32_t *)(result + 164) = glitch::core::IdentityMatrix[9];
  v21 = glitch::core::IdentityMatrix[10];
  *(uint32_t *)(result + 104) = -1082130432;
  *(uint32_t *)(result + 168) = v21;
  v22 = glitch::core::IdentityMatrix[11];
  *(uint32_t *)(result + 128) = v17;
  *(uint32_t *)(result + 172) = v22;
  *(uint32_t *)(result + 176) = glitch::core::IdentityMatrix[12];
  v23 = glitch::core::IdentityMatrix[13];
  *(float *)(result + 116) = v19;
  *(uint32_t *)(result + 180) = v23;
  v24 = glitch::core::IdentityMatrix[14];
  *(float *)(result + 120) = v18;
  *(uint32_t *)(result + 184) = v24;
  *(uint32_t *)(result + 188) = glitch::core::IdentityMatrix[15];
  v28 = (int)a4[3];
  v25 = (int)*a4;
  v26 = (int)a4[2];
  *(uint32_t *)(result + 200) = (int)a4[1];
  *(uint32_t *)(result + 192) = v25;
  *(uint32_t *)(result + 196) = v26;
  *(uint32_t *)(result + 204) = v28;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10C6160  (binary VA: 0x10c6160)
// Original: sub_10C6160
// ----------------------------------------------------------------------------
int sub_10C6160(int a1)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  int v5;
  int v6;
  __m128i v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  uint8_t v12;
  uint16_t v13;
  uint16_t v14;
  float *v15;
  uint16_t v16;
  float *v17;
  uint16_t v18;
  int v19;
  uint16_t v20;
  glitch::video::IVideoDriver::Self *v21;
  glitch::video::CMaterialVertexAttributeMap::Self **v22;
  int *v23;
  int v24;
  int v25;
  glitch::video::CVertexStreams::Self *v26;
  uint32_t *v27;
  int v28;
  uint8_t Technique;
  char v30;
  int v31;
  float v32; // xmm1_4
  int v33;
  int v34;
  char v35;
  int v36;
  uint8_t v37;
  char v38;
  unsigned int *v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  bool v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  bool v51; // cc
  int v52;
  uint32_t *v53;
  uint32_t *v54;
  int v55;
  int v56;
  float v57; // xmm0_4
  char v58;
  uint16_t v59;
  uint16_t v60;
  uint16_t v61;
  uint16_t v62;
  uint16_t v63;
  uint16_t v64;
  uint16_t v65;
  float *v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef unsigned int _g4_t_v76;
  typedef uint8_t _g4_t_v77;
  typedef int *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80[4];
  typedef volatile int32_t *_g4_t_v81[4];
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef g4_int128_t _g4_t_v86;
  typedef g4_int128_t _g4_t_v87;
  typedef int _g4_t_v88;
  typedef __m128i _g4_t_v89 __attribute__((aligned(1)));
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v67)) > _g4_s0 ? (4u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v68)) > _g4_s1 ? (8u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v69)) > _g4_s2 ? (12u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v70)) > _g4_s3 ? (16u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v71)) > _g4_s4 ? (20u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v72)) > _g4_s5 ? (24u + sizeof(_g4_t_v72)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v73)) > _g4_s6 ? (28u + sizeof(_g4_t_v73)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v74)) > _g4_s7 ? (32u + sizeof(_g4_t_v74)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v75)) > _g4_s8 ? (32u + sizeof(_g4_t_v75)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v76)) > _g4_s9 ? (36u + sizeof(_g4_t_v76)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v77)) > _g4_s10 ? (36u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v78)) > _g4_s11 ? (40u + sizeof(_g4_t_v78)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v79)) > _g4_s12 ? (44u + sizeof(_g4_t_v79)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v80)) > _g4_s13 ? (48u + sizeof(_g4_t_v80)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v81)) > _g4_s14 ? (64u + sizeof(_g4_t_v81)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v82)) > _g4_s15 ? (80u + sizeof(_g4_t_v82)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v83)) > _g4_s16 ? (84u + sizeof(_g4_t_v83)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v84)) > _g4_s17 ? (88u + sizeof(_g4_t_v84)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v85)) > _g4_s18 ? (92u + sizeof(_g4_t_v85)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v86)) > _g4_s19 ? (96u + sizeof(_g4_t_v86)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v87)) > _g4_s20 ? (112u + sizeof(_g4_t_v87)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v88)) > _g4_s21 ? (128u + sizeof(_g4_t_v88)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v89)) > _g4_s22 ? (132u + sizeof(_g4_t_v89)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v90)) > _g4_s23 ? (148u + sizeof(_g4_t_v90)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v91)) > _g4_s24 ? (152u + sizeof(_g4_t_v91)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v92)) > _g4_s25 ? (156u + sizeof(_g4_t_v92)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 4u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 16u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 24u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 28u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 36u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 36u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 40u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 44u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 48u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 64u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 80u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 84u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 88u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 92u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 96u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 112u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 128u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 132u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 148u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 152u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 156u);

  result = 20 * *(uint32_t *)(a1 + 8) + *(uint32_t *)(a1 + 48);
  v78 = (int *)result;
  if ( *(int *)(result + 12) <= 0 )
    return result;
  gameswf::TextureCache::unlockAll(*(gameswf::TextureCache::Self **)(a1 + 76));
  *(uint32_t *)(*(uint32_t *)(a1 + 44) + 8) = v78[3] + v78[1];
  v76 = v78[4];
  v3 = v78[1];
  v74 = 2 * v78[2];
  v4 = v3 + v78[3];
  v5 = *v78;
  v88 = *(uint32_t *)(a1 + 40);
  if ( v88 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v88 + 4), 1u);
  HIWORD(v90) = v5;
  v6 = *(uint32_t *)(a1 + 4);
g4_m128_lane<int64_t>(v7, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v74), _mm_cvtsi32_si128(v76)), 0);
  LOWORD(v90) = 1;
g4_m128_lane<int64_t>(v7, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(v4)), 0);
  v89 = v7;
  if ( v6 == 0 )
  {
    v8 = a1 + 80;
    if ( *(uint32_t *)(a1 + 40 * *(uint32_t *)(a1 + 1260) + 84) != 0 )
      v8 = a1 + 40 * *(uint32_t *)(a1 + 1260) + 80;
LABEL_7:
    v9 = (int *)(a1 + 1240);
    goto LABEL_8;
  }
  Technique = glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 1044));
  v30 = 1;
  v31 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 1044) + 4) + 24) + 12 * Technique + 4);
  v32 = *(float *)(v31 + 12);
  *(uint32_t *)(v31 + 12) = 1065353216;
  if ( v32 == 1.0 )
    v30 = *(uint8_t *)(v31 + 54);
  *(uint8_t *)(v31 + 54) = v30;
  v33 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 1044) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 1044))
                  + 4);
  v34 = *(uint32_t *)v33 & 0xF000000;
  *(uint32_t *)v33 |= 0xF000000u;
  v35 = 1;
  if ( v34 == 251658240 )
    v35 = *(uint8_t *)(v33 + 54);
  *(uint8_t *)(v33 + 54) = v35;
  v36 = *(uint32_t *)(a1 + 4);
  v37 = glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 1044));
  v38 = v36 == 1;
  v39 = *(unsigned int **)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 1044) + 4) + 24) + 12 * v37 + 4);
  v40 = *v39;
  v41 = *v39 >> 31;
  if ( v38 != 0 )
    v42 = v40 | 0x80000000;
  else
    v42 = v40 & 0x7FFFFFFF;
  *v39 = v42;
  if ( (uint8_t)v41 != v38 )
    *((uint8_t *)v39 + 54) = 1;
  v43 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 1044) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 1044))
                  + 4);
  v44 = (*(uint32_t *)(v43 + 4) & 0x800000) == 0;
  *(uint32_t *)(v43 + 4) &= ~0x800000u;
  if ( !v44 )
    *(uint8_t *)(v43 + 54) = 1;
  v75 = *(uint32_t *)(a1 + 4) != 1;
  v45 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 1044) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 1044))
                  + 4);
  v46 = *(uint32_t *)(v45 + 4);
  *(uint32_t *)(v45 + 4) = (v75 << 17) | v46 & 0xFFF9FFFF;
  if ( (v46 & 0x60000u) >> 17 != v75 )
    *(uint8_t *)(v45 + 54) = 1;
  v74 = *(uint32_t *)(a1 + 4) != 1;
  v47 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 1044) + 4) + 24)
                  + 12
                  * (uint8_t)glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a1 + 1044))
                  + 4);
  v48 = *(uint32_t *)(v47 + 4);
  *(uint32_t *)(v47 + 4) = (v74 << 19) | v48 & 0xFFE7FFFF;
  if ( v74 != (v48 & 0x180000u) >> 19 )
    *(uint8_t *)(v47 + 54) = 1;
  v8 = a1 + 1040;
  if ( *(uint32_t *)(a1 + 4) == 0 )
    goto LABEL_7;
  v9 = (int *)(a1 + 1256);
LABEL_8:
  v10 = *v9;
  v80[0] = v10;
  if ( v10 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
  glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
    *(uint32_t **)(v8 + 4),
    *(uint16_t *)(v8 + 8),
    0,
    v80);
  v11 = *(uint32_t *)(v8 + 4);
  v77 = *(uint8_t *)(v11 + 8);
  if ( v80[0] != 0 && *(uint32_t *)(*(uint32_t *)(v80[0] + 16) + 32) != 0 )
    v12 = *(uint8_t *)(v8 + 37);
  else
    v12 = *(uint8_t *)(v8 + 36);
  if ( v77 != v12 )
  {
    *(uint8_t *)(v11 + 8) = v12;
    glitch::video::CMaterialRenderer::setRenderState(
      *(uint32_t *)v8,
      v12,
      0,
      *(uint32_t **)(*(uint32_t *)(*(uint32_t *)v8 + 24) + 12 * v77 + 4));
  }
  if ( *(uint32_t *)(a1 + 1248) != 0 && *(uint32_t *)(a1 + 1252) != 0 )
  {
    v13 = *(uint16_t *)(v8 + 10);
    if ( v13 != 0xFFFF && *(uint16_t *)(v8 + 12) != 0xFFFF )
    {
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
        *(uint32_t **)(v8 + 4),
        v13,
        0,
        (int *)(a1 + 1248));
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
        *(uint32_t **)(v8 + 4),
        *(uint16_t *)(v8 + 12),
        0,
        (int *)(a1 + 1252));
    }
  }
  v14 = *(uint16_t *)(v8 + 14);
  v86 = xmmword_1C7C9E0;
  LOWORD(v76) = v14;
  v87 = 0;
  if ( v14 != 0xFFFF && v80[0] != 0 )
  {
    v15 = (float *)&v86;
    if ( ((*(uint32_t *)(*(uint32_t *)(v80[0] + 16) + 36) >> 6) & 0x3F) != 2 )
      v15 = (float *)&v87;
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColorf_ea6ba4(
      *(uint32_t **)(v8 + 4),
      v14,
      0,
      v15);
  }
  v16 = *(uint16_t *)(v8 + 16);
  if ( v16 != 0xFFFF )
  {
    v17 = (float *)&v87;
    if ( *(uint8_t *)(a1 + 1424) != 0 )
    {
      v74 = v80[0];
      if ( v80[0] != *(uint32_t *)(a1 + 1244) )
      {
        v76 = a1 + 1428;
        if ( v80[0] != *(uint32_t *)(a1 + 1256) )
          v17 = (float *)(a1 + 1428);
      }
    }
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColorf_ea6ba4(
      *(uint32_t **)(v8 + 4),
      v16,
      0,
      v17);
  }
  v18 = *(uint16_t *)(v8 + 18);
  v19 = *(uint32_t *)(a1 + 1260);
  if ( v18 != 0xFFFF )
  {
    if ( v19 == 17 )
    {
      v66 = &v85;
      v85 = *(float *)(a1 + 1272) / (float)*(int *)(v80[0] + 20);
    }
    else
    {
      if ( v19 != 18 )
        goto LABEL_34;
      v66 = &v84;
      v84 = *(float *)(a1 + 1272) / (float)*(int *)(v80[0] + 24);
    }
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_float_id_d97248(
      *(uint32_t **)(v8 + 4),
      v18,
      0,
      v66);
    v19 = *(uint32_t *)(a1 + 1260);
  }
LABEL_34:
  v20 = *(uint16_t *)(v8 + 20);
  if ( v20 != 0xFFFF && v19 == 19 )
  {
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter(
      *(glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>> **)(v8 + 4),
      v20,
      0,
      (const glitch::core::CMatrix4<float> *)(a1 + 1280));
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(
      *(uint32_t **)(v8 + 4),
      *(uint16_t *)(v8 + 22),
      0,
      (float *)(a1 + 1344));
    v19 = *(uint32_t *)(a1 + 1260);
  }
  if ( v19 == 20 )
  {
    v59 = *(uint16_t *)(v8 + 24);
    if ( v59 != 0xFFFF )
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
        *(uint32_t **)(v8 + 4),
        v59,
        0,
        (int *)(a1 + 1444));
    v60 = *(uint16_t *)(v8 + 26);
    if ( v60 != 0xFFFF )
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_int_151610(
        *(uint32_t **)(v8 + 4),
        v60,
        0,
        (int *)(a1 + 1448));
    v61 = *(uint16_t *)(v8 + 28);
    if ( v61 != 0xFFFF )
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_float_3d6e87(
        *(uint32_t **)(v8 + 4),
        v61,
        0,
        (float *)(a1 + 1464));
    v62 = *(uint16_t *)(v8 + 30);
    if ( v62 != 0xFFFF )
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_float_3d6e87(
        *(uint32_t **)(v8 + 4),
        v62,
        0,
        (float *)(a1 + 1456));
    v63 = *(uint16_t *)(v8 + 32);
    if ( v63 != 0xFFFF )
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_float_3d6e87(
        *(uint32_t **)(v8 + 4),
        v63,
        0,
        (float *)(a1 + 1472));
  }
  else if ( v19 == 21 )
  {
    v64 = *(uint16_t *)(v8 + 24);
    if ( v64 != 0xFFFF )
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
        *(uint32_t **)(v8 + 4),
        v64,
        0,
        (int *)(a1 + 1444));
    v65 = *(uint16_t *)(v8 + 34);
    if ( v65 != 0xFFFF )
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter(
        *(glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>> **)(v8 + 4),
        v65,
        0,
        (const glitch::core::CMatrix4<float> *)(a1 + 1360));
  }
  gameswf::BufferedRenderer::applyMaskState((gameswf::BufferedRenderer::Self *)a1);
  v21 = *(glitch::video::IVideoDriver::Self **)(a1 + 72);
  v83 = 0;
  glitch::video::IVideoDriver::setMaterial(v21, (glitch::video::CMaterial::Self **)(v8 + 4), (volatile int32_t **)&v83);
  v22 = (glitch::video::CMaterialVertexAttributeMap::Self **)v83;
  if ( v83 != 0 && __sync_fetch_and_add((volatile int32_t *)v83, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v22);
    gll_operator_delete_arr((int)(uintptr_t)(v22));
  }
  if ( *v78 == 1 )
  {
    v56 = *(uint32_t *)(a1 + 72);
    v57 = *(float *)(a1 + 1276);
    v58 = *(uint8_t *)(v56 + 778) | (v57 != *(float *)(v56 + 16));
    *(uint8_t *)(v56 + 779) |= v58;
    *(float *)(v56 + 16) = v57;
    *(uint8_t *)(v56 + 778) = v58;
  }
  v81[0] = *(volatile int32_t **)(a1 + 44);
  if ( v81[0] != nullptr )
    __sync_add_and_fetch(v81[0], 1u);
  v23 = *(int **)(a1 + 72);
  v24 = *v23;
  v82 = 0;
  (*(void (**)(int *, volatile int32_t **, int *, uint32_t, int *))(v24 + 60))(v23, v81, &v88, 0, &v82);
  v25 = v82;
  if ( v82 != 0 && __sync_fetch_and_add((volatile int32_t *)(v82 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v25, 8);
    G4_VCALL<void>(v25, 4);
  }
  v26 = (glitch::video::CVertexStreams::Self *)v81[0];
  if ( v81[0] != nullptr && __sync_fetch_and_add(v81[0], 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v26);
    gll_operator_delete_arr((int)(uintptr_t)(v26));
  }
  if ( *(uint32_t *)a1 == 1 )
  {
    v49 = *(uint32_t *)(a1 + 8);
    v50 = v49 + 1;
    v51 = v49 + 1 < *(uint32_t *)(a1 + 52);
    *(uint32_t *)(a1 + 8) = v49 + 1;
    if ( !v51 )
    {
      gameswf::array_gameswf_BufferedRenderer_f5fe8c::resize(
        (gameswf::array<gameswf::BufferedRenderer::Batch> *)(a1 + 48),
        v49 + 2);
      v50 = *(uint32_t *)(a1 + 8);
    }
    v52 = *(uint32_t *)(a1 + 48);
    v53 = (uint32_t *)(v52 + 4 * (5 * v50 - 5));
    v54 = (uint32_t *)(v52 + 20 * v50);
    v54[1] = v53[3] + v53[1];
    v55 = v53[4] + v53[2];
    v54[4] = 0;
    v54[2] = v55;
    v54[3] = 0;
  }
  else
  {
    v27 = *(uint32_t **)(a1 + 48);
    *(uint32_t *)(a1 + 8) = 0;
    v27[2] = 0;
    v27[1] = 0;
    v27[4] = 0;
    v27[3] = 0;
  }
  result = sub_5ED480(v80);
  v28 = v88;
  if ( v88 != 0 )
  {
    result = __sync_fetch_and_add((volatile int32_t *)(v88 + 4), 0xFFFFFFFF);
    if ( result == 1 )
    {
      G4_VCALL<void>(v28, 8, v67, v68, v69, v70, v71, v72, v73, v74, v76, v78, v79, v80[0], v80[1], v80[2], v80[3], v81[0], v81[1], v81[2], v81[3], v82, v83, COERCE_FLOAT(LODWORD(v84)), COERCE_FLOAT(LODWORD(v85)), v86, DWORD1(v86), DWORD2(v86), HIDWORD(v86), v87, DWORD1(v87), DWORD2(v87), HIDWORD(v87), v88,g4_m128_lane<int32_t>(v89, 0),g4_m128_lane<int32_t>(v89, 1),g4_m128_lane<int32_t>(v89, 2),g4_m128_lane<int32_t>(v89, 3), v90, v91, v92);
      return G4_VCALL<int>(v28, 4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10C6AB0  (binary VA: 0x10c6ab0)
// Original: sub_10C6AB0
// ----------------------------------------------------------------------------
uint32_t * sub_10C6AB0(int a1, float **a2, char a3, uint32_t *a4, float *a5, uint32_t *a6)
{
  uint32_t *v7;
  float *v8;
  float *v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  int v22;
  float *v23;
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float *v28;
  float v29; // xmm0_4
  float v30; // xmm4_4
  int v31;
  float v32; // xmm5_4
  int v33;
  float v34; // xmm5_4
  int v35;
  float v36; // xmm0_4
  int v37;
  int v38;
  glitch::video::ITexture::Self *v39;
  float *v40;
  int v41;
  int v42;
  int v43;
  uint32_t *result;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  float v52; // xmm0_4
  int v53;
  int v54;
  bool v55;
  int v56;
  bool v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef char _g4_t_v83;
  typedef char _g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v88;
  typedef float *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef float *_g4_t_v91;
  typedef gameswf::BufferedRenderer::Self *_g4_t_v92;
  typedef int _g4_t_v93[4];
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef char *_g4_t_v104;
  typedef int _g4_t_v105;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v58)) > _g4_s0 ? (8u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v59)) > _g4_s1 ? (12u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v60)) > _g4_s2 ? (16u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v61)) > _g4_s3 ? (20u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v62)) > _g4_s4 ? (24u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v63)) > _g4_s5 ? (28u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v64)) > _g4_s6 ? (32u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v65)) > _g4_s7 ? (36u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v66)) > _g4_s8 ? (40u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v67)) > _g4_s9 ? (44u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v68)) > _g4_s10 ? (48u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v69)) > _g4_s11 ? (52u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v70)) > _g4_s12 ? (56u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v71)) > _g4_s13 ? (60u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v72)) > _g4_s14 ? (64u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v73)) > _g4_s15 ? (68u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v74)) > _g4_s16 ? (72u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v75)) > _g4_s17 ? (76u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v76)) > _g4_s18 ? (80u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v77)) > _g4_s19 ? (84u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v78)) > _g4_s20 ? (88u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v79)) > _g4_s21 ? (88u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v80)) > _g4_s22 ? (92u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v81)) > _g4_s23 ? (92u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v82)) > _g4_s24 ? (96u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (98u + sizeof(_g4_t_v83)) > _g4_s25 ? (98u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (99u + sizeof(_g4_t_v84)) > _g4_s26 ? (99u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v85)) > _g4_s27 ? (100u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v86)) > _g4_s28 ? (100u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v88)) > _g4_s29 ? (104u + sizeof(_g4_t_v88)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v89)) > _g4_s30 ? (108u + sizeof(_g4_t_v89)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v90)) > _g4_s31 ? (108u + sizeof(_g4_t_v90)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v91)) > _g4_s32 ? (112u + sizeof(_g4_t_v91)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v92)) > _g4_s33 ? (112u + sizeof(_g4_t_v92)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v93)) > _g4_s34 ? (116u + sizeof(_g4_t_v93)) : _g4_s34,
    _g4_s36 = (132u + sizeof(_g4_t_v94)) > _g4_s35 ? (132u + sizeof(_g4_t_v94)) : _g4_s35,
    _g4_s37 = (136u + sizeof(_g4_t_v95)) > _g4_s36 ? (136u + sizeof(_g4_t_v95)) : _g4_s36,
    _g4_s38 = (140u + sizeof(_g4_t_v96)) > _g4_s37 ? (140u + sizeof(_g4_t_v96)) : _g4_s37,
    _g4_s39 = (144u + sizeof(_g4_t_v97)) > _g4_s38 ? (144u + sizeof(_g4_t_v97)) : _g4_s38,
    _g4_s40 = (148u + sizeof(_g4_t_v98)) > _g4_s39 ? (148u + sizeof(_g4_t_v98)) : _g4_s39,
    _g4_s41 = (152u + sizeof(_g4_t_v99)) > _g4_s40 ? (152u + sizeof(_g4_t_v99)) : _g4_s40,
    _g4_s42 = (156u + sizeof(_g4_t_v100)) > _g4_s41 ? (156u + sizeof(_g4_t_v100)) : _g4_s41,
    _g4_s43 = (160u + sizeof(_g4_t_v101)) > _g4_s42 ? (160u + sizeof(_g4_t_v101)) : _g4_s42,
    _g4_s44 = (164u + sizeof(_g4_t_v102)) > _g4_s43 ? (164u + sizeof(_g4_t_v102)) : _g4_s43,
    _g4_s45 = (168u + sizeof(_g4_t_v103)) > _g4_s44 ? (168u + sizeof(_g4_t_v103)) : _g4_s44,
    _g4_s46 = (172u + sizeof(_g4_t_v104)) > _g4_s45 ? (172u + sizeof(_g4_t_v104)) : _g4_s45,
    _g4_s47 = (176u + sizeof(_g4_t_v105)) > _g4_s46 ? (176u + sizeof(_g4_t_v105)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 44u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 64u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 68u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 76u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 80u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 84u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 88u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 92u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 96u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 98u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 99u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 100u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 100u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 104u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 108u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 108u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 112u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 112u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 116u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 132u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 136u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 140u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 144u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 148u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 152u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 156u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 160u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 164u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 168u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 172u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 176u);

  v104 = &a3;
  v7 = a4;
  v91 = a5;
  v85 = a6;
  HIBYTE(v82) = a3;
  v8 = a2[2];
  v9 = *a2;
  v89 = *a2;
  if ( v8 == *a2 )
  {
    v89 = a2[1];
    v9 = v89;
  }
  BYTE2(v82) = *((uint32_t *)v9 + 17) == *((uint32_t *)v8 + 17);
  if ( a3 != 0 )
    (*(void (**)(uint32_t, float *))(**(uint32_t **)(a1 + 360) + 112))(*(uint32_t *)(a1 + 360), v9 + 18);
  if ( v85 != nullptr )
  {
    glitch::video::IVideoDriver::setTransform(*(uint8_t **)(a1 + 360), 0, v85, 0);
    glitch::video::IVideoDriver::setTransform(*(uint8_t **)(a1 + 360), 1, v85 + 16, 0);
    glitch::video::IVideoDriver::setTransform(*(uint8_t **)(a1 + 360), 2, v85 + 32, 0);
  }
  if ( HIBYTE(v82) != 0 )
  {
    if ( BYTE2(v82) != 0 )
    {
      v76 = (int)(float)((float)G4_VCALL<int>(v89, 56) * (float)(v89[9] - v89[7]));
      G4_VCALL<void>(v89, 52);
      v49 = *(uint32_t *)(a1 + 2308) - *(uint32_t *)(a1 + 2300);
      if ( v76 <= v49 )
        v49 = v76;
      v81 = v49;
      G4_VCALL<void>(v89, 56);
      v50 = G4_VCALL<int>(v89, 52);
      v51 = *(uint32_t *)(a1 + 2304) - *(uint32_t *)(a1 + 2296);
      v52 = (float)v50 * (float)(v89[8] - v89[6]);
      if ( (int)v52 <= v51 )
        v51 = (int)v52;
      v79 = v51;
      v69 = (float)G4_VCALL<int>(v89, 56) * v89[7];
      v98 = (int)(float)((float)G4_VCALL<int>(v89, 52) * v89[6]);
      v100 = v79 + v98;
      v53 = *(uint32_t *)(a1 + 360);
      v99 = (int)v69;
      v101 = v81 + (int)v69;
      (*(void (**)(uint32_t, int *))(***(uint32_t ***)(v53 + 300) + 12))(**(uint32_t **)(v53 + 300), &v98);
      v54 = *(uint32_t *)(a1 + 360);
      v80 = v99;
      if ( *(uint32_t *)(v54 + 56) == v98 && *(uint32_t *)(v54 + 60) == v99 )
      {
        v77 = *(uint32_t *)(v54 + 64);
        v68 = v100;
        v78 = v101;
        if ( v77 == v100 )
        {
          v55 = *(uint32_t *)(v54 + 68) != v101;
        }
        else
        {
          v77 = v100;
          v55 = true;
        }
      }
      else
      {
        v77 = v100;
        v78 = v101;
        v55 = true;
      }
      *(uint32_t *)(v54 + 56) = v98;
      *(uint32_t *)(v54 + 60) = v80;
      *(uint32_t *)(v54 + 64) = v77;
      *(uint8_t *)(v54 + 780) |= v55;
      *(uint32_t *)(v54 + 68) = v78;
      v56 = *(uint32_t *)(a1 + 360);
      v57 = (*(uint32_t *)(v56 + 36) & 0x20000) == 0;
      *(uint32_t *)(v56 + 36) |= 0x20000u;
      *(uint8_t *)(v56 + 780) |= v57;
    }
    else
    {
      (*(void (**)(uint32_t, int))(***(uint32_t ***)(*(uint32_t *)(a1 + 360) + 300) + 12))(
        **(uint32_t **)(*(uint32_t *)(a1 + 360) + 300),
        a1 + 2296);
    }
    v10 = *(uint32_t *)(a1 + 360);
    v11 = *(uint32_t *)(v10 + 4);
    *(uint32_t *)(v10 + 4) = v11 | 0xF000000;
    v12 = *(uint8_t *)(v10 + 778) | ((v11 & 0xF000000) != 251658240);
    *(uint8_t *)(v10 + 779) |= v12;
    *(uint8_t *)(v10 + 778) = v12;
    v13 = *(uint32_t *)(a1 + 360);
    v14 = *(uint32_t *)(v13 + 40);
    *(uint32_t *)(v13 + 40) = 0;
    *(uint8_t *)(v13 + 780) |= v14 != 0;
    glitch::video::IVideoDriver::clearBuffers(*(glitch::video::IVideoDriver::Self **)(a1 + 360), 7);
  }
  v15 = *(uint32_t **)(a1 + 2488);
  v16 = v7[2];
  v15[3] = *v7;
  v15[4] = v16;
  v15[5] = 0;
  v17 = *(uint32_t **)(a1 + 2488);
  v18 = v7[2];
  v17[9] = v7[1];
  v17[10] = v18;
  v17[11] = 0;
  v19 = *(uint32_t **)(a1 + 2488);
  v20 = v7[3];
  v19[15] = *v7;
  v19[16] = v20;
  v19[17] = 0;
  v21 = *(uint32_t **)(a1 + 2488);
  v22 = v7[3];
  v21[21] = v7[1];
  v21[22] = v22;
  v21[23] = 0;
  v23 = a2[2];
  v24 = v23[7];
  v25 = v23[6];
  v26 = v23[9] - v24;
  v27 = v23[8];
  v28 = *(float **)(a1 + 2488);
  v29 = v27 - v25;
  v30 = (float)(v26 * v91[2]) + v24;
  *v28 = (float)(*v91 * v29) + v25;
  v28[1] = v30;
  v31 = *(uint32_t *)(a1 + 2488);
  v32 = (float)(v91[1] * v29) + v25;
  *(float *)(v31 + 28) = (float)(v91[2] * v26) + v24;
  *(float *)(v31 + 24) = v32;
  v33 = *(uint32_t *)(a1 + 2488);
  v34 = (float)(*v91 * v29) + v25;
  *(float *)(v33 + 52) = (float)(v91[3] * v26) + v24;
  *(float *)(v33 + 48) = v34;
  v35 = *(uint32_t *)(a1 + 2488);
  v36 = (float)(v29 * v91[1]) + v25;
  *(float *)(v35 + 76) = (float)(v26 * v91[3]) + v24;
  *(float *)(v35 + 72) = v36;
  v37 = *(uint32_t *)(a1 + 2488);
  *(uint8_t *)(v37 + 80) = -1;
  *(uint8_t *)(v37 + 81) = -1;
  *(uint8_t *)(v37 + 82) = -1;
  *(uint8_t *)(v37 + 83) = -1;
  v38 = *(uint32_t *)(v37 + 80);
  *(uint32_t *)(v37 + 8) = v38;
  *(uint32_t *)(v37 + 56) = v38;
  *(uint32_t *)(v37 + 32) = v38;
  v95 = 0x10000;
  v96 = 65538;
  v97 = 196610;
  v39 = *((glitch::video::ITexture::Self **)a2[2] + 17);
  glitch::video::ITexture::setWrap(v39, 0, 1);
  glitch::video::ITexture::setWrap(v39, 1, 1);
  glitch::video::ITexture::setWrap(v39, 2, 1);
  v92 = (gameswf::BufferedRenderer::Self *)(a1 + 816);
  v40 = a2[2];
  v41 = *((uint32_t *)v40 + 17);
  if ( *(uint32_t *)(a1 + 2056) != v41 && *(uint32_t *)(a1 + 868) != 0 )
  {
    sub_10C6160(a1 + 816);
    v41 = *((uint32_t *)v40 + 17);
  }
  v42 = 0;
  v93[0] = v41;
  if ( v41 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v41 + 4), 1u);
    v42 = v93[0];
  }
  v43 = *(uint32_t *)(a1 + 2056);
  *(uint32_t *)(a1 + 2056) = v42;
  v93[0] = v43;
  sub_5ED480(v93);
  gameswf::BufferedRenderer::queueIndexedTriangles(
    v92,
    *(const Vertex **)(a1 + 2488),
    4,
    (const uint16_t *)&v95,
    6);
  glFlush();
  result = (uint32_t *)G4_VCALL<int>(a1, 132, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, COERCE_FLOAT(LODWORD(v69)), v70, v71, v72, v73, v74, v75, v76, v77, v78, v80, v82, v85, a2, v89, v92, v93[0], v93[1], v93[2], v93[3], v94, v95, v96, v97, v98, v99, v100, v101, v102, v103);
  if ( v84 != 0 )
  {
    if ( v83 != 0 )
    {
      v45 = *(uint32_t *)(a1 + 360);
      if ( (*(uint8_t *)(v45 + 840) & 4) != 0 )
      {
        G4_VCALL<void>(v45, 200, 2);
        v45 = *(uint32_t *)(a1 + 360);
      }
      v46 = *(uint32_t *)(v45 + 36);
      *(uint32_t *)(v45 + 36) = v46 & 0xFFFDFFFF;
      *(uint8_t *)(v45 + 780) |= (v46 & 0x20000) != 0;
    }
    v47 = **(uint32_t **)(a1 + 360);
    v105 = *(uint32_t *)(a1 + 360);
    result = (uint32_t *)(*(int (**)(int *))(v47 + 116))(&v94);
    v48 = v94;
    if ( v94 != 0 )
    {
      result = (uint32_t *)__sync_fetch_and_add((volatile int32_t *)(v94 + 4), 0xFFFFFFFF);
      if ( result == (uint32_t *)(uintptr_t)((int *)((char *)&dword_0 + 1)) )
      {
        G4_VCALL<void>(v48, 8);
        result = (uint32_t *)G4_VCALL<int>(v48, 4);
      }
    }
  }
  if ( v86 != 0 )
  {
    glitch::video::IVideoDriver::setTransform(*(uint8_t **)(a1 + 360), 0, (uint32_t *)(a1 + 608), 0);
    glitch::video::IVideoDriver::setTransform(*(uint8_t **)(a1 + 360), 1, (uint32_t *)(a1 + 672), 0);
    result = glitch::video::IVideoDriver::setTransform(*(uint8_t **)(a1 + 360), 2, (uint32_t *)(a1 + 736), 0);
  }
  *(uint32_t *)(v88 + 8) = v90;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10C71A0  (binary VA: 0x10c71a0)
// Original: sub_10C71A0
// ----------------------------------------------------------------------------
int sub_10C71A0(int a1, int *a2, float *a3, float *a4, gameswf::Matrix::Self *a5, gameswf::Matrix::Self *a6)
{
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm3_4
  float v14; // xmm7_4
  long double v15; // fst7
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  int v32;
  int v33;
  int v34;
  int result;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef double _g4_t_v39;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef double _g4_t_v46;
  typedef float _g4_t_Rotation;
  typedef int _g4_t_v48;
  typedef float _g4_t_v49[16];
  typedef float _g4_t_v50[16];
  typedef float _g4_t_v51[32];
  typedef float _g4_t_v52[19];
  enum : size_t {
    _g4_s0 = 592u,
    _g4_s1 = (12u + sizeof(_g4_t_v36)) > _g4_s0 ? (12u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v37)) > _g4_s1 ? (48u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v38)) > _g4_s2 ? (64u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (96u + sizeof(_g4_t_v39)) > _g4_s3 ? (96u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (124u + sizeof(_g4_t_v41)) > _g4_s4 ? (124u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (128u + sizeof(_g4_t_v42)) > _g4_s5 ? (128u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (132u + sizeof(_g4_t_v43)) > _g4_s6 ? (132u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (136u + sizeof(_g4_t_v44)) > _g4_s7 ? (136u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (140u + sizeof(_g4_t_v45)) > _g4_s8 ? (140u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (144u + sizeof(_g4_t_v46)) > _g4_s9 ? (144u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (160u + sizeof(_g4_t_Rotation)) > _g4_s10 ? (160u + sizeof(_g4_t_Rotation)) : _g4_s10,
    _g4_s12 = (188u + sizeof(_g4_t_v48)) > _g4_s11 ? (188u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (192u + sizeof(_g4_t_v49)) > _g4_s12 ? (192u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (256u + sizeof(_g4_t_v50)) > _g4_s13 ? (256u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (320u + sizeof(_g4_t_v51)) > _g4_s14 ? (320u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (448u + sizeof(_g4_t_v52)) > _g4_s15 ? (448u + sizeof(_g4_t_v52)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 124u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 128u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 132u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 136u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 140u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 144u);
  _g4_t_Rotation &Rotation = *reinterpret_cast<_g4_t_Rotation *>(_g4_sf + 160u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 188u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 192u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 256u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 320u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 448u);

  v45 = *((float *)a5 + 3);
  v42 = *a4;
  v7 = a3[2];
  v44 = *((float *)a5 + 4);
  v43 = a4[2];
  v8 = *((float *)a6 + 3);
  v9 = *((float *)a6 + 4);
  v10 = (float)((float)((float)((float)((float)(*(float *)a5 * *a3) + (float)(*((float *)a5 + 1) * v7))
                              + *((float *)a5 + 2))
                      - *((float *)a6 + 2))
              - (float)(*(float *)a6 * *a4))
      - (float)(*((float *)a6 + 1) * v43);
  v11 = (float)((float)((float)((float)((float)(v45 * *a3) + (float)(v44 * v7)) + *((float *)a5 + 5))
                      - *((float *)a6 + 5))
              - (float)(*a4 * v8))
      - (float)(v43 * v9);
  v41 = fsqrt((float)(*((float *)a6 + 1) * *((float *)a6 + 1)) + (float)(*(float *)a6 * *(float *)a6));
  if ( (float)((float)(*(float *)a6 * v9) - (float)(*((float *)a6 + 1) * v8)) < 0.0 )
  {
    v12 = (float)(v42 - a4[1]) * v41;
    v13 = fsqrt((float)(v9 * v9) + (float)(v8 * v8)) * (float)(a4[3] - v43);
  }
  else
  {
    v12 = (float)(a4[1] - v42) * v41;
    v13 = fsqrt((float)(v8 * v8) + (float)(v9 * v9)) * (float)(a4[3] - v43);
  }
  v14 = fsqrt((float)(v45 * v45) + (float)(v44 * v44));
  v38 = v12 / (float)((float)(a3[1] - *a3) * v14);
  v37 = v13 / (float)((float)(a3[3] - v7) * v14);
  Rotation = gameswf::Matrix::getRotation(a5);
  v36 = gameswf::Matrix::getRotation(a6);
  memset(v49, 0, sizeof(v49));
  v49[10] = 1.0;
  memset(v50, 0, sizeof(v50));
  v49[15] = 1.0;
  memset(v51, 0, 0x40u);
  v49[0] = v38;
  v49[5] = v37;
  v50[0] = 1.0;
  v50[5] = 1.0;
  v50[10] = 1.0;
  v50[15] = 1.0;
  v51[10] = 1.0;
  v51[15] = 1.0;
  v39 = (float)(v36 - Rotation);
  v50[12] = (float)-v10 / v12;
  v50[13] = (float)-v11 / v13;
  v46 = cos(v39);
  v15 = sin(v39);
  v16 = v15;
  v51[1] = v16;
  v17 = v46;
  v18 = -(double)v15;
  memset(&v51[16], 0, 0x40u);
  v19 = v51[17];
  v20 = v51[18];
  *(uint32_t *)(a1 + 1360) = 1065353216;
  v51[0] = v17;
  *(float *)(a1 + 1364) = v19;
  v51[4] = v18;
  v51[16] = 1.0;
  v51[5] = v17;
  v51[21] = 1.0;
  v51[26] = 1.0;
  v51[31] = 1.0;
  *(float *)(a1 + 1368) = v20;
  *(float *)(a1 + 1372) = v51[19];
  *(float *)(a1 + 1384) = v51[22];
  v21 = v51[20];
  *(float *)(a1 + 1392) = v51[24];
  v52[0] = 1.0;
  v22 = v51[27];
  v23 = v51[17];
  *(float *)(a1 + 1376) = v21;
  *(float *)(a1 + 1404) = v22;
  v24 = v51[28];
  v52[1] = v23;
  v25 = v51[18];
  *(float *)(a1 + 1388) = v51[23];
  *(float *)(a1 + 1408) = v24;
  v26 = v51[25];
  v27 = v51[29];
  v52[2] = v25;
  v28 = v51[19];
  *(uint32_t *)(a1 + 1380) = 1065353216;
  *(float *)(a1 + 1396) = v26;
  *(float *)(a1 + 1412) = v27;
  v29 = v51[30];
  v52[3] = v28;
  v52[5] = 1.0;
  v30 = v51[20];
  v31 = v51[22];
  *(uint32_t *)(a1 + 1400) = 1065353216;
  *(float *)(a1 + 1416) = v29;
  v52[4] = v30;
  *(uint32_t *)(a1 + 1420) = 1065353216;
  v52[6] = v31;
  v52[7] = v51[23];
  v52[10] = 1.0;
  v52[8] = v51[24];
  v52[9] = v51[25];
  v52[11] = v51[27];
  v52[12] = v51[28];
  v52[13] = v51[29];
  v52[14] = v51[30];
  v52[15] = 1.0;
  sub_819AF0((float *)(a1 + 1360), v52, v49);
  std::memcpy(v52, (const void *)(a1 + 1360), 64);
  sub_819AF0((float *)(a1 + 1360), v52, v50);
  std::memcpy(v52, (const void *)(a1 + 1360), 64);
  sub_819AF0((float *)(a1 + 1360), v52, v51);
  v32 = *a2;
  v33 = 0;
  v48 = *a2;
  if ( v48 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v32 + 4), 1u);
    v33 = v48;
  }
  v34 = *(uint32_t *)(a1 + 1444);
  *(uint32_t *)(a1 + 1444) = v33;
  v48 = v34;
  result = sub_5ED480(&v48);
  if ( *(uint32_t *)(a1 + 1260) != 21 && *(uint32_t *)(a1 + 52) != 0 )
    result = sub_10C6160(a1);
  *(uint32_t *)(a1 + 1260) = 21;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10D17F0  (binary VA: 0x10d17f0)
// Original: sub_10D17F0
// ----------------------------------------------------------------------------
int sub_10D17F0()
{
  sub_1900D70(&unk_20E5554);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E5554, &unk_20D1280);
  dword_20E5558 = 1056964608;
  dword_20E555C = 1056964608;
  dword_20E5560 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_10D5170  (binary VA: 0x10d5170)
// Original: sub_10D5170
// ----------------------------------------------------------------------------
int sub_10D5170()
{
  glf::Mutex::Construct(&dword_20E5564, 1);
  return __cxa_atexit((void (*)(void *))gameswf::Mutex::Destroy, &dword_20E5564, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_10D51F0  (binary VA: 0x10d51f0)
// Original: sub_10D51F0
// ----------------------------------------------------------------------------
bool sub_10D51F0(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm3_4

  v4 = a3[1];
  v5 = *a4 - *a3;
  v6 = a3[2];
  v7 = a4[1] - v4;
  v8 = a4[2] - v6;
  return (float)((float)((float)((float)((float)((float)(*a2 - *a3) * v8) - (float)((float)(a2[2] - v6) * v5))
                               * (float)((float)((float)(*a1 - *a3) * v8) - (float)((float)(a1[2] - v6) * v5)))
                       + (float)((float)((float)((float)(a2[2] - v6) * v7) - (float)((float)(a2[1] - v4) * v8))
                               * (float)((float)((float)(a1[2] - v6) * v7) - (float)(v8 * (float)(a1[1] - v4)))))
               + (float)((float)((float)((float)(a2[1] - v4) * v5) - (float)((float)(*a2 - *a3) * v7))
                       * (float)((float)(v5 * (float)(a1[1] - v4)) - (float)(v7 * (float)(*a1 - *a3))))) >= 0.0;
}

// ----------------------------------------------------------------------------
// Function: sub_10DA7C0  (binary VA: 0x10da7c0)
// Original: sub_10DA7C0
// ----------------------------------------------------------------------------
int sub_10DA7C0()
{
  sub_1900D70(&unk_20E5568);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E5568, &unk_20D1280);
  dword_20E556C = 1056964608;
  dword_20E5570 = 1056964608;
  dword_20E5574 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_10DA820  (binary VA: 0x10da820)
// Original: sub_10DA820
// ----------------------------------------------------------------------------
int sub_10DA820(float **a1, float **a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  int result;

  v2 = **a1;
  v3 = **a2;
  result = 1;
  if ( v3 <= v2 )
    return (v2 <= v3) - 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10E2480  (binary VA: 0x10e2480)
// Original: sub_10E2480
// ----------------------------------------------------------------------------
int sub_10E2480(int *a1)
{
  int v1;
  int v4;
  uint16_t *v5;
  unsigned int v6;
  uint16_t *v7;
  int v8;

  v1 = *a1;
  if ( *a1 == 0 )
  {
    v4 = opNew(0x94u);
    v5 = (uint16_t *)(v4 + 32);
    v1 = v4;
    *(uint32_t *)v4 = 1065353216;
    *(uint32_t *)(v4 + 8) = 1065353216;
    *(uint32_t *)(v4 + 16) = 1065353216;
    *(uint32_t *)(v4 + 24) = 1065353216;
    *(uint32_t *)(v4 + 4) = 0;
    *(uint32_t *)(v4 + 12) = 0;
    *(uint32_t *)(v4 + 20) = 0;
    *(uint32_t *)(v4 + 28) = 0;
    v6 = 24;
    if ( ((v4 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v4 + 32) = 0;
      v5 = (uint16_t *)(v4 + 33);
      LOWORD(v6) = 23;
    }
    if ( ((uint8_t)(uintptr_t)(v5) & 2) != 0 )
    {
      *v5 = 0;
      v6 -= 2;
      ++v5;
    }
    memset(v5, 0, 4 * (v6 >> 2));
    v7 = &v5[2 * (v6 >> 2)];
    if ( (v6 & 2) != 0 )
      *v7++ = 0;
    if ( (v6 & 1) != 0 )
      *(uint8_t *)v7 = 0;
    v8 = *(uint32_t *)(v4 + 92);
    *(uint32_t *)(v1 + 32) = 1065353216;
    v8 |= 0x7FFFFFu;
    *(uint32_t *)(v1 + 48) = 1065353216;
    *(uint32_t *)(v1 + 92) = v8;
    *(uint32_t *)(v1 + 56) = 0;
    *(uint32_t *)(v1 + 60) = 0;
    *(uint32_t *)(v1 + 64) = 0;
    *(uint32_t *)(v1 + 68) = 0;
    *(uint32_t *)(v1 + 72) = 0;
    *(uint8_t *)(v1 + 76) = 1;
    *(uint8_t *)(v1 + 77) = 0;
    *(uint8_t *)(v1 + 94) = BYTE2(v8) & 0x7F;
    *(uint16_t *)(v1 + 95) = HIBYTE(v8) | 1;
    *(uint8_t *)(v1 + 97) = 0;
    *(uint8_t *)(v1 + 98) = 0;
    *(uint32_t *)(v1 + 100) = 0;
    *(uint32_t *)(v1 + 104) = 1065353216;
    *(uint32_t *)(v1 + 108) = 0;
    *(uint32_t *)(v1 + 112) = 1065353216;
    *(uint32_t *)(v1 + 116) = 0;
    *(uint32_t *)(v1 + 120) = 0;
    *(uint32_t *)(v1 + 124) = 0;
    *(uint32_t *)(v1 + 128) = 0;
    *(uint32_t *)(v1 + 132) = 0;
    *(uint32_t *)(v1 + 136) = 0;
    *(uint32_t *)(v1 + 140) = 0;
    *(uint32_t *)(v1 + 144) = 0;
    *a1 = v1;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_10E2ED0  (binary VA: 0x10e2ed0)
// Original: sub_10E2ED0
// ----------------------------------------------------------------------------
gameswf::Self * sub_10E2ED0(int a1)
{
  gameswf::Self *v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  gameswf::Self *v14;
  gameswf::ASValue::Self *v15;
  int v16;
  int v17;
  int i;
  gameswf::Self *result;
  int v20;
  uint8_t *v21;
  int v22;
  uint8_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v2 = *(gameswf::Self **)(a1 + 208);
  if ( v2 != nullptr )
  {
    v3 = (*(uint16_t *)v2)-- == 1;
    if ( v3 )
      gameswf::free_internal(v2);
  }
  v4 = *(uint32_t *)(a1 + 196);
  if ( v4 <= 0 )
  {
    if ( v4 < 0 )
    {
      v30 = 32 * v4;
      do
      {
        v24 = *(uint32_t *)(a1 + 192) + v30;
        if ( v24 != 0 )
        {
          v25 = *(uint32_t *)(v24 + 16);
          *(uint8_t *)v24 = 1;
          v25 |= 0x7FFFFFu;
          *(uint8_t *)(v24 + 1) = 0;
          *(uint32_t *)(v24 + 16) = v25;
          *(uint8_t *)(v24 + 20) = 0;
          *(uint8_t *)(v24 + 21) = 0;
          *(uint8_t *)(v24 + 18) = BYTE2(v25) & 0x7F;
          *(uint8_t *)(v24 + 19) = HIBYTE(v25) | 1;
        }
        v30 += 32;
        ++v4;
      }
      while ( v4 != 0 );
    }
  }
  else
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v26 = v5;
        v6 = *(uint32_t *)(a1 + 192) + 32 * v5;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v6 + 20));
        if ( *(uint8_t *)v6 == 0xFF && (*(uint8_t *)(v6 + 19) & 1) != 0 )
          break;
        v5 = v26 + 1;
        if ( v26 + 1 == v4 )
          goto LABEL_10;
      }
      gameswf::free_internal(*(gameswf::Self **)(v6 + 12));
      v5 = v26 + 1;
    }
    while ( v26 + 1 != v4 );
  }
LABEL_10:
  v7 = *(uint32_t *)(a1 + 204);
  *(uint32_t *)(a1 + 196) = 0;
  if ( v7 == 0 )
  {
    v8 = *(gameswf::Self **)(a1 + 192);
    *(uint32_t *)(a1 + 200) = 0;
    if ( v8 != nullptr )
      gameswf::free_internal(v8);
    *(uint32_t *)(a1 + 192) = 0;
  }
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(a1 + 180));
  if ( *(uint32_t *)(a1 + 176) != 0 )
    gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(a1 + 176));
  v9 = *(uint32_t *)(a1 + 164);
  v10 = (uint32_t *)(a1 + 160);
  if ( v9 <= 0 )
  {
    if ( v9 < 0 )
    {
      v22 = 12 * v9;
      do
      {
        v23 = (uint8_t *)(v22 + *v10);
        if ( v23 != nullptr )
        {
          *v23 = 0;
          v23[1] = 0;
        }
        v22 += 12;
        ++v9;
      }
      while ( v9 != 0 );
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
    do
    {
      v27 = v12;
      v29 = v11;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v11 + *v10));
      v12 = v27 + 1;
      v11 = v29 + 12;
    }
    while ( v27 + 1 != v9 );
  }
  v13 = *(uint32_t *)(a1 + 172);
  *(uint32_t *)(a1 + 164) = 0;
  if ( v13 == 0 )
  {
    v14 = *(gameswf::Self **)(a1 + 160);
    *(uint32_t *)(a1 + 168) = 0;
    if ( v14 != nullptr )
      gameswf::free_internal(v14);
    *(uint32_t *)(a1 + 160) = 0;
  }
  v15 = (gameswf::ASValue::Self *)(a1 + 160);
  do
  {
    v15 = (gameswf::ASValue::Self *)((char *)v15 - 12);
    gameswf::ASValue::dropRefs(v15);
  }
  while ( (gameswf::ASValue::Self *)(a1 + 112) != v15 );
  v16 = *(uint32_t *)(a1 + 4);
  if ( v16 <= 0 )
  {
    if ( v16 < 0 )
    {
      v20 = 12 * v16;
      do
      {
        v21 = (uint8_t *)(v20 + *(uint32_t *)a1);
        if ( v21 != nullptr )
        {
          *v21 = 0;
          v21[1] = 0;
        }
        v20 += 12;
        ++v16;
      }
      while ( v16 != 0 );
    }
  }
  else
  {
    v17 = 0;
    for ( i = 0; i != v16; ++i )
    {
      v28 = v17;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v17 + *(uint32_t *)a1));
      v17 = v28 + 12;
    }
  }
  result = *(gameswf::Self **)(a1 + 12);
  *(uint32_t *)(a1 + 4) = 0;
  if ( result == nullptr )
  {
    result = *(gameswf::Self **)a1;
    v3 = *(uint32_t *)a1 == 0;
    *(uint32_t *)(a1 + 8) = 0;
    if ( !v3 )
      result = (gameswf::Self *)gameswf::free_internal(result);
    *(uint32_t *)a1 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10E31A0  (binary VA: 0x10e31a0)
// Original: sub_10E31A0
// ----------------------------------------------------------------------------
int sub_10E31A0(int a1, char *a2)
{
  int v2;
  int result;
  int v4;
  gameswf::Self *v5;
  char *v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  uint16_t *v14;
  unsigned int v15;
  uint16_t *v16;
  int v17;
  int v20;

  v2 = *(uint32_t *)(a1 + 76);
  if ( v2 == 0 )
  {
    v13 = opNew(0x94u);
    v14 = (uint16_t *)(v13 + 32);
    v2 = v13;
    *(uint32_t *)v13 = 1065353216;
    *(uint32_t *)(v13 + 8) = 1065353216;
    *(uint32_t *)(v13 + 16) = 1065353216;
    *(uint32_t *)(v13 + 24) = 1065353216;
    *(uint32_t *)(v13 + 4) = 0;
    *(uint32_t *)(v13 + 12) = 0;
    *(uint32_t *)(v13 + 20) = 0;
    *(uint32_t *)(v13 + 28) = 0;
    v15 = 24;
    if ( ((v13 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v13 + 32) = 0;
      v14 = (uint16_t *)(v13 + 33);
      LOBYTE(v15) = 23;
    }
    if ( ((uint8_t)(uintptr_t)(v14) & 2) != 0 )
    {
      *v14 = 0;
      v15 -= 2;
      ++v14;
    }
    memset(v14, 0, 4 * (v15 >> 2));
    v16 = &v14[2 * (v15 >> 2)];
    if ( (v15 & 2) != 0 )
      *v16++ = 0;
    if ( (v15 & 1) != 0 )
      *(uint8_t *)v16 = 0;
    v17 = *(uint32_t *)(v13 + 92);
    *(uint32_t *)(v2 + 32) = 1065353216;
    v17 |= 0x7FFFFFu;
    *(uint32_t *)(v2 + 48) = 1065353216;
    *(uint32_t *)(v2 + 92) = v17;
    *(uint32_t *)(v2 + 56) = 0;
    *(uint8_t *)(v2 + 94) = BYTE2(v17) & 0x7F;
    *(uint8_t *)(v2 + 95) = HIBYTE(v17) | 1;
    *(uint32_t *)(v2 + 60) = 0;
    *(uint32_t *)(v2 + 64) = 0;
    *(uint32_t *)(v2 + 68) = 0;
    *(uint32_t *)(v2 + 72) = 0;
    *(uint8_t *)(v2 + 76) = 1;
    *(uint8_t *)(v2 + 77) = 0;
    *(uint8_t *)(v2 + 96) = 0;
    *(uint8_t *)(v2 + 97) = 0;
    *(uint8_t *)(v2 + 98) = 0;
    *(uint32_t *)(v2 + 100) = 0;
    *(uint32_t *)(v2 + 104) = 1065353216;
    *(uint32_t *)(v2 + 108) = 0;
    *(uint32_t *)(v2 + 112) = 1065353216;
    *(uint32_t *)(v2 + 116) = 0;
    *(uint32_t *)(v2 + 120) = 0;
    *(uint32_t *)(v2 + 124) = 0;
    *(uint32_t *)(v2 + 128) = 0;
    *(uint32_t *)(v2 + 132) = 0;
    *(uint32_t *)(v2 + 136) = 0;
    *(uint32_t *)(v2 + 140) = 0;
    *(uint32_t *)(v2 + 144) = 0;
    *(uint32_t *)(a1 + 76) = v2;
  }
  result = v2 + 76;
  if ( (char *)(v2 + 76) != a2 )
  {
    if ( *a2 == -1 )
      v4 = *((uint32_t *)a2 + 1) - 1;
    else
      v4 = *a2 - 1;
    gameswf::String::resize((gameswf::String::Self *)(v2 + 76), v4);
    v5 = (gameswf::Self *)(a2 + 1);
    if ( *a2 == -1 )
      v5 = *((gameswf::Self **)a2 + 3);
    LOBYTE(v6) = *(uint8_t *)(v2 + 76);
    if ( (uint8_t)(uintptr_t)(v6) == 0xFF )
    {
      v6 = *(char **)(v2 + 80);
      v7 = *(gameswf::Self **)(v2 + 88);
    }
    else
    {
      v6 = (char *)(char)(uintptr_t)(v6);
      v7 = (gameswf::Self *)(v2 + 77);
    }
    gameswf::Strcpy_s(v7, v6, v5);
    v20 = *((uint32_t *)a2 + 4);
    if ( (uint8_t *)(v20 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *a2 == -1 )
      {
        v10 = *((char **)a2 + 3);
        v9 = *((uint32_t *)a2 + 1) - 1;
      }
      else
      {
        v9 = *a2 - 1;
        v10 = a2 + 1;
      }
      v8 = 5381;
      if ( v9 > 0 )
      {
        do
        {
          --v9;
          v11 = 33 * v8;
          v12 = (uint8_t)v10[v9] + 32;
          if ( (uint8_t)(v10[v9] - 65) > 0x19u )
            v12 = (uint8_t)v10[v9];
          v8 = v11 ^ v12;
        }
        while ( v9 != 0 );
        v8 = v8 << 9 >> 9;
      }
      *((uint32_t *)a2 + 4) = v8 & 0x7FFFFF | v20 & 0xFF800000;
    }
    else
    {
      v8 = v20 << 9 >> 9;
    }
    *(uint32_t *)(v2 + 92) = v8 & 0x7FFFFF | *(uint32_t *)(v2 + 92) & 0xFF800000;
    result = *(uint32_t *)(a1 + 76) + 76;
  }
  *(uint32_t *)(a1 + 60) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10EAD60  (binary VA: 0x10ead60)
// Original: sub_10EAD60
// ----------------------------------------------------------------------------
int sub_10EAD60()
{
  sub_1900D70(&unk_20E5584);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E5584, &unk_20D1280);
  dword_20E5588 = 1056964608;
  dword_20E558C = 1056964608;
  dword_20E5590 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_10EC860  (binary VA: 0x10ec860)
// Original: sub_10EC860
// ----------------------------------------------------------------------------
int sub_10EC860()
{
  dword_20E5594 = (int)((uint32_t)(uintptr_t)&off_208E088);
  return __cxa_atexit((void (*)(void *))gameswf::ExecuteTag::Destroy, &dword_20E5594, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_10EF190  (binary VA: 0x10ef190)
// Original: sub_10EF190
// ----------------------------------------------------------------------------
int sub_10EF190(int a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  gameswf::Self *v14;
  int v15;
  gameswf::Self *v16;
  int v17;
  int v18;
  int v19;
  void *v20;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  int v31;
  int v32;
  int v34;

  v34 = *(uint32_t *)(a1 + 4);
  if ( v34 > a2 )
  {
    v31 = a2;
    v32 = 56 * a2;
    do
    {
      v28 = (uint32_t *)(*(uint32_t *)a1 + v32);
      v2 = v28[9];
      if ( v2 < 0 )
      {
        v3 = 8 * v2;
        do
        {
          v4 = (uint32_t *)(v28[8] + v3);
          if ( v4 != nullptr )
          {
            *v4 = 0;
            v4[1] = 0;
          }
          v3 += 8;
          ++v2;
        }
        while ( v2 != 0 );
      }
      v5 = v28[11];
      v28[9] = 0;
      if ( v5 == 0 )
      {
        v6 = (gameswf::Self *)v28[8];
        v28[10] = 0;
        if ( v6 != nullptr )
          gameswf::free_internal(v6);
        v28[8] = 0;
      }
      v29 = v28 + 3;
      v7 = v28[4];
      v27 = v7;
      if ( v7 <= 0 )
      {
        if ( v7 < 0 )
        {
          v22 = v28[4];
          v23 = 20 * v27;
          do
          {
            v24 = *v29 + v23;
            if ( v24 != 0 )
            {
              *(uint8_t *)v24 = 0;
              *(uint32_t *)(v24 + 4) = 0;
              *(uint32_t *)(v24 + 8) = 0;
              *(uint32_t *)(v24 + 12) = 0;
              *(uint32_t *)(v24 + 16) = 0;
            }
            v23 += 20;
            ++v22;
          }
          while ( v22 != 0 );
        }
      }
      else
      {
        v8 = 0;
        v26 = 0;
        do
        {
          v9 = (uint32_t *)(*v29 + v8);
          v10 = v9[2];
          if ( v10 < 0 )
          {
            v11 = 8 * v10;
            do
            {
              v12 = (uint32_t *)(v9[1] + v11);
              if ( v12 != nullptr )
              {
                *v12 = 0;
                v12[1] = 0;
              }
              v11 += 8;
              ++v10;
            }
            while ( v10 != 0 );
          }
          v13 = v9[4];
          v9[2] = 0;
          if ( v13 == 0 )
          {
            v14 = (gameswf::Self *)v9[1];
            v9[3] = 0;
            if ( v14 != nullptr )
              gameswf::free_internal(v14);
            v9[1] = 0;
          }
          ++v26;
          v8 += 20;
        }
        while ( v26 != v27 );
      }
      v15 = v28[6];
      v28[4] = 0;
      if ( v15 == 0 )
      {
        v16 = (gameswf::Self *)v28[3];
        v28[5] = 0;
        if ( v16 != nullptr )
          gameswf::free_internal(v16);
        v28[3] = 0;
      }
      ++v31;
      v32 += 56;
    }
    while ( v31 != v34 );
  }
  if ( a2 != 0 )
  {
    v17 = *(uint32_t *)(a1 + 8);
    if ( a2 > v17 && *(uint32_t *)(a1 + 12) == 0 )
    {
      v25 = a2 + (a2 >> 1);
      *(uint32_t *)(a1 + 8) = v25;
      if ( v25 != 0 )
      {
        if ( *(uint32_t *)a1 != 0 )
          *(uint32_t *)a1 = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)a1, 56 * v25, 56 * v17));
        else
          *(uint32_t *)a1 = gameswf::malloc_internal(56 * v25);
      }
      else
      {
        if ( *(uint32_t *)a1 != 0 )
          gameswf::free_internal(*(gameswf::Self **)a1);
        *(uint32_t *)a1 = 0;
      }
    }
  }
  if ( v34 < a2 )
  {
    v18 = 56 * v34;
    v19 = v34;
    do
    {
      v20 = (void *)(*(uint32_t *)a1 + v18);
      if ( v20 != nullptr )
        memset(v20, 0, 0x38u);
      ++v19;
      v18 += 56;
    }
    while ( v19 != a2 );
  }
  *(uint32_t *)(a1 + 4) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_10F0980  (binary VA: 0x10f0980)
// Original: sub_10F0980
// ----------------------------------------------------------------------------
int sub_10F0980(int a1, gameswf::MeshSet::Self *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  gameswf::Mesh::Self *v9;
  int v10;
  float *v11;
  float *v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  gameswf::Self *v18;
  int v19;
  int v20;
  int v21;
  gameswf::Self *v22;
  int v23;
  gameswf::Self *v24;
  int *v25;
  int v26;
  gameswf::Self *v27;
  gameswf::Self *v28;
  int v29;
  uint8_t *v30;
  int v31;
  int v32;
  gameswf::Self *v33;
  int *v34;
  int v35;
  int v36;
  uint16_t *v37;
  int16_t v38;
  int v39;
  int v40;
  int v41;
  int v42;
  gameswf::Self *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  size_t v50;
  int v51;
  gameswf::Mesh::Self *MutableMesh;
  gameswf::Self *v53;
  gameswf::Self *v54;
  gameswf::Self *v55;
  gameswf::Self *v56;
  gameswf::Self *v57;
  gameswf::Self *v58;
  int v59;
  typedef gameswf::TesselatorAccepter::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int16_t _g4_t_v62;
  typedef int _g4_t_v63;
  typedef float *_g4_t_v64;
  typedef int16_t _g4_t_v65;
  typedef int16_t _g4_t_v66;
  typedef int16_t _g4_t_v67;
  typedef bool _g4_t_v68;
  typedef float *_g4_t_v69;
  typedef float *_g4_t_v70;
  typedef int16_t _g4_t_v71;
  typedef int16_t _g4_t_v72;
  typedef int16_t _g4_t_v73;
  typedef gameswf::Self *_g4_t_v74;
  typedef gameswf::Self *_g4_t_v75;
  typedef gameswf::Self *_g4_t_v76;
  typedef gameswf::Self *_g4_t_v77;
  typedef gameswf::Self *_g4_t_v78;
  typedef gameswf::Self *_g4_t_v79;
  typedef gameswf::Self *_g4_t_v80;
  typedef gameswf::Self *_g4_t_v81;
  typedef gameswf::Self *_g4_t_v82;
  typedef gameswf::Self *_g4_t_v83;
  typedef gameswf::Self *_g4_t_v84;
  typedef gameswf::Self *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef gameswf::array<gameswf::Point::Self> *_g4_t_v88;
  typedef int16_t _g4_t_v89;
  typedef int _g4_t_v90;
  typedef gameswf::Self *_g4_t_v91;
  typedef uint32_t *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef bool *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef float *_g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef uint32_t *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int16_t _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef char _g4_t_v115;
  typedef gameswf::Self *_g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int *_g4_t_v120;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v60)) > _g4_s0 ? (12u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v61)) > _g4_s1 ? (48u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v62)) > _g4_s2 ? (48u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v63)) > _g4_s3 ? (48u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v64)) > _g4_s4 ? (52u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v65)) > _g4_s5 ? (52u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v66)) > _g4_s6 ? (52u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v67)) > _g4_s7 ? (52u + sizeof(_g4_t_v67)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v68)) > _g4_s8 ? (52u + sizeof(_g4_t_v68)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v69)) > _g4_s9 ? (52u + sizeof(_g4_t_v69)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v70)) > _g4_s10 ? (52u + sizeof(_g4_t_v70)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v71)) > _g4_s11 ? (52u + sizeof(_g4_t_v71)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v72)) > _g4_s12 ? (52u + sizeof(_g4_t_v72)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v73)) > _g4_s13 ? (52u + sizeof(_g4_t_v73)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v74)) > _g4_s14 ? (56u + sizeof(_g4_t_v74)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v75)) > _g4_s15 ? (56u + sizeof(_g4_t_v75)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v76)) > _g4_s16 ? (56u + sizeof(_g4_t_v76)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v77)) > _g4_s17 ? (56u + sizeof(_g4_t_v77)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v78)) > _g4_s18 ? (56u + sizeof(_g4_t_v78)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v79)) > _g4_s19 ? (56u + sizeof(_g4_t_v79)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v80)) > _g4_s20 ? (56u + sizeof(_g4_t_v80)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v81)) > _g4_s21 ? (56u + sizeof(_g4_t_v81)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v82)) > _g4_s22 ? (56u + sizeof(_g4_t_v82)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v83)) > _g4_s23 ? (56u + sizeof(_g4_t_v83)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v84)) > _g4_s24 ? (56u + sizeof(_g4_t_v84)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v85)) > _g4_s25 ? (56u + sizeof(_g4_t_v85)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v86)) > _g4_s26 ? (60u + sizeof(_g4_t_v86)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v88)) > _g4_s27 ? (68u + sizeof(_g4_t_v88)) : _g4_s27,
    _g4_s29 = (78u + sizeof(_g4_t_v89)) > _g4_s28 ? (78u + sizeof(_g4_t_v89)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v90)) > _g4_s29 ? (80u + sizeof(_g4_t_v90)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v91)) > _g4_s30 ? (84u + sizeof(_g4_t_v91)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v93)) > _g4_s31 ? (92u + sizeof(_g4_t_v93)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v94)) > _g4_s32 ? (92u + sizeof(_g4_t_v94)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v95)) > _g4_s33 ? (96u + sizeof(_g4_t_v95)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v96)) > _g4_s34 ? (100u + sizeof(_g4_t_v96)) : _g4_s34,
    _g4_s36 = (100u + sizeof(_g4_t_v97)) > _g4_s35 ? (100u + sizeof(_g4_t_v97)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v98)) > _g4_s36 ? (104u + sizeof(_g4_t_v98)) : _g4_s36,
    _g4_s38 = (104u + sizeof(_g4_t_v99)) > _g4_s37 ? (104u + sizeof(_g4_t_v99)) : _g4_s37,
    _g4_s39 = (104u + sizeof(_g4_t_v100)) > _g4_s38 ? (104u + sizeof(_g4_t_v100)) : _g4_s38,
    _g4_s40 = (108u + sizeof(_g4_t_v101)) > _g4_s39 ? (108u + sizeof(_g4_t_v101)) : _g4_s39,
    _g4_s41 = (112u + sizeof(_g4_t_v102)) > _g4_s40 ? (112u + sizeof(_g4_t_v102)) : _g4_s40,
    _g4_s42 = (112u + sizeof(_g4_t_v103)) > _g4_s41 ? (112u + sizeof(_g4_t_v103)) : _g4_s41,
    _g4_s43 = (112u + sizeof(_g4_t_v104)) > _g4_s42 ? (112u + sizeof(_g4_t_v104)) : _g4_s42,
    _g4_s44 = (112u + sizeof(_g4_t_v105)) > _g4_s43 ? (112u + sizeof(_g4_t_v105)) : _g4_s43,
    _g4_s45 = (116u + sizeof(_g4_t_v106)) > _g4_s44 ? (116u + sizeof(_g4_t_v106)) : _g4_s44,
    _g4_s46 = (120u + sizeof(_g4_t_v107)) > _g4_s45 ? (120u + sizeof(_g4_t_v107)) : _g4_s45,
    _g4_s47 = (120u + sizeof(_g4_t_v108)) > _g4_s46 ? (120u + sizeof(_g4_t_v108)) : _g4_s46,
    _g4_s48 = (120u + sizeof(_g4_t_v109)) > _g4_s47 ? (120u + sizeof(_g4_t_v109)) : _g4_s47,
    _g4_s49 = (120u + sizeof(_g4_t_v110)) > _g4_s48 ? (120u + sizeof(_g4_t_v110)) : _g4_s48,
    _g4_s50 = (120u + sizeof(_g4_t_v111)) > _g4_s49 ? (120u + sizeof(_g4_t_v111)) : _g4_s49,
    _g4_s51 = (124u + sizeof(_g4_t_v112)) > _g4_s50 ? (124u + sizeof(_g4_t_v112)) : _g4_s50,
    _g4_s52 = (128u + sizeof(_g4_t_v113)) > _g4_s51 ? (128u + sizeof(_g4_t_v113)) : _g4_s51,
    _g4_s53 = (132u + sizeof(_g4_t_v114)) > _g4_s52 ? (132u + sizeof(_g4_t_v114)) : _g4_s52,
    _g4_s54 = (151u + sizeof(_g4_t_v115)) > _g4_s53 ? (151u + sizeof(_g4_t_v115)) : _g4_s53,
    _g4_s55 = (152u + sizeof(_g4_t_v116)) > _g4_s54 ? (152u + sizeof(_g4_t_v116)) : _g4_s54,
    _g4_s56 = (156u + sizeof(_g4_t_v117)) > _g4_s55 ? (156u + sizeof(_g4_t_v117)) : _g4_s55,
    _g4_s57 = (160u + sizeof(_g4_t_v118)) > _g4_s56 ? (160u + sizeof(_g4_t_v118)) : _g4_s56,
    _g4_s58 = (164u + sizeof(_g4_t_v119)) > _g4_s57 ? (164u + sizeof(_g4_t_v119)) : _g4_s57,
    _g4_s59 = (176u + sizeof(_g4_t_v120)) > _g4_s58 ? (176u + sizeof(_g4_t_v120)) : _g4_s58
  };
  alignas(16) uint8_t _g4_sf[_g4_s59];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 52u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 52u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 56u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 56u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 56u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 56u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 56u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 56u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 56u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 56u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 56u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 56u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 60u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 68u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 78u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 80u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 84u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 92u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 92u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 96u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 100u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 100u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 104u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 104u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 104u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 108u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 112u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 112u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 112u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 112u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 116u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 120u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 120u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 120u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 120u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 120u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 124u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 128u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 132u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 151u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 152u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 156u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 160u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 164u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 176u);

  v120 = &a3;
  v86 = a3;
  gluTessEndPolygon(*(GLUtesselator **)(a1 + 60));
  v3 = a1;
  if ( *(uint8_t *)(a1 + 52) != 0
    && (gameswf::TesselatorAccepter::callbackEndTris((gameswf::TesselatorAccepter::Self *)a1, v60),
        v3 = a1,
        *(uint8_t *)(a1 + 52) != 0) )
  {
    v10 = *(uint32_t *)(a1 + 24);
    v88 = (gameswf::array<gameswf::Point::Self> *)(a1 + 20);
    if ( v10 > 2 )
    {
      if ( *(uint8_t *)(a1 + 54) != 0 )
      {
        v11 = *(float **)(a1 + 20);
        v116 = nullptr;
        v117 = 0;
        v118 = 0;
        v119 = 0;
        v115 = 1;
        v12 = &v11[2 * v10 - 2];
        if ( *v11 == *v12 && v11[1] == v12[1] )
        {
          gameswf::array_gameswf_Point_c7983d::resize(v88, v10 - 1);
          v10 = *(uint32_t *)(a1 + 24);
          v90 = 4 * v10;
        }
        else
        {
          v90 = 4 * v10;
          v88 = (gameswf::array<gameswf::Point::Self> *)(a1 + 20);
        }
        v118 = v90;
        if ( v90 != 0 )
        {
          v116 = (gameswf::Self *)gameswf::malloc_internal(8 * v90);
          v10 = *(uint32_t *)(a1 + 24);
          v90 = 4 * v10;
        }
        else
        {
          v116 = nullptr;
        }
        v91 = nullptr;
        if ( v90 != 0 )
        {
          v91 = (gameswf::Self *)gameswf::malloc_internal(v90);
          v10 = *(uint32_t *)(a1 + 24);
        }
        v13 = 3 * v10;
        v14 = 0;
        v101 = 2 * v13;
        if ( 2 * v13 != 0 )
          v14 = gameswf::malloc_internal(4 * v13);
        v15 = v117;
        v16 = *(uint32_t **)(a1 + 20);
        v17 = v117 + 1;
        v107 = v118;
        if ( v117 + 1 > v118 )
        {
          v105 = v17 + (v17 >> 1);
          v118 = v105;
          if ( v105 != 0 )
          {
            v85 = (gameswf::Self *)v14;
            if ( v116 != nullptr )
              v18 = (gameswf::Self *)gameswf::realloc_internal(v116, 8 * v105, 8 * v107);
            else
              v18 = (gameswf::Self *)gameswf::malloc_internal(8 * v105);
            v116 = v18;
            v15 = v117;
            v14 = (int)(uintptr_t)(v85);
          }
          else
          {
            if ( v116 != nullptr )
            {
              v82 = (gameswf::Self *)v14;
              gameswf::free_internal(v116);
              v15 = v117;
              v14 = (int)(uintptr_t)(v82);
            }
            v116 = nullptr;
            v18 = nullptr;
          }
        }
        else
        {
          v18 = v116;
        }
        v108 = (uint32_t *)((char *)v18 + 8 * v15);
        if ( v108 != nullptr )
        {
          v19 = v16[1];
          *v108 = *v16;
          v108[1] = v19;
        }
        v117 = v17;
        if ( v90 <= 0 )
        {
          v84 = (gameswf::Self *)v14;
          if ( v91 != nullptr )
            v91 = (gameswf::Self *)gameswf::realloc_internal(v91, 1u, v90);
          else
            v91 = (gameswf::Self *)gameswf::malloc_internal(1u);
          v90 = 1;
          v14 = (int)(uintptr_t)(v84);
        }
        if ( v91 != nullptr )
          *(uint8_t *)v91 = 1;
        v75 = (gameswf::Self *)v14;
        gameswf::TesselatorAccepter::getEdgeOffset((gameswf::TesselatorAccepter::Self *)&v113, a1, nullptr);
        v106 = v114;
        v20 = v117;
        v102 = v113;
        v21 = v118;
        v22 = v75;
        v23 = v117 + 1;
        if ( v117 + 1 <= v118 || v119 != 0 )
        {
          v24 = v116;
        }
        else
        {
          v59 = v23 + (v23 >> 1);
          v118 = v59;
          if ( v59 != 0 )
          {
            if ( v116 != nullptr )
              v24 = (gameswf::Self *)gameswf::realloc_internal(v116, 8 * v59, 8 * v21);
            else
              v24 = (gameswf::Self *)gameswf::malloc_internal(8 * v59);
            v116 = v24;
            v20 = v117;
            v22 = v75;
          }
          else
          {
            if ( v116 != nullptr )
            {
              gameswf::free_internal(v116);
              v20 = v117;
              v22 = v75;
            }
            v116 = nullptr;
            v24 = nullptr;
          }
        }
        v25 = (int *)((char *)v24 + 8 * v20);
        if ( v25 != nullptr )
        {
          *v25 = v102;
          v25[1] = v106;
        }
        v117 = v23;
        if ( v90 == 1 )
        {
          v83 = v22;
          if ( v91 != nullptr )
            v91 = (gameswf::Self *)gameswf::realloc_internal(v91, 3u, 1u);
          else
            v91 = (gameswf::Self *)gameswf::malloc_internal(3u);
          v90 = 3;
          v22 = v83;
        }
        if ( v91 != (gameswf::Self *)-1 )
          *((uint8_t *)v91 + 1) = 0;
        v109 = *(uint32_t *)(a1 + 24);
        if ( v109 <= 0 )
        {
          v26 = 0;
          v51 = 2;
        }
        else
        {
          v96 = 3;
          v103 = 10;
          v26 = 0;
          v95 = nullptr;
          v27 = v22;
          do
          {
            ++v95;
            v42 = v117;
            v89 = v117 - 2;
            v43 = *(gameswf::Self **)(a1 + 20);
            v99 = v117 + 1;
            v63 = v118;
            if ( v117 + 1 <= v118 || v119 != 0 )
            {
              v28 = v116;
            }
            else
            {
              v94 = (v99 >> 1) + v99;
              v118 = v94;
              if ( v94 != 0 )
              {
                v78 = v43;
                if ( v116 != nullptr )
                  v28 = (gameswf::Self *)gameswf::realloc_internal(v116, 8 * v94, 8 * v63);
                else
                  v28 = (gameswf::Self *)gameswf::malloc_internal(8 * v94);
                v116 = v28;
                v42 = v117;
                v43 = v78;
              }
              else
              {
                if ( v116 != nullptr )
                {
                  v76 = v43;
                  gameswf::free_internal(v116);
                  v42 = v117;
                  v43 = v76;
                }
                v116 = nullptr;
                v28 = nullptr;
              }
            }
            v93 = (uint32_t *)((char *)v28 + 8 * v42);
            if ( v93 != nullptr )
            {
              v29 = *((uint32_t *)v43 + 2 * ((int)(uintptr_t)(v95) % v109) + 1);
              *v93 = *((uint32_t *)v43 + 2 * ((int)(uintptr_t)(v95) % v109));
              v93[1] = v29;
            }
            v117 = v99;
            if ( v96 > v90 )
            {
              if ( (v96 >> 1) + v96 != 0 )
              {
                if ( v91 != nullptr )
                  v91 = (gameswf::Self *)gameswf::realloc_internal(v91, (v96 >> 1) + v96, v90);
                else
                  v91 = (gameswf::Self *)gameswf::malloc_internal((v96 >> 1) + v96);
                v90 = (v96 >> 1) + v96;
              }
              else
              {
                if ( v91 != nullptr )
                  gameswf::free_internal(v91);
                v90 = 0;
                v91 = nullptr;
              }
            }
            v30 = (uint8_t *)((char *)v91 + 2 * (uint32_t)(uintptr_t)(v95));
            if ( v30 != nullptr )
              *v30 = 1;
            gameswf::TesselatorAccepter::getEdgeOffset((gameswf::TesselatorAccepter::Self *)&v113, a1, v95);
            v110 = v113;
            v31 = v117;
            v112 = v114;
            v61 = v117 + 1;
            v32 = v118;
            if ( v117 + 1 <= v118 || v119 != 0 )
            {
              v33 = v116;
            }
            else
            {
              v100 = v61 + (v61 >> 1);
              v118 = v100;
              if ( v100 != 0 )
              {
                if ( v116 != nullptr )
                  v33 = (gameswf::Self *)gameswf::realloc_internal(v116, 8 * v100, 8 * v32);
                else
                  v33 = (gameswf::Self *)gameswf::malloc_internal(8 * v100);
                v116 = v33;
                v31 = v117;
              }
              else
              {
                if ( v116 != nullptr )
                {
                  gameswf::free_internal(v116);
                  v31 = v117;
                }
                v116 = nullptr;
                v33 = nullptr;
              }
            }
            v34 = (int *)((char *)v33 + 8 * v31);
            if ( v34 != nullptr )
            {
              *v34 = v110;
              v34[1] = v112;
            }
            v35 = v96 + 1;
            v117 = v61;
            v98 = v96 + 1;
            if ( v96 + 1 > v90 )
            {
              v50 = (v35 >> 1) + v35;
              if ( v50 != 0 )
              {
                v69 = (float *)((v35 >> 1) + v35);
                if ( v91 != nullptr )
                  v53 = (gameswf::Self *)gameswf::realloc_internal(v91, v50, v90);
                else
                  v53 = (gameswf::Self *)gameswf::malloc_internal((size_t)v69);
                v91 = v53;
                v90 = (int)(uintptr_t)(v69);
              }
              else
              {
                if ( v91 != nullptr )
                  gameswf::free_internal(v91);
                v90 = 0;
                v91 = nullptr;
              }
            }
            if ( (gameswf::Self *)((char *)v91 + v96) != nullptr )
              *((uint8_t *)v91 + v96) = 0;
            if ( v26 + 1 > v101 )
            {
              v36 = v26 + 1;
              v49 = v36 + (v36 >> 1);
              if ( v49 != 0 )
              {
                v70 = (float *)(v36 + (v36 >> 1));
                if ( v27 != nullptr )
                  v54 = (gameswf::Self *)gameswf::realloc_internal(v27, 2 * v49, 2 * v101);
                else
                  v54 = (gameswf::Self *)gameswf::malloc_internal(2 * v49);
                v27 = v54;
                v101 = (int)(uintptr_t)(v70);
              }
              else
              {
                if ( v27 != nullptr )
                  gameswf::free_internal(v27);
                v101 = 0;
                v27 = nullptr;
              }
            }
            v37 = (uint16_t *)((char *)v27 + 2 * v26);
            if ( v37 != nullptr )
              *v37 = v89;
            v38 = v89;
            v62 = v89 + 1;
            if ( v26 + 2 > v101 )
            {
              v48 = ((v26 + 2) >> 1) + v26 + 2;
              if ( v48 != 0 )
              {
                if ( v27 != nullptr )
                  v55 = (gameswf::Self *)gameswf::realloc_internal(v27, 2 * v48, 2 * v101);
                else
                  v55 = (gameswf::Self *)gameswf::malloc_internal(2 * v48);
                v27 = v55;
                v101 = ((v26 + 2) >> 1) + v26 + 2;
                v38 = v89;
              }
              else
              {
                if ( v27 != nullptr )
                {
                  gameswf::free_internal(v27);
                  v38 = v89;
                }
                v101 = 0;
                v27 = nullptr;
              }
            }
            if ( (char *)v27 + v103 != (char *)(intptr_t)(byte_8) )
              *(uint16_t *)((char *)v27 + v103 - 8) = v62;
            v111 = v38 + 2;
            if ( v26 + 3 > v101 )
            {
              v39 = v26 + 3;
              v47 = v39 + (v39 >> 1);
              if ( v47 != 0 )
              {
                v71 = v38;
                v79 = (gameswf::Self *)(v39 + (v39 >> 1));
                if ( v27 != nullptr )
                  v56 = (gameswf::Self *)gameswf::realloc_internal(v27, 2 * v47, 2 * v101);
                else
                  v56 = (gameswf::Self *)gameswf::malloc_internal(2 * v47);
                v27 = v56;
                v101 = (int)(uintptr_t)(v79);
                v38 = v71;
              }
              else
              {
                if ( v27 != nullptr )
                {
                  v67 = v38;
                  gameswf::free_internal(v27);
                  v38 = v67;
                }
                v101 = 0;
                v27 = nullptr;
              }
            }
            if ( (char *)v27 + v103 != (char *)&loc_6 )
              *(uint16_t *)((char *)v27 + v103 - 6) = v111;
            if ( v26 + 4 > v101 )
            {
              v40 = v26 + 4;
              v46 = v40 + (v40 >> 1);
              if ( v46 != 0 )
              {
                v72 = v38;
                v80 = (gameswf::Self *)(v40 + (v40 >> 1));
                if ( v27 != nullptr )
                  v57 = (gameswf::Self *)gameswf::realloc_internal(v27, 2 * v46, 2 * v101);
                else
                  v57 = (gameswf::Self *)gameswf::malloc_internal(2 * v46);
                v27 = v57;
                v101 = (int)(uintptr_t)(v80);
                v38 = v72;
              }
              else
              {
                if ( v27 != nullptr )
                {
                  v66 = v38;
                  gameswf::free_internal(v27);
                  v38 = v66;
                }
                v101 = 0;
                v27 = nullptr;
              }
            }
            if ( (char *)v27 + v103 != (char *)&loc_4 )
              *(uint16_t *)((char *)v27 + v103 - 4) = v62;
            if ( v101 < v26 + 5 )
            {
              v41 = v26 + 5;
              v45 = v41 + (v41 >> 1);
              if ( v45 != 0 )
              {
                v73 = v38;
                v81 = (gameswf::Self *)(v41 + (v41 >> 1));
                if ( v27 != nullptr )
                  v58 = (gameswf::Self *)gameswf::realloc_internal(v27, 2 * v45, 2 * v101);
                else
                  v58 = (gameswf::Self *)gameswf::malloc_internal(2 * v45);
                v27 = v58;
                v101 = (int)(uintptr_t)(v81);
                v38 = v73;
              }
              else
              {
                if ( v27 != nullptr )
                {
                  v65 = v38;
                  gameswf::free_internal(v27);
                  v38 = v65;
                }
                v101 = 0;
                v27 = nullptr;
              }
            }
            if ( (char *)v27 + v103 != (char *)&dword_0 + 2 )
              *(uint16_t *)((char *)v27 + v103 - 2) = v38 + 3;
            v26 += 6;
            if ( v26 > v101 )
            {
              v44 = (v26 >> 1) + v26;
              if ( v44 != 0 )
              {
                if ( v27 != nullptr )
                  v27 = (gameswf::Self *)gameswf::realloc_internal(v27, 2 * v44, 2 * v101);
                else
                  v27 = (gameswf::Self *)gameswf::malloc_internal(2 * v44);
                v101 = (v26 >> 1) + v26;
              }
              else
              {
                if ( v27 != nullptr )
                  gameswf::free_internal(v27);
                v101 = 0;
                v27 = nullptr;
              }
            }
            if ( (gameswf::Self *)((char *)v27 + v103) != nullptr )
              *(uint16_t *)((char *)v27 + v103) = v111;
            v103 += 12;
            v96 += 2;
            v109 = *(uint32_t *)(a1 + 24);
          }
          while ( (int)(uintptr_t)(v95) < v109 );
          v22 = v27;
          v51 = v98;
        }
        v77 = v22;
        v104 = 2 * v117;
        v97 = (float *)v116;
        v68 = v115;
        MutableMesh = (gameswf::Mesh::Self *)gameswf::MeshSet::getMutableMesh(a2, v86);
        gameswf::Mesh::addAATriangles(
          MutableMesh,
          v97,
          (const bool *)v91,
          v104,
          (const uint16_t *)v77,
          v26,
          v68);
        if ( v77 != nullptr )
          gameswf::free_internal(v77);
        if ( v51 < 0 )
        {
          do
          {
            if ( (gameswf::Self *)((char *)v91 + v51) != nullptr )
              *((uint8_t *)v91 + v51) = 0;
            ++v51;
          }
          while ( v51 != 0 );
        }
        if ( v91 != nullptr )
          gameswf::free_internal(v91);
        gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)&v116, 0);
        if ( v119 == 0 )
        {
          v118 = 0;
          if ( v116 != nullptr )
            gameswf::free_internal(v116);
          v116 = nullptr;
        }
      }
      else
      {
        gameswf::MeshSet::addLineStrip(a2, v86, *(const gameswf::Point::Self **)(a1 + 20), v10);
      }
    }
  }
  else if ( *(uint8_t *)(v3 + 53) != 0 )
  {
    v4 = v3;
    v5 = *(uint32_t *)(v3 + 24);
    v88 = (gameswf::array<gameswf::Point::Self> *)(v4 + 20);
    if ( v5 > 0 )
      gameswf::MeshSet::setTriStrip(a2, v86, *(const gameswf::Point::Self **)(v4 + 20), v5);
  }
  else
  {
    v7 = *(uint32_t *)(v3 + 24);
    v88 = (gameswf::array<gameswf::Point::Self> *)(v3 + 20);
    if ( v7 > 0 )
    {
      v8 = *(uint32_t *)(v3 + 40);
      v64 = *(float **)(v3 + 20);
      v74 = *(gameswf::Self **)(v3 + 36);
      v9 = (gameswf::Mesh::Self *)gameswf::MeshSet::getMutableMesh(a2, v86);
      gameswf::Mesh::setTriangles(v9, v64, 2 * v7, (const uint16_t *)v74, v8);
    }
  }
  return gameswf::array_gameswf_Point_c7983d::resize(v88, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_10F1A40  (binary VA: 0x10f1a40)
// Original: sub_10F1A40
// ----------------------------------------------------------------------------
int sub_10F1A40(int a1, gameswf::MeshSet::Self *a2, uint32_t *a3)
{
  uint32_t *v3;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  gameswf::Self *v12;
  int v13;
  int v14;
  uint16_t *v15;
  int v16;
  int v17;
  int v18;
  float *v19;
  int v20;
  float *v21;
  int i;
  float *v23;
  int v24;
  double v25; // xmm1_8
  double *v26;
  int v27;
  double v28; // xmm0_8
  double v29; // xmm1_8
  int v30;
  int v31;
  char *v32;
  float *v33;
  float v34; // xmm1_4
  float v35; // xmm0_4
  int v36;
  float *v37;
  float *v38;
  int v40;
  gameswf::Self *v41;
  uint32_t *v42;
  int v43;
  int v44;
  uint32_t *v45;
  int v46;
  gameswf::Self *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v55;
  int v56;
  gameswf::array<gameswf::Point::Self> *v58;

  v3 = a3;
  if ( *(uint8_t *)a1 == 0 )
  {
    v5 = *(uint32_t *)(a1 + 16) - 1;
    v52 = v5;
    if ( v5 >= 0 )
    {
      v6 = a1;
      v50 = 20 * v5;
      do
      {
        if ( (uint8_t)gameswf::FinalShape::mergeSegment(v6, *(uint32_t *)(v6 + 12) + v50) != 0 )
        {
          if ( *(uint32_t *)(v6 + 16) == 1 )
          {
            v42 = *(uint32_t **)(v6 + 12);
            v43 = v42[2];
            if ( v43 < 0 )
            {
              v44 = 8 * v43;
              do
              {
                v45 = (uint32_t *)(v42[1] + v44);
                if ( v45 != nullptr )
                {
                  *v45 = 0;
                  v45[1] = 0;
                }
                v44 += 8;
                ++v43;
              }
              while ( v43 != 0 );
            }
            v46 = v42[4];
            v42[2] = 0;
            if ( v46 == 0 )
            {
              v47 = (gameswf::Self *)v42[1];
              v42[3] = 0;
              if ( v47 != nullptr )
                gameswf::free_internal(v47);
              v42[1] = 0;
            }
            *(uint32_t *)(v6 + 16) = 0;
          }
          else
          {
            v7 = (uint32_t *)(*(uint32_t *)(v6 + 12) + v50);
            v8 = v7[2];
            if ( v8 < 0 )
            {
              v9 = 8 * v8;
              do
              {
                v10 = (uint32_t *)(v7[1] + v9);
                if ( v10 != nullptr )
                {
                  *v10 = 0;
                  v10[1] = 0;
                }
                v9 += 8;
                ++v8;
              }
              while ( v8 != 0 );
            }
            v11 = v7[4];
            v7[2] = 0;
            if ( v11 == 0 )
            {
              v12 = (gameswf::Self *)v7[1];
              v7[3] = 0;
              if ( v12 != nullptr )
                gameswf::free_internal(v12);
              v7[1] = 0;
            }
            memmove(
              (void *)(v50 + *(uint32_t *)(v6 + 12)),
              (const void *)(*(uint32_t *)(v6 + 12) + v50 + 20),
              20 * (*(uint32_t *)(v6 + 16) + ~v52));
            --*(uint32_t *)(v6 + 16);
          }
        }
        --v52;
        v50 -= 20;
      }
      while ( v52 != -1 );
      v3 = a3;
    }
  }
  dword_21155C0 = 0;
  v58 = (gameswf::array<gameswf::Point::Self> *)(v3 + 1);
  gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v3 + 1), 0);
  gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v3 + 5), 0);
  v13 = v3[10];
  if ( v13 < 0 )
  {
    v14 = 2 * v13;
    do
    {
      v15 = (uint16_t *)(v3[9] + v14);
      if ( v15 != nullptr )
        *v15 = 0;
      v14 += 2;
      ++v13;
    }
    while ( v13 != 0 );
  }
  v3[10] = 0;
  gluTessBeginPolygon((GLUtesselator *)v3[15], v3);
  if ( *((uint8_t *)v3 + 52) != 0 )
  {
    *v3 = 3;
    gameswf::array_gameswf_Point_c7983d::resize(v58, 0);
  }
  gluTessBeginContour((GLUtesselator *)v3[15]);
  if ( *(int *)(a1 + 16) > 0 )
  {
    v56 = 0;
    v55 = 0;
    v16 = a1;
    do
    {
      v17 = *(uint32_t *)(v16 + 12) + v56;
      v51 = v17;
      v18 = *(uint32_t *)(v17 + 8);
      v53 = v18;
      if ( *(uint8_t *)v16 == 0 )
      {
        v19 = *(float **)(v17 + 4);
        v20 = v18 - 1;
        v21 = &v19[2 * v18 - 2];
        if ( *v19 == *v21 )
        {
          if ( v19[1] != v21[1] )
            v20 = v18;
          v53 = v20;
        }
      }
      *((uint8_t *)v3 + 55) = *(uint8_t *)v51;
      if ( v53 > 0 )
      {
        for ( i = 0; i != v53; ++i )
        {
          while ( 1 )
          {
            v23 = (float *)(*(uint32_t *)(v51 + 4) + 8 * i);
            v24 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5B5C4)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
            v25 = *v23;
            v26 = (double *)((char *)&unk_20E55C0 + 24 * v24);
            v26[1] = v23[1];
            *((uint32_t *)v26 + 4) = 0;
            *((uint32_t *)v26 + 5) = 0;
            *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5B5C4)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4)) = v24 + 1;
            *v26 = v25;
            if ( *((uint8_t *)v3 + 52) != 0 )
              break;
            ++i;
            gluTessVertex((GLUtesselator *)v3[15], v26, v26);
            if ( i == v53 )
              goto LABEL_41;
          }
          v27 = v3[2];
          v28 = v26[1];
          v29 = *v26;
          v30 = v3[3];
          v31 = v27 + 1;
          if ( v27 + 1 <= v30 || v3[4] != 0 )
          {
            v32 = (char *)v3[1];
          }
          else
          {
            v40 = v31 + (v31 >> 1);
            v3[3] = v40;
            if ( v40 != 0 )
            {
              v49 = v27 + 1;
              if ( v3[1] != 0 )
                v32 = (char *)gameswf::realloc_internal((gameswf::Self *)v3[1], 8 * v40, 8 * v30);
              else
                v32 = (char *)gameswf::malloc_internal(8 * v40);
              v3[1] = (uint32_t)(uintptr_t)(v32);
              v27 = v3[2];
              v31 = v49;
            }
            else
            {
              v41 = (gameswf::Self *)v3[1];
              if ( v41 != nullptr )
              {
                v48 = v27 + 1;
                gameswf::free_internal(v41);
                v27 = v3[2];
                v31 = v48;
              }
              v3[1] = 0;
              v32 = nullptr;
            }
          }
          v33 = (float *)&v32[8 * v27];
          if ( v33 != nullptr )
          {
            v34 = v29 * 0.05;
            v35 = v28 * 0.05;
            *v33 = v34;
            v33[1] = v35;
          }
          v3[2] = v31;
        }
      }
LABEL_41:
      v36 = *(uint32_t *)(v51 + 8);
      if ( v36 > 0 )
      {
        v37 = *(float **)(v51 + 4);
        v38 = &v37[2 * v36 - 2];
        if ( *v37 == *v38 && v37[1] == v38[1] )
        {
          gluTessEndContour((GLUtesselator *)v3[15]);
          if ( *((uint8_t *)v3 + 52) != 0 )
          {
            sub_10F0980((int)(uintptr_t)(v3), a2, *(uint32_t *)(a1 + 4));
            gluTessBeginPolygon((GLUtesselator *)v3[15], v3);
            if ( *((uint8_t *)v3 + 52) != 0 )
            {
              *v3 = 3;
              gameswf::array_gameswf_Point_c7983d::resize(v58, 0);
            }
          }
          gluTessBeginContour((GLUtesselator *)v3[15]);
        }
      }
      v16 = a1;
      ++v55;
      v56 += 20;
    }
    while ( v55 < *(uint32_t *)(a1 + 16) );
  }
  gluTessEndContour((GLUtesselator *)v3[15]);
  return sub_10F0980((int)(uintptr_t)(v3), a2, *(uint32_t *)(a1 + 4));
}

// ----------------------------------------------------------------------------
// Function: sub_10F9100  (binary VA: 0x10f9100)
// Original: sub_10F9100
// ----------------------------------------------------------------------------
void sub_10F9100()
{
  dword_21155C0 = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_10F9450  (binary VA: 0x10f9450)
// Original: sub_10F9450
// ----------------------------------------------------------------------------
char * sub_10F9450()
{
  dword_20D6388 |= 0x7FFFFFu;
  byte_20D6378 = 1;
  byte_20D6379 = 0;
  BYTE2(dword_20D6388) &= ~0x80u;
  HIBYTE(dword_20D6388) |= 1u;
  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
  __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
  return (char *)(&byte_20D6378);
}

// ----------------------------------------------------------------------------
// Function: sub_10F9840  (binary VA: 0x10f9840)
// Original: sub_10F9840
// ----------------------------------------------------------------------------
int sub_10F9840()
{
  void *v0;
  int v1;
  int v2;
  int v3;
  int result;

  v0 = (void *)(dword_21155F0 - 12);
  if ( (uint32_t *)(dword_21155F0 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(dword_21155F0 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v0);
  }
  v1 = dword_21155EC;
  if ( (uint32_t *)(dword_21155EC - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(dword_21155EC - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = dword_21155E8;
  if ( (uint32_t *)(dword_21155E8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(dword_21155E8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = dword_21155E4;
  if ( (uint32_t *)(dword_21155E4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(dword_21155E4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  result = (int)(uintptr_t)(dword_21155E0);
  if ( (uint32_t *)(dword_21155E0 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(dword_21155E0 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy((void *)(result - 12))), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10F9960  (binary VA: 0x10f9960)
// Original: sub_10F9960
// ----------------------------------------------------------------------------
int sub_10F9960(int result, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v10;

  v2 = (int *)result;
  v3 = *(uint32_t *)(result + 4);
  if ( v3 > a2 )
  {
    v10 = (int *)result;
    v4 = a2;
    v5 = 84 * a2;
    do
    {
      v6 = v5;
      ++v4;
      v5 += 84;
      result = (**(int (***)(int))(*v10 + v6))(*v10 + v6);
    }
    while ( v4 != v3 );
    v2 = v10;
  }
  if ( a2 != 0 )
  {
    result = v2[2];
    if ( a2 > result && v2[3] == 0 )
    {
      v8 = a2 + (a2 >> 1);
      v2[2] = v8;
      if ( v8 != 0 )
      {
        if ( *v2 != 0 )
          result = (int)(uintptr_t)(gameswf::realloc_internal((gameswf::Self *)*v2, 84 * v8, 84 * result));
        else
          result = gameswf::malloc_internal(84 * v8);
        *v2 = result;
      }
      else
      {
        if ( *v2 != 0 )
          result = gameswf::free_internal((gameswf::Self *)*v2);
        *v2 = 0;
      }
    }
  }
  if ( v3 < a2 )
  {
    v7 = 84 * v3;
    do
    {
      result = *v2 + v7;
      if ( result != 0 )
        result = (int)(uintptr_t)(gameswf::FillStyle::FillStyle((gameswf::FillStyle::Self *)(*v2 + v7)));
      ++v3;
      v7 += 84;
    }
    while ( v3 != a2 );
  }
  v2[1] = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10F9B70  (binary VA: 0x10f9b70)
// Original: sub_10F9B70
// ----------------------------------------------------------------------------
uint16_t * sub_10F9B70(int a1, uint32_t *a2)
{
  int v2;
  int v4;
  int v5;
  gameswf::Self *v6;
  uint16_t *result;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  v2 = *(uint32_t *)(a1 + 4);
  v4 = *(uint32_t *)(a1 + 8);
  v5 = v2 + 1;
  if ( v2 + 1 <= v4 || *(uint32_t *)(a1 + 12) != 0 )
  {
    v6 = *(gameswf::Self **)a1;
  }
  else
  {
    v8 = v5 + (v5 >> 1);
    *(uint32_t *)(a1 + 8) = v8;
    if ( v8 != 0 )
    {
      v10 = a2;
      if ( *(uint32_t *)a1 != 0 )
        v6 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)a1, 2 * v8, 2 * v4);
      else
        v6 = (gameswf::Self *)gameswf::malloc_internal(2 * v8);
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v6);
      v2 = *(uint32_t *)(a1 + 4);
      a2 = v10;
    }
    else
    {
      if ( *(uint32_t *)a1 != 0 )
      {
        v9 = a2;
        gameswf::free_internal(*(gameswf::Self **)a1);
        v2 = *(uint32_t *)(a1 + 4);
        a2 = v9;
      }
      *(uint32_t *)a1 = 0;
      v6 = nullptr;
    }
  }
  result = (uint16_t *)((char *)v6 + 2 * v2);
  if ( result != nullptr )
    *result = *a2;
  *(uint32_t *)(a1 + 4) = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_10F9C70  (binary VA: 0x10f9c70)
// Original: sub_10F9C70
// ----------------------------------------------------------------------------
gameswf::Self * sub_10F9C70(gameswf::Self *result, uint32_t *a2, long double PixelScale, int a4, float *a5, unsigned int *a6, uint8_t a7, uint8_t a8, uint8_t a9, gameswf::Self **a10, int a11)
{
  int v11;
  int v12;
  int v13;
  bool v14; // di
  __m128 v15;
  __m128 v16;
  __m128 v17;
  float v18; // xmm2_4
  __m128 v19;
  __m128 v20;
  float v21; // xmm3_4
  float v22; // xmm0_4
  bool v23;
  float v24; // xmm1_4
  float v25; // xmm0_4
  float *v26;
  uint32_t *v27;
  int v28;
  int v29;
  float v30; // xmm0_4
  gameswf::Self *v31;
  char v32;
  char v33; // si
  unsigned int *v34;
  uint16_t v35; // kr00_2
  int v36;
  int16_t v37; // kr02_2
  int v38;
  __m128 v39;
  __m128 v40;
  __m128 v41;
  int16_t v42;
  float v43; // xmm1_4
  __m128 v44;
  float v45; // xmm1_4
  __m128 v46;
  int v47; // xmm0_4
  __m128 v48;
  __m128 v49;
  float v50; // xmm1_4
  uint32_t v51; // xmm2_4
  __m128 v52;
  __m128 v53;
  __m128 v54;
  __m128 v55;
  int v56;
  int v57;
  __m128 v58;
  __m128 v59;
  int v60;
  __m128 v61;
  __m128 v62;
  __m128 v63;
  __m128 v64;
  __m128 v65;
  __m128 v66;
  int v67;
  int v68; // xmm7_4
  float v69; // xmm2_4
  float v70; // xmm6_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm6_4
  int v74; // xmm7_4
  float v75; // xmm2_4
  __m128 v76;
  __m128 v77;
  float v78; // xmm0_4
  float v79; // xmm4_4
  int v80;
  int v81;
  void (***v82)(uint32_t);
  gameswf::RefCounted::Self *v83;
  int v84; // xmm0_4
  int16_t v85;
  gameswf::ShapeCharacterDef::Self *GlyphByIndex;
  gameswf::Root::Self *Root;
  int32_t v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int StandardMemberID;
  int v95;
  __m128 v96;
  __m128 v97;
  int v98;
  int v99;
  float v100; // xmm0_4
  int v101;
  int v102;
  float v103; // xmm0_4
  int v104;
  float v105; // xmm0_4
  int v106;
  float v107; // xmm0_4
  int v108;
  float v109; // xmm0_4
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  gameswf::RefCounted::Self *v116;
  __m128 v117;
  __m128 v118;
  float v119; // xmm7_4
  gameswf::Point::Self *v120; // xmm2_4
  float v121; // xmm3_4
  float v122; // xmm5_4
  float v123; // xmm6_4
  __m128 v124;
  __m128 v125;
  float v126; // xmm0_4
  __m128 v127;
  float v128; // xmm0_4
  __m128 v129;
  int v130; // xmm0_4
  int v131; // xmm3_4
  int v132; // xmm7_4
  int v133; // xmm4_4
  __m128 v134;
  int v135; // xmm0_4
  __m128 v136;
  int v137; // xmm0_4
  float v138; // xmm3_4
  __m128 v139;
  int v140; // xmm2_4
  int v141; // xmm1_4
  int v142;
  int v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  typedef float *_g4_t_v153;
  typedef uint8_t _g4_t_v154;
  typedef bool _g4_t_v155;
  typedef uint8_t _g4_t_v156;
  typedef char _g4_t_v157;
  typedef gameswf::Self **_g4_t_v158;
  typedef float *_g4_t_v159;
  typedef gameswf::Player::Self **_g4_t_v160;
  typedef unsigned int *_g4_t_v161;
  typedef float *_g4_t_v163;
  typedef float _g4_t_v164;
  typedef unsigned int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef gameswf::TextureCache::Self *_g4_t_v168;
  typedef float _g4_t_v169;
  typedef gameswf::Font::Self *_g4_t_v170;
  typedef int _g4_t_v171;
  typedef float _g4_t_v172;
  typedef float _g4_t_v173;
  typedef uint32_t _g4_t_v174;
  typedef unsigned int _g4_t_v175;
  typedef int32_t _g4_t_v176;
  typedef uint32_t _g4_t_v177;
  typedef float _g4_t_v178;
  typedef float _g4_t_v179;
  typedef float _g4_t_v180;
  typedef int _g4_t_v181;
  typedef int _g4_t_v182;
  typedef int64_t _g4_t_v183 __attribute__((aligned(1)));
  typedef int _g4_t_v184;
  typedef uint32_t _g4_t_v185[7];
  typedef float _g4_t_v186;
  typedef float _g4_t_v187;
  typedef float _g4_t_v188;
  typedef float _g4_t_v189;
  typedef float _g4_t_v190;
  typedef unsigned int _g4_t_v191;
  typedef float _g4_t_v192;
  typedef float _g4_t_v193;
  typedef float _g4_t_v194;
  typedef unsigned int _g4_t_v195;
  typedef float _g4_t_v196;
  typedef float _g4_t_x;
  typedef float _g4_t_xa;
  typedef float _g4_t_xb;
  typedef char _g4_t_v200;
  typedef char _g4_t_v201;
  typedef gameswf::RenderHandler::Self *_g4_t_v202;
  typedef int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef float _g4_t_v205;
  typedef float _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef float _g4_t_v209;
  typedef int _g4_t_v210;
  typedef int *_g4_t_v211;
  typedef gameswf::Point::Self *_g4_t_v212;
  typedef int _g4_t_v213;
  typedef uint8_t _g4_t_v214;
  typedef char _g4_t_v215;
  typedef int _g4_t_v216;
  typedef int _g4_t_v217;
  typedef unsigned int _g4_t_v218;
  typedef uint8_t _g4_t_v219[6];
  typedef uint16_t _g4_t_v220[6];
  typedef __m128 _g4_t_v221;
  typedef int _g4_t_v222;
  typedef float _g4_t_v223;
  typedef float _g4_t_v224;
  typedef float _g4_t_v225;
  typedef int _g4_t_v226[8];
  typedef gameswf::Point::Self *_g4_t_v227[8];
  typedef int _g4_t_v228[16];
  typedef int _g4_t_v229[16];
  typedef uint8_t _g4_t_v230[64];
  typedef gameswf::Self *_g4_t_v231[16];
  typedef gameswf::Self *_g4_t_v232[2];
  typedef int _g4_t_v233;
  typedef int _g4_t_v234;
  typedef char _g4_t_v235;
  typedef gameswf::Self *_g4_t_v236;
  typedef int _g4_t_v237;
  typedef int _g4_t_v238;
  typedef int _g4_t_v239;
  typedef uint32_t _g4_t_v240[34];
  enum : size_t {
    _g4_s0 = 1120u,
    _g4_s1 = (12u + sizeof(_g4_t_v144)) > _g4_s0 ? (12u + sizeof(_g4_t_v144)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v145)) > _g4_s1 ? (44u + sizeof(_g4_t_v145)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v146)) > _g4_s2 ? (44u + sizeof(_g4_t_v146)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v147)) > _g4_s3 ? (44u + sizeof(_g4_t_v147)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v148)) > _g4_s4 ? (80u + sizeof(_g4_t_v148)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v149)) > _g4_s5 ? (84u + sizeof(_g4_t_v149)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v150)) > _g4_s6 ? (88u + sizeof(_g4_t_v150)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v151)) > _g4_s7 ? (92u + sizeof(_g4_t_v151)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v152)) > _g4_s8 ? (96u + sizeof(_g4_t_v152)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v153)) > _g4_s9 ? (104u + sizeof(_g4_t_v153)) : _g4_s9,
    _g4_s11 = (109u + sizeof(_g4_t_v154)) > _g4_s10 ? (109u + sizeof(_g4_t_v154)) : _g4_s10,
    _g4_s12 = (110u + sizeof(_g4_t_v155)) > _g4_s11 ? (110u + sizeof(_g4_t_v155)) : _g4_s11,
    _g4_s13 = (111u + sizeof(_g4_t_v156)) > _g4_s12 ? (111u + sizeof(_g4_t_v156)) : _g4_s12,
    _g4_s14 = (111u + sizeof(_g4_t_v157)) > _g4_s13 ? (111u + sizeof(_g4_t_v157)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v158)) > _g4_s14 ? (112u + sizeof(_g4_t_v158)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v159)) > _g4_s15 ? (116u + sizeof(_g4_t_v159)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v160)) > _g4_s16 ? (120u + sizeof(_g4_t_v160)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v161)) > _g4_s17 ? (124u + sizeof(_g4_t_v161)) : _g4_s17,
    _g4_s19 = (132u + sizeof(_g4_t_v163)) > _g4_s18 ? (132u + sizeof(_g4_t_v163)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v164)) > _g4_s19 ? (136u + sizeof(_g4_t_v164)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v165)) > _g4_s20 ? (140u + sizeof(_g4_t_v165)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v166)) > _g4_s21 ? (176u + sizeof(_g4_t_v166)) : _g4_s21,
    _g4_s23 = (180u + sizeof(_g4_t_v167)) > _g4_s22 ? (180u + sizeof(_g4_t_v167)) : _g4_s22,
    _g4_s24 = (184u + sizeof(_g4_t_v168)) > _g4_s23 ? (184u + sizeof(_g4_t_v168)) : _g4_s23,
    _g4_s25 = (188u + sizeof(_g4_t_v169)) > _g4_s24 ? (188u + sizeof(_g4_t_v169)) : _g4_s24,
    _g4_s26 = (192u + sizeof(_g4_t_v170)) > _g4_s25 ? (192u + sizeof(_g4_t_v170)) : _g4_s25,
    _g4_s27 = (196u + sizeof(_g4_t_v171)) > _g4_s26 ? (196u + sizeof(_g4_t_v171)) : _g4_s26,
    _g4_s28 = (200u + sizeof(_g4_t_v172)) > _g4_s27 ? (200u + sizeof(_g4_t_v172)) : _g4_s27,
    _g4_s29 = (204u + sizeof(_g4_t_v173)) > _g4_s28 ? (204u + sizeof(_g4_t_v173)) : _g4_s28,
    _g4_s30 = (208u + sizeof(_g4_t_v174)) > _g4_s29 ? (208u + sizeof(_g4_t_v174)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v175)) > _g4_s30 ? (212u + sizeof(_g4_t_v175)) : _g4_s30,
    _g4_s32 = (216u + sizeof(_g4_t_v176)) > _g4_s31 ? (216u + sizeof(_g4_t_v176)) : _g4_s31,
    _g4_s33 = (220u + sizeof(_g4_t_v177)) > _g4_s32 ? (220u + sizeof(_g4_t_v177)) : _g4_s32,
    _g4_s34 = (224u + sizeof(_g4_t_v178)) > _g4_s33 ? (224u + sizeof(_g4_t_v178)) : _g4_s33,
    _g4_s35 = (228u + sizeof(_g4_t_v179)) > _g4_s34 ? (228u + sizeof(_g4_t_v179)) : _g4_s34,
    _g4_s36 = (232u + sizeof(_g4_t_v180)) > _g4_s35 ? (232u + sizeof(_g4_t_v180)) : _g4_s35,
    _g4_s37 = (236u + sizeof(_g4_t_v181)) > _g4_s36 ? (236u + sizeof(_g4_t_v181)) : _g4_s36,
    _g4_s38 = (240u + sizeof(_g4_t_v182)) > _g4_s37 ? (240u + sizeof(_g4_t_v182)) : _g4_s37,
    _g4_s39 = (244u + sizeof(_g4_t_v183)) > _g4_s38 ? (244u + sizeof(_g4_t_v183)) : _g4_s38,
    _g4_s40 = (256u + sizeof(_g4_t_v184)) > _g4_s39 ? (256u + sizeof(_g4_t_v184)) : _g4_s39,
    _g4_s41 = (264u + sizeof(_g4_t_v185)) > _g4_s40 ? (264u + sizeof(_g4_t_v185)) : _g4_s40,
    _g4_s42 = (280u + sizeof(_g4_t_v186)) > _g4_s41 ? (280u + sizeof(_g4_t_v186)) : _g4_s41,
    _g4_s43 = (288u + sizeof(_g4_t_v187)) > _g4_s42 ? (288u + sizeof(_g4_t_v187)) : _g4_s42,
    _g4_s44 = (296u + sizeof(_g4_t_v188)) > _g4_s43 ? (296u + sizeof(_g4_t_v188)) : _g4_s43,
    _g4_s45 = (304u + sizeof(_g4_t_v189)) > _g4_s44 ? (304u + sizeof(_g4_t_v189)) : _g4_s44,
    _g4_s46 = (304u + sizeof(_g4_t_v190)) > _g4_s45 ? (304u + sizeof(_g4_t_v190)) : _g4_s45,
    _g4_s47 = (312u + sizeof(_g4_t_v191)) > _g4_s46 ? (312u + sizeof(_g4_t_v191)) : _g4_s46,
    _g4_s48 = (312u + sizeof(_g4_t_v192)) > _g4_s47 ? (312u + sizeof(_g4_t_v192)) : _g4_s47,
    _g4_s49 = (320u + sizeof(_g4_t_v193)) > _g4_s48 ? (320u + sizeof(_g4_t_v193)) : _g4_s48,
    _g4_s50 = (320u + sizeof(_g4_t_v194)) > _g4_s49 ? (320u + sizeof(_g4_t_v194)) : _g4_s49,
    _g4_s51 = (328u + sizeof(_g4_t_v195)) > _g4_s50 ? (328u + sizeof(_g4_t_v195)) : _g4_s50,
    _g4_s52 = (328u + sizeof(_g4_t_v196)) > _g4_s51 ? (328u + sizeof(_g4_t_v196)) : _g4_s51,
    _g4_s53 = (336u + sizeof(_g4_t_x)) > _g4_s52 ? (336u + sizeof(_g4_t_x)) : _g4_s52,
    _g4_s54 = (336u + sizeof(_g4_t_xa)) > _g4_s53 ? (336u + sizeof(_g4_t_xa)) : _g4_s53,
    _g4_s55 = (336u + sizeof(_g4_t_xb)) > _g4_s54 ? (336u + sizeof(_g4_t_xb)) : _g4_s54,
    _g4_s56 = (345u + sizeof(_g4_t_v200)) > _g4_s55 ? (345u + sizeof(_g4_t_v200)) : _g4_s55,
    _g4_s57 = (346u + sizeof(_g4_t_v201)) > _g4_s56 ? (346u + sizeof(_g4_t_v201)) : _g4_s56,
    _g4_s58 = (348u + sizeof(_g4_t_v202)) > _g4_s57 ? (348u + sizeof(_g4_t_v202)) : _g4_s57,
    _g4_s59 = (352u + sizeof(_g4_t_v203)) > _g4_s58 ? (352u + sizeof(_g4_t_v203)) : _g4_s58,
    _g4_s60 = (356u + sizeof(_g4_t_v204)) > _g4_s59 ? (356u + sizeof(_g4_t_v204)) : _g4_s59,
    _g4_s61 = (360u + sizeof(_g4_t_v205)) > _g4_s60 ? (360u + sizeof(_g4_t_v205)) : _g4_s60,
    _g4_s62 = (364u + sizeof(_g4_t_v206)) > _g4_s61 ? (364u + sizeof(_g4_t_v206)) : _g4_s61,
    _g4_s63 = (368u + sizeof(_g4_t_v207)) > _g4_s62 ? (368u + sizeof(_g4_t_v207)) : _g4_s62,
    _g4_s64 = (372u + sizeof(_g4_t_v208)) > _g4_s63 ? (372u + sizeof(_g4_t_v208)) : _g4_s63,
    _g4_s65 = (376u + sizeof(_g4_t_v209)) > _g4_s64 ? (376u + sizeof(_g4_t_v209)) : _g4_s64,
    _g4_s66 = (376u + sizeof(_g4_t_v210)) > _g4_s65 ? (376u + sizeof(_g4_t_v210)) : _g4_s65,
    _g4_s67 = (376u + sizeof(_g4_t_v211)) > _g4_s66 ? (376u + sizeof(_g4_t_v211)) : _g4_s66,
    _g4_s68 = (376u + sizeof(_g4_t_v212)) > _g4_s67 ? (376u + sizeof(_g4_t_v212)) : _g4_s67,
    _g4_s69 = (380u + sizeof(_g4_t_v213)) > _g4_s68 ? (380u + sizeof(_g4_t_v213)) : _g4_s68,
    _g4_s70 = (384u + sizeof(_g4_t_v214)) > _g4_s69 ? (384u + sizeof(_g4_t_v214)) : _g4_s69,
    _g4_s71 = (384u + sizeof(_g4_t_v215)) > _g4_s70 ? (384u + sizeof(_g4_t_v215)) : _g4_s70,
    _g4_s72 = (384u + sizeof(_g4_t_v216)) > _g4_s71 ? (384u + sizeof(_g4_t_v216)) : _g4_s71,
    _g4_s73 = (384u + sizeof(_g4_t_v217)) > _g4_s72 ? (384u + sizeof(_g4_t_v217)) : _g4_s72,
    _g4_s74 = (396u + sizeof(_g4_t_v218)) > _g4_s73 ? (396u + sizeof(_g4_t_v218)) : _g4_s73,
    _g4_s75 = (414u + sizeof(_g4_t_v219)) > _g4_s74 ? (414u + sizeof(_g4_t_v219)) : _g4_s74,
    _g4_s76 = (420u + sizeof(_g4_t_v220)) > _g4_s75 ? (420u + sizeof(_g4_t_v220)) : _g4_s75,
    _g4_s77 = (432u + sizeof(_g4_t_v221)) > _g4_s76 ? (432u + sizeof(_g4_t_v221)) : _g4_s76,
    _g4_s78 = (448u + sizeof(_g4_t_v222)) > _g4_s77 ? (448u + sizeof(_g4_t_v222)) : _g4_s77,
    _g4_s79 = (452u + sizeof(_g4_t_v223)) > _g4_s78 ? (452u + sizeof(_g4_t_v223)) : _g4_s78,
    _g4_s80 = (456u + sizeof(_g4_t_v224)) > _g4_s79 ? (456u + sizeof(_g4_t_v224)) : _g4_s79,
    _g4_s81 = (460u + sizeof(_g4_t_v225)) > _g4_s80 ? (460u + sizeof(_g4_t_v225)) : _g4_s80,
    _g4_s82 = (464u + sizeof(_g4_t_v226)) > _g4_s81 ? (464u + sizeof(_g4_t_v226)) : _g4_s81,
    _g4_s83 = (496u + sizeof(_g4_t_v227)) > _g4_s82 ? (496u + sizeof(_g4_t_v227)) : _g4_s82,
    _g4_s84 = (528u + sizeof(_g4_t_v228)) > _g4_s83 ? (528u + sizeof(_g4_t_v228)) : _g4_s83,
    _g4_s85 = (592u + sizeof(_g4_t_v229)) > _g4_s84 ? (592u + sizeof(_g4_t_v229)) : _g4_s84,
    _g4_s86 = (656u + sizeof(_g4_t_v230)) > _g4_s85 ? (656u + sizeof(_g4_t_v230)) : _g4_s85,
    _g4_s87 = (720u + sizeof(_g4_t_v231)) > _g4_s86 ? (720u + sizeof(_g4_t_v231)) : _g4_s86,
    _g4_s88 = (784u + sizeof(_g4_t_v232)) > _g4_s87 ? (784u + sizeof(_g4_t_v232)) : _g4_s87,
    _g4_s89 = (792u + sizeof(_g4_t_v233)) > _g4_s88 ? (792u + sizeof(_g4_t_v233)) : _g4_s88,
    _g4_s90 = (796u + sizeof(_g4_t_v234)) > _g4_s89 ? (796u + sizeof(_g4_t_v234)) : _g4_s89,
    _g4_s91 = (800u + sizeof(_g4_t_v235)) > _g4_s90 ? (800u + sizeof(_g4_t_v235)) : _g4_s90,
    _g4_s92 = (896u + sizeof(_g4_t_v236)) > _g4_s91 ? (896u + sizeof(_g4_t_v236)) : _g4_s91,
    _g4_s93 = (900u + sizeof(_g4_t_v237)) > _g4_s92 ? (900u + sizeof(_g4_t_v237)) : _g4_s92,
    _g4_s94 = (904u + sizeof(_g4_t_v238)) > _g4_s93 ? (904u + sizeof(_g4_t_v238)) : _g4_s93,
    _g4_s95 = (908u + sizeof(_g4_t_v239)) > _g4_s94 ? (908u + sizeof(_g4_t_v239)) : _g4_s94,
    _g4_s96 = (912u + sizeof(_g4_t_v240)) > _g4_s95 ? (912u + sizeof(_g4_t_v240)) : _g4_s95
  };
  alignas(16) uint8_t _g4_sf[_g4_s96];
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 12u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 44u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 44u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 44u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 80u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 84u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 88u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 92u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 96u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 104u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 109u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 110u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 111u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 111u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 112u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 116u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 120u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 124u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 132u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 136u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 140u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 176u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 180u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 184u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 188u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 192u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 196u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 200u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 204u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 208u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 212u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 216u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 220u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 224u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 228u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 232u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 236u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 240u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 244u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 256u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 264u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 280u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 288u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 296u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 304u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 304u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 312u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 312u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 320u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 320u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 328u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 328u);
  _g4_t_x &x = *reinterpret_cast<_g4_t_x *>(_g4_sf + 336u);
  _g4_t_xa &xa = *reinterpret_cast<_g4_t_xa *>(_g4_sf + 336u);
  _g4_t_xb &xb = *reinterpret_cast<_g4_t_xb *>(_g4_sf + 336u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 345u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 346u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 348u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 352u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 356u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 360u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 364u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 368u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 372u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 376u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 376u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 376u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 376u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 380u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 384u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 384u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 384u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 384u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 396u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 414u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 420u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 432u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 448u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 452u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 456u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 460u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 464u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 496u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 528u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 592u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 656u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 720u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 784u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 792u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 796u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 800u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 896u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 900u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 904u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 908u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 912u);

  v240[30] = (uint32_t)(uintptr_t)(&a4);
  v148 = a4;
  v159 = a5;
  v161 = a6;
  v160 = (gameswf::Player::Self **)result;
  v158 = a10;
  v171 = a11;
  v214 = a8;
  v154 = a7;
  v156 = a9;
  v202 = (gameswf::RenderHandler::Self *)gameswf::s_render_handler;
  if ( gameswf::s_render_handler != nullptr )
  {
    v11 = *((uint32_t *)result + 4);
    v219[4] = a8;
    *(uint32_t *)v219 = 0;
    v232[1] = nullptr;
    v12 = *(uint32_t *)(v11 + 12);
    v233 = 1;
    v237 = 0;
    v238 = 1;
    v13 = *(uint32_t *)(v12 + 12);
    v234 = 1;
    v239 = 1;
    v168 = *(gameswf::TextureCache::Self **)(v13 + 36);
    v219[5] = a9;
    v232[0] = (gameswf::Self *)&v235;
    v236 = (gameswf::Self *)v240;
    sub_10F9960((int)(uintptr_t)(v232), 1);
    v201 = 0;
    if ( v171 != 0 )
      v201 = *((uint8_t *)v160[4] + 232);
    v14 = true;
g4_m128_raw(v15) = *(unsigned int *)v159;
    if (g4_m128_lane<float>(v15, 0) == 0.0 )
      v14 = v159[1] != 0.0;
    std::memcpy(v226, v160 + 28, 24);
    if ( v201 == 0 && v14 )
    {
      v138 = v159[1];
g4_m128_raw(v139) = (unsigned int)v226[0];
g4_m128_lane<float>(v139, 0) = (float)((float)(*(float *)v226 *g4_m128_lane<float>(v15, 0)) + (float)(*(float *)&v226[1] * v138))
                       + *(float *)&v226[2];
      if (g4_m128_lane<float>(v139, 0) >= -3.4028235e38f )
        v140 =g4_m128_lane<int32_t>(v139, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v139, *(__m128 *)&dword_1C7B5E0), 0);
      else
        v140 = 0;
      v226[2] = v140;
g4_m128_lane<float>(v15, 0) = (float)((float)(g4_m128_lane<float>(v15, 0) * *(float *)&v226[3]) + (float)(v138 * *(float *)&v226[4]))
                      + *(float *)&v226[5];
      if (g4_m128_lane<float>(v15, 0) < -3.4028235e38f )
        v141 = 0;
      else
        v141 =g4_m128_lane<int32_t>(v15, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v15, *(__m128 *)&dword_1C7B5E0), 0);
      v226[5] = v141;
    }
    v153 = (float *)(v160 + 20);
    (*((void (**)(gameswf::Player::Self **))*v160 + 35))(v160);
    v200 = *((uint8_t *)v202 + 4);
    v181 = v226[0];
    v182 = v226[1];
    v172 = *(float *)&v226[2];
    v183 = *(uint64_t *)&v226[3];
    v173 = *(float *)&v226[5];
    if ( v200 != 0 )
    {
g4_m128_raw(v19) = (unsigned int)v226[2];
g4_m128_raw(v16) = *((unsigned int *)v202 + 18);
g4_m128_raw(v17) = 0x7FFFFFFFu;
      v18 = *((float *)v202 + 19);
g4_m128_lane<float>(v19, 0) = (float)(*(float *)&v226[2] *g4_m128_lane<float>(v16, 0)) + 0.5;
      if ( fabs(g4_m128_lane<float>(v19, 0)) < 8388608.0 )
      {
g4_m128_lane<float>(v17, 0) = (float)(int)g4_m128_lane<float>(v19, 0);
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v17, v19), 0) & 0x3F800000);
        v19 = v17;
      }
g4_m128_lane<float>(v19, 0) =g4_m128_lane<float>(v19, 0) * v18;
      if (g4_m128_lane<float>(v19, 0) < -3.4028235e38f )
        v172 = 0.0;
      else
        LODWORD(v172) =g4_m128_lane<int32_t>(v19, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v19, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_lane<float>(v16, 0) = (float)(g4_m128_lane<float>(v16, 0) * *(float *)&v226[5]) + 0.5;
      v20 = _mm_and_ps(v16, g4_m128_u32(0x7FFFFFFFu));
      if (g4_m128_lane<float>(v20, 0) < 8388608.0 )
      {
g4_m128_lane<float>(v20, 0) = (float)(int)g4_m128_lane<float>(v16, 0);
        v21 =g4_m128_lane<float>(_mm_cmpgt_ss(v20, v16), 0);
        v16 = v20;
g4_m128_lane<float>(v16, 0) =g4_m128_lane<float>(v20, 0) - COERCE_FLOAT(LODWORD(v21) & 0x3F800000);
      }
g4_m128_lane<float>(v16, 0) =g4_m128_lane<float>(v16, 0) * v18;
      if (g4_m128_lane<float>(v16, 0) < -3.4028235e38f )
        v173 = 0.0;
      else
        LODWORD(v173) =g4_m128_lane<int32_t>(v16, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v16, *(__m128 *)&dword_1C7B5E0), 0);
    }
    v22 = *(float *)(*(uint32_t *)(v12 + 12) + 4);
    v155 = true;
    v220[0] = 0;
    v23 = *((uint8_t *)v202 + 52) == 0;
    v220[1] = 1;
    v220[2] = 2;
    v24 = 1024.0 * v22;
    v25 = v22 + v22;
    v220[3] = 1;
    v220[4] = 2;
    v220[5] = 3;
    v151 = (float)v214 * v25;
    v150 = (float)v156 * v25;
    v152 = v25 * (float)v154;
    if ( v23 )
      v155 = *((uint32_t *)v202 + 6) == 0;
    v169 = 0.0;
    if ( (*((uint8_t (**)(gameswf::Player::Self **, int))*v160 + 2))(v160, 37) != 0 )
    {
      v169 = (float)((float)(*((float *)v160 + 143) - *((float *)v160 + 142)) - *((float *)v160 + 151)) - 4.0;
      if ( (int)a2[1] > 0 )
        goto LABEL_21;
    }
    else if ( (int)a2[1] > 0 )
    {
LABEL_21:
      v26 = nullptr;
      if ( v14 )
        v26 = v159;
      v163 = v26;
      v157 = v214 | v156;
      v166 = 0;
      v167 = 0;
      v204 = 0;
      v179 = 0.0;
      v205 = 0.0;
      LOBYTE(v213) = 0;
      v27 = a2;
      v149 = 1.0 / v24;
      do
      {
        v28 = *v27 + v166;
        v207 = v28;
        v170 = *(gameswf::Font::Self **)(v28 + 4);
        if ( v170 != nullptr )
          goto LABEL_25;
        if ( *(uint8_t *)(v28 + 34) == 0 )
          goto LABEL_231;
        v116 = (gameswf::RefCounted::Self *)G4_VCALL<int>(v148, 124, *(uint32_t *)v28);
        v83 = *(gameswf::RefCounted::Self **)(v207 + 4);
        if ( v116 != v83 )
        {
          if ( v83 != nullptr )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v207 + 4));
          *(uint32_t *)(v207 + 4) = (uint32_t)(uintptr_t)(v116);
          if ( v116 == nullptr )
          {
LABEL_100:
            gameswf::logError((gameswf::Self *)"error: text style with undefined font; font_id = %d\n", *(const char **)v207);
            v83 = *(gameswf::RefCounted::Self **)(v207 + 4);
            if ( v83 == nullptr )
            {
              if ( *(uint8_t *)(v207 + 34) != 0 )
                goto LABEL_102;
LABEL_231:
              v180 = v149 * *(float *)(v207 + 24);
              goto LABEL_27;
            }
            goto LABEL_192;
          }
          gameswf::RefCounted::addRef(v116);
          v83 = *(gameswf::RefCounted::Self **)(v207 + 4);
        }
        if ( v83 == nullptr )
          goto LABEL_100;
LABEL_192:
        v170 = (gameswf::Font::Self *)(v83);
LABEL_25:
        v180 = v149 * *(float *)(v207 + 24);
        if ( *((uint32_t *)v170 + 30) != 0 )
          v180 = (float)(v149 * *(float *)(v207 + 24)) * 0.05f;
LABEL_27:
        v29 = v207;
        v178 = 1.0 / v180;
        if ( *(uint8_t *)(v207 + 32) != 0 )
        {
          v29 = v207;
          v205 = *(float *)(v207 + 16);
        }
        if ( *(uint8_t *)(v29 + 33) != 0 )
        {
          v30 = *(float *)(v29 + 20);
          v29 = v207;
          v179 = v30;
        }
        v31 = v232[0];
        v215 = *(uint8_t *)(v207 + 9);
        v32 = *(uint8_t *)(v207 + 10);
        v33 = *(uint8_t *)(v207 + 11);
        *((uint8_t *)v232[0] + 8) = *(uint8_t *)(v29 + 8);
        *((uint8_t *)v31 + 10) = v32;
        *((uint8_t *)v31 + 11) = v33;
        *((uint8_t *)v31 + 9) = v215;
        v34 = (unsigned int *)(v207 + 8);
        if ( v161 != nullptr )
          v34 = v161;
        v165 = *v34;
        gameswf::CxForm::transform(&v218, v153, *v34);
        v35 = v218;
        v36 = HIBYTE(v218);
        v37 = HIWORD(v218);
        v38 = *(uint32_t *)(v207 + 48);
        v164 = v179 * v178;
        if ( v38 > 0 )
        {
g4_m128_raw(v39) = LODWORD(v180);
g4_m128_lane<float>(v39, 0) = v180 * *((float *)&v183 + 1);
          v208 = 0;
g4_m128_raw(v40) = LODWORD(v180);
g4_m128_lane<float>(v40, 0) = v180 * *(float *)&v183;
          v203 = 12 * v204;
          v41 = _mm_cmple_ss(v40, *(__m128 *)&dword_1C7B5E0);
g4_m128_lane<int32_t>(v40, 0) = COERCE_UNSIGNED_INT(v180 * *(float *)&v183) &g4_m128_lane<int32_t>(v41, 0);
g4_m128_lane<float>(v41, 0) = v180 * *(float *)&v182;
          v175 = COERCE_UNSIGNED_INT(v180 * *(float *)&v182)
               & COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_cmple_ss(v41, *(__m128 *)&dword_1C7B5E0), 0));
          v177 = COERCE_UNSIGNED_INT(v180 * *((float *)&v183 + 1))
               &g4_m128_lane<uint32_t>(_mm_cmple_ss(v39, *(__m128 *)&dword_1C7B5E0), 0);
          v176 =g4_m128_lane<int32_t>(v40, 0);
          v174 = COERCE_UNSIGNED_INT(v180 * *(float *)&v181)
               &g4_m128_lane<uint32_t>(_mm_cmple_ss(g4_m128_from<__m128>(COERCE_UNSIGNED_INT(v180 * *(float *)&v181)), *(__m128 *)&dword_1C7B5E0), 0);
          do
          {
            v216 = *(uint32_t *)(v207 + 44) + 44 * v208;
            v42 = *(uint16_t *)(v216 + 32);
            if ( v42 == 10 || v42 == 32 )
            {
              v205 = v205 + *(float *)v216;
              goto LABEL_36;
            }
            v43 = v205;
            if ( *(uint8_t *)(v207 + 35) == 0 )
              v43 = (float)(v169 - v205) - *(float *)v216;
            v226[1] = v182;
g4_m128_raw(v44) = LODWORD(v179);
g4_m128_lane<float>(v44, 0) = v179 - *(float *)(v216 + 40);
            v226[0] = v181;
g4_m128_raw(v46) = (unsigned int)v182;
            v45 = v43 + *(float *)(v216 + 36);
            *(uint64_t *)&v226[3] = v183;
g4_m128_lane<float>(v46, 0) = (float)((float)(*(float *)&v182 *g4_m128_lane<float>(v44, 0)) + v172)
                            + (float)(*(float *)&v181 * v45);
            if (g4_m128_lane<float>(v46, 0) < -3.4028235e38f )
              v47 = 0;
            else
              v47 =g4_m128_lane<int32_t>(v46, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v46, *(__m128 *)&dword_1C7B5E0), 0);
            v226[2] = v47;
g4_m128_lane<float>(v44, 0) = (float)((float)(g4_m128_lane<float>(v44, 0) * *((float *)&v183 + 1)) + v173)
                            + (float)(v45 * *(float *)&v183);
            if (g4_m128_lane<float>(v44, 0) < -3.4028235e38f )
g4_m128_raw(v48) = 0;
            else
              v48 = _mm_and_ps(v44, _mm_cmple_ss(v44, *(__m128 *)&dword_1C7B5E0));
            v226[5] =g4_m128_lane<int32_t>(v48, 0);
            if ( v200 != 0 )
            {
g4_m128_lane<float>(v48, 0) = (float)(g4_m128_lane<float>(v48, 0) * *((float *)v202 + 18)) + 0.5;
              v49 = _mm_and_ps(v48, g4_m128_u32(0x7FFFFFFFu));
              if (g4_m128_lane<float>(v49, 0) < 8388608.0 )
              {
g4_m128_lane<float>(v49, 0) = (float)(int)g4_m128_lane<float>(v48, 0);
                LODWORD(v50) =g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v49, v48), 0) & 0x3F800000;
                v48 = v49;
g4_m128_lane<float>(v48, 0) =g4_m128_lane<float>(v49, 0) - v50;
              }
g4_m128_lane<float>(v48, 0) =g4_m128_lane<float>(v48, 0) * *((float *)v202 + 19);
              if (g4_m128_lane<float>(v48, 0) < -3.4028235e38f )
                v51 = 0;
              else
                v51 =g4_m128_lane<int32_t>(v48, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v48, *(__m128 *)&dword_1C7B5E0), 0);
              v226[5] = v51;
            }
            *(float *)&v185[3] = v180 * *(float *)&v181;
            v52 = _mm_cmple_ss(g4_m128_from<__m128>(0xFF7FFFFF), *(__m128 *)&v185[3]);
            v226[0] = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v52, g4_m128_from<__m128>(0LL)), 0)) | v174 &g4_m128_lane<int32_t>(v52, 0);
            *(float *)&v185[2] = v180 * *(float *)&v182;
            v53 = _mm_cmple_ss(g4_m128_from<__m128>(0xFF7FFFFF), *(__m128 *)&v185[2]);
            v226[1] = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v53, g4_m128_from<__m128>(0LL)), 0)) | v175 &g4_m128_lane<int32_t>(v53, 0);
            *(float *)&v185[1] = v180 * *(float *)&v183;
            v54 = _mm_cmple_ss(g4_m128_from<__m128>(0xFF7FFFFF), *(__m128 *)&v185[1]);
            v226[3] = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v54, g4_m128_from<__m128>(0LL)), 0)) | v176 &g4_m128_lane<int32_t>(v54, 0);
            *(float *)v185 = v180 * *((float *)&v183 + 1);
            v55 = _mm_cmple_ss(g4_m128_from<__m128>(0xFF7FFFFF), *(__m128 *)v185);
            v226[4] =g4_m128_lane<uint32_t>(_mm_andnot_ps(v55, g4_m128_from<__m128>(0LL)), 0) | v177 &g4_m128_lane<int32_t>(v55, 0);
            if ( v201 == 0 )
              goto LABEL_54;
            if ( *(uint32_t *)(v171 + 64) <= v204 )
              goto LABEL_54;
            v56 = *(uint32_t *)(v171 + 60) + v203;
            if ( *(uint8_t *)v56 != 5 )
              goto LABEL_54;
            v89 = *(uint32_t *)(v56 + 4);
            v210 = v89;
            if ( v89 == 0 )
              goto LABEL_54;
            LOBYTE(v213) = 0;
            memset(v227, 0, 0x18u);
            v227[0] = (gameswf::Point::Self *)1065353216;
            v227[4] = (gameswf::Point::Self *)1065353216;
            memset(v228, 0, sizeof(v228));
            v228[15] = 1065353216;
            v228[10] = 1065353216;
            v228[5] = 1065353216;
            v228[0] = 1065353216;
            v90 = *(uint32_t *)(v89 + 12);
            v36 = HIBYTE(v37);
            if ( v90 == 0 )
              goto LABEL_54;
            v91 = *(uint32_t *)(v90 + 4);
            if ( v91 < 0 )
              goto LABEL_54;
            v92 = 0;
            if ( *(uint32_t *)(v90 + 8) == -2 )
            {
              v102 = 32;
              v92 = 0;
              do
              {
                if ( ++v92 > v91 )
                {
                  v36 = HIBYTE(v37);
                  LOBYTE(v213) = 0;
                  goto LABEL_54;
                }
                v114 = *(uint32_t *)(v90 + v102);
                v102 += 24;
              }
              while ( v114 == -2 );
            }
            v188 = 1.0;
            x = 0.0;
            v211 = (int *)(v210 + 12);
            v187 = 0.0;
            v186 = 0.0;
            v189 = 0.0;
            v193 = 0.0;
            v191 = 1065353216;
            v195 = 1065353216;
            v213 = 0;
            v184 = 0;
            while ( 1 )
            {
LABEL_115:
              v93 = 24 * v92 + 8;
              StandardMemberID = gameswf::getStandardMemberID(*(gameswf::Self **)(v90 + v93 + 8));
              if ( StandardMemberID == 6 )
              {
                gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v211 + v93 + 12));
                v109 = PixelScale;
                v110 = v213 | 4;
                if ( v109 == 1.0 )
                  v110 = v213;
                v188 = PixelScale;
                v213 = v110;
              }
              else if ( StandardMemberID > 6 )
              {
                switch ( StandardMemberID )
                {
                  case 10:
                    gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v211 + v93 + 12));
                    v100 = PixelScale;
                    v101 = v213 | 1;
                    if ( (float)(0.017453294f * v100) == 0.0 )
                      v101 = v213;
                    x = 0.017453294f * v100;
                    v213 = v101;
                    goto LABEL_121;
                  case 99:
                    gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v211 + v93 + 12));
                    v105 = PixelScale;
                    v184 = LODWORD(v105);
                    break;
                  case 101:
                    gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v211 + v93 + 12));
                    v105 = PixelScale;
                    v186 = v105;
                    break;
                  case 102:
                    gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v211 + v93 + 12));
                    v105 = PixelScale;
                    v187 = v105;
                    break;
                  default:
                    goto LABEL_121;
                }
                v106 = v213 | 2;
                if ( v105 == 0.0 )
                  v106 = v213;
                v213 = v106;
              }
              else
              {
                switch ( StandardMemberID )
                {
                  case 0:
                    gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v211 + v93 + 12));
                    v107 = PixelScale;
                    v189 = v107;
                    goto LABEL_162;
                  case 1:
                    gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v211 + v93 + 12));
                    v107 = PixelScale;
                    v193 = v107;
LABEL_162:
                    v108 = v213 | 1;
                    if ( v107 == 0.0 )
                      v108 = v213;
                    v213 = v108;
                    goto LABEL_121;
                  case 2:
                    gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v211 + v93 + 12));
                    v103 = PixelScale;
                    v191 = LODWORD(v103);
                    break;
                  case 3:
                    gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*v211 + v93 + 12));
                    v103 = PixelScale;
                    v195 = LODWORD(v103);
                    break;
                  default:
                    goto LABEL_121;
                }
                v104 = v213 | 1;
                if ( v103 == 1.0 )
                  v104 = v213;
                v213 = v104;
              }
LABEL_121:
              v90 = *v211;
              v95 = *(uint32_t *)(*v211 + 4);
              if ( v92 > v95 || v95 < v92 + 1 )
                goto LABEL_122;
              if ( *(uint32_t *)(v90 + 24 * (v92 + 1) + 8) == -2 )
                break;
              ++v92;
            }
            v111 = 3 * v92++ + 6;
            v112 = 8 * v111 + 8;
            while ( v95 >= ++v92 )
            {
              v113 = *(uint32_t *)(v90 + v112);
              v112 += 24;
              if ( v113 != -2 )
                goto LABEL_115;
            }
LABEL_122:
            if ( (v213 & 2) != 0 )
            {
              gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v227, v191, v195, x);
g4_m128_raw(v96) = LODWORD(v178);
              if ( (float)(v178 * v189) < -3.4028235e38f )
              {
g4_m128_lane<int32_t>(v96, 0) = 0;
              }
              else
              {
g4_m128_lane<float>(v96, 0) = v178 * v189;
g4_m128_lane<int32_t>(v96, 0) = COERCE_UNSIGNED_INT(v178 * v189)
                                &g4_m128_lane<uint32_t>(_mm_cmple_ss(v96, *(__m128 *)&dword_1C7B5E0), 0);
              }
g4_m128_raw(v97) = LODWORD(v178);
              v227[2] = (gameswf::Point::Self *)g4_m128_lane<int32_t>(v96, 0);
              if ( (float)(v178 * v193) < -3.4028235e38f )
              {
g4_m128_lane<int32_t>(v97, 0) = 0;
              }
              else
              {
g4_m128_lane<float>(v97, 0) = v178 * v193;
g4_m128_lane<int32_t>(v97, 0) = COERCE_UNSIGNED_INT(v178 * v193)
                                &g4_m128_lane<uint32_t>(_mm_cmple_ss(v97, *(__m128 *)&dword_1C7B5E0), 0);
              }
              v227[5] = (gameswf::Point::Self *)g4_m128_lane<int32_t>(v97, 0);
              gameswf::Transform::Transform((gameswf::Transform::Self *)v231, (const gameswf::Matrix::Self *)v227);
              std::memcpy(v228, v231, 40);
              v228[12] = (int)(uintptr_t)(v231[12]);
              v228[13] = (int)(uintptr_t)(v231[13]);
              v228[14] = (int)(uintptr_t)(v231[14]);
              v228[15] = (int)(uintptr_t)(v231[15]);
              *(float *)&v228[10] = v180;
              v228[11] = v184;
              if ( v187 != 0.0 )
              {
                memset(v229, 0, 16);
                gameswf::Quaternion::setAngleAxis((gameswf::Quaternion::Self *)v229, v187, 0.0, 1.0, 0.0);
                gameswf::Transform::postRotateQuat(
                  (gameswf::Transform::Self *)v228,
                  *(float *)v229,
                  *(float *)&v229[1],
                  *(float *)&v229[2],
                  *(float *)&v229[3]);
              }
              if ( v186 != 0.0 )
              {
                memset(v229, 0, 16);
                gameswf::Quaternion::setAngleAxis((gameswf::Quaternion::Self *)v229, v186, 1.0, 0.0, 0.0);
                gameswf::Transform::postRotateQuat(
                  (gameswf::Transform::Self *)v228,
                  *(float *)v229,
                  *(float *)&v229[1],
                  *(float *)&v229[2],
                  *(float *)&v229[3]);
              }
              if ( v163 != nullptr )
                gameswf::Transform::postTranslate((gameswf::Transform::Self *)v228, v178 * *v163, v178 * v163[1], 0.0);
              memset(v229, 0, sizeof(v229));
              v229[15] = 1065353216;
              v229[10] = 1065353216;
              v229[5] = 1065353216;
              v229[0] = 1065353216;
              v98 = *((uint32_t *)v202 + 6);
              if ( v98 <= 0 )
              {
                memset(v229, 0, sizeof(v229));
                v229[15] = 1065353216;
                v229[10] = 1065353216;
                v229[5] = 1065353216;
                v229[0] = 1065353216;
              }
              else
              {
                std::memcpy(v229, (const void *)(*((uint32_t *)v202 + 5) + ((v98 - 1) << 6)), sizeof(v229));
              }
              gameswf::Transform::Transform((gameswf::Transform::Self *)v230, (const gameswf::Matrix::Self *)v226);
              gameswf::Transform::postMultiply((gameswf::Transform::Self *)v229, (const gameswf::Transform::Self *)v230);
              gameswf::Transform::postMultiply((gameswf::Transform::Self *)v229, (const gameswf::Transform::Self *)v228);
              G4_VCALL<void>(v202, 96, v229, 0);
              if ( v155 )
                *((uint8_t *)v202 + 52) = 0;
              v99 = v213 & 4;
              std::memcpy(v226, gameswf::Matrix::identity, 24);
            }
            else
            {
              v99 = v213 & 4;
              if ( (v213 & 1) != 0 )
              {
                gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v227, v191, v195, x);
g4_m128_raw(v117) = LODWORD(v178);
                if ( (float)(v178 * v189) < -3.4028235e38f )
                {
g4_m128_lane<int32_t>(v117, 0) = 0;
                }
                else
                {
g4_m128_lane<float>(v117, 0) = v178 * v189;
g4_m128_lane<int32_t>(v117, 0) = COERCE_UNSIGNED_INT(v178 * v189)
                                   &g4_m128_lane<uint32_t>(_mm_cmple_ss(v117, *(__m128 *)&dword_1C7B5E0), 0);
                }
g4_m128_raw(v118) = LODWORD(v178);
                v227[2] = (gameswf::Point::Self *)g4_m128_lane<int32_t>(v117, 0);
                if ( (float)(v178 * v193) < -3.4028235e38f )
                {
g4_m128_lane<int32_t>(v118, 0) = 0;
                }
                else
                {
g4_m128_lane<float>(v118, 0) = v178 * v193;
g4_m128_lane<int32_t>(v118, 0) = COERCE_UNSIGNED_INT(v178 * v193)
                                   &g4_m128_lane<uint32_t>(_mm_cmple_ss(v118, *(__m128 *)&dword_1C7B5E0), 0);
                }
                v227[5] = (gameswf::Point::Self *)g4_m128_lane<int32_t>(v118, 0);
                if ( v163 != nullptr )
                {
                  v119 = v178 * v163[1];
                  xa = v178 * *v163;
                  v120 = v227[0];
                  v212 = v227[1];
                  v121 = (float)((float)(*(float *)&v227[1] * v119) + (float)(xa * *(float *)v227)) +g4_m128_lane<float>(v117, 0);
                  if ( v121 >= -3.4028235e38f )
                  {
                    v122 = *(float *)v226;
                    if ( v121 <= 3.4028235e38f )
                    {
                      v196 = v121 * *(float *)v226;
                      v123 = *(float *)&v226[3];
                      v194 = v121 * *(float *)&v226[3];
                    }
                    else
                    {
                      v123 = *(float *)&v226[3];
                      v194 = 0.0;
                      v196 = 0.0;
                      v121 = 0.0;
                    }
                  }
                  else
                  {
                    v122 = *(float *)v226;
                    v194 = 0.0;
                    v123 = *(float *)&v226[3];
                    v196 = 0.0;
                    v121 = 0.0;
                  }
                  v227[2] = (gameswf::Point::Self *)LODWORD(v121);
g4_m128_raw(v124) = (unsigned int)(uintptr_t)(v227[4]);
g4_m128_raw(v125) = (unsigned int)(uintptr_t)(v227[3]);
                  v126 = (float)(v119 * *(float *)&v227[4]) + (float)(xa * *(float *)&v227[3]);
g4_m128_raw(v127) = (unsigned int)v226[1];
                  v128 = v126 +g4_m128_lane<float>(v118, 0);
                  if ( v128 < -3.4028235e38f || (g4_m128_raw(v127) = (unsigned int)v226[1], v128 > 3.4028235e38f) )
                  {
                    v190 = 0.0;
                    xb = *(float *)&v226[4];
                    v192 = 0.0;
                    v128 = 0.0;
                  }
                  else
                  {
                    v192 = v128 * *(float *)&v226[1];
                    xb = *(float *)&v226[4];
                    v190 = *(float *)&v226[4] * v128;
                  }
                  v227[5] = (gameswf::Point::Self *)LODWORD(v128);
                }
                else
                {
                  v122 = *(float *)v226;
g4_m128_raw(v127) = (unsigned int)v226[1];
                  v212 = v227[1];
                  v196 =g4_m128_lane<float>(v117, 0) * *(float *)v226;
                  v120 = v227[0];
g4_m128_raw(v125) = (unsigned int)(uintptr_t)(v227[3]);
g4_m128_raw(v124) = (unsigned int)(uintptr_t)(v227[4]);
                  v192 =g4_m128_lane<float>(v118, 0) * *(float *)&v226[1];
                  v123 = *(float *)&v226[3];
                  v194 =g4_m128_lane<float>(v117, 0) * *(float *)&v226[3];
                  xb = *(float *)&v226[4];
                  v190 =g4_m128_lane<float>(v118, 0) * *(float *)&v226[4];
                }
                v129 = v127;
g4_m128_lane<float>(v129, 0) = (float)(g4_m128_lane<float>(v127, 0) *g4_m128_lane<float>(v125, 0)) + (float)(v122 * *(float *)&v120);
                if (g4_m128_lane<float>(v129, 0) < -3.4028235e38f )
                  v130 = 0;
                else
                  v130 =g4_m128_lane<int32_t>(v129, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v129, *(__m128 *)&dword_1C7B5E0), 0);
                v229[0] = v130;
g4_m128_lane<float>(v125, 0) = (float)(g4_m128_lane<float>(v125, 0) * xb) + (float)(*(float *)&v120 * v123);
                if (g4_m128_lane<float>(v125, 0) < -3.4028235e38f )
                  v131 = 0;
                else
                  v131 =g4_m128_lane<int32_t>(v125, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v125, *(__m128 *)&dword_1C7B5E0), 0);
                v229[3] = v131;
g4_m128_lane<float>(v127, 0) = (float)(g4_m128_lane<float>(v127, 0) *g4_m128_lane<float>(v124, 0)) + (float)(v122 * *(float *)&v212);
                if (g4_m128_lane<float>(v127, 0) < -3.4028235e38f )
                  v132 = 0;
                else
                  v132 =g4_m128_lane<int32_t>(v127, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v127, *(__m128 *)&dword_1C7B5E0), 0);
                v229[1] = v132;
g4_m128_lane<float>(v124, 0) = (float)(g4_m128_lane<float>(v124, 0) * xb) + (float)(v123 * *(float *)&v212);
                if (g4_m128_lane<float>(v124, 0) < -3.4028235e38f )
                  v133 = 0;
                else
                  v133 =g4_m128_lane<int32_t>(v124, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v124, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v134) = LODWORD(v196);
                v229[4] = v133;
g4_m128_lane<float>(v134, 0) = (float)(v196 + v192) + *(float *)&v226[2];
                if (g4_m128_lane<float>(v134, 0) < -3.4028235e38f )
                  v135 = 0;
                else
                  v135 =g4_m128_lane<int32_t>(v134, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v134, *(__m128 *)&dword_1C7B5E0), 0);
                v229[2] = v135;
g4_m128_raw(v136) = LODWORD(v194);
g4_m128_lane<float>(v136, 0) = (float)(v194 + v190) + *(float *)&v226[5];
                if (g4_m128_lane<float>(v136, 0) < -3.4028235e38f )
                  v137 = 0;
                else
                  v137 =g4_m128_lane<int32_t>(v136, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v136, *(__m128 *)&dword_1C7B5E0), 0);
                std::memcpy(v226, v229, 20);
                v229[5] = v137;
                v226[5] = v137;
              }
            }
            if ( v99 != 0 )
              v36 = (int)(float)(fminf(fmaxf(0.0, v188), 1.0) * (float)HIBYTE(v37));
            else
              v36 = HIBYTE(v37);
LABEL_54:
            if ( *(uint16_t *)(v216 + 30) == 0xFFFF && *(uint32_t *)(v216 + 4) == 0 )
            {
              *((uint32_t *)v202 + 29) = v226[0];
              *((uint32_t *)v202 + 30) = v226[1];
              *((uint32_t *)v202 + 31) = v226[2];
              *((uint64_t *)v202 + 16) = *(uint64_t *)&v226[3];
              *((uint8_t *)v202 + 200) = v35;
              *((uint32_t *)v202 + 34) = v226[5];
              *((uint8_t *)v202 + 201) = HIBYTE(v35);
              *((uint8_t *)v202 + 203) = v36;
              *((uint8_t *)v202 + 202) = v37;
              LOWORD(v229[0]) = 258;
              v229[2] = 0;
              v229[9] = 0;
              v229[1] = (int)(uintptr_t)(&unk_1CC4C60);
              *(uint64_t *)&v229[3] = 5;
              if ( gameswf::s_render_handler != nullptr )
                gameswf::RenderHandler::draw((gameswf::Root::Self **)gameswf::s_render_handler, (gameswf::Self *)v229);
              v205 = v205 + *(float *)(*(uint32_t *)(v207 + 44) + 44 * v208);
              v38 = *(uint32_t *)(v207 + 48);
              goto LABEL_36;
            }
            if ( *(uint8_t *)(v207 + 12) == 0 )
              goto LABEL_56;
            std::memcpy((char *)v202 + 116, v226, 24);
            *((uint16_t *)v202 + 100) = v35;
            *((uint8_t *)v202 + 203) = v36;
            *((uint8_t *)v202 + 202) = v37;
            v228[2] = 0;
            v228[0] = 0;
            v228[1] = 1114636288;
            v228[3] = 1114636288;
            *(float *)&v84 = v178 * *(float *)(*(uint32_t *)(v207 + 44) + 44 * v208);
            LOWORD(v229[0]) = 258;
            v229[2] = 0;
            v228[2] = v84;
            v229[1] = (int)(uintptr_t)(v228);
            v229[9] = 0;
            *(uint64_t *)&v229[3] = 2;
            if ( gameswf::s_render_handler != nullptr )
            {
              gameswf::RenderHandler::draw((gameswf::Root::Self **)gameswf::s_render_handler, (gameswf::Self *)v229);
              v57 = v216;
              if ( *(uint32_t *)(v216 + 4) == 0 )
              {
LABEL_106:
                v85 = *(uint16_t *)(v57 + 30);
                if ( v85 >= 0 )
                {
                  GlyphByIndex = (gameswf::ShapeCharacterDef::Self *)gameswf::Font::getGlyphByIndex(v170, v85);
                  if ( GlyphByIndex != nullptr )
                  {
                    Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot(v160);
                    PixelScale = gameswf::Root::getPixelScale(Root);
                    *(float *)&v144 = PixelScale;
                    gameswf::ShapeCharacterDef::display(GlyphByIndex, (int)(uintptr_t)(v226), v153, v144, v232, &v236);
                  }
                }
                goto LABEL_77;
              }
            }
            else
            {
LABEL_56:
              v57 = v216;
              if ( *(uint32_t *)(v216 + 4) == 0 )
                goto LABEL_106;
            }
            if ( *(uint8_t *)(v57 + 34) == 2 )
            {
              v88 = *(uint32_t *)(v57 + 8);
              *(float *)&v222 = 0.0;
g4_m128_lane<int32_t>(v221, 0) = v88;
              *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v221) + 4) = *(uint64_t *)(v57 + 12);
g4_m128_lane<int32_t>(v221, 3) = *(uint32_t *)(v57 + 20);
              v224 = 0.0;
              v223 = 1.0;
              v225 = 1.0;
LABEL_73:
              G4_VCALL<void>(v202, 108, v226, *(uint32_t *)(v216 + 4), &v221, &v222, (v36 << 24) | ((uint8_t)v37 << 16) | v35);
              if ( v158 != nullptr )
              {
                v78 = *v159;
                v229[2] = 0;
                v229[5] = 0;
                v79 = v159[1];
                v229[8] = 0;
                v229[11] = 0;
g4_m128_lane<float>(v221, 0) = (float)((float)(g4_m128_lane<float>(v221, 0) + (float)(v205 * v178)) * v180) + v78;
g4_m128_lane<float>(v221, 1) = (float)((float)((float)(v205 * v178) +g4_m128_lane<float>(v221, 1)) * v180) + v78;
g4_m128_lane<float>(v221, 2) = (float)((float)(v164 +g4_m128_lane<float>(v221, 2)) * v180) + v79;
                v229[0] =g4_m128_lane<int32_t>(v221, 0);
                v229[1] =g4_m128_lane<int32_t>(v221, 2);
                *(uint64_t *)&v229[3] = *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v221) + 4);
                v229[9] =g4_m128_lane<int32_t>(v221, 1);
                v229[6] =g4_m128_lane<int32_t>(v221, 0);
g4_m128_lane<float>(v221, 3) = (float)((float)(v164 +g4_m128_lane<float>(v221, 3)) * v180) + v79;
                v229[7] =g4_m128_lane<int32_t>(v221, 3);
                v229[10] =g4_m128_lane<int32_t>(v221, 3);
                v228[0] = v222;
                *(float *)&v228[1] = v224;
                *(float *)&v228[3] = v224;
                v228[4] = v222;
                *(float *)&v228[2] = v223;
                *(float *)&v228[5] = v225;
                *(float *)&v228[6] = v223;
                *(float *)&v228[7] = v225;
                if ( v200 != 0 )
                {
                  v227[1] = (gameswf::Point::Self *)&v229[3];
                  v227[2] = (gameswf::Point::Self *)&v229[6];
                  v227[3] = (gameswf::Point::Self *)&v229[9];
                  v227[0] = (gameswf::Point::Self *)v229;
                  gameswf::RenderHandler::alignToPixel(v202, v227, true);
                }
                gameswf::RenderCache::record(v158, *(uint32_t *)(v216 + 4), v229, v228, v165, 4, (char *)v220, 6);
              }
              goto LABEL_77;
            }
g4_m128_raw(v58) = *(unsigned int *)(v216 + 12);
            if (g4_m128_lane<float>(v58, 0) > 0.0 )
            {
g4_m128_raw(v59) = *(unsigned int *)(v216 + 20);
              if (g4_m128_lane<float>(v59, 0) > 0.0 )
              {
                v60 = *(uint16_t *)(v216 + 28);
g4_m128_raw(v63) = *(unsigned int *)(v216 + 20);
g4_m128_raw(v61) = 0x44800000u;
g4_m128_lane<float>(v61, 0) = 1024.0 / (float)v60;
g4_m128_raw(v62) = *(unsigned int *)(v216 + 16);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v59, 0) -g4_m128_lane<float>(v62, 0);
                v64 = _mm_xor_ps(v62, *(__m128 *)&dword_1C7C1B0);
g4_m128_lane<float>(v58, 0) =g4_m128_lane<float>(v58, 0) - *(float *)(v216 + 8);
                v65 = _mm_xor_ps(g4_m128_u32(*(unsigned int *)(v216 + 8)), *(__m128 *)&dword_1C7C1B0);
g4_m128_lane<uint64_t>(v221, 0) = __PAIR64__(g4_m128_lane<uint32_t>(v58, 0),g4_m128_lane<uint32_t>(v65, 0));
g4_m128_lane<uint64_t>(v221, 1) = __PAIR64__(g4_m128_lane<uint32_t>(v63, 0),g4_m128_lane<uint32_t>(v64, 0));
                v66 = v61;
                if ( v168 != nullptr )
                {
                  v67 = *(uint32_t *)(v216 + 4);
                  if ( v67 == *((uint32_t *)v168 + 13) )
                  {
                    v146 = *(uint32_t *)(v216 + 4);
                    gameswf::glyph_texture_cache::get_glyph_region(
                      v168,
                      *(uint16_t *)(v216 + 30),
                      *(uint32_t *)(v216 + 24),
                      v60,
                      v219,
                      (float *)&v222);
g4_m128_raw(v66) =g4_m128_lane<uint32_t>(v61, 0);
                    v67 = v146;
                  }
                  v61 = v66;
                  v68 = v222;
                  v69 = v225 - v224;
                  v70 = v223 - *(float *)&v222;
                  v209 = v224;
                  v59 = v66;
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v66, 0) * (float)(v223 - *(float *)&v222);
g4_m128_lane<float>(v59, 0) =g4_m128_lane<float>(v66, 0) * (float)(v225 - v224);
                  if ( v157 != 0 && v67 == *((uint32_t *)v168 + 13) )
                  {
                    v145 = v67;
                    gameswf::glyph_texture_cache::get_glyph_region(
                      v168,
                      *(uint16_t *)(v216 + 30),
                      *(uint32_t *)(v216 + 24),
                      *(uint16_t *)(v216 + 28),
                      &v219[3],
                      (float *)v229);
                    v209 = *(float *)&v229[2];
                    v67 = v145;
g4_m128_raw(v63) = LODWORD(v150);
                    v68 = v229[0];
g4_m128_raw(v58) = LODWORD(v151);
g4_m128_raw(v59) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(v66, 0) * v69);
g4_m128_raw(v61) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(v66, 0) * v70);
                    v225 = (float)(*(float *)&v229[2] + v225) - v224;
g4_m128_lane<float>(v63, 0) = (float)(v150 / (float)(v225 - *(float *)&v229[2])) +g4_m128_lane<float>(v221, 3);
g4_m128_lane<float>(v221, 3) =g4_m128_lane<float>(v63, 0);
g4_m128_lane<float>(v58, 0) = (float)(v151
                                            / (float)((float)((float)(v223 + *(float *)v229) - *(float *)&v222)
                                                    - *(float *)v229))
                                    +g4_m128_lane<float>(v221, 1);
                    v71 = (float)((float)((float)(v223 + *(float *)v229) - *(float *)&v222)
                                + (float)((float)(*(float *)(v216 + 12) + -1.0)
                                        * (float)((float)((float)(v223 + *(float *)v229) - *(float *)&v222)
                                                - *(float *)v229)))
                        + v151;
                    v72 = (float)((float)((float)(*(float *)(v216 + 20) + -1.0) * (float)(v225 - *(float *)&v229[2]))
                                + v225)
                        + v150;
                  }
                  else if ( v154 != 0 && v67 == *((uint32_t *)v168 + 13) )
                  {
                    BYTE2(v228[0]) = 0;
                    LOWORD(v228[0]) = v154;
                    v147 = v67;
                    gameswf::glyph_texture_cache::get_glyph_region(
                      v168,
                      *(uint16_t *)(v216 + 30),
                      *(uint32_t *)(v216 + 24),
                      *(uint16_t *)(v216 + 28),
                      (uint8_t *)v228,
                      (float *)v229);
                    v209 = *(float *)&v229[2];
                    v67 = v147;
g4_m128_raw(v63) = LODWORD(v152);
                    v68 = v229[0];
g4_m128_raw(v58) = LODWORD(v152);
g4_m128_raw(v61) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(v66, 0) * v70);
g4_m128_raw(v59) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(v66, 0) * v69);
                    v225 = (float)(*(float *)&v229[2] + v225) - v224;
g4_m128_lane<float>(v63, 0) = (float)(v152 / (float)(v225 - *(float *)&v229[2])) +g4_m128_lane<float>(v221, 3);
g4_m128_lane<float>(v221, 3) =g4_m128_lane<float>(v63, 0);
g4_m128_lane<float>(v58, 0) = (float)(v152
                                            / (float)((float)((float)(v223 + *(float *)v229) - *(float *)&v222)
                                                    - *(float *)v229))
                                    +g4_m128_lane<float>(v221, 1);
                    v71 = (float)((float)((float)(v223 + *(float *)v229) - *(float *)&v222)
                                + (float)((float)(*(float *)(v216 + 12) + -1.0)
                                        * (float)((float)((float)(v223 + *(float *)v229) - *(float *)&v222)
                                                - *(float *)v229)))
                        + v152;
                    v72 = (float)((float)((float)(*(float *)(v216 + 20) + -1.0) * (float)(v225 - *(float *)&v229[2]))
                                + v225)
                        + v152;
                  }
                  else
                  {
                    v71 = (float)((float)(*(float *)(v216 + 12) + -1.0) * v70) + v223;
g4_m128_raw(v58) =g4_m128_lane<uint32_t>(v221, 1);
                    v72 = (float)((float)(*(float *)(v216 + 20) + -1.0) * (float)(v225 - v224)) + v225;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v221, 3);
                  }
                  v73 = (float)*(int *)(v67 + 16);
                  *(float *)&v74 = *(float *)&v68 / v73;
                  v75 = v71 / v73;
g4_m128_raw(v64) =g4_m128_lane<uint32_t>(v221, 2);
                  v222 = v74;
                  v206 = (float)*(int *)(v67 + 20);
                  v223 = v75;
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(v221, 0);
                  v224 = v209 / v206;
                  v225 = v72 / v206;
                }
                else
                {
                  v224 = 0.0;
                  *(float *)&v222 = 0.0;
                  v223 = *(float *)(v216 + 12);
                  v225 =g4_m128_lane<float>(v59, 0);
                  v115 = *(uint32_t *)(v216 + 4);
g4_m128_lane<float>(v61, 0) = (float)*(int *)(v115 + 16) *g4_m128_lane<float>(v61, 0);
g4_m128_lane<float>(v59, 0) = (float)*(int *)(v115 + 20) *g4_m128_lane<float>(v66, 0);
                }
                if ( v170 != nullptr && *((uint32_t *)v170 + 30) != 0 )
                {
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v61, 0) * 20.0;
g4_m128_lane<float>(v59, 0) =g4_m128_lane<float>(v59, 0) * 20.0;
                }
g4_m128_lane<uint64_t>(v76, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v61, v61), 0);
g4_m128_lane<uint64_t>(v76, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v59, v59), 0);
g4_m128_lane<uint64_t>(v77, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v65, v58), 0);
g4_m128_lane<uint64_t>(v77, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v64, v63), 0);
                v221 = _mm_mul_ps(v76, v77);
                goto LABEL_73;
              }
            }
LABEL_77:
            if ( v201 != 0 && *(uint32_t *)(v171 + 64) > v204 && (v213 & 2) != 0 )
            {
              G4_VCALL<void>(v202, 100);
              if ( v155 )
                *((uint8_t *)v202 + 52) = 1;
            }
            v38 = *(uint32_t *)(v207 + 48);
            v205 = v205 + *(float *)v216;
LABEL_36:
            ++v208;
            ++v204;
            v203 += 12;
          }
          while ( v208 < v38 );
        }
LABEL_102:
        v27 = a2;
        ++v167;
        v166 += 60;
      }
      while ( a2[1] > v167 );
    }
    if ( v237 <= 0 )
    {
      if ( v237 < 0 )
      {
        v142 = v237;
        v143 = 108 * v237;
        do
        {
          if ( (gameswf::Self *)((char *)v236 + v143) != nullptr )
            gameswf::LineStyle::Construct((gameswf::Self *)((char *)v236 + v143));
          v143 += 108;
          ++v142;
        }
        while ( v142 != 0 );
      }
    }
    else
    {
      v217 = v237;
      v80 = 0;
      v81 = 0;
      do
      {
        ++v80;
        v82 = (void (***)(uint32_t))((char *)v236 + v81);
        v81 += 108;
        (**v82)((uint32_t)(uintptr_t)(v82));
      }
      while ( v80 != v217 );
    }
    v237 = 0;
    if ( v239 == 0 )
    {
      v238 = 0;
      if ( v236 != nullptr )
        gameswf::free_internal(v236);
      v236 = nullptr;
    }
    sub_10F9960((int)(uintptr_t)(v232), 0);
    result = (gameswf::Self *)v234;
    if ( v234 == 0 )
    {
      result = v232[0];
      v233 = 0;
      if ( v232[0] != nullptr )
        return (gameswf::Self *)gameswf::free_internal(v232[0]);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_11003B0  (binary VA: 0x11003b0)
// Original: sub_11003B0
// ----------------------------------------------------------------------------
int sub_11003B0(uint32_t *a1, int a2, uint16_t *a3)
{
  int result;
  uint16_t *v6;

  sub_777050((int)(uintptr_t)(a1), a1[1] + 1);
  result = a1[1] - 1;
  if ( result > a2 )
    result = (int)(uintptr_t)(memmove((void *)(*a1 + 2 * a2 + 2), (const void *)(*a1 + 2 * a2), 2 * (result - a2)));
  v6 = (uint16_t *)(*a1 + 2 * a2);
  if ( v6 != nullptr )
  {
    result = *a3;
    *v6 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1102850  (binary VA: 0x1102850)
// Original: sub_1102850
// ----------------------------------------------------------------------------
int sub_1102850(uint32_t *a1, gameswf::EditTextCharacter::Self *a2, long double a3)
{
  int v4;
  int v5;
  int j;
  int *v7;
  int v8;
  int v9;
  int k;
  int result;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v18;
  typedef gameswf::array<unsigned short> *_g4_t_v19;
  typedef int _g4_t_i;
  typedef int _g4_t_v21;
  typedef gameswf::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v18)) > _g4_s1 ? (40u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v19)) > _g4_s2 ? (40u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_i)) > _g4_s3 ? (44u + sizeof(_g4_t_i)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v22)) > _g4_s5 ? (48u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v23)) > _g4_s6 ? (52u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v24)) > _g4_s7 ? (56u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v25)) > _g4_s8 ? (60u + sizeof(_g4_t_v25)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);

  v4 = a1[17];
  if ( v4 > 0 )
  {
    v5 = 0;
    for ( i = 0; i < v4; ++i )
    {
      while ( 1 )
      {
        v18 = a1[16] + v5;
        if ( *(uint8_t *)(v18 + 8) == 0 )
          break;
        ++i;
        v5 += 12;
        if ( i >= v4 )
          goto LABEL_13;
      }
      v16 = a1[5];
      v22 = nullptr;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      sub_777050((int)(uintptr_t)(&v22), v16);
      if ( v23 > 0 )
      {
        for ( j = 0; j < v23; ++j )
          *((uint16_t *)v22 + j) = *(uint16_t *)(a1[4] + 2 * j);
      }
      gameswf::ArabicTextRules::format(
        (gameswf::Self *)((char *)v22 + 2 * *(uint32_t *)v18),
        (uint16_t *)(a1[4] + 2 * *(uint32_t *)v18),
        (uint16_t *)(*(uint32_t *)(v18 + 4) - *(uint32_t *)v18),
        a1[12] + 4 * *(uint32_t *)v18);
      sub_777050((int)(uintptr_t)(&v22), 0);
      if ( v25 == 0 )
      {
        v24 = 0;
        if ( v22 != nullptr )
          gameswf::free_internal(v22);
        v22 = nullptr;
      }
      v4 = a1[17];
      v5 += 12;
    }
  }
LABEL_13:
  v7 = (int *)a1[12];
  v21 = a1[13];
  v19 = (gameswf::array<unsigned short> *)(a1 + 4);
  v8 = *v7;
  if ( v21 > 0 )
  {
    v9 = 0;
    for ( k = 0; k < v21; ++k )
    {
      if ( v7[k] != v8 )
      {
        gameswf::EditTextCharacter::appendText(a3, a2, v19, v9, k - v9, (int *)(a1[8] + 44 * v8));
        v7 = (int *)a1[12];
        v21 = a1[13];
        v9 = k;
        v8 = v7[k];
      }
    }
    if ( v9 < v21 )
      gameswf::EditTextCharacter::appendText(a3, a2, v19, v9, v21 - v9, (int *)(a1[8] + 44 * v8));
  }
  sub_777050((int)(uintptr_t)(v19), 0);
  gameswf::array_gameswf_TextAttributes_8af716::resize((gameswf::array<gameswf::TextAttributes> *)(a1 + 8), 0);
  v12 = a1[13];
  if ( v12 < 0 )
  {
    result = 4 * v12;
    do
    {
      v13 = (uint32_t *)(a1[12] + result);
      if ( v13 != nullptr )
        *v13 = 0;
      result += 4;
      ++v12;
    }
    while ( v12 != 0 );
  }
  v14 = a1[17];
  a1[13] = 0;
  if ( v14 < 0 )
  {
    result = 12 * v14;
    do
    {
      v15 = a1[16] + result;
      if ( v15 != 0 )
      {
        *(uint32_t *)v15 = 0;
        *(uint32_t *)(v15 + 4) = 0;
        *(uint8_t *)(v15 + 8) = 1;
      }
      result += 12;
      ++v14;
    }
    while ( v14 != 0 );
  }
  a1[17] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_wchar_t_id_624b87::Destroy  (binary VA: 0x1107900)
// Original: std::vector<wchar_t>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_wchar_t_id_624b87::Destroy(void **self)
{
  if ( *self != nullptr )
    opDelete(*self);
}

// ----------------------------------------------------------------------------
// Function: sub_110C870  (binary VA: 0x110c870)
// Original: sub_110C870
// ----------------------------------------------------------------------------
int sub_110C870()
{
  typedef int _g4_t_v1;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (11u + sizeof(_g4_t_v1)) > _g4_s0 ? (11u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v2)) > _g4_s1 ? (12u + sizeof(_g4_t_v2)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 11u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  gameswf::SymbolsForTransferWithPrevNeighbor = nullptr;
  *(uintptr_t *)(unk_21155D4) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21155D8) = (uintptr_t)(0);
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_wchar_t_id_624b87::Destroy,
    &gameswf::SymbolsForTransferWithPrevNeighbor,
    &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(dword_21155E0), "&nbsp;", (int)(uintptr_t)(&v2) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&dword_21155E4), "&amp;", (int)(uintptr_t)(&v2) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&dword_21155E8), "&gt;", (int)(uintptr_t)(&v2) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&dword_21155EC), "&lt;", (int)(uintptr_t)(&v2));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&dword_21155F0), (char *)&unk_1B15112, (int)(uintptr_t)(&v1));
  return __cxa_atexit((void (*)(void *))sub_10F9840, nullptr, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_110E800  (binary VA: 0x110e800)
// Original: sub_110E800
// ----------------------------------------------------------------------------
gameswf::Self * sub_110E800(int a1)
{
  gameswf::Self *v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  gameswf::Self *v14;
  gameswf::ASValue::Self *v15;
  int v16;
  int v17;
  int i;
  gameswf::Self *result;
  int v20;
  uint8_t *v21;
  int v22;
  uint8_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v2 = *(gameswf::Self **)(a1 + 208);
  if ( v2 != nullptr )
  {
    v3 = (*(uint16_t *)v2)-- == 1;
    if ( v3 )
      gameswf::free_internal(v2);
  }
  v4 = *(uint32_t *)(a1 + 196);
  if ( v4 <= 0 )
  {
    if ( v4 < 0 )
    {
      v30 = 32 * v4;
      do
      {
        v24 = *(uint32_t *)(a1 + 192) + v30;
        if ( v24 != 0 )
        {
          v25 = *(uint32_t *)(v24 + 16);
          *(uint8_t *)v24 = 1;
          v25 |= 0x7FFFFFu;
          *(uint8_t *)(v24 + 1) = 0;
          *(uint32_t *)(v24 + 16) = v25;
          *(uint8_t *)(v24 + 20) = 0;
          *(uint8_t *)(v24 + 21) = 0;
          *(uint8_t *)(v24 + 18) = BYTE2(v25) & 0x7F;
          *(uint8_t *)(v24 + 19) = HIBYTE(v25) | 1;
        }
        v30 += 32;
        ++v4;
      }
      while ( v4 != 0 );
    }
  }
  else
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v26 = v5;
        v6 = *(uint32_t *)(a1 + 192) + 32 * v5;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v6 + 20));
        if ( *(uint8_t *)v6 == 0xFF && (*(uint8_t *)(v6 + 19) & 1) != 0 )
          break;
        v5 = v26 + 1;
        if ( v26 + 1 == v4 )
          goto LABEL_10;
      }
      gameswf::free_internal(*(gameswf::Self **)(v6 + 12));
      v5 = v26 + 1;
    }
    while ( v26 + 1 != v4 );
  }
LABEL_10:
  v7 = *(uint32_t *)(a1 + 204);
  *(uint32_t *)(a1 + 196) = 0;
  if ( v7 == 0 )
  {
    v8 = *(gameswf::Self **)(a1 + 192);
    *(uint32_t *)(a1 + 200) = 0;
    if ( v8 != nullptr )
      gameswf::free_internal(v8);
    *(uint32_t *)(a1 + 192) = 0;
  }
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(a1 + 180));
  if ( *(uint32_t *)(a1 + 176) != 0 )
    gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(a1 + 176));
  v9 = *(uint32_t *)(a1 + 164);
  v10 = (uint32_t *)(a1 + 160);
  if ( v9 <= 0 )
  {
    if ( v9 < 0 )
    {
      v22 = 12 * v9;
      do
      {
        v23 = (uint8_t *)(v22 + *v10);
        if ( v23 != nullptr )
        {
          *v23 = 0;
          v23[1] = 0;
        }
        v22 += 12;
        ++v9;
      }
      while ( v9 != 0 );
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
    do
    {
      v27 = v12;
      v29 = v11;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v11 + *v10));
      v12 = v27 + 1;
      v11 = v29 + 12;
    }
    while ( v27 + 1 != v9 );
  }
  v13 = *(uint32_t *)(a1 + 172);
  *(uint32_t *)(a1 + 164) = 0;
  if ( v13 == 0 )
  {
    v14 = *(gameswf::Self **)(a1 + 160);
    *(uint32_t *)(a1 + 168) = 0;
    if ( v14 != nullptr )
      gameswf::free_internal(v14);
    *(uint32_t *)(a1 + 160) = 0;
  }
  v15 = (gameswf::ASValue::Self *)(a1 + 160);
  do
  {
    v15 = (gameswf::ASValue::Self *)((char *)v15 - 12);
    gameswf::ASValue::dropRefs(v15);
  }
  while ( (gameswf::ASValue::Self *)(a1 + 112) != v15 );
  v16 = *(uint32_t *)(a1 + 4);
  if ( v16 <= 0 )
  {
    if ( v16 < 0 )
    {
      v20 = 12 * v16;
      do
      {
        v21 = (uint8_t *)(v20 + *(uint32_t *)a1);
        if ( v21 != nullptr )
        {
          *v21 = 0;
          v21[1] = 0;
        }
        v20 += 12;
        ++v16;
      }
      while ( v16 != 0 );
    }
  }
  else
  {
    v17 = 0;
    for ( i = 0; i != v16; ++i )
    {
      v28 = v17;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v17 + *(uint32_t *)a1));
      v17 = v28 + 12;
    }
  }
  result = *(gameswf::Self **)(a1 + 12);
  *(uint32_t *)(a1 + 4) = 0;
  if ( result == nullptr )
  {
    result = *(gameswf::Self **)a1;
    v3 = *(uint32_t *)a1 == 0;
    *(uint32_t *)(a1 + 8) = 0;
    if ( !v3 )
      result = (gameswf::Self *)gameswf::free_internal(result);
    *(uint32_t *)a1 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1114380  (binary VA: 0x1114380)
// Original: sub_1114380
// ----------------------------------------------------------------------------
char * sub_1114380(int **a1, char *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  const char *v9;
  int v10;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  const char *v23;
  int v24;
  int v25;
  int v26;
  char *v27;
  int *v28;
  int v29;
  int v30;
  int *v31;
  int i;
  const char *v33;
  int v34;
  char *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  char *v40;
  size_t v41;
  char *v42;
  gameswf::Self *v43;
  int v44;
  int v45;
  int *v46;
  int v47;
  int v48;
  const char *v49;
  int v50;
  int v51;
  char *v52;
  int v53;
  int v54;
  int v55;
  int v56;
  typedef int *_g4_t_v57;
  typedef gameswf::String::Self *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef char *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int *_g4_t_v63;
  typedef int *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef char *_g4_t_v71;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef const char *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef const char *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef const char *_g4_t_v79;
  typedef char *_g4_t_v80;
  typedef char *_g4_t_v81;
  typedef int _g4_t_v82;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v57)) > _g4_s0 ? (4u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v58)) > _g4_s1 ? (4u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v59)) > _g4_s2 ? (4u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v60)) > _g4_s3 ? (4u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v61)) > _g4_s4 ? (4u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v62)) > _g4_s5 ? (4u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v63)) > _g4_s6 ? (8u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v64)) > _g4_s7 ? (8u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v65)) > _g4_s8 ? (16u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v66)) > _g4_s9 ? (16u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v67)) > _g4_s10 ? (16u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v68)) > _g4_s11 ? (16u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v69)) > _g4_s12 ? (16u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v71)) > _g4_s13 ? (20u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v73)) > _g4_s14 ? (24u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v74)) > _g4_s15 ? (24u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v75)) > _g4_s16 ? (24u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v76)) > _g4_s17 ? (28u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v77)) > _g4_s18 ? (28u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v78)) > _g4_s19 ? (28u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v79)) > _g4_s20 ? (28u + sizeof(_g4_t_v79)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v80)) > _g4_s21 ? (28u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v81)) > _g4_s22 ? (32u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v82)) > _g4_s23 ? (44u + sizeof(_g4_t_v82)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 8u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 16u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 16u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 24u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 24u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 24u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 28u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 28u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 28u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 28u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 28u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 32u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);

  v2 = *a1;
  if ( *a1 == nullptr )
    goto LABEL_28;
  v65 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v65 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *a2 == -1 )
    {
      v13 = *((char **)a2 + 3);
      v12 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v12 = *a2 - 1;
      v13 = a2 + 1;
    }
    v3 = 5381;
    v14 = 5381;
    if ( v12 > 0 )
    {
      do
      {
        --v12;
        v15 = 33 * v14;
        v16 = (uint8_t)v13[v12] + 32;
        if ( (uint8_t)(v13[v12] - 65) > 0x19u )
          v16 = (uint8_t)v13[v12];
        v14 = v15 ^ v16;
      }
      while ( v12 != 0 );
      v14 = v14 << 9 >> 9;
      v3 = v14;
    }
    *((uint32_t *)a2 + 4) = v14 & 0x7FFFFF | v65 & 0xFF800000;
    v2 = *a1;
  }
  else
  {
    v3 = v65 << 9 >> 9;
  }
  v76 = v2[1];
  v4 = v3 & v76;
  v5 = 4 * (v3 & v76);
  v6 = &v2[v5 + 2];
  if ( *v6 == -2 || v4 != (v2[v5 + 3] & v76) )
    goto LABEL_28;
  v7 = v2[v5 + 3];
  v66 = v3;
  while ( 1 )
  {
    if ( v7 != v66 )
      goto LABEL_7;
    v8 = v6[2];
    if ( a2 == (char *)v8 )
      break;
    if ( *a2 == -1 )
    {
      v77 = *((const char **)a2 + 3);
      if ( *(uint8_t *)v8 != 0xFF )
      {
LABEL_13:
        v9 = (const char *)(v8 + 1);
        goto LABEL_14;
      }
    }
    else
    {
      v77 = a2 + 1;
      if ( *(uint8_t *)v8 != 0xFF )
        goto LABEL_13;
    }
    v9 = *(const char **)(v8 + 12);
LABEL_14:
    v57 = v2;
    v10 = strcmp(v9, v77);
    v2 = v57;
    if ( v10 == 0 )
      break;
LABEL_7:
    v4 = *v6;
    if ( *v6 == -1 )
      goto LABEL_28;
    v6 = &v2[4 * v4 + 2];
    v7 = v2[4 * v4 + 3];
  }
  if ( v4 >= 0 )
    return (char *)v2[4 * v4 + 5];
LABEL_28:
  v17 = *a2;
  if ( *a2 == -1 )
    v18 = *((uint32_t *)a2 + 1) - 1;
  else
    v18 = v17 - 1;
  if ( v18 <= 13 )
  {
    v27 = (char *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(a1 + 1), 20);
    v40 = a2 + 1;
    if ( *a2 == -1 )
      v40 = *((char **)a2 + 3);
    if ( v27 != nullptr )
    {
      *v27 = 1;
      v27[1] = 0;
      if ( v40 != nullptr )
      {
        v60 = (uint32_t *)(v27);
        v41 = strlen(v40);
        gameswf::String::resize((gameswf::String::Self *)v60, v41);
        v42 = (char *)(v41 + 1);
        v43 = (gameswf::Self *)((char *)v60 + 1);
        if ( *(uint8_t *)v60 == 0xFF )
          v43 = (gameswf::Self *)v60[3];
        gameswf::Strcpy_s(v43, v42, (gameswf::Self *)v40);
        v27 = (char *)v60;
      }
      v44 = *((uint32_t *)v27 + 4) | 0x7FFFFF;
      *((uint32_t *)v27 + 4) = v44;
      v27[19] = HIBYTE(v44) | 1;
      v27[18] = BYTE2(v44) | 0x80;
    }
  }
  else
  {
    v19 = v17 - 1;
    if ( v17 == -1 )
      v19 = *((uint32_t *)a2 + 1) - 1;
    v20 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(a1 + 1), v19 + 21);
    v21 = v20;
    if ( v20 != 0 )
    {
      *(uint8_t *)v20 = 1;
      *(uint8_t *)(v20 + 1) = 0;
      v22 = *(uint32_t *)(v20 + 16) | 0x7FFFFF;
      *(uint32_t *)(v21 + 16) = v22;
      *(uint8_t *)(v21 + 19) = HIBYTE(v22) | 1;
      *(uint8_t *)(v21 + 18) = BYTE2(v22) | 0x80;
    }
    v23 = a2 + 1;
    if ( *a2 == -1 )
      v23 = *((const char **)a2 + 3);
    v24 = v21 + 20;
    v58 = (gameswf::String::Self *)v21;
    strcpy((char *)(v21 + 20), v23);
    v25 = *a2 - 1;
    if ( *a2 == -1 )
      v25 = *((uint32_t *)a2 + 1) - 1;
    v26 = v25 + 1;
    gameswf::String::resize(v58, 0);
    v27 = (char *)v58;
    *((uint32_t *)v58 + 3) = v24;
    *(uint8_t *)v58 = -1;
    *((uint32_t *)v58 + 1) = v26;
    *((uint32_t *)v58 + 2) = v26;
    *((uint8_t *)v58 + 19) &= ~1u;
  }
  v81 = v27;
  v28 = *a1;
  if ( *a1 == nullptr )
    goto LABEL_77;
  v78 = *((uint32_t *)v27 + 4);
  if ( (uint8_t *)(v78 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v27 == -1 )
    {
      v35 = *((char **)v27 + 3);
      v36 = *((uint32_t *)v27 + 1) - 1;
    }
    else
    {
      v35 = v27 + 1;
      v36 = *v27 - 1;
    }
    v73 = 5381;
    v37 = 5381;
    if ( v36 > 0 )
    {
      do
      {
        --v36;
        v38 = 33 * v37;
        v39 = (uint8_t)v35[v36] + 32;
        if ( (uint8_t)(v35[v36] - 65) > 0x19u )
          v39 = (uint8_t)v35[v36];
        v37 = v38 ^ v39;
      }
      while ( v36 != 0 );
      v37 = v37 << 9 >> 9;
      v73 = v37;
    }
    *((uint32_t *)v27 + 4) = v37 & 0x7FFFFF | v78 & 0xFF800000;
    v29 = v73;
    v28 = *a1;
  }
  else
  {
    v73 = v78 << 9 >> 9;
    v29 = v73;
  }
  v30 = v28[1] & v29;
  v31 = &v28[4 * v30 + 2];
  if ( *v31 == -2 || v30 != (v28[4 * v30 + 3] & v28[1]) )
    goto LABEL_77;
  for ( i = v28[4 * v30 + 3]; ; i = v28[4 * v30 + 3] )
  {
    if ( i == v73 )
    {
      v67 = v31[2];
      if ( v27 == (char *)v67 )
        break;
      v79 = *v27 == -1 ? *((const char **)v27 + 3) : v27 + 1;
      v33 = *(uint8_t *)v67 == 0xFF ? *(const char **)(v67 + 12) : (const char *)(v67 + 1);
      v59 = v27;
      v63 = v28;
      v34 = strcmp(v33, v79);
      v27 = v59;
      v28 = v63;
      if ( v34 == 0 )
        break;
    }
    v30 = *v31;
    if ( *v31 == -1 )
      goto LABEL_77;
    v31 = &v28[4 * v30 + 2];
  }
  if ( v30 >= 0 )
  {
LABEL_56:
    v28[4 * v30 + 5] = (int)(uintptr_t)(v27);
  }
  else
  {
LABEL_77:
    v61 = v27;
    v82 = 0;
    gameswf::hash_gameswf_StringPointer_ga_128477::add(
      a1,
      &v81,
      &v82);
    v27 = v61;
    v28 = *a1;
    if ( *a1 == nullptr )
      goto LABEL_99;
    v80 = v81;
    v68 = *((uint32_t *)v81 + 4);
    if ( (uint8_t *)(v68 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *v81 == -1 )
      {
        v53 = *((uint32_t *)v81 + 1) - 1;
        v52 = *((char **)v81 + 3);
      }
      else
      {
        v52 = v81 + 1;
        v53 = *v81 - 1;
      }
      v74 = 5381;
      v54 = 5381;
      if ( v53 > 0 )
      {
        do
        {
          --v53;
          v55 = 33 * v54;
          v56 = (uint8_t)v52[v53] + 32;
          if ( (uint8_t)(v52[v53] - 65) > 0x19u )
            v56 = (uint8_t)v52[v53];
          v54 = v55 ^ v56;
        }
        while ( v53 != 0 );
        v27 = v61;
        v54 = v54 << 9 >> 9;
        v74 = v54;
      }
      *((uint32_t *)v81 + 4) = v54 & 0x7FFFFF | v68 & 0xFF800000;
      v45 = v74;
      v28 = *a1;
    }
    else
    {
      v74 = v68 << 9 >> 9;
      v45 = v74;
    }
    v30 = v28[1] & v45;
    v46 = &v28[4 * v30 + 2];
    if ( *v46 != -2 && v30 == (v28[4 * v30 + 3] & v28[1]) )
    {
      v71 = v27;
      v47 = v28[4 * v30 + 3];
      v48 = v74;
      while ( 1 )
      {
        if ( v47 == v48 )
        {
          v69 = v46[2];
          if ( (char *)v69 == v80 )
            break;
          v75 = *v80 == -1 ? *((const char **)v80 + 3) : v80 + 1;
          v49 = *(uint8_t *)v69 == 0xFF ? *(const char **)(v69 + 12) : (const char *)(v69 + 1);
          v62 = v48;
          v64 = v28;
          v50 = strcmp(v49, v75);
          v48 = v62;
          v28 = v64;
          if ( v50 == 0 )
            break;
        }
        v30 = *v46;
        if ( *v46 == -1 )
        {
          v27 = v71;
          goto LABEL_99;
        }
        v46 = &v28[4 * v30 + 2];
        v47 = v28[4 * v30 + 3];
      }
      v27 = v71;
      if ( v30 >= 0 )
        goto LABEL_56;
      v51 = 16 * v30 + 8;
    }
    else
    {
LABEL_99:
      v51 = -8;
    }
    *(int *)((char *)v28 + v51 + 12) = (int)(uintptr_t)(v27);
  }
  return v27;
}

// ----------------------------------------------------------------------------
// Function: sub_111BAA0  (binary VA: 0x111baa0)
// Original: sub_111BAA0
// ----------------------------------------------------------------------------
char * sub_111BAA0()
{
  dword_20D6388 |= 0x7FFFFFu;
  byte_20D6378 = 1;
  byte_20D6379 = 0;
  BYTE2(dword_20D6388) &= ~0x80u;
  HIBYTE(dword_20D6388) |= 1u;
  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
  __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
  return (char *)(&byte_20D6378);
}

// ----------------------------------------------------------------------------
// Function: sub_111BC00  (binary VA: 0x111bc00)
// Original: sub_111BC00
// ----------------------------------------------------------------------------
int sub_111BC00(int a1, char *a2)
{
  char *v2;
  int v4;
  gameswf::Self *v5;
  char *v6;
  gameswf::Self *v7;
  int v8;
  unsigned int v9;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;

  v2 = a2;
  *(uint8_t *)a1 = 1;
  *(uint8_t *)(a1 + 1) = 0;
  if ( *a2 == -1 )
    v4 = *((uint32_t *)a2 + 1) - 1;
  else
    v4 = *a2 - 1;
  gameswf::String::resize((gameswf::String::Self *)a1, v4);
  v5 = (gameswf::Self *)(v2 + 1);
  if ( *v2 == -1 )
    v5 = *((gameswf::Self **)v2 + 3);
  LOBYTE(v6) = *(uint8_t *)a1;
  if ( *(uint8_t *)a1 == 0xFF )
  {
    v6 = *(char **)(a1 + 4);
    v7 = *(gameswf::Self **)(a1 + 12);
  }
  else
  {
    v6 = (char *)(char)(uintptr_t)(v6);
    v7 = (gameswf::Self *)(a1 + 1);
  }
  gameswf::Strcpy_s(v7, v6, v5);
  v15 = *((uint32_t *)v2 + 4);
  if ( (uint8_t *)(v15 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v2 == -1 )
    {
      v11 = *((char **)v2 + 3);
      v12 = *((uint32_t *)v2 + 1) - 1;
    }
    else
    {
      v11 = v2 + 1;
      v12 = *v2 - 1;
    }
    v8 = 5381;
    if ( v12 > 0 )
    {
      v16 = v2;
      do
      {
        --v12;
        v13 = 33 * v8;
        v14 = (uint8_t)v11[v12] + 32;
        if ( (uint8_t)(v11[v12] - 65) > 0x19u )
          v14 = (uint8_t)v11[v12];
        v8 = v13 ^ v14;
      }
      while ( v12 != 0 );
      v2 = v16;
      v8 = v8 << 9 >> 9;
    }
    *((uint32_t *)v2 + 4) = v8 & 0x7FFFFF | v15 & 0xFF800000;
  }
  else
  {
    v8 = v15 << 9 >> 9;
  }
  v9 = v8 & 0x7FFFFF | *(uint32_t *)(a1 + 16) & 0xFF800000;
  *(uint32_t *)(a1 + 16) = v9;
  *(uint8_t *)(a1 + 18) = BYTE2(v9) & 0x7F;
  *(uint8_t *)(a1 + 19) = HIBYTE(v9) | 1;
  return HIWORD(v9) & 0x7F;
}

// ----------------------------------------------------------------------------
// Function: sub_111CD90  (binary VA: 0x111cd90)
// Original: sub_111CD90
// ----------------------------------------------------------------------------
int sub_111CD90(int result, char *a2, int a3)
{
  gameswf::ASValue::Self *v3;
  char v4; // di
  int v5;
  char *v6;
  char v7;
  int v8;
  char *v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  int v12;
  unsigned int v13;
  gameswf::ASValue::Self *i;
  char v15;
  int v16;
  int v17;
  int v18;
  int v19;
  typedef gameswf::ASValue::Self *_g4_t_v20;
  typedef const gameswf::ASValue::Self *_g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v24;
  typedef gameswf::Self **_g4_t_v25;
  typedef gameswf::ASValue::Self *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef uint8_t _g4_t_v28[12];
  typedef uint8_t _g4_t_v29[12];
  typedef uint16_t _g4_t_v30[6];
  typedef int _g4_t_v31;
  typedef gameswf::Self *_g4_t_v32[3];
  typedef gameswf::Self *_g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v22)) > _g4_s2 ? (32u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v24)) > _g4_s3 ? (44u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v25)) > _g4_s4 ? (48u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v26)) > _g4_s5 ? (52u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v27)) > _g4_s6 ? (60u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v28)) > _g4_s7 ? (80u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v29)) > _g4_s8 ? (92u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v30)) > _g4_s9 ? (104u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (116u + sizeof(_g4_t_v31)) > _g4_s10 ? (116u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v32)) > _g4_s11 ? (120u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (132u + sizeof(_g4_t_v33)) > _g4_s12 ? (132u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v34)) > _g4_s13 ? (136u + sizeof(_g4_t_v34)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 116u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 120u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 132u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 136u);

  v26 = (gameswf::ASValue::Self *)result;
  if ( (char *)result != a2 )
  {
    result += 12;
    if ( a2 != (char *)result )
    {
      v27 = (char *)v26 + 24;
      v25 = (gameswf::Self **)(a3 + 4);
      do
      {
        v3 = (gameswf::ASValue::Self *)(v27 - 12);
        v29[0] = 0;
        v29[1] = 0;
        v30[0] = 0;
        gameswf::ASValue::getMember((gameswf::ASValue::Self *)(v27 - 12), v25, (gameswf::ASValue::Self *)v29);
        gameswf::ASValue::getMember(v26, v25, (gameswf::ASValue::Self *)v30);
        v4 = gameswf::StandardArraySorter::opCall(a3, (gameswf::ASValue::Self *)v29, (gameswf::ASValue::Self *)v30);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v30);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v29);
        if ( v4 != 0 )
        {
          v30[0] = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v30, v3);
          v5 = -1431655765 * ((v3 - v26) >> 2);
          if ( v5 > 0 )
          {
            do
            {
              v3 = (gameswf::ASValue::Self *)((char *)v3 - 12);
              gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)v3 + 12), v3);
              --v5;
            }
            while ( v5 != 0 );
          }
          gameswf::ASValue::opAssign(v26, (const gameswf::ASValue::Self *)v30);
          result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v30);
          v6 = v27;
          goto LABEL_8;
        }
        LOWORD(v32[0]) = 1;
        v31 = *(uint32_t *)a3;
        v7 = *(uint8_t *)(a3 + 4);
        if ( v7 == -1 )
          v8 = *(uint32_t *)(a3 + 8) - 1;
        else
          v8 = v7 - 1;
        gameswf::String::resize((gameswf::String::Self *)v32, v8);
        if ( *(uint8_t *)(a3 + 4) == 0xFF )
        {
          LOBYTE(v9) = (uint8_t)(uintptr_t)(v32[0]);
          v10 = *(gameswf::Self **)(a3 + 16);
          if ( LOBYTE(v32[0]) != 0xFF )
          {
LABEL_14:
            v9 = (char *)(char)(uintptr_t)(v9);
            v11 = (gameswf::Self *)((char *)v32 + 1);
            goto LABEL_15;
          }
        }
        else
        {
          LOBYTE(v9) = (uint8_t)(uintptr_t)(v32[0]);
          v10 = (gameswf::Self *)(a3 + 5);
          if ( LOBYTE(v32[0]) != 0xFF )
            goto LABEL_14;
        }
        v9 = (char *)v32[1];
        v11 = v33;
LABEL_15:
        gameswf::Strcpy_s(v11, v9, v10);
        v24 = *(uint32_t *)(a3 + 20);
        if ( (uint8_t *)(v24 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          v15 = *(uint8_t *)(a3 + 4);
          if ( v15 == -1 )
          {
            v17 = *(uint32_t *)(a3 + 16);
            v16 = *(uint32_t *)(a3 + 8) - 1;
          }
          else
          {
            v16 = v15 - 1;
            v17 = a3 + 5;
          }
          v12 = 5381;
          if ( v16 > 0 )
          {
            do
            {
              --v16;
              v18 = 33 * v12;
              v19 = *(uint8_t *)(v17 + v16) + 32;
              if ( (uint8_t)(*(uint8_t *)(v17 + v16) - 65) > 0x19u )
                v19 = *(uint8_t *)(v17 + v16);
              v12 = v18 ^ v19;
            }
            while ( v16 != 0 );
            v3 = (gameswf::ASValue::Self *)(v27 - 12);
            v12 = v12 << 9 >> 9;
          }
          *(uint32_t *)(a3 + 20) = v12 & 0x7FFFFF | v24 & 0xFF800000;
        }
        else
        {
          v12 = v24 << 9 >> 9;
        }
        v13 = v12 & 0x7FFFFF | v34 & 0xFF800000;
        LOWORD(v34) = v13;
        v28[0] = 0;
        v28[1] = 0;
        BYTE2(v34) = BYTE2(v13) & 0x7F;
        HIBYTE(v34) = HIBYTE(v13) | 1;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v28, (const gameswf::ASValue::Self *)(v27 - 12));
        for ( i = (gameswf::ASValue::Self *)(v27 - 24); ; i = (gameswf::ASValue::Self *)((char *)i - 12) )
        {
          v29[0] = 0;
          v29[1] = 0;
          v30[0] = 0;
          gameswf::ASValue::getMember((gameswf::ASValue::Self *)v28, v32, (gameswf::ASValue::Self *)v29);
          gameswf::ASValue::getMember(i, v32, (gameswf::ASValue::Self *)v30);
          v22 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(&v31), (gameswf::ASValue::Self *)v29, (gameswf::ASValue::Self *)v30);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v30);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v29);
          if ( v22 == 0 )
            break;
          v21 = i;
          v20 = v3;
          v3 = i;
          gameswf::ASValue::opAssign(v20, v21);
        }
        gameswf::ASValue::opAssign(v3, (const gameswf::ASValue::Self *)v28);
        result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v28);
        if ( LOBYTE(v32[0]) == 0xFF )
        {
          if ( (v34 & 0x1000000) == 0 )
          {
            v6 = v27;
            goto LABEL_8;
          }
          result = gameswf::free_internal(v33);
        }
        v6 = v27;
LABEL_8:
        v27 += 12;
      }
      while ( a2 != v6 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_111D1D0  (binary VA: 0x111d1d0)
// Original: sub_111D1D0
// ----------------------------------------------------------------------------
int sub_111D1D0(int a1, int a2, int a3, gameswf::ASValue::Self *a4, int *a5)
{
  int v5;
  int v6;
  gameswf::ASValue::Self *v7;
  int result;
  int i;
  typedef char _g4_t_v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef gameswf::Self **_g4_t_v14;
  typedef gameswf::ASValue::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v18[12];
  typedef uint8_t _g4_t_v19[12];
  typedef uint8_t _g4_t_v20[12];
  typedef int _g4_t_v21;
  typedef gameswf::Self *_g4_t_v22[10];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (11u + sizeof(_g4_t_v10)) > _g4_s0 ? (11u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v14)) > _g4_s3 ? (32u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v15)) > _g4_s4 ? (36u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v18)) > _g4_s6 ? (64u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v19)) > _g4_s7 ? (76u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v20)) > _g4_s8 ? (88u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v21)) > _g4_s9 ? (100u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v22)) > _g4_s10 ? (104u + sizeof(_g4_t_v22)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 11u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);

  if ( (a3 - 1) / 2 <= a2 )
  {
    v6 = a2;
    v7 = (gameswf::ASValue::Self *)(a1 + 12 * a2);
    v14 = (gameswf::Self **)(a5 + 1);
  }
  else
  {
    v5 = a2;
    v14 = (gameswf::Self **)(a5 + 1);
    while ( 1 )
    {
      v6 = 2 * (v5 + 1);
      v11 = v5;
      v19[0] = 0;
      v19[1] = 0;
      v20[0] = 0;
      v20[1] = 0;
      v15 = (gameswf::ASValue::Self *)(a1 + 12 * (v6 - 1));
      v7 = (gameswf::ASValue::Self *)(a1 + 24 * (v5 + 1));
      gameswf::ASValue::getMember(v7, v14, (gameswf::ASValue::Self *)v19);
      gameswf::ASValue::getMember(v15, v14, (gameswf::ASValue::Self *)v20);
      v10 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(a5), (gameswf::ASValue::Self *)v19, (gameswf::ASValue::Self *)v20);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
      if ( v10 != 0 )
      {
        --v6;
        v7 = v15;
      }
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(a1 + 12 * v11), v7);
      if ( (a3 - 1) / 2 <= v6 )
        break;
      v5 = v6;
    }
  }
  if ( (a3 & 1) == 0 && v6 == (a3 - 2) / 2 )
  {
    v6 = 2 * v6 + 1;
    gameswf::ASValue::opAssign(v7, (const gameswf::ASValue::Self *)(a1 + 12 * v6));
    v7 = (gameswf::ASValue::Self *)(a1 + 12 * v6);
  }
  v21 = *a5;
  sub_111BC00((int)(uintptr_t)(v22), (char *)v14);
  v18[0] = 0;
  v18[1] = 0;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v18, a4);
  if ( v6 > a2 )
  {
    v16 = v6;
    for ( i = (v6 - 1) / 2; ; i = (i - 1) / 2 )
    {
      v19[0] = 0;
      v19[1] = 0;
      v20[0] = 0;
      v20[1] = 0;
      gameswf::ASValue::getMember((gameswf::ASValue::Self *)(a1 + 12 * i), v22, (gameswf::ASValue::Self *)v19);
      gameswf::ASValue::getMember((gameswf::ASValue::Self *)v18, v22, (gameswf::ASValue::Self *)v20);
      v12 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(&v21), (gameswf::ASValue::Self *)v19, (gameswf::ASValue::Self *)v20);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
      if ( v12 == 0 )
      {
        v7 = (gameswf::ASValue::Self *)(a1 + 12 * v16);
        goto LABEL_11;
      }
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(a1 + 12 * v16), (const gameswf::ASValue::Self *)(a1 + 12 * i));
      if ( a2 >= i )
        break;
      v16 = i;
    }
    v7 = (gameswf::ASValue::Self *)(a1 + 12 * i);
  }
LABEL_11:
  gameswf::ASValue::opAssign(v7, (const gameswf::ASValue::Self *)v18);
  result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
  if ( LOBYTE(v22[0]) == 0xFF && (HIBYTE(v22[4]) & 1) != 0 )
    return gameswf::free_internal(v22[3]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_111D530  (binary VA: 0x111d530)
// Original: sub_111D530
// ----------------------------------------------------------------------------
int sub_111D530(gameswf::ASValue::Self *a1, const gameswf::ASValue::Self *a2, int a3, int a4)
{
  int result;
  char v5;
  int v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::Self *v9;
  int v10;
  unsigned int v11;
  int v12;
  gameswf::Self *v13;
  char *v14;
  gameswf::Self *v15;
  int v16;
  unsigned int v17;
  int v18;
  gameswf::Self *v19;
  char *v20;
  gameswf::Self *v21;
  int v22;
  unsigned int v23;
  char v24;
  int v25;
  gameswf::Self *v26;
  char *v27;
  gameswf::Self *v28;
  int v29;
  unsigned int v30;
  bool v31; // cc
  gameswf::Self *v32;
  int v33;
  int v34;
  gameswf::Self *v35;
  int v36;
  int v37;
  int v38;
  char v39;
  int v40;
  int v41;
  int v42;
  int v43;
  char v44;
  int v45;
  int v46;
  int v47;
  int v48;
  const gameswf::ASValue::Self *i;
  int v50;
  unsigned int v51;
  int v52;
  gameswf::Self *v53;
  char *v54;
  gameswf::Self *v55;
  uint8_t *v56;
  int v57;
  int v58;
  int v59;
  int v60;
  gameswf::Self *v61;
  char *v62;
  gameswf::Self *v63;
  int v64;
  unsigned int v65;
  int v66;
  gameswf::Self *v67;
  char *v68;
  gameswf::Self *v69;
  int v70;
  unsigned int v71;
  gameswf::Self *v72;
  int v73;
  int v74;
  int v75;
  uint8_t *v76;
  int v77;
  int v78;
  int v79;
  typedef const gameswf::ASValue::Self *_g4_t_v80;
  typedef char _g4_t_v81;
  typedef char _g4_t_v82;
  typedef char _g4_t_v83;
  typedef char _g4_t_v84;
  typedef char _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef int _g4_t_v88;
  typedef const gameswf::ASValue::Self *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef const gameswf::ASValue::Self *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v95;
  typedef gameswf::ASValue::Self *_g4_t_v96;
  typedef gameswf::ASValue::Self *_g4_t_v97;
  typedef int _g4_t_v98;
  typedef gameswf::ASValue::Self *_g4_t_v99;
  typedef gameswf::ASValue::Self *_g4_t_v100;
  typedef uint8_t _g4_t_v101[12];
  typedef uint8_t _g4_t_v102[12];
  typedef uint8_t _g4_t_v103[12];
  typedef uint16_t _g4_t_v104[6];
  typedef unsigned int _g4_t_v105;
  typedef gameswf::Self *_g4_t_v106[7];
  typedef unsigned int _g4_t_v107;
  typedef char _g4_t_v108;
  typedef uint8_t _g4_t_v109[15];
  typedef unsigned int _g4_t_v110;
  typedef unsigned int _g4_t_v111;
  typedef char _g4_t_v112;
  typedef uint8_t _g4_t_v113[3];
  typedef char *_g4_t_v114;
  typedef gameswf::Self *_g4_t_v115;
  typedef unsigned int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef char _g4_t_v118;
  typedef char _g4_t_v119;
  typedef char *_g4_t_v120;
  typedef gameswf::Self *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef char _g4_t_v124;
  typedef uint8_t _g4_t_v125[3];
  typedef char *_g4_t_v126;
  typedef gameswf::Self *_g4_t_v127;
  typedef unsigned int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef gameswf::Self *_g4_t_v130[7];
  typedef unsigned int _g4_t_v131;
  typedef char _g4_t_v132;
  typedef uint8_t _g4_t_v133[15];
  typedef unsigned int _g4_t_v134;
  typedef unsigned int _g4_t_v135;
  typedef char _g4_t_v136;
  typedef char _g4_t_v137;
  typedef char *_g4_t_v138;
  typedef gameswf::Self *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef unsigned int _g4_t_v141;
  typedef char _g4_t_v142;
  typedef char _g4_t_v143;
  typedef char *_g4_t_v144;
  typedef gameswf::Self *_g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef gameswf::Self *_g4_t_v148[3];
  typedef gameswf::Self *_g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef gameswf::Self *_g4_t_v152[3];
  typedef gameswf::Self *_g4_t_v153;
  typedef int _g4_t_v154;
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (4u + sizeof(_g4_t_v80)) > _g4_s0 ? (4u + sizeof(_g4_t_v80)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v81)) > _g4_s1 ? (24u + sizeof(_g4_t_v81)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v82)) > _g4_s2 ? (24u + sizeof(_g4_t_v82)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v83)) > _g4_s3 ? (24u + sizeof(_g4_t_v83)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v84)) > _g4_s4 ? (24u + sizeof(_g4_t_v84)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v85)) > _g4_s5 ? (24u + sizeof(_g4_t_v85)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v86)) > _g4_s6 ? (24u + sizeof(_g4_t_v86)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v87)) > _g4_s7 ? (24u + sizeof(_g4_t_v87)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v88)) > _g4_s8 ? (28u + sizeof(_g4_t_v88)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v89)) > _g4_s9 ? (36u + sizeof(_g4_t_v89)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v90)) > _g4_s10 ? (40u + sizeof(_g4_t_v90)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v91)) > _g4_s11 ? (40u + sizeof(_g4_t_v91)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v92)) > _g4_s12 ? (40u + sizeof(_g4_t_v92)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v93)) > _g4_s13 ? (44u + sizeof(_g4_t_v93)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v95)) > _g4_s14 ? (52u + sizeof(_g4_t_v95)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v96)) > _g4_s15 ? (52u + sizeof(_g4_t_v96)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v97)) > _g4_s16 ? (52u + sizeof(_g4_t_v97)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v98)) > _g4_s17 ? (52u + sizeof(_g4_t_v98)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v99)) > _g4_s18 ? (56u + sizeof(_g4_t_v99)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v100)) > _g4_s19 ? (56u + sizeof(_g4_t_v100)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v101)) > _g4_s20 ? (64u + sizeof(_g4_t_v101)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v102)) > _g4_s21 ? (76u + sizeof(_g4_t_v102)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v103)) > _g4_s22 ? (88u + sizeof(_g4_t_v103)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v104)) > _g4_s23 ? (100u + sizeof(_g4_t_v104)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v105)) > _g4_s24 ? (112u + sizeof(_g4_t_v105)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v106)) > _g4_s25 ? (116u + sizeof(_g4_t_v106)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v107)) > _g4_s26 ? (144u + sizeof(_g4_t_v107)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v108)) > _g4_s27 ? (148u + sizeof(_g4_t_v108)) : _g4_s27,
    _g4_s29 = (149u + sizeof(_g4_t_v109)) > _g4_s28 ? (149u + sizeof(_g4_t_v109)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v110)) > _g4_s29 ? (164u + sizeof(_g4_t_v110)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v111)) > _g4_s30 ? (176u + sizeof(_g4_t_v111)) : _g4_s30,
    _g4_s32 = (180u + sizeof(_g4_t_v112)) > _g4_s31 ? (180u + sizeof(_g4_t_v112)) : _g4_s31,
    _g4_s33 = (181u + sizeof(_g4_t_v113)) > _g4_s32 ? (181u + sizeof(_g4_t_v113)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v114)) > _g4_s33 ? (184u + sizeof(_g4_t_v114)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v115)) > _g4_s34 ? (192u + sizeof(_g4_t_v115)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v116)) > _g4_s35 ? (196u + sizeof(_g4_t_v116)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v117)) > _g4_s36 ? (208u + sizeof(_g4_t_v117)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v118)) > _g4_s37 ? (212u + sizeof(_g4_t_v118)) : _g4_s37,
    _g4_s39 = (213u + sizeof(_g4_t_v119)) > _g4_s38 ? (213u + sizeof(_g4_t_v119)) : _g4_s38,
    _g4_s40 = (216u + sizeof(_g4_t_v120)) > _g4_s39 ? (216u + sizeof(_g4_t_v120)) : _g4_s39,
    _g4_s41 = (224u + sizeof(_g4_t_v121)) > _g4_s40 ? (224u + sizeof(_g4_t_v121)) : _g4_s40,
    _g4_s42 = (228u + sizeof(_g4_t_v122)) > _g4_s41 ? (228u + sizeof(_g4_t_v122)) : _g4_s41,
    _g4_s43 = (240u + sizeof(_g4_t_v123)) > _g4_s42 ? (240u + sizeof(_g4_t_v123)) : _g4_s42,
    _g4_s44 = (244u + sizeof(_g4_t_v124)) > _g4_s43 ? (244u + sizeof(_g4_t_v124)) : _g4_s43,
    _g4_s45 = (245u + sizeof(_g4_t_v125)) > _g4_s44 ? (245u + sizeof(_g4_t_v125)) : _g4_s44,
    _g4_s46 = (248u + sizeof(_g4_t_v126)) > _g4_s45 ? (248u + sizeof(_g4_t_v126)) : _g4_s45,
    _g4_s47 = (256u + sizeof(_g4_t_v127)) > _g4_s46 ? (256u + sizeof(_g4_t_v127)) : _g4_s46,
    _g4_s48 = (260u + sizeof(_g4_t_v128)) > _g4_s47 ? (260u + sizeof(_g4_t_v128)) : _g4_s47,
    _g4_s49 = (272u + sizeof(_g4_t_v129)) > _g4_s48 ? (272u + sizeof(_g4_t_v129)) : _g4_s48,
    _g4_s50 = (276u + sizeof(_g4_t_v130)) > _g4_s49 ? (276u + sizeof(_g4_t_v130)) : _g4_s49,
    _g4_s51 = (304u + sizeof(_g4_t_v131)) > _g4_s50 ? (304u + sizeof(_g4_t_v131)) : _g4_s50,
    _g4_s52 = (308u + sizeof(_g4_t_v132)) > _g4_s51 ? (308u + sizeof(_g4_t_v132)) : _g4_s51,
    _g4_s53 = (309u + sizeof(_g4_t_v133)) > _g4_s52 ? (309u + sizeof(_g4_t_v133)) : _g4_s52,
    _g4_s54 = (324u + sizeof(_g4_t_v134)) > _g4_s53 ? (324u + sizeof(_g4_t_v134)) : _g4_s53,
    _g4_s55 = (336u + sizeof(_g4_t_v135)) > _g4_s54 ? (336u + sizeof(_g4_t_v135)) : _g4_s54,
    _g4_s56 = (340u + sizeof(_g4_t_v136)) > _g4_s55 ? (340u + sizeof(_g4_t_v136)) : _g4_s55,
    _g4_s57 = (341u + sizeof(_g4_t_v137)) > _g4_s56 ? (341u + sizeof(_g4_t_v137)) : _g4_s56,
    _g4_s58 = (344u + sizeof(_g4_t_v138)) > _g4_s57 ? (344u + sizeof(_g4_t_v138)) : _g4_s57,
    _g4_s59 = (352u + sizeof(_g4_t_v139)) > _g4_s58 ? (352u + sizeof(_g4_t_v139)) : _g4_s58,
    _g4_s60 = (356u + sizeof(_g4_t_v140)) > _g4_s59 ? (356u + sizeof(_g4_t_v140)) : _g4_s59,
    _g4_s61 = (368u + sizeof(_g4_t_v141)) > _g4_s60 ? (368u + sizeof(_g4_t_v141)) : _g4_s60,
    _g4_s62 = (372u + sizeof(_g4_t_v142)) > _g4_s61 ? (372u + sizeof(_g4_t_v142)) : _g4_s61,
    _g4_s63 = (373u + sizeof(_g4_t_v143)) > _g4_s62 ? (373u + sizeof(_g4_t_v143)) : _g4_s62,
    _g4_s64 = (376u + sizeof(_g4_t_v144)) > _g4_s63 ? (376u + sizeof(_g4_t_v144)) : _g4_s63,
    _g4_s65 = (384u + sizeof(_g4_t_v145)) > _g4_s64 ? (384u + sizeof(_g4_t_v145)) : _g4_s64,
    _g4_s66 = (388u + sizeof(_g4_t_v146)) > _g4_s65 ? (388u + sizeof(_g4_t_v146)) : _g4_s65,
    _g4_s67 = (400u + sizeof(_g4_t_v147)) > _g4_s66 ? (400u + sizeof(_g4_t_v147)) : _g4_s66,
    _g4_s68 = (404u + sizeof(_g4_t_v148)) > _g4_s67 ? (404u + sizeof(_g4_t_v148)) : _g4_s67,
    _g4_s69 = (416u + sizeof(_g4_t_v149)) > _g4_s68 ? (416u + sizeof(_g4_t_v149)) : _g4_s68,
    _g4_s70 = (420u + sizeof(_g4_t_v150)) > _g4_s69 ? (420u + sizeof(_g4_t_v150)) : _g4_s69,
    _g4_s71 = (432u + sizeof(_g4_t_v151)) > _g4_s70 ? (432u + sizeof(_g4_t_v151)) : _g4_s70,
    _g4_s72 = (436u + sizeof(_g4_t_v152)) > _g4_s71 ? (436u + sizeof(_g4_t_v152)) : _g4_s71,
    _g4_s73 = (448u + sizeof(_g4_t_v153)) > _g4_s72 ? (448u + sizeof(_g4_t_v153)) : _g4_s72,
    _g4_s74 = (452u + sizeof(_g4_t_v154)) > _g4_s73 ? (452u + sizeof(_g4_t_v154)) : _g4_s73
  };
  alignas(16) uint8_t _g4_sf[_g4_s74];
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 4u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 24u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 24u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 24u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 24u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 24u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 24u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 24u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 28u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 36u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 40u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 40u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 40u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 44u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 52u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 52u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 52u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 56u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 56u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 64u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 76u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 88u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 100u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 112u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 116u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 144u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 148u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 149u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 164u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 176u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 180u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 181u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 184u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 192u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 196u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 208u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 212u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 213u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 216u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 224u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 228u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 240u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 244u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 245u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 248u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 256u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 260u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 272u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 276u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 304u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 308u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 309u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 324u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 336u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 340u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 341u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 344u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 352u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 356u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 368u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 372u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 373u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 376u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 384u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 388u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 400u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 404u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 416u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 420u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 432u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 436u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 448u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 452u);

  result = a2 - a1;
  v89 = a2;
  v95 = result;
  if ( result <= 203 )
    return result;
  while ( a3 != 0 )
  {
    --a3;
    v124 = 1;
    v125[0] = 0;
    v123 = *(uint32_t *)a4;
    v5 = *(uint8_t *)(a4 + 4);
    if ( v5 == -1 )
      v6 = *(uint32_t *)(a4 + 8) - 1;
    else
      v6 = v5 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v124, v6);
    if ( *(uint8_t *)(a4 + 4) == 0xFF )
      v7 = *(gameswf::Self **)(a4 + 16);
    else
      v7 = (gameswf::Self *)(a4 + 5);
    if ( v124 == -1 )
    {
      v8 = v126;
      v9 = v127;
    }
    else
    {
      v8 = (char *)v124;
      v9 = (gameswf::Self *)v125;
    }
    gameswf::Strcpy_s(v9, v8, v7);
    v90 = *(uint32_t *)(a4 + 20);
    if ( (uint8_t *)(v90 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v44 = *(uint8_t *)(a4 + 4);
      if ( v44 == -1 )
      {
        v46 = *(uint32_t *)(a4 + 16);
        v45 = *(uint32_t *)(a4 + 8) - 1;
      }
      else
      {
        v45 = v44 - 1;
        v46 = a4 + 5;
      }
      v10 = 5381;
      if ( v45 > 0 )
      {
        do
        {
          --v45;
          v47 = 33 * v10;
          v48 = *(uint8_t *)(v46 + v45) + 32;
          if ( (uint8_t)(*(uint8_t *)(v46 + v45) - 65) > 0x19u )
            v48 = *(uint8_t *)(v46 + v45);
          v10 = v47 ^ v48;
        }
        while ( v45 != 0 );
        v10 = v10 << 9 >> 9;
      }
      *(uint32_t *)(a4 + 20) = v10 & 0x7FFFFF | v90 & 0xFF800000;
    }
    else
    {
      v10 = v90 << 9 >> 9;
    }
    LOWORD(v148[0]) = 1;
    v11 = v10 & 0x7FFFFF | v128 & 0xFF800000;
    LOWORD(v128) = v10;
    BYTE2(v128) = BYTE2(v11) & 0x7F;
    HIBYTE(v128) = HIBYTE(v11) | 1;
    v96 = (gameswf::ASValue::Self *)((char *)a1 + 12 * ((-1431655765 * (v95 >> 2)) >> 1));
    v147 = v123;
    if ( v124 == -1 )
      v12 = (int)(uintptr_t)(v126 - 1);
    else
      v12 = v124 - 1;
    gameswf::String::resize((gameswf::String::Self *)v148, v12);
    v13 = (gameswf::Self *)v125;
    if ( v124 == -1 )
      v13 = v127;
    if ( LOBYTE(v148[0]) == 0xFF )
    {
      v14 = (char *)v148[1];
      v15 = v149;
    }
    else
    {
      v14 = (char *)SLOBYTE(v148[0]);
      v15 = (gameswf::Self *)((char *)v148 + 1);
    }
    gameswf::Strcpy_s(v15, v14, v13);
    if ( (uint8_t *)(v128 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v124 == -1 )
      {
        v35 = v127;
        v36 = (int)(uintptr_t)(v126 - 1);
      }
      else
      {
        v35 = (gameswf::Self *)v125;
        v36 = v124 - 1;
      }
      v16 = 5381;
      if ( v36 > 0 )
      {
        do
        {
          --v36;
          v37 = 33 * v16;
          v38 = *((uint8_t *)v35 + v36) + 32;
          if ( (uint8_t)(*((uint8_t *)v35 + v36) - 65) > 0x19u )
            v38 = *((uint8_t *)v35 + v36);
          v16 = v37 ^ v38;
        }
        while ( v36 != 0 );
        v16 = v16 << 9 >> 9;
      }
      v128 = v16 & 0x7FFFFF | v128 & 0xFF800000;
    }
    else
    {
      v16 = (int)(v128 << 9) >> 9;
    }
    v17 = v16 & 0x7FFFFF | v150 & 0xFF800000;
    LOWORD(v150) = v16;
    v103[0] = 0;
    HIBYTE(v150) = HIBYTE(v17) | 1;
    BYTE2(v150) = BYTE2(v17) & 0x7F;
    v99 = (gameswf::ASValue::Self *)((const gameswf::ASValue::Self *)((char *)v89 - 12));
    v103[1] = 0;
    v104[0] = 0;
    gameswf::ASValue::getMember(a1, v148, (gameswf::ASValue::Self *)v103);
    gameswf::ASValue::getMember(v96, v148, (gameswf::ASValue::Self *)v104);
    v81 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(&v147), (gameswf::ASValue::Self *)v103, (gameswf::ASValue::Self *)v104);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v103);
    v103[0] = 0;
    v103[1] = 0;
    v104[0] = 0;
    if ( v81 != 0 )
    {
      gameswf::ASValue::getMember(v96, v148, (gameswf::ASValue::Self *)v103);
      gameswf::ASValue::getMember(v99, v148, (gameswf::ASValue::Self *)v104);
      v82 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(&v147), (gameswf::ASValue::Self *)v103, (gameswf::ASValue::Self *)v104);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v103);
      if ( v82 != 0 )
      {
        v104[0] = 0;
        v80 = a1;
LABEL_22:
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v104, v80);
        gameswf::ASValue::opAssign(a1, v96);
        gameswf::ASValue::opAssign(v96, (const gameswf::ASValue::Self *)v104);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
LABEL_23:
        if ( LOBYTE(v148[0]) == 0xFF )
          goto LABEL_55;
        goto LABEL_24;
      }
      v103[0] = 0;
      v103[1] = 0;
      v104[0] = 0;
      gameswf::ASValue::getMember(a1, v148, (gameswf::ASValue::Self *)v103);
      gameswf::ASValue::getMember(v99, v148, (gameswf::ASValue::Self *)v104);
      v87 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(&v147), (gameswf::ASValue::Self *)v103, (gameswf::ASValue::Self *)v104);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v103);
      if ( v87 == 0 )
        goto LABEL_23;
      v104[0] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v104, a1);
    }
    else
    {
      gameswf::ASValue::getMember(a1, v148, (gameswf::ASValue::Self *)v103);
      gameswf::ASValue::getMember(v99, v148, (gameswf::ASValue::Self *)v104);
      v85 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(&v147), (gameswf::ASValue::Self *)v103, (gameswf::ASValue::Self *)v104);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v103);
      if ( v85 != 0 )
        goto LABEL_23;
      v103[0] = 0;
      v103[1] = 0;
      v104[0] = 0;
      gameswf::ASValue::getMember(v96, v148, (gameswf::ASValue::Self *)v103);
      gameswf::ASValue::getMember(v99, v148, (gameswf::ASValue::Self *)v104);
      v86 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(&v147), (gameswf::ASValue::Self *)v103, (gameswf::ASValue::Self *)v104);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v103);
      v104[0] = 0;
      v80 = a1;
      if ( v86 == 0 )
        goto LABEL_22;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v104, a1);
    }
    gameswf::ASValue::opAssign(a1, v99);
    gameswf::ASValue::opAssign(v99, (const gameswf::ASValue::Self *)v104);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
    if ( LOBYTE(v148[0]) == 0xFF )
    {
LABEL_55:
      if ( (v150 & 0x1000000) != 0 )
        gameswf::free_internal(v149);
    }
LABEL_24:
    LOWORD(v152[0]) = 1;
    v151 = v123;
    if ( v124 == -1 )
      v18 = (int)(uintptr_t)(v126 - 1);
    else
      v18 = v124 - 1;
    gameswf::String::resize((gameswf::String::Self *)v152, v18);
    v19 = (gameswf::Self *)v125;
    if ( v124 == -1 )
      v19 = v127;
    if ( LOBYTE(v152[0]) == 0xFF )
    {
      v20 = (char *)v152[1];
      v21 = v153;
    }
    else
    {
      v20 = (char *)SLOBYTE(v152[0]);
      v21 = (gameswf::Self *)((char *)v152 + 1);
    }
    gameswf::Strcpy_s(v21, v20, v19);
    if ( (uint8_t *)(v128 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v124 == -1 )
      {
        v32 = v127;
        v33 = (int)(uintptr_t)(v126 - 1);
      }
      else
      {
        v32 = (gameswf::Self *)v125;
        v33 = v124 - 1;
      }
      v22 = 5381;
      if ( v33 > 0 )
      {
        do
        {
          --v33;
          v98 = 33 * v22;
          v34 = *((uint8_t *)v32 + v33) + 32;
          if ( (uint8_t)(*((uint8_t *)v32 + v33) - 65) > 0x19u )
            v34 = *((uint8_t *)v32 + v33);
          v22 = v98 ^ v34;
        }
        while ( v33 != 0 );
        v22 = v22 << 9 >> 9;
      }
      v128 = v22 & 0x7FFFFF | v128 & 0xFF800000;
    }
    else
    {
      v22 = (int)(v128 << 9) >> 9;
    }
    v23 = v22 & 0x7FFFFF | v154 & 0xFF800000;
    LOWORD(v154) = v23;
    HIBYTE(v154) = HIBYTE(v23) | 1;
    BYTE2(v154) = BYTE2(v23) & 0x7F;
    v97 = (gameswf::ASValue::Self *)((char *)a1 + 12);
    v100 = (gameswf::ASValue::Self *)(v89);
    while ( 1 )
    {
      while ( 1 )
      {
        v103[0] = 0;
        v103[1] = 0;
        v104[0] = 0;
        gameswf::ASValue::getMember(v97, v152, (gameswf::ASValue::Self *)v103);
        gameswf::ASValue::getMember(a1, v152, (gameswf::ASValue::Self *)v104);
        v83 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(&v151), (gameswf::ASValue::Self *)v103, (gameswf::ASValue::Self *)v104);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v103);
        if ( v83 == 0 )
          break;
        v97 = (gameswf::ASValue::Self *)((char *)v97 + 12);
      }
      do
      {
        v100 = (gameswf::ASValue::Self *)((char *)v100 - 12);
        v103[0] = 0;
        v103[1] = 0;
        v104[0] = 0;
        gameswf::ASValue::getMember(a1, v152, (gameswf::ASValue::Self *)v103);
        gameswf::ASValue::getMember(v100, v152, (gameswf::ASValue::Self *)v104);
        v84 = gameswf::StandardArraySorter::opCall((int)(uintptr_t)(&v151), (gameswf::ASValue::Self *)v103, (gameswf::ASValue::Self *)v104);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v103);
      }
      while ( v84 != 0 );
      if ( v100 <= v97 )
        break;
      v104[0] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v104, v97);
      gameswf::ASValue::opAssign(v97, v100);
      gameswf::ASValue::opAssign(v100, (const gameswf::ASValue::Self *)v104);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
      v97 = (gameswf::ASValue::Self *)((char *)v97 + 12);
    }
    if ( LOBYTE(v152[0]) == 0xFF && (v154 & 0x1000000) != 0 )
      gameswf::free_internal(v153);
    if ( v124 == -1 && (v128 & 0x1000000) != 0 )
      gameswf::free_internal(v127);
    v118 = 1;
    v119 = 0;
    v117 = *(uint32_t *)a4;
    v24 = *(uint8_t *)(a4 + 4);
    if ( v24 == -1 )
      v25 = *(uint32_t *)(a4 + 8) - 1;
    else
      v25 = v24 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v118, v25);
    if ( *(uint8_t *)(a4 + 4) == 0xFF )
      v26 = *(gameswf::Self **)(a4 + 16);
    else
      v26 = (gameswf::Self *)(a4 + 5);
    if ( v118 == -1 )
    {
      v27 = v120;
      v28 = v121;
    }
    else
    {
      v27 = (char *)v118;
      v28 = (gameswf::Self *)&v119;
    }
    gameswf::Strcpy_s(v28, v27, v26);
    v91 = *(uint32_t *)(a4 + 20);
    if ( (uint8_t *)(v91 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v39 = *(uint8_t *)(a4 + 4);
      if ( v39 == -1 )
      {
        v41 = *(uint32_t *)(a4 + 16);
        v40 = *(uint32_t *)(a4 + 8) - 1;
      }
      else
      {
        v40 = v39 - 1;
        v41 = a4 + 5;
      }
      v29 = 5381;
      if ( v40 > 0 )
      {
        do
        {
          --v40;
          v42 = 33 * v29;
          v43 = *(uint8_t *)(v41 + v40) + 32;
          if ( (uint8_t)(*(uint8_t *)(v41 + v40) - 65) > 0x19u )
            v43 = *(uint8_t *)(v41 + v40);
          v29 = v42 ^ v43;
        }
        while ( v40 != 0 );
        v29 = v29 << 9 >> 9;
      }
      *(uint32_t *)(a4 + 20) = v29 & 0x7FFFFF | v91 & 0xFF800000;
    }
    else
    {
      v29 = v91 << 9 >> 9;
    }
    v30 = v29 & 0x7FFFFF | v122 & 0xFF800000;
    LOWORD(v122) = v29;
    BYTE2(v122) = BYTE2(v30) & 0x7F;
    HIBYTE(v122) = HIBYTE(v30) | 1;
    sub_111D530(a3, &v117);
    if ( v118 == -1 && (v122 & 0x1000000) != 0 )
      gameswf::free_internal(v121);
    result = v97 - a1;
    v31 = v97 - a1 <= 203;
    v89 = v97;
    v95 = v97 - a1;
    if ( v31 )
      return result;
  }
  v129 = *(uint32_t *)a4;
  sub_111BC00((int)(uintptr_t)(v130), (char *)(a4 + 4));
  v105 = v129;
  sub_111BC00((int)(uintptr_t)(v106), (char *)v130);
  v131 = v105;
  sub_111BC00((int)(uintptr_t)(&v132), (char *)v106);
  v88 = -1431655765 * (v95 >> 2);
  v93 = (v88 - 2) >> 1;
  v92 = (gameswf::ASValue::Self *)((char *)a1 + 12 * v93);
  for ( i = v92; ; i = v92 )
  {
    v104[0] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v104, i);
    v136 = 1;
    v135 = v131;
    v137 = 0;
    if ( v132 == -1 )
      v52 = *(uint32_t *)&v133[3] - 1;
    else
      v52 = v132 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v136, v52);
    v53 = (gameswf::Self *)v133;
    if ( v132 == -1 )
      v53 = *(gameswf::Self **)&v133[11];
    if ( v136 == -1 )
    {
      v54 = v138;
      v55 = v139;
    }
    else
    {
      v54 = (char *)v136;
      v55 = (gameswf::Self *)&v137;
    }
    gameswf::Strcpy_s(v55, v54, v53);
    if ( (uint8_t *)(v134 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v132 == -1 )
      {
        v56 = *(uint8_t **)&v133[11];
        v57 = *(uint32_t *)&v133[3] - 1;
      }
      else
      {
        v56 = v133;
        v57 = v132 - 1;
      }
      v50 = 5381;
      if ( v57 > 0 )
      {
        do
        {
          --v57;
          v58 = 33 * v50;
          v59 = (uint8_t)v56[v57] + 32;
          if ( (uint8_t)(v56[v57] - 65) > 0x19u )
            v59 = (uint8_t)v56[v57];
          v50 = v58 ^ v59;
        }
        while ( v57 != 0 );
        v50 = v50 << 9 >> 9;
      }
      v134 = v50 & 0x7FFFFF | v134 & 0xFF800000;
    }
    else
    {
      v50 = (int)(v134 << 9) >> 9;
    }
    v51 = v50 & 0x7FFFFF | v140 & 0xFF800000;
    LOWORD(v140) = v50;
    v101[0] = 0;
    BYTE2(v140) = BYTE2(v51) & 0x7F;
    HIBYTE(v140) = HIBYTE(v51) | 1;
    v101[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v101, (const gameswf::ASValue::Self *)v104);
    sub_111D1D0((int)(uintptr_t)(a1), v93, v88, (gameswf::ASValue::Self *)v101, (int *)&v135);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v101);
    if ( v136 == -1 && (v140 & 0x1000000) != 0 )
      break;
    v92 = (const gameswf::ASValue::Self *)((char *)v92 - 12);
    if ( v93 == 0 )
      goto LABEL_135;
LABEL_115:
    --v93;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
  }
  gameswf::free_internal(v139);
  v92 = (const gameswf::ASValue::Self *)((char *)v92 - 12);
  if ( v93 != 0 )
    goto LABEL_115;
LABEL_135:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
  if ( v132 == -1 && (v134 & 0x1000000) != 0 )
    gameswf::free_internal(*(gameswf::Self **)&v133[11]);
  if ( LOBYTE(v106[0]) == 0xFF && (HIBYTE(v106[4]) & 1) != 0 )
    gameswf::free_internal(v106[3]);
  v107 = v129;
  sub_111BC00((int)(uintptr_t)(&v108), (char *)v130);
  while ( 1 )
  {
    result = v89 - a1;
    if ( v89 - a1 <= 23 )
      break;
    while ( 1 )
    {
      v89 = (const gameswf::ASValue::Self *)((char *)v89 - 12);
      v111 = v107;
      v112 = 1;
      v113[0] = 0;
      if ( v108 == -1 )
        v60 = *(uint32_t *)&v109[3] - 1;
      else
        v60 = v108 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v112, v60);
      v61 = (gameswf::Self *)v109;
      if ( v108 == -1 )
        v61 = *(gameswf::Self **)&v109[11];
      if ( v112 == -1 )
      {
        v62 = v114;
        v63 = v115;
      }
      else
      {
        v62 = (char *)v112;
        v63 = (gameswf::Self *)v113;
      }
      gameswf::Strcpy_s(v63, v62, v61);
      if ( (uint8_t *)(v110 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( v108 == -1 )
        {
          v76 = *(uint8_t **)&v109[11];
          v77 = *(uint32_t *)&v109[3] - 1;
        }
        else
        {
          v76 = v109;
          v77 = v108 - 1;
        }
        v64 = 5381;
        if ( v77 > 0 )
        {
          do
          {
            --v77;
            v78 = 33 * v64;
            v79 = (uint8_t)v76[v77] + 32;
            if ( (uint8_t)(v76[v77] - 65) > 0x19u )
              v79 = (uint8_t)v76[v77];
            v64 = v78 ^ v79;
          }
          while ( v77 != 0 );
          v64 = v64 << 9 >> 9;
        }
        v110 = v64 & 0x7FFFFF | v110 & 0xFF800000;
      }
      else
      {
        v64 = (int)(v110 << 9) >> 9;
      }
      v65 = v64 & 0x7FFFFF | v116 & 0xFF800000;
      LOWORD(v116) = v64;
      v104[0] = 0;
      HIBYTE(v116) = HIBYTE(v65) | 1;
      BYTE2(v116) = BYTE2(v65) & 0x7F;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v104, v89);
      gameswf::ASValue::opAssign(v89, a1);
      v142 = 1;
      v141 = v111;
      v143 = 0;
      if ( v112 == -1 )
        v66 = (int)(uintptr_t)(v114 - 1);
      else
        v66 = v112 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v142, v66);
      v67 = (gameswf::Self *)v113;
      if ( v112 == -1 )
        v67 = v115;
      if ( v142 == -1 )
      {
        v68 = v144;
        v69 = v145;
      }
      else
      {
        v68 = (char *)v142;
        v69 = (gameswf::Self *)&v143;
      }
      gameswf::Strcpy_s(v69, v68, v67);
      if ( (uint8_t *)(v116 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( v112 == -1 )
        {
          v72 = v115;
          v73 = (int)(uintptr_t)(v114 - 1);
        }
        else
        {
          v72 = (gameswf::Self *)v113;
          v73 = v112 - 1;
        }
        v70 = 5381;
        if ( v73 > 0 )
        {
          do
          {
            --v73;
            v74 = 33 * v70;
            v75 = *((uint8_t *)v72 + v73) + 32;
            if ( (uint8_t)(*((uint8_t *)v72 + v73) - 65) > 0x19u )
              v75 = *((uint8_t *)v72 + v73);
            v70 = v74 ^ v75;
          }
          while ( v73 != 0 );
          v70 = v70 << 9 >> 9;
        }
        v116 = v70 & 0x7FFFFF | v116 & 0xFF800000;
      }
      else
      {
        v70 = (int)(v116 << 9) >> 9;
      }
      v71 = v70 & 0x7FFFFF | v146 & 0xFF800000;
      LOWORD(v146) = v70;
      BYTE2(v146) = BYTE2(v71) & 0x7F;
      HIBYTE(v146) = HIBYTE(v71) | 1;
      v102[0] = 0;
      v102[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v102, (const gameswf::ASValue::Self *)v104);
      sub_111D1D0((int)(uintptr_t)(a1), 0, -1431655765 * ((v89 - a1) >> 2), (gameswf::ASValue::Self *)v102, (int *)&v141);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v102);
      if ( v142 == -1 && (v146 & 0x1000000) != 0 )
        gameswf::free_internal(v145);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v104);
      if ( v112 != -1 || (v116 & 0x1000000) == 0 )
        break;
      gameswf::free_internal(v115);
      result = v89 - a1;
      if ( v89 - a1 <= 23 )
        goto LABEL_159;
    }
  }
LABEL_159:
  if ( v108 == -1 && (v110 & 0x1000000) != 0 )
    result = gameswf::free_internal(*(gameswf::Self **)&v109[11]);
  if ( LOBYTE(v130[0]) == 0xFF && (HIBYTE(v130[4]) & 1) != 0 )
    return gameswf::free_internal(v130[3]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gameswf_ASValue_int_game_a15ea8  (binary VA: 0x1122f60)
// Original: std::__introsort_loop<gameswf::ASValue *,int,gameswf::StandardArraySorter>
// ----------------------------------------------------------------------------
void g4_std::introsort_loop_gameswf_ASValue_int_game_a15ea8(gameswf::ASValue::Self *a1, gameswf::ASValue::Self *a2, int a3, int a4)
{
  gameswf::ASValue::Self *v4;
  gameswf::ASValue::Self *i;
  int v6;
  const gameswf::ASValue::Self *v7;
  gameswf::ASValue::Self *v8;
  char v9;
  gameswf::ASValue::Self *v10;
  gameswf::ASValue::Self *j;
  int v12;
  const gameswf::ASValue::Self *v13;
  gameswf::ASValue::Self *v14;
  char v15;
  gameswf::ASValue::Self *v16;
  gameswf::ASValue::Self *v17;
  bool v18;
  char v19;
  gameswf::ASValue::Self *v20;
  gameswf::ASValue::Self *v21;
  gameswf::ASValue::Self *v22;
  int v23;
  const gameswf::ASValue::Self *v24;
  gameswf::ASValue::Self *v25;
  char v26;
  gameswf::ASValue::Self *v27;
  gameswf::ASValue::Self *k;
  int v29;
  gameswf::ASValue::Self *m;
  gameswf::ASValue::Self *v31;
  gameswf::ASValue::Self *v32;
  typedef gameswf::ASValue::Self *_g4_t_v33;
  typedef gameswf::ASValue::Self *_g4_t_v34;
  typedef const gameswf::ASValue::Self *_g4_t_v35;
  typedef const gameswf::ASValue::Self *_g4_t_v36;
  typedef const gameswf::ASValue::Self *_g4_t_v37;
  typedef gameswf::ASValue::Self *_g4_t_v38;
  typedef gameswf::ASValue::Self *_g4_t_v39;
  typedef gameswf::ASValue::Self *_g4_t_v40;
  typedef gameswf::ASValue::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef gameswf::ASValue::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef gameswf::ASValue::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef gameswf::ASValue::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef gameswf::ASValue::Self *_g4_t_v51;
  typedef gameswf::ASValue::Self *_g4_t_v52;
  typedef gameswf::ASValue::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef gameswf::ASValue::Self *_g4_t_v55;
  typedef gameswf::ASValue::Self *_g4_t_v56;
  typedef gameswf::ASValue::Self *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint8_t _g4_t_v59[24];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v34)) > _g4_s1 ? (0u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v35)) > _g4_s2 ? (4u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v36)) > _g4_s3 ? (4u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v37)) > _g4_s4 ? (4u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v38)) > _g4_s5 ? (8u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v39)) > _g4_s6 ? (8u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v40)) > _g4_s7 ? (8u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v41)) > _g4_s8 ? (16u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v42)) > _g4_s9 ? (20u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v43)) > _g4_s10 ? (24u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v44)) > _g4_s11 ? (28u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v45)) > _g4_s12 ? (32u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v46)) > _g4_s13 ? (36u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v47)) > _g4_s14 ? (40u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v48)) > _g4_s15 ? (44u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v49)) > _g4_s16 ? (48u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v50)) > _g4_s17 ? (52u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v51)) > _g4_s18 ? (56u + sizeof(_g4_t_v51)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v52)) > _g4_s19 ? (60u + sizeof(_g4_t_v52)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v53)) > _g4_s20 ? (64u + sizeof(_g4_t_v53)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v54)) > _g4_s21 ? (68u + sizeof(_g4_t_v54)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v55)) > _g4_s22 ? (72u + sizeof(_g4_t_v55)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v56)) > _g4_s23 ? (76u + sizeof(_g4_t_v56)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v57)) > _g4_s24 ? (76u + sizeof(_g4_t_v57)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v58)) > _g4_s25 ? (80u + sizeof(_g4_t_v58)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v59)) > _g4_s26 ? (84u + sizeof(_g4_t_v59)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 76u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);

  v4 = a2;
LABEL_2:
  if ( v4 - a1 > 203 )
  {
    if ( a3 != 0 )
    {
      --a3;
      v52 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_237565(a1, (int)(uintptr_t)(a2), a4);
      v50 = a3;
      for ( i = a2; ; i = v53 )
      {
        v6 = i - v52;
        if ( v6 <= 203 )
        {
LABEL_36:
          v4 = v52;
          a2 = v52;
          goto LABEL_2;
        }
        if ( v50 == 0 )
        {
          g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(v52, a2, (unsigned int)(uintptr_t)(a2), a4);
          goto LABEL_36;
        }
        --v50;
        v7 = (gameswf::ASValue::Self *)((char *)a2 - 12);
        v8 = (gameswf::ASValue::Self *)((char *)v52 + 12 * ((-1431655765 * (v6 >> 2)) >> 1));
        v58 = a4;
        v9 = gameswf::StandardArraySorter::opCall(&v58, v52, v8);
        v38 = (gameswf::ASValue::Self *)((char *)a2 - 12);
        if ( v9 != 0 )
        {
          if ( gameswf::StandardArraySorter::opCall(&v58, v8, v38) != 0 )
          {
            v59[0] = 0;
            v59[1] = 0;
            v35 = v52;
LABEL_10:
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v35);
            gameswf::ASValue::opAssign(v52, v8);
            gameswf::ASValue::opAssign(v8, (const gameswf::ASValue::Self *)v59);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
            goto LABEL_11;
          }
          if ( gameswf::StandardArraySorter::opCall(&v58, v52, v7) != 0 )
          {
            v59[0] = 0;
            v59[1] = 0;
            v35 = v52;
LABEL_21:
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v35);
            gameswf::ASValue::opAssign(v52, v7);
            gameswf::ASValue::opAssign(v7, (const gameswf::ASValue::Self *)v59);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
          }
        }
        else if ( gameswf::StandardArraySorter::opCall(&v58, v52, v38) == 0 )
        {
          v18 = gameswf::StandardArraySorter::opCall(&v58, v8, v7) == 0;
          v59[0] = 0;
          v59[1] = 0;
          v35 = v52;
          if ( v18 )
            goto LABEL_10;
          goto LABEL_21;
        }
LABEL_11:
        v56 = a2;
        v58 = a4;
        v10 = (gameswf::ASValue::Self *)((char *)v52 + 12);
        while ( 1 )
        {
          while ( gameswf::StandardArraySorter::opCall(&v58, v10, v52) != 0 )
            v10 = (gameswf::ASValue::Self *)((char *)v10 + 12);
          do
            v56 = (gameswf::ASValue::Self *)((char *)v56 - 12);
          while ( gameswf::StandardArraySorter::opCall(&v58, v52, v56) != 0 );
          if ( v10 >= v56 )
            break;
          v59[0] = 0;
          v59[1] = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v10);
          v33 = v10;
          v10 = (gameswf::ASValue::Self *)((char *)v10 + 12);
          gameswf::ASValue::opAssign(v33, v56);
          gameswf::ASValue::opAssign(v56, (const gameswf::ASValue::Self *)v59);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
        }
        v53 = v10;
        v49 = v50;
        for ( j = a2; ; j = v51 )
        {
          v12 = j - v53;
          if ( v12 <= 203 )
            break;
          if ( v49 == 0 )
          {
            g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(v53, a2, (unsigned int)(uintptr_t)(a2), a4);
            break;
          }
          --v49;
          v13 = (gameswf::ASValue::Self *)((char *)a2 - 12);
          v14 = (gameswf::ASValue::Self *)((char *)v53 + 12 * ((-1431655765 * (v12 >> 2)) >> 1));
          v58 = a4;
          v15 = gameswf::StandardArraySorter::opCall(&v58, v53, v14);
          v39 = (gameswf::ASValue::Self *)((char *)a2 - 12);
          if ( v15 != 0 )
          {
            if ( gameswf::StandardArraySorter::opCall(&v58, v14, v39) != 0 )
            {
              v59[0] = 0;
              v59[1] = 0;
              v36 = v53;
LABEL_28:
              gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v36);
              gameswf::ASValue::opAssign(v53, v14);
              gameswf::ASValue::opAssign(v14, (const gameswf::ASValue::Self *)v59);
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
              goto LABEL_29;
            }
            if ( gameswf::StandardArraySorter::opCall(&v58, v53, v13) != 0 )
            {
              v59[0] = 0;
              v59[1] = 0;
              v36 = v53;
LABEL_39:
              gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v36);
              gameswf::ASValue::opAssign(v53, v13);
              gameswf::ASValue::opAssign(v13, (const gameswf::ASValue::Self *)v59);
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
            }
          }
          else if ( gameswf::StandardArraySorter::opCall(&v58, v53, v39) == 0 )
          {
            v19 = gameswf::StandardArraySorter::opCall(&v58, v14, v13);
            v59[0] = 0;
            v59[1] = 0;
            v36 = v53;
            if ( v19 == 0 )
              goto LABEL_28;
            goto LABEL_39;
          }
LABEL_29:
          v16 = a2;
          v58 = a4;
          v17 = (gameswf::ASValue::Self *)((char *)v53 + 12);
          while ( 1 )
          {
            while ( gameswf::StandardArraySorter::opCall(&v58, v17, v53) != 0 )
              v17 = (gameswf::ASValue::Self *)((char *)v17 + 12);
            do
              v16 = (gameswf::ASValue::Self *)((char *)v16 - 12);
            while ( gameswf::StandardArraySorter::opCall(&v58, v53, v16) != 0 );
            if ( v17 >= v16 )
              break;
            v59[0] = 0;
            v59[1] = 0;
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v17);
            v34 = v17;
            v17 = (gameswf::ASValue::Self *)((char *)v17 + 12);
            gameswf::ASValue::opAssign(v34, v16);
            gameswf::ASValue::opAssign(v16, (const gameswf::ASValue::Self *)v59);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
          }
          v51 = v17;
          v48 = v49;
          v20 = a2;
          while ( v20 - v51 > 203 )
          {
            if ( v48 == 0 )
            {
              g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(v51, a2, (unsigned int)(uintptr_t)(a2), a4);
              break;
            }
            --v48;
            v47 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_237565(v51, (int)(uintptr_t)(a2), a4);
            v46 = v48;
            v21 = a2;
            while ( v21 - v47 > 203 )
            {
              if ( v46 == 0 )
              {
                g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(v47, a2, (unsigned int)(uintptr_t)(a2), a4);
                break;
              }
              --v46;
              v45 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_237565(v47, (int)(uintptr_t)(a2), a4);
              v44 = v46;
              v22 = a2;
              while ( v22 - v45 > 203 )
              {
                if ( v44 == 0 )
                {
                  g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(v45, a2, (unsigned int)(uintptr_t)(a2), a4);
                  break;
                }
                --v44;
                v43 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_237565(
                        v45,
                        (int)(uintptr_t)(a2),
                        a4);
                v42 = v44;
                if ( a2 - v43 <= 203 )
                  goto LABEL_83;
LABEL_58:
                if ( v42 != 0 )
                {
                  --v42;
                  v57 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_237565(
                          v43,
                          (int)(uintptr_t)(a2),
                          a4);
                  v23 = a2 - v57;
                  v54 = v42;
                  if ( a2 - v57 <= 203 )
                  {
LABEL_81:
                    v32 = v57;
                    a2 = v57;
                    goto LABEL_82;
                  }
LABEL_60:
                  if ( v54 == 0 )
                  {
                    g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(v57, a2, (unsigned int)(uintptr_t)(a2), a4);
                    v32 = v57;
                    a2 = v57;
LABEL_82:
                    if ( v32 - v43 <= 203 )
                    {
LABEL_83:
                      v22 = v43;
                      a2 = v43;
                      continue;
                    }
                    goto LABEL_58;
                  }
                  --v54;
                  v24 = (gameswf::ASValue::Self *)((char *)a2 - 12);
                  v25 = (gameswf::ASValue::Self *)((char *)v57 + 12 * ((-1431655765 * (v23 >> 2)) >> 1));
                  v58 = a4;
                  v26 = gameswf::StandardArraySorter::opCall(&v58, v57, v25);
                  v40 = (gameswf::ASValue::Self *)((char *)a2 - 12);
                  if ( v26 != 0 )
                  {
                    if ( gameswf::StandardArraySorter::opCall(&v58, v25, v40) != 0 )
                    {
                      v59[0] = 0;
                      v59[1] = 0;
                      v37 = v57;
                      goto LABEL_64;
                    }
                    if ( gameswf::StandardArraySorter::opCall(&v58, v57, v24) != 0 )
                    {
                      v59[0] = 0;
                      v59[1] = 0;
                      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v57);
LABEL_87:
                      gameswf::ASValue::opAssign(v57, v24);
                      gameswf::ASValue::opAssign(v24, (const gameswf::ASValue::Self *)v59);
                      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
                    }
                  }
                  else if ( gameswf::StandardArraySorter::opCall(&v58, v57, v40) == 0 )
                  {
                    v18 = gameswf::StandardArraySorter::opCall(&v58, v25, v24) == 0;
                    v59[0] = 0;
                    v59[1] = 0;
                    v37 = v57;
                    if ( !v18 )
                    {
                      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v57);
                      goto LABEL_87;
                    }
LABEL_64:
                    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v37);
                    gameswf::ASValue::opAssign(v57, v25);
                    gameswf::ASValue::opAssign(v25, (const gameswf::ASValue::Self *)v59);
                    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
                  }
                  v27 = (gameswf::ASValue::Self *)((char *)v57 + 12);
                  v58 = a4;
                  k = a2;
                  while ( 1 )
                  {
                    while ( gameswf::StandardArraySorter::opCall(&v58, v27, v57) != 0 )
                      v27 = (gameswf::ASValue::Self *)((char *)v27 + 12);
                    v55 = v27;
                    for ( k = (gameswf::ASValue::Self *)((char *)k - 12);
                          gameswf::StandardArraySorter::opCall(&v58, v57, k) != 0;
                          k = (gameswf::ASValue::Self *)((char *)k - 12) )
                    {
                      ;
                    }
                    if ( v27 >= k )
                      break;
                    v59[0] = 0;
                    v59[1] = 0;
                    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, v27);
                    v27 = (gameswf::ASValue::Self *)((char *)v27 + 12);
                    gameswf::ASValue::opAssign(v55, k);
                    gameswf::ASValue::opAssign(k, (const gameswf::ASValue::Self *)v59);
                    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
                  }
                  if ( a2 - v27 > 203 )
                  {
                    if ( v54 != 0 )
                    {
                      v29 = v54;
                      for ( m = a2; ; m = v41 )
                      {
                        --v29;
                        v41 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_237565(
                                v55,
                                (int)(uintptr_t)(m),
                                a4);
                        g4_std::introsort_loop_gameswf_ASValue_int_game_a15ea8(v41, m, v29, a4);
                        v31 = v41;
                        if ( v41 - v55 <= 203 )
                        {
                          v27 = v55;
                          goto LABEL_80;
                        }
                        if ( v29 == 0 )
                          break;
                      }
                      v27 = v55;
                    }
                    else
                    {
                      v31 = a2;
                    }
                    g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(v27, v31, (unsigned int)(uintptr_t)(v31), a4);
                  }
LABEL_80:
                  v23 = v27 - v57;
                  a2 = v27;
                  if ( v27 - v57 <= 203 )
                    goto LABEL_81;
                  goto LABEL_60;
                }
                g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(v43, a2, (unsigned int)(uintptr_t)(a2), a4);
                v22 = v43;
                a2 = v43;
              }
              v21 = v45;
              a2 = v45;
            }
            v20 = v47;
            a2 = v47;
          }
          a2 = v51;
        }
        a2 = v53;
      }
    }
    g4_std::partial_sort_gameswf_ASValue_gameswf_43a4bf(a1, a2, (unsigned int)(uintptr_t)(a2), a4);
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gameswf_ASValue_gameswf_99a3ed  (binary VA: 0x11239d0)
// Original: std::__insertion_sort<gameswf::ASValue *,gameswf::StandardArraySorter>
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * g4_std::insertion_sort_gameswf_ASValue_gameswf_99a3ed(gameswf::ASValue::Self *a1, gameswf::ASValue::Self *a2, int a3)
{
  gameswf::ASValue::Self *result;
  gameswf::ASValue::Self *v4;
  int v5;
  gameswf::ASValue::Self *i;
  typedef gameswf::ASValue::Self *_g4_t_v7;
  typedef gameswf::ASValue::Self *_g4_t_v8;
  typedef gameswf::ASValue::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v11)) > _g4_s4 ? (36u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (37u + sizeof(_g4_t_v12)) > _g4_s5 ? (37u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 37u);

  result = a2;
  if ( a1 != a2 )
  {
    result = (gameswf::ASValue::Self *)((char *)a1 + 12);
    if ( a2 != (gameswf::ASValue::Self *)((char *)a1 + 12) )
    {
      v9 = (gameswf::ASValue::Self *)((char *)a1 + 12);
      do
      {
        v4 = v9;
        if ( gameswf::StandardArraySorter::opCall(&a3, v9, a1) != 0 )
        {
          v11 = 0;
          v12 = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v11, v9);
          v9 = (gameswf::ASValue::Self *)((char *)v9 + 12);
          v5 = -1431655765 * ((v4 - a1) >> 2);
          if ( v5 > 0 )
          {
            do
            {
              v4 = (gameswf::ASValue::Self *)((char *)v4 - 12);
              gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)v4 + 12), v4);
              --v5;
            }
            while ( v5 != 0 );
          }
          gameswf::ASValue::opAssign(a1, (const gameswf::ASValue::Self *)&v11);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
          result = v9;
        }
        else
        {
          v11 = 0;
          v10 = a3;
          v12 = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v11, v9);
          for ( i = (gameswf::ASValue::Self *)((char *)v9 - 12);
                gameswf::StandardArraySorter::opCall(&v10, (gameswf::ASValue::Self *)&v11, i) != 0;
                i = (gameswf::ASValue::Self *)((char *)i - 12) )
          {
            v8 = i;
            v7 = v4;
            v4 = i;
            gameswf::ASValue::opAssign(v7, v8);
          }
          gameswf::ASValue::opAssign(v4, (const gameswf::ASValue::Self *)&v11);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v11);
          result = (gameswf::ASValue::Self *)((char *)v9 + 12);
          v9 = (gameswf::ASValue::Self *)((char *)v9 + 12);
        }
      }
      while ( a2 != result );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gameswf_ASValue_int_game_daf37c  (binary VA: 0x1124640)
// Original: std::__introsort_loop<gameswf::ASValue *,int,gameswf::CustomArraySorter>
// ----------------------------------------------------------------------------
void g4_std::introsort_loop_gameswf_ASValue_int_game_daf37c(gameswf::ASValue::Self *a1, gameswf::ASValue::Self *a2, int a3, const gameswf::ASValue::Self *a4, const gameswf::ASValue::Self *a5)
{
  gameswf::ASValue::Self *v5;
  gameswf::ASValue::Self *i;
  int v7;
  const gameswf::ASValue::Self *v8;
  gameswf::ASValue::Self *v9;
  char v10;
  gameswf::ASValue::Self *v11;
  gameswf::ASValue::Self *j;
  int v13;
  const gameswf::ASValue::Self *v14;
  gameswf::ASValue::Self *v15;
  char v16;
  gameswf::ASValue::Self *v17;
  gameswf::ASValue::Self *v18;
  bool v19;
  char v20;
  gameswf::ASValue::Self *v21;
  gameswf::ASValue::Self *v22;
  gameswf::ASValue::Self *v23;
  gameswf::ASValue::Self *v24;
  gameswf::ASValue::Self *v25;
  int v26;
  gameswf::ASValue::Self *v27;
  gameswf::ASValue::Self *v28;
  gameswf::ASValue::Self *v29;
  gameswf::ASValue::Self *v30;
  gameswf::ASValue::Self *k;
  gameswf::ASValue::Self *v32;
  gameswf::ASValue::Self *v33;
  typedef gameswf::ASValue::Self *_g4_t_v34;
  typedef gameswf::ASValue::Self *_g4_t_v35;
  typedef const gameswf::ASValue::Self *_g4_t_v36;
  typedef const gameswf::ASValue::Self *_g4_t_v37;
  typedef const gameswf::ASValue::Self *_g4_t_v38;
  typedef gameswf::ASValue::Self *_g4_t_v39;
  typedef gameswf::ASValue::Self *_g4_t_v40;
  typedef gameswf::ASValue::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef gameswf::ASValue::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef gameswf::ASValue::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef gameswf::ASValue::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef gameswf::ASValue::Self *_g4_t_v52;
  typedef gameswf::ASValue::Self *_g4_t_v53;
  typedef gameswf::ASValue::Self *_g4_t_v54;
  typedef gameswf::ASValue::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef gameswf::ASValue::Self *_g4_t_v57;
  typedef gameswf::ASValue::Self *_g4_t_v58;
  typedef gameswf::ASValue::Self *_g4_t_v59;
  typedef gameswf::ASValue::Self *_g4_t_v60;
  typedef const gameswf::ASValue::Self *_g4_t_v61[5];
  typedef uint8_t _g4_t_v62[24];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v35)) > _g4_s1 ? (0u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v36)) > _g4_s2 ? (4u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v37)) > _g4_s3 ? (4u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v38)) > _g4_s4 ? (4u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v39)) > _g4_s5 ? (8u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v40)) > _g4_s6 ? (8u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v41)) > _g4_s7 ? (44u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v42)) > _g4_s8 ? (48u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v43)) > _g4_s9 ? (52u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v44)) > _g4_s10 ? (56u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v45)) > _g4_s11 ? (60u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v46)) > _g4_s12 ? (64u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v47)) > _g4_s13 ? (68u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v48)) > _g4_s14 ? (72u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v49)) > _g4_s15 ? (76u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v50)) > _g4_s16 ? (80u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v51)) > _g4_s17 ? (84u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v52)) > _g4_s18 ? (88u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v53)) > _g4_s19 ? (92u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v54)) > _g4_s20 ? (96u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v55)) > _g4_s21 ? (100u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v56)) > _g4_s22 ? (104u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v57)) > _g4_s23 ? (116u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v58)) > _g4_s24 ? (120u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v59)) > _g4_s25 ? (124u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v60)) > _g4_s26 ? (124u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v61)) > _g4_s27 ? (144u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v62)) > _g4_s28 ? (164u + sizeof(_g4_t_v62)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 88u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 92u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 96u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 100u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 104u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 116u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 120u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 124u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 124u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 144u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 164u);

  v5 = a2;
  while ( 1 )
  {
    if ( v5 - a1 <= 203 )
      return;
    if ( a3 == 0 )
      break;
    --a3;
    v54 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_bb328b(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a4), (int)(uintptr_t)(a5));
    v50 = a3;
    for ( i = a2; ; i = v55 )
    {
      v7 = i - v54;
      if ( v7 <= 203 )
        goto LABEL_36;
      if ( v50 == 0 )
        break;
      --v50;
      v8 = (gameswf::ASValue::Self *)((char *)a2 - 12);
      v9 = (gameswf::ASValue::Self *)((char *)v54 + 12 * ((-1431655765 * (v7 >> 2)) >> 1));
      v61[0] = a4;
      v61[1] = a5;
      v10 = gameswf::CustomArraySorter::opCall(v61, v54, v9);
      v39 = (gameswf::ASValue::Self *)((char *)a2 - 12);
      if ( v10 != 0 )
      {
        if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v9, v39) != 0 )
        {
          v62[0] = 0;
          v62[1] = 0;
          v36 = v54;
LABEL_10:
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v36);
          gameswf::ASValue::opAssign(v54, v9);
          gameswf::ASValue::opAssign(v9, (const gameswf::ASValue::Self *)v62);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
          goto LABEL_11;
        }
        if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v54, v8) != 0 )
        {
          v62[0] = 0;
          v62[1] = 0;
          v36 = v54;
LABEL_21:
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v36);
          gameswf::ASValue::opAssign(v54, v8);
          gameswf::ASValue::opAssign(v8, (const gameswf::ASValue::Self *)v62);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
        }
      }
      else if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v54, v39) == 0 )
      {
        v19 = (uint8_t)gameswf::CustomArraySorter::opCall(v61, v9, v8) == 0;
        v62[0] = 0;
        v62[1] = 0;
        v36 = v54;
        if ( v19 )
          goto LABEL_10;
        goto LABEL_21;
      }
LABEL_11:
      v59 = a2;
      v61[0] = a4;
      v61[1] = a5;
      v11 = (gameswf::ASValue::Self *)((char *)v54 + 12);
      while ( 1 )
      {
        while ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v11, v54) != 0 )
          v11 = (gameswf::ASValue::Self *)((char *)v11 + 12);
        do
          v59 = (gameswf::ASValue::Self *)((char *)v59 - 12);
        while ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v54, v59) != 0 );
        if ( v11 >= v59 )
          break;
        v62[0] = 0;
        v62[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v11);
        v34 = v11;
        v11 = (gameswf::ASValue::Self *)((char *)v11 + 12);
        gameswf::ASValue::opAssign(v34, v59);
        gameswf::ASValue::opAssign(v59, (const gameswf::ASValue::Self *)v62);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
      }
      v55 = v11;
      v49 = v50;
      for ( j = a2; ; j = v52 )
      {
        v13 = j - v55;
        if ( v13 <= 203 )
          goto LABEL_44;
        if ( v49 == 0 )
          break;
        --v49;
        v14 = (gameswf::ASValue::Self *)((char *)a2 - 12);
        v15 = (gameswf::ASValue::Self *)((char *)v55 + 12 * ((-1431655765 * (v13 >> 2)) >> 1));
        v61[0] = a4;
        v61[1] = a5;
        v16 = gameswf::CustomArraySorter::opCall(v61, v55, v15);
        v40 = (gameswf::ASValue::Self *)((char *)a2 - 12);
        if ( v16 != 0 )
        {
          if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v15, v40) != 0 )
          {
            v62[0] = 0;
            v62[1] = 0;
            v37 = v55;
LABEL_28:
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v37);
            gameswf::ASValue::opAssign(v55, v15);
            gameswf::ASValue::opAssign(v15, (const gameswf::ASValue::Self *)v62);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
            goto LABEL_29;
          }
          if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v55, v14) != 0 )
          {
            v62[0] = 0;
            v62[1] = 0;
            v37 = v55;
LABEL_39:
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v37);
            gameswf::ASValue::opAssign(v55, v14);
            gameswf::ASValue::opAssign(v14, (const gameswf::ASValue::Self *)v62);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
          }
        }
        else if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v55, v40) == 0 )
        {
          v20 = gameswf::CustomArraySorter::opCall(v61, v15, v14);
          v62[0] = 0;
          v62[1] = 0;
          v37 = v55;
          if ( v20 == 0 )
            goto LABEL_28;
          goto LABEL_39;
        }
LABEL_29:
        v17 = a2;
        v61[0] = a4;
        v61[1] = a5;
        v18 = (gameswf::ASValue::Self *)((char *)v55 + 12);
        while ( 1 )
        {
          while ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v18, v55) != 0 )
            v18 = (gameswf::ASValue::Self *)((char *)v18 + 12);
          do
            v17 = (gameswf::ASValue::Self *)((char *)v17 - 12);
          while ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v55, v17) != 0 );
          if ( v18 >= v17 )
            break;
          v62[0] = 0;
          v62[1] = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v18);
          v35 = v18;
          v18 = (gameswf::ASValue::Self *)((char *)v18 + 12);
          gameswf::ASValue::opAssign(v35, v17);
          gameswf::ASValue::opAssign(v17, (const gameswf::ASValue::Self *)v62);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
        }
        v52 = v18;
        v48 = v49;
        v21 = a2;
        while ( 1 )
        {
          if ( v21 - v52 <= 203 )
            goto LABEL_101;
          if ( v48 == 0 )
            break;
          --v48;
          v47 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_bb328b(
                  v52,
                  (int)(uintptr_t)(a2),
                  (int)(uintptr_t)(a4),
                  (int)(uintptr_t)(a5));
          v46 = v48;
          v22 = a2;
          while ( 1 )
          {
            if ( v22 - v47 <= 203 )
              goto LABEL_99;
            if ( v46 == 0 )
              break;
            --v46;
            v45 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_bb328b(
                    v47,
                    (int)(uintptr_t)(a2),
                    (int)(uintptr_t)(a4),
                    (int)(uintptr_t)(a5));
            v44 = v46;
            v23 = a2;
            while ( 1 )
            {
              if ( v23 - v45 <= 203 )
                goto LABEL_97;
              if ( v44 == 0 )
                break;
              --v44;
              v43 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_bb328b(
                      v45,
                      (int)(uintptr_t)(a2),
                      (int)(uintptr_t)(a4),
                      (int)(uintptr_t)(a5));
              v42 = v44;
              v24 = a2;
LABEL_58:
              while ( v24 - v43 > 203 )
              {
                if ( v42 == 0 )
                {
                  g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(
                    v43,
                    a2,
                    (unsigned int)(uintptr_t)(a2),
                    (int)(uintptr_t)(a4),
                    (int)(uintptr_t)(a5));
                  break;
                }
                --v42;
                v41 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_bb328b(
                        v43,
                        (int)(uintptr_t)(a2),
                        (int)(uintptr_t)(a4),
                        (int)(uintptr_t)(a5));
                v51 = v42;
                if ( a2 - v41 <= 203 )
                  goto LABEL_90;
LABEL_61:
                if ( v51 != 0 )
                {
                  --v51;
                  v25 = g4_std::unguarded_partition_pivot_gameswf_ASValue_gameswf_bb328b(
                          v41,
                          (int)(uintptr_t)(a2),
                          (int)(uintptr_t)(a4),
                          (int)(uintptr_t)(a5));
                  v26 = a2 - v25;
                  if ( a2 - v25 <= 203 )
                    goto LABEL_88;
                  if ( v51 == 0 )
                  {
                    v32 = a2;
LABEL_87:
                    g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(
                      v25,
                      v32,
                      (unsigned int)(uintptr_t)(v32),
                      (int)(uintptr_t)(a4),
                      (int)(uintptr_t)(a5));
LABEL_88:
                    a2 = v25;
                    v33 = v25;
                    goto LABEL_89;
                  }
                  v53 = (gameswf::ASValue::Self *)((char *)v25 + 12);
                  v60 = v25;
                  v56 = v51;
                  v27 = v25;
                  v28 = a2;
                  while ( 1 )
                  {
                    --v56;
                    v29 = (gameswf::ASValue::Self *)((char *)v28 - 12);
                    v30 = (gameswf::ASValue::Self *)((char *)v27 + 12 * ((-1431655765 * (v26 >> 2)) >> 1));
                    v61[0] = a4;
                    v61[1] = a5;
                    if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v60, v30) != 0 )
                    {
                      if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v30, v29) == 0 )
                      {
                        if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v60, v29) == 0 )
                          goto LABEL_69;
                        v62[0] = 0;
                        v62[1] = 0;
                        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v60);
                        goto LABEL_83;
                      }
                      v62[0] = 0;
                      v62[1] = 0;
                      v38 = v60;
                    }
                    else
                    {
                      if ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v60, v29) != 0 )
                        goto LABEL_69;
                      v19 = (uint8_t)gameswf::CustomArraySorter::opCall(v61, v30, v29) == 0;
                      v62[0] = 0;
                      v62[1] = 0;
                      v38 = v60;
                      if ( !v19 )
                      {
                        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v60);
LABEL_83:
                        gameswf::ASValue::opAssign(v60, v29);
                        gameswf::ASValue::opAssign(v29, (const gameswf::ASValue::Self *)v62);
                        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
                        goto LABEL_69;
                      }
                    }
                    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v38);
                    gameswf::ASValue::opAssign(v60, v30);
                    gameswf::ASValue::opAssign(v30, (const gameswf::ASValue::Self *)v62);
                    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
LABEL_69:
                    v61[0] = a4;
                    v61[1] = a5;
                    v58 = a2;
                    v28 = v53;
                    while ( 1 )
                    {
                      while ( (uint8_t)gameswf::CustomArraySorter::opCall(v61, v28, v60) != 0 )
                        v28 = (gameswf::ASValue::Self *)((char *)v28 + 12);
                      v57 = v28;
                      for ( k = (gameswf::ASValue::Self *)((char *)v58 - 12);
                            (uint8_t)gameswf::CustomArraySorter::opCall(v61, v60, k) != 0;
                            k = (gameswf::ASValue::Self *)((char *)k - 12) )
                      {
                        ;
                      }
                      v58 = k;
                      if ( v28 >= k )
                        break;
                      v62[0] = 0;
                      v62[1] = 0;
                      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v62, v28);
                      v28 = (gameswf::ASValue::Self *)((char *)v28 + 12);
                      gameswf::ASValue::opAssign(v57, k);
                      gameswf::ASValue::opAssign(k, (const gameswf::ASValue::Self *)v62);
                      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
                    }
                    v32 = v28;
                    g4_std::introsort_loop_gameswf_ASValue_int_game_daf37c(
                      v28,
                      a2,
                      v56,
                      (int)(uintptr_t)(a4),
                      (int)(uintptr_t)(a5));
                    v26 = v28 - v60;
                    if ( v28 - v60 <= 203 )
                    {
                      a2 = v60;
                      v33 = v60;
LABEL_89:
                      if ( v33 - v41 <= 203 )
                      {
LABEL_90:
                        v24 = v41;
                        a2 = v41;
                        goto LABEL_58;
                      }
                      goto LABEL_61;
                    }
                    if ( v56 == 0 )
                    {
                      v25 = v60;
                      goto LABEL_87;
                    }
                    a2 = v28;
                    v27 = v60;
                  }
                }
                g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(
                  v41,
                  a2,
                  (unsigned int)(uintptr_t)(a2),
                  (int)(uintptr_t)(a4),
                  (int)(uintptr_t)(a5));
                v24 = v41;
                a2 = v41;
              }
              v23 = v43;
              a2 = v43;
            }
            g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(
              v45,
              a2,
              (unsigned int)(uintptr_t)(a2),
              (int)(uintptr_t)(a4),
              (int)(uintptr_t)(a5));
LABEL_97:
            v22 = v45;
            a2 = v45;
          }
          g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(v47, a2, (unsigned int)(uintptr_t)(a2), (int)(uintptr_t)(a4), (int)(uintptr_t)(a5));
LABEL_99:
          v21 = v47;
          a2 = v47;
        }
        g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(v52, a2, (unsigned int)(uintptr_t)(a2), (int)(uintptr_t)(a4), (int)(uintptr_t)(a5));
LABEL_101:
        a2 = v52;
      }
      g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(v55, a2, (unsigned int)(uintptr_t)(a2), (int)(uintptr_t)(a4), (int)(uintptr_t)(a5));
LABEL_44:
      a2 = v55;
    }
    g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(v54, a2, (unsigned int)(uintptr_t)(a2), (int)(uintptr_t)(a4), (int)(uintptr_t)(a5));
LABEL_36:
    v5 = v54;
    a2 = v54;
  }
  g4_std::partial_sort_gameswf_ASValue_gameswf_8057c8(a1, a2, (unsigned int)(uintptr_t)(a2), (int)(uintptr_t)(a4), (int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gameswf_ASValue_gameswf_43f6cc  (binary VA: 0x11252d0)
// Original: std::__insertion_sort<gameswf::ASValue *,gameswf::CustomArraySorter>
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * g4_std::insertion_sort_gameswf_ASValue_gameswf_43f6cc(gameswf::ASValue::Self *a1, gameswf::ASValue::Self *a2, int a3, int a4)
{
  gameswf::ASValue::Self *result;
  gameswf::ASValue::Self *v5;
  gameswf::ASValue::Self *v6;
  gameswf::ASValue::Self *i;
  typedef gameswf::ASValue::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef gameswf::ASValue::Self *_g4_t_v10;
  typedef int _g4_t_v11[2];
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (37u + sizeof(_g4_t_v13)) > _g4_s5 ? (37u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 37u);

  result = a2;
  if ( a1 != a2 )
  {
    result = (gameswf::ASValue::Self *)((char *)a1 + 12);
    if ( a2 != (gameswf::ASValue::Self *)((char *)a1 + 12) )
    {
      v10 = (gameswf::ASValue::Self *)((char *)a1 + 12);
      do
      {
        v5 = v10;
        if ( (uint8_t)gameswf::CustomArraySorter::opCall((const gameswf::ASValue::Self **)&a3, v10, a1) != 0 )
        {
          v12 = 0;
          v13 = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v12, v10);
          v10 = (gameswf::ASValue::Self *)((char *)v10 + 12);
          v9 = -1431655765 * ((v5 - a1) >> 2);
          if ( v9 > 0 )
          {
            do
            {
              v5 = (gameswf::ASValue::Self *)((char *)v5 - 12);
              gameswf::ASValue::opAssign((gameswf::ASValue::Self *)((char *)v5 + 12), v5);
              --v9;
            }
            while ( v9 != 0 );
          }
          gameswf::ASValue::opAssign(a1, (const gameswf::ASValue::Self *)&v12);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v12);
          result = v10;
        }
        else
        {
          v11[0] = a3;
          v11[1] = a4;
          v12 = 0;
          v13 = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v12, v10);
          v6 = v10;
          for ( i = (gameswf::ASValue::Self *)((char *)v10 - 12); ; i = (gameswf::ASValue::Self *)((char *)i - 12) )
          {
            v8 = v6;
            if ( (uint8_t)gameswf::CustomArraySorter::opCall(
                                    (const gameswf::ASValue::Self **)v11,
                                    (gameswf::ASValue::Self *)&v12,
                                    i) == 0 )
              break;
            gameswf::ASValue::opAssign(v8, i);
            v6 = i;
          }
          gameswf::ASValue::opAssign(v8, (const gameswf::ASValue::Self *)&v12);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v12);
          result = (gameswf::ASValue::Self *)((char *)v10 + 12);
          v10 = (gameswf::ASValue::Self *)((char *)v10 + 12);
        }
      }
      while ( a2 != result );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_112C3A0  (binary VA: 0x112c3a0)
// Original: sub_112C3A0
// ----------------------------------------------------------------------------
int * sub_112C3A0(int **a1, char **a2, gameswf::ASValue::Self *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int **v22;
  gameswf::Self *v23;
  int v24;
  int i;
  uint32_t *v26;
  uint32_t *v27;
  char v28;
  int v29;
  char *v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;
  gameswf::Self *v39;
  int v40;
  int j;
  uint32_t *v42;
  int v43;
  int v44;
  int *v45;
  int v46;
  int v47;
  int v48;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v56;
  int v57;
  int *v58;
  int v59;
  uint32_t *v60;
  uint32_t *v61;

  v3 = *a1;
  if ( v3 != nullptr )
  {
    v4 = *v3;
    v5 = v3[1];
    v57 = v5 + 1;
    v6 = 2 * (v5 + 1);
    if ( 3 * *v3 > v6 )
    {
      if ( v6 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v59 = v3[1];
          v43 = 0;
          v44 = 2;
          do
          {
            v45 = &v3[v44];
            if ( v3[v44] != -2 )
            {
              v48 = v43;
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v45 + 3));
              *v45 = -2;
              v45[1] = 0;
              v43 = v48;
              v3 = *a1;
            }
            ++v43;
            v44 += 6;
          }
          while ( v59 >= v43 );
        }
        gameswf::free_internal((gameswf::Self *)v3);
        *a1 = nullptr;
        v3 = nullptr;
        v4 = 1179403647;
      }
      else
      {
        v18 = 1;
        if ( v6 == 1 )
        {
          LOWORD(v18) = 4;
        }
        else
        {
          do
            v18 *= 2;
          while ( v6 > v18 );
          if ( v18 <= 3 )
            v18 = 4;
        }
        if ( v57 != v18 )
        {
          v60 = (uint32_t *)gameswf::malloc_internal(24 * v18 + 8);
          *v60 = 0;
          v19 = v60;
          v20 = 2;
          v60[1] = v18 - 1;
          v21 = 0;
          while ( 1 )
          {
            ++v21;
            v19[v20] = -2;
            v20 += 6;
            if ( v18 <= v21 )
              break;
            v19 = v60;
          }
          v22 = a1;
          v23 = (gameswf::Self *)*a1;
          if ( *a1 != nullptr )
          {
            v53 = *((uint32_t *)v23 + 1);
            if ( v53 >= 0 )
            {
              v24 = 8;
              for ( i = 0; i <= v53; ++i )
              {
                v26 = (uint32_t *)((char *)v23 + v24);
                if ( *(uint32_t *)((char *)v23 + v24) != -2 )
                {
                  v46 = i;
                  sub_112C3A0((gameswf::ASValue::Self *)(v26 + 3));
                  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v26 + 3));
                  *v26 = -2;
                  v26[1] = 0;
                  i = v46;
                  v23 = (gameswf::Self *)*a1;
                }
                v24 += 24;
              }
            }
            gameswf::free_internal(v23);
            v22 = a1;
          }
          v3 = (int *)(v60);
          *v22 = (int *)(v60);
          v4 = *v60;
        }
      }
    }
  }
  else
  {
    v61 = (uint32_t *)gameswf::malloc_internal(0xC8u);
    *v61 = 0;
    v36 = v61;
    v37 = 2;
    v38 = 0;
    v61[1] = 7;
    while ( 1 )
    {
      ++v38;
      v36[v37] = -2;
      v37 += 6;
      if ( v38 > 7 )
        break;
      v36 = v61;
    }
    v39 = (gameswf::Self *)*a1;
    if ( *a1 != nullptr )
    {
      v54 = *((uint32_t *)v39 + 1);
      if ( v54 >= 0 )
      {
        v40 = 8;
        for ( j = 0; j <= v54; ++j )
        {
          v42 = (uint32_t *)((char *)v39 + v40);
          if ( *(uint32_t *)((char *)v39 + v40) != -2 )
          {
            v47 = j;
            sub_112C3A0((gameswf::ASValue::Self *)(v42 + 3));
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v42 + 3));
            *v42 = -2;
            v42[1] = 0;
            j = v47;
            v39 = (gameswf::Self *)*a1;
          }
          v40 += 24;
        }
      }
      gameswf::free_internal(v39);
    }
    v3 = (int *)(v61);
    *a1 = (int *)(v61);
    v4 = *v61;
  }
  *v3 = v4 + 1;
  v50 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v50 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v27 = (uint32_t *)(*a2);
    v28 = **a2;
    if ( v28 == -1 )
    {
      v30 = (char *)v27[3];
      v29 = v27[1] - 1;
    }
    else
    {
      v29 = v28 - 1;
      v30 = (char *)v27 + 1;
    }
    v52 = 5381;
    v31 = 5381;
    if ( v29 > 0 )
    {
      do
      {
        --v29;
        v32 = 33 * v31;
        v33 = (uint8_t)v30[v29] + 32;
        if ( (uint8_t)(v30[v29] - 65) > 0x19u )
          v33 = (uint8_t)v30[v29];
        v31 = v32 ^ v33;
      }
      while ( v29 != 0 );
      v31 = v31 << 9 >> 9;
      v52 = v31;
    }
    *((uint32_t *)*a2 + 4) = v31 & 0x7FFFFF | v50 & 0xFF800000;
    v7 = v52;
  }
  else
  {
    v7 = v50 << 9 >> 9;
    v52 = v7;
  }
  v8 = *a1;
  v9 = (*a1)[1];
  v10 = v9 & v7;
  v56 = v10;
  v11 = v10;
  v58 = &v8[6 * v10 + 2];
  v51 = *v58;
  if ( *v58 == -2 )
  {
    *v58 = -1;
    v8[6 * v10 + 3] = v52;
    v34 = *a2;
    LOBYTE(v8[6 * v10 + 5]) = 0;
    v8[6 * v10 + 4] = (int)(uintptr_t)(v34);
    BYTE1(v8[6 * v10 + 5]) = 0;
    return (int *)gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v8[6 * v10 + 5], a3);
  }
  else
  {
    v12 = v10;
    while ( 1 )
    {
      v11 = v9 & (v11 + 1);
      v13 = (int)(uintptr_t)(&v8[6 * v11 + 2]);
      if ( *(uint32_t *)v13 == -2 )
        break;
      if ( v12 == v11 )
      {
        v11 = v56;
        break;
      }
    }
    v14 = v58[1] & v9;
    if ( v56 == v14 )
    {
      *(uint32_t *)v13 = v51;
      *(uint32_t *)(v13 + 4) = v58[1];
      v35 = v58[2];
      *(uint8_t *)(v13 + 12) = 0;
      *(uint32_t *)(v13 + 8) = v35;
      *(uint8_t *)(v13 + 13) = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v13 + 12), (const gameswf::ASValue::Self *)(v58 + 3));
      v58[2] = (int)(uintptr_t)(*a2);
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v58 + 3), a3);
      *v58 = v11;
      v58[1] = v52;
      return v58;
    }
    else
    {
      v15 = v14;
      do
      {
        v16 = &v8[6 * v15 + 2];
        v15 = *v16;
      }
      while ( v56 != *v16 );
      *(uint32_t *)v13 = v51;
      *(uint32_t *)(v13 + 4) = v58[1];
      *(uint32_t *)(v13 + 8) = v58[2];
      *(uint8_t *)(v13 + 12) = 0;
      *(uint8_t *)(v13 + 13) = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v13 + 12), (const gameswf::ASValue::Self *)(v58 + 3));
      *v16 = v11;
      v58[2] = (int)(uintptr_t)(*a2);
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v58 + 3), a3);
      v58[1] = v52;
      *v58 = -1;
      return v58;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_112F730  (binary VA: 0x112f730)
// Original: sub_112F730
// ----------------------------------------------------------------------------
int * sub_112F730(int **a1, char **a2, gameswf::ASValue::Self *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int **v22;
  gameswf::Self *v23;
  int v24;
  int i;
  uint32_t *v26;
  uint32_t *v27;
  char v28;
  int v29;
  char *v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;
  gameswf::Self *v39;
  int v40;
  int j;
  uint32_t *v42;
  int v43;
  int v44;
  int *v45;
  int v46;
  int v47;
  int v48;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v56;
  int v57;
  int *v58;
  int v59;
  uint32_t *v60;
  uint32_t *v61;

  v3 = *a1;
  if ( v3 != nullptr )
  {
    v4 = *v3;
    v5 = v3[1];
    v57 = v5 + 1;
    v6 = 2 * (v5 + 1);
    if ( 3 * *v3 > v6 )
    {
      if ( v6 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v59 = v3[1];
          v43 = 0;
          v44 = 2;
          do
          {
            v45 = &v3[v44];
            if ( v3[v44] != -2 )
            {
              v48 = v43;
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v45 + 3));
              *v45 = -2;
              v45[1] = 0;
              v43 = v48;
              v3 = *a1;
            }
            ++v43;
            v44 += 6;
          }
          while ( v59 >= v43 );
        }
        gameswf::free_internal((gameswf::Self *)v3);
        *a1 = nullptr;
        v3 = nullptr;
        v4 = 1179403647;
      }
      else
      {
        v18 = 1;
        if ( v6 == 1 )
        {
          LOWORD(v18) = 4;
        }
        else
        {
          do
            v18 *= 2;
          while ( v6 > v18 );
          if ( v18 <= 3 )
            v18 = 4;
        }
        if ( v57 != v18 )
        {
          v60 = (uint32_t *)gameswf::malloc_internal(24 * v18 + 8);
          *v60 = 0;
          v19 = v60;
          v20 = 2;
          v60[1] = v18 - 1;
          v21 = 0;
          while ( 1 )
          {
            ++v21;
            v19[v20] = -2;
            v20 += 6;
            if ( v18 <= v21 )
              break;
            v19 = v60;
          }
          v22 = a1;
          v23 = (gameswf::Self *)*a1;
          if ( *a1 != nullptr )
          {
            v53 = *((uint32_t *)v23 + 1);
            if ( v53 >= 0 )
            {
              v24 = 8;
              for ( i = 0; i <= v53; ++i )
              {
                v26 = (uint32_t *)((char *)v23 + v24);
                if ( *(uint32_t *)((char *)v23 + v24) != -2 )
                {
                  v46 = i;
                  sub_112F730((gameswf::ASValue::Self *)(v26 + 3));
                  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v26 + 3));
                  *v26 = -2;
                  v26[1] = 0;
                  i = v46;
                  v23 = (gameswf::Self *)*a1;
                }
                v24 += 24;
              }
            }
            gameswf::free_internal(v23);
            v22 = a1;
          }
          v3 = (int *)(v60);
          *v22 = (int *)(v60);
          v4 = *v60;
        }
      }
    }
  }
  else
  {
    v61 = (uint32_t *)gameswf::malloc_internal(0xC8u);
    *v61 = 0;
    v36 = v61;
    v37 = 2;
    v38 = 0;
    v61[1] = 7;
    while ( 1 )
    {
      ++v38;
      v36[v37] = -2;
      v37 += 6;
      if ( v38 > 7 )
        break;
      v36 = v61;
    }
    v39 = (gameswf::Self *)*a1;
    if ( *a1 != nullptr )
    {
      v54 = *((uint32_t *)v39 + 1);
      if ( v54 >= 0 )
      {
        v40 = 8;
        for ( j = 0; j <= v54; ++j )
        {
          v42 = (uint32_t *)((char *)v39 + v40);
          if ( *(uint32_t *)((char *)v39 + v40) != -2 )
          {
            v47 = j;
            sub_112F730((gameswf::ASValue::Self *)(v42 + 3));
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v42 + 3));
            *v42 = -2;
            v42[1] = 0;
            j = v47;
            v39 = (gameswf::Self *)*a1;
          }
          v40 += 24;
        }
      }
      gameswf::free_internal(v39);
    }
    v3 = (int *)(v61);
    *a1 = (int *)(v61);
    v4 = *v61;
  }
  *v3 = v4 + 1;
  v50 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v50 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v27 = (uint32_t *)(*a2);
    v28 = **a2;
    if ( v28 == -1 )
    {
      v30 = (char *)v27[3];
      v29 = v27[1] - 1;
    }
    else
    {
      v29 = v28 - 1;
      v30 = (char *)v27 + 1;
    }
    v52 = 5381;
    v31 = 5381;
    if ( v29 > 0 )
    {
      do
      {
        --v29;
        v32 = 33 * v31;
        v33 = (uint8_t)v30[v29] + 32;
        if ( (uint8_t)(v30[v29] - 65) > 0x19u )
          v33 = (uint8_t)v30[v29];
        v31 = v32 ^ v33;
      }
      while ( v29 != 0 );
      v31 = v31 << 9 >> 9;
      v52 = v31;
    }
    *((uint32_t *)*a2 + 4) = v31 & 0x7FFFFF | v50 & 0xFF800000;
    v7 = v52;
  }
  else
  {
    v7 = v50 << 9 >> 9;
    v52 = v7;
  }
  v8 = *a1;
  v9 = (*a1)[1];
  v10 = v9 & v7;
  v56 = v10;
  v11 = v10;
  v58 = &v8[6 * v10 + 2];
  v51 = *v58;
  if ( *v58 == -2 )
  {
    *v58 = -1;
    v8[6 * v10 + 3] = v52;
    v34 = *a2;
    LOBYTE(v8[6 * v10 + 5]) = 0;
    v8[6 * v10 + 4] = (int)(uintptr_t)(v34);
    BYTE1(v8[6 * v10 + 5]) = 0;
    return (int *)gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v8[6 * v10 + 5], a3);
  }
  else
  {
    v12 = v10;
    while ( 1 )
    {
      v11 = v9 & (v11 + 1);
      v13 = (int)(uintptr_t)(&v8[6 * v11 + 2]);
      if ( *(uint32_t *)v13 == -2 )
        break;
      if ( v12 == v11 )
      {
        v11 = v56;
        break;
      }
    }
    v14 = v58[1] & v9;
    if ( v56 == v14 )
    {
      *(uint32_t *)v13 = v51;
      *(uint32_t *)(v13 + 4) = v58[1];
      v35 = v58[2];
      *(uint8_t *)(v13 + 12) = 0;
      *(uint32_t *)(v13 + 8) = v35;
      *(uint8_t *)(v13 + 13) = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v13 + 12), (const gameswf::ASValue::Self *)(v58 + 3));
      v58[2] = (int)(uintptr_t)(*a2);
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v58 + 3), a3);
      *v58 = v11;
      v58[1] = v52;
      return v58;
    }
    else
    {
      v15 = v14;
      do
      {
        v16 = &v8[6 * v15 + 2];
        v15 = *v16;
      }
      while ( v56 != *v16 );
      *(uint32_t *)v13 = v51;
      *(uint32_t *)(v13 + 4) = v58[1];
      *(uint32_t *)(v13 + 8) = v58[2];
      *(uint8_t *)(v13 + 12) = 0;
      *(uint8_t *)(v13 + 13) = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v13 + 12), (const gameswf::ASValue::Self *)(v58 + 3));
      *v16 = v11;
      v58[2] = (int)(uintptr_t)(*a2);
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v58 + 3), a3);
      v58[1] = v52;
      *v58 = -1;
      return v58;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1136E90  (binary VA: 0x1136e90)
// Original: sub_1136E90
// ----------------------------------------------------------------------------
void * sub_1136E90(int a1, size_t *a2, int a3, int a4)
{
  char v4;
  uint32_t *v6;
  int v7;
  void *result;
  void *dest;
  void *src;
  int v11;
  char *v12;

  v4 = 3;
  v6 = (uint32_t *)(a1 + 960);
  v12 = nullptr;
  while ( 1 )
  {
    v7 = a3 << v4;
    v11 = a4 << v4;
    if ( a4 << v4 > a3 << v4 )
    {
      do
      {
        src = (void *)(a2[3] + v7 * a2[2]);
        dest = (void *)(*v6 + v7 * *(v6 - 1));
        ++v7;
        result = memcpy(dest, src, *a2);
      }
      while ( v7 != v11 );
    }
    ++v12;
    a2 += 4;
    v6 += 4;
    if ( v12 == (char *)(uintptr_t)((uint8_t *)&dword_0 + 3) )
      break;
    result = v12;
    if ( v12 != nullptr )
    {
      result = (void *)(*(uint32_t *)(a1 + 872) & 2);
      v4 = 3 - (result == nullptr);
    }
    else
    {
      v4 = 3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_113AA60  (binary VA: 0x113aa60)
// Original: sub_113AA60
// ----------------------------------------------------------------------------
int sub_113AA60(long double a1, gameswf::ASNetStream::Self *a2)
{
  gameswf::ASNetStream::run(a1, a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1146880  (binary VA: 0x1146880)
// Original: sub_1146880
// ----------------------------------------------------------------------------
char * sub_1146880(gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **a1, char *a2)
{
  const char *v2;
  char *result;
  char *i;
  char v5;
  const char *j;
  const char *v7;
  const char *v8;
  char *v9;
  char *v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  char *v13;
  gameswf::Self *v14;
  int v15;
  int v16;
  int v17;
  gameswf::Self *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  char *v25;
  gameswf::String::Self *v26;
  int v27;
  int v28;
  int v29;
  gameswf::Self *v30;
  char *v31;
  gameswf::Self *v32;
  int v33;
  gameswf::Self *v34;
  int v35;
  int v36;
  int v37;
  typedef const char *_g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef const char *_g4_t_v45;
  typedef const void *_g4_t_v48;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef const char *_g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_s[11];
  typedef gameswf::Self *_g4_t_v56;
  typedef int16_t _g4_t_v57;
  typedef char _g4_t_v58;
  typedef char _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef gameswf::Self *_g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef char _g4_t_v64;
  typedef uint8_t _g4_t_v65[3];
  typedef int _g4_t_v66;
  typedef gameswf::Self *_g4_t_v67;
  typedef unsigned int _g4_t_v68;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v39)) > _g4_s1 ? (0u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v40)) > _g4_s2 ? (4u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v41)) > _g4_s3 ? (4u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v42)) > _g4_s4 ? (4u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v43)) > _g4_s5 ? (4u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v44)) > _g4_s6 ? (8u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v45)) > _g4_s7 ? (8u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v48)) > _g4_s8 ? (28u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v49)) > _g4_s9 ? (28u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v50)) > _g4_s10 ? (28u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v51)) > _g4_s11 ? (32u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v52)) > _g4_s12 ? (32u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v53)) > _g4_s13 ? (32u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v54)) > _g4_s14 ? (48u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (49u + sizeof(_g4_t_s)) > _g4_s15 ? (49u + sizeof(_g4_t_s)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v56)) > _g4_s16 ? (60u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v57)) > _g4_s17 ? (64u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (66u + sizeof(_g4_t_v58)) > _g4_s18 ? (66u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (67u + sizeof(_g4_t_v59)) > _g4_s19 ? (67u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v60)) > _g4_s20 ? (80u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v61)) > _g4_s21 ? (84u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v62)) > _g4_s22 ? (92u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v63)) > _g4_s23 ? (96u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v64)) > _g4_s24 ? (112u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (113u + sizeof(_g4_t_v65)) > _g4_s25 ? (113u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v66)) > _g4_s26 ? (116u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v67)) > _g4_s27 ? (124u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v68)) > _g4_s28 ? (128u + sizeof(_g4_t_v68)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 49u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 66u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 67u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 112u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 113u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 116u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);

  v2 = a2 + 1;
  if ( *a2 == -1 )
    v2 = *((const char **)a2 + 3);
  result = (char *)(strchr(v2, 58));
  if ( result != nullptr )
  {
    while ( 1 )
    {
      for ( i = result; ; --i )
      {
        v5 = *(i - 1);
        if ( v5 != 9 && v5 != 32 && v5 != 10 && v5 != 13 )
          break;
      }
      v51 = i - 1;
      if ( v5 != 123 && v5 != 32 )
      {
        do
        {
          if ( v5 == 44 )
            break;
          if ( v5 == 9 )
            break;
          if ( v5 == 10 )
            break;
          if ( v5 == 59 )
            break;
          v5 = *--v51;
          if ( *v51 == 32 )
            break;
        }
        while ( v5 != 123 );
      }
      for ( j = result + 1; *j == 32; ++j )
        ;
      v7 = j;
      v8 = j;
      if ( *j != 59 )
      {
        v8 = j;
        if ( *a2 == -1 )
        {
          while ( 1 )
          {
            v7 = v8;
            if ( *((uint32_t *)a2 + 1) - 1 <= (int)(uintptr_t)(&v8[-*((uint32_t *)a2 + 3)]) )
              break;
            if ( *++v8 == 59 )
            {
              v7 = v8;
              break;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v7 = v8;
            if ( v8 - (a2 + 1) >= *a2 - 1 )
              break;
            if ( *++v8 == 59 )
            {
              v7 = v8;
              break;
            }
          }
        }
      }
      v54 = 1;
      s[0] = 0;
      v48 = v51 + 1;
      if ( v51 != (char *)-1 )
      {
        v38 = v7;
        v52 = i - v51;
        gameswf::String::resize((gameswf::String::Self *)&v54, v52 - 1);
        v9 = s;
        if ( v54 == -1 )
          v9 = (char *)v56;
        memcpy(v9, v48, v52 - 1);
        v10 = s;
        if ( v54 == -1 )
          v10 = (char *)v56;
        v10[v52 - 1] = 0;
        v7 = v38;
      }
      v57 = -1;
      v39 = v7 - j;
      v58 = 127;
      v59 |= 1u;
      LOWORD(v60) = 1;
      gameswf::String::resize((gameswf::String::Self *)&v60, v7 - j);
      v11 = (gameswf::Self *)((char *)&v60 + 1);
      if ( (uint8_t)v60 == 0xFF )
        v11 = v62;
      memcpy(v11, j, v39);
      v12 = (gameswf::Self *)((char *)&v60 + 1);
      if ( (uint8_t)v60 == 0xFF )
        v12 = v62;
      *((uint8_t *)v12 + v39) = 0;
      LOWORD(v63) = -1;
      BYTE2(v63) = 127;
      HIBYTE(v63) |= 1u;
      if ( v54 != -1 )
        break;
      v13 = (char *)v56;
      v64 = 1;
      v65[0] = 0;
      if ( v56 != nullptr )
        goto LABEL_27;
LABEL_30:
      LOWORD(v68) = -1;
      HIBYTE(v68) = ((uint16_t)(HIWORD(v68) | 0x7F) >> 8) | 1;
      BYTE2(v68) = 127;
      v49 = *a1;
      if ( *a1 == nullptr )
        goto LABEL_34;
      v44 = -1;
      if ( (uint8_t *)(v68 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( v64 == -1 )
        {
          v18 = v67;
          v19 = v66 - 1;
        }
        else
        {
          v18 = (gameswf::Self *)v65;
          v19 = v64 - 1;
        }
        v44 = 5381;
        v20 = 5381;
        if ( v19 > 0 )
        {
          v45 = v8;
          do
          {
            --v19;
            v21 = 33 * v20;
            v22 = *((uint8_t *)v18 + v19) + 32;
            if ( (uint8_t)(*((uint8_t *)v18 + v19) - 65) > 0x19u )
              v22 = *((uint8_t *)v18 + v19);
            v20 = v21 ^ v22;
          }
          while ( v19 != 0 );
          v8 = v45;
          v20 = v20 << 9 >> 9;
          v44 = v20;
        }
        v68 = v20 & 0x7FFFFF | v68 & 0xFF800000;
      }
      v15 = *((uint32_t *)v49 + 1) & v44;
      v16 = (int)(uintptr_t)(v49) + 48 * v15 + 8;
      if ( *(uint32_t *)v16 != -2 && (v17 = *((uint32_t *)v49 + 12 * v15 + 3), v15 == (v17 & *((uint32_t *)v49 + 1))) )
      {
        v53 = v8;
        v23 = *((uint32_t *)v49 + 1) & v44;
        v24 = v44;
        while ( 1 )
        {
          if ( v24 == v17 )
          {
            if ( &v64 == (char *)(v16 + 8) )
              break;
            v25 = (char *)(v65);
            if ( v64 == -1 )
              v25 = (char *)v67;
            v26 = (gameswf::String::Self *)(v16 + 9);
            if ( *(uint8_t *)(v16 + 8) == 0xFF )
              v26 = *(gameswf::String::Self **)(v16 + 20);
            v43 = v24;
            v27 = gameswf::String::stricmp(v26, v25);
            v24 = v43;
            if ( v27 == 0 )
              break;
          }
          v23 = *(uint32_t *)v16;
          if ( *(uint32_t *)v16 == -1 )
          {
            v8 = v53;
            goto LABEL_34;
          }
          v16 = (int)(uintptr_t)(*a1) + 48 * v23 + 8;
          v17 = *(uint32_t *)(v16 + 4);
        }
        v28 = v23;
        v8 = v53;
        if ( v28 < 0 )
          goto LABEL_34;
        v50 = (uint32_t *)((char *)*a1 + 48 * v28 + 8);
        if ( v50 + 7 != &v60 )
        {
          if ( (uint8_t)v60 == 0xFF )
            v29 = v61 - 1;
          else
            v29 = (char)v60 - 1;
          gameswf::String::resize((gameswf::String::Self *)(v50 + 7), v29);
          v30 = (gameswf::Self *)((char *)&v60 + 1);
          if ( (uint8_t)v60 == 0xFF )
            v30 = v62;
          LOBYTE(v31) = *((uint8_t *)v50 + 28);
          if ( (uint8_t)(uintptr_t)(v31) == 0xFF )
          {
            v31 = (char *)v50[8];
            v32 = (gameswf::Self *)v50[10];
          }
          else
          {
            v31 = (char *)(char)(uintptr_t)(v31);
            v32 = (gameswf::Self *)((char *)v50 + 29);
          }
          gameswf::Strcpy_s(v32, v31, v30);
          if ( (uint8_t *)(v63 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
          {
            if ( (uint8_t)v60 == 0xFF )
            {
              v34 = v62;
              v35 = v61 - 1;
            }
            else
            {
              v34 = (gameswf::Self *)((char *)&v60 + 1);
              v35 = (char)v60 - 1;
            }
            v33 = 5381;
            if ( v35 > 0 )
            {
              do
              {
                --v35;
                v36 = 33 * v33;
                v37 = *((uint8_t *)v34 + v35) + 32;
                if ( (uint8_t)(*((uint8_t *)v34 + v35) - 65) > 0x19u )
                  v37 = *((uint8_t *)v34 + v35);
                v33 = v36 ^ v37;
              }
              while ( v35 != 0 );
              v8 = v53;
              v33 = v33 << 9 >> 9;
            }
            v63 = v33 & 0x7FFFFF | v63 & 0xFF800000;
          }
          else
          {
            v33 = (int)(v63 << 9) >> 9;
          }
          v50[11] = v33 & 0x7FFFFF | v50[11] & 0xFF800000;
        }
      }
      else
      {
LABEL_34:
        gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
          a1,
          (const gameswf::StringI::Self *)&v64,
          (const gameswf::String::Self *)&v60);
      }
      if ( v64 == -1 && (v68 & 0x1000000) != 0 )
        gameswf::free_internal(v67);
      result = (char *)(strchr(v8, 58));
      if ( (uint8_t)v60 == 0xFF && (v63 & 0x1000000) != 0 )
      {
        v42 = result;
        gameswf::free_internal(v62);
        result = v42;
      }
      if ( v54 == -1 && (v59 & 1) != 0 )
      {
        v41 = result;
        gameswf::free_internal(v56);
        result = v41;
      }
      if ( result == nullptr )
        return result;
    }
    v64 = 1;
    v65[0] = 0;
    v13 = s;
LABEL_27:
    v40 = strlen(v13);
    gameswf::String::resize((gameswf::String::Self *)&v64, v40);
    v14 = (gameswf::Self *)v65;
    if ( v64 == -1 )
      v14 = v67;
    gameswf::Strcpy_s(v14, (char *)(v40 + 1), (gameswf::Self *)v13);
    goto LABEL_30;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1147050  (binary VA: 0x1147050)
// Original: sub_1147050
// ----------------------------------------------------------------------------
char * sub_1147050(int a1, char *s)
{
  gameswf::Self *v2;
  uint32_t *v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  gameswf::Self **v7;
  char *result;
  int v9;
  char *v10;
  char *j;
  int v12;
  char *v13;
  size_t v14;
  char *v15;
  char *v16;
  size_t v17;
  gameswf::Self *v18;
  gameswf::Self *v19;
  char *v20;
  size_t v21;
  gameswf::Self *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  gameswf::Self *v28;
  int v29;
  int v30;
  int v31;
  gameswf::Self **v32;
  gameswf::Self *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char *v41;
  gameswf::String::Self *v42;
  int v43;
  gameswf::Self *v44;
  int v45;
  int v46;
  int k;
  gameswf::Self **v48;
  int v49;
  gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef char *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::ASStyleSheet::Style, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v75;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **_g4_t_v76;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **_g4_t_v77;
  typedef char *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v81;
  typedef char *_g4_t_v82;
  typedef int _g4_t_i;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef unsigned int _g4_t_v88[4];
  typedef char _g4_t_v89;
  typedef char _g4_t_v90[11];
  typedef gameswf::Self *_g4_t_v91;
  typedef int16_t _g4_t_v92;
  typedef char _g4_t_v93;
  typedef char _g4_t_v94;
  typedef char _g4_t_v95;
  typedef uint8_t _g4_t_v96[11];
  typedef gameswf::Self *_g4_t_v97;
  typedef int16_t _g4_t_v98;
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef char _g4_t_v101;
  typedef uint8_t _g4_t_v102[3];
  typedef int _g4_t_v103;
  typedef gameswf::Self *_g4_t_v104;
  typedef unsigned int _g4_t_v105;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v59)) > _g4_s0 ? (4u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v60)) > _g4_s1 ? (4u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v61)) > _g4_s2 ? (4u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v62)) > _g4_s3 ? (4u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v63)) > _g4_s4 ? (4u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v64)) > _g4_s5 ? (4u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v65)) > _g4_s6 ? (4u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v66)) > _g4_s7 ? (8u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v67)) > _g4_s8 ? (8u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v68)) > _g4_s9 ? (8u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v69)) > _g4_s10 ? (8u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v70)) > _g4_s11 ? (8u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v71)) > _g4_s12 ? (8u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v72)) > _g4_s13 ? (8u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v73)) > _g4_s14 ? (8u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (8u + sizeof(_g4_t_v74)) > _g4_s15 ? (8u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v75)) > _g4_s16 ? (12u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v76)) > _g4_s17 ? (16u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v77)) > _g4_s18 ? (16u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v78)) > _g4_s19 ? (20u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v79)) > _g4_s20 ? (24u + sizeof(_g4_t_v79)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v81)) > _g4_s21 ? (32u + sizeof(_g4_t_v81)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v82)) > _g4_s22 ? (32u + sizeof(_g4_t_v82)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_i)) > _g4_s23 ? (36u + sizeof(_g4_t_i)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v84)) > _g4_s24 ? (40u + sizeof(_g4_t_v84)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v85)) > _g4_s25 ? (40u + sizeof(_g4_t_v85)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v86)) > _g4_s26 ? (40u + sizeof(_g4_t_v86)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v87)) > _g4_s27 ? (40u + sizeof(_g4_t_v87)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v88)) > _g4_s28 ? (48u + sizeof(_g4_t_v88)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v89)) > _g4_s29 ? (64u + sizeof(_g4_t_v89)) : _g4_s29,
    _g4_s31 = (65u + sizeof(_g4_t_v90)) > _g4_s30 ? (65u + sizeof(_g4_t_v90)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v91)) > _g4_s31 ? (76u + sizeof(_g4_t_v91)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v92)) > _g4_s32 ? (80u + sizeof(_g4_t_v92)) : _g4_s32,
    _g4_s34 = (82u + sizeof(_g4_t_v93)) > _g4_s33 ? (82u + sizeof(_g4_t_v93)) : _g4_s33,
    _g4_s35 = (83u + sizeof(_g4_t_v94)) > _g4_s34 ? (83u + sizeof(_g4_t_v94)) : _g4_s34,
    _g4_s36 = (96u + sizeof(_g4_t_v95)) > _g4_s35 ? (96u + sizeof(_g4_t_v95)) : _g4_s35,
    _g4_s37 = (97u + sizeof(_g4_t_v96)) > _g4_s36 ? (97u + sizeof(_g4_t_v96)) : _g4_s36,
    _g4_s38 = (108u + sizeof(_g4_t_v97)) > _g4_s37 ? (108u + sizeof(_g4_t_v97)) : _g4_s37,
    _g4_s39 = (112u + sizeof(_g4_t_v98)) > _g4_s38 ? (112u + sizeof(_g4_t_v98)) : _g4_s38,
    _g4_s40 = (114u + sizeof(_g4_t_v99)) > _g4_s39 ? (114u + sizeof(_g4_t_v99)) : _g4_s39,
    _g4_s41 = (115u + sizeof(_g4_t_v100)) > _g4_s40 ? (115u + sizeof(_g4_t_v100)) : _g4_s40,
    _g4_s42 = (128u + sizeof(_g4_t_v101)) > _g4_s41 ? (128u + sizeof(_g4_t_v101)) : _g4_s41,
    _g4_s43 = (129u + sizeof(_g4_t_v102)) > _g4_s42 ? (129u + sizeof(_g4_t_v102)) : _g4_s42,
    _g4_s44 = (132u + sizeof(_g4_t_v103)) > _g4_s43 ? (132u + sizeof(_g4_t_v103)) : _g4_s43,
    _g4_s45 = (140u + sizeof(_g4_t_v104)) > _g4_s44 ? (140u + sizeof(_g4_t_v104)) : _g4_s44,
    _g4_s46 = (144u + sizeof(_g4_t_v105)) > _g4_s45 ? (144u + sizeof(_g4_t_v105)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 4u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 8u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 8u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 8u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 8u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 8u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 8u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 12u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 16u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 16u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 20u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 32u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 32u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 48u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 64u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 65u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 76u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 80u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 82u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 83u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 96u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 97u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 108u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 112u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 114u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 115u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 128u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 129u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 132u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 140u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 144u);

  v75 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASStyleSheet::Style, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)(a1 + 40);
  v2 = *(gameswf::Self **)(a1 + 40);
  if ( v2 != nullptr )
  {
    v81 = *((uint32_t *)v2 + 1);
    if ( v81 >= 0 )
    {
      for ( i = 0; v81 >= i; ++i )
      {
        v3 = (uint32_t *)((char *)v2 + 32 * i + 8);
        if ( *v3 != -2 )
        {
          if ( *((uint8_t *)v2 + 32 * i + 16) == 0xFF && (*((uint8_t *)v2 + 32 * i + 35) & 1) != 0 )
          {
            v71 = (int)(uintptr_t)(v2) + 32 * i + 8;
            gameswf::free_internal(*((gameswf::Self **)v2 + 8 * i + 7));
            v3 = (uint32_t *)v71;
          }
          v4 = (gameswf::Self *)v3[7];
          if ( v4 != nullptr )
          {
            v84 = *((uint32_t *)v4 + 1);
            if ( v84 >= 0 )
            {
              v5 = 8;
              v6 = 0;
              while ( 2 )
              {
                v7 = (gameswf::Self **)((char *)v4 + v5);
                if ( *(uint32_t *)((char *)v4 + v5) == -2 )
                  goto LABEL_11;
                if ( *((uint8_t *)v7 + 8) == 0xFF && (*((uint8_t *)v7 + 27) & 1) != 0 )
                {
                  v59 = v5;
                  v66 = v3;
                  gameswf::free_internal(v7[5]);
                  v3 = v66;
                  v5 = v59;
                  if ( *((uint8_t *)v7 + 28) == 0xFF )
                    goto LABEL_16;
                }
                else if ( *((uint8_t *)v7 + 28) == 0xFF )
                {
LABEL_16:
                  if ( (*((uint8_t *)v7 + 47) & 1) != 0 )
                  {
                    v60 = v5;
                    v67 = v3;
                    gameswf::free_internal(v7[10]);
                    v3 = v67;
                    v5 = v60;
                  }
                }
                *v7 = (gameswf::Self *)-2;
                v7[1] = nullptr;
                v4 = (gameswf::Self *)v3[7];
LABEL_11:
                ++v6;
                v5 += 48;
                if ( v84 < v6 )
                  break;
                continue;
              }
            }
            v68 = v3;
            gameswf::free_internal(v4);
            v3 = v68;
            v68[7] = 0;
          }
          *v3 = -2;
          v3[1] = 0;
          v2 = *(gameswf::Self **)(a1 + 40);
        }
      }
    }
    gameswf::free_internal(v2);
    *(uint32_t *)(a1 + 40) = 0;
  }
  result = (char *)strlen(s);
  v82 = result;
  if ( (int)(uintptr_t)(result) <= 0 )
    return result;
  v9 = 0;
LABEL_26:
  result = &s[v9];
  if ( s[v9] != 46 )
  {
    ++v9;
    goto LABEL_25;
  }
  result = strchr(&s[v9], 123);
  v10 = result;
  if ( result != nullptr )
  {
    result = strchr(result + 1, 125);
    v78 = result;
    if ( result != nullptr )
    {
      for ( j = v10; ; --j )
      {
        v12 = *(j - 1);
        if ( v12 != 9 && v12 != 32 && v12 != 10 && v12 != 13 )
          break;
      }
      v89 = 1;
      v90[0] = 0;
      v13 = &s[v9 + 1];
      if ( &s[v9] != (char *)-1 )
      {
        v61 = &s[v9 + 1];
        v14 = j - v13;
        gameswf::String::resize((gameswf::String::Self *)&v89, j - v13);
        v15 = v90;
        if ( v89 == -1 )
          v15 = (char *)v91;
        memcpy(v15, v61, v14);
        v16 = v90;
        if ( v89 == -1 )
          v16 = (char *)v91;
        v16[v14] = 0;
      }
      v17 = v78 - v10;
      v92 = -1;
      v93 = 127;
      v94 |= 1u;
      v95 = 1;
      v96[0] = 0;
      gameswf::String::resize((gameswf::String::Self *)&v95, v78 - v10);
      v18 = (gameswf::Self *)v96;
      if ( v95 == -1 )
        v18 = v97;
      memcpy(v18, v10, v17);
      v19 = (gameswf::Self *)v96;
      if ( v95 == -1 )
        v19 = v97;
      *((uint8_t *)v19 + v17) = 0;
      v88[0] = 0;
      v98 = -1;
      v99 = 127;
      v100 |= 1u;
      sub_1146880(
        (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)v88,
        &v95);
      if ( v89 == -1 )
      {
        v20 = (char *)v91;
        v101 = 1;
        v102[0] = 0;
        if ( v91 == nullptr )
          goto LABEL_49;
      }
      else
      {
        v101 = 1;
        v102[0] = 0;
        v20 = v90;
      }
      v21 = strlen(v20);
      gameswf::String::resize((gameswf::String::Self *)&v101, v21);
      v22 = (gameswf::Self *)v102;
      if ( v101 == -1 )
        v22 = v104;
      gameswf::Strcpy_s(v22, (char *)(v21 + 1), (gameswf::Self *)v20);
LABEL_49:
      LOWORD(v105) = -1;
      BYTE2(v105) = 127;
      HIBYTE(v105) |= 1u;
      v79 = *(uint32_t *)(a1 + 40);
      if ( v79 == 0 )
        goto LABEL_53;
      v23 = -1;
      if ( (uint8_t *)(v105 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( v101 == -1 )
        {
          v33 = v104;
          v34 = v103 - 1;
        }
        else
        {
          v33 = (gameswf::Self *)v102;
          v34 = v101 - 1;
        }
        v23 = 5381;
        v35 = 5381;
        if ( v34 > 0 )
        {
          do
          {
            --v34;
            v36 = 33 * v35;
            v37 = *((uint8_t *)v33 + v34) + 32;
            if ( (uint8_t)(*((uint8_t *)v33 + v34) - 65) > 0x19u )
              v37 = *((uint8_t *)v33 + v34);
            v35 = v36 ^ v37;
          }
          while ( v34 != 0 );
          v35 = v35 << 9 >> 9;
          v23 = v35;
        }
        v105 = v35 & 0x7FFFFF | v105 & 0xFF800000;
      }
      v24 = *(uint32_t *)(v79 + 4);
      v25 = v24 & v23;
      v26 = v79 + 32 * (v24 & v23) + 8;
      if ( *(uint32_t *)v26 == -2 )
        goto LABEL_53;
      v27 = *(uint32_t *)(v79 + 32 * (v24 & v23) + 12);
      if ( v25 != (v27 & v24) )
        goto LABEL_53;
      v38 = v23;
      v39 = v25;
      v40 = v38;
      while ( 1 )
      {
        if ( v40 == v27 )
        {
          if ( &v101 == (char *)(v26 + 8) )
            break;
          v41 = (char *)(v102);
          if ( v101 == -1 )
            v41 = (char *)v104;
          v42 = (gameswf::String::Self *)(v26 + 9);
          if ( *(uint8_t *)(v26 + 8) == 0xFF )
            v42 = *(gameswf::String::Self **)(v26 + 20);
          v72 = v40;
          v43 = gameswf::String::stricmp(v42, v41);
          v40 = v72;
          if ( v43 == 0 )
            break;
        }
        v39 = *(uint32_t *)v26;
        if ( *(uint32_t *)v26 == -1 )
          goto LABEL_53;
        v26 = *(uint32_t *)(a1 + 40) + 32 * v39 + 8;
        v27 = *(uint32_t *)(v26 + 4);
      }
      if ( v39 >= 0 )
      {
        v85 = 32 * v39 + 8 + *(uint32_t *)(a1 + 40);
        v44 = *(gameswf::Self **)(v85 + 28);
        if ( v44 != nullptr )
        {
          v45 = *((uint32_t *)v44 + 1);
          if ( v45 >= 0 )
          {
            v46 = 8;
            for ( k = 0; v45 >= k; ++k )
            {
              v48 = (gameswf::Self **)((char *)v44 + v46);
              if ( *(uint32_t *)((char *)v44 + v46) == -2 )
                goto LABEL_107;
              if ( *((uint8_t *)v48 + 8) == 0xFF && (*((uint8_t *)v48 + 27) & 1) != 0 )
              {
                v64 = v46;
                v73 = v45;
                gameswf::free_internal(v48[5]);
                v45 = v73;
                v46 = v64;
                if ( *((uint8_t *)v48 + 28) == 0xFF )
                {
LABEL_112:
                  if ( (*((uint8_t *)v48 + 47) & 1) != 0 )
                  {
                    v65 = v46;
                    v74 = v45;
                    gameswf::free_internal(v48[10]);
                    v45 = v74;
                    v46 = v65;
                  }
                }
              }
              else if ( *((uint8_t *)v48 + 28) == 0xFF )
              {
                goto LABEL_112;
              }
              *v48 = (gameswf::Self *)-2;
              v48[1] = nullptr;
              v44 = *(gameswf::Self **)(v85 + 28);
LABEL_107:
              v46 += 48;
            }
          }
          gameswf::free_internal(v44);
          *(uint32_t *)(v85 + 28) = 0;
        }
        result = (char *)v88[0];
        if ( v88[0] != 0 && *(uint32_t *)v88[0] != 0 )
        {
          v49 = 0;
          if ( *(int *)v88[0] >= 0 )
            v49 = (3 * *(uint32_t *)v88[0]) >> 1;
          v50 = (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v85 + 28);
          gameswf::hash_gameswf_StringI_gameswf_a0f678::set_raw_capacity(
            (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)(v85 + 28),
            v49);
          result = (char *)v88[0];
          if ( v88[0] != 0 )
          {
            v51 = *(uint32_t *)(v88[0] + 4);
            if ( v51 >= 0 )
            {
              v52 = 0;
              if ( *(uint32_t *)(v88[0] + 8) == -2 )
              {
                v87 = 56;
                v54 = 1;
                v76 = v50;
                while ( 1 )
                {
                  v52 = v54;
                  if ( v54 > v51 )
                    break;
                  v55 = v87;
                  ++v54;
                  v87 += 48;
                  if ( *(uint32_t *)(v88[0] + v55) != -2 )
                  {
                    v50 = v76;
                    goto LABEL_122;
                  }
                }
              }
              else
              {
LABEL_122:
                while ( 1 )
                {
                  gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
                    v50,
                    (const gameswf::StringI::Self *)&result[48 * v52 + 16],
                    (const gameswf::String::Self *)&result[48 * v52 + 36]);
                  result = (char *)v88[0];
                  v53 = *(uint32_t *)(v88[0] + 4);
                  if ( v53 < v52 )
                    break;
                  v86 = v52 + 1;
                  if ( v53 < v52 + 1 )
                    break;
                  if ( *(uint32_t *)(v88[0] + 48 * (v52 + 1) + 8) == -2 )
                  {
                    v56 = v52 + 2;
                    v77 = v50;
                    v57 = 48 * v56 + 8;
                    while ( 1 )
                    {
                      v86 = v56;
                      if ( v53 < v56 )
                        goto LABEL_54;
                      v58 = *(uint32_t *)(v88[0] + v57);
                      ++v56;
                      v57 += 48;
                      if ( v58 != -2 )
                      {
                        v50 = v77;
                        break;
                      }
                    }
                  }
                  v52 = v86;
                }
              }
            }
          }
        }
      }
      else
      {
LABEL_53:
        result = (char *)gameswf::hash_gameswf_StringI_gameswf_04f315::add(
                           v75,
                           (int)(uintptr_t)(&v101),
                           (int)(uintptr_t)(v88));
      }
LABEL_54:
      if ( v101 == -1 && (v105 & 0x1000000) != 0 )
        result = (char *)gameswf::free_internal(v104);
      v28 = (gameswf::Self *)v88[0];
      v9 = v78 - s + 1;
      if ( v88[0] == 0 )
        goto LABEL_70;
      if ( *(int *)(v88[0] + 4) < 0 )
        goto LABEL_69;
      v29 = 0;
      v30 = 8;
      v31 = *(uint32_t *)(v88[0] + 4);
      while ( 1 )
      {
        v32 = (gameswf::Self **)((char *)v28 + v30);
        if ( *(uint32_t *)((char *)v28 + v30) == -2 )
          goto LABEL_60;
        if ( *((uint8_t *)v32 + 8) == 0xFF && (*((uint8_t *)v32 + 27) & 1) != 0 )
        {
          v62 = v29;
          v69 = v31;
          gameswf::free_internal(v32[5]);
          v31 = v69;
          v29 = v62;
          if ( *((uint8_t *)v32 + 28) == 0xFF )
          {
LABEL_65:
            if ( (*((uint8_t *)v32 + 47) & 1) != 0 )
            {
              v63 = v29;
              v70 = v31;
              gameswf::free_internal(v32[10]);
              v31 = v70;
              v29 = v63;
            }
          }
        }
        else if ( *((uint8_t *)v32 + 28) == 0xFF )
        {
          goto LABEL_65;
        }
        *v32 = (gameswf::Self *)-2;
        v32[1] = nullptr;
        v28 = (gameswf::Self *)v88[0];
LABEL_60:
        ++v29;
        v30 += 48;
        if ( v31 < v29 )
        {
          v9 = v78 - s + 1;
LABEL_69:
          result = (char *)gameswf::free_internal(v28);
          v88[0] = 0;
LABEL_70:
          if ( v95 == -1 && (v100 & 1) != 0 )
            result = (char *)gameswf::free_internal(v97);
          if ( v89 == -1 && (v94 & 1) != 0 )
          {
            result = (char *)gameswf::free_internal(v91);
            if ( (int)(uintptr_t)(v82) <= v9 )
              return result;
            goto LABEL_26;
          }
LABEL_25:
          if ( (int)(uintptr_t)(v82) <= v9 )
            return result;
          goto LABEL_26;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1149720  (binary VA: 0x1149720)
// Original: sub_1149720
// ----------------------------------------------------------------------------
gameswf::Self ** sub_1149720()
{
  gameswf::Self **result;
  gameswf::Self **v1;

  for ( result = (gameswf::Self **)&unk_2115724; ; result = v1 )
  {
    v1 = result - 5;
    if ( *((uint8_t *)result - 20) == 0xFF && (*((uint8_t *)result - 1) & 1) != 0 )
      break;
    if ( v1 == (gameswf::Self **)&unk_2115620 )
      return result;
LABEL_3:
    ;
  }
  result = (gameswf::Self **)gameswf::free_internal(v1[3]);
  if ( v1 != (gameswf::Self **)&unk_2115620 )
    goto LABEL_3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1149B90  (binary VA: 0x1149b90)
// Original: sub_1149B90
// ----------------------------------------------------------------------------
int sub_1149B90()
{
  sub_776320((gameswf::String::Self *)&unk_2115620, (gameswf::Self *)"font");
  sub_776320((gameswf::String::Self *)&unk_2115634, (gameswf::Self *)"size");
  sub_776320((gameswf::String::Self *)&unk_2115648, (gameswf::Self *)"color");
  sub_776320((gameswf::String::Self *)&unk_211565C, (gameswf::Self *)"bold");
  sub_776320((gameswf::String::Self *)&unk_2115670, (gameswf::Self *)"italic");
  sub_776320((gameswf::String::Self *)&unk_2115684, (gameswf::Self *)"underline");
  sub_776320((gameswf::String::Self *)&unk_2115698, (gameswf::Self *)"url");
  sub_776320((gameswf::String::Self *)&unk_21156AC, (gameswf::Self *)"target");
  sub_776320((gameswf::String::Self *)&unk_21156C0, (gameswf::Self *)"align");
  sub_776320((gameswf::String::Self *)&unk_21156D4, (gameswf::Self *)"leftMargin");
  sub_776320((gameswf::String::Self *)&unk_21156E8, (gameswf::Self *)"rightMargin");
  sub_776320((gameswf::String::Self *)&unk_21156FC, (gameswf::Self *)"indent");
  sub_776320((gameswf::String::Self *)&unk_2115710, (gameswf::Self *)"leading");
  return __cxa_atexit((void (*)(void *))sub_1149720, nullptr, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1150560  (binary VA: 0x1150560)
// Original: sub_1150560
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * sub_1150560(int a1, int a2, int a3, gameswf::RefCounted::Self **a4)
{
  int i;
  gameswf::RefCounted::Self *v5;
  int v6;
  gameswf::RefCounted::Self **v7;
  int v8;
  int v9;
  gameswf::RefCounted::Self *v10;
  int v11;
  int v12;
  gameswf::RefCounted::Self *result;
  int v14;
  gameswf::RefCounted::Self **v15;
  gameswf::RefCounted::Self *v16;
  int v17;
  int v18;
  gameswf::RefCounted::Self **v19;
  gameswf::RefCounted::Self *v21;

  for ( i = a2; i < (a3 - 1) / 2; i = v18 )
  {
    v5 = *(gameswf::RefCounted::Self **)(a1 + 4 * (2 * i + 2));
    v6 = 2 * i + 1;
    if ( *(float *)(*((uint32_t *)v5 + 19) + 128) <= *(float *)(*(uint32_t *)(*(uint32_t *)(a1 + 4 * v6) + 76) + 128) )
      v6 = 2 * i + 2;
    else
      v5 = *(gameswf::RefCounted::Self **)(a1 + 4 * v6);
    v18 = v6;
    v7 = (gameswf::RefCounted::Self **)(a1 + 4 * i);
    if ( *v7 != v5 )
    {
      if ( *v7 != nullptr )
        gameswf::RefCounted::dropRef(*v7);
      *v7 = v5;
      if ( v5 != nullptr )
        gameswf::RefCounted::addRef(v5);
    }
  }
  v8 = i;
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == i )
  {
    v14 = 2 * i + 1;
    v15 = (gameswf::RefCounted::Self **)(a1 + 4 * i);
    v16 = *(gameswf::RefCounted::Self **)(a1 + 4 * v14);
    if ( v16 != *v15 )
    {
      if ( *v15 != nullptr )
        gameswf::RefCounted::dropRef(*v15);
      *v15 = v16;
      if ( v16 != nullptr )
        gameswf::RefCounted::addRef(v16);
    }
    v8 = v14;
  }
  v21 = *a4;
  if ( *a4 != nullptr )
  {
    v17 = v8;
    gameswf::RefCounted::addRef(*a4);
    v8 = v17;
  }
  if ( v8 <= a2
    || (v9 = (v8 - 1) / 2,
        *(float *)(*((uint32_t *)(v10 = *(gameswf::RefCounted::Self **)(a1 + 4 * v9)) + 19) + 128) <= *(float *)(*((uint32_t *)v21 + 19) + 128)) )
  {
    v19 = (gameswf::RefCounted::Self **)(a1 + 4 * v8);
    result = *v19;
LABEL_30:
    if ( v21 == result )
    {
LABEL_27:
      result = v21;
      if ( v21 == nullptr )
        return result;
      return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v21);
    }
  }
  else
  {
    v11 = a1;
    v12 = v8;
    result = *(gameswf::RefCounted::Self **)(a1 + 4 * v8);
    while ( 1 )
    {
      v19 = (gameswf::RefCounted::Self **)(v11 + 4 * v9);
      if ( v10 != result )
      {
        if ( result != nullptr )
          gameswf::RefCounted::dropRef(result);
        *(uint32_t *)(a1 + 4 * v12) = (uint32_t)(uintptr_t)(v10);
        gameswf::RefCounted::addRef(v10);
        result = *v19;
      }
      if ( v9 <= a2 )
        break;
      v10 = *(gameswf::RefCounted::Self **)(a1 + 4 * ((v9 - 1) / 2));
      if ( *(float *)(*((uint32_t *)v10 + 19) + 128) <= *(float *)(*((uint32_t *)v21 + 19) + 128) )
        goto LABEL_30;
      v12 = v9;
      v9 = (v9 - 1) / 2;
      v11 = a1;
    }
    if ( v21 == result )
      goto LABEL_27;
  }
  if ( result != nullptr )
    result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(result);
  *v19 = v21;
  if ( v21 != nullptr )
  {
    gameswf::RefCounted::addRef(v21);
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v21);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1151870  (binary VA: 0x1151870)
// Original: sub_1151870
// ----------------------------------------------------------------------------
int sub_1151870(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *Model3DEvent;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint8_t v8[48];

  sub_776320((gameswf::String::Self *)v8, (gameswf::Self *)"timeline_end");
  v2 = *(uint32_t *)(a2 + 16);
  if ( v2 != 0 && *(uint8_t *)(*(uint32_t *)(a2 + 12) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)(a2 + 12), nullptr);
    *(uint32_t *)(a2 + 16) = 0;
    v2 = 0;
  }
  Model3DEvent = (uint32_t *)gameswf::AS3Engine::getModel3DEvent(
                             (gameswf::AS3Engine::Self *)(*(uint32_t *)(v2 + 16) + 236),
                             (const gameswf::String::Self *)v8);
  sub_59CE50((int)(uintptr_t)(v8));
  if ( a1 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 4), 1u);
  v4 = (uint32_t *)Model3DEvent[21];
  Model3DEvent[21] = (uint32_t)(uintptr_t)(a1);
  if ( v4 != nullptr )
    sub_5459C0((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 12)));
  Model3DEvent[22] = *(uint32_t *)(a2 + 20);
  v5 = (uint32_t *)(*(int (**)(uint32_t))(**(uint32_t **)(a2 + 24) + 68))(*(uint32_t *)(a2 + 24));
  Model3DEvent[23] = glitch::collada::CSceneNodeAnimatorSet::getCurrentAnimation(*(glitch::collada::CSceneNodeAnimatorSet::Self **)(a2 + 4 * ((a1 != (uint32_t *)*v5) + 4) + 8));
  v6 = *(uint32_t *)(a2 + 16);
  if ( v6 != 0 && *(uint8_t *)(*(uint32_t *)(a2 + 12) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)(a2 + 12), nullptr);
    *(uint32_t *)(a2 + 16) = 0;
    v6 = 0;
  }
  return G4_VCALL<int>(v6, 104, Model3DEvent);
}

// ----------------------------------------------------------------------------
// Function: sub_115EA20  (binary VA: 0x115ea20)
// Original: sub_115EA20
// ----------------------------------------------------------------------------
int sub_115EA20(int a1)
{
  gameswf::Root::Self *Root;
  int v3;
  gameswf::Root::Self *v4;
  int MovieWidth;
  float v6;
  int v7;
  int v8;
  int v9;
  int v10;
  float v11; // xmm0_4
  gameswf::Root::Self *v12;
  int v13;
  gameswf::Root::Self *v14;
  int MovieHeight;
  float v16; // xmm1_4
  int v17;
  int *v18;
  int v19;
  typedef float _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t _g4_t_v23[16];
  typedef uint32_t _g4_t_v24[16];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef float _g4_t_v41[16];
  typedef float _g4_t_v42[16];
  typedef float _g4_t_v43[23];
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v22)) > _g4_s1 ? (60u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v23)) > _g4_s2 ? (64u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (128u + sizeof(_g4_t_v24)) > _g4_s3 ? (128u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (192u + sizeof(_g4_t_v25)) > _g4_s4 ? (192u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (196u + sizeof(_g4_t_v26)) > _g4_s5 ? (196u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (200u + sizeof(_g4_t_v27)) > _g4_s6 ? (200u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (204u + sizeof(_g4_t_v28)) > _g4_s7 ? (204u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (208u + sizeof(_g4_t_v29)) > _g4_s8 ? (208u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (212u + sizeof(_g4_t_v30)) > _g4_s9 ? (212u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (216u + sizeof(_g4_t_v31)) > _g4_s10 ? (216u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (220u + sizeof(_g4_t_v32)) > _g4_s11 ? (220u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (224u + sizeof(_g4_t_v33)) > _g4_s12 ? (224u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (228u + sizeof(_g4_t_v34)) > _g4_s13 ? (228u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (232u + sizeof(_g4_t_v35)) > _g4_s14 ? (232u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (236u + sizeof(_g4_t_v36)) > _g4_s15 ? (236u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (240u + sizeof(_g4_t_v37)) > _g4_s16 ? (240u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (244u + sizeof(_g4_t_v38)) > _g4_s17 ? (244u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (248u + sizeof(_g4_t_v39)) > _g4_s18 ? (248u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (252u + sizeof(_g4_t_v40)) > _g4_s19 ? (252u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (256u + sizeof(_g4_t_v41)) > _g4_s20 ? (256u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (320u + sizeof(_g4_t_v42)) > _g4_s21 ? (320u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (384u + sizeof(_g4_t_v43)) > _g4_s22 ? (384u + sizeof(_g4_t_v43)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 128u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 192u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 196u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 200u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 204u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 208u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 212u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 216u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 220u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 224u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 228u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 232u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 236u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 240u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 244u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 248u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 252u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 256u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 320u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 384u);

  (*(void (**)(uint32_t *))(*gameswf::s_render_handler + 164))((uint32_t *)(gameswf::s_render_handler));
  memset(v23, 0, sizeof(v23));
  memset(v24, 0, sizeof(v24));
  v23[15] = 1065353216;
  v23[10] = 1065353216;
  v23[5] = 1065353216;
  v23[0] = 1065353216;
  v24[15] = 1065353216;
  v24[10] = 1065353216;
  v24[5] = 1065353216;
  v24[0] = 1065353216;
  gameswf::ASDisplayObjectContainer::getWorldTransform(
    (gameswf::ASDisplayObjectContainer::Self *)a1,
    (gameswf::Transform::Self *)v24);
  Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)a1);
  v3 = -gameswf::Root::getMovieHeight(Root);
  v4 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)a1);
  MovieWidth = gameswf::Root::getMovieWidth(v4);
  gameswf::Transform::postTranslate((gameswf::Transform::Self *)v23, (float)-MovieWidth * 0.5, (float)v3 * 0.5, 0.0);
  gameswf::Transform::postMultiply((gameswf::Transform::Self *)v23, (const gameswf::Transform::Self *)v24);
  v26 = v23[1];
  v27 = v23[2];
  v28 = v23[3];
  v25 = v23[0];
  v30 = v23[5];
  v35 = v23[10];
  v39 = v23[14];
  v40 = v23[15];
  v29 = v23[1];
  v34 = v23[6];
  v31 = v23[9];
  v33 = v23[2];
  v36 = v23[14];
  v37 = v23[3];
  v38 = v23[7];
  v32 = v23[13];
  memset(v41, 0, sizeof(v41));
  v6 = *(float *)(a1 + 276);
  v41[15] = 1.0;
  v26 = v23[4];
  v41[0] = v6;
  v41[5] = v6;
  v41[10] = v6;
  v27 = v23[8];
  v28 = v23[12];
  v39 = v23[11];
  v43[0] = *(float *)v23;
  v43[1] = *(float *)&v23[4];
  v43[2] = *(float *)&v23[8];
  v43[3] = *(float *)&v23[12];
  v43[4] = *(float *)&v23[1];
  v43[5] = *(float *)&v23[5];
  v43[6] = *(float *)&v23[9];
  v43[7] = *(float *)&v23[13];
  v43[8] = *(float *)&v23[2];
  v43[9] = *(float *)&v23[6];
  v43[10] = *(float *)&v23[10];
  v43[11] = *(float *)&v23[14];
  v43[12] = *(float *)&v23[3];
  v43[13] = *(float *)&v23[7];
  v43[14] = *(float *)&v23[11];
  v43[15] = *(float *)&v23[15];
  sub_819AF0((float *)&v25, v43, v41);
  glitch::scene::ISceneNode::setRelativeTransformation(
    *(glitch::scene::ISceneNode::Self **)(a1 + 280),
    (const glitch::core::CMatrix4<float> *)&v25);
  v7 = *(uint32_t *)(a1 + 264);
  if ( v7 > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = *(uint32_t *)(a1 + 260) + 8 * v8;
      if ( *(uint32_t *)(v9 + 4) == 0 )
        goto LABEL_4;
      if ( *(uint8_t *)(*(uint32_t *)v9 + 2) != 0 )
      {
        gameswf::ASModel3D::updateChildTransformation(*(const gameswf::Matrix::Self ***)(v9 + 4));
        v7 = *(uint32_t *)(a1 + 264);
LABEL_4:
        if ( ++v8 >= v7 )
          break;
      }
      else
      {
        ++v8;
        sub_7E5ED0((gameswf::Self **)v9, nullptr);
        *(uint32_t *)(v9 + 4) = 0;
        v7 = *(uint32_t *)(a1 + 264);
        if ( v8 >= v7 )
          break;
      }
    }
  }
  glitch::scene::ISceneNode::updateAbsolutePosition(*(glitch::scene::ISceneNode::Self **)(*(uint32_t *)(a1 + 308) + 4), true);
  v10 = gameswf::ASObject::getRoot((gameswf::Player::Self **)a1);
  v11 = cos(*(float *)(v10 + 56) * 0.008726646259971648);
  v21 = 0.5 / (float)(*(float *)(gameswf::ASObject::getRoot((gameswf::Player::Self **)a1) + 60) / v11);
  v12 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)a1);
  v13 = gameswf::Root::getMovieWidth(v12);
  v14 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)a1);
  MovieHeight = gameswf::Root::getMovieHeight(v14);
  memset(&v42[1], 0, 16);
  memset(&v42[6], 0, 16);
  v42[11] = -1.0;
  v42[12] = 0.0;
  v42[13] = 0.0;
  v42[15] = 0.0;
  v16 = (float)MovieHeight * -2.0;
  v17 = *(uint32_t *)(a1 + 312);
  v42[10] = (float)(v11 + 200000.0) / (float)(v11 - 200000.0);
  v42[0] = (float)(v11 + v11) / (float)((float)((float)v13 * -2.0) * v21);
  v42[5] = (float)(v11 + v11) / (float)(v16 * v21);
  v42[14] = (float)((float)(v11 + v11) * 200000.0) / (float)(v11 - 200000.0);
  G4_VCALL<void>(v17, 284, v42, 0);
  v18 = *(int **)(a1 + 308);
  v19 = *v18;
  v22 = nullptr;
  (*(void (**)(int *, uint32_t **, uint32_t, int))(v19 + 64))(v18, &v22, 0, 1);
  if ( v22 != nullptr )
    sub_5459C0((uint32_t *)((char *)v22 + *(uint32_t *)(*v22 - 16)));
  return (*(int (**)(uint32_t *))(*gameswf::s_render_handler + 168))((uint32_t *)(gameswf::s_render_handler));
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gameswf_DisplayObjectInf_49f297  (binary VA: 0x1163520)
// Original: std::__introsort_loop<gameswf::DisplayObjectInfo *,int,gameswf::DistanceSorter>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gameswf_DisplayObjectInf_49f297(gameswf::RefCounted::Self **a1, gameswf::RefCounted::Self **a2, int a3)
{
  int result;
  gameswf::RefCounted::Self *v4;
  gameswf::RefCounted::Self **v5;
  float v6; // xmm0_4
  float v7; // xmm2_4
  int v8;
  float v9; // xmm1_4
  gameswf::RefCounted::Self **v10;
  gameswf::RefCounted::Self *v11;
  gameswf::RefCounted::Self **i;
  gameswf::RefCounted::Self **v13;
  gameswf::RefCounted::Self *v14;
  gameswf::RefCounted::Self *v15;
  gameswf::RefCounted::Self *v16;
  int v17;
  gameswf::RefCounted::Self *v18;
  float v19; // xmm3_4
  gameswf::RefCounted::Self *v20;
  gameswf::RefCounted::Self *v21;
  gameswf::RefCounted::Self *v22;
  gameswf::RefCounted::Self *v23;
  gameswf::RefCounted::Self **v24;
  gameswf::RefCounted::Self *v25;
  gameswf::RefCounted::Self *v26;
  typedef gameswf::RefCounted::Self *_g4_t_v27;
  typedef gameswf::RefCounted::Self *_g4_t_v28;
  typedef gameswf::RefCounted::Self *_g4_t_v29;
  typedef gameswf::RefCounted::Self *_g4_t_v30;
  typedef gameswf::RefCounted::Self *_g4_t_v31;
  typedef gameswf::RefCounted::Self *_g4_t_v32;
  typedef gameswf::RefCounted::Self *_g4_t_v33;
  typedef gameswf::RefCounted::Self **_g4_t_v34;
  typedef gameswf::RefCounted::Self **_g4_t_v35;
  typedef int _g4_t_v36;
  typedef gameswf::RefCounted::Self **_g4_t_v37;
  typedef gameswf::RefCounted::Self *_g4_t_v38;
  typedef gameswf::RefCounted::Self *_g4_t_v39;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v28)) > _g4_s1 ? (28u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v29)) > _g4_s2 ? (28u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v30)) > _g4_s3 ? (28u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v31)) > _g4_s4 ? (28u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v32)) > _g4_s5 ? (28u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v33)) > _g4_s6 ? (32u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v34)) > _g4_s7 ? (32u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v35)) > _g4_s8 ? (44u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v36)) > _g4_s9 ? (44u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v37)) > _g4_s10 ? (44u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v38)) > _g4_s11 ? (48u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v39)) > _g4_s12 ? (64u + sizeof(_g4_t_v39)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 67 )
  {
    for ( ; a3 != 0; a2 = i )
    {
      --a3;
      v4 = *a1;
      v5 = &a1[result >> 3];
      v6 = *(float *)(*((uint32_t *)*a1 + 19) + 128);
      v7 = *(float *)(*((uint32_t *)*v5 + 19) + 128);
      v8 = *((uint32_t *)*(a2 - 1) + 19);
      if ( v6 <= v7 )
      {
        v19 = *(float *)(v8 + 128);
        v9 = v19;
        if ( v6 <= v19 )
        {
          v27 = *a1;
          if ( v7 > v19 )
          {
            gameswf::RefCounted::addRef(v27);
            goto LABEL_37;
          }
LABEL_49:
          gameswf::RefCounted::addRef(v27);
          v21 = *v5;
          v22 = *a1;
          if ( *v5 != *a1 )
          {
            if ( v22 != nullptr )
            {
              v32 = *v5;
              gameswf::RefCounted::dropRef(v22);
              v21 = v32;
            }
            *a1 = v21;
            if ( v21 != nullptr )
              gameswf::RefCounted::addRef(v21);
            v21 = *v5;
          }
          if ( v4 != v21 )
          {
            if ( v21 != nullptr )
              gameswf::RefCounted::dropRef(v21);
            *v5 = v4;
            gameswf::RefCounted::addRef(v4);
          }
LABEL_47:
          gameswf::RefCounted::dropRef(v4);
          v9 = *(float *)(*((uint32_t *)*(a2 - 1) + 19) + 128);
          v6 = *(float *)(*((uint32_t *)*a1 + 19) + 128);
        }
      }
      else
      {
        v9 = *(float *)(v8 + 128);
        if ( v7 > v9 )
        {
          v27 = *a1;
          goto LABEL_49;
        }
        if ( v6 > v9 )
        {
          gameswf::RefCounted::addRef(*a1);
LABEL_37:
          v20 = *(a2 - 1);
          if ( v20 != *a1 )
          {
            if ( *a1 != nullptr )
              gameswf::RefCounted::dropRef(*a1);
            *a1 = v20;
            if ( v20 != nullptr )
              gameswf::RefCounted::addRef(v20);
            v20 = *(a2 - 1);
          }
          if ( v4 != v20 )
          {
            if ( v20 != nullptr )
              gameswf::RefCounted::dropRef(v20);
            *(a2 - 1) = v4;
            gameswf::RefCounted::addRef(v4);
          }
          goto LABEL_47;
        }
      }
      v35 = a2;
      v10 = a1 + 1;
      while ( 1 )
      {
        v11 = *v10;
        for ( i = v10; v6 < *(float *)(*((uint32_t *)*i + 19) + 128); v11 = *i )
          ++i;
        v13 = v35 - 1;
        if ( v6 > v9 )
        {
          do
            --v13;
          while ( v6 > *(float *)(*((uint32_t *)*v13 + 19) + 128) );
        }
        if ( v13 <= i )
          break;
        v28 = v11;
        gameswf::RefCounted::addRef(v11);
        v14 = *v13;
        v15 = *i;
        v16 = v28;
        if ( *v13 != *i )
        {
          if ( v15 != nullptr )
          {
            v33 = *v13;
            gameswf::RefCounted::dropRef(v15);
            v14 = v33;
            v16 = v28;
          }
          *i = v14;
          if ( v14 != nullptr )
          {
            v29 = v16;
            gameswf::RefCounted::addRef(v14);
            v14 = *v13;
            v16 = v29;
          }
          else
          {
            v14 = *v13;
          }
        }
        if ( v14 != v16 )
        {
          if ( v14 != nullptr )
          {
            v30 = v16;
            gameswf::RefCounted::dropRef(v14);
            v16 = v30;
          }
          *v13 = v16;
          v31 = v16;
          gameswf::RefCounted::addRef(v16);
          v16 = v31;
        }
        gameswf::RefCounted::dropRef(v16);
        v10 = i + 1;
        v35 = v13;
        v9 = *(float *)(*((uint32_t *)*(v13 - 1) + 19) + 128);
        v6 = *(float *)(*((uint32_t *)*a1 + 19) + 128);
      }
      g4_std::introsort_loop_gameswf_DisplayObjectInf_49f297(i, a2, a3);
      result = (char *)i - (char *)a1;
      if ( (char *)i - (char *)a1 <= 67 )
        return result;
    }
    v36 = result >> 2;
    v17 = ((result >> 2) - 2) >> 1;
LABEL_26:
    v18 = a1[v17];
    if ( v18 != nullptr )
    {
LABEL_27:
      gameswf::RefCounted::addRef(v18);
      v38 = v18;
      gameswf::RefCounted::addRef(v18);
      goto LABEL_28;
    }
    while ( 1 )
    {
      v38 = nullptr;
LABEL_28:
      sub_1150560((int)(uintptr_t)(a1), v17, v36, &v38);
      if ( v38 != nullptr )
        gameswf::RefCounted::dropRef(v38);
      if ( v17 == 0 )
        break;
      --v17;
      if ( v18 == nullptr )
        goto LABEL_26;
      gameswf::RefCounted::dropRef(v18);
      v18 = a1[v17];
      if ( v18 != nullptr )
        goto LABEL_27;
    }
    if ( v18 != nullptr )
      gameswf::RefCounted::dropRef(v18);
    v37 = a2;
    while ( 1 )
    {
      result = (char *)v37 - (char *)a1;
      if ( (char *)v37 - (char *)a1 <= 7 )
        break;
      while ( 1 )
      {
        --v37;
        v23 = nullptr;
        v24 = a2 - 1;
        v25 = *v37;
        if ( *v37 != nullptr )
        {
          gameswf::RefCounted::addRef(v25);
          v24 = a2 - 1;
          v23 = *v37;
        }
        v26 = *a1;
        if ( *a1 != v23 )
        {
          if ( v23 != nullptr )
          {
            v34 = v24;
            gameswf::RefCounted::dropRef(v23);
            v24 = v34;
          }
          *(gameswf::RefCounted::Self **)((char *)v24  + ((uintptr_t)((char *)v37) - (uintptr_t)(char *)(a2)) + 4) = v26;
          if ( v26 != nullptr )
            gameswf::RefCounted::addRef(v26);
        }
        v39 = nullptr;
        if ( v25 != nullptr )
        {
          v39 = v25;
          gameswf::RefCounted::addRef(v25);
        }
        sub_1150560((int)(uintptr_t)(a1), 0, v37 - a1, &v39);
        if ( v39 != nullptr )
          gameswf::RefCounted::dropRef(v39);
        if ( v25 == nullptr )
          break;
        gameswf::RefCounted::dropRef(v25);
        result = (char *)v37 - (char *)a1;
        if ( (char *)v37 - (char *)a1 <= 7 )
          return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gameswf_DisplayObjectInf_411256  (binary VA: 0x1163b60)
// Original: std::__insertion_sort<gameswf::DisplayObjectInfo *,gameswf::DistanceSorter>
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self ** g4_std::insertion_sort_gameswf_DisplayObjectInf_411256(gameswf::RefCounted::Self **a1, gameswf::RefCounted::Self **a2)
{
  gameswf::RefCounted::Self **result;
  gameswf::RefCounted::Self **v3;
  int v4;
  gameswf::RefCounted::Self *v5;
  gameswf::RefCounted::Self *v6;
  gameswf::RefCounted::Self **i;
  float v8; // xmm0_4
  gameswf::RefCounted::Self *v9;
  int v10;
  gameswf::RefCounted::Self *v11;
  gameswf::RefCounted::Self **v12;
  int v13;
  gameswf::RefCounted::Self **v14;

  result = a2;
  if ( a1 != a2 && a2 != a1 + 1 )
  {
    v14 = a1 + 2;
    v12 = a1 + 1;
    v13 = -(int)(uintptr_t)(a1 + 1);
    do
    {
      v3 = v12;
      v11 = *v12;
      if ( *(float *)(*((uint32_t *)*v12 + 19) + 128) <= *(float *)(*((uint32_t *)*a1 + 19) + 128) )
      {
        gameswf::RefCounted::addRef(v11);
        i = v12;
        v8 = *(float *)(*((uint32_t *)v11 + 19) + 128);
        v9 = *(v12 - 1);
        if ( v8 > *(float *)(*((uint32_t *)v9 + 19) + 128) )
        {
          for ( i = v12 - 1; ; --i )
          {
            if ( v9 != *v3 )
            {
              if ( *v3 != nullptr )
                gameswf::RefCounted::dropRef(*v3);
              *v3 = v9;
              gameswf::RefCounted::addRef(v9);
              v8 = *(float *)(*((uint32_t *)v11 + 19) + 128);
            }
            v9 = *(gameswf::RefCounted::Self **)((char *)v12 + (uint32_t)(uintptr_t)(i) + v13 - 4);
            if ( v8 <= *(float *)(*((uint32_t *)v9 + 19) + 128) )
              break;
            v3 = i;
          }
        }
        if ( v11 != *i )
        {
          if ( *i != nullptr )
            gameswf::RefCounted::dropRef(*i);
          *i = v11;
          gameswf::RefCounted::addRef(v11);
        }
      }
      else
      {
        gameswf::RefCounted::addRef(v11);
        v4 = v12 - a1;
        if ( v4 > 0 )
        {
          v10 = -1 * v4;
          do
          {
            v5 = *(&v12[v10 - 1] + v4);
            v6 = *(&v12[v10] + v4);
            if ( v5 != v6 )
            {
              if ( v6 != nullptr )
                gameswf::RefCounted::dropRef(*(&v12[v10] + v4));
              *(&v12[v10] + v4) = v5;
              if ( v5 != nullptr )
                gameswf::RefCounted::addRef(v5);
            }
            --v4;
          }
          while ( v4 != 0 );
        }
        if ( v11 != *a1 )
        {
          if ( *a1 != nullptr )
            gameswf::RefCounted::dropRef(*a1);
          *a1 = v11;
          gameswf::RefCounted::addRef(v11);
        }
      }
      gameswf::RefCounted::dropRef(v11);
      result = v14++;
      ++v12;
      v13 -= 4;
    }
    while ( a2 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::unguarded_linear_insert_gameswf_DisplayObjectInf_ac468b  (binary VA: 0x1163d90)
// Original: std::__unguarded_linear_insert<gameswf::DisplayObjectInfo *,gameswf::DistanceSorter>
// ----------------------------------------------------------------------------
int g4_std::unguarded_linear_insert_gameswf_DisplayObjectInf_ac468b(gameswf::RefCounted::Self **a1)
{
  gameswf::RefCounted::Self *v1;
  float v2; // xmm0_4
  gameswf::RefCounted::Self *v3;
  gameswf::RefCounted::Self **v4;
  gameswf::RefCounted::Self **i;
  gameswf::RefCounted::Self *v7;

  v7 = *a1;
  v1 = nullptr;
  if ( *a1 != nullptr )
  {
    gameswf::RefCounted::addRef(v7);
    v1 = *a1;
  }
  v2 = *(float *)(*((uint32_t *)v7 + 19) + 128);
  v3 = *(a1 - 1);
  if ( v2 > *(float *)(*((uint32_t *)v3 + 19) + 128) )
  {
    v4 = a1;
    for ( i = a1 - 1; ; --i )
    {
      if ( v1 != v3 )
      {
        if ( v1 != nullptr )
          gameswf::RefCounted::dropRef(v1);
        *v4 = v3;
        gameswf::RefCounted::addRef(v3);
        v2 = *(float *)(*((uint32_t *)v7 + 19) + 128);
      }
      v3 = *(i - 1);
      if ( v2 <= *(float *)(*((uint32_t *)v3 + 19) + 128) )
        break;
      v1 = *i;
      v4 = i;
    }
    v1 = *i;
    a1 = i;
  }
  if ( v7 != v1 )
  {
    if ( v1 != nullptr )
      gameswf::RefCounted::dropRef(v1);
    *a1 = v7;
    gameswf::RefCounted::addRef(v7);
  }
  return gameswf::RefCounted::dropRef(v7);
}

// ----------------------------------------------------------------------------
// Function: sub_11642B0  (binary VA: 0x11642b0)
// Original: sub_11642B0
// ----------------------------------------------------------------------------
int sub_11642B0()
{
  sub_1900D70(&unk_2115874);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2115874, &unk_20D1280);
  dword_2115878 = 1056964608;
  dword_211587C = 1056964608;
  dword_2115880 = 1056964608;
  sub_776320((gameswf::String::Self *)&byte_2115860, (gameswf::Self *)"root1");
  byte_2115872 |= 0x80u;
  __cxa_atexit((void (*)(void *))gameswf::PermanentString::Destroy, &byte_2115860, &unk_20D1280);
  sub_776320((gameswf::String::Self *)&byte_2115840, (gameswf::Self *)"stage");
  byte_2115852 |= 0x80u;
  return __cxa_atexit((void (*)(void *))gameswf::PermanentString::Destroy, &byte_2115840, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1164450  (binary VA: 0x1164450)
// Original: sub_1164450
// ----------------------------------------------------------------------------
char * sub_1164450()
{
  dword_20D6388 |= 0x7FFFFFu;
  byte_20D6378 = 1;
  byte_20D6379 = 0;
  BYTE2(dword_20D6388) &= ~0x80u;
  HIBYTE(dword_20D6388) |= 1u;
  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
  __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
  return (char *)(&byte_20D6378);
}

// ----------------------------------------------------------------------------
// Function: sub_1166B80  (binary VA: 0x1166b80)
// Original: sub_1166B80
// ----------------------------------------------------------------------------
gameswf::String::Self * sub_1166B80(int *a1, char *a2)
{
  int index;
  gameswf::String::Self *v5;
  char v7;
  int v8;
  int v9;
  int v10;
  const char *src;
  int v12;
  int v13;
  int v14;
  gameswf::String::Self *v15;
  gameswf::Self *v16;
  typedef char *_g4_t_v17;
  typedef gameswf::String::Self *_g4_t_v18;
  typedef int _g4_t_v19[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);

  v17 = a2;
  index = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
            a1,
            &v17);
  if ( index >= 0 )
    return *(gameswf::String::Self **)(*a1 + 16 * index + 20);
  v7 = *a2;
  if ( *a2 == -1 )
  {
    if ( *((uint32_t *)a2 + 1) - 1 > 13 )
      goto LABEL_6;
LABEL_19:
    v15 = (gameswf::String::Self *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(a1 + 1), 20);
    v5 = v15;
    if ( *a2 == -1 )
      v16 = *((gameswf::Self **)a2 + 3);
    else
      v16 = (gameswf::Self *)(a2 + 1);
    if ( v15 != nullptr )
    {
      sub_776320(v15, v16);
      *((uint8_t *)v5 + 18) |= 0x80u;
    }
    goto LABEL_15;
  }
  if ( *a2 - 1 <= 13 )
    goto LABEL_19;
LABEL_6:
  if ( v7 == -1 )
    v8 = *((uint32_t *)a2 + 1) - 1;
  else
    v8 = v7 - 1;
  v9 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(a1 + 1), v8 + 21);
  v5 = (gameswf::String::Self *)v9;
  if ( v9 != 0 )
  {
    *(uint8_t *)v9 = 1;
    *(uint8_t *)(v9 + 1) = 0;
    v10 = *(uint32_t *)(v9 + 16) | 0x7FFFFF;
    *((uint32_t *)v5 + 4) = v10;
    *((uint8_t *)v5 + 19) = HIBYTE(v10) | 1;
    *((uint8_t *)v5 + 18) = BYTE2(v10) | 0x80;
  }
  src = a2 + 1;
  if ( *a2 == -1 )
    src = *((const char **)a2 + 3);
  strcpy((char *)v5 + 20, src);
  if ( *a2 == -1 )
    v12 = *((uint32_t *)a2 + 1) - 1;
  else
    v12 = *a2 - 1;
  v13 = v12 + 1;
  gameswf::String::resize(v5, 0);
  *(uint8_t *)v5 = -1;
  *((uint32_t *)v5 + 3) = (uint32_t)(uintptr_t)((char *)v5 + 20);
  *((uint32_t *)v5 + 1) = v13;
  *((uint32_t *)v5 + 2) = v13;
  *((uint8_t *)v5 + 19) &= ~1u;
LABEL_15:
  v18 = v5;
  v14 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
          a1,
          (char **)&v18);
  if ( v14 < 0 )
  {
    v19[0] = 0;
    gameswf::hash_gameswf_StringPointer_ga_128477::add(
      (int **)a1,
      (char **)&v18,
      v19);
    v14 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
            a1,
            (char **)&v18);
  }
  *(uint32_t *)(*a1 + 16 * v14 + 20) = (uint32_t)(uintptr_t)(v5);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1168270  (binary VA: 0x1168270)
// Original: sub_1168270
// ----------------------------------------------------------------------------
int sub_1168270(gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> *a1, const gameswf::String::Self *a2)
{
  typedef unsigned int _g4_t_v5[2];
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v5[0] = 0;
  v5[1] = 0;
  v6 = 0;
  v7 = 0;
  gameswf::array_gameswf_ASEventDispatche_897fc7::resize((gameswf::array<gameswf::ASEventDispatcher::Entry> *)v5, 0);
  gameswf::hash_gameswf_String_gameswf_a_5510e3::add(
    a1,
    a2,
    (const gameswf::array<gameswf::ASEventDispatcher::Entry> *)v5);
  gameswf::array_gameswf_ASEventDispatche_897fc7::resize((gameswf::array<gameswf::ASEventDispatcher::Entry> *)v5, 0);
  if ( v7 == 0 )
  {
    v6 = 0;
    if ( v5[0] != 0 )
      gameswf::free_internal((gameswf::Self *)v5[0]);
    v5[0] = 0;
  }
  return *(uint32_t *)a1
       + 44
       * gameswf::hash_gameswf_String_gameswf_a_5510e3::find_index(
           a1,
           a2)
       + 36;
}

// ----------------------------------------------------------------------------
// Function: sub_1168930  (binary VA: 0x1168930)
// Original: sub_1168930
// ----------------------------------------------------------------------------
int sub_1168930(int a1, int a2)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;

  v4 = a2 - a1;
  if ( v4 > 359 )
  {
    v5 = a1 + 24 * ((-1431655765 * (v4 >> 3)) >> 1);
    v6 = 24 * ((-1431655765 * (v4 >> 3)) >> 1);
    if ( v6 <= 359 )
    {
      v41 = v6;
      g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(a1, v5);
      v65 = -1431655765 * (v41 >> 3);
      v20 = a2 - v5;
      if ( a2 - v5 <= 359 )
        goto LABEL_15;
      goto LABEL_18;
    }
    v65 = -1431655765 * (v6 >> 3);
    v47 = a1 + 24 * (v65 >> 1);
    v7 = 24 * (v65 >> 1);
    if ( v7 <= 359 )
    {
      g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(a1, v47);
      v49 = -1431655765 * ((24 * (v65 >> 1)) >> 3);
      v13 = v5 - v47;
      if ( v5 - v47 > 359 )
      {
LABEL_9:
        v53 = -1431655765 * (v13 >> 3);
        v14 = 24 * (v53 >> 1);
        if ( v14 <= 359 )
        {
          g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(
            v47,
            v47 + 24 * (v53 >> 1));
          v15 = v47 + 24 * (v53 >> 1);
          v60 = -1431655765 * ((24 * (v53 >> 1)) >> 3);
        }
        else
        {
          v60 = -1431655765 * (v14 >> 3);
          sub_1168930(v47 + 24 * (v53 >> 1), v47 + 24 * (v60 >> 1));
          sub_1168930(v47 + 24 * (v53 >> 1), v47 + 24 * (v53 >> 1));
          g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
            v47,
            v47 + 24 * (v60 >> 1),
            v47 + 24 * (v53 >> 1),
            -1431655765 * ((24 * (v60 >> 1)) >> 3),
            -1431655765 * ((24 * (v53 >> 1) - 24 * (v60 >> 1)) >> 3));
          v15 = v47 + 24 * (v53 >> 1);
        }
        if ( v5 - v15 <= 359 )
        {
          v46 = v5 - v15;
          v39 = v15;
          g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(v15, v5);
          v17 = v39;
          v18 = -1431655765 * (v46 >> 3);
        }
        else
        {
          v34 = v15;
          v62 = -1431655765 * ((v5 - v15) >> 3);
          v56 = v15 + 24 * (v62 >> 1);
          sub_1168930(v15, v56);
          sub_1168930(v16, v5);
          g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
            v34,
            v56,
            v5,
            -1431655765 * ((v56 - v34) >> 3),
            -1431655765 * ((v5 - v56) >> 3));
          v17 = v34;
          v18 = v62;
        }
        g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
          v47,
          v17,
          v5,
          v60,
          v18);
        v19 = v53;
LABEL_14:
        g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
          a1,
          v47,
          v5,
          v49,
          v19);
        v20 = a2 - v5;
        if ( a2 - v5 <= 359 )
        {
LABEL_15:
          v40 = v20;
          g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(v5, a2);
          v21 = -1431655765 * (v40 >> 3);
          return (int)(uintptr_t)(g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
                   a1,
                   v5,
                   a2,
                   v65,
                   v21));
        }
LABEL_18:
        v54 = -1431655765 * (v20 >> 3);
        v48 = v5 + 24 * (v54 >> 1);
        v23 = 24 * (v54 >> 1);
        if ( v23 <= 359 )
        {
          g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(v5, v48);
          v61 = -1431655765 * ((24 * (v54 >> 1)) >> 3);
          v29 = a2 - v48;
          if ( a2 - v48 > 359 )
          {
LABEL_24:
            v58 = -1431655765 * (v29 >> 3);
            v51 = v48 + 24 * (v58 >> 1);
            if ( 24 * (v58 >> 1) <= 359 )
            {
              g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(
                v48,
                v51);
              v66 = -1431655765 * ((24 * (v58 >> 1)) >> 3);
            }
            else
            {
              v66 = -1431655765 * ((24 * (v58 >> 1)) >> 3);
              sub_1168930(v48 + 24 * (v66 >> 1), v48 + 24 * (v66 >> 1));
              sub_1168930(v48 + 24 * (v66 >> 1), v51);
              g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
                v48,
                v48 + 24 * (v66 >> 1),
                v48 + 24 * (v58 >> 1),
                -1431655765 * ((24 * (v66 >> 1)) >> 3),
                -1431655765 * ((24 * (v58 >> 1) - 24 * (v66 >> 1)) >> 3));
            }
            if ( a2 - v51 <= 359 )
            {
              g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(
                v51,
                a2);
              v31 = -1431655765 * ((a2 - v51) >> 3);
            }
            else
            {
              v64 = -1431655765 * ((a2 - v51) >> 3);
              v36 = v51 + 24 * (v64 >> 1);
              sub_1168930(v36, v36);
              if ( a2 - v36 <= 359 )
              {
                g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(
                  v36,
                  a2);
              }
              else
              {
                v67 = -1431655765 * ((a2 - v36) >> 3);
                sub_1168930(v36, v36 + 24 * (v67 >> 1));
                sub_1168930(v30, a2);
                g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
                  v36,
                  v36 + 24 * (v67 >> 1),
                  a2,
                  -1431655765 * ((24 * (v67 >> 1)) >> 3),
                  -1431655765 * ((a2 - (v36 + 24 * (v67 >> 1))) >> 3));
              }
              g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
                v51,
                v51 + 24 * (v64 >> 1),
                a2,
                -1431655765 * ((24 * (v64 >> 1)) >> 3),
                -1431655765 * ((a2 - v36) >> 3));
              v31 = -1431655765 * ((a2 - v51) >> 3);
            }
            g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
              v48,
              v51,
              a2,
              v66,
              v31);
            v32 = v58;
            goto LABEL_31;
          }
        }
        else
        {
          v61 = -1431655765 * (v23 >> 3);
          v24 = 24 * (v61 >> 1);
          if ( v24 <= 359 )
          {
            g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(
              v5,
              v5 + 24 * (v61 >> 1));
            v25 = v5 + 24 * (v61 >> 1);
            v63 = -1431655765 * ((24 * (v61 >> 1)) >> 3);
          }
          else
          {
            v63 = -1431655765 * (v24 >> 3);
            sub_1168930(v5 + 24 * (v61 >> 1), v5 + 24 * (v63 >> 1));
            sub_1168930(v5 + 24 * (v61 >> 1), v5 + 24 * (v61 >> 1));
            g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
              v5,
              v5 + 24 * (v63 >> 1),
              v5 + 24 * (v61 >> 1),
              -1431655765 * ((24 * (v63 >> 1)) >> 3),
              -1431655765 * ((24 * (v61 >> 1) - 24 * (v63 >> 1)) >> 3));
            v25 = v5 + 24 * (v61 >> 1);
          }
          if ( v48 - v25 <= 359 )
          {
            v44 = v48 - v25;
            v37 = v25;
            g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(
              v25,
              v48);
            v27 = v37;
            v28 = -1431655765 * (v44 >> 3);
          }
          else
          {
            v35 = v25;
            v57 = -1431655765 * ((v48 - v25) >> 3);
            v50 = v25 + 24 * (v57 >> 1);
            sub_1168930(v25, v50);
            sub_1168930(v26, v48);
            g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
              v35,
              v50,
              v48,
              -1431655765 * ((v50 - v35) >> 3),
              -1431655765 * ((v48 - v50) >> 3));
            v27 = v35;
            v28 = v57;
          }
          g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
            v5,
            v27,
            v48,
            v63,
            v28);
          v29 = a2 - v48;
          if ( a2 - v48 > 359 )
            goto LABEL_24;
        }
        v43 = v29;
        g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(v48, a2);
        v32 = -1431655765 * (v43 >> 3);
LABEL_31:
        g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
          v5,
          v48,
          a2,
          v61,
          v32);
        v21 = v54;
        return (int)(uintptr_t)(g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
                 a1,
                 v5,
                 a2,
                 v65,
                 v21));
      }
    }
    else
    {
      v49 = -1431655765 * (v7 >> 3);
      v8 = 24 * (v49 >> 1);
      if ( v8 <= 359 )
      {
        g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(
          a1,
          a1 + 24 * (v49 >> 1));
        v9 = a1 + 24 * (v49 >> 1);
        v55 = -1431655765 * ((24 * (v49 >> 1)) >> 3);
      }
      else
      {
        v55 = -1431655765 * (v8 >> 3);
        ((void (*)(void))sub_1168930)();
        sub_1168930(a1 + 24 * (v49 >> 1), a1 + 24 * (v49 >> 1));
        g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
          a1,
          a1 + 24 * (v55 >> 1),
          a1 + 24 * (v49 >> 1),
          -1431655765 * ((24 * (v55 >> 1)) >> 3),
          -1431655765 * ((24 * (v49 >> 1) - 24 * (v55 >> 1)) >> 3));
        v9 = a1 + 24 * (v49 >> 1);
      }
      if ( v47 - v9 <= 359 )
      {
        v45 = v47 - v9;
        v38 = v9;
        g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(v9, v47);
        v11 = v38;
        v12 = -1431655765 * (v45 >> 3);
      }
      else
      {
        v33 = v9;
        v59 = -1431655765 * ((v47 - v9) >> 3);
        v52 = v9 + 24 * (v59 >> 1);
        sub_1168930(v9, v52);
        sub_1168930(v10, v47);
        g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
          v33,
          v52,
          v47,
          -1431655765 * ((v52 - v33) >> 3),
          -1431655765 * ((v47 - v52) >> 3));
        v11 = v33;
        v12 = v59;
      }
      g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
        a1,
        v11,
        v47,
        v55,
        v12);
      v13 = v5 - v47;
      if ( v5 - v47 > 359 )
        goto LABEL_9;
    }
    v42 = v13;
    g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(v47, v5);
    v19 = -1431655765 * (v42 >> 3);
    goto LABEL_14;
  }
  return g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_11693B0  (binary VA: 0x11693b0)
// Original: sub_11693B0
// ----------------------------------------------------------------------------
int sub_11693B0(char *a1, int a2, int a3, int a4)
{
  char *v4;
  int v5;
  char *i;
  int v7;
  char *v8;
  char v9;
  char v10;
  char *v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  char v16;
  int v17;
  char *v18;
  int v19;
  char v20;
  uint32_t *v22;
  int v23;
  int v24;
  uint32_t *v25;
  char *v26;
  char *v27;
  char *v28;
  char *v29;
  int v30;
  int v31;
  int v32;
  char *v33;

  v4 = a1;
  v28 = a1;
  v5 = -1431655765 * ((a2 - (int)(uintptr_t)(a1)) >> 3);
  if ( 2 * a4 <= v5 )
  {
    v32 = 48 * a4;
    v29 = &v4[24 * a4];
    for ( i = v29; ; i = v29 )
    {
      v7 = a3;
      v28 = &v4[v32];
      if ( &v4[v32] != i && v4 != i )
      {
        v8 = i;
        while ( 1 )
        {
          if ( *((uint32_t *)v8 + 4) > *((uint32_t *)v4 + 4) )
          {
            gameswf::smart_ptr_proxy::set_ref(v7, *(uint32_t *)v8);
            *(uint32_t *)(v7 + 4) = *((uint32_t *)v8 + 1);
            gameswf::smart_ptr_proxy::set_ref(v7 + 8, *((uint32_t *)v8 + 2));
            *(uint32_t *)(v7 + 12) = *((uint32_t *)v8 + 3);
            *(uint32_t *)(v7 + 16) = *((uint32_t *)v8 + 4);
            v9 = v8[20];
            v8 += 24;
            *(uint8_t *)(v7 + 20) = v9;
            v7 += 24;
            if ( v28 == v8 )
              goto LABEL_10;
          }
          else
          {
            gameswf::smart_ptr_proxy::set_ref(v7, *(uint32_t *)v4);
            *(uint32_t *)(v7 + 4) = *((uint32_t *)v4 + 1);
            gameswf::smart_ptr_proxy::set_ref(v7 + 8, *((uint32_t *)v4 + 2));
            *(uint32_t *)(v7 + 12) = *((uint32_t *)v4 + 3);
            *(uint32_t *)(v7 + 16) = *((uint32_t *)v4 + 4);
            v10 = v4[20];
            v4 += 24;
            *(uint8_t *)(v7 + 20) = v10;
            v7 += 24;
            if ( v28 == v8 )
            {
LABEL_10:
              v11 = v8;
              v12 = v29;
              goto LABEL_11;
            }
          }
          if ( v4 == v29 )
            goto LABEL_10;
        }
      }
      v11 = v29;
      v12 = v29;
LABEL_11:
      a3 = v7;
      v13 = -1431655765 * ((v12 - v4) >> 3);
      v30 = v13;
      if ( v13 > 0 )
      {
        v14 = v7;
        v24 = v7 + 8;
        v23 = v7;
        v15 = v13;
        v22 = (uint32_t *)(v4 + 8);
        v33 = v11;
        v26 = v4;
        do
        {
          gameswf::smart_ptr_proxy::set_ref(v14, *(uint32_t *)v4);
          *(uint32_t *)(v14 + 4) = *((uint32_t *)v4 + 1);
          gameswf::smart_ptr_proxy::set_ref(v14 + 8, *(uint32_t *)((char *)v22  + ((uintptr_t)(v4) - (uintptr_t)(v26))));
          --v15;
          *(uint32_t *)(v24 + v14 - v23 + 4) = *(uint32_t *)((char *)v22  + ((uintptr_t)(v4) - (uintptr_t)(v26 ))+ 4);
          *(uint32_t *)(v14 + 16) = *((uint32_t *)v4 + 4);
          v16 = v4[20];
          v4 += 24;
          *(uint8_t *)(v14 + 20) = v16;
          v14 += 24;
        }
        while ( v15 != 0 );
        v11 = v33;
        a3 = v23 + 24 * v30;
      }
      v31 = -1431655765 * ((v28 - v11) >> 3);
      if ( v31 > 0 )
      {
        v17 = a3;
        v18 = v11;
        v27 = v11;
        v19 = -1431655765 * ((v28 - v11) >> 3);
        v25 = (uint32_t *)(v11 + 8);
        do
        {
          gameswf::smart_ptr_proxy::set_ref(v17, *(uint32_t *)v18);
          *(uint32_t *)(v17 + 4) = *((uint32_t *)v18 + 1);
          gameswf::smart_ptr_proxy::set_ref(v17 + 8, *(uint32_t *)((char *)v25  + ((uintptr_t)(v18) - (uintptr_t)(v27))));
          --v19;
          *(uint32_t *)(v17 + 12) = *(uint32_t *)((char *)v25  + ((uintptr_t)(v18) - (uintptr_t)(v27 ))+ 4);
          *(uint32_t *)(v17 + 16) = *((uint32_t *)v18 + 4);
          v20 = v18[20];
          v18 += 24;
          *(uint8_t *)(v17 + 20) = v20;
          v17 += 24;
        }
        while ( v19 != 0 );
        a3 += 24 * v31;
      }
      v5 = -1431655765 * ((a2 - (int)(uintptr_t)(v28)) >> 3);
      v29 += v32;
      if ( 2 * a4 > v5 )
        break;
      v4 = v28;
    }
  }
  if ( v5 > a4 )
    v5 = a4;
  return g4_std::move_merge_gameswf_ASEventDispatche_1a29eb(
           v28,
           &v28[24 * v5],
           &v28[24 * v5],
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: sub_11696F0  (binary VA: 0x11696f0)
// Original: sub_11696F0
// ----------------------------------------------------------------------------
int sub_11696F0(char *a1, int a2, char *a3)
{
  int v4;
  char *v6;
  char *i;
  int result;
  int j;
  int v10;
  int v11;
  int v12;

  v4 = a2 - (uint32_t)(uintptr_t)(a1);
  v6 = a1;
  v11 = -1431655765 * (v4 >> 3);
  v12 = (int)(uintptr_t)(&a3[8 * (v4 >> 3)]);
  if ( v4 > 167 )
  {
    for ( i = a1; ; i = v6 )
    {
      v6 = i + 168;
      g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(i, i + 168);
      if ( a2 - (int)(uintptr_t)(v6) <= 167 )
        break;
    }
  }
  result = g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(v6, a2);
  if ( v11 > 7 )
  {
    for ( j = 7; j < v11; j *= 4 )
    {
      sub_11693B0(a1, a2, (int)(uintptr_t)(a3), j);
      v10 = 2 * j;
      result = sub_11693B0(a3, v12, (int)(uintptr_t)(a1), v10);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_11697D0  (binary VA: 0x11697d0)
// Original: sub_11697D0
// ----------------------------------------------------------------------------
int sub_11697D0(char *a1, int a2, char *a3, int a4)
{
  int v5;
  char *v6;
  int v8;
  char *v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  char *v17;
  char *v18;
  int v19;
  int v20;
  char *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  char *v26;
  char *v27;
  char *v28;
  char *v29;
  char *v30;
  char *v31;
  char *v32;
  char *v34;
  char *v35;
  char *v36;
  int v37;
  int v38;
  int v39;
  char *v40;
  char *v41;
  char *v42;
  int v43;
  char *v44;

  v5 = (-1431655765 * ((a2 - (int)(uintptr_t)(a1)) >> 3) + 1) / 2;
  v6 = &a1[24 * v5];
  if ( v5 > a4 )
  {
    v39 = -1431655765 * ((24 * v5) >> 3);
    v8 = (v39 + 1) / 2;
    v9 = &a1[24 * v8];
    if ( a4 < v8 )
    {
      v38 = -1431655765 * ((24 * v8) >> 3);
      v13 = (v38 + 1) / 2;
      v35 = &a1[24 * v13];
      v27 = v9;
      if ( a4 < v13 )
      {
        sub_11697D0(a3, a4);
        sub_11697D0(a3, a4);
      }
      else
      {
        sub_11696F0(a1, (int)(uintptr_t)(v35), a3);
        sub_11696F0(v35, (int)(uintptr_t)(v27), a3);
      }
      g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
        a1,
        v35,
        v27,
        -1431655765 * ((v35 - a1) >> 3),
        -1431655765 * ((v27 - v35) >> 3),
        a3,
        a4);
      v14 = (-1431655765 * ((v6 - v27) >> 3) + 1) / 2;
      v36 = &v27[24 * v14];
      if ( a4 < v14 )
      {
        sub_11697D0(a3, a4);
        v40 = &v36[24 * ((-1431655765 * ((v6 - v36) >> 3) + 1) / 2)];
        if ( a4 < (-1431655765 * ((v6 - v36) >> 3) + 1) / 2 )
        {
          sub_11697D0(a3, a4);
          sub_11697D0(a3, a4);
        }
        else
        {
          sub_11696F0(v36, (int)(uintptr_t)(&v36[24 * ((-1431655765 * ((v6 - v36) >> 3) + 1) / 2)]), a3);
          sub_11696F0(v40, (int)(uintptr_t)(v6), a3);
        }
        g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
          v36,
          v40,
          v6,
          -1431655765 * ((v40 - v36) >> 3),
          -1431655765 * ((v6 - v40) >> 3),
          a3,
          a4);
        v15 = v27;
      }
      else
      {
        sub_11696F0(v27, (int)(uintptr_t)(v36), a3);
        sub_11696F0(v36, (int)(uintptr_t)(v6), a3);
        v15 = v27;
      }
      v28 = v15;
      g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
        v15,
        v36,
        v6,
        -1431655765 * ((v36 - v15) >> 3),
        -1431655765 * ((v6 - v36) >> 3),
        a3,
        a4);
      v10 = v28;
    }
    else
    {
      v26 = &a1[24 * v8];
      sub_11696F0(a1, (int)(uintptr_t)(v26), a3);
      sub_11696F0(v26, (int)(uintptr_t)(v6), a3);
      v10 = v26;
      v38 = -1431655765 * ((v26 - a1) >> 3);
    }
    g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
      a1,
      v10,
      v6,
      v38,
      -1431655765 * ((v6 - v10) >> 3),
      a3,
      a4);
    v37 = -1431655765 * ((a2 - (int)(uintptr_t)(v6)) >> 3);
    v11 = (v37 + 1) / 2;
    v34 = &v6[24 * v11];
    if ( a4 < v11 )
    {
      v16 = (-1431655765 * ((24 * v11) >> 3) + 1) / 2;
      v17 = &v6[24 * v16];
      if ( a4 < v16 )
      {
        v24 = (-1431655765 * ((24 * v16) >> 3) + 1) / 2;
        v41 = &v6[24 * v24];
        v32 = v17;
        if ( a4 < v24 )
        {
          sub_11697D0(a3, a4);
          sub_11697D0(a3, a4);
        }
        else
        {
          sub_11696F0(v6, (int)(uintptr_t)(&v6[24 * v24]), a3);
          sub_11696F0(v41, (int)(uintptr_t)(v32), a3);
        }
        g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
          v6,
          v41,
          v32,
          -1431655765 * ((v41 - v6) >> 3),
          -1431655765 * ((v32 - v41) >> 3),
          a3,
          a4);
        v25 = (-1431655765 * ((v34 - v32) >> 3) + 1) / 2;
        v42 = &v32[24 * v25];
        if ( a4 < v25 )
        {
          sub_11697D0(a3, a4);
          sub_11697D0(a3, a4);
        }
        else
        {
          sub_11696F0(v32, (int)(uintptr_t)(&v32[24 * v25]), a3);
          sub_11696F0(v42, (int)(uintptr_t)(v34), a3);
        }
        g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
          v32,
          v42,
          v34,
          -1431655765 * ((v42 - v32) >> 3),
          -1431655765 * ((v34 - v42) >> 3),
          a3,
          a4);
        v18 = v32;
        v19 = -1431655765 * ((v34 - v32) >> 3);
      }
      else
      {
        v29 = &v6[24 * v16];
        sub_11696F0(v6, (int)(uintptr_t)(v29), a3);
        sub_11696F0(v29, (int)(uintptr_t)(v34), a3);
        v18 = v29;
        v19 = -1431655765 * ((v34 - v29) >> 3);
      }
      g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
        v6,
        v18,
        v34,
        -1431655765 * ((v18 - v6) >> 3),
        v19,
        a3,
        a4);
      v20 = (-1431655765 * ((a2 - (int)(uintptr_t)(v34)) >> 3) + 1) / 2;
      if ( a4 < v20 )
      {
        v43 = -1431655765 * ((24 * v20) >> 3);
        v31 = &v34[24 * v20];
        if ( a4 < (v43 + 1) / 2 )
        {
          sub_11697D0(a3, a4);
          sub_11697D0(a3, a4);
        }
        else
        {
          sub_11696F0(v34, (int)(uintptr_t)(&v34[24 * ((v43 + 1) / 2)]), a3);
          sub_11696F0(&v34[24 * ((v43 + 1) / 2)], (int)(uintptr_t)(v31), a3);
        }
        g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
          v34,
          &v34[24 * ((v43 + 1) / 2)],
          v31,
          -1431655765 * ((24 * ((v43 + 1) / 2)) >> 3),
          -1431655765 * ((v31 - &v34[24 * ((v43 + 1) / 2)]) >> 3),
          a3,
          a4);
        v23 = (-1431655765 * ((a2 - (int)(uintptr_t)(v31)) >> 3) + 1) / 2;
        v44 = &v31[24 * v23];
        if ( a4 < v23 )
        {
          sub_11697D0(a3, a4);
          sub_11697D0(a3, a4);
        }
        else
        {
          sub_11696F0(v31, (int)(uintptr_t)(&v31[24 * v23]), a3);
          sub_11696F0(v44, a2, a3);
        }
        g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
          v31,
          v44,
          a2,
          -1431655765 * ((v44 - v31) >> 3),
          -1431655765 * ((a2 - (int)(uintptr_t)(v44)) >> 3),
          a3,
          a4);
        v21 = v31;
        v22 = -1431655765 * ((a2 - (int)(uintptr_t)(v31)) >> 3);
      }
      else
      {
        v30 = &v34[24 * v20];
        sub_11696F0(v34, (int)(uintptr_t)(v30), a3);
        sub_11696F0(v30, a2, a3);
        v21 = v30;
        v43 = -1431655765 * ((v30 - v34) >> 3);
        v22 = -1431655765 * ((a2 - (int)(uintptr_t)(v30)) >> 3);
      }
      g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
        v34,
        v21,
        a2,
        v43,
        v22,
        a3,
        a4);
      v12 = -1431655765 * ((a2 - (int)(uintptr_t)(v34)) >> 3);
    }
    else
    {
      sub_11696F0(v6, (int)(uintptr_t)(&v6[24 * v11]), a3);
      sub_11696F0(v34, a2, a3);
      v12 = -1431655765 * ((a2 - (int)(uintptr_t)(v34)) >> 3);
    }
    g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
      v6,
      v34,
      a2,
      -1431655765 * ((v34 - v6) >> 3),
      v12,
      a3,
      a4);
  }
  else
  {
    sub_11696F0(a1, (int)(uintptr_t)(&a1[24 * v5]), a3);
    sub_11696F0(v6, a2, a3);
    v37 = -1431655765 * ((a2 - (int)(uintptr_t)(v6)) >> 3);
    v39 = -1431655765 * ((v6 - a1) >> 3);
  }
  return g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
           a1,
           v6,
           a2,
           v39,
           v37,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42  (binary VA: 0x116b850)
// Original: std::__insertion_sort<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter>
// ----------------------------------------------------------------------------
int g4_std::insertion_sort_gameswf_ASEventDispatche_e2ec42(int a1, int a2)
{
  int result;
  int v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  gameswf::Self **v7;
  gameswf::Self **v8;
  char *v9;
  bool v10;
  int v11;
  int v12;
  gameswf::Self *v13;
  int v14;
  int v15;
  int v16;
  char v17;
  gameswf::Self *v18;
  int v19;
  typedef gameswf::Self **_g4_t_v20;
  typedef gameswf::Self **_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef gameswf::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef char _g4_t_v37;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v24)) > _g4_s4 ? (12u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v25)) > _g4_s5 ? (24u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v26)) > _g4_s6 ? (28u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v27)) > _g4_s7 ? (32u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v28)) > _g4_s8 ? (36u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v29)) > _g4_s9 ? (36u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v30)) > _g4_s10 ? (40u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v31)) > _g4_s11 ? (44u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v32)) > _g4_s12 ? (48u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v33)) > _g4_s13 ? (52u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v34)) > _g4_s14 ? (56u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v35)) > _g4_s15 ? (60u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v36)) > _g4_s16 ? (64u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v37)) > _g4_s17 ? (68u + sizeof(_g4_t_v37)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);

  result = a2;
  if ( a1 != a2 )
  {
    result = a1 + 24;
    if ( a2 != a1 + 24 )
    {
      v31 = a1 + 24;
      v27 = -result;
      result = a1;
      v30 = a1 + 8;
      do
      {
        v3 = v31;
        if ( *(uint32_t *)(v31 + 16) <= *(uint32_t *)(a1 + 16) )
        {
          v13 = *(gameswf::Self **)v31;
          v32 = *(gameswf::Self **)v31;
          if ( v32 != nullptr )
            ++*(uint16_t *)v13;
          v14 = a1 + 32;
          v33 = *(uint32_t *)(v31 + 4);
          v34 = *(gameswf::Self **)(v31 + 8);
          if ( v34 != nullptr )
          {
            ++*(uint16_t *)v34;
            v14 = a1 + 32;
          }
          v15 = *(uint32_t *)(v31 - a1 + v14 - 20);
          v16 = result;
          v17 = *(uint8_t *)(result + 44);
          v35 = v15;
          v37 = v17;
          v36 = *(uint32_t *)(result + 40);
          if ( *(uint32_t *)(v31 - 8) >= v36 )
          {
            v16 = v31;
          }
          else
          {
            v29 = result;
            while ( 1 )
            {
              gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v3, *(gameswf::Self **)v16);
              *(uint32_t *)(v3 + 4) = *(uint32_t *)(v16 + 4);
              gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v3 + 8), *(gameswf::Self **)(v16 + v27 + v30 + 24));
              *(uint32_t *)(v3 + 12) = *(uint32_t *)(v16 + v27 + v30 + 28);
              *(uint32_t *)(v3 + 16) = *(uint32_t *)(v16 + 16);
              *(uint8_t *)(v3 + 20) = *(uint8_t *)(v16 + 20);
              if ( v36 <= *(uint32_t *)(v16 - 24 + 16) )
                break;
              v3 = v16;
              v16 -= 24;
            }
            result = v29;
          }
          v23 = result;
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v16, v32);
          *(uint32_t *)(v16 + 4) = v33;
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v16 + 8), v34);
          *(uint32_t *)(v16 + 12) = v35;
          *(uint32_t *)(v16 + 16) = v36;
          *(uint8_t *)(v16 + 20) = v37;
          v18 = v34;
          v19 = v23;
          if ( v34 != nullptr )
          {
            v10 = (*(uint16_t *)v34)-- == 1;
            if ( v10 )
            {
              gameswf::free_internal(v18);
              v19 = v23;
            }
          }
          v24 = v19;
          sub_7E5E90(&v32);
          v11 = v24;
          v12 = v24 + 48;
        }
        else
        {
          v4 = *(gameswf::Self **)v31;
          v32 = *(gameswf::Self **)v31;
          if ( v32 != nullptr )
            ++*(uint16_t *)v4;
          v5 = a1 + 32;
          v33 = *(uint32_t *)(v31 + 4);
          v34 = *(gameswf::Self **)(v31 + 8);
          if ( v34 != nullptr )
          {
            ++*(uint16_t *)v34;
            v5 = a1 + 32;
          }
          v35 = *(uint32_t *)(v31 - a1 + v5 - 20);
          v36 = *(uint32_t *)(result + 40);
          v37 = *(uint8_t *)(result + 44);
          v25 = result + 48;
          v28 = -1431655765 * ((v31 - a1) >> 3);
          if ( v28 > 0 )
          {
            v6 = result;
            v26 = result + 32;
            v20 = (gameswf::Self **)(result + 48);
            v7 = (gameswf::Self **)(result + 48);
            while ( 1 )
            {
              v8 = v7 - 6;
              v9 = (char *)v8 + v27;
              v21 = v8;
              gameswf::smart_ptr_proxy::set_ref(v8, *(gameswf::Self **)((char *)v8 + v27 + v6));
              *(uint32_t *)&v9[v31 + 4] = *(uint32_t *)&v9[v6 + 4];
              gameswf::smart_ptr_proxy::set_ref(v20 - 4, *(gameswf::Self **)&v9[v30]);
              v10 = v28-- == 1;
              *(uint32_t *)&v9[v26 + 4] = *(uint32_t *)&v9[v30 + 4];
              *(uint32_t *)&v9[v31 + 16] = *(uint32_t *)&v9[v6 + 16];
              v9[v31 + 20] = v9[v6 + 20];
              v7 = v21;
              if ( v10 )
                break;
              v20 = v21;
            }
            result = v6;
          }
          v22 = result;
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)a1, v32);
          *(uint32_t *)(a1 + 4) = v33;
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(a1 + 8), v34);
          *(uint32_t *)(a1 + 12) = v35;
          *(uint32_t *)(a1 + 16) = v36;
          *(uint8_t *)(a1 + 20) = v37;
          sub_7E5E90(&v34);
          sub_7E5E90(&v32);
          v11 = v22;
          v12 = v25;
        }
        result = v11 + 24;
        v31 += 24;
        v27 -= 24;
        v30 += 24;
      }
      while ( a2 != v12 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c  (binary VA: 0x116caa0)
// Original: std::__merge_without_buffer<gameswf::ASEventDispatcher::Entry *,int,gameswf::ASEventDispatcher::PrioritySorter>
// ----------------------------------------------------------------------------
gameswf::Self * g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(int a1, gameswf::Self *a2, int a3, gameswf::Self *a4, gameswf::Self *a5)
{
  gameswf::Self *result;
  char *v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  result = a5;
  if ( a5 != nullptr )
  {
    result = a4;
    if ( a4 != nullptr )
    {
      if ( (char *)a4 + (uint32_t)(uintptr_t)(a5) == (char *)&dword_0 + 2 )
      {
        result = a2;
        if ( *((uint32_t *)a2 + 4) > *(uint32_t *)(a1 + 16) )
          return g4_std::iter_swap_gameswf_ASEventDispatche_e18c22(a1, (int)(uintptr_t)(a2));
      }
      else
      {
        if ( (int)(uintptr_t)(a4) <= (int)(uintptr_t)(a5) )
        {
          v7 = a1;
          v20 = (int)(uintptr_t)(a5) / 2;
          v6 = (char *)a2 + 24 * ((int)(uintptr_t)(a5) / 2);
          v19 = -1431655765 * (((int)(uintptr_t)(a2) - a1) >> 3);
LABEL_17:
          while ( v19 > 0 )
          {
            v14 = *((uint32_t *)v6 + 4);
            v15 = v19 >> 1;
            v16 = v7 + 24 * (v19 >> 1);
            if ( v14 > *(uint32_t *)(v16 + 16) )
            {
              while ( v15 != 0 )
              {
                v17 = v7 + 24 * (v15 >> 1);
                if ( *(uint32_t *)(v17 + 16) >= v14 )
                {
                  v7 = v17 + 24;
                  v19 = v15 - (v15 >> 1) - 1;
                  goto LABEL_17;
                }
                v15 >>= 1;
              }
              break;
            }
            v7 = v16 + 24;
            v19 = v19 - v15 - 1;
          }
          v21 = -1431655765 * ((v7 - a1) >> 3);
          v12 = -1431655765 * ((24 * v20) >> 3);
        }
        else
        {
          v6 = (char *)a2;
          v21 = (int)(uintptr_t)(a4) / 2;
          v7 = a1 + 24 * ((int)(uintptr_t)(a4) / 2);
          v18 = -1431655765 * ((a3 - (int)(uintptr_t)(a2)) >> 3);
LABEL_6:
          while ( v18 > 0 )
          {
            v8 = *(uint32_t *)(v7 + 16);
            v9 = v18 >> 1;
            v10 = &v6[24 * (v18 >> 1)];
            if ( v8 >= *((uint32_t *)v10 + 4) )
            {
              while ( v9 != 0 )
              {
                v11 = &v6[24 * (v9 >> 1)];
                if ( *((uint32_t *)v11 + 4) > v8 )
                {
                  v6 = v11 + 24;
                  v18 = v9 - (v9 >> 1) - 1;
                  goto LABEL_6;
                }
                v9 >>= 1;
              }
              break;
            }
            v6 = v10 + 24;
            v18 = v18 - v9 - 1;
          }
          v20 = -1431655765 * ((v6 - (char *)a2) >> 3);
          v12 = v20;
        }
        g4_std::rotate_gameswf_ASEventDispatche_8a9ae9((gameswf::Self **)v7, a2, (gameswf::Self *)v6);
        v13 = v7 + 24 * v12;
        g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
          a1,
          v7,
          v13,
          v21,
          v20);
        return (gameswf::Self *)g4_std::merge_without_buffer_gameswf_ASEventDispatche_f5c12c(
                            v13,
                            v6,
                            a3,
                            (char *)a4 - v21,
                            (char *)a5 - v20);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad  (binary VA: 0x116cde0)
// Original: std::__merge_adaptive<gameswf::ASEventDispatcher::Entry *,int,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter>
// ----------------------------------------------------------------------------
int g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int result;
  int v21;
  gameswf::Self *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  gameswf::Self **i;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  gameswf::Self *v36;
  int v37;
  int v38;

  v7 = a2;
  v8 = a6;
  if ( a4 > a7 || a4 > a5 )
  {
    if ( a5 <= a7 )
    {
      result = g4_std::copy_gameswf_ASEventDispatche_5bffa4(a2, a3, a6);
      if ( a1 == a2 )
      {
        return g4_std::copy_backward_gameswf_ASEventDispatche_cfca41(
                 a6,
                 result,
                 a3);
      }
      else if ( a6 != result )
      {
        v28 = result - 24;
        v29 = a2 - 24;
        v37 = a3 - 8;
        for ( i = (gameswf::Self **)(a3 - 24); ; i -= 6 )
        {
          if ( *(uint32_t *)(v28 + 16) > *(uint32_t *)(v29 + 16) )
          {
            gameswf::smart_ptr_proxy::set_ref(i, *(gameswf::Self **)v29);
            i[1] = *(gameswf::Self **)(v29 + 4);
            gameswf::smart_ptr_proxy::set_ref(i + 2, *(gameswf::Self **)(v29 + 8));
            i[3] = *(gameswf::Self **)(v29 + 12);
            *(uint32_t *)v37 = *(uint32_t *)(v29 + 16);
            *(uint8_t *)(v37 + 4) = *(uint8_t *)(v29 + 20);
            if ( a1 == v29 )
              return g4_std::copy_backward_gameswf_ASEventDispatche_cfca41(
                       a6,
                       v28 + 24,
                       (int)(uintptr_t)(i));
            v29 -= 24;
          }
          else
          {
            gameswf::smart_ptr_proxy::set_ref(i, *(gameswf::Self **)v28);
            i[1] = *(gameswf::Self **)(v28 + 4);
            gameswf::smart_ptr_proxy::set_ref(i + 2, *(gameswf::Self **)(v28 + 8));
            i[3] = *(gameswf::Self **)(v28 + 12);
            *(uint32_t *)v37 = *(uint32_t *)(v28 + 16);
            result = *(uint8_t *)(v28 + 20);
            *(uint8_t *)(v37 + 4) = result;
            if ( a6 == v28 )
              return result;
            v28 -= 24;
          }
          v37 -= 24;
        }
      }
    }
    else
    {
      if ( a4 <= a5 )
      {
        v34 = a5 / 2;
        v36 = (gameswf::Self *)(a2 + 24 * (a5 / 2));
        v14 = a1;
        v15 = -1431655765 * ((a2 - a1) >> 3);
LABEL_13:
        while ( v15 > 0 )
        {
          v16 = v15 >> 1;
          v17 = v14 + 24 * (v15 >> 1);
          v18 = *((uint32_t *)v36 + 4);
          if ( *(uint32_t *)(v17 + 16) < v18 )
          {
            while ( v16 != 0 )
            {
              v19 = v14 + 24 * (v16 >> 1);
              if ( *(uint32_t *)(v19 + 16) >= v18 )
              {
                v14 = v19 + 24;
                v15 = v16 - (v16 >> 1) - 1;
                goto LABEL_13;
              }
              v16 >>= 1;
            }
            break;
          }
          v14 = v17 + 24;
          v15 = v15 - v16 - 1;
        }
        v35 = v14;
        v27 = v14 - a1;
        v22 = (gameswf::Self *)a2;
        v23 = a6;
        v38 = -1431655765 * (v27 >> 3);
      }
      else
      {
        v38 = a4 / 2;
        v35 = a1 + 24 * (a4 / 2);
        v9 = -1431655765 * ((a3 - a2) >> 3);
LABEL_5:
        while ( v9 > 0 )
        {
          v10 = v9 >> 1;
          v11 = v7 + 24 * (v9 >> 1);
          v12 = *(uint32_t *)(v35 + 16);
          if ( v12 >= *(uint32_t *)(v11 + 16) )
          {
            while ( v10 != 0 )
            {
              v13 = v7 + 24 * (v10 >> 1);
              if ( *(uint32_t *)(v13 + 16) > v12 )
              {
                v7 = v13 + 24;
                v9 = v10 - (v10 >> 1) - 1;
                goto LABEL_5;
              }
              v10 >>= 1;
            }
            break;
          }
          v7 = v11 + 24;
          v9 = v9 - v10 - 1;
        }
        v36 = (gameswf::Self *)v7;
        v22 = (gameswf::Self *)a2;
        v23 = a6;
        v34 = -1431655765 * (((int)(uintptr_t)(v36) - a2) >> 3);
      }
      v24 = a4 - v38;
      if ( v34 > a7 || v34 >= v24 )
      {
        if ( a7 < v24 )
        {
          g4_std::rotate_gameswf_ASEventDispatche_8a9ae9((gameswf::Self **)v35, v22, v36);
          v24 = a4 - v38;
          v25 = v35 + ((v36 - v22) & 0xFFFFFFF8);
        }
        else
        {
          v25 = (int)(uintptr_t)(v36);
          if ( v24 != 0 )
          {
            v26 = g4_std::copy_gameswf_ASEventDispatche_5bffa4(v35, (int)(uintptr_t)(v22), v23);
            g4_std::copy_gameswf_ASEventDispatche_5bffa4((int)(uintptr_t)(v22), (int)(uintptr_t)(v36), v35);
            v25 = g4_std::copy_backward_gameswf_ASEventDispatche_cfca41(
                    v23,
                    v26,
                    (int)(uintptr_t)(v36));
            v24 = a4 - v38;
          }
        }
      }
      else
      {
        v25 = v35;
        if ( v34 != 0 )
        {
          v31 = g4_std::copy_gameswf_ASEventDispatche_5bffa4(
                  (int)(uintptr_t)(v22),
                  (int)(uintptr_t)(v36),
                  v23);
          g4_std::copy_backward_gameswf_ASEventDispatche_cfca41(
            v35,
            (int)(uintptr_t)(v22),
            (int)(uintptr_t)(v36));
          v25 = g4_std::copy_gameswf_ASEventDispatche_5bffa4(v23, v31, v35);
          v24 = a4 - v38;
        }
      }
      v32 = v24;
      g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
        a1,
        v35,
        v25,
        v38,
        v34,
        v23,
        a7);
      return g4_std::merge_adaptive_gameswf_ASEventDispatche_98c4ad(
               v25,
               v36,
               a3,
               v32,
               a5 - v34,
               v23,
               a7);
    }
  }
  else
  {
    result = g4_std::copy_gameswf_ASEventDispatche_5bffa4(a1, a2, a6);
    v33 = result;
    v21 = a1;
    if ( a6 != result && a2 != a3 )
    {
      do
      {
        if ( *(uint32_t *)(v7 + 16) > *(uint32_t *)(v8 + 16) )
        {
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v21, *(gameswf::Self **)v7);
          *(uint32_t *)(v21 + 4) = *(uint32_t *)(v7 + 4);
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v21 + 8), *(gameswf::Self **)(v7 + 8));
          *(uint32_t *)(v21 + 12) = *(uint32_t *)(v7 + 12);
          *(uint32_t *)(v21 + 16) = *(uint32_t *)(v7 + 16);
          result = *(uint8_t *)(v7 + 20);
          v7 += 24;
          *(uint8_t *)(v21 + 20) = result;
          v21 += 24;
          if ( a3 == v7 )
            break;
        }
        else
        {
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v21, *(gameswf::Self **)v8);
          *(uint32_t *)(v21 + 4) = *(uint32_t *)(v8 + 4);
          gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(v21 + 8), *(gameswf::Self **)(v8 + 8));
          *(uint32_t *)(v21 + 12) = *(uint32_t *)(v8 + 12);
          *(uint32_t *)(v21 + 16) = *(uint32_t *)(v8 + 16);
          result = *(uint8_t *)(v8 + 20);
          v8 += 24;
          *(uint8_t *)(v21 + 20) = result;
          v21 += 24;
          if ( a3 == v7 )
            break;
        }
      }
      while ( v33 != v8 );
    }
    if ( v33 != v8 )
      return g4_std::copy_gameswf_ASEventDispatche_5bffa4(v8, v33, v21);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_537  (binary VA: 0x1170f88)
// Original: nullsub_537
// ----------------------------------------------------------------------------
void nullsub_537()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_538  (binary VA: 0x1170f98)
// Original: nullsub_538
// ----------------------------------------------------------------------------
void nullsub_538()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_539  (binary VA: 0x1170fa8)
// Original: nullsub_539
// ----------------------------------------------------------------------------
void nullsub_539()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_540  (binary VA: 0x1170fb8)
// Original: nullsub_540
// ----------------------------------------------------------------------------
void nullsub_540()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_541  (binary VA: 0x1170fc8)
// Original: nullsub_541
// ----------------------------------------------------------------------------
void nullsub_541()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_542  (binary VA: 0x1170fd8)
// Original: nullsub_542
// ----------------------------------------------------------------------------
void nullsub_542()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_543  (binary VA: 0x1170fe8)
// Original: nullsub_543
// ----------------------------------------------------------------------------
void nullsub_543()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gl_noBeginData  (binary VA: 0x1170ff0)
// Original: __gl_noBeginData
// ----------------------------------------------------------------------------
void gl_noBeginData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gl_noEdgeFlagData  (binary VA: 0x1171000)
// Original: __gl_noEdgeFlagData
// ----------------------------------------------------------------------------
void gl_noEdgeFlagData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gl_noVertexData  (binary VA: 0x1171010)
// Original: __gl_noVertexData
// ----------------------------------------------------------------------------
void gl_noVertexData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gl_noEndData  (binary VA: 0x1171020)
// Original: __gl_noEndData
// ----------------------------------------------------------------------------
void gl_noEndData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gl_noErrorData  (binary VA: 0x1171030)
// Original: __gl_noErrorData
// ----------------------------------------------------------------------------
void gl_noErrorData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gl_noCombineData  (binary VA: 0x1171040)
// Original: __gl_noCombineData
// ----------------------------------------------------------------------------
void gl_noCombineData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gluNewTess  (binary VA: 0x1171050)
// Original: gluNewTess
// ----------------------------------------------------------------------------
int gluNewTess()
{
  int result;

  result = gameswf::malloc_internal(0xBD0u);
  if ( result != 0 )
  {
    *(uint32_t *)(result + 128) = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
    *(uint32_t *)(result + 132) = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
    *(uint32_t *)(result + 136) = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
    *(uint32_t *)(result + 140) = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
    *(uint32_t *)(result + 12) = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
    *(uint32_t *)(result + 116) = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
    *(uint32_t *)(result + 144) = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
    *(uint32_t *)result = 0;
    *(uint32_t *)(result + 2956) = (uint32_t)(uintptr_t)(gl_noBeginData);
    *(uint32_t *)(result + 2960) = (uint32_t)(uintptr_t)(gl_noEdgeFlagData);
    *(uint32_t *)(result + 2964) = (uint32_t)(uintptr_t)(gl_noVertexData);
    *(uint32_t *)(result + 2968) = (uint32_t)(uintptr_t)(gl_noEndData);
    *(uint32_t *)(result + 2972) = (uint32_t)(uintptr_t)(gl_noErrorData);
    *(uint32_t *)(result + 96) = 100130;
    *(uint64_t *)(result + 16) = 0;
    *(uint8_t *)(result + 120) = 0;
    *(uint64_t *)(result + 24) = 0;
    *(uint8_t *)(result + 121) = 0;
    *(uint64_t *)(result + 32) = 0;
    *(uint32_t *)(result + 2976) = (uint32_t)(uintptr_t)(gl_noCombineData);
    *(uint64_t *)(result + 88) = 0;
    *(uint32_t *)(result + 3020) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gluTessProperty  (binary VA: 0x1171150)
// Original: gluTessProperty
// ----------------------------------------------------------------------------
int gluTessProperty(GLUtesselator *a1, int a2, double a3)
{
  int result;
  void (*v4)();
  void (*v5)();

  result = a2;
  if ( a2 == 100141 )
    goto LABEL_9;
  if ( a2 == 100142 )
  {
    if ( a3 >= 0.0 && a3 <= 1.0 )
    {
      *((double *)a1 + 11) = a3;
      return result;
    }
    goto LABEL_7;
  }
  if ( a2 != 100140 )
  {
    v4 = *((void (**)())a1 + 743);
    if ( v4 == gl_noErrorData )
      return (*((int (**)(Elf32_Sym *))a1 + 3))((Elf32_Sym *)(&stru_18A24));
    else
      return ((int (*)(Elf32_Sym *, uint32_t))v4)((Elf32_Sym *)(&stru_18A24), *((uint32_t *)a1 + 755));
  }
  result = (int)a3;
  if ( (double)(int)a3 == a3 )
  {
    if ( (unsigned int)(result - 100130) <= 4 )
    {
      *((uint32_t *)a1 + 24) = result;
      return result;
    }
LABEL_9:
    *((uint8_t *)a1 + 121) = a3 != 0.0;
    return result;
  }
LABEL_7:
  v5 = *((void (**)())a1 + 743);
  if ( v5 == gl_noErrorData )
    return (*((int (**)(int))a1 + 3))(100901);
  else
    return ((int (*)(int, uint32_t))v5)(100901, *((uint32_t *)a1 + 755));
}

// ----------------------------------------------------------------------------
// Function: gluGetTessProperty  (binary VA: 0x1171260)
// Original: gluGetTessProperty
// ----------------------------------------------------------------------------
int gluGetTessProperty(GLUtesselator *a1, int a2, double *a3)
{
  int result;
  void (*v4)();

  result = a2;
  switch ( a2 )
  {
    case 100141:
      result = *((char *)a1 + 121);
      *a3 = (double)result;
      break;
    case 100142:
      *a3 = *((double *)a1 + 11);
      break;
    case 100140:
      *a3 = (double)*((int *)a1 + 24);
      break;
    default:
      *a3 = 0.0;
      v4 = *((void (**)())a1 + 743);
      if ( v4 == gl_noErrorData )
        return (*((int (**)(Elf32_Sym *))a1 + 3))((Elf32_Sym *)(&stru_18A24));
      else
        return ((int (*)(Elf32_Sym *, uint32_t))v4)((Elf32_Sym *)(&stru_18A24), *((uint32_t *)a1 + 755));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gluTessNormal  (binary VA: 0x1171310)
// Original: gluTessNormal
// ----------------------------------------------------------------------------
GLUtesselator * gluTessNormal(GLUtesselator *a1, double a2, double a3, double a4)
{
  *((double *)a1 + 2) = a2;
  *((double *)a1 + 3) = a3;
  *((double *)a1 + 4) = a4;
  return a1;
}



// ============================================================================
// Address:   0x1171340 (size: 447 bytes)
// Symbol:    _Z15gluTessCallbackP13GLUtesselatoriPFvvE
// Demangled: gluTessCallback(GLUtesselator *,int,void (*)(void))
// ============================================================================
void (*gluTessCallback(GLUtesselator *a1, int a2, void (*a3)()))()
{
  void (*result)();
  void (*v4)();
  char *v5;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  char *v10;
  void (*v11)();

  result = a3;
  switch ( a2 - (uint32_t)(uintptr_t)(&stru_18704) )
  {
    case 0:
      v6 = (char *)(uintptr_t)((&g4_noop_ret0));
      if ( a3 != nullptr )
        v6 = (char *)a3;
      *((uint32_t *)a1 + 32) = (uint32_t)(uintptr_t)(v6);
      break;
    case 1:
      v7 = (char *)(uintptr_t)((&g4_noop_ret0));
      if ( a3 != nullptr )
        v7 = (char *)a3;
      *((uint32_t *)a1 + 34) = (uint32_t)(uintptr_t)(v7);
      break;
    case 2:
      if ( a3 == nullptr )
        result = (void (*)())(&g4_noop_ret0);
      *((uint32_t *)a1 + 35) = (uint32_t)(uintptr_t)(result);
      break;
    case 3:
      v8 = (char *)(uintptr_t)((&g4_noop_ret0));
      if ( a3 != nullptr )
        v8 = (char *)a3;
      *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(v8);
      break;
    case 4:
      v9 = (char *)(uintptr_t)((&g4_noop_ret0));
      *((uint8_t *)a1 + 120) = a3 != nullptr;
      if ( a3 != nullptr )
        v9 = (char *)a3;
      *((uint32_t *)a1 + 33) = (uint32_t)(uintptr_t)(v9);
      break;
    case 5:
      v10 = (char *)(uintptr_t)((&g4_noop_ret0));
      if ( a3 != nullptr )
        v10 = (char *)a3;
      *((uint32_t *)a1 + 29) = (uint32_t)(uintptr_t)(v10);
      break;
    case 6:
      if ( a3 == nullptr )
        result = gl_noBeginData;
      *((uint32_t *)a1 + 739) = (uint32_t)(uintptr_t)(result);
      break;
    case 7:
      if ( a3 == nullptr )
        result = gl_noVertexData;
      *((uint32_t *)a1 + 741) = (uint32_t)(uintptr_t)(result);
      break;
    case 8:
      if ( a3 == nullptr )
        result = gl_noEndData;
      *((uint32_t *)a1 + 742) = (uint32_t)(uintptr_t)(result);
      break;
    case 9:
      if ( a3 == nullptr )
        result = gl_noErrorData;
      *((uint32_t *)a1 + 743) = (uint32_t)(uintptr_t)(result);
      break;
    case 10:
      v11 = a3;
      if ( a3 == nullptr )
        v11 = gl_noEdgeFlagData;
      *((uint32_t *)a1 + 740) = (uint32_t)(uintptr_t)(v11);
      *((uint8_t *)a1 + 120) = a3 != nullptr;
      break;
    case 11:
      if ( a3 == nullptr )
        result = gl_noCombineData;
      *((uint32_t *)a1 + 744) = (uint32_t)(uintptr_t)(result);
      break;
    case 12:
      v5 = (char *)(uintptr_t)((&g4_noop_ret0));
      if ( a3 != nullptr )
        v5 = (char *)a3;
      *((uint32_t *)a1 + 36) = (uint32_t)(uintptr_t)(v5);
      break;
    default:
      v4 = *((void (**)())a1 + 743);
      if ( v4 == gl_noErrorData )
        result = (void (*)())(*((int (**)(Elf32_Sym *))a1 + 3))((Elf32_Sym *)(&stru_18A24));
      else
        result = (void (*)())((int (*)(Elf32_Sym *, uint32_t))v4)((Elf32_Sym *)(&stru_18A24), *((uint32_t *)a1 + 755));
      break;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: gluTessEndContour  (binary VA: 0x1171500)
// Original: gluTessEndContour
// ----------------------------------------------------------------------------
int gluTessEndContour(GLUtesselator *a1)
{
  int result;
  int i;
  void (*v3)();
  void (*v4)();

  result = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 != 2 )
  {
    for ( i = *(uint32_t *)a1; ; result = i )
    {
      if ( result > 1 )
        goto LABEL_6;
      if ( result == 0 )
        break;
      if ( result != 1 )
        goto LABEL_6;
      v4 = *((void (**)())a1 + 743);
      if ( v4 == gl_noErrorData )
        (*((void (**)(int))a1 + 3))(100152);
      else
        ((void (*)(int, uint32_t))v4)(100152, *((uint32_t *)a1 + 755));
      result = gluTessBeginContour(a1);
      i = *(uint32_t *)a1;
      if ( *(uint32_t *)a1 == 2 )
        goto LABEL_14;
LABEL_7:
      ;
    }
    v3 = *((void (**)())a1 + 743);
    if ( v3 == gl_noErrorData )
      (*((void (**)(int))a1 + 3))(100151);
    else
      ((void (*)(int, uint32_t))v3)(100151, *((uint32_t *)a1 + 755));
    result = (int)(uintptr_t)(gluTessBeginPolygon(a1, nullptr));
    i = *(uint32_t *)a1;
LABEL_6:
    if ( i == 2 )
      goto LABEL_14;
    goto LABEL_7;
  }
LABEL_14:
  *(uint32_t *)a1 = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gluTessBeginPolygon  (binary VA: 0x11715e0)
// Original: gluTessBeginPolygon
// ----------------------------------------------------------------------------
void * gluTessBeginPolygon(GLUtesselator *a1, void *a2)
{
  int v2;
  void (*v4)();
  void (*v5)();

  v2 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 == 0 )
    goto LABEL_2;
  while ( v2 < 0 )
  {
LABEL_5:
    if ( v2 == 0 )
      goto LABEL_2;
  }
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
      v5 = *((void (**)())a1 + 743);
      if ( v5 == gl_noErrorData )
        (*((void (**)(int))a1 + 3))(100154);
      else
        ((void (*)(int, uint32_t))v5)(100154, *((uint32_t *)a1 + 755));
      gluTessEndContour(a1);
      v2 = *(uint32_t *)a1;
    }
    goto LABEL_5;
  }
  v4 = *((void (**)())a1 + 743);
  if ( v4 == gl_noErrorData )
    (*((void (**)(int))a1 + 3))(100153);
  else
    ((void (*)(int, uint32_t))v4)(100153, *((uint32_t *)a1 + 755));
  if ( *((uint32_t *)a1 + 2) != 0 )
    gl_meshDeleteMesh(*((gameswf::Self **)a1 + 2));
  *((uint32_t *)a1 + 1) = 0;
LABEL_2:
  *(uint32_t *)a1 = 1;
  *((uint32_t *)a1 + 38) = 0;
  *((uint8_t *)a1 + 148) = 0;
  *((uint32_t *)a1 + 2) = 0;
  *((uint32_t *)a1 + 755) = (uint32_t)(uintptr_t)(a2);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gluTessBeginContour  (binary VA: 0x11716e0)
// Original: gluTessBeginContour
// ----------------------------------------------------------------------------
int gluTessBeginContour(GLUtesselator *a1)
{
  int v1;
  void (*v2)();
  void (*v3)();
  int result;

  v1 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 != 1 )
  {
    while ( v1 > 0 )
    {
      if ( v1 == 2 )
      {
        v3 = *((void (**)())a1 + 743);
        if ( v3 == gl_noErrorData )
          (*((void (**)(int))a1 + 3))(100154);
        else
          ((void (*)(int, uint32_t))v3)(100154, *((uint32_t *)a1 + 755));
        gluTessEndContour(a1);
        v1 = *(uint32_t *)a1;
        if ( *(uint32_t *)a1 == 1 )
          goto LABEL_13;
      }
      else
      {
LABEL_7:
        if ( v1 == 1 )
          goto LABEL_13;
      }
    }
    if ( v1 == 0 )
    {
      v2 = *((void (**)())a1 + 743);
      if ( v2 == gl_noErrorData )
        (*((void (**)(int))a1 + 3))(100151);
      else
        ((void (*)(int, uint32_t))v2)(100151, *((uint32_t *)a1 + 755));
      gluTessBeginPolygon(a1, nullptr);
      v1 = *(uint32_t *)a1;
    }
    goto LABEL_7;
  }
LABEL_13:
  result = *((uint32_t *)a1 + 38);
  *(uint32_t *)a1 = 2;
  *((uint32_t *)a1 + 1) = 0;
  if ( result > 0 )
    *((uint8_t *)a1 + 148) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gluTessVertex  (binary VA: 0x11717d0)
// Original: gluTessVertex
// ----------------------------------------------------------------------------
int gluTessVertex(GLUtesselator *a1, double *a2, void *a3)
{
  GLUtesselator *v3;
  int v4;
  int i;
  void (*v6)();
  void (*v7)();
  double v8; // xmm1_8
  int64_t v9; // xmm0_8
  int v10;
  double v11; // xmm1_8
  double v12; // xmm1_8
  void (*v13)();
  uint32_t *v14;
  uint32_t *v15;
  int result;
  int v17;
  char *v18;
  uint32_t *v19;
  int v20;
  int64_t v21; // xmm0_8
  int v22;
  uint32_t *v23;
  void (*v24)();
  uint32_t *Edge;
  int v26;
  int v27;
  int v28;
  char *v29;
  int v30;
  int64_t v31; // xmm0_8
  int v32;
  uint32_t *v33;
  GLUtesselator *v34;
  unsigned int v35;
  char *v36;
  double v37;
  double v38;
  int64_t v39;

  v3 = a1;
  v4 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 != 2 )
  {
    for ( i = *(uint32_t *)a1; ; v4 = i )
    {
      if ( v4 > 1 )
        goto LABEL_6;
      if ( v4 == 0 )
        break;
      if ( v4 != 1 )
        goto LABEL_6;
      v7 = *((void (**)())a1 + 743);
      if ( v7 == gl_noErrorData )
        (*((void (**)(int))a1 + 3))(100152);
      else
        ((void (*)(int, uint32_t))v7)(100152, *((uint32_t *)a1 + 755));
      gluTessBeginContour(a1);
      i = *(uint32_t *)a1;
      if ( *(uint32_t *)a1 == 2 )
        goto LABEL_14;
LABEL_7:
      ;
    }
    v6 = *((void (**)())a1 + 743);
    if ( v6 == gl_noErrorData )
      (*((void (**)(int))a1 + 3))(100151);
    else
      ((void (*)(int, uint32_t))v6)(100151, *((uint32_t *)a1 + 755));
    gluTessBeginPolygon(a1, nullptr);
    i = *(uint32_t *)a1;
LABEL_6:
    if ( i == 2 )
      goto LABEL_14;
    goto LABEL_7;
  }
LABEL_14:
  if ( *((uint8_t *)a1 + 148) != 0 )
  {
    v17 = gl_meshNewMesh();
    *((uint32_t *)a1 + 2) = v17;
    if ( v17 == 0 )
      goto LABEL_46;
    v18 = (char *)a1 + 156;
    v36 = (char *)a1 + 28 * *((uint32_t *)a1 + 38) + 156;
    if ( (char *)a1 + 156 < v36 )
    {
      v19 = *((uint32_t **)a1 + 1);
      v34 = a1;
      while ( 1 )
      {
        v20 = *((uint32_t *)v18 + 6);
        if ( v19 != nullptr )
        {
          if ( gl_meshSplitEdge(v19) == 0 )
            goto LABEL_45;
          v19 = (uint32_t *)v19[3];
        }
        else
        {
          Edge = (uint32_t *)gl_meshMakeEdge(*((uint32_t *)a1 + 2));
          v19 = Edge;
          if ( Edge == nullptr || gl_meshSplice(Edge, Edge[1]) == 0 )
          {
LABEL_45:
            v3 = v34;
            goto LABEL_46;
          }
        }
        *(uint32_t *)(v19[4] + 12) = v20;
        *(uint64_t *)(v19[4] + 16) = *(uint64_t *)v18;
        *(uint64_t *)(v19[4] + 24) = *((uint64_t *)v18 + 1);
        v21 = *((uint64_t *)v18 + 2);
        v18 += 28;
        *(uint64_t *)(v19[4] + 32) = v21;
        v22 = v19[1];
        v19[7] = 1;
        *(uint32_t *)(v22 + 28) = -1;
        *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(v19);
        if ( v36 <= v18 )
        {
          v3 = a1;
          break;
        }
      }
    }
    *((uint32_t *)v3 + 38) = 0;
    *((uint8_t *)v3 + 148) = 0;
    *((uint32_t *)v3 + 1) = 0;
  }
  v8 = *a2;
  v9 = 0xDF138D352E5096AFLL;
  if ( *a2 >= -1.0e150 )
  {
    if ( v8 <= 1.0e150 )
    {
      v10 = 0;
    }
    else
    {
      v8 = 1.0e150;
      v10 = 1;
    }
  }
  else
  {
    v8 = -1.0e150;
    v10 = 1;
  }
  v37 = v8;
  v11 = a2[1];
  if ( v11 < -1.0e150 )
  {
    v11 = -1.0e150;
    v10 = 1;
  }
  else if ( v11 > 1.0e150 )
  {
    v11 = 1.0e150;
    v10 = 1;
  }
  v38 = v11;
  v12 = a2[2];
  if ( v12 < -1.0e150 || (v9 = 0x5F138D352E5096AFLL, v12 > 1.0e150) )
  {
    v39 = v9;
    goto LABEL_23;
  }
  v39 = *((uint64_t *)a2 + 2);
  if ( v10 != 0 )
  {
LABEL_23:
    v13 = *((void (**)())v3 + 743);
    if ( v13 == gl_noErrorData )
      (*((void (**)(int))v3 + 3))(100155);
    else
      ((void (*)(int, uint32_t))v13)(100155, *((uint32_t *)v3 + 755));
  }
  if ( *((uint32_t *)v3 + 2) != 0 )
  {
    v14 = *((uint32_t **)v3 + 1);
  }
  else
  {
    v26 = *((uint32_t *)v3 + 38);
    if ( v26 <= 99 )
    {
      result = 28 * v26;
      v27 = (int)(uintptr_t)(v3) + result + 144;
      *(double *)(v27 + 12) = v37;
      *(uint32_t *)(v27 + 36) = (uint32_t)(uintptr_t)(a3);
      *(double *)(v27 + 20) = v38;
      *(uint64_t *)(v27 + 28) = v39;
      ++*((uint32_t *)v3 + 38);
      return result;
    }
    v28 = gl_meshNewMesh();
    *((uint32_t *)v3 + 2) = v28;
    if ( v28 == 0 )
      goto LABEL_46;
    v29 = (char *)v3 + 156;
    v14 = *((uint32_t **)v3 + 1);
    v35 = (unsigned int)(uintptr_t)(v3) + 28 * *((uint32_t *)v3 + 38) + 156;
    if ( (unsigned int)(uintptr_t)(v3) + 156 < v35 )
    {
      v34 = v3;
      do
      {
        v30 = *((uint32_t *)v29 + 6);
        if ( v14 != nullptr )
        {
          if ( gl_meshSplitEdge(v14) == 0 )
            goto LABEL_45;
          v14 = (uint32_t *)v14[3];
        }
        else
        {
          v23 = (uint32_t *)gl_meshMakeEdge(*((uint32_t *)v34 + 2));
          v14 = v23;
          if ( v23 == nullptr || gl_meshSplice(v23, v23[1]) == 0 )
            goto LABEL_45;
        }
        *(uint32_t *)(v14[4] + 12) = v30;
        *(uint64_t *)(v14[4] + 16) = *(uint64_t *)v29;
        *(uint64_t *)(v14[4] + 24) = *((uint64_t *)v29 + 1);
        v31 = *((uint64_t *)v29 + 2);
        v29 += 28;
        *(uint64_t *)(v14[4] + 32) = v31;
        v32 = v14[1];
        v14[7] = 1;
        *(uint32_t *)(v32 + 28) = -1;
        *((uint32_t *)v34 + 1) = (uint32_t)(uintptr_t)(v14);
      }
      while ( v35 > (unsigned int)(uintptr_t)(v29) );
      v3 = v34;
    }
    *((uint32_t *)v3 + 38) = 0;
    *((uint8_t *)v3 + 148) = 0;
  }
  if ( v14 != nullptr )
  {
    if ( gl_meshSplitEdge(v14) != 0 )
    {
      v15 = (uint32_t *)v14[3];
LABEL_30:
      *(uint32_t *)(v15[4] + 12) = (uint32_t)(uintptr_t)(a3);
      *(double *)(v15[4] + 16) = v37;
      *(double *)(v15[4] + 24) = v38;
      *(uint64_t *)(v15[4] + 32) = v39;
      result = v15[1];
      v15[7] = 1;
      *(uint32_t *)(result + 28) = -1;
      *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(v15);
      return result;
    }
  }
  else
  {
    v33 = (uint32_t *)gl_meshMakeEdge(*((uint32_t *)v3 + 2));
    v15 = v33;
    if ( v33 != nullptr && gl_meshSplice(v33, v33[1]) != 0 )
      goto LABEL_30;
  }
LABEL_46:
  v24 = *((void (**)())v3 + 743);
  if ( v24 == gl_noErrorData )
    return (*((int (**)(int))v3 + 3))(100902);
  else
    return ((int (*)(int, uint32_t))v24)(100902, *((uint32_t *)v3 + 755));
}

// ----------------------------------------------------------------------------
// Function: gluDeleteTess  (binary VA: 0x1171cf0)
// Original: gluDeleteTess
// ----------------------------------------------------------------------------
int gluDeleteTess(gameswf::Self **a1)
{
  int v1;
  void (*v3)();
  void (*v4)();

  v1 = (int)(uintptr_t)(*a1);
  if ( *a1 == nullptr )
    return gameswf::free_internal((gameswf::Self *)a1);
  while ( v1 < 0 )
  {
LABEL_5:
    if ( v1 == 0 )
      return gameswf::free_internal((gameswf::Self *)a1);
  }
  if ( v1 != 1 )
  {
    if ( v1 == 2 )
    {
      v4 = (void (*)())a1[743];
      if ( v4 == gl_noErrorData )
        ((void (*)(int))a1[3])(100154);
      else
        ((void (*)(int, gameswf::Self *))v4)(100154, a1[755]);
      gluTessEndContour((GLUtesselator *)a1);
      v1 = (int)(uintptr_t)(*a1);
    }
    goto LABEL_5;
  }
  v3 = (void (*)())a1[743];
  if ( v3 == gl_noErrorData )
    ((void (*)(int))a1[3])(100153);
  else
    ((void (*)(int, gameswf::Self *))v3)(100153, a1[755]);
  if ( a1[2] != nullptr )
    gl_meshDeleteMesh(a1[2]);
  *a1 = nullptr;
  a1[1] = nullptr;
  a1[2] = nullptr;
  return gameswf::free_internal((gameswf::Self *)a1);
}

// ----------------------------------------------------------------------------
// Function: gluTessEndPolygon  (binary VA: 0x1171de0)
// Original: gluTessEndPolygon
// ----------------------------------------------------------------------------
GLUtesselator * gluTessEndPolygon(GLUtesselator *a1)
{
  void (*v1)();
  GLUtesselator *result;
  int v3;
  int i;
  void (*v5)();
  void (*v6)();
  int v7;
  gameswf::Self *v8;
  int v9;
  int v10;
  char *v11;
  uint32_t *v12;
  int v13;
  int64_t v14; // xmm0_8
  int v15;
  uint32_t *Edge;
  struct __jmp_buf_tag *env;
  char *v18;

  env = (struct __jmp_buf_tag *)((char *)a1 + 2980);
  if ( setjmp(*reinterpret_cast<jmp_buf *>(((char *)a1 + 2980))) != 0 )
  {
    v1 = *((void (**)())a1 + 743);
    if ( v1 == gl_noErrorData )
      return (GLUtesselator *)(*((int (**)(int))a1 + 3))(100902);
    else
      return (GLUtesselator *)((int (*)(int, uint32_t))v1)(100902, *((uint32_t *)a1 + 755));
  }
  v3 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 != 1 )
  {
    for ( i = *(uint32_t *)a1; i > 0; i = v3 )
    {
      if ( i != 2 )
        goto LABEL_10;
      v6 = *((void (**)())a1 + 743);
      if ( v6 == gl_noErrorData )
        (*((void (**)(int))a1 + 3))(100154);
      else
        ((void (*)(int, uint32_t))v6)(100154, *((uint32_t *)a1 + 755));
      gluTessEndContour(a1);
      v3 = *(uint32_t *)a1;
      if ( *(uint32_t *)a1 == 1 )
        goto LABEL_17;
LABEL_11:
      ;
    }
    if ( i == 0 )
    {
      v5 = *((void (**)())a1 + 743);
      if ( v5 == gl_noErrorData )
        (*((void (**)(int))a1 + 3))(100151);
      else
        ((void (*)(int, uint32_t))v5)(100151, *((uint32_t *)a1 + 755));
      gluTessBeginPolygon(a1, nullptr);
      v3 = *(uint32_t *)a1;
    }
LABEL_10:
    if ( v3 == 1 )
      goto LABEL_17;
    goto LABEL_11;
  }
LABEL_17:
  v7 = *((uint32_t *)a1 + 2);
  *(uint32_t *)a1 = 0;
  if ( v7 == 0 )
  {
    if ( *((uint8_t *)a1 + 120) == 0 && *((char **)a1 + 36) == (char *)(intptr_t)((&g4_noop_ret0)) && (uint8_t)gl_renderCache(a1) != 0 )
    {
      *((uint32_t *)a1 + 755) = 0;
      return a1;
    }
    v10 = gl_meshNewMesh();
    *((uint32_t *)a1 + 2) = v10;
    if ( v10 == 0 )
LABEL_43:
      longjmp(env, 1);
    v11 = (char *)a1 + 156;
    v18 = (char *)a1 + 28 * *((uint32_t *)a1 + 38) + 156;
    if ( (char *)a1 + 156 < v18 )
    {
      v12 = *((uint32_t **)a1 + 1);
      do
      {
        v13 = *((uint32_t *)v11 + 6);
        if ( v12 != nullptr )
        {
          if ( gl_meshSplitEdge(v12) == 0 )
            goto LABEL_43;
          v12 = (uint32_t *)v12[3];
        }
        else
        {
          Edge = (uint32_t *)gl_meshMakeEdge(*((uint32_t *)a1 + 2));
          v12 = Edge;
          if ( Edge == nullptr || gl_meshSplice(Edge, Edge[1]) == 0 )
            goto LABEL_43;
        }
        *(uint32_t *)(v12[4] + 12) = v13;
        *(uint64_t *)(v12[4] + 16) = *(uint64_t *)v11;
        *(uint64_t *)(v12[4] + 24) = *((uint64_t *)v11 + 1);
        v14 = *((uint64_t *)v11 + 2);
        v11 += 28;
        *(uint64_t *)(v12[4] + 32) = v14;
        v15 = v12[1];
        v12[7] = 1;
        *(uint32_t *)(v15 + 28) = -1;
        *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(v12);
      }
      while ( v18 > v11 );
    }
    *((uint32_t *)a1 + 38) = 0;
    *((uint8_t *)a1 + 148) = 0;
  }
  gl_projectPolygon(a1);
  if ( gl_computeInterior(a1) == 0 )
    goto LABEL_43;
  v8 = *((gameswf::Self **)a1 + 2);
  if ( *((uint8_t *)a1 + 100) != 0 )
    goto LABEL_28;
  if ( *((uint8_t *)a1 + 121) != 0 )
    v9 = gl_meshSetWindingNumber(v8, 1, 1);
  else
    v9 = gl_meshTessellateInterior(*((uint32_t *)a1 + 2));
  if ( v9 == 0 )
    longjmp(env, 1);
  if ( *((char **)a1 + 32) != (char *)(uintptr_t)(&g4_noop_ret0)
    || *((char **)a1 + 35) != (char *)(uintptr_t)(&g4_noop_ret0)
    || *((char **)a1 + 34) != (char *)(uintptr_t)(&g4_noop_ret0)
    || *((char **)a1 + 33) != (char *)(uintptr_t)(&g4_noop_ret0)
    || *((void (**)())a1 + 739) != gl_noBeginData
    || *((void (**)())a1 + 742) != gl_noEndData
    || *((void (**)())a1 + 741) != gl_noVertexData
    || *((void (**)())a1 + 740) != gl_noEdgeFlagData )
  {
    if ( *((uint8_t *)a1 + 121) != 0 )
      gl_renderBoundary(a1, v8);
    else
      gl_renderMesh(a1, v8);
  }
  if ( *((char **)a1 + 36) == (char *)(intptr_t)((&g4_noop_ret0)) )
  {
LABEL_28:
    result = (GLUtesselator *)gl_meshDeleteMesh(v8);
    *((uint32_t *)a1 + 755) = 0;
    *((uint32_t *)a1 + 2) = 0;
  }
  else
  {
    gl_meshDiscardExterior(v8);
    (*((void (**)(gameswf::Self *))a1 + 36))(v8);
    *((uint32_t *)a1 + 2) = 0;
    *((uint32_t *)a1 + 755) = 0;
    return a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gluBeginPolygon  (binary VA: 0x1172220)
// Original: gluBeginPolygon
// ----------------------------------------------------------------------------
int gluBeginPolygon(GLUtesselator *a1)
{
  gluTessBeginPolygon(a1, nullptr);
  return gluTessBeginContour(a1);
}

// ----------------------------------------------------------------------------
// Function: gluNextContour  (binary VA: 0x1172260)
// Original: gluNextContour
// ----------------------------------------------------------------------------
int gluNextContour(GLUtesselator *a1)
{
  gluTessEndContour(a1);
  return gluTessBeginContour(a1);
}

// ----------------------------------------------------------------------------
// Function: gluEndPolygon  (binary VA: 0x11722a0)
// Original: gluEndPolygon
// ----------------------------------------------------------------------------
GLUtesselator * gluEndPolygon(GLUtesselator *a1)
{
  gluTessEndContour(a1);
  return gluTessEndPolygon(a1);
}

// ----------------------------------------------------------------------------
// Function: gl_meshTessellateMonoRegion  (binary VA: 0x11722e0)
// Original: __gl_meshTessellateMonoRegion
// ----------------------------------------------------------------------------
int gl_meshTessellateMonoRegion(int a1)
{
  uint32_t *i;
  int v2;
  double v3; // xmm0_8
  int v4;
  double v5; // xmm1_8
  bool v6;
  double v7; // xmm0_8
  double v8; // xmm1_8
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  double v13; // xmm0_8
  int v14;
  double v15; // xmm1_8
  int v16;
  int v17;
  int v18;
  double v19; // xmm1_8
  int v20;
  double v21; // xmm0_8
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  double v26; // xmm0_8
  int v27;
  double v28; // xmm1_8
  int result;
  int v30;

  for ( i = *(uint32_t **)(a1 + 8); ; i = *(uint32_t **)(i[2] + 4) )
  {
    v2 = i[4];
    v3 = *(double *)(v2 + 40);
    v4 = *(uint32_t *)(i[1] + 16);
    v5 = *(double *)(v4 + 40);
    if ( v3 <= v5 )
    {
      if ( v5 != v3 )
        goto LABEL_7;
      if ( *(double *)(v2 + 48) < *(double *)(v4 + 48) )
        break;
    }
  }
  v3 = *(double *)(v4 + 40);
LABEL_7:
  v6 = v5 == v3;
  if ( v5 <= v3 )
    goto LABEL_9;
  do
  {
    do
    {
      i = (uint32_t *)i[3];
      v2 = i[4];
      v7 = *(double *)(v2 + 40);
      v4 = *(uint32_t *)(i[1] + 16);
      v8 = *(double *)(v4 + 40);
      v6 = v8 == v7;
    }
    while ( v8 > v7 );
LABEL_9:
    ;
  }
  while ( v6 && *(double *)(v4 + 48) >= *(double *)(v2 + 48) );
  v9 = (uint32_t *)i[3];
  v10 = *(uint32_t **)(i[2] + 4);
  v11 = (uint32_t *)v10[3];
LABEL_11:
  while ( 2 )
  {
    if ( v10 != v9 )
    {
      v12 = v10[4];
      v13 = *(double *)(v12 + 40);
      v14 = *(uint32_t *)(i[1] + 16);
      v15 = *(double *)(v14 + 40);
      if ( v13 > v15 || v15 == v13 && *(double *)(v12 + 48) >= *(double *)(v14 + 48) )
      {
        v22 = v11;
        if ( i != v11 )
        {
          while ( 1 )
          {
            v24 = v11[1];
            v25 = v11[4];
            v26 = *(double *)(v25 + 40);
            v27 = *(uint32_t *)(v24 + 16);
            v28 = *(double *)(v27 + 40);
            if ( v26 <= v28 && (v28 != v26 || *(double *)(v25 + 48) < *(double *)(v27 + 48)) )
            {
              if ( gl_edgeSign(v10[4], *(uint32_t *)(v10[1] + 16), v27) > 0.0 )
                break;
              v22 = (uint32_t *)v10[3];
            }
            v23 = (int)(uintptr_t)(gl_meshConnect(v22, v10));
            if ( v23 == 0 )
              return 0;
            v10 = *(uint32_t **)(v23 + 4);
            v11 = (uint32_t *)v10[3];
            if ( v11 == i )
              break;
            v22 = (uint32_t *)v10[3];
          }
          v9 = (uint32_t *)i[3];
        }
        v10 = *(uint32_t **)(v10[2] + 4);
        v11 = (uint32_t *)v10[3];
        continue;
      }
      if ( i == v11 )
      {
        i = v9;
        goto LABEL_38;
      }
      while ( 1 )
      {
        v17 = *(uint32_t *)(i[2] + 4);
        v18 = *(uint32_t *)(v17 + 16);
        v19 = *(double *)(v18 + 40);
        v20 = *(uint32_t *)(*(uint32_t *)(v17 + 4) + 16);
        v21 = *(double *)(v20 + 40);
        if ( v21 <= v19 && (v19 != v21 || *(double *)(v20 + 48) < *(double *)(v18 + 48)) )
        {
          if ( gl_edgeSign(*(uint32_t *)(i[1] + 16), i[4], *(uint32_t *)(v17 + 16)) < 0.0 )
          {
            i = (uint32_t *)i[3];
            v11 = (uint32_t *)v10[3];
LABEL_38:
            v9 = (uint32_t *)i[3];
            goto LABEL_11;
          }
          v17 = *(uint32_t *)(i[2] + 4);
        }
        v16 = (int)(uintptr_t)(gl_meshConnect(i, v17));
        if ( v16 == 0 )
          return 0;
        i = *(uint32_t **)(v16 + 4);
        v11 = (uint32_t *)v10[3];
        if ( v11 == i )
        {
          i = (uint32_t *)i[3];
          goto LABEL_38;
        }
      }
    }
    break;
  }
  result = 1;
  if ( (uint32_t *)v11[3] != i )
  {
    do
    {
      v30 = (int)(uintptr_t)(gl_meshConnect(v11, v10));
      if ( v30 == 0 )
        return 0;
      v10 = *(uint32_t **)(v30 + 4);
      v11 = (uint32_t *)v10[3];
    }
    while ( (uint32_t *)v11[3] != i );
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gl_meshTessellateInterior  (binary VA: 0x1172560)
// Original: __gl_meshTessellateInterior
// ----------------------------------------------------------------------------
int gl_meshTessellateInterior(int a1)
{
  int v1;
  int v2;

  v1 = *(uint32_t *)(a1 + 60);
  if ( v1 == a1 + 60 )
    return 1;
  while ( 1 )
  {
    v2 = *(uint32_t *)v1;
    if ( *(uint8_t *)(v1 + 21) != 0 && gl_meshTessellateMonoRegion(v1) == 0 )
      break;
    v1 = v2;
    if ( v2 == a1 + 60 )
      return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gl_meshDiscardExterior  (binary VA: 0x11725c0)
// Original: __gl_meshDiscardExterior
// ----------------------------------------------------------------------------
gameswf::Self * gl_meshDiscardExterior(int a1)
{
  gameswf::Self *result;
  gameswf::Self *v2;

  result = *(gameswf::Self **)(a1 + 60);
  while ( result != (gameswf::Self *)(a1 + 60) )
  {
    v2 = *(gameswf::Self **)result;
    if ( *((uint8_t *)result + 21) != 0 )
    {
      result = *(gameswf::Self **)result;
    }
    else
    {
      gl_meshZapFace(result);
      result = v2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gl_meshSetWindingNumber  (binary VA: 0x1172610)
// Original: __gl_meshSetWindingNumber
// ----------------------------------------------------------------------------
int gl_meshSetWindingNumber(int a1, int a2, char a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  char v6;
  bool v7;
  int v8;
  uint32_t *v10;
  char v11;
  int v12;

  v3 = *(uint32_t **)(a1 + 84);
  v4 = (uint32_t *)(a1 + 84);
  if ( a3 != 0 )
  {
    while ( v3 != v4 )
    {
      v10 = (uint32_t *)*v3;
      v11 = *(uint8_t *)(v3[5] + 21);
      if ( *(uint8_t *)(*(uint32_t *)(v3[1] + 20) + 21) == v11 )
      {
        if ( gl_meshDelete(v3) == 0 )
          return 0;
        v3 = v10;
      }
      else
      {
        v7 = v11 == 0;
        v12 = -a2;
        if ( !v7 )
          v12 = a2;
        v3[7] = v12;
        v3 = v10;
      }
    }
  }
  else
  {
    while ( v3 != v4 )
    {
      v5 = (uint32_t *)*v3;
      v6 = *(uint8_t *)(v3[5] + 21);
      if ( *(uint8_t *)(*(uint32_t *)(v3[1] + 20) + 21) == v6 )
      {
        v3[7] = 0;
        v3 = v5;
      }
      else
      {
        v7 = v6 == 0;
        v8 = -a2;
        if ( !v7 )
          v8 = a2;
        v3[7] = v8;
        v3 = v5;
      }
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_11726D0  (binary VA: 0x11726d0)
// Original: sub_11726D0
// ----------------------------------------------------------------------------
int sub_11726D0(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a3, 12, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1172700  (binary VA: 0x1172700)
// Original: sub_1172700
// ----------------------------------------------------------------------------
int sub_1172700()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1172710  (binary VA: 0x1172710)
// Original: sub_1172710
// ----------------------------------------------------------------------------
int sub_1172710(int a1, int a2)
{
  G4_VCALL<void>(a2, 60, a1, 0);
  return 4 * (G4_VCALL<int>(a2, 64) != a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1172760  (binary VA: 0x1172760)
// Original: sub_1172760
// ----------------------------------------------------------------------------
int sub_1172760(int a1)
{
  G4_VCALL<void>(a1, 60, 0, 2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1172790  (binary VA: 0x1172790)
// Original: sub_1172790
// ----------------------------------------------------------------------------
int sub_1172790(int a1)
{
  return G4_VCALL<int>(a1, 64);
}

// ----------------------------------------------------------------------------
// Function: sub_11727B0  (binary VA: 0x11727b0)
// Original: sub_11727B0
// ----------------------------------------------------------------------------
bool sub_11727B0(int a1)
{
  return (*(uint8_t *)(a1 + 12) & 0x20) != 0;
}

// ----------------------------------------------------------------------------
// Function: sub_11727C0  (binary VA: 0x11727c0)
// Original: sub_11727C0
// ----------------------------------------------------------------------------
int sub_11727C0(uint32_t *a1)
{
  a1[4] = *a1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_11727D0  (binary VA: 0x11727d0)
// Original: sub_11727D0
// ----------------------------------------------------------------------------
int sub_11727D0(int a1)
{
  return *(uint32_t *)(a1 + 16);
}

// ----------------------------------------------------------------------------
// Function: sub_11727E0  (binary VA: 0x11727e0)
// Original: sub_11727E0
// ----------------------------------------------------------------------------
bool sub_11727E0(uint32_t *a1)
{
  return a1[4] >= *a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1172980  (binary VA: 0x1172980)
// Original: sub_1172980
// ----------------------------------------------------------------------------
int sub_1172980(gameswf::Self *a1)
{
  if ( a1 != nullptr )
  {
    (**(void (***)(gameswf::Self *))a1)(a1);
    gameswf::free_internal(a1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1172AF0  (binary VA: 0x1172af0)
// Original: sub_1172AF0
// ----------------------------------------------------------------------------
size_t sub_1172AF0(void *dest, int a2, uint32_t *a3)
{
  size_t n;
  int v4;

  n = a2;
  v4 = a3[4];
  if ( *a3 - v4 <= a2 )
    n = *a3 - v4;
  if ( n != 0 )
  {
    memcpy(dest, (const void *)(a3[2] + v4), n);
    v4 = a3[4];
  }
  a3[4] = n + v4;
  return n;
}

// ----------------------------------------------------------------------------
// Function: sub_1172B60  (binary VA: 0x1172b60)
// Original: sub_1172B60
// ----------------------------------------------------------------------------
size_t sub_1172B60(void *a1, size_t n, gameswf::MemBuf::Self *a3)
{
  size_t v3;
  int v4;
  int v5;
  size_t v7;
  void *src;

  v3 = n;
  v4 = *((uint32_t *)a3 + 4);
  v5 = v4 + n;
  if ( (int)(v4 + n - *(uint32_t *)a3) <= 0 )
  {
LABEL_11:
    memcpy((void *)(*((uint32_t *)a3 + 2) + v4), a1, n);
    *((uint32_t *)a3 + 4) += n;
    return v3;
  }
  if ( *((uint8_t *)a3 + 20) == 0 )
  {
    if ( v5 != *(uint32_t *)a3 )
    {
      if ( v5 > *((uint32_t *)a3 + 1) )
      {
        v7 = gameswf::MemBuf::capacity((gameswf::MemBuf::Self *)(v4 + n), (int)(uintptr_t)(src));
        gameswf::MemBuf::reserve(a3, v7);
        v4 = *((uint32_t *)a3 + 4);
      }
      *(uint32_t *)a3 = v5;
    }
    if ( v5 < v4 )
    {
      *((uint32_t *)a3 + 4) = v5;
      v4 = v5;
    }
    goto LABEL_11;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1172C10  (binary VA: 0x1172c10)
// Original: sub_1172C10
// ----------------------------------------------------------------------------
int sub_1172C10(gameswf::Self *a1)
{
  if ( a1 != nullptr )
  {
    gameswf::MemBuf::Destroy(a1);
    gameswf::free_internal(a1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1172C60  (binary VA: 0x1172c60)
// Original: sub_1172C60
// ----------------------------------------------------------------------------
bool sub_1172C60(glf::IOStream::Self *a1)
{
  return glf::IOStream::IsEof(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1172C90  (binary VA: 0x1172c90)
// Original: sub_1172C90
// ----------------------------------------------------------------------------
int sub_1172C90(FILE *stream)
{
  return 5 * (fclose(stream) == -1);
}

// ----------------------------------------------------------------------------
// Function: sub_1172CC0  (binary VA: 0x1172cc0)
// Original: sub_1172CC0
// ----------------------------------------------------------------------------
int sub_1172CC0(FILE *stream)
{
  return ftell(stream);
}

// ----------------------------------------------------------------------------
// Function: sub_1172CF0  (binary VA: 0x1172cf0)
// Original: sub_1172CF0
// ----------------------------------------------------------------------------
int sub_1172CF0(FILE *stream)
{
  return 4 * (fseek(stream, 0, 2) == -1);
}

// ----------------------------------------------------------------------------
// Function: sub_1172D30  (binary VA: 0x1172d30)
// Original: sub_1172D30
// ----------------------------------------------------------------------------
int sub_1172D30(int off, FILE *stream)
{
  clearerr(stream);
  return 4 * (fseek(stream, off, 0) == -1);
}

// ----------------------------------------------------------------------------
// Function: sub_1172D90  (binary VA: 0x1172d90)
// Original: sub_1172D90
// ----------------------------------------------------------------------------
size_t sub_1172D90(void *ptr, size_t n, FILE *s)
{
  return fwrite(ptr, 1u, n, s);
}

// ----------------------------------------------------------------------------
// Function: sub_1172DD0  (binary VA: 0x1172dd0)
// Original: sub_1172DD0
// ----------------------------------------------------------------------------
size_t sub_1172DD0(void *ptr, size_t n, FILE *stream)
{
  return fread(ptr, 1u, n, stream);
}

// ----------------------------------------------------------------------------
// Function: sub_1172E10  (binary VA: 0x1172e10)
// Original: sub_1172E10
// ----------------------------------------------------------------------------
char sub_1172E10(int a1, int *a2)
{
  char result;

  if ( a1 < 0 )
  {
    a2[4] = 0;
    return 4;
  }
  else
  {
    result = 4;
    if ( a1 <= *a2 )
    {
      a2[4] = a1;
      return 0;
    }
    else
    {
      a2[4] = *a2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1174F60  (binary VA: 0x1174f60)
// Original: sub_1174F60
// ----------------------------------------------------------------------------
gameswf::random::Generator::Self * sub_1174F60()
{
  return gameswf::random::Generator::Construct((gameswf::random::Generator::Self *)&unk_21158A0);
}

// ----------------------------------------------------------------------------
// Function: sub_11754C0  (binary VA: 0x11754c0)
// Original: sub_11754C0
// ----------------------------------------------------------------------------
int sub_11754C0(uint32_t *a1)
{
  int result;
  int v3;
  int v4;
  bool v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 4192u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);

LABEL_1:
  while ( a1[1042] == 0 )
  {
    a1[4] = (uint32_t)(uintptr_t)(&v6);
    a1[5] = 4096;
    while ( 1 )
    {
      if ( a1[2] == 0 )
      {
        v3 = (*(int (**)(int, int, uint32_t))(*a1 + 8))((int)(uintptr_t)(a1) + 69, 4096, *(uint32_t *)*a1);
        if ( v3 == 0 )
          goto LABEL_12;
        a1[1] = (uint32_t)(uintptr_t)((char *)a1 + 69);
        a1[2] = v3;
      }
      v4 = inflate(a1 + 1, 2);
      if ( v4 == 1 )
      {
        *((uint8_t *)a1 + 68) = 1;
        goto LABEL_12;
      }
      if ( v4 != 0 )
        break;
      if ( a1[5] == 0 )
      {
        a1[16] += 4096;
        goto LABEL_1;
      }
    }
    a1[1042] = 1;
LABEL_12:
    result = 4096 - a1[5] + a1[16];
    v5 = a1[5] == 4096;
    a1[16] = result;
    if ( v5 )
      return result;
  }
  return a1[16];
}

// ----------------------------------------------------------------------------
// Function: sub_11755C0  (binary VA: 0x11755c0)
// Original: sub_11755C0
// ----------------------------------------------------------------------------
int sub_11755C0(int a1, int *a2)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  enum : size_t {
    _g4_s0 = 4208u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  result = a2[16];
  if ( result > a1 )
  {
    a2[1042] = 0;
    *((uint8_t *)a2 + 68) = 0;
    if ( inflateReset(a2 + 1) != 0 )
    {
      a2[1042] = 1;
      result = a2[16];
    }
    else
    {
      v10 = *a2;
      a2[1] = 0;
      a2[2] = 0;
      a2[4] = 0;
      a2[5] = 0;
      (*(void (**)(int, uint32_t))(v10 + 16))(a2[15], *(uint32_t *)v10);
      a2[16] = 0;
      result = 0;
    }
  }
  do
  {
    if ( a1 <= result )
      break;
    v5 = a1 - result;
    if ( a1 - result >= 4096 )
      v5 = 4096;
    if ( a2[1042] != 0 )
      break;
    a2[4] = (int)(uintptr_t)(&v12);
    a2[5] = v5;
    v11 = (int)(uintptr_t)(a2) + 69;
    while ( 1 )
    {
      if ( a2[2] == 0 )
      {
        v6 = (*(int (**)(int, int, uint32_t))(*a2 + 8))(v11, 4096, *(uint32_t *)*a2);
        if ( v6 == 0 )
          goto LABEL_20;
        a2[2] = v6;
        a2[1] = v11;
      }
      v7 = inflate(a2 + 1, 2);
      if ( v7 == 1 )
      {
        *((uint8_t *)a2 + 68) = 1;
LABEL_20:
        v8 = a2[5];
        goto LABEL_15;
      }
      if ( v7 != 0 )
        break;
      if ( a2[5] == 0 )
      {
        v8 = 0;
        goto LABEL_15;
      }
    }
    a2[1042] = 1;
    v8 = a2[5];
LABEL_15:
    v9 = v5 - v8;
    result = v9 + a2[16];
    a2[16] = result;
  }
  while ( v9 != 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1176330  (binary VA: 0x1176330)
// Original: sub_1176330
// ----------------------------------------------------------------------------
int sub_1176330(int *a1, char **a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int i;
  int v12;
  char *v13;
  const char *s2;
  const char *s1;
  int v16;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char *v25;
  int v26;
  int v27;

  v2 = *a1;
  if ( *a1 == 0 )
    return -1;
  v25 = *a2;
  v27 = *((uint32_t *)*a2 + 4);
  if ( (uint8_t *)(v27 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v25 == -1 )
    {
      v18 = *((char **)v25 + 3);
      v19 = *((uint32_t *)v25 + 1) - 1;
    }
    else
    {
      v18 = v25 + 1;
      v19 = *v25 - 1;
    }
    v3 = 5381;
    v20 = 5381;
    if ( v19 > 0 )
    {
      do
      {
        --v19;
        v21 = 33 * v20;
        v22 = (uint8_t)v18[v19] + 32;
        if ( (uint8_t)(v18[v19] - 65) > 0x19u )
          v22 = (uint8_t)v18[v19];
        v20 = v21 ^ v22;
      }
      while ( v19 != 0 );
      v20 = v20 << 9 >> 9;
      v3 = v20;
    }
    *((uint32_t *)v25 + 4) = v20 & 0x7FFFFF | v27 & 0xFF800000;
    v2 = *a1;
  }
  else
  {
    v3 = v27 << 9 >> 9;
  }
  v4 = *(uint32_t *)(v2 + 4);
  v5 = v4 & v3;
  v6 = 16 * (v4 & v3);
  v7 = (int *)(v2 + v6 + 8);
  if ( *v7 == -2 )
    return -1;
  v8 = *(uint32_t *)(v2 + v6 + 12);
  if ( v5 != (v8 & v4) )
    return -1;
  v9 = v3;
  v10 = v5;
  v26 = v9;
  for ( i = v2; ; v8 = *(uint32_t *)(i + 16 * v10 + 12) )
  {
    if ( v8 == v26 )
    {
      v12 = v7[2];
      v13 = *a2;
      if ( (char *)v12 == *a2 )
        break;
      s2 = *v13 == -1 ? *((const char **)v13 + 3) : v13 + 1;
      s1 = *(uint8_t *)v12 == 0xFF ? *(const char **)(v12 + 12) : (const char *)(v12 + 1);
      v23 = i;
      v16 = strcmp(s1, s2);
      i = v23;
      if ( v16 == 0 )
        break;
    }
    v10 = *v7;
    if ( *v7 == -1 )
      break;
    v7 = (int *)(i + 16 * v10 + 8);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: sub_117ABD0  (binary VA: 0x117abd0)
// Original: sub_117ABD0
// ----------------------------------------------------------------------------
int sub_117ABD0(gameswf::hash<gameswf::StringPointer, bool, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *a1, int a2, uint8_t *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int i;
  int v19;
  int v20;
  const char *s2;
  const char *s1;
  int v23;
  int v24;
  char *v27;
  int v28;
  int v29;

  v3 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 == 0 )
    return gameswf::hash_gameswf_StringPointer_bo_ce8468::add(
             a1,
             a2,
             (int)(uintptr_t)(a3));
  v27 = *(char **)a2;
  v29 = *(uint32_t *)(*(uint32_t *)a2 + 16);
  if ( (uint8_t *)(v29 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v27 == -1 )
    {
      v11 = *((char **)v27 + 3);
      v12 = *((uint32_t *)v27 + 1) - 1;
    }
    else
    {
      v11 = v27 + 1;
      v12 = *v27 - 1;
    }
    v4 = 5381;
    v13 = 5381;
    if ( v12 > 0 )
    {
      do
      {
        --v12;
        v14 = 33 * v13;
        v15 = (uint8_t)v11[v12] + 32;
        if ( (uint8_t)(v11[v12] - 65) > 0x19u )
          v15 = (uint8_t)v11[v12];
        v13 = v14 ^ v15;
      }
      while ( v12 != 0 );
      v13 = v13 << 9 >> 9;
      v4 = v13;
    }
    *((uint32_t *)v27 + 4) = v13 & 0x7FFFFF | v29 & 0xFF800000;
    v3 = *(uint32_t *)a1;
  }
  else
  {
    v4 = v29 << 9 >> 9;
  }
  v5 = *(uint32_t *)(v3 + 4);
  v6 = v5 & v4;
  v7 = 16 * (v5 & v4);
  v8 = (int *)(v3 + v7 + 8);
  if ( *v8 == -2 )
    return gameswf::hash_gameswf_StringPointer_bo_ce8468::add(
             a1,
             a2,
             (int)(uintptr_t)(a3));
  v9 = *(uint32_t *)(v3 + v7 + 12);
  if ( v6 != (v9 & v5) )
    return gameswf::hash_gameswf_StringPointer_bo_ce8468::add(
             a1,
             a2,
             (int)(uintptr_t)(a3));
  v16 = v4;
  v17 = v6;
  v28 = v16;
  for ( i = v3; ; v9 = *(uint32_t *)(i + 16 * v17 + 12) )
  {
    if ( v9 == v28 )
    {
      v19 = v8[2];
      v20 = *(uint32_t *)a2;
      if ( v19 == *(uint32_t *)a2 )
        break;
      s2 = *(uint8_t *)v20 == 0xFF ? *(const char **)(v20 + 12) : (const char *)(v20 + 1);
      s1 = *(uint8_t *)v19 == 0xFF ? *(const char **)(v19 + 12) : (const char *)(v19 + 1);
      v24 = i;
      v23 = strcmp(s1, s2);
      i = v24;
      if ( v23 == 0 )
        break;
    }
    v17 = *v8;
    if ( *v8 == -1 )
      return gameswf::hash_gameswf_StringPointer_bo_ce8468::add(
               a1,
               a2,
               (int)(uintptr_t)(a3));
    v8 = (int *)(i + 16 * v17 + 8);
  }
  if ( v17 < 0 )
    return gameswf::hash_gameswf_StringPointer_bo_ce8468::add(
             a1,
             a2,
             (int)(uintptr_t)(a3));
  result = *a3;
  *(uint8_t *)(i + 16 * v17 + 20) = result;
  return result;
}


