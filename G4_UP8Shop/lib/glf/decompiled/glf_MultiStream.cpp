#include "Core/Utils/DecompTypes.h"
#include "glf_MultiStream.h"

// ----------------------------------------------------------------------------
// Function: glf::MultiStream::Print  (binary VA: 0xc90cc0)
// Original: glf::MultiStream::Print
// ----------------------------------------------------------------------------
int glf::MultiStream::Print(glf::MultiStream::Self *self, const glf::PrintParams::Self *a2)
{
  int *i;
  int v3;
  int result;

  for ( i = *((int **)self + 4);
        i != *((int **)self + 5);
        result = G4_VCALL<int>(v3, 20, a2) )
  {
    v3 = *i++;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::MultiStream::RemoveStream  (binary VA: 0xc90f60)
// Original: glf::MultiStream::RemoveStream
// ----------------------------------------------------------------------------
volatile int32_t ** glf::MultiStream::RemoveStream(int a1, volatile int32_t **a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  volatile int32_t *v5;
  volatile int32_t **result;
  volatile int32_t **v7;
  volatile int32_t **v8;
  int v9;
  int v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  volatile int32_t *v14;
  char *v15;

  v2 = *(uint32_t **)(a1 + 16);
  v15 = *(char **)(a1 + 20);
  v3 = (v15 - (char *)v2) >> 4;
  v4 = (v15 - (char *)v2) >> 2;
  if ( v3 > 0 )
  {
    v5 = *a2;
    if ( (volatile int32_t *)*v2 == *a2 )
    {
      result = *(volatile int32_t ***)(a1 + 16);
    }
    else if ( v5 == (volatile int32_t *)v2[1] )
    {
      result = (volatile int32_t **)(v2 + 1);
    }
    else if ( v5 == (volatile int32_t *)v2[2] )
    {
      result = (volatile int32_t **)(v2 + 2);
    }
    else if ( v5 == (volatile int32_t *)v2[3] )
    {
      result = (volatile int32_t **)(v2 + 3);
    }
    else
    {
      result = *(volatile int32_t ***)(a1 + 16);
      do
      {
        result += 4;
        if ( --v3 == 0 )
        {
          v4 = (v15 - (char *)result) >> 2;
          goto LABEL_13;
        }
        if ( *result == v5 )
          goto LABEL_18;
        v7 = result + 1;
        if ( result[1] == v5 )
          break;
        v7 = result + 2;
        if ( result[2] == v5 )
          break;
        v7 = result + 3;
      }
      while ( result[3] != v5 );
      result = v7;
    }
    goto LABEL_18;
  }
  result = *(volatile int32_t ***)(a1 + 16);
LABEL_13:
  if ( v4 == 2 )
  {
    v14 = *a2;
LABEL_44:
    if ( *result != v14 )
    {
      ++result;
      goto LABEL_39;
    }
    goto LABEL_18;
  }
  if ( v4 != 3 )
  {
    if ( v4 != 1 )
      return result;
    v14 = *a2;
LABEL_39:
    if ( *result != v14 )
      return result;
    goto LABEL_18;
  }
  v14 = *a2;
  if ( *result != *a2 )
  {
    ++result;
    goto LABEL_44;
  }
LABEL_18:
  if ( v15 == (char *)result )
    return result;
  v8 = result + 1;
  if ( v15 == (char *)(result + 1) )
    goto LABEL_32;
  v9 = (v15 - (char *)v8) >> 2;
  if ( v9 <= 0 )
    goto LABEL_32;
  while ( 1 )
  {
    v11 = result[1];
    if ( v11 != nullptr )
      __sync_add_and_fetch(v11 + 1, 1u);
    v12 = *result;
    *result = v11;
    if ( v12 != nullptr )
      break;
LABEL_24:
    --v9;
    result = v8;
    if ( v9 == 0 )
      goto LABEL_31;
LABEL_25:
    ++v8;
  }
  if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) != 1 )
  {
    v10 = *((uint32_t *)v12 + 1);
    _mm_mfence();
    if ( v10 == 1 )
      G4_VCALL<void>(v12, 12);
    goto LABEL_24;
  }
  G4_VCALL<void>(v12, 8);
  G4_VCALL<void>(v12, 16);
  --v9;
  result = v8;
  if ( v9 != 0 )
    goto LABEL_25;
LABEL_31:
  v15 = *(char **)(a1 + 20);
LABEL_32:
  result = (volatile int32_t **)(v15 - 4);
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v15 - 4);
  v13 = *((volatile int32_t **)v15 - 1);
  if ( v13 != nullptr )
  {
    if ( __sync_fetch_and_add(v13 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v13, 8);
      return (volatile int32_t **)G4_VCALL<int>(v13, 16);
    }
    else
    {
      result = *((volatile int32_t ***)v13 + 1);
      _mm_mfence();
      if ( result == (volatile int32_t **)((char *)&dword_0 + 1) )
        return (volatile int32_t **)G4_VCALL<int>(v13, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::MultiStream::AddStream  (binary VA: 0xc921a0)
// Original: glf::MultiStream::AddStream
// ----------------------------------------------------------------------------
int glf::MultiStream::AddStream(int a1, int *a2)
{
  int result;
  int *v3;
  int v4;
  int v5;
  bool v6;

  result = a1;
  v3 = *(int **)(a1 + 20);
  if ( v3 == *(int **)(a1 + 24) )
    return g4_std_compat::vector_fill_insert(a1 + 16, v3, a2);
  v4 = 0;
  if ( v3 != nullptr )
  {
    v5 = *a2;
    v6 = *a2 == 0;
    *v3 = *a2;
    if ( !v6 )
      __sync_add_and_fetch((volatile int32_t *)(v5 + 4), 1u);
    v4 = *(uint32_t *)(a1 + 20);
  }
  *(uint32_t *)(a1 + 20) = v4 + 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::MultiStream::Destroy  (binary VA: 0xc93070)
// Original: glf::MultiStream::~MultiStream
// ----------------------------------------------------------------------------
void glf::MultiStream::Destroy(glf::MultiStream::Self *self)
{
  volatile int32_t **v1;
  volatile int32_t **v2;
  int v3;
  volatile int32_t *v4;

  v1 = *((volatile int32_t ***)self + 5);
  v2 = *((volatile int32_t ***)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DBE8);
  if ( v1 != v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 != nullptr )
          break;
LABEL_5:
        if ( v1 == ++v2 )
          goto LABEL_9;
      }
      if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) != 1 )
      {
        v3 = *((uint32_t *)v4 + 1);
        _mm_mfence();
        if ( v3 == 1 )
          G4_VCALL<void>(v4, 12);
        goto LABEL_5;
      }
      ++v2;
      G4_VCALL<void>(v4, 8);
      G4_VCALL<void>(v4, 16);
      if ( v1 == v2 )
      {
LABEL_9:
        v2 = *((volatile int32_t ***)self + 4);
        break;
      }
    }
  }
  if ( v2 != nullptr )
    opDelete(v2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::MultiStream::Destroy_eac93130  (binary VA: 0xc93130)
// Original: glf::MultiStream::~MultiStream
// ----------------------------------------------------------------------------
void glf::MultiStream::Destroy_eac93130(glf::MultiStream::Self *self)
{
  volatile int32_t **v1;
  volatile int32_t **v2;
  int v3;
  volatile int32_t *v4;

  v1 = *((volatile int32_t ***)self + 5);
  v2 = *((volatile int32_t ***)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DBE8);
  if ( v1 != v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 != nullptr )
          break;
LABEL_5:
        if ( v1 == ++v2 )
          goto LABEL_9;
      }
      if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) != 1 )
      {
        v3 = *((uint32_t *)v4 + 1);
        _mm_mfence();
        if ( v3 == 1 )
          G4_VCALL<void>(v4, 12);
        goto LABEL_5;
      }
      ++v2;
      G4_VCALL<void>(v4, 8);
      G4_VCALL<void>(v4, 16);
      if ( v1 == v2 )
      {
LABEL_9:
        v2 = *((volatile int32_t ***)self + 4);
        break;
      }
    }
  }
  if ( v2 != nullptr )
    opDelete(v2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}


