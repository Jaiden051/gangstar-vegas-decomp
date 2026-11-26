#include "Core/Utils/DecompTypes.h"
#include "savemanager_internal.h"

// ----------------------------------------------------------------------------
// Function: th_decode_headerin  (binary VA: 0x1388270)
// Original: th_decode_headerin
// ----------------------------------------------------------------------------
int th_decode_headerin(int a1, void **a2, char **a3, uint32_t *a4)
{
  int v4;
  int v5;
  int v7;
  char v8;
  bool v9;
  bool v10; // cc
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  char *v16;
  char *v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint8_t *v24;
  int i;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  void **v31;
  uint8_t *v32;
  int v33;
  void **v34;
  int v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_s1[6];
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint8_t _g4_t_v49[48];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v36)) > _g4_s0 ? (12u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v38)) > _g4_s2 ? (12u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v39)) > _g4_s3 ? (12u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v40)) > _g4_s4 ? (20u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v41)) > _g4_s5 ? (20u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v42)) > _g4_s6 ? (20u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v43)) > _g4_s7 ? (24u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v44)) > _g4_s8 ? (24u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (38u + sizeof(_g4_t_s1)) > _g4_s9 ? (38u + sizeof(_g4_t_s1)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v46)) > _g4_s10 ? (44u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v47)) > _g4_s11 ? (48u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v48)) > _g4_s12 ? (52u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v49)) > _g4_s13 ? (60u + sizeof(_g4_t_v49)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 38u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);

  if ( a4 == nullptr )
    return -20;
  if ( a1 == 0 )
    return -1;
  oc_pack_readinit(v49, *a4, a4[1]);
  v4 = oc_pack_read(v49, 8);
  if ( (v4 & 0x80u) == 0 && *(uint32_t *)(a1 + 4) != 0 && a2[3] != nullptr )
  {
    v5 = 0;
    if ( *a3 != nullptr )
      return v5;
  }
  v36 = v4;
  s1[0] = oc_pack_read(v49, 8);
  s1[1] = oc_pack_read(v49, 8);
  s1[2] = oc_pack_read(v49, 8);
  s1[3] = oc_pack_read(v49, 8);
  s1[4] = oc_pack_read(v49, 8);
  s1[5] = oc_pack_read(v49, 8);
  v7 = memcmp(s1, "theora", 6u);
  v5 = -21;
  if ( v7 != 0 )
    return v5;
  if ( v36 == 129 )
  {
    if ( a2 != nullptr )
    {
      v5 = -20;
      if ( *(uint32_t *)(a1 + 4) == 0 || a2[3] != nullptr )
        return v5;
      v46 = oc_pack_read(v49, 8);
      v47 = oc_pack_read(v49, 8);
      v48 = oc_pack_read(v49, 8);
      v20 = oc_pack_read(v49, 8);
      v21 = -20;
      v41 = (v20 << 24) | v46 | (v48 << 16) | (v47 << 8);
      if ( v41 >= 0 )
      {
        v22 = oc_pack_bytes_left(v49);
        v21 = -20;
        if ( v22 >= v41 )
        {
          v24 = (uint8_t *)(malloc(v41 + 1));
          a2[3] = v24;
          if ( v24 != nullptr )
          {
            if ( v41 != 0 )
            {
              for ( i = v41; i != 0; --i )
                *v24++ = oc_pack_read(v49, 8);
              v24 = (uint8_t *)(a2[3]);
            }
            v24[v41] = 0;
            v46 = oc_pack_read(v49, 8);
            v47 = oc_pack_read(v49, 8);
            v48 = oc_pack_read(v49, 8);
            v26 = oc_pack_read(v49, 8);
            v27 = (v26 << 24) | v46 | (v48 << 16) | (v47 << 8);
            a2[2] = (void *)v27;
            if ( v27 > 0x1FFFFFFF || (signed int)(4 * v27) > oc_pack_bytes_left(v49) )
            {
              a2[2] = nullptr;
              v21 = -20;
            }
            else
            {
              v28 = (int)(uintptr_t)(a2[2]);
              a2[1] = malloc(4 * v28);
              v42 = 0;
              *a2 = malloc(4 * v28);
              if ( v28 <= 0 )
              {
LABEL_64:
                v35 = oc_pack_bytes_left(v49);
                v5 = 2;
                if ( v35 >= 0 )
                  return v5;
                v21 = -20;
              }
              else
              {
                while ( 1 )
                {
                  v43 = oc_pack_read(v49, 8);
                  v29 = oc_pack_read(v49, 8);
                  v30 = oc_pack_read(v49, 8) << 16;
                  v44 = (oc_pack_read(v49, 8) << 24) | v43 | v30 | (v29 << 8);
                  if ( v44 < 0 || oc_pack_bytes_left(v49) < v44 )
                    break;
                  *((uint32_t *)a2[1] + v42) = v44;
                  v31 = (void **)((char *)*a2 + 4 * v42);
                  *v31 = malloc(v44 + 1);
                  v32 = *((uint8_t **)*a2 + v42);
                  if ( v32 == nullptr )
                  {
                    a2[2] = (void *)v42;
                    v21 = -1;
                    goto LABEL_41;
                  }
                  v33 = v44;
                  v34 = a2;
                  if ( v44 != 0 )
                  {
                    do
                    {
                      --v33;
                      *v32++ = oc_pack_read(v49, 8);
                    }
                    while ( v33 != 0 );
                    v32 = *((uint8_t **)*a2 + v42);
                    v34 = a2;
                  }
                  ++v42;
                  v32[v44] = 0;
                  if ( v42 >= (int)(uintptr_t)(v34[2]) )
                    goto LABEL_64;
                }
                a2[2] = (void *)v42;
                v21 = -20;
              }
            }
          }
          else
          {
            v21 = -1;
          }
        }
      }
LABEL_41:
      v37 = v21;
      th_comment_clear(a2);
      return v37;
    }
    return -1;
  }
  if ( v36 == 130 )
  {
    if ( a3 != nullptr && a2 != nullptr )
    {
      v5 = -20;
      if ( *(uint32_t *)(a1 + 4) == 0 || a2[3] == nullptr || *a3 != nullptr )
        return v5;
      v16 = (char *)calloc(1u, 0x2C8u);
      v17 = v16;
      if ( v16 != nullptr )
      {
        v18 = v16 + 320;
        v19 = oc_quant_params_unpack(v49, v16 + 320);
        if ( v19 < 0 || (v19 = oc_huff_trees_unpack(v49, v17)) < 0 )
        {
          v39 = v19;
          oc_quant_params_clear(v18);
          oc_huff_trees_clear(v17);
          free(v17);
          return v39;
        }
        else
        {
          *a3 = v17;
          return 1;
        }
      }
    }
    return -1;
  }
  v5 = -20;
  if ( v36 != 128 || a4[2] == 0 || *(uint32_t *)(a1 + 4) != 0 )
    return v5;
  *(uint8_t *)a1 = oc_pack_read(v49, 8);
  *(uint8_t *)(a1 + 1) = oc_pack_read(v49, 8);
  v8 = oc_pack_read(v49, 8);
  v9 = *(uint8_t *)a1 == 3;
  v10 = *(uint8_t *)a1 <= 3u;
  *(uint8_t *)(a1 + 2) = v8;
  if ( !v10 || v9 && *(uint8_t *)(a1 + 1) > 2u )
  {
    v23 = -22;
    goto LABEL_43;
  }
  *(uint32_t *)(a1 + 4) = 16 * oc_pack_read(v49, 16);
  *(uint32_t *)(a1 + 8) = 16 * oc_pack_read(v49, 16);
  *(uint32_t *)(a1 + 12) = oc_pack_read(v49, 24);
  *(uint32_t *)(a1 + 16) = oc_pack_read(v49, 24);
  *(uint32_t *)(a1 + 20) = oc_pack_read(v49, 8);
  *(uint32_t *)(a1 + 24) = oc_pack_read(v49, 8);
  *(uint32_t *)(a1 + 28) = oc_pack_read(v49, 32);
  v11 = oc_pack_read(v49, 32);
  v12 = *(uint32_t *)(a1 + 4);
  *(uint32_t *)(a1 + 32) = v11;
  if ( v12 != 0 )
  {
    v13 = *(uint32_t *)(a1 + 8);
    if ( v13 != 0 && v12 >= *(uint32_t *)(a1 + 12) + *(uint32_t *)(a1 + 20) )
    {
      v14 = *(uint32_t *)(a1 + 16);
      v40 = *(uint32_t *)(a1 + 24);
      if ( v13 >= v14 + v40 && *(uint32_t *)(a1 + 28) != 0 && v11 != 0 )
      {
        *(uint32_t *)(a1 + 24) = v13 - v14 - v40;
        *(uint32_t *)(a1 + 36) = oc_pack_read(v49, 24);
        *(uint32_t *)(a1 + 40) = oc_pack_read(v49, 24);
        *(uint32_t *)(a1 + 44) = oc_pack_read(v49, 8);
        *(uint32_t *)(a1 + 52) = oc_pack_read(v49, 24);
        *(uint32_t *)(a1 + 56) = oc_pack_read(v49, 6);
        *(uint32_t *)(a1 + 60) = oc_pack_read(v49, 5);
        v15 = oc_pack_read(v49, 2);
        *(uint32_t *)(a1 + 48) = v15;
        if ( v15 != 1 && oc_pack_read(v49, 3) == 0 && (int)oc_pack_bytes_left(v49) >= 0 )
          return 3;
      }
    }
  }
  v23 = -20;
LABEL_43:
  v38 = v23;
  th_info_clear(a1);
  return v38;
}

// ----------------------------------------------------------------------------
// Function: th_setup_free  (binary VA: 0x1388ab0)
// Original: th_setup_free
// ----------------------------------------------------------------------------
void th_setup_free(char *ptr)
{
  if ( ptr != nullptr )
  {
    oc_quant_params_clear(ptr + 320);
    oc_huff_trees_clear(ptr);
    free(ptr);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1388B00  (binary VA: 0x1388b00)
// Original: sub_1388B00
// ----------------------------------------------------------------------------
uint8_t * sub_1388B00(uint8_t *a1, int a2, uint8_t *a3, int a4, int a5, signed int a6, uint32_t *a7, uint32_t *a8)
{
  int v9;
  uint8_t *result;
  uint8_t *i;
  int *v12;
  int v13;
  int v14;
  signed int v15;
  uint8_t *v16;
  typedef int _g4_t_v17;
  typedef signed int _g4_t_v18;
  typedef uint8_t *_g4_t_v19;
  typedef uint8_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t *_g4_t_v30;
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
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[12];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v24)) > _g4_s7 ? (36u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v25)) > _g4_s8 ? (40u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v26)) > _g4_s9 ? (44u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v27)) > _g4_s10 ? (48u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v28)) > _g4_s11 ? (52u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v29)) > _g4_s12 ? (56u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v30)) > _g4_s13 ? (60u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v31)) > _g4_s14 ? (64u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v32)) > _g4_s15 ? (76u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v33)) > _g4_s16 ? (80u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v34)) > _g4_s17 ? (84u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v35)) > _g4_s18 ? (88u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v36)) > _g4_s19 ? (92u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v37)) > _g4_s20 ? (96u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v38)) > _g4_s21 ? (100u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v39)) > _g4_s22 ? (104u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v40)) > _g4_s23 ? (108u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v41)) > _g4_s24 ? (112u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v42)) > _g4_s25 ? (116u + sizeof(_g4_t_v42)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 100u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 104u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 108u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 116u);

  v9 = 3 * a2;
  v19 = a1;
  v20 = &a1[v9];
  v29 = 8;
  v30 = a3;
  v28 = &a1[2 * a2 + a2 + v9];
  result = v42;
  for ( i = a3; ; i = v16 )
  {
    v12 = &v32;
    do
    {
      v13 = *i;
      i += a4;
      *v12++ = v13;
    }
    while ( v12 != (int *)v42 );
    v26 = v33;
    v31 = v32;
    v25 = v37;
    v23 = v34;
    v21 = v38;
    v24 = v39;
    v22 = v35;
    v14 = v36;
    v17 = v40;
    v18 = __builtin_abs(v35 - v34) + __builtin_abs(v33 - v32) + __builtin_abs(v34 - v33) + __builtin_abs(v36 - v35);
    v27 = v41;
    v15 = __builtin_abs(v37 - v38) + __builtin_abs(v38 - v39) + __builtin_abs(v39 - v40) + __builtin_abs(v40 - v41);
    *a7 += v18 <= 254 ? v18 - 255 + 255 : 255;
    *a8 += v15 <= 254 ? v15 - 255 + 255 : 255;
    if ( a6 <= v15 || a6 <= v18 || v25 - v14 >= a5 || a5 <= v14 - v25 )
    {
      *v19 = v26;
      v19[a2] = v23;
      v19[2 * a2] = v22;
      *v20 = v14;
      v20[a2] = v25;
      v20[2 * a2] = v21;
      *v28 = v24;
      v28[a2] = v17;
    }
    else
    {
      *v19 = (v14 + v22 + v23 + 3 * v31 + 2 * v26 + 4) >> 3;
      v19[a2] = (v25 + v14 + v22 + v26 + 2 * (v23 + v31) + 4) >> 3;
      v19[2 * a2] = (v21 + v25 + v14 + v23 + v31 + v26 + 2 * v22 + 4) >> 3;
      *v20 = (v24 + v21 + v25 + v22 + v23 + v26 + 2 * v14 + 4) >> 3;
      v20[a2] = (v17 + v24 + v21 + v14 + v22 + v23 + 2 * v25 + 4) >> 3;
      v20[2 * a2] = (v27 + v17 + v24 + v25 + v14 + v22 + 2 * v21 + 4) >> 3;
      *v28 = (v17 + v21 + v14 + v25 + 2 * v24 + 2 * v27 + 4) >> 3;
      v28[a2] = (v24 + v21 + v25 + 3 * v27 + 2 * v17 + 4) >> 3;
    }
    ++v19;
    v16 = v30 + 1;
    ++v20;
    ++v28;
    if ( --v29 == 0 )
      break;
    ++v30;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1388EA0  (binary VA: 0x1388ea0)
// Original: sub_1388EA0
// ----------------------------------------------------------------------------
uint8_t * sub_1388EA0(uint8_t *result, int a2, int a3, signed int a4, uint32_t *a5)
{
  int j;
  int v6;
  signed int v7;
  signed int v8;
  int v10;
  int v11;
  int i;
  int v13;
  int v14;
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
  int v27;
  int v28;
  int v29;

  for ( i = 8; i != 0; --i )
  {
    for ( j = 0; j != 10; ++j )
      *(&v20 + j) = (uint8_t)result[j - 1];
    v14 = v21;
    v15 = v25;
    v17 = v22;
    v11 = v20;
    v19 = v26;
    v16 = v27;
    v18 = v23;
    v13 = v28;
    v6 = v24;
    v10 = v29;
    v8 = __builtin_abs(v21 - v20) + __builtin_abs(v22 - v21) + __builtin_abs(v23 - v22) + __builtin_abs(v24 - v23);
    v7 = __builtin_abs(v26 - v27) + __builtin_abs(v25 - v26) + __builtin_abs(v27 - v28) + __builtin_abs(v28 - v29);
    *a5 += v8 <= 254 ? v8 - 255 + 255 : 255;
    a5[1] += v7 <= 254 ? v7 - 255 + 255 : 255;
    if ( a4 > v7 && a4 > v8 && v15 - v6 < a3 && a3 > v6 - v15 )
    {
      *result = (v6 + v18 + v17 + 3 * v11 + 2 * v14 + 4) >> 3;
      result[1] = (v15 + v6 + v18 + v14 + 2 * (v11 + v17) + 4) >> 3;
      result[2] = (v19 + v15 + v6 + v17 + v14 + v11 + 2 * v18 + 4) >> 3;
      result[3] = (v16 + v19 + v15 + v18 + v17 + v14 + 2 * v6 + 4) >> 3;
      result[4] = (v13 + v16 + v19 + v6 + v18 + v17 + 2 * v15 + 4) >> 3;
      result[5] = (v10 + v13 + v16 + v15 + v6 + v18 + 2 * v19 + 4) >> 3;
      result[6] = (v13 + v19 + v6 + v15 + 2 * v16 + 2 * v10 + 4) >> 3;
      result[7] = (v16 + v19 + v15 + 3 * v10 + 2 * v13 + 4) >> 3;
    }
    result += a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1389150  (binary VA: 0x1389150)
// Original: sub_1389150
// ----------------------------------------------------------------------------
uint8_t * sub_1389150(uint8_t *a1, int a2, char a3, int a4, int a5, int a6)
{
  uint8_t v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t v12;
  int v13;
  uint8_t v14;
  int v15;
  uint8_t v16;
  int v17;
  uint8_t v18;
  int v19;
  uint8_t v20;
  int v21;
  uint8_t v22;
  int v23;
  uint8_t v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint8_t *v29;
  uint8_t v30;
  uint8_t *v31;
  uint8_t v32; // di
  uint8_t *v33;
  uint8_t v34;
  uint8_t *v35;
  uint8_t v36;
  uint8_t *v37;
  uint8_t v38;
  uint8_t *v39;
  uint8_t *v40;
  uint8_t v41;
  uint8_t v42;
  uint8_t v43;
  uint8_t v44;
  int v45;
  int v46;
  int v47;
  int v48;
  uint8_t *v49;
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
  uint8_t *v60;
  int v61;
  int v62;
  int v63;
  uint8_t v64; // si
  int v65;
  int v66;
  uint8_t *result;
  int i;
  uint8_t v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  uint8_t v110;
  bool v111;
  uint8_t v112;
  uint8_t v113;
  uint8_t v114;
  uint8_t v115;
  uint8_t v116;
  uint8_t v117;
  uint8_t v118;
  uint8_t *v119;
  uint8_t *v120;
  uint8_t v121;
  uint8_t v122;
  int v123;
  uint8_t v125;
  uint8_t *v126;
  int v127;
  uint8_t v128;
  uint8_t v129;
  uint8_t v130;
  uint8_t v131;
  uint8_t v132;
  uint8_t v133;
  uint8_t v134;
  int v135;
  int v136;
  int v137;
  int v138;
  uint8_t v139;
  uint8_t v140;
  uint8_t v141;
  int v142;
  uint8_t v143;
  uint8_t v144;
  uint8_t v145;
  uint8_t v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  uint8_t v161;
  int v162;
  int v163;
  char *v164;
  uint8_t *v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  uint8_t v171;
  uint8_t v172;
  uint8_t v173;
  uint8_t v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  uint8_t *v184;
  char v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  uint32_t v193[140];

  v119 = a1;
  v148 = 3 * a4 + ((uint8_t)byte_1D0E9C5[a6] < 3 * a4 ? (uint8_t)byte_1D0E9C5[a6] - 3 * a4 : 0);
  v111 = (a3 & 8) == 0;
  v120 = &a1[-((a3 & 4) == 0 ? a2 : 0)];
  v183 = a4 + 32;
  v112 = *v120;
  v132 = v120[1];
  v139 = v120[2];
  v143 = v120[3];
  v171 = v120[4];
  v185 = byte_1D0E9C7[a6];
  v128 = v120[5];
  v114 = v120[6];
  v136 = 0;
  v116 = v120[7];
  v6 = *v120;
  while ( 1 )
  {
    v125 = *a1;
    v8 = a5;
    v9 = v183 - (__builtin_abs(*a1 - v6) << v185);
    v10 = 8 * v136;
    if ( v9 >= -64 )
    {
      v11 = v9 + (v148 < v9 ? v148 - v9 : 0);
      v8 = -(-v11 & -(v11 > 0));
    }
    v12 = a1[1];
    *(&v186 + 8 * v136) = v8;
    v121 = v12;
    v13 = a5;
    v150 = v183 - (__builtin_abs(v12 - v132) << v185);
    if ( v150 >= -64 )
    {
      v151 = v150 + (v148 < v150 ? v148 - v150 : 0);
      v13 = -(-v151 & -(v151 > 0));
    }
    v14 = a1[2];
    *(&v186 + v10 + 1) = v13;
    v133 = v14;
    v15 = a5;
    v152 = v183 - (__builtin_abs(v14 - v139) << v185);
    if ( v152 >= -64 )
    {
      v153 = v152 + (v148 < v152 ? v148 - v152 : 0);
      v15 = -(-v153 & -(v153 > 0));
    }
    v16 = a1[3];
    *(&v186 + v10 + 2) = v15;
    v140 = v16;
    v17 = a5;
    v154 = v183 - (__builtin_abs(v16 - v143) << v185);
    if ( v154 >= -64 )
    {
      v155 = v154 + (v148 < v154 ? v148 - v154 : 0);
      v17 = -(-v155 & -(v155 > 0));
    }
    v18 = a1[4];
    *(&v186 + v10 + 3) = v17;
    v144 = v18;
    v19 = a5;
    v156 = v183 - (__builtin_abs(v18 - v171) << v185);
    if ( v156 >= -64 )
      v19 = -(-(v156 + (v148 < v156 ? v148 - v156 : 0)) & -(v156 + (v148 < v156 ? v148 - v156 : 0) > 0));
    v20 = a1[5];
    *(&v186 + v10 + 4) = v19;
    v172 = v20;
    v21 = a5;
    v157 = v183 - (__builtin_abs(v20 - v128) << v185);
    if ( v157 >= -64 )
    {
      v158 = v157 + (v148 < v157 ? v148 - v157 : 0);
      v21 = -(-v158 & -(v158 > 0));
    }
    v22 = a1[6];
    *(&v186 + v10 + 5) = v21;
    v129 = v22;
    v23 = a5;
    v159 = v183 - (__builtin_abs(v22 - v114) << v185);
    if ( v159 >= -64 )
    {
      v160 = v159 + (v148 < v159 ? v148 - v159 : 0);
      v23 = -(-v160 & -(v160 > 0));
    }
    v24 = a1[7];
    *(&v186 + v10 + 6) = v23;
    v161 = v24;
    v25 = v183 - (__builtin_abs(v24 - v116) << v185);
    v26 = v10 + 7;
    v27 = a5;
    if ( v25 >= -64 )
    {
      v28 = (v148 < v25 ? v148 - v25 : 0) + v25;
      v27 = -(-v28 & -(v28 > 0));
    }
    *(&v186 + v26) = v27;
    if ( v136 == 8 )
      break;
    v7 = v111 | (v136++ <= 6);
    a1 += a2 & -v7;
    v116 = v161;
    v114 = v129;
    v128 = v172;
    v171 = v144;
    v143 = v140;
    v139 = v133;
    v6 = v125;
    v132 = v121;
  }
  v137 = 0;
  v29 = &v119[-((a3 & 1) == 0)];
  v30 = *v29;
  v31 = &v29[a2];
  v110 = v30;
  v32 = *v31;
  v33 = &v31[a2];
  v34 = *v33;
  v35 = &v33[a2];
  v145 = v34;
  v36 = *v35;
  v37 = &v35[a2];
  v173 = v36;
  v38 = *v37;
  v39 = &v37[a2];
  v130 = v38;
  v117 = *v39;
  v113 = v39[a2];
  v115 = v39[2 * a2];
  v40 = v119;
  v41 = v110;
  v126 = v119;
  while ( 1 )
  {
    v122 = *v40;
    v45 = a5;
    v46 = v183 - (__builtin_abs(*v40 - v41) << v185);
    v47 = 8 * v137;
    if ( v46 >= -64 )
    {
      v48 = (v148 < v46 ? v148 - v46 : 0) + v46;
      v45 = -(-v48 & -(v48 > 0));
    }
    v49 = &v126[a2];
    v193[8 * v137 + 65] = v45;
    v134 = v126[a2];
    v50 = a5;
    v162 = v183 - (__builtin_abs(v134 - v32) << v185);
    if ( v162 >= -64 )
    {
      v163 = v162 + (v148 < v162 ? v148 - v162 : 0);
      v50 = -(-v163 & -(v163 > 0));
    }
    v193[v47 + 66] = v50;
    v141 = v49[a2];
    v51 = v183 - (__builtin_abs(v141 - v145) << v185);
    v52 = a5;
    if ( v51 >= -64 )
    {
      v53 = (v148 < v51 ? v148 - v51 : 0) + v51;
      v52 = -(-v53 & -(v53 > 0));
    }
    v193[v47 + 67] = v52;
    v164 = (char *)&v49[a2 + a2];
    v146 = *v164;
    v54 = v183 - (__builtin_abs((uint8_t)*v164 - v173) << v185);
    v55 = a5;
    if ( v54 >= -64 )
    {
      v56 = (v148 < v54 ? v148 - v54 : 0) + v54;
      v55 = -(-v56 & -(v56 > 0));
    }
    v193[v47 + 68] = v55;
    v165 = (uint8_t *)&v164[a2];
    v174 = *v165;
    v57 = v183 - (__builtin_abs(*v165 - v130) << v185);
    v58 = a5;
    if ( v57 >= -64 )
    {
      v59 = (v148 < v57 ? v148 - v57 : 0) + v57;
      v58 = -(-v59 & -(v59 > 0));
    }
    v60 = &v165[a2];
    v193[v47 + 69] = v58;
    v131 = v165[a2];
    v61 = a5;
    v166 = v183 - (__builtin_abs(v131 - v117) << v185);
    if ( v166 >= -64 )
    {
      v167 = v166 + (v148 < v166 ? v148 - v166 : 0);
      v61 = -(-v167 & -(v167 > 0));
    }
    v193[v47 + 70] = v61;
    v118 = v60[a2];
    v62 = a5;
    v168 = v183 - (__builtin_abs(v118 - v113) << v185);
    if ( v168 >= -64 )
    {
      v169 = v168 + (v148 < v168 ? v148 - v168 : 0);
      v62 = -(-v169 & -(v169 > 0));
    }
    v193[v47 + 71] = v62;
    v63 = v47 + 7;
    v64 = v60[2 * a2];
    v65 = a5;
    v66 = v183 - (__builtin_abs(v64 - v115) << v185);
    if ( v66 >= -64 )
      v65 = -(-((v148 < v66 ? v148 - v66 : 0) + v66) & -((v148 < v66 ? v148 - v66 : 0) + v66 > 0));
    v193[v63 + 65] = v65;
    if ( v137 == 8 )
      break;
    v42 = ((a3 & 2) == 0) | (v137++ <= 6);
    v126 += v42;
    v113 = v118;
    v115 = v64;
    v43 = v131;
    v130 = v174;
    v117 = v43;
    v44 = v146;
    v145 = v141;
    v173 = v44;
    v40 = v126;
    v32 = v134;
    v41 = v122;
  }
  v170 = v186;
  v184 = &v119[a2];
  v149 = v193[0];
  v138 = v187;
  v123 = v189;
  v135 = v190;
  v127 = v188;
  v142 = v191;
  v147 = v192;
  result = v119;
  for ( i = 0; ; v184 += v111 || i - 1 <= 5 ? a2 : 0 )
  {
    v70 = v193[i++ + 65];
    v175 = v70 * v110 + v170 * v112 + 64;
    v71 = 128 - v70 - v170 - *(&v186 + 8 * i);
    v170 = *(&v186 + 8 * i);
    v72 = v193[i + 72];
    v73 = v175 + v170 * *v184 + v72 * result[1] + (v71 - v72) * *result;
    v74 = 0;
    v75 = v73 >> 7;
    if ( v75 >= 0 )
    {
      LOBYTE(v74) = v75 > 255;
      v74 = v75 | -v74;
    }
    *v119 = v74;
    v176 = *result * v72 + v138 * v120[1] + 64;
    v76 = 128 - v72 - v138 - *(&v187 + 8 * i);
    v138 = *(&v187 + 8 * i);
    v77 = v193[i + 80];
    v78 = v176 + v138 * v184[1] + v77 * result[2] + (v76 - v77) * result[1];
    v79 = 0;
    v80 = v78 >> 7;
    if ( v80 >= 0 )
    {
      LOBYTE(v79) = v80 > 255;
      v79 = v80 | -v79;
    }
    v119[1] = v79;
    v177 = result[1] * v77 + v127 * v120[2] + 64;
    v81 = 128 - v77 - v127 - *(&v188 + 8 * i);
    v127 = *(&v188 + 8 * i);
    v82 = v193[i + 88];
    v83 = v177 + v127 * v184[2] + v82 * result[3] + (v81 - v82) * result[2];
    v84 = 0;
    v85 = v83 >> 7;
    if ( v85 >= 0 )
    {
      LOBYTE(v84) = v85 > 255;
      v84 = v85 | -v84;
    }
    v119[2] = v84;
    v178 = result[2] * v82 + v123 * v120[3] + 64;
    v86 = 128 - v82 - v123 - *(&v189 + 8 * i);
    v123 = *(&v189 + 8 * i);
    v87 = v193[i + 96];
    v88 = v178 + v123 * v184[3] + v87 * result[4] + (v86 - v87) * result[3];
    v89 = 0;
    v90 = v88 >> 7;
    if ( v90 >= 0 )
    {
      LOBYTE(v89) = v90 > 255;
      v89 = v90 | -v89;
    }
    v119[3] = v89;
    v179 = result[3] * v87 + v135 * v120[4] + 64;
    v91 = 128 - v87 - v135 - *(&v190 + 8 * i);
    v135 = *(&v190 + 8 * i);
    v92 = v193[i + 104];
    v93 = v179 + v135 * v184[4] + v92 * result[5] + (v91 - v92) * result[4];
    v94 = 0;
    v95 = v93 >> 7;
    if ( v95 >= 0 )
    {
      LOBYTE(v94) = v95 > 255;
      v94 = v95 | -v94;
    }
    v119[4] = v94;
    v180 = result[4] * v92 + v142 * v120[5] + 64;
    v96 = 128 - v92 - v142 - *(&v191 + 8 * i);
    v142 = *(&v191 + 8 * i);
    v97 = v193[i + 112];
    v98 = v180 + v142 * v184[5] + v97 * result[6] + (v96 - v97) * result[5];
    v99 = 0;
    v100 = v98 >> 7;
    if ( v100 >= 0 )
    {
      LOBYTE(v99) = v100 > 255;
      v99 = v100 | -v99;
    }
    v119[5] = v99;
    v181 = result[5] * v97 + v147 * v120[6] + 64;
    v101 = 128 - v97 - v147 - v193[8 * i - 1];
    v147 = v193[8 * i - 1];
    v102 = v193[i + 120];
    v103 = v181 + v147 * v184[6] + v102 * result[7] + (v101 - v102) * result[6];
    v104 = 0;
    v105 = v103 >> 7;
    if ( v105 >= 0 )
    {
      LOBYTE(v104) = v105 > 255;
      v104 = v105 | -v104;
    }
    v119[6] = v104;
    v182 = v102 * result[6] + v149 * v120[7] + 64;
    v106 = 128 - v102 - v149 - v193[8 * i];
    v149 = v193[8 * i];
    v107 = v182 + v149 * v184[7] + v193[i + 128] * result[-((a3 & 2) != 0) + 8] + (v106 - v193[i + 128]) * result[7];
    v108 = 0;
    v109 = v107 >> 7;
    if ( v109 >= 0 )
    {
      LOBYTE(v108) = v109 > 255;
      v108 = v109 | -v108;
    }
    v119[7] = v108;
    if ( i == 8 )
      break;
    v119 += a2;
    v120 = result;
    v110 = v184[-((a3 & 1) == 0)];
    v69 = *result;
    result = v184;
    v112 = v69;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1389F60  (binary VA: 0x1389f60)
// Original: sub_1389F60
// ----------------------------------------------------------------------------
int sub_1389F60(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = oc_pack_read1(a1);
  v2 = 0;
  if ( v1 != 0 )
  {
    v3 = oc_pack_read1(a1);
    v2 = 1;
    if ( v3 != 0 )
    {
      v4 = oc_pack_read1(a1);
      v2 = 2;
      if ( v4 != 0 )
      {
        v5 = oc_pack_read1(a1);
        v2 = 3;
        if ( v5 != 0 )
        {
          v6 = oc_pack_read1(a1);
          v2 = 4;
          if ( v6 != 0 )
          {
            v7 = oc_pack_read1(a1);
            v2 = 5;
            if ( v7 != 0 )
              return 7 - (oc_pack_read1(a1) == 0);
          }
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_138A000  (binary VA: 0x138a000)
// Original: sub_138A000
// ----------------------------------------------------------------------------
int sub_138A000(int a1)
{
  return oc_pack_read(a1, 3);
}

// ----------------------------------------------------------------------------
// Function: sub_138A030  (binary VA: 0x138a030)
// Original: sub_138A030
// ----------------------------------------------------------------------------
int sub_138A030(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int result;

  v1 = oc_pack_read(a1, 3);
  switch ( v1 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = 1;
      break;
    case 2:
      result = -1;
      break;
    case 3:
    case 4:
      v4 = v1 - 1;
      v5 = oc_pack_read1(a1);
      goto LABEL_3;
    default:
      v2 = 1 << (v1 - 3);
      v3 = oc_pack_read(a1, v1 - 2);
      v4 = (v3 >> 1) + v2;
      v5 = v3 & 1;
LABEL_3:
      result = -v5 ^ (v4 - v5);
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_138A0E0  (binary VA: 0x138a0e0)
// Original: sub_138A0E0
// ----------------------------------------------------------------------------
int sub_138A0E0(int a1)
{
  int v1;

  v1 = oc_pack_read(a1, 6);
  return -(v1 & 1) ^ ((v1 >> 1) - (v1 & 1));
}

// ----------------------------------------------------------------------------
// Function: sub_138A120  (binary VA: 0x138a120)
// Original: sub_138A120
// ----------------------------------------------------------------------------
int sub_138A120(int a1)
{
  int v2;
  int v4;
  int v5;

  v2 = 1;
  if ( oc_pack_read1(a1) != 0 )
  {
    v4 = oc_pack_read(a1, 2);
    v2 = v4 + 2;
    if ( (v4 & 2) != 0 )
    {
      if ( (v4 & 1) != 0 )
      {
        v5 = oc_pack_read(a1, 3);
        if ( (v5 & 4) != 0 )
        {
          if ( (v5 & 2) != 0 )
          {
            if ( (v5 & 1) != 0 )
              return oc_pack_read(a1, 12) + 34;
            else
              return oc_pack_read(a1, 4) + 18;
          }
          else
          {
            return oc_pack_read(a1, 2) + 4 * (v5 & 1) + 10;
          }
        }
        else
        {
          return v5 + 6;
        }
      }
      else
      {
        return oc_pack_read1(a1) + 4;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: th_decode_alloc  (binary VA: 0x138a210)
// Original: th_decode_alloc
// ----------------------------------------------------------------------------
uint32_t * th_decode_alloc(int a1, uint32_t *a2)
{
  uint32_t *v2;
  void *v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint16_t *v10;
  int v11;
  int v12;
  uint16_t *v13;
  int v14;
  int v15;
  int v16;
  uint16_t *v17;
  int v18;
  int v19;
  int v20;
  uint16_t *v21;
  uint32_t *ptr;

  if ( a2 != nullptr && a1 != 0 )
  {
    v2 = (uint32_t *)(malloc(0xD2D0u));
    ptr = v2;
    if ( v2 != nullptr && oc_state_init(v2, a1, 3) >= 0 )
    {
      if ( (int)oc_huff_trees_copy(ptr + 12878, a2) >= 0 )
      {
        v3 = malloc(129 * ptr[54]);
        ptr[13342] = (uint32_t)(uintptr_t)(v3);
        if ( v3 != nullptr )
        {
          v4 = 0;
          v5 = ptr + 184;
          v6 = ptr + 568;
          do
          {
            *v5 = (uint32_t)(uintptr_t)(&v6[v4]);
            v5[1] = (uint32_t)(uintptr_t)(&v6[v4 + 32]);
            v5[2] = (uint32_t)(uintptr_t)(&v6[v4 + 64]);
            v5[3] = (uint32_t)(uintptr_t)(&v6[v4 + 96]);
            v5[4] = (uint32_t)(uintptr_t)(&v6[v4 + 128]);
            v7 = (int)(uintptr_t)(&v6[v4 + 160]);
            v4 += 192;
            v5[5] = v7;
            v5 += 6;
          }
          while ( v4 != 12288 );
          oc_dequant_tables_init(ptr + 184, ptr + 13346, a2 + 80);
          v8 = ptr;
          v9 = 0;
          do
          {
            v10 = (uint16_t *)v8[184];
            ++v9;
            v11 = v10[17] + v10[12] + v10[18];
            v12 = v10[24];
            v13 = (uint16_t *)v8[188];
            v14 = v12 + v11;
            v15 = v13[17] + v13[12] + v13[18];
            v16 = v13[24];
            v17 = (uint16_t *)v8[190];
            v18 = *(uint16_t *)(v8[186] + 34)
                + *(uint16_t *)(v8[186] + 24)
                + *(uint16_t *)(v8[186] + 36)
                + *(uint16_t *)(v8[186] + 48)
                + 2 * v14
                + v16
                + v15;
            v19 = v17[17] + v17[12] + v17[18];
            v20 = v17[24];
            v21 = (uint16_t *)v8[192];
            v8[13410] = -((*(uint16_t *)(v8[194] + 48)
                         + *(uint16_t *)(v8[194] + 34)
                         + *(uint16_t *)(v8[194] + 24)
                         + *(uint16_t *)(v8[194] + 36)
                         + v18
                         + 2 * (v20 + v19)
                         + v21[24]
                         + v21[17]
                         + v21[12]
                         + v21[18]) >> 11);
            ++v8;
          }
          while ( v9 != 64 );
          ptr[12856] = a2[144];
          ptr[12857] = a2[145];
          ptr[12858] = a2[146];
          ptr[12859] = a2[147];
          ptr[12860] = a2[148];
          ptr[12861] = a2[149];
          ptr[12862] = a2[150];
          ptr[12863] = a2[151];
          ptr[12864] = a2[152];
          ptr[12865] = a2[153];
          ptr[12866] = a2[154];
          ptr[12867] = a2[155];
          ptr[12868] = a2[156];
          ptr[12869] = a2[157];
          ptr[12870] = a2[158];
          ptr[12871] = a2[159];
          ptr[13345] = 0;
          ptr[13474] = 0;
          ptr[13475] = 0;
          ptr[13476] = 0;
          ptr[13490] = 0;
          ptr[13491] = 0;
          ptr[178] = 0;
          ptr[179] = 0;
          return ptr;
        }
        oc_huff_trees_clear(ptr + 12878);
      }
      oc_state_clear(ptr);
    }
    free(ptr);
    return nullptr;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: th_decode_free  (binary VA: 0x138a580)
// Original: th_decode_free
// ----------------------------------------------------------------------------
void th_decode_free(void **ptr)
{
  if ( ptr != nullptr )
  {
    free(ptr[13476]);
    free(ptr[13475]);
    free(ptr[13474]);
    free(ptr[13342]);
    oc_huff_trees_clear(ptr + 12878);
    oc_state_clear(ptr);
    free(ptr);
  }
}

// ----------------------------------------------------------------------------
// Function: th_decode_ctl  (binary VA: 0x138a610)
// Original: th_decode_ctl
// ----------------------------------------------------------------------------
int th_decode_ctl(int a1, int a2, uint32_t *a3, int a4)
{
  int result;
  int v6;
  int v8;
  unsigned int v9;
  uint64_t v10; // 0:esi.4,4:edi.4
  uint64_t v11; // 0:esi.4,4:edi.4
  int64_t v12; // 0:esi.4,4:edi.4

  switch ( a2 )
  {
    case 1:
      if ( a3 != nullptr && a1 != 0 )
      {
        result = -10;
        if ( a4 == 4 )
        {
          *a3 = 7;
          return 0;
        }
        return result;
      }
      return -1;
    case 3:
      if ( a3 == nullptr || a1 == 0 )
        return -1;
      result = -10;
      if ( a4 == 4 && *a3 <= 7u )
      {
        *(uint32_t *)(a1 + 53380) = *a3;
        return 0;
      }
      break;
    case 5:
      if ( a3 == nullptr || a1 == 0 )
        return -1;
      result = -10;
      if ( a4 == 8 )
      {
        HIDWORD(v10) = a3[1];
        LODWORD(v10) = *a3;
        v8 = *a3;
        v9 = HIDWORD(v10);
        if ( (v10 & 0x8000000000000000LL) == 0LL )
        {
          v6 = *(uint32_t *)(a1 + 60);
          *(uint64_t *)(a1 + 720) = v10;
          LODWORD(v11) = v10 >> v6;
          HIDWORD(v11) = SHIDWORD(v10) >> v6;
          if ( (v6 & 0x20) != 0 )
          {
            LODWORD(v11) = HIDWORD(v11);
            SHIDWORD(v11) >>= 31;
          }
          v12 = v11 - *(uint8_t *)(a1 + 729);
          *(uint64_t *)(a1 + 704) = v12;
          *(uint64_t *)(a1 + 712) = __PAIR64__((((1 << v6) - 1) >> 31) & v9, v8 & (unsigned int)((1 << v6) - 1)) + v12;
          return 0;
        }
      }
      break;
    case 7:
      if ( a3 == nullptr || a1 == 0 )
        return -1;
      result = -10;
      if ( a4 == 8 )
      {
        *(uint32_t *)(a1 + 53960) = *a3;
        *(uint32_t *)(a1 + 53964) = a3[1];
        return 0;
      }
      break;
    default:
      return -23;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: th_decode_packetin  (binary VA: 0x138a7c0)
// Original: th_decode_packetin
// ----------------------------------------------------------------------------
int th_decode_packetin(int a1, uint32_t *a2, int64_t *a3)
{
  int v3;
  int v4;
  int v5;
  int64_t v6; // rax
  int64_t v7;
  int v8;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  char v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int i;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  uint8_t *v24;
  char v25;
  int v26;
  int v27;
  uint8_t *v28;
  char v29;
  int v30;
  uint8_t *v31;
  char v32;
  int v33;
  uint8_t *v34;
  char v35;
  int v36;
  uint8_t *v37;
  char v38;
  int v39;
  int v40;
  uint8_t *v41;
  char v42;
  int v43;
  uint8_t *v44;
  char v45;
  int v46;
  uint8_t *v47;
  char v48;
  int v49;
  uint8_t *v50;
  char v51;
  int v52;
  int v53;
  uint8_t *v54;
  char v55;
  int v56;
  uint8_t *v57;
  char v58;
  int v59;
  uint8_t *v60;
  char v61;
  int v62;
  uint8_t *v63;
  char v64;
  int *v65;
  int v66;
  uint8_t *v67;
  char v68;
  int v69;
  uint8_t *v70;
  char v71;
  int v72;
  uint8_t *v73;
  char v74;
  int v75;
  int v76;
  int k;
  int v78;
  __m128i *v79;
  int m;
  __m128i *v81;
  __m128i v82;
  int v83;
  int v84;
  uint16_t *v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  unsigned int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int *v102;
  int n;
  int v104;
  int v105;
  int v106;
  void *v107;
  unsigned int *v108;
  void *v109;
  int v110;
  int v111;
  int v112;
  bool v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  unsigned int v120;
  unsigned int v121;
  uint8_t *v122;
  unsigned int v123;
  unsigned int v124;
  int v125;
  int v126;
  int v127;
  char v128;
  int v129;
  int j;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  uint32_t *v138;
  int v139;
  int v140;
  int (*v141)(int);
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  char v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  uint8_t *v181;
  bool v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int *v191;
  int v192;
  int64_t v193; // rax
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  uint32_t *v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int ii;
  int v212;
  int v213;
  uint32_t *v214;
  uint32_t *v215;
  uint32_t *v216;
  int v217;
  int v218;
  int v219;
  int v220;
  uint32_t *v221;
  void *v222;
  uint32_t *v223;
  int v224;
  int v225;
  int v226;
  uint8_t *v227;
  int v228;
  int v229;
  int v230;
  int *v231;
  int16_t v232; // si
  int v233;
  int v234;
  int v235;
  int v236;
  unsigned int v237;
  unsigned int v238;
  int v239;
  int16_t v240; // di
  int v241;
  int v242;
  int mm;
  int v244;
  int v245;
  int v246;
  int v247;
  int16_t v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  unsigned int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  unsigned int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  char *v266;
  int v267;
  char *v268;
  int v269;
  uint32_t *v270;
  int v271;
  unsigned int v272;
  int v273;
  int v274;
  char *v275;
  uint32_t *v276;
  int v277;
  int v278;
  int v279;
  uint8_t *v280;
  int v281;
  int v282;
  int v283;
  int v284;
  int v285;
  bool v286;
  char v287; // si
  int v288;
  unsigned int v289;
  int v290;
  int v291;
  int v292;
  int jj;
  uint32_t *v294;
  int16_t v295;
  void *v296;
  void *v297;
  size_t v298;
  void *v299;
  unsigned int v300;
  unsigned int v301;
  int v302;
  typedef int _g4_t_v303;
  typedef int _g4_t_v304;
  typedef uint32_t *_g4_t_v305;
  typedef int _g4_t_v306;
  typedef unsigned int _g4_t_v307;
  typedef int64_t _g4_t_v308;
  typedef void *_g4_t_v309;
  typedef int _g4_t_v310;
  typedef unsigned int _g4_t_v311;
  typedef int _g4_t_v312;
  typedef int _g4_t_v313;
  typedef int _g4_t_v314;
  typedef int _g4_t_v315;
  typedef int _g4_t_v316;
  typedef int _g4_t_v317;
  typedef int _g4_t_v318;
  typedef int _g4_t_v319;
  typedef int _g4_t_v320;
  typedef int _g4_t_v321;
  typedef int _g4_t_v322;
  typedef int64_t _g4_t_v323;
  typedef int64_t _g4_t_v324;
  typedef uint32_t *_g4_t_v325;
  typedef int _g4_t_v326;
  typedef uint16_t **_g4_t_v327;
  typedef int _g4_t_v328;
  typedef int _g4_t_v329;
  typedef int _g4_t_v330;
  typedef bool _g4_t_v331;
  typedef int _g4_t_v332;
  typedef int _g4_t_v333;
  typedef int _g4_t_v334;
  typedef int _g4_t_v335;
  typedef char _g4_t_v336;
  typedef int _g4_t_v337;
  typedef int _g4_t_v338;
  typedef int _g4_t_v339;
  typedef int _g4_t_v340;
  typedef uint32_t *_g4_t_v341;
  typedef int _g4_t_v342;
  typedef int _g4_t_v343;
  typedef int _g4_t_v344;
  typedef uint8_t _g4_t_v345;
  typedef int _g4_t_v346;
  typedef int _g4_t_v347;
  typedef int _g4_t_v348;
  typedef int _g4_t_v349;
  typedef uint8_t *_g4_t_v350;
  typedef unsigned int _g4_t_v351;
  typedef int _g4_t_v352;
  typedef uint8_t *_g4_t_v353;
  typedef char _g4_t_v354;
  typedef char _g4_t_v355;
  typedef char _g4_t_v356;
  typedef char _g4_t_v357;
  typedef int _g4_t_v358;
  typedef int _g4_t_v359;
  typedef int *_g4_t_v360;
  typedef int _g4_t_v361;
  typedef int _g4_t_v362;
  typedef int _g4_t_v363;
  typedef int _g4_t_v364;
  typedef bool _g4_t_v365;
  typedef signed int _g4_t_v366;
  typedef uint8_t *_g4_t_v367;
  typedef int *_g4_t_v368;
  typedef int _g4_t_v369;
  typedef int _g4_t_v370;
  typedef int _g4_t_v371;
  typedef int _g4_t_v372;
  typedef int _g4_t_v373;
  typedef char *_g4_t_v374;
  typedef uint32_t *_g4_t_v375;
  typedef void *_g4_t_v376;
  typedef int _g4_t_v377;
  typedef int (*_g4_t_v378)(int, int);
  typedef int _g4_t_v379;
  typedef int _g4_t_v380;
  typedef char *_g4_t_v381;
  typedef int _g4_t_v382;
  typedef int _g4_t_v383;
  typedef int _g4_t_v384;
  typedef int _g4_t_v385;
  typedef char *_g4_t_v386;
  typedef uint16_t *_g4_t_v387;
  typedef uint16_t *_g4_t_v388;
  typedef uint8_t *_g4_t_v389;
  typedef int _g4_t_v390;
  typedef int _g4_t_v391;
  typedef int _g4_t_kk;
  typedef uint32_t *_g4_t_v393;
  typedef int _g4_t_v394;
  typedef int _g4_t_v395;
  typedef unsigned int *_g4_t_v396;
  typedef int _g4_t_v397;
  typedef int _g4_t_v398;
  typedef uint64_t *_g4_t_v399;
  typedef int _g4_t_v400;
  typedef int _g4_t_v401;
  typedef uint32_t *_g4_t_v402;
  typedef int _g4_t_v403;
  typedef int _g4_t_v404;
  typedef int _g4_t_v405;
  typedef int _g4_t_v406;
  typedef int _g4_t_v407;
  typedef int _g4_t_v408;
  typedef int _g4_t_v409;
  typedef uint32_t *_g4_t_v410;
  typedef int _g4_t_v411;
  typedef int _g4_t_v412;
  typedef int _g4_t_v413;
  typedef int _g4_t_v414;
  typedef int _g4_t_v415;
  typedef int _g4_t_v416;
  typedef unsigned int _g4_t_v417;
  typedef int _g4_t_v418;
  typedef int _g4_t_v419;
  typedef int _g4_t_v420;
  typedef int *_g4_t_v421;
  typedef int _g4_t_v422;
  typedef int _g4_t_v423;
  typedef uint64_t *_g4_t_v424;
  typedef int _g4_t_v425;
  typedef unsigned int _g4_t_v426;
  typedef int _g4_t_v427;
  typedef int _g4_t_v428;
  typedef int _g4_t_v429;
  typedef int _g4_t_v430;
  typedef int _g4_t_v431;
  typedef int _g4_t_v432;
  typedef char *_g4_t_v433;
  typedef int _g4_t_v434;
  typedef uint8_t *_g4_t_v435;
  typedef int _g4_t_v436;
  typedef int _g4_t_v437;
  typedef int *_g4_t_v438;
  typedef int _g4_t_v439;
  typedef int _g4_t_v440;
  typedef int _g4_t_v441;
  typedef int _g4_t_v442;
  typedef int _g4_t_v443;
  typedef int _g4_t_v444;
  typedef int _g4_t_v445;
  typedef int _g4_t_v446;
  typedef unsigned int _g4_t_v447;
  typedef uint32_t *_g4_t_v448;
  typedef int _g4_t_v449;
  typedef unsigned int _g4_t_v450;
  typedef unsigned int _g4_t_v451;
  typedef int _g4_t_v452;
  typedef int _g4_t_v453;
  typedef bool _g4_t_v454;
  typedef uint8_t *_g4_t_v455;
  typedef int _g4_t_v456;
  typedef int _g4_t_v457;
  typedef int _g4_t_v458;
  typedef int _g4_t_v459;
  typedef unsigned int _g4_t_v460;
  typedef unsigned int _g4_t_v461;
  typedef int _g4_t_v462;
  typedef int (*_g4_t_v463)(int);
  typedef int *_g4_t_v464;
  typedef int _g4_t_v465;
  typedef int _g4_t_v466;
  typedef int _g4_t_v467;
  typedef int _g4_t_v468;
  typedef int _g4_t_v469;
  typedef uint8_t *_g4_t_v470;
  typedef uint32_t *_g4_t_v471;
  typedef int _g4_t_v472;
  typedef int _g4_t_v473;
  typedef uint8_t *_g4_t_v474;
  typedef int _g4_t_v475;
  typedef int _g4_t_v476;
  typedef int _g4_t_v477;
  typedef unsigned int _g4_t_v478;
  typedef int _g4_t_v479;
  typedef char *_g4_t_v480;
  typedef int (*_g4_t_v481)(int);
  typedef int _g4_t_v482;
  typedef int _g4_t_v483;
  typedef char _g4_t_v484;
  typedef int _g4_t_v485;
  typedef int _g4_t_v486;
  typedef int _g4_t_v487;
  typedef int _g4_t_v488;
  typedef uint8_t *_g4_t_v489;
  typedef uint32_t *_g4_t_v490;
  typedef int *_g4_t_v491;
  typedef unsigned int _g4_t_v492;
  typedef int _g4_t_v493;
  typedef int _g4_t_v494;
  typedef int _g4_t_v495;
  typedef int _g4_t_v496;
  typedef unsigned int _g4_t_v497;
  typedef uint8_t *_g4_t_v498;
  typedef int _g4_t_v499;
  typedef int _g4_t_v500;
  typedef char _g4_t_v501;
  typedef char _g4_t_v502;
  typedef int _g4_t_v503;
  typedef int *_g4_t_v504;
  typedef int _g4_t_v505;
  typedef int _g4_t_v506;
  typedef uint8_t *_g4_t_v507;
  typedef uint16_t _g4_t_v508[3];
  typedef int _g4_t_v509;
  typedef int _g4_t_v510;
  typedef uint8_t _g4_t_v511[44];
  typedef int _g4_t_v512;
  typedef uint16_t _g4_t_v513[124];
  typedef int _g4_t_v514;
  typedef int _g4_t_v515;
  typedef uint64_t _g4_t_v516[96];
  typedef uint64_t _g4_t_v517[320];
  typedef int _g4_t_v518;
  typedef int _g4_t_v519;
  typedef int _g4_t_v520;
  typedef int _g4_t_v521;
  typedef int _g4_t_v522;
  typedef int _g4_t_v523;
  typedef uint64_t _g4_t_v524[12];
  typedef uint32_t _g4_t_v525[9];
  typedef int _g4_t_v526;
  typedef bool _g4_t_v527;
  typedef int _g4_t_v528;
  enum : size_t {
    _g4_s0 = 4240u,
    _g4_s1 = (0u + sizeof(_g4_t_v303)) > _g4_s0 ? (0u + sizeof(_g4_t_v303)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v304)) > _g4_s1 ? (8u + sizeof(_g4_t_v304)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v305)) > _g4_s2 ? (8u + sizeof(_g4_t_v305)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v306)) > _g4_s3 ? (12u + sizeof(_g4_t_v306)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v307)) > _g4_s4 ? (52u + sizeof(_g4_t_v307)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v308)) > _g4_s5 ? (56u + sizeof(_g4_t_v308)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v309)) > _g4_s6 ? (72u + sizeof(_g4_t_v309)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v310)) > _g4_s7 ? (72u + sizeof(_g4_t_v310)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v311)) > _g4_s8 ? (72u + sizeof(_g4_t_v311)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v312)) > _g4_s9 ? (72u + sizeof(_g4_t_v312)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v313)) > _g4_s10 ? (72u + sizeof(_g4_t_v313)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v314)) > _g4_s11 ? (72u + sizeof(_g4_t_v314)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v315)) > _g4_s12 ? (72u + sizeof(_g4_t_v315)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v316)) > _g4_s13 ? (72u + sizeof(_g4_t_v316)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v317)) > _g4_s14 ? (72u + sizeof(_g4_t_v317)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v318)) > _g4_s15 ? (72u + sizeof(_g4_t_v318)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v319)) > _g4_s16 ? (72u + sizeof(_g4_t_v319)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v320)) > _g4_s17 ? (72u + sizeof(_g4_t_v320)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v321)) > _g4_s18 ? (72u + sizeof(_g4_t_v321)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v322)) > _g4_s19 ? (84u + sizeof(_g4_t_v322)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v323)) > _g4_s20 ? (96u + sizeof(_g4_t_v323)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v324)) > _g4_s21 ? (104u + sizeof(_g4_t_v324)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v325)) > _g4_s22 ? (140u + sizeof(_g4_t_v325)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v326)) > _g4_s23 ? (144u + sizeof(_g4_t_v326)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v327)) > _g4_s24 ? (148u + sizeof(_g4_t_v327)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v328)) > _g4_s25 ? (152u + sizeof(_g4_t_v328)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v329)) > _g4_s26 ? (156u + sizeof(_g4_t_v329)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v330)) > _g4_s27 ? (160u + sizeof(_g4_t_v330)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v331)) > _g4_s28 ? (164u + sizeof(_g4_t_v331)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v332)) > _g4_s29 ? (164u + sizeof(_g4_t_v332)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v333)) > _g4_s30 ? (168u + sizeof(_g4_t_v333)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v334)) > _g4_s31 ? (168u + sizeof(_g4_t_v334)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v335)) > _g4_s32 ? (172u + sizeof(_g4_t_v335)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v336)) > _g4_s33 ? (176u + sizeof(_g4_t_v336)) : _g4_s33,
    _g4_s35 = (180u + sizeof(_g4_t_v337)) > _g4_s34 ? (180u + sizeof(_g4_t_v337)) : _g4_s34,
    _g4_s36 = (180u + sizeof(_g4_t_v338)) > _g4_s35 ? (180u + sizeof(_g4_t_v338)) : _g4_s35,
    _g4_s37 = (184u + sizeof(_g4_t_v339)) > _g4_s36 ? (184u + sizeof(_g4_t_v339)) : _g4_s36,
    _g4_s38 = (184u + sizeof(_g4_t_v340)) > _g4_s37 ? (184u + sizeof(_g4_t_v340)) : _g4_s37,
    _g4_s39 = (188u + sizeof(_g4_t_v341)) > _g4_s38 ? (188u + sizeof(_g4_t_v341)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v342)) > _g4_s39 ? (188u + sizeof(_g4_t_v342)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v343)) > _g4_s40 ? (192u + sizeof(_g4_t_v343)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v344)) > _g4_s41 ? (196u + sizeof(_g4_t_v344)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v345)) > _g4_s42 ? (200u + sizeof(_g4_t_v345)) : _g4_s42,
    _g4_s44 = (200u + sizeof(_g4_t_v346)) > _g4_s43 ? (200u + sizeof(_g4_t_v346)) : _g4_s43,
    _g4_s45 = (204u + sizeof(_g4_t_v347)) > _g4_s44 ? (204u + sizeof(_g4_t_v347)) : _g4_s44,
    _g4_s46 = (208u + sizeof(_g4_t_v348)) > _g4_s45 ? (208u + sizeof(_g4_t_v348)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v349)) > _g4_s46 ? (216u + sizeof(_g4_t_v349)) : _g4_s46,
    _g4_s48 = (216u + sizeof(_g4_t_v350)) > _g4_s47 ? (216u + sizeof(_g4_t_v350)) : _g4_s47,
    _g4_s49 = (220u + sizeof(_g4_t_v351)) > _g4_s48 ? (220u + sizeof(_g4_t_v351)) : _g4_s48,
    _g4_s50 = (220u + sizeof(_g4_t_v352)) > _g4_s49 ? (220u + sizeof(_g4_t_v352)) : _g4_s49,
    _g4_s51 = (220u + sizeof(_g4_t_v353)) > _g4_s50 ? (220u + sizeof(_g4_t_v353)) : _g4_s50,
    _g4_s52 = (224u + sizeof(_g4_t_v354)) > _g4_s51 ? (224u + sizeof(_g4_t_v354)) : _g4_s51,
    _g4_s53 = (224u + sizeof(_g4_t_v355)) > _g4_s52 ? (224u + sizeof(_g4_t_v355)) : _g4_s52,
    _g4_s54 = (224u + sizeof(_g4_t_v356)) > _g4_s53 ? (224u + sizeof(_g4_t_v356)) : _g4_s53,
    _g4_s55 = (224u + sizeof(_g4_t_v357)) > _g4_s54 ? (224u + sizeof(_g4_t_v357)) : _g4_s54,
    _g4_s56 = (224u + sizeof(_g4_t_v358)) > _g4_s55 ? (224u + sizeof(_g4_t_v358)) : _g4_s55,
    _g4_s57 = (224u + sizeof(_g4_t_v359)) > _g4_s56 ? (224u + sizeof(_g4_t_v359)) : _g4_s56,
    _g4_s58 = (224u + sizeof(_g4_t_v360)) > _g4_s57 ? (224u + sizeof(_g4_t_v360)) : _g4_s57,
    _g4_s59 = (228u + sizeof(_g4_t_v361)) > _g4_s58 ? (228u + sizeof(_g4_t_v361)) : _g4_s58,
    _g4_s60 = (228u + sizeof(_g4_t_v362)) > _g4_s59 ? (228u + sizeof(_g4_t_v362)) : _g4_s59,
    _g4_s61 = (228u + sizeof(_g4_t_v363)) > _g4_s60 ? (228u + sizeof(_g4_t_v363)) : _g4_s60,
    _g4_s62 = (228u + sizeof(_g4_t_v364)) > _g4_s61 ? (228u + sizeof(_g4_t_v364)) : _g4_s61,
    _g4_s63 = (228u + sizeof(_g4_t_v365)) > _g4_s62 ? (228u + sizeof(_g4_t_v365)) : _g4_s62,
    _g4_s64 = (228u + sizeof(_g4_t_v366)) > _g4_s63 ? (228u + sizeof(_g4_t_v366)) : _g4_s63,
    _g4_s65 = (228u + sizeof(_g4_t_v367)) > _g4_s64 ? (228u + sizeof(_g4_t_v367)) : _g4_s64,
    _g4_s66 = (232u + sizeof(_g4_t_v368)) > _g4_s65 ? (232u + sizeof(_g4_t_v368)) : _g4_s65,
    _g4_s67 = (232u + sizeof(_g4_t_v369)) > _g4_s66 ? (232u + sizeof(_g4_t_v369)) : _g4_s66,
    _g4_s68 = (232u + sizeof(_g4_t_v370)) > _g4_s67 ? (232u + sizeof(_g4_t_v370)) : _g4_s67,
    _g4_s69 = (236u + sizeof(_g4_t_v371)) > _g4_s68 ? (236u + sizeof(_g4_t_v371)) : _g4_s68,
    _g4_s70 = (236u + sizeof(_g4_t_v372)) > _g4_s69 ? (236u + sizeof(_g4_t_v372)) : _g4_s69,
    _g4_s71 = (236u + sizeof(_g4_t_v373)) > _g4_s70 ? (236u + sizeof(_g4_t_v373)) : _g4_s70,
    _g4_s72 = (236u + sizeof(_g4_t_v374)) > _g4_s71 ? (236u + sizeof(_g4_t_v374)) : _g4_s71,
    _g4_s73 = (236u + sizeof(_g4_t_v375)) > _g4_s72 ? (236u + sizeof(_g4_t_v375)) : _g4_s72,
    _g4_s74 = (240u + sizeof(_g4_t_v376)) > _g4_s73 ? (240u + sizeof(_g4_t_v376)) : _g4_s73,
    _g4_s75 = (240u + sizeof(_g4_t_v377)) > _g4_s74 ? (240u + sizeof(_g4_t_v377)) : _g4_s74,
    _g4_s76 = (240u + sizeof(_g4_t_v378)) > _g4_s75 ? (240u + sizeof(_g4_t_v378)) : _g4_s75,
    _g4_s77 = (240u + sizeof(_g4_t_v379)) > _g4_s76 ? (240u + sizeof(_g4_t_v379)) : _g4_s76,
    _g4_s78 = (240u + sizeof(_g4_t_v380)) > _g4_s77 ? (240u + sizeof(_g4_t_v380)) : _g4_s77,
    _g4_s79 = (244u + sizeof(_g4_t_v381)) > _g4_s78 ? (244u + sizeof(_g4_t_v381)) : _g4_s78,
    _g4_s80 = (244u + sizeof(_g4_t_v382)) > _g4_s79 ? (244u + sizeof(_g4_t_v382)) : _g4_s79,
    _g4_s81 = (244u + sizeof(_g4_t_v383)) > _g4_s80 ? (244u + sizeof(_g4_t_v383)) : _g4_s80,
    _g4_s82 = (244u + sizeof(_g4_t_v384)) > _g4_s81 ? (244u + sizeof(_g4_t_v384)) : _g4_s81,
    _g4_s83 = (244u + sizeof(_g4_t_v385)) > _g4_s82 ? (244u + sizeof(_g4_t_v385)) : _g4_s82,
    _g4_s84 = (244u + sizeof(_g4_t_v386)) > _g4_s83 ? (244u + sizeof(_g4_t_v386)) : _g4_s83,
    _g4_s85 = (248u + sizeof(_g4_t_v387)) > _g4_s84 ? (248u + sizeof(_g4_t_v387)) : _g4_s84,
    _g4_s86 = (248u + sizeof(_g4_t_v388)) > _g4_s85 ? (248u + sizeof(_g4_t_v388)) : _g4_s85,
    _g4_s87 = (248u + sizeof(_g4_t_v389)) > _g4_s86 ? (248u + sizeof(_g4_t_v389)) : _g4_s86,
    _g4_s88 = (248u + sizeof(_g4_t_v390)) > _g4_s87 ? (248u + sizeof(_g4_t_v390)) : _g4_s87,
    _g4_s89 = (248u + sizeof(_g4_t_v391)) > _g4_s88 ? (248u + sizeof(_g4_t_v391)) : _g4_s88,
    _g4_s90 = (248u + sizeof(_g4_t_kk)) > _g4_s89 ? (248u + sizeof(_g4_t_kk)) : _g4_s89,
    _g4_s91 = (248u + sizeof(_g4_t_v393)) > _g4_s90 ? (248u + sizeof(_g4_t_v393)) : _g4_s90,
    _g4_s92 = (248u + sizeof(_g4_t_v394)) > _g4_s91 ? (248u + sizeof(_g4_t_v394)) : _g4_s91,
    _g4_s93 = (252u + sizeof(_g4_t_v395)) > _g4_s92 ? (252u + sizeof(_g4_t_v395)) : _g4_s92,
    _g4_s94 = (252u + sizeof(_g4_t_v396)) > _g4_s93 ? (252u + sizeof(_g4_t_v396)) : _g4_s93,
    _g4_s95 = (252u + sizeof(_g4_t_v397)) > _g4_s94 ? (252u + sizeof(_g4_t_v397)) : _g4_s94,
    _g4_s96 = (252u + sizeof(_g4_t_v398)) > _g4_s95 ? (252u + sizeof(_g4_t_v398)) : _g4_s95,
    _g4_s97 = (252u + sizeof(_g4_t_v399)) > _g4_s96 ? (252u + sizeof(_g4_t_v399)) : _g4_s96,
    _g4_s98 = (252u + sizeof(_g4_t_v400)) > _g4_s97 ? (252u + sizeof(_g4_t_v400)) : _g4_s97,
    _g4_s99 = (256u + sizeof(_g4_t_v401)) > _g4_s98 ? (256u + sizeof(_g4_t_v401)) : _g4_s98,
    _g4_s100 = (256u + sizeof(_g4_t_v402)) > _g4_s99 ? (256u + sizeof(_g4_t_v402)) : _g4_s99,
    _g4_s101 = (256u + sizeof(_g4_t_v403)) > _g4_s100 ? (256u + sizeof(_g4_t_v403)) : _g4_s100,
    _g4_s102 = (256u + sizeof(_g4_t_v404)) > _g4_s101 ? (256u + sizeof(_g4_t_v404)) : _g4_s101,
    _g4_s103 = (256u + sizeof(_g4_t_v405)) > _g4_s102 ? (256u + sizeof(_g4_t_v405)) : _g4_s102,
    _g4_s104 = (256u + sizeof(_g4_t_v406)) > _g4_s103 ? (256u + sizeof(_g4_t_v406)) : _g4_s103,
    _g4_s105 = (256u + sizeof(_g4_t_v407)) > _g4_s104 ? (256u + sizeof(_g4_t_v407)) : _g4_s104,
    _g4_s106 = (256u + sizeof(_g4_t_v408)) > _g4_s105 ? (256u + sizeof(_g4_t_v408)) : _g4_s105,
    _g4_s107 = (256u + sizeof(_g4_t_v409)) > _g4_s106 ? (256u + sizeof(_g4_t_v409)) : _g4_s106,
    _g4_s108 = (256u + sizeof(_g4_t_v410)) > _g4_s107 ? (256u + sizeof(_g4_t_v410)) : _g4_s107,
    _g4_s109 = (256u + sizeof(_g4_t_v411)) > _g4_s108 ? (256u + sizeof(_g4_t_v411)) : _g4_s108,
    _g4_s110 = (256u + sizeof(_g4_t_v412)) > _g4_s109 ? (256u + sizeof(_g4_t_v412)) : _g4_s109,
    _g4_s111 = (256u + sizeof(_g4_t_v413)) > _g4_s110 ? (256u + sizeof(_g4_t_v413)) : _g4_s110,
    _g4_s112 = (260u + sizeof(_g4_t_v414)) > _g4_s111 ? (260u + sizeof(_g4_t_v414)) : _g4_s111,
    _g4_s113 = (260u + sizeof(_g4_t_v415)) > _g4_s112 ? (260u + sizeof(_g4_t_v415)) : _g4_s112,
    _g4_s114 = (260u + sizeof(_g4_t_v416)) > _g4_s113 ? (260u + sizeof(_g4_t_v416)) : _g4_s113,
    _g4_s115 = (260u + sizeof(_g4_t_v417)) > _g4_s114 ? (260u + sizeof(_g4_t_v417)) : _g4_s114,
    _g4_s116 = (260u + sizeof(_g4_t_v418)) > _g4_s115 ? (260u + sizeof(_g4_t_v418)) : _g4_s115,
    _g4_s117 = (264u + sizeof(_g4_t_v419)) > _g4_s116 ? (264u + sizeof(_g4_t_v419)) : _g4_s116,
    _g4_s118 = (264u + sizeof(_g4_t_v420)) > _g4_s117 ? (264u + sizeof(_g4_t_v420)) : _g4_s117,
    _g4_s119 = (264u + sizeof(_g4_t_v421)) > _g4_s118 ? (264u + sizeof(_g4_t_v421)) : _g4_s118,
    _g4_s120 = (264u + sizeof(_g4_t_v422)) > _g4_s119 ? (264u + sizeof(_g4_t_v422)) : _g4_s119,
    _g4_s121 = (264u + sizeof(_g4_t_v423)) > _g4_s120 ? (264u + sizeof(_g4_t_v423)) : _g4_s120,
    _g4_s122 = (264u + sizeof(_g4_t_v424)) > _g4_s121 ? (264u + sizeof(_g4_t_v424)) : _g4_s121,
    _g4_s123 = (264u + sizeof(_g4_t_v425)) > _g4_s122 ? (264u + sizeof(_g4_t_v425)) : _g4_s122,
    _g4_s124 = (268u + sizeof(_g4_t_v426)) > _g4_s123 ? (268u + sizeof(_g4_t_v426)) : _g4_s123,
    _g4_s125 = (268u + sizeof(_g4_t_v427)) > _g4_s124 ? (268u + sizeof(_g4_t_v427)) : _g4_s124,
    _g4_s126 = (268u + sizeof(_g4_t_v428)) > _g4_s125 ? (268u + sizeof(_g4_t_v428)) : _g4_s125,
    _g4_s127 = (268u + sizeof(_g4_t_v429)) > _g4_s126 ? (268u + sizeof(_g4_t_v429)) : _g4_s126,
    _g4_s128 = (268u + sizeof(_g4_t_v430)) > _g4_s127 ? (268u + sizeof(_g4_t_v430)) : _g4_s127,
    _g4_s129 = (268u + sizeof(_g4_t_v431)) > _g4_s128 ? (268u + sizeof(_g4_t_v431)) : _g4_s128,
    _g4_s130 = (268u + sizeof(_g4_t_v432)) > _g4_s129 ? (268u + sizeof(_g4_t_v432)) : _g4_s129,
    _g4_s131 = (268u + sizeof(_g4_t_v433)) > _g4_s130 ? (268u + sizeof(_g4_t_v433)) : _g4_s130,
    _g4_s132 = (268u + sizeof(_g4_t_v434)) > _g4_s131 ? (268u + sizeof(_g4_t_v434)) : _g4_s131,
    _g4_s133 = (272u + sizeof(_g4_t_v435)) > _g4_s132 ? (272u + sizeof(_g4_t_v435)) : _g4_s132,
    _g4_s134 = (272u + sizeof(_g4_t_v436)) > _g4_s133 ? (272u + sizeof(_g4_t_v436)) : _g4_s133,
    _g4_s135 = (272u + sizeof(_g4_t_v437)) > _g4_s134 ? (272u + sizeof(_g4_t_v437)) : _g4_s134,
    _g4_s136 = (272u + sizeof(_g4_t_v438)) > _g4_s135 ? (272u + sizeof(_g4_t_v438)) : _g4_s135,
    _g4_s137 = (272u + sizeof(_g4_t_v439)) > _g4_s136 ? (272u + sizeof(_g4_t_v439)) : _g4_s136,
    _g4_s138 = (272u + sizeof(_g4_t_v440)) > _g4_s137 ? (272u + sizeof(_g4_t_v440)) : _g4_s137,
    _g4_s139 = (272u + sizeof(_g4_t_v441)) > _g4_s138 ? (272u + sizeof(_g4_t_v441)) : _g4_s138,
    _g4_s140 = (272u + sizeof(_g4_t_v442)) > _g4_s139 ? (272u + sizeof(_g4_t_v442)) : _g4_s139,
    _g4_s141 = (272u + sizeof(_g4_t_v443)) > _g4_s140 ? (272u + sizeof(_g4_t_v443)) : _g4_s140,
    _g4_s142 = (272u + sizeof(_g4_t_v444)) > _g4_s141 ? (272u + sizeof(_g4_t_v444)) : _g4_s141,
    _g4_s143 = (272u + sizeof(_g4_t_v445)) > _g4_s142 ? (272u + sizeof(_g4_t_v445)) : _g4_s142,
    _g4_s144 = (272u + sizeof(_g4_t_v446)) > _g4_s143 ? (272u + sizeof(_g4_t_v446)) : _g4_s143,
    _g4_s145 = (276u + sizeof(_g4_t_v447)) > _g4_s144 ? (276u + sizeof(_g4_t_v447)) : _g4_s144,
    _g4_s146 = (276u + sizeof(_g4_t_v448)) > _g4_s145 ? (276u + sizeof(_g4_t_v448)) : _g4_s145,
    _g4_s147 = (276u + sizeof(_g4_t_v449)) > _g4_s146 ? (276u + sizeof(_g4_t_v449)) : _g4_s146,
    _g4_s148 = (276u + sizeof(_g4_t_v450)) > _g4_s147 ? (276u + sizeof(_g4_t_v450)) : _g4_s147,
    _g4_s149 = (276u + sizeof(_g4_t_v451)) > _g4_s148 ? (276u + sizeof(_g4_t_v451)) : _g4_s148,
    _g4_s150 = (276u + sizeof(_g4_t_v452)) > _g4_s149 ? (276u + sizeof(_g4_t_v452)) : _g4_s149,
    _g4_s151 = (276u + sizeof(_g4_t_v453)) > _g4_s150 ? (276u + sizeof(_g4_t_v453)) : _g4_s150,
    _g4_s152 = (276u + sizeof(_g4_t_v454)) > _g4_s151 ? (276u + sizeof(_g4_t_v454)) : _g4_s151,
    _g4_s153 = (276u + sizeof(_g4_t_v455)) > _g4_s152 ? (276u + sizeof(_g4_t_v455)) : _g4_s152,
    _g4_s154 = (276u + sizeof(_g4_t_v456)) > _g4_s153 ? (276u + sizeof(_g4_t_v456)) : _g4_s153,
    _g4_s155 = (280u + sizeof(_g4_t_v457)) > _g4_s154 ? (280u + sizeof(_g4_t_v457)) : _g4_s154,
    _g4_s156 = (280u + sizeof(_g4_t_v458)) > _g4_s155 ? (280u + sizeof(_g4_t_v458)) : _g4_s155,
    _g4_s157 = (280u + sizeof(_g4_t_v459)) > _g4_s156 ? (280u + sizeof(_g4_t_v459)) : _g4_s156,
    _g4_s158 = (280u + sizeof(_g4_t_v460)) > _g4_s157 ? (280u + sizeof(_g4_t_v460)) : _g4_s157,
    _g4_s159 = (280u + sizeof(_g4_t_v461)) > _g4_s158 ? (280u + sizeof(_g4_t_v461)) : _g4_s158,
    _g4_s160 = (280u + sizeof(_g4_t_v462)) > _g4_s159 ? (280u + sizeof(_g4_t_v462)) : _g4_s159,
    _g4_s161 = (280u + sizeof(_g4_t_v463)) > _g4_s160 ? (280u + sizeof(_g4_t_v463)) : _g4_s160,
    _g4_s162 = (280u + sizeof(_g4_t_v464)) > _g4_s161 ? (280u + sizeof(_g4_t_v464)) : _g4_s161,
    _g4_s163 = (280u + sizeof(_g4_t_v465)) > _g4_s162 ? (280u + sizeof(_g4_t_v465)) : _g4_s162,
    _g4_s164 = (280u + sizeof(_g4_t_v466)) > _g4_s163 ? (280u + sizeof(_g4_t_v466)) : _g4_s163,
    _g4_s165 = (280u + sizeof(_g4_t_v467)) > _g4_s164 ? (280u + sizeof(_g4_t_v467)) : _g4_s164,
    _g4_s166 = (280u + sizeof(_g4_t_v468)) > _g4_s165 ? (280u + sizeof(_g4_t_v468)) : _g4_s165,
    _g4_s167 = (284u + sizeof(_g4_t_v469)) > _g4_s166 ? (284u + sizeof(_g4_t_v469)) : _g4_s166,
    _g4_s168 = (284u + sizeof(_g4_t_v470)) > _g4_s167 ? (284u + sizeof(_g4_t_v470)) : _g4_s167,
    _g4_s169 = (284u + sizeof(_g4_t_v471)) > _g4_s168 ? (284u + sizeof(_g4_t_v471)) : _g4_s168,
    _g4_s170 = (284u + sizeof(_g4_t_v472)) > _g4_s169 ? (284u + sizeof(_g4_t_v472)) : _g4_s169,
    _g4_s171 = (284u + sizeof(_g4_t_v473)) > _g4_s170 ? (284u + sizeof(_g4_t_v473)) : _g4_s170,
    _g4_s172 = (284u + sizeof(_g4_t_v474)) > _g4_s171 ? (284u + sizeof(_g4_t_v474)) : _g4_s171,
    _g4_s173 = (288u + sizeof(_g4_t_v475)) > _g4_s172 ? (288u + sizeof(_g4_t_v475)) : _g4_s172,
    _g4_s174 = (288u + sizeof(_g4_t_v476)) > _g4_s173 ? (288u + sizeof(_g4_t_v476)) : _g4_s173,
    _g4_s175 = (288u + sizeof(_g4_t_v477)) > _g4_s174 ? (288u + sizeof(_g4_t_v477)) : _g4_s174,
    _g4_s176 = (288u + sizeof(_g4_t_v478)) > _g4_s175 ? (288u + sizeof(_g4_t_v478)) : _g4_s175,
    _g4_s177 = (288u + sizeof(_g4_t_v479)) > _g4_s176 ? (288u + sizeof(_g4_t_v479)) : _g4_s176,
    _g4_s178 = (288u + sizeof(_g4_t_v480)) > _g4_s177 ? (288u + sizeof(_g4_t_v480)) : _g4_s177,
    _g4_s179 = (288u + sizeof(_g4_t_v481)) > _g4_s178 ? (288u + sizeof(_g4_t_v481)) : _g4_s178,
    _g4_s180 = (288u + sizeof(_g4_t_v482)) > _g4_s179 ? (288u + sizeof(_g4_t_v482)) : _g4_s179,
    _g4_s181 = (288u + sizeof(_g4_t_v483)) > _g4_s180 ? (288u + sizeof(_g4_t_v483)) : _g4_s180,
    _g4_s182 = (288u + sizeof(_g4_t_v484)) > _g4_s181 ? (288u + sizeof(_g4_t_v484)) : _g4_s181,
    _g4_s183 = (288u + sizeof(_g4_t_v485)) > _g4_s182 ? (288u + sizeof(_g4_t_v485)) : _g4_s182,
    _g4_s184 = (288u + sizeof(_g4_t_v486)) > _g4_s183 ? (288u + sizeof(_g4_t_v486)) : _g4_s183,
    _g4_s185 = (288u + sizeof(_g4_t_v487)) > _g4_s184 ? (288u + sizeof(_g4_t_v487)) : _g4_s184,
    _g4_s186 = (288u + sizeof(_g4_t_v488)) > _g4_s185 ? (288u + sizeof(_g4_t_v488)) : _g4_s185,
    _g4_s187 = (288u + sizeof(_g4_t_v489)) > _g4_s186 ? (288u + sizeof(_g4_t_v489)) : _g4_s186,
    _g4_s188 = (288u + sizeof(_g4_t_v490)) > _g4_s187 ? (288u + sizeof(_g4_t_v490)) : _g4_s187,
    _g4_s189 = (288u + sizeof(_g4_t_v491)) > _g4_s188 ? (288u + sizeof(_g4_t_v491)) : _g4_s188,
    _g4_s190 = (288u + sizeof(_g4_t_v492)) > _g4_s189 ? (288u + sizeof(_g4_t_v492)) : _g4_s189,
    _g4_s191 = (296u + sizeof(_g4_t_v493)) > _g4_s190 ? (296u + sizeof(_g4_t_v493)) : _g4_s190,
    _g4_s192 = (296u + sizeof(_g4_t_v494)) > _g4_s191 ? (296u + sizeof(_g4_t_v494)) : _g4_s191,
    _g4_s193 = (296u + sizeof(_g4_t_v495)) > _g4_s192 ? (296u + sizeof(_g4_t_v495)) : _g4_s192,
    _g4_s194 = (296u + sizeof(_g4_t_v496)) > _g4_s193 ? (296u + sizeof(_g4_t_v496)) : _g4_s193,
    _g4_s195 = (296u + sizeof(_g4_t_v497)) > _g4_s194 ? (296u + sizeof(_g4_t_v497)) : _g4_s194,
    _g4_s196 = (296u + sizeof(_g4_t_v498)) > _g4_s195 ? (296u + sizeof(_g4_t_v498)) : _g4_s195,
    _g4_s197 = (296u + sizeof(_g4_t_v499)) > _g4_s196 ? (296u + sizeof(_g4_t_v499)) : _g4_s196,
    _g4_s198 = (296u + sizeof(_g4_t_v500)) > _g4_s197 ? (296u + sizeof(_g4_t_v500)) : _g4_s197,
    _g4_s199 = (296u + sizeof(_g4_t_v501)) > _g4_s198 ? (296u + sizeof(_g4_t_v501)) : _g4_s198,
    _g4_s200 = (296u + sizeof(_g4_t_v502)) > _g4_s199 ? (296u + sizeof(_g4_t_v502)) : _g4_s199,
    _g4_s201 = (296u + sizeof(_g4_t_v503)) > _g4_s200 ? (296u + sizeof(_g4_t_v503)) : _g4_s200,
    _g4_s202 = (296u + sizeof(_g4_t_v504)) > _g4_s201 ? (296u + sizeof(_g4_t_v504)) : _g4_s201,
    _g4_s203 = (296u + sizeof(_g4_t_v505)) > _g4_s202 ? (296u + sizeof(_g4_t_v505)) : _g4_s202,
    _g4_s204 = (296u + sizeof(_g4_t_v506)) > _g4_s203 ? (296u + sizeof(_g4_t_v506)) : _g4_s203,
    _g4_s205 = (296u + sizeof(_g4_t_v507)) > _g4_s204 ? (296u + sizeof(_g4_t_v507)) : _g4_s204,
    _g4_s206 = (314u + sizeof(_g4_t_v508)) > _g4_s205 ? (314u + sizeof(_g4_t_v508)) : _g4_s205,
    _g4_s207 = (320u + sizeof(_g4_t_v509)) > _g4_s206 ? (320u + sizeof(_g4_t_v509)) : _g4_s206,
    _g4_s208 = (324u + sizeof(_g4_t_v510)) > _g4_s207 ? (324u + sizeof(_g4_t_v510)) : _g4_s207,
    _g4_s209 = (336u + sizeof(_g4_t_v511)) > _g4_s208 ? (336u + sizeof(_g4_t_v511)) : _g4_s208,
    _g4_s210 = (380u + sizeof(_g4_t_v512)) > _g4_s209 ? (380u + sizeof(_g4_t_v512)) : _g4_s209,
    _g4_s211 = (384u + sizeof(_g4_t_v513)) > _g4_s210 ? (384u + sizeof(_g4_t_v513)) : _g4_s210,
    _g4_s212 = (632u + sizeof(_g4_t_v514)) > _g4_s211 ? (632u + sizeof(_g4_t_v514)) : _g4_s211,
    _g4_s213 = (636u + sizeof(_g4_t_v515)) > _g4_s212 ? (636u + sizeof(_g4_t_v515)) : _g4_s212,
    _g4_s214 = (640u + sizeof(_g4_t_v516)) > _g4_s213 ? (640u + sizeof(_g4_t_v516)) : _g4_s213,
    _g4_s215 = (1408u + sizeof(_g4_t_v517)) > _g4_s214 ? (1408u + sizeof(_g4_t_v517)) : _g4_s214,
    _g4_s216 = (3968u + sizeof(_g4_t_v518)) > _g4_s215 ? (3968u + sizeof(_g4_t_v518)) : _g4_s215,
    _g4_s217 = (3972u + sizeof(_g4_t_v519)) > _g4_s216 ? (3972u + sizeof(_g4_t_v519)) : _g4_s216,
    _g4_s218 = (3976u + sizeof(_g4_t_v520)) > _g4_s217 ? (3976u + sizeof(_g4_t_v520)) : _g4_s217,
    _g4_s219 = (3980u + sizeof(_g4_t_v521)) > _g4_s218 ? (3980u + sizeof(_g4_t_v521)) : _g4_s218,
    _g4_s220 = (3984u + sizeof(_g4_t_v522)) > _g4_s219 ? (3984u + sizeof(_g4_t_v522)) : _g4_s219,
    _g4_s221 = (3988u + sizeof(_g4_t_v523)) > _g4_s220 ? (3988u + sizeof(_g4_t_v523)) : _g4_s220,
    _g4_s222 = (4016u + sizeof(_g4_t_v524)) > _g4_s221 ? (4016u + sizeof(_g4_t_v524)) : _g4_s221,
    _g4_s223 = (4112u + sizeof(_g4_t_v525)) > _g4_s222 ? (4112u + sizeof(_g4_t_v525)) : _g4_s222,
    _g4_s224 = (4148u + sizeof(_g4_t_v526)) > _g4_s223 ? (4148u + sizeof(_g4_t_v526)) : _g4_s223,
    _g4_s225 = (4152u + sizeof(_g4_t_v527)) > _g4_s224 ? (4152u + sizeof(_g4_t_v527)) : _g4_s224,
    _g4_s226 = (4156u + sizeof(_g4_t_v528)) > _g4_s225 ? (4156u + sizeof(_g4_t_v528)) : _g4_s225
  };
  alignas(16) uint8_t _g4_sf[_g4_s226];
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 0u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 8u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 8u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 12u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 52u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 56u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 72u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 72u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 72u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 72u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 72u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 72u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 72u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 72u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 72u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 72u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 72u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 72u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 72u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 84u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 96u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 104u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 140u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 144u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 148u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 152u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 156u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 160u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 164u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 164u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 168u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 168u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 172u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 176u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 180u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 180u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 184u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 184u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 188u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 188u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 192u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 196u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 200u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 200u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 204u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 208u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 216u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 216u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 220u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 220u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 220u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 224u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 224u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 224u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 224u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 224u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 224u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 224u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 228u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 228u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 228u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 228u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 228u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 228u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 228u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 232u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 232u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 232u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 236u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 236u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 236u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 236u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 236u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 240u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 240u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 240u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 240u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 240u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 244u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 244u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 244u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 244u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 244u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 244u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 248u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 248u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 248u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 248u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 248u);
  _g4_t_kk &kk = *reinterpret_cast<_g4_t_kk *>(_g4_sf + 248u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 248u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 248u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 252u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 252u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 252u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 252u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 252u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 252u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 256u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 256u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 256u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 256u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 256u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 256u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 256u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 256u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 256u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 256u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 256u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 256u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 256u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 260u);
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 260u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 260u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 260u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 260u);
  _g4_t_v419 &v419 = *reinterpret_cast<_g4_t_v419 *>(_g4_sf + 264u);
  _g4_t_v420 &v420 = *reinterpret_cast<_g4_t_v420 *>(_g4_sf + 264u);
  _g4_t_v421 &v421 = *reinterpret_cast<_g4_t_v421 *>(_g4_sf + 264u);
  _g4_t_v422 &v422 = *reinterpret_cast<_g4_t_v422 *>(_g4_sf + 264u);
  _g4_t_v423 &v423 = *reinterpret_cast<_g4_t_v423 *>(_g4_sf + 264u);
  _g4_t_v424 &v424 = *reinterpret_cast<_g4_t_v424 *>(_g4_sf + 264u);
  _g4_t_v425 &v425 = *reinterpret_cast<_g4_t_v425 *>(_g4_sf + 264u);
  _g4_t_v426 &v426 = *reinterpret_cast<_g4_t_v426 *>(_g4_sf + 268u);
  _g4_t_v427 &v427 = *reinterpret_cast<_g4_t_v427 *>(_g4_sf + 268u);
  _g4_t_v428 &v428 = *reinterpret_cast<_g4_t_v428 *>(_g4_sf + 268u);
  _g4_t_v429 &v429 = *reinterpret_cast<_g4_t_v429 *>(_g4_sf + 268u);
  _g4_t_v430 &v430 = *reinterpret_cast<_g4_t_v430 *>(_g4_sf + 268u);
  _g4_t_v431 &v431 = *reinterpret_cast<_g4_t_v431 *>(_g4_sf + 268u);
  _g4_t_v432 &v432 = *reinterpret_cast<_g4_t_v432 *>(_g4_sf + 268u);
  _g4_t_v433 &v433 = *reinterpret_cast<_g4_t_v433 *>(_g4_sf + 268u);
  _g4_t_v434 &v434 = *reinterpret_cast<_g4_t_v434 *>(_g4_sf + 268u);
  _g4_t_v435 &v435 = *reinterpret_cast<_g4_t_v435 *>(_g4_sf + 272u);
  _g4_t_v436 &v436 = *reinterpret_cast<_g4_t_v436 *>(_g4_sf + 272u);
  _g4_t_v437 &v437 = *reinterpret_cast<_g4_t_v437 *>(_g4_sf + 272u);
  _g4_t_v438 &v438 = *reinterpret_cast<_g4_t_v438 *>(_g4_sf + 272u);
  _g4_t_v439 &v439 = *reinterpret_cast<_g4_t_v439 *>(_g4_sf + 272u);
  _g4_t_v440 &v440 = *reinterpret_cast<_g4_t_v440 *>(_g4_sf + 272u);
  _g4_t_v441 &v441 = *reinterpret_cast<_g4_t_v441 *>(_g4_sf + 272u);
  _g4_t_v442 &v442 = *reinterpret_cast<_g4_t_v442 *>(_g4_sf + 272u);
  _g4_t_v443 &v443 = *reinterpret_cast<_g4_t_v443 *>(_g4_sf + 272u);
  _g4_t_v444 &v444 = *reinterpret_cast<_g4_t_v444 *>(_g4_sf + 272u);
  _g4_t_v445 &v445 = *reinterpret_cast<_g4_t_v445 *>(_g4_sf + 272u);
  _g4_t_v446 &v446 = *reinterpret_cast<_g4_t_v446 *>(_g4_sf + 272u);
  _g4_t_v447 &v447 = *reinterpret_cast<_g4_t_v447 *>(_g4_sf + 276u);
  _g4_t_v448 &v448 = *reinterpret_cast<_g4_t_v448 *>(_g4_sf + 276u);
  _g4_t_v449 &v449 = *reinterpret_cast<_g4_t_v449 *>(_g4_sf + 276u);
  _g4_t_v450 &v450 = *reinterpret_cast<_g4_t_v450 *>(_g4_sf + 276u);
  _g4_t_v451 &v451 = *reinterpret_cast<_g4_t_v451 *>(_g4_sf + 276u);
  _g4_t_v452 &v452 = *reinterpret_cast<_g4_t_v452 *>(_g4_sf + 276u);
  _g4_t_v453 &v453 = *reinterpret_cast<_g4_t_v453 *>(_g4_sf + 276u);
  _g4_t_v454 &v454 = *reinterpret_cast<_g4_t_v454 *>(_g4_sf + 276u);
  _g4_t_v455 &v455 = *reinterpret_cast<_g4_t_v455 *>(_g4_sf + 276u);
  _g4_t_v456 &v456 = *reinterpret_cast<_g4_t_v456 *>(_g4_sf + 276u);
  _g4_t_v457 &v457 = *reinterpret_cast<_g4_t_v457 *>(_g4_sf + 280u);
  _g4_t_v458 &v458 = *reinterpret_cast<_g4_t_v458 *>(_g4_sf + 280u);
  _g4_t_v459 &v459 = *reinterpret_cast<_g4_t_v459 *>(_g4_sf + 280u);
  _g4_t_v460 &v460 = *reinterpret_cast<_g4_t_v460 *>(_g4_sf + 280u);
  _g4_t_v461 &v461 = *reinterpret_cast<_g4_t_v461 *>(_g4_sf + 280u);
  _g4_t_v462 &v462 = *reinterpret_cast<_g4_t_v462 *>(_g4_sf + 280u);
  _g4_t_v463 &v463 = *reinterpret_cast<_g4_t_v463 *>(_g4_sf + 280u);
  _g4_t_v464 &v464 = *reinterpret_cast<_g4_t_v464 *>(_g4_sf + 280u);
  _g4_t_v465 &v465 = *reinterpret_cast<_g4_t_v465 *>(_g4_sf + 280u);
  _g4_t_v466 &v466 = *reinterpret_cast<_g4_t_v466 *>(_g4_sf + 280u);
  _g4_t_v467 &v467 = *reinterpret_cast<_g4_t_v467 *>(_g4_sf + 280u);
  _g4_t_v468 &v468 = *reinterpret_cast<_g4_t_v468 *>(_g4_sf + 280u);
  _g4_t_v469 &v469 = *reinterpret_cast<_g4_t_v469 *>(_g4_sf + 284u);
  _g4_t_v470 &v470 = *reinterpret_cast<_g4_t_v470 *>(_g4_sf + 284u);
  _g4_t_v471 &v471 = *reinterpret_cast<_g4_t_v471 *>(_g4_sf + 284u);
  _g4_t_v472 &v472 = *reinterpret_cast<_g4_t_v472 *>(_g4_sf + 284u);
  _g4_t_v473 &v473 = *reinterpret_cast<_g4_t_v473 *>(_g4_sf + 284u);
  _g4_t_v474 &v474 = *reinterpret_cast<_g4_t_v474 *>(_g4_sf + 284u);
  _g4_t_v475 &v475 = *reinterpret_cast<_g4_t_v475 *>(_g4_sf + 288u);
  _g4_t_v476 &v476 = *reinterpret_cast<_g4_t_v476 *>(_g4_sf + 288u);
  _g4_t_v477 &v477 = *reinterpret_cast<_g4_t_v477 *>(_g4_sf + 288u);
  _g4_t_v478 &v478 = *reinterpret_cast<_g4_t_v478 *>(_g4_sf + 288u);
  _g4_t_v479 &v479 = *reinterpret_cast<_g4_t_v479 *>(_g4_sf + 288u);
  _g4_t_v480 &v480 = *reinterpret_cast<_g4_t_v480 *>(_g4_sf + 288u);
  _g4_t_v481 &v481 = *reinterpret_cast<_g4_t_v481 *>(_g4_sf + 288u);
  _g4_t_v482 &v482 = *reinterpret_cast<_g4_t_v482 *>(_g4_sf + 288u);
  _g4_t_v483 &v483 = *reinterpret_cast<_g4_t_v483 *>(_g4_sf + 288u);
  _g4_t_v484 &v484 = *reinterpret_cast<_g4_t_v484 *>(_g4_sf + 288u);
  _g4_t_v485 &v485 = *reinterpret_cast<_g4_t_v485 *>(_g4_sf + 288u);
  _g4_t_v486 &v486 = *reinterpret_cast<_g4_t_v486 *>(_g4_sf + 288u);
  _g4_t_v487 &v487 = *reinterpret_cast<_g4_t_v487 *>(_g4_sf + 288u);
  _g4_t_v488 &v488 = *reinterpret_cast<_g4_t_v488 *>(_g4_sf + 288u);
  _g4_t_v489 &v489 = *reinterpret_cast<_g4_t_v489 *>(_g4_sf + 288u);
  _g4_t_v490 &v490 = *reinterpret_cast<_g4_t_v490 *>(_g4_sf + 288u);
  _g4_t_v491 &v491 = *reinterpret_cast<_g4_t_v491 *>(_g4_sf + 288u);
  _g4_t_v492 &v492 = *reinterpret_cast<_g4_t_v492 *>(_g4_sf + 288u);
  _g4_t_v493 &v493 = *reinterpret_cast<_g4_t_v493 *>(_g4_sf + 296u);
  _g4_t_v494 &v494 = *reinterpret_cast<_g4_t_v494 *>(_g4_sf + 296u);
  _g4_t_v495 &v495 = *reinterpret_cast<_g4_t_v495 *>(_g4_sf + 296u);
  _g4_t_v496 &v496 = *reinterpret_cast<_g4_t_v496 *>(_g4_sf + 296u);
  _g4_t_v497 &v497 = *reinterpret_cast<_g4_t_v497 *>(_g4_sf + 296u);
  _g4_t_v498 &v498 = *reinterpret_cast<_g4_t_v498 *>(_g4_sf + 296u);
  _g4_t_v499 &v499 = *reinterpret_cast<_g4_t_v499 *>(_g4_sf + 296u);
  _g4_t_v500 &v500 = *reinterpret_cast<_g4_t_v500 *>(_g4_sf + 296u);
  _g4_t_v501 &v501 = *reinterpret_cast<_g4_t_v501 *>(_g4_sf + 296u);
  _g4_t_v502 &v502 = *reinterpret_cast<_g4_t_v502 *>(_g4_sf + 296u);
  _g4_t_v503 &v503 = *reinterpret_cast<_g4_t_v503 *>(_g4_sf + 296u);
  _g4_t_v504 &v504 = *reinterpret_cast<_g4_t_v504 *>(_g4_sf + 296u);
  _g4_t_v505 &v505 = *reinterpret_cast<_g4_t_v505 *>(_g4_sf + 296u);
  _g4_t_v506 &v506 = *reinterpret_cast<_g4_t_v506 *>(_g4_sf + 296u);
  _g4_t_v507 &v507 = *reinterpret_cast<_g4_t_v507 *>(_g4_sf + 296u);
  _g4_t_v508 &v508 = *reinterpret_cast<_g4_t_v508 *>(_g4_sf + 314u);
  _g4_t_v509 &v509 = *reinterpret_cast<_g4_t_v509 *>(_g4_sf + 320u);
  _g4_t_v510 &v510 = *reinterpret_cast<_g4_t_v510 *>(_g4_sf + 324u);
  _g4_t_v511 &v511 = *reinterpret_cast<_g4_t_v511 *>(_g4_sf + 336u);
  _g4_t_v512 &v512 = *reinterpret_cast<_g4_t_v512 *>(_g4_sf + 380u);
  _g4_t_v513 &v513 = *reinterpret_cast<_g4_t_v513 *>(_g4_sf + 384u);
  _g4_t_v514 &v514 = *reinterpret_cast<_g4_t_v514 *>(_g4_sf + 632u);
  _g4_t_v515 &v515 = *reinterpret_cast<_g4_t_v515 *>(_g4_sf + 636u);
  _g4_t_v516 &v516 = *reinterpret_cast<_g4_t_v516 *>(_g4_sf + 640u);
  _g4_t_v517 &v517 = *reinterpret_cast<_g4_t_v517 *>(_g4_sf + 1408u);
  _g4_t_v518 &v518 = *reinterpret_cast<_g4_t_v518 *>(_g4_sf + 3968u);
  _g4_t_v519 &v519 = *reinterpret_cast<_g4_t_v519 *>(_g4_sf + 3972u);
  _g4_t_v520 &v520 = *reinterpret_cast<_g4_t_v520 *>(_g4_sf + 3976u);
  _g4_t_v521 &v521 = *reinterpret_cast<_g4_t_v521 *>(_g4_sf + 3980u);
  _g4_t_v522 &v522 = *reinterpret_cast<_g4_t_v522 *>(_g4_sf + 3984u);
  _g4_t_v523 &v523 = *reinterpret_cast<_g4_t_v523 *>(_g4_sf + 3988u);
  _g4_t_v524 &v524 = *reinterpret_cast<_g4_t_v524 *>(_g4_sf + 4016u);
  _g4_t_v525 &v525 = *reinterpret_cast<_g4_t_v525 *>(_g4_sf + 4112u);
  _g4_t_v526 &v526 = *reinterpret_cast<_g4_t_v526 *>(_g4_sf + 4148u);
  _g4_t_v527 &v527 = *reinterpret_cast<_g4_t_v527 *>(_g4_sf + 4152u);
  _g4_t_v528 &v528 = *reinterpret_cast<_g4_t_v528 *>(_g4_sf + 4156u);

  if ( a2 == nullptr || a1 == 0 )
    return -1;
  if ( a2[1] == 0 )
  {
    if ( *(int *)(a1 + 272) < 0 || *(int *)(a1 + 276) < 0 )
    {
      *(uint32_t *)(a1 + 272) = 0;
      *(uint32_t *)(a1 + 276) = 0;
      *(uint32_t *)(a1 + 280) = 1;
      memset(
        *(void **)(a1 + 480),
        128,
        (*(uint32_t *)(a1 + 4) + 32) * (*(uint32_t *)(a1 + 8) + 32)
      + 2
      * ((*(uint32_t *)(a1 + 8) + 32) >> ((*(uint32_t *)(a1 + 48) & 2) == 0))
      * ((*(uint32_t *)(a1 + 4) + 32) >> ((*(uint32_t *)(a1 + 48) & 1) == 0)));
      v10 = *(uint32_t *)(a1 + 276);
      *(uint32_t *)(a1 + 280) = v10;
      v11 = (uint32_t *)(a1 + 48 * v10 + 288);
      *(uint32_t *)(a1 + 53912) = *v11;
      *(uint32_t *)(a1 + 53916) = v11[1];
      *(uint32_t *)(a1 + 53920) = v11[2];
      *(uint32_t *)(a1 + 53924) = v11[3];
      *(uint32_t *)(a1 + 53928) = v11[4];
      *(uint32_t *)(a1 + 53932) = v11[5];
      *(uint32_t *)(a1 + 53936) = v11[6];
      *(uint32_t *)(a1 + 53940) = v11[7];
      *(uint32_t *)(a1 + 53944) = v11[8];
      *(uint32_t *)(a1 + 53948) = v11[9];
      *(uint32_t *)(a1 + 53952) = v11[10];
      *(uint32_t *)(a1 + 53956) = v11[11];
    }
    v324 = *(uint64_t *)(a1 + 704);
    LODWORD(v323) = *(uint32_t *)(a1 + 712);
    v3 = *(uint32_t *)(a1 + 60);
    v4 = (v324 + (uint64_t)*(uint8_t *)(a1 + 729)) << v3 >> 32;
    v5 = ((uint32_t)v324 + *(uint8_t *)(a1 + 729)) << v3;
    if ( (v3 & 0x20) != 0 )
    {
      v4 = ((uint32_t)v324 + *(uint8_t *)(a1 + 729)) << v3;
      v5 = 0;
    }
    HIDWORD(v323) = *(uint32_t *)(a1 + 716);
    v6 = *(uint64_t *)(a1 + 712) - v324;
    *(uint32_t *)(a1 + 720) = v6 + v5;
    v7 = v6 + __PAIR64__(v4, v5);
    *(uint64_t *)(a1 + 712) = v323 + 1;
    *(uint32_t *)(a1 + 724) = (v6 + __PAIR64__(v4, v5)) >> 32;
    v8 = 1;
    if ( a3 != nullptr )
      *a3 = v7;
    return v8;
  }
  v469 = a1 + 51492;
  oc_pack_readinit(a1 + 51492, *a2, a2[1]);
  v12 = oc_pack_read1(a1 + 51492);
  v8 = -24;
  if ( v12 != 0 )
    return v8;
  *(uint8_t *)(a1 + 728) = oc_pack_read1(v469);
  *(uint8_t *)(a1 + 731) = oc_pack_read(v469, 6);
  if ( oc_pack_read1(v469) != 0 )
  {
    *(uint8_t *)(a1 + 732) = oc_pack_read(v469, 6);
    v13 = a1;
    if ( oc_pack_read1(v469) != 0 )
    {
      *(uint8_t *)(a1 + 733) = oc_pack_read(v469, 6);
      *(uint8_t *)(a1 + 730) = 3;
    }
    else
    {
      *(uint8_t *)(a1 + 730) = 2;
    }
  }
  else
  {
    *(uint8_t *)(a1 + 730) = 1;
    v13 = a1;
  }
  v14 = *(uint8_t *)(v13 + 728);
  if ( v14 != 0 )
    goto LABEL_16;
  v147 = oc_pack_read(v469, 3);
  v8 = -23;
  if ( v147 != 0 )
    return v8;
  v14 = *(uint8_t *)(v13 + 728);
  if ( v14 == 0 )
  {
    v15 = *(uint32_t *)(a1 + 272);
    v16 = *(uint32_t *)(a1 + 276);
LABEL_18:
    v17 = 0;
    if ( v15 == 0 || v16 == 0 )
    {
      do
      {
        do
          ++v17;
        while ( v17 == v15 );
      }
      while ( v17 == v16 );
    }
    v347 = v17;
    *(uint32_t *)(a1 + 280) = v17;
    goto LABEL_25;
  }
LABEL_16:
  v15 = *(uint32_t *)(a1 + 272);
  if ( v15 >= 0 )
  {
    v16 = *(uint32_t *)(a1 + 276);
    if ( v16 >= 0 )
      goto LABEL_18;
  }
  *(uint32_t *)(a1 + 272) = 0;
  *(uint32_t *)(a1 + 276) = 0;
  *(uint32_t *)(a1 + 280) = 1;
  memset(
    *(void **)(a1 + 480),
    128,
    (*(uint32_t *)(a1 + 4) + 32) * (*(uint32_t *)(a1 + 8) + 32)
  + 2
  * ((*(uint32_t *)(a1 + 8) + 32) >> ((*(uint32_t *)(a1 + 48) & 2) == 0))
  * ((*(uint32_t *)(a1 + 4) + 32) >> ((*(uint32_t *)(a1 + 48) & 1) == 0)));
  v347 = *(uint32_t *)(a1 + 280);
  v14 = *(uint8_t *)(a1 + 728);
LABEL_25:
  if ( v14 == 0 )
  {
    v414 = 0;
    v447 = 0;
    v457 = 0;
    v426 = 0;
    v18 = *(uint32_t *)(a1 + 252);
    v419 = *(uint32_t *)(a1 + 220);
    v401 = *(uint32_t *)(a1 + 224);
    v493 = *(uint32_t *)(a1 + 204);
    for ( i = 0; i != 12; v414 = i )
    {
      v20 = 0;
      v426 += *(uint32_t *)(a1 + 8 * i + 136);
      if ( v426 > v447 )
      {
        v475 = v419 + (v447 << 6) + 60;
        v21 = v457;
        do
        {
          v435 = (uint8_t *)(v447 + v401);
          v22 = (*(uint8_t *)(v447 + v401) >> 2) & 0xF;
          if ( (*(uint8_t *)(v447 + v401) & 4) != 0 )
          {
            v23 = *(uint32_t *)(v475 - 60);
            if ( v23 >= 0 )
            {
              v24 = (uint8_t *)(v493 + 4 * v23);
              v25 = v24[1];
              *v24 |= 1u;
              v24[1] = v25 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21++) = v23;
            }
            v26 = v475;
            v27 = *(uint32_t *)(v475 - 56);
            if ( v27 >= 0 )
            {
              v28 = (uint8_t *)(v493 + 4 * v27);
              v29 = v28[1];
              *v28 |= 1u;
              v28[1] = v29 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21) = v27;
              v26 = v475;
              ++v21;
            }
            v30 = *(uint32_t *)(v26 - 52);
            if ( v30 >= 0 )
            {
              v31 = (uint8_t *)(v493 + 4 * v30);
              v32 = v31[1];
              *v31 |= 1u;
              v31[1] = v32 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21) = v30;
              v26 = v475;
              ++v21;
            }
            v33 = *(uint32_t *)(v26 - 48);
            if ( v33 >= 0 )
            {
              v34 = (uint8_t *)(v493 + 4 * v33);
              v35 = v34[1];
              *v34 |= 1u;
              v34[1] = v35 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21++) = v33;
            }
            v22 = (*v435 >> 2) & 0xF;
          }
          if ( (v22 & 2) != 0 )
          {
            v36 = *(uint32_t *)(v475 - 44);
            if ( v36 >= 0 )
            {
              v37 = (uint8_t *)(v493 + 4 * v36);
              v38 = v37[1];
              *v37 |= 1u;
              v37[1] = v38 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21++) = v36;
            }
            v39 = v475;
            v40 = *(uint32_t *)(v475 - 40);
            if ( v40 >= 0 )
            {
              v41 = (uint8_t *)(v493 + 4 * v40);
              v42 = v41[1];
              *v41 |= 1u;
              v41[1] = v42 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21) = v40;
              v39 = v475;
              ++v21;
            }
            v43 = *(uint32_t *)(v39 - 36);
            if ( v43 >= 0 )
            {
              v44 = (uint8_t *)(v493 + 4 * v43);
              v45 = v44[1];
              *v44 |= 1u;
              v44[1] = v45 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21) = v43;
              v39 = v475;
              ++v21;
            }
            v46 = *(uint32_t *)(v39 - 32);
            if ( v46 >= 0 )
            {
              v47 = (uint8_t *)(v493 + 4 * v46);
              v48 = v47[1];
              *v47 |= 1u;
              v47[1] = v48 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21++) = v46;
            }
            v22 = (*v435 >> 2) & 0xF;
          }
          if ( (v22 & 4) != 0 )
          {
            v49 = *(uint32_t *)(v475 - 28);
            if ( v49 >= 0 )
            {
              v50 = (uint8_t *)(v493 + 4 * v49);
              v51 = v50[1];
              *v50 |= 1u;
              v50[1] = v51 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21++) = v49;
            }
            v52 = v475;
            v53 = *(uint32_t *)(v475 - 24);
            if ( v53 >= 0 )
            {
              v54 = (uint8_t *)(v493 + 4 * v53);
              v55 = v54[1];
              *v54 |= 1u;
              v54[1] = v55 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21) = v53;
              v52 = v475;
              ++v21;
            }
            v56 = *(uint32_t *)(v52 - 20);
            if ( v56 >= 0 )
            {
              v57 = (uint8_t *)(v493 + 4 * v56);
              v58 = v57[1];
              *v57 |= 1u;
              v57[1] = v58 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21) = v56;
              v52 = v475;
              ++v21;
            }
            v59 = *(uint32_t *)(v52 - 16);
            if ( v59 >= 0 )
            {
              v60 = (uint8_t *)(v493 + 4 * v59);
              v61 = v60[1];
              *v60 |= 1u;
              v60[1] = v61 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21++) = v59;
            }
            v22 = (*v435 >> 2) & 0xF;
          }
          if ( v22 >> 3 != 0 )
          {
            v62 = *(uint32_t *)(v475 - 12);
            if ( v62 >= 0 )
            {
              v63 = (uint8_t *)(v493 + 4 * v62);
              v64 = v63[1];
              *v63 |= 1u;
              v63[1] = v64 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21++) = v62;
            }
            v65 = (int *)v475;
            v66 = *(uint32_t *)(v475 - 8);
            if ( v66 >= 0 )
            {
              v67 = (uint8_t *)(v493 + 4 * v66);
              v68 = v67[1];
              *v67 |= 1u;
              v67[1] = v68 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21) = v66;
              v65 = (int *)v475;
              ++v21;
            }
            v69 = *(v65 - 1);
            if ( v69 >= 0 )
            {
              v70 = (uint8_t *)(v493 + 4 * v69);
              v71 = v70[1];
              *v70 |= 1u;
              v70[1] = v71 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21) = v69;
              v65 = (int *)v475;
              ++v21;
            }
            v72 = *v65;
            if ( *v65 >= 0 )
            {
              v73 = (uint8_t *)(v493 + 4 * v72);
              v74 = v73[1];
              *v73 |= 1u;
              v73[1] = v74 & 0xF8 | 1;
              *(uint32_t *)(v18 + 4 * v21++) = v72;
            }
          }
          ++v447;
          v475 += 64;
        }
        while ( v426 > v447 );
        v447 = v426;
        v20 = v21 - v457;
        v457 = v21;
      }
      *(uint32_t *)(a1 + v414 + 256) = v20;
      i = v414 + 4;
    }
    v75 = *(uint32_t *)(a1 + 716);
    *(uint32_t *)(a1 + 704) = *(uint32_t *)(a1 + 712);
    *(uint32_t *)(a1 + 708) = v75;
    *(uint32_t *)(a1 + 268) = v457;
    goto LABEL_72;
  }
  v119 = oc_pack_read1(v469);
  v382 = *(uint32_t *)(a1 + 224);
  v120 = *(uint32_t *)(a1 + 228);
  v121 = 0;
  if ( v120 != 0 )
  {
    v478 = 0;
    while ( 1 )
    {
      v311 = v120;
      v460 = sub_138A120(v469);
      v497 = v460;
      v120 = v311;
      while ( 1 )
      {
        v122 = (uint8_t *)(v382 + v121++);
        *v122 = (2 * (v119 & 1)) | *v122 & 0xFC;
        v478 += v119;
        if ( --v497 == 0 )
          break;
        if ( v311 <= v121 )
          goto LABEL_130;
      }
      if ( v311 <= v121 || v460 <= 0x1020 )
      {
LABEL_130:
        v119 = v119 == 0;
      }
      else
      {
        v119 = oc_pack_read1(v469);
        v120 = v311;
      }
      if ( v120 <= v121 )
      {
        v123 = *(uint32_t *)(a1 + 228);
        if ( v123 <= v478 )
          goto LABEL_145;
        v124 = 0;
        v498 = *(uint8_t **)(a1 + 224);
        if ( (*v498 & 2) != 0 )
        {
          do
            ++v124;
          while ( (v498[v124] & 2) != 0 );
        }
        v125 = oc_pack_read1(v469);
LABEL_136:
        v312 = v125;
        v126 = sub_138A120(v469);
        v461 = v126;
        v127 = v312;
        if ( v123 <= v124 )
        {
LABEL_143:
          v125 = v127 == 0;
          goto LABEL_144;
        }
        while ( 1 )
        {
          v128 = v498[v124];
          if ( (v128 & 2) == 0 )
          {
            if ( v126 == 0 )
            {
              v127 = v312;
              if ( v123 <= v124 || v461 <= 0x1020 )
                goto LABEL_143;
              v125 = oc_pack_read1(v469);
LABEL_144:
              if ( v123 <= v124 )
              {
LABEL_145:
                v121 = v478 != 0 && oc_pack_read1(v469) == 0;
                v382 = *(uint32_t *)(a1 + 224);
                goto LABEL_148;
              }
              goto LABEL_136;
            }
            --v126;
            v498[v124] = v312 & 1 | v128 & 0xFE;
          }
          if ( v123 <= ++v124 )
          {
            v127 = v312;
            goto LABEL_143;
          }
        }
      }
    }
  }
LABEL_148:
  v129 = a1;
  v422 = 0;
  v499 = 0;
  v451 = 0;
  v397 = 0;
  v462 = *(uint32_t *)(a1 + 204);
  v429 = *(uint32_t *)(a1 + 252);
  v362 = *(uint32_t *)(a1 + 220);
  v417 = 0;
  v404 = 0;
  v377 = v429 + 4 * *(uint32_t *)(a1 + 216);
  for ( j = 0; j != 12; v422 = j )
  {
    v417 += *(uint32_t *)(v129 + 8 * j + 136);
    v437 = 0;
    if ( v417 <= v451 )
      goto LABEL_172;
    v479 = v397;
    v368 = (int *)(v362 + (v451 << 6));
    v131 = v404;
    do
    {
      v389 = (uint8_t *)(v451 + v382);
      v438 = v368;
      v373 = 0;
      v351 = v121;
      do
      {
        v132 = (*v389 >> 2) & 0xF;
        if ( !_bittest(&v132, (uint8_t)v373) )
          goto LABEL_169;
        v405 = *v438;
        if ( *v438 >= 0 )
        {
          v354 = 1;
          if ( (*v389 & 1) != 0 )
            goto LABEL_155;
          if ( (*v389 & 2) == 0 )
            goto LABEL_219;
          if ( v131 <= 0 )
          {
            v148 = oc_pack_read(v469, 2);
            v131 = v148 + 1;
            if ( (v148 & 2) != 0 )
            {
              if ( (v148 & 1) != 0 )
              {
                v162 = oc_pack_read(v469, 2);
                v131 = v162 + 5;
                if ( (v162 & 2) != 0 )
                {
                  if ( (v162 & 1) != 0 )
                  {
                    v163 = oc_pack_read(v469, 3);
                    v131 = v163 + 11;
                    if ( (v163 & 4) != 0 )
                      v131 = oc_pack_read(v469, 2) + 4 * (v163 & 3) + 15;
                  }
                  else
                  {
                    v131 = oc_pack_read(v469, 2) + 7;
                  }
                }
              }
              else
              {
                v131 = oc_pack_read1(v469) + 3;
              }
            }
            v351 ^= 1u;
          }
          --v131;
          if ( v351 != 0 )
          {
            v354 = v351;
LABEL_155:
            *(uint32_t *)(v429 + 4 * v479++) = v405;
            v133 = v405;
          }
          else
          {
LABEL_219:
            ++v499;
            v354 = 0;
            *(uint32_t *)(v377 - 4 * v499) = v405;
            v133 = v405;
          }
          *(uint8_t *)(v462 + 4 * v405) = v354 & 1 | *(uint8_t *)(v462 + 4 * v133) & 0xFE;
        }
        v406 = v438[1];
        if ( v406 < 0 )
          goto LABEL_161;
        v355 = 1;
        if ( (*v389 & 1) == 0 )
        {
          if ( (*v389 & 2) == 0 )
            goto LABEL_213;
          if ( v131 <= 0 )
          {
            v164 = oc_pack_read(v469, 2);
            v131 = v164 + 1;
            if ( (v164 & 2) != 0 )
            {
              if ( (v164 & 1) != 0 )
              {
                v166 = oc_pack_read(v469, 2);
                v131 = v166 + 5;
                if ( (v166 & 2) != 0 )
                {
                  if ( (v166 & 1) != 0 )
                  {
                    v167 = oc_pack_read(v469, 3);
                    v131 = v167 + 11;
                    if ( (v167 & 4) != 0 )
                      v131 = oc_pack_read(v469, 2) + 4 * (v167 & 3) + 15;
                  }
                  else
                  {
                    v131 = oc_pack_read(v469, 2) + 7;
                  }
                }
              }
              else
              {
                v131 = oc_pack_read1(v469) + 3;
              }
            }
            v351 ^= 1u;
          }
          --v131;
          if ( v351 == 0 )
          {
LABEL_213:
            ++v499;
            v355 = 0;
            *(uint32_t *)(v377 - 4 * v499) = v406;
            v134 = v406;
            goto LABEL_160;
          }
          v355 = v351;
        }
        *(uint32_t *)(v429 + 4 * v479++) = v406;
        v134 = v406;
LABEL_160:
        *(uint8_t *)(v462 + 4 * v134) = v355 & 1 | *(uint8_t *)(v462 + 4 * v134) & 0xFE;
LABEL_161:
        v407 = v438[2];
        if ( v407 < 0 )
          goto LABEL_165;
        v356 = 1;
        if ( (*v389 & 1) == 0 )
        {
          if ( (*v389 & 2) == 0 )
            goto LABEL_212;
          if ( v131 <= 0 )
          {
            v170 = oc_pack_read(v469, 2);
            v131 = v170 + 1;
            if ( (v170 & 2) != 0 )
            {
              if ( (v170 & 1) != 0 )
              {
                v185 = oc_pack_read(v469, 2);
                v131 = v185 + 5;
                if ( (v185 & 2) != 0 )
                {
                  if ( (v185 & 1) != 0 )
                  {
                    v186 = oc_pack_read(v469, 3);
                    v131 = v186 + 11;
                    if ( (v186 & 4) != 0 )
                      v131 = oc_pack_read(v469, 2) + 4 * (v186 & 3) + 15;
                  }
                  else
                  {
                    v131 = oc_pack_read(v469, 2) + 7;
                  }
                }
              }
              else
              {
                v131 = oc_pack_read1(v469) + 3;
              }
            }
            v351 ^= 1u;
          }
          --v131;
          if ( v351 == 0 )
          {
LABEL_212:
            ++v499;
            v356 = 0;
            *(uint32_t *)(v377 - 4 * v499) = v407;
            v135 = v407;
            goto LABEL_164;
          }
          v356 = v351;
        }
        *(uint32_t *)(v429 + 4 * v479++) = v407;
        v135 = v407;
LABEL_164:
        *(uint8_t *)(v462 + 4 * v135) = v356 & 1 | *(uint8_t *)(v462 + 4 * v135) & 0xFE;
LABEL_165:
        v408 = v438[3];
        if ( v408 < 0 )
          goto LABEL_169;
        v357 = 1;
        if ( (*v389 & 1) == 0 )
        {
          if ( (*v389 & 2) == 0 )
            goto LABEL_214;
          if ( v131 <= 0 )
          {
            v165 = oc_pack_read(v469, 2);
            v131 = v165 + 1;
            if ( (v165 & 2) != 0 )
            {
              if ( (v165 & 1) != 0 )
              {
                v168 = oc_pack_read(v469, 2);
                v131 = v168 + 5;
                if ( (v168 & 2) != 0 )
                {
                  if ( (v168 & 1) != 0 )
                  {
                    v169 = oc_pack_read(v469, 3);
                    v131 = v169 + 11;
                    if ( (v169 & 4) != 0 )
                      v131 = oc_pack_read(v469, 2) + 4 * (v169 & 3) + 15;
                  }
                  else
                  {
                    v131 = oc_pack_read(v469, 2) + 7;
                  }
                }
              }
              else
              {
                v131 = oc_pack_read1(v469) + 3;
              }
            }
            v351 ^= 1u;
          }
          --v131;
          if ( v351 == 0 )
          {
LABEL_214:
            ++v499;
            v357 = 0;
            *(uint32_t *)(v377 - 4 * v499) = v408;
            v136 = v408;
            goto LABEL_168;
          }
          v357 = v351;
        }
        *(uint32_t *)(v429 + 4 * v479++) = v408;
        v136 = v408;
LABEL_168:
        *(uint8_t *)(v462 + 4 * v136) = v357 & 1 | *(uint8_t *)(v462 + 4 * v136) & 0xFE;
LABEL_169:
        ++v373;
        v438 += 4;
      }
      while ( v373 != 4 );
      ++v451;
      v368 += 16;
      v121 = v351;
    }
    while ( v417 > v451 );
    v404 = v131;
    v437 = v479 - v397;
    v397 = v479;
    v451 = v417;
LABEL_172:
    v129 = a1;
    *(uint32_t *)(a1 + v422 + 256) = v437;
    j = v422 + 4;
  }
  *(uint32_t *)(a1 + 268) = v397;
  v137 = oc_pack_read(v469, 3);
  if ( v137 == 0 )
  {
    v516[0] = 0;
    *((uint8_t *)v516 + oc_pack_read(v469, 3)) = 0;
    *((uint8_t *)v516 + oc_pack_read(v469, 3)) = 1;
    *((uint8_t *)v516 + oc_pack_read(v469, 3)) = 2;
    *((uint8_t *)v516 + oc_pack_read(v469, 3)) = 3;
    *((uint8_t *)v516 + oc_pack_read(v469, 3)) = 4;
    *((uint8_t *)v516 + oc_pack_read(v469, 3)) = 5;
    *((uint8_t *)v516 + oc_pack_read(v469, 3)) = 6;
    *((uint8_t *)v516 + oc_pack_read(v469, 3)) = 7;
    v480 = (char *)v516;
    goto LABEL_175;
  }
  v480 = (char *)&unk_1D0E7F8 + 8 * v137;
  v463 = sub_138A000;
  if ( v137 != 7 )
LABEL_175:
    v463 = sub_1389F60;
  v500 = *(uint32_t *)(a1 + 248);
  v138 = *(uint32_t **)(a1 + 232);
  v139 = *(uint32_t *)(a1 + 204);
  if ( v500 != 0 )
  {
    v140 = 0;
    v439 = *(uint32_t *)(a1 + 236);
    while ( 1 )
    {
      if ( *(uint8_t *)(v439 + v140) == 0xFF )
        goto LABEL_182;
      if ( (*(uint8_t *)(v139 + 4 * *v138) & 1) != 0
        || (*(uint8_t *)(v139 + 4 * v138[1]) & 1) != 0
        || (*(uint8_t *)(v139 + 4 * v138[2]) & 1) != 0
        || (*(uint8_t *)(v139 + 4 * v138[3]) & 1) != 0 )
      {
        v313 = v139;
        v138 += 12;
        *(uint8_t *)(v439 + v140++) = v480[v463(v469)];
        v139 = v313;
        if ( v140 == v500 )
          break;
      }
      else
      {
        *(uint8_t *)(v439 + v140) = 0;
LABEL_182:
        ++v140;
        v138 += 12;
        if ( v140 == v500 )
          break;
      }
    }
  }
  v378 = (int (*)(int, int))(uintptr_t)(OC_SET_CHROMA_MVS_TABLE[*(uint32_t *)(a1 + 48)]);
  v113 = oc_pack_read1(v469) == 0;
  v141 = sub_138A030;
  v142 = *(uint32_t *)(a1 + 204);
  if ( !v113 )
    v141 = sub_138A0E0;
  v143 = *(uint32_t *)(a1 + 48);
  v481 = v141;
  *(uint32_t *)&v508[1] = 0;
  v440 = *(uint32_t *)(a1 + 212);
  v374 = (char *)&OC_MB_MAP_IDXS + 12 * v143;
  v390 = OC_MB_MAP_NIDXS[v143];
  v383 = *(uint32_t *)(a1 + 236);
  v409 = *(uint32_t *)(a1 + 248);
  if ( v409 == 0 )
  {
    v457 = *(uint32_t *)(a1 + 268);
    goto LABEL_72;
  }
  v464 = *(int **)(a1 + 232);
  v430 = 0;
  while ( 2 )
  {
    v501 = *(uint8_t *)(v383 + v430);
    if ( v501 != -1 )
    {
      v144 = 0;
      v145 = 0;
      do
      {
        v146 = (uint8_t)v374[v144];
        if ( (*(uint8_t *)(v142 + 4 * v464[v146]) & 1) != 0 )
          *((uint32_t *)v516 + v145++) = v146;
        ++v144;
      }
      while ( v390 > v144 );
      v452 = v145;
      if ( v145 != 0 )
      {
        switch ( v501 )
        {
          case 2:
            v508[2] = v508[1];
            LOBYTE(v508[1]) = v481(v469);
            LOBYTE(v508[0]) = v508[1];
            HIBYTE(v508[1]) = v481(v469);
            HIBYTE(v508[0]) = HIBYTE(v508[1]);
            goto LABEL_237;
          case 3:
            v508[0] = v508[1];
            goto LABEL_237;
          case 4:
            v508[0] = v508[2];
            *(uint32_t *)&v508[1] = *(uint32_t *)v508;
            goto LABEL_237;
          case 6:
            LOBYTE(v508[0]) = v481(v469);
            HIBYTE(v508[0]) = v481(v469);
            goto LABEL_237;
          case 7:
            *((uint32_t *)v516 + v145) = -1;
            v149 = v516[0];
            if ( LODWORD(v516[0]) != 0 )
            {
              LOWORD(v509) = 0;
              v150 = 1;
              v151 = 0;
            }
            else
            {
              v161 = *v464;
              *(uint8_t *)(v142 + 4 * *v464 + 1) = v501 & 7 | *(uint8_t *)(v142 + 4 * *v464 + 1) & 0xF8;
              LOBYTE(v509) = v481(v469);
              BYTE1(v509) = v481(v469);
              *(uint16_t *)(v440 + 2 * v161) = v509;
              v150 = 2;
              v149 = HIDWORD(v516[0]);
              v151 = 1;
            }
            if ( v149 == 1 )
            {
              v160 = v464[1];
              *(uint8_t *)(v142 + 4 * v160 + 1) = v501 & 7 | *(uint8_t *)(v142 + 4 * v160 + 1) & 0xF8;
              v316 = v160;
              BYTE2(v509) = v481(v469);
              HIBYTE(v509) = v481(v469);
              *(uint16_t *)(v440 + 2 * v316) = HIWORD(v509);
              v149 = *((uint32_t *)v516 + v150);
            }
            else
            {
              HIWORD(v509) = 0;
              v150 = v151;
            }
            if ( v149 == 2 )
            {
              ++v150;
              v159 = v464[2];
              *(uint8_t *)(v142 + 4 * v159 + 1) = v501 & 7 | *(uint8_t *)(v142 + 4 * v159 + 1) & 0xF8;
              v315 = v159;
              LOBYTE(v510) = v481(v469);
              BYTE1(v510) = v481(v469);
              *(uint16_t *)(v440 + 2 * v315) = v510;
              v149 = *((uint32_t *)v516 + v150);
            }
            else
            {
              LOWORD(v510) = 0;
            }
            if ( v149 == 3 )
            {
              ++v150;
              v158 = v464[3];
              *(uint8_t *)(v142 + 4 * v158 + 1) = v501 & 7 | *(uint8_t *)(v142 + 4 * v158 + 1) & 0xF8;
              v314 = v158;
              BYTE2(v510) = v481(v469);
              HIBYTE(v510) = v481(v469);
              *(uint16_t *)(v440 + 2 * v314) = HIWORD(v510);
            }
            else
            {
              HIWORD(v510) = 0;
              if ( v150 == 0 )
                goto LABEL_243;
            }
            v508[2] = v508[1];
            v508[1] = *((uint16_t *)&v509 + *(&v515 + v150));
            if ( v150 >= v452 )
            {
LABEL_237:
              if ( v501 != 7 )
              {
                v152 = 0;
                v502 = v501 & 7;
                do
                {
                  v153 = *((uint32_t *)v516 + v152++);
                  v154 = v464[v153];
                  *(uint8_t *)(v142 + 4 * v154 + 1) = v502 | *(uint8_t *)(v142 + 4 * v154 + 1) & 0xF8;
                  *(uint16_t *)(v440 + 2 * v154) = v508[0];
                }
                while ( v152 < v452 );
              }
              break;
            }
LABEL_243:
            v378((int)(uintptr_t)(v513), (int)(uintptr_t)(&v509));
            do
            {
              v155 = *((uint32_t *)v516 + v150);
              v156 = v155;
              ++v150;
              v157 = v464[v155];
              *(uint8_t *)(v142 + 4 * v157 + 1) = v501 & 7 | *(uint8_t *)(v142 + 4 * v157 + 1) & 0xF8;
              *(uint16_t *)(v440 + 2 * v157) = v513[v156 & 3];
            }
            while ( v150 != v452 );
            goto LABEL_237;
          default:
            v508[0] = 0;
            goto LABEL_237;
        }
      }
    }
    ++v430;
    v464 += 12;
    if ( v430 != v409 )
      continue;
    break;
  }
  v457 = *(uint32_t *)(a1 + 268);
LABEL_72:
  if ( v457 <= 0 )
    goto LABEL_76;
  v494 = *(uint32_t *)(a1 + 204);
  v448 = *(uint32_t **)(a1 + 252);
  if ( *(uint8_t *)(a1 + 730) == 1 )
  {
    v76 = *(uint32_t *)(a1 + 204);
    for ( k = 0; k != v457; ++k )
    {
      v78 = v448[k];
      *(uint8_t *)(v76 + 4 * v78) &= 3u;
    }
    goto LABEL_76;
  }
  v171 = 0;
  v482 = oc_pack_read1(v469);
  v431 = 0;
  do
  {
    v172 = oc_pack_read1(v469);
    v173 = 1;
    if ( v172 != 0 )
    {
      v183 = oc_pack_read(v469, 2);
      v173 = v183 + 2;
      if ( (v183 & 2) != 0 )
      {
        if ( (v183 & 1) != 0 )
        {
          v184 = oc_pack_read(v469, 3);
          if ( (v184 & 4) != 0 )
          {
            if ( (v184 & 2) != 0 )
            {
              if ( (v184 & 1) != 0 )
                v173 = oc_pack_read(v469, 12) + 34;
              else
                v173 = oc_pack_read(v469, 4) + 18;
            }
            else
            {
              v173 = oc_pack_read(v469, 2) + 4 * (v184 & 1) + 10;
            }
          }
          else
          {
            v173 = v184 + 6;
          }
        }
        else
        {
          v173 = oc_pack_read1(v469) + 4;
        }
      }
    }
    v441 = v173;
    while ( 1 )
    {
      v174 = v448[v171++];
      *(uint8_t *)(v494 + 4 * v174) = (4 * v482) | *(uint8_t *)(v494 + 4 * v174) & 3;
      --v441;
      v175 = v482 + v431;
      v431 += v482;
      if ( v441 <= 0 )
        break;
      if ( v171 >= v457 )
        goto LABEL_291;
    }
    if ( v457 <= v171 || v173 <= 4128 )
    {
LABEL_291:
      v482 = v482 == 0;
      continue;
    }
    v317 = v175;
    v482 = oc_pack_read1(v469);
    v175 = v317;
  }
  while ( v457 > v171 );
  if ( v175 <= 0 || *(uint8_t *)(a1 + 730) != 3 )
    goto LABEL_76;
  v176 = 0;
  if ( (*(uint8_t *)(v494 + 4 * *v448) & 0xFC) == 0 )
  {
    do
      ++v176;
    while ( (*(uint8_t *)(v494 + 4 * v448[v176]) & 0xFC) == 0 );
  }
  v442 = oc_pack_read1(v469);
  v177 = a1 + 51492;
  while ( 2 )
  {
    while ( 2 )
    {
      v178 = oc_pack_read1(v177);
      v179 = 1;
      if ( v178 != 0 )
      {
        v187 = oc_pack_read(v177, 2);
        v179 = v187 + 2;
        if ( (v187 & 2) != 0 )
        {
          if ( (v187 & 1) != 0 )
          {
            v188 = oc_pack_read(v177, 3);
            if ( (v188 & 4) != 0 )
            {
              if ( (v188 & 2) != 0 )
              {
                if ( (v188 & 1) != 0 )
                  v179 = oc_pack_read(v177, 12) + 34;
                else
                  v179 = oc_pack_read(v177, 4) + 18;
              }
              else
              {
                v179 = oc_pack_read(v177, 2) + 4 * (v188 & 1) + 10;
              }
            }
            else
            {
              v179 = v188 + 6;
            }
          }
          else
          {
            v179 = oc_pack_read1(v177) + 4;
          }
        }
      }
      if ( v176 >= v457 )
      {
LABEL_327:
        v182 = v176 < v457;
        break;
      }
      v180 = v179;
      v469 = a1 + 51492;
      while ( 2 )
      {
        v181 = (uint8_t *)(v494 + 4 * v448[v176]);
        if ( (*v181 & 0xFC) == 0 )
        {
LABEL_302:
          if ( ++v176 == v457 )
            goto LABEL_327;
          continue;
        }
        break;
      }
      if ( v180 > 0 )
      {
        --v180;
        *v181 = (4 * (v442 + (*v181 >> 2))) | *v181 & 3;
        goto LABEL_302;
      }
      v182 = v457 > v176;
      if ( v457 > v176 && v179 > 4128 )
      {
        v442 = oc_pack_read1(v177);
        continue;
      }
      break;
    }
    LOBYTE(v442) = v442 == 0;
    if ( v182 )
      continue;
    break;
  }
LABEL_76:
  v402 = (uint32_t *)(v516);
  v79 = (__m128i *)v516;
  for ( m = 0; m != 3; ++m )
  {
    v81 = v79 + 16;
    v82 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*(uint32_t *)(a1 + 4 * m + 256)), 0);
    do
      *v79++ = v82;
    while ( v79 != v81 );
  }
  v509 = oc_pack_read(v469, 4);
  v510 = oc_pack_read(v469, 4);
  v436 = a1;
  v449 = 1;
  v495 = 0;
  v476 = 0;
  v458 = 0;
  v83 = *(uint32_t *)(a1 + 53368);
  *(uint32_t *)(a1 + 52600) = 0;
  v427 = v83;
  v415 = *(uint32_t *)(a1 + 204);
  v420 = *(uint32_t *)(a1 + 252);
  v84 = 0;
  v85 = v513;
  while ( 2 )
  {
    v458 += *(uint32_t *)(a1 + 4 * v449 + 252);
    memset(v85, 0, 0x100u);
    *(uint32_t *)(v436 + 52600) = v476;
    v86 = v458 - v84;
    if ( v458 - v84 > v476 )
      v86 = v476;
    *(uint32_t *)(v436 + 51832) = v495;
    if ( v86 > 0 )
    {
      v87 = v84;
      v387 = v85;
      do
      {
        v88 = *(uint32_t *)(v420 + 4 * v87++);
        *(uint16_t *)(v415 + 4 * v88 + 2) = 0;
      }
      while ( v87 != v86 + v84 );
      v85 = v387;
      v84 += v86;
    }
    if ( v458 <= v84 )
    {
      v476 -= v86;
      goto LABEL_102;
    }
    v395 = v86;
    v388 = v85;
    v371 = *(&v509 + (v449 >> 1)) + 12876;
    while ( 2 )
    {
      while ( 2 )
      {
        v91 = oc_huff_token_decode(v469, *(uint32_t *)(a1 + 4 * v371 + 8));
        v92 = v91;
        *(uint8_t *)(v427 + v495) = v91;
        if ( v91 <= 0xE )
        {
          v189 = oc_pack_read(v469, (uint8_t)byte_1D0E9B0[v91]);
          *(uint8_t *)(v427 + v495 + 1) = v189;
          v379 = v495 + 2;
          if ( v92 == 0 )
          {
            *(uint8_t *)(v427 + v495 + 2) = BYTE1(v189);
            v379 = v495 + 3;
          }
          v93 = v189 << ((v92 <= 1 ? 0xF3 : 0) + (v92 <= 11 ? 0x15 : 0));
          v495 = v379;
        }
        else
        {
          ++v495;
          v93 = 0;
        }
        v94 = dword_1D0E840[v92] + v93;
        v476 = 0x7FFFFFFF;
        if ( v94 != 0 )
        {
          v476 = (v94 >> 8) & 0xFFF;
          if ( v476 == 0 )
          {
            LOWORD(v89) = 0;
            if ( (uint8_t)v94 == 0 )
              v89 = (v94 ^ -(v94 & 0x100000)) >> 21;
            ++*(uint32_t *)&v513[2 * (uint8_t)v94];
            v90 = *(uint32_t *)(v420 + 4 * v84++);
            *(uint16_t *)(v415 + 4 * v90 + 2) = v89;
LABEL_93:
            if ( v458 <= v84 )
              goto LABEL_101;
            continue;
          }
        }
        break;
      }
      v95 = v476 > v458 - v84 ? v458 - v84 - v476 : 0;
      v96 = v95 + v476;
      v395 += v95 + v476;
      v476 = -v95;
      if ( v96 <= 0 )
        goto LABEL_93;
      v97 = v96 - 1;
      v98 = v84;
      v99 = v84 + v96;
      do
      {
        v100 = *(uint32_t *)(v420 + 4 * v98++);
        *(uint16_t *)(v415 + 4 * v100 + 2) = 0;
      }
      while ( v98 != v99 );
      v84 += v97 + 1;
      if ( v458 > v84 )
        continue;
      break;
    }
LABEL_101:
    v86 = v395;
    v85 = v388;
LABEL_102:
    v101 = v515 + v86;
    v102 = &v514;
    v515 = v101;
    do
    {
      v101 += *v102;
      *v102-- = v101;
    }
    while ( v102 != &v512 );
    for ( n = 63; n != -1; --n )
      v402[n] -= *(uint32_t *)&v85[2 * n];
    v436 += 256;
    v402 += 64;
    if ( ++v449 != 4 )
      continue;
    break;
  }
  *(uint32_t *)(a1 + 53376) = v495;
  v309 = v85;
  v104 = oc_pack_read(v469, 4);
  v509 = v104;
  v105 = oc_pack_read(v469, 4);
  v361 = 1;
  v106 = 1;
  v107 = v309;
  while ( 1 )
  {
    v510 = v105 + 16;
    v509 = v104 + 16;
    v345 = byte_1D0E9C0[v361];
    if ( v106 < v345 )
    {
      v372 = v106;
      v403 = 63 - v106;
      v428 = *(uint32_t *)(a1 + 53376);
      v381 = (char *)v516 + 4 * v106;
      do
      {
        v416 = 0;
        v459 = *(uint32_t *)(a1 + 53368);
        v421 = (int *)(a1 + 4 * v372 + 52600);
        v108 = (unsigned int *)v381;
        do
        {
          ++v416;
          v376 = v107;
          v496 = 0;
          v396 = v108;
          *v421 = v476;
          *(v421 - 192) = v428;
          v109 = v107;
          v450 = *v108;
          v110 = 0;
          v111 = v428;
          memset(v109, 0, 0x100u);
          v112 = v476;
          while ( 1 )
          {
            v115 = v112 + v110;
            if ( v450 <= v112 + v110 )
              break;
            v496 += v112;
            v310 = v111;
            v116 = oc_huff_token_decode(v469, *(uint32_t *)(a1 + 4 * *(&v509 + (v416 >> 1)) + 51512));
            *(uint8_t *)(v459 + v310) = v116;
            v477 = v310 + 1;
            v117 = 0;
            if ( (unsigned int)v116 <= 0xE )
            {
              v118 = oc_pack_read(v469, (uint8_t)byte_1D0E9B0[v116]);
              *(uint8_t *)(v459 + v310 + 1) = v118;
              v477 = v310 + 2;
              if ( v116 == 0 )
              {
                *(uint8_t *)(v459 + v310 + 2) = BYTE1(v118);
                v477 = v310 + 3;
              }
              v117 = v118 << ((v116 <= 11 ? 0x15 : 0) + (v116 <= 1 ? 0xF3 : 0));
            }
            v113 = dword_1D0E840[v116] + v117 == 0;
            v114 = dword_1D0E840[v116] + v117;
            v112 = 0x7FFFFFFF;
            if ( !v113 )
            {
              v112 = (v114 >> 8) & 0xFFF;
              if ( v112 == 0 )
              {
                ++v115;
                ++*(uint32_t *)&v513[2 * (uint8_t)v114];
              }
            }
            v110 = v115;
            v111 = v477;
          }
          v190 = v515 + v496 - v110 + v450;
          v428 = v111;
          v107 = v376;
          v476 = v115 - v450;
          v515 = v190;
          v191 = &v514;
          do
          {
            v190 += *v191;
            *v191-- = v190;
          }
          while ( v191 != &v512 );
          if ( v403 + 1 > 0 )
          {
            v192 = v403;
            do
            {
              v396[v192] -= *((uint32_t *)v376 + v192);
              --v192;
            }
            while ( v192 + 1 > 0 );
          }
          v421 += 64;
          v108 = v396 + 64;
        }
        while ( v416 != 3 );
        ++v372;
        --v403;
        v381 += 4;
        *(uint32_t *)(a1 + 53376) = v428;
      }
      while ( v372 < v345 );
      v106 = v345;
    }
    if ( ++v361 == 5 )
      break;
    v104 = v509;
    v105 = v510;
  }
  v308 = *(uint64_t *)(a1 + 712);
  v193 = v308
       - *(uint64_t *)(a1 + 704)
       + ((*(uint64_t *)(a1 + 704) + *(uint8_t *)(a1 + 729)) << *(uint32_t *)(a1 + 60));
  *(uint64_t *)(a1 + 720) = v193;
  *(uint64_t *)(a1 + 712) = v308 + 1;
  if ( a3 != nullptr )
    *a3 = v193;
  v526 = (*(uint32_t *)(a1 + 48) & 2) == 0 ? 8 : 4;
  std::memcpy(&v517[128], (const void *)(a1 + 51832), 768);
  std::memcpy(&v517[224], (const void *)(a1 + 52600), 768);
  v194 = *(uint32_t *)(a1 + 256);
  v195 = *(uint32_t *)(a1 + 216);
  v518 = *(uint32_t *)(a1 + 252);
  v196 = v518 + 4 * v194;
  v197 = v194 - *(uint32_t *)(a1 + 120);
  v521 = v518 + 4 * v195;
  v519 = v196;
  v198 = *(uint32_t *)(a1 + 260);
  v199 = v198 - *(uint32_t *)(a1 + 152);
  v522 = v521 + 4 * v197;
  v200 = *(uint8_t *)(a1 + 730);
  v520 = v196 + 4 * v198;
  v201 = 0;
  v523 = v522 + 4 * v199;
  do
  {
    if ( v200 != 0 )
    {
      v483 = v201;
      v202 = (uint32_t *)(&v524[3 * v201]);
      v203 = a1;
      v204 = 0;
      do
      {
        v205 = *(uint8_t *)(v203 + v204++ + 731);
        v206 = v483 + 3 * v205;
        *v202 = *(uint32_t *)(v203 + 8 * v206 + 736);
        v203 = a1;
        v202[1] = *(uint32_t *)(a1 + 8 * v206 + 740);
        v202 += 2;
      }
      while ( v204 < v200 );
      v201 = v483;
    }
    ++v201;
  }
  while ( v201 != 3 );
  memset(v525, 0, sizeof(v525));
  v527 = oc_state_loop_filter_init(a1, v517) == 0;
  v207 = *(uint32_t *)(a1 + 53380);
  if ( v207 <= 0 )
  {
    if ( *(uint32_t *)(a1 + 53896) != 0 )
    {
      free(*(void **)(a1 + 53896));
      v222 = *(void **)(a1 + 53900);
      *(uint32_t *)(a1 + 53896) = 0;
      free(v222);
      *(uint32_t *)(a1 + 53900) = 0;
      free(*(void **)(a1 + 53904));
      *(uint32_t *)(a1 + 53904) = 0;
    }
    goto LABEL_383;
  }
  v208 = *(uint32_t *)(a1 + 53896);
  if ( v208 == 0 )
  {
    if ( *(uint8_t *)(a1 + 728) == 0 )
    {
      v298 = *(uint32_t *)(a1 + 216);
      v299 = malloc(v298);
      *(uint32_t *)(a1 + 53896) = (uint32_t)(uintptr_t)(v299);
      if ( v299 != nullptr )
      {
        memset(v299, *(uint8_t *)(a1 + 731), v298);
        v207 = *(uint32_t *)(a1 + 53380);
        goto LABEL_370;
      }
    }
    goto LABEL_383;
  }
  v209 = *(uint32_t *)(a1 + 252);
  v210 = *(uint32_t *)(a1 + 264) + *(uint32_t *)(a1 + 260) + *(uint32_t *)(a1 + 256);
  v484 = *(uint8_t *)(a1 + 731);
  if ( v210 > 0 )
  {
    for ( ii = 0; ii != v210; ++ii )
    {
      v212 = *(uint32_t *)(v209 + 4 * ii);
      *(uint8_t *)(v208 + v212) = v484;
    }
    v207 = *(uint32_t *)(a1 + 53380);
  }
LABEL_370:
  if ( v207 <= 1 )
  {
    if ( *(uint32_t *)(a1 + 53900) != 0 )
    {
      free(*(void **)(a1 + 53900));
      *(uint32_t *)(a1 + 53900) = 0;
      free(*(void **)(a1 + 53904));
      *(uint32_t *)(a1 + 53904) = 0;
    }
    goto LABEL_383;
  }
  if ( *(uint32_t *)(a1 + 53900) != 0 )
  {
    v213 = *(uint32_t *)(a1 + 53908);
    v214 = (uint32_t *)a1;
    goto LABEL_373;
  }
  v296 = malloc(
           *(uint32_t *)(a1 + 8) * *(uint32_t *)(a1 + 4)
         + 2
         * (*(uint32_t *)(a1 + 4) >> ((*(uint32_t *)(a1 + 48) & 1) == 0))
         * (*(uint32_t *)(a1 + 8) >> ((*(uint32_t *)(a1 + 48) & 2) == 0)));
  *(uint32_t *)(a1 + 53904) = (uint32_t)(uintptr_t)(v296);
  v297 = malloc(4 * *(uint32_t *)(a1 + 216));
  *(uint32_t *)(a1 + 53900) = (uint32_t)(uintptr_t)(v297);
  if ( v297 == nullptr || v296 == nullptr )
  {
    free(v296);
    *(uint32_t *)(a1 + 53904) = 0;
    free(*(void **)(a1 + 53900));
    *(uint32_t *)(a1 + 53900) = 0;
LABEL_383:
    v528 = 0;
    v223 = (uint32_t *)(a1 + 48 * *(uint32_t *)(a1 + 280) + 288);
    *(uint32_t *)(a1 + 53912) = *v223;
    *(uint32_t *)(a1 + 53916) = v223[1];
    *(uint32_t *)(a1 + 53920) = v223[2];
    *(uint32_t *)(a1 + 53924) = v223[3];
    *(uint32_t *)(a1 + 53928) = v223[4];
    *(uint32_t *)(a1 + 53932) = v223[5];
    *(uint32_t *)(a1 + 53936) = v223[6];
    *(uint32_t *)(a1 + 53940) = v223[7];
    *(uint32_t *)(a1 + 53944) = v223[8];
    *(uint32_t *)(a1 + 53948) = v223[9];
    *(uint32_t *)(a1 + 53952) = v223[10];
    *(uint32_t *)(a1 + 53956) = v223[11];
    v215 = (uint32_t *)(a1 + 53912);
    goto LABEL_384;
  }
  v213 = 0;
  v214 = (uint32_t *)a1;
  *(uint32_t *)(a1 + 53908) = 0;
LABEL_373:
  v215 = v214 + 13478;
  if ( (v207 >= 5) + 1 != v213 )
  {
    if ( v207 <= 4 )
    {
      v216 = v214;
      v217 = v214[1];
      v214[13478] = v217;
      v218 = v214[2];
      v219 = -v217;
      v216[13480] = v219;
      v216[13479] = v218;
      *(uint32_t *)(a1 + 53924) = *(uint32_t *)(a1 + 53904) + v219 * (1 - v218);
      goto LABEL_376;
    }
    v300 = *(uint32_t *)(a1 + 4);
    v307 = *(uint32_t *)(a1 + 8);
    v301 = v300 >> ((*(uint32_t *)(a1 + 48) & 1) == 0);
    v492 = v307 >> ((*(uint32_t *)(a1 + 48) & 2) == 0);
    *(uint32_t *)(a1 + 53916) = v307;
    *(uint32_t *)(a1 + 53912) = v300;
    *(uint32_t *)(a1 + 53920) = v300;
    v322 = *(uint32_t *)(a1 + 53904);
    *(uint32_t *)(a1 + 53924) = v322;
    *(uint32_t *)(a1 + 53928) = v301;
    *(uint32_t *)(a1 + 53936) = v301;
    *(uint32_t *)(a1 + 53944) = v301;
    *(uint32_t *)(a1 + 53952) = v301;
    v302 = v322 + v307 * v300;
    *(uint32_t *)(a1 + 53932) = v492;
    *(uint32_t *)(a1 + 53956) = v302 + v492 * v301;
    *(uint32_t *)(a1 + 53940) = v302;
    *(uint32_t *)(a1 + 53948) = v492;
    oc_ycbcr_buffer_flip(v215, v215);
    v207 = *(uint32_t *)(a1 + 53380);
    v220 = 2;
    if ( v207 <= 4 )
LABEL_376:
      v220 = 1;
    *(uint32_t *)(a1 + 53908) = v220;
  }
  if ( v207 <= 4 )
  {
    v207 = *(uint32_t *)(a1 + 53380);
    v221 = (uint32_t *)(a1 + 48 * *(uint32_t *)(a1 + 280) + 304);
    *(uint32_t *)(a1 + 53928) = *v221;
    *(uint32_t *)(a1 + 53932) = v221[1];
    *(uint32_t *)(a1 + 53936) = v221[2];
    *(uint32_t *)(a1 + 53940) = v221[3];
    *(uint32_t *)(a1 + 53944) = v221[4];
    *(uint32_t *)(a1 + 53948) = v221[5];
    *(uint32_t *)(a1 + 53952) = v221[6];
    *(uint32_t *)(a1 + 53956) = v221[7];
  }
  v528 = v207;
LABEL_384:
  oc_ycbcr_buffer_flip(v511, v215);
  v224 = v526;
  v344 = 0;
  v328 = 0;
  while ( 1 )
  {
    v380 = 0;
    v346 = *(uint32_t *)(a1 + 112);
    v348 = v224 + v328 < v346;
    v375 = (uint32_t *)(v517);
    v327 = (uint16_t **)v517;
    v335 = v346;
    while ( 1 )
    {
      v336 = v380 != 0 && (*(uint8_t *)(a1 + 48) & 2) == 0;
      v349 = 0;
      v418 = 0;
      v352 = v328 >> v336;
      v375[670] = v328 >> v336;
      v225 = *(uint32_t *)(a1 + 32 * (v380 + 3) + 16)
           + ((v224 >> v336) + (v328 >> v336) < *(uint32_t *)(a1 + 32 * (v380 + 3) + 16)
            ? (v224 >> v336) + (v328 >> v336) - *(uint32_t *)(a1 + 32 * (v380 + 3) + 16)
            : 0);
      v375[673] = v225;
      v341 = (uint32_t *)(a1 + 32 * (v380 + 3));
      v384 = v225;
      v410 = &v525[3 * v380];
      v453 = v341[3];
      v432 = *(uint32_t *)(a1 + 204);
      if ( v328 >> v336 < v225 )
      {
        v226 = v341[5] + v453 * v352;
        v398 = v328 >> v336;
        v423 = v432 - 4 * v453;
        do
        {
          if ( v398 != 0 )
          {
            v465 = -1;
            v227 = (uint8_t *)(v423 + 4 * v226);
            if ( (*v227 & 1) != 0 )
              v465 = (268505377 >> (4 * (v227[1] & 7))) & 0xF;
            if ( v453 > 0 )
            {
              v228 = -1;
              v391 = v226 + 1;
              v485 = 0;
              v470 = (uint8_t *)(v423 + 4 * (v226 + 1));
              v363 = -1;
              while ( 1 )
              {
                ++v485;
                v503 = -1;
                if ( v453 > v485 && (*v470 & 1) != 0 )
                  v503 = (268505377 >> (4 * (v470[1] & 7))) & 0xF;
                v443 = 4 * v226;
                v229 = v432 + 4 * v226;
                if ( (*(uint8_t *)v229 & 1) != 0 )
                {
                  v339 = (268505377 >> (4 * (*(uint8_t *)(v229 + 1) & 7))) & 0xF;
                  switch ( (8 * (v339 == v503)) | (4 * (v339 == v465)) | (v339 == v228) | (2 * (v339 == v363)) )
                  {
                    case 0:
                      ++v226;
                      v231 = (int *)(&v410[v339]);
                      v443 = *v231;
                      break;
                    case 1:
                    case 3:
                      v241 = v432;
                      goto LABEL_416;
                    case 2:
                      v241 = v432 - 4 * v453;
LABEL_416:
                      v240 = *(uint16_t *)(v241 + 4 * v226 - 2);
                      goto LABEL_413;
                    case 4:
                    case 6:
                    case 0xC:
                      v240 = *(uint16_t *)(v423 + v443 + 2);
LABEL_413:
                      LOWORD(v443) = v240;
                      goto LABEL_414;
                    case 5:
                      v239 = *(int16_t *)(v432 + 4 * v226++ - 2);
                      v443 = (v239 + *(int16_t *)(v423 + v443 + 2)) / 2;
                      v231 = (int *)(&v410[v339]);
                      break;
                    case 7:
                    case 0xF:
                      v235 = 4 * v226 - 4;
                      v364 = *(int16_t *)(v432 + v235 + 2);
                      v358 = *(int16_t *)(v423 + v235 + 2);
                      v236 = *(int16_t *)(v423 + v443 + 2);
                      LOWORD(v443) = v236;
                      v337 = (29 * (v236 + v364) - 26 * v358) / 32;
                      v237 = __builtin_abs(v337 - v236);
                      if ( ((int)(v237 - 128) < 0) ^ __OFADD__(-128, v237) | (v237 == 128) )
                      {
                        v238 = __builtin_abs(v337 - v364);
                        if ( ((int)(v238 - 128) < 0) ^ __OFADD__(-128, v238) | (v238 == 128) )
                        {
                          v261 = __builtin_abs(v337 - v358);
                          ++v226;
                          if ( ((int)(v261 - 128) < 0) ^ __OFADD__(-128, v261) | (v261 == 128) )
                          {
                            v231 = (int *)(&v410[v339]);
                            LOWORD(v443) = (29 * (v236 + v364) - 26 * v358) / 32;
                          }
                          else
                          {
                            v231 = (int *)(&v410[v339]);
                            LOWORD(v443) = v358;
                          }
                        }
                        else
                        {
                          ++v226;
                          v231 = (int *)(&v410[v339]);
                          LOWORD(v443) = v364;
                        }
                      }
                      else
                      {
LABEL_414:
                        ++v226;
                        v231 = (int *)(&v410[v339]);
                      }
                      break;
                    case 8:
                      ++v226;
                      LOWORD(v443) = *(uint16_t *)(v423 + 4 * v226 + 2);
                      v231 = (int *)(&v410[v339]);
                      break;
                    case 9:
                    case 0xB:
                    case 0xD:
                      v234 = *(int16_t *)(v432 + 4 * v226++ - 2);
                      v443 = (75 * v234 + 53 * *(int16_t *)(v423 + 4 * v226 + 2)) / 128;
                      v231 = (int *)(&v410[v339]);
                      break;
                    case 0xA:
                      v233 = *(int16_t *)(v423 + 4 * v226++ - 2);
                      v443 = (v233 + *(int16_t *)(v423 + 4 * v226 + 2)) / 2;
                      v231 = (int *)(&v410[v339]);
                      break;
                    case 0xE:
                      v230 = *(int16_t *)(v423 + 4 * v226++ - 2);
                      v443 = (3 * (v230 + *(int16_t *)(v423 + 4 * v226 + 2)) + 10 * *(int16_t *)(v423 + v443 + 2)) / 16;
                      v231 = (int *)(&v410[v339]);
                      break;
                    default:
                      abort();
                  }
                  v232 = *(uint16_t *)(v229 + 2) + v443;
                  *(uint16_t *)(v229 + 2) = v232;
                  ++v418;
                  *v231 = v232;
                  v228 = v339;
                }
                else
                {
                  v228 = -1;
                  ++v226;
                }
                v470 += 4;
                if ( v485 == v453 )
                  break;
                v363 = v465;
                v465 = v503;
              }
              v226 = v453 - 1 + v391;
            }
          }
          else if ( v453 > 0 )
          {
            v292 = v432 + 4 * v226;
            for ( jj = 0; jj != v453; ++jj )
            {
              if ( (*(uint8_t *)v292 & 1) != 0 )
              {
                ++v418;
                v294 = &v410[(268505377 >> (4 * (*(uint8_t *)(v292 + 1) & 7))) & 0xF];
                v295 = *(uint16_t *)(v292 + 2) + *v294;
                *(uint16_t *)(v292 + 2) = v295;
                *v294 = v295;
              }
              v292 += 4;
            }
            v226 += v453;
          }
          ++v398;
        }
        while ( v398 != v384 );
        v349 = 4 * v418;
        v432 = *(uint32_t *)(a1 + 204);
      }
      v466 = *(uint32_t *)(a1 + 53368);
      v375[646] = v418;
      v242 = v453 * (v384 - v352) - v418;
      v399 = &v517[32 * v380 + 128];
      v375[649] = v242;
      v359 = v375[640];
      v424 = &v517[32 * v380 + 224];
      v513[0] = *v327[652];
      v411 = *(uint32_t *)(a1 + 100);
      v513[1] = *v327[653];
      if ( v418 != 0 )
      {
        for ( kk = 0; kk != v418; ++kk )
        {
          v369 = *(uint32_t *)(v359 + 4 * kk);
          memset(v516, 0, 128);
          v385 = v432 + 4 * v369;
          v365 = (*(uint8_t *)(v385 + 1) & 7) != 1;
          v486 = 0;
          v444 = *((uint32_t *)&v517[3 * v380 + 326 + (*(uint8_t *)v385 >> 2)] + v365);
          for ( mm = 0; ; mm = v250 )
          {
            v251 = 4 * mm;
            v504 = (int *)((char *)v424 + v251);
            v252 = *(uint32_t *)((char *)v424 + v251);
            if ( v252 != 0 )
              break;
            v471 = (uint32_t *)((char *)v399 + v251);
            v253 = *(uint32_t *)((char *)v399 + v251);
            v254 = *(uint8_t *)(v466 + v253);
            v244 = v253 + 1;
            v245 = dword_1D0E840[v254];
            if ( v254 <= 0xE )
            {
              v244 = v253 + 2;
              v245 += *(uint8_t *)(v466 + v253 + 1) << ((*(uint8_t *)(v466 + v253) <= 1u ? 0xF3 : 0)
                                                              + (*(uint8_t *)(v466 + v253) <= 0xBu ? 0x15 : 0));
              v246 = (v245 >> 8) & 0xFFF;
              if ( *(uint8_t *)(v466 + v253) != 0 )
              {
                v454 = v246 == 0;
              }
              else
              {
                v454 = false;
                v244 = v253 + 3;
                v246 += *(uint8_t *)(v466 + v253 + 2) << 8;
                if ( v246 == 0 )
                  v246 = 0x7FFFFFFF;
              }
            }
            else
            {
              v246 = (v245 >> 8) & 0xFFF;
              v454 = v246 == 0;
            }
            *v504 = v246;
            v247 = v486 + (uint8_t)v245;
            *v471 = v244;
            v248 = *(uint16_t *)(v444 + 2 * v247) * ((v245 ^ -(v245 & 0x100000)) >> 21);
            v249 = *(uint8_t *)(v411 + v247);
            v250 = v454 + v247;
            *((uint16_t *)v516 + v249) = v248;
            if ( v250 > 63 )
              goto LABEL_435;
            v486 = v250;
          }
          *(uint32_t *)((char *)v424 + v251) = v252 - 1;
LABEL_435:
          LOWORD(v516[0]) = *(uint16_t *)(v385 + 2);
          oc_state_frag_recon(a1, v369, v380, v516, v486, v513[v365]);
        }
        v242 = v375[649];
      }
      v375[640] += v349;
      v255 = v375[643] - 4 * v242;
      v375[643] = v255;
      oc_state_frag_copy_list(a1, v255, v242, 2, 1, v380);
      if ( v527 )
      {
        oc_state_loop_filter_frag_rows(a1, v517, v347, v380, v375[670] - v344, v375[673] - v348);
        v256 = 2 * v348;
        v487 = 2 * v344;
        v258 = v344;
        v257 = v348;
      }
      else
      {
        v487 = 0;
        v256 = 0;
        v257 = 0;
        v258 = 0;
      }
      oc_state_borders_fill_rows(a1, v347, v380, 8 * (v375[670] - v258) - v487, 8 * (v375[673] - v257) - v256);
      if ( v528 > (v380 == 0 ? 1 : 4) )
      {
        v325 = (uint32_t *)(a1 + 16 * (v380 + 3369));
        v338 = v348 + v257;
        v340 = v344 + v258;
        v505 = a1 + 48 * v347 + 288 + 16 * v380;
        v262 = v375[670] - (v344 + v258);
        v263 = v375[673] - v338;
        v264 = v341[3];
        v265 = v341[5] + v262 * v264;
        v393 = (uint32_t *)(*(uint32_t *)(a1 + 53900) + 4 * v265);
        v455 = (uint8_t *)(*(uint32_t *)(a1 + 53896) + v265);
        v472 = v262 > 0;
        v331 = v263 < v341[4];
        v445 = v264;
        memset(&v393[v264 & -v472], 0, 4 * v264 * (v263 + v331 - v262 - v472));
        v412 = 4 * v472 + 8 * v262;
        v467 = *(uint32_t *)(v505 + 8);
        v473 = v325[4];
        v400 = v325[5] + v473 * v412;
        v266 = (char *)(*(uint32_t *)(v505 + 12) + v467 * v412);
        v386 = v266;
        v366 = v325[2];
        if ( v412 <= 3 )
        {
          v488 = v263;
          v267 = v412;
          v268 = (char *)(v325[5] + v325[4] * v412);
          do
          {
            v318 = v267;
            memcpy(v268, v266, v366);
            v268 += v473;
            v267 = v318 + 1;
            v266 += v467;
          }
          while ( v318 != 3 );
          v263 = v488;
          v269 = 4 - v412;
          v400 += (4 - v412) * v473;
          v412 += ~v412 + 5;
          v386 += v269 * v467;
        }
        v330 = 8 * (v263 - !v331);
        if ( v412 < v330 )
        {
          v353 = (uint8_t *)&v386[-v467];
          v326 = 8 * v467;
          v433 = &v386[-v467 - v400];
          v329 = 8 * v473;
          v333 = v412;
          v350 = (uint8_t *)v400;
          do
          {
            v304 = *(uint32_t *)(a1 + 4 * *v455 + 53384);
            sub_1388B00(v350, v473, v353, v467, v304, (3 * v304) >> 2, v393, &v393[v445]);
            ++v393;
            if ( v366 <= 8 )
            {
              ++v455;
            }
            else
            {
              v489 = v350 + 8;
              v270 = v393;
              v506 = 0;
              do
              {
                v271 = *(uint32_t *)(a1 + 4 * v455[v506 + 1] + 53384);
                sub_1388B00(v489, v473, &v489[(uint32_t)(uintptr_t)(v433)], v467, v271, (3 * v271) >> 2, v270, &v270[v445]);
                v305 = v270++ - 1;
                sub_1388EA0(&v489[-4 - 4 * v473], v473, v271, (3 * v271) >> 2, v305);
                ++v506;
                v489 += 8;
              }
              while ( v506 != ((unsigned int)(v366 - 9) >> 3) + 1 );
              v455 += v506 + 1;
              v393 += v506;
            }
            v333 += 8;
            v350 += v329;
            v353 += v326;
            v433 += 8 * v467 - 8 * v473;
          }
          while ( v330 > v333 );
          v272 = (unsigned int)(v330 - 1 - v412) >> 3;
          v400 += (v272 + 1) * v329;
          v386 += (v272 + 1) * v326;
          v412 += 8 * v272 + 8;
        }
        if ( !v331 )
        {
          v273 = v325[3];
          if ( v412 < v273 )
          {
            v274 = v412;
            v275 = (char *)v400;
            do
            {
              v319 = v273;
              ++v274;
              memcpy(v275, v386, v366);
              v273 = v319;
              v275 += v473;
              v386 += v467;
            }
            while ( v274 != v319 );
            v400 += v473 * (v274 - v412);
          }
          if ( v366 > 8 )
          {
            v276 = v393;
            v277 = v400 - 8 * v473 + 4;
            v278 = 0;
            while ( 1 )
            {
              v279 = v455[++v278];
              v303 = *(uint32_t *)(a1 + 4 * v279 + 53384);
              v490 = v276 + 1;
              v280 = (uint8_t *)v277;
              v277 += 8;
              sub_1388EA0(v280, v473, v303, (3 * v303) >> 2, v276);
              if ( v278 == ((unsigned int)(v366 - 9) >> 3) + 1 )
                break;
              v276 = v490;
            }
          }
        }
        if ( v528 <= (v380 == 0 ? 2 : 5) )
        {
          v259 = v375[670] - v340;
          v260 = v375[673] - v338;
          goto LABEL_443;
        }
        v260 = v375[673] - (v348 + v338);
        v259 = v375[670] - (v344 + v340);
        v281 = v341[3];
        v334 = *(uint32_t *)(a1 + 53380);
        v425 = v325[4];
        v282 = 8 * v259;
        v343 = 8 * v260;
        v468 = v325[2];
        v413 = v325[3];
        if ( 8 * v259 < 8 * v260 )
        {
          v283 = 4 * (v341[5] + v281 * v259);
          v367 = (uint8_t *)(*(uint32_t *)(a1 + 204) + v283);
          v360 = (int *)(v283 + *(uint32_t *)(a1 + 53900));
          v434 = v282 + 8;
          v342 = v281;
          v370 = v325[5] + v282 * v425;
          v332 = -1 * v281;
          while ( v468 <= 0 )
          {
            v288 = v434;
LABEL_492:
            v434 += 8;
            v370 += 8 * v425;
            if ( v343 <= v288 )
            {
              v259 = v375[670] - (v344 + v340);
              v260 = v375[673] - (v348 + v338);
              goto LABEL_443;
            }
          }
          v474 = (uint8_t *)v370;
          v507 = v367;
          v491 = v360;
          v284 = 0;
          while ( 2 )
          {
            v446 = *(uint8_t *)(a1 + (*v507 >> 2) + 731);
            v285 = *v491;
            v286 = v284 <= 0;
            v284 += 8;
            v287 = (8 * (v413 <= v434)) | (4 * (v434 - 8 <= 0)) | v286 | (2 * (v468 <= v284));
            if ( *v491 <= (v380 == 0 ? 1920 : 3840) || v334 < (v380 == 0 ? 4 : 7) )
            {
              if ( v285 > 1536 )
              {
                v306 = 1;
              }
              else
              {
                if ( v285 <= 384 )
                  goto LABEL_483;
                v306 = 0;
              }
              v321 = v284;
              sub_1389150(
                v474,
                v425,
                v287,
                *(uint32_t *)(a1 + 4 * v446 + 53384),
                *(uint32_t *)(a1 + 4 * v446 + 53640),
                v306);
              v284 = v321;
            }
            else
            {
              v394 = v446 + 13408;
              v456 = v446 + 13344;
              v320 = v284;
              sub_1389150(
                v474,
                v425,
                v287,
                *(uint32_t *)(a1 + 4 * (v446 + 13344) + 8),
                *(uint32_t *)(a1 + 4 * (v446 + 13408) + 8),
                1);
              v284 = v320;
              if ( v380 != 0
                || (v287 & 1) == 0 && *(v491 - 1) > 3840
                || (v287 & 2) == 0 && v491[1] > 3840
                || (v287 & 4) == 0 && v491[v332] > 3840
                || (v287 & 8) == 0 && v491[v342] > 3840 )
              {
                sub_1389150(v474, v425, v287, *(uint32_t *)(a1 + 4 * v456 + 8), *(uint32_t *)(a1 + 4 * v394 + 8), 1);
                sub_1389150(v474, v425, v287, *(uint32_t *)(a1 + 4 * v456 + 8), *(uint32_t *)(a1 + 4 * v394 + 8), 1);
                v284 = v320;
              }
            }
LABEL_483:
            v507 += 4;
            ++v491;
            v474 += 8;
            if ( v468 <= v284 )
            {
              v288 = v434;
              v289 = 4 * ((unsigned int)(v468 - 1) >> 3) + 4;
              v367 += v289;
              v360 = (int *)((char *)v360 + v289);
              goto LABEL_492;
            }
            continue;
          }
        }
      }
      else
      {
        if ( v527 )
        {
          v258 += v344;
          v257 += v348;
        }
        v259 = v375[670] - v258;
        v260 = v375[673] - v257;
      }
LABEL_443:
      v335 += v335 > v259 << v336 ? (v259 << v336) - v335 : 0;
      ++v380;
      ++v375;
      v346 += v346 > v260 << v336 ? (v260 << v336) - v346 : 0;
      v327 += 6;
      if ( v380 == 3 )
        break;
      v224 = v526;
    }
    if ( *(uint32_t *)(a1 + 53964) != 0 )
    {
      oc_restore_fpu(a1);
      (*(void (**)(uint32_t, uint8_t *, int, int))(a1 + 53964))(
        *(uint32_t *)(a1 + 53960),
        v511,
        *(uint32_t *)(a1 + 112) - v346,
        *(uint32_t *)(a1 + 112) - v335);
    }
    v224 = v526;
    v328 += v526;
    if ( v348 == 0 )
      break;
    v344 = 1;
  }
  oc_state_borders_fill_caps(a1, v347, 0);
  oc_state_borders_fill_caps(a1, v347, 1);
  oc_state_borders_fill_caps(a1, v347, 2);
  if ( *(uint8_t *)(a1 + 728) != 0 )
  {
    v291 = a1;
    *(uint32_t *)(a1 + 276) = *(uint32_t *)(a1 + 280);
  }
  else
  {
    v290 = *(uint32_t *)(a1 + 280);
    v291 = a1;
    *(uint32_t *)(a1 + 276) = v290;
    *(uint32_t *)(a1 + 272) = v290;
  }
  oc_restore_fpu(v291);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: th_decode_ycbcr_out  (binary VA: 0x138f1b0)
// Original: th_decode_ycbcr_out
// ----------------------------------------------------------------------------
int th_decode_ycbcr_out(int a1, int a2)
{
  if ( a2 == 0 || a1 == 0 )
    return -1;
  oc_ycbcr_buffer_flip(a2, a1 + 53912);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oc_quant_params_unpack  (binary VA: 0x138f200)
// Original: oc_quant_params_unpack
// ----------------------------------------------------------------------------
int oc_quant_params_unpack(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int i;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  void *v22;
  char *v23;
  char *v24;
  char *v25;
  int v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char *_g4_t_ptr;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t _g4_t_src[64];
  typedef uint32_t _g4_t_v36[71];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_ptr)) > _g4_s3 ? (16u + sizeof(_g4_t_ptr)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v32)) > _g4_s5 ? (20u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v33)) > _g4_s6 ? (24u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v34)) > _g4_s7 ? (28u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_src)) > _g4_s8 ? (32u + sizeof(_g4_t_src)) : _g4_s8,
    _g4_s10 = (288u + sizeof(_g4_t_v36)) > _g4_s9 ? (288u + sizeof(_g4_t_v36)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 288u);

  v2 = 0;
  v3 = oc_pack_read(a1, 3);
  do
    *(uint8_t *)(a2 + v2++ + 256) = oc_pack_read(a1, v3);
  while ( v2 != 64 );
  LOWORD(v2) = 0;
  v4 = oc_pack_read(a1, 4) + 1;
  do
    *(uint16_t *)(a2 + 2 * v2++ + 128) = oc_pack_read(a1, v4);
  while ( v2 != 64 );
  LOWORD(v2) = 0;
  v5 = oc_pack_read(a1, 4) + 1;
  do
    *(uint16_t *)(a2 + 2 * v2++) = oc_pack_read(a1, v5);
  while ( v2 != 64 );
  v6 = a1;
  v7 = a2;
  v31 = oc_pack_read(a1, 9);
  v33 = v31 + 1;
  ptr = (char *)malloc((v31 + 1) << 6);
  if ( ptr == nullptr )
    return -1;
  if ( v33 > 0 )
  {
    v27 = 1;
    v8 = ptr;
    do
    {
      for ( i = 0; i != 64; ++i )
        v8[i] = oc_pack_read(a1, 8);
      ++v27;
      v8 += 64;
    }
    while ( v27 != v31 + 2 );
    v7 = a2;
  }
  v10 = oc_ilog(v31);
  v29 = 0;
  v34 = v7 + 320;
  while ( 1 )
  {
    v32 = (uint32_t *)(v34 + 12 * (v29 % 3) + 36 * (v29 / 3));
    if ( v29 == 0 || oc_pack_read1(v6) != 0 )
      break;
    if ( v29 / 3 != 1 || (v11 = oc_pack_read1(v6), v12 = 0, v13 = 12 * (v29 % 3), v11 == 0) )
    {
      v12 = 36 * ((v29 - 1) / 3);
      v13 = 12 * ((v29 - 1) % 3);
    }
    v14 = (uint32_t *)(v13 + v34 + v12);
    *v32 = *v14;
    v32[1] = v14[1];
    v32[2] = v14[2];
LABEL_20:
    if ( ++v29 == 6 )
    {
      free(ptr);
      return 0;
    }
  }
  v36[0] = oc_pack_read(v6, v10);
  v28 = v10;
  v16 = 0;
  v17 = v6;
  v18 = 0;
  do
  {
    v19 = oc_ilog(62 - v18);
    v20 = oc_pack_read(v17, v19) + 1;
    src[v16] = v20;
    v18 += v20;
    v36[++v16] = oc_pack_read(v17, v28);
  }
  while ( v18 <= 62 );
  v21 = v18;
  v6 = v17;
  v10 = v28;
  if ( v21 != 63 )
    goto LABEL_31;
  *v32 = v16;
  v22 = malloc(4 * v16);
  v32[1] = (uint32_t)(uintptr_t)(v22);
  if ( v22 != nullptr )
  {
    memcpy(v22, src, 4 * v16);
    v23 = (char *)malloc((v16 + 1) << 6);
    if ( v23 != nullptr )
    {
      v32[2] = (uint32_t)(uintptr_t)(v23);
      v24 = &v23[64 * v16];
      while ( 1 )
      {
        v26 = v36[v16];
        if ( v33 <= v26 )
          break;
        v25 = &ptr[64 * v26];
        --v16;
        *(uint32_t *)v24 = *(uint32_t *)v25;
        *((uint32_t *)v24 + 1) = *((uint32_t *)v25 + 1);
        *((uint32_t *)v24 + 2) = *((uint32_t *)v25 + 2);
        *((uint32_t *)v24 + 3) = *((uint32_t *)v25 + 3);
        *((uint32_t *)v24 + 4) = *((uint32_t *)v25 + 4);
        *((uint32_t *)v24 + 5) = *((uint32_t *)v25 + 5);
        *((uint32_t *)v24 + 6) = *((uint32_t *)v25 + 6);
        *((uint32_t *)v24 + 7) = *((uint32_t *)v25 + 7);
        *((uint32_t *)v24 + 8) = *((uint32_t *)v25 + 8);
        *((uint32_t *)v24 + 9) = *((uint32_t *)v25 + 9);
        *((uint32_t *)v24 + 10) = *((uint32_t *)v25 + 10);
        *((uint32_t *)v24 + 11) = *((uint32_t *)v25 + 11);
        *((uint32_t *)v24 + 12) = *((uint32_t *)v25 + 12);
        *((uint32_t *)v24 + 13) = *((uint32_t *)v25 + 13);
        *((uint32_t *)v24 + 14) = *((uint32_t *)v25 + 14);
        *((uint32_t *)v24 + 15) = *((uint32_t *)v25 + 15);
        v24 -= 64;
        if ( v16 + 1 <= 0 )
          goto LABEL_20;
      }
LABEL_31:
      free(ptr);
      return -20;
    }
  }
  free(ptr);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: oc_quant_params_clear  (binary VA: 0x138f630)
// Original: oc_quant_params_clear
// ----------------------------------------------------------------------------
void oc_quant_params_clear(int a1)
{
  void *ptr;
  int v2;
  void *v3;
  int v4;
  void *v5;
  int v6;
  void *v7;
  void *v8;
  bool v9;

  ptr = *(void **)(a1 + 384);
  if ( ptr == *(void **)(a1 + 372) )
  {
    ptr = nullptr;
    v2 = *(uint32_t *)(a1 + 388);
    v9 = v2 == *(uint32_t *)(a1 + 376);
    *(uint32_t *)(a1 + 384) = 0;
    if ( !v9 )
    {
LABEL_3:
      if ( ptr != *(void **)(a1 + 348) )
        goto LABEL_4;
LABEL_20:
      ptr = nullptr;
      v9 = v2 == *(uint32_t *)(a1 + 352);
      *(uint32_t *)(a1 + 384) = 0;
      if ( !v9 )
        goto LABEL_5;
      goto LABEL_21;
    }
  }
  else
  {
    v2 = *(uint32_t *)(a1 + 388);
    if ( v2 != *(uint32_t *)(a1 + 376) )
      goto LABEL_3;
  }
  v2 = 0;
  v9 = ptr == *(void **)(a1 + 348);
  *(uint32_t *)(a1 + 388) = 0;
  if ( v9 )
    goto LABEL_20;
LABEL_4:
  if ( v2 == *(uint32_t *)(a1 + 352) )
LABEL_21:
    *(uint32_t *)(a1 + 388) = 0;
LABEL_5:
  free(ptr);
  free(*(void **)(a1 + 388));
  v3 = *(void **)(a1 + 372);
  if ( v3 == *(void **)(a1 + 360) )
  {
    v3 = nullptr;
    v4 = *(uint32_t *)(a1 + 376);
    v9 = v4 == *(uint32_t *)(a1 + 364);
    *(uint32_t *)(a1 + 372) = 0;
    if ( !v9 )
    {
LABEL_7:
      if ( v3 != *(void **)(a1 + 336) )
        goto LABEL_8;
LABEL_24:
      v3 = nullptr;
      v9 = v4 == *(uint32_t *)(a1 + 340);
      *(uint32_t *)(a1 + 372) = 0;
      if ( !v9 )
        goto LABEL_9;
      goto LABEL_25;
    }
  }
  else
  {
    v4 = *(uint32_t *)(a1 + 376);
    if ( v4 != *(uint32_t *)(a1 + 364) )
      goto LABEL_7;
  }
  v4 = 0;
  v9 = v3 == *(void **)(a1 + 336);
  *(uint32_t *)(a1 + 376) = 0;
  if ( v9 )
    goto LABEL_24;
LABEL_8:
  if ( v4 == *(uint32_t *)(a1 + 340) )
LABEL_25:
    *(uint32_t *)(a1 + 376) = 0;
LABEL_9:
  free(v3);
  free(*(void **)(a1 + 376));
  v5 = *(void **)(a1 + 360);
  if ( v5 == *(void **)(a1 + 348) )
  {
    v5 = nullptr;
    v6 = *(uint32_t *)(a1 + 364);
    v9 = v6 == *(uint32_t *)(a1 + 352);
    *(uint32_t *)(a1 + 360) = 0;
    if ( !v9 )
    {
LABEL_11:
      if ( v5 != *(void **)(a1 + 324) )
        goto LABEL_12;
LABEL_28:
      v5 = nullptr;
      v9 = v6 == *(uint32_t *)(a1 + 328);
      *(uint32_t *)(a1 + 360) = 0;
      if ( !v9 )
        goto LABEL_13;
      goto LABEL_29;
    }
  }
  else
  {
    v6 = *(uint32_t *)(a1 + 364);
    if ( v6 != *(uint32_t *)(a1 + 352) )
      goto LABEL_11;
  }
  v6 = 0;
  v9 = v5 == *(void **)(a1 + 324);
  *(uint32_t *)(a1 + 364) = 0;
  if ( v9 )
    goto LABEL_28;
LABEL_12:
  if ( v6 == *(uint32_t *)(a1 + 328) )
LABEL_29:
    *(uint32_t *)(a1 + 364) = 0;
LABEL_13:
  free(v5);
  free(*(void **)(a1 + 364));
  v7 = *(void **)(a1 + 348);
  if ( v7 == *(void **)(a1 + 336) )
  {
    v7 = nullptr;
    v9 = *(uint32_t *)(a1 + 352) == *(uint32_t *)(a1 + 340);
    *(uint32_t *)(a1 + 348) = 0;
    if ( !v9 )
      goto LABEL_15;
  }
  else if ( *(uint32_t *)(a1 + 352) != *(uint32_t *)(a1 + 340) )
  {
    goto LABEL_15;
  }
  *(uint32_t *)(a1 + 352) = 0;
LABEL_15:
  free(v7);
  free(*(void **)(a1 + 352));
  v8 = *(void **)(a1 + 336);
  if ( v8 == *(void **)(a1 + 324) )
  {
    v8 = nullptr;
    v9 = *(uint32_t *)(a1 + 340) == *(uint32_t *)(a1 + 328);
    *(uint32_t *)(a1 + 336) = 0;
    if ( !v9 )
      goto LABEL_17;
LABEL_33:
    *(uint32_t *)(a1 + 340) = 0;
    goto LABEL_17;
  }
  if ( *(uint32_t *)(a1 + 340) == *(uint32_t *)(a1 + 328) )
    goto LABEL_33;
LABEL_17:
  free(v8);
  free(*(void **)(a1 + 340));
  free(*(void **)(a1 + 324));
  free(*(void **)(a1 + 328));
}

// ----------------------------------------------------------------------------
// Function: oc_frag_copy  (binary VA: 0x138f960)
// Original: oc_frag_copy
// ----------------------------------------------------------------------------
int oc_frag_copy(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(int, int, int))(a1 + 64))(a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: oc_frag_copy_c  (binary VA: 0x138f990)
// Original: oc_frag_copy_c
// ----------------------------------------------------------------------------
int oc_frag_copy_c(uint32_t *a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  int result;

  *a1 = *a2;
  a1[1] = a2[1];
  v3 = (uint32_t *)((char *)a1 + a3);
  *v3 = *(uint32_t *)((char *)a2 + a3);
  v4 = (uint32_t *)((char *)a2 + a3 + a3);
  v3[1] = *(uint32_t *)((char *)a2 + a3 + 4);
  v5 = (uint32_t *)((char *)a1 + a3 + a3);
  *v5 = *v4;
  v6 = v4[1];
  v7 = (uint32_t *)((char *)v4 + a3);
  v5[1] = v6;
  v8 = (uint32_t *)((char *)v5 + a3);
  *v8 = *v7;
  v9 = v7[1];
  v10 = (uint32_t *)((char *)v7 + a3);
  v8[1] = v9;
  v11 = (uint32_t *)((char *)v8 + a3);
  *v11 = *v10;
  v12 = v10[1];
  v13 = (uint32_t *)((char *)v10 + a3);
  v11[1] = v12;
  v14 = (uint32_t *)((char *)v11 + a3);
  *v14 = *v13;
  v15 = v13[1];
  v16 = (uint32_t *)((char *)v13 + a3);
  v14[1] = v15;
  v17 = (uint32_t *)((char *)v14 + a3);
  *v17 = *v16;
  v17[1] = v16[1];
  v18 = (uint32_t *)((char *)v17 + a3);
  *v18 = *(uint32_t *)((char *)v16 + a3);
  result = *(uint32_t *)((char *)v16 + a3 + 4);
  v18[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_frag_recon_intra  (binary VA: 0x138fa20)
// Original: oc_frag_recon_intra
// ----------------------------------------------------------------------------
int oc_frag_recon_intra(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(int, int, int))(a1 + 68))(a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: oc_frag_recon_intra_c  (binary VA: 0x138fa50)
// Original: oc_frag_recon_intra_c
// ----------------------------------------------------------------------------
int oc_frag_recon_intra_c(uint8_t *a1, int a2, int16_t *a3)
{
  int v3;
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
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint8_t *v28;
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
  uint8_t *v53;
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
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  uint8_t *v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  uint8_t *v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
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
  int v124;
  int v125;
  int v126;
  int v127;
  uint8_t *v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  uint8_t *v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  uint8_t *v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int result;
  int v201;
  char v202;

  LOBYTE(v3) = *a3 > 127;
  v4 = 0;
  v5 = -v3;
  if ( *a3 >= -128 )
    v4 = v5 | (*(uint8_t *)a3 - 128);
  v6 = v4;
  *a1 = v4;
  LOBYTE(v6) = a3[1] > 127;
  v7 = 0;
  v8 = -v6;
  if ( a3[1] >= -128 )
    v7 = v8 | (*((uint8_t *)a3 + 2) - 128);
  v9 = v7;
  a1[1] = v7;
  LOBYTE(v9) = a3[2] > 127;
  v10 = 0;
  v11 = -v9;
  if ( a3[2] >= -128 )
    v10 = v11 | (*((uint8_t *)a3 + 4) - 128);
  v12 = v10;
  a1[2] = v10;
  LOBYTE(v12) = a3[3] > 127;
  v13 = 0;
  v14 = -v12;
  if ( a3[3] >= -128 )
    v13 = v14 | (*((uint8_t *)a3 + 6) - 128);
  v15 = v13;
  a1[3] = v13;
  LOBYTE(v15) = a3[4] > 127;
  v16 = 0;
  v17 = -v15;
  if ( a3[4] >= -128 )
    v16 = v17 | (*((uint8_t *)a3 + 8) - 128);
  v18 = v16;
  a1[4] = v16;
  LOBYTE(v18) = a3[5] > 127;
  v19 = 0;
  v20 = -v18;
  if ( a3[5] >= -128 )
    v19 = v20 | (*((uint8_t *)a3 + 10) - 128);
  v21 = v19;
  a1[5] = v19;
  LOBYTE(v21) = a3[6] > 127;
  v22 = 0;
  v23 = -v21;
  if ( a3[6] >= -128 )
    v22 = v23 | (*((uint8_t *)a3 + 12) - 128);
  v24 = v22;
  a1[6] = v22;
  LOBYTE(v24) = a3[7] > 127;
  v25 = 0;
  v26 = -v24;
  if ( a3[7] >= -128 )
    v25 = v26 | (*((uint8_t *)a3 + 14) - 128);
  v27 = v25;
  a1[7] = v25;
  v28 = &a1[a2];
  LOBYTE(v27) = a3[8] > 127;
  v29 = 0;
  v30 = -v27;
  if ( a3[8] >= -128 )
    v29 = v30 | (*((uint8_t *)a3 + 16) - 128);
  v31 = v29;
  *v28 = v29;
  LOBYTE(v31) = a3[9] > 127;
  v32 = 0;
  v33 = -v31;
  if ( a3[9] >= -128 )
    v32 = v33 | (*((uint8_t *)a3 + 18) - 128);
  v34 = v32;
  v28[1] = v32;
  LOBYTE(v34) = a3[10] > 127;
  v35 = 0;
  v36 = -v34;
  if ( a3[10] >= -128 )
    v35 = v36 | (*((uint8_t *)a3 + 20) - 128);
  v37 = v35;
  v28[2] = v35;
  LOBYTE(v37) = a3[11] > 127;
  v38 = 0;
  v39 = -v37;
  if ( a3[11] >= -128 )
    v38 = v39 | (*((uint8_t *)a3 + 22) - 128);
  v40 = v38;
  v28[3] = v38;
  LOBYTE(v40) = a3[12] > 127;
  v41 = 0;
  v42 = -v40;
  if ( a3[12] >= -128 )
    v41 = v42 | (*((uint8_t *)a3 + 24) - 128);
  v43 = v41;
  v28[4] = v41;
  LOBYTE(v43) = a3[13] > 127;
  v44 = 0;
  v45 = -v43;
  if ( a3[13] >= -128 )
    v44 = v45 | (*((uint8_t *)a3 + 26) - 128);
  v46 = v44;
  v28[5] = v44;
  LOBYTE(v46) = a3[14] > 127;
  v47 = 0;
  v48 = -v46;
  if ( a3[14] >= -128 )
    v47 = v48 | (*((uint8_t *)a3 + 28) - 128);
  v49 = v47;
  v28[6] = v47;
  LOBYTE(v49) = a3[15] > 127;
  v50 = 0;
  v51 = -v49;
  if ( a3[15] >= -128 )
    v50 = v51 | (*((uint8_t *)a3 + 30) - 128);
  v52 = v50;
  v28[7] = v50;
  v53 = &v28[a2];
  LOBYTE(v52) = a3[16] > 127;
  v54 = 0;
  v55 = -v52;
  if ( a3[16] >= -128 )
    v54 = v55 | (*((uint8_t *)a3 + 32) - 128);
  v56 = v54;
  *v53 = v54;
  LOBYTE(v56) = a3[17] > 127;
  v57 = 0;
  v58 = -v56;
  if ( a3[17] >= -128 )
    v57 = v58 | (*((uint8_t *)a3 + 34) - 128);
  v59 = v57;
  v53[1] = v57;
  LOBYTE(v59) = a3[18] > 127;
  v60 = 0;
  v61 = -v59;
  if ( a3[18] >= -128 )
    v60 = v61 | (*((uint8_t *)a3 + 36) - 128);
  v62 = v60;
  v53[2] = v60;
  LOBYTE(v62) = a3[19] > 127;
  v63 = 0;
  v64 = -v62;
  if ( a3[19] >= -128 )
    v63 = v64 | (*((uint8_t *)a3 + 38) - 128);
  v65 = v63;
  v53[3] = v63;
  LOBYTE(v65) = a3[20] > 127;
  v66 = 0;
  v67 = -v65;
  if ( a3[20] >= -128 )
    v66 = v67 | (*((uint8_t *)a3 + 40) - 128);
  v68 = v66;
  v53[4] = v66;
  LOBYTE(v68) = a3[21] > 127;
  v69 = 0;
  v70 = -v68;
  if ( a3[21] >= -128 )
    v69 = v70 | (*((uint8_t *)a3 + 42) - 128);
  v71 = v69;
  v53[5] = v69;
  LOBYTE(v71) = a3[22] > 127;
  v72 = 0;
  v73 = -v71;
  if ( a3[22] >= -128 )
    v72 = v73 | (*((uint8_t *)a3 + 44) - 128);
  v74 = v72;
  v53[6] = v72;
  LOBYTE(v74) = a3[23] > 127;
  v75 = 0;
  v76 = -v74;
  if ( a3[23] >= -128 )
    v75 = v76 | (*((uint8_t *)a3 + 46) - 128);
  v77 = v75;
  v53[7] = v75;
  v78 = &v53[a2];
  LOBYTE(v77) = a3[24] > 127;
  v79 = 0;
  v80 = -v77;
  if ( a3[24] >= -128 )
    v79 = v80 | (*((uint8_t *)a3 + 48) - 128);
  v81 = v79;
  *v78 = v79;
  LOBYTE(v81) = a3[25] > 127;
  v82 = 0;
  v83 = -v81;
  if ( a3[25] >= -128 )
    v82 = v83 | (*((uint8_t *)a3 + 50) - 128);
  v84 = v82;
  v78[1] = v82;
  LOBYTE(v84) = a3[26] > 127;
  v85 = 0;
  v86 = -v84;
  if ( a3[26] >= -128 )
    v85 = v86 | (*((uint8_t *)a3 + 52) - 128);
  v87 = v85;
  v78[2] = v85;
  LOBYTE(v87) = a3[27] > 127;
  v88 = 0;
  v89 = -v87;
  if ( a3[27] >= -128 )
    v88 = v89 | (*((uint8_t *)a3 + 54) - 128);
  v90 = v88;
  v78[3] = v88;
  LOBYTE(v90) = a3[28] > 127;
  v91 = 0;
  v92 = -v90;
  if ( a3[28] >= -128 )
    v91 = v92 | (*((uint8_t *)a3 + 56) - 128);
  v93 = v91;
  v78[4] = v91;
  LOBYTE(v93) = a3[29] > 127;
  v94 = 0;
  v95 = -v93;
  if ( a3[29] >= -128 )
    v94 = v95 | (*((uint8_t *)a3 + 58) - 128);
  v96 = v94;
  v78[5] = v94;
  LOBYTE(v96) = a3[30] > 127;
  v97 = 0;
  v98 = -v96;
  if ( a3[30] >= -128 )
    v97 = v98 | (*((uint8_t *)a3 + 60) - 128);
  v99 = v97;
  v78[6] = v97;
  LOBYTE(v99) = a3[31] > 127;
  v100 = 0;
  v101 = -v99;
  if ( a3[31] >= -128 )
    v100 = v101 | (*((uint8_t *)a3 + 62) - 128);
  v102 = v100;
  v78[7] = v100;
  v103 = &v78[a2];
  LOBYTE(v102) = a3[32] > 127;
  v104 = 0;
  v105 = -v102;
  if ( a3[32] >= -128 )
    v104 = v105 | (*((uint8_t *)a3 + 64) - 128);
  v106 = v104;
  *v103 = v104;
  LOBYTE(v106) = a3[33] > 127;
  v107 = 0;
  v108 = -v106;
  if ( a3[33] >= -128 )
    v107 = v108 | (*((uint8_t *)a3 + 66) - 128);
  v109 = v107;
  v103[1] = v107;
  LOBYTE(v109) = a3[34] > 127;
  v110 = 0;
  v111 = -v109;
  if ( a3[34] >= -128 )
    v110 = v111 | (*((uint8_t *)a3 + 68) - 128);
  v112 = v110;
  v103[2] = v110;
  LOBYTE(v112) = a3[35] > 127;
  v113 = 0;
  v114 = -v112;
  if ( a3[35] >= -128 )
    v113 = v114 | (*((uint8_t *)a3 + 70) - 128);
  v115 = v113;
  v103[3] = v113;
  LOBYTE(v115) = a3[36] > 127;
  v116 = 0;
  v117 = -v115;
  if ( a3[36] >= -128 )
    v116 = v117 | (*((uint8_t *)a3 + 72) - 128);
  v118 = v116;
  v103[4] = v116;
  LOBYTE(v118) = a3[37] > 127;
  v119 = 0;
  v120 = -v118;
  if ( a3[37] >= -128 )
    v119 = v120 | (*((uint8_t *)a3 + 74) - 128);
  v121 = v119;
  v103[5] = v119;
  LOBYTE(v121) = a3[38] > 127;
  v122 = 0;
  v123 = -v121;
  if ( a3[38] >= -128 )
    v122 = v123 | (*((uint8_t *)a3 + 76) - 128);
  v124 = v122;
  v103[6] = v122;
  LOBYTE(v124) = a3[39] > 127;
  v125 = 0;
  v126 = -v124;
  if ( a3[39] >= -128 )
    v125 = v126 | (*((uint8_t *)a3 + 78) - 128);
  v127 = v125;
  v103[7] = v125;
  v128 = &v103[a2];
  LOBYTE(v127) = a3[40] > 127;
  v129 = 0;
  v130 = -v127;
  if ( a3[40] >= -128 )
    v129 = v130 | (*((uint8_t *)a3 + 80) - 128);
  v131 = v129;
  *v128 = v129;
  LOBYTE(v131) = a3[41] > 127;
  v132 = 0;
  v133 = -v131;
  if ( a3[41] >= -128 )
    v132 = v133 | (*((uint8_t *)a3 + 82) - 128);
  v134 = v132;
  v128[1] = v132;
  LOBYTE(v134) = a3[42] > 127;
  v135 = 0;
  v136 = -v134;
  if ( a3[42] >= -128 )
    v135 = v136 | (*((uint8_t *)a3 + 84) - 128);
  v137 = v135;
  v128[2] = v135;
  LOBYTE(v137) = a3[43] > 127;
  v138 = 0;
  v139 = -v137;
  if ( a3[43] >= -128 )
    v138 = v139 | (*((uint8_t *)a3 + 86) - 128);
  v140 = v138;
  v128[3] = v138;
  LOBYTE(v140) = a3[44] > 127;
  v141 = 0;
  v142 = -v140;
  if ( a3[44] >= -128 )
    v141 = v142 | (*((uint8_t *)a3 + 88) - 128);
  v143 = v141;
  v128[4] = v141;
  LOBYTE(v143) = a3[45] > 127;
  v144 = 0;
  v145 = -v143;
  if ( a3[45] >= -128 )
    v144 = v145 | (*((uint8_t *)a3 + 90) - 128);
  v146 = v144;
  v128[5] = v144;
  LOBYTE(v146) = a3[46] > 127;
  v147 = 0;
  v148 = -v146;
  if ( a3[46] >= -128 )
    v147 = v148 | (*((uint8_t *)a3 + 92) - 128);
  v149 = v147;
  v128[6] = v147;
  LOBYTE(v149) = a3[47] > 127;
  v150 = 0;
  v151 = -v149;
  if ( a3[47] >= -128 )
    v150 = v151 | (*((uint8_t *)a3 + 94) - 128);
  v152 = v150;
  v128[7] = v150;
  v153 = &v128[a2];
  LOBYTE(v152) = a3[48] > 127;
  v154 = 0;
  v155 = -v152;
  if ( a3[48] >= -128 )
    v154 = v155 | (*((uint8_t *)a3 + 96) - 128);
  v156 = v154;
  *v153 = v154;
  LOBYTE(v156) = a3[49] > 127;
  v157 = 0;
  v158 = -v156;
  if ( a3[49] >= -128 )
    v157 = v158 | (*((uint8_t *)a3 + 98) - 128);
  v159 = v157;
  v153[1] = v157;
  LOBYTE(v159) = a3[50] > 127;
  v160 = 0;
  v161 = -v159;
  if ( a3[50] >= -128 )
    v160 = v161 | (*((uint8_t *)a3 + 100) - 128);
  v162 = v160;
  v153[2] = v160;
  LOBYTE(v162) = a3[51] > 127;
  v163 = 0;
  v164 = -v162;
  if ( a3[51] >= -128 )
    v163 = v164 | (*((uint8_t *)a3 + 102) - 128);
  v165 = v163;
  v153[3] = v163;
  LOBYTE(v165) = a3[52] > 127;
  v166 = 0;
  v167 = -v165;
  if ( a3[52] >= -128 )
    v166 = v167 | (*((uint8_t *)a3 + 104) - 128);
  v168 = v166;
  v153[4] = v166;
  LOBYTE(v168) = a3[53] > 127;
  v169 = 0;
  v170 = -v168;
  if ( a3[53] >= -128 )
    v169 = v170 | (*((uint8_t *)a3 + 106) - 128);
  v171 = v169;
  v153[5] = v169;
  LOBYTE(v171) = a3[54] > 127;
  v172 = 0;
  v173 = -v171;
  if ( a3[54] >= -128 )
    v172 = v173 | (*((uint8_t *)a3 + 108) - 128);
  v174 = v172;
  v153[6] = v172;
  LOBYTE(v174) = a3[55] > 127;
  v175 = 0;
  v176 = -v174;
  if ( a3[55] >= -128 )
    v175 = v176 | (*((uint8_t *)a3 + 110) - 128);
  v177 = v175;
  v153[7] = v175;
  v178 = &v153[a2];
  LOBYTE(v177) = a3[56] > 127;
  v179 = 0;
  v180 = -v177;
  if ( a3[56] >= -128 )
    v179 = v180 | (*((uint8_t *)a3 + 112) - 128);
  v181 = v179;
  *v178 = v179;
  LOBYTE(v181) = a3[57] > 127;
  v182 = 0;
  v183 = -v181;
  if ( a3[57] >= -128 )
    v182 = v183 | (*((uint8_t *)a3 + 114) - 128);
  v184 = v182;
  v178[1] = v182;
  LOBYTE(v184) = a3[58] > 127;
  v185 = 0;
  v186 = -v184;
  if ( a3[58] >= -128 )
    v185 = v186 | (*((uint8_t *)a3 + 116) - 128);
  v187 = v185;
  v178[2] = v185;
  LOBYTE(v187) = a3[59] > 127;
  v188 = 0;
  v189 = -v187;
  if ( a3[59] >= -128 )
    v188 = v189 | (*((uint8_t *)a3 + 118) - 128);
  v190 = v188;
  v178[3] = v188;
  LOBYTE(v190) = a3[60] > 127;
  v191 = 0;
  v192 = -v190;
  if ( a3[60] >= -128 )
    v191 = v192 | (*((uint8_t *)a3 + 120) - 128);
  v193 = v191;
  v178[4] = v191;
  LOBYTE(v193) = a3[61] > 127;
  v194 = 0;
  v195 = -v193;
  if ( a3[61] >= -128 )
    v194 = v195 | (*((uint8_t *)a3 + 122) - 128);
  v196 = v194;
  v178[5] = v194;
  LOBYTE(v196) = a3[62] > 127;
  v197 = 0;
  v198 = -v196;
  if ( a3[62] >= -128 )
    v197 = v198 | (*((uint8_t *)a3 + 124) - 128);
  v199 = v197;
  v178[6] = v197;
  result = (uint16_t)a3[63];
  LOBYTE(v199) = (int16_t)result > 127;
  v201 = -v199;
  v202 = 0;
  if ( (int16_t)result >= -128 )
    v202 = v201 | (result + 0x80);
  v178[7] = v202;
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_frag_recon_inter  (binary VA: 0x1390330)
// Original: oc_frag_recon_inter
// ----------------------------------------------------------------------------
int oc_frag_recon_inter(int a1, int a2, int a3, int a4, int a5)
{
  return (*(int (**)(int, int, int, int))(a1 + 72))(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: oc_frag_recon_inter_c  (binary VA: 0x1390360)
// Original: oc_frag_recon_inter_c
// ----------------------------------------------------------------------------
int oc_frag_recon_inter_c(uint8_t *a1, uint8_t *a2, int a3, int a4)
{
  int result;
  int16_t v5;
  int v6;
  char v7; // di
  int16_t v8;
  int v9;
  char v10; // di
  int16_t v11;
  int v12;
  char v13; // di
  int16_t v14;
  int v15;
  char v16; // di
  int16_t v17;
  int v18;
  char v19; // di
  int16_t v20;
  int v21;
  char v22; // di
  int16_t v23;
  int v24;
  char v25; // di
  int16_t v26;
  int v27;
  char v28; // di
  uint8_t v31;
  uint8_t v32;
  uint8_t v33;
  uint8_t v34;
  uint8_t v35;
  uint8_t v36;
  uint8_t v37;

  result = 0;
  do
  {
    v5 = *(uint16_t *)(a4 + result);
    v6 = *a2 + v5;
    v7 = 0;
    if ( v6 >= 0 )
      v7 = v6 > 255 ? -1 : v5 + *a2;
    *a1 = v7;
    v8 = *(uint16_t *)(a4 + result + 2);
    v31 = a2[1];
    v9 = v31 + v8;
    v10 = 0;
    if ( v9 >= 0 )
      v10 = v9 > 255 ? -1 : v8 + v31;
    a1[1] = v10;
    v11 = *(uint16_t *)(a4 + result + 4);
    v32 = a2[2];
    v12 = v32 + v11;
    v13 = 0;
    if ( v12 >= 0 )
      v13 = v12 > 255 ? -1 : v11 + v32;
    a1[2] = v13;
    v14 = *(uint16_t *)(a4 + result + 6);
    v33 = a2[3];
    v15 = v33 + v14;
    v16 = 0;
    if ( v15 >= 0 )
      v16 = v15 > 255 ? -1 : v14 + v33;
    a1[3] = v16;
    v17 = *(uint16_t *)(a4 + result + 8);
    v34 = a2[4];
    v18 = v34 + v17;
    v19 = 0;
    if ( v18 >= 0 )
      v19 = v18 > 255 ? -1 : v17 + v34;
    a1[4] = v19;
    v20 = *(uint16_t *)(a4 + result + 10);
    v35 = a2[5];
    v21 = v35 + v20;
    v22 = 0;
    if ( v21 >= 0 )
      v22 = v21 > 255 ? -1 : v20 + v35;
    a1[5] = v22;
    v23 = *(uint16_t *)(a4 + result + 12);
    v36 = a2[6];
    v24 = v36 + v23;
    v25 = 0;
    if ( v24 >= 0 )
      v25 = v24 > 255 ? -1 : v23 + v36;
    a1[6] = v25;
    v26 = *(uint16_t *)(a4 + result + 14);
    v37 = a2[7];
    v27 = v37 + v26;
    v28 = 0;
    if ( v27 >= 0 )
      v28 = v27 > 255 ? -1 : v26 + v37;
    result += 16;
    a2 += a3;
    a1[7] = v28;
    a1 += a3;
  }
  while ( result != 128 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_frag_recon_inter2  (binary VA: 0x13905c0)
// Original: oc_frag_recon_inter2
// ----------------------------------------------------------------------------
int oc_frag_recon_inter2(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (*(int (**)(int, int, int, int, int))(a1 + 76))(a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: oc_frag_recon_inter2_c  (binary VA: 0x1390600)
// Original: oc_frag_recon_inter2_c
// ----------------------------------------------------------------------------
int oc_frag_recon_inter2_c(uint8_t *a1, uint8_t *a2, uint8_t *a3, int a4, int a5)
{
  int result;
  int v6;
  char v7; // di
  int v8;
  int v9;
  char v10; // di
  int v11;
  int v12;
  char v13; // di
  int v14;
  int v15;
  char v16; // di
  int v17;
  int v18;
  char v19; // di
  int v20;
  int v21;
  char v22; // di
  int v23;
  int v24;
  char v25; // di
  int v26;
  int v27;
  char v28; // di
  int v31;

  result = 0;
  do
  {
    v6 = (*a2 + *a3) >> 1;
    v31 = v6 + *(int16_t *)(a5 + result);
    v7 = 0;
    if ( v31 >= 0 )
      v7 = v31 > 255 ? -1 : v6 + *(uint16_t *)(a5 + result);
    *a1 = v7;
    v8 = (a2[1] + a3[1]) >> 1;
    v9 = v8 + *(int16_t *)(a5 + result + 2);
    v10 = 0;
    if ( v9 >= 0 )
      v10 = v9 > 255 ? -1 : v8 + *(uint16_t *)(a5 + result + 2);
    a1[1] = v10;
    v11 = (a2[2] + a3[2]) >> 1;
    v12 = v11 + *(int16_t *)(a5 + result + 4);
    v13 = 0;
    if ( v12 >= 0 )
      v13 = v12 > 255 ? -1 : v11 + *(uint16_t *)(a5 + result + 4);
    a1[2] = v13;
    v14 = (a2[3] + a3[3]) >> 1;
    v15 = v14 + *(int16_t *)(a5 + result + 6);
    v16 = 0;
    if ( v15 >= 0 )
      v16 = v15 > 255 ? -1 : v14 + *(uint16_t *)(a5 + result + 6);
    a1[3] = v16;
    v17 = (a2[4] + a3[4]) >> 1;
    v18 = v17 + *(int16_t *)(a5 + result + 8);
    v19 = 0;
    if ( v18 >= 0 )
      v19 = v18 > 255 ? -1 : v17 + *(uint16_t *)(a5 + result + 8);
    a1[4] = v19;
    v20 = (a2[5] + a3[5]) >> 1;
    v21 = v20 + *(int16_t *)(a5 + result + 10);
    v22 = 0;
    if ( v21 >= 0 )
      v22 = v21 > 255 ? -1 : v20 + *(uint16_t *)(a5 + result + 10);
    a1[5] = v22;
    v23 = (a2[6] + a3[6]) >> 1;
    v24 = v23 + *(int16_t *)(a5 + result + 12);
    v25 = 0;
    if ( v24 >= 0 )
      v25 = v24 > 255 ? -1 : v23 + *(uint16_t *)(a5 + result + 12);
    a1[6] = v25;
    v26 = (a2[7] + a3[7]) >> 1;
    v27 = v26 + *(int16_t *)(a5 + result + 14);
    v28 = 0;
    if ( v27 >= 0 )
      v28 = v27 > 255 ? -1 : v26 + *(uint16_t *)(a5 + result + 14);
    result += 16;
    a1[7] = v28;
    a2 += a4;
    a3 += a4;
    a1 += a4;
  }
  while ( result != 128 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_restore_fpu  (binary VA: 0x13908f0)
// Original: oc_restore_fpu
// ----------------------------------------------------------------------------
int oc_restore_fpu(int a1)
{
  return (*(int (**)(void))(a1 + 96))();
}

// ----------------------------------------------------------------------------
// Function: oc_restore_fpu_c  (binary VA: 0x1390900)
// Original: oc_restore_fpu_c
// ----------------------------------------------------------------------------
void oc_restore_fpu_c()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1390910  (binary VA: 0x1390910)
// Original: sub_1390910
// ----------------------------------------------------------------------------
int sub_1390910(char *a1)
{
  char v1;
  int v2;
  char v3;
  int v4;
  char v5;
  int v6;
  char v7;
  int v8;
  char v9;
  int v10;
  char v11;
  int v12;
  char v13;
  int v14;
  char v15;
  int v16;
  int v17;
  char *v18;
  char v19;
  int v20;
  int v22;
  char v23;
  int v24;
  int v25;
  int v26;
  char *v27;
  char v28;
  int v29;
  int v30;
  int v31;
  char *v32;
  char v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  char v49;
  int v50;
  char *v51;
  char *v52;
  char *v53;
  char *v54;
  char v55;
  char v56;
  int v57;
  char v58;
  int v59;
  char v60;
  int v61;
  char v62;
  int v63;

  v1 = *a1;
  v37 = 4;
  v55 = *a1;
  if ( *a1 != 0 )
    v37 = (4 << v1) + 4;
  if ( v1 != 0 )
  {
    v43 = 1 << v1;
    if ( 1 << v1 > 0 )
    {
      v44 = 0;
      v2 = 0;
      do
      {
        v38 = 4;
        v51 = *(char **)&a1[4 * v2 + 4];
        v3 = *v51;
        v56 = *v51;
        if ( *v51 != 0 )
          v38 = (4 << v3) + 4;
        if ( v3 != 0 )
        {
          v57 = 1 << v3;
          if ( 1 << v3 > 0 )
          {
            v45 = 0;
            v4 = 0;
            do
            {
              v39 = 4;
              v52 = *(char **)&v51[4 * v4 + 4];
              v5 = *v52;
              v58 = *v52;
              if ( *v52 != 0 )
                v39 = (4 << v5) + 4;
              if ( v5 != 0 )
              {
                v59 = 1 << v5;
                if ( 1 << v5 > 0 )
                {
                  v46 = 0;
                  v6 = 0;
                  do
                  {
                    v40 = 4;
                    v53 = *(char **)&v52[4 * v6 + 4];
                    v7 = *v53;
                    v60 = *v53;
                    if ( *v53 != 0 )
                      v40 = (4 << v7) + 4;
                    if ( v7 != 0 )
                    {
                      v61 = 1 << v7;
                      if ( 1 << v7 > 0 )
                      {
                        v47 = 0;
                        v8 = 0;
                        do
                        {
                          v42 = 4;
                          v54 = *(char **)&v53[4 * v8 + 4];
                          v9 = *v54;
                          v62 = *v54;
                          if ( *v54 != 0 )
                            v42 = (4 << v9) + 4;
                          if ( v9 != 0 )
                          {
                            v63 = 1 << v9;
                            if ( 1 << v9 > 0 )
                            {
                              v48 = 0;
                              v10 = 0;
                              do
                              {
                                v36 = 4;
                                v41 = *(char **)&v54[4 * v10 + 4];
                                v11 = *v41;
                                v49 = *v41;
                                if ( *v41 != 0 )
                                  v36 = (4 << v11) + 4;
                                if ( v11 != 0 )
                                {
                                  v50 = 1 << v11;
                                  if ( 1 << v11 > 0 )
                                  {
                                    v35 = 0;
                                    v12 = 0;
                                    do
                                    {
                                      v31 = 4;
                                      v32 = *(char **)&v41[4 * v12 + 4];
                                      v13 = *v32;
                                      v33 = *v32;
                                      if ( *v32 != 0 )
                                        v31 = (4 << v13) + 4;
                                      if ( v13 != 0 )
                                      {
                                        v34 = 1 << v13;
                                        if ( 1 << v13 > 0 )
                                        {
                                          v30 = 0;
                                          v14 = 0;
                                          do
                                          {
                                            v26 = 4;
                                            v27 = *(char **)&v32[4 * v14 + 4];
                                            v15 = *v27;
                                            v28 = *v27;
                                            if ( *v27 != 0 )
                                              v26 = (4 << v15) + 4;
                                            if ( v15 != 0 )
                                            {
                                              v29 = 1 << v15;
                                              if ( 1 << v15 > 0 )
                                              {
                                                v25 = 0;
                                                v16 = 0;
                                                do
                                                {
                                                  v17 = 4;
                                                  v18 = *(char **)&v27[4 * v16 + 4];
                                                  v19 = *v18;
                                                  v23 = *v18;
                                                  if ( *v18 != 0 )
                                                  {
                                                    v17 = (4 << v19) + 4;
                                                    v24 = 1 << v19;
                                                    if ( 1 << v19 > 0 )
                                                    {
                                                      v20 = 0;
                                                      do
                                                      {
                                                        v22 = *(uint32_t *)&v18[4 * v20 + 4];
                                                        v17 += sub_1390910();
                                                        v20 += 1 << (v23 - *(uint8_t *)(v22 + 2));
                                                      }
                                                      while ( v24 > v20 );
                                                    }
                                                  }
                                                  v26 += v17;
                                                  v25 += 1 << (v28 - v18[2]);
                                                  v16 = v25;
                                                }
                                                while ( v29 > v25 );
                                              }
                                            }
                                            v31 += v26;
                                            v30 += 1 << (v33 - v27[2]);
                                            v14 = v30;
                                          }
                                          while ( v34 > v30 );
                                        }
                                      }
                                      v36 += v31;
                                      v35 += 1 << (v49 - v32[2]);
                                      v12 = v35;
                                    }
                                    while ( v50 > v35 );
                                  }
                                }
                                v42 += v36;
                                v48 += 1 << (v62 - v41[2]);
                                v10 = v48;
                              }
                              while ( v63 > v48 );
                            }
                          }
                          v40 += v42;
                          v47 += 1 << (v60 - v54[2]);
                          v8 = v47;
                        }
                        while ( v61 > v47 );
                      }
                    }
                    v39 += v40;
                    v46 += 1 << (v58 - v53[2]);
                    v6 = v46;
                  }
                  while ( v59 > v46 );
                }
              }
              v38 += v39;
              v45 += 1 << (v56 - v52[2]);
              v4 = v45;
            }
            while ( v57 > v45 );
          }
        }
        v37 += v38;
        v44 += 1 << (v55 - v51[2]);
        v2 = v44;
      }
      while ( v43 > v44 );
    }
  }
  return v37;
}

// ----------------------------------------------------------------------------
// Function: sub_1390E20  (binary VA: 0x1390e20)
// Original: sub_1390E20
// ----------------------------------------------------------------------------
int sub_1390E20(uint8_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  int v9;
  uint8_t *v10;
  int v11;
  uint8_t *v12;
  int v13;
  uint8_t *v14;
  int v15;
  uint8_t *v16;
  int v17;
  int v18;
  uint8_t *v19;
  uint8_t *v21;
  uint8_t *v22;
  int v23;
  int v24;
  uint8_t *v25;
  int v26;
  int v27;
  uint8_t *v28;
  uint8_t *v29;
  uint8_t *v30;
  uint8_t *v31;
  uint8_t *v32;
  uint8_t *v33;
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

  v33 = a1;
  v34 = a2;
  if ( a2 <= 0 || *a1 == 0 )
    return 1;
  v40 = 0;
  do
  {
    --v34;
    v28 = *((uint8_t **)v33 + 1);
    if ( v34 > 0 && **((uint8_t **)v33 + 1) != 0 )
    {
      v41 = 0;
      v35 = v34;
      do
      {
        --v35;
        v29 = *((uint8_t **)v28 + 1);
        if ( v35 > 0 && **((uint8_t **)v28 + 1) != 0 )
        {
          v42 = 0;
          v36 = v35;
          do
          {
            --v36;
            v30 = *((uint8_t **)v29 + 1);
            if ( v36 > 0 && **((uint8_t **)v29 + 1) != 0 )
            {
              v43 = 0;
              v37 = v36;
              do
              {
                --v37;
                v31 = *((uint8_t **)v30 + 1);
                if ( v37 > 0 && **((uint8_t **)v30 + 1) != 0 )
                {
                  v44 = 0;
                  v38 = v37;
                  do
                  {
                    --v38;
                    v32 = *((uint8_t **)v31 + 1);
                    if ( v38 > 0 && **((uint8_t **)v31 + 1) != 0 )
                    {
                      v45 = 0;
                      v39 = v38;
                      do
                      {
                        --v39;
                        v25 = *((uint8_t **)v32 + 1);
                        if ( v39 > 0 && **((uint8_t **)v32 + 1) != 0 )
                        {
                          v27 = 0;
                          v26 = v39;
                          do
                          {
                            --v26;
                            v22 = *((uint8_t **)v25 + 1);
                            if ( v26 > 0 && **((uint8_t **)v25 + 1) != 0 )
                            {
                              v24 = 0;
                              v23 = v26;
                              do
                              {
                                --v23;
                                v2 = *((uint32_t *)v22 + 1);
                                if ( v23 > 0 && *(uint8_t *)v2 != 0 )
                                {
                                  v3 = v23;
                                  v4 = 0;
                                  do
                                  {
                                    --v3;
                                    v4 += sub_1390E20();
                                    v2 = *(uint32_t *)(v2 + 8);
                                  }
                                  while ( v3 > 0 && *(uint8_t *)v2 != 0 );
                                  v5 = v4 + 1;
                                }
                                else
                                {
                                  v5 = 1;
                                }
                                v24 += v5;
                                v6 = *((uint8_t **)v22 + 2);
                                v22 = v6;
                              }
                              while ( v23 > 0 && *v6 != 0 );
                              v7 = v24 + 1;
                            }
                            else
                            {
                              v7 = 1;
                            }
                            v27 += v7;
                            v8 = *((uint8_t **)v25 + 2);
                            v25 = v8;
                          }
                          while ( v26 > 0 && *v8 != 0 );
                          v9 = v27 + 1;
                        }
                        else
                        {
                          v9 = 1;
                        }
                        v45 += v9;
                        v10 = *((uint8_t **)v32 + 2);
                        v32 = v10;
                      }
                      while ( v39 > 0 && *v10 != 0 );
                      v11 = v45 + 1;
                    }
                    else
                    {
                      v11 = 1;
                    }
                    v44 += v11;
                    v12 = *((uint8_t **)v31 + 2);
                    v31 = v12;
                  }
                  while ( v38 > 0 && *v12 != 0 );
                  v13 = v44 + 1;
                }
                else
                {
                  v13 = 1;
                }
                v43 += v13;
                v14 = *((uint8_t **)v30 + 2);
                v30 = v14;
              }
              while ( v37 > 0 && *v14 != 0 );
              v15 = v43 + 1;
            }
            else
            {
              v15 = 1;
            }
            v42 += v15;
            v16 = *((uint8_t **)v29 + 2);
            v29 = v16;
          }
          while ( v36 > 0 && *v16 != 0 );
          v17 = v42 + 1;
        }
        else
        {
          v17 = 1;
        }
        v41 += v17;
        v21 = *((uint8_t **)v28 + 2);
        v28 = v21;
      }
      while ( v35 > 0 && *v21 != 0 );
      v18 = v41 + 1;
    }
    else
    {
      v18 = 1;
    }
    v40 += v18;
    v19 = *((uint8_t **)v33 + 2);
    v33 = v19;
  }
  while ( v34 > 0 && *v19 != 0 );
  return v40 + 1;
}

// ----------------------------------------------------------------------------
// Function: sub_13911B0  (binary VA: 0x13911b0)
// Original: sub_13911B0
// ----------------------------------------------------------------------------
uint8_t * sub_13911B0(char *a1, uint8_t **a2)
{
  char v2;
  int v3;
  char v4;
  int i;
  uint8_t *v6;
  int v7;
  char v8;
  char v9;
  int v10;
  char v11;
  char v12;
  int v13;
  char v14;
  char v15;
  int v16;
  char v17;
  char v18;
  int v19;
  char v20;
  char v21;
  int v22;
  char v23;
  char v24;
  int v25;
  int v26;
  char v27;
  char v28;
  int v29;
  uint8_t *v30;
  char v31;
  uint8_t *v32;
  char v33;
  int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  unsigned int j;
  __m128i v39;
  unsigned int v40;
  __m128i *v41;
  char v42;
  int v43;
  unsigned int v44;
  unsigned int k;
  unsigned int v46;
  __m128i v47;
  __m128i *v48;
  int v49;
  uint8_t *v50;
  char v51;
  int v52;
  int v53;
  unsigned int v54;
  unsigned int m;
  unsigned int v56;
  __m128i v57;
  __m128i *v58;
  unsigned int v59;
  char v60;
  int v61;
  int v62;
  unsigned int v63;
  unsigned int n;
  unsigned int v65;
  __m128i v66;
  __m128i *v67;
  unsigned int v68;
  int v69;
  int v70;
  int v71;
  unsigned int v72;
  unsigned int ii;
  unsigned int v74;
  __m128i v75;
  __m128i *v76;
  unsigned int v77;
  int v78;
  int v79;
  int v80;
  unsigned int v81;
  unsigned int jj;
  unsigned int v83;
  __m128i v84;
  __m128i *v85;
  unsigned int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  unsigned int v91;
  unsigned int kk;
  unsigned int v93;
  __m128i v94;
  __m128i *v95;
  unsigned int v96;
  int v97;
  int v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int nn;
  unsigned int v102;
  __m128i v103;
  __m128i *v104;
  unsigned int v105;
  int v106;
  int v107;
  int v108;
  unsigned int v109;
  unsigned int mm;
  unsigned int v111;
  __m128i v112;
  __m128i *v113;
  unsigned int v114;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  char *v123;
  char *v124;
  char *v125;
  uint8_t *v126;
  int v127;
  char *v128;
  int v129;
  int v130;
  uint8_t *v131;
  int v132;
  int v133;
  uint8_t *v134;
  uint8_t *v135;
  uint8_t *v136;
  uint8_t *v137;
  int v138;
  int v139;
  uint8_t *v140;
  char *v141;
  uint8_t *v142;
  int v143;
  int v144;
  char *v145;
  uint8_t *v146;
  int v147;
  int v148;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  uint8_t *v155;
  int v156;
  unsigned int v157;
  int v158;
  unsigned int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  unsigned int v170;
  unsigned int v171;
  unsigned int v172;
  unsigned int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  unsigned int v182;
  unsigned int v183;
  unsigned int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;

  v2 = *a1;
  v3 = 4;
  if ( v2 != 0 )
    v3 = (4 << v2) + 4;
  v131 = *a2;
  *v131 = v2;
  *a2 += v3;
  v131[2] = a1[2];
  v4 = *a1;
  if ( *a1 != 0 )
  {
    v121 = 1 << v4;
    if ( 1 << v4 > 0 )
    {
      v127 = 0;
      for ( i = 0; ; i = v97 )
      {
        v6 = *(uint8_t **)&a1[4 * i + 4];
        v7 = 4;
        v126 = v6;
        v8 = *v6;
        if ( *v6 != 0 )
          v7 = (4 << v8) + 4;
        v137 = *a2;
        *v137 = v8;
        *a2 += v7;
        v137[2] = v6[2];
        v9 = *v6;
        if ( *v6 != 0 )
        {
          v119 = 1 << v9;
          if ( 1 << v9 > 0 )
          {
            v133 = 0;
            do
            {
              v10 = 4;
              v125 = *(char **)&v126[4 * v133 + 4];
              v11 = *v125;
              if ( *v125 != 0 )
                v10 = (4 << v11) + 4;
              v136 = *a2;
              *v136 = v11;
              *a2 += v10;
              v136[2] = v125[2];
              v12 = *v125;
              if ( *v125 != 0 )
              {
                v118 = 1 << v12;
                if ( 1 << v12 > 0 )
                {
                  v132 = 0;
                  do
                  {
                    v13 = 4;
                    v124 = *(char **)&v125[4 * v132 + 4];
                    v14 = *v124;
                    if ( *v124 != 0 )
                      v13 = (4 << v14) + 4;
                    v135 = *a2;
                    *v135 = v14;
                    *a2 += v13;
                    v135[2] = v124[2];
                    v15 = *v124;
                    if ( *v124 != 0 )
                    {
                      v117 = 1 << v15;
                      if ( 1 << v15 > 0 )
                      {
                        v129 = 0;
                        do
                        {
                          v16 = 4;
                          v123 = *(char **)&v124[4 * v129 + 4];
                          v17 = *v123;
                          if ( *v123 != 0 )
                            v16 = (4 << v17) + 4;
                          v134 = *a2;
                          *v134 = v17;
                          *a2 += v16;
                          v134[2] = v123[2];
                          v18 = *v123;
                          if ( *v123 != 0 )
                          {
                            v116 = 1 << v18;
                            if ( 1 << v18 > 0 )
                            {
                              v130 = 0;
                              do
                              {
                                v19 = 4;
                                v128 = *(char **)&v123[4 * v130 + 4];
                                v20 = *v128;
                                if ( *v128 != 0 )
                                  v19 = (4 << v20) + 4;
                                v140 = *a2;
                                *v140 = v20;
                                *a2 += v19;
                                v140[2] = v128[2];
                                v21 = *v128;
                                if ( *v128 != 0 )
                                {
                                  v120 = 1 << v21;
                                  if ( 1 << v21 > 0 )
                                  {
                                    v139 = 0;
                                    do
                                    {
                                      v22 = 4;
                                      v141 = *(char **)&v128[4 * v139 + 4];
                                      v23 = *v141;
                                      if ( *v141 != 0 )
                                        v22 = (4 << v23) + 4;
                                      v142 = *a2;
                                      *v142 = v23;
                                      *a2 += v22;
                                      v142[2] = v141[2];
                                      v24 = *v141;
                                      if ( *v141 != 0 )
                                      {
                                        v138 = 1 << v24;
                                        if ( 1 << v24 > 0 )
                                        {
                                          v144 = 0;
                                          v25 = 0;
                                          do
                                          {
                                            v26 = 4;
                                            v145 = *(char **)&v141[4 * v25 + 4];
                                            v27 = *v145;
                                            if ( *v145 != 0 )
                                              v26 = (4 << v27) + 4;
                                            v146 = *a2;
                                            *v146 = v27;
                                            *a2 += v26;
                                            v146[2] = v145[2];
                                            v28 = *v145;
                                            if ( *v145 != 0 )
                                            {
                                              v143 = 1 << v28;
                                              if ( 1 << v28 > 0 )
                                              {
                                                v148 = 0;
                                                do
                                                {
                                                  v29 = 4;
                                                  v30 = *(uint8_t **)&v145[4 * v148 + 4];
                                                  v155 = v30;
                                                  v31 = *v30;
                                                  if ( *v30 != 0 )
                                                    v29 = (4 << v31) + 4;
                                                  v32 = *a2;
                                                  *v32 = v31;
                                                  *a2 += v29;
                                                  v32[2] = v30[2];
                                                  v33 = *v30;
                                                  if ( *v30 != 0 )
                                                  {
                                                    v147 = 1 << v33;
                                                    if ( 1 << v33 > 0 )
                                                    {
                                                      v34 = 0;
                                                      do
                                                      {
                                                        v35 = (unsigned int)(uintptr_t)(sub_13911B0());
                                                        *(uint32_t *)&v32[4 * v34 + 4] = v35;
                                                        v36 = v34 + 1;
                                                        v166 = v34 + (1 << (*v155 - *(uint8_t *)(v35 + 2)));
                                                        if ( v166 <= v34 + 1 )
                                                        {
                                                          ++v34;
                                                        }
                                                        else
                                                        {
                                                          v153 = v34 + 2;
                                                          v151 = 1 << (*v155 - *(uint8_t *)(v35 + 2));
                                                          v181 = v151 - 1;
                                                          v37 = -((uint8_t)(((uint8_t)(uintptr_t)(v32) + 4 * (v34 + 2)) & 0xF) >> 2)
                                                              & 3;
                                                          if ( v37 > v151 - 1 )
                                                            v37 = (1 << (*v155 - *(uint8_t *)(v35 + 2))) - 1;
                                                          if ( v37 == 0 )
                                                            goto LABEL_197;
                                                          for ( j = 0; j < v37; ++j )
                                                            *(uint32_t *)&v32[4 * v36++ + 4] = v35;
                                                          if ( v181 != v37 )
                                                          {
LABEL_197:
                                                            v182 = v181 - v37;
                                                            v150 = 4 * (v182 >> 2);
                                                            if ( v150 == 0 )
                                                              goto LABEL_198;
                                                            v39 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v35), 0);
                                                            v40 = 0;
                                                            v41 = (__m128i *)&v32[4 * v153 + 4 * v37];
                                                            do
                                                            {
                                                              ++v40;
                                                              *v41++ = v39;
                                                            }
                                                            while ( v40 < v182 >> 2 );
                                                            v36 += v150;
                                                            if ( v182 != v150 )
                                                            {
LABEL_198:
                                                              do
                                                                *(uint32_t *)&v32[4 * v36++ + 4] = v35;
                                                              while ( v166 > v36 );
                                                            }
                                                          }
                                                          v34 = v151 + v153 - 2;
                                                        }
                                                      }
                                                      while ( v34 < v147 );
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v32[1] = v30[1];
                                                  }
                                                  *(uint32_t *)&v146[4 * v148 + 4] = (uint32_t)(uintptr_t)(v32);
                                                  v42 = *v145 - v32[2];
                                                  v43 = v148 + 1;
                                                  v152 = v148 + (1 << v42);
                                                  if ( v152 <= v148 + 1 )
                                                  {
                                                    ++v148;
                                                    continue;
                                                  }
                                                  v154 = 1 << v42;
                                                  v183 = (1 << v42) - 1;
                                                  v44 = -((uint8_t)(((uint8_t)(uintptr_t)(v146) + 4 * (v148 + 2)) & 0xF) >> 2)
                                                      & 3;
                                                  if ( v44 > v183 )
                                                    v44 = v183;
                                                  if ( v44 == 0 )
                                                    goto LABEL_67;
                                                  for ( k = 0; k < v44; ++k )
                                                    *(uint32_t *)&v146[4 * v43++ + 4] = (uint32_t)(uintptr_t)(v32);
                                                  if ( v183 != v44 )
                                                  {
LABEL_67:
                                                    v184 = v183 - v44;
                                                    v156 = 4 * (v184 >> 2);
                                                    if ( v156 != 0 )
                                                    {
                                                      v46 = 0;
                                                      v47 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v32)), 0);
                                                      v48 = (__m128i *)&v146[4 * v148 + 8 + 4 * v44];
                                                      v49 = v152;
                                                      do
                                                      {
                                                        ++v46;
                                                        *v48++ = v47;
                                                      }
                                                      while ( v46 < v184 >> 2 );
                                                      v43 += v156;
                                                      if ( v184 == v156 )
                                                        goto LABEL_73;
                                                      v50 = v146;
                                                    }
                                                    else
                                                    {
                                                      v50 = v146;
                                                      v49 = v152;
                                                    }
                                                    do
                                                      *(uint32_t *)&v50[4 * v43++ + 4] = (uint32_t)(uintptr_t)(v32);
                                                    while ( v49 > v43 );
                                                  }
LABEL_73:
                                                  v148 += v154;
                                                }
                                                while ( v148 < v143 );
                                              }
                                            }
                                            else
                                            {
                                              v146[1] = v145[1];
                                            }
                                            *(uint32_t *)&v142[4 * v144 + 4] = (uint32_t)(uintptr_t)(v146);
                                            v51 = *v141 - v146[2];
                                            v52 = (1 << v51) + v144;
                                            v53 = v144 + 1;
                                            if ( v144 + 1 >= v52 )
                                            {
                                              ++v144;
                                              v25 = v53;
                                            }
                                            else
                                            {
                                              v174 = 1 << v51;
                                              v157 = (1 << v51) - 1;
                                              v185 = v144 + 2;
                                              v54 = -((uint8_t)(((uint8_t)(uintptr_t)(v142) + 4 * (v144 + 2)) & 0xF) >> 2) & 3;
                                              if ( v54 > v157 )
                                                v54 = v157;
                                              if ( v54 == 0 )
                                                goto LABEL_199;
                                              for ( m = 0; m < v54; ++m )
                                                *(uint32_t *)&v142[4 * v53++ + 4] = (uint32_t)(uintptr_t)(v146);
                                              if ( v157 != v54 )
                                              {
LABEL_199:
                                                v167 = v157 - v54;
                                                v56 = (v157 - v54) >> 2;
                                                v158 = 4 * v56;
                                                if ( 4 * v56 == 0 )
                                                  goto LABEL_200;
                                                v57 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v146)), 0);
                                                v58 = (__m128i *)&v142[4 * v185 + 4 * v54];
                                                v59 = 0;
                                                do
                                                {
                                                  ++v59;
                                                  *v58++ = v57;
                                                }
                                                while ( v59 < v56 );
                                                v53 += v158;
                                                if ( v167 != v158 )
                                                {
LABEL_200:
                                                  do
                                                    *(uint32_t *)&v142[4 * v53++ + 4] = (uint32_t)(uintptr_t)(v146);
                                                  while ( v52 > v53 );
                                                }
                                              }
                                              v144 += v174;
                                              v25 = v174 + v185 - 2;
                                            }
                                          }
                                          while ( v138 > v25 );
                                        }
                                      }
                                      else
                                      {
                                        v142[1] = v141[1];
                                      }
                                      *(uint32_t *)&v140[4 * v139 + 4] = (uint32_t)(uintptr_t)(v142);
                                      v60 = *v128 - v142[2];
                                      v61 = (1 << v60) + v139;
                                      v62 = v139 + 1;
                                      if ( v61 <= v139 + 1 )
                                      {
                                        ++v139;
                                      }
                                      else
                                      {
                                        v175 = 1 << v60;
                                        v159 = (1 << v60) - 1;
                                        v63 = -((uint8_t)(((uint8_t)(uintptr_t)(v140) + 4 * (v139 + 2)) & 0xF) >> 2) & 3;
                                        if ( v63 > v159 )
                                          v63 = v159;
                                        if ( v63 == 0 )
                                          goto LABEL_201;
                                        for ( n = 0; n < v63; ++n )
                                          *(uint32_t *)&v140[4 * v62++ + 4] = (uint32_t)(uintptr_t)(v142);
                                        if ( v159 != v63 )
                                        {
LABEL_201:
                                          v168 = v159 - v63;
                                          v65 = (v159 - v63) >> 2;
                                          v160 = 4 * v65;
                                          if ( 4 * v65 == 0 )
                                            goto LABEL_202;
                                          v66 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v142)), 0);
                                          v67 = (__m128i *)&v140[4 * v139 + 8 + 4 * v63];
                                          v68 = 0;
                                          do
                                          {
                                            ++v68;
                                            *v67++ = v66;
                                          }
                                          while ( v68 < v65 );
                                          v62 += v160;
                                          if ( v168 != v160 )
                                          {
LABEL_202:
                                            do
                                              *(uint32_t *)&v140[4 * v62++ + 4] = (uint32_t)(uintptr_t)(v142);
                                            while ( v61 > v62 );
                                          }
                                        }
                                        v139 += v175;
                                      }
                                    }
                                    while ( v139 < v120 );
                                  }
                                }
                                else
                                {
                                  v140[1] = v128[1];
                                }
                                *(uint32_t *)&v134[4 * v130 + 4] = (uint32_t)(uintptr_t)(v140);
                                v69 = v130 + 1;
                                v186 = (1 << (*v123 - v140[2])) + v130;
                                if ( v186 <= v130 + 1 )
                                {
                                  ++v130;
                                }
                                else
                                {
                                  v70 = v130 + 2;
                                  v176 = 1 << (*v123 - v140[2]);
                                  v71 = v176 - 1;
                                  v72 = -((uint8_t)(((uint8_t)(uintptr_t)(v134) + 4 * (v130 + 2)) & 0xF) >> 2) & 3;
                                  if ( v72 > v176 - 1 )
                                    v72 = (1 << (*v123 - v140[2])) - 1;
                                  if ( v72 == 0 )
                                    goto LABEL_203;
                                  for ( ii = 0; ii < v72; ++ii )
                                    *(uint32_t *)&v134[4 * v69++ + 4] = (uint32_t)(uintptr_t)(v140);
                                  v70 = v130 + 2;
                                  if ( v71 != v72 )
                                  {
LABEL_203:
                                    v169 = v71 - v72;
                                    v74 = (v71 - v72) >> 2;
                                    v161 = 4 * v74;
                                    if ( 4 * v74 == 0 )
                                      goto LABEL_204;
                                    v75 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v140)), 0);
                                    v76 = (__m128i *)&v134[4 * v70 + 4 * v72];
                                    v77 = 0;
                                    do
                                    {
                                      ++v77;
                                      *v76++ = v75;
                                    }
                                    while ( v77 < v74 );
                                    v69 += v161;
                                    if ( v169 != v161 )
                                    {
LABEL_204:
                                      do
                                        *(uint32_t *)&v134[4 * v69++ + 4] = (uint32_t)(uintptr_t)(v140);
                                      while ( v186 > v69 );
                                    }
                                  }
                                  v130 = v176 + v70 - 2;
                                }
                              }
                              while ( v130 < v116 );
                            }
                          }
                          else
                          {
                            v134[1] = v123[1];
                          }
                          *(uint32_t *)&v135[4 * v129 + 4] = (uint32_t)(uintptr_t)(v134);
                          v78 = v129 + 1;
                          v187 = (1 << (*v124 - v134[2])) + v129;
                          if ( v187 <= v129 + 1 )
                          {
                            ++v129;
                            v87 = v78;
                          }
                          else
                          {
                            v79 = v129 + 2;
                            v177 = 1 << (*v124 - v134[2]);
                            v80 = v177 - 1;
                            v81 = -((uint8_t)(((uint8_t)(uintptr_t)(v135) + 4 * (v129 + 2)) & 0xF) >> 2) & 3;
                            if ( v81 > v177 - 1 )
                              v81 = (1 << (*v124 - v134[2])) - 1;
                            if ( v81 == 0 )
                              goto LABEL_205;
                            for ( jj = 0; jj < v81; ++jj )
                              *(uint32_t *)&v135[4 * v78++ + 4] = (uint32_t)(uintptr_t)(v134);
                            v79 = v129 + 2;
                            if ( v80 != v81 )
                            {
LABEL_205:
                              v170 = v80 - v81;
                              v83 = (v80 - v81) >> 2;
                              v162 = 4 * v83;
                              if ( 4 * v83 == 0 )
                                goto LABEL_206;
                              v84 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v134)), 0);
                              v85 = (__m128i *)&v135[4 * v79 + 4 * v81];
                              v86 = 0;
                              do
                              {
                                ++v86;
                                *v85++ = v84;
                              }
                              while ( v86 < v83 );
                              v78 += v162;
                              if ( v170 != v162 )
                              {
LABEL_206:
                                do
                                  *(uint32_t *)&v135[4 * v78++ + 4] = (uint32_t)(uintptr_t)(v134);
                                while ( v187 > v78 );
                              }
                            }
                            v87 = v177 + v79 - 2;
                            v129 = v87;
                          }
                        }
                        while ( v117 > v87 );
                      }
                    }
                    else
                    {
                      v135[1] = v124[1];
                    }
                    *(uint32_t *)&v136[4 * v132 + 4] = (uint32_t)(uintptr_t)(v135);
                    v88 = v132 + 1;
                    v188 = (1 << (*v125 - v135[2])) + v132;
                    if ( v188 <= v132 + 1 )
                    {
                      ++v132;
                    }
                    else
                    {
                      v89 = v132 + 2;
                      v178 = 1 << (*v125 - v135[2]);
                      v90 = v178 - 1;
                      v91 = -((uint8_t)(((uint8_t)(uintptr_t)(v136) + 4 * (v132 + 2)) & 0xF) >> 2) & 3;
                      if ( v91 > v178 - 1 )
                        v91 = (1 << (*v125 - v135[2])) - 1;
                      if ( v91 == 0 )
                        goto LABEL_207;
                      for ( kk = 0; kk < v91; ++kk )
                        *(uint32_t *)&v136[4 * v88++ + 4] = (uint32_t)(uintptr_t)(v135);
                      v89 = v132 + 2;
                      if ( v90 != v91 )
                      {
LABEL_207:
                        v171 = v90 - v91;
                        v93 = (v90 - v91) >> 2;
                        v163 = 4 * v93;
                        if ( 4 * v93 == 0 )
                          goto LABEL_208;
                        v94 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v135)), 0);
                        v95 = (__m128i *)&v136[4 * v89 + 4 * v91];
                        v96 = 0;
                        do
                        {
                          ++v96;
                          *v95++ = v94;
                        }
                        while ( v96 < v93 );
                        v88 += v163;
                        if ( v171 != v163 )
                        {
LABEL_208:
                          do
                            *(uint32_t *)&v136[4 * v88++ + 4] = (uint32_t)(uintptr_t)(v135);
                          while ( v188 > v88 );
                        }
                      }
                      v132 = v178 + v89 - 2;
                    }
                  }
                  while ( v132 < v118 );
                }
              }
              else
              {
                v136[1] = v125[1];
              }
              *(uint32_t *)&v137[4 * v133 + 4] = (uint32_t)(uintptr_t)(v136);
              v106 = v133 + 1;
              v190 = (1 << (*v126 - v136[2])) + v133;
              if ( v190 <= v133 + 1 )
              {
                ++v133;
              }
              else
              {
                v107 = v133 + 2;
                v180 = 1 << (*v126 - v136[2]);
                v108 = v180 - 1;
                v109 = -((uint8_t)(((uint8_t)(uintptr_t)(v137) + 4 * (v133 + 2)) & 0xF) >> 2) & 3;
                if ( v109 > v180 - 1 )
                  v109 = (1 << (*v126 - v136[2])) - 1;
                if ( v109 == 0 )
                  goto LABEL_209;
                for ( mm = 0; mm < v109; ++mm )
                  *(uint32_t *)&v137[4 * v106++ + 4] = (uint32_t)(uintptr_t)(v136);
                v107 = v133 + 2;
                if ( v108 != v109 )
                {
LABEL_209:
                  v173 = v108 - v109;
                  v111 = (v108 - v109) >> 2;
                  v165 = 4 * v111;
                  if ( 4 * v111 == 0 )
                    goto LABEL_210;
                  v112 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v136)), 0);
                  v113 = (__m128i *)&v137[4 * v107 + 4 * v109];
                  v114 = 0;
                  do
                  {
                    ++v114;
                    *v113++ = v112;
                  }
                  while ( v114 < v111 );
                  v106 += v165;
                  if ( v173 != v165 )
                  {
LABEL_210:
                    do
                      *(uint32_t *)&v137[4 * v106++ + 4] = (uint32_t)(uintptr_t)(v136);
                    while ( v190 > v106 );
                  }
                }
                v133 = v180 + v107 - 2;
              }
            }
            while ( v133 < v119 );
          }
        }
        else
        {
          v137[1] = v6[1];
        }
        *(uint32_t *)&v131[4 * v127 + 4] = (uint32_t)(uintptr_t)(v137);
        v97 = v127 + 1;
        v98 = 1 << (*a1 - v137[2]);
        v189 = v127 + v98;
        if ( v127 + v98 > v127 + 1 )
        {
          v179 = 1 << (*a1 - v137[2]);
          v99 = v98 - 1;
          v100 = -((uint8_t)(((uint8_t)(uintptr_t)(v131) + 4 * (v127 + 2)) & 0xF) >> 2) & 3;
          if ( v100 > v99 )
            v100 = v99;
          if ( v100 == 0 )
            goto LABEL_165;
          for ( nn = 0; nn < v100; ++nn )
            *(uint32_t *)&v131[4 * v97++ + 4] = (uint32_t)(uintptr_t)(v137);
          if ( v99 != v100 )
          {
LABEL_165:
            v172 = v99 - v100;
            v102 = (v99 - v100) >> 2;
            v164 = 4 * v102;
            if ( 4 * v102 == 0 )
              goto LABEL_211;
            v103 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v137)), 0);
            v104 = (__m128i *)&v131[4 * v127 + 8 + 4 * v100];
            v105 = 0;
            do
            {
              ++v105;
              *v104++ = v103;
            }
            while ( v105 < v102 );
            v97 += v164;
            if ( v172 != v164 )
            {
LABEL_211:
              do
                *(uint32_t *)&v131[4 * v97++ + 4] = (uint32_t)(uintptr_t)(v137);
              while ( v189 > v97 );
            }
          }
          v97 = v179 + v127;
        }
        if ( v121 <= v97 )
          return v131;
        v127 = v97;
      }
    }
  }
  else
  {
    v131[1] = a1[1];
  }
  return v131;
}

// ----------------------------------------------------------------------------
// Function: sub_1392210  (binary VA: 0x1392210)
// Original: sub_1392210
// ----------------------------------------------------------------------------
int sub_1392210(int a1)
{
  int result;
  int v3;
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
  int v22;
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
  uint8_t *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint8_t *v43;
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
  uint8_t *v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  uint8_t *v76;
  int v77;
  int v78;
  uint8_t *v79;
  int v80;
  int v81;
  int v82;
  int v83;
  uint8_t *v84;
  uint8_t *v85;
  int v86;
  int v87;
  int v88;
  int v89;
  uint8_t *v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  uint8_t *v96;
  int v97;
  int v98;
  int v99;
  int v100;
  uint8_t *v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;

  result = 0;
  if ( *(uint8_t *)a1 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 4);
    v4 = 0;
    if ( *(uint8_t *)v3 != 0 )
    {
      v7 = *(uint32_t *)(v3 + 4);
      v8 = 0;
      if ( *(uint8_t *)v7 != 0 )
      {
        v18 = *(uint32_t *)(v7 + 4);
        if ( *(uint8_t *)v18 != 0 )
        {
          v49 = 0;
          if ( **(uint8_t **)(v18 + 4) != 0 )
          {
            v81 = *(uint32_t *)(v7 + 4);
            v112 = ((int (*)(void))((int (*)(int))sub_1392210))();
            v50 = ((int (*)(void))((int (*)(int))sub_1392210))();
            v18 = v81;
            v49 = v112 + (v112 > v50 ? v50 - v112 : 0) + 1;
          }
          v99 = 0;
          if ( **(uint8_t **)(v18 + 8) != 0 )
          {
            v69 = v49;
            v100 = ((int (*)(void))((int (*)(int))sub_1392210))();
            v51 = ((int (*)(void))((int (*)(int))sub_1392210))();
            v49 = v69;
            v99 = v100 + (v100 > v51 ? v51 - v100 : 0) + 1;
          }
          v8 = v49 + (v49 > v99 ? v99 - v49 : 0) + 1;
        }
        v19 = *(uint32_t *)(v7 + 8);
        v20 = 0;
        if ( *(uint8_t *)v19 != 0 )
        {
          v96 = *(uint8_t **)(v19 + 4);
          v45 = 0;
          if ( *v96 != 0 )
          {
            v67 = v8;
            v111 = sub_1392210(0);
            v46 = sub_1392210(v96);
            v8 = v67;
            v45 = v111 + (v111 > v46 ? v46 - v111 : 0) + 1;
          }
          v97 = 0;
          if ( **(uint8_t **)(v19 + 8) != 0 )
          {
            v68 = v8;
            v80 = v45;
            v98 = sub_1392210(v45);
            v48 = sub_1392210(v47);
            v45 = v80;
            v8 = v68;
            v97 = v98 + (v98 > v48 ? v48 - v98 : 0) + 1;
          }
          v20 = v45 + (v45 > v97 ? v97 - v45 : 0) + 1;
        }
        v8 += v8 > v20 ? v20 - v8 + 1 : 1;
      }
      v9 = *(uint32_t *)(v3 + 8);
      v10 = 0;
      if ( *(uint8_t *)v9 != 0 )
      {
        v14 = *(uint32_t *)(v9 + 4);
        v15 = 0;
        if ( *(uint8_t *)v14 != 0 )
        {
          v56 = 0;
          if ( **(uint8_t **)(v14 + 4) != 0 )
          {
            v72 = v8;
            v83 = *(uint32_t *)(v9 + 4);
            v114 = sub_1392210(v14);
            v104 = sub_1392210(v57);
            v14 = v83;
            v8 = v72;
            v56 = v114 + (v114 > v104 ? v104 - v114 : 0) + 1;
          }
          v58 = *(uint8_t **)(v14 + 8);
          v105 = 0;
          if ( *v58 != 0 )
          {
            v73 = v8;
            v84 = v58;
            v106 = sub_1392210(v58);
            v59 = sub_1392210(v84);
            v8 = v73;
            v105 = v106 + (v106 > v59 ? v59 - v106 : 0) + 1;
          }
          v15 = v56 + (v56 > v105 ? v105 - v56 : 0) + 1;
        }
        v16 = *(uint32_t *)(v9 + 8);
        v17 = 0;
        if ( *(uint8_t *)v16 != 0 )
        {
          v101 = *(uint8_t **)(v16 + 4);
          v52 = 0;
          if ( *v101 != 0 )
          {
            v70 = v8;
            v113 = sub_1392210(0);
            v53 = sub_1392210(v101);
            v8 = v70;
            v52 = v113 + (v113 > v53 ? v53 - v113 : 0) + 1;
          }
          v102 = 0;
          if ( **(uint8_t **)(v16 + 8) != 0 )
          {
            v71 = v8;
            v82 = v52;
            v103 = sub_1392210(v52);
            v55 = sub_1392210(v54);
            v52 = v82;
            v8 = v71;
            v102 = v103 + (v103 > v55 ? v55 - v103 : 0) + 1;
          }
          v17 = v52 + (v52 > v102 ? v102 - v52 : 0) + 1;
        }
        v10 = v15 + (v15 > v17 ? v17 - v15 : 0) + 1;
      }
      v5 = *(uint32_t *)(a1 + 8);
      v4 = v8 + (v8 > v10 ? v10 - v8 : 0) + 1;
      v6 = 0;
      if ( *(uint8_t *)v5 == 0 )
        return v4 + (v4 > v6 ? v6 - v4 : 0) + 1;
    }
    else
    {
      v5 = *(uint32_t *)(a1 + 8);
      v6 = 0;
      if ( *(uint8_t *)v5 == 0 )
        return v4 + (v4 > v6 ? v6 - v4 : 0) + 1;
    }
    v11 = *(uint32_t *)(v5 + 4);
    if ( *(uint8_t *)v11 != 0 )
    {
      v25 = *(uint32_t *)(v11 + 4);
      if ( *(uint8_t *)v25 != 0 )
      {
        v32 = 0;
        if ( **(uint8_t **)(v25 + 4) != 0 )
        {
          v75 = *(uint32_t *)(v11 + 4);
          v108 = sub_1392210(v25);
          v34 = sub_1392210(v33);
          v25 = v75;
          v32 = v108 + (v108 > v34 ? v34 - v108 : 0) + 1;
        }
        v35 = *(uint8_t **)(v25 + 8);
        v88 = 0;
        if ( *v35 != 0 )
        {
          v62 = v32;
          v76 = v35;
          v89 = sub_1392210(v35);
          v36 = sub_1392210(v76);
          v32 = v62;
          v88 = v89 + (v89 > v36 ? v36 - v89 : 0) + 1;
        }
        v6 = v32 + (v32 > v88 ? v88 - v32 : 0) + 1;
      }
      v26 = *(uint32_t *)(v11 + 8);
      v27 = 0;
      if ( *(uint8_t *)v26 != 0 )
      {
        v85 = *(uint8_t **)(v26 + 4);
        v28 = 0;
        if ( *v85 != 0 )
        {
          v60 = v6;
          v107 = sub_1392210(0);
          v29 = sub_1392210(v85);
          v6 = v60;
          v28 = v107 + (v107 > v29 ? v29 - v107 : 0) + 1;
        }
        v86 = 0;
        if ( **(uint8_t **)(v26 + 8) != 0 )
        {
          v61 = v6;
          v74 = v28;
          v87 = sub_1392210(v28);
          v31 = sub_1392210(v30);
          v28 = v74;
          v6 = v61;
          v86 = v87 + (v87 > v31 ? v31 - v87 : 0) + 1;
        }
        v27 = v28 + (v28 > v86 ? v86 - v28 : 0) + 1;
      }
      v6 += v6 > v27 ? v27 - v6 + 1 : 1;
    }
    v12 = *(uint32_t *)(v5 + 8);
    v13 = 0;
    if ( *(uint8_t *)v12 != 0 )
    {
      v21 = *(uint32_t *)(v12 + 4);
      v22 = 0;
      if ( *(uint8_t *)v21 != 0 )
      {
        v41 = 0;
        if ( **(uint8_t **)(v21 + 4) != 0 )
        {
          v65 = v6;
          v78 = *(uint32_t *)(v12 + 4);
          v110 = sub_1392210(v21);
          v93 = sub_1392210(v42);
          v21 = v78;
          v6 = v65;
          v41 = v110 + (v110 > v93 ? v93 - v110 : 0) + 1;
        }
        v43 = *(uint8_t **)(v21 + 8);
        v94 = 0;
        if ( *v43 != 0 )
        {
          v66 = v6;
          v79 = v43;
          v95 = sub_1392210(v43);
          v44 = sub_1392210(v79);
          v6 = v66;
          v94 = v95 + (v95 > v44 ? v44 - v95 : 0) + 1;
        }
        v22 = v41 + (v41 > v94 ? v94 - v41 : 0) + 1;
      }
      v23 = *(uint32_t *)(v12 + 8);
      v24 = 0;
      if ( *(uint8_t *)v23 != 0 )
      {
        v90 = *(uint8_t **)(v23 + 4);
        v37 = 0;
        if ( *v90 != 0 )
        {
          v63 = v6;
          v109 = sub_1392210(0);
          v38 = sub_1392210(v90);
          v6 = v63;
          v37 = v109 + (v109 > v38 ? v38 - v109 : 0) + 1;
        }
        v91 = 0;
        if ( **(uint8_t **)(v23 + 8) != 0 )
        {
          v64 = v6;
          v77 = v37;
          v92 = sub_1392210(v37);
          v40 = sub_1392210(v39);
          v37 = v77;
          v6 = v64;
          v91 = v92 + (v92 > v40 ? v40 - v92 : 0) + 1;
        }
        v24 = v37 + (v37 > v91 ? v91 - v37 : 0) + 1;
      }
      v13 = v22 + (v22 > v24 ? v24 - v22 : 0) + 1;
    }
    v6 += v6 > v13 ? v13 - v6 + 1 : 1;
    return v4 + (v4 > v6 ? v6 - v4 : 0) + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_13929C0  (binary VA: 0x13929c0)
// Original: sub_13929C0
// ----------------------------------------------------------------------------
int sub_13929C0(char *a1, int a2)
{
  char *v3;
  char v4;
  int v5;
  char *v6;
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
  int v22;
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
  char *v62;
  int v63;
  int v64;
  int v65;
  int v66;
  bool v67; // cc
  int v68;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  char v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  char *v131;
  bool v132;
  bool v133;
  int v134;

  v3 = a1;
  v131 = a1;
  v134 = 0;
LABEL_2:
  v4 = *v3;
  v118 = v4;
  if ( a2 > 0 )
    goto LABEL_76;
  while ( 1 )
  {
    v5 = 0;
    v130 = 1;
    if ( v118 == 0 )
      goto LABEL_63;
    v6 = v131;
    v7 = 0;
    v8 = *((uint32_t *)v131 + 1);
    if ( *(uint8_t *)v8 != 0 )
    {
      v9 = *(uint32_t *)(v8 + 4);
      v10 = 0;
      if ( *(uint8_t *)v9 == 0 )
      {
LABEL_17:
        v21 = *(uint32_t *)(v8 + 8);
        v22 = 0;
        if ( *(uint8_t *)v21 != 0 )
        {
          v23 = *(uint32_t *)(v21 + 4);
          v24 = 0;
          if ( *(uint8_t *)v23 != 0 )
          {
            v25 = *(uint32_t *)(v23 + 4);
            v26 = 0;
            if ( *(uint8_t *)v25 != 0 )
            {
              v99 = *(uint32_t *)(v21 + 4);
              v115 = sub_1392210(*(uint32_t *)(v25 + 4));
              v83 = sub_1392210(*(uint32_t *)(v25 + 8));
              v23 = v99;
              v26 = v115 + (v115 > v83 ? v83 - v115 : 0) + 1;
            }
            v27 = *(uint32_t *)(v23 + 8);
            v28 = 0;
            if ( *(uint8_t *)v27 != 0 )
            {
              v114 = v26;
              v98 = sub_1392210(*(uint32_t *)(v27 + 4));
              v82 = sub_1392210(*(uint32_t *)(v27 + 8));
              v26 = v114;
              v28 = v98 + (v98 > v82 ? v82 - v98 : 0) + 1;
            }
            v24 = v26 + (v26 > v28 ? v28 - v26 : 0) + 1;
          }
          v29 = *(uint32_t *)(v21 + 8);
          v30 = 0;
          if ( *(uint8_t *)v29 != 0 )
          {
            v31 = *(uint32_t *)(v29 + 4);
            v32 = 0;
            if ( *(uint8_t *)v31 != 0 )
            {
              v97 = *(uint32_t *)(v29 + 4);
              v113 = sub_1392210(*(uint32_t *)(v31 + 4));
              v81 = sub_1392210(*(uint32_t *)(v97 + 8));
              v32 = v113 + (v113 > v81 ? v81 - v113 : 0) + 1;
            }
            v33 = *(uint32_t *)(v29 + 8);
            v34 = 0;
            if ( *(uint8_t *)v33 != 0 )
            {
              v112 = v32;
              v96 = sub_1392210(*(uint32_t *)(v33 + 4));
              v80 = sub_1392210(*(uint32_t *)(v33 + 8));
              v32 = v112;
              v34 = v96 + (v96 > v80 ? v80 - v96 : 0) + 1;
            }
            v30 = v32 + (v32 > v34 ? v34 - v32 : 0) + 1;
          }
          v22 = v24 + (v24 > v30 ? v30 - v24 : 0) + 1;
        }
        v35 = v10 > v22 ? v22 - v10 : 0;
        v6 = v131;
        v7 = v10 + v35 + 1;
        goto LABEL_32;
      }
      v11 = *(uint32_t *)(v9 + 4);
      if ( *(uint8_t *)v11 == 0 )
      {
LABEL_10:
        v15 = *(uint32_t *)(v9 + 8);
        v16 = 0;
        if ( *(uint8_t *)v15 != 0 )
        {
          v17 = *(uint32_t *)(v15 + 4);
          v18 = 0;
          if ( *(uint8_t *)v17 != 0 )
          {
            v101 = *(uint32_t *)(v15 + 4);
            v117 = sub_1392210(*(uint32_t *)(v17 + 4));
            v85 = sub_1392210(*(uint32_t *)(v101 + 8));
            v18 = v117 + (v117 > v85 ? v85 - v117 : 0) + 1;
          }
          v19 = *(uint32_t *)(v15 + 8);
          v20 = 0;
          if ( *(uint8_t *)v19 != 0 )
          {
            v116 = v18;
            v100 = sub_1392210(*(uint32_t *)(v19 + 4));
            v84 = sub_1392210(*(uint32_t *)(v19 + 8));
            v18 = v116;
            v20 = v100 + (v100 > v84 ? v84 - v100 : 0) + 1;
          }
          v16 = v18 + (v18 > v20 ? v20 - v18 : 0) + 1;
        }
        v10 += v10 > v16 ? v16 - v10 + 1 : 1;
        goto LABEL_17;
      }
      v12 = *(uint32_t *)(v11 + 4);
      if ( *(uint8_t *)v12 != 0 )
      {
        v86 = *(uint32_t *)(v9 + 4);
        v102 = sub_1392210(*(uint32_t *)(v12 + 4));
        v70 = sub_1392210(*(uint32_t *)(v12 + 8));
        v13 = *(uint32_t *)(v86 + 8);
        v5 = v102 + (v102 > v70 ? v70 - v102 : 0) + 1;
        v14 = 0;
        if ( *(uint8_t *)v13 == 0 )
          goto LABEL_9;
      }
      else
      {
        v13 = *(uint32_t *)(v11 + 8);
        v14 = 0;
        if ( *(uint8_t *)v13 == 0 )
        {
LABEL_9:
          v10 = v5 + (v5 > v14 ? v14 - v5 : 0) + 1;
          goto LABEL_10;
        }
      }
      v103 = v5;
      v87 = sub_1392210(*(uint32_t *)(v13 + 4));
      v71 = sub_1392210(*(uint32_t *)(v13 + 8));
      v5 = v103;
      v14 = v87 + (v87 > v71 ? v71 - v87 : 0) + 1;
      goto LABEL_9;
    }
LABEL_32:
    v36 = *((uint32_t *)v6 + 2);
    v37 = 0;
    if ( *(uint8_t *)v36 != 0 )
    {
      v38 = *(uint32_t *)(v36 + 4);
      v39 = 0;
      if ( *(uint8_t *)v38 != 0 )
      {
        v40 = *(uint32_t *)(v38 + 4);
        if ( *(uint8_t *)v40 != 0 )
        {
          v41 = *(uint32_t *)(v40 + 4);
          v120 = 0;
          if ( *(uint8_t *)v41 != 0 )
          {
            v95 = *(uint32_t *)(v36 + 4);
            v111 = *(uint32_t *)(v38 + 4);
            v128 = sub_1392210(*(uint32_t *)(v41 + 4));
            v79 = sub_1392210(*(uint32_t *)(v41 + 8));
            v40 = v111;
            v38 = v95;
            v120 = v128 + (v128 > v79 ? v79 - v128 : 0) + 1;
          }
          v42 = *(uint32_t *)(v40 + 8);
          v43 = 0;
          if ( *(uint8_t *)v42 != 0 )
          {
            v94 = v38;
            v110 = sub_1392210(*(uint32_t *)(v42 + 4));
            v78 = sub_1392210(*(uint32_t *)(v42 + 8));
            v38 = v94;
            v43 = v110 + (v110 > v78 ? v78 - v110 : 0) + 1;
          }
          v39 = v120 + (v120 > v43 ? v43 - v120 : 0) + 1;
        }
        v44 = *(uint32_t *)(v38 + 8);
        v45 = 0;
        if ( *(uint8_t *)v44 != 0 )
        {
          v46 = *(uint32_t *)(v44 + 4);
          v121 = 0;
          if ( *(uint8_t *)v46 != 0 )
          {
            v93 = v44;
            v109 = *(uint32_t *)(v44 + 4);
            v127 = sub_1392210(*(uint32_t *)(v46 + 4));
            v77 = sub_1392210(*(uint32_t *)(v109 + 8));
            v44 = v93;
            v121 = v127 + (v127 > v77 ? v77 - v127 : 0) + 1;
          }
          v47 = *(uint32_t *)(v44 + 8);
          v48 = 0;
          if ( *(uint8_t *)v47 != 0 )
          {
            v92 = v47;
            v108 = sub_1392210(*(uint32_t *)(v47 + 4));
            v76 = sub_1392210(*(uint32_t *)(v92 + 8));
            v48 = v108 + (v108 > v76 ? v76 - v108 : 0) + 1;
          }
          v45 = v121 + (v121 > v48 ? v48 - v121 : 0) + 1;
        }
        v39 += v39 > v45 ? v45 - v39 + 1 : 1;
      }
      v49 = *(uint32_t *)(v36 + 8);
      v50 = 0;
      if ( *(uint8_t *)v49 != 0 )
      {
        v51 = *(uint32_t *)(v49 + 4);
        v52 = 0;
        if ( *(uint8_t *)v51 != 0 )
        {
          v53 = *(uint32_t *)(v51 + 4);
          v122 = 0;
          if ( *(uint8_t *)v53 != 0 )
          {
            v107 = *(uint32_t *)(v49 + 4);
            v91 = *(uint32_t *)(v51 + 4);
            v126 = sub_1392210(*(uint32_t *)(v53 + 4));
            v75 = sub_1392210(*(uint32_t *)(v91 + 8));
            v51 = v107;
            v122 = v126 + (v126 > v75 ? v75 - v126 : 0) + 1;
          }
          v54 = *(uint32_t *)(v51 + 8);
          v55 = 0;
          if ( *(uint8_t *)v54 != 0 )
          {
            v90 = *(uint32_t *)(v51 + 8);
            v106 = sub_1392210(*(uint32_t *)(v54 + 4));
            v74 = sub_1392210(*(uint32_t *)(v90 + 8));
            v55 = v106 + (v106 > v74 ? v74 - v106 : 0) + 1;
          }
          v52 = v122 + (v122 > v55 ? v55 - v122 : 0) + 1;
        }
        v56 = *(uint32_t *)(v49 + 8);
        v57 = 0;
        if ( *(uint8_t *)v56 != 0 )
        {
          v58 = *(uint32_t *)(v56 + 4);
          v123 = 0;
          if ( *(uint8_t *)v58 != 0 )
          {
            v89 = v52;
            v105 = *(uint32_t *)(v56 + 4);
            v125 = sub_1392210(*(uint32_t *)(v58 + 4));
            v73 = sub_1392210(*(uint32_t *)(v105 + 8));
            v52 = v89;
            v123 = v125 + (v125 > v73 ? v73 - v125 : 0) + 1;
          }
          v59 = *(uint32_t *)(v56 + 8);
          v60 = 0;
          if ( *(uint8_t *)v59 != 0 )
          {
            v88 = v52;
            v104 = sub_1392210(*(uint32_t *)(v59 + 4));
            v72 = sub_1392210(*(uint32_t *)(v59 + 8));
            v52 = v88;
            v60 = v104 + (v104 > v72 ? v72 - v104 : 0) + 1;
          }
          v57 = v123 + (v123 > v60 ? v60 - v123 : 0) + 1;
        }
        v50 = v52 + (v52 > v57 ? v57 - v52 : 0) + 1;
      }
      v37 = v39 + (v39 > v50 ? v50 - v39 : 0) + 1;
    }
    v5 = v7 + (v7 > v37 ? v37 - v7 : 0) + 1;
    v130 = 1 << v5;
LABEL_63:
    v133 = v118 == 0;
    v124 = v5;
    v129 = v5 + 1;
    v132 = v5 + 1 <= 0;
    if ( v5 + 1 <= 0 )
    {
LABEL_73:
      v65 = 1;
      if ( v130 >= 1 )
        goto LABEL_74;
      goto LABEL_69;
    }
    while ( 1 )
    {
      if ( v133 )
        goto LABEL_73;
      v61 = v124;
      v62 = v131;
      v119 = 0;
      do
      {
        v63 = v61;
        v64 = v61--;
        v119 += sub_1390E20(*((uint8_t **)v62 + 1), v64);
        v62 = *((char **)v62 + 2);
      }
      while ( v63 > 0 && *v62 != 0 );
      v65 = v119 + 1;
      if ( v130 >= v119 + 1 )
        break;
LABEL_69:
      v66 = 1;
      if ( !v132 )
        v66 = 1 << v124;
      if ( v65 < v66 )
        break;
      v130 = v65;
      v124 = v129;
      v67 = ++v129 <= 0;
      v132 = v67;
      if ( v67 )
        goto LABEL_73;
    }
LABEL_74:
    if ( v124 <= 0 )
      return v134 + 4;
    a2 = v124 - 1;
    v68 = sub_13929C0();
    v131 = *((char **)v131 + 2);
    v134 += v68 + (4 << v124) + 4;
    v4 = *v131;
    v118 = *v131;
    if ( v124 - 1 > 0 )
    {
LABEL_76:
      if ( v4 != 0 )
      {
        --a2;
        v134 += sub_13929C0();
        v131 = *((char **)v131 + 2);
        v3 = v131;
        goto LABEL_2;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_13931F0  (binary VA: 0x13931f0)
// Original: sub_13931F0
// ----------------------------------------------------------------------------
uint8_t * sub_13931F0(int a1, uint8_t **a2)
{
  int v2;
  int v3;
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
  int v22;
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
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  uint8_t *v91;
  int v92;
  uint8_t *v93;
  int v94;
  uint8_t *v95;
  int v96;
  uint8_t *v97;
  int v98;
  uint8_t *v99;
  int v100;
  uint8_t *v101;
  int v102;
  int v103;
  uint8_t *v104;
  int v105;
  int v106;
  uint8_t *v107;
  uint8_t *v109;
  int v110;
  int v111;
  int v112;
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
  int v124;
  int v125;
  int v126;
  uint8_t *v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  uint8_t *v133;
  int v134;
  int v135;
  char v136;
  int v137;
  int v139;
  uint8_t *v140;
  uint8_t *v141;
  uint8_t *v142;
  uint8_t *v143;
  uint8_t *v144;
  int v146;
  int v147;
  uint8_t *v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  bool v160;
  bool v161;

  v2 = 0;
  v139 = 1;
  v136 = *(uint8_t *)a1;
  if ( *(uint8_t *)a1 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 4);
    v126 = 0;
    v128 = v3;
    if ( *(uint8_t *)v3 != 0 )
    {
      v4 = *(uint32_t *)(v3 + 4);
      if ( *(uint8_t *)v4 != 0 )
      {
        v5 = *(uint32_t *)(v4 + 4);
        v6 = 0;
        if ( *(uint8_t *)v5 != 0 )
        {
          v7 = *(uint32_t *)(v5 + 4);
          if ( *(uint8_t *)v7 != 0 )
          {
            v110 = *(uint32_t *)(v5 + 4);
            v8 = sub_1392210(*(uint32_t *)(v7 + 4));
            v9 = sub_1392210(*(uint32_t *)(v110 + 8));
            v6 = v8 + (v8 > v9 ? v9 - v8 : 0) + 1;
          }
          v10 = *(uint32_t *)(v5 + 8);
          v11 = 0;
          if ( *(uint8_t *)v10 != 0 )
          {
            v111 = *(uint32_t *)(v5 + 8);
            v12 = sub_1392210(*(uint32_t *)(v10 + 4));
            v13 = sub_1392210(*(uint32_t *)(v111 + 8));
            v11 = v12 + (v12 > v13 ? v13 - v12 : 0) + 1;
          }
          v6 += v6 > v11 ? v11 - v6 + 1 : 1;
        }
        v14 = *(uint32_t *)(v4 + 8);
        v15 = 0;
        if ( *(uint8_t *)v14 != 0 )
        {
          v16 = *(uint32_t *)(v14 + 4);
          v17 = 0;
          if ( *(uint8_t *)v16 != 0 )
          {
            v112 = *(uint32_t *)(v14 + 4);
            v18 = sub_1392210(*(uint32_t *)(v16 + 4));
            v19 = sub_1392210(*(uint32_t *)(v112 + 8));
            v17 = v18 + (v18 > v19 ? v19 - v18 : 0) + 1;
          }
          v20 = *(uint32_t *)(v14 + 8);
          v21 = 0;
          if ( *(uint8_t *)v20 != 0 )
          {
            v113 = *(uint32_t *)(v14 + 8);
            v22 = sub_1392210(*(uint32_t *)(v20 + 4));
            v23 = sub_1392210(*(uint32_t *)(v113 + 8));
            v21 = v22 + (v22 > v23 ? v23 - v22 : 0) + 1;
          }
          v15 = v17 + (v17 > v21 ? v21 - v17 : 0) + 1;
        }
        v126 = v6 + (v6 > v15 ? v15 - v6 : 0) + 1;
      }
      v24 = 0;
      v25 = *(uint32_t *)(v128 + 8);
      if ( *(uint8_t *)v25 != 0 )
      {
        v26 = *(uint32_t *)(v25 + 4);
        v27 = 0;
        if ( *(uint8_t *)v26 != 0 )
        {
          v28 = *(uint32_t *)(v26 + 4);
          if ( *(uint8_t *)v28 != 0 )
          {
            v114 = *(uint32_t *)(v128 + 8);
            v29 = sub_1392210(*(uint32_t *)(v28 + 4));
            v30 = sub_1392210(*(uint32_t *)(v28 + 8));
            v25 = v114;
            v27 = v29 + (v29 > v30 ? v30 - v29 : 0) + 1;
          }
          v31 = *(uint32_t *)(v26 + 8);
          v32 = 0;
          if ( *(uint8_t *)v31 != 0 )
          {
            v115 = v25;
            v33 = sub_1392210(*(uint32_t *)(v31 + 4));
            v34 = sub_1392210(*(uint32_t *)(v31 + 8));
            v25 = v115;
            v32 = v33 + (v33 > v34 ? v34 - v33 : 0) + 1;
          }
          v27 += v27 > v32 ? v32 - v27 + 1 : 1;
        }
        v35 = *(uint32_t *)(v25 + 8);
        v36 = 0;
        if ( *(uint8_t *)v35 != 0 )
        {
          v37 = *(uint32_t *)(v35 + 4);
          v38 = 0;
          if ( *(uint8_t *)v37 != 0 )
          {
            v116 = *(uint32_t *)(v35 + 4);
            v39 = sub_1392210(*(uint32_t *)(v37 + 4));
            v40 = sub_1392210(*(uint32_t *)(v116 + 8));
            v38 = v39 + (v39 > v40 ? v40 - v39 : 0) + 1;
          }
          v41 = *(uint32_t *)(v35 + 8);
          v42 = 0;
          if ( *(uint8_t *)v41 != 0 )
          {
            v117 = *(uint32_t *)(v35 + 8);
            v43 = sub_1392210(*(uint32_t *)(v41 + 4));
            v44 = sub_1392210(*(uint32_t *)(v117 + 8));
            v42 = v43 + (v43 > v44 ? v44 - v43 : 0) + 1;
          }
          v36 = v38 + (v38 > v42 ? v42 - v38 : 0) + 1;
        }
        v24 = v27 + (v27 > v36 ? v36 - v27 : 0) + 1;
      }
      v126 += v126 > v24 ? v24 - v126 + 1 : 1;
    }
    v131 = *(uint32_t *)(a1 + 8);
    v45 = 0;
    if ( *(uint8_t *)v131 != 0 )
    {
      v46 = *(uint32_t *)(v131 + 4);
      v129 = 0;
      if ( *(uint8_t *)v46 != 0 )
      {
        v47 = *(uint32_t *)(v46 + 4);
        v48 = 0;
        if ( *(uint8_t *)v47 != 0 )
        {
          v49 = *(uint32_t *)(v47 + 4);
          if ( *(uint8_t *)v49 != 0 )
          {
            v118 = *(uint32_t *)(v131 + 4);
            v50 = sub_1392210(*(uint32_t *)(v49 + 4));
            v51 = sub_1392210(*(uint32_t *)(v49 + 8));
            v46 = v118;
            v48 = v50 + (v50 > v51 ? v51 - v50 : 0) + 1;
          }
          v52 = *(uint32_t *)(v47 + 8);
          v53 = 0;
          if ( *(uint8_t *)v52 != 0 )
          {
            v119 = v46;
            v54 = sub_1392210(*(uint32_t *)(v52 + 4));
            v55 = sub_1392210(*(uint32_t *)(v52 + 8));
            v46 = v119;
            v53 = v54 + (v54 > v55 ? v55 - v54 : 0) + 1;
          }
          v48 += v48 > v53 ? v53 - v48 + 1 : 1;
        }
        v56 = *(uint32_t *)(v46 + 8);
        v57 = 0;
        if ( *(uint8_t *)v56 != 0 )
        {
          v58 = *(uint32_t *)(v56 + 4);
          v59 = 0;
          if ( *(uint8_t *)v58 != 0 )
          {
            v120 = *(uint32_t *)(v56 + 4);
            v60 = sub_1392210(*(uint32_t *)(v58 + 4));
            v61 = sub_1392210(*(uint32_t *)(v120 + 8));
            v59 = v60 + (v60 > v61 ? v61 - v60 : 0) + 1;
          }
          v62 = *(uint32_t *)(v56 + 8);
          v63 = 0;
          if ( *(uint8_t *)v62 != 0 )
          {
            v121 = *(uint32_t *)(v56 + 8);
            v64 = sub_1392210(*(uint32_t *)(v62 + 4));
            v65 = sub_1392210(*(uint32_t *)(v121 + 8));
            v63 = v64 + (v64 > v65 ? v65 - v64 : 0) + 1;
          }
          v57 = v59 + (v59 > v63 ? v63 - v59 : 0) + 1;
        }
        v129 = v48 + (v48 > v57 ? v57 - v48 : 0) + 1;
      }
      v66 = 0;
      v67 = *(uint32_t *)(v131 + 8);
      if ( *(uint8_t *)v67 != 0 )
      {
        v68 = *(uint32_t *)(v67 + 4);
        v69 = 0;
        if ( *(uint8_t *)v68 != 0 )
        {
          v70 = *(uint32_t *)(v68 + 4);
          if ( *(uint8_t *)v70 != 0 )
          {
            v122 = *(uint32_t *)(v131 + 8);
            v71 = sub_1392210(*(uint32_t *)(v70 + 4));
            v72 = sub_1392210(*(uint32_t *)(v70 + 8));
            v67 = v122;
            v69 = v71 + (v71 > v72 ? v72 - v71 : 0) + 1;
          }
          v73 = *(uint32_t *)(v68 + 8);
          v74 = 0;
          if ( *(uint8_t *)v73 != 0 )
          {
            v123 = v67;
            v75 = sub_1392210(*(uint32_t *)(v73 + 4));
            v76 = sub_1392210(*(uint32_t *)(v73 + 8));
            v67 = v123;
            v74 = v75 + (v75 > v76 ? v76 - v75 : 0) + 1;
          }
          v69 += v69 > v74 ? v74 - v69 + 1 : 1;
        }
        v77 = *(uint32_t *)(v67 + 8);
        v78 = 0;
        if ( *(uint8_t *)v77 != 0 )
        {
          v79 = *(uint32_t *)(v77 + 4);
          v80 = 0;
          if ( *(uint8_t *)v79 != 0 )
          {
            v124 = *(uint32_t *)(v77 + 4);
            v81 = sub_1392210(*(uint32_t *)(v79 + 4));
            v82 = sub_1392210(*(uint32_t *)(v124 + 8));
            v80 = v81 + (v81 > v82 ? v82 - v81 : 0) + 1;
          }
          v83 = *(uint32_t *)(v77 + 8);
          v84 = 0;
          if ( *(uint8_t *)v83 != 0 )
          {
            v125 = *(uint32_t *)(v77 + 8);
            v85 = sub_1392210(*(uint32_t *)(v83 + 4));
            v86 = sub_1392210(*(uint32_t *)(v125 + 8));
            v84 = v85 + (v85 > v86 ? v86 - v85 : 0) + 1;
          }
          v78 = v80 + (v80 > v84 ? v84 - v80 : 0) + 1;
        }
        v66 = v69 + (v69 > v78 ? v78 - v69 : 0) + 1;
      }
      v45 = v129 + (v129 > v66 ? v66 - v129 : 0) + 1;
    }
    v2 = v126 + (v126 > v45 ? v45 - v126 : 0) + 1;
    v139 = 1 << v2;
  }
  v137 = v2;
  while ( 1 )
  {
    v159 = v2 + 1;
    v160 = v2 + 1 <= 0;
    if ( v2 + 1 > 0 && v136 != 0 )
    {
      v146 = v137;
      v148 = (uint8_t *)a1;
      v153 = 0;
      do
      {
        v147 = v146;
        v161 = v146 <= 0;
        v140 = *((uint8_t **)v148 + 1);
        if ( v146 > 0 && **((uint8_t **)v148 + 1) != 0 )
        {
          v154 = 0;
          do
          {
            --v147;
            v141 = *((uint8_t **)v140 + 1);
            if ( v147 > 0 && **((uint8_t **)v140 + 1) != 0 )
            {
              v155 = 0;
              v149 = v147;
              do
              {
                --v149;
                v142 = *((uint8_t **)v141 + 1);
                if ( v149 > 0 && **((uint8_t **)v141 + 1) != 0 )
                {
                  v156 = 0;
                  v150 = v149;
                  do
                  {
                    --v150;
                    v143 = *((uint8_t **)v142 + 1);
                    if ( v150 > 0 && **((uint8_t **)v142 + 1) != 0 )
                    {
                      v157 = 0;
                      v151 = v150;
                      do
                      {
                        --v151;
                        v144 = *((uint8_t **)v143 + 1);
                        if ( v151 > 0 && **((uint8_t **)v143 + 1) != 0 )
                        {
                          v158 = 0;
                          v152 = v151;
                          do
                          {
                            --v152;
                            v133 = *((uint8_t **)v144 + 1);
                            if ( v152 > 0 && **((uint8_t **)v144 + 1) != 0 )
                            {
                              v135 = 0;
                              v134 = v152;
                              do
                              {
                                --v134;
                                v127 = *((uint8_t **)v133 + 1);
                                if ( v134 > 0 && **((uint8_t **)v133 + 1) != 0 )
                                {
                                  v132 = 0;
                                  v130 = v134;
                                  do
                                  {
                                    --v130;
                                    v87 = *((uint32_t *)v127 + 1);
                                    if ( v130 > 0 && *(uint8_t *)v87 != 0 )
                                    {
                                      v88 = v130;
                                      v89 = 0;
                                      do
                                      {
                                        v89 += sub_1390E20(*(uint8_t **)(v87 + 4), --v88);
                                        v87 = *(uint32_t *)(v87 + 8);
                                      }
                                      while ( v88 > 0 && *(uint8_t *)v87 != 0 );
                                      v90 = v89 + 1;
                                    }
                                    else
                                    {
                                      v90 = 1;
                                    }
                                    v132 += v90;
                                    v91 = *((uint8_t **)v127 + 2);
                                    v127 = v91;
                                  }
                                  while ( v130 > 0 && *v91 != 0 );
                                  v92 = v132 + 1;
                                }
                                else
                                {
                                  v92 = 1;
                                }
                                v135 += v92;
                                v93 = *((uint8_t **)v133 + 2);
                                v133 = v93;
                              }
                              while ( v134 > 0 && *v93 != 0 );
                              v94 = v135 + 1;
                            }
                            else
                            {
                              v94 = 1;
                            }
                            v158 += v94;
                            v95 = *((uint8_t **)v144 + 2);
                            v144 = v95;
                          }
                          while ( v152 > 0 && *v95 != 0 );
                          v96 = v158 + 1;
                        }
                        else
                        {
                          v96 = 1;
                        }
                        v157 += v96;
                        v97 = *((uint8_t **)v143 + 2);
                        v143 = v97;
                      }
                      while ( v151 > 0 && *v97 != 0 );
                      v98 = v157 + 1;
                    }
                    else
                    {
                      v98 = 1;
                    }
                    v156 += v98;
                    v99 = *((uint8_t **)v142 + 2);
                    v142 = v99;
                  }
                  while ( v150 > 0 && *v99 != 0 );
                  v100 = v156 + 1;
                }
                else
                {
                  v100 = 1;
                }
                v155 += v100;
                v101 = *((uint8_t **)v141 + 2);
                v141 = v101;
              }
              while ( v149 > 0 && *v101 != 0 );
              v102 = v155 + 1;
            }
            else
            {
              v102 = 1;
            }
            v154 += v102;
            v109 = *((uint8_t **)v140 + 2);
            v140 = v109;
          }
          while ( v147 > 0 && *v109 != 0 );
          v103 = v154 + 1;
        }
        else
        {
          v103 = 1;
        }
        v153 += v103;
        --v146;
        v104 = *((uint8_t **)v148 + 2);
        v148 = v104;
      }
      while ( !v161 && *v104 != 0 );
      v105 = v153 + 1;
    }
    else
    {
      v105 = 1;
    }
    if ( v139 >= v105 )
      break;
    v106 = 1;
    if ( !v160 )
      v106 = 1 << v137;
    if ( v105 < v106 )
      break;
    v139 = v105;
    v137 = v159;
    v2 = v159;
  }
  if ( v137 <= 1 )
    return sub_13911B0((char *)a1, a2);
  v107 = *a2;
  *v107 = v137;
  *a2 += (4 << v137) + 4;
  v107[2] = *(uint8_t *)(a1 + 2);
  sub_1393C20(v137, v137, a2);
  return v107;
}

// ----------------------------------------------------------------------------
// Function: sub_1393C20  (binary VA: 0x1393c20)
// Original: sub_1393C20
// ----------------------------------------------------------------------------
uint8_t * sub_1393C20(uint32_t *a1, int a2, int a3, int a4, uint8_t **a5)
{
  int v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint8_t *v17;
  int v18;
  uint8_t *v19;
  int v20;
  uint8_t *v21;
  int v22;
  int v23;
  uint8_t *v24;
  int v25;
  uint8_t *v26;
  int v27;
  uint8_t *result;
  int v29;
  uint8_t *v30;
  int v31;
  uint8_t *v32;
  int v33;
  uint8_t *v34;
  int v35;
  int v36;
  int v37;
  uint32_t *v38;
  char v39;
  int v40;
  int v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
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

  v58 = a2;
  if ( a3 <= 0 )
  {
    v39 = a4;
  }
  else
  {
    v5 = a2;
    v39 = a4;
    while ( *(uint8_t *)v5 != 0 )
    {
      v6 = *(uint32_t *)(v5 + 4);
      v7 = a3-- == 1;
      v48 = v6;
      if ( v7 )
      {
        v43 = a1;
LABEL_58:
        *(uint8_t *)(v48 + 2) = a4;
        *v43 = (uint32_t)(uintptr_t)(sub_13931F0(v48, a5));
        a1 = (uint32_t *)((char *)a1 + (4 << a3));
        v5 = *(uint32_t *)(v58 + 8);
        v58 = v5;
        if ( a3 == 0 )
        {
          *(uint8_t *)(v5 + 2) = a4;
          result = sub_13931F0(v5, a5);
          *a1 = (uint32_t)(uintptr_t)(result);
          return result;
        }
      }
      else
      {
        v49 = a3;
        v43 = a1;
        while ( *(uint8_t *)v6 != 0 )
        {
          v8 = *(uint32_t *)(v6 + 4);
          v7 = v49-- == 1;
          v50 = v8;
          if ( v7 )
          {
            v44 = v43;
LABEL_84:
            *(uint8_t *)(v50 + 2) = a4;
            *v44 = (uint32_t)(uintptr_t)(sub_13931F0(v50, a5));
            v43 = (uint32_t *)((char *)v43 + (4 << v49));
            v6 = *(uint32_t *)(v48 + 8);
            v48 = v6;
            if ( v49 == 0 )
              goto LABEL_58;
          }
          else
          {
            v44 = v43;
            v53 = v49;
            while ( *(uint8_t *)v8 != 0 )
            {
              v9 = *(uint32_t *)(v8 + 4);
              v7 = v53-- == 1;
              v54 = v9;
              if ( v7 )
              {
                v45 = v44;
LABEL_76:
                *(uint8_t *)(v54 + 2) = a4;
                *v45 = (uint32_t)(uintptr_t)(sub_13931F0(v54, a5));
                v44 = (uint32_t *)((char *)v44 + (4 << v53));
                v8 = *(uint32_t *)(v50 + 8);
                v50 = v8;
                if ( v53 == 0 )
                  goto LABEL_84;
              }
              else
              {
                v45 = v44;
                v55 = v53;
                while ( *(uint8_t *)v9 != 0 )
                {
                  v10 = *(uint32_t *)(v9 + 4);
                  v7 = v55-- == 1;
                  v51 = v10;
                  if ( v7 )
                  {
                    v46 = v45;
LABEL_69:
                    *(uint8_t *)(v10 + 2) = a4;
                    *v46 = (uint32_t)(uintptr_t)(sub_13931F0(v10, a5));
                    v45 = (uint32_t *)((char *)v45 + (4 << v55));
                    v9 = *(uint32_t *)(v54 + 8);
                    v54 = v9;
                    if ( v55 == 0 )
                      goto LABEL_76;
                  }
                  else
                  {
                    v46 = v45;
                    v52 = v55;
                    while ( *(uint8_t *)v10 != 0 )
                    {
                      v11 = *(uint32_t *)(v10 + 4);
                      v7 = v52-- == 1;
                      v57 = v11;
                      if ( v7 )
                      {
                        v47 = v46;
LABEL_68:
                        *(uint8_t *)(v57 + 2) = a4;
                        *v47 = (uint32_t)(uintptr_t)(sub_13931F0(v57, a5));
                        v46 = (uint32_t *)((char *)v46 + (4 << v52));
                        v10 = *(uint32_t *)(v51 + 8);
                        v51 = v10;
                        if ( v52 == 0 )
                          goto LABEL_69;
                      }
                      else
                      {
                        v47 = v46;
                        v56 = v52;
                        while ( *(uint8_t *)v11 != 0 )
                        {
                          v12 = *(uint32_t *)(v11 + 4);
                          v7 = v56-- == 1;
                          v41 = v12;
                          if ( v7 )
                          {
                            v42 = v47;
LABEL_24:
                            *(uint8_t *)(v41 + 2) = a4;
                            *v42 = (uint32_t)(uintptr_t)(sub_13931F0(v41, a5));
                            v47 = (uint32_t *)((char *)v47 + (4 << v56));
                            v11 = *(uint32_t *)(v57 + 8);
                            v57 = v11;
                            if ( v56 == 0 )
                              goto LABEL_68;
                          }
                          else
                          {
                            v42 = v47;
                            v40 = v56;
                            while ( *(uint8_t *)v12 != 0 )
                            {
                              v13 = *(uint32_t *)(v12 + 4);
                              v7 = v40-- == 1;
                              v37 = v13;
                              if ( v7 )
                              {
                                v38 = v42;
LABEL_23:
                                *(uint8_t *)(v13 + 2) = a4;
                                *v38 = (uint32_t)(uintptr_t)(sub_13931F0(v13, a5));
                                v42 = (uint32_t *)((char *)v42 + (4 << v40));
                                v12 = *(uint32_t *)(v41 + 8);
                                v41 = v12;
                                if ( v40 == 0 )
                                  goto LABEL_24;
                              }
                              else
                              {
                                v38 = v42;
                                v36 = v40;
                                if ( *(uint8_t *)v13 != 0 )
                                {
                                  while ( 1 )
                                  {
                                    v7 = v36-- == 1;
                                    v14 = *(uint32_t *)(v13 + 4);
                                    v15 = v38;
                                    if ( v7 )
                                      goto LABEL_22;
                                    v16 = v36;
                                    if ( *(uint8_t *)v14 != 0 )
                                      break;
LABEL_37:
                                    *(uint8_t *)(v14 + 2) = a4 - v16;
                                    v21 = sub_13931F0(v14, a5);
                                    *v15 = (uint32_t)(uintptr_t)(v21);
                                    v22 = 1 << v16;
                                    if ( v22 > 1 )
                                    {
                                      v23 = 1;
                                      while ( 1 )
                                      {
                                        v15[v23++] = (uint32_t)(uintptr_t)(v21);
                                        if ( v23 == v22 )
                                          break;
                                        v21 = (uint8_t *)*v15;
                                      }
                                    }
                                    v38 = (uint32_t *)((char *)v38 + (4 << v36));
                                    v13 = *(uint32_t *)(v37 + 8);
                                    v37 = v13;
LABEL_42:
                                    if ( *(uint8_t *)v13 == 0 )
                                      goto LABEL_43;
                                  }
                                  while ( 1 )
                                  {
                                    sub_1393C20(--v16, a4, a5);
                                    v14 = *(uint32_t *)(v14 + 8);
                                    v15 = (uint32_t *)((char *)v15 + (4 << v16));
                                    if ( v16 == 0 )
                                      break;
                                    if ( *(uint8_t *)v14 == 0 )
                                      goto LABEL_37;
                                  }
LABEL_22:
                                  *(uint8_t *)(v14 + 2) = a4;
                                  *v15 = (uint32_t)(uintptr_t)(sub_13931F0(v14, a5));
                                  v38 = (uint32_t *)((char *)v38 + (4 << v36));
                                  v13 = *(uint32_t *)(v37 + 8);
                                  v37 = v13;
                                  if ( v36 == 0 )
                                    goto LABEL_23;
                                  goto LABEL_42;
                                }
LABEL_43:
                                *(uint8_t *)(v37 + 2) = a4 - v36;
                                v24 = sub_13931F0(v37, a5);
                                *v38 = (uint32_t)(uintptr_t)(v24);
                                if ( 1 << v36 > 1 )
                                {
                                  v25 = 1;
                                  while ( 1 )
                                  {
                                    v38[v25++] = (uint32_t)(uintptr_t)(v24);
                                    if ( v25 == 1 << v36 )
                                      break;
                                    v24 = (uint8_t *)*v38;
                                  }
                                }
                                v42 = (uint32_t *)((char *)v42 + (4 << v40));
                                v12 = *(uint32_t *)(v41 + 8);
                                v41 = v12;
                              }
                            }
                            *(uint8_t *)(v41 + 2) = a4 - v40;
                            v26 = sub_13931F0(v41, a5);
                            *v42 = (uint32_t)(uintptr_t)(v26);
                            if ( 1 << v40 > 1 )
                            {
                              v27 = 1;
                              while ( 1 )
                              {
                                v42[v27++] = (uint32_t)(uintptr_t)(v26);
                                if ( v27 == 1 << v40 )
                                  break;
                                v26 = (uint8_t *)*v42;
                              }
                            }
                            v47 = (uint32_t *)((char *)v47 + (4 << v56));
                            v11 = *(uint32_t *)(v57 + 8);
                            v57 = v11;
                          }
                        }
                        *(uint8_t *)(v57 + 2) = a4 - v56;
                        v17 = sub_13931F0(v57, a5);
                        *v47 = (uint32_t)(uintptr_t)(v17);
                        if ( 1 << v56 > 1 )
                        {
                          v18 = 1;
                          while ( 1 )
                          {
                            v47[v18++] = (uint32_t)(uintptr_t)(v17);
                            if ( v18 == 1 << v56 )
                              break;
                            v17 = (uint8_t *)*v47;
                          }
                        }
                        v46 = (uint32_t *)((char *)v46 + (4 << v52));
                        v10 = *(uint32_t *)(v51 + 8);
                        v51 = v10;
                      }
                    }
                    *(uint8_t *)(v51 + 2) = a4 - v52;
                    v19 = sub_13931F0(v51, a5);
                    *v46 = (uint32_t)(uintptr_t)(v19);
                    if ( 1 << v52 > 1 )
                    {
                      v20 = 1;
                      while ( 1 )
                      {
                        v46[v20++] = (uint32_t)(uintptr_t)(v19);
                        if ( v20 == 1 << v52 )
                          break;
                        v19 = (uint8_t *)*v46;
                      }
                    }
                    v45 = (uint32_t *)((char *)v45 + (4 << v55));
                    v9 = *(uint32_t *)(v54 + 8);
                    v54 = v9;
                  }
                }
                *(uint8_t *)(v54 + 2) = a4 - v55;
                v30 = sub_13931F0(v54, a5);
                *v45 = (uint32_t)(uintptr_t)(v30);
                if ( 1 << v55 > 1 )
                {
                  v31 = 1;
                  while ( 1 )
                  {
                    v45[v31++] = (uint32_t)(uintptr_t)(v30);
                    if ( v31 == 1 << v55 )
                      break;
                    v30 = (uint8_t *)*v45;
                  }
                }
                v44 = (uint32_t *)((char *)v44 + (4 << v53));
                v8 = *(uint32_t *)(v50 + 8);
                v50 = v8;
              }
            }
            *(uint8_t *)(v50 + 2) = a4 - v53;
            v32 = sub_13931F0(v50, a5);
            *v44 = (uint32_t)(uintptr_t)(v32);
            if ( 1 << v53 > 1 )
            {
              v33 = 1;
              while ( 1 )
              {
                v44[v33++] = (uint32_t)(uintptr_t)(v32);
                if ( v33 == 1 << v53 )
                  break;
                v32 = (uint8_t *)*v44;
              }
            }
            v43 = (uint32_t *)((char *)v43 + (4 << v49));
            v6 = *(uint32_t *)(v48 + 8);
            v48 = v6;
          }
        }
        *(uint8_t *)(v48 + 2) = a4 - v49;
        v34 = sub_13931F0(v48, a5);
        *v43 = (uint32_t)(uintptr_t)(v34);
        if ( 1 << v49 > 1 )
        {
          v35 = 1;
          while ( 1 )
          {
            v43[v35++] = (uint32_t)(uintptr_t)(v34);
            if ( v35 == 1 << v49 )
              break;
            v34 = (uint8_t *)*v43;
          }
        }
        a1 = (uint32_t *)((char *)a1 + (4 << a3));
        v5 = *(uint32_t *)(v58 + 8);
        v58 = v5;
      }
    }
  }
  *(uint8_t *)(v58 + 2) = v39 - a3;
  result = sub_13931F0(v58, a5);
  *a1 = (uint32_t)(uintptr_t)(result);
  if ( 1 << a3 > 1 )
  {
    v29 = 1;
    while ( 1 )
    {
      a1[v29++] = (uint32_t)(uintptr_t)(result);
      if ( v29 == 1 << a3 )
        break;
      result = (uint8_t *)*a1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_13944C0  (binary VA: 0x13944c0)
// Original: sub_13944C0
// ----------------------------------------------------------------------------
int sub_13944C0(int a1, int a2, int a3)
{
  int v3;
  int v4;
  uint8_t v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char v13;
  char v14; // di
  uint8_t *v15;
  int v16;
  char v17;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint8_t v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char v32; // di
  int v33;
  uint8_t *v34;
  int v35;
  char v36;
  int v37;
  bool v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint8_t v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  char v51; // di
  int v52;
  uint8_t *v53;
  char v54;
  uint8_t v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  char v62;
  char v63; // bp
  uint8_t *v64;
  int v65;
  char v66;
  int v67;
  int v68;
  int v69;
  int v71;
  int v72;
  int v74;
  int v75;
  uint8_t v76;
  int v77;
  int v78;
  int v79;
  int v80;
  uint8_t v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  uint8_t v87;
  uint8_t v88;

  v3 = -20;
  if ( a3 <= 0 )
    return v3;
  v4 = oc_pack_read1(a1);
  if ( (int)oc_pack_bytes_left(a1) < 0 )
    return v3;
  if ( v4 != 0 )
  {
    v77 = oc_pack_read(a1, 5);
    if ( (int)oc_pack_bytes_left(a1) < 0 )
      return v3;
    v5 = byte_1D0E9E0[v77];
    v81 = v5;
    v74 = v5;
    if ( a3 < 2 * v5 - 1 )
      return v3;
    if ( v5 <= 1u )
    {
      v13 = byte_1D0EA00[v77];
      if ( v5 == 0 )
        return 0;
      v7 = 0;
    }
    else
    {
      v6 = 1;
      v7 = 0;
      do
      {
        v8 = 3 * v7;
        v7 += v6;
        v9 = a2 + 4 * v8;
        if ( v6 > 0 )
        {
          v10 = a2 + 12 * v7;
          v11 = 0;
          do
          {
            ++v11;
            *(uint32_t *)(v9 + 4) = v10;
            v12 = v10 + 12;
            v10 += 24;
            *(uint8_t *)v9 = 1;
            *(uint8_t *)(v9 + 2) = 1;
            *(uint32_t *)(v9 + 8) = v12;
            v9 += 12;
          }
          while ( v11 != v6 );
        }
        v6 *= 2;
      }
      while ( v74 > v6 );
      v13 = byte_1D0EA00[v77];
    }
    v14 = v13;
    v15 = (uint8_t *)(a2 + 12 * v7);
    v16 = 0;
    do
    {
      v17 = v14 + v16++;
      *v15 = 0;
      v15[2] = 1;
      v15[1] = v17;
      v15 += 12;
    }
    while ( v74 > v16 );
    return v7 + v81;
  }
  *(uint8_t *)a2 = 1;
  *(uint8_t *)(a2 + 2) = 1;
  v19 = a3 - 1;
  v78 = a2 + 12;
  *(uint32_t *)(a2 + 4) = a2 + 12;
  if ( a3 == 1 )
    return v3;
  v20 = oc_pack_read1(a1);
  if ( (int)oc_pack_bytes_left(a1) < 0 )
    return v3;
  if ( v20 != 0 )
  {
    v86 = oc_pack_read(a1, 5);
    if ( (int)oc_pack_bytes_left(a1) < 0 )
      return v3;
    v24 = byte_1D0E9E0[v86];
    v88 = v24;
    v82 = v24;
    if ( v19 < 2 * v24 - 1 )
      return v3;
    if ( v24 <= 1u )
    {
      v3 = 0;
      v32 = byte_1D0EA00[v86];
      if ( v24 == 0 )
        goto LABEL_35;
      v26 = 0;
    }
    else
    {
      v25 = 1;
      v26 = 0;
      do
      {
        v27 = 3 * v26;
        v26 += v25;
        v28 = v78 + 4 * v27;
        if ( v25 > 0 )
        {
          v29 = a2 + 4 * (3 * v26 + 3);
          v30 = 0;
          do
          {
            ++v30;
            *(uint32_t *)(v28 + 4) = v29;
            v31 = v29 + 12;
            v29 += 24;
            *(uint8_t *)v28 = 1;
            *(uint8_t *)(v28 + 2) = 1;
            *(uint32_t *)(v28 + 8) = v31;
            v28 += 12;
          }
          while ( v30 != v25 );
        }
        v25 *= 2;
      }
      while ( v82 > v25 );
      v32 = byte_1D0EA00[v86];
    }
    v33 = v26 + 1;
    v34 = (uint8_t *)(a2 + 12 * v33);
    v35 = 0;
    do
    {
      v36 = v32 + v35++;
      *v34 = 0;
      v34[2] = 1;
      v34[1] = v36;
      v34 += 12;
    }
    while ( v82 > v35 );
    v3 = v88 + v33 - 1;
    if ( v3 < 0 )
      return v3;
  }
  else
  {
    *(uint8_t *)(a2 + 12) = 1;
    *(uint8_t *)(a2 + 14) = 1;
    *(uint32_t *)(a2 + 16) = a2 + 24;
    v21 = sub_13944C0(a3 - 2);
    v3 = v21;
    if ( v21 < 0 )
      return v3;
    v22 = v21 + 1;
    *(uint32_t *)(a2 + 20) = v78 + 12 * (v21 + 1);
    v23 = sub_13944C0(v19 - (v21 + 1));
    v3 = v23;
    if ( v23 < 0 )
      return v3;
    v3 = v22 + v23;
  }
LABEL_35:
  v83 = v3 + 1;
  v37 = a3 - (v3 + 1);
  v38 = a3 == v3 + 1;
  v39 = 3 * (v3 + 1);
  v3 = -20;
  v79 = a2 + 4 * v39;
  *(uint32_t *)(a2 + 8) = v79;
  if ( v37 < 0 || v38 )
    return v3;
  v40 = oc_pack_read1(a1);
  if ( (int)oc_pack_bytes_left(a1) < 0 )
    return v3;
  if ( v40 == 0 )
  {
    *(uint8_t *)v79 = 1;
    *(uint8_t *)(v79 + 2) = 1;
    *(uint32_t *)(v79 + 4) = v79 + 12;
    v41 = sub_13944C0(v37 - 1);
    v3 = v41;
    if ( v41 < 0 )
      return v3;
    v84 = v41 + 1;
    v42 = v37 - (v41 + 1);
    v3 = -20;
    v71 = v79 + 12 * (v41 + 1);
    *(uint32_t *)(v79 + 8) = v71;
    if ( v42 <= 0 )
      return v3;
    v43 = oc_pack_read1(a1);
    if ( (int)oc_pack_bytes_left(a1) < 0 )
      return v3;
    if ( v43 != 0 )
    {
      v80 = oc_pack_read(a1, 5);
      if ( (int)oc_pack_bytes_left(a1) < 0 )
        return v3;
      v44 = byte_1D0E9E0[v80];
      v87 = v44;
      v75 = v44;
      if ( v42 < 2 * v44 - 1 )
        return v3;
      if ( v44 > 1u )
      {
        v45 = 1;
        v3 = 0;
        do
        {
          v46 = 3 * v3;
          v3 += v45;
          v47 = v71 + 4 * v46;
          if ( v45 > 0 )
          {
            v48 = v71 + 12 * v3;
            v49 = 0;
            do
            {
              ++v49;
              *(uint32_t *)(v47 + 4) = v48;
              v50 = v48 + 12;
              v48 += 24;
              *(uint8_t *)v47 = 1;
              *(uint8_t *)(v47 + 2) = 1;
              *(uint32_t *)(v47 + 8) = v50;
              v47 += 12;
            }
            while ( v49 != v45 );
          }
          v45 *= 2;
        }
        while ( v75 > v45 );
        v51 = byte_1D0EA00[v80];
LABEL_51:
        v52 = 0;
        v53 = (uint8_t *)(v71 + 12 * v3);
        do
        {
          v54 = v51 + v52++;
          *v53 = 0;
          v53[2] = 1;
          v53[1] = v54;
          v53 += 12;
        }
        while ( v75 > v52 );
        v3 += v87;
        if ( v3 < 0 )
          return v3;
        goto LABEL_71;
      }
      v3 = 0;
      v51 = byte_1D0EA00[v80];
      if ( v44 != 0 )
        goto LABEL_51;
    }
    else
    {
      *(uint8_t *)v71 = 1;
      *(uint8_t *)(v71 + 2) = 1;
      *(uint32_t *)(v71 + 4) = v71 + 12;
      v67 = sub_13944C0(v42 - 1);
      v3 = v67;
      if ( v67 < 0 )
        return v3;
      v68 = v67 + 1;
      *(uint32_t *)(v71 + 8) = v71 + 12 * (v67 + 1);
      v69 = sub_13944C0(v42 - (v67 + 1));
      v3 = v69;
      if ( v69 < 0 )
        return v3;
      v3 = v68 + v69;
    }
LABEL_71:
    v3 += v84;
    return v83 + v3;
  }
  v85 = oc_pack_read(a1, 5);
  if ( (int)oc_pack_bytes_left(a1) < 0 )
    return v3;
  v55 = byte_1D0E9E0[v85];
  v76 = v55;
  v72 = v55;
  if ( v37 < 2 * v55 - 1 )
    return v3;
  if ( v55 <= 1u )
  {
    v3 = 0;
    v62 = byte_1D0EA00[v85];
    if ( v55 == 0 )
      return v83 + v3;
  }
  else
  {
    v56 = 1;
    v3 = 0;
    do
    {
      v57 = 3 * v3;
      v3 += v56;
      v58 = v79 + 4 * v57;
      if ( v56 > 0 )
      {
        v59 = v79 + 12 * v3;
        v60 = 0;
        do
        {
          ++v60;
          *(uint32_t *)(v58 + 4) = v59;
          v61 = v59 + 12;
          v59 += 24;
          *(uint8_t *)v58 = 1;
          *(uint8_t *)(v58 + 2) = 1;
          *(uint32_t *)(v58 + 8) = v61;
          v58 += 12;
        }
        while ( v60 != v56 );
      }
      v56 *= 2;
    }
    while ( v72 > v56 );
    v62 = byte_1D0EA00[v85];
  }
  v63 = v62;
  v64 = (uint8_t *)(v79 + 12 * v3);
  v65 = 0;
  do
  {
    v66 = v63 + v65++;
    *v64 = 0;
    v64[2] = 1;
    v64[1] = v66;
    v64 += 12;
  }
  while ( v72 > v65 );
  v3 += v76;
  if ( v3 < 0 )
    return v3;
  return v83 + v3;
}

// ----------------------------------------------------------------------------
// Function: oc_huff_trees_unpack  (binary VA: 0x1394b50)
// Original: oc_huff_trees_unpack
// ----------------------------------------------------------------------------
int oc_huff_trees_unpack(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  char v9; // bp
  int v10;
  int v11;
  char *v12;
  char v13;
  size_t size;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18;
  typedef uint8_t *_g4_t_v19;
  typedef char _g4_t_v20[4];
  typedef uint8_t *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint8_t _g4_t_v23[6148];
  enum : size_t {
    _g4_s0 = 6272u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v16)) > _g4_s1 ? (20u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v18)) > _g4_s3 ? (31u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v22)) > _g4_s7 ? (52u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v23)) > _g4_s8 ? (56u + sizeof(_g4_t_v23)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 31u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);

  v16 = 0;
  while ( 1 )
  {
    v2 = oc_pack_read1(a1);
    if ( (int)oc_pack_bytes_left(a1) < 0 )
      return -20;
    if ( v2 != 0 )
    {
      v17 = oc_pack_read(a1, 5);
      if ( (int)oc_pack_bytes_left(a1) < 0 )
        return -20;
      v18 = byte_1D0E9E0[v17];
      if ( v18 <= 1u )
      {
        v9 = byte_1D0EA00[v17];
        if ( byte_1D0E9E0[v17] == 0 )
          goto LABEL_17;
        v4 = 0;
      }
      else
      {
        v15 = 1;
        v4 = 0;
        do
        {
          v5 = 3 * v4;
          v4 += v15;
          v6 = &v20[4 * v5];
          if ( v15 > 0 )
          {
            v7 = v4;
            do
            {
              *v6 = 1;
              *((uint32_t *)v6 + 1) = (uint32_t)(uintptr_t)(&v20[12 * v7]);
              v8 = 3 * v7 + 3;
              v7 += 2;
              v6[2] = 1;
              *((uint32_t *)v6 + 2) = (uint32_t)(uintptr_t)(&v20[4 * v8]);
              v6 += 12;
            }
            while ( v7 != v4 + 2 * v15 );
          }
          v15 *= 2;
        }
        while ( v18 > v15 );
        v9 = byte_1D0EA00[v17];
      }
      v10 = 0;
      v11 = v4;
      do
      {
        v12 = &v20[12 * v10 + 12 * v11];
        v13 = v9 + v10++;
        *v12 = 0;
        v12[2] = 1;
        v12[1] = v13;
      }
      while ( v18 > v10 );
      result = v18 + v11;
      if ( result < 0 )
        return result;
    }
    else
    {
      v21 = v23;
      v20[0] = 1;
      v20[2] = 1;
      result = sub_13944C0(a1, (int)(uintptr_t)(v23), 510);
      if ( result < 0 )
        return result;
      v22 = &v20[12 * result + 12];
      result = sub_13944C0(a1, (int)(uintptr_t)(v22), 510 - result);
      if ( result < 0 )
        return result;
    }
LABEL_17:
    size = sub_13929C0(v20, 0);
    v19 = (uint8_t *)(calloc(1u, size));
    if ( v19 == nullptr )
      return -1;
    *(uint32_t *)(a2 + 4 * v16++) = (uint32_t)(uintptr_t)(sub_13931F0((int)(uintptr_t)(v20), &v19));
    if ( v16 == 80 )
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: oc_huff_trees_copy  (binary VA: 0x1394da0)
// Original: oc_huff_trees_copy
// ----------------------------------------------------------------------------
char oc_huff_trees_copy(int a1, int a2)
{
  int v2;
  size_t v3;
  char v4;
  int v5;
  uint8_t *v6;
  int v7;
  char v8;
  char v9;
  int v10;
  uint8_t *v11;
  int v12;
  unsigned int v13;
  unsigned int i;
  __m128i v15;
  unsigned int v16;
  __m128i *v17;
  char result;
  int v19;
  void *v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef char _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef uint8_t *_g4_t_v33;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v26)) > _g4_s5 ? (28u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v28)) > _g4_s7 ? (36u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v29)) > _g4_s8 ? (40u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v30)) > _g4_s9 ? (44u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v31)) > _g4_s10 ? (44u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v32)) > _g4_s11 ? (44u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v33)) > _g4_s12 ? (60u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);

  v22 = 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = 4;
    v28 = *(char **)(a2 + 4 * v2);
    v4 = *v28;
    v29 = *v28;
    if ( *v28 != 0 )
      v3 = (4 << v4) + 4;
    if ( v4 != 0 )
    {
      v30 = 1 << v4;
      if ( 1 << v4 > 0 )
      {
        v5 = 0;
        do
        {
          v21 = *(char **)&v28[4 * v5 + 4];
          v3 += sub_1390910(v21);
          v5 += 1 << (v29 - v21[2]);
        }
        while ( v30 > v5 );
      }
    }
    v6 = (uint8_t *)(calloc(1u, v3));
    v33 = v6;
    if ( v6 == nullptr )
      break;
    v7 = 4;
    v8 = *v28;
    if ( *v28 != 0 )
      v7 = (4 << v8) + 4;
    *v6 = v8;
    v33 = &v6[v7];
    v6[2] = v28[2];
    v9 = *v28;
    if ( *v28 != 0 )
    {
      v23 = 1 << v9;
      if ( 1 << v9 > 0 )
      {
        v10 = 0;
        do
        {
          v11 = sub_13911B0(*(char **)&v28[4 * v10 + 4], &v33);
          *(uint32_t *)&v6[4 * v10 + 4] = (uint32_t)(uintptr_t)(v11);
          v12 = v10 + 1;
          v27 = v10 + (1 << (*v28 - v11[2]));
          if ( v10 + 1 >= v27 )
          {
            ++v10;
          }
          else
          {
            v26 = v10 + 2;
            v25 = 1 << (*v28 - v11[2]);
            v31 = v25 - 1;
            v13 = -((uint8_t)(((uint8_t)(uintptr_t)(v6) + 4 * (v10 + 2)) & 0xF) >> 2) & 3;
            if ( v13 > v25 - 1 )
              v13 = (1 << (*v28 - v11[2])) - 1;
            if ( v13 == 0 )
              goto LABEL_21;
            for ( i = 0; i < v13; ++i )
              *(uint32_t *)&v6[4 * v12++ + 4] = (uint32_t)(uintptr_t)(v11);
            if ( v31 != v13 )
            {
LABEL_21:
              v32 = v31 - v13;
              v24 = 4 * (v32 >> 2);
              if ( v24 == 0 )
                goto LABEL_38;
              v15 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v11)), 0);
              v16 = 0;
              v17 = (__m128i *)&v6[4 * v26 + 4 * v13];
              do
              {
                ++v16;
                *v17++ = v15;
              }
              while ( v16 < v32 >> 2 );
              v12 += v24;
              if ( v32 != v24 )
              {
LABEL_38:
                do
                  *(uint32_t *)&v6[4 * v12++ + 4] = (uint32_t)(uintptr_t)(v11);
                while ( v27 > v12 );
              }
            }
            v10 = v25 + v26 - 2;
          }
        }
        while ( v10 < v23 );
      }
    }
    else
    {
      v6[1] = v28[1];
    }
    *(uint32_t *)(a1 + 4 * v22) = (uint32_t)(uintptr_t)(v6);
    v2 = v22 + 1;
    v22 = v2;
    if ( v2 == 80 )
      return 0;
  }
  result = -1;
  if ( v22 != 0 )
  {
    v19 = v22 - 1;
    do
    {
      v20 = *(void **)(a1 + 4 * v19--);
      free(v20);
    }
    while ( v19 != -1 );
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_huff_trees_clear  (binary VA: 0x1395010)
// Original: oc_huff_trees_clear
// ----------------------------------------------------------------------------
void oc_huff_trees_clear(int a1)
{
  int i;
  void *ptr;

  for ( i = 0; i != 80; ++i )
  {
    ptr = *(void **)(a1 + 4 * i);
    free(ptr);
  }
}

// ----------------------------------------------------------------------------
// Function: oc_huff_token_decode  (binary VA: 0x1395050)
// Original: oc_huff_token_decode
// ----------------------------------------------------------------------------
int oc_huff_token_decode(unsigned int *a1, uint8_t *a2)
{
  uint8_t v2;
  unsigned int v3;
  int v4;
  uint8_t *v5;
  char v6;
  int v7;
  int v8;
  int v10;

  v2 = *a2;
  if ( *a2 != 0 )
  {
    v3 = *a1;
    v4 = a1[3];
    while ( 1 )
    {
      v10 = v2;
      if ( v2 > v4 )
        break;
LABEL_13:
      a2 = *(uint8_t **)&a2[4 * (v3 >> (32 - v10)) + 4];
      v8 = a2[2];
      v4 -= v8;
      v3 <<= v8;
      a1[3] = v4;
      *a1 = v3;
      v2 = *a2;
      if ( *a2 == 0 )
        return a2[1];
    }
    v5 = (uint8_t *)a1[1];
    if ( (unsigned int)(uintptr_t)(v5) < a1[2] )
    {
      if ( v4 > 24 )
      {
LABEL_10:
        v3 |= (int)*v5 >> (v4 & 7);
LABEL_12:
        a1[3] = v4;
        *a1 = v3;
        goto LABEL_13;
      }
      v6 = 24 - v4;
      while ( 1 )
      {
        v7 = *v5++;
        v3 |= v7 << v6;
        if ( v5 == (uint8_t *)a1[2] )
          break;
        v4 += 8;
        v6 -= 8;
        if ( v4 > 24 )
        {
          a1[1] = (unsigned int)(uintptr_t)(v5);
          if ( v10 <= v4 )
            goto LABEL_12;
          goto LABEL_10;
        }
      }
    }
    a1[1] = (unsigned int)(uintptr_t)(v5);
    v4 = 0x40000000;
    goto LABEL_12;
  }
  return a2[1];
}

// ----------------------------------------------------------------------------
// Function: th_info_init  (binary VA: 0x1395120)
// Original: th_info_init
// ----------------------------------------------------------------------------
int th_info_init(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  int result;
  uint16_t *v4;

  v1 = 64;
  v2 = (uint16_t *)a1;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOWORD(v1) = 63;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v1 -= 2;
  ++v2;
LABEL_3:
  result = 0;
  memset(v2, 0, 4 * (v1 >> 2));
  v4 = &v2[2 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
    *v4++ = 0;
  if ( (v1 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  *(uint8_t *)a1 = 3;
  *(uint8_t *)(a1 + 1) = 2;
  *(uint8_t *)(a1 + 2) = 1;
  *(uint32_t *)(a1 + 60) = 6;
  return result;
}

// ----------------------------------------------------------------------------
// Function: th_info_clear  (binary VA: 0x13951a0)
// Original: th_info_clear
// ----------------------------------------------------------------------------
int th_info_clear(uint8_t *a1)
{
  uint16_t *v1;
  unsigned int v2;
  int result;
  uint16_t *v4;

  v1 = (uint16_t *)(a1);
  v2 = 64;
  if ( ((uint8_t)(uintptr_t)(a1) & 1) != 0 )
  {
    *a1 = 0;
    v1 = (uint16_t *)(a1 + 1);
    LOBYTE(v2) = 63;
    if ( ((unsigned int)(uintptr_t)(a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(a1) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v1 = 0;
  v2 -= 2;
  ++v1;
LABEL_3:
  result = 0;
  memset(v1, 0, 4 * (v2 >> 2));
  v4 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v4++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: th_comment_init  (binary VA: 0x1395200)
// Original: th_comment_init
// ----------------------------------------------------------------------------
uint32_t * th_comment_init(uint32_t *a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: th_comment_add  (binary VA: 0x1395220)
// Original: th_comment_add
// ----------------------------------------------------------------------------
int th_comment_add(int a1, char *s)
{
  int result;
  int v3;
  int v4;
  size_t v5;
  size_t n;
  uint32_t *v7;
  void **v8;

  result = (int)(uintptr_t)(realloc(*(void **)a1, 4 * *(uint32_t *)(a1 + 8) + 8));
  v3 = result;
  if ( result != 0 )
  {
    *(uint32_t *)a1 = result;
    result = (int)(uintptr_t)(realloc(*(void **)(a1 + 4), 4 * *(uint32_t *)(a1 + 8) + 8));
    v4 = result;
    if ( result != 0 )
    {
      *(uint32_t *)(a1 + 4) = result;
      v5 = strlen(s);
      *(uint32_t *)(v4 + 4 * *(uint32_t *)(a1 + 8)) = v5;
      n = v5 + 1;
      v8 = (void **)(v3 + 4 * *(uint32_t *)(a1 + 8));
      *v8 = malloc(v5 + 1);
      result = *(uint32_t *)(a1 + 8);
      if ( *(uint32_t *)(v3 + 4 * result) != 0 )
      {
        memcpy(*(void **)(*(uint32_t *)a1 + 4 * result), s, n);
        v7 = *(uint32_t **)a1;
        result = *(uint32_t *)(a1 + 8) + 1;
        *(uint32_t *)(a1 + 8) = result;
        v7[result] = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: th_comment_add_tag  (binary VA: 0x1395310)
// Original: th_comment_add_tag
// ----------------------------------------------------------------------------
void th_comment_add_tag(int a1, const char *s, char *src)
{
  size_t n;
  size_t v4;
  char *v5;
  char *v6;

  n = strlen(s);
  v4 = strlen(src);
  v5 = (char *)malloc(n + v4 + 2);
  v6 = v5;
  if ( v5 != nullptr )
  {
    memcpy(v5, s, n);
    v6[n] = 61;
    memcpy(&v6[n + 1], src, v4 + 1);
    th_comment_add(a1, v6);
    free(v6);
  }
}

// ----------------------------------------------------------------------------
// Function: th_comment_query  (binary VA: 0x13953c0)
// Original: th_comment_query
// ----------------------------------------------------------------------------
int th_comment_query(int *a1, char *s, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  signed int v7;
  signed int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v8 = strlen(s);
  result = 0;
  v11 = a1[2];
  if ( v11 > 0 )
  {
    v10 = 0;
    v12 = *a1;
    v9 = 0;
    while ( 1 )
    {
      v4 = *(uint32_t *)(v12 + 4 * v9);
      if ( v8 <= 0 )
      {
        v7 = 0;
LABEL_11:
        if ( *(uint8_t *)(v4 + v7) != 61 )
          goto LABEL_7;
        if ( v10 == a3 )
          return v4 + v8 + 1;
        ++v10;
        if ( ++v9 == v11 )
          return 0;
      }
      else
      {
        v5 = 0;
        while ( 1 )
        {
          v6 = toupper(*(char *)(v4 + v5));
          if ( v6 != toupper(s[v5]) )
            break;
          if ( v8 == ++v5 )
          {
            v7 = v8;
            goto LABEL_11;
          }
        }
LABEL_7:
        if ( ++v9 == v11 )
          return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: th_comment_query_count  (binary VA: 0x13954c0)
// Original: th_comment_query_count
// ----------------------------------------------------------------------------
int th_comment_query_count(int *a1, char *s)
{
  int v2;
  int v3;
  int v4;
  signed int v6;
  signed int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v7 = strlen(s);
  v9 = 0;
  v10 = a1[2];
  if ( v10 > 0 )
  {
    v8 = 0;
    v11 = *a1;
    while ( 2 )
    {
      while ( 1 )
      {
        v2 = *(uint32_t *)(v11 + 4 * v8);
        if ( v7 > 0 )
          break;
        v6 = 0;
LABEL_10:
        ++v8;
        v9 += *(uint8_t *)(v2 + v6) == 61;
        if ( v8 == v10 )
          return v9;
      }
      v3 = 0;
      while ( 1 )
      {
        v4 = toupper(*(char *)(v2 + v3));
        if ( v4 != toupper(s[v3]) )
          break;
        if ( v7 == ++v3 )
        {
          v6 = v7;
          goto LABEL_10;
        }
      }
      if ( ++v8 != v10 )
        continue;
      break;
    }
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: th_comment_clear  (binary VA: 0x13955a0)
// Original: th_comment_clear
// ----------------------------------------------------------------------------
void th_comment_clear(int a1)
{
  int v1;
  void *ptr;

  if ( a1 != 0 )
  {
    if ( *(int *)(a1 + 8) > 0 )
    {
      v1 = 0;
      do
      {
        ptr = *(void **)(*(uint32_t *)a1 + 4 * v1++);
        free(ptr);
      }
      while ( *(uint32_t *)(a1 + 8) > v1 );
    }
    free(*(void **)a1);
    free(*(void **)(a1 + 4));
    free(*(void **)(a1 + 12));
    *(uint32_t *)a1 = 0;
    *(uint32_t *)(a1 + 4) = 0;
    *(uint32_t *)(a1 + 8) = 0;
    *(uint32_t *)(a1 + 12) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1395620  (binary VA: 0x1395620)
// Original: sub_1395620
// ----------------------------------------------------------------------------
int sub_1395620(uint8_t *a1, char *a2)
{
  unsigned int v2;
  int result;

  v2 = a2[5] + a2[3] + a2[1] + a2[7];
  *a1 = (int)(a2[6] + a2[4] + *a2 + a2[2] - ((unsigned int)(a2[6] + a2[4] + *a2 + a2[2]) >> 31) + 2) >> 2;
  result = (int)(v2 - (v2 >> 31) + 2) >> 2;
  a1[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1395680  (binary VA: 0x1395680)
// Original: sub_1395680
// ----------------------------------------------------------------------------
int sub_1395680(uint8_t *a1, char *a2)
{
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  int result;

  v3 = a2[1] + a2[5];
  *a1 = (int)(*a2 + a2[4] - ((unsigned int)(*a2 + a2[4]) >> 31) + 1) >> 1;
  a1[1] = (int)(v3 - (v3 >> 31) + 1) >> 1;
  v4 = a2[2] + a2[6];
  v5 = a2[3] + a2[7];
  a1[2] = (int)(v4 - (v4 >> 31) + 1) >> 1;
  result = (int)(v5 - (v5 >> 31) + 1) >> 1;
  a1[3] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_13956F0  (binary VA: 0x13956f0)
// Original: sub_13956F0
// ----------------------------------------------------------------------------
int sub_13956F0(uint8_t *a1, char *a2)
{
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  int result;

  v3 = a2[1] + a2[3];
  *a1 = (int)(*a2 + a2[2] - ((unsigned int)(*a2 + a2[2]) >> 31) + 1) >> 1;
  a1[1] = (int)(v3 - (v3 >> 31) + 1) >> 1;
  v4 = a2[4] + a2[6];
  v5 = a2[5] + a2[7];
  a1[4] = (int)(v4 - (v4 >> 31) + 1) >> 1;
  result = (int)(v5 - (v5 >> 31) + 1) >> 1;
  a1[5] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1395760  (binary VA: 0x1395760)
// Original: sub_1395760
// ----------------------------------------------------------------------------
uint32_t * sub_1395760(uint32_t *a1, uint32_t *a2)
{
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: oc_ilog  (binary VA: 0x1395780)
// Original: oc_ilog
// ----------------------------------------------------------------------------
int oc_ilog(unsigned int a1)
{
  unsigned int v1;
  int result;

  v1 = a1;
  for ( result = 0; v1 != 0; v1 >>= 1 )
    ++result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_malloc_2d  (binary VA: 0x13957a0)
// Original: oc_malloc_2d
// ----------------------------------------------------------------------------
uint32_t * oc_malloc_2d(int a1, int a2, int a3)
{
  int v3;
  uint32_t *result;
  char *v5;
  uint32_t *v6;

  v3 = a1;
  result = (uint32_t *)(malloc(4 * a1 + a1 * a2 * a3));
  if ( result != nullptr && a1 != 0 )
  {
    v5 = (char *)&result[a1];
    v6 = result;
    do
    {
      *v6 = (uint32_t)(uintptr_t)(v5);
      v5 += a2 * a3;
      --v3;
      ++v6;
    }
    while ( v3 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_calloc_2d  (binary VA: 0x1395800)
// Original: oc_calloc_2d
// ----------------------------------------------------------------------------
uint32_t * oc_calloc_2d(int a1, int a2, int a3)
{
  int v3;
  uint32_t *result;
  char *v5;
  uint32_t *v6;

  v3 = a1;
  result = (uint32_t *)(calloc(4 * a1 + a1 * a2 * a3, 1u));
  if ( result != nullptr && a1 != 0 )
  {
    v5 = (char *)&result[a1];
    v6 = result;
    do
    {
      *v6 = (uint32_t)(uintptr_t)(v5);
      v5 += a2 * a3;
      --v3;
      ++v6;
    }
    while ( v3 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_free_2d  (binary VA: 0x1395870)
// Original: oc_free_2d
// ----------------------------------------------------------------------------
void oc_free_2d(void *ptr)
{
  free(ptr);
}

// ----------------------------------------------------------------------------
// Function: oc_ycbcr_buffer_flip  (binary VA: 0x13958a0)
// Original: oc_ycbcr_buffer_flip
// ----------------------------------------------------------------------------
uint32_t * oc_ycbcr_buffer_flip(uint32_t *a1, uint32_t *a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  *a1 = *a2;
  v3 = a2[1];
  a1[1] = v3;
  v4 = -a2[2];
  a1[2] = v4;
  a1[3] = a2[3] + (1 - v3) * v4;
  a1[4] = a2[4];
  v5 = a2[5];
  a1[5] = v5;
  v6 = -a2[6];
  a1[6] = v6;
  a1[7] = a2[7] + (1 - v5) * v6;
  a1[8] = a2[8];
  v7 = a2[9];
  a1[9] = v7;
  v8 = -a2[10];
  a1[10] = v8;
  a1[11] = a2[11] + (1 - v7) * v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: th_version_string  (binary VA: 0x1395930)
// Original: th_version_string
// ----------------------------------------------------------------------------
const char * th_version_string()
{
  return "Xiph.Org libtheora 1.1 20090822 (Thusnelda)";
}

// ----------------------------------------------------------------------------
// Function: th_version_number  (binary VA: 0x1395950)
// Original: th_version_number
// ----------------------------------------------------------------------------
int th_version_number()
{
  return 197121;
}

// ----------------------------------------------------------------------------
// Function: th_packet_isheader  (binary VA: 0x1395960)
// Original: th_packet_isheader
// ----------------------------------------------------------------------------
int th_packet_isheader(int a1)
{
  int result;

  result = 0;
  if ( *(int *)(a1 + 4) > 0 )
    return **(uint8_t **)a1 >> 7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: th_packet_iskeyframe  (binary VA: 0x1395980)
// Original: th_packet_iskeyframe
// ----------------------------------------------------------------------------
int th_packet_iskeyframe(int a1)
{
  int result;
  char v2;

  result = 0;
  if ( *(int *)(a1 + 4) > 0 )
  {
    v2 = **(uint8_t **)a1;
    result = -1;
    if ( v2 >= 0 )
      return (v2 & 0x40) == 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_dequant_tables_init  (binary VA: 0x13959b0)
// Original: oc_dequant_tables_init
// ----------------------------------------------------------------------------
int oc_dequant_tables_init(int a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint16_t *v9;
  unsigned int v10;
  uint64_t v11;
  int j;
  unsigned int v13;
  int v14;
  int v15;
  int k;
  const void *v17;
  int v18;
  int v19;
  int m;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int i;
  int v35;
  uint16_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  uint32_t v42[19];

  for ( i = 0; i != 2; ++i )
  {
    v33 = 0;
    result = a3 + 36 * i + 320;
    v29 = (int *)result;
    do
    {
      v4 = *v29;
      if ( *v29 >= 0 )
      {
        v5 = 0;
        v28 = 0;
        v30 = dword_1D0EB60[i];
        v26 = dword_1D0EB68[i];
        v38 = i + 2 * v33;
        while ( 2 )
        {
          v31 = v5 << 6;
          v6 = v29[2];
          std::memcpy(v42, (const void *)(v6 + (v5 << 6)), 56);
          v7 = *(uint32_t *)(v6 + (v5 << 6) + 56);
          v8 = *(uint32_t *)(v6 + (v5 << 6) + 60);
          v42[14] = v7;
          v42[15] = v8;
          if ( v5 == v4 )
            v27 = v28 + 1;
          else
            v27 = *(uint32_t *)(v29[1] + 4 * v5) + v28;
          v23 = v5 + 1;
          v25 = 4 * v5;
          v24 = (v5 + 1) << 6;
          v36 = (uint16_t *)(a3 + 2 * v28);
          v35 = v27 + ~v28;
          v32 = v28;
          v9 = v36;
LABEL_8:
          v10 = LOBYTE(v42[0]) * *v9;
          if ( a2 != 0 )
            *(uint32_t *)(a2 + 4 * v32) = v10 / 0xA0;
          v41 = a1 + 24 * v32;
          v11 = (unsigned int)v30
              - (((4096 - 4 * (v10 / 0x64)) & ((4096 - (uint64_t)(4 * (v10 / 0x64))) >> 32))
               + 4 * (v10 / 0x64));
          **(uint16_t **)(v41 + 4 * v38) = v30 - (v11 & WORD2(v11));
          for ( j = 1; j != 64; ++j )
          {
            v13 = 4 * (v36[64] * (unsigned int)*((uint8_t *)v42 + OC_FZIG_ZAG[j]) / 0x64);
            result = (v26 - (((4096 - v13) & ((4096 - (uint64_t)v13) >> 32)) + v13))
                   & (((unsigned int)v26 - (((4096 - v13) & ((4096 - (uint64_t)v13) >> 32)) + v13)) >> 32);
            *(uint16_t *)(*(uint32_t *)(v41 + 4 * v38) + 2 * j) = v26 - result;
          }
          v37 = 0;
          v14 = a1 + 24 * v32;
          while ( 2 )
          {
            v15 = 3;
            if ( v37 >= i )
              v15 = v33;
            v39 = v15;
            for ( k = 0; k < v39; ++k )
            {
              v17 = *(const void **)(v41 + 8 * k);
              v22 = v14;
              result = memcmp(*(const void **)(v14 + 4 * v38), v17, 0x80u);
              v14 = v22;
              if ( result == 0 )
              {
                result = (int)(uintptr_t)(v17);
                v18 = ++v32;
                *(uint32_t *)(v22 + 4 * v38) = (uint32_t)(uintptr_t)(v17);
                if ( v27 <= v32 )
                  goto LABEL_25;
LABEL_21:
                v40 = v18 - v28;
                v19 = v29[2];
                v21 = *(uint32_t *)(v29[1] + v25);
                for ( m = 0; m != 64; ++m )
                  *((uint8_t *)v42 + m) = (v21
                                       + 2
                                       * (v35 * *(uint8_t *)(v19 + v31 + m)
                                        + v40 * *(uint8_t *)(v24 + v19 + m)))
                                      / (2
                                       * v21);
                ++v36;
                --v35;
                v9 = v36;
                goto LABEL_8;
              }
            }
            ++v37;
            v41 += 4;
            if ( i >= v37 )
              continue;
            break;
          }
          v18 = ++v32;
          if ( v27 > v32 )
            goto LABEL_21;
LABEL_25:
          v5 = v23;
          v4 = *v29;
          if ( *v29 >= v23 )
          {
            v28 = v32;
            continue;
          }
          break;
        }
      }
      ++v33;
      v29 += 3;
    }
    while ( v33 != 3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1395DE0  (binary VA: 0x1395de0)
// Original: sub_1395DE0
// ----------------------------------------------------------------------------
int sub_1395DE0(int a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = (a3 >> 1) + a2[8] * (a4 >> 1);
  *(uint32_t *)(a1 + 16) = v4 + a2[10];
  result = a2[18] + v4;
  *(uint32_t *)(a1 + 32) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1395E10  (binary VA: 0x1395e10)
// Original: sub_1395E10
// ----------------------------------------------------------------------------
int sub_1395E10(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int v5;
  int result;

  v4 = a3 + a2[8] * (a4 >> 1);
  a1[4] = v4 + a2[10];
  v5 = v4 + a2[18];
  ++v4;
  a1[8] = v5;
  a1[5] = v4 + a2[10];
  result = a2[18] + v4;
  a1[9] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1395E50  (binary VA: 0x1395e50)
// Original: sub_1395E50
// ----------------------------------------------------------------------------
uint32_t * sub_1395E50(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v5;
  int v6;

  v5 = a2[8] * a4 + (a3 >> 1);
  a1[4] = v5 + a2[10];
  a1[8] = v5 + a2[18];
  v6 = a2[8] + v5;
  a1[6] = v6 + a2[10];
  a1[10] = a2[18] + v6;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1395E90  (binary VA: 0x1395e90)
// Original: sub_1395E90
// ----------------------------------------------------------------------------
int * sub_1395E90(int *a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;

  v3 = *a1;
  a1[4] = *a1 + *(uint32_t *)(a2 + 40);
  a1[8] = *(uint32_t *)(a2 + 72) + v3;
  v4 = a1[1];
  a1[5] = v4 + *(uint32_t *)(a2 + 40);
  a1[9] = *(uint32_t *)(a2 + 72) + v4;
  v5 = a1[2];
  a1[6] = v5 + *(uint32_t *)(a2 + 40);
  a1[10] = *(uint32_t *)(a2 + 72) + v5;
  v6 = a1[3];
  a1[7] = v6 + *(uint32_t *)(a2 + 40);
  a1[11] = *(uint32_t *)(a2 + 72) + v6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: oc_state_frag_copy_list_c  (binary VA: 0x1395ee0)
// Original: oc_state_frag_copy_list_c
// ----------------------------------------------------------------------------
int oc_state_frag_copy_list_c(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v7 = *(uint32_t *)(a1 + 208);
  v12 = *(uint32_t *)(a1 + 4 * *(uint32_t *)(a1 + 4 * a4 + 272) + 480);
  v13 = *(uint32_t *)(a1 + 4 * *(uint32_t *)(a1 + 4 * a5 + 272) + 480);
  v14 = *(uint32_t *)(a1 + 4 * a6 + 496);
  result = a3;
  if ( a3 > 0 )
  {
    v9 = 0;
    do
    {
      v10 = *(uint32_t *)(a2 + 4 * v9++);
      v11 = a2;
      result = oc_frag_copy(a1, v12 + *(uint32_t *)(v7 + 4 * v10), *(uint32_t *)(v7 + 4 * v10) + v13, v14);
      a2 = v11;
    }
    while ( v9 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_state_loop_filter_frag_rows_c  (binary VA: 0x1395f90)
// Original: oc_state_loop_filter_frag_rows_c
// ----------------------------------------------------------------------------
int oc_state_loop_filter_frag_rows_c(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  uint8_t *v10;
  int v11;
  int v12;
  int v13;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;
  uint8_t *v18;
  int v19;
  int v20;
  int v21;
  uint8_t *v22;
  int v23;
  int v24;
  int v25;
  uint8_t *v26;
  uint8_t *v27;
  int v28;
  int v29;
  int v30;
  uint8_t *v31;
  uint8_t *v32;
  int v33;
  int v34;
  int v35;
  uint8_t *v36;
  uint8_t *v37;
  int v38;
  int v39;
  int v40;
  uint8_t *v41;
  uint8_t *v42;
  int v43;
  uint8_t v44; // di
  int v45;
  int v46;
  uint8_t *v47;
  uint8_t *v48;
  uint8_t *v49;
  int v50;
  int v51;
  int v52;
  uint8_t *v53;
  int v54;
  int v55;
  int v56;
  uint8_t *v57;
  int v58;
  int v59;
  int v60;
  uint8_t *v61;
  int v62;
  int v63;
  int v64;
  uint8_t *v65;
  uint8_t *v66;
  int v67;
  int v68;
  int v69;
  uint8_t *v70;
  uint8_t *v71;
  int v72;
  int v73;
  int v74;
  uint8_t *v75;
  uint8_t *v76;
  int v77;
  int v78;
  int v79;
  uint8_t *v80;
  uint8_t *v81;
  int v82;
  int v83;
  int v84;
  int v85;
  uint8_t *v86;
  int v87;
  int v88;
  int v89;
  uint8_t *v90;
  int v91;
  int v92;
  int v93;
  uint8_t *v94;
  int v95;
  int v96;
  int v97;
  uint8_t *v98;
  int v99;
  int v100;
  int v101;
  uint8_t *v102;
  int v103;
  int v104;
  int v105;
  uint8_t *v106;
  int v107;
  int v108;
  int v109;
  uint8_t *v110;
  int v111;
  int v112;
  int v113;
  uint8_t *v114;
  int v115;
  int v116;
  int v117;
  uint8_t *v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  uint8_t *v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  uint8_t *v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  uint8_t *v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  uint8_t *v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  uint8_t *v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  uint8_t *v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  uint8_t *v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  uint8_t v191;
  uint8_t v192;
  uint8_t v193;
  char v194;
  uint8_t v195;
  uint8_t v196;
  uint8_t v197;
  uint8_t v198;
  uint8_t v199;
  uint8_t v200;
  uint8_t v201;
  uint8_t v202;
  int v203;
  uint8_t *v204;
  uint8_t v205;
  uint8_t v206;
  uint8_t v207;
  uint8_t v208;
  char v209;
  uint8_t *v210;
  int v211;
  int v212;
  int v213;
  char v214;
  char v215;
  char v216;
  char v217;
  char v218;
  char v219;
  char v220;
  char v221;
  char v222;
  char v223;
  char v224;
  char v225;
  char v226;
  char v227;
  char v228;
  char v229;
  char v230;
  char v231;
  char v232;
  char v233;
  char v234;
  char v235;
  uint8_t v236;
  uint8_t v237;
  uint8_t v238;
  uint8_t v239;
  uint8_t v240;
  uint8_t v241;
  uint8_t v242;
  uint8_t v243;
  uint8_t v244;
  uint8_t v245;
  uint8_t v246;
  uint8_t v247;
  uint8_t v248;
  uint8_t v249;
  uint8_t v250;
  char v251;
  uint8_t v252;
  uint8_t v253;
  uint8_t v254;
  uint8_t v255;
  uint8_t v256;
  uint8_t v257;
  uint8_t v258;
  uint8_t v259;
  int v260;
  int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int v268;
  int v269;
  int v270;
  int v271;
  int v272;
  int v273;
  int v274;
  int v275;
  int v276;
  int v277;
  int v278;
  int v279;
  int v280;
  int v281;
  int v282;
  int v283;
  int v284;
  int v285;
  int v286;

  result = a1;
  v211 = a2 + 508;
  v212 = *(uint32_t *)(a1 + 4 * a4 + 496);
  v285 = *(uint32_t *)(a1 + 32 * (a4 + 3) + 12);
  v261 = *(uint32_t *)(a1 + 32 * (a4 + 3) + 20);
  v7 = v261 + a5 * v285;
  v286 = v7 + v285 * (a6 - a5);
  v262 = *(uint32_t *)(a1 + 32 * (a4 + 3) + 24) + v261;
  v263 = *(uint32_t *)(a1 + 208);
  v264 = *(uint32_t *)(a1 + 4 * a3 + 480);
  if ( v7 < v286 )
  {
    v281 = -2 * v212;
    v266 = 2 * v212;
    v267 = 3 * v212 + 1;
    v268 = 2 * v212 + 1;
    v269 = 3 * v212 + 2;
    v270 = 2 * v212 + 2;
    v271 = 3 * v212 + 3;
    v272 = 2 * v212 + 3;
    v273 = 3 * v212 + 4;
    v274 = 2 * v212 + 4;
    v275 = 3 * v212 + 5;
    v276 = 2 * v212 + 5;
    v277 = 3 * v212 + 6;
    v278 = 2 * v212 + 6;
    v279 = 3 * v212 + 7;
    v280 = 2 * v212 + 7;
    v260 = v261 + a5 * v285;
    v265 = *(uint32_t *)(a1 + 204) + 4 * v7;
    v282 = v212 + 1;
    v283 = v212 + 2;
    v284 = v212 + 3;
    while ( 1 )
    {
      v213 = v260 + v285;
      if ( v260 < v260 + v285 )
      {
        v210 = (uint8_t *)v265;
        v203 = v260 + 1;
        do
        {
          if ( (*v210 & 1) != 0 )
          {
            v8 = (uint8_t *)(*(uint32_t *)(v263 + 4 * v203 - 4) + v264);
            v204 = v8;
            if ( v203 - 1 > v260 )
            {
              v85 = *(uint32_t *)(v263 + 4 * v203 - 4) + v264;
              v86 = v8 - 2;
              v195 = *v8;
              v87 = (uint8_t)*(v8 - 1);
              v88 = *(uint32_t *)(v211
                              + 4
                              * ((*(uint8_t *)(v85 - 2)
                                - *(uint8_t *)(v85 + 1)
                                + 3 * (v195 - (uint8_t)v87)
                                + 4) >> 3));
              v89 = 0;
              v228 = v88;
              if ( v88 + (uint8_t)v87 >= 0 )
              {
                LOBYTE(v89) = v88 + (uint8_t)v87 > 255;
                v89 = (v88 + v87) | -v89;
              }
              *(v204 - 1) = v89;
              LOBYTE(v89) = 0;
              if ( v195 - v88 >= 0 )
              {
                LOBYTE(v88) = v195 - v88 > 255;
                v89 = -v88 | (uint8_t)(v195 - v228);
              }
              v90 = &v86[v212];
              *v204 = v89;
              v196 = v90[2];
              v91 = v90[1];
              v92 = *(uint32_t *)(v211 + 4 * ((*v90 - v90[3] + 3 * (v196 - (uint8_t)v91) + 4) >> 3));
              v93 = 0;
              v229 = v92;
              if ( v92 + (uint8_t)v91 >= 0 )
              {
                LOBYTE(v93) = v92 + (uint8_t)v91 > 255;
                v93 = (v92 + v91) | -v93;
              }
              v90[1] = v93;
              LOBYTE(v93) = 0;
              if ( v196 - v92 >= 0 )
              {
                LOBYTE(v92) = v196 - v92 > 255;
                v93 = -v92 | (uint8_t)(v196 - v229);
              }
              v90[2] = v93;
              v94 = &v90[v212];
              v197 = v94[2];
              v95 = v94[1];
              v96 = *(uint32_t *)(v211 + 4 * ((*v94 - v94[3] + 3 * (v197 - (uint8_t)v95) + 4) >> 3));
              v97 = 0;
              v230 = v96;
              if ( v96 + (uint8_t)v95 >= 0 )
              {
                LOBYTE(v97) = v96 + (uint8_t)v95 > 255;
                v97 = (v96 + v95) | -v97;
              }
              v94[1] = v97;
              LOBYTE(v97) = 0;
              if ( v197 - v96 >= 0 )
              {
                LOBYTE(v96) = v197 - v96 > 255;
                v97 = -v96 | (uint8_t)(v197 - v230);
              }
              v94[2] = v97;
              v98 = &v94[v212];
              v198 = v98[2];
              v99 = v98[1];
              v100 = *(uint32_t *)(v211 + 4 * ((*v98 - v98[3] + 3 * (v198 - (uint8_t)v99) + 4) >> 3));
              v101 = 0;
              v231 = v100;
              if ( v100 + (uint8_t)v99 >= 0 )
              {
                LOBYTE(v101) = v100 + (uint8_t)v99 > 255;
                v101 = (v100 + v99) | -v101;
              }
              v98[1] = v101;
              LOBYTE(v101) = 0;
              if ( v198 - v100 >= 0 )
              {
                LOBYTE(v100) = v198 - v100 > 255;
                v101 = -v100 | (uint8_t)(v198 - v231);
              }
              v98[2] = v101;
              v102 = &v98[v212];
              v199 = v102[2];
              v103 = v102[1];
              v104 = *(uint32_t *)(v211 + 4 * ((*v102 - v102[3] + 3 * (v199 - (uint8_t)v103) + 4) >> 3));
              v105 = 0;
              v232 = v104;
              if ( v104 + (uint8_t)v103 >= 0 )
              {
                LOBYTE(v105) = v104 + (uint8_t)v103 > 255;
                v105 = (v104 + v103) | -v105;
              }
              v102[1] = v105;
              LOBYTE(v105) = 0;
              if ( v199 - v104 >= 0 )
              {
                LOBYTE(v104) = v199 - v104 > 255;
                v105 = -v104 | (uint8_t)(v199 - v232);
              }
              v102[2] = v105;
              v106 = &v102[v212];
              v200 = v106[2];
              v107 = v106[1];
              v108 = *(uint32_t *)(v211 + 4 * ((*v106 - v106[3] + 3 * (v200 - (uint8_t)v107) + 4) >> 3));
              v109 = 0;
              v233 = v108;
              if ( v108 + (uint8_t)v107 >= 0 )
              {
                LOBYTE(v109) = v108 + (uint8_t)v107 > 255;
                v109 = (v108 + v107) | -v109;
              }
              v106[1] = v109;
              LOBYTE(v109) = 0;
              if ( v200 - v108 >= 0 )
              {
                LOBYTE(v108) = v200 - v108 > 255;
                v109 = -v108 | (uint8_t)(v200 - v233);
              }
              v106[2] = v109;
              v110 = &v106[v212];
              v201 = v110[2];
              v111 = v110[1];
              v112 = *(uint32_t *)(v211 + 4 * ((*v110 - v110[3] + 3 * (v201 - (uint8_t)v111) + 4) >> 3));
              v113 = 0;
              v234 = v112;
              if ( v112 + (uint8_t)v111 >= 0 )
              {
                LOBYTE(v113) = v112 + (uint8_t)v111 > 255;
                v113 = (v112 + v111) | -v113;
              }
              v110[1] = v113;
              LOBYTE(v113) = 0;
              if ( v201 - v112 >= 0 )
              {
                LOBYTE(v112) = v201 - v112 > 255;
                v113 = -v112 | (uint8_t)(v201 - v234);
              }
              v110[2] = v113;
              v114 = &v110[v212];
              v202 = v114[2];
              v115 = v114[1];
              v116 = *(uint32_t *)(v211 + 4 * ((*v114 - v114[3] + 3 * (v202 - (uint8_t)v115) + 4) >> 3));
              v117 = 0;
              v235 = v116;
              if ( v116 + (uint8_t)v115 >= 0 )
              {
                LOBYTE(v117) = v116 + (uint8_t)v115 > 255;
                v117 = (v116 + v115) | -v117;
              }
              v114[1] = v117;
              LOBYTE(v117) = 0;
              if ( v202 - v116 >= 0 )
              {
                LOBYTE(v116) = v202 - v116 > 255;
                v117 = -v116 | (uint8_t)(v202 - v235);
              }
              v114[2] = v117;
            }
            if ( v261 < v260 )
            {
              v47 = &v204[v281];
              v48 = &v204[v281 + v266];
              v251 = 0;
              v49 = &v204[v281 + v212];
              v50 = *(uint32_t *)(v211
                              + 4
                              * (((uint8_t)v204[v281]
                                - (uint8_t)v204[3 * v212 + v281]
                                + 3 * ((uint8_t)*v48 - (uint8_t)*v49)
                                + 4) >> 3));
              v182 = v50;
              v221 = v50;
              if ( v50 + (uint8_t)*v49 >= 0 )
                v251 = v50 + (uint8_t)*v49 > 255 ? -1 : v50 + *v49;
              *v49 = v251;
              LOBYTE(v51) = 0;
              v52 = (uint8_t)*v48;
              if ( (uint8_t)v52 - v182 >= 0 )
              {
                LOBYTE(v52) = (uint8_t)v52 - v182 > 255;
                v51 = -v52 | (uint8_t)(*v48 - v221);
              }
              *v48 = v51;
              v53 = &v47[v268];
              v252 = 0;
              v191 = v47[v282];
              v54 = *(uint32_t *)(v211 + 4 * ((v47[1] - v47[v267] + 3 * (v47[v268] - v191) + 4) >> 3));
              v183 = v54;
              v222 = v54;
              if ( v54 + v191 >= 0 )
                v252 = v54 + v191 > 255 ? -1 : v54 + v191;
              v47[v282] = v252;
              LOBYTE(v55) = 0;
              v56 = *v53;
              if ( (uint8_t)v56 - v183 >= 0 )
              {
                LOBYTE(v56) = (uint8_t)v56 - v183 > 255;
                v55 = -v56 | (uint8_t)(*v53 - v222);
              }
              *v53 = v55;
              v57 = &v47[v270];
              v253 = 0;
              v192 = v47[v283];
              v58 = *(uint32_t *)(v211 + 4 * ((v47[2] - v47[v269] + 3 * (v47[v270] - v192) + 4) >> 3));
              v184 = v58;
              v223 = v58;
              if ( v58 + v192 >= 0 )
                v253 = v58 + v192 > 255 ? -1 : v58 + v192;
              v47[v283] = v253;
              LOBYTE(v59) = 0;
              v60 = *v57;
              if ( (uint8_t)v60 - v184 >= 0 )
              {
                LOBYTE(v60) = (uint8_t)v60 - v184 > 255;
                v59 = -v60 | (uint8_t)(*v57 - v223);
              }
              *v57 = v59;
              v61 = &v47[v272];
              v254 = 0;
              v193 = v47[v284];
              v62 = *(uint32_t *)(v211 + 4 * ((v47[3] - v47[v271] + 3 * (v47[v272] - v193) + 4) >> 3));
              v185 = v62;
              v224 = v62;
              if ( v62 + v193 >= 0 )
                v254 = v62 + v193 > 255 ? -1 : v62 + v193;
              v47[v284] = v254;
              LOBYTE(v63) = 0;
              v64 = *v61;
              if ( (uint8_t)v64 - v185 >= 0 )
              {
                LOBYTE(v64) = (uint8_t)v64 - v185 > 255;
                v63 = -v64 | (uint8_t)(*v61 - v224);
              }
              *v61 = v63;
              v255 = 0;
              v65 = &v47[v274];
              v66 = &v47[v212 + 4];
              v67 = *(uint32_t *)(v211 + 4 * ((v47[4] - v47[v273] + 3 * (v47[v274] - *v66) + 4) >> 3));
              v186 = v67;
              v225 = v67;
              if ( v67 + *v66 >= 0 )
                v255 = v67 + *v66 > 255 ? -1 : v67 + *v66;
              *v66 = v255;
              LOBYTE(v68) = 0;
              v69 = *v65;
              if ( (uint8_t)v69 - v186 >= 0 )
              {
                LOBYTE(v69) = (uint8_t)v69 - v186 > 255;
                v68 = -v69 | (uint8_t)(*v65 - v225);
              }
              *v65 = v68;
              v256 = 0;
              v70 = &v47[v276];
              v71 = &v47[v212 + 5];
              v72 = *(uint32_t *)(v211 + 4 * ((v47[5] - v47[v275] + 3 * (v47[v276] - *v71) + 4) >> 3));
              v187 = v72;
              v226 = v72;
              if ( v72 + *v71 >= 0 )
                v256 = v72 + *v71 > 255 ? -1 : v72 + *v71;
              *v71 = v256;
              LOBYTE(v73) = 0;
              v74 = *v70;
              if ( (uint8_t)v74 - v187 >= 0 )
              {
                LOBYTE(v74) = (uint8_t)v74 - v187 > 255;
                v73 = -v74 | (uint8_t)(*v70 - v226);
              }
              *v70 = v73;
              v257 = 0;
              v75 = &v47[v278];
              v76 = &v47[v212 + 6];
              v77 = *(uint32_t *)(v211 + 4 * ((v47[6] - v47[v277] + 3 * (v47[v278] - *v76) + 4) >> 3));
              v188 = v77;
              v227 = v77;
              if ( v77 + *v76 >= 0 )
                v257 = v77 + *v76 > 255 ? -1 : v77 + *v76;
              *v76 = v257;
              LOBYTE(v78) = 0;
              v79 = *v75;
              if ( (uint8_t)v79 - v188 >= 0 )
              {
                LOBYTE(v79) = (uint8_t)v79 - v188 > 255;
                v78 = -v79 | (uint8_t)(*v75 - v227);
              }
              *v75 = v78;
              v258 = 0;
              v80 = &v47[v280];
              v81 = &v47[v212 + 7];
              v82 = *(uint32_t *)(v211 + 4 * ((v47[7] - v47[v279] + 3 * (v47[v280] - *v81) + 4) >> 3));
              v189 = v82;
              v194 = v82;
              if ( v82 + *v81 >= 0 )
                v258 = v82 + *v81 > 255 ? -1 : v82 + *v81;
              *v81 = v258;
              LOBYTE(v83) = 0;
              v84 = *v80;
              if ( (uint8_t)v84 - v189 >= 0 )
              {
                LOBYTE(v84) = (uint8_t)v84 - v189 > 255;
                v83 = -v84 | (uint8_t)(*v80 - v194);
              }
              *v80 = v83;
            }
            v190 = v203;
            if ( v203 < v213 && (v210[4] & 1) == 0 )
            {
              v118 = v204 + 6;
              v236 = v204[8];
              v119 = (uint8_t)v204[7];
              v259 = v204[7];
              v120 = 0;
              v121 = a2 + 508;
              v122 = *(uint32_t *)(v211
                               + 4
                               * (((uint8_t)v204[6] - (uint8_t)v204[9] + 3 * (v236 - v119) + 4) >> 3));
              v123 = v122 + v119;
              if ( v123 >= 0 )
              {
                v121 = v259;
                LOBYTE(v120) = v123 > 255;
                v120 = (v122 + v259) | -v120;
              }
              v204[7] = v120;
              LOBYTE(v120) = 0;
              v124 = v236 - v122;
              if ( v124 >= 0 )
              {
                LOBYTE(v121) = v124 > 255;
                v120 = -v121 | (uint8_t)(v236 - v122);
              }
              v204[8] = v120;
              v125 = &v118[v212];
              v237 = v118[v212 + 2];
              v126 = (uint8_t)v118[v212 + 1];
              v127 = 0;
              v128 = *(uint32_t *)(v211 + 4 * ((*v125 - v125[3] + 3 * (v237 - v126) + 4) >> 3));
              v129 = v128 + v126;
              if ( v129 >= 0 )
              {
                LOBYTE(v127) = v129 > 255;
                v127 = (v128 + (uint8_t)v118[v212 + 1]) | -v127;
              }
              v125[1] = v127;
              v130 = 0;
              v131 = v237 - v128;
              if ( v131 >= 0 )
              {
                LOBYTE(v130) = v131 > 255;
                v130 = -v130 | (v237 - v128);
              }
              v125[2] = v130;
              v132 = &v125[v212];
              v238 = v132[2];
              v133 = v132[1];
              v134 = *(uint32_t *)(v211 + 4 * ((*v132 - v132[3] + 3 * (v238 - v133) + 4) >> 3));
              v135 = 0;
              v136 = v134 + v133;
              if ( v136 >= 0 )
              {
                LOBYTE(v135) = v136 > 255;
                v135 = (v134 + v132[1]) | -v135;
              }
              v132[1] = v135;
              v137 = 0;
              v138 = v238 - v134;
              if ( v138 >= 0 )
              {
                LOBYTE(v137) = v138 > 255;
                v137 = -v137 | (v238 - v134);
              }
              v132[2] = v137;
              v139 = &v132[v212];
              v239 = v139[2];
              v140 = v139[1];
              v141 = *(uint32_t *)(v211 + 4 * ((*v139 - v139[3] + 3 * (v239 - v140) + 4) >> 3));
              v142 = 0;
              v143 = v141 + v140;
              if ( v143 >= 0 )
              {
                LOBYTE(v142) = v143 > 255;
                v142 = (v141 + v139[1]) | -v142;
              }
              v139[1] = v142;
              v144 = 0;
              v145 = v239 - v141;
              if ( v145 >= 0 )
              {
                LOBYTE(v144) = v145 > 255;
                v144 = -v144 | (v239 - v141);
              }
              v139[2] = v144;
              v146 = &v139[v212];
              v240 = v146[2];
              v147 = v146[1];
              v148 = *(uint32_t *)(v211 + 4 * ((*v146 - v146[3] + 3 * (v240 - v147) + 4) >> 3));
              v149 = 0;
              v150 = v148 + v147;
              if ( v150 >= 0 )
              {
                LOBYTE(v149) = v150 > 255;
                v149 = (v148 + v146[1]) | -v149;
              }
              v146[1] = v149;
              v151 = 0;
              v152 = v240 - v148;
              if ( v152 >= 0 )
              {
                LOBYTE(v151) = v152 > 255;
                v151 = -v151 | (v240 - v148);
              }
              v146[2] = v151;
              v153 = &v146[v212];
              v241 = v153[2];
              v154 = v153[1];
              v155 = *(uint32_t *)(v211 + 4 * ((*v153 - v153[3] + 3 * (v241 - v154) + 4) >> 3));
              v156 = 0;
              v157 = v155 + v154;
              if ( v157 >= 0 )
              {
                LOBYTE(v156) = v157 > 255;
                v156 = (v155 + v153[1]) | -v156;
              }
              v153[1] = v156;
              v158 = 0;
              v159 = v241 - v155;
              if ( v159 >= 0 )
              {
                LOBYTE(v158) = v159 > 255;
                v158 = -v158 | (v241 - v155);
              }
              v153[2] = v158;
              v160 = &v153[v212];
              v242 = v160[2];
              v161 = v160[1];
              v162 = *(uint32_t *)(v211 + 4 * ((*v160 - v160[3] + 3 * (v242 - v161) + 4) >> 3));
              v163 = 0;
              v164 = v162 + v161;
              if ( v164 >= 0 )
              {
                LOBYTE(v163) = v164 > 255;
                v163 = (v162 + v160[1]) | -v163;
              }
              v160[1] = v163;
              v165 = 0;
              v166 = v242 - v162;
              if ( v166 >= 0 )
              {
                LOBYTE(v165) = v166 > 255;
                v165 = -v165 | (v242 - v162);
              }
              v160[2] = v165;
              v167 = &v160[v212];
              v243 = v167[2];
              v168 = v167[1];
              v169 = *(uint32_t *)(v211 + 4 * ((*v167 - v167[3] + 3 * (v243 - v168) + 4) >> 3));
              v170 = 0;
              v171 = v169 + v168;
              if ( v171 >= 0 )
              {
                LOBYTE(v170) = v171 > 255;
                v170 = (v169 + v167[1]) | -v170;
              }
              v167[1] = v170;
              v172 = 0;
              v173 = v243 - v169;
              if ( v173 >= 0 )
              {
                LOBYTE(v172) = v173 > 255;
                v172 = -v172 | (v243 - v169);
              }
              v167[2] = v172;
            }
            if ( v262 > v203 + v285 - 1 && (v210[4 * v285] & 1) == 0 )
            {
              v9 = &v204[8 * v212 + v281];
              v244 = 0;
              v10 = &v9[v266];
              v205 = v9[v212];
              v11 = *(uint32_t *)(v211 + 4 * ((*v9 - v9[3 * v212] + 3 * (v9[2 * v212] - v205) + 4) >> 3));
              v174 = v11;
              v214 = v11;
              if ( v11 + v205 >= 0 )
                v244 = v11 + v205 > 255 ? -1 : v11 + v205;
              v9[v212] = v244;
              LOBYTE(v12) = 0;
              v13 = *v10;
              if ( (uint8_t)v13 - v174 >= 0 )
              {
                LOBYTE(v13) = (uint8_t)v13 - v174 > 255;
                v12 = -v13 | (uint8_t)(*v10 - v214);
              }
              *v10 = v12;
              v14 = &v9[v268];
              v245 = 0;
              v206 = v9[v282];
              v15 = *(uint32_t *)(v211 + 4 * ((v9[1] - v9[v267] + 3 * (v9[v268] - v206) + 4) >> 3));
              v175 = v15;
              v215 = v15;
              if ( v15 + v206 >= 0 )
                v245 = v15 + v206 > 255 ? -1 : v15 + v206;
              v9[v282] = v245;
              LOBYTE(v16) = 0;
              v17 = *v14;
              if ( (uint8_t)v17 - v175 >= 0 )
              {
                LOBYTE(v17) = (uint8_t)v17 - v175 > 255;
                v16 = -v17 | (uint8_t)(*v14 - v215);
              }
              *v14 = v16;
              v18 = &v9[v270];
              v246 = 0;
              v207 = v9[v283];
              v19 = *(uint32_t *)(v211 + 4 * ((v9[2] - v9[v269] + 3 * (v9[v270] - v207) + 4) >> 3));
              v176 = v19;
              v216 = v19;
              if ( v19 + v207 >= 0 )
                v246 = v19 + v207 > 255 ? -1 : v19 + v207;
              v9[v283] = v246;
              LOBYTE(v20) = 0;
              v21 = *v18;
              if ( (uint8_t)v21 - v176 >= 0 )
              {
                LOBYTE(v21) = (uint8_t)v21 - v176 > 255;
                v20 = -v21 | (uint8_t)(*v18 - v216);
              }
              *v18 = v20;
              v22 = &v9[v272];
              v247 = 0;
              v208 = v9[v284];
              v23 = *(uint32_t *)(v211 + 4 * ((v9[3] - v9[v271] + 3 * (v9[v272] - v208) + 4) >> 3));
              v177 = v23;
              v217 = v23;
              if ( v23 + v208 >= 0 )
                v247 = v23 + v208 > 255 ? -1 : v23 + v208;
              v9[v284] = v247;
              LOBYTE(v24) = 0;
              v25 = *v22;
              if ( (uint8_t)v25 - v177 >= 0 )
              {
                LOBYTE(v25) = (uint8_t)v25 - v177 > 255;
                v24 = -v25 | (uint8_t)(*v22 - v217);
              }
              *v22 = v24;
              v248 = 0;
              v26 = &v9[v274];
              v27 = &v9[v212 + 4];
              v28 = *(uint32_t *)(v211 + 4 * ((v9[4] - v9[v273] + 3 * (v9[v274] - *v27) + 4) >> 3));
              v178 = v28;
              v218 = v28;
              if ( v28 + *v27 >= 0 )
                v248 = v28 + *v27 > 255 ? -1 : v28 + *v27;
              *v27 = v248;
              LOBYTE(v29) = 0;
              v30 = *v26;
              if ( (uint8_t)v30 - v178 >= 0 )
              {
                LOBYTE(v30) = (uint8_t)v30 - v178 > 255;
                v29 = -v30 | (uint8_t)(*v26 - v218);
              }
              *v26 = v29;
              v249 = 0;
              v31 = &v9[v276];
              v32 = &v9[v212 + 5];
              v33 = *(uint32_t *)(v211 + 4 * ((v9[5] - v9[v275] + 3 * (v9[v276] - *v32) + 4) >> 3));
              v179 = v33;
              v219 = v33;
              if ( v33 + *v32 >= 0 )
                v249 = v33 + *v32 > 255 ? -1 : v33 + *v32;
              *v32 = v249;
              LOBYTE(v34) = 0;
              v35 = *v31;
              if ( (uint8_t)v35 - v179 >= 0 )
              {
                LOBYTE(v35) = (uint8_t)v35 - v179 > 255;
                v34 = -v35 | (uint8_t)(*v31 - v219);
              }
              *v31 = v34;
              v250 = 0;
              v36 = &v9[v278];
              v37 = &v9[v212 + 6];
              v38 = *(uint32_t *)(v211 + 4 * ((v9[6] - v9[v277] + 3 * (v9[v278] - *v37) + 4) >> 3));
              v180 = v38;
              v220 = v38;
              if ( v38 + *v37 >= 0 )
                v250 = v38 + *v37 > 255 ? -1 : v38 + *v37;
              *v37 = v250;
              LOBYTE(v39) = 0;
              v40 = *v36;
              if ( (uint8_t)v40 - v180 >= 0 )
              {
                LOBYTE(v40) = (uint8_t)v40 - v180 > 255;
                v39 = -v40 | (uint8_t)(*v36 - v220);
              }
              *v36 = v39;
              v41 = &v9[v280];
              v42 = &v9[v212 + 7];
              v181 = *v42;
              v43 = *(uint32_t *)(v211 + 4 * ((v9[7] - v9[v279] + 3 * (v9[v280] - v181) + 4) >> 3));
              v44 = 0;
              v209 = v43;
              if ( v43 + v181 >= 0 )
                v44 = v43 + v181 > 255 ? -1 : *v42 + v43;
              *v42 = v44;
              LOBYTE(v45) = 0;
              v46 = *v41 - v43;
              if ( v46 >= 0 )
              {
                LOBYTE(v43) = v46 > 255;
                v45 = -v43 | (uint8_t)(*v41 - v209);
              }
              *v41 = v45;
            }
          }
          else
          {
            v190 = v203;
          }
          v210 += 4;
          ++v203;
        }
        while ( v190 < v213 );
      }
      result = v260 + v285;
      v265 += 4 * v285;
      if ( v286 <= v213 )
        break;
      v260 += v285;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_state_vtable_init_c  (binary VA: 0x1397440)
// Original: oc_state_vtable_init_c
// ----------------------------------------------------------------------------
uint32_t * oc_state_vtable_init_c(uint32_t *a1)
{
  a1[16] = (uint32_t)(uintptr_t)(oc_frag_copy_c);
  a1[17] = (uint32_t)(uintptr_t)(oc_frag_recon_intra_c);
  a1[18] = (uint32_t)(uintptr_t)(oc_frag_recon_inter_c);
  a1[19] = (uint32_t)(uintptr_t)(oc_frag_recon_inter2_c);
  a1[20] = (uint32_t)(uintptr_t)(oc_idct8x8_c);
  a1[21] = (uint32_t)(uintptr_t)(oc_state_frag_recon_c);
  a1[22] = (uint32_t)(uintptr_t)(oc_state_frag_copy_list_c);
  a1[23] = (uint32_t)(uintptr_t)(oc_state_loop_filter_frag_rows_c);
  a1[24] = (uint32_t)(uintptr_t)(oc_restore_fpu_c);
  a1[25] = (uint32_t)(uintptr_t)(OC_FZIG_ZAG);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: oc_state_vtable_init  (binary VA: 0x13974b0)
// Original: oc_state_vtable_init
// ----------------------------------------------------------------------------
uint32_t * oc_state_vtable_init(uint32_t *a1)
{
  return oc_state_vtable_init_c(a1);
}

// ----------------------------------------------------------------------------
// Function: oc_state_init  (binary VA: 0x13974e0)
// Original: oc_state_init
// ----------------------------------------------------------------------------
int oc_state_init(void **s, int a2, unsigned int a3)
{
  unsigned int v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  signed int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  void *v12;
  char *v13;
  char *v14;
  char *v15;
  void *v16;
  void *v17;
  void *v18;
  int i;
  int v20;
  char *v21;
  int v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  char *v27;
  char *v28;
  char v29;
  char v30;
  int v32;
  int v33;
  int j;
  int k;
  int v36;
  char *v37;
  int v38;
  char *v39;
  int v40;
  char *v41;
  int v42;
  char *v43;
  char *v44;
  char *v45;
  void *v46;
  char *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  char *v52;
  char v53;
  char v54;
  char v55;
  char v56;
  char v57;
  char v58;
  char v59;
  char v60; // di
  void **v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  char *v65;
  uint32_t *v66;
  int v67;
  int v68;
  void **v69;
  char *v70;
  int v71;
  char *v72;
  int v73;
  __m128i v74;
  void **v75;
  int v76;
  int v77;
  unsigned int v78;
  bool v79;
  unsigned int v80;
  unsigned int v81;
  __m128i v82;
  unsigned int v83;
  __m128i *v84;
  __m128i v85;
  unsigned int v86;
  bool v87;
  void **v88;
  void *v89;
  int v90;
  int v91;
  void *v92;
  char *v93;
  int v94;
  unsigned int v95;
  char *v96;
  int v97;
  char *v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  void *v104;
  char *v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  unsigned int v115;
  char *v116;
  int v117;
  char *v118;
  size_t v119;
  char *v120;
  char *v121;
  unsigned int v122;
  int v123;
  size_t v124;
  int v125;
  unsigned int v126;
  char v127;
  unsigned int v128;
  signed int v129;
  int v130;
  int (*v131)(int, int, int, int);
  int v132;
  unsigned int v133;
  int v134;
  int v135;
  char *v136;
  char *v137;
  unsigned int v138;
  void **v139;
  char *v140;
  int v141;
  int v142;
  void *v143;
  char v144;
  int v145;
  int v146;
  uint8_t *v147;
  int v148;
  int v149;
  int v150;
  int v151;
  uint32_t *v152;
  char *v153;
  int v154;
  uint32_t *v155;
  int v156;
  void *v157;
  int v158;
  int v159;
  unsigned int v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  void *v164;
  int v165;
  char v166;
  int v167;
  int v168;
  unsigned int v169;
  int v170;
  int v171;
  void *v172;
  int v173;
  char v174;
  int v175;
  int64_t v176;
  int v177;
  unsigned int v178;

  if ( a2 == 0 )
    return -1;
  v3 = *(uint32_t *)(a2 + 4);
  v4 = -10;
  if ( (v3 & 0xF) == 0 )
  {
    v5 = *(uint32_t *)(a2 + 8);
    if ( (v5 & 0xF) == 0 && v3 != 0 && v3 <= 0xFFFFF && v5 != 0 && v5 <= 0xFFFFF )
    {
      v162 = *(uint32_t *)(a2 + 20);
      if ( v3 >= *(uint32_t *)(a2 + 12) + v162 )
      {
        v6 = *(uint32_t *)(a2 + 24);
        v7 = *(uint32_t *)(a2 + 16);
        if ( v5 >= v7 + v6
          && v162 <= 0xFF
          && v5 - v7 - v6 <= 0xFF
          && *(uint32_t *)(a2 + 44) <= 2u
          && *(uint32_t *)(a2 + 48) <= 3u )
        {
          memset(s, 0, 0xC920u);
          *s = *(void **)a2;
          s[1] = *(void **)(a2 + 4);
          s[2] = *(void **)(a2 + 8);
          s[3] = *(void **)(a2 + 12);
          s[4] = *(void **)(a2 + 16);
          s[5] = *(void **)(a2 + 20);
          s[6] = *(void **)(a2 + 24);
          s[7] = *(void **)(a2 + 28);
          s[8] = *(void **)(a2 + 32);
          s[9] = *(void **)(a2 + 36);
          s[10] = *(void **)(a2 + 40);
          s[11] = *(void **)(a2 + 44);
          s[12] = *(void **)(a2 + 48);
          s[13] = *(void **)(a2 + 52);
          s[14] = *(void **)(a2 + 56);
          s[15] = *(void **)(a2 + 60);
          s[6] = (void *)(*(uint32_t *)(a2 + 8) - *(uint32_t *)(a2 + 16) - *(uint32_t *)(a2 + 24));
          *((uint8_t *)s + 728) = -1;
          oc_state_vtable_init(s);
          v8 = (unsigned int)(uintptr_t)(s[1]) >> 3;
          v9 = (unsigned int)(uintptr_t)(s[2]) >> 3;
          v171 = v9 * v8;
          if ( v9 == (int)(v9 * v8) / v8 )
          {
            v156 = (v8 + (((uint8_t)(uintptr_t)(s)[12] & 1) == 0)) >> (((uint8_t)(uintptr_t)(s)[12] & 1) == 0);
            v151 = (int)(v9 + (((unsigned int)(uintptr_t)(s[12]) & 2) == 0)) >> (((unsigned int)(uintptr_t)(s[12]) & 2) == 0);
            v134 = v151 * v156;
            v129 = 2 * v151 * v156 + v171;
            if ( v171 <= v129 && v134 <= 2 * v151 * v156 )
            {
              v163 = (v8 + 3) >> 2;
              v145 = (int)(v9 + 3) >> 2;
              v10 = v163 * v145;
              if ( v145 == v163 * v145 / v163 )
              {
                v111 = (v156 + 3) >> 2;
                v141 = (v151 + 3) >> 2;
                v11 = v141 * v111;
                v119 = v10 + 2 * v141 * v111;
                if ( !__CFADD__(v10, 2 * v141 * v111) && v11 <= 2 * v11 )
                {
                  v124 = 4 * v10;
                  if ( v10 == (unsigned int)(4 * v10) >> 2 )
                  {
                    s[27] = (void *)v8;
                    s[28] = (void *)v9;
                    s[30] = (void *)v171;
                    s[31] = (void *)v163;
                    s[32] = (void *)v145;
                    s[43] = (void *)v156;
                    s[35] = (void *)v156;
                    s[44] = (void *)v151;
                    s[36] = (void *)v151;
                    s[34] = (void *)v10;
                    s[45] = (void *)(v171 + v134);
                    s[37] = (void *)v171;
                    s[46] = (void *)v134;
                    s[38] = (void *)v134;
                    s[41] = (void *)v10;
                    s[49] = (void *)(v11 + v10);
                    s[47] = (void *)v111;
                    s[39] = (void *)v111;
                    s[48] = (void *)v141;
                    s[40] = (void *)v141;
                    s[29] = nullptr;
                    s[33] = nullptr;
                    s[50] = (void *)v11;
                    s[54] = (void *)v129;
                    s[42] = (void *)v11;
                    v172 = calloc(v129, 4u);
                    s[51] = v172;
                    v12 = malloc(2 * v129);
                    s[53] = v12;
                    v157 = v12;
                    s[57] = (void *)v119;
                    v13 = (char *)malloc(v119 << 6);
                    s[55] = v13;
                    v14 = v13;
                    v15 = (char *)calloc(v119, 1u);
                    s[56] = v15;
                    s[62] = (void *)v124;
                    s[60] = (void *)(2 * v163);
                    s[61] = (void *)(2 * v145);
                    v164 = calloc(v124, 0x30u);
                    s[58] = v164;
                    v16 = calloc(v124, 1u);
                    s[59] = v16;
                    v92 = v16;
                    v17 = malloc(4 * v129);
                    s[63] = v17;
                    if ( v172 == nullptr
                      || v157 == nullptr
                      || v14 == nullptr
                      || v15 == nullptr
                      || v164 == nullptr
                      || v92 == nullptr
                      || v17 == nullptr )
                    {
                      v4 = -1;
                      goto LABEL_45;
                    }
                    v100 = 0;
LABEL_29:
                    v146 = (int)(uintptr_t)(s[8 * v100 + 27]);
                    v18 = s[8 * v100 + 33];
                    v105 = &v15[(uint32_t)(uintptr_t)(v18)];
                    v102 = (int)(uintptr_t)(s[8 * v100 + 28]);
                    v98 = (char *)s[8 * v100 + 29];
                    v96 = &v14[64 * (uint32_t)(uintptr_t)(v18)];
                    for ( i = 0; ; i = v125 )
                    {
                      v135 = v102;
                      if ( v102 <= 4 )
                      {
                        if ( v102 <= 0 )
                        {
                          if ( ++v100 != 3 )
                          {
                            v15 = (char *)s[56];
                            v14 = (char *)s[55];
                            goto LABEL_29;
                          }
                          v153 = (char *)(s + 27);
                          v147 = (uint8_t *)(s[59]);
                          v136 = (char *)s[58];
                          v32 = (int)(uintptr_t)(s[28]);
                          v131 = (int (*)(int, int, int, int))(uintptr_t)(off_2037D58[(uint32_t)(uintptr_t)(s[12])]);
                          if ( v32 > 0 )
                          {
                            v33 = (int)(uintptr_t)(s[27]);
                            v142 = 0;
                            for ( j = 0; j < v32; j += 4 )
                            {
                              if ( v33 > 0 )
                              {
                                v112 = j;
                                v167 = j | 2;
                                for ( k = 0; k < v33; k += 4 )
                                {
                                  v36 = (4 * v142) | (uint8_t)OC_MB_MAP;
                                  v158 = 4 * v142;
                                  v37 = &v136[48 * v36];
                                  *(uint32_t *)v37 = -1;
                                  *((uint32_t *)v37 + 1) = -1;
                                  *((uint32_t *)v37 + 2) = -1;
                                  *((uint32_t *)v37 + 3) = -1;
                                  *((uint32_t *)v37 + 4) = -1;
                                  *((uint32_t *)v37 + 5) = -1;
                                  *((uint32_t *)v37 + 6) = -1;
                                  *((uint32_t *)v37 + 7) = -1;
                                  *((uint32_t *)v37 + 8) = -1;
                                  *((uint32_t *)v37 + 9) = -1;
                                  *((uint32_t *)v37 + 10) = -1;
                                  *((uint32_t *)v37 + 11) = -1;
                                  if ( (int)(uintptr_t)(s[27]) <= k || v112 >= (int)(uintptr_t)(s[28]) )
                                  {
                                    v147[v36] = -1;
                                  }
                                  else
                                  {
                                    *(uint32_t *)v37 = k + v112 * (uint32_t)(uintptr_t)(s[27]);
                                    *((uint32_t *)v37 + 1) = k + (uint32_t)(uintptr_t)(s[27]) * v112 + 1;
                                    *((uint32_t *)v37 + 2) = k + (v112 + 1) * (uint32_t)(uintptr_t)(s[27]);
                                    *((uint32_t *)v37 + 3) = k + (v112 + 1) * (uint32_t)(uintptr_t)(s[27]) + 1;
                                    v131((int)(uintptr_t)(v37), (int)(uintptr_t)(v153), k, v112);
                                  }
                                  v175 = k | 2;
                                  v38 = v158 | BYTE1(OC_MB_MAP);
                                  v39 = &v136[48 * v38];
                                  *(uint32_t *)v39 = -1;
                                  *((uint32_t *)v39 + 1) = -1;
                                  *((uint32_t *)v39 + 2) = -1;
                                  *((uint32_t *)v39 + 3) = -1;
                                  *((uint32_t *)v39 + 4) = -1;
                                  *((uint32_t *)v39 + 5) = -1;
                                  *((uint32_t *)v39 + 6) = -1;
                                  *((uint32_t *)v39 + 7) = -1;
                                  *((uint32_t *)v39 + 8) = -1;
                                  *((uint32_t *)v39 + 9) = -1;
                                  *((uint32_t *)v39 + 10) = -1;
                                  *((uint32_t *)v39 + 11) = -1;
                                  if ( (k | 2) >= (int)(uintptr_t)(s[27]) || v112 >= (int)(uintptr_t)(s[28]) )
                                  {
                                    v147[v38] = -1;
                                  }
                                  else
                                  {
                                    *(uint32_t *)v39 = v175 + v112 * (uint32_t)(uintptr_t)(s[27]);
                                    *((uint32_t *)v39 + 1) = v175 + (uint32_t)(uintptr_t)(s[27]) * v112 + 1;
                                    *((uint32_t *)v39 + 2) = v175 + (v112 + 1) * (uint32_t)(uintptr_t)(s[27]);
                                    *((uint32_t *)v39 + 3) = v175 + (uint32_t)(uintptr_t)(s[27]) * (v112 + 1) + 1;
                                    v131((int)(uintptr_t)(v39), (int)(uintptr_t)(v153), v175, v112);
                                  }
                                  v40 = v158 | BYTE2(OC_MB_MAP);
                                  v41 = &v136[48 * v40];
                                  *(uint32_t *)v41 = -1;
                                  *((uint32_t *)v41 + 1) = -1;
                                  *((uint32_t *)v41 + 2) = -1;
                                  *((uint32_t *)v41 + 3) = -1;
                                  *((uint32_t *)v41 + 4) = -1;
                                  *((uint32_t *)v41 + 5) = -1;
                                  *((uint32_t *)v41 + 6) = -1;
                                  *((uint32_t *)v41 + 7) = -1;
                                  *((uint32_t *)v41 + 8) = -1;
                                  *((uint32_t *)v41 + 9) = -1;
                                  *((uint32_t *)v41 + 10) = -1;
                                  *((uint32_t *)v41 + 11) = -1;
                                  if ( k >= (int)(uintptr_t)(s[27]) || (int)(uintptr_t)(s[28]) <= v167 )
                                  {
                                    v147[v40] = -1;
                                  }
                                  else
                                  {
                                    *(uint32_t *)v41 = k + v167 * (uint32_t)(uintptr_t)(s[27]);
                                    *((uint32_t *)v41 + 1) = k + (uint32_t)(uintptr_t)(s[27]) * v167 + 1;
                                    *((uint32_t *)v41 + 2) = k + (v167 + 1) * (uint32_t)(uintptr_t)(s[27]);
                                    *((uint32_t *)v41 + 3) = k + (v167 + 1) * (uint32_t)(uintptr_t)(s[27]) + 1;
                                    v131((int)(uintptr_t)(v41), (int)(uintptr_t)(v153), k, v167);
                                  }
                                  v42 = v158 | HIBYTE(OC_MB_MAP);
                                  v43 = &v136[48 * v42];
                                  *(uint32_t *)v43 = -1;
                                  *((uint32_t *)v43 + 1) = -1;
                                  *((uint32_t *)v43 + 2) = -1;
                                  *((uint32_t *)v43 + 3) = -1;
                                  *((uint32_t *)v43 + 4) = -1;
                                  *((uint32_t *)v43 + 5) = -1;
                                  *((uint32_t *)v43 + 6) = -1;
                                  *((uint32_t *)v43 + 7) = -1;
                                  *((uint32_t *)v43 + 8) = -1;
                                  *((uint32_t *)v43 + 9) = -1;
                                  *((uint32_t *)v43 + 10) = -1;
                                  *((uint32_t *)v43 + 11) = -1;
                                  if ( v175 >= (int)(uintptr_t)(s[27]) || v167 >= (int)(uintptr_t)(s[28]) )
                                  {
                                    v147[v42] = -1;
                                  }
                                  else
                                  {
                                    *(uint32_t *)v43 = v175 + (uint32_t)(uintptr_t)(s[27]) * v167;
                                    *((uint32_t *)v43 + 1) = v175 + (uint32_t)(uintptr_t)(s[27]) * v167 + 1;
                                    *((uint32_t *)v43 + 2) = v175 + (v167 + 1) * (uint32_t)(uintptr_t)(s[27]);
                                    *((uint32_t *)v43 + 3) = v175 + (uint32_t)(uintptr_t)(s[27]) * (v167 + 1) + 1;
                                    v131((int)(uintptr_t)(v43), (int)(uintptr_t)(v153), v175, v167);
                                  }
                                  v33 = (int)(uintptr_t)(s[27]);
                                  ++v142;
                                }
                                j = v112;
                                v32 = (int)(uintptr_t)(s[28]);
                              }
                            }
                          }
                          v117 = 0;
                          v44 = (char *)s[51];
                          s[127] = nullptr;
                          v121 = v44;
                          v126 = (unsigned int)(uintptr_t)(v44);
                          while ( 2 )
                          {
                            v148 = (int)(uintptr_t)(s[5]);
                            v45 = (char *)s[3] + v148;
                            v154 = (int)(uintptr_t)(v45);
                            v159 = (int)(uintptr_t)(s[6]);
                            v168 = (int)(uintptr_t)(s[4]) + v159;
                            if ( v117 != 0 )
                            {
                              v46 = s[12];
                              if ( ((uint8_t)(uintptr_t)(v46) & 1) == 0 )
                              {
                                v148 >>= 1;
                                v154 = (int)(uintptr_t)(v45 + 1) >> 1;
                              }
                              if ( ((uint8_t)(uintptr_t)(v46) & 2) == 0 )
                              {
                                v159 >>= 1;
                                v168 = (v168 + 1) >> 1;
                              }
                            }
                            v121 += 4 * (uint32_t)(uintptr_t)(s[8 * v117 + 30]);
                            if ( (unsigned int)(uintptr_t)(v121) <= v126 )
                              goto LABEL_135;
                            v132 = 0;
                            v47 = (char *)v126;
LABEL_72:
                            v95 = (unsigned int)(uintptr_t)(uintptr_t)(&v47[4 * (uint32_t)(uintptr_t)(s[8 * v117 + 27])]);
                            if ( v95 <= (unsigned int)(uintptr_t)(v47) )
                              goto LABEL_134;
                            v137 = v47;
                            v109 = 7;
                            v48 = 0;
LABEL_76:
                            if ( v109 < v148
                              || v48 >= v154
                              || v132 >= v168
                              || v132 + 7 < v159
                              || v148 >= v154
                              || v159 >= v168 )
                            {
                              *v137 |= 2u;
                              goto LABEL_75;
                            }
                            if ( v148 > v48 || v154 <= v109 )
                            {
LABEL_84:
                              v49 = v132;
                            }
                            else
                            {
                              v49 = v132;
                              if ( v159 <= v132 )
                              {
                                if ( v168 <= v132 + 7 )
                                  goto LABEL_84;
                                v137[1] |= 0xF8u;
LABEL_75:
                                v137 += 4;
                                v48 += 8;
                                v109 += 8;
                                if ( v95 <= (unsigned int)(uintptr_t)(v137) )
                                {
                                  v126 += 4 * ((v95 + ~v126) >> 2) + 4;
                                  v47 = (char *)v126;
LABEL_134:
                                  v132 += 8;
                                  if ( v121 <= v47 )
                                  {
LABEL_135:
                                    if ( ++v117 == 3 )
                                    {
                                      if ( a3 - 3 > 1 )
                                      {
                                        v4 = -10;
                                      }
                                      else
                                      {
                                        v63 = (unsigned int)(uintptr_t)(s[1]);
                                        v177 = v63 + 32;
                                        v138 = (unsigned int)(uintptr_t)(s[2]);
                                        v169 = (v138 + 32) * (v63 + 32);
                                        if ( v138 + 32 == v169 / (v63 + 32)
                                          && (v144 = ((uint8_t)(uintptr_t)(s)[12] & 1) == 0,
                                              v127 = ((unsigned int)(uintptr_t)(s[12]) & 2) == 0,
                                              v149 = v177 >> v144,
                                              v160 = (v177 >> v144) * ((int)(v138 + 32) >> v127),
                                              v64 = 2 * v160 + v169,
                                              !__CFADD__(2 * v160, v169))
                                          && v160 <= 2 * v160
                                          && v64 == v64 * a3 / a3 )
                                        {
                                          v65 = (char *)malloc(v64 * a3);
                                          v66 = (uint32_t *)(malloc(4 * (uint32_t)(uintptr_t)(s[54])));
                                          v155 = v66;
                                          s[52] = v66;
                                          if ( v66 != nullptr && v65 != nullptr )
                                          {
                                            s[73] = (void *)v138;
                                            s[74] = (void *)v177;
                                            s[72] = (void *)v63;
                                            s[82] = (void *)v149;
                                            s[80] = (void *)(v63 >> v144);
                                            s[76] = (void *)(v63 >> v144);
                                            s[78] = (void *)v149;
                                            s[81] = (void *)(v138 >> v127);
                                            s[77] = (void *)(v138 >> v127);
                                            v67 = 1;
                                            do
                                            {
                                              v68 = 3 * v67++;
                                              v69 = &s[4 * v68 + 72];
                                              *v69 = s[72];
                                              v69[1] = s[73];
                                              v69[2] = s[74];
                                              v69[3] = s[75];
                                              v69[4] = s[76];
                                              v69[5] = s[77];
                                              v69[6] = s[78];
                                              v69[7] = s[79];
                                              v69[8] = s[80];
                                              v69[9] = s[81];
                                              v69[10] = s[82];
                                              v69[11] = s[83];
                                            }
                                            while ( v67 != a3 );
                                            v139 = s;
                                            v122 = v169 + 2 * v160;
                                            v70 = &v65[v169 + (16 >> v144) + v149 * (16 >> v127)];
                                            v71 = 0;
                                            do
                                            {
                                              v72 = &v65[16 * v63 + 528];
                                              s[v71 + 120] = v65;
                                              v65 += v122;
                                              v139[75] = v72;
                                              v139[79] = v70;
                                              v139[83] = &v70[v160];
                                              v94 = v71;
                                              v93 = v70;
                                              oc_ycbcr_buffer_flip(&s[12 * v71 + 72], &s[12 * v71 + 72]);
                                              v139 += 12;
                                              v71 = v94 + 1;
                                              v70 = &v93[v122];
                                            }
                                            while ( v94 + 1 != a3 );
                                            v140 = (char *)(s + 72);
                                            v73 = 0;
                                            v170 = 0;
                                            s[124] = (void *)-v177;
                                            s[126] = (void *)-v149;
                                            s[125] = (void *)-v149;
                                            v133 = (unsigned int)(uintptr_t)(s[120]);
                                            v74 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v133), 0);
                                            do
                                            {
                                              v75 = &s[8 * v170 + 24];
                                              v161 = *((uint32_t *)v140 + 3);
                                              v104 = v75[3];
                                              v150 = (int)(uintptr_t)(v75[5]) + (uint32_t)(uintptr_t)(v75[6]);
                                              if ( v73 < v150 )
                                              {
                                                v107 = 8 * *((uint32_t *)v140 + 2);
                                                do
                                                {
                                                  if ( (int)(uintptr_t)(v104) + v73 > v73 )
                                                  {
                                                    v76 = v73;
                                                    v110 = (int)(uintptr_t)(v104) + v73 + ~v73;
                                                    v77 = v110 + 1;
                                                    v118 = (char *)&v155[v73];
                                                    v78 = -((uint8_t)((uint8_t)(uintptr_t)(v118) & 0xF) >> 2) & 3;
                                                    if ( v78 > v110 + 1 )
                                                      v78 = v110 + 1;
                                                    v79 = v78 == 0;
                                                    v178 = v78;
                                                    v80 = v161;
                                                    if ( v79 )
                                                      goto LABEL_190;
                                                    do
                                                    {
                                                      v81 = v80 - v133;
                                                      v80 += 8;
                                                      v155[v76++] = v81;
                                                    }
                                                    while ( v178 > v76 - v73 );
                                                    v77 = v110 + 1;
                                                    if ( v178 != v110 + 1 )
                                                    {
LABEL_190:
                                                      v115 = v77 - v178;
                                                      v128 = (v77 - v178) >> 2;
                                                      v123 = 4 * v128;
                                                      if ( 4 * v128 == 0 )
                                                        goto LABEL_191;
g4_m128_lane<int64_t>(v82, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(
                                                                           _mm_cvtsi32_si128(v80),
                                                                           _mm_cvtsi32_si128(v80 + 8)), 0);
g4_m128_lane<int64_t>(v82, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(
                                                                           _mm_cvtsi32_si128(v80 + 16),
                                                                           _mm_cvtsi32_si128(v80 + 24)), 0);
                                                      v83 = 0;
                                                      v84 = (__m128i *)&v118[4 * v178];
                                                      while ( 1 )
                                                      {
                                                        *v84 = _mm_sub_epi32(v82, v74);
                                                        ++v83;
                                                        ++v84;
                                                        v85 = _mm_add_epi32(v82, G4_BITCAST<__m128i>(xmmword_1C7CA30));
                                                        if ( v83 >= v128 )
                                                          break;
                                                        v82 = v85;
                                                      }
                                                      v76 += v123;
                                                      v80 += 32 * v128;
                                                      if ( v115 != v123 )
                                                      {
LABEL_191:
                                                        do
                                                        {
                                                          v86 = v80 - v133;
                                                          v80 += 8;
                                                          v155[v76++] = v86;
                                                        }
                                                        while ( (int)(uintptr_t)(v104) + v73 > v76 );
                                                      }
                                                    }
                                                    v73 += v110 + 1;
                                                  }
                                                  v161 += v107;
                                                }
                                                while ( v73 < v150 );
                                              }
                                              ++v170;
                                              v140 += 16;
                                            }
                                            while ( v170 != 3 );
                                            s[70] = (void *)-1;
                                            s[69] = (void *)-1;
                                            s[68] = (void *)-1;
                                            s[71] = (void *)(4 * (a3 == 4) - 1);
                                            if ( *(uint32_t *)(a2 + 60) > 0x1Fu )
                                              s[15] = &dword_1C + 3;
                                            s[176] = nullptr;
                                            s[177] = nullptr;
                                            s[178] = (void *)-1;
                                            s[179] = (void *)-1;
                                            v87 = true;
                                            if ( *(uint8_t *)a2 <= 3u )
                                            {
                                              v87 = false;
                                              if ( *(uint8_t *)a2 == 3 )
                                              {
                                                v87 = true;
                                                if ( *(uint8_t *)(a2 + 1) <= 2u )
                                                {
                                                  v87 = false;
                                                  if ( *(uint8_t *)(a2 + 1) == 2 )
                                                    v87 = *(uint8_t *)(a2 + 2) != 0;
                                                }
                                              }
                                            }
                                            v4 = 0;
                                            *((uint8_t *)s + 729) = v87;
                                            return v4;
                                          }
                                          free(v66);
                                          v89 = v65;
                                          v4 = -1;
                                          free(v89);
                                        }
                                        else
                                        {
                                          v4 = -23;
                                        }
                                      }
                                      v17 = s[63];
LABEL_45:
                                      free(v17);
                                      free(s[59]);
                                      free(s[58]);
                                      free(s[56]);
                                      free(s[55]);
                                      free(s[53]);
                                      free(s[51]);
                                      return v4;
                                    }
                                    continue;
                                  }
                                  goto LABEL_72;
                                }
                                goto LABEL_76;
                              }
                            }
                            break;
                          }
                          v50 = v48 + 1;
                          v113 = v48 + 2;
                          v97 = v48;
                          v106 = v48 + 3;
                          v176 = 0;
                          v103 = v48 + 4;
                          v91 = 0;
                          v90 = v49;
                          v101 = v48 + 5;
                          v51 = v48 + 6;
                          v52 = nullptr;
                          v99 = v51;
                          do
                          {
                            if ( v148 <= v97 && v159 <= v90 && v168 > v90 )
                            {
                              ++v52;
                              LODWORD(v176) = ((((8 * (uint8_t)v91) & 0x20) == 0) << (8 * v91)) | v176;
                              HIDWORD(v176) |= (((8 * (uint8_t)v91) & 0x20) != 0) << (8 * v91);
                            }
                            if ( v148 <= v50 && v154 > v50 && v159 <= v90 && v168 > v90 )
                            {
                              v53 = (8 * v91) | 1;
                              ++v52;
                              LODWORD(v176) = ((((8 * (uint8_t)v91) & 0x20) == 0) << v53) | v176;
                              HIDWORD(v176) |= (((8 * (uint8_t)v91) & 0x20) != 0) << v53;
                            }
                            if ( v148 <= v113 && v154 > v113 && v159 <= v90 && v168 > v90 )
                            {
                              v54 = (8 * v91) | 2;
                              ++v52;
                              LODWORD(v176) = ((((8 * (uint8_t)v91) & 0x20) == 0) << v54) | v176;
                              HIDWORD(v176) |= (((8 * (uint8_t)v91) & 0x20) != 0) << v54;
                            }
                            if ( v148 <= v106 && v154 > v106 && v159 <= v90 && v168 > v90 )
                            {
                              v55 = (8 * v91) | 3;
                              ++v52;
                              LODWORD(v176) = ((((8 * (uint8_t)v91) & 0x20) == 0) << v55) | v176;
                              HIDWORD(v176) |= (((8 * (uint8_t)v91) & 0x20) != 0) << v55;
                            }
                            if ( v148 <= v103 && v154 > v103 && v159 <= v90 && v168 > v90 )
                            {
                              v56 = (8 * v91) | 4;
                              ++v52;
                              LODWORD(v176) = ((((8 * (uint8_t)v91) & 0x20) == 0) << v56) | v176;
                              HIDWORD(v176) |= (((8 * (uint8_t)v91) & 0x20) != 0) << v56;
                            }
                            if ( v148 <= v101 && v154 > v101 && v159 <= v90 && v168 > v90 )
                            {
                              v57 = (8 * v91) | 5;
                              ++v52;
                              LODWORD(v176) = ((((8 * (uint8_t)v91) & 0x20) == 0) << v57) | v176;
                              HIDWORD(v176) |= (((8 * (uint8_t)v91) & 0x20) != 0) << v57;
                            }
                            if ( v148 <= v99 && v154 > v99 && v159 <= v90 && v168 > v90 )
                            {
                              v58 = (8 * v91) | 6;
                              ++v52;
                              LODWORD(v176) = ((((8 * (uint8_t)v91) & 0x20) == 0) << v58) | v176;
                              HIDWORD(v176) |= (((8 * (uint8_t)v91) & 0x20) != 0) << v58;
                            }
                            if ( v154 > v109 && v159 <= v90 && v168 > v90 )
                            {
                              v59 = (8 * v91) | 7;
                              ++v52;
                              LODWORD(v176) = ((((8 * (uint8_t)v91) & 0x20) == 0) << v59) | v176;
                              HIDWORD(v176) |= (((8 * (uint8_t)v91) & 0x20) != 0) << v59;
                            }
                            ++v91;
                            ++v90;
                          }
                          while ( v91 != 8 );
                          v143 = v52;
                          v48 = v97;
                          v114 = (int)(uintptr_t)(s[127]);
                          if ( v114 > 0 )
                          {
                            v60 = 0;
                            if ( *((uint64_t *)s + 64) != v176 )
                            {
                              v61 = s;
                              v62 = 0;
                              while ( ++v62 != v114 )
                              {
                                v61 += 3;
                                if ( *((uint64_t *)v61 + 64) == v176 )
                                {
                                  v60 = (char)(8 * v62) >> 3;
                                  goto LABEL_131;
                                }
                              }
                              v60 = (char)(8 * v62) >> 3;
LABEL_186:
                              s[127] = (void *)(v114 + 1);
                              v88 = &s[3 * v62];
                              *((uint64_t *)v88 + 64) = v176;
                              v88[130] = v143;
                            }
LABEL_131:
                            v137[1] = (8 * v60) | v137[1] & 7;
                            goto LABEL_75;
                          }
                          v60 = 0;
                          v62 = 0;
                          goto LABEL_186;
                        }
                      }
                      else
                      {
                        v135 = 4;
                      }
                      v125 = i;
                      v130 = v146;
                      v116 = &v96[64 * i];
                      v108 = -64 * i - (uint32_t)(uintptr_t)(v96);
                      v20 = v146;
                      v120 = v98;
                      v152 = (uint32_t *)(v116 + 16);
                      v173 = v146;
                      if ( v146 > 4 )
                      {
LABEL_33:
                        v173 = 4;
                        goto LABEL_34;
                      }
                      while ( v20 > 0 )
                      {
LABEL_34:
                        *(v152 - 4) = -1;
                        *(v152 - 3) = -1;
                        *(v152 - 2) = -1;
                        *(v152 - 1) = -1;
                        *v152 = -1;
                        v152[1] = -1;
                        v152[2] = -1;
                        v152[3] = -1;
                        v152[4] = -1;
                        v152[5] = -1;
                        v152[6] = -1;
                        v152[7] = -1;
                        v152[8] = -1;
                        v152[9] = -1;
                        v152[10] = -1;
                        v152[11] = -1;
                        v21 = v120;
                        v165 = 0;
                        do
                        {
                          v22 = 0;
                          v23 = (int *)((char *)&unk_1D0EB80 + 32 * v165);
                          do
                          {
                            v24 = v23[1];
                            v25 = *v23;
                            v23 += 2;
                            v26 = v24 + 4 * v25;
                            v27 = &v21[v22++];
                            v152[v26 - 4] = (uint32_t)(uintptr_t)(v27);
                          }
                          while ( v22 < v173 );
                          ++v165;
                          v21 += v146;
                        }
                        while ( v165 < v135 );
                        v28 = &v105[v125];
                        v29 = (*(v152 - 4) >= 0) | ((uint8_t)v105[v125] >> 2) & 0xF;
                        v166 = (4 * v29) | v105[v125] & 0xC3;
                        *v28 = v166;
                        v174 = (2 * (*(uint32_t *)&v116[(uint32_t)(uintptr_t)(v152) + v108] >= 0)) | v29;
                        *v28 = (4 * v174) | v166 & 0xC3;
                        v30 = (4 * (*(uint32_t *)((char *)v152 + v108 + (uint32_t)(uintptr_t)(v116) + 16) >= 0)) | v174;
                        *v28 = (4 * v30) | v166 & 0xC3;
                        *v28 = (4 * (v30 | (8 * (*(uint32_t *)((char *)v152 + v108 + (uint32_t)(uintptr_t)(v116) + 40) >= 0))))
                             | v166 & 0xC3;
                        v130 -= 4;
                        v20 = v130;
                        ++v125;
                        v152 += 16;
                        v120 += 4;
                        v173 = v130;
                        if ( v130 > 4 )
                          goto LABEL_33;
                      }
                      v102 -= 4;
                      v98 += 4 * v146;
                    }
                  }
                }
              }
            }
          }
          v17 = s[63];
          v4 = -23;
          goto LABEL_45;
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: oc_state_clear  (binary VA: 0x1398e40)
// Original: oc_state_clear
// ----------------------------------------------------------------------------
void oc_state_clear(void **a1)
{
  free(a1[52]);
  free(a1[120]);
  free(a1[63]);
  free(a1[59]);
  free(a1[58]);
  free(a1[56]);
  free(a1[55]);
  free(a1[53]);
  free(a1[51]);
}

// ----------------------------------------------------------------------------
// Function: oc_state_borders_fill_rows  (binary VA: 0x1398ee0)
// Original: oc_state_borders_fill_rows
// ----------------------------------------------------------------------------
char * oc_state_borders_fill_rows(int a1, int a2, int a3, int a4, int a5)
{
  size_t n;
  int v6;
  char *result;
  char *v8;
  char *v9;
  char *v10;
  void *s;
  void *sa;
  int c;
  int ca;
  int v15;
  char *v16;
  int v17;

  n = 16;
  v15 = -16;
  if ( a3 != 0 )
  {
    v6 = *(uint32_t *)(a1 + 48) & 1;
    v15 = v6 == 0 ? -8 : -16;
    n = v6 == 0 ? 8 : 16;
  }
  v17 = *(uint32_t *)(a1 + 16 * (3 * a2 + a3) + 296);
  result = *(char **)(a1 + 16 * (3 * a2 + a3) + 300);
  v8 = &result[a4 * v17];
  v16 = &result[a5 * v17];
  if ( v8 != v16 )
  {
    v9 = &v8[v15];
    v10 = &v8[*(uint32_t *)(a1 + 16 * (3 * a2 + a3) + 288)];
    do
    {
      s = v9;
      c = (uint8_t)v9[-v15];
      v9 += v17;
      memset(s, c, n);
      sa = v10;
      ca = (uint8_t)*(v10 - 1);
      v10 += v17;
      memset(sa, ca, n);
      result = &v9[-v15];
    }
    while ( v16 != &v9[-v15] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_state_borders_fill_caps  (binary VA: 0x1398fe0)
// Original: oc_state_borders_fill_caps
// ----------------------------------------------------------------------------
char * oc_state_borders_fill_caps(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char *result;
  char *src;
  int i;
  char *dest;
  size_t v12;
  size_t n;
  int v14;
  char *v15;

  if ( a3 != 0 )
  {
    v12 = 8;
    v3 = *(uint32_t *)(a1 + 48) & 1;
    v4 = v3 == 0 ? -8 : -16;
    v5 = v3 == 0 ? 8 : 16;
    v6 = v3 == 0 ? 16 : 32;
    if ( (*(uint8_t *)(a1 + 48) & 2) == 0 )
      goto LABEL_3;
  }
  else
  {
    v4 = -16;
    v5 = 16;
    v6 = 32;
  }
  v12 = 16;
LABEL_3:
  v14 = *(uint32_t *)(a1 + 16 * (3 * a2 + a3) + 296);
  v7 = *(uint32_t *)(a1 + 16 * (3 * a2 + a3) + 300);
  result = (char *)(v7 + v4);
  v15 = &result[-(v14 * v12)];
  if ( result != v15 )
  {
    n = *(uint32_t *)(a1 + 16 * (3 * a2 + a3) + 288) + v6;
    src = (char *)(v7 + v14 * (*(uint32_t *)(a1 + 16 * (3 * a2 + a3) + 292) - 1) - v5);
    for ( i = -v14; ; i = -v14 )
    {
      dest = &result[i];
      memcpy(dest, result, n);
      result = (char *)memcpy(&src[v14], src, n);
      if ( v15 == dest )
        break;
      result = dest;
      src += v14;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_state_borders_fill  (binary VA: 0x1399110)
// Original: oc_state_borders_fill
// ----------------------------------------------------------------------------
char * oc_state_borders_fill(int a1, int a2)
{
  int *v2;

  v2 = (int *)(a1 + 48 * a2);
  oc_state_borders_fill_rows(a1, a2, 0, 0, v2[73]);
  oc_state_borders_fill_caps(a1, a2, 0);
  oc_state_borders_fill_rows(a1, a2, 1, 0, v2[77]);
  oc_state_borders_fill_caps(a1, a2, 1);
  oc_state_borders_fill_rows(a1, a2, 2, 0, v2[81]);
  return oc_state_borders_fill_caps(a1, a2, 2);
}

// ----------------------------------------------------------------------------
// Function: oc_state_get_mv_offsets  (binary VA: 0x1399210)
// Original: oc_state_get_mv_offsets
// ----------------------------------------------------------------------------
int oc_state_get_mv_offsets(int a1, int *a2, int a3, int a4, int a5)
{
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
  int result;

  v5 = *(uint32_t *)(a1 + 4 * a3 + 496);
  if ( a3 == 0 )
  {
    v9 = byte_1D0EC80[a5 + 31];
    v8 = byte_1D0EC1F[a5];
LABEL_5:
    v10 = 0;
    goto LABEL_6;
  }
  v6 = *(uint32_t *)(a1 + 48);
  v7 = a5 + 31;
  if ( (v6 & 2) != 0 )
  {
    v8 = byte_1D0EC1F[a5];
    v9 = byte_1D0EC80[v7];
  }
  else
  {
    v8 = byte_1D0EC5F[a5];
    v9 = byte_1D0ECC0[v7];
  }
  v10 = 1;
  if ( (v6 & 1) != 0 )
    goto LABEL_5;
LABEL_6:
  v11 = a4 + (v10 << 6) + 31;
  v12 = byte_1D0EC80[v11];
  v13 = v5 * v8 + byte_1D0EC00[v11];
  if ( (v12 | v9) != 0 )
  {
    *a2 = v13;
    v14 = v13 + v5 * v9;
    result = 2;
    a2[1] = v14 + v12;
  }
  else
  {
    *a2 = v13;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_state_frag_recon_c  (binary VA: 0x1399310)
// Original: oc_state_frag_recon_c
// ----------------------------------------------------------------------------
int oc_state_frag_recon_c(uint32_t *a1, int a2, int a3, int a4, int a5, uint16_t a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v11;
  unsigned int i;
  int v13;
  __m128i v14;
  __m128i v15;
  unsigned int v16;
  __m128i *v17;
  uint16_t *v18;
  typedef __m128i *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v24)) > _g4_s5 ? (28u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v25)) > _g4_s6 ? (40u + sizeof(_g4_t_v25)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);

  if ( a5 <= 1 )
  {
    v11 = -((uint8_t)(a4 & 0xF) >> 1) & 7;
    v22 = (a6 * *(int16_t *)a4 + 15) >> 5;
    if ( v11 != 0 )
    {
      for ( i = 0; i < v11; ++i )
        *(uint16_t *)(a4 + 2 * i) = v22;
      v13 = 64 - i;
    }
    else
    {
      v13 = 64;
      i = 0;
    }
    v24 = 64 - v11;
    v21 = (64 - v11) >> 3;
    v20 = 8 * v21;
    if ( 8 * v21 == 0 )
      goto LABEL_14;
    v14 = _mm_cvtsi32_si128(v22);
    v15 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v14, v14), 0);
    v19 = (__m128i *)(a4 + 2 * v11);
    v16 = 0;
    v17 = v19;
    do
    {
      ++v16;
      *v17++ = v15;
    }
    while ( v16 < v21 );
    i += v20;
    v13 -= v20;
    if ( v24 != v20 )
    {
LABEL_14:
      v18 = (uint16_t *)(a4 + 2 * i);
      do
      {
        --v13;
        *v18++ = v22;
      }
      while ( v13 != 0 );
    }
  }
  else
  {
    *(uint16_t *)a4 *= a6;
    oc_idct8x8(a1, a4, a5);
  }
  v6 = *(uint8_t *)(a1[51] + 4 * a2 + 1) & 7;
  v23 = a1[a3 + 124];
  v7 = *(uint32_t *)(a1[52] + 4 * a2);
  v8 = v7 + a1[a1[70] + 120];
  if ( v6 == 1 )
    return oc_frag_recon_intra((int)(uintptr_t)(a1), v8, v23, a4);
  v9 = v7 + a1[a1[((268505377 >> (4 * v6)) & 0xF) + 68] + 120];
  if ( oc_state_get_mv_offsets((int)(uintptr_t)(a1), v25, a3, *(char *)(a1[53] + 2 * a2), *(char *)(a1[53] + 2 * a2 + 1)) <= 1 )
    return oc_frag_recon_inter((int)(uintptr_t)(a1), v8, v25[0] + v9, v23, a4);
  else
    return oc_frag_recon_inter2((int)(uintptr_t)(a1), v8, v25[0] + v9, v9 + v25[1], v23, a4);
}

// ----------------------------------------------------------------------------
// Function: oc_state_frag_recon  (binary VA: 0x1399560)
// Original: oc_state_frag_recon
// ----------------------------------------------------------------------------
int oc_state_frag_recon(int a1, int a2, int a3, int a4, int a5, uint16_t a6)
{
  return (*(int (**)(int, int, int, int, int, uint32_t))(a1 + 84))(a1, a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: oc_state_frag_copy_list  (binary VA: 0x13995a0)
// Original: oc_state_frag_copy_list
// ----------------------------------------------------------------------------
int oc_state_frag_copy_list(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (*(int (**)(int, int, int, int, int, int))(a1 + 88))(a1, a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: oc_state_loop_filter_init  (binary VA: 0x13995e0)
// Original: oc_state_loop_filter_init
// ----------------------------------------------------------------------------
int oc_state_loop_filter_init(int a1, uint8_t *a2)
{
  uint8_t v2;
  int result;
  uint16_t *v4;
  unsigned int v5;
  uint16_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint8_t v11;

  v2 = *(uint8_t *)(a1 + *(uint8_t *)(a1 + 731) + 51424);
  result = 1;
  v11 = v2;
  if ( v2 == 0 )
    return result;
  v4 = (uint16_t *)(a2);
  v5 = 1024;
  if ( ((uint8_t)(uintptr_t)(a2) & 1) != 0 )
  {
    *a2 = 0;
    v4 = (uint16_t *)(a2 + 1);
    LOWORD(v5) = 1023;
  }
  if ( ((uint8_t)(uintptr_t)(v4) & 2) != 0 )
  {
    *v4 = 0;
    v5 -= 2;
    ++v4;
  }
  memset(v4, 0, 4 * (v5 >> 2));
  v6 = &v4[2 * (v5 >> 2)];
  if ( (v5 & 2) == 0 )
  {
    if ( (v5 & 1) == 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
  *v6++ = 0;
  if ( (v5 & 1) != 0 )
LABEL_15:
    *(uint8_t *)v6 = 0;
LABEL_8:
  v7 = 127 - v2;
  v8 = v2 + 127;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v7 >= 0 )
      *(uint32_t *)&a2[4 * v7] = v10 - v11;
    *(uint32_t *)&a2[4 * v9 + 508] = v9;
    *(uint32_t *)&a2[4 * v10 + 508] = v10;
    if ( v8 <= 255 )
      *(uint32_t *)&a2[4 * v8] = v11 - v10;
    ++v10;
    --v7;
    --v9;
    ++v8;
  }
  while ( v9 != -v11 );
  return 0;
}

// ----------------------------------------------------------------------------
// Function: oc_state_loop_filter_frag_rows  (binary VA: 0x13996f0)
// Original: oc_state_loop_filter_frag_rows
// ----------------------------------------------------------------------------
int oc_state_loop_filter_frag_rows(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (*(int (**)(int, int, int, int, int, int))(a1 + 92))(a1, a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: th_granule_frame  (binary VA: 0x1399730)
// Original: th_granule_frame
// ----------------------------------------------------------------------------
int th_granule_frame(int a1, int64_t a2)
{
  bool v4;

  if ( a2 < 0 )
    return -1;
  v4 = true;
  if ( *(uint8_t *)a1 <= 3u )
  {
    v4 = false;
    if ( *(uint8_t *)a1 == 3 )
    {
      v4 = true;
      if ( *(uint8_t *)(a1 + 1) <= 2u )
      {
        v4 = false;
        if ( *(uint8_t *)(a1 + 1) == 2 )
          v4 = *(uint8_t *)(a1 + 2) != 0;
      }
    }
  }
  return (a2 >> *(uint32_t *)(a1 + 60)) + a2 - (a2 >> *(uint32_t *)(a1 + 60) << *(uint32_t *)(a1 + 60)) - v4;
}

// ----------------------------------------------------------------------------
// Function: th_granule_time  (binary VA: 0x1399820)
// Original: th_granule_time
// ----------------------------------------------------------------------------
long double th_granule_time(int a1, int64_t a2)
{
  long double result; // fst7
  int64_t v3; // rax

  result = -1.0;
  if ( a2 >= 0 )
  {
    LODWORD(v3) = th_granule_frame(a1, a2);
    return (double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(
                     _mm_cvtsi32_si128((int)v3 + 1),
                     _mm_cvtsi32_si128((uint64_t)(v3 + 1) >> 32)), 0)
         * ((double)*(unsigned int *)(a1 + 32)
          / (double)*(unsigned int *)(a1 + 28));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_pack_readinit  (binary VA: 0x13998d0)
// Original: oc_pack_readinit
// ----------------------------------------------------------------------------
uint32_t * oc_pack_readinit(uint32_t *a1, int a2, int a3)
{
  a1[1] = a2;
  *a1 = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[2] = a3 + a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: oc_pack_look1  (binary VA: 0x1399900)
// Original: oc_pack_look1
// ----------------------------------------------------------------------------
unsigned int oc_pack_look1(unsigned int *a1)
{
  int v1;
  unsigned int v2;
  uint8_t *v4;
  int v5;
  int v6;
  unsigned int v7;

  v1 = a1[3];
  v2 = *a1;
  if ( v1 <= 0 )
  {
    v4 = (uint8_t *)a1[1];
    v7 = a1[2];
    if ( (unsigned int)(uintptr_t)(v4) >= v7 )
      goto LABEL_8;
    v5 = 24 - v1;
    do
    {
      v1 += 8;
      v6 = *v4++ << v5;
      v2 |= v6;
      v5 -= 8;
    }
    while ( v7 > (unsigned int)(uintptr_t)(v4) && v1 <= 24 );
    a1[1] = (unsigned int)(uintptr_t)(v4);
    if ( v1 <= 0 )
    {
LABEL_8:
      if ( v7 <= (unsigned int)(uintptr_t)(v4) )
      {
        a1[4] = 1;
        v1 = 0x40000000;
      }
      else
      {
        v2 |= (int)*v4 >> (v1 & 7);
      }
    }
    a1[3] = v1;
    *a1 = v2;
  }
  return v2 >> 31;
}

// ----------------------------------------------------------------------------
// Function: oc_pack_adv1  (binary VA: 0x13999a0)
// Original: oc_pack_adv1
// ----------------------------------------------------------------------------
uint32_t * oc_pack_adv1(uint32_t *a1)
{
  *a1 *= 2;
  --a1[3];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: oc_pack_read  (binary VA: 0x13999b0)
// Original: oc_pack_read
// ----------------------------------------------------------------------------
unsigned int oc_pack_read(unsigned int *a1, int a2)
{
  unsigned int result;
  unsigned int v3;
  int v4;
  uint8_t *v5;
  int v6;
  int v7;
  unsigned int v8;

  result = 0;
  v3 = *a1;
  v4 = a1[3];
  if ( a2 != 0 )
  {
    if ( v4 < a2 )
    {
      v5 = (uint8_t *)a1[1];
      v8 = a1[2];
      if ( (unsigned int)(uintptr_t)(v5) >= v8 || v4 > 24 )
        goto LABEL_11;
      v6 = 24 - v4;
      do
      {
        v4 += 8;
        v7 = *v5++ << v6;
        v3 |= v7;
        v6 -= 8;
      }
      while ( v8 > (unsigned int)(uintptr_t)(v5) && v4 <= 24 );
      a1[1] = (unsigned int)(uintptr_t)(v5);
      if ( a2 > v4 )
      {
LABEL_11:
        if ( v8 <= (unsigned int)(uintptr_t)(v5) )
        {
          a1[4] = 1;
          v4 = 0x40000000;
        }
        else
        {
          v3 |= (int)*v5 >> (v4 & 7);
        }
      }
    }
    result = v3 >> (32 - a2);
    a1[3] = v4 - a2;
    *a1 = (2 * v3) << (a2 - 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_pack_read1  (binary VA: 0x1399a90)
// Original: oc_pack_read1
// ----------------------------------------------------------------------------
unsigned int oc_pack_read1(int *a1)
{
  int v1;
  unsigned int v2;
  int v3;
  int v4;
  uint8_t *v6;
  int v7;
  int v8;
  unsigned int v9;

  v1 = a1[3];
  v2 = *a1;
  if ( v1 <= 0 )
  {
    v6 = (uint8_t *)a1[1];
    v9 = a1[2];
    if ( (unsigned int)(uintptr_t)(v6) >= v9 )
      goto LABEL_9;
    v7 = 24 - v1;
    do
    {
      v1 += 8;
      v8 = *v6++ << v7;
      v2 |= v8;
      v7 -= 8;
    }
    while ( v9 > (unsigned int)(uintptr_t)(v6) && v1 <= 24 );
    a1[1] = (int)(uintptr_t)(v6);
    if ( v1 <= 0 )
    {
LABEL_9:
      if ( v9 <= (unsigned int)(uintptr_t)(v6) )
      {
        a1[4] = 1;
        v3 = 0x3FFFFFFF;
        goto LABEL_3;
      }
      v2 |= (int)*v6 >> (v1 & 7);
    }
  }
  v3 = v1 - 1;
LABEL_3:
  a1[3] = v3;
  v4 = 2 * v2;
  *a1 = v4;
  return v2 >> 31;
}

// ----------------------------------------------------------------------------
// Function: oc_pack_bytes_left  (binary VA: 0x1399b30)
// Original: oc_pack_bytes_left
// ----------------------------------------------------------------------------
int oc_pack_bytes_left(uint32_t *a1)
{
  int result;

  result = -1;
  if ( a1[4] == 0 )
    return a1[2] - a1[1] + ((int)a1[3] >> 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: oc_idct8x8  (binary VA: 0x1399b50)
// Original: oc_idct8x8
// ----------------------------------------------------------------------------
int oc_idct8x8(int a1, int a2, int a3)
{
  return (*(int (**)(int, int))(a1 + 80))(a2, a3);
}

// ----------------------------------------------------------------------------
// Function: oc_idct8x8_c  (binary VA: 0x1399b70)
// Original: oc_idct8x8_c
// ----------------------------------------------------------------------------
__m128i * oc_idct8x8_c(__m128i *a1, int a2)
{
  __m128i *v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  __m128i v44;
  __m128i v45;
  __m128i v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  __m128i v51;
  __m128i v52;
  __m128i v53;
  __m128i v54;
  __m128i v55;
  __m128i v56;
  __m128i v57;
  __m128i v58;
  __m128i v59;
  __m128i v60;
  __m128i v61;
  __m128i v62;
  __m128i v63;
  __m128i v64;
  __m128i v65;
  __m128i v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  __m128i v70;
  __m128i v71;
  __m128i v72;
  __m128i v73;
  __m128i v74;
  __m128i v75;
  __m128i v76;
  __m128i v77;
  __m128i v78;
  __m128i v79;
  __m128i v80;
  __m128i v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  __m128i v98;
  __m128i v99;
  __m128i v100;
  __m128i v101;
  __m128i v102;
  __m128i v103;
  __m128i v104;
  __m128i v105;
  __m128i v106;
  __m128i v107;
  __m128i v108;
  __m128i v109;
  __m128i v110;
  __m128i v111;
  __m128i v112;
  __m128i v113;
  __m128i v114;
  __m128i v115;
  __m128i v116;
  __m128i v117;
  __m128i v118;
  __m128i v119;
  __m128i v120;
  __m128i v121;
  __m128i v122;
  __m128i v123;
  __m128i v124;
  __m128i v125;
  __m128i v126;
  __m128i v127;
  __m128i v128;
  __m128i v129;
  __m128i v130;
  __m128i v131;
  __m128i v132;
  __m128i v133;
  __m128i v134;
  __m128i v135;
  __m128i v136;
  __m128i v137;
  __m128i v138;
  __m128i v139;
  __m128i v140;
  __m128i v141;
  __m128i v142;
  __m128i v143;
  __m128i v144;
  __m128i v145;
  __m128i v146;
  __m128i v147;
  __m128i v148;
  __m128i v149;
  __m128i v150;
  __m128i v151;
  __m128i v152;
  __m128i v153;
  __m128i v154;
  __m128i *v155;
  int16_t *m128i_i16;
  int16_t v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  __m128i v164;
  __m128i v165;
  __m128i v166;
  __m128i v167;
  __m128i v168;
  __m128i v169;
  __m128i v170;
  __m128i v171;
  __m128i v172;
  __m128i v173;
  __m128i v174;
  __m128i v175;
  __m128i v176;
  __m128i v177;
  __m128i v178;
  __m128i v179;
  __m128i v180;
  __m128i v181;
  __m128i v182;
  __m128i v183;
  __m128i v184;
  __m128i v185;
  __m128i v186;
  __m128i v187;
  __m128i v188;
  __m128i v189;
  __m128i v190;
  __m128i v191;
  __m128i v192;
  __m128i v193;
  __m128i v194;
  __m128i v195;
  __m128i v196;
  __m128i v197;
  __m128i v198;
  __m128i v199;
  __m128i v200;
  __m128i v201;
  __m128i v202;
  __m128i v203;
  __m128i v204;
  __m128i v205;
  __m128i v206;
  __m128i v207;
  __m128i v208;
  __m128i v209;
  __m128i v210;
  __m128i v211;
  __m128i v212;
  __m128i v213;
  __m128i v214;
  __m128i v215;
  __m128i v216;
  __m128i v217;
  __m128i v218;
  __m128i v219;
  __m128i v220;
  __m128i v221;
  __m128i v222;
  __m128i v223;
  __m128i v224;
  __m128i v225;
  __m128i v226;
  __m128i v227;
  __m128i v228;
  __m128i v229;
  __m128i v230;
  __m128i v231;
  __m128i v232;
  __m128i v233;
  __m128i v234;
  __m128i v235;
  __m128i v236;
  __m128i v237;
  __m128i v238;
  __m128i v239;
  __m128i v240;
  __m128i v241;
  __m128i v242;
  __m128i v243;
  __m128i v244;
  __m128i v245;
  __m128i v246;
  __m128i v247;
  __m128i v248;
  __m128i v249;
  __m128i v250;
  __m128i v251;
  __m128i v252;
  __m128i v253;
  __m128i v254;
  __m128i v255;
  __m128i v256;
  __m128i v257;
  __m128i v258;
  __m128i v259;
  __m128i v260;
  __m128i v261;
  __m128i v262;
  __m128i v263;
  __m128i v264;
  __m128i v265;
  __m128i v266;
  __m128i v267;
  __m128i v268;
  __m128i v269;
  __m128i v270;
  __m128i v271;
  __m128i v272;
  __m128i v273;
  __m128i v274;
  __m128i v275;
  __m128i v276;
  __m128i v277;
  __m128i v278;
  __m128i v279;
  __m128i v280;
  __m128i v281;
  __m128i v282;
  __m128i v283;
  __m128i v284;
  __m128i v285;
  __m128i v286;
  __m128i v287;
  __m128i v288;
  __m128i v289;
  __m128i v290;
  __m128i v291;
  __m128i v292;
  __m128i v293;
  __m128i v294;
  __m128i v295;
  __m128i v296;
  __m128i v297;
  __m128i v298;
  __m128i v299;
  __m128i v300;
  __m128i v301;
  __m128i v302;
  __m128i v303;
  __m128i v304;
  __m128i v305;
  __m128i *result;
  int j;
  int v308;
  int8_t *v309;
  int v310;
  unsigned int v311;
  __m128i v312;
  __m128i v313;
  __m128i v314;
  __m128i v315;
  __m128i v316;
  __m128i v317;
  int v318;
  int v319;
  int v320;
  int v321;
  int v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  int v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  unsigned int v334;
  int v335;
  int v336;
  int v337;
  int v338;
  int v339;
  int v340;
  int v341;
  int v342;
  int v343;
  int v344;
  int v345;
  int v346;
  int v347;
  int v348;
  int v349;
  int v350;
  int v351;
  int v352;
  int v353;
  int v354;
  int v355;
  int v356;
  int v357;
  int v358;
  int v359;
  int v360;
  int k;
  int v362;
  int16_t *v363;
  int v364;
  unsigned int v365;
  __m128i v366;
  __m128i v367;
  __m128i v368;
  __m128i v369;
  __m128i v370;
  __m128i v371;
  int v372;
  int v373;
  int v374;
  int v375;
  int v376;
  unsigned int v377;
  int v378;
  int v379;
  int v380;
  unsigned int v381;
  int v382;
  int v383;
  unsigned int v384;
  int v385;
  int v386;
  unsigned int v387;
  int v388;
  int v389;
  unsigned int v390;
  int v391;
  int v392;
  unsigned int v393;
  int v394;
  int v395;
  unsigned int v396;
  int v397;
  int v398;
  unsigned int v399;
  int v400;
  int v401;
  int v402;
  unsigned int v403;
  int i;
  int v405;
  int16_t *v406;
  int v407;
  unsigned int v408;
  __m128i v409;
  __m128i v410;
  __m128i v411;
  __m128i v412;
  __m128i v413;
  __m128i v414;
  typedef __m128i _g4_t_v415;
  typedef int16_t _g4_t_v416;
  typedef int _g4_t_v417;
  typedef __m128i _g4_t_v418;
  typedef int16_t _g4_t_v419;
  typedef __m128i _g4_t_v420;
  typedef __m128i _g4_t_v421;
  typedef int16_t _g4_t_v422;
  typedef __m128i _g4_t_v423;
  typedef __m128i _g4_t_v424;
  typedef int16_t _g4_t_v425;
  typedef __m128i _g4_t_v426;
  typedef __m128i _g4_t_v427;
  typedef int16_t _g4_t_v428;
  typedef __m128i _g4_t_v429;
  typedef __m128i *_g4_t_v430;
  typedef __m128i _g4_t_v431;
  typedef int16_t _g4_t_v432;
  typedef __m128i _g4_t_v433;
  typedef __m128i _g4_t_v434;
  typedef int16_t _g4_t_v435;
  typedef __m128i _g4_t_v436;
  typedef int16_t _g4_t_v437;
  typedef int16_t _g4_t_v438;
  typedef int16_t _g4_t_v439;
  typedef __m128i _g4_t_v440;
  typedef int16_t _g4_t_v441;
  typedef int16_t _g4_t_v442;
  typedef int16_t _g4_t_v443;
  typedef __m128i _g4_t_v444;
  typedef int16_t _g4_t_v445;
  typedef int16_t _g4_t_v446;
  typedef int16_t _g4_t_v447;
  typedef int16_t _g4_t_v448;
  typedef int16_t _g4_t_v449;
  typedef __m128i _g4_t_v450;
  typedef int16_t _g4_t_v451;
  typedef int16_t _g4_t_v452;
  typedef int16_t _g4_t_v453;
  typedef int16_t _g4_t_v454;
  typedef int16_t _g4_t_v455;
  typedef __m128i _g4_t_v456;
  typedef int _g4_t_v457;
  typedef __m128i _g4_t_v458;
  typedef int16_t _g4_t_v459;
  typedef __m128i _g4_t_v460;
  typedef __m128i _g4_t_v461;
  typedef int16_t _g4_t_v462;
  typedef __m128i _g4_t_v463;
  typedef __m128i _g4_t_v464;
  typedef int16_t _g4_t_v465;
  typedef int16_t _g4_t_v466;
  typedef int16_t _g4_t_v467;
  typedef int16_t _g4_t_v468;
  typedef int16_t _g4_t_v469;
  typedef int16_t _g4_t_v470;
  typedef int16_t _g4_t_v471;
  typedef int16_t _g4_t_v472;
  typedef int16_t _g4_t_v473;
  typedef int16_t _g4_t_v474;
  typedef int _g4_t_v475;
  typedef int16_t _g4_t_v476;
  typedef __m128i _g4_t_v477;
  typedef __m128i _g4_t_v478;
  typedef int _g4_t_v479;
  typedef int16_t _g4_t_v480;
  typedef __m128i _g4_t_v481;
  typedef int _g4_t_v482;
  typedef __m128i _g4_t_v483;
  typedef int16_t _g4_t_v484;
  typedef __m128i _g4_t_v485;
  typedef int _g4_t_v486;
  typedef __m128i _g4_t_v487;
  typedef int16_t _g4_t_v488;
  typedef int16_t _g4_t_v489;
  typedef int16_t _g4_t_v490;
  typedef int16_t _g4_t_v491;
  typedef int16_t _g4_t_v492;
  typedef __m128i _g4_t_v493;
  typedef __m128i _g4_t_v494;
  typedef int _g4_t_v495;
  typedef __m128i _g4_t_v496;
  typedef int16_t _g4_t_v497;
  typedef __m128i _g4_t_v498;
  typedef __m128i _g4_t_v499;
  typedef int _g4_t_v500;
  typedef int _g4_t_v501;
  typedef __m128i _g4_t_v502;
  typedef __m128i _g4_t_v503;
  typedef __m128i _g4_t_v504;
  typedef int16_t _g4_t_v505;
  typedef int _g4_t_v506;
  typedef int _g4_t_v507;
  typedef __m128i _g4_t_v508;
  typedef __m128i _g4_t_v509;
  typedef int _g4_t_v510;
  typedef int _g4_t_v511;
  typedef int _g4_t_v512;
  typedef int _g4_t_v513;
  typedef int _g4_t_v514;
  typedef int _g4_t_v515;
  typedef __m128i _g4_t_v516;
  typedef __m128i _g4_t_v517;
  typedef int _g4_t_v518;
  typedef __m128i _g4_t_v519;
  typedef __m128i _g4_t_v520;
  typedef __m128i _g4_t_v521;
  typedef int _g4_t_v522;
  typedef int _g4_t_v523;
  typedef int _g4_t_v524;
  typedef int16_t _g4_t_v525;
  typedef __m128i _g4_t_v526;
  typedef __m128i _g4_t_v527;
  typedef __m128i _g4_t_v528;
  typedef __m128i _g4_t_v529;
  typedef int _g4_t_v530;
  typedef __m128i _g4_t_v531;
  typedef __m128i _g4_t_v532;
  typedef __m128i _g4_t_v533;
  typedef __m128i _g4_t_v534;
  typedef unsigned int _g4_t_v535;
  typedef int _g4_t_v536;
  typedef int _g4_t_v537;
  typedef int _g4_t_v538;
  typedef int _g4_t_v539;
  typedef int16_t _g4_t_v540;
  typedef int16_t _g4_t_v541;
  typedef int _g4_t_v542;
  typedef __m128i _g4_t_v543;
  typedef __m128i _g4_t_v544;
  typedef __m128i _g4_t_v545;
  typedef __m128i _g4_t_v546;
  typedef __m128i _g4_t_v547;
  typedef __m128i _g4_t_v548;
  typedef __m128i _g4_t_v549;
  typedef int _g4_t_v550;
  typedef __m128i _g4_t_v551;
  typedef __m128i _g4_t_v552;
  typedef __m128i _g4_t_v553;
  typedef __m128i _g4_t_v554;
  typedef __m128i _g4_t_v555;
  typedef __m128i _g4_t_v556;
  typedef __m128i _g4_t_v557;
  typedef __m128i _g4_t_v558;
  typedef int _g4_t_v559;
  typedef int _g4_t_v560;
  typedef int _g4_t_v561;
  typedef unsigned int _g4_t_v562;
  typedef int16_t _g4_t_v563;
  typedef unsigned int _g4_t_v564;
  typedef __m128i _g4_t_v565;
  typedef __m128i _g4_t_v566;
  typedef __m128i _g4_t_v567;
  typedef __m128i _g4_t_v568;
  typedef __m128i _g4_t_v569;
  typedef __m128i _g4_t_v570;
  typedef __m128i _g4_t_v571;
  typedef __m128i _g4_t_v572;
  typedef int _g4_t_v573;
  typedef __m128i _g4_t_v574;
  typedef __m128i _g4_t_v575;
  typedef __m128i _g4_t_v576;
  typedef __m128i _g4_t_v577;
  typedef __m128i _g4_t_v578;
  typedef unsigned int _g4_t_v579;
  typedef int16_t _g4_t_v580;
  typedef int _g4_t_v581;
  typedef unsigned int _g4_t_v582;
  typedef int16_t _g4_t_v583;
  typedef int _g4_t_v584;
  typedef unsigned int _g4_t_v585;
  typedef int16_t _g4_t_v586;
  typedef int16_t _g4_t_v587;
  typedef int16_t _g4_t_v588;
  typedef int16_t _g4_t_v589;
  typedef int16_t _g4_t_v590;
  typedef int16_t _g4_t_v591;
  typedef __m128i _g4_t_v592;
  typedef __m128i _g4_t_v593;
  typedef __m128i _g4_t_v594;
  typedef __m128i _g4_t_v595;
  typedef __m128i _g4_t_v596;
  typedef __m128i _g4_t_v597;
  typedef __m128i _g4_t_v598;
  typedef __m128i _g4_t_v599;
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_v415)) > _g4_s0 ? (0u + sizeof(_g4_t_v415)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v416)) > _g4_s1 ? (30u + sizeof(_g4_t_v416)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v417)) > _g4_s2 ? (32u + sizeof(_g4_t_v417)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v418)) > _g4_s3 ? (32u + sizeof(_g4_t_v418)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v419)) > _g4_s4 ? (32u + sizeof(_g4_t_v419)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v420)) > _g4_s5 ? (48u + sizeof(_g4_t_v420)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v421)) > _g4_s6 ? (48u + sizeof(_g4_t_v421)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v422)) > _g4_s7 ? (48u + sizeof(_g4_t_v422)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v423)) > _g4_s8 ? (64u + sizeof(_g4_t_v423)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v424)) > _g4_s9 ? (64u + sizeof(_g4_t_v424)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v425)) > _g4_s10 ? (64u + sizeof(_g4_t_v425)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v426)) > _g4_s11 ? (80u + sizeof(_g4_t_v426)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v427)) > _g4_s12 ? (80u + sizeof(_g4_t_v427)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v428)) > _g4_s13 ? (80u + sizeof(_g4_t_v428)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v429)) > _g4_s14 ? (96u + sizeof(_g4_t_v429)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v430)) > _g4_s15 ? (96u + sizeof(_g4_t_v430)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v431)) > _g4_s16 ? (96u + sizeof(_g4_t_v431)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v432)) > _g4_s17 ? (96u + sizeof(_g4_t_v432)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v433)) > _g4_s18 ? (112u + sizeof(_g4_t_v433)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v434)) > _g4_s19 ? (112u + sizeof(_g4_t_v434)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v435)) > _g4_s20 ? (112u + sizeof(_g4_t_v435)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v436)) > _g4_s21 ? (128u + sizeof(_g4_t_v436)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v437)) > _g4_s22 ? (128u + sizeof(_g4_t_v437)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v438)) > _g4_s23 ? (128u + sizeof(_g4_t_v438)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v439)) > _g4_s24 ? (128u + sizeof(_g4_t_v439)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v440)) > _g4_s25 ? (144u + sizeof(_g4_t_v440)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v441)) > _g4_s26 ? (144u + sizeof(_g4_t_v441)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v442)) > _g4_s27 ? (144u + sizeof(_g4_t_v442)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v443)) > _g4_s28 ? (144u + sizeof(_g4_t_v443)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v444)) > _g4_s29 ? (160u + sizeof(_g4_t_v444)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v445)) > _g4_s30 ? (160u + sizeof(_g4_t_v445)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v446)) > _g4_s31 ? (160u + sizeof(_g4_t_v446)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v447)) > _g4_s32 ? (160u + sizeof(_g4_t_v447)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v448)) > _g4_s33 ? (160u + sizeof(_g4_t_v448)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v449)) > _g4_s34 ? (160u + sizeof(_g4_t_v449)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v450)) > _g4_s35 ? (176u + sizeof(_g4_t_v450)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v451)) > _g4_s36 ? (176u + sizeof(_g4_t_v451)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v452)) > _g4_s37 ? (176u + sizeof(_g4_t_v452)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v453)) > _g4_s38 ? (176u + sizeof(_g4_t_v453)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v454)) > _g4_s39 ? (176u + sizeof(_g4_t_v454)) : _g4_s39,
    _g4_s41 = (176u + sizeof(_g4_t_v455)) > _g4_s40 ? (176u + sizeof(_g4_t_v455)) : _g4_s40,
    _g4_s42 = (192u + sizeof(_g4_t_v456)) > _g4_s41 ? (192u + sizeof(_g4_t_v456)) : _g4_s41,
    _g4_s43 = (192u + sizeof(_g4_t_v457)) > _g4_s42 ? (192u + sizeof(_g4_t_v457)) : _g4_s42,
    _g4_s44 = (192u + sizeof(_g4_t_v458)) > _g4_s43 ? (192u + sizeof(_g4_t_v458)) : _g4_s43,
    _g4_s45 = (192u + sizeof(_g4_t_v459)) > _g4_s44 ? (192u + sizeof(_g4_t_v459)) : _g4_s44,
    _g4_s46 = (208u + sizeof(_g4_t_v460)) > _g4_s45 ? (208u + sizeof(_g4_t_v460)) : _g4_s45,
    _g4_s47 = (208u + sizeof(_g4_t_v461)) > _g4_s46 ? (208u + sizeof(_g4_t_v461)) : _g4_s46,
    _g4_s48 = (208u + sizeof(_g4_t_v462)) > _g4_s47 ? (208u + sizeof(_g4_t_v462)) : _g4_s47,
    _g4_s49 = (224u + sizeof(_g4_t_v463)) > _g4_s48 ? (224u + sizeof(_g4_t_v463)) : _g4_s48,
    _g4_s50 = (224u + sizeof(_g4_t_v464)) > _g4_s49 ? (224u + sizeof(_g4_t_v464)) : _g4_s49,
    _g4_s51 = (224u + sizeof(_g4_t_v465)) > _g4_s50 ? (224u + sizeof(_g4_t_v465)) : _g4_s50,
    _g4_s52 = (224u + sizeof(_g4_t_v466)) > _g4_s51 ? (224u + sizeof(_g4_t_v466)) : _g4_s51,
    _g4_s53 = (224u + sizeof(_g4_t_v467)) > _g4_s52 ? (224u + sizeof(_g4_t_v467)) : _g4_s52,
    _g4_s54 = (224u + sizeof(_g4_t_v468)) > _g4_s53 ? (224u + sizeof(_g4_t_v468)) : _g4_s53,
    _g4_s55 = (224u + sizeof(_g4_t_v469)) > _g4_s54 ? (224u + sizeof(_g4_t_v469)) : _g4_s54,
    _g4_s56 = (224u + sizeof(_g4_t_v470)) > _g4_s55 ? (224u + sizeof(_g4_t_v470)) : _g4_s55,
    _g4_s57 = (224u + sizeof(_g4_t_v471)) > _g4_s56 ? (224u + sizeof(_g4_t_v471)) : _g4_s56,
    _g4_s58 = (224u + sizeof(_g4_t_v472)) > _g4_s57 ? (224u + sizeof(_g4_t_v472)) : _g4_s57,
    _g4_s59 = (224u + sizeof(_g4_t_v473)) > _g4_s58 ? (224u + sizeof(_g4_t_v473)) : _g4_s58,
    _g4_s60 = (224u + sizeof(_g4_t_v474)) > _g4_s59 ? (224u + sizeof(_g4_t_v474)) : _g4_s59,
    _g4_s61 = (224u + sizeof(_g4_t_v475)) > _g4_s60 ? (224u + sizeof(_g4_t_v475)) : _g4_s60,
    _g4_s62 = (224u + sizeof(_g4_t_v476)) > _g4_s61 ? (224u + sizeof(_g4_t_v476)) : _g4_s61,
    _g4_s63 = (240u + sizeof(_g4_t_v477)) > _g4_s62 ? (240u + sizeof(_g4_t_v477)) : _g4_s62,
    _g4_s64 = (240u + sizeof(_g4_t_v478)) > _g4_s63 ? (240u + sizeof(_g4_t_v478)) : _g4_s63,
    _g4_s65 = (240u + sizeof(_g4_t_v479)) > _g4_s64 ? (240u + sizeof(_g4_t_v479)) : _g4_s64,
    _g4_s66 = (240u + sizeof(_g4_t_v480)) > _g4_s65 ? (240u + sizeof(_g4_t_v480)) : _g4_s65,
    _g4_s67 = (256u + sizeof(_g4_t_v481)) > _g4_s66 ? (256u + sizeof(_g4_t_v481)) : _g4_s66,
    _g4_s68 = (256u + sizeof(_g4_t_v482)) > _g4_s67 ? (256u + sizeof(_g4_t_v482)) : _g4_s67,
    _g4_s69 = (256u + sizeof(_g4_t_v483)) > _g4_s68 ? (256u + sizeof(_g4_t_v483)) : _g4_s68,
    _g4_s70 = (256u + sizeof(_g4_t_v484)) > _g4_s69 ? (256u + sizeof(_g4_t_v484)) : _g4_s69,
    _g4_s71 = (272u + sizeof(_g4_t_v485)) > _g4_s70 ? (272u + sizeof(_g4_t_v485)) : _g4_s70,
    _g4_s72 = (272u + sizeof(_g4_t_v486)) > _g4_s71 ? (272u + sizeof(_g4_t_v486)) : _g4_s71,
    _g4_s73 = (272u + sizeof(_g4_t_v487)) > _g4_s72 ? (272u + sizeof(_g4_t_v487)) : _g4_s72,
    _g4_s74 = (272u + sizeof(_g4_t_v488)) > _g4_s73 ? (272u + sizeof(_g4_t_v488)) : _g4_s73,
    _g4_s75 = (272u + sizeof(_g4_t_v489)) > _g4_s74 ? (272u + sizeof(_g4_t_v489)) : _g4_s74,
    _g4_s76 = (272u + sizeof(_g4_t_v490)) > _g4_s75 ? (272u + sizeof(_g4_t_v490)) : _g4_s75,
    _g4_s77 = (272u + sizeof(_g4_t_v491)) > _g4_s76 ? (272u + sizeof(_g4_t_v491)) : _g4_s76,
    _g4_s78 = (272u + sizeof(_g4_t_v492)) > _g4_s77 ? (272u + sizeof(_g4_t_v492)) : _g4_s77,
    _g4_s79 = (288u + sizeof(_g4_t_v493)) > _g4_s78 ? (288u + sizeof(_g4_t_v493)) : _g4_s78,
    _g4_s80 = (288u + sizeof(_g4_t_v494)) > _g4_s79 ? (288u + sizeof(_g4_t_v494)) : _g4_s79,
    _g4_s81 = (288u + sizeof(_g4_t_v495)) > _g4_s80 ? (288u + sizeof(_g4_t_v495)) : _g4_s80,
    _g4_s82 = (288u + sizeof(_g4_t_v496)) > _g4_s81 ? (288u + sizeof(_g4_t_v496)) : _g4_s81,
    _g4_s83 = (288u + sizeof(_g4_t_v497)) > _g4_s82 ? (288u + sizeof(_g4_t_v497)) : _g4_s82,
    _g4_s84 = (304u + sizeof(_g4_t_v498)) > _g4_s83 ? (304u + sizeof(_g4_t_v498)) : _g4_s83,
    _g4_s85 = (304u + sizeof(_g4_t_v499)) > _g4_s84 ? (304u + sizeof(_g4_t_v499)) : _g4_s84,
    _g4_s86 = (304u + sizeof(_g4_t_v500)) > _g4_s85 ? (304u + sizeof(_g4_t_v500)) : _g4_s85,
    _g4_s87 = (304u + sizeof(_g4_t_v501)) > _g4_s86 ? (304u + sizeof(_g4_t_v501)) : _g4_s86,
    _g4_s88 = (304u + sizeof(_g4_t_v502)) > _g4_s87 ? (304u + sizeof(_g4_t_v502)) : _g4_s87,
    _g4_s89 = (304u + sizeof(_g4_t_v503)) > _g4_s88 ? (304u + sizeof(_g4_t_v503)) : _g4_s88,
    _g4_s90 = (304u + sizeof(_g4_t_v504)) > _g4_s89 ? (304u + sizeof(_g4_t_v504)) : _g4_s89,
    _g4_s91 = (304u + sizeof(_g4_t_v505)) > _g4_s90 ? (304u + sizeof(_g4_t_v505)) : _g4_s90,
    _g4_s92 = (304u + sizeof(_g4_t_v506)) > _g4_s91 ? (304u + sizeof(_g4_t_v506)) : _g4_s91,
    _g4_s93 = (304u + sizeof(_g4_t_v507)) > _g4_s92 ? (304u + sizeof(_g4_t_v507)) : _g4_s92,
    _g4_s94 = (320u + sizeof(_g4_t_v508)) > _g4_s93 ? (320u + sizeof(_g4_t_v508)) : _g4_s93,
    _g4_s95 = (320u + sizeof(_g4_t_v509)) > _g4_s94 ? (320u + sizeof(_g4_t_v509)) : _g4_s94,
    _g4_s96 = (320u + sizeof(_g4_t_v510)) > _g4_s95 ? (320u + sizeof(_g4_t_v510)) : _g4_s95,
    _g4_s97 = (320u + sizeof(_g4_t_v511)) > _g4_s96 ? (320u + sizeof(_g4_t_v511)) : _g4_s96,
    _g4_s98 = (320u + sizeof(_g4_t_v512)) > _g4_s97 ? (320u + sizeof(_g4_t_v512)) : _g4_s97,
    _g4_s99 = (320u + sizeof(_g4_t_v513)) > _g4_s98 ? (320u + sizeof(_g4_t_v513)) : _g4_s98,
    _g4_s100 = (320u + sizeof(_g4_t_v514)) > _g4_s99 ? (320u + sizeof(_g4_t_v514)) : _g4_s99,
    _g4_s101 = (320u + sizeof(_g4_t_v515)) > _g4_s100 ? (320u + sizeof(_g4_t_v515)) : _g4_s100,
    _g4_s102 = (336u + sizeof(_g4_t_v516)) > _g4_s101 ? (336u + sizeof(_g4_t_v516)) : _g4_s101,
    _g4_s103 = (336u + sizeof(_g4_t_v517)) > _g4_s102 ? (336u + sizeof(_g4_t_v517)) : _g4_s102,
    _g4_s104 = (336u + sizeof(_g4_t_v518)) > _g4_s103 ? (336u + sizeof(_g4_t_v518)) : _g4_s103,
    _g4_s105 = (336u + sizeof(_g4_t_v519)) > _g4_s104 ? (336u + sizeof(_g4_t_v519)) : _g4_s104,
    _g4_s106 = (336u + sizeof(_g4_t_v520)) > _g4_s105 ? (336u + sizeof(_g4_t_v520)) : _g4_s105,
    _g4_s107 = (336u + sizeof(_g4_t_v521)) > _g4_s106 ? (336u + sizeof(_g4_t_v521)) : _g4_s106,
    _g4_s108 = (336u + sizeof(_g4_t_v522)) > _g4_s107 ? (336u + sizeof(_g4_t_v522)) : _g4_s107,
    _g4_s109 = (336u + sizeof(_g4_t_v523)) > _g4_s108 ? (336u + sizeof(_g4_t_v523)) : _g4_s108,
    _g4_s110 = (336u + sizeof(_g4_t_v524)) > _g4_s109 ? (336u + sizeof(_g4_t_v524)) : _g4_s109,
    _g4_s111 = (336u + sizeof(_g4_t_v525)) > _g4_s110 ? (336u + sizeof(_g4_t_v525)) : _g4_s110,
    _g4_s112 = (352u + sizeof(_g4_t_v526)) > _g4_s111 ? (352u + sizeof(_g4_t_v526)) : _g4_s111,
    _g4_s113 = (352u + sizeof(_g4_t_v527)) > _g4_s112 ? (352u + sizeof(_g4_t_v527)) : _g4_s112,
    _g4_s114 = (352u + sizeof(_g4_t_v528)) > _g4_s113 ? (352u + sizeof(_g4_t_v528)) : _g4_s113,
    _g4_s115 = (352u + sizeof(_g4_t_v529)) > _g4_s114 ? (352u + sizeof(_g4_t_v529)) : _g4_s114,
    _g4_s116 = (352u + sizeof(_g4_t_v530)) > _g4_s115 ? (352u + sizeof(_g4_t_v530)) : _g4_s115,
    _g4_s117 = (352u + sizeof(_g4_t_v531)) > _g4_s116 ? (352u + sizeof(_g4_t_v531)) : _g4_s116,
    _g4_s118 = (352u + sizeof(_g4_t_v532)) > _g4_s117 ? (352u + sizeof(_g4_t_v532)) : _g4_s117,
    _g4_s119 = (352u + sizeof(_g4_t_v533)) > _g4_s118 ? (352u + sizeof(_g4_t_v533)) : _g4_s118,
    _g4_s120 = (352u + sizeof(_g4_t_v534)) > _g4_s119 ? (352u + sizeof(_g4_t_v534)) : _g4_s119,
    _g4_s121 = (352u + sizeof(_g4_t_v535)) > _g4_s120 ? (352u + sizeof(_g4_t_v535)) : _g4_s120,
    _g4_s122 = (352u + sizeof(_g4_t_v536)) > _g4_s121 ? (352u + sizeof(_g4_t_v536)) : _g4_s121,
    _g4_s123 = (352u + sizeof(_g4_t_v537)) > _g4_s122 ? (352u + sizeof(_g4_t_v537)) : _g4_s122,
    _g4_s124 = (352u + sizeof(_g4_t_v538)) > _g4_s123 ? (352u + sizeof(_g4_t_v538)) : _g4_s123,
    _g4_s125 = (352u + sizeof(_g4_t_v539)) > _g4_s124 ? (352u + sizeof(_g4_t_v539)) : _g4_s124,
    _g4_s126 = (352u + sizeof(_g4_t_v540)) > _g4_s125 ? (352u + sizeof(_g4_t_v540)) : _g4_s125,
    _g4_s127 = (352u + sizeof(_g4_t_v541)) > _g4_s126 ? (352u + sizeof(_g4_t_v541)) : _g4_s126,
    _g4_s128 = (352u + sizeof(_g4_t_v542)) > _g4_s127 ? (352u + sizeof(_g4_t_v542)) : _g4_s127,
    _g4_s129 = (368u + sizeof(_g4_t_v543)) > _g4_s128 ? (368u + sizeof(_g4_t_v543)) : _g4_s128,
    _g4_s130 = (368u + sizeof(_g4_t_v544)) > _g4_s129 ? (368u + sizeof(_g4_t_v544)) : _g4_s129,
    _g4_s131 = (368u + sizeof(_g4_t_v545)) > _g4_s130 ? (368u + sizeof(_g4_t_v545)) : _g4_s130,
    _g4_s132 = (368u + sizeof(_g4_t_v546)) > _g4_s131 ? (368u + sizeof(_g4_t_v546)) : _g4_s131,
    _g4_s133 = (368u + sizeof(_g4_t_v547)) > _g4_s132 ? (368u + sizeof(_g4_t_v547)) : _g4_s132,
    _g4_s134 = (368u + sizeof(_g4_t_v548)) > _g4_s133 ? (368u + sizeof(_g4_t_v548)) : _g4_s133,
    _g4_s135 = (368u + sizeof(_g4_t_v549)) > _g4_s134 ? (368u + sizeof(_g4_t_v549)) : _g4_s134,
    _g4_s136 = (368u + sizeof(_g4_t_v550)) > _g4_s135 ? (368u + sizeof(_g4_t_v550)) : _g4_s135,
    _g4_s137 = (368u + sizeof(_g4_t_v551)) > _g4_s136 ? (368u + sizeof(_g4_t_v551)) : _g4_s136,
    _g4_s138 = (368u + sizeof(_g4_t_v552)) > _g4_s137 ? (368u + sizeof(_g4_t_v552)) : _g4_s137,
    _g4_s139 = (368u + sizeof(_g4_t_v553)) > _g4_s138 ? (368u + sizeof(_g4_t_v553)) : _g4_s138,
    _g4_s140 = (368u + sizeof(_g4_t_v554)) > _g4_s139 ? (368u + sizeof(_g4_t_v554)) : _g4_s139,
    _g4_s141 = (368u + sizeof(_g4_t_v555)) > _g4_s140 ? (368u + sizeof(_g4_t_v555)) : _g4_s140,
    _g4_s142 = (368u + sizeof(_g4_t_v556)) > _g4_s141 ? (368u + sizeof(_g4_t_v556)) : _g4_s141,
    _g4_s143 = (368u + sizeof(_g4_t_v557)) > _g4_s142 ? (368u + sizeof(_g4_t_v557)) : _g4_s142,
    _g4_s144 = (368u + sizeof(_g4_t_v558)) > _g4_s143 ? (368u + sizeof(_g4_t_v558)) : _g4_s143,
    _g4_s145 = (368u + sizeof(_g4_t_v559)) > _g4_s144 ? (368u + sizeof(_g4_t_v559)) : _g4_s144,
    _g4_s146 = (368u + sizeof(_g4_t_v560)) > _g4_s145 ? (368u + sizeof(_g4_t_v560)) : _g4_s145,
    _g4_s147 = (368u + sizeof(_g4_t_v561)) > _g4_s146 ? (368u + sizeof(_g4_t_v561)) : _g4_s146,
    _g4_s148 = (368u + sizeof(_g4_t_v562)) > _g4_s147 ? (368u + sizeof(_g4_t_v562)) : _g4_s147,
    _g4_s149 = (368u + sizeof(_g4_t_v563)) > _g4_s148 ? (368u + sizeof(_g4_t_v563)) : _g4_s148,
    _g4_s150 = (368u + sizeof(_g4_t_v564)) > _g4_s149 ? (368u + sizeof(_g4_t_v564)) : _g4_s149,
    _g4_s151 = (384u + sizeof(_g4_t_v565)) > _g4_s150 ? (384u + sizeof(_g4_t_v565)) : _g4_s150,
    _g4_s152 = (384u + sizeof(_g4_t_v566)) > _g4_s151 ? (384u + sizeof(_g4_t_v566)) : _g4_s151,
    _g4_s153 = (384u + sizeof(_g4_t_v567)) > _g4_s152 ? (384u + sizeof(_g4_t_v567)) : _g4_s152,
    _g4_s154 = (384u + sizeof(_g4_t_v568)) > _g4_s153 ? (384u + sizeof(_g4_t_v568)) : _g4_s153,
    _g4_s155 = (384u + sizeof(_g4_t_v569)) > _g4_s154 ? (384u + sizeof(_g4_t_v569)) : _g4_s154,
    _g4_s156 = (384u + sizeof(_g4_t_v570)) > _g4_s155 ? (384u + sizeof(_g4_t_v570)) : _g4_s155,
    _g4_s157 = (384u + sizeof(_g4_t_v571)) > _g4_s156 ? (384u + sizeof(_g4_t_v571)) : _g4_s156,
    _g4_s158 = (384u + sizeof(_g4_t_v572)) > _g4_s157 ? (384u + sizeof(_g4_t_v572)) : _g4_s157,
    _g4_s159 = (384u + sizeof(_g4_t_v573)) > _g4_s158 ? (384u + sizeof(_g4_t_v573)) : _g4_s158,
    _g4_s160 = (384u + sizeof(_g4_t_v574)) > _g4_s159 ? (384u + sizeof(_g4_t_v574)) : _g4_s159,
    _g4_s161 = (384u + sizeof(_g4_t_v575)) > _g4_s160 ? (384u + sizeof(_g4_t_v575)) : _g4_s160,
    _g4_s162 = (384u + sizeof(_g4_t_v576)) > _g4_s161 ? (384u + sizeof(_g4_t_v576)) : _g4_s161,
    _g4_s163 = (384u + sizeof(_g4_t_v577)) > _g4_s162 ? (384u + sizeof(_g4_t_v577)) : _g4_s162,
    _g4_s164 = (384u + sizeof(_g4_t_v578)) > _g4_s163 ? (384u + sizeof(_g4_t_v578)) : _g4_s163,
    _g4_s165 = (384u + sizeof(_g4_t_v579)) > _g4_s164 ? (384u + sizeof(_g4_t_v579)) : _g4_s164,
    _g4_s166 = (384u + sizeof(_g4_t_v580)) > _g4_s165 ? (384u + sizeof(_g4_t_v580)) : _g4_s165,
    _g4_s167 = (384u + sizeof(_g4_t_v581)) > _g4_s166 ? (384u + sizeof(_g4_t_v581)) : _g4_s166,
    _g4_s168 = (384u + sizeof(_g4_t_v582)) > _g4_s167 ? (384u + sizeof(_g4_t_v582)) : _g4_s167,
    _g4_s169 = (384u + sizeof(_g4_t_v583)) > _g4_s168 ? (384u + sizeof(_g4_t_v583)) : _g4_s168,
    _g4_s170 = (384u + sizeof(_g4_t_v584)) > _g4_s169 ? (384u + sizeof(_g4_t_v584)) : _g4_s169,
    _g4_s171 = (384u + sizeof(_g4_t_v585)) > _g4_s170 ? (384u + sizeof(_g4_t_v585)) : _g4_s170,
    _g4_s172 = (400u + sizeof(_g4_t_v586)) > _g4_s171 ? (400u + sizeof(_g4_t_v586)) : _g4_s171,
    _g4_s173 = (402u + sizeof(_g4_t_v587)) > _g4_s172 ? (402u + sizeof(_g4_t_v587)) : _g4_s172,
    _g4_s174 = (404u + sizeof(_g4_t_v588)) > _g4_s173 ? (404u + sizeof(_g4_t_v588)) : _g4_s173,
    _g4_s175 = (406u + sizeof(_g4_t_v589)) > _g4_s174 ? (406u + sizeof(_g4_t_v589)) : _g4_s174,
    _g4_s176 = (408u + sizeof(_g4_t_v590)) > _g4_s175 ? (408u + sizeof(_g4_t_v590)) : _g4_s175,
    _g4_s177 = (410u + sizeof(_g4_t_v591)) > _g4_s176 ? (410u + sizeof(_g4_t_v591)) : _g4_s176,
    _g4_s178 = (416u + sizeof(_g4_t_v592)) > _g4_s177 ? (416u + sizeof(_g4_t_v592)) : _g4_s177,
    _g4_s179 = (432u + sizeof(_g4_t_v593)) > _g4_s178 ? (432u + sizeof(_g4_t_v593)) : _g4_s178,
    _g4_s180 = (448u + sizeof(_g4_t_v594)) > _g4_s179 ? (448u + sizeof(_g4_t_v594)) : _g4_s179,
    _g4_s181 = (464u + sizeof(_g4_t_v595)) > _g4_s180 ? (464u + sizeof(_g4_t_v595)) : _g4_s180,
    _g4_s182 = (480u + sizeof(_g4_t_v596)) > _g4_s181 ? (480u + sizeof(_g4_t_v596)) : _g4_s181,
    _g4_s183 = (496u + sizeof(_g4_t_v597)) > _g4_s182 ? (496u + sizeof(_g4_t_v597)) : _g4_s182,
    _g4_s184 = (512u + sizeof(_g4_t_v598)) > _g4_s183 ? (512u + sizeof(_g4_t_v598)) : _g4_s183,
    _g4_s185 = (528u + sizeof(_g4_t_v599)) > _g4_s184 ? (528u + sizeof(_g4_t_v599)) : _g4_s184
  };
  alignas(16) uint8_t _g4_sf[_g4_s185];
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 0u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 30u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 32u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 32u);
  _g4_t_v419 &v419 = *reinterpret_cast<_g4_t_v419 *>(_g4_sf + 32u);
  _g4_t_v420 &v420 = *reinterpret_cast<_g4_t_v420 *>(_g4_sf + 48u);
  _g4_t_v421 &v421 = *reinterpret_cast<_g4_t_v421 *>(_g4_sf + 48u);
  _g4_t_v422 &v422 = *reinterpret_cast<_g4_t_v422 *>(_g4_sf + 48u);
  _g4_t_v423 &v423 = *reinterpret_cast<_g4_t_v423 *>(_g4_sf + 64u);
  _g4_t_v424 &v424 = *reinterpret_cast<_g4_t_v424 *>(_g4_sf + 64u);
  _g4_t_v425 &v425 = *reinterpret_cast<_g4_t_v425 *>(_g4_sf + 64u);
  _g4_t_v426 &v426 = *reinterpret_cast<_g4_t_v426 *>(_g4_sf + 80u);
  _g4_t_v427 &v427 = *reinterpret_cast<_g4_t_v427 *>(_g4_sf + 80u);
  _g4_t_v428 &v428 = *reinterpret_cast<_g4_t_v428 *>(_g4_sf + 80u);
  _g4_t_v429 &v429 = *reinterpret_cast<_g4_t_v429 *>(_g4_sf + 96u);
  _g4_t_v430 &v430 = *reinterpret_cast<_g4_t_v430 *>(_g4_sf + 96u);
  _g4_t_v431 &v431 = *reinterpret_cast<_g4_t_v431 *>(_g4_sf + 96u);
  _g4_t_v432 &v432 = *reinterpret_cast<_g4_t_v432 *>(_g4_sf + 96u);
  _g4_t_v433 &v433 = *reinterpret_cast<_g4_t_v433 *>(_g4_sf + 112u);
  _g4_t_v434 &v434 = *reinterpret_cast<_g4_t_v434 *>(_g4_sf + 112u);
  _g4_t_v435 &v435 = *reinterpret_cast<_g4_t_v435 *>(_g4_sf + 112u);
  _g4_t_v436 &v436 = *reinterpret_cast<_g4_t_v436 *>(_g4_sf + 128u);
  _g4_t_v437 &v437 = *reinterpret_cast<_g4_t_v437 *>(_g4_sf + 128u);
  _g4_t_v438 &v438 = *reinterpret_cast<_g4_t_v438 *>(_g4_sf + 128u);
  _g4_t_v439 &v439 = *reinterpret_cast<_g4_t_v439 *>(_g4_sf + 128u);
  _g4_t_v440 &v440 = *reinterpret_cast<_g4_t_v440 *>(_g4_sf + 144u);
  _g4_t_v441 &v441 = *reinterpret_cast<_g4_t_v441 *>(_g4_sf + 144u);
  _g4_t_v442 &v442 = *reinterpret_cast<_g4_t_v442 *>(_g4_sf + 144u);
  _g4_t_v443 &v443 = *reinterpret_cast<_g4_t_v443 *>(_g4_sf + 144u);
  _g4_t_v444 &v444 = *reinterpret_cast<_g4_t_v444 *>(_g4_sf + 160u);
  _g4_t_v445 &v445 = *reinterpret_cast<_g4_t_v445 *>(_g4_sf + 160u);
  _g4_t_v446 &v446 = *reinterpret_cast<_g4_t_v446 *>(_g4_sf + 160u);
  _g4_t_v447 &v447 = *reinterpret_cast<_g4_t_v447 *>(_g4_sf + 160u);
  _g4_t_v448 &v448 = *reinterpret_cast<_g4_t_v448 *>(_g4_sf + 160u);
  _g4_t_v449 &v449 = *reinterpret_cast<_g4_t_v449 *>(_g4_sf + 160u);
  _g4_t_v450 &v450 = *reinterpret_cast<_g4_t_v450 *>(_g4_sf + 176u);
  _g4_t_v451 &v451 = *reinterpret_cast<_g4_t_v451 *>(_g4_sf + 176u);
  _g4_t_v452 &v452 = *reinterpret_cast<_g4_t_v452 *>(_g4_sf + 176u);
  _g4_t_v453 &v453 = *reinterpret_cast<_g4_t_v453 *>(_g4_sf + 176u);
  _g4_t_v454 &v454 = *reinterpret_cast<_g4_t_v454 *>(_g4_sf + 176u);
  _g4_t_v455 &v455 = *reinterpret_cast<_g4_t_v455 *>(_g4_sf + 176u);
  _g4_t_v456 &v456 = *reinterpret_cast<_g4_t_v456 *>(_g4_sf + 192u);
  _g4_t_v457 &v457 = *reinterpret_cast<_g4_t_v457 *>(_g4_sf + 192u);
  _g4_t_v458 &v458 = *reinterpret_cast<_g4_t_v458 *>(_g4_sf + 192u);
  _g4_t_v459 &v459 = *reinterpret_cast<_g4_t_v459 *>(_g4_sf + 192u);
  _g4_t_v460 &v460 = *reinterpret_cast<_g4_t_v460 *>(_g4_sf + 208u);
  _g4_t_v461 &v461 = *reinterpret_cast<_g4_t_v461 *>(_g4_sf + 208u);
  _g4_t_v462 &v462 = *reinterpret_cast<_g4_t_v462 *>(_g4_sf + 208u);
  _g4_t_v463 &v463 = *reinterpret_cast<_g4_t_v463 *>(_g4_sf + 224u);
  _g4_t_v464 &v464 = *reinterpret_cast<_g4_t_v464 *>(_g4_sf + 224u);
  _g4_t_v465 &v465 = *reinterpret_cast<_g4_t_v465 *>(_g4_sf + 224u);
  _g4_t_v466 &v466 = *reinterpret_cast<_g4_t_v466 *>(_g4_sf + 224u);
  _g4_t_v467 &v467 = *reinterpret_cast<_g4_t_v467 *>(_g4_sf + 224u);
  _g4_t_v468 &v468 = *reinterpret_cast<_g4_t_v468 *>(_g4_sf + 224u);
  _g4_t_v469 &v469 = *reinterpret_cast<_g4_t_v469 *>(_g4_sf + 224u);
  _g4_t_v470 &v470 = *reinterpret_cast<_g4_t_v470 *>(_g4_sf + 224u);
  _g4_t_v471 &v471 = *reinterpret_cast<_g4_t_v471 *>(_g4_sf + 224u);
  _g4_t_v472 &v472 = *reinterpret_cast<_g4_t_v472 *>(_g4_sf + 224u);
  _g4_t_v473 &v473 = *reinterpret_cast<_g4_t_v473 *>(_g4_sf + 224u);
  _g4_t_v474 &v474 = *reinterpret_cast<_g4_t_v474 *>(_g4_sf + 224u);
  _g4_t_v475 &v475 = *reinterpret_cast<_g4_t_v475 *>(_g4_sf + 224u);
  _g4_t_v476 &v476 = *reinterpret_cast<_g4_t_v476 *>(_g4_sf + 224u);
  _g4_t_v477 &v477 = *reinterpret_cast<_g4_t_v477 *>(_g4_sf + 240u);
  _g4_t_v478 &v478 = *reinterpret_cast<_g4_t_v478 *>(_g4_sf + 240u);
  _g4_t_v479 &v479 = *reinterpret_cast<_g4_t_v479 *>(_g4_sf + 240u);
  _g4_t_v480 &v480 = *reinterpret_cast<_g4_t_v480 *>(_g4_sf + 240u);
  _g4_t_v481 &v481 = *reinterpret_cast<_g4_t_v481 *>(_g4_sf + 256u);
  _g4_t_v482 &v482 = *reinterpret_cast<_g4_t_v482 *>(_g4_sf + 256u);
  _g4_t_v483 &v483 = *reinterpret_cast<_g4_t_v483 *>(_g4_sf + 256u);
  _g4_t_v484 &v484 = *reinterpret_cast<_g4_t_v484 *>(_g4_sf + 256u);
  _g4_t_v485 &v485 = *reinterpret_cast<_g4_t_v485 *>(_g4_sf + 272u);
  _g4_t_v486 &v486 = *reinterpret_cast<_g4_t_v486 *>(_g4_sf + 272u);
  _g4_t_v487 &v487 = *reinterpret_cast<_g4_t_v487 *>(_g4_sf + 272u);
  _g4_t_v488 &v488 = *reinterpret_cast<_g4_t_v488 *>(_g4_sf + 272u);
  _g4_t_v489 &v489 = *reinterpret_cast<_g4_t_v489 *>(_g4_sf + 272u);
  _g4_t_v490 &v490 = *reinterpret_cast<_g4_t_v490 *>(_g4_sf + 272u);
  _g4_t_v491 &v491 = *reinterpret_cast<_g4_t_v491 *>(_g4_sf + 272u);
  _g4_t_v492 &v492 = *reinterpret_cast<_g4_t_v492 *>(_g4_sf + 272u);
  _g4_t_v493 &v493 = *reinterpret_cast<_g4_t_v493 *>(_g4_sf + 288u);
  _g4_t_v494 &v494 = *reinterpret_cast<_g4_t_v494 *>(_g4_sf + 288u);
  _g4_t_v495 &v495 = *reinterpret_cast<_g4_t_v495 *>(_g4_sf + 288u);
  _g4_t_v496 &v496 = *reinterpret_cast<_g4_t_v496 *>(_g4_sf + 288u);
  _g4_t_v497 &v497 = *reinterpret_cast<_g4_t_v497 *>(_g4_sf + 288u);
  _g4_t_v498 &v498 = *reinterpret_cast<_g4_t_v498 *>(_g4_sf + 304u);
  _g4_t_v499 &v499 = *reinterpret_cast<_g4_t_v499 *>(_g4_sf + 304u);
  _g4_t_v500 &v500 = *reinterpret_cast<_g4_t_v500 *>(_g4_sf + 304u);
  _g4_t_v501 &v501 = *reinterpret_cast<_g4_t_v501 *>(_g4_sf + 304u);
  _g4_t_v502 &v502 = *reinterpret_cast<_g4_t_v502 *>(_g4_sf + 304u);
  _g4_t_v503 &v503 = *reinterpret_cast<_g4_t_v503 *>(_g4_sf + 304u);
  _g4_t_v504 &v504 = *reinterpret_cast<_g4_t_v504 *>(_g4_sf + 304u);
  _g4_t_v505 &v505 = *reinterpret_cast<_g4_t_v505 *>(_g4_sf + 304u);
  _g4_t_v506 &v506 = *reinterpret_cast<_g4_t_v506 *>(_g4_sf + 304u);
  _g4_t_v507 &v507 = *reinterpret_cast<_g4_t_v507 *>(_g4_sf + 304u);
  _g4_t_v508 &v508 = *reinterpret_cast<_g4_t_v508 *>(_g4_sf + 320u);
  _g4_t_v509 &v509 = *reinterpret_cast<_g4_t_v509 *>(_g4_sf + 320u);
  _g4_t_v510 &v510 = *reinterpret_cast<_g4_t_v510 *>(_g4_sf + 320u);
  _g4_t_v511 &v511 = *reinterpret_cast<_g4_t_v511 *>(_g4_sf + 320u);
  _g4_t_v512 &v512 = *reinterpret_cast<_g4_t_v512 *>(_g4_sf + 320u);
  _g4_t_v513 &v513 = *reinterpret_cast<_g4_t_v513 *>(_g4_sf + 320u);
  _g4_t_v514 &v514 = *reinterpret_cast<_g4_t_v514 *>(_g4_sf + 320u);
  _g4_t_v515 &v515 = *reinterpret_cast<_g4_t_v515 *>(_g4_sf + 320u);
  _g4_t_v516 &v516 = *reinterpret_cast<_g4_t_v516 *>(_g4_sf + 336u);
  _g4_t_v517 &v517 = *reinterpret_cast<_g4_t_v517 *>(_g4_sf + 336u);
  _g4_t_v518 &v518 = *reinterpret_cast<_g4_t_v518 *>(_g4_sf + 336u);
  _g4_t_v519 &v519 = *reinterpret_cast<_g4_t_v519 *>(_g4_sf + 336u);
  _g4_t_v520 &v520 = *reinterpret_cast<_g4_t_v520 *>(_g4_sf + 336u);
  _g4_t_v521 &v521 = *reinterpret_cast<_g4_t_v521 *>(_g4_sf + 336u);
  _g4_t_v522 &v522 = *reinterpret_cast<_g4_t_v522 *>(_g4_sf + 336u);
  _g4_t_v523 &v523 = *reinterpret_cast<_g4_t_v523 *>(_g4_sf + 336u);
  _g4_t_v524 &v524 = *reinterpret_cast<_g4_t_v524 *>(_g4_sf + 336u);
  _g4_t_v525 &v525 = *reinterpret_cast<_g4_t_v525 *>(_g4_sf + 336u);
  _g4_t_v526 &v526 = *reinterpret_cast<_g4_t_v526 *>(_g4_sf + 352u);
  _g4_t_v527 &v527 = *reinterpret_cast<_g4_t_v527 *>(_g4_sf + 352u);
  _g4_t_v528 &v528 = *reinterpret_cast<_g4_t_v528 *>(_g4_sf + 352u);
  _g4_t_v529 &v529 = *reinterpret_cast<_g4_t_v529 *>(_g4_sf + 352u);
  _g4_t_v530 &v530 = *reinterpret_cast<_g4_t_v530 *>(_g4_sf + 352u);
  _g4_t_v531 &v531 = *reinterpret_cast<_g4_t_v531 *>(_g4_sf + 352u);
  _g4_t_v532 &v532 = *reinterpret_cast<_g4_t_v532 *>(_g4_sf + 352u);
  _g4_t_v533 &v533 = *reinterpret_cast<_g4_t_v533 *>(_g4_sf + 352u);
  _g4_t_v534 &v534 = *reinterpret_cast<_g4_t_v534 *>(_g4_sf + 352u);
  _g4_t_v535 &v535 = *reinterpret_cast<_g4_t_v535 *>(_g4_sf + 352u);
  _g4_t_v536 &v536 = *reinterpret_cast<_g4_t_v536 *>(_g4_sf + 352u);
  _g4_t_v537 &v537 = *reinterpret_cast<_g4_t_v537 *>(_g4_sf + 352u);
  _g4_t_v538 &v538 = *reinterpret_cast<_g4_t_v538 *>(_g4_sf + 352u);
  _g4_t_v539 &v539 = *reinterpret_cast<_g4_t_v539 *>(_g4_sf + 352u);
  _g4_t_v540 &v540 = *reinterpret_cast<_g4_t_v540 *>(_g4_sf + 352u);
  _g4_t_v541 &v541 = *reinterpret_cast<_g4_t_v541 *>(_g4_sf + 352u);
  _g4_t_v542 &v542 = *reinterpret_cast<_g4_t_v542 *>(_g4_sf + 352u);
  _g4_t_v543 &v543 = *reinterpret_cast<_g4_t_v543 *>(_g4_sf + 368u);
  _g4_t_v544 &v544 = *reinterpret_cast<_g4_t_v544 *>(_g4_sf + 368u);
  _g4_t_v545 &v545 = *reinterpret_cast<_g4_t_v545 *>(_g4_sf + 368u);
  _g4_t_v546 &v546 = *reinterpret_cast<_g4_t_v546 *>(_g4_sf + 368u);
  _g4_t_v547 &v547 = *reinterpret_cast<_g4_t_v547 *>(_g4_sf + 368u);
  _g4_t_v548 &v548 = *reinterpret_cast<_g4_t_v548 *>(_g4_sf + 368u);
  _g4_t_v549 &v549 = *reinterpret_cast<_g4_t_v549 *>(_g4_sf + 368u);
  _g4_t_v550 &v550 = *reinterpret_cast<_g4_t_v550 *>(_g4_sf + 368u);
  _g4_t_v551 &v551 = *reinterpret_cast<_g4_t_v551 *>(_g4_sf + 368u);
  _g4_t_v552 &v552 = *reinterpret_cast<_g4_t_v552 *>(_g4_sf + 368u);
  _g4_t_v553 &v553 = *reinterpret_cast<_g4_t_v553 *>(_g4_sf + 368u);
  _g4_t_v554 &v554 = *reinterpret_cast<_g4_t_v554 *>(_g4_sf + 368u);
  _g4_t_v555 &v555 = *reinterpret_cast<_g4_t_v555 *>(_g4_sf + 368u);
  _g4_t_v556 &v556 = *reinterpret_cast<_g4_t_v556 *>(_g4_sf + 368u);
  _g4_t_v557 &v557 = *reinterpret_cast<_g4_t_v557 *>(_g4_sf + 368u);
  _g4_t_v558 &v558 = *reinterpret_cast<_g4_t_v558 *>(_g4_sf + 368u);
  _g4_t_v559 &v559 = *reinterpret_cast<_g4_t_v559 *>(_g4_sf + 368u);
  _g4_t_v560 &v560 = *reinterpret_cast<_g4_t_v560 *>(_g4_sf + 368u);
  _g4_t_v561 &v561 = *reinterpret_cast<_g4_t_v561 *>(_g4_sf + 368u);
  _g4_t_v562 &v562 = *reinterpret_cast<_g4_t_v562 *>(_g4_sf + 368u);
  _g4_t_v563 &v563 = *reinterpret_cast<_g4_t_v563 *>(_g4_sf + 368u);
  _g4_t_v564 &v564 = *reinterpret_cast<_g4_t_v564 *>(_g4_sf + 368u);
  _g4_t_v565 &v565 = *reinterpret_cast<_g4_t_v565 *>(_g4_sf + 384u);
  _g4_t_v566 &v566 = *reinterpret_cast<_g4_t_v566 *>(_g4_sf + 384u);
  _g4_t_v567 &v567 = *reinterpret_cast<_g4_t_v567 *>(_g4_sf + 384u);
  _g4_t_v568 &v568 = *reinterpret_cast<_g4_t_v568 *>(_g4_sf + 384u);
  _g4_t_v569 &v569 = *reinterpret_cast<_g4_t_v569 *>(_g4_sf + 384u);
  _g4_t_v570 &v570 = *reinterpret_cast<_g4_t_v570 *>(_g4_sf + 384u);
  _g4_t_v571 &v571 = *reinterpret_cast<_g4_t_v571 *>(_g4_sf + 384u);
  _g4_t_v572 &v572 = *reinterpret_cast<_g4_t_v572 *>(_g4_sf + 384u);
  _g4_t_v573 &v573 = *reinterpret_cast<_g4_t_v573 *>(_g4_sf + 384u);
  _g4_t_v574 &v574 = *reinterpret_cast<_g4_t_v574 *>(_g4_sf + 384u);
  _g4_t_v575 &v575 = *reinterpret_cast<_g4_t_v575 *>(_g4_sf + 384u);
  _g4_t_v576 &v576 = *reinterpret_cast<_g4_t_v576 *>(_g4_sf + 384u);
  _g4_t_v577 &v577 = *reinterpret_cast<_g4_t_v577 *>(_g4_sf + 384u);
  _g4_t_v578 &v578 = *reinterpret_cast<_g4_t_v578 *>(_g4_sf + 384u);
  _g4_t_v579 &v579 = *reinterpret_cast<_g4_t_v579 *>(_g4_sf + 384u);
  _g4_t_v580 &v580 = *reinterpret_cast<_g4_t_v580 *>(_g4_sf + 384u);
  _g4_t_v581 &v581 = *reinterpret_cast<_g4_t_v581 *>(_g4_sf + 384u);
  _g4_t_v582 &v582 = *reinterpret_cast<_g4_t_v582 *>(_g4_sf + 384u);
  _g4_t_v583 &v583 = *reinterpret_cast<_g4_t_v583 *>(_g4_sf + 384u);
  _g4_t_v584 &v584 = *reinterpret_cast<_g4_t_v584 *>(_g4_sf + 384u);
  _g4_t_v585 &v585 = *reinterpret_cast<_g4_t_v585 *>(_g4_sf + 384u);
  _g4_t_v586 &v586 = *reinterpret_cast<_g4_t_v586 *>(_g4_sf + 400u);
  _g4_t_v587 &v587 = *reinterpret_cast<_g4_t_v587 *>(_g4_sf + 402u);
  _g4_t_v588 &v588 = *reinterpret_cast<_g4_t_v588 *>(_g4_sf + 404u);
  _g4_t_v589 &v589 = *reinterpret_cast<_g4_t_v589 *>(_g4_sf + 406u);
  _g4_t_v590 &v590 = *reinterpret_cast<_g4_t_v590 *>(_g4_sf + 408u);
  _g4_t_v591 &v591 = *reinterpret_cast<_g4_t_v591 *>(_g4_sf + 410u);
  _g4_t_v592 &v592 = *reinterpret_cast<_g4_t_v592 *>(_g4_sf + 416u);
  _g4_t_v593 &v593 = *reinterpret_cast<_g4_t_v593 *>(_g4_sf + 432u);
  _g4_t_v594 &v594 = *reinterpret_cast<_g4_t_v594 *>(_g4_sf + 448u);
  _g4_t_v595 &v595 = *reinterpret_cast<_g4_t_v595 *>(_g4_sf + 464u);
  _g4_t_v596 &v596 = *reinterpret_cast<_g4_t_v596 *>(_g4_sf + 480u);
  _g4_t_v597 &v597 = *reinterpret_cast<_g4_t_v597 *>(_g4_sf + 496u);
  _g4_t_v598 &v598 = *reinterpret_cast<_g4_t_v598 *>(_g4_sf + 512u);
  _g4_t_v599 &v599 = *reinterpret_cast<_g4_t_v599 *>(_g4_sf + 528u);

  v2 = a1;
  if ( a2 <= 2 )
  {
    v372 =g4_m128_lane<int16_t>(*(a1), 1);
    v373 = 12785 * v372;
    v374 = (64277 * v372) >> 16;
    v513 = v373 >> 16;
    v583 = v374;
    v375 = (46341 * (v373 >> 16)) >> 16;
    v376 = (46341 * v374) >> 16;
    v377 = (unsigned int)(46341 *g4_m128_lane<int16_t>(*(a1), 0)) >> 16;
    v563 = v377 + v374;
    LOWORD(v374) = v375 + v376;
    LOWORD(v376) = v376 - v375;
    v480 = v377 + v374;
    v476 = v376 + v377;
    v455 = v513 + v377;
    v449 = v377 - v513;
    v525 = v377 - v583;
    v443 = v377 - v376;
    v439 = v377 - v374;
    v514 = (46341 *g4_m128_lane<int16_t>(a1[1], 0)) >> 16;
    v584 = (12785 * v514) >> 16;
    v378 = (64277 * v514) >> 16;
    v379 = (46341 * v584) >> 16;
    v380 = (46341 * v378) >> 16;
    v381 = (unsigned int)(46341 * v563) >> 16;
g4_m128_lane<int16_t>(*(a1), 0) = v381 + v378;
    LOWORD(v378) = v379 + v380;
    LOWORD(v380) = v380 - v379;
g4_m128_lane<int16_t>(a1[1], 0) = v381 + v378;
g4_m128_lane<int16_t>(a1[2], 0) = v380 + v381;
g4_m128_lane<int16_t>(a1[3], 0) = v584 + v381;
g4_m128_lane<int16_t>(a1[4], 0) = v381 - ((unsigned int)(12785 * v514) >> 16);
g4_m128_lane<int16_t>(a1[5], 0) = v381 - v380;
g4_m128_lane<int16_t>(a1[6], 0) = ((unsigned int)(46341 * v563) >> 16) - v378;
g4_m128_lane<int16_t>(a1[7], 0) = v381 - ((unsigned int)(64277 * v514) >> 16);
    v382 = (64277 * v514) >> 16;
    v383 = (46341 * v382) >> 16;
    v384 = (unsigned int)(46341 * v480) >> 16;
g4_m128_lane<int16_t>(*(a1), 1) = v384 + v382;
    LOWORD(v382) = v379 + v383;
    LOWORD(v383) = v383 - v379;
g4_m128_lane<int16_t>(a1[1], 1) = v384 + v382;
g4_m128_lane<int16_t>(a1[2], 1) = v383 + v384;
g4_m128_lane<int16_t>(a1[3], 1) = v584 + v384;
g4_m128_lane<int16_t>(a1[4], 1) = v384 - ((unsigned int)(12785 * v514) >> 16);
g4_m128_lane<int16_t>(a1[5], 1) = v384 - v383;
g4_m128_lane<int16_t>(a1[7], 1) = v384 - ((unsigned int)(64277 * v514) >> 16);
g4_m128_lane<int16_t>(a1[6], 1) = v384 - v382;
    v385 = (64277 * v514) >> 16;
    v386 = (46341 * v385) >> 16;
    v387 = (unsigned int)(46341 * v476) >> 16;
g4_m128_lane<int16_t>(*(a1), 2) = v387 + v385;
    LOWORD(v385) = v379 + v386;
    LOWORD(v386) = v386 - v379;
g4_m128_lane<int16_t>(a1[1], 2) = v387 + v385;
g4_m128_lane<int16_t>(a1[2], 2) = v386 + v387;
g4_m128_lane<int16_t>(a1[3], 2) = v584 + v387;
g4_m128_lane<int16_t>(a1[4], 2) = v387 - ((unsigned int)(12785 * v514) >> 16);
g4_m128_lane<int16_t>(a1[5], 2) = v387 - v386;
g4_m128_lane<int16_t>(a1[7], 2) = v387 - ((unsigned int)(64277 * v514) >> 16);
g4_m128_lane<int16_t>(a1[6], 2) = v387 - v385;
    v388 = (64277 * v514) >> 16;
    v389 = (46341 * v388) >> 16;
    v390 = (unsigned int)(46341 * v455) >> 16;
g4_m128_lane<int16_t>(*(a1), 3) = v390 + v388;
    LOWORD(v388) = v379 + v389;
    LOWORD(v389) = v389 - v379;
g4_m128_lane<int16_t>(a1[1], 3) = v390 + v388;
g4_m128_lane<int16_t>(a1[2], 3) = v389 + v390;
g4_m128_lane<int16_t>(a1[3], 3) = v584 + v390;
g4_m128_lane<int16_t>(a1[4], 3) = v390 - ((unsigned int)(12785 * v514) >> 16);
g4_m128_lane<int16_t>(a1[5], 3) = v390 - v389;
g4_m128_lane<int16_t>(a1[7], 3) = v390 - ((unsigned int)(64277 * v514) >> 16);
g4_m128_lane<int16_t>(a1[6], 3) = v390 - v388;
    v391 = (64277 * v514) >> 16;
    v392 = (46341 * v391) >> 16;
    v393 = (unsigned int)(46341 * v449) >> 16;
g4_m128_lane<int16_t>(*(a1), 4) = v393 + v391;
    v540 = v379 + v392;
    LOWORD(v391) = v393 + v379 + v392;
    LOWORD(v392) = v392 - v379;
g4_m128_lane<int16_t>(a1[1], 4) = v391;
g4_m128_lane<int16_t>(a1[2], 4) = v392 + v393;
g4_m128_lane<int16_t>(a1[3], 4) = v584 + v393;
g4_m128_lane<int16_t>(a1[4], 4) = v393 - ((unsigned int)(12785 * v514) >> 16);
g4_m128_lane<int16_t>(a1[5], 4) = v393 - v392;
g4_m128_lane<int16_t>(a1[7], 4) = v393 - ((unsigned int)(64277 * v514) >> 16);
g4_m128_lane<int16_t>(a1[6], 4) = v393 - v540;
    v394 = (64277 * v514) >> 16;
    v395 = (46341 * v394) >> 16;
    v396 = (unsigned int)(46341 * v443) >> 16;
g4_m128_lane<int16_t>(*(a1), 5) = v396 + v394;
    LOWORD(v394) = v379 + v395;
    LOWORD(v395) = v395 - v379;
g4_m128_lane<int16_t>(a1[1], 5) = v396 + v394;
g4_m128_lane<int16_t>(a1[2], 5) = v395 + v396;
g4_m128_lane<int16_t>(a1[3], 5) = v584 + v396;
g4_m128_lane<int16_t>(a1[4], 5) = v396 - ((unsigned int)(12785 * v514) >> 16);
g4_m128_lane<int16_t>(a1[5], 5) = v396 - v395;
g4_m128_lane<int16_t>(a1[7], 5) = v396 - ((unsigned int)(64277 * v514) >> 16);
g4_m128_lane<int16_t>(a1[6], 5) = v396 - v394;
    v397 = (64277 * v514) >> 16;
    v398 = (46341 * v397) >> 16;
    v399 = (unsigned int)(46341 * v439) >> 16;
g4_m128_lane<int16_t>(*(a1), 6) = v399 + v397;
    v541 = v379 + v398;
    LOWORD(v397) = v399 + v379 + v398;
    LOWORD(v398) = v398 - v379;
g4_m128_lane<int16_t>(a1[1], 6) = v397;
g4_m128_lane<int16_t>(a1[2], 6) = v398 + v399;
g4_m128_lane<int16_t>(a1[3], 6) = v584 + v399;
g4_m128_lane<int16_t>(a1[4], 6) = v399 - ((unsigned int)(12785 * v514) >> 16);
g4_m128_lane<int16_t>(a1[5], 6) = v399 - v398;
g4_m128_lane<int16_t>(a1[7], 6) = v399 - ((unsigned int)(64277 * v514) >> 16);
g4_m128_lane<int16_t>(a1[6], 6) = v399 - v541;
    v400 = (64277 * v514) >> 16;
    v515 = v584;
    LOWORD(v584) = v400;
    v401 = (46341 * v515) >> 16;
    v402 = (46341 * v400) >> 16;
    v403 = (unsigned int)(46341 * v525) >> 16;
g4_m128_lane<int16_t>(*(a1), 7) = v403 + v400;
    LOWORD(v400) = v401 + v402;
    LOWORD(v402) = v402 - v401;
g4_m128_lane<int16_t>(a1[1], 7) = v403 + v400;
g4_m128_lane<int16_t>(a1[2], 7) = v402 + v403;
g4_m128_lane<int16_t>(a1[3], 7) = v515 + v403;
g4_m128_lane<int16_t>(a1[4], 7) = v403 - v515;
g4_m128_lane<int16_t>(a1[5], 7) = v403 - v402;
g4_m128_lane<int16_t>(a1[7], 7) = v403 - v584;
g4_m128_lane<int16_t>(a1[6], 7) = v403 - v400;
    v585 = -((uint8_t)((uint8_t)(uintptr_t)(a1) & 0xF) >> 1) & 7;
    result = a1;
    if ( v585 != 0 )
    {
      for ( i = 64; ; --i )
      {
g4_m128_lane<int16_t>(*(result), 0) = (g4_m128_lane<int16_t>(*(result), 0) + 8) >> 4;
        result = (__m128i *)((char *)result + 2);
        v405 = i - 1;
        if ( v585 <= 65 - i )
          break;
      }
    }
    else
    {
      v405 = 64;
    }
    v564 = (64 - v585) >> 3;
    v542 = 8 * v564;
    if ( 8 * v564 == 0 )
      goto LABEL_49;
    v406 = &g4_m128_lane<int16_t>(*(a1), v585);
    v407 = 0;
    v408 = 0;
    do
    {
      v409 = *(__m128i *)&v406[v407];
      v410 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v409);
      v411 = _mm_srai_epi32(_mm_add_epi32(_mm_unpackhi_epi16(v409, v410), G4_BITCAST<__m128i>(xmmword_1C7C9F0)), 4u);
      v412 = _mm_srai_epi32(
               _mm_add_epi32(_mm_unpacklo_epi16(*(__m128i *)&v406[v407], v410), G4_BITCAST<__m128i>(xmmword_1C7C9F0)),
               4u);
      v413 = _mm_unpacklo_epi16(v412, v411);
      v414 = _mm_unpackhi_epi16(v412, v411);
      ++v408;
      *(__m128i *)&v406[v407] = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v413, v414), _mm_unpackhi_epi16(v413, v414));
      v407 += 8;
    }
    while ( v408 < v564 );
    v405 -= v542;
    result += v564;
    if ( 64 - v585 != v542 )
    {
LABEL_49:
      do
      {
        --v405;
g4_m128_lane<int16_t>(*(result), 0) = (g4_m128_lane<int16_t>(*(result), 0) + 8) >> 4;
        result = (__m128i *)((char *)result + 2);
      }
      while ( v405 != 0 );
    }
  }
  else
  {
    if ( a2 > 9 )
    {
      v3 = 1;
      if ( &g4_m128_lane<int8_t>(v592, 1) <= (int8_t *)&v593 )
        v3 = 8;
      v417 = 8 * (v3 >> 3);
      if ( &g4_m128_lane<int8_t>(v592, 1) <= (int8_t *)&v593 && v417 != 0 )
      {
        v4 = 0;
        v5 = 0;
        v508 = G4_BITCAST<__m128i>(xmmword_1C7CBA0);
        v477 = G4_BITCAST<__m128i>(xmmword_1C7CBB0);
        v463 = G4_BITCAST<__m128i>(xmmword_1C7CBC0);
        v450 = G4_BITCAST<__m128i>(xmmword_1C7CBD0);
        v444 = G4_BITCAST<__m128i>(xmmword_1C7CBE0);
        v440 = G4_BITCAST<__m128i>(xmmword_1C7CBF0);
        v436 = G4_BITCAST<__m128i>(xmmword_1C7CC00);
        do
        {
          v6 = a1[v4 + 1];
          v543 = a1[v4 + 6];
          v7 = a1[v4 + 2];
          v565 = a1[v4 + 5];
          v8 = _mm_unpacklo_epi16(a1[v4], v6);
          v9 = a1[v4 + 3];
          v526 = a1[v4 + 7];
          v10 = _mm_unpackhi_epi16(a1[v4], v6);
          v11 = _mm_unpackhi_epi16(v8, v10);
          v12 = _mm_unpacklo_epi16(v7, v9);
          v13 = _mm_unpacklo_epi16(v8, v10);
          v14 = _mm_unpacklo_epi16(v13, v11);
          v15 = _mm_unpackhi_epi16(v7, v9);
          v16 = _mm_unpackhi_epi16(v13, v11);
          v17 = v12;
          v18 = _mm_unpackhi_epi16(v12, v15);
          v19 = _mm_unpacklo_epi16(a1[v4 + 4], v565);
          v20 = _mm_unpacklo_epi16(v12, v15);
          v21 = _mm_unpacklo_epi16(v17, v15);
          v22 = _mm_unpackhi_epi16(a1[v4 + 4], v565);
          v23 = _mm_unpacklo_epi16(v20, v18);
          v24 = _mm_unpackhi_epi16(v21, v18);
          v25 = _mm_unpacklo_epi16(v19, v22);
          v26 = _mm_unpackhi_epi16(v19, v22);
          v27 = _mm_unpacklo_epi16(v25, v26);
          v28 = _mm_unpacklo_epi16(v543, v526);
          v29 = _mm_unpackhi_epi16(v25, v26);
          v498 = v24;
          ++v5;
          v30 = _mm_unpackhi_epi16(v543, v526);
          v31 = _mm_unpackhi_epi16(v28, v30);
          v32 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v28, v30), v31);
          v33 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v543, v526), v30), v31);
          v566 = _mm_unpackhi_epi16(v14, v23);
          v34 = _mm_unpacklo_epi16(v14, v23);
          v544 = _mm_unpackhi_epi16(v34, v566);
          v35 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(v34, v566), v544);
          v527 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v34, v566), v544);
          v567 = _mm_unpackhi_epi16(v27, v32);
          v36 = _mm_unpacklo_epi16(v27, v32);
          v37 = _mm_unpackhi_epi16(v36, v567);
          v493 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(v36, v567), v37);
          v38 = _mm_unpacklo_epi16(v16, v498);
          v39 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v36, v567), v37);
          v40 = _mm_unpackhi_epi16(v16, v498);
          v41 = _mm_unpackhi_epi16(v38, v40);
          v42 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v38, v40), v41);
          v43 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v16, v498), v40), v41);
          v44 = _mm_unpacklo_epi16(v29, v33);
          v568 = _mm_unpackhi_epi16(v29, v33);
          v45 = _mm_unpackhi_epi16(v44, v568);
          v46 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v44, v568), v45);
          v47 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v29, v33), v568), v45);
          v48 = _mm_unpackhi_epi16(v42, v46);
          v569 = _mm_unpacklo_epi16(v42, v46);
          v545 = _mm_unpackhi_epi16(v569, v48);
          v516 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(v569, v48), v545);
          v49 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v569, v48), v545);
          v50 = _mm_unpacklo_epi16(v35, v493);
          v51 = _mm_unpackhi_epi16(v35, v493);
          v570 = v49;
          v52 = _mm_unpackhi_epi16(v50, v51);
          v53 = _mm_unpacklo_epi16(v43, v47);
          v54 = _mm_unpacklo_epi16(v50, v51);
          v55 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v35, v493), v51);
          v56 = _mm_unpackhi_epi16(v43, v47);
          v57 = _mm_unpacklo_epi16(v54, v52);
          v58 = _mm_unpackhi_epi16(v55, v52);
          v59 = _mm_unpackhi_epi16(v53, v56);
          v60 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v53, v56), v59);
          v546 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v43, v47), v56), v59);
          v61 = _mm_unpacklo_epi16(v527, v39);
          v62 = _mm_unpackhi_epi16(v527, v39);
          v63 = _mm_unpackhi_epi16(v61, v62);
          v64 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(v61, v62), v63);
          v65 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v61, v62), v63);
          v66 = _mm_add_epi16(v64, v65);
          v67 = _mm_sub_epi16(v65, v64);
          v68 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v66);
          v69 = _mm_unpacklo_epi16(v66, v68);
          v70 = _mm_unpackhi_epi16(v66, v68);
          v429 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBA0), v69), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBA0), 4), _mm_srli_si128(v69, 4)),
                       8)),
                   0x10u);
          v71 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v67);
          v426 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBA0), v70), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBA0), 4), _mm_srli_si128(v70, 4)),
                       8)),
                   0x10u);
          v72 = _mm_unpacklo_epi16(v67, v71);
          v73 = _mm_unpackhi_epi16(v67, v71);
          v74 = _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBA0), v73), 8),
                  _mm_shuffle_epi32(
                    _mm_mul_epu32(_mm_srli_si128(v73, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBA0), 4)),
                    8));
          v75 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v57);
          v76 = _mm_unpacklo_epi16(v57, v75);
          v423 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBA0), v72), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBA0), 4), _mm_srli_si128(v72, 4)),
                       8)),
                   0x10u);
          v77 = _mm_unpackhi_epi16(v57, v75);
          v78 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v58);
          v420 = _mm_srai_epi32(v74, 0x10u);
          v79 = _mm_unpacklo_epi16(v58, v78);
          v80 = _mm_unpackhi_epi16(v58, v78);
          v481 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBB0), v76), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBB0), 4), _mm_srli_si128(v76, 4)),
                         8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBC0), v79), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBC0), 4), _mm_srli_si128(v79, 4)),
                         8)),
                     0x10u));
          v81 = _mm_srli_si128(v80, 4);
          v494 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBB0), v77), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBB0), 4), _mm_srli_si128(v77, 4)),
                         8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBC0), v80), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBC0), 4), v81), 8)),
                     0x10u));
          v82 = _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBC0), 4);
          v83 = _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBB0), 4);
          v456 = _mm_add_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBB0), v80), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(v81, v83), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBC0), v77), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v77, 4), v82), 8)),
                     0x10u));
          v84 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v570);
          v460 = _mm_add_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBB0), v79), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v79, 4), v83), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBC0), v76), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v76, 4), v82), 8)),
                     0x10u));
          v85 = _mm_unpacklo_epi16(v570, v84);
          v571 = _mm_unpackhi_epi16(v570, v84);
          v86 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v546);
          v87 = _mm_unpacklo_epi16(v546, v86);
          v547 = _mm_unpackhi_epi16(v546, v86);
          v485 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v571, G4_BITCAST<__m128i>(xmmword_1C7CBD0)), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBD0), 4), _mm_srli_si128(v571, 4)),
                         8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v547, G4_BITCAST<__m128i>(xmmword_1C7CBE0)), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBE0), 4), _mm_srli_si128(v547, 4)),
                         8)),
                     0x10u));
          v88 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v516);
          v89 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v60);
          v90 = _mm_unpacklo_epi16(v516, v88);
          v91 = _mm_unpacklo_epi16(v60, v89);
          v92 = _mm_unpackhi_epi16(v60, v89);
          v528 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBD0), v85), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBD0), 4), _mm_srli_si128(v85, 4)),
                         8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBE0), v87), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBE0), 4), _mm_srli_si128(v87, 4)),
                         8)),
                     0x10u));
          v93 = _mm_unpackhi_epi16(v516, v88);
          v517 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBF0), v90), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBF0), 4), _mm_srli_si128(v90, 4)),
                         8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CC00), v91), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CC00), 4), _mm_srli_si128(v91, 4)),
                         8)),
                     0x10u));
          v499 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBF0), v93), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(v93, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBF0), 4)),
                         8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CC00), v92), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CC00), 4), _mm_srli_si128(v92, 4)),
                         8)),
                     0x10u));
          v94 = _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBF0), 4);
          v95 = _mm_add_epi32(
                  _mm_srai_epi32(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CC00), v90), 8),
                      _mm_shuffle_epi32(
                        _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CC00), 4), _mm_srli_si128(v90, 4)),
                        8)),
                    0x10u),
                  _mm_srai_epi32(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBF0), v91), 8),
                      _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v91, 4), v94), 8)),
                    0x10u));
          v96 = _mm_add_epi32(
                  _mm_srai_epi32(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CC00), v93), 8),
                      _mm_shuffle_epi32(
                        _mm_mul_epu32(_mm_srli_si128(v93, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CC00), 4)),
                        8)),
                    0x10u),
                  _mm_srai_epi32(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBF0), v92), 8),
                      _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v92, 4), v94), 8)),
                    0x10u));
          v97 = _mm_add_epi32(
                  _mm_srai_epi32(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBE0), v85), 8),
                      _mm_shuffle_epi32(
                        _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBE0), 4), _mm_srli_si128(v85, 4)),
                        8)),
                    0x10u),
                  _mm_srai_epi32(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBD0), v87), 8),
                      _mm_shuffle_epi32(
                        _mm_mul_epu32(_mm_srli_si128(v87, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBD0), 4)),
                        8)),
                    0x10u));
          v98 = _mm_add_epi32(
                  _mm_srai_epi32(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(v571, G4_BITCAST<__m128i>(xmmword_1C7CBE0)), 8),
                      _mm_shuffle_epi32(
                        _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBE0), 4), _mm_srli_si128(v571, 4)),
                        8)),
                    0x10u),
                  _mm_srai_epi32(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(v547, G4_BITCAST<__m128i>(xmmword_1C7CBD0)), 8),
                      _mm_shuffle_epi32(
                        _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBD0), 4), _mm_srli_si128(v547, 4)),
                        8)),
                    0x10u));
          v99 = _mm_unpacklo_epi16(v528, v485);
          v100 = _mm_unpackhi_epi16(v528, v485);
          v101 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v99, v100), _mm_unpackhi_epi16(v99, v100));
          v102 = _mm_unpacklo_epi16(v517, v499);
          v103 = _mm_unpackhi_epi16(v517, v499);
          v104 = _mm_sub_epi16(v101, _mm_unpacklo_epi16(_mm_unpacklo_epi16(v102, v103), _mm_unpackhi_epi16(v102, v103)));
          v105 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v104);
          v106 = _mm_unpacklo_epi16(v104, v105);
          v107 = _mm_unpackhi_epi16(v104, v105);
          v108 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBA0), v107), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(v107, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBA0), 4)),
                       8)),
                   0x10u);
          v109 = _mm_unpacklo_epi16(v97, v98);
          v433 = v108;
          v110 = _mm_unpackhi_epi16(v97, v98);
          v548 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBA0), v106), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBA0), 4), _mm_srli_si128(v106, 4)),
                       8)),
                   0x10u);
          v111 = _mm_unpackhi_epi16(v95, v96);
          v112 = _mm_unpacklo_epi16(v95, v96);
          v113 = _mm_add_epi32(v98, v96);
          v114 = _mm_sub_epi16(
                   _mm_unpacklo_epi16(_mm_unpacklo_epi16(v109, v110), _mm_unpackhi_epi16(v109, v110)),
                   _mm_unpacklo_epi16(_mm_unpacklo_epi16(v112, v111), _mm_unpackhi_epi16(v112, v111)));
          v115 = _mm_add_epi32(v97, v95);
          v116 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v114);
          v117 = _mm_unpacklo_epi16(v115, v113);
          v118 = _mm_unpacklo_epi16(v114, v116);
          v119 = _mm_unpackhi_epi16(v114, v116);
          v120 = _mm_unpackhi_epi16(v115, v113);
          v121 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBA0), v118), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(v118, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBA0), 4)),
                       8)),
                   0x10u);
          v122 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(G4_BITCAST<__m128i>(xmmword_1C7CBA0), v119), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(v119, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CBA0), 4)),
                       8)),
                   0x10u);
          v123 = _mm_add_epi32(v429, v460);
          v415 = _mm_add_epi32(v426, v456);
          v124 = _mm_unpackhi_epi16(v123, v415);
          v125 = _mm_unpacklo_epi16(v123, v415);
          v126 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v125, v124), _mm_unpackhi_epi16(v125, v124));
          v572 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v117, v120), _mm_unpackhi_epi16(v117, v120));
          v127 = _mm_add_epi32(v420, v494);
          *(__m128i *)((char *)&v592 + v4 * 2) = _mm_add_epi16(v572, v126);
          v128 = _mm_add_epi32(v423, v481);
          v129 = _mm_unpacklo_epi16(v128, v127);
          v130 = _mm_unpackhi_epi16(v128, v127);
          v131 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v129, v130), _mm_unpackhi_epi16(v129, v130));
          v132 = _mm_add_epi32(v433, v122);
          v133 = _mm_sub_epi32(v122, v433);
          v134 = _mm_add_epi32(v548, v121);
          v135 = _mm_unpacklo_epi16(v134, v132);
          v136 = _mm_unpackhi_epi16(v134, v132);
          v137 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v135, v136), _mm_unpackhi_epi16(v135, v136));
          *(__m128i *)((char *)&v593 + v4 * 2) = _mm_add_epi16(v137, v131);
          v138 = _mm_sub_epi32(v420, v494);
          v139 = _mm_sub_epi32(v423, v481);
          v140 = _mm_unpacklo_epi16(v139, v138);
          v141 = _mm_unpackhi_epi16(v139, v138);
          v142 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v140, v141), _mm_unpackhi_epi16(v140, v141));
          v143 = _mm_sub_epi32(v121, v548);
          v144 = _mm_unpacklo_epi16(v143, v133);
          v145 = _mm_unpackhi_epi16(v143, v133);
          v146 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v144, v145), _mm_unpackhi_epi16(v144, v145));
          *(__m128i *)((char *)&v594 + v4 * 2) = _mm_add_epi16(v146, v142);
          v147 = _mm_sub_epi32(v426, v456);
          v148 = _mm_sub_epi32(v429, v460);
          v149 = _mm_unpacklo_epi16(v148, v147);
          v150 = _mm_unpackhi_epi16(v148, v147);
          v151 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v149, v150), _mm_unpackhi_epi16(v149, v150));
          v152 = _mm_add_epi32(v528, v517);
          v529 = _mm_add_epi32(v485, v499);
          v549 = _mm_unpackhi_epi16(v152, v529);
          v153 = _mm_unpacklo_epi16(v152, v529);
          v154 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v153, v549), _mm_unpackhi_epi16(v153, v549));
          *(__m128i *)((char *)&v595 + v4 * 2) = _mm_add_epi16(v151, v154);
          *(__m128i *)((char *)&v596 + v4 * 2) = _mm_sub_epi16(v151, v154);
          *(__m128i *)((char *)&v597 + v4 * 2) = _mm_sub_epi16(v142, v146);
          *(__m128i *)((char *)&v598 + v4 * 2) = _mm_sub_epi16(v131, v137);
          *(__m128i *)((char *)&v599 + v4 * 2) = _mm_sub_epi16(v126, v572);
          v4 += 8;
        }
        while ( v5 < v3 >> 3 );
        v155 = &v592 + (v3 >> 3);
        m128i_i16 =g4_m128_ptr<int16_t>(a1[8 * (v3 >> 3)]);
        if ( v3 == v417 )
        {
LABEL_13:
          v164 = _mm_unpacklo_epi16(v592, v593);
          v165 = _mm_unpackhi_epi16(v592, v593);
          v166 = _mm_unpackhi_epi16(v164, v165);
          v167 = _mm_unpacklo_epi16(v164, v165);
          v168 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v592, v593), v165);
          v169 = _mm_unpacklo_epi16(v594, v595);
          v170 = _mm_unpackhi_epi16(v594, v595);
          v171 = _mm_unpacklo_epi16(v167, v166);
          v172 = _mm_unpackhi_epi16(v168, v166);
          v173 = _mm_unpackhi_epi16(v169, v170);
          v174 = _mm_unpacklo_epi16(v596, v597);
          v175 = _mm_unpacklo_epi16(v169, v170);
          v176 = _mm_unpacklo_epi16(v175, v173);
          v177 = _mm_unpackhi_epi16(v596, v597);
          v178 = _mm_unpackhi_epi16(v175, v173);
          v179 = _mm_unpackhi_epi16(v174, v177);
          v180 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v174, v177), v179);
          v181 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v596, v597), v177), v179);
          v519 = v178;
          v182 = _mm_unpacklo_epi16(v598, v599);
          v183 = _mm_unpackhi_epi16(v598, v599);
          v184 = _mm_unpackhi_epi16(v182, v183);
          v185 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v182, v183), v184);
          v574 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v598, v599), v183), v184);
          v186 = _mm_unpacklo_epi16(v171, v176);
          v551 = _mm_unpackhi_epi16(v171, v176);
          v187 = _mm_unpacklo_epi16(v186, v551);
          v188 = _mm_unpackhi_epi16(v186, v551);
          v552 = _mm_unpackhi_epi16(v180, v185);
          v189 = _mm_unpacklo_epi16(v180, v185);
          v190 = _mm_unpacklo_epi16(v187, v188);
          v191 = _mm_unpackhi_epi16(v187, v188);
          v192 = _mm_unpackhi_epi16(v189, v552);
          v193 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(v189, v552), v192);
          v194 = _mm_unpacklo_epi16(v172, v519);
          v195 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v189, v552), v192);
          v502 = v193;
          v196 = _mm_unpackhi_epi16(v172, v519);
          v197 = _mm_unpackhi_epi16(v194, v196);
          v198 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v194, v196), v197);
          v199 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v172, v519), v196), v197);
          v200 = _mm_unpacklo_epi16(v181, v574);
          v553 = _mm_unpackhi_epi16(v181, v574);
          v201 = _mm_unpackhi_epi16(v200, v553);
          v202 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v200, v553), v201);
          v203 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v181, v574), v553), v201);
          v554 = _mm_unpackhi_epi16(v198, v202);
          v204 = _mm_unpacklo_epi16(v198, v202);
          v531 = _mm_unpackhi_epi16(v204, v554);
          v205 = _mm_unpacklo_epi16(v191, v502);
          v520 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(v204, v554), v531);
          v206 = _mm_unpackhi_epi16(v191, v502);
          v575 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v204, v554), v531);
          v207 = _mm_unpackhi_epi16(v205, v206);
          v208 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v205, v206), v207);
          v209 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v191, v502), v206), v207);
          v210 = _mm_unpackhi_epi16(v199, v203);
          v211 = _mm_unpacklo_epi16(v199, v203);
          v503 = _mm_unpackhi_epi16(v211, v210);
          v212 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(v211, v210), v503);
          v213 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v211, v210), v503);
          v214 = _mm_unpacklo_epi16(v190, v195);
          v555 = v213;
          v215 = _mm_unpackhi_epi16(v190, v195);
          v216 = _mm_unpackhi_epi16(v214, v215);
          v217 = _mm_unpackhi_epi16(_mm_unpacklo_epi16(v214, v215), v216);
          v218 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v214, v215), v216);
          v219 = _mm_add_epi16(v217, v218);
          v220 = _mm_sub_epi16(v218, v217);
          v532 = v212;
          v221 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v219);
          v222 = _mm_unpacklo_epi16(v219, v221);
          v223 = _mm_unpackhi_epi16(v219, v221);
          v431 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v508, v222), 8),
                     _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v508, 4), _mm_srli_si128(v222, 4)), 8)),
                   0x10u);
          v224 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v508, v223), 8),
                     _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v223, 4), _mm_srli_si128(v508, 4)), 8)),
                   0x10u);
          v225 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v220);
          v427 = v224;
          v226 = _mm_unpacklo_epi16(v220, v225);
          v227 = _mm_unpackhi_epi16(v220, v225);
          v228 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v508, v227), 8),
                     _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v508, 4), _mm_srli_si128(v227, 4)), 8)),
                   0x10u);
          v229 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v208);
          v424 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v508, v226), 8),
                     _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v508, 4), _mm_srli_si128(v226, 4)), 8)),
                   0x10u);
          v230 = _mm_unpacklo_epi16(v208, v229);
          v421 = v228;
          v231 = _mm_unpackhi_epi16(v208, v229);
          v232 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v209);
          v233 = _mm_unpacklo_epi16(v209, v232);
          v234 = _mm_unpackhi_epi16(v209, v232);
          v235 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v477, v230), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v477, 4), _mm_srli_si128(v230, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v463, v233), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v463, 4), _mm_srli_si128(v233, 4)), 8)),
                     0x10u));
          v496 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v477, v231), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v477, 4), _mm_srli_si128(v231, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v463, v234), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v463, 4), _mm_srli_si128(v234, 4)), 8)),
                     0x10u));
          v461 = _mm_add_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v477, v233), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v477, 4), _mm_srli_si128(v233, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v463, v230), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v463, 4), _mm_srli_si128(v230, 4)), 8)),
                     0x10u));
          v458 = _mm_add_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v477, v234), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v234, 4), _mm_srli_si128(v477, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v463, v231), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v231, 4), _mm_srli_si128(v463, 4)), 8)),
                     0x10u));
          v236 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v575);
          v237 = _mm_unpacklo_epi16(v575, v236);
          v238 = _mm_unpackhi_epi16(v575, v236);
          v239 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v532);
          v483 = v235;
          v434 = v237;
          v576 = v238;
          v418 = _mm_unpacklo_epi16(v532, v239);
          v533 = _mm_unpackhi_epi16(v532, v239);
          v240 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v520);
          v241 = _mm_unpacklo_epi16(v520, v240);
          v242 = _mm_unpackhi_epi16(v520, v240);
          v243 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v555);
          v521 = v242;
          v478 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v237, v450), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v450, 4), _mm_srli_si128(v237, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v418, v444), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v444, 4), _mm_srli_si128(v418, 4)), 8)),
                     0x10u));
          v244 = _mm_unpacklo_epi16(v555, v243);
          v556 = _mm_unpackhi_epi16(v555, v243);
          v464 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v238, v450), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v450, 4), _mm_srli_si128(v238, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v533, v444), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v444, 4), _mm_srli_si128(v533, 4)), 8)),
                     0x10u));
          v487 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v440, v241), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v440, 4), _mm_srli_si128(v241, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v436, v244), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v436, 4), _mm_srli_si128(v244, 4)), 8)),
                     0x10u));
          v504 = _mm_sub_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v521, v440), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v440, 4), _mm_srli_si128(v521, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v556, v436), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v436, 4), _mm_srli_si128(v556, 4)), 8)),
                     0x10u));
          v245 = _mm_add_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v436, v241), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v241, 4), _mm_srli_si128(v436, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v440, v244), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v440, 4), _mm_srli_si128(v244, 4)), 8)),
                     0x10u));
          v246 = _mm_add_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v521, v436), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v521, 4), _mm_srli_si128(v436, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v556, v440), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v556, 4), _mm_srli_si128(v440, 4)), 8)),
                     0x10u));
          v247 = _mm_add_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v434, v444), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v444, 4), _mm_srli_si128(v434, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v418, v450), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v450, 4), _mm_srli_si128(v418, 4)), 8)),
                     0x10u));
          v248 = _mm_add_epi32(
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v576, v444), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v444, 4), _mm_srli_si128(v576, 4)), 8)),
                     0x10u),
                   _mm_srai_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v533, v450), 8),
                       _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v533, 4), _mm_srli_si128(v450, 4)), 8)),
                     0x10u));
          v249 = _mm_unpacklo_epi16(v478, v464);
          v250 = _mm_unpackhi_epi16(v478, v464);
          v251 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v249, v250), _mm_unpackhi_epi16(v249, v250));
          v252 = _mm_unpacklo_epi16(v487, v504);
          v253 = _mm_unpackhi_epi16(v487, v504);
          v254 = _mm_sub_epi16(v251, _mm_unpacklo_epi16(_mm_unpacklo_epi16(v252, v253), _mm_unpackhi_epi16(v252, v253)));
          v255 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v254);
          v256 = _mm_unpacklo_epi16(v254, v255);
          v257 = _mm_unpackhi_epi16(v254, v255);
          v577 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v508, v256), 8),
                     _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v508, 4), _mm_srli_si128(v256, 4)), 8)),
                   0x10u);
          v258 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v508, v257), 8),
                     _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v257, 4), _mm_srli_si128(v508, 4)), 8)),
                   0x10u);
          v259 = _mm_unpacklo_epi16(v247, v248);
          v557 = v258;
          v260 = _mm_unpackhi_epi16(v247, v248);
          v261 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v259, v260), _mm_unpackhi_epi16(v259, v260));
          v262 = _mm_unpacklo_epi16(v245, v246);
          v263 = _mm_unpackhi_epi16(v245, v246);
          v264 = _mm_add_epi32(v248, v246);
          v265 = _mm_sub_epi16(v261, _mm_unpacklo_epi16(_mm_unpacklo_epi16(v262, v263), _mm_unpackhi_epi16(v262, v263)));
          v266 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v265);
          v267 = _mm_add_epi32(v247, v245);
          v268 = _mm_unpacklo_epi16(v265, v266);
          v269 = _mm_unpackhi_epi16(v265, v266);
          v270 = _mm_unpacklo_epi16(v267, v264);
          v271 = _mm_unpackhi_epi16(v267, v264);
          v534 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v508, v268), 8),
                     _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v508, 4), _mm_srli_si128(v268, 4)), 8)),
                   0x10u);
          v272 = _mm_srai_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v508, v269), 8),
                     _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v269, 4), _mm_srli_si128(v508, 4)), 8)),
                   0x10u);
          v273 = _mm_add_epi32(v427, v458);
          v274 = _mm_add_epi32(v431, v461);
          v275 = _mm_unpacklo_epi16(v274, v273);
          v276 = _mm_unpackhi_epi16(v274, v273);
          v277 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v275, v276), _mm_unpackhi_epi16(v275, v276));
          v509 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v270, v271), _mm_unpackhi_epi16(v270, v271));
          v278 = _mm_add_epi32(v421, v496);
          *v2 = _mm_add_epi16(v509, v277);
          v279 = _mm_add_epi32(v424, v483);
          v280 = _mm_unpacklo_epi16(v279, v278);
          v281 = _mm_unpackhi_epi16(v279, v278);
          v282 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v280, v281), _mm_unpackhi_epi16(v280, v281));
          v283 = _mm_add_epi32(v557, v272);
          v284 = _mm_sub_epi32(v272, v557);
          v285 = _mm_add_epi32(v577, v534);
          v286 = _mm_unpacklo_epi16(v285, v283);
          v287 = _mm_unpackhi_epi16(v285, v283);
          v288 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v286, v287), _mm_unpackhi_epi16(v286, v287));
          v289 = _mm_sub_epi32(v421, v496);
          v2[1] = _mm_add_epi16(v288, v282);
          v290 = _mm_sub_epi32(v424, v483);
          v291 = _mm_unpacklo_epi16(v290, v289);
          v292 = _mm_unpackhi_epi16(v290, v289);
          v293 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v291, v292), _mm_unpackhi_epi16(v291, v292));
          v294 = _mm_sub_epi32(v534, v577);
          v295 = _mm_unpacklo_epi16(v294, v284);
          v296 = _mm_unpackhi_epi16(v294, v284);
          v297 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v295, v296), _mm_unpackhi_epi16(v295, v296));
          v2[2] = _mm_add_epi16(v297, v293);
          v298 = _mm_sub_epi32(v427, v458);
          v299 = _mm_sub_epi32(v431, v461);
          v300 = _mm_unpacklo_epi16(v299, v298);
          v301 = _mm_unpackhi_epi16(v299, v298);
          v302 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v300, v301), _mm_unpackhi_epi16(v300, v301));
          v303 = _mm_add_epi32(v478, v487);
          v558 = _mm_add_epi32(v464, v504);
          v578 = _mm_unpackhi_epi16(v303, v558);
          v304 = _mm_unpacklo_epi16(v303, v558);
          v305 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v304, v578), _mm_unpackhi_epi16(v304, v578));
          v535 = -((uint8_t)((uint8_t)(uintptr_t)(v2) & 0xF) >> 1) & 7;
          v2[3] = _mm_add_epi16(v302, v305);
          v2[4] = _mm_sub_epi16(v302, v305);
          v2[5] = _mm_sub_epi16(v293, v297);
          v2[6] = _mm_sub_epi16(v282, v288);
          v2[7] = _mm_sub_epi16(v277, v509);
          result = v2;
          if ( v535 != 0 )
          {
            for ( j = 64; ; --j )
            {
g4_m128_lane<int16_t>(*(result), 0) = (g4_m128_lane<int16_t>(*(result), 0) + 8) >> 4;
              result = (__m128i *)((char *)result + 2);
              v308 = j - 1;
              if ( v535 <= 65 - j )
                break;
            }
          }
          else
          {
            v308 = 64;
          }
          v579 = (64 - v535) >> 3;
          v559 = 8 * v579;
          if ( 8 * v579 == 0 )
            goto LABEL_50;
          v309 = &g4_m128_lane<int8_t>(*(v2), 2 * v535);
          v310 = 0;
          v311 = 0;
          do
          {
            v312 = *(__m128i *)&v309[v310];
            v313 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v312);
            v314 = _mm_srai_epi32(_mm_add_epi32(_mm_unpackhi_epi16(v312, v313), G4_BITCAST<__m128i>(xmmword_1C7C9F0)), 4u);
            v315 = _mm_srai_epi32(
                     _mm_add_epi32(_mm_unpacklo_epi16(*(__m128i *)&v309[v310], v313), G4_BITCAST<__m128i>(xmmword_1C7C9F0)),
                     4u);
            v316 = _mm_unpacklo_epi16(v315, v314);
            v317 = _mm_unpackhi_epi16(v315, v314);
            ++v311;
            *(__m128i *)&v309[v310] = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v316, v317), _mm_unpackhi_epi16(v316, v317));
            v310 += 16;
          }
          while ( v311 < v579 );
          v308 -= v559;
          result += v579;
          if ( 64 - v535 != v559 )
          {
LABEL_50:
            do
            {
              --v308;
g4_m128_lane<int16_t>(*(result), 0) = (g4_m128_lane<int16_t>(*(result), 0) + 8) >> 4;
              result = (__m128i *)((char *)result + 2);
            }
            while ( v308 != 0 );
          }
          return result;
        }
        v430 = a1;
      }
      else
      {
        m128i_i16 = (int16_t *)a1;
        v155 = &v592;
        v430 = a1;
        v508 = G4_BITCAST<__m128i>(xmmword_1C7CBA0);
        v477 = G4_BITCAST<__m128i>(xmmword_1C7CBB0);
        v463 = G4_BITCAST<__m128i>(xmmword_1C7CBC0);
        v450 = G4_BITCAST<__m128i>(xmmword_1C7CBD0);
        v444 = G4_BITCAST<__m128i>(xmmword_1C7CBE0);
        v440 = G4_BITCAST<__m128i>(xmmword_1C7CBF0);
        v436 = G4_BITCAST<__m128i>(xmmword_1C7CC00);
      }
      do
      {
        v157 = m128i_i16[4];
        v573 = (46341 * (int16_t)(*m128i_i16 - v157)) >> 16;
        v158 = m128i_i16[2];
        v518 = (46341 * (int16_t)(v157 + *m128i_i16)) >> 16;
        v159 = m128i_i16[6];
        v486 = ((60547 * v158) >> 16) + ((25080 * v159) >> 16);
        v482 = m128i_i16[7];
        v500 = m128i_i16[1];
        v550 = ((25080 * v158) >> 16) - ((60547 * v159) >> 16);
        v160 = ((12785 * v500) >> 16) - ((64277 * v482) >> 16);
        v161 = m128i_i16[5];
        v162 = m128i_i16[3];
        m128i_i16 += 8;
        v530 = ((54491 * v161) >> 16) - ((36410 * v162) >> 16);
        v495 = ((36410 * v161) >> 16) + ((54491 * v162) >> 16);
        v501 = ((64277 * v500) >> 16) + ((12785 * v482) >> 16);
        v163 = 46341 * (int16_t)(v501 - v495);
        v457 = (46341 * (int16_t)(v160 - v530)) >> 16;
        LOWORD(v501) = v501 + v495;
        LOWORD(v160) = v530 + v160;
g4_m128_lane<int16_t>(*(v155), 0) = v501 + v486 + v518;
        v163 >>= 16;
g4_m128_lane<int16_t>(v155[1], 0) = v550 + v573 + v163 + v457;
g4_m128_lane<int16_t>(v155[2], 0) = v573 - v550 + v163 - v457;
g4_m128_lane<int16_t>(v155[5], 0) = v573 - v550 - (v163 - v457);
g4_m128_lane<int16_t>(v155[3], 0) = v518 - v486 + v160;
g4_m128_lane<int16_t>(v155[6], 0) = v550 + v573 - (v163 + v457);
g4_m128_lane<int16_t>(v155[4], 0) = v518 - v486 - v160;
g4_m128_lane<int16_t>(v155[7], 0) = v486 + v518 - v501;
        v155 = (__m128i *)((char *)v155 + 2);
      }
      while ( v155 < &v593 );
      v2 = v430;
      goto LABEL_13;
    }
    v318 =g4_m128_lane<int16_t>(*(a1), 2);
    v319 = 25080 * v318;
    v510 = (60547 * v318) >> 16;
    v522 =g4_m128_lane<int16_t>(*(a1), 1);
    v320 =g4_m128_lane<int16_t>(*(a1), 3);
    v580 = (unsigned int)(12785 * v522) >> 16;
    v536 = (54491 * v320) >> 16;
    v479 = (64277 * v522) >> 16;
    v560 = (36410 * v320) >> 16;
    v321 = (int16_t)(v560 + v580);
    v322 = 46341 * (int16_t)(((unsigned int)(64277 * v522) >> 16) - v536);
    v523 = (46341 * v321) >> 16;
    v323 = (46341 *g4_m128_lane<int16_t>(*(a1), 0)) >> 16;
    v319 >>= 16;
    v441 = v323 + v510;
    LOWORD(v536) = v479 + v536;
    v322 >>= 16;
    v465 = v323 + v510 + v536;
    v445 = v323 + v319;
    LOWORD(v321) = v322 + ((unsigned int)(46341 * v321) >> 16);
    LOWORD(v322) = v322 - v523;
    LOWORD(v479) = v321;
    v484 = v323 + v319 + v321;
    LOWORD(v321) = v323 - v319;
    LOWORD(v323) = v323 - v510;
    v459 = v322 + v321;
    v425 = v580 - v560 + v323;
    v419 = v323 - (v580 - v560);
    v446 = v445 - v479;
    LOWORD(v323) = v321 - v322;
    v324 =g4_m128_lane<int16_t>(a1[1], 2);
    v442 = v441 - v536;
    v589 = v323;
    v325 =g4_m128_lane<int16_t>(a1[1], 1);
    v511 = (60547 * v324) >> 16;
    v581 = (12785 * v325) >> 16;
    v537 = (64277 * v325) >> 16;
    v326 = (46341 *g4_m128_lane<int16_t>(a1[1], 0)) >> 16;
    v327 = (25080 * v324) >> 16;
    v437 = v326 + v511;
    v328 = (46341 * v537) >> 16;
    LOWORD(v523) = v537 + v326 + v511;
    v505 = v326 + v327;
    LOWORD(v325) = v328 + ((unsigned int)(46341 * v581) >> 16);
    LOWORD(v328) = v328 - ((unsigned int)(46341 * v581) >> 16);
    LOWORD(v479) = v325;
    v462 = v326 + v327 + v325;
    LOWORD(v325) = v326 - v327;
    LOWORD(v326) = v326 - v511;
    v428 = v328 + v325;
    v435 = v326 + v581;
    v590 = v326 - v581;
    LOWORD(v326) = v325 - v328;
    v329 =g4_m128_lane<int16_t>(a1[2], 1);
    v451 = v326;
    v330 = (12785 * v329) >> 16;
    v586 = v505 - v479;
    v331 = (64277 * v329) >> 16;
    v438 = v437 - v537;
    v332 = (46341 * v330) >> 16;
    LOWORD(v511) = v330;
    LOWORD(v581) = v331;
    v333 = (46341 * v331) >> 16;
    v334 = (unsigned int)(46341 *g4_m128_lane<int16_t>(a1[2], 0)) >> 16;
    LOWORD(v560) = v334 + v331;
    LOWORD(v331) = v332 + v333;
    LOWORD(v333) = v333 - v332;
    v497 = v334 + v331;
    v432 = v333 + v334;
    v422 = v511 + v334;
    v591 = v334 - v511;
    v587 = v334 - v331;
    v588 = v334 - v333;
    v416 = v334 - v581;
    v506 = (25080 * (int16_t)v560) >> 16;
    LOWORD(v479) = (unsigned int)(60547 * (int16_t)v560) >> 16;
    v512 = (46341 *g4_m128_lane<int16_t>(a1[3], 0)) >> 16;
    LOWORD(v537) = (unsigned int)(12785 * (int16_t)v523) >> 16;
    v335 = v465;
    v466 = (unsigned int)(36410 * v512) >> 16;
    LOWORD(v560) = (unsigned int)(64277 * (int16_t)v523) >> 16;
    v336 = (46341 * v335) >> 16;
    v337 = (46341 * (int16_t)(v466 + v537)) >> 16;
    v338 = (46341 * (int16_t)(v560 - ((unsigned int)(54491 * v512) >> 16))) >> 16;
    LOWORD(v523) = v336 + v479;
    LOWORD(v581) = v560 + ((unsigned int)(54491 * v512) >> 16);
g4_m128_lane<int16_t>(*(a1), 0) = v336 + v479 + v581;
    LOWORD(v560) = v336 + v506;
    v488 = v337 + v338;
g4_m128_lane<int16_t>(a1[1], 0) = v336 + v506 + v337 + v338;
    LOWORD(v331) = v336 - v506;
    LOWORD(v338) = v338 - v337;
    LOWORD(v337) = v336 - v506;
    LOWORD(v336) = v336 - v479;
g4_m128_lane<int16_t>(a1[2], 0) = v338 + v337;
g4_m128_lane<int16_t>(a1[4], 0) = v336 - (v537 - v466);
g4_m128_lane<int16_t>(a1[5], 0) = v331 - v338;
g4_m128_lane<int16_t>(a1[6], 0) = v560 - v488;
g4_m128_lane<int16_t>(a1[3], 0) = v537 - v466 + v336;
g4_m128_lane<int16_t>(a1[7], 0) = v523 - v581;
    LOWORD(v506) = (unsigned int)(25080 * v497) >> 16;
    LOWORD(v581) = (unsigned int)(60547 * v497) >> 16;
    LOWORD(v560) = (unsigned int)(12785 * v462) >> 16;
    LOWORD(v537) = v466;
    v339 = (46341 * v484) >> 16;
    v340 = (46341 * (int16_t)(v466 + v560)) >> 16;
    v341 = (46341 * (int16_t)(((unsigned int)(64277 * v462) >> 16) - ((unsigned int)(54491 * v512) >> 16))) >> 16;
    LOWORD(v523) = v339 + v581;
    LOWORD(v479) = ((unsigned int)(64277 * v462) >> 16) + ((unsigned int)(54491 * v512) >> 16);
g4_m128_lane<int16_t>(*(a1), 1) = v339 + v581 + v479;
    v467 = v339 + v506;
    v489 = v340 + v341;
g4_m128_lane<int16_t>(a1[1], 1) = v339 + v506 + v340 + v341;
    LOWORD(v331) = v339 - v506;
    LOWORD(v341) = v341 - v340;
    LOWORD(v340) = v339 - v506;
    LOWORD(v339) = v339 - v581;
g4_m128_lane<int16_t>(a1[2], 1) = v341 + v340;
g4_m128_lane<int16_t>(a1[4], 1) = v339 - (v560 - v537);
g4_m128_lane<int16_t>(a1[3], 1) = v560 - v537 + v339;
g4_m128_lane<int16_t>(a1[5], 1) = v331 - v341;
g4_m128_lane<int16_t>(a1[6], 1) = v467 - v489;
g4_m128_lane<int16_t>(a1[7], 1) = v523 - v479;
    LOWORD(v581) = (unsigned int)(60547 * v432) >> 16;
    LOWORD(v506) = (unsigned int)(25080 * v432) >> 16;
    LOWORD(v560) = (unsigned int)(12785 * v428) >> 16;
    v342 = (46341 * v459) >> 16;
    v343 = (46341 * (int16_t)(((unsigned int)(36410 * v512) >> 16) + v560)) >> 16;
    v344 = (46341 * (int16_t)(((unsigned int)(64277 * v428) >> 16) - ((unsigned int)(54491 * v512) >> 16))) >> 16;
    LOWORD(v523) = v342 + v581;
    LOWORD(v479) = ((unsigned int)(64277 * v428) >> 16) + ((unsigned int)(54491 * v512) >> 16);
g4_m128_lane<int16_t>(*(a1), 2) = v342 + v581 + v479;
    v468 = v342 + v506;
    v490 = v343 + v344;
g4_m128_lane<int16_t>(a1[1], 2) = v342 + v506 + v343 + v344;
    LOWORD(v331) = v342 - v506;
    LOWORD(v344) = v344 - v343;
    LOWORD(v343) = v342 - v506;
    LOWORD(v342) = v342 - v581;
g4_m128_lane<int16_t>(a1[2], 2) = v344 + v343;
g4_m128_lane<int16_t>(a1[3], 2) = v342 + v560 - v537;
g4_m128_lane<int16_t>(a1[4], 2) = v342 - (v560 - v537);
g4_m128_lane<int16_t>(a1[5], 2) = v331 - v344;
    LOWORD(v581) = (unsigned int)(60547 * v422) >> 16;
g4_m128_lane<int16_t>(a1[6], 2) = v468 - v490;
    LOWORD(v506) = (unsigned int)(25080 * v422) >> 16;
g4_m128_lane<int16_t>(a1[7], 2) = v523 - v479;
    LOWORD(v560) = (unsigned int)(12785 * v435) >> 16;
    v469 = (unsigned int)(64277 * v435) >> 16;
    v345 = (46341 * v425) >> 16;
    v346 = (46341 * (int16_t)(((unsigned int)(36410 * v512) >> 16) + v560)) >> 16;
    v347 = (46341 * (int16_t)(v469 - ((unsigned int)(54491 * v512) >> 16))) >> 16;
    LOWORD(v523) = v345 + v581;
    LOWORD(v479) = v469 + ((unsigned int)(54491 * v512) >> 16);
g4_m128_lane<int16_t>(*(a1), 3) = v345 + v581 + v479;
    v470 = v345 + v506;
    v491 = v346 + v347;
g4_m128_lane<int16_t>(a1[1], 3) = v345 + v506 + v346 + v347;
    LOWORD(v347) = v347 - v346;
    LOWORD(v506) = v345 - v506;
    LOWORD(v345) = v345 - v581;
g4_m128_lane<int16_t>(a1[2], 3) = v347 + v506;
g4_m128_lane<int16_t>(a1[4], 3) = v345 - (v560 - v537);
g4_m128_lane<int16_t>(a1[3], 3) = v560 - v537 + v345;
g4_m128_lane<int16_t>(a1[5], 3) = v506 - v347;
    LOWORD(v581) = (unsigned int)(60547 * v591) >> 16;
g4_m128_lane<int16_t>(a1[6], 3) = v470 - v491;
    LOWORD(v506) = (unsigned int)(25080 * v591) >> 16;
    LOWORD(v560) = (unsigned int)(12785 * v590) >> 16;
    v471 = (unsigned int)(64277 * v590) >> 16;
g4_m128_lane<int16_t>(a1[7], 3) = v523 - v479;
    v348 = (46341 * v419) >> 16;
    v349 = (46341 * (int16_t)(((unsigned int)(36410 * v512) >> 16) + v560)) >> 16;
    v350 = (46341 * (int16_t)(v471 - ((unsigned int)(54491 * v512) >> 16))) >> 16;
    LOWORD(v523) = v348 + v581;
    LOWORD(v479) = v471 + ((unsigned int)(54491 * v512) >> 16);
g4_m128_lane<int16_t>(*(a1), 4) = v348 + v581 + v479;
    v472 = v348 + v506;
    v492 = v349 + v350;
g4_m128_lane<int16_t>(a1[1], 4) = v348 + v506 + v349 + v350;
    LOWORD(v331) = v348 - v506;
    LOWORD(v350) = v350 - v349;
    LOWORD(v349) = v348 - v506;
    LOWORD(v348) = v348 - v581;
g4_m128_lane<int16_t>(a1[2], 4) = v350 + v349;
g4_m128_lane<int16_t>(a1[4], 4) = v348 - (v560 - v537);
g4_m128_lane<int16_t>(a1[3], 4) = v560 - v537 + v348;
g4_m128_lane<int16_t>(a1[5], 4) = v331 - v350;
    LOWORD(v581) = (unsigned int)(60547 * v588) >> 16;
g4_m128_lane<int16_t>(a1[6], 4) = v472 - v492;
    v507 = (25080 * v588) >> 16;
g4_m128_lane<int16_t>(a1[7], 4) = v523 - v479;
    LOWORD(v560) = (unsigned int)(12785 * v451) >> 16;
    v473 = (unsigned int)(64277 * v451) >> 16;
    v351 = (46341 * v589) >> 16;
    v352 = (46341 * (int16_t)(((unsigned int)(36410 * v512) >> 16) + v560)) >> 16;
    v452 = v351 + v581;
    v353 = (46341 * (int16_t)(v473 - ((unsigned int)(54491 * v512) >> 16))) >> 16;
    LOWORD(v479) = v473 + ((unsigned int)(54491 * v512) >> 16);
g4_m128_lane<int16_t>(*(a1), 5) = v351 + v581 + v479;
    v474 = v351 + v507;
    LOWORD(v523) = v352 + v353;
g4_m128_lane<int16_t>(a1[1], 5) = v351 + v507 + v352 + v353;
    LOWORD(v331) = v351 - v507;
    LOWORD(v353) = v353 - v352;
    LOWORD(v352) = v351 - v507;
    LOWORD(v351) = v351 - v581;
g4_m128_lane<int16_t>(a1[2], 5) = v353 + v352;
g4_m128_lane<int16_t>(a1[4], 5) = v351 - (v560 - v537);
g4_m128_lane<int16_t>(a1[3], 5) = v560 - v537 + v351;
g4_m128_lane<int16_t>(a1[5], 5) = v331 - v353;
    LOWORD(v581) = (unsigned int)(60547 * v587) >> 16;
g4_m128_lane<int16_t>(a1[6], 5) = v474 - v523;
    LOWORD(v523) = (unsigned int)(25080 * v587) >> 16;
g4_m128_lane<int16_t>(a1[7], 5) = v452 - v479;
    LOWORD(v560) = (unsigned int)(12785 * v586) >> 16;
    v475 = (64277 * v586) >> 16;
    v354 = (46341 * v446) >> 16;
    v453 = v354 + v581;
    v355 = (46341 * (int16_t)(((unsigned int)(36410 * v512) >> 16) + v560)) >> 16;
    v356 = (46341 * (int16_t)(v475 - ((unsigned int)(54491 * v512) >> 16))) >> 16;
    LOWORD(v479) = v475 + ((unsigned int)(54491 * v512) >> 16);
g4_m128_lane<int16_t>(*(a1), 6) = v354 + v581 + v479;
    LOWORD(v475) = v354 + v523;
    v447 = v355 + v356;
g4_m128_lane<int16_t>(a1[1], 6) = v354 + v523 + v355 + v356;
    LOWORD(v331) = v354 - v523;
    LOWORD(v356) = v356 - v355;
    LOWORD(v355) = v354 - v523;
    LOWORD(v354) = v354 - v581;
g4_m128_lane<int16_t>(a1[2], 6) = v356 + v355;
g4_m128_lane<int16_t>(a1[3], 6) = v560 - v537 + v354;
g4_m128_lane<int16_t>(a1[4], 6) = v354 - (v560 - v537);
    LOWORD(v581) = (unsigned int)(60547 * v416) >> 16;
g4_m128_lane<int16_t>(a1[5], 6) = v331 - v356;
    v561 = (12785 * v438) >> 16;
g4_m128_lane<int16_t>(a1[6], 6) = v475 - v447;
g4_m128_lane<int16_t>(a1[7], 6) = v453 - v479;
    v538 = (54491 * v512) >> 16;
    v357 = (46341 * v442) >> 16;
    v358 = (25080 * v416) >> 16;
    v359 = 46341 * (int16_t)(((unsigned int)(36410 * v512) >> 16) + v561);
    v360 = 46341 * (int16_t)(((unsigned int)(64277 * v438) >> 16) - v538);
    v524 = v359 >> 16;
    LOWORD(v475) = v357 + v581;
    LOWORD(v538) = ((unsigned int)(64277 * v438) >> 16) + v538;
    v360 >>= 16;
g4_m128_lane<int16_t>(*(a1), 7) = v357 + v581 + v538;
    LOWORD(v479) = v357 + v358;
    LOWORD(v359) = v360 + HIWORD(v359);
    LOWORD(v360) = v360 - v524;
    v454 = v359;
g4_m128_lane<int16_t>(a1[1], 7) = v357 + v358 + v359;
    LOWORD(v359) = v357 - v358;
    LOWORD(v357) = v357 - v581;
    v448 = v359;
g4_m128_lane<int16_t>(a1[2], 7) = v360 + v359;
    LOWORD(v359) = v561 - ((unsigned int)(36410 * v512) >> 16);
g4_m128_lane<int16_t>(a1[4], 7) = v357 - v359;
g4_m128_lane<int16_t>(a1[3], 7) = v359 + v357;
g4_m128_lane<int16_t>(a1[5], 7) = v448 - v360;
g4_m128_lane<int16_t>(a1[6], 7) = v479 - v454;
g4_m128_lane<int16_t>(a1[7], 7) = v475 - v538;
    v582 = -((uint8_t)((uint8_t)(uintptr_t)(a1) & 0xF) >> 1) & 7;
    result = a1;
    if ( v582 != 0 )
    {
      for ( k = 64; ; --k )
      {
g4_m128_lane<int16_t>(*(result), 0) = (g4_m128_lane<int16_t>(*(result), 0) + 8) >> 4;
        result = (__m128i *)((char *)result + 2);
        v362 = k - 1;
        if ( v582 <= 65 - k )
          break;
      }
    }
    else
    {
      v362 = 64;
    }
    v562 = (64 - v582) >> 3;
    v539 = 8 * v562;
    if ( 8 * v562 == 0 )
      goto LABEL_51;
    v363 = &g4_m128_lane<int16_t>(*(a1), v582);
    v364 = 0;
    v365 = 0;
    do
    {
      v366 = *(__m128i *)&v363[v364];
      v367 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v366);
      v368 = _mm_srai_epi32(_mm_add_epi32(_mm_unpackhi_epi16(v366, v367), G4_BITCAST<__m128i>(xmmword_1C7C9F0)), 4u);
      v369 = _mm_srai_epi32(
               _mm_add_epi32(_mm_unpacklo_epi16(*(__m128i *)&v363[v364], v367), G4_BITCAST<__m128i>(xmmword_1C7C9F0)),
               4u);
      v370 = _mm_unpacklo_epi16(v369, v368);
      v371 = _mm_unpackhi_epi16(v369, v368);
      ++v365;
      *(__m128i *)&v363[v364] = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v370, v371), _mm_unpackhi_epi16(v370, v371));
      v364 += 8;
    }
    while ( v365 < v562 );
    v362 -= v539;
    result += v562;
    if ( 64 - v582 != v539 )
    {
LABEL_51:
      do
      {
        --v362;
g4_m128_lane<int16_t>(*(result), 0) = (g4_m128_lane<int16_t>(*(result), 0) + 8) >> 4;
        result = (__m128i *)((char *)result + 2);
      }
      while ( v362 != 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ogg_page_version  (binary VA: 0x139da70)
// Original: ogg_page_version
// ----------------------------------------------------------------------------
int ogg_page_version(int a1)
{
  return *(uint8_t *)(*(uint32_t *)a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: ogg_page_continued  (binary VA: 0x139da80)
// Original: ogg_page_continued
// ----------------------------------------------------------------------------
int ogg_page_continued(int a1)
{
  return *(uint8_t *)(*(uint32_t *)a1 + 5) & 1;
}

// ----------------------------------------------------------------------------
// Function: ogg_page_bos  (binary VA: 0x139da90)
// Original: ogg_page_bos
// ----------------------------------------------------------------------------
int ogg_page_bos(int a1)
{
  return *(uint8_t *)(*(uint32_t *)a1 + 5) & 2;
}

// ----------------------------------------------------------------------------
// Function: ogg_page_eos  (binary VA: 0x139daa0)
// Original: ogg_page_eos
// ----------------------------------------------------------------------------
int ogg_page_eos(int a1)
{
  return *(uint8_t *)(*(uint32_t *)a1 + 5) & 4;
}

// ----------------------------------------------------------------------------
// Function: ogg_page_granulepos  (binary VA: 0x139dab0)
// Original: ogg_page_granulepos
// ----------------------------------------------------------------------------
int ogg_page_granulepos(int a1)
{
  return ((*(uint8_t *)(*(uint32_t *)a1 + 7)
         | ((*(uint8_t *)(*(uint32_t *)a1 + 8)
           | ((*(uint8_t *)(*(uint32_t *)a1 + 9)
             | ((*(uint8_t *)(*(uint32_t *)a1 + 10)
               | ((*(uint8_t *)(*(uint32_t *)a1 + 11) | (*(uint16_t *)(*(uint32_t *)a1 + 12) << 8)) << 8)) << 8)) << 8)) << 8)) << 8)
       | *(uint8_t *)(*(uint32_t *)a1 + 6);
}

// ----------------------------------------------------------------------------
// Function: ogg_page_serialno  (binary VA: 0x139db40)
// Original: ogg_page_serialno
// ----------------------------------------------------------------------------
int ogg_page_serialno(int a1)
{
  return (*(uint8_t *)(*(uint32_t *)a1 + 17) << 24)
       | *(uint8_t *)(*(uint32_t *)a1 + 14)
       | (*(uint8_t *)(*(uint32_t *)a1 + 16) << 16)
       | (*(uint8_t *)(*(uint32_t *)a1 + 15) << 8);
}

// ----------------------------------------------------------------------------
// Function: ogg_page_pageno  (binary VA: 0x139db70)
// Original: ogg_page_pageno
// ----------------------------------------------------------------------------
int ogg_page_pageno(int a1)
{
  return (*(uint8_t *)(*(uint32_t *)a1 + 21) << 24)
       | *(uint8_t *)(*(uint32_t *)a1 + 18)
       | (*(uint8_t *)(*(uint32_t *)a1 + 20) << 16)
       | (*(uint8_t *)(*(uint32_t *)a1 + 19) << 8);
}

// ----------------------------------------------------------------------------
// Function: ogg_page_packets  (binary VA: 0x139dba0)
// Original: ogg_page_packets
// ----------------------------------------------------------------------------
int ogg_page_packets(int a1)
{
  int result;
  uint8_t v2;
  int v3;
  int v4;
  int v5;

  result = 0;
  v2 = *(uint8_t *)(*(uint32_t *)a1 + 26);
  if ( v2 != 0 )
  {
    v3 = v2;
    v4 = 1;
    v5 = v3 + 1;
    do
    {
      if ( *(uint8_t *)(*(uint32_t *)a1 + v4++ + 26) != 0xFF )
        ++result;
    }
    while ( v4 != v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_check  (binary VA: 0x139dbe0)
// Original: ogg_stream_check
// ----------------------------------------------------------------------------
int ogg_stream_check(uint32_t *a1)
{
  if ( a1 != nullptr )
    return -(*a1 == 0);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_clear  (binary VA: 0x139dc00)
// Original: ogg_stream_clear
// ----------------------------------------------------------------------------
int ogg_stream_clear(void **a1)
{
  uint16_t *v1;
  unsigned int v2;
  uint16_t *v3;

  v1 = (uint16_t *)(a1);
  if ( a1 == nullptr )
    return 0;
  if ( *a1 != nullptr )
    free(*a1);
  if ( a1[4] != nullptr )
    free(a1[4]);
  if ( a1[5] != nullptr )
    free(a1[5]);
  v2 = 360;
  if ( ((uint8_t)(uintptr_t)(a1) & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    LOBYTE(v2) = 103;
    v1 = (uint16_t *)((char *)a1 + 1);
  }
  if ( ((uint8_t)(uintptr_t)(v1) & 2) != 0 )
  {
    *v1 = 0;
    v2 -= 2;
    ++v1;
  }
  memset(v1, 0, 4 * (v2 >> 2));
  v3 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
  {
    *v3++ = 0;
    if ( (v2 & 1) == 0 )
      return 0;
  }
  else if ( (v2 & 1) == 0 )
  {
    return 0;
  }
  *(uint8_t *)v3 = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_init  (binary VA: 0x139dcc0)
// Original: ogg_stream_init
// ----------------------------------------------------------------------------
int ogg_stream_init(int a1, int a2)
{
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;

  if ( a1 == 0 )
    return -1;
  v2 = (uint16_t *)a1;
  v3 = 360;
  if ( (a1 & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    v2 = (uint16_t *)(a1 + 1);
    LOBYTE(v3) = 103;
  }
  if ( ((uint8_t)(uintptr_t)(v2) & 2) != 0 )
  {
    *v2 = 0;
    v3 -= 2;
    ++v2;
  }
  memset(v2, 0, 4 * (v3 >> 2));
  v4 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
  {
    *v4++ = 0;
    if ( (v3 & 1) == 0 )
      goto LABEL_8;
  }
  else if ( (v3 & 1) == 0 )
  {
LABEL_8:
    *(uint32_t *)(a1 + 4) = 0x4000;
    *(uint32_t *)(a1 + 24) = 1024;
    v5 = malloc(0x4000u);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v5);
    v6 = v5;
    v7 = malloc(0x1000u);
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v7);
    v8 = v7;
    v9 = malloc(0x2000u);
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v9);
    if ( v6 != nullptr && v8 != nullptr && v9 != nullptr )
    {
      *(uint32_t *)(a1 + 336) = a2;
      return 0;
    }
    else
    {
      ogg_stream_clear((void **)a1);
      return -1;
    }
  }
  *(uint8_t *)v4 = 0;
  goto LABEL_8;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_destroy  (binary VA: 0x139dde0)
// Original: ogg_stream_destroy
// ----------------------------------------------------------------------------
int ogg_stream_destroy(void **ptr)
{
  if ( ptr != nullptr )
  {
    ogg_stream_clear(ptr);
    free(ptr);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ogg_page_checksum_set  (binary VA: 0x139de20)
// Original: ogg_page_checksum_set
// ----------------------------------------------------------------------------
void ogg_page_checksum_set(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;

  v1 = a1;
  if ( a1 != nullptr )
  {
    *(uint8_t *)(*a1 + 22) = 0;
    *(uint8_t *)(*a1 + 23) = 0;
    *(uint8_t *)(*a1 + 24) = 0;
    *(uint8_t *)(*a1 + 25) = 0;
    v2 = a1[1];
    if ( v2 <= 0 )
    {
      LOBYTE(v6) = 0;
      v12 = *a1;
      v4 = 0;
    }
    else
    {
      v12 = *a1;
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = *(uint8_t *)(*a1 + v3++);
        v4 = (v4 << 8) ^ dword_1D0ED00[HIBYTE(v4) ^ v5];
      }
      while ( v3 != v2 );
      v1 = a1;
      v6 = HIBYTE(v4);
    }
    if ( (int)v1[3] > 0 )
    {
      v7 = v1[2];
      v11 = v1;
      v8 = 0;
      v9 = v1[3];
      do
      {
        v10 = *(uint8_t *)(v7 + v8++);
        v4 = (v4 << 8) ^ dword_1D0ED00[HIBYTE(v4) ^ v10];
      }
      while ( v8 != v9 );
      v1 = v11;
      v6 = HIBYTE(v4);
    }
    *(uint8_t *)(v12 + 22) = v4;
    *(uint8_t *)(*v1 + 23) = BYTE1(v4);
    *(uint8_t *)(*v1 + 24) = BYTE2(v4);
    *(uint8_t *)(*v1 + 25) = v6;
  }
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_iovecin  (binary VA: 0x139df10)
// Original: ogg_stream_iovecin
// ----------------------------------------------------------------------------
int ogg_stream_iovecin(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int result;
  unsigned int v9;
  int v10;
  unsigned int v11;
  __m128i v12;
  int v13;
  __m128i v14;
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
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  size_t v34;
  bool v35;
  void *v36;
  void *v37;
  void *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;

  v6 = a2;
  v7 = ogg_stream_check((uint32_t *)a1);
  result = -1;
  if ( v7 != 0 )
    return result;
  result = 0;
  if ( a2 == 0 )
    return result;
  if ( a3 > 0 )
  {
    v9 = (unsigned int)(a3 - 1) >> 2;
    if ( (unsigned int)a3 > 6 && 4 * v9 != 0 )
    {
      v10 = a2;
      v11 = 0;
g4_m128_raw(v12) = 0;
      do
      {
        ++v11;
        v12 = _mm_add_epi32(v12, g4_m128_from<__m128i>(_mm_shuffle_ps(*(__m128 *)(v10 + 4), *(__m128 *)(v10 + 20), 136)));
        v10 += 32;
      }
      while ( v11 < v9 );
      v13 = 4 * v9;
      v14 = _mm_add_epi32(v12, _mm_srli_si128(v12, 8));
      v43 = _mm_cvtsi128_si32(_mm_add_epi32(v14, _mm_srli_si128(v14, 4)));
      if ( a3 == 4 * v9 )
      {
        v17 = v43;
LABEL_12:
        v42 = ((int)(v43 + ((uint64_t)(-2139062143LL * v17) >> 32)) >> 7) - (v43 >> 31);
        v41 = v42 + 1;
        goto LABEL_13;
      }
      v15 = v43;
      v16 = a3;
    }
    else
    {
      v13 = 0;
      v15 = 0;
      v16 = a3;
    }
    do
      v15 += *(uint32_t *)(a2 + 8 * v13++ + 4);
    while ( v16 > v13 );
    v43 = v15;
    v17 = v15;
    goto LABEL_12;
  }
  v41 = 1;
  v42 = 0;
  v43 = 0;
LABEL_13:
  v18 = *(uint32_t *)(a1 + 12);
  if ( v18 == 0 )
  {
    v19 = *(uint32_t *)(a1 + 4);
    if ( v19 > v43 + *(uint32_t *)(a1 + 8) )
      goto LABEL_15;
LABEL_29:
    v36 = realloc(*(void **)a1, v19 + v43 + 1024);
    if ( v36 != nullptr )
    {
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v36);
      v20 = *(uint32_t *)(a1 + 24);
      *(uint32_t *)(a1 + 4) += v43 + 1024;
      if ( v20 > *(uint32_t *)(a1 + 28) + v41 )
        goto LABEL_16;
LABEL_31:
      v37 = realloc(*(void **)(a1 + 16), 4 * (v20 + v41 + 32));
      if ( v37 != nullptr )
      {
        *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v37);
        v38 = realloc(*(void **)(a1 + 20), 8 * (*(uint32_t *)(a1 + 24) + v41) + 256);
        if ( v38 != nullptr )
        {
          *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v38);
          *(uint32_t *)(a1 + 24) += v42 + 33;
          goto LABEL_16;
        }
      }
    }
    ogg_stream_clear((void **)a1);
    return -1;
  }
  v33 = 0;
  v34 = *(uint32_t *)(a1 + 8) - v18;
  v35 = *(uint32_t *)(a1 + 8) == v18;
  *(uint32_t *)(a1 + 8) = v34;
  if ( !v35 )
  {
    memmove(*(void **)a1, (const void *)(*(uint32_t *)a1 + v18), v34);
    v33 = *(uint32_t *)(a1 + 8);
  }
  v19 = *(uint32_t *)(a1 + 4);
  *(uint32_t *)(a1 + 12) = 0;
  if ( v19 <= v43 + v33 )
    goto LABEL_29;
LABEL_15:
  v20 = *(uint32_t *)(a1 + 24);
  if ( v20 <= *(uint32_t *)(a1 + 28) + v41 )
    goto LABEL_31;
LABEL_16:
  if ( a3 > 0 )
  {
    v21 = *(uint32_t *)(a1 + 8);
    v22 = 0;
    do
    {
      v40 = v22;
      memcpy((void *)(*(uint32_t *)a1 + v21), *(const void **)v6, *(uint32_t *)(v6 + 4));
      v21 = *(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 8);
      *(uint32_t *)(a1 + 8) = v21;
      v22 = v40 + 1;
      v6 += 8;
    }
    while ( v40 + 1 != a3 );
  }
  v23 = 0;
  if ( v42 > 0 )
  {
    v39 = 0;
    do
    {
      v24 = *(uint32_t *)(a1 + 28) + v39;
      v25 = v39++;
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v24) = 255;
      v26 = *(uint32_t *)(a1 + 28) + v25;
      v27 = *(uint32_t *)(a1 + 20);
      v28 = *(uint32_t *)(a1 + 356);
      *(uint32_t *)(v27 + 8 * v26) = *(uint32_t *)(a1 + 352);
      *(uint32_t *)(v27 + 8 * v26 + 4) = v28;
    }
    while ( v39 != v42 );
    v23 = v39;
  }
  *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * (v23 + *(uint32_t *)(a1 + 28))) = v43 % 255;
  v29 = *(uint32_t *)(a1 + 28) + v23;
  v30 = *(uint32_t *)(a1 + 20);
  *(uint32_t *)(v30 + 8 * v29 + 4) = a6;
  *(uint32_t *)(v30 + 8 * v29) = a5;
  *(uint32_t *)(a1 + 352) = a5;
  v31 = *(uint32_t *)(a1 + 16);
  v32 = *(uint32_t *)(a1 + 28);
  *(uint32_t *)(a1 + 356) = a6;
  *(uint32_t *)(v31 + 4 * v32) |= 0x100u;
  *(uint32_t *)(a1 + 28) += v41;
  ++*(uint64_t *)(a1 + 344);
  result = 0;
  if ( a4 != 0 )
    *(uint32_t *)(a1 + 328) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_packetin  (binary VA: 0x139e2a0)
// Original: ogg_stream_packetin
// ----------------------------------------------------------------------------
int ogg_stream_packetin(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[2];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v6)) > _g4_s1 ? (40u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 40u);

  v2 = a2[4];
  v3 = a2[5];
  v6[0] = *a2;
  v5 = a2[3];
  v6[1] = a2[1];
  return ogg_stream_iovecin(a1, (int)(uintptr_t)(v6), 1, v5, v2, v3);
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_flush  (binary VA: 0x139e310)
// Original: ogg_stream_flush
// ----------------------------------------------------------------------------
int ogg_stream_flush(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int i;
  int v8;
  int v9;
  uint8_t *v10;
  int v11;
  unsigned int v12;
  unsigned int v14;
  char v15;
  char v16; // di
  int v17;
  char v18; // edx^2
  unsigned int v19;
  int16_t v20; // kr00_2
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  int v42;
  __m128i v43;
  int v44;
  unsigned int v45;
  int v46;
  int v47;
  char v48;
  int v49;
  int v50;
  char v51;
  int v52;
  int v53;
  int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;

  v2 = a1;
  v3 = a1[7];
  v4 = ogg_stream_check(a1);
  v5 = 0;
  if ( v4 == 0 )
  {
    v6 = 255;
    v5 = 0;
    if ( v3 <= 255 )
      v6 = v3;
    if ( v6 != 0 )
    {
      if ( a1[83] != 0 )
      {
        if ( v6 <= 0 )
        {
          v50 = 0;
          v49 = 0;
          v55 = 27;
          v51 = 0;
          v52 = -1;
          v53 = -1;
          v56 = 0;
          v10 = (uint8_t *)a1[4];
        }
        else
        {
          v52 = -1;
          v53 = -1;
          v54 = v6;
          for ( i = 0; i <= 4096; i += v8 )
          {
            v8 = *(uint8_t *)(a1[4] + 4 * v4);
            if ( v8 != 255 )
            {
              v9 = a1[5];
              v52 = *(uint32_t *)(v9 + 8 * v4);
              v53 = *(uint32_t *)(v9 + 8 * v4 + 4);
            }
            if ( ++v4 == v54 )
              break;
          }
          v56 = v4;
          v2 = a1;
          v51 = v4;
          v10 = (uint8_t *)a1[4];
          v55 = v4 + 27;
          v49 = 4 * v4;
          v50 = 8 * v4;
        }
      }
      else if ( v6 <= 0 )
      {
        v50 = 0;
        v49 = 0;
        v55 = 27;
        v51 = 0;
        v52 = 0;
        v53 = 0;
        v56 = 0;
        v10 = (uint8_t *)a1[4];
      }
      else
      {
        v10 = (uint8_t *)a1[4];
        if ( *v10 == 0xFF )
        {
          v14 = 0;
          do
          {
            if ( ++v14 == v6 )
            {
              v56 = v14;
              v51 = v14;
              v55 = v14 + 27;
              v49 = 4 * v14;
              v50 = 8 * v14;
              goto LABEL_22;
            }
          }
          while ( v10[4 * v14] == 0xFF );
          v57 = v14;
          v45 = v14 + 1;
          v51 = v45;
          v46 = v57 + 28;
          v56 = v45;
          v55 = v46;
          v49 = 4 * v45;
          v50 = 8 * v45;
        }
        else
        {
          v50 = 8;
          v49 = 4;
          v55 = 28;
          v51 = 1;
          v56 = 1;
        }
LABEL_22:
        v52 = 0;
        v53 = 0;
      }
      *((uint8_t *)v2 + 45) = 0;
      strcpy((char *)v2 + 40, "OggS");
      v15 = 0;
      v16 = 2;
      if ( (*(uint32_t *)v10 & 0x100) == 0 )
      {
        *((uint8_t *)v2 + 45) = 1;
        v16 = 3;
        v15 = 1;
      }
      if ( v2[83] == 0 )
      {
        v15 = v16;
        *((uint8_t *)v2 + 45) = v16;
      }
      if ( v2[82] != 0 && v2[7] == v56 )
        *((uint8_t *)v2 + 45) = v15 | 4;
      *((uint16_t *)v2 + 23) = v52;
      v2[83] = 1;
      *((uint16_t *)v2 + 24) = HIWORD(v52);
      *(uint32_t *)((char *)v2 + 50) = v53;
      v17 = v2[84];
      *((uint16_t *)v2 + 27) = v17;
      v18 = BYTE2(v17);
      *((uint8_t *)v2 + 57) = HIBYTE(v17);
      v19 = v2[85];
      *((uint8_t *)v2 + 56) = v18;
      if ( v19 == -1 )
      {
        LOBYTE(v21) = 0;
        v48 = 0;
        v47 = 1;
        v20 = 0;
      }
      else
      {
        v47 = v19 + 1;
        v20 = v19;
        v48 = BYTE2(v19);
        v21 = HIBYTE(v19);
      }
      *((uint8_t *)v2 + 61) = v21;
      v2[85] = v47;
      *((uint8_t *)v2 + 58) = v20;
      *((uint8_t *)v2 + 66) = v51;
      *((uint8_t *)v2 + 59) = HIBYTE(v20);
      *((uint8_t *)v2 + 62) = 0;
      *((uint8_t *)v2 + 63) = 0;
      *((uint8_t *)v2 + 60) = v48;
      *((uint8_t *)v2 + 64) = 0;
      *((uint8_t *)v2 + 65) = 0;
      if ( (int)v56 <= 0 )
      {
        v11 = 0;
      }
      else
      {
        if ( (char *)(intptr_t)(16 * (v56 >> 4)) != (char *)(0) && v56 > 0xF && (v10 > (uint8_t *)v2 + v56 + 67 || (char *)v2 + 67 > (char *)(uintptr_t)(&v10[4 * v56])) )
        {
          v22 = 0;
          v23 = 0;
g4_m128_raw(v24) = 0;
          do
          {
            v25 = *(__m128i *)&v10[4 * v22 + 16];
            v26 = *(__m128i *)&v10[4 * v22];
            v27 = _mm_unpacklo_epi16(v26, v25);
            v28 = _mm_unpackhi_epi16(v26, v25);
            v29 = *(__m128i *)&v10[4 * v22 + 48];
            v30 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v27, v28), _mm_unpackhi_epi16(v27, v28));
            v31 = *(__m128i *)&v10[4 * v22 + 32];
            v32 = _mm_unpacklo_epi16(v31, v29);
            v33 = _mm_unpackhi_epi16(v31, v29);
            v34 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v32, v33), _mm_unpackhi_epi16(v32, v33));
            ++v23;
            v35 = _mm_unpackhi_epi8(v30, v34);
            v36 = _mm_unpacklo_epi8(v30, v34);
            v37 = _mm_unpacklo_epi8(v36, v35);
            v38 = _mm_unpackhi_epi8(v36, v35);
            v39 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v37, v38), _mm_unpackhi_epi8(v37, v38));
            v40 = _mm_unpacklo_epi8(v39, g4_m128_from<__m128i>(0LL));
            *(__m128i *)((char *)&v2[v22 / 4 + 16] + 3) = v39;
            v41 = _mm_unpackhi_epi8(v39, g4_m128_from<__m128i>(0LL));
            v22 += 16;
            v24 = _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_add_epi32(v24, _mm_unpacklo_epi16(v40, g4_m128_from<__m128i>(0LL))),
                        _mm_unpackhi_epi16(v40, g4_m128_from<__m128i>(0LL))),
                      _mm_unpacklo_epi16(v41, g4_m128_from<__m128i>(0LL))),
                    _mm_unpackhi_epi16(v41, g4_m128_from<__m128i>(0LL)));
          }
          while ( v56 >> 4 > v23 );
          v42 = 16 * (v56 >> 4);
          v43 = _mm_add_epi32(v24, _mm_srli_si128(v24, 8));
          v11 = _mm_cvtsi128_si32(_mm_add_epi32(v43, _mm_srli_si128(v43, 4)));
          if ( v42 == v56 )
            goto LABEL_14;
        }
        else
        {
          v11 = 0;
          v42 = 0;
        }
        do
        {
          v44 = *(uint32_t *)&v10[4 * v42];
          *((uint8_t *)v2 + v42++ + 67) = v44;
          v11 += (uint8_t)v44;
        }
        while ( (int)v56 > v42 );
      }
LABEL_14:
      *a2 = (uint32_t)(uintptr_t)(v2 + 10);
      v2[81] = v55;
      a2[1] = v55;
      a2[2] = v2[3] + *v2;
      a2[3] = v11;
      v12 = v2[7] - v56;
      v2[7] = v12;
      memmove((void *)v2[4], (const void *)(v2[4] + v49), 4 * v12);
      memmove((void *)v2[5], (const void *)(v2[5] + v50), 8 * v2[7]);
      v2[3] += v11;
      ogg_page_checksum_set(a2);
      return 1;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_pageout  (binary VA: 0x139e910)
// Original: ogg_stream_pageout
// ----------------------------------------------------------------------------
int ogg_stream_pageout(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = ogg_stream_check(a1);
  v3 = 0;
  if ( v2 == 0 )
  {
    if ( a1[82] != 0 && a1[7] != 0 )
      return ogg_stream_flush(a1, a2);
    if ( a1[2] - a1[3] > 4096 )
      return ogg_stream_flush(a1, a2);
    v4 = a1[7];
    if ( v4 > 254 )
      return ogg_stream_flush(a1, a2);
    v3 = 0;
    if ( v4 != 0 && a1[83] == 0 )
      return ogg_stream_flush(a1, a2);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_eos  (binary VA: 0x139e9b0)
// Original: ogg_stream_eos
// ----------------------------------------------------------------------------
int ogg_stream_eos(uint32_t *a1)
{
  int v1;
  int v2;

  v1 = ogg_stream_check(a1);
  v2 = 1;
  if ( v1 == 0 )
    return a1[82];
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ogg_sync_init  (binary VA: 0x139ea00)
// Original: ogg_sync_init
// ----------------------------------------------------------------------------
int ogg_sync_init(int a1)
{
  uint16_t *v1;
  unsigned int v2;
  uint16_t *v3;

  v1 = (uint16_t *)a1;
  if ( a1 == 0 )
    return 0;
  *(uint32_t *)(a1 + 4) = -1;
  v2 = 28;
  if ( (a1 & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    LOBYTE(v2) = 27;
    v1 = (uint16_t *)(a1 + 1);
  }
  if ( ((uint8_t)(uintptr_t)(v1) & 2) != 0 )
  {
    *v1 = 0;
    v2 -= 2;
    ++v1;
  }
  memset(v1, 0, 4 * (v2 >> 2));
  v3 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
  {
    *v3++ = 0;
    if ( (v2 & 1) == 0 )
      return 0;
  }
  else if ( (v2 & 1) == 0 )
  {
    return 0;
  }
  *(uint8_t *)v3 = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ogg_sync_clear  (binary VA: 0x139ea80)
// Original: ogg_sync_clear
// ----------------------------------------------------------------------------
int ogg_sync_clear(void **a1)
{
  uint16_t *v1;
  unsigned int v2;
  uint16_t *v3;

  v1 = (uint16_t *)(a1);
  if ( a1 == nullptr )
    return 0;
  if ( *a1 != nullptr )
    free(*a1);
  v2 = 28;
  if ( ((uint8_t)(uintptr_t)(a1) & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    LOBYTE(v2) = 27;
    v1 = (uint16_t *)((char *)a1 + 1);
  }
  if ( ((uint8_t)(uintptr_t)(v1) & 2) != 0 )
  {
    *v1 = 0;
    v2 -= 2;
    ++v1;
  }
  memset(v1, 0, 4 * (v2 >> 2));
  v3 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
  {
    *v3++ = 0;
    if ( (v2 & 1) == 0 )
      return 0;
  }
  else if ( (v2 & 1) == 0 )
  {
    return 0;
  }
  *(uint8_t *)v3 = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ogg_sync_destroy  (binary VA: 0x139eb20)
// Original: ogg_sync_destroy
// ----------------------------------------------------------------------------
int ogg_sync_destroy(void **ptr)
{
  if ( ptr != nullptr )
  {
    ogg_sync_clear(ptr);
    free(ptr);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: ogg_sync_check  (binary VA: 0x139eb60)
// Original: ogg_sync_check
// ----------------------------------------------------------------------------
int ogg_sync_check(int a1)
{
  return *(int *)(a1 + 4) >> 31;
}

// ----------------------------------------------------------------------------
// Function: ogg_sync_buffer  (binary VA: 0x139eb70)
// Original: ogg_sync_buffer
// ----------------------------------------------------------------------------
char * ogg_sync_buffer(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  signed int n;
  size_t v6;
  char *v7;
  int v8;

  v2 = ogg_sync_check(a1);
  v3 = 0;
  if ( v2 == 0 )
  {
    v4 = *(uint32_t *)(a1 + 12);
    n = *(uint32_t *)(a1 + 8);
    if ( v4 != 0 )
    {
      n -= v4;
      *(uint32_t *)(a1 + 8) = n;
      if ( n > 0 )
      {
        memmove(*(void **)a1, (const void *)(*(uint32_t *)a1 + v4), n);
        n = *(uint32_t *)(a1 + 8);
      }
      *(uint32_t *)(a1 + 12) = 0;
    }
    if ( *(uint32_t *)(a1 + 4) - n >= a2 )
    {
      return (char *)(*(uint32_t *)a1 + n);
    }
    else
    {
      v6 = n + a2 + 4096;
      if ( *(uint32_t *)a1 != 0 )
        v7 = (char *)realloc(*(void **)a1, v6);
      else
        v7 = (char *)malloc(v6);
      if ( v7 != nullptr )
      {
        v8 = *(uint32_t *)(a1 + 8);
        *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
        *(uint32_t *)(a1 + 4) = v6;
        return &v7[v8];
      }
      else
      {
        ogg_sync_clear((void **)a1);
        return nullptr;
      }
    }
  }
  return (char *)v3;
}

// ----------------------------------------------------------------------------
// Function: ogg_sync_wrote  (binary VA: 0x139ec40)
// Original: ogg_sync_wrote
// ----------------------------------------------------------------------------
int ogg_sync_wrote(int a1, int a2)
{
  int v2;
  int v3;
  int v4;

  v2 = ogg_sync_check(a1);
  v3 = -1;
  if ( v2 == 0 )
  {
    v4 = *(uint32_t *)(a1 + 8) + a2;
    if ( v4 <= *(uint32_t *)(a1 + 4) )
    {
      *(uint32_t *)(a1 + 8) = v4;
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ogg_sync_pageseek  (binary VA: 0x139ec90)
// Original: ogg_sync_pageseek
// ----------------------------------------------------------------------------
int ogg_sync_pageseek(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int s1;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v19)) > _g4_s2 ? (28u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v20)) > _g4_s3 ? (32u + sizeof(_g4_t_v20)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);

  v2 = *a1;
  v3 = a1[3];
  v17 = a1[2];
  v4 = ogg_sync_check((int)(uintptr_t)(a1));
  v5 = 0;
  if ( v4 != 0 )
    return v5;
  s1 = v3 + v2;
  v18 = v17 - v3;
  v7 = a1[5];
  if ( v7 != 0 )
  {
    v8 = a1[6];
  }
  else
  {
    v5 = 0;
    if ( v18 <= 26 )
      return v5;
    if ( memcmp((const void *)s1, "OggS", 4u) != 0 )
      goto LABEL_14;
    v5 = 0;
    v7 = *(uint8_t *)(s1 + 26) + 27;
    if ( v18 < v7 )
      return v5;
    v10 = 0;
    v8 = a1[6];
    if ( *(uint8_t *)(s1 + 26) != 0 )
    {
      do
      {
        v11 = *(uint8_t *)(s1 + v10++ + 27);
        v8 += v11;
        a1[6] = v8;
      }
      while ( *(uint8_t *)(s1 + 26) > v10 );
    }
    a1[5] = v7;
  }
  v5 = 0;
  if ( v18 < v7 + v8 )
    return v5;
  v19 = *(uint32_t *)(s1 + 22);
  *(uint32_t *)(s1 + 22) = 0;
  v12 = a1[5];
  v20[0] = s1;
  v20[1] = v12;
  v20[2] = s1 + v12;
  v20[3] = a1[6];
  ogg_page_checksum_set(v20);
  if ( memcmp(&v19, (const void *)(s1 + 22), 4u) != 0 )
  {
    *(uint32_t *)(s1 + 22) = v19;
LABEL_14:
    a1[5] = 0;
    a1[6] = 0;
    v13 = (char *)memchr((const void *)(s1 + 1), 79, v18 - 1);
    v14 = *a1;
    if ( v13 == nullptr )
      v13 = (char *)(v14 + a1[2]);
    a1[3] = (int)(uintptr_t)(&v13[-v14]);
    return s1 - (uint32_t)(uintptr_t)(v13);
  }
  if ( a2 != nullptr )
  {
    v15 = *a1 + a1[3];
    *a2 = v15;
    a2[1] = a1[5];
    a2[2] = a1[5] + v15;
    a2[3] = a1[6];
  }
  v16 = a1[5];
  a1[4] = 0;
  v5 = a1[6] + v16;
  a1[5] = 0;
  a1[3] += v5;
  a1[6] = 0;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: ogg_sync_pageout  (binary VA: 0x139ee70)
// Original: ogg_sync_pageout
// ----------------------------------------------------------------------------
int ogg_sync_pageout(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = ogg_sync_check((int)(uintptr_t)(a1));
  v3 = 0;
  if ( v2 == 0 )
  {
    while ( 1 )
    {
      v4 = ogg_sync_pageseek(a1, a2);
      if ( v4 > 0 )
        return 1;
      if ( v4 == 0 )
        break;
      if ( a1[4] == 0 )
      {
        a1[4] = 1;
        return -1;
      }
    }
    return 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_pagein  (binary VA: 0x139ef00)
// Original: ogg_stream_pagein
// ----------------------------------------------------------------------------
int ogg_stream_pagein(void **a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  void **v8;
  uint8_t *v9;
  void *v10;
  size_t n;
  bool v12;
  int v13;
  int v14;
  char *v15;
  uint8_t *v16;
  int v17;
  int v18;
  void *v19;
  int v20;
  int i;
  int v22;
  int v23;
  void *v24;
  uint32_t *v25;
  uint32_t *v26;
  char *v27;
  int v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  uint8_t *v33;
  void *v34;
  signed int v35;
  char *v36;
  void *v37;
  void *v38;
  int v39;
  int v40;
  size_t v41;
  char *v42;
  int v43;
  void **v44;
  void **v45;
  void **v46;
  void **v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  size_t v53;
  size_t v54;
  int v55;
  int v56;
  void *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  uint8_t v62;
  char *src;
  int v64;
  int v65;
  void *v66;
  int v67;

  v59 = *a2;
  src = (char *)a2[2];
  v53 = a2[3];
  v48 = ogg_page_version((int)(uintptr_t)(a2));
  v64 = ogg_page_continued((int)(uintptr_t)(a2));
  v61 = ogg_page_bos((int)(uintptr_t)(a2));
  v65 = ogg_page_eos((int)(uintptr_t)(a2));
  v2 = ogg_page_granulepos((int)(uintptr_t)(a2));
  v4 = v3;
  v5 = v2;
  v55 = ogg_page_serialno((int)(uintptr_t)(a2));
  v60 = ogg_page_pageno((int)(uintptr_t)(a2));
  v6 = -1;
  v62 = *(uint8_t *)(v59 + 26);
  v7 = ogg_stream_check(a1);
  v8 = a1;
  if ( v7 != 0 )
    return v6;
  v9 = (uint8_t *)(a1[3]);
  v10 = a1[9];
  if ( v9 != nullptr )
  {
    n = (uint8_t *)a1[2] - v9;
    v12 = a1[2] == v9;
    a1[2] = (void *)n;
    if ( !v12 )
    {
      memmove(*a1, &v9[(uint32_t)(uintptr_t)(*a1)], n);
      v8 = a1;
    }
    v8[3] = nullptr;
  }
  if ( v10 != nullptr )
  {
    v33 = (uint8_t *)(v8[7]);
    if ( v33 != v10 )
    {
      v44 = v8;
      memmove(v8[4], (char *)v8[4] + 4 * (uint32_t)(uintptr_t)(v10), 4 * (v33 - (uint8_t *)v10));
      memmove(v44[5], (char *)v44[5] + 8 * (uint32_t)(uintptr_t)(v10), 8 * ((uint8_t *)v44[7] - (uint8_t *)v10));
      v8 = v44;
      v33 = (uint8_t *)(v44[7]);
    }
    v8[8] = (void *)((uint8_t *)v8[8] - (uint8_t *)v10);
    v8[7] = (void *)(v33 - (uint8_t *)v10);
    v8[9] = nullptr;
  }
  v6 = -1;
  if ( v8[84] != (void *)v55 || v48 > 0 )
    return v6;
  v56 = (int)(uintptr_t)(v8[6]);
  v13 = v62 + 1;
  if ( v56 <= (int)(uintptr_t)(v8[7]) + v13 )
  {
    v46 = v8;
    v37 = realloc(v8[4], 4 * (v13 + v56 + 32));
    v8 = v46;
    if ( v37 == nullptr
      || (v46[4] = v37, v38 = realloc(v46[5], 8 * ((uint32_t)(uintptr_t)(v46[6]) + v62 + 1) + 256), v8 = v46, v38 == nullptr) )
    {
      ogg_stream_clear(v8);
      return v6;
    }
    v46[5] = v38;
    v46[6] = (char *)v46[6] + v62 + 33;
  }
  v57 = v8[85];
  if ( v57 != (void *)v60 )
  {
    v14 = (int)(uintptr_t)(v8[8]);
    v49 = v14;
    v66 = v8[7];
    if ( v14 < (int)(uintptr_t)(v66) )
    {
      v67 = v5;
      v15 = (char *)v8[2];
      v16 = (uint8_t *)v8[4];
      do
      {
        v17 = v16[4 * v14++];
        v15 -= v17;
        v8[2] = v15;
      }
      while ( (void *)v14 != v66 );
      v5 = v67;
      v14 = v49;
    }
    v8[7] = (void *)v14;
    if ( v57 != (void *)-1 )
    {
      *((uint32_t *)v8[4] + v14) = 1024;
      v8[8] = (char *)v8[8] + 1;
      v8[7] = (void *)(v14 + 1);
    }
  }
  v50 = 0;
  if ( v64 != 0 )
  {
    v18 = (int)(uintptr_t)(v8[7]);
    if ( v18 <= 0 || *((uint32_t *)v8[4] + v18 - 1) == 1024 )
    {
      v61 = 0;
      v50 = 0;
      if ( v62 != 0 )
      {
        v39 = *(uint8_t *)(v59 + 27);
        src += v39;
        v53 -= v39;
        if ( v39 == 255 )
        {
          v58 = v5;
          v40 = 0;
          v41 = v53;
          v42 = src;
          while ( 1 )
          {
            if ( v40 == v62 - 1 )
            {
              src = v42;
              v50 = v40 + 1;
              v53 = v41;
              v5 = v58;
              goto LABEL_52;
            }
            v43 = *(uint8_t *)(v59 + v40 + 28);
            v42 += v43;
            v41 -= v43;
            if ( v43 != 255 )
              break;
            ++v40;
          }
          src = v42;
          v53 = v41;
          v5 = v58;
          v50 = v40 + 2;
        }
        else
        {
          v50 = 1;
        }
LABEL_52:
        v61 = 0;
        if ( v53 == 0 )
          goto LABEL_21;
        goto LABEL_39;
      }
    }
  }
  if ( v53 != 0 )
  {
LABEL_39:
    v34 = v8[2];
    v35 = (signed int)(uintptr_t)(v8[1]);
    if ( v35 <= (int)((int)(uintptr_t)(v34) + v53) )
    {
      v47 = v8;
      v36 = (char *)realloc(*v8, v53 + v35 + 1024);
      v8 = v47;
      if ( v36 == nullptr )
      {
        v6 = -1;
        ogg_stream_clear(v47);
        return v6;
      }
      *v47 = v36;
      v47[1] = (char *)v47[1] + v53 + 1024;
      v34 = v47[2];
    }
    else
    {
      v36 = (char *)*v8;
    }
    v45 = v8;
    memcpy(&v36[(uint32_t)(uintptr_t)(v34)], src, v53);
    v8 = v45;
    v45[2] = (char *)v45[2] + v53;
  }
LABEL_21:
  if ( v50 >= v62 )
    goto LABEL_31;
  v52 = v4;
  v19 = v8[7];
  v20 = v50 + 1;
  v54 = 0xFFFFFFFF;
  v51 = v5;
  for ( i = v61; ; i = 0 )
  {
    v23 = *(uint8_t *)(v59 + v20 + 26);
    *((uint32_t *)v8[4] + (uint32_t)(uintptr_t)(v19)) = v23;
    v24 = v8[7];
    v25 = (uint32_t *)(v8[5]);
    v25[2 * (uint32_t)(uintptr_t)(v24)] = -1;
    v25[2 * (uint32_t)(uintptr_t)(v24) + 1] = -1;
    if ( i != 0 )
    {
      v26 = (uint32_t *)((char *)v8[4] + 4 * (uint32_t)(uintptr_t)(v8[7]));
      *v26 |= 0x100u;
    }
    v27 = (char *)v8[7];
    if ( v23 == 255 )
      break;
    v22 = v20;
    v54 = (size_t)v8[7];
    ++v20;
    v19 = v27 + 1;
    v8[7] = v19;
    v8[8] = v19;
    if ( v62 <= v22 )
      goto LABEL_29;
LABEL_24:
    ;
  }
  v19 = v27 + 1;
  v28 = v20++;
  v8[7] = v19;
  if ( v62 > v28 )
    goto LABEL_24;
LABEL_29:
  if ( v54 != -1 )
  {
    v29 = (uint32_t *)(v8[5]);
    v29[2 * v54] = v51;
    v29[2 * v54 + 1] = v52;
  }
LABEL_31:
  if ( v65 != 0 )
  {
    v30 = (int)(uintptr_t)(v8[7]);
    v8[82] = &dword_0 + 1;
    if ( v30 > 0 )
    {
      v31 = (uint32_t *)((char *)v8[4] + 4 * v30 - 4);
      *v31 |= 0x200u;
    }
  }
  v6 = 0;
  v8[85] = (void *)(v60 + 1);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ogg_sync_reset  (binary VA: 0x139f470)
// Original: ogg_sync_reset
// ----------------------------------------------------------------------------
int ogg_sync_reset(uint32_t *a1)
{
  int v1;
  int v2;

  v1 = ogg_sync_check((int)(uintptr_t)(a1));
  v2 = -1;
  if ( v1 == 0 )
  {
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
    a1[5] = 0;
    a1[6] = 0;
    return 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_reset  (binary VA: 0x139f4d0)
// Original: ogg_stream_reset
// ----------------------------------------------------------------------------
int ogg_stream_reset(uint32_t *a1)
{
  int v1;
  int v2;

  v1 = ogg_stream_check(a1);
  v2 = -1;
  if ( v1 == 0 )
  {
    a1[2] = 0;
    a1[3] = 0;
    a1[7] = 0;
    a1[8] = 0;
    a1[9] = 0;
    a1[81] = 0;
    a1[82] = 0;
    a1[83] = 0;
    a1[85] = -1;
    a1[86] = 0;
    a1[87] = 0;
    a1[88] = 0;
    a1[89] = 0;
    return 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_reset_serialno  (binary VA: 0x139f580)
// Original: ogg_stream_reset_serialno
// ----------------------------------------------------------------------------
int ogg_stream_reset_serialno(uint32_t *a1, int a2)
{
  int v2;
  int v3;

  v2 = ogg_stream_check(a1);
  v3 = -1;
  if ( v2 == 0 )
  {
    ogg_stream_reset(a1);
    v3 = 0;
    a1[84] = a2;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_packetout  (binary VA: 0x139f5d0)
// Original: ogg_stream_packetout
// ----------------------------------------------------------------------------
int ogg_stream_packetout(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
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
  bool v16;

  v2 = a1;
  v3 = ogg_stream_check(a1);
  v4 = 0;
  if ( v3 == 0 )
  {
    v6 = a1[9];
    if ( v6 < a1[8] )
    {
      v7 = a1[4];
      v8 = *(uint32_t *)(v7 + 4 * v6);
      if ( (v8 & 0x400) != 0 )
      {
        v4 = -1;
        v16 = __CFADD__(a1[86]++, 1);
        a1[9] = v6 + 1;
        a1[87] += v16;
      }
      else
      {
        v9 = (uint8_t)v8;
        v10 = v8 & 0x200;
        if ( (uint8_t)v8 == 255 )
        {
          v11 = 255;
          do
          {
            ++v6;
            v12 = *(uint32_t *)(v7 + 4 * v6);
            if ( (v12 & 0x200) != 0 )
              v10 = 512;
            v11 += (uint8_t)v12;
          }
          while ( (uint8_t)v12 == 255 );
          v9 = v11;
          v2 = a1;
        }
        if ( a2 != nullptr )
        {
          a2[3] = v10;
          a2[2] = v8 & 0x100;
          *a2 = v2[3] + *v2;
          v13 = v2[86];
          a2[7] = v2[87];
          a2[6] = v13;
          v14 = v2[5];
          v15 = *(uint32_t *)(v14 + 8 * v6 + 4);
          a2[4] = *(uint32_t *)(v14 + 8 * v6);
          a2[5] = v15;
          a2[1] = v9;
        }
        v2[3] += v9;
        v2[9] = v6 + 1;
        v16 = __CFADD__(v2[86]++, 1);
        v4 = 1;
        v2[87] += v16;
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ogg_stream_packetpeek  (binary VA: 0x139f710)
// Original: ogg_stream_packetpeek
// ----------------------------------------------------------------------------
int ogg_stream_packetpeek(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  bool v14;
  int v15;
  int v16;

  v2 = a1;
  v3 = 0;
  if ( ogg_stream_check(a1) == 0 )
  {
    v5 = a1[9];
    if ( v5 < a1[8] )
    {
      v6 = a1[4];
      v7 = *(uint32_t *)(v6 + 4 * v5);
      if ( (v7 & 0x400) != 0 )
      {
        v3 = -1;
        v14 = __CFADD__(a1[86]++, 1);
        a1[9] = v5 + 1;
        a1[87] += v14;
      }
      else
      {
        v3 = 1;
        if ( a2 != nullptr )
        {
          v8 = *(uint32_t *)(v6 + 4 * v5) & 0x200;
          v15 = (uint8_t)v7;
          v16 = *(uint32_t *)(v6 + 4 * v5) & 0x100;
          if ( (uint8_t)v7 == 255 )
          {
            v9 = 255;
            do
            {
              ++v5;
              v10 = *(uint32_t *)(v6 + 4 * v5);
              if ( (v10 & 0x200) != 0 )
                v8 = 512;
              v9 += (uint8_t)v10;
            }
            while ( (uint8_t)v10 == 255 );
            v15 = v9;
            v2 = a1;
          }
          a2[3] = v8;
          a2[2] = v16;
          *a2 = v2[3] + *v2;
          v11 = v2[87];
          a2[6] = v2[86];
          a2[7] = v11;
          v3 = 1;
          v12 = (int *)(v2[5] + 8 * v5);
          v13 = *v12;
          a2[5] = v12[1];
          a2[4] = v13;
          a2[1] = v15;
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ogg_packet_clear  (binary VA: 0x139f840)
// Original: ogg_packet_clear
// ----------------------------------------------------------------------------
int ogg_packet_clear(void **a1)
{
  uint16_t *v1;
  unsigned int v2;
  int result;
  uint16_t *v4;

  v1 = (uint16_t *)(a1);
  free(*a1);
  v2 = 32;
  if ( ((uint8_t)(uintptr_t)(a1) & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    v1 = (uint16_t *)((char *)a1 + 1);
    LOBYTE(v2) = 31;
    if ( (((unsigned int)(uintptr_t)(a1) + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(a1) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v1 = 0;
  v2 -= 2;
  ++v1;
LABEL_3:
  result = 0;
  memset(v1, 0, 4 * (v2 >> 2));
  v4 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v4++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  return result;
}


