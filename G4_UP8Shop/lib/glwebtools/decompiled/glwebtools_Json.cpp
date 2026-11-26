#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Json.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::Destroy  (binary VA: 0x13e4e20)
// Original: glwebtools::Json::Reader::~Reader
// ----------------------------------------------------------------------------
void glwebtools::Json::Reader::Destroy(glwebtools::Json::Reader::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  void *v10;
  void **v11;
  unsigned int v12;
  void *v13;
  void *v14;
  void **v15;
  unsigned int v16;
  void *v17;
  int i;
  int v19;
  uint32_t *v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v1 = *((uint32_t *)self + 26);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 20);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v24 = *((uint32_t *)self + 17);
  v23 = *((uint32_t *)self + 16);
  v21 = *((uint32_t *)self + 12);
  v22 = *((uint32_t *)self + 19);
  v26 = *((uint32_t *)self + 15);
  v25 = *((uint32_t *)self + 14);
  v20 = (uint32_t *)(v26 + 4);
  if ( v22 > v26 + 4 )
  {
    do
    {
      v3 = 0;
      v4 = *v20 + 12;
      do
      {
        v5 = *(uint32_t *)(v4 + v3);
        if ( (uint32_t *)(v5 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v5 - 12));
        }
        v3 += 20;
      }
      while ( v3 != 500 );
      ++v20;
    }
    while ( v22 > (unsigned int)(uintptr_t)(v20) );
  }
  if ( v22 == v26 )
  {
    for ( i = v21; v23 != i; i += 20 )
    {
      v19 = *(uint32_t *)(i + 12);
      if ( (uint32_t *)(v19 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v19 - 12));
      }
    }
  }
  else
  {
    if ( v21 != v25 )
    {
      v6 = v21;
      do
      {
        v7 = *(uint32_t *)(v6 + 12);
        if ( (uint32_t *)(v7 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v7 - 12));
        }
        v6 += 20;
      }
      while ( v25 != v6 );
    }
    if ( v23 != v24 )
    {
      v8 = v24;
      do
      {
        v9 = *(uint32_t *)(v8 + 12);
        if ( (uint32_t *)(v9 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v9 - 12));
        }
        v8 += 20;
      }
      while ( v23 != v8 );
    }
  }
  v10 = *((void **)self + 10);
  if ( v10 != nullptr )
  {
    v11 = *((void ***)self + 15);
    v12 = *((uint32_t *)self + 19) + 4;
    if ( v12 > (unsigned int)(uintptr_t)(v11) )
    {
      do
      {
        v13 = *v11++;
        opDelete(v13);
      }
      while ( v12 > (unsigned int)(uintptr_t)(v11) );
      v10 = *((void **)self + 10);
    }
    opDelete(v10);
  }
  v14 = *(void **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v15 = *((void ***)self + 5);
    v16 = *((uint32_t *)self + 9) + 4;
    if ( v16 > (unsigned int)(uintptr_t)(v15) )
    {
      do
      {
        v17 = *v15++;
        opDelete(v17);
      }
      while ( v16 > (unsigned int)(uintptr_t)(v15) );
      v14 = *(void **)self;
    }
    opDelete(v14);
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueAllocator::Destroy  (binary VA: 0x13f59d0)
// Original: glwebtools::Json::ValueAllocator::~ValueAllocator
// ----------------------------------------------------------------------------
void glwebtools::Json::ValueAllocator::Destroy(glwebtools::Json::ValueAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094DE8);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Writer::Destroy  (binary VA: 0x13f59f0)
// Original: glwebtools::Json::Writer::~Writer
// ----------------------------------------------------------------------------
void glwebtools::Json::Writer::Destroy(glwebtools::Json::Writer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E08);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Writer::Destroy_ea13f5a10  (binary VA: 0x13f5a10)
// Original: glwebtools::Json::Writer::~Writer
// ----------------------------------------------------------------------------
void glwebtools::Json::Writer::Destroy_ea13f5a10(glwebtools::Json::Writer::Self *self)
{
  glwebtools::Json::Writer::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueAllocator::Destroy_ea13f5a50  (binary VA: 0x13f5a50)
// Original: glwebtools::Json::ValueAllocator::~ValueAllocator
// ----------------------------------------------------------------------------
void glwebtools::Json::ValueAllocator::Destroy_ea13f5a50(glwebtools::Json::ValueAllocator::Self *self)
{
  glwebtools::Json::ValueAllocator::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x13f5bc0 (size: 17 bytes)
// Symbol:    _ZN10glwebtools4Json17ValueIteratorBaseC2Ev
// Demangled: glwebtools::Json::ValueIteratorBase::ValueIteratorBase(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json17ValueIteratorBaseC1Ev'
glwebtools::Json::ValueIteratorBase::Self *glwebtools::Json::ValueIteratorBase::Construct(
        glwebtools::Json::ValueIteratorBase::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint8_t *)self + 4) = 1;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::Construct  (binary VA: 0x13f5be0)
// Original: glwebtools::Json::ValueIteratorBase::ValueIteratorBase
// ----------------------------------------------------------------------------
int glwebtools::Json::ValueIteratorBase::Construct(int a1, int *a2)
{
  int v3;

  v3 = *a2;
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = v3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::deref  (binary VA: 0x13f5c00)
// Original: glwebtools::Json::ValueIteratorBase::deref
// ----------------------------------------------------------------------------
int glwebtools::Json::ValueIteratorBase::deref(glwebtools::Json::ValueIteratorBase::Self *self)
{
  return *(uint32_t *)self + 24;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::increment  (binary VA: 0x13f5c10)
// Original: glwebtools::Json::ValueIteratorBase::increment
// ----------------------------------------------------------------------------
int glwebtools::Json::ValueIteratorBase::increment(glwebtools::Json::ValueIteratorBase::Self *self)
{
  int result;

  result = sub_1904890(*(uint32_t *)self);
  *(uint32_t *)self = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::decrement  (binary VA: 0x13f5c50)
// Original: glwebtools::Json::ValueIteratorBase::decrement
// ----------------------------------------------------------------------------
int glwebtools::Json::ValueIteratorBase::decrement(glwebtools::Json::ValueIteratorBase::Self *self)
{
  int result;

  result = sub_19048F0(*(uint32_t *)self);
  *(uint32_t *)self = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::computeDistance  (binary VA: 0x13f5c90)
// Original: glwebtools::Json::ValueIteratorBase::computeDistance
// ----------------------------------------------------------------------------
int glwebtools::Json::ValueIteratorBase::computeDistance(glwebtools::Json::ValueIteratorBase::Self *self, const glwebtools::Json::ValueIteratorBase::Self *a2)
{
  int i;
  int v3;
  int v4;

  if ( *((uint8_t *)self + 4) == 0 || (i = 0, *((uint8_t *)a2 + 4) == 0) )
  {
    v3 = *(uint32_t *)self;
    v4 = *(uint32_t *)a2;
    for ( i = 0; v3 != v4; v3 = sub_1904890(v3) )
      ++i;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::isEqual  (binary VA: 0x13f5cf0)
// Original: glwebtools::Json::ValueIteratorBase::isEqual
// ----------------------------------------------------------------------------
char glwebtools::Json::ValueIteratorBase::isEqual(glwebtools::Json::ValueIteratorBase::Self *self, const glwebtools::Json::ValueIteratorBase::Self *a2)
{
  if ( *((uint8_t *)self + 4) != 0 )
    return *((uint8_t *)a2 + 4);
  else
    return *(uint32_t *)self == *(uint32_t *)a2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::copy  (binary VA: 0x13f5d10)
// Original: glwebtools::Json::ValueIteratorBase::copy
// ----------------------------------------------------------------------------
glwebtools::Json::ValueIteratorBase::Self * glwebtools::Json::ValueIteratorBase::copy(glwebtools::Json::ValueIteratorBase::Self *self, const glwebtools::Json::ValueIteratorBase::Self *a2)
{
  *(uint32_t *)self = *(uint32_t *)a2;
  return self;
}



// ============================================================================
// Address:   0x13f5d20 (size: 34 bytes)
// Symbol:    _ZN10glwebtools4Json18ValueConstIteratorC2Ev
// Demangled: glwebtools::Json::ValueConstIterator::ValueConstIterator(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json18ValueConstIteratorC1Ev'
glwebtools::Json::ValueConstIterator::Self *glwebtools::Json::ValueConstIterator::Construct(
        glwebtools::Json::ValueConstIterator::Self *self)
{
  return (struct glwebtools::Json::ValueConstIterator::Self *)(uintptr_t)(glwebtools::Json::ValueIteratorBase::Construct(self));
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueConstIterator::Construct  (binary VA: 0x13f5d50)
// Original: glwebtools::Json::ValueConstIterator::ValueConstIterator
// ----------------------------------------------------------------------------
int glwebtools::Json::ValueConstIterator::Construct(int a1, int *a2)
{
  return glwebtools::Json::ValueIteratorBase::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueConstIterator::opAssign  (binary VA: 0x13f5d80)
// Original: glwebtools::Json::ValueConstIterator::operator=
// ----------------------------------------------------------------------------
glwebtools::Json::ValueConstIterator::Self * glwebtools::Json::ValueConstIterator::opAssign(glwebtools::Json::ValueConstIterator::Self *self, const glwebtools::Json::ValueIteratorBase::Self *a2)
{
  glwebtools::Json::ValueIteratorBase::copy((glwebtools::Json::ValueIteratorBase::Self *)(self), a2);
  return self;
}



// ============================================================================
// Address:   0x13f5dc0 (size: 34 bytes)
// Symbol:    _ZN10glwebtools4Json13ValueIteratorC1Ev
// Demangled: glwebtools::Json::ValueIterator::ValueIterator(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json13ValueIteratorC2Ev'
glwebtools::Json::ValueIterator::Self *glwebtools::Json::ValueIterator::Construct(
        glwebtools::Json::ValueIterator::Self *self)
{
  return (struct glwebtools::Json::ValueIterator::Self *)(uintptr_t)(glwebtools::Json::ValueIteratorBase::Construct(self));
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIterator::Construct  (binary VA: 0x13f5df0)
// Original: glwebtools::Json::ValueIterator::ValueIterator
// ----------------------------------------------------------------------------
int glwebtools::Json::ValueIterator::Construct(int a1, int *a2)
{
  return glwebtools::Json::ValueIteratorBase::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIterator::Construct  (binary VA: 0x13f5e20)
// Original: glwebtools::Json::ValueIterator::ValueIterator
// ----------------------------------------------------------------------------
glwebtools::Json::ValueIterator::Self * glwebtools::Json::ValueIterator::Construct(glwebtools::Json::ValueIterator::Self *self, const glwebtools::Json::ValueConstIterator::Self *a2)
{
  int64_t v3; // rt0

  HIDWORD(v3) = *((uint8_t *)a2 + 4);
  LODWORD(v3) = *(uint32_t *)a2;
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint8_t *)self + 4) = (uint64_t)(v3 << 24) >> 56;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIterator::Construct  (binary VA: 0x13f5e60)
// Original: glwebtools::Json::ValueIterator::ValueIterator
// ----------------------------------------------------------------------------
glwebtools::Json::ValueIterator::Self * glwebtools::Json::ValueIterator::Construct(glwebtools::Json::ValueIterator::Self *self, const glwebtools::Json::ValueIterator::Self *a2)
{
  int64_t v3; // rt0

  HIDWORD(v3) = *((uint8_t *)a2 + 4);
  LODWORD(v3) = *(uint32_t *)a2;
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint8_t *)self + 4) = (uint64_t)(v3 << 24) >> 56;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIterator::opAssign  (binary VA: 0x13f5ea0)
// Original: glwebtools::Json::ValueIterator::operator=
// ----------------------------------------------------------------------------
glwebtools::Json::ValueIterator::Self * glwebtools::Json::ValueIterator::opAssign(glwebtools::Json::ValueIterator::Self *self, const glwebtools::Json::ValueIterator::Self *a2)
{
  glwebtools::Json::ValueIteratorBase::copy((glwebtools::Json::ValueIteratorBase::Self *)(self), (const glwebtools::Json::ValueIteratorBase::Self *)(a2));
  return self;
}



// ============================================================================
// Address:   0x13f5ee0 (size: 15 bytes)
// Symbol:    _ZN10glwebtools4Json5Value11CommentInfoC2Ev
// Demangled: glwebtools::Json::Value::CommentInfo::CommentInfo(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json5Value11CommentInfoC1Ev'
glwebtools::Json::Value::CommentInfo::Self *glwebtools::Json::Value::CommentInfo::Construct(
        glwebtools::Json::Value::CommentInfo::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CommentInfo::Destroy  (binary VA: 0x13f5ef0)
// Original: glwebtools::Json::Value::CommentInfo::~CommentInfo
// ----------------------------------------------------------------------------
void glwebtools::Json::Value::CommentInfo::Destroy(glwebtools::Json::Value::CommentInfo::Self *self)
{
  int **v1;

  if ( *(uint32_t *)self != 0 )
  {
    v1 = sub_13F5A90();
    (*(void (**)(int *, uint32_t))(**v1 + 20))(*v1, *(uint32_t *)self);
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CommentInfo::setComment  (binary VA: 0x13f5f20)
// Original: glwebtools::Json::Value::CommentInfo::setComment
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::CommentInfo::setComment(glwebtools::Json::Value::CommentInfo::Self *self, const char *a2)
{
  int **v2;
  int **v3;
  int result;

  if ( *(uint32_t *)self != 0 )
  {
    v2 = sub_13F5A90();
    (*(void (**)(int *, uint32_t))(**v2 + 20))(*v2, *(uint32_t *)self);
  }
  v3 = sub_13F5A90();
  result = (*(int (**)(int *, const char *, int))(**v3 + 16))(*v3, a2, -1);
  *(uint32_t *)self = result;
  return result;
}



// ============================================================================
// Address:   0x13f5f70 (size: 18 bytes)
// Symbol:    _ZN10glwebtools4Json5Value8CZStringC2Ei
// Demangled: glwebtools::Json::Value::CZString::CZString(int)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json5Value8CZStringC1Ei'
glwebtools::Json::Value::CZString::Self *glwebtools::Json::Value::CZString::Construct(
        glwebtools::Json::Value::CZString::Self *self,
        int a2)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = a2;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::Construct  (binary VA: 0x13f5f90)
// Original: glwebtools::Json::Value::CZString::CZString
// ----------------------------------------------------------------------------
void glwebtools::Json::Value::CZString::Construct(int *a1, int a2, int a3)
{
  int v3;
  int **v4;

  v3 = a2;
  if ( a3 == 1 )
  {
    v4 = sub_13F5A90();
    v3 = (*(int (**)(int *, int))(**v4 + 8))(*v4, a2);
  }
  *a1 = v3;
  a1[1] = a3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::Construct  (binary VA: 0x13f5fe0)
// Original: glwebtools::Json::Value::CZString::CZString
// ----------------------------------------------------------------------------
glwebtools::Json::Value::CZString::Self * glwebtools::Json::Value::CZString::Construct(glwebtools::Json::Value::CZString::Self *self, const glwebtools::Json::Value::CZString::Self *a2)
{
  int v2;
  int **v3;
  glwebtools::Json::Value::CZString::Self *result;

  if ( *((uint32_t *)a2 + 1) != 0 )
  {
    v2 = 0;
    if ( *(uint32_t *)a2 != 0 )
    {
      v3 = sub_13F5A90();
      v2 = (*(int (**)(int *, uint32_t))(**v3 + 8))(*v3, *(uint32_t *)a2);
    }
    *(uint32_t *)self = v2;
    if ( *(uint32_t *)a2 != 0 )
      goto LABEL_5;
  }
  else
  {
    *(uint32_t *)self = *(uint32_t *)a2;
    if ( *(uint32_t *)a2 != 0 )
    {
LABEL_5:
      result = (glwebtools::Json::Value::CZString::Self *)(*((uint32_t *)a2 + 1) != 0);
      *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
      return result;
    }
  }
  result = *((glwebtools::Json::Value::CZString::Self **)a2 + 1);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::Destroy  (binary VA: 0x13f6060)
// Original: glwebtools::Json::Value::CZString::~CZString
// ----------------------------------------------------------------------------
void glwebtools::Json::Value::CZString::Destroy(glwebtools::Json::Value::CZString::Self *self)
{
  int **v1;

  if ( *(uint32_t *)self != 0 && *((uint32_t *)self + 1) == 1 )
  {
    v1 = sub_13F5A90();
    (*(void (**)(int *, uint32_t))(**v1 + 12))(*v1, *(uint32_t *)self);
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::swap  (binary VA: 0x13f60a0)
// Original: glwebtools::Json::Value::CZString::swap
// ----------------------------------------------------------------------------
glwebtools::Json::Value::CZString::Self * glwebtools::Json::Value::CZString::swap(glwebtools::Json::Value::CZString::Self *self, glwebtools::Json::Value::CZString::Self *a2)
{
  int v3;
  int v4;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v3;
  v4 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a2 + 1) = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::opAssign  (binary VA: 0x13f60c0)
// Original: glwebtools::Json::Value::CZString::operator=
// ----------------------------------------------------------------------------
glwebtools::Json::Value::CZString::Self * glwebtools::Json::Value::CZString::opAssign(glwebtools::Json::Value::CZString::Self *self, const glwebtools::Json::Value::CZString::Self *a2)
{
  uint8_t v3[8];

  glwebtools::Json::Value::CZString::Construct((glwebtools::Json::Value::CZString::Self *)v3, a2);
  glwebtools::Json::Value::CZString::swap(self, (glwebtools::Json::Value::CZString::Self *)v3);
  glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::opLt  (binary VA: 0x13f6120)
// Original: glwebtools::Json::Value::CZString::operator<
// ----------------------------------------------------------------------------
char glwebtools::Json::Value::CZString::opLt(const char **self, const char **a2)
{
  int v2;

  if ( *self != nullptr )
    return (unsigned int)strcmp(*self, *a2) >> 31;
  else
    LOBYTE(v2) = (int)(uintptr_t)(*(self + 1)) < (int)(uintptr_t)(a2[1]);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::opEq  (binary VA: 0x13f6170)
// Original: glwebtools::Json::Value::CZString::operator==
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::CZString::opEq(const char **self, const char **a2)
{
  if ( *self != nullptr )
    return strcmp(*self, *a2) == 0;
  else
    return *(self + 1) == a2[1];
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::index  (binary VA: 0x13f61c0)
// Original: glwebtools::Json::Value::CZString::index
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::CZString::index(glwebtools::Json::Value::CZString::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::c_str  (binary VA: 0x13f61d0)
// Original: glwebtools::Json::Value::CZString::c_str
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::CZString::c_str(glwebtools::Json::Value::CZString::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::memberName  (binary VA: 0x13f61e0)
// Original: glwebtools::Json::ValueIteratorBase::memberName
// ----------------------------------------------------------------------------
void * glwebtools::Json::ValueIteratorBase::memberName(glwebtools::Json::ValueIteratorBase::Self *self)
{
  void *result;

  result = (void *)glwebtools::Json::Value::CZString::c_str((glwebtools::Json::Value::CZString::Self *)(*(uint32_t *)self + 16));
  if ( result == nullptr )
    return &unk_1B15112;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::index  (binary VA: 0x13f6220)
// Original: glwebtools::Json::ValueIteratorBase::index
// ----------------------------------------------------------------------------
int glwebtools::Json::ValueIteratorBase::index(glwebtools::Json::ValueIteratorBase::Self *self)
{
  int v1;
  uint8_t v3[8];

  v1 = -1;
  glwebtools::Json::Value::CZString::Construct(
    (glwebtools::Json::Value::CZString::Self *)v3,
    (const glwebtools::Json::Value::CZString::Self *)(*(uint32_t *)self + 16));
  if ( glwebtools::Json::Value::CZString::c_str((glwebtools::Json::Value::CZString::Self *)v3) == 0 )
    v1 = glwebtools::Json::Value::CZString::index((glwebtools::Json::Value::CZString::Self *)v3);
  glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v3);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::CZString::isStaticString  (binary VA: 0x13f6290)
// Original: glwebtools::Json::Value::CZString::isStaticString
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::CZString::isStaticString(glwebtools::Json::Value::CZString::Self *self)
{
  return *((uint32_t *)self + 1) == 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Construct  (binary VA: 0x13f62a0)
// Original: glwebtools::Json::Value::Value
// ----------------------------------------------------------------------------
uint32_t * glwebtools::Json::Value::Construct(int a1, uint32_t *a2)
{
  uint32_t *result;

  *(uint8_t *)(a1 + 9) &= ~1u;
  *(uint8_t *)(a1 + 8) = (uint8_t)(uintptr_t)a2;
  *(uint32_t *)(a1 + 12) = 0;
  result = (uint32_t *)((int *)((char *)dword_20B9FF4 + (uint32_t)jpt_13F62DB[(uint32_t)(uintptr_t)(a2)]));
  switch ( (unsigned int)(uintptr_t)(a2) )
  {
    case 0u:
      return result;
    case 1u:
    case 2u:
    case 4u:
      *(uint32_t *)a1 = 0;
      break;
    case 3u:
      *(uint64_t *)a1 = 0;
      break;
    case 5u:
      *(uint8_t *)a1 = 0;
      break;
    case 6u:
    case 7u:
      result = (uint32_t *)opNew(0x18u);
      result[1] = 0;
      result[2] = 0;
      result[5] = 0;
      result[3] = (uint32_t)(uintptr_t)(result + 1);
      result[4] = (uint32_t)(uintptr_t)(result + 1);
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(result);
      break;
    default:
      result = a2;
      break;
  }
  return result;
}



// ============================================================================
// Address:   0x13f6360 (size: 22 bytes)
// Symbol:    _ZN10glwebtools4Json5ValueC1Ei
// Demangled: glwebtools::Json::Value::Value(int)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json5ValueC2Ei'
struct glwebtools::Json::Value::Self *glwebtools::Json::Value::Construct(glwebtools::Json::Value::Self *self, int a2)
{
  *((uint8_t *)self + 8) = 1;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = a2;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Construct  (binary VA: 0x13f6380)
// Original: glwebtools::Json::Value::Value
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::Construct(glwebtools::Json::Value::Self *self, unsigned int a2)
{
  *((uint8_t *)self + 8) = 2;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Construct  (binary VA: 0x13f63a0)
// Original: glwebtools::Json::Value::Value
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::Construct(glwebtools::Json::Value::Self *self, double a2)
{
  *(double *)self = a2;
  *((uint8_t *)self + 8) = 3;
  *((uint32_t *)self + 3) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Construct  (binary VA: 0x13f63c0)
// Original: glwebtools::Json::Value::Value
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::Construct(glwebtools::Json::Value::Self *self, const char *a2)
{
  int **v2;
  glwebtools::Json::Value::Self *result;

  *((uint8_t *)self + 8) = 4;
  *((uint8_t *)self + 9) |= 1u;
  *((uint32_t *)self + 3) = 0;
  v2 = sub_13F5A90();
  result = (glwebtools::Json::Value::Self *)(*(int (**)(int *, const char *, int))(**v2 + 16))(*v2, a2, -1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Construct  (binary VA: 0x13f6400)
// Original: glwebtools::Json::Value::Value
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::Construct(glwebtools::Json::Value::Self *self, const char *a2, const char *a3)
{
  int **v3;
  glwebtools::Json::Value::Self *result;

  *((uint8_t *)self + 8) = 4;
  *((uint8_t *)self + 9) |= 1u;
  *((uint32_t *)self + 3) = 0;
  v3 = sub_13F5A90();
  result = (glwebtools::Json::Value::Self *)(*(int (**)(int *, const char *, int))(**v3 + 16))(*v3, a2, a3 - a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Construct_ea13f6450  (binary VA: 0x13f6450)
// Original: glwebtools::Json::Value::Value
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::Construct_ea13f6450(int a1, uint32_t *a2)
{
  int **v2;
  int result;

  *(uint8_t *)(a1 + 8) = 4;
  *(uint8_t *)(a1 + 9) |= 1u;
  *(uint32_t *)(a1 + 12) = 0;
  v2 = sub_13F5A90();
  result = (*(int (**)(int *, uint32_t, uint32_t))(**v2 + 16))(*v2, *a2, *(uint32_t *)(*a2 - 12));
  *(uint32_t *)a1 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Construct_ea13f64a0  (binary VA: 0x13f64a0)
// Original: glwebtools::Json::Value::Value
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::Construct_ea13f64a0(int a1, uint32_t *a2)
{
  *(uint8_t *)(a1 + 9) &= ~1u;
  *(uint8_t *)(a1 + 8) = 4;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)a1 = *a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::ValueIteratorBase::key  (binary VA: 0x13f64c0)
// Original: glwebtools::Json::ValueIteratorBase::key
// ----------------------------------------------------------------------------
glwebtools::Json::ValueIteratorBase::Self * glwebtools::Json::ValueIteratorBase::key(glwebtools::Json::ValueIteratorBase::Self *self, int a2)
{
  const char *v2;
  int v4;
  typedef int _g4_t_v5;
  typedef uint8_t _g4_t_v6[8];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  glwebtools::Json::Value::CZString::Construct(
    (glwebtools::Json::Value::CZString::Self *)v6,
    (const glwebtools::Json::Value::CZString::Self *)(*(uint32_t *)a2 + 16));
  if ( glwebtools::Json::Value::CZString::c_str((glwebtools::Json::Value::CZString::Self *)v6) != 0 )
  {
    if ( glwebtools::Json::Value::CZString::isStaticString((glwebtools::Json::Value::CZString::Self *)v6) )
    {
      v5 = glwebtools::Json::Value::CZString::c_str((glwebtools::Json::Value::CZString::Self *)v6);
      glwebtools::Json::Value::Construct((int)(uintptr_t)(self), &v5);
    }
    else
    {
      v2 = (const char *)glwebtools::Json::Value::CZString::c_str((glwebtools::Json::Value::CZString::Self *)v6);
      glwebtools::Json::Value::Construct(self, v2);
    }
  }
  else
  {
    v4 = glwebtools::Json::Value::CZString::index((glwebtools::Json::Value::CZString::Self *)v6);
    glwebtools::Json::Value::Construct(self, v4);
  }
  glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v6);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Construct  (binary VA: 0x13f6580)
// Original: glwebtools::Json::Value::Value
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::Construct(glwebtools::Json::Value::Self *self, bool a2)
{
  *((uint8_t *)self + 8) = 5;
  *((uint32_t *)self + 3) = 0;
  *(uint8_t *)self = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::swap  (binary VA: 0x13f65a0)
// Original: glwebtools::Json::Value::swap
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::swap(glwebtools::Json::Value::Self *self, glwebtools::Json::Value::Self *a2)
{
  char v3; // di
  int v4;
  int v5;
  int v6;

  v3 = *((uint8_t *)self + 8);
  *((uint8_t *)self + 8) = *((uint8_t *)a2 + 8);
  *((uint8_t *)a2 + 8) = v3;
  v5 = *(uint32_t *)self;
  v6 = *((uint32_t *)self + 1);
  v4 = *((uint32_t *)a2 + 1);
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = v4;
  *(uint32_t *)a2 = v5;
  *((uint32_t *)a2 + 1) = v6;
  LOBYTE(v4) = *((uint8_t *)self + 9) & 1;
  *((uint8_t *)self + 9) = *((uint8_t *)a2 + 9) & 1 | *((uint8_t *)self + 9) & 0xFE;
  *((uint8_t *)a2 + 9) = v4 | *((uint8_t *)a2 + 9) & 0xFE;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::type  (binary VA: 0x13f6610)
// Original: glwebtools::Json::Value::type
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::type(glwebtools::Json::Value::Self *self)
{
  return *((uint8_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::compare  (binary VA: 0x13f6620)
// Original: glwebtools::Json::Value::compare
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::compare()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opEq  (binary VA: 0x13f6630)
// Original: glwebtools::Json::Value::operator==
// ----------------------------------------------------------------------------
char glwebtools::Json::Value::opEq(const char **self, const glwebtools::Json::Value::Self *a2)
{
  char result;
  char v3;
  int v4;
  int v5;
  const char *v6;
  const char *v7;
  const char *s1;

  result = 0;
  v3 = *((uint8_t *)a2 + 8);
  if ( v3 == *((uint8_t *)self + 8) )
  {
    switch ( v3 )
    {
      case 0:
        return 1;
      case 1:
      case 2:
        return *self == *(const char **)a2;
      case 3:
        return *(double *)self == *(double *)a2;
      case 4:
        s1 = *self;
        result = 1;
        if ( *self != *(const char **)a2 )
        {
          result = 0;
          if ( *(uint32_t *)a2 != 0 && s1 != nullptr )
            return strcmp(s1, *(const char **)a2) == 0;
        }
        return result;
      case 5:
        return *(uint8_t *)self == *(uint8_t *)a2;
      case 6:
      case 7:
        v6 = *self;
        result = 0;
        if ( *((uint32_t *)*self + 5) != *(uint32_t *)(*(uint32_t *)a2 + 20) )
          return result;
        v7 = v6 + 4;
        v4 = *((uint32_t *)v6 + 3);
        v5 = *(uint32_t *)(*(uint32_t *)a2 + 12);
        result = 1;
        if ( v6 + 4 == (const char *)v4 )
          return result;
        break;
      default:
        return 0;
    }
    while ( glwebtools::Json::Value::CZString::opEq((const char **)(v4 + 16), (const char **)(v5 + 16)) )
    {
      result = glwebtools::Json::Value::opEq(
                 (const char **)((glwebtools::Json::Value::Self *)(v4 + 24)),
                 (const glwebtools::Json::Value::Self *)(v5 + 24));
      if ( result == 0 )
        return result;
      v4 = sub_19048E0(v4);
      v5 = sub_19048E0(v5);
      if ( v7 == (const char *)v4 )
        return 1;
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opNe  (binary VA: 0x13f6780)
// Original: glwebtools::Json::Value::operator!=
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::opNe(const char **self, const glwebtools::Json::Value::Self *a2)
{
  int v2;

  LOBYTE(v2) = glwebtools::Json::Value::opEq(self, a2);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::asCString  (binary VA: 0x13f67b0)
// Original: glwebtools::Json::Value::asCString
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::asCString(glwebtools::Json::Value::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::asString  (binary VA: 0x13f67c0)
// Original: glwebtools::Json::Value::asString
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::asString(glwebtools::Json::Value::Self *self, int a2)
{
  char v2;
  char *v3;
  char *v5;
  char *v6;
  typedef char _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (13u + sizeof(_g4_t_v8)) > _g4_s1 ? (13u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 13u);

  v2 = *(uint8_t *)(a2 + 8);
  if ( v2 == 4 )
  {
    v6 = *(char **)a2;
    if ( *(uint32_t *)a2 == 0 )
      v6 = (char *)&unk_1B15112;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v6, (int)(uintptr_t)(&v8));
  }
  else if ( v2 == 5 )
  {
    v5 = "true";
    if ( *(uint8_t *)a2 == 0 )
      v5 = "false";
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v5, (int)(uintptr_t)(&v8) + 1);
  }
  else
  {
    if ( v2 != 0 )
      v3 = (char *)&v8 + 2;
    else
      v3 = &v7;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v3));
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::asInt  (binary VA: 0x13f6880)
// Original: glwebtools::Json::Value::asInt
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::asInt(glwebtools::Json::Value::Self *self)
{
  uint8_t v1;

  v1 = *((uint8_t *)self + 8);
  switch ( v1 )
  {
    case 1u:
    case 2u:
      return *(uint32_t *)self;
    case 3u:
      return (int)*(double *)self;
    case 5u:
      return *(uint8_t *)self;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::asUInt  (binary VA: 0x13f68d0)
// Original: glwebtools::Json::Value::asUInt
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::asUInt(glwebtools::Json::Value::Self *self)
{
  uint8_t v1;
  __m128d v3;
  __m128d v4;
  v1 = *((uint8_t *)self + 8);
  switch ( v1 )
  {
    case 1u:
    case 2u:
      return *(uint32_t *)self;
    case 3u:
      v3 = g4_to_m128d(*(uint64_t *)self);
      v4 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v3);
      return _mm_cvtsi128_si32(
               _mm_xor_si128(
                 _mm_cvttpd_epi32(_mm_sub_pd(v3, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v4))),
                 _mm_slli_epi32(G4_BITCAST<__m128i>(v4), 0x1Fu)));
    case 5u:
      return *(uint8_t *)self;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::asDouble  (binary VA: 0x13f6940)
// Original: glwebtools::Json::Value::asDouble
// ----------------------------------------------------------------------------
long double glwebtools::Json::Value::asDouble(glwebtools::Json::Value::Self *self)
{
  uint8_t v1;
  long double result; // fst7

  v1 = *((uint8_t *)self + 8);
  switch ( v1 )
  {
    case 1u:
      return (double)*(int *)self;
    case 2u:
      return (double)*(unsigned int *)self;
    case 3u:
      return *(double *)self;
    case 5u:
      result = 0.0;
      if ( *(uint8_t *)self != 0 )
        return 1.0;
      return result;
    default:
      return 0.0;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::asBool  (binary VA: 0x13f69c0)
// Original: glwebtools::Json::Value::asBool
// ----------------------------------------------------------------------------
char glwebtools::Json::Value::asBool(glwebtools::Json::Value::Self *self)
{
  char result;

  switch ( *((uint8_t *)self + 8) )
  {
    case 1:
    case 2:
      result = *(uint32_t *)self != 0;
      break;
    case 3:
      result = *(double *)self != 0.0;
      break;
    case 4:
      result = 0;
      if ( *(uint32_t *)self != 0 )
        result = **(uint8_t **)self != 0;
      break;
    case 5:
      result = *(uint8_t *)self;
      break;
    case 6:
    case 7:
      result = *(uint32_t *)(*(uint32_t *)self + 20) != 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isConvertibleTo  (binary VA: 0x13f6a30)
// Original: glwebtools::Json::Value::isConvertibleTo
// ----------------------------------------------------------------------------
char glwebtools::Json::Value::isConvertibleTo(uint8_t *a1, int a2)
{
  char result;

  switch ( a1[8] )
  {
    case 0:
      return 1;
    case 1:
      result = 1;
      switch ( a2 )
      {
        case 0:
          if ( *(uint32_t *)a1 == 0 )
            return result;
          return a2 == 5;
        case 1:
          return result;
        case 2:
          if ( *(int *)a1 < 0 )
            return a2 == 5;
          return result;
        default:
          goto LABEL_9;
      }
    case 2:
      switch ( a2 )
      {
        case 0:
          result = 1;
          if ( *(uint32_t *)a1 == 0 )
            return result;
          return a2 == 4 || a2 == 5;
        case 1:
          result = 1;
          if ( *(int *)a1 < 0 )
            return a2 == 4 || a2 == 5;
          return result;
        case 2:
        case 3:
          return 1;
        default:
          return a2 == 4 || a2 == 5;
      }
    case 3:
      switch ( a2 )
      {
        case 0:
          result = 1;
          if ( *(double *)a1 != 0.0 )
            return a2 == 5;
          return result;
        case 1:
          if ( *(double *)a1 < -2147483648.0 )
            return a2 == 5;
          result = 1;
          if ( *(double *)a1 > 2147483647.0 )
            return a2 == 5;
          break;
        case 2:
          if ( *(double *)a1 < 0.0 )
            return a2 == 5;
          result = 1;
          if ( *(double *)a1 > 4294967295.0 )
            return a2 == 5;
          break;
        default:
          goto LABEL_9;
      }
      return result;
    case 4:
      result = 1;
      if ( a2 != 4 )
      {
        result = 0;
        if ( a2 == 0 )
        {
          result = 1;
          if ( *(uint32_t *)a1 != 0 )
            return **(uint8_t **)a1 == 0;
        }
      }
      return result;
    case 5:
      if ( a2 != 0 )
      {
        if ( a2 != 2 && a2 != 1 )
        {
LABEL_9:
          if ( a2 != 4 && a2 != 3 )
            return a2 == 5;
        }
        return 1;
      }
      result = 1;
      if ( *a1 != 0 )
        return a2 == 5;
      return result;
    case 6:
      result = 1;
      if ( a2 == 6 )
        return result;
      goto LABEL_4;
    case 7:
      result = 1;
      if ( a2 != 7 )
      {
LABEL_4:
        result = 0;
        if ( a2 == 0 )
          return *(uint32_t *)(*(uint32_t *)a1 + 20) == 0;
      }
      return result;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::size  (binary VA: 0x13f6c30)
// Original: glwebtools::Json::Value::size
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::size(glwebtools::Json::Value::Self *self)
{
  char v1;
  int result;
  int v3;

  v1 = *((uint8_t *)self + 8);
  if ( v1 == 6 )
  {
    result = 0;
    if ( *(uint32_t *)(*(uint32_t *)self + 20) != 0 )
    {
      v3 = sub_1904940(*(uint32_t *)self + 4);
      return glwebtools::Json::Value::CZString::index((glwebtools::Json::Value::CZString::Self *)(v3 + 16)) + 1;
    }
  }
  else if ( v1 == 7 )
  {
    return *(uint32_t *)(*(uint32_t *)self + 20);
  }
  else
  {
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opIndex  (binary VA: 0x13f6c90)
// Original: glwebtools::Json::Value::operator[]
// ----------------------------------------------------------------------------
void * glwebtools::Json::Value::opIndex(glwebtools::Json::Value::Self *self, unsigned int a2)
{
  int v3;
  int v4;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef const char *_g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  if ( *((uint8_t *)self + 8) == 0 )
    return &glwebtools::Json::Value::null_value;
  glwebtools::Json::Value::CZString::Construct((glwebtools::Json::Value::CZString::Self *)v8, a2);
  v3 = *(uint32_t *)(*(uint32_t *)self + 8);
  v6 = *(uint32_t *)self + 4;
  v7 = v6;
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)self + 4;
    do
    {
      while ( glwebtools::Json::Value::CZString::opLt((const char **)(v3 + 16), v8) == 0 )
      {
        v4 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_8;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_8:
    if ( v6 == v4 )
    {
      v6 = *(uint32_t *)self + 4;
    }
    else
    {
      if ( glwebtools::Json::Value::CZString::opLt(v8, (const char **)(v4 + 16)) == 0 )
        v7 = v4;
      v6 = *(uint32_t *)self + 4;
    }
  }
  v5 = (void *)(v7 + 24);
  if ( v7 == v6 )
    v5 = &glwebtools::Json::Value::null_value;
  glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isValidIndex  (binary VA: 0x13f6d90)
// Original: glwebtools::Json::Value::isValidIndex
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::isValidIndex(glwebtools::Json::Value::Self *self, unsigned int a2)
{
  return glwebtools::Json::Value::size(self) > a2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opIndex  (binary VA: 0x13f6dc0)
// Original: glwebtools::Json::Value::operator[]
// ----------------------------------------------------------------------------
void * glwebtools::Json::Value::opIndex(glwebtools::Json::Value::Self *self, const char *a2)
{
  int v3;
  int v4;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef const char *_g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  if ( *((uint8_t *)self + 8) == 0 )
    return &glwebtools::Json::Value::null_value;
  glwebtools::Json::Value::CZString::Construct((int *)v8, (int)(uintptr_t)(a2), 0);
  v3 = *(uint32_t *)(*(uint32_t *)self + 8);
  v6 = *(uint32_t *)self + 4;
  v7 = v6;
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)self + 4;
    do
    {
      while ( glwebtools::Json::Value::CZString::opLt((const char **)(v3 + 16), v8) == 0 )
      {
        v4 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_8;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_8:
    if ( v6 == v4 )
    {
      v6 = *(uint32_t *)self + 4;
    }
    else
    {
      if ( glwebtools::Json::Value::CZString::opLt(v8, (const char **)(v4 + 16)) == 0 )
        v7 = v4;
      v6 = *(uint32_t *)self + 4;
    }
  }
  v5 = (void *)(v7 + 24);
  if ( v7 == v6 )
    v5 = &glwebtools::Json::Value::null_value;
  glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opIndex  (binary VA: 0x13f6ec0)
// Original: glwebtools::Json::Value::operator[]
// ----------------------------------------------------------------------------
void * glwebtools::Json::Value::opIndex(glwebtools::Json::Value::Self *a1, const char **a2)
{
  return glwebtools::Json::Value::opIndex(a1, *a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isMember  (binary VA: 0x13f6ef0)
// Original: glwebtools::Json::Value::isMember
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::isMember(glwebtools::Json::Value::Self *self, char *a2)
{
  return (uintptr_t *)(intptr_t)(glwebtools::Json::Value::opIndex(self, a2)) != &glwebtools::Json::Value::null_value;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isMember  (binary VA: 0x13f6f30)
// Original: glwebtools::Json::Value::isMember
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::isMember(glwebtools::Json::Value::Self *a1, char **a2)
{
  return glwebtools::Json::Value::isMember(a1, *a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isNull  (binary VA: 0x13f6f60)
// Original: glwebtools::Json::Value::isNull
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::isNull(glwebtools::Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opNot  (binary VA: 0x13f6f70)
// Original: glwebtools::Json::Value::operator!
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::opNot(glwebtools::Json::Value::Self *self)
{
  return glwebtools::Json::Value::isNull(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isBool  (binary VA: 0x13f6fa0)
// Original: glwebtools::Json::Value::isBool
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::isBool(glwebtools::Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isInt  (binary VA: 0x13f6fb0)
// Original: glwebtools::Json::Value::isInt
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::isInt(glwebtools::Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isUInt  (binary VA: 0x13f6fc0)
// Original: glwebtools::Json::Value::isUInt
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::isUInt(glwebtools::Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isIntegral  (binary VA: 0x13f6fd0)
// Original: glwebtools::Json::Value::isIntegral
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::isIntegral(glwebtools::Json::Value::Self *self)
{
  int v1;
  int v2;

  v1 = *((uint8_t *)self + 8);
  v2 = v1 - 1;
  LOBYTE(v2) = (uint8_t)(v1 - 1) <= 1u;
  return ((uint8_t)v1 == 5) | v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isDouble  (binary VA: 0x13f6ff0)
// Original: glwebtools::Json::Value::isDouble
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::isDouble(glwebtools::Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isNumeric  (binary VA: 0x13f7000)
// Original: glwebtools::Json::Value::isNumeric
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::isNumeric(glwebtools::Json::Value::Self *self)
{
  char isIntegral;
  int v2;
  int v3;

  isIntegral = glwebtools::Json::Value::isIntegral(self);
  v2 = 1;
  if ( isIntegral == 0 )
  {
    LOBYTE(v3) = glwebtools::Json::Value::isDouble(self);
    return v3;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isString  (binary VA: 0x13f7050)
// Original: glwebtools::Json::Value::isString
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::isString(glwebtools::Json::Value::Self *self)
{
  return *((uint8_t *)self + 8) == 4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isArray  (binary VA: 0x13f7060)
// Original: glwebtools::Json::Value::isArray
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::isArray(glwebtools::Json::Value::Self *self)
{
  unsigned int v1;
  char v2;

  v1 = (unsigned int)(uintptr_t)(self);
  v2 = *((uint8_t *)self + 8);
  LOBYTE(v1) = v2 == 6;
  return (v2 == 0) | v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::isObject  (binary VA: 0x13f7080)
// Original: glwebtools::Json::Value::isObject
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::isObject(glwebtools::Json::Value::Self *self)
{
  unsigned int v1;
  char v2;

  v1 = (unsigned int)(uintptr_t)(self);
  v2 = *((uint8_t *)self + 8);
  LOBYTE(v1) = v2 == 7;
  return (v2 == 0) | v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::empty  (binary VA: 0x13f70a0)
// Original: glwebtools::Json::Value::empty
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::empty(glwebtools::Json::Value::Self *self)
{
  bool result;
  char isObject;

  if ( glwebtools::Json::Value::isNull(self) )
    return glwebtools::Json::Value::size(self) == 0;
  if ( (uint8_t)glwebtools::Json::Value::isArray(self) != 0 )
    return glwebtools::Json::Value::size(self) == 0;
  isObject = glwebtools::Json::Value::isObject(self);
  result = false;
  if ( isObject != 0 )
    return glwebtools::Json::Value::size(self) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::setComment  (binary VA: 0x13f7110)
// Original: glwebtools::Json::Value::setComment
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::setComment(int a1, char *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v5;

  v3 = *(uint32_t **)(a1 + 12);
  if ( v3 == nullptr )
  {
    v5 = (uint32_t *)opNewArray(0x10u);
    *v5 = 3;
    glwebtools::Json::Value::CommentInfo::Construct((glwebtools::Json::Value::CommentInfo::Self *)(v5 + 1));
    glwebtools::Json::Value::CommentInfo::Construct((glwebtools::Json::Value::CommentInfo::Self *)(v5 + 2));
    glwebtools::Json::Value::CommentInfo::Construct((glwebtools::Json::Value::CommentInfo::Self *)(v5 + 3));
    v3 = v5 + 1;
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v5 + 1);
  }
  return glwebtools::Json::Value::CommentInfo::setComment((glwebtools::Json::Value::CommentInfo::Self *)&v3[a3], a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::setComment  (binary VA: 0x13f71b0)
// Original: glwebtools::Json::Value::setComment
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::setComment(int a1, char **a2, int a3)
{
  return glwebtools::Json::Value::setComment(a1, *a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::hasComment  (binary VA: 0x13f71f0)
// Original: glwebtools::Json::Value::hasComment
// ----------------------------------------------------------------------------
bool glwebtools::Json::Value::hasComment(int a1, int a2)
{
  int v2;
  bool result;

  v2 = *(uint32_t *)(a1 + 12);
  result = false;
  if ( v2 != 0 )
    return *(uint32_t *)(v2 + 4 * a2) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::getComment  (binary VA: 0x13f7210)
// Original: glwebtools::Json::Value::getComment
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::getComment(int a1, int a2, int a3)
{
  int v4[3];

  if ( glwebtools::Json::Value::hasComment(a2, a3) )
    g4_std::string::construct_from_cstr(a1, *(char **)(*(uint32_t *)(a2 + 12) + 4 * a3), (int)(uintptr_t)(v4));
  else
    g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(v4) + 1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::begin  (binary VA: 0x13f72a0)
// Original: glwebtools::Json::Value::begin
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::begin(glwebtools::Json::Value::Self *self, uint8_t *a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( (uint8_t)(a2[8] - 6) <= 1u && *(uint32_t *)a2 != 0 )
  {
    v3 = *(uint32_t *)(*(uint32_t *)a2 + 12);
    glwebtools::Json::ValueConstIterator::Construct((int)(uintptr_t)(self), &v3);
  }
  else
  {
    glwebtools::Json::ValueConstIterator::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::end  (binary VA: 0x13f7310)
// Original: glwebtools::Json::Value::end
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::end(glwebtools::Json::Value::Self *self, int a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( (uint8_t)(*(uint8_t *)(a2 + 8) - 6) <= 1u && *(uint32_t *)a2 != 0 )
  {
    v3 = *(uint32_t *)a2 + 4;
    glwebtools::Json::ValueConstIterator::Construct((int)(uintptr_t)(self), &v3);
  }
  else
  {
    glwebtools::Json::ValueConstIterator::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::begin_ea13f7380  (binary VA: 0x13f7380)
// Original: glwebtools::Json::Value::begin
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::begin_ea13f7380(glwebtools::Json::Value::Self *self, uint8_t *a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( (uint8_t)(a2[8] - 6) <= 1u && *(uint32_t *)a2 != 0 )
  {
    v3 = *(uint32_t *)(*(uint32_t *)a2 + 12);
    glwebtools::Json::ValueIterator::Construct((int)(uintptr_t)(self), &v3);
  }
  else
  {
    glwebtools::Json::ValueIterator::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::end_ea13f73f0  (binary VA: 0x13f73f0)
// Original: glwebtools::Json::Value::end
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::end_ea13f73f0(glwebtools::Json::Value::Self *self, int a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( (uint8_t)(*(uint8_t *)(a2 + 8) - 6) <= 1u && *(uint32_t *)a2 != 0 )
  {
    v3 = *(uint32_t *)a2 + 4;
    glwebtools::Json::ValueIterator::Construct((int)(uintptr_t)(self), &v3);
  }
  else
  {
    glwebtools::Json::ValueIterator::Construct(self);
  }
  return self;
}



// ============================================================================
// Address:   0x13f7460 (size: 34 bytes)
// Symbol:    _ZN10glwebtools4Json12PathArgumentC2Ev
// Demangled: glwebtools::Json::PathArgument::PathArgument(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json12PathArgumentC1Ev'
glwebtools::Json::PathArgument::Self *glwebtools::Json::PathArgument::Construct(
        glwebtools::Json::PathArgument::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::PathArgument::Construct  (binary VA: 0x13f7490)
// Original: glwebtools::Json::PathArgument::PathArgument
// ----------------------------------------------------------------------------
glwebtools::Json::PathArgument::Self * glwebtools::Json::PathArgument::Construct(glwebtools::Json::PathArgument::Self *self, unsigned int a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = a2;
  *((uint32_t *)self + 2) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::PathArgument::Construct  (binary VA: 0x13f74c0)
// Original: glwebtools::Json::PathArgument::PathArgument
// ----------------------------------------------------------------------------
glwebtools::Json::PathArgument::Self * glwebtools::Json::PathArgument::Construct(glwebtools::Json::PathArgument::Self *self, char *a2)
{
  glwebtools::Json::PathArgument::Self *result;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  result = (glwebtools::Json::PathArgument::Self *)g4_std::string::construct_from_cstr((int)(uintptr_t)(self), a2, (int)(uintptr_t)(&v3));
  *((uint32_t *)self + 2) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::PathArgument::Construct  (binary VA: 0x13f7510)
// Original: glwebtools::Json::PathArgument::PathArgument
// ----------------------------------------------------------------------------
int glwebtools::Json::PathArgument::Construct(int a1, char **a2)
{
  int result;
  uint8_t v3[5];

  result = (int)(uintptr_t)(g4_std::string::construct_from_cstr(a1, *a2, (int)(uintptr_t)(v3)));
  *(uint32_t *)(a1 + 8) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Path::invalidPath  (binary VA: 0x13f7560)
// Original: glwebtools::Json::Path::invalidPath
// ----------------------------------------------------------------------------
void glwebtools::Json::Path::invalidPath()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Path::resolve  (binary VA: 0x13f7570)
// Original: glwebtools::Json::Path::resolve
// ----------------------------------------------------------------------------
const glwebtools::Json::Value::Self * glwebtools::Json::Path::resolve(glwebtools::Json::Path::Self *self, const glwebtools::Json::Value::Self *a2)
{
  int i;
  int v4;
  unsigned int v6;

  for ( i = *(uint32_t *)self; *((uint32_t *)self + 1) != i; i += 12 )
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(i + 8);
      if ( v4 != 1 )
        break;
      if ( (uint8_t)glwebtools::Json::Value::isArray(a2) != 0 )
        glwebtools::Json::Value::isValidIndex(a2, *(uint32_t *)(i + 4));
      v6 = *(uint32_t *)(i + 4);
      i += 12;
      a2 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v6);
      if ( *((uint32_t *)self + 1) == i )
        return a2;
    }
    if ( v4 == 2 )
    {
      glwebtools::Json::Value::isObject(a2);
      a2 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)i);
    }
  }
  return a2;
}



// ============================================================================
// Address:   0x13f7620 (size: 14 bytes)
// Symbol:    _ZN10glwebtools4Json8FeaturesC2Ev
// Demangled: glwebtools::Json::Features::Features(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json8FeaturesC1Ev'
glwebtools::Json::Features::Self *glwebtools::Json::Features::Construct(glwebtools::Json::Features::Self *self)
{
  *(uint8_t *)self = 1;
  *((uint8_t *)self + 1) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Features::all  (binary VA: 0x13f7630)
// Original: glwebtools::Json::Features::all
// ----------------------------------------------------------------------------
glwebtools::Json::Features::Self * glwebtools::Json::Features::all(glwebtools::Json::Features::Self *self)
{
  glwebtools::Json::Features::Construct(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Features::strictMode  (binary VA: 0x13f7670)
// Original: glwebtools::Json::Features::strictMode
// ----------------------------------------------------------------------------
glwebtools::Json::Features::Self * glwebtools::Json::Features::strictMode(glwebtools::Json::Features::Self *self)
{
  glwebtools::Json::Features::Construct(self);
  *(uint8_t *)self = 0;
  *((uint8_t *)self + 1) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::skipSpaces  (binary VA: 0x13f76b0)
// Original: glwebtools::Json::Reader::skipSpaces
// ----------------------------------------------------------------------------
char * glwebtools::Json::Reader::skipSpaces(glwebtools::Json::Reader::Self *self)
{
  char *result;
  char *i;
  char v3;

  result = *((char **)self + 23);
  for ( i = *((char **)self + 22); result != i; *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(++result) )
  {
    v3 = *result;
    if ( *result != 9 && v3 != 32 && v3 != 10 && v3 != 13 )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::match  (binary VA: 0x13f76f0)
// Original: glwebtools::Json::Reader::match
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::match(glwebtools::Json::Reader::Self *self, const char *a2, int a3)
{
  int result;
  int v4;
  int v5;

  result = 0;
  v4 = *((uint32_t *)self + 23);
  if ( *((uint32_t *)self + 22) - v4 >= a3 )
  {
    v5 = a3;
    while ( v5 != 0 )
    {
      --v5;
      if ( *(uint8_t *)(v4 + v5) != a2[v5] )
        return 0;
    }
    *((uint32_t *)self + 23) = a3 + v4;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::readNumber  (binary VA: 0x13f7760)
// Original: glwebtools::Json::Reader::readNumber
// ----------------------------------------------------------------------------
char * glwebtools::Json::Reader::readNumber(glwebtools::Json::Reader::Self *self)
{
  char *result;
  char *i;
  char v3;

  result = *((char **)self + 23);
  for ( i = *((char **)self + 22); i != result; *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(++result) )
  {
    v3 = *result;
    if ( (uint8_t)(*result - 48) > 9u && v3 != 101 && v3 != 46 && v3 != 43 && v3 != 69 && v3 != 45 )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::currentValue  (binary VA: 0x13f77b0)
// Original: glwebtools::Json::Reader::currentValue
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::currentValue(glwebtools::Json::Reader::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 6);
  if ( v1 == *((uint32_t *)self + 7) )
    return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 9) - 4) + 508);
  else
    return *(uint32_t *)(v1 - 4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::getNextChar  (binary VA: 0x13f77e0)
// Original: glwebtools::Json::Reader::getNextChar
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::getNextChar(glwebtools::Json::Reader::Self *self)
{
  int result;
  uint8_t *v2;

  result = 0;
  v2 = *((uint8_t **)self + 23);
  if ( v2 != *((uint8_t **)self + 22) )
  {
    result = *v2;
    *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(v2 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::readString  (binary VA: 0x13f7800)
// Original: glwebtools::Json::Reader::readString
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::readString(glwebtools::Json::Reader::Self *self)
{
  char NextChar;

  while ( *((uint32_t *)self + 23) != *((uint32_t *)self + 22) )
  {
    while ( 1 )
    {
      NextChar = glwebtools::Json::Reader::getNextChar(self);
      if ( NextChar != 92 )
        break;
      glwebtools::Json::Reader::getNextChar(self);
      if ( *((uint32_t *)self + 23) == *((uint32_t *)self + 22) )
        return 0;
    }
    if ( NextChar == 34 )
      return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::readCppStyleComment  (binary VA: 0x13f7860)
// Original: glwebtools::Json::Reader::readCppStyleComment
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::readCppStyleComment(glwebtools::Json::Reader::Self *self)
{
  char NextChar;

  do
  {
    if ( *((uint32_t *)self + 23) == *((uint32_t *)self + 22) )
      break;
    NextChar = glwebtools::Json::Reader::getNextChar(self);
    if ( NextChar == 10 )
      break;
  }
  while ( NextChar != 13 );
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::readCStyleComment  (binary VA: 0x13f78a0)
// Original: glwebtools::Json::Reader::readCStyleComment
// ----------------------------------------------------------------------------
bool glwebtools::Json::Reader::readCStyleComment(glwebtools::Json::Reader::Self *self)
{
  uint8_t *v1;
  bool v2;

  v1 = *((uint8_t **)self + 23);
  while ( *((uint8_t **)self + 22) != v1 )
  {
    v2 = (uint8_t)glwebtools::Json::Reader::getNextChar(self) == 42;
    v1 = *((uint8_t **)self + 23);
    if ( v2 && *v1 == 47 )
      break;
  }
  return (uint8_t)glwebtools::Json::Reader::getNextChar(self) == 47;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::getLocationLineAndColumn  (binary VA: 0x13f78f0)
// Original: glwebtools::Json::Reader::getLocationLineAndColumn
// ----------------------------------------------------------------------------
int * glwebtools::Json::Reader::getLocationLineAndColumn(glwebtools::Json::Reader::Self *self, const char *a2, int *a3, int *a4)
{
  const char *v4;
  const char *v5;
  char v6;
  const char *v7;

  v4 = *((const char **)self + 21);
  *a3 = 0;
  v5 = v4;
  if ( v4 < a2 && v4 != *((const char **)self + 22) )
  {
    v6 = *v4;
    v7 = v4 + 1;
    if ( *v4 == 13 )
      goto LABEL_10;
LABEL_4:
    if ( v6 == 10 )
    {
      ++*a3;
      v5 = v7;
    }
    while ( a2 > v7 && *((const char **)self + 22) != v7 )
    {
      v4 = v7;
      v6 = *v7++;
      if ( v6 != 13 )
        goto LABEL_4;
LABEL_10:
      if ( v4[1] == 10 )
        v7 = v4 + 2;
      ++*a3;
      v5 = v7;
    }
  }
  *a4 = a2 - v5 + 1;
  ++*a3;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::getLocationLineAndColumn  (binary VA: 0x13f7970)
// Original: glwebtools::Json::Reader::getLocationLineAndColumn
// ----------------------------------------------------------------------------
glwebtools::Json::Reader::Self * glwebtools::Json::Reader::getLocationLineAndColumn(glwebtools::Json::Reader::Self *self, glwebtools::Json::Reader::Self *a2, char *a3)
{
  typedef uint8_t _g4_t_v4[5];
  typedef int _g4_t_v5;
  typedef char _g4_t_s[51];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (3u + sizeof(_g4_t_v4)) > _g4_s0 ? (3u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (13u + sizeof(_g4_t_s)) > _g4_s2 ? (13u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 3u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 13u);

  glwebtools::Json::Reader::getLocationLineAndColumn(a2, a3, (int *)&v4[1], &v5);
  sprintf(s, "Line %d, Column %d", *(uint32_t *)&v4[1], v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), s, (int)(uintptr_t)(v4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::valueToString  (binary VA: 0x13f7a10)
// Original: glwebtools::Json::valueToString
// ----------------------------------------------------------------------------
glwebtools::Json::Self * glwebtools::Json::valueToString(glwebtools::Json::Self *self, int a2)
{
  unsigned int v2;
  char *v3;
  char *v4;
  typedef char _g4_t_v6[32];
  typedef char _g4_t_v7;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v7)) > _g4_s1 ? (44u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);

  v7 = 0;
  v2 = -a2;
  v3 = &v7;
  if ( a2 >= 0 )
    v2 = a2;
  while ( 1 )
  {
    v4 = v3 - 1;
    *(v3 - 1) = v2 % 0xA + 48;
    v2 /= 0xAu;
    if ( v2 == 0 )
      break;
    --v3;
  }
  if ( a2 < 0 )
  {
    v4 = v3 - 2;
    *(v3 - 2) = 45;
  }
  if ( v4 < &v6[1] )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/jsoncpp/../../../source/glwebtools/jsoncpp/glwebtools_json_writer.cpp",
      53,
      "std::string glwebtools::Json::valueToString(glwebtools::Json::Int)",
      "current >= buffer");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v4, (int)(uintptr_t)(v6));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::valueToString  (binary VA: 0x13f7ae0)
// Original: glwebtools::Json::valueToString
// ----------------------------------------------------------------------------
glwebtools::Json::Self * glwebtools::Json::valueToString(glwebtools::Json::Self *self, unsigned int a2)
{
  char *v3;
  char *v4;
  typedef char _g4_t_v6[32];
  typedef char _g4_t_v7;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v7)) > _g4_s1 ? (44u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);

  v7 = 0;
  v3 = &v7;
  do
  {
    v4 = v3 - 1;
    v3 = v4;
    *v4 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 != 0 );
  if ( v4 < &v6[1] )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/jsoncpp/../../../source/glwebtools/jsoncpp/glwebtools_json_writer.cpp",
      63,
      "std::string glwebtools::Json::valueToString(glwebtools::Json::UInt)",
      "current >= buffer");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v4, (int)(uintptr_t)(v6));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::valueToString  (binary VA: 0x13f7b90)
// Original: glwebtools::Json::valueToString
// ----------------------------------------------------------------------------
glwebtools::Json::Self * glwebtools::Json::valueToString(glwebtools::Json::Self *self, double a2)
{
  unsigned int v2;
  char *v3;
  char *v4;
  char v5;
  bool v6; // cc
  typedef int _g4_t_v8;
  typedef char _g4_t_s[44];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s)) > _g4_s1 ? (16u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  sprintf(s, "%#.16g", a2);
  v2 = strlen(s) - 1;
  if ( s[v2] == 48 )
  {
    v3 = &s[v2];
    if ( v3 > s )
    {
      do
        --v3;
      while ( v3 != s && *v3 == 48 );
    }
    else if ( v3 < s )
    {
LABEL_4:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), s, (int)(uintptr_t)(&v8) + 3);
      return self;
    }
    v4 = v3;
    v5 = *v3;
    v6 = *v3 < 46;
    if ( *v3 != 46 )
    {
      while ( !v6 && (uint8_t)(v5 - 48) <= 9u )
      {
        if ( --v4 < s )
          goto LABEL_4;
        v5 = *v4;
        v6 = *v4 < 46;
        if ( *v4 == 46 )
          goto LABEL_14;
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), s, (int)(uintptr_t)(&v8) + 2);
      return self;
    }
LABEL_14:
    v3[2] = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), s, (int)(uintptr_t)(&v8) + 1);
    return self;
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), s, (int)(uintptr_t)(&v8));
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::valueToString  (binary VA: 0x13f7cd0)
// Original: glwebtools::Json::valueToString
// ----------------------------------------------------------------------------
glwebtools::Json::Self * glwebtools::Json::valueToString(glwebtools::Json::Self *self, bool a2)
{
  char *v2;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v2 = "true";
  if ( !a2 )
    v2 = "false";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v2, (int)(uintptr_t)(&v4));
  return self;
}



// ============================================================================
// Address:   0x13f7d30 (size: 31 bytes)
// Symbol:    _ZN10glwebtools4Json10FastWriterC2Ev
// Demangled: glwebtools::Json::FastWriter::FastWriter(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json10FastWriterC1Ev'
glwebtools::Json::FastWriter::Self *glwebtools::Json::FastWriter::Construct(
        glwebtools::Json::FastWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E20);
  *((uint8_t *)self + 4) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::toCompactString  (binary VA: 0x13f7d50)
// Original: glwebtools::Json::Value::toCompactString
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::toCompactString(glwebtools::Json::Value::Self *self, int a2)
{
  uint32_t v3[2];

  glwebtools::Json::FastWriter::Construct((glwebtools::Json::FastWriter::Self *)v3);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  (*(void (**)(uint32_t *, int, glwebtools::Json::Value::Self *))(v3[0] + 8))(v3, a2, self);
  v3[0] = ((uint32_t)(uintptr_t)&off_2094E20);
  glwebtools::Json::Writer::Destroy((glwebtools::Json::Writer::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::FastWriter::enableYAMLCompatibility  (binary VA: 0x13f7dd0)
// Original: glwebtools::Json::FastWriter::enableYAMLCompatibility
// ----------------------------------------------------------------------------
glwebtools::Json::FastWriter::Self * glwebtools::Json::FastWriter::enableYAMLCompatibility(glwebtools::Json::FastWriter::Self *self)
{
  *((uint8_t *)self + 4) = 1;
  return self;
}



// ============================================================================
// Address:   0x13f7de0 (size: 74 bytes)
// Symbol:    _ZN10glwebtools4Json12StyledWriterC2Ev
// Demangled: glwebtools::Json::StyledWriter::StyledWriter(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools4Json12StyledWriterC1Ev'
glwebtools::Json::StyledWriter::Self *glwebtools::Json::StyledWriter::Construct(
        glwebtools::Json::StyledWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E38);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 5) = 74;
  *((uint32_t *)self + 6) = 3;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::toStyledString  (binary VA: 0x13f7e30)
// Original: glwebtools::Json::Value::toStyledString
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::toStyledString(glwebtools::Json::Value::Self *self, int a2)
{
  void *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef void (**_g4_t_v7)(glwebtools::Json::StyledWriter::Self *);
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  glwebtools::Json::StyledWriter::Construct((glwebtools::Json::StyledWriter::Self *)&v7);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  ((void (*)(void (***)(glwebtools::Json::StyledWriter::Self *), int, glwebtools::Json::Value::Self *))v7[2])(
    &v7,
    a2,
    self);
  v7 = (void (**)(glwebtools::Json::StyledWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094E38));
  v2 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = v9;
  v4 = (uint32_t *)(v8);
  if ( v9 != v8 )
  {
    do
    {
      v5 = (uint32_t *)(*v4 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v5);
      ++v4;
    }
    while ( v3 != v4 );
    v4 = (uint32_t *)(v8);
  }
  if ( v4 != nullptr )
    opDelete(v4);
  glwebtools::Json::Writer::Destroy((glwebtools::Json::Writer::Self *)&v7);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::writeIndent  (binary VA: 0x13f7f20)
// Original: glwebtools::Json::StyledWriter::writeIndent
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledWriter::writeIndent(int a1, int *a2)
{
  int result;
  int v3;
  char v4;
  int v5;
  int v6;
  int v7;

  result = *a2;
  v3 = *(uint32_t *)(*a2 - 12);
  if ( v3 == 0 )
    return (int)(uintptr_t)(g4_std::string::append_str(a2, a1 + 16));
  if ( *(int *)(result - 4) >= 0 )
  {
    sub_19397C0(a2);
    result = *a2;
  }
  v4 = *(uint8_t *)(result + v3 - 1);
  if ( v4 != 32 )
  {
    if ( v4 != 10 )
    {
      v5 = *(uint32_t *)(result - 12);
      v6 = v5 + 1;
      if ( (unsigned int)(v5 + 1) > *(uint32_t *)(result - 8) || *(int *)(result - 4) > 0 )
      {
        sub_1939B80(a2, v5 + 1);
        result = *a2;
        v5 = *(uint32_t *)(*a2 - 12);
      }
      *(uint8_t *)(result + v5) = 10;
      v7 = *a2;
      if ( (uint32_t *)(*a2 - 12) != dword_213B808 )
      {
        *(uint32_t *)(v7 - 4) = 0;
        *(uint32_t *)(v7 - 12) = v6;
        *(uint8_t *)(v7 + v6) = 0;
      }
    }
    return (int)(uintptr_t)(g4_std::string::append_str(a2, a1 + 16));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::writeWithIndent  (binary VA: 0x13f7fd0)
// Original: glwebtools::Json::StyledWriter::writeWithIndent
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledWriter::writeWithIndent(int a1, int a2, int *a3)
{
  glwebtools::Json::StyledWriter::writeIndent(a1, a3);
  return (int)(uintptr_t)(g4_std::string::append_str(a3, a2));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::indent  (binary VA: 0x13f8020)
// Original: glwebtools::Json::StyledWriter::indent
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledWriter::indent(glwebtools::Json::StyledWriter::Self *self)
{
  int result;
  void *v2;
  uint16_t v3[3];

  sub_1938A90((int)(uintptr_t)(&v3[1]), *((uint32_t *)self + 6), 32, (int)(uintptr_t)(v3));
  g4_std::string::append_str((char *)self + 16, &v3[1]);
  result = *(uint32_t *)&v3[1];
  v2 = (void *)(*(uint32_t *)&v3[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v3[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v3[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v2)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::unindent  (binary VA: 0x13f80b0)
// Original: glwebtools::Json::StyledWriter::unindent
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledWriter::unindent(glwebtools::Json::StyledWriter::Self *self)
{
  int v1;
  int v2;

  v1 = *(uint32_t *)(*((uint32_t *)self + 4) - 12);
  v2 = *((uint32_t *)self + 6);
  if ( v1 < v2 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/jsoncpp/../../../source/glwebtools/jsoncpp/glwebtools_json_writer.cpp",
      476,
      "void glwebtools::Json::StyledWriter::unindent()",
      "int(indentString_.size()) >= indentSize_");
    v2 = *((uint32_t *)self + 6);
    v1 = *(uint32_t *)(*((uint32_t *)self + 4) - 12);
  }
  return (int)(uintptr_t)(sub_1939D80((int)(uintptr_t)(self) + 16, v1 - v2, 0));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::hasCommentForValue  (binary VA: 0x13f8140)
// Original: glwebtools::Json::StyledWriter::hasCommentForValue
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledWriter::hasCommentForValue(glwebtools::Json::StyledWriter::Self *self, const glwebtools::Json::Value::Self *a2)
{
  int v2;
  int v4;

  v2 = 1;
  if ( !glwebtools::Json::Value::hasComment((int)(uintptr_t)(a2), 0) && !glwebtools::Json::Value::hasComment((int)(uintptr_t)(a2), 1) )
  {
    LOBYTE(v4) = glwebtools::Json::Value::hasComment((int)(uintptr_t)(a2), 2);
    return v4;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::normalizeEOL  (binary VA: 0x13f81c0)
// Original: glwebtools::Json::StyledWriter::normalizeEOL
// ----------------------------------------------------------------------------
int * glwebtools::Json::StyledWriter::normalizeEOL(int *a1, uint32_t *a2)
{
  uint8_t *v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;
  uint8_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v15;
  uint8_t *v16;

  *a1 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(a1, *(uint32_t *)(*a2 - 12));
  v2 = (uint8_t *)*a2;
  v16 = &v2[*((uint32_t *)v2 - 3)];
  if ( v16 != (uint8_t *)*a2 )
  {
    while ( 1 )
    {
      v8 = *v2;
      v9 = v2 + 1;
      if ( *v2 == 13 )
        break;
      v10 = *a1;
      v11 = *(uint32_t *)(*a1 - 12);
      v12 = v11 + 1;
      if ( (unsigned int)(v11 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v10 - 4) > 0 )
      {
        v15 = v8;
        sub_1939B80(a1, v11 + 1);
        v10 = *a1;
        v8 = v15;
        v11 = *(uint32_t *)(*a1 - 12);
      }
      *(uint8_t *)(v10 + v11) = v8;
      v13 = *a1;
      if ( (uint32_t *)(*a1 - 12) == dword_213B808 )
      {
        v2 = v9;
        if ( v9 == v16 )
          return a1;
      }
      else
      {
        *(uint32_t *)(v13 - 12) = v12;
        *(uint32_t *)(v13 - 4) = 0;
        *(uint8_t *)(v13 + v12) = 0;
        v2 = v9;
LABEL_10:
        if ( v2 == v16 )
          return a1;
      }
    }
    v3 = v2[1] == 10;
    v2 += 2;
    v4 = *a1;
    if ( !v3 )
      v2 = v9;
    v5 = *(uint32_t *)(v4 - 12);
    v6 = v5 + 1;
    if ( (unsigned int)(v5 + 1) > *(uint32_t *)(v4 - 8) || *(int *)(v4 - 4) > 0 )
    {
      sub_1939B80(a1, v5 + 1);
      v4 = *a1;
      v5 = *(uint32_t *)(*a1 - 12);
    }
    *(uint8_t *)(v4 + v5) = 10;
    v7 = *a1;
    if ( (uint32_t *)(*a1 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v7 - 4) = 0;
      *(uint32_t *)(v7 - 12) = v6;
      *(uint8_t *)(v7 + v6) = 0;
    }
    goto LABEL_10;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::writeCommentBeforeValue  (binary VA: 0x13f82e0)
// Original: glwebtools::Json::StyledWriter::writeCommentBeforeValue
// ----------------------------------------------------------------------------
char glwebtools::Json::StyledWriter::writeCommentBeforeValue(int a1, int a2, int a3)
{
  char result;
  void *v4;
  void *v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  result = glwebtools::Json::Value::hasComment(a2, 0);
  if ( result != 0 )
  {
    glwebtools::Json::Value::getComment((int)(uintptr_t)(v7), a2, 0);
    glwebtools::Json::StyledWriter::normalizeEOL(&v6, v7);
    g4_std::string::append_str(a3, &v6);
    v4 = (void *)(v6 - 12);
    if ( (uint32_t *)(v6 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v7[0] - 12);
    if ( (uint32_t *)(v7[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    return (char)(uintptr_t)(g4_std::string::append(a3, &a0[1], 1u));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::Construct  (binary VA: 0x13f83f0)
// Original: glwebtools::Json::StyledStreamWriter::StyledStreamWriter
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledStreamWriter::Construct(uint32_t *a1, int a2)
{
  a1[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[5] = 74;
  return (int)(uintptr_t)(g4_std::string::construct_copy(a1 + 6, a2));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::writeIndent  (binary VA: 0x13f8450)
// Original: glwebtools::Json::StyledStreamWriter::writeIndent
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledStreamWriter::writeIndent(glwebtools::Json::StyledStreamWriter::Self *self)
{
  int v1;
  char v3[5];

  v3[0] = 10;
  v1 = (int)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)self + 3), v3, 1));
  return (int)(uintptr_t)(g4_std_compat::ostream_write(v1, *((uint32_t *)self + 4), *(uint32_t *)(*((uint32_t *)self + 4) - 12)));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::writeWithIndent  (binary VA: 0x13f84b0)
// Original: glwebtools::Json::StyledStreamWriter::writeWithIndent
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledStreamWriter::writeWithIndent(glwebtools::Json::StyledStreamWriter::Self *a1, uint32_t *a2)
{
  glwebtools::Json::StyledStreamWriter::writeIndent(a1);
  return (int)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)a1 + 3), *a2, *(uint32_t *)(*a2 - 12)));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::indent  (binary VA: 0x13f8500)
// Original: glwebtools::Json::StyledStreamWriter::indent
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledStreamWriter::indent(glwebtools::Json::StyledStreamWriter::Self *self)
{
  return (int)(uintptr_t)(g4_std::string::append_str((char *)self + 16, (char *)self + 24));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::unindent  (binary VA: 0x13f8530)
// Original: glwebtools::Json::StyledStreamWriter::unindent
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledStreamWriter::unindent(glwebtools::Json::StyledStreamWriter::Self *self)
{
  unsigned int v1;
  unsigned int v2;

  v1 = *(uint32_t *)(*((uint32_t *)self + 4) - 12);
  v2 = *(uint32_t *)(*((uint32_t *)self + 6) - 12);
  if ( v1 < v2 )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/jsoncpp/../../../source/glwebtools/jsoncpp/glwebtools_json_writer.cpp",
      756,
      "void glwebtools::Json::StyledStreamWriter::unindent()",
      "indentString_.size() >= indentation_.size()");
    v1 = *(uint32_t *)(*((uint32_t *)self + 4) - 12);
    v2 = *(uint32_t *)(*((uint32_t *)self + 6) - 12);
  }
  return (int)(uintptr_t)(sub_1939D80((int)(uintptr_t)(self) + 16, v1 - v2, 0));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::hasCommentForValue  (binary VA: 0x13f85c0)
// Original: glwebtools::Json::StyledStreamWriter::hasCommentForValue
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledStreamWriter::hasCommentForValue(glwebtools::Json::StyledStreamWriter::Self *self, const glwebtools::Json::Value::Self *a2)
{
  int v2;
  int v4;

  v2 = 1;
  if ( !glwebtools::Json::Value::hasComment((int)(uintptr_t)(a2), 0) && !glwebtools::Json::Value::hasComment((int)(uintptr_t)(a2), 1) )
  {
    LOBYTE(v4) = glwebtools::Json::Value::hasComment((int)(uintptr_t)(a2), 2);
    return v4;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::normalizeEOL  (binary VA: 0x13f8640)
// Original: glwebtools::Json::StyledStreamWriter::normalizeEOL
// ----------------------------------------------------------------------------
int * glwebtools::Json::StyledStreamWriter::normalizeEOL(int *a1, uint32_t *a2)
{
  uint8_t *v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char v8;
  uint8_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v15;
  uint8_t *v16;

  *a1 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(a1, *(uint32_t *)(*a2 - 12));
  v2 = (uint8_t *)*a2;
  v16 = &v2[*((uint32_t *)v2 - 3)];
  if ( v16 != (uint8_t *)*a2 )
  {
    while ( 1 )
    {
      v8 = *v2;
      v9 = v2 + 1;
      if ( *v2 == 13 )
        break;
      v10 = *a1;
      v11 = *(uint32_t *)(*a1 - 12);
      v12 = v11 + 1;
      if ( (unsigned int)(v11 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v10 - 4) > 0 )
      {
        v15 = v8;
        sub_1939B80(a1, v11 + 1);
        v10 = *a1;
        v8 = v15;
        v11 = *(uint32_t *)(*a1 - 12);
      }
      *(uint8_t *)(v10 + v11) = v8;
      v13 = *a1;
      if ( (uint32_t *)(*a1 - 12) == dword_213B808 )
      {
        v2 = v9;
        if ( v9 == v16 )
          return a1;
      }
      else
      {
        *(uint32_t *)(v13 - 12) = v12;
        *(uint32_t *)(v13 - 4) = 0;
        *(uint8_t *)(v13 + v12) = 0;
        v2 = v9;
LABEL_10:
        if ( v2 == v16 )
          return a1;
      }
    }
    v3 = v2[1] == 10;
    v2 += 2;
    v4 = *a1;
    if ( !v3 )
      v2 = v9;
    v5 = *(uint32_t *)(v4 - 12);
    v6 = v5 + 1;
    if ( (unsigned int)(v5 + 1) > *(uint32_t *)(v4 - 8) || *(int *)(v4 - 4) > 0 )
    {
      sub_1939B80(a1, v5 + 1);
      v4 = *a1;
      v5 = *(uint32_t *)(*a1 - 12);
    }
    *(uint8_t *)(v4 + v5) = 10;
    v7 = *a1;
    if ( (uint32_t *)(*a1 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v7 - 4) = 0;
      *(uint32_t *)(v7 - 12) = v6;
      *(uint8_t *)(v7 + v6) = 0;
    }
    goto LABEL_10;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::writeCommentBeforeValue  (binary VA: 0x13f8760)
// Original: glwebtools::Json::StyledStreamWriter::writeCommentBeforeValue
// ----------------------------------------------------------------------------
char glwebtools::Json::StyledStreamWriter::writeCommentBeforeValue(glwebtools::Json::StyledStreamWriter::Self *self, const glwebtools::Json::Value::Self *a2)
{
  char result;
  void *v3;
  void *v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  result = glwebtools::Json::Value::hasComment((int)(uintptr_t)(a2), 0);
  if ( result != 0 )
  {
    glwebtools::Json::Value::getComment((int)(uintptr_t)(v6), (int)(uintptr_t)(a2), 0);
    glwebtools::Json::StyledStreamWriter::normalizeEOL(&v5, v6);
    g4_std_compat::ostream_write(*((uint32_t *)self + 3), v5, *(uint32_t *)(v5 - 12));
    v3 = (void *)(v5 - 12);
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v6[0] - 12);
    if ( (uint32_t *)(v6[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    return (char)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)self + 3), &a0[1], 1));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::addComment  (binary VA: 0x13f8880)
// Original: glwebtools::Json::Reader::addComment
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::addComment(int a1, void *a2, int a3, int a4)
{
  int v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  if ( *(uint8_t *)(a1 + 110) != 0 )
  {
    if ( a4 != 1 )
    {
LABEL_3:
      v4 = a1 + 104;
      if ( *(uint32_t *)(*(uint32_t *)(a1 + 104) - 12) != 0 )
        g4_std::string::append(v4, &a0[1], 1u);
      sub_119F570((int)(uintptr_t)(v10), a2, a3, (int)(uintptr_t)(&v8) + 1);
      g4_std::string::append_str(v4, v10);
      result = v10[0];
      v6 = (void *)(v10[0] - 12);
      if ( (uint32_t *)(v10[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        return ((g4_std::string::Rep::M_destroy(v6)), (int)0);
      }
      return result;
    }
  }
  else
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/jsoncpp/../../../source/glwebtools/jsoncpp/glwebtools_json_reader.cpp",
      420,
      "void glwebtools::Json::Reader::addComment(glwebtools::Json::Reader::Location, glwebtools::Json::Reader::Location, "
      "glwebtools::Json::CommentPlacement)",
      "collectComments_");
    if ( a4 != 1 )
      goto LABEL_3;
  }
  if ( *(uint32_t *)(a1 + 100) == 0 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/jsoncpp/../../../source/glwebtools/jsoncpp/glwebtools_json_reader.cpp",
      423,
      "void glwebtools::Json::Reader::addComment(glwebtools::Json::Reader::Location, glwebtools::Json::Reader::Location, "
      "glwebtools::Json::CommentPlacement)",
      "lastValue_ != 0");
  sub_119F570((int)(uintptr_t)(&v9), a2, a3, (int)(uintptr_t)(&v8));
  glwebtools::Json::Value::setComment(*(uint32_t *)(a1 + 100), &v9, 1);
  result = v9;
  v7 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v7)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::readComment  (binary VA: 0x13f8a50)
// Original: glwebtools::Json::Reader::readComment
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::readComment(glwebtools::Json::Reader::Self *self)
{
  int v1;
  char NextChar;
  int result;
  char CStyleComment;
  char v5;
  uint8_t *v6;
  unsigned int v7;
  unsigned int v8;
  char v9;
  uint8_t *v10;

  v1 = *((uint32_t *)self + 23);
  NextChar = glwebtools::Json::Reader::getNextChar(self);
  if ( NextChar == 42 )
  {
    CStyleComment = glwebtools::Json::Reader::readCStyleComment(self);
    v5 = 42;
  }
  else
  {
    result = 0;
    if ( NextChar != 47 )
      return result;
    CStyleComment = glwebtools::Json::Reader::readCppStyleComment(self);
    v5 = 47;
  }
  if ( CStyleComment == 0 )
    return 0;
  result = 1;
  if ( *((uint8_t *)self + 110) != 0 )
  {
    v6 = *((uint8_t **)self + 24);
    v7 = v1 - 1;
    if ( v6 != nullptr )
    {
      if ( v7 > (unsigned int)(uintptr_t)(v6) )
      {
        if ( *v6 == 10 || *v6 == 13 )
        {
LABEL_17:
          v8 = *((uint32_t *)self + 23);
          v6 = nullptr;
LABEL_16:
          glwebtools::Json::Reader::addComment((int)(uintptr_t)(self), (void *)(v1 - 1), v8, (int)(uintptr_t)(v6));
          return 1;
        }
        while ( v7 > (unsigned int)(uintptr_t)(++v6) )
        {
          if ( *v6 == 13 || *v6 == 10 )
            goto LABEL_17;
        }
      }
      v8 = *((uint32_t *)self + 23);
      v6 = (uint8_t *)(&dword_0 + 1);
      if ( v5 == 42 && v7 < v8 )
      {
        v9 = *(uint8_t *)(v1 - 1);
        if ( v9 == 13 || v9 == 10 )
        {
LABEL_28:
          v6 = nullptr;
        }
        else
        {
          v10 = (uint8_t *)(v1 - 1);
          while ( v8 > (unsigned int)(uintptr_t)(++v10) )
          {
            if ( *v10 == 13 || *v10 == 10 )
              goto LABEL_28;
          }
          v6 = (uint8_t *)(&dword_0 + 1);
        }
      }
      goto LABEL_16;
    }
    v8 = *((uint32_t *)self + 23);
    goto LABEL_16;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::readToken  (binary VA: 0x13f8ba0)
// Original: glwebtools::Json::Reader::readToken
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::readToken(glwebtools::Json::Reader::Self *a1, uint32_t *a2)
{
  char String;

  glwebtools::Json::Reader::skipSpaces(a1);
  a2[1] = *((uint32_t *)a1 + 23);
  switch ( (uint8_t)glwebtools::Json::Reader::getNextChar(a1) )
  {
    case 0u:
      *a2 = 0;
      goto LABEL_5;
    case '"':
      *a2 = 5;
      String = glwebtools::Json::Reader::readString(a1);
      goto LABEL_3;
    case ',':
      *a2 = 10;
      goto LABEL_5;
    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      *a2 = 6;
      glwebtools::Json::Reader::readNumber(a1);
      goto LABEL_5;
    case '/':
      *a2 = 12;
      String = glwebtools::Json::Reader::readComment(a1);
      goto LABEL_3;
    case ':':
      *a2 = 11;
      goto LABEL_5;
    case '[':
      *a2 = 3;
      goto LABEL_5;
    case ']':
      *a2 = 4;
      goto LABEL_5;
    case 'f':
      *a2 = 8;
      String = glwebtools::Json::Reader::match(a1, "alse", 4);
      goto LABEL_3;
    case 'n':
      *a2 = 9;
      String = glwebtools::Json::Reader::match(a1, "ull", 3);
      goto LABEL_3;
    case 't':
      *a2 = 7;
      String = glwebtools::Json::Reader::match(a1, "rue", 3);
LABEL_3:
      if ( String == 0 )
        goto LABEL_4;
      goto LABEL_5;
    case '{':
      *a2 = 1;
      goto LABEL_5;
    case '}':
      *a2 = 2;
      goto LABEL_5;
    default:
LABEL_4:
      *a2 = 13;
LABEL_5:
      a2[2] = *((uint32_t *)a1 + 23);
      return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::skipCommentTokens  (binary VA: 0x13f8d00)
// Original: glwebtools::Json::Reader::skipCommentTokens
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::skipCommentTokens(glwebtools::Json::Reader::Self *a1, uint32_t *a2)
{
  int result;

  if ( *((uint8_t *)a1 + 108) == 0 )
    return glwebtools::Json::Reader::readToken(a1, a2);
  do
    result = glwebtools::Json::Reader::readToken(a1, a2);
  while ( *a2 == 12 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine  (binary VA: 0x13f8d70)
// Original: glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine
// ----------------------------------------------------------------------------
char glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(glwebtools::Json::StyledStreamWriter::Self *self, const glwebtools::Json::Value::Self *a2)
{
  char result;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  if ( glwebtools::Json::Value::hasComment((int)(uintptr_t)(a2), 1) )
  {
    glwebtools::Json::Value::getComment((int)(uintptr_t)(&v8), (int)(uintptr_t)(a2), 1);
    glwebtools::Json::StyledStreamWriter::normalizeEOL(&v9, (uint32_t *)(&v8));
    sub_59E340(&v10, " ", &v9);
    g4_std_compat::ostream_write(*((uint32_t *)self + 3), v10, *(uint32_t *)(v10 - 12));
    v5 = (void *)(v10 - 12);
    if ( (uint32_t *)(v10 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v8 - 12);
    if ( (uint32_t *)(v8 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
  }
  result = glwebtools::Json::Value::hasComment((int)(uintptr_t)(a2), 2);
  if ( result != 0 )
  {
    g4_std_compat::ostream_write(*((uint32_t *)self + 3), &a0[1], 1);
    glwebtools::Json::Value::getComment((int)(uintptr_t)(v12), (int)(uintptr_t)(a2), 2);
    glwebtools::Json::StyledStreamWriter::normalizeEOL(&v11, v12);
    g4_std_compat::ostream_write(*((uint32_t *)self + 3), v11, *(uint32_t *)(v11 - 12));
    v3 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    return (char)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)self + 3), &a0[1], 1));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine  (binary VA: 0x13f9000)
// Original: glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine
// ----------------------------------------------------------------------------
char glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine(int a1, int a2, int a3)
{
  char result;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  if ( glwebtools::Json::Value::hasComment(a2, 1) )
  {
    glwebtools::Json::Value::getComment((int)(uintptr_t)(&v9), a2, 1);
    glwebtools::Json::StyledWriter::normalizeEOL(&v10, (uint32_t *)(&v9));
    sub_59E340(&v11, " ", &v10);
    g4_std::string::append_str(a3, &v11);
    v6 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v10 - 12);
    if ( (uint32_t *)(v10 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
  }
  result = glwebtools::Json::Value::hasComment(a2, 2);
  if ( result != 0 )
  {
    g4_std::string::append(a3, &a0[1], 1u);
    glwebtools::Json::Value::getComment((int)(uintptr_t)(v13), a2, 2);
    glwebtools::Json::StyledWriter::normalizeEOL(&v12, v13);
    g4_std::string::append_str(a3, &v12);
    v4 = (void *)(v12 - 12);
    if ( (uint32_t *)(v12 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v13[0] - 12);
    if ( (uint32_t *)(v13[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    return (char)(uintptr_t)(g4_std::string::append(a3, &a0[1], 1u));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::getFormatedErrorMessages  (binary VA: 0x13f9270)
// Original: glwebtools::Json::Reader::getFormatedErrorMessages
// ----------------------------------------------------------------------------
glwebtools::Json::Reader::Self * glwebtools::Json::Reader::getFormatedErrorMessages(glwebtools::Json::Reader::Self *self, char *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v19)) > _g4_s7 ? (52u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v20)) > _g4_s8 ? (56u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v21)) > _g4_s9 ? (60u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = *((uint32_t *)a2 + 12);
  v12 = *((uint32_t *)a2 + 14);
  v13 = *((uint32_t *)a2 + 15);
  while ( *((uint32_t *)a2 + 16) != v2 )
  {
    while ( 1 )
    {
      glwebtools::Json::Reader::getLocationLineAndColumn(
        (glwebtools::Json::Reader::Self *)&v14,
        (glwebtools::Json::Reader::Self *)a2,
        *(char **)(v2 + 4));
      sub_59E340(&v15, "* ", &v14);
      g4_std::string::construct_copy(&v16, &v15);
      g4_std::string::append((int)(uintptr_t)(&v16), &a0[1], 1u);
      g4_std::string::append_str(self, &v16);
      v3 = (void *)(v16 - 12);
      if ( (uint32_t *)(v16 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
      v4 = (void *)(v15 - 12);
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      v5 = (void *)(v14 - 12);
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      sub_59E340(&v17, "  ", (uint32_t *)(v2 + 12));
      g4_std::string::construct_copy(&v18, &v17);
      g4_std::string::append((int)(uintptr_t)(&v18), &a0[1], 1u);
      g4_std::string::append_str(self, &v18);
      v6 = (void *)(v18 - 12);
      if ( (uint32_t *)(v18 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      v7 = (void *)(v17 - 12);
      if ( (uint32_t *)(v17 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      if ( *(uint32_t *)(v2 + 16) != 0 )
      {
        glwebtools::Json::Reader::getLocationLineAndColumn(
          (glwebtools::Json::Reader::Self *)&v19,
          (glwebtools::Json::Reader::Self *)a2,
          *(char **)(v2 + 16));
        sub_59E340(&v20, "See ", &v19);
        g4_std::string::construct_copy(v21, &v20);
        g4_std::string::append((int)(uintptr_t)(v21), " for detail.\n", 0xDu);
        g4_std::string::append_str(self, v21);
        v8 = (void *)(v21[0] - 12);
        if ( (uint32_t *)(v21[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        v9 = (void *)(v20 - 12);
        if ( (uint32_t *)(v20 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        v10 = (void *)(v19 - 12);
        if ( (uint32_t *)(v19 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
      }
      v2 += 20;
      if ( v2 != v12 )
        break;
      v2 = *(uint32_t *)(v13 + 4);
      v12 = v2 + 500;
      v13 += 4;
      if ( *((uint32_t *)a2 + 16) == v2 )
        return self;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::clear  (binary VA: 0x13f9650)
// Original: glwebtools::Json::Value::clear
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::clear(glwebtools::Json::Value::Self *self)
{
  glwebtools::Json::Value::Self *result;
  uint32_t *v2;

  result = self;
  if ( (uint8_t)(*((uint8_t *)self + 8) - 6) <= 1u )
  {
    v2 = *(uint32_t **)self;
    g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase(
      *(uint32_t *)self,
      *(void **)(*(uint32_t *)self + 8));
    v2[2] = 0;
    v2[3] = (uint32_t)(uintptr_t)(v2 + 1);
    v2[4] = (uint32_t)(uintptr_t)(v2 + 1);
    v2[5] = 0;
    return (glwebtools::Json::Value::Self *)(v2 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Destroy  (binary VA: 0x13f96b0)
// Original: glwebtools::Json::Value::~Value
// ----------------------------------------------------------------------------
void glwebtools::Json::Value::Destroy(glwebtools::Json::Value::Self *self)
{
  uint8_t v1;
  glwebtools::Json::Value::CommentInfo::Self *v2;
  glwebtools::Json::Value::CommentInfo::Self *i;
  void **v4;
  int **v5;

  v1 = *((uint8_t *)self + 8);
  if ( v1 == 4 )
  {
    if ( (*((uint8_t *)self + 9) & 1) != 0 )
    {
      v5 = sub_13F5A90();
      (*(void (**)(int *, uint32_t))(**v5 + 20))(*v5, *(uint32_t *)self);
    }
  }
  else if ( v1 >= 4u && (uint8_t)(v1 - 6) <= 1u )
  {
    v4 = *(void ***)self;
    if ( *(uint32_t *)self != 0 )
    {
      g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase(
        *(uint32_t *)self,
        v4[2]);
      opDelete(v4);
    }
  }
  v2 = *((glwebtools::Json::Value::CommentInfo::Self **)self + 3);
  if ( v2 != nullptr )
  {
    for ( i = (glwebtools::Json::Value::CommentInfo::Self *)((char *)v2 + 4 * *((uint32_t *)v2 - 1));
          v2 != i;
          v2 = *((glwebtools::Json::Value::CommentInfo::Self **)self + 3) )
    {
      i = (glwebtools::Json::Value::CommentInfo::Self *)((char *)i - 4);
      glwebtools::Json::Value::CommentInfo::Destroy(i);
    }
    opDeleteArray((char *)v2 - 4);
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opLt  (binary VA: 0x13f9760)
// Original: glwebtools::Json::Value::operator<
// ----------------------------------------------------------------------------
char glwebtools::Json::Value::opLt(glwebtools::Json::Value::Self *self, const char **a2)
{
  uint8_t v2;
  unsigned int v3;
  unsigned int v4;

  v2 = *((uint8_t *)self + 8);
  v3 = v2 - *((uint8_t *)a2 + 8);
  if ( v3 != 0 )
  {
    return v3 >> 31;
  }
  else
  {
    switch ( v2 )
    {
      case 1u:
        LOBYTE(v4) = *(uint32_t *)self < (int)(uintptr_t)(*a2);
        break;
      case 2u:
        LOBYTE(v4) = *(uint32_t *)self < (unsigned int)(uintptr_t)(*a2);
        break;
      case 3u:
        LOBYTE(v4) = *(double *)a2 > *(double *)self;
        break;
      case 4u:
        if ( *(uint32_t *)self != 0 )
        {
          LOBYTE(v4) = 0;
          if ( *a2 != nullptr )
            v4 = (unsigned int)strcmp(*(const char **)self, *a2) >> 31;
        }
        else
        {
          LOBYTE(v4) = *a2 != nullptr;
        }
        break;
      case 5u:
        LOBYTE(v4) = *(uint8_t *)a2 > *(uint8_t *)self;
        break;
      case 6u:
      case 7u:
        v3 = *(uint32_t *)(*(uint32_t *)self + 20) - *((uint32_t *)*a2 + 5);
        if ( v3 != 0 )
          return v3 >> 31;
        LOBYTE(v4) = std::op_glwebtools_Json_Value_CZString_std_pair_glwebtools_Json_Value_CZString_const_glwebtools_Json_Value_std_Select1st_std_pair_glwebtools_Json_Value_CZString_const_glwebtools_Json_Value_std_less_glwebtools_Json_Value_CZString_std_allocator_std_pair_glwebtools_Json_Value_CZString_const_glwebtools_Json_Value(
                       *(const std::_Rb_tree<glwebtools::Json::Value::CZString::Self, std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>, std::_Select1st<std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>>, std::less<glwebtools::Json::Value::CZString::Self>, std::allocator<std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>>> **)self,
                       (const std::_Rb_tree<glwebtools::Json::Value::CZString::Self, std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>, std::_Select1st<std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>>, std::less<glwebtools::Json::Value::CZString::Self>, std::allocator<std::pair<glwebtools::Json::Value::CZString::Self const, glwebtools::Json::Value::Self>>> *)*a2);
        break;
      default:
        LOBYTE(v4) = 0;
        break;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opGt  (binary VA: 0x13f9870)
// Original: glwebtools::Json::Value::operator>
// ----------------------------------------------------------------------------
char glwebtools::Json::Value::opGt(const char **self, const glwebtools::Json::Value::Self *a2)
{
  return glwebtools::Json::Value::opLt((glwebtools::Json::Value::Self *)(a2), self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opLe  (binary VA: 0x13f98a0)
// Original: glwebtools::Json::Value::operator<=
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::opLe(glwebtools::Json::Value::Self *self, const char **a2)
{
  int v2;

  LOBYTE(v2) = glwebtools::Json::Value::opGt(a2, self);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opGe  (binary VA: 0x13f98d0)
// Original: glwebtools::Json::Value::operator>=
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::opGe(glwebtools::Json::Value::Self *self, const char **a2)
{
  int v2;

  LOBYTE(v2) = glwebtools::Json::Value::opLt(self, a2);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::pushValue  (binary VA: 0x13f9900)
// Original: glwebtools::Json::StyledStreamWriter::pushValue
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledStreamWriter::pushValue(int a1, uint32_t *a2)
{
  int result;
  char *v3;
  int v4;

  result = (int)(uintptr_t)(a2);
  if ( *(uint8_t *)(a1 + 28) == 0 )
    return (int)(uintptr_t)(g4_std_compat::ostream_write(*(uint32_t *)(a1 + 12), *a2, *(uint32_t *)(*a2 - 12)));
  v3 = *(char **)(a1 + 4);
  if ( v3 == *(char **)(a1 + 8) )
    return g4_std::vector_string_86c307::M_insert_aux((int *)a1, v3, (int)(uintptr_t)(a2));
  v4 = 0;
  if ( v3 != nullptr )
  {
    result = (int)(uintptr_t)(g4_std::string::construct_copy(v3, a2));
    v4 = *(uint32_t *)(a1 + 4);
  }
  *(uint32_t *)(a1 + 4) = v4 + 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::getMemberNames  (binary VA: 0x13f99a0)
// Original: glwebtools::Json::Value::getMemberNames
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::getMemberNames(glwebtools::Json::Value::Self *self, uint8_t *a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  char *v8;
  void *v9;
  char *v10;
  char *v11;
  unsigned int v12;
  size_t v13;
  int v14;
  int v15;
  char *v16;
  bool v17;
  uint32_t *v18;
  typedef int _g4_t_i;
  typedef uint8_t _g4_t_v20[7];
  typedef void *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef char *_g4_t_v23;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v20)) > _g4_s1 ? (29u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v21)) > _g4_s2 ? (36u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v22)) > _g4_s3 ? (40u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v23)) > _g4_s4 ? (44u + sizeof(_g4_t_v23)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 29u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  if ( a2[8] == 0 )
  {
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    return self;
  }
  v3 = *(uint32_t *)a2;
  v21 = nullptr;
  v22 = nullptr;
  v23 = nullptr;
  g4_std::vector_string_86c307::reserve((std::vector<std::string> *)&v21, *(uint32_t *)(v3 + 20));
  v6 = *(uint32_t *)(*(uint32_t *)a2 + 12);
  for ( i = *(uint32_t *)a2 + 4; i != v6; v6 = sub_19048E0(v6) )
  {
    v7 = (char *)glwebtools::Json::Value::CZString::c_str((glwebtools::Json::Value::CZString::Self *)(v6 + 16));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[3]), v7, (int)(uintptr_t)(v20));
    if ( v22 == v23 )
    {
      g4_std::vector_string_86c307::M_insert_aux((int *)&v21, v22, (int)(uintptr_t)(&v20[3]));
    }
    else
    {
      v8 = nullptr;
      if ( v22 != nullptr )
      {
        g4_std::string::construct_copy(v22, &v20[3]);
        v8 = v22;
      }
      v22 = v8 + 4;
    }
    v9 = (void *)(*(uint32_t *)&v20[3] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v20[3] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[3] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
  }
  v10 = v22;
  v11 = (char *)v21;
  v12 = (v22 - (char *)((uint8_t *)v21)) >> 2;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( v12 != 0 )
  {
    if ( v12 > 0x3FFFFFFF )
      sub_18FFEE0(v5, v4);
    v13 = 4 * v12;
    v14 = opNew(v13);
    v10 = v22;
    v11 = (char *)v21;
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  *(uint32_t *)self = v14;
  *((uint32_t *)self + 1) = v14;
  *((uint32_t *)self + 2) = v14 + v13;
  if ( v10 == v11 )
  {
    *((uint32_t *)self + 1) = v14;
  }
  else
  {
    v15 = v14;
    do
    {
      if ( v15 != 0 )
        g4_std::string::construct_copy(v15, v11);
      v11 += 4;
      v15 += 4;
    }
    while ( v10 != v11 );
    v16 = v22;
    v11 = (char *)v21;
    v17 = v22 == v21;
    *((uint32_t *)self + 1) = v15;
    if ( !v17 )
    {
      do
      {
        v18 = (uint32_t *)(*(uint32_t *)v11 - 12);
        if ( v18 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v11 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v18);
        }
        v11 += 4;
      }
      while ( v11 != v16 );
      v11 = (char *)v21;
    }
  }
  if ( v11 == nullptr )
    return self;
  opDelete(v11);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::pushValue  (binary VA: 0x13f9bf0)
// Original: glwebtools::Json::StyledWriter::pushValue
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledWriter::pushValue(int a1, int a2, int a3)
{
  int result;
  char *v4;
  int v5;

  result = a2;
  if ( *(uint8_t *)(a1 + 28) == 0 )
    return (int)(uintptr_t)(g4_std::string::append_str(a3, a2));
  v4 = *(char **)(a1 + 8);
  if ( v4 == *(char **)(a1 + 12) )
    return g4_std::vector_string_86c307::M_insert_aux((int *)(a1 + 4), v4, a2);
  v5 = 0;
  if ( v4 != nullptr )
  {
    result = (int)(uintptr_t)(g4_std::string::construct_copy(v4, a2));
    v5 = *(uint32_t *)(a1 + 8);
  }
  *(uint32_t *)(a1 + 8) = v5 + 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Path::addPathInArg  (binary VA: 0x13f9c80)
// Original: glwebtools::Json::Path::addPathInArg
// ----------------------------------------------------------------------------
int * glwebtools::Json::Path::addPathInArg(int a1, int a2, int a3, int **a4, int *a5)
{
  int *result;
  int v6;
  int v7;
  int v8;

  result = *a4;
  if ( *(int **)(a3 + 4) != *a4 )
  {
    v6 = *result;
    result = a5;
    if ( *(int **)(v6 + 8) == a5 )
    {
      v7 = *(uint32_t *)(a1 + 4);
      if ( v7 == *(uint32_t *)(a1 + 8) )
      {
        return (int *)g4_std::vector_glwebtools_Json_PathArgu_3ae128::M_insert_aux(a1, v7, v6);
      }
      else
      {
        v8 = 0;
        if ( v7 != 0 )
        {
          g4_std::string::construct_copy(v7, v6);
          *(uint32_t *)(v7 + 4) = *(uint32_t *)(v6 + 4);
          *(uint32_t *)(v7 + 8) = *(uint32_t *)(v6 + 8);
          v8 = *(uint32_t *)(a1 + 4);
        }
        result = (int *)(v8 + 12);
        *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(result);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Path::makePath  (binary VA: 0x13f9d30)
// Original: glwebtools::Json::Path::makePath
// ----------------------------------------------------------------------------
void glwebtools::Json::Path::makePath(int a1, uint32_t *a2, int **a3)
{
  uint8_t *v3;
  int v4;
  char v5;
  int v6;
  int v7;
  void *v8;
  void *v9;
  char v10;
  char *v11;
  unsigned int v12;
  int v13;
  int v14;
  void *v15;
  typedef uint8_t *_g4_t_v16;
  typedef int *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[3];
  typedef uint32_t _g4_t_v20[10];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v17)) > _g4_s1 ? (32u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v18)) > _g4_s2 ? (36u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v19)) > _g4_s3 ? (40u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v20)) > _g4_s4 ? (52u + sizeof(_g4_t_v20)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);

  v3 = (uint8_t *)*a2;
  v4 = *a2 + *(uint32_t *)(*a2 - 12);
  v17 = *a3;
LABEL_2:
  while ( (uint8_t *)v4 != v3 )
  {
    while ( 1 )
    {
      v5 = *v3;
      if ( *v3 == 91 )
        break;
      if ( v5 == 37 )
      {
        ++v3;
        glwebtools::Json::Path::addPathInArg(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), &v17, (int *)((char *)&dword_0 + 2));
        goto LABEL_2;
      }
      if ( v5 == 46 )
      {
        ++v3;
        goto LABEL_2;
      }
      v16 = v3;
      if ( v3 != (uint8_t *)v4 )
      {
        while ( strchr("[.", v5) == nullptr )
        {
          if ( (uint8_t *)v4 == ++v16 )
            break;
          v5 = *v16;
        }
      }
      sub_119F570(&v18, v3, v16);
      glwebtools::Json::PathArgument::Construct((int)(uintptr_t)(v20), (char **)&v18);
      v6 = *(uint32_t *)(a1 + 4);
      if ( v6 == *(uint32_t *)(a1 + 8) )
      {
        g4_std::vector_glwebtools_Json_PathArgu_3ae128::M_insert_aux(a1, v6, v20);
      }
      else
      {
        v7 = 0;
        if ( v6 != 0 )
        {
          g4_std::string::construct_copy(v6, v20);
          *(uint32_t *)(v6 + 4) = v20[1];
          *(uint32_t *)(v6 + 8) = v20[2];
          v7 = *(uint32_t *)(a1 + 4);
        }
        *(uint32_t *)(a1 + 4) = v7 + 12;
      }
      v8 = (void *)(v20[0] - 12);
      if ( (uint32_t *)(v20[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      v9 = (void *)(v18 - 12);
      if ( (uint32_t *)(v18 - 12) != dword_213B808 )
      {
        v3 = v16;
        if ( __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v9);
        goto LABEL_2;
      }
      v3 = v16;
      if ( (uint8_t *)v4 == v16 )
        return;
    }
    v10 = v3[1];
    v11 = (char *)(v3 + 1);
    if ( v10 == 37 )
    {
      glwebtools::Json::Path::addPathInArg(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), &v17, (int *)((char *)&dword_0 + 1));
    }
    else
    {
      v12 = 0;
      if ( (char *)v4 != v11 )
      {
        while ( v10 > 47 )
        {
          if ( v10 > 57 )
            break;
          ++v11;
          v12 = v10 + 10 * v12 - 48;
          if ( (char *)v4 == v11 )
            break;
          v10 = *v11;
        }
      }
      glwebtools::Json::PathArgument::Construct((glwebtools::Json::PathArgument::Self *)v19, v12);
      v13 = *(uint32_t *)(a1 + 4);
      if ( v13 == *(uint32_t *)(a1 + 8) )
      {
        g4_std::vector_glwebtools_Json_PathArgu_3ae128::M_insert_aux(a1, v13, v19);
      }
      else
      {
        v14 = 0;
        if ( v13 != 0 )
        {
          g4_std::string::construct_copy(v13, v19);
          *(uint32_t *)(v13 + 4) = v19[1];
          *(uint32_t *)(v13 + 8) = v19[2];
          v14 = *(uint32_t *)(a1 + 4);
        }
        *(uint32_t *)(a1 + 4) = v14 + 12;
      }
      v15 = (void *)(v19[0] - 12);
      if ( (uint32_t *)(v19[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v15);
      }
    }
    if ( v11 == (char *)v4 )
    {
      v3 = (uint8_t *)v4;
    }
    else
    {
      v3 = (uint8_t *)(v11 + 1);
      if ( *v11 == 93 )
        continue;
    }
    glwebtools::Json::Path::invalidPath();
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Path::Construct  (binary VA: 0x13fa0b0)
// Original: glwebtools::Json::Path::Path
// ----------------------------------------------------------------------------
void glwebtools::Json::Path::Construct(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7;
  int *v8;
  int *v9;
  int *v10;
  int *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef int *_g4_t_v18;
  typedef void *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v16)) > _g4_s4 ? (16u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v17)) > _g4_s5 ? (20u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v18)) > _g4_s6 ? (24u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);

  v12 = a3;
  v17 = nullptr;
  v18 = nullptr;
  v19 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  g4_std::vector_glwebtools_Json_PathArgu_691eb1::M_insert_aux((int)(uintptr_t)(&v17), nullptr, (int)(uintptr_t)(&v12));
  v7 = (int *)v19;
  v13 = a4;
  if ( v18 == v19 )
  {
    g4_std::vector_glwebtools_Json_PathArgu_691eb1::M_insert_aux((int)(uintptr_t)(&v17), v19, (int)(uintptr_t)(&v13));
    v9 = v18;
    v7 = (int *)v19;
  }
  else
  {
    v8 = nullptr;
    if ( v18 != nullptr )
    {
      *v18 = a4;
      v8 = v18;
      v7 = (int *)v19;
    }
    v9 = v8 + 1;
    v18 = v9;
  }
  v14 = a5;
  if ( v7 == v9 )
  {
    g4_std::vector_glwebtools_Json_PathArgu_691eb1::M_insert_aux((int)(uintptr_t)(&v17), v7, (int)(uintptr_t)(&v14));
    v10 = v18;
    v7 = (int *)v19;
  }
  else
  {
    if ( v9 != nullptr )
    {
      *v9 = a5;
      v9 = v18;
      v7 = (int *)v19;
    }
    v10 = v9 + 1;
    v18 = v10;
  }
  v15 = a6;
  if ( v10 == v7 )
  {
    g4_std::vector_glwebtools_Json_PathArgu_691eb1::M_insert_aux((int)(uintptr_t)(&v17), v7, (int)(uintptr_t)(&v15));
    v11 = v18;
    v7 = (int *)v19;
  }
  else
  {
    if ( v10 != nullptr )
    {
      *v10 = a6;
      v10 = v18;
      v7 = (int *)v19;
    }
    v11 = v10 + 1;
    v18 = v11;
  }
  v16 = a7;
  if ( v11 == v7 )
  {
    g4_std::vector_glwebtools_Json_PathArgu_691eb1::M_insert_aux((int)(uintptr_t)(&v17), v11, (int)(uintptr_t)(&v16));
  }
  else
  {
    if ( v11 != nullptr )
    {
      *v11 = a7;
      v11 = v18;
    }
    v18 = v11 + 1;
  }
  glwebtools::Json::Path::makePath((int)(uintptr_t)(a1), a2, (int **)&v17);
  if ( v17 != nullptr )
    opDelete(v17);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::Construct  (binary VA: 0x13fa280)
// Original: glwebtools::Json::Value::Value
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::Construct(glwebtools::Json::Value::Self *self, const glwebtools::Json::Value::Self *a2)
{
  uint8_t v2;
  int v3;
  int v4;
  glwebtools::Json::Value::Self *result;
  uint32_t *v6;
  int v7;
  int **v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int i;
  glwebtools::Json::Value::CommentInfo::Self *v14;
  uint32_t *v15;
  int v16;

  v2 = *((uint8_t *)a2 + 8);
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 8) = v2;
  if ( v2 <= 7u )
  {
    v3 = 1 << v2;
    if ( ((1 << v2) & 0x2F) != 0 )
    {
      v4 = *(uint32_t *)a2;
      *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
      *(uint32_t *)self = v4;
    }
    else if ( (v3 & 0xC0) != 0 )
    {
      v9 = (uint32_t *)opNew(0x18u);
      v16 = *(uint32_t *)a2;
      v10 = *(uint32_t *)a2;
      v9[1] = 0;
      v9[2] = 0;
      v9[5] = 0;
      v9[3] = (uint32_t)(uintptr_t)(v9 + 1);
      v9[4] = (uint32_t)(uintptr_t)(v9 + 1);
      v11 = *(uint32_t *)(v10 + 8);
      if ( v11 != 0 )
      {
        v12 = (int)(uintptr_t)(g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_copy(
                v9,
                v11,
                v9 + 1));
        v9[2] = v12;
        for ( i = v12; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
          ;
        v9[3] = i;
        while ( *(uint32_t *)(v12 + 12) != 0 )
          v12 = *(uint32_t *)(v12 + 12);
        v9[4] = v12;
        v9[5] = *(uint32_t *)(v16 + 20);
      }
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v9);
    }
    else if ( (v3 & 0x10) != 0 )
    {
      if ( *(uint32_t *)a2 != 0 )
      {
        v8 = sub_13F5A90();
        *(uint32_t *)self = (*(int (**)(int *, uint32_t, int))(**v8 + 16))(*v8, *(uint32_t *)a2, -1);
        *((uint8_t *)self + 9) |= 1u;
      }
      else
      {
        *(uint32_t *)self = 0;
      }
    }
  }
  result = *((glwebtools::Json::Value::Self **)a2 + 3);
  if ( result != nullptr )
  {
    v6 = (uint32_t *)opNewArray(0x10u);
    *v6 = 3;
    v15 = v6 + 1;
    glwebtools::Json::Value::CommentInfo::Construct((glwebtools::Json::Value::CommentInfo::Self *)(v6 + 1));
    glwebtools::Json::Value::CommentInfo::Construct((glwebtools::Json::Value::CommentInfo::Self *)(v6 + 2));
    v14 = (glwebtools::Json::Value::CommentInfo::Self *)(v6 + 3);
    v7 = 0;
    glwebtools::Json::Value::CommentInfo::Construct(v14);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v15);
    do
    {
      result = *(glwebtools::Json::Value::Self **)(*((uint32_t *)a2 + 3) + v7);
      if ( result != nullptr )
        result = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::CommentInfo::setComment(
                                              (glwebtools::Json::Value::CommentInfo::Self *)(v7 + *((uint32_t *)self + 3)),
                                              *(const char **)(*((uint32_t *)a2 + 3) + v7));
      v7 += 4;
    }
    while ( v7 != 12 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Path::resolve  (binary VA: 0x13fa410)
// Original: glwebtools::Json::Path::resolve
// ----------------------------------------------------------------------------
glwebtools::Json::Path::Self * glwebtools::Json::Path::resolve(glwebtools::Json::Path::Self *self, const glwebtools::Json::Value::Self *a2, const glwebtools::Json::Value::Self *a3, glwebtools::Json::Value::Self *a4)
{
  int v5;
  int v6;

  v5 = *(uint32_t *)a2;
  if ( *(uint32_t *)a2 != *((uint32_t *)a2 + 1) )
  {
    while ( 1 )
    {
      v6 = *(uint32_t *)(v5 + 8);
      if ( v6 == 1 )
      {
        if ( (uint8_t)glwebtools::Json::Value::isArray(a3) == 0
          || glwebtools::Json::Value::isValidIndex(a3, *(uint32_t *)(v5 + 4)) )
        {
          goto LABEL_7;
        }
        a3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, *(uint32_t *)(v5 + 4));
LABEL_4:
        v5 += 12;
        if ( *((uint32_t *)a2 + 1) == v5 )
          break;
      }
      else
      {
        if ( v6 != 2 )
          goto LABEL_4;
        if ( (uint8_t)glwebtools::Json::Value::isObject(a3) == 0
          || (a3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)v5)) == (const glwebtools::Json::Value::Self *)&glwebtools::Json::Value::null_value )
        {
LABEL_7:
          glwebtools::Json::Value::Construct(self, a4);
          return self;
        }
        v5 += 12;
        if ( *((uint32_t *)a2 + 1) == v5 )
          break;
      }
    }
  }
  glwebtools::Json::Value::Construct(self, a3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::get  (binary VA: 0x13fa500)
// Original: glwebtools::Json::Value::get
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::get(glwebtools::Json::Value::Self *self, glwebtools::Json::Value::Self *a2, const glwebtools::Json::Value::Self *a3, glwebtools::Json::Value::Self *a4)
{
  const glwebtools::Json::Value::Self *v4;

  v4 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char *)a3);
  if ( v4 == (const glwebtools::Json::Value::Self *)&glwebtools::Json::Value::null_value )
    v4 = a4;
  glwebtools::Json::Value::Construct(self, v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::get  (binary VA: 0x13fa560)
// Original: glwebtools::Json::Value::get
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::get(glwebtools::Json::Value::Self *a1, char *a2, const glwebtools::Json::Value::Self **a3, glwebtools::Json::Value::Self *a4)
{
  glwebtools::Json::Value::get(a1, (glwebtools::Json::Value::Self *)a2, *a3, a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::get_ea13fa5c0  (binary VA: 0x13fa5c0)
// Original: glwebtools::Json::Value::get
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::get_ea13fa5c0(glwebtools::Json::Value::Self *self, glwebtools::Json::Value::Self *a2, const glwebtools::Json::Value::Self *a3, glwebtools::Json::Value::Self *a4)
{
  const glwebtools::Json::Value::Self *v4;

  v4 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (unsigned int)(uintptr_t)(a3));
  if ( v4 == (const glwebtools::Json::Value::Self *)&glwebtools::Json::Value::null_value )
    v4 = a4;
  glwebtools::Json::Value::Construct(self, v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opAssign  (binary VA: 0x13fa620)
// Original: glwebtools::Json::Value::operator=
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::opAssign(glwebtools::Json::Value::Self *self, const glwebtools::Json::Value::Self *a2)
{
  uint8_t v3[16];

  glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v3, a2);
  glwebtools::Json::Value::swap(self, (glwebtools::Json::Value::Self *)v3);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::resolveReference  (binary VA: 0x13fa680)
// Original: glwebtools::Json::Value::resolveReference
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::resolveReference(glwebtools::Json::Value::Self *self, const char *a2, bool a3)
{
  bool v3;
  int v4;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef const char *_g4_t_v9[2];
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[8];
  typedef uint8_t _g4_t_v12[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v11)) > _g4_s3 ? (40u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v12)) > _g4_s4 ? (48u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  v3 = a3;
  if ( *((uint8_t *)self + 8) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v10), (char *)&loc_6 + 1);
    glwebtools::Json::Value::opAssign(self, (const glwebtools::Json::Value::Self *)v10);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v10);
    v3 = a3;
  }
  glwebtools::Json::Value::CZString::Construct((int *)v9, (int)(uintptr_t)(a2), !v3 ? 2 : 0);
  v4 = *(uint32_t *)(*(uint32_t *)self + 8);
  v5 = *(uint32_t *)self + 4;
  if ( v4 == 0 )
    goto LABEL_10;
  do
  {
    while ( glwebtools::Json::Value::CZString::opLt((const char **)(v4 + 16), v9) == 0 )
    {
      v5 = v4;
      v4 = *(uint32_t *)(v4 + 8);
      if ( v4 == 0 )
        goto LABEL_8;
    }
    v4 = *(uint32_t *)(v4 + 12);
  }
  while ( v4 != 0 );
LABEL_8:
  if ( v5 != *(uint32_t *)self + 4 && glwebtools::Json::Value::CZString::opEq((const char **)(v5 + 16), v9) )
  {
    v6 = v5 + 24;
  }
  else
  {
LABEL_10:
    glwebtools::Json::Value::CZString::Construct(
      (glwebtools::Json::Value::CZString::Self *)v11,
      (const glwebtools::Json::Value::CZString::Self *)v9);
    glwebtools::Json::Value::Construct(
      (glwebtools::Json::Value::Self *)v12,
      (const glwebtools::Json::Value::Self *)&glwebtools::Json::Value::null_value);
    {
      uint32_t g4_ins[2] = { 0, 0 };
      g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert_unique((int)(uintptr_t)g4_ins, (int)*(uint32_t *)self, (const char **)v11);
      v8 = g4_ins[0];
    }
    v6 = v8 + 24;
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
    glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v11);
  }
  glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v9);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opIndex_ea13fa7e0  (binary VA: 0x13fa7e0)
// Original: glwebtools::Json::Value::operator[]
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::opIndex_ea13fa7e0(glwebtools::Json::Value::Self *a1, const char **a2)
{
  return glwebtools::Json::Value::resolveReference(a1, *a2, true);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opIndex  (binary VA: 0x13fa820)
// Original: glwebtools::Json::Value::operator[]
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::opIndex(glwebtools::Json::Value::Self *self, char *a2)
{
  return glwebtools::Json::Value::resolveReference(self, a2, false);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opIndex  (binary VA: 0x13fa860)
// Original: glwebtools::Json::Value::operator[]
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::opIndex(glwebtools::Json::Value::Self *a1, char **a2)
{
  return glwebtools::Json::Value::opIndex(a1, *a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::opIndex_ea13fa890  (binary VA: 0x13fa890)
// Original: glwebtools::Json::Value::operator[]
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::opIndex_ea13fa890(glwebtools::Json::Value::Self *self, unsigned int a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef const char *_g4_t_v7[2];
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[8];
  typedef uint8_t _g4_t_v10[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v9)) > _g4_s3 ? (40u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v10)) > _g4_s4 ? (48u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);

  if ( *((uint8_t *)self + 8) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v8), &loc_6);
    glwebtools::Json::Value::opAssign(self, (const glwebtools::Json::Value::Self *)v8);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v8);
  }
  glwebtools::Json::Value::CZString::Construct((glwebtools::Json::Value::CZString::Self *)v7, a2);
  v2 = *(uint32_t *)(*(uint32_t *)self + 8);
  v3 = *(uint32_t *)self + 4;
  if ( v2 == 0 )
    goto LABEL_10;
  do
  {
    while ( glwebtools::Json::Value::CZString::opLt((const char **)(v2 + 16), v7) == 0 )
    {
      v3 = v2;
      v2 = *(uint32_t *)(v2 + 8);
      if ( v2 == 0 )
        goto LABEL_8;
    }
    v2 = *(uint32_t *)(v2 + 12);
  }
  while ( v2 != 0 );
LABEL_8:
  if ( v3 != *(uint32_t *)self + 4 && glwebtools::Json::Value::CZString::opEq((const char **)(v3 + 16), v7) )
  {
    v4 = v3 + 24;
  }
  else
  {
LABEL_10:
    glwebtools::Json::Value::CZString::Construct(
      (glwebtools::Json::Value::CZString::Self *)v9,
      (const glwebtools::Json::Value::CZString::Self *)v7);
    glwebtools::Json::Value::Construct(
      (glwebtools::Json::Value::Self *)v10,
      (const glwebtools::Json::Value::Self *)&glwebtools::Json::Value::null_value);
    {
      uint32_t g4_ins[2] = { 0, 0 };
      g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_insert_unique((int)(uintptr_t)g4_ins, (int)*(uint32_t *)self, (const char **)v9);
      v6 = g4_ins[0];
    }
    v4 = v6 + 24;
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v10);
    glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v9);
  }
  glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v7);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Path::make  (binary VA: 0x13fa9e0)
// Original: glwebtools::Json::Path::make
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Path::make(glwebtools::Json::Path::Self *self, glwebtools::Json::Value::Self *a2)
{
  int i;
  int v4;
  unsigned int v6;

  for ( i = *(uint32_t *)self; *((uint32_t *)self + 1) != i; i += 12 )
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(i + 8);
      if ( v4 != 1 )
        break;
      glwebtools::Json::Value::isArray(a2);
      v6 = *(uint32_t *)(i + 4);
      i += 12;
      a2 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v6);
      if ( *((uint32_t *)self + 1) == i )
        return a2;
    }
    if ( v4 == 2 )
    {
      glwebtools::Json::Value::isObject(a2);
      a2 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (char **)i);
    }
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::append  (binary VA: 0x13faa70)
// Original: glwebtools::Json::Value::append
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::append(glwebtools::Json::Value::Self *self, const glwebtools::Json::Value::Self *a2)
{
  unsigned int v2;
  glwebtools::Json::Value::Self *v3;

  v2 = glwebtools::Json::Value::size(self);
  v3 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(self, v2);
  return glwebtools::Json::Value::opAssign(v3, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::removeMember  (binary VA: 0x13faac0)
// Original: glwebtools::Json::Value::removeMember
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::removeMember(glwebtools::Json::Value::Self *self, const char *a2, int a3)
{
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef const char *_g4_t_v8[2];
  typedef uint8_t _g4_t_v9[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v9)) > _g4_s3 ? (32u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  if ( a2[8] != 0 )
  {
    glwebtools::Json::Value::CZString::Construct((int *)v8, a3, 0);
    v3 = *(uint32_t *)(*(uint32_t *)a2 + 8);
    v6 = *(uint32_t *)a2 + 4;
    v7 = v6;
    if ( v3 != 0 )
    {
      v4 = *(uint32_t *)a2 + 4;
      do
      {
        while ( glwebtools::Json::Value::CZString::opLt((const char **)(v3 + 16), v8) == 0 )
        {
          v4 = v3;
          v3 = *(uint32_t *)(v3 + 8);
          if ( v3 == 0 )
            goto LABEL_7;
        }
        v3 = *(uint32_t *)(v3 + 12);
      }
      while ( v3 != 0 );
LABEL_7:
      if ( v6 == v4 )
      {
        v6 = *(uint32_t *)a2 + 4;
      }
      else
      {
        if ( glwebtools::Json::Value::CZString::opLt(v8, (const char **)(v4 + 16)) == 0 )
          v7 = v4;
        v6 = *(uint32_t *)a2 + 4;
      }
    }
    if ( v7 == v6 )
    {
      glwebtools::Json::Value::Construct(self, (const glwebtools::Json::Value::Self *)&glwebtools::Json::Value::null_value);
    }
    else
    {
      glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v9, (const glwebtools::Json::Value::Self *)(v7 + 24));
      g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase_aux(
        *(uint32_t *)a2,
        v7);
      glwebtools::Json::Value::Construct(self, (const glwebtools::Json::Value::Self *)v9);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v9);
    }
    glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v8);
    return self;
  }
  else
  {
    glwebtools::Json::Value::Construct(self, (const glwebtools::Json::Value::Self *)&glwebtools::Json::Value::null_value);
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::removeMember  (binary VA: 0x13fac50)
// Original: glwebtools::Json::Value::removeMember
// ----------------------------------------------------------------------------
glwebtools::Json::Value::Self * glwebtools::Json::Value::removeMember(glwebtools::Json::Value::Self *a1, char *a2, int *a3)
{
  glwebtools::Json::Value::removeMember(a1, a2, *a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::resize  (binary VA: 0x13faca0)
// Original: glwebtools::Json::Value::resize
// ----------------------------------------------------------------------------
int glwebtools::Json::Value::resize(glwebtools::Json::Value::Self *self, unsigned int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int result;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef unsigned int _g4_t_i;
  typedef unsigned int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint8_t _g4_t_v15[8];
  typedef uint8_t _g4_t_v16[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_i)) > _g4_s4 ? (20u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v13)) > _g4_s5 ? (24u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v14)) > _g4_s6 ? (28u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v15)) > _g4_s7 ? (40u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v16)) > _g4_s8 ? (48u + sizeof(_g4_t_v16)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);

  if ( *((uint8_t *)self + 8) == 0 )
  {
    glwebtools::Json::Value::Construct(v16, 6);
    glwebtools::Json::Value::opAssign(self, (const glwebtools::Json::Value::Self *)v16);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v16);
  }
  v13 = glwebtools::Json::Value::size(self);
  if ( a2 == 0 )
    return (int)(uintptr_t)(glwebtools::Json::Value::clear(self));
  if ( v13 < a2 )
    return (int)(uintptr_t)(glwebtools::Json::Value::opIndex(self, a2 - 1));
  for ( i = a2; v13 > i; ++i )
  {
    glwebtools::Json::Value::CZString::Construct((glwebtools::Json::Value::CZString::Self *)v15, i);
    v9 = *(uint32_t *)self;
    v2 = *(uint32_t **)(*(uint32_t *)self + 8);
    v11 = *(uint32_t *)self + 4;
    v10 = (uint32_t *)v11;
    v3 = (uint32_t *)v11;
    if ( v2 != nullptr )
    {
      while ( 1 )
      {
        while ( (uint8_t)glwebtools::Json::Value::CZString::opLt(
                                   (const char **)((glwebtools::Json::Value::CZString::Self *)(v2 + 4)),
                                   (const char **)((const glwebtools::Json::Value::CZString::Self *)v15)) != 0 )
        {
          v2 = (uint32_t *)v2[3];
          if ( v2 == nullptr )
            goto LABEL_12;
        }
        if ( (uint8_t)glwebtools::Json::Value::CZString::opLt(
                                (const char **)((glwebtools::Json::Value::CZString::Self *)v15),
                                (const char **)((const glwebtools::Json::Value::CZString::Self *)(v2 + 4))) == 0 )
          break;
        v10 = v2;
        v2 = (uint32_t *)v2[2];
        if ( v2 == nullptr )
        {
LABEL_12:
          v3 = v10;
          goto LABEL_13;
        }
      }
      v5 = (uint32_t *)v2[2];
      if ( v2[3] != 0 )
      {
        v6 = (uint32_t *)v2[3];
        v14 = (uint32_t *)v2[2];
        do
        {
          while ( (uint8_t)glwebtools::Json::Value::CZString::opLt(
                                     (const char **)((glwebtools::Json::Value::CZString::Self *)v15),
                                     (const char **)((const glwebtools::Json::Value::CZString::Self *)(v6 + 4))) != 0 )
          {
            v10 = v6;
            v6 = (uint32_t *)v6[2];
            if ( v6 == nullptr )
              goto LABEL_27;
          }
          v6 = (uint32_t *)v6[3];
        }
        while ( v6 != nullptr );
LABEL_27:
        v5 = v14;
      }
      v3 = v2;
      if ( v5 != nullptr )
      {
        v7 = v5;
        do
        {
          if ( (uint8_t)glwebtools::Json::Value::CZString::opLt(
                                  (const char **)((glwebtools::Json::Value::CZString::Self *)(v7 + 4)),
                                  (const char **)((const glwebtools::Json::Value::CZString::Self *)v15)) != 0 )
          {
            v7 = (uint32_t *)v7[3];
          }
          else
          {
            v3 = v7;
            v7 = (uint32_t *)v7[2];
          }
        }
        while ( v7 != nullptr );
      }
    }
LABEL_13:
    if ( *(uint32_t **)(v9 + 12) == v3 && (uint32_t *)v11 == v10 )
    {
      g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase(
        v9,
        *(void **)(v9 + 8));
      *(uint32_t *)(v9 + 12) = v11;
      *(uint32_t *)(v9 + 8) = 0;
      *(uint32_t *)(v9 + 16) = v11;
      *(uint32_t *)(v9 + 20) = 0;
    }
    else if ( v10 != v3 )
    {
      while ( 1 )
      {
        v8 = (uint32_t *)sub_19048E0(v3);
        g4_std::Rb_tree_glwebtools_Json_Value_CZ_a96524::M_erase_aux(
          v9,
          v3);
        if ( v10 == v8 )
          break;
        v3 = v8;
      }
    }
    glwebtools::Json::Value::CZString::Destroy((glwebtools::Json::Value::CZString::Self *)v15);
  }
  result = glwebtools::Json::Value::size(self);
  if ( result != a2 )
    return ((__assert2(
             "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/jsoncpp/../../../source/glwebtools/jsoncpp/glwebtools_json_value.cpp",
             975,
             "void glwebtools::Json::Value::resize(glwebtools::Json::Value::UInt)",
             "size() == newSize")), (int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::Construct  (binary VA: 0x13faf30)
// Original: glwebtools::Json::Reader::Reader
// ----------------------------------------------------------------------------
glwebtools::Json::Reader::Self * glwebtools::Json::Reader::Construct(glwebtools::Json::Reader::Self *self)
{
  glwebtools::Json::Reader::Self *v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int *v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  void *v11;
  void **v12;
  unsigned int v13;
  void *v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef void *_g4_t_v23[2];
  typedef int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int *_g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v23)) > _g4_s2 ? (24u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v24)) > _g4_s3 ? (32u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v25)) > _g4_s4 ? (36u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v26)) > _g4_s5 ? (40u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v27)) > _g4_s6 ? (44u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v28)) > _g4_s7 ? (48u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v29)) > _g4_s8 ? (52u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v30)) > _g4_s9 ? (56u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v31)) > _g4_s10 ? (60u + sizeof(_g4_t_v31)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);

  v1 = self;
  v23[0] = nullptr;
  v23[1] = nullptr;
  v24 = nullptr;
  v25 = 0;
  v26 = nullptr;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  g4_std::Deque_base_glwebtools_Json_Value_44bc38::M_initialize_map((std::_Deque_base<glwebtools::Json::Value::Self *> *)v23, 0);
  v2 = (int)(v31 - v27) >> 2;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  v3 = v2 - 1;
  v4 = v28 - v29;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  g4_std::Deque_base_glwebtools_Json_Value_44bc38::M_initialize_map(self, (v4 >> 2) + (v3 << 7) + v26 - v24);
  v22 = *((uint32_t *)self + 5);
  v21 = v27;
  v5 = v26;
  v6 = v24;
  v7 = *((uint32_t **)self + 2);
  v8 = ((v28 - v29) >> 2) + ((((int)(v31 - v27) >> 2) - 1) << 7) + v26 - v24;
  if ( v8 > 0 )
  {
    v9 = *((uint32_t **)self + 4);
    while ( 1 )
    {
      v10 = *v6++;
      *v7 = v10;
      if ( v6 == v5 )
      {
        ++v7;
        v6 = *(int **)(v21 + 4);
        v21 += 4;
        v5 = v6 + 128;
        if ( v7 == v9 )
          goto LABEL_7;
LABEL_4:
        if ( --v8 == 0 )
          goto LABEL_8;
      }
      else
      {
        if ( ++v7 != v9 )
          goto LABEL_4;
LABEL_7:
        v7 = *(uint32_t **)(v22 + 4);
        --v8;
        v22 += 4;
        v9 = v7 + 128;
        if ( v8 == 0 )
        {
LABEL_8:
          v1 = self;
          break;
        }
      }
    }
  }
  v11 = v23[0];
  if ( v23[0] != nullptr )
  {
    v12 = (void **)v27;
    v13 = v31 + 4;
    if ( v31 + 4 > v27 )
    {
      do
      {
        v14 = *v12++;
        opDelete(v14);
      }
      while ( v13 > (unsigned int)(uintptr_t)(v12) );
      v11 = v23[0];
    }
    opDelete(v11);
  }
  *((uint32_t *)v1 + 10) = 0;
  *((uint32_t *)v1 + 12) = 0;
  *((uint32_t *)v1 + 13) = 0;
  *((uint32_t *)v1 + 14) = 0;
  *((uint32_t *)v1 + 15) = 0;
  *((uint32_t *)v1 + 16) = 0;
  *((uint32_t *)v1 + 17) = 0;
  *((uint32_t *)v1 + 18) = 0;
  *((uint32_t *)v1 + 19) = 0;
  *((uint32_t *)v1 + 11) = 8;
  v15 = opNew(0x20u);
  v16 = *((uint32_t *)v1 + 11);
  *((uint32_t *)v1 + 10) = v15;
  v17 = (int *)(v15 + ((2 * v16 - 2) & 0xFFFFFFFC));
  *v17 = opNew(0x1F4u);
  *((uint32_t *)v1 + 15) = (uint32_t)(uintptr_t)(v17);
  v18 = *v17;
  *((uint32_t *)v1 + 19) = (uint32_t)(uintptr_t)(v17);
  *((uint32_t *)v1 + 13) = v18;
  *((uint32_t *)v1 + 14) = v18 + 500;
  v19 = *v17;
  *((uint32_t *)v1 + 12) = v18;
  *((uint32_t *)v1 + 17) = v19;
  *((uint32_t *)v1 + 16) = v19;
  *((uint32_t *)v1 + 18) = v19 + 500;
  *((uint32_t *)v1 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)v1 + 26) = (uint32_t)(uintptr_t)(&dword_213B814);
  return (glwebtools::Json::Reader::Self *)(glwebtools::Json::Features::all((glwebtools::Json::Features::Self *)((glwebtools::Json::Reader::Self *)((char *)v1 + 108))));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::Construct  (binary VA: 0x13fb1e0)
// Original: glwebtools::Json::Reader::Reader
// ----------------------------------------------------------------------------
glwebtools::Json::Reader::Self * glwebtools::Json::Reader::Construct(glwebtools::Json::Reader::Self *self, const glwebtools::Json::Features::Self *a2)
{
  glwebtools::Json::Reader::Self *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  void *v12;
  void **v13;
  unsigned int v14;
  void *v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  glwebtools::Json::Reader::Self *result;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef void *_g4_t_v24[2];
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int *_g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v24)) > _g4_s2 ? (24u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v25)) > _g4_s3 ? (32u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v26)) > _g4_s4 ? (36u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v27)) > _g4_s5 ? (40u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v28)) > _g4_s6 ? (44u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v29)) > _g4_s7 ? (48u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v30)) > _g4_s8 ? (52u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v31)) > _g4_s9 ? (56u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v32)) > _g4_s10 ? (60u + sizeof(_g4_t_v32)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);

  v2 = self;
  v24[0] = nullptr;
  v24[1] = nullptr;
  v25 = nullptr;
  v26 = 0;
  v27 = nullptr;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  g4_std::Deque_base_glwebtools_Json_Value_44bc38::M_initialize_map((std::_Deque_base<glwebtools::Json::Value::Self *> *)v24, 0);
  v3 = (int)(v32 - v28) >> 2;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  v4 = v3 - 1;
  v5 = v29 - v30;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  g4_std::Deque_base_glwebtools_Json_Value_44bc38::M_initialize_map(self, (v5 >> 2) + (v4 << 7) + v27 - v25);
  v23 = *((uint32_t *)self + 5);
  v22 = v28;
  v6 = v27;
  v7 = v25;
  v8 = *((uint32_t **)self + 2);
  v9 = ((v29 - v30) >> 2) + ((((int)(v32 - v28) >> 2) - 1) << 7) + v27 - v25;
  if ( v9 > 0 )
  {
    v10 = *((uint32_t **)self + 4);
    while ( 1 )
    {
      v11 = *v7++;
      *v8 = v11;
      if ( v7 == v6 )
      {
        ++v8;
        v7 = *(int **)(v22 + 4);
        v22 += 4;
        v6 = v7 + 128;
        if ( v8 == v10 )
          goto LABEL_7;
LABEL_4:
        if ( --v9 == 0 )
          goto LABEL_8;
      }
      else
      {
        if ( ++v8 != v10 )
          goto LABEL_4;
LABEL_7:
        v8 = *(uint32_t **)(v23 + 4);
        --v9;
        v23 += 4;
        v10 = v8 + 128;
        if ( v9 == 0 )
        {
LABEL_8:
          v2 = self;
          break;
        }
      }
    }
  }
  v12 = v24[0];
  if ( v24[0] != nullptr )
  {
    v13 = (void **)v28;
    v14 = v32 + 4;
    if ( v32 + 4 > v28 )
    {
      do
      {
        v15 = *v13++;
        opDelete(v15);
      }
      while ( v14 > (unsigned int)(uintptr_t)(v13) );
      v12 = v24[0];
    }
    opDelete(v12);
  }
  *((uint32_t *)v2 + 10) = 0;
  *((uint32_t *)v2 + 12) = 0;
  *((uint32_t *)v2 + 13) = 0;
  *((uint32_t *)v2 + 14) = 0;
  *((uint32_t *)v2 + 15) = 0;
  *((uint32_t *)v2 + 16) = 0;
  *((uint32_t *)v2 + 17) = 0;
  *((uint32_t *)v2 + 18) = 0;
  *((uint32_t *)v2 + 19) = 0;
  *((uint32_t *)v2 + 11) = 8;
  v16 = opNew(0x20u);
  v17 = *((uint32_t *)v2 + 11);
  *((uint32_t *)v2 + 10) = v16;
  v18 = (int *)(v16 + ((2 * v17 - 2) & 0xFFFFFFFC));
  *v18 = opNew(0x1F4u);
  *((uint32_t *)v2 + 15) = (uint32_t)(uintptr_t)(v18);
  v19 = *v18;
  *((uint32_t *)v2 + 19) = (uint32_t)(uintptr_t)(v18);
  *((uint32_t *)v2 + 13) = v19;
  *((uint32_t *)v2 + 14) = v19 + 500;
  v20 = *v18;
  *((uint32_t *)v2 + 12) = v19;
  *((uint32_t *)v2 + 17) = v20;
  *((uint32_t *)v2 + 16) = v20;
  *((uint32_t *)v2 + 18) = v20 + 500;
  *((uint32_t *)v2 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)v2 + 26) = (uint32_t)(uintptr_t)(&dword_213B814);
  result = (glwebtools::Json::Reader::Self *)*(uint16_t *)a2;
  *((uint16_t *)v2 + 54) = (uint16_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::valueToQuotedString  (binary VA: 0x13fb480)
// Original: glwebtools::Json::valueToQuotedString
// ----------------------------------------------------------------------------
glwebtools::Json::Self * glwebtools::Json::valueToQuotedString(glwebtools::Json::Self *self, char *s)
{
  char *v2;
  size_t v3;
  char v4;
  bool v5; // cc
  int (**v6)(int);
  char *v7;
  int v8;
  char v9;
  uint32_t *v10;
  uint32_t *v11;
  void *v12;
  int v14;
  int v15;
  char *v16;
  char v17;
  size_t v18;
  void *v19;
  void *v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25;
  typedef void *_g4_t_v26;
  typedef uint8_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int (**_g4_t_v35)(int);
  typedef int (**_g4_t_v36)(int);
  typedef uint32_t _g4_t_v37[2];
  typedef int _g4_t_v38;
  typedef void *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[4];
  typedef int _g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t _g4_t_v45[29];
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v23)) > _g4_s2 ? (20u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v26)) > _g4_s5 ? (24u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v27)) > _g4_s6 ? (24u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (42u + sizeof(_g4_t_v28)) > _g4_s7 ? (42u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v29)) > _g4_s8 ? (52u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v30)) > _g4_s9 ? (56u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v31)) > _g4_s10 ? (60u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v32)) > _g4_s11 ? (64u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v33)) > _g4_s12 ? (68u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v34)) > _g4_s13 ? (72u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v35)) > _g4_s14 ? (76u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v36)) > _g4_s15 ? (80u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v37)) > _g4_s16 ? (84u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v38)) > _g4_s17 ? (92u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v39)) > _g4_s18 ? (96u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v40)) > _g4_s19 ? (100u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v41)) > _g4_s20 ? (104u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v42)) > _g4_s21 ? (108u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v43)) > _g4_s22 ? (112u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v44)) > _g4_s23 ? (116u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v45)) > _g4_s24 ? (120u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (236u + sizeof(_g4_t_v46)) > _g4_s25 ? (236u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (237u + sizeof(_g4_t_v47)) > _g4_s26 ? (237u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (240u + sizeof(_g4_t_v48)) > _g4_s27 ? (240u + sizeof(_g4_t_v48)) : _g4_s27,
    _g4_s29 = (244u + sizeof(_g4_t_v49)) > _g4_s28 ? (244u + sizeof(_g4_t_v49)) : _g4_s28,
    _g4_s30 = (248u + sizeof(_g4_t_v50)) > _g4_s29 ? (248u + sizeof(_g4_t_v50)) : _g4_s29,
    _g4_s31 = (252u + sizeof(_g4_t_v51)) > _g4_s30 ? (252u + sizeof(_g4_t_v51)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 42u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 116u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 120u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 236u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 237u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 240u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 244u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 248u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 252u);

  v2 = s;
  if ( strpbrk(s, (const char *)asc_1B69B5E) == nullptr )
  {
    v16 = s;
    do
    {
      v17 = *v16;
      if ( *v16 == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "\"", (int)(uintptr_t)(&v28));
        g4_std::string::construct_copy(&v30, &v29);
        v18 = strlen(s);
        g4_std::string::append((int)(uintptr_t)(&v30), s, v18);
        g4_std::string::construct_copy(self, &v30);
        g4_std::string::append((int)(uintptr_t)(self), "\"", 1u);
        v19 = (void *)(v30 - 12);
        if ( (uint32_t *)(v30 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v19);
        }
        v20 = (void *)(v29 - 12);
        if ( (uint32_t *)(v29 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v20);
        }
        return self;
      }
      ++v16;
    }
    while ( (uint8_t)(v17 - 1) > 0x1Eu );
  }
  v3 = strlen(s);
  v31 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(&v31, 2 * v3 + 3);
  g4_std::string::append((int)(uintptr_t)(&v31), "\"", 1u);
  v4 = *s;
  if ( *s == 0 )
    goto LABEL_20;
  while ( 1 )
  {
    v5 = v4 <= 12;
    if ( v4 == 12 )
      break;
LABEL_4:
    if ( v5 )
    {
      switch ( v4 )
      {
        case 9:
          g4_std::string::append((int)(uintptr_t)(&v31), &unk_1B69B78, 2u);
          goto LABEL_26;
        case 10:
          g4_std::string::append((int)(uintptr_t)(&v31), &unk_1B69B72, 2u);
          goto LABEL_26;
        case 8:
          g4_std::string::append((int)(uintptr_t)(&v31), &unk_1B69B6C, 2u);
          goto LABEL_26;
        default:
          break;
      }
    }
    else
    {
      switch ( v4 )
      {
        case 34:
          g4_std::string::append((int)(uintptr_t)(&v31), &unk_1B69B66, 2u);
          goto LABEL_26;
        case 92:
          g4_std::string::append((int)(uintptr_t)(&v31), &unk_1B69B69, 2u);
          goto LABEL_26;
        case 13:
          g4_std::string::append((int)(uintptr_t)(&v31), &unk_1B69B75, 2u);
          goto LABEL_26;
        default:
          break;
      }
    }
    if ( (uint8_t)(v4 - 1) > 0x1Eu )
    {
      v14 = v31;
      v21 = *(uint32_t *)(v31 - 12);
      v27 = (uint8_t *)(v21 + 1);
      if ( (unsigned int)(v21 + 1) > *(uint32_t *)(v31 - 8) || *(int *)(v31 - 4) > 0 )
      {
        v23 = v4;
        sub_1939B80(&v31, v27);
        v14 = v31;
        v4 = v23;
        v21 = *(uint32_t *)(v31 - 12);
      }
      *(uint8_t *)(v14 + v21) = v4;
      v15 = v31;
      if ( (uint32_t *)(v31 - 12) != dword_213B808 )
      {
        *(uint32_t *)(v31 - 4) = 0;
        *(uint32_t *)(v15 - 12) = (uint32_t)(uintptr_t)(v27);
        v27[v15] = 0;
      }
      goto LABEL_26;
    }
    sub_1900810(v45);
    v45[28] = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v45[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v51 = 0;
    v35 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(int (***)(int))((char *)&v35 + (uint32_t)*(&off_20AAE6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE80);
    sub_19119D0((char *)&v35 + (uint32_t)(uintptr_t)(*(v35 - 3)), 0);
    v37[0] = 0;
    v37[1] = 0;
    v38 = 0;
    v39 = nullptr;
    v40 = 0;
    v41 = 0;
    v35 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v45[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v36 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v42);
    v43 = 16;
    v36 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v44 = &dword_213B814;
    sub_19119D0(v45, &v36);
    v25 = *v2;
    g4_std_compat::ostream_write(&v35, "\\u", 2);
    v6 = v35;
    *(int (***)(int))((char *)&v35 + (uint32_t)(uintptr_t)(*(v35 - 3)) + 12) = (int (**)(int))(*(int *)((uint8_t *)&v35 + (uint32_t)(uintptr_t)(*(v35 - 3)) + 12)
                                                                                              & 0xFFFFFFB5
                                                                                              | 8);
    *(int (***)(int))((char *)&v35 + (uint32_t)(uintptr_t)(*(v6 - 3)) + 12) = (int (**)(int))(*(int *)((char *)&v35 + (uint32_t)(uintptr_t)(*(v6 - 3)) + 12)
                                                                                             | 0x4000);
    v7 = (char *)&v35 + (uint32_t)(uintptr_t)(*(v6 - 3));
    if ( v7[117] == 0 )
    {
      v8 = *((uint32_t *)v7 + 31);
      if ( v8 == 0 )
        sub_18FFF30(v7);
      if ( *(uint8_t *)(v8 + 28) != 0 )
      {
        v9 = *(uint8_t *)(v8 + 61);
      }
      else
      {
        v22 = (char *)&v35 + (uint32_t)(uintptr_t)(*(v6 - 3));
        v24 = *((uint32_t *)v7 + 31);
        sub_18FFC70(v8);
        v9 = G4_VCALL<int>(v24, 24, 32);
        v7 = v22;
        v6 = v35;
      }
      v7[116] = v9;
      v7[117] = 1;
    }
    v7[116] = 48;
    *(uint32_t *)((char *)v37 + (uint32_t)(uintptr_t)(*(v6 - 3))) = 4;
    g4_std::ostream::op_shl_int(&v35, v25);
    v32 = &dword_213B814;
    if ( v40 != 0 )
    {
      if ( v40 <= (unsigned int)v38 )
      {
        sub_11A9950(&v33, v39, (uint8_t *)v38);
        g4_std::string::assign_str(&v32, &v33);
        v26 = (void *)(v33 - 12);
        if ( (uint32_t *)(v33 - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_17;
        }
      }
      else
      {
        sub_11A9950(&v34, v39, (uint8_t *)v40);
        g4_std::string::assign_str(&v32, &v34);
        v26 = (void *)(v34 - 12);
        if ( (uint32_t *)(v34 - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_17;
        }
      }
      g4_std::string::Rep::M_destroy(v26);
    }
    else
    {
      g4_std::string::assign_str(&v32, &v44);
    }
LABEL_17:
    g4_std::string::append_str(&v31, &v32);
    v10 = v32 - 3;
    if ( v32 - 3 != dword_213B808 && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v10);
    v35 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v45[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v36 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v11 = v44 - 3;
    if ( v44 - 3 != dword_213B808 && __sync_fetch_and_add(v44 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v11);
    ++v2;
    v36 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1902180(v42);
    v35 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(int (***)(int))((char *)&v35 + (uint32_t)*(&off_20AAE6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE80);
    v45[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v45);
    v4 = *v2;
    if ( *v2 == 0 )
      goto LABEL_20;
  }
  while ( 1 )
  {
    g4_std::string::append((int)(uintptr_t)(&v31), &unk_1B69B6F, 2u);
LABEL_26:
    v4 = *++v2;
    if ( *v2 == 0 )
      break;
    v5 = v4 <= 12;
    if ( v4 != 12 )
      goto LABEL_4;
  }
LABEL_20:
  g4_std::string::append((int)(uintptr_t)(&v31), "\"", 1u);
  g4_std::string::construct_copy(self, &v31);
  v12 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::writeValue  (binary VA: 0x13fbc80)
// Original: glwebtools::Json::StyledStreamWriter::writeValue
// ----------------------------------------------------------------------------
void glwebtools::Json::StyledStreamWriter::writeValue(glwebtools::Json::StyledStreamWriter::Self *self, const glwebtools::Json::Value::Self *a2)
{
  void *v2;
  const char **v3;
  const glwebtools::Json::Value::Self *v4;
  void *v5;
  void *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  void *v10;
  int v11;
  void *v12;
  unsigned int v13;
  void *v14;
  long double v15; // fst7
  void *v16;
  char *v17;
  void *v18;
  char v19;
  void *v20;
  void *v21;
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
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (13u + sizeof(_g4_t_v22)) > _g4_s0 ? (13u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v23)) > _g4_s1 ? (20u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v24)) > _g4_s2 ? (28u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v25)) > _g4_s3 ? (32u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v26)) > _g4_s4 ? (36u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v27)) > _g4_s5 ? (40u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v28)) > _g4_s6 ? (44u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v29)) > _g4_s7 ? (48u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v30)) > _g4_s8 ? (52u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v31)) > _g4_s9 ? (56u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v32)) > _g4_s10 ? (60u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v33)) > _g4_s11 ? (64u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v34)) > _g4_s12 ? (68u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v35)) > _g4_s13 ? (72u + sizeof(_g4_t_v35)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 13u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);

  switch ( glwebtools::Json::Value::type((glwebtools::Json::Value::Self *)(a2)) )
  {
    case 0:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "null", (int)(uintptr_t)(&v22));
      glwebtools::Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v24));
      v10 = (void *)(v24 - 12);
      if ( (uint32_t *)(v24 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      break;
    case 1:
      v11 = glwebtools::Json::Value::asInt(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v25, v11);
      glwebtools::Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v25));
      v12 = (void *)(v25 - 12);
      if ( (uint32_t *)(v25 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      break;
    case 2:
      v13 = glwebtools::Json::Value::asUInt(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v26, v13);
      glwebtools::Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v26));
      v14 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      break;
    case 3:
      v15 = glwebtools::Json::Value::asDouble(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v27, v15);
      glwebtools::Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v27));
      v16 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      break;
    case 4:
      v17 = (char *)glwebtools::Json::Value::asCString(a2);
      glwebtools::Json::valueToQuotedString((glwebtools::Json::Self *)&v28, v17);
      glwebtools::Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v28));
      v18 = (void *)(v28 - 12);
      if ( (uint32_t *)(v28 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v18);
      }
      break;
    case 5:
      v19 = glwebtools::Json::Value::asBool(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v29, v19);
      glwebtools::Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v29));
      v20 = (void *)(v29 - 12);
      if ( (uint32_t *)(v29 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v20);
      }
      break;
    case 6:
      glwebtools::Json::StyledStreamWriter::writeArrayValue(self, a2);
      break;
    case 7:
      glwebtools::Json::Value::getMemberNames((glwebtools::Json::Value::Self *)&v34, (uint8_t *)(a2));
      if ( v35 == v34 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "{}", (int)(uintptr_t)(&v23));
        glwebtools::Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v30));
        v21 = (void *)(v30 - 12);
        if ( (uint32_t *)(v30 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v21);
        }
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "{", (int)(uintptr_t)(&v23) + 1);
        glwebtools::Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(&v31));
        v2 = (void *)(v31 - 12);
        if ( (uint32_t *)(v31 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v2);
        }
        glwebtools::Json::StyledStreamWriter::indent(self);
        v3 = (const char **)v34;
        while ( 1 )
        {
          v4 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v3);
          glwebtools::Json::StyledStreamWriter::writeCommentBeforeValue(self, v4);
          glwebtools::Json::valueToQuotedString((glwebtools::Json::Self *)&v32, (char *)*v3);
          glwebtools::Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(&v32));
          v5 = (void *)(v32 - 12);
          if ( (uint32_t *)(v32 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          ++v3;
          g4_std_compat::ostream_write(*((uint32_t *)self + 3), " : ", 3);
          glwebtools::Json::StyledStreamWriter::writeValue(self, v4);
          if ( v35 == (uint32_t *)(uintptr_t)(v3) )
            break;
          g4_std_compat::ostream_write(*((uint32_t *)self + 3), ",", 1);
          glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(self, v4);
        }
        glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(self, v4);
        glwebtools::Json::StyledStreamWriter::unindent(self);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "}", (int)(uintptr_t)(&v23) + 2);
        glwebtools::Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(&v33));
        v6 = (void *)(v33 - 12);
        if ( (uint32_t *)(v33 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
      }
      v7 = v35;
      v8 = (uint32_t *)(v34);
      if ( v35 != v34 )
      {
        do
        {
          v9 = (uint32_t *)(*v8 - 12);
          if ( v9 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v8 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v9);
          ++v8;
        }
        while ( v7 != v8 );
        v8 = (uint32_t *)(v34);
      }
      if ( v8 != nullptr )
        opDelete(v8);
      break;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::isMultineArray  (binary VA: 0x13fc230)
// Original: glwebtools::Json::StyledStreamWriter::isMultineArray
// ----------------------------------------------------------------------------
bool glwebtools::Json::StyledStreamWriter::isMultineArray(glwebtools::Json::StyledStreamWriter::Self *self, const glwebtools::Json::Value::Self *a2)
{
  glwebtools::Json::StyledStreamWriter::Self *v2;
  signed int v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  unsigned int v7;
  bool result;
  glwebtools::Json::Value::Self *v9;
  char isObject;
  int v11;
  unsigned int v12;
  int v13;
  const glwebtools::Json::Value::Self *v14;
  int v15;
  bool v16;
  bool v17;
  std::vector<std::string> *v18;
  std::vector<std::string> *v19;
  bool v20;
  signed int v21;

  v2 = self;
  v3 = glwebtools::Json::Value::size(a2);
  v18 = *(std::vector<std::string> **)self;
  v20 = 3 * v3 >= *((uint32_t *)self + 5);
  if ( *(uint32_t *)self != *((uint32_t *)self + 1) )
  {
    v21 = v3;
    v4 = *(uint32_t **)self;
    v5 = *((uint32_t **)self + 1);
    do
    {
      v6 = (uint32_t *)(*v4 - 12);
      if ( v6 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v6);
      ++v4;
    }
    while ( v5 != v4 );
    v3 = v21;
  }
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v18);
  if ( v3 <= 0 )
  {
    result = v20;
  }
  else
  {
    v7 = 0;
    result = v20;
    if ( v20 )
      return result;
    while ( 1 )
    {
      v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v7);
      if ( (uint8_t)glwebtools::Json::Value::isArray(v9) != 0
        || (isObject = glwebtools::Json::Value::isObject(v9), result = false, isObject != 0) )
      {
        result = glwebtools::Json::Value::size(v9) != 0;
      }
      if ( v3 == ++v7 )
        break;
      if ( result )
        return result;
    }
    v2 = self;
  }
  if ( !result )
  {
    g4_std::vector_string_86c307::reserve(v2, v3);
    *((uint8_t *)v2 + 28) = 1;
    v11 = 2 * v3 + 2;
    if ( v3 > 0 )
    {
      v19 = (std::vector<std::string> *)v3;
      v12 = 0;
      v13 = 2 * v3 + 2;
      do
      {
        v14 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v12);
        glwebtools::Json::StyledStreamWriter::writeValue(v2, v14);
        v15 = *(uint32_t *)(*(uint32_t *)v2 + 4 * v12++);
        v13 += *(uint32_t *)(v15 - 12);
      }
      while ( v19 != (std::vector<std::string> *)v12 );
      v11 = v13;
    }
    v17 = __OFSUB__(v11, *((uint32_t *)v2 + 5));
    v16 = v11 - *((uint32_t *)v2 + 5) < 0;
    *((uint8_t *)v2 + 28) = 0;
    return v16 == v17;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::writeArrayValue  (binary VA: 0x13fc3b0)
// Original: glwebtools::Json::StyledStreamWriter::writeArrayValue
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledStreamWriter::writeArrayValue(glwebtools::Json::StyledStreamWriter::Self *self, const glwebtools::Json::Value::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  void *v6;
  void *v7;
  unsigned int v8;
  const glwebtools::Json::Value::Self *v9;
  void *v10;
  typedef glwebtools::Json::Value::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v12)) > _g4_s1 ? (32u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v13)) > _g4_s2 ? (36u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v14)) > _g4_s3 ? (40u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (62u + sizeof(_g4_t_v15)) > _g4_s4 ? (62u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v16)) > _g4_s5 ? (64u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v17)) > _g4_s6 ? (68u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v18)) > _g4_s7 ? (72u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v19)) > _g4_s8 ? (76u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 62u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);

  v2 = glwebtools::Json::Value::size(a2);
  if ( v2 != 0 )
  {
    if ( !glwebtools::Json::StyledStreamWriter::isMultineArray(self, a2) )
    {
      if ( v2 != (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2 )
        __assert2(
          "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/jsoncpp/../../../source/glwebtools/jsoncpp/glwebtools_json_writer.cpp",
          664,
          "void glwebtools::Json::StyledStreamWriter::writeArrayValue(const glwebtools::Json::Value::Self&)",
          "childValues_.size() == size");
      v3 = 0;
      g4_std_compat::ostream_write(*((uint32_t *)self + 3), "[ ", 2);
      while ( 1 )
      {
        v4 = *(uint32_t *)(*(uint32_t *)self + 4 * v3++);
        g4_std_compat::ostream_write(*((uint32_t *)self + 3), v4, *(uint32_t *)(v4 - 12));
        if ( v3 == v2 )
          break;
        if ( v3 != 0 )
          g4_std_compat::ostream_write(*((uint32_t *)self + 3), ", ", 2);
      }
      return (int)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)self + 3), " ]", 2));
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "[", (int)(uintptr_t)(&v15) + 1);
    glwebtools::Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(&v18));
    v7 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = 0;
    glwebtools::Json::StyledStreamWriter::indent(self);
    v14 = v2;
    v12 = *((uint32_t *)self + 1);
    v13 = *(uint32_t *)self;
    while ( 1 )
    {
      v9 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v8);
      glwebtools::Json::StyledStreamWriter::writeCommentBeforeValue(self, v9);
      if ( v12 == v13 )
      {
        ++v8;
        glwebtools::Json::StyledStreamWriter::writeIndent(self);
        glwebtools::Json::StyledStreamWriter::writeValue(self, v9);
        if ( v14 == v8 )
        {
LABEL_20:
          glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(self, v9);
          glwebtools::Json::StyledStreamWriter::unindent(self);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "]", (int)(uintptr_t)(&v16));
          glwebtools::Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(v19));
          result = v19[0];
          v10 = (void *)(v19[0] - 12);
          if ( (uint32_t *)(v19[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            return ((g4_std::string::Rep::M_destroy(v10)), (int)0);
          }
          return result;
        }
      }
      else
      {
        v11 = (glwebtools::Json::Value::Self *)(*(uint32_t *)self + 4 * v8++);
        glwebtools::Json::StyledStreamWriter::writeWithIndent(self, (uint32_t *)(v11));
        if ( v14 == v8 )
          goto LABEL_20;
      }
      g4_std_compat::ostream_write(*((uint32_t *)self + 3), ",", 1);
      glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(self, v9);
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "[]", (int)(uintptr_t)(&v15));
  glwebtools::Json::StyledStreamWriter::pushValue((int)(uintptr_t)(self), (uint32_t *)(&v17));
  result = v17;
  v6 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v6)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledStreamWriter::write  (binary VA: 0x13fc6b0)
// Original: glwebtools::Json::StyledStreamWriter::write
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledStreamWriter::write(glwebtools::Json::StyledStreamWriter::Self *a1, int a2, glwebtools::Json::Value::Self *a3)
{
  int result;

  *((uint32_t *)a1 + 3) = a2;
  *((uint8_t *)a1 + 28) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(a1) + 16, &unk_1B15112, 0);
  glwebtools::Json::StyledStreamWriter::writeCommentBeforeValue(a1, a3);
  glwebtools::Json::StyledStreamWriter::writeValue(a1, a3);
  glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(a1, a3);
  result = (int)(uintptr_t)(g4_std_compat::ostream_write(*((uint32_t *)a1 + 3), &a0[1], 1));
  *((uint32_t *)a1 + 3) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::opShl  (binary VA: 0x13fc760)
// Original: glwebtools::Json::operator<<
// ----------------------------------------------------------------------------
int glwebtools::Json::opShl(int a1, glwebtools::Json::Value::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef void *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (7u + sizeof(_g4_t_v9)) > _g4_s0 ? (7u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v14)) > _g4_s5 ? (40u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 7u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "\t", (int)(uintptr_t)(&v9));
  glwebtools::Json::StyledStreamWriter::Construct((uint32_t *)(&v11), (int)(uintptr_t)(&v10));
  v2 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  glwebtools::Json::StyledStreamWriter::write((glwebtools::Json::StyledStreamWriter::Self *)&v11, a1, a2);
  v3 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = v12;
  v6 = (uint32_t *)(v11);
  if ( v12 != v11 )
  {
    do
    {
      v7 = (uint32_t *)(*v6 - 12);
      if ( v7 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v6 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v7);
      ++v6;
    }
    while ( v5 != v6 );
    v6 = (uint32_t *)(v11);
  }
  if ( v6 != nullptr )
    opDelete(v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::writeValue  (binary VA: 0x13fc8c0)
// Original: glwebtools::Json::StyledWriter::writeValue
// ----------------------------------------------------------------------------
void glwebtools::Json::StyledWriter::writeValue(glwebtools::Json::StyledWriter::Self *a1, glwebtools::Json::Value::Self *a2, int *a3)
{
  void *v3;
  const char **v4;
  void *v5;
  void *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  void *v10;
  int v11;
  void *v12;
  unsigned int v13;
  void *v14;
  long double v15; // fst7
  void *v16;
  char *v17;
  void *v18;
  char v19;
  void *v20;
  void *v21;
  typedef glwebtools::Json::Value::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef void *_g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v23)) > _g4_s1 ? (29u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v24)) > _g4_s2 ? (36u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v25)) > _g4_s3 ? (44u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v26)) > _g4_s4 ? (48u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v27)) > _g4_s5 ? (52u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v28)) > _g4_s6 ? (56u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v29)) > _g4_s7 ? (60u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v30)) > _g4_s8 ? (64u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v31)) > _g4_s9 ? (68u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v32)) > _g4_s10 ? (72u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v33)) > _g4_s11 ? (76u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v34)) > _g4_s12 ? (80u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v35)) > _g4_s13 ? (84u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v36)) > _g4_s14 ? (88u + sizeof(_g4_t_v36)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 29u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);

  switch ( glwebtools::Json::Value::type(a2) )
  {
    case 0:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "null", (int)(uintptr_t)(&v23));
      glwebtools::Json::StyledWriter::pushValue((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), (int)(uintptr_t)(a3));
      v10 = (void *)(v25 - 12);
      if ( (uint32_t *)(v25 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      break;
    case 1:
      v11 = glwebtools::Json::Value::asInt(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v26, v11);
      glwebtools::Json::StyledWriter::pushValue((int)(uintptr_t)(a1), (int)(uintptr_t)(&v26), (int)(uintptr_t)(a3));
      v12 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      break;
    case 2:
      v13 = glwebtools::Json::Value::asUInt(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v27, v13);
      glwebtools::Json::StyledWriter::pushValue((int)(uintptr_t)(a1), (int)(uintptr_t)(&v27), (int)(uintptr_t)(a3));
      v14 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      break;
    case 3:
      v15 = glwebtools::Json::Value::asDouble(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v28, v15);
      glwebtools::Json::StyledWriter::pushValue((int)(uintptr_t)(a1), (int)(uintptr_t)(&v28), (int)(uintptr_t)(a3));
      v16 = (void *)(v28 - 12);
      if ( (uint32_t *)(v28 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      break;
    case 4:
      v17 = (char *)glwebtools::Json::Value::asCString(a2);
      glwebtools::Json::valueToQuotedString((glwebtools::Json::Self *)&v29, v17);
      glwebtools::Json::StyledWriter::pushValue((int)(uintptr_t)(a1), (int)(uintptr_t)(&v29), (int)(uintptr_t)(a3));
      v18 = (void *)(v29 - 12);
      if ( (uint32_t *)(v29 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v18);
      }
      break;
    case 5:
      v19 = glwebtools::Json::Value::asBool(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v30, v19);
      glwebtools::Json::StyledWriter::pushValue((int)(uintptr_t)(a1), (int)(uintptr_t)(&v30), (int)(uintptr_t)(a3));
      v20 = (void *)(v30 - 12);
      if ( (uint32_t *)(v30 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v20);
      }
      break;
    case 6:
      glwebtools::Json::StyledWriter::writeArrayValue(a1, a2, (int)(uintptr_t)(a3));
      break;
    case 7:
      glwebtools::Json::Value::getMemberNames((glwebtools::Json::Value::Self *)&v35, (uint8_t *)(a2));
      if ( v36 == v35 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "{}", (int)(uintptr_t)(&v24));
        glwebtools::Json::StyledWriter::pushValue((int)(uintptr_t)(a1), (int)(uintptr_t)(&v31), (int)(uintptr_t)(a3));
        v21 = (void *)(v31 - 12);
        if ( (uint32_t *)(v31 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v21);
        }
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "{", (int)(uintptr_t)(&v24) + 1);
        glwebtools::Json::StyledWriter::writeWithIndent((int)(uintptr_t)(a1), (int)(uintptr_t)(&v32), a3);
        v3 = (void *)(v32 - 12);
        if ( (uint32_t *)(v32 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v3);
        }
        glwebtools::Json::StyledWriter::indent(a1);
        v4 = (const char **)v35;
        while ( 1 )
        {
          v22 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v4);
          glwebtools::Json::StyledWriter::writeCommentBeforeValue((int)(uintptr_t)(a1), (int)(uintptr_t)(v22), (int)(uintptr_t)(a3));
          glwebtools::Json::valueToQuotedString((glwebtools::Json::Self *)&v33, (char *)*v4);
          glwebtools::Json::StyledWriter::writeWithIndent((int)(uintptr_t)(a1), (int)(uintptr_t)(&v33), a3);
          v5 = (void *)(v33 - 12);
          if ( (uint32_t *)(v33 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          g4_std::string::append((int)(uintptr_t)(a3), " : ", 3u);
          ++v4;
          glwebtools::Json::StyledWriter::writeValue(a1, v22, (int *)(uintptr_t)((int)(uintptr_t)(a3)));
          if ( v36 == (uint32_t *)(uintptr_t)(v4) )
            break;
          g4_std::string::append((int)(uintptr_t)(a3), ",", 1u);
          glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine((int)(uintptr_t)(a1), (int)(uintptr_t)(v22), (int)(uintptr_t)(a3));
        }
        glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine((int)(uintptr_t)(a1), (int)(uintptr_t)(v22), (int)(uintptr_t)(a3));
        glwebtools::Json::StyledWriter::unindent(a1);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "}", (int)(uintptr_t)(&v24) + 2);
        glwebtools::Json::StyledWriter::writeWithIndent((int)(uintptr_t)(a1), (int)(uintptr_t)(&v34), a3);
        v6 = (void *)(v34 - 12);
        if ( (uint32_t *)(v34 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
      }
      v7 = v36;
      v8 = (uint32_t *)(v35);
      if ( v36 != v35 )
      {
        do
        {
          v9 = (uint32_t *)(*v8 - 12);
          if ( v9 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v8 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v9);
          ++v8;
        }
        while ( v7 != v8 );
        v8 = (uint32_t *)(v35);
      }
      if ( v8 != nullptr )
        opDelete(v8);
      break;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::isMultineArray  (binary VA: 0x13fcec0)
// Original: glwebtools::Json::StyledWriter::isMultineArray
// ----------------------------------------------------------------------------
bool glwebtools::Json::StyledWriter::isMultineArray(uint32_t *a1, glwebtools::Json::Value::Self *a2, int *a3)
{
  int v3;
  signed int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  unsigned int v8;
  bool result;
  glwebtools::Json::Value::Self *v10;
  char isObject;
  int v12;
  unsigned int v13;
  int v14;
  glwebtools::Json::Value::Self *v15;
  int v16;
  bool v17;
  bool v18;
  glwebtools::Json::StyledWriter::Self *v19;
  glwebtools::Json::StyledWriter::Self *v20;
  bool v21;
  signed int v22;

  v3 = (int)(uintptr_t)(a1);
  v4 = glwebtools::Json::Value::size(a2);
  v19 = (glwebtools::Json::StyledWriter::Self *)a1[1];
  v21 = 3 * v4 >= a1[5];
  if ( v19 != (glwebtools::Json::StyledWriter::Self *)a1[2] )
  {
    v22 = v4;
    v5 = (uint32_t *)a1[1];
    v6 = (uint32_t *)a1[2];
    do
    {
      v7 = (uint32_t *)(*v5 - 12);
      if ( v7 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v5 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v7);
      ++v5;
    }
    while ( v6 != v5 );
    v4 = v22;
  }
  a1[2] = (uint32_t)(uintptr_t)(v19);
  if ( v4 <= 0 )
  {
    result = v21;
  }
  else
  {
    v8 = 0;
    result = v21;
    if ( v21 )
      return result;
    while ( 1 )
    {
      v10 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v8);
      if ( (uint8_t)glwebtools::Json::Value::isArray(v10) != 0
        || (isObject = glwebtools::Json::Value::isObject(v10), result = false, isObject != 0) )
      {
        result = glwebtools::Json::Value::size(v10) != 0;
      }
      if ( v4 == ++v8 )
        break;
      if ( result )
        return result;
    }
    v3 = (int)(uintptr_t)(a1);
  }
  if ( !result )
  {
    g4_std::vector_string_86c307::reserve((std::vector<std::string> *)(v3 + 4), v4);
    *(uint8_t *)(v3 + 28) = 1;
    v12 = 2 * v4 + 2;
    if ( v4 > 0 )
    {
      v20 = (glwebtools::Json::StyledWriter::Self *)v4;
      v13 = 0;
      v14 = 2 * v4 + 2;
      do
      {
        v15 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v13);
        glwebtools::Json::StyledWriter::writeValue((glwebtools::Json::StyledWriter::Self *)v3, v15, a3);
        v16 = *(uint32_t *)(*(uint32_t *)(v3 + 4) + 4 * v13++);
        v14 += *(uint32_t *)(v16 - 12);
      }
      while ( v20 != (glwebtools::Json::StyledWriter::Self *)v13 );
      v12 = v14;
    }
    v18 = __OFSUB__(v12, *(uint32_t *)(v3 + 20));
    v17 = v12 - *(uint32_t *)(v3 + 20) < 0;
    *(uint8_t *)(v3 + 28) = 0;
    return v17 == v18;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::writeArrayValue  (binary VA: 0x13fd050)
// Original: glwebtools::Json::StyledWriter::writeArrayValue
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledWriter::writeArrayValue(glwebtools::Json::StyledWriter::Self *a1, glwebtools::Json::Value::Self *a2, int *a3)
{
  int v3;
  int result;
  void *v5;
  void *v6;
  unsigned int v7;
  int v8;
  void *v9;
  typedef glwebtools::Json::Value::Self *_g4_t_v10;
  typedef glwebtools::Json::Value::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v14)) > _g4_s4 ? (40u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (62u + sizeof(_g4_t_v15)) > _g4_s5 ? (62u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v16)) > _g4_s6 ? (64u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v17)) > _g4_s7 ? (68u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v18)) > _g4_s8 ? (72u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v19)) > _g4_s9 ? (76u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 62u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);

  v12 = glwebtools::Json::Value::size(a2);
  if ( v12 != 0 )
  {
    if ( !glwebtools::Json::StyledWriter::isMultineArray((uint32_t *)(a1), a2, a3) )
    {
      if ( v12 != (*((uint32_t *)a1 + 2) - *((uint32_t *)a1 + 1)) >> 2 )
        __assert2(
          "F:/G4/G4_UP8Shop/lib/glwebtools/source/glwebtools/jsoncpp/../../../source/glwebtools/jsoncpp/glwebtools_json_writer.cpp",
          388,
          "void glwebtools::Json::StyledWriter::writeArrayValue(const glwebtools::Json::Value::Self&, std::string&)",
          "childValues_.size() == size");
      v3 = 0;
      g4_std::string::append((int)(uintptr_t)(a3), "[ ", 2u);
      while ( 1 )
      {
        v10 = (glwebtools::Json::Value::Self *)(*((uint32_t *)a1 + 1) + 4 * v3++);
        g4_std::string::append_str(a3, v10);
        if ( v3 == v12 )
          break;
        if ( v3 != 0 )
          g4_std::string::append((int)(uintptr_t)(a3), ", ", 2u);
      }
      return (int)(uintptr_t)(g4_std::string::append((int)(uintptr_t)(a3), " ]", 2u));
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "[", (int)(uintptr_t)(&v15) + 1);
    glwebtools::Json::StyledWriter::writeWithIndent((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), a3);
    v6 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = 0;
    glwebtools::Json::StyledWriter::indent(a1);
    v13 = *((uint32_t *)a1 + 2);
    v14 = *((uint32_t *)a1 + 1);
    while ( 1 )
    {
      v11 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v7);
      glwebtools::Json::StyledWriter::writeCommentBeforeValue((int)(uintptr_t)(a1), (int)(uintptr_t)(v11), (int)(uintptr_t)(a3));
      if ( v13 == v14 )
      {
        glwebtools::Json::StyledWriter::writeIndent((int)(uintptr_t)(a1), a3);
        ++v7;
        glwebtools::Json::StyledWriter::writeValue(a1, v11, a3);
        if ( v12 == v7 )
        {
LABEL_20:
          glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine((int)(uintptr_t)(a1), (int)(uintptr_t)(v11), (int)(uintptr_t)(a3));
          glwebtools::Json::StyledWriter::unindent(a1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "]", (int)(uintptr_t)(&v16));
          glwebtools::Json::StyledWriter::writeWithIndent((int)(uintptr_t)(a1), (int)(uintptr_t)(v19), a3);
          result = v19[0];
          v9 = (void *)(v19[0] - 12);
          if ( (uint32_t *)(v19[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            return ((g4_std::string::Rep::M_destroy(v9)), (int)0);
          }
          return result;
        }
      }
      else
      {
        v8 = *((uint32_t *)a1 + 1) + 4 * v7++;
        glwebtools::Json::StyledWriter::writeWithIndent((int)(uintptr_t)(a1), v8, a3);
        if ( v12 == v7 )
          goto LABEL_20;
      }
      g4_std::string::append((int)(uintptr_t)(a3), ",", 1u);
      glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine((int)(uintptr_t)(a1), (int)(uintptr_t)(v11), (int)(uintptr_t)(a3));
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "[]", (int)(uintptr_t)(&v15));
  glwebtools::Json::StyledWriter::pushValue((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), (int)(uintptr_t)(a3));
  result = v17;
  v5 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v5)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::writeToString  (binary VA: 0x13fd390)
// Original: glwebtools::Json::StyledWriter::writeToString
// ----------------------------------------------------------------------------
int glwebtools::Json::StyledWriter::writeToString(glwebtools::Json::StyledWriter::Self *a1, glwebtools::Json::Value::Self *a2, int *a3)
{
  g4_std::string::clear(a3, 0, *(uint32_t *)(*a3 - 12), 0);
  *((uint8_t *)a1 + 28) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(a1) + 16, &unk_1B15112, 0);
  glwebtools::Json::StyledWriter::writeCommentBeforeValue((int)(uintptr_t)(a1), (int)(uintptr_t)(a2), (int)(uintptr_t)(a3));
  glwebtools::Json::StyledWriter::writeValue(a1, a2, a3);
  glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine((int)(uintptr_t)(a1), (int)(uintptr_t)(a2), (int)(uintptr_t)(a3));
  return (int)(uintptr_t)(g4_std::string::append((int)(uintptr_t)(a3), &a0[1], 1u));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::toStyledString  (binary VA: 0x13fd460)
// Original: glwebtools::Json::Value::toStyledString
// ----------------------------------------------------------------------------
void glwebtools::Json::Value::toStyledString(glwebtools::Json::Value::Self *a1, int *a2)
{
  void *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef void (**_g4_t_v6)(glwebtools::Json::StyledWriter::Self *);
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  glwebtools::Json::StyledWriter::Construct((glwebtools::Json::StyledWriter::Self *)&v6);
  glwebtools::Json::StyledWriter::writeToString((glwebtools::Json::StyledWriter::Self *)&v6, a1, a2);
  v6 = (void (**)(glwebtools::Json::StyledWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2094E38));
  v2 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = v8;
  v4 = (uint32_t *)(v7);
  if ( v8 != v7 )
  {
    do
    {
      v5 = (uint32_t *)(*v4 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v5);
      ++v4;
    }
    while ( v3 != v4 );
    v4 = (uint32_t *)(v7);
  }
  if ( v4 != nullptr )
    opDelete(v4);
  glwebtools::Json::Writer::Destroy((glwebtools::Json::Writer::Self *)&v6);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::FastWriter::writeValue  (binary VA: 0x13fd540)
// Original: glwebtools::Json::FastWriter::writeValue
// ----------------------------------------------------------------------------
void glwebtools::Json::FastWriter::writeValue(int a1, glwebtools::Json::Value::Self *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  signed int v6;
  glwebtools::Json::Value::Self *v7;
  char **v8;
  void *v9;
  size_t v10;
  char *v11;
  glwebtools::Json::Value::Self *v12;
  int v13;
  void *v14;
  unsigned int v15;
  void *v16;
  long double v17; // fst7
  void *v18;
  char *v19;
  void *v20;
  char v21;
  void *v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef void *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v24)) > _g4_s1 ? (28u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v26)) > _g4_s3 ? (36u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v27)) > _g4_s4 ? (40u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v28)) > _g4_s5 ? (44u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v29)) > _g4_s6 ? (48u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v30)) > _g4_s7 ? (52u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v31)) > _g4_s8 ? (56u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);

  switch ( glwebtools::Json::Value::type(a2) )
  {
    case 0:
      g4_std::string::append(a3, "null", 4u);
      break;
    case 1:
      v13 = glwebtools::Json::Value::asInt(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v24, v13);
      g4_std::string::append_str(a3, &v24);
      v14 = (void *)(v24 - 12);
      if ( (uint32_t *)(v24 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      break;
    case 2:
      v15 = glwebtools::Json::Value::asUInt(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v25, v15);
      g4_std::string::append_str(a3, &v25);
      v16 = (void *)(v25 - 12);
      if ( (uint32_t *)(v25 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      break;
    case 3:
      v17 = glwebtools::Json::Value::asDouble(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v26, v17);
      g4_std::string::append_str(a3, &v26);
      v18 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v18);
      }
      break;
    case 4:
      v19 = (char *)glwebtools::Json::Value::asCString(a2);
      glwebtools::Json::valueToQuotedString((glwebtools::Json::Self *)&v27, v19);
      g4_std::string::append_str(a3, &v27);
      v20 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v20);
      }
      break;
    case 5:
      v21 = glwebtools::Json::Value::asBool(a2);
      glwebtools::Json::valueToString((glwebtools::Json::Self *)&v28, v21);
      g4_std::string::append_str(a3, &v28);
      v22 = (void *)(v28 - 12);
      if ( (uint32_t *)(v28 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v22);
      }
      break;
    case 6:
      g4_std::string::append(a3, "[", 1u);
      v6 = 0;
      v23 = glwebtools::Json::Value::size(a2);
      if ( v23 > 0 )
      {
        while ( 1 )
        {
          v7 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, v6++);
          glwebtools::Json::FastWriter::writeValue(a1, v7, a3);
          if ( v23 == v6 )
            break;
          if ( v6 > 0 )
            g4_std::string::append(a3, ",", 1u);
        }
      }
      g4_std::string::append(a3, "]", 1u);
      break;
    case 7:
      glwebtools::Json::Value::getMemberNames((glwebtools::Json::Value::Self *)&v30, (uint8_t *)(a2));
      g4_std::string::append(a3, "{", 1u);
      v8 = (char **)v30;
      if ( v30 != v31 )
      {
        while ( 1 )
        {
          glwebtools::Json::valueToQuotedString((glwebtools::Json::Self *)&v29, *v8);
          g4_std::string::append_str(a3, &v29);
          v9 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          v10 = 1;
          v11 = ":";
          if ( *(uint8_t *)(a1 + 4) != 0 )
          {
            LOBYTE(v10) = 2;
            v11 = ": ";
          }
          g4_std::string::append(a3, v11, v10);
          v12 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)v8++);
          glwebtools::Json::FastWriter::writeValue(a1, v12, a3);
          if ( v8 == (char **)(uintptr_t)(v31) )
            break;
          if ( v30 != v8 )
            g4_std::string::append(a3, ",", 1u);
        }
      }
      g4_std::string::append(a3, "}", 1u);
      v3 = v31;
      v4 = (uint32_t *)(v30);
      if ( v31 != v30 )
      {
        do
        {
          v5 = (uint32_t *)(*v4 - 12);
          if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v5);
          ++v4;
        }
        while ( v3 != v4 );
        v4 = (uint32_t *)(v30);
      }
      if ( v4 != nullptr )
        opDelete(v4);
      break;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::FastWriter::writeToString  (binary VA: 0x13fda00)
// Original: glwebtools::Json::FastWriter::writeToString
// ----------------------------------------------------------------------------
int glwebtools::Json::FastWriter::writeToString(int a1, glwebtools::Json::Value::Self *a2, uint32_t *a3)
{
  g4_std::string::clear(a3, 0, *(uint32_t *)(*a3 - 12), 0);
  glwebtools::Json::FastWriter::writeValue(a1, a2, (int)(uintptr_t)(a3));
  return (int)(uintptr_t)(g4_std::string::append((int)(uintptr_t)(a3), &a0[1], 1u));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Value::toCompactString  (binary VA: 0x13fda80)
// Original: glwebtools::Json::Value::toCompactString
// ----------------------------------------------------------------------------
void glwebtools::Json::Value::toCompactString(glwebtools::Json::Value::Self *a1, uint32_t *a2)
{
  int v2[3];

  glwebtools::Json::FastWriter::Construct((glwebtools::Json::FastWriter::Self *)v2);
  glwebtools::Json::FastWriter::writeToString((int)(uintptr_t)(v2), a1, a2);
  v2[0] = (int)((uint32_t)(uintptr_t)&off_2094E20);
  glwebtools::Json::Writer::Destroy((glwebtools::Json::Writer::Self *)v2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::addError  (binary VA: 0x13fdae0)
// Original: glwebtools::Json::Reader::addError
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::addError(uint32_t *a1, int a2, int *a3, int a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v9;
  uint32_t *v10;
  int *v11;
  int v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v17)) > _g4_s4 ? (36u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v18)) > _g4_s5 ? (40u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v19)) > _g4_s6 ? (44u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  v18 = &dword_213B814;
  v15 = *a3;
  v16 = a3[1];
  v17 = a3[2];
  g4_std::string::assign_str(&v18, a2);
  v4 = a1[18];
  v19 = a4;
  v5 = (uint32_t *)a1[16];
  if ( v5 == (uint32_t *)(v4 - 20) )
  {
    v9 = a1[19];
    if ( (unsigned int)(a1[11] - ((v9 - a1[10]) >> 2)) <= 1 )
    {
      g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reallocate_map(
        (std::deque<glwebtools::Json::Reader::ErrorInfo> *)(a1 + 10),
        1u,
        false);
      v9 = a1[19];
    }
    *(uint32_t *)(v9 + 4) = opNew(0x1F4u);
    v10 = (uint32_t *)a1[16];
    if ( v10 != nullptr )
    {
      *v10 = v15;
      v10[1] = v16;
      v10[2] = v17;
      v14 = v10;
      g4_std::string::construct_copy(v10 + 3, &v18);
      v14[4] = v19;
    }
    v11 = (int *)(a1[19] + 4);
    a1[19] = (uint32_t)(uintptr_t)(v11);
    v12 = *v11;
    a1[17] = *v11;
    a1[16] = v12;
    a1[18] = v12 + 500;
  }
  else
  {
    v6 = 0;
    if ( v5 != nullptr )
    {
      *v5 = v15;
      v5[1] = v16;
      v5[2] = v17;
      v13 = v5;
      g4_std::string::construct_copy(v5 + 3, &v18);
      v13[4] = v19;
      v6 = a1[16];
    }
    a1[16] = v6 + 20;
  }
  v7 = v18 - 3;
  if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::decodeUnicodeEscapeSequence  (binary VA: 0x13fdc90)
// Original: glwebtools::Json::Reader::decodeUnicodeEscapeSequence
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::decodeUnicodeEscapeSequence(uint32_t *a1, int *a2, int *a3, int a4, int *a5)
{
  int v5;
  int v6;
  char v7;
  int v8;
  int result;
  void *v10;
  int v11;
  typedef uint8_t _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v5 = *a3;
  if ( a4 - *a3 > 3 )
  {
    *a5 = 0;
    v6 = 4;
    while ( 1 )
    {
      v7 = *(uint8_t *)(*a3)++;
      v8 = 16 * *a5;
      *a5 = v8;
      if ( (uint8_t)(v7 - 48) > 9u )
      {
        if ( (uint8_t)(v7 - 97) > 5u )
        {
          if ( (uint8_t)(v7 - 65) > 5u )
          {
            v11 = *a3;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Bad unicode escape sequence in string: hexadecimal digit expected.", (int)(uintptr_t)(&v13) + 2);
            result = glwebtools::Json::Reader::addError(a1, (int)(uintptr_t)(v15), a2, v11);
            v10 = (void *)(v15[0] - 12);
            if ( (uint32_t *)(v15[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              goto LABEL_17;
            }
            return result;
          }
          *a5 = v8 + v7 - 55;
        }
        else
        {
          *a5 = v8 + v7 - 87;
        }
      }
      else
      {
        *a5 = v8 + v7 - 48;
      }
      if ( --v6 == 0 )
        return 1;
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Bad unicode escape sequence in string: four digits expected.", (int)(uintptr_t)(&v13));
  result = glwebtools::Json::Reader::addError(a1, (int)(uintptr_t)(&v14), a2, v5);
  v10 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
LABEL_17:
    v12 = result;
    g4_std::string::Rep::M_destroy(v10);
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::decodeUnicodeCodePoint  (binary VA: 0x13fde30)
// Original: glwebtools::Json::Reader::decodeUnicodeCodePoint
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::decodeUnicodeCodePoint(uint32_t *a1, int *a2, int *a3, int a4, int *a5)
{
  char v5;
  int v6;
  char *v7;
  char v8;
  uint8_t *v9;
  void *v10;
  char v12;
  char v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);

  v5 = glwebtools::Json::Reader::decodeUnicodeEscapeSequence(a1, a2, a3, a4, a5);
  v6 = 0;
  if ( v5 == 0 )
    return v6;
  v6 = 1;
  if ( (unsigned int)(*a5 - 55296) > 0x3FF )
    return v6;
  v7 = (char *)*a3;
  if ( a4 - *a3 <= 5 )
  {
    v15 = *a3;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "additional six characters expected to parse unicode surrogate pair.", (int)(uintptr_t)(&v17));
    v6 = glwebtools::Json::Reader::addError(a1, (int)(uintptr_t)(&v18), a2, v15);
    v10 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) == dword_213B808
      || __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) > 0 )
    {
      return v6;
    }
LABEL_14:
    v16 = v6;
    g4_std::string::Rep::M_destroy(v10);
    return v16;
  }
  v8 = *v7;
  v9 = (uint8_t *)(v7 + 1);
  *a3 = (int)(uintptr_t)(v7 + 1);
  if ( v8 != 92 || (v12 = v7[1], v9 = (uint8_t *)(v7 + 2), *a3 = (int)(uintptr_t)(v7 + 2), v12 != 117) )
  {
    v14 = (int)(uintptr_t)(v9);
    g4_std::string::construct_from_cstr(
      (int)(uintptr_t)(v20),
      "expecting another \\u token to begin the second half of a unicode surrogate pair",
      (int)(uintptr_t)(&v17) + 1);
    v6 = glwebtools::Json::Reader::addError(a1, (int)(uintptr_t)(v20), a2, v14);
    v10 = (void *)(v20[0] - 12);
    if ( (uint32_t *)(v20[0] - 12) == dword_213B808
      || __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) > 0 )
    {
      return v6;
    }
    goto LABEL_14;
  }
  v13 = glwebtools::Json::Reader::decodeUnicodeEscapeSequence(a1, a2, a3, a4, &v19);
  v6 = 0;
  if ( v13 != 0 )
  {
    v6 = 1;
    *a5 = (v19 & 0x3FF) + ((*a5 & 0x3FF) << 10) + 0x10000;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::decodeString  (binary VA: 0x13fe020)
// Original: glwebtools::Json::Reader::decodeString
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::decodeString(uint32_t *a1, int *a2, int *a3)
{
  char *v3;
  int v4;
  char v5;
  int v6;
  char v7;
  int result;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  void *v14;
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
  unsigned int v31;
  uint8_t *v32;
  uint8_t *v33;
  char v34;
  unsigned int v35;
  uint8_t *v36;
  unsigned int v37;
  uint8_t *v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef char _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef char _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef uint8_t _g4_t_v56;
  typedef int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v40)) > _g4_s1 ? (0u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v41)) > _g4_s2 ? (0u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v42)) > _g4_s3 ? (0u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v43)) > _g4_s4 ? (0u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v44)) > _g4_s5 ? (0u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v45)) > _g4_s6 ? (4u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v46)) > _g4_s7 ? (4u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v47)) > _g4_s8 ? (4u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v48)) > _g4_s9 ? (4u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v49)) > _g4_s10 ? (4u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v50)) > _g4_s11 ? (4u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v51)) > _g4_s12 ? (4u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v52)) > _g4_s13 ? (4u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (4u + sizeof(_g4_t_v53)) > _g4_s14 ? (4u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (4u + sizeof(_g4_t_v54)) > _g4_s15 ? (4u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (4u + sizeof(_g4_t_v55)) > _g4_s16 ? (4u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (4u + sizeof(_g4_t_v56)) > _g4_s17 ? (4u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (23u + sizeof(_g4_t_v57)) > _g4_s18 ? (23u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v58)) > _g4_s19 ? (28u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v59)) > _g4_s20 ? (32u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v60)) > _g4_s21 ? (36u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v61)) > _g4_s22 ? (40u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v62)) > _g4_s23 ? (44u + sizeof(_g4_t_v62)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 23u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);

  sub_1939B80(a3, a2[2] - a2[1] - 2);
  v4 = a2[2] - 1;
  v58 = (char *)(a2[1] + 1);
  v3 = v58;
  if ( (char *)v4 == v58 )
    return 1;
  while ( 1 )
  {
    v5 = *v3;
    v58 = v3 + 1;
    if ( v5 == 34 )
      return 1;
    if ( v5 != 92 )
    {
      v10 = *a3;
      v11 = *(uint32_t *)(*a3 - 12);
      v12 = v11 + 1;
      if ( (unsigned int)(v11 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v10 - 4) > 0 )
      {
        v45 = v5;
        sub_1939B80(a3, v11 + 1);
        v10 = *a3;
        v5 = v45;
        v11 = *(uint32_t *)(*a3 - 12);
      }
      *(uint8_t *)(v10 + v11) = v5;
      v13 = *a3;
      if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
      {
LABEL_27:
        *(uint32_t *)(v13 - 4) = 0;
        *(uint32_t *)(v13 - 12) = v12;
        *(uint8_t *)(v13 + v12) = 0;
      }
      goto LABEL_12;
    }
    if ( (char *)v4 == v3 + 1 )
      break;
    v6 = (int)(uintptr_t)(v3 + 2);
    v7 = v3[1] - 34;
    v58 = v3 + 2;
    switch ( v7 )
    {
      case 0:
        v29 = *a3;
        v30 = *(uint32_t *)(*a3 - 12);
        v12 = v30 + 1;
        if ( (unsigned int)(v30 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v29 - 4) > 0 )
        {
          sub_1939B80(a3, v30 + 1);
          v29 = *a3;
          v30 = *(uint32_t *)(*a3 - 12);
        }
        *(uint8_t *)(v29 + v30) = 34;
        v13 = *a3;
        if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
          goto LABEL_27;
        break;
      case 13:
        v27 = *a3;
        v28 = *(uint32_t *)(*a3 - 12);
        v12 = v28 + 1;
        if ( (unsigned int)(v28 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v27 - 4) > 0 )
        {
          sub_1939B80(a3, v28 + 1);
          v27 = *a3;
          v28 = *(uint32_t *)(*a3 - 12);
        }
        *(uint8_t *)(v27 + v28) = 47;
        v13 = *a3;
        if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
          goto LABEL_27;
        break;
      case 58:
        v25 = *a3;
        v26 = *(uint32_t *)(*a3 - 12);
        v12 = v26 + 1;
        if ( (unsigned int)(v26 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v25 - 4) > 0 )
        {
          sub_1939B80(a3, v26 + 1);
          v25 = *a3;
          v26 = *(uint32_t *)(*a3 - 12);
        }
        *(uint8_t *)(v25 + v26) = 92;
        v13 = *a3;
        if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
          goto LABEL_27;
        break;
      case 64:
        v23 = *a3;
        v24 = *(uint32_t *)(*a3 - 12);
        v12 = v24 + 1;
        if ( (unsigned int)(v24 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v23 - 4) > 0 )
        {
          sub_1939B80(a3, v24 + 1);
          v23 = *a3;
          v24 = *(uint32_t *)(*a3 - 12);
        }
        *(uint8_t *)(v23 + v24) = 8;
        v13 = *a3;
        if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
          goto LABEL_27;
        break;
      case 68:
        v21 = *a3;
        v22 = *(uint32_t *)(*a3 - 12);
        v12 = v22 + 1;
        if ( (unsigned int)(v22 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v21 - 4) > 0 )
        {
          sub_1939B80(a3, v22 + 1);
          v21 = *a3;
          v22 = *(uint32_t *)(*a3 - 12);
        }
        *(uint8_t *)(v21 + v22) = 12;
        v13 = *a3;
        if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
          goto LABEL_27;
        break;
      case 76:
        v19 = *a3;
        v20 = *(uint32_t *)(*a3 - 12);
        v12 = v20 + 1;
        if ( (unsigned int)(v20 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v19 - 4) > 0 )
        {
          sub_1939B80(a3, v20 + 1);
          v19 = *a3;
          v20 = *(uint32_t *)(*a3 - 12);
        }
        *(uint8_t *)(v19 + v20) = 10;
        v13 = *a3;
        if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
          goto LABEL_27;
        break;
      case 80:
        v17 = *a3;
        v18 = *(uint32_t *)(*a3 - 12);
        v12 = v18 + 1;
        if ( (unsigned int)(v18 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v17 - 4) > 0 )
        {
          sub_1939B80(a3, v18 + 1);
          v17 = *a3;
          v18 = *(uint32_t *)(*a3 - 12);
        }
        *(uint8_t *)(v17 + v18) = 13;
        v13 = *a3;
        if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
          goto LABEL_27;
        break;
      case 82:
        v15 = *a3;
        v16 = *(uint32_t *)(*a3 - 12);
        v12 = v16 + 1;
        if ( (unsigned int)(v16 + 1) > *(uint32_t *)(*a3 - 8) || *(int *)(v15 - 4) > 0 )
        {
          sub_1939B80(a3, v16 + 1);
          v15 = *a3;
          v16 = *(uint32_t *)(*a3 - 12);
        }
        *(uint8_t *)(v15 + v16) = 9;
        v13 = *a3;
        if ( (uint32_t *)(*a3 - 12) != dword_213B808 )
          goto LABEL_27;
        break;
      case 83:
        if ( (uint8_t)glwebtools::Json::Reader::decodeUnicodeCodePoint(a1, a2, (int *)&v58, v4, (int *)&v60) == 0 )
          return 0;
        v61 = (int)(uintptr_t)(&dword_213B814);
        if ( v60 <= 0x7F )
        {
          v49 = v60;
          sub_1939D80((int)(uintptr_t)(&v61), 1u, 0);
          v33 = (uint8_t *)v61;
          v34 = v49;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            sub_19397C0(&v61);
            v33 = (uint8_t *)v61;
            v34 = v49;
          }
          *v33 = v34;
        }
        else if ( v60 <= 0x7FF )
        {
          v50 = v60;
          sub_1939D80((int)(uintptr_t)(&v61), 2u, 0);
          v41 = v61;
          v35 = v50;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            sub_19397C0(&v61);
            v41 = v61;
            v35 = v50;
          }
          *(uint8_t *)(v41 + 1) = v35 & 0x3F | 0x80;
          v36 = (uint8_t *)v61;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            v51 = v35;
            sub_19397C0(&v61);
            v36 = (uint8_t *)v61;
            v35 = v51;
          }
          *v36 = (v35 >> 6) | 0xC0;
        }
        else if ( v60 <= 0xFFFF )
        {
          v46 = v60;
          sub_1939D80((int)(uintptr_t)(&v61), 3u, 0);
          v31 = v46;
          v39 = v61;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            sub_19397C0(&v61);
            v39 = v61;
            v31 = v46;
          }
          *(uint8_t *)(v39 + 2) = v31 & 0x3F | 0x80;
          v40 = v61;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            v47 = v31;
            sub_19397C0(&v61);
            v40 = v61;
            v31 = v47;
          }
          *(uint8_t *)(v40 + 1) = (v31 >> 6) & 0x3F | 0x80;
          v32 = (uint8_t *)v61;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            v48 = v31;
            sub_19397C0(&v61);
            v32 = (uint8_t *)v61;
            v31 = v48;
          }
          *v32 = (v31 >> 12) | 0xE0;
        }
        else if ( v60 <= 0x10FFFF )
        {
          v52 = v60;
          sub_1939D80((int)(uintptr_t)(&v61), 4u, 0);
          v42 = v61;
          v37 = v52;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            sub_19397C0(&v61);
            v42 = v61;
            v37 = v52;
          }
          *(uint8_t *)(v42 + 3) = v37 & 0x3F | 0x80;
          v43 = v61;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            v53 = v37;
            sub_19397C0(&v61);
            v43 = v61;
            v37 = v53;
          }
          *(uint8_t *)(v43 + 2) = (v37 >> 6) & 0x3F | 0x80;
          v44 = v61;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            v54 = v37;
            sub_19397C0(&v61);
            v44 = v61;
            v37 = v54;
          }
          *(uint8_t *)(v44 + 1) = (v37 >> 12) & 0x3F | 0x80;
          v38 = (uint8_t *)v61;
          if ( *(int *)(v61 - 4) >= 0 )
          {
            v55 = v37;
            sub_19397C0(&v61);
            v38 = (uint8_t *)v61;
            v37 = v55;
          }
          *v38 = (v37 >> 18) | 0xF0;
        }
        g4_std::string::append_str(a3, &v61);
        v14 = (void *)(v61 - 12);
        if ( (uint32_t *)(v61 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v14);
        }
        break;
      default:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v62), "Bad escape sequence in string", (int)(uintptr_t)(&v57) + 1);
        result = glwebtools::Json::Reader::addError(a1, (int)(uintptr_t)(v62), a2, v6);
        v9 = (void *)(v62[0] - 12);
        if ( (uint32_t *)(v62[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v62[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          goto LABEL_92;
        }
        return result;
    }
LABEL_12:
    v3 = v58;
    if ( (char *)v4 == v58 )
      return 1;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Empty escape sequence in string", (int)(uintptr_t)(&v57));
  result = glwebtools::Json::Reader::addError(a1, (int)(uintptr_t)(&v59), a2, v4);
  v9 = (void *)(v59 - 12);
  if ( (uint32_t *)(v59 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
  {
LABEL_92:
    v56 = result;
    g4_std::string::Rep::M_destroy(v9);
    return v56;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::decodeString  (binary VA: 0x13fe800)
// Original: glwebtools::Json::Reader::decodeString
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::decodeString(glwebtools::Json::Reader::Self *a1, int *a2)
{
  char v2;
  int v3;
  glwebtools::Json::Value::Self *v4;
  uint32_t *v5;
  typedef uint8_t _g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef uint8_t _g4_t_v9[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v8 = &dword_213B814;
  v2 = glwebtools::Json::Reader::decodeString(a1, a2, (int *)&v8);
  v3 = 0;
  if ( v2 != 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v9), &v8);
    v4 = (glwebtools::Json::Value::Self *)glwebtools::Json::Reader::currentValue(a1);
    glwebtools::Json::Value::opAssign(v4, (const glwebtools::Json::Value::Self *)v9);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v9);
    v3 = 1;
  }
  v5 = v8 - 3;
  if ( v8 - 3 != dword_213B808 && __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
  {
    v7 = v3;
    g4_std::string::Rep::M_destroy(v5);
    return v7;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::decodeDouble  (binary VA: 0x13fe8d0)
// Original: glwebtools::Json::Reader::decodeDouble
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::decodeDouble(glwebtools::Json::Reader::Self *a1, int *a2)
{
  uint8_t *src;
  int v3;
  int v4;
  int result;
  void *v6;
  void *v7;
  void *v8;
  char *v9;
  glwebtools::Json::Value::Self *v10;
  typedef char *_g4_t_s;
  typedef uint8_t _g4_t_sa;
  typedef uint8_t _g4_t_sb;
  typedef uint8_t _g4_t_sc;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef double _g4_t_v19;
  typedef uint8_t _g4_t_v20[16];
  typedef char *_g4_t_dest[15];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_s)) > _g4_s0 ? (12u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_sa)) > _g4_s1 ? (12u + sizeof(_g4_t_sa)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_sb)) > _g4_s2 ? (12u + sizeof(_g4_t_sb)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_sc)) > _g4_s3 ? (12u + sizeof(_g4_t_sc)) : _g4_s3,
    _g4_s5 = (22u + sizeof(_g4_t_v15)) > _g4_s4 ? (22u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v19)) > _g4_s8 ? (40u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v20)) > _g4_s9 ? (48u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_dest)) > _g4_s10 ? (64u + sizeof(_g4_t_dest)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 12u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 12u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 12u);
  _g4_t_sc &sc = *reinterpret_cast<_g4_t_sc *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 22u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 64u);

  v19 = 0.0;
  src = (uint8_t *)a2[1];
  v3 = a2[2] - (uint32_t)(uintptr_t)(src);
  if ( v3 > 32 )
  {
    sub_119F570(dest, src, (uint8_t *)a2[2]);
    v4 = sscanf(dest[0], (const char *)&off_1B67382, &v19, &v15);
    v9 = dest[0] - 12;
    if ( (uint32_t *)dest[0] - 3 != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)dest[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      s = (char *)v4;
      g4_std::string::Rep::M_destroy(v9);
      v4 = (int)(uintptr_t)(s);
    }
  }
  else
  {
    memcpy(dest, src, a2[2] - (uint32_t)(uintptr_t)(src));
    *((uint8_t *)dest + v3) = 0;
    v4 = sscanf((const char *)dest, (const char *)&off_1B67382, &v19);
  }
  if ( v4 == 1 )
  {
    glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v20, v19);
    v10 = (glwebtools::Json::Value::Self *)glwebtools::Json::Reader::currentValue(a1);
    glwebtools::Json::Value::opAssign(v10, (const glwebtools::Json::Value::Self *)v20);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v20);
    return 1;
  }
  else
  {
    sub_119F570(&v18, (uint8_t *)a2[1], (uint8_t *)a2[2]);
    sub_59E340(&v17, (char *)a0, &v18);
    g4_std::string::construct_copy(&v16, &v17);
    g4_std::string::append((int)(uintptr_t)(&v16), "' is not a number.", 0x12u);
    result = glwebtools::Json::Reader::addError((uint32_t *)(a1), (int)(uintptr_t)(&v16), a2, 0);
    v6 = (void *)(v16 - 12);
    if ( (uint32_t *)(v16 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
    {
      sa = result;
      g4_std::string::Rep::M_destroy(v6);
      result = sa;
    }
    v7 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      sc = result;
      g4_std::string::Rep::M_destroy(v7);
      result = sc;
    }
    v8 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      sb = result;
      g4_std::string::Rep::M_destroy(v8);
      return sb;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::decodeNumber  (binary VA: 0x13feb70)
// Original: glwebtools::Json::Reader::decodeNumber
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::decodeNumber(glwebtools::Json::Reader::Self *a1, int *a2)
{
  char *v2;
  char *v3;
  bool v4;
  char *v5;
  char v6;
  bool v7; // si
  char *v8;
  unsigned int v9;
  char *v10;
  unsigned int v11;
  char v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  const glwebtools::Json::Value::Self *v17;
  glwebtools::Json::Value::Self *v18;
  int result;
  void *v20;
  void *v21;
  void *v22;
  typedef glwebtools::Json::Value::Self *_g4_t_v23;
  typedef uint8_t _g4_t_v24;
  typedef uint8_t _g4_t_v25;
  typedef uint8_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[44];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v24)) > _g4_s1 ? (28u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v25)) > _g4_s2 ? (28u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v26)) > _g4_s3 ? (28u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v27)) > _g4_s4 ? (32u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v28)) > _g4_s5 ? (36u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v29)) > _g4_s6 ? (40u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v30)) > _g4_s7 ? (52u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v31)) > _g4_s8 ? (56u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v32)) > _g4_s9 ? (60u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v33)) > _g4_s10 ? (64u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v34)) > _g4_s11 ? (80u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v35)) > _g4_s12 ? (96u + sizeof(_g4_t_v35)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);

  v29 = (char *)a2[1];
  v2 = (char *)a2[2];
  if ( v29 == v2 )
    goto LABEL_13;
  v3 = (char *)a2[1];
  v4 = false;
  v5 = (char *)a2[2];
  do
  {
    while ( v4 )
    {
LABEL_8:
      if ( ++v3 == v5 )
        goto LABEL_12;
    }
    v6 = *v3;
    if ( *v3 != 101 && v6 != 46 && v6 != 43 && v6 != 69 )
    {
      if ( v6 == 45 )
        v4 = v3 != v29;
      goto LABEL_8;
    }
    ++v3;
    v4 = true;
  }
  while ( v3 != v5 );
LABEL_12:
  v7 = v4;
  v2 = (char *)a2[2];
  if ( v7 )
    return glwebtools::Json::Reader::decodeDouble(a1, a2);
LABEL_13:
  if ( *v29 == 45 )
  {
    v8 = v29 + 1;
    v9 = 214748364;
    v28 = 0x80000000;
  }
  else
  {
    v8 = (char *)a2[1];
    v9 = 429496729;
    v28 = 0xFFFFFFFF;
  }
  if ( v2 <= v8 )
  {
    v16 = 0;
    v11 = 0;
LABEL_24:
    if ( *v29 == 45 )
    {
      v17 = (const glwebtools::Json::Value::Self *)v33;
      glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v33, -v16);
    }
    else
    {
      if ( v16 >= 0 )
      {
        v17 = (const glwebtools::Json::Value::Self *)v34;
        glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v34, v16);
        v18 = (glwebtools::Json::Value::Self *)glwebtools::Json::Reader::currentValue(a1);
LABEL_27:
        glwebtools::Json::Value::opAssign(v18, v17);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)(v17));
        return 1;
      }
      v23 = (glwebtools::Json::Value::Self *)v11;
      v17 = (const glwebtools::Json::Value::Self *)v35;
      glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v35, (unsigned int)(uintptr_t)(v23));
    }
    v18 = (glwebtools::Json::Value::Self *)glwebtools::Json::Reader::currentValue(a1);
    goto LABEL_27;
  }
  v27 = *v8;
  if ( (uint8_t)(*v8 - 48) <= 9u )
  {
    v10 = v8 + 1;
    v11 = 0;
    v12 = v27;
    do
    {
      v14 = v11 < v9;
      v15 = 5 * v11;
      if ( v14 )
      {
        v11 = v12 + 2 * v15 - 48;
        if ( v10 == v2 )
          goto LABEL_23;
      }
      else
      {
        v13 = 2 * v15;
        if ( v12 - 48 > v28 - v13 )
          return glwebtools::Json::Reader::decodeDouble(a1, a2);
        v11 = v13 + v12 - 48;
        if ( v10 == v2 )
        {
LABEL_23:
          v16 = v11;
          goto LABEL_24;
        }
      }
      v12 = *v10++;
    }
    while ( (uint8_t)(v12 - 48) <= 9u );
  }
  sub_119F570(&v30, v29, v2);
  sub_59E340(&v31, (char *)a0, &v30);
  g4_std::string::construct_copy(&v32, &v31);
  g4_std::string::append((int)(uintptr_t)(&v32), "' is not a number.", 0x12u);
  result = glwebtools::Json::Reader::addError((uint32_t *)(a1), (int)(uintptr_t)(&v32), a2, 0);
  v20 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    v26 = result;
    g4_std::string::Rep::M_destroy(v20);
    result = v26;
  }
  v21 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    v24 = result;
    g4_std::string::Rep::M_destroy(v21);
    result = v24;
  }
  v22 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    v25 = result;
    g4_std::string::Rep::M_destroy(v22);
    return v25;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::expectToken  (binary VA: 0x13feef0)
// Original: glwebtools::Json::Reader::expectToken
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::expectToken(glwebtools::Json::Reader::Self *a1, int a2, int *a3, char *a4)
{
  int result;
  void *v5;
  typedef uint8_t _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v7)) > _g4_s1 ? (26u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 26u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  glwebtools::Json::Reader::readToken(a1, (uint32_t *)(a3));
  result = 1;
  if ( *a3 != a2 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), a4, (int)(uintptr_t)(&v7));
    result = glwebtools::Json::Reader::addError((uint32_t *)(a1), (int)(uintptr_t)(v8), a3, 0);
    v5 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v6 = result;
      g4_std::string::Rep::M_destroy(v5);
      return v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::recoverFromError  (binary VA: 0x13fefb0)
// Original: glwebtools::Json::Reader::recoverFromError
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::recoverFromError(uint32_t *a1, int a2)
{
  glwebtools::Json::Reader::Self *v2;
  int v3;
  uint32_t *v4;
  int *v5;
  int v6;
  uint32_t *v7;
  unsigned int v8;
  bool v9;
  uint32_t *v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  int *v15;
  bool v16;
  int v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  int *v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  unsigned int v30;
  int v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  uint32_t *v41;
  uint32_t *v42;
  typedef unsigned int _g4_t_v43;
  typedef int *_g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef int *_g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef glwebtools::Json::Reader::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef glwebtools::Json::Reader::Self *_g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef std::deque<glwebtools::Json::Reader::ErrorInfo> *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58[3];
  typedef uint32_t _g4_t_v59[4];
  typedef uint32_t _g4_t_v60[4];
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef g4_int128_t _g4_t_v65;
  typedef uint32_t _g4_t_v66[4];
  typedef uint32_t _g4_t_v67[4];
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t _g4_t_v73[3];
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v43)) > _g4_s0 ? (0u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v44)) > _g4_s1 ? (4u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v45)) > _g4_s2 ? (4u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v46)) > _g4_s3 ? (4u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v47)) > _g4_s4 ? (4u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v48)) > _g4_s5 ? (8u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v49)) > _g4_s6 ? (8u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v50)) > _g4_s7 ? (8u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v51)) > _g4_s8 ? (8u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v52)) > _g4_s9 ? (12u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v53)) > _g4_s10 ? (16u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v54)) > _g4_s11 ? (20u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v55)) > _g4_s12 ? (28u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v56)) > _g4_s13 ? (32u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v57)) > _g4_s14 ? (36u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v58)) > _g4_s15 ? (52u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v59)) > _g4_s16 ? (64u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v60)) > _g4_s17 ? (80u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v61)) > _g4_s18 ? (96u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v62)) > _g4_s19 ? (100u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v63)) > _g4_s20 ? (104u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v64)) > _g4_s21 ? (108u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v65)) > _g4_s22 ? (112u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v66)) > _g4_s23 ? (128u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v67)) > _g4_s24 ? (144u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (160u + sizeof(_g4_t_v68)) > _g4_s25 ? (160u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (164u + sizeof(_g4_t_v69)) > _g4_s26 ? (164u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (168u + sizeof(_g4_t_v70)) > _g4_s27 ? (168u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v71)) > _g4_s28 ? (172u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (176u + sizeof(_g4_t_v72)) > _g4_s29 ? (176u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (180u + sizeof(_g4_t_v73)) > _g4_s30 ? (180u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (192u + sizeof(_g4_t_v74)) > _g4_s31 ? (192u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (196u + sizeof(_g4_t_v75)) > _g4_s32 ? (196u + sizeof(_g4_t_v75)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 96u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 100u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 104u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 108u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 112u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 128u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 160u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 164u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 168u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 172u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 176u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 180u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 192u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 196u);

  v2 = (glwebtools::Json::Reader::Self *)a1;
  v55 = (std::deque<glwebtools::Json::Reader::ErrorInfo> *)(a1 + 10);
  v52 = -858993459 * ((a1[16] - a1[17]) >> 2)
      + 5 * (5 * ((a1[19] - a1[15]) >> 2) - 5)
      - 858993459 * ((a1[14] - a1[12]) >> 2);
  v56 = 5 * v52;
  do
  {
    if ( (uint8_t)glwebtools::Json::Reader::readToken(v2, (uint32_t *)(v58)) != 0 )
      continue;
    v3 = *((uint32_t *)v2 + 17);
    v71 = &dword_213B814;
    v4 = *((uint32_t **)v2 + 16);
    v53 = v3;
    v5 = *((int **)v2 + 19);
    v44 = *((int **)v2 + 15);
    v48 = -858993459 * (((int)(uintptr_t)(v4) - v3) >> 2);
    v6 = *((uint32_t *)v2 + 14);
    v7 = *((uint32_t **)v2 + 12);
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v72 = 0;
    v8 = v48 + 5 * (5 * (v5 - v44) - 5) - 858993459 * ((v6 - (int)(uintptr_t)(v7)) >> 2);
    v9 = v52 < v8;
    if ( v52 <= v8 )
    {
      v22 = &dword_213B814;
      if ( !v9 )
        goto LABEL_33;
      v32 = *((uint32_t *)v2 + 13);
      v33 = v52 - 858993459 * (((int)(uintptr_t)(v7) - v32) >> 2);
      if ( v33 < 0 )
      {
        v34 = ~(~v33 / 0x19u);
      }
      else
      {
        if ( v33 <= 24 )
        {
          v35 = (int)(uintptr_t)(&v7[v56]);
          goto LABEL_40;
        }
        v34 = v33 / 25;
      }
      v44 += v34;
      v32 = *v44;
      v6 = *v44 + 500;
      v35 = *v44 + 20 * (v33 - 25 * v34);
LABEL_40:
      v60[1] = v32;
      v60[0] = v35;
      v60[2] = v6;
      v60[3] = (uint32_t)(uintptr_t)(v44);
      g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_erase_at_end(v55, v60);
      v22 = v71;
      goto LABEL_33;
    }
    v45 = v52 - v8;
    v10 = *((uint32_t **)v2 + 18);
    if ( v4 == v7 )
    {
      g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reserve_elements_at_front(
        (std::deque<glwebtools::Json::Reader::ErrorInfo> *)&v61,
        (unsigned int)(uintptr_t)(v55));
      v41 = *((uint32_t **)v2 + 12);
      v59[0] = (uint32_t)(uintptr_t)(v61);
      v59[1] = v62;
      v59[2] = v63;
      v59[3] = v64;
      sub_13F5B20((int)(uintptr_t)(v59), v41, &v68);
      *((uint32_t *)v2 + 12) = (uint32_t)(uintptr_t)(v61);
      *((uint32_t *)v2 + 13) = v62;
      *((uint32_t *)v2 + 14) = v63;
      *((uint32_t *)v2 + 15) = v64;
      v22 = v71;
LABEL_33:
      v23 = v22 - 3;
      if ( v22 - 3 == dword_213B808 )
        continue;
LABEL_34:
      if ( __sync_fetch_and_add(v22 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v23);
      continue;
    }
    v11 = -858993459 * (v10 - v4) - 1;
    if ( v45 > v11 )
    {
      if ( v45 - v11 > 214748364 - v8 )
        sub_1900180("deque::_M_new_elements_at_back");
      v12 = (v45 - v11 + 24) / 0x19;
      if ( v12 + 1 > *((uint32_t *)v2 + 11) - (((int)(uintptr_t)(v5) - *((uint32_t *)v2 + 10)) >> 2) )
      {
        v43 = (v45 - v11 + 24) / 0x19;
        g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reallocate_map(v55, v12, false);
        v5 = *((int **)v2 + 19);
        v12 = v43;
      }
      v13 = 1;
      if ( v12 != 0 )
      {
        v49 = v2;
        v14 = v12;
        while ( 1 )
        {
          v15 = &v5[v13++];
          *v15 = opNew(0x1F4u);
          if ( v14 < v13 )
            break;
          v5 = *((int **)v49 + 19);
        }
        v2 = v49;
        v4 = *((uint32_t **)v49 + 16);
        v53 = *((uint32_t *)v49 + 17);
        v10 = *((uint32_t **)v49 + 18);
        v5 = *((int **)v49 + 19);
      }
      else
      {
        v4 = *((uint32_t **)v2 + 16);
        v53 = *((uint32_t *)v2 + 17);
        v10 = *((uint32_t **)v2 + 18);
      }
      v48 = -858993459 * (((int)(uintptr_t)(v4) - v53) >> 2);
    }
    v16 = (int)(v48 + v45) < 0;
    v17 = v48 + v45;
    v50 = v48 + v45;
    if ( v16 )
      goto LABEL_54;
    if ( v17 > 24 )
    {
      if ( v50 <= 0 )
LABEL_54:
        v39 = ~(~v50 / 0x19u);
      else
        v39 = v50 / 25;
      v54 = &v5[v39];
      v53 = *v54;
      v57 = *v54 + 500;
      v18 = *v54 + 20 * (v50 - 25 * v39);
      goto LABEL_18;
    }
    v54 = v5;
    v57 = (int)(uintptr_t)(v10);
    v18 = (int)(uintptr_t)(&v4[5 * v45]);
LABEL_18:
    v46 = v5;
    v51 = v2;
    v19 = v4;
    v20 = (uint32_t *)v18;
    while ( v19 != v20 )
    {
      while ( 1 )
      {
        if ( v19 != nullptr )
        {
          *v19 = v68;
          v19[1] = v69;
          v19[2] = v70;
          g4_std::string::construct_copy(v19 + 3, &v71);
          v19[4] = v72;
        }
        v19 += 5;
        if ( v10 != v19 )
          break;
        v21 = v46++;
        v19 = (uint32_t *)v21[1];
        v10 = v19 + 125;
        if ( v19 == v20 )
          goto LABEL_24;
      }
    }
LABEL_24:
    v2 = v51;
    *((uint32_t *)v51 + 17) = v53;
    v22 = v71;
    *((uint32_t *)v51 + 18) = v57;
    *((uint32_t *)v51 + 16) = (uint32_t)(uintptr_t)(v19);
    *((uint32_t *)v51 + 19) = (uint32_t)(uintptr_t)(v54);
    v23 = v22 - 3;
    if ( v22 - 3 != dword_213B808 )
      goto LABEL_34;
  }
  while ( v58[0] != a2 && v58[0] != 0 );
  v24 = *((uint32_t *)v2 + 19);
  v47 = *((int **)v2 + 15);
  v25 = *((uint32_t *)v2 + 16);
  v26 = *((uint32_t *)v2 + 12);
  memset(v73, 0, sizeof(v73));
  v75 = 0;
  v27 = &dword_213B814;
  v28 = *((uint32_t *)v2 + 14);
  v29 = 5 * (5 * ((v24 - (int)(uintptr_t)(v47)) >> 2) - 5) - 858993459 * ((v25 - *((uint32_t *)v2 + 17)) >> 2);
  v74 = &dword_213B814;
  v30 = v29 - 858993459 * ((v28 - v26) >> 2);
  if ( v52 <= v30 )
  {
    if ( v52 >= v30 )
      goto LABEL_30;
    v36 = *((uint32_t *)v2 + 13);
    v37 = v52 - 858993459 * ((v26 - v36) >> 2);
    if ( v37 < 0 )
    {
      v40 = ~(~v37 / 0x19u);
    }
    else
    {
      if ( v37 <= 24 )
      {
        v38 = v56 * 4 + v26;
LABEL_45:
        v67[2] = v28;
        v67[1] = v36;
        v67[0] = v38;
        v67[3] = (uint32_t)(uintptr_t)(v47);
        g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_erase_at_end(v55, v67);
        v27 = v74;
        goto LABEL_30;
      }
      v40 = v37 / 25;
    }
    v47 += v40;
    v36 = *v47;
    v28 = *v47 + 500;
    v38 = *v47 + 20 * (v37 - 25 * v40);
    goto LABEL_45;
  }
  if ( v25 == v26 )
  {
    g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reserve_elements_at_front(
      (std::deque<glwebtools::Json::Reader::ErrorInfo> *)&v61,
      (unsigned int)(uintptr_t)(v55));
    v42 = *((uint32_t **)v2 + 12);
    v66[0] = (uint32_t)(uintptr_t)(v61);
    v66[1] = v62;
    v66[2] = v63;
    v66[3] = v64;
    sub_13F5B20((int)(uintptr_t)(v66), v42, v73);
    v27 = v74;
    *((uint32_t *)v2 + 12) = (uint32_t)(uintptr_t)(v61);
    *((uint32_t *)v2 + 13) = v62;
    *((uint32_t *)v2 + 14) = v63;
    *((uint32_t *)v2 + 15) = v64;
  }
  else
  {
    g4_std::deque_glwebtools_Json_Reader_E_879f2e::M_reserve_elements_at_back(
      (std::deque<glwebtools::Json::Reader::ErrorInfo> *)&v61,
      (unsigned int)(uintptr_t)(v55));
    v65 = *((g4_int128_t *)v2 + 4);
    sub_13F5B20((int)(uintptr_t)(&v65), v61, v73);
    v27 = v74;
    *((uint32_t *)v2 + 16) = (uint32_t)(uintptr_t)(v61);
    *((uint32_t *)v2 + 17) = v62;
    *((uint32_t *)v2 + 18) = v63;
    *((uint32_t *)v2 + 19) = v64;
  }
LABEL_30:
  if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v27 - 3);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::addErrorAndRecover  (binary VA: 0x13ff7c0)
// Original: glwebtools::Json::Reader::addErrorAndRecover
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::addErrorAndRecover(uint32_t *a1, int a2, int *a3, int a4)
{
  glwebtools::Json::Reader::addError(a1, a2, a3, 0);
  return glwebtools::Json::Reader::recoverFromError(a1, a4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::readObject  (binary VA: 0x13ff820)
// Original: glwebtools::Json::Reader::readObject
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::readObject(void **a1)
{
  glwebtools::Json::Value::Self *v1;
  int v2;
  int result;
  void *v4;
  int v5;
  char Token;
  glwebtools::Json::Value::Self *v7;
  char Value;
  char *v9;
  int v10;
  char v11;
  void **v12;
  char *v13;
  typedef uint8_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef uint8_t _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef glwebtools::Json::Value::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[3];
  typedef int _g4_t_v24[3];
  typedef int _g4_t_v25[3];
  typedef uint8_t _g4_t_v26[44];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (17u + sizeof(_g4_t_v17)) > _g4_s3 ? (17u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v21)) > _g4_s7 ? (36u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v22)) > _g4_s8 ? (40u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v23)) > _g4_s9 ? (44u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v24)) > _g4_s10 ? (56u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v25)) > _g4_s11 ? (68u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v26)) > _g4_s12 ? (80u + sizeof(_g4_t_v26)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 17u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);

  v18 = (int)(uintptr_t)(&dword_213B814);
  glwebtools::Json::Value::Construct((int)(uintptr_t)(v26), (char *)&loc_6 + 1);
  v1 = (glwebtools::Json::Value::Self *)glwebtools::Json::Reader::currentValue((glwebtools::Json::Reader::Self *)a1);
  glwebtools::Json::Value::opAssign(v1, (const glwebtools::Json::Value::Self *)v26);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v26);
  while ( 1 )
  {
LABEL_2:
    if ( (uint8_t)glwebtools::Json::Reader::readToken((glwebtools::Json::Reader::Self *)a1, (uint32_t *)(v23)) == 0 )
      goto LABEL_15;
    v2 = v23[0];
    if ( v23[0] == 12 )
    {
      while ( 1 )
      {
        Token = glwebtools::Json::Reader::readToken((glwebtools::Json::Reader::Self *)a1, (uint32_t *)(v23));
        v2 = v23[0];
        if ( v23[0] != 12 )
          break;
        if ( Token == 0 )
          goto LABEL_15;
      }
      if ( Token == 0 )
        goto LABEL_15;
    }
    if ( v2 == 2 )
    {
      v5 = v18;
      result = 1;
      if ( *(uint32_t *)(v18 - 12) == 0 )
        goto LABEL_10;
LABEL_15:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Missing '}' or object member name", (int)(uintptr_t)(&v17) + 2);
      result = glwebtools::Json::Reader::addErrorAndRecover((uint32_t *)(a1), (int)(uintptr_t)(&v22), v23, 2);
      v4 = (void *)(v22 - 12);
      if ( (uint32_t *)(v22 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_9;
      }
LABEL_25:
      v14 = result;
      g4_std::string::Rep::M_destroy(v4);
      v5 = v18;
      result = v14;
      goto LABEL_10;
    }
    if ( v2 != 5 )
      goto LABEL_15;
    g4_std_compat::string_assign((int)(uintptr_t)(&v18), &unk_1B15112, 0);
    if ( (uint8_t)glwebtools::Json::Reader::decodeString(a1, v23, &v18) == 0 )
      break;
    if ( (uint8_t)glwebtools::Json::Reader::readToken((glwebtools::Json::Reader::Self *)a1, (uint32_t *)(v24)) == 0 || v24[0] != 11 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Missing ':' after object member name", (int)(uintptr_t)(&v17));
      result = glwebtools::Json::Reader::addErrorAndRecover((uint32_t *)(a1), (int)(uintptr_t)(&v19), v24, 2);
      v4 = (void *)(v19 - 12);
      if ( (uint32_t *)(v19 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_9;
      }
      goto LABEL_25;
    }
    v7 = (glwebtools::Json::Value::Self *)glwebtools::Json::Reader::currentValue((glwebtools::Json::Reader::Self *)a1);
    v20 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v7, (char **)&v18);
    g4_std::deque_glwebtools_Json_Value_766a9a::push_back((std::deque<glwebtools::Json::Value::Self *> *)a1, &v20);
    Value = glwebtools::Json::Reader::readValue((glwebtools::Json::Reader::Self *)a1);
    v9 = (char *)a1[6];
    if ( v9 == a1[7] )
    {
      v15 = Value;
      opDelete(a1[6]);
      v12 = (void **)((char *)a1[9] - 4);
      a1[9] = v12;
      v13 = (char *)*v12;
      a1[7] = *v12;
      a1[8] = v13 + 512;
      a1[6] = v13 + 508;
      Value = v15;
    }
    else
    {
      a1[6] = v9 - 4;
    }
    if ( Value == 0 )
      break;
    if ( (uint8_t)glwebtools::Json::Reader::readToken((glwebtools::Json::Reader::Self *)a1, (uint32_t *)(v25)) == 0 )
      goto LABEL_23;
    v10 = v25[0];
    if ( v25[0] == 10 || v25[0] == 2 )
      goto LABEL_32;
    if ( v25[0] != 12 )
    {
LABEL_23:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Missing ',' or '}' in object declaration", (int)(uintptr_t)(&v17) + 1);
      result = glwebtools::Json::Reader::addErrorAndRecover((uint32_t *)(a1), (int)(uintptr_t)(&v21), v25, 2);
      v4 = (void *)(v21 - 12);
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        goto LABEL_25;
      }
LABEL_9:
      v5 = v18;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v11 = glwebtools::Json::Reader::readToken((glwebtools::Json::Reader::Self *)a1, (uint32_t *)(v25));
      v10 = v25[0];
      if ( v25[0] != 12 )
        break;
      if ( v11 == 0 )
        goto LABEL_2;
    }
LABEL_32:
    if ( v10 == 2 )
    {
      v5 = v18;
      result = 1;
      goto LABEL_10;
    }
  }
  result = glwebtools::Json::Reader::recoverFromError((uint32_t *)(a1), 2);
  v5 = v18;
LABEL_10:
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = result;
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
    return v16;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::readValue  (binary VA: 0x13ffc10)
// Original: glwebtools::Json::Reader::readValue
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::readValue(char **self)
{
  int Object;
  void *v2;
  int v4;
  const glwebtools::Json::Value::Self *v5;
  glwebtools::Json::Value::Self *v6;
  typedef glwebtools::Json::Value::Self *_g4_t_v7;
  typedef uint16_t _g4_t_v8[3];
  typedef int _g4_t_v9[3];
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v8)) > _g4_s1 ? (30u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v9)) > _g4_s2 ? (36u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v10)) > _g4_s3 ? (48u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v11)) > _g4_s4 ? (64u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v12)) > _g4_s5 ? (80u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 80u);

  glwebtools::Json::Reader::skipCommentTokens((glwebtools::Json::Reader::Self *)self, (uint32_t *)(v9));
  if ( *((uint8_t *)self + 110) != 0 && *((uint32_t *)*(self + 26) - 3) != 0 )
  {
    v4 = glwebtools::Json::Reader::currentValue((glwebtools::Json::Reader::Self *)self);
    glwebtools::Json::Value::setComment(v4, self + 26, 0);
    g4_std_compat::string_assign((int)(uintptr_t)(self + 26), &unk_1B15112, 0);
  }
  switch ( v9[0] )
  {
    case 1:
      Object = glwebtools::Json::Reader::readObject((void **)self);
      goto LABEL_10;
    case 3:
      Object = glwebtools::Json::Reader::readArray((glwebtools::Json::Reader::Self *)self);
      goto LABEL_10;
    case 5:
      Object = glwebtools::Json::Reader::decodeString((glwebtools::Json::Reader::Self *)self, v9);
      goto LABEL_10;
    case 6:
      Object = glwebtools::Json::Reader::decodeNumber((glwebtools::Json::Reader::Self *)self, v9);
      goto LABEL_10;
    case 7:
      v5 = (const glwebtools::Json::Value::Self *)v10;
      glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v10, true);
      goto LABEL_9;
    case 8:
      v5 = (const glwebtools::Json::Value::Self *)v11;
      glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v11, false);
      goto LABEL_9;
    case 9:
      v5 = (const glwebtools::Json::Value::Self *)v12;
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v12), nullptr);
LABEL_9:
      v6 = (glwebtools::Json::Value::Self *)glwebtools::Json::Reader::currentValue((glwebtools::Json::Reader::Self *)self);
      glwebtools::Json::Value::opAssign(v6, v5);
      v7 = (glwebtools::Json::Value::Self *)(v5);
      Object = 1;
      glwebtools::Json::Value::Destroy(v7);
LABEL_10:
      if ( *((uint8_t *)self + 110) != 0 )
      {
        *(self + 24) = *(self + 23);
        *(self + 25) = (char *)glwebtools::Json::Reader::currentValue((glwebtools::Json::Reader::Self *)self);
      }
      break;
    default:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8[1]), "Syntax error: value, object or array expected.", (int)(uintptr_t)(v8));
      Object = glwebtools::Json::Reader::addError((uint32_t *)(self), (int)(uintptr_t)(&v8[1]), v9, 0);
      v2 = (void *)(*(uint32_t *)&v8[1] - 12);
      if ( (uint32_t *)(*(uint32_t *)&v8[1] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v8[1] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v2);
      }
      break;
  }
  return Object;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::readArray  (binary VA: 0x13ffe10)
// Original: glwebtools::Json::Reader::readArray
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::readArray(void **a1)
{
  glwebtools::Json::Value::Self *v1;
  unsigned int v2;
  glwebtools::Json::Value::Self *v3;
  char Value;
  char *v5;
  char Token;
  int result;
  void *v8;
  void **v9;
  char *v10;
  typedef unsigned int _g4_t_v11;
  typedef uint8_t _g4_t_v12;
  typedef char _g4_t_v13;
  typedef uint16_t _g4_t_v14[3];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[3];
  typedef uint8_t _g4_t_v17[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (26u + sizeof(_g4_t_v14)) > _g4_s3 ? (26u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 26u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  glwebtools::Json::Value::Construct((int)(uintptr_t)(v17), &loc_6);
  v1 = (glwebtools::Json::Value::Self *)glwebtools::Json::Reader::currentValue((glwebtools::Json::Reader::Self *)a1);
  glwebtools::Json::Value::opAssign(v1, (const glwebtools::Json::Value::Self *)v17);
  v2 = 0;
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v17);
  glwebtools::Json::Reader::skipSpaces((glwebtools::Json::Reader::Self *)a1);
  if ( *(uint8_t *)a1[23] == 93 )
  {
    glwebtools::Json::Reader::readToken((glwebtools::Json::Reader::Self *)a1, (uint32_t *)(v16));
    return 1;
  }
  else
  {
    while ( 2 )
    {
      v11 = v2++;
      v3 = (glwebtools::Json::Value::Self *)glwebtools::Json::Reader::currentValue((glwebtools::Json::Reader::Self *)a1);
      *(uint32_t *)&v14[1] = (uint32_t)(uintptr_t)(glwebtools::Json::Value::opIndex(v3, v11));
      g4_std::deque_glwebtools_Json_Value_766a9a::push_back(
        (std::deque<glwebtools::Json::Value::Self *> *)a1,
        (glwebtools::Json::Value::Self *const *)&v14[1]);
      Value = glwebtools::Json::Reader::readValue((char **)a1);
      v5 = (char *)a1[6];
      if ( v5 != a1[7] )
      {
        a1[6] = v5 - 4;
        if ( Value != 0 )
          goto LABEL_4;
        return glwebtools::Json::Reader::recoverFromError((uint32_t *)(a1), 4);
      }
      v13 = Value;
      opDelete(a1[6]);
      v9 = (void **)((char *)a1[9] - 4);
      a1[9] = v9;
      v10 = (char *)*v9;
      a1[7] = *v9;
      a1[8] = v10 + 512;
      a1[6] = v10 + 508;
      if ( v13 == 0 )
        return glwebtools::Json::Reader::recoverFromError((uint32_t *)(a1), 4);
LABEL_4:
      while ( 1 )
      {
        Token = glwebtools::Json::Reader::readToken((glwebtools::Json::Reader::Self *)a1, (uint32_t *)(v16));
        if ( v16[0] != 12 )
          break;
        if ( Token == 0 )
          goto LABEL_10;
      }
      if ( Token == 0 )
      {
LABEL_10:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Missing ',' or ']' in array declaration", (int)(uintptr_t)(v14));
        result = glwebtools::Json::Reader::addErrorAndRecover((uint32_t *)(a1), (int)(uintptr_t)(&v15), v16, 4);
        v8 = (void *)(v15 - 12);
        if ( (uint32_t *)(v15 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
        {
          v12 = result;
          g4_std::string::Rep::M_destroy(v8);
          return v12;
        }
        return result;
      }
      if ( v16[0] != 4 )
        continue;
      return 1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::parse  (binary VA: 0x13ffff0)
// Original: glwebtools::Json::Reader::parse
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::parse(glwebtools::Json::Reader::Self *self, const char *a2, const char *a3, glwebtools::Json::Value::Self *a4, bool a5)
{
  bool v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  void **v14;
  void *v15;
  char *v16;
  char *v17;
  int *v18;
  int v19;
  int v20;
  int Value;
  void *v23;
  int v24;
  int v25;
  typedef uint32_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef glwebtools::Json::Value::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[10];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v30)) > _g4_s4 ? (24u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v31)) > _g4_s5 ? (28u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v32)) > _g4_s6 ? (36u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v33)) > _g4_s7 ? (44u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (54u + sizeof(_g4_t_v34)) > _g4_s8 ? (54u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v35)) > _g4_s9 ? (60u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v36)) > _g4_s10 ? (64u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v37)) > _g4_s11 ? (68u + sizeof(_g4_t_v37)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 54u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);

  v5 = false;
  if ( *((uint8_t *)self + 108) != 0 )
    v5 = a5;
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(a3);
  *((uint8_t *)self + 110) = v5;
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 104, &unk_1B15112, 0);
  v27 = *((uint32_t *)self + 12);
  v33 = *((uint32_t *)self + 13);
  v31 = *((uint32_t *)self + 14);
  v32 = *((uint32_t *)self + 15);
  v29 = *((uint32_t *)self + 16);
  v30 = *((uint32_t *)self + 17);
  v28 = *((uint32_t *)self + 19);
  if ( v28 > v32 + 4 )
  {
    v26 = (uint32_t *)(v32 + 4);
    do
    {
      v6 = 0;
      v7 = *v26 + 12;
      do
      {
        v8 = *(uint32_t *)(v7 + v6);
        if ( (uint32_t *)(v8 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v8 - 12));
        }
        v6 += 20;
      }
      while ( v6 != 500 );
      ++v26;
    }
    while ( v28 > (unsigned int)(uintptr_t)(v26) );
  }
  if ( v32 == v28 )
  {
    if ( v27 != v29 )
    {
      v24 = v27;
      do
      {
        v25 = *(uint32_t *)(v24 + 12);
        if ( (uint32_t *)(v25 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v25 - 12));
        }
        v24 += 20;
      }
      while ( v29 != v24 );
    }
  }
  else
  {
    if ( v27 != v31 )
    {
      v9 = v27;
      do
      {
        v10 = *(uint32_t *)(v9 + 12);
        if ( (uint32_t *)(v10 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v10 - 12));
        }
        v9 += 20;
      }
      while ( v31 != v9 );
    }
    if ( v29 != v30 )
    {
      v11 = v30;
      do
      {
        v12 = *(uint32_t *)(v11 + 12);
        if ( (uint32_t *)(v12 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v12 - 12));
        }
        v11 += 20;
      }
      while ( v29 != v11 );
    }
  }
  v13 = *((uint32_t *)self + 19) + 4;
  if ( v32 + 4 < v13 )
  {
    v14 = (void **)(v32 + 4);
    do
    {
      v15 = *v14++;
      opDelete(v15);
    }
    while ( v13 > (unsigned int)(uintptr_t)(v14) );
  }
  *((uint32_t *)self + 16) = v27;
  *((uint32_t *)self + 17) = v33;
  *((uint32_t *)self + 18) = v31;
  *((uint32_t *)self + 19) = v32;
  v16 = *((char **)self + 6);
  v17 = *((char **)self + 2);
  while ( v16 != v17 )
  {
    while ( v16 == *((char **)self + 7) )
    {
      opDelete(v16);
      v18 = (int *)(*((uint32_t *)self + 9) - 4);
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v18);
      v19 = *v18;
      *((uint32_t *)self + 7) = *v18;
      v20 = v19 + 512;
      v16 = (char *)(v19 + 508);
      *((uint32_t *)self + 8) = v20;
      v17 = *((char **)self + 2);
      *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v16);
      if ( v16 == v17 )
        goto LABEL_26;
    }
    v16 -= 4;
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v16);
  }
LABEL_26:
  v35 = a4;
  g4_std::deque_glwebtools_Json_Value_766a9a::push_back(self, &v35);
  Value = glwebtools::Json::Reader::readValue((char **)self);
  glwebtools::Json::Reader::skipCommentTokens(self, (uint32_t *)(v37));
  if ( *((uint8_t *)self + 110) != 0 && *(uint32_t *)(*((uint32_t *)self + 26) - 12) != 0 )
  {
    glwebtools::Json::Value::setComment((int)(uintptr_t)(a4), (char **)self + 26, 2);
    if ( *((uint8_t *)self + 109) == 0 )
      return Value;
  }
  else if ( *((uint8_t *)self + 109) == 0 )
  {
    return Value;
  }
  if ( (uint8_t)glwebtools::Json::Value::isArray(a4) == 0
    && (uint8_t)glwebtools::Json::Value::isObject(a4) == 0 )
  {
    v37[2] = (int)(uintptr_t)(a3);
    v37[1] = (int)(uintptr_t)(a2);
    v37[0] = 13;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "A valid JSON document must be either an array or an object value.", (int)(uintptr_t)(&v34));
    glwebtools::Json::Reader::addError((uint32_t *)(self), (int)(uintptr_t)(&v36), v37, 0);
    v23 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) == dword_213B808 )
    {
      return 0;
    }
    else
    {
      Value = 0;
      if ( __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v23);
    }
  }
  return Value;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::parse  (binary VA: 0x1400480)
// Original: glwebtools::Json::Reader::parse
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::parse(glwebtools::Json::Reader::Self *self, char *s, glwebtools::Json::Value::Self *a3, bool a4)
{
  size_t v4;

  v4 = strlen(s);
  return glwebtools::Json::Reader::parse(self, s, &s[v4], a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::parse  (binary VA: 0x14004f0)
// Original: glwebtools::Json::Reader::parse
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::parse(glwebtools::Json::Reader::Self *a1, const char **a2, glwebtools::Json::Value::Self *a3, char a4)
{
  return glwebtools::Json::Reader::parse(a1, *a2, &(*a2)[*((uint32_t *)*a2 - 3)], a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::Reader::parse  (binary VA: 0x1400540)
// Original: glwebtools::Json::Reader::parse
// ----------------------------------------------------------------------------
int glwebtools::Json::Reader::parse(glwebtools::Json::Reader::Self *a1, int a2, glwebtools::Json::Value::Self *a3, char a4)
{
  int result;
  void *v5;
  typedef uint8_t _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v7[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1905A30(a2, v7, -1);
  result = glwebtools::Json::Reader::parse(a1, (const char **)v7, a3, a4);
  v5 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = result;
    g4_std::string::Rep::M_destroy(v5);
    return v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::FastWriter::write  (binary VA: 0x1400600)
// Original: glwebtools::Json::FastWriter::write
// ----------------------------------------------------------------------------
glwebtools::Json::FastWriter::Self * glwebtools::Json::FastWriter::write(glwebtools::Json::FastWriter::Self *self, const glwebtools::Json::Value::Self *a2, int a3)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  G4_VCALL<void>(a2, 8, a3, self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::write  (binary VA: 0x1400650)
// Original: glwebtools::Json::StyledWriter::write
// ----------------------------------------------------------------------------
glwebtools::Json::StyledWriter::Self * glwebtools::Json::StyledWriter::write(glwebtools::Json::StyledWriter::Self *self, const glwebtools::Json::Value::Self *a2, int a3)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  G4_VCALL<void>(a2, 8, a3, self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::DefaultValueAllocator::Destroy  (binary VA: 0x14006a0)
// Original: glwebtools::Json::DefaultValueAllocator::~DefaultValueAllocator
// ----------------------------------------------------------------------------
void glwebtools::Json::DefaultValueAllocator::Destroy(glwebtools::Json::DefaultValueAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E68);
  glwebtools::Json::ValueAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::DefaultValueAllocator::makeMemberName  (binary VA: 0x14006d0)
// Original: glwebtools::Json::DefaultValueAllocator::makeMemberName
// ----------------------------------------------------------------------------
int glwebtools::Json::DefaultValueAllocator::makeMemberName(glwebtools::Json::DefaultValueAllocator::Self *self, const char *a2)
{
  return G4_VCALL<int>(self, 16, a2, -1);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::DefaultValueAllocator::releaseMemberName  (binary VA: 0x1400700)
// Original: glwebtools::Json::DefaultValueAllocator::releaseMemberName
// ----------------------------------------------------------------------------
int glwebtools::Json::DefaultValueAllocator::releaseMemberName(glwebtools::Json::DefaultValueAllocator::Self *self, char *a2)
{
  return G4_VCALL<int>(self, 20, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::FastWriter::Destroy  (binary VA: 0x1400720)
// Original: glwebtools::Json::FastWriter::~FastWriter
// ----------------------------------------------------------------------------
void glwebtools::Json::FastWriter::Destroy(glwebtools::Json::FastWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E20);
  glwebtools::Json::Writer::Destroy((glwebtools::Json::Writer::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::DefaultValueAllocator::releaseStringValue  (binary VA: 0x1400750)
// Original: glwebtools::Json::DefaultValueAllocator::releaseStringValue
// ----------------------------------------------------------------------------
void glwebtools::Json::DefaultValueAllocator::releaseStringValue(glwebtools::Json::DefaultValueAllocator::Self *self, char *ptr)
{
  if ( ptr != nullptr )
    free(ptr);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::DefaultValueAllocator::duplicateStringValue  (binary VA: 0x1400780)
// Original: glwebtools::Json::DefaultValueAllocator::duplicateStringValue
// ----------------------------------------------------------------------------
void * glwebtools::Json::DefaultValueAllocator::duplicateStringValue(glwebtools::Json::DefaultValueAllocator::Self *self, char *s, size_t a3)
{
  size_t n;
  void *v4;

  n = a3;
  if ( a3 == -1 )
    n = strlen(s);
  v4 = malloc(n + 1);
  memcpy(v4, s, n);
  *((uint8_t *)v4 + n) = 0;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::DefaultValueAllocator::Destroy_ea14007f0  (binary VA: 0x14007f0)
// Original: glwebtools::Json::DefaultValueAllocator::~DefaultValueAllocator
// ----------------------------------------------------------------------------
void glwebtools::Json::DefaultValueAllocator::Destroy_ea14007f0(glwebtools::Json::DefaultValueAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E68);
  glwebtools::Json::ValueAllocator::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::FastWriter::Destroy_ea1400840  (binary VA: 0x1400840)
// Original: glwebtools::Json::FastWriter::~FastWriter
// ----------------------------------------------------------------------------
void glwebtools::Json::FastWriter::Destroy_ea1400840(glwebtools::Json::FastWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E20);
  glwebtools::Json::Writer::Destroy((glwebtools::Json::Writer::Self *)(self));
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::Destroy  (binary VA: 0x1400890)
// Original: glwebtools::Json::StyledWriter::~StyledWriter
// ----------------------------------------------------------------------------
void glwebtools::Json::StyledWriter::Destroy(glwebtools::Json::StyledWriter::Self *self)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E38);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t **)self + 2);
  v3 = *((uint32_t **)self + 1);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (uint32_t *)(*v3 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      ++v3;
    }
    while ( v2 != v3 );
    v3 = *((uint32_t **)self + 1);
  }
  if ( v3 != nullptr )
    opDelete(v3);
  glwebtools::Json::Writer::Destroy((glwebtools::Json::Writer::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Json::StyledWriter::Destroy_ea1400950  (binary VA: 0x1400950)
// Original: glwebtools::Json::StyledWriter::~StyledWriter
// ----------------------------------------------------------------------------
void glwebtools::Json::StyledWriter::Destroy_ea1400950(glwebtools::Json::StyledWriter::Self *self)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094E38);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t **)self + 2);
  v3 = *((uint32_t **)self + 1);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (uint32_t *)(*v3 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      ++v3;
    }
    while ( v2 != v3 );
    v3 = *((uint32_t **)self + 1);
  }
  if ( v3 != nullptr )
    opDelete(v3);
  glwebtools::Json::Writer::Destroy((glwebtools::Json::Writer::Self *)(self));
  opDelete(self);
}


