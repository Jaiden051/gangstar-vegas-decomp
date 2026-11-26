#include "Core/Utils/DecompTypes.h"
#include "libjpeg_image.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: jpeg_CreateCompress  (binary VA: 0xf82f30)
// Original: jpeg_CreateCompress
// ----------------------------------------------------------------------------
int jpeg_CreateCompress(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint16_t *v4;
  unsigned int v5;
  uint16_t *v6;
  int result;
  int v8;

  a1[1] = 0;
  if ( a2 != 62 )
  {
    *(uint32_t *)(*a1 + 20) = 12;
    *(uint32_t *)(*a1 + 24) = 62;
    *(uint32_t *)(*a1 + 28) = a2;
    G4_VCALL<void>(a1, 0);
  }
  if ( a3 != 356 )
  {
    *(uint32_t *)(*a1 + 20) = 21;
    *(uint32_t *)(*a1 + 24) = 356;
    *(uint32_t *)(*a1 + 28) = a3;
    G4_VCALL<void>(a1, 0);
  }
  v3 = *a1;
  v8 = a1[3];
  v4 = (uint16_t *)(a1);
  v5 = 356;
  if ( ((uint8_t)(uintptr_t)a1 & 1) != 0 )
  {
    v4 = (uint16_t *)((char *)a1 + 1);
    *(uint8_t *)a1 = 0;
    LOBYTE(v5) = 99;
    if ( (((unsigned int)(uintptr_t)(a1) + 1) & 2) == 0 )
      goto LABEL_7;
  }
  else if ( ((uint8_t)(uintptr_t)a1 & 2) == 0 )
  {
    goto LABEL_7;
  }
  *v4 = 0;
  v5 -= 2;
  ++v4;
LABEL_7:
  memset(v4, 0, 4 * (v5 >> 2));
  v6 = &v4[2 * (v5 >> 2)];
  if ( (v5 & 2) != 0 )
    *v6++ = 0;
  if ( (v5 & 1) != 0 )
    *(uint8_t *)v6 = 0;
  *a1 = v3;
  a1[3] = v8;
  *((uint8_t *)a1 + 16) = 0;
  result = (int)(uintptr_t)(jinit_memory_mgr(a1));
  a1[2] = 0;
  a1[6] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[21] = 0;
  a1[25] = 0;
  a1[22] = 0;
  a1[26] = 0;
  a1[23] = 0;
  a1[27] = 0;
  a1[24] = 0;
  a1[28] = 0;
  a1[87] = 0;
  a1[5] = 100;
  *(uint64_t *)(a1 + 11) = 0x3FF0000000000000LL;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_destroy_compress  (binary VA: 0xf830d0)
// Original: jpeg_destroy_compress
// ----------------------------------------------------------------------------
int jpeg_destroy_compress(int a1)
{
  return jpeg_destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: jpeg_abort_compress  (binary VA: 0xf83100)
// Original: jpeg_abort_compress
// ----------------------------------------------------------------------------
int jpeg_abort_compress(int a1)
{
  return jpeg_abort(a1);
}

// ----------------------------------------------------------------------------
// Function: jpeg_suppress_tables  (binary VA: 0xf83130)
// Original: jpeg_suppress_tables
// ----------------------------------------------------------------------------
int jpeg_suppress_tables(uint32_t *a1, char a2)
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
  int result;

  v2 = a1[17];
  if ( v2 != 0 )
    *(uint8_t *)(v2 + 128) = a2;
  v3 = a1[18];
  if ( v3 != 0 )
    *(uint8_t *)(v3 + 128) = a2;
  v4 = a1[19];
  if ( v4 != 0 )
    *(uint8_t *)(v4 + 128) = a2;
  v5 = a1[20];
  if ( v5 != 0 )
    *(uint8_t *)(v5 + 128) = a2;
  v6 = a1[21];
  if ( v6 != 0 )
    *(uint8_t *)(v6 + 273) = a2;
  v7 = a1[25];
  if ( v7 != 0 )
    *(uint8_t *)(v7 + 273) = a2;
  v8 = a1[22];
  if ( v8 != 0 )
    *(uint8_t *)(v8 + 273) = a2;
  v9 = a1[26];
  if ( v9 != 0 )
    *(uint8_t *)(v9 + 273) = a2;
  v10 = a1[23];
  if ( v10 != 0 )
    *(uint8_t *)(v10 + 273) = a2;
  v11 = a1[27];
  if ( v11 != 0 )
    *(uint8_t *)(v11 + 273) = a2;
  v12 = a1[24];
  if ( v12 != 0 )
    *(uint8_t *)(v12 + 273) = a2;
  result = a1[28];
  if ( result != 0 )
    *(uint8_t *)(result + 273) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_finish_compress  (binary VA: 0xf831e0)
// Original: jpeg_finish_compress
// ----------------------------------------------------------------------------
int jpeg_finish_compress(uint32_t *a1)
{
  int v1;
  int i;
  unsigned int v3;
  int v4;

  v1 = a1[5];
  if ( (unsigned int)(v1 - 101) <= 1 )
  {
    if ( a1[51] < a1[8] )
    {
      *(uint32_t *)(*a1 + 20) = 67;
      G4_VCALL<void>(a1, 0);
    }
    goto LABEL_12;
  }
  if ( v1 != 103 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  for ( i = a1[78]; *(uint8_t *)(i + 13) == 0; i = a1[78] )
  {
    (*(void (**)(uint32_t *))i)(a1);
    if ( a1[55] != 0 )
    {
      v3 = 0;
      do
      {
        while ( 1 )
        {
          v4 = a1[2];
          if ( v4 != 0 )
          {
            *(uint32_t *)(v4 + 4) = v3;
            *(uint32_t *)(a1[2] + 8) = a1[55];
            (*(void (**)(uint32_t *))a1[2])(a1);
          }
          if ( (*(uint8_t (**)(uint32_t *, uint32_t))(a1[81] + 4))(a1, 0) == 0 )
            break;
          if ( a1[55] <= ++v3 )
            goto LABEL_12;
        }
        ++v3;
        *(uint32_t *)(*a1 + 20) = 24;
        G4_VCALL<void>(a1, 0);
      }
      while ( a1[55] > v3 );
    }
LABEL_12:
    (*(void (**)(uint32_t *))(a1[78] + 8))(a1);
  }
  (*(void (**)(uint32_t *))(a1[82] + 12))(a1);
  (*(void (**)(uint32_t *))(a1[6] + 16))(a1);
  return jpeg_abort(a1);
}

// ----------------------------------------------------------------------------
// Function: jpeg_write_marker  (binary VA: 0xf83310)
// Original: jpeg_write_marker
// ----------------------------------------------------------------------------
int jpeg_write_marker(uint32_t *a1, int a2, uint8_t *a3, int a4)
{
  int v5;
  int result;
  int v7;
  int (*v8)(uint32_t *, int);

  v5 = a4;
  if ( a1[51] != 0 || (unsigned int)(a1[5] - 101) > 2 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  (*(void (**)(uint32_t *, int, int))(a1[82] + 20))(a1, a2, a4);
  result = *(uint32_t *)(a1[82] + 24);
  v8 = (int (*)(uint32_t *, int))result;
  if ( a4 != 0 )
  {
    do
    {
      v7 = *a3++;
      result = v8(a1, v7);
      --v5;
    }
    while ( v5 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_write_m_header  (binary VA: 0xf833b0)
// Original: jpeg_write_m_header
// ----------------------------------------------------------------------------
int jpeg_write_m_header(uint32_t *a1, int a2, int a3)
{
  if ( a1[51] != 0 || (unsigned int)(a1[5] - 101) > 2 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  return (*(int (**)(uint32_t *, int, int))(a1[82] + 20))(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: jpeg_write_m_byte  (binary VA: 0xf83410)
// Original: jpeg_write_m_byte
// ----------------------------------------------------------------------------
int jpeg_write_m_byte(int a1, int a2)
{
  return (*(int (**)(int, int))(*(uint32_t *)(a1 + 328) + 24))(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: jpeg_write_tables  (binary VA: 0xf83440)
// Original: jpeg_write_tables
// ----------------------------------------------------------------------------
int jpeg_write_tables(uint32_t *a1)
{
  if ( a1[5] != 100 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  G4_VCALL<void>(a1, 16);
  (*(void (**)(uint32_t *))(a1[6] + 8))(a1);
  jinit_marker_writer(a1);
  (*(void (**)(uint32_t *))(a1[82] + 16))(a1);
  return (*(int (**)(uint32_t *))(a1[6] + 16))(a1);
}

// ----------------------------------------------------------------------------
// Function: jpeg_start_compress  (binary VA: 0xf834b0)
// Original: jpeg_start_compress
// ----------------------------------------------------------------------------
int jpeg_start_compress(uint32_t *a1, char a2)
{
  char v2;
  bool v3;
  int result;

  v2 = a2;
  if ( a1[5] != 100 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
    v2 = a2;
  }
  if ( v2 != 0 )
    jpeg_suppress_tables(a1, 0);
  G4_VCALL<void>(a1, 16);
  (*(void (**)(uint32_t *))(a1[6] + 8))(a1);
  jinit_compress_master(a1);
  (*(void (**)(uint32_t *))a1[78])(a1);
  v3 = *((uint8_t *)a1 + 172) == 0;
  a1[51] = 0;
  result = 102 - v3;
  a1[5] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_write_scanlines  (binary VA: 0xf83560)
// Original: jpeg_write_scanlines
// ----------------------------------------------------------------------------
int jpeg_write_scanlines(uint32_t *a1, int a2, unsigned int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int result;
  uint32_t v8[4];

  if ( a1[5] != 101 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  if ( a1[51] >= a1[8] )
  {
    *(uint32_t *)(*a1 + 20) = 123;
    G4_VCALL<void>(a1, 4, -1);
  }
  v3 = a1[2];
  if ( v3 != 0 )
  {
    *(uint32_t *)(v3 + 4) = a1[51];
    *(uint32_t *)(a1[2] + 8) = a1[8];
    (*(void (**)(uint32_t *))a1[2])(a1);
  }
  v4 = a1[78];
  if ( *(uint8_t *)(v4 + 12) != 0 )
    (*(void (**)(uint32_t *))(v4 + 4))(a1);
  v5 = a1[8] - a1[51];
  v6 = a1[79];
  v8[0] = 0;
  if ( a3 <= v5 )
    v5 = a3;
  (*(void (**)(uint32_t *, int, uint32_t *, unsigned int))(v6 + 4))(a1, a2, v8, v5);
  result = v8[0];
  a1[51] += v8[0];
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_write_raw_data  (binary VA: 0xf83640)
// Original: jpeg_write_raw_data
// ----------------------------------------------------------------------------
unsigned int jpeg_write_raw_data(uint32_t *a1, int a2, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  unsigned int v6;

  if ( a1[5] != 102 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  v3 = a1[51];
  if ( v3 >= a1[8] )
  {
    *(uint32_t *)(*a1 + 20) = 123;
    G4_VCALL<void>(a1, 4, -1);
    return 0;
  }
  else
  {
    v4 = a1[2];
    if ( v4 != 0 )
    {
      *(uint32_t *)(v4 + 4) = v3;
      *(uint32_t *)(a1[2] + 8) = a1[8];
      (*(void (**)(uint32_t *))a1[2])(a1);
    }
    v5 = a1[78];
    if ( *(uint8_t *)(v5 + 12) != 0 )
      (*(void (**)(uint32_t *))(v5 + 4))(a1);
    v6 = 8 * a1[54];
    if ( v6 > a3 )
    {
      *(uint32_t *)(*a1 + 20) = 23;
      G4_VCALL<void>(a1, 0);
    }
    if ( (*(uint8_t (**)(uint32_t *, int))(a1[81] + 4))(a1, a2) != 0 )
    {
      a1[51] += v6;
      return v6;
    }
    else
    {
      return 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: jinit_compress_master  (binary VA: 0xf83730)
// Original: jinit_compress_master
// ----------------------------------------------------------------------------
int jinit_compress_master(int a1)
{
  char v1;

  jinit_c_master_control(a1, 0);
  if ( *(uint8_t *)(a1 + 172) == 0 )
  {
    jinit_color_converter(a1);
    jinit_downsampler(a1);
    jinit_c_prep_controller(a1, 0);
  }
  jinit_forward_dct(a1);
  if ( *(uint8_t *)(a1 + 173) != 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 1;
    (**(void (***)(int))a1)(a1);
  }
  else if ( *(uint8_t *)(a1 + 208) != 0 )
  {
    jinit_phuff_encoder(a1);
  }
  else
  {
    jinit_huff_encoder(a1);
  }
  v1 = 1;
  if ( *(int *)(a1 + 164) <= 1 )
    v1 = *(uint8_t *)(a1 + 174) != 0;
  jinit_c_coef_controller(a1, v1);
  jinit_c_main_controller(a1, 0);
  jinit_marker_writer(a1);
  (*(void (**)(int))(*(uint32_t *)(a1 + 4) + 24))(a1);
  return (**(int (***)(int))(a1 + 328))(a1);
}



// ============================================================================
// Address:   0xf83980 (size: 201 bytes)
// Symbol:    jinit_c_main_controller
// Demangled: jinit_c_main_controller
// ============================================================================
int (*jinit_c_main_controller(int a1, char a2))(int a1, int a2)
{
  int (*result)(int, int);
  int v3;
  int v4;
  int (**v5)(int, int);

  v5 = (int (**)(int, int))(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 64);
  *(uint32_t *)(a1 + 316) = (uint32_t)(uintptr_t)(v5);
  result = sub_F83910;
  *v5 = sub_F83910;
  if ( *(uint8_t *)(a1 + 172) == 0 )
  {
    if ( a2 != 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 4;
      return (int (*)(int, int))(**(int (***)(int))a1)(a1);
    }
    else
    {
      result = *(int (**)(int, int))(a1 + 56);
      v3 = *(uint32_t *)(a1 + 64);
      if ( (int)(uintptr_t)(result) > 0 )
      {
        v4 = 0;
        do
        {
          result = (int (*)(int, int))(*(int (**)(int, int, int, int))(*(uint32_t *)(a1 + 4) + 8))(
                                                a1,
                                                1,
                                                8 * *(uint32_t *)(v3 + 28),
                                                8 * *(uint32_t *)(v3 + 12));
          v3 += 84;
          v5[v4++ + 6] = result;
        }
        while ( *(uint32_t *)(a1 + 56) > v4 );
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xf86100 (size: 127 bytes)
// Symbol:    jinit_marker_writer
// Demangled: jinit_marker_writer
// ============================================================================
int (**jinit_marker_writer(int a1))(int a1)
{
  int (**result)(int);

  result = (int (**)(int))(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 32);
  *(uint32_t *)(a1 + 328) = (uint32_t)(uintptr_t)(result);
  result[7] = nullptr;
  *result = sub_F84DA0;
  result[1] = (int (*)(int))sub_F840B0;
  result[2] = sub_F847B0;
  result[3] = (int (*)(int))sub_F83AA0;
  result[4] = (int (*)(int))sub_F85810;
  result[5] = (int (*)(int))sub_F83B30;
  result[6] = (int (*)(int))sub_F83A50;
  return result;
}
// ----------------------------------------------------------------------------
// Function: jinit_c_master_control  (binary VA: 0xf879c0)
// Original: jinit_c_master_control
// ----------------------------------------------------------------------------
int jinit_c_master_control(int a1, char a2)
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
  int result;
  int v13;
  int i;
  int v15;
  int v16;

  v16 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 32);
  *(uint32_t *)(a1 + 312) = v16;
  *(uint8_t *)(v16 + 13) = 0;
  *(uint32_t *)v16 = (uint32_t)(uintptr_t)(sub_F86920);
  *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(sub_F86850);
  *(uint32_t *)(v16 + 8) = (uint32_t)(uintptr_t)(sub_F86890);
  v2 = *(uint32_t *)(a1 + 32);
  if ( v2 == 0 || *(uint32_t *)(a1 + 28) == 0 || *(int *)(a1 + 56) <= 0 || *(int *)(a1 + 36) <= 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 32;
    (**(void (***)(int))a1)(a1);
    v2 = *(uint32_t *)(a1 + 32);
  }
  if ( v2 > 65500 || *(int *)(a1 + 28) > 65500 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 41;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = 65500;
    (**(void (***)(int))a1)(a1);
  }
  if ( *(uint32_t *)(a1 + 52) != 8 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 15;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 52);
    (**(void (***)(int))a1)(a1);
  }
  v15 = *(uint32_t *)(a1 + 56);
  if ( v15 > 10 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 26;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 56);
    *(uint32_t *)(*(uint32_t *)a1 + 28) = 10;
    (**(void (***)(int))a1)(a1);
    v15 = *(uint32_t *)(a1 + 56);
  }
  *(uint32_t *)(a1 + 212) = 1;
  *(uint32_t *)(a1 + 216) = 1;
  v3 = *(uint32_t *)(a1 + 64);
  v4 = 8;
  if ( v15 > 0 )
  {
    LOBYTE(v4) = 1;
    v5 = 1;
    for ( i = 0; i < v15; ++i )
    {
      v6 = *(uint32_t *)(v3 + 8);
      if ( (unsigned int)(v6 - 1) > 3 || (v7 = *(uint32_t *)(v3 + 12)) <= 0 || v7 > 4 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 18;
        (**(void (***)(int))a1)(a1);
        v6 = *(uint32_t *)(v3 + 8);
        v5 = *(uint32_t *)(a1 + 212);
        v4 = *(uint32_t *)(a1 + 216);
        v15 = *(uint32_t *)(a1 + 56);
      }
      if ( v5 < v6 )
        v5 = v6;
      *(uint32_t *)(a1 + 212) = v5;
      if ( v4 < *(uint32_t *)(v3 + 12) )
        v4 = *(uint32_t *)(v3 + 12);
      v3 += 84;
      *(uint32_t *)(a1 + 216) = v4;
    }
    v8 = *(uint32_t *)(a1 + 64);
    if ( v15 > 0 )
    {
      v9 = 0;
      do
      {
        *(uint32_t *)(v8 + 4) = v9;
        *(uint32_t *)(v8 + 36) = 8;
        ++v9;
        *(uint32_t *)(v8 + 28) = jdiv_round_up(*(uint32_t *)(v8 + 8) * *(uint32_t *)(a1 + 28), 8 * *(uint32_t *)(a1 + 212));
        *(uint32_t *)(v8 + 32) = jdiv_round_up(*(uint32_t *)(v8 + 12) * *(uint32_t *)(a1 + 32), 8 * *(uint32_t *)(a1 + 216));
        *(uint32_t *)(v8 + 40) = jdiv_round_up(*(uint32_t *)(v8 + 8) * *(uint32_t *)(a1 + 28), *(uint32_t *)(a1 + 212));
        *(uint32_t *)(v8 + 44) = jdiv_round_up(*(uint32_t *)(v8 + 12) * *(uint32_t *)(a1 + 32), *(uint32_t *)(a1 + 216));
        *(uint8_t *)(v8 + 48) = 1;
        v8 += 84;
      }
      while ( v9 < *(uint32_t *)(a1 + 56) );
      v4 = *(uint32_t *)(a1 + 216);
    }
    v4 *= 8;
  }
  *(uint32_t *)(a1 + 220) = jdiv_round_up(*(uint32_t *)(a1 + 32), v4);
  if ( *(uint32_t *)(a1 + 168) != 0 )
  {
    sub_F86180((int *)a1);
    if ( *(uint8_t *)(a1 + 208) != 0 )
      *(uint8_t *)(a1 + 174) = 1;
  }
  else
  {
    *(uint8_t *)(a1 + 208) = 0;
    *(uint32_t *)(a1 + 164) = 1;
  }
  if ( a2 != 0 )
  {
    *(uint32_t *)(v16 + 16) = 2 - (*(uint8_t *)(a1 + 174) != 0);
    v10 = v16;
  }
  else
  {
    v10 = v16;
    *(uint32_t *)(v16 + 16) = 0;
  }
  *(uint32_t *)(v10 + 28) = 0;
  *(uint32_t *)(v10 + 20) = 0;
  if ( *(uint8_t *)(a1 + 174) != 0 )
  {
    v13 = v10;
    result = 2 * *(uint32_t *)(a1 + 164);
    *(uint32_t *)(v13 + 24) = result;
  }
  else
  {
    v11 = v10;
    result = *(uint32_t *)(a1 + 164);
    *(uint32_t *)(v11 + 24) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_abort  (binary VA: 0xf87d20)
// Original: jpeg_abort
// ----------------------------------------------------------------------------
int jpeg_abort(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
  {
    result = (*(int (**)(int, int))(result + 36))(a1, 1);
    if ( *(uint8_t *)(a1 + 16) != 0 )
    {
      *(uint32_t *)(a1 + 20) = 200;
      *(uint32_t *)(a1 + 268) = 0;
    }
    else
    {
      *(uint32_t *)(a1 + 20) = 100;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_destroy  (binary VA: 0xf87d70)
// Original: jpeg_destroy
// ----------------------------------------------------------------------------
int jpeg_destroy(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
    result = (*(int (**)(int))(result + 40))(a1);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_alloc_quant_table  (binary VA: 0xf87da0)
// Original: jpeg_alloc_quant_table
// ----------------------------------------------------------------------------
int jpeg_alloc_quant_table(int a1)
{
  int result;

  result = (**(int (***)(int, uint32_t, int))(a1 + 4))(a1, 0, 130);
  *(uint8_t *)(result + 128) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_alloc_huff_table  (binary VA: 0xf87dd0)
// Original: jpeg_alloc_huff_table
// ----------------------------------------------------------------------------
int jpeg_alloc_huff_table(int a1)
{
  int result;

  result = (**(int (***)(int, uint32_t, int))(a1 + 4))(a1, 0, 274);
  *(uint8_t *)(result + 273) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_add_quant_table  (binary VA: 0xf87e00)
// Original: jpeg_add_quant_table
// ----------------------------------------------------------------------------
int jpeg_add_quant_table(uint32_t *a1, unsigned int a2, int a3, int a4, char a5)
{
  char v5;
  int v6;
  int v7;
  bool v8; // si
  int v9;
  int result;
  int16_t v11;
  char v12;
  char v13;
  unsigned int v14;
  bool v15;

  v5 = a5;
  if ( a1[5] != 100 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
    v5 = a5;
  }
  if ( a2 > 3 )
  {
    *(uint32_t *)(*a1 + 20) = 31;
    *(uint32_t *)(*a1 + 24) = a2;
    v12 = v5;
    G4_VCALL<void>(a1, 0);
    v5 = v12;
  }
  v14 = a2 + 16;
  v6 = a1[a2 + 17];
  if ( v6 == 0 )
  {
    v13 = v5;
    v6 = jpeg_alloc_quant_table((int)(uintptr_t)(a1));
    a1[v14 + 1] = v6;
    v5 = v13;
  }
  v15 = v5 != 0;
  v7 = 0;
  while ( 1 )
  {
    v9 = (*(uint32_t *)(a3 + 4 * v7) * a4 + 50) / 100;
    if ( v9 <= 0 )
    {
      LOWORD(v9) = 1;
LABEL_11:
      v11 = v9;
      goto LABEL_12;
    }
    if ( v9 <= 0x7FFF )
    {
      v8 = v15 && v9 > 255;
    }
    else
    {
      v8 = v15;
      LOWORD(v9) = 0x7FFF;
    }
    v11 = 255;
    if ( !v8 )
      goto LABEL_11;
LABEL_12:
    *(uint16_t *)(v6 + 2 * v7++) = v11;
    if ( v7 == 64 )
      break;
    v6 = a1[v14 + 1];
  }
  result = a1[v14 + 1];
  *(uint8_t *)(result + 128) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_set_linear_quality  (binary VA: 0xf87f60)
// Original: jpeg_set_linear_quality
// ----------------------------------------------------------------------------
int jpeg_set_linear_quality(uint32_t *a1, int a2, char a3)
{
  jpeg_add_quant_table(a1, 0, (int)(uintptr_t)(&unk_1CBD260), a2, a3);
  return jpeg_add_quant_table(a1, 1u, (int)(uintptr_t)(&unk_1CBD360), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: jpeg_quality_scaling  (binary VA: 0xf87ff0)
// Original: jpeg_quality_scaling
// ----------------------------------------------------------------------------
int16_t jpeg_quality_scaling(int a1)
{
  int v1;

  LOWORD(v1) = 5000;
  if ( a1 > 0 )
  {
    LOWORD(v1) = 0;
    if ( a1 <= 100 )
    {
      if ( a1 > 49 )
      {
        LOBYTE(v1) = 100;
        LOWORD(v1) = 2 * (v1 - a1);
      }
      else
      {
        return 5000 / a1;
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: jpeg_set_quality  (binary VA: 0xf88030)
// Original: jpeg_set_quality
// ----------------------------------------------------------------------------
int jpeg_set_quality(uint32_t *a1, int a2, char a3)
{
  int v3;

  LOWORD(v3) = jpeg_quality_scaling(a2);
  return jpeg_set_linear_quality(a1, v3, a3);
}

// ----------------------------------------------------------------------------
// Function: jpeg_set_colorspace  (binary VA: 0xf88080)
// Original: jpeg_set_colorspace
// ----------------------------------------------------------------------------
uint32_t * jpeg_set_colorspace(int a1, int a2)
{
  uint32_t *result;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;

  if ( *(uint32_t *)(a1 + 20) != 100 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 20;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 20);
    (**(void (***)(int))a1)(a1);
  }
  *(uint32_t *)(a1 + 60) = a2;
  *(uint8_t *)(a1 + 192) = 0;
  *(uint8_t *)(a1 + 200) = 0;
  switch ( a2 )
  {
    case 0:
      v9 = *(uint32_t *)(a1 + 36);
      *(uint32_t *)(a1 + 56) = v9;
      if ( (unsigned int)(v9 - 1) <= 9
        || (*(uint32_t *)(*(uint32_t *)a1 + 20) = 26,
            *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 56),
            *(uint32_t *)(*(uint32_t *)a1 + 28) = 10,
            (**(void (***)(int))a1)(a1),
            (int)(uintptr_t)(result = *(uint32_t **)(a1 + 56)) > 0) )
      {
        v10 = 0;
        v11 = 0;
        do
        {
          result = (uint32_t *)(*(uint32_t *)(a1 + 64) + v10);
          v10 += 84;
          *result = v11;
          result[2] = 1;
          result[3] = 1;
          result[4] = 0;
          result[5] = 0;
          result[6] = 0;
          ++v11;
        }
        while ( *(uint32_t *)(a1 + 56) > v11 );
      }
      break;
    case 1:
      result = *(uint32_t **)(a1 + 64);
      *(uint8_t *)(a1 + 192) = 1;
      *(uint32_t *)(a1 + 56) = 1;
      *result = 1;
      result[2] = 1;
      result[3] = 1;
      result[4] = 0;
      result[5] = 0;
      result[6] = 0;
      break;
    case 2:
      v12 = *(uint32_t **)(a1 + 64);
      *(uint8_t *)(a1 + 200) = 1;
      *(uint32_t *)(a1 + 56) = 3;
      *v12 = 82;
      v12[2] = 1;
      v12[3] = 1;
      v12[4] = 0;
      v12[5] = 0;
      v12[6] = 0;
      v13 = *(uint32_t **)(a1 + 64);
      v13[21] = 71;
      v13[23] = 1;
      v13[24] = 1;
      v13[25] = 0;
      v13[26] = 0;
      v13[27] = 0;
      result = *(uint32_t **)(a1 + 64);
      result[42] = 66;
      result[44] = 1;
      result[45] = 1;
      result[46] = 0;
      result[47] = 0;
      result[48] = 0;
      break;
    case 3:
      v14 = *(uint32_t **)(a1 + 64);
      *(uint8_t *)(a1 + 192) = 1;
      *(uint32_t *)(a1 + 56) = 3;
      *v14 = 1;
      v14[2] = 2;
      v14[3] = 2;
      v14[4] = 0;
      v14[5] = 0;
      v14[6] = 0;
      v15 = *(uint32_t **)(a1 + 64);
      v15[21] = 2;
      v15[23] = 1;
      v15[24] = 1;
      v15[25] = 1;
      v15[26] = 1;
      v15[27] = 1;
      result = *(uint32_t **)(a1 + 64);
      result[42] = 3;
      result[44] = 1;
      result[45] = 1;
      result[46] = 1;
      result[47] = 1;
      result[48] = 1;
      break;
    case 4:
      v3 = *(uint32_t **)(a1 + 64);
      *(uint8_t *)(a1 + 200) = 1;
      *(uint32_t *)(a1 + 56) = 4;
      *v3 = 67;
      v3[2] = 1;
      v3[3] = 1;
      v3[4] = 0;
      v3[5] = 0;
      v3[6] = 0;
      v4 = *(uint32_t **)(a1 + 64);
      v4[21] = 77;
      v4[23] = 1;
      v4[24] = 1;
      v4[25] = 0;
      v4[26] = 0;
      v4[27] = 0;
      v5 = *(uint32_t **)(a1 + 64);
      v5[42] = 89;
      v5[44] = 1;
      v5[45] = 1;
      v5[46] = 0;
      v5[47] = 0;
      v5[48] = 0;
      result = *(uint32_t **)(a1 + 64);
      result[63] = 75;
      result[65] = 1;
      result[66] = 1;
      result[67] = 0;
      result[68] = 0;
      result[69] = 0;
      break;
    case 5:
      v6 = *(uint32_t **)(a1 + 64);
      *(uint8_t *)(a1 + 200) = 1;
      *(uint32_t *)(a1 + 56) = 4;
      *v6 = 1;
      v6[2] = 2;
      v6[3] = 2;
      v6[4] = 0;
      v6[5] = 0;
      v6[6] = 0;
      v7 = *(uint32_t **)(a1 + 64);
      v7[21] = 2;
      v7[23] = 1;
      v7[24] = 1;
      v7[25] = 1;
      v7[26] = 1;
      v7[27] = 1;
      v8 = *(uint32_t **)(a1 + 64);
      v8[42] = 3;
      v8[44] = 1;
      v8[45] = 1;
      v8[46] = 1;
      v8[47] = 1;
      v8[48] = 1;
      result = *(uint32_t **)(a1 + 64);
      result[63] = 4;
      result[65] = 2;
      result[66] = 2;
      result[67] = 0;
      result[68] = 0;
      result[69] = 0;
      break;
    default:
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 10;
      result = (uint32_t *)(**(int (***)(int))a1)(a1);
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_default_colorspace  (binary VA: 0xf88510)
// Original: jpeg_default_colorspace
// ----------------------------------------------------------------------------
uint32_t * jpeg_default_colorspace(uint32_t *a1)
{
  uint32_t *result;

  switch ( a1[10] )
  {
    case 0:
      result = jpeg_set_colorspace((int)(uintptr_t)(a1), 0);
      break;
    case 1:
      result = jpeg_set_colorspace((int)(uintptr_t)(a1), 1);
      break;
    case 2:
    case 3:
      result = jpeg_set_colorspace((int)(uintptr_t)(a1), 3);
      break;
    case 4:
      result = jpeg_set_colorspace((int)(uintptr_t)(a1), 4);
      break;
    case 5:
      result = jpeg_set_colorspace((int)(uintptr_t)(a1), 5);
      break;
    default:
      *(uint32_t *)(*a1 + 20) = 9;
      result = (uint32_t *)G4_VCALL<int>(a1, 0);
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_set_defaults  (binary VA: 0xf885d0)
// Original: jpeg_set_defaults
// ----------------------------------------------------------------------------
uint32_t * jpeg_set_defaults(int a1)
{
  int v1;
  size_t n;
  int i;
  int v4;
  int v5;
  size_t v6;
  int j;
  int v8;
  int v9;
  size_t v10;
  int k;
  int v12;
  int v13;
  size_t v14;
  int m;
  int v16;
  int ii;
  bool v18; // cc

  if ( *(uint32_t *)(a1 + 20) != 100 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 20;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 20);
    (**(void (***)(int))a1)(a1);
  }
  if ( *(uint32_t *)(a1 + 64) == 0 )
    *(uint32_t *)(a1 + 64) = (**(int (***)(int, uint32_t, int))(a1 + 4))(a1, 0, 840);
  *(uint32_t *)(a1 + 52) = 8;
  jpeg_set_quality((uint32_t *)a1, 75, 1);
  v1 = *(uint32_t *)(a1 + 84);
  if ( v1 == 0 )
  {
    v1 = jpeg_alloc_huff_table(a1);
    *(uint32_t *)(a1 + 84) = v1;
  }
  n = 0;
  *(uint32_t *)v1 = 83951616;
  *(uint32_t *)(v1 + 4) = 16843009;
  *(uint32_t *)(v1 + 8) = 257;
  *(uint32_t *)(v1 + 12) = 0;
  *(uint8_t *)(v1 + 16) = 0;
  for ( i = 1; i != 17; ++i )
  {
    v4 = *((uint8_t *)&dword_1CBD460 + i);
    n += v4;
  }
  if ( n - 1 > 0xFF )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 8;
    (**(void (***)(int))a1)(a1);
  }
  memcpy((void *)(*(uint32_t *)(a1 + 84) + 17), &unk_1CBD471, n);
  *(uint8_t *)(*(uint32_t *)(a1 + 84) + 273) = 0;
  v5 = *(uint32_t *)(a1 + 100);
  if ( v5 == 0 )
  {
    v5 = jpeg_alloc_huff_table(a1);
    *(uint32_t *)(a1 + 100) = v5;
  }
  v6 = 0;
  *(uint32_t *)v5 = 16908288;
  *(uint32_t *)(v5 + 4) = 67240707;
  *(uint32_t *)(v5 + 8) = 67437827;
  *(uint32_t *)(v5 + 12) = (uint32_t)(uintptr_t)(&algn_1000002[2]);
  *(uint8_t *)(v5 + 16) = 125;
  for ( j = 1; j != 17; ++j )
  {
    v8 = *((uint8_t *)&dword_1CBD480 + j);
    v6 += v8;
  }
  if ( v6 - 1 > 0xFF )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 8;
    (**(void (***)(int))a1)(a1);
  }
  memcpy((void *)(*(uint32_t *)(a1 + 100) + 17), &unk_1CBD4A0, v6);
  *(uint8_t *)(*(uint32_t *)(a1 + 100) + 273) = 0;
  v9 = *(uint32_t *)(a1 + 88);
  if ( v9 == 0 )
  {
    v9 = jpeg_alloc_huff_table(a1);
    *(uint32_t *)(a1 + 88) = v9;
  }
  v10 = 0;
  *(uint32_t *)v9 = 16973824;
  *(uint32_t *)(v9 + 4) = 16843009;
  *(uint32_t *)(v9 + 8) = 16843009;
  *(uint32_t *)(v9 + 12) = 0;
  *(uint8_t *)(v9 + 16) = 0;
  for ( k = 1; k != 17; ++k )
  {
    v12 = *((uint8_t *)&dword_1CBD550 + k);
    v10 += v12;
  }
  if ( v10 - 1 > 0xFF )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 8;
    (**(void (***)(int))a1)(a1);
  }
  memcpy((void *)(*(uint32_t *)(a1 + 88) + 17), &unk_1CBD561, v10);
  *(uint8_t *)(*(uint32_t *)(a1 + 88) + 273) = 0;
  v13 = *(uint32_t *)(a1 + 104);
  if ( v13 == 0 )
  {
    v13 = jpeg_alloc_huff_table(a1);
    *(uint32_t *)(a1 + 104) = v13;
  }
  v14 = 0;
  *(uint32_t *)v13 = 16908288;
  *(uint32_t *)(v13 + 4) = 50594818;
  *(uint32_t *)(v13 + 8) = 67438340;
  *(uint32_t *)(v13 + 12) = (uint32_t)(uintptr_t)(&unk_2010004);
  *(uint8_t *)(v13 + 16) = 119;
  for ( m = 1; m != 17; ++m )
  {
    v16 = *((uint8_t *)&dword_1CBD570 + m);
    v14 += v16;
  }
  if ( v14 - 1 > 0xFF )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 8;
    (**(void (***)(int))a1)(a1);
  }
  memcpy((void *)(*(uint32_t *)(a1 + 104) + 17), &unk_1CBD5A0, v14);
  *(uint8_t *)(*(uint32_t *)(a1 + 104) + 273) = 0;
  *(uint32_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  for ( ii = 0; ii != 16; ++ii )
  {
    *(uint8_t *)(a1 + ii + 132) = 1;
    *(uint8_t *)(a1 + ii + 148) = 5;
  }
  v18 = *(uint32_t *)(a1 + 52) <= 8;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 172) = 0;
  *(uint8_t *)(a1 + 173) = 0;
  *(uint8_t *)(a1 + 174) = 0;
  if ( !v18 )
    *(uint8_t *)(a1 + 174) = 1;
  *(uint8_t *)(a1 + 175) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint8_t *)(a1 + 193) = 1;
  *(uint8_t *)(a1 + 194) = 1;
  *(uint8_t *)(a1 + 195) = 0;
  *(uint16_t *)(a1 + 196) = 1;
  *(uint16_t *)(a1 + 198) = 1;
  return jpeg_default_colorspace((uint32_t *)a1);
}

// ----------------------------------------------------------------------------
// Function: jpeg_simple_progression  (binary VA: 0xf889d0)
// Original: jpeg_simple_progression
// ----------------------------------------------------------------------------
int * jpeg_simple_progression(uint32_t *a1)
{
  int v1;
  int v2;
  int *result;
  int v4;
  int *v5;
  int *v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int *v12;
  int *v13;
  int v14;
  int *v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int (**v20)(uint32_t *, uint32_t, int);
  bool v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int i;
  __m128i v25;
  __m128i *v26;
  unsigned int v27;
  __m128i v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int j;
  __m128i v32;
  __m128i *v33;
  unsigned int v34;
  __m128i v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;

  v1 = a1[14];
  if ( a1[5] != 100 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  if ( v1 == 3 )
  {
    v2 = 10;
    if ( a1[15] == 3 )
      goto LABEL_5;
LABEL_28:
    v2 = 4 * v1 + 2;
    goto LABEL_5;
  }
  v2 = 6 * v1;
  if ( v1 <= 4 )
    goto LABEL_28;
LABEL_5:
  result = (int *)a1[87];
  if ( result == nullptr || v2 > a1[88] )
  {
    v19 = 10;
    v20 = (int (**)(uint32_t *, uint32_t, int))a1[1];
    if ( v2 >= 10 )
      v19 = v2;
    a1[88] = v19;
    v36 = v2;
    result = (int *)(*v20)(a1, 0, 36 * v19);
    a1[87] = (uint32_t)(uintptr_t)(result);
    v2 = v36;
  }
  a1[42] = (uint32_t)(uintptr_t)(result);
  a1[41] = v2;
  if ( v1 == 3 )
  {
    v21 = a1[15] == 3;
    *result = 3;
    if ( v21 )
    {
      result[1] = 0;
      result[2] = 1;
      result[3] = 2;
      result[6] = 0;
      result[5] = 0;
      result[7] = 0;
      result[8] = 1;
      result[9] = 1;
      result[10] = 0;
      result[14] = 1;
      result[15] = 5;
      result[16] = 0;
      result[17] = 2;
      result[18] = 1;
      result[19] = 2;
      result[23] = 1;
      result[24] = 63;
      result[25] = 0;
      result[26] = 1;
      result[27] = 1;
      result[28] = 1;
      result[32] = 1;
      result[33] = 63;
      result[34] = 0;
      result[35] = 1;
      result[36] = 1;
      result[37] = 0;
      result[41] = 6;
      result[42] = 63;
      result[43] = 0;
      result[44] = 2;
      result[45] = 1;
      result[46] = 0;
      result[50] = 1;
      result[51] = 63;
      result[52] = 2;
      result[53] = 1;
      result[54] = 3;
      result[55] = 0;
      result[56] = 1;
      result[57] = 2;
      result[60] = 0;
      result[59] = 0;
      result[61] = 1;
      result[62] = 0;
      result[63] = 1;
      result[64] = 2;
      result[68] = 1;
      result[69] = 63;
      result[70] = 1;
      result[71] = 0;
      result[72] = 1;
      result[73] = 1;
      result[77] = 1;
      result[78] = 63;
      result[79] = 1;
      result[80] = 0;
      result[81] = 1;
      result[82] = 0;
      result[86] = 1;
      result[87] = 63;
      result[88] = 1;
      result[89] = 0;
      return result;
    }
LABEL_30:
    v22 = -((uint8_t)(((uint8_t)(uintptr_t)(result) + 4) & 0xF) >> 2) & 3;
    if ( v22 > v1 )
      v22 = v1;
    v39 = v22;
    if ( v22 == 0 )
    {
      i = 0;
      goto LABEL_36;
    }
    v23 = v22;
    for ( i = 0; i < v23; ++i )
      result[i + 1] = i;
    if ( v1 != v39 )
    {
LABEL_36:
      v41 = (v1 - v39) >> 2;
      v37 = 4 * v41;
      if ( 4 * v41 == 0 )
        goto LABEL_65;
g4_m128_lane<int64_t>(v25, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i), _mm_cvtsi32_si128(i + 1)), 0);
g4_m128_lane<int64_t>(v25, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i + 2), _mm_cvtsi32_si128(i + 3)), 0);
      v26 = (__m128i *)&result[v39 + 1];
      v27 = 0;
      while ( 1 )
      {
        ++v27;
        *v26++ = v25;
        v28 = _mm_add_epi32(v25, G4_BITCAST<__m128i>(xmmword_1C7C400));
        if ( v27 >= v41 )
          break;
        v25 = v28;
      }
      i += v37;
      if ( v1 - v39 != v37 )
      {
LABEL_65:
        do
        {
          result[i + 1] = i;
          ++i;
        }
        while ( v1 > (int)i );
      }
    }
LABEL_42:
    *(g4_int128_t *)(result + 5) = xmmword_1C7C710;
    v6 = result + 9;
    goto LABEL_11;
  }
  v4 = 0;
  v5 = result;
  if ( v1 <= 4 )
  {
    *result = v1;
    if ( v1 <= 0 )
      goto LABEL_42;
    goto LABEL_30;
  }
  do
  {
    v5[1] = v4++;
    *v5 = 1;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 1;
    v5 += 9;
  }
  while ( v4 != v1 );
  v6 = &result[9 * v1];
LABEL_11:
  if ( v1 <= 0 )
  {
    *v6 = v1;
    goto LABEL_55;
  }
  v7 = v6;
  v8 = 0;
  do
  {
    v7[1] = v8++;
    *v7 = 1;
    v7[5] = 1;
    v7[6] = 5;
    v7[7] = 0;
    v7[8] = 2;
    v7 += 9;
  }
  while ( v8 != v1 );
  v9 = 0;
  v10 = 9 * v1;
  v11 = &v6[9 * v1];
  v12 = v11;
  do
  {
    v12[1] = v9++;
    *v12 = 1;
    v12[5] = 6;
    v12[6] = 63;
    v12[7] = 0;
    v12[8] = 2;
    v12 += 9;
  }
  while ( v9 != v1 );
  v13 = &v11[v10];
  v14 = 0;
  v15 = v13;
  do
  {
    v15[1] = v14++;
    *v15 = 1;
    v15[5] = 1;
    v15[6] = 63;
    v15[7] = 2;
    v15[8] = 1;
    v15 += 9;
  }
  while ( v14 != v1 );
  v6 = &v13[v10];
  v16 = 0;
  v17 = v6;
  if ( v1 <= 4 )
  {
    *v6 = v1;
    v29 = -((uint8_t)(((uint8_t)(uintptr_t)(v6) + 4) & 0xF) >> 2) & 3;
    if ( v29 > v1 )
      v29 = v1;
    v40 = v29;
    if ( v29 != 0 )
    {
      v30 = v29;
      for ( j = 0; j < v30; ++j )
        v6[j + 1] = j;
      if ( v1 == v40 )
        goto LABEL_55;
    }
    else
    {
      j = 0;
    }
    v42 = (v1 - v40) >> 2;
    v38 = 4 * v42;
    if ( 4 * v42 == 0 )
      goto LABEL_66;
g4_m128_lane<int64_t>(v32, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(j), _mm_cvtsi32_si128(j + 1)), 0);
g4_m128_lane<int64_t>(v32, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(j + 2), _mm_cvtsi32_si128(j + 3)), 0);
    v33 = (__m128i *)&v6[v40 + 1];
    v34 = 0;
    while ( 1 )
    {
      ++v34;
      *v33++ = v32;
      v35 = _mm_add_epi32(v32, G4_BITCAST<__m128i>(xmmword_1C7C400));
      if ( v34 >= v42 )
        break;
      v32 = v35;
    }
    j += v38;
    if ( v1 - v40 != v38 )
    {
LABEL_66:
      do
      {
        v6[j + 1] = j;
        ++j;
      }
      while ( v1 > (int)j );
    }
LABEL_55:
    *(g4_int128_t *)(v6 + 5) = xmmword_1C7C720;
    result = v6 + 9;
    if ( v1 <= 0 )
      return result;
    goto LABEL_21;
  }
  do
  {
    v17[1] = v16++;
    *v17 = 1;
    v17[5] = 0;
    v17[6] = 0;
    v17[7] = 1;
    v17[8] = 0;
    v17 += 9;
  }
  while ( v16 != v1 );
  result = &v6[v10];
LABEL_21:
  v18 = 0;
  do
  {
    result[1] = v18++;
    *result = 1;
    result[5] = 1;
    result[6] = 63;
    result[7] = 1;
    result[8] = 0;
    result += 9;
  }
  while ( v18 != v1 );
  return result;
}



// ============================================================================
// Address:   0xf8d890 (size: 141 bytes)
// Symbol:    jinit_phuff_encoder
// Demangled: jinit_phuff_encoder
// ============================================================================
int (**jinit_phuff_encoder(int a1))(int a1, char a2)
{
  int (**result)(int, char);

  result = (int (**)(int, char))(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 108);
  *(uint32_t *)(a1 + 344) = (uint32_t)(uintptr_t)(result);
  result[19] = nullptr;
  *result = sub_F89080;
  result[23] = nullptr;
  result[20] = nullptr;
  result[24] = nullptr;
  result[21] = nullptr;
  result[25] = nullptr;
  result[22] = nullptr;
  result[26] = nullptr;
  result[16] = nullptr;
  return result;
}
// ----------------------------------------------------------------------------
// Function: jinit_c_prep_controller  (binary VA: 0xf8df10)
// Original: jinit_c_prep_controller
// ----------------------------------------------------------------------------
int jinit_c_prep_controller(int a1, char a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  char *v7;
  char *v8;
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
  unsigned int v39;
  int v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  uint32_t *v46;
  unsigned int v47;
  unsigned int v48;

  if ( a2 != 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 4;
    (**(void (***)(int))a1)(a1);
  }
  v46 = (uint32_t *)(**(int (***)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(a1 + 4))(
                    a1,
                    1,
                    64,
                    v10,
                    v11,
                    v12,
                    v13,
                    v14,
                    v15,
                    v16,
                    v17,
                    v18,
                    v19,
                    v20,
                    v21,
                    v22,
                    v23,
                    v24,
                    v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33,
                    v34);
  *(uint32_t *)(a1 + 320) = (uint32_t)(uintptr_t)(v46);
  *v46 = (uint32_t)(uintptr_t)(sub_F8D920);
  if ( *(uint8_t *)(*(uint32_t *)(a1 + 336) + 8) != 0 )
  {
    v46[1] = (uint32_t)(uintptr_t)(sub_F8D980);
    v37 = *(uint32_t *)(a1 + 320);
    v47 = *(uint32_t *)(a1 + 216);
    v6 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 4 * v47 * 5 * *(uint32_t *)(a1 + 56));
    result = *(uint32_t *)(a1 + 56);
    v44 = *(uint32_t *)(a1 + 64);
    if ( result <= 0 )
      return result;
    v40 = 20 * v47;
    v38 = 4 * v47;
    v45 = v6 + 16 * v47;
    v41 = 0;
    v43 = v6 + 16 * (v47 + 1);
    v36 = 8 * v47;
    v42 = v6 + 16;
    while ( 1 )
    {
      v7 = (char *)(*(int (**)(int, int, int, unsigned int))(*(uint32_t *)(a1 + 4) + 8))(
                     a1,
                     1,
                     *(uint32_t *)(a1 + 212) * 8 * *(uint32_t *)(v44 + 28) / *(uint32_t *)(v44 + 8),
                     3 * v47);
      v39 = v6 + v38;
      memcpy((void *)(v6 + v38), v7, 12 * v47);
      result = v47;
      if ( (int)v47 > 0 )
      {
        v8 = &v7[v36];
        if ( 4 * (v47 >> 2) != 0
          && ((unsigned int)(uintptr_t)(v7) > v43 || v45 > (unsigned int)(uintptr_t)(v7 + 16))
          && (v6 > v43 || v45 > v42)
          && (v6 > (unsigned int)(uintptr_t)(v7 + 16) || (unsigned int)(uintptr_t)(v7) > v42)
          && ((unsigned int)(uintptr_t)(v8) > v43 || v45 > (unsigned int)(uintptr_t)(&v7[v36 + 16]))
          && ((unsigned int)(uintptr_t)(v8) > v42 || (unsigned int)(uintptr_t)(&v7[v36 + 16]) < v6)
          && v47 > 8 )
        {
          v9 = 0;
          v48 = 0;
          do
          {
            *(__m128i *)(v6 + v9) = *(__m128i *)&v8[v9];
            ++v48;
            *(__m128i *)(v45 + v9) = *(__m128i *)&v7[v9];
            v9 += 16;
          }
          while ( v47 >> 2 > v48 );
          result = 4 * (v47 >> 2);
          if ( v47 == result )
            goto LABEL_17;
        }
        else
        {
          result = 0;
        }
        do
        {
          *(uint32_t *)(v6 + 4 * result) = *(uint32_t *)&v7[8 * v47 + 4 * result];
          *(uint32_t *)(v6 + 16 * v47 + 4 * result) = *(uint32_t *)&v7[4 * result];
          ++result;
        }
        while ( (int)v47 > result );
      }
LABEL_17:
      v6 += v40;
      v44 += 84;
      *(uint32_t *)(v37 + 4 * v41 + 8) = v39;
      v45 += v40;
      v42 += v40;
      v43 += v40;
      if ( ++v41 >= *(uint32_t *)(a1 + 56) )
        return result;
    }
  }
  result = (int)(uintptr_t)(sub_F8DC50);
  v46[1] = (uint32_t)(uintptr_t)(sub_F8DC50);
  if ( *(int *)(a1 + 56) > 0 )
  {
    v3 = 0;
    v4 = *(uint32_t *)(a1 + 64);
    do
    {
      v5 = *(uint32_t *)(a1 + 212) * 8 * *(uint32_t *)(v4 + 28) / *(uint32_t *)(v4 + 8);
      v35 = v3;
      v4 += 84;
      result = (*(int (**)(int, int, int, uint32_t))(*(uint32_t *)(a1 + 4) + 8))(a1, 1, v5, *(uint32_t *)(a1 + 216));
      v46[v35 + 2] = result;
      v3 = v35 + 1;
    }
    while ( *(uint32_t *)(a1 + 56) > v35 + 1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jinit_downsampler  (binary VA: 0xf8f2e0)
// Original: jinit_downsampler
// ----------------------------------------------------------------------------
void * jinit_downsampler(uint32_t *a1)
{
  void *result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;

  v7 = (*(int (**)(uint32_t *, int, int))a1[1])(a1, 1, 52);
  a1[84] = v7;
  *(uint8_t *)(v7 + 8) = 0;
  *(uint32_t *)v7 = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(sub_F8E2D0);
  if ( *((uint8_t *)a1 + 175) != 0 )
  {
    *(uint32_t *)(*a1 + 20) = 25;
    G4_VCALL<void>(a1, 0);
  }
  result = (void *)a1[14];
  v2 = a1[16];
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v8 = 1;
    v3 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = a1[53];
        v6 = *(uint32_t *)(v2 + 8);
        if ( v6 == v4 && *(uint32_t *)(v2 + 12) == a1[54] )
          break;
        if ( v4 != 2 * v6 )
          goto LABEL_6;
        v5 = *(uint32_t *)(v2 + 12);
        if ( v5 == a1[54] )
        {
          result = (void *)(sub_F8EB00);
          v8 = 0;
          *(uint32_t *)(v7 + 4 * v3 + 12) = (uint32_t)(uintptr_t)(sub_F8EB00);
        }
        else
        {
          if ( a1[54] != 2 * v5 )
          {
LABEL_6:
            if ( v4 % v6 != 0 || a1[54] % *(uint32_t *)(v2 + 12) != 0 )
            {
              *(uint32_t *)(*a1 + 20) = 38;
              result = (void *)G4_VCALL<int>(a1, 0);
            }
            else
            {
              result = (void *)v7;
              v8 = 0;
              *(uint32_t *)(v7 + 4 * v3 + 12) = (uint32_t)(uintptr_t)(sub_F8E7B0);
            }
            goto LABEL_9;
          }
          if ( a1[44] != 0 )
          {
            result = (void *)(sub_F8EEA0);
            *(uint32_t *)(v7 + 4 * v3 + 12) = (uint32_t)(uintptr_t)(sub_F8EEA0);
            *(uint8_t *)(v7 + 8) = 1;
          }
          else
          {
            result = (void *)(sub_F8ECB0);
            *(uint32_t *)(v7 + 4 * v3 + 12) = (uint32_t)(uintptr_t)(sub_F8ECB0);
          }
        }
LABEL_9:
        ++v3;
        v2 += 84;
        if ( a1[14] <= v3 )
          goto LABEL_14;
      }
      if ( a1[44] == 0 )
      {
        result = (void *)(sub_F8E640);
        *(uint32_t *)(v7 + 4 * v3 + 12) = (uint32_t)(uintptr_t)(sub_F8E640);
        goto LABEL_9;
      }
      result = (void *)(sub_F8E350);
      v2 += 84;
      *(uint32_t *)(v7 + 4 * v3 + 12) = (uint32_t)(uintptr_t)(sub_F8E350);
      *(uint8_t *)(v7 + 8) = 1;
      if ( a1[14] <= ++v3 )
      {
LABEL_14:
        if ( v8 == 0 && a1[44] != 0 )
        {
          *(uint32_t *)(*a1 + 20) = 99;
          return (void *)G4_VCALL<int>(a1, 4, 0);
        }
        return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_CreateDecompress  (binary VA: 0xf8f500)
// Original: jpeg_CreateDecompress
// ----------------------------------------------------------------------------
int jpeg_CreateDecompress(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint16_t *v4;
  unsigned int v5;
  uint16_t *v6;
  int result;
  int v8;

  a1[1] = 0;
  if ( a2 != 62 )
  {
    *(uint32_t *)(*a1 + 20) = 12;
    *(uint32_t *)(*a1 + 24) = 62;
    *(uint32_t *)(*a1 + 28) = a2;
    G4_VCALL<void>(a1, 0);
  }
  if ( a3 != 428 )
  {
    *(uint32_t *)(*a1 + 20) = 21;
    *(uint32_t *)(*a1 + 24) = 428;
    *(uint32_t *)(*a1 + 28) = a3;
    G4_VCALL<void>(a1, 0);
  }
  v3 = *a1;
  v8 = a1[3];
  v4 = (uint16_t *)(a1);
  v5 = 428;
  if ( ((uint8_t)(uintptr_t)(a1) & 1) != 0 )
  {
    v4 = (uint16_t *)((char *)a1 + 1);
    *(uint8_t *)a1 = 0;
    LOBYTE(v5) = -85;
    if ( (((unsigned int)(uintptr_t)(a1) + 1) & 2) == 0 )
      goto LABEL_7;
  }
  else if ( ((uint8_t)(uintptr_t)(a1) & 2) == 0 )
  {
    goto LABEL_7;
  }
  *v4 = 0;
  v5 -= 2;
  ++v4;
LABEL_7:
  memset(v4, 0, 4 * (v5 >> 2));
  v6 = &v4[2 * (v5 >> 2)];
  if ( (v5 & 2) != 0 )
    *v6++ = 0;
  if ( (v5 & 1) != 0 )
    *(uint8_t *)v6 = 0;
  *a1 = v3;
  a1[3] = v8;
  *((uint8_t *)a1 + 16) = 1;
  jinit_memory_mgr(a1);
  a1[2] = 0;
  a1[6] = 0;
  a1[36] = 0;
  a1[37] = 0;
  a1[38] = 0;
  a1[39] = 0;
  a1[40] = 0;
  a1[44] = 0;
  a1[41] = 0;
  a1[45] = 0;
  a1[42] = 0;
  a1[46] = 0;
  a1[43] = 0;
  a1[47] = 0;
  a1[67] = 0;
  jinit_marker_reader(a1);
  result = jinit_input_controller(a1);
  a1[5] = 200;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_destroy_decompress  (binary VA: 0xf8f6c0)
// Original: jpeg_destroy_decompress
// ----------------------------------------------------------------------------
int jpeg_destroy_decompress(int a1)
{
  return jpeg_destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: jpeg_abort_decompress  (binary VA: 0xf8f6f0)
// Original: jpeg_abort_decompress
// ----------------------------------------------------------------------------
int jpeg_abort_decompress(int a1)
{
  return jpeg_abort(a1);
}

// ----------------------------------------------------------------------------
// Function: jpeg_consume_input  (binary VA: 0xf8f720)
// Original: jpeg_consume_input
// ----------------------------------------------------------------------------
int jpeg_consume_input(int *a1)
{
  int result;
  int v2;
  char v3;
  int v4;
  char v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;

  switch ( a1[5] )
  {
    case 200:
      (*(void (**)(int *))(a1[100] + 4))(a1);
      (*(void (**)(int *))(a1[6] + 8))(a1);
      a1[5] = 201;
    case 201:
      result = (*(int (**)(int *))a1[100])(a1);
      if ( result != 1 )
        return result;
      v2 = a1[9];
      switch ( v2 )
      {
        case 3:
          if ( *((uint8_t *)a1 + 256) != 0 )
            goto LABEL_28;
          if ( *((uint8_t *)a1 + 264) != 0 )
          {
            v3 = *((uint8_t *)a1 + 265);
            if ( v3 != 0 )
            {
              if ( v3 != 1 )
              {
                *(uint32_t *)(*a1 + 20) = 114;
                *(uint32_t *)(*a1 + 24) = *((uint8_t *)a1 + 265);
                v4 = *a1;
                v11 = -1;
LABEL_19:
                (*(void (**)(int *, int))(v4 + 4))(a1, v11);
                a1[10] = 3;
                result = 1;
LABEL_20:
                a1[11] = 2;
                break;
              }
LABEL_28:
              a1[10] = 3;
              goto LABEL_20;
            }
          }
          else
          {
            v6 = (int *)a1[49];
            v7 = v6[21];
            v8 = *v6;
            v9 = v6[42];
            if ( v7 == 2 && v8 == 1 && v9 == 3 )
              goto LABEL_28;
            if ( v7 != 71 || v8 != 82 || v9 != 66 )
            {
              v10 = (uint32_t *)*a1;
              v10[6] = v8;
              v10[7] = v7;
              v10[8] = v9;
              *(uint32_t *)(*a1 + 20) = 111;
              v4 = *a1;
              v11 = 1;
              goto LABEL_19;
            }
          }
          a1[10] = 2;
          goto LABEL_20;
        case 4:
          if ( *((uint8_t *)a1 + 264) != 0 && (v5 = *((uint8_t *)a1 + 265)) != 0 )
          {
            if ( v5 == 2 )
            {
              a1[10] = 5;
            }
            else
            {
              *(uint32_t *)(*a1 + 20) = 114;
              *(uint32_t *)(*a1 + 24) = *((uint8_t *)a1 + 265);
              G4_VCALL<void>(a1, 4, -1);
              a1[10] = 5;
              result = 1;
            }
          }
          else
          {
            a1[10] = 4;
          }
          a1[11] = 4;
          break;
        case 1:
          a1[10] = 1;
          a1[11] = 1;
          break;
        default:
          a1[10] = 0;
          a1[11] = 0;
          break;
      }
      a1[12] = 1;
      a1[13] = 1;
      *((uint8_t *)a1 + 64) = 0;
      *((uint64_t *)a1 + 7) = 0x3FF0000000000000LL;
      *((uint8_t *)a1 + 65) = 0;
      a1[17] = 0;
      *((uint8_t *)a1 + 72) = 1;
      *((uint8_t *)a1 + 73) = 1;
      *((uint8_t *)a1 + 74) = 0;
      a1[19] = 2;
      *((uint8_t *)a1 + 80) = 1;
      a1[21] = 256;
      a1[29] = 0;
      *((uint8_t *)a1 + 88) = 0;
      *((uint8_t *)a1 + 89) = 0;
      *((uint8_t *)a1 + 90) = 0;
      a1[5] = 202;
      return result;
    case 202:
      return 1;
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 210:
      return (*(int (**)(int *))a1[100])(a1);
    default:
      *(uint32_t *)(*a1 + 20) = 20;
      *(uint32_t *)(*a1 + 24) = a1[5];
      G4_VCALL<void>(a1, 0);
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: jpeg_read_header  (binary VA: 0xf8f9f0)
// Original: jpeg_read_header
// ----------------------------------------------------------------------------
int jpeg_read_header(int *a1, char a2)
{
  int result;
  int v3;

  if ( (unsigned int)(a1[5] - 200) > 1 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  result = jpeg_consume_input(a1);
  if ( result == 2 )
  {
    if ( a2 != 0 )
    {
      *(uint32_t *)(*a1 + 20) = 51;
      G4_VCALL<void>(a1, 0);
      result = 2;
    }
    v3 = result;
    jpeg_abort((int)(uintptr_t)(a1));
    return v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_input_complete  (binary VA: 0xf8fa90)
// Original: jpeg_input_complete
// ----------------------------------------------------------------------------
int jpeg_input_complete(uint32_t *a1)
{
  if ( (unsigned int)(a1[5] - 200) > 0xA )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  return *(uint8_t *)(a1[100] + 17);
}

// ----------------------------------------------------------------------------
// Function: jpeg_has_multiple_scans  (binary VA: 0xf8fad0)
// Original: jpeg_has_multiple_scans
// ----------------------------------------------------------------------------
int jpeg_has_multiple_scans(uint32_t *a1)
{
  if ( (unsigned int)(a1[5] - 202) > 8 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  return *(uint8_t *)(a1[100] + 16);
}

// ----------------------------------------------------------------------------
// Function: jpeg_finish_decompress  (binary VA: 0xf8fb10)
// Original: jpeg_finish_decompress
// ----------------------------------------------------------------------------
int jpeg_finish_decompress(int a1)
{
  int v1;
  int v2;

  v1 = *(uint32_t *)(a1 + 20);
  if ( (unsigned int)(v1 - 205) > 1 )
  {
    if ( v1 == 207 )
    {
      *(uint32_t *)(a1 + 20) = 210;
      goto LABEL_6;
    }
    if ( v1 == 210 )
      goto LABEL_6;
  }
  else if ( *(uint8_t *)(a1 + 64) == 0 )
  {
    if ( *(uint32_t *)(a1 + 120) < *(uint32_t *)(a1 + 96) )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 67;
      (**(void (***)(int))a1)(a1);
    }
    (*(void (**)(int))(*(uint32_t *)(a1 + 384) + 4))(a1);
    *(uint32_t *)(a1 + 20) = 210;
    do
    {
LABEL_6:
      v2 = *(uint32_t *)(a1 + 400);
      if ( *(uint8_t *)(v2 + 17) != 0 )
      {
        (*(void (**)(int))(*(uint32_t *)(a1 + 24) + 24))(a1);
        jpeg_abort(a1);
        return 1;
      }
    }
    while ( (*(int (**)(int))v2)(a1) != 0 );
    return 0;
  }
  *(uint32_t *)(*(uint32_t *)a1 + 20) = 20;
  *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 20);
  (**(void (***)(int))a1)(a1);
  goto LABEL_6;
}

// ----------------------------------------------------------------------------
// Function: jpeg_start_decompress  (binary VA: 0xf8fc00)
// Original: jpeg_start_decompress
// ----------------------------------------------------------------------------
int jpeg_start_decompress(int a1)
{
  int v1;
  int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = *(uint32_t *)(a1 + 20);
  switch ( v1 )
  {
    case 202:
      jinit_master_decompress(a1);
      if ( *(uint8_t *)(a1 + 64) != 0 )
      {
        *(uint32_t *)(a1 + 20) = 207;
        return 1;
      }
      *(uint32_t *)(a1 + 20) = 203;
      break;
    case 203:
      break;
    case 204:
LABEL_7:
      if ( *(uint8_t *)(*(uint32_t *)(a1 + 384) + 8) != 0 )
      {
        v3 = *(uint32_t *)(a1 + 120);
        do
        {
          while ( *(uint32_t *)(a1 + 96) <= v3 )
          {
            (*(void (**)(int))(*(uint32_t *)(a1 + 384) + 4))(a1);
            (**(void (***)(int))(a1 + 384))(a1);
            v7 = *(uint32_t *)(a1 + 384);
            *(uint32_t *)(a1 + 120) = 0;
            if ( *(uint8_t *)(v7 + 8) == 0 )
              goto LABEL_33;
            v3 = 0;
          }
          v4 = *(uint32_t *)(a1 + 8);
          v5 = v3;
          if ( v4 != 0 )
          {
            *(uint32_t *)(v4 + 4) = v3;
            *(uint32_t *)(*(uint32_t *)(a1 + 8) + 8) = *(uint32_t *)(a1 + 96);
            (**(void (***)(int))(a1 + 8))(a1);
            v5 = *(uint32_t *)(a1 + 120);
          }
          (*(void (**)(int, uint32_t, int, uint32_t))(*(uint32_t *)(a1 + 388) + 4))(a1, 0, a1 + 120, 0);
          v3 = *(uint32_t *)(a1 + 120);
        }
        while ( v5 != v3 );
        return 0;
      }
LABEL_33:
      *(uint32_t *)(a1 + 20) = 206 - (*(uint8_t *)(a1 + 65) == 0);
      return 1;
    default:
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 20;
      *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 20);
      (**(void (***)(int))a1)(a1);
      v2 = *(uint32_t *)(a1 + 20);
LABEL_5:
      if ( v2 != 204 )
      {
        (**(void (***)(int))(a1 + 384))(a1);
        *(uint32_t *)(a1 + 120) = 0;
        *(uint32_t *)(a1 + 20) = 204;
      }
      goto LABEL_7;
  }
  v2 = 203;
  if ( *(uint8_t *)(*(uint32_t *)(a1 + 400) + 16) != 0 )
  {
    v8 = *(uint32_t *)(a1 + 8);
LABEL_20:
    if ( v8 != 0 )
LABEL_21:
      (*(void (**)(int))v8)(a1);
    while ( 1 )
    {
      v9 = (**(int (***)(int))(a1 + 400))(a1);
      if ( v9 == 0 )
        return 0;
      if ( v9 == 2 )
      {
        v2 = *(uint32_t *)(a1 + 20);
        break;
      }
      v8 = *(uint32_t *)(a1 + 8);
      if ( v8 != 0 )
      {
        if ( v9 != 1 && v9 != 3 )
          goto LABEL_20;
        v10 = *(uint32_t *)(v8 + 4) + 1;
        *(uint32_t *)(v8 + 4) = v10;
        v8 = *(uint32_t *)(a1 + 8);
        v11 = *(uint32_t *)(v8 + 8);
        if ( v10 < v11 )
          goto LABEL_20;
        *(uint32_t *)(v8 + 8) = *(uint32_t *)(a1 + 284) + v11;
        v8 = *(uint32_t *)(a1 + 8);
        if ( v8 != 0 )
          goto LABEL_21;
      }
    }
  }
  *(uint32_t *)(a1 + 132) = *(uint32_t *)(a1 + 124);
  goto LABEL_5;
}

// ----------------------------------------------------------------------------
// Function: jpeg_read_scanlines  (binary VA: 0xf8fde0)
// Original: jpeg_read_scanlines
// ----------------------------------------------------------------------------
int jpeg_read_scanlines(uint32_t *a1, int a2, int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  int result;
  uint32_t v7[4];

  if ( a1[5] != 205 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  v3 = a1[30];
  if ( v3 >= a1[24] )
  {
    *(uint32_t *)(*a1 + 20) = 123;
    G4_VCALL<void>(a1, 4, -1);
    return 0;
  }
  else
  {
    v4 = a1[2];
    if ( v4 != 0 )
    {
      *(uint32_t *)(v4 + 4) = v3;
      *(uint32_t *)(a1[2] + 8) = a1[24];
      (*(void (**)(uint32_t *))a1[2])(a1);
    }
    v5 = a1[97];
    v7[0] = 0;
    (*(void (**)(uint32_t *, int, uint32_t *, int))(v5 + 4))(a1, a2, v7, a3);
    result = v7[0];
    a1[30] += v7[0];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_read_raw_data  (binary VA: 0xf8fe90)
// Original: jpeg_read_raw_data
// ----------------------------------------------------------------------------
unsigned int jpeg_read_raw_data(uint32_t *a1, int a2, unsigned int a3)
{
  unsigned int v3;
  int v4;
  unsigned int v5;

  if ( a1[5] != 206 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  v3 = a1[30];
  if ( v3 >= a1[24] )
  {
    *(uint32_t *)(*a1 + 20) = 123;
    G4_VCALL<void>(a1, 4, -1);
    return 0;
  }
  else
  {
    v4 = a1[2];
    if ( v4 != 0 )
    {
      *(uint32_t *)(v4 + 4) = v3;
      *(uint32_t *)(a1[2] + 8) = a1[24];
      (*(void (**)(uint32_t *))a1[2])(a1);
    }
    v5 = a1[70] * a1[69];
    if ( v5 > a3 )
    {
      *(uint32_t *)(*a1 + 20) = 23;
      G4_VCALL<void>(a1, 0);
    }
    if ( (*(int (**)(uint32_t *, int))(a1[98] + 12))(a1, a2) != 0 )
    {
      a1[30] += v5;
      return v5;
    }
    else
    {
      return 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: jpeg_start_output  (binary VA: 0xf8ff70)
// Original: jpeg_start_output
// ----------------------------------------------------------------------------
int jpeg_start_output(int a1, int a2)
{
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v8;

  v2 = a2;
  v3 = *(uint32_t *)(a1 + 20);
  if ( v3 != 204 && v3 != 207 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 20;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 20);
    (**(void (***)(int))a1)(a1);
    v3 = *(uint32_t *)(a1 + 20);
  }
  if ( a2 <= 0 )
    v2 = 1;
  if ( *(uint8_t *)(*(uint32_t *)(a1 + 400) + 17) != 0 && v2 > *(uint32_t *)(a1 + 124) )
    v2 = *(uint32_t *)(a1 + 124);
  *(uint32_t *)(a1 + 132) = v2;
  if ( v3 != 204 )
  {
    (**(void (***)(int))(a1 + 384))(a1);
    *(uint32_t *)(a1 + 120) = 0;
    *(uint32_t *)(a1 + 20) = 204;
  }
  if ( *(uint8_t *)(*(uint32_t *)(a1 + 384) + 8) != 0 )
  {
    v4 = *(uint32_t *)(a1 + 120);
    do
    {
      while ( *(uint32_t *)(a1 + 96) <= v4 )
      {
        (*(void (**)(int))(*(uint32_t *)(a1 + 384) + 4))(a1);
        (**(void (***)(int))(a1 + 384))(a1);
        v8 = *(uint32_t *)(a1 + 384);
        *(uint32_t *)(a1 + 120) = 0;
        if ( *(uint8_t *)(v8 + 8) == 0 )
          goto LABEL_20;
        v4 = 0;
      }
      v5 = *(uint32_t *)(a1 + 8);
      v6 = v4;
      if ( v5 != 0 )
      {
        *(uint32_t *)(v5 + 4) = v4;
        *(uint32_t *)(*(uint32_t *)(a1 + 8) + 8) = *(uint32_t *)(a1 + 96);
        (**(void (***)(int))(a1 + 8))(a1);
        v6 = *(uint32_t *)(a1 + 120);
      }
      (*(void (**)(int, uint32_t, int, uint32_t))(*(uint32_t *)(a1 + 388) + 4))(a1, 0, a1 + 120, 0);
      v4 = *(uint32_t *)(a1 + 120);
    }
    while ( v4 != v6 );
    return 0;
  }
  else
  {
LABEL_20:
    *(uint32_t *)(a1 + 20) = 206 - (*(uint8_t *)(a1 + 65) == 0);
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: jpeg_finish_output  (binary VA: 0xf900c0)
// Original: jpeg_finish_output
// ----------------------------------------------------------------------------
int jpeg_finish_output(int a1)
{
  int v1;
  int v2;

  v1 = *(uint32_t *)(a1 + 20);
  if ( (unsigned int)(v1 - 205) <= 1 )
  {
    if ( *(uint8_t *)(a1 + 64) != 0 )
    {
      (*(void (**)(int))(*(uint32_t *)(a1 + 384) + 4))(a1);
      *(uint32_t *)(a1 + 20) = 208;
      goto LABEL_6;
    }
  }
  else if ( v1 == 208 )
  {
    goto LABEL_6;
  }
  *(uint32_t *)(*(uint32_t *)a1 + 20) = 20;
  *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 20);
  (**(void (***)(int))a1)(a1);
  while ( *(uint32_t *)(a1 + 124) <= *(uint32_t *)(a1 + 132) )
  {
    v2 = *(uint32_t *)(a1 + 400);
    if ( *(uint8_t *)(v2 + 17) != 0 )
      break;
    if ( (*(int (**)(int))v2)(a1) == 0 )
      return 0;
LABEL_6:
    ;
  }
  *(uint32_t *)(a1 + 20) = 207;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: jinit_input_controller  (binary VA: 0xf909d0)
// Original: jinit_input_controller
// ----------------------------------------------------------------------------
int jinit_input_controller(int a1)
{
  int result;

  result = (**(int (***)(int, uint32_t, int))(a1 + 4))(a1, 0, 24);
  *(uint32_t *)(a1 + 400) = result;
  *(uint8_t *)(result + 16) = 0;
  *(uint32_t *)result = (uint32_t)(uintptr_t)(sub_F90630);
  *(uint8_t *)(result + 17) = 0;
  *(uint8_t *)(result + 20) = 1;
  *(uint32_t *)(result + 4) = (uint32_t)(uintptr_t)(sub_F90190);
  *(uint32_t *)(result + 8) = (uint32_t)(uintptr_t)(sub_F901F0);
  *(uint32_t *)(result + 12) = (uint32_t)(uintptr_t)(sub_F90170);
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_resync_to_restart  (binary VA: 0xf92fc0)
// Original: jpeg_resync_to_restart
// ----------------------------------------------------------------------------
int jpeg_resync_to_restart(uint32_t *a1, int a2)
{
  int v2;
  uint8_t **v3;
  uint8_t *v4;
  uint8_t *i;
  uint8_t v6;
  int v7;
  int v9;
  uint8_t *v10;

  v2 = a1[95];
  *(uint32_t *)(*a1 + 20) = 121;
  *(uint32_t *)(*a1 + 24) = v2;
  *(uint32_t *)(*a1 + 28) = a2;
  G4_VCALL<void>(a1, 4, -1);
  while ( 1 )
  {
    if ( v2 > 191 )
    {
      if ( (unsigned int)(v2 - 208) > 7 || (((uint8_t)a2 + 1) & 7) + 208 == v2 || (((uint8_t)a2 + 2) & 7) + 208 == v2 )
        break;
      if ( (((uint8_t)a2 - 1) & 7) + 208 != v2 && (((uint8_t)a2 - 2) & 7) + 208 != v2 )
      {
        *(uint32_t *)(*a1 + 20) = 97;
        *(uint32_t *)(*a1 + 24) = v2;
        *(uint32_t *)(*a1 + 28) = 1;
        G4_VCALL<void>(a1, 4, 4);
        a1[95] = 0;
        return 1;
      }
    }
    *(uint32_t *)(*a1 + 20) = 97;
    *(uint32_t *)(*a1 + 24) = v2;
    *(uint32_t *)(*a1 + 28) = 2;
    G4_VCALL<void>(a1, 4, 4);
    v3 = (uint8_t **)a1[6];
    v4 = *v3;
    for ( i = v3[1]; ; v3[1] = i )
    {
      while ( 1 )
      {
        if ( i == nullptr )
        {
          if ( ((uint8_t (*)(uint32_t *))v3[3])(a1) == 0 )
            return 0;
          v4 = *v3;
          i = v3[1];
        }
        v6 = *v4;
        --i;
        ++v4;
        if ( v6 == 0xFF )
          break;
        ++*(uint32_t *)(a1[101] + 20);
        *v3 = v4;
        v3[1] = i;
      }
      do
      {
        if ( i == nullptr )
        {
          if ( ((uint8_t (*)(uint32_t *))v3[3])(a1) == 0 )
            return 0;
          v4 = *v3;
          i = v3[1];
        }
        v7 = *v4;
        --i;
        ++v4;
      }
      while ( v7 == 255 );
      if ( v7 != 0 )
        break;
      *(uint32_t *)(a1[101] + 20) += 2;
      *v3 = v4;
    }
    v9 = v7;
    if ( *(uint32_t *)(a1[101] + 20) != 0 )
    {
      *(uint32_t *)(*a1 + 20) = 116;
      *(uint32_t *)(*a1 + 24) = *(uint32_t *)(a1[101] + 20);
      *(uint32_t *)(*a1 + 28) = v7;
      v10 = v4;
      G4_VCALL<void>(a1, 4, -1);
      *(uint32_t *)(a1[101] + 20) = 0;
      v4 = v10;
    }
    a1[95] = v9;
    *v3 = v4;
    v3[1] = i;
    v2 = a1[95];
  }
  *(uint32_t *)(*a1 + 20) = 97;
  *(uint32_t *)(*a1 + 24) = v2;
  *(uint32_t *)(*a1 + 28) = 3;
  G4_VCALL<void>(a1, 4, 4);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: jinit_marker_reader  (binary VA: 0xf93220)
// Original: jinit_marker_reader
// ----------------------------------------------------------------------------
int jinit_marker_reader(unsigned int a1)
{
  unsigned int v1;
  uint32_t *v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *retaddr;
  int v20;
  unsigned int v21;
  uint32_t *v22;
  unsigned int v23;
  int v24;

  v22 = (uint32_t *)(**(int (***)(unsigned int, uint32_t, int, int, int, int, int, int, int, int, int, int))(a1 + 4))(
                    a1,
                    0,
                    168,
                    v10,
                    v11,
                    v12,
                    v13,
                    v14,
                    v15,
                    v16,
                    v17,
                    v18);
  *(uint32_t *)(a1 + 404) = (uint32_t)(uintptr_t)(v22);
  *v22 = (uint32_t)(uintptr_t)(sub_F91260);
  v22[1] = (uint32_t)(uintptr_t)(sub_F91EF0);
  v22[2] = (uint32_t)(uintptr_t)(sub_F91960);
  v22[6] = (uint32_t)(uintptr_t)(sub_F91160);
  v22[23] = 0;
  v1 = -((uint8_t)(((uint8_t)(uintptr_t)(v22) + 28) & 0xF) >> 2) & 3;
  if ( v1 != 0 )
  {
    v2 = v22;
    v3 = 0;
    do
    {
      ++v3;
      v2[7] = (uint32_t)(uintptr_t)(sub_F91160);
      v2[24] = 0;
      v24 = 16 - v3;
      ++v2;
    }
    while ( v1 > v3 );
  }
  else
  {
    v24 = 16;
    v3 = 0;
  }
  v21 = 16 - v1;
  v23 = (16 - v1) >> 2;
  v20 = 4 * v23;
  if ( 4 * v23 == 0 )
    goto LABEL_8;
  a1 = v3;
  retaddr = (char *)&v22[v1 + 7];
  v4 = (int)(uintptr_t)(&v22[v1 + 24]);
  v5 = 0;
  v6 = 0;
  do
  {
    ++v5;
    *(uint32_t *)&retaddr[v6] = (uint32_t)(uintptr_t)(sub_F91160);
    *(uint32_t *)&retaddr[v6 + 4] = (uint32_t)(uintptr_t)(sub_F91160);
    *(uint32_t *)&retaddr[v6 + 8] = (uint32_t)(uintptr_t)(sub_F91160);
    *(uint32_t *)&retaddr[v6 + 12] = (uint32_t)(uintptr_t)(sub_F91160);
    *(__m128i *)(v4 + v6) = g4_m128_from<__m128i>(0LL);
    v6 += 16;
  }
  while ( v5 < v23 );
  v24 -= v20;
  v3 = v20 + a1;
  if ( v21 != v20 )
  {
LABEL_8:
    v7 = &v22[v3 + 7];
    v8 = v24;
    do
    {
      --v8;
      *v7 = (uint32_t)(uintptr_t)(sub_F91160);
      v7[17] = 0;
      ++v7;
    }
    while ( v8 != 0 );
  }
  v22[7] = (uint32_t)(uintptr_t)(sub_F91710);
  v22[21] = (uint32_t)(uintptr_t)(sub_F91710);
  result = *(uint32_t *)(a1 + 404);
  *(uint32_t *)(a1 + 196) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 380) = 0;
  *(uint8_t *)(result + 12) = 0;
  *(uint8_t *)(result + 13) = 0;
  *(uint32_t *)(result + 20) = 0;
  *(uint32_t *)(result + 160) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_save_markers  (binary VA: 0xf933d0)
// Original: jpeg_save_markers
// ----------------------------------------------------------------------------
unsigned int jpeg_save_markers(uint32_t *a1, int a2, signed int a3)
{
  int v3;
  unsigned int result;
  void *v5;

  v3 = a1[101];
  result = *(uint32_t *)(a1[1] + 48) - 20;
  if ( (int)result >= a3 )
    result = a3;
  if ( result != 0 )
  {
    if ( result <= 0xD && a2 == 224 )
    {
      result = 14;
      goto LABEL_18;
    }
    if ( result <= 0xB && a2 == 238 )
    {
      result = 12;
LABEL_18:
      v5 = (void *)(sub_F91B00);
      if ( (unsigned int)(a2 - 224) > 0xF )
        goto LABEL_19;
LABEL_13:
      *(uint32_t *)(v3 + 4 * a2 - 868) = (uint32_t)(uintptr_t)(v5);
      *(uint32_t *)(v3 + 4 * a2 - 800) = result;
      return result;
    }
    v5 = (void *)(sub_F91B00);
    if ( a2 == 254 )
    {
LABEL_8:
      *(uint32_t *)(v3 + 24) = (uint32_t)(uintptr_t)(v5);
      *(uint32_t *)(v3 + 92) = result;
      return result;
    }
  }
  else
  {
    if ( a2 == 238 || (v5 = (void *)(sub_F91160), a2 == 224) )
      v5 = (void *)(sub_F91710);
    if ( a2 == 254 )
      goto LABEL_8;
  }
  if ( (unsigned int)(a2 - 224) <= 0xF )
    goto LABEL_13;
LABEL_19:
  *(uint32_t *)(*a1 + 20) = 68;
  *(uint32_t *)(*a1 + 24) = a2;
  return G4_VCALL<int>(a1, 0);
}

// ----------------------------------------------------------------------------
// Function: jpeg_set_marker_processor  (binary VA: 0xf934f0)
// Original: jpeg_set_marker_processor
// ----------------------------------------------------------------------------
int jpeg_set_marker_processor(uint32_t *a1, int a2, int a3)
{
  int result;
  int v4;

  result = a2;
  v4 = a1[101];
  if ( a2 == 254 )
  {
    *(uint32_t *)(v4 + 24) = a3;
  }
  else if ( (unsigned int)(a2 - 224) > 0xF )
  {
    *(uint32_t *)(*a1 + 20) = 68;
    *(uint32_t *)(*a1 + 24) = a2;
    return G4_VCALL<int>(a1, 0);
  }
  else
  {
    *(uint32_t *)(v4 + 4 * a2 - 868) = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_calc_output_dimensions  (binary VA: 0xf937c0)
// Original: jpeg_calc_output_dimensions
// ----------------------------------------------------------------------------
int * jpeg_calc_output_dimensions(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int *result;
  bool v14;
  int v15;
  uint32_t *v16;
  int v17;

  v1 = a1;
  if ( a1[5] != 202 )
  {
    *(uint32_t *)(*a1 + 20) = 20;
    *(uint32_t *)(*a1 + 24) = a1[5];
    G4_VCALL<void>(a1, 0);
  }
  v2 = a1[12];
  v3 = a1[13];
  if ( 8 * v2 <= v3 )
  {
    a1[23] = jdiv_round_up(a1[7], 8);
    a1[24] = jdiv_round_up(a1[8], 8);
    a1[70] = 1;
    v5 = 1;
  }
  else if ( v3 >= 4 * v2 )
  {
    a1[23] = jdiv_round_up(a1[7], 4);
    a1[24] = jdiv_round_up(a1[8], 4);
    a1[70] = 2;
    v5 = 2;
  }
  else if ( v3 >= 2 * v2 )
  {
    a1[23] = jdiv_round_up(a1[7], 2);
    a1[24] = jdiv_round_up(a1[8], 2);
    a1[70] = 4;
    v5 = 4;
  }
  else
  {
    v4 = a1[7];
    a1[70] = 8;
    a1[23] = v4;
    a1[24] = a1[8];
    v5 = 8;
  }
  v16 = (uint32_t *)a1[49];
  v6 = a1[9];
  if ( v6 > 0 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v5 <= 7 )
      {
        v7 = v16[2];
        v8 = a1[68] * v5;
        if ( 2 * v7 * v5 <= v8 )
        {
          v9 = v16[3];
          v10 = a1[69] * v5;
          if ( v10 >= 2 * v9 * v5 )
          {
            do
              v5 *= 2;
            while ( v5 <= 7 && 2 * v7 * v5 <= v8 && 2 * v9 * v5 <= v10 );
          }
        }
      }
      ++v17;
      v16[9] = v5;
      v6 = a1[9];
      if ( v6 <= v17 )
        break;
      v16 += 21;
      v5 = a1[70];
    }
    v1 = a1;
    v11 = (uint32_t *)a1[49];
    if ( v6 > 0 )
    {
      v12 = 0;
      do
      {
        ++v12;
        v11[10] = jdiv_round_up(a1[7] * v11[9] * v11[2], 8 * a1[68]);
        v11[11] = jdiv_round_up(a1[8] * v11[9] * v11[3], 8 * a1[69]);
        v6 = a1[9];
        v11 += 21;
      }
      while ( v6 > v12 );
    }
  }
  switch ( v1[11] )
  {
    case 1:
      v1[25] = 1;
      v6 = 1;
      break;
    case 2:
    case 3:
      v1[25] = 3;
      v6 = 3;
      break;
    case 4:
    case 5:
      v1[25] = 4;
      v6 = 4;
      break;
    default:
      v1[25] = v6;
      break;
  }
  result = (int *)(&dword_0 + 1);
  if ( *((uint8_t *)v1 + 74) == 0 )
    result = (int *)v6;
  v14 = *((uint8_t *)v1 + 72) == 0;
  v1[26] = (uint32_t)(uintptr_t)(result);
  if ( v14
    && *((uint8_t *)v1 + 266) == 0
    && v1[10] == 3
    && v1[9] == 3
    && v1[11] == 2
    && v6 == 3
    && (result = (int *)v1[49])[2] == 2
    && result[23] == 1
    && result[44] == 1
    && result[3] <= 2
    && result[24] == 1
    && result[45] == 1
    && (v15 = result[9]) == v1[70]
    && v15 == result[30]
    && v15 == result[51] )
  {
    result = (int *)v1[69];
    v1[27] = (uint32_t)(uintptr_t)(result);
  }
  else
  {
    v1[27] = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_new_colormap  (binary VA: 0xf93b30)
// Original: jpeg_new_colormap
// ----------------------------------------------------------------------------
int jpeg_new_colormap(int a1)
{
  int v1;
  int v2;
  int result;

  v1 = *(uint32_t *)(a1 + 384);
  if ( *(uint32_t *)(a1 + 20) != 207 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 20;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 20);
    (**(void (***)(int))a1)(a1);
  }
  if ( *(uint8_t *)(a1 + 74) != 0 && *(uint8_t *)(a1 + 89) != 0 && *(uint32_t *)(a1 + 116) != 0 )
  {
    v2 = *(uint32_t *)(v1 + 24);
    *(uint32_t *)(a1 + 424) = v2;
    result = (*(int (**)(int))(v2 + 12))(a1);
    *(uint8_t *)(v1 + 8) = 0;
  }
  else
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 46;
    return (**(int (***)(int))a1)(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jinit_master_decompress  (binary VA: 0xf93bc0)
// Original: jinit_master_decompress
// ----------------------------------------------------------------------------
int jinit_master_decompress(int a1)
{
  int v1;
  int v2;
  uint16_t *v3;
  unsigned int v4;
  uint16_t *v5;
  unsigned int v6;
  unsigned int i;
  int v8;
  __m128i *v9;
  __m128i v10;
  unsigned int v11;
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
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  __m128i *v34;
  unsigned int v35;
  uint8_t *v36;
  unsigned int v37;
  uint16_t *v38;
  uint16_t *v39;
  uint16_t *v40;
  char *v41;
  unsigned int v42;
  int v43;
  uint16_t *v44;
  char *v45;
  bool v46;
  int v47;
  int v48;
  char v49;
  int v50;
  int result;
  int v52;
  char v53;
  uint32_t *v54;
  int v55;
  char v56;
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
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  int v73;

  v1 = (**(int (***)(int, int, int, int, int, int, int, int, int, int, int, int))(a1 + 4))(
         a1,
         1,
         28,
         v57,
         v58,
         v59,
         v60,
         v61,
         v62,
         v63,
         v64,
         v65);
  *(uint32_t *)(a1 + 384) = v1;
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(sub_F93620);
  *(uint32_t *)(v1 + 4) = (uint32_t)(uintptr_t)(sub_F935F0);
  *(uint8_t *)(v1 + 8) = 0;
  v66 = *(uint32_t *)(a1 + 384);
  jpeg_calc_output_dimensions((uint32_t *)a1);
  v2 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1408);
  v73 = v2;
  v3 = (uint16_t *)v2;
  *(uint32_t *)(a1 + 288) = v2 + 256;
  v4 = 256;
  if ( (v2 & 1) != 0 )
  {
    v3 = (uint16_t *)(v2 + 1);
    *(uint8_t *)v2 = 0;
    LOWORD(v4) = 255;
    if ( ((v2 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v3 = 0;
  v4 -= 2;
  ++v3;
LABEL_3:
  memset(v3, 0, 4 * (v4 >> 2));
  v5 = &v3[2 * (v4 >> 2)];
  if ( (v4 & 2) != 0 )
    *v5++ = 0;
  if ( (v4 & 1) != 0 )
    *(uint8_t *)v5 = 0;
  v6 = -(v2 + 256) & 0xF;
  if ( v6 != 0 )
  {
    for ( i = 0; i < v6; v8 = 256 - i )
    {
      *(uint8_t *)(v73 + i + 256) = i;
      ++i;
    }
  }
  else
  {
    v8 = 256;
    i = 0;
  }
  v71 = 256 - v6;
  v69 = (256 - v6) >> 4;
  v67 = 16 * v69;
  if ( 16 * v69 == 0 )
    goto LABEL_102;
g4_m128_lane<int64_t>(v10, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i), _mm_cvtsi32_si128(i + 1)), 0);
  v9 = (__m128i *)(v73 + v6 + 256);
g4_m128_lane<int64_t>(v10, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i + 2), _mm_cvtsi32_si128(i + 3)), 0);
  v11 = 0;
  while ( 1 )
  {
    v12 = v10;
    v13 = _mm_add_epi32(v10, G4_BITCAST<__m128i>(xmmword_1C7C400));
    v14 = _mm_unpackhi_epi16(v10, v13);
    v15 = _mm_add_epi32(v13, G4_BITCAST<__m128i>(xmmword_1C7C400));
    v16 = _mm_unpacklo_epi16(v10, v13);
    v17 = _mm_unpacklo_epi16(v16, v14);
    v18 = _mm_unpackhi_epi16(v16, v14);
    v19 = _mm_add_epi32(v15, G4_BITCAST<__m128i>(xmmword_1C7C400));
    v20 = _mm_unpacklo_epi16(v17, v18);
    v21 = v15;
    v22 = _mm_unpacklo_epi16(v15, v19);
    v23 = _mm_unpackhi_epi16(v21, v19);
    v24 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v22, v23), _mm_unpackhi_epi16(v22, v23));
    v25 = _mm_unpackhi_epi8(v20, v24);
    v26 = _mm_unpacklo_epi8(v20, v24);
    v27 = _mm_unpacklo_epi8(v26, v25);
    v28 = _mm_unpackhi_epi8(v26, v25);
    ++v11;
    *v9++ = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v27, v28), _mm_unpackhi_epi8(v27, v28));
    v29 = _mm_add_epi32(v12, G4_BITCAST<__m128i>(xmmword_1C7C440));
    if ( v11 >= v69 )
      break;
    v10 = v29;
  }
  i += v67;
  v8 -= v67;
  if ( v71 != v67 )
  {
LABEL_102:
    do
    {
      --v8;
      *(uint8_t *)(v73 + i + 256) = i;
      ++i;
    }
    while ( v8 != 0 );
  }
  v30 = v73 + 384;
  v31 = -v73 & 0xF;
  if ( v31 != 0 )
  {
    v32 = 128;
    do
    {
      *(uint8_t *)(v30 + v32++) = -1;
      v33 = 512 - v32;
    }
    while ( v31 > v32 - 128 );
  }
  else
  {
    v33 = 384;
    v32 = 128;
  }
  v72 = 384 - v31;
  v70 = (384 - v31) >> 4;
  v68 = 16 * v70;
  if ( 16 * v70 == 0 )
    goto LABEL_23;
  v34 = (__m128i *)(v30 + v31 + 128);
  v35 = 0;
  do
  {
    ++v35;
    *v34++ = g4_m128_from<__m128i>(-1LL);
  }
  while ( v35 < v70 );
  v32 += v68;
  v33 -= v68;
  if ( v72 != v68 )
  {
LABEL_23:
    v36 = (uint8_t *)(v30 + v32);
    do
    {
      --v33;
      *v36++ = -1;
    }
    while ( v33 != 0 );
  }
  v37 = 384;
  v38 = (uint16_t *)(v73 + 896);
  if ( ((v73 + 896) & 1) != 0 )
  {
    LOBYTE(v37) = 127;
    v38 = (uint16_t *)(v73 + 897);
    *(uint8_t *)(v73 + 896) = 0;
    if ( ((v73 + 897) & 2) == 0 )
      goto LABEL_27;
  }
  else if ( ((uint8_t)(uintptr_t)(v38) & 2) == 0 )
  {
    goto LABEL_27;
  }
  *v38 = 0;
  v37 -= 2;
  ++v38;
LABEL_27:
  memset(v38, 0, 4 * (v37 >> 2));
  v39 = &v38[2 * (v37 >> 2)];
  if ( (v37 & 2) != 0 )
    *v39++ = 0;
  if ( (v37 & 1) != 0 )
    *(uint8_t *)v39 = 0;
  v40 = (uint16_t *)(v73 + 1280);
  v41 = *(char **)(a1 + 288);
  v42 = 128;
  if ( ((v73 + 1280) & 1) != 0 )
  {
    v40 = (uint16_t *)(v73 + 1281);
    v56 = *v41++;
    *(uint8_t *)(v73 + 1280) = v56;
    v42 = 127;
    if ( ((v73 + 1281) & 2) == 0 )
      goto LABEL_33;
  }
  else if ( (v73 & 2) == 0 )
  {
    goto LABEL_33;
  }
  v42 -= 2;
  *v40 = *(uint16_t *)v41;
  v41 += 2;
  ++v40;
LABEL_33:
  v43 = 0;
  std::memcpy(v40, v41, 4 * (v42 >> 2));
  v45 = &v41[4 * (v42 >> 2)];
  v44 = &v40[2 * (v42 >> 2)];
  if ( (v42 & 2) != 0 )
  {
    *v44 = *(uint16_t *)v45;
    v43 = 1;
  }
  if ( (v42 & 1) != 0 )
    LOBYTE(v44[v43]) = v45[v43 * 2];
  v46 = false;
  *(uint32_t *)(v66 + 12) = 0;
  if ( *(uint8_t *)(a1 + 72) == 0
    && *(uint8_t *)(a1 + 266) == 0
    && *(uint32_t *)(a1 + 40) == 3
    && *(uint32_t *)(a1 + 36) == 3
    && *(uint32_t *)(a1 + 44) == 2
    && *(uint32_t *)(a1 + 100) == 3 )
  {
    v54 = *(uint32_t **)(a1 + 196);
    if ( v54[2] == 2 && v54[23] == 1 && v54[44] == 1 && (int)v54[3] <= 2 && v54[24] == 1 && v54[45] == 1 )
    {
      v55 = v54[9];
      if ( v55 == *(uint32_t *)(a1 + 280) && v55 == v54[30] )
        v46 = v55 == v54[51];
    }
  }
  *(uint8_t *)(v66 + 16) = v46;
  *(uint32_t *)(v66 + 20) = 0;
  *(uint32_t *)(v66 + 24) = 0;
  v47 = a1;
  if ( *(uint8_t *)(a1 + 74) == 0 )
  {
    *(uint8_t *)(a1 + 88) = 0;
    *(uint8_t *)(a1 + 89) = 0;
    *(uint8_t *)(a1 + 90) = 0;
    goto LABEL_63;
  }
  v48 = a1;
  if ( *(uint8_t *)(a1 + 64) == 0 )
  {
    *(uint8_t *)(a1 + 88) = 0;
    *(uint8_t *)(a1 + 89) = 0;
    *(uint8_t *)(a1 + 90) = 0;
  }
  if ( *(uint8_t *)(a1 + 65) != 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 47;
    (**(void (***)(int))a1)(a1);
    v48 = a1;
    if ( *(uint32_t *)(a1 + 100) != 3 )
      goto LABEL_45;
  }
  else if ( *(uint32_t *)(a1 + 100) != 3 )
  {
LABEL_45:
    *(uint8_t *)(v48 + 88) = 1;
    *(uint8_t *)(v48 + 89) = 0;
    *(uint8_t *)(v48 + 90) = 0;
    *(uint32_t *)(v48 + 116) = 0;
    goto LABEL_46;
  }
  if ( *(uint32_t *)(v48 + 116) != 0 )
  {
    *(uint8_t *)(v48 + 89) = 1;
    v53 = *(uint8_t *)(v48 + 88);
  }
  else
  {
    if ( *(uint8_t *)(v48 + 80) == 0 )
    {
      *(uint8_t *)(v48 + 88) = 1;
LABEL_46:
      jinit_1pass_quantizer(a1);
      *(uint32_t *)(v66 + 20) = *(uint32_t *)(a1 + 424);
      v47 = a1;
      if ( (*(uint32_t *)(a1 + 88) & 0xFFFF00) != 0 )
        goto LABEL_47;
LABEL_63:
      if ( *(uint8_t *)(v47 + 65) != 0 )
        goto LABEL_48;
      goto LABEL_64;
    }
    *(uint8_t *)(v48 + 90) = 1;
    v53 = *(uint8_t *)(v48 + 88);
  }
  if ( v53 != 0 )
    goto LABEL_46;
  v47 = a1;
  if ( (*(uint32_t *)(a1 + 88) & 0xFFFF00) == 0 )
    goto LABEL_63;
LABEL_47:
  jinit_2pass_quantizer(v47);
  *(uint32_t *)(v66 + 24) = *(uint32_t *)(a1 + 424);
  v47 = a1;
  if ( *(uint8_t *)(a1 + 65) == 0 )
  {
LABEL_64:
    if ( *(uint8_t *)(v66 + 16) != 0 )
    {
      jinit_merged_upsampler(a1);
    }
    else
    {
      jinit_color_deconverter(a1);
      jinit_upsampler(a1);
    }
    jinit_d_post_controller(a1, *(uint8_t *)(a1 + 90));
    v47 = a1;
  }
LABEL_48:
  jinit_inverse_dct(v47);
  if ( *(uint8_t *)(a1 + 201) != 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 1;
    (**(void (***)(int))a1)(a1);
  }
  else if ( *(uint8_t *)(a1 + 200) != 0 )
  {
    jinit_phuff_decoder(a1);
  }
  else
  {
    jinit_huff_decoder(a1);
  }
  v49 = 1;
  if ( *(uint8_t *)(*(uint32_t *)(a1 + 400) + 16) == 0 )
    v49 = *(uint8_t *)(a1 + 64) != 0;
  jinit_d_coef_controller(a1, v49);
  v50 = a1;
  if ( *(uint8_t *)(a1 + 65) == 0 )
  {
    jinit_d_main_controller(a1, 0);
    v50 = a1;
  }
  (*(void (**)(int))(*(uint32_t *)(v50 + 4) + 24))(v50);
  (*(void (**)(int))(*(uint32_t *)(a1 + 400) + 8))(a1);
  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 && *(uint8_t *)(a1 + 64) == 0 && *(uint8_t *)(*(uint32_t *)(a1 + 400) + 16) != 0 )
  {
    if ( *(uint8_t *)(a1 + 200) != 0 )
      v52 = 3 * *(uint32_t *)(a1 + 36) + 2;
    else
      v52 = *(uint32_t *)(a1 + 36);
    *(uint32_t *)(result + 4) = 0;
    *(uint32_t *)(*(uint32_t *)(a1 + 8) + 8) = *(uint32_t *)(a1 + 284) * v52;
    *(uint32_t *)(*(uint32_t *)(a1 + 8) + 12) = 0;
    result = 3 - (*(uint8_t *)(a1 + 90) == 0);
    *(uint32_t *)(*(uint32_t *)(a1 + 8) + 16) = result;
    ++*(uint32_t *)(v66 + 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jinit_merged_upsampler  (binary VA: 0xf94970)
// Original: jinit_merged_upsampler
// ----------------------------------------------------------------------------
int jinit_merged_upsampler(int a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  char *v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 48);
  *(uint32_t *)(a1 + 416) = v1;
  *(uint8_t *)(v1 + 8) = 0;
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(sub_F94360);
  v2 = *(uint32_t *)(a1 + 92) * *(uint32_t *)(a1 + 100);
  *(uint32_t *)(v1 + 40) = v2;
  if ( *(uint32_t *)(a1 + 276) == 2 )
  {
    *(uint32_t *)(v1 + 4) = (uint32_t)(uintptr_t)(sub_F94840);
    *(uint32_t *)(v1 + 12) = (uint32_t)(uintptr_t)(sub_F945C0);
    *(uint32_t *)(v1 + 32) = (*(int (**)(int, int, int))(*(uint32_t *)(a1 + 4) + 4))(a1, 1, v2);
  }
  else
  {
    *(uint32_t *)(v1 + 32) = 0;
    *(uint32_t *)(v1 + 4) = (uint32_t)(uintptr_t)(sub_F94380);
    *(uint32_t *)(v1 + 12) = (uint32_t)(uintptr_t)(sub_F943E0);
  }
  v3 = *(uint32_t **)(a1 + 416);
  v3[4] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
  v3[5] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
  v3[6] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
  v4 = 2919680;
  v3[7] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
  v5 = (char *)((uint8_t *)(uintptr_t)0x5B6900u);
  v10 = -11728000;
  result = 0;
  v9 = -14831872;
  do
  {
    v7 = v10 >> 16;
    v10 += 91881;
    *(uint32_t *)(v3[4] + result) = v7;
    v8 = v9;
    v9 += 116130;
    *(uint32_t *)(v3[5] + result) = v8 >> 16;
    *(uint32_t *)(v3[6] + result) = (uint32_t)(uintptr_t)(v5);
    v5 -= 46802;
    *(uint32_t *)(v3[7] + result) = v4;
    result += 4;
    v4 -= 22554;
  }
  while ( result != 1024 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: jinit_phuff_decoder  (binary VA: 0xf95dc0)
// Original: jinit_phuff_decoder
// ----------------------------------------------------------------------------
uint32_t * jinit_phuff_decoder(int a1)
{
  uint32_t *v1;
  uint32_t *result;
  unsigned int v3;
  int i;
  unsigned int v5;
  __m128i *v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char *retaddr;
  int v14;
  unsigned int v15;
  int v16;

  v1 = (uint32_t *)(**(int (***)(int, int, int, int, int, int, int, int))(a1 + 4))(
                   a1,
                   1,
                   64,
                   v8,
                   v9,
                   v10,
                   v11,
                   v12);
  *(uint32_t *)(a1 + 408) = (uint32_t)(uintptr_t)(v1);
  *v1 = (uint32_t)(uintptr_t)(sub_F94B00);
  v1[11] = 0;
  v1[12] = 0;
  v1[13] = 0;
  v1[14] = 0;
  v16 = (**(int (***)(int, int, uint32_t))(a1 + 4))(a1, 1, *(uint32_t *)(a1 + 36) << 8);
  retaddr = nullptr;
  *(uint32_t *)(a1 + 140) = v16;
  result = *(uint32_t **)(a1 + 36);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    do
    {
      result = (uint32_t *)v16;
      v3 = -((uint8_t)(v16 & 0xF) >> 2) & 3;
      if ( v3 != 0 )
      {
        for ( i = 63; ; --i )
        {
          *result++ = -1;
          if ( v3 <= 64 - i )
            break;
        }
      }
      else
      {
        i = 64;
      }
      v15 = 64 - v3;
      v5 = (64 - v3) >> 2;
      v14 = 4 * v5;
      if ( 4 * v5 == 0 )
        goto LABEL_16;
      v6 = (__m128i *)(v16 + 4 * v3);
      v7 = 0;
      do
      {
        ++v7;
        *v6++ = g4_m128_from<__m128i>(-1LL);
      }
      while ( v7 < v5 );
      i -= v14;
      result += 4 * v5;
      if ( v15 != v14 )
      {
LABEL_16:
        do
        {
          --i;
          *result++ = -1;
        }
        while ( i != 0 );
      }
      ++retaddr;
      v16 += 256;
    }
    while ( (&dword_24)[v5] > (int)(uintptr_t)(retaddr) );
  }
  return result;
}



// ============================================================================
// Address:   0xf96300 (size: 248 bytes)
// Symbol:    jinit_d_post_controller
// Demangled: jinit_d_post_controller
// ============================================================================
int (*(*jinit_d_post_controller(int a1, char a2))(
        int a1,
        int a2))(int, int, int, int, int, int)
{
  int (*(**v2)(int, int))(int, int, int, int, int, int);
  int (*(*result)(int, int))(int, int, int, int, int, int);
  int (*(*v4)(int, int))(int, int, int, int, int, int);
  int v5;
  int (*v6)(int, int, uint32_t, int, int, int (*(*)(int, int))(int, int, int, int, int, int));

  v2 = (int (*(**)(int, int))(int, int, int, int, int, int))(**(int (***)(int, int, int))(a1 + 4))(
                                                                              a1,
                                                                              1,
                                                                              28);
  *(uint32_t *)(a1 + 396) = (uint32_t)(uintptr_t)(v2);
  result = (int (*(*)(int, int))(int, int, int, int, int, int))(uintptr_t)(sub_F95F20);
  v2[2] = nullptr;
  *v2 = (int (*(*)(int, int))(int, int, int, int, int, int))(uintptr_t)(sub_F95F20);
  v2[3] = nullptr;
  if ( *(uint8_t *)(a1 + 74) != 0 )
  {
    v4 = *(int (*(**)(int, int))(int, int, int, int, int, int))(a1 + 276);
    v2[4] = v4;
    if ( a2 != 0 )
    {
      v6 = *(int (**)(int, int, uint32_t, int, int, int (*(*)(int, int))(int, int, int, int, int, int)))(*(uint32_t *)(a1 + 4) + 16);
      v5 = jround_up(*(uint32_t *)(a1 + 96), v4);
      result = (int (*(*)(int, int))(int, int, int, int, int, int))v6(
                                                                                     a1,
                                                                                     1,
                                                                                     0,
                                                                                     *(uint32_t *)(a1 + 92)
                                                                                   * *(uint32_t *)(a1 + 100),
                                                                                     v5,
                                                                                     v4);
      v2[2] = result;
    }
    else
    {
      result = (int (*(*)(int, int))(int, int, int, int, int, int))(*(int (**)(int, int, int, int (*(*)(int, int))(int, int, int, int, int, int)))(*(uint32_t *)(a1 + 4) + 8))(
                                                                                     a1,
                                                                                     1,
                                                                                     *(uint32_t *)(a1 + 92)
                                                                                   * *(uint32_t *)(a1 + 100),
                                                                                     v4);
      v2[3] = result;
    }
  }
  return result;
}


// ============================================================================
// Address:   0xf97080 (size: 670 bytes)
// Symbol:    jinit_upsampler
// Demangled: jinit_upsampler
// ============================================================================
uint32_t *(*jinit_upsampler(int a1))(int *a1, int a2, uint32_t *a3, int a4, int a5, uint32_t *a6, int a7)
{
  uint32_t *(*result)(int *, int, uint32_t *, int, int, uint32_t *, int);
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int (*v11)(int, int, int, int);
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  bool v19;

  v18 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 160);
  *(uint32_t *)(a1 + 416) = v18;
  *(uint8_t *)(v18 + 8) = 0;
  *(uint32_t *)v18 = (uint32_t)(uintptr_t)(sub_F96400);
  result = sub_F96420;
  *(uint32_t *)(v18 + 4) = (uint32_t)(uintptr_t)(sub_F96420);
  if ( *(uint8_t *)(a1 + 266) != 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 25;
    result = (uint32_t *(*)(int *, int, uint32_t *, int, int, uint32_t *, int))(**(int (***)(int))a1)(a1);
  }
  v19 = false;
  if ( *(uint8_t *)(a1 + 72) != 0 )
    v19 = *(uint32_t *)(a1 + 280) > 1;
  v2 = *(uint32_t *)(a1 + 196);
  if ( *(int *)(a1 + 36) > 0 )
  {
    v3 = (uint32_t *)v18;
    v14 = v18;
    v12 = nullptr;
    do
    {
      v4 = *(uint32_t *)(v2 + 36);
      v10 = *(uint32_t *)(a1 + 280);
      v17 = *(uint32_t *)(v2 + 8);
      v13 = v4 * *(uint32_t *)(v2 + 12) / v10;
      v15 = *(uint32_t *)(a1 + 272);
      v16 = *(uint32_t *)(a1 + 276);
      v3[25] = v13;
      if ( *(uint8_t *)(v2 + 48) != 0 )
      {
        v5 = v4 * v17 / v10;
        if ( v13 != v16 || v5 != v15 )
        {
          if ( 2 * v5 != v15 )
            goto LABEL_16;
          if ( v13 == v16 )
          {
            if ( v19 && *(uint32_t *)(v2 + 40) > 2u )
              v3[13] = (uint32_t)(uintptr_t)(sub_F966C0);
            else
              v3[13] = (uint32_t)(uintptr_t)(sub_F96560);
          }
          else if ( 2 * v13 == v16 )
          {
            if ( v19 && *(uint32_t *)(v2 + 40) > 2u )
            {
              v3[13] = (uint32_t)(uintptr_t)(sub_F96B30);
              *(uint8_t *)(v18 + 8) = 1;
            }
            else
            {
              v3[13] = (uint32_t)(uintptr_t)(sub_F96ED0);
            }
          }
          else
          {
LABEL_16:
            v6 = v15 % v5 == 0;
            v7 = v15 / v5;
            if ( !v6 || v16 % v13 != 0 )
            {
              *(uint32_t *)(*(uint32_t *)a1 + 20) = 38;
              (**(void (***)(int))a1)(a1);
            }
            else
            {
              v3[13] = (uint32_t)(uintptr_t)(sub_F96CC0);
              *(uint8_t *)(v14 + 140) = v7;
              *(uint8_t *)(v14 + 150) = v16 / v13;
            }
          }
          v11 = *(int (**)(int, int, int, int))(*(uint32_t *)(a1 + 4) + 8);
          v9 = *(uint32_t *)(a1 + 276);
          v8 = jround_up(*(uint32_t *)(a1 + 92), *(uint32_t *)(a1 + 272));
          v3[3] = v11(a1, 1, v8, v9);
          goto LABEL_8;
        }
        v3[13] = (uint32_t)(uintptr_t)(sub_F96540);
      }
      else
      {
        v3[13] = (uint32_t)(uintptr_t)(sub_F96550);
      }
LABEL_8:
      ++v12;
      v2 += 84;
      ++v3;
      ++v14;
      result = (uint32_t *(*)(int *, int, uint32_t *, int, int, uint32_t *, int))v12;
    }
    while ( *(uint32_t *)(a1 + 36) > (int)(uintptr_t)(v12) );
  }
  return result;
}


// ============================================================================
// Address:   0xf97550 (size: 121 bytes)
// Symbol:    jpeg_std_error
// Demangled: jpeg_std_error
// ============================================================================
void ( **jpeg_std_error(void ( **a1)(int a1)))(int a1)
{
  *a1 = sub_F97510;
  a1[1] = (void ( *)(int))sub_F97320;
  a1[2] = (void ( *)(int))sub_F974A0;
  a1[3] = (void ( *)(int))sub_F973A0;
  a1[4] = (void ( *)(int))sub_F97380;
  a1[26] = nullptr;
  a1[27] = nullptr;
  a1[5] = nullptr;
  a1[28] = (void ( *)(int))jpeg_std_message_table;
  a1[29] = (void ( *)(int))(&dword_78 + 3);
  a1[30] = nullptr;
  a1[31] = nullptr;
  a1[32] = nullptr;
  return a1;
}
// ----------------------------------------------------------------------------
// Function: jinit_memory_mgr  (binary VA: 0xf98f70)
// Original: jinit_memory_mgr
// ----------------------------------------------------------------------------
const char * jinit_memory_mgr(uint32_t *a1)
{
  uint32_t *small;
  int v2;
  const char *result;
  int v4;
  typedef char _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  a1[1] = 0;
  v6 = jpeg_mem_init(a1);
  small = (uint32_t *)jpeg_get_small((int)(uintptr_t)(a1), 0x54u);
  if ( small == nullptr )
  {
    jpeg_mem_term(a1);
    *(uint32_t *)(*a1 + 20) = 54;
    *(uint32_t *)(*a1 + 24) = 0;
    G4_VCALL<void>(a1, 0);
  }
  *small = (uint32_t)(uintptr_t)(sub_F975D0);
  small[1] = (uint32_t)(uintptr_t)(sub_F978D0);
  small[2] = (uint32_t)(uintptr_t)(sub_F98810);
  small[3] = (uint32_t)(uintptr_t)(sub_F984A0);
  small[4] = (uint32_t)(uintptr_t)(sub_F98160);
  small[5] = (uint32_t)(uintptr_t)(sub_F98300);
  small[6] = (uint32_t)(uintptr_t)(sub_F98B80);
  small[7] = (uint32_t)(uintptr_t)(sub_F979D0);
  small[8] = (uint32_t)(uintptr_t)(sub_F97DA0);
  small[9] = (uint32_t)(uintptr_t)(sub_F97770);
  small[10] = (uint32_t)(uintptr_t)(sub_F98DE0);
  v2 = v6;
  small[12] = 1000000000;
  small[11] = v2;
  small[14] = 0;
  small[16] = 0;
  small[13] = 0;
  small[15] = 0;
  small[17] = 0;
  small[18] = 0;
  small[19] = 84;
  a1[1] = (uint32_t)(uintptr_t)(small);
  result = getenv("JPEGMEM");
  if ( result != nullptr )
  {
    v5 = 120;
    result = (const char *)sscanf(result, "%ld%c", &v6, &v5);
    if ( (int)(uintptr_t)(result) > 0 )
    {
      if ( v5 == 77 || v5 == 109 )
        v4 = 1000 * v6;
      else
        v4 = v6;
      result = (const char *)(1000 * v4);
      small[11] = (uint32_t)(uintptr_t)(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jinit_1pass_quantizer  (binary VA: 0xf99b80)
// Original: jinit_1pass_quantizer
// ----------------------------------------------------------------------------
int jinit_1pass_quantizer(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  int i;
  int v4;
  int j;
  int v6;
  int v7;
  int v8;
  char k; // di
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int m;
  int v16;
  int v17;
  int n;
  int ii;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int result;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int64_t v35; // rax
  int v36;
  int jj;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint8_t *v47;
  int v48;
  char v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  uint32_t *v58;
  int v59;
  int v60;

  v1 = (uint32_t *)(*(int (**)(uint32_t *, int, int))a1[1])(a1, 1, 88);
  a1[106] = (uint32_t)(uintptr_t)(v1);
  *v1 = (uint32_t)(uintptr_t)(sub_F99750);
  v1[17] = 0;
  v1[13] = 0;
  v1[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  v1[3] = (uint32_t)(uintptr_t)(sub_F993A0);
  if ( (int)a1[25] > 4 )
  {
    *(uint32_t *)(*a1 + 20) = 55;
    *(uint32_t *)(*a1 + 24) = 4;
    G4_VCALL<void>(a1, 0);
  }
  v43 = a1[21];
  if ( v43 > 256 )
  {
    *(uint32_t *)(*a1 + 20) = 57;
    *(uint32_t *)(*a1 + 24) = 256;
    G4_VCALL<void>(a1, 0);
    v43 = a1[21];
  }
  v2 = a1[25];
  v58 = (uint32_t *)a1[106];
  for ( i = 1; ; ++i )
  {
    v4 = i + 1;
    if ( v2 > 1 )
    {
      for ( j = 1; j != v2; ++j )
        v4 *= i + 1;
    }
    if ( v4 > v43 )
      break;
  }
  if ( i == 1 )
  {
    *(uint32_t *)(*a1 + 20) = 56;
    *(uint32_t *)(*a1 + 24) = v4;
    G4_VCALL<void>(a1, 0);
  }
  v46 = 1;
  if ( v2 > 0 )
  {
    v6 = 0;
    v7 = 1;
    do
    {
      v58[v6++ + 8] = i;
      v7 *= i;
    }
    while ( v6 != v2 );
    v46 = v7;
  }
  do
  {
    v8 = 0;
    for ( k = 0; v2 > v8; k = 1 )
    {
      v10 = v8;
      if ( a1[11] == 2 )
        v10 = dword_1CBD740[v8];
      v11 = v10 + 8;
      v42 = v58[v11];
      if ( (v42 + 1) * (v46 / v42) > v43 )
        break;
      ++v8;
      v46 = (v42 + 1) * (v46 / v42);
      v58[v11] = v42 + 1;
    }
  }
  while ( k != 0 );
  v48 = v46;
  v12 = (uint32_t *)*a1;
  if ( a1[25] == 3 )
  {
    v12[6] = v46;
    v12[7] = v58[8];
    v12[8] = v58[9];
    v12[9] = v58[10];
    *(uint32_t *)(*a1 + 20) = 94;
  }
  else
  {
    v12[5] = 95;
    *(uint32_t *)(*a1 + 24) = v46;
  }
  G4_VCALL<void>(a1, 4, 1);
  v13 = (*(int (**)(uint32_t *, int, int, uint32_t))(a1[1] + 8))(a1, 1, v46, a1[25]);
  v44 = a1[25];
  if ( v44 > 0 )
  {
    v14 = 0;
    for ( m = v46; ; m = v17 )
    {
      v16 = v58[v14 + 8];
      v17 = m / v16;
      if ( v16 > 0 )
      {
        v54 = v16 - 1;
        v50 = 0;
        v56 = 255 * v16;
        v60 = (v16 - 1) >> 1;
        v52 = 0;
        do
        {
          for ( n = v50; n < v48; n += v46 )
          {
            if ( v17 > 0 )
            {
              for ( ii = 0; ii != v17; ++ii )
              {
                v20 = *(uint32_t *)(v13 + 4 * v14) + ii;
                *(uint8_t *)(v20 + n) = (v60 + v52) / v54;
              }
            }
          }
          v52 += 255;
          v50 += v17;
        }
        while ( v52 != v56 );
        v44 = a1[25];
      }
      if ( ++v14 >= v44 )
        break;
      v46 = v17;
    }
  }
  v21 = 766;
  v58[4] = v13;
  v58[5] = v48;
  v22 = a1[106];
  v53 = v22;
  v23 = 0;
  if ( a1[19] == 1 )
    v23 = 510;
  else
    v21 = 256;
  v57 = v23;
  *(uint8_t *)(v22 + 28) = a1[19] == 1;
  v24 = (*(int (**)(uint32_t *, int, int, uint32_t))(a1[1] + 8))(a1, 1, v21, a1[25]);
  *(uint32_t *)(v22 + 24) = v24;
  v25 = v24;
  v59 = *(uint32_t *)(v22 + 20);
  result = a1[25];
  if ( result > 0 )
  {
    v55 = 0;
    v27 = v22;
    while ( 1 )
    {
      v28 = *(uint32_t *)(v27 + 4 * v55 + 32);
      v29 = v59 / v28;
      v59 /= v28;
      if ( v57 != 0 )
      {
        *(uint32_t *)(v25 + 4 * v55) += 255;
        v25 = *(uint32_t *)(v53 + 24);
      }
      v47 = *(uint8_t **)(v25 + 4 * v55);
      v51 = v28 - 1;
      v45 = 2 * (v28 - 1);
      v49 = v29;
      v30 = 0;
      v31 = 0;
      v32 = (v28 + 254) / v45;
      do
      {
        if ( v32 < v30 )
        {
          v33 = v31 + 1;
          v34 = v51 + 510 * (v31 + 1) + 255;
          while ( 1 )
          {
            v35 = v34;
            v34 += 510;
            v36 = v35 / v45;
            if ( v36 >= v30 )
              break;
            ++v33;
          }
          v31 = v33;
          v32 = v36;
        }
        v47[v30++] = v31 * v49;
      }
      while ( v30 != 256 );
      if ( v57 != 0 )
      {
        for ( jj = 1; jj != 256; ++jj )
        {
          v47[-jj] = *v47;
          v47[jj + 255] = v47[255];
        }
      }
      ++v55;
      result = a1[25];
      if ( v55 >= result )
        break;
      v27 = v53;
      v25 = *(uint32_t *)(v53 + 24);
    }
  }
  if ( a1[19] == 2 && result > 0 )
  {
    v38 = 2 * a1[23] + 4;
    v39 = 0;
    v40 = a1[106];
    do
    {
      v41 = v38;
      result = (*(int (**)(uint32_t *, int, int))(a1[1] + 4))(a1, 1, v38);
      *(uint32_t *)(v40 + 4 * v39++ + 68) = result;
      v38 = v41;
    }
    while ( v39 < a1[25] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jinit_2pass_quantizer  (binary VA: 0xf9c030)
// Original: jinit_2pass_quantizer
// ----------------------------------------------------------------------------
uint32_t * jinit_2pass_quantizer(int a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  uint32_t *result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int i;
  uint32_t *v12;
  int j;
  uint32_t *v14;
  uint32_t *v15;
  int v16;

  v16 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 44);
  *(uint32_t *)(a1 + 424) = v16;
  *(uint32_t *)(v16 + 32) = 0;
  *(uint32_t *)v16 = (uint32_t)(uintptr_t)(sub_F9B5D0);
  *(uint32_t *)(v16 + 40) = 0;
  *(uint32_t *)(v16 + 12) = (uint32_t)(uintptr_t)(sub_F9B5B0);
  if ( *(uint32_t *)(a1 + 100) != 3 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 47;
    (**(void (***)(int))a1)(a1);
  }
  v1 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 128);
  v2 = 0;
  for ( *(uint32_t *)(v16 + 24) = v1; ; v1 = *(uint32_t *)(v16 + 24) )
  {
    v3 = (uint32_t *)(v1 + v2);
    v2 += 4;
    *v3 = (*(int (**)(int, int, int))(*(uint32_t *)(a1 + 4) + 4))(a1, 1, 4096);
    if ( v2 == 128 )
      break;
  }
  *(uint8_t *)(v16 + 28) = 1;
  if ( *(uint8_t *)(a1 + 90) == 0 )
  {
    *(uint32_t *)(v16 + 16) = 0;
    result = *(uint32_t **)(a1 + 76);
    if ( result == nullptr )
      return result;
    goto LABEL_13;
  }
  v4 = *(uint32_t *)(a1 + 84);
  if ( v4 <= 7 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 56;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = 8;
    (**(void (***)(int))a1)(a1);
  }
  else if ( v4 > 256 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 57;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = 256;
    (**(void (***)(int))a1)(a1);
  }
  *(uint32_t *)(v16 + 16) = (*(int (**)(int, int, int, int))(*(uint32_t *)(a1 + 4) + 8))(a1, 1, v4, 3);
  *(uint32_t *)(v16 + 20) = v4;
  result = *(uint32_t **)(a1 + 76);
  if ( result != nullptr )
  {
LABEL_13:
    v6 = *(uint32_t *)(a1 + 92);
    v7 = *(uint32_t *)(a1 + 4);
    *(uint32_t *)(a1 + 76) = 2;
    *(uint32_t *)(v16 + 32) = (*(int (**)(int, int, int))(v7 + 4))(a1, 1, 6 * v6 + 12);
    v8 = *(uint32_t *)(a1 + 424);
    v9 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 2044);
    v10 = 0;
    *(uint32_t *)(v8 + 40) = v9 + 1020;
    for ( i = 0; i != 16; ++i )
    {
      *(uint32_t *)(v9 + 4 * i + 1020) = i;
      *(uint32_t *)(v9 + 4 * v10 + 1020) = v10;
      --v10;
    }
    v12 = (uint32_t *)(v9 + 956);
    for ( j = 16; j != 48; i += !(j & 1) )
    {
      *(uint32_t *)(v9 + 4 * j++ + 1020) = i;
      *v12-- = -i;
    }
    v14 = (uint32_t *)(v9 + 1212);
    v15 = (uint32_t *)(v9 + 828);
    result = (uint32_t *)(v9 + 2044);
    do
    {
      *v14++ = i;
      *v15-- = -i;
    }
    while ( v14 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jinit_c_coef_controller  (binary VA: 0xfb9e50)
// Original: jinit_c_coef_controller
// ----------------------------------------------------------------------------
int jinit_c_coef_controller(int a1, char a2, int a3, uint32_t *a4)
{
  uint32_t *v4;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int i;
  unsigned int v13;
  __m128i *v14;
  __m128i v15;
  unsigned int v16;
  __m128i v17;
  __m128i v18;
  int v19;
  unsigned int v20;
  uint32_t *v21;
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
  void *retaddr;
  uint32_t *v37;
  int v38;
  unsigned int v39;
  uint32_t *v40;
  void *v41;
  unsigned int v42;
  int (*v43)(uint32_t *, int, uint32_t, int);
  int v44;

  v40 = (uint32_t *)(**(int (***)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(a1 + 4))(
                    a1,
                    1,
                    104,
                    v22,
                    v23,
                    v24,
                    v25,
                    v26,
                    a1,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33);
  v4 = a4;
  a4[81] = (uint32_t)(uintptr_t)(v40);
  *v40 = (uint32_t)(uintptr_t)(sub_FB95A0);
  if ( a2 != 0 )
  {
    result = a4[14];
    v6 = (uint32_t *)a4[16];
    if ( result > 0 )
    {
      v7 = 0;
      do
      {
        v43 = *(int (**)(uint32_t *, int, uint32_t, int))(v4[1] + 20);
        v37 = v4;
        v41 = (void *)jround_up(v6[8], v6[3]);
        v35 = v6[2];
        v34 = v6[7];
        v6 += 21;
        v8 = jround_up(v34, v35);
        retaddr = v41;
        result = v43(v37, 1, 0, v8);
        v40[v7 + 16] = result;
        v4 = v37;
        ++v7;
      }
      while ( v37[14] > v7 );
    }
  }
  else
  {
    v9 = (*(int (**)(uint32_t *, int, int))(a4[1] + 4))(a4, 1, 1280);
    v39 = v9;
    v10 = -((uint8_t)(((uint8_t)(uintptr_t)(v40) + 24) & 0xF) >> 2) & 3;
    if ( v10 != 0 )
    {
      v11 = v9;
      for ( i = 0; i < v10; v44 = 10 - i )
      {
        v40[i++ + 6] = v11;
        v11 += 128;
      }
    }
    else
    {
      v44 = 10;
      i = 0;
    }
    v42 = 10 - v10;
    v13 = (10 - v10) >> 2;
    v38 = 4 * v13;
    if ( 4 * v13 == 0 )
      goto LABEL_14;
g4_m128_lane<int64_t>(v15, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i), _mm_cvtsi32_si128(i + 1)), 0);
    v14 = (__m128i *)&v40[v10 + 6];
g4_m128_lane<int64_t>(v15, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i + 2), _mm_cvtsi32_si128(i + 3)), 0);
    v16 = 0;
    v17 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v39), 0);
    while ( 1 )
    {
      ++v16;
      v18 = _mm_add_epi32(v15, G4_BITCAST<__m128i>(xmmword_1C7C400));
      *v14++ = _mm_add_epi32(
                 _mm_unpacklo_epi32(
                   _mm_shuffle_epi32(_mm_mul_epu32(v15, G4_BITCAST<__m128i>(xmmword_1C7C760)), 8),
                   _mm_shuffle_epi32(
                     _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C760), 4), _mm_srli_si128(v15, 4)),
                     8)),
                 v17);
      if ( v16 >= v13 )
        break;
      v15 = v18;
    }
    i += v38;
    v44 -= v38;
    if ( v42 != v38 )
    {
LABEL_14:
      v19 = 0;
      v20 = v39 + (i << 7);
      v21 = &v40[i];
      do
      {
        v21[v19 + 6] = v20;
        ++v19;
        v20 += 128;
      }
      while ( v19 != v44 );
    }
    v40[16] = 0;
    return (int)(uintptr_t)(v40);
  }
  return result;
}



// ============================================================================
// Address:   0xfbaa00 (size: 606 bytes)
// Symbol:    jinit_color_converter
// Demangled: jinit_color_converter
// ============================================================================
int (*jinit_color_converter(int a1))(int a1, int a2, int a3, int a4, int a5)
{
  int (**v1)(int);
  int v2;
  int v4;
  int v5;
  int v6;

  v1 = (int (**)(int))(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 12);
  *(uint32_t *)(a1 + 332) = (uint32_t)(uintptr_t)(v1);
  *v1 = (int (*)(int))(&g4_noop_ret0);
  switch ( *(uint32_t *)(a1 + 40) )
  {
    case 1:
      if ( *(uint32_t *)(a1 + 36) != 1 )
        goto LABEL_14;
      break;
    case 2:
    case 3:
      if ( *(uint32_t *)(a1 + 36) != 3 )
        goto LABEL_14;
      break;
    case 4:
    case 5:
      if ( *(uint32_t *)(a1 + 36) != 4 )
        goto LABEL_14;
      break;
    default:
      if ( *(int *)(a1 + 36) <= 0 )
      {
LABEL_14:
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 9;
        (**(void (***)(int))a1)(a1);
      }
      break;
  }
  v2 = *(uint32_t *)(a1 + 60);
  switch ( v2 )
  {
    case 1:
      if ( *(uint32_t *)(a1 + 56) != 1 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 10;
        (**(void (***)(int))a1)(a1);
      }
      v4 = *(uint32_t *)(a1 + 40);
      switch ( v4 )
      {
        case 1:
        case 3:
          v1[1] = (int (*)(int))sub_FBA8C0;
          return (int (*)(int, int, int, int, int))sub_FBA8C0;
        case 2:
          *v1 = sub_FBA0D0;
          v1[1] = (int (*)(int))sub_FBA6B0;
          return (int (*)(int, int, int, int, int))sub_FBA6B0;
        default:
          goto LABEL_24;
      }
    case 2:
      if ( *(uint32_t *)(a1 + 56) != 3 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 10;
        (**(void (***)(int))a1)(a1);
      }
      if ( *(uint32_t *)(a1 + 40) == 2 )
        goto LABEL_6;
      goto LABEL_24;
    case 3:
      if ( *(uint32_t *)(a1 + 56) != 3 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 10;
        (**(void (***)(int))a1)(a1);
      }
      v5 = *(uint32_t *)(a1 + 40);
      if ( v5 == 2 )
      {
        *v1 = sub_FBA0D0;
        v1[1] = (int (*)(int))sub_FBA580;
        return (int (*)(int, int, int, int, int))sub_FBA580;
      }
      if ( v5 != 3 )
        goto LABEL_24;
      goto LABEL_6;
    case 4:
      if ( *(uint32_t *)(a1 + 56) != 4 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 10;
        (**(void (***)(int))a1)(a1);
      }
      if ( *(uint32_t *)(a1 + 40) == 4 )
        goto LABEL_6;
      goto LABEL_24;
    case 5:
      if ( *(uint32_t *)(a1 + 56) != 4 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 10;
        (**(void (***)(int))a1)(a1);
      }
      v6 = *(uint32_t *)(a1 + 40);
      if ( v6 == 4 )
      {
        *v1 = sub_FBA0D0;
        v1[1] = (int (*)(int))sub_FBA760;
        return (int (*)(int, int, int, int, int))sub_FBA760;
      }
      else if ( v6 == 5 )
      {
LABEL_6:
        v1[1] = (int (*)(int))sub_FBA940;
        return sub_FBA940;
      }
      else
      {
LABEL_24:
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 27;
        return (int (*)(int, int, int, int, int))(**(int (***)(int))a1)(a1);
      }
    default:
      if ( v2 != *(uint32_t *)(a1 + 40) || *(uint32_t *)(a1 + 56) != *(uint32_t *)(a1 + 36) )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 27;
        (**(void (***)(int))a1)(a1);
      }
      goto LABEL_6;
  }
}


// ============================================================================
// Address:   0xfbce30 (size: 239 bytes)
// Symbol:    jinit_forward_dct
// Demangled: jinit_forward_dct
// ============================================================================
int (**jinit_forward_dct(int a1))(int a1)
{
  int (**result)(int);
  int v2;
  int (**v3)(int);

  result = (int (**)(int))(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 48);
  *(uint32_t *)(a1 + 340) = (uint32_t)(uintptr_t)(result);
  *result = sub_FBAC60;
  v2 = *(uint32_t *)(a1 + 180);
  if ( v2 == 1 )
  {
    result[1] = (int (*)(int))sub_FBC0E0;
    result[2] = (int (*)(int))(uintptr_t)(jpeg_fdct_ifast);
  }
  else if ( v2 != 0 )
  {
    if ( v2 == 2 )
    {
      result[1] = (int (*)(int))sub_FBC540;
      result[7] = (int (*)(int))jpeg_fdct_float;
    }
    else
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 48;
      v3 = result;
      (**(void (***)(int))a1)(a1);
      result = v3;
    }
  }
  else
  {
    result[1] = (int (*)(int))sub_FBC0E0;
    result[2] = (int (*)(int))(uintptr_t)(jpeg_fdct_islow);
  }
  result[3] = nullptr;
  result[8] = nullptr;
  result[4] = nullptr;
  result[9] = nullptr;
  result[5] = nullptr;
  result[10] = nullptr;
  result[6] = nullptr;
  result[11] = nullptr;
  return result;
}
// ----------------------------------------------------------------------------
// Function: jpeg_make_c_derived_tbl  (binary VA: 0xfbded0)
// Original: jpeg_make_c_derived_tbl
// ----------------------------------------------------------------------------
int jpeg_make_c_derived_tbl(int (***a1)(uint32_t, uint32_t, uint32_t), char a2, unsigned int a3, int *a4)
{
  uint8_t v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  __m128i v10;
  __m128i v11;
  __m128i *v12;
  __m128i v13;
  unsigned int v14;
  uint8_t *v15;
  int v16;
  int v17;
  int v18;
  uint8_t *v19;
  uint8_t *v20;
  unsigned int v21;
  uint16_t *v22;
  int result;
  uint16_t *v24;
  int v25;
  int (***v26)(uint32_t, uint32_t, uint32_t);
  int v27;
  char v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int (***_g4_t_v32)(uint32_t, uint32_t, uint32_t);
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint8_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char _g4_t_v43;
  typedef uint8_t _g4_t_v44[1293];
  enum : size_t {
    _g4_s0 = 1424u,
    _g4_s1 = (0u + sizeof(_g4_t_v29)) > _g4_s0 ? (0u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v30)) > _g4_s1 ? (0u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v31)) > _g4_s2 ? (0u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v32)) > _g4_s3 ? (4u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v33)) > _g4_s4 ? (12u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v34)) > _g4_s5 ? (20u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v35)) > _g4_s6 ? (24u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v36)) > _g4_s7 ? (28u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v37)) > _g4_s8 ? (28u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v38)) > _g4_s9 ? (32u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v39)) > _g4_s10 ? (36u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v40)) > _g4_s11 ? (40u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v41)) > _g4_s12 ? (40u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v42)) > _g4_s13 ? (40u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v43)) > _g4_s14 ? (44u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (59u + sizeof(_g4_t_v44)) > _g4_s15 ? (59u + sizeof(_g4_t_v44)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 59u);

  if ( a3 > 3 )
  {
    (*a1)[5] = (int (*)(uint32_t, uint32_t, uint32_t))&word_32;
    (*a1)[6] = (int (*)(uint32_t, uint32_t, uint32_t))a3;
    ((void (*)(int (***)(uint32_t, uint32_t, uint32_t)))**a1)(a1);
  }
  if ( a2 != 0 )
  {
    v38 = (uint8_t *)(a1[a3 + 21]);
    if ( v38 != nullptr )
      goto LABEL_5;
LABEL_45:
    (*a1)[5] = (int (*)(uint32_t, uint32_t, uint32_t))&word_32;
    (*a1)[6] = (int (*)(uint32_t, uint32_t, uint32_t))a3;
    ((void (*)(int (***)(uint32_t, uint32_t, uint32_t)))**a1)(a1);
    v33 = *a4;
    if ( *a4 != 0 )
      goto LABEL_6;
LABEL_46:
    v33 = (*a1[1])((uint32_t)(uintptr_t)(a1), 1, 1280);
    *a4 = v33;
    goto LABEL_6;
  }
  v38 = (uint8_t *)(a1[a3 + 25]);
  if ( v38 == nullptr )
    goto LABEL_45;
LABEL_5:
  v33 = *a4;
  if ( *a4 == 0 )
    goto LABEL_46;
LABEL_6:
  v36 = 1;
  v39 = 0;
  do
  {
    v4 = v38[v36];
    v5 = v4;
    if ( v4 + v39 > 256 )
    {
      (*a1)[5] = (int (*)(uint32_t, uint32_t, uint32_t))byte_8;
      v30 = v4;
      ((void (*)(int (***)(uint32_t, uint32_t, uint32_t)))**a1)(a1);
      v4 = v30;
    }
    if ( v5 != 0 )
    {
      v34 = v5 - 1;
      v6 = v4;
      v40 = v4;
      if ( (-(int)(uintptr_t)(&v44[v39]) & 0xFu) <= v4 )
        v6 = -(int)(uintptr_t)(&v44[v39]) & 0xF;
      v7 = v34;
      v8 = v39;
      v9 = (uint8_t)v36;
      if ( v6 == 0 )
        goto LABEL_51;
      do
      {
        v44[v8++] = v36;
        --v7;
      }
      while ( v6 > v8 - v39 );
      v9 = (uint8_t)v36;
      if ( v40 != v6 )
      {
LABEL_51:
        v41 = v40 - v6;
        v35 = 16 * (v41 >> 4);
        if ( v35 == 0 )
          goto LABEL_19;
        v10 = _mm_cvtsi32_si128(v9);
        v11 = _mm_unpacklo_epi8(v10, v10);
        v12 = (__m128i *)&v44[v6 + v39];
        v13 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v11, v11), 0);
        v14 = 0;
        do
        {
          ++v14;
          *v12++ = v13;
        }
        while ( v14 < v41 >> 4 );
        v7 -= v35;
        v8 += v35;
        if ( v41 != v35 )
        {
LABEL_19:
          v15 = &v44[v8];
          do
          {
            --v7;
            *v15++ = v9;
          }
          while ( v7 != -1 );
        }
      }
      v39 += v34 + 1;
    }
    ++v36;
  }
  while ( v36 != 17 );
  v44[v39] = 0;
  if ( v44[0] != 0 )
  {
    v16 = v44[0];
    v17 = 0;
    v18 = 0;
    v37 = v44[0] + 1;
    v43 = v44[0];
    do
    {
      v42 = v16;
      if ( v16 == v37 - 1 )
      {
        v19 = &v44[v18 - v17];
        v20 = &v44[4 * (v18 - v17) + 257];
        do
        {
          *(uint32_t *)&v20[4 * v17] = v17;
          ++v17;
          ++v18;
          v43 = v19[v17];
          v16 = v43;
        }
        while ( v43 == v42 );
      }
      if ( v17 >= 1 << (v37 - 1) )
      {
        (*a1)[5] = (int (*)(uint32_t, uint32_t, uint32_t))byte_8;
        v31 = v16;
        ((void (*)(int (***)(uint32_t, uint32_t, uint32_t)))**a1)(a1);
        v16 = v31;
      }
      v17 *= 2;
      ++v37;
    }
    while ( v43 != 0 );
  }
  v21 = 256;
  v22 = (uint16_t *)(v33 + 1024);
  if ( ((v33 + 1024) & 1) != 0 )
  {
    LOWORD(v21) = 255;
    v22 = (uint16_t *)(v33 + 1025);
    *(uint8_t *)(v33 + 1024) = 0;
    if ( ((v33 + 1025) & 2) == 0 )
      goto LABEL_33;
  }
  else if ( (v33 & 2) == 0 )
  {
    goto LABEL_33;
  }
  *v22 = 0;
  v21 -= 2;
  ++v22;
LABEL_33:
  result = 0;
  memset(v22, 0, 4 * (v21 >> 2));
  v24 = &v22[2 * (v21 >> 2)];
  if ( (v21 & 2) != 0 )
    *v24++ = 0;
  if ( (v21 & 1) != 0 )
    *(uint8_t *)v24 = 0;
  if ( v39 != 0 )
  {
    v25 = 0;
    result = v33;
    v26 = a1;
    do
    {
      v27 = (uint8_t)v38[v25 + 17];
      if ( (a2 == 0 ? 255 : 15) < v27 || *(uint8_t *)(result + v27 + 1024) != 0 )
      {
        (*v26)[5] = (int (*)(uint32_t, uint32_t, uint32_t))byte_8;
        v29 = result;
        v32 = v26;
        ((void (*)(int (***)(uint32_t, uint32_t, uint32_t)))**v26)(v26);
        v26 = v32;
        result = v29;
      }
      *(uint32_t *)(result + 4 * v27) = *(uint32_t *)&v44[4 * v25 + 257];
      v28 = v44[v25++];
      *(uint8_t *)(result + v27 + 1024) = v28;
    }
    while ( v25 != v39 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_gen_optimal_table  (binary VA: 0xfbe590)
// Original: jpeg_gen_optimal_table
// ----------------------------------------------------------------------------
int jpeg_gen_optimal_table(int a1, int a2, int a3)
{
  uint32_t *v3;
  __m128i *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int i;
  char *v17;
  int j;
  char v19;
  int k;
  int v21;
  int m;
  int result;
  typedef uint32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int *_g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t _g4_t_v32[8];
  typedef char _g4_t_v33;
  typedef uint32_t _g4_t_v34[257];
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[262];
  enum : size_t {
    _g4_s0 = 2240u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v28)) > _g4_s4 ? (20u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v29)) > _g4_s5 ? (20u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v30)) > _g4_s6 ? (20u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v31)) > _g4_s7 ? (24u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v32)) > _g4_s8 ? (28u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v33)) > _g4_s9 ? (60u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v34)) > _g4_s10 ? (76u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (1104u + sizeof(_g4_t_v35)) > _g4_s11 ? (1104u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (1116u + sizeof(_g4_t_v36)) > _g4_s12 ? (1116u + sizeof(_g4_t_v36)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 1104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 1116u);

  memset(v32, 0, sizeof(v32));
  v3 = v34;
  v33 = 0;
  memset(v34, 0, sizeof(v34));
  v4 = (__m128i *)v36;
  do
    *v4++ = g4_m128_from<__m128i>(-1LL);
  while ( v4 != (__m128i *)&v36[256] );
  v36[256] = -1;
  *(uint32_t *)(a3 + 1024) = 1;
  while ( 1 )
  {
    v28 = 1000000000;
    v5 = 0;
    v26 = -1;
    do
    {
      v6 = *(uint32_t *)(a3 + 4 * v5);
      if ( v6 != 0 && v6 <= v28 )
      {
        v28 = *(uint32_t *)(a3 + 4 * v5);
        v26 = v5;
      }
      ++v5;
    }
    while ( v5 != 257 );
    LOWORD(v5) = 0;
    v27 = -1;
    v31 = 1000000000;
    do
    {
      v7 = *(uint32_t *)(a3 + 4 * v5);
      if ( v7 != 0 && v31 >= v7 )
      {
        if ( v5 == v26 )
          v7 = v31;
        v31 = v7;
        v8 = v27;
        if ( v5 != v26 )
          v8 = v5;
        v27 = v8;
      }
      ++v5;
    }
    while ( v5 != 257 );
    if ( v27 < 0 )
      break;
    v29 = (int *)(a3 + 4 * v27);
    v9 = *v29;
    ++v34[v26];
    *(uint32_t *)(a3 + 4 * v26) += v9;
    *v29 = 0;
    v10 = v36[v26];
    if ( v10 >= 0 )
    {
      while ( 1 )
      {
        v11 = v36[v10];
        ++v34[v10];
        if ( v11 < 0 )
          break;
        v10 = v11;
      }
    }
    else
    {
      v10 = v26;
    }
    v36[v10] = v27;
    v12 = v36[v27];
    ++v34[v27];
    for ( ; v12 >= 0; v12 = v36[v13] )
    {
      ++v34[v12];
      v13 = v36[v12];
      if ( v13 < 0 )
        break;
      ++v34[v13];
    }
  }
  v14 = (int *)(v34);
  do
  {
    v15 = *v14;
    if ( *v14 != 0 )
    {
      if ( v15 > 32 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 39;
        v25 = v15;
        v24 = v3;
        (**(void (***)(int))a1)(a1);
        v3 = v24;
        v15 = v25;
      }
      ++*((uint8_t *)v32 + v15);
    }
    ++v14;
  }
  while ( v14 != &v35 );
  for ( i = 30; i != 14; --i )
  {
    v17 = (char *)v32 + i + 2;
    v30 = *((uint8_t *)v32 + i + 2);
    if ( v30 != 0 )
    {
      do
      {
        for ( j = i; *((uint8_t *)v32 + j) == 0; --j )
          ;
        *v17 = v30 - 2;
        ++*((uint8_t *)v32 + i + 1);
        *((uint8_t *)v32 + j + 1) += 2;
        --*((uint8_t *)v32 + j);
        v30 = *v17;
      }
      while ( *v17 != 0 );
    }
  }
  v19 = v32[4];
  for ( k = 16; v19 == 0; v19 = *((uint8_t *)v32 + k) )
    --k;
  v21 = 0;
  *((uint8_t *)v32 + k) = v19 - 1;
  *(uint32_t *)a2 = v32[0];
  *(uint32_t *)(a2 + 4) = v32[1];
  *(uint32_t *)(a2 + 8) = v32[2];
  *(uint32_t *)(a2 + 12) = v32[3];
  *(uint8_t *)(a2 + 16) = v32[4];
  for ( m = 1; m != 33; ++m )
  {
    for ( result = 0; result != 256; ++result )
    {
      while ( v3[result] != m )
      {
        if ( ++result == 256 )
          goto LABEL_46;
      }
      *(uint8_t *)(a2 + v21++ + 17) = result;
    }
LABEL_46:
    ;
  }
  *(uint8_t *)(a2 + 273) = 0;
  return result;
}



// ============================================================================
// Address:   0xfbe9b0 (size: 178 bytes)
// Symbol:    jinit_huff_encoder
// Demangled: jinit_huff_encoder
// ============================================================================
int (**jinit_huff_encoder(int a1))(int a1, char a2)
{
  int (**result)(int, char);

  result = (int (**)(int, char))(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 108);
  *(uint32_t *)(a1 + 344) = (uint32_t)(uintptr_t)(result);
  result[15] = nullptr;
  *result = sub_FBE2B0;
  result[16] = nullptr;
  result[17] = nullptr;
  result[18] = nullptr;
  result[11] = nullptr;
  result[12] = nullptr;
  result[13] = nullptr;
  result[14] = nullptr;
  result[23] = nullptr;
  result[24] = nullptr;
  result[25] = nullptr;
  result[26] = nullptr;
  result[19] = nullptr;
  result[20] = nullptr;
  result[21] = nullptr;
  result[22] = nullptr;
  return result;
}


// ============================================================================
// Address:   0xfbfd40 (size: 714 bytes)
// Symbol:    jinit_d_coef_controller
// Demangled: jinit_d_coef_controller
// ============================================================================
int (*jinit_d_coef_controller(int a1, char a2))(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int i;
  unsigned int v10;
  __m128i *v11;
  __m128i v12; // xmm0
  unsigned int v13;
  __m128i v14; // xmm4
  __m128i v15; // xmm3
  int v16;
  unsigned int v17;
  unsigned int v18;
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
  void *retaddr;
  int v35;
  int v36;
  void *v37;
  unsigned int v38;
  int (*v39)(int, int, int, int);
  unsigned int v40;
  int v41;
  int v42;

  v41 = (**(int (***)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(a1 + 4))(
          a1,
          1,
          116,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
  *(uint32_t *)(a1 + 392) = v41;
  *(uint32_t *)(v41 + 112) = 0;
  *(uint32_t *)v41 = (uint32_t)(uintptr_t)(sub_FBF960);
  *(uint32_t *)(v41 + 8) = (uint32_t)(uintptr_t)(sub_FBEA70);
  if ( a2 != 0 )
  {
    v2 = *(uint32_t **)(a1 + 196);
    if ( *(int *)(a1 + 36) > 0 )
    {
      v3 = 0;
      do
      {
        v39 = *(int (**)(int, int, int, int))(*(uint32_t *)(a1 + 4) + 20);
        v35 = v3;
        v37 = (void *)jround_up(v2[8], v2[3]);
        v33 = v2[2];
        v32 = v2[7];
        v2 += 21;
        v4 = jround_up(v32, v33);
        retaddr = v37;
        *(uint32_t *)(v41 + 4 * v35 + 72) = v39(a1, 1, 1, v4);
        v3 = v35 + 1;
      }
      while ( *(uint32_t *)(a1 + 36) > v35 + 1 );
    }
    *(uint32_t *)(v41 + 4) = (uint32_t)(uintptr_t)(sub_FBEC80);
    *(uint32_t *)(v41 + 12) = (uint32_t)(uintptr_t)(sub_FBF750);
    *(uint32_t *)(v41 + 16) = v41 + 72;
    return (int (*)(uint32_t *, int))(v41 + 72);
  }
  else
  {
    v6 = (*(int (**)(int, int, int))(*(uint32_t *)(a1 + 4) + 4))(a1, 1, 1280);
    v38 = v6;
    v7 = -((uint8_t)(v41 & 0xF) >> 2) & 3;
    if ( v7 != 0 )
    {
      v8 = v6;
      for ( i = 0; i < v7; v42 = 10 - i )
      {
        *(uint32_t *)(v41 + 4 * i++ + 32) = v8;
        v8 += 128;
      }
    }
    else
    {
      v42 = 10;
      i = 0;
    }
    v40 = 10 - v7;
    v10 = (10 - v7) >> 2;
    v36 = 4 * v10;
    if ( 4 * v10 == 0 )
      goto LABEL_14;
g4_m128_lane<int64_t>(v12, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i), _mm_cvtsi32_si128(i + 1)), 0);
    v11 = (__m128i *)(v41 + 4 * v7 + 32);
g4_m128_lane<int64_t>(v12, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i + 2), _mm_cvtsi32_si128(i + 3)), 0);
    v13 = 0;
    v14 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v38), 0);
    while ( 1 )
    {
      ++v13;
      v15 = _mm_add_epi32(v12, G4_BITCAST<__m128i>(xmmword_1C7C400));
      *v11++ = _mm_add_epi32(
                 _mm_unpacklo_epi32(
                   _mm_shuffle_epi32(_mm_mul_epu32(v12, G4_BITCAST<__m128i>(xmmword_1C7C760)), 8),
                   _mm_shuffle_epi32(
                     _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C760), 4), _mm_srli_si128(v12, 4)),
                     8)),
                 v14);
      if ( v13 >= v10 )
        break;
      v12 = v15;
    }
    i += v36;
    v42 -= v36;
    if ( v40 != v36 )
    {
LABEL_14:
      v16 = 0;
      v17 = v38 + (i << 7);
      v18 = v41 + 4 * i;
      do
      {
        *(uint32_t *)(v18 + v16 + 32) = v17;
        v16 += 4;
        v17 += 128;
      }
      while ( v16 != 4 * v42 );
    }
    *(uint32_t *)(v41 + 16) = 0;
    *(uint32_t *)(v41 + 4) = (uint32_t)(uintptr_t)(sub_FBEC70);
    *(uint32_t *)(v41 + 12) = (uint32_t)(uintptr_t)(((int (*)(uint32_t *, int))sub_FBF9E0));
    return sub_FBF9E0;
  }
}
// ----------------------------------------------------------------------------
// Function: jinit_color_deconverter  (binary VA: 0xfc0440)
// Original: jinit_color_deconverter
// ----------------------------------------------------------------------------
const char * jinit_color_deconverter(int a1)
{
  int v1;
  uint32_t *v2;
  int v3;
  int v4;
  const char *result;
  int v6;
  uint32_t *v7;
  int v8;
  char *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v1 = a1;
  v2 = (uint32_t *)(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 24);
  *(uint32_t *)(a1 + 420) = (uint32_t)(uintptr_t)(v2);
  *v2 = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  v3 = *(uint32_t *)(a1 + 40);
  switch ( v3 )
  {
    case 1:
      if ( *(uint32_t *)(a1 + 36) != 1 )
        goto LABEL_18;
      goto LABEL_3;
    case 2:
    case 3:
      if ( *(uint32_t *)(a1 + 36) == 3 )
        goto LABEL_3;
      goto LABEL_18;
    case 4:
    case 5:
      if ( *(uint32_t *)(a1 + 36) != 4 )
        goto LABEL_18;
      goto LABEL_3;
    default:
      if ( *(int *)(a1 + 36) > 0 )
      {
LABEL_3:
        v4 = *(uint32_t *)(a1 + 44);
        if ( v4 != 2 )
          goto LABEL_4;
LABEL_19:
        *(uint32_t *)(a1 + 100) = 3;
        if ( v3 != 3 )
        {
          if ( v3 == 1 )
          {
            result = (const char *)sub_FC0200;
            v2[1] = (uint32_t)(uintptr_t)(sub_FC0200);
          }
          else
          {
            if ( v3 != 2 )
              goto LABEL_7;
            result = (const char *)((char *(*)(int, int, int, char *, int))sub_FC0150);
            v2[1] = (uint32_t)(uintptr_t)((char *(*)(int, int, int, char *, int))sub_FC0150);
          }
          goto LABEL_8;
        }
        v2[1] = (uint32_t)(uintptr_t)(sub_FC0010);
        v12 = *(uint32_t **)(a1 + 420);
        v12[2] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
        v12[3] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
        v12[4] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
        v12[5] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
        v13 = 2919680;
        v14 = (char *)((uint8_t *)(uintptr_t)0x5B6900u);
        v18 = -14831872;
        v20 = -11728000;
        result = nullptr;
        v21 = a1;
        do
        {
          v15 = v20 >> 16;
          v20 += 91881;
          *(uint32_t *)&result[v12[2]] = v15;
          v16 = v18;
          v18 += 116130;
          *(uint32_t *)&result[v12[3]] = v16 >> 16;
          *(uint32_t *)&result[v12[4]] = (uint32_t)(uintptr_t)(v14);
          v14 -= 46802;
          *(uint32_t *)&result[v12[5]] = v13;
          result += 4;
          v13 -= 22554;
        }
        while ( result != (const char *)(uintptr_t)(&stru_3F4[12]) );
LABEL_36:
        v1 = v21;
        goto LABEL_8;
      }
LABEL_18:
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 10;
      (**(void (***)(int))a1)(a1);
      v4 = *(uint32_t *)(a1 + 44);
      v3 = *(uint32_t *)(a1 + 40);
      if ( v4 == 2 )
        goto LABEL_19;
LABEL_4:
      if ( v4 == 4 )
      {
        *(uint32_t *)(a1 + 100) = 4;
        if ( v3 != 5 )
        {
          if ( v3 != 4 )
            goto LABEL_7;
          result = (const char *)((char *(*)(int, int, int, char *, int))sub_FC0150);
          v2[1] = (uint32_t)(uintptr_t)((char *(*)(int, int, int, char *, int))sub_FC0150);
          goto LABEL_8;
        }
        v2[1] = (uint32_t)(uintptr_t)(sub_FC0270);
        v7 = *(uint32_t **)(a1 + 420);
        v7[2] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
        v7[3] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
        v7[4] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
        v7[5] = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1024);
        v8 = 2919680;
        v9 = (char *)((uint8_t *)(uintptr_t)0x5B6900u);
        v17 = -14831872;
        v19 = -11728000;
        result = nullptr;
        v21 = a1;
        do
        {
          v10 = v19 >> 16;
          v19 += 91881;
          *(uint32_t *)&result[v7[2]] = v10;
          v11 = v17;
          v17 += 116130;
          *(uint32_t *)&result[v7[3]] = v11 >> 16;
          *(uint32_t *)&result[v7[4]] = (uint32_t)(uintptr_t)(v9);
          v9 -= 46802;
          *(uint32_t *)&result[v7[5]] = v8;
          result += 4;
          v8 -= 22554;
        }
        while ( result != (const char *)(uintptr_t)(&stru_3F4[12]) );
        goto LABEL_36;
      }
      if ( v4 == 1 )
      {
        *(uint32_t *)(a1 + 100) = 1;
        if ( v3 != 3 && v3 != 1 )
          goto LABEL_7;
        result = (const char *)sub_FC03F0;
        v2[1] = (uint32_t)(uintptr_t)(sub_FC03F0);
        if ( *(int *)(a1 + 36) > 1 )
        {
          v6 = 84;
          result = (const char *)((uint8_t *)(&dword_0 + 1));
          do
          {
            ++result;
            *(uint8_t *)(*(uint32_t *)(a1 + 196) + v6 + 48) = 0;
            v6 += 84;
          }
          while ( *(uint32_t *)(a1 + 36) > (int)(uintptr_t)(result) );
          if ( *(uint8_t *)(a1 + 74) == 0 )
            goto LABEL_9;
          goto LABEL_16;
        }
      }
      else
      {
        if ( v4 != v3 )
        {
LABEL_7:
          *(uint32_t *)(*(uint32_t *)a1 + 20) = 27;
          result = (const char *)(**(int (***)(int))a1)(a1);
          goto LABEL_8;
        }
        *(uint32_t *)(a1 + 100) = *(uint32_t *)(a1 + 36);
        result = (const char *)((char *(*)(int, int, int, char *, int))sub_FC0150);
        v2[1] = (uint32_t)(uintptr_t)((char *(*)(int, int, int, char *, int))sub_FC0150);
      }
LABEL_8:
      if ( *(uint8_t *)(v1 + 74) == 0 )
      {
LABEL_9:
        result = *(const char **)(v1 + 100);
        *(uint32_t *)(v1 + 104) = (uint32_t)(uintptr_t)(result);
        return result;
      }
LABEL_16:
      *(uint32_t *)(v1 + 104) = 1;
      return result;
  }
}



// ============================================================================
// Address:   0xfc1970 (size: 249 bytes)
// Symbol:    jinit_inverse_dct
// Demangled: jinit_inverse_dct
// ============================================================================
int (*jinit_inverse_dct(int a1))(uint32_t *a1)
{
  int (*result)(uint32_t *);
  int i;
  uint16_t *v3;
  int v4;
  uint16_t *v5;
  unsigned int v6;
  int v7;
  uint32_t *v8;

  v8 = (uint32_t *)(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 84);
  *(uint32_t *)(a1 + 412) = (uint32_t)(uintptr_t)(v8);
  result = sub_FC0820;
  *v8 = (uint32_t)(uintptr_t)(sub_FC0820);
  v7 = *(uint32_t *)(a1 + 196);
  if ( *(int *)(a1 + 36) > 0 )
  {
    for ( i = 0; *(uint32_t *)(a1 + 36) > i; ++i )
    {
      v4 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 256);
      v5 = (uint16_t *)v4;
      *(uint32_t *)(v7 + 80) = v4;
      v6 = 256;
      if ( (v4 & 1) != 0 )
      {
        v5 = (uint16_t *)(v4 + 1);
        *(uint8_t *)v4 = 0;
        LOWORD(v6) = 255;
        if ( ((v4 + 1) & 2) != 0 )
        {
LABEL_11:
          *v5 = 0;
          v6 -= 2;
          ++v5;
        }
      }
      else if ( (v4 & 2) != 0 )
      {
        goto LABEL_11;
      }
      memset(v5, 0, 4 * (v6 >> 2));
      v3 = &v5[2 * (v6 >> 2)];
      if ( (v6 & 2) != 0 )
        *v3++ = 0;
      if ( (v6 & 1) != 0 )
        *(uint8_t *)v3 = 0;
      result = (int (*)(uint32_t *))v8;
      v7 += 84;
      v8[i + 11] = -1;
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: jpeg_make_d_derived_tbl  (binary VA: 0xfc1a70)
// Original: jpeg_make_d_derived_tbl
// ----------------------------------------------------------------------------
int jpeg_make_d_derived_tbl(int (***a1)(uint32_t, uint32_t, uint32_t), char a2, unsigned int a3, int *a4)
{
  unsigned int v4;
  uint8_t *v5;
  int v6;
  uint8_t v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  __m128i v13;
  __m128i v14;
  __m128i *v15;
  __m128i v16;
  unsigned int v17;
  uint8_t *v18;
  uint8_t *v19;
  int v20;
  int v21;
  int v22;
  uint8_t *v23;
  uint8_t *v24;
  int v25;
  int v26;
  unsigned int v27;
  uint16_t *v28;
  uint16_t *v29;
  int result;
  uint8_t v31;
  int v32;
  uint8_t *v33;
  int *v34;
  bool v35;
  uint8_t *v36;
  int v37;
  typedef uint8_t _g4_t_v38;
  typedef uint8_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef char _g4_t_v55;
  typedef uint8_t _g4_t_v56[1293];
  enum : size_t {
    _g4_s0 = 1424u,
    _g4_s1 = (4u + sizeof(_g4_t_v38)) > _g4_s0 ? (4u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v39)) > _g4_s1 ? (4u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v40)) > _g4_s2 ? (4u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v41)) > _g4_s3 ? (16u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v42)) > _g4_s4 ? (16u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v43)) > _g4_s5 ? (20u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v44)) > _g4_s6 ? (24u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v45)) > _g4_s7 ? (28u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v46)) > _g4_s8 ? (32u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v47)) > _g4_s9 ? (36u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v48)) > _g4_s10 ? (36u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v49)) > _g4_s11 ? (36u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v50)) > _g4_s12 ? (40u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v51)) > _g4_s13 ? (40u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v52)) > _g4_s14 ? (40u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v53)) > _g4_s15 ? (44u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v54)) > _g4_s16 ? (44u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v55)) > _g4_s17 ? (44u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (59u + sizeof(_g4_t_v56)) > _g4_s18 ? (59u + sizeof(_g4_t_v56)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 59u);

  v4 = a3;
  if ( a3 > 3 )
  {
    (*a1)[5] = (int (*)(uint32_t, uint32_t, uint32_t))&word_32;
    (*a1)[6] = (int (*)(uint32_t, uint32_t, uint32_t))a3;
    ((void (*)(int (***)(uint32_t, uint32_t, uint32_t)))**a1)(a1);
    v4 = a3;
  }
  if ( a2 != 0 )
    v5 = (uint8_t *)(a1[v4 + 40]);
  else
    v5 = (uint8_t *)(a1[v4 + 44]);
  if ( v5 == nullptr )
  {
    (*a1)[5] = (int (*)(uint32_t, uint32_t, uint32_t))&word_32;
    (*a1)[6] = (int (*)(uint32_t, uint32_t, uint32_t))v4;
    ((void (*)(int (***)(uint32_t, uint32_t, uint32_t)))**a1)(a1);
  }
  v6 = *a4;
  v44 = *a4;
  if ( *a4 == 0 )
  {
    v6 = (*a1[1])((uint32_t)(uintptr_t)(a1), 1, 1424);
    v44 = v6;
    *a4 = v6;
  }
  *(uint32_t *)(v6 + 140) = (uint32_t)(uintptr_t)(v5);
  v50 = 1;
  v46 = 0;
  v41 = v5;
  do
  {
    v7 = v41[v50];
    v8 = v7;
    if ( v7 + v46 > 256 )
    {
      (*a1)[5] = (int (*)(uint32_t, uint32_t, uint32_t))byte_8;
      v38 = v7;
      ((void (*)(int (***)(uint32_t, uint32_t, uint32_t)))**a1)(a1);
      v7 = v38;
    }
    if ( v8 != 0 )
    {
      v9 = -(int)(uintptr_t)(&v56[v46]) & 0xF;
      v53 = v7;
      v47 = v8 - 1;
      v10 = v8 - 1;
      if ( v9 > v7 )
        v9 = v7;
      v11 = v46;
      v12 = (uint8_t)v50;
      if ( v9 == 0 )
        goto LABEL_67;
      do
      {
        v56[v11++] = v50;
        --v10;
      }
      while ( v9 > v11 - v46 );
      v12 = (uint8_t)v50;
      if ( v53 != v9 )
      {
LABEL_67:
        v54 = v53 - v9;
        v43 = 16 * (v54 >> 4);
        if ( v43 == 0 )
          goto LABEL_22;
        v13 = _mm_cvtsi32_si128(v12);
        v14 = _mm_unpacklo_epi8(v13, v13);
        v15 = (__m128i *)&v56[v46 + v9];
        v16 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v14, v14), 0);
        v17 = 0;
        do
        {
          ++v17;
          *v15++ = v16;
        }
        while ( v17 < v54 >> 4 );
        v10 -= v43;
        v11 += v43;
        if ( v54 != v43 )
        {
LABEL_22:
          v18 = &v56[v11];
          do
          {
            --v10;
            *v18++ = v12;
          }
          while ( v10 != -1 );
        }
      }
      v46 += v47 + 1;
    }
    ++v50;
  }
  while ( v50 != 17 );
  v19 = v41;
  v56[v46] = 0;
  v55 = v56[0];
  if ( v56[0] != 0 )
  {
    v20 = v56[0];
    v45 = 0;
    v48 = v56[0] + 1;
    v21 = 0;
    do
    {
      v51 = v20;
      if ( v20 == v48 - 1 )
      {
        v22 = v45;
        v23 = &v56[4 * (v45 - v21) + 257];
        v24 = &v56[v45 - v21];
        do
        {
          *(uint32_t *)&v23[4 * v21] = v21;
          ++v21;
          ++v22;
          v55 = v24[v21];
          v20 = v55;
        }
        while ( v55 == v51 );
        v45 = v22;
      }
      if ( v21 >= 1 << (v48 - 1) )
      {
        (*a1)[5] = (int (*)(uint32_t, uint32_t, uint32_t))byte_8;
        v40 = v20;
        ((void (*)(int (***)(uint32_t, uint32_t, uint32_t)))**a1)(a1);
        v20 = v40;
      }
      v21 *= 2;
      ++v48;
    }
    while ( v55 != 0 );
    v19 = v41;
  }
  v25 = 1;
  v26 = 0;
  do
  {
    while ( v19[v25] != 0 )
    {
      *(uint32_t *)(v44 + 4 * v25 + 72) = v26 - *(uint32_t *)&v56[4 * v26 + 257];
      v26 += (uint8_t)v19[v25];
      *(uint32_t *)(v44 + 4 * v25++) = *(uint32_t *)&v56[4 * v26 + 253];
      if ( v25 == 17 )
        goto LABEL_40;
    }
    *(uint32_t *)(v44 + 4 * v25++) = -1;
  }
  while ( v25 != 17 );
LABEL_40:
  v27 = 1024;
  v28 = (uint16_t *)(v44 + 144);
  *(uint32_t *)(v44 + 68) = 0xFFFFF;
  if ( ((v44 + 144) & 1) != 0 )
  {
    *(uint8_t *)(v44 + 144) = 0;
    v28 = (uint16_t *)(v44 + 145);
    LOWORD(v27) = 1023;
  }
  if ( ((uint8_t)(uintptr_t)(v28) & 2) != 0 )
  {
    *v28 = 0;
    v27 -= 2;
    ++v28;
  }
  memset(v28, 0, 4 * (v27 >> 2));
  v29 = &v28[2 * (v27 >> 2)];
  if ( (v27 & 2) != 0 )
    *v29++ = 0;
  if ( (v27 & 1) != 0 )
    *(uint8_t *)v29 = 0;
  v52 = 1;
  result = 0;
  do
  {
    if ( v19[v52] != 0 )
    {
      v49 = 1;
      v31 = v19[v52];
      do
      {
        if ( 1 << (8 - v52) > 0 )
        {
          v32 = *(uint32_t *)&v56[4 * result + 257] << (8 - v52);
          v33 = (uint8_t *)(v44 + v32 + 1168);
          v42 = 1 << (8 - v52);
          v34 = (int *)(v44 + 4 * v32 + 144);
          do
          {
            v35 = v42-- == 1;
            *v34++ = v52;
            *v33++ = v19[result + 17];
          }
          while ( !v35 );
          v31 = v19[v52];
        }
        ++v49;
        ++result;
      }
      while ( v31 >= v49 );
    }
    ++v52;
  }
  while ( v52 != 9 );
  if ( a2 != 0 )
  {
    result = v46;
    if ( v46 != 0 )
    {
      v36 = v19;
      v37 = 0;
      do
      {
        while ( v36[v37 + 17] <= 0xFu )
        {
          if ( ++v37 == v46 )
            return result;
        }
        ++v37;
        (*a1)[5] = (int (*)(uint32_t, uint32_t, uint32_t))byte_8;
        v39 = v36;
        result = ((int (*)(int (***)(uint32_t, uint32_t, uint32_t)))**a1)(a1);
        v36 = v39;
      }
      while ( v37 != v46 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_fill_bit_buffer  (binary VA: 0xfc2090)
// Original: jpeg_fill_bit_buffer
// ----------------------------------------------------------------------------
int jpeg_fill_bit_buffer(uint8_t **a1, int a2, int a3, int a4)
{
  uint8_t *v5;
  uint8_t *v6;
  uint8_t *v7;
  uint8_t *v8;
  uint8_t *v9;
  uint8_t *v10;
  int v11;
  uint8_t **v12;
  char v13;
  uint8_t **v15;
  int v16;
  uint8_t *v17;

  v5 = *a1;
  v6 = a1[1];
  v7 = a1[4];
  if ( *((uint32_t *)v7 + 95) != 0 )
  {
LABEL_11:
    if ( a3 < a4 )
    {
      if ( *(uint8_t *)(*((uint32_t *)v7 + 102) + 8) == 0 )
      {
        *(uint32_t *)(*(uint32_t *)v7 + 20) = 117;
        v17 = v7;
        G4_VCALL<void>(v7, 4, -1);
        *(uint8_t *)(*((uint32_t *)v17 + 102) + 8) = 1;
      }
      v13 = 25 - a3;
      a3 = 25;
      a2 <<= v13;
    }
  }
  else if ( a3 <= 24 )
  {
    v8 = *a1;
    v9 = a1[4];
    v10 = a1[1];
    do
    {
      if ( v10 == nullptr )
      {
        if ( (*(uint8_t (**)(uint8_t *))(*((uint32_t *)v9 + 6) + 12))(v9) == 0 )
          return 0;
        v12 = *((uint8_t ***)v9 + 6);
        v8 = *v12;
        v10 = v12[1];
      }
      v11 = *v8;
      --v10;
      ++v8;
      if ( v11 == 255 )
      {
        do
        {
          if ( v10 == nullptr )
          {
            if ( (*(uint8_t (**)(uint8_t *))(*((uint32_t *)v9 + 6) + 12))(v9) == 0 )
              return 0;
            v15 = *((uint8_t ***)v9 + 6);
            v8 = *v15;
            v10 = v15[1];
          }
          v16 = *v8;
          --v10;
          ++v8;
        }
        while ( v16 == 255 );
        if ( v16 != 0 )
        {
          v6 = v10;
          v7 = v9;
          v5 = v8;
          *((uint32_t *)v7 + 95) = v16;
          goto LABEL_11;
        }
      }
      a3 += 8;
      a2 = v11 | (a2 << 8);
    }
    while ( a3 <= 24 );
    v5 = v8;
    v6 = v10;
  }
  a1[3] = (uint8_t *)a3;
  *a1 = v5;
  a1[1] = v6;
  a1[2] = (uint8_t *)a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: jpeg_huff_decode  (binary VA: 0xfc21f0)
// Original: jpeg_huff_decode
// ----------------------------------------------------------------------------
int jpeg_huff_decode(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  char v12;

  v5 = a3;
  v6 = a5;
  v7 = a2;
  if ( a5 > a3 )
  {
    v12 = jpeg_fill_bit_buffer((uint8_t **)a1, a2, a3, a5);
    result = -1;
    if ( v12 == 0 )
      return result;
    v7 = *(uint32_t *)(a1 + 8);
    v5 = *(uint32_t *)(a1 + 12);
  }
  v8 = v5 - a5;
  v9 = ((1 << a5) - 1) & (v7 >> v8);
  if ( v9 > *(uint32_t *)(a4 + 4 * a5) )
  {
    v10 = v8;
    while ( 1 )
    {
      if ( v10 <= 0 )
      {
        if ( (uint8_t)jpeg_fill_bit_buffer((uint8_t **)a1, v7, v10, 1) == 0 )
          return -1;
        v7 = *(uint32_t *)(a1 + 8);
        v10 = *(uint32_t *)(a1 + 12);
      }
      --v10;
      ++v6;
      v9 = (2 * v9) | (v7 >> v10) & 1;
      if ( *(uint32_t *)(a4 + 4 * v6) >= v9 )
      {
        v8 = v10;
        break;
      }
    }
  }
  *(uint32_t *)(a1 + 8) = v7;
  *(uint32_t *)(a1 + 12) = v8;
  if ( v6 <= 16 )
    return *(uint8_t *)(*(uint32_t *)(a4 + 4 * v6 + 72) + *(uint32_t *)(a4 + 140) + v9 + 17);
  *(uint32_t *)(**(uint32_t **)(a1 + 16) + 20) = 118;
  (*(void (**)(uint32_t, int))(**(uint32_t **)(a1 + 16) + 4))(*(uint32_t *)(a1 + 16), -1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: jinit_huff_decoder  (binary VA: 0xfc2960)
// Original: jinit_huff_decoder
// ----------------------------------------------------------------------------
uint32_t * jinit_huff_decoder(int a1)
{
  uint32_t *result;

  result = (uint32_t *)(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 172);
  *(uint32_t *)(a1 + 408) = (uint32_t)(uintptr_t)(result);
  result[14] = 0;
  *result = (uint32_t)(uintptr_t)(sub_FC1F00);
  result[15] = 0;
  result[16] = 0;
  result[17] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  result[13] = 0;
  result[1] = (uint32_t)(uintptr_t)(sub_FC2330);
  return result;
}

// ----------------------------------------------------------------------------
// Function: jinit_d_main_controller  (binary VA: 0xfc32d0)
// Original: jinit_d_main_controller
// ----------------------------------------------------------------------------
int jinit_d_main_controller(int a1, char a2)
{
  int v2;
  int v3;
  int result;
  uint32_t *v5;
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
  uint32_t *v20;
  int v21;

  v20 = (uint32_t *)(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 80);
  *(uint32_t *)(a1 + 388) = (uint32_t)(uintptr_t)(v20);
  *v20 = (uint32_t)(uintptr_t)(sub_FC2EB0);
  if ( a2 != 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 4;
    (**(void (***)(int))a1)(a1);
  }
  if ( *(uint8_t *)(*(uint32_t *)(a1 + 416) + 8) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 280);
    if ( v2 <= 1 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 47;
      (**(void (***)(int))a1)(a1);
      v2 = *(uint32_t *)(a1 + 280);
    }
    v14 = *(uint32_t *)(a1 + 388);
    v3 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 8 * *(uint32_t *)(a1 + 36));
    *(uint32_t *)(v14 + 56) = v3;
    *(uint32_t *)(v14 + 60) = v3 + 4 * *(uint32_t *)(a1 + 36);
    result = *(uint32_t *)(a1 + 36);
    v5 = *(uint32_t **)(a1 + 196);
    if ( result > 0 )
    {
      v18 = v2 + 4;
      v6 = *(uint32_t *)(a1 + 196);
      v21 = 2 * (v2 + 4);
      v7 = 0;
      v8 = v14;
      do
      {
        v15 = v6;
        v16 = *(uint32_t *)(v6 + 36) * *(uint32_t *)(v6 + 12) / *(uint32_t *)(a1 + 280);
        v9 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 4 * v21 * v16) + 4 * v16;
        *(uint32_t *)(*(uint32_t *)(v8 + 56) + 4 * v7) = v9;
        *(uint32_t *)(*(uint32_t *)(v8 + 60) + 4 * v7++) = v9 + 4 * v18 * v16;
        result = *(uint32_t *)(a1 + 36);
        v6 = v15 + 84;
      }
      while ( v7 < result );
      v5 = *(uint32_t **)(a1 + 196);
    }
    v17 = *(uint32_t *)(a1 + 280);
    v19 = v17 + 2;
  }
  else
  {
    v5 = *(uint32_t **)(a1 + 196);
    v19 = *(uint32_t *)(a1 + 280);
    result = *(uint32_t *)(a1 + 36);
    v17 = v19;
  }
  if ( result > 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = v5[9];
      v13 = v19 * (v11 * v5[3] / v17);
      v12 = v5[7] * v11;
      v5 += 21;
      result = (*(int (**)(int, int, int, int))(*(uint32_t *)(a1 + 4) + 8))(a1, 1, v12, v13);
      v20[v10++ + 2] = result;
      if ( *(uint32_t *)(a1 + 36) <= v10 )
        break;
      v17 = *(uint32_t *)(a1 + 280);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_fdct_float  (binary VA: 0xfc34e0)
// Original: jpeg_fdct_float
// ----------------------------------------------------------------------------
float * jpeg_fdct_float(int a1)
{
  __m128 v1;
  __m128 v2;
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  __m128 v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  __m128 v25;
  __m128 v26;
  __m128 v27;
  __m128 v28;
  __m128 v29;
  __m128 v30;
  __m128 v31;
  __m128 v32;
  __m128 v33;
  __m128 v34;
  __m128 v35;
  __m128 v36;
  __m128 v37;
  __m128 v38;
  __m128 v39;
  float *result;
  __m128 v41;
  __m128 v42;
  __m128 v43;
  unsigned int v44;
  __m128 v45;
  __m128 v46;
  __m128 v47;
  __m128 v48;
  __m128 v49;
  __m128 v50;
  __m128 v51;
  __m128 v52;
  __m128 v53;
  __m128 v54;
  __m128 v55;
  __m128 v56;
  __m128 v57;
  __m128 v58;
  __m128 v59;
  __m128 v60;
  __m128 v61;
  __m128 v62;
  __m128 v63;
  __m128 v64;
  __m128 v65;
  __m128 v66;
  __m128 v67;
  __m128 v68;
  __m128 v69;
  __m128 v70;
  __m128 v71;
  __m128 v72;
  __m128 v73;
  __m128 v74;
  __m128 v75;
  __m128 v76;
  __m128 v77;
  __m128 v78;
  __m128 v79;
  __m128 v80;
  __m128 v81;
  __m128 v82;
  __m128 v83;
  __m128 v84;
  __m128 v85;
  __m128 v86;
  __m128 v87;
  __m128 v88;
  __m128 v89;
  __m128 v90;
  __m128 v91;
  __m128 v92;
  __m128 v93;
  __m128 v94;
  __m128 v95;
  __m128 v96;
  __m128 v97;
  __m128 v98;
  __m128 v99;
  __m128 v100;
  __m128 v101;
  __m128 v102;
  __m128 v103;
  __m128 v104;
  __m128 v105;
  __m128 v106;
  __m128 v107;
  __m128 v108;
  __m128 v109;
  __m128 v110;
  __m128 v111;
  __m128 v112;
  __m128 v113;
  __m128 v114;
  __m128 v115;
  __m128 v116;
  __m128 v117;
  __m128 v118;
  __m128 v119;
  __m128 v120;
  __m128 v121;
  __m128 v122;
  __m128 v123;
  __m128 v124;
  __m128 v125;
  __m128 v126;
  __m128 v127;
  __m128 v128;
  __m128 v129;
  __m128 v130;
  __m128 v131;
  __m128 v132;
  __m128 v133;
  __m128 v134;
  __m128 v135;
  __m128 v136;
  __m128 v137;
  __m128 v138;
  __m128 v139;
  __m128 v140;
  __m128 v141;
  __m128 v142;
  __m128 v143;
  __m128 v144;
  __m128 v145;
  __m128 v146;
  __m128 v147;
  __m128 v148;
  __m128 v149;
  __m128 v150;
  __m128 v151;
  __m128 v152;
  __m128 v153;
  __m128 v154;
  __m128 v155;
  __m128 v156;
  __m128 v157;
  __m128 v158;
  __m128 v159;
  __m128 v160;
  __m128 v161;
  __m128 v162;
  __m128 v163;
  __m128 v164;
  __m128 v165;
  __m128 v166;
  __m128 v167;
  int v168;
  float v169; // xmm1_4
  float v170; // xmm5_4
  float v171; // xmm0_4
  float v172; // xmm2_4
  float v173; // xmm3_4
  float v174; // xmm2_4
  float v175; // xmm4_4
  float v176; // xmm2_4
  float v177; // xmm5_4
  float v178; // xmm6_4
  float v179; // xmm1_4
  float v180; // xmm4_4
  float v181; // xmm3_4
  float v182; // xmm1_4
  float v183; // xmm4_4
  float v184; // xmm3_4
  float v185; // xmm2_4
  float v186; // xmm1_4
  float v187; // xmm3_4
  float v188; // xmm4_4
  float v189; // xmm1_4
  float v190; // xmm0_4
  int v191;
  int v192;
  int v193;
  int v194;
  __m128 v195;
  __m128 v196;
  __m128 v197;
  __m128 v198;
  __m128 v199;
  __m128 v200;
  __m128 v201;
  __m128 v202;
  __m128 v203;
  __m128 v204;
  __m128 v205;
  __m128 v206;
  __m128 v207;
  __m128 v208;
  __m128 v209;
  __m128 v210;
  __m128 v211;
  __m128 v212;
  int32_t v213;
  __m128 v214;
  __m128 v215;
  __m128 v216;
  int v217; // eoff
  __m128 v218;
  __m128 v219;
  __m128 v220;
  __m128 v221;
  __m128 v222;
  __m128 v223;
  __m128 v224;
  __m128 v225;
  __m128 v226;
  __m128 v227;
  __m128 v228;
  __m128 v229;
  int v230; // eoff
  int v231;
  float v232; // xmm1_4
  float v233; // xmm5_4
  float v234; // xmm0_4
  float v235; // xmm2_4
  float v236; // xmm3_4
  float v237; // xmm2_4
  float v238; // xmm4_4
  float v239; // xmm2_4
  float v240; // xmm6_4
  float v241; // xmm1_4
  float v242; // xmm4_4
  float v243; // xmm3_4
  float v244; // xmm1_4
  float v245; // xmm4_4
  float v246; // xmm3_4
  float v247; // xmm2_4
  float v248; // xmm1_4
  float v249; // xmm3_4
  float v250; // xmm4_4
  float v251; // xmm1_4
  float v252; // xmm0_4
  typedef int _g4_t_v253;
  typedef float *_g4_t_v254;
  typedef int _g4_t_v255;
  typedef int _g4_t_v256;
  typedef unsigned int _g4_t_v257;
  typedef unsigned int _g4_t_v258;
  typedef int _g4_t_v259;
  typedef __m128 _g4_t_v260;
  typedef __m128 _g4_t_v261;
  typedef __m128 _g4_t_v262;
  typedef __m128 _g4_t_v263;
  typedef __m128 _g4_t_v264;
  typedef __m128 _g4_t_v265;
  typedef __m128 _g4_t_v266;
  typedef __m128 _g4_t_v267;
  typedef __m128 _g4_t_v268;
  typedef __m128 _g4_t_v269;
  typedef float _g4_t_v270;
  typedef unsigned int _g4_t_v271;
  typedef float _g4_t_v272;
  typedef __m128 _g4_t_v273;
  typedef __m128 _g4_t_v274;
  typedef __m128 _g4_t_v275;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v253)) > _g4_s0 ? (4u + sizeof(_g4_t_v253)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v254)) > _g4_s1 ? (8u + sizeof(_g4_t_v254)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v255)) > _g4_s2 ? (12u + sizeof(_g4_t_v255)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v256)) > _g4_s3 ? (16u + sizeof(_g4_t_v256)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v257)) > _g4_s4 ? (20u + sizeof(_g4_t_v257)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v258)) > _g4_s5 ? (24u + sizeof(_g4_t_v258)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v259)) > _g4_s6 ? (28u + sizeof(_g4_t_v259)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v260)) > _g4_s7 ? (32u + sizeof(_g4_t_v260)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v261)) > _g4_s8 ? (48u + sizeof(_g4_t_v261)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v262)) > _g4_s9 ? (64u + sizeof(_g4_t_v262)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v263)) > _g4_s10 ? (64u + sizeof(_g4_t_v263)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v264)) > _g4_s11 ? (64u + sizeof(_g4_t_v264)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v265)) > _g4_s12 ? (80u + sizeof(_g4_t_v265)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v266)) > _g4_s13 ? (80u + sizeof(_g4_t_v266)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v267)) > _g4_s14 ? (80u + sizeof(_g4_t_v267)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v268)) > _g4_s15 ? (96u + sizeof(_g4_t_v268)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v269)) > _g4_s16 ? (96u + sizeof(_g4_t_v269)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v270)) > _g4_s17 ? (96u + sizeof(_g4_t_v270)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v271)) > _g4_s18 ? (96u + sizeof(_g4_t_v271)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v272)) > _g4_s19 ? (96u + sizeof(_g4_t_v272)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v273)) > _g4_s20 ? (112u + sizeof(_g4_t_v273)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v274)) > _g4_s21 ? (128u + sizeof(_g4_t_v274)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v275)) > _g4_s22 ? (144u + sizeof(_g4_t_v275)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 4u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 8u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 12u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 16u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 20u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 24u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 28u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 32u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 48u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 64u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 64u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 64u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 80u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 80u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 80u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 96u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 96u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 96u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 96u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 96u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 112u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 128u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 144u);

g4_m128_raw(v273) = 0;
  _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v273), _mm_loadl_ps((const double *)(a1 + 112)));
  v1 = _mm_loadh_ps((const double *)(a1 + 24));
  v2 = _mm_loadh_ps((const double *)(a1 + 8));
  v3 = _mm_loadh_ps((const double *)(a1 + 40));
  _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v273, 1), _mm_loadl_ps((const double *)(a1 + 120)));
  v4 = _mm_loadh_ps((const double *)(a1 + 56));
  v5 = _mm_loadh_ps((const double *)(a1 + 72));
  v275 = _mm_shuffle_ps(v2, v1, 221);
  v6 = _mm_shuffle_ps(v2, v1, 136);
  v7 = _mm_loadh_ps((const double *)(a1 + 88));
  v8 = _mm_shuffle_ps(v3, v4, 136);
  v274 = v6;
  v9 = _mm_shuffle_ps(v3, v4, 221);
  v10 = _mm_loadh_ps((const double *)(a1 + 104));
  v11 = _mm_shuffle_ps(v5, v7, 136);
  v12 = _mm_shuffle_ps(v5, v7, 221);
  v13 = v6;
  v14 = _mm_shuffle_ps(v10, v273, 136);
  v15 = _mm_shuffle_ps(v6, v8, 136);
  v16 = _mm_shuffle_ps(v13, v8, 221);
  v17 = _mm_shuffle_ps(v11, v14, 136);
  v18 = _mm_shuffle_ps(v10, v273, 221);
  v274 = _mm_shuffle_ps(v11, v14, 221);
  v19 = _mm_shuffle_ps(v275, v9, 136);
  v20 = _mm_shuffle_ps(v275, v9, 221);
  v21 = v12;
  v22 = _mm_shuffle_ps(v12, v18, 221);
  v23 = _mm_shuffle_ps(v21, v18, 136);
  v24 = _mm_shuffle_ps(v15, v17, 136);
  v273 = _mm_shuffle_ps(v15, v17, 221);
  v25 = _mm_shuffle_ps(v20, v22, 136);
  v26 = _mm_shuffle_ps(v20, v22, 221);
  v27 = v19;
  v28 = _mm_shuffle_ps(v19, v23, 221);
  v275 = v25;
  v29 = _mm_shuffle_ps(v27, v23, 136);
  v30 = v16;
  v31 = _mm_shuffle_ps(v16, v274, 221);
  v32 = _mm_shuffle_ps(v30, v274, 136);
  v33 = _mm_add_ps(v26, v24);
  v34 = _mm_sub_ps(v24, v26);
  v35 = _mm_add_ps(v275, v273);
  v36 = _mm_add_ps(v31, v29);
  v37 = _mm_sub_ps(v29, v31);
  v38 = _mm_add_ps(v32, v28);
  v39 = _mm_sub_ps(v32, v28);
  result = (float *)a1;
  v41 = _mm_add_ps(v35, v33);
  v42 = _mm_sub_ps(v33, v35);
  v262 = v37;
  v43 = _mm_add_ps(v38, v36);
  v44 = -((uint8_t)(a1 & 0xF) >> 2) & 3;
  v274 = _mm_add_ps(v43, v41);
  v268 = _mm_sub_ps(v41, v43);
  v45 = _mm_mul_ps(_mm_add_ps(v37, v39), G4_BITCAST<__m128>(xmmword_1C7C840));
  v46 = _mm_mul_ps(_mm_add_ps(_mm_sub_ps(v42, v38), v36), G4_BITCAST<__m128>(xmmword_1C7C840));
  v47 = _mm_sub_ps(v34, v45);
  v48 = _mm_add_ps(v46, v42);
  v49 = _mm_sub_ps(v42, v46);
  v50 = _mm_add_ps(_mm_sub_ps(v39, v273), v275);
  v51 = _mm_mul_ps(v50, G4_BITCAST<__m128>(xmmword_1C7C860));
  v265 = v49;
  v52 = _mm_add_ps(v262, v34);
  v53 = _mm_mul_ps(_mm_sub_ps(v50, v52), G4_BITCAST<__m128>(xmmword_1C7C850));
  v54 = _mm_add_ps(v51, v53);
  v55 = _mm_add_ps(_mm_mul_ps(v52, G4_BITCAST<__m128>(xmmword_1C7C870)), v53);
  v56 = _mm_add_ps(v45, v34);
  v57 = _mm_add_ps(v54, v47);
  v58 = _mm_add_ps(v55, v56);
  v59 = _mm_sub_ps(v47, v54);
  v60 = _mm_sub_ps(v56, v55);
  v61 = _mm_unpacklo_ps(v274, v268);
  v62 = _mm_unpackhi_ps(v274, v268);
  v273 = _mm_unpackhi_ps(v58, v57);
  v63 = _mm_unpacklo_ps(v58, v57);
  v64 = _mm_unpacklo_ps(v48, v265);
  v65 = _mm_unpacklo_ps(v59, v60);
  v66 = _mm_unpackhi_ps(v59, v60);
  v67 = _mm_unpackhi_ps(v48, v265);
  v68 = _mm_unpacklo_ps(v61, v64);
  v69 = _mm_unpackhi_ps(v61, v64);
  v70 = _mm_unpacklo_ps(v62, v67);
  v71 = _mm_unpackhi_ps(v62, v67);
  v72 = v63;
  v73 = _mm_unpackhi_ps(v63, v65);
  v74 = _mm_unpacklo_ps(v72, v65);
  v275 = _mm_unpacklo_ps(v273, v66);
  v75 = _mm_unpackhi_ps(v273, v66);
  v76 = _mm_unpacklo_ps(v68, v74);
  v77 = _mm_unpackhi_ps(v68, v74);
  v78 = v69;
  v79 = _mm_unpackhi_ps(v69, v73);
  v80 = _mm_unpacklo_ps(v78, v73);
  v81 = v70;
  v273 = v75;
  v82 = v71;
  _mm_storel_ps((double *)a1, v76);
  _mm_storeh_ps((double *)(a1 + 8), v76);
  _mm_storel_ps((double *)(a1 + 16), v77);
  _mm_storeh_ps((double *)(a1 + 24), v77);
  _mm_storel_ps((double *)(a1 + 32), v80);
  v83 = _mm_unpackhi_ps(v70, v275);
  v84 = _mm_unpackhi_ps(v71, v273);
  v85 = _mm_unpacklo_ps(v82, v273);
  _mm_storel_ps((double *)(a1 + 80), v83);
  v86 = _mm_unpacklo_ps(v81, v275);
  _mm_storeh_ps((double *)(a1 + 88), v83);
g4_m128_raw(v273) = 0;
  v87 = _mm_loadh_ps((const double *)(a1 + 136));
  _mm_storeh_ps((double *)(a1 + 40), v80);
  _mm_storel_ps((double *)(a1 + 112), v84);
  _mm_storeh_ps((double *)(a1 + 120), v84);
  v88 = _mm_loadh_ps((const double *)(a1 + 152));
  _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v273), _mm_loadl_ps((const double *)(a1 + 208)));
  _mm_storel_ps((double *)(a1 + 48), v79);
  v89 = _mm_loadh_ps((const double *)(a1 + 168));
  _mm_storeh_ps((double *)(a1 + 56), v79);
  _mm_storel_ps((double *)(a1 + 96), v85);
  _mm_storeh_ps((double *)(a1 + 104), v85);
  v90 = _mm_loadh_ps((const double *)(a1 + 248));
  v91 = _mm_loadl_ps((const double *)(a1 + 216));
  _mm_storel_ps((double *)(a1 + 64), v86);
  _mm_storeh_ps((double *)(a1 + 72), v86);
  v92 = _mm_loadh_ps((const double *)(a1 + 184));
  _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v273, 1), v91);
  v93 = _mm_shuffle_ps(v87, v88, 136);
  v94 = _mm_shuffle_ps(v87, v88, 221);
  v95 = _mm_loadh_ps((const double *)(a1 + 200));
  v96 = _mm_shuffle_ps(v89, v92, 136);
  v97 = _mm_loadh_ps((const double *)(a1 + 232));
  v275 = v93;
  v274 = v94;
  v98 = _mm_shuffle_ps(v89, v92, 221);
  v99 = _mm_shuffle_ps(v93, v96, 136);
  v100 = _mm_shuffle_ps(v95, v273, 136);
  v101 = _mm_shuffle_ps(v95, v273, 221);
  v102 = _mm_shuffle_ps(v97, v90, 136);
  v103 = _mm_shuffle_ps(v97, v90, 221);
  v273 = v99;
  v104 = _mm_shuffle_ps(v275, v96, 221);
  v275 = _mm_shuffle_ps(v100, v102, 221);
  v105 = _mm_shuffle_ps(v100, v102, 136);
  v106 = _mm_shuffle_ps(v101, v103, 136);
  v107 = _mm_shuffle_ps(v101, v103, 221);
  v108 = _mm_shuffle_ps(v273, v105, 221);
  v109 = _mm_shuffle_ps(v273, v105, 136);
  v110 = _mm_shuffle_ps(v274, v98, 136);
  v273 = v108;
  v111 = _mm_shuffle_ps(v274, v98, 221);
  v112 = _mm_shuffle_ps(v110, v106, 221);
  v113 = _mm_shuffle_ps(v111, v107, 221);
  v114 = _mm_shuffle_ps(v110, v106, 136);
  v115 = v104;
  v116 = _mm_shuffle_ps(v104, v275, 221);
  v117 = _mm_shuffle_ps(v115, v275, 136);
  v275 = _mm_shuffle_ps(v111, v107, 136);
  v118 = _mm_add_ps(v113, v109);
  v119 = _mm_sub_ps(v109, v113);
  v120 = _mm_add_ps(v116, v114);
  v121 = _mm_add_ps(v275, v273);
  v122 = _mm_sub_ps(v114, v116);
  v123 = _mm_add_ps(v117, v112);
  v124 = _mm_sub_ps(v117, v112);
  v125 = _mm_add_ps(v121, v118);
  v263 = v122;
  v126 = _mm_sub_ps(v118, v121);
  v127 = _mm_add_ps(v123, v120);
  v274 = _mm_add_ps(v127, v125);
  v269 = _mm_sub_ps(v125, v127);
  v128 = _mm_mul_ps(_mm_add_ps(v122, v124), G4_BITCAST<__m128>(xmmword_1C7C840));
  v129 = _mm_mul_ps(_mm_add_ps(_mm_sub_ps(v126, v123), v120), G4_BITCAST<__m128>(xmmword_1C7C840));
  v130 = _mm_sub_ps(v119, v128);
  v131 = _mm_add_ps(v129, v126);
  v132 = _mm_sub_ps(v126, v129);
  v133 = _mm_add_ps(_mm_sub_ps(v124, v273), v275);
  v134 = _mm_mul_ps(v133, G4_BITCAST<__m128>(xmmword_1C7C860));
  v266 = v132;
  v135 = _mm_add_ps(v263, v119);
  v136 = _mm_mul_ps(_mm_sub_ps(v133, v135), G4_BITCAST<__m128>(xmmword_1C7C850));
  v137 = _mm_add_ps(v134, v136);
  v138 = _mm_add_ps(_mm_mul_ps(v135, G4_BITCAST<__m128>(xmmword_1C7C870)), v136);
  v139 = _mm_add_ps(v128, v119);
  v140 = _mm_add_ps(v137, v130);
  v141 = _mm_add_ps(v138, v139);
  v142 = _mm_sub_ps(v130, v137);
  v143 = _mm_sub_ps(v139, v138);
  v144 = _mm_unpacklo_ps(v274, v269);
  v145 = _mm_unpackhi_ps(v274, v269);
  v273 = _mm_unpackhi_ps(v141, v140);
  v146 = _mm_unpacklo_ps(v141, v140);
  v147 = _mm_unpacklo_ps(v142, v143);
  v148 = _mm_unpackhi_ps(v142, v143);
  v149 = _mm_unpacklo_ps(v131, v266);
  v150 = _mm_unpackhi_ps(v131, v266);
  v151 = _mm_unpacklo_ps(v144, v149);
  v152 = _mm_unpackhi_ps(v144, v149);
  v153 = _mm_unpacklo_ps(v145, v150);
  v154 = _mm_unpackhi_ps(v145, v150);
  v155 = v146;
  v156 = _mm_unpackhi_ps(v146, v147);
  v157 = _mm_unpacklo_ps(v155, v147);
  v275 = _mm_unpacklo_ps(v273, v148);
  v158 = _mm_unpackhi_ps(v273, v148);
  v159 = _mm_unpacklo_ps(v151, v157);
  v160 = _mm_unpackhi_ps(v151, v157);
  v161 = v152;
  v162 = _mm_unpackhi_ps(v152, v156);
  v273 = v158;
  v163 = _mm_unpacklo_ps(v161, v156);
  v164 = _mm_unpacklo_ps(v153, v275);
  v165 = _mm_unpackhi_ps(v153, v275);
  v166 = _mm_unpacklo_ps(v154, v158);
  v167 = _mm_unpackhi_ps(v154, v273);
  _mm_storel_ps((double *)(a1 + 128), v159);
  _mm_storeh_ps((double *)(a1 + 136), v159);
  _mm_storel_ps((double *)(a1 + 144), v160);
  _mm_storeh_ps((double *)(a1 + 152), v160);
  _mm_storel_ps((double *)(a1 + 160), v163);
  _mm_storeh_ps((double *)(a1 + 168), v163);
  _mm_storel_ps((double *)(a1 + 176), v162);
  _mm_storeh_ps((double *)(a1 + 184), v162);
  _mm_storel_ps((double *)(a1 + 192), v164);
  _mm_storeh_ps((double *)(a1 + 200), v164);
  _mm_storel_ps((double *)(a1 + 208), v165);
  _mm_storeh_ps((double *)(a1 + 216), v165);
  _mm_storel_ps((double *)(a1 + 224), v166);
  _mm_storeh_ps((double *)(a1 + 232), v166);
  _mm_storel_ps((double *)(a1 + 240), v167);
  _mm_storeh_ps((double *)(a1 + 248), v167);
  if ( v44 != 0 )
  {
    v168 = 8;
g4_m128_lane<int32_t>(v273, 0) = 1060439283;
    while ( 1 )
    {
      v169 = result[56] + *result;
      v170 = result[40];
      v171 = *result - result[56];
      v172 = result[8];
      v173 = result[48] + v172;
      v270 = result[32];
g4_m128_lane<float>(v275, 0) = v172 - result[48];
      v174 = result[16];
      v175 = v170 + v174;
      v176 = v174 - v170;
      v177 = result[24] + v270;
      v178 = v177 + v169;
      v179 = v169 - v177;
      *result = (float)(v175 + v173) + v178;
      result[32] = v178 - (float)(v175 + v173);
      v180 = (float)((float)(v179 - v175) + v173) *g4_m128_lane<float>(v273, 0);
      v181 = v180 + v179;
      v182 = v179 - v180;
      v183 =g4_m128_lane<float>(v275, 0) + v171;
      result[16] = v181;
      result[48] = v182;
      v184 = (float)(v176 - v270) + result[24];
      v185 = (float)(v176 +g4_m128_lane<float>(v275, 0)) *g4_m128_lane<float>(v273, 0);
      v186 = (float)(v184 - v183) * 0.38268343f;
      v187 = (float)(v184 * 0.5411961f) + v186;
      v188 = (float)(v183 * 1.306563f) + v186;
      v189 = v185 + v171;
      v190 = v171 - v185;
      result[40] = v187 + v190;
      result[24] = v190 - v187;
      result[8] = v188 + v189;
      result[56] = v189 - v188;
      ++result;
      if ( v44 <= 9 - v168 )
        break;
      --v168;
    }
    v256 = v168 - 1;
  }
  else
  {
    v256 = 8;
  }
  v257 = 8 - v44;
  v258 = (8 - v44) >> 2;
  v255 = 4 * v258;
  if ( 4 * v258 == 0 )
    goto LABEL_10;
  v254 = result;
g4_m128_lane<int32_t>(v273, 0) = a1 + 4 * v44 + 192;
g4_m128_lane<int32_t>(v275, 0) = a1 + 4 * v44 + 64;
g4_m128_lane<int32_t>(v274, 0) = a1 + 4 * v44 + 160;
  v271 = 0;
  v259 = a1 + 4 * v44;
  v191 = v259 + 224;
  v192 = v259 + 32;
  v253 = v259 + 96;
  v193 = v259 + 128;
  v194 = 0;
  do
  {
    v195 = _mm_loadh_ps((const double *)(v191 + v194 + 8));
    v196 = *(__m128 *)(v259 + v194);
    v197 = _mm_add_ps(v195, v196);
    v198 = _mm_sub_ps(v196, v195);
    v199 = _mm_loadh_ps((const double *)(v192 + v194 + 8));
    v200 = _mm_loadh_ps((const double *)(g4_m128_lane<int32_t>(v273, 0) + v194 + 8));
    v267 = _mm_add_ps(v200, v199);
    v264 = _mm_sub_ps(v199, v200);
    v201 = _mm_loadh_ps((const double *)(g4_m128_lane<int32_t>(v275, 0) + v194 + 8));
    v202 = _mm_loadh_ps((const double *)(g4_m128_lane<int32_t>(v274, 0) + v194 + 8));
    v203 = _mm_add_ps(v202, v201);
    v204 = _mm_sub_ps(v201, v202);
    v205 = _mm_loadh_ps((const double *)(v253 + v194 + 8));
    v261 = v203;
    v260 = v204;
    v206 = _mm_loadh_ps((const double *)(v193 + v194 + 8));
    v207 = _mm_add_ps(v206, v205);
    v208 = _mm_add_ps(v207, v197);
    v209 = _mm_sub_ps(v197, v207);
    v210 = _mm_add_ps(v261, v267);
    v211 = _mm_add_ps(v210, v208);
    v212 = _mm_sub_ps(v208, v210);
    *(__m128 *)(v259 + v194) = v211;
    v213 =g4_m128_lane<int32_t>(v275, 0);
    _mm_storel_ps((double *)(v193 + v194), v212);
    _mm_storeh_ps((double *)(v193 + v194 + 8), v212);
    v214 = _mm_mul_ps(_mm_add_ps(_mm_sub_ps(v209, v261), v267), G4_BITCAST<__m128>(xmmword_1C7C840));
    v215 = _mm_add_ps(v214, v209);
    v216 = _mm_sub_ps(v209, v214);
    _mm_storel_ps((double *)(v213 + v194), v215);
    ++v271;
    _mm_storeh_ps((double *)(v213 + v194 + 8), v215);
    v217 =g4_m128_lane<int32_t>(v273, 0) + v194;
    _mm_storel_ps((double *)(g4_m128_lane<int32_t>(v273, 0) + v194), v216);
    _mm_storeh_ps((double *)(v217 + 8), v216);
    v218 = _mm_add_ps(_mm_sub_ps(v260, v206), v205);
    v219 = _mm_add_ps(v264, v198);
    v220 = _mm_mul_ps(_mm_sub_ps(v218, v219), G4_BITCAST<__m128>(xmmword_1C7C850));
    v221 = _mm_add_ps(_mm_mul_ps(v218, G4_BITCAST<__m128>(xmmword_1C7C860)), v220);
    v222 = _mm_add_ps(_mm_mul_ps(v219, G4_BITCAST<__m128>(xmmword_1C7C870)), v220);
    v223 = _mm_mul_ps(_mm_add_ps(v260, v264), G4_BITCAST<__m128>(xmmword_1C7C840));
    v224 = _mm_add_ps(v223, v198);
    v225 = _mm_sub_ps(v198, v223);
    v226 = _mm_add_ps(v221, v225);
    v227 = _mm_sub_ps(v225, v221);
    v228 = _mm_add_ps(v222, v224);
    v229 = _mm_sub_ps(v224, v222);
    v230 =g4_m128_lane<int32_t>(v274, 0) + v194;
    _mm_storel_ps((double *)(g4_m128_lane<int32_t>(v274, 0) + v194), v226);
    _mm_storeh_ps((double *)(v230 + 8), v226);
    _mm_storel_ps((double *)(v253 + v194), v227);
    _mm_storeh_ps((double *)(v253 + v194 + 8), v227);
    _mm_storel_ps((double *)(v192 + v194), v228);
    _mm_storeh_ps((double *)(v192 + v194 + 8), v228);
    _mm_storel_ps((double *)(v191 + v194), v229);
    _mm_storeh_ps((double *)(v191 + v194 + 8), v229);
    v194 += 16;
  }
  while ( v258 > v271 );
  v256 -= v255;
  result = &v254[4 * v258];
  if ( v257 != v255 )
  {
LABEL_10:
    v231 = v256;
g4_m128_lane<int32_t>(v273, 0) = 1060439283;
    do
    {
      --v231;
      v232 = result[56] + *result;
      v233 = result[40];
      v234 = *result - result[56];
      v235 = result[8];
      v236 = result[48] + v235;
g4_m128_lane<float>(v275, 0) = v235 - result[48];
      v237 = result[16];
      v238 = v233 + v237;
      v239 = v237 - v233;
      v272 = result[32];
      v240 = (float)(v272 + result[24]) + v232;
      v241 = v232 - (float)(v272 + result[24]);
      *result = (float)(v238 + v236) + v240;
      result[32] = v240 - (float)(v238 + v236);
      v242 = (float)((float)(v241 - v238) + v236) *g4_m128_lane<float>(v273, 0);
      v243 = v242 + v241;
      v244 = v241 - v242;
      v245 =g4_m128_lane<float>(v275, 0) + v234;
      result[16] = v243;
      result[48] = v244;
      v246 = (float)(v239 - v272) + result[24];
      v247 = (float)(v239 +g4_m128_lane<float>(v275, 0)) *g4_m128_lane<float>(v273, 0);
      v248 = (float)(v246 - v245) * 0.38268343f;
      v249 = (float)(v246 * 0.5411961f) + v248;
      v250 = (float)(v245 * 1.306563f) + v248;
      v251 = v247 + v234;
      v252 = v234 - v247;
      result[40] = v249 + v252;
      result[24] = v252 - v249;
      result[8] = v250 + v251;
      result[56] = v251 - v250;
      ++result;
    }
    while ( v231 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_fdct_ifast  (binary VA: 0xfc4120)
// Original: jpeg_fdct_ifast
// ----------------------------------------------------------------------------
int32_t * jpeg_fdct_ifast(__m128 *a1)
{
  __m128 v1;
  __m128 v2;
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128i v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i m128_i128;
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
  __m128 v72;
  __m128 v73;
  __m128 v74;
  __m128i v75;
  __m128 v76;
  __m128i v77;
  __m128 v78;
  __m128 v79;
  __m128i v80;
  __m128i v81;
  __m128 v82;
  __m128 v83;
  __m128 v84;
  __m128 v85;
  __m128 v86;
  __m128 v87;
  __m128 v88;
  __m128 v89;
  __m128i v90;
  __m128 v91;
  __m128 v92;
  __m128i v93;
  __m128 v94;
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
  int32_t *result;
  int32_t v145;
  int32_t v146;
  int32_t v147;
  int32_t v148;
  int32_t v149;
  int32_t v150;
  int32_t v151;
  int32_t v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int8_t *v162;
  int v163;
  int v164;
  int v165;
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
  int32_t v196;
  int32_t v197;
  int32_t v198;
  int32_t v199;
  int32_t v200;
  int32_t v201;
  int32_t v202;
  int32_t v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  int v212;
  int v213;
  bool v214;
  __m128i v215;
  char *v216;
  int v217;
  unsigned int v218;
  __m128i v219;
  __m128i v220;
  int32_t v221;
  char *v222;
  __m128i v223;
  __m128i v224;
  char *v225;
  int32_t v226;
  __m128i v227;
  __m128i v228;
  __m128i v229;
  int32_t v230;
  __m128i v231;
  int v232;
  __m128i v233;
  __m128 v234;
  __m128i v235;
  __m128i v236;
  __m128i v237;
  int32_t v238;
  __m128i v239;
  int32_t v240;
  __m128i v241;
  __m128i v242;
  __m128i v243;
  __m128i v244;
  __m128 v245;
  __m128i v246;
  __m128i v247;
  __m128i v248;
  __m128i v249;
  __m128i v250;
  int v251;
  __m128i v252;
  int32_t v253;
  __m128i v254;
  __m128i v255;
  __m128i v256;
  __m128i v257;
  __m128i v258;
  __m128i v259;
  __m128i v260;
  __m128i v261;
  int i;
  __m128i v263;
  int v264;
  __m128 v265;
  __m128i v266;
  __m128i v267;
  __m128i v268;
  __m128i v269;
  __m128i v270;
  __m128i v271;
  __m128i v272;
  __m128i v273;
  int32_t v274;
  int v275;
  char *v276;
  unsigned int v277;
  char *v278;
  int v279;
  unsigned int v280;
  int32_t v281;
  int v282;

g4_m128_raw(v1) = (g4_int128_t)a1[1];
g4_m128_raw(v2) = (g4_int128_t)a1[2];
g4_m128_raw(v265) = (g4_int128_t)a1[7];
g4_m128_raw(v3) = (g4_int128_t)a1[3];
g4_m128_raw(v4) = (g4_int128_t)a1[4];
  v5 = _mm_shuffle_ps(*a1, v1, 136);
g4_m128_raw(v6) = (g4_int128_t)a1[5];
g4_m128_raw(v254) = (g4_int128_t)_mm_shuffle_ps(*a1, v1, 221);
  v7 = _mm_shuffle_ps(v2, v3, 136);
  v8 = _mm_shuffle_ps(v2, v3, 221);
g4_m128_raw(v9) = (g4_int128_t)_mm_shuffle_ps(v5, v7, 136);
  v10 = _mm_shuffle_ps(v4, v6, 136);
  v11 = _mm_shuffle_ps(v4, v6, 221);
g4_m128_raw(v12) = (g4_int128_t)a1[6];
  v13 = _mm_shuffle_ps(v12, v265, 221);
  v14 = _mm_shuffle_ps(v12, v265, 136);
  v15 = _mm_shuffle_ps(v5, v7, 221);
  v266 = v9;
  v16 = _mm_shuffle_ps(v10, v14, 136);
g4_m128_raw(v241) = (g4_int128_t)_mm_shuffle_ps(v10, v14, 221);
  v17 = _mm_shuffle_ps(v11, v13, 136);
  v18 = _mm_shuffle_ps(v11, v13, 221);
g4_m128_raw(v19) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v266)), v16, 221);
g4_m128_raw(v20) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v266)), v16, 136);
g4_m128_raw(v21) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v254)), v8, 136);
  v267 = v19;
g4_m128_raw(v22) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v254)), v8, 221);
g4_m128_raw(v23) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v21)), v17, 221);
g4_m128_raw(v24) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v22)), v18, 221);
g4_m128_raw(v25) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v21)), v17, 136);
g4_m128_raw(v26) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v22)), v18, 136);
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v15));
  v28 = v20;
g4_m128_raw(v29) = (g4_int128_t)_mm_shuffle_ps(v15,g4_m128_raw(G4_BITCAST<__m128>(v241)), 221);
  v30 = _mm_sub_epi32(v20, v24);
  v31 = _mm_add_epi32(v28, v24);
  v32 = v25;
  v33 = _mm_sub_epi32(v25, v29);
  v34 = _mm_add_epi32(v32, v29);
g4_m128_raw(v35) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(m128_i128)),g4_m128_raw(G4_BITCAST<__m128>(v241)), 136);
  v255 = v33;
  v36 = _mm_sub_epi32(v35, v23);
  v37 = _mm_add_epi32(v35, v23);
  v38 = _mm_add_epi32(v267, v26);
  v242 = v36;
  v39 = _mm_add_epi32(v31, v38);
  v40 = _mm_sub_epi32(v31, v38);
  v41 = _mm_add_epi32(v34, v37);
  v42 = _mm_add_epi32(v39, v41);
  v227 = _mm_sub_epi32(v39, v41);
  v43 = _mm_add_epi32(_mm_sub_epi32(v34, v37), v40);
  v44 = _mm_srai_epi32(
          _mm_unpacklo_epi32(
            _mm_shuffle_epi32(_mm_mul_epu32(v43, G4_BITCAST<__m128i>(xmmword_1C7C880)), 8),
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C880), 4), _mm_srli_si128(v43, 4)), 8)),
          8u);
  v233 = v42;
  v223 = _mm_add_epi32(v40, v44);
  v45 = _mm_add_epi32(_mm_sub_epi32(v26, v267), v242);
  v46 = _mm_add_epi32(v255, v30);
  v219 = _mm_sub_epi32(v40, v44);
  v47 = _mm_sub_epi32(v45, v46);
  v48 = _mm_srai_epi32(
          _mm_unpacklo_epi32(
            _mm_shuffle_epi32(_mm_mul_epu32(v47, G4_BITCAST<__m128i>(xmmword_1C7C890)), 8),
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C890), 4), _mm_srli_si128(v47, 4)), 8)),
          8u);
  v49 = _mm_add_epi32(
          _mm_srai_epi32(
            _mm_unpacklo_epi32(
              _mm_shuffle_epi32(_mm_mul_epu32(v45, G4_BITCAST<__m128i>(xmmword_1C7C8A0)), 8),
              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v45, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8A0), 4)), 8)),
            8u),
          v48);
  v50 = _mm_add_epi32(
          _mm_srai_epi32(
            _mm_unpacklo_epi32(
              _mm_shuffle_epi32(_mm_mul_epu32(v46, G4_BITCAST<__m128i>(xmmword_1C7C8B0)), 8),
              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8B0), 4), _mm_srli_si128(v46, 4)), 8)),
            8u),
          v48);
  v51 = _mm_add_epi32(v242, v255);
  v52 = v30;
  v53 = _mm_srai_epi32(
          _mm_unpacklo_epi32(
            _mm_shuffle_epi32(_mm_mul_epu32(v51, G4_BITCAST<__m128i>(xmmword_1C7C880)), 8),
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C880), 4), _mm_srli_si128(v51, 4)), 8)),
          8u);
  v54 = _mm_sub_epi32(v30, v53);
  v55 = _mm_add_epi32(v52, v53);
  v56 = _mm_add_epi32(v54, v49);
  v57 = _mm_sub_epi32(v54, v49);
  v243 = _mm_sub_epi32(v55, v50);
  v58 = _mm_add_epi32(v55, v50);
  v59 = _mm_unpacklo_epi32(v233, v227);
  v268 = _mm_unpackhi_epi32(v58, v56);
  v60 = _mm_unpacklo_epi32(v58, v56);
  v61 = _mm_unpackhi_epi32(v233, v227);
  v256 = _mm_unpacklo_epi32(v57, v243);
  v62 = _mm_unpacklo_epi32(v223, v219);
  v63 = _mm_unpackhi_epi32(v223, v219);
  v64 = _mm_unpacklo_epi32(v59, v62);
  v65 = _mm_unpackhi_epi32(v59, v62);
  v66 = _mm_unpackhi_epi32(v57, v243);
  v67 = _mm_unpacklo_epi32(v61, v63);
  v244 = v64;
  v68 = v60;
  v69 = _mm_unpackhi_epi32(v60, v256);
  v70 = _mm_unpacklo_epi32(v68, v256);
  v257 = _mm_unpacklo_epi32(v268, v66);
  v269 = _mm_unpackhi_epi32(v268, v66);
g4_m128_raw(*(a1)) = (g4_int128_t)_mm_unpacklo_epi32(v244, v70);
g4_m128_raw(a1[1]) = (g4_int128_t)_mm_unpackhi_epi32(v244, v70);
  v71 = _mm_unpackhi_epi32(v61, v63);
g4_m128_raw(v72) = (g4_int128_t)a1[8];
g4_m128_raw(a1[6]) = (g4_int128_t)_mm_unpacklo_epi32(v71, v269);
g4_m128_raw(a1[7]) = (g4_int128_t)_mm_unpackhi_epi32(v71, v269);
g4_m128_raw(v73) = (g4_int128_t)a1[15];
g4_m128_raw(v74) = (g4_int128_t)a1[13];
g4_m128_raw(a1[2]) = (g4_int128_t)_mm_unpacklo_epi32(v65, v69);
  v75 = _mm_unpackhi_epi32(v65, v69);
g4_m128_raw(v76) = (g4_int128_t)a1[9];
  v77 = _mm_unpacklo_epi32(v67, v257);
  v245 = v74;
  v234 = v73;
g4_m128_raw(v78) = (g4_int128_t)a1[14];
g4_m128_raw(a1[3]) = (g4_int128_t)v75;
g4_m128_raw(a1[5]) = (g4_int128_t)_mm_unpackhi_epi32(v67, v257);
g4_m128_raw(v79) = (g4_int128_t)a1[12];
g4_m128_raw(v80) = (g4_int128_t)_mm_shuffle_ps(v72, v76, 136);
g4_m128_raw(v81) = (g4_int128_t)_mm_shuffle_ps(v72, v76, 221);
  v270 = v80;
g4_m128_raw(v82) = (g4_int128_t)a1[10];
  v258 = v81;
g4_m128_raw(a1[4]) = (g4_int128_t)v77;
  v83 = v82;
g4_m128_raw(v84) = (g4_int128_t)a1[11];
  v85 = _mm_shuffle_ps(v78, v234, 136);
  v86 = _mm_shuffle_ps(v79, v245, 136);
  v87 = _mm_shuffle_ps(v82, v84, 136);
  v88 = _mm_shuffle_ps(v83, v84, 221);
g4_m128_raw(v246) = (g4_int128_t)_mm_shuffle_ps(v79, v245, 221);
g4_m128_raw(v228) = (g4_int128_t)_mm_shuffle_ps(v78, v234, 221);
  v89 = _mm_shuffle_ps(v86, v85, 136);
g4_m128_raw(v90) = (g4_int128_t)_mm_shuffle_ps(v86, v85, 221);
  v91 = _mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v270)), v87, 136);
  v235 =g4_m128_raw(G4_BITCAST<__m128i>(v89));
  v92 = _mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v258)), v88, 136);
g4_m128_raw(v93) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v258)), v88, 221);
  v94 = _mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v246)),g4_m128_raw(G4_BITCAST<__m128>(v228)), 136);
g4_m128_raw(v247) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v246)),g4_m128_raw(G4_BITCAST<__m128>(v228)), 221);
g4_m128_raw(v95) = (g4_int128_t)_mm_shuffle_ps(v91, v89, 136);
g4_m128_raw(v259) = (g4_int128_t)_mm_shuffle_ps(v91,g4_m128_raw(G4_BITCAST<__m128>(v235)), 221);
g4_m128_raw(v96) = (g4_int128_t)_mm_shuffle_ps(v92, v94, 136);
g4_m128_raw(v97) = (g4_int128_t)_mm_shuffle_ps(v92, v94, 221);
g4_m128_raw(v98) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v270)), v87, 221);
  v236 = v97;
g4_m128_raw(v99) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v98)),g4_m128_raw(G4_BITCAST<__m128>(v90)), 221);
g4_m128_raw(v100) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v98)),g4_m128_raw(G4_BITCAST<__m128>(v90)), 136);
  v101 = v93;
  v102 = v95;
g4_m128_raw(v103) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v93)),g4_m128_raw(G4_BITCAST<__m128>(v247)), 221);
  v104 = _mm_add_epi32(v95, v103);
  v105 = _mm_sub_epi32(v102, v103);
g4_m128_raw(v106) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v101)),g4_m128_raw(G4_BITCAST<__m128>(v247)), 136);
  v107 = _mm_add_epi32(v96, v99);
  v248 = _mm_sub_epi32(v96, v99);
  v108 = _mm_add_epi32(v236, v100);
  v215 = _mm_sub_epi32(v100, v236);
  v271 = v105;
  v109 = _mm_add_epi32(v259, v106);
  v110 = v104;
  v111 = _mm_sub_epi32(v104, v109);
  v112 = _mm_add_epi32(v110, v109);
  v113 = _mm_add_epi32(v107, v108);
  v114 = v112;
  v229 = _mm_sub_epi32(v112, v113);
  v115 = _mm_add_epi32(_mm_sub_epi32(v107, v108), v111);
  v116 = _mm_add_epi32(_mm_sub_epi32(v106, v259), v215);
  v117 = _mm_add_epi32(v114, v113);
  v118 = _mm_srai_epi32(
           _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v115, G4_BITCAST<__m128i>(xmmword_1C7C880)), 8),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C880), 4), _mm_srli_si128(v115, 4)), 8)),
           8u);
  v119 = _mm_add_epi32(v248, v271);
  v220 = _mm_sub_epi32(v111, v118);
  v224 = _mm_add_epi32(v111, v118);
  v120 = _mm_sub_epi32(v116, v119);
  v121 = _mm_srai_epi32(
           _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v120, G4_BITCAST<__m128i>(xmmword_1C7C890)), 8),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C890), 4), _mm_srli_si128(v120, 4)), 8)),
           8u);
  v122 = _mm_add_epi32(
           _mm_srai_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v116, G4_BITCAST<__m128i>(xmmword_1C7C8A0)), 8),
               _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v116, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8A0), 4)), 8)),
             8u),
           v121);
  v123 = _mm_add_epi32(
           _mm_srai_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v119, G4_BITCAST<__m128i>(xmmword_1C7C8B0)), 8),
               _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v119, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8B0), 4)), 8)),
             8u),
           v121);
  v237 = v117;
  v124 = _mm_add_epi32(v248, v215);
  v125 = _mm_srai_epi32(
           _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v124, G4_BITCAST<__m128i>(xmmword_1C7C880)), 8),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C880), 4), _mm_srli_si128(v124, 4)), 8)),
           8u);
  v126 = _mm_sub_epi32(v271, v125);
  v127 = _mm_add_epi32(v271, v125);
  v128 = _mm_add_epi32(v126, v122);
  v129 = _mm_sub_epi32(v126, v122);
  v249 = _mm_sub_epi32(v127, v123);
  v130 = _mm_add_epi32(v127, v123);
  v131 = _mm_unpackhi_epi32(v237, v229);
  v272 = _mm_unpackhi_epi32(v130, v128);
  v132 = _mm_unpacklo_epi32(v130, v128);
  v260 = _mm_unpacklo_epi32(v129, v249);
  v133 = _mm_unpacklo_epi32(v224, v220);
  v134 = _mm_unpacklo_epi32(v237, v229);
  v135 = _mm_unpackhi_epi32(v134, v133);
  v136 = _mm_unpacklo_epi32(v134, v133);
  v137 = _mm_unpackhi_epi32(v224, v220);
  v138 = _mm_unpackhi_epi32(v129, v249);
  v139 = _mm_unpacklo_epi32(v131, v137);
  v140 = _mm_unpackhi_epi32(v131, v137);
  v250 = v136;
  v141 = v132;
  v142 = _mm_unpackhi_epi32(v132, v260);
  v143 = _mm_unpacklo_epi32(v141, v260);
  v261 = _mm_unpacklo_epi32(v272, v138);
  v273 = _mm_unpackhi_epi32(v272, v138);
g4_m128_raw(a1[9]) = (g4_int128_t)_mm_unpackhi_epi32(v250, v143);
g4_m128_raw(a1[8]) = (g4_int128_t)_mm_unpacklo_epi32(v250, v143);
g4_m128_raw(a1[10]) = (g4_int128_t)_mm_unpacklo_epi32(v135, v142);
g4_m128_raw(a1[11]) = (g4_int128_t)_mm_unpackhi_epi32(v135, v142);
g4_m128_raw(a1[12]) = (g4_int128_t)_mm_unpacklo_epi32(v139, v261);
g4_m128_raw(a1[13]) = (g4_int128_t)_mm_unpackhi_epi32(v139, v261);
g4_m128_raw(a1[14]) = (g4_int128_t)_mm_unpacklo_epi32(v140, v273);
g4_m128_raw(a1[15]) = (g4_int128_t)_mm_unpackhi_epi32(v140, v273);
  v277 = -((uint8_t)((uint8_t)(uintptr_t)(a1) & 0xF) >> 2) & 3;
  result = (int32_t *)a1;
  if ( v277 != 0 )
  {
    for ( i = 8; ; --i )
    {
      v145 = result[56];
      v146 = result[48];
      v147 = *result + v145;
      v274 = *result - v145;
      v148 = result[8];
      v149 = v148 + v146;
      v150 = v148 - v146;
      v279 = v149;
      v151 = result[40];
      v152 = result[16];
      v251 = v150;
      v230 = v152 - v151;
      v238 = v152 + v151;
      v153 = result[32] + result[24];
      v221 = result[32];
      v154 = v147 + v153;
      v155 = v147 - v153;
      *result = v154 + v238 + v279;
      result[32] = v154 - (v238 + v279);
      v156 = (181 * (v155 + v279 - v238)) >> 8;
      result[16] = v155 + v156;
      v157 = v230 + result[24] - v221;
      result[48] = v155 - v156;
      v158 = (98 * (v157 - (v274 + v251))) >> 8;
      v159 = v158 + ((139 * v157) >> 8);
      v160 = v158 + ((334 * (v274 + v251)) >> 8);
      v161 = (181 * (v251 + v230)) >> 8;
      result[40] = v159 + v274 - v161;
      result[56] = v161 + v274 - v160;
      result[24] = v274 - v161 - v159;
      result[8] = v161 + v274 + v160;
      ++result;
      if ( v277 <= 9 - i )
        break;
    }
    v275 = i - 1;
  }
  else
  {
    v275 = 8;
  }
  v218 = (8 - v277) >> 2;
  v217 = 4 * v218;
  if ( 4 * v218 == 0 )
    goto LABEL_15;
  v162 = &g4_m128_lane<int8_t>(*(a1), 4 * v277);
  v225 = (char *)(v162 + 224);
  v222 = (char *)(v162 + 32);
  v278 = (char *)(v162 + 192);
  v276 = (char *)(v162 + 64);
  v280 = 0;
  v216 = (char *)(v162 + 160);
  v163 = (int)(uintptr_t)(g4_m128_lane<int32_t>(a1[8], -((uint8_t)((uint8_t)(uintptr_t)(a1) & 0xF) >> 2) & 3));
  v164 = (int)(uintptr_t)(g4_m128_lane<int32_t>(a1[6], -((uint8_t)((uint8_t)(uintptr_t)(a1) & 0xF) >> 2) & 3));
  v165 = 0;
  do
  {
    v166 = *(__m128i *)&v225[v165];
    v167 = *(__m128i *)&v162[v165];
    v168 = _mm_sub_epi32(v167, v166);
    v169 = _mm_add_epi32(v167, v166);
    v170 = *(__m128i *)&v278[v165];
    v171 = *(__m128i *)&v222[v165];
    v172 = _mm_sub_epi32(v171, v170);
    v173 = _mm_add_epi32(v171, v170);
    v263 = v172;
    v174 = *(__m128i *)&v276[v165];
    v175 = *(__m128i *)&v216[v165];
    v176 = _mm_sub_epi32(v174, v175);
    v177 = _mm_add_epi32(v174, v175);
    v239 = v176;
    v178 = *(__m128i *)(v164 + v165);
    v231 = *(__m128i *)(v163 + v165);
    v252 = v177;
    v179 = _mm_add_epi32(v231, v178);
    v180 = v169;
    v181 = _mm_sub_epi32(v169, v179);
    v182 = _mm_add_epi32(v180, v179);
    v183 = _mm_add_epi32(v252, v173);
    *(__m128i *)&v162[v165] = _mm_add_epi32(v182, v183);
    *(__m128i *)(v163 + v165) = _mm_sub_epi32(v182, v183);
    v184 = _mm_add_epi32(_mm_sub_epi32(v173, v252), v181);
    v185 = _mm_add_epi32(_mm_sub_epi32(v178, v231), v239);
    v186 = _mm_srai_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v184, G4_BITCAST<__m128i>(xmmword_1C7C880)), 8),
               _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v184, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C880), 4)), 8)),
             8u);
    *(__m128i *)&v276[v165] = _mm_add_epi32(v181, v186);
    *(__m128i *)&v278[v165] = _mm_sub_epi32(v181, v186);
    v187 = _mm_add_epi32(v263, v168);
    v188 = _mm_sub_epi32(v185, v187);
    v189 = _mm_srai_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v188, G4_BITCAST<__m128i>(xmmword_1C7C890)), 8),
               _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C890), 4), _mm_srli_si128(v188, 4)), 8)),
             8u);
    v190 = _mm_add_epi32(
             _mm_srai_epi32(
               _mm_unpacklo_epi32(
                 _mm_shuffle_epi32(_mm_mul_epu32(v185, G4_BITCAST<__m128i>(xmmword_1C7C8A0)), 8),
                 _mm_shuffle_epi32(
                   _mm_mul_epu32(_mm_srli_si128(v185, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8A0), 4)),
                   8)),
               8u),
             v189);
    v191 = _mm_add_epi32(
             _mm_srai_epi32(
               _mm_unpacklo_epi32(
                 _mm_shuffle_epi32(_mm_mul_epu32(v187, G4_BITCAST<__m128i>(xmmword_1C7C8B0)), 8),
                 _mm_shuffle_epi32(
                   _mm_mul_epu32(_mm_srli_si128(v187, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8B0), 4)),
                   8)),
               8u),
             v189);
    v192 = _mm_add_epi32(v239, v263);
    v193 = _mm_srai_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v192, G4_BITCAST<__m128i>(xmmword_1C7C880)), 8),
               _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v192, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C880), 4)), 8)),
             8u);
    v194 = _mm_add_epi32(v168, v193);
    v195 = _mm_sub_epi32(v168, v193);
    *(__m128i *)&v216[v165] = _mm_add_epi32(v195, v190);
    *(__m128i *)(v164 + v165) = _mm_sub_epi32(v195, v190);
    *(__m128i *)&v222[v165] = _mm_add_epi32(v194, v191);
    ++v280;
    *(__m128i *)&v225[v165] = _mm_sub_epi32(v194, v191);
    v165 += 16;
  }
  while ( v218 > v280 );
  v275 -= v217;
  result += 4 * v218;
  if ( 8 - v277 != v217 )
  {
LABEL_15:
    do
    {
      v196 = result[56];
      v197 = result[48];
      v198 = *result + v196;
      v281 = *result - v196;
      v199 = result[8];
      v200 = v199 + v197;
      v201 = v199 - v197;
      v232 = v200;
      v202 = result[40];
      v203 = result[16];
      v264 = v201;
      v240 = v203 - v202;
      v253 = v203 + v202;
      v204 = result[32] + result[24];
      v226 = result[32];
      v205 = v198 + v204;
      v206 = v198 - v204;
      *result = v205 + v253 + v232;
      result[32] = v205 - (v253 + v232);
      v207 = (181 * (v206 + v232 - v253)) >> 8;
      result[16] = v206 + v207;
      v208 = v240 + result[24] - v226;
      result[48] = v206 - v207;
      v209 = (98 * (v208 - (v281 + v264))) >> 8;
      v210 = v209 + ((139 * v208) >> 8);
      v211 = v209 + ((334 * (v281 + v264)) >> 8);
      v212 = (181 * (v264 + v240)) >> 8;
      v213 = v212 + v281;
      v282 = v281 - v212;
      result[40] = v210 + v282;
      v214 = v275-- == 1;
      result[24] = v282 - v210;
      result[8] = v213 + v211;
      result[56] = v213 - v211;
      ++result;
    }
    while ( !v214 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_fdct_islow  (binary VA: 0xfc4fe0)
// Original: jpeg_fdct_islow
// ----------------------------------------------------------------------------
int32_t * jpeg_fdct_islow(__m128 *a1)
{
  __m128 v1;
  __m128 v2;
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __m128i v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128i v17;
  __m128 v18;
  __m128 v19;
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
  __m128 v80;
  __m128 v81;
  __m128 v82;
  __m128 v83;
  __m128 v84;
  __m128 v85;
  __m128 v86;
  __m128 v87;
  __m128 v88;
  __m128 v89;
  __m128 v90;
  __m128 v91;
  __m128 v92;
  __m128 v93;
  __m128 v94;
  __m128 v95;
  __m128 v96;
  __m128 v97;
  __m128 v98;
  __m128i v99;
  __m128i m128_i128;
  __m128 v101;
  __m128 v102;
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
  int32_t *result;
  int32_t v156;
  int32_t v157;
  int32_t v158;
  int32_t v159;
  int32_t v160;
  int32_t v161;
  int32_t v162;
  int32_t v163;
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
  int8_t *v174;
  char *v175;
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
  int32_t v205;
  int32_t v206;
  int32_t v207;
  int32_t v208;
  int32_t v209;
  int32_t v210;
  int32_t v211;
  int32_t v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  int v218;
  int v219;
  bool v220;
  int v221;
  int v222;
  unsigned int v223;
  int v224;
  int v225;
  __m128i v226;
  __m128i v227;
  unsigned int v228;
  __m128i v229;
  int v230;
  __m128i v231;
  __m128i v232;
  int32_t v233;
  int v234;
  __m128i v235;
  __m128i v236;
  int32_t v237;
  int v238;
  int v239;
  int v240;
  __m128i v241;
  int32_t v242;
  __m128i v243;
  __m128i v244;
  __m128i v245;
  __m128i v246;
  __m128 v247;
  __m128i v248;
  __m128i v249;
  __m128i v250;
  int32_t v251;
  unsigned int v252;
  int32_t v253;
  __m128i v254;
  __m128i v255;
  __m128i v256;
  __m128i v257;
  int i;
  __m128i v259;
  int32_t v260;
  int v261;
  int v262;
  __m128 v263;
  __m128i v264;
  __m128i v265;
  __m128i v266;
  __m128i v267;
  __m128i v268;
  int32_t v269;
  __m128i v270;
  int32_t v271;
  __m128i v272;
  __m128i v273;
  __m128i v274;
  __m128i v275;
  __m128i v276;
  int32_t v277;
  __m128i v278;
  int32_t v279;

g4_m128_raw(v1) = (g4_int128_t)a1[1];
g4_m128_raw(v2) = (g4_int128_t)a1[2];
g4_m128_raw(v263) = (g4_int128_t)a1[7];
g4_m128_raw(v3) = (g4_int128_t)a1[3];
g4_m128_raw(v4) = (g4_int128_t)a1[4];
  v5 = _mm_shuffle_ps(*a1, v1, 136);
g4_m128_raw(v243) = (g4_int128_t)_mm_shuffle_ps(*a1, v1, 221);
g4_m128_raw(v6) = (g4_int128_t)a1[5];
  v7 = _mm_shuffle_ps(v2, v3, 136);
  v8 = _mm_shuffle_ps(v2, v3, 221);
  v9 = _mm_shuffle_ps(v4, v6, 136);
  v10 = _mm_shuffle_ps(v4, v6, 221);
  v11 = _mm_shuffle_ps(a1[6], v263, 136);
  v12 = _mm_shuffle_ps(v5, v7, 136);
g4_m128_raw(v13) = (g4_int128_t)_mm_shuffle_ps(v5, v7, 221);
  v14 = _mm_shuffle_ps(v9, v11, 136);
  v15 = _mm_shuffle_ps(v9, v11, 221);
  v16 = _mm_shuffle_ps(a1[6], v263, 221);
  v272 = v13;
  v17 = v243;
g4_m128_raw(v244) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v243)), v8, 221);
  v18 = _mm_shuffle_ps(v10, v16, 136);
  v19 = _mm_shuffle_ps(v10, v16, 221);
g4_m128_raw(v20) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v17)), v8, 136);
g4_m128_raw(v264) = (g4_int128_t)_mm_shuffle_ps(v12, v14, 221);
g4_m128_raw(v21) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v20)), v18, 221);
g4_m128_raw(v22) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v20)), v18, 136);
g4_m128_raw(v23) = (g4_int128_t)_mm_shuffle_ps(v12, v14, 136);
g4_m128_raw(v24) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v272)), v15, 136);
g4_m128_raw(v25) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v272)), v15, 221);
g4_m128_raw(v26) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v244)), v19, 136);
g4_m128_raw(v27) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v244)), v19, 221);
  v28 = v23;
  v29 = _mm_sub_epi32(v23, v27);
  v30 = _mm_add_epi32(v28, v27);
  v31 = _mm_add_epi32(v22, v25);
  v32 = _mm_sub_epi32(v22, v25);
  v33 = v24;
  v34 = _mm_sub_epi32(v24, v21);
  v35 = _mm_add_epi32(v33, v21);
  v36 = _mm_add_epi32(v264, v26);
  v37 = _mm_sub_epi32(v26, v264);
  v245 = v32;
  v38 = _mm_add_epi32(v30, v36);
  v39 = _mm_sub_epi32(v30, v36);
  v40 = v31;
  v41 = _mm_sub_epi32(v31, v35);
  v42 = _mm_add_epi32(v40, v35);
  v231 = _mm_slli_epi32(_mm_sub_epi32(v38, v42), 2u);
  v265 = _mm_slli_epi32(_mm_add_epi32(v38, v42), 2u);
  v43 = _mm_add_epi32(v41, v39);
  v44 = _mm_unpacklo_epi32(
          _mm_shuffle_epi32(_mm_mul_epu32(v43, G4_BITCAST<__m128i>(xmmword_1C7C8C0)), 8),
          _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8C0), 4), _mm_srli_si128(v43, 4)), 8));
  v45 = _mm_srai_epi32(
          _mm_add_epi32(
            _mm_add_epi32(
              _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v39, G4_BITCAST<__m128i>(xmmword_1C7C8D0)), 8),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8D0), 4), _mm_srli_si128(v39, 4)), 8)),
              v44),
            G4_BITCAST<__m128i>(xmmword_1C7C800)),
          0xBu);
  v46 = _mm_add_epi32(
          _mm_unpacklo_epi32(
            _mm_shuffle_epi32(_mm_mul_epu32(v41, G4_BITCAST<__m128i>(xmmword_1C7C8E0)), 8),
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8E0), 4), _mm_srli_si128(v41, 4)), 8)),
          v44);
  v47 = _mm_add_epi32(v245, v37);
  v48 = _mm_add_epi32(v29, v34);
  v273 = v29;
  v49 = _mm_add_epi32(v47, v48);
  v50 = _mm_srai_epi32(_mm_add_epi32(v46, G4_BITCAST<__m128i>(xmmword_1C7C800)), 0xBu);
  v254 = _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v49, G4_BITCAST<__m128i>(xmmword_1C7C8F0)), 8),
           _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8F0), 4), _mm_srli_si128(v49, 4)), 8));
  v51 = _mm_add_epi32(v273, v37);
  v235 = _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v51, G4_BITCAST<__m128i>(xmmword_1C7C900)), 8),
           _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C900), 4), _mm_srli_si128(v51, 4)), 8));
  v52 = _mm_add_epi32(v245, v34);
  v226 = _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v52, G4_BITCAST<__m128i>(xmmword_1C7C910)), 8),
           _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C910), 4), _mm_srli_si128(v52, 4)), 8));
  v53 = _mm_add_epi32(
          _mm_unpacklo_epi32(
            _mm_shuffle_epi32(_mm_mul_epu32(v47, G4_BITCAST<__m128i>(xmmword_1C7C920)), 8),
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C920), 4), _mm_srli_si128(v47, 4)), 8)),
          v254);
  v54 = _mm_add_epi32(
          _mm_unpacklo_epi32(
            _mm_shuffle_epi32(_mm_mul_epu32(v48, G4_BITCAST<__m128i>(xmmword_1C7C930)), 8),
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C930), 4), _mm_srli_si128(v48, 4)), 8)),
          v254);
  v55 = _mm_srai_epi32(
          _mm_add_epi32(
            _mm_add_epi32(
              _mm_add_epi32(
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v37, G4_BITCAST<__m128i>(xmmword_1C7C940)), 8),
                  _mm_shuffle_epi32(
                    _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C940), 4), _mm_srli_si128(v37, 4)),
                    8)),
                v235),
              v53),
            G4_BITCAST<__m128i>(xmmword_1C7C800)),
          0xBu);
  v56 = _mm_srai_epi32(
          _mm_add_epi32(
            _mm_add_epi32(
              _mm_add_epi32(
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v34, G4_BITCAST<__m128i>(xmmword_1C7C950)), 8),
                  _mm_shuffle_epi32(
                    _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C950), 4), _mm_srli_si128(v34, 4)),
                    8)),
                v226),
              v54),
            G4_BITCAST<__m128i>(xmmword_1C7C800)),
          0xBu);
  v57 = _mm_srai_epi32(
          _mm_add_epi32(
            _mm_add_epi32(
              _mm_add_epi32(
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v245, G4_BITCAST<__m128i>(xmmword_1C7C960)), 8),
                  _mm_shuffle_epi32(
                    _mm_mul_epu32(_mm_srli_si128(v245, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C960), 4)),
                    8)),
                v226),
              v53),
            G4_BITCAST<__m128i>(xmmword_1C7C800)),
          0xBu);
  v58 = _mm_srai_epi32(
          _mm_add_epi32(
            _mm_add_epi32(
              _mm_add_epi32(
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v273, G4_BITCAST<__m128i>(xmmword_1C7C970)), 8),
                  _mm_shuffle_epi32(
                    _mm_mul_epu32(_mm_srli_si128(v273, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C970), 4)),
                    8)),
                v235),
              v54),
            G4_BITCAST<__m128i>(xmmword_1C7C800)),
          0xBu);
  v255 = _mm_unpackhi_epi32(v265, v231);
  v59 = _mm_unpacklo_epi32(v58, v56);
  v60 = _mm_unpacklo_epi32(v265, v231);
  v61 = _mm_unpackhi_epi32(v58, v56);
  v62 = v45;
  v63 = _mm_unpackhi_epi32(v45, v50);
  v64 = _mm_unpacklo_epi32(v62, v50);
  v246 = v61;
  v65 = _mm_unpacklo_epi32(v60, v64);
  v66 = _mm_unpackhi_epi32(v60, v64);
  v67 = _mm_unpacklo_epi32(v57, v55);
  v68 = _mm_unpackhi_epi32(v57, v55);
  v266 = v65;
  v69 = _mm_unpacklo_epi32(v59, v67);
  v70 = _mm_unpackhi_epi32(v59, v67);
  v71 = _mm_unpacklo_epi32(v255, v63);
  v72 = _mm_unpackhi_epi32(v255, v63);
  v73 = _mm_unpackhi_epi32(v246, v68);
  v74 = _mm_unpacklo_epi32(v246, v68);
g4_m128_raw(*(a1)) = (g4_int128_t)_mm_unpacklo_epi32(v266, v69);
  v75 = _mm_unpackhi_epi32(v266, v69);
g4_m128_raw(a1[2]) = (g4_int128_t)_mm_unpacklo_epi32(v66, v70);
  v76 = v71;
  v77 = _mm_unpackhi_epi32(v71, v74);
  v78 = _mm_unpacklo_epi32(v76, v74);
  v79 = _mm_unpacklo_epi32(v72, v73);
g4_m128_raw(a1[1]) = (g4_int128_t)v75;
g4_m128_raw(a1[3]) = (g4_int128_t)_mm_unpackhi_epi32(v66, v70);
g4_m128_raw(v80) = (g4_int128_t)a1[9];
g4_m128_raw(v81) = (g4_int128_t)a1[8];
g4_m128_raw(a1[7]) = (g4_int128_t)_mm_unpackhi_epi32(v72, v73);
g4_m128_raw(v82) = (g4_int128_t)a1[15];
g4_m128_raw(v83) = (g4_int128_t)a1[10];
g4_m128_raw(v84) = (g4_int128_t)a1[11];
g4_m128_raw(a1[4]) = (g4_int128_t)v78;
g4_m128_raw(a1[5]) = (g4_int128_t)v77;
g4_m128_raw(v85) = (g4_int128_t)a1[12];
g4_m128_raw(v86) = (g4_int128_t)a1[13];
g4_m128_raw(a1[6]) = (g4_int128_t)v79;
g4_m128_raw(v87) = (g4_int128_t)a1[14];
  v247 = v82;
  v88 = _mm_shuffle_ps(v81, v80, 136);
g4_m128_raw(v274) = (g4_int128_t)_mm_shuffle_ps(v81, v80, 221);
  v89 = _mm_shuffle_ps(v83, v84, 136);
  v90 = _mm_shuffle_ps(v83, v84, 221);
  v91 = _mm_shuffle_ps(v85, v86, 136);
  v92 = _mm_shuffle_ps(v85, v86, 221);
  v93 = _mm_shuffle_ps(v87, v247, 136);
  v94 = _mm_shuffle_ps(v87, v247, 221);
  v95 = _mm_shuffle_ps(v88, v89, 136);
g4_m128_raw(v248) = (g4_int128_t)_mm_shuffle_ps(v88, v89, 221);
  v96 = _mm_shuffle_ps(v91, v93, 136);
  v97 = _mm_shuffle_ps(v91, v93, 221);
  v98 = _mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v274)), v90, 136);
g4_m128_raw(v99) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v274)), v90, 221);
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v92));
  v101 = _mm_shuffle_ps(v92, v94, 221);
  v102 = _mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(m128_i128)), v94, 136);
g4_m128_raw(v103) = (g4_int128_t)_mm_shuffle_ps(v95, v96, 136);
g4_m128_raw(v256) = (g4_int128_t)_mm_shuffle_ps(v95, v96, 221);
  v104 =g4_m128_raw(G4_BITCAST<__m128i>(v98));
g4_m128_raw(v105) = (g4_int128_t)_mm_shuffle_ps(v98, v102, 221);
  v275 = v103;
g4_m128_raw(v106) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v104)), v102, 136);
  v107 = v99;
g4_m128_raw(v108) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v99)), v101, 221);
g4_m128_raw(v109) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v248)), v97, 136);
g4_m128_raw(v110) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v107)), v101, 136);
g4_m128_raw(v111) = (g4_int128_t)_mm_shuffle_ps(g4_m128_raw(G4_BITCAST<__m128>(v248)), v97, 221);
  v112 = _mm_sub_epi32(v275, v108);
  v113 = _mm_add_epi32(v275, v108);
  v114 = _mm_add_epi32(v106, v111);
  v249 = _mm_sub_epi32(v106, v111);
  v115 = _mm_add_epi32(v109, v105);
  v276 = v112;
  v116 = _mm_add_epi32(v256, v110);
  v117 = v113;
  v118 = _mm_sub_epi32(v113, v116);
  v119 = _mm_add_epi32(v117, v116);
  v120 = _mm_add_epi32(v114, v115);
  v121 = _mm_sub_epi32(v114, v115);
  v232 = _mm_slli_epi32(_mm_add_epi32(v119, v120), 2u);
  v122 = _mm_sub_epi32(v110, v256);
  v257 = _mm_slli_epi32(_mm_sub_epi32(v119, v120), 2u);
  v123 = _mm_add_epi32(v121, v118);
  v124 = _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v123, G4_BITCAST<__m128i>(xmmword_1C7C8C0)), 8),
           _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8C0), 4), _mm_srli_si128(v123, 4)), 8));
  v267 = _mm_sub_epi32(v109, v105);
  v125 = _mm_add_epi32(
           _mm_add_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v118, G4_BITCAST<__m128i>(xmmword_1C7C8D0)), 8),
               _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v118, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8D0), 4)), 8)),
             v124),
           G4_BITCAST<__m128i>(xmmword_1C7C800));
  v126 = _mm_add_epi32(
           _mm_add_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v121, G4_BITCAST<__m128i>(xmmword_1C7C8E0)), 8),
               _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v121, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8E0), 4)), 8)),
             v124),
           G4_BITCAST<__m128i>(xmmword_1C7C800));
  v127 = _mm_add_epi32(v249, v122);
  v128 = _mm_add_epi32(v267, v276);
  v129 = _mm_srai_epi32(v126, 0xBu);
  v130 = _mm_add_epi32(v127, v128);
  v236 = _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v130, G4_BITCAST<__m128i>(xmmword_1C7C8F0)), 8),
           _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8F0), 4), _mm_srli_si128(v130, 4)), 8));
  v131 = _mm_add_epi32(v276, v122);
  v227 = _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v131, G4_BITCAST<__m128i>(xmmword_1C7C900)), 8),
           _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C900), 4), _mm_srli_si128(v131, 4)), 8));
  v132 = _mm_add_epi32(v267, v249);
  v229 = _mm_unpacklo_epi32(
           _mm_shuffle_epi32(_mm_mul_epu32(v132, G4_BITCAST<__m128i>(xmmword_1C7C910)), 8),
           _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C910), 4), _mm_srli_si128(v132, 4)), 8));
  v133 = _mm_add_epi32(
           _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v127, G4_BITCAST<__m128i>(xmmword_1C7C920)), 8),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v127, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C920), 4)), 8)),
           v236);
  v134 = _mm_add_epi32(
           _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v128, G4_BITCAST<__m128i>(xmmword_1C7C930)), 8),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v128, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C930), 4)), 8)),
           v236);
  v135 = _mm_srai_epi32(
           _mm_add_epi32(
             _mm_add_epi32(
               _mm_add_epi32(
                 _mm_unpacklo_epi32(
                   _mm_shuffle_epi32(_mm_mul_epu32(v122, G4_BITCAST<__m128i>(xmmword_1C7C940)), 8),
                   _mm_shuffle_epi32(
                     _mm_mul_epu32(_mm_srli_si128(v122, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C940), 4)),
                     8)),
                 v227),
               v133),
             G4_BITCAST<__m128i>(xmmword_1C7C800)),
           0xBu);
  v136 = _mm_srai_epi32(
           _mm_add_epi32(
             _mm_add_epi32(
               _mm_add_epi32(
                 _mm_unpacklo_epi32(
                   _mm_shuffle_epi32(_mm_mul_epu32(v267, G4_BITCAST<__m128i>(xmmword_1C7C950)), 8),
                   _mm_shuffle_epi32(
                     _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C950), 4), _mm_srli_si128(v267, 4)),
                     8)),
                 v229),
               v134),
             G4_BITCAST<__m128i>(xmmword_1C7C800)),
           0xBu);
  v137 = _mm_srai_epi32(
           _mm_add_epi32(
             _mm_add_epi32(
               _mm_add_epi32(
                 _mm_unpacklo_epi32(
                   _mm_shuffle_epi32(_mm_mul_epu32(v249, G4_BITCAST<__m128i>(xmmword_1C7C960)), 8),
                   _mm_shuffle_epi32(
                     _mm_mul_epu32(_mm_srli_si128(v249, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C960), 4)),
                     8)),
                 v229),
               v133),
             G4_BITCAST<__m128i>(xmmword_1C7C800)),
           0xBu);
  v138 = _mm_srai_epi32(
           _mm_add_epi32(
             _mm_add_epi32(
               _mm_add_epi32(
                 _mm_unpacklo_epi32(
                   _mm_shuffle_epi32(_mm_mul_epu32(v276, G4_BITCAST<__m128i>(xmmword_1C7C970)), 8),
                   _mm_shuffle_epi32(
                     _mm_mul_epu32(_mm_srli_si128(v276, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C970), 4)),
                     8)),
                 v227),
               v134),
             G4_BITCAST<__m128i>(xmmword_1C7C800)),
           0xBu);
  v268 = _mm_unpackhi_epi32(v232, v257);
  v139 = _mm_unpacklo_epi32(v138, v136);
  v140 = _mm_unpackhi_epi32(v138, v136);
  v141 = _mm_srai_epi32(v125, 0xBu);
  v142 = _mm_unpackhi_epi32(v141, v129);
  v143 = _mm_unpacklo_epi32(v141, v129);
  v144 = _mm_unpacklo_epi32(v137, v135);
  v145 = _mm_unpackhi_epi32(v137, v135);
  v146 = _mm_unpacklo_epi32(v232, v257);
  v147 = _mm_unpackhi_epi32(v146, v143);
  v250 = _mm_unpacklo_epi32(v146, v143);
  v148 = _mm_unpacklo_epi32(v268, v142);
  v149 = _mm_unpackhi_epi32(v268, v142);
  v150 = _mm_unpacklo_epi32(v139, v144);
  v151 = _mm_unpackhi_epi32(v139, v144);
  v152 = v140;
  v153 = _mm_unpackhi_epi32(v140, v145);
  v154 = _mm_unpacklo_epi32(v152, v145);
g4_m128_raw(a1[8]) = (g4_int128_t)_mm_unpacklo_epi32(v250, v150);
g4_m128_raw(a1[10]) = (g4_int128_t)_mm_unpacklo_epi32(v147, v151);
g4_m128_raw(a1[13]) = (g4_int128_t)_mm_unpackhi_epi32(v148, v154);
g4_m128_raw(a1[9]) = (g4_int128_t)_mm_unpackhi_epi32(v250, v150);
g4_m128_raw(a1[11]) = (g4_int128_t)_mm_unpackhi_epi32(v147, v151);
g4_m128_raw(a1[12]) = (g4_int128_t)_mm_unpacklo_epi32(v148, v154);
g4_m128_raw(a1[14]) = (g4_int128_t)_mm_unpacklo_epi32(v149, v153);
g4_m128_raw(a1[15]) = (g4_int128_t)_mm_unpackhi_epi32(v149, v153);
  v228 = -((uint8_t)((uint8_t)(uintptr_t)(a1) & 0xF) >> 2) & 3;
  result = (int32_t *)a1;
  if ( v228 != 0 )
  {
    for ( i = 8; ; --i )
    {
      v156 = result[56];
      v157 = result[48];
      v158 = *result + v156;
      v277 = *result - v156;
      v159 = result[8];
      v160 = v159 + v157;
      v251 = v159 - v157;
      v161 = result[40];
      v237 = v161 + result[16];
      v269 = result[16] - v161;
      v162 = result[24];
      v163 = v162 + result[32];
      v233 = v162 - result[32];
      v164 = v158 + v163;
      v165 = v158 - v163;
      v166 = v160 + v237;
      v238 = v160 - v237;
      *result = (v164 + v166 + 2) >> 2;
      v167 = 4433 * (v165 + v238);
      result[32] = (v164 - v166 + 2) >> 2;
      result[16] = (v167 + 6270 * v165 + 0x4000) >> 15;
      result[48] = (v167 - 15137 * v238 + 0x4000) >> 15;
      v168 = 9633 * (v251 + v233 + v277 + v269);
      v239 = -7373 * (v277 + v233);
      v169 = v168 - 3196 * (v277 + v269);
      v170 = v168 - 16069 * (v251 + v233);
      result[56] = (v170 + v239 + 2446 * v233 + 0x4000) >> 15;
      result[40] = (v169 + -20995 * (v251 + v269) + 16819 * v269 + 0x4000) >> 15;
      result[24] = (v170 + 25172 * v251 - 20995 * (v251 + v269) + 0x4000) >> 15;
      result[8] = (v169 + v239 + 12299 * v277 + 0x4000) >> 15;
      ++result;
      if ( v228 <= 9 - i )
        break;
    }
    v234 = i - 1;
  }
  else
  {
    v234 = 8;
  }
  v171 = -((uint8_t)((uint8_t)(uintptr_t)(a1) & 0xF) >> 2) & 3;
  v223 = (8 - v228) >> 2;
  v222 = 4 * v223;
  if ( 4 * v223 == 0 )
    goto LABEL_15;
  v240 = (int)(uintptr_t)(g4_m128_lane<int32_t>(a1[14], v171));
  v230 = (int)(uintptr_t)(g4_m128_lane<int32_t>(a1[2], v171));
  v225 = (int)(uintptr_t)(&g4_m128_lane<int32_t>(a1[12], v171));
  v224 = (int)(uintptr_t)(&g4_m128_lane<int32_t>(a1[4], v171));
  v221 = (int)(uintptr_t)(&g4_m128_lane<int32_t>(a1[10], v171));
  v172 = (int)(uintptr_t)(&g4_m128_lane<int32_t>(a1[8], v171));
  v252 = 0;
  v173 = 0;
  v174 = &g4_m128_lane<int8_t>(*(a1), 4 * v171);
  v175 = (char *)(v174 + 96);
  do
  {
    v176 = *(__m128i *)(v240 + v173);
    v177 = *(__m128i *)&v174[v173];
    v241 = _mm_sub_epi32(v177, v176);
    v178 = _mm_add_epi32(v177, v176);
    v179 = *(__m128i *)(v230 + v173);
    v180 = *(__m128i *)(v225 + v173);
    v278 = _mm_sub_epi32(v179, v180);
    v181 = _mm_add_epi32(v179, v180);
    v182 = *(__m128i *)(v224 + v173);
    v183 = *(__m128i *)(v221 + v173);
    v184 = _mm_sub_epi32(v182, v183);
    v185 = _mm_add_epi32(v182, v183);
    v186 = *(__m128i *)(v172 + v173);
    v187 = *(__m128i *)&v175[v173];
    v188 = _mm_sub_epi32(v187, v186);
    v189 = _mm_add_epi32(v187, v186);
    v190 = _mm_add_epi32(v178, v189);
    v191 = _mm_sub_epi32(v178, v189);
    v192 = v181;
    v193 = _mm_sub_epi32(v181, v185);
    v194 = _mm_add_epi32(v192, v185);
    *(__m128i *)&v174[v173] = _mm_srai_epi32(_mm_add_epi32(_mm_add_epi32(v190, v194), G4_BITCAST<__m128i>(xmmword_1C7C750)), 2u);
    *(__m128i *)(v172 + v173) = _mm_srai_epi32(_mm_add_epi32(_mm_sub_epi32(v190, v194), G4_BITCAST<__m128i>(xmmword_1C7C750)), 2u);
    v195 = _mm_add_epi32(v193, v191);
    v196 = _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v195, G4_BITCAST<__m128i>(xmmword_1C7C8C0)), 8),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8C0), 4), _mm_srli_si128(v195, 4)), 8));
    *(__m128i *)(v224 + v173) = _mm_srai_epi32(
                                  _mm_add_epi32(
                                    _mm_add_epi32(
                                      _mm_unpacklo_epi32(
                                        _mm_shuffle_epi32(_mm_mul_epu32(v191, G4_BITCAST<__m128i>(xmmword_1C7C8D0)), 8),
                                        _mm_shuffle_epi32(
                                          _mm_mul_epu32(
                                            _mm_srli_si128(v191, 4),
                                            _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8D0), 4)),
                                          8)),
                                      v196),
                                    G4_BITCAST<__m128i>(xmmword_1C7C980)),
                                  0xFu);
    *(__m128i *)(v225 + v173) = _mm_srai_epi32(
                                  _mm_add_epi32(
                                    _mm_add_epi32(
                                      _mm_unpacklo_epi32(
                                        _mm_shuffle_epi32(_mm_mul_epu32(v193, G4_BITCAST<__m128i>(xmmword_1C7C8E0)), 8),
                                        _mm_shuffle_epi32(
                                          _mm_mul_epu32(
                                            _mm_srli_si128(v193, 4),
                                            _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8E0), 4)),
                                          8)),
                                      v196),
                                    G4_BITCAST<__m128i>(xmmword_1C7C980)),
                                  0xFu);
    v197 = _mm_add_epi32(v278, v188);
    v198 = _mm_add_epi32(v241, v184);
    v199 = _mm_add_epi32(v197, v198);
    v270 = _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v199, G4_BITCAST<__m128i>(xmmword_1C7C8F0)), 8),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C8F0), 4), _mm_srli_si128(v199, 4)), 8));
    v200 = _mm_add_epi32(v241, v188);
    v259 = _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v200, G4_BITCAST<__m128i>(xmmword_1C7C900)), 8),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C900), 4), _mm_srli_si128(v200, 4)), 8));
    v201 = _mm_add_epi32(v278, v184);
    v202 = _mm_unpacklo_epi32(
             _mm_shuffle_epi32(_mm_mul_epu32(v201, G4_BITCAST<__m128i>(xmmword_1C7C910)), 8),
             _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C910), 4), _mm_srli_si128(v201, 4)), 8));
    v203 = _mm_add_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v197, G4_BITCAST<__m128i>(xmmword_1C7C920)), 8),
               _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v197, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C920), 4)), 8)),
             v270);
    v204 = _mm_add_epi32(
             _mm_unpacklo_epi32(
               _mm_shuffle_epi32(_mm_mul_epu32(v198, G4_BITCAST<__m128i>(xmmword_1C7C930)), 8),
               _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v198, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C930), 4)), 8)),
             v270);
    *(__m128i *)(v240 + v173) = _mm_srai_epi32(
                                  _mm_add_epi32(
                                    _mm_add_epi32(
                                      _mm_add_epi32(
                                        _mm_unpacklo_epi32(
                                          _mm_shuffle_epi32(_mm_mul_epu32(v188, G4_BITCAST<__m128i>(xmmword_1C7C940)), 8),
                                          _mm_shuffle_epi32(
                                            _mm_mul_epu32(
                                              _mm_srli_si128(v188, 4),
                                              _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C940), 4)),
                                            8)),
                                        v259),
                                      v203),
                                    G4_BITCAST<__m128i>(xmmword_1C7C980)),
                                  0xFu);
    *(__m128i *)(v221 + v173) = _mm_srai_epi32(
                                  _mm_add_epi32(
                                    _mm_add_epi32(
                                      _mm_add_epi32(
                                        _mm_unpacklo_epi32(
                                          _mm_shuffle_epi32(_mm_mul_epu32(v184, G4_BITCAST<__m128i>(xmmword_1C7C950)), 8),
                                          _mm_shuffle_epi32(
                                            _mm_mul_epu32(
                                              _mm_srli_si128(v184, 4),
                                              _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C950), 4)),
                                            8)),
                                        v202),
                                      v204),
                                    G4_BITCAST<__m128i>(xmmword_1C7C980)),
                                  0xFu);
    *(__m128i *)&v175[v173] = _mm_srai_epi32(
                                _mm_add_epi32(
                                  _mm_add_epi32(
                                    _mm_add_epi32(
                                      _mm_unpacklo_epi32(
                                        _mm_shuffle_epi32(_mm_mul_epu32(v278, G4_BITCAST<__m128i>(xmmword_1C7C960)), 8),
                                        _mm_shuffle_epi32(
                                          _mm_mul_epu32(
                                            _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C960), 4),
                                            _mm_srli_si128(v278, 4)),
                                          8)),
                                      v202),
                                    v203),
                                  G4_BITCAST<__m128i>(xmmword_1C7C980)),
                                0xFu);
    *(__m128i *)(v230 + v173) = _mm_srai_epi32(
                                  _mm_add_epi32(
                                    _mm_add_epi32(
                                      _mm_add_epi32(
                                        _mm_unpacklo_epi32(
                                          _mm_shuffle_epi32(_mm_mul_epu32(v241, G4_BITCAST<__m128i>(xmmword_1C7C970)), 8),
                                          _mm_shuffle_epi32(
                                            _mm_mul_epu32(
                                              _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C970), 4),
                                              _mm_srli_si128(v241, 4)),
                                            8)),
                                        v259),
                                      v204),
                                    G4_BITCAST<__m128i>(xmmword_1C7C980)),
                                  0xFu);
    ++v252;
    v173 += 16;
  }
  while ( v223 > v252 );
  v234 -= v222;
  result += 4 * v223;
  if ( 8 - v228 != v222 )
  {
LABEL_15:
    do
    {
      v205 = result[56];
      v206 = result[48];
      v207 = *result + v205;
      v242 = *result - v205;
      v208 = result[8];
      v209 = v208 + v206;
      v279 = v208 - v206;
      v210 = result[40];
      v260 = v210 + result[16];
      v253 = result[16] - v210;
      v211 = result[24];
      v212 = v211 + result[32];
      v271 = v211 - result[32];
      v213 = v207 + v212;
      v214 = v207 - v212;
      v215 = v209 + v260;
      v261 = v209 - v260;
      *result = (v213 + v215 + 2) >> 2;
      v216 = 4433 * (v214 + v261);
      result[32] = (v213 - v215 + 2) >> 2;
      result[16] = (v216 + 6270 * v214 + 0x4000) >> 15;
      result[48] = (v216 - 15137 * v261 + 0x4000) >> 15;
      v217 = 9633 * (v279 + v271 + v242 + v253);
      v262 = -7373 * (v242 + v271);
      v218 = v217 - 16069 * (v279 + v271);
      v219 = v217 - 3196 * (v242 + v253);
      result[56] = (v218 + v262 + 2446 * v271 + 0x4000) >> 15;
      result[40] = (v219 + -20995 * (v279 + v253) + 16819 * v253 + 0x4000) >> 15;
      result[24] = (v218 + 25172 * v279 - 20995 * (v279 + v253) + 0x4000) >> 15;
      v220 = v234-- == 1;
      result[8] = (v219 + v262 + 12299 * v242 + 0x4000) >> 15;
      ++result;
    }
    while ( !v220 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_idct_float  (binary VA: 0xfc6520)
// Original: jpeg_idct_float
// ----------------------------------------------------------------------------
float * jpeg_idct_float(int a1, int a2, int a3, uint32_t *a4, int a5)
{
  uint16_t *v5;
  float *v6;
  float *v7;
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm5_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm2_4
  float v25; // xmm7_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm6_4
  float v30; // xmm5_4
  int16_t v31; // si
  int16_t v32; // di
  float *result;
  float v35; // xmm7_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm5_4
  uint8_t *v39;
  float v40; // xmm4_4
  float v41; // xmm0_4
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm7_4
  float v46; // xmm0_4
  float v47; // xmm6_4
  float v48; // xmm5_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm6_4
  float v53; // xmm5_4
  float v54; // xmm0_4
  typedef int16_t _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int16_t _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef int16_t _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int16_t _g4_t_v65;
  typedef int16_t _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint8_t _g4_t_v68[256];
  typedef char _g4_t_v69;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v55)) > _g4_s0 ? (0u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v56)) > _g4_s1 ? (0u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v57)) > _g4_s2 ? (0u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v58)) > _g4_s3 ? (4u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v59)) > _g4_s4 ? (4u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v60)) > _g4_s5 ? (4u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v61)) > _g4_s6 ? (8u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v62)) > _g4_s7 ? (8u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v63)) > _g4_s8 ? (12u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v64)) > _g4_s9 ? (12u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v65)) > _g4_s10 ? (16u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (18u + sizeof(_g4_t_v66)) > _g4_s11 ? (18u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v67)) > _g4_s12 ? (20u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v68)) > _g4_s13 ? (24u + sizeof(_g4_t_v68)) : _g4_s13,
    _g4_s15 = (280u + sizeof(_g4_t_v69)) > _g4_s14 ? (280u + sizeof(_g4_t_v69)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 18u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 280u);

  v5 = (uint16_t *)(a3 + 2);
  v61 = 8;
  v67 = *(uint32_t *)(a1 + 288) + 128;
  v6 = (float *)v68;
  v7 = (float *)(*(uint32_t *)(a2 + 80) + 4);
  do
  {
    v31 = v5[7];
    v32 = v5[15];
    if ( v31 != 0 || v32 != 0 )
    {
      v55 = v5[31];
      v58 = v5[47];
      v63 = v5[23];
      v65 = v5[39];
      v66 = v5[55];
      goto LABEL_5;
    }
    v63 = v5[23];
    if ( v63 != 0 )
    {
      v55 = v5[31];
      v58 = v5[47];
      v65 = v5[39];
      v66 = v5[55];
LABEL_5:
      v8 = (float)v55 * v7[31];
      v9 = (float)(int16_t)*(v5 - 1) * *(v7 - 1);
      v10 = (float)v58 * v7[47];
      v11 = (float)v32 * v7[15];
      v12 = v8 + v9;
      v13 = v9 - v8;
      v14 = v10 + v11;
      v15 = (float)(v10 + v11) + v12;
      v16 = (float)((float)(v11 - v10) * 1.4142135f) - (float)(v10 + v11);
      v56 = v12 - v14;
      v17 = v16 + v13;
      v18 = v13 - v16;
      v19 = (float)v66 * v7[55];
      v20 = (float)v31 * v7[7];
      v21 = (float)v63 * v7[23];
      v22 = v19 + v20;
      v59 = v18;
      v23 = v20 - v19;
      v24 = (float)v65 * v7[39];
      v25 = v24 - v21;
      v64 = v24 + v21;
      v26 = (float)(v24 + v21) + v22;
      v27 = (float)(v23 + v25) * 1.847759f;
      v28 = (float)(v27 - v26) + (float)(v25 * -2.613126f);
      *v6 = v26 + v15;
      v6[56] = v15 - v26;
      v29 = (float)((float)(v22 - v64) * 1.4142135f) - v28;
      v30 = (float)((float)(v23 * 1.0823922f) - v27) + v29;
      v6[8] = v28 + v17;
      v6[48] = v17 - v28;
      v6[16] = v59 + v29;
      v6[40] = v59 - v29;
      v6[32] = v56 + v30;
      v6[24] = v56 - v30;
      ++v6;
      goto LABEL_6;
    }
    v55 = v5[31];
    if ( v55 != 0 )
    {
      v58 = v5[47];
      v65 = v5[39];
      v66 = v5[55];
      v32 = 0;
      goto LABEL_5;
    }
    v65 = v5[39];
    if ( v65 != 0 )
    {
      v58 = v5[47];
      v66 = v5[55];
      v63 = 0;
      v32 = 0;
      goto LABEL_5;
    }
    v58 = v5[47];
    v66 = v5[55];
    if ( v58 != 0 )
    {
      v32 = 0;
      v63 = 0;
      v55 = 0;
      goto LABEL_5;
    }
    if ( v5[55] != 0 )
    {
      v32 = 0;
      v65 = 0;
      v63 = 0;
      v55 = 0;
      goto LABEL_5;
    }
    v54 = (float)(int16_t)*(v5 - 1) * *(v7 - 1);
    *v6 = v54;
    v6[8] = v54;
    v6[16] = v54;
    v6[24] = v54;
    v6[32] = v54;
    v6[40] = v54;
    v6[48] = v54;
    v6[56] = v54;
    ++v6;
LABEL_6:
    ++v5;
    ++v7;
    --v61;
  }
  while ( v61 != 0 );
  result = (float *)v68;
  do
  {
    v35 = result[5];
    v36 = result[2];
    v37 = result[6] + v36;
    v38 = result[1];
    v39 = (uint8_t *)(*a4++ + a5);
    v40 = (float)(result[4] + *result) + v37;
    v41 = (float)((float)(v36 - result[6]) * 1.4142135f) - v37;
    v62 = (float)(result[4] + *result) - v37;
    v42 = (float)(*result - result[4]) + v41;
    v43 = (float)(*result - result[4]) - v41;
    v44 = result[3] + v35;
    v45 = v35 - result[3];
    v46 = result[7];
    result += 8;
    v47 = v46 + v38;
    v57 = v43;
    v48 = v38 - v46;
    v60 = v44;
    v49 = v44 + v47;
    v50 = (float)(v48 + v45) * 1.847759f;
    v51 = (float)(v50 - v49) + (float)(v45 * -2.613126f);
    v52 = (float)((float)(v47 - v60) * 1.4142135f) - v51;
    *v39 = *(uint8_t *)(v67 + ((((int)(float)(v49 + v40) + 4) >> 3) & 0x3FF));
    v53 = (float)((float)(v48 * 1.0823922f) - v50) + v52;
    v39[7] = *(uint8_t *)(v67 + ((((int)(float)(v40 - v49) + 4) >> 3) & 0x3FF));
    v39[1] = *(uint8_t *)(v67 + ((((int)(float)(v51 + v42) + 4) >> 3) & 0x3FF));
    v39[6] = *(uint8_t *)(v67 + ((((int)(float)(v42 - v51) + 4) >> 3) & 0x3FF));
    v39[2] = *(uint8_t *)(v67 + ((((int)(float)(v57 + v52) + 4) >> 3) & 0x3FF));
    v39[5] = *(uint8_t *)(v67 + ((((int)(float)(v57 - v52) + 4) >> 3) & 0x3FF));
    v39[4] = *(uint8_t *)(v67 + ((((int)(float)(v62 + v53) + 4) >> 3) & 0x3FF));
    v39[3] = *(uint8_t *)(v67 + ((((int)(float)(v62 - v53) + 4) >> 3) & 0x3FF));
  }
  while ( result != (float *)&v69 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_idct_ifast  (binary VA: 0xfc6ab0)
// Original: jpeg_idct_ifast
// ----------------------------------------------------------------------------
int * jpeg_idct_ifast(int a1, int a2, int a3, int a4, int a5)
{
  uint16_t *v5;
  int *v6;
  uint32_t *v7;
  int16_t v8; // di
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
  int16_t v22; // si
  int *result;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint8_t *v32;
  int v33;
  int v34;
  int v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int16_t _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
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
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int16_t _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int16_t _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int16_t _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint8_t _g4_t_v73[268];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v36)) > _g4_s0 ? (0u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v37)) > _g4_s1 ? (0u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v38)) > _g4_s2 ? (0u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v39)) > _g4_s3 ? (0u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v40)) > _g4_s4 ? (0u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v41)) > _g4_s5 ? (4u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v42)) > _g4_s6 ? (4u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v43)) > _g4_s7 ? (4u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v44)) > _g4_s8 ? (4u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v45)) > _g4_s9 ? (4u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v46)) > _g4_s10 ? (4u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v47)) > _g4_s11 ? (8u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v48)) > _g4_s12 ? (8u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v49)) > _g4_s13 ? (8u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v50)) > _g4_s14 ? (8u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v51)) > _g4_s15 ? (12u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v52)) > _g4_s16 ? (12u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v53)) > _g4_s17 ? (12u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v54)) > _g4_s18 ? (16u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v55)) > _g4_s19 ? (16u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_v56)) > _g4_s20 ? (16u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (20u + sizeof(_g4_t_v57)) > _g4_s21 ? (20u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (20u + sizeof(_g4_t_v58)) > _g4_s22 ? (20u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (20u + sizeof(_g4_t_v59)) > _g4_s23 ? (20u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (24u + sizeof(_g4_t_v60)) > _g4_s24 ? (24u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v61)) > _g4_s25 ? (24u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (24u + sizeof(_g4_t_v62)) > _g4_s26 ? (24u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (24u + sizeof(_g4_t_v63)) > _g4_s27 ? (24u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (28u + sizeof(_g4_t_v64)) > _g4_s28 ? (28u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (28u + sizeof(_g4_t_v65)) > _g4_s29 ? (28u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (28u + sizeof(_g4_t_v66)) > _g4_s30 ? (28u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (32u + sizeof(_g4_t_v67)) > _g4_s31 ? (32u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (32u + sizeof(_g4_t_v68)) > _g4_s32 ? (32u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (32u + sizeof(_g4_t_v69)) > _g4_s33 ? (32u + sizeof(_g4_t_v69)) : _g4_s33,
    _g4_s35 = (32u + sizeof(_g4_t_v70)) > _g4_s34 ? (32u + sizeof(_g4_t_v70)) : _g4_s34,
    _g4_s36 = (38u + sizeof(_g4_t_v71)) > _g4_s35 ? (38u + sizeof(_g4_t_v71)) : _g4_s35,
    _g4_s37 = (40u + sizeof(_g4_t_v72)) > _g4_s36 ? (40u + sizeof(_g4_t_v72)) : _g4_s36,
    _g4_s38 = (44u + sizeof(_g4_t_v73)) > _g4_s37 ? (44u + sizeof(_g4_t_v73)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 38u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);

  v5 = (uint16_t *)(a3 + 2);
  v54 = 8;
  v72 = *(uint32_t *)(a1 + 288) + 128;
  v6 = (int *)v73;
  v7 = (uint32_t *)(*(uint32_t *)(a2 + 80) + 4);
  do
  {
    v22 = v5[15];
    if ( v5[7] != 0 || v22 != 0 )
    {
      v8 = v5[31];
      v41 = v5[47];
      v64 = v5[23];
      v67 = v5[39];
      v71 = v5[55];
      goto LABEL_5;
    }
    v64 = v5[23];
    v8 = v5[31];
    if ( v64 != 0 )
    {
      v41 = v5[47];
      v67 = v5[39];
      v71 = v5[55];
LABEL_5:
      v47 = v7[15] * v22;
      v9 = *(v7 - 1) * (int16_t)*(v5 - 1);
      v10 = v7[31] * v8;
      v36 = v7[47] * v41;
      v42 = v9 + v10;
      v11 = 362 * (v47 - v36);
      v60 = v9 - v10;
      v12 = v36 + v47;
      v48 = v36 + v47 + v42;
      v43 = v42 - v12;
      v13 = (v11 >> 8) - v12;
      v14 = v13 + v60;
      v61 = v60 - v13;
      v57 = v14;
      v51 = v7[7] * (int16_t)v5[7];
      v15 = v7[23] * v64;
      v16 = v7[39] * v67;
      v37 = v7[55] * v71;
      v65 = v16 + v15;
      v17 = v16 - v15;
      v68 = v51 - v37;
      v18 = v37 + v51 - v65;
      v52 = v37 + v51 + v65;
      v19 = 473 * (v17 + v68);
      v20 = (v19 >> 8) + ((-669 * v17) >> 8) - v52;
      v21 = ((362 * v18) >> 8) - v20;
      v38 = v21 + ((277 * v68) >> 8) - (v19 >> 8);
      *v6 = v52 + v48;
      v6[56] = v48 - v52;
      v6[8] = v20 + v57;
      v6[48] = v57 - v20;
      v6[16] = v21 + v61;
      v6[40] = v61 - v21;
      v6[32] = v38 + v43;
      v6[24] = v43 - v38;
      ++v6;
      goto LABEL_6;
    }
    if ( v8 != 0 )
    {
      v41 = v5[47];
      v71 = v5[55];
      v67 = v5[39];
      v22 = 0;
      goto LABEL_5;
    }
    v67 = v5[39];
    v41 = v5[47];
    if ( v67 != 0 )
    {
      v64 = 0;
      v71 = v5[55];
      v22 = 0;
      goto LABEL_5;
    }
    if ( v5[47] != 0 )
    {
      v71 = v5[55];
      v64 = 0;
      v8 = 0;
      v22 = 0;
      goto LABEL_5;
    }
    v71 = v5[55];
    if ( v71 != 0 )
    {
      v22 = v5[47];
      v67 = v22;
      v64 = v22;
      v8 = v22;
      goto LABEL_5;
    }
    v34 = *(v7 - 1) * (int16_t)*(v5 - 1);
    *v6 = v34;
    v6[8] = v34;
    v6[16] = v34;
    v6[24] = v34;
    v6[32] = v34;
    v6[40] = v34;
    v6[48] = v34;
    v6[56] = v34;
    ++v6;
LABEL_6:
    ++v5;
    ++v7;
    --v54;
  }
  while ( v54 != 0 );
  v53 = 0;
  result = (int *)v73;
  do
  {
    v32 = (uint8_t *)(*(uint32_t *)(a4 + 4 * v53) + a5);
    v33 = result[1];
    if ( v33 != 0 )
    {
      v44 = result[4];
      v24 = result[2];
      goto LABEL_12;
    }
    v24 = result[2];
    if ( v24 != 0 )
    {
      v44 = result[4];
LABEL_12:
      v58 = result[6];
      v55 = result[5];
      v49 = result[3];
      v62 = result[7];
LABEL_13:
      v39 = v44 + *result;
      v45 = *result - v44;
      v25 = v24 + v58;
      v26 = ((362 * (v24 - v58)) >> 8) - (v24 + v58);
      v59 = v25 + v39;
      v40 = v39 - v25;
      v66 = v26 + v45;
      v46 = v45 - v26;
      v27 = v33 + v62;
      v69 = v49 + v55;
      v63 = v33 - v62;
      v28 = v55;
      v56 = v27 + v49 + v55;
      v29 = v28 - v49;
      v30 = 473 * (v29 + v63);
      v31 = (v30 >> 8) + ((-669 * v29) >> 8) - v56;
      v70 = ((362 * (v27 - v69)) >> 8) - v31;
      v50 = v70 + ((277 * v63) >> 8) - (v30 >> 8);
      result += 8;
      *v32 = *(uint8_t *)(v72 + (((v56 + v59) >> 5) & 0x3FF));
      v32[7] = *(uint8_t *)(v72 + (((v59 - v56) >> 5) & 0x3FF));
      v32[1] = *(uint8_t *)(v72 + (((v31 + v66) >> 5) & 0x3FF));
      v32[6] = *(uint8_t *)(v72 + (((v66 - v31) >> 5) & 0x3FF));
      v32[2] = *(uint8_t *)(v72 + (((v70 + v46) >> 5) & 0x3FF));
      v32[5] = *(uint8_t *)(v72 + (((v46 - v70) >> 5) & 0x3FF));
      v32[4] = *(uint8_t *)(v72 + (((v50 + v40) >> 5) & 0x3FF));
      v32[3] = *(uint8_t *)(v72 + (((v40 - v50) >> 5) & 0x3FF));
      goto LABEL_14;
    }
    v49 = result[3];
    if ( v49 != 0 )
    {
      v44 = result[4];
      v58 = result[6];
      v55 = result[5];
      v62 = result[7];
      goto LABEL_13;
    }
    v44 = result[4];
    if ( v44 != 0 )
    {
      v58 = result[6];
      v55 = result[5];
      v62 = result[7];
      v24 = 0;
      goto LABEL_13;
    }
    v55 = result[5];
    if ( v55 != 0 )
    {
      v58 = result[6];
      v62 = result[7];
      v49 = 0;
      v24 = 0;
      goto LABEL_13;
    }
    v58 = result[6];
    v62 = result[7];
    if ( v58 != 0 )
    {
      v24 = 0;
      v49 = 0;
      v44 = 0;
      goto LABEL_13;
    }
    if ( result[7] != 0 )
    {
      v24 = 0;
      v49 = 0;
      v55 = 0;
      v44 = 0;
      goto LABEL_13;
    }
    v35 = *result;
    result += 8;
    LOBYTE(v35) = *(uint8_t *)(v72 + ((v35 >> 5) & 0x3FF));
    *v32 = v35;
    v32[1] = v35;
    v32[2] = v35;
    v32[3] = v35;
    v32[4] = v35;
    v32[5] = v35;
    v32[6] = v35;
    v32[7] = v35;
LABEL_14:
    ++v53;
  }
  while ( v53 != 8 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_idct_islow  (binary VA: 0xfc7120)
// Original: jpeg_idct_islow
// ----------------------------------------------------------------------------
int * jpeg_idct_islow(int a1, int a2, int a3, int a4, int a5)
{
  uint16_t *v5;
  int *v6;
  uint32_t *v7;
  int16_t v8; // bp
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
  int16_t v22; // si
  int *result;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint8_t *v31;
  int v32;
  int v33;
  int v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int16_t _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int16_t _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int16_t _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int16_t _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
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
  typedef uint8_t _g4_t_v80[268];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v36)) > _g4_s1 ? (0u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v37)) > _g4_s2 ? (0u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v38)) > _g4_s3 ? (0u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v39)) > _g4_s4 ? (4u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v40)) > _g4_s5 ? (4u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v41)) > _g4_s6 ? (4u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v42)) > _g4_s7 ? (4u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v43)) > _g4_s8 ? (8u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v44)) > _g4_s9 ? (8u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v45)) > _g4_s10 ? (8u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v46)) > _g4_s11 ? (8u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v47)) > _g4_s12 ? (8u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v48)) > _g4_s13 ? (8u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v49)) > _g4_s14 ? (8u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v50)) > _g4_s15 ? (12u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v51)) > _g4_s16 ? (12u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v52)) > _g4_s17 ? (12u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v53)) > _g4_s18 ? (12u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v54)) > _g4_s19 ? (16u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_v55)) > _g4_s20 ? (16u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (16u + sizeof(_g4_t_v56)) > _g4_s21 ? (16u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (20u + sizeof(_g4_t_v57)) > _g4_s22 ? (20u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (20u + sizeof(_g4_t_v58)) > _g4_s23 ? (20u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (20u + sizeof(_g4_t_v59)) > _g4_s24 ? (20u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (20u + sizeof(_g4_t_v60)) > _g4_s25 ? (20u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (20u + sizeof(_g4_t_v61)) > _g4_s26 ? (20u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (24u + sizeof(_g4_t_v62)) > _g4_s27 ? (24u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (24u + sizeof(_g4_t_v63)) > _g4_s28 ? (24u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (24u + sizeof(_g4_t_v64)) > _g4_s29 ? (24u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (24u + sizeof(_g4_t_v65)) > _g4_s30 ? (24u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (28u + sizeof(_g4_t_v66)) > _g4_s31 ? (28u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (28u + sizeof(_g4_t_v67)) > _g4_s32 ? (28u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (28u + sizeof(_g4_t_v68)) > _g4_s33 ? (28u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (32u + sizeof(_g4_t_v69)) > _g4_s34 ? (32u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (32u + sizeof(_g4_t_v70)) > _g4_s35 ? (32u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (40u + sizeof(_g4_t_v71)) > _g4_s36 ? (40u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (44u + sizeof(_g4_t_v72)) > _g4_s37 ? (44u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (44u + sizeof(_g4_t_v73)) > _g4_s38 ? (44u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (48u + sizeof(_g4_t_v74)) > _g4_s39 ? (48u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (48u + sizeof(_g4_t_v75)) > _g4_s40 ? (48u + sizeof(_g4_t_v75)) : _g4_s40,
    _g4_s42 = (52u + sizeof(_g4_t_v76)) > _g4_s41 ? (52u + sizeof(_g4_t_v76)) : _g4_s41,
    _g4_s43 = (56u + sizeof(_g4_t_v77)) > _g4_s42 ? (56u + sizeof(_g4_t_v77)) : _g4_s42,
    _g4_s44 = (56u + sizeof(_g4_t_v78)) > _g4_s43 ? (56u + sizeof(_g4_t_v78)) : _g4_s43,
    _g4_s45 = (60u + sizeof(_g4_t_v79)) > _g4_s44 ? (60u + sizeof(_g4_t_v79)) : _g4_s44,
    _g4_s46 = (64u + sizeof(_g4_t_v80)) > _g4_s45 ? (64u + sizeof(_g4_t_v80)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 48u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 56u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 60u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 64u);

  v5 = (uint16_t *)(a3 + 2);
  v69 = 8;
  v79 = *(uint32_t *)(a1 + 288) + 128;
  v6 = (int *)v80;
  v7 = (uint32_t *)(*(uint32_t *)(a2 + 80) + 4);
  do
  {
    v22 = v5[15];
    if ( v5[7] != 0 || v22 != 0 )
    {
      v8 = v5[47];
      v62 = v5[31];
      v43 = v5[55];
      v66 = v5[39];
      v50 = v5[23];
      goto LABEL_5;
    }
    v50 = v5[23];
    if ( v50 != 0 )
    {
      v8 = v5[47];
      v62 = v5[31];
      v43 = v5[55];
      v66 = v5[39];
LABEL_5:
      v9 = v7[15] * v22;
      v10 = v7[47] * v8;
      v11 = 4433 * (v9 + v10);
      v57 = v11 - 15137 * v10;
      v39 = v11 + 6270 * v9;
      v12 = *(v7 - 1) * (int16_t)*(v5 - 1);
      v13 = v7[31] * v62;
      v14 = (v12 + v13) << 13;
      v63 = v14 + v39;
      v40 = v14 - v39;
      v15 = (v12 - v13) << 13;
      v72 = v7[55] * v43;
      v54 = v15 + v57;
      v16 = v7[39] * v66;
      v58 = v15 - v57;
      v17 = v7[23] * v50;
      v35 = v7[7] * (int16_t)v5[7];
      v71 = v16 + v17;
      v67 = v16 + v35;
      v44 = 9633 * (v16 + v35 + v17 + v72);
      v76 = 25172 * v17;
      v74 = 16819 * v16;
      v77 = 12299 * v35;
      v18 = v44 - 16069 * (v17 + v72);
      v36 = -7373 * (v72 + v35);
      v19 = v44 - 3196 * v67;
      v51 = 2446 * v72 + v18 + v36;
      v45 = v76 + -20995 * v71 + v18;
      v20 = v19 - 20995 * v71;
      v21 = v77 + v36 + v19;
      *v6 = (v63 + v21 + 1024) >> 11;
      v6[56] = (v63 - v21 + 1024) >> 11;
      v6[8] = (v54 + v45 + 1024) >> 11;
      v6[48] = (v54 - v45 + 1024) >> 11;
      v6[16] = (v58 + v74 + v20 + 1024) >> 11;
      v6[40] = (v58 - (v74 + v20) + 1024) >> 11;
      v6[24] = (v40 + v51 + 1024) >> 11;
      v6[32] = (v40 - v51 + 1024) >> 11;
      ++v6;
      goto LABEL_6;
    }
    v62 = v5[31];
    if ( v62 != 0 )
    {
      v43 = v5[55];
      v8 = v5[47];
      v66 = v5[39];
      v22 = 0;
      goto LABEL_5;
    }
    v66 = v5[39];
    v8 = v5[47];
    v43 = v5[55];
    if ( v66 != 0 )
    {
      v50 = 0;
      v22 = 0;
      goto LABEL_5;
    }
    if ( v8 != 0 )
    {
      v50 = 0;
      v62 = 0;
      v22 = 0;
      goto LABEL_5;
    }
    if ( v5[55] != 0 )
    {
      v50 = 0;
      v66 = 0;
      v62 = 0;
      v22 = 0;
      goto LABEL_5;
    }
    v33 = 4 * *(v7 - 1) * (int16_t)*(v5 - 1);
    *v6 = v33;
    v6[8] = v33;
    v6[16] = v33;
    v6[24] = v33;
    v6[32] = v33;
    v6[40] = v33;
    v6[48] = v33;
    v6[56] = v33;
    ++v6;
LABEL_6:
    ++v5;
    ++v7;
    --v69;
  }
  while ( v69 != 0 );
  v70 = 0;
  result = (int *)v80;
  while ( 2 )
  {
    v30 = result[1];
    v31 = (uint8_t *)(*(uint32_t *)(a4 + 4 * v70) + a5);
    v32 = result[2];
    if ( v30 != 0 || v32 != 0 )
    {
      v46 = result[6];
      v64 = result[4];
      v41 = result[7];
      v59 = result[5];
      v37 = result[3];
      v24 = v46;
      goto LABEL_13;
    }
    v37 = result[3];
    if ( v37 != 0 )
    {
      v46 = result[6];
      v64 = result[4];
      v41 = result[7];
      v59 = result[5];
      v24 = v46;
      goto LABEL_13;
    }
    v64 = result[4];
    if ( v64 != 0 )
    {
      v46 = result[6];
      v41 = result[7];
      v59 = result[5];
      v32 = 0;
      v24 = v46;
      goto LABEL_13;
    }
    v59 = result[5];
    if ( v59 != 0 )
    {
      v46 = result[6];
      v41 = result[7];
      v37 = 0;
      v32 = 0;
      v24 = v46;
LABEL_13:
      v25 = 4433 * (v32 + v24);
      v55 = v25 + 6270 * v32;
      v52 = v25 - 15137 * v46;
      v47 = (*result - v64) << 13;
      v26 = (*result + v64) << 13;
      v65 = v26 + v55;
      v56 = v26 - v55;
      v68 = v47 + v52;
      v53 = v47 - v52;
      v78 = v30 + v59;
      v48 = 9633 * (v37 + v41 + v30 + v59);
      v73 = 16819 * v59;
      v75 = 25172 * v37;
      v27 = v48 - 16069 * (v37 + v41);
      v60 = -20995 * (v37 + v59);
      v38 = -7373 * (v30 + v41);
      v28 = v48 - 3196 * v78;
      v42 = 2446 * v41 + v27 - 7373 * (v30 + v41);
      v49 = v73 + v28 + v60;
      v61 = v75 + v60 + v27;
      v29 = v38 + v28 + 12299 * v30;
      result += 8;
      *v31 = *(uint8_t *)(v79 + (((v65 + v29 + 0x20000) >> 18) & 0x3FF));
      v31[7] = *(uint8_t *)(v79 + (((v65 - v29 + 0x20000) >> 18) & 0x3FF));
      v31[1] = *(uint8_t *)(v79 + (((v68 + v61 + 0x20000) >> 18) & 0x3FF));
      v31[6] = *(uint8_t *)(v79 + (((v68 - v61 + 0x20000) >> 18) & 0x3FF));
      v31[2] = *(uint8_t *)(v79 + (((v53 + v49 + 0x20000) >> 18) & 0x3FF));
      v31[5] = *(uint8_t *)(v79 + (((v53 - v49 + 0x20000) >> 18) & 0x3FF));
      v31[3] = *(uint8_t *)(v79 + (((v56 + v42 + 0x20000) >> 18) & 0x3FF));
      v31[4] = *(uint8_t *)(v79 + (((v56 - v42 + 0x20000) >> 18) & 0x3FF));
      goto LABEL_14;
    }
    v46 = result[6];
    v41 = result[7];
    if ( v46 != 0 )
    {
      v32 = 0;
      v24 = result[6];
      v37 = 0;
      v64 = 0;
      goto LABEL_13;
    }
    if ( result[7] != 0 )
    {
      v32 = 0;
      v37 = 0;
      v59 = 0;
      v64 = 0;
      v24 = 0;
      goto LABEL_13;
    }
    v34 = *result;
    result += 8;
    LOBYTE(v34) = *(uint8_t *)(v79 + (((v34 + 16) >> 5) & 0x3FF));
    *v31 = v34;
    v31[1] = v34;
    v31[2] = v34;
    v31[3] = v34;
    v31[4] = v34;
    v31[5] = v34;
    v31[6] = v34;
    v31[7] = v34;
LABEL_14:
    if ( ++v70 != 8 )
      continue;
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: jpeg_idct_4x4  (binary VA: 0xfc7870)
// Original: jpeg_idct_4x4
// ----------------------------------------------------------------------------
uint8_t * jpeg_idct_4x4(int a1, int a2, int a3, uint32_t *a4, int a5)
{
  int *v5;
  uint32_t *v6;
  uint16_t *v7;
  int v8;
  int v9;
  int v10;
  int16_t v11; // di
  int16_t v12; // bp
  int v13;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint8_t *v21;
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
  uint8_t *result;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  char v42;
  char v43;
  char v44;
  char v45;
  typedef int16_t _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int16_t _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int16_t _g4_t_v58;
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
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int16_t _g4_t_v71;
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
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
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
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v47)) > _g4_s1 ? (0u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v48)) > _g4_s2 ? (0u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v49)) > _g4_s3 ? (0u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v50)) > _g4_s4 ? (0u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v51)) > _g4_s5 ? (0u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v52)) > _g4_s6 ? (4u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v53)) > _g4_s7 ? (4u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v54)) > _g4_s8 ? (4u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v55)) > _g4_s9 ? (4u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v56)) > _g4_s10 ? (4u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v57)) > _g4_s11 ? (4u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v58)) > _g4_s12 ? (8u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v59)) > _g4_s13 ? (8u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v60)) > _g4_s14 ? (8u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (8u + sizeof(_g4_t_v61)) > _g4_s15 ? (8u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (8u + sizeof(_g4_t_v62)) > _g4_s16 ? (8u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (8u + sizeof(_g4_t_v63)) > _g4_s17 ? (8u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (8u + sizeof(_g4_t_v64)) > _g4_s18 ? (8u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_v65)) > _g4_s19 ? (12u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (12u + sizeof(_g4_t_v66)) > _g4_s20 ? (12u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (12u + sizeof(_g4_t_v67)) > _g4_s21 ? (12u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (12u + sizeof(_g4_t_v68)) > _g4_s22 ? (12u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (12u + sizeof(_g4_t_v69)) > _g4_s23 ? (12u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (16u + sizeof(_g4_t_v70)) > _g4_s24 ? (16u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (20u + sizeof(_g4_t_v71)) > _g4_s25 ? (20u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (20u + sizeof(_g4_t_v72)) > _g4_s26 ? (20u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (24u + sizeof(_g4_t_v73)) > _g4_s27 ? (24u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (28u + sizeof(_g4_t_v74)) > _g4_s28 ? (28u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (32u + sizeof(_g4_t_v75)) > _g4_s29 ? (32u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (36u + sizeof(_g4_t_v76)) > _g4_s30 ? (36u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v77)) > _g4_s31 ? (40u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (44u + sizeof(_g4_t_v78)) > _g4_s32 ? (44u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (52u + sizeof(_g4_t_v79)) > _g4_s33 ? (52u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v80)) > _g4_s34 ? (56u + sizeof(_g4_t_v80)) : _g4_s34,
    _g4_s36 = (60u + sizeof(_g4_t_v81)) > _g4_s35 ? (60u + sizeof(_g4_t_v81)) : _g4_s35,
    _g4_s37 = (64u + sizeof(_g4_t_v82)) > _g4_s36 ? (64u + sizeof(_g4_t_v82)) : _g4_s36,
    _g4_s38 = (68u + sizeof(_g4_t_v83)) > _g4_s37 ? (68u + sizeof(_g4_t_v83)) : _g4_s37,
    _g4_s39 = (72u + sizeof(_g4_t_v84)) > _g4_s38 ? (72u + sizeof(_g4_t_v84)) : _g4_s38,
    _g4_s40 = (76u + sizeof(_g4_t_v85)) > _g4_s39 ? (76u + sizeof(_g4_t_v85)) : _g4_s39,
    _g4_s41 = (84u + sizeof(_g4_t_v86)) > _g4_s40 ? (84u + sizeof(_g4_t_v86)) : _g4_s40,
    _g4_s42 = (88u + sizeof(_g4_t_v87)) > _g4_s41 ? (88u + sizeof(_g4_t_v87)) : _g4_s41,
    _g4_s43 = (92u + sizeof(_g4_t_v88)) > _g4_s42 ? (92u + sizeof(_g4_t_v88)) : _g4_s42,
    _g4_s44 = (96u + sizeof(_g4_t_v89)) > _g4_s43 ? (96u + sizeof(_g4_t_v89)) : _g4_s43,
    _g4_s45 = (100u + sizeof(_g4_t_v90)) > _g4_s44 ? (100u + sizeof(_g4_t_v90)) : _g4_s44,
    _g4_s46 = (104u + sizeof(_g4_t_v91)) > _g4_s45 ? (104u + sizeof(_g4_t_v91)) : _g4_s45,
    _g4_s47 = (108u + sizeof(_g4_t_v92)) > _g4_s46 ? (108u + sizeof(_g4_t_v92)) : _g4_s46,
    _g4_s48 = (116u + sizeof(_g4_t_v93)) > _g4_s47 ? (116u + sizeof(_g4_t_v93)) : _g4_s47,
    _g4_s49 = (120u + sizeof(_g4_t_v94)) > _g4_s48 ? (120u + sizeof(_g4_t_v94)) : _g4_s48,
    _g4_s50 = (124u + sizeof(_g4_t_v95)) > _g4_s49 ? (124u + sizeof(_g4_t_v95)) : _g4_s49,
    _g4_s51 = (128u + sizeof(_g4_t_v96)) > _g4_s50 ? (128u + sizeof(_g4_t_v96)) : _g4_s50,
    _g4_s52 = (132u + sizeof(_g4_t_v97)) > _g4_s51 ? (132u + sizeof(_g4_t_v97)) : _g4_s51,
    _g4_s53 = (136u + sizeof(_g4_t_v98)) > _g4_s52 ? (136u + sizeof(_g4_t_v98)) : _g4_s52,
    _g4_s54 = (140u + sizeof(_g4_t_v99)) > _g4_s53 ? (140u + sizeof(_g4_t_v99)) : _g4_s53,
    _g4_s55 = (148u + sizeof(_g4_t_v100)) > _g4_s54 ? (148u + sizeof(_g4_t_v100)) : _g4_s54,
    _g4_s56 = (152u + sizeof(_g4_t_v101)) > _g4_s55 ? (152u + sizeof(_g4_t_v101)) : _g4_s55,
    _g4_s57 = (156u + sizeof(_g4_t_v102)) > _g4_s56 ? (156u + sizeof(_g4_t_v102)) : _g4_s56
  };
  alignas(16) uint8_t _g4_sf[_g4_s57];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 8u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 12u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 12u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 16u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 24u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 28u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 36u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 40u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 56u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 60u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 64u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 68u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 72u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 76u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 84u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 88u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 92u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 96u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 100u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 104u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 108u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 116u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 120u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 124u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 128u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 132u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 136u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 140u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 148u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 152u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 156u);

  v65 = 7;
  v5 = &v75;
  v6 = (uint32_t *)(*(uint32_t *)(a2 + 80) + 4);
  v7 = (uint16_t *)(a3 + 2);
  v74 = *(uint32_t *)(a1 + 288);
  while ( v65 == 3 )
  {
LABEL_7:
    ++v5;
    ++v7;
    ++v6;
    --v65;
  }
  v11 = v7[7];
  v12 = v7[15];
  if ( v11 != 0 || v12 != 0 )
  {
    v58 = v7[47];
    v71 = v7[55];
    v46 = v7[39];
    v52 = v7[23];
    goto LABEL_5;
  }
  v52 = v7[23];
  if ( v52 != 0 )
  {
    v58 = v7[47];
    v71 = v7[55];
    v46 = v7[39];
LABEL_5:
    v8 = (*(v6 - 1) * (int16_t)*(v7 - 1)) << 14;
    v59 = 15137 * v6[15] * v12 - 6270 * v6[47] * v58;
    v70 = v8 + v59;
    v73 = v8 - v59;
    v47 = v6[39] * v46;
    v9 = v6[55] * v71;
    v53 = v6[23] * v52;
    v60 = v6[7] * v11;
    v72 = -1730 * v9 + 11893 * v47 + 8697 * v60 - 17799 * v53;
    v10 = -4176 * v9 - 4926 * v47 + 7373 * v53 + 20995 * v60;
    *v5 = (v70 + v10 + 2048) >> 12;
    v5[24] = (v70 - v10 + 2048) >> 12;
    v5[8] = (v73 + v72 + 2048) >> 12;
    v5[16] = (v73 - v72 + 2048) >> 12;
    goto LABEL_6;
  }
  v46 = v7[39];
  v58 = v7[47];
  v71 = v7[55];
  if ( v46 != 0 )
  {
    v12 = 0;
    goto LABEL_5;
  }
  if ( v7[47] != 0 )
  {
    v52 = 0;
    v12 = 0;
    goto LABEL_5;
  }
  if ( v7[55] != 0 )
  {
    v12 = v7[47];
    v52 = v12;
    v46 = v12;
    goto LABEL_5;
  }
  v41 = 4 * *(v6 - 1) * (int16_t)*(v7 - 1);
  *v5 = v41;
  v5[8] = v41;
  v5[16] = v41;
  v5[24] = v41;
LABEL_6:
  if ( v65 != 0 )
    goto LABEL_7;
  v13 = v77;
  v14 = (uint8_t *)(*a4 + a5);
  if ( v76 != 0 || v77 != 0 )
  {
    v15 = v80;
    v61 = v81;
    v54 = v79;
    v48 = v78;
    goto LABEL_14;
  }
  v48 = v78;
  if ( v78 != 0 )
  {
    v15 = v80;
    v61 = v81;
    v54 = v79;
  }
  else
  {
    v54 = v79;
    v15 = v80;
    if ( v79 != 0 )
    {
      v61 = v81;
      goto LABEL_14;
    }
    if ( v80 != 0 )
    {
      v48 = v76;
      v61 = v81;
      v13 = v76;
    }
    else
    {
      v61 = v81;
      v48 = 0;
      v54 = 0;
      if ( v81 == 0 )
      {
        v43 = *(uint8_t *)(v74 + (((v75 + 16) >> 5) & 0x3FF) + 128);
        *v14 = v43;
        v14[1] = v43;
        v14[2] = v43;
        v14[3] = v43;
        goto LABEL_15;
      }
    }
  }
LABEL_14:
  v16 = -6270 * v15 + 15137 * v13;
  v17 = (v75 << 14) + v16;
  v66 = (v75 << 14) - v16;
  v18 = -1730 * v61 + 11893 * v54 + 8697 * v76 - 17799 * v48;
  v19 = -4176 * v61 - 4926 * v54 + 20995 * v76 + 7373 * v48;
  *v14 = *(uint8_t *)(v74 + (((v17 + v19 + 0x40000) >> 19) & 0x3FF) + 128);
  v14[3] = *(uint8_t *)(v74 + ((unsigned int)(8 * (v17 - v19) + 0x200000) >> 22) + 128);
  v14[1] = *(uint8_t *)(v74 + (((v66 + v18 + 0x40000) >> 19) & 0x3FF) + 128);
  v14[2] = *(uint8_t *)(v74 + ((unsigned int)(8 * (v66 - v18) + 0x200000) >> 22) + 128);
LABEL_15:
  v20 = v84;
  v21 = (uint8_t *)(a4[1] + a5);
  if ( v83 != 0 || v84 != 0 )
  {
    v22 = v87;
    v55 = v88;
    v49 = v86;
    v67 = v85;
    goto LABEL_18;
  }
  v67 = v85;
  if ( v85 != 0 )
  {
    v22 = v87;
    v55 = v88;
    v49 = v86;
  }
  else
  {
    v22 = v87;
    v49 = v86;
    if ( v86 != 0 )
    {
      v20 = 0;
      v55 = v88;
      goto LABEL_18;
    }
    v55 = v88;
    if ( v87 != 0 )
    {
      v67 = 0;
      v20 = 0;
    }
    else
    {
      if ( v88 == 0 )
      {
        v45 = *(uint8_t *)(v74 + (((v82 + 16) >> 5) & 0x3FF) + 128);
        *v21 = v45;
        v21[1] = v45;
        v21[2] = v45;
        v21[3] = v45;
        goto LABEL_19;
      }
      v67 = v87;
      v49 = v87;
      v20 = v87;
    }
  }
LABEL_18:
  v23 = 15137 * v20 - 6270 * v22;
  v24 = (v82 << 14) + v23;
  v62 = (v82 << 14) - v23;
  v25 = -1730 * v55 + 11893 * v49 + 8697 * v83 - 17799 * v67;
  v26 = -4176 * v55 - 4926 * v49 + 20995 * v83 + 7373 * v67;
  *v21 = *(uint8_t *)(v74 + (((v24 + v26 + 0x40000) >> 19) & 0x3FF) + 128);
  v21[3] = *(uint8_t *)(v74 + ((unsigned int)(8 * (v24 - v26) + 0x200000) >> 22) + 128);
  v21[1] = *(uint8_t *)(v74 + (((v62 + v25 + 0x40000) >> 19) & 0x3FF) + 128);
  v21[2] = *(uint8_t *)(v74 + ((unsigned int)(8 * (v62 - v25) + 0x200000) >> 22) + 128);
LABEL_19:
  v27 = v91;
  v28 = (uint8_t *)(a4[2] + a5);
  if ( v90 != 0 || v91 != 0 )
  {
    v29 = v94;
    v56 = v95;
    v50 = v93;
    v68 = v92;
    goto LABEL_22;
  }
  v68 = v92;
  if ( v92 != 0 )
  {
    v29 = v94;
    v56 = v95;
    v50 = v93;
  }
  else
  {
    v29 = v94;
    v50 = v93;
    if ( v93 != 0 )
    {
      v27 = 0;
      v56 = v95;
      goto LABEL_22;
    }
    v56 = v95;
    if ( v94 != 0 )
    {
      v68 = 0;
      v27 = 0;
    }
    else
    {
      if ( v95 == 0 )
      {
        v44 = *(uint8_t *)(v74 + (((v89 + 16) >> 5) & 0x3FF) + 128);
        *v28 = v44;
        v28[1] = v44;
        v28[2] = v44;
        v28[3] = v44;
        goto LABEL_23;
      }
      v68 = v94;
      v50 = v94;
      v27 = v94;
    }
  }
LABEL_22:
  v30 = 15137 * v27 - 6270 * v29;
  v31 = (v89 << 14) + v30;
  v63 = (v89 << 14) - v30;
  v32 = -1730 * v56 + 11893 * v50 + 8697 * v90 - 17799 * v68;
  v33 = -4176 * v56 - 4926 * v50 + 20995 * v90 + 7373 * v68;
  *v28 = *(uint8_t *)(v74 + (((v31 + v33 + 0x40000) >> 19) & 0x3FF) + 128);
  v28[3] = *(uint8_t *)(v74 + ((unsigned int)(8 * (v31 - v33) + 0x200000) >> 22) + 128);
  v28[1] = *(uint8_t *)(v74 + (((v63 + v32 + 0x40000) >> 19) & 0x3FF) + 128);
  v28[2] = *(uint8_t *)(v74 + ((unsigned int)(8 * (v63 - v32) + 0x200000) >> 22) + 128);
LABEL_23:
  v34 = v98;
  result = (uint8_t *)(a4[3] + a5);
  if ( v97 != 0 || v98 != 0 )
  {
    v36 = v101;
    v57 = v102;
    v51 = v100;
    v69 = v99;
    goto LABEL_26;
  }
  v69 = v99;
  if ( v99 != 0 )
  {
    v36 = v101;
    v57 = v102;
    v51 = v100;
LABEL_26:
    v37 = 15137 * v34 - 6270 * v36;
    v38 = (v96 << 14) + v37;
    v64 = (v96 << 14) - v37;
    v39 = -1730 * v57 + 11893 * v51 + 8697 * v97 - 17799 * v69;
    v40 = -4176 * v57 - 4926 * v51 + 20995 * v97 + 7373 * v69;
    *result = *(uint8_t *)(v74 + (((v38 + v40 + 0x40000) >> 19) & 0x3FF) + 128);
    result[3] = *(uint8_t *)(v74 + ((unsigned int)(8 * (v38 - v40) + 0x200000) >> 22) + 128);
    result[1] = *(uint8_t *)(v74 + (((v64 + v39 + 0x40000) >> 19) & 0x3FF) + 128);
    result[2] = *(uint8_t *)(v74 + ((unsigned int)(8 * (v64 - v39) + 0x200000) >> 22) + 128);
    return result;
  }
  v36 = v101;
  v51 = v100;
  if ( v100 != 0 )
  {
    v34 = 0;
    v57 = v102;
    goto LABEL_26;
  }
  v57 = v102;
  if ( v101 != 0 )
  {
    v69 = 0;
    v34 = 0;
    goto LABEL_26;
  }
  if ( v102 != 0 )
  {
    v69 = v101;
    v51 = v101;
    v34 = v101;
    goto LABEL_26;
  }
  v42 = *(uint8_t *)(v74 + (((v96 + 16) >> 5) & 0x3FF) + 128);
  *result = v42;
  result[1] = v42;
  result[2] = v42;
  result[3] = v42;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_idct_2x2  (binary VA: 0xfc8240)
// Original: jpeg_idct_2x2
// ----------------------------------------------------------------------------
int jpeg_idct_2x2(int a1, int a2, int a3, uint32_t *a4, int a5)
{
  int v5;
  uint16_t *v6;
  int v7;
  uint32_t *i;
  int16_t v9; // di
  uint8_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  uint8_t *v16;
  int v17;
  int v18;
  int v19;
  int result;
  int v21;
  int v22;
  unsigned int v23;
  char v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int16_t _g4_t_v27;
  typedef int16_t _g4_t_v28;
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
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v27)) > _g4_s2 ? (14u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v28)) > _g4_s3 ? (16u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v29)) > _g4_s4 ? (16u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v30)) > _g4_s5 ? (20u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v31)) > _g4_s6 ? (24u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v32)) > _g4_s7 ? (28u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v33)) > _g4_s8 ? (36u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v34)) > _g4_s9 ? (44u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v35)) > _g4_s10 ? (52u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v36)) > _g4_s11 ? (56u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v37)) > _g4_s12 ? (60u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v38)) > _g4_s13 ? (68u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v39)) > _g4_s14 ? (76u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v40)) > _g4_s15 ? (84u + sizeof(_g4_t_v40)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 14u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);

  v5 = 7;
  v6 = (uint16_t *)(a3 + 2);
  v25 = &v31;
  v30 = *(uint32_t *)(a1 + 288);
  v7 = 8;
  for ( i = (uint32_t *)(*(uint32_t *)(a2 + 80) + 4); ; ++i )
  {
    if ( v7 == 4 || v7 == 6 )
      goto LABEL_5;
    if ( v7 != 2 )
      break;
LABEL_6:
    ++v25;
    --v7;
    ++v6;
    --v5;
  }
  if ( v6[7] != 0 )
  {
    v28 = v6[55];
    v27 = v6[23];
    v9 = v6[39];
    goto LABEL_4;
  }
  v27 = v6[23];
  if ( v27 != 0 )
  {
    v9 = v6[39];
    v28 = v6[55];
LABEL_4:
    v26 = (*(i - 1) * (int16_t)*(v6 - 1)) << 15;
    v29 = -10426 * i[23] * v27 + 6967 * i[39] * v9 - 5906 * i[55] * v28 + 29692 * i[7] * (int16_t)v6[7];
    *v25 = (v26 + v29 + 4096) >> 13;
    v25[8] = (v26 - v29 + 4096) >> 13;
    goto LABEL_5;
  }
  v9 = v6[39];
  v28 = v6[55];
  if ( v9 != 0 )
    goto LABEL_4;
  v27 = 0;
  if ( v6[55] != 0 )
    goto LABEL_4;
  v21 = 4 * *(i - 1) * (int16_t)*(v6 - 1);
  *v25 = v21;
  v25[8] = v21;
LABEL_5:
  if ( v5 != 0 )
    goto LABEL_6;
  v10 = (uint8_t *)(*a4 + a5);
  if ( v32 != 0 )
  {
    v11 = v35;
    v12 = v34;
    v13 = v33;
    goto LABEL_14;
  }
  v13 = v33;
  if ( v33 != 0 )
  {
    v11 = v35;
    v12 = v34;
LABEL_14:
    v14 = -10426 * v13 + 29692 * v32 + -5906 * v11 + 6967 * v12;
    v15 = (unsigned int)(4 * ((v31 << 15) - v14) + 0x200000) >> 22;
    *v10 = *(uint8_t *)(v30 + ((((v31 << 15) + v14 + 0x80000) >> 20) & 0x3FF) + 128);
    v10[1] = *(uint8_t *)(v30 + v15 + 128);
    goto LABEL_15;
  }
  v12 = v34;
  v11 = v35;
  if ( v34 != 0 || v35 != 0 )
    goto LABEL_14;
  v24 = *(uint8_t *)(v30 + (((v31 + 16) >> 5) & 0x3FF) + 128);
  *v10 = v24;
  v10[1] = v24;
LABEL_15:
  v16 = (uint8_t *)(a4[1] + a5);
  if ( v37 != 0 )
  {
    v19 = v40;
    v18 = v39;
    v17 = v38;
  }
  else
  {
    v17 = v38;
    if ( v38 != 0 )
    {
      v19 = v40;
      v18 = v39;
    }
    else
    {
      v18 = v39;
      v19 = v40;
      if ( v39 == 0 )
      {
        v17 = 0;
        if ( v40 == 0 )
        {
          result = *(uint8_t *)(v30 + (((v36 + 16) >> 5) & 0x3FF) + 128);
          *v16 = result;
          v16[1] = result;
          return result;
        }
      }
    }
  }
  v22 = 6967 * v18 - 5906 * v19 + 29692 * v37 - 10426 * v17;
  v23 = (unsigned int)(4 * ((v36 << 15) - v22) + 0x200000) >> 22;
  *v16 = *(uint8_t *)(v30 + ((((v36 << 15) + v22 + 0x80000) >> 20) & 0x3FF) + 128);
  result = *(uint8_t *)(v30 + v23 + 128);
  v16[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jpeg_idct_1x1  (binary VA: 0xfc8570)
// Original: jpeg_idct_1x1
// ----------------------------------------------------------------------------
int jpeg_idct_1x1(int a1, int a2, int16_t *a3, uint32_t *a4, int a5)
{
  *(uint8_t *)(*a4 + a5) = *(uint8_t *)(*(uint32_t *)(a1 + 288) + (((**(uint32_t **)(a2 + 80) * *a3 + 4) >> 3) & 0x3FF) + 128);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: jpeg_get_small  (binary VA: 0xfc85b0)
// Original: jpeg_get_small
// ----------------------------------------------------------------------------
int jpeg_get_small(int a1, size_t a2)
{
  return glitch_malloc(a2);
}

// ----------------------------------------------------------------------------
// Function: jpeg_free_small  (binary VA: 0xfc85e0)
// Original: jpeg_free_small
// ----------------------------------------------------------------------------
int jpeg_free_small(int a1, int a2)
{
  return glitch_free(a2);
}

// ----------------------------------------------------------------------------
// Function: jpeg_get_large  (binary VA: 0xfc8610)
// Original: jpeg_get_large
// ----------------------------------------------------------------------------
int jpeg_get_large(int a1, size_t a2)
{
  return glitch_malloc(a2);
}

// ----------------------------------------------------------------------------
// Function: jpeg_free_large  (binary VA: 0xfc8640)
// Original: jpeg_free_large
// ----------------------------------------------------------------------------
int jpeg_free_large(int a1, int a2)
{
  return glitch_free(a2);
}

// ----------------------------------------------------------------------------
// Function: jpeg_mem_available  (binary VA: 0xfc8670)
// Original: jpeg_mem_available
// ----------------------------------------------------------------------------
int jpeg_mem_available(int a1, int a2, int a3)
{
  return a3;
}

// ----------------------------------------------------------------------------
// Function: jpeg_open_backing_store  (binary VA: 0xfc8680)
// Original: jpeg_open_backing_store
// ----------------------------------------------------------------------------
int jpeg_open_backing_store(int a1)
{
  *(uint32_t *)(*(uint32_t *)a1 + 20) = 49;
  return (**(int (***)(int))a1)(a1);
}

// ----------------------------------------------------------------------------
// Function: jpeg_mem_init  (binary VA: 0xfc86a0)
// Original: jpeg_mem_init
// ----------------------------------------------------------------------------
int jpeg_mem_init()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: jpeg_mem_term  (binary VA: 0xfc86b0)
// Original: jpeg_mem_term
// ----------------------------------------------------------------------------
void jpeg_mem_term()
{
  ;
}


