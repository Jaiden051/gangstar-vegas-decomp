#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: MemoryOperators.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (11 funcs)
// ============================================================================
#include "MemoryOperators.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: gll_operator_new  (binary VA: 0x4eb7c0)
// Original: gll_operator_new
// ----------------------------------------------------------------------------
int gll_operator_new(size_t a1, int a2, int a3)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, a2, a3, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EB800  (binary VA: 0x4eb800)
// Original: sub_4EB800
// ----------------------------------------------------------------------------
int sub_4EB800(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4EB830  (binary VA: 0x4eb830)
// Original: sub_4EB830
// ----------------------------------------------------------------------------
int sub_4EB830(size_t a1)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EB870  (binary VA: 0x4eb870)
// Original: sub_4EB870
// ----------------------------------------------------------------------------
int sub_4EB870(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: opNew  (binary VA: 0x4eb8a0)
// Original: operator new
// ----------------------------------------------------------------------------
int opNew(size_t a1)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_4EB8E0  (binary VA: 0x4eb8e0)
// Original: sub_4EB8E0
// ----------------------------------------------------------------------------
int * sub_4EB8E0(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v7;
  int v8;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;

  v7 = a2 + 4;
  LOBYTE(v12) = 1;
  v13 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = g4_std::string::compare_str(a5, a4 + 16) >> 31;
  v8 = opNew(0x2Cu);
  if ( v8 != -16 )
  {
    v10 = (uint32_t *)v8;
    g4_std::string::construct_copy(v8 + 16, a5);
    v8 = (int)(uintptr_t)v10;
    v10[5] = a5[1];
    v10[6] = a5[2];
    v10[7] = a5[3];
    v10[8] = a5[4];
    v10[9] = a5[5];
    v10[10] = a5[6];
  }
  v11 = v8;
  sub_1904970(v12, v8, a4, v13);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v11;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4EB9F0  (binary VA: 0x4eb9f0)
// Original: sub_4EB9F0
// ----------------------------------------------------------------------------
int sub_4EB9F0(int a1, int a2, void **a3)
{
  size_t v3;
  size_t i;
  size_t v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  int v11;
  size_t v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v17;
  typedef size_t _g4_t_v18;
  typedef char _g4_t_v19;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_s1)) > _g4_s2 ? (12u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);

  if ( *(uint32_t *)(a2 + 8) == 0 )
  {
    v11 = a2 + 4;
    goto LABEL_17;
  }
  s1 = *a3;
  v3 = *((uint32_t *)*a3 - 3);
  for ( i = *(uint32_t *)(a2 + 8); ; i = v5 )
  {
    v6 = *(uint32_t **)(i + 16);
    v7 = *(v6 - 3);
    n = v7;
    v18 = i;
    if ( v3 <= v7 )
      n = v3;
    v23 = n;
    v9 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v9 == 0 )
      v9 = v3 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v18 + 8);
    v19 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v5 = *(uint32_t *)(v18 + 12);
  v19 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v18;
  v12 = v23;
  v13 = v10;
  v24 = v18;
  if ( v19 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( *(uint32_t *)(a2 + 12) == v11 )
  {
    sub_4EB8E0(v25, a2, 0, v11, (uint32_t *)(uintptr_t)a3);
  }
  else
  {
    v17 = sub_19048F0(v11);
    v13 = *(uint32_t **)(v17 + 16);
    v24 = v11;
    v11 = v17;
    v7 = *(v13 - 3);
    s1 = *a3;
    v3 = *((uint32_t *)*a3 - 3);
    v12 = v3;
    if ( v7 <= v3 )
      v12 = *(v13 - 3);
LABEL_12:
    v14 = memcmp(v13, s1, v12);
    v15 = v7 - v3;
    if ( v14 != 0 )
      v15 = v14;
    if ( v15 >= 0 )
    {
      *(uint32_t *)a1 = v11;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    sub_4EB8E0(v25, a2, 0, v24, (uint32_t *)(uintptr_t)a3);
  }
  *(uint32_t *)a1 = v25[0];
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: opNewArray  (binary VA: 0x4ebb50)
// Original: operator new[]
// ----------------------------------------------------------------------------
int opNewArray(size_t a1)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: opDelete  (binary VA: 0x4ebb90)
// Original: operator delete
// ----------------------------------------------------------------------------
void opDelete(void *a1)
{
  sub_5240B0((int *)a1);
}

// ----------------------------------------------------------------------------
// Function: opDeleteArray  (binary VA: 0x4ebbc0)
// Original: operator delete[]
// ----------------------------------------------------------------------------
void opDeleteArray(void *a1)
{
  sub_5240B0((int *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EBBF0  (binary VA: 0x4ebbf0)
// Original: sub_4EBBF0
// ----------------------------------------------------------------------------
int sub_4EBBF0(size_t a1, char a2)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, a2);
}

