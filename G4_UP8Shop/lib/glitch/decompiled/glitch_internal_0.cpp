#include "Core/Utils/DecompTypes.h"
#include "glitch_internal_0.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_CDFA90  (binary VA: 0xcdfa90)
// Original: sub_CDFA90
// ----------------------------------------------------------------------------
int sub_CDFA90(glitch::core::STraversalState<unsigned int> *a1)
{
  int result;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  char v9;
  unsigned int v10;
  unsigned int v11[7];

  result = *((uint32_t *)a1 + 2);
  v3 = *(uint32_t *)(result + 136);
  if ( v3 != 0 )
    goto LABEL_6;
LABEL_11:
  v5 = v11[0];
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (int *)(v5 & 0xFFFFFFFC);
      v8 = *(uint32_t *)((v5 & 0xFFFFFFFC) + 16) >> 30;
      _mm_mfence();
      if ( v8 == 1 )
      {
        result = *v7;
        *((uint32_t *)a1 + 38) = *v7;
        *((uint32_t *)a1 + 39) = (uint32_t)(uintptr_t)(v7 + 1);
        return result;
      }
      if ( v8 != 2 )
        break;
      v9 = v5 & 3;
      v10 = ++v11[0];
      if ( v9 == 1 )
      {
        glitch::core::STraversalState_unsigned_int_150381::push(a1, v11);
        v5 = v7[3];
        v11[0] = v5;
      }
      else if ( v9 != 0 )
      {
        if ( v9 == 2 )
          goto LABEL_5;
        v5 = v10;
      }
      else
      {
        glitch::core::STraversalState_unsigned_int_150381::push(a1, v11);
        v5 = v7[2];
        v11[0] = v5;
      }
    }
    if ( v8 != 0 )
      goto LABEL_11;
LABEL_5:
    result = *((uint32_t *)a1 + 2);
    v3 = *(uint32_t *)(result + 136);
    if ( v3 == 0 )
      break;
LABEL_6:
    v4 = v3 - 1;
    *(uint32_t *)(result + 136) = v4;
    v5 = *(uint32_t *)(result + 4 * v4 + 8);
    v11[0] = v5;
    if ( v4 == 0 )
    {
      v6 = *((uint32_t *)a1 + 2);
      if ( *(uint32_t *)a1 != v6 )
        *((uint32_t *)a1 + 2) = *(uint32_t *)(v6 + 4);
    }
  }
  *((uint32_t *)a1 + 38) = 0;
  *((uint32_t *)a1 + 39) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CDFBC0  (binary VA: 0xcdfbc0)
// Original: sub_CDFBC0
// ----------------------------------------------------------------------------
int sub_CDFBC0(glitch::core::STraversalState<unsigned int> *a1)
{
  int result;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  char v9;
  unsigned int v10;
  unsigned int v11[7];

  result = *((uint32_t *)a1 + 2);
  v3 = *(uint32_t *)(result + 136);
  if ( v3 != 0 )
    goto LABEL_6;
LABEL_11:
  v5 = v11[0];
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (int *)(v5 & 0xFFFFFFFC);
      v8 = *(uint32_t *)((v5 & 0xFFFFFFFC) + 16) >> 30;
      _mm_mfence();
      if ( v8 == 1 )
      {
        result = *v7;
        *((uint32_t *)a1 + 38) = *v7;
        *((uint32_t *)a1 + 39) = (uint32_t)(uintptr_t)(v7 + 1);
        return result;
      }
      if ( v8 != 2 )
        break;
      v9 = v5 & 3;
      v10 = ++v11[0];
      if ( v9 == 1 )
      {
        glitch::core::STraversalState_unsigned_int_150381::push(a1, v11);
        v5 = v7[3];
        v11[0] = v5;
      }
      else if ( v9 != 0 )
      {
        if ( v9 == 2 )
          goto LABEL_5;
        v5 = v10;
      }
      else
      {
        glitch::core::STraversalState_unsigned_int_150381::push(a1, v11);
        v5 = v7[2];
        v11[0] = v5;
      }
    }
    if ( v8 != 0 )
      goto LABEL_11;
LABEL_5:
    result = *((uint32_t *)a1 + 2);
    v3 = *(uint32_t *)(result + 136);
    if ( v3 == 0 )
      break;
LABEL_6:
    v4 = v3 - 1;
    *(uint32_t *)(result + 136) = v4;
    v5 = *(uint32_t *)(result + 4 * v4 + 8);
    v11[0] = v5;
    if ( v4 == 0 )
    {
      v6 = *((uint32_t *)a1 + 2);
      if ( *(uint32_t *)a1 != v6 )
        *((uint32_t *)a1 + 2) = *(uint32_t *)(v6 + 4);
    }
  }
  *((uint32_t *)a1 + 38) = 0;
  *((uint32_t *)a1 + 39) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CDFCF0  (binary VA: 0xcdfcf0)
// Original: sub_CDFCF0
// ----------------------------------------------------------------------------
int sub_CDFCF0(glitch::core::STraversalState<unsigned int> *a1)
{
  int result;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  char v9;
  unsigned int v10;
  unsigned int v11[7];

  result = *((uint32_t *)a1 + 2);
  v3 = *(uint32_t *)(result + 136);
  if ( v3 != 0 )
    goto LABEL_6;
LABEL_11:
  v5 = v11[0];
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (int *)(v5 & 0xFFFFFFFC);
      v8 = *(uint32_t *)((v5 & 0xFFFFFFFC) + 16) >> 30;
      _mm_mfence();
      if ( v8 == 1 )
      {
        result = *v7;
        *((uint32_t *)a1 + 38) = *v7;
        *((uint32_t *)a1 + 39) = (uint32_t)(uintptr_t)(v7 + 1);
        return result;
      }
      if ( v8 != 2 )
        break;
      v9 = v5 & 3;
      v10 = ++v11[0];
      if ( v9 == 1 )
      {
        glitch::core::STraversalState_unsigned_int_150381::push(a1, v11);
        v5 = v7[3];
        v11[0] = v5;
      }
      else if ( v9 != 0 )
      {
        if ( v9 == 2 )
          goto LABEL_5;
        v5 = v10;
      }
      else
      {
        glitch::core::STraversalState_unsigned_int_150381::push(a1, v11);
        v5 = v7[2];
        v11[0] = v5;
      }
    }
    if ( v8 != 0 )
      goto LABEL_11;
LABEL_5:
    result = *((uint32_t *)a1 + 2);
    v3 = *(uint32_t *)(result + 136);
    if ( v3 == 0 )
      break;
LABEL_6:
    v4 = v3 - 1;
    *(uint32_t *)(result + 136) = v4;
    v5 = *(uint32_t *)(result + 4 * v4 + 8);
    v11[0] = v5;
    if ( v4 == 0 )
    {
      v6 = *((uint32_t *)a1 + 2);
      if ( *(uint32_t *)a1 != v6 )
        *((uint32_t *)a1 + 2) = *(uint32_t *)(v6 + 4);
    }
  }
  *((uint32_t *)a1 + 38) = 0;
  *((uint32_t *)a1 + 39) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CDFE20  (binary VA: 0xcdfe20)
// Original: sub_CDFE20
// ----------------------------------------------------------------------------
int sub_CDFE20(glitch::core::STraversalState<unsigned int> *a1)
{
  int result;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  char v9;
  unsigned int v10;
  unsigned int v11[7];

  result = *((uint32_t *)a1 + 2);
  v3 = *(uint32_t *)(result + 136);
  if ( v3 != 0 )
    goto LABEL_6;
LABEL_11:
  v5 = v11[0];
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (int *)(v5 & 0xFFFFFFFC);
      v8 = *(uint32_t *)((v5 & 0xFFFFFFFC) + 16) >> 30;
      _mm_mfence();
      if ( v8 == 1 )
      {
        result = *v7;
        *((uint32_t *)a1 + 38) = *v7;
        *((uint32_t *)a1 + 39) = (uint32_t)(uintptr_t)(v7 + 1);
        return result;
      }
      if ( v8 != 2 )
        break;
      v9 = v5 & 3;
      v10 = ++v11[0];
      if ( v9 == 1 )
      {
        glitch::core::STraversalState_unsigned_int_150381::push(a1, v11);
        v5 = v7[3];
        v11[0] = v5;
      }
      else if ( v9 != 0 )
      {
        if ( v9 == 2 )
          goto LABEL_5;
        v5 = v10;
      }
      else
      {
        glitch::core::STraversalState_unsigned_int_150381::push(a1, v11);
        v5 = v7[2];
        v11[0] = v5;
      }
    }
    if ( v8 != 0 )
      goto LABEL_11;
LABEL_5:
    result = *((uint32_t *)a1 + 2);
    v3 = *(uint32_t *)(result + 136);
    if ( v3 == 0 )
      break;
LABEL_6:
    v4 = v3 - 1;
    *(uint32_t *)(result + 136) = v4;
    v5 = *(uint32_t *)(result + 4 * v4 + 8);
    v11[0] = v5;
    if ( v4 == 0 )
    {
      v6 = *((uint32_t *)a1 + 2);
      if ( *(uint32_t *)a1 != v6 )
        *((uint32_t *)a1 + 2) = *(uint32_t *)(v6 + 4);
    }
  }
  *((uint32_t *)a1 + 38) = 0;
  *((uint32_t *)a1 + 39) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CE3A30  (binary VA: 0xce3a30)
// Original: sub_CE3A30
// ----------------------------------------------------------------------------
uint32_t * sub_CE3A30(uint32_t *a1)
{
  unsigned int v1;
  unsigned int v2;
  uint32_t *v3;
  uint32_t *v4;
  unsigned int v5;
  unsigned int v6;
  size_t v7;
  unsigned int v8;
  unsigned int v9;
  uint32_t *v10;
  unsigned int v12;
  unsigned int v13;
  size_t *v14;
  unsigned int i;
  size_t v16;
  size_t *v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v21;
  unsigned int v22;
  uint32_t *v23;
  unsigned int v24;

  v1 = 4;
  v2 = a1[3];
  if ( v2 > 3 )
  {
    if ( (v2 & 3) != 0 )
      v1 = v2 + 4 - (v2 & 3);
    else
      v1 = v2;
  }
  v21 = v2 / v1 + (v2 % v1 != 0);
  if ( v21 != 0 )
  {
    v23 = a1;
    v3 = (uint32_t *)*a1;
    if ( *a1 != 0 )
    {
      while ( 2 )
      {
        v4 = v3;
        v5 = v21;
        while ( --v5 != 0 )
        {
          if ( (uint32_t *)*v4 != (uint32_t *)((char *)v4 + v1) )
          {
            v3 = (uint32_t *)*v4;
            v23 = v4;
            goto LABEL_11;
          }
          v4 = (uint32_t *)*v4;
        }
        if ( v4 != nullptr )
        {
          *v23 = *v4;
          return v3;
        }
LABEL_11:
        if ( v3 != nullptr )
          continue;
        break;
      }
    }
  }
  v6 = a1[4];
  if ( v21 >= v6 )
    v6 = v21;
  a1[4] = v6;
  v7 = v1 * v6 + 8;
  v3 = (uint32_t *)opNewArray(v7);
  if ( v3 == nullptr )
  {
    v18 = a1[4];
    if ( v21 >= v18 )
      return v3;
    v19 = v18 >> 1;
    if ( v21 >= v19 )
      v19 = v21;
    a1[4] = v19;
    v7 = v1 * v19 + 8;
    v3 = (uint32_t *)opNewArray(v7);
    if ( v3 == nullptr )
      return v3;
  }
  v8 = a1[4];
  if ( v21 < v8 )
  {
    sub_60EFD0((uint32_t **)a1, (uint32_t *)((char *)v3 + v1 * v21), v7 - v1 * v21 - 8, v1);
    v8 = a1[4];
    v22 = a1[6];
    if ( v22 == 0 )
      goto LABEL_17;
  }
  else
  {
    v22 = a1[6];
    if ( v22 == 0 )
    {
LABEL_17:
      a1[4] = 2 * v8;
      goto LABEL_18;
    }
  }
  v24 = a1[3];
  if ( v22 > v1 * v8 / v24 )
  {
    v12 = 2 * v8;
    v13 = v22 * v24 / v1;
    if ( v12 <= v13 )
      v13 = v12;
    a1[4] = v13;
  }
LABEL_18:
  v9 = a1[1];
  if ( v9 == 0 || (unsigned int)(uintptr_t)(v3) < v9 )
  {
    v10 = (uint32_t *)((char *)v3 + v7 - 4);
    *(v10 - 1) = v9;
    *v10 = a1[2];
    a1[1] = (uint32_t)(uintptr_t)(v3);
    a1[2] = v7;
    return v3;
  }
  v14 = (size_t *)(v9 + a1[2] - 4);
  for ( i = *(uint32_t *)(v9 + a1[2] - 8); i != 0 && (unsigned int)(uintptr_t)(v3) >= i; i = *(v14 - 1) )
    v14 = (size_t *)(i + *v14 - 4);
  v16 = *v14;
  v17 = (size_t *)((uint32_t *)((char *)v3 + v7 - 4));
  *(v17 - 1) = i;
  *v17 = v16;
  *(v14 - 1) = (size_t)v3;
  *v14 = v7;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_CE3C80  (binary VA: 0xce3c80)
// Original: sub_CE3C80
// ----------------------------------------------------------------------------
uint32_t * sub_CE3C80()
{
  uint32_t *v0;

  if ( byte_20D53CC == 0 )
  {
    byte_20D53CC = 1;
    if ( &dword_20D53E0 != nullptr )
    {
      glf::SpinLock::Construct((glf::SpinLock::Self *)&dword_20D53E0);
      dword_20D53E4 = 0;
      dword_20D53E8 = 0;
      dword_20D53EC = 0;
      dword_20D53F0 = 20;
      dword_20D53F4 = 32;
      dword_20D53F8 = 32;
      dword_20D53FC = 0;
    }
  }
  glf::SpinLock::Lock(&dword_20D53E0);
  v0 = sub_CE3A30(&dword_20D53E4);
  glf::SpinLock::Unlock((glf::SpinLock::Self *)&dword_20D53E0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: sub_CE4500  (binary VA: 0xce4500)
// Original: sub_CE4500
// ----------------------------------------------------------------------------
int * sub_CE4500(int a1, int a2, unsigned int a3, int a4)
{
  int *v6;
  int *v7;
  int32_t v8;
  int32_t v9;
  unsigned int v10;
  int v11;

  v6 = (int *)(sub_605A40());
  v7 = v6;
  if ( v6 == nullptr )
    std::terminate();
  v6[4] = 0;
  v8 = 0;
  _mm_mfence();
  while ( 1 )
  {
    v9 = __sync_val_compare_and_swap(v7 + 4, v8, v8 & 0x3FFFFFFF | 0x80000000);
    if ( v8 == v9 )
      break;
    v8 = v9;
  }
  v10 = a1 ^ a3
      | ((a1 ^ a3) >> 1)
      | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
      | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)
      | ((a1 ^ a3
        | ((a1 ^ a3) >> 1)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)) >> 8)
      | ((a1 ^ a3
        | ((a1 ^ a3) >> 1)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)
        | ((a1 ^ a3
          | ((a1 ^ a3) >> 1)
          | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
          | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)) >> 8)) >> 16);
  v11 = v10 ^ (v10 >> 1);
  __sync_add_and_fetch((volatile int32_t *)(a2 + 16), 1u);
  __sync_add_and_fetch((volatile int32_t *)(a4 + 16), 1u);
  v7[1] = v11;
  *v7 = a1 & (v11 ^ -v11);
  if ( (a1 & v11) != 0 )
  {
    v7[3] = a2;
    v7[2] = a4;
  }
  else
  {
    v7[2] = a2;
    v7[3] = a4;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_CE5320  (binary VA: 0xce5320)
// Original: sub_CE5320
// ----------------------------------------------------------------------------
int * sub_CE5320(int a1, int a2, unsigned int a3, int a4)
{
  int *v6;
  int *v7;
  int32_t v8;
  int32_t v9;
  unsigned int v10;
  int v11;

  v6 = (int *)(sub_605A40());
  v7 = v6;
  if ( v6 == nullptr )
    std::terminate();
  v6[4] = 0;
  v8 = 0;
  _mm_mfence();
  while ( 1 )
  {
    v9 = __sync_val_compare_and_swap(v7 + 4, v8, v8 & 0x3FFFFFFF | 0x80000000);
    if ( v8 == v9 )
      break;
    v8 = v9;
  }
  v10 = a1 ^ a3
      | ((a1 ^ a3) >> 1)
      | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
      | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)
      | ((a1 ^ a3
        | ((a1 ^ a3) >> 1)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)) >> 8)
      | ((a1 ^ a3
        | ((a1 ^ a3) >> 1)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)
        | ((a1 ^ a3
          | ((a1 ^ a3) >> 1)
          | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
          | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)) >> 8)) >> 16);
  v11 = v10 ^ (v10 >> 1);
  __sync_add_and_fetch((volatile int32_t *)(a2 + 16), 1u);
  __sync_add_and_fetch((volatile int32_t *)(a4 + 16), 1u);
  v7[1] = v11;
  *v7 = a1 & (v11 ^ -v11);
  if ( (a1 & v11) != 0 )
  {
    v7[3] = a2;
    v7[2] = a4;
  }
  else
  {
    v7[2] = a2;
    v7[3] = a4;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_CE5400  (binary VA: 0xce5400)
// Original: sub_CE5400
// ----------------------------------------------------------------------------
uint32_t * sub_CE5400(uint32_t *a1)
{
  uint32_t *v2;
  unsigned int v3;
  unsigned int *v4;
  int v5;
  int i;
  uint32_t *v7;
  uint32_t *v8;
  void *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v15;
  bool v16;
  char *v17;
  unsigned int v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  char v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef glitch::core::CIntMapHelper<glitch::core::SIntMapItem<unsigned int, glitch::streaming::CModifierStreamingModule::SObject *>, boost::fast_pool_allocator<glitch::core::SIntMapItem<unsigned int, glitch::streaming::CModifierStreamingModule::SObject *>, glitch::memory::SDefaultPoolAllocator, glitch::memory::SPoolMutex<glf::SpinLock::Self>, 32u, 0u>> *_g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef unsigned int _g4_t_v41[3];
  typedef unsigned int _g4_t_v42;
  typedef glitch::core::Self *_g4_t_v43[2];
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t _g4_t_v45[35];
  typedef int _g4_t_v46;
  typedef unsigned int *_g4_t_v47;
  typedef glitch::core::Self *_g4_t_v48[3];
  typedef uint32_t _g4_t_v49[35];
  typedef int _g4_t_v50;
  typedef unsigned int *_g4_t_v51;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (4u + sizeof(_g4_t_v32)) > _g4_s0 ? (4u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v33)) > _g4_s1 ? (4u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v34)) > _g4_s2 ? (4u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v35)) > _g4_s3 ? (4u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v36)) > _g4_s4 ? (8u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v37)) > _g4_s5 ? (12u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v38)) > _g4_s6 ? (12u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v39)) > _g4_s7 ? (16u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v40)) > _g4_s8 ? (28u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v41)) > _g4_s9 ? (32u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v42)) > _g4_s10 ? (44u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v43)) > _g4_s11 ? (48u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v44)) > _g4_s12 ? (56u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v45)) > _g4_s13 ? (60u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (200u + sizeof(_g4_t_v46)) > _g4_s14 ? (200u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (204u + sizeof(_g4_t_v47)) > _g4_s15 ? (204u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (208u + sizeof(_g4_t_v48)) > _g4_s16 ? (208u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (220u + sizeof(_g4_t_v49)) > _g4_s17 ? (220u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (360u + sizeof(_g4_t_v50)) > _g4_s18 ? (360u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (364u + sizeof(_g4_t_v51)) > _g4_s19 ? (364u + sizeof(_g4_t_v51)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 200u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 204u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 208u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 220u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 360u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 364u);

  v2 = sub_605A40();
  if ( v2 == nullptr )
    std::terminate();
  v2[4] = 0;
  __sync_add_and_fetch(v2 + 4, 1u);
  v3 = a1[22];
  v39 = v2;
  v4 = nullptr;
  v45[1] = (uint32_t)(uintptr_t)(v43);
  v45[0] = (uint32_t)(uintptr_t)(v43);
  v43[1] = (glitch::core::Self *)v45;
  v43[0] = (glitch::core::Self *)v45;
  v44 = v45;
  v5 = 0;
  v45[34] = 0;
  v46 = 0;
  v47 = nullptr;
  if ( v3 != 0 )
  {
    v42 = v3;
    glitch::core::STraversalState_unsigned_int_150381::push((glitch::core::STraversalState<unsigned int> *)v43, &v42);
    v4 = nullptr;
    if ( v44[34] != 0 )
    {
      sub_CDFE20((glitch::core::STraversalState<unsigned int> *)v43);
      v4 = v47;
      v5 = v46;
    }
    else
    {
      v46 = 0;
      v47 = nullptr;
      v5 = 0;
    }
  }
  v49[1] = (uint32_t)(uintptr_t)(v48);
  v49[0] = (uint32_t)(uintptr_t)(v48);
  v49[34] = 0;
  v48[1] = (glitch::core::Self *)v49;
  v48[0] = (glitch::core::Self *)v49;
  v48[2] = (glitch::core::Self *)v49;
  v50 = 0;
  v51 = nullptr;
  for ( i = 0; i != v5 || v51 != v4; i = v50 )
  {
    v40 = v5;
    v41[0] = *v4;
    v12 = (uint32_t *)a1[21];
    while ( 1 )
    {
      v13 = v12[4] >> 30;
      _mm_mfence();
      if ( v13 == 1 )
        break;
      if ( v13 == 2 )
      {
        if ( (v40 & v12[1]) != 0 )
          v12 = (uint32_t *)v12[3];
        else
          v12 = (uint32_t *)v12[2];
      }
      else if ( v13 == 0 )
      {
        goto LABEL_8;
      }
    }
    if ( v40 == *v12 && v12 != (uint32_t *)-4 )
    {
      v38 = (glitch::core::CIntMapHelper<glitch::core::SIntMapItem<unsigned int, glitch::streaming::CModifierStreamingModule::SObject *>, boost::fast_pool_allocator<glitch::core::SIntMapItem<unsigned int, glitch::streaming::CModifierStreamingModule::SObject *>, glitch::memory::SDefaultPoolAllocator, glitch::memory::SPoolMutex<glf::SpinLock::Self>, 32u, 0u>> *)(a1 + 23);
      v14 = (int)(uintptr_t)(glitch::core::CIntMapHelper_SIntMapItem_unsigned_int_7e00f5::insert(
              a1 + 23,
              v39,
              &v40,
              v41));
      v15 = v39;
      __sync_add_and_fetch((volatile int32_t *)(v14 + 16), 1u);
      _mm_mfence();
      __sync_sub_and_fetch(v39 + 4, 1u);
      v16 = (v39[4] & 0x3FFFFFFF) == 0;
      _mm_mfence();
      if ( v16 )
      {
        v29 = v39[4] >> 30;
        _mm_mfence();
        if ( v29 == 2 )
        {
          v30 = v39[2];
          _mm_mfence();
          __sync_sub_and_fetch((volatile int32_t *)(v30 + 16), 1u);
          v31 = v39[3];
          _mm_mfence();
          __sync_sub_and_fetch((volatile int32_t *)(v31 + 16), 1u);
          glitch::core::CIntMapHelper_SIntMapItem_unsigned_int_7e00f5::cleanup(
            v38,
            (glitch::core::SIntMapItem<unsigned int, glitch::streaming::CModifierStreamingModule::SObject *> *)v39[2]);
          glitch::core::CIntMapHelper_SIntMapItem_unsigned_int_7e00f5::cleanup(
            v38,
            (glitch::core::SIntMapItem<unsigned int, glitch::streaming::CModifierStreamingModule::SObject *> *)v39[3]);
          v15 = v39;
        }
        if ( byte_20D53CC == 0 )
        {
          byte_20D53CC = 1;
          if ( &dword_20D53E0 != nullptr )
          {
            v33 = v15;
            glf::SpinLock::Construct((glf::SpinLock::Self *)&dword_20D53E0);
            dword_20D53E4 = 0;
            dword_20D53E8 = 0;
            dword_20D53EC = 0;
            dword_20D53F0 = 20;
            dword_20D53F4 = 32;
            dword_20D53F8 = 32;
            dword_20D53FC = 0;
            v15 = v33;
          }
        }
        v34 = v15;
        glf::SpinLock::Lock(&dword_20D53E0);
        *v34 = dword_20D53E4;
        dword_20D53E4 = (int)(uintptr_t)(v34);
        glf::SpinLock::Unlock((glf::SpinLock::Self *)&dword_20D53E0);
      }
      v11 = v44;
      v39 = (uint32_t *)v14;
      v4 = (unsigned int *)v44[34];
      if ( v4 == nullptr )
        goto LABEL_15;
      goto LABEL_24;
    }
LABEL_8:
    v36 = v41[0];
    G4_VCALL<void>(a1, 60, v41[0]);
    v7 = (uint32_t *)v36;
    v37 = *(uint32_t **)(v36 + 24);
    v8 = *(uint32_t **)(v36 + 44);
    *v37 = *v8;
    *v8 = (uint32_t)(uintptr_t)(v37);
    v9 = *(void **)(v36 + 24);
    if ( *(uint8_t *)(v36 + 32) != 0 && v9 != nullptr )
    {
      opDeleteArray(v9);
      v7 = (uint32_t *)v36;
    }
    v10 = (uint32_t *)a1[10];
    if ( v10 != nullptr && v7 >= v10 )
    {
      while ( 1 )
      {
        v21 = (uint32_t *)*v10;
        if ( *v10 == 0 || v7 < v21 )
          break;
        v10 = (uint32_t *)*v10;
      }
      *v7 = (uint32_t)(uintptr_t)(v21);
      *v10 = (uint32_t)(uintptr_t)(v7);
    }
    else
    {
      *v7 = (uint32_t)(uintptr_t)(v10);
      a1[10] = (uint32_t)(uintptr_t)(v7);
    }
    v11 = v44;
    v4 = (unsigned int *)v44[34];
    if ( v4 == nullptr )
      goto LABEL_15;
LABEL_24:
    while ( 2 )
    {
      v17 = (char *)v4 - 1;
      v11[34] = (uint32_t)(uintptr_t)(v17);
      v18 = v11[(uint32_t)(uintptr_t)(v17) + 2];
      v41[0] = v18;
      if ( v17 == nullptr && v11 != (uint32_t *)v43[0] )
        v44 = (uint32_t *)v11[1];
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v19 = (uint32_t *)(v18 & 0xFFFFFFFC);
              v20 = *(uint32_t *)((v18 & 0xFFFFFFFC) + 16) >> 30;
              _mm_mfence();
              if ( v20 == 1 )
              {
                v5 = *v19;
                v4 = v19 + 1;
                v46 = v5;
                v47 = v4;
                goto LABEL_16;
              }
              if ( v20 == 2 )
                break;
              if ( v20 == 0 )
                goto LABEL_37;
              v18 = v41[0];
            }
            v27 = v18 & 3;
            v28 = ++v41[0];
            if ( v27 != 1 )
              break;
            v35 = v19;
            glitch::core::STraversalState_unsigned_int_150381::push((glitch::core::STraversalState<unsigned int> *)v43, v41);
            v18 = v35[3];
            v41[0] = v18;
          }
          if ( v27 != 0 )
            break;
          v32 = v19;
          glitch::core::STraversalState_unsigned_int_150381::push((glitch::core::STraversalState<unsigned int> *)v43, v41);
          v18 = v32[2];
          v41[0] = v18;
        }
        if ( v27 == 2 )
          break;
        v18 = v28;
      }
LABEL_37:
      v11 = v44;
      v4 = (unsigned int *)v44[34];
      if ( v4 != nullptr )
        continue;
      break;
    }
LABEL_15:
    v46 = 0;
    v47 = nullptr;
    v5 = 0;
LABEL_16:
    ;
  }
  sub_8BCE60(v48);
  sub_8BCE60(v43);
  v23 = a1[22];
  _mm_mfence();
  __sync_sub_and_fetch((volatile int32_t *)(v23 + 16), 1u);
  v24 = (uint32_t *)a1[22];
  v25 = v24[4];
  _mm_mfence();
  if ( (v25 & 0x3FFFFFFF) == 0 )
    sub_CD1A90(v22, v24);
  a1[22] = (uint32_t)(uintptr_t)(v39);
  return v39;
}

// ----------------------------------------------------------------------------
// Function: sub_CE75C0  (binary VA: 0xce75c0)
// Original: sub_CE75C0
// ----------------------------------------------------------------------------
int * sub_CE75C0(int a1, int a2, unsigned int a3, int a4)
{
  int *v6;
  int *v7;
  int32_t v8;
  int32_t v9;
  unsigned int v10;
  int v11;

  v6 = (int *)(sub_605A40());
  v7 = v6;
  if ( v6 == nullptr )
    std::terminate();
  v6[4] = 0;
  v8 = 0;
  _mm_mfence();
  while ( 1 )
  {
    v9 = __sync_val_compare_and_swap(v7 + 4, v8, v8 & 0x3FFFFFFF | 0x80000000);
    if ( v8 == v9 )
      break;
    v8 = v9;
  }
  v10 = a1 ^ a3
      | ((a1 ^ a3) >> 1)
      | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
      | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)
      | ((a1 ^ a3
        | ((a1 ^ a3) >> 1)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)) >> 8)
      | ((a1 ^ a3
        | ((a1 ^ a3) >> 1)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
        | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)
        | ((a1 ^ a3
          | ((a1 ^ a3) >> 1)
          | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)
          | ((a1 ^ a3 | ((a1 ^ a3) >> 1) | ((a1 ^ a3 | ((a1 ^ a3) >> 1)) >> 2)) >> 4)) >> 8)) >> 16);
  v11 = v10 ^ (v10 >> 1);
  __sync_add_and_fetch((volatile int32_t *)(a2 + 16), 1u);
  __sync_add_and_fetch((volatile int32_t *)(a4 + 16), 1u);
  v7[1] = v11;
  *v7 = a1 & (v11 ^ -v11);
  if ( (a1 & v11) != 0 )
  {
    v7[3] = a2;
    v7[2] = a4;
  }
  else
  {
    v7[2] = a2;
    v7[3] = a4;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_CE8600  (binary VA: 0xce8600)
// Original: sub_CE8600
// ----------------------------------------------------------------------------
uint32_t * sub_CE8600(uint32_t *a1, int *a2, unsigned int a3)
{
  unsigned int v3;
  unsigned int v4;
  int *v5;
  int v6;
  unsigned int v7;
  bool v8;
  uint32_t *v9;
  unsigned int v10;
  uint32_t *v11;
  unsigned int v12;
  bool v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  uint8_t v17;
  uint32_t *v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  bool v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  bool v26;
  unsigned int v27;
  bool v28;
  unsigned int v30;
  int v31;
  bool v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  bool v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  bool v51;
  unsigned int v52;
  unsigned int v53;
  uint32_t *v54;
  unsigned int v55;
  void *v56;
  void *s2;
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

  v3 = a3;
  v4 = a3;
  v5 = &a2[5
         * ((int)(((unsigned int)(-858993459 * ((int)(a3 - (uint32_t)(uintptr_t)(a2)) >> 2)) >> 31)
                - 858993459 * ((int)(a3 - (uint32_t)(uintptr_t)(a2)) >> 2)) >> 1)];
  v6 = *a2;
  v56 = (void *)(*a2 & 0xFFFFFF);
  v7 = *v5 & 0xFFFFFF;
  v51 = (unsigned int)(uintptr_t)(v56) < v7;
  if ( v56 == (void *)v7 )
  {
    v49 = a2[1];
    v33 = v5[1];
    v51 = v49 < v33;
    if ( v49 == v33 )
    {
      v46 = *v5 & 0xFFFFFF;
      v34 = memcmp(a2 + 2, v5 + 2, 8u);
      v3 = a3;
      v7 = v46;
      if ( v34 < 0 )
        goto LABEL_21;
      v51 = *((uint8_t *)v5 + 16) > *((uint8_t *)a2 + 16);
    }
  }
  if ( !v51 )
  {
LABEL_21:
    v27 = *(uint32_t *)(v3 - 20) & 0xFFFFFF;
    v41 = (unsigned int)(uintptr_t)(v56) < v27;
    v55 = v27;
    if ( v56 == (void *)v27 )
    {
      v48 = a2[1];
      v35 = *(uint32_t *)(v3 - 16);
      v41 = v48 < v35;
      if ( v48 == v35 )
      {
        v43 = v3;
        v47 = v7;
        v36 = memcmp(a2 + 2, (const void *)(v3 - 12), 8u);
        v3 = v43;
        v7 = v47;
        if ( v36 < 0 )
          goto LABEL_23;
        v41 = *(uint8_t *)(v43 - 4) > *((uint8_t *)a2 + 16);
      }
    }
    if ( v41 )
      goto LABEL_6;
LABEL_23:
    v28 = v7 < v55;
    if ( v7 == v55 )
    {
      v39 = v5[1];
      v40 = *(uint32_t *)(v3 - 16);
      v28 = v39 < v40;
      if ( v39 == v40 )
      {
        v45 = v3;
        if ( memcmp(v5 + 2, (const void *)(v3 - 12), 8u) < 0 )
          goto LABEL_25;
        v28 = *(uint8_t *)(v45 - 4) > *((uint8_t *)v5 + 16);
      }
    }
    if ( v28 )
    {
LABEL_32:
      g4_std::iter_swap_gnu_cxx_normal_iterator_a0ab87(
        a2,
        a3 - 20);
      goto LABEL_26;
    }
LABEL_25:
    g4_std::iter_swap_gnu_cxx_normal_iterator_a0ab87(
      a2,
      v5);
LABEL_26:
    v6 = *a2;
    goto LABEL_6;
  }
  v52 = *(uint32_t *)(v3 - 20) & 0xFFFFFF;
  v8 = v7 < v52;
  if ( v7 == v52 )
  {
    v30 = v5[1];
    v8 = v30 < *(uint32_t *)(v3 - 16);
    if ( v30 == *(uint32_t *)(v3 - 16) )
    {
      v42 = v3;
      v31 = memcmp(v5 + 2, (const void *)(v3 - 12), 8u);
      v3 = v42;
      if ( v31 < 0 )
        goto LABEL_30;
      v8 = *(uint8_t *)(v42 - 4) > *((uint8_t *)v5 + 16);
    }
  }
  if ( v8 )
  {
    v59 = *a2;
    v61 = a2[1];
    v63 = a2[2];
    v65 = a2[3];
    v67 = a2[4];
    *a2 = *v5;
    a2[1] = v5[1];
    a2[2] = v5[2];
    a2[3] = v5[3];
    *((uint8_t *)a2 + 16) = *((uint8_t *)v5 + 16);
    *v5 = v59;
    v5[1] = v61;
    v5[2] = v63;
    v5[3] = v65;
    *((uint8_t *)v5 + 16) = v67;
    v6 = *a2;
    goto LABEL_6;
  }
LABEL_30:
  v32 = (unsigned int)(uintptr_t)(v56) < v52;
  if ( v56 == (void *)v52 )
  {
    v37 = *(uint32_t *)(v3 - 16);
    v38 = a2[1];
    v32 = v38 < v37;
    if ( v38 == v37 )
    {
      v44 = v3;
      if ( memcmp(a2 + 2, (const void *)(v3 - 12), 8u) < 0 )
        goto LABEL_6;
      v32 = *(uint8_t *)(v44 - 4) > *((uint8_t *)a2 + 16);
    }
  }
  if ( v32 )
    goto LABEL_32;
LABEL_6:
  v9 = (uint32_t *)(a2 + 5);
  s2 = a2 + 2;
  while ( 1 )
  {
    v10 = v6 & 0xFFFFFF;
    v53 = v4;
    do
    {
      while ( 1 )
      {
        v11 = v9;
        v12 = *v9 & 0xFFFFFF;
        v13 = v10 > v12;
        if ( v10 == v12 )
        {
          v14 = v9[1];
          v15 = a2[1];
          v13 = v14 < v15;
          if ( v14 == v15 )
          {
            v16 = memcmp(v9 + 2, s2, 8u);
            v13 = false;
            if ( v16 >= 0 )
              break;
          }
        }
        v9 += 5;
        if ( !v13 )
          goto LABEL_13;
      }
      v17 = *((uint8_t *)v9 + 16);
      v9 += 5;
    }
    while ( *((uint8_t *)a2 + 16) > v17 );
LABEL_13:
    v18 = v11;
    v19 = v53;
    v54 = v18;
    v20 = v19 - 20;
    do
    {
      while ( 1 )
      {
        v4 = v20;
        v21 = *(uint32_t *)v20 & 0xFFFFFF;
        v22 = v10 < v21;
        if ( v10 == v21 )
        {
          v23 = *(uint32_t *)(v20 + 4);
          v24 = a2[1];
          v22 = v24 < v23;
          if ( v24 == v23 )
          {
            v25 = memcmp(s2, (const void *)(v20 + 8), 8u);
            v22 = false;
            if ( v25 >= 0 )
              break;
          }
        }
        v20 -= 20;
        if ( !v22 )
          goto LABEL_19;
      }
      v26 = *(uint8_t *)(v20 + 16) > *((uint8_t *)a2 + 16);
      v20 -= 20;
    }
    while ( v26 );
LABEL_19:
    if ( v4 <= (unsigned int)(uintptr_t)(v54) )
      break;
    v9 = v54 + 5;
    v60 = *v54;
    v62 = v54[1];
    v64 = v54[2];
    v66 = v54[3];
    v68 = v54[4];
    *v54 = *(uint32_t *)v4;
    v54[1] = *(uint32_t *)(v4 + 4);
    v54[2] = *(uint32_t *)(v4 + 8);
    v54[3] = *(uint32_t *)(v4 + 12);
    *((uint8_t *)v54 + 16) = *(uint8_t *)(v4 + 16);
    *(uint32_t *)v4 = v60;
    *(uint32_t *)(v4 + 4) = v62;
    *(uint32_t *)(v4 + 8) = v64;
    *(uint32_t *)(v4 + 12) = v66;
    *(uint8_t *)(v4 + 16) = v68;
    v6 = *a2;
  }
  *a1 = (uint32_t)(uintptr_t)(v54);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CE8AF0  (binary VA: 0xce8af0)
// Original: sub_CE8AF0
// ----------------------------------------------------------------------------
int sub_CE8AF0(int a1, unsigned int a2, int a3)
{
  unsigned int v3;
  int i;
  int result;
  int v6;
  int *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int *v13;
  int *v14;
  int j;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  int *v24;
  int v25;
  int v26;
  int *v27;
  int v28;
  int v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  int *v34;
  int v35;
  int *v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int *v41;
  typedef int *_g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef int *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v42)) > _g4_s0 ? (12u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v43)) > _g4_s1 ? (12u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v44)) > _g4_s2 ? (12u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v45)) > _g4_s3 ? (12u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v46)) > _g4_s4 ? (12u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v47)) > _g4_s5 ? (12u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v48)) > _g4_s6 ? (16u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v49)) > _g4_s7 ? (16u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v50)) > _g4_s8 ? (16u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v51)) > _g4_s9 ? (16u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v52)) > _g4_s10 ? (16u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v53)) > _g4_s11 ? (20u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v54)) > _g4_s12 ? (20u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v55)) > _g4_s13 ? (20u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v56)) > _g4_s14 ? (24u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v57)) > _g4_s15 ? (28u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v58)) > _g4_s16 ? (36u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v59)) > _g4_s17 ? (40u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v60)) > _g4_s18 ? (44u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v62)) > _g4_s19 ? (52u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v63)) > _g4_s20 ? (56u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v64)) > _g4_s21 ? (60u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v65)) > _g4_s22 ? (64u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v66)) > _g4_s23 ? (68u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v67)) > _g4_s24 ? (72u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v68)) > _g4_s25 ? (76u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v69)) > _g4_s26 ? (80u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (84u + sizeof(_g4_t_v70)) > _g4_s27 ? (84u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v71)) > _g4_s28 ? (88u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v72)) > _g4_s29 ? (92u + sizeof(_g4_t_v72)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 84u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 88u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 92u);

  v3 = a2;
  for ( i = a2; ; i = v60 )
  {
    while ( 1 )
    {
      result = i - a1;
      if ( result <= 339 )
        return result;
LABEL_3:
      if ( a3 == 0 )
      {
        v52 = (int *)v3;
        v47 = -858993459 * (result >> 2);
        v35 = (v47 - 2) >> 1;
        v36 = (int *)(a1 + 20 * v35);
        while ( 1 )
        {
          v37 = v36[3];
          v68 = *v36;
          v38 = v36[2];
          v39 = v36[1];
          v55 = v36[4];
          v71 = v37;
          v72 = v55;
          v40 = *v36;
          v70 = v38;
          v69 = v39;
          v36 -= 5;
          sub_CD3E90(a1, v35, v47, v40, v39, v38, v37, v55);
          if ( v35 == 0 )
            break;
          --v35;
        }
        v41 = v52;
        do
        {
          v41 -= 5;
          v68 = *v41;
          v69 = v41[1];
          v70 = v41[2];
          v71 = v41[3];
          v72 = v41[4];
          *v41 = *(uint32_t *)a1;
          v41[1] = *(uint32_t *)(a1 + 4);
          v41[2] = *(uint32_t *)(a1 + 8);
          v41[3] = *(uint32_t *)(a1 + 12);
          *((uint8_t *)v41 + 16) = *(uint8_t *)(a1 + 16);
          result = sub_CD3E90(a1, 0, -858993459 * (((int)(uintptr_t)(v41) - a1) >> 2), v68, v69, v70, v71, v72);
        }
        while ( (int)(uintptr_t)(v41) - a1 > 39 );
        return result;
      }
      --a3;
      sub_CE8600(&v65, (int *)a1, v3);
      v6 = v3 - v65;
      v60 = v65;
      if ( (int)(v3 - v65) > 339 )
        break;
      v3 = v65;
      i = v65;
    }
    if ( a3 != 0 )
      break;
    v59 = v3;
    v63 = v65;
    v28 = v65;
LABEL_53:
    v46 = -858993459 * (v6 >> 2);
    v29 = (v46 - 2) >> 1;
    v30 = (int *)(v28 + 20 * v29);
    while ( 1 )
    {
      v31 = v30[3];
      v32 = v30[2];
      v51 = v30[1];
      v68 = *v30;
      v69 = v51;
      v33 = v30[4];
      v71 = v31;
      v72 = v33;
      v70 = v32;
      v30 -= 5;
      sub_CD3E90(v60, v29, v46, v68, v51, v32, v31, v33);
      if ( v29 == 0 )
        break;
      --v29;
    }
    v34 = (int *)v59;
    do
    {
      v34 -= 5;
      v68 = *v34;
      v69 = v34[1];
      v70 = v34[2];
      v71 = v34[3];
      v72 = v34[4];
      *v34 = *(uint32_t *)v60;
      v34[1] = *(uint32_t *)(v60 + 4);
      v34[2] = *(uint32_t *)(v60 + 8);
      v34[3] = *(uint32_t *)(v60 + 12);
      *((uint8_t *)v34 + 16) = *(uint8_t *)(v60 + 16);
      sub_CD3E90(v60, 0, -858993459 * (((int)(uintptr_t)(v34) - v60) >> 2), v68, v69, v70, v71, v72);
    }
    while ( (int)(uintptr_t)(v34) - v60 > 39 );
    v3 = v63;
  }
  v63 = v65;
  v7 = (int *)v3;
  v62 = a3;
  while ( 1 )
  {
    --v62;
    sub_CE8600(&v66, (int *)v60, (unsigned int)(uintptr_t)(v7));
    v8 = (int)(uintptr_t)(v7) - v66;
    v59 = v66;
    if ( (int)(uintptr_t)(v7) - v66 > 339 )
      break;
LABEL_39:
    v6 = v59 - v60;
    if ( v59 - v60 <= 339 )
      goto LABEL_50;
LABEL_40:
    if ( v62 == 0 )
    {
      v28 = v60;
      goto LABEL_53;
    }
    v7 = (int *)v59;
  }
  if ( v62 != 0 )
  {
    v58 = v62;
    while ( 1 )
    {
      --v58;
      sub_CE8600(&v67, (int *)v59, (unsigned int)(uintptr_t)(v7));
      v9 = (int)(uintptr_t)(v7) - v67;
      v57 = v67;
      if ( (int)(uintptr_t)(v7) - v67 <= 339 )
      {
LABEL_29:
        v8 = v57 - v59;
        if ( v57 - v59 <= 339 )
          goto LABEL_39;
      }
      else
      {
        if ( v58 != 0 )
        {
          v48 = v58;
          while ( 1 )
          {
            --v48;
            sub_CE8600(&v64, (int *)v57, (unsigned int)(uintptr_t)(v7));
            v10 = v64;
            v11 = (char *)v7 - (char *)v64;
            if ( (char *)v7 - (char *)v64 <= 339 )
            {
LABEL_19:
              v9 = (int)(uintptr_t)(v10) - v57;
              if ( (int)(uintptr_t)(v10) - v57 <= 339 )
                goto LABEL_29;
            }
            else
            {
              if ( v48 != 0 )
              {
                v12 = v48;
                v42 = v64;
                do
                {
                  --v12;
                  sub_CE8600(&v64, v42, (unsigned int)(uintptr_t)(v7));
                  v13 = v64;
                  sub_CE8AF0(v12);
                  v11 = (char *)v13 - (char *)v42;
                  v7 = v13;
                  if ( (char *)v13 - (char *)v42 <= 339 )
                  {
                    v10 = v42;
                    goto LABEL_19;
                  }
                }
                while ( v12 != 0 );
                v10 = v42;
              }
              v56 = (int)(uintptr_t)(v10);
              v53 = -858993459 * (v11 >> 2);
              v14 = &v10[5 * ((v53 - 2) >> 1)];
              for ( j = (v53 - 2) >> 1; ; --j )
              {
                v16 = v14[2];
                v43 = v14[1];
                v68 = *v14;
                v69 = v43;
                v17 = v14[4];
                v71 = v14[3];
                v72 = v17;
                v70 = v16;
                v14 -= 5;
                sub_CD3E90(v56, j, v53, v68, v43, v16, v71, v17);
                if ( j == 0 )
                  break;
              }
              v10 = (int *)v56;
              do
              {
                v7 -= 5;
                v68 = *v7;
                v69 = v7[1];
                v70 = v7[2];
                v71 = v7[3];
                v72 = v7[4];
                *v7 = *(uint32_t *)v56;
                v7[1] = *(uint32_t *)(v56 + 4);
                v7[2] = *(uint32_t *)(v56 + 8);
                v7[3] = *(uint32_t *)(v56 + 12);
                *((uint8_t *)v7 + 16) = *(uint8_t *)(v56 + 16);
                sub_CD3E90(v56, 0, -858993459 * (((int)(uintptr_t)(v7) - v56) >> 2), v68, v69, v70, v71, v72);
              }
              while ( (int)(uintptr_t)(v7) - v56 > 39 );
              v9 = v56 - v57;
              if ( v56 - v57 <= 339 )
                goto LABEL_29;
            }
            if ( v48 == 0 )
              break;
            v7 = v10;
          }
          v54 = v10;
        }
        else
        {
          v54 = v7;
        }
        v49 = -858993459 * (v9 >> 2);
        v18 = (v49 - 2) >> 1;
        v19 = (int *)(v57 + 20 * v18);
        while ( 1 )
        {
          v20 = v19[2];
          v44 = v19[1];
          v68 = *v19;
          v69 = v44;
          v21 = v19[4];
          v71 = v19[3];
          v72 = v21;
          v70 = v20;
          v19 -= 5;
          sub_CD3E90(v57, v18, v49, v68, v44, v20, v71, v21);
          if ( v18 == 0 )
            break;
          --v18;
        }
        v22 = v54;
        do
        {
          v22 -= 5;
          v68 = *v22;
          v69 = v22[1];
          v70 = v22[2];
          v71 = v22[3];
          v72 = v22[4];
          *v22 = *(uint32_t *)v57;
          v22[1] = *(uint32_t *)(v57 + 4);
          v22[2] = *(uint32_t *)(v57 + 8);
          v22[3] = *(uint32_t *)(v57 + 12);
          *((uint8_t *)v22 + 16) = *(uint8_t *)(v57 + 16);
          sub_CD3E90(v57, 0, -858993459 * (((int)(uintptr_t)(v22) - v57) >> 2), v68, v69, v70, v71, v72);
        }
        while ( (int)(uintptr_t)(v22) - v57 > 39 );
        v8 = v57 - v59;
        if ( v57 - v59 <= 339 )
          goto LABEL_39;
      }
      if ( v58 == 0 )
        goto LABEL_44;
      v7 = (int *)v57;
    }
  }
  v57 = (int)(uintptr_t)(v7);
LABEL_44:
  v50 = -858993459 * (v8 >> 2);
  v23 = (v50 - 2) >> 1;
  v24 = (int *)(v59 + 20 * v23);
  while ( 1 )
  {
    v25 = v24[2];
    v45 = v24[1];
    v68 = *v24;
    v69 = v45;
    v26 = v24[4];
    v71 = v24[3];
    v72 = v26;
    v70 = v25;
    v24 -= 5;
    sub_CD3E90(v59, v23, v50, v68, v45, v25, v71, v26);
    if ( v23 == 0 )
      break;
    --v23;
  }
  v27 = (int *)v57;
  do
  {
    v27 -= 5;
    v68 = *v27;
    v69 = v27[1];
    v70 = v27[2];
    v71 = v27[3];
    v72 = v27[4];
    *v27 = *(uint32_t *)v59;
    v27[1] = *(uint32_t *)(v59 + 4);
    v27[2] = *(uint32_t *)(v59 + 8);
    v27[3] = *(uint32_t *)(v59 + 12);
    *((uint8_t *)v27 + 16) = *(uint8_t *)(v59 + 16);
    sub_CD3E90(v59, 0, -858993459 * (((int)(uintptr_t)(v27) - v59) >> 2), v68, v69, v70, v71, v72);
  }
  while ( (int)(uintptr_t)(v27) - v59 > 39 );
  v6 = v59 - v60;
  if ( v59 - v60 > 339 )
    goto LABEL_40;
LABEL_50:
  v3 = v60;
  result = v60 - a1;
  if ( v60 - a1 > 339 )
    goto LABEL_3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CEA650  (binary VA: 0xcea650)
// Original: sub_CEA650
// ----------------------------------------------------------------------------
int sub_CEA650(int a1, boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<unsigned int const, std::pair<boost::intrusive_ptr<glitch::scene::ISceneNode::Self>, unsigned int>>>, unsigned int, std::pair<boost::intrusive_ptr<glitch::scene::ISceneNode::Self>, unsigned int>, boost::hash<unsigned int>, std::equal_to<unsigned int>>> *a2, unsigned int *a3, uint32_t **a4)
{
  uint32_t *v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int *v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  uint32_t **v17;
  uint32_t *v19;
  uint32_t *v20;
  unsigned int v23;

  v4 = nullptr;
  v5 = *((uint32_t *)a2 + 1);
  v6 = *a3;
  v7 = *a3 % v5;
  if ( *((uint32_t *)a2 + 2) != 0 )
  {
    v8 = *(int **)(*((uint32_t *)a2 + 5) + 4 * v7);
    if ( v8 != nullptr )
    {
      v9 = *v8;
      if ( v9 != 0 )
        v4 = (uint32_t *)(v9 - 12);
    }
  }
  while ( v4 != nullptr )
  {
    v10 = v4[4];
    if ( v6 == v10 )
    {
      if ( v6 == *v4 )
      {
        *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
        *(uint8_t *)(a1 + 4) = 0;
        return a1;
      }
    }
    else if ( v7 != v10 % v5 )
    {
      break;
    }
    v11 = v4[3];
    if ( v11 == 0 )
      break;
    v4 = (uint32_t *)(v11 - 12);
  }
  v12 = opNew(0x14u);
  v13 = (uint32_t *)v12;
  if ( v12 != 0 )
  {
    *(uint32_t *)(v12 + 12) = 0;
    *(uint32_t *)(v12 + 16) = 0;
  }
  v14 = *a4;
  if ( v13 != nullptr )
  {
    *v13 = *v14;
    v15 = (uint32_t *)v14[1];
    v13[1] = (uint32_t)(uintptr_t)(v15);
    if ( v15 != nullptr )
      __sync_add_and_fetch((uint32_t *)((char *)v15 + *(uint32_t *)(*v15 - 16) + 4), 1u);
    v13[2] = v14[2];
  }
  boost::unordered::detail::table_unordered_map_allocator_8ad256::reserve_for_insert(
    a2,
    *((uint32_t *)a2 + 2) + 1);
  v13[4] = v6;
  v23 = *((uint32_t *)a2 + 1);
  v16 = *((uint32_t *)a2 + 5);
  v17 = (uint32_t **)(v16 + 4 * (v6 % v23));
  if ( *v17 != nullptr )
  {
    v13[3] = **v17;
    **v17 = (uint32_t)(uintptr_t)(v13 + 3);
  }
  else
  {
    v19 = v13 + 3;
    v20 = (uint32_t *)(v16 + 4 * v23);
    if ( *v20 != 0 )
    {
      *(uint32_t *)(v16 + 4 * (*(uint32_t *)(*v20 + 4) % v23)) = (uint32_t)(uintptr_t)(v13 + 3);
      v19 = v13 + 3;
    }
    *v17 = v20;
    v13[3] = *v20;
    *v20 = (uint32_t)(uintptr_t)(v19);
  }
  ++*((uint32_t *)a2 + 2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v13);
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CEAB10  (binary VA: 0xceab10)
// Original: sub_CEAB10
// ----------------------------------------------------------------------------
int sub_CEAB10(int a1, boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<unsigned int const, glitch::streaming::lod_cache::SLodObject *>>, unsigned int, glitch::streaming::lod_cache::SLodObject *, boost::hash<unsigned int>, std::equal_to<unsigned int>>> *a2, unsigned int **a3)
{
  uint32_t *v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int *v12;
  unsigned int *v13;
  unsigned int v14;
  int v15;
  unsigned int **v16;
  uint32_t *v18;
  unsigned int *v19;
  unsigned int v22;

  v3 = nullptr;
  v4 = **a3;
  v5 = *((uint32_t *)a2 + 1);
  v6 = v4 % v5;
  if ( *((uint32_t *)a2 + 2) != 0 )
  {
    v7 = *(int **)(*((uint32_t *)a2 + 5) + 4 * v6);
    if ( v7 != nullptr )
    {
      v8 = *v7;
      if ( v8 != 0 )
        v3 = (uint32_t *)(v8 - 8);
    }
  }
  while ( v3 != nullptr )
  {
    v9 = v3[3];
    if ( v4 == v9 )
    {
      if ( v4 == *v3 )
      {
        *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
        *(uint8_t *)(a1 + 4) = 0;
        return a1;
      }
    }
    else if ( v6 != v9 % v5 )
    {
      break;
    }
    v10 = v3[2];
    if ( v10 == 0 )
      break;
    v3 = (uint32_t *)(v10 - 8);
  }
  v11 = opNew(0x10u);
  v12 = (unsigned int *)v11;
  if ( v11 != 0 )
  {
    *(uint32_t *)(v11 + 8) = 0;
    *(uint32_t *)(v11 + 12) = 0;
  }
  v13 = *a3;
  if ( v12 != nullptr )
  {
    v14 = v13[1];
    *v12 = *v13;
    v12[1] = v14;
  }
  boost::unordered::detail::table_unordered_map_allocator_94335c::reserve_for_insert(
    a2,
    *((uint32_t *)a2 + 2) + 1);
  v12[3] = v4;
  v22 = *((uint32_t *)a2 + 1);
  v15 = *((uint32_t *)a2 + 5);
  v16 = (unsigned int **)(v15 + 4 * (v4 % v22));
  if ( *v16 != nullptr )
  {
    v12[2] = **v16;
    **v16 = (unsigned int)(uintptr_t)(v12 + 2);
  }
  else
  {
    v18 = v12 + 2;
    v19 = (unsigned int *)(v15 + 4 * v22);
    if ( *v19 != 0 )
    {
      *(uint32_t *)(v15 + 4 * (*(uint32_t *)(*v19 + 4) % v22)) = (uint32_t)(uintptr_t)(v12 + 2);
      v18 = v12 + 2;
    }
    *v16 = v19;
    v12[2] = *v19;
    *v19 = (unsigned int)(uintptr_t)(v18);
  }
  ++*((uint32_t *)a2 + 2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v12);
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CEB3C0  (binary VA: 0xceb3c0)
// Original: sub_CEB3C0
// ----------------------------------------------------------------------------
int sub_CEB3C0(int a1, boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<glitch::streaming::SStreamingItemFragment const, unsigned int>>, glitch::streaming::SStreamingItemFragment, unsigned int, glitch::streaming::SStreamingItemFragmentHash, std::equal_to<glitch::streaming::SStreamingItemFragment>>> *a2, uint32_t *a3, int *a4)
{
  int v4;
  uint8_t *v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  uint32_t *v10;
  unsigned int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  volatile int32_t *v21;
  int v22;
  int v23;
  int **v24;
  int v26;
  int v27;
  int v28;
  int v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  int v37;
  unsigned int v38;

  v4 = a3[1];
  if ( v4 != 0 )
  {
    v37 = v4 + 4;
    v32 = v4 + 4;
    v38 = (unsigned int)(v4 + 4) >> 3;
  }
  else
  {
    v38 = 0;
    v32 = 0;
    v37 = 4;
  }
  v5 = (uint8_t *)a3 + 9;
  v6 = 0;
  if ( (char *)a3 + 9 != (char *)a3 + 17 )
  {
    do
    {
      v7 = *v5++;
      v6 ^= (v6 << 6) + (v6 >> 2) - 1640531527 + v7;
    }
    while ( v5 != (uint8_t *)((char *)a3 + 17) );
  }
  v8 = ((*a3 - 1640531527)
      ^ (v38 + v32 + ((*a3 - 1640531527) << 6) + ((unsigned int)(*a3 - 1640531527) >> 2) - 1640531527))
     - 1640531527;
  v9 = v8 ^ (v6 + (v8 << 6) + (v8 >> 2) - 1640531527);
  v10 = nullptr;
  v11 = *((uint32_t *)a2 + 1);
  v12 = v9 % v11;
  if ( *((uint32_t *)a2 + 2) != 0 )
  {
    v13 = *(int **)(*((uint32_t *)a2 + 5) + 4 * v12);
    if ( v13 != nullptr )
    {
      v14 = *v13;
      if ( v14 != 0 )
        v10 = (uint32_t *)(v14 - 24);
    }
  }
  v15 = 0;
  if ( a3[1] != 0 )
    v15 = v37;
  v33 = v15;
  while ( v10 != nullptr )
  {
    v16 = v10[7];
    if ( v9 == v16 )
    {
      v26 = v10[1];
      v27 = v26 + 4;
      if ( v26 == 0 )
        v27 = 0;
      if ( v33 == v27 )
      {
        v31 = v12;
        v28 = memcmp((char *)a3 + 9, (char *)v10 + 9, 8u);
        v12 = v31;
        if ( v28 == 0 )
        {
          *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v10);
          *(uint8_t *)(a1 + 4) = 0;
          return a1;
        }
      }
    }
    else if ( v12 != v16 % v11 )
    {
      break;
    }
    v17 = v10[6];
    if ( v17 == 0 )
      break;
    v10 = (uint32_t *)(v17 - 24);
  }
  v18 = opNew(0x20u);
  v19 = v18;
  if ( v18 != 0 )
  {
    *(uint32_t *)(v18 + 24) = 0;
    *(uint32_t *)(v18 + 28) = 0;
  }
  v20 = *a4;
  if ( v19 != 0 )
  {
    *(uint32_t *)v19 = *(uint32_t *)v20;
    v21 = *(volatile int32_t **)(v20 + 4);
    *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v21);
    if ( v21 != nullptr )
      __sync_add_and_fetch(v21, 1u);
    *(uint8_t *)(v19 + 8) = *(uint8_t *)(v20 + 8);
    v22 = *(uint32_t *)(v20 + 13);
    *(uint32_t *)(v19 + 9) = *(uint32_t *)(v20 + 9);
    *(uint32_t *)(v19 + 13) = v22;
    *(uint32_t *)(v19 + 20) = *(uint32_t *)(v20 + 20);
  }
  boost::unordered::detail::table_unordered_map_allocator_28cd55::reserve_for_insert(
    a2,
    *((uint32_t *)a2 + 2) + 1);
  *(uint32_t *)(v19 + 28) = v9;
  v34 = *((uint32_t *)a2 + 1);
  v23 = *((uint32_t *)a2 + 5);
  v24 = (int **)(v23 + 4 * (v9 % v34));
  if ( *v24 != nullptr )
  {
    *(uint32_t *)(v19 + 24) = **v24;
    **v24 = v19 + 24;
  }
  else
  {
    v29 = v19 + 24;
    v30 = (int *)(v23 + 4 * v34);
    if ( *v30 != 0 )
    {
      *(uint32_t *)(v23 + 4 * (*(uint32_t *)(*v30 + 4) % v34)) = v19 + 24;
      v29 = v19 + 24;
    }
    *v24 = v30;
    *(uint32_t *)(v19 + 24) = *v30;
    *v30 = v29;
  }
  ++*((uint32_t *)a2 + 2);
  *(uint32_t *)a1 = v19;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CEDF20  (binary VA: 0xcedf20)
// Original: sub_CEDF20
// ----------------------------------------------------------------------------
int sub_CEDF20(int a1, signed int a2, int a3)
{
  int v3;
  unsigned int *v4;
  unsigned int *v5;
  unsigned int *v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int *i;
  unsigned int *v10;
  unsigned int *v11;
  unsigned int *v12;
  unsigned int v13;
  int v14;
  uint8_t *v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  unsigned int j;
  unsigned int v23;
  __m128i *v24;
  unsigned int v25;
  int v26;
  int result;
  bool v28;
  uint8_t *v29;
  uint8_t *v30;
  uint8_t *v31;
  uint8_t *v32;
  uint8_t *v33;
  uint8_t *v34;
  uint8_t *v35;
  uint8_t *v36;
  uint8_t *v37;
  uint8_t *v38;
  uint8_t *v39;
  uint8_t *v40;
  uint8_t *v41;
  uint8_t *v42;
  uint8_t *v43;
  char v44;
  uint8_t *v45;
  uint8_t *v46;
  uint8_t *v47;
  typedef unsigned int *_g4_t_v49;
  typedef unsigned int *_g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef unsigned int *_g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef char *_g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef char _g4_t_v69;
  typedef char _g4_t_v70;
  typedef char _g4_t_v71;
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef char _g4_t_v75;
  typedef char _g4_t_v76;
  typedef uint8_t *_g4_t_v77;
  typedef uint8_t *_g4_t_v78;
  typedef uint8_t *_g4_t_v79;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v49)) > _g4_s0 ? (0u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v50)) > _g4_s1 ? (4u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v51)) > _g4_s2 ? (4u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v52)) > _g4_s3 ? (8u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v53)) > _g4_s4 ? (12u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v54)) > _g4_s5 ? (12u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v55)) > _g4_s6 ? (12u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v56)) > _g4_s7 ? (12u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v57)) > _g4_s8 ? (16u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v58)) > _g4_s9 ? (32u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v59)) > _g4_s10 ? (48u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v60)) > _g4_s11 ? (64u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v61)) > _g4_s12 ? (80u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v62)) > _g4_s13 ? (96u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v63)) > _g4_s14 ? (112u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v64)) > _g4_s15 ? (128u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v65)) > _g4_s16 ? (144u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (160u + sizeof(_g4_t_v66)) > _g4_s17 ? (160u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (176u + sizeof(_g4_t_v67)) > _g4_s18 ? (176u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (192u + sizeof(_g4_t_v68)) > _g4_s19 ? (192u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (208u + sizeof(_g4_t_v69)) > _g4_s20 ? (208u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (224u + sizeof(_g4_t_v70)) > _g4_s21 ? (224u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v71)) > _g4_s22 ? (240u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (256u + sizeof(_g4_t_v72)) > _g4_s23 ? (256u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (272u + sizeof(_g4_t_v73)) > _g4_s24 ? (272u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (288u + sizeof(_g4_t_v74)) > _g4_s25 ? (288u + sizeof(_g4_t_v74)) : _g4_s25,
    _g4_s27 = (302u + sizeof(_g4_t_v75)) > _g4_s26 ? (302u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (303u + sizeof(_g4_t_v76)) > _g4_s27 ? (303u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (304u + sizeof(_g4_t_v77)) > _g4_s28 ? (304u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (308u + sizeof(_g4_t_v78)) > _g4_s29 ? (308u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (312u + sizeof(_g4_t_v79)) > _g4_s30 ? (312u + sizeof(_g4_t_v79)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 96u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 128u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 144u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 160u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 176u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 192u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 208u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 224u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 240u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 256u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 272u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 288u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 302u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 303u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 304u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 308u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 312u);

  v50 = (unsigned int *)a3;
  v49 = (unsigned int *)a2;
  *(uint8_t *)(a1 + 8) = 1;
  if ( a3 != a2 )
  {
    v3 = a3 - a2;
    _BitScanReverse((unsigned int *)&a2, (a3 - a2) >> 2);
    g4_std::introsort_loop_gnu_cxx_normal_iterator_fd001d(
      v49,
      a3,
      2 * (31 - (a2 ^ 0x1F)));
    if ( v3 <= 67 )
    {
      g4_std::insertion_sort_gnu_cxx_normal_iterator_b71665(v49, a3);
    }
    else
    {
      g4_std::insertion_sort_gnu_cxx_normal_iterator_b71665(
        v49,
        (int)(uintptr_t)(v49 + 16));
      if ( (unsigned int *)a3 != v49 + 16 )
      {
        v53 = v49 + 16;
        do
        {
          v4 = v53;
          v5 = v53;
          v6 = v53 - 1;
          v7 = *v53;
          v8 = *(v53 - 1);
          if ( *v53 < v8 )
          {
            while ( 1 )
            {
              v5 = v6--;
              *v4 = v8;
              v8 = *v6;
              if ( v7 >= *v6 )
                break;
              v4 = v5;
            }
          }
          ++v53;
          *v5 = v7;
        }
        while ( (unsigned int *)a3 != v53 );
      }
    }
    for ( i = v49; ; ++i )
    {
      v10 = i + 1;
      v11 = i + 1;
      if ( (unsigned int *)a3 == i + 1 )
        break;
      if ( *i == i[1] )
      {
        if ( (unsigned int *)a3 != i )
        {
          while ( (unsigned int *)a3 != ++v11 )
          {
            while ( *i != *v11 )
            {
              i[1] = *v11++;
              i = v10++;
              if ( (unsigned int *)a3 == v11 )
                goto LABEL_20;
            }
          }
LABEL_20:
          v50 = v10;
        }
        break;
      }
    }
    a2 = (signed int)(uintptr_t)(v49);
  }
  v77 = nullptr;
  v78 = nullptr;
  v79 = nullptr;
  if ( v50 == (unsigned int *)a2 )
  {
    v55 = (char *)opNewArray(0);
    goto LABEL_46;
  }
  v12 = (unsigned int *)(a2 + 4);
  v54 = *(uint32_t *)a2;
  if ( *(uint32_t *)a2 > 0xFEu )
  {
    v76 = -1;
    sub_CD1160((int *)&v77, &v76);
    if ( v54 <= 0xFFFE )
    {
      v45 = v79;
      v58 = BYTE1(v54);
      if ( v78 == v79 )
      {
        sub_CD1160((int *)&v77, &v58);
        v47 = v78;
        v45 = v79;
      }
      else
      {
        v46 = nullptr;
        if ( v78 != nullptr )
        {
          *v78 = BYTE1(v54);
          v46 = v78;
          v45 = v79;
        }
        v47 = v46 + 1;
        v78 = v46 + 1;
      }
      v57 = v54;
      if ( v47 == v45 )
      {
        sub_CD1160((int *)&v77, &v57);
      }
      else
      {
        if ( v47 != nullptr )
        {
          *v47 = v54;
          v47 = v78;
        }
        v78 = v47 + 1;
      }
    }
    else
    {
      v29 = v79;
      v60 = -1;
      if ( v78 == v79 )
      {
        sub_CD1160((int *)&v77, &v60);
        v31 = v78;
        v29 = v79;
      }
      else
      {
        v30 = nullptr;
        if ( v78 != nullptr )
        {
          *v78 = -1;
          v30 = v78;
          v29 = v79;
        }
        v31 = v30 + 1;
        v78 = v30 + 1;
      }
      v59 = -1;
      if ( v31 == v29 )
      {
        sub_CD1160((int *)&v77, &v59);
        v32 = v78;
        v29 = v79;
      }
      else
      {
        if ( v31 != nullptr )
        {
          *v31 = -1;
          v31 = v78;
          v29 = v79;
        }
        v32 = v31 + 1;
        v78 = v32;
      }
      v64 = HIBYTE(v54);
      if ( v32 == v29 )
      {
        sub_CD1160((int *)&v77, &v64);
        v33 = v78;
        v29 = v79;
      }
      else
      {
        if ( v32 != nullptr )
        {
          *v32 = HIBYTE(v54);
          v32 = v78;
          v29 = v79;
        }
        v33 = v32 + 1;
        v78 = v33;
      }
      v63 = (v54 & 0xFF0000) >> 16;
      if ( v33 == v29 )
      {
        sub_CD1160((int *)&v77, &v63);
        v34 = v78;
        v29 = v79;
      }
      else
      {
        if ( v33 != nullptr )
        {
          *v33 = (v54 & 0xFF0000) >> 16;
          v33 = v78;
          v29 = v79;
        }
        v34 = v33 + 1;
        v78 = v34;
      }
      v62 = BYTE1(v54);
      if ( v34 == v29 )
      {
        sub_CD1160((int *)&v77, &v62);
        v35 = v78;
        v29 = v79;
      }
      else
      {
        if ( v34 != nullptr )
        {
          *v34 = BYTE1(v54);
          v34 = v78;
          v29 = v79;
        }
        v35 = v34 + 1;
        v78 = v35;
      }
      v61 = v54;
      if ( v35 == v29 )
      {
        sub_CD1160((int *)&v77, &v61);
      }
      else
      {
        if ( v35 != nullptr )
        {
          *v35 = v54;
          v35 = v78;
        }
        v78 = v35 + 1;
      }
    }
  }
  else
  {
    v75 = *(uint32_t *)a2;
    sub_CD1160((int *)&v77, &v75);
  }
  if ( v12 != v50 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 >= v54 )
          break;
        g4_std_compat::ostream_write(dword_213A780, "The data is not sorted in ascendant order!", 42);
        v15 = *(uint8_t **)((char *)&dword_213A780[31] + *(uint32_t *)(dword_213A780[0] - 12));
        if ( v15 == nullptr )
          sub_18FFF30(v14);
        if ( v15[28] != 0 )
        {
          v16 = v15[39];
        }
        else
        {
          sub_18FFC70(v15);
          v16 = G4_VCALL<int>(v15, 24, 10);
        }
        v17 = (int)(uintptr_t)(g4_std::ostream::put(dword_213A780, v16));
        ++v12;
        g4_std_compat::ostream_flush(v17);
        if ( v50 == v12 )
          goto LABEL_34;
      }
      if ( *v12 > v54 )
        break;
LABEL_28:
      if ( v50 == ++v12 )
        goto LABEL_34;
    }
    v56 = v13 + ~v54;
    if ( v56 > 0xFE )
    {
      v37 = v79;
      v70 = -1;
      if ( v78 == v79 )
      {
        sub_CD1160((int *)&v77, &v70);
        v39 = v78;
        v37 = v79;
      }
      else
      {
        v38 = nullptr;
        if ( v78 != nullptr )
        {
          *v78 = -1;
          v38 = v78;
          v37 = v79;
        }
        v39 = v38 + 1;
        v78 = v38 + 1;
      }
      if ( v56 <= 0xFFFE )
      {
        v66 = BYTE1(v56);
        if ( v39 == v37 )
        {
          sub_CD1160((int *)&v77, &v66);
          v36 = v78;
          v37 = v79;
        }
        else
        {
          if ( v39 != nullptr )
          {
            *v39 = BYTE1(v56);
            v39 = v78;
            v37 = v79;
          }
          v36 = v39 + 1;
          v78 = v36;
        }
        v44 = v56;
        v65 = v56;
        if ( v36 == v37 )
        {
          sub_CD1160((int *)&v77, &v65);
          goto LABEL_79;
        }
      }
      else
      {
        v69 = -1;
        if ( v39 == v37 )
        {
          sub_CD1160((int *)&v77, &v69);
          v40 = v78;
          v37 = v79;
        }
        else
        {
          if ( v39 != nullptr )
          {
            *v39 = -1;
            v39 = v78;
            v37 = v79;
          }
          v40 = v39 + 1;
          v78 = v40;
        }
        v68 = -1;
        if ( v40 == v37 )
        {
          sub_CD1160((int *)&v77, &v68);
          v41 = v78;
          v37 = v79;
        }
        else
        {
          if ( v40 != nullptr )
          {
            *v40 = -1;
            v40 = v78;
            v37 = v79;
          }
          v41 = v40 + 1;
          v78 = v41;
        }
        v74 = HIBYTE(v56);
        if ( v41 == v37 )
        {
          sub_CD1160((int *)&v77, &v74);
          v42 = v78;
          v37 = v79;
        }
        else
        {
          if ( v41 != nullptr )
          {
            *v41 = HIBYTE(v56);
            v41 = v78;
            v37 = v79;
          }
          v42 = v41 + 1;
          v78 = v42;
        }
        v73 = (v56 & 0xFF0000) >> 16;
        if ( v42 == v37 )
        {
          sub_CD1160((int *)&v77, &v73);
          v43 = v78;
          v37 = v79;
        }
        else
        {
          if ( v42 != nullptr )
          {
            *v42 = (v56 & 0xFF0000) >> 16;
            v42 = v78;
            v37 = v79;
          }
          v43 = v42 + 1;
          v78 = v43;
        }
        v72 = BYTE1(v56);
        if ( v43 == v37 )
        {
          sub_CD1160((int *)&v77, &v72);
          v36 = v78;
          v37 = v79;
        }
        else
        {
          if ( v43 != nullptr )
          {
            *v43 = BYTE1(v56);
            v43 = v78;
            v37 = v79;
          }
          v36 = v43 + 1;
          v78 = v36;
        }
        v44 = v56;
        v71 = v56;
        if ( v36 == v37 )
        {
          sub_CD1160((int *)&v77, &v71);
          goto LABEL_79;
        }
      }
      if ( v36 != nullptr )
      {
        *v36 = v44;
        v36 = v78;
      }
    }
    else
    {
      v67 = v56;
      if ( v78 == v79 )
      {
        sub_CD1160((int *)&v77, &v67);
        goto LABEL_79;
      }
      v36 = nullptr;
      if ( v78 != nullptr )
      {
        *v78 = v56;
        v36 = v78;
      }
    }
    v78 = v36 + 1;
LABEL_79:
    v54 = v13;
    goto LABEL_28;
  }
LABEL_34:
  v18 = v78 - v77 - 1;
  v19 = opNewArray(v78 - v77);
  v55 = (char *)v19;
  if ( v18 != -1 )
  {
    v20 = v18 + 1;
    v21 = -v19 & 0xF;
    if ( v21 > v18 + 1 )
      v21 = v18 + 1;
    if ( v21 == 0 )
      goto LABEL_145;
    for ( j = 0; j < v21; ++j )
    {
      --v18;
      *(uint8_t *)v19++ = 0;
    }
    if ( v20 != v21 )
    {
LABEL_145:
      v51 = v20 - v21;
      v23 = (v20 - v21) >> 4;
      v52 = 16 * v23;
      if ( 16 * v23 == 0 )
        goto LABEL_146;
      v24 = (__m128i *)&v55[v21];
      v25 = 0;
      do
      {
        ++v25;
        *v24++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v23 > v25 );
      v19 += v52;
      v18 -= v52;
      if ( v52 != v51 )
      {
LABEL_146:
        do
        {
          --v18;
          *(uint8_t *)v19++ = 0;
        }
        while ( v18 != -1 );
      }
    }
  }
LABEL_46:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v55);
  memcpy(v55, v77, v78 - v77);
  v26 = (int)(uintptr_t)(v77);
  result = v78 - v77;
  v28 = v77 == nullptr;
  *(uint32_t *)(a1 + 4) = v78 - v77;
  if ( !v28 )
    return gll_operator_delete_arr(v26);
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_unsigned_int_58c56d::opAssign  (binary VA: 0xcf21d0)
// Original: std::vector<unsigned int>::operator=
// ----------------------------------------------------------------------------
std::vector<unsigned int> * g4_std::vector_unsigned_int_58c56d::opAssign(std::vector<unsigned int> *self, const std::vector<unsigned int> *a2)
{
  char *dest;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  char *v7;
  size_t n;
  char *src;
  size_t v10;
  size_t v11;
  uint8_t *v12;
  char *v13;

  if ( a2 != self )
  {
    v10 = *((uint32_t *)a2 + 1);
    dest = *(char **)self;
    v3 = (int)(v10 - *(uint32_t *)a2) >> 2;
    src = *(char **)a2;
    v4 = (*((uint32_t *)self + 2) - *(uint32_t *)self) >> 2;
    if ( v3 > v4 )
    {
      if ( v3 != 0 )
      {
        if ( v3 > 0x3FFFFFFF )
          sub_18FFEE0(v4, *(uint32_t *)a2);
        v11 = 4 * v3;
        v7 = (char *)opNew(4 * v3);
        memmove(v7, src, 4 * v3);
      }
      else
      {
        v11 = 0;
        v7 = nullptr;
      }
      if ( *(uint32_t *)self != 0 )
        opDelete(*(void **)self);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v7);
      dest = &v7[v11];
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&v7[v11]);
    }
    else
    {
      v12 = *((uint8_t **)self + 1);
      v5 = (v12 - (uint8_t *)(dest)) >> 2;
      if ( v3 > v5 )
      {
        v13 = &src[4 * v5];
        if ( v5 != 0 )
        {
          memmove(dest, src, 4 * v5);
          v12 = *((uint8_t **)self + 1);
          dest = *(char **)self;
          v10 = *((uint32_t *)a2 + 1);
          v13 = (char *)(*(uint32_t *)a2 + ((unsigned int)(uintptr_t)(&v12[-*(uint32_t *)self]) & 0xFFFFFFFC));
        }
        if ( (int)(v10 - (uint32_t)(uintptr_t)(v13)) >> 2 != 0 )
        {
          memmove(v12, v13, 4 * ((int)(v10 - (uint32_t)(uintptr_t)(v13)) >> 2));
          dest = (char *)(*(uint32_t *)self + 4 * v3);
        }
        else
        {
          dest += 4 * v3;
        }
      }
      else if ( v3 != 0 )
      {
        n = 4 * v3;
        memmove(dest, src, n);
        dest = (char *)(n + *(uint32_t *)self);
      }
    }
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(dest);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_62ab13  (binary VA: 0xcf2990)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::streaming::base_streaming_manager::SCommandComp>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_62ab13(glitch::streaming::SCommandAndRegisterer::Self *a1, const glitch::streaming::SCommandAndRegisterer::Self *a2, int a3)
{
  int result;
  uint32_t *v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  bool v9;
  unsigned int v10;
  uint32_t *v11;
  unsigned int v12;
  const glitch::streaming::SCommandAndRegisterer::Self *v13;
  unsigned int v14;
  bool v15;
  unsigned int v16;
  int v17;
  uint32_t *v18;
  const glitch::streaming::SCommandAndRegisterer::Self *v19;
  unsigned int v20;
  bool v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  const glitch::streaming::SCommandAndRegisterer::Self *i;
  unsigned int v33;
  unsigned int v34;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v35;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char *_g4_t_v50;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v53;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v54;
  typedef bool _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v57;
  typedef volatile int32_t *_g4_t_v58[5];
  typedef volatile int32_t *_g4_t_v59[5];
  typedef volatile int32_t *_g4_t_v60[11];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v35)) > _g4_s0 ? (8u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v36)) > _g4_s1 ? (8u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v37)) > _g4_s2 ? (8u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v38)) > _g4_s3 ? (8u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v39)) > _g4_s4 ? (8u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v40)) > _g4_s5 ? (8u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v41)) > _g4_s6 ? (8u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v42)) > _g4_s7 ? (8u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v43)) > _g4_s8 ? (12u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v44)) > _g4_s9 ? (12u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v45)) > _g4_s10 ? (16u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v46)) > _g4_s11 ? (20u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v47)) > _g4_s12 ? (24u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v48)) > _g4_s13 ? (28u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v49)) > _g4_s14 ? (36u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v50)) > _g4_s15 ? (40u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v51)) > _g4_s16 ? (44u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v52)) > _g4_s17 ? (44u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v53)) > _g4_s18 ? (48u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v54)) > _g4_s19 ? (48u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v55)) > _g4_s20 ? (52u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v56)) > _g4_s21 ? (52u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v57)) > _g4_s22 ? (52u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v58)) > _g4_s23 ? (64u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v59)) > _g4_s24 ? (84u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v60)) > _g4_s25 ? (104u + sizeof(_g4_t_v60)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 104u);

  result = a2 - a1;
  if ( a2 - a1 > 339 )
  {
    if ( a3 != 0 )
    {
      v49 = (int)(uintptr_t)(a2);
      v50 = (char *)a1 + 8;
      while ( 1 )
      {
        --a3;
        v4 = (uint32_t *)((char *)a1 + 20 * ((-858993459 * (result >> 2)) >> 1));
        v53 = (const glitch::streaming::SCommandAndRegisterer::Self *)(v49 - 20);
        v5 = *v4 & 0xFFFFFF;
        v6 = *(uint32_t *)a1;
        v7 = *(uint32_t *)a1 & 0xFFFFFF;
        v55 = v7 < v5;
        if ( v7 == v5 )
        {
          v48 = *((uint32_t *)a1 + 1);
          v25 = v4[1];
          v55 = v48 < v25;
          if ( v48 == v25 )
          {
            v37 = v4;
            v43 = *(uint32_t *)a1 & 0xFFFFFF;
            v26 = memcmp(v50, v4 + 2, 8u);
            v7 = v43;
            v55 = v26 < 0;
            v4 = v37;
          }
        }
        v8 = *(uint32_t *)(v49 - 20) & 0xFFFFFF;
        v9 = !v55;
        v56 = v8;
        if ( v9 )
        {
          LOBYTE(v8) = v7 < v8;
          if ( v7 == v56 )
          {
            v28 = *((uint32_t *)a1 + 1);
            v46 = *(uint32_t *)(v49 - 16);
            LOBYTE(v8) = v28 < v46;
            if ( v28 == v46 )
            {
              v40 = v4;
              v8 = (unsigned int)memcmp(v50, (const void *)(v49 - 12), 8u) >> 31;
              v4 = v40;
            }
          }
          if ( (uint8_t)v8 != 0 )
            goto LABEL_10;
          LOBYTE(v24) = v5 < v56;
          if ( v5 == v56 )
          {
            v33 = v4[1];
            v34 = *(uint32_t *)(v49 - 16);
            LOBYTE(v24) = v33 < v34;
            if ( v33 == v34 )
            {
              v42 = v4;
              v24 = (unsigned int)memcmp(v4 + 2, (const void *)(v49 - 12), 8u) >> 31;
              v4 = v42;
            }
          }
          if ( (uint8_t)v24 != 0 )
          {
            glitch::streaming::SCommandAndRegisterer::Construct(
              (glitch::streaming::SCommandAndRegisterer::Self *)v60,
              a1);
            glitch::streaming::SCommandAndRegisterer::opAssign(a1, v53);
            glitch::streaming::SCommandAndRegisterer::opAssign(
              v53,
              (const glitch::streaming::SCommandAndRegisterer::Self *)v60);
          }
          else
          {
            v41 = (const glitch::streaming::SCommandAndRegisterer::Self *)v4;
            glitch::streaming::SCommandAndRegisterer::Construct(
              (glitch::streaming::SCommandAndRegisterer::Self *)v60,
              a1);
            glitch::streaming::SCommandAndRegisterer::opAssign(a1, v41);
            glitch::streaming::SCommandAndRegisterer::opAssign(
              v41,
              (const glitch::streaming::SCommandAndRegisterer::Self *)v60);
          }
          if ( v60[4] != nullptr )
            sub_5459C0(v60[4]);
        }
        else
        {
          LOBYTE(v8) = v5 < v8;
          if ( v5 == v56 )
          {
            v27 = v4[1];
            v47 = *(uint32_t *)(v49 - 16);
            LOBYTE(v8) = v27 < v47;
            if ( v27 == v47 )
            {
              v39 = v4;
              v44 = v7;
              v8 = (unsigned int)memcmp(v4 + 2, (const void *)(v49 - 12), 8u) >> 31;
              v7 = v44;
              v4 = v39;
            }
          }
          if ( (uint8_t)v8 != 0 )
          {
            v38 = (const glitch::streaming::SCommandAndRegisterer::Self *)v4;
            glitch::streaming::SCommandAndRegisterer::Construct(
              (glitch::streaming::SCommandAndRegisterer::Self *)v60,
              a1);
            glitch::streaming::SCommandAndRegisterer::opAssign(a1, v38);
            glitch::streaming::SCommandAndRegisterer::opAssign(
              v38,
              (const glitch::streaming::SCommandAndRegisterer::Self *)v60);
          }
          else
          {
            LOBYTE(v10) = v7 < v56;
            if ( v7 == v56 )
            {
              v29 = *((uint32_t *)a1 + 1);
              v30 = *(uint32_t *)(v49 - 16);
              LOBYTE(v10) = v29 < v30;
              if ( v29 == v30 )
                v10 = (unsigned int)memcmp(v50, (const void *)(v49 - 12), 8u) >> 31;
            }
            if ( (uint8_t)v10 == 0 )
              goto LABEL_10;
            glitch::streaming::SCommandAndRegisterer::Construct(
              (glitch::streaming::SCommandAndRegisterer::Self *)v60,
              a1);
            glitch::streaming::SCommandAndRegisterer::opAssign(a1, v53);
            glitch::streaming::SCommandAndRegisterer::opAssign(
              v53,
              (const glitch::streaming::SCommandAndRegisterer::Self *)v60);
          }
          if ( v60[4] != nullptr )
          {
            sub_5459C0(v60[4]);
            v6 = *(uint32_t *)a1;
            goto LABEL_10;
          }
        }
        v6 = *(uint32_t *)a1;
LABEL_10:
        v11 = (uint32_t *)((char *)a1 + 20);
        v51 = (const glitch::streaming::SCommandAndRegisterer::Self *)v49;
        while ( 1 )
        {
          v12 = v6 & 0xFFFFFF;
          do
          {
            while ( 1 )
            {
              v13 = (const glitch::streaming::SCommandAndRegisterer::Self *)v11;
              v14 = *v11 & 0xFFFFFF;
              v15 = v12 > v14;
              if ( v12 == v14 )
              {
                v16 = v11[1];
                v45 = *((uint32_t *)a1 + 1);
                v15 = v16 < v45;
                if ( v16 == v45 )
                  break;
              }
              v11 += 5;
              if ( !v15 )
                goto LABEL_16;
            }
            v35 = (const glitch::streaming::SCommandAndRegisterer::Self *)v11;
            v17 = memcmp(v11 + 2, v50, 8u);
            v11 += 5;
            v13 = v35;
          }
          while ( v17 < 0 );
LABEL_16:
          v54 = v13;
          v18 = (uint32_t *)((char *)v51 - 20);
          do
          {
            while ( 1 )
            {
              v19 = (const glitch::streaming::SCommandAndRegisterer::Self *)v18;
              v20 = *v18 & 0xFFFFFF;
              v21 = v12 < v20;
              if ( v12 == v20 )
              {
                v22 = *((uint32_t *)a1 + 1);
                v21 = v22 < v18[1];
                if ( v22 == v18[1] )
                  break;
              }
              v18 -= 5;
              if ( !v21 )
                goto LABEL_21;
            }
            v36 = (const glitch::streaming::SCommandAndRegisterer::Self *)v18;
            v23 = memcmp(v50, v18 + 2, 8u);
            v18 -= 5;
            v19 = v36;
          }
          while ( v23 < 0 );
LABEL_21:
          v51 = v19;
          if ( v19 <= v54 )
            break;
          glitch::streaming::SCommandAndRegisterer::Construct(
            (glitch::streaming::SCommandAndRegisterer::Self *)v60,
            v54);
          glitch::streaming::SCommandAndRegisterer::opAssign(v54, v51);
          glitch::streaming::SCommandAndRegisterer::opAssign(
            v51,
            (const glitch::streaming::SCommandAndRegisterer::Self *)v60);
          if ( v60[4] != nullptr )
            sub_5459C0(v60[4]);
          v11 = (uint32_t *)((char *)v54 + 20);
          v6 = *(uint32_t *)a1;
        }
        g4_std::introsort_loop_gnu_cxx_normal_iterator_62ab13(
          (glitch::streaming::SCommandAndRegisterer::Self *)(v54),
          (const glitch::streaming::SCommandAndRegisterer::Self *)(uintptr_t)(v49),
          a3);
        result = v54 - a1;
        if ( v54 - a1 <= 339 )
          return result;
        if ( a3 == 0 )
          goto LABEL_50;
        v49 = (int)(uintptr_t)(v54);
      }
    }
    v54 = a2;
LABEL_50:
    v52 = -858993459 * (result >> 2);
    v31 = (v52 - 2) >> 1;
    v57 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a1 + 20 * v31);
    for ( i = v57; ; i = v57 )
    {
      glitch::streaming::SCommandAndRegisterer::Construct(
        (glitch::streaming::SCommandAndRegisterer::Self *)v60,
        i);
      glitch::streaming::SCommandAndRegisterer::Construct(
        (glitch::streaming::SCommandAndRegisterer::Self *)v58,
        (const glitch::streaming::SCommandAndRegisterer::Self *)v60);
      sub_CDDA30((int)(uintptr_t)(a1), v31, v52, (glitch::streaming::SCommandAndRegisterer::Self *)v58);
      if ( v58[4] != nullptr )
        sub_5459C0(v58[4]);
      if ( v31 == 0 )
        break;
      --v31;
      if ( v60[4] != nullptr )
        sub_5459C0(v60[4]);
      v57 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v57 - 20);
    }
    if ( v60[4] != nullptr )
      sub_5459C0(v60[4]);
    while ( 1 )
    {
      result = v54 - a1;
      if ( v54 - a1 <= 39 )
        break;
      while ( 1 )
      {
        v54 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v54 - 20);
        glitch::streaming::SCommandAndRegisterer::Construct(
          (glitch::streaming::SCommandAndRegisterer::Self *)v60,
          v54);
        glitch::streaming::SCommandAndRegisterer::opAssign(v54, a1);
        glitch::streaming::SCommandAndRegisterer::Construct(
          (glitch::streaming::SCommandAndRegisterer::Self *)v59,
          (const glitch::streaming::SCommandAndRegisterer::Self *)v60);
        sub_CDDA30((int)(uintptr_t)(a1), 0, -858993459 * ((v54 - a1) >> 2), (glitch::streaming::SCommandAndRegisterer::Self *)v59);
        if ( v59[4] != nullptr )
          sub_5459C0(v59[4]);
        if ( v60[4] == nullptr )
          break;
        sub_5459C0(v60[4]);
        result = v54 - a1;
        if ( v54 - a1 <= 39 )
          return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::copy_gnu_cxx_normal_iterator_b44e38  (binary VA: 0xcf38f0)
// Original: std::copy<__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter const*,std::vector<glitch::util::STriangleAdapter>>,__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter*,std::vector<glitch::util::STriangleAdapter>>>
// ----------------------------------------------------------------------------
uint32_t * g4_std::copy_gnu_cxx_normal_iterator_b44e38(uint32_t *a1, uint32_t *a2, int a3, uint32_t *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  char *v6;
  uint32_t *v7;
  volatile int32_t *v8;
  glitch::video::CVertexStreams::Self *v9;
  uint32_t *v11;
  int v12;

  v4 = a4;
  if ( -1431655765 * ((a3 - (int)(uintptr_t)(a2)) >> 3) > 0 )
  {
    v5 = a2;
    v12 = -1431655765 * ((a3 - (int)(uintptr_t)(a2)) >> 3);
    v6 = (char *)a4;
    v7 = a4 + 2;
    do
    {
      *(uint32_t *)v6 = *v5;
      *((uint32_t *)v6 + 1) = v5[1];
      v8 = (volatile int32_t *)v5[2];
      if ( v8 != nullptr )
        __sync_add_and_fetch(v8, 1u);
      v9 = *(glitch::video::CVertexStreams::Self **)((char *)v7  + ((uintptr_t)(v6) - (uintptr_t)(char *)(a4)));
      *(uint32_t *)((char *)v7  + ((uintptr_t)(v6) - (uintptr_t)(char *)(a4))) = (uint32_t)(uintptr_t)(v8);
      if ( v9 != nullptr && __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) == 1 )
      {
        v11 = v7;
        glitch::video::CVertexStreams::Destroy(v9);
        gll_operator_delete_arr((int)(uintptr_t)(v9));
        v7 = v11;
      }
      *((uint32_t *)v6 + 3) = v5[3];
      *((uint32_t *)v6 + 4) = v5[4];
      *((uint32_t *)v6 + 5) = v5[5];
      v5 += 6;
      v6 += 24;
      --v12;
    }
    while ( v12 != 0 );
    v4 = &a4[2 * ((a3 - (int)(uintptr_t)(a2)) >> 3)];
  }
  *a1 = (uint32_t)(uintptr_t)(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_1524f1  (binary VA: 0xcf5920)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::streaming::base_streaming_manager::SCommandComp>
// ----------------------------------------------------------------------------
volatile int32_t * g4_std::insertion_sort_gnu_cxx_normal_iterator_1524f1(glitch::streaming::SCommandAndRegisterer::Self *a1, glitch::streaming::SCommandAndRegisterer::Self *a2)
{
  volatile int32_t *result;
  glitch::streaming::SCommandAndRegisterer::Self *v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  glitch::streaming::SCommandAndRegisterer::Self *v8;
  glitch::streaming::SCommandAndRegisterer::Self *v9;
  glitch::streaming::SCommandAndRegisterer::Self *v10;
  glitch::streaming::SCommandAndRegisterer::Self *v11;
  uint32_t *v12;
  unsigned int v13;
  const glitch::streaming::SCommandAndRegisterer::Self *v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v19;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v20;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v21;
  typedef bool _g4_t_v22;
  typedef uint32_t _g4_t_v23[2];
  typedef volatile int32_t *_g4_t_s1[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v23)) > _g4_s4 ? (32u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_s1)) > _g4_s5 ? (40u + sizeof(_g4_t_s1)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 40u);

  result = (volatile int32_t *)a1;
  if ( a2 == a1 )
    return result;
  result = (volatile int32_t *)((char *)a1 + 20);
  if ( (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a1 + 20) == a2 )
    return result;
  v21 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a1 + 20);
  do
  {
    v3 = v21;
    v4 = *(uint32_t *)v21 & 0xFFFFFF;
    v5 = *(uint32_t *)a1 & 0xFFFFFF;
    LOBYTE(v6) = v4 < v5;
    if ( v4 == v5 )
    {
      v17 = *((uint32_t *)v21 + 1);
      v18 = *((uint32_t *)a1 + 1);
      LOBYTE(v6) = v17 < v18;
      if ( v17 == v18 )
      {
        v6 = (unsigned int)memcmp((char *)v21 + 8, (char *)a1 + 8, 8u) >> 31;
        v3 = v21;
      }
    }
    if ( (uint8_t)v6 != 0 )
    {
      glitch::streaming::SCommandAndRegisterer::Construct(
        (glitch::streaming::SCommandAndRegisterer::Self *)v23,
        v21);
      v7 = -858993459 * ((v21 - a1) >> 2);
      v8 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v21 + 20);
      if ( v7 > 0 )
      {
        v9 = v21;
        do
        {
          v10 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v9 - 20);
          glitch::streaming::SCommandAndRegisterer::opAssign(
            v9,
            (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v9 - 20));
          --v7;
          v9 = v10;
        }
        while ( v7 != 0 );
        v8 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v21 + 20);
      }
      glitch::streaming::SCommandAndRegisterer::opAssign(a1, (const glitch::streaming::SCommandAndRegisterer::Self *)v23);
      result = s1[2];
      if ( s1[2] != nullptr )
        result = (volatile int32_t *)sub_5459C0(s1[2]);
      goto LABEL_12;
    }
    v19 = v3;
    glitch::streaming::SCommandAndRegisterer::Construct(
      (glitch::streaming::SCommandAndRegisterer::Self *)v23,
      v21);
    v11 = v19;
    v12 = (uint32_t *)((char *)v21 - 20);
    while ( 1 )
    {
      v13 = *v12 & 0xFFFFFF;
      v14 = (const glitch::streaming::SCommandAndRegisterer::Self *)v12;
      v22 = (v23[0] & 0xFFFFFFu) < v13;
      if ( (v23[0] & 0xFFFFFF) == v13 )
      {
        v15 = v12[1];
        v22 = v23[1] < v15;
        if ( v23[1] == v15 )
          break;
      }
      v12 -= 5;
      if ( !v22 )
        goto LABEL_20;
LABEL_16:
      glitch::streaming::SCommandAndRegisterer::opAssign(v11, v14);
      v11 = (glitch::streaming::SCommandAndRegisterer::Self *)(v14);
    }
    v20 = v11;
    v16 = memcmp(s1, v12 + 2, 8u);
    v12 -= 5;
    v11 = v20;
    if ( v16 < 0 )
      goto LABEL_16;
LABEL_20:
    glitch::streaming::SCommandAndRegisterer::opAssign(v11, (const glitch::streaming::SCommandAndRegisterer::Self *)v23);
    result = s1[2];
    if ( s1[2] != nullptr )
      result = (volatile int32_t *)sub_5459C0(s1[2]);
    v8 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v21 + 20);
LABEL_12:
    v21 = v8;
  }
  while ( a2 != v8 );
  return result;
}



// ============================================================================
// Address:   0xcf7fb0 (size: 316 bytes)
// Symbol:    _ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPN6glitch9streaming21SCommandAndRegistererESt6vectorIS4_NS2_4core10SAllocatorIS4_LNS2_6memory13E_MEMORY_HINTE0EEEEEEPFbRKS4_SF_EEvT_SI_T0_
// Demangled: void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&)>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&))
// ============================================================================
glitch::streaming::SCommandAndRegisterer::Self *g4_std_compat::insertion_sort_9edf2a(
        glitch::streaming::SCommandAndRegisterer::Self *a1,
        glitch::streaming::SCommandAndRegisterer::Self *a2,
        int (*a3)(glitch::streaming::SCommandAndRegisterer::Self *, const glitch::streaming::SCommandAndRegisterer::Self *))
{
  glitch::streaming::SCommandAndRegisterer::Self *result;
  glitch::streaming::SCommandAndRegisterer::Self *v4;
  glitch::streaming::SCommandAndRegisterer::Self *v5;
  int v6;
  glitch::streaming::SCommandAndRegisterer::Self *v7;
  glitch::streaming::SCommandAndRegisterer::Self *v8;
  const glitch::streaming::SCommandAndRegisterer::Self *v9;
  const glitch::streaming::SCommandAndRegisterer::Self *v10;
  char v11;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v12;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v13;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v14;
  typedef uint8_t _g4_t_v15[16];
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v16;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v15)) > _g4_s3 ? (44u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v16)) > _g4_s4 ? (60u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);

  result = a1;
  if ( a2 != a1 )
  {
    result = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a1 + 20);
    if ( (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a1 + 20) != a2 )
    {
      v13 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a1 + 20);
      v14 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a1 + 40);
      do
      {
        v4 = v13;
        if ( (uint8_t)a3(v13, a1) != 0 )
        {
          glitch::streaming::SCommandAndRegisterer::Construct(
            (glitch::streaming::SCommandAndRegisterer::Self *)v15,
            v13);
          v5 = v14;
          v6 = -858993459 * ((v13 - a1) >> 2);
          if ( v6 > 0 )
          {
            v7 = v13;
            do
            {
              v8 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v7 - 20);
              glitch::streaming::SCommandAndRegisterer::opAssign(
                v7,
                (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v7 - 20));
              --v6;
              v7 = v8;
            }
            while ( v6 != 0 );
          }
          glitch::streaming::SCommandAndRegisterer::opAssign(a1, (const glitch::streaming::SCommandAndRegisterer::Self *)v15);
          result = v16;
          if ( v16 != nullptr )
            result = (glitch::streaming::SCommandAndRegisterer::Self *)sub_5459C0((volatile int32_t *)v16);
        }
        else
        {
          glitch::streaming::SCommandAndRegisterer::Construct(
            (glitch::streaming::SCommandAndRegisterer::Self *)v15,
            v13);
          v9 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v13 - 20);
          while ( 1 )
          {
            v10 = v9;
            v11 = a3((glitch::streaming::SCommandAndRegisterer::Self *)v15, v9);
            v9 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v9 - 20);
            if ( v11 == 0 )
              break;
            v12 = v4;
            v4 = (glitch::streaming::SCommandAndRegisterer::Self *)(v10);
            glitch::streaming::SCommandAndRegisterer::opAssign(v12, v10);
          }
          glitch::streaming::SCommandAndRegisterer::opAssign(v4, (const glitch::streaming::SCommandAndRegisterer::Self *)v15);
          result = v16;
          if ( v16 != nullptr )
            result = (glitch::streaming::SCommandAndRegisterer::Self *)sub_5459C0((volatile int32_t *)v16);
          v5 = v14;
        }
        v13 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v13 + 20);
        v14 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v14 + 20);
      }
      while ( a2 != v5 );
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_b71665  (binary VA: 0xcf80f0)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>
// ----------------------------------------------------------------------------
char * g4_std::insertion_sort_gnu_cxx_normal_iterator_b71665(char *src, char *a2)
{
  char *result;
  char *v3;
  unsigned int v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  char *v8;
  int v9;

  result = src;
  if ( a2 != src )
  {
    v3 = src + 4;
    if ( src + 4 != a2 )
    {
      do
      {
        v4 = *(uint32_t *)v3;
        v5 = (uint32_t *)(v3);
        if ( *(uint32_t *)v3 < *(uint32_t *)src )
        {
          v8 = v3 + 4;
          v9 = (v3 - src) >> 2;
          if ( v9 != 0 )
            memmove(&v8[-4 * v9], src, 4 * v9);
          result = src;
          *(uint32_t *)src = v4;
        }
        else
        {
          v6 = *((uint32_t *)v3 - 1);
          v7 = (uint32_t *)(v3);
          result = v3 - 4;
          if ( v4 < v6 )
          {
            while ( 1 )
            {
              v7 = (uint32_t *)(result);
              result -= 4;
              *v5 = v6;
              v6 = *(uint32_t *)result;
              if ( v4 >= *(uint32_t *)result )
                break;
              v5 = v7;
            }
          }
          *v7 = v4;
          v8 = v3 + 4;
        }
        v3 = v8;
      }
      while ( a2 != v8 );
    }
  }
  return result;
}



// ============================================================================
// Address:   0xcf8190 (size: 116 bytes)
// Symbol:    _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPN6glitch9streaming21SCommandAndRegistererESt6vectorIS4_NS2_4core10SAllocatorIS4_LNS2_6memory13E_MEMORY_HINTE0EEEEEESD_EvT_T0_
// Demangled: void std::iter_swap<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
volatile int32_t *g4_std_compat::iter_swap_fe4141(
        glitch::streaming::SCommandAndRegisterer::Self *a1,
        glitch::streaming::SCommandAndRegisterer::Self *a2)
{
  volatile int32_t *result;
  typedef uint8_t _g4_t_v3[16];
  typedef volatile int32_t *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v4)) > _g4_s1 ? (28u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 28u);

  glitch::streaming::SCommandAndRegisterer::Construct((glitch::streaming::SCommandAndRegisterer::Self *)v3, a1);
  glitch::streaming::SCommandAndRegisterer::opAssign(a1, a2);
  glitch::streaming::SCommandAndRegisterer::opAssign(a2, (const glitch::streaming::SCommandAndRegisterer::Self *)v3);
  result = v4;
  if ( v4 != nullptr )
    return (volatile int32_t *)sub_5459C0(v4);
  return result;
}


// ============================================================================
// Address:   0xcf8210 (size: 429 bytes)
// Symbol:    _ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPN6glitch9streaming21SCommandAndRegistererESt6vectorIS4_NS2_4core10SAllocatorIS4_LNS2_6memory13E_MEMORY_HINTE0EEEEEEPFbRKS4_SF_EET_SI_SI_T0_
// Demangled: __gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>> std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&)>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&))
// ============================================================================
static const glitch::streaming::SCommandAndRegisterer::Self **g4_compat_def_12(
        const glitch::streaming::SCommandAndRegisterer::Self **a1,
        glitch::streaming::SCommandAndRegisterer::Self *a2,
        glitch::streaming::SCommandAndRegisterer::Self *a3,
        int (*a4)(glitch::streaming::SCommandAndRegisterer::Self *, glitch::streaming::SCommandAndRegisterer::Self *))
{
  glitch::streaming::SCommandAndRegisterer::Self *v4;
  glitch::streaming::SCommandAndRegisterer::Self *v5;
  char v6;
  const glitch::streaming::SCommandAndRegisterer::Self *i;
  const glitch::streaming::SCommandAndRegisterer::Self *v8;
  char v9;
  glitch::streaming::SCommandAndRegisterer::Self *v10;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v12;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v13;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v14;
  typedef uint8_t _g4_t_v15[16];
  typedef volatile int32_t *_g4_t_v16;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v15)) > _g4_s3 ? (44u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v16)) > _g4_s4 ? (60u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);

  v14 = a3;
  v4 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a3 - 20);
  v5 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a2
                                                  + 20
                                                  * ((int)(((unsigned int)(-858993459 * ((a3 - a2) >> 2)) >> 31)
                                                         - 858993459 * ((a3 - a2) >> 2)) >> 1));
  v6 = a4(a2, v5);
  v12 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a3 - 20);
  if ( v6 == 0 )
  {
    if ( (uint8_t)a4(a2, v12) != 0 )
      goto LABEL_5;
    if ( (uint8_t)a4(v5, v4) == 0 )
    {
      g4_std_compat::iter_swap_fe4141(
        a2,
        v5);
      goto LABEL_5;
    }
LABEL_18:
    g4_std_compat::iter_swap_fe4141(
      a2,
      v4);
    goto LABEL_5;
  }
  if ( (uint8_t)a4(v5, v12) == 0 )
  {
    if ( (uint8_t)a4(a2, v4) == 0 )
      goto LABEL_5;
    goto LABEL_18;
  }
  glitch::streaming::SCommandAndRegisterer::Construct((glitch::streaming::SCommandAndRegisterer::Self *)v15, a2);
  glitch::streaming::SCommandAndRegisterer::opAssign(a2, v5);
  glitch::streaming::SCommandAndRegisterer::opAssign(v5, (const glitch::streaming::SCommandAndRegisterer::Self *)v15);
  if ( v16 != nullptr )
    sub_5459C0(v16);
LABEL_5:
  for ( i = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)a2 + 20);
        ;
        i = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v8 + 20) )
  {
    do
    {
      v8 = i;
      v9 = a4((glitch::streaming::SCommandAndRegisterer::Self *)(i), a2);
      i = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v8 + 20);
    }
    while ( v9 != 0 );
    v10 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v14 - 20);
    do
    {
      v14 = v10;
      v13 = v10;
      v10 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v10 - 20);
    }
    while ( (uint8_t)a4(a2, v13) != 0 );
    if ( v14 <= v8 )
      break;
    glitch::streaming::SCommandAndRegisterer::Construct((glitch::streaming::SCommandAndRegisterer::Self *)v15, v8);
    glitch::streaming::SCommandAndRegisterer::opAssign(v8, v14);
    glitch::streaming::SCommandAndRegisterer::opAssign(v14, (const glitch::streaming::SCommandAndRegisterer::Self *)v15);
    if ( v16 != nullptr )
      sub_5459C0(v16);
  }
  *a1 = v8;
  return a1;
}


// ============================================================================
// Address:   0xcf83c0 (size: 466 bytes)
// Symbol:    _ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPN6glitch9streaming21SCommandAndRegistererESt6vectorIS4_NS2_4core10SAllocatorIS4_LNS2_6memory13E_MEMORY_HINTE0EEEEEEiPFbRKS4_SF_EEvT_SI_T0_T1_
// Demangled: void std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,int,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&)>(__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SCommandAndRegisterer *,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>>,int,bool (*)(glitch::streaming::SCommandAndRegisterer const&,glitch::streaming::SCommandAndRegisterer const&))
// ============================================================================
int g4_std_compat::introsort_loop_6226a5(
        glitch::streaming::SCommandAndRegisterer::Self *a1,
        glitch::streaming::SCommandAndRegisterer::Self *a2,
        int a3,
        int (*a4)(glitch::streaming::SCommandAndRegisterer::Self *, glitch::streaming::SCommandAndRegisterer::Self *))
{
  glitch::streaming::SCommandAndRegisterer::Self *v4;
  glitch::streaming::SCommandAndRegisterer::Self *v5;
  int result;
  int v7;
  int v8;
  const glitch::streaming::SCommandAndRegisterer::Self *i;
  volatile int32_t *v10;
  const glitch::streaming::SCommandAndRegisterer::Self *v11;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v12;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v13;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v14;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int (*_g4_t_v17)(glitch::streaming::SCommandAndRegisterer::Self *, glitch::streaming::SCommandAndRegisterer::Self *);
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v18;
  typedef uint8_t _g4_t_v19[16];
  typedef volatile int32_t *_g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef volatile int32_t *_g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef volatile int32_t *_g4_t_v24;
  typedef glitch::streaming::SCommandAndRegisterer::Self **_g4_t_v25;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v16)) > _g4_s4 ? (12u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v17)) > _g4_s5 ? (16u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v18)) > _g4_s6 ? (20u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v19)) > _g4_s7 ? (24u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v20)) > _g4_s8 ? (40u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v21)) > _g4_s9 ? (48u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v22)) > _g4_s10 ? (64u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v23)) > _g4_s11 ? (68u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v24)) > _g4_s12 ? (84u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v25)) > _g4_s13 ? (96u + sizeof(_g4_t_v25)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);

  v25 = &a1;
  v4 = a2;
  v5 = a1;
  result = a2 - a1;
  v17 = a4;
  if ( a2 - a1 > 339 )
  {
    if ( a3 != 0 )
    {
      v15 = a1;
      v7 = a3;
      while ( 1 )
      {
        --v7;
        g4_std_compat::unguarded_partition_pivot(
          &v18,
          v15,
          v4,
          v17);
        v12 = v18;
        g4_std_compat::introsort_loop_6226a5(
          v18,
          v4,
          v7,
          v17);
        v4 = (glitch::streaming::SCommandAndRegisterer::Self *)(v12);
        result = v12 - v15;
        if ( v12 - v15 <= 339 )
          break;
        if ( v7 == 0 )
        {
          v5 = v15;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_8:
      v13 = v4;
      v14 = v5;
      v16 = -858993459 * (result >> 2);
      v8 = (v16 - 2) >> 1;
      for ( i = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v5 + 20 * v8);
            ;
            i = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)i - 20) )
      {
        glitch::streaming::SCommandAndRegisterer::Construct(
          (glitch::streaming::SCommandAndRegisterer::Self *)v19,
          i);
        glitch::streaming::SCommandAndRegisterer::Construct(
          (glitch::streaming::SCommandAndRegisterer::Self *)v21,
          (const glitch::streaming::SCommandAndRegisterer::Self *)v19);
        sub_CDD870(
          (int)(uintptr_t)(v14),
          v8,
          v16,
          (glitch::streaming::SCommandAndRegisterer::Self *)v21,
          (uint8_t (*)(int, const glitch::streaming::SCommandAndRegisterer::Self *))v17);
        if ( v22 != nullptr )
          sub_5459C0(v22);
        if ( v8 == 0 )
          break;
        --v8;
        if ( v20 != nullptr )
          sub_5459C0(v20);
      }
      v10 = v20;
      v11 = v13;
      if ( v20 != nullptr )
        goto LABEL_20;
      while ( 1 )
      {
        result = v11 - v14;
        if ( v11 - v14 <= 39 )
          break;
        v11 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v11 - 20);
        glitch::streaming::SCommandAndRegisterer::Construct(
          (glitch::streaming::SCommandAndRegisterer::Self *)v19,
          v11);
        glitch::streaming::SCommandAndRegisterer::opAssign(v11, v14);
        glitch::streaming::SCommandAndRegisterer::Construct(
          (glitch::streaming::SCommandAndRegisterer::Self *)v23,
          (const glitch::streaming::SCommandAndRegisterer::Self *)v19);
        sub_CDD870(
          (int)(uintptr_t)(v14),
          0,
          -858993459 * ((v11 - v14) >> 2),
          (glitch::streaming::SCommandAndRegisterer::Self *)v23,
          (uint8_t (*)(int, const glitch::streaming::SCommandAndRegisterer::Self *))v17);
        if ( v24 != nullptr )
          sub_5459C0(v24);
        v10 = v20;
        if ( v20 != nullptr )
LABEL_20:
          sub_5459C0(v10);
      }
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: g4_std::iter_swap_gnu_cxx_normal_iterator_a0ab87  (binary VA: 0xcf85a0)
// Original: std::iter_swap<__gnu_cxx::__normal_iterator<std::pair<glitch::streaming::SCommand,bool> *,std::vector<std::pair<glitch::streaming::SCommand,bool>>>,__gnu_cxx::__normal_iterator<std::pair<glitch::streaming::SCommand,bool> *,std::vector<std::pair<glitch::streaming::SCommand,bool>>>>
// ----------------------------------------------------------------------------
int g4_std::iter_swap_gnu_cxx_normal_iterator_a0ab87(uint32_t *a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  v7 = a1[4];
  *a1 = *(uint32_t *)a2;
  a1[1] = *(uint32_t *)(a2 + 4);
  a1[2] = *(uint32_t *)(a2 + 8);
  a1[3] = *(uint32_t *)(a2 + 12);
  *((uint8_t *)a1 + 16) = *(uint8_t *)(a2 + 16);
  *(uint32_t *)a2 = v3;
  *(uint32_t *)(a2 + 4) = v4;
  *(uint32_t *)(a2 + 8) = v5;
  *(uint32_t *)(a2 + 12) = v6;
  *(uint8_t *)(a2 + 16) = v7;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: g4_std::adjust_heap_gnu_cxx_normal_iterator_4014f8  (binary VA: 0xcfab40)
// Original: std::__adjust_heap<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int,unsigned int>
// ----------------------------------------------------------------------------
unsigned int g4_std::adjust_heap_gnu_cxx_normal_iterator_4014f8(int a1, int a2, int a3, unsigned int a4)
{
  int i;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int *v8;
  int v9;
  unsigned int v10;

  for ( i = a2; i < (a3 - 1) / 2; *(uint32_t *)(a1 + 4 * v5) = v6 )
  {
    v5 = i;
    i = 2 * i + 2;
    v6 = *(uint32_t *)(a1 + 4 * i);
    if ( v6 < *(uint32_t *)(a1 + 4 * (i - 1)) )
      v6 = *(uint32_t *)(a1 + 4 * --i);
  }
  if ( (a3 & 1) == 0 && (v7 = (a3 - 2) / 2) == i )
  {
    i = 2 * i + 1;
    v8 = (unsigned int *)(a1 + 4 * i);
    *(uint32_t *)(a1 + 4 * v7) = *v8;
  }
  else
  {
    v8 = (unsigned int *)(a1 + 4 * i);
  }
  if ( a2 < i )
  {
    v9 = (i - 1) / 2;
    v10 = *(uint32_t *)(a1 + 4 * v9);
    if ( a4 > v10 )
    {
      while ( 1 )
      {
        v8 = (unsigned int *)(a1 + 4 * v9);
        *(uint32_t *)(a1 + 4 * i) = v10;
        if ( a2 >= v9 )
          break;
        v10 = *(uint32_t *)(a1 + 4 * ((v9 - 1) / 2));
        if ( a4 <= v10 )
          break;
        i = v9;
        v9 = (v9 - 1) / 2;
      }
    }
  }
  *v8 = a4;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_fd001d  (binary VA: 0xcfac20)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_fd001d(char *a1, char *a2, int a3)
{
  char *k;
  int result;
  unsigned int v5;
  unsigned int *v6;
  unsigned int v7;
  unsigned int v8;
  char *v9;
  int v10;
  int v11;
  char *v12;
  unsigned int v13;
  int v14;
  int v15;
  char *v16;
  int i;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  unsigned int v26;
  char *j;
  int *v28;
  int *v29;
  int *v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  int v37;
  unsigned int v38;
  char *v39;
  char *v40;
  int v41;
  int v42;

  k = a2;
  result = a2 - a1;
  if ( a2 - a1 <= 67 )
    return result;
  if ( a3 == 0 )
  {
LABEL_36:
    v15 = result >> 2;
    v39 = k;
    v42 = v15 & 1;
    v34 = (v15 - 1) >> 1;
    v41 = (v15 - 2) >> 1;
    v36 = v41;
    v40 = &a1[4 * v41];
    v16 = v40;
    for ( i = v41; ; i = v36 )
    {
      v38 = *(uint32_t *)v16;
      v33 = i;
      v18 = i;
      if ( i < v34 )
      {
        while ( 1 )
        {
          v29 = (int *)&a1[8 * v18 + 8];
          v19 = *v29;
          v31 = (int *)&a1[8 * v18 + 4];
          v20 = 2 * (v18 + 1);
          if ( *v29 < (unsigned int)*v31 )
          {
            v20 = 2 * (v18 + 1) - 1;
            v19 = *v31;
          }
          v16 = &a1[8 * v18 + 8];
          if ( *v29 < (unsigned int)*v31 )
            v16 = &a1[8 * v18 + 4];
          v33 = v20;
          *(uint32_t *)&a1[4 * v18] = v19;
          if ( v20 >= v34 )
            break;
          v18 = v20;
        }
      }
      if ( v42 == 0 && v41 == v33 )
      {
        v16 = &a1[8 * v41 + 4];
        v33 = 2 * v41 + 1;
        *(uint32_t *)&a1[4 * v41] = *(uint32_t *)v16;
      }
      if ( v36 < v33 )
      {
        v21 = v33;
        v22 = (v33 - 1) / 2;
        v23 = *(uint32_t *)&a1[4 * v22];
        if ( v38 > v23 )
        {
          while ( 1 )
          {
            v16 = &a1[4 * v22];
            *(uint32_t *)&a1[4 * v21] = v23;
            if ( v36 >= v22 )
              break;
            v23 = *(uint32_t *)&a1[4 * ((v22 - 1) / 2)];
            if ( v38 <= v23 )
              break;
            v21 = v22;
            v22 = (v22 - 1) / 2;
          }
        }
      }
      v40 -= 4;
      *(uint32_t *)v16 = v38;
      if ( v36 == 0 )
        break;
      --v36;
      v16 = v40;
    }
    while ( 1 )
    {
      v39 -= 4;
      v11 = 0;
      v12 = a1;
      v32 = 0;
      v13 = *(uint32_t *)v39;
      *(uint32_t *)v39 = *(uint32_t *)a1;
      v35 = v13;
      v37 = (v39 - a1) >> 2;
      result = v37 - 1;
      if ( (v37 - 1) / 2 > 0 )
      {
        while ( 1 )
        {
          v28 = (int *)&a1[8 * v11 + 8];
          result = *v28;
          v30 = (int *)&a1[8 * v11 + 4];
          v14 = 2 * (v11 + 1);
          if ( *v28 < (unsigned int)*v30 )
          {
            v14 = 2 * (v11 + 1) - 1;
            result = *v30;
          }
          v12 = &a1[8 * v11 + 8];
          if ( *v28 < (unsigned int)*v30 )
            v12 = &a1[8 * v11 + 4];
          v32 = v14;
          *(uint32_t *)&a1[4 * v11] = result;
          if ( v14 >= (v37 - 1) / 2 )
            break;
          v11 = v14;
        }
      }
      if ( (v37 & 1) == 0 )
      {
        result = (v37 - 2) / 2;
        if ( v32 == result )
          break;
      }
      if ( v32 > 0 )
        goto LABEL_57;
LABEL_34:
      *(uint32_t *)v12 = v35;
      if ( v39 - a1 <= 7 )
        return result;
    }
    v32 = 2 * v32 + 1;
    result = (int)(uintptr_t)(&a1[4 * v32]);
    *(uint32_t *)v12 = *(uint32_t *)result;
    v12 = (char *)result;
LABEL_57:
    v24 = v32;
    v25 = (v32 - 1) >> 1;
    v26 = *(uint32_t *)&a1[4 * v25];
    if ( v35 > v26 )
    {
      while ( 1 )
      {
        v12 = &a1[4 * v25];
        *(uint32_t *)&a1[4 * v24] = v26;
        if ( v25 == 0 )
          break;
        result = (v25 - 1) >> 1;
        v26 = *(uint32_t *)&a1[4 * result];
        if ( v35 <= v26 )
          break;
        v24 = v25;
        v25 = (v25 - 1) >> 1;
      }
    }
    goto LABEL_34;
  }
  for ( j = a2; ; j = k )
  {
    v5 = *(uint32_t *)a1;
    --a3;
    v6 = (unsigned int *)&a1[4 * (result >> 3)];
    v7 = *((uint32_t *)j - 1);
    v8 = *v6;
    if ( *(uint32_t *)a1 >= *v6 )
    {
      if ( v5 >= v7 )
      {
        if ( v8 >= v7 )
        {
          *(uint32_t *)a1 = v8;
          *v6 = v5;
          v5 = *(uint32_t *)a1;
          v7 = *((uint32_t *)j - 1);
        }
        else
        {
          *(uint32_t *)a1 = v7;
          *((uint32_t *)j - 1) = v5;
          v7 = v5;
          v5 = *(uint32_t *)a1;
        }
      }
    }
    else if ( v8 >= v7 )
    {
      if ( v5 < v7 )
      {
        *(uint32_t *)a1 = v7;
        v7 = v5;
        *((uint32_t *)j - 1) = v5;
        v5 = *(uint32_t *)a1;
      }
    }
    else
    {
      *(uint32_t *)a1 = v8;
      *v6 = v5;
      v5 = *(uint32_t *)a1;
      v7 = *((uint32_t *)j - 1);
    }
    v9 = j;
    for ( k = a1 + 4; ; k += 4 )
    {
      while ( 1 )
      {
        v10 = *(uint32_t *)k;
        if ( *(uint32_t *)k >= v5 )
          break;
        k += 4;
      }
      v9 -= 4;
      if ( v5 < v7 )
      {
        do
        {
          v9 -= 4;
          v7 = *(uint32_t *)v9;
        }
        while ( *(uint32_t *)v9 > v5 );
      }
      if ( v9 <= k )
        break;
      *(uint32_t *)k = v7;
      *(uint32_t *)v9 = v10;
      v5 = *(uint32_t *)a1;
      v7 = *((uint32_t *)v9 - 1);
    }
    g4_std::introsort_loop_gnu_cxx_normal_iterator_fd001d(k, j, a3);
    result = k - a1;
    if ( k - a1 <= 67 )
      break;
    if ( a3 == 0 )
      goto LABEL_36;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CFAFC0  (binary VA: 0xcfafc0)
// Original: sub_CFAFC0
// ----------------------------------------------------------------------------
char * sub_CFAFC0()
{
  char *result;

  sub_1900D70(&unk_20DF924);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DF924, &unk_20D1280);
  dword_20DF928 = 1056964608;
  dword_20DF92C = 1056964608;
  dword_20DF930 = 1056964608;
  glitch::memory::SExternallyLinkedPool::SExternallyLinkedPool(
    (glitch::memory::SExternallyLinkedPool::Self *)glitch::memory::Matrix4Pool,
    0x40u,
    0x20u);
  __cxa_atexit(
    (void (*)(void *))glitch::memory::SExternallyLinkedPool::Destroy,
    glitch::memory::Matrix4Pool,
    &unk_20D1280);
  glitch::memory::Aabbox3dfPool[0] = 0;
  glitch::memory::Aabbox3dfPool[1] = 0;
  glitch::memory::Aabbox3dfPool[2] = 0;
  glitch::memory::Aabbox3dfPool[3] = 24;
  glitch::memory::Aabbox3dfPool[4] = 32;
  glitch::memory::Aabbox3dfPool[5] = 32;
  glitch::memory::Aabbox3dfPool[6] = 0;
  glitch::memory::Aabbox3dfPool[7] = 0;
  __cxa_atexit(
    (void (*)(void *))boost::object_pool_aabbox3d_float_memory_SD_e33e50::Destroy,
    glitch::memory::Aabbox3dfPool,
    &unk_20D1280);
  stru_20DF8A8.__count = 0;
  pthread_mutex_init(&stru_20DF8A8, nullptr);
  __cxa_atexit((void (*)(void *))glitch::thread::CMutex::Destroy, &glitch::thread::AtomicLock, &unk_20D1280);
  glitch::thread::this_thread::Tls[0] = *(uint32_t *)glf::TlsNode::GetHead();
  glitch::thread::this_thread::Tls[3] = (uintptr_t)(uintptr_t)(&glitch::thread::this_thread::Tls_sDefaultValue);
  glitch::thread::this_thread::Tls[1] = 12;
  glitch::thread::this_thread::Tls[2] = 0;
  glitch::thread::this_thread::Tls[4] = 0;
  glitch::thread::this_thread::Tls[5] = 0;
  glitch::thread::this_thread::Tls[6] = 0;
  glitch::thread::this_thread::Tls[7] = 0;
  glitch::thread::this_thread::Tls[8] = 0;
  glf::TlsNode::Init((glf::TlsNode::Self *)glitch::thread::this_thread::Tls);
  *(uint32_t *)glf::TlsNode::GetHead() = (uint32_t)(uintptr_t)(glitch::thread::this_thread::Tls);
  __cxa_atexit(
    (void (*)(void *))glf::Tls_thread_this_thread_STls_683781::Destroy,
    glitch::thread::this_thread::Tls,
    &unk_20D1280);
  glitch::core::IdentityMatrix2 = 1065353216;
  *(uintptr_t *)(unk_20DF848) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DF84C) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DF850) = (uintptr_t)(1065353216);
  glitch::core::IdentityMatrix3 = 1065353216;
  *(uintptr_t *)(unk_20DF824) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DF828) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DF82C) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DF830) = (uintptr_t)(1065353216);
  *(uintptr_t *)(unk_20DF834) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DF838) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DF83C) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DF840) = (uintptr_t)(1065353216);
  glf::SpinLock::Construct((glf::SpinLock::Self *)&glitch::core::Matrix4PoolLock);
  __cxa_atexit((void (*)(void *))glf::SpinLock::Destroy, &glitch::core::Matrix4PoolLock, &unk_20D1280);
  memset(glitch::core::IdentityMatrix, 0, 64);
  glitch::core::IdentityMatrix[0] = 1065353216;
  glitch::core::IdentityMatrix[5] = 1065353216;
  glitch::core::IdentityMatrix[10] = 1065353216;
  glitch::core::IdentityMatrix[15] = 1065353216;
  if ( byte_20D6E80 == 0 )
  {
    byte_20D6E80 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &dword_20D6D30, &unk_20D1280);
  }
  if ( byte_20D6E90 == 0 )
  {
    byte_20D6E90 = 1;
    if ( byte_20D6D20 == 0 )
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
      }
    }
  }
  if ( byte_20D6EA0 == 0 )
  {
    byte_20D6EA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &dword_20D6D00, &unk_20D1280);
  }
  if ( byte_20D6EB0 == 0 )
  {
    byte_20D6EB0 = 1;
    boost::singleton_pool_fast_pool_allocator_tag_197d0b::get_pool();
  }
  if ( g4_guard_c6745bbfdb[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_c6745bbfdb) = (uintptr_t)(1);
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::fast_pool_allocator_tag,32u,glitch::memory::SDefaultPoolAllocator,glitch::memory::SPoolMutex<glf::SpinLock::Self>,32u,0u>::storage,
      &unk_20D1280);
  }

  if ( g4_guard_bd940a6664[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_bd940a6664) = (uintptr_t)(1);
    boost::singleton_pool_fast_pool_allocator_tag_4de621::get_pool();
  }
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (byte_20D5640 == 0)
{
    byte_20D5640 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &dword_20D53E0, &unk_20D1280);
  }

  result = (char *)(&byte_20D5650);
// ----------------------------------------------------------------------------
// Function: if_id  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (byte_20D5650 == 0)
{
    byte_20D5650 = 1;
    return (char *)sub_605B50();
  }

  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_CFC890  (binary VA: 0xcfc890)
// Original: sub_CFC890
// ----------------------------------------------------------------------------
int sub_CFC890(int a1)
{
  *(uint32_t *)a1 = 4;
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CFC8B0  (binary VA: 0xcfc8b0)
// Original: sub_CFC8B0
// ----------------------------------------------------------------------------
int sub_CFC8B0(int a1)
{
  *(uint32_t *)a1 = 4;
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CFC8D0  (binary VA: 0xcfc8d0)
// Original: sub_CFC8D0
// ----------------------------------------------------------------------------
int sub_CFC8D0(int a1)
{
  *(uint32_t *)a1 = 4;
  *(uint32_t *)(a1 + 4) = 2;
  *(uint8_t *)(a1 + 8) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CFC8F0  (binary VA: 0xcfc8f0)
// Original: sub_CFC8F0
// ----------------------------------------------------------------------------
int sub_CFC8F0(int a1)
{
  *(uint32_t *)a1 = 4;
  *(uint32_t *)(a1 + 4) = 2;
  *(uint8_t *)(a1 + 8) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CFC910  (binary VA: 0xcfc910)
// Original: sub_CFC910
// ----------------------------------------------------------------------------
int sub_CFC910()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_CFC920  (binary VA: 0xcfc920)
// Original: sub_CFC920
// ----------------------------------------------------------------------------
int sub_CFC920()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_CFC930  (binary VA: 0xcfc930)
// Original: sub_CFC930
// ----------------------------------------------------------------------------
int sub_CFC930()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_CFC950  (binary VA: 0xcfc950)
// Original: sub_CFC950
// ----------------------------------------------------------------------------
void sub_CFC950(glitch::collada::CColladaFactoryWrapperBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2071168);
  glitch::collada::CColladaFactoryWrapperBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_CFDAD0  (binary VA: 0xcfdad0)
// Original: sub_CFDAD0
// ----------------------------------------------------------------------------
int sub_CFDAD0(glitch::core::Self *a1)
{
  void *v2;

  return ((glitch::core::releaseProcessBuffer(a1, v2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_CFDF90  (binary VA: 0xcfdf90)
// Original: sub_CFDF90
// ----------------------------------------------------------------------------
int sub_CFDF90(unsigned int a1, float a2, __m128d a3)
{
  __m128d v3;
  __m128d v4;
  unsigned int v5;
  __m128d v6;
  __m128d v7;
  void **v8;
  int v9;
  int v10;
  unsigned int *v11;
  int v13;
  int v14;

  g4_m128_lane_ref<double>(a3, 0) = (double)a1 / a2;
  v3 = _mm_and_pd(a3, g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL));
  if ( g4_m128_lane_ref<double>(v3, 0) < 4503599627370496.0 )
  {
    g4_m128_lane_ref<double>(v3, 0) = g4_m128_lane_ref<double>(v3, 0) + 4503599627370496.0 - 4503599627370496.0;
    v4 = _mm_or_pd(v3, _mm_andn_pd(g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL), a3));
    g4_m128_lane_ref<double>(a3, 0) = g4_m128_lane_ref<double>(v4, 0)
                    - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v4, a3), 0) & 0x3FF0000000000000LL);
  }
  v5 = 0;
  if ( g4_m128_lane_ref<double>(a3, 0) < 4294967295.0 )
  {
    v6 = g4_to_m128d(0);
    g4_m128_lane_ref<double>(v6, 0) = g4_m128_lane_ref<double>(a3, 0);
    v7 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v6);
    v5 = _mm_cvtsi128_si32(
           _mm_xor_si128(
             _mm_cvttpd_epi32(_mm_sub_pd(v6, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v7))),
             _mm_slli_epi32(G4_BITCAST<__m128i>(v7), 0x1Fu)))
       + 1;
  }
  v14 = 38;
  v8 = (void **)&unk_1C81A60;
  v9 = 38;
  while ( 1 )
  {
    v10 = v9 >> 1;
    v11 = (unsigned int *)&v8[v10];
    if ( *v11 >= v5 )
      break;
    v13 = v10;
    v10 = v14;
LABEL_14:
    v8 = (void **)(v11 + 1);
    v9 = v10 - v13 - 1;
    v14 = v9;
    if ( v9 <= 0 )
      goto LABEL_11;
  }
  while ( v10 > 0 )
  {
    v13 = v10 >> 1;
    v11 = (unsigned int *)&v8[v10 >> 1];
    if ( *v11 < v5 )
      goto LABEL_14;
    v10 >>= 1;
  }
LABEL_11:
  if ( v8 == (void **)(intptr_t)(jpt_628CA1) )
    v8 = (void **)&unk_1C81AF4;
  return (int)(uintptr_t)(*v8);
}

// ----------------------------------------------------------------------------
// Function: sub_CFE0C0  (binary VA: 0xcfe0c0)
// Original: sub_CFE0C0
// ----------------------------------------------------------------------------
void sub_CFE0C0(int a1, uint32_t *a2)
{
  uint32_t *src;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  char *dest;
  char *v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v18;
  int v19;
  int v20;
  char *v21;
  size_t v22;

  src = *(uint32_t **)(a1 + 4);
  if ( src == *(uint32_t **)(a1 + 8) )
  {
    v7 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    v22 = 4;
    if ( v7 != 0 )
    {
      v22 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v16 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v16 = -4;
        v22 = v16;
      }
    }
    v20 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    dest = (char *)opNew(v22);
    v9 = &dest[4 * v20];
    if ( v9 != nullptr )
      *(uint32_t *)v9 = *a2;
    v10 = 0;
    v11 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    if ( v11 != 0 )
    {
      v18 = 4 * v11;
      memmove(dest, *(const void **)a1, 4 * v11);
      v10 = v18;
    }
    v12 = &dest[v10 + 4];
    v13 = 0;
    v14 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
    if ( v14 != 0 )
    {
      v19 = 4 * v14;
      v21 = v12;
      memmove(v12, src, 4 * v14);
      v12 = v21;
      v13 = v19;
    }
    v15 = &v12[v13];
    if ( *(uint32_t *)a1 != 0 )
      opDelete(*(void **)a1);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v15);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v22]);
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *src = *(src - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 4;
    v5 = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( v5 != 0 )
      memmove((void *)(v4 - 4 * v5), src, 4 * v5);
    *src = v6;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_CFE240  (binary VA: 0xcfe240)
// Original: sub_CFE240
// ----------------------------------------------------------------------------
int * sub_CFE240(int *result, uint8_t *a2)
{
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;

  v2 = 0;
  result[2] = *((uint32_t *)a2 + 5);
  result[3] = *((uint32_t *)a2 + 10);
  result[4] = *((uint32_t *)a2 + 11);
  result[7] = *((uint32_t *)a2 + 14);
  *result = 0;
  result[1] = 0;
  if ( (a2[14] & 8) != 0 )
  {
    *result = 0x80000000;
    v2 = 0x80000000;
  }
  v3 = v2 | ((*((uint32_t *)a2 + 2) & 0x7000) << 16);
  *result = v3;
  v4 = v3 | *a2;
  *result = v4;
  v5 = *((uint32_t *)a2 + 2);
  v6 = (v5 & 0x100) == 0 ? 0x2000000 : 50331648;
  if ( (v5 & 0x200) == 0 )
    v6 = (*((uint32_t *)a2 + 2) & 0x100) != 0 ? 0x1000000 : 0;
  v7 = ((v5 & 0x800) != 0 ? 0x8000000 : 0) | v6 | ((*((uint32_t *)a2 + 2) & 0x400) != 0 ? 0x4000000 : 0);
  v8 = 0;
  v9 = v4 | v7;
  *result = v9;
  if ( (a2[14] & 0x10) != 0 )
  {
    result[1] = 0x200000;
    v8 = 0x200000;
  }
  v10 = v8 | (*((uint32_t *)a2 + 2) >> 30 << 15);
  result[1] = v10;
  v11 = v10 | (((*((uint32_t *)a2 + 3) & 0x200000) != 0) << 22);
  result[1] = v11;
  if ( (a2[14] & 0x40) != 0 )
    v12 = v11 | 0x800000;
  else
    v12 = v11 & 0xFF7FFFFF;
  result[1] = v12;
  v13 = ((*((uint32_t *)a2 + 3) & 0x7000u) >> 12) | v12 & 0xFFFFFFF8;
  result[1] = v13;
  if ( (a2[14] & 0x80u) == 0 )
    v14 = v13 & 0xFEFFFFFF;
  else
    v14 = v13 | 0x1000000;
  result[1] = v14;
  v15 = (4 * (*((uint32_t *)a2 + 3) & 0x18000)) | v14 & 0xFFF9FFFF;
  result[1] = v15;
  v16 = (4 * (*((uint32_t *)a2 + 3) & 0x60000)) | v15 & 0xFFE7FFFF;
  result[1] = v16;
  if ( (a2[15] & 2) != 0 )
  {
    v17 = v16 | 0x2000000;
    result[1] = v16 | 0x2000000;
  }
  else
  {
    v17 = v16 & 0xFDFFFFFF;
    result[1] = v16 & 0xFDFFFFFF;
  }
  if ( (a2[15] & 4) != 0 )
    v18 = v17 | 0x4000000;
  else
    v18 = v17 & 0xFBFFFFFF;
  result[1] = v18;
  if ( (a2[15] & 8) != 0 )
    v19 = v18 | 0x8000000;
  else
    v19 = v18 & 0xF7FFFFFF;
  result[1] = v19;
  if ( (a2[15] & 0x10) != 0 )
    v20 = v19 | 0x10000000;
  else
    v20 = v19 & 0xEFFFFFFF;
  result[1] = v20;
  if ( (a2[15] & 0x20) != 0 )
    v21 = v20 | 0x20000000;
  else
    v21 = v20 & 0xDFFFFFFF;
  result[1] = v21;
  if ( (a2[15] & 0x40) == 0 )
  {
    v22 = v21 & 0xBFFFFFFF;
    result[1] = v22;
    if ( (a2[16] & 1) == 0 )
      goto LABEL_23;
LABEL_27:
    v23 = v22 | 0x80000000;
    result[1] = v23;
    goto LABEL_24;
  }
  v22 = v21 | 0x40000000;
  result[1] = v22;
  if ( (a2[16] & 1) != 0 )
    goto LABEL_27;
LABEL_23:
  v23 = v22 & 0x7FFFFFFF;
  result[1] = v23;
LABEL_24:
  v24 = ((*((uint32_t *)a2 + 2) & 0x1C0000u) >> 15) | v23 & 0xFFFFFFC7;
  result[1] = v24;
  v25 = v9 | (a2[2] << 8);
  *result = v25;
  *result = v25 | (HIBYTE(*(uint32_t *)a2) << 16);
  v26 = ((*((uint32_t *)a2 + 2) & 0xE00000u) >> 15) | v24 & 0xFFFFFE3F;
  result[1] = v26;
  v27 = ((a2[11] & 7) << 9) | v26 & 0xFFFFF1FF;
  result[1] = v27;
  result[1] = ((*((uint32_t *)a2 + 2) & 0x38000000u) >> 15) | v27 & 0xFFFF8FFF;
  v28 = *((uint32_t *)a2 + 12);
  v29 = *((uint32_t *)a2 + 13);
  result[5] = v28;
  result[6] = v29;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CFE550  (binary VA: 0xcfe550)
// Original: sub_CFE550
// ----------------------------------------------------------------------------
int * sub_CFE550(int *result)
{
  int v1;
  int32_t v2;

  v1 = *result;
  if ( *result != 0 )
  {
    while ( 1 )
    {
      v2 = *(uint32_t *)(v1 + 4);
      _mm_mfence();
      if ( v2 == 2 )
      {
        if ( *(uint16_t *)(v1 + 32) == 0xFFFF )
          goto LABEL_4;
        glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v1);
      }
      else
      {
        if ( v2 == 1 )
          return (int *)G4_VCALL<int>(v1, 4);
LABEL_4:
        result = (int *)__sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v2, v2 - 1);
        if ( (int *)v2 == result )
          return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CFE5C0  (binary VA: 0xcfe5c0)
// Original: sub_CFE5C0
// ----------------------------------------------------------------------------
float * sub_CFE5C0(float *result, float *a2)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm4_4
  float v29; // xmm0_4
  float v30; // xmm4_4

  v2 = a2[5];
  v3 = *a2;
  v4 = a2[10];
  v5 = (float)(v2 + *a2) + v4;
  if ( v5 <= 0.0 )
  {
    if ( v3 <= v2 || v3 <= v4 )
    {
      if ( v2 <= v4 )
      {
        v29 = fsqrt((float)((float)(v4 - v3) - v2) + 1.0);
        v30 = 0.5 / v29;
        v12 = v29 * 0.5;
        v8 = (float)(a2[4] - a2[1]) * v30;
        v13 = (float)(a2[9] + a2[6]) * v30;
        v14 = (float)(a2[8] + a2[2]) * v30;
      }
      else
      {
        v27 = fsqrt((float)((float)(v2 - v3) - v4) + 1.0);
        v28 = 0.5 / v27;
        v13 = v27 * 0.5;
        v8 = (float)(a2[2] - a2[8]) * v28;
        v12 = (float)(a2[9] + a2[6]) * v28;
        v14 = (float)(a2[4] + a2[1]) * v28;
      }
      result[3] = v8;
    }
    else
    {
      v25 = fsqrt((float)((float)(v3 - v2) - v4) + 1.0);
      v26 = 0.5 / v25;
      v14 = v25 * 0.5;
      v8 = (float)(a2[9] - a2[6]) * v26;
      v12 = (float)(a2[2] + a2[8]) * v26;
      v13 = (float)(a2[4] + a2[1]) * v26;
      result[3] = v8;
    }
  }
  else
  {
    v6 = fsqrt(v5 + 1.0);
    v7 = 0.5 / v6;
    v8 = v6 * 0.5;
    v9 = a2[4] - a2[1];
    v10 = a2[2] - a2[8];
    v11 = a2[9] - a2[6];
    result[3] = v8;
    v12 = v9 * v7;
    v13 = v10 * v7;
    v14 = v11 * v7;
  }
  v15 = -v14;
  v16 = -v13;
  v17 = -v12;
  *result = v15;
  result[1] = v16;
  result[2] = -v12;
  v18 = (float)((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v8 * v8)) + (float)(v17 * v17);
  if ( v18 != 0.0 )
  {
    v19 = 1.0 / fsqrt(v18);
    v20 = (float)((float)((float)(v18 * v19) * v19) + -3.0) * (float)(v19 * -0.5);
    v21 = v15 * v20;
    v22 = v16 * v20;
    v23 = v17 * v20;
    v24 = v20 * result[3];
    *result = v21;
    result[1] = v22;
    result[2] = v23;
    result[3] = v24;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CFE800  (binary VA: 0xcfe800)
// Original: sub_CFE800
// ----------------------------------------------------------------------------
int sub_CFE800(int a1, uint32_t *a2, float a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  float v7; // xmm1_4
  int v8;
  int v9;
  int v10;
  bool v11;
  int v13;

  v13 = *a2 - 1;
  v4 = v13;
  if ( v13 > 0 )
  {
    v5 = 1;
    do
    {
      v6 = (v5 + v4) >> 1;
      v7 = (float)*((uint8_t *)a2 + a2[1] + v6 + 4);
      v8 = v6 - 1;
      v9 = v6 + 1;
      if ( v7 > (float)(0.030000001f * a3) )
        v4 = v8;
      else
        v5 = v9;
    }
    while ( v4 >= v5 );
  }
  *a4 = v4;
  v10 = (int)(uintptr_t)(a2) + v4 + a2[1];
  v11 = false;
  if ( SLODWORD(a3) != COERCE_INT((float)((float)*(uint8_t *)(v10 + 4) * 33.333332f) + 0.5) )
    v11 = v13 != v4;
  return v11 && *(uint32_t *)(*(uint32_t *)a1 + *(uint32_t *)(*(uint32_t *)a1 + 8) + 8) != 0;
}

// ----------------------------------------------------------------------------
// Function: sub_CFE8C0  (binary VA: 0xcfe8c0)
// Original: sub_CFE8C0
// ----------------------------------------------------------------------------
int sub_CFE8C0(int a1, uint32_t *a2, float a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  float v7; // xmm1_4
  int v8;
  int v9;
  int v10;
  bool v11;
  int v13;

  v13 = (*a2 >> 2) - 1;
  v4 = v13;
  if ( *a2 >> 2 > 1u )
  {
    v5 = 1;
    do
    {
      v6 = (v5 + v4) >> 1;
      v7 = (float)*(int *)((char *)&a2[v6 + 1] + a2[1]);
      v8 = v6 - 1;
      v9 = v6 + 1;
      if ( v7 > a3 )
        v4 = v8;
      else
        v5 = v9;
    }
    while ( v4 >= v5 );
  }
  *a4 = v4;
  v10 = (int)(uintptr_t)(&a2[v4]) + a2[1];
  v11 = false;
  if ( SLODWORD(a3) != COERCE_INT((float)*(int *)(v10 + 4) + 0.5) )
    v11 = v13 != v4;
  return v11 && *(uint32_t *)(*(uint32_t *)a1 + *(uint32_t *)(*(uint32_t *)a1 + 8) + 8) != 0;
}

// ----------------------------------------------------------------------------
// Function: sub_CFE970  (binary VA: 0xcfe970)
// Original: sub_CFE970
// ----------------------------------------------------------------------------
int sub_CFE970(int a1, uint32_t *a2, float a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  float v7; // xmm1_4
  int v8;
  int v9;
  int v10;
  bool v11;
  int v13;

  v13 = (*a2 >> 1) - 1;
  v4 = v13;
  if ( *a2 >> 1 > 1u )
  {
    v5 = 1;
    do
    {
      v6 = (v5 + v4) >> 1;
      v7 = (float)*(uint16_t *)((char *)a2 + 2 * v6 + a2[1] + 4);
      v8 = v6 - 1;
      v9 = v6 + 1;
      if ( v7 > (float)(0.030000001f * a3) )
        v4 = v8;
      else
        v5 = v9;
    }
    while ( v4 >= v5 );
  }
  *a4 = v4;
  v10 = (int)(uintptr_t)(a2) + 2 * v4 + a2[1];
  v11 = false;
  if ( SLODWORD(a3) != COERCE_INT((float)((float)*(uint16_t *)(v10 + 4) * 33.333332f) + 0.5) )
    v11 = v13 != v4;
  return v11 && *(uint32_t *)(*(uint32_t *)a1 + *(uint32_t *)(*(uint32_t *)a1 + 8) + 8) != 0;
}

// ----------------------------------------------------------------------------
// Function: sub_CFEA30  (binary VA: 0xcfea30)
// Original: sub_CFEA30
// ----------------------------------------------------------------------------
int sub_CFEA30(uint32_t *a1, int *a2, float a3)
{
  int v4;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;

  v4 = *a1;
  v6 = v4 + *(uint32_t *)(v4 + 8) + 8;
  v7 = (uint32_t *)(a1[1] + *(uint32_t *)(a1[1] + 4) + 4 + 8 * *(uint32_t *)(v4 + *(uint32_t *)(v4 + 8) + 20));
  v8 = a1[2];
  if ( *(uint8_t *)(v8 + 13) != 0 )
  {
    if ( a3 != *(float *)(v8 + 4) )
    {
      *(float *)(v8 + 4) = a3;
      v9 = *(uint32_t *)(*a1 + *(uint32_t *)(*a1 + 8) + 12);
      switch ( v9 )
      {
        case 3:
          v13 = a1[2];
          *(uint8_t *)(v13 + 12) = sub_CFE970((int)(uintptr_t)(a1), v7, a3, (int *)(v13 + 8));
          v8 = a1[2];
          break;
        case 4:
          v12 = a1[2];
          *(uint8_t *)(v12 + 12) = sub_CFE8C0((int)(uintptr_t)(a1), v7, a3, (int *)(v12 + 8));
          break;
        case 1:
          v14 = a1[2];
          *(uint8_t *)(v14 + 12) = sub_CFE800((int)(uintptr_t)(a1), v7, a3, (int *)(v14 + 8));
          v8 = a1[2];
          break;
        default:
          v8 = a1[2];
          break;
      }
    }
    *a2 = *(uint32_t *)(v8 + 8);
    return *(uint8_t *)(a1[2] + 12);
  }
  v11 = *(uint32_t *)(v6 + 4);
  switch ( v11 )
  {
    case 1:
      return sub_CFE800((int)(uintptr_t)(a1), v7, a3, a2);
    case 3:
      return sub_CFE970((int)(uintptr_t)(a1), v7, a3, a2);
    case 4:
      return sub_CFE8C0((int)(uintptr_t)(a1), v7, a3, a2);
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_CFEB60  (binary VA: 0xcfeb60)
// Original: sub_CFEB60
// ----------------------------------------------------------------------------
void sub_CFEB60(glitch::collada::CColladaFactoryWrapperBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2071168);
  glitch::collada::CColladaFactoryWrapperBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_CFECC0  (binary VA: 0xcfecc0)
// Original: sub_CFECC0
// ----------------------------------------------------------------------------
int * sub_CFECC0(int *a1, int *a2)
{
  uint32_t *v3;
  uint32_t *src;
  unsigned int v5;
  uint32_t *v6;
  unsigned int v7;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  unsigned int v14;
  int v16;
  void *dest;

  if ( a2 == a1 )
    return a1;
  v3 = (uint32_t *)a2[1];
  src = (uint32_t *)*a2;
  dest = (void *)*a1;
  v5 = ((int)(uintptr_t)(v3) - *a2) >> 2;
  v14 = v5;
  if ( v5 > (a1[2] - *a1) >> 2 )
  {
    v11 = 0;
    v16 = 0;
    if ( v5 != 0 )
    {
      v16 = 4 * v5;
      v11 = sub_4EBDC0(4 * v5);
    }
    if ( src != v3 )
    {
      v12 = (uint32_t *)v11;
      do
      {
        if ( v12 != nullptr )
          *v12 = *src;
        ++src;
        ++v12;
      }
      while ( v3 != src );
    }
    if ( *a1 != 0 )
    {
      v13 = v11;
      gll_operator_delete_arr(*a1);
      v11 = v13;
    }
    *a1 = v11;
    v10 = v16 + v11;
    a1[2] = v10;
  }
  else
  {
    v6 = (uint32_t *)a1[1];
    v7 = (a1[1] - (int)(uintptr_t)(dest)) >> 2;
    if ( v5 > v7 )
    {
      v9 = &src[v7];
      if ( v7 != 0 )
      {
        memmove(dest, src, 4 * v7);
        v6 = (uint32_t *)a1[1];
        dest = (void *)*a1;
        v3 = (uint32_t *)a2[1];
        v9 = (uint32_t *)(*a2 + (((unsigned int)(uintptr_t)(v6) - *a1) & 0xFFFFFFFC));
      }
      if ( v3 == v9 )
      {
        v10 = (int)(uintptr_t)(dest) + 4 * v14;
      }
      else
      {
        do
        {
          if ( v6 != nullptr )
            *v6 = *v9;
          ++v9;
          ++v6;
        }
        while ( v3 != v9 );
        v10 = *a1 + 4 * v14;
      }
    }
    else
    {
      if ( v5 == 0 )
      {
        a1[1] = (int)(uintptr_t)(dest);
        return a1;
      }
      memmove(dest, src, 4 * v5);
      v10 = 4 * v14 + *a1;
    }
  }
  a1[1] = v10;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CFEE60  (binary VA: 0xcfee60)
// Original: sub_CFEE60
// ----------------------------------------------------------------------------
int sub_CFEE60(int *a1, int a2, int a3)
{
  int v3;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int result;
  uint8_t *src;
  uint8_t *dest;
  size_t n;

  v3 = *a1;
  v5 = *(uint32_t *)(*a1 - 12);
  v6 = *(uint32_t *)(*a1 - 8);
  v7 = v5 + a3 - a2;
  n = v5 - a2;
  if ( v7 <= v6 && *(int *)(v3 - 4) <= 0 )
  {
    if ( a3 != a2 && n != 0 )
    {
      src = (uint8_t *)(v3 + a2);
      dest = (uint8_t *)(a3 + v3);
      if ( n == 1 )
        *dest = *src;
      else
        memmove(dest, src, n);
      v3 = *a1;
    }
  }
  else
  {
    if ( v7 > 0x3FFFFFFC )
      sub_1900180("basic_string::_S_create");
    v8 = v5 + a3 - a2;
    if ( v7 > v6 )
    {
      v8 = 2 * v6;
      if ( v7 >= 2 * v6 )
        v8 = v5 + a3 - a2;
    }
    if ( v8 + 29 > 0x1000 && v6 < v8 )
    {
      v9 = v8 + 4096 - (((uint16_t)v8 + 29) & 0xFFF);
      v8 = 1073741820;
      if ( v9 <= 0x3FFFFFFC )
        v8 = v9;
    }
    v10 = sub_4EBDC0(v8 + 13);
    *(uint32_t *)(v10 + 4) = v8;
    *(uint32_t *)(v10 + 8) = 0;
    v3 = v10 + 12;
    if ( n != 0 )
    {
      if ( n == 1 )
        *(uint8_t *)(v3 + a3) = *(uint8_t *)(*a1 + a2);
      else
        memcpy((void *)(v3 + a3), (const void *)(*a1 + a2), n);
    }
    v11 = *a1;
    if ( (int *)(*a1 - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr(v11 - 12);
    }
    *a1 = v3;
  }
  result = v3 - 12;
  if ( (int *)(v3 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v3 - 4) = 0;
    *(uint32_t *)(v3 - 12) = v7;
    *(uint8_t *)(v3 + v7) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CFF030  (binary VA: 0xcff030)
// Original: sub_CFF030
// ----------------------------------------------------------------------------
void sub_CFF030(int a1, uint32_t *a2)
{
  uint32_t *src;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  char *dest;
  char *v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v18;
  int v19;
  int v20;
  char *v21;
  size_t v22;

  src = *(uint32_t **)(a1 + 4);
  if ( src == *(uint32_t **)(a1 + 8) )
  {
    v7 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    v22 = 4;
    if ( v7 != 0 )
    {
      v22 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v16 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v16 = -4;
        v22 = v16;
      }
    }
    v20 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    dest = (char *)opNew(v22);
    v9 = &dest[4 * v20];
    if ( v9 != nullptr )
      *(uint32_t *)v9 = *a2;
    v10 = 0;
    v11 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    if ( v11 != 0 )
    {
      v18 = 4 * v11;
      memmove(dest, *(const void **)a1, 4 * v11);
      v10 = v18;
    }
    v12 = &dest[v10 + 4];
    v13 = 0;
    v14 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
    if ( v14 != 0 )
    {
      v19 = 4 * v14;
      v21 = v12;
      memmove(v12, src, 4 * v14);
      v12 = v21;
      v13 = v19;
    }
    v15 = &v12[v13];
    if ( *(uint32_t *)a1 != 0 )
      opDelete(*(void **)a1);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v15);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v22]);
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *src = *(src - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 4;
    v5 = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( v5 != 0 )
      memmove((void *)(v4 - 4 * v5), src, 4 * v5);
    *src = v6;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_CFF380  (binary VA: 0xcff380)
// Original: sub_CFF380
// ----------------------------------------------------------------------------
int sub_CFF380(int *a1)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  int v5;

  v1 = *a1;
  v2 = a1[1];
  v3 = *(uint32_t *)(v1 + *(uint32_t *)(v1 + 8) + 12);
  v4 = (int *)(v2 + *(uint32_t *)(v2 + 4) + 4 + 8 * *(uint32_t *)(v1 + *(uint32_t *)(v1 + 8) + 20));
  v5 = *v4;
  switch ( v3 )
  {
    case 1:
      return (int)(float)((float)*((uint8_t *)v4 + v4[1] + v5 + 3) * 33.333332f)
           - (int)(float)((float)*((uint8_t *)v4 + v4[1] + 4) * 33.333332f);
    case 3:
      return (int)(float)((float)*(uint16_t *)((char *)v4 + 2 * (v5 >> 1) + v4[1] + 2) * 33.333332f)
           - (int)(float)((float)*(uint16_t *)((char *)v4 + v4[1] + 4) * 33.333332f);
    case 4:
      return *(int *)((char *)&v4[v5 >> 2] + v4[1]) - *(int *)((char *)v4 + v4[1] + 4);
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_CFF4B0  (binary VA: 0xcff4b0)
// Original: sub_CFF4B0
// ----------------------------------------------------------------------------
int * sub_CFF4B0(uint32_t *a1, unsigned int a2)
{
  uint8_t *v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  size_t n;
  int *result;
  int *v11;
  unsigned int v12;
  uint8_t *src;

  v2 = (uint8_t *)*a1;
  v4 = *(uint32_t *)(*a1 - 12);
  v5 = *(uint32_t *)(*a1 - 8);
  if ( a2 >= *((uint32_t *)v2 - 3) )
    v4 = a2;
  if ( v4 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v5 < v4 )
  {
    if ( v4 < 2 * v5 )
      v4 = 2 * v5;
    if ( v4 + 29 > 0x1000 && v4 > v5 )
    {
      v12 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
      v4 = 1073741820;
      if ( v12 <= 0x3FFFFFFC )
        v4 = v12;
    }
  }
  src = v2;
  v6 = sub_4EBDC0(v4 + 13);
  *(uint32_t *)(v6 + 4) = v4;
  *(uint32_t *)(v6 + 8) = 0;
  v7 = (int *)v6;
  v8 = 0;
  n = *((uint32_t *)src - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      *((uint8_t *)v7 + 12) = *src;
    else
      memcpy(v7 + 3, src, n);
    v8 = *((uint32_t *)src - 3);
  }
  result = (int *)(&dword_20D3E6C);
  if ( v7 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    v7[2] = 0;
    *v7 = v8;
    *((uint8_t *)v7 + v8 + 12) = 0;
  }
  v11 = (int *)(*a1 - 12);
  if ( v11 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    result = (int *)__sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (int *)gll_operator_delete_arr((int)(uintptr_t)(v11));
  }
  *a1 = (uint32_t)(uintptr_t)(v7 + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CFF610  (binary VA: 0xcff610)
// Original: sub_CFF610
// ----------------------------------------------------------------------------
int sub_CFF610(int a1)
{
  unsigned int v1;
  unsigned int v3;
  unsigned int v4;
  int v5;
  size_t v6;

  v1 = *(uint32_t *)a1;
  v3 = *(uint32_t *)(a1 + 4);
  if ( v1 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v1 > v3 && v1 < 2 * v3 )
    v1 = 2 * v3;
  if ( v1 + 29 > 0x1000 && v3 < v1 )
  {
    v4 = v1 + 4096 - (((uint16_t)v1 + 29) & 0xFFF);
    v1 = 1073741820;
    if ( v4 <= 0x3FFFFFFC )
      v1 = v4;
  }
  v5 = sub_4EBDC0(v1 + 13);
  *(uint32_t *)(v5 + 4) = v1;
  *(uint32_t *)(v5 + 8) = 0;
  v6 = 0;
  if ( *(uint32_t *)a1 != 0 )
  {
    if ( *(uint32_t *)a1 == 1 )
      *(uint8_t *)(v5 + 12) = *(uint8_t *)(a1 + 12);
    else
      memcpy((void *)(v5 + 12), (const void *)(a1 + 12), *(uint32_t *)a1);
    v6 = *(uint32_t *)a1;
  }
  if ( (int *)v5 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v5 + 8) = 0;
    *(uint32_t *)v5 = v6;
    *(uint8_t *)(v5 + v6 + 12) = 0;
  }
  return v5 + 12;
}

// ----------------------------------------------------------------------------
// Function: sub_CFF720  (binary VA: 0xcff720)
// Original: sub_CFF720
// ----------------------------------------------------------------------------
int sub_CFF720(int a1, unsigned int a2, uint32_t *a3)
{
  int v3;
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int v7;
  bool v8; // di
  int v10;
  unsigned int *v11;
  unsigned int v12;
  unsigned int v13;
  uint32_t *v14;
  unsigned int *v15;
  uint32_t *v16;

  v3 = *(uint32_t *)(a1 - 4);
  if ( (*(uint32_t *)(v3 + 20) & 0xFFFFFFFE) == 0
    || (v4 = (unsigned int *)((*(uint32_t *)(v3 + 20) & 0xFFFFFFFE) - 20), (*(uint32_t *)(v3 + 20) & 0xFFFFFFFE) == 0x14) )
  {
    v4 = *(unsigned int **)(a1 - 4);
    v8 = true;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v7 = *v4;
    v8 = *v4 > a2;
    if ( *v4 <= a2 )
      break;
    v5 = v4[6];
    if ( v5 == 0 )
      goto LABEL_9;
LABEL_5:
    v6 = (unsigned int *)(v5 - 20);
    if ( v6 == nullptr )
      goto LABEL_9;
    v4 = v6;
  }
  v5 = v4[7];
  if ( v5 != 0 )
    goto LABEL_5;
LABEL_9:
  v15 = v4;
  if ( *v4 <= a2 )
    goto LABEL_10;
LABEL_13:
  v10 = *(uint32_t *)(v3 + 24);
  v11 = nullptr;
  if ( v10 != 0 )
    v11 = (unsigned int *)(v10 - 20);
  if ( v4 == v11 )
  {
    *a3 = 0;
    a3[1] = (uint32_t)(uintptr_t)(v4 + 5);
    return 1;
  }
  else
  {
    v12 = v4[5];
    v16 = v4 + 5;
    if ( (v12 & 1) != 0 || v16 != (uint32_t *)(*(uint32_t *)(v12 & 0xFFFFFFFE) & 0xFFFFFFFE) )
    {
      v13 = v4[6];
      if ( v13 != 0 )
      {
        while ( *(uint32_t *)(v13 + 8) != 0 )
          v13 = *(uint32_t *)(v13 + 8);
      }
      else
      {
        v14 = (uint32_t *)(v12 & 0xFFFFFFFE);
        v13 = (unsigned int)(uintptr_t)(v14);
        if ( (uint32_t *)v14[1] == v16 )
        {
          while ( 1 )
          {
            v13 = *v14 & 0xFFFFFFFE;
            if ( v14 != *(uint32_t **)(v13 + 4) )
              break;
            v14 = (uint32_t *)(*v14 & 0xFFFFFFFE);
          }
        }
      }
    }
    else
    {
      v13 = v4[7];
    }
    if ( v13 != 0 )
    {
      v15 = (unsigned int *)(v13 - 20);
      if ( a2 > *(uint32_t *)(v13 - 20) )
        goto LABEL_23;
LABEL_11:
      a3[1] = (uint32_t)(uintptr_t)(v15 + 5);
      return 0;
    }
    else
    {
      v7 = 1179403647;
      v15 = nullptr;
LABEL_10:
      if ( a2 <= v7 )
        goto LABEL_11;
LABEL_23:
      *a3 = !v8;
      a3[1] = (uint32_t)(uintptr_t)(v4 + 5);
      return 1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_CFFC10  (binary VA: 0xcffc10)
// Original: sub_CFFC10
// ----------------------------------------------------------------------------
uint32_t * sub_CFFC10(uint32_t *result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6; // xmm0_4
  int v7; // xmm0_4
  int v8;

  v1 = result[3];
  v8 = result[11];
  v2 = result[1];
  result[1] = result[4];
  v3 = result[2];
  result[2] = result[8];
  v4 = result[6];
  v5 = result[7];
  result[3] = result[12];
  result[4] = v2;
  v6 = result[9];
  result[8] = v3;
  result[6] = v6;
  result[9] = v4;
  v7 = result[13];
  result[12] = v1;
  result[7] = v7;
  result[13] = v5;
  result[11] = result[14];
  result[14] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D01C90  (binary VA: 0xd01c90)
// Original: sub_D01C90
// ----------------------------------------------------------------------------
char * sub_D01C90(char *a1, char *a2, char *a3)
{
  char *v4;
  char *v5;
  int v6;
  bool v7;
  volatile int32_t *v8;
  int v9;
  int v10;
  volatile int32_t *v11;

  v4 = a3;
  if ( a2 != a1 )
  {
    v5 = a1;
    do
    {
      if ( v4 != nullptr )
      {
        v6 = *(uint32_t *)v5;
        v7 = *(uint32_t *)v5 == 0;
        *(uint32_t *)v4 = *(uint32_t *)v5;
        if ( !v7 )
          sub_8B1B00((volatile int32_t *)(v6 + 4));
        v8 = *((volatile int32_t **)v5 + 1);
        v9 = v5 - a1;
        v10 = v4 - a3;
        *((uint32_t *)v4 + 1) = (uint32_t)(uintptr_t)(v8);
        if ( v8 != nullptr )
        {
          sub_8B1B00(v8);
          v9 = v5 - a1;
          v10 = v4 - a3;
        }
        v11 = *(volatile int32_t **)&a1[v9 + 8];
        *(uint32_t *)&a3[v10 + 8] = (uint32_t)(uintptr_t)(v11);
        if ( v11 != nullptr )
          sub_8B1B00(v11);
      }
      v5 += 12;
      v4 += 12;
    }
    while ( v5 != a2 );
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_D01DE0  (binary VA: 0xd01de0)
// Original: sub_D01DE0
// ----------------------------------------------------------------------------
int * sub_D01DE0(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  char v14;

  v7 = a2 + 4;
  v14 = 1;
  v13 = v7;
  if ( a3 == 0 && a4 != v7 )
    v14 = *a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    *(uint32_t *)(v8 + 16) = *a5;
    v9 = a5[1];
    *(uint32_t *)(v8 + 20) = v9;
    if ( v9 != 0 )
    {
      v11 = v8;
      sub_8B1B00((volatile int32_t *)(v9 + 4));
      v8 = v11;
    }
  }
  v12 = v8;
  sub_1904970(v14, v8, a4, v13);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D01FD0  (binary VA: 0xd01fd0)
// Original: sub_D01FD0
// ----------------------------------------------------------------------------
int sub_D01FD0(int a1, uint32_t *a2, unsigned int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  char v8; // bp
  unsigned int v9;
  char v11; // bp
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19[8];
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

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v18 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v17 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v18 != v17 )
      v11 = v17[4] > v6;
    v12 = opNew(0x18u);
    v13 = v12;
    if ( v12 != -16 )
    {
      *(uint32_t *)(v12 + 16) = *a3;
      v14 = a3[1];
      *(uint32_t *)(v13 + 20) = v14;
      if ( v14 != 0 )
        sub_8B1B00((volatile int32_t *)(v14 + 4));
    }
    sub_1904970(v11, v13, v17, v18);
    *(uint32_t *)a1 = v13;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_D01DE0(v19, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v15 = v19[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v15;
  }
  else
  {
    v17 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D039D0  (binary VA: 0xd039d0)
// Original: sub_D039D0
// ----------------------------------------------------------------------------
int sub_D039D0(volatile int32_t ***a1, volatile int32_t **a2, volatile int32_t **a3)
{
  volatile int32_t **v3;
  volatile int32_t ***v4;
  volatile int32_t **v5;
  volatile int32_t **v6;
  volatile int32_t *v7;
  volatile int32_t **v8;
  volatile int32_t **v9;
  char *v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  bool v13;
  volatile int32_t **v14;
  volatile int32_t *v15;
  int result;
  volatile int32_t **v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  int v21;
  volatile int32_t **v22;
  volatile int32_t *v23;
  volatile int32_t **v24;
  volatile int32_t **v25;
  volatile int32_t *v26;
  volatile int32_t **v27;
  volatile int32_t **v28;
  volatile int32_t **v29;
  volatile int32_t **v30;
  volatile int32_t *v31;
  volatile int32_t **v32;
  int v33;
  volatile int32_t **v34;
  int v35;
  volatile int32_t **v36;
  int v37;
  int v38;
  int v39;
  int v40;
  volatile int32_t **v41;
  volatile int32_t ***v42;
  volatile int32_t ***v43;
  size_t v44;
  int v45;
  volatile int32_t *v46;
  volatile int32_t ***v47;
  volatile int32_t *v49;

  v3 = a2;
  v4 = a1;
  v5 = a1[1];
  if ( v5 != a1[2] )
  {
    v6 = nullptr;
    if ( v5 != nullptr )
    {
      v7 = *(v5 - 2);
      *v5 = v7;
      if ( v7 != nullptr )
      {
        v34 = v5;
        sub_8B1B00(v7 + 1);
        v5 = v34;
      }
      v5[1] = *(v5 - 1);
      v6 = v4[1];
    }
    v8 = v6 + 2;
    v4[1] = v8;
    v46 = *a3;
    if ( *a3 != nullptr )
    {
      sub_8B1B00(*a3 + 1);
      v8 = v4[1];
    }
    v9 = v8 - 4;
    v49 = a3[1];
    v39 = ((char *)(v8 - 4) - (char *)a2) >> 3;
    if ( v39 > 0 )
    {
      v44 = (size_t)(v8 - 4);
      v41 = v8 - 6;
      do
      {
        v10 = (char *)v9 - v44;
        v11 = *(volatile int32_t **)((char *)v41 + (uint32_t)(uintptr_t)(v9) - v44);
        if ( v11 != nullptr )
          sub_8B1B00(v11 + 1);
        v12 = *v9;
        *v9 = v11;
        if ( v12 != nullptr )
          sub_5459C0(v12);
        v9 -= 2;
        v13 = v39-- == 1;
        *(uint32_t *)&v10[v44 + 4] = (uint32_t)(uintptr_t)(*(volatile int32_t **)((char *)v41 + (uint32_t)(uintptr_t)(v10) + 4));
      }
      while ( !v13 );
    }
    if ( v46 != nullptr )
      sub_8B1B00(v46 + 1);
    v14 = a2;
    v15 = *a2;
    *a2 = v46;
    if ( v15 != nullptr )
    {
      sub_5459C0(v15);
      v14 = a2;
    }
    result = (int)(uintptr_t)(v46);
    v14[1] = v49;
    if ( v46 != nullptr )
      return sub_5459C0(v46);
    return result;
  }
  v17 = *a1;
  v18 = ((char *)v5 - (char *)v17) >> 3;
  if ( v18 != 0 )
  {
    v19 = 2 * v18;
    if ( v18 > 2 * v18 || v19 > 0x1FFFFFFF )
    {
      v45 = -8;
      v20 = ((char *)a2 - (char *)v17) >> 3;
    }
    else
    {
      v45 = 16 * v18;
      v20 = ((char *)a2 - (char *)v17) >> 3;
      if ( v19 == 0 )
      {
        v21 = 8;
        v40 = 0;
        goto LABEL_26;
      }
    }
  }
  else
  {
    v45 = 8;
    v20 = ((char *)a2 - (char *)v17) >> 3;
  }
  v35 = v20;
  v40 = sub_4EBDC0(v45);
  v20 = v35;
  v21 = v40 + 8;
LABEL_26:
  v22 = (volatile int32_t **)(v40 + 8 * v20);
  if ( v22 != nullptr )
  {
    v23 = *a3;
    v13 = *a3 == nullptr;
    *v22 = *a3;
    if ( !v13 )
    {
      v37 = v21;
      v36 = v22;
      sub_8B1B00(v23 + 1);
      v22 = v36;
      v21 = v37;
    }
    v22[1] = a3[1];
  }
  v24 = *v4;
  if ( a2 != *v4 )
  {
    v47 = v4;
    v25 = (volatile int32_t **)v40;
    do
    {
      if ( v25 != nullptr )
      {
        v26 = *v24;
        v13 = *v24 == nullptr;
        *v25 = *v24;
        if ( !v13 )
          sub_8B1B00(v26 + 1);
        v25[1] = v24[1];
      }
      v24 += 2;
      v25 += 2;
    }
    while ( a2 != v24 );
    v27 = v25;
    v4 = v47;
    v21 = (int)(uintptr_t)(v27 + 2);
  }
  v28 = v4[1];
  if ( a2 != v28 )
  {
    v42 = v4;
    v29 = v4[1];
    v30 = (volatile int32_t **)v21;
    do
    {
      if ( v30 != nullptr )
      {
        v31 = *v3;
        v13 = *v3 == nullptr;
        *v30 = *v3;
        if ( !v13 )
          sub_8B1B00(v31 + 1);
        v30[1] = v3[1];
      }
      v3 += 2;
      v30 += 2;
    }
    while ( v29 != v3 );
    v4 = v42;
    v21 = (int)(uintptr_t)(v30);
    v28 = v42[1];
  }
  v32 = *v4;
  if ( v28 != *v4 )
  {
    v43 = v4;
    v33 = v21;
    do
    {
      if ( *v32 != nullptr )
        sub_5459C0(*v32);
      v32 += 2;
    }
    while ( v28 != v32 );
    v21 = v33;
    v4 = v43;
    v32 = *v43;
  }
  if ( v32 != nullptr )
  {
    v38 = v21;
    gll_operator_delete_arr((int)(uintptr_t)(v32));
    v21 = v38;
  }
  v4[1] = (volatile int32_t **)v21;
  *v4 = (volatile int32_t **)v40;
  v4[2] = (volatile int32_t **)(v40 + v45);
  return v40 + v45;
}

// ----------------------------------------------------------------------------
// Function: sub_D03D90  (binary VA: 0xd03d90)
// Original: sub_D03D90
// ----------------------------------------------------------------------------
int sub_D03D90()
{
  int result;

  if ( (*(uint8_t **)unk_20DFA58) != 0 )
    sub_5459C0((*(uint8_t **)unk_20DFA58));
  if ( (*(uint8_t **)unk_20DFA54) != 0 )
    sub_5459C0((*(uint8_t **)unk_20DFA54));
  result = (int)glitch::collada::ps::IParticleSystemBaker::StaticIndexBuffers[0];
  if ( glitch::collada::ps::IParticleSystemBaker::StaticIndexBuffers[0] != 0 )
    return sub_5459C0((void *)glitch::collada::ps::IParticleSystemBaker::StaticIndexBuffers[0]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D043C0  (binary VA: 0xd043c0)
// Original: sub_D043C0
// ----------------------------------------------------------------------------
int sub_D043C0(int a1)
{
  uint32_t *v1;
  int v2;
  int v3;
  char *v4;
  volatile int32_t *v5;
  char *v6;
  volatile int32_t *v7;
  uint32_t *v9;

  v1 = *(uint32_t **)(a1 + 16);
  if ( (int)v1[14] > 0 )
  {
    v2 = 0;
    v3 = 0;
    v9 = v1 + 14;
    do
    {
      v4 = (char *)v9 + v1[15] + v2 + 4;
      v5 = *((volatile int32_t **)v4 + 12);
      *((uint32_t *)v4 + 12) = 0;
      if ( v5 != nullptr )
        sub_5459C0(v5);
      v6 = (char *)v9 + v1[15] + v2 + 4;
      v7 = *((volatile int32_t **)v6 + 13);
      *((uint32_t *)v6 + 13) = 0;
      if ( v7 != nullptr )
        sub_5459C0(v7);
      ++v3;
      v2 += 56;
    }
    while ( v3 < v1[14] );
    v1 = *(uint32_t **)(a1 + 16);
  }
  if ( v1 != nullptr )
    opDeleteArray(v1);
  *(uint32_t *)(a1 + 16) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D04C00  (binary VA: 0xd04c00)
// Original: sub_D04C00
// ----------------------------------------------------------------------------
int sub_D04C00(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, char a8)
{
  int v8;
  int v9;
  volatile int32_t *v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  int v13;
  int v14;
  volatile int32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint16_t v26; // di
  uint16_t v27; // si
  glitch::video::CVertexStreams::Self *v28;
  glitch::video::IBuffer::Self **v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  glitch::video::IBuffer::Self *v34;
  volatile int32_t *v35;
  int v36;
  unsigned int v37;
  volatile int32_t *v38;
  uint8_t *v39;
  int v40;
  unsigned int v41;
  glitch::video::CMaterialVertexAttributeMap::Self *v42;
  glitch::video::CMaterialVertexAttributeMap::Self *v43;
  glitch::video::CMaterialVertexAttributeMap::Self *v44;
  glitch::video::CVertexStreams::Self *v45;
  int v46;
  unsigned int v47;
  glitch::video::IBuffer::Self *v48;
  void *v50;
  volatile int32_t *v51;
  glitch::video::IBuffer::Self *v52;
  int v53;
  uint8_t *v54;
  uint8_t *v55;
  void *v56;
  typedef glitch::video::IBuffer::Self *_g4_t_v57;
  typedef glitch::video::IBuffer::Self *_g4_t_v58;
  typedef glitch::video::IBuffer::Self *_g4_t_v59;
  typedef glitch::video::IBuffer::Self *_g4_t_v60;
  typedef volatile int32_t *_g4_t_v61;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v62;
  typedef volatile int32_t *_g4_t_v63;
  typedef char _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v68;
  typedef uint8_t *_g4_t_v69;
  typedef char *_g4_t_v70;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint16_t _g4_t_v74;
  typedef size_t _g4_t_v75;
  typedef unsigned int _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef uint8_t *_g4_t_v78;
  typedef unsigned int _g4_t_v80;
  typedef unsigned int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef unsigned int _g4_t_v83;
  typedef glitch::video::IBuffer::Self *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef uint16_t _g4_t_v90;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v91;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v92;
  typedef volatile int32_t *_g4_t_v93;
  typedef volatile int32_t *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef volatile int32_t *_g4_t_v96;
  typedef volatile int32_t *_g4_t_v97;
  typedef uint32_t _g4_t_v98[4];
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef uint32_t _g4_t_v101[18];
  typedef int _g4_t_v102;
  typedef glitch::video::CVertexStreams::Self **_g4_t_v103;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v57)) > _g4_s0 ? (0u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v58)) > _g4_s1 ? (0u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v59)) > _g4_s2 ? (0u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v60)) > _g4_s3 ? (0u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v61)) > _g4_s4 ? (4u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v62)) > _g4_s5 ? (4u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v63)) > _g4_s6 ? (4u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (11u + sizeof(_g4_t_v64)) > _g4_s7 ? (11u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v65)) > _g4_s8 ? (12u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v66)) > _g4_s9 ? (16u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v67)) > _g4_s10 ? (20u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v68)) > _g4_s11 ? (24u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v69)) > _g4_s12 ? (28u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v70)) > _g4_s13 ? (32u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v71)) > _g4_s14 ? (36u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v72)) > _g4_s15 ? (44u + sizeof(_g4_t_v72)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v74)) > _g4_s16 ? (52u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v75)) > _g4_s17 ? (52u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v76)) > _g4_s18 ? (56u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v77)) > _g4_s19 ? (60u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v78)) > _g4_s20 ? (60u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v80)) > _g4_s21 ? (64u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v81)) > _g4_s22 ? (64u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v82)) > _g4_s23 ? (68u + sizeof(_g4_t_v82)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v83)) > _g4_s24 ? (68u + sizeof(_g4_t_v83)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v84)) > _g4_s25 ? (68u + sizeof(_g4_t_v84)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v85)) > _g4_s26 ? (72u + sizeof(_g4_t_v85)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v86)) > _g4_s27 ? (72u + sizeof(_g4_t_v86)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v87)) > _g4_s28 ? (76u + sizeof(_g4_t_v87)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v88)) > _g4_s29 ? (76u + sizeof(_g4_t_v88)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v89)) > _g4_s30 ? (76u + sizeof(_g4_t_v89)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v90)) > _g4_s31 ? (76u + sizeof(_g4_t_v90)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v91)) > _g4_s32 ? (80u + sizeof(_g4_t_v91)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v92)) > _g4_s33 ? (96u + sizeof(_g4_t_v92)) : _g4_s33,
    _g4_s35 = (112u + sizeof(_g4_t_v93)) > _g4_s34 ? (112u + sizeof(_g4_t_v93)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v94)) > _g4_s35 ? (128u + sizeof(_g4_t_v94)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v95)) > _g4_s36 ? (132u + sizeof(_g4_t_v95)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v96)) > _g4_s37 ? (136u + sizeof(_g4_t_v96)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v97)) > _g4_s38 ? (140u + sizeof(_g4_t_v97)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v98)) > _g4_s39 ? (144u + sizeof(_g4_t_v98)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v99)) > _g4_s40 ? (160u + sizeof(_g4_t_v99)) : _g4_s40,
    _g4_s42 = (161u + sizeof(_g4_t_v100)) > _g4_s41 ? (161u + sizeof(_g4_t_v100)) : _g4_s41,
    _g4_s43 = (164u + sizeof(_g4_t_v101)) > _g4_s42 ? (164u + sizeof(_g4_t_v101)) : _g4_s42,
    _g4_s44 = (236u + sizeof(_g4_t_v102)) > _g4_s43 ? (236u + sizeof(_g4_t_v102)) : _g4_s43,
    _g4_s45 = (240u + sizeof(_g4_t_v103)) > _g4_s44 ? (240u + sizeof(_g4_t_v103)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 0u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 0u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 11u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 52u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 52u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 56u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 60u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 64u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 64u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 68u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 68u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 68u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 72u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 72u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 76u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 76u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 76u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 76u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 80u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 96u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 112u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 128u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 132u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 136u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 140u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 144u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 160u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 161u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 164u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 236u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 240u);

  v101[17] = (uint32_t)(uintptr_t)(&a3);
  v87 = a3;
  v85 = a4;
  v67 = a5;
  v66 = a6;
  v65 = a7;
  v64 = a8;
  v8 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 8) + 4) + 4);
  v9 = opNew(0x2Cu);
  *(uint32_t *)(v9 + 4) = 0;
  *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_2081E88);
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self *)(v9 + 8), v85 | v67);
  *(uint32_t *)(v9 + 12) = 0;
  *(uint32_t *)(v9 + 16) = 0;
  *(uint32_t *)(v9 + 20) = 0;
  *(uint32_t *)(v9 + 24) = 0;
  *(uint32_t *)(v9 + 28) = 0;
  *(uint16_t *)(v9 + 32) = 255;
  *(uint16_t *)(v9 + 34) = 6;
  *(uint32_t *)(v9 + 36) = 0;
  *(uint8_t *)(v9 + 40) = 1;
  *(uint8_t *)(v9 + 41) = 1;
  sub_8B1B00((volatile int32_t *)(v9 + 4));
  v10 = *(volatile int32_t **)(a2 + 12);
  *(uint32_t *)(a2 + 12) = v9;
  if ( v10 != nullptr )
  {
    sub_5459C0(v10);
    v9 = *(uint32_t *)(a2 + 12);
  }
  v68 = *(glitch::video::CVertexStreams::Self **)(v9 + 8);
  v98[0] = 0;
  *((uint32_t *)v68 + 2) = v66;
  v98[2] = 0;
  v98[3] = 0;
  v99 = 1;
  v100 = 1;
  v98[1] = 4 * (*v87 == 4);
  if ( v85 != 0 )
  {
    (*(void (**)(volatile int32_t **))(*(uint32_t *)v8 + 88))(&v94);
    v51 = v94;
    if ( v94 != nullptr )
    {
      v63 = v94;
      sub_8B1B00(v94 + 1);
      v51 = v63;
    }
    v52 = *(glitch::video::IBuffer::Self **)a2;
    *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v51);
    if ( v52 != nullptr )
      sub_5459C0((volatile int32_t *)v52);
    if ( v94 != nullptr )
      sub_5459C0(v94);
  }
  v98[0] = 1;
  (*(void (**)(volatile int32_t **, int, uint32_t *))(*(uint32_t *)v8 + 88))(&v93, v8, v98);
  v11 = v93;
  if ( v93 != nullptr )
    sub_8B1B00(v93 + 1);
  v12 = *(volatile int32_t **)(a2 + 4);
  *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v11);
  if ( v12 != nullptr )
    sub_5459C0(v12);
  if ( v93 != nullptr )
    sub_5459C0(v93);
  v13 = *(uint32_t *)(a2 + 4);
  v14 = *(uint32_t *)(a2 + 12);
  if ( v13 != 0 )
    sub_8B1B00((volatile int32_t *)(v13 + 4));
  v15 = *(volatile int32_t **)(v14 + 12);
  *(uint32_t *)(v14 + 12) = v13;
  if ( v15 != nullptr )
    sub_5459C0(v15);
  v16 = *(uint32_t *)(a2 + 12);
  *(uint16_t *)(v16 + 32) = 1;
  *(uint32_t *)(v16 + 20) = 0;
  *(uint32_t *)(v16 + 24) = 0;
  *(uint32_t *)(v16 + 28) = 0;
  v82 = *(uint32_t *)(a2 + 12);
  memset(v101, 0, 0x3Cu);
  v17 = *(uint32_t **)(a2 + 24);
  v88 = *(uint32_t **)(a2 + 28);
  if ( v17 != v88 )
  {
    do
    {
      while ( 1 )
      {
        v18 = *a1 + 36 * *v17;
        v19 = *(int **)(v18 + 4);
        if ( v19 != nullptr )
        {
          v20 = *(uint32_t *)(v18 + 8);
          if ( v20 == 0 || *(uint32_t *)(v20 + 36) == 0 )
          {
            v21 = *v19;
            v103 = (glitch::video::CVertexStreams::Self **)v17[1];
            (*(void (**)(volatile int32_t **, int *))(v21 + 20))(&v96, v19);
            if ( v96 != nullptr )
              sub_5459C0(v96);
            (*(void (**)(volatile int32_t **, int *, uint32_t))(*v19 + 20))(&v97, v19, v17[1]);
            v22 = *((uint32_t *)v97 + 2);
            sub_5459C0(v97);
            v23 = *(uint32_t *)(v22 + 4) & v85;
            if ( v23 != 0 )
              break;
          }
        }
        v17 += 2;
        if ( v88 == v17 )
          goto LABEL_28;
      }
      v24 = v22 + 20;
      v77 = v17;
      do
      {
        v25 = *(uint16_t *)(v24 + 8);
        v26 = *(uint16_t *)(v24 + 12);
        v24 += 16;
        v27 = *((uint16_t *)v101 + v25);
        if ( v26 > v27 )
          v27 = v26;
        *((uint16_t *)v101 + v25) = v27;
        v23 &= ~(1 << v25);
      }
      while ( v23 != 0 );
      v17 = v77 + 2;
    }
    while ( v88 != v77 + 2 );
  }
LABEL_28:
  v28 = *(glitch::video::CVertexStreams::Self **)(v82 + 8);
  v71 = v28;
  v86 = *((uint32_t *)v28 + 1) & v85;
  if ( v86 == 0 )
  {
    v41 = 0;
    goto LABEL_51;
  }
  v76 = 4;
  v70 = (char *)v28 + 20;
  v29 = (glitch::video::IBuffer::Self **)((char *)v28 + 20);
  v72 = 0;
  v78 = nullptr;
  v69 = nullptr;
  v83 = 0;
  do
  {
    while ( 1 )
    {
      v31 = *((uint16_t *)v29 + 4);
      v89 = v31;
      v32 = 1 << v31;
      if ( ((1 << v31) & v86) != 0 )
        break;
      v30 = v72;
LABEL_31:
      v29 += 4;
      if ( v86 == 0 )
        goto LABEL_47;
    }
    v74 = glitch::video::detail::SVertexAttributeTypeInspection::Defaults[2 * v31];
    v33 = 4;
    v80 = *((uint8_t *)&glitch::video::detail::SVertexAttributeTypeInspection::ValueTypeSize + v74);
    if ( v80 >= 4 )
      v33 = *((uint8_t *)&glitch::video::detail::SVertexAttributeTypeInspection::ValueTypeSize + v74);
    v90 = *((uint16_t *)v101 + v89);
    v84 = (glitch::video::IBuffer::Self *)(v83 + (v33 - v83 % v33) % v33);
    v34 = *(glitch::video::IBuffer::Self **)a2;
    if ( *(uint32_t *)a2 != 0 )
    {
      v57 = *(glitch::video::IBuffer::Self **)a2;
      v61 = (volatile int32_t *)((char *)v34 + 4);
      sub_8B1B00((volatile int32_t *)v34 + 1);
      sub_8B1B00(v61);
      v34 = v57;
    }
    v35 = (volatile int32_t *)*v29;
    *v29 = v34;
    if ( v35 != nullptr )
    {
      v58 = v34;
      sub_5459C0(v35);
      v34 = v58;
    }
    v29[1] = v84;
    *((uint16_t *)v29 + 5) = v74;
    *((uint16_t *)v29 + 6) = v90;
    *((uint16_t *)v29 + 7) = 0;
    v59 = v34;
    v36 = ~v32;
    glitch::video::CVertexStreams::updateHomogeneityInternal(v71, false);
    v37 = v80;
    if ( v76 >= v80 )
      v37 = v76;
    v83 = (unsigned int)(uintptr_t)(v84) + v80 * v90;
    v86 &= v36;
    v76 = v37;
    v38 = (volatile int32_t *)v59;
    if ( v69 == v78 )
    {
      v81 = (unsigned int)(uintptr_t)(&v69[-v72]);
      if ( &v69[-v72] == (uint8_t *)-1 )
        sub_1900180("vector::_M_insert_aux");
      v75 = 1;
      if ( v81 != 0 )
      {
        v53 = 2 * v81;
        if ( v81 > 2 * v81 )
          v53 = -1;
        v75 = v53;
      }
      v102 = 0;
      v30 = sub_4EBDC0(v75);
      v38 = (volatile int32_t *)v59;
      v78 = (uint8_t *)(v30 + 1);
      if ( v81 + v30 != 0 )
        *(uint8_t *)(v81 + v30) = ((char *)v29 - v70) >> 4;
      if ( (uint8_t *)v72 != v69 )
      {
        v54 = (uint8_t *)v72;
        v55 = (uint8_t *)v30;
        do
        {
          if ( v55 != nullptr )
            *v55 = *v54;
          ++v54;
          ++v55;
        }
        while ( v54 != v69 );
        v78 = &v54[v30 - v72 + 1];
      }
      if ( v72 != 0 )
      {
        gll_operator_delete_arr(v72);
        v38 = (volatile int32_t *)v59;
      }
      v72 = v30;
      v69 = (uint8_t *)(v75 + v30);
    }
    else
    {
      if ( v78 != nullptr )
        *v78 = ((char *)v29 - v70) >> 4;
      ++v78;
      v30 = v72;
    }
    if ( v38 == nullptr )
      goto LABEL_31;
    v29 += 4;
    sub_5459C0(v38);
  }
  while ( v86 != 0 );
LABEL_47:
  v39 = nullptr;
  if ( v78 != (uint8_t *)v30 )
  {
    do
    {
      v40 = (uint8_t)(v39++)[v72];
      *(uint16_t *)&v70[16 * v40 + 14] = v83 + (v76 - v83 % v76) % v76;
    }
    while ( &v78[-v30] != v39 );
  }
  v41 = v66 * (v83 + (v76 - v83 % v76) % v76);
  if ( v72 != 0 )
    gll_operator_delete_arr(v72);
LABEL_51:
  v91 = v68;
  sub_8B1B00((volatile int32_t *)v68);
  v103 = &v91;
  v102 = *(uint32_t *)(a2 + 8) + 4;
  glitch::video::CMaterialVertexAttributeMap::allocate(&v92);
  v42 = v92;
  if ( v92 != nullptr )
  {
    v62 = v92;
    sub_8B1B00((volatile int32_t *)v92);
    v42 = v62;
  }
  v43 = *(glitch::video::CMaterialVertexAttributeMap::Self **)(a2 + 20);
  *(uint32_t *)(a2 + 20) = (uint32_t)(uintptr_t)(v42);
  if ( v43 != nullptr && __sync_fetch_and_add((volatile int32_t *)v43, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v43);
    gll_operator_delete_arr((int)(uintptr_t)(v43));
  }
  v44 = v92;
  if ( v92 != nullptr && __sync_fetch_and_add((volatile int32_t *)v92, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v44);
    gll_operator_delete_arr((int)(uintptr_t)(v44));
  }
  v45 = v91;
  if ( v91 != nullptr && __sync_fetch_and_add((volatile int32_t *)v91, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v45);
    gll_operator_delete_arr((int)(uintptr_t)(v45));
  }
  v46 = a2;
  v47 = 2 * v65;
  if ( *(uint32_t *)a2 != 0 )
  {
    glitch::video::IBuffer::reset(*(glitch::video::IBuffer::Self **)a2, v41, nullptr, true);
    v46 = a2;
  }
  glitch::video::IBuffer::reset(*(glitch::video::IBuffer::Self **)(v46 + 4), v47, nullptr, true);
  if ( v64 != 0 )
  {
    if ( v41 != 0 && *(uint32_t *)a2 != 0 )
    {
      v60 = *(glitch::video::IBuffer::Self **)a2;
      v102 = 0;
      v56 = (void *)opNewArray(v41);
      glitch::video::IBuffer::reset(v60, v41, v56, true);
      v48 = *(glitch::video::IBuffer::Self **)(a2 + 4);
      if ( v47 != 0 )
        goto LABEL_70;
    }
    else
    {
      v48 = *(glitch::video::IBuffer::Self **)(a2 + 4);
      if ( v47 != 0 )
      {
LABEL_70:
        if ( v48 != nullptr )
        {
          v102 = 0;
          v50 = (void *)opNewArray(v47);
          glitch::video::IBuffer::reset(v48, v47, v50, true);
        }
      }
    }
  }
  v95 = 0;
  glitch::video::CVertexStreams::setupStreams(v68, (int)(uintptr_t)(&v95), v67, 1, 1);
  if ( v95 != 0 )
    sub_5459C0((volatile int32_t *)v95);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_D20290  (binary VA: 0xd20290)
// Original: sub_D20290
// ----------------------------------------------------------------------------
int sub_D20290(int a1, glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>> **a2, uint16_t a3, uint32_t *a4, int a5)
{
  int v5;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  const char *v14;
  int v15;
  bool v16;
  int v17;
  int v18;
  int result;
  int v20;
  glitch::core::CMatrix4<float> *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint8_t *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint32_t *v32;
  unsigned int n;
  uint32_t *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  unsigned int m;
  uint32_t *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  uint32_t *v48;
  int v49;
  unsigned int k;
  uint32_t *v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  uint32_t *v57;
  unsigned int j;
  uint32_t *v59;
  int v60;
  int v61;
  int v62;
  int v63;
  uint32_t *v64;
  unsigned int i;
  uint32_t *v66;
  float *v67;
  uint32_t *v68;
  int v69;
  int v70;
  int v71;
  int v72;
  size_t v73;
  int v74;
  int v75;
  glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>> *v76;
  typedef float _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef uint32_t *_g4_t_x;
  typedef int _g4_t_xa;
  typedef int _g4_t_xc;
  typedef int _g4_t_xd;
  typedef int _g4_t_xe;
  typedef int _g4_t_xf;
  typedef int _g4_t_xg;
  typedef int _g4_t_xb;
  typedef int _g4_t_xh;
  typedef int _g4_t_xi;
  typedef int _g4_t_xj;
  typedef int _g4_t_xk;
  typedef int _g4_t_xl;
  typedef uint32_t *_g4_t_xm;
  typedef float _g4_t_xn;
  typedef float _g4_t_xo;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef uint32_t *_g4_t_v102;
  typedef uint32_t *_g4_t_v103;
  typedef uint16_t _g4_t_v104[2];
  typedef int _g4_t_v105;
  typedef uint32_t *_g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef unsigned int _g4_t_v110;
  typedef unsigned int _g4_t_v111;
  typedef unsigned int _g4_t_v112;
  typedef unsigned int _g4_t_v113;
  typedef unsigned int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef char *_g4_t_v117;
  typedef unsigned int _g4_t_ii;
  typedef unsigned int _g4_t_v119;
  typedef float _g4_t_v120;
  typedef uint16_t _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef glitch::video::ITexture::Self *_g4_t_v127[16];
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef uint16_t *_g4_t_v144;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v77)) > _g4_s0 ? (12u + sizeof(_g4_t_v77)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v78)) > _g4_s1 ? (32u + sizeof(_g4_t_v78)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v79)) > _g4_s2 ? (56u + sizeof(_g4_t_v79)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v80)) > _g4_s3 ? (56u + sizeof(_g4_t_v80)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v81)) > _g4_s4 ? (60u + sizeof(_g4_t_v81)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v82)) > _g4_s5 ? (76u + sizeof(_g4_t_v82)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v83)) > _g4_s6 ? (92u + sizeof(_g4_t_v83)) : _g4_s6,
    _g4_s8 = (108u + sizeof(_g4_t_x)) > _g4_s7 ? (108u + sizeof(_g4_t_x)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_xa)) > _g4_s8 ? (108u + sizeof(_g4_t_xa)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_xc)) > _g4_s9 ? (108u + sizeof(_g4_t_xc)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_xd)) > _g4_s10 ? (108u + sizeof(_g4_t_xd)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_xe)) > _g4_s11 ? (108u + sizeof(_g4_t_xe)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_xf)) > _g4_s12 ? (108u + sizeof(_g4_t_xf)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_xg)) > _g4_s13 ? (108u + sizeof(_g4_t_xg)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_xb)) > _g4_s14 ? (108u + sizeof(_g4_t_xb)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_xh)) > _g4_s15 ? (108u + sizeof(_g4_t_xh)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_xi)) > _g4_s16 ? (108u + sizeof(_g4_t_xi)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_xj)) > _g4_s17 ? (108u + sizeof(_g4_t_xj)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_xk)) > _g4_s18 ? (108u + sizeof(_g4_t_xk)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_xl)) > _g4_s19 ? (108u + sizeof(_g4_t_xl)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_xm)) > _g4_s20 ? (108u + sizeof(_g4_t_xm)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_xn)) > _g4_s21 ? (108u + sizeof(_g4_t_xn)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_xo)) > _g4_s22 ? (108u + sizeof(_g4_t_xo)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v100)) > _g4_s23 ? (128u + sizeof(_g4_t_v100)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v101)) > _g4_s24 ? (128u + sizeof(_g4_t_v101)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v102)) > _g4_s25 ? (132u + sizeof(_g4_t_v102)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v103)) > _g4_s26 ? (132u + sizeof(_g4_t_v103)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v104)) > _g4_s27 ? (136u + sizeof(_g4_t_v104)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v105)) > _g4_s28 ? (136u + sizeof(_g4_t_v105)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v107)) > _g4_s29 ? (140u + sizeof(_g4_t_v107)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v108)) > _g4_s30 ? (144u + sizeof(_g4_t_v108)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v109)) > _g4_s31 ? (144u + sizeof(_g4_t_v109)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v110)) > _g4_s32 ? (144u + sizeof(_g4_t_v110)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v111)) > _g4_s33 ? (144u + sizeof(_g4_t_v111)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v112)) > _g4_s34 ? (144u + sizeof(_g4_t_v112)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v113)) > _g4_s35 ? (144u + sizeof(_g4_t_v113)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v114)) > _g4_s36 ? (144u + sizeof(_g4_t_v114)) : _g4_s36,
    _g4_s38 = (144u + sizeof(_g4_t_v115)) > _g4_s37 ? (144u + sizeof(_g4_t_v115)) : _g4_s37,
    _g4_s39 = (148u + sizeof(_g4_t_v117)) > _g4_s38 ? (148u + sizeof(_g4_t_v117)) : _g4_s38,
    _g4_s40 = (148u + sizeof(_g4_t_ii)) > _g4_s39 ? (148u + sizeof(_g4_t_ii)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v119)) > _g4_s40 ? (148u + sizeof(_g4_t_v119)) : _g4_s40,
    _g4_s42 = (148u + sizeof(_g4_t_v120)) > _g4_s41 ? (148u + sizeof(_g4_t_v120)) : _g4_s41,
    _g4_s43 = (152u + sizeof(_g4_t_v121)) > _g4_s42 ? (152u + sizeof(_g4_t_v121)) : _g4_s42,
    _g4_s44 = (152u + sizeof(_g4_t_v122)) > _g4_s43 ? (152u + sizeof(_g4_t_v122)) : _g4_s43,
    _g4_s45 = (152u + sizeof(_g4_t_v123)) > _g4_s44 ? (152u + sizeof(_g4_t_v123)) : _g4_s44,
    _g4_s46 = (152u + sizeof(_g4_t_v124)) > _g4_s45 ? (152u + sizeof(_g4_t_v124)) : _g4_s45,
    _g4_s47 = (152u + sizeof(_g4_t_v125)) > _g4_s46 ? (152u + sizeof(_g4_t_v125)) : _g4_s46,
    _g4_s48 = (152u + sizeof(_g4_t_v126)) > _g4_s47 ? (152u + sizeof(_g4_t_v126)) : _g4_s47,
    _g4_s49 = (156u + sizeof(_g4_t_v127)) > _g4_s48 ? (156u + sizeof(_g4_t_v127)) : _g4_s48,
    _g4_s50 = (220u + sizeof(_g4_t_v128)) > _g4_s49 ? (220u + sizeof(_g4_t_v128)) : _g4_s49,
    _g4_s51 = (224u + sizeof(_g4_t_v129)) > _g4_s50 ? (224u + sizeof(_g4_t_v129)) : _g4_s50,
    _g4_s52 = (228u + sizeof(_g4_t_v130)) > _g4_s51 ? (228u + sizeof(_g4_t_v130)) : _g4_s51,
    _g4_s53 = (232u + sizeof(_g4_t_v131)) > _g4_s52 ? (232u + sizeof(_g4_t_v131)) : _g4_s52,
    _g4_s54 = (236u + sizeof(_g4_t_v132)) > _g4_s53 ? (236u + sizeof(_g4_t_v132)) : _g4_s53,
    _g4_s55 = (240u + sizeof(_g4_t_v133)) > _g4_s54 ? (240u + sizeof(_g4_t_v133)) : _g4_s54,
    _g4_s56 = (244u + sizeof(_g4_t_v134)) > _g4_s55 ? (244u + sizeof(_g4_t_v134)) : _g4_s55,
    _g4_s57 = (248u + sizeof(_g4_t_v135)) > _g4_s56 ? (248u + sizeof(_g4_t_v135)) : _g4_s56,
    _g4_s58 = (252u + sizeof(_g4_t_v136)) > _g4_s57 ? (252u + sizeof(_g4_t_v136)) : _g4_s57,
    _g4_s59 = (256u + sizeof(_g4_t_v137)) > _g4_s58 ? (256u + sizeof(_g4_t_v137)) : _g4_s58,
    _g4_s60 = (260u + sizeof(_g4_t_v138)) > _g4_s59 ? (260u + sizeof(_g4_t_v138)) : _g4_s59,
    _g4_s61 = (264u + sizeof(_g4_t_v139)) > _g4_s60 ? (264u + sizeof(_g4_t_v139)) : _g4_s60,
    _g4_s62 = (268u + sizeof(_g4_t_v140)) > _g4_s61 ? (268u + sizeof(_g4_t_v140)) : _g4_s61,
    _g4_s63 = (272u + sizeof(_g4_t_v141)) > _g4_s62 ? (272u + sizeof(_g4_t_v141)) : _g4_s62,
    _g4_s64 = (276u + sizeof(_g4_t_v142)) > _g4_s63 ? (276u + sizeof(_g4_t_v142)) : _g4_s63,
    _g4_s65 = (280u + sizeof(_g4_t_v143)) > _g4_s64 ? (280u + sizeof(_g4_t_v143)) : _g4_s64,
    _g4_s66 = (292u + sizeof(_g4_t_v144)) > _g4_s65 ? (292u + sizeof(_g4_t_v144)) : _g4_s65
  };
  alignas(16) uint8_t _g4_sf[_g4_s66];
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 12u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 32u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 56u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 56u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 60u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 76u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 92u);
  _g4_t_x &x = *reinterpret_cast<_g4_t_x *>(_g4_sf + 108u);
  _g4_t_xa &xa = *reinterpret_cast<_g4_t_xa *>(_g4_sf + 108u);
  _g4_t_xc &xc = *reinterpret_cast<_g4_t_xc *>(_g4_sf + 108u);
  _g4_t_xd &xd = *reinterpret_cast<_g4_t_xd *>(_g4_sf + 108u);
  _g4_t_xe &xe = *reinterpret_cast<_g4_t_xe *>(_g4_sf + 108u);
  _g4_t_xf &xf = *reinterpret_cast<_g4_t_xf *>(_g4_sf + 108u);
  _g4_t_xg &xg = *reinterpret_cast<_g4_t_xg *>(_g4_sf + 108u);
  _g4_t_xb &xb = *reinterpret_cast<_g4_t_xb *>(_g4_sf + 108u);
  _g4_t_xh &xh = *reinterpret_cast<_g4_t_xh *>(_g4_sf + 108u);
  _g4_t_xi &xi = *reinterpret_cast<_g4_t_xi *>(_g4_sf + 108u);
  _g4_t_xj &xj = *reinterpret_cast<_g4_t_xj *>(_g4_sf + 108u);
  _g4_t_xk &xk = *reinterpret_cast<_g4_t_xk *>(_g4_sf + 108u);
  _g4_t_xl &xl = *reinterpret_cast<_g4_t_xl *>(_g4_sf + 108u);
  _g4_t_xm &xm = *reinterpret_cast<_g4_t_xm *>(_g4_sf + 108u);
  _g4_t_xn &xn = *reinterpret_cast<_g4_t_xn *>(_g4_sf + 108u);
  _g4_t_xo &xo = *reinterpret_cast<_g4_t_xo *>(_g4_sf + 108u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 128u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 128u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 132u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 132u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 136u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 136u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 140u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 144u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 144u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 144u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 144u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 144u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 144u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 144u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 144u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 148u);
  _g4_t_ii &ii = *reinterpret_cast<_g4_t_ii *>(_g4_sf + 148u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 148u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 148u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 152u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 152u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 152u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 152u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 152u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 152u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 156u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 220u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 224u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 228u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 232u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 236u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 240u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 244u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 248u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 252u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 256u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 260u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 264u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 268u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 272u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 276u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 280u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 292u);

  v5 = 0;
  v144 = &a3;
  v7 = a4;
  v100 = a5;
  v121 = a3;
  *(uint32_t *)v104 = (uint32_t)(uintptr_t)(*a2);
  v8 = *((uint32_t *)*a2 + 1);
  if ( a3 < *(uint16_t *)(v8 + 14) )
    v5 = *(uint32_t *)(v8 + 32) + 16 * a3;
  v102 = a4 + 3;
  if ( (unsigned int)*(uint16_t *)(v5 + 12) > *(uint32_t *)((char *)a4 + a4[4] + 16) )
  {
    v9 = 0;
    v10 = *(uint32_t *)v5 + 4;
    if ( *(uint32_t *)v5 == 0 )
      v10 = 0;
    v108 = v10;
    v11 = *(uint32_t *)(*(uint32_t *)v104 + 36);
    x = a4;
    if ( v11 != 0 )
      v9 = v11 + 4;
    glitch::os::Printer::logf(3, (int)(uintptr_t)("Not enough elements in parameter array \"%s/%s\""), v9, v108);
    v7 = x;
  }
  v12 = *(uint8_t *)(v5 + 9);
  v13 = v7[2];
  v109 = v13;
  if ( ((1 << v13) & dword_1CA7900[v12]) != 0 )
  {
    v105 = v121;
    switch ( *(uint8_t *)(v5 + 9) )
    {
      case 0xB:
        v67 = nullptr;
        memset(v127, 0, sizeof(v127));
        v127[0] = (glitch::video::ITexture::Self *)1065353216;
        v127[5] = (glitch::video::ITexture::Self *)1065353216;
        v127[10] = (glitch::video::ITexture::Self *)1065353216;
        v127[15] = (glitch::video::ITexture::Self *)1065353216;
        if ( v13 == 11 )
        {
          v74 = v7[5];
          v75 = (int)(uintptr_t)(v7) + v74 + 20;
          if ( v74 != 0 )
            v67 = (float *)v75;
          v120 = v67[4];
          v81 = v67[3];
          v82 = *v67;
          v83 = v67[1];
          xn = 0.017453313f * v67[2];
          v79 = cosf(xn);
          v77 = xn;
          xo = v79;
          v80 = sinf(v77);
          v130 = 0;
          v131 = 0;
          v134 = 0;
          *(float *)&v128 = xo * v81;
          v135 = 0;
          *(float *)&v129 = v120 * v80;
          v132 = (float)-v80 * v81;
          v133 = v120 * xo;
          v136 = (float)((float)((float)((float)-v80 * (float)(v83 - 0.5)) + (float)(xo * (float)(v82 - 0.5))) * v81)
               + 0.5;
          v137 = (float)((float)((float)(xo * (float)(v83 - 0.5)) + (float)(v80 * (float)(v82 - 0.5))) * v120) + 0.5;
          v138 = 1065353216;
          v139 = 0;
          v140 = 0;
          v141 = 0;
          v76 = *a2;
          v142 = 0;
          v143 = 1065353216;
          glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter(
            v76,
            v121,
            0,
            (const glitch::core::CMatrix4<float> *)&v128);
          result = 1;
        }
        else
        {
          v101 = glitch::video::detail::SShaderParameterTypeInspection::ValueTypeSize[glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v13 + 1]]
               * glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v13 + 1];
          v115 = *(uint32_t *)((char *)v102 + v7[4] + 4);
          result = 1;
          if ( v115 != 0 )
          {
            v126 = 0;
            v119 = 0;
            v68 = v7;
            do
            {
              v69 = v68[5];
              v70 = 0;
              if ( v69 != 0 )
                v70 = (int)(uintptr_t)(v68) + v69 + 20;
              std::memcpy(v127, (const void *)(v126 + v70), sizeof(v127));
              if ( *(float *)v127 < 0.999999f
                || *(float *)v127 > 1.000001f
                || *(float *)&v127[5] < 0.999999f
                || *(float *)&v127[5] > 1.000001f
                || *(float *)&v127[10] < 0.999999f
                || *(float *)&v127[10] > 1.000001f
                || *(float *)&v127[15] < 0.999999f
                || *(float *)&v127[15] > 1.000001f
                || fabs(*(float *)&v127[1]) > 0.000001f
                || fabs(*(float *)&v127[2]) > 0.000001f
                || fabs(*(float *)&v127[3]) > 0.000001f
                || fabs(*(float *)&v127[4]) > 0.000001f
                || fabs(*(float *)&v127[6]) > 0.000001f
                || fabs(*(float *)&v127[7]) > 0.000001f
                || fabs(*(float *)&v127[8]) > 0.000001f
                || fabs(*(float *)&v127[9]) > 0.000001f
                || fabs(*(float *)&v127[11]) > 0.000001f
                || fabs(*(float *)&v127[12]) > 0.000001f
                || fabs(*(float *)&v127[13]) > 0.000001f
                || fabs(*(float *)&v127[14]) > 0.000001f )
              {
                glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter(
                  *a2,
                  v105,
                  v119,
                  (const glitch::core::CMatrix4<float> *)v127);
              }
              ++v119;
              v126 += v101;
            }
            while ( v115 != v119 );
            goto LABEL_34;
          }
        }
        break;
      case 0xC:
        v60 = v7[5];
        v61 = 0;
        if ( v60 != 0 )
          v61 = (int)(uintptr_t)(v7) + v60 + 20;
        v62 = *((uint32_t *)*a2 + 1);
        v63 = 0;
        if ( v121 < *(uint16_t *)(v62 + 14) )
          v63 = *(uint32_t *)(v62 + 32) + 16 * v121;
        v114 = *(uint16_t *)(v63 + 12);
        result = 1;
        if ( v114 != 0 )
        {
          v64 = (uint32_t *)v61;
          v125 = v61;
          for ( i = 0; i < v114; ++i )
          {
            v66 = nullptr;
            if ( *v64 != 0 )
              v66 = (uint32_t *)((char *)v64 + *v64);
            if ( *v66 != 0 )
            {
              glitch::collada::CColladaDatabase::constructImage(v127);
              glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v105,
                i,
                v127);
              if ( v127[0] != nullptr )
              {
                v129 = 255;
                v130 = 255;
                v131 = *(uint32_t *)(v125 + 8);
                v132 = *(float *)(v125 + 12);
                v128 = *(int *)(v125 + 4);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v127,
                  &v128);
                if ( v128 != 255 )
                  glitch::video::ITexture::setWrap(v127[0], 0, v128);
                if ( v129 != 255 )
                  glitch::video::ITexture::setWrap(v127[0], 1, v129);
                if ( v130 != 255 )
                  glitch::video::ITexture::setWrap(v127[0], 2, v130);
                if ( v131 != 255 )
                  glitch::video::ITexture::setMinFilter(v127[0], v131);
                if ( LODWORD(v132) != 255 )
                  glitch::video::ITexture::setMagFilter(v127[0], LODWORD(v132));
              }
              sub_CFE550((int *)v127);
            }
            v64 += 4;
          }
          goto LABEL_34;
        }
        break;
      case 0xD:
        v53 = v7[5];
        v54 = 0;
        if ( v53 != 0 )
          v54 = (int)(uintptr_t)(v7) + v53 + 20;
        v55 = *((uint32_t *)*a2 + 1);
        v56 = 0;
        if ( v121 < *(uint16_t *)(v55 + 14) )
          v56 = *(uint32_t *)(v55 + 32) + 16 * v121;
        v113 = *(uint16_t *)(v56 + 12);
        result = 1;
        if ( v113 != 0 )
        {
          v57 = (uint32_t *)v54;
          v124 = v54;
          for ( j = 0; j < v113; ++j )
          {
            v59 = nullptr;
            if ( *v57 != 0 )
              v59 = (uint32_t *)((char *)v57 + *v57);
            if ( *v59 != 0 )
            {
              glitch::collada::CColladaDatabase::constructImage(v127);
              glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v105,
                j,
                v127);
              if ( v127[0] != nullptr )
              {
                v130 = 255;
                v131 = *(uint32_t *)(v124 + 12);
                v132 = *(float *)(v124 + 16);
                v128 = *(int *)(v124 + 4);
                v129 = *(int *)(v124 + 8);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v127,
                  &v128);
                if ( v128 != 255 )
                  glitch::video::ITexture::setWrap(v127[0], 0, v128);
                if ( v129 != 255 )
                  glitch::video::ITexture::setWrap(v127[0], 1, v129);
                if ( v130 != 255 )
                  glitch::video::ITexture::setWrap(v127[0], 2, v130);
                if ( v131 != 255 )
                  glitch::video::ITexture::setMinFilter(v127[0], v131);
                if ( LODWORD(v132) != 255 )
                  glitch::video::ITexture::setMagFilter(v127[0], LODWORD(v132));
              }
              sub_CFE550((int *)v127);
            }
            v57 += 5;
          }
          goto LABEL_34;
        }
        break;
      case 0xE:
        v44 = v7[5];
        v45 = 0;
        if ( v44 != 0 )
          v45 = (int)(uintptr_t)(v7) + v44 + 20;
        v46 = *((uint32_t *)*a2 + 1);
        v47 = 0;
        if ( v121 < *(uint16_t *)(v46 + 14) )
          v47 = *(uint32_t *)(v46 + 32) + 16 * v121;
        v112 = *(uint16_t *)(v47 + 12);
        result = 1;
        if ( v112 != 0 )
        {
          v48 = (uint32_t *)v45;
          v49 = v45;
          for ( k = 0; k < v112; ++k )
          {
            v51 = nullptr;
            if ( *v48 != 0 )
              v51 = (uint32_t *)((char *)v48 + *v48);
            if ( *v51 != 0 )
            {
              xb = v49;
              glitch::collada::CColladaDatabase::constructImage(v127);
              glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v121,
                k,
                v127);
              v52 = xb;
              if ( v127[0] != nullptr )
              {
                v131 = *(uint32_t *)(xb + 16);
                v132 = *(float *)(xb + 20);
                v128 = *(int *)(xb + 4);
                v129 = *(int *)(xb + 8);
                v130 = *(uint32_t *)(xb + 12);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v127,
                  &v128);
                v52 = xb;
                if ( v128 != 255 )
                {
                  glitch::video::ITexture::setWrap(v127[0], 0, v128);
                  v52 = xb;
                }
                if ( v129 != 255 )
                {
                  xh = v52;
                  glitch::video::ITexture::setWrap(v127[0], 1, v129);
                  v52 = xh;
                }
                if ( v130 != 255 )
                {
                  xi = v52;
                  glitch::video::ITexture::setWrap(v127[0], 2, v130);
                  v52 = xi;
                }
                if ( v131 != 255 )
                {
                  xj = v52;
                  glitch::video::ITexture::setMinFilter(v127[0], v131);
                  v52 = xj;
                }
                if ( LODWORD(v132) != 255 )
                {
                  xk = v52;
                  glitch::video::ITexture::setMagFilter(v127[0], LODWORD(v132));
                  v52 = xk;
                }
              }
              xl = v52;
              sub_CFE550((int *)v127);
              v49 = xl;
            }
            v48 += 6;
          }
          goto LABEL_34;
        }
        break;
      case 0xF:
        v35 = v7[5];
        v36 = 0;
        if ( v35 != 0 )
          v36 = (int)(uintptr_t)(v7) + v35 + 20;
        v37 = *((uint32_t *)*a2 + 1);
        v38 = 0;
        if ( v121 < *(uint16_t *)(v37 + 14) )
          v38 = *(uint32_t *)(v37 + 32) + 16 * v121;
        v111 = *(uint16_t *)(v38 + 12);
        result = 1;
        if ( v111 != 0 )
        {
          v39 = (uint32_t *)v36;
          v40 = v36;
          for ( m = 0; m < v111; ++m )
          {
            v42 = nullptr;
            if ( *v39 != 0 )
              v42 = (uint32_t *)((char *)v39 + *v39);
            if ( *v42 != 0 )
            {
              xa = v40;
              glitch::collada::CColladaDatabase::constructImage(v127);
              glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v121,
                m,
                v127);
              v43 = xa;
              if ( v127[0] != nullptr )
              {
                v131 = *(uint32_t *)(xa + 16);
                v132 = *(float *)(xa + 20);
                v128 = *(int *)(xa + 4);
                v129 = *(int *)(xa + 8);
                v130 = *(uint32_t *)(xa + 12);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v127,
                  &v128);
                v43 = xa;
                if ( v128 != 255 )
                {
                  glitch::video::ITexture::setWrap(v127[0], 0, v128);
                  v43 = xa;
                }
                if ( v129 != 255 )
                {
                  xc = v43;
                  glitch::video::ITexture::setWrap(v127[0], 1, v129);
                  v43 = xc;
                }
                if ( v130 != 255 )
                {
                  xd = v43;
                  glitch::video::ITexture::setWrap(v127[0], 2, v130);
                  v43 = xd;
                }
                if ( v131 != 255 )
                {
                  xe = v43;
                  glitch::video::ITexture::setMinFilter(v127[0], v131);
                  v43 = xe;
                }
                if ( LODWORD(v132) != 255 )
                {
                  xf = v43;
                  glitch::video::ITexture::setMagFilter(v127[0], LODWORD(v132));
                  v43 = xf;
                }
              }
              xg = v43;
              sub_CFE550((int *)v127);
              v40 = xg;
            }
            v39 += 6;
          }
          goto LABEL_34;
        }
        break;
      case 0x10:
        v28 = v7[5];
        v29 = 0;
        if ( v28 != 0 )
          v29 = (int)(uintptr_t)(v7) + v28 + 20;
        v30 = *((uint32_t *)*a2 + 1);
        v31 = 0;
        if ( v121 < *(uint16_t *)(v30 + 14) )
          v31 = *(uint32_t *)(v30 + 32) + 16 * v121;
        v110 = *(uint16_t *)(v31 + 12);
        result = 1;
        if ( v110 != 0 )
        {
          v32 = (uint32_t *)v29;
          v123 = v29;
          for ( n = 0; n < v110; ++n )
          {
            v34 = nullptr;
            if ( *v32 != 0 )
              v34 = (uint32_t *)((char *)v32 + *v32);
            if ( *v34 != 0 )
            {
              glitch::collada::CColladaDatabase::constructImage(v127);
              glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v105,
                n,
                v127);
              if ( v127[0] != nullptr )
              {
                v130 = 255;
                v131 = *(uint32_t *)(v123 + 12);
                v132 = *(float *)(v123 + 16);
                v128 = *(int *)(v123 + 4);
                v129 = *(int *)(v123 + 8);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v127,
                  &v128);
                if ( v128 != 255 )
                  glitch::video::ITexture::setWrap(v127[0], 0, v128);
                if ( v129 != 255 )
                  glitch::video::ITexture::setWrap(v127[0], 1, v129);
                if ( v130 != 255 )
                  glitch::video::ITexture::setWrap(v127[0], 2, v130);
                if ( v131 != 255 )
                  glitch::video::ITexture::setMinFilter(v127[0], v131);
                if ( LODWORD(v132) != 255 )
                  glitch::video::ITexture::setMagFilter(v127[0], LODWORD(v132));
              }
              sub_CFE550((int *)v127);
            }
            v32 += 5;
          }
          goto LABEL_34;
        }
        break;
      case 0x13:
        v23 = *(uint16_t *)(v5 + 12);
        result = 1;
        if ( *(uint16_t *)(v5 + 12) != 0 )
        {
          v24 = 0;
          v122 = v23 - 1;
          v103 = v7 + 5;
          if ( v100 != 0 )
          {
            v25 = v109;
            for ( ii = (unsigned int)(uintptr_t)(v7); ; v25 = *(uint32_t *)(ii + 8) )
            {
              if ( v25 == 19 )
                LOBYTE(v25) = 0;
              else
                v25 = 0;
              v26 = *(uint32_t *)(ii + 20);
              if ( v26 != 0 )
                v25 = (int)(uintptr_t)(v103) + v26;
              v128 = *(int *)(v25 + 4 * v24);
              v27 = (uint8_t *)v128;
              if ( strlen((const char *)v128) == 0 || *v27 == 35 && v27[1] == 0 )
                break;
              glitch::collada::CRootSceneNode::addURLToResolve(v100, a2, v105, v24, &v128);
              if ( v24 == v122 )
                break;
              ++v24;
            }
LABEL_34:
            result = 1;
          }
          else
          {
            v107 = v7 + 5;
            while ( 1 )
            {
              v71 = v7[5];
              v72 = 0;
              if ( v71 != 0 )
                v72 = (int)(uintptr_t)(v107) + v71;
              xm = v7;
              v128 = *(int *)(v72 + 4 * v24);
              v73 = strlen((const char *)v128);
              v7 = xm;
              if ( v73 == 0 )
                break;
              if ( *(uint8_t *)v128 == 35 && *(uint8_t *)(v128 + 1) == 0 || v24 == v122 )
                goto LABEL_34;
              ++v24;
            }
            result = 1;
          }
        }
        break;
      default:
        v20 = v7[5];
        v21 = nullptr;
        v78 = *(uint32_t *)((char *)v102 + v7[4] + 4);
        v22 = (int)(uintptr_t)(v7) + v20 + 20;
        if ( v20 != 0 )
          v21 = (glitch::core::CMatrix4<float> *)v22;
        glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt(
          *a2,
          v121,
          dword_1CA7960[v109],
          v21,
          nullptr,
          v78,
          glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v109 + 1]
        * glitch::video::detail::SShaderParameterTypeInspection::ValueTypeSize[glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v109 + 1]]);
        result = 1;
        break;
    }
  }
  else
  {
    v117 = (char *)(uintptr_t)(off_2031200[v13]);
    v14 = "unknown";
    if ( (uint16_t)v12 != 255 )
      v14 = *(const char **)(glitch::video::getStringsInternal(0) + 4 * v12);
    v15 = 0;
    v16 = *(uint32_t *)v5 == 0;
    v17 = *(uint32_t *)v5 + 4;
    if ( v16 )
      v17 = 0;
    v18 = *((uint32_t *)*a2 + 9);
    if ( v18 != 0 )
      v15 = v18 + 4;
    glitch::os::Printer::logf(
      3,
      (int)(uintptr_t)("parameter type mismatch when setting \"%s/%s\": want %s, got %s"),
      v15,
      v17,
      v14,
      v117);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D21CF0  (binary VA: 0xd21cf0)
// Original: sub_D21CF0
// ----------------------------------------------------------------------------
int sub_D21CF0(int a1, glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer::Self>> **a2, uint16_t a3, uint32_t *a4, int a5)
{
  int v5;
  uint32_t *v7;
  glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer::Self>> *v8;
  int v9;
  int v10;
  char *v11;
  const char *v12;
  int v13;
  bool v14;
  int v15;
  int result;
  int v17;
  glitch::core::CMatrix4<float> *v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  int v23;
  uint8_t *v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  unsigned int n;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  int v35;
  unsigned int m;
  uint32_t *v37;
  int v38;
  int v39;
  uint32_t *v40;
  int v41;
  glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer::Self>> *v42;
  int v43;
  uint32_t *v44;
  float *v45;
  unsigned int k;
  uint32_t *v47;
  float *v48;
  int v49;
  uint32_t *v50;
  int v51;
  glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer::Self>> *v52;
  int v53;
  uint32_t *v54;
  unsigned int j;
  uint32_t *v56;
  int v57;
  uint32_t *v58;
  int v59;
  glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer::Self>> *v60;
  int v61;
  uint32_t *v62;
  unsigned int i;
  uint32_t *v64;
  float *v65;
  uint32_t *v66;
  int v67;
  int v68;
  int v69;
  char *v70;
  size_t v71;
  int v72;
  int v73;
  glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer::Self, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer::Self>> *v74;
  typedef float _g4_t_v75;
  typedef unsigned int _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef uint32_t *_g4_t_xb;
  typedef int _g4_t_x;
  typedef int _g4_t_xc;
  typedef int _g4_t_xd;
  typedef int _g4_t_xe;
  typedef int _g4_t_xf;
  typedef int _g4_t_xg;
  typedef float *_g4_t_xa;
  typedef float *_g4_t_xh;
  typedef float *_g4_t_xi;
  typedef float *_g4_t_xj;
  typedef float *_g4_t_xk;
  typedef float *_g4_t_xl;
  typedef uint32_t *_g4_t_xm;
  typedef float _g4_t_xn;
  typedef float _g4_t_xo;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef uint32_t *_g4_t_v100;
  typedef uint32_t *_g4_t_v101;
  typedef int _g4_t_v102;
  typedef uint32_t *_g4_t_v104;
  typedef char *_g4_t_v105;
  typedef unsigned int _g4_t_v106;
  typedef unsigned int _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef unsigned int _g4_t_v109;
  typedef unsigned int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef char *_g4_t_v113;
  typedef unsigned int _g4_t_ii;
  typedef unsigned int _g4_t_v115;
  typedef float _g4_t_v116;
  typedef uint16_t _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float *_g4_t_v120;
  typedef float *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef glitch::video::ITexture::Self *_g4_t_v123[16];
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef uint16_t *_g4_t_v140;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v75)) > _g4_s0 ? (12u + sizeof(_g4_t_v75)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v76)) > _g4_s1 ? (32u + sizeof(_g4_t_v76)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v77)) > _g4_s2 ? (56u + sizeof(_g4_t_v77)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v78)) > _g4_s3 ? (56u + sizeof(_g4_t_v78)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v79)) > _g4_s4 ? (60u + sizeof(_g4_t_v79)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v80)) > _g4_s5 ? (76u + sizeof(_g4_t_v80)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v81)) > _g4_s6 ? (92u + sizeof(_g4_t_v81)) : _g4_s6,
    _g4_s8 = (108u + sizeof(_g4_t_xb)) > _g4_s7 ? (108u + sizeof(_g4_t_xb)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_x)) > _g4_s8 ? (108u + sizeof(_g4_t_x)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_xc)) > _g4_s9 ? (108u + sizeof(_g4_t_xc)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_xd)) > _g4_s10 ? (108u + sizeof(_g4_t_xd)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_xe)) > _g4_s11 ? (108u + sizeof(_g4_t_xe)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_xf)) > _g4_s12 ? (108u + sizeof(_g4_t_xf)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_xg)) > _g4_s13 ? (108u + sizeof(_g4_t_xg)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_xa)) > _g4_s14 ? (108u + sizeof(_g4_t_xa)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_xh)) > _g4_s15 ? (108u + sizeof(_g4_t_xh)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_xi)) > _g4_s16 ? (108u + sizeof(_g4_t_xi)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_xj)) > _g4_s17 ? (108u + sizeof(_g4_t_xj)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_xk)) > _g4_s18 ? (108u + sizeof(_g4_t_xk)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_xl)) > _g4_s19 ? (108u + sizeof(_g4_t_xl)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_xm)) > _g4_s20 ? (108u + sizeof(_g4_t_xm)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_xn)) > _g4_s21 ? (108u + sizeof(_g4_t_xn)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_xo)) > _g4_s22 ? (108u + sizeof(_g4_t_xo)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v98)) > _g4_s23 ? (128u + sizeof(_g4_t_v98)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v99)) > _g4_s24 ? (128u + sizeof(_g4_t_v99)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v100)) > _g4_s25 ? (132u + sizeof(_g4_t_v100)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v101)) > _g4_s26 ? (132u + sizeof(_g4_t_v101)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v102)) > _g4_s27 ? (136u + sizeof(_g4_t_v102)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v104)) > _g4_s28 ? (140u + sizeof(_g4_t_v104)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v105)) > _g4_s29 ? (144u + sizeof(_g4_t_v105)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v106)) > _g4_s30 ? (144u + sizeof(_g4_t_v106)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v107)) > _g4_s31 ? (144u + sizeof(_g4_t_v107)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v108)) > _g4_s32 ? (144u + sizeof(_g4_t_v108)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v109)) > _g4_s33 ? (144u + sizeof(_g4_t_v109)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v110)) > _g4_s34 ? (144u + sizeof(_g4_t_v110)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v111)) > _g4_s35 ? (144u + sizeof(_g4_t_v111)) : _g4_s35,
    _g4_s37 = (148u + sizeof(_g4_t_v113)) > _g4_s36 ? (148u + sizeof(_g4_t_v113)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_ii)) > _g4_s37 ? (148u + sizeof(_g4_t_ii)) : _g4_s37,
    _g4_s39 = (148u + sizeof(_g4_t_v115)) > _g4_s38 ? (148u + sizeof(_g4_t_v115)) : _g4_s38,
    _g4_s40 = (148u + sizeof(_g4_t_v116)) > _g4_s39 ? (148u + sizeof(_g4_t_v116)) : _g4_s39,
    _g4_s41 = (152u + sizeof(_g4_t_v117)) > _g4_s40 ? (152u + sizeof(_g4_t_v117)) : _g4_s40,
    _g4_s42 = (152u + sizeof(_g4_t_v118)) > _g4_s41 ? (152u + sizeof(_g4_t_v118)) : _g4_s41,
    _g4_s43 = (152u + sizeof(_g4_t_v119)) > _g4_s42 ? (152u + sizeof(_g4_t_v119)) : _g4_s42,
    _g4_s44 = (152u + sizeof(_g4_t_v120)) > _g4_s43 ? (152u + sizeof(_g4_t_v120)) : _g4_s43,
    _g4_s45 = (152u + sizeof(_g4_t_v121)) > _g4_s44 ? (152u + sizeof(_g4_t_v121)) : _g4_s44,
    _g4_s46 = (152u + sizeof(_g4_t_v122)) > _g4_s45 ? (152u + sizeof(_g4_t_v122)) : _g4_s45,
    _g4_s47 = (156u + sizeof(_g4_t_v123)) > _g4_s46 ? (156u + sizeof(_g4_t_v123)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v124)) > _g4_s47 ? (220u + sizeof(_g4_t_v124)) : _g4_s47,
    _g4_s49 = (224u + sizeof(_g4_t_v125)) > _g4_s48 ? (224u + sizeof(_g4_t_v125)) : _g4_s48,
    _g4_s50 = (228u + sizeof(_g4_t_v126)) > _g4_s49 ? (228u + sizeof(_g4_t_v126)) : _g4_s49,
    _g4_s51 = (232u + sizeof(_g4_t_v127)) > _g4_s50 ? (232u + sizeof(_g4_t_v127)) : _g4_s50,
    _g4_s52 = (236u + sizeof(_g4_t_v128)) > _g4_s51 ? (236u + sizeof(_g4_t_v128)) : _g4_s51,
    _g4_s53 = (240u + sizeof(_g4_t_v129)) > _g4_s52 ? (240u + sizeof(_g4_t_v129)) : _g4_s52,
    _g4_s54 = (244u + sizeof(_g4_t_v130)) > _g4_s53 ? (244u + sizeof(_g4_t_v130)) : _g4_s53,
    _g4_s55 = (248u + sizeof(_g4_t_v131)) > _g4_s54 ? (248u + sizeof(_g4_t_v131)) : _g4_s54,
    _g4_s56 = (252u + sizeof(_g4_t_v132)) > _g4_s55 ? (252u + sizeof(_g4_t_v132)) : _g4_s55,
    _g4_s57 = (256u + sizeof(_g4_t_v133)) > _g4_s56 ? (256u + sizeof(_g4_t_v133)) : _g4_s56,
    _g4_s58 = (260u + sizeof(_g4_t_v134)) > _g4_s57 ? (260u + sizeof(_g4_t_v134)) : _g4_s57,
    _g4_s59 = (264u + sizeof(_g4_t_v135)) > _g4_s58 ? (264u + sizeof(_g4_t_v135)) : _g4_s58,
    _g4_s60 = (268u + sizeof(_g4_t_v136)) > _g4_s59 ? (268u + sizeof(_g4_t_v136)) : _g4_s59,
    _g4_s61 = (272u + sizeof(_g4_t_v137)) > _g4_s60 ? (272u + sizeof(_g4_t_v137)) : _g4_s60,
    _g4_s62 = (276u + sizeof(_g4_t_v138)) > _g4_s61 ? (276u + sizeof(_g4_t_v138)) : _g4_s61,
    _g4_s63 = (280u + sizeof(_g4_t_v139)) > _g4_s62 ? (280u + sizeof(_g4_t_v139)) : _g4_s62,
    _g4_s64 = (292u + sizeof(_g4_t_v140)) > _g4_s63 ? (292u + sizeof(_g4_t_v140)) : _g4_s63
  };
  alignas(16) uint8_t _g4_sf[_g4_s64];
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 12u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 56u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 60u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 76u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 92u);
  _g4_t_xb &xb = *reinterpret_cast<_g4_t_xb *>(_g4_sf + 108u);
  _g4_t_x &x = *reinterpret_cast<_g4_t_x *>(_g4_sf + 108u);
  _g4_t_xc &xc = *reinterpret_cast<_g4_t_xc *>(_g4_sf + 108u);
  _g4_t_xd &xd = *reinterpret_cast<_g4_t_xd *>(_g4_sf + 108u);
  _g4_t_xe &xe = *reinterpret_cast<_g4_t_xe *>(_g4_sf + 108u);
  _g4_t_xf &xf = *reinterpret_cast<_g4_t_xf *>(_g4_sf + 108u);
  _g4_t_xg &xg = *reinterpret_cast<_g4_t_xg *>(_g4_sf + 108u);
  _g4_t_xa &xa = *reinterpret_cast<_g4_t_xa *>(_g4_sf + 108u);
  _g4_t_xh &xh = *reinterpret_cast<_g4_t_xh *>(_g4_sf + 108u);
  _g4_t_xi &xi = *reinterpret_cast<_g4_t_xi *>(_g4_sf + 108u);
  _g4_t_xj &xj = *reinterpret_cast<_g4_t_xj *>(_g4_sf + 108u);
  _g4_t_xk &xk = *reinterpret_cast<_g4_t_xk *>(_g4_sf + 108u);
  _g4_t_xl &xl = *reinterpret_cast<_g4_t_xl *>(_g4_sf + 108u);
  _g4_t_xm &xm = *reinterpret_cast<_g4_t_xm *>(_g4_sf + 108u);
  _g4_t_xn &xn = *reinterpret_cast<_g4_t_xn *>(_g4_sf + 108u);
  _g4_t_xo &xo = *reinterpret_cast<_g4_t_xo *>(_g4_sf + 108u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 128u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 128u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 132u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 132u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 136u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 140u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 144u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 144u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 144u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 144u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 144u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 144u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 144u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 148u);
  _g4_t_ii &ii = *reinterpret_cast<_g4_t_ii *>(_g4_sf + 148u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 148u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 148u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 152u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 152u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 152u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 152u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 152u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 152u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 156u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 220u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 224u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 228u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 232u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 236u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 240u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 244u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 248u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 252u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 256u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 260u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 264u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 268u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 272u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 276u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 280u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 292u);

  v5 = 0;
  v140 = &a3;
  v7 = a4;
  v98 = a5;
  v117 = a3;
  v8 = *a2;
  if ( a3 < *((uint16_t *)v8 + 7) )
    v5 = *((uint32_t *)v8 + 8) + 16 * a3;
  v100 = a4 + 3;
  if ( (unsigned int)*(uint16_t *)(v5 + 12) > *(uint32_t *)((char *)a4 + a4[4] + 16) )
  {
    v9 = 0;
    if ( *(uint32_t *)v5 != 0 )
      v9 = *(uint32_t *)v5 + 4;
    xb = a4;
    glitch::os::Printer::logf(3, (int)(uintptr_t)("Not enough elements in parameter array \"%s/%s\""), *((uint32_t *)v8 + 2), v9);
    v7 = xb;
  }
  v10 = *(uint8_t *)(v5 + 9);
  v11 = (char *)v7[1];
  v105 = v11;
  if ( ((1 << (char)(uintptr_t)(v11)) & dword_1CA7900[v10]) != 0 )
  {
    v102 = v117;
    switch ( *(uint8_t *)(v5 + 9) )
    {
      case 0xB:
        v65 = nullptr;
        memset(v123, 0, sizeof(v123));
        v123[0] = (glitch::video::ITexture::Self *)1065353216;
        v123[5] = (glitch::video::ITexture::Self *)1065353216;
        v123[10] = (glitch::video::ITexture::Self *)1065353216;
        v123[15] = (glitch::video::ITexture::Self *)1065353216;
        if ( v11 == (char *)(uintptr_t)(&byte_9[2]) )
        {
          v72 = v7[5];
          v73 = (int)(uintptr_t)(v7) + v72 + 20;
          if ( v72 != 0 )
            v65 = (float *)v73;
          v116 = v65[4];
          v79 = v65[3];
          v80 = *v65;
          v81 = v65[1];
          xn = 0.017453313f * v65[2];
          v77 = cosf(xn);
          v75 = xn;
          xo = v77;
          v78 = sinf(v75);
          v126 = 0;
          v127 = 0;
          v130 = 0;
          *(float *)&v124 = xo * v79;
          v131 = 0;
          *(float *)&v125 = v116 * v78;
          v128 = (float)-v78 * v79;
          v129 = v116 * xo;
          v132 = (float)((float)((float)((float)-v78 * (float)(v81 - 0.5)) + (float)(xo * (float)(v80 - 0.5))) * v79)
               + 0.5;
          v133 = (float)((float)((float)(xo * (float)(v81 - 0.5)) + (float)(v78 * (float)(v80 - 0.5))) * v116) + 0.5;
          v134 = 1065353216;
          v135 = 0;
          v136 = 0;
          v137 = 0;
          v74 = *a2;
          v138 = 0;
          v139 = 1065353216;
          glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter(
            v74,
            v117,
            0,
            (const glitch::core::CMatrix4<float> *)&v124);
          result = 1;
        }
        else
        {
          v99 = glitch::video::detail::SShaderParameterTypeInspection::ValueTypeSize[glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[(uint32_t)(uintptr_t)(v11) + 1]]
              * glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[(uint32_t)(uintptr_t)(v11) + 1];
          v111 = *(uint32_t *)((char *)v100 + v7[4] + 4);
          result = 1;
          if ( v111 != 0 )
          {
            v122 = 0;
            v115 = 0;
            v66 = v7;
            do
            {
              v67 = v66[5];
              v68 = 0;
              if ( v67 != 0 )
                v68 = (int)(uintptr_t)(v66) + v67 + 20;
              std::memcpy(v123, (const void *)(v122 + v68), sizeof(v123));
              if ( *(float *)v123 < 0.999999f
                || *(float *)v123 > 1.000001f
                || *(float *)&v123[5] < 0.999999f
                || *(float *)&v123[5] > 1.000001f
                || *(float *)&v123[10] < 0.999999f
                || *(float *)&v123[10] > 1.000001f
                || *(float *)&v123[15] < 0.999999f
                || *(float *)&v123[15] > 1.000001f
                || fabs(*(float *)&v123[1]) > 0.000001f
                || fabs(*(float *)&v123[2]) > 0.000001f
                || fabs(*(float *)&v123[3]) > 0.000001f
                || fabs(*(float *)&v123[4]) > 0.000001f
                || fabs(*(float *)&v123[6]) > 0.000001f
                || fabs(*(float *)&v123[7]) > 0.000001f
                || fabs(*(float *)&v123[8]) > 0.000001f
                || fabs(*(float *)&v123[9]) > 0.000001f
                || fabs(*(float *)&v123[11]) > 0.000001f
                || fabs(*(float *)&v123[12]) > 0.000001f
                || fabs(*(float *)&v123[13]) > 0.000001f
                || fabs(*(float *)&v123[14]) > 0.000001f )
              {
                glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter(
                  *a2,
                  v102,
                  v115,
                  (const glitch::core::CMatrix4<float> *)v123);
              }
              ++v115;
              v122 += v99;
            }
            while ( v111 != v115 );
            goto LABEL_30;
          }
        }
        break;
      case 0xC:
        v57 = v7[5];
        v58 = nullptr;
        v59 = (int)(uintptr_t)(v7) + v57 + 20;
        v60 = *a2;
        if ( v57 != 0 )
          v58 = (uint32_t *)v59;
        v61 = 0;
        if ( v117 < *((uint16_t *)v60 + 7) )
          v61 = *((uint32_t *)v60 + 8) + 16 * v117;
        v110 = *(uint16_t *)(v61 + 12);
        result = 1;
        if ( v110 != 0 )
        {
          v62 = v58;
          v121 = (float *)v58;
          for ( i = 0; i < v110; ++i )
          {
            v64 = nullptr;
            if ( *v62 != 0 )
              v64 = (uint32_t *)((char *)v62 + *v62);
            if ( *v64 != 0 )
            {
              glitch::collada::CColladaDatabase::constructImage(v123);
              glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v102,
                i,
                v123);
              if ( v123[0] != nullptr )
              {
                v125 = 255;
                v126 = 255;
                v127 = *((uint32_t *)v121 + 2);
                v128 = v121[3];
                v124 = *((int *)v121 + 1);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v123,
                  &v124);
                if ( v124 != 255 )
                  glitch::video::ITexture::setWrap(v123[0], 0, v124);
                if ( v125 != 255 )
                  glitch::video::ITexture::setWrap(v123[0], 1, v125);
                if ( v126 != 255 )
                  glitch::video::ITexture::setWrap(v123[0], 2, v126);
                if ( v127 != 255 )
                  glitch::video::ITexture::setMinFilter(v123[0], v127);
                if ( LODWORD(v128) != 255 )
                  glitch::video::ITexture::setMagFilter(v123[0], LODWORD(v128));
              }
              sub_CFE550((int *)v123);
            }
            v62 += 4;
          }
          goto LABEL_30;
        }
        break;
      case 0xD:
        v49 = v7[5];
        v50 = nullptr;
        v51 = (int)(uintptr_t)(v7) + v49 + 20;
        v52 = *a2;
        if ( v49 != 0 )
          v50 = (uint32_t *)v51;
        v53 = 0;
        if ( v117 < *((uint16_t *)v52 + 7) )
          v53 = *((uint32_t *)v52 + 8) + 16 * v117;
        v109 = *(uint16_t *)(v53 + 12);
        result = 1;
        if ( v109 != 0 )
        {
          v54 = v50;
          v120 = (float *)v50;
          for ( j = 0; j < v109; ++j )
          {
            v56 = nullptr;
            if ( *v54 != 0 )
              v56 = (uint32_t *)((char *)v54 + *v54);
            if ( *v56 != 0 )
            {
              glitch::collada::CColladaDatabase::constructImage(v123);
              glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v102,
                j,
                v123);
              if ( v123[0] != nullptr )
              {
                v126 = 255;
                v127 = *((uint32_t *)v120 + 3);
                v128 = v120[4];
                v124 = *((int *)v120 + 1);
                v125 = *((int *)v120 + 2);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v123,
                  &v124);
                if ( v124 != 255 )
                  glitch::video::ITexture::setWrap(v123[0], 0, v124);
                if ( v125 != 255 )
                  glitch::video::ITexture::setWrap(v123[0], 1, v125);
                if ( v126 != 255 )
                  glitch::video::ITexture::setWrap(v123[0], 2, v126);
                if ( v127 != 255 )
                  glitch::video::ITexture::setMinFilter(v123[0], v127);
                if ( LODWORD(v128) != 255 )
                  glitch::video::ITexture::setMagFilter(v123[0], LODWORD(v128));
              }
              sub_CFE550((int *)v123);
            }
            v54 += 5;
          }
          goto LABEL_30;
        }
        break;
      case 0xE:
        v39 = v7[5];
        v40 = nullptr;
        v41 = (int)(uintptr_t)(v7) + v39 + 20;
        v42 = *a2;
        if ( v39 != 0 )
          v40 = (uint32_t *)v41;
        v43 = 0;
        if ( v117 < *((uint16_t *)v42 + 7) )
          v43 = *((uint32_t *)v42 + 8) + 16 * v117;
        v108 = *(uint16_t *)(v43 + 12);
        result = 1;
        if ( v108 != 0 )
        {
          v44 = v40;
          v45 = (float *)v40;
          for ( k = 0; k < v108; ++k )
          {
            v47 = nullptr;
            if ( *v44 != 0 )
              v47 = (uint32_t *)((char *)v44 + *v44);
            if ( *v47 != 0 )
            {
              xa = v45;
              glitch::collada::CColladaDatabase::constructImage(v123);
              glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v117,
                k,
                v123);
              v48 = xa;
              if ( v123[0] != nullptr )
              {
                v127 = *((uint32_t *)xa + 4);
                v128 = xa[5];
                v124 = *((int *)xa + 1);
                v125 = *((int *)xa + 2);
                v126 = *((uint32_t *)xa + 3);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v123,
                  &v124);
                v48 = xa;
                if ( v124 != 255 )
                {
                  glitch::video::ITexture::setWrap(v123[0], 0, v124);
                  v48 = xa;
                }
                if ( v125 != 255 )
                {
                  xh = v48;
                  glitch::video::ITexture::setWrap(v123[0], 1, v125);
                  v48 = xh;
                }
                if ( v126 != 255 )
                {
                  xi = v48;
                  glitch::video::ITexture::setWrap(v123[0], 2, v126);
                  v48 = xi;
                }
                if ( v127 != 255 )
                {
                  xj = v48;
                  glitch::video::ITexture::setMinFilter(v123[0], v127);
                  v48 = xj;
                }
                if ( LODWORD(v128) != 255 )
                {
                  xk = v48;
                  glitch::video::ITexture::setMagFilter(v123[0], LODWORD(v128));
                  v48 = xk;
                }
              }
              xl = v48;
              sub_CFE550((int *)v123);
              v45 = xl;
            }
            v44 += 6;
          }
          goto LABEL_30;
        }
        break;
      case 0xF:
        v31 = v7[5];
        v32 = 0;
        if ( v31 != 0 )
          v32 = (int)(uintptr_t)(v7) + v31 + 20;
        v33 = 0;
        if ( v117 < *((uint16_t *)*a2 + 7) )
          v33 = *((uint32_t *)*a2 + 8) + 16 * v117;
        v107 = *(uint16_t *)(v33 + 12);
        result = 1;
        if ( v107 != 0 )
        {
          v34 = (uint32_t *)v32;
          v35 = v32;
          for ( m = 0; m < v107; ++m )
          {
            v37 = nullptr;
            if ( *v34 != 0 )
              v37 = (uint32_t *)((char *)v34 + *v34);
            if ( *v37 != 0 )
            {
              x = v35;
              glitch::collada::CColladaDatabase::constructImage(v123);
              glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v117,
                m,
                v123);
              v38 = x;
              if ( v123[0] != nullptr )
              {
                v127 = *(uint32_t *)(x + 16);
                v128 = *(float *)(x + 20);
                v124 = *(int *)(x + 4);
                v125 = *(int *)(x + 8);
                v126 = *(uint32_t *)(x + 12);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v123,
                  &v124);
                v38 = x;
                if ( v124 != 255 )
                {
                  glitch::video::ITexture::setWrap(v123[0], 0, v124);
                  v38 = x;
                }
                if ( v125 != 255 )
                {
                  xc = v38;
                  glitch::video::ITexture::setWrap(v123[0], 1, v125);
                  v38 = xc;
                }
                if ( v126 != 255 )
                {
                  xd = v38;
                  glitch::video::ITexture::setWrap(v123[0], 2, v126);
                  v38 = xd;
                }
                if ( v127 != 255 )
                {
                  xe = v38;
                  glitch::video::ITexture::setMinFilter(v123[0], v127);
                  v38 = xe;
                }
                if ( LODWORD(v128) != 255 )
                {
                  xf = v38;
                  glitch::video::ITexture::setMagFilter(v123[0], LODWORD(v128));
                  v38 = xf;
                }
              }
              xg = v38;
              sub_CFE550((int *)v123);
              v35 = xg;
            }
            v34 += 6;
          }
          goto LABEL_30;
        }
        break;
      case 0x10:
        v25 = v7[5];
        v26 = 0;
        if ( v25 != 0 )
          v26 = (int)(uintptr_t)(v7) + v25 + 20;
        v27 = 0;
        if ( v117 < *((uint16_t *)*a2 + 7) )
          v27 = *((uint32_t *)*a2 + 8) + 16 * v117;
        v106 = *(uint16_t *)(v27 + 12);
        result = 1;
        if ( v106 != 0 )
        {
          v28 = (uint32_t *)v26;
          v119 = v26;
          for ( n = 0; n < v106; ++n )
          {
            v30 = nullptr;
            if ( *v28 != 0 )
              v30 = (uint32_t *)((char *)v28 + *v28);
            if ( *v30 != 0 )
            {
              glitch::collada::CColladaDatabase::constructImage(v123);
              glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_ITex_4a91ce(
                *a2,
                v102,
                n,
                v123);
              if ( v123[0] != nullptr )
              {
                v126 = 255;
                v127 = *(uint32_t *)(v119 + 12);
                v128 = *(float *)(v119 + 16);
                v124 = *(int *)(v119 + 4);
                v125 = *(int *)(v119 + 8);
                (*(void (**)(uint32_t, int, glitch::video::ITexture::Self **, int *))(**(uint32_t **)(a1 + 4) + 36))(
                  *(uint32_t *)(a1 + 4),
                  a1,
                  v123,
                  &v124);
                if ( v124 != 255 )
                  glitch::video::ITexture::setWrap(v123[0], 0, v124);
                if ( v125 != 255 )
                  glitch::video::ITexture::setWrap(v123[0], 1, v125);
                if ( v126 != 255 )
                  glitch::video::ITexture::setWrap(v123[0], 2, v126);
                if ( v127 != 255 )
                  glitch::video::ITexture::setMinFilter(v123[0], v127);
                if ( LODWORD(v128) != 255 )
                  glitch::video::ITexture::setMagFilter(v123[0], LODWORD(v128));
              }
              sub_CFE550((int *)v123);
            }
            v28 += 5;
          }
          goto LABEL_30;
        }
        break;
      case 0x13:
        v20 = *(uint16_t *)(v5 + 12);
        result = 1;
        if ( *(uint16_t *)(v5 + 12) != 0 )
        {
          v21 = 0;
          v118 = v20 - 1;
          v101 = v7 + 5;
          if ( v98 != 0 )
          {
            v22 = v105;
            for ( ii = (unsigned int)(uintptr_t)(v7); ; v22 = *(char **)(ii + 4) )
            {
              if ( v22 == (char *)(uintptr_t)((uint8_t *)&word_12 + 1) )
                LOBYTE(v22) = 0;
              else
                v22 = nullptr;
              v23 = *(uint32_t *)(ii + 20);
              if ( v23 != 0 )
                v22 = (char *)v101 + v23;
              v124 = *(int *)&v22[4 * v21];
              v24 = (uint8_t *)v124;
              if ( strlen((const char *)v124) == 0 || *v24 == 35 && v24[1] == 0 )
                break;
              glitch::collada::CRootSceneNode::addURLToResolve(v98, a2, v102, v21, &v124);
              if ( v21 == v118 )
                break;
              ++v21;
            }
LABEL_30:
            result = 1;
          }
          else
          {
            v104 = v7 + 5;
            while ( 1 )
            {
              v69 = v7[5];
              v70 = nullptr;
              if ( v69 != 0 )
                v70 = (char *)v104 + v69;
              xm = v7;
              v124 = *(int *)&v70[4 * v21];
              v71 = strlen((const char *)v124);
              v7 = xm;
              if ( v71 == 0 )
                break;
              if ( *(uint8_t *)v124 == 35 && *(uint8_t *)(v124 + 1) == 0 || v21 == v118 )
                goto LABEL_30;
              ++v21;
            }
            result = 1;
          }
        }
        break;
      default:
        v17 = v7[5];
        v18 = nullptr;
        v76 = *(uint32_t *)((char *)v100 + v7[4] + 4);
        v19 = (int)(uintptr_t)(v7) + v17 + 20;
        if ( v17 != 0 )
          v18 = (glitch::core::CMatrix4<float> *)v19;
        glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt(
          *a2,
          v117,
          dword_1CA7960[(uint32_t)(uintptr_t)(v105)],
          v18,
          nullptr,
          v76,
          glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[(uint32_t)(uintptr_t)(v105) + 1]
        * glitch::video::detail::SShaderParameterTypeInspection::ValueTypeSize[glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[(uint32_t)(uintptr_t)(v105) + 1]]);
        result = 1;
        break;
    }
  }
  else
  {
    v113 = (char *)(uintptr_t)(off_2031200[(uint32_t)(uintptr_t)(v11)]);
    v12 = "unknown";
    if ( (uint16_t)v10 != 255 )
      v12 = *(const char **)(glitch::video::getStringsInternal(0) + 4 * v10);
    v13 = 0;
    v14 = *(uint32_t *)v5 == 0;
    v15 = *(uint32_t *)v5 + 4;
    if ( !v14 )
      v13 = v15;
    glitch::os::Printer::logf(
      3,
      (int)(uintptr_t)("parameter type mismatch when setting \"%s/%s\": want %s, got %s"),
      *((uint32_t *)*a2 + 2),
      v13,
      v12,
      v113);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D33FE0  (binary VA: 0xd33fe0)
// Original: sub_D33FE0
// ----------------------------------------------------------------------------
int sub_D33FE0(int a1, int *a2, int *a3)
{
  int v4;
  int *v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  unsigned int v17;
  int v18;
  uint32_t *v19;
  int v20;
  unsigned int v22;
  unsigned int v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  unsigned int v32;
  int v33;

  v4 = *(uint32_t *)(a1 - 4);
  v5 = nullptr;
  v6 = *(uint32_t *)(v4 + 12);
  if ( v6 != 0 )
    v5 = (int *)(v6 - 8);
  if ( a3 == v5 )
  {
    v9 = a3[4];
  }
  else
  {
    v32 = (unsigned int)(uintptr_t)(a3 + 2);
    v7 = a3[2];
    if ( (v7 & 1) != 0 || v32 != (*(uint32_t *)(v7 & 0xFFFFFFFE) & 0xFFFFFFFE) )
    {
      v8 = a3[3];
      if ( v8 != 0 )
      {
        while ( *(uint32_t *)(v8 + 8) != 0 )
          v8 = *(uint32_t *)(v8 + 8);
      }
      else
      {
        v30 = (uint32_t *)(v7 & 0xFFFFFFFE);
        v8 = (unsigned int)(uintptr_t)(v30);
        if ( v30[1] == v32 )
        {
          while ( 1 )
          {
            v8 = *v30 & 0xFFFFFFFE;
            if ( v30 != *(uint32_t **)(v8 + 4) )
              break;
            v30 = (uint32_t *)(*v30 & 0xFFFFFFFE);
          }
        }
      }
      v9 = a3[4];
    }
    else
    {
      v9 = a3[4];
      v8 = v9;
    }
    v10 = 0;
    if ( v8 != 0 )
      v10 = v8 - 8;
    if ( a2[1] < *(uint32_t *)(v10 + 4) )
      goto LABEL_13;
  }
  v22 = v9;
  if ( v9 != 0 )
  {
    while ( *(uint32_t *)(v22 + 4) != 0 )
      v22 = *(uint32_t *)(v22 + 4);
  }
  else
  {
    v27 = (uint32_t *)(a3[2] & 0xFFFFFFFE);
    if ( (int *)v27[2] == a3 + 2 )
    {
      v33 = v4;
      v28 = (uint32_t *)v27[2];
      while ( 1 )
      {
        v22 = *v27 & 0xFFFFFFFE;
        if ( *(uint32_t **)(v22 + 8) != v27 )
          break;
        v28 = v27;
        v27 = (uint32_t *)(*v27 & 0xFFFFFFFE);
      }
      v29 = v28;
      v4 = v33;
    }
    else
    {
      v22 = a3[2] & 0xFFFFFFFE;
      v29 = nullptr;
      v27 = (uint32_t *)(a3 + 2);
    }
    if ( v29 == (uint32_t *)v22 )
      v22 = (unsigned int)(uintptr_t)(v27);
  }
  v23 = 0;
  if ( v22 != 0 )
    v23 = v22 - 8;
  if ( v4 == v23 || *(uint32_t *)(v23 + 4) >= a2[1] )
  {
    v24 = *a2;
    a3[1] = a2[1];
    *a3 = v24;
    return 1;
  }
  v32 = (unsigned int)(uintptr_t)(a3 + 2);
LABEL_13:
  if ( v9 != 0 )
  {
    do
      v9 = *(uint32_t *)(v9 + 4);
    while ( v9 != 0 );
  }
  else
  {
    v31 = (uint32_t *)(a3[2] & 0xFFFFFFFE);
    if ( v31[2] == v32 )
    {
      while ( *(uint32_t **)((*v31 & 0xFFFFFFFE) + 8) == v31 )
        v31 = (uint32_t *)(*v31 & 0xFFFFFFFE);
    }
  }
  boost::multi_index::detail::ordered_index_node_impl_allocator_char_8071f8::rebalance_for_erase(
    v32,
    v4 + 8,
    v4 + 12,
    v4 + 16);
  v11 = a2[1];
  v12 = *(uint32_t *)(*(uint32_t *)(a1 - 4) + 8) & 0xFFFFFFFE;
  if ( v12 == 0 || (v13 = (uint32_t *)(v12 - 8)) == nullptr )
  {
    v13 = *(uint32_t **)(a1 - 4);
LABEL_42:
    v25 = a2[1];
    v17 = (unsigned int)(uintptr_t)(v13 + 2);
    *a3 = *a2;
    a3[1] = v25;
    v26 = *(uint32_t **)(a1 - 4);
    v13[3] = v32;
    v19 = v26 + 2;
    if ( v13 + 2 == v26 + 2 )
    {
      v26[2] = v32 | v26[2] & 1;
      v26[4] = v32;
    }
    else if ( v17 == v26[3] )
    {
      v26[3] = v32;
    }
    goto LABEL_27;
  }
  while ( v11 < v13[1] )
  {
    v14 = v13[3];
    if ( v14 == 0 )
      goto LABEL_23;
LABEL_19:
    v15 = (uint32_t *)(v14 - 8);
    if ( v15 == nullptr )
      goto LABEL_23;
    v13 = v15;
  }
  v14 = v13[4];
  if ( v14 != 0 )
    goto LABEL_19;
LABEL_23:
  if ( v11 < v13[1] )
    goto LABEL_42;
  v16 = a2[1];
  v17 = (unsigned int)(uintptr_t)(v13 + 2);
  *a3 = *a2;
  a3[1] = v16;
  v18 = *(uint32_t *)(a1 - 4);
  v13[4] = v32;
  if ( v13 + 2 == *(uint32_t **)(v18 + 16) )
    *(uint32_t *)(v18 + 16) = v32;
  v19 = (uint32_t *)(v18 + 8);
LABEL_27:
  v20 = a3[2];
  a3[3] = 0;
  a3[4] = 0;
  a3[2] = v17 | v20 & 1;
  boost::multi_index::detail::ordered_index_node_impl_allocator_char_8071f8::rebalance(v32, v19);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_D34CC0  (binary VA: 0xd34cc0)
// Original: sub_D34CC0
// ----------------------------------------------------------------------------
void sub_D34CC0()
{
  unsigned int v0;
  int v1;
  bool v2;
  void *v3;
  void *v4;
  int v5;
  void *v6;
  unsigned int v7;
  int v8;
  void *v9;
  void *v10;
  int v11;
  void *v12;
  unsigned int v13;
  int v14;
  void *v15;
  void *v16;
  int v17;
  void *v18;

  v0 = *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[9] + 20) & 0xFFFFFFFE;
  if ( v0 != 0 && v0 != 20 )
  {
    v1 = *(uint32_t *)(v0 + 4);
    v2 = v1 == 0;
    v3 = (void *)(v1 - 20);
    v4 = nullptr;
    if ( !v2 )
      v4 = v3;
    boost::multi_index::detail::ordered_index_multi_index_member_colla_423696::delete_all_nodes(
      (int)(uintptr_t)(&glitch::collada::ps::IParticleSystemBaker::MaxParticles[10]),
      v4);
    v5 = *(uint32_t *)(v0 + 8);
    v6 = nullptr;
    if ( v5 != 0 )
      v6 = (void *)(v5 - 20);
    boost::multi_index::detail::ordered_index_multi_index_member_colla_423696::delete_all_nodes(
      (int)(uintptr_t)(&glitch::collada::ps::IParticleSystemBaker::MaxParticles[10]),
      v6);
    opDelete((void *)(v0 - 20));
  }
  opDelete((void *)glitch::collada::ps::IParticleSystemBaker::MaxParticles[9]);
  v7 = *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[5] + 20) & 0xFFFFFFFE;
  if ( v7 != 0 && v7 != 20 )
  {
    v8 = *(uint32_t *)(v7 + 4);
    v2 = v8 == 0;
    v9 = (void *)(v8 - 20);
    v10 = nullptr;
    if ( !v2 )
      v10 = v9;
    boost::multi_index::detail::ordered_index_multi_index_member_colla_423696::delete_all_nodes(
      (int)(uintptr_t)(&glitch::collada::ps::IParticleSystemBaker::MaxParticles[6]),
      v10);
    v11 = *(uint32_t *)(v7 + 8);
    v12 = nullptr;
    if ( v11 != 0 )
      v12 = (void *)(v11 - 20);
    boost::multi_index::detail::ordered_index_multi_index_member_colla_423696::delete_all_nodes(
      (int)(uintptr_t)(&glitch::collada::ps::IParticleSystemBaker::MaxParticles[6]),
      v12);
    opDelete((void *)(v7 - 20));
  }
  opDelete((void *)glitch::collada::ps::IParticleSystemBaker::MaxParticles[5]);
  v13 = *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[1] + 20) & 0xFFFFFFFE;
  if ( v13 != 0 && v13 != 20 )
  {
    v14 = *(uint32_t *)(v13 + 4);
    v2 = v14 == 0;
    v15 = (void *)(v14 - 20);
    v16 = nullptr;
    if ( !v2 )
      v16 = v15;
    boost::multi_index::detail::ordered_index_multi_index_member_colla_423696::delete_all_nodes(
      (int)(uintptr_t)(&glitch::collada::ps::IParticleSystemBaker::MaxParticles[2]),
      v16);
    v17 = *(uint32_t *)(v13 + 8);
    v18 = nullptr;
    if ( v17 != 0 )
      v18 = (void *)(v17 - 20);
    boost::multi_index::detail::ordered_index_multi_index_member_colla_423696::delete_all_nodes(
      (int)(uintptr_t)(&glitch::collada::ps::IParticleSystemBaker::MaxParticles[2]),
      v18);
    opDelete((void *)(v13 - 20));
  }
  opDelete((void *)glitch::collada::ps::IParticleSystemBaker::MaxParticles[1]);
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_0e8b5b  (binary VA: 0xd39ca0)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SSortPriorityForce>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_0e8b5b(char *a1, char *a2, int a3)
{
  char *j;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int k;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char *v17;
  int v18;
  char *m;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  int *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  char *v33;
  int *v34;
  char *v35;
  char *v36;
  char *v37;
  char *i;
  int v39;
  char *v40;
  char *v41;
  int v42;
  int v43;
  int v44;
  char *v45;
  char *v46;
  int v47;
  int v48;
  int v49;
  int v50;

  j = a2;
  result = a2 - a1;
  if ( a2 - a1 > 67 )
  {
    if ( a3 != 0 )
    {
      for ( i = a2; ; i = j )
      {
        v5 = *(uint32_t *)a1;
        --a3;
        v33 = &a1[4 * (result >> 3)];
        v6 = *(uint32_t *)v33;
        v7 = *(uint32_t *)(*(uint32_t *)a1 + 8);
        v39 = *(uint32_t *)(*(uint32_t *)v33 + 8);
        v8 = *((uint32_t *)i - 1);
        v9 = *(uint32_t *)(v8 + 8);
        v31 = v9;
        if ( v7 >= v39 )
        {
          if ( v7 >= v9 )
          {
            if ( v39 >= v9 )
            {
              *(uint32_t *)a1 = v6;
              *(uint32_t *)v33 = v5;
              v8 = *((uint32_t *)i - 1);
              v7 = *(uint32_t *)(*(uint32_t *)a1 + 8);
              v31 = *(uint32_t *)(v8 + 8);
              goto LABEL_7;
            }
            *(uint32_t *)a1 = v8;
            *((uint32_t *)i - 1) = v5;
LABEL_20:
            v7 = *(uint32_t *)(*(uint32_t *)a1 + 8);
            v31 = *(uint32_t *)(v5 + 8);
            v8 = v5;
          }
        }
        else
        {
          if ( v39 >= v9 )
          {
            if ( v7 >= v9 )
              goto LABEL_7;
            *(uint32_t *)a1 = v8;
            *((uint32_t *)i - 1) = v5;
            goto LABEL_20;
          }
          *(uint32_t *)a1 = v6;
          *(uint32_t *)v33 = v5;
          v8 = *((uint32_t *)i - 1);
          v7 = *(uint32_t *)(*(uint32_t *)a1 + 8);
          v31 = *(uint32_t *)(v8 + 8);
        }
LABEL_7:
        v10 = (unsigned int)(uintptr_t)(i);
        for ( j = a1 + 4; ; j += 4 )
        {
          for ( k = *(uint32_t *)j; *(uint32_t *)(*(uint32_t *)j + 8) < v7; k = *(uint32_t *)j )
            j += 4;
          v10 -= 4;
          if ( v31 > v7 )
          {
            do
            {
              v10 -= 4;
              v8 = *(uint32_t *)v10;
            }
            while ( *(uint32_t *)(*(uint32_t *)v10 + 8) > v7 );
          }
          if ( v10 <= (unsigned int)(uintptr_t)(j) )
            break;
          *(uint32_t *)j = v8;
          v8 = *(uint32_t *)(v10 - 4);
          *(uint32_t *)v10 = k;
          v7 = *(uint32_t *)(*(uint32_t *)a1 + 8);
          v31 = *(uint32_t *)(v8 + 8);
        }
        g4_std::introsort_loop_gnu_cxx_normal_iterator_0e8b5b(
          j,
          i,
          a3);
        result = j - a1;
        if ( j - a1 <= 67 )
          return result;
        if ( a3 == 0 )
          break;
      }
    }
    v18 = result >> 2;
    v45 = j;
    v50 = v18 & 1;
    v42 = (v18 - 1) >> 1;
    v48 = (v18 - 2) >> 1;
    v44 = v48;
    v46 = &a1[4 * v48];
    for ( m = v46; ; m = v46 )
    {
      v20 = *(uint32_t *)m;
      v36 = m;
      v21 = v44;
      v49 = v20;
      v22 = v44;
      if ( v44 < v42 )
      {
        while ( 1 )
        {
          v41 = &a1[8 * v22 + 8];
          v23 = *(uint32_t *)v41;
          v37 = &a1[8 * v22 + 4];
          v24 = 2 * (v22 + 1);
          if ( *(uint32_t *)(*(uint32_t *)v41 + 8) < *(uint32_t *)(*(uint32_t *)v37 + 8) )
          {
            v23 = *(uint32_t *)v37;
            v24 = 2 * (v22 + 1) - 1;
          }
          v25 = &a1[8 * v22 + 8];
          if ( *(uint32_t *)(*(uint32_t *)v41 + 8) < *(uint32_t *)(*(uint32_t *)v37 + 8) )
            v25 = &a1[8 * v22 + 4];
          v36 = v25;
          *(uint32_t *)&a1[4 * v22] = v23;
          if ( v24 >= v42 )
            break;
          v22 = v24;
        }
        v21 = v24;
      }
      if ( v50 == 0 && v48 == v21 )
      {
        v36 = &a1[8 * v48 + 4];
        v21 = 2 * v48 + 1;
        *(uint32_t *)&a1[4 * v48] = *(uint32_t *)v36;
      }
      if ( v44 < v21 )
      {
        v26 = (v21 - 1) / 2;
        v27 = *(uint32_t *)&a1[4 * v26];
        if ( *(uint32_t *)(v27 + 8) < *(uint32_t *)(v49 + 8) )
        {
          while ( 1 )
          {
            *(uint32_t *)&a1[4 * v21] = v27;
            v36 = &a1[4 * v26];
            if ( v44 >= v26 )
              break;
            v27 = *(uint32_t *)&a1[4 * ((v26 - 1) / 2)];
            if ( *(uint32_t *)(v27 + 8) >= *(uint32_t *)(v49 + 8) )
              break;
            v21 = v26;
            v26 = (v26 - 1) / 2;
          }
        }
      }
      v46 -= 4;
      *(uint32_t *)v36 = v49;
      if ( v44 == 0 )
        break;
      --v44;
    }
    while ( 1 )
    {
      v45 -= 4;
      v12 = 0;
      v13 = 0;
      v34 = (int *)a1;
      v14 = *(uint32_t *)v45;
      *(uint32_t *)v45 = *(uint32_t *)a1;
      v47 = v14;
      v43 = (v45 - a1) >> 2;
      if ( (v43 - 1) / 2 > 0 )
      {
        while ( 1 )
        {
          v32 = 2 * (v13 + 1);
          v40 = &a1[8 * v13 + 8];
          v15 = *(uint32_t *)v40;
          v35 = &a1[4 * v32 - 4];
          v16 = v32;
          if ( *(uint32_t *)(*(uint32_t *)v40 + 8) < *(uint32_t *)(*(uint32_t *)v35 + 8) )
          {
            v15 = *(uint32_t *)v35;
            v16 = v32 - 1;
          }
          v17 = &a1[8 * v13 + 8];
          if ( *(uint32_t *)(*(uint32_t *)v40 + 8) < *(uint32_t *)(*(uint32_t *)v35 + 8) )
            v17 = &a1[4 * v32 - 4];
          v34 = (int *)v17;
          *(uint32_t *)&a1[4 * v13] = v15;
          if ( (v43 - 1) / 2 <= v16 )
            break;
          v13 = v16;
        }
        v12 = v16;
      }
      if ( (v43 & 1) == 0 && v12 == (v43 - 2) / 2 )
        break;
      if ( v12 > 0 )
        goto LABEL_59;
LABEL_36:
      result = v47;
      *v34 = v47;
      if ( v45 - a1 <= 7 )
        return result;
    }
    v28 = v34;
    v12 = 2 * v12 + 1;
    v34 = (int *)&a1[4 * v12];
    *v28 = *v34;
LABEL_59:
    v29 = (v12 - 1) >> 1;
    v30 = *(uint32_t *)&a1[4 * v29];
    if ( *(uint32_t *)(v30 + 8) < *(uint32_t *)(v47 + 8) )
    {
      while ( 1 )
      {
        *(uint32_t *)&a1[4 * v12] = v30;
        v34 = (int *)&a1[4 * v29];
        if ( v29 == 0 )
          break;
        v30 = *(uint32_t *)&a1[4 * ((v29 - 1) >> 1)];
        if ( *(uint32_t *)(v30 + 8) >= *(uint32_t *)(v47 + 8) )
          break;
        v12 = v29;
        v29 = (v29 - 1) >> 1;
      }
    }
    goto LABEL_36;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_a27ef8  (binary VA: 0xd3a0d0)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SAlphaSort>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_a27ef8(char *a1, uint32_t *a2, int a3)
{
  uint32_t *j;
  int result;
  char *v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int k;
  char *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int *v33;
  char *v34;
  uint32_t *i;
  char *v36;
  char *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  char *v45;
  char *v46;
  int v47;
  int v48;

  j = a2;
  result = (char *)a2 - a1;
  if ( (char *)a2 - a1 > 67 )
  {
    if ( a3 != 0 )
    {
      for ( i = a2; ; i = j )
      {
        --a3;
        v5 = &a1[4 * (result >> 3)];
        v6 = *(uint32_t *)a1;
        v7 = *(uint32_t *)v5;
        v8 = *(i - 1);
        v9 = *(float *)(*(uint32_t *)a1 + 172);
        v10 = *(float *)(*(uint32_t *)v5 + 172);
        v11 = *(float *)(v8 + 172);
        if ( v9 <= v10 )
        {
          if ( v9 <= v11 )
          {
            if ( v10 <= v11 )
            {
              *(uint32_t *)a1 = v7;
              *(uint32_t *)v5 = v6;
              v9 = *(float *)(*(uint32_t *)a1 + 172);
              v8 = *(i - 1);
              v11 = *(float *)(v8 + 172);
              goto LABEL_7;
            }
            *(uint32_t *)a1 = v8;
            v16 = i;
LABEL_20:
            *(v16 - 1) = v6;
            v9 = *(float *)(*(uint32_t *)a1 + 172);
            v8 = v6;
            v11 = *(float *)(v6 + 172);
          }
        }
        else
        {
          if ( v10 <= v11 )
          {
            if ( v9 <= v11 )
              goto LABEL_7;
            *(uint32_t *)a1 = v8;
            v16 = i;
            goto LABEL_20;
          }
          *(uint32_t *)a1 = v7;
          *(uint32_t *)v5 = v6;
          v8 = *(i - 1);
          v11 = *(float *)(v8 + 172);
          v9 = *(float *)(*(uint32_t *)a1 + 172);
        }
LABEL_7:
        v12 = i;
        for ( j = (uint32_t *)(a1 + 4); ; ++j )
        {
          while ( 1 )
          {
            v13 = *j;
            if ( v9 >= *(float *)(*j + 172) )
              break;
            ++j;
          }
          v14 = v12 - 2;
          --v12;
          if ( v9 > v11 )
          {
            do
            {
              v8 = *v14;
              v12 = v14;
            }
            while ( v9 > *(float *)(*v14-- + 172) );
          }
          if ( v12 <= j )
            break;
          *j = v8;
          *v12 = v13;
          v8 = *(v12 - 1);
          v11 = *(float *)(v8 + 172);
          v9 = *(float *)(*(uint32_t *)a1 + 172);
        }
        g4_std::introsort_loop_gnu_cxx_normal_iterator_a27ef8(
          (char *)(j),
          i,
          a3);
        result = (char *)j - a1;
        if ( (char *)j - a1 <= 67 )
          return result;
        if ( a3 == 0 )
          break;
      }
    }
    v22 = result >> 2;
    v45 = (char *)j;
    v48 = v22 & 1;
    v47 = (v22 - 2) >> 1;
    v40 = (v22 - 1) >> 1;
    v46 = &a1[4 * v47];
    v42 = v47;
    for ( k = v47; ; k = v42 )
    {
      v24 = v46;
      v39 = k;
      v44 = *(uint32_t *)v46;
      if ( k < v40 )
      {
        while ( 1 )
        {
          v25 = 2 * (k + 1) - 1;
          v37 = &a1[8 * k + 8];
          v34 = &a1[4 * v25];
          v26 = *(uint32_t *)v34;
          v24 = v34;
          if ( *(float *)(*(uint32_t *)v34 + 172) >= *(float *)(*(uint32_t *)v37 + 172) )
          {
            v25 = 2 * (k + 1);
            v26 = *(uint32_t *)v37;
            v24 = &a1[8 * k + 8];
          }
          v39 = v25;
          *(uint32_t *)&a1[4 * k] = v26;
          if ( v25 >= v40 )
            break;
          k = v25;
        }
      }
      if ( v48 == 0 && v47 == v39 )
      {
        v39 = 2 * v47 + 1;
        *(uint32_t *)&a1[4 * v47] = *(uint32_t *)&a1[4 * v39];
        v24 = &a1[4 * v39];
      }
      if ( v42 < v39 )
      {
        v27 = (v39 - 1) / 2;
        v28 = *(uint32_t *)&a1[4 * v27];
        if ( *(float *)(v28 + 172) > *(float *)(v44 + 172) )
        {
          v29 = v39;
          while ( 1 )
          {
            v24 = &a1[4 * v27];
            *(uint32_t *)&a1[4 * v29] = v28;
            if ( v42 >= v27 )
              break;
            v28 = *(uint32_t *)&a1[4 * ((v27 - 1) / 2)];
            if ( *(float *)(v28 + 172) <= *(float *)(v44 + 172) )
              break;
            v29 = v27;
            v27 = (v27 - 1) / 2;
          }
        }
      }
      v46 -= 4;
      *(uint32_t *)v24 = v44;
      if ( v42 == 0 )
        break;
      --v42;
    }
    while ( 1 )
    {
      v45 -= 4;
      v17 = 0;
      v38 = 0;
      v18 = *(uint32_t *)v45;
      *(uint32_t *)v45 = *(uint32_t *)a1;
      v41 = v18;
      v43 = (v45 - a1) >> 2;
      v19 = (int *)a1;
      if ( (v43 - 1) / 2 > 0 )
      {
        while ( 1 )
        {
          v20 = 2 * (v17 + 1) - 1;
          v36 = &a1[8 * v17 + 8];
          v33 = (int *)&a1[4 * v20];
          v21 = *v33;
          v19 = v33;
          if ( *(float *)(*v33 + 172) >= *(float *)(*(uint32_t *)v36 + 172) )
          {
            v20 = 2 * (v17 + 1);
            v21 = *(uint32_t *)v36;
            v19 = (int *)&a1[8 * v17 + 8];
          }
          v38 = v20;
          *(uint32_t *)&a1[4 * v17] = v21;
          if ( (v43 - 1) / 2 <= v20 )
            break;
          v17 = v20;
        }
      }
      if ( (v43 & 1) == 0 && v38 == (v43 - 2) / 2 )
        break;
      if ( v38 > 0 )
        goto LABEL_54;
LABEL_33:
      result = v41;
      *v19 = v41;
      if ( v45 - a1 <= 7 )
        return result;
    }
    v38 = 2 * v38 + 1;
    *v19 = *(uint32_t *)&a1[4 * v38];
    v19 = (int *)&a1[4 * v38];
LABEL_54:
    v30 = (v38 - 1) >> 1;
    v31 = *(uint32_t *)&a1[4 * v30];
    if ( *(float *)(v31 + 172) > *(float *)(v41 + 172) )
    {
      v32 = v38;
      while ( 1 )
      {
        v19 = (int *)&a1[4 * v30];
        *(uint32_t *)&a1[4 * v32] = v31;
        if ( v30 == 0 )
          break;
        v31 = *(uint32_t *)&a1[4 * ((v30 - 1) >> 1)];
        if ( *(float *)(v31 + 172) <= *(float *)(v41 + 172) )
          break;
        v32 = v30;
        v30 = (v30 - 1) >> 1;
      }
    }
    goto LABEL_33;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_27eead  (binary VA: 0xd3a550)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::ps::SAgeSort>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_27eead(char *a1, uint32_t *a2, int a3)
{
  uint32_t *j;
  int result;
  char *v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int k;
  char *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int *v33;
  char *v34;
  uint32_t *i;
  char *v36;
  char *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  char *v45;
  char *v46;
  int v47;
  int v48;

  j = a2;
  result = (char *)a2 - a1;
  if ( (char *)a2 - a1 > 67 )
  {
    if ( a3 != 0 )
    {
      for ( i = a2; ; i = j )
      {
        --a3;
        v5 = &a1[4 * (result >> 3)];
        v6 = *(uint32_t *)a1;
        v7 = *(uint32_t *)v5;
        v8 = *(i - 1);
        v9 = *(float *)(*(uint32_t *)a1 + 84);
        v10 = *(float *)(*(uint32_t *)v5 + 84);
        v11 = *(float *)(v8 + 84);
        if ( v9 <= v10 )
        {
          if ( v9 <= v11 )
          {
            if ( v10 <= v11 )
            {
              *(uint32_t *)a1 = v7;
              *(uint32_t *)v5 = v6;
              v9 = *(float *)(*(uint32_t *)a1 + 84);
              v8 = *(i - 1);
              v11 = *(float *)(v8 + 84);
              goto LABEL_7;
            }
            *(uint32_t *)a1 = v8;
            v16 = i;
LABEL_20:
            *(v16 - 1) = v6;
            v9 = *(float *)(*(uint32_t *)a1 + 84);
            v8 = v6;
            v11 = *(float *)(v6 + 84);
          }
        }
        else
        {
          if ( v10 <= v11 )
          {
            if ( v9 <= v11 )
              goto LABEL_7;
            *(uint32_t *)a1 = v8;
            v16 = i;
            goto LABEL_20;
          }
          *(uint32_t *)a1 = v7;
          *(uint32_t *)v5 = v6;
          v8 = *(i - 1);
          v11 = *(float *)(v8 + 84);
          v9 = *(float *)(*(uint32_t *)a1 + 84);
        }
LABEL_7:
        v12 = i;
        for ( j = (uint32_t *)(a1 + 4); ; ++j )
        {
          while ( 1 )
          {
            v13 = *j;
            if ( v9 >= *(float *)(*j + 84) )
              break;
            ++j;
          }
          v14 = v12 - 2;
          --v12;
          if ( v9 > v11 )
          {
            do
            {
              v8 = *v14;
              v12 = v14;
            }
            while ( v9 > *(float *)(*v14-- + 84) );
          }
          if ( v12 <= j )
            break;
          *j = v8;
          *v12 = v13;
          v8 = *(v12 - 1);
          v11 = *(float *)(v8 + 84);
          v9 = *(float *)(*(uint32_t *)a1 + 84);
        }
        g4_std::introsort_loop_gnu_cxx_normal_iterator_27eead(
          (char *)(j),
          i,
          a3);
        result = (char *)j - a1;
        if ( (char *)j - a1 <= 67 )
          return result;
        if ( a3 == 0 )
          break;
      }
    }
    v22 = result >> 2;
    v45 = (char *)j;
    v48 = v22 & 1;
    v47 = (v22 - 2) >> 1;
    v40 = (v22 - 1) >> 1;
    v46 = &a1[4 * v47];
    v42 = v47;
    for ( k = v47; ; k = v42 )
    {
      v24 = v46;
      v39 = k;
      v44 = *(uint32_t *)v46;
      if ( k < v40 )
      {
        while ( 1 )
        {
          v25 = 2 * (k + 1) - 1;
          v37 = &a1[8 * k + 8];
          v34 = &a1[4 * v25];
          v26 = *(uint32_t *)v34;
          v24 = v34;
          if ( *(float *)(*(uint32_t *)v34 + 84) >= *(float *)(*(uint32_t *)v37 + 84) )
          {
            v25 = 2 * (k + 1);
            v26 = *(uint32_t *)v37;
            v24 = &a1[8 * k + 8];
          }
          v39 = v25;
          *(uint32_t *)&a1[4 * k] = v26;
          if ( v25 >= v40 )
            break;
          k = v25;
        }
      }
      if ( v48 == 0 && v47 == v39 )
      {
        v39 = 2 * v47 + 1;
        *(uint32_t *)&a1[4 * v47] = *(uint32_t *)&a1[4 * v39];
        v24 = &a1[4 * v39];
      }
      if ( v42 < v39 )
      {
        v27 = (v39 - 1) / 2;
        v28 = *(uint32_t *)&a1[4 * v27];
        if ( *(float *)(v28 + 84) > *(float *)(v44 + 84) )
        {
          v29 = v39;
          while ( 1 )
          {
            v24 = &a1[4 * v27];
            *(uint32_t *)&a1[4 * v29] = v28;
            if ( v42 >= v27 )
              break;
            v28 = *(uint32_t *)&a1[4 * ((v27 - 1) / 2)];
            if ( *(float *)(v28 + 84) <= *(float *)(v44 + 84) )
              break;
            v29 = v27;
            v27 = (v27 - 1) / 2;
          }
        }
      }
      v46 -= 4;
      *(uint32_t *)v24 = v44;
      if ( v42 == 0 )
        break;
      --v42;
    }
    while ( 1 )
    {
      v45 -= 4;
      v17 = 0;
      v38 = 0;
      v18 = *(uint32_t *)v45;
      *(uint32_t *)v45 = *(uint32_t *)a1;
      v41 = v18;
      v43 = (v45 - a1) >> 2;
      v19 = (int *)a1;
      if ( (v43 - 1) / 2 > 0 )
      {
        while ( 1 )
        {
          v20 = 2 * (v17 + 1) - 1;
          v36 = &a1[8 * v17 + 8];
          v33 = (int *)&a1[4 * v20];
          v21 = *v33;
          v19 = v33;
          if ( *(float *)(*v33 + 84) >= *(float *)(*(uint32_t *)v36 + 84) )
          {
            v20 = 2 * (v17 + 1);
            v21 = *(uint32_t *)v36;
            v19 = (int *)&a1[8 * v17 + 8];
          }
          v38 = v20;
          *(uint32_t *)&a1[4 * v17] = v21;
          if ( (v43 - 1) / 2 <= v20 )
            break;
          v17 = v20;
        }
      }
      if ( (v43 & 1) == 0 && v38 == (v43 - 2) / 2 )
        break;
      if ( v38 > 0 )
        goto LABEL_54;
LABEL_33:
      result = v41;
      *v19 = v41;
      if ( v45 - a1 <= 7 )
        return result;
    }
    v38 = 2 * v38 + 1;
    *v19 = *(uint32_t *)&a1[4 * v38];
    v19 = (int *)&a1[4 * v38];
LABEL_54:
    v30 = (v38 - 1) >> 1;
    v31 = *(uint32_t *)&a1[4 * v30];
    if ( *(float *)(v31 + 84) > *(float *)(v41 + 84) )
    {
      v32 = v38;
      while ( 1 )
      {
        v19 = (int *)&a1[4 * v30];
        *(uint32_t *)&a1[4 * v32] = v31;
        if ( v30 == 0 )
          break;
        v31 = *(uint32_t *)&a1[4 * ((v30 - 1) >> 1)];
        if ( *(float *)(v31 + 84) <= *(float *)(v41 + 84) )
          break;
        v32 = v30;
        v30 = (v30 - 1) >> 1;
      }
    }
    goto LABEL_33;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_29c09e  (binary VA: 0xd3b720)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::collada::ps::IForce **,std::vector<glitch::collada::ps::IForce *,glitch::core::SAllocator<glitch::collada::ps::IForce *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SSortPriorityForce>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_gnu_cxx_normal_iterator_29c09e(char *src, char *a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  int v6;
  char *v7;
  char *v8;
  char *v9;
  int v10;

  if ( src != a2 )
  {
    v2 = src + 4;
    if ( src + 4 != a2 )
    {
      do
      {
        v3 = *(uint32_t *)v2;
        v4 = v2;
        v5 = *(uint32_t *)(*(uint32_t *)v2 + 8);
        if ( v5 < *(uint32_t *)(*(uint32_t *)src + 8) )
        {
          v9 = v2 + 4;
          v10 = (v2 - src) >> 2;
          if ( v10 != 0 )
            memmove(&v9[-4 * v10], src, 4 * v10);
          *(uint32_t *)src = v3;
        }
        else
        {
          v6 = *((uint32_t *)v2 - 1);
          v7 = v2;
          if ( v5 < *(uint32_t *)(v6 + 8) )
          {
            v8 = v2 - 4;
            while ( 1 )
            {
              *(uint32_t *)v4 = v6;
              v6 = *((uint32_t *)v8 - 1);
              v7 = v8;
              v8 -= 4;
              if ( *(uint32_t *)(v3 + 8) >= *(uint32_t *)(v6 + 8) )
                break;
              v4 = v7;
            }
          }
          *(uint32_t *)v7 = v3;
          v9 = v2 + 4;
        }
        v2 = v9;
      }
      while ( a2 != v9 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_263ec5  (binary VA: 0xd3b7d0)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SAlphaSort>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_gnu_cxx_normal_iterator_263ec5(char *src, char *a2)
{
  char *v2;
  int v3;
  float v4; // xmm0_4
  char *v5;
  int v6;
  char *v7;
  char *v8;
  int v9;
  char *v10;

  if ( src != a2 )
  {
    v2 = src + 4;
    if ( src + 4 != a2 )
    {
      do
      {
        v3 = *(uint32_t *)v2;
        v4 = *(float *)(*(uint32_t *)v2 + 172);
        v5 = v2;
        if ( v4 > *(float *)(*(uint32_t *)src + 172) )
        {
          v8 = v2 + 4;
          v9 = (v2 - src) >> 2;
          if ( v9 != 0 )
            memmove(&v8[-4 * v9], src, 4 * v9);
          *(uint32_t *)src = v3;
        }
        else
        {
          v6 = *((uint32_t *)v2 - 1);
          v7 = v2 - 4;
          if ( v4 > *(float *)(v6 + 172) )
          {
            while ( 1 )
            {
              *(uint32_t *)v5 = v6;
              v6 = *((uint32_t *)v7 - 1);
              v10 = v7;
              v7 -= 4;
              if ( *(float *)(v3 + 172) <= *(float *)(v6 + 172) )
                break;
              v5 = v10;
            }
          }
          else
          {
            v10 = v2;
          }
          *(uint32_t *)v10 = v3;
          v8 = v2 + 4;
        }
        v2 = v8;
      }
      while ( a2 != v8 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_9c4e3e  (binary VA: 0xd3b890)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::SAgeSort>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_gnu_cxx_normal_iterator_9c4e3e(char *src, char *a2)
{
  char *v2;
  int v3;
  float v4; // xmm0_4
  char *v5;
  int v6;
  char *v7;
  char *v8;
  int v9;
  char *v10;

  if ( src != a2 )
  {
    v2 = src + 4;
    if ( src + 4 != a2 )
    {
      do
      {
        v3 = *(uint32_t *)v2;
        v4 = *(float *)(*(uint32_t *)v2 + 84);
        v5 = v2;
        if ( v4 > *(float *)(*(uint32_t *)src + 84) )
        {
          v8 = v2 + 4;
          v9 = (v2 - src) >> 2;
          if ( v9 != 0 )
            memmove(&v8[-4 * v9], src, 4 * v9);
          *(uint32_t *)src = v3;
        }
        else
        {
          v6 = *((uint32_t *)v2 - 1);
          v7 = v2 - 4;
          if ( v4 > *(float *)(v6 + 84) )
          {
            while ( 1 )
            {
              *(uint32_t *)v5 = v6;
              v6 = *((uint32_t *)v7 - 1);
              v10 = v7;
              v7 -= 4;
              if ( *(float *)(v3 + 84) <= *(float *)(v6 + 84) )
                break;
              v5 = v10;
            }
          }
          else
          {
            v10 = v2;
          }
          *(uint32_t *)v10 = v3;
          v8 = v2 + 4;
        }
        v2 = v8;
      }
      while ( a2 != v8 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_D3DF30  (binary VA: 0xd3df30)
// Original: sub_D3DF30
// ----------------------------------------------------------------------------
int sub_D3DF30()
{
  float v0; // xmm5_4
  float v1; // xmm2_4
  float v2; // xmm3_4
  float v3; // xmm6_4
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm7_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm6_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm2_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm6_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm5_4
  float v46; // xmm7_4
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm0_4
  float v50; // xmm6_4
  float v51; // xmm2_4
  float v52; // xmm3_4
  float v53; // xmm0_4
  float v54; // xmm2_4
  float v55; // xmm5_4
  float v56; // xmm1_4
  float v57; // xmm6_4
  float v58; // xmm4_4
  float v59; // xmm0_4
  float v60; // xmm3_4
  float v61; // xmm1_4
  float v62; // xmm0_4
  float v63; // xmm2_4
  float v64; // xmm3_4
  float v65; // xmm7_4
  float v66; // xmm1_4
  float v67; // xmm4_4
  float v68; // xmm6_4
  float v69; // xmm0_4
  float v70; // xmm5_4
  float v71; // xmm2_4
  float v72; // xmm3_4
  float v73; // xmm1_4
  float v74; // xmm7_4
  float v75; // xmm0_4
  float v76; // xmm2_4
  float v77; // xmm6_4
  float v78; // xmm2_4
  float v79; // xmm0_4
  float v80; // xmm3_4
  float v81; // xmm1_4
  float v82; // xmm6_4
  float v83; // xmm2_4
  float v84; // xmm5_4
  float v85; // xmm4_4
  float v86; // xmm0_4
  float v87; // xmm3_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  int v90;
  int *v91;
  int v92;
  int *v93;
  uint32_t *v94;
  int v95;
  int v96;
  int v97;
  int v99;
  typedef float _g4_t_v100[3];
  typedef float _g4_t_v101[3];
  typedef float _g4_t_v102[3];
  typedef float _g4_t_v103[3];
  typedef float _g4_t_v104[3];
  typedef float _g4_t_v105[3];
  typedef float _g4_t_v106[3];
  typedef float _g4_t_v107[3];
  typedef float _g4_t_v108[3];
  typedef float _g4_t_v109[3];
  typedef float _g4_t_v110[3];
  typedef float _g4_t_v111[3];
  typedef float _g4_t_v112[3];
  typedef float _g4_t_v113[3];
  typedef float _g4_t_v114[3];
  typedef float _g4_t_v115[10];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v100)) > _g4_s0 ? (0u + sizeof(_g4_t_v100)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v101)) > _g4_s1 ? (12u + sizeof(_g4_t_v101)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v102)) > _g4_s2 ? (24u + sizeof(_g4_t_v102)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v103)) > _g4_s3 ? (36u + sizeof(_g4_t_v103)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v104)) > _g4_s4 ? (48u + sizeof(_g4_t_v104)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v105)) > _g4_s5 ? (60u + sizeof(_g4_t_v105)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v106)) > _g4_s6 ? (72u + sizeof(_g4_t_v106)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v107)) > _g4_s7 ? (84u + sizeof(_g4_t_v107)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v108)) > _g4_s8 ? (96u + sizeof(_g4_t_v108)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v109)) > _g4_s9 ? (108u + sizeof(_g4_t_v109)) : _g4_s9,
    _g4_s11 = (120u + sizeof(_g4_t_v110)) > _g4_s10 ? (120u + sizeof(_g4_t_v110)) : _g4_s10,
    _g4_s12 = (132u + sizeof(_g4_t_v111)) > _g4_s11 ? (132u + sizeof(_g4_t_v111)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v112)) > _g4_s12 ? (144u + sizeof(_g4_t_v112)) : _g4_s12,
    _g4_s14 = (156u + sizeof(_g4_t_v113)) > _g4_s13 ? (156u + sizeof(_g4_t_v113)) : _g4_s13,
    _g4_s15 = (168u + sizeof(_g4_t_v114)) > _g4_s14 ? (168u + sizeof(_g4_t_v114)) : _g4_s14,
    _g4_s16 = (180u + sizeof(_g4_t_v115)) > _g4_s15 ? (180u + sizeof(_g4_t_v115)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 0u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 12u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 24u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 36u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 48u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 60u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 72u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 84u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 96u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 108u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 120u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 132u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 144u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 156u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 168u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 180u);

  sub_1900D70(&unk_20DFC14);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DFC14, &unk_20D1280);
  dword_20DFC00 = 1056964608;
  dword_20DFC04 = 1056964608;
  dword_20DFC08 = 1056964608;
  v100[0] = -1.0;
  v100[1] = -1.0;
  v100[2] = -1.0;
  glitch::core::normalize_float_id_c8d10b(glitch::collada::CSphericalParametricController2d::GridPlaneNormals, v100);
  v101[0] = -1.0;
  v101[1] = -1.0;
  v101[2] = 1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneNormals[3], v101);
  v102[0] = -1.0;
  v102[1] = 1.0;
  v102[2] = -1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneNormals[6], v102);
  v103[0] = -1.0;
  v103[1] = 1.0;
  v103[2] = 1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneNormals[9], v103);
  v104[0] = 1.0;
  v104[1] = -1.0;
  v104[2] = -1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneNormals[12], v104);
  v105[0] = 1.0;
  v105[1] = -1.0;
  v105[2] = 1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneNormals[15], v105);
  v106[0] = 1.0;
  v106[1] = 1.0;
  v106[2] = -1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneNormals[18], v106);
  v107[0] = 1.0;
  v107[1] = 1.0;
  v107[2] = 1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneNormals[21], v107);
  v108[0] = 0.0;
  v108[1] = 1.0;
  v108[2] = -1.0;
  glitch::core::normalize_float_id_c8d10b(glitch::collada::CSphericalParametricController2d::GridPlaneTangents, v108);
  v109[0] = 0.0;
  v109[1] = 1.0;
  v109[2] = 1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneTangents[3], v109);
  v110[0] = 0.0;
  v110[1] = 1.0;
  v110[2] = 1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneTangents[6], v110);
  v111[0] = 0.0;
  v111[1] = 1.0;
  v111[2] = -1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneTangents[9], v111);
  v112[0] = 0.0;
  v112[1] = 1.0;
  v112[2] = -1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneTangents[12], v112);
  v113[0] = 0.0;
  v113[1] = 1.0;
  v113[2] = 1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneTangents[15], v113);
  v114[0] = 0.0;
  v114[1] = 1.0;
  v114[2] = 1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneTangents[18], v114);
  v115[0] = 0.0;
  v115[1] = 1.0;
  v115[2] = -1.0;
  glitch::core::normalize_float_id_c8d10b(&glitch::collada::CSphericalParametricController2d::GridPlaneTangents[21], v115);
  v0 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[1];
  v1 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[2];
  v2 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[1];
  v3 = v1 * glitch::collada::CSphericalParametricController2d::GridPlaneNormals[0];
  v4 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[0] * v0;
  v5 = (float)(v1 * v2) - (float)(glitch::collada::CSphericalParametricController2d::GridPlaneNormals[2] * v0);
  v6 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[4];
  v7 = (float)(glitch::collada::CSphericalParametricController2d::GridPlaneNormals[2]
             * glitch::collada::CSphericalParametricController2d::GridPlaneTangents[0])
     - v3;
  v8 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[5];
  v9 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[3];
  v10 = v4 - (float)(v2 * glitch::collada::CSphericalParametricController2d::GridPlaneTangents[0]);
  v11 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[4];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[0] = v5;
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[1] = v7;
  v12 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[5];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[2] = v10;
  v13 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[3];
  v14 = v8 * v11;
  v15 = v11 * v9;
  v16 = v12 * v6;
  v17 = (float)(v12 * v9) - (float)(v8 * v13);
  v18 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[6];
  v19 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[8];
  v20 = (float)(v13 * v6) - v15;
  v21 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[7];
  v22 = v14 - v16;
  v23 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[7];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[4] = v17;
  v24 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[8];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[5] = v20;
  v25 = v24;
  v26 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[6];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[3] = v22;
  v27 = v19;
  v28 = v19 * v26;
  v29 = v27 * v23;
  v30 = v26 * v21;
  v31 = v23 * v18;
  v32 = (float)(v24 * v18) - v28;
  v33 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[11];
  v34 = v29 - (float)(v25 * v21);
  v35 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[10];
  v36 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[9];
  v37 = v30 - v31;
  v38 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[10];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[7] = v32;
  v39 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[11];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[6] = v34;
  v40 = v33;
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[8] = v37;
  v41 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[9];
  v42 = v33 * v41;
  v43 = (float)(v41 * v35) - (float)(v38 * v36);
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[9] = (float)(v40 * v38) - (float)(v39 * v35);
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[10] = (float)(v39 * v36) - v42;
  v44 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[14];
  v45 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[13];
  v46 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[14];
  v47 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[12];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[11] = v43;
  v48 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[13];
  v49 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[12];
  v50 = v44 * v49;
  v51 = v44 * v48;
  v52 = v48 * v47;
  v53 = v49 * v45;
  v54 = v51 - (float)(v46 * v45);
  v55 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[16];
  v56 = (float)(v46 * v47) - v50;
  v57 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[17];
  v58 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[15];
  v59 = v53 - v52;
  v60 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[16];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[12] = v54;
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[13] = v56;
  v61 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[17];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[14] = v59;
  v62 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[15];
  v63 = v57 * v60;
  v64 = v60 * v58;
  v65 = v61 * v55;
  v66 = (float)(v61 * v58) - (float)(v57 * v62);
  v67 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[18];
  v68 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[20];
  v69 = (float)(v62 * v55) - v64;
  v70 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[19];
  v71 = v63 - v65;
  v72 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[19];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[16] = v66;
  v73 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[20];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[17] = v69;
  v74 = v73;
  v75 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[18];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[15] = v71;
  v76 = v68;
  v77 = v68 * v75;
  v78 = v76 * v72;
  v79 = v75 * v70;
  v80 = v72 * v67;
  v81 = (float)(v73 * v67) - v77;
  v82 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[23];
  v83 = v78 - (float)(v74 * v70);
  v84 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[22];
  v85 = glitch::collada::CSphericalParametricController2d::GridPlaneTangents[21];
  v86 = v79 - v80;
  v87 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[22];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[19] = v81;
  v88 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[23];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[18] = v83;
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[20] = v86;
  v89 = glitch::collada::CSphericalParametricController2d::GridPlaneNormals[21];
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[21] = (float)(v82 * v87) - (float)(v88 * v84);
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[22] = (float)(v88 * v85) - (float)(v82 * v89);
  glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[23] = (float)(v89 * v84) - (float)(v87 * v85);
  glf::SpinLock::Construct((glf::SpinLock::Self *)&glitch::collada::CColladaFactory::ResFileSharedContentLock);
  __cxa_atexit(
    (void (*)(void *))glf::SpinLock::Destroy,
    &glitch::collada::CColladaFactory::ResFileSharedContentLock,
    &unk_20D1280);
  glitch::collada::CColladaFactoryCommonSkinned::Construct((glitch::collada::CColladaFactoryCommonSkinned::Self *)&glitch::collada::CColladaFactoryCommonSkinned::Factory);
  __cxa_atexit(
    (void (*)(void *))glitch::collada::CColladaFactoryCommonSkinned::Destroy,
    &glitch::collada::CColladaFactoryCommonSkinned::Factory,
    &unk_20D1280);
  glf::SpinLock::Construct((glf::SpinLock::Self *)&glitch::collada::CMesh::ResFileSharedContentLock);
  v90 = 38;
  __cxa_atexit(
    (void (*)(void *))glf::SpinLock::Destroy,
    &glitch::collada::CMesh::ResFileSharedContentLock,
    &unk_20D1280);
  byte_20DFBC0 = 0;
  v91 = (int *)&unk_1C81A60;
  while ( 1 )
  {
    v92 = v90 >> 1;
    v93 = &v91[v90 >> 1];
    if ( (unsigned int)*v93 > 0xA )
      break;
    v99 = v90 >> 1;
    v92 = v90;
LABEL_10:
    v91 = v93 + 1;
    v90 = v92 - v99 - 1;
    if ( v90 <= 0 )
      goto LABEL_7;
  }
  while ( v92 > 0 )
  {
    v99 = v92 >> 1;
    v93 = &v91[v92 >> 1];
    if ( (unsigned int)*v93 <= 0xA )
      goto LABEL_10;
    v92 >>= 1;
  }
LABEL_7:
  dword_20DFBC8 = 0;
  dword_20DFBCC = 1065353216;
  dword_20DFBD0 = 0;
  dword_20DFBD4 = 0;
  if ( v91 == (int *)jpt_628CA1 )
    v91 = (int *)&unk_1C81AF4;
  dword_20DFBC4 = *v91;
  glf::Mutex::Construct((pthread_mutex_t **)&unk_20DFBD8, 0);
  __cxa_atexit(
    (void (*)(void *))glitch::collada::CModularSkinnedMeshBatchManager::Destroy,
    (char *)&unk_20DFBD8 - 24,
    &unk_20D1280);
  (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0] = 0;
  (&glitch::collada::ps::CSmoothRandomGenerator::Series)[1] = 0;
  (&glitch::collada::ps::CSmoothRandomGenerator::Series)[2] = 0;
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_float_SAllocator_float_m_63bc30::Destroy,
    glitch::collada::ps::CSmoothRandomGenerator::Series,
    &unk_20D1280);
  glitch::collada::ps::CParticleSystem::ParameterOffsets = 0;
  *(uintptr_t *)(unk_20DFA64) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DFA68) = (uintptr_t)(0);
  __cxa_atexit(
    (void (*)(void *))g4_dtor_thunk<std::vector<int>>,
    &glitch::collada::ps::CParticleSystem::ParameterOffsets,
    &unk_20D1280);
  glitch::collada::ps::IParticleSystemBaker::StaticIndexBuffers[0] = 0;
  *(uintptr_t *)(unk_20DFA54) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20DFA58) = (uintptr_t)(0);
  __cxa_atexit((void (*)(void *))sub_D03D90, nullptr, &unk_20D1280);
  v94 = (uint32_t *)opNew(0x20u);
  v94[2] &= ~1u;
  v94[2] &= 1u;
  v94[3] = (uint32_t)(uintptr_t)(v94 + 2);
  v94[4] = (uint32_t)(uintptr_t)(v94 + 2);
  v94[5] &= ~1u;
  glitch::collada::ps::IParticleSystemBaker::MaxParticles[1] = (uintptr_t)(uintptr_t)(v94);
  v94[6] = (uint32_t)(uintptr_t)(v94 + 5);
  v94[7] = (uint32_t)(uintptr_t)(v94 + 5);
  glitch::collada::ps::IParticleSystemBaker::MaxParticles[3] = 0;
  v94[5] &= 1u;
  v95 = opNew(0x20u);
  glitch::collada::ps::IParticleSystemBaker::MaxParticles[5] = v95;
  *(uint32_t *)(v95 + 8) &= ~1u;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[5] + 8) &= 1u;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[5] + 12) = glitch::collada::ps::IParticleSystemBaker::MaxParticles[5]
                                                                               + 8;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[5] + 16) = glitch::collada::ps::IParticleSystemBaker::MaxParticles[5]
                                                                               + 8;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[5] + 20) &= ~1u;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[5] + 20) &= 1u;
  v96 = glitch::collada::ps::IParticleSystemBaker::MaxParticles[5];
  *(uint32_t *)(v96 + 24) = v96 + 20;
  *(uint32_t *)(v96 + 28) = v96 + 20;
  glitch::collada::ps::IParticleSystemBaker::MaxParticles[7] = 0;
  v97 = opNew(0x20u);
  glitch::collada::ps::IParticleSystemBaker::MaxParticles[9] = v97;
  *(uint32_t *)(v97 + 8) &= ~1u;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[9] + 8) &= 1u;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[9] + 12) = glitch::collada::ps::IParticleSystemBaker::MaxParticles[9]
                                                                               + 8;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[9] + 16) = glitch::collada::ps::IParticleSystemBaker::MaxParticles[9]
                                                                               + 8;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[9] + 20) &= ~1u;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[9] + 20) &= 1u;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[9] + 24) = glitch::collada::ps::IParticleSystemBaker::MaxParticles[9]
                                                                               + 20;
  *(uint32_t *)(glitch::collada::ps::IParticleSystemBaker::MaxParticles[9] + 28) = glitch::collada::ps::IParticleSystemBaker::MaxParticles[9]
                                                                               + 20;
  glitch::collada::ps::IParticleSystemBaker::MaxParticles[11] = 0;
  __cxa_atexit((void (*)(void *))sub_D34CC0, nullptr, &unk_20D1280);
  glf::Mutex::Construct((pthread_mutex_t **)&glitch::collada::ps::IParticleSystemBaker::StaticIndexBufferLock, 0);
  return __cxa_atexit(
           (void (*)(void *))glf::Mutex::Destroy,
           &glitch::collada::ps::IParticleSystemBaker::StaticIndexBufferLock,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_D3FD80  (binary VA: 0xd3fd80)
// Original: sub_D3FD80
// ----------------------------------------------------------------------------
int sub_D3FD80(int a1)
{
  glitch::os::Printer::log((int)(uintptr_t)("Warning - Event not handled : See collada::CSceneNodeAnimator::setEventsCallback"), 1);
  return glitch::os::Printer::log(*(uint32_t *)(a1 + 4), 1);
}

// ----------------------------------------------------------------------------
// Function: sub_D40A10  (binary VA: 0xd40a10)
// Original: sub_D40A10
// ----------------------------------------------------------------------------
void sub_D40A10(uint32_t *a1, int a2, int a3, char *a4)
{
  uint32_t *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  __m128i *v9;
  size_t v10;
  int v11;
  int v12;
  int i;
  int *v14;
  int v15;
  int v16;
  int v17;
  size_t v18;
  int v19;

  v4 = a1;
  v18 = 4 * a1[3];
  v5 = opNewArray(v18);
  v19 = v5;
  v17 = v18 - 1;
  if ( v18 != 0 )
  {
    v6 = -v5 & 0xF;
    if ( v18 <= v6 )
      v6 = v18;
    if ( v6 == 0 )
      goto LABEL_21;
    v16 = (int)(uintptr_t)(v4);
    v7 = 0;
    do
    {
      *(uint8_t *)v5 = 0;
      v8 = v18 - 2 - v7++;
      ++v5;
    }
    while ( v6 > v7 );
    v17 = v8;
    v4 = (uint32_t *)v16;
    if ( v18 != v6 )
    {
LABEL_21:
      v18 -= v6;
      v16 = 16 * (v18 >> 4);
      if ( v16 == 0 )
        goto LABEL_12;
      v9 = (__m128i *)(v19 + v6);
      v10 = 0;
      do
      {
        ++v10;
        *v9++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v10 < v18 >> 4 );
      v5 += v16;
      v17 -= v16;
      if ( v18 != v16 )
      {
LABEL_12:
        v11 = v17;
        do
        {
          --v11;
          *(uint8_t *)v5++ = 0;
        }
        while ( v11 != -1 );
      }
    }
  }
  G4_VCALL<void>(a2, 8, 4 * v4[3], v4[4], v19, v16, v17, v18, v19);
  v12 = v4[3];
  if ( v12 > 0 )
  {
    for ( i = 0; i < v12; ++i )
    {
      v14 = (int *)&a4[4 * i];
      v15 = *v14 + v4[6] - 4 * (v12 - i);
      *v14 = v15;
      *(uint32_t *)v15 += v15;
      v12 = v4[3];
    }
  }
  opDelete(a4);
}

// ----------------------------------------------------------------------------
// Function: sub_D40C80  (binary VA: 0xd40c80)
// Original: sub_D40C80
// ----------------------------------------------------------------------------
int sub_D40C80(int result, int a2, int a3, int a4, int16_t a5)
{
  *(uint32_t *)result = a2;
  *(uint32_t *)(result + 4) = a3;
  *(uint32_t *)(result + 8) = a4;
  *(uint16_t *)(result + 12) = a5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D40CA0  (binary VA: 0xd40ca0)
// Original: sub_D40CA0
// ----------------------------------------------------------------------------
int sub_D40CA0(int result, int a2, int a3, int a4, int16_t a5)
{
  *(uint32_t *)result = a2;
  *(uint32_t *)(result + 4) = a3;
  *(uint32_t *)(result + 8) = a4;
  *(uint16_t *)(result + 12) = a5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D40CC0  (binary VA: 0xd40cc0)
// Original: sub_D40CC0
// ----------------------------------------------------------------------------
uint32_t * sub_D40CC0(uint32_t *result, int a2, int a3, int a4, int a5)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D40CE0  (binary VA: 0xd40ce0)
// Original: sub_D40CE0
// ----------------------------------------------------------------------------
uint32_t * sub_D40CE0(uint32_t *result, int a2, int a3, int a4, int a5)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D40D00  (binary VA: 0xd40d00)
// Original: sub_D40D00
// ----------------------------------------------------------------------------
void * sub_D40D00(char **a1, int *a2)
{
  char *v2;
  char *v4;
  void *result;
  int v6;
  unsigned int v7;
  size_t v8;
  int *v9;
  char *v10;
  char *v11;
  uint32_t *v12;
  char *v13;
  char *v14;
  uint32_t *v15;
  void *src;
  void *srca;
  unsigned int v19;
  uint32_t *v20;
  size_t v21;

  v2 = a1[1];
  if ( v2 != a1[2] )
  {
    v4 = nullptr;
    if ( v2 != nullptr )
    {
      *(uint32_t *)v2 = *((uint32_t *)v2 - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (void *)((v4 - 4 - v2) >> 2);
    v6 = *a2;
    if ( result != nullptr )
      result = memmove(&v4[-4 * (uint32_t)(uintptr_t)(result)], v2, 4 * (uint32_t)(uintptr_t)(result));
    *(uint32_t *)v2 = v6;
    return result;
  }
  v7 = (v2 - *a1) >> 2;
  v21 = 1;
  if ( v7 != 0 )
  {
    if ( v7 > 2 * v7 || 2 * v7 > 0x3FFFFFFF )
    {
      v8 = 0xFFFFFFFC;
      v21 = 0xFFFFFFFF;
      goto LABEL_11;
    }
    v21 = 2 * v7;
  }
  v8 = v21 * 4;
LABEL_11:
  v20 = (uint32_t *)glitch::core::allocProcessBuffer(v8, (int)(uintptr_t)(src));
  v19 = (unsigned int)(uintptr_t)(v20 + 1);
  v9 = (int *)(&v20[v7]);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = *a1;
  if ( v2 != *a1 )
  {
    v11 = *a1;
    v12 = v20;
    do
    {
      if ( v12 != nullptr )
        *v12 = *(uint32_t *)v11;
      v11 += 4;
      ++v12;
    }
    while ( v2 != v11 );
    v19 = (unsigned int)(uintptr_t)(&v20[((unsigned int)(v2 - (v10 + 4)) >> 2) + 2]);
  }
  v13 = a1[1];
  if ( v2 != v13 )
  {
    v14 = v2;
    v15 = (uint32_t *)v19;
    do
    {
      if ( v15 != nullptr )
        *v15 = *(uint32_t *)v14;
      v14 += 4;
      ++v15;
    }
    while ( v13 != v14 );
    v19 += 4 * ((unsigned int)(v13 - (v2 + 4)) >> 2) + 4;
  }
  if ( *a1 != nullptr )
    glitch::core::releaseProcessBuffer((glitch::core::Self *)*a1, srca);
  *a1 = (char *)v20;
  a1[1] = (char *)v19;
  a1[2] = (char *)&v20[v21];
  return &v20[v21];
}

// ----------------------------------------------------------------------------
// Function: sub_D40E80  (binary VA: 0xd40e80)
// Original: sub_D40E80
// ----------------------------------------------------------------------------
int sub_D40E80(int result, int a2)
{
  int v2;
  uint32_t *v3;

  v2 = *(uint32_t *)(result + 4);
  v3 = *(uint32_t **)result;
  if ( a2 != 0 )
    *v3 |= 1 << v2;
  else
    *v3 &= ~(1 << v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D40EA0  (binary VA: 0xd40ea0)
// Original: sub_D40EA0
// ----------------------------------------------------------------------------
int * sub_D40EA0(int *result, int a2, unsigned int a3, uint8_t *a4)
{
  int *v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  size_t v8;
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  unsigned int i;
  uint8_t *v13;
  uint8_t *v14;
  uint8_t *v15;
  uint8_t *v16;
  uint8_t *v17;
  uint8_t *v18;
  uint8_t *v19;
  uint8_t *v20;
  int *v21;
  int v22;
  uint8_t *v23;
  int *v24;
  unsigned int v25;
  __m128i v26;
  __m128i v27;
  __m128i *v28;
  unsigned int v29;
  __m128i v30;
  unsigned int v31;
  uint8_t *v32;
  int *v33;
  unsigned int v34;
  uint8_t *v35;
  __m128i v36;
  __m128i v37;
  __m128i *v38;
  unsigned int v39;
  __m128i v40;
  int *v41;
  uint8_t v42;
  int *v43;
  uint8_t *v44;
  uint8_t *v45;
  uint8_t *v46;
  uint8_t v47;
  size_t v48;
  unsigned int v49;
  int v50;
  uint8_t *v51;
  uint8_t *v52;
  unsigned int v53;
  int v54;
  int v55;
  unsigned int v56;
  unsigned int v57;

  v4 = result;
  if ( a3 == 0 )
    return result;
  result = (int *)result[1];
  if ( a3 > v4[2] - (int)(uintptr_t)(result) )
  {
    v5 = (unsigned int)(uintptr_t)(result) - *v4;
    if ( a3 > ~v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = v5;
    v48 = 0xFFFFFFFF;
    v7 = __CFADD__(v6, v5);
    v8 = v6 + v5;
    v9 = (uint8_t *)(a2 - *v4);
    if ( !v7 )
    {
      if ( v8 == 0 )
      {
        v46 = nullptr;
        v48 = 0;
        v10 = 0;
        goto LABEL_9;
      }
      v48 = v8;
    }
    v44 = (uint8_t *)a2;
    v45 = (uint8_t *)(a2 - *v4);
    v10 = sub_4EBDC0(v48);
    v46 = (uint8_t *)v10;
    a2 = (int)(uintptr_t)(v44);
    v9 = v45;
LABEL_9:
    v11 = &v9[v10];
    for ( i = a3; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v50 = *v4;
    v13 = v46;
    if ( a2 != *v4 )
    {
      v14 = (uint8_t *)*v4;
      do
      {
        if ( v13 != nullptr )
          *v13 = *v14;
        ++v14;
        ++v13;
      }
      while ( v14 != (uint8_t *)a2 );
      v13 = &v46[a2 - v50];
    }
    v15 = (uint8_t *)v4[1];
    v16 = &v13[a3];
    v55 = (int)(uintptr_t)(v16);
    if ( (uint8_t *)a2 != v15 )
    {
      v17 = v16;
      v18 = (uint8_t *)a2;
      do
      {
        if ( v17 != nullptr )
          *v17 = *v18;
        ++v18;
        ++v17;
      }
      while ( v18 != v15 );
      v55 += (int)(uintptr_t)(&v18[-a2]);
    }
    if ( *v4 != 0 )
      gll_operator_delete_arr(*v4);
    *v4 = (int)(uintptr_t)(v46);
    result = (int *)&v46[v48];
    v4[1] = v55;
    v4[2] = (int)(uintptr_t)(&v46[v48]);
    return result;
  }
  v51 = (uint8_t *)((char *)result - a2);
  v47 = *a4;
  v19 = (uint8_t *)result;
  if ( a3 >= (unsigned int)(uintptr_t)(result) - a2 )
  {
    v31 = a3 - (uint32_t)(uintptr_t)(v51);
    if ( (uint8_t *)a3 != v51 )
    {
      do
      {
        if ( v19 != nullptr )
          *v19 = v47;
        ++v19;
        --v31;
      }
      while ( v31 != 0 );
      v19 = (uint8_t *)v4[1];
    }
    v32 = &v19[a3 - (uint32_t)(uintptr_t)(v51)];
    v4[1] = (int)(uintptr_t)(v32);
    if ( (int *)a2 == result )
    {
      v4[1] = (int)(uintptr_t)(uintptr_t)(&v32[(uint32_t)(uintptr_t)(v51)]);
      return result;
    }
    v33 = (int *)a2;
    do
    {
      if ( v32 != nullptr )
        *v32 = *(uint8_t *)v33;
      v33 = (int *)((char *)v33 + 1);
      ++v32;
    }
    while ( v33 != result );
    v43 = (int *)a2;
    v4[1] += (int)(uintptr_t)(v51);
    v34 = -a2 & 0xF;
    if ( (unsigned int)(uintptr_t)(result) - a2 <= v34 )
      v34 = (unsigned int)(uintptr_t)(result) - a2;
    if ( v34 == 0 )
      goto LABEL_67;
    v35 = (uint8_t *)a2;
    do
      *v35++ = v47;
    while ( v34 > (unsigned int)(uintptr_t)(&v35[-a2]) );
    v43 = (int *)v35;
    if ( (int *)((char *)result - a2) != (int *)v34 )
    {
LABEL_67:
      v57 = (unsigned int)(uintptr_t)(result) - a2 - v34;
      v54 = 16 * (v57 >> 4);
      if ( v54 != 0 )
      {
        v36 = _mm_cvtsi32_si128(v47);
        v37 = _mm_unpacklo_epi8(v36, v36);
        v38 = (__m128i *)(v34 + a2);
        v39 = 0;
        v40 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v37, v37), 0);
        do
        {
          ++v39;
          *v38++ = v40;
        }
        while ( v39 < v57 >> 4 );
        v41 = &v43[v54 / 4u];
        if ( v57 == v54 )
          return result;
        v42 = v47;
      }
      else
      {
        v42 = v47;
        v41 = v43;
      }
      do
      {
        *(uint8_t *)v41 = v42;
        v41 = (int *)((char *)v41 + 1);
      }
      while ( v41 != result );
    }
  }
  else
  {
    v52 = (uint8_t *)((char *)result - a3);
    v20 = (uint8_t *)(result);
    if ( result != (int *)((char *)result - a3) )
    {
      v21 = (int *)((char *)result - a3);
      do
      {
        if ( v20 != nullptr )
          *v20 = *(uint8_t *)v21;
        v21 = (int *)((char *)v21 + 1);
        ++v20;
      }
      while ( v21 != result );
      v20 = (uint8_t *)v4[1];
    }
    v4[1] = (int)(uintptr_t)(&v20[a3]);
    v22 = (int)(uintptr_t)(&v52[-a2]);
    if ( (int)(uintptr_t)(&v52[-a2]) > 0 )
    {
      v23 = (uint8_t *)((char *)result - v22);
      do
      {
        result = (int *)*(uint8_t *)(a2 + v22 - 1);
        v23[--v22] = (uint8_t)(uintptr_t)(result);
      }
      while ( v22 != 0 );
    }
    v24 = (int *)(a2 + a3);
    if ( a2 != a2 + a3 )
    {
      v25 = -a2 & 0xF;
      if ( a3 <= v25 )
        v25 = a3;
      result = (int *)a2;
      v49 = v25;
      if ( v25 != 0 )
      {
        do
        {
          *(uint8_t *)result = v47;
          result = (int *)((char *)result + 1);
        }
        while ( v25 > (unsigned int)(uintptr_t)(result) - a2 );
        v49 = v25;
        if ( v25 == a3 )
          return result;
      }
      else
      {
        v25 = 0;
      }
      v56 = a3 - v25;
      v53 = 16 * ((a3 - v25) >> 4);
      if ( v53 == 0 )
        goto LABEL_82;
      v26 = _mm_cvtsi32_si128(v47);
      v27 = _mm_unpacklo_epi8(v26, v26);
      v28 = (__m128i *)(v49 + a2);
      v29 = 0;
      v30 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v27, v27), 0);
      do
      {
        ++v29;
        *v28++ = v30;
      }
      while ( v29 < v56 >> 4 );
      result = (int *)((char *)result + v53);
      if ( v56 != v53 )
      {
LABEL_82:
        do
        {
          *(uint8_t *)result = v47;
          result = (int *)((char *)result + 1);
        }
        while ( result != v24 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D41300  (binary VA: 0xd41300)
// Original: sub_D41300
// ----------------------------------------------------------------------------
bool sub_D41300(int a1, uint32_t *a2, float a3, int *a4, float *a5, int a6)
{
  int v6;
  int v7;
  int v8;
  float v9; // xmm1_4
  int v10;
  int v11;
  float v12; // xmm1_4
  int v13;
  int v14;
  bool v15; // di
  int v16;
  int v17;
  int v18;
  float v19; // xmm2_4
  int v20;
  bool result;
  float v22; // xmm1_4
  float v23; // xmm0_4
  int v24;

  v6 = (*a2 >> 2) - 1;
  v24 = v6;
  if ( v6 >= a6 )
  {
    v6 = 0;
    if ( a6 >= 0 )
      v6 = a6;
  }
  v7 = (int)(uintptr_t)(a2) + a2[1] + 4;
  v8 = 4 * v6;
  v9 = (float)*(int *)(v7 + 4 * v6);
  if ( v9 > a3 && v6 > 0 )
  {
    --v6;
    v8 = 4 * v6;
LABEL_7:
    if ( v24 <= v6 )
      goto LABEL_22;
    v9 = (float)*(int *)(v7 + v8);
    goto LABEL_9;
  }
  if ( v24 <= v6 )
    goto LABEL_22;
  v18 = v6 + 1;
  v19 = (float)*(int *)(v7 + 4 * (v6 + 1));
  v20 = 4 * (v6 + 1);
  if ( a3 >= v19 )
  {
    if ( v24 <= v18 )
    {
      v8 = 4 * ++v6;
      goto LABEL_22;
    }
    v6 += 2;
    v8 = 4 * v6;
    if ( a3 >= (float)*(int *)(v7 + 4 * v6) )
      goto LABEL_7;
    v9 = v19;
    v8 = v20;
    v6 = v18;
  }
LABEL_9:
  if ( v9 > a3 || a3 > (float)*(int *)(v7 + 4 * v6 + 4) )
  {
    v6 = (*a2 >> 2) - 1;
    v10 = 1;
    if ( v24 > 0 )
    {
      do
      {
        v11 = (v10 + v6) >> 1;
        v12 = (float)*(int *)(v7 + 4 * v11);
        v13 = v11 - 1;
        v14 = v11 + 1;
        if ( v12 > a3 )
          v6 = v13;
        else
          v10 = v14;
      }
      while ( v6 >= v10 );
    }
    v15 = false;
    *a4 = v6;
    v16 = (int)(uintptr_t)(a2) + a2[1] + 4;
    v17 = (int)(float)((float)*(int *)(v16 + 4 * v6) + 0.5);
    if ( (int)a3 != v17 )
      v15 = v24 != v6;
    goto LABEL_25;
  }
LABEL_22:
  *a4 = v6;
  v16 = (int)(uintptr_t)(a2) + a2[1] + 4;
  v17 = (int)(float)((float)*(int *)(v16 + v8) + 0.5);
  result = false;
  if ( (int)a3 == v17 || v24 == v6 )
    return result;
  v15 = true;
LABEL_25:
  result = false;
  if ( *(uint32_t *)(*(uint32_t *)a1 + *(uint32_t *)(*(uint32_t *)a1 + 8) + 8) != 0 && v15 )
  {
    v22 = (float)*(int *)(v16 + 4 * v6 + 4) + 0.5;
    if ( (int)v22 != v17 )
    {
      v23 = fminf(fmaxf((float)(a3 - (float)v17) / (float)((int)v22 - v17), 0.0), 1.0);
      *a5 = v23;
      if ( v23 == 1.0 )
        ++*a4;
      else
        return v23 != 0.0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D41500  (binary VA: 0xd41500)
// Original: sub_D41500
// ----------------------------------------------------------------------------
bool sub_D41500(int a1, uint32_t *a2, float a3, int *a4, float *a5, int a6)
{
  int v6;
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm2_4
  int v11;
  int v12;
  float v13; // xmm2_4
  int v14;
  int v15;
  bool v16; // di
  int v17;
  int v18;
  int v19;
  bool result;
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v23;
  int v25;

  v6 = (*a2 >> 1) - 1;
  v7 = 0.030000001f * a3;
  v23 = v6;
  if ( v6 >= a6 )
  {
    v6 = 0;
    if ( a6 >= 0 )
      v6 = a6;
  }
  v8 = (int)(uintptr_t)(a2) + a2[1] + 4;
  v9 = 2 * v6;
  v10 = (float)*(uint16_t *)(v8 + 2 * v6);
  if ( v10 > v7 && v6 > 0 )
  {
    --v6;
    v9 = 2 * v6;
LABEL_7:
    if ( v23 <= v6 )
      goto LABEL_22;
    v10 = (float)*(uint16_t *)(v8 + v9);
    goto LABEL_9;
  }
  if ( v23 <= v6 )
    goto LABEL_22;
  v19 = v6 + 1;
  v25 = 2 * (v6 + 1);
  if ( v7 >= (float)*(uint16_t *)(v8 + v25) )
  {
    if ( v23 <= v19 )
    {
      v9 = 2 * ++v6;
      goto LABEL_22;
    }
    v6 += 2;
    v9 = 2 * v6;
    if ( v7 >= (float)*(uint16_t *)(v8 + 2 * v6) )
      goto LABEL_7;
    v10 = (float)*(uint16_t *)(v8 + v25);
    v9 = v25;
    v6 = v19;
  }
LABEL_9:
  if ( v10 > v7 || v7 > (float)*(uint16_t *)(v8 + 2 * v6 + 2) )
  {
    v6 = (*a2 >> 1) - 1;
    v11 = 1;
    if ( v23 > 0 )
    {
      do
      {
        v12 = (v11 + v6) >> 1;
        v13 = (float)*(uint16_t *)(v8 + 2 * v12);
        v14 = v12 - 1;
        v15 = v12 + 1;
        if ( v13 > v7 )
          v6 = v14;
        else
          v11 = v15;
      }
      while ( v6 >= v11 );
    }
    v16 = false;
    *a4 = v6;
    v17 = (int)(uintptr_t)(a2) + a2[1] + 4;
    v18 = (int)(float)((float)((float)*(uint16_t *)(v17 + 2 * v6) * 33.333332f) + 0.5);
    if ( (int)a3 != v18 )
      v16 = v23 != v6;
    goto LABEL_25;
  }
LABEL_22:
  *a4 = v6;
  v17 = (int)(uintptr_t)(a2) + a2[1] + 4;
  v18 = (int)(float)((float)((float)*(uint16_t *)(v17 + v9) * 33.333332f) + 0.5);
  result = false;
  if ( (int)a3 == v18 || v23 == v6 )
    return result;
  v16 = true;
LABEL_25:
  result = false;
  if ( *(uint32_t *)(*(uint32_t *)a1 + *(uint32_t *)(*(uint32_t *)a1 + 8) + 8) != 0 && v16 )
  {
    v21 = (float)((float)*(uint16_t *)(v17 + 2 * v6 + 2) * 33.333332f) + 0.5;
    if ( (int)v21 != v18 )
    {
      v22 = fminf(fmaxf((float)(a3 - (float)v18) / (float)((int)v21 - v18), 0.0), 1.0);
      *a5 = v22;
      if ( v22 == 1.0 )
        ++*a4;
      else
        return v22 != 0.0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D41740  (binary VA: 0xd41740)
// Original: sub_D41740
// ----------------------------------------------------------------------------
bool sub_D41740(int a1, uint32_t *a2, float a3, int *a4, float *a5, int a6)
{
  int v6;
  float v7; // xmm2_4
  int v8;
  int v9;
  float v10; // xmm1_4
  int v11;
  int v12;
  float v13; // xmm1_4
  int v14;
  int v15;
  int v16;
  bool result;
  int v18;
  int v19;
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v23;

  v6 = *a2 - 1;
  v23 = v6;
  v7 = 0.030000001f * a3;
  if ( v6 >= a6 )
  {
    v6 = 0;
    if ( a6 >= 0 )
      v6 = a6;
  }
  v8 = (int)(uintptr_t)(a2) + a2[1] + 4;
  v9 = v6;
  v10 = (float)*(uint8_t *)(v8 + v6);
  if ( v10 <= v7 || v6 <= 0 )
  {
    if ( v23 <= v6 )
      goto LABEL_22;
    v19 = v6 + 1;
    v20 = (float)*(uint8_t *)(v8 + v6 + 1);
    if ( v7 < v20 )
      goto LABEL_9;
    if ( v23 <= v19 )
    {
      v9 = ++v6;
      goto LABEL_22;
    }
    v6 += 2;
    v9 = v6;
    if ( v7 < (float)*(uint8_t *)(v8 + v6) )
    {
      v10 = v20;
      v9 = v19;
      v6 = v19;
      goto LABEL_9;
    }
  }
  else
  {
    v9 = --v6;
  }
  if ( v23 <= v6 )
  {
LABEL_22:
    *a4 = v6;
    v16 = (int)(uintptr_t)(a2) + a2[1] + 4;
    v18 = (int)(float)((float)((float)*(uint8_t *)(v16 + v9) * 33.333332f) + 0.5);
    if ( (int)a3 == v18 )
      return false;
    result = false;
LABEL_24:
    if ( v23 == v6 )
      return result;
    if ( *(uint32_t *)(*(uint32_t *)a1 + *(uint32_t *)(*(uint32_t *)a1 + 8) + 8) != 0 )
    {
      result = false;
      v21 = (float)((float)*(uint8_t *)(v16 + v6 + 1) * 33.333332f) + 0.5;
      if ( (int)v21 != v18 )
      {
        v22 = fminf(fmaxf((float)(a3 - (float)v18) / (float)((int)v21 - v18), 0.0), 1.0);
        *a5 = v22;
        if ( v22 == 1.0 )
          ++*a4;
        else
          return v22 != 0.0;
      }
      return result;
    }
    return false;
  }
  v10 = (float)*(uint8_t *)(v8 + v6);
LABEL_9:
  if ( v10 <= v7 && v7 <= (float)*(uint8_t *)(v8 + v6 + 1) )
    goto LABEL_22;
  v6 = v23;
  v11 = 1;
  if ( v23 > 0 )
  {
    do
    {
      v12 = (v11 + v6) >> 1;
      v13 = (float)*(uint8_t *)(v8 + v12);
      v14 = v12 - 1;
      v15 = v12 + 1;
      if ( v13 > v7 )
        v6 = v14;
      else
        v11 = v15;
    }
    while ( v6 >= v11 );
  }
  *a4 = v6;
  v16 = (int)(uintptr_t)(a2) + a2[1] + 4;
  result = false;
  v18 = (int)(float)((float)((float)*(uint8_t *)(v16 + v6) * 33.333332f) + 0.5);
  if ( (int)a3 != v18 )
    goto LABEL_24;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D41960  (binary VA: 0xd41960)
// Original: sub_D41960
// ----------------------------------------------------------------------------
char sub_D41960(uint32_t *a1, int *a2, float a3, float *a4, int a5)
{
  int v6;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;

  v6 = *a1;
  v8 = v6 + *(uint32_t *)(v6 + 8) + 8;
  v9 = (uint32_t *)(a1[1] + *(uint32_t *)(a1[1] + 4) + 4 + 8 * *(uint32_t *)(v6 + *(uint32_t *)(v6 + 8) + 20));
  v10 = a1[2];
  if ( *(uint8_t *)(v10 + 13) != 0 )
  {
    if ( a3 != *(float *)(v10 + 4) )
    {
      *(float *)(v10 + 4) = a3;
      v11 = *(uint32_t *)(*a1 + *(uint32_t *)(*a1 + 8) + 12);
      switch ( v11 )
      {
        case 3:
          v15 = a1[2];
          *(uint8_t *)(v15 + 12) = sub_D41500((int)(uintptr_t)(a1), v9, a3, (int *)(v15 + 8), (float *)v15, a5);
          v10 = a1[2];
          break;
        case 4:
          v14 = a1[2];
          *(uint8_t *)(v14 + 12) = sub_D41300((int)(uintptr_t)(a1), v9, a3, (int *)(v14 + 8), (float *)v14, a5);
          break;
        case 1:
          v16 = a1[2];
          *(uint8_t *)(v16 + 12) = sub_D41740((int)(uintptr_t)(a1), v9, a3, (int *)(v16 + 8), (float *)v16, a5);
          v10 = a1[2];
          break;
        default:
          v10 = a1[2];
          break;
      }
    }
    *a4 = *(float *)v10;
    *a2 = *(uint32_t *)(a1[2] + 8);
    return *(uint8_t *)(a1[2] + 12);
  }
  v13 = *(uint32_t *)(v8 + 4);
  switch ( v13 )
  {
    case 1:
      return sub_D41740((int)(uintptr_t)(a1), v9, a3, a2, a4, a5);
    case 3:
      return sub_D41500((int)(uintptr_t)(a1), v9, a3, a2, a4, a5);
    case 4:
      return sub_D41300((int)(uintptr_t)(a1), v9, a3, a2, a4, a5);
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_D41AF0  (binary VA: 0xd41af0)
// Original: sub_D41AF0
// ----------------------------------------------------------------------------
int * sub_D41AF0(int *result, char *a2, unsigned int a3, size_t *a4)
{
  unsigned int v4;
  char *v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  bool v9;
  unsigned int v10;
  int v11;
  int v12;
  size_t *v13;
  unsigned int v14;
  size_t v15;
  uint32_t *v16;
  char *v17;
  int v18;
  uint32_t *v19;
  char *v20;
  char *v21;
  uint32_t *v22;
  int v23;
  unsigned int v24;
  int v25;
  char *v26;
  int v27;
  char *v28;
  uint32_t *v29;
  int v30;
  int v31;
  char *v32;
  int v33;
  int v34;
  size_t v35;
  size_t *v36;
  unsigned int v37;
  unsigned int v38;
  size_t *v39;
  int *v40;
  size_t v41;
  int *v42;
  int *v44;
  size_t v45;
  size_t v46;
  int v47;
  int v49;
  int v50;

  v4 = a3;
  v42 = result;
  if ( a3 == 0 )
    return result;
  v5 = (char *)result[1];
  if ( a3 > (result[2] - (int)(uintptr_t)(v5)) >> 3 )
  {
    v6 = *result;
    v7 = (int)(uintptr_t)(&v5[-*result]) >> 3;
    if ( a3 > 0x1FFFFFFF - v7 )
      sub_1900180("vector::_M_fill_insert");
    v8 = a3;
    if ( v7 >= a3 )
      v8 = v7;
    v9 = __CFADD__(v7, v8);
    v10 = v7 + v8;
    if ( v9 || v10 > 0x1FFFFFFF )
    {
      v45 = 0xFFFFFFF8;
      v34 = (int)(uintptr_t)(&a2[-v6]);
      v35 = 0xFFFFFFF8;
      v11 = v34 >> 3;
    }
    else
    {
      v11 = (int)(uintptr_t)(&a2[-v6]) >> 3;
      if ( v10 == 0 )
      {
        v49 = 0;
        v45 = 0;
        v12 = 0;
        goto LABEL_10;
      }
      v45 = 8 * v10;
      v35 = 8 * v10;
    }
    v49 = sub_4EBDC0(v35);
    v4 = a3;
    v12 = v49;
LABEL_10:
    v13 = (size_t *)(v12 + 8 * v11);
    v14 = v4;
    do
    {
      if ( v13 != nullptr )
      {
        v15 = *a4;
        v13[1] = a4[1];
        *v13 = v15;
      }
      v13 += 2;
      --v14;
    }
    while ( v14 != 0 );
    v16 = (uint32_t *)v49;
    if ( a2 != (char *)*v42 )
    {
      v17 = (char *)*v42;
      v50 = *v42;
      do
      {
        if ( v16 != nullptr )
        {
          v18 = *(uint32_t *)v17;
          v16[1] = *((uint32_t *)v17 + 1);
          *v16 = v18;
        }
        v17 += 8;
        v16 += 2;
      }
      while ( a2 != v17 );
      v16 = (uint32_t *)(v49 + 8 * ((unsigned int)(uintptr_t)(&a2[-v50 - 8]) >> 3) + 8);
    }
    v19 = &v16[2 * v4];
    v20 = (char *)v42[1];
    if ( a2 != v20 )
    {
      v21 = a2;
      v22 = v19;
      do
      {
        if ( v22 != nullptr )
        {
          v23 = *(uint32_t *)v21;
          v22[1] = *((uint32_t *)v21 + 1);
          *v22 = v23;
        }
        v21 += 8;
        v22 += 2;
      }
      while ( v20 != v21 );
      v19 += 2 * ((unsigned int)(v20 - (a2 + 8)) >> 3) + 2;
    }
    if ( *v42 != 0 )
      gll_operator_delete_arr(*v42);
    *v42 = v49;
    v42[1] = (int)(uintptr_t)(v19);
    result = (int *)(v49 + v45);
    v42[2] = v49 + v45;
    return result;
  }
  v24 = (v5 - a2) >> 3;
  v46 = *a4;
  v47 = a4[1];
  if ( a3 >= v24 )
  {
    v36 = (size_t *)result[1];
    v37 = a3 - v24;
    if ( a3 != v24 )
    {
      v38 = a3 - v24;
      do
      {
        if ( v36 != nullptr )
        {
          *v36 = v46;
          v36[1] = v47;
        }
        v36 += 2;
        --v38;
      }
      while ( v38 != 0 );
      v24 = (v5 - a2) >> 3;
      v36 = (size_t *)result[1];
    }
    v39 = &v36[2 * v37];
    result[1] = (int)(uintptr_t)(v39);
    if ( a2 == v5 )
    {
      result = (int *)&v39[2 * v24];
      v42[1] = (int)(uintptr_t)(result);
    }
    else
    {
      v40 = (int *)a2;
      result = (int *)a2;
      v44 = (int *)v5;
      do
      {
        if ( v39 != nullptr )
        {
          v41 = *v40;
          v39[1] = v40[1];
          *v39 = v41;
        }
        v40 += 2;
        v39 += 2;
      }
      while ( v44 != v40 );
      v42[1] += 8 * v24;
      do
      {
        *result = v46;
        result[1] = v47;
        result += 2;
      }
      while ( v44 != result );
    }
  }
  else
  {
    v25 = 8 * a3;
    v26 = &v5[-8 * a3];
    v27 = result[1];
    if ( v5 != v26 )
    {
      v28 = &v5[-8 * a3];
      v29 = (uint32_t *)result[1];
      do
      {
        if ( v29 != nullptr )
        {
          v30 = *(uint32_t *)v28;
          v29[1] = *((uint32_t *)v28 + 1);
          *v29 = v30;
        }
        v28 += 8;
        v29 += 2;
      }
      while ( v5 != v28 );
      v26 = &v5[-8 * a3];
      v27 = result[1];
    }
    result[1] = v25 + v27;
    v31 = (v26 - a2) >> 3;
    if ( v31 > 0 )
    {
      v32 = &v26[-8 * v31];
      result = (int *)&v5[-8 * v31];
      do
      {
        v33 = *(uint32_t *)&v32[8 * v31 - 8];
        result[2 * v31 - 1] = *(uint32_t *)&v32[8 * v31 - 4];
        result[2 * v31-- - 2] = v33;
      }
      while ( v31 != 0 );
    }
    if ( a2 != &a2[v25] )
    {
      result = (int *)a2;
      do
      {
        *result = v46;
        result[1] = v47;
        result += 2;
      }
      while ( &a2[v25] != (char *)result );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D41E70  (binary VA: 0xd41e70)
// Original: sub_D41E70
// ----------------------------------------------------------------------------
int * sub_D41E70(int *result)
{
  int v1;
  int32_t v2;

  v1 = *result;
  if ( *result != 0 )
  {
    while ( 1 )
    {
      v2 = *(uint32_t *)(v1 + 4);
      _mm_mfence();
      if ( v2 == 2 )
      {
        if ( *(uint16_t *)(v1 + 32) == 0xFFFF )
          goto LABEL_4;
        glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v1);
      }
      else
      {
        if ( v2 == 1 )
          return (int *)G4_VCALL<int>(v1, 4);
LABEL_4:
        result = (int *)__sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v2, v2 - 1);
        if ( (int *)v2 == result )
          return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D42080  (binary VA: 0xd42080)
// Original: sub_D42080
// ----------------------------------------------------------------------------
void sub_D42080(int a1, uint32_t *a2)
{
  uint32_t *src;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  char *dest;
  char *v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v18;
  int v19;
  int v20;
  char *v21;
  size_t v22;

  src = *(uint32_t **)(a1 + 4);
  if ( src == *(uint32_t **)(a1 + 8) )
  {
    v7 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    v22 = 4;
    if ( v7 != 0 )
    {
      v22 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v16 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v16 = -4;
        v22 = v16;
      }
    }
    v20 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    dest = (char *)opNew(v22);
    v9 = &dest[4 * v20];
    if ( v9 != nullptr )
      *(uint32_t *)v9 = *a2;
    v10 = 0;
    v11 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    if ( v11 != 0 )
    {
      v19 = 4 * v11;
      memmove(dest, *(const void **)a1, 4 * v11);
      v10 = v19;
    }
    v12 = &dest[v10 + 4];
    v13 = 0;
    v14 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
    if ( v14 != 0 )
    {
      v18 = 4 * v14;
      v21 = v12;
      memmove(v12, src, 4 * v14);
      v12 = v21;
      v13 = v18;
    }
    v15 = &v12[v13];
    if ( *(uint32_t *)a1 != 0 )
      opDelete(*(void **)a1);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v15);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v22]);
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *src = *(src - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 4;
    v5 = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( v5 != 0 )
      memmove((void *)(v4 - 4 * v5), src, 4 * v5);
    *src = v6;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_D42200  (binary VA: 0xd42200)
// Original: sub_D42200
// ----------------------------------------------------------------------------
int * sub_D42200(uint32_t *a1, unsigned int a2)
{
  uint8_t *v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  size_t n;
  int *result;
  int *v11;
  unsigned int v12;
  uint8_t *src;

  v2 = (uint8_t *)*a1;
  v4 = *(uint32_t *)(*a1 - 12);
  v5 = *(uint32_t *)(*a1 - 8);
  if ( a2 >= *((uint32_t *)v2 - 3) )
    v4 = a2;
  if ( v4 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v5 < v4 )
  {
    if ( v4 < 2 * v5 )
      v4 = 2 * v5;
    if ( v4 + 29 > 0x1000 && v4 > v5 )
    {
      v12 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
      v4 = 1073741820;
      if ( v12 <= 0x3FFFFFFC )
        v4 = v12;
    }
  }
  src = v2;
  v6 = sub_4EBDC0(v4 + 13);
  *(uint32_t *)(v6 + 4) = v4;
  *(uint32_t *)(v6 + 8) = 0;
  v7 = (int *)v6;
  v8 = 0;
  n = *((uint32_t *)src - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      *((uint8_t *)v7 + 12) = *src;
    else
      memcpy(v7 + 3, src, n);
    v8 = *((uint32_t *)src - 3);
  }
  result = (int *)(&dword_20D3E6C);
  if ( v7 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    v7[2] = 0;
    *v7 = v8;
    *((uint8_t *)v7 + v8 + 12) = 0;
  }
  v11 = (int *)(*a1 - 12);
  if ( v11 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    result = (int *)__sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (int *)gll_operator_delete_arr((int)(uintptr_t)(v11));
  }
  *a1 = (uint32_t)(uintptr_t)(v7 + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D42360  (binary VA: 0xd42360)
// Original: sub_D42360
// ----------------------------------------------------------------------------
int sub_D42360(int a1)
{
  unsigned int v1;
  unsigned int v3;
  unsigned int v4;
  int v5;
  size_t v6;

  v1 = *(uint32_t *)a1;
  v3 = *(uint32_t *)(a1 + 4);
  if ( v1 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v1 > v3 && v1 < 2 * v3 )
    v1 = 2 * v3;
  if ( v1 + 29 > 0x1000 && v3 < v1 )
  {
    v4 = v1 + 4096 - (((uint16_t)v1 + 29) & 0xFFF);
    v1 = 1073741820;
    if ( v4 <= 0x3FFFFFFC )
      v1 = v4;
  }
  v5 = sub_4EBDC0(v1 + 13);
  *(uint32_t *)(v5 + 4) = v1;
  *(uint32_t *)(v5 + 8) = 0;
  v6 = 0;
  if ( *(uint32_t *)a1 != 0 )
  {
    if ( *(uint32_t *)a1 == 1 )
      *(uint8_t *)(v5 + 12) = *(uint8_t *)(a1 + 12);
    else
      memcpy((void *)(v5 + 12), (const void *)(a1 + 12), *(uint32_t *)a1);
    v6 = *(uint32_t *)a1;
  }
  if ( (int *)v5 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v5 + 8) = 0;
    *(uint32_t *)v5 = v6;
    *(uint8_t *)(v5 + v6 + 12) = 0;
  }
  return v5 + 12;
}

// ----------------------------------------------------------------------------
// Function: sub_D42470  (binary VA: 0xd42470)
// Original: sub_D42470
// ----------------------------------------------------------------------------
char * sub_D42470(char *result, int a2)
{
  char *v2;
  char *v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  uint32_t *v7;
  unsigned int i;
  unsigned int v9;
  __m128i *v10;
  unsigned int v11;
  bool v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  char *v16;
  unsigned int v17;
  unsigned int v18;
  __m128i *v19;
  unsigned int v20;
  int v21;
  int v22;
  char *v23;
  int v24;
  int v25;
  char *v26;
  char *v27;
  unsigned int v28;
  int v29;
  __m128i *v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  char *v35;
  int v36;
  char *v37;
  char *v38;
  unsigned int v39;

  v2 = result;
  v3 = *((char **)result + 1);
  v4 = (int)(uintptr_t)(&v3[-*(uint32_t *)result]) >> 2;
  v38 = v3;
  v5 = a2 - v4;
  v39 = v5;
  if ( v5 == 0 )
    return result;
  if ( v5 <= (*((uint32_t *)result + 2) - (int)(uintptr_t)(v3)) >> 2 )
  {
    v6 = -((uint8_t)((uint8_t)(uintptr_t)(v3) & 0xF) >> 2) & 3;
    if ( v6 > v5 )
      v6 = v5;
    if ( v6 != 0 )
    {
      v7 = *((uint32_t **)result + 1);
      for ( i = 0; i < v6; ++i )
      {
        --v5;
        *v7++ = 0;
      }
      if ( v39 == v6 )
      {
LABEL_14:
        result = (char *)(4 * v39);
        *((uint32_t *)v2 + 1) += 4 * v39;
        return result;
      }
    }
    else
    {
      v7 = *((uint32_t **)result + 1);
    }
    v32 = v39 - v6;
    v34 = (v39 - v6) >> 2;
    v36 = 4 * v34;
    if ( 4 * v34 == 0 )
      goto LABEL_47;
    v30 = (__m128i *)&v38[4 * v6];
    v9 = 0;
    v10 = v30;
    do
    {
      ++v9;
      *v10++ = g4_m128_from<__m128i>(0LL);
    }
    while ( v9 < v34 );
    v5 -= v36;
    v7 += 4 * v34;
    if ( v32 != v36 )
    {
LABEL_47:
      do
      {
        --v5;
        *v7++ = 0;
      }
      while ( v5 != 0 );
    }
    goto LABEL_14;
  }
  if ( v5 > 0x3FFFFFFF - v4 )
    sub_1900180("vector::_M_fill_insert");
  v11 = v5;
  if ( v5 < v4 )
    v11 = v4;
  v29 = -4;
  v12 = __CFADD__(v4, v11);
  v13 = v4 + v11;
  if ( v12 || v13 > 0x3FFFFFFF )
  {
    v14 = opNew(0xFFFFFFFC);
  }
  else
  {
    v29 = 0;
    v35 = nullptr;
    if ( v13 == 0 )
      goto LABEL_22;
    v29 = 4 * v13;
    v14 = opNew(4 * v13);
  }
  v35 = (char *)v14;
LABEL_22:
  v15 = v39;
  v37 = &v35[4 * v4];
  v16 = v37;
  v17 = -((uint8_t)((uint8_t)(uintptr_t)(v37) & 0xF) >> 2) & 3;
  if ( v17 > v39 )
    v17 = v39;
  if ( v17 == 0 )
    goto LABEL_48;
  v18 = 0;
  do
  {
    ++v18;
    --v15;
    *(uint32_t *)v16 = 0;
    v16 += 4;
  }
  while ( v17 > v18 );
  if ( v39 != v17 )
  {
LABEL_48:
    v28 = v39 - v17;
    v33 = (v39 - v17) >> 2;
    v31 = 4 * v33;
    if ( 4 * v33 == 0 )
      goto LABEL_49;
    v19 = (__m128i *)&v37[4 * v17];
    v20 = 0;
    do
    {
      ++v20;
      *v19++ = g4_m128_from<__m128i>(0LL);
    }
    while ( v20 < v33 );
    v15 -= v31;
    v16 += 16 * v33;
    if ( v28 != v31 )
    {
LABEL_49:
      do
      {
        --v15;
        *(uint32_t *)v16 = 0;
        v16 += 4;
      }
      while ( v15 != 0 );
    }
  }
  v21 = 0;
  v22 = (int)(uintptr_t)(&v38[-*(uint32_t *)v2]) >> 2;
  if ( v22 != 0 )
  {
    v21 = 4 * v22;
    memmove(v35, *(const void **)v2, 4 * v22);
  }
  v23 = &v35[4 * v39 + v21];
  v24 = 0;
  v25 = (*((uint32_t *)v2 + 1) - (int)(uintptr_t)(v38)) >> 2;
  if ( v25 != 0 )
  {
    v24 = 4 * v25;
    v27 = v23;
    memmove(v23, v38, 4 * v25);
    v23 = v27;
  }
  v26 = &v23[v24];
  if ( *(uint32_t *)v2 != 0 )
    opDelete(*(void **)v2);
  *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v26);
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v35);
  *((uint32_t *)v2 + 2) = (uint32_t)(uintptr_t)(&v35[v29]);
  return &v35[v29];
}

// ----------------------------------------------------------------------------
// Function: sub_D43410  (binary VA: 0xd43410)
// Original: sub_D43410
// ----------------------------------------------------------------------------
uint32_t * sub_D43410(uint32_t *result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6; // xmm0_4
  int v7; // xmm0_4
  int v8;

  v1 = result[3];
  v8 = result[11];
  v2 = result[1];
  result[1] = result[4];
  v3 = result[2];
  result[2] = result[8];
  v4 = result[6];
  v5 = result[7];
  result[3] = result[12];
  result[4] = v2;
  v6 = result[9];
  result[8] = v3;
  result[6] = v6;
  result[9] = v4;
  v7 = result[13];
  result[12] = v1;
  result[7] = v7;
  result[13] = v5;
  result[11] = result[14];
  result[14] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D434A0  (binary VA: 0xd434a0)
// Original: sub_D434A0
// ----------------------------------------------------------------------------
int sub_D434A0(int a1, uint32_t *a2, char a3)
{
  char *v5;
  char *v6;
  int v7;
  char *v8;
  uint16_t *v9;
  unsigned int v10;
  int v11;
  int v12;
  uint16_t *v13;
  uint16_t *v14;
  int v16;
  int v17;

  if ( a3 == 0 )
  {
    *(uint8_t *)a1 = 0;
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(a2);
    return a1;
  }
  v5 = (char *)a2[1];
  v6 = (char *)*a2;
  v17 = 0;
  v16 = 0;
  v7 = (int)(uintptr_t)(&v5[-*a2]) >> 1;
  if ( v7 != 0 )
  {
    v16 = sub_4EBDC0(2 * v7);
    v17 = v16;
    v5 = (char *)a2[1];
    v6 = (char *)*a2;
  }
  if ( v6 == v5 )
  {
    *(uint8_t *)a1 = 1;
    *(uint32_t *)(a1 + 4) = 0;
    *(uint32_t *)(a1 + 8) = 0;
    *(uint32_t *)(a1 + 12) = 0;
    v11 = 0;
  }
  else
  {
    v8 = v6;
    v9 = (uint16_t *)v16;
    do
    {
      if ( v9 != nullptr )
        *v9 = *(uint16_t *)v8;
      v8 += 2;
      ++v9;
    }
    while ( v8 != v5 );
    *(uint8_t *)a1 = 1;
    *(uint32_t *)(a1 + 4) = 0;
    *(uint32_t *)(a1 + 8) = 0;
    *(uint32_t *)(a1 + 12) = 0;
    v10 = v16 + 2 * ((unsigned int)(v8 - (v6 + 2)) >> 1) + 2;
    v11 = (int)(v10 - v17) >> 1;
    v12 = 2 * v11;
    if ( v11 != 0 )
      v11 = sub_4EBDC0(2 * v11);
    *(uint32_t *)(a1 + 4) = v11;
    *(uint32_t *)(a1 + 8) = v11;
    *(uint32_t *)(a1 + 12) = v11 + v12;
    if ( v16 != v10 )
    {
      v13 = (uint16_t *)v16;
      v14 = (uint16_t *)v11;
      do
      {
        if ( v14 != nullptr )
          *v14 = *v13;
        ++v13;
        ++v14;
      }
      while ( v13 != (uint16_t *)v10 );
      v11 += 2 * (((unsigned int)(uintptr_t)(v13) - v16 - 2) >> 1) + 2;
    }
  }
  *(uint32_t *)(a1 + 8) = v11;
  if ( v16 == 0 )
    return a1;
  gll_operator_delete_arr(v16);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D44F20  (binary VA: 0xd44f20)
// Original: sub_D44F20
// ----------------------------------------------------------------------------
uint32_t * sub_D44F20(uint32_t *a1, float *a2, float a3, char a4)
{
  int v4;
  int v5;
  int v8;
  int v9;
  int v10;
  uint32_t *result;
  int v12;
  float v13; // xmm1_4
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  float v19; // xmm3_4
  int v20;
  char v21;
  int v22;
  int v23;
  int v24;
  float v25; // xmm2_4
  int v26;
  int v27;
  int v28;
  int v29;
  float v30; // xmm2_4
  int v31;
  int v32;
  int v33;
  int v34;
  float v35; // xmm2_4
  int v36;
  int v37;
  int v38;
  float v39; // xmm2_4
  int v40;
  int v41;
  int v42;
  float v43; // xmm2_4
  int v44;
  int v45;
  int v46;
  int v47;
  float v48; // xmm2_4
  int v49;
  int v50;
  float v51; // xmm2_4
  int v52;
  int v53;
  int v54;
  float v55; // xmm2_4
  int v56;
  int v57;
  bool v58; // bp
  int v59;
  int v60;
  float v61; // xmm2_4
  float v62; // xmm2_4
  int v63;
  int v64;
  int v65;
  float v66; // xmm2_4
  int v67;
  int v68;
  bool v69; // bp
  int v70;
  int v71;
  int v72;
  float v73; // xmm2_4
  int v74;
  float v75; // xmm2_4
  int v76;
  int v77;
  int v78;
  float v79; // xmm2_4
  int v80;
  int v81;
  int v82;
  int v83;
  float v84; // xmm2_4
  float v85; // xmm2_4
  int v86;
  int v87;
  int v88;
  int v89;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  uint32_t *v98;
  char v99;
  int v101;
  int v102;
  int v103;
  int v104;

  v4 = *a1;
  v5 = 0;
  v8 = *(uint32_t *)(v4 + 24);
  v9 = v4 + v8 + 24;
  if ( v8 != 0 )
    v5 = v9;
  v10 = *(uint32_t *)(v5 + 8);
  *a2 = *(float *)(v5 + v10 + 8);
  a2[1] = *(float *)(v5 + v10 + 12);
  a2[2] = *(float *)(v5 + v10 + 16);
  a2[3] = *(float *)(v5 + v10 + 20);
  a2[4] = *(float *)(v5 + v10 + 24);
  result = a1;
  v12 = *a1;
  v104 = *(uint32_t *)(*a1 + 12);
  if ( v104 > 0 )
  {
    v97 = 0;
    v13 = 0.030000001f * a3;
    v94 = 0;
    v14 = a1;
    while ( 1 )
    {
      v99 = a4;
      v86 = *(uint32_t *)(v12 + 8) + 4;
      v96 = v12 + 4;
      v95 = 32 * v94;
      v98 = (uint32_t *)(32 * v94 + v86 + v12 + 4);
      v91 = v14[1] + *(uint32_t *)(v14[1] + 4) + 4;
      v15 = (uint32_t *)(v91 + 8 * v98[3]);
      v16 = v14[2];
      if ( *(uint8_t *)(v16 + 13) != 0 )
        break;
      v26 = v98[1];
      if ( v26 == 3 )
      {
        v101 = (*v15 >> 1) - 1;
        v27 = (int)(uintptr_t)(v15) + v15[1] + 4;
        v20 = v101;
        if ( v101 > 0 )
        {
          v28 = 1;
          do
          {
            v29 = (v28 + v20) >> 1;
            v30 = (float)*(uint16_t *)(v27 + 2 * v29);
            v31 = v29 - 1;
            v32 = v29 + 1;
            if ( v30 > v13 )
              v20 = v31;
            else
              v28 = v32;
          }
          while ( v20 >= v28 );
        }
        v33 = (int)(float)((float)((float)*(uint16_t *)(v27 + 2 * v20) * 33.333332f) + 0.5);
        if ( (int)a3 == v33 )
          goto LABEL_27;
        if ( v101 == v20 )
          goto LABEL_27;
        if ( *v98 == 0 )
          goto LABEL_27;
        v34 = v20 + 1;
        v35 = (float)((float)*(uint16_t *)(v27 + 2 * (v20 + 1)) * 33.333332f) + 0.5;
        if ( (int)v35 == v33 )
          goto LABEL_27;
        v19 = fminf(fmaxf((float)(a3 - (float)v33) / (float)((int)v35 - v33), 0.0), 1.0);
        if ( v19 == 1.0 )
        {
LABEL_105:
          v20 = v34;
          goto LABEL_27;
        }
        if ( v19 != 0.0 )
          goto LABEL_40;
      }
      else
      {
        if ( v26 == 4 )
        {
          v103 = (*v15 >> 2) - 1;
          v45 = (int)(uintptr_t)(v15) + v15[1] + 4;
          v20 = v103;
          if ( v103 > 0 )
          {
            v46 = 1;
            do
            {
              v47 = (v46 + v20) >> 1;
              v48 = (float)*(int *)(v45 + 4 * v47);
              v49 = v47 - 1;
              v50 = v47 + 1;
              if ( v48 > a3 )
                v20 = v49;
              else
                v46 = v50;
            }
            while ( v20 >= v46 );
          }
          v42 = (int)(float)((float)*(int *)(v45 + 4 * v20) + 0.5);
          if ( (int)a3 == v42 )
            goto LABEL_27;
          if ( v103 == v20 )
            goto LABEL_27;
          if ( *v98 == 0 )
            goto LABEL_27;
          v34 = v20 + 1;
          v51 = (float)*(int *)(v45 + 4 * (v20 + 1)) + 0.5;
          v44 = (int)v51 - v42;
          if ( (int)v51 == v42 )
            goto LABEL_27;
        }
        else
        {
          if ( v26 != 1 )
          {
            v20 = 0;
            goto LABEL_27;
          }
          v36 = (int)(uintptr_t)(v15) + v15[1] + 4;
          v20 = *v15 - 1;
          v102 = v20;
          if ( v20 > 0 )
          {
            v37 = 1;
            do
            {
              v38 = (v37 + v20) >> 1;
              v39 = (float)*(uint8_t *)(v36 + v38);
              v40 = v38 - 1;
              v41 = v38 + 1;
              if ( v39 > v13 )
                v20 = v40;
              else
                v37 = v41;
            }
            while ( v20 >= v37 );
          }
          v42 = (int)(float)((float)((float)*(uint8_t *)(v36 + v20) * 33.333332f) + 0.5);
          if ( (int)a3 == v42 )
            goto LABEL_27;
          if ( v102 == v20 )
            goto LABEL_27;
          if ( *v98 == 0 )
            goto LABEL_27;
          v34 = v20 + 1;
          v43 = (float)((float)*(uint8_t *)(v36 + v20 + 1) * 33.333332f) + 0.5;
          v44 = (int)v43 - v42;
          if ( (int)v43 == v42 )
            goto LABEL_27;
        }
        v19 = fminf(fmaxf((float)(a3 - (float)v42) / (float)v44, 0.0), 1.0);
        if ( v19 == 1.0 )
          goto LABEL_105;
        if ( v19 != 0.0 )
        {
LABEL_40:
          v21 = v99;
LABEL_13:
          if ( v21 != 0 )
          {
            v22 = v95 + v86 + v96;
            v23 = *(uint16_t *)(v22 + 30);
            v24 = v91
                + 8 * *(uint32_t *)(v22 + 24)
                + *(uint32_t *)(v91 + 8 * *(uint32_t *)(v22 + 24) + 4)
                + 4
                + *(uint16_t *)(v22 + 28);
            a4 = 1;
            v25 = (float)((float)(*(float *)(v24 + v23 * (v20 + 1)) - *(float *)(v24 + v20 * v23)) * v19)
                + *(float *)(v24 + v20 * v23);
            goto LABEL_15;
          }
        }
      }
LABEL_27:
      v25 = *(float *)(*(uint32_t *)(v91 + 8 * *(uint32_t *)(v95 + v86 + v96 + 24) + 4)
                     + *(uint16_t *)(v95 + v86 + v96 + 28)
                     + v91
                     + 8 * *(uint32_t *)(v95 + v86 + v96 + 24)
                     + v20 * *(uint16_t *)(v95 + v86 + v96 + 30)
                     + 4);
      a4 = 0;
LABEL_15:
      switch ( *(uint32_t *)(*(uint32_t *)(v12 + 16) + v12 + v97 + 20) )
      {
        case 'n':
          *a2 = v25;
          break;
        case 'o':
          a2[1] = v25;
          break;
        case 'p':
          a2[2] = v25;
          break;
        case 'q':
          a2[3] = v25;
          break;
        case 'r':
          a2[4] = v25;
          break;
        default:
          break;
      }
      ++v94;
      v97 += 12;
      result = (uint32_t *)v104;
      if ( v94 == v104 )
        return result;
      v14 = a1;
      v12 = *a1;
    }
    if ( a3 == *(float *)(v16 + 4) )
    {
LABEL_12:
      v19 = *(float *)v16;
      v20 = *(uint32_t *)(v16 + 8);
      v21 = v99 & *(uint8_t *)(v16 + 12);
      goto LABEL_13;
    }
    *(float *)(v16 + 4) = a3;
    v12 = *v14;
    v86 = *(uint32_t *)(*v14 + 8) + 4;
    v17 = *(uint32_t *)(32 * v94 + *v14 + v86 + 8);
    switch ( v17 )
    {
      case 3:
        v89 = (*v15 >> 1) - 1;
        v76 = v89;
        v93 = a1[2];
        if ( *v15 >> 1 > 1u )
        {
          v77 = 1;
          do
          {
            v78 = (v77 + v76) >> 1;
            v79 = (float)*(uint16_t *)((char *)v15 + 2 * v78 + v15[1] + 4);
            v80 = v78 - 1;
            v81 = v78 + 1;
            if ( v79 > v13 )
              v76 = v80;
            else
              v77 = v81;
          }
          while ( v76 >= v77 );
        }
        v69 = false;
        *(uint32_t *)(v93 + 8) = v76;
        v82 = (int)(uintptr_t)(v15) + v15[1] + 4;
        v83 = (int)(float)((float)((float)*(uint16_t *)(v82 + 2 * v76) * 33.333332f) + 0.5);
        if ( (int)a3 != v83 && v76 != v89 && *(uint32_t *)(*(uint32_t *)(*a1 + 8) + *a1 + v95 + 8) != 0 )
        {
          v72 = v76 + 1;
          v84 = (float)((float)*(uint16_t *)(v82 + 2 * v72) * 33.333332f) + 0.5;
          v74 = (int)v84 - v83;
          if ( (int)v84 != v83 )
          {
            v75 = (float)v83;
            goto LABEL_102;
          }
        }
        break;
      case 4:
        v88 = (*v15 >> 2) - 1;
        v63 = v88;
        v93 = a1[2];
        if ( *v15 >> 2 > 1u )
        {
          v64 = 1;
          do
          {
            v65 = (v64 + v63) >> 1;
            v66 = (float)*(int *)((char *)&v15[v65 + 1] + v15[1]);
            v67 = v65 - 1;
            v68 = v65 + 1;
            if ( v66 > a3 )
              v63 = v67;
            else
              v64 = v68;
          }
          while ( v63 >= v64 );
        }
        v69 = false;
        *(uint32_t *)(v93 + 8) = v63;
        v70 = (int)(uintptr_t)(v15) + v15[1] + 4;
        v71 = (int)(float)((float)*(int *)(v70 + 4 * v63) + 0.5);
        if ( (int)a3 != v71 && v88 != v63 && *(uint32_t *)(*(uint32_t *)(*a1 + 8) + *a1 + v95 + 8) != 0 )
        {
          v72 = v63 + 1;
          v73 = (float)*(int *)(v70 + 4 * v72) + 0.5;
          v74 = (int)v73 - v71;
          if ( (int)v73 != v71 )
          {
            v75 = (float)v71;
LABEL_102:
            v85 = fminf(fmaxf((float)(a3 - v75) / (float)v74, 0.0), 1.0);
            *(float *)v93 = v85;
            if ( v85 == 1.0 )
            {
              *(uint32_t *)(v93 + 8) = v72;
              *(uint8_t *)(v93 + 12) = 0;
              goto LABEL_79;
            }
            v69 = v85 != 0.0;
          }
        }
        break;
      case 1:
        v87 = *v15 - 1;
        v52 = v87;
        v92 = a1[2];
        if ( v87 > 0 )
        {
          v53 = 1;
          do
          {
            v54 = (v53 + v52) >> 1;
            v55 = (float)*((uint8_t *)v15 + v15[1] + v54 + 4);
            v56 = v54 - 1;
            v57 = v54 + 1;
            if ( v55 > v13 )
              v52 = v56;
            else
              v53 = v57;
          }
          while ( v52 >= v53 );
        }
        v58 = false;
        *(uint32_t *)(v92 + 8) = v52;
        v59 = (int)(uintptr_t)(v15) + v15[1] + 4;
        v60 = (int)(float)((float)((float)*(uint8_t *)(v59 + v52) * 33.333332f) + 0.5);
        if ( (int)a3 != v60 && v52 != v87 && *(uint32_t *)(*(uint32_t *)(*a1 + 8) + *a1 + v95 + 8) != 0 )
        {
          v61 = (float)((float)*(uint8_t *)(v59 + v52 + 1) * 33.333332f) + 0.5;
          if ( (int)v61 != v60 )
          {
            v62 = fminf(fmaxf((float)(a3 - (float)v60) / (float)((int)v61 - v60), 0.0), 1.0);
            *(float *)v92 = v62;
            if ( v62 == 1.0 )
              *(uint32_t *)(v92 + 8) = v52 + 1;
            else
              v58 = v62 != 0.0;
          }
        }
        *(uint8_t *)(v92 + 12) = v58;
LABEL_79:
        v12 = *a1;
        v16 = a1[2];
        v18 = a1[1];
        v86 = *(uint32_t *)(*a1 + 8) + 4;
        goto LABEL_11;
      default:
        v16 = v14[2];
        v18 = v14[1];
LABEL_11:
        v96 = v12 + 4;
        v91 = v18 + *(uint32_t *)(v18 + 4) + 4;
        goto LABEL_12;
    }
    *(uint8_t *)(v93 + 12) = v69;
    goto LABEL_79;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D45970  (binary VA: 0xd45970)
// Original: sub_D45970
// ----------------------------------------------------------------------------
uint32_t * sub_D45970(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  bool v4;
  uint32_t *result;
  uint32_t *v6;

  v3 = a1;
  v4 = a2 == a1;
  result = a3;
  if ( !v4 )
  {
    do
    {
      if ( result != nullptr )
      {
        *result = *v3;
        v6 = (uint32_t *)v3[1];
        result[1] = (uint32_t)(uintptr_t)(v6);
        if ( v6 != nullptr )
          __sync_add_and_fetch((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12) + 4), 1u);
      }
      v3 += 2;
      result += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D45AD0  (binary VA: 0xd45ad0)
// Original: sub_D45AD0
// ----------------------------------------------------------------------------
int * sub_D45AD0(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  char v14;

  v7 = a2 + 4;
  v14 = 1;
  v13 = v7;
  if ( a3 == 0 && a4 != v7 )
    v14 = *a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    *(uint32_t *)(v8 + 16) = *a5;
    v9 = a5[1];
    *(uint32_t *)(v8 + 20) = v9;
    if ( v9 != 0 )
    {
      v11 = v8;
      sub_8B1B00((volatile int32_t *)(v9 + 4));
      v8 = v11;
    }
  }
  v12 = v8;
  sub_1904970(v14, v8, a4, v13);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D45E50  (binary VA: 0xd45e50)
// Original: sub_D45E50
// ----------------------------------------------------------------------------
uint32_t * sub_D45E50(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v5;
  int v6;

  if ( a2 != a1 )
  {
    v5 = a1;
    do
    {
      if ( a3 != nullptr )
      {
        *a3 = *v5;
        a3[1] = v5[1];
        a3[2] = v5[2];
        a3[3] = v5[3];
        v6 = v5[4];
        a3[4] = v6;
        if ( v6 != 0 )
          sub_8B1B00((volatile int32_t *)(v6 + 4));
        a3[5] = v5[5];
      }
      v5 += 6;
      a3 += 6;
    }
    while ( v5 != a2 );
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: sub_D45F20  (binary VA: 0xd45f20)
// Original: sub_D45F20
// ----------------------------------------------------------------------------
uint32_t * sub_D45F20(uint32_t **a1, uint32_t **a2, uint32_t *a3)
{
  uint32_t **i;
  uint32_t *v6;
  bool v7;

  for ( i = a1; i != a2; ++a3 )
  {
    if ( a3 != nullptr )
    {
      v6 = *i;
      v7 = *i == nullptr;
      *a3 = (uint32_t)(uintptr_t)(*i);
      if ( !v7 )
        sub_8B1B00((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12) + 4));
    }
    ++i;
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: sub_D45F80  (binary VA: 0xd45f80)
// Original: sub_D45F80
// ----------------------------------------------------------------------------
int sub_D45F80(int a1, uint32_t *a2, unsigned int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  char v8; // bp
  unsigned int v9;
  char v11; // bp
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19[8];
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

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v18 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v17 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v18 != v17 )
      v11 = v17[4] > v6;
    v12 = opNew(0x18u);
    v13 = v12;
    if ( v12 != -16 )
    {
      *(uint32_t *)(v12 + 16) = *a3;
      v14 = a3[1];
      *(uint32_t *)(v13 + 20) = v14;
      if ( v14 != 0 )
        sub_8B1B00((volatile int32_t *)(v14 + 4));
    }
    sub_1904970(v11, v13, v17, v18);
    *(uint32_t *)a1 = v13;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_D45AD0(v19, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v15 = v19[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v15;
  }
  else
  {
    v17 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}


