#include "Core/Utils/DecompTypes.h"
#include "libpng_image.h"

// ----------------------------------------------------------------------------
// Function: png_set_sig_bytes  (binary VA: 0xf9c3a0)
// Original: png_set_sig_bytes
// ----------------------------------------------------------------------------
void png_set_sig_bytes(int a1, int a2)
{
  char v2;

  if ( a1 != 0 )
  {
    if ( a2 > 8 )
      png_error(a1, "Too many bytes for PNG signature");
    v2 = 0;
    if ( a2 >= 0 )
      v2 = a2;
    *(uint8_t *)(a1 + 280) = v2;
  }
}

// ----------------------------------------------------------------------------
// Function: png_sig_cmp  (binary VA: 0xf9c410)
// Original: png_sig_cmp
// ----------------------------------------------------------------------------
int png_sig_cmp(int a1, unsigned int a2, size_t n)
{
  size_t v3;
  int result;
  uint8_t s2[16];

  v3 = n;
  s2[0] = -119;
  s2[1] = 80;
  s2[2] = 78;
  s2[3] = 71;
  s2[4] = 13;
  s2[5] = 10;
  s2[6] = 26;
  s2[7] = 10;
  if ( n > 8 )
  {
    v3 = 8;
  }
  else
  {
    result = -1;
    if ( n == 0 )
      return result;
  }
  result = -1;
  if ( a2 <= 7 )
  {
    if ( v3 + a2 > 8 )
      v3 = 8 - a2;
    return memcmp((const void *)(a1 + a2), &s2[a2], v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_zalloc  (binary VA: 0xf9c4b0)
// Original: png_zalloc
// ----------------------------------------------------------------------------
int png_zalloc(int a1, unsigned int a2, unsigned int a3)
{
  int v3;
  int result;

  v3 = *(uint32_t *)(a1 + 88);
  if ( 0xFFFFFFFF / a3 < a2 )
  {
    png_warning(a1, "Potential overflow in png_zalloc()");
    return 0;
  }
  else
  {
    *(uint32_t *)(a1 + 88) = v3 | 0x100000;
    result = (int)(uintptr_t)(png_malloc(a1, a2 * a3));
    *(uint32_t *)(a1 + 88) = v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_zfree  (binary VA: 0xf9c540)
// Original: png_zfree
// ----------------------------------------------------------------------------
int png_zfree(int a1, void *a2)
{
  { png_free(a1, a2); return 0; }
}

// ----------------------------------------------------------------------------
// Function: png_reset_crc  (binary VA: 0xf9c570)
// Original: png_reset_crc
// ----------------------------------------------------------------------------
int png_reset_crc(int a1)
{
  int result;

  result = crc32(0, 0, 0);
  *(uint32_t *)(a1 + 252) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_calculate_crc  (binary VA: 0xf9c5b0)
// Original: png_calculate_crc
// ----------------------------------------------------------------------------
void png_calculate_crc(int a1, int a2, int a3)
{
  if ( (*(uint8_t *)(a1 + 264) & 0x20) != 0 )
  {
    if ( (*(uint32_t *)(a1 + 88) & 0x300) == 0x300 )
      return;
  }
  else if ( (*(uint8_t *)(a1 + 89) & 8) != 0 )
  {
    return;
  }
  *(uint32_t *)(a1 + 252) = crc32(*(uint32_t *)(a1 + 252), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: png_info_init_3  (binary VA: 0xf9c630)
// Original: png_info_init_3
// ----------------------------------------------------------------------------
void png_info_init_3(void **a1, unsigned int a2)
{
  uint8_t *v2;
  unsigned int v3;
  uint8_t *v4;

  v2 = (uint8_t *)(*a1);
  if ( *a1 != nullptr )
  {
    if ( a2 <= 0x11F )
    {
      png_destroy_struct(*a1);
      v2 = (uint8_t *)png_create_struct(2);
      *a1 = v2;
    }
    v3 = 288;
    if ( ((uint8_t)(uintptr_t)v2 & 1) != 0 )
    {
      *v2 = 0;
      LOBYTE(v3) = 31;
      ++v2;
    }
    if ( ((uint8_t)(uintptr_t)v2 & 2) != 0 )
    {
      *(uint16_t *)v2 = 0;
      v3 -= 2;
      v2 += 2;
    }
    memset(v2, 0, 4 * (v3 >> 2));
    v4 = &v2[4 * (v3 >> 2)];
    if ( (v3 & 2) == 0 )
    {
      if ( (v3 & 1) == 0 )
        return;
LABEL_11:
      *v4 = 0;
      return;
    }
    *(uint16_t *)v4 = 0;
    v4 += 2;
    if ( (v3 & 1) != 0 )
      goto LABEL_11;
  }
}

// ----------------------------------------------------------------------------
// Function: png_create_info_struct  (binary VA: 0xf9c6f0)
// Original: png_create_info_struct
// ----------------------------------------------------------------------------
void * png_create_info_struct(int a1)
{
  int v1;
  typedef void *_g4_t_struct_2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_struct_2)) > _g4_s0 ? (12u + sizeof(_g4_t_struct_2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_struct_2 &struct_2 = *reinterpret_cast<_g4_t_struct_2 *>(_g4_sf + 12u);

  v1 = 0;
  if ( a1 != 0 )
  {
    struct_2 = (void *)png_create_struct_2(2, *(uint32_t *)(a1 + 556), *(uint32_t *)(a1 + 552));
    if ( struct_2 != nullptr )
    {
      png_info_init_3(&struct_2, 0x120u);
      return struct_2;
    }
  }
  return (void *)v1;
}

// ----------------------------------------------------------------------------
// Function: png_data_freer  (binary VA: 0xf9c760)
// Original: png_data_freer
// ----------------------------------------------------------------------------
int png_data_freer(int a1, int a2, int a3, int a4)
{
  int result;

  result = a2;
  if ( a2 != 0 && a1 != 0 )
  {
    if ( a3 == 1 )
    {
      *(uint32_t *)(a2 + 184) |= a4;
    }
    else if ( a3 == 2 )
    {
      *(uint32_t *)(a2 + 184) &= ~a4;
    }
    else
    {
      return png_warning(a1, "Unknown freer parameter in png_data_freer");
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_free_data  (binary VA: 0xf9c7f0)
// Original: png_free_data
// ----------------------------------------------------------------------------
void png_free_data(int a1, uint32_t *a2, int a3, int a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  void *v9;
  char v10;
  int v11;
  int v12;
  int v13;
  void **v14;
  int v15;
  uint32_t *v16;
  int v17;
  void **v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;

  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( a2 == nullptr || a1 == 0 )
    return;
  v7 = a2[46];
  if ( ((uint16_t)a3 & v7 & 0x4000) != 0 )
  {
    if ( a4 == -1 )
    {
      if ( (int)a2[12] > 0 )
      {
        v26 = 0;
        do
        {
          v31 = v26++;
          png_free_data(a1, a2, 0x4000, v31);
        }
        while ( a2[12] > v26 );
        v4 = a2;
        v5 = a1;
        v6 = a3;
      }
      png_free(v5, (void *)v4[14]);
      v4[14] = 0;
      v4[12] = 0;
      v7 = v4[46];
    }
    else
    {
      v8 = a2[14];
      if ( v8 != 0 )
      {
        v9 = *(void **)(v8 + 28 * a4 + 4);
        if ( v9 != nullptr )
        {
          png_free(a1, v9);
          *(uint32_t *)(a2[14] + 28 * a4 + 4) = 0;
          v7 = a2[46];
        }
      }
    }
  }
  if ( ((uint16_t)v7 & v6 & 0x2000) == 0 )
  {
    v10 = v6 & v7;
    if ( ((uint16_t)v6 & (uint16_t)v7 & 0x100) == 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  png_free(v5, (void *)v4[19]);
  v7 = v4[46];
  v4[2] &= ~0x10u;
  v4[19] = 0;
  v10 = v6 & v7;
  if ( ((uint16_t)v6 & (uint16_t)v7 & 0x100) != 0 )
LABEL_10:
    v4[2] &= ~0x4000u;
LABEL_11:
  if ( (v10 & 0x80) == 0 )
  {
    if ( ((uint8_t)v7 & v6 & 0x10) == 0 )
      goto LABEL_13;
LABEL_51:
    png_free(v5, (void *)v4[49]);
    png_free(v5, (void *)v4[50]);
    v22 = v4[46];
    v4[2] &= ~0x1000u;
    v4[49] = 0;
    v4[50] = 0;
    if ( ((uint8_t)v22 & v6 & 0x20) == 0 )
      goto LABEL_17;
    goto LABEL_14;
  }
  png_free(v5, (void *)v4[40]);
  png_free(v5, (void *)v4[43]);
  v18 = (void **)v4[44];
  v4[40] = 0;
  v4[43] = 0;
  if ( v18 != nullptr )
  {
    if ( *((uint8_t *)v4 + 181) != 0 )
    {
      v35 = v6;
      v19 = v5;
      v20 = v4;
      v21 = 0;
      while ( 1 )
      {
        png_free(v19, v18[v21]);
        *(uint32_t *)(v20[44] + 4 * v21++) = 0;
        if ( *((uint8_t *)v20 + 181) <= v21 )
          break;
        v18 = (void **)v20[44];
      }
      v4 = v20;
      v5 = v19;
      v6 = v35;
      v18 = (void **)v4[44];
    }
    png_free(v5, v18);
    v4[44] = 0;
  }
  v7 = v4[46];
  v4[2] &= ~0x400u;
  if ( ((uint8_t)v7 & v6 & 0x10) != 0 )
    goto LABEL_51;
LABEL_13:
  if ( ((uint8_t)v7 & v6 & 0x20) == 0 )
    goto LABEL_17;
LABEL_14:
  if ( a4 == -1 )
  {
    if ( v4[54] != 0 )
    {
      if ( (int)v4[54] > 0 )
      {
        v37 = v6;
        v27 = v5;
        v28 = v4;
        v29 = 0;
        do
        {
          v32 = v29++;
          png_free_data(v27, v28, 32, v32);
        }
        while ( v28[54] > v29 );
        v4 = v28;
        v5 = v27;
        v6 = v37;
      }
      png_free(v5, (void *)v4[53]);
      v4[53] = 0;
      v4[54] = 0;
    }
    v4[2] &= ~0x2000u;
  }
  else
  {
    v11 = v4[53];
    if ( v11 != 0 )
    {
      v33 = 16 * a4;
      png_free(v5, *(void **)(v11 + 16 * a4));
      png_free(v5, *(void **)(v4[53] + 16 * a4 + 8));
      *(uint32_t *)(v4[53] + v33) = 0;
      *(uint32_t *)(v4[53] + v33 + 8) = 0;
    }
  }
LABEL_17:
  if ( *(uint32_t *)(v5 + 604) != 0 )
  {
    png_free(v5, *(void **)(v5 + 604));
    *(uint32_t *)(v5 + 604) = 0;
  }
  v12 = v4[46];
  if ( ((uint16_t)v6 & v12 & 0x200) != 0 )
  {
    if ( a4 == -1 )
    {
      if ( v4[48] != 0 )
      {
        if ( (int)v4[48] > 0 )
        {
          v36 = v6;
          v23 = v5;
          v24 = v4;
          v25 = 0;
          do
          {
            v30 = v25++;
            png_free_data(v23, v24, 512, v30);
          }
          while ( v24[48] > v25 );
          v4 = v24;
          v5 = v23;
          v6 = v36;
        }
        png_free(v5, (void *)v4[47]);
        v4[47] = 0;
        v4[48] = 0;
        v12 = v4[46];
      }
    }
    else
    {
      v13 = v4[47];
      if ( v13 != 0 )
      {
        png_free(v5, *(void **)(v13 + 20 * a4 + 8));
        *(uint32_t *)(v4[47] + 20 * a4 + 8) = 0;
        v12 = v4[46];
      }
    }
  }
  if ( ((uint8_t)v12 & v6 & 8) == 0 )
  {
    if ( ((uint16_t)v12 & v6 & 0x1000) == 0 )
      goto LABEL_25;
LABEL_39:
    png_zfree(v5, (void *)v4[4]);
    v12 = v4[46];
    v4[2] &= ~8u;
    v4[4] = 0;
    *((uint16_t *)v4 + 10) = 0;
    if ( ((uint8_t)v12 & v6 & 0x40) != 0 )
      goto LABEL_26;
    goto LABEL_34;
  }
  png_free(v5, (void *)v4[31]);
  v12 = v4[46];
  v4[2] &= ~0x40u;
  v4[31] = 0;
  if ( ((uint16_t)v12 & v6 & 0x1000) != 0 )
    goto LABEL_39;
LABEL_25:
  if ( ((uint8_t)v12 & v6 & 0x40) != 0 )
  {
LABEL_26:
    v14 = (void **)v4[62];
    if ( v14 != nullptr )
    {
      if ( (int)v4[1] > 0 )
      {
        v34 = v6;
        v15 = v5;
        v16 = v4;
        v17 = 0;
        while ( 1 )
        {
          png_free(v15, v14[v17]);
          *(uint32_t *)(v16[62] + 4 * v17++) = 0;
          if ( v16[1] <= v17 )
            break;
          v14 = (void **)v16[62];
        }
        v4 = v16;
        v5 = v15;
        v6 = v34;
        v14 = (void **)v4[62];
      }
      png_free(v5, v14);
      v4[62] = 0;
      v12 = v4[46];
    }
    v4[2] &= ~0x8000u;
  }
LABEL_34:
  if ( a4 != -1 )
    v6 &= 0xFFFFBDDF;
  v4[46] = v12 & ~v6;
}

// ----------------------------------------------------------------------------
// Function: png_info_destroy  (binary VA: 0xf9cd90)
// Original: png_info_destroy
// ----------------------------------------------------------------------------
void png_info_destroy(int a1, uint32_t *a2)
{
  png_free_data(a1, a2, 0x7FFF, -1);
  if ( *(uint32_t *)(a1 + 524) != 0 )
  {
    png_free(a1, *(void **)(a1 + 528));
    *(uint32_t *)(a1 + 528) = 0;
    *(uint32_t *)(a1 + 524) = 0;
  }
  png_info_init_3((void **)&a2, 0x120u);
}

// ----------------------------------------------------------------------------
// Function: png_destroy_info_struct  (binary VA: 0xf9ce20)
// Original: png_destroy_info_struct
// ----------------------------------------------------------------------------
int png_destroy_info_struct(int a1, uint32_t **a2)
{
  void *v2;
  int result;

  if ( a1 != 0 && a2 != nullptr )
  {
    v2 = *a2;
    if ( *a2 != nullptr )
    {
      png_info_destroy(a1, *a2);
      png_destroy_struct_2(v2, *(uint32_t *)(a1 + 560), *(uint32_t *)(a1 + 552));
      *a2 = nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_io_ptr  (binary VA: 0xf9cea0)
// Original: png_get_io_ptr
// ----------------------------------------------------------------------------
int png_get_io_ptr(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 64);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_init_io  (binary VA: 0xf9cec0)
// Original: png_init_io
// ----------------------------------------------------------------------------
int png_init_io(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 64) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_convert_to_rfc1123  (binary VA: 0xf9cee0)
// Original: png_convert_to_rfc1123
// ----------------------------------------------------------------------------
int png_convert_to_rfc1123(int a1, uint16_t *a2)
{
  char *s;
  int16_t v3;

  if ( a1 == 0 )
    return 0;
  s = *(char **)(a1 + 508);
  if ( s == nullptr )
  {
    s = (char *)png_malloc(a1, 29);
    *(uint32_t *)(a1 + 508) = (uint32_t)(uintptr_t)(s);
  }
  v3 = (uint16_t)(13 * *((uint8_t *)a2 + 6)) >> 8;
  snprintf(
    s,
    0x1Du,
    "%d %s %d %02d:%02d:%02d +0000",
    *((uint8_t *)a2 + 3) & 0x1F,
    &off_1CBD9A0 + (*((uint8_t *)a2 + 2) - 1) % 12,
    *a2,
    *((uint8_t *)a2 + 4) % 0x18u,
    (uint8_t)(*((uint8_t *)a2 + 5) + 4 * (*((uint8_t *)a2 + 5) / 0x3Cu) - ((*((uint8_t *)a2 + 5) / 0x3Cu) << 6)),
    (uint8_t)(*((uint8_t *)a2 + 6)
                    - 61 * ((uint8_t)(v3 + ((uint8_t)(*((uint8_t *)a2 + 6) - v3) >> 1)) >> 5)));
  return *(uint32_t *)(a1 + 508);
}

// ----------------------------------------------------------------------------
// Function: png_get_copyright  (binary VA: 0xf9d020)
// Original: png_get_copyright
// ----------------------------------------------------------------------------
const char * png_get_copyright()
{
  return "\n"
         "libpng version 1.4.4 - September 23, 2010\n"
         "Copyright (c) 1998-2010 Glenn Randers-Pehrson\n"
         "Copyright (c) 1996-1997 Andreas Dilger\n"
         "Copyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.\n";
}

// ----------------------------------------------------------------------------
// Function: png_get_libpng_ver  (binary VA: 0xf9d040)
// Original: png_get_libpng_ver
// ----------------------------------------------------------------------------
const char * png_get_libpng_ver()
{
  return "1.4.4";
}

// ----------------------------------------------------------------------------
// Function: png_get_header_ver  (binary VA: 0xf9d060)
// Original: png_get_header_ver
// ----------------------------------------------------------------------------
const char * png_get_header_ver()
{
  return "1.4.4";
}

// ----------------------------------------------------------------------------
// Function: png_get_header_version  (binary VA: 0xf9d080)
// Original: png_get_header_version
// ----------------------------------------------------------------------------
const char * png_get_header_version()
{
  return " libpng version 1.4.4 - September 23, 2010\n\n";
}

// ----------------------------------------------------------------------------
// Function: png_handle_as_unknown  (binary VA: 0xf9d0a0)
// Original: png_handle_as_unknown
// ----------------------------------------------------------------------------
int png_handle_as_unknown(int a1, void *s1)
{
  int v2;
  int result;
  uint8_t *s2;

  if ( s1 == nullptr || a1 == 0 )
    return 0;
  v2 = *(uint32_t *)(a1 + 524);
  result = 0;
  if ( v2 > 0 )
  {
    for ( s2 = (uint8_t *)(*(uint32_t *)(a1 + 528) + 5 * v2 - 5); memcmp(s1, s2, 4u) != 0; s2 -= 5 )
    {
      if ( --v2 == 0 )
        return 0;
    }
    return s2[4];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_reset_zstream  (binary VA: 0xf9d120)
// Original: png_reset_zstream
// ----------------------------------------------------------------------------
int png_reset_zstream(int a1)
{
  if ( a1 != 0 )
    return inflateReset(a1 + 96);
  else
    return -2;
}

// ----------------------------------------------------------------------------
// Function: png_access_version_number  (binary VA: 0xf9d160)
// Original: png_access_version_number
// ----------------------------------------------------------------------------
int png_access_version_number()
{
  return 10404;
}

// ----------------------------------------------------------------------------
// Function: png_64bit_product  (binary VA: 0xf9d170)
// Original: png_64bit_product
// ----------------------------------------------------------------------------
unsigned int png_64bit_product(unsigned int a1, unsigned int a2, uint32_t *a3, unsigned int *a4)
{
  unsigned int result;

  result = (uint16_t)(a2 * a1)
         | ((HIWORD(a1) * (uint16_t)a2
           + HIWORD(a2) * (uint16_t)a1
           + (((uint16_t)a2 * (unsigned int)(uint16_t)a1) >> 16)) << 16);
  *a3 = ((HIWORD(a1) * (uint16_t)a2
        + HIWORD(a2) * (uint16_t)a1
        + (((uint16_t)a2 * (unsigned int)(uint16_t)a1) >> 16)) >> 16)
      + HIWORD(a1) * HIWORD(a2);
  *a4 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_check_cHRM_fixed  (binary VA: 0xf9d1f0)
// Original: png_check_cHRM_fixed
// ----------------------------------------------------------------------------
int png_check_cHRM_fixed(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int result;
  int v10;
  typedef int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef unsigned int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v14)) > _g4_s3 ? (40u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v15)) > _g4_s4 ? (44u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  result = 0;
  if ( a1 != 0 )
  {
    if ( a3 <= 0 || a2 < 0 || a5 < 0 || a4 < 0 || a7 < 0 || a6 < 0 || a9 < 0 || (v10 = 1, a8 < 0) )
    {
      png_warning(a1, "Ignoring attempt to set negative chromaticity value");
      v10 = 0;
    }
    if ( a2 > 100000 - a3 )
    {
      png_warning(a1, "Invalid cHRM white point");
      v10 = 0;
    }
    if ( a4 > 100000 - a5 )
    {
      png_warning(a1, "Invalid cHRM red point");
      v10 = 0;
    }
    if ( a6 > 100000 - a7 )
    {
      png_warning(a1, "Invalid cHRM green point");
      v10 = 0;
    }
    if ( a8 > 100000 - a9 )
    {
      png_warning(a1, "Invalid cHRM blue point");
      v10 = 0;
    }
    v11 = v10;
    png_64bit_product(a6 - a4, a9 - a5, &v14, &v12);
    png_64bit_product(a7 - a5, a8 - a4, &v15, &v13);
    result = v11;
    if ( v14 == v15 && v12 == v13 )
    {
      png_warning(a1, "Ignoring attempt to set cHRM RGB triangle with zero area");
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_check_IHDR  (binary VA: 0xf9d3f0)
// Original: png_check_IHDR
// ----------------------------------------------------------------------------
int png_check_IHDR(int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, int a8)
{
  int result;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;

  result = 0;
  v9 = a3;
  if ( a2 == 0 )
  {
    png_warning(a1, "Image width is zero in IHDR");
    result = 1;
    v9 = a3;
  }
  if ( v9 != 0 )
  {
    if ( (unsigned int)a2 > 0xF4240 )
      goto LABEL_48;
  }
  else
  {
    png_warning(a1, "Image height is zero in IHDR");
    result = 1;
    v9 = 0;
    if ( (unsigned int)a2 > 0xF4240 )
    {
LABEL_48:
      v11 = v9;
      png_warning(a1, "Image width exceeds user limit in IHDR");
      v9 = v11;
      result = 1;
      if ( v11 > 0xF4240 )
        goto LABEL_49;
      goto LABEL_7;
    }
  }
  if ( *(uint32_t *)(a1 + 584) < (unsigned int)a2 )
    goto LABEL_48;
  if ( (unsigned int)v9 <= 0xF4240 )
  {
LABEL_7:
    if ( *(uint32_t *)(a1 + 588) >= (unsigned int)v9 )
    {
      if ( a2 >= 0 )
        goto LABEL_9;
LABEL_50:
      v13 = v9;
      png_warning(a1, "Invalid image width in IHDR");
      result = 1;
      if ( v13 >= 0 )
        goto LABEL_10;
      goto LABEL_51;
    }
  }
LABEL_49:
  v12 = v9;
  png_warning(a1, "Image height exceeds user limit in IHDR");
  result = 1;
  v9 = v12;
  if ( a2 < 0 )
    goto LABEL_50;
LABEL_9:
  if ( v9 < 0 )
  {
LABEL_51:
    png_warning(a1, "Invalid image height in IHDR");
    result = 1;
  }
LABEL_10:
  if ( (unsigned int)a2 > 0x1FFFFF7E )
  {
    v10 = result;
    png_warning(a1, "Width is too large for libpng to process pixels");
    result = v10;
  }
  if ( (unsigned int)(a4 - 1) > 1 && a4 != 4 && a4 != 16 && a4 != 8 )
  {
    png_warning(a1, "Invalid bit depth in IHDR");
    result = 1;
  }
  if ( a5 == 1 || a5 > 6 || a5 == 5 )
  {
    png_warning(a1, "Invalid color type in IHDR");
    result = 1;
  }
  else if ( a5 == 3 )
  {
    if ( a4 > 8 )
    {
LABEL_19:
      png_warning(a1, "Invalid color type/bit depth combination in IHDR");
      result = 1;
      goto LABEL_20;
    }
    goto LABEL_40;
  }
  if ( a5 == 4 )
    goto LABEL_18;
LABEL_40:
  if ( a5 == 2 || a5 == 6 )
  {
LABEL_18:
    if ( a4 > 7 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_20:
  if ( a6 > 1 )
  {
    png_warning(a1, "Unknown interlace method in IHDR");
    result = 1;
  }
  if ( a7 != 0 )
  {
    png_warning(a1, "Unknown compression method in IHDR");
    result = 1;
  }
  if ( (*(uint8_t *)(a1 + 85) & 0x10) != 0 && *(uint32_t *)(a1 + 540) != 0 )
  {
    v14 = result;
    png_warning(a1, "MNG features are not allowed in a PNG datastream");
    result = v14;
  }
  if ( a8 != 0
    && (a8 != 64 || (*(uint8_t *)(a1 + 540) & 4) == 0 || (*(uint8_t *)(a1 + 85) & 0x10) != 0 || a5 != 6 && a5 != 2) )
  {
    png_warning(a1, "Unknown filter method in IHDR");
    if ( (*(uint8_t *)(a1 + 85) & 0x10) != 0 )
      png_warning(a1, "Invalid filter method in IHDR");
LABEL_33:
    png_error(a1, "Invalid IHDR data");
  }
  if ( result == 1 )
    goto LABEL_33;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_error  (binary VA: 0xf9d790)
// Original: png_error
// ----------------------------------------------------------------------------
void png_error(int a1, int a2)
{
  void (*v2)(int, int);
  void (*v3)(int, int);

  if ( a1 != 0 )
  {
    v2 = *(void (**)(int, int))(a1 + 44);
    if ( v2 != nullptr )
      v2(a1, a2);
    fprintf(stderr, "libpng error: %s", a2);
    fputc(10, stderr);
    v3 = *(void (**)(int, int))(a1 + 40);
    if ( v3 != nullptr )
      v3(a1, 1);
  }
  else
  {
    fprintf(stderr, "libpng error: %s", a2);
    fputc(10, stderr);
  }
  abort();
}

// ----------------------------------------------------------------------------
// Function: png_warning  (binary VA: 0xf9d850)
// Original: png_warning
// ----------------------------------------------------------------------------
int png_warning(int a1, uint8_t *a2)
{
  uint8_t *v2;
  int (*v3)(int, uint8_t *);
  uint8_t *v5;
  int v6;

  v2 = a2;
  if ( a1 != 0 )
  {
    if ( *a2 == 35 )
    {
      v5 = a2 + 1;
      v6 = 1;
      while ( *v5 != 32 )
      {
        ++v6;
        ++v5;
        if ( v6 == 15 )
        {
          v2 = a2 + 15;
          goto LABEL_3;
        }
      }
      v2 = v5;
    }
LABEL_3:
    v3 = *(int (**)(int, uint8_t *))(a1 + 48);
    if ( v3 != nullptr )
      return v3(a1, v2);
  }
  fprintf(stderr, "libpng warning: %s", v2);
  return fputc(10, stderr);
}

// ----------------------------------------------------------------------------
// Function: png_chunk_error  (binary VA: 0xf9d900)
// Original: png_chunk_error
// ----------------------------------------------------------------------------
void png_chunk_error(uint8_t *a1, uint32_t *a2)
{
  unsigned int v2;
  unsigned int v3;
  char v4;
  unsigned int v5;
  int v6;
  char v7; // si
  char v8;
  int v9;
  int v10;
  char *v11;
  char v12;
  char v13; // si
  char v14;
  char v15;
  char v16; // si
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef uint8_t _g4_t_v23[107];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v20)) > _g4_s3 ? (30u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v21)) > _g4_s4 ? (31u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v22)) > _g4_s5 ? (32u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v23)) > _g4_s6 ? (33u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 30u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 31u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 33u);

  if ( a1 == nullptr )
    png_error(0, (int)(uintptr_t)(a2));
  v2 = a1[264];
  if ( v2 - 91 <= 5 || v2 - 65 > 0x39 )
  {
    v20 = 91;
    v23[0] = 93;
    v3 = a1[265];
    v17 = 4;
    v21 = byte_1CBD9D0[v2 >> 4];
    v22 = byte_1CBD9D0[v2 & 0xF];
    if ( v3 - 91 <= 5 )
      goto LABEL_15;
  }
  else
  {
    v3 = a1[265];
    v20 = a1[264];
    v17 = 1;
    if ( v3 - 91 <= 5 )
      goto LABEL_15;
  }
  if ( v3 - 65 <= 0x39 )
  {
    v4 = v3;
    v5 = a1[266];
    *(&v20 + v17) = v4;
    v18 = v17 + 1;
    if ( v5 - 91 <= 5 )
      goto LABEL_16;
    goto LABEL_7;
  }
LABEL_15:
  *(&v20 + v17) = 91;
  v12 = byte_1CBD9D0[v3 >> 4];
  v13 = byte_1CBD9D0[v3 & 0xF];
  *(&v21 + v17) = v12;
  v14 = v13;
  v5 = a1[266];
  v23[v17 - 1] = v14;
  v23[v17] = 93;
  v18 = v17 + 4;
  if ( v5 - 91 <= 5 )
    goto LABEL_16;
LABEL_7:
  if ( v5 - 65 <= 0x39 )
  {
    *(&v20 + v18) = v5;
    v19 = v18 + 1;
LABEL_9:
    v6 = a1[267];
    if ( (unsigned int)(v6 - 91) > 5 && (unsigned int)(v6 - 65) <= 0x39 )
    {
      *(&v20 + v19) = v6;
      v9 = v19 + 1;
      if ( a2 != nullptr )
        goto LABEL_12;
    }
    else
    {
      v7 = byte_1CBD9D0[v6 & 0xF];
      v8 = byte_1CBD9D0[a1[267] >> 4];
      *(&v20 + v19) = 91;
      *(&v21 + v19) = v8;
      v23[v19 - 1] = v7;
      v9 = v19 + 4;
      v23[v19] = 93;
      if ( a2 != nullptr )
      {
LABEL_12:
        v10 = v9 + 2;
        *(&v20 + v9) = 58;
        *(&v21 + v9) = 32;
        v11 = &v20 + v9 + 2;
        *(uint32_t *)v11 = *a2;
        *((uint32_t *)v11 + 1) = a2[1];
        *((uint32_t *)v11 + 2) = a2[2];
        *((uint32_t *)v11 + 3) = a2[3];
        *((uint32_t *)v11 + 4) = a2[4];
        *((uint32_t *)v11 + 5) = a2[5];
        *((uint32_t *)v11 + 6) = a2[6];
        *((uint32_t *)v11 + 7) = a2[7];
        *((uint32_t *)v11 + 8) = a2[8];
        *((uint32_t *)v11 + 9) = a2[9];
        *((uint32_t *)v11 + 10) = a2[10];
        *((uint32_t *)v11 + 11) = a2[11];
        *((uint32_t *)v11 + 12) = a2[12];
        *((uint32_t *)v11 + 13) = a2[13];
        *((uint32_t *)v11 + 14) = a2[14];
        *((uint32_t *)v11 + 15) = a2[15];
        v23[v10 + 60] = 0;
        goto LABEL_13;
      }
    }
    *(&v20 + v9) = 0;
LABEL_13:
    png_error((int)(uintptr_t)(a1), (int)(uintptr_t)(&v20));
  }
LABEL_16:
  *(&v20 + v18) = 91;
  v15 = byte_1CBD9D0[v5 >> 4];
  v16 = byte_1CBD9D0[v5 & 0xF];
  *(&v21 + v18) = v15;
  v23[v18 - 1] = v16;
  v23[v18] = 93;
  v19 = v18 + 4;
  goto LABEL_9;
}

// ----------------------------------------------------------------------------
// Function: png_chunk_warning  (binary VA: 0xf9dbd0)
// Original: png_chunk_warning
// ----------------------------------------------------------------------------
int png_chunk_warning(uint8_t *a1, int a2)
{
  unsigned int v2;
  unsigned int v3;
  char v4;
  unsigned int v5;
  int v6;
  char v7; // si
  char v8;
  int v9;
  int v10;
  char *v11;
  char v13;
  char v14; // si
  char v15;
  char v16;
  char v17; // si
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef uint8_t _g4_t_v24[107];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v21)) > _g4_s3 ? (30u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v22)) > _g4_s4 ? (31u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v24)) > _g4_s6 ? (33u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 30u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 31u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 33u);

  if ( a1 != nullptr )
  {
    v2 = a1[264];
    if ( v2 - 91 <= 5 || v2 - 65 > 0x39 )
    {
      v21 = 91;
      v24[0] = 93;
      v3 = a1[265];
      v18 = 4;
      v22 = byte_1CBD9D0[v2 >> 4];
      v23 = byte_1CBD9D0[v2 & 0xF];
      if ( v3 - 91 <= 5 )
        goto LABEL_15;
    }
    else
    {
      v3 = a1[265];
      v21 = a1[264];
      v18 = 1;
      if ( v3 - 91 <= 5 )
        goto LABEL_15;
    }
    if ( v3 - 65 <= 0x39 )
    {
      v4 = v3;
      v5 = a1[266];
      *(&v21 + v18) = v4;
      v19 = v18 + 1;
      if ( v5 - 91 <= 5 )
        goto LABEL_16;
      goto LABEL_7;
    }
LABEL_15:
    *(&v21 + v18) = 91;
    v13 = byte_1CBD9D0[v3 >> 4];
    v14 = byte_1CBD9D0[v3 & 0xF];
    *(&v22 + v18) = v13;
    v15 = v14;
    v5 = a1[266];
    v24[v18 - 1] = v15;
    v24[v18] = 93;
    v19 = v18 + 4;
    if ( v5 - 91 <= 5 )
      goto LABEL_16;
LABEL_7:
    if ( v5 - 65 <= 0x39 )
    {
      *(&v21 + v19) = v5;
      v20 = v19 + 1;
LABEL_9:
      v6 = a1[267];
      if ( (unsigned int)(v6 - 91) > 5 && (unsigned int)(v6 - 65) <= 0x39 )
      {
        *(&v21 + v20) = v6;
        v9 = v20 + 1;
        if ( a2 != 0 )
          goto LABEL_12;
      }
      else
      {
        v7 = byte_1CBD9D0[v6 & 0xF];
        v8 = byte_1CBD9D0[a1[267] >> 4];
        *(&v21 + v20) = 91;
        *(&v22 + v20) = v8;
        v24[v20 - 1] = v7;
        v9 = v20 + 4;
        v24[v20] = 93;
        if ( a2 != 0 )
        {
LABEL_12:
          v10 = v9 + 2;
          *(&v21 + v9) = 58;
          *(&v22 + v9) = 32;
          v11 = &v21 + v9 + 2;
          *(uint32_t *)v11 = *(uint32_t *)a2;
          *((uint32_t *)v11 + 1) = *(uint32_t *)(a2 + 4);
          *((uint32_t *)v11 + 2) = *(uint32_t *)(a2 + 8);
          *((uint32_t *)v11 + 3) = *(uint32_t *)(a2 + 12);
          *((uint32_t *)v11 + 4) = *(uint32_t *)(a2 + 16);
          *((uint32_t *)v11 + 5) = *(uint32_t *)(a2 + 20);
          *((uint32_t *)v11 + 6) = *(uint32_t *)(a2 + 24);
          *((uint32_t *)v11 + 7) = *(uint32_t *)(a2 + 28);
          *((uint32_t *)v11 + 8) = *(uint32_t *)(a2 + 32);
          *((uint32_t *)v11 + 9) = *(uint32_t *)(a2 + 36);
          *((uint32_t *)v11 + 10) = *(uint32_t *)(a2 + 40);
          *((uint32_t *)v11 + 11) = *(uint32_t *)(a2 + 44);
          *((uint32_t *)v11 + 12) = *(uint32_t *)(a2 + 48);
          *((uint32_t *)v11 + 13) = *(uint32_t *)(a2 + 52);
          *((uint32_t *)v11 + 14) = *(uint32_t *)(a2 + 56);
          *((uint32_t *)v11 + 15) = *(uint32_t *)(a2 + 60);
          v24[v10 + 60] = 0;
          return png_warning((int)(uintptr_t)(a1), &v21);
        }
      }
      *(&v21 + v9) = 0;
      return png_warning((int)(uintptr_t)(a1), &v21);
    }
LABEL_16:
    *(&v21 + v19) = 91;
    v16 = byte_1CBD9D0[v5 >> 4];
    v17 = byte_1CBD9D0[v5 & 0xF];
    *(&v22 + v19) = v16;
    v24[v19 - 1] = v17;
    v24[v19] = 93;
    v20 = v19 + 4;
    goto LABEL_9;
  }
  return png_warning(0, (uint8_t *)a2);
}

// ----------------------------------------------------------------------------
// Function: png_set_longjmp_fn  (binary VA: 0xf9dea0)
// Original: png_set_longjmp_fn
// ----------------------------------------------------------------------------
int png_set_longjmp_fn(int a1, int a2, int a3)
{
  int result;

  result = a1;
  if ( a3 != 40 || a1 == 0 )
    return 0;
  *(uint32_t *)(a1 + 40) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_error_fn  (binary VA: 0xf9dec0)
// Original: png_set_error_fn
// ----------------------------------------------------------------------------
uint32_t * png_set_error_fn(uint32_t *a1, int a2, int a3, int a4)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr )
  {
    a1[13] = a2;
    a1[11] = a3;
    a1[12] = a4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_error_ptr  (binary VA: 0xf9dee0)
// Original: png_get_error_ptr
// ----------------------------------------------------------------------------
int png_get_error_ptr(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 52);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_valid  (binary VA: 0xf9df00)
// Original: png_get_valid
// ----------------------------------------------------------------------------
int png_get_valid(int a1, int a2, int a3)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint32_t *)(a2 + 8) & a3;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_rowbytes  (binary VA: 0xf9df20)
// Original: png_get_rowbytes
// ----------------------------------------------------------------------------
int png_get_rowbytes(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint32_t *)(a2 + 12);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_rows  (binary VA: 0xf9df40)
// Original: png_get_rows
// ----------------------------------------------------------------------------
int png_get_rows(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint32_t *)(a2 + 248);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_image_width  (binary VA: 0xf9df60)
// Original: png_get_image_width
// ----------------------------------------------------------------------------
int png_get_image_width(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint32_t *)a2;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_image_height  (binary VA: 0xf9df80)
// Original: png_get_image_height
// ----------------------------------------------------------------------------
int png_get_image_height(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint32_t *)(a2 + 4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_bit_depth  (binary VA: 0xf9dfa0)
// Original: png_get_bit_depth
// ----------------------------------------------------------------------------
int png_get_bit_depth(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint8_t *)(a2 + 24);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_color_type  (binary VA: 0xf9dfc0)
// Original: png_get_color_type
// ----------------------------------------------------------------------------
int png_get_color_type(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint8_t *)(a2 + 25);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_filter_type  (binary VA: 0xf9dfe0)
// Original: png_get_filter_type
// ----------------------------------------------------------------------------
int png_get_filter_type(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint8_t *)(a2 + 27);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_interlace_type  (binary VA: 0xf9e000)
// Original: png_get_interlace_type
// ----------------------------------------------------------------------------
int png_get_interlace_type(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint8_t *)(a2 + 28);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_compression_type  (binary VA: 0xf9e020)
// Original: png_get_compression_type
// ----------------------------------------------------------------------------
int png_get_compression_type(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint8_t *)(a2 + 26);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_x_pixels_per_meter  (binary VA: 0xf9e040)
// Original: png_get_x_pixels_per_meter
// ----------------------------------------------------------------------------
int png_get_x_pixels_per_meter(int a1, int a2)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && *(char *)(a2 + 8) < 0 && *(uint8_t *)(a2 + 120) == 1 )
    return *(uint32_t *)(a2 + 112);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_y_pixels_per_meter  (binary VA: 0xf9e080)
// Original: png_get_y_pixels_per_meter
// ----------------------------------------------------------------------------
int png_get_y_pixels_per_meter(int a1, int a2)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && *(char *)(a2 + 8) < 0 && *(uint8_t *)(a2 + 120) == 1 )
    return *(uint32_t *)(a2 + 116);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_pixels_per_meter  (binary VA: 0xf9e0c0)
// Original: png_get_pixels_per_meter
// ----------------------------------------------------------------------------
int png_get_pixels_per_meter(int a1, int a2)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && *(char *)(a2 + 8) < 0 && *(uint8_t *)(a2 + 120) == 1 )
  {
    result = *(uint32_t *)(a2 + 112);
    if ( result != *(uint32_t *)(a2 + 116) )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_pixel_aspect_ratio  (binary VA: 0xf9e100)
// Original: png_get_pixel_aspect_ratio
// ----------------------------------------------------------------------------
long double png_get_pixel_aspect_ratio(int a1, int a2)
{
  float v2; // xmm0_4
  unsigned int v3;

  v2 = 0.0;
  if ( a2 != 0 && a1 != 0 && *(char *)(a2 + 8) < 0 )
  {
    v3 = *(uint32_t *)(a2 + 112);
    if ( v3 != 0 )
      return (float)((float)((float)((float)HIWORD(*(uint32_t *)(a2 + 116)) * 65536.0)
                           + (float)(uint16_t)*(uint32_t *)(a2 + 116))
                   / (float)((float)((float)HIWORD(v3) * 65536.0) + (float)(uint16_t)v3));
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: png_get_x_offset_microns  (binary VA: 0xf9e180)
// Original: png_get_x_offset_microns
// ----------------------------------------------------------------------------
int png_get_x_offset_microns(int a1, int a2)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && (*(uint8_t *)(a2 + 9) & 1) != 0 && *(uint8_t *)(a2 + 108) == 1 )
    return *(uint32_t *)(a2 + 100);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_y_offset_microns  (binary VA: 0xf9e1c0)
// Original: png_get_y_offset_microns
// ----------------------------------------------------------------------------
int png_get_y_offset_microns(int a1, int a2)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && (*(uint8_t *)(a2 + 9) & 1) != 0 && *(uint8_t *)(a2 + 108) == 1 )
    return *(uint32_t *)(a2 + 104);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_x_offset_pixels  (binary VA: 0xf9e200)
// Original: png_get_x_offset_pixels
// ----------------------------------------------------------------------------
int png_get_x_offset_pixels(int a1, int a2)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && (*(uint8_t *)(a2 + 9) & 1) != 0 && *(uint8_t *)(a2 + 108) == 0 )
    return *(uint32_t *)(a2 + 100);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_y_offset_pixels  (binary VA: 0xf9e230)
// Original: png_get_y_offset_pixels
// ----------------------------------------------------------------------------
int png_get_y_offset_pixels(int a1, int a2)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && (*(uint8_t *)(a2 + 9) & 1) != 0 && *(uint8_t *)(a2 + 108) == 0 )
    return *(uint32_t *)(a2 + 104);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_channels  (binary VA: 0xf9e260)
// Original: png_get_channels
// ----------------------------------------------------------------------------
int png_get_channels(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return *(uint8_t *)(a2 + 29);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_signature  (binary VA: 0xf9e280)
// Original: png_get_signature
// ----------------------------------------------------------------------------
int png_get_signature(int a1, int a2)
{
  if ( a2 != 0 && a1 != 0 )
    return a2 + 32;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_bKGD  (binary VA: 0xf9e2a0)
// Original: png_get_bKGD
// ----------------------------------------------------------------------------
int png_get_bKGD(int a1, int a2, uint32_t *a3)
{
  if ( a2 == 0 || a1 == 0 )
    return 0;
  if ( a3 == nullptr || (*(uint8_t *)(a2 + 8) & 0x20) == 0 )
    return 0;
  *a3 = a2 + 90;
  return 32;
}

// ----------------------------------------------------------------------------
// Function: png_get_cHRM  (binary VA: 0xf9e2e0)
// Original: png_get_cHRM
// ----------------------------------------------------------------------------
int png_get_cHRM(int a1, int a2, double *a3, double *a4, double *a5, double *a6, double *a7, double *a8, double *a9, double *a10)
{
  int v11;

  if ( a2 == 0 || a1 == 0 )
    return 0;
  v11 = 0;
  if ( (*(uint8_t *)(a2 + 8) & 4) != 0 )
  {
    if ( a3 != nullptr )
      *a3 = *(float *)(a2 + 128);
    if ( a4 != nullptr )
      *a4 = *(float *)(a2 + 132);
    if ( a5 != nullptr )
      *a5 = *(float *)(a2 + 136);
    if ( a6 != nullptr )
      *a6 = *(float *)(a2 + 140);
    if ( a7 != nullptr )
      *a7 = *(float *)(a2 + 144);
    if ( a8 != nullptr )
      *a8 = *(float *)(a2 + 148);
    if ( a9 != nullptr )
      *a9 = *(float *)(a2 + 152);
    v11 = 4;
    if ( a10 != nullptr )
      *a10 = *(float *)(a2 + 156);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: png_get_cHRM_fixed  (binary VA: 0xf9e420)
// Original: png_get_cHRM_fixed
// ----------------------------------------------------------------------------
int png_get_cHRM_fixed(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9, uint32_t *a10)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && (*(uint8_t *)(a2 + 8) & 4) != 0 )
  {
    if ( a3 != nullptr )
      *a3 = *(uint32_t *)(a2 + 256);
    if ( a4 != nullptr )
      *a4 = *(uint32_t *)(a2 + 260);
    if ( a5 != nullptr )
      *a5 = *(uint32_t *)(a2 + 264);
    if ( a6 != nullptr )
      *a6 = *(uint32_t *)(a2 + 268);
    if ( a7 != nullptr )
      *a7 = *(uint32_t *)(a2 + 272);
    if ( a8 != nullptr )
      *a8 = *(uint32_t *)(a2 + 276);
    if ( a9 != nullptr )
      *a9 = *(uint32_t *)(a2 + 280);
    result = 4;
    if ( a10 != nullptr )
      *a10 = *(uint32_t *)(a2 + 284);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_gAMA  (binary VA: 0xf9e500)
// Original: png_get_gAMA
// ----------------------------------------------------------------------------
int png_get_gAMA(int a1, int a2, double *a3)
{
  if ( a2 == 0 || a1 == 0 )
    return 0;
  if ( a3 == nullptr || (*(uint8_t *)(a2 + 8) & 1) == 0 )
    return 0;
  *a3 = *(float *)(a2 + 40);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: png_get_gAMA_fixed  (binary VA: 0xf9e540)
// Original: png_get_gAMA_fixed
// ----------------------------------------------------------------------------
int png_get_gAMA_fixed(int a1, int a2, uint32_t *a3)
{
  if ( a2 == 0 || a1 == 0 )
    return 0;
  if ( a3 == nullptr || (*(uint8_t *)(a2 + 8) & 1) == 0 )
    return 0;
  *a3 = *(uint32_t *)(a2 + 252);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: png_get_sRGB  (binary VA: 0xf9e580)
// Original: png_get_sRGB
// ----------------------------------------------------------------------------
int png_get_sRGB(int a1, int a2, uint32_t *a3)
{
  if ( a2 == 0 || a1 == 0 )
    return 0;
  if ( a3 == nullptr || (*(uint8_t *)(a2 + 9) & 8) == 0 )
    return 0;
  *a3 = *(uint8_t *)(a2 + 44);
  return 2048;
}

// ----------------------------------------------------------------------------
// Function: png_get_iCCP  (binary VA: 0xf9e5c0)
// Original: png_get_iCCP
// ----------------------------------------------------------------------------
int png_get_iCCP(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6)
{
  if ( a2 == 0 || a1 == 0 || a3 == nullptr || (*(uint8_t *)(a2 + 9) & 0x10) == 0 || a6 == nullptr || a5 == nullptr )
    return 0;
  *a3 = *(uint32_t *)(a2 + 196);
  *a5 = *(uint32_t *)(a2 + 200);
  *a6 = *(uint32_t *)(a2 + 204);
  *a4 = *(uint8_t *)(a2 + 208);
  return 4096;
}

// ----------------------------------------------------------------------------
// Function: png_get_sPLT  (binary VA: 0xf9e640)
// Original: png_get_sPLT
// ----------------------------------------------------------------------------
int png_get_sPLT(int a1, int a2, uint32_t *a3)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && a3 != nullptr )
  {
    *a3 = *(uint32_t *)(a2 + 212);
    return *(uint32_t *)(a2 + 216);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_hIST  (binary VA: 0xf9e670)
// Original: png_get_hIST
// ----------------------------------------------------------------------------
int png_get_hIST(int a1, int a2, uint32_t *a3)
{
  if ( a2 == 0 || a1 == 0 )
    return 0;
  if ( a3 == nullptr || (*(uint8_t *)(a2 + 8) & 0x40) == 0 )
    return 0;
  *a3 = *(uint32_t *)(a2 + 124);
  return 64;
}

// ----------------------------------------------------------------------------
// Function: png_get_IHDR  (binary VA: 0xf9e6b0)
// Original: png_get_IHDR
// ----------------------------------------------------------------------------
int png_get_IHDR(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9)
{
  if ( a2 == 0 || a1 == 0 || a4 == nullptr || a3 == nullptr || a6 == nullptr || a5 == nullptr )
    return 0;
  *a3 = *(uint32_t *)a2;
  *a4 = *(uint32_t *)(a2 + 4);
  *a5 = *(uint8_t *)(a2 + 24);
  *a6 = *(uint8_t *)(a2 + 25);
  if ( a8 != nullptr )
    *a8 = *(uint8_t *)(a2 + 26);
  if ( a9 != nullptr )
    *a9 = *(uint8_t *)(a2 + 27);
  if ( a7 != nullptr )
    *a7 = *(uint8_t *)(a2 + 28);
  png_check_IHDR(
    a1,
    *(uint32_t *)a2,
    *(uint32_t *)(a2 + 4),
    *(uint8_t *)(a2 + 24),
    *(uint8_t *)(a2 + 25),
    *(uint8_t *)(a2 + 28),
    *(uint8_t *)(a2 + 26),
    *(uint8_t *)(a2 + 27));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: png_get_oFFs  (binary VA: 0xf9e7d0)
// Original: png_get_oFFs
// ----------------------------------------------------------------------------
int png_get_oFFs(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5)
{
  if ( a2 == 0 || a1 == 0 || a3 == nullptr || (*(uint8_t *)(a2 + 9) & 1) == 0 || a5 == nullptr || a4 == nullptr )
    return 0;
  *a3 = *(uint32_t *)(a2 + 100);
  *a4 = *(uint32_t *)(a2 + 104);
  *a5 = *(uint8_t *)(a2 + 108);
  return 256;
}

// ----------------------------------------------------------------------------
// Function: png_get_pCAL  (binary VA: 0xf9e840)
// Original: png_get_pCAL
// ----------------------------------------------------------------------------
int png_get_pCAL(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9)
{
  if ( a2 == 0
    || a1 == 0
    || a3 == nullptr
    || (*(uint8_t *)(a2 + 9) & 4) == 0
    || a5 == nullptr
    || a4 == nullptr
    || a7 == nullptr
    || a6 == nullptr
    || a9 == nullptr
    || a8 == nullptr )
  {
    return 0;
  }
  *a3 = *(uint32_t *)(a2 + 160);
  *a4 = *(uint32_t *)(a2 + 164);
  *a5 = *(uint32_t *)(a2 + 168);
  *a6 = *(uint8_t *)(a2 + 180);
  *a7 = *(uint8_t *)(a2 + 181);
  *a8 = *(uint32_t *)(a2 + 172);
  *a9 = *(uint32_t *)(a2 + 176);
  return 1024;
}

// ----------------------------------------------------------------------------
// Function: png_get_sCAL  (binary VA: 0xf9e910)
// Original: png_get_sCAL
// ----------------------------------------------------------------------------
int png_get_sCAL(int a1, int a2, uint32_t *a3, uint64_t *a4, uint64_t *a5)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && (*(uint8_t *)(a2 + 9) & 0x40) != 0 )
  {
    *a3 = *(uint8_t *)(a2 + 220);
    *a4 = *(uint64_t *)(a2 + 224);
    *a5 = *(uint64_t *)(a2 + 232);
    return 0x4000;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_pHYs  (binary VA: 0xf9e970)
// Original: png_get_pHYs
// ----------------------------------------------------------------------------
int png_get_pHYs(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && *(char *)(a2 + 8) < 0 )
  {
    if ( a3 != nullptr )
    {
      *a3 = *(uint32_t *)(a2 + 112);
      result = 128;
    }
    if ( a4 != nullptr )
    {
      *a4 = *(uint32_t *)(a2 + 116);
      result = 128;
    }
    if ( a5 != nullptr )
    {
      *a5 = *(uint8_t *)(a2 + 120);
      return 128;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_PLTE  (binary VA: 0xf9e9e0)
// Original: png_get_PLTE
// ----------------------------------------------------------------------------
int png_get_PLTE(int a1, int a2, uint32_t *a3, uint32_t *a4)
{
  if ( a2 == 0 || a1 == 0 )
    return 0;
  if ( a3 == nullptr || (*(uint8_t *)(a2 + 8) & 8) == 0 )
    return 0;
  *a3 = *(uint32_t *)(a2 + 16);
  *a4 = *(uint16_t *)(a2 + 20);
  return 8;
}

// ----------------------------------------------------------------------------
// Function: png_get_sBIT  (binary VA: 0xf9ea30)
// Original: png_get_sBIT
// ----------------------------------------------------------------------------
int png_get_sBIT(int a1, int a2, uint32_t *a3)
{
  if ( a2 == 0 || a1 == 0 )
    return 0;
  if ( a3 == nullptr || (*(uint8_t *)(a2 + 8) & 2) == 0 )
    return 0;
  *a3 = a2 + 68;
  return 2;
}

// ----------------------------------------------------------------------------
// Function: png_get_text  (binary VA: 0xf9ea70)
// Original: png_get_text
// ----------------------------------------------------------------------------
int png_get_text(int a1, int a2, uint32_t *a3, uint32_t *a4)
{
  int result;

  if ( a2 != 0 && a1 != 0 && (result = *(uint32_t *)(a2 + 48)) > 0 )
  {
    if ( a3 != nullptr )
    {
      *a3 = *(uint32_t *)(a2 + 56);
      result = *(uint32_t *)(a2 + 48);
    }
    if ( a4 != nullptr )
    {
      *a4 = result;
      return *(uint32_t *)(a2 + 48);
    }
  }
  else
  {
    result = 0;
    if ( a4 != nullptr )
      *a4 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_tIME  (binary VA: 0xf9eac0)
// Original: png_get_tIME
// ----------------------------------------------------------------------------
int png_get_tIME(int a1, int a2, uint32_t *a3)
{
  if ( a2 == 0 || a1 == 0 )
    return 0;
  if ( a3 == nullptr || (*(uint8_t *)(a2 + 9) & 2) == 0 )
    return 0;
  *a3 = a2 + 60;
  return 512;
}

// ----------------------------------------------------------------------------
// Function: png_get_tRNS  (binary VA: 0xf9eb00)
// Original: png_get_tRNS
// ----------------------------------------------------------------------------
int png_get_tRNS(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && (*(uint8_t *)(a2 + 8) & 0x10) != 0 )
  {
    if ( *(uint8_t *)(a2 + 25) == 3 )
    {
      if ( a3 != nullptr )
      {
        *a3 = *(uint32_t *)(a2 + 76);
        result = 16;
      }
      if ( a5 != nullptr )
        *a5 = a2 + 80;
    }
    else
    {
      if ( a5 != nullptr )
      {
        *a5 = a2 + 80;
        result = 16;
      }
      if ( a3 != nullptr )
        *a3 = 0;
    }
    if ( a4 != nullptr )
    {
      *a4 = *(uint16_t *)(a2 + 22);
      return 16;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_unknown_chunks  (binary VA: 0xf9eb90)
// Original: png_get_unknown_chunks
// ----------------------------------------------------------------------------
int png_get_unknown_chunks(int a1, int a2, uint32_t *a3)
{
  int result;

  result = 0;
  if ( a2 != 0 && a1 != 0 && a3 != nullptr )
  {
    *a3 = *(uint32_t *)(a2 + 188);
    return *(uint32_t *)(a2 + 192);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_rgb_to_gray_status  (binary VA: 0xf9ebc0)
// Original: png_get_rgb_to_gray_status
// ----------------------------------------------------------------------------
int png_get_rgb_to_gray_status(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint8_t *)(a1 + 532);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_user_chunk_ptr  (binary VA: 0xf9ebe0)
// Original: png_get_user_chunk_ptr
// ----------------------------------------------------------------------------
int png_get_user_chunk_ptr(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 516);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_get_compression_buffer_size  (binary VA: 0xf9ec00)
// Original: png_get_compression_buffer_size
// ----------------------------------------------------------------------------
int png_get_compression_buffer_size(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 156);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_user_width_max  (binary VA: 0xf9ec20)
// Original: png_get_user_width_max
// ----------------------------------------------------------------------------
int png_get_user_width_max(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 584);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_user_height_max  (binary VA: 0xf9ec40)
// Original: png_get_user_height_max
// ----------------------------------------------------------------------------
int png_get_user_height_max(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 588);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_chunk_cache_max  (binary VA: 0xf9ec60)
// Original: png_get_chunk_cache_max
// ----------------------------------------------------------------------------
int png_get_chunk_cache_max(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 592);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_chunk_malloc_max  (binary VA: 0xf9ec80)
// Original: png_get_chunk_malloc_max
// ----------------------------------------------------------------------------
int png_get_chunk_malloc_max(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 200);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_io_state  (binary VA: 0xf9eca0)
// Original: png_get_io_state
// ----------------------------------------------------------------------------
int png_get_io_state(int a1)
{
  return *(uint32_t *)(a1 + 628);
}

// ----------------------------------------------------------------------------
// Function: png_get_io_chunk_name  (binary VA: 0xf9ecb0)
// Original: png_get_io_chunk_name
// ----------------------------------------------------------------------------
int png_get_io_chunk_name(int a1)
{
  return a1 + 264;
}

// ----------------------------------------------------------------------------
// Function: png_create_struct_2  (binary VA: 0xf9ecc0)
// Original: png_create_struct_2
// ----------------------------------------------------------------------------
void * png_create_struct_2(int a1, int (*a2)(uint8_t *, size_t), int a3)
{
  void *s;
  size_t n;
  typedef uint8_t _g4_t_v6[552];
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 720u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (560u + sizeof(_g4_t_v7)) > _g4_s1 ? (560u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 560u);

  if ( a1 == 2 )
  {
    n = 288;
    if ( a2 != nullptr )
      goto LABEL_4;
LABEL_8:
    s = malloc(n);
    if ( s == nullptr )
      return s;
    goto LABEL_5;
  }
  s = nullptr;
  n = 632;
  if ( a1 != 1 )
    return s;
  if ( a2 == nullptr )
    goto LABEL_8;
LABEL_4:
  v7 = a3;
  s = (void *)a2(v6, n);
  if ( s != nullptr )
LABEL_5:
    memset(s, 0, n);
  return s;
}

// ----------------------------------------------------------------------------
// Function: png_create_struct  (binary VA: 0xf9ed80)
// Original: png_create_struct
// ----------------------------------------------------------------------------
void * png_create_struct(int a1)
{
  return png_create_struct_2(a1, nullptr, 0);
}

// ----------------------------------------------------------------------------
// Function: png_destroy_struct_2  (binary VA: 0xf9edc0)
// Original: png_destroy_struct_2
// ----------------------------------------------------------------------------
void png_destroy_struct_2(void *ptr, void (*a2)(uint8_t *, void *), int a3)
{
  typedef uint8_t _g4_t_v3[552];
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 720u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (560u + sizeof(_g4_t_v4)) > _g4_s1 ? (560u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 560u);

  if ( ptr != nullptr )
  {
    if ( a2 != nullptr )
    {
      v4 = a3;
      a2(v3, ptr);
    }
    else
    {
      free(ptr);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_destroy_struct  (binary VA: 0xf9ee30)
// Original: png_destroy_struct
// ----------------------------------------------------------------------------
void png_destroy_struct(void *a1)
{
  png_destroy_struct_2(a1, nullptr, 0);
}

// ----------------------------------------------------------------------------
// Function: png_malloc_default  (binary VA: 0xf9ee70)
// Original: png_malloc_default
// ----------------------------------------------------------------------------
void * png_malloc_default(int a1, size_t size)
{
  if ( size != 0 && a1 != 0 )
    return malloc(size);
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: png_malloc  (binary VA: 0xf9eeb0)
// Original: png_malloc
// ----------------------------------------------------------------------------
void * png_malloc(int a1, size_t a2)
{
  int (*v2)(int, size_t);
  void *result;

  if ( a2 == 0 || a1 == 0 )
    return nullptr;
  v2 = *(int (**)(int, size_t))(a1 + 556);
  if ( v2 != nullptr )
    result = (void *)v2(a1, a2);
  else
    result = png_malloc_default(a1, a2);
  if ( result == nullptr && (*(uint8_t *)(a1 + 90) & 0x10) == 0 )
    png_error(a1, (int)(uintptr_t)("Out of Memory"));
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_calloc  (binary VA: 0xf9ef50)
// Original: png_calloc
// ----------------------------------------------------------------------------
void * png_calloc(int a1, size_t n)
{
  void *s;
  void *v3;

  s = png_malloc(a1, n);
  v3 = s;
  if ( s != nullptr )
    memset(s, 0, n);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: png_free_default  (binary VA: 0xf9efb0)
// Original: png_free_default
// ----------------------------------------------------------------------------
void png_free_default(int a1, void *ptr)
{
  if ( ptr != nullptr && a1 != 0 )
    free(ptr);
}

// ----------------------------------------------------------------------------
// Function: png_free  (binary VA: 0xf9eff0)
// Original: png_free
// ----------------------------------------------------------------------------
void png_free(int a1, void *a2)
{
  void (*v2)(int, void *);

  if ( a2 != nullptr && a1 != 0 )
  {
    v2 = *(void (**)(int, void *))(a1 + 560);
    if ( v2 != nullptr )
      v2(a1, a2);
    else
      png_free_default(a1, a2);
  }
}

// ----------------------------------------------------------------------------
// Function: png_malloc_warn  (binary VA: 0xf9f040)
// Original: png_malloc_warn
// ----------------------------------------------------------------------------
void * png_malloc_warn(int a1, size_t a2)
{
  void *result;
  int v3;

  result = nullptr;
  if ( a1 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 88);
    *(uint32_t *)(a1 + 88) = v3 | 0x100000;
    result = png_malloc(a1, a2);
    *(uint32_t *)(a1 + 88) = v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_mem_fn  (binary VA: 0xf9f0a0)
// Original: png_set_mem_fn
// ----------------------------------------------------------------------------
uint32_t * png_set_mem_fn(uint32_t *a1, int a2, int a3, int a4)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr )
  {
    a1[138] = a2;
    a1[139] = a3;
    a1[140] = a4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_mem_ptr  (binary VA: 0xf9f0d0)
// Original: png_get_mem_ptr
// ----------------------------------------------------------------------------
int png_get_mem_ptr(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 552);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_create_read_struct_2  (binary VA: 0xf9f0f0)
// Original: png_create_read_struct_2
// ----------------------------------------------------------------------------
char * png_create_read_struct_2(char *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  struct __jmp_buf_tag *env;
  int v8;
  int v9;
  char v10; // bp
  char v12; // si
  int header_ver;
  int v14;
  char v15;
  char v16; // si
  typedef char *_g4_t_struct_2;
  typedef bool _g4_t_v18;
  typedef char _g4_t_s[108];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_struct_2)) > _g4_s0 ? (8u + sizeof(_g4_t_struct_2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_s)) > _g4_s2 ? (16u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_struct_2 &struct_2 = *reinterpret_cast<_g4_t_struct_2 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  struct_2 = (char *)png_create_struct_2(1, a6, a5);
  if ( struct_2 == nullptr )
    return nullptr;
  *((uint32_t *)struct_2 + 146) = 1000000;
  *((uint32_t *)struct_2 + 147) = 1000000;
  *((uint32_t *)struct_2 + 148) = 0;
  env = (struct __jmp_buf_tag *)png_set_longjmp_fn(struct_2, static_cast<void (*)(struct __jmp_buf_tag *, int)>(&longjmp), 40);
  if ( setjmp(*reinterpret_cast<jmp_buf *>(env)) != 0 )
    abort();
  png_set_mem_fn(struct_2, a5, a6, a7);
  png_set_error_fn(struct_2, a2, a3, a4);
  if ( a1 != nullptr )
  {
    v8 = 0;
    do
    {
      v9 = v8;
      v10 = a1[v8];
      if ( v10 != *(uint8_t *)(png_get_header_ver(0) + v8) )
        *((uint32_t *)struct_2 + 22) |= 0x20000u;
      ++v8;
    }
    while ( *(uint8_t *)(png_get_header_ver(0) + v9) != 0 );
    if ( (struct_2[90] & 2) == 0 )
      goto LABEL_17;
  }
  else
  {
    *((uint32_t *)struct_2 + 22) |= 0x20000u;
    if ( (struct_2[90] & 2) == 0 )
      goto LABEL_17;
  }
  if ( a1 == nullptr )
  {
LABEL_16:
    header_ver = (int)(uintptr_t)(png_get_header_ver(0));
    snprintf(s, 0x50u, "Application  is  running with png.c from libpng-%.20s", header_ver);
    png_warning(struct_2, s);
    png_warning(struct_2, "Incompatible libpng version in application and library");
    v18 = true;
    goto LABEL_10;
  }
  v12 = *a1;
  if ( v12 != *(uint8_t *)png_get_header_ver(0) )
  {
LABEL_15:
    snprintf(s, 0x50u, "Application was compiled with png.h from libpng-%.20s", a1);
    png_warning(struct_2, s);
    goto LABEL_16;
  }
  v15 = *a1;
  if ( *a1 == 49 )
  {
    v16 = a1[2];
    if ( v16 != *(uint8_t *)(png_get_header_ver(0) + 2) )
      goto LABEL_15;
    v15 = *a1;
  }
  if ( v15 == 48 && a1[2] <= 56 )
    goto LABEL_15;
LABEL_17:
  *((uint32_t *)struct_2 + 39) = 0x2000;
  *((uint32_t *)struct_2 + 38) = (uint32_t)(uintptr_t)(png_malloc_warn(struct_2, *((uint32_t *)struct_2 + 39)));
  v18 = *((uint32_t *)struct_2 + 38) == 0;
LABEL_10:
  *((uint32_t *)struct_2 + 32) = (uint32_t)(uintptr_t)(png_zalloc);
  *((uint32_t *)struct_2 + 33) = (uint32_t)(uintptr_t)(png_zfree);
  *((uint32_t *)struct_2 + 34) = (uint32_t)(uintptr_t)(struct_2);
  if ( v18 )
    goto LABEL_11;
  v14 = inflateInit_(struct_2 + 96, "1.2.3", 56);
  switch ( v14 )
  {
    case 0:
      goto LABEL_11;
    case -6:
      png_warning(struct_2, "zlib version error");
      v18 = true;
LABEL_11:
      if ( v18 )
      {
        png_free((int)(uintptr_t)(struct_2), *((void **)struct_2 + 38));
        *((uint32_t *)struct_2 + 38) = 0;
        png_destroy_struct_2(struct_2, a7, a5);
        return nullptr;
      }
      else
      {
        *((uint32_t *)struct_2 + 27) = *((uint32_t *)struct_2 + 38);
        *((uint32_t *)struct_2 + 28) = *((uint32_t *)struct_2 + 39);
        png_set_read_fn(struct_2, 0, 0);
        return struct_2;
      }
    case -4:
    case -2:
      png_warning(struct_2, "zlib memory error");
      v18 = true;
      goto LABEL_11;
    default:
      png_warning(struct_2, "Unknown zlib error");
      v18 = true;
      goto LABEL_11;
  }
}

// ----------------------------------------------------------------------------
// Function: png_create_read_struct  (binary VA: 0xf9f5b0)
// Original: png_create_read_struct
// ----------------------------------------------------------------------------
char * png_create_read_struct(char *a1, int a2, int a3, int a4)
{
  return png_create_read_struct_2(a1, a2, a3, a4, 0, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: png_read_info  (binary VA: 0xf9f610)
// Original: png_read_info
// ----------------------------------------------------------------------------
void png_read_info(int a1, int a2)
{
  uint8_t v2;
  int chunk_header;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  typedef int _g4_t_n;
  typedef char _g4_t_s2[10];
  typedef char _g4_t_v10[10];
  typedef char _g4_t_v11[10];
  typedef char _g4_t_v12[10];
  typedef char _g4_t_v13[10];
  typedef char _g4_t_v14[10];
  typedef char _g4_t_v15[10];
  typedef char _g4_t_v16[10];
  typedef char _g4_t_v17[10];
  typedef char _g4_t_v18[10];
  typedef char _g4_t_v19[33];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (9u + sizeof(_g4_t_n)) > _g4_s0 ? (9u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_s2)) > _g4_s1 ? (36u + sizeof(_g4_t_s2)) : _g4_s1,
    _g4_s3 = (46u + sizeof(_g4_t_v10)) > _g4_s2 ? (46u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v11)) > _g4_s3 ? (56u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (66u + sizeof(_g4_t_v12)) > _g4_s4 ? (66u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v13)) > _g4_s5 ? (76u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (86u + sizeof(_g4_t_v14)) > _g4_s6 ? (86u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v15)) > _g4_s7 ? (96u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (106u + sizeof(_g4_t_v16)) > _g4_s8 ? (106u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v17)) > _g4_s9 ? (116u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (126u + sizeof(_g4_t_v18)) > _g4_s10 ? (126u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (136u + sizeof(_g4_t_v19)) > _g4_s11 ? (136u + sizeof(_g4_t_v19)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 9u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 46u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 66u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 86u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 96u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 106u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 116u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 126u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 136u);

  if ( a2 != 0 && a1 != 0 )
  {
    v2 = *(uint8_t *)(a1 + 280);
    if ( v2 <= 7u )
    {
      *(uint32_t *)(a1 + 628) = 17;
      v7 = v2;
      n = 8 - v2;
      png_read_data(a1, a2 + v2 + 32, n);
      *(uint8_t *)(a1 + 280) = 8;
      if ( png_sig_cmp(a2 + 32, v7, n) != 0 )
      {
        if ( v7 <= 3 && png_sig_cmp(a2 + 32, v7, 4 - v7) != 0 )
          png_error(a1, (int)(uintptr_t)("Not a PNG file"));
        png_error(a1, (int)(uintptr_t)("PNG file corrupted by ASCII conversion"));
      }
      if ( v7 <= 2 )
        *(uint32_t *)(a1 + 84) |= 0x1000u;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              g4_strcpy_raw(&s2, "IHDR");
              g4_strcpy_raw(&s2 + 5, "IDAT");
              g4_strcpy_raw(&v10, "IEND");
              g4_strcpy_raw(&v10 + 5, "PLTE");
              g4_strcpy_raw(&v11, "bKGD");
              g4_strcpy_raw(&v11 + 5, "cHRM");
              g4_strcpy_raw(&v12, "gAMA");
              g4_strcpy_raw(&v12 + 5, "hIST");
              g4_strcpy_raw(&v13, "iCCP");
              g4_strcpy_raw(&v13 + 5, "iTXt");
              g4_strcpy_raw(&v14, "oFFs");
              g4_strcpy_raw(&v14 + 5, "pCAL");
              g4_strcpy_raw(&v15, "pHYs");
              g4_strcpy_raw(&v15 + 5, "sBIT");
              g4_strcpy_raw(&v16, "sCAL");
              g4_strcpy_raw(&v16 + 5, "sPLT");
              g4_strcpy_raw(&v17, "sRGB");
              g4_strcpy_raw(&v17 + 5, "tEXt");
              g4_strcpy_raw(&v18, "tIME");
              g4_strcpy_raw(&v18 + 5, "tRNS");
              strcpy(v19, "zTXt");
              chunk_header = png_read_chunk_header(a1);
              if ( memcmp((const void *)(a1 + 264), (char *)&s2 + 5, 4u) == 0 )
              {
                v4 = *(uint32_t *)(a1 + 84);
                if ( (v4 & 8) != 0 )
                {
                  BYTE1(v4) |= 0x20u;
                  *(uint32_t *)(a1 + 84) = v4;
                }
              }
              if ( memcmp((const void *)(a1 + 264), &s2, 4u) != 0 )
                break;
              png_handle_IHDR(a1, a2, chunk_header);
            }
            if ( memcmp((const void *)(a1 + 264), &v10, 4u) != 0 )
              break;
            png_handle_IEND(a1, a2, chunk_header);
          }
          if ( png_handle_as_unknown(a1, (void *)(a1 + 264)) == 0 )
            break;
          if ( memcmp((const void *)(a1 + 264), (char *)&s2 + 5, 4u) == 0 )
            *(uint32_t *)(a1 + 84) |= 4u;
          png_handle_unknown(a1, a2, chunk_header);
          if ( memcmp((const void *)(a1 + 264), (char *)&v10 + 5, 4u) == 0 )
          {
            *(uint32_t *)(a1 + 84) |= 2u;
          }
          else if ( memcmp((const void *)(a1 + 264), (char *)&s2 + 5, 4u) == 0 )
          {
            v5 = *(uint32_t *)(a1 + 84);
            if ( (v5 & 1) == 0 )
              png_error(a1, (int)(uintptr_t)("Missing IHDR before IDAT"));
            if ( *(uint8_t *)(a1 + 274) == 3 && (v5 & 2) == 0 )
              png_error(a1, (int)(uintptr_t)("Missing PLTE before IDAT"));
            return;
          }
        }
        if ( memcmp((const void *)(a1 + 264), (char *)&v10 + 5, 4u) != 0 )
          break;
        png_handle_PLTE(a1, a2, chunk_header);
      }
      if ( memcmp((const void *)(a1 + 264), (char *)&s2 + 5, 4u) == 0 )
        break;
      if ( memcmp((const void *)(a1 + 264), &v11, 4u) == 0 )
      {
        png_handle_bKGD(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), (char *)&v11 + 5, 4u) == 0 )
      {
        png_handle_cHRM(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), &v12, 4u) == 0 )
      {
        png_handle_gAMA(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), (char *)&v12 + 5, 4u) == 0 )
      {
        png_handle_hIST(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), &v14, 4u) == 0 )
      {
        png_handle_oFFs(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), (char *)&v14 + 5, 4u) == 0 )
      {
        png_handle_pCAL(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), &v16, 4u) == 0 )
      {
        png_handle_sCAL(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), &v15, 4u) == 0 )
      {
        png_handle_pHYs(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), (char *)&v15 + 5, 4u) == 0 )
      {
        png_handle_sBIT(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), &v17, 4u) == 0 )
      {
        png_handle_sRGB(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), &v13, 4u) == 0 )
      {
        png_handle_iCCP(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), (char *)&v16 + 5, 4u) == 0 )
      {
        png_handle_sPLT(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), (char *)&v17 + 5, 4u) == 0 )
      {
        png_handle_tEXt(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), &v18, 4u) == 0 )
      {
        png_handle_tIME(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), (char *)&v18 + 5, 4u) == 0 )
      {
        png_handle_tRNS(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), v19, 4u) == 0 )
      {
        png_handle_zTXt(a1, a2, chunk_header);
      }
      else if ( memcmp((const void *)(a1 + 264), (char *)&v13 + 5, 4u) == 0 )
      {
        png_handle_iTXt(a1, a2, chunk_header);
      }
      else
      {
        png_handle_unknown(a1, a2, chunk_header);
      }
    }
    v6 = *(uint32_t *)(a1 + 84);
    if ( (v6 & 1) == 0 )
      png_error(a1, (int)(uintptr_t)("Missing IHDR before IDAT"));
    if ( *(uint8_t *)(a1 + 274) == 3 && (v6 & 2) == 0 )
      png_error(a1, (int)(uintptr_t)("Missing PLTE before IDAT"));
    *(uint32_t *)(a1 + 248) = chunk_header;
    *(uint32_t *)(a1 + 84) |= 4u;
  }
}

// ----------------------------------------------------------------------------
// Function: png_read_update_info  (binary VA: 0xfa0050)
// Original: png_read_update_info
// ----------------------------------------------------------------------------
int png_read_update_info(int a1, int a2)
{
  int result;

  if ( a1 != 0 )
  {
    if ( (*(uint8_t *)(a1 + 88) & 0x40) != 0 )
      png_warning(a1, "Ignoring extra png_read_update_info() call; row buffer not reallocated");
    else
      png_read_start_row(a1);
    return png_read_transform_info(a1, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_start_read_image  (binary VA: 0xfa00c0)
// Original: png_start_read_image
// ----------------------------------------------------------------------------
int png_start_read_image(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 && (*(uint8_t *)(a1 + 88) & 0x40) == 0 )
    return (int)(uintptr_t)(png_read_start_row(a1));
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_read_row  (binary VA: 0xfa00f0)
// Original: png_read_row
// ----------------------------------------------------------------------------
void png_read_row(int a1, void *a2, void *a3)
{
  uint8_t v3;
  int v4;
  int v5;
  const char *v6;
  unsigned int v7;
  unsigned int chunk_header;
  int v9;
  uint8_t v10;
  unsigned int v11;
  uint8_t *v12;
  void (*v13)(int, uint32_t, uint32_t);
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  uint32_t s2[23];

  strcpy((char *)s2, "IDAT");
  s2[4] = 255;
  s2[5] = 15;
  s2[6] = 255;
  s2[7] = 51;
  s2[8] = 255;
  s2[9] = 85;
  s2[10] = 255;
  s2[12] = 128;
  s2[13] = 8;
  s2[14] = 136;
  s2[15] = 34;
  s2[16] = 170;
  s2[17] = 85;
  s2[18] = 255;
  if ( a1 != 0 )
  {
    if ( (*(uint8_t *)(a1 + 88) & 0x40) == 0 )
      png_read_start_row(a1);
    if ( *(uint8_t *)(a1 + 271) != 0 && (*(uint8_t *)(a1 + 92) & 2) != 0 )
    {
      switch ( *(uint8_t *)(a1 + 272) )
      {
        case 0:
          if ( (*(uint8_t *)(a1 + 208) & 7) == 0 )
            goto LABEL_6;
          if ( a3 == nullptr )
            break;
          goto LABEL_66;
        case 1:
          if ( (*(uint8_t *)(a1 + 208) & 7) == 0 && *(uint32_t *)(a1 + 180) > 4u )
            goto LABEL_6;
          if ( a3 != nullptr )
            png_combine_row(a1, a3, 15);
          break;
        case 2:
          v17 = *(uint32_t *)(a1 + 208);
          if ( (v17 & 7) == 4 )
            goto LABEL_6;
          if ( a3 != nullptr && (v17 & 4) != 0 )
            goto LABEL_66;
          break;
        case 3:
          if ( (*(uint8_t *)(a1 + 208) & 3) == 0 && *(uint32_t *)(a1 + 180) > 2u )
            goto LABEL_6;
          if ( a3 != nullptr )
            png_combine_row(a1, a3, 51);
          break;
        case 4:
          v16 = *(uint32_t *)(a1 + 208);
          if ( (v16 & 3) == 2 )
            goto LABEL_6;
          if ( a3 != nullptr && (v16 & 2) != 0 )
LABEL_66:
            png_combine_row(a1, a3, 255);
          break;
        case 5:
          if ( (*(uint8_t *)(a1 + 208) & 1) == 0 && *(uint32_t *)(a1 + 180) > 1u )
            goto LABEL_6;
          if ( a3 != nullptr )
            png_combine_row(a1, a3, 85);
          break;
        case 6:
          if ( (*(uint8_t *)(a1 + 208) & 1) != 0 )
            goto LABEL_6;
          break;
        default:
          goto LABEL_6;
      }
      png_read_finish_row(a1);
    }
    else
    {
LABEL_6:
      if ( (*(uint8_t *)(a1 + 84) & 4) == 0 )
        png_error(a1, (int)(uintptr_t)("Invalid attempt to read row data"));
      *(uint32_t *)(a1 + 108) = *(uint32_t *)(a1 + 216);
      v3 = *(uint8_t *)(a1 + 277);
      if ( v3 > 7u )
        v4 = *(uint32_t *)(a1 + 204) * (v3 >> 3) + 1;
      else
        v4 = ((*(uint32_t *)(a1 + 204) * (unsigned int)v3 + 7) >> 3) + 1;
      *(uint32_t *)(a1 + 112) = v4;
      while ( 1 )
      {
        if ( *(uint32_t *)(a1 + 100) == 0 )
        {
          v7 = *(uint32_t *)(a1 + 248);
          while ( v7 == 0 )
          {
            png_crc_finish(a1, 0);
            chunk_header = png_read_chunk_header(a1);
            *(uint32_t *)(a1 + 248) = chunk_header;
            v7 = chunk_header;
            if ( memcmp((const void *)(a1 + 264), s2, 4u) != 0 )
              png_error(a1, (int)(uintptr_t)("Not enough image data"));
          }
          v14 = *(uint32_t *)(a1 + 156);
          v15 = *(uint32_t *)(a1 + 152);
          *(uint32_t *)(a1 + 100) = v14;
          *(uint32_t *)(a1 + 96) = v15;
          if ( v7 < v14 )
          {
            *(uint32_t *)(a1 + 100) = v7;
            v14 = v7;
          }
          png_crc_read(a1, v15, v14);
          *(uint32_t *)(a1 + 248) -= *(uint32_t *)(a1 + 100);
        }
        v5 = inflate(a1 + 96, 1);
        if ( v5 == 1 )
          break;
        if ( v5 != 0 )
        {
          v6 = *(const char **)(a1 + 120);
          if ( v6 == nullptr )
            v6 = "Decompression error";
          png_error(a1, (int)(uintptr_t)(v6));
        }
        if ( *(uint32_t *)(a1 + 112) == 0 )
          goto LABEL_26;
      }
      if ( *(uint32_t *)(a1 + 112) != 0 || *(uint32_t *)(a1 + 100) != 0 || *(uint32_t *)(a1 + 248) != 0 )
        png_error(a1, (int)(uintptr_t)("Extra compressed data"));
      *(uint32_t *)(a1 + 84) |= 8u;
      *(uint32_t *)(a1 + 88) |= 0x20u;
LABEL_26:
      v9 = *(uint32_t *)(a1 + 204);
      *(uint8_t *)(a1 + 244) = *(uint8_t *)(a1 + 274);
      *(uint32_t *)(a1 + 236) = v9;
      *(uint8_t *)(a1 + 246) = *(uint8_t *)(a1 + 278);
      *(uint8_t *)(a1 + 245) = *(uint8_t *)(a1 + 275);
      v10 = *(uint8_t *)(a1 + 277);
      *(uint8_t *)(a1 + 247) = v10;
      if ( v10 <= 7u )
        v11 = (v9 * (unsigned int)v10 + 7) >> 3;
      else
        v11 = v9 * (v10 >> 3);
      *(uint32_t *)(a1 + 240) = v11;
      v12 = *(uint8_t **)(a1 + 216);
      if ( *v12 != 0 )
      {
        png_read_filter_row(a1, a1 + 236, v12 + 1, *(uint32_t *)(a1 + 212) + 1, (uint8_t)*v12);
        v12 = *(uint8_t **)(a1 + 216);
      }
      memcpy(*(void **)(a1 + 212), v12, *(uint32_t *)(a1 + 196) + 1);
      if ( (*(uint8_t *)(a1 + 540) & 4) != 0 && *(uint8_t *)(a1 + 548) == 64 )
        png_do_read_intrapixel(a1 + 236, *(uint32_t *)(a1 + 216) + 1);
      if ( *(uint32_t *)(a1 + 92) != 0 || (*(uint8_t *)(a1 + 90) & 0x40) != 0 )
        png_do_read_transformations(a1);
      if ( *(uint8_t *)(a1 + 271) != 0 && (*(uint8_t *)(a1 + 92) & 2) != 0 )
      {
        if ( *(uint8_t *)(a1 + 272) <= 5u )
          png_do_read_interlace(a1);
        if ( a3 != nullptr )
          png_combine_row(a1, a3, s2[*(uint8_t *)(a1 + 272) + 4]);
        if ( a2 != nullptr )
          png_combine_row(a1, a2, s2[*(uint8_t *)(a1 + 272) + 12]);
      }
      else
      {
        if ( a2 != nullptr )
          png_combine_row(a1, a2, 255);
        if ( a3 != nullptr )
          png_combine_row(a1, a3, 255);
      }
      png_read_finish_row(a1);
      v13 = *(void (**)(int, uint32_t, uint32_t))(a1 + 388);
      if ( v13 != nullptr )
        v13(a1, *(uint32_t *)(a1 + 208), *(uint8_t *)(a1 + 272));
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_read_rows  (binary VA: 0xfa06d0)
// Original: png_read_rows
// ----------------------------------------------------------------------------
void png_read_rows(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  void *v7;
  int v8;
  void *v9;
  int v10;
  void *v11;
  void *v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v4 = a2;
  v5 = a3;
  if ( a1 != 0 )
  {
    if ( a3 != 0 )
    {
      if ( a2 != 0 )
      {
        if ( a4 != 0 )
        {
          v10 = 0;
          do
          {
            v12 = *(void **)(v5 + 4 * v10);
            v11 = *(void **)(v4 + 4 * v10++);
            v14 = v4;
            v16 = v5;
            png_read_row(a1, v11, v12);
            v4 = v14;
            v5 = v16;
          }
          while ( v10 != a4 );
        }
      }
      else if ( a4 != 0 )
      {
        v8 = 0;
        do
        {
          v9 = *(void **)(v5 + 4 * v8++);
          v15 = v5;
          png_read_row(a1, nullptr, v9);
          v5 = v15;
        }
        while ( v8 != a4 );
      }
    }
    else if ( a2 != 0 && a4 != 0 )
    {
      v6 = 0;
      do
      {
        v7 = *(void **)(v4 + 4 * v6++);
        v13 = v4;
        png_read_row(a1, v7, nullptr);
        v4 = v13;
      }
      while ( v6 != a4 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_read_image  (binary VA: 0xfa07c0)
// Original: png_read_image
// ----------------------------------------------------------------------------
void png_read_image(int a1, int a2)
{
  int v2;
  int v4;
  int i;
  void *v6;
  int v7;
  int v8;
  int v9;

  if ( a1 != 0 )
  {
    v9 = png_set_interlace_handling(a1);
    v2 = *(uint32_t *)(a1 + 184);
    *(uint32_t *)(a1 + 188) = v2;
    v8 = 0;
    if ( v9 > 0 )
    {
      v4 = v2;
      do
      {
        for ( i = 0; i != v4; a2 = v7 )
        {
          v6 = *(void **)(a2 + 4 * i++);
          v7 = a2;
          png_read_row(a1, v6, nullptr);
        }
        ++v8;
      }
      while ( v8 != v9 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_read_end  (binary VA: 0xfa0860)
// Original: png_read_end
// ----------------------------------------------------------------------------
void png_read_end(int a1, int a2)
{
  int v2;
  int chunk_header;
  int v4;
  bool v5;
  int v6;
  typedef void *_g4_t_s1;
  typedef _TBYTE _g4_t_s2;
  typedef char _g4_t_v9[10];
  typedef _TBYTE _g4_t_v10;
  typedef _TBYTE _g4_t_v11;
  typedef _TBYTE _g4_t_v12;
  typedef _TBYTE _g4_t_v13;
  typedef _TBYTE _g4_t_v14;
  typedef _TBYTE _g4_t_v15;
  typedef _TBYTE _g4_t_v16;
  typedef _TBYTE _g4_t_v17;
  typedef char _g4_t_v18[33];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (13u + sizeof(_g4_t_s1)) > _g4_s0 ? (13u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_s2)) > _g4_s1 ? (52u + sizeof(_g4_t_s2)) : _g4_s1,
    _g4_s3 = (62u + sizeof(_g4_t_v9)) > _g4_s2 ? (62u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v10)) > _g4_s3 ? (72u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (82u + sizeof(_g4_t_v11)) > _g4_s4 ? (82u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (92u + sizeof(_g4_t_v12)) > _g4_s5 ? (92u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (102u + sizeof(_g4_t_v13)) > _g4_s6 ? (102u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v14)) > _g4_s7 ? (112u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (122u + sizeof(_g4_t_v15)) > _g4_s8 ? (122u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (132u + sizeof(_g4_t_v16)) > _g4_s9 ? (132u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (142u + sizeof(_g4_t_v17)) > _g4_s10 ? (142u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (152u + sizeof(_g4_t_v18)) > _g4_s11 ? (152u + sizeof(_g4_t_v18)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 13u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 52u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 62u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 72u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 82u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 92u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 102u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 122u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 132u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 142u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 152u);

  if ( a1 != 0 )
  {
    png_crc_finish(a1, 0);
    while ( 1 )
    {
      g4_strcpy_raw(&s2, "IHDR");
      g4_strcpy_raw(&s2 + 5, "IDAT");
      g4_strcpy_raw(&v9, "IEND");
      g4_strcpy_raw(&v9 + 5, "PLTE");
      g4_strcpy_raw(&v10, "bKGD");
      g4_strcpy_raw(&v10 + 5, "cHRM");
      g4_strcpy_raw(&v11, "gAMA");
      g4_strcpy_raw(&v11 + 5, "hIST");
      g4_strcpy_raw(&v12, "iCCP");
      g4_strcpy_raw(&v12 + 5, "iTXt");
      g4_strcpy_raw(&v13, "oFFs");
      g4_strcpy_raw(&v13 + 5, "pCAL");
      g4_strcpy_raw(&v14, "pHYs");
      g4_strcpy_raw(&v14 + 5, "sBIT");
      g4_strcpy_raw(&v15, "sCAL");
      g4_strcpy_raw(&v15 + 5, "sPLT");
      g4_strcpy_raw(&v16, "sRGB");
      g4_strcpy_raw(&v16 + 5, "tEXt");
      g4_strcpy_raw(&v17, "tIME");
      g4_strcpy_raw(&v17 + 5, "tRNS");
      strcpy(v18, "zTXt");
      chunk_header = png_read_chunk_header(a1);
      if ( memcmp((const void *)(a1 + 264), &s2, 4u) == 0 )
      {
        png_handle_IHDR(a1, a2, chunk_header);
        v2 = *(uint32_t *)(a1 + 84);
        goto LABEL_4;
      }
      if ( memcmp((const void *)(a1 + 264), &v9, 4u) == 0 )
        break;
      v4 = png_handle_as_unknown(a1, (void *)(a1 + 264));
      s1 = (void *)(a1 + 264);
      if ( v4 == 0 )
      {
        if ( memcmp(s1, (char *)&s2 + 5, 4u) == 0 )
        {
          if ( chunk_header != 0 || (*(uint8_t *)(a1 + 85) & 0x20) != 0 )
            png_error(a1, (int)(uintptr_t)("Too many IDATs found"));
          png_crc_finish(a1, 0);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), (char *)&v9 + 5, 4u) == 0 )
        {
          png_handle_PLTE(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), &v10, 4u) == 0 )
        {
          png_handle_bKGD(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), (char *)&v10 + 5, 4u) == 0 )
        {
          png_handle_cHRM(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), &v11, 4u) == 0 )
        {
          png_handle_gAMA(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), (char *)&v11 + 5, 4u) == 0 )
        {
          png_handle_hIST(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), &v13, 4u) == 0 )
        {
          png_handle_oFFs(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), (char *)&v13 + 5, 4u) == 0 )
        {
          png_handle_pCAL(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), &v15, 4u) == 0 )
        {
          png_handle_sCAL(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), &v14, 4u) == 0 )
        {
          png_handle_pHYs(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), (char *)&v14 + 5, 4u) == 0 )
        {
          png_handle_sBIT(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), &v16, 4u) == 0 )
        {
          png_handle_sRGB(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), &v12, 4u) == 0 )
        {
          png_handle_iCCP(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), (char *)&v15 + 5, 4u) == 0 )
        {
          png_handle_sPLT(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), (char *)&v16 + 5, 4u) == 0 )
        {
          png_handle_tEXt(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), &v17, 4u) == 0 )
        {
          png_handle_tIME(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), (char *)&v17 + 5, 4u) == 0 )
        {
          png_handle_tRNS(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else if ( memcmp((const void *)(a1 + 264), v18, 4u) == 0 )
        {
          png_handle_zTXt(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        else
        {
          if ( memcmp((const void *)(a1 + 264), (char *)&v12 + 5, 4u) == 0 )
            png_handle_iTXt(a1, a2, chunk_header);
          else
            png_handle_unknown(a1, a2, chunk_header);
          v2 = *(uint32_t *)(a1 + 84);
        }
        goto LABEL_4;
      }
      if ( memcmp(s1, (char *)&s2 + 5, 4u) == 0 && (chunk_header != 0 || (*(uint8_t *)(a1 + 85) & 0x20) != 0) )
        png_error(a1, (int)(uintptr_t)("Too many IDATs found"));
      png_handle_unknown(a1, a2, chunk_header);
      v5 = memcmp((const void *)(a1 + 264), (char *)&v9 + 5, 4u) == 0;
      v2 = *(uint32_t *)(a1 + 84);
      if ( v5 )
      {
        v6 = v2 | 2;
        *(uint32_t *)(a1 + 84) = v6;
        if ( (v6 & 0x10) != 0 )
          return;
      }
      else
      {
LABEL_4:
        if ( (v2 & 0x10) != 0 )
          return;
      }
    }
    png_handle_IEND(a1, a2, chunk_header);
    v2 = *(uint32_t *)(a1 + 84);
    goto LABEL_4;
  }
}

// ----------------------------------------------------------------------------
// Function: png_read_destroy  (binary VA: 0xfa10f0)
// Original: png_read_destroy
// ----------------------------------------------------------------------------
int png_read_destroy(int a1, uint32_t *a2, uint32_t *a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int i;
  void *v9;
  uint32_t *v10;
  int v11;
  int j;
  void *v13;
  uint32_t *v14;
  int v15;
  int k;
  void *v17;
  uint16_t *v18;
  int v19;
  unsigned int v20;
  uint16_t *v21;
  char v23;
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

  if ( a2 != nullptr )
    png_info_destroy(a1, a2);
  if ( a3 != nullptr )
    png_info_destroy(a1, a3);
  png_free(a1, *(void **)(a1 + 152));
  png_free(a1, *(void **)(a1 + 564));
  png_free(a1, *(void **)(a1 + 212));
  png_free(a1, *(void **)(a1 + 624));
  png_free(a1, *(void **)(a1 + 472));
  png_free(a1, *(void **)(a1 + 476));
  png_free(a1, *(void **)(a1 + 336));
  png_free(a1, *(void **)(a1 + 340));
  png_free(a1, *(void **)(a1 + 344));
  v3 = *(uint32_t *)(a1 + 512);
  if ( (v3 & 0x1000) == 0 )
  {
    v4 = *(uint32_t *)(a1 + 512);
    BYTE1(v4) = BYTE1(v3) & 0xEF;
    *(uint32_t *)(a1 + 512) = v4;
    if ( (v3 & 0x2000) == 0 )
      goto LABEL_7;
LABEL_33:
    png_free(a1, *(void **)(a1 + 372));
    v24 = *(uint32_t *)(a1 + 512);
    v5 = v24;
    BYTE1(v5) = BYTE1(v24) & 0xDF;
    *(uint32_t *)(a1 + 512) = v5;
    if ( (v24 & 8) == 0 )
      goto LABEL_8;
    goto LABEL_34;
  }
  png_zfree(a1, *(void **)(a1 + 256));
  v4 = *(uint32_t *)(a1 + 512);
  BYTE1(v4) &= ~0x10u;
  v23 = BYTE1(*(uint32_t *)(a1 + 512)) & 0x20;
  *(uint32_t *)(a1 + 512) = v4;
  if ( v23 != 0 )
    goto LABEL_33;
LABEL_7:
  v5 = v4;
  BYTE1(v5) = BYTE1(v4) & 0xDF;
  *(uint32_t *)(a1 + 512) = v5;
  if ( (v4 & 8) != 0 )
  {
LABEL_34:
    png_free(a1, *(void **)(a1 + 480));
    v5 = *(uint32_t *)(a1 + 512);
  }
LABEL_8:
  v6 = *(uint32_t **)(a1 + 348);
  *(uint32_t *)(a1 + 512) = v5 & 0xFFFFFFF7;
  if ( v6 != nullptr )
  {
    v7 = 1 << (8 - *(uint8_t *)(a1 + 324));
    if ( v7 > 0 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (void *)v6[i];
        png_free(a1, v9);
        v6 = *(uint32_t **)(a1 + 348);
      }
    }
    png_free(a1, v6);
  }
  v10 = *(uint32_t **)(a1 + 352);
  if ( v10 != nullptr )
  {
    v11 = 1 << (8 - *(uint8_t *)(a1 + 324));
    if ( v11 > 0 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (void *)v10[j];
        png_free(a1, v13);
        v10 = *(uint32_t **)(a1 + 352);
      }
    }
    png_free(a1, v10);
  }
  v14 = *(uint32_t **)(a1 + 356);
  if ( v14 != nullptr )
  {
    v15 = 1 << (8 - *(uint8_t *)(a1 + 324));
    if ( v15 > 0 )
    {
      for ( k = 0; k != v15; ++k )
      {
        v17 = (void *)v14[k];
        png_free(a1, v17);
        v14 = *(uint32_t **)(a1 + 356);
      }
    }
    png_free(a1, v14);
  }
  v18 = (uint16_t *)a1;
  png_free(a1, *(void **)(a1 + 508));
  inflateEnd(a1 + 96);
  png_free(a1, *(void **)(a1 + 412));
  png_free(a1, *(void **)(a1 + 464));
  v28 = *(uint32_t *)a1;
  v29 = *(uint32_t *)(a1 + 4);
  v30 = *(uint32_t *)(a1 + 8);
  v31 = *(uint32_t *)(a1 + 12);
  v32 = *(uint32_t *)(a1 + 16);
  v33 = *(uint32_t *)(a1 + 20);
  v34 = *(uint32_t *)(a1 + 24);
  v35 = *(uint32_t *)(a1 + 28);
  v36 = *(uint32_t *)(a1 + 32);
  v37 = *(uint32_t *)(a1 + 36);
  v25 = *(uint32_t *)(a1 + 48);
  v26 = *(uint32_t *)(a1 + 52);
  v19 = *(uint32_t *)(a1 + 44);
  v27 = *(uint32_t *)(a1 + 560);
  v20 = 632;
  if ( (a1 & 1) != 0 )
  {
    *(uint8_t *)a1 = 0;
    v18 = (uint16_t *)(a1 + 1);
    LOBYTE(v20) = 119;
  }
  if ( ((uint8_t)(uintptr_t)(v18) & 2) != 0 )
  {
    *v18 = 0;
    v20 -= 2;
    ++v18;
  }
  memset(v18, 0, 4 * (v20 >> 2));
  v21 = &v18[2 * (v20 >> 2)];
  if ( (v20 & 2) != 0 )
    *v21++ = 0;
  if ( (v20 & 1) != 0 )
    *(uint8_t *)v21 = 0;
  *(uint32_t *)(a1 + 44) = v19;
  *(uint32_t *)(a1 + 48) = v25;
  *(uint32_t *)(a1 + 52) = v26;
  *(uint32_t *)(a1 + 560) = v27;
  *(uint32_t *)a1 = v28;
  *(uint32_t *)(a1 + 4) = v29;
  *(uint32_t *)(a1 + 8) = v30;
  *(uint32_t *)(a1 + 12) = v31;
  *(uint32_t *)(a1 + 16) = v32;
  *(uint32_t *)(a1 + 20) = v33;
  *(uint32_t *)(a1 + 24) = v34;
  *(uint32_t *)(a1 + 28) = v35;
  *(uint32_t *)(a1 + 32) = v36;
  *(uint32_t *)(a1 + 36) = v37;
  return v37;
}

// ----------------------------------------------------------------------------
// Function: png_destroy_read_struct  (binary VA: 0xfa14e0)
// Original: png_destroy_read_struct
// ----------------------------------------------------------------------------
uint32_t ** png_destroy_read_struct(uint32_t **a1, uint32_t **a2, uint32_t **a3)
{
  uint32_t **result;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  void (*v7)(uint8_t *, void *);
  int v8;

  if ( a1 != nullptr )
  {
    result = a1;
    v4 = *a1;
    if ( *a1 != nullptr )
    {
      v7 = (void (*)(uint8_t *, void *))v4[140];
      v5 = nullptr;
      v8 = v4[138];
      if ( a2 != nullptr )
        v5 = *a2;
      v6 = nullptr;
      if ( a3 != nullptr )
        v6 = *a3;
      png_read_destroy((int)(uintptr_t)(v4), v5, v6);
      if ( v5 != nullptr )
      {
        png_free_data((int)(uintptr_t)(v4), v5, 0x4000, -1);
        png_destroy_struct_2(v5, v7, v8);
        *a2 = nullptr;
      }
      if ( v6 != nullptr )
      {
        png_free_data((int)(uintptr_t)(v4), v6, 0x4000, -1);
        png_destroy_struct_2(v6, v7, v8);
        *a3 = nullptr;
      }
      png_destroy_struct_2(v4, v7, v8);
      *a1 = nullptr;
      return a1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_read_status_fn  (binary VA: 0xfa1620)
// Original: png_set_read_status_fn
// ----------------------------------------------------------------------------
int png_set_read_status_fn(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 388) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_read_png  (binary VA: 0xfa1640)
// Original: png_read_png
// ----------------------------------------------------------------------------
void png_read_png(int a1, uint32_t *a2, int16_t a3)
{
  uint32_t *v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  size_t rowbytes;
  typedef void **_g4_t_v9;
  typedef uint32_t _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  if ( a1 == 0 )
    return;
  png_read_info(a1, (int)(uintptr_t)(a2));
  if ( a2[1] > 0x3FFFFFFFu )
    png_error(a1, (int)(uintptr_t)("Image is too high to process with png_read_png()"));
  if ( (a3 & 1) != 0 )
    png_set_strip_16(a1);
  if ( (a3 & 2) != 0 )
    png_set_strip_alpha(a1);
  if ( (a3 & 8) != 0 )
    png_set_packswap(a1);
  if ( (a3 & 0x10) == 0 || *(uint8_t *)(a1 + 275) > 7u && *(uint8_t *)(a1 + 274) != 3 && png_get_valid(a1, (int)(uintptr_t)(a2), 16) == 0 )
  {
    if ( (a3 & 0x20) != 0 )
      goto LABEL_29;
LABEL_11:
    if ( (a3 & 0x40) != 0 )
      goto LABEL_30;
    goto LABEL_12;
  }
  png_set_expand(a1);
  if ( (a3 & 0x20) == 0 )
    goto LABEL_11;
LABEL_29:
  png_set_invert_mono(a1);
  if ( (a3 & 0x40) != 0 )
  {
LABEL_30:
    if ( png_get_valid(a1, (int)(uintptr_t)(a2), 2) != 0 )
    {
      png_get_sBIT(a1, (int)(uintptr_t)(a2), v10);
      png_set_shift(a1, v10[0]);
    }
  }
LABEL_12:
  if ( (a3 & 0x80) != 0 )
    png_set_bgr(a1);
  if ( (a3 & 0x100) != 0 )
    png_set_swap_alpha(a1);
  if ( (a3 & 0x200) != 0 )
    png_set_swap(a1);
  if ( (a3 & 0x400) != 0 )
    png_set_invert_alpha(a1);
  if ( (a3 & 0x2000) != 0 )
    png_set_gray_to_rgb(a1);
  png_read_update_info(a1, (int)(uintptr_t)(a2));
  png_free_data(a1, a2, 64, 0);
  v3 = (uint32_t *)a2[62];
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(png_malloc(a1, 4 * a2[1]));
    v4 = a2[1];
    a2[62] = (uint32_t)(uintptr_t)(v3);
    if ( v4 != 0 )
    {
      v5 = 0;
      do
      {
        v3[v5++] = 0;
        v6 = a2[1];
        v3 = (uint32_t *)a2[62];
      }
      while ( v6 > v5 );
      a2[46] |= 0x40u;
      if ( v6 > 0 )
      {
        v7 = 0;
        do
        {
          v9 = (void **)&v3[v7];
          rowbytes = png_get_rowbytes(a1, (int)(uintptr_t)(a2));
          ++v7;
          *v9 = png_malloc(a1, rowbytes);
          v3 = (uint32_t *)a2[62];
        }
        while ( a2[1] > v7 );
      }
    }
    else
    {
      a2[46] |= 0x40u;
    }
  }
  png_read_image(a1, (int)(uintptr_t)(v3));
  a2[2] |= 0x8000u;
  png_read_end(a1, (int)(uintptr_t)(a2));
}

// ----------------------------------------------------------------------------
// Function: png_default_read_data  (binary VA: 0xfa1940)
// Original: png_default_read_data
// ----------------------------------------------------------------------------
void png_default_read_data(int a1, void *ptr, size_t n)
{
  if ( a1 != 0 && fread(ptr, 1u, n, *(FILE **)(a1 + 64)) != n )
    png_error(a1, (int)(uintptr_t)("Read Error"));
}

// ----------------------------------------------------------------------------
// Function: png_read_data  (binary VA: 0xfa19b0)
// Original: png_read_data
// ----------------------------------------------------------------------------
int png_read_data(int a1, int a2, int a3)
{
  int (*v3)(int, int, int);

  v3 = *(int (**)(int, int, int))(a1 + 60);
  if ( v3 == nullptr )
    png_error(a1, (int)(uintptr_t)("Call to NULL read function"));
  return v3(a1, a2, a3);
}



// ============================================================================
// Address:   0xfa1a00 (size: 127 bytes)
// Symbol:    png_set_read_fn
// Demangled: png_set_read_fn
// ============================================================================
void (*png_set_read_fn(
        uint32_t *a1,
        int a2,
        void (*a3)(int a1, void *ptr, size_t n)))(int a1, void *ptr, size_t n)
{
  void (*result)(int, void *, size_t);

  result = a3;
  if ( a1 != nullptr )
  {
    if ( a3 == nullptr )
      result = png_default_read_data;
    a1[15] = (uint32_t)(uintptr_t)(result);
    result = (void (*)(int, void *, size_t))a1[14];
    a1[16] = a2;
    if ( result != nullptr )
    {
      a1[14] = 0;
      png_warning((int)(uintptr_t)(a1), "It's an error to set both read_data_fn and write_data_fn in the ");
      result = (void (*)(int, void *, size_t))png_warning(
                                                        (int)(uintptr_t)(a1),
                                                        "same structure.  Resetting write_data_fn to NULL");
    }
    a1[78] = 0;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: png_set_crc_action  (binary VA: 0xfa1a80)
// Original: png_set_crc_action
// ----------------------------------------------------------------------------
int16_t png_set_crc_action(int a1, int a2, int a3)
{
  int v3;

  LOWORD(v3) = a2;
  if ( a1 == 0 )
    return v3;
  if ( a2 == 3 )
  {
    v3 = *(uint32_t *)(a1 + 88);
    BYTE1(v3) = BYTE1(v3) & 0xF3 | 4;
    *(uint32_t *)(a1 + 88) = v3;
  }
  else
  {
    if ( a2 <= 3 )
    {
      if ( a2 == 2 )
        LOWORD(v3) = png_warning(a1, "Can't discard critical data on CRC error");
      goto LABEL_6;
    }
    if ( a2 == 4 )
    {
      *(uint32_t *)(a1 + 88) |= 0xC00u;
    }
    else if ( a2 != 5 )
    {
LABEL_6:
      *(uint32_t *)(a1 + 88) &= 0xFFFFF3FF;
    }
  }
  switch ( a3 )
  {
    case 1:
      v3 = *(uint32_t *)(a1 + 88);
      BYTE1(v3) = BYTE1(v3) & 0xFC | 2;
      *(uint32_t *)(a1 + 88) = v3;
      break;
    case 3:
      v3 = *(uint32_t *)(a1 + 88);
      BYTE1(v3) = BYTE1(v3) & 0xFC | 1;
      *(uint32_t *)(a1 + 88) = v3;
      break;
    case 4:
      *(uint32_t *)(a1 + 88) |= 0x300u;
      break;
    case 5:
      return v3;
    default:
      *(uint32_t *)(a1 + 88) &= 0xFFFFFCFF;
      return v3;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: png_set_background  (binary VA: 0xfa1b70)
// Original: png_set_background
// ----------------------------------------------------------------------------
int png_set_background(int a1, int a2, int a3, int a4, double a5)
{
  int result;
  float v6; // xmm0_4
  int16_t v7;

  result = a1;
  if ( a1 != 0 )
  {
    if ( a3 != 0 )
    {
      v6 = a5;
      *(uint32_t *)(a1 + 92) |= 0x80u;
      *(uint32_t *)(a1 + 292) = *(uint32_t *)a2;
      *(uint32_t *)(a1 + 296) = *(uint32_t *)(a2 + 4);
      v7 = *(uint16_t *)(a2 + 8);
      *(uint8_t *)(a1 + 284) = a3;
      *(uint16_t *)(a1 + 300) = v7;
      *(uint32_t *)(a1 + 92) |= a4 == 0 ? 0 : 0x100;
      *(float *)(a1 + 288) = v6;
    }
    else
    {
      return png_warning(a1, "Application must supply a known background gamma");
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_strip_16  (binary VA: 0xfa1c20)
// Original: png_set_strip_16
// ----------------------------------------------------------------------------
int png_set_strip_16(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 92) |= 0x400u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_strip_alpha  (binary VA: 0xfa1c40)
// Original: png_set_strip_alpha
// ----------------------------------------------------------------------------
int png_set_strip_alpha(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 88) |= 0x400000u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_quantize  (binary VA: 0xfa1c60)
// Original: png_set_quantize
// ----------------------------------------------------------------------------
void png_set_quantize(int a1, uint8_t *a2, signed int a3, int a4, int a5, int a6)
{
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  signed int v9;
  uint8_t *v10;
  int i;
  int v12;
  int v13;
  int v14;
  void *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint8_t *v24;
  uint8_t *v25;
  int v26;
  int v27;
  signed int v28;
  uint8_t *v29;
  uint8_t v30; // di
  uint8_t v31; // bp
  int v32;
  int v33;
  uint8_t *v34;
  uint8_t v35; // si
  uint8_t v36;
  uint8_t v37;
  char v38;
  int v39;
  char v40; // si
  uint8_t *v41;
  signed int v42;
  int v43;
  signed int v44;
  uint8_t *v45;
  int v46;
  int j;
  uint8_t *v48;
  signed int v49;
  uint32_t *v50;
  int v51;
  uint8_t *v52;
  uint8_t *v53;
  int v54;
  int v55;
  uint8_t *v56;
  uint32_t *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  uint8_t *v62;
  uint8_t *v63;
  int v64;
  char v65;
  uint8_t *v66;
  int k;
  void **v68;
  uint8_t *v69;
  int v70;
  signed int v71;
  signed int v72;
  int v73;
  int v74;
  uint8_t v75;
  uint8_t *v76;
  int v77;
  char v78;
  int v79;
  int v80;
  uint8_t v81;
  int v82;
  int v83;
  int v84;
  void *v85;
  uint8_t v86;
  void *v87;
  uint32_t *v88;
  uint8_t *s;
  void *v90;
  void *v91;
  char *v92;
  int v93;
  int v94;
  int v95;
  int m;
  int v97;
  int v98;
  uint8_t *v99;
  int v100;
  int v101;
  int v102;
  char v103;
  int **v104;
  uint8_t *v105;
  int v106;
  int v107;

  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 92) |= 0x40u;
    if ( a6 == 0 )
    {
      v45 = (uint8_t *)(png_malloc(a1, a3));
      *(uint32_t *)(a1 + 476) = (uint32_t)(uintptr_t)(v45);
      if ( a3 > 0 )
      {
        v46 = 0;
        while ( 1 )
        {
          v45[v46] = v46;
          if ( ++v46 == a3 )
            break;
          v45 = *(uint8_t **)(a1 + 476);
        }
      }
    }
    if ( a3 > a4 )
    {
      if ( a5 != 0 )
      {
        v6 = (uint8_t *)(png_malloc(a1, a3));
        *(uint32_t *)(a1 + 568) = (uint32_t)(uintptr_t)(v6);
        if ( a3 > 0 )
        {
          v7 = 0;
          while ( 1 )
          {
            v6[v7] = v7;
            if ( ++v7 == a3 )
              break;
            v6 = *(uint8_t **)(a1 + 568);
          }
        }
        v21 = a3 - 1;
        if ( a4 <= a3 - 1 )
        {
          do
          {
            if ( v21 <= 0 )
              break;
            v22 = 0;
            v23 = 1;
            v74 = v21;
            do
            {
              v90 = (void *)(v22 + 1);
              v24 = (uint8_t *)(*(uint32_t *)(a1 + 568) + v22);
              v81 = *v24;
              v86 = v24[1];
              if ( *(uint16_t *)(a5 + 2 * *v24) < *(uint16_t *)(a5 + 2 * v86) )
              {
                *v24 = v86;
                *(uint8_t *)(*(uint32_t *)(a1 + 568) + v22 + 1) = v81;
                v23 = 0;
              }
              ++v22;
            }
            while ( v90 != (void *)v21 );
            if ( v23 != 0 )
              break;
            --v21;
          }
          while ( a4 <= v74 - 1 );
        }
        if ( a6 != 0 )
        {
          if ( a4 > 0 )
          {
            v8 = a2;
            v9 = a3;
            v10 = *(uint8_t **)(a1 + 568);
            for ( i = 0; i != a4; ++i )
            {
              if ( a4 <= v10[i] )
              {
                do
                  --v9;
                while ( a4 <= v10[v9] );
                v69 = &a2[3 * v9];
                *(uint16_t *)v8 = *(uint16_t *)v69;
                v8[2] = v69[2];
                v10 = *(uint8_t **)(a1 + 568);
              }
              v8 += 3;
            }
            v12 = a1;
            goto LABEL_14;
          }
        }
        else
        {
          if ( a4 > 0 )
          {
            v25 = a2;
            v26 = 0;
            v71 = a3;
            do
            {
              v27 = *(uint32_t *)(a1 + 568);
              if ( a4 <= *(uint8_t *)(v27 + v26) )
              {
                v28 = v71;
                do
                  --v28;
                while ( a4 <= *(uint8_t *)(v27 + v28) );
                v29 = &a2[3 * v28];
                v71 = v28;
                v75 = v29[2];
                v30 = v29[1];
                v31 = *v29;
                *(uint16_t *)v29 = *(uint16_t *)v25;
                v29[2] = v25[2];
                *v25 = v31;
                v25[1] = v30;
                v25[2] = v75;
                *(uint8_t *)(*(uint32_t *)(a1 + 476) + v28) = v26;
                *(uint8_t *)(*(uint32_t *)(a1 + 476) + v26) = v28;
              }
              ++v26;
              v25 += 3;
            }
            while ( v26 != a4 );
          }
          v32 = 0;
          if ( a3 > 0 )
          {
            do
            {
              v76 = (uint8_t *)(*(uint32_t *)(a1 + 476) + v32);
              v33 = (uint8_t)*v76;
              if ( a4 <= v33 )
              {
                v34 = &a2[3 * v33];
                v35 = *v34;
                v36 = v34[1];
                v37 = v34[2];
                v38 = 0;
                if ( a4 > 1 )
                {
                  v82 = v35;
                  v91 = (void *)v37;
                  v39 = v35 - *a2;
                  v40 = 0;
                  v87 = (void *)v36;
                  v98 = v32;
                  v41 = a2;
                  v42 = __builtin_abs(v36 - a2[1]) + __builtin_abs(v39) + __builtin_abs((int)(uintptr_t)(v91) - a2[2]);
                  v43 = 1;
                  while ( 1 )
                  {
                    v44 = __builtin_abs(v82 - v41[3])
                        + __builtin_abs((int)(uintptr_t)(v87) - v41[4])
                        + __builtin_abs((int)(uintptr_t)(v91) - v41[5]);
                    if ( v44 < v42 )
                      v40 = v43;
                    else
                      v44 = v42;
                    ++v43;
                    v41 += 3;
                    if ( v43 == a4 )
                      break;
                    v42 = v44;
                  }
                  v32 = v98;
                  v38 = v40;
                }
                *v76 = v38;
              }
              ++v32;
            }
            while ( v32 != a3 );
            v12 = a1;
            v10 = *(uint8_t **)(a1 + 568);
            goto LABEL_14;
          }
        }
        v12 = a1;
        v10 = *(uint8_t **)(a1 + 568);
LABEL_14:
        png_free(v12, v10);
        *(uint32_t *)(v12 + 568) = 0;
        a3 = a4;
        goto LABEL_15;
      }
      *(uint32_t *)(a1 + 572) = (uint32_t)(uintptr_t)(png_malloc(a1, a3));
      *(uint32_t *)(a1 + 576) = (uint32_t)(uintptr_t)(png_malloc(a1, a3));
      if ( a3 > 0 )
      {
        for ( j = 0; j != a3; ++j )
        {
          *(uint8_t *)(*(uint32_t *)(a1 + 572) + j) = j;
          *(uint8_t *)(*(uint32_t *)(a1 + 576) + j) = j;
        }
      }
      v48 = nullptr;
      v88 = (uint32_t *)(png_calloc(a1, 0xC04u));
      v49 = a3;
      v92 = (char *)&dword_60;
      v50 = (uint32_t *)a1;
      while ( 1 )
      {
        v51 = 0;
        v100 = v49 - 1;
        v94 = (int)(uintptr_t)(v50);
        v52 = a2 + 3;
        v53 = v48;
        v54 = v49;
        if ( v49 - 1 > 0 )
        {
          while ( 1 )
          {
            v55 = v51 + 1;
            v77 = v55;
            if ( v54 > v55 )
            {
              v56 = v52;
              v83 = v55;
              v103 = v55 - 1;
              do
              {
                v72 = __builtin_abs(*(v52 - 2) - v56[1])
                    + __builtin_abs(*(v52 - 3) - *v56)
                    + __builtin_abs(*(v52 - 1) - v56[2]);
                if ( (int)(uintptr_t)(v92) >= v72 )
                {
                  v53 = (uint8_t *)(png_malloc_warn(v94, 8u));
                  if ( v53 == nullptr )
                  {
                    v58 = v54;
                    v50 = (uint32_t *)v94;
                    goto LABEL_107;
                  }
                  v57 = &v88[v72];
                  *(uint32_t *)v53 = *v57;
                  v53[4] = v103;
                  v53[5] = v83;
                  *v57 = (uint32_t)(uintptr_t)(v53);
                }
                ++v83;
                v56 += 3;
              }
              while ( v83 != v54 );
            }
            v52 += 3;
            if ( v53 == nullptr )
              break;
            v51 = v77;
            if ( v77 >= v100 )
              goto LABEL_87;
          }
          v58 = v54;
          v50 = (uint32_t *)v94;
LABEL_107:
          v48 = nullptr;
          goto LABEL_108;
        }
LABEL_87:
        v58 = v54;
        v50 = (uint32_t *)v94;
        v48 = v53;
        if ( v53 != nullptr )
          break;
LABEL_108:
        v79 = v58;
        for ( k = 0; k != 769; ++k )
        {
          v68 = (void **)v88[k];
          if ( v68 != nullptr )
          {
            while ( 1 )
            {
              v48 = (uint8_t *)(*v68);
              png_free((int)(uintptr_t)(v50), v68);
              if ( v48 == nullptr )
                break;
              v68 = (void **)v48;
            }
          }
          v88[k] = 0;
        }
        v49 = v79;
        v92 += 96;
        if ( v79 <= a4 )
        {
          png_free(a1, v88);
          png_free(a1, *(void **)(a1 + 576));
          png_free(a1, *(void **)(a1 + 572));
          *(uint32_t *)(a1 + 576) = 0;
          *(uint32_t *)(a1 + 572) = 0;
          a3 = a4;
          goto LABEL_15;
        }
      }
      v95 = 0;
      v99 = v53;
      while ( v88[v95] == 0 )
      {
LABEL_118:
        if ( (int)(uintptr_t)(v92) < ++v95 )
        {
LABEL_119:
          v48 = v99;
          goto LABEL_108;
        }
      }
      v104 = (int **)v88[v95];
      while ( 2 )
      {
        v59 = v50[143];
        if ( v58 > *(uint8_t *)(v59 + *((uint8_t *)v104 + 4)) )
        {
          v60 = *((uint8_t *)v104 + 5);
          if ( v58 > *(uint8_t *)(v59 + v60) )
          {
            v61 = *((uint8_t *)v104 + 4);
            if ( (v58 & 1) == 0 )
            {
              v61 = *((uint8_t *)v104 + 5);
              v60 = *((uint8_t *)v104 + 4);
            }
            --v58;
            v101 = v60;
            v62 = &a2[3 * v58];
            v63 = &a2[3 * *(uint8_t *)(v59 + v61)];
            *(uint16_t *)v63 = *(uint16_t *)v62;
            v63[2] = v62[2];
            v64 = v50[143];
            v65 = *(uint8_t *)(v64 + v61);
            if ( a6 == 0 )
            {
              v78 = *(uint8_t *)(v64 + v61);
              if ( a3 > 0 )
              {
                v84 = 0;
                while ( 1 )
                {
                  v66 = (uint8_t *)(v50[119] + v84);
                  if ( *v66 == v78 )
                  {
                    *v66 = *(uint8_t *)(v64 + v101);
                    v66 = (uint8_t *)(v50[119] + v84);
                    v64 = v50[143];
                    v78 = *(uint8_t *)(v64 + v61);
                    if ( (uint8_t)*v66 == v58 )
                    {
LABEL_105:
                      *v66 = v78;
                      v64 = v50[143];
                      v78 = *(uint8_t *)(v64 + v61);
                    }
                  }
                  else if ( (uint8_t)*v66 == v58 )
                  {
                    goto LABEL_105;
                  }
                  if ( ++v84 == a3 )
                  {
                    v65 = v78;
                    break;
                  }
                }
              }
            }
            *(uint8_t *)(v64 + *(uint8_t *)(v50[144] + v58)) = v65;
            *(uint8_t *)(v50[144] + *(uint8_t *)(v50[143] + v61)) = *(uint8_t *)(v50[144] + v58);
            *(uint8_t *)(v50[143] + v61) = v58;
            *(uint8_t *)(v50[144] + v58) = v61;
          }
        }
        if ( v58 <= a4 )
          goto LABEL_119;
        v104 = (int **)*v104;
        if ( v104 == nullptr )
          goto LABEL_118;
        continue;
      }
    }
LABEL_15:
    if ( *(uint32_t *)(a1 + 256) == 0 )
      *(uint32_t *)(a1 + 256) = (uint32_t)(uintptr_t)(a2);
    *(uint16_t *)(a1 + 260) = a3;
    if ( a6 != 0 )
    {
      *(uint32_t *)(a1 + 472) = (uint32_t)(uintptr_t)(png_calloc(a1, 0x8000u));
      s = (uint8_t *)png_malloc(a1, 0x8000u);
      memset(s, 255, 0x8000u);
      if ( a3 > 0 )
      {
        v93 = 0;
        v105 = a2;
        do
        {
          v106 = 0;
          v107 = *v105 >> 3;
          v102 = v105[1] >> 3;
          v73 = v105[2] >> 3;
          do
          {
            v13 = v107 - v106;
            if ( v106 > v107 )
              v13 = v106 - v107;
            v97 = v13;
            for ( m = 0; m != 32; ++m )
            {
              v14 = m - v102;
              if ( m <= v102 )
                v14 = v102 - m;
              v15 = (void *)(v14 + v97);
              if ( v14 < v97 )
                v14 = v97;
              v70 = v14;
              v85 = v15;
              v16 = 0;
              v80 = (v106 << 10) | (32 * m);
              do
              {
                v17 = v16 - v73;
                v18 = v16 | v80;
                if ( v16 <= v73 )
                  v17 = v73 - v16;
                v19 = v70;
                if ( v17 >= v70 )
                  v19 = v17;
                v20 = (int)(uintptr_t)(v85) + v19 + v17;
                if ( v20 < s[v18] )
                {
                  s[v18] = v20;
                  *(uint8_t *)(*(uint32_t *)(a1 + 472) + (v16 | v80)) = v93;
                }
                ++v16;
              }
              while ( v16 != 32 );
            }
            ++v106;
          }
          while ( v106 != 32 );
          ++v93;
          v105 += 3;
        }
        while ( v93 != a3 );
      }
      png_free(a1, s);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_gamma  (binary VA: 0xfa27c0)
// Original: png_set_gamma
// ----------------------------------------------------------------------------
int png_set_gamma(int a1, double a2, double a3)
{
  int result;
  float v4; // xmm2_4
  float v5; // xmm1_4
  char v6;

  result = a1;
  if ( a1 != 0 )
  {
    if ( fabs(a3 * a2 - 1.0) > 0.05 || ((v6 = *(uint8_t *)(a1 + 274)) & 4) != 0 || v6 == 3 )
      *(uint32_t *)(a1 + 92) |= 0x2000u;
    v4 = a3;
    v5 = a2;
    *(float *)(a1 + 328) = v4;
    *(float *)(a1 + 332) = v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_expand  (binary VA: 0xfa2850)
// Original: png_set_expand
// ----------------------------------------------------------------------------
int png_set_expand(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 92) |= 0x2001000u;
    *(uint32_t *)(a1 + 88) &= ~0x40u;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_palette_to_rgb  (binary VA: 0xfa2870)
// Original: png_set_palette_to_rgb
// ----------------------------------------------------------------------------
int png_set_palette_to_rgb(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 92) |= 0x2001000u;
    *(uint32_t *)(a1 + 88) &= ~0x40u;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_expand_gray_1_2_4_to_8  (binary VA: 0xfa2890)
// Original: png_set_expand_gray_1_2_4_to_8
// ----------------------------------------------------------------------------
int png_set_expand_gray_1_2_4_to_8(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 92) |= 0x1000u;
    *(uint32_t *)(a1 + 88) &= ~0x40u;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_tRNS_to_alpha  (binary VA: 0xfa28b0)
// Original: png_set_tRNS_to_alpha
// ----------------------------------------------------------------------------
int png_set_tRNS_to_alpha(int a1)
{
  *(uint32_t *)(a1 + 92) |= 0x2001000u;
  *(uint32_t *)(a1 + 88) &= ~0x40u;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: png_set_gray_to_rgb  (binary VA: 0xfa28d0)
// Original: png_set_gray_to_rgb
// ----------------------------------------------------------------------------
int png_set_gray_to_rgb(int a1)
{
  *(uint32_t *)(a1 + 92) |= 0x4000u;
  *(uint32_t *)(a1 + 88) &= ~0x40u;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: png_set_rgb_to_gray_fixed  (binary VA: 0xfa28f0)
// Original: png_set_rgb_to_gray_fixed
// ----------------------------------------------------------------------------
void png_set_rgb_to_gray_fixed(int a1, int a2, int a3, int a4)
{
  unsigned int v4;
  unsigned int v5;
  int16_t v6;

  if ( a1 != 0 )
  {
    switch ( a2 )
    {
      case 2:
        *(uint32_t *)(a1 + 92) |= 0x400000u;
        break;
      case 3:
        *(uint32_t *)(a1 + 92) |= 0x200000u;
        if ( *(uint8_t *)(a1 + 274) != 3 )
        {
LABEL_7:
          if ( a4 < 0 )
            goto LABEL_15;
          goto LABEL_8;
        }
LABEL_14:
        *(uint32_t *)(a1 + 92) |= 0x1000u;
        if ( a4 >= 0 )
        {
LABEL_8:
          if ( a3 >= 0 )
          {
            if ( a3 + a4 > 99999 )
            {
              png_warning(a1, "ignoring out of range rgb_to_gray coefficients");
              v6 = 2366;
              LOWORD(v5) = 23434;
              LOWORD(v4) = 6968;
            }
            else
            {
              v4 = (unsigned int)((175921861 * (uint64_t)((a3 << 10) & 0x7FFFFFF)) >> 32) >> 7;
              v5 = (unsigned int)((175921861 * (uint64_t)((a4 << 10) & 0x7FFFFFF)) >> 32) >> 7;
              v6 = 0x8000 - v4 - v5;
            }
            goto LABEL_11;
          }
        }
LABEL_15:
        v6 = 2366;
        LOWORD(v5) = 23434;
        LOWORD(v4) = 6968;
LABEL_11:
        *(uint16_t *)(a1 + 534) = v4;
        *(uint16_t *)(a1 + 536) = v5;
        *(uint16_t *)(a1 + 538) = v6;
        return;
      case 1:
        *(uint32_t *)(a1 + 92) |= 0x600000u;
        break;
      default:
        break;
    }
    if ( *(uint8_t *)(a1 + 274) != 3 )
      goto LABEL_7;
    goto LABEL_14;
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_rgb_to_gray  (binary VA: 0xfa2a50)
// Original: png_set_rgb_to_gray
// ----------------------------------------------------------------------------
void png_set_rgb_to_gray(int a1, int a2, double a3, double a4)
{
  float v4; // xmm1_4
  float v5; // xmm0_4

  if ( a1 != 0 )
  {
    v4 = a4;
    v5 = a3;
    png_set_rgb_to_gray_fixed(a1, a2, (int)(v5 * 100000.0 + 0.5), (int)(v4 * 100000.0 + 0.5));
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_read_user_transform_fn  (binary VA: 0xfa2ad0)
// Original: png_set_read_user_transform_fn
// ----------------------------------------------------------------------------
int png_set_read_user_transform_fn(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 92) |= 0x100000u;
    *(uint32_t *)(a1 + 68) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_read_transform_info  (binary VA: 0xfa2af0)
// Original: png_read_transform_info
// ----------------------------------------------------------------------------
unsigned int png_read_transform_info(int a1, int a2)
{
  int v2;
  char v3;
  char v4;
  char v5; // di
  uint8_t v6; // bp
  int v7;
  uint8_t v8;
  unsigned int result;
  uint8_t v10;
  uint8_t v11; // si
  char v12;
  uint8_t v13;

  v2 = *(uint32_t *)(a1 + 92);
  if ( (v2 & 0x1000) != 0 )
  {
    v3 = *(uint8_t *)(a2 + 25);
    if ( v3 == 3 )
    {
      v12 = 2;
      if ( *(uint16_t *)(a1 + 262) != 0 )
        v12 = (v2 & 0x2000000) == 0 ? 2 : 6;
      *(uint8_t *)(a2 + 25) = v12;
      *(uint8_t *)(a2 + 24) = 8;
      *(uint16_t *)(a2 + 22) = 0;
      v2 = *(uint32_t *)(a1 + 92);
    }
    else
    {
      if ( *(uint16_t *)(a1 + 262) != 0 && (v2 & 0x2000000) != 0 )
        *(uint8_t *)(a2 + 25) = v3 | 4;
      if ( *(uint8_t *)(a2 + 24) <= 7u )
        *(uint8_t *)(a2 + 24) = 8;
      *(uint16_t *)(a2 + 22) = 0;
      v2 = *(uint32_t *)(a1 + 92);
    }
  }
  if ( (v2 & 0x80u) != 0 )
  {
    *(uint8_t *)(a2 + 25) &= ~4u;
    *(uint16_t *)(a2 + 22) = 0;
    *(uint32_t *)(a2 + 90) = *(uint32_t *)(a1 + 292);
    *(uint32_t *)(a2 + 94) = *(uint32_t *)(a1 + 296);
    *(uint16_t *)(a2 + 98) = *(uint16_t *)(a1 + 300);
    v2 = *(uint32_t *)(a1 + 92);
  }
  if ( (v2 & 0x2000) != 0 )
  {
    *(uint32_t *)(a2 + 40) = *(uint32_t *)(a1 + 328);
    *(uint32_t *)(a2 + 252) = *(uint32_t *)(a1 + 544);
    v2 = *(uint32_t *)(a1 + 92);
  }
  if ( (v2 & 0x400) != 0 && *(uint8_t *)(a2 + 24) == 16 )
  {
    *(uint8_t *)(a2 + 24) = 8;
    v2 = *(uint32_t *)(a1 + 92);
  }
  if ( (v2 & 0x4000) != 0 )
  {
    *(uint8_t *)(a2 + 25) |= 2u;
    v2 = *(uint32_t *)(a1 + 92);
  }
  if ( (v2 & 0x600000) != 0 )
  {
    *(uint8_t *)(a2 + 25) &= ~2u;
    v2 = *(uint32_t *)(a1 + 92);
  }
  v4 = *(uint8_t *)(a2 + 25);
  if ( (v2 & 0x40) != 0 && (v4 == 6 || v4 == 2) && *(uint32_t *)(a1 + 472) != 0 && *(uint8_t *)(a2 + 24) == 8 )
  {
    *(uint8_t *)(a2 + 25) = 3;
    v4 = 3;
    v2 = *(uint32_t *)(a1 + 92);
  }
  if ( (v2 & 4) != 0 && *(uint8_t *)(a2 + 24) <= 7u )
  {
    *(uint8_t *)(a2 + 24) = 8;
    v5 = v4;
    if ( v4 != 3 )
      goto LABEL_28;
  }
  else
  {
    v5 = v4;
    if ( v4 != 3 )
    {
LABEL_28:
      *(uint8_t *)(a2 + 29) = (v4 & 2) == 0 ? 1 : 3;
      goto LABEL_29;
    }
  }
  *(uint8_t *)(a2 + 29) = 1;
LABEL_29:
  if ( (*(uint8_t *)(a1 + 90) & 0x40) != 0 )
  {
    v5 = v4 & 0xFB;
    *(uint8_t *)(a2 + 25) = v4 & 0xFB;
  }
  if ( (v5 & 4) != 0 )
  {
    v6 = *(uint8_t *)(a2 + 29) + 1;
    *(uint8_t *)(a2 + 29) = v6;
  }
  else
  {
    v6 = *(uint8_t *)(a2 + 29);
  }
  v7 = *(uint32_t *)(a1 + 92);
  if ( (v7 & 0x8000) != 0 && (v5 == 0 || v5 == 2) )
  {
    *(uint8_t *)(a2 + 29) = ++v6;
    v7 = *(uint32_t *)(a1 + 92);
    if ( (v7 & 0x1000000) != 0 )
    {
      *(uint8_t *)(a2 + 25) = v5 | 4;
      v7 = *(uint32_t *)(a1 + 92);
    }
  }
  if ( (v7 & 0x100000) != 0 )
  {
    v10 = *(uint8_t *)(a1 + 80);
    v13 = *(uint8_t *)(a2 + 24);
    if ( v13 < v10 )
    {
      *(uint8_t *)(a2 + 24) = v10;
      v13 = v10;
    }
    v11 = *(uint8_t *)(a1 + 81);
    if ( v11 > v6 )
    {
      *(uint8_t *)(a2 + 29) = v11;
      v8 = *(uint8_t *)(a2 + 24) * v11;
      *(uint8_t *)(a2 + 30) = v8;
      if ( v8 <= 7u )
        goto LABEL_40;
      goto LABEL_46;
    }
  }
  else
  {
    v13 = *(uint8_t *)(a2 + 24);
  }
  v8 = v13 * v6;
  *(uint8_t *)(a2 + 30) = v13 * v6;
  if ( (uint8_t)(v13 * v6) <= 7u )
  {
LABEL_40:
    result = (*(uint32_t *)a2 * (unsigned int)v8 + 7) >> 3;
    *(uint32_t *)(a2 + 12) = result;
    return result;
  }
LABEL_46:
  result = *(uint32_t *)a2 * (v8 >> 3);
  *(uint32_t *)(a2 + 12) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_unpack  (binary VA: 0xfa2d90)
// Original: png_do_unpack
// ----------------------------------------------------------------------------
int png_do_unpack(int *a1, int a2)
{
  int *v2;
  int result;
  uint8_t v4;
  int v5;
  uint8_t v6;
  uint8_t *v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  unsigned int v12;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;
  uint8_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v2 = a1;
  result = a2;
  v4 = *((uint8_t *)a1 + 9);
  if ( v4 <= 7u )
  {
    v5 = *a1;
    v21 = *a1;
    if ( v4 == 2 )
    {
      if ( v21 != 0 )
      {
        v7 = (uint8_t *)(a2 + ((unsigned int)(v21 - 1) >> 2));
        v8 = 2 * (~((uint8_t)v21 + 3) & 3);
        v19 = 0;
        do
        {
          v9 = v8 == 6;
          v10 = ((int)*v7 >> v8) & 3;
          v11 = v8 + 2;
          v8 = 0;
          *(uint8_t *)(a2 + v21 - 1 + v19) = v10;
          if ( v9 )
            --v7;
          else
            v8 = v11;
          --v19;
        }
        while ( v19 != -v21 );
        v2 = a1;
      }
    }
    else if ( v4 == 4 )
    {
      if ( v21 != 0 )
      {
        v17 = (uint8_t *)(a2 + ((unsigned int)(v21 - 1) >> 1));
        v22 = (((uint8_t)v21 + 1) & 1) == 0 ? 4 : 0;
        v18 = 0;
        do
        {
          *(uint8_t *)(a2 + v21 - 1 + v18--) = ((int)*v17 >> v22) & 0xF;
          if ( v22 == 4 )
            --v17;
          v22 = 4 * (v22 != 4);
        }
        while ( v18 != -v21 );
        v2 = a1;
      }
    }
    else if ( v4 == 1 && v5 != 0 )
    {
      v12 = v5 - 1;
      v13 = (uint8_t *)(a2 + (v12 >> 3));
      v14 = ~((uint8_t)v21 + 7) & 7;
      v20 = 0;
      do
      {
        v9 = v14 == 7;
        v15 = ((int)*v13 >> v14) & 1;
        v16 = v14 + 1;
        v14 = 0;
        *(uint8_t *)(a2 + v12 + v20) = v15;
        if ( v9 )
          --v13;
        else
          v14 = v16;
        --v20;
      }
      while ( v20 != -v21 );
      v2 = a1;
    }
    v6 = *((uint8_t *)v2 + 10);
    *((uint8_t *)v2 + 9) = 8;
    *((uint8_t *)v2 + 11) = 8 * v6;
    result = v21 * v6;
    v2[1] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_unshift  (binary VA: 0xfa2f70)
// Original: png_do_unshift
// ----------------------------------------------------------------------------
int png_do_unshift(int *a1, int a2, uint8_t *a3)
{
  int result;
  char v4; // si
  int v5;
  int16_t v6; // si
  int i;
  int v8;
  int j;
  uint8_t *v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  __m128i v17;
  __m128i v18;
  __m128i *v19;
  __m128i v20;
  __m128i *v21;
  unsigned int v22;
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
  unsigned int v43;
  int v44;
  int v45;
  uint8_t v46;
  uint8_t v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  uint32_t v54[6];

  result = *((uint8_t *)a1 + 8);
  if ( (uint8_t)result != 3 )
  {
    v4 = *((uint8_t *)a1 + 8);
    v44 = *a1;
    if ( (result & 2) != 0 )
    {
      v48 = 4;
      v5 = *((uint8_t *)a1 + 9);
      v46 = *((uint8_t *)a1 + 9);
      v50 = 4;
      v54[0] = v5 - *a3;
      v54[1] = v5 - a3[1];
      v52 = 3;
      v54[2] = v5 - a3[2];
      result = 3;
    }
    else
    {
      v48 = 2;
      v46 = *((uint8_t *)a1 + 9);
      v5 = v46;
      v54[0] = v46 - a3[3];
      v52 = 1;
      v50 = 2;
      result = 1;
    }
    if ( (v4 & 4) != 0 )
    {
      v54[result] = v5 - a3[4];
      v52 = v48;
      result = v50;
    }
    v6 = 0;
    for ( i = 0; i != result; ++i )
    {
      if ( (int)v54[i] <= 0 )
        v54[i] = 0;
      else
        v6 = 1;
    }
    if ( v6 != 0 )
    {
      if ( v46 == 4 )
      {
        v53 = v54[0];
        v14 = a1[1];
        v51 = v14;
        result = 15 >> SLOBYTE(v54[0]);
        v47 = (15 >> SLOBYTE(v54[0])) | (240 >> SLOBYTE(v54[0])) & 0xF0;
        if ( v14 != 0 )
        {
          result = a2;
          v15 = -a2 & 0xF;
          if ( v15 > v14 )
            v15 = a1[1];
          v16 = 0;
          if ( v15 == 0 )
            goto LABEL_44;
          do
          {
            ++v16;
            *(uint8_t *)result = v47 & ((int)*(uint8_t *)result >> v53);
            ++result;
          }
          while ( v15 > v16 );
          if ( v14 != v15 )
          {
LABEL_44:
            v43 = v14 - v15;
            v49 = (v14 - v15) >> 4;
            v45 = 16 * v49;
            if ( 16 * v49 == 0 )
              goto LABEL_40;
            v17 = _mm_cvtsi32_si128(v47);
            v18 = _mm_unpacklo_epi8(v17, v17);
            v19 = (__m128i *)(a2 + v15);
            v20 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v18, v18), 0);
            v21 = v19;
            v22 = 0;
            do
            {
              ++v22;
              v23 = _mm_unpackhi_epi8(*v19, g4_m128_from<__m128i>(0LL));
              v24 = _mm_unpacklo_epi8(*v19++, g4_m128_from<__m128i>(0LL));
              v25 = v24;
              v26 = _mm_cvtsi32_si128(v53);
              v27 = _mm_sra_epi32(_mm_unpackhi_epi16(v24, g4_m128_from<__m128i>(0LL)), v26);
              v28 = _mm_sra_epi32(_mm_unpacklo_epi16(v25, g4_m128_from<__m128i>(0LL)), v26);
              v29 = _mm_unpacklo_epi16(v28, v27);
              v30 = _mm_unpackhi_epi16(v28, v27);
              v31 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v29, v30), _mm_unpackhi_epi16(v29, v30));
              v32 = _mm_unpacklo_epi16(v23, g4_m128_from<__m128i>(0LL));
              v33 = _mm_cvtsi32_si128(v53);
              v34 = _mm_sra_epi32(_mm_unpackhi_epi16(v23, g4_m128_from<__m128i>(0LL)), v33);
              v35 = _mm_sra_epi32(v32, v33);
              v36 = _mm_unpacklo_epi16(v35, v34);
              v37 = _mm_unpackhi_epi16(v35, v34);
              v38 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v36, v37), _mm_unpackhi_epi16(v36, v37));
              v39 = _mm_unpackhi_epi8(v31, v38);
              v40 = _mm_unpacklo_epi8(v31, v38);
              v41 = _mm_unpacklo_epi8(v40, v39);
              v42 = _mm_unpackhi_epi8(v40, v39);
              *v21++ = _mm_and_si128(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v41, v42), _mm_unpackhi_epi8(v41, v42)), v20);
            }
            while ( v22 < v49 );
            v16 += v45;
            result += v45;
            if ( v43 != v45 )
            {
LABEL_40:
              result -= v16;
              do
              {
                *(uint8_t *)(result + v16) = v47 & ((int)*(uint8_t *)(result + v16) >> v53);
                ++v16;
              }
              while ( v51 > v16 );
            }
          }
        }
      }
      else if ( v46 > 4u )
      {
        if ( v46 == 8 )
        {
          if ( v44 * v52 != 0 )
          {
            v13 = 0;
            do
            {
              result = v13 / v52;
              *(uint8_t *)(a2 + v13) = (int)*(uint8_t *)(a2 + v13) >> v54[v13 % v52];
              ++v13;
            }
            while ( v13 != v44 * v52 );
          }
        }
        else if ( v46 == 16 )
        {
          result = v44 * v52;
          if ( v44 * v52 != 0 )
          {
            v10 = (uint8_t *)a2;
            v11 = 0;
            do
            {
              v12 = v11 % v52;
              ++v11;
              result = (int)(uint16_t)(v10[1] + (*v10 << 8)) >> v54[v12];
              v10[1] = result;
              *v10 = BYTE1(result);
              v10 += 2;
            }
            while ( v11 != v44 * v52 );
          }
        }
      }
      else if ( v46 == 2 )
      {
        v8 = a1[1];
        if ( v8 != 0 )
        {
          for ( j = 0; j != v8; ++j )
          {
            result = (*(uint8_t *)(a2 + j) >> 1) & 0x55;
            *(uint8_t *)(a2 + j) = result;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_chop  (binary VA: 0xfa3370)
// Original: png_do_chop
// ----------------------------------------------------------------------------
int png_do_chop(int64_t a1)
{
  int result;
  int v2;
  unsigned int v3;
  int v4;
  int v5;
  unsigned int v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;

  result = a1;
  if ( *(uint8_t *)(a1 + 9) == 16 )
  {
    v2 = *(uint8_t *)(a1 + 10);
    v3 = *(uint32_t *)a1 * (uint8_t)v2;
    v4 = 0;
    if ( v3 == 0 )
    {
LABEL_11:
      result = 8 * v2;
      *(uint8_t *)(a1 + 9) = 8;
      *(uint8_t *)(a1 + 11) = result;
      *(uint32_t *)(a1 + 4) = v4;
      return result;
    }
    v19 = 16 * ((v3 - 1) >> 4);
    if ( v19 != 0 && (__CFADD__(v3, HIDWORD(a1)) || HIDWORD(a1) > HIDWORD(a1) + 2 * v3) && v3 > 0xF )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = *(__m128i *)(HIDWORD(a1) + 2 * v5 + 16);
        v8 = *(__m128i *)(HIDWORD(a1) + 2 * v5);
        v9 = _mm_unpacklo_epi8(v8, v7);
        v10 = _mm_unpackhi_epi8(v8, v7);
        v11 = v9;
        v12 = _mm_unpacklo_epi8(v9, v10);
        v13 = _mm_unpackhi_epi8(v11, v10);
        ++v6;
        *(__m128i *)(HIDWORD(a1) + v5) = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v12, v13), _mm_unpackhi_epi8(v12, v13));
        v5 += 16;
      }
      while ( (v3 - 1) >> 4 > v6 );
      v14 = 16 * ((v3 - 1) >> 4);
      v15 = HIDWORD(a1) + 32 * ((v3 - 1) >> 4);
      v18 = v19 + HIDWORD(a1);
      if ( v3 == v19 )
        goto LABEL_10;
    }
    else
    {
      v18 = HIDWORD(a1);
      v15 = HIDWORD(a1);
      v14 = 0;
    }
    v16 = v15 - 2 * v14;
    v17 = v18 - v14;
    do
    {
      *(uint8_t *)(v17 + v14) = *(uint8_t *)(v16 + 2 * v14);
      ++v14;
    }
    while ( v3 > v14 );
LABEL_10:
    v2 = *(uint8_t *)(a1 + 10);
    v4 = *(uint32_t *)a1 * (uint8_t)v2;
    goto LABEL_11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_read_swap_alpha  (binary VA: 0xfa3490)
// Original: png_do_read_swap_alpha
// ----------------------------------------------------------------------------
int png_do_read_swap_alpha(int *a1, int a2)
{
  int result;
  int v3;
  int v4;
  char v5; // di
  char v6; // si
  int v7;
  char v8; // di
  char v9; // si
  int v10;
  char v11; // si
  int v12;
  char v13; // di
  char v14; // si
  char v15;
  char v16; // di

  result = *((uint8_t *)a1 + 8);
  v3 = *a1;
  if ( (uint8_t)result == 6 )
  {
    result = a1[1];
    if ( *((uint8_t *)a1 + 9) == 8 )
    {
      if ( v3 != 0 )
      {
        result += a2;
        v12 = 0;
        do
        {
          ++v12;
          v13 = *(uint8_t *)(result - 3);
          v14 = *(uint8_t *)(result - 1);
          *(uint8_t *)(result - 1) = *(uint8_t *)(result - 2);
          v15 = v13;
          v16 = *(uint8_t *)(result - 4);
          *(uint8_t *)(result - 2) = v15;
          *(uint8_t *)(result - 3) = v16;
          result -= 4;
          *(uint8_t *)result = v14;
        }
        while ( v12 != v3 );
      }
    }
    else if ( v3 != 0 )
    {
      result += a2;
      v7 = 0;
      do
      {
        ++v7;
        v8 = *(uint8_t *)(result - 1);
        *(uint8_t *)(result - 1) = *(uint8_t *)(result - 3);
        v9 = *(uint8_t *)(result - 2);
        *(uint8_t *)(result - 2) = *(uint8_t *)(result - 4);
        *(uint8_t *)(result - 3) = *(uint8_t *)(result - 5);
        *(uint8_t *)(result - 4) = *(uint8_t *)(result - 6);
        *(uint8_t *)(result - 5) = *(uint8_t *)(result - 7);
        *(uint8_t *)(result - 6) = *(uint8_t *)(result - 8);
        *(uint8_t *)(result - 7) = v8;
        result -= 8;
        *(uint8_t *)result = v9;
      }
      while ( v7 != v3 );
    }
  }
  else if ( (uint8_t)result == 4 )
  {
    result = a1[1];
    if ( *((uint8_t *)a1 + 9) == 8 )
    {
      if ( v3 != 0 )
      {
        result += a2;
        v10 = 0;
        do
        {
          ++v10;
          v11 = *(uint8_t *)(result - 1);
          *(uint8_t *)(result - 1) = *(uint8_t *)(result - 2);
          result -= 2;
          *(uint8_t *)result = v11;
        }
        while ( v10 != v3 );
      }
    }
    else if ( v3 != 0 )
    {
      result += a2;
      v4 = 0;
      do
      {
        ++v4;
        v5 = *(uint8_t *)(result - 1);
        *(uint8_t *)(result - 1) = *(uint8_t *)(result - 3);
        v6 = *(uint8_t *)(result - 2);
        *(uint8_t *)(result - 2) = *(uint8_t *)(result - 4);
        *(uint8_t *)(result - 3) = v5;
        result -= 4;
        *(uint8_t *)result = v6;
      }
      while ( v4 != v3 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_read_invert_alpha  (binary VA: 0xfa35e0)
// Original: png_do_read_invert_alpha
// ----------------------------------------------------------------------------
int png_do_read_invert_alpha(int *a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int j;
  int i;

  result = *((uint8_t *)a1 + 8);
  v3 = *a1;
  if ( (uint8_t)result == 6 )
  {
    result = a1[1];
    if ( *((uint8_t *)a1 + 9) == 8 )
    {
      if ( v3 != 0 )
      {
        result += a2;
        for ( i = 0; i != v3; ++i )
        {
          *(uint8_t *)(result - 1) = ~*(uint8_t *)(result - 1);
          result -= 4;
        }
      }
    }
    else if ( v3 != 0 )
    {
      result += a2;
      v5 = 0;
      do
      {
        ++v5;
        *(uint8_t *)(result - 1) = ~*(uint8_t *)(result - 1);
        *(uint8_t *)(result - 2) = ~*(uint8_t *)(result - 2);
        result -= 8;
      }
      while ( v5 != v3 );
    }
  }
  else if ( (uint8_t)result == 4 )
  {
    result = a1[1];
    if ( *((uint8_t *)a1 + 9) == 8 )
    {
      if ( v3 != 0 )
      {
        result += a2;
        for ( j = 0; j != v3; ++j )
        {
          *(uint8_t *)(result - 1) = ~*(uint8_t *)(result - 1);
          result -= 2;
        }
      }
    }
    else if ( v3 != 0 )
    {
      result += a2;
      v4 = 0;
      do
      {
        ++v4;
        *(uint8_t *)(result - 1) = ~*(uint8_t *)(result - 1);
        *(uint8_t *)(result - 2) = ~*(uint8_t *)(result - 2);
        result -= 4;
      }
      while ( v4 != v3 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_read_filler  (binary VA: 0xfa36a0)
// Original: png_do_read_filler
// ----------------------------------------------------------------------------
int png_do_read_filler(int a1, uint8_t *a2, int16_t a3, char a4)
{
  int v4;
  char v5; // si
  unsigned int v6;
  int result;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  char v11;
  uint8_t *v12;
  int v13;
  uint8_t *v14;
  int v15;
  unsigned int v16;
  char v17;
  uint8_t *v18;
  uint8_t *v19;
  int v20;
  char v21;
  uint8_t *v22;
  uint8_t *v23;
  uint8_t *v24;
  uint8_t *v25;
  int v26;
  char v27;
  uint8_t *v28;
  uint8_t *v29;
  char v30;
  uint8_t *v31;
  uint8_t *v32;
  char v33;
  uint8_t *v34;
  uint8_t *v35;
  int v36;
  char v37;
  int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  uint8_t *v43;
  unsigned int v44;
  unsigned int v45;

  v4 = a1;
  v5 = *(uint8_t *)(a1 + 8);
  v6 = *(uint32_t *)a1;
  if ( v5 != 0 )
  {
    result = *(uint8_t *)(a1 + 8);
    if ( v5 == 2 )
    {
      result = *(uint8_t *)(a1 + 9);
      if ( (uint8_t)result == 8 )
      {
        if ( a4 < 0 )
        {
          v28 = &a2[3 * v6];
          v40 = (int)(uintptr_t)(&v28[v6]);
          if ( v6 > 1 )
          {
            v44 = *(uint32_t *)a1;
            v29 = &v28[v6];
            do
            {
              *(v29 - 1) = a3;
              *(v29 - 2) = *(v28 - 1);
              v30 = *(v28 - 2);
              v28 -= 3;
              *(v29 - 3) = v30;
              v29 -= 4;
              *v29 = *v28;
            }
            while ( v28 != a2 + 3 );
            v6 = v44;
            v40 = v40 - 4 * v44 + 4;
          }
          *(uint8_t *)(v40 - 1) = a3;
          *(uint8_t *)(a1 + 10) = 4;
          *(uint8_t *)(a1 + 11) = 32;
          *(uint32_t *)(a1 + 4) = 4 * v6;
          return (uint8_t)a3;
        }
        else
        {
          if ( v6 != 0 )
          {
            v31 = &a2[3 * v6];
            v41 = *(uint32_t *)a1;
            v32 = &v31[v6];
            result = (uint8_t)a3;
            do
            {
              *(v32 - 1) = *(v31 - 1);
              v33 = *(v31 - 2);
              v31 -= 3;
              *(v32 - 2) = v33;
              *(v32 - 3) = *v31;
              v32 -= 4;
              *v32 = a3;
            }
            while ( a2 != v31 );
            v6 = v41;
          }
          *(uint8_t *)(a1 + 10) = 4;
          *(uint8_t *)(a1 + 11) = 32;
          *(uint32_t *)(a1 + 4) = 4 * v6;
        }
      }
      else
      {
        result = *(uint8_t *)(a1 + 9);
        if ( *(uint8_t *)(a1 + 9) == 16 )
        {
          if ( a4 < 0 )
          {
            v8 = &a2[6 * v6];
            v42 = (int)(uintptr_t)(&v8[2 * v6]);
            if ( v6 > 1 )
            {
              v9 = &v8[2 * v6];
              v10 = 1;
              do
              {
                *((uint16_t *)v9 - 1) = a3;
                ++v10;
                *(v9 - 3) = *(v8 - 1);
                *(v9 - 4) = *(v8 - 2);
                *(v9 - 5) = *(v8 - 3);
                *(v9 - 6) = *(v8 - 4);
                v11 = *(v8 - 5);
                v8 -= 6;
                *(v9 - 7) = v11;
                v9 -= 8;
                *v9 = *v8;
              }
              while ( v10 != v6 );
              v4 = a1;
              v42 = v42 - 8 * v6 + 8;
            }
            *(uint16_t *)(v42 - 2) = a3;
            *(uint8_t *)(v4 + 10) = 4;
            *(uint8_t *)(v4 + 11) = 64;
            *(uint32_t *)(v4 + 4) = 8 * v6;
            return (uint8_t)a3;
          }
          else
          {
            if ( v6 != 0 )
            {
              result = (uint8_t)a3;
              v34 = &a2[6 * v6];
              v35 = &v34[2 * v6];
              v36 = 0;
              do
              {
                ++v36;
                *(v35 - 1) = *(v34 - 1);
                *(v35 - 2) = *(v34 - 2);
                *(v35 - 3) = *(v34 - 3);
                *(v35 - 4) = *(v34 - 4);
                v37 = *(v34 - 5);
                v34 -= 6;
                *(v35 - 5) = v37;
                *(v35 - 6) = *v34;
                *(v35 - 7) = HIBYTE(a3);
                v35 -= 8;
                *v35 = a3;
              }
              while ( v36 != v6 );
              v4 = a1;
            }
            *(uint8_t *)(v4 + 10) = 4;
            *(uint8_t *)(v4 + 11) = 64;
            *(uint32_t *)(v4 + 4) = 8 * v6;
          }
        }
      }
    }
  }
  else
  {
    result = *(uint8_t *)(a1 + 9);
    if ( (uint8_t)result == 8 )
    {
      if ( a4 < 0 )
      {
        v12 = &a2[v6];
        v13 = (int)(uintptr_t)(&a2[v6 + v6]);
        v38 = v13;
        if ( v6 > 1 )
        {
          v14 = &v12[v6];
          v45 = *(uint32_t *)a1;
          v15 = 0;
          v16 = 1 - v6;
          do
          {
            *(v14 - 1) = a3;
            v14 -= 2;
            v17 = v12[--v15];
            *v14 = v17;
          }
          while ( v15 != v16 );
          v6 = v45;
          v4 = a1;
          v13 = v38 - 2 * v45 + 2;
        }
        *(uint8_t *)(v13 - 1) = a3;
        *(uint8_t *)(v4 + 10) = 2;
        *(uint8_t *)(v4 + 11) = 16;
        *(uint32_t *)(v4 + 4) = 2 * v6;
        return (uint8_t)a3;
      }
      else
      {
        if ( v6 != 0 )
        {
          v22 = &a2[v6];
          v39 = *(uint32_t *)a1;
          result = (uint8_t)a3;
          v23 = &a2[v6 + v6];
          do
          {
            *(v23 - 1) = *--v22;
            v23 -= 2;
            *v23 = a3;
          }
          while ( v22 != a2 );
          v6 = v39;
        }
        *(uint8_t *)(a1 + 10) = 2;
        *(uint8_t *)(a1 + 11) = 16;
        *(uint32_t *)(a1 + 4) = 2 * v6;
      }
    }
    else
    {
      result = *(uint8_t *)(a1 + 9);
      if ( *(uint8_t *)(a1 + 9) == 16 )
      {
        if ( a4 < 0 )
        {
          v18 = &a2[2 * v6];
          v43 = &a2[4 * v6];
          if ( v6 > 1 )
          {
            v19 = &a2[4 * v6];
            v20 = 1;
            do
            {
              *((uint16_t *)v19 - 1) = a3;
              ++v20;
              v21 = *(v18 - 1);
              v18 -= 2;
              *(v19 - 3) = v21;
              v19 -= 4;
              *v19 = *v18;
            }
            while ( v20 != v6 );
            v4 = a1;
            v43 = a2 + 4;
          }
          *((uint16_t *)v43 - 1) = a3;
          *(uint8_t *)(v4 + 10) = 2;
          *(uint8_t *)(v4 + 11) = 32;
          *(uint32_t *)(v4 + 4) = 4 * v6;
          return (uint8_t)a3;
        }
        else
        {
          if ( v6 != 0 )
          {
            v24 = &a2[2 * v6];
            v25 = &a2[4 * v6];
            result = (uint8_t)a3;
            v26 = 0;
            do
            {
              v27 = *(v24 - 1);
              v24 -= 2;
              *(v25 - 1) = v27;
              ++v26;
              *(v25 - 2) = *v24;
              *(v25 - 3) = HIBYTE(a3);
              v25 -= 4;
              *v25 = a3;
            }
            while ( v26 != v6 );
            v4 = a1;
          }
          *(uint8_t *)(v4 + 10) = 2;
          *(uint8_t *)(v4 + 11) = 32;
          *(uint32_t *)(v4 + 4) = 4 * v6;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_gray_to_rgb  (binary VA: 0xfa3b00)
// Original: png_do_gray_to_rgb
// ----------------------------------------------------------------------------
unsigned int png_do_gray_to_rgb(int *a1, int a2)
{
  unsigned int result;
  char v3; // di
  int v4;
  uint8_t *v5;
  uint8_t *v6;
  char v7; // bp
  char v8; // si
  uint8_t v9;
  char *v10;
  char *v11;
  char v12; // di
  int v13;
  uint8_t *v14;
  uint8_t *v15;
  char v16; // bp
  int v17;
  uint8_t *v18;
  uint8_t *v19;
  char v20; // bp
  int v21;
  char v22;

  result = *((uint8_t *)a1 + 9);
  v21 = *a1;
  v22 = *((uint8_t *)a1 + 9);
  if ( (uint8_t)result <= 7u )
    return result;
  v3 = *((uint8_t *)a1 + 8);
  if ( (v3 & 2) != 0 )
    return result;
  if ( v3 != 0 )
  {
    if ( v3 != 4 )
      goto LABEL_10;
    if ( v22 == 8 )
    {
      if ( v21 == 0 )
        goto LABEL_10;
      v17 = 0;
      v18 = (uint8_t *)(a2 + 2 * v21 - 1);
      v19 = (uint8_t *)(a2 + 4 * v21 - 1);
      do
      {
        ++v17;
        *v19 = *v18;
        *(v19 - 1) = *(v18 - 1);
        *(v19 - 2) = *(v18 - 1);
        v20 = *(v18 - 1);
        v18 -= 2;
        *(v19 - 3) = v20;
        v19 -= 4;
      }
      while ( v17 != v21 );
    }
    else
    {
      if ( v21 == 0 )
        goto LABEL_10;
      v13 = 0;
      v14 = (uint8_t *)(a2 + 4 * v21 - 1);
      v15 = (uint8_t *)(a2 + 8 * v21 - 1);
      do
      {
        ++v13;
        *v15 = *v14;
        *(v15 - 1) = *(v14 - 1);
        *(v15 - 2) = *(v14 - 2);
        *(v15 - 3) = *(v14 - 3);
        *(v15 - 4) = *(v14 - 2);
        *(v15 - 5) = *(v14 - 3);
        *(v15 - 6) = *(v14 - 2);
        v16 = *(v14 - 3);
        v14 -= 4;
        *(v15 - 7) = v16;
        v15 -= 8;
      }
      while ( v13 != v21 );
    }
    goto LABEL_8;
  }
  if ( (uint8_t)result == 8 )
  {
    if ( v21 == 0 )
      goto LABEL_10;
    v10 = (char *)(a2 + v21 - 1);
    v11 = &v10[2 * v21];
    do
    {
      *v11 = *v10;
      *(v11 - 1) = *v10;
      v12 = *v10--;
      *(v11 - 2) = v12;
      v11 -= 3;
    }
    while ( v10 != (char *)(a2 - 1) );
    goto LABEL_8;
  }
  if ( v21 != 0 )
  {
    v4 = 0;
    v5 = (uint8_t *)(a2 + 2 * v21 - 1);
    v6 = &v5[4 * v21];
    do
    {
      ++v4;
      *v6 = *v5;
      *(v6 - 1) = *(v5 - 1);
      *(v6 - 2) = *v5;
      *(v6 - 3) = *(v5 - 1);
      *(v6 - 4) = *v5;
      v7 = *(v5 - 1);
      v5 -= 2;
      *(v6 - 5) = v7;
      v6 -= 6;
    }
    while ( v4 != v21 );
LABEL_8:
    v3 = *((uint8_t *)a1 + 8);
    v22 = *((uint8_t *)a1 + 9);
  }
LABEL_10:
  v8 = *((uint8_t *)a1 + 10) + 2;
  *((uint8_t *)a1 + 8) = v3 | 2;
  v9 = v22 * v8;
  *((uint8_t *)a1 + 10) = v8;
  *((uint8_t *)a1 + 11) = v22 * v8;
  if ( (uint8_t)(v22 * v8) <= 7u )
    result = (v21 * (unsigned int)v9 + 7) >> 3;
  else
    result = v21 * (v9 >> 3);
  a1[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_rgb_to_gray  (binary VA: 0xfa3d10)
// Original: png_do_rgb_to_gray
// ----------------------------------------------------------------------------
int png_do_rgb_to_gray(int a1, int *a2, uint8_t *a3)
{
  int *v3;
  uint32_t *v4;
  char v5;
  char v6;
  char v7;
  uint8_t v8;
  unsigned int v9;
  uint8_t *v11;
  uint8_t *v12;
  uint16_t v13;
  int16_t v14; // si
  uint16_t v15; // di
  int16_t v16;
  int16_t v17; // si
  uint16_t v18;
  unsigned int v19;
  uint8_t *v20;
  uint8_t *v21;
  uint16_t v22;
  uint16_t v23; // bp
  uint16_t v24; // di
  uint16_t v25;
  unsigned int v26;
  char v27;
  int v28;
  uint8_t *v29;
  uint8_t *v30;
  int v31;
  uint8_t v32;
  uint8_t *v33;
  uint8_t *v34;
  uint16_t v35; // si
  int16_t v36;
  int16_t v37; // di
  uint16_t v38;
  int v39;
  unsigned int v40;
  int v41;
  uint8_t *v42;
  uint8_t *v43;
  int v44;
  int v45;
  uint8_t *v46;
  uint8_t *v47;
  uint16_t v48; // bp
  int v49;
  unsigned int v50;
  char v51;
  uint8_t *v52;
  int v53;
  uint8_t *v54;
  int v55;
  uint8_t v56;
  uint8_t *v57;
  uint8_t *v58;
  uint8_t v59; // di
  uint8_t v60;
  uint8_t v61;
  uint8_t v62; // bp
  int v63;
  int v64;
  int v65;
  int v66;
  uint8_t v67;
  uint8_t v68;
  int v69;
  uint8_t v70;
  uint8_t v71;
  uint16_t v72;
  int v73;
  uint8_t v74;
  int v75;
  int i;
  int v77;
  uint32_t *v78;
  uint8_t v79;
  uint16_t v80;
  uint32_t *v81;
  uint16_t v82;
  int v83;
  int v84;
  int v85;

  v3 = a2;
  v4 = (uint32_t *)a1;
  v69 = 0;
  v5 = *((uint8_t *)a2 + 8);
  v77 = *a2;
  if ( (v5 & 2) == 0 )
    return v69;
  v83 = *(uint16_t *)(a1 + 534);
  v84 = *(uint16_t *)(a1 + 536);
  v85 = *(uint16_t *)(a1 + 538);
  if ( v5 != 2 )
    goto LABEL_3;
  v6 = *((uint8_t *)a2 + 9);
  if ( v6 != 8 )
  {
    if ( *(uint32_t *)(a1 + 356) != 0 && *(uint32_t *)(a1 + 352) != 0 )
    {
      if ( v77 != 0 )
      {
        v11 = a3;
        v65 = 0;
        v12 = a3;
        do
        {
          v13 = __builtin_bswap16(*(uint16_t *)v12);
          v14 = (uint8_t)v12[5];
          v15 = __builtin_bswap16(*((uint16_t *)v12 + 1));
          v16 = (uint8_t)v12[4];
          v12 += 6;
          v17 = (v16 << 8) | v14;
          if ( v13 != v17 || (v18 = v13, v13 != v15) )
          {
            v64 = *(uint32_t *)(a1 + 324);
            v19 = (v85
                 * *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 356) + 4 * ((int)(uint8_t)v17 >> v64))
                                       + 2 * HIBYTE(v17))
                 + v83
                 * *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 356) + 4 * ((int)(uint8_t)v13 >> v64))
                                       + 2 * HIBYTE(v13))
                 + v84
                 * (unsigned int)*(uint16_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 356)
                                                                 + 4 * ((int)(uint8_t)v15 >> v64))
                                                     + 2 * HIBYTE(v15))) >> 15;
            v18 = *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 352) + 4 * ((int)(uint8_t)v19 >> v64)) + 2 * BYTE1(v19));
            v69 = 1;
          }
          v11[1] = v18;
          ++v65;
          *v11 = HIBYTE(v18);
          v11 += 2;
        }
        while ( v65 != v77 );
        v3 = a2;
        v4 = (uint32_t *)a1;
        v5 = *((uint8_t *)a2 + 8);
LABEL_3:
        v6 = *((uint8_t *)v3 + 9);
        goto LABEL_4;
      }
      goto LABEL_76;
    }
    if ( v77 != 0 )
    {
      v33 = a3;
      v69 = 0;
      v34 = a3;
      v73 = 0;
      do
      {
        v80 = __builtin_bswap16(*(uint16_t *)v34);
        v35 = __builtin_bswap16(*((uint16_t *)v34 + 1));
        v36 = (uint8_t)v34[5];
        v37 = (uint8_t)v34[4];
        v34 += 6;
        v38 = (v37 << 8) | v36;
        v39 = 1;
        if ( v80 == v35 && v80 == v38 )
          v39 = v69;
        ++v73;
        v69 = v39;
        v40 = (v83 * v80 + v84 * v35 + v85 * (unsigned int)v38) >> 15;
        v33[1] = v40;
        *v33 = BYTE1(v40);
        v33 += 2;
      }
      while ( v73 != v77 );
      v4 = (uint32_t *)a1;
      goto LABEL_46;
    }
LABEL_76:
    v69 = 0;
    goto LABEL_5;
  }
  if ( *(uint32_t *)(a1 + 340) == 0 || (v28 = *(uint32_t *)(a1 + 344)) == 0 )
  {
    if ( v77 != 0 )
    {
      v57 = a3 + 1;
      v58 = a3;
      v69 = 0;
      for ( i = 0; i != v77; ++i )
      {
        v59 = *v58;
        v60 = v58[2];
        v61 = *v58;
        v62 = v58[1];
        v58 += 3;
        if ( v61 == v60 && v61 == v62 )
        {
          *(v57 - 1) = v60;
        }
        else
        {
          v69 = 1;
          *(v57 - 1) = (v84 * v62 + v83 * v59 + v85 * (unsigned int)v60) >> 15;
        }
        ++v57;
      }
      v4 = (uint32_t *)a1;
      v5 = *((uint8_t *)a2 + 8);
      v6 = *((uint8_t *)a2 + 9);
LABEL_4:
      if ( v5 == 6 )
      {
        if ( v6 == 8 )
        {
          v41 = v4[85];
          if ( v41 != 0 && v4[86] != 0 )
          {
            if ( v77 != 0 )
            {
              v42 = a3;
              v81 = v4;
              v43 = a3;
              v44 = v4[86];
              v45 = 0;
              while ( 1 )
              {
                v68 = *(uint8_t *)(v44 + *v43);
                v71 = *(uint8_t *)(v44 + v43[1]);
                v74 = *(uint8_t *)(v44 + v43[2]);
                if ( v68 != v74 || v68 != v71 )
                  v69 = 1;
                ++v45;
                *v42 = *(uint8_t *)(v41 + ((v85 * v74 + v84 * v71 + v83 * (unsigned int)v68) >> 15));
                v42[1] = v43[3];
                if ( v45 == v77 )
                  break;
                v42 += 2;
                v43 += 4;
                v44 = v81[86];
                v41 = v81[85];
              }
              v5 = *((uint8_t *)a2 + 8);
              v6 = *((uint8_t *)a2 + 9);
            }
          }
          else if ( v77 != 0 )
          {
            v52 = a3;
            v53 = 0;
            v54 = a3;
            v55 = v69;
            do
            {
              if ( *v54 != v54[1] || *v54 != v54[2] )
                v55 = 1;
              ++v53;
              *v52 = (v85 * v54[2] + v83 * *v54 + v84 * (unsigned int)v54[1]) >> 15;
              v56 = v54[3];
              v54 += 4;
              v52[1] = v56;
              v52 += 2;
            }
            while ( v53 != v77 );
            v69 = v55;
            v5 = *((uint8_t *)a2 + 8);
            v6 = *((uint8_t *)a2 + 9);
          }
        }
        else if ( v4[89] != 0 && v4[88] != 0 )
        {
          if ( v77 != 0 )
          {
            v20 = a3;
            v66 = 0;
            v21 = a3;
            v78 = v4;
            do
            {
              v22 = __builtin_bswap16(*(uint16_t *)v21);
              v23 = __builtin_bswap16(*((uint16_t *)v21 + 1));
              v24 = __builtin_bswap16(*((uint16_t *)v21 + 2));
              if ( v22 != v24 || (v25 = __builtin_bswap16(*(uint16_t *)v21)) != v23 )
              {
                v63 = v78[81];
                v26 = (v85
                     * *(uint16_t *)(*(uint32_t *)(v78[89] + 4 * ((int)(uint8_t)v24 >> v63))
                                           + 2 * HIBYTE(v24))
                     + v83
                     * *(uint16_t *)(*(uint32_t *)(v78[89] + 4 * ((int)(uint8_t)v22 >> v63))
                                           + 2 * HIBYTE(v22))
                     + v84
                     * (unsigned int)*(uint16_t *)(*(uint32_t *)(v78[89] + 4 * ((int)(uint8_t)v23 >> v63))
                                                         + 2 * HIBYTE(v23))) >> 15;
                v25 = *(uint16_t *)(*(uint32_t *)(v78[88] + 4 * ((int)(uint8_t)v26 >> v63)) + 2 * BYTE1(v26));
                v69 = 1;
              }
              v20[1] = v25;
              ++v66;
              *v20 = HIBYTE(v25);
              v20[2] = v21[6];
              v27 = v21[7];
              v21 += 8;
              v20[3] = v27;
              v20 += 4;
            }
            while ( v66 != v77 );
            v5 = *((uint8_t *)a2 + 8);
            v6 = *((uint8_t *)a2 + 9);
          }
        }
        else if ( v77 != 0 )
        {
          v46 = a3;
          v75 = 0;
          v47 = a3;
          do
          {
            v72 = __builtin_bswap16(*(uint16_t *)v47);
            v82 = __builtin_bswap16(*((uint16_t *)v47 + 1));
            v48 = __builtin_bswap16(*((uint16_t *)v47 + 2));
            v49 = 1;
            if ( v72 == v82 && v72 == v48 )
              v49 = v69;
            ++v75;
            v69 = v49;
            v50 = (v83 * v72 + v84 * v82 + v85 * (unsigned int)v48) >> 15;
            v46[1] = v50;
            *v46 = BYTE1(v50);
            v46[2] = v47[6];
            v51 = v47[7];
            v47 += 8;
            v46[3] = v51;
            v46 += 4;
          }
          while ( v75 != v77 );
          v5 = *((uint8_t *)a2 + 8);
          v6 = *((uint8_t *)a2 + 9);
        }
      }
      goto LABEL_5;
    }
    goto LABEL_76;
  }
  if ( v77 != 0 )
  {
    v29 = a3;
    v30 = a3 + 1;
    v31 = 0;
    while ( 1 )
    {
      v67 = *(uint8_t *)(v28 + *v29);
      v79 = *(uint8_t *)(v28 + v29[1]);
      v32 = v29[2];
      v29 += 3;
      v70 = *(uint8_t *)(v28 + v32);
      if ( v67 == v70 && v67 == v79 )
      {
        *(v30 - 1) = v32;
      }
      else
      {
        v69 = 1;
        *(v30 - 1) = *(uint8_t *)(*(uint32_t *)(a1 + 340) + ((v85 * v70 + v84 * v79 + v83 * (unsigned int)v67) >> 15));
      }
      ++v31;
      ++v30;
      v4 = (uint32_t *)a1;
      if ( v31 == v77 )
        break;
      v28 = *(uint32_t *)(a1 + 344);
    }
LABEL_46:
    v5 = *((uint8_t *)a2 + 8);
    v6 = *((uint8_t *)a2 + 9);
    goto LABEL_4;
  }
LABEL_5:
  v7 = *((uint8_t *)a2 + 10);
  *((uint8_t *)a2 + 8) = v5 & 0xFD;
  v7 -= 2;
  v8 = v7 * v6;
  *((uint8_t *)a2 + 10) = v7;
  *((uint8_t *)a2 + 11) = v8;
  if ( v8 > 7u )
    v9 = v77 * (v8 >> 3);
  else
    v9 = (v77 * (unsigned int)v8 + 7) >> 3;
  a2[1] = v9;
  return v69;
}

// ----------------------------------------------------------------------------
// Function: png_build_grayscale_palette  (binary VA: 0xfa45e0)
// Original: png_build_grayscale_palette
// ----------------------------------------------------------------------------
void png_build_grayscale_palette(int a1, uint8_t *a2)
{
  uint8_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  if ( a2 != nullptr )
  {
    v3 = a1 - 1;
    if ( (unsigned int)(a1 - 1) <= 7 )
    {
      v4 = dword_1CBDAA0[v3];
      v5 = dword_1CBDAC0[v3];
      if ( v4 > 0 )
      {
        v6 = 0;
        v7 = 0;
        do
        {
          ++v7;
          *v2 = v6;
          v2[1] = v6;
          v2[2] = v6;
          v6 += v5;
          v2 += 3;
        }
        while ( v7 != v4 );
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_do_background  (binary VA: 0xfa4630)
// Original: png_do_background
// ----------------------------------------------------------------------------
void png_do_background(int *a1, uint8_t *a2, uint16_t *a3, int a4, uint16_t *a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12)
{
  uint8_t v12;
  int v13;
  bool v14; // cc
  uint8_t *v15;
  uint8_t *v16;
  uint16_t v17; // si
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  char v22;
  uint8_t v23;
  unsigned int v24;
  uint8_t *v25;
  int i;
  int16_t v27;
  int16_t v28;
  int16_t v29;
  uint8_t *v30;
  int v31;
  uint8_t *v32;
  uint16_t v33; // di
  unsigned int v34;
  unsigned int v35;
  uint8_t *v36;
  uint8_t *v37;
  uint16_t v38;
  unsigned int v39;
  int16_t v40; // bp
  unsigned int v41;
  int16_t v42; // bp
  unsigned int v43;
  int16_t v44; // bp
  uint8_t *v45;
  int v46;
  uint8_t *v47;
  uint16_t v48;
  unsigned int v49;
  uint8_t *v50;
  int v51;
  int j;
  uint8_t *v53;
  int v54;
  int k;
  int v56;
  int v57;
  int jj;
  int16_t v59;
  uint8_t v60;
  uint8_t *v61;
  int v62;
  int n;
  int v64;
  int v65;
  uint8_t *v66;
  int kk;
  int16_t v68;
  uint8_t v69;
  int16_t v70;
  int16_t v71; // bp
  int16_t v72; // bp
  uint8_t v73;
  int v74;
  int v75;
  uint8_t *v76;
  int mm;
  int16_t v78;
  uint8_t v79;
  int16_t v80; // di
  uint8_t *v81;
  uint8_t *v82;
  int16_t v83;
  int16_t v84;
  int16_t v85;
  uint8_t *v86;
  uint8_t *v87;
  uint8_t v88;
  int16_t v89;
  int16_t v90;
  int16_t v91;
  int v92;
  int v93;
  uint8_t v94;
  uint16_t v95;
  int v96;
  uint8_t *v97;
  uint8_t *v98;
  int v99;
  uint8_t *v100;
  uint8_t *v101;
  int v102;
  int m;
  uint8_t v104;
  uint8_t *v105;
  int v106;
  int ii;
  uint8_t v108;
  int v109;
  int v110;
  uint8_t v111;
  uint8_t v112;
  uint8_t v113;
  uint8_t v114;
  int16_t v115;
  int v116;
  uint8_t v117;
  int v118;
  uint16_t v119;
  uint8_t v120;
  int16_t v121;
  uint8_t v122;
  int v123;
  uint8_t v124;
  uint16_t v125;
  uint8_t v126;
  int v127;
  uint8_t v128;
  int v129;

  v118 = *a1;
  if ( a4 == 0 )
    return;
  v12 = *((uint8_t *)a1 + 8);
  v13 = v12 & 4;
  if ( (v12 & 4) == 0 )
  {
    v14 = v12 <= 2u;
    if ( v12 != 2 )
      goto LABEL_4;
    goto LABEL_26;
  }
  if ( a3 == nullptr || v12 == 3 )
    return;
  v14 = v12 <= 2u;
  if ( v12 == 2 )
  {
LABEL_26:
    if ( *((uint8_t *)a1 + 9) != 8 )
    {
      if ( a9 != 0 )
      {
        if ( v118 == 0 )
          goto LABEL_18;
        v25 = a2;
        for ( i = 0; i != v118; ++i )
        {
          v120 = v25[2];
          v126 = v25[3];
          v128 = v25[4];
          v117 = v25[1];
          v122 = v25[5];
          if ( a3[1] == (*v25 << 8) + v117 && a3[2] == (v120 << 8) + v126 && a3[3] == (v128 << 8) + v122 )
          {
            *v25 = *(uint8_t *)(a4 + 3);
            v25[1] = *(uint16_t *)(a4 + 2);
            v25[2] = *(uint8_t *)(a4 + 5);
            v25[3] = *(uint16_t *)(a4 + 4);
            v25[4] = *(uint8_t *)(a4 + 7);
            v25[5] = *(uint16_t *)(a4 + 6);
          }
          else
          {
            v27 = *(uint16_t *)(*(uint32_t *)(a9 + 4 * ((int)v117 >> a12)) + 2 * *v25);
            v25[1] = v27;
            *v25 = HIBYTE(v27);
            v28 = *(uint16_t *)(*(uint32_t *)(a9 + 4 * ((int)v126 >> a12)) + 2 * v120);
            v25[3] = v28;
            v25[2] = HIBYTE(v28);
            v29 = *(uint16_t *)(*(uint32_t *)(a9 + 4 * ((int)v122 >> a12)) + 2 * v128);
            v25[5] = v29;
            v25[4] = HIBYTE(v29);
          }
          v25 += 6;
        }
      }
      else
      {
        v96 = 0;
        v97 = a2;
        if ( v118 == 0 )
          goto LABEL_18;
        do
        {
          if ( a3[1] == v97[1] + (*v97 << 8) && a3[2] == v97[3] + (v97[2] << 8) && a3[3] == (v97[4] << 8) + v97[5] )
          {
            *v97 = *(uint8_t *)(a4 + 3);
            v97[1] = *(uint16_t *)(a4 + 2);
            v97[2] = *(uint8_t *)(a4 + 5);
            v97[3] = *(uint16_t *)(a4 + 4);
            v97[4] = *(uint8_t *)(a4 + 7);
            v97[5] = *(uint16_t *)(a4 + 6);
          }
          ++v96;
          v97 += 6;
        }
        while ( v96 != v118 );
      }
      goto LABEL_66;
    }
    if ( a6 == 0 )
    {
      if ( v118 == 0 )
        goto LABEL_18;
      v98 = a2;
      do
      {
        if ( *v98 == a3[1] && v98[1] == a3[2] && v98[2] == a3[3] )
        {
          *v98 = *(uint16_t *)(a4 + 2);
          v98[1] = *(uint16_t *)(a4 + 4);
          v98[2] = *(uint16_t *)(a4 + 6);
        }
        v98 += 3;
      }
      while ( v98 != &a2[3 * v118] );
      goto LABEL_114;
    }
    if ( v118 == 0 )
      goto LABEL_18;
    v76 = a2;
    while ( 1 )
    {
      v124 = v76[1];
      if ( *v76 == a3[1] )
      {
        v113 = v76[2];
        if ( v76[1] == a3[2] && v76[2] == a3[3] )
        {
          *v76 = *(uint16_t *)(a4 + 2);
          v76[1] = *(uint16_t *)(a4 + 4);
          v76[2] = *(uint16_t *)(a4 + 6);
          goto LABEL_120;
        }
      }
      else
      {
        v113 = v76[2];
      }
      *v76 = *(uint8_t *)(a6 + *v76);
      v76[1] = *(uint8_t *)(a6 + v124);
      v76[2] = *(uint8_t *)(a6 + v113);
LABEL_120:
      v76 += 3;
      if ( v76 == &a2[3 * v118] )
        goto LABEL_66;
    }
  }
LABEL_4:
  if ( v14 )
  {
    if ( v12 == 0 )
    {
      switch ( *((uint8_t *)a1 + 9) )
      {
        case 1:
          if ( v118 != 0 )
          {
            v50 = a2;
            v51 = 7;
            for ( j = 0; j != v118; ++j )
            {
              if ( (((int)*v50 >> v51) & 1) == a3[4] )
              {
                v73 = *v50 & (32639 >> (7 - v51));
                *v50 = v73;
                *v50 = ((uint8_t)*(uint16_t *)(a4 + 8) << v51) | v73;
              }
              if ( v51 != 0 )
              {
                --v51;
              }
              else
              {
                ++v50;
                LOWORD(v51) = 7;
              }
            }
            goto LABEL_66;
          }
          break;
        case 2:
          if ( a6 != 0 )
          {
            if ( v118 != 0 )
            {
              v53 = a2;
              v54 = 6;
              for ( k = 0; k != v118; ++k )
              {
                v111 = *v53;
                v56 = (int)*v53 >> v54;
                if ( (v56 & 3) == a3[4] )
                {
                  v75 = (16191 >> (6 - v54)) & v111;
                  *v53 = v75;
                  v57 = v75 | (*(uint16_t *)(a4 + 8) << v54);
                }
                else
                {
                  LOBYTE(v57) = (*(uint8_t *)(a6 + (((v56 & 3) << 6) | v56 & 3 | (16 * (v56 & 3)) | (4 * (v56 & 3)))) >> 6 << v54)
                              | v111 & (16191 >> (6 - v54));
                }
                *v53 = v57;
                if ( v54 != 0 )
                {
                  v54 -= 2;
                }
                else
                {
                  ++v53;
                  LOWORD(v54) = 6;
                }
              }
              goto LABEL_66;
            }
          }
          else if ( v118 != 0 )
          {
            v101 = a2;
            v102 = 6;
            for ( m = 0; m != v118; ++m )
            {
              if ( (((int)*v101 >> v102) & 3) == a3[4] )
              {
                v104 = *v101 & (16191 >> (6 - v102));
                *v101 = v104;
                *v101 = ((uint8_t)*(uint16_t *)(a4 + 8) << v102) | v104;
              }
              if ( v102 != 0 )
              {
                v102 -= 2;
              }
              else
              {
                ++v101;
                LOWORD(v102) = 6;
              }
            }
            goto LABEL_66;
          }
          break;
        case 4:
          if ( a6 != 0 )
          {
            if ( v118 != 0 )
            {
              v61 = a2;
              v62 = 4;
              for ( n = 0; n != v118; ++n )
              {
                v112 = *v61;
                v64 = (int)*v61 >> v62;
                if ( (v64 & 0xF) == a3[4] )
                {
                  v74 = (3855 >> (4 - v62)) & v112;
                  *v61 = v74;
                  v65 = v74 | (*(uint16_t *)(a4 + 8) << v62);
                }
                else
                {
                  LOBYTE(v65) = (*(uint8_t *)(a6 + (v64 & 0xF | (16 * (v64 & 0xF)))) >> 4 << v62)
                              | v112 & (3855 >> (4 - v62));
                }
                *v61 = v65;
                if ( v62 != 0 )
                {
                  v62 -= 4;
                }
                else
                {
                  ++v61;
                  LOWORD(v62) = 4;
                }
              }
              goto LABEL_66;
            }
          }
          else if ( v118 != 0 )
          {
            v105 = a2;
            v106 = 4;
            for ( ii = 0; ii != v118; ++ii )
            {
              if ( (((int)*v105 >> v106) & 0xF) == a3[4] )
              {
                v108 = *v105 & (3855 >> (4 - v106));
                *v105 = v108;
                *v105 = ((uint8_t)*(uint16_t *)(a4 + 8) << v106) | v108;
              }
              if ( v106 != 0 )
              {
                v106 -= 4;
              }
              else
              {
                ++v105;
                LOWORD(v106) = 4;
              }
            }
            goto LABEL_66;
          }
          break;
        case 8:
          if ( a6 != 0 )
          {
            if ( v118 != 0 )
            {
              for ( jj = 0; jj != v118; ++jj )
              {
                v60 = a2[jj];
                if ( v60 == a3[4] )
                  v59 = *(uint16_t *)(a4 + 8);
                else
                  LOBYTE(v59) = *(uint8_t *)(a6 + v60);
                a2[jj] = v59;
              }
              goto LABEL_114;
            }
          }
          else
          {
            v109 = 0;
            if ( v118 != 0 )
            {
              do
              {
                if ( a2[v109] == a3[4] )
                  a2[v109] = *(uint16_t *)(a4 + 8);
                ++v109;
              }
              while ( v109 != v118 );
              goto LABEL_66;
            }
          }
          break;
        case 0x10:
          if ( a9 != 0 )
          {
            if ( v118 != 0 )
            {
              v66 = a2;
              for ( kk = 0; kk != v118; ++kk )
              {
                v69 = v66[1];
                if ( a3[4] == (*v66 << 8) + v69 )
                {
                  *v66 = *(uint8_t *)(a4 + 9);
                  v66[1] = *(uint16_t *)(a4 + 8);
                }
                else
                {
                  v68 = *(uint16_t *)(*(uint32_t *)(a9 + 4 * ((int)v69 >> a12)) + 2 * *v66);
                  v66[1] = v68;
                  *v66 = HIBYTE(v68);
                }
                v66 += 2;
              }
              goto LABEL_17;
            }
          }
          else
          {
            v99 = 0;
            v100 = a2;
            if ( v118 != 0 )
            {
              do
              {
                if ( a3[4] == v100[1] + (*v100 << 8) )
                {
                  *v100 = *(uint8_t *)(a4 + 9);
                  v100[1] = *(uint16_t *)(a4 + 8);
                }
                ++v99;
                v100 += 2;
              }
              while ( v99 != v118 );
              goto LABEL_114;
            }
          }
          break;
        default:
          goto LABEL_18;
      }
    }
    goto LABEL_18;
  }
  if ( v12 != 4 )
  {
    if ( v12 != 6 )
      goto LABEL_18;
    if ( *((uint8_t *)a1 + 9) != 8 )
    {
      if ( a10 != 0 && a9 != 0 && a11 != 0 )
      {
        if ( v118 != 0 )
        {
          v36 = a2;
          v123 = 0;
          v37 = a2;
          while ( 1 )
          {
            v38 = v37[7] + (v37[6] << 8);
            if ( v38 == 0xFFFF )
              break;
            if ( v38 != 0 )
            {
              v127 = v38;
              v129 = 0xFFFF - v38;
              v39 = v129 * a5[1]
                  + v38 * *(uint16_t *)(*(uint32_t *)(a11 + 4 * ((int)v37[1] >> a12)) + 2 * *v37)
                  + 0x8000;
              v40 = *(uint16_t *)(*(uint32_t *)(a10 + 4 * ((int)(uint8_t)((v39 + HIWORD(v39)) >> 16) >> a12))
                             + 2 * ((v39 + HIWORD(v39)) >> 24));
              *v36 = HIBYTE(v40);
              v36[1] = v40;
              v41 = (v129 * a5[2]
                   + v127 * *(uint16_t *)(*(uint32_t *)(a11 + 4 * ((int)v37[3] >> a12)) + 2 * v37[2])
                   + 0x8000
                   + ((v129 * a5[2]
                     + v127
                     * (unsigned int)*(uint16_t *)(*(uint32_t *)(a11 + 4 * ((int)v37[3] >> a12)) + 2 * v37[2])
                     + 0x8000) >> 16)) >> 16;
              v42 = *(uint16_t *)(*(uint32_t *)(a10 + 4 * ((int)(uint8_t)v41 >> a12)) + 2 * BYTE1(v41));
              v36[2] = HIBYTE(v42);
              v36[3] = v42;
              v43 = (v129 * a5[3]
                   + v127 * *(uint16_t *)(*(uint32_t *)(a11 + 4 * ((int)v37[5] >> a12)) + 2 * v37[4])
                   + 0x8000
                   + ((v129 * a5[3]
                     + v127
                     * (unsigned int)*(uint16_t *)(*(uint32_t *)(a11 + 4 * ((int)v37[5] >> a12)) + 2 * v37[4])
                     + 0x8000) >> 16)) >> 16;
              v44 = *(uint16_t *)(*(uint32_t *)(a10 + 4 * ((int)(uint8_t)v43 >> a12)) + 2 * BYTE1(v43));
LABEL_57:
              v36[4] = HIBYTE(v44);
              v36[5] = v44;
              goto LABEL_53;
            }
            *v36 = *(uint8_t *)(a4 + 3);
            v36[1] = *(uint16_t *)(a4 + 2);
            v36[2] = *(uint8_t *)(a4 + 5);
            v36[3] = *(uint16_t *)(a4 + 4);
            v36[4] = *(uint8_t *)(a4 + 7);
            v36[5] = *(uint16_t *)(a4 + 6);
LABEL_53:
            ++v123;
            v37 += 8;
            v36 += 6;
            if ( v123 == v118 )
              goto LABEL_17;
          }
          v71 = *(uint16_t *)(*(uint32_t *)(a9 + 4 * ((int)v37[1] >> a12)) + 2 * *v37);
          *v36 = HIBYTE(v71);
          v36[1] = v71;
          v72 = *(uint16_t *)(*(uint32_t *)(a9 + 4 * ((int)v37[3] >> a12)) + 2 * v37[2]);
          v36[2] = HIBYTE(v72);
          v36[3] = v72;
          v44 = *(uint16_t *)(*(uint32_t *)(a9 + 4 * ((int)v37[5] >> a12)) + 2 * v37[4]);
          goto LABEL_57;
        }
        goto LABEL_18;
      }
      if ( v118 != 0 )
      {
        v15 = a2;
        v110 = 0;
        v16 = a2;
        do
        {
          v17 = v16[7] + (v16[6] << 8);
          if ( v17 == 0xFFFF )
          {
            *(uint32_t *)v15 = *(uint32_t *)v16;
            *((uint16_t *)v15 + 2) = *((uint16_t *)v16 + 2);
          }
          else if ( v17 != 0 )
          {
            v119 = (v16[2] << 8) + v16[3];
            v125 = (v16[4] << 8) + v16[5];
            v116 = 0xFFFF - v17;
            v18 = (((v17 * (uint16_t)((*v16 << 8) + v16[1])
                   + v116 * (unsigned int)*(uint16_t *)(a4 + 2)
                   + 0x8000) >> 16)
                 + v17 * (uint16_t)((*v16 << 8) + v16[1])
                 + v116 * *(uint16_t *)(a4 + 2)
                 + 0x8000) >> 16;
            *v15 = (((v17 * (uint16_t)((*v16 << 8) + v16[1])
                    + v116 * (unsigned int)*(uint16_t *)(a4 + 2)
                    + 0x8000) >> 16)
                  + v17 * (uint16_t)((*v16 << 8) + v16[1])
                  + v116 * *(uint16_t *)(a4 + 2)
                  + 0x8000) >> 24;
            v15[1] = v18;
            v19 = (((v17 * v119 + v116 * (unsigned int)*(uint16_t *)(a4 + 4) + 0x8000) >> 16)
                 + v17 * v119
                 + v116 * *(uint16_t *)(a4 + 4)
                 + 0x8000) >> 16;
            v15[2] = (((v17 * v119 + v116 * (unsigned int)*(uint16_t *)(a4 + 4) + 0x8000) >> 16)
                    + v17 * v119
                    + v116 * *(uint16_t *)(a4 + 4)
                    + 0x8000) >> 24;
            v15[3] = v19;
            v20 = v17 * v125 + v116 * *(uint16_t *)(a4 + 6) + 0x8000;
            v21 = (HIWORD(v20) + v20) >> 16;
            v15[4] = BYTE1(v21);
            v15[5] = v21;
          }
          else
          {
            *v15 = *(uint8_t *)(a4 + 3);
            v15[1] = *(uint16_t *)(a4 + 2);
            v15[2] = *(uint8_t *)(a4 + 5);
            v15[3] = *(uint16_t *)(a4 + 4);
            v15[4] = *(uint8_t *)(a4 + 7);
            v15[5] = *(uint16_t *)(a4 + 6);
          }
          ++v110;
          v16 += 8;
          v15 += 6;
        }
        while ( v110 != v118 );
LABEL_69:
        v12 = *((uint8_t *)a1 + 8);
        v13 = v12 & 4;
        goto LABEL_18;
      }
      goto LABEL_18;
    }
    if ( a8 != 0 && a7 != 0 && a6 != 0 )
    {
      if ( v118 == 0 )
        goto LABEL_18;
      v81 = a2;
      v82 = a2;
      do
      {
        v114 = v82[3];
        if ( v114 == 0xFF )
        {
          *v81 = *(uint8_t *)(a6 + *v82);
          v81[1] = *(uint8_t *)(a6 + v82[1]);
          v81[2] = *(uint8_t *)(a6 + v82[2]);
        }
        else
        {
          if ( v114 != 0 )
          {
            v121 = 255 - v114;
            v84 = a5[1] * v121 + *(uint8_t *)(a8 + *v82) * v114 + 128;
            *v81 = *(uint8_t *)(a7 + (uint8_t)((uint16_t)(HIBYTE(v84) + v84) >> 8));
            v85 = a5[2] * v121 + *(uint8_t *)(a8 + v82[1]) * v114 + 128;
            v81[1] = *(uint8_t *)(a7 + (uint8_t)((uint16_t)(HIBYTE(v85) + v85) >> 8));
            v83 = a5[3] * v121 + *(uint8_t *)(a8 + v82[2]) * v114 + 128;
            LOBYTE(v83) = *(uint8_t *)(a7 + (uint8_t)((uint16_t)(HIBYTE(v83) + v83) >> 8));
          }
          else
          {
            *v81 = *(uint16_t *)(a4 + 2);
            v81[1] = *(uint16_t *)(a4 + 4);
            v83 = *(uint16_t *)(a4 + 6);
          }
          v81[2] = v83;
        }
        v82 += 4;
        v81 += 3;
      }
      while ( v81 != &a2[3 * v118] );
      goto LABEL_66;
    }
    if ( v118 == 0 )
      goto LABEL_18;
    v86 = a2;
    v87 = a2;
    do
    {
      v88 = v87[3];
      if ( v88 == 0xFF )
      {
        *v86 = *v87;
        v86[1] = v87[1];
        v86[2] = v87[2];
      }
      else if ( v88 != 0 )
      {
        v115 = 255 - v88;
        v89 = *v87 * v88 + *(uint16_t *)(a4 + 2) * v115 + 128;
        *v86 = (uint16_t)(v89 + HIBYTE(v89)) >> 8;
        v90 = v88 * v87[1] + *(uint16_t *)(a4 + 4) * v115 + 128;
        v86[1] = (uint16_t)(v90 + HIBYTE(v90)) >> 8;
        v91 = v88 * v87[2] + *(uint16_t *)(a4 + 6) * v115 + 128;
        v86[2] = (uint16_t)(v91 + HIBYTE(v91)) >> 8;
      }
      else
      {
        *v86 = *(uint16_t *)(a4 + 2);
        v86[1] = *(uint16_t *)(a4 + 4);
        v86[2] = *(uint16_t *)(a4 + 6);
      }
      v87 += 4;
      v86 += 3;
    }
    while ( v86 != &a2[3 * v118] );
LABEL_114:
    v12 = *((uint8_t *)a1 + 8);
    v13 = v12 & 4;
    goto LABEL_18;
  }
  if ( *((uint8_t *)a1 + 9) != 8 )
  {
    if ( a10 != 0 && a9 != 0 && a11 != 0 )
    {
      if ( v118 != 0 )
      {
        v45 = a2;
        v46 = 0;
        v47 = a2;
        do
        {
          v48 = v47[3] + (v47[2] << 8);
          if ( v48 == 0xFFFF )
          {
            v70 = *(uint16_t *)(*(uint32_t *)(a9 + 4 * ((int)v47[1] >> a12)) + 2 * *v47);
            v45[1] = v70;
            *v45 = HIBYTE(v70);
          }
          else if ( v48 != 0 )
          {
            v49 = a5[4] * (0xFFFF - v48)
                + v48 * *(uint16_t *)(*(uint32_t *)(a11 + 4 * ((int)v47[1] >> a12)) + 2 * *v47)
                + 0x8000;
            LOWORD(v49) = *(uint16_t *)(*(uint32_t *)(a10 + 4 * ((int)(uint8_t)((HIWORD(v49) + v49) >> 16) >> a12))
                                   + 2 * ((HIWORD(v49) + v49) >> 24));
            v45[1] = v49;
            *v45 = BYTE1(v49);
          }
          else
          {
            *v45 = *(uint8_t *)(a4 + 9);
            v45[1] = *(uint16_t *)(a4 + 8);
          }
          ++v46;
          v47 += 4;
          v45 += 2;
        }
        while ( v46 != v118 );
LABEL_17:
        v12 = *((uint8_t *)a1 + 8);
        v13 = v12 & 4;
      }
      goto LABEL_18;
    }
    if ( v118 == 0 )
      goto LABEL_18;
    v30 = a2;
    v31 = 0;
    v32 = a2;
    do
    {
      v33 = v32[3] + (v32[2] << 8);
      if ( v33 == 0xFFFF )
      {
        *(uint16_t *)v30 = *(uint16_t *)v32;
      }
      else if ( v33 != 0 )
      {
        v34 = v33 * (uint16_t)(v32[1] + (*v32 << 8)) + a5[4] * (0xFFFF - v33) + 0x8000;
        v35 = (HIWORD(v34) + v34) >> 16;
        *v30 = BYTE1(v35);
        v30[1] = v35;
      }
      else
      {
        *v30 = *(uint8_t *)(a4 + 9);
        v30[1] = *(uint16_t *)(a4 + 8);
      }
      ++v31;
      v32 += 4;
      v30 += 2;
    }
    while ( v31 != v118 );
LABEL_66:
    v12 = *((uint8_t *)a1 + 8);
    v13 = v12 & 4;
    goto LABEL_18;
  }
  if ( a8 == 0 || a7 == 0 || a6 == 0 )
  {
    v92 = 0;
    if ( v118 == 0 )
      goto LABEL_18;
    do
    {
      v94 = a2[2 * v92 + 1];
      if ( v94 == 0xFF )
      {
        a2[v92] = a2[2 * v92];
      }
      else
      {
        if ( v94 != 0 )
        {
          v95 = a2[2 * v92] * v94 + a5[4] * (255 - v94) + 128;
          v93 = (v95 + HIBYTE(v95)) >> 8;
        }
        else
        {
          LOWORD(v93) = *(uint16_t *)(a4 + 8);
        }
        a2[v92] = v93;
      }
      ++v92;
    }
    while ( v92 != v118 );
    goto LABEL_66;
  }
  if ( v118 != 0 )
  {
    for ( mm = 0; mm != v118; ++mm )
    {
      v79 = a2[2 * mm + 1];
      if ( v79 == 255 )
      {
        a2[mm] = *(uint8_t *)(a6 + a2[2 * mm]);
      }
      else
      {
        if ( v79 != 0 )
        {
          v80 = a5[4] * (255 - v79);
          v78 = *(uint8_t *)(a8 + a2[2 * mm]) * a2[2 * mm + 1];
          LOBYTE(v78) = *(uint8_t *)(a7
                                 + (uint8_t)((uint16_t)((uint8_t)((uint16_t)(v80 + v78 + 128) >> 8)
                                                                      + v80
                                                                      + v78
                                                                      + 128) >> 8));
        }
        else
        {
          v78 = *(uint16_t *)(a4 + 8);
        }
        a2[mm] = v78;
      }
    }
    goto LABEL_69;
  }
LABEL_18:
  if ( v13 != 0 )
  {
    v22 = *((uint8_t *)a1 + 10);
    *((uint8_t *)a1 + 8) = v12 & 0xFB;
    *((uint8_t *)a1 + 10) = --v22;
    v23 = *((uint8_t *)a1 + 9) * v22;
    *((uint8_t *)a1 + 11) = v23;
    if ( v23 <= 7u )
      v24 = (v118 * (unsigned int)v23 + 7) >> 3;
    else
      v24 = v118 * (v23 >> 3);
    a1[1] = v24;
  }
}

// ----------------------------------------------------------------------------
// Function: png_do_gamma  (binary VA: 0xfa59f0)
// Original: png_do_gamma
// ----------------------------------------------------------------------------
int png_do_gamma(unsigned int *a1, uint8_t *a2, int a3, int a4, char a5)
{
  unsigned int v5;
  int v6;
  int v7;
  int result;
  bool v9; // cc
  int v10;
  uint8_t *v11;
  int16_t v12; // di
  int16_t v13; // di
  int16_t v14;
  uint8_t *v15;
  int v16;
  unsigned int v17;
  int16_t v18;
  int v19;
  uint8_t *v20;
  int16_t v21; // di
  int16_t v22; // di
  int16_t v23;
  int v24;
  uint8_t *v25;
  unsigned int v26;
  int16_t v27;
  uint8_t *v28;
  unsigned int i;
  int v30;
  int v31;
  unsigned int v32;
  uint8_t *v33;
  uint8_t *v34;
  uint8_t *v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  uint8_t *v40;
  int v41;
  unsigned int v42;
  unsigned int v43;

  v5 = *a1;
  v6 = *((uint8_t *)a1 + 9);
  if ( a3 == 0 || (uint8_t)v6 > 8u )
  {
    result = a4;
    if ( a4 == 0 )
      return result;
    result = *((uint8_t *)a1 + 9);
    if ( (uint8_t)v6 != 16 )
      return result;
    v7 = *((uint8_t *)a1 + 8);
    result = v7;
    v9 = (uint8_t)v7 <= 2u;
    if ( (uint8_t)v7 != 2 )
      goto LABEL_4;
LABEL_11:
    result = *((uint8_t *)a1 + 9);
    if ( (uint8_t)v6 == 8 )
    {
      if ( v5 != 0 )
      {
        v33 = a2;
        v34 = &a2[3 * v5];
        do
        {
          *v33 = *(uint8_t *)(a3 + *v33);
          v33[1] = *(uint8_t *)(a3 + v33[1]);
          result = *(uint8_t *)(a3 + v33[2]);
          v33[2] = result;
          v33 += 3;
        }
        while ( v33 != v34 );
      }
    }
    else
    {
      v10 = 0;
      v11 = a2;
      if ( v5 != 0 )
      {
        v38 = *a1;
        result = a4;
        do
        {
          ++v10;
          v12 = *(uint16_t *)(*(uint32_t *)(a4 + 4 * ((int)v11[1] >> a5)) + 2 * *v11);
          v11[1] = v12;
          *v11 = HIBYTE(v12);
          v13 = *(uint16_t *)(*(uint32_t *)(a4 + 4 * ((int)v11[3] >> a5)) + 2 * v11[2]);
          v11[3] = v13;
          v11[2] = HIBYTE(v13);
          v14 = *(uint16_t *)(*(uint32_t *)(a4 + 4 * ((int)v11[5] >> a5)) + 2 * v11[4]);
          v11[5] = v14;
          v11[4] = HIBYTE(v14);
          v11 += 6;
        }
        while ( v10 != v38 );
      }
    }
    return result;
  }
  v7 = *((uint8_t *)a1 + 8);
  result = v7;
  v9 = (uint8_t)v7 <= 2u;
  if ( (uint8_t)v7 == 2 )
    goto LABEL_11;
LABEL_4:
  if ( v9 )
  {
    if ( (uint8_t)result != 0 )
      return result;
    result = *((uint8_t *)a1 + 9);
    if ( (uint8_t)v6 == 2 )
    {
      if ( v5 == 0 )
        return result;
      v43 = *a1;
      v40 = a2;
      v42 = 0;
      do
      {
        v30 = *v40 & 3;
        v41 = *v40 & 0xC0;
        v31 = *v40 & 0xC;
        v42 += 4;
        *v40 = (*(uint8_t *)(a3 + ((v31 >> 2) | v31 | (4 * v31) | (16 * v31))) >> 4) & 0xC
             | (*(uint8_t *)(a3 + (((*v40 & 0x30) >> 4) | *v40 & 0x30 | ((*v40 & 0x30) >> 2) | (4 * (*v40 & 0x30)))) >> 2)
             & 0x30
             | *(uint8_t *)(a3 + ((v41 >> 6) | v41 | (v41 >> 4) | (v41 >> 2))) & 0xC0
             | (*(uint8_t *)(a3 + ((4 * v30) | v30 | (16 * v30) | (v30 << 6))) >> 6);
        ++v40;
      }
      while ( v43 > v42 );
      v5 = v43;
      v6 = *((uint8_t *)a1 + 9);
    }
    result = v6;
    if ( (uint8_t)v6 == 4 )
    {
      if ( v5 != 0 )
      {
        v28 = a2;
        for ( i = 0; i < v5; i += 2 )
        {
          result = *(uint8_t *)(a3 + (*v28 & 0xF0 | ((*v28 & 0xF0) >> 4))) & 0xF0
                 | (*(uint8_t *)(a3 + (*v28 & 0xF | (16 * (*v28 & 0xF)))) >> 4);
          *v28++ = result;
        }
      }
    }
    else
    {
      result = v6;
      if ( (uint8_t)v6 == 8 )
      {
        if ( v5 != 0 )
        {
          for ( result = 0; result != v5; ++result )
            a2[result] = *(uint8_t *)(a3 + a2[result]);
        }
      }
      else if ( (uint8_t)v6 == 16 && v5 != 0 )
      {
        v15 = a2;
        v16 = 0;
        v17 = v5;
        result = a4;
        do
        {
          ++v16;
          v18 = *(uint16_t *)(*(uint32_t *)(a4 + 4 * ((int)v15[1] >> a5)) + 2 * *v15);
          v15[1] = v18;
          *v15 = HIBYTE(v18);
          v15 += 2;
        }
        while ( v16 != v17 );
      }
    }
  }
  else
  {
    result = v7;
    if ( (uint8_t)v7 == 4 )
    {
      result = *((uint8_t *)a1 + 9);
      if ( (uint8_t)v6 == 8 )
      {
        if ( v5 != 0 )
        {
          result = 0;
          v32 = *a1;
          do
          {
            a2[2 * result] = *(uint8_t *)(a3 + a2[2 * result]);
            ++result;
          }
          while ( result != v32 );
        }
      }
      else
      {
        v24 = 0;
        v25 = a2;
        if ( v5 != 0 )
        {
          v26 = *a1;
          result = a4;
          do
          {
            ++v24;
            v27 = *(uint16_t *)(*(uint32_t *)(a4 + 4 * ((int)v25[1] >> a5)) + 2 * *v25);
            v25[1] = v27;
            *v25 = HIBYTE(v27);
            v25 += 4;
          }
          while ( v24 != v26 );
        }
      }
    }
    else if ( (uint8_t)v7 == 6 )
    {
      result = *((uint8_t *)a1 + 9);
      if ( (uint8_t)v6 == 8 )
      {
        if ( v5 != 0 )
        {
          v35 = a2;
          result = 0;
          v36 = *a1;
          do
          {
            ++result;
            v37 = v35[2];
            *v35 = *(uint8_t *)(a3 + *v35);
            v35[1] = *(uint8_t *)(a3 + v35[1]);
            v35[2] = *(uint8_t *)(a3 + v37);
            v35 += 4;
          }
          while ( result != v36 );
        }
      }
      else
      {
        v19 = 0;
        v20 = a2;
        if ( v5 != 0 )
        {
          v39 = *a1;
          result = a4;
          do
          {
            ++v19;
            v21 = *(uint16_t *)(*(uint32_t *)(a4 + 4 * ((int)v20[1] >> a5)) + 2 * *v20);
            v20[1] = v21;
            *v20 = HIBYTE(v21);
            v22 = *(uint16_t *)(*(uint32_t *)(a4 + 4 * ((int)v20[3] >> a5)) + 2 * v20[2]);
            v20[3] = v22;
            v20[2] = HIBYTE(v22);
            v23 = *(uint16_t *)(*(uint32_t *)(a4 + 4 * ((int)v20[5] >> a5)) + 2 * v20[4]);
            v20[5] = v23;
            v20[4] = HIBYTE(v23);
            v20 += 8;
          }
          while ( v19 != v39 );
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_expand_palette  (binary VA: 0xfa5eb0)
// Original: png_do_expand_palette
// ----------------------------------------------------------------------------
int png_do_expand_palette(int *a1, int a2, int a3, int a4, int a5)
{
  int *v5;
  int result;
  int v7;
  uint8_t v8;
  int v9;
  int v10;
  uint8_t *v11;
  int v12;
  int v13;
  uint8_t *v14;
  int v15;
  int v16;
  int k;
  int v18;
  int v19;
  int v20;
  uint8_t *v21;
  int i;
  int v23;
  int v24;
  uint8_t *v25;
  int v26;
  int j;
  int v28;
  uint8_t *v29;
  uint8_t *v30;
  int v31;
  int v32;
  int v33;
  int *v34;
  int *v35;
  int v36;

  v5 = a1;
  result = a3;
  v7 = *a1;
  v33 = *a1;
  if ( *((uint8_t *)a1 + 8) != 3 )
    return result;
  v8 = *((uint8_t *)a1 + 9);
  if ( v8 > 7u )
  {
    if ( v8 != 8 )
      return result;
    goto LABEL_5;
  }
  if ( v8 == 2 )
  {
    if ( v33 == 0 )
      goto LABEL_15;
    v35 = a1;
    v19 = 0;
    v20 = 2 * (~((uint8_t)v33 + 3) & 3);
    v21 = (uint8_t *)(a2 + ((unsigned int)(v33 - 1) >> 2));
    v36 = a3;
    for ( i = v33 - 1 + a2; ; i = v33 - 1 + a2 )
    {
      v23 = v20 + 2;
      *(uint8_t *)(i + v19) = ((int)*v21 >> v20) & 3;
      if ( v20 == 6 )
      {
        v23 = 0;
        --v21;
      }
      if ( --v19 == -v33 )
        break;
      v20 = v23;
    }
    goto LABEL_24;
  }
  if ( v8 != 4 )
  {
    if ( v8 != 1 || v7 == 0 )
      goto LABEL_15;
    v35 = a1;
    v24 = ~((uint8_t)v33 + 7) & 7;
    v25 = (uint8_t *)(a2 + ((unsigned int)(v7 - 1) >> 3));
    v26 = 0;
    v32 = v7 - 1 + a2;
    v36 = a3;
    for ( j = v32; ; j = v32 )
    {
      v28 = v24 + 1;
      *(uint8_t *)(j + v26) = ((int)*v25 >> v24) & 1;
      if ( v24 == 7 )
      {
        v28 = 0;
        --v25;
      }
      if ( --v26 == -v33 )
        break;
      v24 = v28;
    }
    goto LABEL_24;
  }
  if ( v33 != 0 )
  {
    v35 = a1;
    v14 = (uint8_t *)(a2 + ((unsigned int)(v33 - 1) >> 1));
    v15 = 0;
    v16 = 4 * (*a1 & 1);
    v36 = a3;
    for ( k = v33 - 1 + a2; ; k = v33 - 1 + a2 )
    {
      v18 = v16 + 4;
      *(uint8_t *)(k + v15) = ((int)*v14 >> v16) & 0xF;
      if ( v16 == 4 )
      {
        v18 = 0;
        --v14;
      }
      if ( --v15 == -v33 )
        break;
      v16 = v18;
    }
LABEL_24:
    v5 = v35;
    result = v36;
  }
LABEL_15:
  *((uint8_t *)v5 + 9) = 8;
  *((uint8_t *)v5 + 11) = 8;
  v5[1] = v33;
LABEL_5:
  if ( a4 != 0 )
  {
    if ( v33 != 0 )
    {
      v9 = 0;
      v34 = v5;
      v10 = a2 + v33 - 1;
      v11 = (uint8_t *)(a2 + 4 * v33 - 2);
      do
      {
        v13 = *(uint8_t *)(v10 + v9);
        if ( v13 >= a5 )
          v11[1] = -1;
        else
          v11[1] = *(uint8_t *)(a4 + v13);
        *v11 = *(uint8_t *)(result + 3 * *(uint8_t *)(v10 + v9) + 2);
        *(v11 - 1) = *(uint8_t *)(result + 3 * *(uint8_t *)(v10 + v9) + 1);
        v12 = *(uint8_t *)(v10 + v9--);
        *(v11 - 2) = *(uint8_t *)(result + 3 * v12);
        v11 -= 4;
      }
      while ( v9 != -v33 );
      v5 = v34;
    }
    *((uint8_t *)v5 + 9) = 8;
    *((uint8_t *)v5 + 11) = 32;
    v5[1] = 4 * v33;
    *((uint8_t *)v5 + 8) = 6;
    *((uint8_t *)v5 + 10) = 4;
    return 4 * v33;
  }
  else
  {
    if ( v33 != 0 )
    {
      v29 = (uint8_t *)(a2 + v33 - 1);
      v30 = (uint8_t *)(a2 + 3 * v33 - 1);
      do
      {
        *v30 = *(uint8_t *)(result + 3 * *v29 + 2);
        *(v30 - 1) = *(uint8_t *)(result + 3 * *v29 + 1);
        v31 = *v29--;
        *(v30 - 2) = *(uint8_t *)(result + 3 * v31);
        v30 -= 3;
      }
      while ( v29 != (uint8_t *)(a2 - 1) );
    }
    *((uint8_t *)v5 + 9) = 8;
    *((uint8_t *)v5 + 11) = 24;
    v5[1] = 3 * v33;
    *((uint8_t *)v5 + 8) = 2;
    *((uint8_t *)v5 + 10) = 3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_expand  (binary VA: 0xfa61f0)
// Original: png_do_expand
// ----------------------------------------------------------------------------
int * png_do_expand(int *a1, int a2, int a3)
{
  int *result;
  char v4;
  int v5;
  char v6; // si
  uint8_t v7;
  unsigned int v8;
  int v9;
  uint8_t *v10;
  int v11;
  int v12;
  uint8_t *v13;
  uint8_t *v14;
  int v15;
  char v16;
  uint8_t *v17;
  uint8_t *v18;
  char v19;
  int v20;
  uint8_t *v21;
  uint8_t *v22;
  int v23;
  int *v24;
  char v25;
  uint8_t *v26;
  uint8_t *v27;
  uint8_t *v28;
  char v29;
  uint8_t *v30;
  int v31;
  int v32;
  int i;
  int v34;
  int v35;
  uint8_t *v36;
  int v37;
  int v38;
  char v39;
  int v40;
  int v41;
  int v42;
  char v43;
  int16_t v44;
  char v45;
  char v46;
  int v47;
  char v48;
  char v49;
  int v50;
  int v51;
  int v52;
  char v53;
  char v54;
  int v55;
  int v56;
  char v57;
  int *v58;
  char v59;

  result = a1;
  v4 = *((uint8_t *)a1 + 8);
  v5 = *a1;
  if ( v4 == 0 )
  {
    v44 = 0;
    if ( a3 != 0 )
      v44 = *(uint16_t *)(a3 + 8);
    v6 = *((uint8_t *)a1 + 9);
    if ( (uint8_t)v6 > 7u )
    {
LABEL_9:
      if ( a3 == 0 )
        return result;
      if ( v6 == 8 )
      {
        if ( v5 != 0 )
        {
          v40 = v5;
          v17 = (uint8_t *)(a2 + v5 - 1);
          v18 = (uint8_t *)(a2 + 2 * v5 - 2);
          do
          {
            v18[1] = (*v17 == (uint16_t)(uint8_t)v44) - 1;
            v19 = *v17--;
            *v18 = v19;
            v18 -= 2;
          }
          while ( v17 != (uint8_t *)(a2 - 1) );
          v5 = v40;
          v6 = *((uint8_t *)result + 9);
          goto LABEL_12;
        }
      }
      else
      {
        if ( v6 != 16 )
          goto LABEL_12;
        v20 = result[1];
        if ( v5 != 0 )
        {
          v21 = (uint8_t *)(a2 + v20 - 1);
          v22 = (uint8_t *)(a2 + 2 * v20 - 3);
          v23 = 0;
          v24 = result;
          do
          {
            if ( *(v21 - 1) == HIBYTE(v44) && *v21 == (uint8_t)v44 )
            {
              v22[2] = 0;
              v22[1] = 0;
            }
            else
            {
              v22[2] = -1;
              v22[1] = -1;
            }
            ++v23;
            *v22 = *v21;
            v25 = *(v21 - 1);
            v21 -= 2;
            *(v22 - 1) = v25;
            v22 -= 4;
          }
          while ( v23 != v5 );
          result = v24;
          v6 = *((uint8_t *)v24 + 9);
LABEL_12:
          v7 = 2 * v6;
          *((uint8_t *)result + 8) = 4;
          *((uint8_t *)result + 10) = 2;
          *((uint8_t *)result + 11) = 2 * v6;
          if ( (uint8_t)(2 * v6) > 7u )
          {
LABEL_13:
            v8 = v5 * (v7 >> 3);
LABEL_14:
            result[1] = v8;
            return result;
          }
LABEL_21:
          v8 = (v5 * (unsigned int)v7 + 7) >> 3;
          goto LABEL_14;
        }
      }
      v7 = 2 * v6;
      *((uint8_t *)result + 8) = 4;
      *((uint8_t *)result + 10) = 2;
      *((uint8_t *)result + 11) = 2 * v6;
      goto LABEL_13;
    }
    switch ( v6 )
    {
      case 1:
        v44 = 255 * (v44 & 1);
        if ( v5 == 0 )
          goto LABEL_8;
        v50 = -v5;
        v55 = *a1;
        v30 = (uint8_t *)(a2 + ((unsigned int)(v5 - 1) >> 3));
        v31 = ~((uint8_t)v5 + 7) & 7;
        v32 = 0;
        v42 = v5 - 1 + a2;
        v58 = a1;
        for ( i = v42; ; i = v42 )
        {
          v34 = v31 + 1;
          *(uint8_t *)(i + v32) = -(((int)*v30 >> v31) & 1);
          if ( v31 == 7 )
          {
            v34 = 0;
            --v30;
          }
          if ( --v32 == v50 )
            break;
          v31 = v34;
        }
        break;
      case 2:
        v44 = 85 * (v44 & 3);
        if ( v5 != 0 )
        {
          v52 = a2 + v5 - 1;
          v47 = -v5;
          v56 = *a1;
          v9 = 2 * (~((uint8_t)v5 + 3) & 3);
          v10 = (uint8_t *)(a2 + ((unsigned int)(v5 - 1) >> 2));
          v11 = 0;
          while ( 1 )
          {
            v12 = v9 + 2;
            *(uint8_t *)(v52 + v11) = ((((int)*v10 >> v9) & 3) << 6)
                                  | ((int)*v10 >> v9) & 3
                                  | (4 * (((int)*v10 >> v9) & 3))
                                  | (16 * (((int)*v10 >> v9) & 3));
            if ( v9 == 6 )
            {
              v12 = 0;
              --v10;
            }
            if ( --v11 == v47 )
              break;
            v9 = v12;
          }
          v5 = v56;
          result = a1;
        }
        goto LABEL_8;
      case 4:
        v44 = 17 * (v44 & 0xF);
        v35 = (((uint8_t)v5 + 1) & 1) == 0 ? 4 : 0;
        if ( v5 == 0 )
          goto LABEL_8;
        v51 = -v5;
        v55 = *a1;
        v36 = (uint8_t *)(a2 + ((unsigned int)(v5 - 1) >> 1));
        v37 = 0;
        v38 = a2 + v5 - 1;
        v58 = a1;
        while ( 1 )
        {
          *(uint8_t *)(v38 + v37) = (16 * (((int)*v36 >> v35) & 0xF)) | ((int)*v36 >> v35) & 0xF;
          if ( v35 == 4 )
            --v36;
          if ( --v37 == v51 )
            break;
          v35 = 4 * (v35 != 4);
        }
        break;
      default:
        goto LABEL_8;
    }
    v5 = v55;
    result = v58;
LABEL_8:
    *((uint8_t *)result + 9) = 8;
    *((uint8_t *)result + 11) = 8;
    result[1] = v5;
    v6 = 8;
    goto LABEL_9;
  }
  if ( a3 != 0 && v4 == 2 )
  {
    v43 = *((uint8_t *)a1 + 9);
    if ( v43 == 8 )
    {
      v49 = *(uint8_t *)(a3 + 2);
      v46 = *(uint8_t *)(a3 + 4);
      v54 = *(uint8_t *)(a3 + 6);
      if ( v5 != 0 )
      {
        v41 = *a1;
        v26 = (uint8_t *)(a2 + a1[1] - 1);
        v27 = (uint8_t *)(a2 + 4 * v5 - 2);
        v28 = &v26[-3 * v5];
        do
        {
          if ( *(v26 - 2) == v49 && *(v26 - 1) == v46 && *v26 == v54 )
            v27[1] = 0;
          else
            v27[1] = -1;
          *v27 = *v26;
          *(v27 - 1) = *(v26 - 1);
          v29 = *(v26 - 2);
          v26 -= 3;
          *(v27 - 2) = v29;
          v27 -= 4;
        }
        while ( v28 != v26 );
        v5 = v41;
        result = a1;
        v43 = *((uint8_t *)a1 + 9);
LABEL_20:
        *((uint8_t *)result + 8) = 6;
        v7 = 4 * v43;
        *((uint8_t *)result + 10) = 4;
        *((uint8_t *)result + 11) = 4 * v43;
        if ( (uint8_t)(4 * v43) > 7u )
          goto LABEL_13;
        goto LABEL_21;
      }
    }
    else
    {
      if ( v43 != 16 )
        goto LABEL_20;
      v45 = HIBYTE(*(uint16_t *)(a3 + 2));
      v48 = HIBYTE(*(uint16_t *)(a3 + 4));
      v57 = HIBYTE(*(uint16_t *)(a3 + 6));
      v39 = *(uint16_t *)(a3 + 2);
      v53 = *(uint16_t *)(a3 + 4);
      v59 = *(uint16_t *)(a3 + 6);
      if ( v5 != 0 )
      {
        v13 = (uint8_t *)(a2 + a1[1] - 1);
        v14 = (uint8_t *)(a2 + 8 * v5 - 3);
        v15 = 0;
        do
        {
          if ( *(v13 - 5) == v45
            && *(v13 - 4) == v39
            && *(v13 - 3) == v48
            && *(v13 - 2) == v53
            && *(v13 - 1) == v57
            && *v13 == v59 )
          {
            v14[2] = 0;
            v14[1] = 0;
          }
          else
          {
            v14[2] = -1;
            v14[1] = -1;
          }
          ++v15;
          *v14 = *v13;
          *(v14 - 1) = *(v13 - 1);
          *(v14 - 2) = *(v13 - 2);
          *(v14 - 3) = *(v13 - 3);
          *(v14 - 4) = *(v13 - 4);
          v16 = *(v13 - 5);
          v13 -= 6;
          *(v14 - 5) = v16;
          v14 -= 8;
        }
        while ( v15 != v5 );
        result = a1;
        v43 = *((uint8_t *)a1 + 9);
        goto LABEL_20;
      }
    }
    *((uint8_t *)a1 + 8) = 6;
    v7 = 4 * v43;
    *((uint8_t *)a1 + 10) = 4;
    *((uint8_t *)a1 + 11) = 4 * v43;
    goto LABEL_13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_quantize  (binary VA: 0xfa6760)
// Original: png_do_quantize
// ----------------------------------------------------------------------------
unsigned int png_do_quantize(int *a1, uint8_t *a2, int a3, unsigned int a4)
{
  uint8_t *v4;
  unsigned int result;
  char v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  uint8_t v11;
  int j;
  uint8_t *v13;
  int i;
  int v15;
  int v16;
  int v17;
  uint8_t v18;
  int v19;

  v4 = a2;
  result = a4;
  v19 = *a1;
  v6 = *((uint8_t *)a1 + 8);
  if ( a3 != 0 )
  {
    if ( v6 == 2 && *((uint8_t *)a1 + 9) == 8 )
    {
      if ( v19 != 0 )
      {
        v7 = a2;
        do
        {
          v8 = (int)*v7 >> 3;
          v9 = (int)v7[1] >> 3;
          v10 = v7[2];
          v7 += 3;
          *v4++ = *(uint8_t *)(a3 + ((v10 >> 3) | (32 * v9) | (v8 << 10)));
        }
        while ( v4 != &a2[v19] );
        v11 = *((uint8_t *)a1 + 9);
        *((uint8_t *)a1 + 8) = 3;
        *((uint8_t *)a1 + 10) = 1;
        *((uint8_t *)a1 + 11) = v11;
        if ( v11 <= 7u )
        {
          result = (v19 * (unsigned int)v11 + 7) >> 3;
LABEL_15:
          a1[1] = result;
          return result;
        }
      }
      else
      {
        v11 = 8;
        *((uint8_t *)a1 + 8) = 3;
        *((uint8_t *)a1 + 10) = 1;
        *((uint8_t *)a1 + 11) = 8;
      }
      result = v19 * (v11 >> 3);
      goto LABEL_15;
    }
    if ( v6 == 6 && *((uint8_t *)a1 + 9) == 8 )
    {
      if ( v19 != 0 )
      {
        v13 = a2;
        for ( i = 0; i != v19; ++i )
        {
          v15 = (int)*v13 >> 3;
          v16 = (int)v13[1] >> 3;
          v17 = v13[2];
          v13 += 4;
          a2[i] = *(uint8_t *)(a3 + ((v17 >> 3) | (32 * v16) | (v15 << 10)));
        }
        v18 = *((uint8_t *)a1 + 9);
        *((uint8_t *)a1 + 8) = 3;
        *((uint8_t *)a1 + 10) = 1;
        *((uint8_t *)a1 + 11) = v18;
        if ( v18 <= 7u )
        {
          result = (i * (unsigned int)v18 + 7) >> 3;
LABEL_25:
          a1[1] = result;
          return result;
        }
      }
      else
      {
        v18 = 8;
        *((uint8_t *)a1 + 8) = 3;
        *((uint8_t *)a1 + 10) = 1;
        *((uint8_t *)a1 + 11) = 8;
      }
      result = v19 * (v18 >> 3);
      goto LABEL_25;
    }
  }
  if ( a4 != 0 && v6 == 3 && *((uint8_t *)a1 + 9) == 8 && v19 != 0 )
  {
    for ( j = 0; j != v19; ++j )
      a2[j] = *(uint8_t *)(a4 + (uint8_t)a2[j]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_read_transformations  (binary VA: 0xfa6950)
// Original: png_do_read_transformations
// ----------------------------------------------------------------------------
unsigned int png_do_read_transformations(int a1)
{
  int v1;
  int v2;
  unsigned int result;
  char v4;
  void (*v5)(int, int, int);
  char v6;
  char v7;
  uint8_t v8;
  int v9;
  typedef int64_t _g4_t_s;
  typedef char _g4_t_v11[62];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (62u + sizeof(_g4_t_v11)) > _g4_s1 ? (62u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 62u);

  if ( *(uint32_t *)(a1 + 216) == 0 )
  {
    snprintf(v11, 0x32u, "NULL row buffer for row %ld, pass %d", *(uint32_t *)(a1 + 208), *(uint8_t *)(a1 + 272));
    png_error(a1, (int)(uintptr_t)(v11));
  }
  v1 = *(uint32_t *)(a1 + 92);
  if ( (v1 & 0x1000) != 0 )
  {
    if ( *(uint8_t *)(a1 + 244) == 3 )
    {
      png_do_expand_palette(
        (int *)(a1 + 236),
        *(uint32_t *)(a1 + 216) + 1,
        *(uint32_t *)(a1 + 256),
        *(uint32_t *)(a1 + 372),
        *(uint16_t *)(a1 + 262));
    }
    else if ( *(uint16_t *)(a1 + 262) != 0 && (v1 & 0x2000000) != 0 )
    {
      png_do_expand((int *)(a1 + 236), *(uint32_t *)(a1 + 216) + 1, a1 + 376);
    }
    else
    {
      png_do_expand((int *)(a1 + 236), *(uint32_t *)(a1 + 216) + 1, 0);
    }
  }
  v2 = *(uint32_t *)(a1 + 88) & 0x400000;
  if ( v2 != 0 )
  {
    LOBYTE(v2) = 0x80;
    png_do_strip_filler(a1 + 236, *(uint32_t *)(a1 + 216) + 1, v2);
  }
  result = *(uint32_t *)(a1 + 92);
  if ( (result & 0x600000) != 0 )
  {
    if ( png_do_rgb_to_gray(a1, (int *)(a1 + 236), (uint8_t *)(*(uint32_t *)(a1 + 216) + 1)) != 0 )
    {
      result = *(uint32_t *)(a1 + 92);
      *(uint8_t *)(a1 + 532) = 1;
      v9 = result & 0x600000;
      if ( (result & 0x600000) == 0x400000 )
      {
        png_warning(a1, "png_do_rgb_to_gray found nongray pixel");
        result = *(uint32_t *)(a1 + 92);
        v9 = result & 0x600000;
      }
      if ( v9 == 0x200000 )
        png_error(a1, (int)(uintptr_t)("png_do_rgb_to_gray found nongray pixel"));
    }
    else
    {
      result = *(uint32_t *)(a1 + 92);
    }
  }
  if ( (result & 0x4000) != 0 && (*(uint8_t *)(a1 + 85) & 8) == 0 )
  {
    png_do_gray_to_rgb((int *)(a1 + 236), *(uint32_t *)(a1 + 216) + 1);
    result = *(uint32_t *)(a1 + 92);
  }
  if ( (result & 0x80u) != 0 && (*(uint16_t *)(a1 + 262) != 0 || (*(uint8_t *)(a1 + 274) & 4) != 0) )
  {
    png_do_background(
      (int *)(a1 + 236),
      (uint8_t *)(*(uint32_t *)(a1 + 216) + 1),
      (uint16_t *)(a1 + 376),
      a1 + 292,
      (uint16_t *)(a1 + 302),
      *(uint32_t *)(a1 + 336),
      *(uint32_t *)(a1 + 340),
      *(uint32_t *)(a1 + 344),
      *(uint32_t *)(a1 + 348),
      *(uint32_t *)(a1 + 352),
      *(uint32_t *)(a1 + 356),
      *(uint32_t *)(a1 + 324));
    result = *(uint32_t *)(a1 + 92);
  }
  if ( (result & 0x2000) != 0 )
  {
    if ( (result & 0x80u) != 0 )
    {
      if ( *(uint16_t *)(a1 + 262) != 0 )
        goto LABEL_21;
      v4 = *(uint8_t *)(a1 + 274);
      if ( (v4 & 4) != 0 )
        goto LABEL_21;
    }
    else
    {
      v4 = *(uint8_t *)(a1 + 274);
    }
    if ( v4 != 3 )
    {
      png_do_gamma(
        (unsigned int *)(a1 + 236),
        (uint8_t *)(*(uint32_t *)(a1 + 216) + 1),
        *(uint32_t *)(a1 + 336),
        *(uint32_t *)(a1 + 348),
        *(uint32_t *)(a1 + 324));
      result = *(uint32_t *)(a1 + 92);
    }
  }
LABEL_21:
  if ( (result & 0x400) != 0 )
  {
    HIDWORD(s) = *(uint32_t *)(a1 + 216) + 1;
    LODWORD(s) = a1 + 236;
    png_do_chop(s);
    result = *(uint32_t *)(a1 + 92);
    if ( (result & 0x40) == 0 )
    {
LABEL_23:
      if ( (result & 0x20) == 0 )
        goto LABEL_24;
      goto LABEL_55;
    }
  }
  else if ( (result & 0x40) == 0 )
  {
    goto LABEL_23;
  }
  png_do_quantize((int *)(a1 + 236), (uint8_t *)(*(uint32_t *)(a1 + 216) + 1), *(uint32_t *)(a1 + 472), *(uint32_t *)(a1 + 476));
  if ( *(uint32_t *)(a1 + 240) == 0 )
    png_error(a1, (int)(uintptr_t)("png_do_quantize returned rowbytes=0"));
  result = *(uint32_t *)(a1 + 92);
  if ( (result & 0x20) == 0 )
  {
LABEL_24:
    if ( (result & 8) == 0 )
      goto LABEL_25;
    goto LABEL_56;
  }
LABEL_55:
  png_do_invert(a1 + 236, *(uint32_t *)(a1 + 216) + 1);
  result = *(uint32_t *)(a1 + 92);
  if ( (result & 8) == 0 )
  {
LABEL_25:
    if ( (result & 4) == 0 )
      goto LABEL_26;
    goto LABEL_57;
  }
LABEL_56:
  png_do_unshift((int *)(a1 + 236), *(uint32_t *)(a1 + 216) + 1, (uint8_t *)(a1 + 365));
  result = *(uint32_t *)(a1 + 92);
  if ( (result & 4) == 0 )
  {
LABEL_26:
    if ( (result & 1) == 0 )
      goto LABEL_27;
LABEL_58:
    png_do_bgr(a1 + 236, *(uint32_t *)(a1 + 216) + 1);
    result = *(uint32_t *)(a1 + 92);
    if ( (result & 0x10000) == 0 )
      goto LABEL_28;
LABEL_59:
    png_do_packswap(a1 + 236, *(uint32_t *)(a1 + 216) + 1);
    result = *(uint32_t *)(a1 + 92);
    goto LABEL_28;
  }
LABEL_57:
  png_do_unpack((int *)(a1 + 236), *(uint32_t *)(a1 + 216) + 1);
  result = *(uint32_t *)(a1 + 92);
  if ( (result & 1) != 0 )
    goto LABEL_58;
LABEL_27:
  if ( (result & 0x10000) != 0 )
    goto LABEL_59;
LABEL_28:
  if ( (result & 0x4000) != 0 && (*(uint8_t *)(a1 + 85) & 8) != 0 )
  {
    png_do_gray_to_rgb((int *)(a1 + 236), *(uint32_t *)(a1 + 216) + 1);
    result = *(uint32_t *)(a1 + 92);
  }
  if ( (result & 0x8000) == 0 )
  {
    if ( (result & 0x80000) == 0 )
      goto LABEL_33;
LABEL_61:
    png_do_read_invert_alpha((int *)(a1 + 236), *(uint32_t *)(a1 + 216) + 1);
    result = *(uint32_t *)(a1 + 92);
    if ( (result & 0x20000) == 0 )
      goto LABEL_34;
    goto LABEL_62;
  }
  png_do_read_filler(a1 + 236, (uint8_t *)(*(uint32_t *)(a1 + 216) + 1), *(uint16_t *)(a1 + 282), *(uint32_t *)(a1 + 88));
  result = *(uint32_t *)(a1 + 92);
  if ( (result & 0x80000) != 0 )
    goto LABEL_61;
LABEL_33:
  if ( (result & 0x20000) != 0 )
  {
LABEL_62:
    png_do_read_swap_alpha((int *)(a1 + 236), *(uint32_t *)(a1 + 216) + 1);
    result = *(uint32_t *)(a1 + 92);
  }
LABEL_34:
  if ( (result & 0x10) != 0 )
  {
    png_do_swap(a1 + 236, *(uint32_t *)(a1 + 216) + 1);
    result = *(uint32_t *)(a1 + 92);
  }
  if ( (result & 0x100000) != 0 )
  {
    v5 = *(void (**)(int, int, int))(a1 + 68);
    if ( v5 != nullptr )
      v5(a1, a1 + 236, *(uint32_t *)(a1 + 216) + 1);
    v6 = *(uint8_t *)(a1 + 80);
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(a1 + 81);
      *(uint8_t *)(a1 + 245) = v6;
      if ( v7 == 0 )
      {
LABEL_41:
        v8 = v6 * *(uint8_t *)(a1 + 246);
        *(uint8_t *)(a1 + 247) = v8;
        if ( v8 > 7u )
        {
LABEL_42:
          result = *(uint32_t *)(a1 + 236) * (v8 >> 3);
LABEL_43:
          *(uint32_t *)(a1 + 240) = result;
          return result;
        }
LABEL_47:
        result = (*(uint32_t *)(a1 + 236) * (unsigned int)v8 + 7) >> 3;
        goto LABEL_43;
      }
    }
    else
    {
      v7 = *(uint8_t *)(a1 + 81);
      v6 = *(uint8_t *)(a1 + 245);
      if ( v7 == 0 )
        goto LABEL_41;
    }
    *(uint8_t *)(a1 + 246) = v7;
    v8 = v6 * v7;
    *(uint8_t *)(a1 + 247) = v8;
    if ( v8 > 7u )
      goto LABEL_42;
    goto LABEL_47;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_build_gamma_table  (binary VA: 0xfa6fe0)
// Original: png_build_gamma_table
// ----------------------------------------------------------------------------
void png_build_gamma_table(int a1, uint8_t a2)
{
  int v2;
  float v3; // xmm0_4
  uint8_t *v4;
  int v5;
  uint8_t *v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  void **v16;
  double v17; // xmm0_8
  unsigned int v18;
  __m128d v19;
  __m128d v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  double v28; // xmm0_8
  char *v29;
  char *v30;
  void *v31;
  int v32;
  int m;
  int v34;
  uint8_t *v35;
  uint8_t *i;
  uint8_t *v37;
  double v38; // xmm0_8
  int v39;
  uint8_t *j;
  double v41;
  double v42;
  double v43;
  int v44;
  int v45;
  int v46;
  int v47;
  size_t v48;
  int v49;
  int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  int v56;
  int v57;
  unsigned int v58;
  double v59;
  double v60;
  double v61;
  int v62;
  double v63;
  int v64;
  int v65;
  int v66;
  int v67;
  char v68;
  double v69;
  unsigned int k;
  double v71;
  double v72;

  v2 = a1;
  if ( a2 <= 8u )
  {
    v3 = *(float *)(a1 + 332);
    if ( v3 > 0.000001 )
    {
      v69 = 1.0 / (float)(v3 * *(float *)(a1 + 328));
      v71 = pow(0.0, v69);
    }
    else
    {
      v71 = 0.0;
      v69 = 1.0;
    }
    v4 = (uint8_t *)(png_malloc(a1, 0x100u));
    *(uint32_t *)(a1 + 336) = (uint32_t)(uintptr_t)(v4);
    v5 = 0;
    v6 = v4;
    while ( 1 )
    {
      v6[v5++] = (int)(255.0 * v71 + 0.5);
      if ( v5 == 256 )
        break;
      v6 = *(uint8_t **)(a1 + 336);
      v71 = pow((double)v5 * 0.00392156862745098, v69);
    }
    if ( (*(uint32_t *)(a1 + 92) & 0x600080) != 0 )
    {
      v34 = 0;
      v72 = 1.0 / *(float *)(a1 + 328);
      v35 = (uint8_t *)(png_malloc(a1, 0x100u));
      *(uint32_t *)(a1 + 344) = (uint32_t)(uintptr_t)(v35);
      for ( i = v35; ; i = *(uint8_t **)(a1 + 344) )
      {
        i[v34] = (int)(pow((double)v34 * 0.00392156862745098, v72) * 255.0 + 0.5);
        if ( ++v34 == 256 )
          break;
      }
      v37 = (uint8_t *)(png_malloc(a1, 0x100u));
      v38 = *(float *)(a1 + 332);
      *(uint32_t *)(a1 + 340) = (uint32_t)(uintptr_t)(v37);
      if ( v38 > 0.000001 )
        v60 = 1.0 / v38;
      else
        v60 = *(float *)(a1 + 328);
      v39 = 0;
      for ( j = v37; ; j = *(uint8_t **)(a1 + 340) )
      {
        j[v39] = (int)(pow((double)v39 * 0.00392156862745098, v60) * 255.0 + 0.5);
        if ( ++v39 == 256 )
          break;
      }
    }
    return;
  }
  if ( (*(uint8_t *)(a1 + 274) & 2) != 0 )
  {
    v7 = *(uint8_t *)(a1 + 360);
    if ( *(uint8_t *)(a1 + 361) >= (unsigned int)v7 )
      v7 = *(uint8_t *)(a1 + 361);
    if ( v7 < *(uint8_t *)(a1 + 362) )
    {
      v7 = *(uint8_t *)(a1 + 362);
      goto LABEL_12;
    }
  }
  else
  {
    v7 = *(uint8_t *)(a1 + 363);
  }
  v49 = 0;
  if ( v7 != 0 )
LABEL_12:
    v49 = 16 - v7;
  if ( (*(uint8_t *)(a1 + 93) & 4) != 0 && v49 <= 4 )
  {
    v48 = 32;
    v65 = 8;
    v66 = 8;
    v68 = 3;
    v8 = 5;
    v49 = 5;
  }
  else if ( v49 <= 8 )
  {
    if ( v49 >= 0 )
    {
      v68 = 8 - v49;
      v66 = 1 << (8 - v49);
      v65 = v66;
      v8 = (uint8_t)v49;
      v48 = 4 * v66;
    }
    else
    {
      v48 = 1024;
      v65 = 256;
      v66 = 256;
      v68 = 8;
      v8 = 0;
      v49 = 0;
    }
  }
  else
  {
    v48 = 4;
    v65 = 1;
    v66 = 1;
    v68 = 0;
    v8 = 8;
    v49 = 8;
  }
  v9 = *(float *)(a1 + 332);
  *(uint32_t *)(a1 + 324) = v8;
  if ( v9 <= 0.000001 )
    v61 = 1.0;
  else
    v61 = 1.0 / (float)(v9 * *(float *)(a1 + 328));
  v10 = (uint32_t *)(png_calloc(a1, v48));
  v11 = *(uint32_t *)(a1 + 92);
  *(uint32_t *)(a1 + 348) = (uint32_t)(uintptr_t)(v10);
  if ( (v11 & 0x480) != 0 )
  {
    if ( v66 > 0 )
    {
      v14 = 0;
      v15 = a1;
      while ( 1 )
      {
        v16 = (void **)&v10[v14];
        v45 = v15;
        ++v14;
        *v16 = png_malloc(v15, 0x200u);
        v15 = v45;
        if ( v14 == v66 )
          break;
        v10 = *(uint32_t **)(v45 + 348);
      }
      v2 = v45;
    }
    v17 = 1.0 / v61;
    v51 = v65 << 8;
    v18 = 0;
    v62 = 0;
    v67 = 255 >> v49;
    do
    {
      v19 = g4_to_m128d(0);
      g4_m128_lane_ref<double>(v19, 0) = pow(((double)v62 + 0.5) * 0.00390625, v17) * (double)(unsigned int)(v65 << 8);
      v20 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v19);
      for ( k = _mm_cvtsi128_si32(
                  _mm_xor_si128(
                    _mm_cvttpd_epi32(_mm_sub_pd(v19, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v20))),
                    _mm_slli_epi32(G4_BITCAST<__m128i>(v20), 0x1Fu)));
            k >= v18;
            *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(v2 + 348) + 4 * v22) + 2 * (v21 >> v68)) = v62 | ((uint16_t)v62 << 8) )
      {
        v21 = v18;
        v22 = v18++ & v67;
      }
      ++v62;
    }
    while ( v62 != 256 );
    for ( ; v18 < v51; *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(v2 + 348) + 4 * v24) + 2 * (v23 >> v68)) = -1 )
    {
      v23 = v18;
      v24 = v18++ & v67;
    }
  }
  else
  {
    if ( v66 <= 0 )
      goto LABEL_43;
    v53 = 0;
    v56 = 0;
    v50 = dword_1CBDAE0[v49];
    while ( 1 )
    {
      v10[v56] = (uint32_t)(uintptr_t)(png_malloc(v2, 0x200u));
      v12 = 0;
      v13 = v2;
      do
      {
        v44 = v13;
        v41 = pow((double)((v53 >> 4) + (v12 << 8)) * 0.000015259021896696422, v61);
        v13 = v44;
        *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(v44 + 348) + 4 * v56) + 2 * v12++) = (int)(v41 * 65535.0 + 0.5);
      }
      while ( v12 != 256 );
      v2 = v44;
      ++v56;
      v53 += v50;
      if ( v56 == v66 )
        break;
      v10 = *(uint32_t **)(v44 + 348);
    }
  }
  v11 = *(uint32_t *)(v2 + 92);
LABEL_43:
  if ( (v11 & 0x600080) != 0 )
  {
    v63 = 1.0 / *(float *)(v2 + 328);
    v25 = (uint32_t *)(png_calloc(v2, v48));
    *(uint32_t *)(v2 + 356) = (uint32_t)(uintptr_t)(v25);
    if ( v66 > 0 )
    {
      v54 = 0;
      v57 = 0;
      v52 = dword_1CBDAE0[v49];
      while ( 1 )
      {
        v25[v57] = (uint32_t)(uintptr_t)(png_malloc(v2, 0x200u));
        v26 = 0;
        v27 = v2;
        do
        {
          v46 = v27;
          v42 = pow((double)((v54 >> 4) + (v26 << 8)) * 0.000015259021896696422, v63);
          v27 = v46;
          *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(v46 + 356) + 4 * v57) + 2 * v26++) = (int)(v42 * 65535.0 + 0.5);
        }
        while ( v26 != 256 );
        v2 = v46;
        ++v57;
        v54 += v52;
        if ( v57 == v66 )
          break;
        v25 = *(uint32_t **)(v46 + 356);
      }
    }
    v28 = *(float *)(v2 + 332);
    if ( v28 > 0.000001 )
      v59 = 1.0 / v28;
    else
      v59 = *(float *)(v2 + 328);
    v29 = (char *)png_calloc(v2, v48);
    *(uint32_t *)(v2 + 352) = (uint32_t)(uintptr_t)(v29);
    if ( v66 > 0 )
    {
      v58 = 0;
      v64 = 0;
      v55 = dword_1CBDAE0[v49];
      while ( 1 )
      {
        v30 = &v29[4 * v64];
        v31 = png_malloc(v2, 0x200u);
        v32 = v2;
        *(uint32_t *)v30 = (uint32_t)(uintptr_t)(v31);
        for ( m = 0; m != 256; ++m )
        {
          v47 = v32;
          v43 = pow((double)((v58 >> 4) + (m << 8)) * 0.000015259021896696422, v59);
          v32 = v47;
          *(uint16_t *)(*(uint32_t *)(*(uint32_t *)(v47 + 352) + 4 * v64) + 2 * m) = (int)(v43 * 65535.0 + 0.5);
        }
        v2 = v47;
        ++v64;
        v58 += v55;
        if ( v64 == v66 )
          break;
        v29 = *(char **)(v47 + 352);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_init_read_transformations  (binary VA: 0xfa7a20)
// Original: png_init_read_transformations
// ----------------------------------------------------------------------------
int png_init_read_transformations(int a1)
{
  int v1;
  int result;
  int v3;
  int v4;
  bool v5;
  uint16_t v6;
  uint8_t *v7;
  int v8;
  uint8_t v9;
  int16_t v10;
  int16_t v11;
  int16_t v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  uint16_t v17;
  int v18;
  int v19;
  char v20;
  int16_t v21;
  char v22;
  double v23; // xmm2_8
  long double v24; // fst7
  double v25; // xmm0_8
  uint16_t v26; // di
  double v27; // xmm0_8
  int v28;
  uint16_t v29;
  uint8_t *v30;
  int v31;
  float v32; // xmm0_4
  int16_t v33;
  int16_t v34;
  int16_t v35;
  int16_t v36;
  int16_t v37;
  int16_t v38;
  int16_t v39;
  uint8_t *v40;
  int v41;
  int v42;
  uint8_t *v43;
  uint8_t *v44;
  char v45;
  double v46; // xmm3_8
  double v47; // xmm0_8
  double v48; // xmm2_8
  double v49; // xmm1_8
  double v50; // xmm0_8
  int v51;
  char v52;
  int16_t v53;
  int16_t v54;
  int16_t v55;
  int16_t v56;
  int v57;
  float v58; // xmm1_4
  uint8_t v59;
  double v60;
  double v61;
  double v62;
  double v63;
  double v64;
  double v65;
  double v66;
  int v67;
  int v68;
  double v69;
  int v70;
  double v71;
  double v72;
  uint8_t v73;
  uint8_t v74;
  uint8_t v75;
  uint8_t v76;
  uint8_t v77;
  uint8_t v78;
  uint8_t v79;
  int v80;
  double v81;
  double v82;
  int v83;
  int v84;
  char v85;
  int v86;
  char v87;
  double v88;
  int v89;
  int v90;
  int16_t v91;
  char v92;
  int v93;
  double v94;
  int v95;
  int i;
  int v97;

  v1 = a1;
  result = *(uint32_t *)(a1 + 92);
  v3 = *(uint8_t *)(a1 + 274);
  if ( (result & 0x100) != 0 && (v3 & 2) == 0 )
  {
    *(uint32_t *)(a1 + 84) |= 0x800u;
    if ( (result & 0x1100) != 0x1100 )
      goto LABEL_5;
  }
  else
  {
    v4 = *(uint32_t *)(a1 + 92);
    if ( (v4 & 0x4180) == 0x4080 )
    {
      v21 = *(uint16_t *)(a1 + 294);
      if ( v21 == *(uint16_t *)(a1 + 296) && v21 == *(uint16_t *)(a1 + 298) )
      {
        *(uint32_t *)(a1 + 84) |= 0x800u;
        *(uint16_t *)(a1 + 300) = v21;
      }
    }
    if ( (v4 & 0x1100) != 0x1100 )
      goto LABEL_5;
  }
  if ( (v3 & 2) != 0 )
  {
    if ( v3 != 3 )
    {
      *(uint32_t *)(a1 + 302) = *(uint32_t *)(a1 + 292);
      *(uint32_t *)(a1 + 306) = *(uint32_t *)(a1 + 296);
      *(uint16_t *)(a1 + 310) = *(uint16_t *)(a1 + 300);
      goto LABEL_6;
    }
    v40 = (uint8_t *)(*(uint32_t *)(a1 + 256) + 3 * *(uint8_t *)(a1 + 292));
    *(uint16_t *)(a1 + 294) = *v40;
    *(uint16_t *)(a1 + 296) = v40[1];
    *(uint16_t *)(a1 + 298) = v40[2];
    v17 = *(uint16_t *)(a1 + 262);
    if ( (result & 0x80000) != 0 && (result & 0x2000000) == 0 )
    {
      v41 = v17;
      if ( v17 != 0 )
      {
        v42 = 0;
        do
        {
          v43 = (uint8_t *)(*(uint32_t *)(a1 + 372) + v42++);
          *v43 = ~*v43;
        }
        while ( v41 > v42 );
        v17 = *(uint16_t *)(a1 + 262);
        result = *(uint32_t *)(a1 + 92);
      }
    }
    *(uint32_t *)(a1 + 302) = *(uint32_t *)(a1 + 292);
    *(uint32_t *)(a1 + 306) = *(uint32_t *)(a1 + 296);
    *(uint16_t *)(a1 + 310) = *(uint16_t *)(a1 + 300);
    goto LABEL_35;
  }
  switch ( *(uint8_t *)(a1 + 275) )
  {
    case 1:
      v38 = 255 * *(uint16_t *)(a1 + 300);
      *(uint16_t *)(a1 + 300) = v38;
      *(uint16_t *)(a1 + 298) = v38;
      *(uint16_t *)(a1 + 296) = v38;
      *(uint16_t *)(a1 + 294) = v38;
      if ( (result & 0x2000000) == 0 )
      {
        v39 = 255 * *(uint16_t *)(a1 + 384);
        *(uint16_t *)(a1 + 384) = v39;
        *(uint16_t *)(a1 + 382) = v39;
        *(uint16_t *)(a1 + 380) = v39;
        *(uint16_t *)(a1 + 378) = v39;
      }
      break;
    case 2:
      v37 = 85 * *(uint16_t *)(a1 + 300);
      *(uint16_t *)(a1 + 300) = v37;
      *(uint16_t *)(a1 + 298) = v37;
      *(uint16_t *)(a1 + 296) = v37;
      *(uint16_t *)(a1 + 294) = v37;
      if ( (result & 0x2000000) == 0 )
      {
        v35 = 5 * *(uint16_t *)(a1 + 384);
        goto LABEL_67;
      }
      break;
    case 4:
      v34 = 17 * *(uint16_t *)(a1 + 300);
      *(uint16_t *)(a1 + 300) = v34;
      *(uint16_t *)(a1 + 298) = v34;
      *(uint16_t *)(a1 + 296) = v34;
      *(uint16_t *)(a1 + 294) = v34;
      if ( (result & 0x2000000) == 0 )
      {
        v35 = *(uint16_t *)(a1 + 384);
LABEL_67:
        v36 = 17 * v35;
        *(uint16_t *)(a1 + 384) = v36;
        *(uint16_t *)(a1 + 382) = v36;
        *(uint16_t *)(a1 + 380) = v36;
        *(uint16_t *)(a1 + 378) = v36;
      }
      break;
    case 8:
    case 0x10:
      v33 = *(uint16_t *)(a1 + 300);
      *(uint16_t *)(a1 + 298) = v33;
      *(uint16_t *)(a1 + 296) = v33;
      *(uint16_t *)(a1 + 294) = v33;
      break;
    default:
      break;
  }
LABEL_5:
  *(uint32_t *)(a1 + 302) = *(uint32_t *)(a1 + 292);
  *(uint32_t *)(a1 + 306) = *(uint32_t *)(a1 + 296);
  *(uint16_t *)(a1 + 310) = *(uint16_t *)(a1 + 300);
  if ( v3 != 3 )
    goto LABEL_6;
  v17 = *(uint16_t *)(a1 + 262);
LABEL_35:
  if ( v17 != 0 && fabs((float)(*(float *)(a1 + 328) * *(float *)(a1 + 332)) - 1.0) < 0.05 )
  {
    v93 = v17 + 1;
    v18 = 1;
    v19 = 0;
    v80 = result;
    do
    {
      v20 = *(uint8_t *)(*(uint32_t *)(a1 + 372) + v18++ - 1);
      if ( (uint8_t)(v20 - 1) <= 0xFDu )
        v19 = 1;
    }
    while ( v18 != v93 );
    v3 = 3;
    result = v80;
    v1 = a1;
    if ( v19 == 0 )
    {
      BYTE1(result) = BYTE1(v80) & 0xDF;
      *(uint32_t *)(a1 + 92) = result;
    }
  }
LABEL_6:
  if ( (result & 0x602000) == 0 || *(float *)(v1 + 328) == 0.0 )
  {
    v5 = v3 == 3;
    if ( (result & 0x80u) == 0 || v3 != 3 )
      goto LABEL_19;
    v6 = *(uint16_t *)(v1 + 262);
    v79 = *(uint8_t *)(v1 + 294);
    v77 = *(uint8_t *)(v1 + 296);
    v75 = *(uint8_t *)(v1 + 298);
    if ( v6 == 0 )
      goto LABEL_18;
    v7 = *(uint8_t **)(v1 + 256);
    v8 = 1;
    v84 = v6 + 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v90 = v8 - 1;
        v9 = *(uint8_t *)(*(uint32_t *)(v1 + 372) + v8 - 1);
        if ( v9 != 0 )
          break;
        *v7 = v79;
        v7[1] = v77;
        v7[2] = v75;
LABEL_13:
        ++v8;
        v7 += 3;
        if ( v8 == v84 )
          goto LABEL_17;
      }
      if ( v9 == 0xFF )
        goto LABEL_13;
      ++v8;
      v10 = *v7 * v9 + v79 * (255 - v9) + 128;
      *v7 = (uint16_t)(v10 + HIBYTE(v10)) >> 8;
      v11 = *(uint8_t *)(*(uint32_t *)(v1 + 372) + v90);
      v7[1] = (uint16_t)(v7[1] * v11
                               + v77 * (255 - v11)
                               + 128
                               + (uint8_t)((uint16_t)(v7[1] * v11 + v77 * (255 - v11) + 128) >> 8)) >> 8;
      v91 = v7[2] * *(uint8_t *)(*(uint32_t *)(v1 + 372) + v90)
          + v75 * (255 - *(uint8_t *)(*(uint32_t *)(v1 + 372) + v90))
          + 128;
      v7[2] = (uint16_t)(v91 + HIBYTE(v91)) >> 8;
      v7 += 3;
      if ( v8 == v84 )
      {
LABEL_17:
        result = *(uint32_t *)(v1 + 92);
LABEL_18:
        LOBYTE(result) = result & 0x7F;
        v5 = true;
        result |= 0x40000u;
        *(uint32_t *)(v1 + 92) = result;
LABEL_19:
        if ( (result & 8) != 0 && v5 )
        {
          v12 = *(uint16_t *)(v1 + 260);
          v13 = 8 - *(uint8_t *)(v1 + 361);
          v14 = 8 - *(uint8_t *)(v1 + 360);
          result = 0;
          if ( v14 >= 9 )
            LOBYTE(v14) = 0;
          v92 = v14;
          if ( v13 >= 9 )
            LOBYTE(v13) = 0;
          if ( 8 - (unsigned int)*(uint8_t *)(v1 + 362) < 9 )
            result = 8 - *(uint8_t *)(v1 + 362);
          v85 = v13;
          v87 = result;
          if ( v12 != 0 )
          {
            v15 = 0;
            do
            {
              *(uint8_t *)(*(uint32_t *)(v1 + 256) + v15) = (int)*(uint8_t *)(*(uint32_t *)(v1 + 256) + v15) >> v92;
              *(uint8_t *)(*(uint32_t *)(v1 + 256) + v15 + 1) = (int)*(uint8_t *)(*(uint32_t *)(v1 + 256) + v15 + 1) >> v85;
              v16 = *(uint32_t *)(v1 + 256) + v15;
              v15 += 3;
              result = (int)*(uint8_t *)(v16 + 2) >> v87;
              *(uint8_t *)(v16 + 2) = result;
            }
            while ( v15 != 3 * (uint16_t)(v12 - 1) + 3 );
          }
        }
        return result;
      }
    }
  }
  png_build_gamma_table(v1, *(uint8_t *)(v1 + 275));
  result = *(uint32_t *)(v1 + 92);
  if ( (result & 0x80u) != 0 )
  {
    if ( v3 != 3 )
    {
      v22 = *(uint8_t *)(v1 + 284);
      v94 = (double)(unsigned int)((1 << *(uint8_t *)(v1 + 275)) + 1);
      if ( v22 == 2 )
      {
        v32 = *(float *)(v1 + 328);
      }
      else
      {
        if ( v22 != 3 )
        {
          if ( v22 == 1 )
          {
            v23 = *(float *)(v1 + 332);
            v88 = v23;
            v81 = 1.0;
          }
          else
          {
            v81 = 1.0;
            v23 = 1.0;
            v88 = 1.0;
          }
LABEL_52:
          v69 = (double)*(uint16_t *)(v1 + 300) / v94;
          v24 = pow(v69, v23);
          *(uint16_t *)(v1 + 310) = (int)((double)v24 * v94 + 0.5);
          v25 = v69;
          v70 = (int)((double)v24 * v94 + 0.5);
          v60 = pow(v25, v81);
          v26 = *(uint16_t *)(v1 + 296);
          v27 = v60 * v94 + 0.5;
          *(uint16_t *)(v1 + 300) = (int)v27;
          v28 = (int)v27;
          result = *(uint16_t *)(v1 + 294);
          if ( (uint16_t)result == v26 && (uint16_t)result == *(uint16_t *)(v1 + 298) && (uint16_t)v28 == (uint16_t)result )
          {
            *(uint16_t *)(v1 + 308) = v70;
            *(uint16_t *)(v1 + 306) = v70;
            *(uint16_t *)(v1 + 304) = v70;
            *(uint16_t *)(v1 + 298) = v28;
            *(uint16_t *)(v1 + 296) = v28;
            *(uint16_t *)(v1 + 294) = v28;
          }
          else
          {
            v65 = (double)(uint16_t)result * (1.0 / v94);
            *(uint16_t *)(v1 + 304) = (int)(pow(v65, v88) * v94 + 0.5);
            v63 = (double)v26 * (1.0 / v94);
            *(uint16_t *)(v1 + 306) = (int)(pow(v63, v88) * v94 + 0.5);
            v71 = (double)*(uint16_t *)(v1 + 298) * (1.0 / v94);
            *(uint16_t *)(v1 + 308) = (int)(pow(v71, v88) * v94 + 0.5);
            *(uint16_t *)(v1 + 294) = (int)(pow(v65, v81) * v94 + 0.5);
            *(uint16_t *)(v1 + 296) = (int)(pow(v63, v81) * v94 + 0.5);
            result = (int)(pow(v71, v81) * v94 + 0.5);
            *(uint16_t *)(v1 + 298) = result;
          }
          return result;
        }
        v32 = *(float *)(v1 + 288);
      }
      v88 = 1.0 / v32;
      v81 = 1.0 / (float)(v32 * *(float *)(v1 + 332));
      v23 = v88;
      goto LABEL_52;
    }
    v44 = *(uint8_t **)(v1 + 256);
    v89 = *(uint16_t *)(v1 + 260);
    v45 = *(uint8_t *)(v1 + 284);
    switch ( v45 )
    {
      case 2:
        v57 = *(uint32_t *)(v1 + 336);
        v83 = *(uint16_t *)(v1 + 294);
        v73 = *(uint8_t *)(v57 + v83);
        v97 = *(uint16_t *)(v1 + 296);
        v76 = *(uint8_t *)(v57 + v97);
        v86 = *(uint16_t *)(v1 + 298);
        v78 = *(uint8_t *)(v57 + v86);
        v51 = *(uint32_t *)(v1 + 344);
        v59 = *(uint8_t *)(v51 + v83);
        v74 = *(uint8_t *)(v51 + v97);
        LOBYTE(v51) = *(uint8_t *)(v51 + v86);
        goto LABEL_86;
      case 3:
        v58 = *(float *)(v1 + 288);
        v82 = 1.0 / v58;
        v46 = 1.0 / (float)(v58 * *(float *)(v1 + 332));
        v47 = fabs(v46 - 1.0);
        break;
      case 1:
        v82 = *(float *)(v1 + 332);
        goto LABEL_103;
      default:
        v46 = 1.0;
        v47 = 0.0;
        v82 = 1.0;
        break;
    }
    if ( v47 >= 0.05 )
    {
      v67 = *(uint32_t *)(v1 + 92);
      v66 = (double)*(uint16_t *)(v1 + 294) * 0.00392156862745098;
      v73 = (int)(pow(v66, v46) * 255.0 + 0.5);
      v64 = (double)*(uint16_t *)(v1 + 296) * 0.00392156862745098;
      v76 = (int)(pow(v64, v46) * 255.0 + 0.5);
      v72 = (double)*(uint16_t *)(v1 + 298) * 0.00392156862745098;
      v61 = pow(v72, v46);
      result = v67;
      v48 = v66;
      v49 = v64;
      v50 = v72;
      v78 = (int)(v61 * 255.0 + 0.5);
LABEL_85:
      v68 = result;
      v59 = (int)(pow(v48, v82) * 255.0 + 0.5);
      v74 = (int)(pow(v49, v82) * 255.0 + 0.5);
      v62 = pow(v50, v82);
      result = v68;
      v51 = (int)(v62 * 255.0 + 0.5);
LABEL_86:
      if ( v89 != 0 )
      {
        for ( i = 0; i < v89; ++i )
        {
          if ( *(uint16_t *)(v1 + 262) <= i || (v52 = *(uint8_t *)(*(uint32_t *)(v1 + 372) + i)) == -1 )
          {
            *v44 = *(uint8_t *)(*(uint32_t *)(v1 + 336) + *v44);
            v44[1] = *(uint8_t *)(*(uint32_t *)(v1 + 336) + v44[1]);
            v44[2] = *(uint8_t *)(*(uint32_t *)(v1 + 336) + v44[2]);
          }
          else if ( v52 != 0 )
          {
            v53 = *(uint8_t *)(*(uint32_t *)(v1 + 344) + *v44) * *(uint8_t *)(*(uint32_t *)(v1 + 372) + i)
                + v59 * (255 - *(uint8_t *)(*(uint32_t *)(v1 + 372) + i))
                + 128;
            *v44 = *(uint8_t *)(*(uint32_t *)(v1 + 340) + (uint8_t)((uint16_t)(HIBYTE(v53) + v53) >> 8));
            v54 = *(uint8_t *)(*(uint32_t *)(v1 + 344) + v44[1]) * *(uint8_t *)(*(uint32_t *)(v1 + 372) + i)
                + v74 * (255 - *(uint8_t *)(*(uint32_t *)(v1 + 372) + i))
                + 128;
            v44[1] = *(uint8_t *)(*(uint32_t *)(v1 + 340) + (uint8_t)((uint16_t)(HIBYTE(v54) + v54) >> 8));
            v55 = *(uint8_t *)(*(uint32_t *)(v1 + 372) + i);
            v56 = *(uint8_t *)(*(uint32_t *)(v1 + 344) + v44[2]) * v55 + (uint8_t)v51 * (255 - v55) + 128;
            v44[2] = *(uint8_t *)(*(uint32_t *)(v1 + 340) + (uint8_t)((uint16_t)(HIBYTE(v56) + v56) >> 8));
          }
          else
          {
            *v44 = v73;
            v44[1] = v76;
            v44[2] = v78;
          }
          v44 += 3;
        }
        result = *(uint32_t *)(v1 + 92);
      }
      v5 = true;
      result = result & 0xFFFBDF7F | 0x40000;
      *(uint32_t *)(v1 + 92) = result;
      goto LABEL_19;
    }
LABEL_103:
    v73 = *(uint16_t *)(v1 + 294);
    v76 = *(uint16_t *)(v1 + 296);
    v78 = *(uint16_t *)(v1 + 298);
    v48 = (double)*(uint16_t *)(v1 + 294) * 0.00392156862745098;
    v49 = (double)*(uint16_t *)(v1 + 296) * 0.00392156862745098;
    v50 = (double)*(uint16_t *)(v1 + 298) * 0.00392156862745098;
    goto LABEL_85;
  }
  if ( v3 == 3 )
  {
    v29 = *(uint16_t *)(v1 + 260);
    if ( v29 != 0 )
    {
      v30 = *(uint8_t **)(v1 + 256);
      v95 = 3 * v29;
      v31 = 0;
      do
      {
        v31 += 3;
        *v30 = *(uint8_t *)(*(uint32_t *)(v1 + 336) + *v30);
        v30[1] = *(uint8_t *)(*(uint32_t *)(v1 + 336) + v30[1]);
        v30[2] = *(uint8_t *)(*(uint32_t *)(v1 + 336) + v30[2]);
        v30 += 3;
      }
      while ( v31 != v95 );
      result = *(uint32_t *)(v1 + 92);
    }
    BYTE1(result) &= ~0x20u;
    v5 = true;
    *(uint32_t *)(v1 + 92) = result;
    goto LABEL_19;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_read_intrapixel  (binary VA: 0xfa8c50)
// Original: png_do_read_intrapixel
// ----------------------------------------------------------------------------
int png_do_read_intrapixel(int *a1, int a2)
{
  int result;
  char v3;
  int v4;
  char v5;
  int v6;
  int v7;
  char v8;
  int v9;
  uint16_t v10;
  int16_t v11; // di
  int16_t v12;
  int v13;
  int v14;

  result = a2;
  v3 = *((uint8_t *)a1 + 8);
  if ( (v3 & 2) != 0 )
  {
    v4 = *a1;
    v5 = *((uint8_t *)a1 + 9);
    if ( v5 == 8 )
    {
      if ( v3 == 2 )
      {
        v6 = 3;
      }
      else
      {
        v6 = 4;
        if ( v3 != 6 )
          return result;
      }
      if ( v4 != 0 )
      {
        v7 = 0;
        do
        {
          ++v7;
          v8 = *(uint8_t *)(result + 1);
          *(uint8_t *)result += v8;
          *(uint8_t *)(result + 2) += v8;
          result += v6;
        }
        while ( v7 != v4 );
      }
    }
    else
    {
      if ( v5 != 16 )
        return result;
      if ( v3 == 2 )
      {
        v13 = 6;
      }
      else
      {
        if ( v3 != 6 )
          return result;
        v13 = 8;
      }
      if ( v4 != 0 )
      {
        v9 = 0;
        v14 = *a1;
        do
        {
          ++v9;
          v10 = __builtin_bswap16(*(uint16_t *)(result + 2));
          v11 = v10 + __builtin_bswap16(*(uint16_t *)result);
          v12 = __builtin_bswap16(*(uint16_t *)(result + 4)) + v10;
          *(uint8_t *)result = HIBYTE(v11);
          *(uint8_t *)(result + 1) = v11;
          *(uint8_t *)(result + 5) = v12;
          *(uint8_t *)(result + 4) = HIBYTE(v12);
          result += v13;
        }
        while ( v9 != v14 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_uint_31  (binary VA: 0xfa8d60)
// Original: png_get_uint_31
// ----------------------------------------------------------------------------
int png_get_uint_31(int a1, uint8_t *a2)
{
  int result;

  result = a2[3] + (a2[1] << 16) + (*a2 << 24) + (a2[2] << 8);
  if ( result < 0 )
    png_error(a1, (int)(uintptr_t)("PNG unsigned integer out of range"));
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_crc_read  (binary VA: 0xfa8de0)
// Original: png_crc_read
// ----------------------------------------------------------------------------
void png_crc_read(int a1, int a2, int a3)
{
  if ( a1 != 0 )
  {
    png_read_data(a1, a2, a3);
    png_calculate_crc(a1, a2, a3);
  }
}

// ----------------------------------------------------------------------------
// Function: png_crc_error  (binary VA: 0xfa8e50)
// Original: png_crc_error
// ----------------------------------------------------------------------------
bool png_crc_error(int a1)
{
  uint8_t v2[16];

  if ( (*(uint8_t *)(a1 + 264) & 0x20) != 0 )
  {
    if ( (*(uint32_t *)(a1 + 88) & 0x300) != 0x300 )
    {
LABEL_3:
      *(uint32_t *)(a1 + 628) = 129;
      png_read_data(a1, (int)(uintptr_t)(v2), 4);
      return *(uint32_t *)(a1 + 252) != v2[3] + (v2[1] << 16) + (v2[0] << 24) + (v2[2] << 8);
    }
  }
  else if ( (*(uint8_t *)(a1 + 89) & 8) == 0 )
  {
    goto LABEL_3;
  }
  *(uint32_t *)(a1 + 628) = 129;
  png_read_data(a1, (int)(uintptr_t)(v2), 4);
  return false;
}

// ----------------------------------------------------------------------------
// Function: png_crc_finish  (binary VA: 0xfa8f10)
// Original: png_crc_finish
// ----------------------------------------------------------------------------
int png_crc_finish(int a1, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;

  v2 = a2;
  v3 = *(uint32_t *)(a1 + 156);
  if ( v3 < a2 )
  {
    v2 = a2 - v3;
    v4 = *(uint32_t *)(a1 + 156);
    while ( 1 )
    {
      png_crc_read(a1, *(uint32_t *)(a1 + 152), v4);
      if ( v3 >= v2 )
        break;
      v4 = *(uint32_t *)(a1 + 156);
      v2 -= v3;
    }
  }
  if ( v2 != 0 )
    png_crc_read(a1, *(uint32_t *)(a1 + 152), v2);
  if ( !png_crc_error(a1) )
    return 0;
  if ( (*(uint8_t *)(a1 + 264) & 0x20) != 0 )
  {
    if ( (*(uint8_t *)(a1 + 89) & 2) != 0 )
LABEL_10:
      png_chunk_error((uint8_t *)a1, "CRC error");
  }
  else if ( (*(uint8_t *)(a1 + 89) & 4) == 0 )
  {
    goto LABEL_10;
  }
  png_chunk_warning((uint8_t *)a1, (int)(uintptr_t)("CRC error"));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: png_decompress_chunk  (binary VA: 0xfa8ff0)
// Original: png_decompress_chunk
// ----------------------------------------------------------------------------
void png_decompress_chunk(int a1, int a2, unsigned int a3, size_t n, size_t *a5)
{
  size_t v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  char *v12;
  int v13;
  size_t v14;
  void *v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  char *v19;
  size_t v20;
  const char *format;
  const char *v22;
  typedef unsigned int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef void *_g4_t_dest;
  typedef size_t _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef char _g4_t_s[64];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_dest)) > _g4_s5 ? (20u + sizeof(_g4_t_dest)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_s)) > _g4_s8 ? (44u + sizeof(_g4_t_s)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);

  v5 = n;
  if ( n > a3 )
  {
    v5 = 0;
    png_warning(a1, "invalid chunklength");
    v14 = 1;
    goto LABEL_17;
  }
  if ( a2 != 0 )
  {
    snprintf(s, 0x32u, "Unknown zTXt compression type %d", a2);
    png_warning(a1, s);
    goto LABEL_16;
  }
  *(uint32_t *)(a1 + 96) = n + *(uint32_t *)(a1 + 624);
  v6 = *(uint32_t *)(a1 + 156);
  *(uint32_t *)(a1 + 100) = a3 - n;
  v25 = 0;
  v26 = a1 + 96;
  v7 = v6;
  do
  {
    v8 = *(uint32_t *)(a1 + 152);
    *(uint32_t *)(a1 + 112) = v7;
    *(uint32_t *)(a1 + 108) = v8;
    v9 = inflate(v26, 0);
    v7 = *(uint32_t *)(a1 + 156);
    if ( v9 <= 1 )
    {
      v10 = v25;
      if ( *(uint32_t *)(a1 + 156) - *(uint32_t *)(a1 + 112) > 0 )
        v10 = v25 + *(uint32_t *)(a1 + 156) - *(uint32_t *)(a1 + 112);
      v25 = v10;
    }
  }
  while ( v9 == 0 );
  v11 = v9;
  *(uint32_t *)(a1 + 100) = 0;
  inflateReset(v26);
  if ( v11 != 1 )
  {
    v12 = *(char **)(a1 + 120);
    if ( v12 == nullptr )
    {
      format = "Buffer error in compressed datastream in %s chunk";
      if ( v11 != -5 )
      {
        format = "Incomplete compressed datastream in %s chunk";
        if ( v11 == -3 )
          format = "Data error in compressed datastream in %s chunk";
      }
      snprintf(s, 0x34u, format, a1 + 264);
      v12 = s;
    }
    png_warning(a1, v12);
    v25 = 0;
  }
  v13 = *(uint32_t *)(a1 + 200);
  if ( v13 != 0 && n + v25 >= v13 - 1 )
  {
    png_warning(a1, "Exceeded size limit while expanding chunk");
    v14 = n + 1;
    goto LABEL_17;
  }
  if ( v25 == 0 )
  {
LABEL_16:
    v14 = n + 1;
    goto LABEL_17;
  }
  v29 = n + v25;
  dest = png_malloc_warn(a1, n + v25 + 1);
  if ( dest != nullptr )
  {
    memcpy(dest, *(const void **)(a1 + 624), n);
    v30 = (size_t)dest + n;
    *(uint32_t *)(a1 + 96) = n + *(uint32_t *)(a1 + 624);
    *(uint32_t *)(a1 + 100) = a3 - n;
    v27 = 0;
    do
    {
      *(uint32_t *)(a1 + 108) = *(uint32_t *)(a1 + 152);
      *(uint32_t *)(a1 + 112) = *(uint32_t *)(a1 + 156);
      v16 = inflate(v26, 0);
      v17 = *(uint32_t *)(a1 + 156) - *(uint32_t *)(a1 + 112);
      v18 = v16;
      if ( v16 <= 1 && v17 > 0 )
      {
        if ( v25 > v27 && v30 != 0 )
        {
          v20 = v25 - v27;
          if ( (int)(v25 - v27) > v17 )
            v20 = *(uint32_t *)(a1 + 156) - *(uint32_t *)(a1 + 112);
          v24 = v16;
          memcpy((void *)(v27 + v30), *(const void **)(a1 + 152), v20);
          v18 = v24;
        }
        v27 += v17;
      }
    }
    while ( v18 == 0 );
    *(uint32_t *)(a1 + 100) = 0;
    v23 = v18;
    inflateReset(v26);
    if ( v23 == 1 )
    {
      *((uint8_t *)dest + v29) = 0;
      if ( v25 == v27 )
      {
        png_free(a1, *(void **)(a1 + 624));
        *(uint32_t *)(a1 + 624) = (uint32_t)(uintptr_t)(dest);
        *a5 = v29;
        return;
      }
    }
    else
    {
      v19 = *(char **)(a1 + 120);
      if ( v19 == nullptr )
      {
        v22 = "Buffer error in compressed datastream in %s chunk";
        if ( v23 != -5 )
        {
          v22 = "Incomplete compressed datastream in %s chunk";
          if ( v23 == -3 )
            v22 = "Data error in compressed datastream in %s chunk";
        }
        snprintf(s, 0x34u, v22, a1 + 264);
        v19 = s;
      }
      png_warning(a1, v19);
      *((uint8_t *)dest + v29) = 0;
    }
    png_warning(a1, "png_inflate logic error");
    png_free(a1, dest);
    v14 = n + 1;
  }
  else
  {
    png_warning(a1, "Not enough memory to decompress chunk");
    v14 = n + 1;
  }
LABEL_17:
  v15 = png_malloc_warn(a1, v14);
  if ( v15 != nullptr )
  {
    if ( v5 != 0 )
      memcpy(v15, *(const void **)(a1 + 624), v5);
    png_free(a1, *(void **)(a1 + 624));
    *(uint32_t *)(a1 + 624) = (uint32_t)(uintptr_t)(v15);
    *((uint8_t *)v15 + v5) = 0;
  }
  *a5 = v5;
}

// ----------------------------------------------------------------------------
// Function: png_handle_IHDR  (binary VA: 0xfa9480)
// Original: png_handle_IHDR
// ----------------------------------------------------------------------------
int png_handle_IHDR(int a1, int a2, int a3)
{
  int uint_31;
  int v4;
  bool v5; // cc
  uint8_t v6;
  int v7;
  int v8;
  char v9;
  uint8_t v10;
  unsigned int v11;
  typedef uint8_t _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint8_t _g4_t_v17[4];
  typedef uint8_t _g4_t_v18[5];
  typedef uint8_t _g4_t_v19;
  typedef char _g4_t_v20;
  typedef uint8_t _g4_t_v21;
  typedef char _g4_t_v22;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (3u + sizeof(_g4_t_v13)) > _g4_s0 ? (3u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v17)) > _g4_s4 ? (19u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (23u + sizeof(_g4_t_v18)) > _g4_s5 ? (23u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v19)) > _g4_s6 ? (28u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (29u + sizeof(_g4_t_v20)) > _g4_s7 ? (29u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (30u + sizeof(_g4_t_v21)) > _g4_s8 ? (30u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (31u + sizeof(_g4_t_v22)) > _g4_s9 ? (31u + sizeof(_g4_t_v22)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 3u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 19u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 23u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 29u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 30u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 31u);

  if ( (*(uint8_t *)(a1 + 84) & 1) != 0 )
    png_error(a1, (int)(uintptr_t)("Out of place IHDR"));
  if ( a3 != 13 )
    png_error(a1, (int)(uintptr_t)("Invalid IHDR chunk"));
  *(uint32_t *)(a1 + 84) |= 1u;
  png_crc_read(a1, (int)(uintptr_t)(v17), 13);
  png_crc_finish(a1, 0);
  uint_31 = png_get_uint_31(a1, v17);
  v4 = png_get_uint_31(a1, v18);
  v5 = v19 <= 6u;
  v6 = v18[4];
  *(uint32_t *)(a1 + 180) = uint_31;
  v13 = v6;
  *(uint32_t *)(a1 + 184) = v4;
  v14 = v6;
  v15 = v20;
  v16 = v22;
  *(uint8_t *)(a1 + 275) = v6;
  *(uint8_t *)(a1 + 271) = v22;
  *(uint8_t *)(a1 + 274) = v19;
  *(uint8_t *)(a1 + 548) = v21;
  v7 = v19;
  *(uint8_t *)(a1 + 580) = v20;
  v8 = v21;
  if ( v5 )
  {
    switch ( v7 )
    {
      case 0:
      case 3:
        *(uint8_t *)(a1 + 278) = 1;
        v9 = 1;
        goto LABEL_6;
      case 1:
      case 5:
        break;
      case 2:
        *(uint8_t *)(a1 + 278) = 3;
        v9 = 3;
        goto LABEL_6;
      case 4:
        *(uint8_t *)(a1 + 278) = 2;
        v9 = 2;
        goto LABEL_6;
      case 6:
        *(uint8_t *)(a1 + 278) = 4;
        v10 = 4 * v6;
        *(uint8_t *)(a1 + 277) = 4 * v13;
        if ( (uint8_t)(4 * v13) > 7u )
          goto LABEL_12;
        goto LABEL_7;
      default:
        abort();
    }
  }
  v9 = *(uint8_t *)(a1 + 278);
LABEL_6:
  v10 = v13 * v9;
  *(uint8_t *)(a1 + 277) = v10;
  if ( v10 > 7u )
LABEL_12:
    v11 = uint_31 * (v10 >> 3);
  else
LABEL_7:
    v11 = (uint_31 * (unsigned int)v10 + 7) >> 3;
  *(uint32_t *)(a1 + 196) = v11;
  return png_set_IHDR(a1, a2, uint_31, v4, v14, v7, v16, v15, v8);
}

// ----------------------------------------------------------------------------
// Function: png_handle_PLTE  (binary VA: 0xfa9690)
// Original: png_handle_PLTE
// ----------------------------------------------------------------------------
int png_handle_PLTE(int a1, int a2, signed int a3)
{
  int v3;
  int v4;
  char v5;
  int result;
  int v7;
  uint8_t *v8;
  char *v9;
  typedef uint8_t _g4_t_v10[3];
  typedef uint8_t _g4_t_v11[796];
  enum : size_t {
    _g4_s0 = 880u,
    _g4_s1 = (13u + sizeof(_g4_t_v10)) > _g4_s0 ? (13u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 13u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v3 = a1;
  v4 = *(uint32_t *)(a1 + 84);
  if ( (v4 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before PLTE"));
  if ( (v4 & 4) != 0 )
  {
    v9 = "Invalid PLTE after IDAT";
    goto LABEL_26;
  }
  if ( (v4 & 2) != 0 )
    png_error(a1, (int)(uintptr_t)("Duplicate PLTE chunk"));
  v5 = *(uint8_t *)(a1 + 274);
  *(uint32_t *)(a1 + 84) = v4 | 2;
  if ( (v5 & 2) == 0 )
  {
    v9 = "Ignoring PLTE chunk in grayscale PNG";
LABEL_26:
    png_warning(a1, v9);
    return png_crc_finish(a1, a3);
  }
  if ( (unsigned int)a3 > 0x300 || a3 != 3 * (a3 / 3u) )
  {
    if ( v5 == 3 )
      png_error(a1, (int)(uintptr_t)("Invalid palette chunk"));
    png_warning(a1, "Invalid palette chunk");
    return png_crc_finish(a1, a3);
  }
  v7 = a3 / 3;
  if ( a3 / 3 > 0 )
  {
    v8 = v11;
    do
    {
      png_crc_read(a1, (int)(uintptr_t)(v10), 3);
      *v8 = v10[0];
      v8[1] = v10[1];
      v8[2] = v10[2];
      v8 += 3;
    }
    while ( v8 != &v11[3 * v7] );
    v3 = a1;
    v7 = a3 / 3;
  }
  png_crc_finish(v3, 0);
  png_set_PLTE(v3, a2, v11, v7);
  if ( *(uint8_t *)(v3 + 274) == 3 && a2 != 0 && (*(uint8_t *)(a2 + 8) & 0x10) != 0 )
  {
    if ( *(uint16_t *)(v3 + 262) > (uint16_t)v7 )
    {
      png_warning(v3, "Truncating incorrect tRNS chunk length");
      *(uint16_t *)(v3 + 262) = v7;
    }
    result = a2;
    if ( (uint16_t)v7 < *(uint16_t *)(a2 + 22) )
    {
      result = png_warning(v3, "Truncating incorrect info tRNS chunk length");
      *(uint16_t *)(a2 + 22) = v7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_IEND  (binary VA: 0xfa98d0)
// Original: png_handle_IEND
// ----------------------------------------------------------------------------
int png_handle_IEND(int a1, int a2, unsigned int a3)
{
  if ( (*(uint32_t *)(a1 + 84) & 5) != 5 )
    png_error(a1, (int)(uintptr_t)("No image in file"));
  *(uint32_t *)(a1 + 84) |= 0x18u;
  if ( a3 != 0 )
    png_warning(a1, "Incorrect IEND chunk length");
  return png_crc_finish(a1, a3);
}

// ----------------------------------------------------------------------------
// Function: png_handle_gAMA  (binary VA: 0xfa9950)
// Original: png_handle_gAMA
// ----------------------------------------------------------------------------
int png_handle_gAMA(int a1, int a2, unsigned int a3)
{
  int v3;
  char *v4;
  int result;
  int v6;
  float v7; // xmm0_4
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before gAMA"));
  if ( (v3 & 4) != 0 )
  {
    v4 = "Invalid gAMA after IDAT";
    goto LABEL_8;
  }
  if ( (v3 & 2) != 0 )
    png_warning(a1, "Out of place gAMA chunk");
  if ( a2 != 0 && (*(uint32_t *)(a2 + 8) & 0x801) == 1 )
  {
    v4 = "Duplicate gAMA chunk";
    goto LABEL_8;
  }
  v4 = "Incorrect gAMA chunk length";
  if ( a3 != 4 )
  {
LABEL_8:
    png_warning(a1, v4);
    return png_crc_finish(a1, a3);
  }
  png_crc_read(a1, (int)(uintptr_t)(v10), 4);
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
  {
    v6 = v10[3] + (v10[1] << 16) + (v10[0] << 24) + (v10[2] << 8);
    if ( v6 != 0 )
    {
      if ( a2 != 0 && (*(uint8_t *)(a2 + 9) & 8) != 0 && (unsigned int)(v6 - 45000) > 0x3E8 )
      {
        v9 = v10[3] + (v10[1] << 16) + (v10[0] << 24) + (v10[2] << 8);
        png_warning(a1, "Ignoring incorrect gAMA value when sRGB is also present");
        return fprintf(stderr, "gamma = (%d/100000)", v9);
      }
      else
      {
        v7 = (float)v6 * 0.00001f;
        *(float *)(a1 + 328) = v7;
        v8 = v6;
        png_set_gAMA(a1, a2, COERCE__INT64(v7));
        return png_set_gAMA_fixed(a1, a2, v8);
      }
    }
    else
    {
      return png_warning(a1, "Ignoring gAMA chunk with gamma=0");
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_sBIT  (binary VA: 0xfa9b50)
// Original: png_handle_sBIT
// ----------------------------------------------------------------------------
int png_handle_sBIT(int a1, int a2, unsigned int a3)
{
  int v3;
  int v4;
  int result;
  char v6;
  char *v7;
  typedef char _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v9)) > _g4_s1 ? (1u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (2u + sizeof(_g4_t_v10)) > _g4_s2 ? (2u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (3u + sizeof(_g4_t_v11)) > _g4_s3 ? (3u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 1u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 2u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 3u);

  v11 = 0;
  v3 = *(uint32_t *)(a1 + 84);
  v10 = 0;
  v9 = 0;
  v8 = 0;
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before sBIT"));
  if ( (v3 & 4) != 0 )
  {
    v7 = "Invalid sBIT after IDAT";
    goto LABEL_16;
  }
  if ( (v3 & 2) != 0 )
    png_warning(a1, "Out of place sBIT chunk");
  if ( a2 != 0 && (*(uint8_t *)(a2 + 8) & 2) != 0 )
  {
    v7 = "Duplicate sBIT chunk";
    goto LABEL_16;
  }
  v4 = 3;
  if ( *(uint8_t *)(a1 + 274) != 3 )
    v4 = *(uint8_t *)(a1 + 278);
  if ( a3 != v4 || a3 > 4 )
  {
    v7 = "Incorrect sBIT chunk length";
LABEL_16:
    png_warning(a1, v7);
    return png_crc_finish(a1, a3);
  }
  png_crc_read(a1, (int)(uintptr_t)(&v8), v4);
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
  {
    v6 = v8;
    if ( (*(uint8_t *)(a1 + 274) & 2) != 0 )
    {
      *(uint8_t *)(a1 + 360) = v8;
      *(uint8_t *)(a1 + 361) = v9;
      *(uint8_t *)(a1 + 362) = v10;
      *(uint8_t *)(a1 + 364) = v11;
    }
    else
    {
      *(uint8_t *)(a1 + 363) = v8;
      *(uint8_t *)(a1 + 360) = v6;
      *(uint8_t *)(a1 + 361) = v6;
      *(uint8_t *)(a1 + 362) = v6;
      *(uint8_t *)(a1 + 364) = v9;
    }
    return png_set_sBIT(a1, a2, a1 + 360);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_cHRM  (binary VA: 0xfa9d10)
// Original: png_handle_cHRM
// ----------------------------------------------------------------------------
int png_handle_cHRM(int a1, int a2, unsigned int a3)
{
  int v3;
  char *v4;
  int result;
  int v6;
  int v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  typedef float _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef float _g4_t_v24;
  typedef uint8_t _g4_t_v25[44];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (96u + sizeof(_g4_t_v16)) > _g4_s1 ? (96u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (112u + sizeof(_g4_t_v17)) > _g4_s2 ? (112u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (132u + sizeof(_g4_t_v18)) > _g4_s3 ? (132u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (136u + sizeof(_g4_t_v19)) > _g4_s4 ? (136u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (140u + sizeof(_g4_t_v20)) > _g4_s5 ? (140u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (144u + sizeof(_g4_t_v21)) > _g4_s6 ? (144u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (148u + sizeof(_g4_t_v22)) > _g4_s7 ? (148u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (152u + sizeof(_g4_t_v23)) > _g4_s8 ? (152u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (156u + sizeof(_g4_t_v24)) > _g4_s9 ? (156u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (160u + sizeof(_g4_t_v25)) > _g4_s10 ? (160u + sizeof(_g4_t_v25)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 112u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 132u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 136u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 140u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 144u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 148u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 152u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 156u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 160u);

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before cHRM"));
  if ( (v3 & 4) != 0 )
  {
    v4 = "Invalid cHRM after IDAT";
    goto LABEL_9;
  }
  if ( (v3 & 2) != 0 )
    png_warning(a1, "Missing PLTE before cHRM");
  if ( a2 != 0 && (*(uint32_t *)(a2 + 8) & 0x804) == 4 )
  {
    v4 = "Duplicate cHRM chunk";
    goto LABEL_9;
  }
  if ( a3 != 32 )
  {
    v4 = "Incorrect cHRM chunk length";
LABEL_9:
    png_warning(a1, v4);
    return png_crc_finish(a1, a3);
  }
  png_crc_read(a1, (int)(uintptr_t)(v25), 32);
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
  {
    v6 = (v25[2] << 8) + v25[3] + (v25[1] << 16) + (v25[0] << 24);
    v23 = (v25[4] << 24) + (v25[5] << 16) + v25[7] + (v25[6] << 8);
    v22 = (v25[8] << 24) + (v25[9] << 16) + v25[11] + (v25[10] << 8);
    v21 = (v25[12] << 24) + (v25[13] << 16) + v25[15] + (v25[14] << 8);
    v20 = (v25[16] << 24) + (v25[17] << 16) + v25[19] + (v25[18] << 8);
    v19 = (v25[20] << 24) + (v25[21] << 16) + v25[23] + (v25[22] << 8);
    v18 = (v25[24] << 24) + (v25[25] << 16) + v25[27] + (v25[26] << 8);
    v7 = (v25[28] << 24) + (v25[29] << 16) + v25[31];
    v8 = v7 + (v25[30] << 8);
    v15 = (float)v6 * 0.00001f;
    v9 = (float)v23 * 0.00001f;
    v10 = (float)v22 * 0.00001f;
    v11 = (float)v21 * 0.00001f;
    v12 = (float)v20 * 0.00001f;
    v13 = (float)v19 * 0.00001f;
    v14 = (float)v18 * 0.00001f;
    v24 = 0.00001f * (float)v8;
    if ( a2 != 0 && (*(uint8_t *)(a2 + 9) & 8) != 0 )
    {
      if ( (unsigned int)(v6 - 30270) > 0x7D0
        || (unsigned int)(v23 - 31900) > 0x7D0
        || (unsigned int)(v22 - 63000) > 0x7D0
        || (unsigned int)(v21 - 32000) > 0x7D0
        || (unsigned int)(v20 - 29000) > 0x7D0
        || (unsigned int)(v19 - 59000) > 0x7D0
        || (unsigned int)(v18 - 14000) > 0x7D0
        || (unsigned int)(result = v8 - 5000) > 0x7D0 )
      {
        png_warning(a1, "Ignoring incorrect cHRM value when sRGB is also present");
        fprintf(stderr, "wx=%f, wy=%f, rx=%f, ry=%f\n", v15, v9, v10, v11);
        return fprintf(stderr, "gx=%f, gy=%f, bx=%f, by=%f\n", v12, v13, v14, v24);
      }
    }
    else
    {
      v16 = v7 + (v25[30] << 8);
      v17 = (v25[2] << 8) + v25[3] + (v25[1] << 16) + (v25[0] << 24);
      png_set_cHRM(
        a1,
        a2,
        COERCE__INT64(v15),
        COERCE__INT64(v9),
        COERCE__INT64(v10),
        COERCE__INT64(v11),
        COERCE__INT64(v12),
        COERCE__INT64(v13),
        COERCE__INT64(v14),
        COERCE__INT64(v24));
      return png_set_cHRM_fixed(a1, a2, v17, v23, v22, v21, v20, v19, v18, v16);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_sRGB  (binary VA: 0xfaa2e0)
// Original: png_handle_sRGB
// ----------------------------------------------------------------------------
int png_handle_sRGB(int a1, int a2, unsigned int a3)
{
  int v3;
  char *v4;
  int result;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before sRGB"));
  if ( (v3 & 4) != 0 )
  {
    v4 = "Invalid sRGB after IDAT";
    goto LABEL_9;
  }
  if ( (v3 & 2) != 0 )
    png_warning(a1, "Out of place sRGB chunk");
  if ( a2 != 0 )
  {
    v4 = "Duplicate sRGB chunk";
    if ( (*(uint8_t *)(a2 + 9) & 8) != 0 )
      goto LABEL_9;
  }
  if ( a3 != 1 )
  {
    v4 = "Incorrect sRGB chunk length";
LABEL_9:
    png_warning(a1, v4);
    return png_crc_finish(a1, a3);
  }
  png_crc_read(a1, (int)(uintptr_t)(&v10), 1);
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
  {
    v6 = v10;
    if ( v10 > 3u )
    {
      return png_warning(a1, "Unknown sRGB intent");
    }
    else
    {
      if ( a2 != 0 )
      {
        v7 = *(uint32_t *)(a2 + 8);
        if ( (v7 & 1) != 0 && (unsigned int)(*(uint32_t *)(a2 + 252) - 45000) > 0x3E8 )
        {
          v9 = v10;
          png_warning(a1, "Ignoring incorrect gAMA value when sRGB is also present");
          fprintf(stderr, "incorrect gamma=(%d/100000)\n", *(uint32_t *)(a1 + 544));
          v7 = *(uint32_t *)(a2 + 8);
          v6 = v9;
        }
        if ( (v7 & 4) != 0
          && ((unsigned int)(*(uint32_t *)(a2 + 256) - 30270) > 0x7D0
           || (unsigned int)(*(uint32_t *)(a2 + 260) - 31900) > 0x7D0
           || (unsigned int)(*(uint32_t *)(a2 + 264) - 63000) > 0x7D0
           || (unsigned int)(*(uint32_t *)(a2 + 268) - 32000) > 0x7D0
           || (unsigned int)(*(uint32_t *)(a2 + 272) - 29000) > 0x7D0
           || (unsigned int)(*(uint32_t *)(a2 + 276) - 59000) > 0x7D0
           || (unsigned int)(*(uint32_t *)(a2 + 280) - 14000) > 0x7D0
           || (unsigned int)(*(uint32_t *)(a2 + 284) - 5000) > 0x7D0) )
        {
          v8 = v6;
          png_warning(a1, "Ignoring incorrect cHRM value when sRGB is also present");
          v6 = v8;
        }
      }
      return png_set_sRGB_gAMA_and_cHRM(a1, a2, v6);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_iCCP  (binary VA: 0xfaa550)
// Original: png_handle_iCCP
// ----------------------------------------------------------------------------
void png_handle_iCCP(int a1, int a2, int a3)
{
  int v3;
  void *v4;
  bool v5;
  void *v6;
  uint8_t *v7;
  uint8_t *i;
  uint8_t *v9;
  size_t v10;
  unsigned int v11;
  char *v12;
  typedef unsigned int _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_s[78];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_s)) > _g4_s5 ? (30u + sizeof(_g4_t_s)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 30u);

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before iCCP"));
  if ( (v3 & 4) != 0 )
  {
    v12 = "Invalid iCCP after IDAT";
    goto LABEL_24;
  }
  if ( (v3 & 2) != 0 )
    png_warning(a1, "Out of place iCCP chunk");
  if ( a2 != 0 && (*(uint8_t *)(a2 + 9) & 0x10) != 0 )
  {
    v12 = "Duplicate iCCP chunk";
LABEL_24:
    png_warning(a1, v12);
    png_crc_finish(a1, a3);
    return;
  }
  png_free(a1, *(void **)(a1 + 624));
  v4 = png_malloc(a1, a3 + 1);
  *(uint32_t *)(a1 + 624) = (uint32_t)(uintptr_t)(v4);
  png_crc_read(a1, (int)(uintptr_t)(v4), a3);
  v5 = png_crc_finish(a1, 0) == 0;
  v6 = *(void **)(a1 + 624);
  if ( !v5 )
  {
LABEL_18:
    png_free(a1, v6);
    *(uint32_t *)(a1 + 624) = 0;
    return;
  }
  *((uint8_t *)v6 + a3) = 0;
  v7 = *(uint8_t **)(a1 + 624);
  for ( i = v7; *i != 0; ++i )
    ;
  if ( i + 1 >= &v7[a3 - 1] )
  {
    png_free(a1, v7);
    *(uint32_t *)(a1 + 624) = 0;
    png_warning(a1, "Malformed iCCP chunk");
  }
  else
  {
    v9 = i + 2;
    if ( i[1] != 0 )
    {
      v15 = i + 2;
      png_warning(a1, "Ignoring nonzero compression type in iCCP chunk");
      v7 = *(uint8_t **)(a1 + 624);
      v9 = v15;
    }
    v13 = v9 - v7;
    png_decompress_chunk(a1, 0, a3, v9 - v7, (size_t *)&v17);
    v10 = v17 - v13;
    if ( v17 - v13 <= 3 || v13 > v17 )
    {
      png_free(a1, *(void **)(a1 + 624));
      *(uint32_t *)(a1 + 624) = 0;
      png_warning(a1, "Profile size field missing from iCCP chunk");
    }
    else
    {
      v16 = *(char **)(a1 + 624);
      v11 = __builtin_bswap32(*(uint32_t *)&v16[v13]);
      if ( v10 > v11 )
      {
        v10 = v11;
LABEL_17:
        png_set_iCCP(a1, a2, v16, 0, &v16[v13], v10);
        v6 = *(void **)(a1 + 624);
        goto LABEL_18;
      }
      if ( v10 >= v11 )
        goto LABEL_17;
      v14 = v11;
      png_free(a1, v16);
      *(uint32_t *)(a1 + 624) = 0;
      png_warning(a1, "Ignoring truncated iCCP profile");
      snprintf(s, 0x32u, "declared profile size = %lu", v14);
      png_warning(a1, s);
      snprintf(s, 0x32u, "actual profile length = %lu", v10);
      png_warning(a1, s);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_handle_sPLT  (binary VA: 0xfaa880)
// Original: png_handle_sPLT
// ----------------------------------------------------------------------------
void png_handle_sPLT(int a1, int a2, unsigned int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  void *v7;
  bool v8;
  uint8_t *v9;
  uint8_t *v10;
  uint8_t *i;
  char v12;
  uint8_t *v13;
  unsigned int v14;
  char *v15;
  int v16;
  int16_t v17; // di
  int16_t v18;
  uint8_t *v19;
  int16_t v20;
  char *v21;
  int16_t v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v25)) > _g4_s2 ? (16u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v26)) > _g4_s3 ? (20u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v27)) > _g4_s4 ? (24u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v28)) > _g4_s5 ? (28u + sizeof(_g4_t_v28)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);

  v3 = a1;
  v4 = *(uint32_t *)(a1 + 592);
  if ( v4 != 0 )
  {
    if ( v4 == 1 )
    {
LABEL_25:
      png_crc_finish(a1, a3);
      return;
    }
    v5 = v4 - 1;
    *(uint32_t *)(a1 + 592) = v5;
    if ( v5 == 1 )
    {
      png_warning(a1, "No space in chunk cache for sPLT");
      goto LABEL_25;
    }
  }
  v6 = *(uint32_t *)(a1 + 84);
  if ( (v6 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before sPLT"));
  if ( (v6 & 4) != 0 )
  {
    png_warning(a1, "Invalid sPLT after IDAT");
    png_crc_finish(a1, a3);
  }
  else
  {
    png_free(a1, *(void **)(a1 + 624));
    v7 = png_malloc(a1, a3 + 1);
    *(uint32_t *)(a1 + 624) = (uint32_t)(uintptr_t)(v7);
    png_crc_read(a1, (int)(uintptr_t)(v7), a3);
    v8 = png_crc_finish(a1, 0) == 0;
    v9 = *(uint8_t **)(a1 + 624);
    if ( v8 )
    {
      v9[a3] = 0;
      v10 = *(uint8_t **)(a1 + 624);
      for ( i = v10; *i != 0; ++i )
        ;
      if ( i + 1 > &v10[a3 - 2] )
      {
        png_free(a1, *(void **)(a1 + 624));
        *(uint32_t *)(a1 + 624) = 0;
        png_warning(a1, "malformed sPLT chunk");
      }
      else
      {
        v12 = i[1];
        v13 = i + 2;
        v26 = v12;
        v23 = 4 * (v12 != 8) + 6;
        v14 = (int)(a3 + v10 - v13) / v23;
        if ( (int)(a3 + v10 - v13) % v23 != 0 )
        {
          png_free(a1, v10);
          *(uint32_t *)(a1 + 624) = 0;
          png_warning(a1, "sPLT chunk has bad length");
        }
        else
        {
          v28 = (int)(a3 + v10 - v13) / v23;
          if ( v14 > 0x19999999 )
          {
            png_warning(a1, "sPLT chunk too long");
          }
          else
          {
            v15 = (char *)png_malloc_warn(a1, 10 * v14);
            v27 = v15;
            if ( v15 != nullptr )
            {
              v16 = 0;
              v24 = 0;
              if ( v28 > 0 )
              {
                while ( 1 )
                {
                  v21 = &v15[v24];
                  v22 = *v13;
                  if ( v26 == 8 )
                  {
                    *(uint16_t *)v21 = v22;
                    *((uint16_t *)v21 + 1) = v13[1];
                    *((uint16_t *)v21 + 2) = v13[2];
                    v20 = v13[3];
                    v19 = v13 + 4;
                  }
                  else
                  {
                    *(uint16_t *)v21 = v13[1] + (v22 << 8);
                    *((uint16_t *)v21 + 1) = v13[3] + (v13[2] << 8);
                    *((uint16_t *)v21 + 2) = v13[5] + (v13[4] << 8);
                    v17 = v13[7];
                    v18 = v13[6] << 8;
                    v19 = v13 + 8;
                    v20 = v17 + v18;
                  }
                  *((uint16_t *)v21 + 3) = v20;
                  ++v16;
                  v24 += 10;
                  *((uint16_t *)v21 + 4) = v19[1] + (*v19 << 8);
                  if ( v28 <= v16 )
                    break;
                  v13 = v19 + 2;
                  v15 = v27;
                }
                v3 = a1;
              }
              v25 = *(uint32_t *)(v3 + 624);
              png_set_sPLT(v3, a2, &v25, 1);
              png_free(v3, *(void **)(v3 + 624));
              *(uint32_t *)(v3 + 624) = 0;
              png_free(v3, v27);
            }
            else
            {
              png_warning(a1, "sPLT chunk requires too much memory");
            }
          }
        }
      }
    }
    else
    {
      png_free(a1, v9);
      *(uint32_t *)(a1 + 624) = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_handle_tRNS  (binary VA: 0xfaac10)
// Original: png_handle_tRNS
// ----------------------------------------------------------------------------
int png_handle_tRNS(int a1, int a2, unsigned int a3)
{
  int v3;
  char *v4;
  char v5;
  int result;
  int16_t v7;
  int16_t v8;
  int16_t v9;
  int16_t v10;
  typedef uint8_t _g4_t_v11;
  typedef uint8_t _g4_t_v12;
  typedef uint8_t _g4_t_v13;
  typedef uint8_t _g4_t_v14;
  typedef uint8_t _g4_t_v15;
  typedef uint8_t _g4_t_v16;
  typedef uint8_t _g4_t_v17[268];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (10u + sizeof(_g4_t_v11)) > _g4_s0 ? (10u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v12)) > _g4_s1 ? (11u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (13u + sizeof(_g4_t_v14)) > _g4_s3 ? (13u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (14u + sizeof(_g4_t_v15)) > _g4_s4 ? (14u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (15u + sizeof(_g4_t_v16)) > _g4_s5 ? (15u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v17)) > _g4_s6 ? (16u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 10u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 11u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 13u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 14u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 15u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before tRNS"));
  if ( (v3 & 4) != 0 )
  {
    v4 = "Invalid tRNS after IDAT";
    goto LABEL_8;
  }
  if ( a2 != 0 )
  {
    v4 = "Duplicate tRNS chunk";
    if ( (*(uint8_t *)(a2 + 8) & 0x10) != 0 )
      goto LABEL_8;
  }
  v5 = *(uint8_t *)(a1 + 274);
  if ( v5 != 0 )
  {
    if ( v5 == 2 )
    {
      if ( a3 != 6 )
        goto LABEL_7;
      png_crc_read(a1, (int)(uintptr_t)(&v11), 6);
      v9 = v12;
      v10 = v11 << 8;
      *(uint16_t *)(a1 + 262) = 1;
      *(uint16_t *)(a1 + 378) = v9 + v10;
      *(uint16_t *)(a1 + 380) = v14 + (v13 << 8);
      *(uint16_t *)(a1 + 382) = v16 + (v15 << 8);
    }
    else
    {
      if ( v5 != 3 )
      {
        v4 = "tRNS chunk not allowed with alpha channel";
        goto LABEL_8;
      }
      if ( (*(uint8_t *)(a1 + 84) & 2) == 0 )
        png_warning(a1, "Missing PLTE before tRNS");
      if ( a3 > 0x100 || *(uint16_t *)(a1 + 260) < a3 )
      {
LABEL_7:
        v4 = "Incorrect tRNS chunk length";
LABEL_8:
        png_warning(a1, v4);
        return png_crc_finish(a1, a3);
      }
      if ( a3 == 0 )
      {
        png_warning(a1, "Zero length tRNS chunk");
        return png_crc_finish(a1, 0);
      }
      png_crc_read(a1, (int)(uintptr_t)(v17), a3);
      *(uint16_t *)(a1 + 262) = a3;
    }
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_7;
    png_crc_read(a1, (int)(uintptr_t)(&v11), 2);
    v7 = v12;
    v8 = v11 << 8;
    *(uint16_t *)(a1 + 262) = 1;
    *(uint16_t *)(a1 + 384) = v7 + v8;
  }
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
    return ((png_set_tRNS(a1, a2, v17, *(uint16_t *)(a1 + 262), a1 + 376)), (int)0);
  *(uint16_t *)(a1 + 262) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_bKGD  (binary VA: 0xfaaec0)
// Original: png_handle_bKGD
// ----------------------------------------------------------------------------
int png_handle_bKGD(int a1, int a2, unsigned int a3)
{
  int v3;
  char v4;
  char *v5;
  int v6;
  int result;
  char v8;
  int16_t v9;
  uint8_t v10;
  uint16_t v11;
  uint8_t *v12;
  uint8_t v13[16];

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before bKGD"));
  if ( (v3 & 4) != 0 )
  {
    v5 = "Invalid bKGD after IDAT";
    goto LABEL_10;
  }
  v4 = *(uint8_t *)(a1 + 274);
  if ( v4 == 3 && (v3 & 2) == 0 )
  {
    v5 = "Missing PLTE before bKGD";
    goto LABEL_10;
  }
  if ( a2 != 0 )
  {
    v5 = "Duplicate bKGD chunk";
    if ( (*(uint8_t *)(a2 + 8) & 0x20) != 0 )
      goto LABEL_10;
  }
  v6 = 1;
  if ( v4 != 3 )
    v6 = (v4 & 2) == 0 ? 2 : 6;
  if ( a3 != v6 )
  {
    v5 = "Incorrect bKGD chunk length";
LABEL_10:
    png_warning(a1, v5);
    return png_crc_finish(a1, a3);
  }
  png_crc_read(a1, (int)(uintptr_t)(v13), a3);
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
  {
    v8 = *(uint8_t *)(a1 + 274);
    if ( v8 == 3 )
    {
      v10 = v13[0];
      *(uint8_t *)(a1 + 292) = v13[0];
      if ( a2 != 0 )
      {
        v11 = *(uint16_t *)(a2 + 20);
        if ( v11 != 0 )
        {
          if ( v11 <= v10 )
            return png_warning(a1, "Incorrect bKGD chunk index value");
          v12 = (uint8_t *)(*(uint32_t *)(a1 + 256) + 3 * v10);
          *(uint16_t *)(a1 + 294) = *v12;
          *(uint16_t *)(a1 + 296) = v12[1];
          *(uint16_t *)(a1 + 298) = v12[2];
        }
      }
    }
    else if ( (v8 & 2) != 0 )
    {
      *(uint16_t *)(a1 + 294) = v13[1] + (v13[0] << 8);
      *(uint16_t *)(a1 + 296) = v13[3] + (v13[2] << 8);
      *(uint16_t *)(a1 + 298) = v13[5] + (v13[4] << 8);
    }
    else
    {
      v9 = v13[1] + (v13[0] << 8);
      *(uint16_t *)(a1 + 300) = v9;
      *(uint16_t *)(a1 + 298) = v9;
      *(uint16_t *)(a1 + 296) = v9;
      *(uint16_t *)(a1 + 294) = v9;
    }
    return png_set_bKGD(a1, a2, a1 + 292);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_hIST  (binary VA: 0xfab100)
// Original: png_handle_hIST
// ----------------------------------------------------------------------------
int png_handle_hIST(int a1, int a2, unsigned int a3)
{
  int v3;
  unsigned int v4;
  int i;
  int result;
  char *v7;
  typedef uint8_t _g4_t_v8[2];
  typedef uint16_t _g4_t_v9[270];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before hIST"));
  if ( (v3 & 4) != 0 )
  {
    v7 = "Invalid hIST after IDAT";
    goto LABEL_17;
  }
  if ( (v3 & 2) == 0 )
  {
    v7 = "Missing PLTE before hIST";
    goto LABEL_17;
  }
  if ( a2 != 0 && (*(uint8_t *)(a2 + 8) & 0x40) != 0 )
  {
    v7 = "Duplicate hIST chunk";
    goto LABEL_17;
  }
  v4 = a3 >> 1;
  if ( a3 >> 1 > 0x100 || *(uint16_t *)(a1 + 260) != v4 )
  {
    v7 = "Incorrect hIST chunk length";
LABEL_17:
    png_warning(a1, v7);
    return png_crc_finish(a1, a3);
  }
  if ( v4 != 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      png_crc_read(a1, (int)(uintptr_t)(v8), 2);
      v9[i] = v8[1] + (v8[0] << 8);
    }
  }
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
    return ((png_set_hIST(a1, a2, v9)), (int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_pHYs  (binary VA: 0xfab260)
// Original: png_handle_pHYs
// ----------------------------------------------------------------------------
int png_handle_pHYs(int a1, int a2, unsigned int a3)
{
  int v3;
  char *v4;
  int result;
  uint8_t v6[21];

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before pHYs"));
  if ( (v3 & 4) != 0 )
  {
    v4 = "Invalid pHYs after IDAT";
    goto LABEL_6;
  }
  if ( a2 != 0 && *(char *)(a2 + 8) < 0 )
  {
    v4 = "Duplicate pHYs chunk";
    goto LABEL_6;
  }
  v4 = "Incorrect pHYs chunk length";
  if ( a3 != 9 )
  {
LABEL_6:
    png_warning(a1, v4);
    return png_crc_finish(a1, a3);
  }
  png_crc_read(a1, (int)(uintptr_t)(v6), 9);
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
    return png_set_pHYs(
             a1,
             a2,
             v6[3] + (v6[1] << 16) + (v6[0] << 24) + (v6[2] << 8),
             v6[7] + (v6[5] << 16) + (v6[4] << 24) + (v6[6] << 8),
             v6[8]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_oFFs  (binary VA: 0xfab3d0)
// Original: png_handle_oFFs
// ----------------------------------------------------------------------------
int png_handle_oFFs(int a1, int a2, unsigned int a3)
{
  int v3;
  char *v4;
  int result;
  int v6;
  int v7;
  uint8_t v8[16];

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before oFFs"));
  if ( (v3 & 4) != 0 )
  {
    v4 = "Invalid oFFs after IDAT";
    goto LABEL_6;
  }
  if ( a2 != 0 && (*(uint8_t *)(a2 + 9) & 1) != 0 )
  {
    v4 = "Duplicate oFFs chunk";
    goto LABEL_6;
  }
  v4 = "Incorrect oFFs chunk length";
  if ( a3 != 9 )
  {
LABEL_6:
    png_warning(a1, v4);
    return png_crc_finish(a1, a3);
  }
  png_crc_read(a1, (int)(uintptr_t)(v8), 9);
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
  {
    if ( v8[4] < 0 )
    {
      v7 = v8[7] + (v8[4] << 24) + (v8[5] << 16);
      v6 = v8[6] << 8;
    }
    else
    {
      v6 = (v8[4] << 24) + (v8[5] << 16) + v8[7];
      v7 = v8[6] << 8;
    }
    return png_set_oFFs(a1, a2, (v8[2] << 8) + (v8[0] << 24) + (v8[1] << 16) + v8[3], v6 + v7, v8[8]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_pCAL  (binary VA: 0xfab5a0)
// Original: png_handle_pCAL
// ----------------------------------------------------------------------------
void png_handle_pCAL(int a1, int a2, unsigned int a3)
{
  int v3;
  void *v4;
  bool v5;
  void *v6;
  char *v7;
  char *i;
  unsigned int v9;
  uint8_t *j;
  uint32_t *v11;
  int v12;
  uint8_t *v13;
  char *v14;
  void *v15;
  char *v16;
  uint8_t v17;
  uint8_t v18;
  int v19;
  int v20;
  char *v21;

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before pCAL"));
  if ( (v3 & 4) != 0 )
  {
    v14 = "Invalid pCAL after IDAT";
    goto LABEL_32;
  }
  if ( a2 != 0 && (*(uint8_t *)(a2 + 9) & 4) != 0 )
  {
    v14 = "Duplicate pCAL chunk";
LABEL_32:
    png_warning(a1, v14);
    png_crc_finish(a1, a3);
    return;
  }
  png_free(a1, *(void **)(a1 + 624));
  v4 = png_malloc_warn(a1, a3 + 1);
  *(uint32_t *)(a1 + 624) = (uint32_t)(uintptr_t)(v4);
  if ( v4 != nullptr )
  {
    png_crc_read(a1, (int)(uintptr_t)(v4), a3);
    v5 = png_crc_finish(a1, 0) == 0;
    v6 = *(void **)(a1 + 624);
    if ( !v5 )
    {
LABEL_28:
      png_free(a1, v6);
      *(uint32_t *)(a1 + 624) = 0;
      return;
    }
    *((uint8_t *)v6 + a3) = 0;
    v7 = *(char **)(a1 + 624);
    for ( i = v7; *i != 0; ++i )
      ;
    v9 = (unsigned int)(uintptr_t)(&v7[a3]);
    if ( &v7[a3] <= i + 12 )
    {
      png_warning(a1, "Invalid pCAL data");
      png_free(a1, *(void **)(a1 + 624));
      *(uint32_t *)(a1 + 624) = 0;
    }
    else
    {
      v19 = (uint8_t)i[4]
          + ((uint8_t)i[1] << 24)
          + ((uint8_t)i[2] << 16)
          + ((uint8_t)i[3] << 8);
      v20 = ((uint8_t)i[5] << 24)
          + ((uint8_t)i[6] << 16)
          + (uint8_t)i[8]
          + ((uint8_t)i[7] << 8);
      v18 = i[9];
      v17 = i[10];
      if ( v17 != 2 && v18 == 0 || (v18 == 1 || v18 == 2) && v17 != 3 || v17 != 4 && v18 == 3 )
      {
        png_warning(a1, "Invalid pCAL parameters for equation type");
        v6 = *(void **)(a1 + 624);
        goto LABEL_28;
      }
      if ( v18 > 3u )
      {
        v16 = i;
        png_warning(a1, "Unrecognized equation type for pCAL chunk");
        i = v16;
      }
      v21 = i + 11;
      for ( j = (uint8_t *)(i + 11); *j != 0; ++j )
        ;
      v11 = (uint32_t *)(png_malloc_warn(a1, 4 * v17));
      if ( v11 != nullptr )
      {
        v12 = 0;
        if ( v17 != 0 )
        {
          while ( 1 )
          {
            v13 = j + 1;
            v11[v12] = (uint32_t)(uintptr_t)(j + 1);
            if ( v9 < (unsigned int)(uintptr_t)(j + 1) )
              break;
            if ( j[1] != 0 )
            {
              while ( v9 >= (unsigned int)(uintptr_t)(++v13) )
              {
                if ( *v13 == 0 )
                  goto LABEL_33;
              }
              break;
            }
LABEL_33:
            ++v12;
            j = v13;
            if ( v17 <= v12 )
              goto LABEL_34;
          }
          v15 = v11;
          png_warning(a1, "Invalid pCAL data");
        }
        else
        {
LABEL_34:
          v15 = v11;
          png_set_pCAL(a1, a2, *(char **)(a1 + 624), v19, v20, v18, v17, v21, (int)(uintptr_t)(v11));
        }
        png_free(a1, *(void **)(a1 + 624));
        *(uint32_t *)(a1 + 624) = 0;
        png_free(a1, v15);
      }
      else
      {
        png_free(a1, *(void **)(a1 + 624));
        *(uint32_t *)(a1 + 624) = 0;
        png_warning(a1, "No memory for pCAL params");
      }
    }
  }
  else
  {
    png_warning(a1, "No memory for pCAL purpose");
  }
}

// ----------------------------------------------------------------------------
// Function: png_handle_sCAL  (binary VA: 0xfab9c0)
// Original: png_handle_sCAL
// ----------------------------------------------------------------------------
void png_handle_sCAL(int a1, int a2, unsigned int a3)
{
  int v3;
  char *v4;
  void *v5;
  bool v6;
  uint8_t *v7;
  uint8_t *v8;
  uint8_t *i;
  const char *nptr;
  long double v11; // fst7
  char *v12;
  typedef char **_g4_t_v13;
  typedef int64_t _g4_t_v14;
  typedef char *_g4_t_endptr[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_endptr)) > _g4_s2 ? (28u + sizeof(_g4_t_endptr)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 28u);

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before sCAL"));
  if ( (v3 & 4) != 0 )
  {
    v4 = "Invalid sCAL after IDAT";
    goto LABEL_20;
  }
  if ( a2 != 0 )
  {
    v4 = "Duplicate sCAL chunk";
    if ( (*(uint8_t *)(a2 + 9) & 0x40) != 0 )
      goto LABEL_20;
  }
  v5 = png_malloc_warn(a1, a3 + 1);
  *(uint32_t *)(a1 + 624) = (uint32_t)(uintptr_t)(v5);
  if ( v5 == nullptr )
  {
    v4 = "Out of memory while processing sCAL chunk";
LABEL_20:
    png_warning(a1, v4);
    png_crc_finish(a1, a3);
    return;
  }
  png_crc_read(a1, (int)(uintptr_t)(v5), a3);
  v6 = png_crc_finish(a1, 0) == 0;
  v7 = *(uint8_t **)(a1 + 624);
  if ( v6 )
  {
    v7[a3] = 0;
    *(double *)&v14 = strtod((const char *)(*(uint32_t *)(a1 + 624) + 1), endptr);
    if ( *endptr[0] != 0 )
    {
      png_warning(a1, "malformed width string in sCAL chunk");
    }
    else
    {
      v8 = *(uint8_t **)(a1 + 624);
      for ( i = v8; *i != 0; ++i )
        ;
      nptr = (const char *)(i + 1);
      if ( nptr > (const char *)(uintptr_t)(&v8[a3]) )
      {
        png_warning(a1, "Truncated sCAL chunk");
      }
      else
      {
        v13 = (char **)nptr;
        v11 = strtod(nptr, endptr);
        if ( *endptr[0] != 0 )
        {
          png_warning(a1, "malformed height string in sCAL chunk");
        }
        else
        {
          v12 = *(char **)(a1 + 624);
          if ( v13 > (char **)&v12[a3] || *(double *)&v14 <= 0.0 || (double)v11 <= 0.0 )
            png_warning(a1, "Invalid sCAL data");
          else
            png_set_sCAL(a1, a2, *v12, v14, COERCE__INT64(v11));
        }
      }
    }
    v7 = *(uint8_t **)(a1 + 624);
  }
  png_free(a1, v7);
  *(uint32_t *)(a1 + 624) = 0;
}

// ----------------------------------------------------------------------------
// Function: png_handle_tIME  (binary VA: 0xfabc20)
// Original: png_handle_tIME
// ----------------------------------------------------------------------------
int png_handle_tIME(int a1, int a2, unsigned int a3)
{
  int v3;
  char *v4;
  int result;
  typedef uint8_t _g4_t_v6[7];
  typedef int16_t _g4_t_v7;
  typedef char _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (1u + sizeof(_g4_t_v6)) > _g4_s0 ? (1u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (10u + sizeof(_g4_t_v8)) > _g4_s2 ? (10u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (11u + sizeof(_g4_t_v9)) > _g4_s3 ? (11u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v10)) > _g4_s4 ? (12u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (13u + sizeof(_g4_t_v11)) > _g4_s5 ? (13u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (14u + sizeof(_g4_t_v12)) > _g4_s6 ? (14u + sizeof(_g4_t_v12)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 1u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 10u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 11u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 13u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 14u);

  v3 = *(uint32_t *)(a1 + 84);
  if ( (v3 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Out of place tIME chunk"));
  if ( a2 != 0 && (*(uint8_t *)(a2 + 9) & 2) != 0 )
  {
    v4 = "Duplicate tIME chunk";
    goto LABEL_7;
  }
  if ( (v3 & 4) != 0 )
  {
    *(uint32_t *)(a1 + 84) = v3 | 8;
    if ( a3 != 7 )
      goto LABEL_6;
  }
  else if ( a3 != 7 )
  {
LABEL_6:
    v4 = "Incorrect tIME chunk length";
LABEL_7:
    png_warning(a1, v4);
    return png_crc_finish(a1, a3);
  }
  png_crc_read(a1, (int)(uintptr_t)(v6), 7);
  result = png_crc_finish(a1, 0);
  if ( result == 0 )
  {
    v12 = v6[6];
    v11 = v6[5];
    v10 = v6[4];
    v9 = v6[3];
    v8 = v6[2];
    v7 = v6[1] + (v6[0] << 8);
    return (int)(uintptr_t)(png_set_tIME(a1, a2, &v7));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_handle_tEXt  (binary VA: 0xfabd70)
// Original: png_handle_tEXt
// ----------------------------------------------------------------------------
void png_handle_tEXt(int a1, int a2, unsigned int a3)
{
  int v3;
  int v4;
  int v5;
  void *v6;
  uint8_t *v7;
  uint8_t *v8;
  const char *s;
  uint32_t *v10;
  void *v11;
  int v12;
  uint8_t *v13;

  v3 = *(uint32_t *)(a1 + 592);
  if ( v3 != 0 )
  {
    if ( v3 != 1 )
    {
      v4 = v3 - 1;
      *(uint32_t *)(a1 + 592) = v4;
      if ( v4 != 1 )
        goto LABEL_4;
      png_warning(a1, "No space in chunk cache for tEXt");
    }
    png_crc_finish(a1, a3);
    return;
  }
LABEL_4:
  v5 = *(uint32_t *)(a1 + 84);
  if ( (v5 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before tEXt"));
  if ( (v5 & 4) != 0 )
    *(uint32_t *)(a1 + 84) = v5 | 8;
  png_free(a1, *(void **)(a1 + 624));
  v6 = png_malloc_warn(a1, a3 + 1);
  *(uint32_t *)(a1 + 624) = (uint32_t)(uintptr_t)(v6);
  if ( v6 == nullptr )
  {
    png_warning(a1, "No memory to process text chunk");
    return;
  }
  png_crc_read(a1, (int)(uintptr_t)(v6), a3);
  if ( png_crc_finish(a1, 0) != 0 )
  {
LABEL_16:
    png_free(a1, *(void **)(a1 + 624));
    *(uint32_t *)(a1 + 624) = 0;
    return;
  }
  v7 = *(uint8_t **)(a1 + 624);
  v8 = v7;
  for ( v7[a3] = 0; *v8 != 0; ++v8 )
    ;
  v13 = v7;
  s = (const char *)(&v8[v8 != &v7[a3]]);
  v10 = (uint32_t *)(png_malloc_warn(a1, 0x1Cu));
  v11 = v10;
  if ( v10 == nullptr )
  {
    png_warning(a1, "Not enough memory to process text chunk");
    goto LABEL_16;
  }
  v10[1] = (uint32_t)(uintptr_t)(v13);
  v10[2] = (uint32_t)(uintptr_t)(s);
  *v10 = -1;
  v10[5] = 0;
  v10[6] = 0;
  v10[4] = 0;
  v10[3] = strlen(s);
  v12 = png_set_text_2(a1, a2, v11, 1);
  png_free(a1, *(void **)(a1 + 624));
  *(uint32_t *)(a1 + 624) = 0;
  png_free(a1, v11);
  if ( v12 != 0 )
    png_warning(a1, "Insufficient memory to process text chunk");
}

// ----------------------------------------------------------------------------
// Function: png_handle_zTXt  (binary VA: 0xfabfb0)
// Original: png_handle_zTXt
// ----------------------------------------------------------------------------
void png_handle_zTXt(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  void *v6;
  bool v7;
  void *v8;
  uint8_t *v9;
  uint8_t *i;
  size_t n;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  int v15;
  size_t v16[8];

  v3 = *(uint32_t *)(a1 + 592);
  if ( v3 != 0 )
  {
    if ( v3 != 1 )
    {
      v4 = v3 - 1;
      *(uint32_t *)(a1 + 592) = v4;
      if ( v4 != 1 )
        goto LABEL_4;
      png_warning(a1, "No space in chunk cache for zTXt");
    }
    png_crc_finish(a1, a3);
    return;
  }
LABEL_4:
  v5 = *(uint32_t *)(a1 + 84);
  if ( (v5 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before zTXt"));
  if ( (v5 & 4) != 0 )
    *(uint32_t *)(a1 + 84) = v5 | 8;
  png_free(a1, *(void **)(a1 + 624));
  v6 = png_malloc_warn(a1, a3 + 1);
  *(uint32_t *)(a1 + 624) = (uint32_t)(uintptr_t)(v6);
  if ( v6 == nullptr )
  {
    png_warning(a1, "Out of memory processing zTXt chunk");
    return;
  }
  png_crc_read(a1, (int)(uintptr_t)(v6), a3);
  v7 = png_crc_finish(a1, 0) == 0;
  v8 = *(void **)(a1 + 624);
  if ( !v7 )
  {
LABEL_20:
    png_free(a1, v8);
    *(uint32_t *)(a1 + 624) = 0;
    return;
  }
  *((uint8_t *)v8 + a3) = 0;
  v9 = *(uint8_t **)(a1 + 624);
  for ( i = v9; *i != 0; ++i )
    ;
  if ( i >= &v9[a3 - 2] )
  {
    png_warning(a1, "Truncated zTXt chunk");
    png_free(a1, *(void **)(a1 + 624));
    *(uint32_t *)(a1 + 624) = 0;
    return;
  }
  if ( i[1] != 0 )
  {
    png_warning(a1, "Unknown compression type in zTXt chunk");
    v9 = *(uint8_t **)(a1 + 624);
  }
  n = i + 2 - v9;
  png_decompress_chunk(a1, 0, a3, n, v16);
  v12 = (uint32_t *)(png_malloc_warn(a1, 0x1Cu));
  v13 = v12;
  if ( v12 == nullptr )
  {
    png_warning(a1, "Not enough memory to process zTXt chunk");
    v8 = *(void **)(a1 + 624);
    goto LABEL_20;
  }
  *v12 = 0;
  v12[1] = *(uint32_t *)(a1 + 624);
  v12[5] = 0;
  v12[6] = 0;
  v12[4] = 0;
  v14 = v16[0];
  v13[2] = *(uint32_t *)(a1 + 624) + n;
  v13[3] = v14;
  v15 = png_set_text_2(a1, a2, v13, 1);
  png_free(a1, v13);
  png_free(a1, *(void **)(a1 + 624));
  *(uint32_t *)(a1 + 624) = 0;
  if ( v15 != 0 )
    png_error(a1, (int)(uintptr_t)("Insufficient memory to store zTXt chunk"));
}

// ----------------------------------------------------------------------------
// Function: png_handle_iTXt  (binary VA: 0xfac270)
// Original: png_handle_iTXt
// ----------------------------------------------------------------------------
void png_handle_iTXt(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  void *v6;
  bool v7;
  void *v8;
  uint8_t *v9;
  uint8_t *i;
  uint8_t *v11;
  uint8_t *v12;
  unsigned int v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  char *v17;
  typedef void *_g4_t_v18;
  typedef char _g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef char _g4_t_v21;
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_j;
  typedef size_t _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v19)) > _g4_s1 ? (15u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_j)) > _g4_s5 ? (28u + sizeof(_g4_t_j)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 15u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  v3 = *(uint32_t *)(a1 + 592);
  if ( v3 != 0 )
  {
    if ( v3 != 1 )
    {
      v4 = v3 - 1;
      *(uint32_t *)(a1 + 592) = v4;
      if ( v4 != 1 )
        goto LABEL_4;
      png_warning(a1, "No space in chunk cache for iTXt");
    }
    png_crc_finish(a1, a3);
    return;
  }
LABEL_4:
  v5 = *(uint32_t *)(a1 + 84);
  if ( (v5 & 1) == 0 )
    png_error(a1, (int)(uintptr_t)("Missing IHDR before iTXt"));
  if ( (v5 & 4) != 0 )
    *(uint32_t *)(a1 + 84) = v5 | 8;
  png_free(a1, *(void **)(a1 + 624));
  v6 = png_malloc_warn(a1, a3 + 1);
  *(uint32_t *)(a1 + 624) = (uint32_t)(uintptr_t)(v6);
  if ( v6 == nullptr )
  {
    png_warning(a1, "No memory to process iTXt chunk");
    return;
  }
  png_crc_read(a1, (int)(uintptr_t)(v6), a3);
  v7 = png_crc_finish(a1, 0) == 0;
  v8 = *(void **)(a1 + 624);
  if ( !v7 )
  {
LABEL_25:
    png_free(a1, v8);
    *(uint32_t *)(a1 + 624) = 0;
    return;
  }
  *((uint8_t *)v8 + a3) = 0;
  v9 = *(uint8_t **)(a1 + 624);
  for ( i = v9; *i != 0; ++i )
    ;
  if ( i + 1 >= &v9[a3 - 3] )
  {
    v17 = "Truncated iTXt chunk";
LABEL_24:
    png_warning(a1, v17);
    v8 = *(void **)(a1 + 624);
    goto LABEL_25;
  }
  v21 = i[1];
  v19 = i[2];
  v11 = i + 3;
  for ( j = i + 3; *v11 != 0; ++v11 )
    ;
  v12 = v11 + 1;
  v22 = v11 + 1;
  if ( v11 + 1 >= &v9[a3] )
  {
    png_warning(a1, "Truncated iTXt chunk");
    png_free(a1, *(void **)(a1 + 624));
    *(uint32_t *)(a1 + 624) = 0;
    return;
  }
  if ( v11[1] != 0 )
  {
    do
      ++v12;
    while ( *v12 != 0 );
  }
  v13 = (unsigned int)(uintptr_t)(v12 + 1);
  if ( (unsigned int)(uintptr_t)(&v9[a3]) <= v13 )
  {
    v17 = "Malformed iTXt chunk";
    goto LABEL_24;
  }
  v14 = v13 - (uint32_t)(uintptr_t)(v9);
  v20 = v14;
  if ( v21 != 0 )
    png_decompress_chunk(a1, v19, a3, v14, v24);
  else
    v24[0] = strlen(&v9[v14]);
  v15 = (uint32_t *)(png_malloc_warn(a1, 0x1Cu));
  if ( v15 == nullptr )
  {
    png_warning(a1, "Not enough memory to process iTXt chunk");
    v8 = *(void **)(a1 + 624);
    goto LABEL_25;
  }
  *v15 = v21 + 1;
  v15[6] = *(uint32_t *)(a1 + 624) + v22 - v9;
  v15[5] = *(uint32_t *)(a1 + 624) + j - v9;
  v15[4] = v24[0];
  v15[3] = 0;
  v15[1] = *(uint32_t *)(a1 + 624);
  v15[2] = *(uint32_t *)(a1 + 624) + v20;
  v18 = v15;
  v16 = png_set_text_2(a1, a2, v15, 1);
  png_free(a1, v18);
  png_free(a1, *(void **)(a1 + 624));
  *(uint32_t *)(a1 + 624) = 0;
  if ( v16 != 0 )
    png_error(a1, (int)(uintptr_t)("Insufficient memory to store iTXt chunk"));
}

// ----------------------------------------------------------------------------
// Function: png_handle_unknown  (binary VA: 0xfac600)
// Original: png_handle_unknown
// ----------------------------------------------------------------------------
int png_handle_unknown(int a1, int a2, size_t a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int (*v6)(int, int);
  int v7;
  bool v9;
  void *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_s2[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_s2)) > _g4_s2 ? (16u + sizeof(_g4_t_s2)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 16u);

  v3 = *(uint32_t *)(a1 + 592);
  if ( v3 == 0 )
  {
LABEL_4:
    if ( (*(uint32_t *)(a1 + 84) & 4) == 0
      || (v11 = *(uint32_t *)(a1 + 84), strcpy(s2, "IDAT"), memcmp((const void *)(a1 + 264), s2, 4u) == 0) )
    {
      if ( (*(uint8_t *)(a1 + 264) & 0x20) != 0 )
        goto LABEL_6;
    }
    else
    {
      v9 = (*(uint8_t *)(a1 + 264) & 0x20) == 0;
      *(uint32_t *)(a1 + 84) = v11 | 8;
      if ( !v9 )
        goto LABEL_6;
    }
    if ( png_handle_as_unknown(a1, (void *)(a1 + 264)) != 3 && *(uint32_t *)(a1 + 520) == 0 )
      png_chunk_error((uint8_t *)a1, "unknown critical chunk");
LABEL_6:
    if ( *(char *)(a1 + 89) >= 0 )
    {
      v5 = a3;
      if ( *(uint32_t *)(a1 + 520) == 0 )
        return png_crc_finish(a1, v5);
    }
    v12 = a1 + 596;
    *(uint32_t *)(a1 + 596) = *(uint32_t *)(a1 + 264);
    *(uint8_t *)(a1 + 600) = 0;
    *(uint32_t *)(a1 + 608) = a3;
    if ( a3 != 0 )
    {
      v10 = png_malloc(a1, a3);
      *(uint32_t *)(a1 + 604) = (uint32_t)(uintptr_t)(v10);
      png_crc_read(a1, (int)(uintptr_t)(v10), a3);
    }
    else
    {
      *(uint32_t *)(a1 + 604) = 0;
    }
    v6 = *(int (**)(int, int))(a1 + 520);
    if ( v6 != nullptr )
    {
      v7 = v6(a1, v12);
      if ( v7 < 0 )
        png_chunk_error((uint8_t *)a1, "error in user chunk");
      if ( v7 != 0 )
        goto LABEL_15;
      if ( (*(uint8_t *)(a1 + 264) & 0x20) == 0 && png_handle_as_unknown(a1, (void *)(a1 + 264)) != 3 )
        png_chunk_error((uint8_t *)a1, "unknown critical chunk");
    }
    png_set_unknown_chunks(a1, a2, v12, 1);
LABEL_15:
    png_free(a1, *(void **)(a1 + 604));
    *(uint32_t *)(a1 + 604) = 0;
    v5 = 0;
    return png_crc_finish(a1, v5);
  }
  if ( v3 != 1 )
  {
    v4 = v3 - 1;
    *(uint32_t *)(a1 + 592) = v4;
    if ( v4 != 1 )
      goto LABEL_4;
    png_warning(a1, "No space in chunk cache for unknown chunk");
  }
  return png_crc_finish(a1, a3);
}

// ----------------------------------------------------------------------------
// Function: png_check_chunk_name  (binary VA: 0xfac870)
// Original: png_check_chunk_name
// ----------------------------------------------------------------------------
int png_check_chunk_name(uint8_t *a1, uint8_t *a2)
{
  char v2;
  char v3;
  int v4;
  int result;

  if ( (uint8_t)(*a2 - 91) <= 5u
    || (uint8_t)(*a2 - 65) > 0x39u
    || (uint8_t)((v2 = a2[1]) - 91) <= 5u
    || (uint8_t)(v2 - 65) > 0x39u
    || (uint8_t)((v3 = a2[2]) - 91) <= 5u
    || (uint8_t)(v3 - 65) > 0x39u
    || (uint8_t)((v4 = (uint8_t)a2[3]) - 91) <= 5u
    || (uint8_t)(result = v4 - 65) > 0x39u )
  {
    png_chunk_error(a1, "invalid chunk type");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_read_chunk_header  (binary VA: 0xfac900)
// Original: png_read_chunk_header
// ----------------------------------------------------------------------------
int png_read_chunk_header(int a1)
{
  int uint_31;
  typedef uint8_t _g4_t_v4[4];
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  *(uint32_t *)(a1 + 628) = 33;
  png_read_data(a1, (int)(uintptr_t)(v4), 8);
  uint_31 = png_get_uint_31(a1, v4);
  *(uint32_t *)(a1 + 264) = v5;
  png_reset_crc(a1);
  png_calculate_crc(a1, a1 + 264, 4);
  png_check_chunk_name((uint8_t *)a1, (uint8_t *)(a1 + 264));
  *(uint32_t *)(a1 + 628) = 65;
  return uint_31;
}

// ----------------------------------------------------------------------------
// Function: png_combine_row  (binary VA: 0xfac9b0)
// Original: png_combine_row
// ----------------------------------------------------------------------------
char png_combine_row(int a1, uint8_t *a2, int a3)
{
  uint8_t *v3;
  uint8_t v4;
  int v5;
  int v6;
  size_t n;
  int v8;
  char *src;
  int v10;
  char *dest;
  bool v12;
  uint8_t v13;
  size_t v14;
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
  char *v28;
  uint8_t v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  uint8_t *v38;
  int v39;
  uint8_t *v40;
  int v41;
  uint8_t *v42;
  int v43;
  int v44;
  int v45;

  v3 = a2;
  if ( a3 == 255 )
  {
    v13 = *(uint8_t *)(a1 + 247);
    if ( v13 <= 7u )
      v14 = (*(uint32_t *)(a1 + 180) * (unsigned int)v13 + 7) >> 3;
    else
      v14 = *(uint32_t *)(a1 + 180) * (v13 >> 3);
    LOBYTE(v6) = (uint8_t)(uintptr_t)(memcpy)(a2, (const void *)(*(uint32_t *)(a1 + 216) + 1), v14);
  }
  else
  {
    v4 = *(uint8_t *)(a1 + 247);
    v5 = *(uint32_t *)(a1 + 216);
    switch ( v4 )
    {
      case 2u:
        v23 = *(uint32_t *)(a1 + 92) & 0x10000;
        v39 = *(uint32_t *)(a1 + 180);
        v36 = v23 == 0 ? -2 : 2;
        v33 = v23 != 0 ? 6 : 0;
        v6 = v23 == 0 ? 6 : 0;
        v45 = v6;
        if ( v39 != 0 )
        {
          v24 = 0;
          v42 = (uint8_t *)(v5 + 1);
          v25 = 128;
          do
          {
            if ( (v25 & a3) != 0 )
              *v3 = ((((int)*v42 >> v6) & 3) << v6) | *v3 & (16191 >> (6 - v6));
            if ( v6 == v33 )
            {
              ++v42;
              ++v3;
              v6 = v45;
            }
            else
            {
              v6 += v36;
            }
            v26 = v25 >> 1;
            v12 = v25 == 1;
            v25 = 128;
            if ( !v12 )
              v25 = v26;
            ++v24;
          }
          while ( v24 != v39 );
        }
        break;
      case 4u:
        v15 = *(uint32_t *)(a1 + 92) & 0x10000;
        v37 = *(uint32_t *)(a1 + 180);
        v34 = v15 == 0 ? -4 : 4;
        v31 = v15 != 0 ? 4 : 0;
        v6 = v15 == 0 ? 4 : 0;
        v43 = v6;
        if ( v37 != 0 )
        {
          v16 = 0;
          v40 = (uint8_t *)(v5 + 1);
          v17 = 128;
          do
          {
            if ( (v17 & a3) != 0 )
              *v3 = ((((int)*v40 >> v6) & 0xF) << v6) | *v3 & (3855 >> (4 - v6));
            if ( v6 == v31 )
            {
              ++v40;
              ++v3;
              v6 = v43;
            }
            else
            {
              v6 += v34;
            }
            v18 = v17 >> 1;
            v12 = v17 == 1;
            v17 = 128;
            if ( !v12 )
              v17 = v18;
            ++v16;
          }
          while ( v16 != v37 );
        }
        break;
      case 1u:
        v6 = *(uint32_t *)(a1 + 92) & 0x10000;
        v35 = *(uint32_t *)(a1 + 180);
        v32 = v6 != 0 ? 7 : 0;
        v19 = v6 == 0 ? 7 : 0;
        v44 = v19;
        v41 = v6 == 0 ? -1 : 1;
        LOBYTE(v6) = v35;
        if ( v35 != 0 )
        {
          v6 = v19;
          v38 = (uint8_t *)(v5 + 1);
          v20 = 0;
          v21 = 128;
          do
          {
            if ( (v21 & a3) != 0 )
              *v3 = ((((int)*v38 >> v6) & 1) << v6) | *v3 & (32639 >> (7 - v6));
            if ( v6 == v32 )
            {
              ++v38;
              ++v3;
              v6 = v44;
            }
            else
            {
              v6 += v41;
            }
            v22 = v21 >> 1;
            v12 = v21 == 1;
            v21 = 128;
            if ( !v12 )
              v21 = v22;
            ++v20;
          }
          while ( v20 != v35 );
        }
        break;
      default:
        v6 = *(uint32_t *)(a1 + 180);
        n = v4 >> 3;
        v30 = v6;
        if ( v6 != 0 )
        {
          v8 = -128;
          src = (char *)(v5 + 1);
          v10 = 0;
          dest = (char *)(a2);
          do
          {
            if ( ((uint8_t)v8 & (uint8_t)a3) != 0 )
            {
              v28 = dest;
              v29 = v8;
              memcpy(dest, src, n);
              v8 = v29;
              dest = v28;
            }
            v6 = v8;
            src += n;
            LOBYTE(v6) = (uint8_t)v8 >> 1;
            dest += n;
            v12 = (uint8_t)v8 == 1;
            v8 = -128;
            if ( !v12 )
              v8 = v6;
            ++v10;
          }
          while ( v10 != v30 );
        }
        break;
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: png_do_read_interlace  (binary VA: 0xfacd30)
// Original: png_do_read_interlace
// ----------------------------------------------------------------------------
int png_do_read_interlace(int a1)
{
  int v1;
  bool v2;
  int v3;
  int result;
  uint8_t v5;
  unsigned int v6;
  uint8_t v7;
  char *v8;
  int i;
  unsigned int v10;
  uint8_t *v11;
  int v12;
  uint8_t *v13;
  int v14;
  uint8_t *v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t *_g4_t_v21;
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t _g4_t_dest[13];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v23)) > _g4_s6 ? (24u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v24)) > _g4_s7 ? (28u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v25)) > _g4_s8 ? (28u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v26)) > _g4_s9 ? (28u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v27)) > _g4_s10 ? (32u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v28)) > _g4_s11 ? (32u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v29)) > _g4_s12 ? (32u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v30)) > _g4_s13 ? (32u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v31)) > _g4_s14 ? (36u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v32)) > _g4_s15 ? (36u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v33)) > _g4_s16 ? (36u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v34)) > _g4_s17 ? (36u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v35)) > _g4_s18 ? (40u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v36)) > _g4_s19 ? (40u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v37)) > _g4_s20 ? (40u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v38)) > _g4_s21 ? (40u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v39)) > _g4_s22 ? (44u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v40)) > _g4_s23 ? (48u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v41)) > _g4_s24 ? (48u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v42)) > _g4_s25 ? (48u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v43)) > _g4_s26 ? (52u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v44)) > _g4_s27 ? (52u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v45)) > _g4_s28 ? (52u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v46)) > _g4_s29 ? (52u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_dest)) > _g4_s30 ? (64u + sizeof(_g4_t_dest)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 64u);

  dest[2] = 8;
  dest[3] = 8;
  dest[4] = 4;
  dest[5] = 4;
  dest[6] = 2;
  v1 = *(uint32_t *)(a1 + 216);
  dest[7] = 2;
  v2 = v1 == -1;
  v3 = v1 + 1;
  result = *(uint32_t *)(a1 + 92);
  v5 = *(uint8_t *)(a1 + 272);
  dest[8] = 1;
  if ( !v2 && a1 != -236 )
  {
    v6 = *(uint32_t *)(a1 + 236);
    v39 = dest[v5 + 2];
    v20 = v6 * v39;
    v7 = *(uint8_t *)(a1 + 247);
    switch ( v7 )
    {
      case 2u:
        if ( (result & 0x10000) != 0 )
        {
          v28 = (2 * (uint8_t)v6 + 6) & 6;
          v36 = -2;
          v44 = 0;
          v32 = 6;
          result = (2 * (uint8_t)v20 + 6) & 6;
        }
        else
        {
          v36 = 2;
          v44 = 6;
          v28 = 2 * (~((uint8_t)v6 + 3) & 3);
          v32 = 0;
          result = 2 * (~((uint8_t)v20 + 3) & 3);
        }
        if ( v6 == 0 )
          goto LABEL_18;
        v24 = 0;
        v21 = (uint8_t *)(v3 + ((v6 - 1) >> 2));
        v11 = (uint8_t *)(v3 + ((unsigned int)(v20 - 1) >> 2));
        do
        {
          if ( v39 > 0 )
          {
            v17 = 0;
            v40 = ((int)*v21 >> v28) & 3;
            do
            {
              *v11 = (v40 << result) | *v11 & (16191 >> (6 - result));
              v12 = result + v36;
              v2 = v44 == result;
              result = v32;
              if ( v2 )
                --v11;
              else
                result = v12;
              ++v17;
            }
            while ( v17 != v39 );
            v6 = *(uint32_t *)(a1 + 236);
          }
          if ( v28 == v44 )
          {
            --v21;
            v28 = v32;
          }
          else
          {
            v28 += v36;
          }
          ++v24;
        }
        while ( v24 < v6 );
        v7 = *(uint8_t *)(a1 + 247);
        break;
      case 4u:
        if ( (result & 0x10000) != 0 )
        {
          v30 = (4 * (uint8_t)v6 + 4) & 4;
          v38 = -4;
          v46 = 0;
          v34 = 4;
          result = (4 * (uint8_t)v20 + 4) & 4;
        }
        else
        {
          v38 = 4;
          v46 = 4;
          v34 = 0;
          v30 = (((uint8_t)v6 + 1) & 1) == 0 ? 4 : 0;
          result = (((uint8_t)v20 + 1) & 1) == 0 ? 4 : 0;
        }
        if ( v6 == 0 )
          goto LABEL_18;
        v26 = 0;
        v23 = (uint8_t *)(v3 + ((v6 - 1) >> 1));
        v15 = (uint8_t *)(v3 + ((unsigned int)(v20 - 1) >> 1));
        do
        {
          if ( v39 > 0 )
          {
            v19 = 0;
            v42 = ((int)*v23 >> v30) & 0xF;
            do
            {
              *v15 = (v42 << result) | *v15 & (3855 >> (4 - result));
              v16 = result + v38;
              v2 = v46 == result;
              result = v34;
              if ( v2 )
                --v15;
              else
                result = v16;
              ++v19;
            }
            while ( v19 != v39 );
            v6 = *(uint32_t *)(a1 + 236);
          }
          if ( v30 == v46 )
          {
            --v23;
            v30 = v34;
          }
          else
          {
            v30 += v38;
          }
          ++v26;
        }
        while ( v26 < v6 );
        v7 = *(uint8_t *)(a1 + 247);
        break;
      case 1u:
        if ( (result & 0x10000) != 0 )
        {
          v29 = ((uint8_t)v6 + 7) & 7;
          v37 = -1;
          result = ((uint8_t)v20 + 7) & 7;
          v45 = 0;
          v33 = 7;
        }
        else
        {
          v29 = ~((uint8_t)v6 + 7) & 7;
          result = ~((uint8_t)v20 + 7) & 7;
          v37 = 1;
          v45 = 7;
          v33 = 0;
        }
        if ( v6 != 0 )
        {
          v25 = 0;
          v22 = (uint8_t *)(v3 + ((v6 - 1) >> 3));
          v13 = (uint8_t *)(v3 + ((unsigned int)(v20 - 1) >> 3));
          do
          {
            if ( v39 > 0 )
            {
              v18 = 0;
              v41 = ((int)*v22 >> v29) & 1;
              do
              {
                *v13 = (v41 << result) | *v13 & (32639 >> (7 - result));
                v14 = result + v37;
                v2 = v45 == result;
                result = v33;
                if ( v2 )
                  --v13;
                else
                  result = v14;
                ++v18;
              }
              while ( v18 != v39 );
              v6 = *(uint32_t *)(a1 + 236);
            }
            if ( v29 == v45 )
            {
              --v22;
              v29 = v33;
            }
            else
            {
              v29 += v37;
            }
            ++v25;
          }
          while ( v25 < v6 );
          v7 = *(uint8_t *)(a1 + 247);
          break;
        }
LABEL_18:
        *(uint32_t *)(a1 + 236) = v20;
        goto LABEL_19;
      default:
        if ( v6 != 0 )
        {
          v43 = v7 >> 3;
          v31 = 0;
          v35 = (char *)(v3 + v43 * (v6 - 1));
          v27 = (char *)(v3 + v43 * (v20 - 1));
          do
          {
            memcpy(dest, v35, v43);
            result = v39;
            if ( v39 > 0 )
            {
              v8 = v27;
              for ( i = 0; i != v39; ++i )
              {
                result = (int)(uintptr_t)(memcpy(v8, dest, v43));
                v8 -= v43;
              }
              v27 += -v43 * v39;
              v6 = *(uint32_t *)(a1 + 236);
            }
            ++v31;
            v35 -= v43;
          }
          while ( v31 < v6 );
          v7 = *(uint8_t *)(a1 + 247);
        }
        break;
    }
    *(uint32_t *)(a1 + 236) = v20;
    if ( v7 > 7u )
    {
      v10 = v20 * (v7 >> 3);
LABEL_16:
      *(uint32_t *)(a1 + 240) = v10;
      return result;
    }
LABEL_19:
    v10 = (v20 * (unsigned int)v7 + 7) >> 3;
    goto LABEL_16;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_read_filter_row  (binary VA: 0xfad350)
// Original: png_read_filter_row
// ----------------------------------------------------------------------------
unsigned int png_read_filter_row(int a1, int a2, uint8_t *a3, unsigned int a4, int a5)
{
  uint8_t *v5;
  unsigned int v6;
  unsigned int result;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int i;
  unsigned int v12;
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
  int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  uint8_t *v38;
  unsigned int v39;
  uint8_t *v40;
  unsigned int v41;
  signed int v42;
  signed int v43;
  signed int v44;
  char v45; // di
  unsigned int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  uint8_t *v51;
  unsigned int v52;
  unsigned int v53;
  uint8_t *v54;
  unsigned int v55;
  uint8_t *v56;
  unsigned int v57;
  unsigned int v58;
  uint8_t *v59;
  unsigned int v60;
  int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  unsigned int v65;
  int v66;
  unsigned int v67;
  unsigned int v68;
  uint8_t *v69;
  int v70;
  int v71;
  unsigned int v72;
  unsigned int v73;
  int v74;
  unsigned int v75;
  int v76;

  v5 = a3;
  v6 = a4;
  result = (unsigned int)(uintptr_t)(dword_20B9FF4) + (uint32_t)jpt_FAD3A9[a5];
  switch ( a5 )
  {
    case 0:
      return result;
    case 1:
      v46 = *(uint32_t *)(a2 + 4);
      result = (*(uint8_t *)(a2 + 11) + 7) >> 3;
      v75 = result;
      if ( v46 <= result )
        return result;
      v47 = (unsigned int)(uintptr_t)(&a3[result]);
      v67 = v46 - result;
      v62 = (v46 - result) >> 4;
      v71 = 16 * v62;
      if ( 16 * v62 == 0 || (unsigned int)(uintptr_t)(a3) <= v47 + 16 && v47 <= (unsigned int)(uintptr_t)(a3 + 16) || v67 <= 0xF )
      {
        result = (*(uint8_t *)(a2 + 11) + 7) >> 3;
LABEL_42:
        v50 = v47 - result;
        v51 = &v5[-result];
        do
        {
          *(uint8_t *)(v50 + result) += v51[result];
          ++result;
        }
        while ( v46 > result );
        return result;
      }
      v60 = *(uint32_t *)(a2 + 4);
      v48 = 0;
      v49 = 0;
      do
      {
        ++v49;
        *(__m128i *)(v47 + v48) = _mm_add_epi8(*(__m128i *)&a3[v48], *(__m128i *)(v47 + v48));
        v48 += 16;
      }
      while ( v62 > v49 );
      v47 += v71;
      result = v75 + v71;
      v5 = &a3[v71];
      v46 = v60;
      if ( v67 != v71 )
        goto LABEL_42;
      return result;
    case 2:
      v52 = *(uint32_t *)(a2 + 4);
      if ( v52 == 0 )
        return result;
      v76 = 16 * (v52 >> 4);
      if ( v76 == 0 || a4 <= (unsigned int)(uintptr_t)(a3 + 16) && (unsigned int)(uintptr_t)(a3) <= a4 + 16 || v52 <= 0xF )
      {
        v76 = 0;
LABEL_51:
        result = v76;
        v54 = &v5[-v76];
        v55 = v6 - v76;
        do
        {
          v54[result] += *(uint8_t *)(v55 + result);
          ++result;
        }
        while ( v52 > result );
        return result;
      }
      v68 = *(uint32_t *)(a2 + 4);
      result = 0;
      v53 = 0;
      do
      {
        ++v53;
        *(__m128i *)&a3[result] = _mm_add_epi8(*(__m128i *)(a4 + result), *(__m128i *)&a3[result]);
        result += 16;
      }
      while ( v52 >> 4 > v53 );
      v52 = v68;
      v5 = &a3[v76];
      v6 = v76 + a4;
      if ( v68 != v76 )
        goto LABEL_51;
      return result;
    case 3:
      v8 = a4;
      v9 = (*(uint8_t *)(a2 + 11) + 7) >> 3;
      v72 = *(uint32_t *)(a2 + 4) - v9;
      v10 = (unsigned int)(uintptr_t)(a3);
      if ( v9 != 0 )
      {
        for ( i = 0; i != v9; ++i )
          a3[i] += *(uint8_t *)(a4 + i) >> 1;
        v8 = a4 + v9;
        v10 = (unsigned int)(uintptr_t)(&a3[v9]);
      }
      result = v72;
      if ( v72 == 0 )
        return result;
      v63 = 16 * (v72 >> 4);
      if ( v63 == 0
        || (unsigned int)(uintptr_t)(a3) <= v10 + 16 && v10 <= (unsigned int)(uintptr_t)(a3 + 16)
        || v8 <= v10 + 16 && v10 <= v8 + 16
        || v72 <= 0xF )
      {
        v69 = a3;
        v63 = 0;
LABEL_15:
        result = v63;
        v33 = -v63;
        v64 = v8 - v63;
        do
        {
          *(uint8_t *)(v10 + v33 + result) += (*(uint8_t *)(v64 + result) + (uint8_t)v69[v33 + result]) >> 1;
          ++result;
        }
        while ( v72 > result );
        return result;
      }
      result = 0;
      v12 = 0;
      do
      {
        v13 = _mm_unpacklo_epi8(*(__m128i *)(v8 + result), g4_m128_from<__m128i>(0LL));
        v14 = _mm_unpacklo_epi8(*(__m128i *)&a3[result], g4_m128_from<__m128i>(0LL));
        v15 = _mm_unpacklo_epi16(v13, g4_m128_from<__m128i>(0LL));
        v16 = _mm_srai_epi32(
                _mm_add_epi32(_mm_unpackhi_epi16(v13, g4_m128_from<__m128i>(0LL)), _mm_unpackhi_epi16(v14, g4_m128_from<__m128i>(0LL))),
                1u);
        v17 = _mm_srai_epi32(_mm_add_epi32(_mm_unpacklo_epi16(v14, g4_m128_from<__m128i>(0LL)), v15), 1u);
        v18 = _mm_unpacklo_epi16(v17, v16);
        v19 = _mm_unpackhi_epi16(v17, v16);
        v20 = _mm_unpackhi_epi8(*(__m128i *)(v8 + result), g4_m128_from<__m128i>(0LL));
        v21 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v18, v19), _mm_unpackhi_epi16(v18, v19));
        v22 = _mm_unpackhi_epi8(*(__m128i *)&a3[result], g4_m128_from<__m128i>(0LL));
        v23 = _mm_unpacklo_epi16(v20, g4_m128_from<__m128i>(0LL));
        v24 = _mm_srai_epi32(
                _mm_add_epi32(_mm_unpackhi_epi16(v20, g4_m128_from<__m128i>(0LL)), _mm_unpackhi_epi16(v22, g4_m128_from<__m128i>(0LL))),
                1u);
        v25 = _mm_srai_epi32(_mm_add_epi32(_mm_unpacklo_epi16(v22, g4_m128_from<__m128i>(0LL)), v23), 1u);
        v26 = _mm_unpacklo_epi16(v25, v24);
        v27 = _mm_unpackhi_epi16(v25, v24);
        ++v12;
        v28 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v26, v27), _mm_unpackhi_epi16(v26, v27));
        v29 = _mm_unpackhi_epi8(v21, v28);
        v30 = _mm_unpacklo_epi8(v21, v28);
        v31 = _mm_unpacklo_epi8(v30, v29);
        v32 = _mm_unpackhi_epi8(v30, v29);
        *(__m128i *)(v10 + result) = _mm_add_epi8(
                                       _mm_unpacklo_epi8(_mm_unpacklo_epi8(v31, v32), _mm_unpackhi_epi8(v31, v32)),
                                       *(__m128i *)(v10 + result));
        result += 16;
      }
      while ( v72 >> 4 > v12 );
      v10 += v63;
      v8 += v63;
      v69 = &a3[v63];
      if ( v72 != v63 )
        goto LABEL_15;
      return result;
    case 4:
      v57 = a4;
      v34 = (*(uint8_t *)(a2 + 11) + 7) >> 3;
      v59 = a3;
      v73 = v34;
      v58 = *(uint32_t *)(a2 + 4) - v34;
      if ( v34 == 0 )
        goto LABEL_28;
      v35 = v34 >> 4;
      v70 = 16 * (v34 >> 4);
      if ( v70 == 0 || a4 <= (unsigned int)(uintptr_t)(a3 + 16) && (unsigned int)(uintptr_t)(a3) <= a4 + 16 || v34 <= 0xF )
      {
        v65 = a4;
        v38 = a3;
        v39 = 0;
LABEL_24:
        v40 = &v38[-v39];
        v41 = v65 - v39;
        do
        {
          v40[v39] += *(uint8_t *)(v41 + v39);
          ++v39;
        }
        while ( v73 > v39 );
        v5 = a3;
        goto LABEL_27;
      }
      v36 = 0;
      v37 = 0;
      do
      {
        ++v37;
        *(__m128i *)&a3[v36] = _mm_add_epi8(*(__m128i *)(a4 + v36), *(__m128i *)&a3[v36]);
        v36 += 16;
      }
      while ( v35 > v37 );
      v38 = &a3[v70];
      v39 = v70;
      v65 = a4 + v70;
      if ( v73 != v70 )
        goto LABEL_24;
LABEL_27:
      v57 = a4 + v73;
      v59 = &v5[v73];
LABEL_28:
      result = v58;
      if ( v58 != 0 )
      {
        result = 0;
        v56 = v5;
        do
        {
          v61 = *(uint8_t *)(v57 + result);
          v74 = *(uint8_t *)(a4 + result);
          v66 = (uint8_t)v56[result];
          v42 = __builtin_abs(v61 - v74);
          v43 = __builtin_abs(v66 - v74);
          v44 = __builtin_abs(v61 - v74 + v66 - v74);
          if ( v42 > v44 || (v45 = v56[result], v42 > v43) )
          {
            v45 = *(uint8_t *)(v57 + result);
            if ( v43 > v44 )
              v45 = *(uint8_t *)(a4 + result);
          }
          v59[result++] += v45;
        }
        while ( result != v58 );
      }
      return result;
    default:
      result = png_warning(a1, "Ignoring bad adaptive filter type");
      *a3 = 0;
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: png_read_finish_row  (binary VA: 0xfad8f0)
// Original: png_read_finish_row
// ----------------------------------------------------------------------------
unsigned int png_read_finish_row(int a1)
{
  unsigned int result;
  bool v2;
  int v3;
  int v4;
  const char *v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  bool v10;
  typedef unsigned int _g4_t_v11;
  typedef uint8_t _g4_t_v12;
  typedef char _g4_t_v13;
  typedef uint8_t _g4_t_v14;
  typedef uint32_t _g4_t_s2[39];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v13)) > _g4_s2 ? (27u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_s2)) > _g4_s4 ? (32u + sizeof(_g4_t_s2)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 27u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 32u);

  s2[4] = 0;
  s2[5] = 4;
  s2[6] = 0;
  s2[7] = 2;
  s2[8] = 0;
  s2[9] = 1;
  s2[10] = 0;
  s2[12] = 8;
  s2[13] = 8;
  s2[14] = 4;
  s2[15] = 4;
  s2[16] = 2;
  s2[17] = 2;
  s2[18] = 1;
  s2[20] = 0;
  s2[21] = 0;
  s2[22] = 4;
  s2[23] = 0;
  s2[24] = 2;
  s2[25] = 0;
  s2[26] = 1;
  s2[28] = 8;
  s2[29] = 8;
  s2[30] = 8;
  s2[31] = 4;
  s2[32] = 4;
  s2[33] = 2;
  s2[34] = 2;
  result = *(uint32_t *)(a1 + 208) + 1;
  v2 = result < *(uint32_t *)(a1 + 188);
  *(uint32_t *)(a1 + 208) = result;
  if ( !v2 )
  {
    if ( *(uint8_t *)(a1 + 271) != 0 )
    {
      v9 = *(uint32_t *)(a1 + 196);
      *(uint32_t *)(a1 + 208) = 0;
      memset(*(void **)(a1 + 212), 0, v9 + 1);
      v12 = *(uint8_t *)(a1 + 272);
      while ( ++v12 <= 6u )
      {
        v10 = (*(uint8_t *)(a1 + 92) & 2) == 0;
        v11 = (unsigned int)(s2[v12 + 12] + *(uint32_t *)(a1 + 180) - 1 - s2[v12 + 4]) / s2[v12 + 12];
        *(uint32_t *)(a1 + 204) = v11;
        if ( v10 )
        {
          *(uint32_t *)(a1 + 188) = (unsigned int)(s2[v12 + 28] + *(uint32_t *)(a1 + 184) - 1 - s2[v12 + 20]) / s2[v12 + 28];
          if ( v11 == 0 )
            continue;
        }
        *(uint8_t *)(a1 + 272) = v12;
        return v12;
      }
      *(uint8_t *)(a1 + 272) = v12;
    }
    if ( (*(uint8_t *)(a1 + 88) & 0x20) != 0 )
    {
      v4 = *(uint32_t *)(a1 + 248);
      v3 = a1 + 96;
    }
    else
    {
      LOBYTE(s2[0]) = 73;
      *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(&v13);
      strcpy((char *)s2 + 1, "DAT");
      *(uint32_t *)(a1 + 112) = 1;
      v3 = a1 + 96;
      while ( 1 )
      {
        if ( *(uint32_t *)(a1 + 100) == 0 )
        {
          while ( 1 )
          {
            v6 = *(uint32_t *)(a1 + 248);
            if ( v6 != 0 )
              break;
            png_crc_finish(a1, 0);
            png_read_data(a1, (int)(uintptr_t)(&v14), 4);
            *(uint32_t *)(a1 + 248) = png_get_uint_31(a1, &v14);
            png_reset_crc(a1);
            png_crc_read(a1, a1 + 264, 4);
            if ( memcmp((const void *)(a1 + 264), s2, 4u) != 0 )
              png_error(a1, (int)(uintptr_t)("Not enough image data"));
          }
          v7 = *(uint32_t *)(a1 + 156);
          v8 = *(uint32_t *)(a1 + 152);
          *(uint32_t *)(a1 + 100) = v7;
          *(uint32_t *)(a1 + 96) = v8;
          if ( v7 > v6 )
          {
            *(uint32_t *)(a1 + 100) = v6;
            v7 = v6;
          }
          png_crc_read(a1, v8, v7);
          *(uint32_t *)(a1 + 248) -= *(uint32_t *)(a1 + 100);
        }
        v4 = inflate(a1 + 96, 1);
        if ( v4 == 1 )
          break;
        if ( v4 != 0 )
        {
          v5 = *(const char **)(a1 + 120);
          if ( v5 == nullptr )
            v5 = "Decompression Error";
          png_error(a1, (int)(uintptr_t)(v5));
        }
        if ( *(uint32_t *)(a1 + 112) == 0 )
        {
          png_warning(a1, "Extra compressed data");
          *(uint32_t *)(a1 + 84) |= 8u;
          *(uint32_t *)(a1 + 88) |= 0x20u;
          v4 = *(uint32_t *)(a1 + 248);
          goto LABEL_25;
        }
      }
      if ( *(uint32_t *)(a1 + 112) == 0 || *(uint32_t *)(a1 + 100) != 0 || (LOBYTE(v4) = 0, *(uint32_t *)(a1 + 248) != 0) )
      {
        png_warning(a1, "Extra compressed data");
        v4 = *(uint32_t *)(a1 + 248);
      }
      *(uint32_t *)(a1 + 84) |= 8u;
      *(uint32_t *)(a1 + 88) |= 0x20u;
LABEL_25:
      *(uint32_t *)(a1 + 112) = 0;
    }
    if ( v4 != 0 || *(uint32_t *)(a1 + 100) != 0 )
      png_warning(a1, "Extra compression data");
    result = inflateReset(v3);
    *(uint32_t *)(a1 + 84) |= 8u;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_read_start_row  (binary VA: 0xfadd40)
// Original: png_read_start_row
// ----------------------------------------------------------------------------
void * png_read_start_row(int a1)
{
  int v1;
  unsigned int v2;
  int v3;
  int v4;
  char v5;
  char v6;
  bool v7; // cc
  int v8;
  unsigned int v9;
  int v10;
  size_t v11;
  int v12;
  size_t n;
  void *s;
  int v15;
  void *result;
  char v17;
  char *v18;
  uint32_t v19[7];
  uint32_t v20[14];

  v19[0] = 0;
  v19[1] = 4;
  v19[2] = 0;
  v19[3] = 2;
  v19[4] = 0;
  v19[5] = 1;
  v19[6] = 0;
  *(uint32_t *)(a1 + 100) = 0;
  v20[0] = 8;
  v20[1] = 8;
  v20[2] = 4;
  v20[3] = 4;
  v20[4] = 2;
  v20[5] = 2;
  v20[6] = 1;
  png_init_read_transformations(a1);
  if ( *(uint8_t *)(a1 + 271) != 0 )
  {
    v1 = *(uint32_t *)(a1 + 92);
    v2 = *(uint32_t *)(a1 + 184);
    if ( (v1 & 2) == 0 )
      v2 = (v2 + 7) >> 3;
    *(uint32_t *)(a1 + 188) = v2;
    v3 = *(uint32_t *)(a1 + 180);
    *(uint32_t *)(a1 + 204) = (unsigned int)(v3
                                         + v20[*(uint8_t *)(a1 + 272)]
                                         - 1
                                         - v19[*(uint8_t *)(a1 + 272)])
                          / v20[*(uint8_t *)(a1 + 272)];
  }
  else
  {
    v3 = *(uint32_t *)(a1 + 180);
    *(uint32_t *)(a1 + 188) = *(uint32_t *)(a1 + 184);
    *(uint32_t *)(a1 + 204) = v3;
    v1 = *(uint32_t *)(a1 + 92);
  }
  v4 = *(uint8_t *)(a1 + 277);
  if ( (v1 & 4) != 0 && *(uint8_t *)(a1 + 275) <= 7u )
    v4 = 8;
  if ( (v1 & 0x1000) != 0 )
  {
    v5 = *(uint8_t *)(a1 + 274);
    if ( v5 == 3 )
    {
      v4 = *(uint16_t *)(a1 + 262) == 0 ? 24 : 32;
    }
    else if ( v5 != 0 )
    {
      if ( v5 == 2 && *(uint16_t *)(a1 + 262) != 0 )
        v4 = 4 * v4 / 3;
    }
    else
    {
      if ( v4 <= 7 )
        v4 = 8;
      if ( *(uint16_t *)(a1 + 262) != 0 )
        v4 *= 2;
    }
  }
  if ( (v1 & 0x8000) != 0 )
  {
    v6 = *(uint8_t *)(a1 + 274);
    if ( v6 == 3 )
    {
      v4 = 32;
    }
    else if ( v6 != 0 )
    {
      if ( v6 == 2 )
      {
        v7 = v4 <= 32;
        v4 = 64;
        if ( v7 )
          v4 = 32;
      }
    }
    else
    {
      v7 = v4 <= 8;
      v4 = 32;
      if ( v7 )
        v4 = 16;
    }
  }
  if ( (v1 & 0x4000) != 0 )
  {
    if ( *(uint16_t *)(a1 + 262) != 0 && (v1 & 0x1000) != 0 || (v1 & 0x8000) != 0 || (v17 = *(uint8_t *)(a1 + 274)) == 4 )
    {
      v7 = v4 <= 16;
      v4 = 64;
      if ( v7 )
        v4 = 32;
    }
    else if ( v4 > 8 )
    {
      v4 = 64;
      if ( v17 != 6 )
        v4 = 48;
    }
    else
    {
      v4 = 8 * (v17 == 6) + 24;
    }
  }
  if ( (v1 & 0x100000) != 0 )
  {
    v8 = *(uint8_t *)(a1 + 81);
    if ( v4 < v8 * *(uint8_t *)(a1 + 80) )
      v4 = v8 * *(uint8_t *)(a1 + 80);
  }
  v9 = (v3 + 7) & 0xFFFFFFF8;
  if ( v4 <= 7 )
    v10 = ((v4 * v9) >> 3) + 1;
  else
    v10 = v9 * ((unsigned int)v4 >> 3) + 1;
  v11 = v10 + ((v4 + 7) >> 3) + 48;
  if ( v11 > *(uint32_t *)(a1 + 616) )
  {
    png_free(a1, *(void **)(a1 + 564));
    if ( *(uint8_t *)(a1 + 271) != 0 )
      v18 = (char *)(png_calloc(a1, v11));
    else
      v18 = (char *)(png_malloc(a1, v11));
    *(uint32_t *)(a1 + 564) = (uint32_t)(uintptr_t)(v18);
    v12 = *(uint32_t *)(a1 + 196);
    *(uint32_t *)(a1 + 616) = v11;
    *(uint32_t *)(a1 + 216) = (uint32_t)(uintptr_t)((char *)v18 - (((uint8_t)(uintptr_t)(v18) + 15) & 0xF) + 32);
    if ( v12 != -1 )
      goto LABEL_33;
LABEL_44:
    png_error(a1, (int)(uintptr_t)("Row has too many bytes to allocate in memory"));
  }
  v12 = *(uint32_t *)(a1 + 196);
  if ( v12 == -1 )
    goto LABEL_44;
LABEL_33:
  n = v12 + 1;
  s = *(void **)(a1 + 212);
  if ( n > *(uint32_t *)(a1 + 620) )
  {
    png_free(a1, *(void **)(a1 + 212));
    s = png_malloc(a1, *(uint32_t *)(a1 + 196) + 1);
    v15 = *(uint32_t *)(a1 + 196);
    *(uint32_t *)(a1 + 212) = (uint32_t)(uintptr_t)(s);
    n = v15 + 1;
    *(uint32_t *)(a1 + 620) = n;
  }
  result = memset(s, 0, n);
  *(uint32_t *)(a1 + 88) |= 0x40u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_bKGD  (binary VA: 0xfae140)
// Original: png_set_bKGD
// ----------------------------------------------------------------------------
int png_set_bKGD(int a1, int64_t a2)
{
  int result;

  result = a2;
  if ( (uint32_t)a2 != 0 && a1 != 0 )
  {
    *(uint64_t *)(a2 + 90) = *(uint64_t *)HIDWORD(a2);
    *(uint16_t *)(a2 + 98) = *(uint16_t *)(HIDWORD(a2) + 8);
    *(uint32_t *)(a2 + 8) |= 0x20u;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_cHRM  (binary VA: 0xfae180)
// Original: png_set_cHRM
// ----------------------------------------------------------------------------
int png_set_cHRM(int a1, int a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10)
{
  int result;
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4

  result = a2;
  if ( a2 != 0 && a1 != 0 )
  {
    v11 = a3;
    *(float *)(a2 + 128) = v11;
    *(uint32_t *)(a2 + 8) |= 4u;
    v12 = a4;
    *(float *)(a2 + 132) = v12;
    v13 = a5;
    *(float *)(a2 + 136) = v13;
    v14 = a6;
    *(float *)(a2 + 140) = v14;
    v15 = a7;
    *(float *)(a2 + 144) = v15;
    v16 = a8;
    *(float *)(a2 + 148) = v16;
    v17 = a9;
    *(float *)(a2 + 152) = v17;
    v18 = a10;
    *(float *)(a2 + 156) = v18;
    *(uint32_t *)(a2 + 256) = (int)(a3 * 100000.0 + 0.5);
    *(uint32_t *)(a2 + 260) = (int)(a4 * 100000.0 + 0.5);
    *(uint32_t *)(a2 + 264) = (int)(a5 * 100000.0 + 0.5);
    *(uint32_t *)(a2 + 268) = (int)(a6 * 100000.0 + 0.5);
    *(uint32_t *)(a2 + 272) = (int)(a7 * 100000.0 + 0.5);
    *(uint32_t *)(a2 + 276) = (int)(a8 * 100000.0 + 0.5);
    *(uint32_t *)(a2 + 280) = (int)(a9 * 100000.0 + 0.5);
    *(uint32_t *)(a2 + 284) = (int)(100000.0 * a10 + 0.5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_cHRM_fixed  (binary VA: 0xfae300)
// Original: png_set_cHRM_fixed
// ----------------------------------------------------------------------------
int png_set_cHRM_fixed(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int result;
  g4_int128_t v11;
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4

  result = a1;
  if ( a2 != 0 && a1 != 0 )
  {
    result = png_check_cHRM_fixed(a1, a3, a4, a5, a6, a7, a8, a9, a10);
    if ( result != 0 )
    {
      *(uint32_t *)(a2 + 8) |= 4u;
      *(uint64_t *)&v11 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)), 0);
      *((uint64_t *)&v11 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a6)), 0);
      *(g4_int128_t *)(a2 + 256) = v11;
      *(uint64_t *)&v11 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(a7), _mm_cvtsi32_si128(a8)), 0);
      *((uint64_t *)&v11 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(a10)), 0);
      *(g4_int128_t *)(a2 + 272) = v11;
      v12 = (double)a3 * 0.00001;
      *(float *)(a2 + 128) = v12;
      v13 = (double)a4 * 0.00001;
      *(float *)(a2 + 132) = v13;
      v14 = (double)a5 * 0.00001;
      *(float *)(a2 + 136) = v14;
      v15 = (double)a6 * 0.00001;
      *(float *)(a2 + 140) = v15;
      v16 = (double)a7 * 0.00001;
      *(float *)(a2 + 144) = v16;
      v17 = (double)a8 * 0.00001;
      *(float *)(a2 + 148) = v17;
      v18 = (double)a9 * 0.00001;
      *(float *)(a2 + 152) = v18;
      v19 = (double)a10 * 0.00001;
      *(float *)(a2 + 156) = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_gAMA  (binary VA: 0xfae4b0)
// Original: png_set_gAMA
// ----------------------------------------------------------------------------
int png_set_gAMA(int a1, float *a2, double a3)
{
  int result;
  float v4; // xmm1_4

  result = a1;
  if ( a2 != nullptr && a1 != 0 )
  {
    if ( a3 > 21474.83 )
    {
      result = png_warning(a1, "Limiting gamma to 21474.83");
      a2[10] = 21474.83f;
      a2[63] = NAN;
      *((uint32_t *)a2 + 2) |= 1u;
    }
    else
    {
      v4 = a3;
      a2[10] = v4;
      *((uint32_t *)a2 + 2) |= 1u;
      *((uint32_t *)a2 + 63) = (int)(100000.0 * a3 + 0.5);
      if ( a3 == 0.0 )
        return png_warning(a1, "Setting gamma=0");
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_gAMA_fixed  (binary VA: 0xfae580)
// Original: png_set_gAMA_fixed
// ----------------------------------------------------------------------------
int png_set_gAMA_fixed(int a1, float *a2, int a3)
{
  int result;
  float v4; // xmm0_4

  result = a3;
  if ( a2 != nullptr && a1 != 0 )
  {
    if ( a3 < 0 )
    {
      png_warning(a1, "Setting negative gamma to zero");
      a2[10] = 0.0;
      a2[63] = 0.0;
      *((uint32_t *)a2 + 2) |= 1u;
    }
    else
    {
      *((uint32_t *)a2 + 2) |= 1u;
      *((uint32_t *)a2 + 63) = a3;
      v4 = (double)a3 * 0.00001;
      a2[10] = v4;
      if ( a3 != 0 )
        return result;
    }
    return png_warning(a1, "Setting gamma=0");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_hIST  (binary VA: 0xfae630)
// Original: png_set_hIST
// ----------------------------------------------------------------------------
void png_set_hIST(int a1, int a2, int a3)
{
  uint16_t *v3;
  int v4;

  if ( a2 != 0 && a1 != 0 )
  {
    if ( (uint16_t)(*(uint16_t *)(a2 + 20) - 1) > 0xFFu )
    {
      png_warning(a1, "Invalid palette size, hIST allocation skipped");
    }
    else
    {
      png_free_data(a1, (uint32_t *)a2, 8, 0);
      v3 = (uint16_t *)(png_malloc_warn(a1, 0x200u));
      *(uint32_t *)(a1 + 480) = (uint32_t)(uintptr_t)(v3);
      if ( v3 != nullptr )
      {
        v4 = 0;
        if ( *(uint16_t *)(a2 + 20) != 0 )
        {
          do
          {
            v3[v4] = *(uint16_t *)(a3 + 2 * v4);
            ++v4;
            v3 = *(uint16_t **)(a1 + 480);
          }
          while ( *(uint16_t *)(a2 + 20) > v4 );
        }
        *(uint32_t *)(a2 + 124) = (uint32_t)(uintptr_t)(v3);
        *(uint32_t *)(a2 + 8) |= 0x40u;
        *(uint32_t *)(a2 + 184) |= 8u;
      }
      else
      {
        png_warning(a1, "Insufficient memory for hIST chunk data");
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_IHDR  (binary VA: 0xfae720)
// Original: png_set_IHDR
// ----------------------------------------------------------------------------
int16_t png_set_IHDR(int a1, int a2, unsigned int a3, int a4, uint8_t a5, uint8_t a6, uint8_t a7, uint8_t a8, uint8_t a9)
{
  unsigned int v9;
  char v10;
  char v11;
  uint8_t v12;
  char v13;

  LOWORD(v9) = a1;
  if ( a2 != 0 && a1 != 0 )
  {
    *(uint32_t *)a2 = a3;
    *(uint8_t *)(a2 + 24) = a5;
    *(uint32_t *)(a2 + 4) = a4;
    *(uint8_t *)(a2 + 25) = a6;
    *(uint8_t *)(a2 + 26) = a8;
    *(uint8_t *)(a2 + 27) = a9;
    *(uint8_t *)(a2 + 28) = a7;
    png_check_IHDR(a1, a3, a4, a5, a6, a7, a8, a9);
    v10 = *(uint8_t *)(a2 + 25);
    if ( v10 == 3 )
    {
      *(uint8_t *)(a2 + 29) = 1;
      v12 = 1;
    }
    else
    {
      v11 = *(uint8_t *)(a2 + 25);
      if ( (v10 & 2) != 0 )
      {
        *(uint8_t *)(a2 + 29) = 3;
        v12 = 4;
        v13 = 3;
      }
      else
      {
        *(uint8_t *)(a2 + 29) = 1;
        v12 = 2;
        v13 = 1;
      }
      if ( (v11 & 4) != 0 )
        *(uint8_t *)(a2 + 29) = v12;
      else
        v12 = v13;
    }
    LOWORD(v9) = *(uint8_t *)(a2 + 24) * v12;
    *(uint8_t *)(a2 + 30) = v9;
    if ( a3 > 0x1FFFFF7E )
    {
      *(uint32_t *)(a2 + 12) = 0;
    }
    else
    {
      if ( (uint8_t)v9 <= 7u )
        v9 = (a3 * (uint8_t)v9 + 7) >> 3;
      else
        v9 = a3 * ((uint8_t)v9 >> 3);
      *(uint32_t *)(a2 + 12) = v9;
    }
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: png_set_oFFs  (binary VA: 0xfae870)
// Original: png_set_oFFs
// ----------------------------------------------------------------------------
int png_set_oFFs(int a1, int a2, int a3, int a4, char a5)
{
  int result;

  result = a2;
  if ( a2 != 0 && a1 != 0 )
  {
    *(uint32_t *)(a2 + 8) |= 0x100u;
    *(uint32_t *)(a2 + 100) = a3;
    *(uint32_t *)(a2 + 104) = a4;
    *(uint8_t *)(a2 + 108) = a5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_pCAL  (binary VA: 0xfae8a0)
// Original: png_set_pCAL
// ----------------------------------------------------------------------------
void png_set_pCAL(int a1, int a2, char *s, int a4, int a5, char a6, int a7, char *a8, int a9)
{
  size_t n;
  void *v10;
  size_t v11;
  void *v12;
  void *v13;
  int v14;
  size_t v15;
  void **v16;
  void *v17;
  void *src;
  size_t v19;

  if ( a2 != 0 && a1 != 0 )
  {
    n = strlen(s) + 1;
    v10 = png_malloc_warn(a1, n);
    *(uint32_t *)(a2 + 160) = (uint32_t)(uintptr_t)(v10);
    if ( v10 != nullptr )
    {
      memcpy(v10, s, n);
      *(uint32_t *)(a2 + 164) = a4;
      *(uint32_t *)(a2 + 168) = a5;
      *(uint8_t *)(a2 + 180) = a6;
      *(uint8_t *)(a2 + 181) = a7;
      v11 = strlen(a8) + 1;
      v12 = png_malloc_warn(a1, v11);
      *(uint32_t *)(a2 + 172) = (uint32_t)(uintptr_t)(v12);
      if ( v12 != nullptr )
      {
        memcpy(v12, a8, v11);
        v13 = png_malloc_warn(a1, 4 * a7 + 4);
        *(uint32_t *)(a2 + 176) = (uint32_t)(uintptr_t)(v13);
        if ( v13 != nullptr )
        {
          memset(v13, 0, 4 * a7 + 4);
          if ( a7 <= 0 )
          {
LABEL_12:
            *(uint32_t *)(a2 + 8) |= 0x400u;
            *(uint32_t *)(a2 + 184) |= 0x80u;
          }
          else
          {
            v14 = 0;
            while ( 1 )
            {
              v15 = strlen(*(const char **)(a9 + 4 * v14));
              v16 = (void **)(*(uint32_t *)(a2 + 176) + 4 * v14);
              v19 = v15 + 1;
              *v16 = png_malloc_warn(a1, v15 + 1);
              v17 = *(void **)(*(uint32_t *)(a2 + 176) + 4 * v14);
              if ( v17 == nullptr )
                break;
              src = *(void **)(a9 + 4 * v14++);
              memcpy(v17, src, v19);
              if ( v14 == a7 )
                goto LABEL_12;
            }
            png_warning(a1, "Insufficient memory for pCAL parameter");
          }
        }
        else
        {
          png_warning(a1, "Insufficient memory for pCAL params");
        }
      }
      else
      {
        png_warning(a1, "Insufficient memory for pCAL units");
      }
    }
    else
    {
      png_warning(a1, "Insufficient memory for pCAL purpose");
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_sCAL  (binary VA: 0xfaeac0)
// Original: png_set_sCAL
// ----------------------------------------------------------------------------
int png_set_sCAL(int a1, int a2, char a3, int64_t a4, int64_t a5)
{
  int result;

  result = a2;
  if ( a2 != 0 && a1 != 0 )
  {
    *(uint32_t *)(a2 + 8) |= 0x4000u;
    *(uint8_t *)(a2 + 220) = a3;
    *(uint64_t *)(a2 + 224) = a4;
    *(uint64_t *)(a2 + 232) = a5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_pHYs  (binary VA: 0xfaeb00)
// Original: png_set_pHYs
// ----------------------------------------------------------------------------
int png_set_pHYs(int a1, int a2, int a3, int a4, char a5)
{
  int result;

  result = a2;
  if ( a2 != 0 && a1 != 0 )
  {
    *(uint32_t *)(a2 + 8) |= 0x80u;
    *(uint32_t *)(a2 + 112) = a3;
    *(uint32_t *)(a2 + 116) = a4;
    *(uint8_t *)(a2 + 120) = a5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_PLTE  (binary VA: 0xfaeb30)
// Original: png_set_PLTE
// ----------------------------------------------------------------------------
void png_set_PLTE(int a1, int a2, void *src, unsigned int a4)
{
  void *dest;

  if ( a2 != 0 && a1 != 0 )
  {
    if ( a4 <= 0x100 )
    {
      png_free_data(a1, (uint32_t *)a2, 4096, 0);
      dest = png_calloc(a1, 0x300u);
      *(uint32_t *)(a1 + 256) = (uint32_t)(uintptr_t)(dest);
      memcpy(dest, src, 3 * a4);
      *(uint32_t *)(a2 + 16) = *(uint32_t *)(a1 + 256);
      *(uint16_t *)(a1 + 260) = a4;
      *(uint16_t *)(a2 + 20) = a4;
      *(uint32_t *)(a2 + 184) |= 0x1000u;
      *(uint32_t *)(a2 + 8) |= 8u;
    }
    else
    {
      if ( *(uint8_t *)(a2 + 25) == 3 )
        png_error(a1, (int)(uintptr_t)("Invalid palette length"));
      png_warning(a1, "Invalid palette length");
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_sBIT  (binary VA: 0xfaec10)
// Original: png_set_sBIT
// ----------------------------------------------------------------------------
int png_set_sBIT(int a1, int64_t a2)
{
  int result;
  char v3;

  result = a2;
  if ( (uint32_t)a2 != 0 && a1 != 0 )
  {
    *(uint32_t *)(a2 + 68) = *(uint32_t *)HIDWORD(a2);
    v3 = *(uint8_t *)(HIDWORD(a2) + 4);
    *(uint32_t *)(a2 + 8) |= 2u;
    *(uint8_t *)(a2 + 72) = v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_sRGB  (binary VA: 0xfaec40)
// Original: png_set_sRGB
// ----------------------------------------------------------------------------
int png_set_sRGB(int a1, int a2, char a3)
{
  int result;

  result = a2;
  if ( a2 != 0 && a1 != 0 )
  {
    *(uint32_t *)(a2 + 8) |= 0x800u;
    *(uint8_t *)(a2 + 44) = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_sRGB_gAMA_and_cHRM  (binary VA: 0xfaec70)
// Original: png_set_sRGB_gAMA_and_cHRM
// ----------------------------------------------------------------------------
int png_set_sRGB_gAMA_and_cHRM(int a1, float *a2, char a3)
{
  int result;

  if ( a2 != nullptr && a1 != 0 )
  {
    png_set_sRGB(a1, (int)(uintptr_t)(a2), a3);
    png_set_gAMA(a1, a2, 0.45454999804496765);
    png_set_gAMA_fixed(a1, a2, 45455);
    png_set_cHRM_fixed(a1, (int)(uintptr_t)(a2), 31270, 32900, 64000, 33000, 30000, 60000, 15000, 6000);
    return png_set_cHRM(
             a1,
             (int)(uintptr_t)(a2),
             0.3127000033855438,
             0.32899999618530273,
             0.6399999856948853,
             0.33000001311302185,
             0.30000001192092896,
             0.6000000238418579,
             0.15000000596046448,
             0.05999999865889549);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_iCCP  (binary VA: 0xfaedc0)
// Original: png_set_iCCP
// ----------------------------------------------------------------------------
void png_set_iCCP(int a1, int a2, char *s, char a4, void *src, size_t a6)
{
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  size_t n;

  if ( a2 != 0 && a1 != 0 && src != nullptr && s != nullptr )
  {
    n = strlen(s) + 1;
    v6 = png_malloc_warn(a1, n);
    v7 = v6;
    if ( v6 != nullptr )
    {
      memcpy(v6, s, n);
      v8 = png_malloc_warn(a1, a6);
      if ( v8 != nullptr )
      {
        v9 = v8;
        memcpy(v8, src, a6);
        png_free_data(a1, (uint32_t *)a2, 16, 0);
        *(uint32_t *)(a2 + 196) = (uint32_t)(uintptr_t)(v7);
        *(uint32_t *)(a2 + 204) = a6;
        *(uint8_t *)(a2 + 208) = a4;
        *(uint32_t *)(a2 + 200) = (uint32_t)(uintptr_t)(v9);
        *(uint32_t *)(a2 + 184) |= 0x10u;
        *(uint32_t *)(a2 + 8) |= 0x1000u;
      }
      else
      {
        png_free(a1, v7);
        png_warning(a1, "Insufficient memory to process iCCP profile");
      }
    }
    else
    {
      png_warning(a1, "Insufficient memory to process iCCP chunk");
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_text_2  (binary VA: 0xfaef20)
// Original: png_set_text_2
// ----------------------------------------------------------------------------
int png_set_text_2(int a1, uint32_t *a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v8;
  void *dest;
  void *v10;
  uint8_t *v11;
  int v12;
  const char *v13;
  uint8_t *v14;
  int *v15;
  size_t v16;
  void *v17;
  void *src;
  int v19;
  void *v20;
  void *v21;
  bool v22;
  size_t v23;
  size_t v24;
  size_t n;
  int v26;
  int v27;

  result = 0;
  if ( a2 != nullptr && a1 != 0 && a4 != 0 )
  {
    v5 = a2[13];
    v6 = a2[12] + a4;
    if ( v6 > v5 )
    {
      src = (void *)a2[14];
      if ( src != nullptr )
      {
        v19 = v6 + 8;
        a2[13] = v19;
        v20 = png_malloc_warn(a1, 28 * v19);
        a2[14] = (uint32_t)(uintptr_t)(v20);
        if ( v20 == nullptr )
        {
          png_free(a1, src);
          return 1;
        }
        memcpy(v20, src, 28 * v5);
        png_free(a1, src);
      }
      else
      {
        a2[13] = a4 + 8;
        a2[12] = 0;
        v21 = png_malloc_warn(a1, 28 * (a4 + 8));
        v22 = v21 == nullptr;
        a2[14] = (uint32_t)(uintptr_t)(v21);
        result = 1;
        if ( v22 )
          return result;
        a2[46] |= 0x4000u;
      }
    }
    if ( a4 > 0 )
    {
      v26 = 0;
      v8 = a2[12];
      do
      {
        v12 = a2[14];
        if ( *(uint32_t *)(a3 + 4) == 0 )
          goto LABEL_11;
        v23 = strlen(*(const char **)(a3 + 4));
        v27 = *(uint32_t *)a3;
        v24 = 0;
        n = 0;
        if ( *(int *)a3 > 0 )
        {
          if ( *(uint32_t *)(a3 + 20) != 0 )
            n = strlen(*(const char **)(a3 + 20));
          v13 = *(const char **)(a3 + 24);
          v24 = 0;
          if ( v13 != nullptr )
            v24 = strlen(v13);
        }
        v14 = *(uint8_t **)(a3 + 8);
        v15 = (int *)(v12 + 28 * v8);
        if ( v14 != nullptr && *v14 != 0 )
        {
          v16 = strlen(*(const char **)(a3 + 8));
          *v15 = v27;
        }
        else
        {
          if ( v27 <= 0 )
            *v15 = -1;
          else
            *v15 = 1;
          v16 = 0;
        }
        v17 = png_malloc_warn(a1, v16 + v24 + n + v23 + 4);
        v15[1] = (int)(uintptr_t)(v17);
        if ( v17 == nullptr )
          return 1;
        memcpy(v17, *(const void **)(a3 + 4), v23);
        *(uint8_t *)(v15[1] + v23) = 0;
        if ( *(int *)a3 > 0 )
        {
          dest = (void *)(v15[1] + v23 + 1);
          v15[5] = (int)(uintptr_t)(dest);
          memcpy(dest, *(const void **)(a3 + 20), n);
          *(uint8_t *)(v15[5] + n) = 0;
          v10 = (void *)(v15[5] + n + 1);
          v15[6] = (int)(uintptr_t)(v10);
          memcpy(v10, *(const void **)(a3 + 24), v24);
          *(uint8_t *)(v15[6] + v24) = 0;
          v11 = (uint8_t *)(v15[6] + v24 + 1);
          v15[2] = (int)(uintptr_t)(v11);
          if ( v16 == 0 )
            goto LABEL_8;
        }
        else
        {
          v11 = (uint8_t *)(v15[1] + v23 + 1);
          v15[5] = 0;
          v15[6] = 0;
          v15[2] = (int)(uintptr_t)(v11);
          if ( v16 == 0 )
          {
LABEL_8:
            v11[v16] = 0;
            if ( *v15 <= 0 )
              goto LABEL_25;
            goto LABEL_9;
          }
        }
        memcpy(v11, *(const void **)(a3 + 8), v16);
        *(uint8_t *)(v15[2] + v16) = 0;
        if ( *v15 <= 0 )
        {
LABEL_25:
          v15[3] = v16;
          v15[4] = 0;
          goto LABEL_10;
        }
LABEL_9:
        v15[3] = 0;
        v15[4] = v16;
LABEL_10:
        v8 = a2[12] + 1;
        a2[12] = v8;
LABEL_11:
        ++v26;
        a3 += 28;
      }
      while ( v26 != a4 );
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_text  (binary VA: 0xfaf290)
// Original: png_set_text
// ----------------------------------------------------------------------------
int png_set_text(int a1, uint32_t *a2, int a3, int a4)
{
  int result;

  result = png_set_text_2(a1, a2, a3, a4);
  if ( result != 0 )
    png_error(a1, (int)(uintptr_t)("Insufficient memory to store text"));
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_tIME  (binary VA: 0xfaf2f0)
// Original: png_set_tIME
// ----------------------------------------------------------------------------
uint32_t * png_set_tIME(int a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *result;

  result = a2;
  if ( a2 != nullptr && a1 != 0 && (*(uint8_t *)(a1 + 85) & 2) == 0 )
  {
    a2[15] = *a3;
    a2[16] = a3[1];
    a2[2] |= 0x200u;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_tRNS  (binary VA: 0xfaf330)
// Original: png_set_tRNS
// ----------------------------------------------------------------------------
void png_set_tRNS(int a1, int a2, void *src, size_t n, int a5)
{
  size_t v5;
  void *v6;
  int v7;
  char v8;
  int16_t v9;
  size_t v10;

  v5 = n;
  if ( a2 != 0 && a1 != 0 )
  {
    if ( src != nullptr )
    {
      png_free_data(a1, (uint32_t *)a2, 0x2000, 0);
      v6 = png_malloc(a1, 0x100u);
      *(uint32_t *)(a2 + 76) = (uint32_t)(uintptr_t)(v6);
      *(uint32_t *)(a1 + 372) = (uint32_t)(uintptr_t)(v6);
      v5 = n;
      if ( n - 1 <= 0xFF )
      {
        memcpy(*(void **)(a2 + 76), src, n);
        v5 = n;
      }
    }
    if ( a5 != 0 )
    {
      v7 = 1 << *(uint8_t *)(a2 + 24);
      v8 = *(uint8_t *)(a2 + 25);
      if ( v8 != 0 )
      {
        if ( v8 != 2
          || v7 >= *(uint16_t *)(a5 + 2)
          && v7 >= *(uint16_t *)(a5 + 4)
          && v7 >= *(uint16_t *)(a5 + 6) )
        {
LABEL_9:
          *(uint32_t *)(a2 + 80) = *(uint32_t *)a5;
          v9 = 1;
          if ( v5 != 0 )
            v9 = v5;
          *(uint32_t *)(a2 + 84) = *(uint32_t *)(a5 + 4);
          *(uint16_t *)(a2 + 88) = *(uint16_t *)(a5 + 8);
          *(uint16_t *)(a2 + 22) = v9;
          goto LABEL_12;
        }
      }
      else if ( v7 >= *(uint16_t *)(a5 + 8) )
      {
        goto LABEL_9;
      }
      v10 = v5;
      png_warning(a1, "tRNS chunk has out-of-range samples for bit_depth");
      v5 = v10;
      goto LABEL_9;
    }
    *(uint16_t *)(a2 + 22) = v5;
    if ( v5 != 0 )
    {
LABEL_12:
      *(uint32_t *)(a2 + 8) |= 0x10u;
      *(uint32_t *)(a2 + 184) |= 0x2000u;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_sPLT  (binary VA: 0xfaf4b0)
// Original: png_set_sPLT
// ----------------------------------------------------------------------------
void png_set_sPLT(int a1, int a2, int a3, int a4)
{
  int i;
  void *v6;
  char *v7;
  void *v8;
  size_t n;
  char *dest;

  if ( a2 != 0 && a1 != 0 )
  {
    dest = (char *)png_malloc_warn(a1, 16 * (*(uint32_t *)(a2 + 216) + a4));
    if ( dest != nullptr )
    {
      memcpy(dest, *(const void **)(a2 + 212), 16 * *(uint32_t *)(a2 + 216));
      png_free(a1, *(void **)(a2 + 212));
      *(uint32_t *)(a2 + 212) = 0;
      if ( a4 > 0 )
      {
        for ( i = 0; i != a4; ++i )
        {
          while ( 1 )
          {
            v7 = &dest[16 * *(uint32_t *)(a2 + 216) + 16 * i];
            n = strlen(*(const char **)a3) + 1;
            v8 = png_malloc_warn(a1, n);
            *(uint32_t *)v7 = (uint32_t)(uintptr_t)(v8);
            if ( v8 != nullptr )
              break;
            ++i;
            a3 += 16;
            png_warning(a1, "Out of memory while processing sPLT chunk");
            if ( i == a4 )
              goto LABEL_12;
          }
          memcpy(v8, *(const void **)a3, n);
          v6 = png_malloc_warn(a1, 10 * *(uint32_t *)(a3 + 12));
          *((uint32_t *)v7 + 2) = (uint32_t)(uintptr_t)(v6);
          if ( v6 != nullptr )
          {
            memcpy(v6, *(const void **)(a3 + 8), 10 * *(uint32_t *)(a3 + 12));
            *((uint32_t *)v7 + 3) = *(uint32_t *)(a3 + 12);
            v7[4] = *(uint8_t *)(a3 + 4);
          }
          else
          {
            png_warning(a1, "Out of memory while processing sPLT chunk");
            png_free(a1, *(void **)v7);
            *(uint32_t *)v7 = 0;
          }
          a3 += 16;
        }
      }
LABEL_12:
      *(uint32_t *)(a2 + 212) = (uint32_t)(uintptr_t)(dest);
      *(uint32_t *)(a2 + 216) += a4;
      *(uint32_t *)(a2 + 8) |= 0x2000u;
      *(uint32_t *)(a2 + 184) |= 0x20u;
    }
    else
    {
      png_warning(a1, "No memory for sPLT palettes");
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_unknown_chunks  (binary VA: 0xfaf6e0)
// Original: png_set_unknown_chunks
// ----------------------------------------------------------------------------
void png_set_unknown_chunks(int a1, int a2, uint32_t *a3, int a4)
{
  uint32_t *v4;
  int v5;
  int v7;
  char *v8;
  size_t v9;
  void *v10;
  void *src;
  size_t n;
  int v13;
  char *dest;

  if ( a2 == 0 || a1 == 0 || a4 == 0 )
    return;
  dest = (char *)png_malloc_warn(a1, 20 * (*(uint32_t *)(a2 + 192) + a4));
  if ( dest == nullptr )
  {
    png_warning(a1, "Out of memory while processing unknown chunk");
    return;
  }
  memcpy(dest, *(const void **)(a2 + 188), 20 * *(uint32_t *)(a2 + 192));
  png_free(a1, *(void **)(a2 + 188));
  v4 = (uint32_t *)a2;
  *(uint32_t *)(a2 + 188) = 0;
  v5 = a1;
  if ( a4 <= 0 )
    goto LABEL_14;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = &dest[20 * *(uint32_t *)(a2 + 192) + 20 * v7];
      *(uint32_t *)v8 = *a3;
      v8[4] = 0;
      *((uint32_t *)v8 + 3) = a3[3];
      v8[16] = *(uint32_t *)(v5 + 84);
      v9 = a3[3];
      if ( v9 != 0 )
        break;
      *((uint32_t *)v8 + 2) = 0;
LABEL_9:
      ++v7;
      a3 += 5;
      if ( v7 == a4 )
        goto LABEL_13;
    }
    v13 = v5;
    v10 = png_malloc_warn(v5, v9);
    *((uint32_t *)v8 + 2) = (uint32_t)(uintptr_t)(v10);
    if ( v10 == nullptr )
    {
      png_warning(v13, "Out of memory while processing unknown chunk");
      *((uint32_t *)v8 + 3) = 0;
      v5 = v13;
      goto LABEL_9;
    }
    n = a3[3];
    src = (void *)a3[2];
    ++v7;
    a3 += 5;
    memcpy(v10, src, n);
    v5 = v13;
  }
  while ( v7 != a4 );
LABEL_13:
  v4 = (uint32_t *)a2;
LABEL_14:
  v4[46] |= 0x200u;
  v4[47] = (uint32_t)(uintptr_t)(dest);
  v4[48] += a4;
}

// ----------------------------------------------------------------------------
// Function: png_set_unknown_chunk_location  (binary VA: 0xfaf8c0)
// Original: png_set_unknown_chunk_location
// ----------------------------------------------------------------------------
int png_set_unknown_chunk_location(int a1, int64_t a2, int a3)
{
  int result;

  result = a2;
  if ( (uint32_t)a2 != 0 && a1 != 0 && a2 >= 0 && SHIDWORD(a2) < *(uint32_t *)(a2 + 192) )
  {
    *(uint8_t *)(*(uint32_t *)(a2 + 188) + 20 * HIDWORD(a2) + 16) = a3;
    return a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_permit_mng_features  (binary VA: 0xfaf900)
// Original: png_permit_mng_features
// ----------------------------------------------------------------------------
int png_permit_mng_features(int a1, char a2)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    result = a2 & 5;
    *(uint32_t *)(a1 + 540) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_keep_unknown_chunks  (binary VA: 0xfaf920)
// Original: png_set_keep_unknown_chunks
// ----------------------------------------------------------------------------
void png_set_keep_unknown_chunks(int a1, int a2, void *a3, int a4)
{
  char *dest;
  const void *src;
  int v6;
  char *v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  size_t n;
  int v13;
  int v14;

  if ( a1 != 0 )
  {
    if ( a4 == 0 )
    {
      if ( (unsigned int)(a2 - 2) <= 1 )
      {
        v10 = *(uint32_t *)(a1 + 88);
        v9 = v10;
        BYTE1(v9) = BYTE1(v10) | 0x80;
        *(uint32_t *)(a1 + 88) = v9;
        if ( a2 == 3 )
        {
          *(uint32_t *)(a1 + 88) = v10 | 0x18000;
          return;
        }
      }
      else
      {
        v9 = *(uint32_t *)(a1 + 88);
        BYTE1(v9) &= ~0x80u;
      }
      *(uint32_t *)(a1 + 88) = v9 & 0xFFFEFFFF;
      return;
    }
    if ( a3 != nullptr )
    {
      v11 = *(uint32_t *)(a1 + 524);
      v14 = a4 + v11;
      dest = (char *)png_malloc(a1, 5 * (a4 + v11));
      src = *(const void **)(a1 + 528);
      v6 = 5 * v11;
      if ( src != nullptr )
      {
        n = 5 * v11;
        memcpy(dest, src, n);
        png_free(a1, *(void **)(a1 + 528));
        *(uint32_t *)(a1 + 528) = 0;
        v6 = n;
      }
      v13 = v6;
      memcpy(&dest[v6], a3, 5 * a4);
      if ( a4 > 0 )
      {
        v7 = &dest[v13 + 4];
        v8 = &v7[5 * a4];
        do
        {
          *v7 = a2;
          v7 += 5;
        }
        while ( v7 != v8 );
      }
      *(uint32_t *)(a1 + 528) = (uint32_t)(uintptr_t)(dest);
      *(uint32_t *)(a1 + 524) = v14;
      *(uint32_t *)(a1 + 512) |= 0x400u;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_read_user_chunk_fn  (binary VA: 0xfafa80)
// Original: png_set_read_user_chunk_fn
// ----------------------------------------------------------------------------
int png_set_read_user_chunk_fn(int a1, int a2, int a3)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 520) = a3;
    *(uint32_t *)(a1 + 516) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_rows  (binary VA: 0xfafaa0)
// Original: png_set_rows
// ----------------------------------------------------------------------------
void png_set_rows(int a1, uint32_t *a2, int a3)
{
  int v3;

  if ( a2 != nullptr && a1 != 0 )
  {
    v3 = a2[62];
    if ( v3 != 0 && v3 != a3 )
      png_free_data(a1, a2, 64, 0);
    a2[62] = a3;
    if ( a3 != 0 )
      a2[2] |= 0x8000u;
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_compression_buffer_size  (binary VA: 0xfafb20)
// Original: png_set_compression_buffer_size
// ----------------------------------------------------------------------------
void png_set_compression_buffer_size(int a1, size_t a2)
{
  void *v2;

  if ( a1 != 0 )
  {
    png_free(a1, *(void **)(a1 + 152));
    *(uint32_t *)(a1 + 156) = a2;
    v2 = png_malloc(a1, a2);
    *(uint32_t *)(a1 + 152) = (uint32_t)(uintptr_t)(v2);
    *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(v2);
    *(uint32_t *)(a1 + 112) = *(uint32_t *)(a1 + 156);
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_invalid  (binary VA: 0xfafb90)
// Original: png_set_invalid
// ----------------------------------------------------------------------------
int png_set_invalid(int a1, int a2, int a3)
{
  int result;

  result = a2;
  if ( a2 != 0 && a1 != 0 )
    *(uint32_t *)(a2 + 8) &= ~a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_user_limits  (binary VA: 0xfafbb0)
// Original: png_set_user_limits
// ----------------------------------------------------------------------------
int png_set_user_limits(int a1, int a2, int a3)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 584) = a2;
    *(uint32_t *)(a1 + 588) = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_chunk_cache_max  (binary VA: 0xfafbd0)
// Original: png_set_chunk_cache_max
// ----------------------------------------------------------------------------
int png_set_chunk_cache_max(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 592) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_chunk_malloc_max  (binary VA: 0xfafbf0)
// Original: png_set_chunk_malloc_max
// ----------------------------------------------------------------------------
int png_set_chunk_malloc_max(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 200) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_bgr  (binary VA: 0xfafc10)
// Original: png_set_bgr
// ----------------------------------------------------------------------------
int png_set_bgr(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 92) |= 1u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_swap  (binary VA: 0xfafc20)
// Original: png_set_swap
// ----------------------------------------------------------------------------
int png_set_swap(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 && *(uint8_t *)(a1 + 275) == 16 )
    *(uint32_t *)(a1 + 92) |= 0x10u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_packing  (binary VA: 0xfafc40)
// Original: png_set_packing
// ----------------------------------------------------------------------------
int png_set_packing(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 && *(uint8_t *)(a1 + 275) <= 7u )
  {
    *(uint32_t *)(a1 + 92) |= 4u;
    *(uint8_t *)(a1 + 276) = 8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_packswap  (binary VA: 0xfafc60)
// Original: png_set_packswap
// ----------------------------------------------------------------------------
int png_set_packswap(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 && *(uint8_t *)(a1 + 275) <= 7u )
    *(uint32_t *)(a1 + 92) |= 0x10000u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_shift  (binary VA: 0xfafc80)
// Original: png_set_shift
// ----------------------------------------------------------------------------
int png_set_shift(int64_t a1)
{
  int result;

  result = a1;
  if ( (uint32_t)a1 != 0 )
  {
    *(uint32_t *)(a1 + 92) |= 8u;
    *(uint32_t *)(a1 + 365) = *(uint32_t *)HIDWORD(a1);
    *(uint8_t *)(a1 + 369) = *(uint8_t *)(HIDWORD(a1) + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_interlace_handling  (binary VA: 0xfafcb0)
// Original: png_set_interlace_handling
// ----------------------------------------------------------------------------
char png_set_interlace_handling(int a1)
{
  char result;

  result = 1;
  if ( a1 != 0 && *(uint8_t *)(a1 + 271) != 0 )
  {
    *(uint32_t *)(a1 + 92) |= 2u;
    return 7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_filler  (binary VA: 0xfafcd0)
// Original: png_set_filler
// ----------------------------------------------------------------------------
int png_set_filler(int a1, int16_t a2, int a3)
{
  int result;
  char v4;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 92) |= 0x8000u;
    *(uint16_t *)(a1 + 282) = a2;
    if ( a3 == 1 )
      *(uint32_t *)(a1 + 88) |= 0x80u;
    else
      *(uint32_t *)(a1 + 88) &= ~0x80u;
    v4 = *(uint8_t *)(a1 + 274);
    if ( v4 == 2 )
    {
      *(uint8_t *)(a1 + 279) = 4;
    }
    else if ( v4 == 0 && *(uint8_t *)(a1 + 275) > 7u )
    {
      *(uint8_t *)(a1 + 279) = 2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_add_alpha  (binary VA: 0xfafd40)
// Original: png_set_add_alpha
// ----------------------------------------------------------------------------
int png_set_add_alpha(int a1, int16_t a2, int a3)
{
  int result;

  if ( a1 != 0 )
  {
    result = png_set_filler(a1, a2, a3);
    *(uint32_t *)(a1 + 92) |= 0x1000000u;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_swap_alpha  (binary VA: 0xfafd90)
// Original: png_set_swap_alpha
// ----------------------------------------------------------------------------
int png_set_swap_alpha(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 92) |= 0x20000u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_invert_alpha  (binary VA: 0xfafdb0)
// Original: png_set_invert_alpha
// ----------------------------------------------------------------------------
int png_set_invert_alpha(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 92) |= 0x80000u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_invert_mono  (binary VA: 0xfafdd0)
// Original: png_set_invert_mono
// ----------------------------------------------------------------------------
int png_set_invert_mono(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 92) |= 0x20u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_invert  (binary VA: 0xfafde0)
// Original: png_do_invert
// ----------------------------------------------------------------------------
uint8_t * png_do_invert(int a1, int a2)
{
  uint8_t *result;
  uint8_t *v3;
  unsigned int v4;
  unsigned int v5;
  uint8_t *v6;
  int v7;
  unsigned int v8;
  int16_t v9;
  unsigned int v10;
  unsigned int v11;
  uint8_t *v12;
  int v13;
  unsigned int v14;
  uint8_t *v15;

  result = (uint8_t *)a1;
  v3 = (uint8_t *)a2;
  if ( *(uint8_t *)(a1 + 8) != 0 )
  {
    v9 = *(uint16_t *)(a1 + 8);
    if ( v9 == 2052 )
    {
      v11 = *(uint32_t *)(a1 + 4);
      if ( v11 != 0 )
      {
        for ( result = nullptr; (unsigned int)(uintptr_t)(result) < v11; result += 2 )
          result[a2] = ~result[a2];
      }
    }
    else if ( v9 == 4100 )
    {
      v10 = *(uint32_t *)(a1 + 4);
      if ( v10 != 0 )
      {
        result = nullptr;
        do
        {
          result += 4;
          *v3 = ~*v3;
          v3[1] = ~v3[1];
          v3 += 4;
        }
        while ( v10 > (unsigned int)(uintptr_t)(result) );
      }
    }
  }
  else
  {
    result = *(uint8_t **)(a1 + 4);
    v15 = result;
    if ( result != nullptr )
    {
      v4 = -a2 & 0xF;
      if ( v4 > (unsigned int)(uintptr_t)(result) )
        v4 = *(uint32_t *)(a1 + 4);
      v5 = 0;
      result = (uint8_t *)a2;
      if ( v4 == 0 )
        goto LABEL_8;
      do
      {
        ++v5;
        *result = ~*result;
        ++result;
      }
      while ( v4 > v5 );
      if ( v15 != (uint8_t *)v4 )
      {
LABEL_8:
        v12 = &v15[-v4];
        v14 = (unsigned int)(uintptr_t)(&v15[-v4]) >> 4;
        v13 = 16 * v14;
        if ( 16 * v14 == 0 )
          goto LABEL_12;
        v6 = (uint8_t *)(v4 + a2);
        v7 = 0;
        v8 = 0;
        do
        {
          ++v8;
          *(__m128i *)&v6[v7] = _mm_xor_si128(*(__m128i *)&v6[v7], g4_m128_from<__m128i>(-1LL));
          v7 += 16;
        }
        while ( v8 < v14 );
        result += v13;
        v5 += v13;
        if ( v12 != (uint8_t *)v13 )
        {
LABEL_12:
          result -= v5;
          do
          {
            result[v5] = ~result[v5];
            ++v5;
          }
          while ( (unsigned int)(uintptr_t)(v15) > v5 );
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_swap  (binary VA: 0xfaff10)
// Original: png_do_swap
// ----------------------------------------------------------------------------
__m128i * png_do_swap(__m128i *a1, __m128i *a2)
{
  __m128i *result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  int8_t v14;

  result = a1;
  if (g4_m128_lane<int8_t>(*(a1), 9) == 16 )
  {
    v3 =g4_m128_lane<int32_t>(*(a1), 0) *g4_m128_lane<uint8_t>(*(a1), 10);
    if ( v3 != 0 )
    {
      result = a2;
      v4 = 16 * (v3 >> 4);
      if ( v3 <= 0xF || v4 == 0 )
      {
        v4 = 0;
        do
        {
LABEL_9:
          ++v4;
          v14 =g4_m128_lane<int8_t>(*(result), 0);
g4_m128_lane<int8_t>(*(result), 0) =g4_m128_lane<int8_t>(*(result), 1);
g4_m128_lane<int8_t>(*(result), 1) = v14;
          result = (__m128i *)((char *)result + 2);
        }
        while ( v3 > v4 );
        return result;
      }
      v5 = 0;
      do
      {
        v6 = result[1];
        v7 = _mm_unpackhi_epi8(*result, v6);
        v8 = _mm_unpacklo_epi8(*result, v6);
        v9 = _mm_unpacklo_epi8(v8, v7);
        v10 = _mm_unpackhi_epi8(v8, v7);
        v11 = _mm_unpackhi_epi8(v9, v10);
        v12 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(*result, v6), v7), v10), v11);
        v13 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v9, v10), v11);
        ++v5;
        *result = _mm_unpacklo_epi8(v12, v13);
        result[1] = _mm_unpackhi_epi8(v12, v13);
        result += 2;
      }
      while ( v3 >> 4 > v5 );
      result = &a2[2 * (v3 >> 4)];
      if ( v4 != v3 )
        goto LABEL_9;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_packswap  (binary VA: 0xfb0010)
// Original: png_do_packswap
// ----------------------------------------------------------------------------
uint8_t * png_do_packswap(int a1, uint8_t *a2)
{
  uint8_t *result;
  uint8_t v3;
  uint8_t *v4;
  uint8_t *v5;

  result = a2;
  v3 = *(uint8_t *)(a1 + 9);
  if ( v3 <= 7u )
  {
    if ( v3 == 1 )
    {
      v4 = (uint8_t *)(&unk_1CBDB40);
    }
    else if ( v3 == 2 )
    {
      v4 = (uint8_t *)(&unk_1CBDC40);
    }
    else
    {
      v4 = (uint8_t *)(&unk_1CBDD40);
      if ( v3 != 4 )
        return result;
    }
    v5 = &a2[*(uint32_t *)(a1 + 4)];
    if ( a2 < v5 )
    {
      do
      {
        *result = v4[(uint8_t)*result];
        ++result;
      }
      while ( result != v5 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_strip_filler  (binary VA: 0xfb0080)
// Original: png_do_strip_filler
// ----------------------------------------------------------------------------
int png_do_strip_filler(int a1, unsigned int a2, int a3)
{
  int result;
  char v4;
  uint8_t *v5;
  uint8_t *v6;
  int v7;
  unsigned int v8;
  char v9;
  unsigned int v10;
  unsigned int v11;
  __m128i *v12;
  unsigned int v13;
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
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  uint8_t *v44;
  char v45;
  uint8_t *v46;
  uint8_t *v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
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
  unsigned int v79;
  char v80;
  uint8_t *v81;
  int v82;
  uint8_t *v83;
  char v84;
  unsigned int v85;
  unsigned int v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  uint8_t *v100;
  uint8_t *v101;
  char v102;
  int v103;
  unsigned int v104;
  __m128i v105;
  __m128i v106;
  __m128i v107;
  __m128i v108;
  __m128i v109;
  __m128i v110;
  __m128i v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  unsigned int v115;
  unsigned int v116;
  uint8_t *v117;
  uint8_t *v118;
  char v119;
  __m128i v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;
  unsigned int v124;
  unsigned int v125;
  int v126;
  __m128i v127;
  unsigned int v128;
  __m128i v129;
  __m128i v130;
  __m128i v131;
  __m128i v132;
  __m128i v133;
  __m128i v134;
  unsigned int v135;
  __m128i v136;
  __m128i v137;
  int v138;
  int v139;
  __m128i v140;
  int v141;
  __m128i v142;
  unsigned int v143;
  int v144;
  unsigned int v145;
  unsigned int v146;

  result = a1;
  v4 = *(uint8_t *)(a1 + 8);
  v128 = *(uint32_t *)a1;
  if ( v4 == 2 )
  {
    v126 = a3 & 0x400000;
  }
  else
  {
    v126 = a3 & 0x400000;
    if ( v4 != 6 )
      goto LABEL_3;
    if ( (a3 & 0x400000) == 0 )
      return result;
  }
  if ( *(uint8_t *)(a1 + 10) == 4 )
  {
    if ( *(uint8_t *)(a1 + 9) != 8 )
    {
      if ( (a3 & 0x80) != 0 )
      {
        if ( v128 <= 1 )
        {
LABEL_19:
          *(uint8_t *)(result + 11) = 48;
          *(uint32_t *)(result + 4) = 6 * v128;
LABEL_20:
          *(uint8_t *)(result + 10) = 3;
          goto LABEL_5;
        }
        v5 = (uint8_t *)(a2 + 8);
        v6 = (uint8_t *)(a2 + 6);
        v7 = 1;
        v8 = *(uint32_t *)a1;
        v139 = a1;
        do
        {
          ++v7;
          *v6 = *v5;
          v6[1] = v5[1];
          v6[2] = v5[2];
          v6[3] = v5[3];
          v6[4] = v5[4];
          v9 = v5[5];
          v5 += 8;
          v6[5] = v9;
          v6 += 6;
        }
        while ( v7 != v128 );
      }
      else
      {
        if ( v128 == 0 )
          goto LABEL_19;
        v81 = (uint8_t *)a2;
        v82 = 0;
        v83 = (uint8_t *)a2;
        v8 = *(uint32_t *)a1;
        v139 = a1;
        do
        {
          ++v82;
          *v81 = v83[2];
          v81[1] = v83[3];
          v81[2] = v83[4];
          v81[3] = v83[5];
          v81[4] = v83[6];
          v84 = v83[7];
          v83 += 8;
          v81[5] = v84;
          v81 += 6;
        }
        while ( v82 != v128 );
      }
      v128 = v8;
      result = v139;
      goto LABEL_19;
    }
    if ( (a3 & 0x80) != 0 )
    {
      if ( v128 <= 1 )
        goto LABEL_65;
      v117 = (uint8_t *)(a2 + 3);
      v118 = (uint8_t *)(a2 + 4);
      v145 = *(uint32_t *)a1;
      do
      {
        *v117 = *v118;
        v117[1] = v118[1];
        v119 = v118[2];
        v118 += 4;
        v117[2] = v119;
        v117 += 3;
      }
      while ( (uint8_t *)(a2 + 3 * v128) != v117 );
    }
    else
    {
      if ( v128 == 0 )
      {
LABEL_65:
        *(uint8_t *)(a1 + 11) = 24;
        *(uint32_t *)(a1 + 4) = 3 * v128;
        goto LABEL_20;
      }
      v145 = *(uint32_t *)a1;
      v100 = (uint8_t *)a2;
      v101 = (uint8_t *)a2;
      do
      {
        *v100 = v101[1];
        v100[1] = v101[2];
        v102 = v101[3];
        v101 += 4;
        v100[2] = v102;
        v100 += 3;
      }
      while ( v100 != (uint8_t *)(3 * v128 + a2) );
    }
    v128 = v145;
    goto LABEL_65;
  }
LABEL_3:
  if ( v4 != 0 )
  {
    if ( v4 != 4 )
      goto LABEL_5;
    if ( v126 == 0 )
      return result;
  }
  if ( *(uint8_t *)(a1 + 10) != 2 )
    goto LABEL_5;
  if ( *(uint8_t *)(a1 + 9) == 8 )
  {
    if ( (a3 & 0x80) != 0 )
    {
      if ( v128 == 0 )
        goto LABEL_59;
      v146 = 16 * ((v128 - 1) >> 4);
      if ( ((v128 > 0xF) & ((a2 > a2 + 2 * v128) | __CFADD__(v128, a2))) != 0 && v146 != 0 )
      {
        v103 = 0;
        v104 = 0;
        do
        {
          v105 = *(__m128i *)(a2 + 2 * v103 + 16);
          v106 = *(__m128i *)(a2 + 2 * v103);
          v107 = _mm_unpacklo_epi8(v106, v105);
          v108 = _mm_unpackhi_epi8(v106, v105);
          v109 = v107;
          v110 = _mm_unpacklo_epi8(v107, v108);
          v111 = _mm_unpackhi_epi8(v109, v108);
          ++v104;
          *(__m128i *)(a2 + v103) = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v110, v111), _mm_unpackhi_epi8(v110, v111));
          v103 += 16;
        }
        while ( (v128 - 1) >> 4 > v104 );
        v112 = 16 * ((v128 - 1) >> 4);
        v113 = a2 + 32 * ((v128 - 1) >> 4);
        v114 = v146 + a2;
        if ( v146 == v128 )
          goto LABEL_59;
      }
      else
      {
        v114 = a2;
        v113 = a2;
        v112 = 0;
      }
      v144 = a1;
      v115 = v113 - 2 * v112;
      v116 = v114 - v112;
      v97 = v128;
      do
      {
        *(uint8_t *)(v116 + v112) = *(uint8_t *)(v115 + 2 * v112);
        ++v112;
      }
      while ( v128 > v112 );
    }
    else
    {
      if ( v128 == 0 )
      {
LABEL_59:
        *(uint8_t *)(result + 11) = 8;
        *(uint32_t *)(result + 4) = v128;
        goto LABEL_35;
      }
      v143 = (v128 - 1) >> 4;
      v138 = 16 * v143;
      if ( 16 * v143 != 0 && (a2 > a2 + 1 + 2 * v128 || a2 + 1 > v128 + a2) && v128 > 0xF )
      {
        v85 = a2;
        v86 = 0;
        do
        {
          v87 = *(__m128i *)(v85 + 17);
          v88 = *(__m128i *)(v85 + 1);
          v89 = _mm_unpacklo_epi8(v88, v87);
          v90 = _mm_unpackhi_epi8(v88, v87);
          v91 = v89;
          v92 = _mm_unpacklo_epi8(v89, v90);
          v93 = _mm_unpackhi_epi8(v91, v90);
          v94 = v86++;
          *(__m128i *)(a2 + 16 * v94) = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v92, v93), _mm_unpackhi_epi8(v92, v93));
          v85 += 32;
        }
        while ( v143 > v86 );
        v95 = 16 * v143;
        result = a1;
        v96 = a2 + 32 * v143;
        v135 = v138 + a2;
        if ( v128 == v138 )
          goto LABEL_59;
      }
      else
      {
        v135 = a2;
        v96 = a2;
        v95 = 0;
      }
      v97 = v128;
      v144 = result;
      v98 = v96 - 2 * v95;
      v99 = v135 - v95;
      do
      {
        *(uint8_t *)(v99 + v95) = *(uint8_t *)(v98 + 2 * v95 + 1);
        ++v95;
      }
      while ( v128 > v95 );
    }
    v128 = v97;
    result = v144;
    goto LABEL_59;
  }
  if ( (a3 & 0x80) != 0 )
  {
    if ( v128 <= 1 )
      goto LABEL_34;
    v46 = (uint8_t *)(a2 + 4);
    v47 = (uint8_t *)(a2 + 2);
    v125 = v128 - 1;
    v121 = 16 * ((v128 - 2) >> 4);
    if ( v121 != 0 && ((unsigned int)(uintptr_t)(v46) > a2 + 2 * v128 || (unsigned int)(uintptr_t)(v47) > a2 + 4 * v128) && v128 - 1 > 0xF )
    {
      v48 = a2;
      v123 = *(uint32_t *)a1;
      v49 = 0;
      v50 = (v128 - 2) >> 4;
      v51 = a2;
      do
      {
        v52 = *(__m128i *)(v48 + 4);
        v53 = *(__m128i *)(v48 + 20);
        v120 = *(__m128i *)(v48 + 52);
        v54 = _mm_unpackhi_epi8(v52, v53);
        v55 = _mm_unpacklo_epi8(v52, v53);
        v56 = _mm_unpacklo_epi8(v55, v54);
        v57 = *(__m128i *)(v48 + 36);
        v58 = _mm_unpackhi_epi8(v55, v54);
        v59 = _mm_unpackhi_epi8(v56, v58);
        v60 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v56, v58), v59);
        v134 = v59;
        v61 = _mm_unpacklo_epi8(v57, v120);
        v142 = _mm_unpackhi_epi8(v57, v120);
        v62 = _mm_unpackhi_epi8(v61, v142);
        v63 = _mm_unpacklo_epi8(v61, v142);
        v137 = v62;
        v64 = _mm_unpackhi_epi8(v63, v62);
        v65 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v63, v137), v64);
        v132 = v64;
        v130 = _mm_unpackhi_epi8(v60, v65);
        v66 = _mm_unpacklo_epi8(v60, v65);
        v67 = _mm_unpacklo_epi8(v66, v130);
        v68 = _mm_unpackhi_epi8(v66, v130);
        v69 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v52, v53), v54), v58), v134);
        v70 = _mm_unpackhi_epi8(v67, v68);
        v71 = _mm_unpacklo_epi8(v67, v68);
        v72 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v57, v120), v142), v137), v132);
        v73 = _mm_unpackhi_epi8(v69, v72);
        v74 = _mm_unpacklo_epi8(v71, v70);
        v75 = _mm_unpacklo_epi8(v69, v72);
        v76 = _mm_unpacklo_epi8(v75, v73);
        v77 = _mm_unpackhi_epi8(v75, v73);
        v78 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v76, v77), _mm_unpackhi_epi8(v76, v77));
        ++v49;
        *(__m128i *)(v51 + 2) = _mm_unpacklo_epi8(v74, v78);
        *(__m128i *)(v51 + 18) = _mm_unpackhi_epi8(v74, v78);
        v51 += 32;
        v48 += 64;
      }
      while ( v49 < v50 );
      v128 = v123;
      v46 = (uint8_t *)(a2 + 4 + 4 * v121);
      v47 = (uint8_t *)(a2 + 2 + 2 * v121);
      v79 = v121 + 1;
      if ( v125 == v121 )
        goto LABEL_34;
      v42 = v123;
      v141 = a1;
    }
    else
    {
      v79 = 1;
      v42 = *(uint32_t *)a1;
      v141 = a1;
    }
    do
    {
      ++v79;
      *v47 = *v46;
      v80 = v46[1];
      v46 += 4;
      v47[1] = v80;
      v47 += 2;
    }
    while ( v42 > v79 );
    goto LABEL_33;
  }
  if ( v128 != 0 )
  {
    if ( 16 * ((v128 - 1) >> 4) != 0 && (a2 + 2 > a2 + 2 * v128 || a2 > a2 + 2 + 4 * v128) && v128 > 0xF )
    {
      v10 = a2;
      v124 = *(uint32_t *)a1;
      v122 = 16 * ((v128 - 1) >> 4);
      v11 = 0;
      v12 = (__m128i *)a2;
      v13 = (v128 - 1) >> 4;
      do
      {
        v14 = *(__m128i *)(v10 + 2);
        v15 = *(__m128i *)(v10 + 18);
        v133 = *(__m128i *)(v10 + 50);
        v16 = _mm_unpackhi_epi8(v14, v15);
        v17 = _mm_unpacklo_epi8(v14, v15);
        v18 = _mm_unpacklo_epi8(v17, v16);
        v19 = *(__m128i *)(v10 + 34);
        v20 = _mm_unpackhi_epi8(v17, v16);
        v21 = _mm_unpackhi_epi8(v18, v20);
        v22 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v18, v20), v21);
        v131 = v21;
        v23 = _mm_unpacklo_epi8(v19, v133);
        v140 = _mm_unpackhi_epi8(v19, v133);
        v24 = _mm_unpackhi_epi8(v23, v140);
        v25 = _mm_unpacklo_epi8(v23, v140);
        v136 = v24;
        v26 = _mm_unpackhi_epi8(v25, v24);
        v27 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v25, v136), v26);
        v129 = v26;
        v127 = _mm_unpackhi_epi8(v22, v27);
        v28 = _mm_unpacklo_epi8(v22, v27);
        v29 = _mm_unpacklo_epi8(v28, v127);
        v30 = _mm_unpackhi_epi8(v28, v127);
        v31 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v14, v15), v16), v20), v131);
        v32 = _mm_unpackhi_epi8(v29, v30);
        v33 = _mm_unpacklo_epi8(v29, v30);
        v34 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v19, v133), v140), v136), v129);
        v35 = _mm_unpackhi_epi8(v31, v34);
        v36 = _mm_unpacklo_epi8(v33, v32);
        v37 = _mm_unpacklo_epi8(v31, v34);
        v38 = _mm_unpacklo_epi8(v37, v35);
        v39 = _mm_unpackhi_epi8(v37, v35);
        v40 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v38, v39), _mm_unpackhi_epi8(v38, v39));
        ++v11;
        *v12 = _mm_unpacklo_epi8(v36, v40);
        v12[1] = _mm_unpackhi_epi8(v36, v40);
        v12 += 2;
        v10 += 64;
      }
      while ( v11 < v13 );
      v41 = v122;
      v42 = v124;
      v128 = v124;
      v43 = a2 + 4 * v122;
      v44 = (uint8_t *)(a2 + 2 * v122);
      if ( v124 == v122 )
        goto LABEL_34;
      v141 = a1;
    }
    else
    {
      v44 = (uint8_t *)a2;
      v41 = 0;
      v43 = a2;
      v42 = *(uint32_t *)a1;
      v141 = a1;
    }
    do
    {
      ++v41;
      *v44 = *(uint8_t *)(v43 + 2);
      v45 = *(uint8_t *)(v43 + 3);
      v43 += 4;
      v44[1] = v45;
      v44 += 2;
    }
    while ( v42 > v41 );
LABEL_33:
    v128 = v42;
    result = v141;
  }
LABEL_34:
  *(uint8_t *)(result + 11) = 16;
  *(uint32_t *)(result + 4) = 2 * v128;
LABEL_35:
  *(uint8_t *)(result + 10) = 1;
LABEL_5:
  if ( v126 != 0 )
    *(uint8_t *)(result + 8) &= ~4u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_bgr  (binary VA: 0xfb0a50)
// Original: png_do_bgr
// ----------------------------------------------------------------------------
uint8_t * png_do_bgr(int *a1, uint8_t *a2)
{
  uint8_t *result;
  char v3;
  int v4;
  char v5;
  int v6;
  char v7; // di
  int v8;
  char v9; // di
  char v10; // di
  uint8_t *v11;
  char v12;
  int v13;
  char v14; // di
  char v15; // di

  result = a2;
  v3 = *((uint8_t *)a1 + 8);
  if ( (v3 & 2) != 0 )
  {
    v4 = *a1;
    v5 = *((uint8_t *)a1 + 9);
    if ( v5 == 8 )
    {
      if ( v3 == 2 )
      {
        if ( v4 != 0 )
        {
          v11 = &a2[3 * v4];
          do
          {
            v12 = result[2];
            result[2] = *result;
            *result = v12;
            result += 3;
          }
          while ( result != v11 );
        }
      }
      else if ( v3 == 6 && v4 != 0 )
      {
        v6 = 0;
        do
        {
          ++v6;
          v7 = *result;
          *result = result[2];
          result[2] = v7;
          result += 4;
        }
        while ( v6 != v4 );
      }
    }
    else if ( v5 == 16 )
    {
      if ( v3 == 2 )
      {
        if ( v4 != 0 )
        {
          v13 = 0;
          do
          {
            v14 = *result;
            ++v13;
            *result = result[4];
            result[4] = v14;
            v15 = result[1];
            result[1] = result[5];
            result[5] = v15;
            result += 6;
          }
          while ( v13 != v4 );
        }
      }
      else if ( v3 == 6 && v4 != 0 )
      {
        v8 = 0;
        do
        {
          v9 = *result;
          ++v8;
          *result = result[4];
          result[4] = v9;
          v10 = result[1];
          result[1] = result[5];
          result[5] = v10;
          result += 8;
        }
        while ( v8 != v4 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_user_transform_info  (binary VA: 0xfb0b50)
// Original: png_set_user_transform_info
// ----------------------------------------------------------------------------
int png_set_user_transform_info(int a1, int a2, char a3, char a4)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 76) = a2;
    *(uint8_t *)(a1 + 80) = a3;
    *(uint8_t *)(a1 + 81) = a4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_get_user_transform_ptr  (binary VA: 0xfb0b70)
// Original: png_get_user_transform_ptr
// ----------------------------------------------------------------------------
int png_get_user_transform_ptr(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 76);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: png_default_flush  (binary VA: 0xfb0b90)
// Original: png_default_flush
// ----------------------------------------------------------------------------
int png_default_flush(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    return fflush(*(FILE **)(a1 + 64));
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_default_write_data  (binary VA: 0xfb0bc0)
// Original: png_default_write_data
// ----------------------------------------------------------------------------
void png_default_write_data(int a1, void *ptr, size_t n)
{
  if ( a1 != 0 && fwrite(ptr, 1u, n, *(FILE **)(a1 + 64)) != n )
    png_error(a1, (int)(uintptr_t)("Write Error"));
}

// ----------------------------------------------------------------------------
// Function: png_write_data  (binary VA: 0xfb0c30)
// Original: png_write_data
// ----------------------------------------------------------------------------
int png_write_data(int a1, int a2, int a3)
{
  int (*v3)(int, int, int);

  v3 = *(int (**)(int, int, int))(a1 + 56);
  if ( v3 == nullptr )
    png_error(a1, (int)(uintptr_t)("Call to NULL write function"));
  return v3(a1, a2, a3);
}



// ============================================================================
// Address:   0xfb0c80 (size: 28 bytes)
// Symbol:    png_flush
// Demangled: png_flush
// ============================================================================
int (*png_flush(int a1))(int)
{
  int (*result)(int);

  result = *(int (**)(int))(a1 + 312);
  if ( result != nullptr )
    return (int (*)(int))result(a1);
  return result;
}


// ============================================================================
// Address:   0xfb0ca0 (size: 124 bytes)
// Symbol:    png_set_write_fn
// Demangled: png_set_write_fn
// ============================================================================
int (*png_set_write_fn(
        uint32_t *a1,
        int a2,
        void (*a3)(int a1, void *ptr, size_t n),
        int (*a4)(int a1)))(int a1)
{
  void (*v4)(int, void *, size_t);
  int (*result)(int);

  v4 = a3;
  result = a4;
  if ( a1 != nullptr )
  {
    if ( a3 == nullptr )
      v4 = png_default_write_data;
    if ( a4 == nullptr )
      result = png_default_flush;
    a1[78] = (uint32_t)(uintptr_t)(result);
    result = (int (*)(int))a1[15];
    a1[16] = a2;
    a1[14] = (uint32_t)(uintptr_t)(v4);
    if ( result != nullptr )
    {
      a1[15] = 0;
      png_warning((int)(uintptr_t)(a1), "Attempted to set both read_data_fn and write_data_fn in");
      return (int (*)(int))png_warning((int)(uintptr_t)(a1), "the same structure.  Resetting read_data_fn to NULL");
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: png_write_info_before_PLTE  (binary VA: 0xfb0d20)
// Original: png_write_info_before_PLTE
// ----------------------------------------------------------------------------
void png_write_info_before_PLTE(int a1, int a2)
{
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  int v6;

  if ( a2 != 0 && a1 != 0 && (*(uint8_t *)(a1 + 85) & 4) == 0 )
  {
    png_write_sig(a1);
    if ( (*(uint8_t *)(a1 + 85) & 0x10) != 0 && *(uint32_t *)(a1 + 540) != 0 )
    {
      png_warning(a1, "MNG features are not allowed in a PNG datastream");
      *(uint32_t *)(a1 + 540) = 0;
    }
    png_write_IHDR(
      a1,
      *(uint32_t *)a2,
      *(uint32_t *)(a2 + 4),
      *(uint8_t *)(a2 + 24),
      *(uint8_t *)(a2 + 25),
      *(uint8_t *)(a2 + 26),
      *(uint8_t *)(a2 + 27),
      *(uint8_t *)(a2 + 28));
    v2 = *(uint32_t *)(a2 + 8);
    if ( (v2 & 1) != 0 )
    {
      png_write_gAMA(
        a1,
        COERCE_UNSIGNED_INT64(*(float *)(a2 + 40)),
        HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(a2 + 40))));
      v2 = *(uint32_t *)(a2 + 8);
    }
    if ( (v2 & 0x800) != 0 )
    {
      png_write_sRGB(a1, *(uint8_t *)(a2 + 44));
      v2 = *(uint32_t *)(a2 + 8);
    }
    if ( (v2 & 0x1000) != 0 )
    {
      png_write_iCCP(a1, *(char **)(a2 + 196), 0, *(uint32_t *)(a2 + 200), *(uint32_t *)(a2 + 204));
      v2 = *(uint32_t *)(a2 + 8);
    }
    if ( (v2 & 2) != 0 )
    {
      png_write_sBIT(a1, a2 + 68, *(uint8_t *)(a2 + 25));
      v2 = *(uint32_t *)(a2 + 8);
    }
    if ( (v2 & 4) != 0 )
      png_write_cHRM(
        a1,
        COERCE__INT64(*(float *)(a2 + 128)),
        COERCE__INT64(*(float *)(a2 + 132)),
        COERCE__INT64(*(float *)(a2 + 136)),
        COERCE__INT64(*(float *)(a2 + 140)),
        COERCE__INT64(*(float *)(a2 + 144)),
        COERCE__INT64(*(float *)(a2 + 148)),
        COERCE__INT64(*(float *)(a2 + 152)),
        COERCE__INT64(*(float *)(a2 + 156)));
    v3 = *(uint32_t *)(a2 + 192);
    if ( v3 != 0 )
    {
      v4 = *(uint32_t *)(a2 + 188);
      if ( v4 < v4 + 20 * v3 )
      {
        do
        {
          v5 = png_handle_as_unknown(a1, (void *)v4);
          if ( v5 != 1
            && *(uint8_t *)(v4 + 16) != 0
            && (*(uint8_t *)(v4 + 16) & 6) == 0
            && ((*(uint8_t *)(v4 + 3) & 0x20) != 0 || v5 == 3 || (*(uint8_t *)(a1 + 90) & 1) != 0) )
          {
            v6 = *(uint32_t *)(v4 + 12);
            if ( v6 == 0 )
            {
              png_warning(a1, "Writing zero-length unknown chunk");
              v6 = *(uint32_t *)(v4 + 12);
            }
            png_write_chunk(a1, v4, *(uint32_t *)(v4 + 8), v6);
          }
          v4 += 20;
        }
        while ( v4 < *(uint32_t *)(a2 + 188) + 20 * *(uint32_t *)(a2 + 192) );
      }
    }
    *(uint32_t *)(a1 + 84) |= 0x400u;
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_info  (binary VA: 0xfb0ff0)
// Original: png_write_info
// ----------------------------------------------------------------------------
void png_write_info(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  char v12;
  int i;
  int v14;
  uint8_t v15;
  int v16;
  int v17;
  uint8_t *v18;

  v2 = a1;
  if ( a2 == 0 || a1 == 0 )
    return;
  png_write_info_before_PLTE(a1, a2);
  v3 = *(uint32_t *)(a2 + 8);
  if ( (v3 & 8) != 0 )
  {
    png_write_PLTE(a1, *(uint32_t *)(a2 + 16), *(uint16_t *)(a2 + 20));
    v3 = *(uint32_t *)(a2 + 8);
  }
  else if ( *(uint8_t *)(a2 + 25) == 3 )
  {
    png_error(a1, (int)(uintptr_t)("Valid palette required for paletted images"));
  }
  if ( (v3 & 0x10) != 0 )
  {
    v15 = *(uint8_t *)(a2 + 25);
    if ( (*(uint8_t *)(a1 + 94) & 8) != 0 && v15 == 3 )
    {
      v16 = 0;
      if ( *(uint16_t *)(a2 + 22) != 0 )
      {
        v17 = 0;
        do
        {
          v18 = (uint8_t *)(*(uint32_t *)(a2 + 76) + v17++);
          *v18 = ~*v18;
          v16 = *(uint16_t *)(a2 + 22);
        }
        while ( v16 > v17 );
        v15 = *(uint8_t *)(a2 + 25);
      }
    }
    else
    {
      v16 = *(uint16_t *)(a2 + 22);
    }
    png_write_tRNS(a1, *(uint32_t *)(a2 + 76), a2 + 80, v16, v15);
    v3 = *(uint32_t *)(a2 + 8);
    if ( (v3 & 0x20) == 0 )
    {
LABEL_8:
      if ( (v3 & 0x40) == 0 )
        goto LABEL_9;
      goto LABEL_44;
    }
  }
  else if ( (v3 & 0x20) == 0 )
  {
    goto LABEL_8;
  }
  png_write_bKGD(a1, a2 + 90, *(uint8_t *)(a2 + 25));
  v3 = *(uint32_t *)(a2 + 8);
  if ( (v3 & 0x40) == 0 )
  {
LABEL_9:
    if ( (v3 & 0x100) == 0 )
      goto LABEL_10;
    goto LABEL_45;
  }
LABEL_44:
  png_write_hIST(a1, *(uint32_t *)(a2 + 124), *(uint16_t *)(a2 + 20));
  v3 = *(uint32_t *)(a2 + 8);
  if ( (v3 & 0x100) == 0 )
  {
LABEL_10:
    if ( (v3 & 0x400) == 0 )
      goto LABEL_11;
    goto LABEL_46;
  }
LABEL_45:
  png_write_oFFs(a1, *(uint32_t *)(a2 + 100), *(uint32_t *)(a2 + 104), *(uint8_t *)(a2 + 108));
  v3 = *(uint32_t *)(a2 + 8);
  if ( (v3 & 0x400) == 0 )
  {
LABEL_11:
    if ( (v3 & 0x4000) == 0 )
      goto LABEL_12;
    goto LABEL_47;
  }
LABEL_46:
  png_write_pCAL(
    a1,
    *(char **)(a2 + 160),
    *(uint32_t *)(a2 + 164),
    *(uint32_t *)(a2 + 168),
    *(uint8_t *)(a2 + 180),
    *(uint8_t *)(a2 + 181),
    *(char **)(a2 + 172),
    *(uint32_t *)(a2 + 176));
  v3 = *(uint32_t *)(a2 + 8);
  if ( (v3 & 0x4000) == 0 )
  {
LABEL_12:
    if ( (v3 & 0x80u) == 0 )
      goto LABEL_13;
LABEL_48:
    png_write_pHYs(a1, *(uint32_t *)(a2 + 112), *(uint32_t *)(a2 + 116), *(uint8_t *)(a2 + 120));
    v3 = *(uint32_t *)(a2 + 8);
    if ( (v3 & 0x200) == 0 )
      goto LABEL_14;
    goto LABEL_49;
  }
LABEL_47:
  png_write_sCAL(a1, *(uint8_t *)(a2 + 220), *(uint64_t *)(a2 + 224), *(uint64_t *)(a2 + 232));
  v3 = *(uint32_t *)(a2 + 8);
  if ( (v3 & 0x80u) != 0 )
    goto LABEL_48;
LABEL_13:
  if ( (v3 & 0x200) != 0 )
  {
LABEL_49:
    png_write_tIME(a1, a2 + 60);
    *(uint32_t *)(a1 + 84) |= 0x200u;
    v3 = *(uint32_t *)(a2 + 8);
  }
LABEL_14:
  if ( (v3 & 0x2000) != 0 )
  {
    for ( i = 0; *(uint32_t *)(a2 + 216) > i; ++i )
    {
      v14 = i;
      png_write_sPLT(a1, *(uint32_t *)(a2 + 212) + 16 * v14);
    }
  }
  v4 = *(uint32_t *)(a2 + 48);
  v5 = 0;
  if ( v4 > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(uint32_t *)(a2 + 56) + v5;
      v8 = *(uint32_t *)v7;
      if ( *(int *)v7 > 0 )
        break;
      if ( *(uint32_t *)v7 == 0 )
      {
        png_write_zTXt(a1, *(char **)(v7 + 4), *(char **)(v7 + 8), 0, 0);
        *(uint32_t *)(*(uint32_t *)(a2 + 56) + v5) = -2;
        v4 = *(uint32_t *)(a2 + 48);
        goto LABEL_18;
      }
      if ( v8 == -1 )
      {
        ++v6;
        png_write_tEXt(a1, *(char **)(v7 + 4), *(char **)(v7 + 8));
        *(uint32_t *)(*(uint32_t *)(a2 + 56) + v5) = -3;
        v4 = *(uint32_t *)(a2 + 48);
        v5 += 28;
        if ( v6 >= v4 )
        {
LABEL_23:
          v2 = a1;
          goto LABEL_24;
        }
      }
      else
      {
LABEL_18:
        ++v6;
        v5 += 28;
        if ( v6 >= v4 )
          goto LABEL_23;
      }
    }
    png_write_iTXt(a1, v8, *(char **)(v7 + 4), *(char **)(v7 + 20), *(char **)(v7 + 24), *(char **)(v7 + 8));
    *(uint32_t *)(*(uint32_t *)(a2 + 56) + v5) = -3;
    v4 = *(uint32_t *)(a2 + 48);
    goto LABEL_18;
  }
LABEL_24:
  v9 = *(uint32_t *)(a2 + 192);
  if ( v9 != 0 )
  {
    v10 = *(uint32_t *)(a2 + 188);
    if ( v10 < v10 + 20 * v9 )
    {
      do
      {
        v11 = png_handle_as_unknown(v2, (void *)v10);
        if ( v11 != 1 )
        {
          v12 = *(uint8_t *)(v10 + 16);
          if ( v12 != 0
            && (v12 & 6) == 2
            && ((*(uint8_t *)(v10 + 3) & 0x20) != 0 || v11 == 3 || (*(uint8_t *)(v2 + 90) & 1) != 0) )
          {
            png_write_chunk(v2, v10, *(uint32_t *)(v10 + 8), *(uint32_t *)(v10 + 12));
          }
        }
        v10 += 20;
      }
      while ( v10 < *(uint32_t *)(a2 + 188) + 20 * *(uint32_t *)(a2 + 192) );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_end  (binary VA: 0xfb1450)
// Original: png_write_end
// ----------------------------------------------------------------------------
void png_write_end(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;

  v2 = a1;
  if ( a1 != 0 )
  {
    if ( (*(uint8_t *)(a1 + 84) & 4) == 0 )
      png_error(a1, (int)(uintptr_t)("No IDATs written into file"));
    if ( a2 != 0 )
    {
      if ( (*(uint8_t *)(a2 + 9) & 2) != 0 && (*(uint8_t *)(a1 + 85) & 2) == 0 )
        png_write_tIME(a1, a2 + 60);
      v3 = *(uint32_t *)(a2 + 48);
      if ( v3 > 0 )
      {
        v4 = 0;
        v5 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v6 = *(uint32_t *)(a2 + 56) + v4;
            v7 = *(uint32_t *)v6;
            if ( *(int *)v6 <= 0 )
              break;
            png_write_iTXt(a1, v7, *(char **)(v6 + 4), *(char **)(v6 + 20), *(char **)(v6 + 24), *(char **)(v6 + 8));
            *(uint32_t *)(*(uint32_t *)(a2 + 56) + v4) = -3;
            v3 = *(uint32_t *)(a2 + 48);
LABEL_8:
            ++v5;
            v4 += 28;
            if ( v3 <= v5 )
              goto LABEL_12;
          }
          if ( *(uint32_t *)v6 != 0 )
          {
            if ( v7 == -1 )
            {
              png_write_tEXt(a1, *(char **)(v6 + 4), *(char **)(v6 + 8));
              *(uint32_t *)(*(uint32_t *)(a2 + 56) + v4) = -3;
              v3 = *(uint32_t *)(a2 + 48);
            }
            goto LABEL_8;
          }
          ++v5;
          png_write_zTXt(a1, *(char **)(v6 + 4), *(char **)(v6 + 8), 0, 0);
          *(uint32_t *)(*(uint32_t *)(a2 + 56) + v4) = -2;
          v3 = *(uint32_t *)(a2 + 48);
          v4 += 28;
          if ( v3 <= v5 )
          {
LABEL_12:
            v2 = a1;
            break;
          }
        }
      }
      v8 = *(uint32_t *)(a2 + 192);
      if ( v8 != 0 )
      {
        v9 = *(uint32_t *)(a2 + 188);
        if ( v9 < v9 + 20 * v8 )
        {
          do
          {
            v10 = png_handle_as_unknown(v2, (void *)v9);
            if ( v10 != 1
              && *(uint8_t *)(v9 + 16) != 0
              && (*(uint8_t *)(v9 + 16) & 8) != 0
              && ((*(uint8_t *)(v9 + 3) & 0x20) != 0 || v10 == 3 || (*(uint8_t *)(v2 + 90) & 1) != 0) )
            {
              png_write_chunk(v2, v9, *(uint32_t *)(v9 + 8), *(uint32_t *)(v9 + 12));
            }
            v9 += 20;
          }
          while ( v9 < *(uint32_t *)(a2 + 188) + 20 * *(uint32_t *)(a2 + 192) );
        }
      }
    }
    *(uint32_t *)(v2 + 84) |= 8u;
    png_write_IEND(v2);
  }
}

// ----------------------------------------------------------------------------
// Function: png_convert_from_struct_tm  (binary VA: 0xfb1660)
// Original: png_convert_from_struct_tm
// ----------------------------------------------------------------------------
int png_convert_from_struct_tm(int a1, uint32_t *a2)
{
  *(uint16_t *)a1 = a2[5] + 1900;
  *(uint8_t *)(a1 + 2) = a2[4] + 1;
  *(uint8_t *)(a1 + 3) = a2[3];
  *(uint8_t *)(a1 + 4) = a2[2];
  *(uint8_t *)(a1 + 5) = a2[1];
  *(uint8_t *)(a1 + 6) = *a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: png_convert_from_time_t  (binary VA: 0xfb16a0)
// Original: png_convert_from_time_t
// ----------------------------------------------------------------------------
int png_convert_from_time_t(int a1, time_t timer)
{
  struct tm *v2;

  v2 = gmtime(&timer);
  return png_convert_from_struct_tm(a1, v2);
}

// ----------------------------------------------------------------------------
// Function: png_write_row  (binary VA: 0xfb16e0)
// Original: png_write_row
// ----------------------------------------------------------------------------
void png_write_row(int a1, void *src)
{
  int v2;
  char v3;
  char v4;
  uint8_t v5;
  size_t n;
  int v7;
  uint8_t v8;
  int v9;
  int v10;
  void (*v11)(int, uint32_t, uint32_t);

  if ( a1 == 0 )
    return;
  if ( *(uint32_t *)(a1 + 208) == 0 && *(uint8_t *)(a1 + 272) == 0 )
  {
    if ( (*(uint8_t *)(a1 + 85) & 4) == 0 )
      png_error(a1, (int)(uintptr_t)("png_write_info was never called before png_write_row"));
    png_write_start_row(a1);
  }
  if ( *(uint8_t *)(a1 + 271) != 0 && (*(uint8_t *)(a1 + 92) & 2) != 0 )
  {
    switch ( *(uint8_t *)(a1 + 272) )
    {
      case 0:
        if ( (*(uint8_t *)(a1 + 208) & 7) != 0 )
          goto LABEL_28;
        break;
      case 1:
        if ( (*(uint8_t *)(a1 + 208) & 7) != 0 || *(uint32_t *)(a1 + 180) <= 4u )
          goto LABEL_28;
        break;
      case 2:
        if ( (*(uint32_t *)(a1 + 208) & 7) != 4 )
          goto LABEL_28;
        break;
      case 3:
        if ( (*(uint8_t *)(a1 + 208) & 3) != 0 || *(uint32_t *)(a1 + 180) <= 2u )
          goto LABEL_28;
        break;
      case 4:
        if ( (*(uint32_t *)(a1 + 208) & 3) != 2 )
          goto LABEL_28;
        break;
      case 5:
        if ( (*(uint8_t *)(a1 + 208) & 1) != 0 || *(uint32_t *)(a1 + 180) <= 1u )
          goto LABEL_28;
        break;
      case 6:
        if ( (*(uint8_t *)(a1 + 208) & 1) == 0 )
          goto LABEL_28;
        break;
      default:
        break;
    }
  }
  v2 = *(uint32_t *)(a1 + 192);
  v3 = *(uint8_t *)(a1 + 279);
  *(uint8_t *)(a1 + 244) = *(uint8_t *)(a1 + 274);
  v4 = *(uint8_t *)(a1 + 276);
  *(uint32_t *)(a1 + 236) = v2;
  *(uint8_t *)(a1 + 245) = v4;
  *(uint8_t *)(a1 + 246) = v3;
  v5 = v3 * v4;
  *(uint8_t *)(a1 + 247) = v5;
  if ( v5 > 7u )
    n = v2 * (v5 >> 3);
  else
    n = (v2 * (unsigned int)v5 + 7) >> 3;
  v7 = *(uint32_t *)(a1 + 216);
  *(uint32_t *)(a1 + 240) = n;
  memcpy((void *)(v7 + 1), src, n);
  if ( *(uint8_t *)(a1 + 271) != 0 )
  {
    v8 = *(uint8_t *)(a1 + 272);
    v9 = *(uint32_t *)(a1 + 92);
    v10 = a1 + 236;
    if ( v8 <= 5u && (v9 & 2) != 0 )
    {
      png_do_write_interlace(a1 + 236, (void *)(*(uint32_t *)(a1 + 216) + 1), v8);
      if ( *(uint32_t *)(a1 + 236) == 0 )
      {
LABEL_28:
        png_write_finish_row(a1);
        return;
      }
      v9 = *(uint32_t *)(a1 + 92);
    }
    if ( v9 == 0 )
      goto LABEL_14;
  }
  else
  {
    v10 = a1 + 236;
    if ( *(uint32_t *)(a1 + 92) == 0 )
      goto LABEL_14;
  }
  png_do_write_transformations(a1);
LABEL_14:
  if ( (*(uint8_t *)(a1 + 540) & 4) != 0 && *(uint8_t *)(a1 + 548) == 64 )
    png_do_write_intrapixel(v10, *(uint32_t *)(a1 + 216) + 1);
  png_write_find_filter(a1, v10);
  v11 = *(void (**)(int, uint32_t, uint32_t))(a1 + 392);
  if ( v11 != nullptr )
    v11(a1, *(uint32_t *)(a1 + 208), *(uint8_t *)(a1 + 272));
}

// ----------------------------------------------------------------------------
// Function: png_write_image  (binary VA: 0xfb19a0)
// Original: png_write_image
// ----------------------------------------------------------------------------
void png_write_image(int a1, int a2)
{
  int v2;
  unsigned int v3;
  unsigned int i;
  void *v5;
  int v6;
  int v7;

  if ( a1 != 0 )
  {
    LOBYTE(v2) = png_set_interlace_handling(a1);
    v7 = v2;
    if ( v2 > 0 )
    {
      v3 = *(uint32_t *)(a1 + 184);
      v6 = 0;
      do
      {
        for ( i = 0; v3 > i; v3 = *(uint32_t *)(a1 + 184) )
        {
          v5 = *(void **)(a2 + 4 * i++);
          png_write_row(a1, v5);
        }
        ++v6;
      }
      while ( v6 != v7 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_rows  (binary VA: 0xfb1a20)
// Original: png_write_rows
// ----------------------------------------------------------------------------
void png_write_rows(int a1, int a2, int a3)
{
  int v4;
  void *v5;
  int v6;

  if ( a1 != 0 && a3 != 0 )
  {
    v4 = 0;
    do
    {
      v5 = *(void **)(a2 + 4 * v4++);
      v6 = a2;
      png_write_row(a1, v5);
      a2 = v6;
    }
    while ( v4 != a3 );
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_flush  (binary VA: 0xfb1a80)
// Original: png_set_flush
// ----------------------------------------------------------------------------
void png_set_flush(int a1, int a2)
{
  int v2;

  if ( a1 != 0 )
  {
    v2 = 0;
    if ( a2 >= 0 )
      v2 = a2;
    *(uint32_t *)(a1 + 316) = v2;
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_flush  (binary VA: 0xfb1aa0)
// Original: png_write_flush
// ----------------------------------------------------------------------------
void png_write_flush(uint32_t *a1)
{
  int v1;
  int v2;

  if ( a1 != nullptr && a1[52] < a1[47] )
  {
    while ( 1 )
    {
      if ( deflate(a1 + 24, 2) != 0 )
      {
        if ( a1[30] != 0 )
          png_error((int)(uintptr_t)(a1), a1[30]);
        png_error((int)(uintptr_t)(a1), (int)(uintptr_t)("zlib error"));
      }
      v1 = a1[28];
      if ( v1 != 0 )
        break;
      png_write_IDAT(a1, a1[38], a1[39]);
      a1[27] = a1[38];
      a1[28] = a1[39];
    }
    v2 = a1[39];
    if ( v2 != v1 )
    {
      png_write_IDAT(a1, a1[38], v2 - v1);
      a1[27] = a1[38];
      a1[28] = a1[39];
    }
    a1[80] = 0;
    png_flush((int)(uintptr_t)(a1));
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_destroy  (binary VA: 0xfb1bb0)
// Original: png_write_destroy
// ----------------------------------------------------------------------------
int png_write_destroy(int a1)
{
  uint16_t *v2;
  int v3;
  unsigned int v4;
  uint16_t *v5;
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

  v2 = (uint16_t *)a1;
  deflateEnd(a1 + 96);
  png_free(a1, *(void **)(a1 + 152));
  png_free(a1, *(void **)(a1 + 216));
  png_free(a1, *(void **)(a1 + 212));
  png_free(a1, *(void **)(a1 + 220));
  png_free(a1, *(void **)(a1 + 224));
  png_free(a1, *(void **)(a1 + 228));
  png_free(a1, *(void **)(a1 + 232));
  png_free(a1, *(void **)(a1 + 508));
  png_free(a1, *(void **)(a1 + 488));
  png_free(a1, *(void **)(a1 + 492));
  png_free(a1, *(void **)(a1 + 496));
  png_free(a1, *(void **)(a1 + 500));
  png_free(a1, *(void **)(a1 + 504));
  v10 = *(uint32_t *)a1;
  v11 = *(uint32_t *)(a1 + 4);
  v12 = *(uint32_t *)(a1 + 8);
  v13 = *(uint32_t *)(a1 + 12);
  v14 = *(uint32_t *)(a1 + 16);
  v15 = *(uint32_t *)(a1 + 20);
  v16 = *(uint32_t *)(a1 + 24);
  v17 = *(uint32_t *)(a1 + 28);
  v18 = *(uint32_t *)(a1 + 32);
  v19 = *(uint32_t *)(a1 + 36);
  v7 = *(uint32_t *)(a1 + 48);
  v8 = *(uint32_t *)(a1 + 52);
  v3 = *(uint32_t *)(a1 + 44);
  v9 = *(uint32_t *)(a1 + 560);
  v4 = 632;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOBYTE(v4) = 119;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v4 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v4 >> 2));
  v5 = &v2[2 * (v4 >> 2)];
  if ( (v4 & 2) != 0 )
    *v5++ = 0;
  if ( (v4 & 1) != 0 )
    *(uint8_t *)v5 = 0;
  *(uint32_t *)(a1 + 44) = v3;
  *(uint32_t *)(a1 + 48) = v7;
  *(uint32_t *)(a1 + 52) = v8;
  *(uint32_t *)(a1 + 560) = v9;
  *(uint32_t *)a1 = v10;
  *(uint32_t *)(a1 + 4) = v11;
  *(uint32_t *)(a1 + 8) = v12;
  *(uint32_t *)(a1 + 12) = v13;
  *(uint32_t *)(a1 + 16) = v14;
  *(uint32_t *)(a1 + 20) = v15;
  *(uint32_t *)(a1 + 24) = v16;
  *(uint32_t *)(a1 + 28) = v17;
  *(uint32_t *)(a1 + 32) = v18;
  *(uint32_t *)(a1 + 36) = v19;
  return v19;
}

// ----------------------------------------------------------------------------
// Function: png_destroy_write_struct  (binary VA: 0xfb1df0)
// Original: png_destroy_write_struct
// ----------------------------------------------------------------------------
void png_destroy_write_struct(int *a1, uint32_t **a2)
{
  int v2;
  void *v3;
  void *v4;
  void (*v5)(uint8_t *, void *);
  int v6;

  if ( a1 != nullptr )
  {
    v2 = *a1;
    v5 = *(void (**)(uint8_t *, void *))(*a1 + 560);
    v6 = *(uint32_t *)(*a1 + 552);
  }
  else
  {
    v2 = 0;
    v6 = 0;
    v5 = nullptr;
  }
  if ( a2 != nullptr )
  {
    v3 = *a2;
    if ( *a2 != nullptr )
    {
      if ( v2 != 0 )
      {
        v4 = *a2;
        png_free_data(v2, *a2, 0x7FFF, -1);
        v3 = v4;
        if ( *(uint32_t *)(v2 + 524) != 0 )
        {
          png_free(v2, *(void **)(v2 + 528));
          *(uint32_t *)(v2 + 524) = 0;
          v3 = v4;
        }
      }
      png_destroy_struct_2(v3, v5, v6);
      *a2 = nullptr;
    }
  }
  if ( v2 != 0 )
  {
    png_write_destroy(v2);
    png_destroy_struct_2((void *)v2, v5, v6);
    *a1 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: png_set_filter  (binary VA: 0xfb1f10)
// Original: png_set_filter
// ----------------------------------------------------------------------------
int png_set_filter(int a1, int a2, int a3)
{
  int result;
  char v4;
  uint8_t *v5;
  uint8_t *v6;
  uint8_t *v7;
  uint8_t *v8;

  result = a2;
  if ( a1 != 0 )
  {
    if ( (a2 != 64 || (*(uint8_t *)(a1 + 540) & 4) == 0) && a2 != 0 )
      png_error(a1, (int)(uintptr_t)("Unknown custom filter method"));
    switch ( (char)a3 )
    {
      case 0:
        goto LABEL_22;
      case 1:
        *(uint8_t *)(a1 + 273) = 16;
        result = 16;
        break;
      case 2:
        *(uint8_t *)(a1 + 273) = 32;
        result = 32;
        break;
      case 3:
        *(uint8_t *)(a1 + 273) = 64;
        result = 64;
        break;
      case 4:
        *(uint8_t *)(a1 + 273) = 0x80;
        result = -128;
        break;
      case 5:
      case 6:
      case 7:
        png_warning(a1, "Unknown row filter for method 0");
LABEL_22:
        *(uint8_t *)(a1 + 273) = 8;
        result = 8;
        break;
      default:
        result = a3;
        *(uint8_t *)(a1 + 273) = a3;
        break;
    }
    if ( *(uint32_t *)(a1 + 216) != 0 )
    {
      v4 = result;
      if ( (result & 0x10) != 0 && *(uint32_t *)(a1 + 220) == 0 )
      {
        v8 = (uint8_t *)(png_malloc(a1, *(uint32_t *)(a1 + 196) + 1));
        *(uint32_t *)(a1 + 220) = (uint32_t)(uintptr_t)(v8);
        *v8 = 1;
        result = *(uint8_t *)(a1 + 273);
        v4 = *(uint8_t *)(a1 + 273);
      }
      if ( (v4 & 0x20) != 0 && *(uint32_t *)(a1 + 224) == 0 )
      {
        if ( *(uint32_t *)(a1 + 212) != 0 )
        {
          v6 = (uint8_t *)(png_malloc(a1, *(uint32_t *)(a1 + 196) + 1));
          *(uint32_t *)(a1 + 224) = (uint32_t)(uintptr_t)(v6);
          *v6 = 2;
          result = *(uint8_t *)(a1 + 273);
          v4 = *(uint8_t *)(a1 + 273);
        }
        else
        {
          png_warning(a1, "Can't add Up filter after starting");
          result = *(uint8_t *)(a1 + 273) & 0xDF;
          *(uint8_t *)(a1 + 273) = result;
          v4 = result;
        }
      }
      if ( (v4 & 0x40) != 0 && *(uint32_t *)(a1 + 228) == 0 )
      {
        if ( *(uint32_t *)(a1 + 212) != 0 )
        {
          v7 = (uint8_t *)(png_malloc(a1, *(uint32_t *)(a1 + 196) + 1));
          *(uint32_t *)(a1 + 228) = (uint32_t)(uintptr_t)(v7);
          *v7 = 3;
          result = *(uint8_t *)(a1 + 273);
        }
        else
        {
          png_warning(a1, "Can't add Average filter after starting");
          result = *(uint8_t *)(a1 + 273) & 0xBF;
          *(uint8_t *)(a1 + 273) = result;
        }
      }
      if ( (result & 0x80u) != 0 && *(uint32_t *)(a1 + 232) == 0 )
      {
        if ( *(uint32_t *)(a1 + 212) != 0 )
        {
          v5 = (uint8_t *)(png_malloc(a1, *(uint32_t *)(a1 + 196) + 1));
          *(uint32_t *)(a1 + 232) = (uint32_t)(uintptr_t)(v5);
          *v5 = 4;
          result = *(uint8_t *)(a1 + 273);
        }
        else
        {
          png_warning(a1, "Can't add Paeth filter after starting");
          result = *(uint8_t *)(a1 + 273) & 0x7F;
          *(uint8_t *)(a1 + 273) = result;
        }
      }
      if ( (uint8_t)result == 0 )
        *(uint8_t *)(a1 + 273) = 8;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_filter_heuristics  (binary VA: 0xfb21d0)
// Original: png_set_filter_heuristics
// ----------------------------------------------------------------------------
int png_set_filter_heuristics(int a1, int a2, signed int a3, int a4, double *a5)
{
  int result;
  char v6;
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  double *v10;
  double v11; // xmm0_8
  double v12; // xmm0_8
  int v13;
  double v14; // xmm0_8
  uint16_t *v15;
  uint16_t *v16;
  int v17;
  int v18;
  int v19;
  uint16_t *v20;
  uint16_t *v21;
  int v22;
  int v23;
  int v24;
  uint8_t *v25;
  signed int v26;
  uint16_t *v27;
  signed int v28;

  result = a2;
  if ( a1 != 0 )
  {
    if ( a2 > 2 )
      return png_warning(a1, "Unknown filter heuristic method");
    v6 = a2;
    if ( a2 != 0 )
    {
      if ( a4 == 0 )
        goto LABEL_5;
    }
    else
    {
      v6 = 1;
      result = 1;
      if ( a4 == 0 )
        goto LABEL_5;
    }
    if ( a3 >= 0 && result != 1 )
    {
      *(uint8_t *)(a1 + 484) = v6;
      *(uint8_t *)(a1 + 485) = a3;
      result = a3;
      if ( a3 != 0 )
      {
        if ( *(uint32_t *)(a1 + 488) == 0 )
        {
          v25 = (uint8_t *)(png_malloc(a1, a3));
          *(uint32_t *)(a1 + 488) = (uint32_t)(uintptr_t)(v25);
          v26 = 0;
          while ( 1 )
          {
            v25[v26++] = -1;
            if ( a3 <= v26 )
              break;
            v25 = *(uint8_t **)(a1 + 488);
          }
        }
        if ( *(uint32_t *)(a1 + 492) == 0 )
        {
          *(uint32_t *)(a1 + 492) = (uint32_t)(uintptr_t)(png_malloc(a1, 2 * a3));
          v27 = (uint16_t *)(png_malloc(a1, 2 * a3));
          *(uint32_t *)(a1 + 496) = (uint32_t)(uintptr_t)(v27);
          v28 = 0;
          while ( 1 )
          {
            *(uint16_t *)(*(uint32_t *)(a1 + 492) + 2 * v28) = 256;
            v27[v28++] = 256;
            if ( a3 <= v28 )
              break;
            v27 = *(uint16_t **)(a1 + 496);
          }
        }
        v13 = 0;
        for ( result = 0; result < a3; ++result )
        {
          v14 = *(double *)(a4 + 8 * result);
          if ( v14 >= 0.0 )
          {
            *(uint16_t *)(*(uint32_t *)(a1 + 496) + v13) = (int)(v14 * 256.0 + 0.5);
            *(uint16_t *)(*(uint32_t *)(a1 + 492) + v13) = (int)(256.0 / *(double *)(a4 + 8 * result) + 0.5);
          }
          else
          {
            v15 = (uint16_t *)(*(uint32_t *)(a1 + 496) + v13);
            *(uint16_t *)(*(uint32_t *)(a1 + 492) + v13) = 256;
            *v15 = 256;
          }
          v13 += 2;
        }
      }
LABEL_6:
      if ( *(uint32_t *)(a1 + 500) == 0 )
      {
        *(uint32_t *)(a1 + 500) = (uint32_t)(uintptr_t)(png_malloc(a1, 0xAu));
        v20 = (uint16_t *)(png_malloc(a1, 0xAu));
        v21 = *(uint16_t **)(a1 + 500);
        *(uint32_t *)(a1 + 504) = (uint32_t)(uintptr_t)(v20);
        *v21 = 8;
        *v20 = 8;
        v22 = *(uint32_t *)(a1 + 504);
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 2) = 8;
        *(uint16_t *)(v22 + 2) = 8;
        v23 = *(uint32_t *)(a1 + 504);
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 4) = 8;
        *(uint16_t *)(v23 + 4) = 8;
        v24 = *(uint32_t *)(a1 + 504);
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 6) = 8;
        *(uint16_t *)(v24 + 6) = 8;
        result = *(uint32_t *)(a1 + 504);
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 8) = 8;
        *(uint16_t *)(result + 8) = 8;
      }
      if ( a5 == nullptr )
      {
        v16 = *(uint16_t **)(a1 + 504);
        **(uint16_t **)(a1 + 500) = 8;
        *v16 = 8;
        v17 = *(uint32_t *)(a1 + 504);
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 2) = 8;
        *(uint16_t *)(v17 + 2) = 8;
        v18 = *(uint32_t *)(a1 + 504);
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 4) = 8;
        *(uint16_t *)(v18 + 4) = 8;
        v19 = *(uint32_t *)(a1 + 504);
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 6) = 8;
        *(uint16_t *)(v19 + 6) = 8;
        result = *(uint32_t *)(a1 + 504);
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 8) = 8;
        *(uint16_t *)(result + 8) = 8;
        return result;
      }
      v7 = *a5;
      if ( *a5 < 0.0 )
      {
        result = *(uint32_t *)(a1 + 504);
        **(uint16_t **)(a1 + 500) = 8;
        *(uint16_t *)result = 8;
      }
      else if ( v7 >= 1.0 )
      {
        **(uint16_t **)(a1 + 504) = (int)(8.0 / v7 + 0.5);
        result = *(uint32_t *)(a1 + 500);
        *(uint16_t *)result = (int)(*a5 * 8.0 + 0.5);
      }
      v8 = a5[1];
      if ( v8 < 0.0 )
      {
        result = *(uint32_t *)(a1 + 504);
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 2) = 8;
        *(uint16_t *)(result + 2) = 8;
      }
      else if ( v8 >= 1.0 )
      {
        *(uint16_t *)(*(uint32_t *)(a1 + 504) + 2) = (int)(8.0 / v8 + 0.5);
        result = *(uint32_t *)(a1 + 500);
        *(uint16_t *)(result + 2) = (int)(a5[1] * 8.0 + 0.5);
      }
      v9 = a5[2];
      if ( v9 < 0.0 )
      {
        result = *(uint32_t *)(a1 + 504);
        v10 = a5;
        *(uint16_t *)(*(uint32_t *)(a1 + 500) + 4) = 8;
        *(uint16_t *)(result + 4) = 8;
        v11 = a5[3];
        if ( v11 >= 0.0 )
          goto LABEL_19;
      }
      else
      {
        if ( v9 >= 1.0 )
        {
          *(uint16_t *)(*(uint32_t *)(a1 + 504) + 4) = (int)(8.0 / v9 + 0.5);
          result = *(uint32_t *)(a1 + 500);
          *(uint16_t *)(result + 4) = (int)(a5[2] * 8.0 + 0.5);
        }
        v10 = a5;
        v11 = a5[3];
        if ( v11 >= 0.0 )
        {
LABEL_19:
          if ( v11 >= 1.0 )
          {
            *(uint16_t *)(*(uint32_t *)(a1 + 504) + 6) = (int)(8.0 / v11 + 0.5);
            result = *(uint32_t *)(a1 + 500);
            *(uint16_t *)(result + 6) = (int)(v10[3] * 8.0 + 0.5);
          }
          v12 = a5[4];
          if ( v12 >= 0.0 )
            goto LABEL_22;
          goto LABEL_38;
        }
      }
      result = *(uint32_t *)(a1 + 504);
      *(uint16_t *)(*(uint32_t *)(a1 + 500) + 6) = 8;
      *(uint16_t *)(result + 6) = 8;
      v12 = a5[4];
      if ( v12 >= 0.0 )
      {
LABEL_22:
        if ( v12 >= 1.0 )
        {
          *(uint16_t *)(*(uint32_t *)(a1 + 504) + 8) = (int)(8.0 / v12 + 0.5);
          result = *(uint32_t *)(a1 + 500);
          *(uint16_t *)(result + 8) = (int)(a5[4] * 8.0 + 0.5);
        }
        return result;
      }
LABEL_38:
      result = *(uint32_t *)(a1 + 504);
      *(uint16_t *)(*(uint32_t *)(a1 + 500) + 8) = 8;
      *(uint16_t *)(result + 8) = 8;
      return result;
    }
LABEL_5:
    *(uint8_t *)(a1 + 485) = 0;
    *(uint8_t *)(a1 + 484) = v6;
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_create_write_struct_2  (binary VA: 0xfb27b0)
// Original: png_create_write_struct_2
// ----------------------------------------------------------------------------
void * png_create_write_struct_2(char *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  struct __jmp_buf_tag *env;
  int v8;
  int v9;
  char v10; // bp
  char v11; // si
  int header_ver;
  char v14;
  char v15; // si
  typedef bool _g4_t_v16;
  typedef void *_g4_t_struct_2;
  typedef char _g4_t_s[108];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_struct_2)) > _g4_s1 ? (12u + sizeof(_g4_t_struct_2)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_s)) > _g4_s2 ? (16u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_struct_2 &struct_2 = *reinterpret_cast<_g4_t_struct_2 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  v16 = false;
  struct_2 = (void *)png_create_struct_2(1, a6, a5);
  if ( struct_2 == nullptr )
    return nullptr;
  *((uint32_t *)struct_2 + 146) = 1000000;
  *((uint32_t *)struct_2 + 147) = 1000000;
  env = (struct __jmp_buf_tag *)png_set_longjmp_fn(struct_2, static_cast<void (*)(struct __jmp_buf_tag *, int)>(&longjmp), 40);
  if ( setjmp(*reinterpret_cast<jmp_buf *>(env)) != 0 )
    abort();
  png_set_mem_fn(struct_2, a5, a6, a7);
  png_set_error_fn(struct_2, a2, a3, a4);
  if ( a1 != nullptr )
  {
    v8 = 0;
    do
    {
      v9 = v8;
      v10 = a1[v8];
      if ( v10 != *(uint8_t *)(png_get_header_ver(0) + v8) )
        *((uint32_t *)struct_2 + 22) |= 0x20000u;
      ++v8;
    }
    while ( *(uint8_t *)(png_get_header_ver(0) + v9) != 0 );
  }
  if ( (*((uint8_t *)struct_2 + 90) & 2) != 0 )
  {
    if ( a1 == nullptr )
    {
LABEL_12:
      header_ver = (int)(uintptr_t)(png_get_header_ver(0));
      snprintf(s, 0x50u, "Application  is  running with png.c from libpng-%.20s", header_ver);
      png_warning(struct_2, s);
      png_warning(struct_2, "Incompatible libpng version in application and library");
      v16 = true;
      goto LABEL_13;
    }
    v11 = *a1;
    if ( v11 != *(uint8_t *)png_get_header_ver(0) )
    {
LABEL_11:
      snprintf(s, 0x50u, "Application was compiled with png.h from libpng-%.20s", a1);
      png_warning(struct_2, s);
      goto LABEL_12;
    }
    v14 = *a1;
    if ( *a1 == 49 )
    {
      v15 = a1[2];
      if ( v15 != *(uint8_t *)(png_get_header_ver(0) + 2) )
        goto LABEL_11;
      v14 = *a1;
    }
    if ( v14 != 48 || a1[2] > 56 )
      goto LABEL_13;
    goto LABEL_11;
  }
LABEL_13:
  *((uint32_t *)struct_2 + 39) = 0x2000;
  if ( !v16 )
  {
    *((uint32_t *)struct_2 + 38) = (uint32_t)(uintptr_t)(png_malloc_warn(struct_2, *((uint32_t *)struct_2 + 39)));
    v16 = *((uint32_t *)struct_2 + 38) == 0;
  }
  if ( v16 )
  {
    png_free((int)(uintptr_t)(struct_2), *((void **)struct_2 + 38));
    *((uint32_t *)struct_2 + 38) = 0;
    png_destroy_struct_2(struct_2, a7, a5);
    return nullptr;
  }
  else
  {
    png_set_write_fn(struct_2, 0, 0, 0);
    png_set_filter_heuristics(struct_2, 0, 1, 0, 0);
    return struct_2;
  }
}

// ----------------------------------------------------------------------------
// Function: png_create_write_struct  (binary VA: 0xfb2b50)
// Original: png_create_write_struct
// ----------------------------------------------------------------------------
void * png_create_write_struct(char *a1, int a2, int a3, int a4)
{
  return png_create_write_struct_2(a1, a2, a3, a4, 0, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: png_set_compression_level  (binary VA: 0xfb2bb0)
// Original: png_set_compression_level
// ----------------------------------------------------------------------------
int png_set_compression_level(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 88) |= 2u;
    *(uint32_t *)(a1 + 160) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_compression_mem_level  (binary VA: 0xfb2bd0)
// Original: png_set_compression_mem_level
// ----------------------------------------------------------------------------
int png_set_compression_mem_level(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 88) |= 4u;
    *(uint32_t *)(a1 + 172) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_compression_strategy  (binary VA: 0xfb2bf0)
// Original: png_set_compression_strategy
// ----------------------------------------------------------------------------
int png_set_compression_strategy(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 88) |= 1u;
    *(uint32_t *)(a1 + 176) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_compression_window_bits  (binary VA: 0xfb2c10)
// Original: png_set_compression_window_bits
// ----------------------------------------------------------------------------
int png_set_compression_window_bits(int a1, int a2)
{
  int v2;
  int result;

  v2 = a2;
  if ( a1 != 0 )
  {
    if ( a2 > 15 )
    {
      result = png_warning(a1, "Only compression windows <= 32k supported by PNG");
    }
    else if ( a2 <= 7 )
    {
      result = png_warning(a1, "Only compression windows >= 256 supported by PNG");
    }
    else if ( a2 == 8 )
    {
      LOWORD(v2) = 9;
      result = png_warning(a1, "Compression window is being reset to 512");
    }
    *(uint32_t *)(a1 + 88) |= 8u;
    *(uint32_t *)(a1 + 168) = v2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_compression_method  (binary VA: 0xfb2cb0)
// Original: png_set_compression_method
// ----------------------------------------------------------------------------
int png_set_compression_method(int a1, int a2)
{
  int result;

  if ( a1 != 0 )
  {
    if ( a2 != 8 )
      result = png_warning(a1, "Only compression method 8 is supported by PNG");
    *(uint32_t *)(a1 + 88) |= 0x10u;
    *(uint32_t *)(a1 + 164) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_write_status_fn  (binary VA: 0xfb2d10)
// Original: png_set_write_status_fn
// ----------------------------------------------------------------------------
int png_set_write_status_fn(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    *(uint32_t *)(a1 + 392) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_set_write_user_transform_fn  (binary VA: 0xfb2d30)
// Original: png_set_write_user_transform_fn
// ----------------------------------------------------------------------------
int png_set_write_user_transform_fn(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 92) |= 0x100000u;
    *(uint32_t *)(a1 + 72) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_png  (binary VA: 0xfb2d50)
// Original: png_write_png
// ----------------------------------------------------------------------------
void png_write_png(int a1, int a2, int16_t a3)
{
  int64_t v3;

  if ( a2 != 0 && a1 != 0 )
  {
    png_write_info(a1, a2);
    if ( (a3 & 0x20) != 0 )
      png_set_invert_mono(a1);
    if ( (a3 & 0x40) != 0 && (*(uint8_t *)(a2 + 8) & 2) != 0 )
    {
      LODWORD(v3) = a1;
      HIDWORD(v3) = a2 + 68;
      png_set_shift(v3);
    }
    if ( (a3 & 4) != 0 )
      png_set_packing(a1);
    if ( (a3 & 0x100) != 0 )
      png_set_swap_alpha(a1);
    if ( (a3 & 0x1000) != 0 )
    {
      png_set_filler(a1, 0, 1);
      if ( (a3 & 0x80) == 0 )
        goto LABEL_15;
    }
    else
    {
      if ( (a3 & 0x800) != 0 )
        png_set_filler(a1, 0, 0);
      if ( (a3 & 0x80) == 0 )
      {
LABEL_15:
        if ( (a3 & 0x200) == 0 )
          goto LABEL_16;
        goto LABEL_24;
      }
    }
    png_set_bgr(a1);
    if ( (a3 & 0x200) == 0 )
    {
LABEL_16:
      if ( (a3 & 8) == 0 )
        goto LABEL_17;
      goto LABEL_25;
    }
LABEL_24:
    png_set_swap(a1);
    if ( (a3 & 8) == 0 )
    {
LABEL_17:
      if ( (a3 & 0x400) == 0 )
        goto LABEL_18;
      goto LABEL_26;
    }
LABEL_25:
    png_set_packswap(a1);
    if ( (a3 & 0x400) == 0 )
    {
LABEL_18:
      if ( *(char *)(a2 + 9) >= 0 )
      {
LABEL_19:
        png_write_end(a1, a2);
        return;
      }
LABEL_27:
      png_write_image(a1, *(uint32_t *)(a2 + 248));
      goto LABEL_19;
    }
LABEL_26:
    png_set_invert_alpha(a1);
    if ( *(char *)(a2 + 9) >= 0 )
      goto LABEL_19;
    goto LABEL_27;
  }
}

// ----------------------------------------------------------------------------
// Function: png_do_pack  (binary VA: 0xfb2f40)
// Original: png_do_pack
// ----------------------------------------------------------------------------
int png_do_pack(uint32_t *a1, uint8_t *a2, int a3)
{
  uint32_t *v3;
  int result;
  int v5;
  unsigned int v6;
  int v7;
  uint8_t *v8;
  int v9;
  int v10;
  int v11;
  char v12;
  int v13;
  uint8_t *v14;
  int v15;
  uint8_t *v16;
  uint8_t *v17;
  int v18;
  uint8_t *v19;
  int v20;

  v3 = a1;
  result = (int)(uintptr_t)(a2);
  if ( (a1[2] & 0xFFFF00) != 0x10800 )
    return result;
  switch ( a3 )
  {
    case 2:
      v20 = *a1;
      v5 = 0;
      if ( *a1 == 0 )
        goto LABEL_6;
      v13 = 6;
      v14 = a2;
      v15 = 0;
      do
      {
        v15 |= (a2[v5] & 3) << v13;
        if ( v13 != 0 )
        {
          v13 -= 2;
        }
        else
        {
          *v14 = v15;
          v13 = 6;
          ++v14;
          v15 = 0;
        }
        ++v5;
      }
      while ( v5 != v20 );
      v16 = v14;
      v3 = a1;
      if ( v13 != 6 )
      {
        *v16 = v15;
        v5 = *a1;
        goto LABEL_6;
      }
      break;
    case 4:
      v18 = *a1;
      v5 = 0;
      if ( *a1 == 0 )
        goto LABEL_6;
      v7 = 4;
      v8 = a2;
      v9 = 0;
      do
      {
        v9 |= (a2[v5] & 0xF) << v7;
        if ( v7 != 0 )
        {
          v7 -= 4;
        }
        else
        {
          *v8 = v9;
          v7 = 4;
          ++v8;
          v9 = 0;
        }
        ++v5;
      }
      while ( v5 != v18 );
      v17 = v8;
      v3 = a1;
      if ( v7 != 4 )
        *v17 = v9;
      break;
    case 1:
      v10 = *a1;
      v5 = 0;
      if ( *a1 == 0 )
        goto LABEL_6;
      v19 = a2;
      v11 = 128;
      v12 = 0;
      do
      {
        if ( a2[v5] != 0 )
          v12 |= v11;
        if ( v11 > 1 )
        {
          v11 >>= 1;
        }
        else
        {
          *v19++ = v12;
          v12 = 0;
          v11 = 128;
        }
        ++v5;
      }
      while ( v5 != v10 );
      v3 = a1;
      if ( v11 != 128 )
      {
        *v19 = v12;
        v5 = *a1;
        goto LABEL_6;
      }
      break;
    default:
      break;
  }
  v5 = *v3;
LABEL_6:
  *((uint8_t *)v3 + 9) = a3;
  LOBYTE(result) = *((uint8_t *)v3 + 10) * a3;
  *((uint8_t *)v3 + 11) = result;
  if ( (uint8_t)result <= 7u )
  {
    result = (uint8_t)result;
    v6 = ((unsigned int)(uint8_t)result * v5 + 7) >> 3;
  }
  else
  {
    result = (uint8_t)result >> 3;
    v6 = result * v5;
  }
  v3[1] = v6;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_shift  (binary VA: 0xfb3120)
// Original: png_do_shift
// ----------------------------------------------------------------------------
int png_do_shift(int a1, uint8_t *a2, uint8_t *a3)
{
  int result;
  char v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int16_t v11;
  int v12;
  int v13;
  uint8_t v14;
  int v15;
  int v16;
  int v17;
  bool v18;
  char v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  uint16_t v27;
  int v28;
  uint8_t v29;
  unsigned int v30;
  int v31;
  uint8_t *v32;
  int v33;
  int v34;
  uint8_t v35;
  int v36;
  int v37;
  unsigned int v38;
  uint32_t v39[4];
  int v40;
  int v41;
  int v42;

  result = a1;
  v4 = *(uint8_t *)(a1 + 8);
  if ( v4 != 3 )
  {
    v35 = *(uint8_t *)(a1 + 9);
    if ( (*(uint8_t *)(a1 + 8) & 2) != 0 )
    {
      v23 = 3;
      v40 = *a3;
      v25 = 4;
      v39[0] = v35 - v40;
      v41 = a3[1];
      v39[1] = v35 - v41;
      v42 = a3[2];
      v39[2] = v35 - v42;
      v5 = 3;
    }
    else
    {
      v23 = 1;
      v40 = a3[3];
      v25 = 2;
      v39[0] = v35 - v40;
      v5 = 1;
    }
    if ( (v4 & 4) != 0 )
    {
      v6 = a3[4];
      *(&v40 + v5) = v6;
      v39[v5] = v35 - v6;
      v23 = v25;
    }
    if ( v35 > 7u )
    {
      v10 = *(uint32_t *)a1 * v23;
      if ( v35 == 8 )
      {
        v31 = *(uint32_t *)a1 * v23;
        if ( v10 != 0 )
        {
          v38 = 0;
          do
          {
            v14 = a2[v38];
            a2[v38] = 0;
            result = v39[v38 % v23];
            v28 = *(&v40 + v38 % v23);
            if ( result > -v28 )
            {
              v16 = -result;
              v17 = 0;
              v15 = -v28;
              do
              {
                while ( result > 0 )
                {
                  v17 |= v14 << result;
                  a2[v38] = v17;
                  result -= v28;
                  v16 += v28;
                  if ( result <= v15 )
                    goto LABEL_39;
                }
                v17 |= (int)v14 >> v16;
                a2[v38] = v17;
                result -= v28;
                v16 += v28;
              }
              while ( result > v15 );
            }
LABEL_39:
            ++v38;
          }
          while ( v38 != v31 );
        }
      }
      else
      {
        v22 = *(uint32_t *)a1 * v23;
        if ( v10 != 0 )
        {
          v30 = 0;
          v32 = a2;
          do
          {
            LOBYTE(v11) = 0;
            result = v39[v30 % v23];
            v34 = *(&v40 + v30 % v23);
            LOBYTE(v12) = 0;
            if ( result > -v34 )
            {
              v13 = -result;
              v37 = (uint16_t)((*v32 << 8) + v32[1]);
              v12 = 0;
              do
              {
                v27 = v12 | (v37 << result);
                v12 |= v37 >> v13;
                if ( result > 0 )
                  v12 = v27;
                result -= v34;
                LOBYTE(v13) = v34 + v13;
              }
              while ( result > -v34 );
              v11 = BYTE1(v12);
            }
            ++v30;
            *v32 = v11;
            v32[1] = v12;
            v32 += 2;
          }
          while ( v30 != v22 );
        }
      }
    }
    else
    {
      v21 = *(uint32_t *)(a1 + 4);
      result = a3[3];
      if ( (uint8_t)result != 1 || (v29 = 85, v35 != 2) )
      {
        v29 = 0xFFu;
        if ( v35 == 4 )
        {
          v18 = (uint8_t)result == 3;
          v19 = -1;
          result = 17;
          if ( v18 )
            v19 = 17;
          v29 = v19;
        }
      }
      if ( v21 != 0 )
      {
        v24 = v39[0];
        v33 = v40;
        v7 = -v40;
        v36 = 0;
        v20 = -v39[0];
        do
        {
          result = a2[v36];
          a2[v36] = 0;
          if ( v7 < v24 )
          {
            v8 = v20;
            v26 = (uint8_t)result;
            v9 = 0;
            result = v24;
            do
            {
              while ( result > 0 )
              {
                v9 |= v26 << result;
                a2[v36] = v9;
                result += v7;
                v8 += v33;
                if ( result <= v7 )
                  goto LABEL_16;
              }
              v9 |= (v26 >> v8) & v29;
              a2[v36] = v9;
              result += v7;
              v8 += v33;
            }
            while ( result > v7 );
          }
LABEL_16:
          ++v36;
        }
        while ( v36 != v21 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_write_swap_alpha  (binary VA: 0xfb34a0)
// Original: png_do_write_swap_alpha
// ----------------------------------------------------------------------------
unsigned int png_do_write_swap_alpha(unsigned int a1, __m128i *a2)
{
  unsigned int result;
  char v3;
  unsigned int v4;
  int v5;
  __m128i *v6;
  unsigned int v7;
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
  __m128i *v48;
  int8_t v49; // di
  int8_t v50; // si
  int8_t v51;
  unsigned int v52;
  int v53;
  __m128i *v54;
  unsigned int v55;
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
  int8_t v156; // si
  int8_t v157; // di
  unsigned int v158;
  int v159;
  __m128i *v160;
  unsigned int v161;
  __m128i v162;
  __m128i v163;
  __m128i v164;
  __m128i v165;
  __m128i v166;
  __m128i v167;
  __m128i v168;
  __m128i v169;
  __m128i *v170;
  int8_t v171; // si
  unsigned int v172;
  int v173;
  __m128i *v174;
  unsigned int v175;
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
  __m128i *v216;
  int8_t v217; // si
  int8_t v218; // di
  __m128i v219;
  __m128i v220;
  unsigned int v221;
  __m128i v222;
  __m128i v223;
  __m128i v224;
  __m128i v225;
  __m128i v226;
  __m128i v227;
  unsigned int v228;
  __m128i v229;
  __m128i v230;
  __m128i v231;
  __m128i v232;
  __m128i v233;
  __m128i v234;
  __m128i v235;
  __m128i v236;
  __m128i v237;
  unsigned int v238;
  unsigned int v239;
  unsigned int v240;
  unsigned int v241;
  __m128i v242;
  __m128i v243;
  __m128i v244;
  __m128i v245;
  __m128i v246;
  int8_t v247;
  unsigned int v248;
  unsigned int v249;

  result = a1;
  v3 = *(uint8_t *)(a1 + 8);
  if ( v3 == 6 )
  {
    result = *(uint32_t *)a1;
    if ( *(uint8_t *)(a1 + 9) != 8 )
    {
      v221 = *(uint32_t *)a1;
      if ( result == 0 )
        return result;
      v52 = result >> 4;
      v53 = 16 * (result >> 4);
      if ( result > 0xF && v53 != 0 )
      {
        v54 = a2;
        v55 = 0;
        do
        {
          v56 = v54[1];
          v242 = v54[6];
          v233 = v54[5];
          v57 = _mm_unpacklo_epi8(*v54, v56);
          v58 = v54[2];
          v229 = v54[4];
          v59 = _mm_unpackhi_epi8(*v54, v56);
          v60 = v54[3];
          v61 = _mm_unpacklo_epi8(v57, v59);
          v62 = _mm_unpackhi_epi8(v57, v59);
          v224 = v54[7];
          v63 = _mm_unpackhi_epi8(v58, v60);
          v64 = _mm_unpackhi_epi8(v61, v62);
          v65 = _mm_unpacklo_epi8(v61, v62);
          v66 = v65;
          v67 = _mm_unpacklo_epi8(v58, v60);
          v68 = _mm_unpacklo_epi8(v67, v63);
          v69 = _mm_unpackhi_epi8(v67, v63);
          v70 = _mm_unpacklo_epi8(v65, v64);
          v71 = _mm_unpackhi_epi8(v66, v64);
          v72 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v58, v60), v63), v69);
          v73 = _mm_unpackhi_epi8(v68, v69);
          v74 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v68, v69), v73);
          v75 = _mm_unpackhi_epi8(v229, v233);
          v76 = _mm_unpacklo_epi8(v229, v233);
          v77 = _mm_unpacklo_epi8(v76, v75);
          v78 = _mm_unpackhi_epi8(v76, v75);
          v219 = _mm_unpackhi_epi8(v72, v73);
          v79 = _mm_unpackhi_epi8(v77, v78);
          v80 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v77, v78), v79);
          v81 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v229, v233), v75), v78), v79);
          v82 = _mm_unpacklo_epi8(v242, v224);
          ++v55;
          v83 = _mm_unpackhi_epi8(v242, v224);
          v84 = _mm_unpackhi_epi8(v82, v83);
          v85 = _mm_unpacklo_epi8(v82, v83);
          v234 = _mm_unpackhi_epi8(v85, v84);
          v86 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v85, v84), v234);
          v87 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v242, v224), v83), v84);
          v88 = _mm_unpackhi_epi8(v70, v74);
          v243 = _mm_unpackhi_epi8(v87, v234);
          v89 = _mm_unpacklo_epi8(v70, v74);
          v225 = _mm_unpackhi_epi8(v89, v88);
          v90 = _mm_unpacklo_epi8(v89, v88);
          v91 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v70, v74), v88);
          v92 = _mm_unpackhi_epi8(v90, v225);
          v230 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v91, v225), v92);
          v93 = _mm_unpacklo_epi8(v80, v86);
          v94 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v90, v225), v92);
          v95 = _mm_unpackhi_epi8(v80, v86);
          v96 = _mm_unpackhi_epi8(v93, v95);
          v97 = _mm_unpacklo_epi8(v93, v95);
          v226 = v96;
          v98 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v80, v86), v95), v96);
          v99 = _mm_unpackhi_epi8(v97, v96);
          v100 = _mm_unpackhi_epi8(v71, v219);
          v235 = _mm_unpackhi_epi8(v98, v99);
          v101 = _mm_unpacklo_epi8(v71, v219);
          v102 = _mm_unpacklo_epi8(v101, v100);
          v103 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v97, v226), v99);
          v104 = _mm_unpackhi_epi8(v101, v100);
          v105 = _mm_unpackhi_epi8(v102, v104);
          v106 = _mm_unpacklo_epi8(v102, v104);
          v107 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v71, v219), v100), v104);
          v108 = _mm_unpackhi_epi8(v81, v243);
          v109 = _mm_unpacklo_epi8(v106, v105);
          v110 = _mm_unpackhi_epi8(v107, v105);
          v111 = _mm_unpacklo_epi8(v81, v243);
          v112 = _mm_unpacklo_epi8(v111, v108);
          v113 = _mm_unpackhi_epi8(v111, v108);
          v227 = v110;
          v114 = _mm_unpackhi_epi8(v112, v113);
          v115 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v112, v113), v114);
          v116 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v81, v243), v108), v113), v114);
          v222 = _mm_unpackhi_epi8(v94, v103);
          v117 = _mm_unpacklo_epi8(v94, v103);
          v118 = _mm_unpacklo_epi8(v117, v222);
          v119 = _mm_unpackhi_epi8(v117, v222);
          v120 = _mm_unpackhi_epi8(v118, v119);
          v121 = _mm_unpacklo_epi8(v118, v119);
          v122 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v94, v103), v222), v119);
          v223 = _mm_unpackhi_epi8(v109, v115);
          v123 = _mm_unpacklo_epi8(v109, v115);
          v124 = _mm_unpacklo_epi8(v123, v223);
          v125 = _mm_unpackhi_epi8(v123, v223);
          v126 = _mm_unpacklo_epi8(v121, v120);
          v127 = _mm_unpackhi_epi8(v122, v120);
          v128 = _mm_unpackhi_epi8(v124, v125);
          v129 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v124, v125), v128);
          v130 = _mm_unpackhi_epi8(
                   _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v109, v115), v223), v125),
                   v128);
          v131 = _mm_unpacklo_epi8(v230, v235);
          v132 = _mm_unpackhi_epi8(v230, v235);
          v133 = _mm_unpackhi_epi8(v131, v132);
          v134 = _mm_unpacklo_epi8(v131, v132);
          v244 = v133;
          v135 = _mm_unpackhi_epi8(v134, v133);
          v136 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v134, v244), v135);
          v220 = _mm_unpackhi_epi8(
                   _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v230, v235), v132), v244),
                   v135);
          v245 = _mm_unpackhi_epi8(v227, v116);
          v137 = _mm_unpacklo_epi8(v227, v116);
          v138 = _mm_unpacklo_epi8(v137, v245);
          v231 = _mm_unpackhi_epi8(v137, v245);
          v236 = _mm_unpackhi_epi8(v138, v231);
          v139 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v138, v231), v236);
          v140 = _mm_unpacklo_epi8(v136, v220);
          v141 = _mm_unpackhi_epi8(v136, v220);
          v142 = _mm_unpackhi_epi8(
                   _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v227, v116), v245), v231),
                   v236);
          v246 = v140;
          v143 = _mm_unpacklo_epi8(v139, v142);
          v232 = _mm_unpackhi_epi8(v139, v142);
          v144 = _mm_unpacklo_epi8(v127, v126);
          v145 = _mm_unpackhi_epi8(v127, v126);
          v146 = _mm_unpacklo_epi8(v130, v129);
          v147 = _mm_unpackhi_epi8(v130, v129);
          v237 = _mm_unpacklo_epi8(v246, v144);
          v148 = _mm_unpacklo_epi8(v143, v146);
          v149 = _mm_unpacklo_epi8(v141, v145);
          v150 = _mm_unpackhi_epi8(v141, v145);
          v151 = _mm_unpackhi_epi8(v143, v146);
          v152 = _mm_unpacklo_epi8(v232, v147);
          v153 = _mm_unpackhi_epi8(v232, v147);
          *v54 = _mm_unpacklo_epi8(v237, v148);
          v54[1] = _mm_unpackhi_epi8(v237, v148);
          v154 = _mm_unpackhi_epi8(v246, v144);
          v54[2] = _mm_unpacklo_epi8(v154, v151);
          v54[3] = _mm_unpackhi_epi8(v154, v151);
          v54[4] = _mm_unpacklo_epi8(v149, v152);
          v54[5] = _mm_unpackhi_epi8(v149, v152);
          v54[6] = _mm_unpacklo_epi8(v150, v153);
          v54[7] = _mm_unpackhi_epi8(v150, v153);
          v54 += 8;
        }
        while ( v55 < v52 );
        result = (unsigned int)(uintptr_t)(&a2[v53 / 2u]);
        if ( v221 == v53 )
          return result;
        v155 = &a2[v53 / 2u];
        v238 = v53;
      }
      else
      {
        v155 = a2;
        result = (unsigned int)(uintptr_t)(a2);
        v238 = 0;
      }
      do
      {
        ++v238;
        v247 = *(uint8_t *)(result + 1);
        v156 = *(uint8_t *)result;
g4_m128_lane<int8_t>(*(v155), 0) = *(uint8_t *)(result + 2);
g4_m128_lane<int8_t>(*(v155), 1) = *(uint8_t *)(result + 3);
g4_m128_lane<int8_t>(*(v155), 2) = *(uint8_t *)(result + 4);
g4_m128_lane<int8_t>(*(v155), 3) = *(uint8_t *)(result + 5);
g4_m128_lane<int8_t>(*(v155), 4) = *(uint8_t *)(result + 6);
        v157 = *(uint8_t *)(result + 7);
        result += 8;
g4_m128_lane<int8_t>(*(v155), 5) = v157;
g4_m128_lane<int8_t>(*(v155), 6) = v156;
g4_m128_lane<int8_t>(*(v155), 7) = v247;
        v155 = (__m128i *)((char *)v155 + 8);
      }
      while ( v221 > v238 );
      return result;
    }
    v249 = *(uint32_t *)a1;
    if ( result == 0 )
      return result;
    v172 = result >> 4;
    v173 = 16 * (result >> 4);
    if ( v173 != 0 && result > 0xF )
    {
      v174 = a2;
      v175 = 0;
      do
      {
        v176 = v174[1];
        v177 = _mm_unpackhi_epi8(*v174, v176);
        v178 = v174[2];
        v179 = _mm_unpacklo_epi8(*v174, v176);
        v180 = _mm_unpacklo_epi8(v179, v177);
        v181 = _mm_unpackhi_epi8(v179, v177);
        v182 = v174[3];
        v183 = _mm_unpackhi_epi8(v180, v181);
        v184 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(*v174, v176), v177), v181);
        v185 = _mm_unpackhi_epi8(v178, v182);
        v186 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v180, v181), v183);
        v187 = _mm_unpacklo_epi8(v178, v182);
        v188 = _mm_unpacklo_epi8(v187, v185);
        v189 = _mm_unpackhi_epi8(v187, v185);
        v190 = _mm_unpackhi_epi8(v184, v183);
        v191 = _mm_unpackhi_epi8(v188, v189);
        v192 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v188, v189), v191);
        v193 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v178, v182), v185), v189);
        v194 = _mm_unpacklo_epi8(v186, v192);
        v195 = _mm_unpackhi_epi8(v186, v192);
        v196 = _mm_unpackhi_epi8(v193, v191);
        v197 = _mm_unpackhi_epi8(v194, v195);
        v198 = _mm_unpacklo_epi8(v194, v195);
        v199 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v186, v192), v195);
        v200 = _mm_unpackhi_epi8(v190, v196);
        v201 = _mm_unpackhi_epi8(v198, v197);
        v202 = _mm_unpacklo_epi8(v198, v197);
        v203 = _mm_unpacklo_epi8(v199, v197);
        v204 = _mm_unpacklo_epi8(v190, v196);
        v205 = _mm_unpacklo_epi8(v204, v200);
        v206 = _mm_unpacklo_epi8(v202, v201);
        v207 = _mm_unpackhi_epi8(v204, v200);
        v208 = _mm_unpackhi_epi8(v203, v201);
        v209 = _mm_unpackhi_epi8(v205, v207);
        v210 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v205, v207), v209);
        v211 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v190, v196), v200), v207), v209);
        v212 = _mm_unpacklo_epi8(v210, v211);
        v213 = _mm_unpacklo_epi8(v208, v206);
        v214 = _mm_unpackhi_epi8(v208, v206);
        v215 = _mm_unpackhi_epi8(v210, v211);
        *v174 = _mm_unpacklo_epi8(v212, v213);
        ++v175;
        v174[1] = _mm_unpackhi_epi8(v212, v213);
        v174[2] = _mm_unpacklo_epi8(v215, v214);
        v174[3] = _mm_unpackhi_epi8(v215, v214);
        v174 += 4;
      }
      while ( v175 < v172 );
      result = (unsigned int)(uintptr_t)(&a2[v173 / 4u]);
      if ( v173 == v249 )
        return result;
      v216 = &a2[v173 / 4u];
      v240 = v173;
    }
    else
    {
      v216 = a2;
      result = (unsigned int)(uintptr_t)(a2);
      v240 = 0;
    }
    do
    {
      ++v240;
      v217 = *(uint8_t *)result;
g4_m128_lane<int8_t>(*(v216), 0) = *(uint8_t *)(result + 1);
g4_m128_lane<int8_t>(*(v216), 1) = *(uint8_t *)(result + 2);
      v218 = *(uint8_t *)(result + 3);
      result += 4;
g4_m128_lane<int8_t>(*(v216), 2) = v218;
g4_m128_lane<int8_t>(*(v216), 3) = v217;
      v216 = (__m128i *)((char *)v216 + 4);
    }
    while ( v249 > v240 );
    return result;
  }
  if ( v3 != 4 )
    return result;
  if ( *(uint8_t *)(a1 + 9) == 8 )
  {
    v158 = *(uint32_t *)a1;
    if ( *(uint32_t *)a1 == 0 )
      return result;
    v159 = 16 * (v158 >> 4);
    if ( v158 > 0xF && v159 != 0 )
    {
      v160 = a2;
      v161 = 0;
      do
      {
        v162 = v160[1];
        v163 = _mm_unpackhi_epi8(*v160, v162);
        v164 = _mm_unpacklo_epi8(*v160, v162);
        v165 = _mm_unpacklo_epi8(v164, v163);
        v166 = _mm_unpackhi_epi8(v164, v163);
        v167 = _mm_unpackhi_epi8(v165, v166);
        v168 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(*v160, v162), v163), v166), v167);
        v169 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v165, v166), v167);
        ++v161;
        *v160 = _mm_unpacklo_epi8(v168, v169);
        v160[1] = _mm_unpackhi_epi8(v168, v169);
        v160 += 2;
      }
      while ( v161 < v158 >> 4 );
      result = (unsigned int)(uintptr_t)(&a2[2 * (v158 >> 4)]);
      if ( v158 == v159 )
        return result;
      v170 = &a2[2 * (v158 >> 4)];
      v248 = v158;
      v239 = 16 * (v158 >> 4);
    }
    else
    {
      v170 = a2;
      result = (unsigned int)(uintptr_t)(a2);
      v248 = *(uint32_t *)a1;
      v239 = 0;
    }
    do
    {
      ++v239;
      v171 = *(uint8_t *)result;
g4_m128_lane<int8_t>(*(v170), 0) = *(uint8_t *)(result + 1);
g4_m128_lane<int8_t>(*(v170), 1) = v171;
      result += 2;
      v170 = (__m128i *)((char *)v170 + 2);
    }
    while ( v248 > v239 );
    return result;
  }
  result = *(uint32_t *)a1;
  v228 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 == 0 )
    return result;
  v4 = result >> 4;
  v5 = 16 * (result >> 4);
  if ( result <= 0xF || v5 == 0 )
  {
    v48 = a2;
    result = (unsigned int)(uintptr_t)(a2);
    v241 = 0;
    do
    {
LABEL_12:
      ++v241;
      v49 = *(uint8_t *)result;
      v50 = *(uint8_t *)(result + 1);
g4_m128_lane<int8_t>(*(v48), 0) = *(uint8_t *)(result + 2);
      v51 = *(uint8_t *)(result + 3);
      result += 4;
g4_m128_lane<int8_t>(*(v48), 1) = v51;
g4_m128_lane<int8_t>(*(v48), 2) = v49;
g4_m128_lane<int8_t>(*(v48), 3) = v50;
      v48 = (__m128i *)((char *)v48 + 4);
    }
    while ( v228 > v241 );
    return result;
  }
  v6 = a2;
  v7 = 0;
  do
  {
    v8 = v6[1];
    v9 = _mm_unpackhi_epi8(*v6, v8);
    v10 = v6[2];
    v11 = _mm_unpacklo_epi8(*v6, v8);
    v12 = _mm_unpacklo_epi8(v11, v9);
    v13 = _mm_unpackhi_epi8(v11, v9);
    v14 = v6[3];
    v15 = _mm_unpackhi_epi8(v12, v13);
    v16 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(*v6, v8), v9), v13);
    v17 = _mm_unpackhi_epi8(v10, v14);
    v18 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v12, v13), v15);
    v19 = _mm_unpacklo_epi8(v10, v14);
    v20 = _mm_unpacklo_epi8(v19, v17);
    v21 = _mm_unpackhi_epi8(v19, v17);
    v22 = _mm_unpackhi_epi8(v16, v15);
    v23 = _mm_unpackhi_epi8(v20, v21);
    v24 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v20, v21), v23);
    v25 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v10, v14), v17), v21);
    v26 = _mm_unpacklo_epi8(v18, v24);
    v27 = _mm_unpackhi_epi8(v18, v24);
    v28 = _mm_unpackhi_epi8(v25, v23);
    v29 = _mm_unpackhi_epi8(v26, v27);
    v30 = _mm_unpacklo_epi8(v26, v27);
    v31 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v18, v24), v27);
    v32 = _mm_unpackhi_epi8(v22, v28);
    v33 = _mm_unpackhi_epi8(v30, v29);
    v34 = _mm_unpacklo_epi8(v30, v29);
    v35 = _mm_unpacklo_epi8(v31, v29);
    v36 = _mm_unpacklo_epi8(v22, v28);
    v37 = _mm_unpacklo_epi8(v36, v32);
    v38 = _mm_unpacklo_epi8(v34, v33);
    v39 = _mm_unpackhi_epi8(v35, v33);
    v40 = _mm_unpackhi_epi8(v36, v32);
    v41 = _mm_unpackhi_epi8(v37, v40);
    v42 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v22, v28), v32), v40), v41);
    v43 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v37, v40), v41);
    v44 = _mm_unpacklo_epi8(v39, v38);
    v45 = _mm_unpackhi_epi8(v39, v38);
    v46 = _mm_unpacklo_epi8(v42, v43);
    v47 = _mm_unpackhi_epi8(v42, v43);
    ++v7;
    *v6 = _mm_unpacklo_epi8(v44, v46);
    v6[1] = _mm_unpackhi_epi8(v44, v46);
    v6[2] = _mm_unpacklo_epi8(v45, v47);
    v6[3] = _mm_unpackhi_epi8(v45, v47);
    v6 += 4;
  }
  while ( v7 < v4 );
  result = (unsigned int)(uintptr_t)(&a2[v5 / 4u]);
  if ( v228 != v5 )
  {
    v48 = &a2[v5 / 4u];
    v241 = v5;
    goto LABEL_12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_write_invert_alpha  (binary VA: 0xfb3f70)
// Original: png_do_write_invert_alpha
// ----------------------------------------------------------------------------
__m128i * png_do_write_invert_alpha(__m128i *a1, __m128i *a2)
{
  __m128i *result;
  __m128i *v3;
  int8_t v4;
  __m128i *v5;
  __m128i *v6;
  unsigned int v7;
  unsigned int v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  int8_t v17; // si
  unsigned int v18;

  result = a1;
  v3 = a2;
  v4 =g4_m128_lane<int8_t>(*(a1), 8);
  if ( v4 == 6 )
  {
    v6 = (__m128i *)g4_m128_lane<int32_t>(*(a1), 0);
    if (g4_m128_lane<int8_t>(*(a1), 9) == 8 )
    {
      if ( v6 != nullptr )
      {
        for ( result = nullptr; result != v6; result = (__m128i *)((char *)result + 1) )
g4_m128_lane<int8_t>(*(a2), 4 * (uint32_t)(uintptr_t)(result) + 3) = ~g4_m128_lane<int8_t>(*(a2), 4 * (uint32_t)(uintptr_t)(result) + 3);
      }
    }
    else if ( v6 != nullptr )
    {
      result = nullptr;
      do
      {
        result = (__m128i *)((char *)result + 1);
g4_m128_lane<int8_t>(*(v3), 6) = ~g4_m128_lane<int8_t>(*(v3), 6);
g4_m128_lane<int8_t>(*(v3), 7) = ~g4_m128_lane<int8_t>(*(v3), 7);
        v3 = (__m128i *)((char *)v3 + 8);
      }
      while ( result != v6 );
    }
  }
  else
  {
    if ( v4 != 4 )
      return result;
    if (g4_m128_lane<int8_t>(*(a1), 9) == 8 )
    {
      v7 =g4_m128_lane<int32_t>(*(a1), 0);
      if (g4_m128_lane<int32_t>(*(a1), 0) == 0 )
        return result;
      v18 = 16 * (v7 >> 4);
      result = a2;
      if ( v18 != 0 && v7 > 0xF )
      {
        v8 = 0;
        do
        {
          v9 = result[1];
          v10 = _mm_unpackhi_epi8(*result, v9);
          v11 = _mm_unpacklo_epi8(*result, v9);
          v12 = _mm_unpacklo_epi8(v11, v10);
          v13 = _mm_unpackhi_epi8(v11, v10);
          v14 = _mm_unpackhi_epi8(v12, v13);
          v15 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v12, v13), v14);
          v16 = _mm_xor_si128(
                  _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(*result, v9), v10), v13), v14),
                  g4_m128_from<__m128i>(-1LL));
          ++v8;
          *result = _mm_unpacklo_epi8(v15, v16);
          result[1] = _mm_unpackhi_epi8(v15, v16);
          result += 2;
        }
        while ( v8 < v7 >> 4 );
        result = &a2[2 * (v7 >> 4)];
        if ( v7 == v18 )
          return result;
        v3 = &a2[2 * (v7 >> 4)];
      }
      else
      {
        v18 = 0;
      }
      do
      {
        ++v18;
g4_m128_lane<int8_t>(*(v3), 0) =g4_m128_lane<int8_t>(*(result), 0);
        v17 =g4_m128_lane<int8_t>(*(result), 1);
        result = (__m128i *)((char *)result + 2);
g4_m128_lane<int8_t>(*(v3), 1) = ~v17;
        v3 = (__m128i *)((char *)v3 + 2);
      }
      while ( v18 < v7 );
      return result;
    }
    v5 = (__m128i *)g4_m128_lane<int32_t>(*(a1), 0);
    if (g4_m128_lane<int32_t>(*(a1), 0) != 0 )
    {
      result = nullptr;
      do
      {
        result = (__m128i *)((char *)result + 1);
g4_m128_lane<int8_t>(*(v3), 2) = ~g4_m128_lane<int8_t>(*(v3), 2);
g4_m128_lane<int8_t>(*(v3), 3) = ~g4_m128_lane<int8_t>(*(v3), 3);
        v3 = (__m128i *)((char *)v3 + 4);
      }
      while ( result != v5 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_write_transformations  (binary VA: 0xfb4100)
// Original: png_do_write_transformations
// ----------------------------------------------------------------------------
void png_do_write_transformations(int a1)
{
  int v1;
  void (*v2)(int, int, int);

  if ( a1 != 0 )
  {
    v1 = *(uint32_t *)(a1 + 92);
    if ( (v1 & 0x100000) != 0 && (v2 = *(void (**)(int, int, int))(a1 + 72)) != nullptr )
    {
      v2(a1, a1 + 236, *(uint32_t *)(a1 + 216) + 1);
      v1 = *(uint32_t *)(a1 + 92);
      if ( (v1 & 0x8000) != 0 )
      {
LABEL_16:
        png_do_strip_filler(a1 + 236, *(uint32_t *)(a1 + 216) + 1, *(uint32_t *)(a1 + 88));
        v1 = *(uint32_t *)(a1 + 92);
        if ( (v1 & 0x10000) != 0 )
        {
LABEL_17:
          png_do_packswap(a1 + 236, (uint8_t *)(*(uint32_t *)(a1 + 216) + 1));
          v1 = *(uint32_t *)(a1 + 92);
          if ( (v1 & 4) != 0 )
          {
LABEL_18:
            png_do_pack((uint32_t *)(a1 + 236), (uint8_t *)(*(uint32_t *)(a1 + 216) + 1), *(uint8_t *)(a1 + 275));
            v1 = *(uint32_t *)(a1 + 92);
            if ( (v1 & 0x10) != 0 )
            {
LABEL_19:
              png_do_swap((__m128i *)(a1 + 236), (__m128i *)(*(uint32_t *)(a1 + 216) + 1));
              v1 = *(uint32_t *)(a1 + 92);
              if ( (v1 & 8) != 0 )
              {
LABEL_20:
                png_do_shift(a1 + 236, (uint8_t *)(*(uint32_t *)(a1 + 216) + 1), (uint8_t *)(a1 + 365));
                v1 = *(uint32_t *)(a1 + 92);
                if ( (v1 & 0x20000) != 0 )
                {
LABEL_21:
                  png_do_write_swap_alpha(a1 + 236, (__m128i *)(*(uint32_t *)(a1 + 216) + 1));
                  v1 = *(uint32_t *)(a1 + 92);
                  if ( (v1 & 0x80000) != 0 )
                  {
LABEL_22:
                    png_do_write_invert_alpha((__m128i *)(a1 + 236), (__m128i *)(*(uint32_t *)(a1 + 216) + 1));
                    v1 = *(uint32_t *)(a1 + 92);
                    if ( (v1 & 1) == 0 )
                      goto LABEL_11;
                    goto LABEL_23;
                  }
LABEL_10:
                  if ( (v1 & 1) != 0 )
                  {
LABEL_23:
                    png_do_bgr((int *)(a1 + 236), (uint8_t *)(*(uint32_t *)(a1 + 216) + 1));
                    v1 = *(uint32_t *)(a1 + 92);
                  }
LABEL_11:
                  if ( (v1 & 0x20) != 0 )
                    png_do_invert(a1 + 236, *(uint32_t *)(a1 + 216) + 1);
                  return;
                }
LABEL_9:
                if ( (v1 & 0x80000) != 0 )
                  goto LABEL_22;
                goto LABEL_10;
              }
LABEL_8:
              if ( (v1 & 0x20000) != 0 )
                goto LABEL_21;
              goto LABEL_9;
            }
LABEL_7:
            if ( (v1 & 8) != 0 )
              goto LABEL_20;
            goto LABEL_8;
          }
LABEL_6:
          if ( (v1 & 0x10) != 0 )
            goto LABEL_19;
          goto LABEL_7;
        }
LABEL_5:
        if ( (v1 & 4) != 0 )
          goto LABEL_18;
        goto LABEL_6;
      }
    }
    else if ( (v1 & 0x8000) != 0 )
    {
      goto LABEL_16;
    }
    if ( (v1 & 0x10000) != 0 )
      goto LABEL_17;
    goto LABEL_5;
  }
}

// ----------------------------------------------------------------------------
// Function: png_do_write_intrapixel  (binary VA: 0xfb4320)
// Original: png_do_write_intrapixel
// ----------------------------------------------------------------------------
int png_do_write_intrapixel(int *a1, int a2)
{
  int result;
  char v3;
  int v4;
  char v5;
  int v6;
  int v7;
  char v8;
  int v9;
  uint16_t v10;
  int16_t v11; // di
  int16_t v12;
  int v13;
  int v14;

  result = a2;
  v3 = *((uint8_t *)a1 + 8);
  if ( (v3 & 2) != 0 )
  {
    v4 = *a1;
    v5 = *((uint8_t *)a1 + 9);
    if ( v5 == 8 )
    {
      if ( v3 == 2 )
      {
        v6 = 3;
      }
      else
      {
        v6 = 4;
        if ( v3 != 6 )
          return result;
      }
      if ( v4 != 0 )
      {
        v7 = 0;
        do
        {
          ++v7;
          v8 = *(uint8_t *)(result + 1);
          *(uint8_t *)result -= v8;
          *(uint8_t *)(result + 2) -= v8;
          result += v6;
        }
        while ( v7 != v4 );
      }
    }
    else
    {
      if ( v5 != 16 )
        return result;
      if ( v3 == 2 )
      {
        v13 = 6;
      }
      else
      {
        if ( v3 != 6 )
          return result;
        v13 = 8;
      }
      if ( v4 != 0 )
      {
        v9 = 0;
        v14 = *a1;
        do
        {
          ++v9;
          v10 = __builtin_bswap16(*(uint16_t *)(result + 2));
          v11 = __builtin_bswap16(*(uint16_t *)result) - v10;
          v12 = __builtin_bswap16(*(uint16_t *)(result + 4)) - v10;
          *(uint8_t *)result = HIBYTE(v11);
          *(uint8_t *)(result + 1) = v11;
          *(uint8_t *)(result + 5) = v12;
          *(uint8_t *)(result + 4) = HIBYTE(v12);
          result += v13;
        }
        while ( v9 != v14 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_save_uint_32  (binary VA: 0xfb47b0)
// Original: png_save_uint_32
// ----------------------------------------------------------------------------
uint8_t * png_save_uint_32(uint8_t *a1, int a2)
{
  *a1 = HIBYTE(a2);
  a1[3] = a2;
  a1[1] = BYTE2(a2);
  a1[2] = BYTE1(a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: png_save_int_32  (binary VA: 0xfb47e0)
// Original: png_save_int_32
// ----------------------------------------------------------------------------
uint8_t * png_save_int_32(uint8_t *a1, int a2)
{
  *a1 = HIBYTE(a2);
  a1[3] = a2;
  a1[1] = BYTE2(a2);
  a1[2] = BYTE1(a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: png_save_uint_16  (binary VA: 0xfb4810)
// Original: png_save_uint_16
// ----------------------------------------------------------------------------
uint8_t * png_save_uint_16(uint8_t *a1, int16_t a2)
{
  *a1 = HIBYTE(a2);
  a1[1] = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: png_write_sig  (binary VA: 0xfb4830)
// Original: png_write_sig
// ----------------------------------------------------------------------------
int png_write_sig(int a1)
{
  int v1;
  int result;
  uint8_t v3[20];

  v3[0] = -119;
  v3[1] = 80;
  v3[2] = 78;
  v3[3] = 71;
  v3[4] = 13;
  v3[5] = 10;
  v3[6] = 26;
  v1 = *(uint8_t *)(a1 + 280);
  *(uint32_t *)(a1 + 628) = 18;
  v3[7] = 10;
  result = png_write_data(a1, (int)(uintptr_t)(&v3[v1]), 8 - v1);
  if ( *(uint8_t *)(a1 + 280) <= 2u )
    *(uint32_t *)(a1 + 84) |= 0x1000u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_chunk_start  (binary VA: 0xfb48b0)
// Original: png_write_chunk_start
// ----------------------------------------------------------------------------
void png_write_chunk_start(int a1, int *a2, int a3)
{
  typedef uint8_t _g4_t_v3[4];
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 628) = 34;
    png_save_uint_32(v3, a3);
    v4 = *a2;
    png_write_data(a1, (int)(uintptr_t)(v3), 8);
    *(uint32_t *)(a1 + 264) = *a2;
    png_reset_crc(a1);
    png_calculate_crc(a1, (int)(uintptr_t)(a2), 4);
    *(uint32_t *)(a1 + 628) = 66;
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_chunk_data  (binary VA: 0xfb4960)
// Original: png_write_chunk_data
// ----------------------------------------------------------------------------
void png_write_chunk_data(int a1, int a2, int a3)
{
  if ( a1 != 0 && a3 != 0 && a2 != 0 )
  {
    png_write_data(a1, a2, a3);
    png_calculate_crc(a1, a2, a3);
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_chunk_end  (binary VA: 0xfb49d0)
// Original: png_write_chunk_end
// ----------------------------------------------------------------------------
int png_write_chunk_end(int a1)
{
  int result;
  uint8_t v2[4];

  if ( a1 != 0 )
  {
    *(uint32_t *)(a1 + 628) = 130;
    png_save_uint_32(v2, *(uint32_t *)(a1 + 252));
    return png_write_data(a1, (int)(uintptr_t)(v2), 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_chunk  (binary VA: 0xfb4a40)
// Original: png_write_chunk
// ----------------------------------------------------------------------------
int png_write_chunk(int a1, int *a2, int a3, int a4)
{
  int result;

  if ( a1 != 0 )
  {
    png_write_chunk_start(a1, a2, a4);
    png_write_chunk_data(a1, a3, a4);
    return png_write_chunk_end(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_IHDR  (binary VA: 0xfb4ab0)
// Original: png_write_IHDR
// ----------------------------------------------------------------------------
int png_write_IHDR(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7, unsigned int a8)
{
  char v8;
  uint8_t v9;
  unsigned int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef int _g4_t_v19[4];
  typedef char _g4_t_v20;
  typedef uint8_t _g4_t_v21[21];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (10u + sizeof(_g4_t_v17)) > _g4_s0 ? (10u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (13u + sizeof(_g4_t_v19)) > _g4_s2 ? (13u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v20)) > _g4_s3 ? (32u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v21)) > _g4_s4 ? (36u + sizeof(_g4_t_v21)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 10u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 13u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);

  strcpy((char *)v19, "IHDR");
  switch ( a5 )
  {
    case 0:
      if ( a4 > 0x10 || ((1 << a4) & 0x10116) == 0 )
        png_error(a1, (int)(uintptr_t)("Invalid bit depth for grayscale image"));
      goto LABEL_56;
    case 2:
      if ( a4 != 16 && a4 != 8 )
        png_error(a1, (int)(uintptr_t)("Invalid bit depth for RGB image"));
      *(uint8_t *)(a1 + 278) = 3;
      break;
    case 3:
      if ( a4 > 8 || ((1 << a4) & 0x116) == 0 )
        png_error(a1, (int)(uintptr_t)("Invalid bit depth for paletted image"));
LABEL_56:
      *(uint8_t *)(a1 + 278) = 1;
      break;
    case 4:
      if ( a4 != 16 && a4 != 8 )
        png_error(a1, (int)(uintptr_t)("Invalid bit depth for grayscale+alpha image"));
      *(uint8_t *)(a1 + 278) = 2;
      break;
    case 6:
      if ( a4 != 16 && a4 != 8 )
        png_error(a1, (int)(uintptr_t)("Invalid bit depth for RGBA image"));
      *(uint8_t *)(a1 + 278) = 4;
      break;
    default:
      png_error(a1, (int)(uintptr_t)("Invalid image color type specified"));
  }
  if ( a6 != 0 )
    png_warning(a1, "Invalid compression type specified");
  if ( (*(uint8_t *)(a1 + 540) & 4) == 0
    || (*(uint8_t *)(a1 + 85) & 0x10) != 0
    || a5 != 6 && a5 != 2
    || (v17 = 64, a7 != 64) )
  {
    v17 = 0;
    if ( a7 != 0 )
      png_warning(a1, "Invalid filter type specified");
  }
  if ( a8 <= 1 )
  {
    v18 = a8;
  }
  else
  {
    png_warning(a1, "Invalid interlace type specified");
    v18 = 1;
  }
  *(uint8_t *)(a1 + 580) = 0;
  *(uint8_t *)(a1 + 271) = v18;
  *(uint32_t *)(a1 + 180) = a2;
  *(uint8_t *)(a1 + 548) = v17;
  *(uint8_t *)(a1 + 274) = a5;
  *(uint32_t *)(a1 + 184) = a3;
  v8 = *(uint8_t *)(a1 + 278);
  *(uint8_t *)(a1 + 275) = a4;
  v9 = v8 * a4;
  *(uint8_t *)(a1 + 277) = v8 * a4;
  if ( (uint8_t)(v8 * a4) <= 7u )
    v10 = (a2 * (unsigned int)v9 + 7) >> 3;
  else
    v10 = a2 * (v9 >> 3);
  *(uint8_t *)(a1 + 276) = a4;
  *(uint32_t *)(a1 + 196) = v10;
  *(uint32_t *)(a1 + 192) = a2;
  *(uint8_t *)(a1 + 279) = v8;
  png_save_uint_32(&v20, a2);
  png_save_uint_32(v21, a3);
  v21[4] = a4;
  v21[6] = 0;
  v21[5] = a5;
  v21[7] = v17;
  v21[8] = v18;
  png_write_chunk(a1, v19, (int)(uintptr_t)(&v20), 13);
  *(uint32_t *)(a1 + 136) = a1;
  v11 = *(uint8_t *)(a1 + 273);
  *(uint32_t *)(a1 + 128) = (uint32_t)(uintptr_t)(png_zalloc);
  *(uint32_t *)(a1 + 132) = (uint32_t)(uintptr_t)(png_zfree);
  if ( v11 == 0 )
  {
    if ( *(uint8_t *)(a1 + 274) == 3 || *(uint8_t *)(a1 + 275) <= 7u )
    {
      *(uint8_t *)(a1 + 273) = 8;
      v11 = 8;
    }
    else
    {
      *(uint8_t *)(a1 + 273) = -8;
      v11 = -8;
    }
  }
  v12 = *(uint32_t *)(a1 + 88);
  if ( (v12 & 1) == 0 )
    *(uint32_t *)(a1 + 176) = v11 != 8;
  if ( (v12 & 2) == 0 )
    *(uint32_t *)(a1 + 160) = -1;
  if ( (v12 & 4) == 0 )
    *(uint32_t *)(a1 + 172) = 8;
  if ( (v12 & 8) == 0 )
    *(uint32_t *)(a1 + 168) = 15;
  if ( (v12 & 0x10) != 0 )
  {
    v13 = *(uint32_t *)(a1 + 164);
  }
  else
  {
    *(uint32_t *)(a1 + 164) = 8;
    v13 = 8;
  }
  v14 = deflateInit2_(
          (void *)(uintptr_t)(a1 + 96),
          *(uint32_t *)(a1 + 160),
          v13,
          *(uint32_t *)(a1 + 168),
          *(uint32_t *)(a1 + 172),
          *(uint32_t *)(a1 + 176),
          "1.2.3",
          56);
  switch ( v14 )
  {
    case 0:
      v15 = *(uint32_t *)(a1 + 152);
      *(uint32_t *)(a1 + 140) = 0;
      *(uint32_t *)(a1 + 108) = v15;
      result = *(uint32_t *)(a1 + 156);
      *(uint32_t *)(a1 + 112) = result;
      *(uint32_t *)(a1 + 84) = 1;
      return result;
    case -6:
      png_error(a1, (int)(uintptr_t)("zlib failed to initialize compressor -- version error"));
    case -4:
      png_error(a1, (int)(uintptr_t)("zlib failed to initialize compressor -- mem error"));
    case -2:
      png_error(a1, (int)(uintptr_t)("zlib failed to initialize compressor -- stream error"));
    default:
      png_error(a1, (int)(uintptr_t)("zlib failed to initialize compressor"));
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_PLTE  (binary VA: 0xfb4fe0)
// Original: png_write_PLTE
// ----------------------------------------------------------------------------
int png_write_PLTE(int a1, uint8_t *a2, unsigned int a3)
{
  uint8_t *v3;
  int result;
  typedef uint8_t _g4_t_v5[3];
  typedef int _g4_t_v6[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (13u + sizeof(_g4_t_v5)) > _g4_s0 ? (13u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 13u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  strcpy((char *)v6, "PLTE");
  if ( (a3 | *(uint32_t *)(a1 + 540) & 1) != 0 && a3 <= 0x100 )
  {
    if ( (*(uint8_t *)(a1 + 274) & 2) != 0 )
    {
      *(uint16_t *)(a1 + 260) = a3;
      png_write_chunk_start(a1, v6, 3 * a3);
      if ( a3 != 0 )
      {
        v3 = a2;
        do
        {
          v5[0] = *v3;
          v5[1] = v3[1];
          v5[2] = v3[2];
          v3 += 3;
          png_write_chunk_data(a1, (int)(uintptr_t)(v5), 3);
        }
        while ( v3 != &a2[3 * a3] );
      }
      result = png_write_chunk_end(a1);
      *(uint32_t *)(a1 + 84) |= 2u;
    }
    else
    {
      return png_warning(a1, "Ignoring request to write a PLTE chunk in grayscale PNG");
    }
  }
  else
  {
    if ( *(uint8_t *)(a1 + 274) == 3 )
      png_error(a1, (int)(uintptr_t)("Invalid number of colors in palette"));
    return png_warning(a1, "Invalid number of colors in palette");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_IDAT  (binary VA: 0xfb5120)
// Original: png_write_IDAT
// ----------------------------------------------------------------------------
int png_write_IDAT(int a1, uint8_t *a2, unsigned int a3)
{
  int result;
  int v4;
  unsigned int i;
  int v6;
  typedef unsigned int _g4_t_v7;
  typedef uint8_t _g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v8)) > _g4_s1 ? (15u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  strcpy((char *)v9, "IDAT");
  if ( (*(uint8_t *)(a1 + 84) & 4) == 0 && *(uint8_t *)(a1 + 580) == 0 )
  {
    v8 = *a2;
    if ( (*a2 & 0xF) != 8 || (*a2 & 0xF0u) > 0x70 )
      png_error(a1, (int)(uintptr_t)("Invalid zlib compression method or flags in IDAT"));
    if ( a3 > 1 && *(uint32_t *)(a1 + 184) <= 0x3FFFu && *(uint32_t *)(a1 + 180) <= 0x3FFFu )
    {
      v7 = *(uint32_t *)(a1 + 184)
         * ((*(uint32_t *)(a1 + 180) * *(uint8_t *)(a1 + 275) * (unsigned int)*(uint8_t *)(a1 + 278) + 15) >> 3);
      v4 = v8 >> 4;
      for ( i = 1 << ((v8 >> 4) + 7); i > 0xFF && v7 <= i; --v4 )
        i >>= 1;
      v6 = (16 * v4) | 8;
      if ( v8 != (uint8_t)v6 )
      {
        *a2 = v6;
        a2[1] = 31 * (((v6 << 8) + (a2[1] & 0xE0u)) / 0x1F) + 31;
      }
    }
  }
  result = png_write_chunk(a1, v9, (int)(uintptr_t)(a2), a3);
  *(uint32_t *)(a1 + 84) |= 4u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_IEND  (binary VA: 0xfb52b0)
// Original: png_write_IEND
// ----------------------------------------------------------------------------
int png_write_IEND(int a1)
{
  int result;
  int v2[2];

  strcpy((char *)v2, "IEND");
  result = png_write_chunk(a1, v2, 0, 0);
  *(uint32_t *)(a1 + 84) |= 0x10u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_gAMA  (binary VA: 0xfb5320)
// Original: png_write_gAMA
// ----------------------------------------------------------------------------
int png_write_gAMA(int a1, double a2)
{
  __m128d v2;
  __m128d v3;
  typedef uint8_t _g4_t_v5[4];
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  v2 = g4_to_m128d(0);
  strcpy((char *)v6, "gAMA");
  g4_m128_lane_ref<double>(v2, 0) = a2 * 100000.0 + 0.5;
  v3 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v2);
  png_save_uint_32(
    v5,
    _mm_cvtsi128_si32(
      _mm_xor_si128(
        _mm_cvttpd_epi32(_mm_sub_pd(v2, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v3))),
        _mm_slli_epi32(G4_BITCAST<__m128i>(v3), 0x1Fu))));
  return png_write_chunk(a1, v6, (int)(uintptr_t)(v5), 4);
}

// ----------------------------------------------------------------------------
// Function: png_write_gAMA_fixed  (binary VA: 0xfb53e0)
// Original: png_write_gAMA_fixed
// ----------------------------------------------------------------------------
int png_write_gAMA_fixed(int a1, int a2)
{
  typedef uint8_t _g4_t_v3[4];
  typedef int _g4_t_v4[2];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  strcpy((char *)v4, "gAMA");
  png_save_uint_32(v3, a2);
  return png_write_chunk(a1, v4, (int)(uintptr_t)(v3), 4);
}

// ----------------------------------------------------------------------------
// Function: png_write_sRGB  (binary VA: 0xfb5460)
// Original: png_write_sRGB
// ----------------------------------------------------------------------------
int png_write_sRGB(int a1, int a2)
{
  typedef char _g4_t_v3;
  typedef int _g4_t_v4[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (15u + sizeof(_g4_t_v3)) > _g4_s0 ? (15u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 15u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);

  strcpy((char *)v4, "sRGB");
  if ( a2 > 3 )
    png_warning(a1, "Invalid sRGB rendering intent specified");
  v3 = a2;
  return png_write_chunk(a1, v4, (int)(uintptr_t)(&v3), 1);
}

// ----------------------------------------------------------------------------
// Function: png_write_sBIT  (binary VA: 0xfb54f0)
// Original: png_write_sBIT
// ----------------------------------------------------------------------------
int png_write_sBIT(int a1, uint8_t *a2, int a3)
{
  uint8_t v3; // si
  uint8_t v4; // di
  uint8_t v5;
  int v6;
  int v7;
  uint8_t v8;
  uint8_t v10;
  typedef uint8_t _g4_t_v11;
  typedef uint8_t _g4_t_v12[16];
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v11)) > _g4_s0 ? (14u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 14u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  strcpy((char *)v13, "sBIT");
  if ( (a3 & 2) != 0 )
  {
    v3 = 8;
    if ( a3 != 3 )
      v3 = *(uint8_t *)(a1 + 276);
    v4 = *a2;
    if ( *a2 == 0 )
      return png_warning(a1, "Invalid sBIT depth specified");
    if ( v3 < *a2 )
      return png_warning(a1, "Invalid sBIT depth specified");
    v5 = a2[1];
    if ( v5 == 0 )
      return png_warning(a1, "Invalid sBIT depth specified");
    if ( v3 < v5 )
      return png_warning(a1, "Invalid sBIT depth specified");
    v11 = a2[2];
    if ( v11 == 0 || v3 < v11 )
      return png_warning(a1, "Invalid sBIT depth specified");
    v12[1] = a2[1];
    v12[0] = v4;
    v12[2] = v11;
    v6 = 4;
    v7 = 3;
  }
  else
  {
    v8 = a2[3];
    if ( v8 == 0 || v8 > *(uint8_t *)(a1 + 276) )
      return png_warning(a1, "Invalid sBIT depth specified");
    v12[0] = a2[3];
    v6 = 2;
    v7 = 1;
  }
  if ( (a3 & 4) != 0 )
  {
    v10 = a2[4];
    if ( v10 != 0 && v10 <= *(uint8_t *)(a1 + 276) )
    {
      v12[v7] = v10;
      v7 = v6;
      return png_write_chunk(a1, v13, (int)(uintptr_t)(v12), v7);
    }
    return png_warning(a1, "Invalid sBIT depth specified");
  }
  return png_write_chunk(a1, v13, (int)(uintptr_t)(v12), v7);
}

// ----------------------------------------------------------------------------
// Function: png_write_cHRM  (binary VA: 0xfb5630)
// Original: png_write_cHRM
// ----------------------------------------------------------------------------
int png_write_cHRM(int a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9)
{
  __m128d v9;
  __m128d v10;
  __m128d v11;
  __m128d v12;
  int v13;
  __m128d v14;
  __m128d v15;
  int v16;
  __m128d v17;
  __m128d v18;
  __m128d v19;
  __m128d v20;
  __m128d v21;
  __m128d v22;
  __m128d v23;
  __m128d v24;
  __m128d v25;
  __m128d v26;
  int result;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34[5];
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v29)) > _g4_s1 ? (4u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v32)) > _g4_s4 ? (16u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v33)) > _g4_s5 ? (24u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (43u + sizeof(_g4_t_v34)) > _g4_s6 ? (43u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v35)) > _g4_s7 ? (48u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v36)) > _g4_s8 ? (52u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v37)) > _g4_s9 ? (56u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v38)) > _g4_s10 ? (60u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v39)) > _g4_s11 ? (64u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v40)) > _g4_s12 ? (68u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v41)) > _g4_s13 ? (72u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v42)) > _g4_s14 ? (76u + sizeof(_g4_t_v42)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 43u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);

  strcpy(v34, "cHRM");
  v9 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v9, 0) = a2 * 100000.0 + 0.5;
  v10 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v9);
  v31 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttpd_epi32(_mm_sub_pd(v9, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v10))),
            _mm_slli_epi32(G4_BITCAST<__m128i>(v10), 0x1Fu)));
  v11 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v11, 0) = a3 * 100000.0 + 0.5;
  v12 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v11);
  v13 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttpd_epi32(_mm_sub_pd(v11, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v12))),
            _mm_slli_epi32(G4_BITCAST<__m128i>(v12), 0x1Fu)));
  v14 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v14, 0) = a4 * 100000.0 + 0.5;
  v15 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v14);
  v16 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttpd_epi32(_mm_sub_pd(v14, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v15))),
            _mm_slli_epi32(G4_BITCAST<__m128i>(v15), 0x1Fu)));
  v17 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v17, 0) = a5 * 100000.0 + 0.5;
  v18 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v17);
  v30 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttpd_epi32(_mm_sub_pd(v17, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v18))),
            _mm_slli_epi32(G4_BITCAST<__m128i>(v18), 0x1Fu)));
  v19 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v19, 0) = a6 * 100000.0 + 0.5;
  v20 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v19);
  v29 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttpd_epi32(_mm_sub_pd(v19, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v20))),
            _mm_slli_epi32(G4_BITCAST<__m128i>(v20), 0x1Fu)));
  v21 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v21, 0) = a7 * 100000.0 + 0.5;
  v22 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v21);
  v28 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttpd_epi32(_mm_sub_pd(v21, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v22))),
            _mm_slli_epi32(G4_BITCAST<__m128i>(v22), 0x1Fu)));
  v23 = g4_to_m128d(0);
  v24 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v23, 0) = a8 * 100000.0 + 0.5;
  v25 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v23);
  g4_m128_lane_ref<double>(v24, 0) = 100000.0 * a9 + 0.5;
  v33 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttpd_epi32(_mm_sub_pd(v23, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v25))),
            _mm_slli_epi32(G4_BITCAST<__m128i>(v25), 0x1Fu)));
  v26 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v24);
  v32 = _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttpd_epi32(_mm_sub_pd(v24, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v26))),
            _mm_slli_epi32(G4_BITCAST<__m128i>(v26), 0x1Fu)));
  result = png_check_cHRM_fixed(a1, v31, v13, v16, v30, v29, v28, v33, v32);
  if ( result != 0 )
  {
    png_save_uint_32(&v35, v31);
    png_save_uint_32(&v36, v13);
    png_save_uint_32(&v37, v16);
    png_save_uint_32(&v38, v30);
    png_save_uint_32(&v39, v29);
    png_save_uint_32(&v40, v28);
    png_save_uint_32(&v41, v33);
    png_save_uint_32(&v42, v32);
    return png_write_chunk(a1, (int *)v34, (int)(uintptr_t)(&v35), 32);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_cHRM_fixed  (binary VA: 0xfb59d0)
// Original: png_write_cHRM_fixed
// ----------------------------------------------------------------------------
int png_write_cHRM_fixed(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int result;
  typedef int _g4_t_v10[2];
  typedef uint8_t _g4_t_v11[4];
  typedef uint8_t _g4_t_v12[4];
  typedef uint8_t _g4_t_v13[4];
  typedef uint8_t _g4_t_v14[4];
  typedef uint8_t _g4_t_v15[4];
  typedef uint8_t _g4_t_v16[4];
  typedef uint8_t _g4_t_v17[16];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (11u + sizeof(_g4_t_v10)) > _g4_s0 ? (11u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v11)) > _g4_s1 ? (20u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v15)) > _g4_s5 ? (36u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v16)) > _g4_s6 ? (40u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v17)) > _g4_s7 ? (44u + sizeof(_g4_t_v17)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 11u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  strcpy((char *)v10, "cHRM");
  result = png_check_cHRM_fixed(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( result != 0 )
  {
    png_save_uint_32((uint8_t *)&v10[1] + 1, a2);
    png_save_uint_32(v11, a3);
    png_save_uint_32(v12, a4);
    png_save_uint_32(v13, a5);
    png_save_uint_32(v14, a6);
    png_save_uint_32(v15, a7);
    png_save_uint_32(v16, a8);
    png_save_uint_32(v17, a9);
    return png_write_chunk(a1, v10, (int)(uintptr_t)(&v10[1]) + 1, 32);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_tRNS  (binary VA: 0xfb5b80)
// Original: png_write_tRNS
// ----------------------------------------------------------------------------
int png_write_tRNS(int a1, int a2, int a3, int a4, int a5)
{
  int v6;
  typedef int _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[2];
  typedef char _g4_t_v9;
  typedef uint8_t _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (18u + sizeof(_g4_t_v9)) > _g4_s2 ? (18u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 18u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);

  strcpy((char *)v7, "tRNS");
  switch ( a5 )
  {
    case 0:
      v6 = *(uint16_t *)(a3 + 8);
      if ( v6 < 1 << *(uint8_t *)(a1 + 275) )
      {
        png_save_uint_16(v8, v6);
        return png_write_chunk(a1, v7, (int)(uintptr_t)(v8), 2);
      }
      else
      {
        return png_warning(a1, "Ignoring attempt to write tRNS chunk out-of-range for bit_depth");
      }
    case 2:
      png_save_uint_16(v8, *(uint16_t *)(a3 + 2));
      png_save_uint_16(&v9, *(uint16_t *)(a3 + 4));
      png_save_uint_16(&v10, *(uint16_t *)(a3 + 6));
      if ( *(uint8_t *)(a1 + 275) == 8 && (v10 | (uint8_t)(v8[0] | v9)) != 0 )
        return png_warning(a1, "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8");
      else
        return png_write_chunk(a1, v7, (int)(uintptr_t)(v8), 6);
    case 3:
      if ( a4 > 0 && a4 <= *(uint16_t *)(a1 + 260) )
        return png_write_chunk(a1, v7, a2, a4);
      else
        return png_warning(a1, "Invalid number of transparent colors specified");
    default:
      return png_warning(a1, "Can't write tRNS with an alpha channel");
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_bKGD  (binary VA: 0xfb5d50)
// Original: png_write_bKGD
// ----------------------------------------------------------------------------
int png_write_bKGD(int a1, uint8_t *a2, int a3)
{
  int v3;
  uint16_t v5;
  typedef int _g4_t_v6[4];
  typedef uint8_t _g4_t_v7[2];
  typedef char _g4_t_v8;
  typedef uint8_t _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (18u + sizeof(_g4_t_v8)) > _g4_s2 ? (18u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v9)) > _g4_s3 ? (20u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 18u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);

  strcpy((char *)v6, "bKGD");
  if ( a3 == 3 )
  {
    v5 = *(uint16_t *)(a1 + 260);
    if ( v5 != 0 )
    {
      if ( v5 > *a2 )
      {
LABEL_8:
        v7[0] = *a2;
        return png_write_chunk(a1, v6, (int)(uintptr_t)(v7), 1);
      }
    }
    else if ( (*(uint8_t *)(a1 + 540) & 1) != 0 )
    {
      goto LABEL_8;
    }
    return png_warning(a1, "Invalid background palette index");
  }
  if ( (a3 & 2) != 0 )
  {
    png_save_uint_16(v7, *((uint16_t *)a2 + 1));
    png_save_uint_16(&v8, *((uint16_t *)a2 + 2));
    png_save_uint_16(&v9, *((uint16_t *)a2 + 3));
    if ( *(uint8_t *)(a1 + 275) == 8 && (v9 | (uint8_t)(v7[0] | v8)) != 0 )
      return png_warning(a1, "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
    else
      return png_write_chunk(a1, v6, (int)(uintptr_t)(v7), 6);
  }
  else
  {
    v3 = *((uint16_t *)a2 + 4);
    if ( v3 >= 1 << *(uint8_t *)(a1 + 275) )
    {
      return png_warning(a1, "Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
    }
    else
    {
      png_save_uint_16(v7, v3);
      return png_write_chunk(a1, v6, (int)(uintptr_t)(v7), 2);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_hIST  (binary VA: 0xfb5f20)
// Original: png_write_hIST
// ----------------------------------------------------------------------------
int png_write_hIST(int a1, int a2, int a3)
{
  int i;
  typedef int16_t _g4_t_v5;
  typedef uint8_t _g4_t_v6[3];
  typedef int _g4_t_v7[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v6)) > _g4_s1 ? (29u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v7)) > _g4_s2 ? (32u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 29u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);

  strcpy((char *)v7, "hIST");
  if ( *(uint16_t *)(a1 + 260) < a3 )
    return png_warning(a1, "Invalid number of histogram entries specified");
  png_write_chunk_start(a1, v7, 2 * a3);
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      v5 = *(uint16_t *)(a2 + 2 * i);
      png_save_uint_16(v6, v5);
      png_write_chunk_data(a1, (int)(uintptr_t)(v6), 2);
    }
  }
  return png_write_chunk_end(a1);
}

// ----------------------------------------------------------------------------
// Function: png_check_keyword  (binary VA: 0xfb6000)
// Original: png_check_keyword
// ----------------------------------------------------------------------------
int png_check_keyword(int a1, char *s, void **a3)
{
  char *v3;
  size_t v4;
  unsigned int v5;
  char *v6;
  uint8_t *v8;
  uint8_t v9;
  uint8_t *v10;
  uint8_t *v11;
  char i;
  uint8_t *v13;
  unsigned int v14;
  uint8_t *v15;
  typedef char *_g4_t_v16;
  typedef size_t _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19[68];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);

  v3 = s;
  *a3 = nullptr;
  if ( s == nullptr || (v4 = strlen(s), v5 = v4, v17 = v4, v4 == 0) )
  {
    v6 = "zero length keyword";
LABEL_4:
    v5 = 0;
    png_warning(a1, v6);
    return v5;
  }
  v8 = (uint8_t *)(png_malloc_warn(a1, v4 + 2));
  *a3 = v8;
  if ( v8 == nullptr )
  {
    v6 = "Out of memory while procesing keyword";
    goto LABEL_4;
  }
  v9 = *s;
  if ( *s != 0 )
  {
    do
    {
      while ( v9 <= 0x1Fu || v9 > 0x7Eu && v9 <= 0xA0u )
      {
        ++v3;
        snprintf(v19, 0x28u, "invalid keyword character 0x%02X", v9);
        png_warning(a1, v19);
        *v8++ = 32;
        v9 = *v3;
        if ( *v3 == 0 )
          goto LABEL_14;
      }
      ++v3;
      *v8 = v9;
      v9 = *v3;
      ++v8;
    }
    while ( *v3 != 0 );
  }
LABEL_14:
  *v8 = 0;
  v10 = (uint8_t *)(*a3);
  v11 = (uint8_t *)((char *)*a3 + v17 - 1);
  if ( *v11 == 32 )
  {
    png_warning(a1, "trailing spaces removed from keyword");
    v14 = v17;
    v15 = &v11[-v17];
    if ( *v11 == 32 )
    {
      do
        v15[v14--] = 0;
      while ( v15[v14] == 32 );
      v5 = v14;
      v10 = (uint8_t *)(*a3);
    }
    else
    {
      v10 = (uint8_t *)(*a3);
    }
  }
  i = *v10;
  v13 = v10;
  if ( *v10 == 32 )
  {
    png_warning(a1, "leading spaces removed from keyword");
    for ( i = *v10; *v10 == 32; i = *v10 )
    {
      ++v10;
      --v5;
    }
    v13 = (uint8_t *)(*a3);
  }
  if ( i == 0 )
  {
    *v13 = 0;
    goto LABEL_26;
  }
  v16 = nullptr;
  v18 = 0;
  do
  {
    while ( v18 != 0 )
    {
      if ( i != 32 )
        goto LABEL_23;
      --v5;
      v16 = (char *)((uint8_t *)(&dword_0 + 1));
LABEL_20:
      i = *++v10;
      if ( *v10 == 0 )
        goto LABEL_24;
    }
    if ( i == 32 )
    {
      *v13 = 32;
      v18 = 1;
      ++v13;
      goto LABEL_20;
    }
LABEL_23:
    ++v10;
    *v13 = i;
    i = *v10;
    ++v13;
    v18 = 0;
  }
  while ( *v10 != 0 );
LABEL_24:
  *v13 = 0;
  if ( v16 != nullptr )
    png_warning(a1, "extra interior spaces removed from keyword");
LABEL_26:
  if ( v5 != 0 )
  {
    if ( v5 > 0x4F )
    {
      png_warning(a1, "keyword length must be 1 - 79 characters");
      *((uint8_t *)*a3 + 79) = 0;
      return 79;
    }
    return v5;
  }
  png_free(a1, *a3);
  png_warning(a1, "Zero length keyword");
  return 0;
}

// ----------------------------------------------------------------------------
// Function: png_write_sPLT  (binary VA: 0xfb62e0)
// Original: png_write_sPLT
// ----------------------------------------------------------------------------
void png_write_sPLT(int a1, int a2)
{
  int v2;
  int v3;
  int16_t *v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[2];
  typedef uint8_t _g4_t_v10[2];
  typedef uint8_t _g4_t_v11[2];
  typedef uint8_t _g4_t_v12[2];
  typedef uint8_t _g4_t_v13[14];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v9)) > _g4_s4 ? (36u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v10)) > _g4_s5 ? (44u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (46u + sizeof(_g4_t_v11)) > _g4_s6 ? (46u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v12)) > _g4_s7 ? (48u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (50u + sizeof(_g4_t_v13)) > _g4_s8 ? (50u + sizeof(_g4_t_v13)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 46u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 50u);

  v2 = a1;
  strcpy((char *)v9, "sPLT");
  v7 = 4 * (*(uint8_t *)(a2 + 4) != 8) + 6;
  v6 = *(uint32_t *)(a2 + 12);
  v3 = png_check_keyword(a1, *(char **)a2, (void **)&v8);
  if ( v3 != 0 )
  {
    v5 = v3;
    png_write_chunk_start(a1, v9, v3 + v6 * v7 + 2);
    png_write_chunk_data(a1, v8, v5 + 1);
    png_write_chunk_data(a1, a2 + 4, 1);
    if ( *(uint32_t *)(a2 + 8) < (unsigned int)(*(uint32_t *)(a2 + 8) + 10 * *(uint32_t *)(a2 + 12)) )
    {
      v4 = *(int16_t **)(a2 + 8);
      do
      {
        if ( *(uint8_t *)(a2 + 4) == 8 )
        {
          BYTE2(v9[1]) = *v4;
          HIBYTE(v9[1]) = v4[1];
          v10[0] = v4[2];
          v10[1] = v4[3];
          png_save_uint_16(v11, v4[4]);
        }
        else
        {
          png_save_uint_16((uint8_t *)&v9[1] + 2, *v4);
          png_save_uint_16(v10, v4[1]);
          png_save_uint_16(v11, v4[2]);
          png_save_uint_16(v12, v4[3]);
          png_save_uint_16(v13, v4[4]);
        }
        v4 += 5;
        png_write_chunk_data(a1, (int)(uintptr_t)(&v9[1]) + 2, v7);
      }
      while ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(a2 + 8) + 10 * *(uint32_t *)(a2 + 12) );
      v2 = a1;
    }
    png_write_chunk_end(v2);
    png_free(v2, (void *)v8);
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_iCCP  (binary VA: 0xfb64d0)
// Original: png_write_iCCP
// ----------------------------------------------------------------------------
void png_write_iCCP(uint32_t *a1, char *a2, int a3, unsigned int *a4, int a5)
{
  int v5;
  int v6;
  bool v7; // cc
  char *v8;
  int i;
  unsigned int v10;
  unsigned int v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_v16[9];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v15)) > _g4_s3 ? (32u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (39u + sizeof(_g4_t_v16)) > _g4_s4 ? (39u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v17)) > _g4_s5 ? (48u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v18)) > _g4_s6 ? (52u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v19)) > _g4_s7 ? (56u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v20)) > _g4_s8 ? (60u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 39u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  strcpy(v16, "iCCP");
  v18 = 0;
  v19 = 0;
  v20 = nullptr;
  *(uint32_t *)&v16[5] = 0;
  v17 = 0;
  v5 = png_check_keyword((int)(uintptr_t)(a1), a2, (void **)&v15);
  if ( v5 == 0 )
    return;
  if ( a3 != 0 )
    png_warning((int)(uintptr_t)(a1), "Unknown compression type in iCCP chunk");
  if ( a4 == nullptr )
  {
    a5 = 0;
LABEL_15:
    v6 = 0;
    v7 = a5 > 0;
    if ( a5 >= 0 )
      goto LABEL_8;
    goto LABEL_16;
  }
  if ( a5 <= 3 )
    goto LABEL_15;
  v6 = __builtin_bswap32(*a4);
  if ( v6 < 0 )
  {
    v8 = "Embedded profile length in iCCP chunk is negative";
    goto LABEL_17;
  }
  v7 = v6 < a5;
  if ( v6 > a5 )
  {
LABEL_16:
    v8 = "Embedded profile length too large in iCCP chunk";
LABEL_17:
    png_warning((int)(uintptr_t)(a1), v8);
    png_free((int)(uintptr_t)(a1), (void *)v15);
    return;
  }
LABEL_8:
  if ( v7 )
  {
    v14 = v6;
    png_warning((int)(uintptr_t)(a1), "Truncating profile to actual length in iCCP chunk");
    a5 = v14;
  }
  if ( a5 != 0 )
  {
    v13 = sub_FB4430((int)(uintptr_t)(a1), a4, a5, 0, &v16[5]);
    png_write_chunk_start((int)(uintptr_t)(a1), (int *)v16, v13 + v5 + 2);
    *(uint8_t *)(v15 + v5 + 1) = 0;
    png_write_chunk_data((int)(uintptr_t)(a1), v15, v5 + 2);
    if ( v13 != 0 )
    {
      if ( *(uint32_t *)&v16[5] != 0 )
      {
        png_write_chunk_data((int)(uintptr_t)(a1), *(int *)&v16[5], v17);
      }
      else
      {
        if ( v18 > 0 )
        {
          for ( i = 0; i < v18; ++i )
          {
            png_write_chunk_data((int)(uintptr_t)(a1), v20[i], a1[39]);
            v12 = (void *)v20[i];
            png_free((int)(uintptr_t)(a1), v12);
          }
        }
        if ( v19 != 0 )
          png_free((int)(uintptr_t)(a1), v20);
        v10 = a1[28];
        v11 = a1[39];
        if ( v10 < v11 )
          png_write_chunk_data((int)(uintptr_t)(a1), a1[38], v11 - v10);
        deflateReset(a1 + 24);
        a1[35] = 0;
      }
    }
  }
  else
  {
    png_write_chunk_start((int)(uintptr_t)(a1), (int *)v16, v5 + 2);
    *(uint8_t *)(v15 + v5 + 1) = 0;
    png_write_chunk_data((int)(uintptr_t)(a1), v15, v5 + 2);
  }
  png_write_chunk_end((int)(uintptr_t)(a1));
  png_free((int)(uintptr_t)(a1), (void *)v15);
}

// ----------------------------------------------------------------------------
// Function: png_write_tEXt  (binary VA: 0xfb67e0)
// Original: png_write_tEXt
// ----------------------------------------------------------------------------
void png_write_tEXt(int a1, char *a2, char *s)
{
  int v3;
  int v4;
  int v5;
  typedef size_t _g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v7)) > _g4_s1 ? (20u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v8)) > _g4_s2 ? (27u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 27u);

  strcpy((char *)v8, "tEXt");
  v3 = png_check_keyword(a1, a2, &v7);
  if ( v3 != 0 )
  {
    if ( s != nullptr && *s != 0 )
    {
      v5 = v3 + 1;
      v6 = strlen(s);
      png_write_chunk_start(a1, v8, v6 + v5);
      png_write_chunk_data(a1, (int)(uintptr_t)(v7), v5);
      if ( v6 != 0 )
        png_write_chunk_data(a1, (int)(uintptr_t)(s), v6);
    }
    else
    {
      v4 = v3 + 1;
      png_write_chunk_start(a1, v8, v3 + 1);
      png_write_chunk_data(a1, (int)(uintptr_t)(v7), v4);
    }
    png_write_chunk_end(a1);
    png_free(a1, v7);
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_zTXt  (binary VA: 0xfb6900)
// Original: png_write_zTXt
// ----------------------------------------------------------------------------
void png_write_zTXt(uint32_t *a1, char *a2, char *s, int a4, int a5)
{
  int v5;
  size_t v6;
  int i;
  unsigned int v8;
  unsigned int v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14[9];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v12)) > _g4_s2 ? (15u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (23u + sizeof(_g4_t_v14)) > _g4_s4 ? (23u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v18)) > _g4_s8 ? (44u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 15u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 23u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  strcpy(v14, "zTXt");
  v16 = 0;
  v17 = 0;
  v18 = nullptr;
  *(uint32_t *)&v14[5] = 0;
  v15 = 0;
  v5 = png_check_keyword((int)(uintptr_t)(a1), a2, (void **)&v13);
  if ( v5 == 0 )
    goto LABEL_5;
  if ( s == nullptr || a5 == -1 || *s == 0 )
  {
    png_write_tEXt((int)(uintptr_t)(a1), (char *)v13, s);
LABEL_5:
    png_free((int)(uintptr_t)(a1), (void *)v13);
    return;
  }
  v6 = strlen(s);
  v11 = v5 + sub_FB4430((int)(uintptr_t)(a1), s, v6, a5, &v14[5]) + 2;
  png_write_chunk_start((int)(uintptr_t)(a1), (int *)v14, v11);
  png_write_chunk_data((int)(uintptr_t)(a1), v13, v5 + 1);
  png_free((int)(uintptr_t)(a1), (void *)v13);
  v12 = a5;
  png_write_chunk_data((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), 1);
  if ( *(uint32_t *)&v14[5] != 0 )
  {
    png_write_chunk_data((int)(uintptr_t)(a1), *(int *)&v14[5], v15);
  }
  else
  {
    if ( v16 > 0 )
    {
      for ( i = 0; i < v16; ++i )
      {
        png_write_chunk_data((int)(uintptr_t)(a1), v18[i], a1[39]);
        v10 = (void *)v18[i];
        png_free((int)(uintptr_t)(a1), v10);
      }
    }
    if ( v17 != 0 )
      png_free((int)(uintptr_t)(a1), v18);
    v8 = a1[28];
    v9 = a1[39];
    if ( v8 < v9 )
      png_write_chunk_data((int)(uintptr_t)(a1), a1[38], v9 - v8);
    deflateReset(a1 + 24);
    a1[35] = 0;
  }
  png_write_chunk_end((int)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: png_write_iTXt  (binary VA: 0xfb6b30)
// Original: png_write_iTXt
// ----------------------------------------------------------------------------
void png_write_iTXt(uint32_t *a1, int a2, char *a3, char *a4, char *s, char *a6)
{
  int v6;
  int v7;
  size_t v8;
  int v9;
  char *v10;
  uint8_t *v11;
  int i;
  unsigned int v13;
  unsigned int v14;
  typedef void *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[2];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23[5];
  typedef int _g4_t_v24[2];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v17)) > _g4_s2 ? (20u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v19)) > _g4_s4 ? (28u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (46u + sizeof(_g4_t_v20)) > _g4_s5 ? (46u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v22)) > _g4_s7 ? (52u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (59u + sizeof(_g4_t_v23)) > _g4_s8 ? (59u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v24)) > _g4_s9 ? (64u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v25)) > _g4_s10 ? (72u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v26)) > _g4_s11 ? (76u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v27)) > _g4_s12 ? (80u + sizeof(_g4_t_v27)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 46u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 59u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);

  strcpy(v23, "iTXt");
  v22 = 0;
  v25 = 0;
  v26 = 0;
  v27 = nullptr;
  v24[0] = 0;
  v6 = png_check_keyword((int)(uintptr_t)(a1), a3, (void **)&v22);
  if ( v6 != 0 )
  {
    v7 = png_check_keyword((int)(uintptr_t)(a1), a4, (void **)&v21);
    v19 = v7;
    if ( v7 != 0 )
    {
      v16 = v7 + 1;
    }
    else
    {
      png_warning((int)(uintptr_t)(a1), "Empty language field in iTXt chunk");
      v21 = 0;
      v16 = 1;
    }
    v17 = 1;
    v18 = 0;
    if ( s != nullptr )
    {
      v18 = strlen(s);
      v17 = v18 + 1;
    }
    v8 = 0;
    if ( a6 != nullptr )
      v8 = strlen(a6);
    v9 = sub_FB4430((int)(uintptr_t)(a1), a6, v8, a2 - 2, v24) + v18 + v19 + v6 + 5;
    png_write_chunk_start((int)(uintptr_t)(a1), (int *)v23, v9);
    png_write_chunk_data((int)(uintptr_t)(a1), v22, v6 + 1);
    v10 = (char *)(v20);
    v20[1] = 0;
    v20[0] = a2 != 1 && a2 != -1;
    png_write_chunk_data((int)(uintptr_t)(a1), (int)(uintptr_t)(v20), 2);
    v11 = (uint8_t *)v21;
    v20[0] = 0;
    if ( v21 == 0 )
      v11 = v20;
    png_write_chunk_data((int)(uintptr_t)(a1), (int)(uintptr_t)(v11), v16);
    if ( s != nullptr )
      v10 = s;
    png_write_chunk_data((int)(uintptr_t)(a1), (int)(uintptr_t)(v10), v17);
    if ( v24[0] != 0 )
    {
      png_write_chunk_data((int)(uintptr_t)(a1), v24[0], v24[1]);
    }
    else
    {
      if ( v25 > 0 )
      {
        for ( i = 0; i < v25; ++i )
        {
          png_write_chunk_data((int)(uintptr_t)(a1), v27[i], a1[39]);
          v15 = (void *)v27[i];
          png_free((int)(uintptr_t)(a1), v15);
        }
      }
      if ( v26 != 0 )
        png_free((int)(uintptr_t)(a1), v27);
      v13 = a1[28];
      v14 = a1[39];
      if ( v13 < v14 )
        png_write_chunk_data((int)(uintptr_t)(a1), a1[38], v14 - v13);
      deflateReset(a1 + 24);
      a1[35] = 0;
    }
    png_write_chunk_end((int)(uintptr_t)(a1));
    png_free((int)(uintptr_t)(a1), (void *)v22);
    png_free((int)(uintptr_t)(a1), (void *)v21);
  }
}

// ----------------------------------------------------------------------------
// Function: png_write_oFFs  (binary VA: 0xfb6e20)
// Original: png_write_oFFs
// ----------------------------------------------------------------------------
int png_write_oFFs(int a1, int a2, int a3, int a4)
{
  typedef char _g4_t_v5[5];
  typedef char _g4_t_v6;
  typedef uint8_t _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (13u + sizeof(_g4_t_v5)) > _g4_s0 ? (13u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 13u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  strcpy(v5, "oFFs");
  if ( a4 > 1 )
    png_warning(a1, "Unrecognized unit type for oFFs chunk");
  png_save_int_32(&v6, a2);
  png_save_int_32(v7, a3);
  v7[4] = a4;
  return png_write_chunk(a1, (int *)v5, (int)(uintptr_t)(&v6), 9);
}

// ----------------------------------------------------------------------------
// Function: png_write_pCAL  (binary VA: 0xfb6ed0)
// Original: png_write_pCAL
// ----------------------------------------------------------------------------
int png_write_pCAL(int a1, char *a2, int a3, int a4, int a5, int a6, char *s, int a8)
{
  uint32_t *v8;
  int i;
  size_t v10;
  int v11;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[2];
  typedef uint8_t _g4_t_v20[18];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v17)) > _g4_s4 ? (32u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v18)) > _g4_s5 ? (48u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v19)) > _g4_s6 ? (52u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (62u + sizeof(_g4_t_v20)) > _g4_s7 ? (62u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 62u);

  strcpy((char *)v19, "pCAL");
  if ( a5 > 3 )
    png_warning(a1, "Unrecognized equation type for pCAL chunk");
  v16 = png_check_keyword(a1, a2, (void **)&v18) + 1;
  v15 = strlen(s) + (a6 != 0);
  v17 = v16 + v15 + 10;
  v8 = (uint32_t *)(png_malloc(a1, 4 * a6));
  if ( a6 <= 0 )
  {
    png_write_chunk_start(a1, v19, v17);
    png_write_chunk_data(a1, v18, v16);
    png_save_int_32((uint8_t *)&v19[1] + 2, a3);
    png_save_int_32(v20, a4);
    v20[5] = a6;
    v20[4] = a5;
    png_write_chunk_data(a1, (int)(uintptr_t)(&v19[1]) + 2, 10);
    png_write_chunk_data(a1, (int)(uintptr_t)(s), v15);
    png_free(a1, (void *)v18);
  }
  else
  {
    for ( i = 0; i != a6; ++i )
    {
      v10 = (i != a6 - 1) + strlen(*(const char **)(a8 + 4 * i));
      v17 += v10;
      v8[i] = v10;
    }
    png_write_chunk_start(a1, v19, v17);
    png_write_chunk_data(a1, v18, v16);
    png_save_int_32((uint8_t *)&v19[1] + 2, a3);
    png_save_int_32(v20, a4);
    v20[5] = a6;
    v20[4] = a5;
    png_write_chunk_data(a1, (int)(uintptr_t)(&v19[1]) + 2, 10);
    v11 = 0;
    png_write_chunk_data(a1, (int)(uintptr_t)(s), v15);
    png_free(a1, (void *)v18);
    do
    {
      v14 = v8[v11];
      v13 = *(uint32_t *)(a8 + 4 * v11++);
      png_write_chunk_data(a1, v13, v14);
    }
    while ( v11 != a6 );
  }
  png_free(a1, v8);
  return png_write_chunk_end(a1);
}

// ----------------------------------------------------------------------------
// Function: png_write_sCAL  (binary VA: 0xfb7180)
// Original: png_write_sCAL
// ----------------------------------------------------------------------------
int png_write_sCAL(int a1, char a2, double a3, double a4)
{
  size_t v4;
  size_t v5;
  char *v6;
  size_t v7;
  int s[20];

  strcpy((char *)s, "sCAL");
  BYTE1(s[1]) = a2;
  snprintf((char *)&s[1] + 2, 0x3Fu, "%12.12e", a3);
  v4 = strlen((const char *)&s[1] + 2);
  v5 = v4 + 2;
  v6 = (char *)&s[1] + v4 + 3;
  snprintf(v6, 62 - v4, "%12.12e", a4);
  v7 = strlen(v6);
  return png_write_chunk(a1, s, (int)(uintptr_t)(&s[1]) + 1, v7 + v5);
}

// ----------------------------------------------------------------------------
// Function: png_write_pHYs  (binary VA: 0xfb72a0)
// Original: png_write_pHYs
// ----------------------------------------------------------------------------
int png_write_pHYs(int a1, int a2, int a3, int a4)
{
  typedef char _g4_t_v5[5];
  typedef char _g4_t_v6;
  typedef uint8_t _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (13u + sizeof(_g4_t_v5)) > _g4_s0 ? (13u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 13u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  strcpy(v5, "pHYs");
  if ( a4 > 1 )
    png_warning(a1, "Unrecognized unit type for pHYs chunk");
  png_save_uint_32(&v6, a2);
  png_save_uint_32(v7, a3);
  v7[4] = a4;
  return png_write_chunk(a1, (int *)v5, (int)(uintptr_t)(&v6), 9);
}

// ----------------------------------------------------------------------------
// Function: png_write_tIME  (binary VA: 0xfb7350)
// Original: png_write_tIME
// ----------------------------------------------------------------------------
int png_write_tIME(int a1, int a2)
{
  uint8_t v2;
  typedef int _g4_t_v4[2];
  typedef uint8_t _g4_t_v5[7];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (9u + sizeof(_g4_t_v5)) > _g4_s1 ? (9u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 9u);

  strcpy((char *)v4, "tIME");
  if ( (uint8_t)(*(uint8_t *)(a2 + 2) - 1) > 0xBu )
    return png_warning(a1, "Invalid time specified for tIME chunk");
  v2 = *(uint8_t *)(a2 + 3);
  if ( v2 > 0x1Fu || v2 == 0 || *(uint8_t *)(a2 + 4) > 0x17u || *(uint8_t *)(a2 + 6) > 0x3Cu )
    return png_warning(a1, "Invalid time specified for tIME chunk");
  png_save_uint_16(v5, *(uint16_t *)a2);
  v5[2] = *(uint8_t *)(a2 + 2);
  v5[3] = *(uint8_t *)(a2 + 3);
  v5[4] = *(uint8_t *)(a2 + 4);
  v5[5] = *(uint8_t *)(a2 + 5);
  v5[6] = *(uint8_t *)(a2 + 6);
  return png_write_chunk(a1, v4, (int)(uintptr_t)(v5), 7);
}

// ----------------------------------------------------------------------------
// Function: png_write_start_row  (binary VA: 0xfb7440)
// Original: png_write_start_row
// ----------------------------------------------------------------------------
int png_write_start_row(int a1)
{
  unsigned int v1;
  size_t v2;
  uint8_t *v3;
  char v4;
  int v5;
  int result;
  char v7;
  char v8;
  uint8_t *v9;
  uint8_t *v10;
  uint8_t *v11;
  uint8_t *v12;

  v1 = *(uint8_t *)(a1 + 276) * *(uint8_t *)(a1 + 279);
  if ( v1 <= 7 )
    v2 = ((*(uint32_t *)(a1 + 180) * v1 + 7) >> 3) + 1;
  else
    v2 = *(uint32_t *)(a1 + 180) * (v1 >> 3) + 1;
  v3 = (uint8_t *)(png_malloc(a1, v2));
  *(uint32_t *)(a1 + 216) = (uint32_t)(uintptr_t)(v3);
  *v3 = 0;
  v4 = *(uint8_t *)(a1 + 273);
  if ( (v4 & 0x10) != 0 )
  {
    v10 = (uint8_t *)(png_malloc(a1, *(uint32_t *)(a1 + 196) + 1));
    *(uint32_t *)(a1 + 220) = (uint32_t)(uintptr_t)(v10);
    *v10 = 1;
    v4 = *(uint8_t *)(a1 + 273);
  }
  if ( (v4 & 0xE0) != 0 )
  {
    *(uint32_t *)(a1 + 212) = (uint32_t)(uintptr_t)(png_calloc(a1, v2));
    v7 = *(uint8_t *)(a1 + 273);
    v8 = v7;
    if ( (v7 & 0x20) != 0 )
    {
      v12 = (uint8_t *)(png_malloc(a1, *(uint32_t *)(a1 + 196) + 1));
      *(uint32_t *)(a1 + 224) = (uint32_t)(uintptr_t)(v12);
      *v12 = 2;
      v7 = *(uint8_t *)(a1 + 273);
      v8 = v7;
    }
    if ( (v8 & 0x40) != 0 )
    {
      v11 = (uint8_t *)(png_malloc(a1, *(uint32_t *)(a1 + 196) + 1));
      *(uint32_t *)(a1 + 228) = (uint32_t)(uintptr_t)(v11);
      *v11 = 3;
      v7 = *(uint8_t *)(a1 + 273);
    }
    if ( v7 < 0 )
    {
      v9 = (uint8_t *)(png_malloc(a1, *(uint32_t *)(a1 + 196) + 1));
      *(uint32_t *)(a1 + 232) = (uint32_t)(uintptr_t)(v9);
      *v9 = 4;
    }
  }
  if ( *(uint8_t *)(a1 + 271) != 0 )
  {
    v5 = *(uint32_t *)(a1 + 184);
    if ( (*(uint8_t *)(a1 + 92) & 2) == 0 )
    {
      *(uint32_t *)(a1 + 188) = (unsigned int)(v5 + 7) >> 3;
      *(uint32_t *)(a1 + 192) = (unsigned int)(*(uint32_t *)(a1 + 180) + 7) >> 3;
      goto LABEL_9;
    }
  }
  else
  {
    v5 = *(uint32_t *)(a1 + 184);
  }
  *(uint32_t *)(a1 + 188) = v5;
  *(uint32_t *)(a1 + 192) = *(uint32_t *)(a1 + 180);
LABEL_9:
  *(uint32_t *)(a1 + 112) = *(uint32_t *)(a1 + 156);
  result = *(uint32_t *)(a1 + 152);
  *(uint32_t *)(a1 + 108) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_finish_row  (binary VA: 0xfb7620)
// Original: png_write_finish_row
// ----------------------------------------------------------------------------
unsigned int png_write_finish_row(int a1)
{
  unsigned int result;
  bool v2;
  int v3;
  int v4;
  bool v5;
  void *v6;
  unsigned int v7;
  size_t v8;
  const char *v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  uint8_t v15;
  uint32_t v16[8];
  uint32_t v17[8];
  uint32_t v18[8];
  uint32_t v19[11];

  v16[0] = 0;
  v16[1] = 4;
  v16[2] = 0;
  v16[3] = 2;
  v16[4] = 0;
  v16[5] = 1;
  v16[6] = 0;
  v17[0] = 8;
  v17[1] = 8;
  v17[2] = 4;
  v17[3] = 4;
  v17[4] = 2;
  v17[5] = 2;
  v17[6] = 1;
  v18[0] = 0;
  v18[1] = 0;
  v18[2] = 4;
  v18[3] = 0;
  v18[4] = 2;
  v18[5] = 0;
  v18[6] = 1;
  v19[0] = 8;
  v19[1] = 8;
  v19[2] = 8;
  v19[3] = 4;
  v19[4] = 4;
  v19[5] = 2;
  v19[6] = 2;
  result = *(uint32_t *)(a1 + 208) + 1;
  v2 = result < *(uint32_t *)(a1 + 188);
  *(uint32_t *)(a1 + 208) = result;
  if ( v2 )
    return result;
  v3 = a1 + 96;
  if ( *(uint8_t *)(a1 + 271) == 0 )
    goto LABEL_3;
  v5 = (*(uint8_t *)(a1 + 92) & 2) == 0;
  *(uint32_t *)(a1 + 208) = 0;
  if ( v5 )
  {
    v15 = *(uint8_t *)(a1 + 272);
    while ( ++v15 <= 6u )
    {
      v12 = v19[v15];
      v14 = (unsigned int)(v17[v15] + *(uint32_t *)(a1 + 180) - 1 - v16[v15]) / v17[v15];
      *(uint32_t *)(a1 + 192) = v14;
      v13 = (v12 + *(uint32_t *)(a1 + 184) - 1 - v18[v15]) / v12;
      *(uint32_t *)(a1 + 188) = v13;
      if ( v14 != 0 && v13 != 0 )
      {
        result = v15;
        *(uint8_t *)(a1 + 272) = v15;
        goto LABEL_8;
      }
    }
    v3 = a1 + 96;
    *(uint8_t *)(a1 + 272) = v15;
    goto LABEL_3;
  }
  result = *(uint8_t *)(a1 + 272) + 1;
  *(uint8_t *)(a1 + 272) = result;
  if ( (uint8_t)result > 6u )
  {
LABEL_3:
    while ( 1 )
    {
      v4 = deflate(v3, 4);
      if ( v4 != 0 )
        break;
      if ( *(uint32_t *)(a1 + 112) == 0 )
      {
        png_write_IDAT(a1, *(uint8_t **)(a1 + 152), *(uint32_t *)(a1 + 156));
        *(uint32_t *)(a1 + 108) = *(uint32_t *)(a1 + 152);
        *(uint32_t *)(a1 + 112) = *(uint32_t *)(a1 + 156);
      }
    }
    if ( v4 != 1 )
    {
      v9 = *(const char **)(a1 + 120);
      if ( v9 == nullptr )
        v9 = "zlib error";
      png_error(a1, (int)(uintptr_t)(v9));
    }
    v10 = *(uint32_t *)(a1 + 112);
    v11 = *(uint32_t *)(a1 + 156);
    if ( v10 < v11 )
      png_write_IDAT(a1, *(uint8_t **)(a1 + 152), v11 - v10);
    result = deflateReset((void *)(uintptr_t)(v3));
    *(uint32_t *)(a1 + 140) = 0;
    return result;
  }
LABEL_8:
  v6 = *(void **)(a1 + 212);
  if ( v6 != nullptr )
  {
    v7 = *(uint8_t *)(a1 + 276) * *(uint8_t *)(a1 + 279);
    if ( v7 <= 7 )
      v8 = ((*(uint32_t *)(a1 + 180) * v7 + 7) >> 3) + 1;
    else
      v8 = *(uint32_t *)(a1 + 180) * (v7 >> 3) + 1;
    return (unsigned int)(uintptr_t)(memset(v6, 0, v8));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_do_write_interlace  (binary VA: 0xfb7970)
// Original: png_do_write_interlace
// ----------------------------------------------------------------------------
unsigned int png_do_write_interlace(unsigned int *a1, uint8_t *dest, int a3)
{
  unsigned int result;
  uint8_t v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  uint8_t *v8;
  uint8_t *v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  char v16;
  unsigned int v17;
  int v18;
  char v19;
  unsigned int v20;
  int v21;
  char v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  size_t v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  uint8_t *v30;
  uint32_t v31[8];
  uint32_t v32[11];

  result = a3;
  v31[0] = 0;
  v31[1] = 4;
  v31[2] = 0;
  v31[3] = 2;
  v31[4] = 0;
  v31[5] = 1;
  v31[6] = 0;
  v32[0] = 8;
  v32[1] = 8;
  v32[2] = 4;
  v32[3] = 4;
  v32[4] = 2;
  v32[5] = 2;
  v32[6] = 1;
  if ( a3 <= 5 )
  {
    v4 = *((uint8_t *)a1 + 11);
    switch ( v4 )
    {
      case 2u:
        v13 = v31[a3];
        v27 = *a1;
        v25 = v13;
        if ( *a1 <= v13 )
          goto LABEL_23;
        v30 = dest;
        v28 = v32[a3];
        v14 = 0;
        v15 = 6;
        do
        {
          while ( 1 )
          {
            v14 |= (((int)dest[v13 >> 2] >> (2 * (~(uint8_t)v13 & 3))) & 3) << v15;
            if ( v15 != 0 )
              break;
            v16 = v14;
            v13 += v28;
            v14 = 0;
            *v30++ = v16;
            v15 = 6;
            if ( v27 <= v13 )
              goto LABEL_21;
          }
          v15 -= 2;
          v13 += v28;
        }
        while ( v27 > v13 );
LABEL_21:
        if ( v15 == 6 )
          goto LABEL_11;
        break;
      case 4u:
        v20 = v31[a3];
        v25 = v20;
        v27 = *a1;
        if ( *a1 <= v20 )
          goto LABEL_23;
        v30 = dest;
        v28 = v32[a3];
        v14 = 0;
        v21 = 4;
        do
        {
          while ( 1 )
          {
            v14 |= (((int)dest[v20 >> 1] >> ((v20 & 1) == 0 ? 4 : 0)) & 0xF) << v21;
            if ( v21 != 0 )
              break;
            v22 = v14;
            v20 += v28;
            v14 = 0;
            *v30++ = v22;
            v21 = 4;
            if ( v27 <= v20 )
              goto LABEL_37;
          }
          v21 -= 4;
          v20 += v28;
        }
        while ( v27 > v20 );
LABEL_37:
        if ( v21 == 4 )
          goto LABEL_11;
        break;
      case 1u:
        v17 = v31[a3];
        v27 = *a1;
        v25 = v17;
        if ( *a1 > v17 )
        {
          v30 = dest;
          v28 = v32[a3];
          v14 = 0;
          v18 = 7;
          do
          {
            while ( 1 )
            {
              v14 |= (((int)dest[v17 >> 3] >> (~(uint8_t)v17 & 7)) & 1) << v18;
              if ( v18 != 0 )
                break;
              v19 = v14;
              v17 += v28;
              v14 = 0;
              *v30++ = v19;
              v18 = 7;
              if ( v27 <= v17 )
                goto LABEL_30;
            }
            --v18;
            v17 += v28;
          }
          while ( v27 > v17 );
LABEL_30:
          if ( v18 == 7 )
            goto LABEL_11;
          break;
        }
LABEL_23:
        v12 = (v27 + v32[a3] - 1 - v25) / v32[a3];
        *a1 = v12;
        goto LABEL_24;
      default:
        v26 = v4 >> 3;
        v5 = v31[a3];
        v6 = v32[a3];
        v29 = *a1;
        v25 = v5;
        v28 = v6;
        if ( *a1 <= v5 )
        {
          v10 = v32[a3];
LABEL_12:
          v11 = (v29 + v10 - 1 - v25) / v28;
          v12 = v11;
          *a1 = v11;
          if ( v4 > 7u )
          {
            result = (v4 >> 3) * v11;
LABEL_14:
            a1[1] = result;
            return result;
          }
LABEL_24:
          result = (v12 * v4 + 7) >> 3;
          goto LABEL_14;
        }
        v7 = v6 + v5;
        v24 = v26 * v6;
        v8 = &dest[v25 * v26];
        v9 = dest;
        while ( 1 )
        {
          if ( v9 != v8 )
          {
            v23 = v7;
            memcpy(v9, v8, v26);
            v7 = v23;
          }
          v9 += v26;
          v8 += v24;
          if ( v29 <= v7 )
            break;
          v7 += v28;
        }
LABEL_11:
        v10 = v28;
        v29 = *a1;
        v4 = *((uint8_t *)a1 + 11);
        goto LABEL_12;
    }
    *v30 = v14;
    goto LABEL_11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: png_write_filtered_row  (binary VA: 0xfb7d00)
// Original: png_write_filtered_row
// ----------------------------------------------------------------------------
void png_write_filtered_row(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;

  *(uint32_t *)(a1 + 96) = a2;
  *(uint32_t *)(a1 + 100) = *(uint32_t *)(a1 + 240) + 1;
  do
  {
    while ( 1 )
    {
      if ( deflate(a1 + 96, 0) != 0 )
      {
        if ( *(uint32_t *)(a1 + 120) != 0 )
          png_error(a1, *(uint32_t *)(a1 + 120));
        png_error(a1, (int)(uintptr_t)("zlib error"));
      }
      if ( *(uint32_t *)(a1 + 112) == 0 )
        break;
      if ( *(uint32_t *)(a1 + 100) == 0 )
        goto LABEL_8;
    }
    png_write_IDAT(a1, *(uint8_t **)(a1 + 152), *(uint32_t *)(a1 + 156));
    v2 = *(uint32_t *)(a1 + 100);
    *(uint32_t *)(a1 + 108) = *(uint32_t *)(a1 + 152);
    *(uint32_t *)(a1 + 112) = *(uint32_t *)(a1 + 156);
  }
  while ( v2 != 0 );
LABEL_8:
  v3 = *(uint32_t *)(a1 + 212);
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 216);
    *(uint32_t *)(a1 + 216) = v3;
    *(uint32_t *)(a1 + 212) = v4;
  }
  png_write_finish_row(a1);
  v5 = *(uint32_t *)(a1 + 316);
  v6 = *(uint32_t *)(a1 + 320) + 1;
  *(uint32_t *)(a1 + 320) = v6;
  if ( v5 != 0 && v6 >= v5 )
    png_write_flush((uint32_t *)a1);
}

// ----------------------------------------------------------------------------
// Function: png_write_find_filter  (binary VA: 0xfb7e20)
// Original: png_write_find_filter
// ----------------------------------------------------------------------------
void png_write_find_filter(int a1, int a2)
{
  uint8_t *v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int k;
  int v11;
  unsigned int v12;
  unsigned int v13;
  uint8_t *v14;
  uint8_t v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int i;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int n;
  int v34;
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
  unsigned int v53;
  unsigned int v54;
  int v55;
  int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  signed int v73;
  signed int v74;
  signed int v75;
  char v76; // si
  int v77;
  unsigned int v78;
  int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  unsigned int v89;
  int v90;
  uint8_t v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  signed int v97;
  signed int v98;
  signed int v99;
  char v100; // si
  int v101;
  unsigned int v102;
  unsigned int v103;
  int v104;
  int ii;
  int v106;
  int v107;
  unsigned int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  int m;
  int v114;
  unsigned int v115;
  unsigned int v116;
  unsigned int v117;
  int j;
  int v119;
  int v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;
  int v124;
  unsigned int v125;
  int v126;
  int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  int v131;
  unsigned int v132;
  int v133;
  int v134;
  unsigned int v135;
  int v136;
  unsigned int v137;
  unsigned int v138;
  unsigned int v139;
  unsigned int v140;
  int v141;
  unsigned int v142;
  int v143;
  int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  int jj;
  int v150;
  int v151;
  unsigned int v152;
  unsigned int v153;
  unsigned int v154;
  int kk;
  int v156;
  int v157;
  unsigned int v158;
  unsigned int v159;
  uint8_t *v160;
  uint8_t *v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  uint8_t *v166;
  unsigned int v167;
  uint8_t *v168;
  unsigned int v169;
  unsigned int v170;
  unsigned int v171;
  int v172;
  int v173;
  int v174;
  unsigned int v175;
  uint8_t *v176;
  unsigned int v177;
  int v178;
  int v179;
  __m128i v180;
  int v181;
  uint8_t *v182;
  char v183;
  uint8_t *v184;
  uint8_t *v185;
  unsigned int v186;
  unsigned int v187;
  unsigned int v188;
  int v189;
  unsigned int v190;
  int v191;
  unsigned int v192;
  uint8_t *v193;
  int v194;
  uint8_t *v195;
  unsigned int v196;
  int v197;
  int v198;
  unsigned int v199;
  uint8_t *v200;
  uint8_t *v201;
  uint8_t *v202;
  int v203;
  int v204;
  unsigned int v205;
  unsigned int v206;
  unsigned int v207;
  unsigned int v208;
  uint8_t *v209;
  unsigned int v210;
  char v211;
  unsigned int v212;
  unsigned int v213;
  int v214;
  unsigned int v215;
  uint8_t *v216;
  unsigned int v217;
  unsigned int v218;
  int v219;
  int v220;
  unsigned int v221;
  int v222;
  int v223;
  int v224;
  uint8_t *v225;
  uint8_t *v226;
  unsigned int v227;
  uint8_t *v228;
  uint8_t *v229;
  uint8_t *v230;
  unsigned int v231;
  unsigned int v232;
  unsigned int v233;
  int v234;

  v211 = *(uint8_t *)(a1 + 273);
  v210 = *(uint32_t *)(a2 + 4);
  v179 = *(uint32_t *)(a1 + 212);
  v232 = (*(uint8_t *)(a2 + 11) + 7) >> 3;
  v172 = *(uint8_t *)(a1 + 485);
  v2 = *(uint8_t **)(a1 + 216);
  if ( (v211 & 8) != 0 && v211 != 8 )
  {
    v21 = 0;
    if ( v210 != 0 )
    {
      for ( i = 0; i != v210; ++i )
      {
        v23 = (uint8_t)v2[i + 1];
        if ( v23 > 0x7F )
          v23 = 256 - v23;
        v21 += v23;
      }
    }
    v169 = v21;
    if ( *(uint8_t *)(a1 + 484) == 2 )
    {
      v24 = (uint16_t)v21;
      v25 = (v21 >> 10) & 0x3FFFC0;
      if ( *(uint8_t *)(a1 + 485) != 0 )
      {
        v26 = 0;
        do
        {
          if ( *(uint8_t *)(*(uint32_t *)(a1 + 488) + v26) == 0 )
          {
            v27 = *(uint16_t *)(*(uint32_t *)(a1 + 492) + 2 * v26);
            v24 = (v27 * v24) >> 8;
            v25 = (v27 * v25) >> 8;
          }
          ++v26;
        }
        while ( v172 > v26 );
        v2 = *(uint8_t **)(a1 + 216);
      }
      v169 = 0x7FFFFFFF;
      v28 = **(uint16_t **)(a1 + 500);
      v29 = (v28 * v25) >> 3;
      if ( v29 <= 0x3FFFC0 )
        v169 = (v29 << 10) + ((v24 * v28) >> 3);
    }
  }
  else
  {
    v169 = 0x7FFFFFFF;
  }
  if ( v211 != 16 )
  {
    v193 = v2;
    if ( (v211 & 0x10) != 0 )
    {
      v217 = v169;
      if ( *(uint8_t *)(a1 + 484) == 2 )
      {
        v129 = (uint16_t)v169;
        v130 = (v169 >> 10) & 0x3FFFC0;
        if ( *(uint8_t *)(a1 + 485) != 0 )
        {
          v230 = v2;
          v131 = 0;
          v132 = (uint16_t)v169;
          do
          {
            if ( *(uint8_t *)(*(uint32_t *)(a1 + 488) + v131) == 1 )
            {
              v133 = *(uint16_t *)(*(uint32_t *)(a1 + 496) + 2 * v131);
              v132 = (v133 * v132) >> 8;
              v130 = (v133 * v130) >> 8;
            }
            ++v131;
          }
          while ( v172 > v131 );
          v129 = v132;
          v2 = v230;
        }
        v217 = 0x7FFFFFFF;
        v134 = *(uint16_t *)(*(uint32_t *)(a1 + 504) + 2);
        v135 = (v134 * v130) >> 3;
        if ( v135 <= 0x3FFFC0 )
          v217 = (v135 << 10) + ((v129 * v134) >> 3);
      }
      v201 = v2 + 1;
      v3 = 0;
      v194 = *(uint32_t *)(a1 + 220);
      v181 = v194 + 1;
      v4 = 0;
      if ( v232 != 0 )
      {
        do
        {
          v5 = (uint8_t)v2[v4 + 1];
          *(uint8_t *)(v194 + v4 + 1) = v2[v4 + 1];
          ++v4;
          if ( v5 > 0x7F )
            v5 = 256 - v5;
          v3 += v5;
        }
        while ( v232 != v4 );
        v4 = v232;
        v201 += v232;
        v181 += v232;
      }
      if ( v210 > v4 )
      {
        v195 = &v201[-v4];
        v202 = &v2[-v4];
        v6 = v181;
        v182 = v2;
        v7 = v6 - v4;
        do
        {
          LOBYTE(v8) = v195[v4] - v202[v4 + 1];
          *(uint8_t *)(v7 + v4) = v8;
          v8 = (uint8_t)v8;
          if ( (uint8_t)v8 > 0x7Fu )
            v8 = 256 - (uint8_t)v8;
          v3 += v8;
          if ( v217 < v3 )
            break;
          ++v4;
        }
        while ( v210 > v4 );
        v2 = v182;
      }
      if ( *(uint8_t *)(a1 + 484) == 2 )
      {
        v139 = (uint16_t)v3;
        v140 = (v3 >> 10) & 0x3FFFC0;
        v231 = (uint16_t)v3;
        if ( v172 != 0 )
        {
          v200 = v2;
          v141 = 0;
          v142 = v139;
          do
          {
            if ( *(uint8_t *)(*(uint32_t *)(a1 + 488) + v141) == 1 )
            {
              v143 = *(uint16_t *)(*(uint32_t *)(a1 + 496) + 2 * v141);
              v142 = (v143 * v142) >> 8;
              v140 = (v143 * v140) >> 8;
            }
            ++v141;
          }
          while ( v172 > v141 );
          v231 = v142;
          v2 = v200;
        }
        v144 = *(uint16_t *)(*(uint32_t *)(a1 + 504) + 2);
        v3 = 0x7FFFFFFF;
        v145 = (v144 * v140) >> 3;
        if ( v145 <= 0x3FFFC0 )
          v3 = (v145 << 10) + ((v144 * v231) >> 3);
      }
      v193 = v2;
      if ( v169 > v3 )
      {
        v169 = v3;
        v193 = *(uint8_t **)(a1 + 220);
      }
    }
    if ( v211 != 32 )
    {
      if ( (v211 & 0x20) == 0 )
        goto LABEL_35;
      v218 = v169;
      v183 = *(uint8_t *)(a1 + 484);
      if ( v183 == 2 )
      {
        v115 = (uint16_t)v169;
        v116 = (v169 >> 10) & 0x3FFFC0;
        if ( v172 != 0 )
        {
          v228 = v2;
          v117 = (uint16_t)v169;
          for ( j = 0; j < v172; ++j )
          {
            if ( *(uint8_t *)(*(uint32_t *)(a1 + 488) + j) == 2 )
            {
              v119 = *(uint16_t *)(*(uint32_t *)(a1 + 496) + 2 * j);
              v117 = (v119 * v117) >> 8;
              v116 = (v119 * v116) >> 8;
            }
          }
          v115 = v117;
          v2 = v228;
        }
        v218 = 0x7FFFFFFF;
        v120 = *(uint16_t *)(*(uint32_t *)(a1 + 504) + 4);
        v121 = (v120 * v116) >> 3;
        if ( v121 <= 0x3FFFC0 )
          v218 = (v121 << 10) + ((v115 * v120) >> 3);
      }
      v9 = 0;
      v203 = *(uint32_t *)(a1 + 224);
      if ( v210 != 0 )
      {
        for ( k = 0; k != v210; ++k )
        {
          LOBYTE(v11) = v2[k + 1] - *(uint8_t *)(v179 + k + 1);
          *(uint8_t *)(v203 + k + 1) = v11;
          v11 = (uint8_t)v11;
          if ( (uint8_t)v11 > 0x7Fu )
            v11 = 256 - (uint8_t)v11;
          v9 += v11;
          if ( v218 < v9 )
          {
            v183 = *(uint8_t *)(a1 + 484);
            goto LABEL_32;
          }
        }
        if ( *(uint8_t *)(a1 + 484) != 2 )
          goto LABEL_33;
      }
      else
      {
LABEL_32:
        if ( v183 != 2 )
        {
LABEL_33:
          if ( v9 < v169 )
          {
            v169 = v9;
            v193 = *(uint8_t **)(a1 + 224);
          }
          goto LABEL_35;
        }
      }
      v110 = (uint16_t)v9;
      v111 = (v9 >> 10) & 0x3FFFC0;
      v227 = v110;
      if ( v172 != 0 )
      {
        v209 = v2;
        v112 = v110;
        for ( m = 0; m < v172; ++m )
        {
          if ( *(uint8_t *)(*(uint32_t *)(a1 + 488) + m) == 2 )
          {
            v114 = *(uint16_t *)(*(uint32_t *)(a1 + 492) + 2 * m);
            v112 = (v114 * v112) >> 8;
            v111 = (v114 * v111) >> 8;
          }
        }
        v227 = v112;
        v2 = v209;
      }
      v136 = *(uint16_t *)(*(uint32_t *)(a1 + 500) + 4);
      v137 = v136 * v111;
      v9 = 0x7FFFFFFF;
      v138 = v137 >> 3;
      if ( v138 <= 0x3FFFC0 )
        v9 = (v138 << 10) + ((v227 * v136) >> 3);
      goto LABEL_33;
    }
    v193 = *(uint8_t **)(a1 + 224);
    if ( v210 == 0 )
      goto LABEL_36;
    v206 = *(uint32_t *)(a1 + 224) + 1;
    v186 = (unsigned int)(uintptr_t)(v2 + 1);
    v175 = v179 + 1;
    if ( 16 * (v210 >> 4) != 0
      && (v175 > (unsigned int)(uintptr_t)(v193 + 17) || v206 > v179 + 17)
      && (v186 > (unsigned int)(uintptr_t)(v193 + 17) || v206 > (unsigned int)(uintptr_t)(v2 + 17))
      && v210 > 0xF )
    {
      v55 = 0;
      v56 = *(uint32_t *)(a1 + 224);
      v57 = 0;
      v197 = 16 * (v210 >> 4);
      do
      {
        ++v57;
        *(__m128i *)(v56 + v55 + 1) = _mm_sub_epi8(*(__m128i *)&v2[v55 + 1], *(__m128i *)(v179 + v55 + 1));
        v55 += 16;
      }
      while ( v210 >> 4 > v57 );
      v58 = 16 * (v210 >> 4);
      v186 += v197;
      v206 += v197;
      v175 += v197;
      if ( v210 == v197 )
        goto LABEL_97;
    }
    else
    {
      v58 = 0;
    }
    v59 = v58;
    v60 = -v58;
    v61 = v206 - v58;
    v62 = v60 + v186;
    v63 = v175 + v60;
    do
    {
      *(uint8_t *)(v61 + v59) = *(uint8_t *)(v62 + v59) - *(uint8_t *)(v63 + v59);
      ++v59;
    }
    while ( v210 > v59 );
LABEL_97:
    v193 = *(uint8_t **)(a1 + 224);
    goto LABEL_54;
  }
  v188 = 0;
  v208 = (unsigned int)(uintptr_t)(v2 + 1);
  v77 = *(uint32_t *)(a1 + 220);
  v199 = v77 + 1;
  v78 = (unsigned int)(uintptr_t)(v2 + 1);
  if ( v232 != 0 )
  {
    v224 = 16 * (v232 >> 4);
    if ( v224 != 0 && (v208 > v77 + 17 || v199 > (unsigned int)(uintptr_t)(v2 + 17)) && v232 > 0xF )
    {
      v79 = 0;
      v80 = 0;
      do
      {
        ++v80;
        *(__m128i *)(v77 + v79 + 1) = *(__m128i *)&v2[v79 + 1];
        v79 += 16;
      }
      while ( v232 >> 4 > v80 );
      v81 = v224 + v208;
      v82 = v224 + v199;
      if ( v232 == v224 )
        goto LABEL_123;
    }
    else
    {
      v82 = v77 + 1;
      v81 = (unsigned int)(uintptr_t)(v2 + 1);
      v224 = 0;
    }
    v83 = v224;
    v84 = v81 - v224;
    do
    {
      *(uint8_t *)(v82 - v224 + v83) = *(uint8_t *)(v84 + v83);
      ++v83;
    }
    while ( v232 > v83 );
LABEL_123:
    v199 += v232;
    v78 = v232 + v208;
    v188 = v232;
  }
  if ( v210 > v188 )
  {
    v167 = v210 - v188;
    v177 = 16 * ((v210 - v188) >> 4);
    if ( v177 == 0 )
      goto LABEL_130;
    if ( v208 <= v199 + 16 && v199 <= (unsigned int)(uintptr_t)(v2 + 17) || v78 <= v199 + 16 && v199 <= v78 + 16 || v167 <= 0xF )
      goto LABEL_130;
    v85 = 0;
    v86 = 0;
    do
    {
      ++v86;
      *(__m128i *)(v199 + v85) = _mm_sub_epi8(*(__m128i *)(v78 + v85), *(__m128i *)&v2[v85 + 1]);
      v85 += 16;
    }
    while ( (v210 - v188) >> 4 > v86 );
    v78 += v177;
    v199 += v177;
    v188 += v177;
    v208 += v177;
    if ( v167 != v177 )
    {
LABEL_130:
      v87 = v188;
      v88 = v78 - v188;
      do
      {
        *(uint8_t *)(v199 - v188 + v87) = *(uint8_t *)(v88 + v87) - *(uint8_t *)(v208 - v188 + v87);
        ++v87;
      }
      while ( v210 > v87 );
    }
  }
  v193 = *(uint8_t **)(a1 + 220);
LABEL_35:
  if ( v211 == 64 )
  {
    v221 = (unsigned int)(uintptr_t)(v2 + 1);
    v196 = v179 + 1;
    v30 = *(uint32_t *)(a1 + 228);
    v31 = (unsigned int)(uintptr_t)(v2 + 1);
    v205 = 0;
    v32 = v30 + 1;
    if ( v232 != 0 )
    {
      for ( n = 0; n != v232; ++n )
        *(uint8_t *)(v30 + n + 1) = v2[n + 1] - (*(uint8_t *)(v179 + n + 1) >> 1);
      v32 = v232 + v30 + 1;
      v31 = v232 + v221;
      v196 += v232;
      v205 = v232;
    }
    if ( v210 > v205 )
    {
      v170 = v210 - v205;
      v212 = (v210 - v205) >> 4;
      v191 = 16 * v212;
      if ( 16 * v212 == 0 )
        goto LABEL_86;
      if ( v221 <= v32 + 16 && v32 <= (unsigned int)(uintptr_t)(v2 + 17)
        || v196 <= v32 + 16 && v32 <= v196 + 16
        || v31 <= v32 + 16 && v32 <= v31 + 16
        || v170 <= 0xF )
      {
        goto LABEL_86;
      }
      v34 = 0;
      v233 = 0;
      do
      {
        ++v233;
        v35 = _mm_unpacklo_epi8(*(__m128i *)(v196 + v34), g4_m128_from<__m128i>(0LL));
        v36 = _mm_unpacklo_epi8(*(__m128i *)&v2[v34 + 1], g4_m128_from<__m128i>(0LL));
        v37 = _mm_unpacklo_epi16(v36, g4_m128_from<__m128i>(0LL));
        v38 = _mm_srai_epi32(
                _mm_add_epi32(_mm_unpackhi_epi16(v36, g4_m128_from<__m128i>(0LL)), _mm_unpackhi_epi16(v35, g4_m128_from<__m128i>(0LL))),
                1u);
        v39 = _mm_srai_epi32(_mm_add_epi32(v37, _mm_unpacklo_epi16(v35, g4_m128_from<__m128i>(0LL))), 1u);
        v40 = _mm_unpacklo_epi16(v39, v38);
        v41 = _mm_unpackhi_epi16(v39, v38);
        v42 = _mm_unpackhi_epi8(*(__m128i *)(v196 + v34), g4_m128_from<__m128i>(0LL));
        v180 = _mm_unpackhi_epi8(*(__m128i *)&v2[v34 + 1], g4_m128_from<__m128i>(0LL));
        v43 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v40, v41), _mm_unpackhi_epi16(v40, v41));
        v44 = _mm_srai_epi32(
                _mm_add_epi32(_mm_unpacklo_epi16(v42, g4_m128_from<__m128i>(0LL)), _mm_unpacklo_epi16(v180, g4_m128_from<__m128i>(0LL))),
                1u);
        v45 = _mm_srai_epi32(
                _mm_add_epi32(_mm_unpackhi_epi16(v180, g4_m128_from<__m128i>(0LL)), _mm_unpackhi_epi16(v42, g4_m128_from<__m128i>(0LL))),
                1u);
        v46 = _mm_unpackhi_epi16(v44, v45);
        v47 = _mm_unpacklo_epi16(v44, v45);
        v48 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v47, v46), _mm_unpackhi_epi16(v47, v46));
        v49 = _mm_unpackhi_epi8(v43, v48);
        v50 = _mm_unpacklo_epi8(v43, v48);
        v51 = _mm_unpacklo_epi8(v50, v49);
        v52 = _mm_unpackhi_epi8(v50, v49);
        *(__m128i *)(v32 + v34) = _mm_sub_epi8(
                                    *(__m128i *)(v31 + v34),
                                    _mm_unpacklo_epi8(_mm_unpacklo_epi8(v51, v52), _mm_unpackhi_epi8(v51, v52)));
        v34 += 16;
      }
      while ( v212 > v233 );
      v31 += v191;
      v32 += v191;
      v196 += v191;
      v205 += v191;
      v221 += v191;
      if ( v170 != v191 )
      {
LABEL_86:
        v53 = v205;
        v54 = v31 - v205;
        do
        {
          *(uint8_t *)(v32 - v205 + v53) = *(uint8_t *)(v54 + v53)
                                       - ((*(uint8_t *)(v221 - v205 + v53)
                                         + *(uint8_t *)(v196 - v205 + v53)) >> 1);
          ++v53;
        }
        while ( v210 > v53 );
      }
    }
    v193 = *(uint8_t **)(a1 + 228);
    goto LABEL_56;
  }
LABEL_36:
  if ( (v211 & 0x40) == 0 )
    goto LABEL_54;
  v190 = v169;
  if ( *(uint8_t *)(a1 + 484) == 2 )
  {
    v122 = (uint16_t)v169;
    v123 = (v169 >> 10) & 0x3FFFC0;
    if ( v172 != 0 )
    {
      v229 = v2;
      v124 = 0;
      v125 = (uint16_t)v169;
      do
      {
        if ( *(uint8_t *)(*(uint32_t *)(a1 + 488) + v124) == 3 )
        {
          v126 = *(uint16_t *)(*(uint32_t *)(a1 + 496) + 2 * v124);
          v125 = (v126 * v125) >> 8;
          v123 = (v126 * v123) >> 8;
        }
        ++v124;
      }
      while ( v172 > v124 );
      v122 = v125;
      v2 = v229;
    }
    v190 = 0x7FFFFFFF;
    v127 = *(uint16_t *)(*(uint32_t *)(a1 + 504) + 6);
    v128 = (v127 * v123) >> 3;
    if ( v128 <= 0x3FFFC0 )
      v190 = (v128 << 10) + ((v122 * v127) >> 3);
  }
  v184 = v2 + 1;
  v12 = 0;
  v173 = v179 + 1;
  v219 = *(uint32_t *)(a1 + 228);
  v204 = v219 + 1;
  v13 = 0;
  if ( v232 != 0 )
  {
    v14 = v2;
    v165 = 0;
    do
    {
      v15 = v14[v12 + 1] - (*(uint8_t *)(v179 + v12 + 1) >> 1);
      *(uint8_t *)(v219 + v12++ + 1) = v15;
      v16 = v15;
      v17 = 256 - v15;
      if ( v16 <= 0x7F )
        v17 = v16;
      v165 += v17;
    }
    while ( v232 != v12 );
    v2 = v14;
    v13 = v165;
    v204 += v232;
    v184 += v232;
    v173 += v232;
    v12 = v232;
  }
  if ( v210 > v12 )
  {
    v166 = v2;
    v220 = -v12;
    v185 = &v184[-v12];
    v174 = v173 - v12;
    v163 = v13;
    v161 = &v2[-v12];
    do
    {
      LOBYTE(v18) = v185[v12] - (((uint8_t)v161[v12 + 1] + *(uint8_t *)(v174 + v12)) >> 1);
      *(uint8_t *)(v220 + v204 + v12) = v18;
      v18 = (uint8_t)v18;
      if ( (uint8_t)v18 > 0x7Fu )
        v18 = 256 - (uint8_t)v18;
      v163 += v18;
      if ( v190 < v163 )
      {
        v13 = v163;
        v2 = v166;
        goto LABEL_51;
      }
      ++v12;
    }
    while ( v210 > v12 );
    v19 = a1;
    v2 = v166;
    v13 = v163;
    if ( *(uint8_t *)(a1 + 484) != 2 )
      goto LABEL_52;
    goto LABEL_155;
  }
LABEL_51:
  v19 = a1;
  if ( *(uint8_t *)(a1 + 484) == 2 )
  {
LABEL_155:
    v102 = (uint16_t)v13;
    v103 = (v13 >> 10) & 0x3FFFC0;
    if ( v172 != 0 )
    {
      v104 = *(uint32_t *)(v19 + 488);
      v226 = v2;
      for ( ii = 0; ii < v172; ++ii )
      {
        if ( *(uint8_t *)(v104 + ii) == 0 )
        {
          v106 = *(uint16_t *)(*(uint32_t *)(a1 + 492) + 2 * ii);
          v102 = (v106 * v102) >> 8;
          v103 = (v106 * v103) >> 8;
        }
      }
      v2 = v226;
    }
    v107 = *(uint16_t *)(*(uint32_t *)(a1 + 500) + 6);
    v108 = v107 * v103;
    v13 = 0x7FFFFFFF;
    v109 = v108 >> 3;
    if ( v109 <= 0x3FFFC0 )
      v13 = (v109 << 10) + ((v107 * v102) >> 3);
  }
LABEL_52:
  if ( v13 < v169 )
  {
    v169 = v13;
    v193 = *(uint8_t **)(a1 + 228);
  }
LABEL_54:
  if ( v211 == (char)0x80 )
  {
    v192 = (unsigned int)(uintptr_t)(v2 + 1);
    v187 = 0;
    v171 = v179 + 1;
    v64 = *(uint32_t *)(a1 + 232);
    v207 = v64 + 1;
    if ( v232 == 0 )
    {
LABEL_107:
      if ( v210 > v187 )
      {
        v72 = 0;
        v176 = v2;
        do
        {
          v223 = *(uint8_t *)(v171 + v72);
          v234 = *(uint8_t *)(v179 + v72 + 1);
          v198 = (uint8_t)v176[v72 + 1];
          v73 = __builtin_abs(v223 - v234);
          v74 = __builtin_abs(v198 - v234);
          v75 = __builtin_abs(v223 - v234 + v198 - v234);
          if ( v73 > v75 || (v76 = v176[v72 + 1], v73 > v74) )
          {
            v76 = *(uint8_t *)(v171 + v72);
            if ( v74 > v75 )
              v76 = *(uint8_t *)(v179 + v72 + 1);
          }
          *(uint8_t *)(v207 + v72) = *(uint8_t *)(v192 + v72) - v76;
          ++v72;
        }
        while ( v210 > v72 + v187 );
      }
      v193 = *(uint8_t **)(a1 + 232);
      goto LABEL_56;
    }
    v222 = 16 * (v232 >> 4);
    if ( v222 != 0
      && (v171 > v64 + 17 || v207 > v179 + 17)
      && (v192 > v64 + 17 || v207 > (unsigned int)(uintptr_t)(v2 + 17))
      && v232 > 0xF )
    {
      v65 = 0;
      v66 = 0;
      do
      {
        ++v66;
        *(__m128i *)(v64 + v65 + 1) = _mm_sub_epi8(*(__m128i *)&v2[v65 + 1], *(__m128i *)(v179 + v65 + 1));
        v65 += 16;
      }
      while ( v232 >> 4 > v66 );
      v67 = v222 + v192;
      v68 = v222 + v207;
      v213 = v222 + v171;
      if ( v232 == v222 )
        goto LABEL_106;
    }
    else
    {
      v68 = v64 + 1;
      v213 = v179 + 1;
      v222 = 0;
      v67 = (unsigned int)(uintptr_t)(v2 + 1);
    }
    v69 = v222;
    v70 = v68 - v222;
    v71 = v67 - v222;
    do
    {
      *(uint8_t *)(v70 + v69) = *(uint8_t *)(v71 + v69) - *(uint8_t *)(v213 - v222 + v69);
      ++v69;
    }
    while ( v232 > v69 );
LABEL_106:
    v207 += v232;
    v192 += v232;
    v171 += v232;
    v187 = v232;
    goto LABEL_107;
  }
  if ( v211 < 0 )
  {
    v162 = v169;
    if ( *(uint8_t *)(a1 + 484) == 2 )
    {
      v146 = (uint16_t)v169;
      v147 = (v169 >> 10) & 0x3FFFC0;
      if ( v172 != 0 )
      {
        v216 = v2;
        v148 = (uint16_t)v169;
        for ( jj = 0; jj < v172; ++jj )
        {
          if ( *(uint8_t *)(*(uint32_t *)(a1 + 488) + jj) == 4 )
          {
            v150 = *(uint16_t *)(*(uint32_t *)(a1 + 496) + 2 * jj);
            v148 = (v150 * v148) >> 8;
            v147 = (v150 * v147) >> 8;
          }
        }
        v146 = v148;
        v2 = v216;
      }
      v162 = 0x7FFFFFFF;
      v151 = *(uint16_t *)(*(uint32_t *)(a1 + 504) + 8);
      v152 = (v151 * v147) >> 3;
      if ( v152 <= 0x3FFFC0 )
        v162 = (v152 << 10) + ((v146 * v151) >> 3);
    }
    v168 = v2 + 1;
    v189 = v179 + 1;
    v164 = 0;
    v214 = *(uint32_t *)(a1 + 232);
    v178 = v214 + 1;
    v89 = 0;
    if ( v232 != 0 )
    {
      v90 = 0;
      v225 = v2;
      do
      {
        v91 = v225[v90 + 1] - *(uint8_t *)(v179 + v90 + 1);
        v92 = v91;
        *(uint8_t *)(v214 + v90++ + 1) = v91;
        if ( v91 > 0x7Fu )
          v92 = 256 - v91;
        v89 += v92;
      }
      while ( v232 != v90 );
      v2 = v225;
      v178 += v232;
      v168 += v232;
      v189 += v232;
      v164 = v232;
    }
    if ( v210 > v164 )
    {
      v93 = 0;
      v160 = v2;
      v215 = v89;
      do
      {
        v94 = *(uint8_t *)(v179 + v93 + 1);
        v95 = *(uint8_t *)(v189 + v93) - v94;
        v96 = (uint8_t)v160[v93 + 1] - v94;
        v97 = __builtin_abs(v95);
        v98 = __builtin_abs(v96);
        v99 = __builtin_abs(v95 + v96);
        if ( v97 > v99 || (v100 = v160[v93 + 1], v97 > v98) )
        {
          v100 = *(uint8_t *)(v189 + v93);
          if ( v98 > v99 )
            v100 = *(uint8_t *)(v179 + v93 + 1);
        }
        LOBYTE(v101) = v168[v93] - v100;
        *(uint8_t *)(v178 + v93) = v101;
        v101 = (uint8_t)v101;
        if ( (uint8_t)v101 > 0x7Fu )
          v101 = 256 - (uint8_t)v101;
        v215 += v101;
        if ( v162 < v215 )
        {
          v89 = v215;
          goto LABEL_151;
        }
        ++v93;
      }
      while ( v210 > v93 + v164 );
      v89 = v215;
    }
LABEL_151:
    if ( *(uint8_t *)(a1 + 484) == 2 )
    {
      v153 = (uint16_t)v89;
      v154 = (v89 >> 10) & 0x3FFFC0;
      if ( v172 != 0 )
      {
        for ( kk = 0; kk < v172; ++kk )
        {
          if ( *(uint8_t *)(*(uint32_t *)(a1 + 488) + kk) == 4 )
          {
            v156 = *(uint16_t *)(*(uint32_t *)(a1 + 492) + 2 * kk);
            v153 = (v156 * v153) >> 8;
            v154 = (v156 * v154) >> 8;
          }
        }
      }
      v157 = *(uint16_t *)(*(uint32_t *)(a1 + 500) + 8);
      v158 = v157 * v154;
      v89 = 0x7FFFFFFF;
      v159 = v158 >> 3;
      if ( v159 <= 0x3FFFC0 )
        v89 = (v159 << 10) + ((v157 * v153) >> 3);
    }
    if ( v89 < v169 )
      v193 = *(uint8_t **)(a1 + 232);
  }
LABEL_56:
  png_write_filtered_row(a1, (int)(uintptr_t)(v193));
  if ( *(uint8_t *)(a1 + 485) != 0 )
  {
    v20 = 1;
    if ( v172 > 1 )
    {
      do
      {
        *(uint8_t *)(*(uint32_t *)(a1 + 488) + v20) = *(uint8_t *)(*(uint32_t *)(a1 + 488) + v20 - 1);
        ++v20;
      }
      while ( v172 > v20 );
      v20 = v172;
    }
    *(uint8_t *)(*(uint32_t *)(a1 + 488) + v20) = *v193;
  }
}


