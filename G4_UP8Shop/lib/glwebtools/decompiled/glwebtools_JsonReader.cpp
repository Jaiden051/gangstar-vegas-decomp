#include "Core/Utils/DecompTypes.h"
#include "glwebtools_JsonReader.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_JsonReader.cpp
// Library: glwebtools | Module: glwebtools_JsonReader
// Binary Address Span: 0x13df940 .. 0x13e27b0 (53 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13df940 (size: 34 bytes)
// Symbol:    _ZN10glwebtools10JsonReader8IteratorC2Ev
// Demangled: glwebtools::JsonReader::Iterator::Iterator(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools10JsonReader8IteratorC1Ev'
struct glwebtools::JsonReader::Iterator::Self *glwebtools::JsonReader::Iterator::Construct(
        glwebtools::JsonReader::Iterator::Self *self)
{
  return (struct glwebtools::JsonReader::Iterator::Self *)(uintptr_t)(glwebtools::Json::ValueIterator::Construct(self));
}
// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::Construct  (binary VA: 0x13df970)
// Original: glwebtools::JsonReader::Iterator::Iterator
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Iterator::Self * glwebtools::JsonReader::Iterator::Construct(glwebtools::JsonReader::Iterator::Self *self, const glwebtools::JsonReader::Iterator::Self *a2)
{
  return (glwebtools::JsonReader::Iterator::Self *)(uintptr_t)(glwebtools::Json::ValueIterator::Construct(self, a2));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::Construct  (binary VA: 0x13df9a0)
// Original: glwebtools::JsonReader::Iterator::Iterator
// ----------------------------------------------------------------------------
glwebtools::Json::ValueIterator::Self * glwebtools::JsonReader::Iterator::Construct(glwebtools::Json::ValueIterator::Self *a1, glwebtools::Json::ValueIterator::Self *a2)
{
  return glwebtools::Json::ValueIterator::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::opAssign  (binary VA: 0x13df9d0)
// Original: glwebtools::JsonReader::Iterator::operator=
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Iterator::Self * glwebtools::JsonReader::Iterator::opAssign(glwebtools::JsonReader::Iterator::Self *self, const glwebtools::JsonReader::Iterator::Self *a2)
{
  glwebtools::Json::ValueIterator::opAssign(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::opDec  (binary VA: 0x13dfa10)
// Original: glwebtools::JsonReader::Iterator::operator--
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Iterator::Self * glwebtools::JsonReader::Iterator::opDec(glwebtools::JsonReader::Iterator::Self *self)
{
  glwebtools::Json::ValueIteratorBase::decrement(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::opDec  (binary VA: 0x13dfa50)
// Original: glwebtools::JsonReader::Iterator::operator--
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Iterator::Self * glwebtools::JsonReader::Iterator::opDec(glwebtools::JsonReader::Iterator::Self *self, glwebtools::JsonReader::Iterator::Self *a2)
{
  glwebtools::JsonReader::Iterator::Construct(self, a2);
  glwebtools::JsonReader::Iterator::opDec(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::opInc  (binary VA: 0x13dfaa0)
// Original: glwebtools::JsonReader::Iterator::operator++
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Iterator::Self * glwebtools::JsonReader::Iterator::opInc(glwebtools::JsonReader::Iterator::Self *self)
{
  glwebtools::Json::ValueIteratorBase::increment(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::opInc  (binary VA: 0x13dfae0)
// Original: glwebtools::JsonReader::Iterator::operator++
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Iterator::Self * glwebtools::JsonReader::Iterator::opInc(glwebtools::JsonReader::Iterator::Self *self, glwebtools::JsonReader::Iterator::Self *a2)
{
  glwebtools::JsonReader::Iterator::Construct(self, a2);
  glwebtools::JsonReader::Iterator::opInc(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::opEq  (binary VA: 0x13dfb30)
// Original: glwebtools::JsonReader::Iterator::operator==
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::Iterator::opEq(glwebtools::JsonReader::Iterator::Self *self, const glwebtools::JsonReader::Iterator::Self *a2)
{
  return glwebtools::Json::ValueIteratorBase::isEqual(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::opNe  (binary VA: 0x13dfb60)
// Original: glwebtools::JsonReader::Iterator::operator!=
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::Iterator::opNe(glwebtools::JsonReader::Iterator::Self *self, const glwebtools::JsonReader::Iterator::Self *a2)
{
  return glwebtools::JsonReader::Iterator::opEq(self, a2) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::name  (binary VA: 0x13dfb90)
// Original: glwebtools::JsonReader::Iterator::name
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Iterator::Self * glwebtools::JsonReader::Iterator::name(glwebtools::JsonReader::Iterator::Self *self, glwebtools::Json::ValueIteratorBase::Self *a2)
{
  char *v2;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v2 = (char *)glwebtools::Json::ValueIteratorBase::memberName(a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v2, (int)(uintptr_t)(&v4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::index  (binary VA: 0x13dfbe0)
// Original: glwebtools::JsonReader::Iterator::index
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::Iterator::index(glwebtools::JsonReader::Iterator::Self *self)
{
  return glwebtools::Json::ValueIteratorBase::index(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Construct  (binary VA: 0x13dfc10)
// Original: glwebtools::JsonReader::JsonReader
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Self * glwebtools::JsonReader::Construct(glwebtools::JsonReader::Self *self)
{
  return (glwebtools::JsonReader::Self *)glwebtools::Json::Value::Construct(self, 0);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::parse  (binary VA: 0x13dfc40)
// Original: glwebtools::JsonReader::parse
// ----------------------------------------------------------------------------
unsigned int glwebtools::JsonReader::parse(glwebtools::Json::Value::Self *a1, int a2)
{
  void *v2;
  void *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  void *v11;
  void **v12;
  unsigned int v13;
  void *v14;
  void *v15;
  void **v16;
  unsigned int v17;
  void *v18;
  int i;
  int v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef void *_g4_t_v30[5];
  typedef unsigned int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef void *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v28)) > _g4_s6 ? (24u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v29)) > _g4_s7 ? (28u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v30)) > _g4_s8 ? (48u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v31)) > _g4_s9 ? (68u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v32)) > _g4_s10 ? (84u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v33)) > _g4_s11 ? (88u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v34)) > _g4_s12 ? (96u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v35)) > _g4_s13 ? (104u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v36)) > _g4_s14 ? (108u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v37)) > _g4_s15 ? (112u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v38)) > _g4_s16 ? (116u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v39)) > _g4_s17 ? (124u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v40)) > _g4_s18 ? (128u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v41)) > _g4_s19 ? (152u + sizeof(_g4_t_v41)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 124u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 128u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 152u);

  glwebtools::Json::Reader::Construct((glwebtools::Json::Reader::Self *)v30);
  v28 = (uint8_t)glwebtools::Json::Reader::parse((glwebtools::Json::Reader::Self *)v30, a2, a1, 1) == 0
      ? 0x80000002
      : 0;
  v2 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v26 = v38;
  v25 = v37;
  v23 = v34;
  v24 = v39;
  v29 = v36;
  v27 = v35;
  v22 = (uint32_t *)(v36 + 4);
  if ( v39 > v36 + 4 )
  {
    do
    {
      v4 = 0;
      v5 = *v22 + 12;
      do
      {
        v6 = *(uint32_t *)(v5 + v4);
        if ( (uint32_t *)(v6 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v6 - 12));
        }
        v4 += 20;
      }
      while ( v4 != 500 );
      ++v22;
    }
    while ( v24 > (unsigned int)(uintptr_t)(v22) );
  }
  if ( v24 == v29 )
  {
    for ( i = v23; v25 != i; i += 20 )
    {
      v21 = *(uint32_t *)(i + 12);
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v21 - 12));
      }
    }
  }
  else
  {
    if ( v23 != v27 )
    {
      v7 = v23;
      do
      {
        v8 = *(uint32_t *)(v7 + 12);
        if ( (uint32_t *)(v8 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v8 - 12));
        }
        v7 += 20;
      }
      while ( v27 != v7 );
    }
    if ( v25 != v26 )
    {
      v9 = v26;
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
      while ( v25 != v9 );
    }
  }
  v11 = v33;
  if ( v33 != nullptr )
  {
    v12 = (void **)v36;
    v13 = v39 + 4;
    if ( v39 + 4 > v36 )
    {
      do
      {
        v14 = *v12++;
        opDelete(v14);
      }
      while ( v13 > (unsigned int)(uintptr_t)(v12) );
      v11 = v33;
    }
    opDelete(v11);
  }
  v15 = v30[0];
  if ( v30[0] != nullptr )
  {
    v16 = (void **)v31;
    v17 = v32 + 4;
    if ( v32 + 4 > v31 )
    {
      do
      {
        v18 = *v16++;
        opDelete(v18);
      }
      while ( v17 > (unsigned int)(uintptr_t)(v16) );
      v15 = v30[0];
    }
    opDelete(v15);
  }
  return v28;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Construct  (binary VA: 0x13dff50)
// Original: glwebtools::JsonReader::JsonReader
// ----------------------------------------------------------------------------
unsigned int glwebtools::JsonReader::Construct(glwebtools::Json::Value::Self *a1, int a2)
{
  glwebtools::Json::Value::Construct(a1, 0);
  return glwebtools::JsonReader::parse(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::parse  (binary VA: 0x13dffa0)
// Original: glwebtools::JsonReader::parse
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::parse(glwebtools::JsonReader::Self *self, char *s)
{
  size_t v2;
  void *v3;
  void *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  void *v12;
  void **v13;
  unsigned int v14;
  void *v15;
  void *v16;
  void **v17;
  unsigned int v18;
  void *v19;
  int i;
  int v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef void *_g4_t_v31[5];
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v28)) > _g4_s5 ? (20u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v31)) > _g4_s8 ? (48u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v32)) > _g4_s9 ? (68u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v33)) > _g4_s10 ? (84u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v34)) > _g4_s11 ? (88u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v35)) > _g4_s12 ? (96u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v36)) > _g4_s13 ? (104u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v37)) > _g4_s14 ? (108u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v38)) > _g4_s15 ? (112u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v39)) > _g4_s16 ? (116u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v40)) > _g4_s17 ? (124u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v41)) > _g4_s18 ? (128u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v42)) > _g4_s19 ? (152u + sizeof(_g4_t_v42)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 152u);

  if ( s == nullptr )
    return -2147483646;
  glwebtools::Json::Reader::Construct((glwebtools::Json::Reader::Self *)v31);
  v2 = strlen(s);
  v29 = (uint8_t)glwebtools::Json::Reader::parse((glwebtools::Json::Reader::Self *)v31, s, &s[v2], self, true) == 0
      ? 0x80000002
      : 0;
  v3 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v27 = v39;
  v26 = v38;
  v24 = v35;
  v25 = v40;
  v30 = v37;
  v28 = v36;
  v23 = (uint32_t *)(v37 + 4);
  if ( v40 > v37 + 4 )
  {
    do
    {
      v5 = 0;
      v6 = *v23 + 12;
      do
      {
        v7 = *(uint32_t *)(v6 + v5);
        if ( (uint32_t *)(v7 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v7 - 12));
        }
        v5 += 20;
      }
      while ( v5 != 500 );
      ++v23;
    }
    while ( v25 > (unsigned int)(uintptr_t)(v23) );
  }
  if ( v25 == v30 )
  {
    for ( i = v24; v26 != i; i += 20 )
    {
      v22 = *(uint32_t *)(i + 12);
      if ( (uint32_t *)(v22 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v22 - 12));
      }
    }
  }
  else
  {
    if ( v24 != v28 )
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
      while ( v28 != v8 );
    }
    if ( v26 != v27 )
    {
      v10 = v27;
      do
      {
        v11 = *(uint32_t *)(v10 + 12);
        if ( (uint32_t *)(v11 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v11 - 12));
        }
        v10 += 20;
      }
      while ( v26 != v10 );
    }
  }
  v12 = v34;
  if ( v34 != nullptr )
  {
    v13 = (void **)v37;
    v14 = v40 + 4;
    if ( v40 + 4 > v37 )
    {
      do
      {
        v15 = *v13++;
        opDelete(v15);
      }
      while ( v14 > (unsigned int)(uintptr_t)(v13) );
      v12 = v34;
    }
    opDelete(v12);
  }
  v16 = v31[0];
  if ( v31[0] != nullptr )
  {
    v17 = (void **)v32;
    v18 = v33 + 4;
    if ( v33 + 4 > v32 )
    {
      do
      {
        v19 = *v17++;
        opDelete(v19);
      }
      while ( v18 > (unsigned int)(uintptr_t)(v17) );
      v16 = v31[0];
    }
    opDelete(v16);
  }
  return v29;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Construct  (binary VA: 0x13e02e0)
// Original: glwebtools::JsonReader::JsonReader
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Self * glwebtools::JsonReader::Construct(glwebtools::JsonReader::Self *self, char *a2)
{
  glwebtools::Json::Value::Construct(self, 0);
  return (glwebtools::JsonReader::Self *)glwebtools::JsonReader::parse(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e0330)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(glwebtools::JsonReader::Self *self, glwebtools::JSONValue::Self *a2)
{
  void *v2;
  void *v3;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  glwebtools::Json::Value::toCompactString((glwebtools::Json::Value::Self *)&v5);
  glwebtools::JSONValue::Construct(v6, (int)(uintptr_t)(&v5));
  g4_std::string::assign_str(a2, v6);
  v2 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v5 - 12);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::IsValid  (binary VA: 0x13e03e0)
// Original: glwebtools::JsonReader::IsValid
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::IsValid(glwebtools::JsonReader::Self *self)
{
  return glwebtools::Json::Value::isNull(self) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e0410)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(glwebtools::Json::Value::Self *a1, int a2)
{
  char IsValid;
  int v3;
  char isString;
  char *s;
  size_t v6;

  IsValid = glwebtools::JsonReader::IsValid(a1);
  v3 = -2147483645;
  if ( IsValid != 0 )
  {
    isString = glwebtools::Json::Value::isString(a1);
    v3 = -2147483646;
    if ( isString != 0 )
    {
      s = (char *)glwebtools::Json::Value::asCString(a1);
      v6 = strlen(s);
      g4_std_compat::string_assign(a2, s, v6);
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e0480)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(glwebtools::JsonReader::Self *self, bool *a2)
{
  char IsValid;
  int v3;
  char isBool;

  IsValid = glwebtools::JsonReader::IsValid(self);
  v3 = -2147483645;
  if ( IsValid != 0 )
  {
    isBool = glwebtools::Json::Value::isBool(self);
    v3 = -2147483646;
    if ( isBool != 0 )
    {
      *a2 = glwebtools::Json::Value::asBool(self);
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e04e0)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(long double a1, glwebtools::JsonReader::Self *self, double *a3)
{
  char IsValid;
  int v4;

  IsValid = glwebtools::JsonReader::IsValid(self);
  v4 = -2147483645;
  if ( IsValid != 0 )
  {
    if ( (uint8_t)glwebtools::Json::Value::isDouble(self) != 0
      || (uint8_t)glwebtools::Json::Value::isUInt(self) != 0
      || (uint8_t)glwebtools::Json::Value::isInt(self) != 0 )
    {
      glwebtools::Json::Value::asDouble(self);
      v4 = 0;
      *a3 = a1;
    }
    else
    {
      return -2147483646;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e0550)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(glwebtools::JsonReader::Self *self, unsigned int *a2)
{
  char IsValid;
  int v3;

  IsValid = glwebtools::JsonReader::IsValid(self);
  v3 = -2147483645;
  if ( IsValid == 0 )
    return v3;
  if ( (uint8_t)glwebtools::Json::Value::isUInt(self) != 0
    || (uint8_t)glwebtools::Json::Value::isInt(self) != 0 )
  {
    *a2 = glwebtools::Json::Value::asUInt(self);
    return 0;
  }
  return -2147483646;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e05c0)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(glwebtools::JsonReader::Self *self, int *a2)
{
  char IsValid;
  int v3;

  IsValid = glwebtools::JsonReader::IsValid(self);
  v3 = -2147483645;
  if ( IsValid == 0 )
    return v3;
  if ( (uint8_t)glwebtools::Json::Value::isUInt(self) != 0
    || (uint8_t)glwebtools::Json::Value::isInt(self) != 0 )
  {
    *a2 = glwebtools::Json::Value::asInt(self);
    return 0;
  }
  return -2147483646;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e0630)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(glwebtools::JsonReader::Self *self, uint16_t *a2)
{
  char IsValid;
  int v3;

  IsValid = glwebtools::JsonReader::IsValid(self);
  v3 = -2147483645;
  if ( IsValid == 0 )
    return v3;
  if ( (uint8_t)glwebtools::Json::Value::isUInt(self) != 0
    || (uint8_t)glwebtools::Json::Value::isInt(self) != 0 )
  {
    *a2 = glwebtools::Json::Value::asUInt(self);
    return 0;
  }
  return -2147483646;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e06a0)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(glwebtools::JsonReader::Self *self, int16_t *a2)
{
  char IsValid;
  int v3;

  IsValid = glwebtools::JsonReader::IsValid(self);
  v3 = -2147483645;
  if ( IsValid == 0 )
    return v3;
  if ( (uint8_t)glwebtools::Json::Value::isUInt(self) != 0
    || (uint8_t)glwebtools::Json::Value::isInt(self) != 0 )
  {
    *a2 = glwebtools::Json::Value::asInt(self);
    return 0;
  }
  return -2147483646;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::isInt  (binary VA: 0x13e0710)
// Original: glwebtools::JsonReader::isInt
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::isInt(glwebtools::JsonReader::Self *self)
{
  return glwebtools::Json::Value::isInt(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::isUInt  (binary VA: 0x13e0740)
// Original: glwebtools::JsonReader::isUInt
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::isUInt(glwebtools::JsonReader::Self *self)
{
  return glwebtools::Json::Value::isUInt(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::isDouble  (binary VA: 0x13e0770)
// Original: glwebtools::JsonReader::isDouble
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::isDouble(glwebtools::JsonReader::Self *self)
{
  return glwebtools::Json::Value::isDouble(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::isBool  (binary VA: 0x13e07a0)
// Original: glwebtools::JsonReader::isBool
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::isBool(glwebtools::JsonReader::Self *self)
{
  return glwebtools::Json::Value::isBool(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::isString  (binary VA: 0x13e07d0)
// Original: glwebtools::JsonReader::isString
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::isString(glwebtools::JsonReader::Self *self)
{
  return glwebtools::Json::Value::isString(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e0800)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(long double a1, glwebtools::JsonReader::Self *self, glwebtools::CustomArgument::Self *a3)
{
  int v3;
  void *v4;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef double _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef double _g4_t_v27;
  typedef uint32_t _g4_t_v28[2];
  typedef uint32_t _g4_t_v29[2];
  typedef uint32_t _g4_t_v30[2];
  typedef uint32_t _g4_t_v31[2];
  typedef uint32_t _g4_t_v32[2];
  typedef uint32_t _g4_t_v33[5];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v18)) > _g4_s1 ? (0u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v19)) > _g4_s2 ? (0u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v20)) > _g4_s3 ? (0u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v21)) > _g4_s4 ? (32u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v22)) > _g4_s5 ? (36u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v23)) > _g4_s6 ? (40u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v24)) > _g4_s7 ? (44u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v25)) > _g4_s8 ? (48u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v26)) > _g4_s9 ? (52u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v27)) > _g4_s10 ? (56u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v28)) > _g4_s11 ? (64u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v29)) > _g4_s12 ? (72u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v30)) > _g4_s13 ? (80u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v31)) > _g4_s14 ? (88u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v32)) > _g4_s15 ? (96u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v33)) > _g4_s16 ? (104u + sizeof(_g4_t_v33)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);

  v3 = -2147483646;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) == 0 )
    return v3;
  if ( (uint8_t)glwebtools::JsonReader::isString(self) != 0 )
  {
    v22 = (int)(uintptr_t)(&dword_213B814);
    v3 = glwebtools::JsonReader::read(self, (int)(uintptr_t)(&v22));
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
    {
      glwebtools::CustomArgument::Construct((int)(uintptr_t)(v29), (int)(uintptr_t)(&v22));
      glwebtools::CustomArgument::opAssign(a3, (const glwebtools::CustomArgument::Self *)v29);
      v6 = (void *)(v29[0] - 12);
      if ( (uint32_t *)(v29[0] - 12) == dword_213B808 )
      {
        v3 = 0;
      }
      else
      {
        v3 = 0;
        if ( __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v6);
      }
    }
    v4 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    return v3;
  }
  if ( (uint8_t)glwebtools::JsonReader::isUInt(self) != 0 )
  {
    v3 = glwebtools::JsonReader::read(self, (unsigned int *)&v27);
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
      return v3;
    v17 = LODWORD(v27);
    v30[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    glwebtools::CustomArgument::SetType_unsigned_int_c13960((glwebtools::CustomArgument::Self *)v30);
    glwebtools::AttributeFormatter::ToString((glwebtools::AttributeFormatter::Self *)&v23, v17);
    g4_std::string::assign_str(v30, &v23);
    v7 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    glwebtools::CustomArgument::opAssign(a3, (const glwebtools::CustomArgument::Self *)v30);
    v8 = (void *)(v30[0] - 12);
    if ( (uint32_t *)(v30[0] - 12) == dword_213B808 )
      return 0;
    v3 = 0;
    if ( __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v8);
  }
  else if ( (uint8_t)glwebtools::JsonReader::isInt(self) != 0 )
  {
    v3 = glwebtools::JsonReader::read(self, (int *)&v27);
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
      return v3;
    v18 = LODWORD(v27);
    v31[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    glwebtools::CustomArgument::SetType_int_id_3c1d17((glwebtools::CustomArgument::Self *)v31);
    glwebtools::AttributeFormatter::ToString((glwebtools::AttributeFormatter::Self *)&v24, v18);
    g4_std::string::assign_str(v31, &v24);
    v9 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    glwebtools::CustomArgument::opAssign(a3, (const glwebtools::CustomArgument::Self *)v31);
    v10 = (void *)(v31[0] - 12);
    if ( (uint32_t *)(v31[0] - 12) == dword_213B808 )
      return 0;
    v3 = 0;
    if ( __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v10);
  }
  else if ( (uint8_t)glwebtools::JsonReader::isDouble(self) != 0 )
  {
    v3 = glwebtools::JsonReader::read(a1, self, &v27);
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
      return v3;
    v20 = v27;
    v32[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    glwebtools::CustomArgument::SetType_double_id_1bf09d((glwebtools::CustomArgument::Self *)v32);
    glwebtools::AttributeFormatter::ToString((glwebtools::AttributeFormatter::Self *)&v25, v20, 2);
    g4_std::string::assign_str(v32, &v25);
    v13 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    glwebtools::CustomArgument::opAssign(a3, (const glwebtools::CustomArgument::Self *)v32);
    v14 = (void *)(v32[0] - 12);
    if ( (uint32_t *)(v32[0] - 12) == dword_213B808 )
      return 0;
    v3 = 0;
    if ( __sync_fetch_and_add((volatile int32_t *)(v32[0] - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v14);
  }
  else if ( (uint8_t)glwebtools::JsonReader::isBool(self) != 0 )
  {
    v3 = glwebtools::JsonReader::read(self, (bool *)&v27);
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
      return v3;
    v19 = LOBYTE(v27);
    v33[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    glwebtools::CustomArgument::SetType_bool_id_e025d9((glwebtools::CustomArgument::Self *)v33);
    glwebtools::AttributeFormatter::ToString((glwebtools::AttributeFormatter::Self *)&v26, v19);
    g4_std::string::assign_str(v33, &v26);
    v11 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    glwebtools::CustomArgument::opAssign(a3, (const glwebtools::CustomArgument::Self *)v33);
    v12 = (void *)(v33[0] - 12);
    if ( (uint32_t *)(v33[0] - 12) == dword_213B808 )
      return 0;
    v3 = 0;
    if ( __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v12);
  }
  else
  {
    glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v21);
    v3 = glwebtools::JsonReader::read(self, (glwebtools::JSONValue::Self *)&v21);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
    {
      glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)v28, (const glwebtools::JSONValue::Self *)&v21);
      glwebtools::CustomArgument::opAssign(a3, (const glwebtools::CustomArgument::Self *)v28);
      v16 = (void *)(v28[0] - 12);
      if ( (uint32_t *)(v28[0] - 12) == dword_213B808 )
      {
        v3 = 0;
      }
      else
      {
        v3 = 0;
        if ( __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v16);
      }
    }
    v15 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::isObject  (binary VA: 0x13e0e00)
// Original: glwebtools::JsonReader::isObject
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::isObject(glwebtools::JsonReader::Self *self)
{
  return glwebtools::Json::Value::isObject(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::isArray  (binary VA: 0x13e0e30)
// Original: glwebtools::JsonReader::isArray
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::isArray(glwebtools::JsonReader::Self *self)
{
  return glwebtools::Json::Value::isArray(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::begin  (binary VA: 0x13e0e60)
// Original: glwebtools::JsonReader::begin
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Self * glwebtools::JsonReader::begin(glwebtools::JsonReader::Self *self)
{
  typedef uint8_t _g4_t_v2[8];
  typedef uint8_t _g4_t_v3[8];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  glwebtools::Json::Value::begin((glwebtools::Json::Value::Self *)v2);
  glwebtools::Json::ValueIterator::Construct(
    (glwebtools::Json::ValueIterator::Self *)v3,
    (const glwebtools::Json::ValueConstIterator::Self *)v2);
  glwebtools::JsonReader::Iterator::Construct(self, (glwebtools::Json::ValueIterator::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::end  (binary VA: 0x13e0ed0)
// Original: glwebtools::JsonReader::end
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Self * glwebtools::JsonReader::end(glwebtools::JsonReader::Self *self)
{
  typedef uint8_t _g4_t_v2[8];
  typedef uint8_t _g4_t_v3[8];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  glwebtools::Json::Value::end((glwebtools::Json::Value::Self *)v2);
  glwebtools::Json::ValueIterator::Construct(
    (glwebtools::Json::ValueIterator::Self *)v3,
    (const glwebtools::Json::ValueConstIterator::Self *)v2);
  glwebtools::JsonReader::Iterator::Construct(self, (glwebtools::Json::ValueIterator::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::size  (binary VA: 0x13e0f40)
// Original: glwebtools::JsonReader::size
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::size(glwebtools::JsonReader::Self *self)
{
  return glwebtools::Json::Value::size(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Construct  (binary VA: 0x13e0f70)
// Original: glwebtools::JsonReader::JsonReader
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Self * glwebtools::JsonReader::Construct(glwebtools::JsonReader::Self *self, const glwebtools::Json::Value::Self *a2)
{
  return (glwebtools::JsonReader::Self *)(glwebtools::Json::Value::Construct(self, a2));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::Iterator::opMul  (binary VA: 0x13e0fa0)
// Original: glwebtools::JsonReader::Iterator::operator*
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Iterator::Self * glwebtools::JsonReader::Iterator::opMul(glwebtools::JsonReader::Iterator::Self *self, glwebtools::Json::ValueIteratorBase::Self *a2)
{
  const glwebtools::Json::Value::Self *v2;

  v2 = (const glwebtools::Json::Value::Self *)glwebtools::Json::ValueIteratorBase::deref(a2);
  glwebtools::JsonReader::Construct(self, v2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::opIndex  (binary VA: 0x13e0ff0)
// Original: glwebtools::JsonReader::operator[]
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Self * glwebtools::JsonReader::opIndex(glwebtools::JsonReader::Self *self, glwebtools::Json::Value::Self *a2, unsigned int a3)
{
  const glwebtools::Json::Value::Self *v3;

  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isArray(a2) != 0
    && (uint8_t)glwebtools::Json::Value::isValidIndex(a2, a3) != 0 )
  {
    v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, a3);
    glwebtools::JsonReader::Construct(self, v3);
  }
  else
  {
    glwebtools::JsonReader::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::opIndex  (binary VA: 0x13e1090)
// Original: glwebtools::JsonReader::operator[]
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Self * glwebtools::JsonReader::opIndex(glwebtools::JsonReader::Self *a1, glwebtools::Json::Value::Self *a2, int a3)
{
  const glwebtools::Json::Value::Self *v3;

  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && (uint8_t)glwebtools::Json::Value::isMember(a2, a3) != 0 )
  {
    v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, a3);
    glwebtools::JsonReader::Construct(a1, v3);
  }
  else
  {
    glwebtools::JsonReader::Construct(a1);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::opIndex  (binary VA: 0x13e1130)
// Original: glwebtools::JsonReader::operator[]
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Self * glwebtools::JsonReader::opIndex(glwebtools::JsonReader::Self *self, glwebtools::Json::Value::Self *a2, char *a3)
{
  const glwebtools::Json::Value::Self *v3;

  if ( a3 != nullptr
    && (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && (uint8_t)glwebtools::Json::Value::isMember(a2, a3) != 0 )
  {
    v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, a3);
    glwebtools::JsonReader::Construct(self, v3);
  }
  else
  {
    glwebtools::JsonReader::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e11d0)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(glwebtools::JsonReader::Self *self, glwebtools::JSONObject::Self *a2)
{
  glwebtools::Self *v2;
  void *v3;
  void *v4;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[8];
  typedef uint8_t _g4_t_v11[8];
  typedef uint8_t _g4_t_v12[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v11)) > _g4_s4 ? (40u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v12)) > _g4_s5 ? (48u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  v7 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(self) != 0 )
  {
    glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v10);
    while ( 1 )
    {
      glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v11);
      if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                              (glwebtools::JsonReader::Iterator::Self *)v10,
                              (const glwebtools::JsonReader::Iterator::Self *)v11) == 0 )
        return 0;
      glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v8);
      glwebtools::JsonReader::Iterator::opMul(
        (glwebtools::JsonReader::Iterator::Self *)v12,
        (glwebtools::Json::ValueIteratorBase::Self *)v10);
      v7 = glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v12, (glwebtools::JSONValue::Self *)&v8);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
      if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v7) )
        break;
      glwebtools::JsonReader::Iterator::name(
        (glwebtools::JsonReader::Iterator::Self *)&v9,
        (glwebtools::Json::ValueIteratorBase::Self *)v10);
      v2 = (glwebtools::Self *)glwebtools::JSONObject::Set((int *)a2, (int)(uintptr_t)(&v9), (int)(uintptr_t)(&v8));
      v3 = (void *)(v9 - 12);
      if ( (uint32_t *)(v9 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
      if ( !glwebtools::IsOperationSuccess(v2) )
      {
        v7 = (int)(uintptr_t)(v2);
        break;
      }
      v4 = (void *)(v8 - 12);
      if ( (uint32_t *)(v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v10);
    }
    v6 = (void *)(v8 - 12);
    if ( (uint32_t *)(v8 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e13c0)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(glwebtools::JsonReader::Self *self, glwebtools::JSONArray::Self *a2)
{
  unsigned int v2;
  glwebtools::Self *v3;
  void *v4;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[8];
  typedef uint8_t _g4_t_v10[8];
  typedef uint8_t _g4_t_v11[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v10)) > _g4_s3 ? (40u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v11)) > _g4_s4 ? (48u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);

  v7 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) != 0
    && (uint8_t)glwebtools::JsonReader::isArray(self) != 0 )
  {
    glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v9);
    while ( 1 )
    {
      glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v10);
      if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                              (glwebtools::JsonReader::Iterator::Self *)v9,
                              (const glwebtools::JsonReader::Iterator::Self *)v10) == 0 )
        return 0;
      glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v8);
      glwebtools::JsonReader::Iterator::opMul(
        (glwebtools::JsonReader::Iterator::Self *)v11,
        (glwebtools::Json::ValueIteratorBase::Self *)v9);
      v7 = glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v11, (glwebtools::JSONValue::Self *)&v8);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
      if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v7) )
        break;
      v2 = glwebtools::JsonReader::Iterator::index((glwebtools::JsonReader::Iterator::Self *)v9);
      v3 = (glwebtools::Self *)glwebtools::JSONArray::Set(a2, v2, (const glwebtools::JSONValue::Self *)&v8);
      if ( !glwebtools::IsOperationSuccess(v3) )
      {
        v7 = (int)(uintptr_t)(v3);
        break;
      }
      v4 = (void *)(v8 - 12);
      if ( (uint32_t *)(v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v9);
    }
    v6 = (void *)(v8 - 12);
    if ( (uint32_t *)(v8 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::include  (binary VA: 0x13e1560)
// Original: glwebtools::JsonReader::include
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::include(glwebtools::JsonReader::Self *self, const char **a2, const char **a3, glwebtools::JSONObject::Self *a4)
{
  int v4;
  void *v5;
  glwebtools::Self *v6;
  void *v7;
  void *v8;
  void *v10;
  typedef glwebtools::Self *_g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[8];
  typedef uint8_t _g4_t_v17[8];
  typedef uint8_t _g4_t_v18[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v12)) > _g4_s1 ? (31u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v13)) > _g4_s2 ? (36u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v14)) > _g4_s3 ? (40u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v15)) > _g4_s4 ? (44u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v16)) > _g4_s5 ? (48u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v17)) > _g4_s6 ? (56u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v18)) > _g4_s7 ? (64u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 31u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);

  v4 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) == 0
    || (uint8_t)glwebtools::JsonReader::isObject(self) == 0 )
  {
    return v4;
  }
  if ( a2 == nullptr || a3 == nullptr )
    return -2147483646;
  glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v16);
  while ( 1 )
  {
    glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v17);
    if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                            (glwebtools::JsonReader::Iterator::Self *)v16,
                            (const glwebtools::JsonReader::Iterator::Self *)v17) == 0 )
      return 0;
    v12 = 0;
    glwebtools::JsonReader::Iterator::name(
      (glwebtools::JsonReader::Iterator::Self *)&v13,
      (glwebtools::Json::ValueIteratorBase::Self *)v16);
    v4 = glwebtools::Find(a2, a3, &v13, &v12);
    v5 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v4) )
      return v4;
    if ( v12 != 0 )
      break;
LABEL_13:
    glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v16);
  }
  glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v14);
  glwebtools::JsonReader::Iterator::opMul(
    (glwebtools::JsonReader::Iterator::Self *)v18,
    (glwebtools::Json::ValueIteratorBase::Self *)v16);
  v11 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v18, (glwebtools::JSONValue::Self *)&v14);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v18);
  if ( glwebtools::IsOperationSuccess(v11) )
  {
    glwebtools::JsonReader::Iterator::name(
      (glwebtools::JsonReader::Iterator::Self *)&v15,
      (glwebtools::Json::ValueIteratorBase::Self *)v16);
    v6 = (glwebtools::Self *)glwebtools::JSONObject::Set((int *)a4, (int)(uintptr_t)(&v15), (int)(uintptr_t)(&v14));
    v7 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    if ( glwebtools::IsOperationSuccess(v6) )
    {
      v8 = (void *)(v14 - 12);
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      goto LABEL_13;
    }
    v11 = v6;
  }
  v10 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808 )
  {
    v4 = (int)(uintptr_t)(v11);
    if ( __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v10);
    return v4;
  }
  return (int)(uintptr_t)(v11);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::include  (binary VA: 0x13e1830)
// Original: glwebtools::JsonReader::include
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::include(glwebtools::JsonReader::Self *self, unsigned int *a2, unsigned int *a3, glwebtools::JSONArray::Self *a4)
{
  int v4;
  int v5;
  char v6;
  unsigned int *v7;
  unsigned int v8;
  void *v9;
  void *v10;
  typedef char _g4_t_v12;
  typedef glwebtools::Self *_g4_t_v13;
  typedef glwebtools::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[8];
  typedef uint8_t _g4_t_v17[8];
  typedef uint8_t _g4_t_v18[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v17)) > _g4_s5 ? (40u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  v4 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) == 0
    || (uint8_t)glwebtools::JsonReader::isArray(self) == 0 )
  {
    return v4;
  }
  if ( a2 == nullptr || a3 == nullptr )
    return -2147483646;
  glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v16);
  while ( 1 )
  {
    glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v17);
    if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                            (glwebtools::JsonReader::Iterator::Self *)v16,
                            (const glwebtools::JsonReader::Iterator::Self *)v17) == 0 )
      return 0;
    v5 = glwebtools::JsonReader::Iterator::index((glwebtools::JsonReader::Iterator::Self *)v16);
    v6 = 0;
    if ( a2 != a3 )
    {
      v6 = 1;
      if ( v5 != *a2 )
      {
        v7 = a2;
        do
        {
          if ( a3 == ++v7 )
          {
            v6 = 0;
            goto LABEL_13;
          }
        }
        while ( v5 != *v7 );
        v6 = 1;
      }
    }
LABEL_13:
    v12 = v6;
    if ( !glwebtools::IsOperationSuccess(nullptr) )
      return 0;
    if ( v12 != 0 )
      break;
LABEL_18:
    glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v16);
  }
  glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v15);
  glwebtools::JsonReader::Iterator::opMul(
    (glwebtools::JsonReader::Iterator::Self *)v18,
    (glwebtools::Json::ValueIteratorBase::Self *)v16);
  v14 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v18, (glwebtools::JSONValue::Self *)&v15);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v18);
  if ( glwebtools::IsOperationSuccess(v14) )
  {
    v8 = glwebtools::JsonReader::Iterator::index((glwebtools::JsonReader::Iterator::Self *)v16);
    v13 = (glwebtools::Self *)glwebtools::JSONArray::Set(a4, v8, (const glwebtools::JSONValue::Self *)&v15);
    if ( glwebtools::IsOperationSuccess(v13) )
    {
      v9 = (void *)(v15 - 12);
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      goto LABEL_18;
    }
    v14 = v13;
  }
  v10 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) == dword_213B808 )
    return (int)(uintptr_t)(v14);
  v4 = (int)(uintptr_t)(v14);
  if ( __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v10);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::exclude  (binary VA: 0x13e1a60)
// Original: glwebtools::JsonReader::exclude
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::exclude(glwebtools::JsonReader::Self *self, const char **a2, const char **a3, glwebtools::JSONObject::Self *a4)
{
  int v4;
  void *v5;
  glwebtools::Self *v6;
  void *v7;
  void *v8;
  void *v10;
  typedef glwebtools::Self *_g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[8];
  typedef uint8_t _g4_t_v17[8];
  typedef uint8_t _g4_t_v18[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v12)) > _g4_s1 ? (31u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v13)) > _g4_s2 ? (36u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v14)) > _g4_s3 ? (40u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v15)) > _g4_s4 ? (44u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v16)) > _g4_s5 ? (48u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v17)) > _g4_s6 ? (56u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v18)) > _g4_s7 ? (64u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 31u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);

  v4 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) == 0
    || (uint8_t)glwebtools::JsonReader::isObject(self) == 0 )
  {
    return v4;
  }
  if ( a2 == nullptr || a3 == nullptr )
    return -2147483646;
  glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v16);
  while ( 1 )
  {
    glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v17);
    if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                            (glwebtools::JsonReader::Iterator::Self *)v16,
                            (const glwebtools::JsonReader::Iterator::Self *)v17) == 0 )
      return 0;
    v12 = 0;
    glwebtools::JsonReader::Iterator::name(
      (glwebtools::JsonReader::Iterator::Self *)&v13,
      (glwebtools::Json::ValueIteratorBase::Self *)v16);
    v4 = glwebtools::Find(a2, a3, &v13, &v12);
    v5 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v4) )
      return v4;
    if ( v12 == 0 )
      break;
LABEL_13:
    glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v16);
  }
  glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v14);
  glwebtools::JsonReader::Iterator::opMul(
    (glwebtools::JsonReader::Iterator::Self *)v18,
    (glwebtools::Json::ValueIteratorBase::Self *)v16);
  v11 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v18, (glwebtools::JSONValue::Self *)&v14);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v18);
  if ( glwebtools::IsOperationSuccess(v11) )
  {
    glwebtools::JsonReader::Iterator::name(
      (glwebtools::JsonReader::Iterator::Self *)&v15,
      (glwebtools::Json::ValueIteratorBase::Self *)v16);
    v6 = (glwebtools::Self *)glwebtools::JSONObject::Set((int *)a4, (int)(uintptr_t)(&v15), (int)(uintptr_t)(&v14));
    v7 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    if ( glwebtools::IsOperationSuccess(v6) )
    {
      v8 = (void *)(v14 - 12);
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      goto LABEL_13;
    }
    v11 = v6;
  }
  v10 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808 )
  {
    v4 = (int)(uintptr_t)(v11);
    if ( __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v10);
    return v4;
  }
  return (int)(uintptr_t)(v11);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::exclude  (binary VA: 0x13e1d30)
// Original: glwebtools::JsonReader::exclude
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::exclude(glwebtools::JsonReader::Self *self, unsigned int *a2, unsigned int *a3, glwebtools::JSONArray::Self *a4)
{
  int v4;
  int v5;
  char v6;
  unsigned int *v7;
  unsigned int v8;
  void *v9;
  void *v10;
  typedef char _g4_t_v12;
  typedef glwebtools::Self *_g4_t_v13;
  typedef glwebtools::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[8];
  typedef uint8_t _g4_t_v17[8];
  typedef uint8_t _g4_t_v18[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v17)) > _g4_s5 ? (40u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  v4 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) == 0
    || (uint8_t)glwebtools::JsonReader::isArray(self) == 0 )
  {
    return v4;
  }
  if ( a2 == nullptr || a3 == nullptr )
    return -2147483646;
  glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v16);
  while ( 1 )
  {
    glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v17);
    if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                            (glwebtools::JsonReader::Iterator::Self *)v16,
                            (const glwebtools::JsonReader::Iterator::Self *)v17) == 0 )
      return 0;
    v5 = glwebtools::JsonReader::Iterator::index((glwebtools::JsonReader::Iterator::Self *)v16);
    v6 = 0;
    if ( a2 != a3 )
    {
      v6 = 1;
      if ( v5 != *a2 )
      {
        v7 = a2;
        do
        {
          if ( a3 == ++v7 )
          {
            v6 = 0;
            goto LABEL_13;
          }
        }
        while ( v5 != *v7 );
        v6 = 1;
      }
    }
LABEL_13:
    v12 = v6;
    if ( !glwebtools::IsOperationSuccess(nullptr) )
      return 0;
    if ( v12 == 0 )
      break;
LABEL_18:
    glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v16);
  }
  glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v15);
  glwebtools::JsonReader::Iterator::opMul(
    (glwebtools::JsonReader::Iterator::Self *)v18,
    (glwebtools::Json::ValueIteratorBase::Self *)v16);
  v14 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v18, (glwebtools::JSONValue::Self *)&v15);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v18);
  if ( glwebtools::IsOperationSuccess(v14) )
  {
    v8 = glwebtools::JsonReader::Iterator::index((glwebtools::JsonReader::Iterator::Self *)v16);
    v13 = (glwebtools::Self *)glwebtools::JSONArray::Set(a4, v8, (const glwebtools::JSONValue::Self *)&v15);
    if ( glwebtools::IsOperationSuccess(v13) )
    {
      v9 = (void *)(v15 - 12);
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      goto LABEL_18;
    }
    v14 = v13;
  }
  v10 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) == dword_213B808 )
    return (int)(uintptr_t)(v14);
  v4 = (int)(uintptr_t)(v14);
  if ( __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v10);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::ToString  (binary VA: 0x13e1f60)
// Original: glwebtools::JsonReader::ToString
// ----------------------------------------------------------------------------
glwebtools::JsonReader::Self * glwebtools::JsonReader::ToString(glwebtools::JsonReader::Self *self)
{
  glwebtools::Json::Value::toCompactString(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::ToString  (binary VA: 0x13e1fa0)
// Original: glwebtools::JsonReader::ToString
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::ToString(glwebtools::Json::Value::Self *a1, int a2)
{
  return (int)(uintptr_t)(glwebtools::Json::Value::toCompactString(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::exclude  (binary VA: 0x13e1fd0)
// Original: glwebtools::JsonReader::exclude
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::exclude(long double a1, glwebtools::JsonReader::Self *self, const char **a3, const char **a4, glwebtools::CustomAttributeList::Self *a5)
{
  int v5;
  void *v6;
  uint32_t *v7;
  uint32_t *v8;
  char v9;
  glwebtools::CustomAttribute::Self *v10;
  uint32_t *s1;
  const void *s2;
  size_t v13;
  size_t v14;
  size_t n;
  int v16;
  int v17;
  uint32_t *v18;
  glwebtools::CustomAttribute::Self *v19;
  uint32_t *v20;
  const void *v21;
  size_t v22;
  size_t v23;
  size_t v24;
  int v25;
  int v26;
  void *v27;
  void *v28;
  void *v29;
  void *v30;
  void *v31;
  typedef uint8_t _g4_t_v33[17];
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[8];
  typedef uint8_t _g4_t_v38[8];
  typedef int _g4_t_v39[2];
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[44];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v33)) > _g4_s0 ? (12u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v34)) > _g4_s1 ? (29u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v35)) > _g4_s2 ? (36u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v36)) > _g4_s3 ? (40u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v37)) > _g4_s4 ? (44u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v38)) > _g4_s5 ? (52u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v39)) > _g4_s6 ? (60u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v40)) > _g4_s7 ? (68u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v41)) > _g4_s8 ? (72u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v42)) > _g4_s9 ? (80u + sizeof(_g4_t_v42)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 29u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);

  v5 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(self) != 0 )
  {
    if ( a3 != nullptr && a4 != nullptr )
    {
      glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v37);
      while ( 1 )
      {
        glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v38);
        if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                (glwebtools::JsonReader::Iterator::Self *)v37,
                                (const glwebtools::JsonReader::Iterator::Self *)v38) == 0 )
          return 0;
        v34 = 0;
        glwebtools::JsonReader::Iterator::name(
          (glwebtools::JsonReader::Iterator::Self *)&v35,
          (glwebtools::Json::ValueIteratorBase::Self *)v37);
        v5 = glwebtools::Find(a3, a4, &v35, &v34);
        v6 = (void *)(v35 - 12);
        if ( (uint32_t *)(v35 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
        if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v5) )
          return v5;
        if ( v34 != 0 )
          goto LABEL_33;
        glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)v39);
        glwebtools::JsonReader::Iterator::opMul(
          (glwebtools::JsonReader::Iterator::Self *)v42,
          (glwebtools::Json::ValueIteratorBase::Self *)v37);
        v5 = glwebtools::JsonReader::read(a1, (glwebtools::JsonReader::Self *)v42, (glwebtools::CustomArgument::Self *)v39);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v42);
        if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v5) )
        {
          v31 = (void *)(v39[0] - 12);
          if ( (uint32_t *)(v39[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v31);
          }
          return v5;
        }
        glwebtools::JsonReader::Iterator::name(
          (glwebtools::JsonReader::Iterator::Self *)&v36,
          (glwebtools::Json::ValueIteratorBase::Self *)v37);
        g4_std::string::construct_copy(&v40, &v36);
        glwebtools::CustomArgument::Construct(
          (glwebtools::CustomArgument::Self *)&v41,
          (const glwebtools::CustomArgument::Self *)v39);
        v7 = *((uint32_t **)a5 + 2);
        if ( v7 == nullptr )
        {
          v7 = (uint32_t *)((char *)a5 + 4);
          goto LABEL_22;
        }
        while ( 1 )
        {
          v10 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v7 + 4));
          s1 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v40);
          s2 = *(const void **)v10;
          v13 = *(s1 - 3);
          v14 = *(uint32_t *)(*(uint32_t *)v10 - 12);
          n = v13;
          if ( v14 <= v13 )
            n = v14;
          v16 = v13 - v14;
          v17 = memcmp(s1, s2, n);
          if ( v17 == 0 )
            v17 = v16;
          if ( v17 >= 0 )
            break;
          v8 = (uint32_t *)v7[2];
          v9 = 1;
          if ( v8 == nullptr )
            goto LABEL_21;
LABEL_14:
          v7 = v8;
        }
        v8 = (uint32_t *)v7[3];
        v9 = 0;
        if ( v8 != nullptr )
          goto LABEL_14;
LABEL_21:
        if ( v9 != 0 )
        {
LABEL_22:
          if ( *((uint32_t **)a5 + 3) != v7 )
          {
            v18 = (uint32_t *)sub_19048F0(v7);
            goto LABEL_24;
          }
          goto LABEL_34;
        }
        v18 = v7;
LABEL_24:
        v19 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v40);
        v20 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v18 + 4));
        v21 = *(const void **)v19;
        v22 = *(v20 - 3);
        v23 = *(uint32_t *)(*(uint32_t *)v19 - 12);
        v24 = v22;
        if ( v23 <= v22 )
          v24 = v23;
        v25 = v22 - v23;
        v26 = memcmp(v20, v21, v24);
        if ( v26 == 0 )
          v26 = v25;
        if ( v26 < 0 )
LABEL_34:
          g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_insert(v33);
        v27 = (void *)(v41 - 12);
        if ( (uint32_t *)(v41 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v27);
        }
        v28 = (void *)(v40 - 12);
        if ( (uint32_t *)(v40 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v28);
        }
        v29 = (void *)(v36 - 12);
        if ( (uint32_t *)(v36 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v29);
        }
        v30 = (void *)(v39[0] - 12);
        if ( (uint32_t *)(v39[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v30);
        }
LABEL_33:
        glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v37);
      }
    }
    return -2147483646;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::read  (binary VA: 0x13e2420)
// Original: glwebtools::JsonReader::read
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::read(long double a1, glwebtools::JsonReader::Self *self, glwebtools::CustomAttributeList::Self *a3)
{
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  char v6;
  glwebtools::CustomAttribute::Self *v7;
  uint32_t *s1;
  const void *s2;
  size_t v10;
  size_t v11;
  size_t n;
  int v13;
  int v14;
  uint32_t *v15;
  glwebtools::CustomAttribute::Self *v16;
  uint32_t *v17;
  const void *v18;
  size_t v19;
  size_t v20;
  size_t v21;
  int v22;
  int v23;
  void *v24;
  void *v25;
  void *v26;
  void *v27;
  void *v28;
  typedef uint8_t _g4_t_v30[7];
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[8];
  typedef uint8_t _g4_t_v33[8];
  typedef int _g4_t_v34[2];
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v31)) > _g4_s1 ? (24u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v32)) > _g4_s2 ? (28u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v33)) > _g4_s3 ? (36u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v34)) > _g4_s4 ? (44u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v35)) > _g4_s5 ? (52u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v36)) > _g4_s6 ? (56u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v37)) > _g4_s7 ? (64u + sizeof(_g4_t_v37)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);

  v3 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(self) != 0 )
  {
    glwebtools::CustomAttributeList::clear(a3);
    glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v32);
    while ( 1 )
    {
      glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v33);
      if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                              (glwebtools::JsonReader::Iterator::Self *)v32,
                              (const glwebtools::JsonReader::Iterator::Self *)v33) == 0 )
        return 0;
      glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)v34);
      glwebtools::JsonReader::Iterator::opMul(
        (glwebtools::JsonReader::Iterator::Self *)v37,
        (glwebtools::Json::ValueIteratorBase::Self *)v32);
      v3 = glwebtools::JsonReader::read(a1, (glwebtools::JsonReader::Self *)v37, (glwebtools::CustomArgument::Self *)v34);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v37);
      if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
      {
        v28 = (void *)(v34[0] - 12);
        if ( (uint32_t *)(v34[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v28);
        }
        return v3;
      }
      glwebtools::JsonReader::Iterator::name(
        (glwebtools::JsonReader::Iterator::Self *)&v31,
        (glwebtools::Json::ValueIteratorBase::Self *)v32);
      g4_std::string::construct_copy(&v35, &v31);
      glwebtools::CustomArgument::Construct(
        (glwebtools::CustomArgument::Self *)&v36,
        (const glwebtools::CustomArgument::Self *)v34);
      v4 = *((uint32_t **)a3 + 2);
      if ( v4 == nullptr )
      {
        v4 = (uint32_t *)((char *)a3 + 4);
        goto LABEL_17;
      }
      while ( 1 )
      {
        v7 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v4 + 4));
        s1 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v35);
        s2 = *(const void **)v7;
        v10 = *(s1 - 3);
        v11 = *(uint32_t *)(*(uint32_t *)v7 - 12);
        n = v10;
        if ( v11 <= v10 )
          n = v11;
        v13 = v10 - v11;
        v14 = memcmp(s1, s2, n);
        if ( v14 == 0 )
          v14 = v13;
        if ( v14 >= 0 )
          break;
        v5 = (uint32_t *)v4[2];
        v6 = 1;
        if ( v5 == nullptr )
          goto LABEL_16;
LABEL_9:
        v4 = v5;
      }
      v5 = (uint32_t *)v4[3];
      v6 = 0;
      if ( v5 != nullptr )
        goto LABEL_9;
LABEL_16:
      if ( v6 != 0 )
      {
LABEL_17:
        if ( *((uint32_t **)a3 + 3) != v4 )
        {
          v15 = (uint32_t *)sub_19048F0(v4);
          goto LABEL_19;
        }
        goto LABEL_29;
      }
      v15 = v4;
LABEL_19:
      v16 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v35);
      v17 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v15 + 4));
      v18 = *(const void **)v16;
      v19 = *(v17 - 3);
      v20 = *(uint32_t *)(*(uint32_t *)v16 - 12);
      v21 = v19;
      if ( v20 <= v19 )
        v21 = v20;
      v22 = v19 - v20;
      v23 = memcmp(v17, v18, v21);
      if ( v23 == 0 )
        v23 = v22;
      if ( v23 < 0 )
LABEL_29:
        g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_insert(v30);
      v24 = (void *)(v36 - 12);
      if ( (uint32_t *)(v36 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v24);
      }
      v25 = (void *)(v35 - 12);
      if ( (uint32_t *)(v35 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v25);
      }
      v26 = (void *)(v31 - 12);
      if ( (uint32_t *)(v31 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v26);
      }
      v27 = (void *)(v34[0] - 12);
      if ( (uint32_t *)(v34[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v27);
      }
      glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v32);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonReader::include  (binary VA: 0x13e27b0)
// Original: glwebtools::JsonReader::include
// ----------------------------------------------------------------------------
int glwebtools::JsonReader::include(long double a1, glwebtools::JsonReader::Self *self, const char **a3, const char **a4, glwebtools::CustomAttributeList::Self *a5)
{
  int v5;
  void *v6;
  uint32_t *v7;
  uint32_t *v8;
  char v9;
  glwebtools::CustomAttribute::Self *v10;
  uint32_t *s1;
  const void *s2;
  size_t v13;
  size_t v14;
  size_t n;
  int v16;
  int v17;
  uint32_t *v18;
  glwebtools::CustomAttribute::Self *v19;
  uint32_t *v20;
  const void *v21;
  size_t v22;
  size_t v23;
  size_t v24;
  int v25;
  int v26;
  void *v27;
  void *v28;
  void *v29;
  void *v30;
  void *v31;
  typedef uint8_t _g4_t_v33[17];
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[8];
  typedef uint8_t _g4_t_v38[8];
  typedef int _g4_t_v39[2];
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[44];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v33)) > _g4_s0 ? (12u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v34)) > _g4_s1 ? (29u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v35)) > _g4_s2 ? (36u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v36)) > _g4_s3 ? (40u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v37)) > _g4_s4 ? (44u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v38)) > _g4_s5 ? (52u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v39)) > _g4_s6 ? (60u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v40)) > _g4_s7 ? (68u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v41)) > _g4_s8 ? (72u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v42)) > _g4_s9 ? (80u + sizeof(_g4_t_v42)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 29u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);

  v5 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(self) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(self) != 0 )
  {
    if ( a3 != nullptr && a4 != nullptr )
    {
      glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v37);
      while ( 1 )
      {
        glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v38);
        if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                (glwebtools::JsonReader::Iterator::Self *)v37,
                                (const glwebtools::JsonReader::Iterator::Self *)v38) == 0 )
          return 0;
        v34 = 0;
        glwebtools::JsonReader::Iterator::name(
          (glwebtools::JsonReader::Iterator::Self *)&v35,
          (glwebtools::Json::ValueIteratorBase::Self *)v37);
        v5 = glwebtools::Find(a3, a4, &v35, &v34);
        v6 = (void *)(v35 - 12);
        if ( (uint32_t *)(v35 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
        if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v5) )
          return v5;
        if ( v34 == 0 )
          goto LABEL_33;
        glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)v39);
        glwebtools::JsonReader::Iterator::opMul(
          (glwebtools::JsonReader::Iterator::Self *)v42,
          (glwebtools::Json::ValueIteratorBase::Self *)v37);
        v5 = glwebtools::JsonReader::read(a1, (glwebtools::JsonReader::Self *)v42, (glwebtools::CustomArgument::Self *)v39);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v42);
        if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v5) )
        {
          v31 = (void *)(v39[0] - 12);
          if ( (uint32_t *)(v39[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v31);
          }
          return v5;
        }
        glwebtools::JsonReader::Iterator::name(
          (glwebtools::JsonReader::Iterator::Self *)&v36,
          (glwebtools::Json::ValueIteratorBase::Self *)v37);
        g4_std::string::construct_copy(&v40, &v36);
        glwebtools::CustomArgument::Construct(
          (glwebtools::CustomArgument::Self *)&v41,
          (const glwebtools::CustomArgument::Self *)v39);
        v7 = *((uint32_t **)a5 + 2);
        if ( v7 == nullptr )
        {
          v7 = (uint32_t *)((char *)a5 + 4);
          goto LABEL_22;
        }
        while ( 1 )
        {
          v10 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v7 + 4));
          s1 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v40);
          s2 = *(const void **)v10;
          v13 = *(s1 - 3);
          v14 = *(uint32_t *)(*(uint32_t *)v10 - 12);
          n = v13;
          if ( v14 <= v13 )
            n = v14;
          v16 = v13 - v14;
          v17 = memcmp(s1, s2, n);
          if ( v17 == 0 )
            v17 = v16;
          if ( v17 >= 0 )
            break;
          v8 = (uint32_t *)v7[2];
          v9 = 1;
          if ( v8 == nullptr )
            goto LABEL_21;
LABEL_14:
          v7 = v8;
        }
        v8 = (uint32_t *)v7[3];
        v9 = 0;
        if ( v8 != nullptr )
          goto LABEL_14;
LABEL_21:
        if ( v9 != 0 )
        {
LABEL_22:
          if ( *((uint32_t **)a5 + 3) != v7 )
          {
            v18 = (uint32_t *)sub_19048F0(v7);
            goto LABEL_24;
          }
          goto LABEL_34;
        }
        v18 = v7;
LABEL_24:
        v19 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v40);
        v20 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v18 + 4));
        v21 = *(const void **)v19;
        v22 = *(v20 - 3);
        v23 = *(uint32_t *)(*(uint32_t *)v19 - 12);
        v24 = v22;
        if ( v23 <= v22 )
          v24 = v23;
        v25 = v22 - v23;
        v26 = memcmp(v20, v21, v24);
        if ( v26 == 0 )
          v26 = v25;
        if ( v26 < 0 )
LABEL_34:
          g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_insert(v33);
        v27 = (void *)(v41 - 12);
        if ( (uint32_t *)(v41 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v27);
        }
        v28 = (void *)(v40 - 12);
        if ( (uint32_t *)(v40 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v28);
        }
        v29 = (void *)(v36 - 12);
        if ( (uint32_t *)(v36 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v29);
        }
        v30 = (void *)(v39[0] - 12);
        if ( (uint32_t *)(v39[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v30);
        }
LABEL_33:
        glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v37);
      }
    }
    return -2147483646;
  }
  return v5;
}


