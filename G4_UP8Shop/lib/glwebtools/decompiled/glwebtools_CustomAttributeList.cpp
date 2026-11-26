#include "Core/Utils/DecompTypes.h"
#include "glwebtools_CustomAttributeList.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::begin  (binary VA: 0x13d9030)
// Original: glwebtools::CustomAttributeList::begin
// ----------------------------------------------------------------------------
glwebtools::CustomAttributeList::Self * glwebtools::CustomAttributeList::begin(glwebtools::CustomAttributeList::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::begin_ea13d9040  (binary VA: 0x13d9040)
// Original: glwebtools::CustomAttributeList::begin
// ----------------------------------------------------------------------------
glwebtools::CustomAttributeList::Self * glwebtools::CustomAttributeList::begin_ea13d9040(glwebtools::CustomAttributeList::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::end  (binary VA: 0x13d9050)
// Original: glwebtools::CustomAttributeList::end
// ----------------------------------------------------------------------------
glwebtools::CustomAttributeList::Self * glwebtools::CustomAttributeList::end(glwebtools::CustomAttributeList::Self *self, int a2)
{
  *(uint32_t *)self = a2 + 4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::end_ea13d9060  (binary VA: 0x13d9060)
// Original: glwebtools::CustomAttributeList::end
// ----------------------------------------------------------------------------
glwebtools::CustomAttributeList::Self * glwebtools::CustomAttributeList::end_ea13d9060(glwebtools::CustomAttributeList::Self *self, int a2)
{
  *(uint32_t *)self = a2 + 4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::empty  (binary VA: 0x13d9070)
// Original: glwebtools::CustomAttributeList::empty
// ----------------------------------------------------------------------------
bool glwebtools::CustomAttributeList::empty(glwebtools::CustomAttributeList::Self *self)
{
  return *((uint32_t *)self + 5) == 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::size  (binary VA: 0x13d9080)
// Original: glwebtools::CustomAttributeList::size
// ----------------------------------------------------------------------------
int glwebtools::CustomAttributeList::size(glwebtools::CustomAttributeList::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::opEq  (binary VA: 0x13d9090)
// Original: glwebtools::CustomAttributeList::operator==
// ----------------------------------------------------------------------------
int glwebtools::CustomAttributeList::opEq(glwebtools::CustomAttributeList::Self *self, const glwebtools::CustomAttributeList::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  int i;
  uint32_t v8[4];

  v2 = glwebtools::CustomAttributeList::size((glwebtools::CustomAttributeList::Self *)(a2));
  v3 = glwebtools::CustomAttributeList::size(self);
  v4 = 0;
  if ( v2 == v3 )
  {
    glwebtools::CustomAttributeList::begin((glwebtools::CustomAttributeList::Self *)v8, (int)(uintptr_t)(self));
    v6 = v8[0];
    glwebtools::CustomAttributeList::begin((glwebtools::CustomAttributeList::Self *)v8, (int)(uintptr_t)(a2));
    for ( i = v8[0]; ; i = sub_19048E0(i) )
    {
      glwebtools::CustomAttributeList::end((glwebtools::CustomAttributeList::Self *)v8, (int)(uintptr_t)(self));
      if ( v6 == v8[0] )
        return 1;
      if ( (uint8_t)glwebtools::CustomAttribute::opEq((const void **)(v6 + 16), (const void **)(i + 16)) == 0 )
        break;
      v6 = sub_19048E0(v6);
    }
    return 0;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::swap  (binary VA: 0x13d9180)
// Original: glwebtools::CustomAttributeList::swap
// ----------------------------------------------------------------------------
glwebtools::CustomAttributeList::Self * glwebtools::CustomAttributeList::swap(glwebtools::CustomAttributeList::Self *self, glwebtools::CustomAttributeList::Self *a2)
{
  glwebtools::CustomAttributeList::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  result = a2;
  v3 = *((uint32_t *)self + 2);
  if ( v3 != 0 )
  {
    v4 = *((uint32_t *)a2 + 2);
    if ( v4 != 0 )
    {
      *((uint32_t *)self + 2) = v4;
      *((uint32_t *)a2 + 2) = v3;
      v5 = *((uint32_t *)self + 3);
      *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
      *((uint32_t *)a2 + 3) = v5;
      v6 = *((uint32_t *)self + 4);
      *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
      *((uint32_t *)a2 + 4) = v6;
      *(uint32_t *)(*((uint32_t *)self + 2) + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
      *(uint32_t *)(*((uint32_t *)a2 + 2) + 4) = (uint32_t)(uintptr_t)((char *)a2 + 4);
    }
    else
    {
      *((uint32_t *)a2 + 2) = v3;
      *((uint32_t *)a2 + 3) = *((uint32_t *)self + 3);
      *((uint32_t *)a2 + 4) = *((uint32_t *)self + 4);
      *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)((char *)a2 + 4);
      *((uint32_t *)self + 2) = 0;
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
    }
    goto LABEL_4;
  }
  v8 = *((uint32_t *)a2 + 2);
  if ( v8 == 0 )
  {
LABEL_4:
    v7 = *((uint32_t *)self + 5);
    *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
    *((uint32_t *)a2 + 5) = v7;
    return result;
  }
  *((uint32_t *)self + 2) = v8;
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)a2 + 2) = 0;
  v9 = *((uint32_t *)a2 + 5);
  *((uint32_t *)a2 + 3) = (uint32_t)(uintptr_t)((char *)a2 + 4);
  *((uint32_t *)a2 + 4) = (uint32_t)(uintptr_t)((char *)a2 + 4);
  v10 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 5) = v9;
  *((uint32_t *)a2 + 5) = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::opIndex  (binary VA: 0x13d9250)
// Original: glwebtools::CustomAttributeList::operator[]
// ----------------------------------------------------------------------------
char * glwebtools::CustomAttributeList::opIndex(glwebtools::CustomAttribute::Self *a1, int a2)
{
  int v2;
  void *v3;
  void *v4;
  char *result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v7)) > _g4_s1 ? (20u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  g4_std::string::construct_copy(&v7, a2);
  glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)v8, (char *)&unk_1B15112);
  g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::find(
    (std::_Rb_tree<glwebtools::CustomAttribute::Self, glwebtools::CustomAttribute::Self, std::_Identity<glwebtools::CustomAttribute::Self>, std::less<glwebtools::CustomAttribute::Self>, glwebtools::SAllocator<glwebtools::CustomAttribute::Self, (glwebtools::MemHint)4>> *)&v6,
    a1);
  v2 = v6;
  v3 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v7 - 12);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  result = (char *)&glwebtools::CustomAttributeList::InvalidArgument;
  if ( (glwebtools::CustomAttribute::Self *)v2 != (glwebtools::CustomAttribute::Self *)((char *)a1 + 4) )
    return glwebtools::CustomAttribute::value((glwebtools::CustomAttribute::Self *)(v2 + 16));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::find  (binary VA: 0x13d9340)
// Original: glwebtools::CustomAttributeList::find
// ----------------------------------------------------------------------------
std::_Rb_tree<glwebtools::CustomAttribute::Self, glwebtools::CustomAttribute::Self, std::_Identity<glwebtools::CustomAttribute::Self>, std::less<glwebtools::CustomAttribute::Self>, glwebtools::SAllocator<glwebtools::CustomAttribute::Self, (glwebtools::MemHint)4>> * glwebtools::CustomAttributeList::find(std::_Rb_tree<glwebtools::CustomAttribute::Self, glwebtools::CustomAttribute::Self, std::_Identity<glwebtools::CustomAttribute::Self>, std::less<glwebtools::CustomAttribute::Self>, glwebtools::SAllocator<glwebtools::CustomAttribute::Self, (glwebtools::MemHint)4>> *a1, glwebtools::CustomAttribute::Self *a2, int a3)
{
  void *v3;
  void *v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);

  g4_std::string::construct_copy(&v6, a3);
  glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)&v7, (char *)&unk_1B15112);
  g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::find(
    a1,
    a2);
  v3 = (void *)(v7 - 12);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v6 - 12);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::count  (binary VA: 0x13d9410)
// Original: glwebtools::CustomAttributeList::count
// ----------------------------------------------------------------------------
bool glwebtools::CustomAttributeList::count(glwebtools::CustomAttribute::Self *a1, int a2)
{
  bool result;
  void *v3;
  void *v4;
  typedef bool _g4_t_v5;
  typedef bool _g4_t_v6;
  typedef glwebtools::CustomAttribute::Self *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  g4_std::string::construct_copy(&v8, a2);
  glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)&v9, (char *)&unk_1B15112);
  g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::find(
    (std::_Rb_tree<glwebtools::CustomAttribute::Self, glwebtools::CustomAttribute::Self, std::_Identity<glwebtools::CustomAttribute::Self>, std::less<glwebtools::CustomAttribute::Self>, glwebtools::SAllocator<glwebtools::CustomAttribute::Self, (glwebtools::MemHint)4>> *)&v7,
    a1);
  result = (glwebtools::CustomAttribute::Self *)((char *)a1 + 4) != v7;
  v3 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    v5 = result;
    g4_std::string::Rep::M_destroy(v3);
    result = v5;
  }
  v4 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = result;
    g4_std::string::Rep::M_destroy(v4);
    return v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::clear  (binary VA: 0x13d9500)
// Original: glwebtools::CustomAttributeList::clear
// ----------------------------------------------------------------------------
char * glwebtools::CustomAttributeList::clear(glwebtools::CustomAttributeList::Self *self)
{
  g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
    self,
    *((uint32_t *)self + 2));
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 5) = 0;
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::CustomAttributeList::erase  (binary VA: 0x13d9550)
// Original: glwebtools::CustomAttributeList::erase
// ----------------------------------------------------------------------------
int glwebtools::CustomAttributeList::erase(uint32_t *a1, int a2)
{
  uint32_t *v2;
  glwebtools::CustomAttribute::Self *v3;
  uint32_t *s1;
  const void *s2;
  size_t v6;
  size_t v7;
  size_t n;
  int v9;
  int v10;
  glwebtools::CustomAttribute::Self *v11;
  uint32_t *v12;
  const void *v13;
  size_t v14;
  size_t v15;
  size_t v16;
  int v17;
  int v18;
  glwebtools::CustomAttribute::Self *v19;
  glwebtools::CustomAttribute::Self *v20;
  int v21;
  int v22;
  int v23;
  void *v24;
  int result;
  void *v26;
  uint32_t *v27;
  glwebtools::CustomAttribute::Self *v28;
  uint32_t *v29;
  const void *v30;
  size_t v31;
  size_t v32;
  size_t v33;
  int v34;
  int v35;
  uint32_t *v36;
  glwebtools::CustomAttribute::Self *v37;
  uint32_t *v38;
  const void *v39;
  size_t v40;
  size_t v41;
  size_t v42;
  int v43;
  int v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef glwebtools::CustomAttribute::Self *_g4_t_v47;
  typedef glwebtools::CustomAttribute::Self *_g4_t_v48;
  typedef glwebtools::CustomAttribute::Self *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v45)) > _g4_s0 ? (12u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v46)) > _g4_s1 ? (12u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v47)) > _g4_s2 ? (16u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v48)) > _g4_s3 ? (20u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v49)) > _g4_s4 ? (24u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v50)) > _g4_s5 ? (24u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v51)) > _g4_s6 ? (28u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v52)) > _g4_s7 ? (36u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v53)) > _g4_s8 ? (40u + sizeof(_g4_t_v53)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);

  g4_std::string::construct_copy(&v52, a2);
  glwebtools::CustomArgument::Construct((glwebtools::CustomArgument::Self *)v53, (char *)&unk_1B15112);
  v2 = (uint32_t *)a1[2];
  v48 = (glwebtools::CustomAttribute::Self *)(a1 + 1);
  v47 = (glwebtools::CustomAttribute::Self *)(a1 + 1);
  v49 = (glwebtools::CustomAttribute::Self *)(a1 + 1);
  if ( v2 != nullptr )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v52);
        s1 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v2 + 4));
        s2 = *(const void **)v3;
        v6 = *(s1 - 3);
        v7 = *(uint32_t *)(*(uint32_t *)v3 - 12);
        n = v6;
        if ( v7 <= v6 )
          n = v7;
        v9 = v6 - v7;
        v10 = memcmp(s1, s2, n);
        if ( v10 == 0 )
          v10 = v9;
        if ( v10 >= 0 )
          break;
        v2 = (uint32_t *)v2[3];
        if ( v2 == nullptr )
          goto LABEL_15;
      }
      v11 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v2 + 4));
      v12 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v52);
      v13 = *(const void **)v11;
      v14 = *(v12 - 3);
      v15 = *(uint32_t *)(*(uint32_t *)v11 - 12);
      v16 = v14;
      if ( v15 <= v14 )
        v16 = v15;
      v17 = v14 - v15;
      v18 = memcmp(v12, v13, v16);
      if ( v18 == 0 )
        v18 = v17;
      if ( v18 >= 0 )
        break;
      v49 = (glwebtools::CustomAttribute::Self *)v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
      {
LABEL_15:
        v47 = v49;
        goto LABEL_16;
      }
    }
    v27 = (uint32_t *)v2[3];
    v51 = (uint32_t *)v2[2];
    v47 = v49;
    if ( v27 != nullptr )
    {
      v50 = v2;
      do
      {
        while ( 1 )
        {
          v28 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v27 + 4));
          v29 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v52);
          v30 = *(const void **)v28;
          v31 = *(v29 - 3);
          v32 = *(uint32_t *)(*(uint32_t *)v28 - 12);
          v33 = v31;
          if ( v32 <= v31 )
            v33 = v32;
          v34 = v31 - v32;
          v35 = memcmp(v29, v30, v33);
          if ( v35 == 0 )
            v35 = v34;
          if ( v35 >= 0 )
            break;
          v47 = (glwebtools::CustomAttribute::Self *)v27;
          v27 = (uint32_t *)v27[2];
          if ( v27 == nullptr )
            goto LABEL_35;
        }
        v27 = (uint32_t *)v27[3];
      }
      while ( v27 != nullptr );
LABEL_35:
      v2 = v50;
    }
    v49 = (glwebtools::CustomAttribute::Self *)v2;
    if ( v51 != nullptr )
    {
      v36 = v51;
      do
      {
        v37 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)&v52);
        v38 = *(uint32_t **)glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(v36 + 4));
        v39 = *(const void **)v37;
        v40 = *(v38 - 3);
        v41 = *(uint32_t *)(*(uint32_t *)v37 - 12);
        v42 = v40;
        if ( v41 <= v40 )
          v42 = v41;
        v43 = v40 - v41;
        v44 = memcmp(v38, v39, v42);
        if ( v44 == 0 )
          v44 = v43;
        if ( v44 >= 0 )
        {
          v49 = (glwebtools::CustomAttribute::Self *)v36;
          v36 = (uint32_t *)v36[2];
        }
        else
        {
          v36 = (uint32_t *)v36[3];
        }
      }
      while ( v36 != nullptr );
    }
  }
LABEL_16:
  if ( (glwebtools::CustomAttribute::Self *)a1[3] == v49 && v48 == v47 )
  {
    g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
      a1,
      a1[2]);
    a1[3] = (uint32_t)(uintptr_t)(v48);
    a1[2] = 0;
    a1[4] = (uint32_t)(uintptr_t)(v48);
    a1[5] = 0;
  }
  else
  {
    v19 = v49;
    if ( v47 != v49 )
    {
      while ( 1 )
      {
        v20 = (glwebtools::CustomAttribute::Self *)sub_19048E0(v19);
        v21 = sub_1904AE0(v19, v48);
        v22 = *(uint32_t *)(v21 + 20);
        if ( (uint32_t *)(v22 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
        {
          v46 = v21;
          g4_std::string::Rep::M_destroy((void *)(v22 - 12));
          v21 = v46;
        }
        v23 = *(uint32_t *)(v21 + 16);
        if ( (uint32_t *)(v23 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
        {
          v45 = v21;
          g4_std::string::Rep::M_destroy((void *)(v23 - 12));
          v21 = v45;
        }
        sub_4EBEE0(v21);
        --a1[5];
        if ( v47 == v20 )
          break;
        v19 = v20;
      }
    }
  }
  v24 = (void *)(v53[0] - 12);
  if ( (uint32_t *)(v53[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  result = v52;
  v26 = (void *)(v52 - 12);
  if ( (uint32_t *)(v52 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v26); return 0; }
  }
  return result;
}


