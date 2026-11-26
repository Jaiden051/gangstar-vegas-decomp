#include "Core/Memory/GameAllocator.h"
#include <cstdlib>

// ----------------------------------------------------------------------------
// Function: nullsub_14  (binary VA: 0x523788)
// Original: nullsub_14
// ----------------------------------------------------------------------------
void nullsub_14()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_15  (binary VA: 0x523798)
// Original: nullsub_15
// ----------------------------------------------------------------------------
void nullsub_15()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_16  (binary VA: 0x5237a8)
// Original: nullsub_16
// ----------------------------------------------------------------------------
void nullsub_16()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_17  (binary VA: 0x5237b8)
// Original: nullsub_17
// ----------------------------------------------------------------------------
void nullsub_17()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_5237C0  (binary VA: 0x5237c0)
// Original: sub_5237C0
// ----------------------------------------------------------------------------
int * sub_5237C0()
{
  int *v1;

  if ( byte_20D1980 != 0 || _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D1980) == 0 )
    return (int *)(dword_20D19A0);
  v1 = (int *)(dword_20D19A0);
  do
  {
    *v1 = 0;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;
    v1[4] = 0;
    v1[5] = 0;
    *((uint8_t *)v1 + 24) = 0;
    v1[7] = 0;
    v1 += 40;
  }
  while ( v1 != (int *)&unk_20D23A0 );
  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D1980);
  __cxa_atexit((void (*)(void *))sub_542480, dword_20D19A0, &unk_20D1280);
  return (int *)(dword_20D19A0);
}

// ----------------------------------------------------------------------------
// Function: sub_523880  (binary VA: 0x523880)
// Original: sub_523880
// ----------------------------------------------------------------------------
int * sub_523880(unsigned int a1)
{
  int *result;
  int *v2;
  int *v3;
  unsigned int v4;
  unsigned int v5;
  int *v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  typedef int *_g4_t_v12;
  typedef size_t _g4_t_size;
  typedef uint32_t *_g4_t_v14;
  typedef uint8_t _g4_t_v15[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_size)) > _g4_s1 ? (8u + sizeof(_g4_t_size)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v15)) > _g4_s3 ? (31u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_size &size = *reinterpret_cast<_g4_t_size *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 31u);

  G4_MEM_CALL((uintptr_t)(off_20BAC10));
  if ( byte_20D1980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D1980) != 0 )
  {
    v6 = (int *)(dword_20D19A0);
    do
    {
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      v6[3] = 0;
      v6[4] = 0;
      v6[5] = 0;
      *((uint8_t *)v6 + 24) = 0;
      v6[7] = 0;
      v6 += 40;
    }
    while ( v6 != (int *)&unk_20D23A0 );
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D1980);
    __cxa_atexit((void (*)(void *))sub_542480, dword_20D19A0, &unk_20D1280);
  }
  result = nullptr;
  if ( a1 <= 0x40 )
  {
    glf::debugger::ScopeMutex::ScopeMutex((glf::debugger::ScopeMutex::Self *)v15);
    v2 = nullptr;
    v3 = (int *)(&dword_20D19A0[40 * ((a1 + 3) >> 2) - 40]);
    if ( *((uint8_t *)v3 + 24) == 0 )
    {
LABEL_4:
      v12 = v2;
      glf::debugger::ScopeMutex::Destroy((glf::debugger::ScopeMutex::Self *)v15);
      return v12;
    }
    if ( v3[7] == 0 )
    {
      v7 = v3[3];
      if ( v7 >= v3[2] )
        goto LABEL_4;
      size = v3[1];
      v14 = (uint32_t *)(malloc(size));
      v3[3] = v7 + 1;
      v3[v7 + 8] = (int)(uintptr_t)(v14);
      v8 = *v3;
      v9 = (uint32_t *)((char *)v14 + *v3 * ((size - *v3) / *v3));
      *v9 = 0;
      if ( v14 != v9 )
      {
        v10 = -v8;
        v11 = (uint32_t *)((char *)v9 + v10);
        if ( v14 == (uint32_t *)((char *)v9 + v10) )
        {
          v11 = v9;
        }
        else
        {
          while ( 1 )
          {
            *v11 = (uint32_t)(uintptr_t)(v9);
            if ( v14 == (uint32_t *)((char *)v11 + v10) )
              break;
            v9 = v11;
            v11 = (uint32_t *)((char *)v11 + v10);
          }
        }
        *v14 = (uint32_t)(uintptr_t)(v11);
      }
      v3[7] = (int)(uintptr_t)(v14);
    }
    v4 = v3[5];
    v5 = v3[4] + 1;
    v3[4] = v5;
    if ( v5 < v4 )
      v5 = v4;
    v3[5] = v5;
    v2 = (int *)v3[7];
    v3[7] = *v2;
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_523A40  (binary VA: 0x523a40)
// Original: sub_523A40
// ----------------------------------------------------------------------------
int sub_523A40(int *a1)
{
  int v1;
  int *v2;
  int v3;
  unsigned int v4;
  int v5;
  int v6;
  int *v8;
  uint8_t v9[29];

  glf::debugger::ScopeMutex::ScopeMutex((glf::debugger::ScopeMutex::Self *)v9);
  if ( byte_20D1980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D1980) != 0 )
  {
    v8 = (int *)(dword_20D19A0);
    do
    {
      *v8 = 0;
      v8[1] = 0;
      v8[2] = 0;
      v8[3] = 0;
      v8[4] = 0;
      v8[5] = 0;
      *((uint8_t *)v8 + 24) = 0;
      v8[7] = 0;
      v8 += 40;
    }
    while ( v8 != (int *)&unk_20D23A0 );
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D1980);
    __cxa_atexit((void (*)(void *))sub_542480, dword_20D19A0, &unk_20D1280);
  }
  v1 = 0;
  while ( 1 )
  {
    v2 = (int *)(&dword_20D19A0[40 * v1]);
    if ( *((uint8_t *)v2 + 24) != 0 && v2[3] != 0 )
      break;
LABEL_9:
    if ( ++v1 == 16 )
    {
      v5 = 0;
      goto LABEL_12;
    }
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = v2[v3 + 8];
    if ( (unsigned int)(uintptr_t)(a1) >= v4 && (unsigned int)(uintptr_t)(a1) < v2[1] + v4 )
      break;
    if ( ++v3 == v2[3] )
      goto LABEL_9;
  }
  v6 = v2[7];
  --v2[4];
  *a1 = v6;
  v2[7] = (int)(uintptr_t)(a1);
  v5 = 1;
LABEL_12:
  glf::debugger::ScopeMutex::Destroy((glf::debugger::ScopeMutex::Self *)v9);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_523B90  (binary VA: 0x523b90)
// Original: sub_523B90
// ----------------------------------------------------------------------------
int sub_523B90(int a1)
{
  int i;
  int v2;
  int *v3;
  unsigned int v4;
  int v5;
  int v6;
  unsigned int v7;
  int *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_s[92];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v12)) > _g4_s2 ? (30u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v13)) > _g4_s3 ? (31u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_s)) > _g4_s4 ? (32u + sizeof(_g4_t_s)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 30u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 31u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);

  glf::debugger::ScopeMutex::ScopeMutex((glf::debugger::ScopeMutex::Self *)&v12);
  g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(&v13));
  if ( byte_20D1980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D1980) != 0 )
  {
    v9 = (int *)(dword_20D19A0);
    do
    {
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      v9[3] = 0;
      v9[4] = 0;
      v9[5] = 0;
      *((uint8_t *)v9 + 24) = 0;
      v9[7] = 0;
      v9 += 40;
    }
    while ( v9 != (int *)&unk_20D23A0 );
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D1980);
    __cxa_atexit((void (*)(void *))sub_542480, dword_20D19A0, &unk_20D1280);
  }
  for ( i = 0; i != 16; ++i )
  {
    sprintf(
      s,
      "Heap[%d] %d/%d\n",
      dword_20D19A0[40 * i],
      dword_20D19A0[40 * i + 4],
      dword_20D19A0[40 * i + 3] * dword_20D19A0[40 * i + 1] / (unsigned int)dword_20D19A0[40 * i]);
    g4_std::string::append(a1, s, strlen(s));
  }
  v2 = 0;
  v11 = 0;
  v10 = 0;
  do
  {
    v3 = (int *)(&dword_20D19A0[40 * v2]);
    v4 = *v3;
    v5 = v3[4];
    v6 = *v3 - 1;
    if ( v6 < 0 )
      v6 = *v3 + 14;
    ++v2;
    v7 = v5 * ((v6 & 0xFFFFFFF0) + 16 - v4);
    v10 += v7;
    v11 += v7 + v4 * (v5 - v3[3] * v3[1] / v4);
  }
  while ( v2 != 16 );
  sprintf(s, "Potential savings : %f Mb\n", (float)((float)v10 * 0.0000009536743f));
  g4_std::string::append(a1, s, strlen(s));
  sprintf(s, "Current savings : %f Mb\n", (float)((float)v11 * 0.0000009536743f));
  g4_std::string::append(a1, s, strlen(s));
  glf::debugger::ScopeMutex::Destroy((glf::debugger::ScopeMutex::Self *)&v12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Core::Memory::AllocateTracked  (binary VA: 0x523eb0)
// Original: Core::Memory::AllocateTracked
// ----------------------------------------------------------------------------
void * Core::Memory::AllocateTracked(size_t a1, int a2, int a3, char a4)
{
  size_t size;
  void *result;
  int *v6;
  int *v7;
  unsigned int v8;
  unsigned int v9;
  int *v10;
  int v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef uint8_t _g4_t_v19[13];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v17)) > _g4_s2 ? (4u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v19)) > _g4_s4 ? (31u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 31u);

  size = a1;
  if ( a4 == 0 )
    return malloc(size);
  G4_MEM_CALL((uintptr_t)(off_20BAC10));
  if ( byte_20D1980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D1980) != 0 )
  {
    v10 = (int *)(dword_20D19A0);
    do
    {
      *v10 = 0;
      v10[1] = 0;
      v10[2] = 0;
      v10[3] = 0;
      v10[4] = 0;
      v10[5] = 0;
      *((uint8_t *)v10 + 24) = 0;
      v10[7] = 0;
      v10 += 40;
    }
    while ( v10 != (int *)&unk_20D23A0 );
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D1980);
    __cxa_atexit((void (*)(void *))sub_542480, dword_20D19A0, &unk_20D1280);
  }
  if ( a1 > 0x40 )
    return malloc(size);
  glf::debugger::ScopeMutex::ScopeMutex((glf::debugger::ScopeMutex::Self *)v19);
  v6 = (int *)(&dword_20D19A0[40 * ((a1 + 3) >> 2) - 40]);
  v7 = nullptr;
  if ( *((uint8_t *)v6 + 24) == 0 )
    goto LABEL_11;
  if ( v6[7] == 0 )
  {
    if ( v6[3] >= (unsigned int)v6[2] )
      goto LABEL_11;
    v16 = v6[3];
    v18 = v6[1];
    v17 = (uint32_t *)(malloc(v18));
    v6[3] = v16 + 1;
    v6[v16 + 8] = (int)(uintptr_t)(v17);
    v11 = *v6;
    v12 = (uint32_t *)((char *)v17 + *v6 * ((v18 - *v6) / *v6));
    *v12 = 0;
    if ( v17 != v12 )
    {
      v13 = -v11;
      v14 = (uint32_t *)((char *)v12 + v13);
      if ( v17 == (uint32_t *)((char *)v12 + v13) )
      {
        v14 = v12;
      }
      else
      {
        while ( 1 )
        {
          *v14 = (uint32_t)(uintptr_t)(v12);
          if ( v17 == (uint32_t *)((char *)v14 + v13) )
            break;
          v12 = v14;
          v14 = (uint32_t *)((char *)v14 + v13);
        }
        v6 = (int *)(&dword_20D19A0[40 * ((a1 + 3) >> 2) - 40]);
        size = a1;
      }
      *v17 = (uint32_t)(uintptr_t)(v14);
    }
    v6[7] = (int)(uintptr_t)(v17);
  }
  v8 = v6[5];
  v9 = v6[4] + 1;
  v6[4] = v9;
  if ( v9 < v8 )
    v9 = v8;
  v6[5] = v9;
  v7 = (int *)v6[7];
  v6[7] = *v7;
LABEL_11:
  v15 = (int)(uintptr_t)(v7);
  glf::debugger::ScopeMutex::Destroy((glf::debugger::ScopeMutex::Self *)v19);
  result = (void *)v15;
  if ( v15 == 0 )
    return malloc(size);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_5240B0  (binary VA: 0x5240b0)
// Original: sub_5240B0
// ----------------------------------------------------------------------------
void sub_5240B0(int *ptr)
{
  int v1;
  int *v2;
  int v3;
  unsigned int v4;
  int v5;
  int *v6;
  uint8_t v7[29];

  glf::debugger::ScopeMutex::ScopeMutex((glf::debugger::ScopeMutex::Self *)v7);
  if ( byte_20D1980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D1980) != 0 )
  {
    v6 = (int *)(dword_20D19A0);
    do
    {
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      v6[3] = 0;
      v6[4] = 0;
      v6[5] = 0;
      *((uint8_t *)v6 + 24) = 0;
      v6[7] = 0;
      v6 += 40;
    }
    while ( v6 != (int *)&unk_20D23A0 );
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D1980);
    __cxa_atexit((void (*)(void *))sub_542480, dword_20D19A0, &unk_20D1280);
  }
  v1 = 0;
  while ( 1 )
  {
    v2 = (int *)(&dword_20D19A0[40 * v1]);
    if ( *((uint8_t *)v2 + 24) != 0 && v2[3] != 0 )
      break;
LABEL_9:
    if ( ++v1 == 16 )
    {
      glf::debugger::ScopeMutex::Destroy((glf::debugger::ScopeMutex::Self *)v7);
      free(ptr);
      return;
    }
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = v2[v3 + 8];
    if ( (unsigned int)(uintptr_t)(ptr) >= v4 && (unsigned int)(uintptr_t)(ptr) < v2[1] + v4 )
      break;
    if ( ++v3 == v2[3] )
      goto LABEL_9;
  }
  v5 = v2[7];
  --v2[4];
  *ptr = v5;
  v2[7] = (int)(uintptr_t)(ptr);
  glf::debugger::ScopeMutex::Destroy((glf::debugger::ScopeMutex::Self *)v7);
}

// ----------------------------------------------------------------------------
// Function: sub_524220  (binary VA: 0x524220)
// Original: sub_524220
// ----------------------------------------------------------------------------
uint32_t * sub_524220(uint32_t *a1)
{
  int v2;

  *a1 = 0;
  v2 = _page_size;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = v2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_524260  (binary VA: 0x524260)
// Original: sub_524260
// ----------------------------------------------------------------------------
int sub_524260(int a1)
{
  int result;

  if ( *(uint32_t *)(a1 + 20) != 0 )
  {
    munmap(*(void **)(a1 + 8), *(uint32_t *)(a1 + 12));
    result = fclose(*(FILE **)(a1 + 20));
    *(uint32_t *)(a1 + 20) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_5242C0  (binary VA: 0x5242c0)
// Original: sub_5242C0
// ----------------------------------------------------------------------------
int sub_5242C0(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 20);
  if ( result != 0 )
  {
    munmap(*(void **)(a1 + 8), *(uint32_t *)(a1 + 12));
    result = fclose(*(FILE **)(a1 + 20));
    *(uint32_t *)(a1 + 20) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_524320  (binary VA: 0x524320)
// Original: sub_524320
// ----------------------------------------------------------------------------
int sub_524320(int a1, int a2, int a3)
{
  size_t len;

  len = 0;
  if ( a3 != 0 )
    len = -*(uint32_t *)(a1 + 16) & (*(uint32_t *)(a1 + 16) + a3 - 1);
  return msync((void *)(*(uint32_t *)(a1 + 8) + a2), len, 2);
}

// ----------------------------------------------------------------------------
// Function: sub_524380  (binary VA: 0x524380)
// Original: sub_524380
// ----------------------------------------------------------------------------
int sub_524380(int a1)
{
  size_t len;
  int v2;

  len = 0;
  v2 = *(uint32_t *)(a1 + 12);
  if ( v2 != 0 )
    len = (v2 + *(uint32_t *)(a1 + 16) - 1) & -*(uint32_t *)(a1 + 16);
  return msync(*(void **)(a1 + 8), len, 2);
}

// ----------------------------------------------------------------------------
// Function: sub_5243E0  (binary VA: 0x5243e0)
// Original: sub_5243E0
// ----------------------------------------------------------------------------
int sub_5243E0(int a1, int a2, const char *length, int a4)
{
  unsigned int HomeDir;
  uint32_t *v5;
  int v6;
  int v7;
  const char *v8;
  typedef char *_g4_t_filename;
  typedef char *_g4_t_modes;
  typedef char *_g4_t_modesa;
  typedef char _g4_t_v13[1052];
  enum : size_t {
    _g4_s0 = 1152u,
    _g4_s1 = (0u + sizeof(_g4_t_filename)) > _g4_s0 ? (0u + sizeof(_g4_t_filename)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_modes)) > _g4_s1 ? (4u + sizeof(_g4_t_modes)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_modesa)) > _g4_s2 ? (4u + sizeof(_g4_t_modesa)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 0u);
  _g4_t_modes &modes = *reinterpret_cast<_g4_t_modes *>(_g4_sf + 4u);
  _g4_t_modesa &modesa = *reinterpret_cast<_g4_t_modesa *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  HomeDir = glf::fs::GetHomeDir((glf::fs::Self *)filename);
  glf::VJoinPath((glf::Self *)v13, (char *)(uintptr_t)0x400, 2u, HomeDir);
  if ( a4 == 1 && (uint8_t)glf::fs::DoesFileExist((glf::fs::Self *)v13, modes) != 0 )
  {
    *(uint32_t *)__errno() = 0;
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(fopen(v13, (const char *)&off_1B152A5));
  }
  else
  {
    *(uint32_t *)__errno() = 0;
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(fopen(v13, (const char *)&off_1B1ABE3));
  }
  v5 = (uint32_t *)__errno();
  glf::Console::Println((glf::Console::Self *)"create mmap file in %s (errno %d)\n", v13, *v5);
  v6 = *(uint32_t *)(a1 + 20);
  if ( v6 != 0 )
  {
    v7 = ftruncate(fileno((FILE *)(uintptr_t)v6), (__off_t)length);
    v8 = "success";
    if ( v7 != 0 )
      v8 = "failure";
    glf::Console::Println((glf::Console::Self *)"truncate to %d %s!\n", length, v8);
    fseek(*(FILE **)(a1 + 20), 0, 2);
    *(uint32_t *)(a1 + 12) = ftell(*(FILE **)(a1 + 20));
    fseek(*(FILE **)(a1 + 20), 0, 0);
    return 1;
  }
  else
  {
    glf::Console::Println((glf::Console::Self *)"fail !!\n", modesa);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_524570  (binary VA: 0x524570)
// Original: sub_524570
// ----------------------------------------------------------------------------
int sub_524570(uint32_t *a1, int a2, const char *length, int a4)
{
  void *v5;
  int v6;

  if ( (uint8_t)sub_5243E0((int)(uintptr_t)(a1), a2, length, a4) == 0 )
    return 0;
  v5 = mmap(nullptr, a1[3], 3, 1, fileno((FILE *)(uintptr_t)a1[5]), 0);
  a1[2] = (uint32_t)(uintptr_t)(v5);
  printf("create mmap handle 0x%08x\n", v5);
  LOBYTE(v6) = a1[2] != 0;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_524620  (binary VA: 0x524620)
// Original: sub_524620
// ----------------------------------------------------------------------------
int sub_524620(uint32_t *a1, void *src, size_t n)
{
  int result;

  result = 0;
  if ( n + *a1 <= a1[3] )
  {
    memcpy((void *)(a1[2] + *a1), src, n);
    *a1 += n;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_524680  (binary VA: 0x524680)
// Original: sub_524680
// ----------------------------------------------------------------------------
int sub_524680(int *a1, int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  size_t n;
  int v6;
  int v7;
  int v8;
  int v9;

  v8 = *(uint32_t *)(a2 + 4);
  v7 = *(uint32_t *)(*(uint32_t *)(a2 + 12) - 12);
  result = 0;
  if ( *a1 + 12 <= (unsigned int)a1[3] )
  {
    v3 = (uint32_t *)(a1[2] + *a1);
    *v3 = (uint32_t)(uintptr_t)(&off_2058860);
    v3[1] = v8;
    v3[2] = v9;
    v4 = *a1;
    *a1 += 12;
    if ( v4 + 16 <= (unsigned int)a1[3] )
    {
      *(uint32_t *)(a1[2] + v4 + 12) = v7;
      n = v7 + 1;
      v6 = *a1 + 4;
      *a1 = v6;
      if ( v6 + v7 + 1 <= (unsigned int)a1[3] )
      {
        memcpy((void *)(a1[2] + v6), *(const void **)(a2 + 12), n);
        *a1 += n;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_524750  (binary VA: 0x524750)
// Original: sub_524750
// ----------------------------------------------------------------------------
int sub_524750(uint32_t *a1, void *dest, size_t n)
{
  int result;
  int v4;

  result = 0;
  v4 = a1[1];
  if ( n + v4 <= a1[3] )
  {
    memcpy(dest, (const void *)(a1[2] + v4), n);
    a1[1] += n;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_5247B0  (binary VA: 0x5247b0)
// Original: sub_5247B0
// ----------------------------------------------------------------------------
int sub_5247B0(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  size_t v10;
  bool v11; // cc
  typedef unsigned int _g4_t_v12;
  typedef size_t _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[5];
  typedef uint32_t _g4_t_v16[2];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_dest[4096];
  enum : size_t {
    _g4_s0 = 4240u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v15)) > _g4_s3 ? (31u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v16)) > _g4_s4 ? (36u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_dest)) > _g4_s7 ? (56u + sizeof(_g4_t_dest)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 31u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 56u);

  v16[1] = (uint32_t)(uintptr_t)(&off_2058860);
  result = 0;
  v3 = a1[1];
  v4 = v3 + 12;
  if ( (unsigned int)(v3 + 12) <= a1[3] )
  {
    v5 = (uint32_t *)(a1[2] + v3);
    v16[1] = *v5;
    v17 = v5[1];
    v6 = v17;
    v7 = v5[2];
    a1[1] = v4;
    v18 = v7;
    *(uint32_t *)(a2 + 4) = v6;
    v8 = a1[1];
    v12 = a1[3];
    v9 = v8 + 4;
    if ( v8 + 4 <= v12 )
    {
      v14 = a1[2];
      *(uint32_t *)&v15[1] = *(uint32_t *)(v14 + v8);
      v10 = *(uint32_t *)&v15[1] + 1;
      v11 = (unsigned int)(*(uint32_t *)&v15[1] + 1) <= 0x1000;
      a1[1] = v9;
      if ( !v11 )
        v10 = 4096;
      v13 = v10 + v9;
      if ( v12 >= v10 + v9 )
      {
        memcpy(dest, (const void *)(v14 + v9), v10);
        a1[1] = v13;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), dest, (int)(uintptr_t)(v15));
        g4_std::string::assign_str(a2 + 12, v16);
        g4_std::string::Destroy(v16);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_5248D0  (binary VA: 0x5248d0)
// Original: sub_5248D0
// ----------------------------------------------------------------------------
int sub_5248D0(uint32_t *a1, void *dest, size_t n)
{
  int result;
  int v4;

  result = 0;
  v4 = a1[1];
  if ( n + v4 <= a1[3] )
  {
    memcpy(dest, (const void *)(a1[2] + v4), n);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_524950  (binary VA: 0x524950)
// Original: sub_524950
// ----------------------------------------------------------------------------
int sub_524950(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
  {
    munmap(*(void **)a1, *(uint32_t *)(a1 + 4));
    result = fclose(*(FILE **)(a1 + 8));
    *(uint32_t *)(a1 + 8) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_5249B0  (binary VA: 0x5249b0)
// Original: sub_5249B0
// ----------------------------------------------------------------------------
int sub_5249B0(int a1, int a2)
{
  FILE *v2;
  int result;
  char filename[1036];

  if ( *(uint32_t *)(a1 + 8) != 0 )
  {
    munmap(*(void **)a1, *(uint32_t *)(a1 + 4));
    fclose(*(FILE **)(a1 + 8));
    *(uint32_t *)(a1 + 8) = 0;
  }
  glf::VJoinPath((glf::Self *)filename, (char *)(uintptr_t)0x400, 2u, (unsigned int)(uintptr_t)("."), a2);
  v2 = fopen(filename, "rb");
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v2);
  result = 0;
  if ( v2 != nullptr )
  {
    fseek(v2, 0, 2);
    *(uint32_t *)(a1 + 4) = ftell(*(FILE **)(a1 + 8));
    fseek(*(FILE **)(a1 + 8), 0, 0);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_524D30  (binary VA: 0x524d30)
// Original: sub_524D30
// ----------------------------------------------------------------------------
int sub_524D30(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
  {
    munmap(*(void **)a1, *(uint32_t *)(a1 + 4));
    result = fclose(*(FILE **)(a1 + 8));
    *(uint32_t *)(a1 + 8) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_524DA0  (binary VA: 0x524da0)
// Original: sub_524DA0
// ----------------------------------------------------------------------------
int sub_524DA0(int a1, int a2)
{
  int v2;
  int *v4;
  int v5;

  *(uint32_t *)(a1 + 168) = a2;
  v2 = *(uint32_t *)(a1 + 328);
  if ( (unsigned int)(((((*(uint32_t *)(a1 + 356) - *(uint32_t *)(a1 + 340)) >> 2) - 1) << 7)
                    + ((*(uint32_t *)(a1 + 344) - *(uint32_t *)(a1 + 348)) >> 2)
                    + ((*(uint32_t *)(a1 + 336) - v2) >> 2)) > 0x14 )
  {
    if ( v2 == *(uint32_t *)(a1 + 336) - 4 )
    {
      opDelete(*(void **)(a1 + 332));
      v4 = (int *)(*(uint32_t *)(a1 + 340) + 4);
      *(uint32_t *)(a1 + 340) = (uint32_t)(uintptr_t)(v4);
      v5 = *v4;
      *(uint32_t *)(a1 + 332) = *v4;
      *(uint32_t *)(a1 + 328) = v5;
      *(uint32_t *)(a1 + 336) = v5 + 512;
    }
    else
    {
      *(uint32_t *)(a1 + 328) = v2 + 4;
    }
  }
  return (int)(uintptr_t)(g4_std::deque_online_socialNetwork_Soc_e93ba4::push_back(a1 + 320, a1 + 168));
}

// ----------------------------------------------------------------------------
// Function: sub_524E90  (binary VA: 0x524e90)
// Original: sub_524E90
// ----------------------------------------------------------------------------
int sub_524E90(int a1)
{
  return sub_524DA0(a1, *(uint32_t *)(a1 + 516));
}

// ----------------------------------------------------------------------------
// Function: sub_524EB0  (binary VA: 0x524eb0)
// Original: sub_524EB0
// ----------------------------------------------------------------------------
int sub_524EB0(int a1, int a2)
{
  sociallib::ClientSNSInterface::Self *v2;
  int PermissionStatus;
  int result;
  bool v5;
  int v6;
  void *v7;
  uint8_t v8[24];

  v2 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v2 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v2);
    dword_20D2420 = (int)(uintptr_t)(v2);
  }
  PermissionStatus = sociallib::ClientSNSInterface::retrievePermissionStatus(v2);
  result = *(uint32_t *)(a2 + 124);
  if ( result == 1 )
  {
    *(uint32_t *)(a1 + 408) = PermissionStatus;
  }
  else if ( result == 2 )
  {
    *(uint32_t *)(a1 + 404) = PermissionStatus;
    if ( PermissionStatus == 2 && (uint8_t)sub_5020B0(a1) != 0 )
    {
      if ( byte_20D2D50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2D50) != 0 )
      {
        sub_7D7730(&unk_20D2D60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2D50);
        __cxa_atexit((void (*)(void *))sub_77E4C0, &unk_20D2D60, &unk_20D1280);
      }
      v7 = nullptr;
      if ( byte_20D2D64 == 0 )
        v7 = &unk_20D2D60;
      sub_79A420(v7, 29);
      *(uint32_t *)(a1 + 516) = *(uint32_t *)(a1 + 168);
      return sub_524DA0(a1, 26);
    }
    else
    {
      v5 = PermissionStatus == 1;
      if ( *(uint8_t *)(a1 + 372) == 0 )
        v5 = false;
      *(uint8_t *)(a1 + 372) = v5;
      v6 = (int)(uintptr_t)(sub_6E54F0());
      sub_6E54B0(v8);
      sub_6F5DF0(v8, v6);
      sub_6D4B90(v8);
      return sub_501310(a1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_525050  (binary VA: 0x525050)
// Original: sub_525050
// ----------------------------------------------------------------------------
int sub_525050(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  gaia::Gaia::Self *v4;
  int v5;
  int v6;
  int v7;

  sub_524DA0((int)(uintptr_t)(a1), 21);
  v1 = a1[4];
  v2 = a1[5];
  v3 = a1[59];
  if ( v1 == v2 )
    return sub_524DA0((int)(uintptr_t)(a1), 0);
  while ( v3 != *(uint32_t *)(v1 + 4) )
  {
    v1 += 28;
    if ( v1 == v2 )
      return sub_524DA0((int)(uintptr_t)(a1), 0);
  }
  if ( v1 == 0 )
    return sub_524DA0((int)(uintptr_t)(a1), 0);
  if ( byte_20D2560 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2560) != 0 )
    {
      sub_56E5D0(&unk_20D2580);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2560);
      __cxa_atexit((void (*)(void *))sub_57A380, &unk_20D2580, &unk_20D1280);
    }
    v3 = a1[59];
  }
  v4 = (gaia::Gaia::Self *)&unk_20D2580;
  v5 = v1 + 12;
  if ( byte_20D2584 != 0 )
    v4 = nullptr;
  v6 = v1 + 16;
  v7 = 13;
  if ( v3 != 16 )
  {
    LOBYTE(v7) = 19;
    if ( v3 != 64 )
    {
      LOBYTE(v7) = 20;
      if ( v3 == 4 )
        v7 = 0;
    }
  }
  return sub_581D90(v4, v7, v5, v6, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_525190  (binary VA: 0x525190)
// Original: sub_525190
// ----------------------------------------------------------------------------
int sub_525190(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  gaia::Gaia::Self *v4;
  int v5;
  int v6;
  int v7;

  sub_524DA0((int)(uintptr_t)(a1), 20);
  v1 = a1[4];
  v2 = a1[5];
  v3 = a1[59];
  if ( v1 == v2 )
    return sub_524DA0((int)(uintptr_t)(a1), 0);
  while ( v3 != *(uint32_t *)(v1 + 4) )
  {
    v1 += 28;
    if ( v1 == v2 )
      return sub_524DA0((int)(uintptr_t)(a1), 0);
  }
  if ( v1 == 0 )
    return sub_524DA0((int)(uintptr_t)(a1), 0);
  if ( byte_20D2560 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2560) != 0 )
    {
      sub_56E5D0(&unk_20D2580);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2560);
      __cxa_atexit((void (*)(void *))sub_57A380, &unk_20D2580, &unk_20D1280);
    }
    v3 = a1[59];
  }
  v4 = (gaia::Gaia::Self *)&unk_20D2580;
  v5 = v1 + 12;
  if ( byte_20D2584 != 0 )
    v4 = nullptr;
  v6 = v1 + 16;
  v7 = 13;
  if ( v3 != 16 )
  {
    LOBYTE(v7) = 19;
    if ( v3 != 64 )
    {
      LOBYTE(v7) = 20;
      if ( v3 == 4 )
        v7 = 0;
    }
  }
  return sub_581D90(v4, v7, v5, v6, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_5252D0  (binary VA: 0x5252d0)
// Original: sub_5252D0
// ----------------------------------------------------------------------------
int sub_5252D0(int a1)
{
  uint8_t *v1;

  if ( byte_20D2560 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2560) != 0 )
  {
    sub_56E5D0(&unk_20D2580);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2560);
    __cxa_atexit((void (*)(void *))sub_57A380, &unk_20D2580, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D2584 == 0 )
    v1 = (uint8_t *)(&unk_20D2580);
  if ( v1[5] == 0 )
    return sub_524DA0(a1, 19);
  sub_580EB0(v1);
  return sub_524DA0(a1, 12);
}

// ----------------------------------------------------------------------------
// Function: sub_5253B0  (binary VA: 0x5253b0)
// Original: sub_5253B0
// ----------------------------------------------------------------------------
void sub_5253B0(int a1, int a2)
{
  int v2;
  sociallib::ClientSNSInterface::Self *v3;
  char *v4;
  char *v5;
  typedef char *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  if ( a2 == 64 )
  {
    sub_524DA0(a1, 0);
  }
  else
  {
    sub_524DA0(a1, 10);
    v2 = 7;
    if ( a2 != 8 )
    {
      if ( a2 <= 8 )
      {
        LOWORD(v2) = 6;
        if ( a2 != 2 )
        {
          LOWORD(v2) = 4;
          if ( a2 != 4 )
            v2 = 1;
        }
      }
      else
      {
        v2 = 5;
        if ( a2 != 16 )
          v2 = 1;
      }
    }
    v3 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
    v7 = nullptr;
    v8 = nullptr;
    v9 = 0;
    if ( dword_20D2420 == 0 )
    {
      v3 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
      sociallib::ClientSNSInterface::Construct(v3);
      dword_20D2420 = (int)(uintptr_t)(v3);
    }
    sociallib::ClientSNSInterface::getFriends(v3, v2, 2, &v7);
    v4 = v8;
    v5 = v7;
    if ( v8 != v7 )
    {
      do
      {
        v6 = v5;
        v5 += 4;
        g4_std::string::Destroy(v6);
      }
      while ( v4 != v5 );
      v5 = v7;
    }
    if ( v5 != nullptr )
      opDelete(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_5254F0  (binary VA: 0x5254f0)
// Original: sub_5254F0
// ----------------------------------------------------------------------------
int sub_5254F0(int a1)
{
  uint8_t *v1;

  if ( byte_20D2560 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2560) != 0 )
  {
    sub_56E5D0(&unk_20D2580);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2560);
    __cxa_atexit((void (*)(void *))sub_57A380, &unk_20D2580, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D2584 == 0 )
    v1 = (uint8_t *)(&unk_20D2580);
  if ( v1[5] == 0 )
    return sub_524DA0(a1, 19);
  sub_581BD0(v1);
  return sub_524DA0(a1, 8);
}

// ----------------------------------------------------------------------------
// Function: sub_5255D0  (binary VA: 0x5255d0)
// Original: sub_5255D0
// ----------------------------------------------------------------------------
int sub_5255D0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  gaia::Gaia::Self *v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef uint32_t _g4_t_v18[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v16)) > _g4_s1 ? (20u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);

  v2 = a1;
  v3 = *(uint32_t *)(a1 + 16);
  if ( v3 == *(uint32_t *)(a1 + 20) )
    return sub_524DA0(v2, 0);
  while ( (uint8_t)sub_561CD0(v3) == 0 || *(uint8_t *)(v3 + 9) == 0 || *(uint8_t *)(a1 + 165) == 0 )
  {
    v3 += 28;
    if ( v3 == *(uint32_t *)(a1 + 20) )
      return sub_524DA0(v2, 0);
  }
  v4 = *(uint32_t *)(v3 + 4);
  if ( v4 == 0x80000000 )
    return sub_524DA0(v2, 0);
  v5 = *(uint32_t *)(a1 + 16);
  v6 = *(uint32_t *)(a1 + 20);
  if ( v5 == v6 )
    return sub_524DA0(v2, 0);
  v16 = v4;
  while ( 1 )
  {
    while ( a2 != *(uint32_t *)(v5 + 4) )
    {
      v5 += 28;
      if ( v5 == v6 )
        goto LABEL_20;
    }
    if ( (uint8_t)sub_561CD0(v5) != 0 )
      break;
    v5 += 28;
    v6 = *(uint32_t *)(a1 + 20);
    if ( v5 == v6 )
    {
LABEL_20:
      v2 = a1;
      return sub_524DA0(v2, 0);
    }
  }
  v7 = v16;
  v8 = *(uint32_t *)(a1 + 16);
  v9 = *(uint32_t *)(a1 + 20);
  if ( v8 == v9 )
    goto LABEL_21;
  while ( a2 != *(uint32_t *)(v8 + 4) )
  {
    v8 += 28;
    if ( v8 == v9 )
      goto LABEL_21;
  }
  if ( v8 == 0 )
  {
LABEL_21:
    v17 = &unk_213B814;
    v18[0] = (uint32_t)(uintptr_t)(&unk_213B814);
  }
  else
  {
    g4_std::string::construct_copy(&v17, v8 + 12);
    g4_std::string::construct_copy(v18, v8 + 16);
    v7 = v16;
  }
  v11 = 13;
  if ( v7 != 16 )
  {
    LOBYTE(v11) = 19;
    if ( v7 != 64 )
    {
      LOBYTE(v11) = 20;
      if ( v7 == 4 )
        v11 = 0;
    }
  }
  v12 = 13;
  if ( a2 != 16 )
  {
    LOWORD(v12) = 19;
    if ( a2 != 64 )
    {
      LOWORD(v12) = 20;
      if ( a2 == 4 )
        v12 = 0;
    }
  }
  if ( byte_20D2560 == 0 )
  {
    v15 = v11;
    v14 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2560);
    v11 = v15;
    if ( v14 != 0 )
    {
      sub_56E5D0(&unk_20D2580);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2560);
      __cxa_atexit((void (*)(void *))sub_57A380, &unk_20D2580, &unk_20D1280);
      v11 = v15;
    }
  }
  v13 = nullptr;
  if ( byte_20D2584 == 0 )
    v13 = (gaia::Gaia::Self *)&unk_20D2580;
  sub_5810D0(v13, v11, v12, &v17);
  *(uint32_t *)(a1 + 272) = 0;
  sub_524DA0(a1, 14);
  g4_std::string::Destroy(v18);
  return ((g4_std::string::Destroy(&v17)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_525870  (binary VA: 0x525870)
// Original: sub_525870
// ----------------------------------------------------------------------------
int sub_525870(int a1, int a2)
{
  int v2;
  bool v3;
  char v4;
  int v5;
  int v6;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (41u + sizeof(_g4_t_v14)) > _g4_s6 ? (41u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 41u);

  v9 = &unk_213B814;
  v10 = &unk_213B814;
  *(uint32_t *)(a1 + 200) = 0;
  *(uint32_t *)(a1 + 204) = 0x40000000;
  v11 = &unk_213B814;
  v12 = &unk_213B814;
  v13 = 0;
  v14 = 0;
  g4_std::string::assign_str(a1 + 208, &v9);
  g4_std::string::assign_str(a1 + 212, &v10);
  g4_std::string::assign_str(a1 + 216, &v11);
  g4_std::string::assign_str(a1 + 220, &v12);
  *(uint8_t *)(a1 + 224) = v13;
  *(uint8_t *)(a1 + 225) = v14;
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  v2 = *(uint32_t *)(a1 + 16);
  v3 = *(uint32_t *)(a1 + 20) == v2;
  *(uint32_t *)(a1 + 204) = a2;
  v4 = 1;
  if ( v3 )
  {
LABEL_5:
    *(uint8_t *)(a1 + 224) = v4;
    if ( a2 == 16 )
      goto LABEL_13;
  }
  else
  {
    do
    {
      if ( (uint8_t)sub_561CD0(v2) != 0 && *(uint8_t *)(a1 + 165) != 0 )
      {
        v4 = 0;
        goto LABEL_5;
      }
      v2 += 28;
    }
    while ( v2 != *(uint32_t *)(a1 + 20) );
    *(uint8_t *)(a1 + 224) = 1;
    if ( a2 == 16 )
    {
LABEL_13:
      *(uint8_t *)(a1 + 225) = *(uint8_t *)(a1 + 400);
      v6 = dword_20D2420;
      v5 = 5;
      if ( dword_20D2420 == 0 )
        goto LABEL_14;
      goto LABEL_10;
    }
  }
  v5 = 7;
  if ( a2 != 8 )
  {
    if ( a2 > 8 )
    {
      v5 = 2;
      if ( a2 == 64 )
        goto LABEL_9;
      goto LABEL_17;
    }
    LOWORD(v5) = 6;
    if ( a2 != 2 )
    {
      LOWORD(v5) = 4;
      if ( a2 != 4 )
LABEL_17:
        v5 = 1;
    }
  }
LABEL_9:
  v6 = dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
LABEL_14:
    v8 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v8);
    v6 = (int)(uintptr_t)(v8);
    dword_20D2420 = (int)(uintptr_t)(v8);
  }
LABEL_10:
  sociallib::ClientSNSInterface::getUid(v6, v5);
  return sub_524DA0(a1, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_525AA0  (binary VA: 0x525aa0)
// Original: sub_525AA0
// ----------------------------------------------------------------------------
void sub_525AA0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  char v5; // si
  char v6;
  uint32_t *v7;
  char v8;
  int v9;
  sociallib::ClientSNSInterface::Self *v10;
  sociallib::ClientSNSInterface::Self *v11;
  bool v12;
  int *v13;

  v2 = *(uint32_t *)(a1 + 16);
  if ( v2 != *(uint32_t *)(a1 + 20) )
  {
    do
    {
      if ( (uint8_t)sub_561CD0(v2) != 0 && *(uint8_t *)(a1 + 165) != 0 )
      {
        v3 = *(uint32_t *)(a1 + 16);
        v4 = *(uint32_t *)(a1 + 20);
        v5 = 0;
        v6 = 1;
        goto LABEL_5;
      }
      v2 += 28;
      v4 = *(uint32_t *)(a1 + 20);
    }
    while ( v2 != v4 );
    v3 = *(uint32_t *)(a1 + 16);
    v5 = 1;
    v6 = 0;
LABEL_5:
    if ( v4 != v3 )
    {
      while ( *(uint32_t *)(v3 + 4) != a2 )
      {
        v3 += 28;
        if ( v3 == v4 )
          return;
      }
      *(uint8_t *)v3 = 1;
      *(uint8_t *)(v3 + 9) = v5;
      *(uint8_t *)(v3 + 10) = v6;
      sub_525870(a1, a2);
      if ( a2 == 4 )
      {
        if ( byte_20D2450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2450) != 0 )
        {
          sub_557B70(&unk_20D2460);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2450);
          __cxa_atexit((void (*)(void *))sub_550A70, &unk_20D2460, &unk_20D1280);
        }
        v7 = nullptr;
        if ( byte_20D2464 == 0 )
          v7 = (uint32_t *)(&unk_20D2460);
        v8 = sub_557AC0(1);
        v9 = 0;
        if ( v8 != 0 )
          v9 = v7[42];
        if ( *(uint8_t *)(v9 + 188) != 0 )
        {
          *(uint32_t *)(v9 + 172) = 1;
          *(uint8_t *)(v9 + 188) = 0;
        }
        v10 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v10 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v10);
          dword_20D2420 = (int)(uintptr_t)(v10);
        }
        sociallib::ClientSNSInterface::hasPermission(v10, 4, 1);
        v11 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v11 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v11);
          dword_20D2420 = (int)(uintptr_t)(v11);
        }
        sociallib::ClientSNSInterface::hasPermission(v11, 4, 2);
        if ( *(uint8_t *)(a1 + 196) == 0 )
        {
          if ( byte_20D2C40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2C40) != 0 )
          {
            sub_7A0040(&dword_20D2C60);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2C40);
            __cxa_atexit((void (*)(void *))sub_7AE4A0, &dword_20D2C60, &unk_20D1280);
          }
          v12 = byte_20D2CF0 == 0;
          *(uint8_t *)(a1 + 196) = 1;
          if ( v12 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2CF0) != 0 )
          {
            sub_6E55D0(&dword_20D2D00);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2CF0);
            __cxa_atexit((void (*)(void *))sub_6D4BF0, &dword_20D2D00, &unk_20D1280);
          }
          v13 = nullptr;
          if ( byte_20D2D0C == 0 )
            v13 = (int *)(&dword_20D2D00);
          sub_6E5770(v13, 0);
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_525D70  (binary VA: 0x525d70)
// Original: sub_525D70
// ----------------------------------------------------------------------------
int sub_525D70(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;
  int v6;
  gaia::Gaia::Self *v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint32_t _g4_t_v10[3];
  typedef void *_g4_t_v11;
  typedef uint32_t _g4_t_v12[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);

  v1 = 0x80000000;
  if ( *(uint32_t *)(a1 + 16) != *(uint32_t *)(a1 + 20) )
  {
    v2 = *(uint32_t *)(a1 + 16);
    do
    {
      if ( (uint8_t)sub_561CD0(v2) != 0 && *(uint8_t *)(v2 + 9) != 0 )
      {
        v1 = *(uint32_t *)(v2 + 4);
        goto LABEL_6;
      }
      v2 += 28;
    }
    while ( v2 != *(uint32_t *)(a1 + 20) );
    v1 = 0x80000000;
  }
LABEL_6:
  v9 = &unk_213B814;
  v10[0] = (uint32_t)(uintptr_t)(&unk_213B814);
  if ( v1 != 4 )
  {
    if ( v1 > 4 )
    {
      if ( v1 != 16 && v1 != 64 )
        goto LABEL_9;
    }
    else if ( v1 != 2 )
    {
LABEL_9:
      sub_524DA0(a1, 0);
      goto LABEL_10;
    }
  }
  v4 = *(uint32_t *)(a1 + 16);
  v5 = *(uint32_t *)(a1 + 20);
  if ( v4 == v5 )
    goto LABEL_31;
  while ( v1 != *(uint32_t *)(v4 + 4) )
  {
    v4 += 28;
    if ( v4 == v5 )
      goto LABEL_31;
  }
  if ( v4 == 0 )
  {
LABEL_31:
    v11 = &unk_213B814;
    v12[0] = (uint32_t)(uintptr_t)(&unk_213B814);
  }
  else
  {
    v8 = v4;
    g4_std::string::construct_copy(&v11, v4 + 12);
    g4_std::string::construct_copy(v12, v8 + 16);
  }
  g4_std::string::assign_str(&v9, &v11);
  g4_std::string::assign_str(v10, v12);
  g4_std::string::Destroy(v12);
  g4_std::string::Destroy(&v11);
  sub_524DA0(a1, 5);
  v6 = 13;
  if ( v1 != 16 )
  {
    LOWORD(v6) = 19;
    if ( v1 != 64 )
    {
      LOWORD(v6) = 20;
      if ( v1 == 4 )
        v6 = 0;
    }
  }
  if ( byte_20D2560 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2560) != 0 )
  {
    sub_56E5D0(&unk_20D2580);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2560);
    __cxa_atexit((void (*)(void *))sub_57A380, &unk_20D2580, &unk_20D1280);
  }
  v7 = nullptr;
  if ( byte_20D2584 == 0 )
    v7 = (gaia::Gaia::Self *)&unk_20D2580;
  sub_581F20(v7, v6, &v9);
LABEL_10:
  g4_std::string::Destroy(v10);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_525FD0  (binary VA: 0x525fd0)
// Original: sub_525FD0
// ----------------------------------------------------------------------------
int sub_525FD0(int a1)
{
  char *v1;
  void *v2;
  int result;
  typedef gaia::Gaia::Self *_g4_t_v4;
  typedef gaia::Gaia::Self *_g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v5)) > _g4_s1 ? (0u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);

  gaia::Gaia::GetInstance(v4);
  if ( (uint8_t)gaia::Gaia::IsInitialized(v5) != 0 )
    sub_524DA0(a1, 3);
  else
    sub_524DA0(a1, 4);
  memset(v6, 0, 12);
  v1 = (char *)(uintptr_t)(off_20BB820[0]);
  if ( byte_20D2B90 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90) != 0 )
  {
    sub_793360(&unk_20D2B98);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
    __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D2B9C == 0 )
    v2 = &unk_20D2B98;
  sub_7B8B70(v2, v1, v6, 0);
  result = v6[0];
  if ( v6[0] != 0 )
    return sub_4EB870(v6[0]);
  return result;
}


