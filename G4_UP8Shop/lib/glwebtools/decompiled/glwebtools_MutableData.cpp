#include "Core/Utils/DecompTypes.h"
#include "glwebtools_MutableData.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::Destroy  (binary VA: 0x1405b90)
// Original: glwebtools::MutableData::~MutableData
// ----------------------------------------------------------------------------
void glwebtools::MutableData::Destroy(glwebtools::MutableData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094EE0);
  if ( *((uint32_t *)self + 4) != 0 )
  {
    sub_4EBEE0(*((uint32_t *)self + 4));
    *((uint32_t *)self + 4) = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::Destroy_ea1405c00  (binary VA: 0x1405c00)
// Original: glwebtools::MutableData::~MutableData
// ----------------------------------------------------------------------------
void glwebtools::MutableData::Destroy_ea1405c00(glwebtools::MutableData::Self *self)
{
  glwebtools::MutableData::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x1405c90 (size: 87 bytes)
// Symbol:    _ZN10glwebtools11MutableDataC1Ej
// Demangled: glwebtools::MutableData::MutableData(unsigned int)
// ============================================================================
// Alternative name is '_ZN10glwebtools11MutableDataC2Ej'
struct glwebtools::MutableData::Self *glwebtools::MutableData::MutableData(
        glwebtools::MutableData::Self *self,
        glwebtools::Self *a2)
{
  struct glwebtools::MutableData::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094EE0);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  result = (struct glwebtools::MutableData::Self *)glwebtools::roundAllocToPowerOfTwo(a2);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 4) = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::GetSize  (binary VA: 0x1405cf0)
// Original: glwebtools::MutableData::GetSize
// ----------------------------------------------------------------------------
int glwebtools::MutableData::GetSize(glwebtools::MutableData::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::GetAllocatedSize  (binary VA: 0x1405d00)
// Original: glwebtools::MutableData::GetAllocatedSize
// ----------------------------------------------------------------------------
int glwebtools::MutableData::GetAllocatedSize(glwebtools::MutableData::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::Reserve  (binary VA: 0x1405d10)
// Original: glwebtools::MutableData::Reserve
// ----------------------------------------------------------------------------
int glwebtools::MutableData::Reserve(glwebtools::MutableData::Self *self, size_t a2)
{
  int v2;
  size_t v3;
  unsigned int v4;
  void *v5;

  v2 = 1;
  v3 = a2;
  if ( *((uint32_t *)self + 2) < a2 )
  {
    v4 = *((uint32_t *)self + 3);
    if ( a2 % v4 != 0 )
      v3 = v4 * (a2 / v4 + 1);
    v5 = sub_4EBEB0(*((void **)self + 4), v3);
    v2 = 0;
    if ( v5 != nullptr )
    {
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v5);
      *((uint32_t *)self + 2) = v3;
      return 1;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::Resize  (binary VA: 0x1405db0)
// Original: glwebtools::MutableData::Resize
// ----------------------------------------------------------------------------
int glwebtools::MutableData::Resize(glwebtools::MutableData::Self *self, size_t a2)
{
  int result;
  char v3;

  if ( *((uint32_t *)self + 2) >= a2 || (v3 = glwebtools::MutableData::Reserve(self, a2), result = 0, v3 != 0) )
  {
    *((uint32_t *)self + 1) = a2;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::Purge  (binary VA: 0x1405e10)
// Original: glwebtools::MutableData::Purge
// ----------------------------------------------------------------------------
int glwebtools::MutableData::Purge(glwebtools::MutableData::Self *self)
{
  unsigned int v1;
  int result;
  void *v3;
  int v4;

  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 || *((uint32_t *)self + 4) == 0 )
  {
    result = 1;
    if ( v1 < *((uint32_t *)self + 2) )
    {
      v3 = sub_4EBEB0(*((void **)self + 4), *((uint32_t *)self + 1));
      result = 0;
      if ( v3 != nullptr )
      {
        v4 = *((uint32_t *)self + 1);
        *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v3);
        *((uint32_t *)self + 2) = v4;
        return 1;
      }
    }
  }
  else
  {
    sub_4EBEE0(*((uint32_t *)self + 4));
    *((uint32_t *)self + 4) = 0;
    *((uint32_t *)self + 2) = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::GetData  (binary VA: 0x1405ed0)
// Original: glwebtools::MutableData::GetData
// ----------------------------------------------------------------------------
int glwebtools::MutableData::GetData(glwebtools::MutableData::Self *self, const void **a2, unsigned int *a3)
{
  *a2 = *((const void **)self + 4);
  *a3 = *((uint32_t *)self + 1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::GetMutableData  (binary VA: 0x1405ef0)
// Original: glwebtools::MutableData::GetMutableData
// ----------------------------------------------------------------------------
int glwebtools::MutableData::GetMutableData(glwebtools::MutableData::Self *self, void **a2, unsigned int *a3)
{
  *a2 = *((void **)self + 4);
  *a3 = *((uint32_t *)self + 1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::AppendData  (binary VA: 0x1405f10)
// Original: glwebtools::MutableData::AppendData
// ----------------------------------------------------------------------------
int glwebtools::MutableData::AppendData(glwebtools::MutableData::Self *self, void *src, size_t n)
{
  int v3;
  int result;
  char v5;

  if ( n == 0 || src == nullptr )
    return 0;
  v3 = *((uint32_t *)self + 1);
  if ( n + v3 <= *((uint32_t *)self + 2) )
    goto LABEL_4;
  v5 = glwebtools::MutableData::Reserve(self, n + v3);
  result = 0;
  if ( v5 != 0 )
  {
    v3 = *((uint32_t *)self + 1);
LABEL_4:
    memcpy((void *)(*((uint32_t *)self + 4) + v3), src, n);
    *((uint32_t *)self + 1) += n;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::MutableData::Swap  (binary VA: 0x1405fb0)
// Original: glwebtools::MutableData::Swap
// ----------------------------------------------------------------------------
int glwebtools::MutableData::Swap(glwebtools::MutableData::Self *self, glwebtools::MutableData::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = *((uint32_t *)a2 + 1);
  v6 = *((uint32_t *)a2 + 4);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 1);
  v3 = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 2);
  v4 = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 3);
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 4);
  *((uint32_t *)self + 1) = v2;
  *((uint32_t *)self + 2) = v3;
  *((uint32_t *)self + 3) = v4;
  *((uint32_t *)self + 4) = v6;
  return 1;
}


