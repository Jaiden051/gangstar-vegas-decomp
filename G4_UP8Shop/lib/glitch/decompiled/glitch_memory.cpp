#include "Core/Utils/DecompTypes.h"
#include "glitch_memory.h"

// ----------------------------------------------------------------------------
// Function: glitch::memory::SExternallyLinkedPool::Destroy  (binary VA: 0xcd0a50)
// Original: glitch::memory::SExternallyLinkedPool::~SExternallyLinkedPool
// ----------------------------------------------------------------------------
void glitch::memory::SExternallyLinkedPool::Destroy(glitch::memory::SExternallyLinkedPool::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;

  v1 = *((uint32_t **)self + 5);
  if ( v1 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)*v1;
      gll_operator_delete_arr((int)(uintptr_t)(v1));
      if ( v2 == nullptr )
        break;
      v1 = v2;
    }
  }
  if ( *(uint32_t *)self != 0 )
    gll_operator_delete_arr(*(uint32_t *)self);
}



// ============================================================================
// Address:   0xcd4ac0 (size: 56 bytes)
// Symbol:    _ZN6glitch6memory21SExternallyLinkedPoolC2Ejj
// Demangled: glitch::memory::SExternallyLinkedPool::SExternallyLinkedPool(unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN6glitch6memory21SExternallyLinkedPoolC1Ejj'
struct glitch::memory::SExternallyLinkedPool::Self *glitch::memory::SExternallyLinkedPool::SExternallyLinkedPool(
        glitch::memory::SExternallyLinkedPool::Self *self,
        unsigned int a2,
        unsigned int a3)
{
  struct glitch::memory::SExternallyLinkedPool::Self *result;
  int v4;

  result = self;
  *((uint32_t *)self + 3) = a2;
  v4 = 1;
  if ( a3 != 0 )
    v4 = a3;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = v4;
  *((uint32_t *)self + 5) = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: glitch::memory::SExternallyLinkedPool::mallocNeedsResize  (binary VA: 0xcd4b00)
// Original: glitch::memory::SExternallyLinkedPool::mallocNeedsResize
// ----------------------------------------------------------------------------
uint32_t * glitch::memory::SExternallyLinkedPool::mallocNeedsResize(glitch::memory::SExternallyLinkedPool::Self *self)
{
  size_t v1;
  uint32_t *v2;
  int v3;
  char *v4;
  char *v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  size_t v9;
  char **v11;
  uint32_t *v12;
  uint32_t *v13;
  char *v14;
  uint32_t *v15;
  uint32_t *v16;
  char *v17;
  unsigned int v18;
  int v19;
  char *v20;
  uint32_t *v21;
  unsigned int v22;
  int v23;
  int v24;

  v1 = *((uint32_t *)self + 4) * *((uint32_t *)self + 3) + 8;
  v2 = (uint32_t *)sub_4EBDC0(v1);
  if ( v2 != nullptr )
  {
    *v2 = *((uint32_t *)self + 5);
    v2[1] = (uint32_t)(uintptr_t)((char *)v2 + v1);
  }
  v3 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v2);
  v4 = (char *)v2 + v3 + 8;
  v21 = v2 + 2;
  v17 = (char *)v2[1];
  if ( v17 != v4 )
  {
    v5 = *((char **)self + 1);
    do
    {
      if ( *((char **)self + 2) == v5 )
      {
        v7 = (int)(uintptr_t)(&v5[-*(uint32_t *)self]) >> 2;
        v8 = 1;
        v18 = v7;
        if ( v7 != 0 && ((v8 = 2 * v7, v7 > 2 * v7) || v8 > 0x3FFFFFFF) )
        {
          v24 = -4;
          v9 = 0xFFFFFFFC;
        }
        else
        {
          v9 = 4 * v8;
          v24 = v9;
        }
        v16 = *((uint32_t **)self + 2);
        v23 = sub_4EBDC0(v9);
        v22 = v23 + 4;
        v11 = (char **)(v23 + 4 * v18);
        if ( v11 != nullptr )
          *v11 = v4;
        v19 = *(uint32_t *)self;
        if ( v16 != *(uint32_t **)self )
        {
          v12 = *(uint32_t **)self;
          v13 = (uint32_t *)v23;
          do
          {
            if ( v13 != nullptr )
              *v13 = *v12;
            ++v12;
            ++v13;
          }
          while ( v16 != v12 );
          v22 = v23 + 4 * (((unsigned int)(uintptr_t)(v16) - v19 - 4) >> 2) + 8;
        }
        v20 = *((char **)self + 1);
        if ( v5 == v20 )
        {
          v5 = (char *)v22;
        }
        else
        {
          v14 = v5;
          v15 = (uint32_t *)v22;
          do
          {
            if ( v15 != nullptr )
              *v15 = *(uint32_t *)v14;
            v14 += 4;
            ++v15;
          }
          while ( v20 != v14 );
          v5 = (char *)(v22 + 4 * ((unsigned int)(v20 - (v5 + 4)) >> 2) + 4);
        }
        if ( *(uint32_t *)self != 0 )
          gll_operator_delete_arr(*(uint32_t *)self);
        *(uint32_t *)self = v23;
        *((uint32_t *)self + 2) = v23 + v24;
        *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v5);
        v3 = *((uint32_t *)self + 3);
      }
      else
      {
        v6 = 0;
        if ( v5 != nullptr )
        {
          *(uint32_t *)v5 = (uint32_t)(uintptr_t)(v4);
          v6 = *((uint32_t *)self + 1);
          v3 = *((uint32_t *)self + 3);
        }
        v5 = (char *)(v6 + 4);
        *((uint32_t *)self + 1) = v6 + 4;
      }
      v4 += v3;
    }
    while ( v17 != v4 );
  }
  *((uint32_t *)self + 4) *= 2;
  return v21;
}

// ----------------------------------------------------------------------------
// Function: glitch::memory::SPoolMap_SProcessBufferPoolUserAl_7950a9::get  (binary VA: 0xe85af0)
// Original: glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator>::get
// ----------------------------------------------------------------------------
char * glitch::memory::SPoolMap_SProcessBufferPoolUserAl_7950a9::get(glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> **self, glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *a2)
{
  glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *v2;
  glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *v3;
  glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *v4;
  glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> **v5;
  glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *v6;
  char v8;
  typedef int _g4_t_v9;
  typedef char _g4_t_v10;
  typedef glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> **_g4_t_v11;
  typedef glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *_g4_t_v12;
  typedef glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> **_g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  v2 = nullptr;
  v3 = *self;
  if ( *self == nullptr )
  {
    v3 = (glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *)self;
    v8 = 1;
    goto LABEL_9;
  }
  while ( *((uint32_t *)v3 + 7) > (unsigned int)(uintptr_t)(a2) )
  {
    v4 = *((glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> **)v3 + 1);
    v8 = 1;
    if ( v4 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v4;
  }
  v4 = *((glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> **)v3 + 2);
  v8 = 0;
  v2 = v3;
  if ( v4 != nullptr )
    goto LABEL_4;
LABEL_7:
  if ( v2 == nullptr || *((uint32_t *)v2 + 7) < (unsigned int)(uintptr_t)(a2) )
  {
LABEL_9:
    v10 = v8;
    v5 = (glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> **)glitch::core::allocProcessBuffer(
                                                                                       0x2Cu,
                                                                                       v9);
    if ( v5 != nullptr )
    {
      v12 = *(self + 5);
      v6 = *(self + 4);
      *v5 = nullptr;
      v5[9] = v6;
      v5[8] = v6;
      v5[1] = nullptr;
      v5[2] = nullptr;
      v5[4] = nullptr;
      v5[5] = nullptr;
      v5[6] = nullptr;
      v5[7] = a2;
      v5[10] = v12;
    }
    v13 = self;
    if ( self == (glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> **)v3 )
    {
      *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v5);
      *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v5);
      *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(v5);
    }
    else if ( v10 != 0 )
    {
      *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(v5);
      if ( *(self + 1) == v3 )
        *(self + 1) = (glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *)v5;
    }
    else
    {
      *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v5);
      if ( v3 == *(self + 2) )
        *(self + 2) = (glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *)v5;
    }
    *v5 = v3;
    v5[2] = nullptr;
    v5[1] = nullptr;
    v11 = v5;
    boost::intrusive::rbtree_algorithms_intrusive_rbtree_node_tr_931e45::rebalance_after_insertion(
      &v13,
      v5);
    v2 = (glitch::memory::SPoolMap<glitch::core::SProcessBufferPoolUserAllocator> *)v11;
  }
  return (char *)v2 + 16;
}


