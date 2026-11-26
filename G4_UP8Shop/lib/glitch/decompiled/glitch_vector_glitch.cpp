#include "Core/Utils/DecompTypes.h"
#include "glitch_vector_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_streaming_SCommandAndReg_2ec512::M_insert_aux  (binary VA: 0xcf3010)
// Original: std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
volatile int32_t * g4_std::vector_streaming_SCommandAndReg_2ec512::M_insert_aux(int a1, glitch::streaming::SCommandAndRegisterer::Self *a2, glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  int *v3;
  glitch::streaming::SCommandAndRegisterer::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  glitch::streaming::SCommandAndRegisterer::Self *v9;
  int i;
  const glitch::streaming::SCommandAndRegisterer::Self *v11;
  volatile int32_t *result;
  glitch::streaming::SCommandAndRegisterer::Self *v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  glitch::streaming::SCommandAndRegisterer::Self *v18;
  glitch::streaming::SCommandAndRegisterer::Self *v19;
  glitch::streaming::SCommandAndRegisterer::Self *v20;
  const glitch::streaming::SCommandAndRegisterer::Self *v21;
  glitch::streaming::SCommandAndRegisterer::Self *v22;
  glitch::streaming::SCommandAndRegisterer::Self *v23;
  int v24;
  int v25;
  int v26;
  glitch::streaming::SCommandAndRegisterer::Self *v27;
  typedef int _g4_t_v28;
  typedef int *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v33;
  typedef int *_g4_t_v34;
  typedef uint8_t _g4_t_v35[16];
  typedef volatile int32_t *_g4_t_v36;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v28)) > _g4_s0 ? (8u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v29)) > _g4_s1 ? (12u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v32)) > _g4_s4 ? (20u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v33)) > _g4_s5 ? (24u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v34)) > _g4_s6 ? (28u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v35)) > _g4_s7 ? (44u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v36)) > _g4_s8 ? (60u + sizeof(_g4_t_v36)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);

  v3 = (int *)a1;
  v4 = a2;
  v5 = *(uint32_t *)(a1 + 4);
  if ( v5 != *(uint32_t *)(a1 + 8) )
  {
    v6 = 0;
    if ( v5 != 0 )
    {
      glitch::streaming::SCommandAndRegisterer::Construct(
        *(glitch::streaming::SCommandAndRegisterer::Self **)(a1 + 4),
        (const glitch::streaming::SCommandAndRegisterer::Self *)(v5 - 20));
      v6 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v6 + 20;
    glitch::streaming::SCommandAndRegisterer::Construct((glitch::streaming::SCommandAndRegisterer::Self *)v35, a3);
    v7 = *(uint32_t *)(a1 + 4);
    v8 = -858993459 * ((v7 - 40 - (int)(uintptr_t)(a2)) >> 2);
    if ( v8 > 0 )
    {
      v9 = (glitch::streaming::SCommandAndRegisterer::Self *)(v7 - 20);
      for ( i = v8; i != 0; --i )
      {
        v11 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v9 - 40);
        v9 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v9 - 20);
        glitch::streaming::SCommandAndRegisterer::opAssign(v9, v11);
      }
      v4 = a2;
    }
    glitch::streaming::SCommandAndRegisterer::opAssign(v4, (const glitch::streaming::SCommandAndRegisterer::Self *)v35);
    result = v36;
    if ( v36 != nullptr )
      return (volatile int32_t *)sub_5459C0(v36);
    return result;
  }
  v13 = *(glitch::streaming::SCommandAndRegisterer::Self **)a1;
  v14 = (v5 - *(uint32_t *)a1) >> 2;
  v15 = -858993459 * v14;
  if ( -858993459 * v14 != 0 )
  {
    v16 = -1717986918 * v14;
    if ( v15 > 2 * v15 || v16 > 0xCCCCCCC )
    {
      v32 = -16;
      v17 = -858993459 * ((a2 - v13) >> 2);
    }
    else
    {
      v32 = 40 * v15;
      v17 = -858993459 * ((a2 - v13) >> 2);
      if ( v16 == 0 )
      {
        v18 = (glitch::streaming::SCommandAndRegisterer::Self *)&dword_14;
        v31 = nullptr;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v32 = 20;
    v17 = -858993459 * ((a2 - v13) >> 2);
  }
  v28 = v17;
  v31 = (glitch::streaming::SCommandAndRegisterer::Self *)sub_4EBDC0(v32);
  v18 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v31 + 20);
  v17 = v28;
LABEL_15:
  v19 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v31 + 20 * v17);
  if ( v19 != nullptr )
    glitch::streaming::SCommandAndRegisterer::Construct(v19, a3);
  if ( *(glitch::streaming::SCommandAndRegisterer::Self **)a1 != a2 )
  {
    v20 = v31;
    v21 = *(const glitch::streaming::SCommandAndRegisterer::Self **)a1;
    do
    {
      if ( v20 != nullptr )
        glitch::streaming::SCommandAndRegisterer::Construct(v20, v21);
      v21 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v21 + 20);
      v20 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v20 + 20);
    }
    while ( v21 != a2 );
    v3 = (int *)a1;
    v18 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v20 + 20);
  }
  v22 = (glitch::streaming::SCommandAndRegisterer::Self *)v3[1];
  if ( v22 != a2 )
  {
    v29 = v3;
    v23 = (glitch::streaming::SCommandAndRegisterer::Self *)v3[1];
    do
    {
      if ( v18 != nullptr )
        glitch::streaming::SCommandAndRegisterer::Construct(v18, v4);
      v4 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v4 + 20);
      v18 = (glitch::streaming::SCommandAndRegisterer::Self *)((char *)v18 + 20);
    }
    while ( v23 != v4 );
    v3 = v29;
    v22 = (glitch::streaming::SCommandAndRegisterer::Self *)v29[1];
  }
  v24 = *v3;
  if ( (glitch::streaming::SCommandAndRegisterer::Self *)*v3 != v22 )
  {
    v33 = v18;
    v34 = v3;
    v25 = *v3;
    v30 = v24 + 16;
    v26 = *v3;
    v27 = v22;
    do
    {
      if ( *(uint32_t *)(v30 + v25 - v26) != 0 )
        sub_5459C0(*(volatile int32_t **)(v30 + v25 - v26));
      v25 += 20;
    }
    while ( v27 != (glitch::streaming::SCommandAndRegisterer::Self *)v25 );
    v3 = v34;
    v18 = v33;
    v24 = *v34;
  }
  if ( v24 != 0 )
    gll_operator_delete_arr(v24);
  v3[1] = (int)(uintptr_t)(v18);
  *v3 = (int)(uintptr_t)(v31);
  v3[2] = (int)(uintptr_t)(v31) + v32;
  return (volatile int32_t *)((char *)v31 + v32);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_SSharedString_SAllocator_cee9fb::M_insert_aux  (binary VA: 0xcf3570)
// Original: std::vector<glitch::core::SSharedString,glitch::core::SAllocator<glitch::core::SSharedString,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_SSharedString_SAllocator_cee9fb::M_insert_aux(int *a1, glitch::core::detail::SSharedStringHeapEntry::SData::Self **a2, glitch::core::detail::SSharedStringHeapEntry::SData::Self **a3)
{
  int *v3;
  volatile int32_t **v4;
  volatile int32_t **v5;
  volatile int32_t **v6;
  int v7;
  volatile int32_t *v8;
  int v9;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v10;
  int v11;
  int v12;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v13;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v14;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v15;
  int v16;
  int v17;
  unsigned int v18;
  volatile int32_t **v19;
  volatile int32_t *v20;
  bool v21;
  volatile int32_t **v22;
  volatile int32_t **v23;
  volatile int32_t *v24;
  volatile int32_t **v25;
  volatile int32_t **v26;
  volatile int32_t *v27;
  int v28;
  volatile int32_t **v29;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v30;
  typedef int _g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v38;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v39;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v40;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v31)) > _g4_s1 ? (24u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v32)) > _g4_s2 ? (32u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v33)) > _g4_s3 ? (40u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v34)) > _g4_s4 ? (40u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v35)) > _g4_s5 ? (44u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v36)) > _g4_s6 ? (44u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v37)) > _g4_s7 ? (44u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v38)) > _g4_s8 ? (48u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v39)) > _g4_s9 ? (64u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v40)) > _g4_s10 ? (80u + sizeof(_g4_t_v40)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);

  v3 = a1;
  v4 = (volatile int32_t **)a3;
  v5 = (volatile int32_t **)a2;
  v6 = (volatile int32_t **)a1[1];
  if ( v6 != (volatile int32_t **)a1[2] )
  {
    v7 = 0;
    if ( v6 != nullptr )
    {
      v8 = *(v6 - 1);
      *v6 = v8;
      if ( v8 != nullptr )
        __sync_add_and_fetch(v8, 1u);
      v7 = a1[1];
    }
    v9 = v7 + 4;
    a1[1] = v7 + 4;
    v10 = *a3;
    v38 = v10;
    if ( v10 != nullptr )
    {
      __sync_add_and_fetch((volatile int32_t *)v10, 1u);
      v9 = a1[1];
    }
    v11 = (v9 - 8 - (int)(uintptr_t)(a2)) >> 2;
    if ( v11 > 0 )
    {
      v33 = v9 - 12;
      v35 = v9 - 8;
      v12 = -4 * v11;
      do
      {
        v13 = nullptr;
        v39 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v33 + v12 + 4 * v11);
        if ( v39 != nullptr )
        {
          __sync_add_and_fetch((volatile int32_t *)v39, 1u);
          v13 = v39;
        }
        v39 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v35 + v12 + 4 * v11);
        *(uint32_t *)(v35 + v12 + 4 * v11) = (uint32_t)(uintptr_t)(v13);
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v39);
        --v11;
      }
      while ( v11 != 0 );
    }
    v14 = nullptr;
    v40 = v38;
    if ( v38 != nullptr )
    {
      __sync_add_and_fetch((volatile int32_t *)v38, 1u);
      v14 = v40;
    }
    v15 = *a2;
    *a2 = v14;
    v40 = v15;
    boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v40);
    boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v38);
    return;
  }
  v16 = *a1;
  v17 = ((int)(uintptr_t)(v6) - *a1) >> 2;
  v36 = v17;
  if ( v17 == 0 )
  {
    v32 = 4;
    v37 = ((int)(uintptr_t)(a2) - v16) >> 2;
    goto LABEL_19;
  }
  v18 = 2 * v17;
  if ( v36 > v18 || v18 > 0x3FFFFFFF )
  {
    v32 = 0xFFFFFFFC;
    v37 = ((int)(uintptr_t)(a2) - v16) >> 2;
LABEL_19:
    v34 = sub_4EBDC0(v32);
    v31 = v34 + 4;
    v4 = (volatile int32_t **)a3;
    goto LABEL_20;
  }
  v32 = 8 * v36;
  v37 = ((int)(uintptr_t)(a2) - v16) >> 2;
  if ( v18 != 0 )
    goto LABEL_19;
  v31 = 4;
  v34 = 0;
LABEL_20:
  v19 = (volatile int32_t **)(v34 + 4 * v37);
  if ( v19 != nullptr )
  {
    v20 = *v4;
    v21 = *v4 == nullptr;
    *v19 = *v4;
    if ( !v21 )
      __sync_add_and_fetch(v20, 1u);
  }
  v22 = (volatile int32_t **)*a1;
  if ( (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)*a1 != a2 )
  {
    v23 = (volatile int32_t **)v34;
    do
    {
      if ( v23 != nullptr )
      {
        v24 = *v22;
        v21 = *v22 == nullptr;
        *v23 = *v22;
        if ( !v21 )
          __sync_add_and_fetch(v24, 1u);
      }
      ++v22;
      ++v23;
    }
    while ( v22 != (volatile int32_t **)a2 );
    v5 = (volatile int32_t **)a2;
    v31 = (int)(uintptr_t)(v23 + 1);
  }
  v25 = (volatile int32_t **)a1[1];
  if ( v25 != (volatile int32_t **)a2 )
  {
    v26 = (volatile int32_t **)v31;
    do
    {
      if ( v26 != nullptr )
      {
        v27 = *v5;
        v21 = *v5 == nullptr;
        *v26 = *v5;
        if ( !v21 )
          __sync_add_and_fetch(v27, 1u);
      }
      ++v5;
      ++v26;
    }
    while ( v25 != v5 );
    v31 = (int)(uintptr_t)(v26);
    v25 = (volatile int32_t **)a1[1];
  }
  v28 = *a1;
  if ( (volatile int32_t **)*a1 != v25 )
  {
    v29 = v25;
    do
    {
      v30 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v28;
      v28 += 4;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v30);
    }
    while ( (volatile int32_t **)v28 != v29 );
    v3 = a1;
    v28 = *a1;
  }
  if ( v28 != 0 )
    gll_operator_delete_arr(v28);
  *v3 = v34;
  v3[1] = v31;
  v3[2] = v32 + v34;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_util_STriangleAdapter_947aa8::opAssign  (binary VA: 0xcf39d0)
// Original: std::vector<glitch::util::STriangleAdapter>::operator=
// ----------------------------------------------------------------------------
std::vector<glitch::util::STriangleAdapter> * g4_std::vector_util_STriangleAdapter_947aa8::opAssign(std::vector<glitch::util::STriangleAdapter> *self, const std::vector<glitch::util::STriangleAdapter> *a2)
{
  std::vector<glitch::util::STriangleAdapter> *result;
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  volatile int32_t *v9;
  char *v10;
  volatile int32_t *v11;
  int v12;
  uint32_t *v13;
  char *v14;
  char *v15;
  char *v16;
  glitch::video::CVertexStreams::Self *v17;
  int v18;
  int v19;
  char *v20;
  glitch::video::CVertexStreams::Self *v21;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef const std::vector<glitch::util::STriangleAdapter> *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef std::vector<glitch::util::STriangleAdapter> *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef uint32_t _g4_t_v37[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v26)) > _g4_s4 ? (12u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v27)) > _g4_s5 ? (16u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v28)) > _g4_s6 ? (20u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v29)) > _g4_s7 ? (28u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v30)) > _g4_s8 ? (32u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v31)) > _g4_s9 ? (36u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v32)) > _g4_s10 ? (36u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v33)) > _g4_s11 ? (40u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v34)) > _g4_s12 ? (40u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v35)) > _g4_s13 ? (44u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v36)) > _g4_s14 ? (44u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v37)) > _g4_s15 ? (48u + sizeof(_g4_t_v37)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);

  v37[3] = (uint32_t)(uintptr_t)(&self);
  result = self;
  v30 = self;
  v28 = a2;
  if ( a2 != self )
  {
    v3 = *((uint32_t **)a2 + 1);
    v29 = *(uint32_t **)a2;
    v4 = ((int)(uintptr_t)(v3) - *(uint32_t *)a2) >> 3;
    v27 = -1431655765 * v4;
    v31 = *(char **)self;
    if ( -1431655765 * v4 > (unsigned int)(-1431655765 * ((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 3)) )
    {
      if ( v27 != 0 )
      {
        if ( v27 > 0xAAAAAAA )
          sub_18FFEE0(a2, self);
        v32 = 2 * v4;
        v13 = (uint32_t *)opNew(8 * v4);
        v34 = v13;
      }
      else
      {
        v34 = nullptr;
        v32 = 0;
        v13 = nullptr;
      }
      sub_CD3B60(v29, v3, v13);
      v36 = *((char **)v30 + 1);
      v14 = *(char **)v30;
      if ( v36 != *(char **)v30 )
      {
        v15 = *(char **)v30;
        v16 = v14 + 8;
        do
        {
          v17 = *(glitch::video::CVertexStreams::Self **)&v16[v15 - v14];
          if ( v17 != nullptr && __sync_fetch_and_add((volatile int32_t *)v17, 0xFFFFFFFF) == 1 )
          {
            v25 = v14;
            v23 = v16;
            glitch::video::CVertexStreams::Destroy(v17);
            gll_operator_delete_arr((int)(uintptr_t)(v17));
            v16 = v23;
            v14 = v25;
          }
          v15 += 24;
        }
        while ( v36 != v15 );
        v14 = *(char **)v30;
      }
      if ( v14 != nullptr )
        opDelete(v14);
      result = v30;
      v12 = (int)(uintptr_t)(&v34[v32]);
      *(uint32_t *)v30 = (uint32_t)(uintptr_t)(v34);
      *((uint32_t *)v30 + 2) = (uint32_t)(uintptr_t)(&v34[v32]);
      goto LABEL_21;
    }
    v33 = *((char **)self + 1);
    v5 = (v33 - v31) >> 3;
    if ( v27 <= -1431655765 * v5 )
    {
      g4_std::copy_gnu_cxx_normal_iterator_b44e38(
        v37,
        v29,
        (int)(uintptr_t)(v3),
        v31);
      v18 = v37[0];
      v19 = v37[0] + 8;
      if ( v33 != (char *)v37[0] )
      {
        v20 = (char *)v37[0];
        do
        {
          v21 = *(glitch::video::CVertexStreams::Self **)&v20[v19 - v18];
          if ( v21 != nullptr && __sync_fetch_and_add((volatile int32_t *)v21, 0xFFFFFFFF) == 1 )
          {
            v26 = v18;
            v24 = v19;
            glitch::video::CVertexStreams::Destroy(v21);
            gll_operator_delete_arr((int)(uintptr_t)(v21));
            v19 = v24;
            v18 = v26;
          }
          v20 += 24;
        }
        while ( v33 != v20 );
        result = v30;
        v12 = *(uint32_t *)v30 + 24 * v27;
        goto LABEL_21;
      }
    }
    else
    {
      v6 = &v29[2 * v5];
      v35 = -1431655765 * v5;
      if ( -1431655765 * v5 > 0 )
      {
        v7 = *(uint32_t **)self;
        v8 = *(uint32_t **)a2;
        do
        {
          *v7 = *v8;
          v7[1] = v8[1];
          v9 = (volatile int32_t *)v8[2];
          if ( v9 != nullptr )
            __sync_add_and_fetch(v9, 1u);
          v22 = (glitch::video::CVertexStreams::Self *)v7[2];
          v7[2] = (uint32_t)(uintptr_t)(v9);
          if ( v22 != nullptr && __sync_fetch_and_add((volatile int32_t *)v22, 0xFFFFFFFF) == 1 )
          {
            glitch::video::CVertexStreams::Destroy(v22);
            gll_operator_delete_arr((int)(uintptr_t)(v22));
          }
          v7[3] = v8[3];
          v7[4] = v8[4];
          v7[5] = v8[5];
          v8 += 6;
          v7 += 6;
          --v35;
        }
        while ( v35 != 0 );
        v3 = *((uint32_t **)v28 + 1);
        v33 = *((char **)v30 + 1);
        v31 = *(char **)v30;
        v6 = (uint32_t *)(*(uint32_t *)v28 + ((unsigned int)(uintptr_t)(&v33[-*(uint32_t *)v30]) & 0xFFFFFFF8));
      }
      v10 = v33;
      if ( v3 == v6 )
      {
        v12 = (int)(uintptr_t)(&v31[24 * v27]);
        result = v30;
        goto LABEL_21;
      }
      do
      {
        if ( v10 != nullptr )
        {
          *(uint32_t *)v10 = *v6;
          *((uint32_t *)v10 + 1) = v6[1];
          v11 = (volatile int32_t *)v6[2];
          *((uint32_t *)v10 + 2) = (uint32_t)(uintptr_t)(v11);
          if ( v11 != nullptr )
            __sync_add_and_fetch(v11, 1u);
          *((uint32_t *)v10 + 3) = v6[3];
          *((uint32_t *)v10 + 4) = v6[4];
          *((uint32_t *)v10 + 5) = v6[5];
        }
        v6 += 6;
        v10 += 24;
      }
      while ( v3 != v6 );
      v4 = 3 * v27;
    }
    result = v30;
    v12 = *(uint32_t *)v30 + 8 * v4;
LABEL_21:
    *((uint32_t *)result + 1) = v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_util_STriangleAdapter_947aa8::insert_gnu_cxx_normal_iterator_152e6f  (binary VA: 0xcf3d00)
// Original: std::vector<glitch::util::STriangleAdapter>::insert<__gnu_cxx::__normal_iterator<glitch::util::STriangleAdapter const*,std::vector<glitch::util::STriangleAdapter>>>
// ----------------------------------------------------------------------------
char * g4_std::vector_util_STriangleAdapter_947aa8::insert_gnu_cxx_normal_iterator_152e6f(uint32_t *a1, char *a2, char *a3, char *a4)
{
  char *result;
  uint32_t *v5;
  char *v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  char *v13;
  volatile int32_t *v14;
  glitch::video::CVertexStreams::Self *v15;
  uint32_t *v16;
  uint32_t *v17;
  unsigned int v18;
  bool v19;
  unsigned int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  char *v25;
  int v26;
  char *v27;
  glitch::video::CVertexStreams::Self *v28;
  typedef char *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef char *_g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef uint32_t _g4_t_v43[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v30)) > _g4_s1 ? (4u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v31)) > _g4_s2 ? (4u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v32)) > _g4_s3 ? (4u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v33)) > _g4_s4 ? (8u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v34)) > _g4_s5 ? (12u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v35)) > _g4_s6 ? (12u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v36)) > _g4_s7 ? (12u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v37)) > _g4_s8 ? (16u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v38)) > _g4_s9 ? (16u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v39)) > _g4_s10 ? (16u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v40)) > _g4_s11 ? (20u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v41)) > _g4_s12 ? (20u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v42)) > _g4_s13 ? (24u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v43)) > _g4_s14 ? (28u + sizeof(_g4_t_v43)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);

  result = a3;
  v5 = a1;
  if ( a4 == a3 )
    return result;
  v6 = (char *)a1[1];
  v7 = (a4 - a3) >> 3;
  v8 = -1431655765 * v7;
  if ( -1431655765 * v7 <= (unsigned int)(-1431655765 * ((a1[2] - (int)(uintptr_t)(v6)) >> 3)) )
  {
    v9 = (v6 - a2) >> 3;
    if ( v8 >= -1431655765 * v9 )
    {
      v35 = 8 * v9;
      v31 = -1431655765 * v9;
      v38 = &a3[8 * v9];
      sub_CD3B60(v38, a4, v6);
      v16 = (uint32_t *)(a1[1] + 24 * (v8 - v31));
      a1[1] = (uint32_t)(uintptr_t)(v16);
      sub_CD3BB0(a2, v6, v16);
      a1[1] += v35;
      return (char *)g4_std::copy_gnu_cxx_normal_iterator_b44e38(
                       v43,
                       a3,
                       (int)(uintptr_t)(v38),
                       a2);
    }
    else
    {
      v10 = 8 * v7;
      v29 = &v6[-8 * v7];
      sub_CD3BB0(v29, (uint32_t *)a1[1], v6);
      a1[1] += v10;
      v34 = -1431655765 * ((v29 - a2) >> 3);
      if ( v34 > 0 )
      {
        v42 = v29 - 16;
        v37 = (size_t)(v29 - 24);
        v11 = v29 - 24;
        v40 = v6 - 24;
        v12 = v6 - 24;
        v13 = v6 - 16;
        do
        {
          *(uint32_t *)v12 = *(uint32_t *)v11;
          *((uint32_t *)v12 + 1) = *((uint32_t *)v11 + 1);
          v14 = *(volatile int32_t **)&v11[(uint32_t)(uintptr_t)(v42) - v37];
          if ( v14 != nullptr )
            __sync_add_and_fetch(v14, 1u);
          v15 = *(glitch::video::CVertexStreams::Self **)&v13[v12 - v40];
          *(uint32_t *)&v13[v12 - v40] = (uint32_t)(uintptr_t)(v14);
          if ( v15 != nullptr && __sync_fetch_and_add((volatile int32_t *)v15, 0xFFFFFFFF) == 1 )
          {
            v30 = v13;
            glitch::video::CVertexStreams::Destroy(v15);
            gll_operator_delete_arr((int)(uintptr_t)(v15));
            v13 = v30;
          }
          *((uint32_t *)v12 + 3) = *((uint32_t *)v11 + 3);
          *((uint32_t *)v12 + 4) = *((uint32_t *)v11 + 4);
          *((uint32_t *)v12 + 5) = *((uint32_t *)v11 + 5);
          v11 -= 24;
          v12 -= 24;
          --v34;
        }
        while ( v34 != 0 );
      }
      return (char *)g4_std::copy_gnu_cxx_normal_iterator_b44e38(
                       v43,
                       a3,
                       (int)(uintptr_t)(a4),
                       a2);
    }
  }
  v17 = (uint32_t *)*a1;
  v18 = -1431655765 * ((int)(uintptr_t)(&v6[-*a1]) >> 3);
  if ( v8 > 178956970 - v18 )
    sub_1900180("vector::_M_range_insert");
  v39 = 0xFFFFFFFC;
  if ( v18 >= v8 )
    v8 = v18;
  v19 = __CFADD__(v18, v8);
  v20 = v18 + v8;
  if ( v19 || v20 > 0xAAAAAAA )
  {
    v21 = opNew(0xFFFFFFF0);
  }
  else
  {
    v39 = 0;
    v36 = nullptr;
    if ( v20 == 0 )
      goto LABEL_21;
    v39 = 6 * v20;
    v21 = opNew(24 * v20);
  }
  v36 = (uint32_t *)v21;
  v17 = (uint32_t *)*a1;
LABEL_21:
  v22 = sub_CD3BB0(v17, a2, v36);
  v23 = sub_CD3B60(a3, a4, v22);
  v41 = sub_CD3BB0(a2, (uint32_t *)a1[1], v23);
  v24 = a1[1];
  v25 = (char *)*a1;
  if ( v24 != *a1 )
  {
    v26 = *a1;
    v27 = v25 + 8;
    do
    {
      v28 = *(glitch::video::CVertexStreams::Self **)&v27[v26 - (uint32_t)(uintptr_t)(v25)];
      if ( v28 != nullptr && __sync_fetch_and_add((volatile int32_t *)v28, 0xFFFFFFFF) == 1 )
      {
        v33 = v25;
        v32 = v27;
        glitch::video::CVertexStreams::Destroy(v28);
        gll_operator_delete_arr((int)(uintptr_t)(v28));
        v27 = v32;
        v25 = v33;
      }
      v26 += 24;
    }
    while ( v24 != v26 );
    v5 = a1;
    v25 = (char *)*a1;
  }
  if ( v25 != nullptr )
    opDelete(v25);
  *v5 = (uint32_t)(uintptr_t)(v36);
  v5[1] = (uint32_t)(uintptr_t)(v41);
  v5[2] = (uint32_t)(uintptr_t)(&v36[v39]);
  return (char *)&v36[v39];
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_streaming_SStreamingItem_c5d632::M_insert_aux  (binary VA: 0xcf4630)
// Original: std::vector<glitch::streaming::SStreamingItemDesc,glitch::core::SAllocator<glitch::streaming::SStreamingItemDesc,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_streaming_SStreamingItem_c5d632::M_insert_aux(int a1, glitch::streaming::SStreamingItemDesc::Self *a2, const glitch::streaming::SStreamingItemDesc::Self *a3)
{
  int *v3;
  glitch::streaming::SStreamingItemDesc::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  glitch::streaming::SStreamingItemDesc::Self *v9;
  int i;
  const glitch::streaming::SStreamingItemDesc::Self *v11;
  glitch::streaming::SStreamingItemDesc::Self *v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  const glitch::streaming::SStreamingItemDesc::Self *v17;
  glitch::streaming::SStreamingItemDesc::Self *v18;
  glitch::streaming::SStreamingItemDesc::Self *v19;
  glitch::streaming::SStreamingItemDesc::Self *v20;
  glitch::streaming::SStreamingItemDesc::Self *v21;
  glitch::streaming::SStreamingItemDesc::Self *v22;
  int v23;
  typedef glitch::streaming::SStreamingItemDesc::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int *_g4_t_v29;
  typedef uint8_t _g4_t_v30[80];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v25)) > _g4_s1 ? (28u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v26)) > _g4_s2 ? (32u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v27)) > _g4_s3 ? (36u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v28)) > _g4_s4 ? (40u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v29)) > _g4_s5 ? (44u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v30)) > _g4_s6 ? (60u + sizeof(_g4_t_v30)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);

  v3 = (int *)a1;
  v4 = a2;
  v5 = *(uint32_t *)(a1 + 4);
  if ( v5 != *(uint32_t *)(a1 + 8) )
  {
    v6 = 0;
    if ( v5 != 0 )
    {
      glitch::streaming::SStreamingItemDesc::Construct(
        *(glitch::streaming::SStreamingItemDesc::Self **)(a1 + 4),
        (const glitch::streaming::SStreamingItemDesc::Self *)(v5 - 52));
      v6 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v6 + 52;
    glitch::streaming::SStreamingItemDesc::Construct((glitch::streaming::SStreamingItemDesc::Self *)v30, a3);
    v7 = *(uint32_t *)(a1 + 4);
    v8 = -991146299 * ((v7 - 104 - (int)(uintptr_t)(a2)) >> 2);
    if ( v8 > 0 )
    {
      v9 = (glitch::streaming::SStreamingItemDesc::Self *)(v7 - 52);
      for ( i = v8; i != 0; --i )
      {
        v11 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v9 - 104);
        v9 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v9 - 52);
        glitch::streaming::SStreamingItemDesc::opAssign(v9, v11);
      }
      v4 = a2;
    }
    glitch::streaming::SStreamingItemDesc::opAssign(v4, (const glitch::streaming::SStreamingItemDesc::Self *)v30);
    glitch::streaming::SStreamingItemDesc::Destroy((glitch::streaming::SStreamingItemDesc::Self *)v30);
    return;
  }
  v12 = *(glitch::streaming::SStreamingItemDesc::Self **)a1;
  v13 = (v5 - *(uint32_t *)a1) >> 2;
  v14 = -991146299 * v13;
  if ( -991146299 * v13 != 0 )
  {
    v15 = -1982292598 * v13;
    if ( v14 > 2 * v14 || v15 > 0x4EC4EC4 )
    {
      v28 = -48;
      v16 = -991146299 * ((a2 - v12) >> 2);
    }
    else
    {
      v28 = 104 * v14;
      v16 = -991146299 * ((a2 - v12) >> 2);
      if ( v15 == 0 )
      {
        v27 = 52;
        v26 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v28 = 52;
    v16 = -991146299 * ((a2 - v12) >> 2);
  }
  v25 = v16;
  v26 = sub_4EBDC0(v28);
  v27 = v26 + 52;
  v16 = v25;
LABEL_13:
  if ( v26 + 52 * v16 != 0 )
    glitch::streaming::SStreamingItemDesc::Construct(
      (glitch::streaming::SStreamingItemDesc::Self *)(v26 + 52 * v16),
      a3);
  v17 = *(const glitch::streaming::SStreamingItemDesc::Self **)a1;
  if ( *(glitch::streaming::SStreamingItemDesc::Self **)a1 != a2 )
  {
    v18 = (glitch::streaming::SStreamingItemDesc::Self *)v26;
    do
    {
      if ( v18 != nullptr )
        glitch::streaming::SStreamingItemDesc::Construct(v18, v17);
      v17 = (const glitch::streaming::SStreamingItemDesc::Self *)((char *)v17 + 52);
      v18 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v18 + 52);
    }
    while ( v17 != a2 );
    v19 = v18;
    v3 = (int *)a1;
    v27 = (int)(uintptr_t)(v19) + 52;
  }
  v20 = (glitch::streaming::SStreamingItemDesc::Self *)v3[1];
  if ( v20 != a2 )
  {
    v29 = v3;
    v21 = (glitch::streaming::SStreamingItemDesc::Self *)v3[1];
    v22 = (glitch::streaming::SStreamingItemDesc::Self *)v27;
    do
    {
      if ( v22 != nullptr )
        glitch::streaming::SStreamingItemDesc::Construct(v22, v4);
      v4 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v4 + 52);
      v22 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v22 + 52);
    }
    while ( v21 != v4 );
    v3 = v29;
    v27 = (int)(uintptr_t)(v22);
    v20 = (glitch::streaming::SStreamingItemDesc::Self *)v29[1];
  }
  v23 = *v3;
  if ( (glitch::streaming::SStreamingItemDesc::Self *)*v3 != v20 )
  {
    do
    {
      v24 = (glitch::streaming::SStreamingItemDesc::Self *)v23;
      v23 += 52;
      glitch::streaming::SStreamingItemDesc::Destroy(v24);
    }
    while ( v20 != (glitch::streaming::SStreamingItemDesc::Self *)v23 );
    v23 = *v3;
  }
  if ( v23 != 0 )
    gll_operator_delete_arr(v23);
  *v3 = v26;
  v3[1] = v27;
  v3[2] = v28 + v26;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_streaming_CModifierEmitt_65ba1f::M_insert_aux  (binary VA: 0xcf4a70)
// Original: std::vector<glitch::streaming::CModifierEmitterBase::SObject>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_streaming_CModifierEmitt_65ba1f::M_insert_aux(int *a1, char *a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  char *v12;
  void *v13;
  unsigned int v14;
  int v15;
  int v16;
  void *v17;
  size_t n;
  void *v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  int v29;
  char *v30;
  int v31;
  char *v32;
  char *v33;
  char *v34;
  char *v35;
  char *v36;
  glitch::video::CVertexStreams::Self *v37;
  int v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char *_g4_t_v46;
  typedef void *_g4_t_v47;
  typedef void *_g4_t_dest;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef void *_g4_t_v54;
  typedef char *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef uint8_t *_g4_t_v61;
  typedef char *_g4_t_src;
  typedef size_t _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef char *_g4_t_v67;
  typedef size_t _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t _g4_t_v76[4];
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef uint32_t _g4_t_v79[3];
  typedef char _g4_t_v80;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v40)) > _g4_s1 ? (4u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v41)) > _g4_s2 ? (4u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v42)) > _g4_s3 ? (4u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v43)) > _g4_s4 ? (4u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v44)) > _g4_s5 ? (4u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v45)) > _g4_s6 ? (4u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v46)) > _g4_s7 ? (4u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v47)) > _g4_s8 ? (8u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_dest)) > _g4_s9 ? (8u + sizeof(_g4_t_dest)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v49)) > _g4_s10 ? (8u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v50)) > _g4_s11 ? (12u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v51)) > _g4_s12 ? (12u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v52)) > _g4_s13 ? (16u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v53)) > _g4_s14 ? (16u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v54)) > _g4_s15 ? (24u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v55)) > _g4_s16 ? (24u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v56)) > _g4_s17 ? (24u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v57)) > _g4_s18 ? (28u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v58)) > _g4_s19 ? (32u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v59)) > _g4_s20 ? (32u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v60)) > _g4_s21 ? (36u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v61)) > _g4_s22 ? (36u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_src)) > _g4_s23 ? (40u + sizeof(_g4_t_src)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v63)) > _g4_s24 ? (40u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v64)) > _g4_s25 ? (44u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v65)) > _g4_s26 ? (44u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v66)) > _g4_s27 ? (48u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v67)) > _g4_s28 ? (48u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v68)) > _g4_s29 ? (52u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v69)) > _g4_s30 ? (56u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v70)) > _g4_s31 ? (64u + sizeof(_g4_t_v70)) : _g4_s31,
    _g4_s33 = (68u + sizeof(_g4_t_v71)) > _g4_s32 ? (68u + sizeof(_g4_t_v71)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v72)) > _g4_s33 ? (72u + sizeof(_g4_t_v72)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v73)) > _g4_s34 ? (76u + sizeof(_g4_t_v73)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v74)) > _g4_s35 ? (80u + sizeof(_g4_t_v74)) : _g4_s35,
    _g4_s37 = (84u + sizeof(_g4_t_v75)) > _g4_s36 ? (84u + sizeof(_g4_t_v75)) : _g4_s36,
    _g4_s38 = (88u + sizeof(_g4_t_v76)) > _g4_s37 ? (88u + sizeof(_g4_t_v76)) : _g4_s37,
    _g4_s39 = (104u + sizeof(_g4_t_v77)) > _g4_s38 ? (104u + sizeof(_g4_t_v77)) : _g4_s38,
    _g4_s40 = (108u + sizeof(_g4_t_v78)) > _g4_s39 ? (108u + sizeof(_g4_t_v78)) : _g4_s39,
    _g4_s41 = (112u + sizeof(_g4_t_v79)) > _g4_s40 ? (112u + sizeof(_g4_t_v79)) : _g4_s40,
    _g4_s42 = (124u + sizeof(_g4_t_v80)) > _g4_s41 ? (124u + sizeof(_g4_t_v80)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 64u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 68u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 76u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 80u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 84u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 88u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 104u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 108u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 124u);

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      v5 = *(uint32_t *)(v3 - 64);
      *(uint32_t *)(v3 + 24) = 0;
      *(uint32_t *)v3 = v5;
      *(uint32_t *)(v3 + 4) = *(uint32_t *)(v3 - 60);
      *(uint32_t *)(v3 + 8) = *(uint32_t *)(v3 - 56);
      *(uint32_t *)(v3 + 12) = *(uint32_t *)(v3 - 52);
      *(uint32_t *)(v3 + 16) = *(uint32_t *)(v3 - 48);
      *(uint32_t *)(v3 + 20) = *(uint32_t *)(v3 - 44);
      *(uint32_t *)(v3 + 28) = 0;
      *(uint32_t *)(v3 + 32) = 0;
      *(uint32_t *)(v3 + 36) = 0;
      *(uint32_t *)(v3 + 48) = 0;
      *(uint32_t *)(v3 + 52) = 0;
      *(uint32_t *)(v3 + 56) = 0;
      g4_std::vector_unsigned_int_58c56d::opAssign(
        (std::vector<unsigned int> *)(v3 + 24),
        (const std::vector<unsigned int> *)(v3 - 40));
      *(uint32_t *)(v3 + 40) = *(uint32_t *)(v3 - 24);
      *(uint32_t *)(v3 + 44) = *(uint32_t *)(v3 - 20);
      g4_std::vector_util_STriangleAdapter_947aa8::opAssign(
        (std::vector<glitch::util::STriangleAdapter> *)(v3 + 48),
        (const std::vector<glitch::util::STriangleAdapter> *)(v3 - 16));
      *(uint8_t *)(v3 + 60) = *(uint8_t *)(v3 - 4);
      v4 = a1[1];
    }
    memset(v76, 0, sizeof(v76));
    v79[0] = 0;
    v79[1] = 0;
    a1[1] = v4 + 64;
    v70 = *a3;
    v71 = a3[1];
    v72 = a3[2];
    v73 = a3[3];
    v74 = a3[4];
    v75 = a3[5];
    v79[2] = 0;
    g4_std::vector_unsigned_int_58c56d::opAssign((std::vector<unsigned int> *)v76, (const std::vector<unsigned int> *)(a3 + 6));
    v77 = a3[10];
    v78 = a3[11];
    g4_std::vector_util_STriangleAdapter_947aa8::opAssign(
      (std::vector<glitch::util::STriangleAdapter> *)v79,
      (const std::vector<glitch::util::STriangleAdapter> *)(a3 + 12));
    v66 = a1[1];
    v69 = v66 - 128;
    v80 = *((uint8_t *)a3 + 60);
    v57 = (v66 - 128 - (int)(uintptr_t)(a2)) >> 6;
    if ( v57 > 0 )
    {
      v58 = (uint32_t *)(v66 - 64);
      v6 = (uint32_t *)(v66 - 64);
      v7 = v66 - 192;
      v8 = v66 - 116;
      v39 = v66 - 180;
      while ( 1 )
      {
        v6 -= 16;
        v12 = (char *)v6 - v66;
        *(uint32_t *)&v12[v66] = *(uint32_t *)((char *)v6 + v7 - v66 + 128);
        *(uint32_t *)&v12[v69 + 132] = *(uint32_t *)&v12[v7 + 132];
        *(uint32_t *)&v12[v69 + 136] = *(uint32_t *)&v12[v7 + 136];
        *(uint32_t *)&v12[v8 + 128] = *(uint32_t *)&v12[v39 + 128];
        *(uint32_t *)&v12[v8 + 132] = *(uint32_t *)&v12[v39 + 132];
        *(uint32_t *)&v12[v8 + 136] = *(uint32_t *)&v12[v39 + 136];
        v54 = (void *)*(v6 - 10);
        v13 = (void *)v6[6];
        v14 = (*(v6 - 9) - (int)(uintptr_t)(v54)) >> 2;
        if ( v14 > (v6[8] - (int)(uintptr_t)(v13)) >> 2 )
        {
          if ( v14 != 0 )
          {
            if ( v14 > 0x3FFFFFFF )
              sub_18FFEE0(v13, v7);
            v41 = v7;
            v63 = 4 * v14;
            dest = (void *)opNew(4 * v14);
            memmove(dest, v54, 4 * v14);
            v19 = dest;
            v7 = v41;
          }
          else
          {
            v63 = 0;
            v19 = nullptr;
          }
          v16 = v66 - 104;
          v17 = (void *)v6[6];
          if ( v17 != nullptr )
          {
            v42 = v7;
            v47 = v19;
            opDelete(v17);
            v19 = v47;
            v7 = v42;
            v16 = v66 - 104;
          }
          *(uint32_t *)&v12[v16 + 128] = (uint32_t)(uintptr_t)(v19);
          v10 = (int)(uintptr_t)(v19) + v63;
          v9 = v66 - 104;
          v6[8] = v10;
        }
        else
        {
          v60 = (v6[7] - (int)(uintptr_t)(v13)) >> 2;
          if ( v14 <= v60 )
          {
            if ( v14 != 0 )
            {
              n = 4 * v14;
              v44 = v7;
              memmove(v13, v54, n);
              v7 = v44;
              v9 = v66 - 104;
              v10 = v6[6] + n;
            }
            else
            {
              v9 = v66 - 104;
              v10 = v6[6];
            }
          }
          else
          {
            v52 = v66 - 104;
            v64 = v66 - 168;
            src = (char *)*(v6 - 10);
            v55 = &src[4 * v60];
            if ( v60 != 0 )
            {
              v45 = v7;
              memmove((void *)v6[6], src, 4 * v60);
              v7 = v45;
              v55 = (char *)(*(uint32_t *)&v12[v64 + 128] + ((v6[7] - v6[6]) & 0xFFFFFFFC));
            }
            v15 = (*(uint32_t *)&v12[v64 + 132] - (int)(uintptr_t)(v55)) >> 2;
            if ( v15 != 0 )
            {
              v43 = v7;
              memmove(*(void **)&v12[v52 + 132], v55, 4 * v15);
              v9 = v66 - 104;
              v7 = v43;
            }
            else
            {
              v9 = v66 - 104;
            }
            v10 = *(uint32_t *)&v12[v52 + 128] + 4 * v14;
          }
        }
        *(uint32_t *)&v12[v9 + 132] = v10;
        *(uint32_t *)&v12[v69 + 168] = *(uint32_t *)&v12[v7 + 168];
        *(uint32_t *)&v12[v69 + 172] = *(uint32_t *)&v12[v7 + 172];
        v40 = v7;
        g4_std::vector_util_STriangleAdapter_947aa8::opAssign(
          (std::vector<glitch::util::STriangleAdapter> *)(v58 - 4),
          (const std::vector<glitch::util::STriangleAdapter> *)(v6 - 4));
        v7 = v40;
        v11 = v57-- == 1;
        v12[v69 + 188] = v12[v40 + 188];
        if ( v11 )
          break;
        v58 = v6;
        v8 = v66 - 116;
      }
    }
    *(uint32_t *)a2 = v70;
    *((uint32_t *)a2 + 1) = v71;
    *((uint32_t *)a2 + 2) = v72;
    *((uint32_t *)a2 + 3) = v73;
    *((uint32_t *)a2 + 4) = v74;
    *((uint32_t *)a2 + 5) = v75;
    g4_std::vector_unsigned_int_58c56d::opAssign((std::vector<unsigned int> *)(a2 + 24), (const std::vector<unsigned int> *)v76);
    *((uint32_t *)a2 + 10) = v77;
    *((uint32_t *)a2 + 11) = v78;
    g4_std::vector_util_STriangleAdapter_947aa8::opAssign(
      (std::vector<glitch::util::STriangleAdapter> *)(a2 + 48),
      (const std::vector<glitch::util::STriangleAdapter> *)v79);
    a2[60] = v80;
    glitch::streaming::CModifierEmitterBase::SObject::Destroy((glitch::streaming::CModifierEmitterBase::SObject::Self *)&v70);
    return;
  }
  v20 = *a1;
  v21 = (v3 - *a1) >> 6;
  if ( v21 != 0 )
  {
    v22 = 2 * v21;
    if ( v21 > 2 * v21 || v22 > 0x3FFFFFF )
    {
      v68 = 0xFFFFFFC0;
      v23 = (int)(uintptr_t)(&a2[-v20]) >> 6;
    }
    else
    {
      v68 = v21 << 7;
      v23 = (int)(uintptr_t)(&a2[-v20]) >> 6;
      if ( v22 == 0 )
      {
        v50 = 64;
        v53 = 0;
        goto LABEL_32;
      }
    }
    v24 = opNew(v68);
  }
  else
  {
    v68 = 64;
    v23 = (int)(uintptr_t)(&a2[-v20]) >> 6;
    v24 = opNew(0x40u);
  }
  v53 = v24;
  v50 = v24 + 64;
LABEL_32:
  v25 = v53 + (v23 << 6);
  if ( v25 != 0 )
  {
    *(uint32_t *)v25 = 2139095039;
    *(uint32_t *)(v25 + 4) = 2139095039;
    *(uint32_t *)(v25 + 8) = 2139095039;
    *(uint32_t *)(v25 + 12) = -8388609;
    *(uint32_t *)(v25 + 16) = -8388609;
    *(uint32_t *)(v25 + 20) = -8388609;
    *(uint32_t *)(v25 + 24) = 0;
    *(uint32_t *)(v25 + 28) = 0;
    *(uint32_t *)(v25 + 32) = 0;
    *(uint32_t *)(v25 + 36) = 0;
    *(uint32_t *)(v25 + 48) = 0;
    *(uint32_t *)(v25 + 52) = 0;
    *(uint32_t *)(v25 + 56) = 0;
    *(uint32_t *)v25 = *a3;
    *(uint32_t *)(v25 + 4) = a3[1];
    *(uint32_t *)(v25 + 8) = a3[2];
    *(uint32_t *)(v25 + 12) = a3[3];
    *(uint32_t *)(v25 + 16) = a3[4];
    *(uint32_t *)(v25 + 20) = a3[5];
    g4_std::vector_unsigned_int_58c56d::opAssign(
      (std::vector<unsigned int> *)(v25 + 24),
      (const std::vector<unsigned int> *)(a3 + 6));
    *(uint32_t *)(v25 + 40) = a3[10];
    *(uint32_t *)(v25 + 44) = a3[11];
    g4_std::vector_util_STriangleAdapter_947aa8::opAssign(
      (std::vector<glitch::util::STriangleAdapter> *)(v25 + 48),
      (const std::vector<glitch::util::STriangleAdapter> *)(a3 + 12));
    *(uint8_t *)(v25 + 60) = *((uint8_t *)a3 + 60);
  }
  if ( (char *)*a1 != a2 )
  {
    v26 = (char *)*a1;
    v27 = v53;
    do
    {
      if ( v27 != 0 )
      {
        v28 = v27 - v53;
        *(uint32_t *)v27 = 2139095039;
        *(uint32_t *)(v27 + 4) = 2139095039;
        *(uint32_t *)(v27 + 8) = 2139095039;
        *(uint32_t *)(v27 + 12) = -8388609;
        *(uint32_t *)(v28 + v53 + 16) = -8388609;
        *(uint32_t *)(v28 + v53 + 20) = -8388609;
        *(uint32_t *)(v27 + 24) = 0;
        *(uint32_t *)(v28 + v53 + 28) = 0;
        *(uint32_t *)(v28 + v53 + 32) = 0;
        *(uint32_t *)(v27 + 36) = 0;
        *(uint32_t *)(v27 + 48) = 0;
        *(uint32_t *)(v28 + v53 + 52) = 0;
        *(uint32_t *)(v28 + v53 + 56) = 0;
        *(uint32_t *)v27 = *(uint32_t *)v26;
        *(uint32_t *)(v27 + 4) = *((uint32_t *)v26 + 1);
        *(uint32_t *)(v27 + 8) = *((uint32_t *)v26 + 2);
        *(uint32_t *)(v27 + 12) = *((uint32_t *)v26 + 3);
        *(uint32_t *)(v28 + v53 + 16) = *((uint32_t *)v26 + 4);
        *(uint32_t *)(v28 + v53 + 20) = *((uint32_t *)v26 + 5);
        g4_std::vector_unsigned_int_58c56d::opAssign(
          (std::vector<unsigned int> *)(v27 + 24),
          (const std::vector<unsigned int> *)(v26 + 24));
        *(uint32_t *)(v27 + 40) = *((uint32_t *)v26 + 10);
        *(uint32_t *)(v27 + 44) = *((uint32_t *)v26 + 11);
        g4_std::vector_util_STriangleAdapter_947aa8::opAssign(
          (std::vector<glitch::util::STriangleAdapter> *)(v27 + 48),
          (const std::vector<glitch::util::STriangleAdapter> *)(v26 + 48));
        *(uint8_t *)(v27 + 60) = v26[60];
      }
      v26 += 64;
      v27 += 64;
    }
    while ( v26 != a2 );
    v50 = v27 + 64;
  }
  v29 = v50;
  v59 = (char *)a1[1];
  if ( v59 != a2 )
  {
    v30 = a2;
    do
    {
      if ( v29 != 0 )
      {
        v31 = v29 - v50;
        *(uint32_t *)v29 = 2139095039;
        *(uint32_t *)(v29 + 4) = 2139095039;
        *(uint32_t *)(v29 + 8) = 2139095039;
        *(uint32_t *)(v29 + 12) = -8388609;
        *(uint32_t *)(v31 + v50 + 16) = -8388609;
        *(uint32_t *)(v31 + v50 + 20) = -8388609;
        *(uint32_t *)(v29 + 24) = 0;
        *(uint32_t *)(v31 + v50 + 28) = 0;
        *(uint32_t *)(v31 + v50 + 32) = 0;
        *(uint32_t *)(v29 + 36) = 0;
        *(uint32_t *)(v29 + 48) = 0;
        *(uint32_t *)(v31 + v50 + 52) = 0;
        *(uint32_t *)(v31 + v50 + 56) = 0;
        *(uint32_t *)v29 = *(uint32_t *)v30;
        *(uint32_t *)(v29 + 4) = *((uint32_t *)v30 + 1);
        *(uint32_t *)(v29 + 8) = *((uint32_t *)v30 + 2);
        *(uint32_t *)(v29 + 12) = *((uint32_t *)v30 + 3);
        *(uint32_t *)(v31 + v50 + 16) = *((uint32_t *)v30 + 4);
        *(uint32_t *)(v31 + v50 + 20) = *((uint32_t *)v30 + 5);
        g4_std::vector_unsigned_int_58c56d::opAssign(
          (std::vector<unsigned int> *)(v29 + 24),
          (const std::vector<unsigned int> *)(v30 + 24));
        *(uint32_t *)(v29 + 40) = *((uint32_t *)v30 + 10);
        *(uint32_t *)(v29 + 44) = *((uint32_t *)v30 + 11);
        g4_std::vector_util_STriangleAdapter_947aa8::opAssign(
          (std::vector<glitch::util::STriangleAdapter> *)(v29 + 48),
          (const std::vector<glitch::util::STriangleAdapter> *)(v30 + 48));
        *(uint8_t *)(v29 + 60) = v30[60];
      }
      v30 += 64;
      v29 += 64;
    }
    while ( v59 != v30 );
    v59 = (char *)a1[1];
  }
  v32 = (char *)*a1;
  v61 = (uint8_t *)*a1;
  if ( (char *)*a1 != v59 )
  {
    v51 = (char *)*a1;
    v56 = v32 + 48;
    v67 = v32 + 36;
    v65 = v29;
    do
    {
      v33 = *(char **)&v56[v51 - (char *)(v61) + 4];
      v34 = *(char **)&v56[v51 - (char *)(v61)];
      if ( v33 != v34 )
      {
        v35 = *(char **)&v56[v51 - (char *)(v61)];
        v36 = v34 + 8;
        do
        {
          v37 = *(glitch::video::CVertexStreams::Self **)&v36[v35 - v34];
          if ( v37 != nullptr && __sync_fetch_and_add((volatile int32_t *)v37, 0xFFFFFFFF) == 1 )
          {
            v46 = v33;
            v49 = v36;
            glitch::video::CVertexStreams::Destroy(v37);
            gll_operator_delete_arr((int)(uintptr_t)(v37));
            v36 = v49;
            v33 = v46;
          }
          v35 += 24;
        }
        while ( v33 != v35 );
        v34 = *((char **)v51 + 12);
      }
      if ( v34 != nullptr )
        opDelete(v34);
      v38 = *(uint32_t *)&v67[v51 - (char *)(v61)];
      if ( v38 != 0 )
      {
        if ( *(uint8_t *)(v38 + 8) != 0 && *(uint32_t *)v38 != 0 )
          opDeleteArray(*(void **)v38);
        opDelete((void *)v38);
      }
      if ( *((uint32_t *)v51 + 6) != 0 )
        opDelete(*((void **)v51 + 6));
      v51 += 64;
    }
    while ( v51 != v59 );
    v29 = v65;
    v61 = (uint8_t *)*a1;
  }
  if ( v61 != nullptr )
    opDelete(v61);
  *a1 = v53;
  a1[1] = v29;
  a1[2] = v68 + v53;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_streaming_SGeometricObje_8f68d5::opAssign  (binary VA: 0xcf5640)
// Original: std::vector<glitch::streaming::SGeometricObject>::operator=
// ----------------------------------------------------------------------------
std::vector<glitch::streaming::SGeometricObject::Self> * g4_std::vector_streaming_SGeometricObje_8f68d5::opAssign(std::vector<glitch::streaming::SGeometricObject::Self> *self, const std::vector<glitch::streaming::SGeometricObject::Self> *a2)
{
  std::vector<glitch::streaming::SGeometricObject::Self> *result;
  glitch::streaming::SGeometricObject::Self *v3;
  const glitch::streaming::SGeometricObject::Self *v4;
  const glitch::streaming::SGeometricObject::Self *v5;
  int v6;
  glitch::streaming::SGeometricObject::Self *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int i;
  const glitch::streaming::SGeometricObject::Self *v15;
  const glitch::streaming::SGeometricObject::Self *v16;
  int v17;
  int v18;
  glitch::streaming::SGeometricObject::Self *v19;
  const glitch::streaming::SGeometricObject::Self *v20;
  glitch::streaming::SGeometricObject::Self *v21;
  int v22;
  glitch::streaming::SGeometricObject::Self *v23;
  glitch::streaming::SGeometricObject::Self *v24;
  glitch::streaming::SGeometricObject::Self *v25;
  glitch::streaming::SGeometricObject::Self *v26;
  glitch::streaming::SGeometricObject::Self *v27;
  glitch::streaming::SGeometricObject::Self *v28;
  glitch::streaming::SGeometricObject::Self *v29;
  const glitch::streaming::SGeometricObject::Self *v30;
  int v31;
  int v32;
  int v33;
  glitch::streaming::SGeometricObject::Self *v34;
  int v35;
  int v36;
  int v37;

  result = self;
  if ( a2 != self )
  {
    v3 = *(glitch::streaming::SGeometricObject::Self **)self;
    v4 = *((const glitch::streaming::SGeometricObject::Self **)a2 + 1);
    v5 = *(const glitch::streaming::SGeometricObject::Self **)a2;
    v6 = ((int)(uintptr_t)(v4) - *(uint32_t *)a2) >> 4;
    v31 = -1431655765 * v6;
    v36 = -1431655765 * v6;
    if ( -1431655765 * v6 > (unsigned int)(-1431655765 * ((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 4)) )
    {
      if ( v31 != 0 )
      {
        if ( (unsigned int)v31 > 0x5555555 )
          sub_18FFEE0(v4, v6);
        v30 = *((const glitch::streaming::SGeometricObject::Self **)a2 + 1);
        v17 = 16 * v6;
        v18 = opNew(16 * v6);
        v4 = v30;
      }
      else
      {
        v17 = 0;
        v18 = 0;
      }
      if ( v5 != v4 )
      {
        v32 = v17;
        v35 = v18;
        v19 = (glitch::streaming::SGeometricObject::Self *)v18;
        v20 = v4;
        do
        {
          if ( v19 != nullptr )
            glitch::streaming::SGeometricObject::Construct(v19, v5);
          v5 = (const glitch::streaming::SGeometricObject::Self *)((char *)v5 + 48);
          v19 = (glitch::streaming::SGeometricObject::Self *)((char *)v19 + 48);
        }
        while ( v20 != v5 );
        v17 = v32;
        v18 = v35;
      }
      v21 = *(glitch::streaming::SGeometricObject::Self **)self;
      if ( *((uint32_t *)self + 1) != *(uint32_t *)self )
      {
        v33 = v18;
        v22 = v17;
        v23 = *((glitch::streaming::SGeometricObject::Self **)self + 1);
        do
        {
          v27 = v21;
          v21 = (glitch::streaming::SGeometricObject::Self *)((char *)v21 + 48);
          glitch::streaming::SGeometricObject::Destroy(v27);
        }
        while ( v23 != v21 );
        v17 = v22;
        v18 = v33;
        v21 = *(glitch::streaming::SGeometricObject::Self **)self;
      }
      if ( v21 != nullptr )
        opDelete(v21);
      result = self;
      v10 = v18 + v17;
      *(uint32_t *)self = v18;
      *((uint32_t *)self + 2) = v10;
      goto LABEL_11;
    }
    v7 = *((glitch::streaming::SGeometricObject::Self **)self + 1);
    v8 = (v7 - v3) >> 4;
    if ( v31 > (unsigned int)(-1431655765 * v8) )
    {
      v11 = 16 * v8;
      v12 = (unsigned int)(uintptr_t)(v5) + v11;
      v13 = -1431655765 * (v11 >> 4);
      if ( v13 > 0 )
      {
        for ( i = v13; i != 0; --i )
        {
          v29 = (glitch::streaming::SGeometricObject::Self *)(v5);
          v26 = v3;
          v5 = (const glitch::streaming::SGeometricObject::Self *)((char *)v5 + 48);
          v3 = (glitch::streaming::SGeometricObject::Self *)((char *)v3 + 48);
          glitch::streaming::SGeometricObject::opAssign(v26, v29);
        }
        v7 = *((glitch::streaming::SGeometricObject::Self **)self + 1);
        v3 = *(glitch::streaming::SGeometricObject::Self **)self;
        v4 = *((const glitch::streaming::SGeometricObject::Self **)a2 + 1);
        v12 = *(uint32_t *)a2 + (((unsigned int)(uintptr_t)(v7) - *(uint32_t *)self) & 0xFFFFFFF0);
      }
      if ( v4 == (const glitch::streaming::SGeometricObject::Self *)v12 )
      {
        v10 = (int)(uintptr_t)(v3) + 48 * v31;
        result = self;
        goto LABEL_11;
      }
      v15 = v4;
      v16 = (const glitch::streaming::SGeometricObject::Self *)v12;
      do
      {
        if ( v7 != nullptr )
          glitch::streaming::SGeometricObject::Construct(v7, v16);
        v16 = (const glitch::streaming::SGeometricObject::Self *)((char *)v16 + 48);
        v7 = (glitch::streaming::SGeometricObject::Self *)((char *)v7 + 48);
      }
      while ( v15 != v16 );
    }
    else
    {
      if ( v31 > 0 )
      {
        v34 = *((glitch::streaming::SGeometricObject::Self **)self + 1);
        v9 = v36;
        v37 = *(uint32_t *)self;
        do
        {
          v28 = (glitch::streaming::SGeometricObject::Self *)(v5);
          v24 = v3;
          v5 = (const glitch::streaming::SGeometricObject::Self *)((char *)v5 + 48);
          v3 = (glitch::streaming::SGeometricObject::Self *)((char *)v3 + 48);
          glitch::streaming::SGeometricObject::opAssign(v24, v28);
          --v9;
        }
        while ( v9 != 0 );
        v7 = v34;
        v3 = (glitch::streaming::SGeometricObject::Self *)(48 * v31 + v37);
      }
      if ( v7 == v3 )
      {
        result = self;
        v10 = *(uint32_t *)self + 48 * v31;
        goto LABEL_11;
      }
      do
      {
        v25 = v3;
        v3 = (glitch::streaming::SGeometricObject::Self *)((char *)v3 + 48);
        glitch::streaming::SGeometricObject::Destroy(v25);
      }
      while ( v7 != v3 );
    }
    result = self;
    v10 = *(uint32_t *)self + 48 * v31;
LABEL_11:
    *((uint32_t *)result + 1) = v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_streaming_SGeometricObje_8f68d5::M_range_insert_gnu_cxx_normal_iterator_d2c507  (binary VA: 0xcf5e60)
// Original: std::vector<glitch::streaming::SGeometricObject>::_M_range_insert<__gnu_cxx::__normal_iterator<glitch::streaming::SGeometricObject*,std::vector<glitch::streaming::SGeometricObject>>>
// ----------------------------------------------------------------------------
void g4_std::vector_streaming_SGeometricObje_8f68d5::M_range_insert_gnu_cxx_normal_iterator_d2c507(int a1, glitch::streaming::SGeometricObject::Self *a2, const glitch::streaming::SGeometricObject::Self *a3, const glitch::streaming::SGeometricObject::Self *a4)
{
  int v4;
  int v5;
  glitch::streaming::SGeometricObject::Self *v6;
  int v7;
  int v8;
  int v9;
  const glitch::streaming::SGeometricObject::Self *v10;
  bool v11;
  int v12;
  const glitch::streaming::SGeometricObject::Self *v13;
  glitch::streaming::SGeometricObject::Self *v14;
  glitch::streaming::SGeometricObject::Self *v15;
  glitch::streaming::SGeometricObject::Self *v16;
  const glitch::streaming::SGeometricObject::Self *v17;
  int v18;
  glitch::streaming::SGeometricObject::Self *v19;
  glitch::streaming::SGeometricObject::Self *v20;
  unsigned int v21;
  unsigned int v22;
  bool v23;
  unsigned int v24;
  int v25;
  glitch::streaming::SGeometricObject::Self *v26;
  const glitch::streaming::SGeometricObject::Self *v27;
  const glitch::streaming::SGeometricObject::Self *v28;
  const glitch::streaming::SGeometricObject::Self *v29;
  void **v30;
  glitch::streaming::SGeometricObject::Self *v31;
  const glitch::streaming::SGeometricObject::Self *v32;
  const glitch::streaming::SGeometricObject::Self *v33;
  glitch::streaming::SGeometricObject::Self *v34;
  glitch::streaming::SGeometricObject::Self *v35;
  glitch::streaming::SGeometricObject::Self *v36;
  glitch::streaming::SGeometricObject::Self *v37;
  int v38;
  const glitch::streaming::SGeometricObject::Self *v39;
  int v40;
  glitch::streaming::SGeometricObject::Self *v41;
  glitch::streaming::SGeometricObject::Self *v42;
  const glitch::streaming::SGeometricObject::Self *v43;
  int v44;
  glitch::streaming::SGeometricObject::Self *v45;
  size_t v46;
  glitch::streaming::SGeometricObject::Self *v47;
  glitch::streaming::SGeometricObject::Self *v48;
  glitch::streaming::SGeometricObject::Self *v49;
  glitch::streaming::SGeometricObject::Self *v50;
  glitch::streaming::SGeometricObject::Self *v51;
  unsigned int v52;
  int v53;
  glitch::streaming::SGeometricObject::Self *v54;
  int v55;
  void **v56;
  size_t v57;
  size_t v58;
  size_t v59;
  int v60;
  int v61;
  int v62;
  const glitch::streaming::SGeometricObject::Self *v63;
  glitch::streaming::SGeometricObject::Self *v64;

  v4 = (int)(uintptr_t)(a4);
  v5 = a1;
  if ( a3 == a4 )
    return;
  v6 = *(glitch::streaming::SGeometricObject::Self **)(a1 + 4);
  v7 = (a4 - a3) >> 4;
  v52 = -1431655765 * v7;
  v57 = -1431655765 * v7;
  if ( -1431655765 * v7 <= (unsigned int)(-1431655765 * ((*(uint32_t *)(a1 + 8) - (int)(uintptr_t)(v6)) >> 4)) )
  {
    v8 = (v6 - a2) >> 4;
    v60 = -1431655765 * v8;
    if ( v52 < -1431655765 * v8 )
    {
      v38 = 16 * v7;
      v39 = (glitch::streaming::SGeometricObject::Self *)((char *)v6 - v38);
      v61 = v38;
      v40 = *(uint32_t *)(a1 + 4);
      if ( v6 != (glitch::streaming::SGeometricObject::Self *)((char *)v6 - v38) )
      {
        v63 = (glitch::streaming::SGeometricObject::Self *)((char *)v6 - v38);
        v41 = *(glitch::streaming::SGeometricObject::Self **)(a1 + 4);
        v42 = v41;
        v43 = (glitch::streaming::SGeometricObject::Self *)((char *)v6 - v38);
        do
        {
          if ( v41 != nullptr )
            glitch::streaming::SGeometricObject::Construct(v41, v43);
          v43 = (const glitch::streaming::SGeometricObject::Self *)((char *)v43 + 48);
          v41 = (glitch::streaming::SGeometricObject::Self *)((char *)v41 + 48);
        }
        while ( v42 != v43 );
        v6 = v42;
        v5 = a1;
        v39 = v63;
        v40 = *(uint32_t *)(a1 + 4);
      }
      *(uint32_t *)(v5 + 4) = v61 + v40;
      v44 = -1431655765 * ((v39 - a2) >> 4);
      if ( v44 > 0 )
      {
        do
        {
          v39 = (const glitch::streaming::SGeometricObject::Self *)((char *)v39 - 48);
          v6 = (glitch::streaming::SGeometricObject::Self *)((char *)v6 - 48);
          glitch::streaming::SGeometricObject::opAssign(v6, v39);
          --v44;
        }
        while ( v44 != 0 );
      }
      if ( (int)v52 > 0 )
      {
        v45 = a2;
        v46 = v57;
        do
        {
          v49 = v45;
          v51 = (glitch::streaming::SGeometricObject::Self *)((char *)v45 + ((char *)a3 - (char *)a2));
          v45 = (glitch::streaming::SGeometricObject::Self *)((char *)v45 + 48);
          glitch::streaming::SGeometricObject::opAssign(v49, v51);
          --v46;
        }
        while ( v46 != 0 );
      }
    }
    else
    {
      v9 = 16 * v8;
      v10 = (const glitch::streaming::SGeometricObject::Self *)((char *)a3 + v9);
      v62 = v9;
      v11 = a4 == (const glitch::streaming::SGeometricObject::Self *)((char *)a3 + v9);
      v58 = (size_t)a3 + v9;
      v12 = *(uint32_t *)(a1 + 4);
      if ( !v11 )
      {
        v64 = *(glitch::streaming::SGeometricObject::Self **)(a1 + 4);
        v13 = v10;
        v14 = v64;
        do
        {
          if ( v14 != nullptr )
            glitch::streaming::SGeometricObject::Construct(v14, v13);
          v13 = (const glitch::streaming::SGeometricObject::Self *)((char *)v13 + 48);
          v14 = (glitch::streaming::SGeometricObject::Self *)((char *)v14 + 48);
        }
        while ( a4 != v13 );
        v5 = a1;
        v6 = v64;
        v12 = *(uint32_t *)(a1 + 4);
      }
      v15 = (glitch::streaming::SGeometricObject::Self *)(v12 + 48 * (v52 - v60));
      *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v15);
      if ( v6 != a2 )
      {
        v53 = v5;
        v16 = v6;
        v17 = a2;
        do
        {
          if ( v15 != nullptr )
            glitch::streaming::SGeometricObject::Construct(v15, v17);
          v17 = (const glitch::streaming::SGeometricObject::Self *)((char *)v17 + 48);
          v15 = (glitch::streaming::SGeometricObject::Self *)((char *)v15 + 48);
        }
        while ( v16 != v17 );
        v5 = v53;
        v15 = *(glitch::streaming::SGeometricObject::Self **)(v53 + 4);
      }
      *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)((char *)v15 + v62);
      v18 = -1431655765 * ((int)(v58 - (uint32_t)(uintptr_t)(a3)) >> 4);
      if ( v18 > 0 )
      {
        v19 = a2;
        do
        {
          v47 = v19;
          v50 = (glitch::streaming::SGeometricObject::Self *)((char *)v19 + ((char *)a3 - (char *)a2));
          v19 = (glitch::streaming::SGeometricObject::Self *)((char *)v19 + 48);
          glitch::streaming::SGeometricObject::opAssign(v47, v50);
          --v18;
        }
        while ( v18 != 0 );
      }
    }
    return;
  }
  v20 = *(glitch::streaming::SGeometricObject::Self **)a1;
  v21 = -1431655765 * (((int)(uintptr_t)(v6) - *(uint32_t *)a1) >> 4);
  if ( v52 > 89478485 - v21 )
    sub_1900180("vector::_M_range_insert");
  v22 = v52;
  if ( v21 >= v52 )
    v22 = v21;
  v59 = 0xFFFFFFF0;
  v23 = __CFADD__(v22, v21);
  v24 = v22 + v21;
  if ( v23 || v24 > 0x5555555 )
  {
    v25 = opNew(0xFFFFFFF0);
  }
  else
  {
    v59 = 0;
    v54 = nullptr;
    if ( v24 == 0 )
      goto LABEL_26;
    v59 = 48 * v24;
    v25 = opNew(48 * v24);
  }
  v54 = (glitch::streaming::SGeometricObject::Self *)v25;
  v20 = *(glitch::streaming::SGeometricObject::Self **)a1;
LABEL_26:
  v26 = v54;
  if ( a2 != v20 )
  {
    v27 = v20;
    do
    {
      if ( v26 != nullptr )
        glitch::streaming::SGeometricObject::Construct(v26, v27);
      v27 = (const glitch::streaming::SGeometricObject::Self *)((char *)v27 + 48);
      v26 = (glitch::streaming::SGeometricObject::Self *)((char *)v26 + 48);
    }
    while ( a2 != v27 );
    v5 = a1;
    v4 = (int)(uintptr_t)(a4);
  }
  v55 = v5;
  v28 = (const glitch::streaming::SGeometricObject::Self *)v4;
  v29 = a3;
  do
  {
    if ( v26 != nullptr )
      glitch::streaming::SGeometricObject::Construct(v26, v29);
    v29 = (const glitch::streaming::SGeometricObject::Self *)((char *)v29 + 48);
    v26 = (glitch::streaming::SGeometricObject::Self *)((char *)v26 + 48);
  }
  while ( v28 != v29 );
  v30 = (void **)v55;
  v31 = *(glitch::streaming::SGeometricObject::Self **)(v55 + 4);
  if ( v31 != a2 )
  {
    v32 = *(const glitch::streaming::SGeometricObject::Self **)(v55 + 4);
    v33 = a2;
    do
    {
      if ( v26 != nullptr )
        glitch::streaming::SGeometricObject::Construct(v26, v33);
      v33 = (const glitch::streaming::SGeometricObject::Self *)((char *)v33 + 48);
      v26 = (glitch::streaming::SGeometricObject::Self *)((char *)v26 + 48);
    }
    while ( v32 != v33 );
    v30 = (void **)v55;
    v31 = *(glitch::streaming::SGeometricObject::Self **)(v55 + 4);
  }
  v34 = (glitch::streaming::SGeometricObject::Self *)*v30;
  if ( *v30 != v31 )
  {
    v56 = v30;
    v35 = v26;
    v36 = v31;
    v37 = v34;
    do
    {
      v48 = v37;
      v37 = (glitch::streaming::SGeometricObject::Self *)((char *)v37 + 48);
      glitch::streaming::SGeometricObject::Destroy(v48);
    }
    while ( v36 != v37 );
    v26 = v35;
    v30 = v56;
    v34 = (glitch::streaming::SGeometricObject::Self *)*v56;
  }
  if ( v34 != nullptr )
    opDelete(v34);
  v30[1] = v26;
  *v30 = v54;
  v30[2] = (char *)v54 + v59;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_streaming_SGeometricObje_8f68d5::Construct  (binary VA: 0xcf6210)
// Original: std::vector<glitch::streaming::SGeometricObject>::vector
// ----------------------------------------------------------------------------
glitch::streaming::SGeometricObject::Self * g4_std::vector_streaming_SGeometricObje_8f68d5::Construct(int a1, int a2, std::vector<glitch::streaming::SGeometricObject::Self> *self, const std::vector<glitch::streaming::SGeometricObject::Self> *a4)
{
  int v4;
  size_t v5;
  glitch::streaming::SGeometricObject::Self *result;
  const glitch::streaming::SGeometricObject::Self *v7;
  const glitch::streaming::SGeometricObject::Self *i;
  glitch::streaming::SGeometricObject::Self *v9;

  v4 = (*((uint32_t *)a4 + 1) - *(uint32_t *)a4) >> 4;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( -1431655765 * v4 != 0 )
  {
    if ( (unsigned int)(-1431655765 * v4) > 0x5555555 )
      sub_18FFEE0(a1, a2);
    v5 = 16 * v4;
    result = (glitch::streaming::SGeometricObject::Self *)opNew(v5);
  }
  else
  {
    v5 = 0;
    result = nullptr;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)((char *)result + v5);
  v7 = *((const glitch::streaming::SGeometricObject::Self **)a4 + 1);
  for ( i = *(const glitch::streaming::SGeometricObject::Self **)a4;
        v7 != i;
        result = (glitch::streaming::SGeometricObject::Self *)((char *)result + 48) )
  {
    if ( result != nullptr )
    {
      v9 = result;
      glitch::streaming::SGeometricObject::Construct(result, i);
      result = v9;
    }
    i = (const glitch::streaming::SGeometricObject::Self *)((char *)i + 48);
  }
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_streaming_SGeometricInfo_671726::M_insert_aux  (binary VA: 0xcf62c0)
// Original: std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_streaming_SGeometricInfo_671726::M_insert_aux(int *a1, std::vector<glitch::streaming::SGeometricObject::Self> *a2, std::vector<glitch::streaming::SGeometricObject::Self> *a3)
{
  std::vector<glitch::streaming::SGeometricObject::Self> *v3;
  char **v4;
  char **v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  glitch::streaming::SGeometricObject::Self *v11;
  glitch::streaming::SGeometricObject::Self *v12;
  glitch::streaming::SGeometricObject::Self *v13;
  glitch::streaming::SGeometricObject::Self *v14;
  std::vector<glitch::streaming::SGeometricObject::Self> *v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  size_t v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  const glitch::streaming::SGeometricObject::Self **v25;
  int *v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  const glitch::streaming::SGeometricObject::Self *v31;
  glitch::streaming::SGeometricObject::Self *v32;
  int v33;
  int v34;
  const glitch::streaming::SGeometricObject::Self *v35;
  glitch::streaming::SGeometricObject::Self *v36;
  int *v37;
  std::vector<glitch::streaming::SGeometricObject::Self> *v38;
  int v39;
  int v40;
  const glitch::streaming::SGeometricObject::Self *v41;
  glitch::streaming::SGeometricObject::Self *v42;
  int v43;
  int v44;
  const glitch::streaming::SGeometricObject::Self *v45;
  glitch::streaming::SGeometricObject::Self *v46;
  int v47;
  void **v48;
  glitch::streaming::SGeometricObject::Self *v49;
  glitch::streaming::SGeometricObject::Self *v50;
  glitch::streaming::SGeometricObject::Self *v51;
  glitch::streaming::SGeometricObject::Self *v52;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v53;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v54;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v55;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef const glitch::streaming::SGeometricObject::Self **_g4_t_v65;
  typedef const glitch::streaming::SGeometricObject::Self **_g4_t_v66;
  typedef std::vector<glitch::streaming::SGeometricObject::Self> *_g4_t_v67;
  typedef int *_g4_t_v68;
  typedef int *_g4_t_v69;
  typedef int *_g4_t_v70;
  typedef int *_g4_t_v71;
  typedef std::vector<glitch::streaming::SGeometricObject::Self> *_g4_t_v72;
  typedef std::vector<glitch::streaming::SGeometricObject::Self> *_g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef uint32_t *_g4_t_v75;
  typedef int *_g4_t_v76;
  typedef int *_g4_t_v77;
  typedef int *_g4_t_v78;
  typedef void **_g4_t_v79;
  typedef void **_g4_t_v80;
  typedef const glitch::streaming::SGeometricObject::Self *_g4_t_v81;
  typedef const glitch::streaming::SGeometricObject::Self *_g4_t_v82;
  typedef const glitch::streaming::SGeometricObject::Self *_g4_t_v83;
  typedef const glitch::streaming::SGeometricObject::Self *_g4_t_v84;
  typedef void **_g4_t_v85;
  typedef uint32_t _g4_t_v86[3];
  typedef uint32_t _g4_t_v87[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v53)) > _g4_s0 ? (0u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v54)) > _g4_s1 ? (0u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v55)) > _g4_s2 ? (0u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v56)) > _g4_s3 ? (0u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v57)) > _g4_s4 ? (16u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v58)) > _g4_s5 ? (16u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v59)) > _g4_s6 ? (16u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v60)) > _g4_s7 ? (16u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v61)) > _g4_s8 ? (20u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v62)) > _g4_s9 ? (28u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v63)) > _g4_s10 ? (32u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v64)) > _g4_s11 ? (36u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v65)) > _g4_s12 ? (40u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v66)) > _g4_s13 ? (40u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v67)) > _g4_s14 ? (40u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v68)) > _g4_s15 ? (44u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v69)) > _g4_s16 ? (44u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v70)) > _g4_s17 ? (48u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v71)) > _g4_s18 ? (48u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v72)) > _g4_s19 ? (48u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v73)) > _g4_s20 ? (48u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v74)) > _g4_s21 ? (52u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v75)) > _g4_s22 ? (52u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v76)) > _g4_s23 ? (52u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v77)) > _g4_s24 ? (56u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v78)) > _g4_s25 ? (56u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v79)) > _g4_s26 ? (56u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v80)) > _g4_s27 ? (56u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v81)) > _g4_s28 ? (60u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v82)) > _g4_s29 ? (60u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v83)) > _g4_s30 ? (60u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (60u + sizeof(_g4_t_v84)) > _g4_s31 ? (60u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (60u + sizeof(_g4_t_v85)) > _g4_s32 ? (60u + sizeof(_g4_t_v85)) : _g4_s32,
    _g4_s34 = (64u + sizeof(_g4_t_v86)) > _g4_s33 ? (64u + sizeof(_g4_t_v86)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v87)) > _g4_s34 ? (76u + sizeof(_g4_t_v87)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 52u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 52u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 56u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 56u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 56u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 60u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 60u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 60u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 60u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 64u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 76u);

  v3 = a2;
  v4 = (char **)a1[1];
  if ( v4 != (char **)a1[2] )
  {
    v5 = nullptr;
    if ( v4 != nullptr )
    {
      g4_std::vector_streaming_SGeometricObje_8f68d5::Construct(
        (int)(uintptr_t)(a1),
        (int)(uintptr_t)(a2),
        (std::vector<glitch::streaming::SGeometricObject::Self> *)a1[1],
        (const std::vector<glitch::streaming::SGeometricObject::Self> *)(v4 - 6));
      g4_std::vector_streaming_SGeometricObje_8f68d5::Construct(
        v7,
        v6,
        (std::vector<glitch::streaming::SGeometricObject::Self> *)(v4 + 3),
        (const std::vector<glitch::streaming::SGeometricObject::Self> *)(v4 - 3));
      v3 = (std::vector<glitch::streaming::SGeometricObject::Self> *)a1;
      v5 = (char **)a1[1];
    }
    a1[1] = (int)(uintptr_t)(v5 + 6);
    g4_std::vector_streaming_SGeometricObje_8f68d5::Construct(
      (int)(uintptr_t)(a1),
      (int)(uintptr_t)(v3),
      (std::vector<glitch::streaming::SGeometricObject::Self> *)v86,
      a3);
    g4_std::vector_streaming_SGeometricObje_8f68d5::Construct(
      v8,
      (int)(uintptr_t)(v87),
      (std::vector<glitch::streaming::SGeometricObject::Self> *)v87,
      (std::vector<glitch::streaming::SGeometricObject::Self> *)((char *)a3 + 12));
    v9 = a1[1] - 48;
    v10 = -1431655765 * ((v9 - (int)(uintptr_t)(a2)) >> 3);
    if ( v10 > 0 )
    {
      while ( 1 )
      {
        g4_std::vector_streaming_SGeometricObje_8f68d5::opAssign(
          (std::vector<glitch::streaming::SGeometricObject::Self> *)v9,
          (const std::vector<glitch::streaming::SGeometricObject::Self> *)(v9 - 24));
        g4_std::vector_streaming_SGeometricObje_8f68d5::opAssign(
          (std::vector<glitch::streaming::SGeometricObject::Self> *)(v9 + 12),
          (const std::vector<glitch::streaming::SGeometricObject::Self> *)(v9 - 12));
        if ( --v10 == 0 )
          break;
        v9 -= 24;
      }
    }
    g4_std::vector_streaming_SGeometricObje_8f68d5::opAssign(
      a2,
      (const std::vector<glitch::streaming::SGeometricObject::Self> *)v86);
    g4_std::vector_streaming_SGeometricObje_8f68d5::opAssign(
      (std::vector<glitch::streaming::SGeometricObject::Self> *)((char *)a2 + 12),
      (const std::vector<glitch::streaming::SGeometricObject::Self> *)v87);
    v11 = (glitch::streaming::SGeometricObject::Self *)v87[1];
    v12 = (glitch::streaming::SGeometricObject::Self *)v87[0];
    if ( v87[1] != v87[0] )
    {
      do
      {
        v53 = v12;
        v12 = (glitch::streaming::SGeometricObject::Self *)((char *)v12 + 48);
        glitch::streaming::SGeometricObject::Destroy(v53);
      }
      while ( v11 != v12 );
      v12 = (glitch::streaming::SGeometricObject::Self *)v87[0];
    }
    if ( v12 != nullptr )
      opDelete(v12);
    v13 = (glitch::streaming::SGeometricObject::Self *)v86[1];
    v14 = (glitch::streaming::SGeometricObject::Self *)v86[0];
    if ( v86[1] != v86[0] )
    {
      do
      {
        v54 = v14;
        v14 = (glitch::streaming::SGeometricObject::Self *)((char *)v14 + 48);
        glitch::streaming::SGeometricObject::Destroy(v54);
      }
      while ( v13 != v14 );
      v14 = (glitch::streaming::SGeometricObject::Self *)v86[0];
    }
    if ( v14 != nullptr )
      opDelete(v14);
    return;
  }
  v15 = (std::vector<glitch::streaming::SGeometricObject::Self> *)*a1;
  v16 = -1431655765 * (((int)(uintptr_t)(v4) - *a1) >> 3);
  if ( v16 == 0 )
  {
    v17 = 1;
    v20 = -1431655765 * ((a2 - v15) >> 3);
LABEL_92:
    v61 = v17;
    v19 = 24 * v17;
    goto LABEL_22;
  }
  v17 = 2 * v16;
  if ( v16 <= 2 * v16 && v17 <= 0xAAAAAAA )
  {
    v20 = -1431655765 * ((a2 - v15) >> 3);
    if ( v17 == 0 )
    {
      v63 = 0;
      v61 = 0;
      v21 = 0;
      goto LABEL_23;
    }
    goto LABEL_92;
  }
  v61 = 178956970;
  v18 = a2 - v15;
  v19 = 0xFFFFFFF0;
  v20 = -1431655765 * (v18 >> 3);
LABEL_22:
  v63 = sub_4EBDC0(v19);
  v21 = v63;
LABEL_23:
  v22 = v21 + 24 * v20;
  if ( v22 != 0 )
  {
    g4_std::vector_streaming_SGeometricObje_8f68d5::Construct(
      v21,
      v17,
      (std::vector<glitch::streaming::SGeometricObject::Self> *)v22,
      a3);
    g4_std::vector_streaming_SGeometricObje_8f68d5::Construct(
      v24,
      v23,
      (std::vector<glitch::streaming::SGeometricObject::Self> *)(v22 + 12),
      (std::vector<glitch::streaming::SGeometricObject::Self> *)((char *)a3 + 12));
  }
  v25 = (const glitch::streaming::SGeometricObject::Self **)*a1;
  if ( (std::vector<glitch::streaming::SGeometricObject::Self> *)*a1 == a2 )
  {
    v26 = (int *)v63;
  }
  else
  {
    v26 = (int *)v63;
    v27 = (uint32_t *)(v63 + 12);
    v77 = (int *)(v63 + 12);
    v74 = (uint32_t *)(v63 + 12);
    do
    {
      if ( v26 != nullptr )
      {
        v28 = (v25[1] - *v25) >> 4;
        *v26 = 0;
        v26[1] = 0;
        v26[2] = 0;
        if ( -1431655765 * v28 != 0 )
        {
          if ( (unsigned int)(-1431655765 * v28) > 0x5555555 )
            goto LABEL_102;
          v57 = 16 * v28;
          v29 = opNew(16 * v28);
          v30 = v57;
        }
        else
        {
          v30 = 0;
          v29 = 0;
        }
        *v26 = v29;
        v26[1] = v29;
        v26[2] = v29 + v30;
        v81 = v25[1];
        if ( v81 != *v25 )
        {
          v65 = v25;
          v70 = v26;
          v31 = *v25;
          v32 = (glitch::streaming::SGeometricObject::Self *)v29;
          do
          {
            if ( v32 != nullptr )
              glitch::streaming::SGeometricObject::Construct(v32, v31);
            v32 = (glitch::streaming::SGeometricObject::Self *)((char *)v32 + 48);
            v31 = (const glitch::streaming::SGeometricObject::Self *)((char *)v31 + 48);
          }
          while ( v81 != v31 );
          v29 = (int)(uintptr_t)(v32);
          v25 = v65;
          v26 = v70;
        }
        v26[1] = v29;
        v27 = v74;
        v28 = (v25[4] - v25[3]) >> 4;
        *v74 = 0;
        v74[1] = 0;
        v74[2] = 0;
        if ( -1431655765 * v28 != 0 )
        {
          if ( (unsigned int)(-1431655765 * v28) > 0x5555555 )
LABEL_102:
            sub_18FFEE0(v27, v28);
          v58 = 16 * v28;
          v33 = opNew(16 * v28);
          v34 = v58;
        }
        else
        {
          v34 = 0;
          v33 = 0;
        }
        *v77 = v33;
        v77[1] = v33;
        v77[2] = v33 + v34;
        v82 = v25[4];
        if ( v82 != v25[3] )
        {
          v66 = v25;
          v71 = v26;
          v35 = v25[3];
          v36 = (glitch::streaming::SGeometricObject::Self *)v33;
          do
          {
            if ( v36 != nullptr )
              glitch::streaming::SGeometricObject::Construct(v36, v35);
            v36 = (glitch::streaming::SGeometricObject::Self *)((char *)v36 + 48);
            v35 = (const glitch::streaming::SGeometricObject::Self *)((char *)v35 + 48);
          }
          while ( v82 != v35 );
          v33 = (int)(uintptr_t)(v36);
          v25 = v66;
          v26 = v71;
        }
        v27 = (uint32_t *)(v63 + 12);
        v26[4] = v33;
      }
      v25 += 6;
      v26 += 6;
      v77 += 6;
      v74 += 6;
    }
    while ( v25 != (const glitch::streaming::SGeometricObject::Self **)a2 );
  }
  v64 = (uint32_t *)(v26 + 6);
  v67 = (std::vector<glitch::streaming::SGeometricObject::Self> *)a1[1];
  if ( v67 == a2 )
  {
    v37 = v26 + 6;
  }
  else
  {
    v27 = (uint32_t *)(v26 + 9);
    v62 = v26;
    v78 = v26 + 9;
    v75 = (uint32_t *)(v26 + 9);
    v37 = v26 + 6;
    v38 = a2;
    do
    {
      if ( v37 != nullptr )
      {
        v28 = (*((uint32_t *)v38 + 1) - *(uint32_t *)v38) >> 4;
        *v37 = 0;
        v37[1] = 0;
        v37[2] = 0;
        if ( -1431655765 * v28 != 0 )
        {
          if ( (unsigned int)(-1431655765 * v28) > 0x5555555 )
            goto LABEL_102;
          v59 = 16 * v28;
          v39 = opNew(16 * v28);
          v40 = v59;
        }
        else
        {
          v40 = 0;
          v39 = 0;
        }
        *v37 = v39;
        v37[1] = v39;
        v37[2] = v39 + v40;
        v83 = *((const glitch::streaming::SGeometricObject::Self **)v38 + 1);
        if ( v83 != *(const glitch::streaming::SGeometricObject::Self **)v38 )
        {
          v68 = v37;
          v72 = v38;
          v41 = *(const glitch::streaming::SGeometricObject::Self **)v38;
          v42 = (glitch::streaming::SGeometricObject::Self *)v39;
          do
          {
            if ( v42 != nullptr )
              glitch::streaming::SGeometricObject::Construct(v42, v41);
            v42 = (glitch::streaming::SGeometricObject::Self *)((char *)v42 + 48);
            v41 = (const glitch::streaming::SGeometricObject::Self *)((char *)v41 + 48);
          }
          while ( v83 != v41 );
          v39 = (int)(uintptr_t)(v42);
          v37 = v68;
          v38 = v72;
        }
        v37[1] = v39;
        v27 = v75;
        v28 = (*((uint32_t *)v38 + 4) - *((uint32_t *)v38 + 3)) >> 4;
        *v75 = 0;
        v75[1] = 0;
        v75[2] = 0;
        if ( -1431655765 * v28 != 0 )
        {
          if ( (unsigned int)(-1431655765 * v28) > 0x5555555 )
            goto LABEL_102;
          v60 = 16 * v28;
          v43 = opNew(16 * v28);
          v44 = v60;
        }
        else
        {
          v44 = 0;
          v43 = 0;
        }
        *v78 = v43;
        v78[1] = v43;
        v78[2] = v43 + v44;
        v84 = *((const glitch::streaming::SGeometricObject::Self **)v38 + 4);
        if ( v84 != *((const glitch::streaming::SGeometricObject::Self **)v38 + 3) )
        {
          v69 = v37;
          v73 = v38;
          v45 = *((const glitch::streaming::SGeometricObject::Self **)v38 + 3);
          v46 = (glitch::streaming::SGeometricObject::Self *)v43;
          do
          {
            if ( v46 != nullptr )
              glitch::streaming::SGeometricObject::Construct(v46, v45);
            v46 = (glitch::streaming::SGeometricObject::Self *)((char *)v46 + 48);
            v45 = (const glitch::streaming::SGeometricObject::Self *)((char *)v45 + 48);
          }
          while ( v84 != v45 );
          v43 = (int)(uintptr_t)(v46);
          v37 = v69;
          v38 = v73;
        }
        v27 = v64;
        *(uint32_t *)((char *)v64  + ((uintptr_t)((char *)v37) - (uintptr_t)(char *)(v62)) - 8) = v43;
      }
      v38 = (std::vector<glitch::streaming::SGeometricObject::Self> *)((char *)v38 + 24);
      v37 += 6;
      v78 += 6;
      v75 += 6;
    }
    while ( v67 != v38 );
    v67 = (std::vector<glitch::streaming::SGeometricObject::Self> *)a1[1];
  }
  v47 = *a1;
  if ( (std::vector<glitch::streaming::SGeometricObject::Self> *)*a1 != v67 )
  {
    v76 = v37;
    v85 = (void **)(v47 + 16);
    v48 = (void **)*a1;
    do
    {
      v49 = (glitch::streaming::SGeometricObject::Self *)*(v85 - 1);
      if ( *v85 != v49 )
      {
        v79 = v48;
        v50 = (glitch::streaming::SGeometricObject::Self *)*v85;
        do
        {
          v55 = v49;
          v49 = (glitch::streaming::SGeometricObject::Self *)((char *)v49 + 48);
          glitch::streaming::SGeometricObject::Destroy(v55);
        }
        while ( v50 != v49 );
        v48 = v79;
        v49 = (glitch::streaming::SGeometricObject::Self *)v79[3];
      }
      if ( v49 != nullptr )
        opDelete(v49);
      v51 = (glitch::streaming::SGeometricObject::Self *)*v48;
      if ( v48[1] != *v48 )
      {
        v80 = v48;
        v52 = (glitch::streaming::SGeometricObject::Self *)v48[1];
        do
        {
          v56 = v51;
          v51 = (glitch::streaming::SGeometricObject::Self *)((char *)v51 + 48);
          glitch::streaming::SGeometricObject::Destroy(v56);
        }
        while ( v52 != v51 );
        v48 = v80;
        v51 = (glitch::streaming::SGeometricObject::Self *)*v80;
      }
      if ( v51 != nullptr )
        opDelete(v51);
      v48 += 6;
      v85 += 6;
    }
    while ( v67 != (std::vector<glitch::streaming::SGeometricObject::Self> *)v48 );
    v37 = v76;
    v47 = *a1;
  }
  if ( v47 != 0 )
    gll_operator_delete_arr(v47);
  *a1 = v63;
  a1[1] = (int)(uintptr_t)(v37);
  a1[2] = v63 + 24 * v61;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_streaming_SGeometricObje_8f68d5::M_fill_insert  (binary VA: 0xcf6a10)
// Original: std::vector<glitch::streaming::SGeometricObject>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_streaming_SGeometricObje_8f68d5::M_fill_insert(uint32_t *a1, glitch::streaming::SGeometricObject::Self *a2, unsigned int a3, const glitch::streaming::SGeometricObject::Self *a4)
{
  uint32_t *v4;
  glitch::streaming::SGeometricObject::Self *v5;
  int v6;
  glitch::streaming::SGeometricObject::Self *v7;
  unsigned int v8;
  unsigned int v9;
  bool v10;
  unsigned int v11;
  int v12;
  size_t v13;
  int v14;
  unsigned int v15;
  glitch::streaming::SGeometricObject::Self *v16;
  int v17;
  const glitch::streaming::SGeometricObject::Self *v18;
  glitch::streaming::SGeometricObject::Self *v19;
  glitch::streaming::SGeometricObject::Self *v20;
  const glitch::streaming::SGeometricObject::Self *v21;
  glitch::streaming::SGeometricObject::Self *v22;
  const glitch::streaming::SGeometricObject::Self *v23;
  const glitch::streaming::SGeometricObject::Self *v24;
  glitch::streaming::SGeometricObject::Self *v25;
  glitch::streaming::SGeometricObject::Self *v26;
  const glitch::streaming::SGeometricObject::Self *v27;
  glitch::streaming::SGeometricObject::Self *v28;
  unsigned int v29;
  int v30;
  glitch::streaming::SGeometricObject::Self *v31;
  unsigned int v32;
  int v33;
  glitch::streaming::SGeometricObject::Self *v34;
  glitch::streaming::SGeometricObject::Self *v35;
  glitch::streaming::SGeometricObject::Self *v36;
  glitch::streaming::SGeometricObject::Self *v37;
  const glitch::streaming::SGeometricObject::Self *v38;
  const glitch::streaming::SGeometricObject::Self *v39;
  glitch::streaming::SGeometricObject::Self *v40;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v41;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v42;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef void **_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef size_t _g4_t_v53;
  typedef uint8_t _g4_t_v54[76];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v41)) > _g4_s0 ? (0u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v42)) > _g4_s1 ? (0u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v43)) > _g4_s2 ? (0u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v44)) > _g4_s3 ? (24u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v45)) > _g4_s4 ? (28u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v46)) > _g4_s5 ? (28u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v47)) > _g4_s6 ? (28u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v48)) > _g4_s7 ? (28u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v49)) > _g4_s8 ? (32u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v50)) > _g4_s9 ? (32u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v51)) > _g4_s10 ? (32u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v52)) > _g4_s11 ? (36u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v53)) > _g4_s12 ? (36u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v54)) > _g4_s13 ? (48u + sizeof(_g4_t_v54)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);

  v4 = a1;
  v5 = a2;
  if ( a3 == 0 )
    return;
  v6 = a1[1];
  if ( a3 > -1431655765 * ((a1[2] - v6) >> 4) )
  {
    v7 = (glitch::streaming::SGeometricObject::Self *)*a1;
    v8 = -1431655765 * ((v6 - *a1) >> 4);
    if ( a3 > 89478485 - v8 )
      sub_1900180("vector::_M_fill_insert");
    v9 = a3;
    if ( v8 >= a3 )
      v9 = v8;
    v10 = __CFADD__(v9, v8);
    v11 = v9 + v8;
    if ( v10 || v11 > 0x5555555 )
    {
      v52 = 0xFFFFFFF0;
      v12 = a2 - v7;
      v13 = 0xFFFFFFF0;
      v14 = -1431655765 * (v12 >> 4);
    }
    else
    {
      v52 = 0;
      v49 = nullptr;
      v14 = -1431655765 * ((a2 - v7) >> 4);
      if ( v11 == 0 )
      {
LABEL_9:
        v15 = a3;
        v16 = (glitch::streaming::SGeometricObject::Self *)((char *)v49 + 48 * v14);
        do
        {
          if ( v16 != nullptr )
            glitch::streaming::SGeometricObject::Construct(v16, a4);
          v16 = (glitch::streaming::SGeometricObject::Self *)((char *)v16 + 48);
          --v15;
        }
        while ( v15 != 0 );
        v17 = (int)(uintptr_t)(a1);
        v18 = a2;
        v19 = v49;
        if ( (glitch::streaming::SGeometricObject::Self *)*a1 != a2 )
        {
          v20 = v49;
          v21 = (const glitch::streaming::SGeometricObject::Self *)*a1;
          do
          {
            if ( v20 != nullptr )
              glitch::streaming::SGeometricObject::Construct(v20, v21);
            v21 = (const glitch::streaming::SGeometricObject::Self *)((char *)v21 + 48);
            v20 = (glitch::streaming::SGeometricObject::Self *)((char *)v20 + 48);
          }
          while ( a2 != v21 );
          v19 = v20;
          v18 = a2;
          v17 = (int)(uintptr_t)(a1);
        }
        v22 = (glitch::streaming::SGeometricObject::Self *)((char *)v19 + 48 * a3);
        v23 = *(const glitch::streaming::SGeometricObject::Self **)(v17 + 4);
        if ( v23 != v18 )
        {
          v45 = v17;
          v24 = *(const glitch::streaming::SGeometricObject::Self **)(v17 + 4);
          do
          {
            if ( v22 != nullptr )
              glitch::streaming::SGeometricObject::Construct(v22, v18);
            v18 = (const glitch::streaming::SGeometricObject::Self *)((char *)v18 + 48);
            v22 = (glitch::streaming::SGeometricObject::Self *)((char *)v22 + 48);
          }
          while ( v24 != v18 );
          v17 = v45;
          v23 = *(const glitch::streaming::SGeometricObject::Self **)(v45 + 4);
        }
        v25 = *(glitch::streaming::SGeometricObject::Self **)v17;
        if ( *(const glitch::streaming::SGeometricObject::Self **)v17 != v23 )
        {
          v46 = (void **)v17;
          v26 = v22;
          v27 = v23;
          do
          {
            v41 = v25;
            v25 = (glitch::streaming::SGeometricObject::Self *)((char *)v25 + 48);
            glitch::streaming::SGeometricObject::Destroy(v41);
          }
          while ( v25 != v27 );
          v22 = v26;
          v17 = (int)(uintptr_t)(v46);
          v25 = (glitch::streaming::SGeometricObject::Self *)*v46;
        }
        if ( v25 != nullptr )
          opDelete(v25);
        *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v22);
        *(uint32_t *)v17 = (uint32_t)(uintptr_t)(v49);
        *(uint32_t *)(v17 + 8) = (uint32_t)(uintptr_t)((char *)v49 + v52);
        return;
      }
      v52 = 48 * v11;
      v13 = 48 * v11;
    }
    v44 = v14;
    v49 = (glitch::streaming::SGeometricObject::Self *)opNew(v13);
    v14 = v44;
    goto LABEL_9;
  }
  glitch::streaming::SGeometricObject::Construct((glitch::streaming::SGeometricObject::Self *)v54, a4);
  v28 = (glitch::streaming::SGeometricObject::Self *)a1[1];
  v50 = -1431655765 * ((v28 - a2) >> 4);
  if ( a3 < v50 )
  {
    v48 = 48 * a3;
    v51 = (glitch::streaming::SGeometricObject::Self *)((char *)v28 - 48 * a3);
    v37 = v51;
    if ( v51 != v28 )
    {
      v38 = (const glitch::streaming::SGeometricObject::Self *)a1[1];
      v39 = (glitch::streaming::SGeometricObject::Self *)((char *)v28 - 48 * a3);
      do
      {
        if ( v28 != nullptr )
          glitch::streaming::SGeometricObject::Construct(v28, v39);
        v39 = (const glitch::streaming::SGeometricObject::Self *)((char *)v39 + 48);
        v28 = (glitch::streaming::SGeometricObject::Self *)((char *)v28 + 48);
      }
      while ( v38 != v39 );
      v28 = (glitch::streaming::SGeometricObject::Self *)(v38);
      v4 = a1;
      v5 = a2;
      v37 = (glitch::streaming::SGeometricObject::Self *)a1[1];
    }
    v4[1] = (uint32_t)(uintptr_t)((char *)v37 + v48);
    g4_std::copy_backward_streaming_SGeometricObje_cf1e52(v5, v51, v28);
    v40 = (glitch::streaming::SGeometricObject::Self *)((char *)v5 + v48);
    while ( v40 != v5 )
    {
      v43 = v5;
      v5 = (glitch::streaming::SGeometricObject::Self *)((char *)v5 + 48);
      glitch::streaming::SGeometricObject::opAssign(v43, (const glitch::streaming::SGeometricObject::Self *)v54);
    }
  }
  else
  {
    v29 = a3 - v50;
    v30 = a1[1];
    if ( a3 != v50 )
    {
      v31 = (glitch::streaming::SGeometricObject::Self *)a1[1];
      v32 = a3 - v50;
      do
      {
        if ( v28 != nullptr )
          glitch::streaming::SGeometricObject::Construct(v28, (const glitch::streaming::SGeometricObject::Self *)v54);
        v28 = (glitch::streaming::SGeometricObject::Self *)((char *)v28 + 48);
        --v32;
      }
      while ( v32 != 0 );
      v28 = v31;
      v4 = a1;
      v5 = a2;
      v29 = a3 - v50;
      v30 = a1[1];
    }
    v33 = v30 + 48 * v29;
    v4[1] = v33;
    if ( v28 == v5 )
    {
      v4[1] = 48 * v50 + v33;
    }
    else
    {
      v47 = v4;
      v53 = (size_t)v5;
      v34 = v28;
      v35 = (glitch::streaming::SGeometricObject::Self *)(v30 + 48 * v29);
      do
      {
        if ( v35 != nullptr )
          glitch::streaming::SGeometricObject::Construct(v35, v5);
        v5 = (glitch::streaming::SGeometricObject::Self *)((char *)v5 + 48);
        v35 = (glitch::streaming::SGeometricObject::Self *)((char *)v35 + 48);
      }
      while ( v34 != v5 );
      v36 = (glitch::streaming::SGeometricObject::Self *)v53;
      v47[1] += 48 * v50;
      do
      {
        v42 = v36;
        v36 = (glitch::streaming::SGeometricObject::Self *)((char *)v36 + 48);
        glitch::streaming::SGeometricObject::opAssign(v42, (const glitch::streaming::SGeometricObject::Self *)v54);
      }
      while ( v34 != v36 );
    }
  }
  glitch::streaming::SGeometricObject::Destroy((glitch::streaming::SGeometricObject::Self *)v54);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_streaming_SGeometricObje_8f68d5::M_check_len  (binary VA: 0xcf7120)
// Original: std::vector<glitch::streaming::SGeometricObject>::_M_check_len
// ----------------------------------------------------------------------------
int g4_std::vector_streaming_SGeometricObje_8f68d5::M_check_len(std::vector<glitch::streaming::SGeometricObject::Self> *self, unsigned int a2, char *a3)
{
  int v3;
  unsigned int v4;
  int result;
  bool v6;
  unsigned int v7;

  v3 = a2;
  v4 = -1431655765 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 4);
  if ( 89478485 - v4 < a2 )
    sub_1900180(a3);
  result = 89478485;
  if ( v4 >= a2 )
    v3 = -1431655765 * ((*((uint32_t *)self + 1) - *(uint32_t *)self) >> 4);
  v6 = __CFADD__(v4, v3);
  v7 = v4 + v3;
  if ( !v6 && v7 <= 0x5555555 )
    return v7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_ps_CParticleSyst_5b2ffd::Construct  (binary VA: 0xd38af0)
// Original: std::vector<glitch::collada::ps::CParticleSystemStripBaker::SSnapshot>::vector
// ----------------------------------------------------------------------------
int g4_std::vector_collada_ps_CParticleSyst_5b2ffd::Construct(int a1, int a2, std::vector<glitch::collada::ps::CParticleSystemStripBaker::SSnapshot> *self, const std::vector<glitch::collada::ps::CParticleSystemStripBaker::SSnapshot> *a4)
{
  int v4;
  size_t v5;
  int result;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  v4 = (*((uint32_t *)a4 + 1) - *(uint32_t *)a4) >> 2;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( 954437177 * v4 != 0 )
  {
    if ( (unsigned int)(954437177 * v4) > 0x71C71C7 )
      sub_18FFEE0(a1, a2);
    v5 = 4 * v4;
    result = opNew(v5);
  }
  else
  {
    v5 = 0;
    result = 0;
  }
  *(uint32_t *)self = result;
  *((uint32_t *)self + 1) = result;
  *((uint32_t *)self + 2) = result + v5;
  v7 = *((uint32_t **)a4 + 1);
  v8 = *(uint32_t *)a4;
  if ( v7 != *(uint32_t **)a4 )
  {
    v9 = *(uint32_t **)a4;
    v10 = (uint32_t *)result;
    do
    {
      if ( v10 != nullptr )
      {
        *v10 = *v9;
        v10[1] = v9[1];
        v10[2] = v9[2];
        v10[3] = v9[3];
        v10[4] = v9[4];
        v10[5] = v9[5];
        v10[6] = v9[6];
        v10[7] = v9[7];
        v10[8] = v9[8];
      }
      v9 += 9;
      v10 += 9;
    }
    while ( v7 != v9 );
    result += 4 * (((unsigned int)(uintptr_t)(v7) - v8 - 36) >> 2) + 36;
  }
  *((uint32_t *)self + 1) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_CMesh_SBuffer_SA_fbf61e::M_insert_aux  (binary VA: 0xd38be0)
// Original: std::vector<glitch::collada::CMesh::SBuffer,glitch::core::SAllocator<glitch::collada::CMesh::SBuffer,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_collada_CMesh_SBuffer_SA_fbf61e::M_insert_aux(int *a1, int a2, volatile int32_t **a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  int v10;
  glitch::video::CMaterialVertexAttributeMap::Self **v11;
  glitch::video::CMaterialVertexAttributeMap::Self *v12;
  glitch::video::CMaterialVertexAttributeMap::Self *v13;
  char *v14;
  int v15;
  volatile int32_t *v16;
  volatile int32_t *v17;
  glitch::video::CMaterial::Self *v18;
  bool v19;
  volatile int32_t *v20;
  glitch::video::CMaterial::Self *v21;
  glitch::video::CMaterialVertexAttributeMap::Self *v22;
  int result;
  uint32_t *v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  volatile int32_t **v29;
  volatile int32_t *v30;
  volatile int32_t *v31;
  volatile int32_t *v32;
  int *v33;
  int v34;
  int *v35;
  int *v36;
  int v37;
  volatile int32_t *v38;
  char *v39;
  char *v40;
  volatile int32_t *v41;
  volatile int32_t **v42;
  volatile int32_t **v43;
  volatile int32_t *v44;
  volatile int32_t *v45;
  volatile int32_t *v46;
  int v47;
  volatile int32_t **v48;
  glitch::video::CMaterialVertexAttributeMap::Self *v49;
  glitch::video::CMaterial::Self *v50;
  unsigned int v51;
  volatile int32_t *v52;
  int v53;
  int v54;
  volatile int32_t **v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  size_t v63;
  int v64;
  int v65;
  volatile int32_t **v66;
  glitch::video::CMaterial::Self *v67;
  glitch::video::CMaterialVertexAttributeMap::Self *v68;
  volatile int32_t *v69;

  v3 = (uint32_t *)a1[1];
  if ( v3 != (uint32_t *)a1[2] )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      v5 = *(v3 - 3);
      *v3 = v5;
      if ( v5 != 0 )
        sub_8B1B00((volatile int32_t *)(v5 + 4));
      v6 = (volatile int32_t *)*(v3 - 2);
      v3[1] = (uint32_t)(uintptr_t)(v6);
      if ( v6 != nullptr )
        sub_8B1B00(v6);
      v7 = (volatile int32_t *)*(v3 - 1);
      v3[2] = (uint32_t)(uintptr_t)(v7);
      if ( v7 != nullptr )
        sub_8B1B00(v7);
      v4 = a1[1];
    }
    a1[1] = v4 + 12;
    v69 = *a3;
    if ( *a3 != nullptr )
      sub_8B1B00(*a3 + 1);
    v8 = a3[1];
    v67 = (glitch::video::CMaterial::Self *)v8;
    if ( v8 != nullptr )
      sub_8B1B00(v8);
    v9 = a3[2];
    v68 = (glitch::video::CMaterialVertexAttributeMap::Self *)v9;
    if ( v9 != nullptr )
      sub_8B1B00(v9);
    v10 = a1[1];
    v53 = -1431655765 * ((v10 - 24 - a2) >> 2);
    if ( v53 > 0 )
    {
      v11 = (glitch::video::CMaterialVertexAttributeMap::Self **)(v10 - 16);
      v59 = v10 - 36;
      v54 = v10 - 24;
      v63 = v10 - 16;
      v61 = v10 - 32;
      v56 = v10 - 20;
      v65 = v10 - 28;
      do
      {
        v14 = (char *)v11 - v63;
        v15 = *(int *)((char *)v11 + v59 - v63);
        if ( v15 != 0 )
          sub_8B1B00((volatile int32_t *)(v15 + 4));
        v16 = *(volatile int32_t **)&v14[v54];
        *(uint32_t *)&v14[v54] = v15;
        if ( v16 != nullptr )
          sub_5459C0(v16);
        v17 = *(volatile int32_t **)&v14[v61];
        if ( v17 != nullptr )
        {
          v52 = *(volatile int32_t **)&v14[v61];
          sub_8B1B00(v52);
          v17 = v52;
        }
        v18 = *(glitch::video::CMaterial::Self **)&v14[v56];
        *(uint32_t *)&v14[v56] = (uint32_t)(uintptr_t)(v17);
        if ( v18 != nullptr )
        {
          v19 = *(uint32_t *)v18 == 2;
          _mm_mfence();
          if ( v19 )
            glitch::video::CMaterial::removeFromRootSceneNode(v18);
          if ( __sync_fetch_and_add((volatile int32_t *)v18, 0xFFFFFFFF) == 1 )
          {
            glitch::video::CMaterial::Destroy(v18);
            gll_operator_delete_arr((int)(uintptr_t)(v18));
          }
        }
        v12 = *(glitch::video::CMaterialVertexAttributeMap::Self **)&v14[v65];
        if ( v12 != nullptr )
          sub_8B1B00(*(volatile int32_t **)&v14[v65]);
        v13 = *v11;
        *v11 = v12;
        if ( v13 != nullptr && __sync_fetch_and_add((volatile int32_t *)v13, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterialVertexAttributeMap::Destroy(v13);
          gll_operator_delete_arr((int)(uintptr_t)(v13));
        }
        v11 -= 3;
        --v53;
      }
      while ( v53 != 0 );
    }
    if ( v69 != nullptr )
      sub_8B1B00(v69 + 1);
    v20 = *(volatile int32_t **)a2;
    *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v69);
    if ( v20 != nullptr )
      sub_5459C0(v20);
    if ( v67 != nullptr )
      sub_8B1B00((volatile int32_t *)v67);
    v21 = *(glitch::video::CMaterial::Self **)(a2 + 4);
    *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v67);
    if ( v21 != nullptr )
    {
      v19 = *(uint32_t *)v21 == 2;
      _mm_mfence();
      if ( v19 )
        glitch::video::CMaterial::removeFromRootSceneNode(v21);
      if ( __sync_fetch_and_add((volatile int32_t *)v21, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v21);
        gll_operator_delete_arr((int)(uintptr_t)(v21));
      }
    }
    if ( v68 != nullptr )
      sub_8B1B00((volatile int32_t *)v68);
    v22 = *(glitch::video::CMaterialVertexAttributeMap::Self **)(a2 + 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v68);
    if ( v22 != nullptr && __sync_fetch_and_add((volatile int32_t *)v22, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterialVertexAttributeMap::Destroy(v22);
      gll_operator_delete_arr((int)(uintptr_t)(v22));
    }
    if ( v68 != nullptr && __sync_fetch_and_add((volatile int32_t *)v68, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterialVertexAttributeMap::Destroy(v68);
      gll_operator_delete_arr((int)(uintptr_t)(v68));
    }
    if ( v67 != nullptr )
    {
      v19 = *(uint32_t *)v67 == 2;
      _mm_mfence();
      if ( v19 )
        glitch::video::CMaterial::removeFromRootSceneNode(v67);
      if ( __sync_fetch_and_add((volatile int32_t *)v67, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v67);
        gll_operator_delete_arr((int)(uintptr_t)(v67));
      }
    }
    result = (int)(uintptr_t)(v69);
    if ( v69 != nullptr )
      return sub_5459C0(v69);
    return result;
  }
  v24 = (uint32_t *)*a1;
  v25 = -1431655765 * (((int)(uintptr_t)(v3) - *a1) >> 2);
  if ( v25 != 0 )
  {
    v51 = 2 * v25;
    if ( v25 > 2 * v25 || v51 > 0x15555555 )
    {
      v64 = -4;
      v26 = -1431655765 * ((a2 - (int)(uintptr_t)(v24)) >> 2);
    }
    else
    {
      v64 = 24 * v25;
      v26 = -1431655765 * ((a2 - (int)(uintptr_t)(v24)) >> 2);
      if ( v51 == 0 )
      {
        v57 = 0;
        v27 = 12;
        v28 = 0;
        goto LABEL_65;
      }
    }
  }
  else
  {
    v64 = 12;
    v26 = -1431655765 * ((a2 - (int)(uintptr_t)(v24)) >> 2);
  }
  v57 = sub_4EBDC0(v64);
  v27 = v57 + 12;
  v28 = v57;
LABEL_65:
  v29 = (volatile int32_t **)(v28 + 12 * v26);
  if ( v29 != nullptr )
  {
    v30 = *a3;
    v19 = *a3 == nullptr;
    *v29 = *a3;
    if ( !v19 )
      sub_8B1B00(v30 + 1);
    v31 = a3[1];
    v29[1] = v31;
    if ( v31 != nullptr )
      sub_8B1B00(v31);
    v32 = a3[2];
    v29[2] = v32;
    if ( v32 != nullptr )
      sub_8B1B00(v32);
  }
  v33 = a1;
  v34 = *a1;
  if ( *a1 != a2 )
  {
    v35 = (int *)*a1;
    v36 = (int *)v57;
    do
    {
      if ( v36 != nullptr )
      {
        v37 = *v35;
        v19 = *v35 == 0;
        *v36 = *v35;
        if ( !v19 )
          sub_8B1B00((volatile int32_t *)(v37 + 4));
        v38 = (volatile int32_t *)v35[1];
        v39 = (char *)v35 - v34;
        v40 = (char *)v36 - v57;
        v36[1] = (int)(uintptr_t)(v38);
        if ( v38 != nullptr )
        {
          sub_8B1B00(v38);
          v39 = (char *)v35 - v34;
          v40 = (char *)v36 - v57;
        }
        v41 = *(volatile int32_t **)&v39[v34 + 8];
        *(uint32_t *)&v40[v57 + 8] = (uint32_t)(uintptr_t)(v41);
        if ( v41 != nullptr )
          sub_8B1B00(v41);
      }
      v35 += 3;
      v36 += 3;
    }
    while ( v35 != (int *)a2 );
    v27 = (int)(uintptr_t)(v36 + 3);
    v33 = a1;
  }
  v55 = (volatile int32_t **)v33[1];
  v42 = (volatile int32_t **)v27;
  if ( v55 != (volatile int32_t **)a2 )
  {
    v43 = (volatile int32_t **)a2;
    do
    {
      if ( v42 != nullptr )
      {
        v44 = *v43;
        v19 = *v43 == nullptr;
        *v42 = *v43;
        if ( !v19 )
          sub_8B1B00(v44 + 1);
        v45 = v43[1];
        v42[1] = v45;
        if ( v45 != nullptr )
          sub_8B1B00(v45);
        v46 = v43[2];
        v42[2] = v46;
        if ( v46 != nullptr )
          sub_8B1B00(v46);
      }
      v43 += 3;
      v42 += 3;
    }
    while ( v55 != v43 );
    v55 = (volatile int32_t **)a1[1];
  }
  v47 = *a1;
  v58 = *a1;
  if ( (volatile int32_t **)*a1 != v55 )
  {
    v48 = (volatile int32_t **)*a1;
    v62 = v47 + 8;
    v60 = v47 + 4;
    v66 = v42;
    do
    {
      v49 = *(glitch::video::CMaterialVertexAttributeMap::Self **)((char *)v48 + v62 - v58);
      if ( v49 != nullptr && __sync_fetch_and_add((volatile int32_t *)v49, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterialVertexAttributeMap::Destroy(v49);
        gll_operator_delete_arr((int)(uintptr_t)(v49));
      }
      v50 = *(glitch::video::CMaterial::Self **)((char *)v48 + v60 - v58);
      if ( v50 != nullptr )
      {
        v19 = *(uint32_t *)v50 == 2;
        _mm_mfence();
        if ( v19 )
          glitch::video::CMaterial::removeFromRootSceneNode(v50);
        if ( __sync_fetch_and_add((volatile int32_t *)v50, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterial::Destroy(v50);
          gll_operator_delete_arr((int)(uintptr_t)(v50));
        }
      }
      if ( *v48 != nullptr )
        sub_5459C0(*v48);
      v48 += 3;
    }
    while ( v55 != v48 );
    v42 = v66;
    v58 = *a1;
  }
  if ( v58 != 0 )
    gll_operator_delete_arr(v58);
  *a1 = v57;
  a1[1] = (int)(uintptr_t)(v42);
  a1[2] = v64 + v57;
  return v64 + v57;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_ps_SParticle_SAl_9048bd::M_fill_insert  (binary VA: 0xd3b2b0)
// Original: std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_collada_ps_SParticle_SAl_9048bd::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int *v11;
  unsigned int i;
  uint32_t *v13;
  char *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  char *v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int *v24;
  unsigned int j;
  __m128i *v26;
  __m128i v27;
  unsigned int v28;
  size_t v29;
  unsigned int v30;
  unsigned int *v31;
  unsigned int *v32;
  unsigned int *v33;
  unsigned int v34;
  bool v35;
  unsigned int *v36;
  unsigned int v37;
  __m128i v38;
  unsigned int v39;
  __m128i *v40;
  unsigned int *v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  uint32_t *v46;
  unsigned int *v47;
  uint8_t *v48;
  int v49;
  unsigned int v50;
  int v51;
  char *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 > (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v48 = (uint8_t *)*a1;
    v5 = ((int)(uintptr_t)(v4) - *a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = v5;
    v7 = __CFADD__(v6, v5);
    v8 = v6 + v5;
    if ( v7 || v8 > 0x3FFFFFFF )
    {
      v44 = -4;
      v29 = 0xFFFFFFFC;
      v9 = (src - (char *)(v48)) >> 2;
    }
    else
    {
      v9 = (src - (char *)(v48)) >> 2;
      if ( v8 == 0 )
      {
        v49 = 0;
        v44 = 0;
        v10 = 0;
        goto LABEL_10;
      }
      v44 = 4 * v8;
      v29 = 4 * v8;
    }
    v43 = v9;
    v49 = sub_4EBDC0(v29);
    v9 = v43;
    v10 = v49;
LABEL_10:
    v11 = (unsigned int *)(v10 + 4 * v9);
    for ( i = a3; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v13 = (uint32_t *)v49;
    v45 = *a1;
    if ( (char *)*a1 != src )
    {
      v14 = (char *)*a1;
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v14;
        v14 += 4;
        ++v13;
      }
      while ( v14 != src );
      v13 = (uint32_t *)(v49 + 4 * ((unsigned int)(uintptr_t)(&src[-v45 - 4]) >> 2) + 4);
    }
    v46 = &v13[a3];
    v15 = (char *)a1[1];
    if ( v15 != src )
    {
      v16 = src;
      v17 = &v13[a3];
      do
      {
        if ( v17 != nullptr )
          *v17 = *(uint32_t *)v16;
        v16 += 4;
        ++v17;
      }
      while ( v15 != v16 );
      v46 += ((unsigned int)(v15 - (src + 4)) >> 2) + 1;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v49;
    a1[1] = (int)(uintptr_t)(v46);
    a1[2] = v44 + v49;
    return;
  }
  v18 = *a4;
  v50 = ((char *)v4 - src) >> 2;
  if ( a3 >= v50 )
  {
    v30 = a3 - v50;
    v31 = (unsigned int *)a1[1];
    if ( a3 != v50 )
    {
      do
      {
        if ( v31 != nullptr )
          *v31 = v18;
        ++v31;
        --v30;
      }
      while ( v30 != 0 );
      v31 = (unsigned int *)a1[1];
      v30 = a3 - v50;
    }
    v32 = &v31[v30];
    a1[1] = (int)(uintptr_t)(v32);
    if ( v4 == (unsigned int *)src )
    {
      a1[1] = (int)(uintptr_t)(&v32[v50]);
    }
    else
    {
      v33 = (unsigned int *)src;
      do
      {
        if ( v32 != nullptr )
          *v32 = *v33;
        ++v33;
        ++v32;
      }
      while ( v4 != v33 );
      a1[1] += 4 * v50;
      v56 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v34 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      if ( v34 > v56 )
        v34 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v35 = v34 == 0;
      v53 = v34;
      v36 = (unsigned int *)src;
      if ( v35 )
        goto LABEL_82;
      v37 = 0;
      do
      {
        ++v37;
        *v36++ = v18;
      }
      while ( v53 > v37 );
      if ( v56 != v53 )
      {
LABEL_82:
        v57 = v56 - v53;
        if ( 4 * (v57 >> 2) == 0 )
          goto LABEL_83;
        v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v39 = 0;
        v40 = (__m128i *)&src[4 * v53];
        do
        {
          ++v39;
          *v40++ = v38;
        }
        while ( v39 < v57 >> 2 );
        v36 += 4 * (v57 >> 2);
        if ( v57 != 4 * (v57 >> 2) )
        {
LABEL_83:
          do
          {
            *v36 = v18;
            v41 = v36 + 1;
            if ( v4 == v41 )
              break;
            *v41 = v18;
            v36 = v41 + 1;
          }
          while ( v4 != v36 );
        }
      }
    }
  }
  else
  {
    v51 = 4 * a3;
    v47 = &v4[-a3];
    v19 = (unsigned int *)a1[1];
    if ( v4 != v47 )
    {
      v20 = &v4[-a3];
      do
      {
        if ( v19 != nullptr )
          *v19 = *v20;
        ++v20;
        ++v19;
      }
      while ( v4 != v20 );
      v19 = (unsigned int *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(&v19[v51 / 4u]);
    if ( ((char *)v47 - src) >> 2 != 0 )
    {
      v42 = v18;
      memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      v18 = v42;
    }
    v21 = &src[v51];
    v52 = &src[v51];
    if ( v52 != src )
    {
      v22 = ((unsigned int)(v21 - (src + 4)) >> 2) + 1;
      v23 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      v54 = v22;
      if ( v22 <= v23 )
        v23 = v22;
      v24 = (unsigned int *)src;
      if ( v23 == 0 )
        goto LABEL_84;
      for ( j = 0; j < v23; ++j )
        *v24++ = v18;
      if ( v54 != v23 )
      {
LABEL_84:
        v55 = v54 - v23;
        if ( 4 * (v55 >> 2) == 0 )
          goto LABEL_85;
        v26 = (__m128i *)&src[4 * v23];
        v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v28 = 0;
        do
        {
          ++v28;
          *v26++ = v27;
        }
        while ( v28 < v55 >> 2 );
        v24 += 4 * (v55 >> 2);
        if ( v55 != 4 * (v55 >> 2) )
        {
LABEL_85:
          do
            *v24++ = v18;
          while ( v52 != (char *)v24 );
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_modularSkinnedMe_0dc87e::M_fill_insert  (binary VA: 0xd3bc40)
// Original: std::vector<glitch::collada::modularSkinnedMesh::SModularBuffer,glitch::core::SAllocator<glitch::collada::modularSkinnedMesh::SModularBuffer,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_collada_modularSkinnedMe_0dc87e::M_fill_insert(int *a1, glitch::collada::modularSkinnedMesh::SModularBuffer *a2, unsigned int a3, glitch::collada::modularSkinnedMesh::SModularBuffer *a4)
{
  glitch::collada::modularSkinnedMesh::SModularBuffer *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  bool v9;
  unsigned int v10;
  size_t v11;
  int v12;
  uint32_t *v13;
  int v14;
  bool v15;
  int v16;
  char *v17;
  int v18;
  volatile int32_t *v19;
  int v20;
  volatile int32_t *v21;
  int v22;
  int v23;
  int v24;
  char *v25;
  char *v26;
  uint32_t *v27;
  int v28;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v29;
  int v30;
  int v31;
  char *v32;
  volatile int32_t *v33;
  int v34;
  volatile int32_t *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char *v41;
  char *v42;
  uint32_t *v43;
  int v44;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v45;
  int v46;
  int v47;
  char *v48;
  volatile int32_t *v49;
  int v50;
  volatile int32_t *v51;
  uint32_t *v52;
  int v53;
  int v54;
  int v55;
  char *v56;
  char *v57;
  uint32_t *v58;
  int v59;
  int v60;
  int *v61;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v62;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v63;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v64;
  char *v65;
  int v66;
  int v67;
  char *v68;
  int v69;
  volatile int32_t *v70;
  int v71;
  volatile int32_t *v72;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v73;
  int v74;
  int v75;
  int v76;
  char *v77;
  char *v78;
  char *v79;
  uint32_t *v80;
  int v81;
  const glitch::collada::modularSkinnedMesh::SModularBuffer *v82;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v83;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v84;
  unsigned int v85;
  char *v86;
  int v87;
  int v88;
  int v89;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v90;
  volatile int32_t *v91;
  int v92;
  volatile int32_t *v93;
  int v94;
  int v95;
  int *v96;
  int *v97;
  uint32_t *v98;
  int v99;
  int *v100;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v101;
  int *v102;
  int v103;
  int v104;
  char *v105;
  volatile int32_t *v106;
  int v107;
  volatile int32_t *v108;
  int *v109;
  int v110;
  int v111;
  int v112;
  char *v113;
  char *v114;
  uint32_t *v115;
  int v116;
  glitch::collada::modularSkinnedMesh::SModularBuffer *v117;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v118;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v119;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v127;
  typedef unsigned int _g4_t_v128;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v129;
  typedef int _g4_t_v130;
  typedef uint32_t *_g4_t_v131;
  typedef char *_g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v135;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v136;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v137;
  typedef unsigned int _g4_t_v138;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef char *_g4_t_v141;
  typedef int *_g4_t_v142;
  typedef int *_g4_t_v143;
  typedef unsigned int _g4_t_v144;
  typedef char *_g4_t_v145;
  typedef char *_g4_t_v146;
  typedef char *_g4_t_v147;
  typedef char *_g4_t_v148;
  typedef uint32_t *_g4_t_v149;
  typedef const glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v150;
  typedef uint32_t *_g4_t_v151;
  typedef int *_g4_t_v152;
  typedef uint32_t *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef uint32_t *_g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef uint32_t *_g4_t_v159;
  typedef uint32_t *_g4_t_v160;
  typedef char *_g4_t_v161;
  typedef glitch::collada::modularSkinnedMesh::SModularBuffer *_g4_t_v162;
  typedef int *_g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef char *_g4_t_v166;
  typedef int _g4_t_v167;
  typedef char *_g4_t_v168;
  typedef int *_g4_t_v169;
  typedef uint32_t _g4_t_v170[15];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v118)) > _g4_s0 ? (0u + sizeof(_g4_t_v118)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v119)) > _g4_s1 ? (0u + sizeof(_g4_t_v119)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v120)) > _g4_s2 ? (0u + sizeof(_g4_t_v120)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v121)) > _g4_s3 ? (24u + sizeof(_g4_t_v121)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v122)) > _g4_s4 ? (24u + sizeof(_g4_t_v122)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v123)) > _g4_s5 ? (24u + sizeof(_g4_t_v123)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v124)) > _g4_s6 ? (24u + sizeof(_g4_t_v124)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v125)) > _g4_s7 ? (24u + sizeof(_g4_t_v125)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v126)) > _g4_s8 ? (28u + sizeof(_g4_t_v126)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v127)) > _g4_s9 ? (40u + sizeof(_g4_t_v127)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v128)) > _g4_s10 ? (40u + sizeof(_g4_t_v128)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v129)) > _g4_s11 ? (44u + sizeof(_g4_t_v129)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v130)) > _g4_s12 ? (44u + sizeof(_g4_t_v130)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v131)) > _g4_s13 ? (44u + sizeof(_g4_t_v131)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v132)) > _g4_s14 ? (48u + sizeof(_g4_t_v132)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v133)) > _g4_s15 ? (48u + sizeof(_g4_t_v133)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v134)) > _g4_s16 ? (52u + sizeof(_g4_t_v134)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v135)) > _g4_s17 ? (52u + sizeof(_g4_t_v135)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v136)) > _g4_s18 ? (52u + sizeof(_g4_t_v136)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v137)) > _g4_s19 ? (52u + sizeof(_g4_t_v137)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v138)) > _g4_s20 ? (52u + sizeof(_g4_t_v138)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v139)) > _g4_s21 ? (52u + sizeof(_g4_t_v139)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v140)) > _g4_s22 ? (56u + sizeof(_g4_t_v140)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v141)) > _g4_s23 ? (56u + sizeof(_g4_t_v141)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v142)) > _g4_s24 ? (56u + sizeof(_g4_t_v142)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v143)) > _g4_s25 ? (56u + sizeof(_g4_t_v143)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v144)) > _g4_s26 ? (60u + sizeof(_g4_t_v144)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v145)) > _g4_s27 ? (60u + sizeof(_g4_t_v145)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v146)) > _g4_s28 ? (60u + sizeof(_g4_t_v146)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v147)) > _g4_s29 ? (60u + sizeof(_g4_t_v147)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v148)) > _g4_s30 ? (60u + sizeof(_g4_t_v148)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v149)) > _g4_s31 ? (64u + sizeof(_g4_t_v149)) : _g4_s31,
    _g4_s33 = (64u + sizeof(_g4_t_v150)) > _g4_s32 ? (64u + sizeof(_g4_t_v150)) : _g4_s32,
    _g4_s34 = (64u + sizeof(_g4_t_v151)) > _g4_s33 ? (64u + sizeof(_g4_t_v151)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_v152)) > _g4_s34 ? (64u + sizeof(_g4_t_v152)) : _g4_s34,
    _g4_s36 = (68u + sizeof(_g4_t_v153)) > _g4_s35 ? (68u + sizeof(_g4_t_v153)) : _g4_s35,
    _g4_s37 = (68u + sizeof(_g4_t_v154)) > _g4_s36 ? (68u + sizeof(_g4_t_v154)) : _g4_s36,
    _g4_s38 = (68u + sizeof(_g4_t_v155)) > _g4_s37 ? (68u + sizeof(_g4_t_v155)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v156)) > _g4_s38 ? (68u + sizeof(_g4_t_v156)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v157)) > _g4_s39 ? (68u + sizeof(_g4_t_v157)) : _g4_s39,
    _g4_s41 = (68u + sizeof(_g4_t_v158)) > _g4_s40 ? (68u + sizeof(_g4_t_v158)) : _g4_s40,
    _g4_s42 = (72u + sizeof(_g4_t_v159)) > _g4_s41 ? (72u + sizeof(_g4_t_v159)) : _g4_s41,
    _g4_s43 = (72u + sizeof(_g4_t_v160)) > _g4_s42 ? (72u + sizeof(_g4_t_v160)) : _g4_s42,
    _g4_s44 = (72u + sizeof(_g4_t_v161)) > _g4_s43 ? (72u + sizeof(_g4_t_v161)) : _g4_s43,
    _g4_s45 = (72u + sizeof(_g4_t_v162)) > _g4_s44 ? (72u + sizeof(_g4_t_v162)) : _g4_s44,
    _g4_s46 = (76u + sizeof(_g4_t_v163)) > _g4_s45 ? (76u + sizeof(_g4_t_v163)) : _g4_s45,
    _g4_s47 = (76u + sizeof(_g4_t_v164)) > _g4_s46 ? (76u + sizeof(_g4_t_v164)) : _g4_s46,
    _g4_s48 = (76u + sizeof(_g4_t_v165)) > _g4_s47 ? (76u + sizeof(_g4_t_v165)) : _g4_s47,
    _g4_s49 = (76u + sizeof(_g4_t_v166)) > _g4_s48 ? (76u + sizeof(_g4_t_v166)) : _g4_s48,
    _g4_s50 = (76u + sizeof(_g4_t_v167)) > _g4_s49 ? (76u + sizeof(_g4_t_v167)) : _g4_s49,
    _g4_s51 = (76u + sizeof(_g4_t_v168)) > _g4_s50 ? (76u + sizeof(_g4_t_v168)) : _g4_s50,
    _g4_s52 = (76u + sizeof(_g4_t_v169)) > _g4_s51 ? (76u + sizeof(_g4_t_v169)) : _g4_s51,
    _g4_s53 = (80u + sizeof(_g4_t_v170)) > _g4_s52 ? (80u + sizeof(_g4_t_v170)) : _g4_s52
  };
  alignas(16) uint8_t _g4_sf[_g4_s53];
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 0u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 0u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 0u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 24u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 24u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 24u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 24u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 24u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 28u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 40u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 40u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 44u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 44u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 44u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 48u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 48u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 52u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 52u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 52u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 52u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 52u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 52u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 56u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 56u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 56u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 56u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 60u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 60u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 60u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 60u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 60u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 64u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 64u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 64u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 64u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 68u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 68u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 68u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 68u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 68u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 68u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 72u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 72u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 72u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 72u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 76u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 76u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 76u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 76u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 76u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 76u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 76u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 80u);

  v4 = a4;
  if ( a3 == 0 )
    return;
  v5 = a1[1];
  if ( a3 > -858993459 * ((a1[2] - v5) >> 3) )
  {
    v6 = -858993459 * ((v5 - *a1) >> 3);
    if ( a3 > 107374182 - v6 )
      sub_1900180("vector::_M_fill_insert");
    v7 = a3;
    if ( v6 >= a3 )
      v7 = v6;
    v8 = -858993459 * (((int)(uintptr_t)(a2) - *a1) >> 3);
    v9 = __CFADD__(v7, v6);
    v10 = v7 + v6;
    if ( v9 || v10 > 0x6666666 )
    {
      v126 = -16;
      v11 = 0xFFFFFFF0;
    }
    else
    {
      if ( v10 == 0 )
      {
        v140 = 0;
        v126 = 0;
        v12 = 0;
LABEL_10:
        v134 = v12 + 40 * v8;
        v163 = (int *)(v134 + 24);
        v153 = (uint32_t *)(v134 + 24);
        v144 = a3;
        v159 = (uint32_t *)v134;
        do
        {
          if ( v159 != nullptr )
          {
            v13 = v159;
            v14 = *(uint32_t *)v4;
            v15 = *(uint32_t *)v4 == 0;
            *v159 = *(uint32_t *)v4;
            if ( !v15 )
            {
              sub_8B1B00((volatile int32_t *)(v14 + 4));
              v13 = v159;
            }
            v16 = *((uint32_t *)v4 + 1);
            v17 = (char *)v159 - v134;
            v13[1] = v16;
            if ( v16 != 0 )
            {
              sub_8B1B00((volatile int32_t *)(v16 + 4));
              v17 = (char *)v159 - v134;
            }
            v18 = v134;
            v19 = *((volatile int32_t **)v4 + 2);
            *(uint32_t *)&v17[v134 + 8] = (uint32_t)(uintptr_t)(v19);
            if ( v19 != nullptr )
            {
              sub_8B1B00(v19);
              v18 = v134;
              v17 = (char *)v159 - v134;
            }
            v20 = *((uint32_t *)v4 + 3);
            *(uint32_t *)&v17[v18 + 12] = v20;
            if ( v20 != 0 )
              sub_8B1B00((volatile int32_t *)(v20 + 4));
            v159[4] = *((uint32_t *)v4 + 4);
            v21 = *((volatile int32_t **)v4 + 5);
            v159[5] = (uint32_t)(uintptr_t)(v21);
            if ( v21 != nullptr )
              sub_8B1B00(v21);
            v22 = 0;
            v23 = 0;
            v24 = (*((uint32_t *)v4 + 7) - *((uint32_t *)v4 + 6)) >> 3;
            *v153 = 0;
            v153[1] = 0;
            v153[2] = 0;
            if ( v24 != 0 )
            {
              v123 = 8 * v24;
              v23 = sub_4EBDC0(8 * v24);
              v22 = v123;
            }
            *v163 = v23;
            v163[1] = v23;
            v163[2] = v23 + v22;
            v25 = *((char **)v4 + 7);
            v132 = *((char **)v4 + 6);
            if ( v25 != v132 )
            {
              v26 = *((char **)v4 + 6);
              v27 = (uint32_t *)v23;
              v127 = v4;
              do
              {
                if ( v27 != nullptr )
                {
                  v28 = *(uint32_t *)v26;
                  v27[1] = *((uint32_t *)v26 + 1);
                  *v27 = v28;
                }
                v26 += 8;
                v27 += 2;
              }
              while ( v25 != v26 );
              v4 = v127;
              v23 += 8 * ((unsigned int)(v25 - (v132 + 8)) >> 3) + 8;
            }
            v159[7] = v23;
            v159[9] = *((uint32_t *)v4 + 9);
          }
          v159 += 10;
          v163 += 10;
          v153 += 10;
          --v144;
        }
        while ( v144 != 0 );
        v160 = (uint32_t *)v140;
        if ( (glitch::collada::modularSkinnedMesh::SModularBuffer *)*a1 != a2 )
        {
          v29 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)*a1;
          do
          {
            if ( v160 != nullptr )
            {
              v30 = *(uint32_t *)v29;
              v15 = *(uint32_t *)v29 == 0;
              *v160 = *(uint32_t *)v29;
              if ( !v15 )
                sub_8B1B00((volatile int32_t *)(v30 + 4));
              v31 = *((uint32_t *)v29 + 1);
              v32 = (char *)v160 - v140;
              v160[1] = v31;
              if ( v31 != 0 )
                sub_8B1B00((volatile int32_t *)(v31 + 4));
              v33 = *((volatile int32_t **)v29 + 2);
              v160[2] = (uint32_t)(uintptr_t)(v33);
              if ( v33 != nullptr )
                sub_8B1B00(v33);
              v34 = *((uint32_t *)v29 + 3);
              v160[3] = v34;
              if ( v34 != 0 )
                sub_8B1B00((volatile int32_t *)(v34 + 4));
              v160[4] = *((uint32_t *)v29 + 4);
              v35 = *((volatile int32_t **)v29 + 5);
              v36 = v140;
              v160[5] = (uint32_t)(uintptr_t)(v35);
              if ( v35 != nullptr )
              {
                sub_8B1B00(v35);
                v36 = v140;
              }
              v37 = *((uint32_t *)v29 + 7) - *((uint32_t *)v29 + 6);
              *(uint32_t *)&v32[v36 + 24] = 0;
              v38 = 0;
              v164 = 0;
              v39 = v37 >> 3;
              v40 = v140 + 24;
              v154 = v40;
              *(uint32_t *)&v32[v40 + 4] = 0;
              *(uint32_t *)&v32[v40 + 8] = 0;
              if ( v39 != 0 )
              {
                v122 = 8 * v39;
                v164 = sub_4EBDC0(8 * v39);
                v38 = v122;
                v40 = v154;
              }
              *(uint32_t *)&v32[v40] = v164;
              *(uint32_t *)&v32[v40 + 4] = v164;
              *(uint32_t *)&v32[v40 + 8] = v38 + v164;
              v41 = *((char **)v29 + 6);
              v42 = *((char **)v29 + 7);
              v145 = v41;
              if ( v42 != v41 )
              {
                v43 = (uint32_t *)v164;
                v135 = v29;
                do
                {
                  if ( v43 != nullptr )
                  {
                    v44 = *(uint32_t *)v41;
                    v43[1] = *((uint32_t *)v41 + 1);
                    *v43 = v44;
                  }
                  v41 += 8;
                  v43 += 2;
                }
                while ( v42 != v41 );
                v29 = v135;
                v164 += 8 * ((unsigned int)(v42 - (v145 + 8)) >> 3) + 8;
              }
              *(uint32_t *)&v32[v154 + 4] = v164;
              v160[9] = *((uint32_t *)v29 + 9);
            }
            v29 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)v29 + 40);
            v160 += 10;
          }
          while ( v29 != a2 );
        }
        v155 = &v160[10 * a3];
        v161 = (char *)v155;
        v129 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)a1[1];
        if ( v129 != a2 )
        {
          v45 = a2;
          do
          {
            if ( v161 != nullptr )
            {
              v46 = *(uint32_t *)v45;
              v15 = *(uint32_t *)v45 == 0;
              *(uint32_t *)v161 = *(uint32_t *)v45;
              if ( !v15 )
                sub_8B1B00((volatile int32_t *)(v46 + 4));
              v47 = *((uint32_t *)v45 + 1);
              v48 = (char *)(v161 - (char *)v155);
              *((uint32_t *)v161 + 1) = v47;
              if ( v47 != 0 )
                sub_8B1B00((volatile int32_t *)(v47 + 4));
              v49 = *((volatile int32_t **)v45 + 2);
              *((uint32_t *)v161 + 2) = (uint32_t)(uintptr_t)(v49);
              if ( v49 != nullptr )
                sub_8B1B00(v49);
              v50 = *((uint32_t *)v45 + 3);
              *((uint32_t *)v161 + 3) = v50;
              if ( v50 != 0 )
                sub_8B1B00((volatile int32_t *)(v50 + 4));
              *((uint32_t *)v161 + 4) = *((uint32_t *)v45 + 4);
              v51 = *((volatile int32_t **)v45 + 5);
              v52 = v155;
              *((uint32_t *)v161 + 5) = (uint32_t)(uintptr_t)(v51);
              if ( v51 != nullptr )
              {
                sub_8B1B00(v51);
                v52 = v155;
              }
              v53 = *((uint32_t *)v45 + 7) - *((uint32_t *)v45 + 6);
              *(uint32_t *)&v48[(uint32_t)(uintptr_t)(v52) + 24] = 0;
              v54 = 0;
              v165 = 0;
              v55 = v53 >> 3;
              v149 = v155 + 6;
              *(uint32_t *)((char *)v149 + (uint32_t)(uintptr_t)(v48) + 4) = 0;
              *(uint32_t *)((char *)v149 + (uint32_t)(uintptr_t)(v48) + 8) = 0;
              if ( v55 != 0 )
              {
                v121 = 8 * v55;
                v165 = sub_4EBDC0(8 * v55);
                v54 = v121;
              }
              *((uint32_t *)v161 + 6) = v165;
              *(uint32_t *)((char *)v149 + (uint32_t)(uintptr_t)(v48) + 4) = v165;
              *(uint32_t *)((char *)v149 + (uint32_t)(uintptr_t)(v48) + 8) = v165 + v54;
              v56 = *((char **)v45 + 7);
              v146 = *((char **)v45 + 6);
              if ( v56 != v146 )
              {
                v57 = *((char **)v45 + 6);
                v136 = v45;
                v58 = (uint32_t *)v165;
                do
                {
                  if ( v58 != nullptr )
                  {
                    v59 = *(uint32_t *)v57;
                    v58[1] = *((uint32_t *)v57 + 1);
                    *v58 = v59;
                  }
                  v57 += 8;
                  v58 += 2;
                }
                while ( v56 != v57 );
                v45 = v136;
                v165 += 8 * ((unsigned int)(v56 - (v146 + 8)) >> 3) + 8;
              }
              *(uint32_t *)((char *)v149 + (uint32_t)(uintptr_t)(v48) + 4) = v165;
              *((uint32_t *)v161 + 9) = *((uint32_t *)v45 + 9);
            }
            v45 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)v45 + 40);
            v161 += 40;
          }
          while ( v129 != v45 );
          v129 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)a1[1];
        }
        v60 = *a1;
        if ( (glitch::collada::modularSkinnedMesh::SModularBuffer *)*a1 != v129 )
        {
          do
          {
            v118 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)v60;
            v60 += 40;
            g4_noop_dtor(v118);
          }
          while ( (glitch::collada::modularSkinnedMesh::SModularBuffer *)v60 != v129 );
          v60 = *a1;
        }
        if ( v60 != 0 )
          gll_operator_delete_arr(v60);
        *a1 = v140;
        a1[1] = (int)(uintptr_t)(v161);
        a1[2] = v126 + v140;
        return;
      }
      v126 = 40 * v10;
      v11 = 40 * v10;
    }
    v140 = sub_4EBDC0(v11);
    v12 = v140;
    goto LABEL_10;
  }
  glitch::collada::modularSkinnedMesh::SModularBuffer::Construct(
    (glitch::collada::modularSkinnedMesh::SModularBuffer *)v170,
    a4);
  v61 = (int *)a1[1];
  v162 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)v61;
  v128 = -858993459 * (((char *)v61 - (char *)a2) >> 3);
  if ( a3 >= v128 )
  {
    v85 = a3 - v128;
    if ( a3 != v128 )
    {
      v138 = a3 - v128;
      v131 = (uint32_t *)(v61 + 6);
      v142 = v61 + 6;
      v151 = (uint32_t *)(v61 + 6);
      v168 = (char *)a1[1];
      do
      {
        if ( v168 != nullptr )
        {
          v86 = v168;
          v87 = v170[0];
          v15 = v170[0] == 0;
          *(uint32_t *)v168 = v170[0];
          if ( !v15 )
          {
            sub_8B1B00((volatile int32_t *)(v87 + 4));
            v86 = v168;
          }
          v88 = v170[1];
          v89 = v168 - (char *)v162;
          v15 = v170[1] == 0;
          *((uint32_t *)v86 + 1) = v170[1];
          if ( !v15 )
          {
            sub_8B1B00((volatile int32_t *)(v88 + 4));
            v89 = v168 - (char *)v162;
          }
          v90 = v162;
          v91 = (volatile int32_t *)v170[2];
          v15 = v170[2] == 0;
          *(uint32_t *)((char *)v162 + v89 + 8) = v170[2];
          if ( !v15 )
          {
            sub_8B1B00(v91);
            v90 = v162;
            v89 = v168 - (char *)v162;
          }
          v92 = v170[3];
          v15 = v170[3] == 0;
          *(uint32_t *)((char *)v90 + v89 + 12) = v170[3];
          if ( !v15 )
            sub_8B1B00((volatile int32_t *)(v92 + 4));
          *((uint32_t *)v168 + 4) = v170[4];
          v93 = (volatile int32_t *)v170[5];
          v15 = v170[5] == 0;
          *((uint32_t *)v168 + 5) = v170[5];
          if ( !v15 )
            sub_8B1B00(v93);
          v94 = 0;
          v95 = (v170[7] - v170[6]) >> 3;
          v157 = 0;
          *v151 = 0;
          v151[1] = 0;
          v151[2] = 0;
          if ( v95 != 0 )
          {
            v94 = 8 * v95;
            v157 = sub_4EBDC0(8 * v95);
          }
          *v142 = v157;
          v142[1] = v157;
          v142[2] = v94 + v157;
          v96 = (int *)v170[6];
          v97 = (int *)v170[7];
          v133 = v170[6];
          if ( v170[7] != v170[6] )
          {
            v98 = (uint32_t *)v157;
            do
            {
              if ( v98 != nullptr )
              {
                v99 = *v96;
                v98[1] = v96[1];
                *v98 = v99;
              }
              v96 += 2;
              v98 += 2;
            }
            while ( v97 != v96 );
            v157 += 8 * (((unsigned int)(uintptr_t)(v97) - v133 - 8) >> 3) + 8;
          }
          *(uint32_t *)((char *)v131  + ((uintptr_t)(v168) - (uintptr_t)(char *)(v162)) + 4) = v157;
          *((uint32_t *)v168 + 9) = v170[9];
        }
        v168 += 40;
        v142 += 10;
        v151 += 10;
        --v138;
      }
      while ( v138 != 0 );
      v61 = (int *)a1[1];
      v85 = a3 - v128;
    }
    v100 = &v61[10 * v85];
    v143 = v100;
    a1[1] = (int)(uintptr_t)(v100);
    if ( v162 == a2 )
    {
      a1[1] = (int)(uintptr_t)(&v100[10 * v128]);
    }
    else
    {
      v101 = a2;
      v169 = &v61[10 * v85];
      do
      {
        if ( v169 != nullptr )
        {
          v102 = v169;
          v103 = *(uint32_t *)v101;
          v15 = *(uint32_t *)v101 == 0;
          *v169 = *(uint32_t *)v101;
          if ( !v15 )
          {
            sub_8B1B00((volatile int32_t *)(v103 + 4));
            v102 = v169;
          }
          v104 = *((uint32_t *)v101 + 1);
          v105 = (char *)((char *)v169 - (char *)v143);
          v102[1] = v104;
          if ( v104 != 0 )
            sub_8B1B00((volatile int32_t *)(v104 + 4));
          v106 = *((volatile int32_t **)v101 + 2);
          v169[2] = (int)(uintptr_t)(v106);
          if ( v106 != nullptr )
            sub_8B1B00(v106);
          v107 = *((uint32_t *)v101 + 3);
          v169[3] = v107;
          if ( v107 != 0 )
            sub_8B1B00((volatile int32_t *)(v107 + 4));
          v169[4] = *((uint32_t *)v101 + 4);
          v108 = *((volatile int32_t **)v101 + 5);
          v109 = v143;
          v169[5] = (int)(uintptr_t)(v108);
          if ( v108 != nullptr )
          {
            sub_8B1B00(v108);
            v109 = v143;
          }
          v110 = *((uint32_t *)v101 + 7) - *((uint32_t *)v101 + 6);
          *(uint32_t *)&v105[(uint32_t)(uintptr_t)(v109) + 24] = 0;
          v111 = 0;
          v158 = 0;
          v112 = v110 >> 3;
          v152 = v143 + 6;
          *(int *)((char *)v152 + (uint32_t)(uintptr_t)(v105) + 4) = 0;
          *(int *)((char *)v152 + (uint32_t)(uintptr_t)(v105) + 8) = 0;
          if ( v112 != 0 )
          {
            v125 = 8 * v112;
            v158 = sub_4EBDC0(8 * v112);
            v111 = v125;
          }
          v169[6] = v158;
          *(int *)((char *)v152 + (uint32_t)(uintptr_t)(v105) + 4) = v158;
          *(int *)((char *)v152 + (uint32_t)(uintptr_t)(v105) + 8) = v111 + v158;
          v113 = *((char **)v101 + 7);
          v148 = *((char **)v101 + 6);
          if ( v113 != v148 )
          {
            v114 = *((char **)v101 + 6);
            v139 = v101;
            v115 = (uint32_t *)v158;
            do
            {
              if ( v115 != nullptr )
              {
                v116 = *(uint32_t *)v114;
                v115[1] = *((uint32_t *)v114 + 1);
                *v115 = v116;
              }
              v114 += 8;
              v115 += 2;
            }
            while ( v113 != v114 );
            v101 = v139;
            v158 += 8 * ((unsigned int)(v113 - (v148 + 8)) >> 3) + 8;
          }
          *(int *)((char *)v152 + (uint32_t)(uintptr_t)(v105) + 4) = v158;
          v169[9] = *((uint32_t *)v101 + 9);
        }
        v101 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)v101 + 40);
        v169 += 10;
      }
      while ( v162 != v101 );
      v117 = a2;
      a1[1] += 40 * v128;
      do
      {
        v120 = v117;
        v117 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)v117 + 40);
        glitch::collada::modularSkinnedMesh::SModularBuffer::opAssign(
          v120,
          (const glitch::collada::modularSkinnedMesh::SModularBuffer *)v170);
      }
      while ( v162 != v117 );
    }
  }
  else
  {
    v62 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)&v61[-10 * a3];
    v130 = 40 * a3;
    v150 = v62;
    v63 = v62;
    if ( v62 != v162 )
    {
      v64 = v62;
      v166 = (char *)a1[1];
      do
      {
        if ( v166 != nullptr )
        {
          v65 = v166;
          v66 = *(uint32_t *)v64;
          v15 = *(uint32_t *)v64 == 0;
          *(uint32_t *)v166 = *(uint32_t *)v64;
          if ( !v15 )
          {
            sub_8B1B00((volatile int32_t *)(v66 + 4));
            v65 = v166;
          }
          v67 = *((uint32_t *)v64 + 1);
          v68 = (char *)(v64 - v150);
          v69 = v166 - (char *)v162;
          *((uint32_t *)v65 + 1) = v67;
          if ( v67 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v67 + 4));
            v68 = (char *)(v64 - v150);
          }
          v70 = *(volatile int32_t **)&v68[(uint32_t)(uintptr_t)(v150) + 8];
          *((uint32_t *)v166 + 2) = (uint32_t)(uintptr_t)(v70);
          if ( v70 != nullptr )
            sub_8B1B00(v70);
          v71 = *((uint32_t *)v64 + 3);
          *((uint32_t *)v166 + 3) = v71;
          if ( v71 != 0 )
            sub_8B1B00((volatile int32_t *)(v71 + 4));
          *((uint32_t *)v166 + 4) = *((uint32_t *)v64 + 4);
          v72 = *((volatile int32_t **)v64 + 5);
          v73 = v162;
          *((uint32_t *)v166 + 5) = (uint32_t)(uintptr_t)(v72);
          if ( v72 != nullptr )
          {
            sub_8B1B00(v72);
            v73 = v162;
          }
          v74 = *((uint32_t *)v64 + 7) - *((uint32_t *)v64 + 6);
          *(uint32_t *)((char *)v73 + v69 + 24) = 0;
          v75 = 0;
          v156 = 0;
          v76 = v74 >> 3;
          v77 = (char *)v162 + 24;
          v141 = v77;
          *(uint32_t *)&v77[v69 + 4] = 0;
          *(uint32_t *)&v77[v69 + 8] = 0;
          if ( v76 != 0 )
          {
            v124 = 8 * v76;
            v156 = sub_4EBDC0(8 * v76);
            v75 = v124;
            v77 = v141;
          }
          *(uint32_t *)&v77[v69] = v156;
          *(uint32_t *)&v77[v69 + 4] = v156;
          *(uint32_t *)&v77[v69 + 8] = v75 + v156;
          v78 = *((char **)v64 + 6);
          v79 = *((char **)v64 + 7);
          v147 = v78;
          if ( v79 != v78 )
          {
            v80 = (uint32_t *)v156;
            v137 = v64;
            do
            {
              if ( v80 != nullptr )
              {
                v81 = *(uint32_t *)v78;
                v80[1] = *((uint32_t *)v78 + 1);
                *v80 = v81;
              }
              v78 += 8;
              v80 += 2;
            }
            while ( v79 != v78 );
            v64 = v137;
            v156 += 8 * ((unsigned int)(v79 - (v147 + 8)) >> 3) + 8;
          }
          *(uint32_t *)&v141[v69 + 4] = v156;
          *((uint32_t *)v166 + 9) = *((uint32_t *)v64 + 9);
        }
        v64 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)v64 + 40);
        v166 += 40;
      }
      while ( v162 != v64 );
      v63 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(v63) + v130;
    if ( -858993459 * ((v150 - a2) >> 3) > 0 )
    {
      v167 = -858993459 * ((v150 - a2) >> 3);
      v82 = v150;
      v83 = v162;
      do
      {
        v82 = (const glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)v82 - 40);
        v83 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)v83 - 40);
        glitch::collada::modularSkinnedMesh::SModularBuffer::opAssign(v83, v82);
        --v167;
      }
      while ( v167 != 0 );
    }
    if ( (glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)a2 + v130) != a2 )
    {
      v84 = a2;
      do
      {
        v119 = v84;
        v84 = (glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)v84 + 40);
        glitch::collada::modularSkinnedMesh::SModularBuffer::opAssign(
          v119,
          (const glitch::collada::modularSkinnedMesh::SModularBuffer *)v170);
      }
      while ( (glitch::collada::modularSkinnedMesh::SModularBuffer *)((char *)a2 + v130) != v84 );
    }
  }
  g4_noop_dtor((glitch::collada::modularSkinnedMesh::SModularBuffer *)v170);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_ps_CParticleSyst_5b2ffd::opAssign  (binary VA: 0xd3caf0)
// Original: std::vector<glitch::collada::ps::CParticleSystemStripBaker::SSnapshot>::operator=
// ----------------------------------------------------------------------------
std::vector<glitch::collada::ps::CParticleSystemStripBaker::SSnapshot> * g4_std::vector_collada_ps_CParticleSyst_5b2ffd::opAssign(std::vector<glitch::collada::ps::CParticleSystemStripBaker::SSnapshot> *self, const std::vector<glitch::collada::ps::CParticleSystemStripBaker::SSnapshot> *a2)
{
  std::vector<glitch::collada::ps::CParticleSystemStripBaker::SSnapshot> *result;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  char *v6;
  int v7;
  char *v8;
  uint32_t *v9;
  uint32_t *v10;
  char *v11;
  char *v12;
  int v13;
  bool v14;
  int v15;
  uint32_t *v16;
  char *v17;
  uint32_t *v18;
  uint32_t *v19;
  char *v20;
  char *v21;
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  uint8_t *v27;
  int v28;
  int v29;
  int v30;
  int v31;

  result = self;
  if ( a2 != self )
  {
    v27 = *(uint8_t **)self;
    v3 = *((uint32_t **)a2 + 1);
    v4 = *(uint32_t **)a2;
    v5 = ((int)(uintptr_t)(v3) - *(uint32_t *)a2) >> 2;
    v30 = 954437177 * v5;
    v25 = 954437177 * v5;
    if ( 954437177 * v5 > (unsigned int)(954437177 * ((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 2)) )
    {
      if ( v30 != 0 )
      {
        if ( (unsigned int)v30 > 0x71C71C7 )
          sub_18FFEE0(954437177 * v5, v5);
        v28 = 4 * v5;
        v23 = opNew(4 * v5);
      }
      else
      {
        v28 = 0;
        v23 = 0;
      }
      if ( v4 != v3 )
      {
        v24 = (uint32_t *)v23;
        do
        {
          if ( v24 != nullptr )
          {
            *v24 = *v4;
            v24[1] = v4[1];
            v24[2] = v4[2];
            v24[3] = v4[3];
            v24[4] = v4[4];
            v24[5] = v4[5];
            v24[6] = v4[6];
            v24[7] = v4[7];
            v24[8] = v4[8];
          }
          v4 += 9;
          v24 += 9;
        }
        while ( v3 != v4 );
      }
      if ( *(uint32_t *)self != 0 )
        opDelete(*(void **)self);
      result = self;
      *(uint32_t *)self = v23;
      v15 = v28 + v23;
      *((uint32_t *)self + 2) = v15;
      goto LABEL_8;
    }
    v6 = *((char **)self + 1);
    v7 = (v6 - (char *)(v27)) >> 2;
    if ( v30 > (unsigned int)(954437177 * v7) )
    {
      v16 = &v4[v7];
      v26 = 954437177 * v7;
      if ( 954437177 * v7 > 0 )
      {
        v17 = *(char **)self;
        v18 = *(uint32_t **)a2;
        v19 = v4 + 5;
        v31 = *(uint32_t *)a2;
        v20 = (char *)(v27 + 20);
        do
        {
          *(uint32_t *)v17 = *v18;
          *((uint32_t *)v17 + 1) = v18[1];
          *((uint32_t *)v17 + 2) = v18[2];
          *((uint32_t *)v17 + 3) = v18[3];
          *((uint32_t *)v17 + 4) = v18[4];
          v21 = (char *)v18 - v31;
          v22 = v17 - (char *)(v27);
          v14 = v26-- == 1;
          *(uint32_t *)&v20[v22] = *(uint32_t *)((char *)v19 + (uint32_t)(uintptr_t)(v18) - v31);
          v18 += 9;
          v17 += 36;
          *(uint32_t *)&v20[v22 + 4] = *(uint32_t *)((char *)v19 + (uint32_t)(uintptr_t)(v21) + 4);
          *(uint32_t *)&v20[v22 + 8] = *(uint32_t *)((char *)v19 + (uint32_t)(uintptr_t)(v21) + 8);
          *(uint32_t *)&v20[v22 + 12] = *(uint32_t *)((char *)v19 + (uint32_t)(uintptr_t)(v21) + 12);
        }
        while ( !v14 );
        v6 = *((char **)self + 1);
        v3 = *((uint32_t **)a2 + 1);
        v27 = *(uint8_t **)self;
        v16 = (uint32_t *)(*(uint32_t *)a2 + ((unsigned int)(uintptr_t)(&v6[-*(uint32_t *)self]) & 0xFFFFFFFC));
      }
      if ( v3 == v16 )
      {
        v15 = (int)(uintptr_t)(&v27[36 * v30]);
        result = self;
        goto LABEL_8;
      }
      do
      {
        if ( v6 != nullptr )
        {
          *(uint32_t *)v6 = *v16;
          *((uint32_t *)v6 + 1) = v16[1];
          *((uint32_t *)v6 + 2) = v16[2];
          *((uint32_t *)v6 + 3) = v16[3];
          *((uint32_t *)v6 + 4) = v16[4];
          *((uint32_t *)v6 + 5) = v16[5];
          *((uint32_t *)v6 + 6) = v16[6];
          *((uint32_t *)v6 + 7) = v16[7];
          *((uint32_t *)v6 + 8) = v16[8];
        }
        v16 += 9;
        v6 += 36;
      }
      while ( v3 != v16 );
    }
    else
    {
      if ( v30 <= 0 )
      {
        v15 = (int)(uintptr_t)(&v27[4 * v5]);
        result = self;
        goto LABEL_8;
      }
      v8 = *(char **)self;
      v9 = *(uint32_t **)a2;
      v10 = v4 + 5;
      v29 = *(uint32_t *)a2;
      v11 = (char *)(v27 + 20);
      do
      {
        *(uint32_t *)v8 = *v9;
        *((uint32_t *)v8 + 1) = v9[1];
        *((uint32_t *)v8 + 2) = v9[2];
        *((uint32_t *)v8 + 3) = v9[3];
        *((uint32_t *)v8 + 4) = v9[4];
        v12 = (char *)v9 - v29;
        v13 = v8 - (char *)(v27);
        v14 = v25-- == 1;
        *(uint32_t *)&v11[v13] = *(uint32_t *)((char *)v10 + (uint32_t)(uintptr_t)(v9) - v29);
        v9 += 9;
        v8 += 36;
        *(uint32_t *)&v11[v13 + 4] = *(uint32_t *)((char *)v10 + (uint32_t)(uintptr_t)(v12) + 4);
        *(uint32_t *)&v11[v13 + 8] = *(uint32_t *)((char *)v10 + (uint32_t)(uintptr_t)(v12) + 8);
        *(uint32_t *)&v11[v13 + 12] = *(uint32_t *)((char *)v10 + (uint32_t)(uintptr_t)(v12) + 12);
      }
      while ( !v14 );
    }
    result = self;
    v15 = *(uint32_t *)self + 36 * v30;
LABEL_8:
    *((uint32_t *)result + 1) = v15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_CAnimationStream_0b7b01::erase  (binary VA: 0xd83ce0)
// Original: std::vector<glitch::collada::CAnimationStreamingManager::SSegmentCacheEntry,glitch::core::SAllocator<glitch::collada::CAnimationStreamingManager::SSegmentCacheEntry,(glitch::memory::E_MEMORY_HINT)0>>::erase
// ----------------------------------------------------------------------------
uint32_t * g4_std::vector_collada_CAnimationStream_0b7b01::erase(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  volatile int32_t *v8;
  int v9;
  void *v10;
  int v11;
  int v13;
  int v14;
  int v15;

  v3 = (uint32_t *)(a3 + 12);
  v4 = *(uint32_t *)(a2 + 4);
  if ( v4 != a3 + 12 )
  {
    v15 = -1431655765 * ((v4 - (int)(uintptr_t)(v3)) >> 2);
    if ( v15 > 0 )
    {
      v5 = a3 + 16;
      v6 = a3 + 4;
      do
      {
        v7 = (char *)v3 - a3;
        *(v3 - 3) = *v3;
        v8 = *(volatile int32_t **)((char *)v3 + v5 - a3 - 12);
        if ( v8 != nullptr )
          __sync_add_and_fetch(v8, 1u);
        v9 = *(uint32_t *)&v7[v6 - 12];
        if ( v9 != 0 && __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) == 1 )
        {
          v10 = *(void **)(v9 + 16);
          if ( v10 != nullptr )
          {
            v13 = v6;
            v14 = v5;
            opDeleteArray(v10);
            v5 = v14;
            v6 = v13;
          }
          *(uint32_t *)(v9 + 16) = 0;
        }
        *(uint32_t *)&v7[v6 - 12] = *(uint32_t *)&v7[v5 - 12];
        *(v3 - 1) = v3[2];
        v3 += 3;
        --v15;
      }
      while ( v15 != 0 );
      v4 = *(uint32_t *)(a2 + 4);
    }
  }
  *(uint32_t *)(a2 + 4) = v4 - 12;
  v11 = *(uint32_t *)(v4 - 8);
  if ( v11 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)v11, 0xFFFFFFFF) == 1 )
    {
      if ( *(uint32_t *)(v11 + 16) != 0 )
        opDeleteArray(*(void **)(v11 + 16));
      *(uint32_t *)(v11 + 16) = 0;
    }
    *(uint32_t *)(v4 - 8) = 0;
  }
  *a1 = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_CColladaDatabase_d40bf5::erase  (binary VA: 0xd83e80)
// Original: std::vector<glitch::collada::CColladaDatabase,glitch::core::SAllocator<glitch::collada::CColladaDatabase,(glitch::memory::E_MEMORY_HINT)0>>::erase
// ----------------------------------------------------------------------------
int ** g4_std::vector_collada_CColladaDatabase_d40bf5::erase(int **a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  glitch::collada::CColladaDatabase::Self *v10;
  uint32_t v12[11];

  v3 = *(uint32_t **)(a2 + 4);
  if ( v3 != (uint32_t *)(uintptr_t)(a3 + 5) )
  {
    v4 = -858993459 * (v3 - (uint32_t *)((a3 + 5)));
    if ( v4 > 0 )
    {
      v5 = a3;
      do
      {
        v6 = 0;
        v12[0] = v5[5];
        if ( v12[0] != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v12[0] + 4));
          v6 = v12[0];
        }
        v7 = v5[6];
        v8 = *v5;
        *v5 = v6;
        v9 = v5[1];
        v5[1] = v7;
        v12[1] = v9;
        memset(&v12[2], 0, 12);
        v12[0] = v8;
        v5 += 5;
        glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v12);
        --v4;
      }
      while ( v4 != 0 );
      v3 = *(uint32_t **)(a2 + 4);
    }
  }
  v10 = (glitch::collada::CColladaDatabase::Self *)(v3 - 5);
  *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v10);
  glitch::collada::CColladaDatabase::Destroy(v10);
  *a1 = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_SChannel_const_S_730378::M_insert_aux  (binary VA: 0xd845c0)
// Original: std::vector<glitch::collada::SChannel const*,glitch::core::SAllocator<glitch::collada::SChannel const*,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_collada_SChannel_const_S_730378::M_insert_aux(int *a1, char *src, int *a3)
{
  uint32_t *v3;
  int v4;
  int result;
  int v6;
  uint8_t *v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int *v11;
  int v12;
  char *v13;
  uint32_t *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;

  v3 = (uint32_t *)a1[1];
  if ( v3 != (uint32_t *)a1[2] )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a3;
    if ( result != 0 )
      result = (int)(uintptr_t)(memmove((void *)(v4 - 4 * result), src, 4 * result));
    *(uint32_t *)src = v6;
    return result;
  }
  v7 = (uint8_t *)*a1;
  v8 = ((int)(uintptr_t)(v3) - *a1) >> 2;
  if ( v8 != 0 )
  {
    v9 = 2 * v8;
    if ( v8 > 2 * v8 || v9 > 0x3FFFFFFF )
    {
      v21 = -4;
      v10 = (src - (char *)(v7)) >> 2;
    }
    else
    {
      v21 = 8 * v8;
      v10 = (src - (char *)(v7)) >> 2;
      if ( v9 == 0 )
      {
        v20 = 4;
        v19 = 0;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v21 = 4;
    v10 = (src - (char *)(v7)) >> 2;
  }
  v18 = v10;
  v19 = sub_4EBDC0(v21);
  v20 = v19 + 4;
  v10 = v18;
LABEL_11:
  v11 = (int *)(v19 + 4 * v10);
  if ( v11 != nullptr )
    *v11 = *a3;
  v12 = *a1;
  if ( (char *)*a1 != src )
  {
    v13 = (char *)*a1;
    v14 = (uint32_t *)v19;
    do
    {
      if ( v14 != nullptr )
        *v14 = *(uint32_t *)v13;
      v13 += 4;
      ++v14;
    }
    while ( v13 != src );
    v20 = v19 + 4 * ((unsigned int)(uintptr_t)(&src[-v12 - 4]) >> 2) + 8;
  }
  v15 = (char *)a1[1];
  if ( v15 != src )
  {
    v16 = src;
    v17 = (uint32_t *)v20;
    do
    {
      if ( v17 != nullptr )
        *v17 = *(uint32_t *)v16;
      v16 += 4;
      ++v17;
    }
    while ( v15 != v16 );
    v20 += 4 * ((unsigned int)(v15 - (src + 4)) >> 2) + 4;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v19;
  a1[1] = v20;
  a1[2] = v21 + v19;
  return v21 + v19;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_CAnimationTrackE_1acf22::M_insert_aux  (binary VA: 0xd84790)
// Original: std::vector<glitch::collada::CAnimationTrackEx const*,glitch::core::SAllocator<glitch::collada::CAnimationTrackEx const*,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_collada_CAnimationTrackE_1acf22::M_insert_aux(int *a1, char *src, int *a3)
{
  uint32_t *v3;
  int v4;
  int result;
  int v6;
  uint8_t *v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int *v11;
  int v12;
  char *v13;
  uint32_t *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;

  v3 = (uint32_t *)a1[1];
  if ( v3 != (uint32_t *)a1[2] )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a3;
    if ( result != 0 )
      result = (int)(uintptr_t)(memmove((void *)(v4 - 4 * result), src, 4 * result));
    *(uint32_t *)src = v6;
    return result;
  }
  v7 = (uint8_t *)*a1;
  v8 = ((int)(uintptr_t)(v3) - *a1) >> 2;
  if ( v8 != 0 )
  {
    v9 = 2 * v8;
    if ( v8 > 2 * v8 || v9 > 0x3FFFFFFF )
    {
      v21 = -4;
      v10 = (src - (char *)(v7)) >> 2;
    }
    else
    {
      v21 = 8 * v8;
      v10 = (src - (char *)(v7)) >> 2;
      if ( v9 == 0 )
      {
        v20 = 4;
        v19 = 0;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v21 = 4;
    v10 = (src - (char *)(v7)) >> 2;
  }
  v18 = v10;
  v19 = sub_4EBDC0(v21);
  v20 = v19 + 4;
  v10 = v18;
LABEL_11:
  v11 = (int *)(v19 + 4 * v10);
  if ( v11 != nullptr )
    *v11 = *a3;
  v12 = *a1;
  if ( (char *)*a1 != src )
  {
    v13 = (char *)*a1;
    v14 = (uint32_t *)v19;
    do
    {
      if ( v14 != nullptr )
        *v14 = *(uint32_t *)v13;
      v13 += 4;
      ++v14;
    }
    while ( v13 != src );
    v20 = v19 + 4 * ((unsigned int)(uintptr_t)(&src[-v12 - 4]) >> 2) + 8;
  }
  v15 = (char *)a1[1];
  if ( v15 != src )
  {
    v16 = src;
    v17 = (uint32_t *)v20;
    do
    {
      if ( v17 != nullptr )
        *v17 = *(uint32_t *)v16;
      v16 += 4;
      ++v17;
    }
    while ( v15 != v16 );
    v20 += 4 * ((unsigned int)(v15 - (src + 4)) >> 2) + 4;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v19;
  a1[1] = v20;
  a1[2] = v21 + v19;
  return v21 + v19;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_CColladaDatabase_d40bf5::M_insert_aux  (binary VA: 0xd84960)
// Original: std::vector<glitch::collada::CColladaDatabase,glitch::core::SAllocator<glitch::collada::CColladaDatabase,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_collada_CColladaDatabase_d40bf5::M_insert_aux(int *a1, int *a2, int *a3)
{
  int *v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int *v18;
  int *v19;
  int v20;
  bool v21;
  int v22;
  int *v23;
  uint32_t *v24;
  int *v25;
  int v26;
  int *v27;
  uint32_t *v28;
  int v29;
  int v30;
  int *v31;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int *_g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef size_t _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int *_g4_t_v44;
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
  typedef uint32_t _g4_t_v56[11];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v33)) > _g4_s1 ? (24u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v34)) > _g4_s2 ? (24u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v35)) > _g4_s3 ? (24u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v36)) > _g4_s4 ? (24u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v37)) > _g4_s5 ? (28u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v38)) > _g4_s6 ? (28u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v39)) > _g4_s7 ? (28u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v40)) > _g4_s8 ? (32u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v41)) > _g4_s9 ? (32u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v42)) > _g4_s10 ? (36u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v43)) > _g4_s11 ? (40u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v44)) > _g4_s12 ? (40u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v45)) > _g4_s13 ? (44u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v46)) > _g4_s14 ? (48u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v47)) > _g4_s15 ? (52u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v48)) > _g4_s16 ? (56u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v49)) > _g4_s17 ? (60u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v50)) > _g4_s18 ? (64u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v51)) > _g4_s19 ? (80u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v52)) > _g4_s20 ? (84u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v53)) > _g4_s21 ? (88u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v54)) > _g4_s22 ? (92u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v55)) > _g4_s23 ? (96u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v56)) > _g4_s24 ? (112u + sizeof(_g4_t_v56)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 112u);

  v3 = a2;
  v4 = (uint32_t *)a1[1];
  if ( v4 != (uint32_t *)a1[2] )
  {
    v5 = 0;
    if ( v4 != nullptr )
    {
      v6 = *(v4 - 5);
      *v4 = v6;
      if ( v6 != 0 )
      {
        v33 = v4;
        sub_8B1B00((volatile int32_t *)(v6 + 4));
        v4 = v33;
      }
      v4[1] = *(v4 - 4);
      v4[2] = 0;
      v4[3] = 0;
      v4[4] = 0;
      v5 = a1[1];
    }
    v40 = v5 + 20;
    a1[1] = v5 + 20;
    v7 = *a3;
    v46 = *a3;
    if ( v46 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v7 + 4));
      v40 = a1[1];
    }
    v8 = a3[1];
    v48 = 0;
    v47 = v8;
    v49 = 0;
    v50 = 0;
    v45 = -858993459 * ((v40 - 40 - (int)(uintptr_t)(a2)) >> 2);
    if ( v45 > 0 )
    {
      v9 = (int *)(v40 - 20);
      do
      {
        v9 -= 5;
        v10 = 0;
        v51 = *(v9 - 5);
        if ( v51 != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v51 + 4));
          v10 = v51;
        }
        v52 = *(v9 - 4);
        v53 = 0;
        v54 = 0;
        v55 = 0;
        v51 = *v9;
        *v9 = v10;
        v11 = v52;
        v52 = v9[1];
        v9[1] = v11;
        glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)&v51);
        --v45;
      }
      while ( v45 != 0 );
    }
    v12 = 0;
    v56[0] = v46;
    if ( v46 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v46 + 4));
      v12 = v56[0];
    }
    memset(&v56[2], 0, 12);
    v13 = *a2;
    *a2 = v12;
    v56[0] = v13;
    v56[1] = a2[1];
    a2[1] = v47;
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v56);
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)&v46);
    return;
  }
  v14 = (uint32_t *)*a1;
  v15 = -858993459 * (((int)(uintptr_t)(v4) - *a1) >> 2);
  if ( v15 != 0 )
  {
    v16 = 2 * v15;
    if ( v15 > 2 * v15 || v16 > 0xCCCCCCC )
    {
      v41 = 0xFFFFFFF0;
      v17 = -858993459 * (a2 - (int *)(v14));
    }
    else
    {
      v41 = 40 * v15;
      v17 = -858993459 * (a2 - (int *)(v14));
      if ( v16 == 0 )
      {
        v18 = (int *)(&dword_14);
        v42 = 0;
        goto LABEL_20;
      }
    }
  }
  else
  {
    v41 = 20;
    v17 = -858993459 * (a2 - (int *)(v14));
  }
  v37 = v17;
  v42 = sub_4EBDC0(v41);
  v17 = v37;
  v18 = (int *)(v42 + 20);
LABEL_20:
  v19 = (int *)(v42 + 20 * v17);
  if ( v19 != nullptr )
  {
    v20 = *a3;
    v21 = *a3 == 0;
    *v19 = *a3;
    if ( !v21 )
    {
      v34 = v18;
      v38 = v19;
      sub_8B1B00((volatile int32_t *)(v20 + 4));
      v19 = v38;
      v18 = v34;
    }
    v22 = a3[1];
    v19[2] = 0;
    v19[1] = v22;
    v19[3] = 0;
    v19[4] = 0;
  }
  v23 = (int *)*a1;
  if ( (int *)*a1 != a2 )
  {
    v24 = (uint32_t *)(v42 + 8);
    v25 = (int *)v42;
    do
    {
      if ( v25 != nullptr )
      {
        v26 = *v23;
        v21 = *v23 == 0;
        *v25 = *v23;
        if ( !v21 )
        {
          v39 = v24;
          sub_8B1B00((volatile int32_t *)(v26 + 4));
          v24 = v39;
        }
        v25[1] = v23[1];
        *v24 = 0;
        v24[1] = 0;
        v24[2] = 0;
      }
      v23 += 5;
      v25 += 5;
      v24 += 5;
    }
    while ( v23 != a2 );
    v27 = v25;
    v3 = a2;
    v18 = v27 + 5;
  }
  v43 = (int *)a1[1];
  if ( v43 != a2 )
  {
    v28 = (uint32_t *)(v18 + 2);
    do
    {
      if ( v18 != nullptr )
      {
        v29 = *v3;
        v21 = *v3 == 0;
        *v18 = *v3;
        if ( !v21 )
        {
          v35 = v18;
          sub_8B1B00((volatile int32_t *)(v29 + 4));
          v18 = v35;
        }
        v18[1] = v3[1];
        *v28 = 0;
        v28[1] = 0;
        v28[2] = 0;
      }
      v3 += 5;
      v18 += 5;
      v28 += 5;
    }
    while ( v43 != v3 );
    v43 = (int *)a1[1];
  }
  v30 = *a1;
  if ( (int *)*a1 != v43 )
  {
    v31 = v43;
    v44 = v18;
    do
    {
      v32 = (glitch::collada::CColladaDatabase::Self *)v30;
      v30 += 20;
      glitch::collada::CColladaDatabase::Destroy(v32);
    }
    while ( v31 != (int *)v30 );
    v18 = v44;
    v30 = *a1;
  }
  if ( v30 != 0 )
  {
    v36 = v18;
    gll_operator_delete_arr(v30);
    v18 = v36;
  }
  a1[1] = (int)(uintptr_t)(v18);
  *a1 = v42;
  a1[2] = v42 + v41;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_SChannel_SAlloca_303bdf::M_insert_aux  (binary VA: 0xd851c0)
// Original: std::vector<glitch::collada::SChannel,glitch::core::SAllocator<glitch::collada::SChannel,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_collada_SChannel_SAlloca_303bdf::M_insert_aux(int *a1, char *src, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int result;
  uint8_t *v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int *v12;
  int v13;
  char *v14;
  uint32_t *v15;
  char *v16;
  char *v17;
  uint32_t *v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v3 = (uint32_t *)a1[1];
  if ( v3 != (uint32_t *)a1[2] )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 3);
      v3[1] = *(v3 - 2);
      v3[2] = *(v3 - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 12;
    v23 = *a3;
    v24 = a3[1];
    v25 = a3[2];
    v5 = (v4 - 12 - (int)(uintptr_t)(src)) >> 2;
    if ( -1431655765 * v5 != 0 )
      memmove((void *)(v4 - 4 * v5), src, 4 * v5);
    *(uint32_t *)src = v23;
    *((uint32_t *)src + 1) = v24;
    result = v25;
    *((uint32_t *)src + 2) = v25;
    return result;
  }
  v7 = (uint8_t *)*a1;
  v8 = ((int)(uintptr_t)(v3) - *a1) >> 2;
  v9 = -1431655765 * v8;
  if ( -1431655765 * v8 != 0 )
  {
    v10 = 1431655766 * v8;
    if ( v9 > 2 * v9 || v10 > 0x15555555 )
    {
      v22 = -4;
      v11 = -1431655765 * ((src - (char *)(v7)) >> 2);
    }
    else
    {
      v22 = 24 * v9;
      v11 = -1431655765 * ((src - (char *)(v7)) >> 2);
      if ( v10 == 0 )
      {
        v21 = 12;
        v20 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v22 = 12;
    v11 = -1431655765 * ((src - (char *)(v7)) >> 2);
  }
  v19 = v11;
  v20 = sub_4EBDC0(v22);
  v21 = v20 + 12;
  v11 = v19;
LABEL_12:
  v12 = (int *)(v20 + 12 * v11);
  if ( v12 != nullptr )
  {
    *v12 = *a3;
    v12[1] = a3[1];
    v12[2] = a3[2];
  }
  v13 = *a1;
  if ( (char *)*a1 != src )
  {
    v14 = (char *)*a1;
    v15 = (uint32_t *)v20;
    do
    {
      if ( v15 != nullptr )
      {
        *v15 = *(uint32_t *)v14;
        v15[1] = *((uint32_t *)v14 + 1);
        v15[2] = *((uint32_t *)v14 + 2);
      }
      v14 += 12;
      v15 += 3;
    }
    while ( v14 != src );
    v21 = v20 + 4 * ((unsigned int)(uintptr_t)(&src[-v13 - 12]) >> 2) + 24;
  }
  v16 = (char *)a1[1];
  if ( v16 != src )
  {
    v17 = src;
    v18 = (uint32_t *)v21;
    do
    {
      if ( v18 != nullptr )
      {
        *v18 = *(uint32_t *)v17;
        v18[1] = *((uint32_t *)v17 + 1);
        v18[2] = *((uint32_t *)v17 + 2);
      }
      v17 += 12;
      v18 += 3;
    }
    while ( v16 != v17 );
    v21 += 4 * ((unsigned int)(v16 - (src + 12)) >> 2) + 12;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v20;
  a1[1] = v21;
  a1[2] = v22 + v20;
  return v22 + v20;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_CMatrix4_float_const_SAl_065dde::M_fill_insert  (binary VA: 0xd862b0)
// Original: std::vector<glitch::core::CMatrix4<float> const*,glitch::core::SAllocator<glitch::core::CMatrix4<float> const*,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_CMatrix4_float_const_SAl_065dde::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int *v11;
  unsigned int i;
  uint32_t *v13;
  char *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  char *v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int *v24;
  unsigned int j;
  __m128i *v26;
  __m128i v27;
  unsigned int v28;
  size_t v29;
  unsigned int v30;
  unsigned int *v31;
  unsigned int *v32;
  unsigned int *v33;
  unsigned int v34;
  bool v35;
  unsigned int *v36;
  unsigned int v37;
  __m128i v38;
  unsigned int v39;
  __m128i *v40;
  unsigned int *v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  uint32_t *v46;
  unsigned int *v47;
  uint8_t *v48;
  int v49;
  unsigned int v50;
  int v51;
  char *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 > (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v48 = (uint8_t *)*a1;
    v5 = ((int)(uintptr_t)(v4) - *a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = v5;
    v7 = __CFADD__(v6, v5);
    v8 = v6 + v5;
    if ( v7 || v8 > 0x3FFFFFFF )
    {
      v44 = -4;
      v29 = 0xFFFFFFFC;
      v9 = (src - (char *)(v48)) >> 2;
    }
    else
    {
      v9 = (src - (char *)(v48)) >> 2;
      if ( v8 == 0 )
      {
        v49 = 0;
        v44 = 0;
        v10 = 0;
        goto LABEL_10;
      }
      v44 = 4 * v8;
      v29 = 4 * v8;
    }
    v42 = v9;
    v49 = sub_4EBDC0(v29);
    v9 = v42;
    v10 = v49;
LABEL_10:
    v11 = (unsigned int *)(v10 + 4 * v9);
    for ( i = a3; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v13 = (uint32_t *)v49;
    v45 = *a1;
    if ( (char *)*a1 != src )
    {
      v14 = (char *)*a1;
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v14;
        v14 += 4;
        ++v13;
      }
      while ( v14 != src );
      v13 = (uint32_t *)(v49 + 4 * ((unsigned int)(uintptr_t)(&src[-v45 - 4]) >> 2) + 4);
    }
    v46 = &v13[a3];
    v15 = (char *)a1[1];
    if ( v15 != src )
    {
      v16 = src;
      v17 = &v13[a3];
      do
      {
        if ( v17 != nullptr )
          *v17 = *(uint32_t *)v16;
        v16 += 4;
        ++v17;
      }
      while ( v15 != v16 );
      v46 += ((unsigned int)(v15 - (src + 4)) >> 2) + 1;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v49;
    a1[1] = (int)(uintptr_t)(v46);
    a1[2] = v44 + v49;
    return;
  }
  v18 = *a4;
  v50 = ((char *)v4 - src) >> 2;
  if ( a3 >= v50 )
  {
    v30 = a3 - v50;
    v31 = (unsigned int *)a1[1];
    if ( a3 != v50 )
    {
      do
      {
        if ( v31 != nullptr )
          *v31 = v18;
        ++v31;
        --v30;
      }
      while ( v30 != 0 );
      v31 = (unsigned int *)a1[1];
      v30 = a3 - v50;
    }
    v32 = &v31[v30];
    a1[1] = (int)(uintptr_t)(v32);
    if ( v4 == (unsigned int *)src )
    {
      a1[1] = (int)(uintptr_t)(&v32[v50]);
    }
    else
    {
      v33 = (unsigned int *)src;
      do
      {
        if ( v32 != nullptr )
          *v32 = *v33;
        ++v33;
        ++v32;
      }
      while ( v4 != v33 );
      a1[1] += 4 * v50;
      v56 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v34 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      if ( v34 > v56 )
        v34 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v35 = v34 == 0;
      v53 = v34;
      v36 = (unsigned int *)src;
      if ( v35 )
        goto LABEL_82;
      v37 = 0;
      do
      {
        ++v37;
        *v36++ = v18;
      }
      while ( v53 > v37 );
      if ( v56 != v53 )
      {
LABEL_82:
        v57 = v56 - v53;
        if ( 4 * (v57 >> 2) == 0 )
          goto LABEL_83;
        v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v39 = 0;
        v40 = (__m128i *)&src[4 * v53];
        do
        {
          ++v39;
          *v40++ = v38;
        }
        while ( v39 < v57 >> 2 );
        v36 += 4 * (v57 >> 2);
        if ( v57 != 4 * (v57 >> 2) )
        {
LABEL_83:
          do
          {
            *v36 = v18;
            v41 = v36 + 1;
            if ( v4 == v41 )
              break;
            *v41 = v18;
            v36 = v41 + 1;
          }
          while ( v4 != v36 );
        }
      }
    }
  }
  else
  {
    v51 = 4 * a3;
    v47 = &v4[-a3];
    v19 = (unsigned int *)a1[1];
    if ( v4 != v47 )
    {
      v20 = &v4[-a3];
      do
      {
        if ( v19 != nullptr )
          *v19 = *v20;
        ++v20;
        ++v19;
      }
      while ( v4 != v20 );
      v19 = (unsigned int *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(&v19[v51 / 4u]);
    if ( ((char *)v47 - src) >> 2 != 0 )
    {
      v43 = v18;
      memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      v18 = v43;
    }
    v21 = &src[v51];
    v52 = &src[v51];
    if ( v52 != src )
    {
      v22 = ((unsigned int)(v21 - (src + 4)) >> 2) + 1;
      v23 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      v54 = v22;
      if ( v22 <= v23 )
        v23 = v22;
      v24 = (unsigned int *)src;
      if ( v23 == 0 )
        goto LABEL_84;
      for ( j = 0; j < v23; ++j )
        *v24++ = v18;
      if ( v54 != v23 )
      {
LABEL_84:
        v55 = v54 - v23;
        if ( 4 * (v55 >> 2) == 0 )
          goto LABEL_85;
        v26 = (__m128i *)&src[4 * v23];
        v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v28 = 0;
        do
        {
          ++v28;
          *v26++ = v27;
        }
        while ( v28 < v55 >> 2 );
        v24 += 4 * (v55 >> 2);
        if ( v55 != 4 * (v55 >> 2) )
        {
LABEL_85:
          do
            *v24++ = v18;
          while ( v52 != (char *)v24 );
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_CForceSceneNode_aba004::M_fill_insert  (binary VA: 0xd86730)
// Original: std::vector<glitch::collada::CForceSceneNode *,glitch::core::SAllocator<glitch::collada::CForceSceneNode *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_collada_CForceSceneNode_aba004::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int *v11;
  unsigned int i;
  uint32_t *v13;
  char *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  char *v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int *v24;
  unsigned int j;
  __m128i *v26;
  __m128i v27;
  unsigned int v28;
  size_t v29;
  unsigned int v30;
  unsigned int *v31;
  unsigned int *v32;
  unsigned int *v33;
  unsigned int v34;
  bool v35;
  unsigned int *v36;
  unsigned int v37;
  __m128i v38;
  unsigned int v39;
  __m128i *v40;
  unsigned int *v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  uint32_t *v46;
  unsigned int *v47;
  uint8_t *v48;
  int v49;
  unsigned int v50;
  int v51;
  char *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 > (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v48 = (uint8_t *)*a1;
    v5 = ((int)(uintptr_t)(v4) - *a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = v5;
    v7 = __CFADD__(v6, v5);
    v8 = v6 + v5;
    if ( v7 || v8 > 0x3FFFFFFF )
    {
      v44 = -4;
      v29 = 0xFFFFFFFC;
      v9 = (src - (char *)(v48)) >> 2;
    }
    else
    {
      v9 = (src - (char *)(v48)) >> 2;
      if ( v8 == 0 )
      {
        v49 = 0;
        v44 = 0;
        v10 = 0;
        goto LABEL_10;
      }
      v44 = 4 * v8;
      v29 = 4 * v8;
    }
    v42 = v9;
    v49 = sub_4EBDC0(v29);
    v9 = v42;
    v10 = v49;
LABEL_10:
    v11 = (unsigned int *)(v10 + 4 * v9);
    for ( i = a3; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v13 = (uint32_t *)v49;
    v45 = *a1;
    if ( (char *)*a1 != src )
    {
      v14 = (char *)*a1;
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v14;
        v14 += 4;
        ++v13;
      }
      while ( v14 != src );
      v13 = (uint32_t *)(v49 + 4 * ((unsigned int)(uintptr_t)(&src[-v45 - 4]) >> 2) + 4);
    }
    v46 = &v13[a3];
    v15 = (char *)a1[1];
    if ( v15 != src )
    {
      v16 = src;
      v17 = &v13[a3];
      do
      {
        if ( v17 != nullptr )
          *v17 = *(uint32_t *)v16;
        v16 += 4;
        ++v17;
      }
      while ( v15 != v16 );
      v46 += ((unsigned int)(v15 - (src + 4)) >> 2) + 1;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v49;
    a1[1] = (int)(uintptr_t)(v46);
    a1[2] = v44 + v49;
    return;
  }
  v18 = *a4;
  v50 = ((char *)v4 - src) >> 2;
  if ( a3 >= v50 )
  {
    v30 = a3 - v50;
    v31 = (unsigned int *)a1[1];
    if ( a3 != v50 )
    {
      do
      {
        if ( v31 != nullptr )
          *v31 = v18;
        ++v31;
        --v30;
      }
      while ( v30 != 0 );
      v31 = (unsigned int *)a1[1];
      v30 = a3 - v50;
    }
    v32 = &v31[v30];
    a1[1] = (int)(uintptr_t)(v32);
    if ( v4 == (unsigned int *)src )
    {
      a1[1] = (int)(uintptr_t)(&v32[v50]);
    }
    else
    {
      v33 = (unsigned int *)src;
      do
      {
        if ( v32 != nullptr )
          *v32 = *v33;
        ++v33;
        ++v32;
      }
      while ( v4 != v33 );
      a1[1] += 4 * v50;
      v56 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v34 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      if ( v34 > v56 )
        v34 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v35 = v34 == 0;
      v53 = v34;
      v36 = (unsigned int *)src;
      if ( v35 )
        goto LABEL_82;
      v37 = 0;
      do
      {
        ++v37;
        *v36++ = v18;
      }
      while ( v53 > v37 );
      if ( v56 != v53 )
      {
LABEL_82:
        v57 = v56 - v53;
        if ( 4 * (v57 >> 2) == 0 )
          goto LABEL_83;
        v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v39 = 0;
        v40 = (__m128i *)&src[4 * v53];
        do
        {
          ++v39;
          *v40++ = v38;
        }
        while ( v39 < v57 >> 2 );
        v36 += 4 * (v57 >> 2);
        if ( v57 != 4 * (v57 >> 2) )
        {
LABEL_83:
          do
          {
            *v36 = v18;
            v41 = v36 + 1;
            if ( v4 == v41 )
              break;
            *v41 = v18;
            v36 = v41 + 1;
          }
          while ( v4 != v36 );
        }
      }
    }
  }
  else
  {
    v51 = 4 * a3;
    v47 = &v4[-a3];
    v19 = (unsigned int *)a1[1];
    if ( v4 != v47 )
    {
      v20 = &v4[-a3];
      do
      {
        if ( v19 != nullptr )
          *v19 = *v20;
        ++v20;
        ++v19;
      }
      while ( v4 != v20 );
      v19 = (unsigned int *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(&v19[v51 / 4u]);
    if ( ((char *)v47 - src) >> 2 != 0 )
    {
      v43 = v18;
      memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      v18 = v43;
    }
    v21 = &src[v51];
    v52 = &src[v51];
    if ( v52 != src )
    {
      v22 = ((unsigned int)(v21 - (src + 4)) >> 2) + 1;
      v23 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      v54 = v22;
      if ( v22 <= v23 )
        v23 = v22;
      v24 = (unsigned int *)src;
      if ( v23 == 0 )
        goto LABEL_84;
      for ( j = 0; j < v23; ++j )
        *v24++ = v18;
      if ( v54 != v23 )
      {
LABEL_84:
        v55 = v54 - v23;
        if ( 4 * (v55 >> 2) == 0 )
          goto LABEL_85;
        v26 = (__m128i *)&src[4 * v23];
        v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v28 = 0;
        do
        {
          ++v28;
          *v26++ = v27;
        }
        while ( v28 < v55 >> 2 );
        v24 += 4 * (v55 >> 2);
        if ( v55 != 4 * (v55 >> 2) )
        {
LABEL_85:
          do
            *v24++ = v18;
          while ( v52 != (char *)v24 );
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_animation_track_b04b0a::M_fill_insert  (binary VA: 0xd88580)
// Original: std::vector<glitch::collada::animation_track::CApplicatorInfo *,glitch::core::SAllocator<glitch::collada::animation_track::CApplicatorInfo *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_collada_animation_track_b04b0a::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int *v11;
  unsigned int i;
  uint32_t *v13;
  char *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  char *v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int *v24;
  unsigned int j;
  __m128i *v26;
  __m128i v27;
  unsigned int v28;
  size_t v29;
  unsigned int v30;
  unsigned int *v31;
  unsigned int *v32;
  unsigned int *v33;
  unsigned int v34;
  bool v35;
  unsigned int *v36;
  unsigned int v37;
  __m128i v38;
  unsigned int v39;
  __m128i *v40;
  unsigned int *v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  uint32_t *v46;
  unsigned int *v47;
  uint8_t *v48;
  int v49;
  unsigned int v50;
  int v51;
  char *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 > (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v48 = (uint8_t *)*a1;
    v5 = ((int)(uintptr_t)(v4) - *a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = v5;
    v7 = __CFADD__(v6, v5);
    v8 = v6 + v5;
    if ( v7 || v8 > 0x3FFFFFFF )
    {
      v44 = -4;
      v29 = 0xFFFFFFFC;
      v9 = (src - (char *)(v48)) >> 2;
    }
    else
    {
      v9 = (src - (char *)(v48)) >> 2;
      if ( v8 == 0 )
      {
        v49 = 0;
        v44 = 0;
        v10 = 0;
        goto LABEL_10;
      }
      v44 = 4 * v8;
      v29 = 4 * v8;
    }
    v42 = v9;
    v49 = sub_4EBDC0(v29);
    v9 = v42;
    v10 = v49;
LABEL_10:
    v11 = (unsigned int *)(v10 + 4 * v9);
    for ( i = a3; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v13 = (uint32_t *)v49;
    v45 = *a1;
    if ( (char *)*a1 != src )
    {
      v14 = (char *)*a1;
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v14;
        v14 += 4;
        ++v13;
      }
      while ( v14 != src );
      v13 = (uint32_t *)(v49 + 4 * ((unsigned int)(uintptr_t)(&src[-v45 - 4]) >> 2) + 4);
    }
    v46 = &v13[a3];
    v15 = (char *)a1[1];
    if ( v15 != src )
    {
      v16 = src;
      v17 = &v13[a3];
      do
      {
        if ( v17 != nullptr )
          *v17 = *(uint32_t *)v16;
        v16 += 4;
        ++v17;
      }
      while ( v15 != v16 );
      v46 += ((unsigned int)(v15 - (src + 4)) >> 2) + 1;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v49;
    a1[1] = (int)(uintptr_t)(v46);
    a1[2] = v44 + v49;
    return;
  }
  v18 = *a4;
  v50 = ((char *)v4 - src) >> 2;
  if ( a3 >= v50 )
  {
    v30 = a3 - v50;
    v31 = (unsigned int *)a1[1];
    if ( a3 != v50 )
    {
      do
      {
        if ( v31 != nullptr )
          *v31 = v18;
        ++v31;
        --v30;
      }
      while ( v30 != 0 );
      v31 = (unsigned int *)a1[1];
      v30 = a3 - v50;
    }
    v32 = &v31[v30];
    a1[1] = (int)(uintptr_t)(v32);
    if ( v4 == (unsigned int *)src )
    {
      a1[1] = (int)(uintptr_t)(&v32[v50]);
    }
    else
    {
      v33 = (unsigned int *)src;
      do
      {
        if ( v32 != nullptr )
          *v32 = *v33;
        ++v33;
        ++v32;
      }
      while ( v4 != v33 );
      a1[1] += 4 * v50;
      v56 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v34 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      if ( v34 > v56 )
        v34 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v35 = v34 == 0;
      v53 = v34;
      v36 = (unsigned int *)src;
      if ( v35 )
        goto LABEL_82;
      v37 = 0;
      do
      {
        ++v37;
        *v36++ = v18;
      }
      while ( v53 > v37 );
      if ( v56 != v53 )
      {
LABEL_82:
        v57 = v56 - v53;
        if ( 4 * (v57 >> 2) == 0 )
          goto LABEL_83;
        v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v39 = 0;
        v40 = (__m128i *)&src[4 * v53];
        do
        {
          ++v39;
          *v40++ = v38;
        }
        while ( v39 < v57 >> 2 );
        v36 += 4 * (v57 >> 2);
        if ( v57 != 4 * (v57 >> 2) )
        {
LABEL_83:
          do
          {
            *v36 = v18;
            v41 = v36 + 1;
            if ( v4 == v41 )
              break;
            *v41 = v18;
            v36 = v41 + 1;
          }
          while ( v4 != v36 );
        }
      }
    }
  }
  else
  {
    v51 = 4 * a3;
    v47 = &v4[-a3];
    v19 = (unsigned int *)a1[1];
    if ( v4 != v47 )
    {
      v20 = &v4[-a3];
      do
      {
        if ( v19 != nullptr )
          *v19 = *v20;
        ++v20;
        ++v19;
      }
      while ( v4 != v20 );
      v19 = (unsigned int *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(&v19[v51 / 4u]);
    if ( ((char *)v47 - src) >> 2 != 0 )
    {
      v43 = v18;
      memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      v18 = v43;
    }
    v21 = &src[v51];
    v52 = &src[v51];
    if ( v52 != src )
    {
      v22 = ((unsigned int)(v21 - (src + 4)) >> 2) + 1;
      v23 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      v54 = v22;
      if ( v22 <= v23 )
        v23 = v22;
      v24 = (unsigned int *)src;
      if ( v23 == 0 )
        goto LABEL_84;
      for ( j = 0; j < v23; ++j )
        *v24++ = v18;
      if ( v54 != v23 )
      {
LABEL_84:
        v55 = v54 - v23;
        if ( 4 * (v55 >> 2) == 0 )
          goto LABEL_85;
        v26 = (__m128i *)&src[4 * v23];
        v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v28 = 0;
        do
        {
          ++v28;
          *v26++ = v27;
        }
        while ( v28 < v55 >> 2 );
        v24 += 4 * (v55 >> 2);
        if ( v55 != 4 * (v55 >> 2) )
        {
LABEL_85:
          do
            *v24++ = v18;
          while ( v52 != (char *)v24 );
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_collada_SChannel_const_S_730378::M_fill_insert  (binary VA: 0xd88a00)
// Original: std::vector<glitch::collada::SChannel const*,glitch::core::SAllocator<glitch::collada::SChannel const*,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_collada_SChannel_const_S_730378::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_vector3d_float_SAllocato_a26dcf::M_insert_aux  (binary VA: 0xde40b0)
// Original: std::vector<glitch::core::vector3d<float>,glitch::core::SAllocator<glitch::core::vector3d<float>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
uint32_t * g4_std::vector_vector3d_float_SAllocato_a26dcf::M_insert_aux(int *a1, char *a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *result;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int *v14;
  int v15;
  char *v16;
  uint32_t *v17;
  char *v18;
  char *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;

  v3 = (uint32_t *)a1[1];
  if ( v3 != (uint32_t *)a1[2] )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 3);
      v3[1] = *(v3 - 2);
      v3[2] = *(v3 - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 12;
    result = (uint32_t *)(v4 - 12);
    v6 = *a3;
    v7 = -1431655765 * ((v4 - 12 - (int)(uintptr_t)(a2)) >> 2);
    v22 = a3[1];
    v24 = a3[2];
    if ( v7 > 0 )
    {
      v8 = (uint32_t *)(v4 - 24);
      do
      {
        --v7;
        *result = *v8;
        result[1] = v8[1];
        result[2] = v8[2];
        v8 -= 3;
        result -= 3;
      }
      while ( v7 != 0 );
    }
    *(uint32_t *)a2 = v6;
    *((uint32_t *)a2 + 1) = v22;
    *((uint32_t *)a2 + 2) = v24;
    return result;
  }
  v9 = *a1;
  v10 = ((int)(uintptr_t)(v3) - *a1) >> 2;
  v11 = -1431655765 * v10;
  if ( -1431655765 * v10 != 0 )
  {
    v12 = 1431655766 * v10;
    if ( v11 > 2 * v11 || v12 > 0x15555555 )
    {
      v26 = -4;
      v13 = -1431655765 * ((int)(uintptr_t)(&a2[-v9]) >> 2);
    }
    else
    {
      v26 = 24 * v11;
      v13 = -1431655765 * ((int)(uintptr_t)(&a2[-v9]) >> 2);
      if ( v12 == 0 )
      {
        v25 = 12;
        v23 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v26 = 12;
    v13 = -1431655765 * ((int)(uintptr_t)(&a2[-v9]) >> 2);
  }
  v21 = v13;
  v23 = sub_4EBDC0(v26);
  v25 = v23 + 12;
  v13 = v21;
LABEL_12:
  v14 = (int *)(v23 + 12 * v13);
  if ( v14 != nullptr )
  {
    *v14 = *a3;
    v14[1] = a3[1];
    v14[2] = a3[2];
  }
  v15 = *a1;
  if ( (char *)*a1 != a2 )
  {
    v16 = (char *)*a1;
    v17 = (uint32_t *)v23;
    do
    {
      if ( v17 != nullptr )
      {
        *v17 = *(uint32_t *)v16;
        v17[1] = *((uint32_t *)v16 + 1);
        v17[2] = *((uint32_t *)v16 + 2);
      }
      v16 += 12;
      v17 += 3;
    }
    while ( v16 != a2 );
    v25 = v23 + 4 * ((unsigned int)(uintptr_t)(&a2[-v15 - 12]) >> 2) + 24;
  }
  v18 = (char *)a1[1];
  if ( v18 != a2 )
  {
    v19 = a2;
    v20 = (uint32_t *)v25;
    do
    {
      if ( v20 != nullptr )
      {
        *v20 = *(uint32_t *)v19;
        v20[1] = *((uint32_t *)v19 + 1);
        v20[2] = *((uint32_t *)v19 + 2);
      }
      v19 += 12;
      v20 += 3;
    }
    while ( v18 != v19 );
    v25 += 4 * ((unsigned int)(v18 - (a2 + 12)) >> 2) + 12;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v23;
  a1[1] = v25;
  a1[2] = v26 + v23;
  return (uint32_t *)(v26 + v23);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_CKdTree_pair_unsigned_in_6b1645::M_insert_aux  (binary VA: 0xdee070)
// Original: std::vector<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::allocator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_CKdTree_pair_unsigned_in_6b1645::M_insert_aux(int a1, uint32_t *src, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  char *dest;
  int v14;
  int v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  int v25;
  char *v26;
  int v27;

  v3 = *(uint32_t **)(a1 + 4);
  if ( v3 != *(uint32_t **)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      v5 = *(v3 - 1);
      *v3 = *(v3 - 2);
      v3[1] = v5;
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 8;
    v6 = (v4 - 8 - (int)(uintptr_t)(src)) >> 3;
    v7 = *a3;
    v8 = a3[1];
    if ( v6 != 0 )
      memmove((void *)(v4 - 8 * v6), src, 8 * v6);
    *src = v7;
    src[1] = v8;
    return;
  }
  v9 = *(uint8_t **)a1;
  v10 = ((int)(uintptr_t)(v3) - *(uint32_t *)a1) >> 3;
  if ( v10 != 0 )
  {
    v11 = 2 * v10;
    if ( v10 > 2 * v10 || v11 > 0x1FFFFFFF )
    {
      v27 = -8;
      v12 = ((char *)src - (char *)(v9)) >> 3;
    }
    else
    {
      v27 = 16 * v10;
      dest = nullptr;
      v12 = ((char *)src - (char *)(v9)) >> 3;
      if ( v11 == 0 )
        goto LABEL_11;
    }
  }
  else
  {
    v27 = 8;
    v12 = ((char *)src - (char *)(v9)) >> 3;
  }
  v25 = v12;
  dest = (char *)opNew(v27);
  v12 = v25;
LABEL_11:
  v21 = &dest[8 * v12];
  if ( v21 != nullptr )
  {
    v14 = a3[1];
    *(uint32_t *)v21 = *a3;
    *((uint32_t *)v21 + 1) = v14;
  }
  v15 = 0;
  v16 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 3;
  if ( v16 != 0 )
  {
    v15 = 8 * v16;
    v23 = dest;
    memmove(dest, *(const void **)a1, 8 * v16);
    dest = v23;
  }
  v17 = &dest[v15 + 8];
  v18 = 0;
  v19 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 3;
  if ( v19 != 0 )
  {
    v18 = 8 * v19;
    v26 = v17;
    v24 = dest;
    memmove(v17, src, 8 * v19);
    dest = v24;
    v17 = v26;
  }
  v20 = &v17[v18];
  if ( *(uint32_t *)a1 != 0 )
  {
    v22 = dest;
    opDelete(*(void **)a1);
    dest = v22;
  }
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v20);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v27]);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_SIDedCollection_video_SS_3b91c7::M_fill_insert  (binary VA: 0xe713a0)
// Original: std::vector<glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef,unsigned short,false,glitch::video::detail::globalmaterialparametermanager::SPropeties,glitch::video::detail::globalmaterialparametermanager::SValueTraits,1>::CEntry *,glitch::core::SAllocator<glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef,unsigned short,false,glitch::video::detail::globalmaterialparametermanager::SPropeties,glitch::video::detail::globalmaterialparametermanager::SValueTraits,1>::CEntry *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_SIDedCollection_video_SS_3b91c7::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_SIDedCollection_intrusiv_856a1b::M_fill_insert  (binary VA: 0xe717e0)
// Original: std::vector<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture>,unsigned short,false,glitch::video::detail::SLookupTableProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,glitch::core::SAllocator<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture>,unsigned short,false,glitch::video::detail::SLookupTableProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_SIDedCollection_intrusiv_856a1b::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_SIDedCollection_intrusiv_ebda36::M_fill_insert  (binary VA: 0xe71c20)
// Original: std::vector<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,glitch::core::SAllocator<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_SIDedCollection_intrusiv_ebda36::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_SIDedCollection_intrusiv_3b59c9::M_fill_insert  (binary VA: 0xe72120)
// Original: std::vector<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,glitch::core::SAllocator<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_SIDedCollection_intrusiv_3b59c9::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_SIDedCollection_intrusiv_0a2c9b::M_fill_insert  (binary VA: 0xe72560)
// Original: std::vector<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShaderCode>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,glitch::core::SAllocator<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShaderCode>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_SIDedCollection_intrusiv_0a2c9b::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_SIDedCollection_intrusiv_bedd80::M_fill_insert  (binary VA: 0xe72cd0)
// Original: std::vector<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShader>,unsigned short,false,glitch::video::detail::shadermanager::SShaderProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,glitch::core::SAllocator<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShader>,unsigned short,false,glitch::video::detail::shadermanager::SShaderProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_SIDedCollection_intrusiv_bedd80::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_SIDedCollection_intrusiv_9bf660::M_fill_insert  (binary VA: 0xe73440)
// Original: std::vector<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::CEntry *,glitch::core::SAllocator<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::CEntry *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_SIDedCollection_intrusiv_9bf660::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_io_SZIPCDFileHeader_SAll_6e772f::M_insert_aux  (binary VA: 0xe977e0)
// Original: std::vector<glitch::io::SZIPCDFileHeader,glitch::core::SAllocator<glitch::io::SZIPCDFileHeader,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
char * g4_std::vector_io_SZIPCDFileHeader_SAll_6e772f::M_insert_aux(int *a1, char *src, int *a3)
{
  int v3;
  char *result;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int16_t v20;
  int v21;
  int16_t v22;
  int16_t v23;
  int v24;
  int v25;
  int v26;
  int16_t v27;
  int16_t v28;
  int16_t v29;
  int16_t v30;
  int16_t v31;
  int16_t v32;
  int v33;
  int16_t v34;
  int16_t v35;

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    result = nullptr;
    if ( v3 != 0 )
    {
      *(uint32_t *)v3 = *(uint32_t *)(v3 - 46);
      *(uint32_t *)(v3 + 4) = *(uint32_t *)(v3 - 42);
      *(uint32_t *)(v3 + 8) = *(uint32_t *)(v3 - 38);
      *(uint32_t *)(v3 + 12) = *(uint32_t *)(v3 - 34);
      *(uint32_t *)(v3 + 16) = *(uint32_t *)(v3 - 30);
      *(uint32_t *)(v3 + 20) = *(uint32_t *)(v3 - 26);
      *(uint32_t *)(v3 + 24) = *(uint32_t *)(v3 - 22);
      *(uint32_t *)(v3 + 28) = *(uint32_t *)(v3 - 18);
      *(uint32_t *)(v3 + 32) = *(uint32_t *)(v3 - 14);
      *(uint32_t *)(v3 + 36) = *(uint32_t *)(v3 - 10);
      *(uint32_t *)(v3 + 40) = *(uint32_t *)(v3 - 6);
      *(uint16_t *)(v3 + 44) = *(uint16_t *)(v3 - 2);
      result = (char *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(result + 46);
    v5 = *a3;
    v20 = *((uint16_t *)a3 + 2);
    v22 = *((uint16_t *)a3 + 3);
    v28 = *((uint16_t *)a3 + 4);
    v32 = *((uint16_t *)a3 + 5);
    v23 = *((uint16_t *)a3 + 6);
    v29 = *((uint16_t *)a3 + 7);
    v33 = a3[4];
    v24 = a3[5];
    v25 = a3[6];
    v30 = *((uint16_t *)a3 + 14);
    v34 = *((uint16_t *)a3 + 15);
    v27 = *((uint16_t *)a3 + 16);
    v31 = *((uint16_t *)a3 + 17);
    v35 = *((uint16_t *)a3 + 18);
    v26 = *(int *)((char *)a3 + 38);
    v6 = *(int *)((char *)a3 + 42);
    v7 = (result - 46 - src) >> 1;
    if ( -373475417 * v7 != 0 )
    {
      v17 = *a3;
      result = (char *)memmove(&result[-2 * v7], src, 2 * v7);
      v5 = v17;
    }
    *(uint32_t *)src = v5;
    *((uint16_t *)src + 2) = v20;
    *((uint16_t *)src + 3) = v22;
    *((uint16_t *)src + 4) = v28;
    *((uint16_t *)src + 5) = v32;
    *((uint16_t *)src + 6) = v23;
    *((uint16_t *)src + 7) = v29;
    *((uint32_t *)src + 4) = v33;
    *((uint32_t *)src + 5) = v24;
    *((uint32_t *)src + 6) = v25;
    *((uint16_t *)src + 14) = v30;
    *((uint16_t *)src + 15) = v34;
    *((uint16_t *)src + 16) = v27;
    *((uint16_t *)src + 17) = v31;
    *((uint16_t *)src + 18) = v35;
    *(uint32_t *)(src + 38) = v26;
    *(uint32_t *)(src + 42) = v6;
    return result;
  }
  v8 = *a1;
  v9 = -373475417 * ((v3 - *a1) >> 1);
  if ( v9 != 0 )
  {
    v10 = 2 * v9;
    if ( v9 > 2 * v9 || v10 > 0x590B216 )
    {
      v21 = -12;
      v11 = -373475417 * ((int)(uintptr_t)(&src[-v8]) >> 1);
    }
    else
    {
      v21 = 92 * v9;
      v12 = 0;
      v11 = -373475417 * ((int)(uintptr_t)(&src[-v8]) >> 1);
      if ( v10 == 0 )
        goto LABEL_11;
    }
  }
  else
  {
    v21 = 46;
    v11 = -373475417 * ((int)(uintptr_t)(&src[-v8]) >> 1);
  }
  v18 = v11;
  v12 = sub_4EBDC0(v21);
  v11 = v18;
LABEL_11:
  v13 = v12 + 46 * v11;
  if ( v13 != 0 )
  {
    *(uint32_t *)v13 = *a3;
    *(uint32_t *)(v13 + 4) = a3[1];
    *(uint32_t *)(v13 + 8) = a3[2];
    *(uint32_t *)(v13 + 12) = a3[3];
    *(uint32_t *)(v13 + 16) = a3[4];
    *(uint32_t *)(v13 + 20) = a3[5];
    *(uint32_t *)(v13 + 24) = a3[6];
    *(uint32_t *)(v13 + 28) = a3[7];
    *(uint32_t *)(v13 + 32) = a3[8];
    *(uint32_t *)(v13 + 36) = a3[9];
    *(uint32_t *)(v13 + 40) = a3[10];
    *(uint16_t *)(v13 + 44) = *((uint16_t *)a3 + 22);
  }
  v19 = v12;
  v14 = sub_E86480(*a1, (int)(uintptr_t)(src), v12);
  result = (char *)sub_E86480((int)(uintptr_t)(src), a1[1], v14 + 46);
  v15 = (int)(uintptr_t)(result);
  v16 = v19;
  if ( *a1 != 0 )
  {
    result = (char *)gll_operator_delete_arr(*a1);
    v16 = v19;
  }
  *a1 = v16;
  a1[1] = v15;
  a1[2] = v21 + v16;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_vector3d_float_e112fa::opAssign  (binary VA: 0xf06a50)
// Original: std::vector<glitch::core::vector3d<float>>::operator=
// ----------------------------------------------------------------------------
std::vector<glitch::core::vector3d<float>> * g4_std::vector_vector3d_float_e112fa::opAssign(std::vector<glitch::core::vector3d<float>> *self, const std::vector<glitch::core::vector3d<float>> *a2)
{
  std::vector<glitch::core::vector3d<float>> *result;
  uint32_t *v3;
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  int v7;
  int v8;
  unsigned int v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  __m128 v21;
  __m128 v22;
  __m128 v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;

  result = self;
  if ( a2 != self )
  {
    v3 = *(uint32_t **)a2;
    v27 = *((uint32_t **)a2 + 1);
    v30 = ((int)(uintptr_t)(v27) - *(uint32_t *)a2) >> 2;
    v32 = -1431655765 * v30;
    v4 = *(uint32_t **)self;
    v5 = -1431655765 * ((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 2);
    if ( -1431655765 * v30 > v5 )
    {
      if ( v32 != 0 )
      {
        if ( v32 > 0x15555555 )
          sub_18FFEE0(v32, v5);
        v33 = 4 * v30;
        v25 = opNew(4 * v30);
      }
      else
      {
        v33 = 0;
        v25 = 0;
      }
      if ( v3 != v27 )
      {
        v26 = (uint32_t *)v25;
        do
        {
          if ( v26 != nullptr )
          {
            *v26 = *v3;
            v26[1] = v3[1];
            v26[2] = v3[2];
          }
          v3 += 3;
          v26 += 3;
        }
        while ( v27 != v3 );
      }
      if ( *(uint32_t *)self != 0 )
        opDelete(*(void **)self);
      result = self;
      *(uint32_t *)self = v25;
      v15 = v33 + v25;
      *((uint32_t *)self + 2) = v15;
      goto LABEL_12;
    }
    v6 = *((uint32_t **)self + 1);
    v7 = v6 - v4;
    if ( v32 > -1431655765 * v7 )
    {
      v16 = &v3[v7];
      v17 = -1431655765 * v7;
      v31 = v17;
      if ( v17 > 0 )
      {
        v18 = (unsigned int)v17 >> 2;
        v28 = 4 * ((unsigned int)v17 >> 2);
        if ( v28 == 0 )
          goto LABEL_45;
        if ( v3 <= v4 + 12 && v4 <= v3 + 12 || (unsigned int)v17 <= 5 )
          goto LABEL_45;
        v19 = 0;
        v20 = 0;
        do
        {
          ++v20;
          v21 = _mm_loadh_ps((const double *)&v3[v19 + 2]);
          v22 = _mm_loadh_ps((const double *)&v3[v19 + 6]);
          v23 = _mm_loadh_ps((const double *)&v3[v19 + 10]);
          _mm_storel_ps((double *)&v4[v19], v21);
          _mm_storeh_ps((double *)&v4[v19 + 2], v21);
          _mm_storel_ps((double *)&v4[v19 + 4], v22);
          _mm_storeh_ps((double *)&v4[v19 + 6], v22);
          _mm_storel_ps((double *)&v4[v19 + 8], v23);
          _mm_storeh_ps((double *)&v4[v19 + 10], v23);
          v19 += 12;
        }
        while ( v20 < v18 );
        v17 = v31 - v28;
        v3 += 3 * v28;
        v4 += 3 * v28;
        if ( v31 != v28 )
        {
LABEL_45:
          do
          {
            --v17;
            *v4 = *v3;
            v4[1] = v3[1];
            v24 = v3[2];
            v3 += 3;
            v4[2] = v24;
            v4 += 3;
          }
          while ( v17 > 0 );
        }
        v6 = *((uint32_t **)self + 1);
        v27 = *((uint32_t **)a2 + 1);
        v4 = *(uint32_t **)self;
        v16 = (uint32_t *)(*(uint32_t *)a2 + (((unsigned int)(uintptr_t)(v6) - *(uint32_t *)self) & 0xFFFFFFFC));
      }
      if ( v27 == v16 )
      {
        v15 = (int)(uintptr_t)(&v4[3 * v32]);
        result = self;
      }
      else
      {
        do
        {
          if ( v6 != nullptr )
          {
            *v6 = *v16;
            v6[1] = v16[1];
            v6[2] = v16[2];
          }
          v16 += 3;
          v6 += 3;
        }
        while ( v27 != v16 );
        result = self;
        v15 = *(uint32_t *)self + 12 * v32;
      }
      goto LABEL_12;
    }
    if ( (int)v32 <= 0 )
    {
      v15 = (int)(uintptr_t)(&v4[v30]);
      result = self;
      goto LABEL_12;
    }
    v29 = 4 * (v32 >> 2);
    if ( v29 != 0 && (v4 > v3 + 12 || v3 > v4 + 12) && v32 > 5 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        ++v9;
        v10 = _mm_loadh_ps((const double *)&v3[v8 + 2]);
        v11 = _mm_loadh_ps((const double *)&v3[v8 + 6]);
        v12 = _mm_loadh_ps((const double *)&v3[v8 + 10]);
        _mm_storel_ps((double *)&v4[v8], v10);
        _mm_storeh_ps((double *)&v4[v8 + 2], v10);
        _mm_storel_ps((double *)&v4[v8 + 4], v11);
        _mm_storeh_ps((double *)&v4[v8 + 6], v11);
        _mm_storel_ps((double *)&v4[v8 + 8], v12);
        _mm_storeh_ps((double *)&v4[v8 + 10], v12);
        v8 += 12;
      }
      while ( v32 >> 2 > v9 );
      v3 += 12 * (v32 >> 2);
      v4 += 12 * (v32 >> 2);
      v13 = v32 - v29;
      if ( v32 == v29 )
        goto LABEL_11;
    }
    else
    {
      v13 = -1431655765 * (((int)(uintptr_t)(v27) - *(uint32_t *)a2) >> 2);
    }
    do
    {
      --v13;
      *v4 = *v3;
      v4[1] = v3[1];
      v14 = v3[2];
      v3 += 3;
      v4[2] = v14;
      v4 += 3;
    }
    while ( v13 > 0 );
LABEL_11:
    result = self;
    v15 = *(uint32_t *)self + 4 * v30;
LABEL_12:
    *((uint32_t *)result + 1) = v15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_scene_SIKJoint_SAllocato_337c64::M_insert_aux  (binary VA: 0xf0a330)
// Original: std::vector<glitch::scene::SIKJoint,glitch::core::SAllocator<glitch::scene::SIKJoint,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
size_t g4_std::vector_scene_SIKJoint_SAllocato_337c64::M_insert_aux(int *a1, int a2, glitch::scene::SIKJoint *a3)
{
  int v3;
  int v4;
  int v5;
  bool v6;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  size_t v37;
  int v38;
  int v39;
  int v40;
  char v41;
  char v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  char v50;
  char v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  char v59;
  char v60;
  int v61;
  int v62;
  int v63;
  int v64;

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    v18 = 0;
    if ( v3 != 0 )
    {
      *(uint32_t *)v3 = *(uint32_t *)(v3 - 96);
      *(uint32_t *)(v3 + 4) = *(uint32_t *)(v3 - 92);
      *(uint32_t *)(v3 + 8) = *(uint32_t *)(v3 - 88);
      *(uint8_t *)(v3 + 12) = *(uint8_t *)(v3 - 84);
      *(uint8_t *)(v3 + 13) = *(uint8_t *)(v3 - 83);
      *(uint32_t *)(v3 + 16) = *(uint32_t *)(v3 - 80);
      *(uint32_t *)(v3 + 20) = *(uint32_t *)(v3 - 76);
      *(uint32_t *)(v3 + 24) = *(uint32_t *)(v3 - 72);
      *(uint32_t *)(v3 + 28) = *(uint32_t *)(v3 - 68);
      *(uint32_t *)(v3 + 32) = *(uint32_t *)(v3 - 64);
      *(uint32_t *)(v3 + 36) = *(uint32_t *)(v3 - 60);
      *(uint32_t *)(v3 + 40) = *(uint32_t *)(v3 - 56);
      *(uint8_t *)(v3 + 44) = *(uint8_t *)(v3 - 52);
      *(uint8_t *)(v3 + 45) = *(uint8_t *)(v3 - 51);
      *(uint32_t *)(v3 + 48) = *(uint32_t *)(v3 - 48);
      *(uint32_t *)(v3 + 52) = *(uint32_t *)(v3 - 44);
      *(uint32_t *)(v3 + 56) = *(uint32_t *)(v3 - 40);
      *(uint32_t *)(v3 + 60) = *(uint32_t *)(v3 - 36);
      *(uint32_t *)(v3 + 64) = *(uint32_t *)(v3 - 32);
      *(uint32_t *)(v3 + 68) = *(uint32_t *)(v3 - 28);
      *(uint32_t *)(v3 + 72) = *(uint32_t *)(v3 - 24);
      *(uint8_t *)(v3 + 76) = *(uint8_t *)(v3 - 20);
      *(uint8_t *)(v3 + 77) = *(uint8_t *)(v3 - 19);
      *(uint32_t *)(v3 + 80) = *(uint32_t *)(v3 - 16);
      *(uint32_t *)(v3 + 84) = *(uint32_t *)(v3 - 12);
      *(uint32_t *)(v3 + 88) = *(uint32_t *)(v3 - 8);
      *(uint32_t *)(v3 + 92) = *(uint32_t *)(v3 - 4);
      v18 = a1[1];
    }
    a1[1] = v18 + 96;
    v38 = *(uint32_t *)a3;
    v39 = *((uint32_t *)a3 + 1);
    v40 = *((uint32_t *)a3 + 2);
    v41 = *((uint8_t *)a3 + 12);
    v42 = *((uint8_t *)a3 + 13);
    v43 = *((uint32_t *)a3 + 4);
    v44 = *((uint32_t *)a3 + 5);
    v45 = *((uint32_t *)a3 + 6);
    v46 = *((uint32_t *)a3 + 7);
    v47 = *((uint32_t *)a3 + 8);
    v48 = *((uint32_t *)a3 + 9);
    v49 = *((uint32_t *)a3 + 10);
    v50 = *((uint8_t *)a3 + 44);
    v51 = *((uint8_t *)a3 + 45);
    v52 = *((uint32_t *)a3 + 12);
    v53 = *((uint32_t *)a3 + 13);
    v54 = *((uint32_t *)a3 + 14);
    v55 = *((uint32_t *)a3 + 15);
    v56 = *((uint32_t *)a3 + 16);
    v57 = *((uint32_t *)a3 + 17);
    v58 = *((uint32_t *)a3 + 18);
    v59 = *((uint8_t *)a3 + 76);
    v60 = *((uint8_t *)a3 + 77);
    v61 = *((uint32_t *)a3 + 20);
    v62 = *((uint32_t *)a3 + 21);
    v63 = *((uint32_t *)a3 + 22);
    v64 = *((uint32_t *)a3 + 23);
    v32 = v18 - 96;
    v24 = -1431655765 * ((v18 - 96 - a2) >> 5);
    if ( v24 > 0 )
    {
      v19 = v18;
      v21 = (uint32_t *)(v18 - 96);
      v4 = v18 - 192;
      v27 = v18 - 64;
      v30 = v18 - 32;
      v36 = v18 - 160;
      v17 = v18 - 128;
      do
      {
        v21 -= 24;
        v19 -= 96;
        v5 = v19 - v18;
        *(uint32_t *)(v5 + v18) = *v21;
        *(uint32_t *)(v5 + v32 + 100) = *(uint32_t *)((char *)v21 + v4 - v32 + 100);
        *(uint32_t *)(v5 + v32 + 104) = *(uint32_t *)((char *)v21 + v4 - v32 + 104);
        *(uint8_t *)(v5 + v32 + 108) = *((uint8_t *)v21 + v4 - v32 + 108);
        *(uint8_t *)(v5 + v32 + 109) = *((uint8_t *)v21 + v4 - v32 + 109);
        *(uint32_t *)(v5 + v32 + 112) = *(uint32_t *)((char *)v21 + v4 - v32 + 112);
        *(uint32_t *)(v5 + v32 + 116) = *(uint32_t *)((char *)v21 + v4 - v32 + 116);
        *(uint32_t *)(v5 + v32 + 120) = *(uint32_t *)((char *)v21 + v4 - v32 + 120);
        *(uint32_t *)(v5 + v32 + 124) = *(uint32_t *)((char *)v21 + v4 - v32 + 124);
        *(uint32_t *)(v5 + v27 + 96) = *(uint32_t *)((char *)v21 + v36 - v32 + 96);
        *(uint32_t *)(v5 + v27 + 100) = *(uint32_t *)((char *)v21 + v36 - v32 + 100);
        *(uint32_t *)(v5 + v27 + 104) = *(uint32_t *)((char *)v21 + v36 - v32 + 104);
        *(uint8_t *)(v5 + v27 + 108) = *((uint8_t *)v21 + v36 - v32 + 108);
        *(uint8_t *)(v5 + v27 + 109) = *((uint8_t *)v21 + v36 - v32 + 109);
        *(uint32_t *)(v5 + v27 + 112) = *(uint32_t *)((char *)v21 + v36 - v32 + 112);
        *(uint32_t *)(v5 + v27 + 116) = *(uint32_t *)((char *)v21 + v36 - v32 + 116);
        *(uint32_t *)(v5 + v27 + 120) = *(uint32_t *)((char *)v21 + v36 - v32 + 120);
        *(uint32_t *)(v5 + v27 + 124) = *(uint32_t *)((char *)v21 + v36 - v32 + 124);
        *(uint32_t *)(v5 + v30 + 96) = *(uint32_t *)((char *)v21 + v17 - v32 + 96);
        *(uint32_t *)(v5 + v30 + 100) = *(uint32_t *)((char *)v21 + v17 - v32 + 100);
        v6 = v24-- == 1;
        *(uint32_t *)(v5 + v30 + 104) = *(uint32_t *)((char *)v21 + v17 - v32 + 104);
        *(uint8_t *)(v5 + v30 + 108) = *((uint8_t *)v21 + v17 - v32 + 108);
        *(uint8_t *)(v5 + v30 + 109) = *((uint8_t *)v21 + v17 - v32 + 109);
        *(uint32_t *)(v5 + v30 + 112) = *(uint32_t *)((char *)v21 + v17 - v32 + 112);
        *(uint32_t *)(v5 + v30 + 116) = *(uint32_t *)((char *)v21 + v17 - v32 + 116);
        *(uint32_t *)(v5 + v30 + 120) = *(uint32_t *)((char *)v21 + v17 - v32 + 120);
        *(uint32_t *)(v5 + v30 + 124) = *(uint32_t *)((char *)v21 + v17 - v32 + 124);
      }
      while ( !v6 );
    }
    *(uint32_t *)a2 = v38;
    *(uint32_t *)(a2 + 4) = v39;
    *(uint32_t *)(a2 + 8) = v40;
    *(uint8_t *)(a2 + 12) = v41;
    *(uint8_t *)(a2 + 13) = v42;
    *(uint32_t *)(a2 + 16) = v43;
    *(uint32_t *)(a2 + 20) = v44;
    *(uint32_t *)(a2 + 24) = v45;
    *(uint32_t *)(a2 + 28) = v46;
    *(uint32_t *)(a2 + 32) = v47;
    *(uint32_t *)(a2 + 36) = v48;
    *(uint32_t *)(a2 + 40) = v49;
    *(uint8_t *)(a2 + 44) = v50;
    *(uint8_t *)(a2 + 45) = v51;
    *(uint32_t *)(a2 + 48) = v52;
    *(uint32_t *)(a2 + 52) = v53;
    *(uint32_t *)(a2 + 56) = v54;
    *(uint32_t *)(a2 + 60) = v55;
    *(uint32_t *)(a2 + 64) = v56;
    *(uint32_t *)(a2 + 68) = v57;
    *(uint32_t *)(a2 + 72) = v58;
    *(uint8_t *)(a2 + 76) = v59;
    *(uint8_t *)(a2 + 77) = v60;
    *(uint32_t *)(a2 + 80) = v61;
    *(uint32_t *)(a2 + 84) = v62;
    *(uint32_t *)(a2 + 88) = v63;
    *(uint32_t *)(a2 + 92) = v64;
    return v64;
  }
  v8 = *a1;
  v9 = -1431655765 * ((v3 - *a1) >> 5);
  if ( v9 != 0 )
  {
    v10 = 2 * v9;
    if ( v9 > 2 * v9 || v10 > 0x2AAAAAA )
    {
      v37 = 0xFFFFFFC0;
      v11 = -1431655765 * ((a2 - v8) >> 5);
    }
    else
    {
      v11 = -1431655765 * ((a2 - v8) >> 5);
      v37 = 192 * v9;
      if ( v10 == 0 )
      {
        v25 = 96;
        v31 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v37 = 96;
    v11 = -1431655765 * ((a2 - v8) >> 5);
  }
  v31 = sub_4EBDC0(v37);
  v25 = v31 + 96;
LABEL_12:
  if ( v31 + 96 * v11 != 0 )
    glitch::scene::SIKJoint::Construct((glitch::scene::SIKJoint *)(v31 + 96 * v11), a3);
  v22 = *a1;
  if ( *a1 != a2 )
  {
    v12 = *a1;
    v26 = v31;
    do
    {
      if ( v26 != 0 )
      {
        *(uint32_t *)v26 = *(uint32_t *)v12;
        *(uint32_t *)(v26 + 4) = *(uint32_t *)(v12 + 4);
        *(uint32_t *)(v26 + 8) = *(uint32_t *)(v12 + 8);
        v33 = v31 + 32;
        *(uint8_t *)(v26 + 12) = *(uint8_t *)(v12 + 12);
        *(uint8_t *)(v26 + 13) = *(uint8_t *)(v12 + 13);
        *(uint32_t *)(v26 + 16) = *(uint32_t *)(v12 + 16);
        *(uint32_t *)(v26 + 20) = *(uint32_t *)(v12 + 20);
        *(uint32_t *)(v26 + 24) = *(uint32_t *)(v12 + 24);
        *(uint32_t *)(v26 + 28) = *(uint32_t *)(v12 + 28);
        v28 = v26 - v31;
        *(uint32_t *)(v26 + 32) = *(uint32_t *)(v12 + 32);
        *(uint32_t *)(v28 + v33 + 4) = *(uint32_t *)(v12 + 36);
        v13 = v31 + 32;
        *(uint32_t *)(v28 + v33 + 8) = *(uint32_t *)(v12 + 40);
        *(uint8_t *)(v28 + v13 + 12) = *(uint8_t *)(v12 + 44);
        *(uint8_t *)(v26 - v31 + v13 + 13) = *(uint8_t *)(v12 + 45);
        *(uint32_t *)(v28 + v33 + 16) = *(uint32_t *)(v12 + 48);
        *(uint32_t *)(v26 - v31 + v33 + 20) = *(uint32_t *)(v12 + 52);
        *(uint32_t *)(v28 + v31 + 32 + 24) = *(uint32_t *)(v12 + 56);
        *(uint32_t *)(v28 + v33 + 28) = *(uint32_t *)(v12 + 60);
        v34 = v31 + 64;
        *(uint32_t *)(v26 + 64) = *(uint32_t *)(v12 + 64);
        *(uint32_t *)(v28 + v34 + 4) = *(uint32_t *)(v12 + 68);
        v14 = v31 + 64;
        *(uint32_t *)(v26 - v31 + v34 + 8) = *(uint32_t *)(v12 + 72);
        *(uint8_t *)(v28 + v14 + 12) = *(uint8_t *)(v12 + 76);
        *(uint8_t *)(v26 - v31 + v14 + 13) = *(uint8_t *)(v12 + 77);
        *(uint32_t *)(v28 + v34 + 16) = *(uint32_t *)(v12 + 80);
        *(uint32_t *)(v26 - v31 + v34 + 20) = *(uint32_t *)(v12 + 84);
        *(uint32_t *)(v28 + v31 + 64 + 24) = *(uint32_t *)(v12 + 88);
        *(uint32_t *)(v26 - v31 + v34 + 28) = *(uint32_t *)(v12 + 92);
      }
      v12 += 96;
      v26 += 96;
    }
    while ( v12 != a2 );
    v25 = v31 + 32 * (3 * ((44739243 * ((unsigned int)(a2 - (v22 + 96)) >> 5)) & 0x7FFFFFF) + 3) + 96;
  }
  v20 = a1[1];
  if ( v20 != a2 )
  {
    v15 = a2;
    v23 = v25;
    do
    {
      if ( v23 != 0 )
      {
        *(uint32_t *)v23 = *(uint32_t *)v15;
        *(uint32_t *)(v23 + 4) = *(uint32_t *)(v15 + 4);
        *(uint32_t *)(v23 + 8) = *(uint32_t *)(v15 + 8);
        *(uint8_t *)(v23 + 12) = *(uint8_t *)(v15 + 12);
        *(uint8_t *)(v23 + 13) = *(uint8_t *)(v15 + 13);
        *(uint32_t *)(v23 + 16) = *(uint32_t *)(v15 + 16);
        *(uint32_t *)(v23 + 20) = *(uint32_t *)(v15 + 20);
        *(uint32_t *)(v23 + 24) = *(uint32_t *)(v15 + 24);
        *(uint32_t *)(v23 + 28) = *(uint32_t *)(v15 + 28);
        *(uint32_t *)(v23 + 32) = *(uint32_t *)(v15 + 32);
        v29 = v23 - v25;
        *(uint32_t *)(v29 + v25 + 32 + 4) = *(uint32_t *)(v15 + 36);
        v16 = v25 + 32;
        *(uint32_t *)(v29 + v16 + 8) = *(uint32_t *)(v15 + 40);
        *(uint8_t *)(v29 + v16 + 12) = *(uint8_t *)(v15 + 44);
        *(uint8_t *)(v23 - v25 + v16 + 13) = *(uint8_t *)(v15 + 45);
        *(uint32_t *)(v29 + v16 + 16) = *(uint32_t *)(v15 + 48);
        *(uint32_t *)(v23 - v25 + v16 + 20) = *(uint32_t *)(v15 + 52);
        *(uint32_t *)(v29 + v25 + 32 + 24) = *(uint32_t *)(v15 + 56);
        *(uint32_t *)(v29 + v16 + 28) = *(uint32_t *)(v15 + 60);
        v35 = v25 + 64;
        *(uint32_t *)(v23 + 64) = *(uint32_t *)(v15 + 64);
        *(uint32_t *)(v29 + v35 + 4) = *(uint32_t *)(v15 + 68);
        *(uint32_t *)(v23 - v25 + v35 + 8) = *(uint32_t *)(v15 + 72);
        *(uint8_t *)(v29 + v25 + 64 + 12) = *(uint8_t *)(v15 + 76);
        *(uint8_t *)(v23 - v25 + v35 + 13) = *(uint8_t *)(v15 + 77);
        *(uint32_t *)(v29 + v35 + 16) = *(uint32_t *)(v15 + 80);
        *(uint32_t *)(v23 - v25 + v35 + 20) = *(uint32_t *)(v15 + 84);
        *(uint32_t *)(v29 + v25 + 64 + 24) = *(uint32_t *)(v15 + 88);
        *(uint32_t *)(v23 - v25 + v35 + 28) = *(uint32_t *)(v15 + 92);
      }
      v15 += 96;
      v23 += 96;
    }
    while ( v20 != v15 );
    v25 += 32 * (3 * ((44739243 * ((unsigned int)(v20 - (a2 + 96)) >> 5)) & 0x7FFFFFF) + 3);
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v31;
  a1[1] = v25;
  a1[2] = v37 + v31;
  return v37 + v31;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_scene_SJoint_SAllocator_c74bde::M_insert_aux  (binary VA: 0xf0ace0)
// Original: std::vector<glitch::scene::SJoint,glitch::core::SAllocator<glitch::scene::SJoint,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_scene_SJoint_SAllocator_c74bde::M_insert_aux(int *a1, int a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  bool v8;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  char v42;
  int16_t v43;
  uint8_t v44;

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    v33 = 0;
    if ( v3 != 0 )
    {
      *(uint32_t *)v3 = *(uint32_t *)(v3 - 36);
      *(uint32_t *)(v3 + 4) = *(uint32_t *)(v3 - 32);
      *(uint32_t *)(v3 + 8) = *(uint32_t *)(v3 - 28);
      *(uint32_t *)(v3 + 12) = *(uint32_t *)(v3 - 24);
      *(uint32_t *)(v3 + 16) = *(uint32_t *)(v3 - 20);
      *(uint32_t *)(v3 + 20) = *(uint32_t *)(v3 - 16);
      *(uint32_t *)(v3 + 24) = *(uint32_t *)(v3 - 12);
      *(uint32_t *)(v3 + 28) = *(uint32_t *)(v3 - 8);
      *(uint8_t *)(v3 + 32) = *(uint8_t *)(v3 - 4);
      *(uint16_t *)(v3 + 33) = *(uint16_t *)(v3 - 3);
      *(uint8_t *)(v3 + 35) = *(uint8_t *)(v3 - 1);
      v33 = a1[1];
    }
    v4 = v33 - 36;
    a1[1] = v33 + 36;
    v34 = *a3;
    v35 = a3[1];
    v42 = *((uint8_t *)a3 + 32);
    v43 = *(uint16_t *)((char *)a3 + 33);
    v44 = *((uint8_t *)a3 + 35);
    v36 = a3[2];
    v28 = 954437177 * ((v33 - 36 - a2) >> 2);
    v37 = a3[3];
    v38 = a3[4];
    v39 = a3[5];
    v40 = a3[6];
    v41 = a3[7];
    if ( v28 > 0 )
    {
      v29 = (uint32_t *)(v33 - 36);
      v24 = v33;
      v26 = v33 - 28;
      v5 = v33 - 72;
      v6 = v33 - 64;
      v31 = v33 - 16;
      v22 = v33 - 52;
      do
      {
        v29 -= 9;
        v24 -= 36;
        v7 = v24 - v33;
        *(uint32_t *)(v7 + v33) = *v29;
        *(uint32_t *)(v7 + v4 + 40) = *(uint32_t *)((char *)v29 + v5 - v4 + 40);
        *(uint32_t *)(v7 + v26 + 36) = *(uint32_t *)((char *)v29 + v6 - v4 + 36);
        *(uint32_t *)(v7 + v26 + 40) = *(uint32_t *)((char *)v29 + v6 - v4 + 40);
        *(uint32_t *)(v7 + v26 + 44) = *(uint32_t *)((char *)v29 + v6 - v4 + 44);
        *(uint32_t *)(v7 + v31 + 36) = *(uint32_t *)((char *)v29 + v22 - v4 + 36);
        *(uint32_t *)(v7 + v31 + 40) = *(uint32_t *)((char *)v29 + v22 - v4 + 40);
        *(uint32_t *)(v7 + v31 + 44) = *(uint32_t *)((char *)v29 + v22 - v4 + 44);
        *(uint8_t *)(v7 + v4 + 68) = *((uint8_t *)v29 + v5 - v4 + 68);
        *(uint16_t *)(v7 + v4 + 69) = *(uint16_t *)((char *)v29 + v5 - v4 + 69);
        v8 = v28-- == 1;
        *(uint8_t *)(v7 + v4 + 71) = *((uint8_t *)v29 + v5 - v4 + 71);
      }
      while ( !v8 );
    }
    *(uint32_t *)(a2 + 8) = v36;
    *(uint32_t *)(a2 + 12) = v37;
    *(uint32_t *)a2 = v34;
    *(uint32_t *)(a2 + 4) = v35;
    *(uint32_t *)(a2 + 16) = v38;
    *(uint8_t *)(a2 + 32) = v42;
    *(uint32_t *)(a2 + 20) = v39;
    *(uint16_t *)(a2 + 33) = v43;
    *(uint32_t *)(a2 + 24) = v40;
    *(uint8_t *)(a2 + 35) = v44;
    *(uint32_t *)(a2 + 28) = v41;
    return v44;
  }
  v10 = *a1;
  v11 = (v3 - *a1) >> 2;
  v12 = 954437177 * v11;
  if ( 954437177 * v11 != 0 )
  {
    v13 = 1908874354 * v11;
    if ( v12 > 2 * v12 || v13 > 0x71C71C7 )
    {
      v23 = -4;
      v14 = 954437177 * ((a2 - v10) >> 2);
    }
    else
    {
      v23 = 72 * v12;
      v14 = 954437177 * ((a2 - v10) >> 2);
      if ( v13 == 0 )
      {
        v25 = 36;
        v30 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v23 = 36;
    v14 = 954437177 * ((a2 - v10) >> 2);
  }
  v30 = sub_4EBDC0(v23);
  v25 = v30 + 36;
LABEL_12:
  v15 = v30 + 36 * v14;
  if ( v15 != 0 )
  {
    *(uint32_t *)v15 = *a3;
    *(uint32_t *)(v15 + 4) = a3[1];
    *(uint32_t *)(v15 + 8) = a3[2];
    *(uint32_t *)(v15 + 12) = a3[3];
    *(uint32_t *)(v15 + 16) = a3[4];
    *(uint32_t *)(v15 + 20) = a3[5];
    *(uint32_t *)(v15 + 24) = a3[6];
    *(uint32_t *)(v15 + 28) = a3[7];
    *(uint8_t *)(v15 + 32) = *((uint8_t *)a3 + 32);
    *(uint16_t *)(v15 + 33) = *(uint16_t *)((char *)a3 + 33);
    *(uint8_t *)(v15 + 35) = *((uint8_t *)a3 + 35);
  }
  v16 = a2;
  v27 = *a1;
  if ( *a1 != a2 )
  {
    v17 = *a1;
    v18 = v30;
    do
    {
      if ( v18 != 0 )
      {
        *(uint32_t *)v18 = *(uint32_t *)v17;
        *(uint32_t *)(v18 + 4) = *(uint32_t *)(v17 + 4);
        v19 = v18 - v30;
        *(uint32_t *)(v18 + 8) = *(uint32_t *)(v17 + 8);
        *(uint32_t *)(v19 + v30 + 12) = *(uint32_t *)(v17 + 12);
        *(uint32_t *)(v19 + v30 + 16) = *(uint32_t *)(v17 + 16);
        *(uint32_t *)(v18 + 20) = *(uint32_t *)(v17 + 20);
        *(uint32_t *)(v19 + v30 + 24) = *(uint32_t *)(v17 + 24);
        *(uint32_t *)(v19 + v30 + 28) = *(uint32_t *)(v17 + 28);
        *(uint8_t *)(v18 + 32) = *(uint8_t *)(v17 + 32);
        *(uint16_t *)(v18 + 33) = *(uint16_t *)(v17 + 33);
        *(uint8_t *)(v18 + 35) = *(uint8_t *)(v17 + 35);
      }
      v17 += 36;
      v18 += 36;
    }
    while ( v17 != a2 );
    v16 = a2;
    v25 = v30 + 4 * ((unsigned int)(a2 - (v27 + 36)) >> 2) + 72;
  }
  v32 = a1[1];
  if ( v32 != v16 )
  {
    v20 = v25;
    do
    {
      if ( v20 != 0 )
      {
        *(uint32_t *)v20 = *(uint32_t *)v16;
        *(uint32_t *)(v20 + 4) = *(uint32_t *)(v16 + 4);
        v21 = v20 - v25;
        *(uint32_t *)(v20 + 8) = *(uint32_t *)(v16 + 8);
        *(uint32_t *)(v21 + v25 + 12) = *(uint32_t *)(v16 + 12);
        *(uint32_t *)(v21 + v25 + 16) = *(uint32_t *)(v16 + 16);
        *(uint32_t *)(v20 + 20) = *(uint32_t *)(v16 + 20);
        *(uint32_t *)(v21 + v25 + 24) = *(uint32_t *)(v16 + 24);
        *(uint32_t *)(v21 + v25 + 28) = *(uint32_t *)(v16 + 28);
        *(uint8_t *)(v20 + 32) = *(uint8_t *)(v16 + 32);
        *(uint16_t *)(v20 + 33) = *(uint16_t *)(v16 + 33);
        *(uint8_t *)(v20 + 35) = *(uint8_t *)(v16 + 35);
      }
      v16 += 36;
      v20 += 36;
    }
    while ( v32 != v16 );
    v25 += 4 * ((unsigned int)(v32 - (a2 + 36)) >> 2) + 36;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v30;
  a1[1] = v25;
  a1[2] = v23 + v30;
  return v23 + v30;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_util_SDimensionArrayId_80788b::M_insert_aux  (binary VA: 0xf0e5c0)
// Original: std::vector<glitch::util::SDimensionArrayId>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_util_SDimensionArrayId_80788b::M_insert_aux(int a1, char *a2, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  char *v9;
  char *v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int *v15;
  char *v16;
  char *v17;
  uint32_t *v18;
  char *v19;
  char *v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;

  v3 = *(uint32_t **)(a1 + 4);
  if ( v3 != *(uint32_t **)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 3);
      v3[1] = *(v3 - 2);
      v3[2] = *(v3 - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    v5 = v4 + 12;
    v6 = (char *)(v4 - 12);
    *(uint32_t *)(a1 + 4) = v5;
    v7 = *a3;
    v8 = -1431655765 * ((v6 - a2) >> 2);
    v23 = a3[1];
    v25 = a3[2];
    v9 = v6;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        v9 -= 12;
        --v8;
        *(uint32_t *)v6 = *(uint32_t *)v9;
        *((uint32_t *)v6 + 1) = *((uint32_t *)v9 + 1);
        *((uint32_t *)v6 + 2) = *((uint32_t *)v9 + 2);
        if ( v8 == 0 )
          break;
        v6 -= 12;
      }
    }
    *(uint32_t *)a2 = v7;
    *((uint32_t *)a2 + 1) = v23;
    *((uint32_t *)a2 + 2) = v25;
    return v25;
  }
  v11 = *(char **)a1;
  v12 = -1431655765 * (((int)(uintptr_t)(v3) - *(uint32_t *)a1) >> 2);
  if ( v12 != 0 )
  {
    v13 = 2 * v12;
    if ( v12 > 2 * v12 || v13 > 0x15555555 )
    {
      v27 = -4;
      v14 = -1431655765 * ((a2 - v11) >> 2);
    }
    else
    {
      v27 = 24 * v12;
      v14 = -1431655765 * ((a2 - v11) >> 2);
      if ( v13 == 0 )
      {
        v26 = 12;
        v24 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v27 = 12;
    v14 = -1431655765 * ((a2 - v11) >> 2);
  }
  v22 = v14;
  v24 = opNew(v27);
  v26 = v24 + 12;
  v14 = v22;
LABEL_13:
  v15 = (int *)(v24 + 12 * v14);
  if ( v15 != nullptr )
  {
    *v15 = *a3;
    v15[1] = a3[1];
    v15[2] = a3[2];
  }
  v16 = *(char **)a1;
  if ( *(char **)a1 != a2 )
  {
    v17 = *(char **)a1;
    v18 = (uint32_t *)v24;
    do
    {
      if ( v18 != nullptr )
      {
        *v18 = *(uint32_t *)v17;
        v18[1] = *((uint32_t *)v17 + 1);
        v18[2] = *((uint32_t *)v17 + 2);
      }
      v17 += 12;
      v18 += 3;
    }
    while ( v17 != a2 );
    v26 = v24 + 4 * ((unsigned int)(a2 - (v16 + 12)) >> 2) + 24;
  }
  v19 = *(char **)(a1 + 4);
  if ( v19 != a2 )
  {
    v20 = a2;
    v21 = (uint32_t *)v26;
    do
    {
      if ( v21 != nullptr )
      {
        *v21 = *(uint32_t *)v20;
        v21[1] = *((uint32_t *)v20 + 1);
        v21[2] = *((uint32_t *)v20 + 2);
      }
      v20 += 12;
      v21 += 3;
    }
    while ( v19 != v20 );
    v26 += 4 * ((unsigned int)(v19 - (a2 + 12)) >> 2) + 12;
  }
  if ( *(uint32_t *)a1 != 0 )
    opDelete(*(void **)a1);
  *(uint32_t *)a1 = v24;
  *(uint32_t *)(a1 + 4) = v26;
  *(uint32_t *)(a1 + 8) = v27 + v24;
  return v27 + v24;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_scene_CMeshConnectivity_67fdc9::M_insert_aux  (binary VA: 0xf0ec00)
// Original: std::vector<glitch::scene::CMeshConnectivity::SEdge,glitch::core::SAllocator<glitch::scene::CMeshConnectivity::SEdge,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_scene_CMeshConnectivity_67fdc9::M_insert_aux(int *a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v3 = (uint32_t *)a1[1];
  if ( v3 != (uint32_t *)a1[2] )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 4);
      v3[1] = *(v3 - 3);
      v3[2] = *(v3 - 2);
      v3[3] = *(v3 - 1);
      v4 = a1[1];
    }
    v5 = v4 + 16;
    v6 = v4 - 16;
    a1[1] = v5;
    v25 = *a3;
    v26 = a3[1];
    v7 = (v6 - a2) >> 4;
    v27 = a3[2];
    v28 = a3[3];
    v8 = v6;
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v8 -= 16;
        --v7;
        *(uint32_t *)v6 = *(uint32_t *)v8;
        *(uint32_t *)(v6 + 4) = *(uint32_t *)(v8 + 4);
        *(uint32_t *)(v6 + 8) = *(uint32_t *)(v8 + 8);
        *(uint16_t *)(v6 + 12) = *(uint16_t *)(v8 + 12);
        if ( v7 == 0 )
          break;
        v6 -= 16;
      }
    }
    *(uint32_t *)a2 = v25;
    *(uint32_t *)(a2 + 4) = v26;
    *(uint32_t *)(a2 + 8) = v27;
    *(uint16_t *)(a2 + 12) = v28;
    return (uint16_t)v28;
  }
  v10 = *a1;
  v11 = ((int)(uintptr_t)(v3) - *a1) >> 4;
  if ( v11 != 0 )
  {
    v12 = 2 * v11;
    if ( v11 > 2 * v11 || v12 > 0xFFFFFFF )
    {
      v24 = -16;
      v13 = (a2 - v10) >> 4;
    }
    else
    {
      v24 = 32 * v11;
      v13 = (a2 - v10) >> 4;
      if ( v12 == 0 )
      {
        v23 = 16;
        v22 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v24 = 16;
    v13 = (a2 - v10) >> 4;
  }
  v21 = v13;
  v22 = sub_4EBDC0(v24);
  v23 = v22 + 16;
  v13 = v21;
LABEL_13:
  v14 = (int *)(v22 + 16 * v13);
  if ( v14 != nullptr )
  {
    *v14 = *a3;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v14[3] = a3[3];
  }
  v15 = *a1;
  if ( *a1 != a2 )
  {
    v16 = (uint32_t *)*a1;
    v17 = (uint32_t *)v22;
    do
    {
      if ( v17 != nullptr )
      {
        *v17 = *v16;
        v17[1] = v16[1];
        v17[2] = v16[2];
        v17[3] = v16[3];
      }
      v16 += 4;
      v17 += 4;
    }
    while ( v16 != (uint32_t *)a2 );
    v23 = v22 + ((a2 - (v15 + 16)) & 0xFFFFFFF0) + 32;
  }
  v18 = (uint32_t *)a1[1];
  if ( v18 != (uint32_t *)a2 )
  {
    v19 = (uint32_t *)a2;
    v20 = (uint32_t *)v23;
    do
    {
      if ( v20 != nullptr )
      {
        *v20 = *v19;
        v20[1] = v19[1];
        v20[2] = v19[2];
        v20[3] = v19[3];
      }
      v19 += 4;
      v20 += 4;
    }
    while ( v18 != v19 );
    v23 += (((unsigned int)(uintptr_t)(v18) - a2 - 16) & 0xFFFFFFF0) + 16;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v22;
  a1[1] = v23;
  a1[2] = v24 + v22;
  return v24 + v22;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_triangle3d_float_SAlloca_343806::M_fill_insert  (binary VA: 0xf0fba0)
// Original: std::vector<glitch::core::triangle3d<float>,glitch::core::SAllocator<glitch::core::triangle3d<float>,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
double * g4_std::vector_triangle3d_float_SAlloca_343806::M_fill_insert(int *a1, double *a2, unsigned int a3, int a4)
{
  double *result;
  int v5;
  int v6;
  uint32_t *v7; // xmm0_4
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  unsigned int v10; // xmm2_4
  unsigned int v11; // xmm3_4
  unsigned int v12; // xmm4_4
  unsigned int v13; // xmm5_4
  unsigned int v14; // xmm6_4
  uint32_t v15;
  uint32_t *v16;
  unsigned int *v17;
  int32_t v18;
  unsigned int v19; // xmm0_4
  char *v20;
  uint32_t *v21;
  uint32_t *v22;
  __m128 v23;
  __m128 v24;
  __m128 v25;
  __m128 v26;
  __m128 v27;
  __m128 v28;
  unsigned int v29;
  int v30;
  __m128 v31;
  __m128 v32;
  unsigned int v33;
  __m128 v34;
  __m128 v35;
  __m128 v36;
  __m128 v37;
  double *v38;
  __m128 v39;
  __m128 v40;
  __m128 v41;
  __m128 v42;
  __m128 v43;
  __m128 v44;
  __m128 v45;
  __m128 v46;
  uint32_t *v47;
  unsigned int v48; // xmm7_4
  int32_t v49;
  char *v50;
  unsigned int v51; // xmm0_4
  char *v52;
  bool v53;
  unsigned int v54;
  int v55;
  int v56;
  bool v57;
  unsigned int v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;
  uint32_t *v63;
  uint32_t *v64;
  size_t v65;
  int32_t v66;
  int v67;
  __m128 v68;
  __m128 v69;
  __m128 v70;
  __m128 v71;
  __m128 v72;
  __m128 v73;
  int v74;
  int v75;
  unsigned int v76; // xmm0_4
  int32_t v77;
  int32_t v78;
  int v79; // xmm7_4
  int32_t v80;
  int v81;
  unsigned int v82;
  int v83;
  __m128 v84;
  unsigned int v85;
  __m128 v86;
  __m128 v87;
  __m128 v88;
  __m128 v89;
  double *v90;
  __m128 v91;
  __m128 v92;
  __m128 v93;
  __m128 v94;
  __m128 v95;
  __m128 v96;
  __m128 v97;
  __m128 v98;
  uint32_t *v99;
  unsigned int v100; // xmm7_4
  int32_t v101;
  char *v102;
  unsigned int v103; // xmm0_4
  char *v104;
  typedef double _g4_t_v105;
  typedef unsigned int _g4_t_v106;
  typedef unsigned int _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef unsigned int _g4_t_v109;
  typedef unsigned int _g4_t_v110;
  typedef unsigned int _g4_t_v111;
  typedef unsigned int _g4_t_v112;
  typedef int32_t _g4_t_v113;
  typedef __m128 _g4_t_v114;
  typedef __m128 _g4_t_v115;
  typedef __m128 _g4_t_v116;
  typedef int32_t _g4_t_v117;
  typedef int32_t _g4_t_v118;
  typedef double _g4_t_v119;
  typedef double _g4_t_v120;
  typedef double _g4_t_v121;
  typedef __m128 _g4_t_v122;
  typedef __m128 _g4_t_v123;
  typedef __m128 _g4_t_v124;
  typedef __m128 _g4_t_v125;
  typedef unsigned int _g4_t_v126;
  typedef uint32_t *_g4_t_v127;
  typedef double _g4_t_v128;
  typedef __m128 _g4_t_v129;
  typedef __m128 _g4_t_v130;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_v105)) > _g4_s0 ? (0u + sizeof(_g4_t_v105)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v106)) > _g4_s1 ? (12u + sizeof(_g4_t_v106)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v107)) > _g4_s2 ? (32u + sizeof(_g4_t_v107)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v108)) > _g4_s3 ? (48u + sizeof(_g4_t_v108)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v109)) > _g4_s4 ? (64u + sizeof(_g4_t_v109)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v110)) > _g4_s5 ? (80u + sizeof(_g4_t_v110)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v111)) > _g4_s6 ? (96u + sizeof(_g4_t_v111)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v112)) > _g4_s7 ? (112u + sizeof(_g4_t_v112)) : _g4_s7,
    _g4_s9 = (140u + sizeof(_g4_t_v113)) > _g4_s8 ? (140u + sizeof(_g4_t_v113)) : _g4_s8,
    _g4_s10 = (144u + sizeof(_g4_t_v114)) > _g4_s9 ? (144u + sizeof(_g4_t_v114)) : _g4_s9,
    _g4_s11 = (160u + sizeof(_g4_t_v115)) > _g4_s10 ? (160u + sizeof(_g4_t_v115)) : _g4_s10,
    _g4_s12 = (176u + sizeof(_g4_t_v116)) > _g4_s11 ? (176u + sizeof(_g4_t_v116)) : _g4_s11,
    _g4_s13 = (192u + sizeof(_g4_t_v117)) > _g4_s12 ? (192u + sizeof(_g4_t_v117)) : _g4_s12,
    _g4_s14 = (196u + sizeof(_g4_t_v118)) > _g4_s13 ? (196u + sizeof(_g4_t_v118)) : _g4_s13,
    _g4_s15 = (200u + sizeof(_g4_t_v119)) > _g4_s14 ? (200u + sizeof(_g4_t_v119)) : _g4_s14,
    _g4_s16 = (208u + sizeof(_g4_t_v120)) > _g4_s15 ? (208u + sizeof(_g4_t_v120)) : _g4_s15,
    _g4_s17 = (216u + sizeof(_g4_t_v121)) > _g4_s16 ? (216u + sizeof(_g4_t_v121)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v122)) > _g4_s17 ? (224u + sizeof(_g4_t_v122)) : _g4_s17,
    _g4_s19 = (240u + sizeof(_g4_t_v123)) > _g4_s18 ? (240u + sizeof(_g4_t_v123)) : _g4_s18,
    _g4_s20 = (256u + sizeof(_g4_t_v124)) > _g4_s19 ? (256u + sizeof(_g4_t_v124)) : _g4_s19,
    _g4_s21 = (272u + sizeof(_g4_t_v125)) > _g4_s20 ? (272u + sizeof(_g4_t_v125)) : _g4_s20,
    _g4_s22 = (288u + sizeof(_g4_t_v126)) > _g4_s21 ? (288u + sizeof(_g4_t_v126)) : _g4_s21,
    _g4_s23 = (292u + sizeof(_g4_t_v127)) > _g4_s22 ? (292u + sizeof(_g4_t_v127)) : _g4_s22,
    _g4_s24 = (296u + sizeof(_g4_t_v128)) > _g4_s23 ? (296u + sizeof(_g4_t_v128)) : _g4_s23,
    _g4_s25 = (304u + sizeof(_g4_t_v129)) > _g4_s24 ? (304u + sizeof(_g4_t_v129)) : _g4_s24,
    _g4_s26 = (320u + sizeof(_g4_t_v130)) > _g4_s25 ? (320u + sizeof(_g4_t_v130)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 0u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 12u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 32u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 64u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 80u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 96u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 112u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 140u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 144u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 160u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 176u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 192u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 196u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 200u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 208u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 216u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 224u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 240u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 256u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 272u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 288u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 292u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 296u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 304u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 320u);

g4_m128_lane<int32_t>(v124, 0) = (int32_t)(uintptr_t)(a2);
  result = (double *)a3;
  if ( a3 == 0 )
    return result;
  v5 = a1[1];
  v6 = a1[2] - v5;
g4_m128_lane<int32_t>(v130, 0) = v5;
  if ( a3 <= 954437177 * (v6 >> 2) )
  {
    v7 = *(uint32_t **)a4;
g4_m128_lane<int32_t>(v122, 0) = 954437177 * ((v5 - (int)(uintptr_t)(a2)) >> 2);
    v127 = v7;
    v8 = *(uint32_t *)(a4 + 8);
    v126 = *(uint32_t *)(a4 + 4);
    v106 = v8;
    v9 = *(uint32_t *)(a4 + 12);
    v10 = *(uint32_t *)(a4 + 16);
    v11 = *(uint32_t *)(a4 + 20);
    v12 = *(uint32_t *)(a4 + 24);
    v13 = *(uint32_t *)(a4 + 28);
    v14 = *(uint32_t *)(a4 + 32);
    if ( a3 <g4_m128_lane<int32_t>(v122, 0) )
    {
      v66 =g4_m128_lane<int32_t>(v130, 0);
      v112 = *(uint32_t *)(a4 + 12);
      v111 = v10;
g4_m128_lane<int32_t>(v116, 0) = 36 * a3;
      LODWORD(v119) =g4_m128_lane<int32_t>(v130, 0) - 36 * a3;
      v110 = v11;
      v109 = v12;
      v108 = v13;
      v107 = v14;
      sub_EA07F0((uint32_t *)LODWORD(v119),g4_m128_lane<int32_t>(v130, 0),g4_m128_lane<int32_t>(v130, 0));
      v67 = 954437177 * ((LODWORD(v119) - (int)(uintptr_t)(a2)) >> 2);
      a1[1] += 36 * a3;
g4_m128_lane<int32_t>(v129, 0) = v67;
g4_m128_raw(v68) = v112;
g4_m128_raw(v69) = v111;
g4_m128_raw(v70) = v110;
g4_m128_raw(v71) = v109;
g4_m128_raw(v72) = v108;
g4_m128_raw(v73) = v107;
      if ( v67 > 0 )
      {
g4_m128_lane<int32_t>(v122, 0) =g4_m128_lane<int32_t>(v130, 0) - 36;
g4_m128_lane<int32_t>(v125, 0) = v66;
        LODWORD(v120) =g4_m128_lane<int32_t>(v130, 0) - 12;
g4_m128_lane<int32_t>(v123, 0) = LODWORD(v119);
        v74 = LODWORD(v119) - 36;
        v75 = LODWORD(v119) - 24;
        LODWORD(v121) =g4_m128_lane<int32_t>(v130, 0) - 24;
        v76 = v106;
        LODWORD(v128) = LODWORD(v119) - 12;
        do
        {
g4_m128_lane<int32_t>(v123, 0) -= 36;
          v77 =g4_m128_lane<int32_t>(v123, 0) - LODWORD(v119);
          v78 =g4_m128_lane<int32_t>(v122, 0);
          v79 = *(uint32_t *)(g4_m128_lane<int32_t>(v123, 0) - LODWORD(v119) + v74 + 36);
g4_m128_lane<int32_t>(v125, 0) -= 36;
          v80 =g4_m128_lane<int32_t>(v125, 0) -g4_m128_lane<int32_t>(v130, 0);
          *(uint32_t *)(v80 +g4_m128_lane<int32_t>(v122, 0) + 36) = v79;
          *(uint32_t *)(v80 + v78 + 40) = *(uint32_t *)(v77 + v74 + 40);
          *(uint32_t *)(v80 + v78 + 44) = *(uint32_t *)(v77 + v74 + 44);
          v81 = LODWORD(v121);
          *(uint32_t *)(v80 + LODWORD(v121) + 36) = *(uint32_t *)(v77 + v75 + 36);
          *(uint32_t *)(v80 + v81 + 40) = *(uint32_t *)(v77 + v75 + 40);
          *(uint32_t *)(v80 + v81 + 44) = *(uint32_t *)(v77 + v75 + 44);
          *(uint32_t *)(v80 + LODWORD(v120) + 36) = *(uint32_t *)(v77 + LODWORD(v128) + 36);
          *(uint32_t *)(v80 + LODWORD(v120) + 40) = *(uint32_t *)(v77 + LODWORD(v128) + 40);
          *(uint32_t *)(v80 + LODWORD(v120) + 44) = *(uint32_t *)(v77 + LODWORD(v128) + 44);
          --g4_m128_lane<int32_t>(v129, 0);
        }
        while (g4_m128_lane<int32_t>(v129, 0) != 0 );
        v106 = v76;
      }
      result = (double *)((char *)a2 +g4_m128_lane<int32_t>(v116, 0));
g4_m128_lane<int32_t>(v125, 0) = (int32_t)(uintptr_t)(a2) +g4_m128_lane<int32_t>(v116, 0);
      if ( (double *)((char *)a2 +g4_m128_lane<int32_t>(v116, 0)) != a2 )
      {
        v82 = ((954437177 * ((unsigned int)(g4_m128_lane<int32_t>(v116, 0) - 36) >> 2)) & 0x3FFFFFFF) + 1;
        v83 = 4 * (v82 >> 2);
        if ( v82 <= 3 )
          goto LABEL_45;
        if ( v83 == 0 )
          goto LABEL_45;
        _mm_storel_ps(&v105, _mm_unpacklo_ps(v72, v73));
        _mm_storel_ps(&v121, _mm_unpacklo_ps(v70, v71));
        v84 = _mm_loadh_ps(&v105);
        _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v129), _mm_unpacklo_ps(v68, v69));
        v85 = 0;
        v130 = v84;
        _mm_storel_ps(&v120, _mm_unpacklo_ps(G4_BITCAST<__m128>(v126), G4_BITCAST<__m128>(v106)));
        v116 = _mm_loadh_ps((const double *)g4_m128_ptr<uint64_t>(v129));
        _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v124), _mm_unpacklo_ps(v73, g4_to_m128((unsigned int)(uintptr_t)(v127))));
        v86 = _mm_loadh_ps((const double *)g4_m128_ptr<uint64_t>(v124));
        _mm_storel_ps(&v128, _mm_unpacklo_ps(v71, v72));
        v115 = v86;
        v87 = _mm_unpacklo_ps(G4_BITCAST<__m128>(v106), v68);
        _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v123), _mm_unpacklo_ps(v69, v70));
        v88 = _mm_loadh_ps((const double *)g4_m128_ptr<uint64_t>(v123));
        _mm_storel_ps(&v119, v87);
        v114 = v88;
        _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v122), _mm_unpacklo_ps(g4_to_m128((unsigned int)(uintptr_t)(v127)), G4_BITCAST<__m128>(v126)));
        v89 = _mm_loadh_ps((const double *)g4_m128_ptr<uint64_t>(v122));
        v129 = _mm_loadh_ps(&v121);
        v124 = _mm_loadh_ps(&v120);
        v123 = _mm_loadh_ps(&v128);
        v90 = a2;
        v122 = _mm_loadh_ps(&v119);
        LODWORD(v120) =g4_m128_lane<int32_t>(v68, 0);
        LODWORD(v128) =g4_m128_lane<int32_t>(v69, 0);
        LODWORD(v119) =g4_m128_lane<int32_t>(v70, 0);
        v118 =g4_m128_lane<int32_t>(v71, 0);
        v117 =g4_m128_lane<int32_t>(v72, 0);
        v113 =g4_m128_lane<int32_t>(v73, 0);
        LODWORD(v121) = v106;
        v91 = v115;
        v92 = v114;
        v93 = v129;
        v94 = v124;
        v95 = v123;
        v96 = v122;
        do
        {
          v97 = v116;
          ++v85;
          _mm_storel_ps(v90 + 14, v116);
          _mm_storeh_ps(v90 + 15, v97);
          v98 = v130;
          _mm_storel_ps(v90, v96);
          _mm_storeh_ps(v90 + 1, v96);
          _mm_storel_ps(v90 + 2, v95);
          _mm_storeh_ps(v90 + 3, v95);
          _mm_storel_ps(v90 + 4, v94);
          _mm_storeh_ps(v90 + 5, v94);
          _mm_storel_ps(v90 + 6, v93);
          _mm_storeh_ps(v90 + 7, v93);
          _mm_storel_ps(v90 + 8, v89);
          _mm_storeh_ps(v90 + 9, v89);
          _mm_storel_ps(v90 + 10, v92);
          _mm_storeh_ps(v90 + 11, v92);
          _mm_storel_ps(v90 + 12, v91);
          _mm_storeh_ps(v90 + 13, v91);
          _mm_storel_ps(v90 + 16, v98);
          _mm_storeh_ps(v90 + 17, v98);
          v90 += 18;
        }
        while ( v82 >> 2 > v85 );
        v106 = LODWORD(v121);
g4_m128_lane<int32_t>(v68, 0) = LODWORD(v120);
        result = &a2[18 * (v82 >> 2)];
g4_m128_lane<int32_t>(v124, 0) = (int32_t)(uintptr_t)(result);
g4_m128_lane<int32_t>(v69, 0) = LODWORD(v128);
g4_m128_lane<int32_t>(v70, 0) = LODWORD(v119);
g4_m128_lane<int32_t>(v71, 0) = v118;
g4_m128_lane<int32_t>(v72, 0) = v117;
g4_m128_lane<int32_t>(v73, 0) = v113;
        if ( v83 != v82 )
        {
LABEL_45:
          result = (double *)g4_m128_lane<int32_t>(v124, 0);
          v99 = (uint32_t *)(g4_m128_lane<int32_t>(v124, 0) + 16);
          v100 = v126;
          v101 =g4_m128_lane<int32_t>(v124, 0) + 24;
g4_m128_lane<int32_t>(v129, 0) =g4_m128_lane<int32_t>(v124, 0) + 12;
          do
          {
            *(uint32_t *)result = (uint32_t)(uintptr_t)(v127);
            v102 = (char *)result -g4_m128_lane<int32_t>(v124, 0);
            v103 = v106;
            *((uint32_t *)result + 1) = v100;
            v104 = (char *)v99 -g4_m128_lane<int32_t>(v129, 0);
            *((uint32_t *)result + 2) = v103;
            result = (double *)((char *)result + 36);
            v53 =g4_m128_lane<int32_t>(v125, 0) == (uint32_t)(uintptr_t)(result);
            *(v99 - 1) =g4_m128_lane<int32_t>(v68, 0);
            *v99 =g4_m128_lane<int32_t>(v69, 0);
            v99[1] =g4_m128_lane<int32_t>(v70, 0);
            v99 += 9;
            *(uint32_t *)&v102[v101] =g4_m128_lane<int32_t>(v71, 0);
            *(uint32_t *)&v104[v101] =g4_m128_lane<int32_t>(v72, 0);
            *(uint32_t *)&v102[v101 + 8] =g4_m128_lane<int32_t>(v73, 0);
          }
          while ( !v53 );
        }
      }
    }
    else
    {
      v15 = a3 -g4_m128_lane<int32_t>(v122, 0);
      v16 = (uint32_t *)g4_m128_lane<int32_t>(v130, 0);
g4_m128_lane<int32_t>(v129, 0) = a3 -g4_m128_lane<int32_t>(v122, 0);
      if ( a3 !=g4_m128_lane<int32_t>(v122, 0) )
      {
        v17 = (unsigned int *)(g4_m128_lane<int32_t>(v130, 0) + 16);
g4_m128_lane<int32_t>(v123, 0) =g4_m128_lane<int32_t>(v130, 0) + 12;
        v18 =g4_m128_lane<int32_t>(v130, 0);
        v19 = v106;
        do
        {
          if ( v16 != nullptr )
          {
            *v16 = (uint32_t)(uintptr_t)(v127);
            v20 = (char *)v17 -g4_m128_lane<int32_t>(v123, 0);
            v16[1] = v126;
            v16[2] = v19;
            *(v17 - 1) = v9;
            *v17 = v10;
            v17[1] = v11;
            v16[6] = v12;
            *(uint32_t *)&v20[v18 + 24] = v13;
            v16[8] = v14;
          }
          v16 += 9;
          v17 += 9;
          --v15;
        }
        while ( v15 != 0 );
        v106 = v19;
        v16 = (uint32_t *)a1[1];
      }
      v21 = &v16[9 *g4_m128_lane<int32_t>(v129, 0)];
      v22 = (uint32_t *)g4_m128_lane<int32_t>(v130, 0);
      a1[1] = (int)(uintptr_t)(v21);
      v112 = v9;
      v111 = v10;
      v110 = v11;
      v109 = v12;
      v108 = v13;
      v107 = v14;
      sub_EA07F0(a2, v22, v21);
      a1[1] += 36 *g4_m128_lane<int32_t>(v122, 0);
      result = a2;
g4_m128_raw(v23) = v112;
g4_m128_raw(v24) = v111;
g4_m128_raw(v25) = v110;
g4_m128_raw(v26) = v109;
g4_m128_raw(v27) = v108;
g4_m128_raw(v28) = v107;
      if ( (double *)g4_m128_lane<int32_t>(v130, 0) != a2 )
      {
        v29 = ((954437177 * ((unsigned int)(g4_m128_lane<int32_t>(v130, 0) - ((uint32_t)(uintptr_t)(a2) + 36)) >> 2)) & 0x3FFFFFFF) + 1;
        v30 = 4 * (v29 >> 2);
        if ( v29 <= 3 )
          goto LABEL_16;
        if ( v30 == 0 )
          goto LABEL_16;
        v31 = _mm_unpacklo_ps(G4_BITCAST<__m128>(v110), G4_BITCAST<__m128>(v109));
        _mm_storel_ps(&v105, _mm_unpacklo_ps(G4_BITCAST<__m128>(v108), G4_BITCAST<__m128>(v107)));
        _mm_storel_ps(&v121, v31);
        v32 = _mm_loadh_ps(&v105);
        _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v124), _mm_unpacklo_ps(v23, v24));
        v33 = 0;
        v129 = v32;
        _mm_storel_ps(&v120, _mm_unpacklo_ps(G4_BITCAST<__m128>(v126), G4_BITCAST<__m128>(v106)));
        v116 = _mm_loadh_ps((const double *)g4_m128_ptr<uint64_t>(v124));
        _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v125), _mm_unpacklo_ps(v28, g4_to_m128((unsigned int)(uintptr_t)(v127))));
        v34 = _mm_loadh_ps((const double *)g4_m128_ptr<uint64_t>(v125));
        _mm_storel_ps(&v128, _mm_unpacklo_ps(v26, v27));
        v115 = v34;
        v35 = _mm_unpacklo_ps(G4_BITCAST<__m128>(v106), v23);
        _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v123), _mm_unpacklo_ps(v24, v25));
        v36 = _mm_loadh_ps((const double *)g4_m128_ptr<uint64_t>(v123));
        _mm_storel_ps(&v119, v35);
        v114 = v36;
        _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v122), _mm_unpacklo_ps(g4_to_m128((unsigned int)(uintptr_t)(v127)), G4_BITCAST<__m128>(v126)));
        v37 = _mm_loadh_ps((const double *)g4_m128_ptr<uint64_t>(v122));
        v124 = _mm_loadh_ps(&v121);
        v125 = _mm_loadh_ps(&v120);
        v123 = _mm_loadh_ps(&v128);
        v38 = a2;
        v122 = _mm_loadh_ps(&v119);
        LODWORD(v120) =g4_m128_lane<int32_t>(v23, 0);
        LODWORD(v128) =g4_m128_lane<int32_t>(v24, 0);
        LODWORD(v119) =g4_m128_lane<int32_t>(v25, 0);
        v118 =g4_m128_lane<int32_t>(v26, 0);
        v117 =g4_m128_lane<int32_t>(v27, 0);
        v113 =g4_m128_lane<int32_t>(v28, 0);
        LODWORD(v121) = v106;
        v39 = v115;
        v40 = v114;
        v41 = v124;
        v42 = v125;
        v43 = v123;
        v44 = v122;
        do
        {
          v45 = v116;
          ++v33;
          _mm_storel_ps(v38 + 14, v116);
          _mm_storeh_ps(v38 + 15, v45);
          v46 = v129;
          _mm_storel_ps(v38, v44);
          _mm_storeh_ps(v38 + 1, v44);
          _mm_storel_ps(v38 + 2, v43);
          _mm_storeh_ps(v38 + 3, v43);
          _mm_storel_ps(v38 + 4, v42);
          _mm_storeh_ps(v38 + 5, v42);
          _mm_storel_ps(v38 + 6, v41);
          _mm_storeh_ps(v38 + 7, v41);
          _mm_storel_ps(v38 + 8, v37);
          _mm_storeh_ps(v38 + 9, v37);
          _mm_storel_ps(v38 + 10, v40);
          _mm_storeh_ps(v38 + 11, v40);
          _mm_storel_ps(v38 + 12, v39);
          _mm_storeh_ps(v38 + 13, v39);
          _mm_storel_ps(v38 + 16, v46);
          _mm_storeh_ps(v38 + 17, v46);
          v38 += 18;
        }
        while ( v29 >> 2 > v33 );
        v106 = LODWORD(v121);
g4_m128_lane<int32_t>(v23, 0) = LODWORD(v120);
        result = &a2[18 * (v29 >> 2)];
g4_m128_lane<int32_t>(v124, 0) = (int32_t)(uintptr_t)(result);
g4_m128_lane<int32_t>(v24, 0) = LODWORD(v128);
g4_m128_lane<int32_t>(v25, 0) = LODWORD(v119);
g4_m128_lane<int32_t>(v26, 0) = v118;
g4_m128_lane<int32_t>(v27, 0) = v117;
g4_m128_lane<int32_t>(v28, 0) = v113;
        if ( v29 != v30 )
        {
LABEL_16:
          result = (double *)g4_m128_lane<int32_t>(v124, 0);
          v47 = (uint32_t *)(g4_m128_lane<int32_t>(v124, 0) + 16);
          v48 = v126;
          v49 =g4_m128_lane<int32_t>(v124, 0) + 24;
g4_m128_lane<int32_t>(v129, 0) =g4_m128_lane<int32_t>(v124, 0) + 12;
          do
          {
            *(uint32_t *)result = (uint32_t)(uintptr_t)(v127);
            v50 = (char *)result -g4_m128_lane<int32_t>(v124, 0);
            v51 = v106;
            *((uint32_t *)result + 1) = v48;
            v52 = (char *)v47 -g4_m128_lane<int32_t>(v129, 0);
            *((uint32_t *)result + 2) = v51;
            result = (double *)((char *)result + 36);
            v53 =g4_m128_lane<int32_t>(v130, 0) == (uint32_t)(uintptr_t)(result);
            *(v47 - 1) =g4_m128_lane<int32_t>(v23, 0);
            *v47 =g4_m128_lane<int32_t>(v24, 0);
            v47[1] =g4_m128_lane<int32_t>(v25, 0);
            v47 += 9;
            *(uint32_t *)&v50[v49] =g4_m128_lane<int32_t>(v26, 0);
            *(uint32_t *)&v52[v49] =g4_m128_lane<int32_t>(v27, 0);
            *(uint32_t *)&v50[v49 + 8] =g4_m128_lane<int32_t>(v28, 0);
          }
          while ( !v53 );
        }
      }
    }
    return result;
  }
  v54 = 954437177 * ((v5 - *a1) >> 2);
  if ( a3 > 119304647 - v54 )
    sub_1900180("vector::_M_fill_insert");
  v55 = a3;
  if ( v54 >= a3 )
    v55 = 954437177 * ((v5 - *a1) >> 2);
  v56 = 954437177 * (((int)(uintptr_t)(a2) - *a1) >> 2);
  v57 = __CFADD__(v55, v54);
  v58 = v55 + v54;
  if ( v57 || v58 > 0x71C71C7 )
  {
g4_m128_lane<int32_t>(v124, 0) = -4;
    v65 = 0xFFFFFFFC;
  }
  else
  {
    if ( v58 == 0 )
    {
g4_m128_lane<int32_t>(v124, 0) = 0;
      v127 = nullptr;
      goto LABEL_26;
    }
g4_m128_lane<int32_t>(v124, 0) = 36 * v58;
    v65 = 36 * v58;
  }
  v127 = (uint32_t *)sub_4EBDC0(v65);
LABEL_26:
  v59 = &v127[9 * v56];
  v60 = v59 + 4;
  v61 = v59 + 6;
g4_m128_lane<int32_t>(v130, 0) = a3;
  do
  {
    if ( v59 != nullptr )
    {
      *v59 = *(uint32_t *)a4;
      v59[1] = *(uint32_t *)(a4 + 4);
      v59[2] = *(uint32_t *)(a4 + 8);
      *(v60 - 1) = *(uint32_t *)(a4 + 12);
      *v60 = *(uint32_t *)(a4 + 16);
      v60[1] = *(uint32_t *)(a4 + 20);
      *v61 = *(uint32_t *)(a4 + 24);
      v61[1] = *(uint32_t *)(a4 + 28);
      v61[2] = *(uint32_t *)(a4 + 32);
    }
    v59 += 9;
    v60 += 9;
    v61 += 9;
    --g4_m128_lane<int32_t>(v130, 0);
  }
  while (g4_m128_lane<int32_t>(v130, 0) != 0 );
  v62 = (uint32_t *)(uintptr_t)(sub_EA07F0((uint32_t *)*a1, a2, v127));
  v63 = (uint32_t *)(uintptr_t)(sub_EA07F0(a2, (uint32_t *)a1[1], &v62[9 * a3]));
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  v64 = v127;
  *a1 = (int)(uintptr_t)(v127);
  result = (double *)((char *)v64 +g4_m128_lane<int32_t>(v124, 0));
  a1[1] = (int)(uintptr_t)(v63);
  a1[2] = (int)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_vector3d_float_e112fa::M_range_insert_gnu_cxx_normal_iterator_8f01ad  (binary VA: 0xf10800)
// Original: std::vector<glitch::core::vector3d<float>>::_M_range_insert<__gnu_cxx::__normal_iterator<glitch::core::vector3d<float>*,std::vector<glitch::core::vector3d<float>>>>
// ----------------------------------------------------------------------------
void g4_std::vector_vector3d_float_e112fa::M_range_insert_gnu_cxx_normal_iterator_8f01ad(void **a1, char *a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  char *v11;
  uint32_t *v12;
  int v13;
  char *v14;
  char *v15;
  int v16;
  unsigned int v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  uint32_t *v21;
  char *v22;
  int v23;
  int v24;
  char *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  char *v29;
  void **v30;
  char *v31;
  int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  __m128 v36;
  __m128 v37;
  __m128 v38;
  char *v39;
  int v40;
  unsigned int v41;
  int v42;
  bool v43;
  unsigned int v44;
  int v45;
  uint32_t *v46;
  char *v47;
  uint32_t *v48;
  void **v49;
  char *v50;
  uint32_t *v51;
  char *v52;
  int v53;
  int v54;
  uint32_t *v55;
  uint32_t *v56;
  int v57;
  int v58;
  int v59;
  char *v60;
  char *v61;
  char *v62;
  unsigned int v63;
  int v64;
  uint32_t *v65;
  char *v66;
  uint32_t *v67;
  uint32_t *v68;
  int v69;
  int v70;

  v4 = (uint32_t *)a3;
  v5 = (unsigned int)(uintptr_t)(a2);
  v60 = a2;
  v55 = (uint32_t *)a3;
  if ( (uint32_t *)a3 == a4 )
    return;
  v6 = (int)((int)(uintptr_t)(a4) - a3) >> 2;
  v66 = (char *)a1[1];
  v63 = -1431655765 * v6;
  v53 = -1431655765 * v6;
  if ( -1431655765 * v6 <= (unsigned int)(-1431655765 * (((uint8_t *)a1[2] - (uint8_t *)(v66)) >> 2)) )
  {
    v7 = (v66 - a2) >> 2;
    v57 = -1431655765 * v7;
    if ( v63 >= -1431655765 * v7 )
    {
      v25 = (char *)a1[1];
      v54 = 4 * v7;
      v26 = (uint32_t *)(a3 + 4 * v7);
      v56 = v26;
      if ( a4 != v26 )
      {
        v27 = v26;
        v28 = (uint32_t *)(a1[1]);
        do
        {
          if ( v28 != nullptr )
          {
            *v28 = *v27;
            v28[1] = v27[1];
            v28[2] = v27[2];
          }
          v27 += 3;
          v28 += 3;
        }
        while ( a4 != v27 );
        v5 = (unsigned int)(uintptr_t)(a2);
        v25 = (char *)a1[1];
      }
      v29 = &v25[12 * (v63 - v57)];
      v30 = a1;
      a1[1] = v29;
      if ( v66 != (char *)v5 )
      {
        v31 = (char *)v5;
        do
        {
          if ( v29 != nullptr )
          {
            *(uint32_t *)v29 = *(uint32_t *)v31;
            *((uint32_t *)v29 + 1) = *((uint32_t *)v31 + 1);
            *((uint32_t *)v29 + 2) = *((uint32_t *)v31 + 2);
          }
          v31 += 12;
          v29 += 12;
        }
        while ( v66 != v31 );
        v30 = a1;
        v29 = (char *)a1[1];
      }
      v30[1] = &v29[v54];
      v32 = -1431655765 * ((int)((int)(uintptr_t)(v56) - a3) >> 2);
      v70 = v32;
      if ( v32 > 0 )
      {
        v33 = (unsigned int)v32 >> 2;
        v64 = 4 * ((unsigned int)v32 >> 2);
        if ( v64 == 0 )
          goto LABEL_40;
        if ( a3 <= v5 + 48 && v5 <= a3 + 48 || (unsigned int)v32 <= 5 )
          goto LABEL_40;
        v34 = 0;
        v35 = 0;
        do
        {
          ++v35;
          v36 = _mm_loadh_ps((const double *)(a3 + v34 + 8));
          v37 = _mm_loadh_ps((const double *)(a3 + v34 + 24));
          v38 = _mm_loadh_ps((const double *)(a3 + v34 + 40));
          _mm_storel_ps((double *)(v5 + v34), v36);
          _mm_storeh_ps((double *)(v5 + v34 + 8), v36);
          _mm_storel_ps((double *)(v5 + v34 + 16), v37);
          _mm_storeh_ps((double *)(v5 + v34 + 24), v37);
          _mm_storel_ps((double *)(v5 + v34 + 32), v38);
          _mm_storeh_ps((double *)(v5 + v34 + 40), v38);
          v34 += 48;
        }
        while ( v35 < v33 );
        v4 = (uint32_t *)(12 * v64 + a3);
        v60 = (char *)(v5 + 12 * v64);
        v32 = v70 - v64;
        if ( v70 != v64 )
        {
LABEL_40:
          v39 = v60;
          do
          {
            --v32;
            *(uint32_t *)v39 = *v4;
            *((uint32_t *)v39 + 1) = v4[1];
            v40 = v4[2];
            v4 += 3;
            *((uint32_t *)v39 + 2) = v40;
            v39 += 12;
          }
          while ( v32 > 0 );
        }
      }
    }
    else
    {
      v8 = 4 * v6;
      v9 = &v66[-v8];
      v58 = v8;
      v10 = (char *)a1[1];
      v62 = v9;
      if ( v66 != v9 )
      {
        v11 = v9;
        v12 = (uint32_t *)(a1[1]);
        do
        {
          if ( v12 != nullptr )
          {
            *v12 = *(uint32_t *)v11;
            v12[1] = *((uint32_t *)v11 + 1);
            v12[2] = *((uint32_t *)v11 + 2);
          }
          v11 += 12;
          v12 += 3;
        }
        while ( v66 != v11 );
        v5 = (unsigned int)(uintptr_t)(a2);
        v9 = v62;
        v10 = (char *)a1[1];
      }
      a1[1] = &v10[v58];
      v13 = -1431655765 * ((int)(uintptr_t)(&v9[-v5]) >> 2);
      if ( v13 > 0 )
      {
        v14 = v66 - 12;
        v15 = v62 - 12;
        do
        {
          --v13;
          *(uint32_t *)v14 = *(uint32_t *)v15;
          *((uint32_t *)v14 + 1) = *((uint32_t *)v15 + 1);
          *((uint32_t *)v14 + 2) = *((uint32_t *)v15 + 2);
          v15 -= 12;
          v14 -= 12;
        }
        while ( v13 != 0 );
      }
      if ( (int)v63 > 0 )
      {
        v69 = 4 * (v63 >> 2);
        if ( v69 == 0 )
          goto LABEL_19;
        if ( a3 <= v5 + 48 && v5 <= a3 + 48 || v63 <= 5 )
          goto LABEL_19;
        v16 = 0;
        v17 = 0;
        do
        {
          ++v17;
          v18 = _mm_loadh_ps((const double *)(a3 + v16 + 8));
          v19 = _mm_loadh_ps((const double *)(a3 + v16 + 24));
          v20 = _mm_loadh_ps((const double *)(a3 + v16 + 40));
          _mm_storel_ps((double *)(v5 + v16), v18);
          _mm_storeh_ps((double *)(v5 + v16 + 8), v18);
          _mm_storel_ps((double *)(v5 + v16 + 16), v19);
          _mm_storeh_ps((double *)(v5 + v16 + 24), v19);
          _mm_storel_ps((double *)(v5 + v16 + 32), v20);
          _mm_storeh_ps((double *)(v5 + v16 + 40), v20);
          v16 += 48;
        }
        while ( v63 >> 2 > v17 );
        v53 = v63 - v69;
        v55 = (uint32_t *)(48 * (v63 >> 2) + a3);
        v60 = (char *)(v5 + 48 * (v63 >> 2));
        if ( v63 != v69 )
        {
LABEL_19:
          v21 = v55;
          v22 = v60;
          v23 = v53;
          do
          {
            --v23;
            *(uint32_t *)v22 = *v21;
            *((uint32_t *)v22 + 1) = v21[1];
            v24 = v21[2];
            v21 += 3;
            *((uint32_t *)v22 + 2) = v24;
            v22 += 12;
          }
          while ( v23 > 0 );
        }
      }
    }
    return;
  }
  v61 = (char *)*a1;
  v41 = -1431655765 * ((v66 - (char *)((uint8_t *)*a1)) >> 2);
  if ( v63 > 357913941 - v41 )
    sub_1900180("vector::_M_range_insert");
  v42 = -1431655765 * v6;
  if ( v41 >= v63 )
    v42 = -1431655765 * ((v66 - (char *)((uint8_t *)*a1)) >> 2);
  v59 = -1;
  v43 = __CFADD__(v42, v41);
  v44 = v42 - 1431655765 * ((v66 - (char *)((uint8_t *)*a1)) >> 2);
  if ( v43 || v44 > 0x15555555 )
  {
    v45 = opNew(0xFFFFFFFC);
  }
  else
  {
    v59 = 0;
    v65 = nullptr;
    if ( v44 == 0 )
      goto LABEL_49;
    v59 = 3 * v44;
    v45 = opNew(12 * v44);
  }
  v65 = (uint32_t *)v45;
  v61 = (char *)*a1;
LABEL_49:
  v46 = v65;
  v67 = v65;
  if ( a2 != v61 )
  {
    v47 = v61;
    do
    {
      if ( v46 != nullptr )
      {
        *v46 = *(uint32_t *)v47;
        v46[1] = *((uint32_t *)v47 + 1);
        v46[2] = *((uint32_t *)v47 + 2);
      }
      v47 += 12;
      v46 += 3;
    }
    while ( v47 != a2 );
    v46 = &v65[((unsigned int)(a2 - (v61 + 12)) >> 2) + 3];
    v67 = v46;
  }
  v48 = (uint32_t *)a3;
  do
  {
    if ( v46 != nullptr )
    {
      *v46 = *v48;
      v46[1] = v48[1];
      v46[2] = v48[2];
    }
    v48 += 3;
    v46 += 3;
  }
  while ( a4 != v48 );
  v49 = a1;
  v50 = (char *)a1[1];
  v51 = &v67[(((unsigned int)(uintptr_t)(a4) - a3 - 12) >> 2) + 3];
  v68 = v51;
  if ( v50 != a2 )
  {
    v52 = a2;
    do
    {
      if ( v51 != nullptr )
      {
        *v51 = *(uint32_t *)v52;
        v51[1] = *((uint32_t *)v52 + 1);
        v51[2] = *((uint32_t *)v52 + 2);
      }
      v52 += 12;
      v51 += 3;
    }
    while ( v50 != v52 );
    v49 = a1;
    v68 += ((unsigned int)(v50 - (a2 + 12)) >> 2) + 3;
  }
  if ( *v49 != nullptr )
    opDelete(*v49);
  *a1 = v65;
  a1[1] = v68;
  a1[2] = &v65[v59];
}



// ============================================================================
// Address:   0xf10df0 (size: 923 bytes)
// Symbol:    _ZNSt6vectorIN6glitch5scene19SParameterAtlasInfoENS0_4core10SAllocatorIS2_LNS0_6memory13E_MEMORY_HINTE0EEEE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPS2_S8_EEEEvSD_T_SE_St20forward_iterator_tag
// Demangled: void std::vector<glitch::scene::SParameterAtlasInfo,glitch::core::SAllocator<glitch::scene::SParameterAtlasInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_range_insert<__gnu_cxx::__normal_iterator<glitch::scene::SParameterAtlasInfo*,std::vector<glitch::scene::SParameterAtlasInfo,glitch::core::SAllocator<glitch::scene::SParameterAtlasInfo,(glitch::memory::E_MEMORY_HINT)0>>>>(__gnu_cxx::__normal_iterator<glitch::scene::SParameterAtlasInfo*,std::vector<glitch::scene::SParameterAtlasInfo,glitch::core::SAllocator<glitch::scene::SParameterAtlasInfo,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::scene::SParameterAtlasInfo*,std::vector<glitch::scene::SParameterAtlasInfo,glitch::core::SAllocator<glitch::scene::SParameterAtlasInfo,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::scene::SParameterAtlasInfo*,std::vector<glitch::scene::SParameterAtlasInfo,glitch::core::SAllocator<glitch::scene::SParameterAtlasInfo,(glitch::memory::E_MEMORY_HINT)0>>>,std::forward_iterator_tag)
// ============================================================================
static void g4_compat_def_16(
        int a1,
        glitch::scene::SParameterAtlasInfo *a2,
        glitch::scene::SParameterAtlasInfo *a3,
        glitch::scene::SParameterAtlasInfo *a4)
{
  glitch::scene::SParameterAtlasInfo *v4;
  int v5;
  glitch::scene::SParameterAtlasInfo *v6;
  int v7;
  int v8;
  int v9;
  volatile int32_t **v10;
  bool v11;
  int v12;
  volatile int32_t **v13;
  glitch::scene::SParameterAtlasInfo *v14;
  volatile int32_t **v15;
  volatile int32_t **v16;
  int v17;
  glitch::scene::SParameterAtlasInfo *v18;
  glitch::scene::SParameterAtlasInfo *v19;
  unsigned int v20;
  unsigned int v21;
  bool v22;
  unsigned int v23;
  glitch::scene::SParameterAtlasInfo *v24;
  volatile int32_t **v25;
  volatile int32_t **v26;
  volatile int32_t **v27;
  int *v28;
  glitch::scene::SParameterAtlasInfo *v29;
  volatile int32_t **v30;
  volatile int32_t **v31;
  int v32;
  glitch::scene::SParameterAtlasInfo *v33;
  glitch::scene::SParameterAtlasInfo *v34;
  glitch::video::CMaterial::Self **v35;
  int v36;
  volatile int32_t **v37;
  int v38;
  volatile int32_t **v39;
  int v40;
  glitch::scene::SParameterAtlasInfo *v41;
  size_t v42;
  glitch::video::CMaterial::Self **v43;
  glitch::video::CMaterial::Self **v44;
  glitch::video::CMaterial::Self **v45;
  glitch::video::CMaterial::Self **v46;
  glitch::video::CMaterial::Self **v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  int *v52;
  size_t v53;
  char *v54;
  int v55;
  int v56;
  int v57;
  int v58;
  volatile int32_t **v59;
  glitch::scene::SParameterAtlasInfo *v60;

  v4 = a4;
  v5 = a1;
  if ( a3 == a4 )
    return;
  v6 = *(glitch::scene::SParameterAtlasInfo **)(a1 + 4);
  v7 = (a4 - a3) >> 2;
  v48 = -858993459 * v7;
  v53 = -858993459 * v7;
  if ( -858993459 * v7 <= (unsigned int)(-858993459 * ((*(uint32_t *)(a1 + 8) - (int)(uintptr_t)(v6)) >> 2)) )
  {
    v8 = (v6 - a2) >> 2;
    v56 = -858993459 * v8;
    if ( v48 < -858993459 * v8 )
    {
      v36 = 4 * v7;
      v37 = (volatile int32_t **)((char *)v6 - v36);
      v57 = v36;
      v38 = *(uint32_t *)(a1 + 4);
      if ( v6 != (glitch::scene::SParameterAtlasInfo *)((char *)v6 - v36) )
      {
        v59 = (volatile int32_t **)((char *)v6 - v36);
        v39 = *(volatile int32_t ***)(a1 + 4);
        do
        {
          if ( v6 != nullptr )
            glitch::scene::SParameterAtlasInfo::Construct(v6, v37);
          v37 += 5;
          v6 = (glitch::scene::SParameterAtlasInfo *)((char *)v6 + 20);
        }
        while ( v39 != v37 );
        v6 = (glitch::scene::SParameterAtlasInfo *)v39;
        v5 = a1;
        v37 = v59;
        v38 = *(uint32_t *)(a1 + 4);
      }
      *(uint32_t *)(v5 + 4) = v57 + v38;
      v40 = -858993459 * (((char *)v37 - (char *)a2) >> 2);
      if ( v40 > 0 )
      {
        do
        {
          v37 -= 5;
          v6 = (glitch::scene::SParameterAtlasInfo *)((char *)v6 - 20);
          glitch::scene::SParameterAtlasInfo::opAssign(
            (glitch::video::CMaterial::Self **)v6,
            (glitch::video::CMaterial::Self **)v37);
          --v40;
        }
        while ( v40 != 0 );
      }
      if ( (int)v48 > 0 )
      {
        v41 = a2;
        v42 = v53;
        do
        {
          v45 = (glitch::video::CMaterial::Self **)v41;
          v47 = (glitch::video::CMaterial::Self **)((char *)v41 + ((char *)a3 - (char *)a2));
          v41 = (glitch::scene::SParameterAtlasInfo *)((char *)v41 + 20);
          glitch::scene::SParameterAtlasInfo::opAssign(v45, v47);
          --v42;
        }
        while ( v42 != 0 );
      }
    }
    else
    {
      v9 = 4 * v8;
      v10 = (volatile int32_t **)((char *)a3 + v9);
      v58 = v9;
      v11 = a4 == (glitch::scene::SParameterAtlasInfo *)((char *)a3 + v9);
      v54 = (char *)a3 + v9;
      v12 = *(uint32_t *)(a1 + 4);
      if ( !v11 )
      {
        v60 = *(glitch::scene::SParameterAtlasInfo **)(a1 + 4);
        v13 = v10;
        do
        {
          if ( v6 != nullptr )
            glitch::scene::SParameterAtlasInfo::Construct(v6, v13);
          v13 += 5;
          v6 = (glitch::scene::SParameterAtlasInfo *)((char *)v6 + 20);
        }
        while ( a4 != (glitch::scene::SParameterAtlasInfo *)v13 );
        v5 = a1;
        v6 = v60;
        v12 = *(uint32_t *)(a1 + 4);
      }
      v14 = (glitch::scene::SParameterAtlasInfo *)(v12 + 20 * (v48 - v56));
      *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v14);
      if ( v6 != a2 )
      {
        v49 = v5;
        v15 = (volatile int32_t **)v6;
        v16 = (volatile int32_t **)a2;
        do
        {
          if ( v14 != nullptr )
            glitch::scene::SParameterAtlasInfo::Construct(v14, v16);
          v16 += 5;
          v14 = (glitch::scene::SParameterAtlasInfo *)((char *)v14 + 20);
        }
        while ( v15 != v16 );
        v5 = v49;
        v14 = *(glitch::scene::SParameterAtlasInfo **)(v49 + 4);
      }
      *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)((char *)v14 + v58);
      v17 = -858993459 * ((v54 - (char *)a3) >> 2);
      if ( v17 > 0 )
      {
        v18 = a2;
        do
        {
          v43 = (glitch::video::CMaterial::Self **)v18;
          v46 = (glitch::video::CMaterial::Self **)((char *)v18 + ((char *)a3 - (char *)a2));
          v18 = (glitch::scene::SParameterAtlasInfo *)((char *)v18 + 20);
          glitch::scene::SParameterAtlasInfo::opAssign(v43, v46);
          --v17;
        }
        while ( v17 != 0 );
      }
    }
    return;
  }
  v19 = *(glitch::scene::SParameterAtlasInfo **)a1;
  v20 = -858993459 * (((int)(uintptr_t)(v6) - *(uint32_t *)a1) >> 2);
  if ( v48 > 214748364 - v20 )
    sub_1900180("vector::_M_range_insert");
  v21 = v48;
  if ( v20 >= v48 )
    v21 = v20;
  v55 = -16;
  v22 = __CFADD__(v21, v20);
  v23 = v21 + v20;
  if ( !v22 && v23 <= 0xCCCCCCC )
  {
    if ( v23 == 0 )
    {
      v50 = 0;
      v55 = 0;
      v24 = nullptr;
      goto LABEL_25;
    }
    v55 = 20 * v23;
  }
  v50 = sub_4EBDC0(v55);
  v19 = *(glitch::scene::SParameterAtlasInfo **)a1;
  v24 = (glitch::scene::SParameterAtlasInfo *)v50;
LABEL_25:
  if ( a2 != v19 )
  {
    v25 = (volatile int32_t **)v19;
    do
    {
      if ( v24 != nullptr )
        glitch::scene::SParameterAtlasInfo::Construct(v24, v25);
      v25 += 5;
      v24 = (glitch::scene::SParameterAtlasInfo *)((char *)v24 + 20);
    }
    while ( a2 != (glitch::scene::SParameterAtlasInfo *)v25 );
    v5 = a1;
    v4 = a4;
  }
  v51 = v5;
  v26 = (volatile int32_t **)v4;
  v27 = (volatile int32_t **)a3;
  do
  {
    if ( v24 != nullptr )
      glitch::scene::SParameterAtlasInfo::Construct(v24, v27);
    v27 += 5;
    v24 = (glitch::scene::SParameterAtlasInfo *)((char *)v24 + 20);
  }
  while ( v26 != v27 );
  v28 = (int *)v51;
  v29 = *(glitch::scene::SParameterAtlasInfo **)(v51 + 4);
  if ( v29 != a2 )
  {
    v30 = *(volatile int32_t ***)(v51 + 4);
    v31 = (volatile int32_t **)a2;
    do
    {
      if ( v24 != nullptr )
        glitch::scene::SParameterAtlasInfo::Construct(v24, v31);
      v31 += 5;
      v24 = (glitch::scene::SParameterAtlasInfo *)((char *)v24 + 20);
    }
    while ( v30 != v31 );
    v28 = (int *)v51;
    v29 = *(glitch::scene::SParameterAtlasInfo **)(v51 + 4);
  }
  v32 = *v28;
  if ( (glitch::scene::SParameterAtlasInfo *)*v28 != v29 )
  {
    v52 = v28;
    v33 = v24;
    v34 = v29;
    v35 = (glitch::video::CMaterial::Self **)v32;
    do
    {
      v44 = v35;
      v35 += 5;
      sub_5ED4F0(v44);
    }
    while ( v34 != (glitch::scene::SParameterAtlasInfo *)v35 );
    v24 = v33;
    v28 = v52;
    v32 = *v52;
  }
  if ( v32 != 0 )
    gll_operator_delete_arr(v32);
  v28[1] = (int)(uintptr_t)(v24);
  *v28 = v50;
  v28[2] = v55 + v50;
}
// ----------------------------------------------------------------------------
// Function: g4_std::vector_scene_SAtlasArray_SItem_a60e17::M_fill_insert  (binary VA: 0xf11f50)
// Original: std::vector<glitch::scene::SAtlasArray::SItem>::_M_fill_insert
// ----------------------------------------------------------------------------
int g4_std::vector_scene_SAtlasArray_SItem_a60e17::M_fill_insert(int *a1, int *a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int *v5;
  unsigned int v6;
  int v7;
  bool v8;
  unsigned int v9;
  int v10;
  size_t v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  unsigned int i;
  int v16;
  bool v17;
  int v18;
  int *v19;
  int *v20;
  int *v21;
  int *v22;
  int v23;
  int v24;
  int *v25;
  int v26;
  int v27;
  int *v28;
  int v29;
  int v30;
  int *v31;
  unsigned int v32;
  int *v33;
  int v34;
  int v35;
  int *v36;
  int *v37;
  int v38;
  int v39;
  int v40;
  int *v41;
  int *v42;
  int *v43;
  int v44;
  int v45;
  int v46;
  int *v47;
  int v48;
  int v49;
  int v50;
  typedef int *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef int *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v51)) > _g4_s0 ? (0u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v52)) > _g4_s1 ? (20u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v53)) > _g4_s2 ? (20u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v54)) > _g4_s3 ? (28u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v55)) > _g4_s4 ? (28u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v56)) > _g4_s5 ? (32u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v57)) > _g4_s6 ? (32u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v58)) > _g4_s7 ? (36u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v59)) > _g4_s8 ? (44u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v60)) > _g4_s9 ? (44u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v61)) > _g4_s10 ? (48u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v62)) > _g4_s11 ? (64u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v63)) > _g4_s12 ? (80u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v64)) > _g4_s13 ? (96u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v65)) > _g4_s14 ? (100u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v66)) > _g4_s15 ? (104u + sizeof(_g4_t_v66)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 100u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 104u);

  result = a3;
  if ( a3 == 0 )
    return result;
  v56 = (int *)a1[1];
  if ( a3 > -1431655765 * ((a1[2] - (int)(uintptr_t)(v56)) >> 2) )
  {
    v5 = (int *)*a1;
    v6 = -1431655765 * (((int)(uintptr_t)(v56) - *a1) >> 2);
    if ( a3 > 357913941 - v6 )
      sub_1900180("vector::_M_fill_insert");
    v7 = a3;
    if ( v6 >= a3 )
      v7 = -1431655765 * (v56 - v5);
    v8 = __CFADD__(v7, v6);
    v9 = v7 - 1431655765 * (v56 - v5);
    if ( v8 || v9 > 0x15555555 )
    {
      v54 = -4;
      v10 = (char *)a2 - (char *)v5;
      v11 = 0xFFFFFFFC;
      v12 = -1431655765 * (v10 >> 2);
    }
    else
    {
      v54 = 0;
      v57 = 0;
      v12 = -1431655765 * (a2 - v5);
      if ( v9 == 0 )
      {
LABEL_10:
        v13 = (uint32_t *)(v57 + 12 * v12);
        v14 = a4;
        for ( i = a3; i != 0; --i )
        {
          if ( v13 != nullptr )
          {
            v16 = *v14;
            v17 = *v14 == 0;
            *v13 = *v14;
            if ( !v17 )
            {
              v53 = v14;
              sub_8B1B00((volatile int32_t *)(v16 + 4));
              v14 = v53;
            }
            v18 = v14[1];
            v13[2] = v14[2];
            v13[1] = v18;
          }
          v13 += 3;
        }
        v19 = a1;
        v20 = a2;
        v21 = (int *)v57;
        if ( (int *)*a1 != a2 )
        {
          v22 = (int *)*a1;
          do
          {
            if ( v21 != nullptr )
            {
              v23 = *v22;
              v17 = *v22 == 0;
              *v21 = *v22;
              if ( !v17 )
                sub_8B1B00((volatile int32_t *)(v23 + 4));
              v24 = v22[1];
              v21[2] = v22[2];
              v21[1] = v24;
            }
            v22 += 3;
            v21 += 3;
          }
          while ( a2 != v22 );
          v20 = a2;
          v19 = a1;
        }
        v59 = (int *)v19[1];
        v25 = &v21[3 * a3];
        if ( v59 != a2 )
        {
          do
          {
            if ( v25 != nullptr )
            {
              v26 = *v20;
              v17 = *v20 == 0;
              *v25 = *v20;
              if ( !v17 )
                sub_8B1B00((volatile int32_t *)(v26 + 4));
              v27 = v20[1];
              v25[2] = v20[2];
              v25[1] = v27;
            }
            v20 += 3;
            v25 += 3;
          }
          while ( v59 != v20 );
          v59 = (int *)a1[1];
        }
        v28 = (int *)*a1;
        if ( (int *)*a1 != v59 )
        {
          do
          {
            v51 = v28;
            v28 += 3;
            sub_5ED480(v51);
          }
          while ( v28 != v59 );
          v28 = (int *)*a1;
        }
        if ( v28 != nullptr )
          opDelete(v28);
        *a1 = v57;
        result = v54 + v57;
        a1[1] = (int)(uintptr_t)(v25);
        a1[2] = v54 + v57;
        return result;
      }
      v54 = 12 * v9;
      v11 = 12 * v9;
    }
    v52 = v12;
    v57 = opNew(v11);
    v12 = v52;
    goto LABEL_10;
  }
  v29 = *a4;
  v64 = *a4;
  if ( v64 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v29 + 4));
    v56 = (int *)a1[1];
  }
  v30 = a4[2];
  v65 = a4[1];
  v66 = v30;
  v55 = -1431655765 * (v56 - a2);
  if ( a3 < v55 )
  {
    v41 = &v56[-3 * a3];
    v60 = 3 * a3;
    sub_EA4F20(v41, v56, v56);
    a1[1] += 12 * a3;
    v58 = -1431655765 * (v41 - a2);
    if ( v58 > 0 )
    {
      v42 = v41 - 3;
      v43 = v56 - 3;
      do
      {
        v44 = *v42;
        v45 = 0;
        v61 = *v42;
        if ( v61 != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v44 + 4));
          v45 = v61;
        }
        v61 = *v43;
        *v43 = v45;
        sub_5ED480(&v61);
        v46 = v42[1];
        v43[2] = v42[2];
        v43[1] = v46;
        v42 -= 3;
        v43 -= 3;
        --v58;
      }
      while ( v58 != 0 );
    }
    if ( &a2[v60] != a2 )
    {
      v47 = a2;
      do
      {
        v48 = 0;
        v62 = v64;
        if ( v64 != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v64 + 4));
          v48 = v62;
        }
        v49 = *v47;
        *v47 = v48;
        v62 = v49;
        sub_5ED480(&v62);
        v50 = v66;
        v47[1] = v65;
        v47[2] = v50;
        v47 += 3;
      }
      while ( &a2[v60] != v47 );
    }
  }
  else
  {
    v31 = v56;
    if ( a3 != v55 )
    {
      v32 = a3 - v55;
      v33 = v56;
      do
      {
        if ( v33 != nullptr )
        {
          v34 = v64;
          v17 = v64 == 0;
          *v33 = v64;
          if ( !v17 )
            sub_8B1B00((volatile int32_t *)(v34 + 4));
          v35 = v65;
          v33[2] = v66;
          v33[1] = v35;
        }
        v33 += 3;
        --v32;
      }
      while ( v32 != 0 );
      v31 = (int *)a1[1];
    }
    v36 = &v31[3 * (a3 - v55)];
    a1[1] = (int)(uintptr_t)(v36);
    sub_EA4F20(a2, v56, v36);
    a1[1] += 4 * (v56 - a2);
    if ( v56 != a2 )
    {
      v37 = a2;
      do
      {
        v38 = 0;
        v63 = v64;
        if ( v64 != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v64 + 4));
          v38 = v63;
        }
        v39 = *v37;
        *v37 = v38;
        v63 = v39;
        sub_5ED480(&v63);
        v40 = v66;
        v37[1] = v65;
        v37[2] = v40;
        v37 += 3;
      }
      while ( v56 != v37 );
    }
  }
  return sub_5ED480(&v64);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_scene_SAtlasArray_SItem_a60e17::opAssign  (binary VA: 0xf123c0)
// Original: std::vector<glitch::scene::SAtlasArray::SItem>::operator=
// ----------------------------------------------------------------------------
std::vector<glitch::scene::SAtlasArray::SItem> * g4_std::vector_scene_SAtlasArray_SItem_a60e17::opAssign(std::vector<glitch::scene::SAtlasArray::SItem> *self, const std::vector<glitch::scene::SAtlasArray::SItem> *a2)
{
  std::vector<glitch::scene::SAtlasArray::SItem> *result;
  int *v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int *v16;
  int v17;
  bool v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int *v23;
  int *v24;
  typedef int *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v26)) > _g4_s1 ? (0u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v29)) > _g4_s4 ? (20u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v30)) > _g4_s5 ? (24u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v31)) > _g4_s6 ? (24u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v32)) > _g4_s7 ? (28u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v33)) > _g4_s8 ? (28u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v34)) > _g4_s9 ? (28u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v35)) > _g4_s10 ? (32u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v36)) > _g4_s11 ? (48u + sizeof(_g4_t_v36)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);

  result = self;
  if ( a2 != self )
  {
    v3 = *(int **)a2;
    v30 = *((int **)a2 + 1);
    v4 = ((int)(uintptr_t)(v30) - *(uint32_t *)a2) >> 2;
    v28 = -1431655765 * v4;
    v32 = -1431655765 * v4;
    v5 = *(int **)self;
    if ( -1431655765 * v4 > (unsigned int)(-1431655765 * ((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 2)) )
    {
      if ( v28 != 0 )
      {
        if ( (unsigned int)v28 > 0x15555555 )
          sub_18FFEE0(v28, v4);
        v29 = 4 * v4;
        v34 = opNew(4 * v4);
      }
      else
      {
        v29 = 0;
        v34 = 0;
      }
      if ( v3 != v30 )
      {
        v20 = (int *)v34;
        do
        {
          if ( v20 != nullptr )
          {
            v21 = *v3;
            v18 = *v3 == 0;
            *v20 = *v3;
            if ( !v18 )
              sub_8B1B00((volatile int32_t *)(v21 + 4));
            v22 = v3[1];
            v20[2] = v3[2];
            v20[1] = v22;
          }
          v3 += 3;
          v20 += 3;
        }
        while ( v30 != v3 );
      }
      v23 = *((int **)self + 1);
      v24 = *(int **)self;
      if ( v23 != *(int **)self )
      {
        do
        {
          v26 = v24;
          v24 += 3;
          sub_5ED480(v26);
        }
        while ( v23 != v24 );
        v24 = *(int **)self;
      }
      if ( v24 != nullptr )
        opDelete(v24);
      result = self;
      *(uint32_t *)self = v34;
      v10 = v29 + v34;
      *((uint32_t *)self + 2) = v29 + v34;
      goto LABEL_13;
    }
    v27 = *((int **)self + 1);
    v6 = v27 - v5;
    if ( v28 > (unsigned int)(-1431655765 * v6) )
    {
      v11 = (unsigned int)(uintptr_t)(&v3[v6]);
      v33 = -1431655765 * v6;
      if ( -1431655765 * v6 > 0 )
      {
        do
        {
          v12 = *v3;
          v13 = 0;
          v36 = *v3;
          if ( v36 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v12 + 4));
            v13 = v36;
          }
          v36 = *v5;
          *v5 = v13;
          sub_5ED480(&v36);
          v14 = v3[1];
          v5[2] = v3[2];
          v5[1] = v14;
          v3 += 3;
          v5 += 3;
          --v33;
        }
        while ( v33 != 0 );
        v27 = *((int **)self + 1);
        v30 = *((int **)a2 + 1);
        v5 = *(int **)self;
        v11 = *(uint32_t *)a2 + (((unsigned int)(uintptr_t)(v27) - *(uint32_t *)self) & 0xFFFFFFFC);
      }
      if ( v30 == (int *)v11 )
      {
        v10 = (int)(uintptr_t)(&v5[3 * v28]);
        result = self;
        goto LABEL_13;
      }
      v15 = v27;
      v16 = (int *)v11;
      do
      {
        if ( v15 != nullptr )
        {
          v17 = *v16;
          v18 = *v16 == 0;
          *v15 = *v16;
          if ( !v18 )
            sub_8B1B00((volatile int32_t *)(v17 + 4));
          v19 = v16[1];
          v15[2] = v16[2];
          v15[1] = v19;
        }
        v16 += 3;
        v15 += 3;
      }
      while ( v16 != v30 );
    }
    else
    {
      if ( v28 > 0 )
      {
        v31 = *(uint32_t *)self;
        do
        {
          v7 = *v3;
          v8 = 0;
          v35 = *v3;
          if ( v35 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v7 + 4));
            v8 = v35;
          }
          v35 = *v5;
          *v5 = v8;
          sub_5ED480(&v35);
          v9 = v3[1];
          v5[2] = v3[2];
          v5[1] = v9;
          v3 += 3;
          v5 += 3;
          --v32;
        }
        while ( v32 != 0 );
        v5 = (int *)(v31 + 12 * v28);
      }
      if ( v27 != v5 )
      {
        do
        {
          v25 = v5;
          v5 += 3;
          sub_5ED480(v25);
        }
        while ( v27 != v5 );
        result = self;
        v10 = *(uint32_t *)self + 12 * v28;
        goto LABEL_13;
      }
    }
    result = self;
    v10 = *(uint32_t *)self + 12 * v28;
LABEL_13:
    *((uint32_t *)result + 1) = v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_scene_SAtlasArray_SAlloc_c91253::M_insert_aux  (binary VA: 0xf126b0)
// Original: std::vector<glitch::scene::SAtlasArray,glitch::core::SAllocator<glitch::scene::SAtlasArray,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_scene_SAtlasArray_SAlloc_c91253::M_insert_aux(int a1, std::vector<glitch::scene::SAtlasArray::SItem> *a2, const glitch::scene::SAtlasArray::Self *a3)
{
  int v3;
  int v4;
  char *v5;
  char *v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  int *v23;
  int *v24;
  std::vector<glitch::scene::SAtlasArray::SItem> *v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  size_t v29;
  int v30;
  int v31;
  size_t v32;
  int *v33;
  int *j;
  int v35;
  int v36;
  int v37;
  char *v38;
  int v39;
  size_t v40;
  int *v41;
  int *k;
  int v43;
  int v44;
  int v45;
  int v46;
  std::vector<glitch::scene::SAtlasArray::SItem> *v47;
  uint32_t *v48;
  int *v49;
  int *v50;
  typedef int *_g4_t_v51;
  typedef int *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef std::vector<glitch::scene::SAtlasArray::SItem> *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef std::vector<glitch::scene::SAtlasArray::SItem> *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef std::vector<glitch::scene::SAtlasArray::SItem> *_g4_t_v63;
  typedef char *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int *_g4_t_v66;
  typedef int *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef char *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef char *_g4_t_v71;
  typedef std::vector<glitch::scene::SAtlasArray::SItem> *_g4_t_v72;
  typedef int *_g4_t_v73;
  typedef int *_g4_t_v74;
  typedef char *_g4_t_i;
  typedef int _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v51)) > _g4_s0 ? (0u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v52)) > _g4_s1 ? (0u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v53)) > _g4_s2 ? (4u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v54)) > _g4_s3 ? (24u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v55)) > _g4_s4 ? (24u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v56)) > _g4_s5 ? (28u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v57)) > _g4_s6 ? (32u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v58)) > _g4_s7 ? (36u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v59)) > _g4_s8 ? (40u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v60)) > _g4_s9 ? (48u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v61)) > _g4_s10 ? (48u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v62)) > _g4_s11 ? (48u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v63)) > _g4_s12 ? (52u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v64)) > _g4_s13 ? (52u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v65)) > _g4_s14 ? (56u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v66)) > _g4_s15 ? (56u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v67)) > _g4_s16 ? (56u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v68)) > _g4_s17 ? (56u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v69)) > _g4_s18 ? (60u + sizeof(_g4_t_v69)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v70)) > _g4_s19 ? (60u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v71)) > _g4_s20 ? (60u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v72)) > _g4_s21 ? (60u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v73)) > _g4_s22 ? (64u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v74)) > _g4_s23 ? (68u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_i)) > _g4_s24 ? (72u + sizeof(_g4_t_i)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v76)) > _g4_s25 ? (76u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v77)) > _g4_s26 ? (80u + sizeof(_g4_t_v77)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 52u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 60u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 64u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 68u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 72u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 76u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 80u);

  v3 = *(uint32_t *)(a1 + 4);
  if ( v3 != *(uint32_t *)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      glitch::scene::SAtlasArray::Construct(
        *(glitch::scene::SAtlasArray::Self **)(a1 + 4),
        (const glitch::scene::SAtlasArray::Self *)(v3 - 20));
      v4 = *(uint32_t *)(a1 + 4);
    }
    v73 = nullptr;
    v74 = nullptr;
    i = nullptr;
    *(uint32_t *)(a1 + 4) = v4 + 20;
    v5 = *((char **)a3 + 1);
    v6 = *(char **)a3;
    v69 = v5;
    v7 = (int)(uintptr_t)(&v5[-*(uint32_t *)a3]) >> 2;
    if ( -1431655765 * v7 != 0 )
    {
      if ( (unsigned int)(-1431655765 * v7) > 0x15555555 )
LABEL_105:
        sub_18FFEE0(v5, v7);
      v54 = 4 * v7;
      v8 = (int *)opNew(4 * v7);
      v9 = v54;
      v69 = *((char **)a3 + 1);
      v6 = *(char **)a3;
    }
    else
    {
      v9 = 0;
      v8 = nullptr;
    }
    v73 = v8;
    v74 = v8;
    for ( i = (char *)v8 + v9; v69 != v6; v8 += 3 )
    {
      if ( v8 != nullptr )
      {
        v10 = *(uint32_t *)v6;
        v11 = *(uint32_t *)v6 == 0;
        *v8 = *(uint32_t *)v6;
        if ( !v11 )
          sub_8B1B00((volatile int32_t *)(v10 + 4));
        v12 = *((uint32_t *)v6 + 1);
        v8[2] = *((uint32_t *)v6 + 2);
        v8[1] = v12;
      }
      v6 += 12;
    }
    v74 = v8;
    v76 = *((uint32_t *)a3 + 3);
    v77 = *((uint32_t **)a3 + 4);
    if ( v77 != nullptr )
      ++v77[1];
    v65 = *(uint32_t *)(a1 + 4);
    v70 = -858993459 * ((v65 - 40 - (int)(uintptr_t)(a2)) >> 2);
    if ( v70 > 0 )
    {
      v13 = v65 - 20;
      v14 = v65 - 24;
      while ( 1 )
      {
        v15 = v13 - 20;
        g4_std::vector_scene_SAtlasArray_SItem_a60e17::opAssign(
          (std::vector<glitch::scene::SAtlasArray::SItem> *)(v13 - 20),
          (const std::vector<glitch::scene::SAtlasArray::SItem> *)(v13 - 40));
        v16 = v15 - v65;
        v60 = *(uint32_t *)(v15 - 48 + 40);
        v17 = *(uint32_t *)(v15 - 44 + 40);
        if ( v17 != 0 )
          ++*(uint32_t *)(v17 + 4);
        *(uint32_t *)(v15 + 12) = v60;
        v18 = *(uint32_t **)(v16 + v14 + 40);
        *(uint32_t *)(v16 + v14 + 40) = v17;
        if ( v18 != nullptr
          && (v11 = v18[1] == 1, --v18[1], v11)
          && (v55 = v18, G4_VCALL<void>(v18, 8), v11 = v55[2] == 1, --v55[2], v11) )
        {
          G4_VCALL<void>(v55, 12);
          if ( --v70 == 0 )
            break;
        }
        else if ( --v70 == 0 )
        {
          break;
        }
        v13 = v15;
      }
    }
    g4_std::vector_scene_SAtlasArray_SItem_a60e17::opAssign(
      a2,
      (const std::vector<glitch::scene::SAtlasArray::SItem> *)&v73);
    v19 = v77;
    v20 = v76;
    if ( v77 != nullptr )
      ++v77[1];
    v21 = *((uint32_t **)a2 + 4);
    *((uint32_t *)a2 + 3) = v20;
    *((uint32_t *)a2 + 4) = (uint32_t)(uintptr_t)(v19);
    if ( v21 != nullptr )
    {
      v11 = v21[1]-- == 1;
      if ( v11 )
      {
        G4_VCALL<void>(v21, 8);
        v11 = v21[2]-- == 1;
        if ( v11 )
          G4_VCALL<void>(v21, 12);
      }
    }
    v22 = v77;
    if ( v77 != nullptr )
    {
      v11 = v77[1]-- == 1;
      if ( v11 )
      {
        G4_VCALL<void>(v22, 8);
        v11 = v22[2]-- == 1;
        if ( v11 )
          G4_VCALL<void>(v22, 12);
      }
    }
    v23 = v74;
    v24 = v73;
    if ( v74 != v73 )
    {
      do
      {
        v51 = v24;
        v24 += 3;
        sub_5ED480(v51);
      }
      while ( v23 != v24 );
      v24 = v73;
    }
    if ( v24 != nullptr )
      opDelete(v24);
    return;
  }
  v25 = *(std::vector<glitch::scene::SAtlasArray::SItem> **)a1;
  v26 = -858993459 * ((v3 - *(uint32_t *)a1) >> 2);
  if ( v26 == 0 )
  {
    v27 = 1;
    v28 = -858993459 * ((a2 - v25) >> 2);
LABEL_99:
    v56 = v27;
    v29 = 20 * v27;
    goto LABEL_44;
  }
  v27 = 2 * v26;
  v28 = -858993459 * ((a2 - v25) >> 2);
  if ( v26 <= 2 * v26 && v27 <= 0xCCCCCCC )
  {
    if ( v27 == 0 )
    {
      v57 = 0;
      v56 = 0;
      v30 = 0;
      goto LABEL_45;
    }
    goto LABEL_99;
  }
  v29 = 0xFFFFFFF0;
  v56 = 214748364;
LABEL_44:
  v53 = 0;
  v57 = sub_4EBDC0(v29);
  v30 = v57;
LABEL_45:
  if ( v30 + 20 * v28 != 0 )
    glitch::scene::SAtlasArray::Construct((glitch::scene::SAtlasArray::Self *)(v30 + 20 * v28), a3);
  if ( *(std::vector<glitch::scene::SAtlasArray::SItem> **)a1 == a2 )
  {
    v71 = (char *)v57;
    v38 = (char *)v57;
  }
  else
  {
    v63 = *(std::vector<glitch::scene::SAtlasArray::SItem> **)a1;
    v71 = (char *)v57;
    do
    {
      if ( v71 != nullptr )
      {
        v7 = (int)(uintptr_t)(v63);
        v5 = v71;
        v31 = (*((uint32_t *)v63 + 1) - *(uint32_t *)v63) >> 2;
        *(uint32_t *)v71 = 0;
        *((uint32_t *)v71 + 1) = 0;
        *((uint32_t *)v71 + 2) = 0;
        if ( -1431655765 * v31 != 0 )
        {
          if ( (unsigned int)(-1431655765 * v31) > 0x15555555 )
            goto LABEL_105;
          v32 = v31;
          v33 = (int *)opNew(v32 * 4);
        }
        else
        {
          v32 = 0;
          v33 = nullptr;
        }
        *(uint32_t *)v71 = (uint32_t)(uintptr_t)(v33);
        *((uint32_t *)v71 + 2) = (uint32_t)(uintptr_t)(&v33[v32]);
        *((uint32_t *)v71 + 1) = (uint32_t)(uintptr_t)(v33);
        v66 = *((int **)v63 + 1);
        for ( j = *(int **)v63; v66 != j; v33 += 3 )
        {
          if ( v33 != nullptr )
          {
            v35 = *j;
            v11 = *j == 0;
            *v33 = *j;
            if ( !v11 )
              sub_8B1B00((volatile int32_t *)(v35 + 4));
            v36 = j[1];
            v33[2] = j[2];
            v33[1] = v36;
          }
          j += 3;
        }
        *((uint32_t *)v71 + 1) = (uint32_t)(uintptr_t)(v33);
        *((uint32_t *)v71 + 3) = *((uint32_t *)v63 + 3);
        v37 = *((uint32_t *)v63 + 4);
        *((uint32_t *)v71 + 4) = v37;
        if ( v37 != 0 )
          ++*(uint32_t *)(v37 + 4);
      }
      v63 = (std::vector<glitch::scene::SAtlasArray::SItem> *)((char *)v63 + 20);
      v71 += 20;
    }
    while ( v63 != a2 );
    v38 = v71;
  }
  v58 = v38 + 20;
  v59 = *(std::vector<glitch::scene::SAtlasArray::SItem> **)(a1 + 4);
  if ( v59 == a2 )
  {
    v64 = v38 + 20;
    v47 = *(std::vector<glitch::scene::SAtlasArray::SItem> **)(a1 + 4);
  }
  else
  {
    v61 = a2;
    v64 = v38 + 20;
    do
    {
      if ( v64 != nullptr )
      {
        v7 = (int)(uintptr_t)(v61);
        v5 = v64;
        v39 = (*((uint32_t *)v61 + 1) - *(uint32_t *)v61) >> 2;
        *(uint32_t *)v64 = 0;
        *((uint32_t *)v64 + 1) = 0;
        *((uint32_t *)v64 + 2) = 0;
        if ( -1431655765 * v39 != 0 )
        {
          if ( (unsigned int)(-1431655765 * v39) > 0x15555555 )
            goto LABEL_105;
          v40 = v39;
          v41 = (int *)opNew(v40 * 4);
        }
        else
        {
          v40 = 0;
          v41 = nullptr;
        }
        *(uint32_t *)v64 = (uint32_t)(uintptr_t)(v41);
        *((uint32_t *)v64 + 2) = (uint32_t)(uintptr_t)(&v41[v40]);
        *((uint32_t *)v64 + 1) = (uint32_t)(uintptr_t)(v41);
        v67 = *((int **)v61 + 1);
        for ( k = *(int **)v61; v67 != k; v41 += 3 )
        {
          if ( v41 != nullptr )
          {
            v43 = *k;
            v11 = *k == 0;
            *v41 = *k;
            if ( !v11 )
              sub_8B1B00((volatile int32_t *)(v43 + 4));
            v44 = k[1];
            v41[2] = k[2];
            v41[1] = v44;
          }
          k += 3;
        }
        *((uint32_t *)v64 + 1) = (uint32_t)(uintptr_t)(v41);
        v45 = v64 - v71;
        *(uint32_t *)&v58[v45 - 8] = *((uint32_t *)v61 + 3);
        v46 = *((uint32_t *)v61 + 4);
        *(uint32_t *)&v58[v45 - 4] = v46;
        if ( v46 != 0 )
          ++*(uint32_t *)(v46 + 4);
      }
      v61 = (std::vector<glitch::scene::SAtlasArray::SItem> *)((char *)v61 + 20);
      v64 += 20;
    }
    while ( v59 != v61 );
    v59 = *(std::vector<glitch::scene::SAtlasArray::SItem> **)(a1 + 4);
    v47 = v59;
  }
  v62 = *(uint32_t *)a1;
  if ( *(std::vector<glitch::scene::SAtlasArray::SItem> **)a1 != v47 )
  {
    v72 = *(std::vector<glitch::scene::SAtlasArray::SItem> **)a1;
    v68 = *(uint32_t *)a1 + 16;
    do
    {
      v48 = *(uint32_t **)((char *)v72 + v68 - v62);
      if ( v48 != nullptr )
      {
        v11 = v48[1]-- == 1;
        if ( v11 )
        {
          G4_VCALL<void>(v48, 8, v53);
          v11 = v48[2]-- == 1;
          if ( v11 )
            G4_VCALL<void>(v48, 12);
        }
      }
      v49 = *((int **)v72 + 1);
      v50 = *(int **)v72;
      if ( v49 != *(int **)v72 )
      {
        do
        {
          v52 = v50;
          v50 += 3;
          sub_5ED480(v52);
        }
        while ( v49 != v50 );
        v50 = *(int **)v72;
      }
      if ( v50 != nullptr )
        opDelete(v50);
      v72 = (std::vector<glitch::scene::SAtlasArray::SItem> *)((char *)v72 + 20);
    }
    while ( v72 != v59 );
    v62 = *(uint32_t *)a1;
  }
  if ( v62 != 0 )
    gll_operator_delete_arr(v62);
  *(uint32_t *)a1 = v57;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v64);
  *(uint32_t *)(a1 + 8) = v57 + 20 * v56;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_scene_GroupFormat_SNode_9d0ea4::M_fill_insert  (binary VA: 0xf13300)
// Original: std::vector<glitch::scene::GroupFormat::SNode const*,glitch::core::SAllocator<glitch::scene::GroupFormat::SNode const*,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_scene_GroupFormat_SNode_9d0ea4::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int *v11;
  unsigned int i;
  uint32_t *v13;
  char *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  char *v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int *v24;
  unsigned int j;
  __m128i *v26;
  __m128i v27;
  unsigned int v28;
  size_t v29;
  unsigned int v30;
  unsigned int *v31;
  unsigned int *v32;
  unsigned int *v33;
  unsigned int v34;
  bool v35;
  unsigned int *v36;
  unsigned int v37;
  __m128i v38;
  unsigned int v39;
  __m128i *v40;
  unsigned int *v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  uint32_t *v46;
  unsigned int *v47;
  uint8_t *v48;
  int v49;
  unsigned int v50;
  int v51;
  char *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 > (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v48 = (uint8_t *)*a1;
    v5 = ((int)(uintptr_t)(v4) - *a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = v5;
    v7 = __CFADD__(v6, v5);
    v8 = v6 + v5;
    if ( v7 || v8 > 0x3FFFFFFF )
    {
      v44 = -4;
      v29 = 0xFFFFFFFC;
      v9 = (src - (char *)(v48)) >> 2;
    }
    else
    {
      v9 = (src - (char *)(v48)) >> 2;
      if ( v8 == 0 )
      {
        v49 = 0;
        v44 = 0;
        v10 = 0;
        goto LABEL_10;
      }
      v44 = 4 * v8;
      v29 = 4 * v8;
    }
    v42 = v9;
    v49 = sub_4EBDC0(v29);
    v9 = v42;
    v10 = v49;
LABEL_10:
    v11 = (unsigned int *)(v10 + 4 * v9);
    for ( i = a3; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v13 = (uint32_t *)v49;
    v45 = *a1;
    if ( (char *)*a1 != src )
    {
      v14 = (char *)*a1;
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v14;
        v14 += 4;
        ++v13;
      }
      while ( v14 != src );
      v13 = (uint32_t *)(v49 + 4 * ((unsigned int)(uintptr_t)(&src[-v45 - 4]) >> 2) + 4);
    }
    v46 = &v13[a3];
    v15 = (char *)a1[1];
    if ( v15 != src )
    {
      v16 = src;
      v17 = &v13[a3];
      do
      {
        if ( v17 != nullptr )
          *v17 = *(uint32_t *)v16;
        v16 += 4;
        ++v17;
      }
      while ( v15 != v16 );
      v46 += ((unsigned int)(v15 - (src + 4)) >> 2) + 1;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v49;
    a1[1] = (int)(uintptr_t)(v46);
    a1[2] = v44 + v49;
    return;
  }
  v18 = *a4;
  v50 = ((char *)v4 - src) >> 2;
  if ( a3 >= v50 )
  {
    v30 = a3 - v50;
    v31 = (unsigned int *)a1[1];
    if ( a3 != v50 )
    {
      do
      {
        if ( v31 != nullptr )
          *v31 = v18;
        ++v31;
        --v30;
      }
      while ( v30 != 0 );
      v31 = (unsigned int *)a1[1];
      v30 = a3 - v50;
    }
    v32 = &v31[v30];
    a1[1] = (int)(uintptr_t)(v32);
    if ( v4 == (unsigned int *)src )
    {
      a1[1] = (int)(uintptr_t)(&v32[v50]);
    }
    else
    {
      v33 = (unsigned int *)src;
      do
      {
        if ( v32 != nullptr )
          *v32 = *v33;
        ++v33;
        ++v32;
      }
      while ( v4 != v33 );
      a1[1] += 4 * v50;
      v56 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v34 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      if ( v34 > v56 )
        v34 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v35 = v34 == 0;
      v53 = v34;
      v36 = (unsigned int *)src;
      if ( v35 )
        goto LABEL_82;
      v37 = 0;
      do
      {
        ++v37;
        *v36++ = v18;
      }
      while ( v53 > v37 );
      if ( v56 != v53 )
      {
LABEL_82:
        v57 = v56 - v53;
        if ( 4 * (v57 >> 2) == 0 )
          goto LABEL_83;
        v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v39 = 0;
        v40 = (__m128i *)&src[4 * v53];
        do
        {
          ++v39;
          *v40++ = v38;
        }
        while ( v39 < v57 >> 2 );
        v36 += 4 * (v57 >> 2);
        if ( v57 != 4 * (v57 >> 2) )
        {
LABEL_83:
          do
          {
            *v36 = v18;
            v41 = v36 + 1;
            if ( v4 == v41 )
              break;
            *v41 = v18;
            v36 = v41 + 1;
          }
          while ( v4 != v36 );
        }
      }
    }
  }
  else
  {
    v51 = 4 * a3;
    v47 = &v4[-a3];
    v19 = (unsigned int *)a1[1];
    if ( v4 != v47 )
    {
      v20 = &v4[-a3];
      do
      {
        if ( v19 != nullptr )
          *v19 = *v20;
        ++v20;
        ++v19;
      }
      while ( v4 != v20 );
      v19 = (unsigned int *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(&v19[v51 / 4u]);
    if ( ((char *)v47 - src) >> 2 != 0 )
    {
      v43 = v18;
      memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      v18 = v43;
    }
    v21 = &src[v51];
    v52 = &src[v51];
    if ( v52 != src )
    {
      v22 = ((unsigned int)(v21 - (src + 4)) >> 2) + 1;
      v23 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      v54 = v22;
      if ( v22 <= v23 )
        v23 = v22;
      v24 = (unsigned int *)src;
      if ( v23 == 0 )
        goto LABEL_84;
      for ( j = 0; j < v23; ++j )
        *v24++ = v18;
      if ( v54 != v23 )
      {
LABEL_84:
        v55 = v54 - v23;
        if ( 4 * (v55 >> 2) == 0 )
          goto LABEL_85;
        v26 = (__m128i *)&src[4 * v23];
        v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v28 = 0;
        do
        {
          ++v28;
          *v26++ = v27;
        }
        while ( v28 < v55 >> 2 );
        v24 += 4 * (v55 >> 2);
        if ( v55 != 4 * (v55 >> 2) )
        {
LABEL_85:
          do
            *v24++ = v18;
          while ( v52 != (char *)v24 );
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_SIDedCollection_intrusiv_535f3b::M_fill_insert  (binary VA: 0xf14fd0)
// Original: std::vector<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::scene::CPVSDatabase>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,glitch::core::SAllocator<glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::scene::CPVSDatabase>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::CEntry *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_SIDedCollection_intrusiv_535f3b::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}



// ============================================================================
// Address:   0xf175e0 (size: 956 bytes)
// Symbol:    _ZNSt6vectorIN6glitch5scene13SMaterialInfoENS0_4core10SAllocatorIS2_LNS0_6memory13E_MEMORY_HINTE0EEEE6insertIN9__gnu_cxx17__normal_iteratorIPS2_S8_EEEEvSD_T_SE_
void g4_std_compat::vector_insert(
        int *a1,
        int a2,
        int a3,
        int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  size_t v9;
  int v10;
  size_t v11;
  int v12;
  volatile int32_t *v13;
  bool v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  volatile int32_t *v20;
  int v21;
  int v22;
  volatile int32_t *v23;
  int v24;
  unsigned int v25;
  bool v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  volatile int32_t *v31;
  int v32;
  int v33;
  volatile int32_t *v34;
  int *v35;
  int v36;
  int v37;
  int v38;
  volatile int32_t *v39;
  int v40;
  int v41;
  glitch::video::CMaterial::Self **v42;
  int v43;
  int v44;
  int v45;
  size_t v46;
  int v47;
  int v48;
  int v49;
  int v50;

  v4 = a4;
  v5 = a3;
  if ( a4 == a3 )
    return;
  v6 = (a4 - a3) >> 3;
  v44 = a1[1];
  if ( v6 <= (a1[2] - v44) >> 3 )
  {
    v7 = (v44 - a2) >> 3;
    if ( v6 >= v7 )
    {
      v15 = 8 * v7;
      v16 = v15 + a3;
      v50 = v15;
      v14 = v15 + a3 == a4;
      v49 = v15 + a3;
      v17 = a1[1];
      if ( !v14 )
      {
        v18 = v16;
        v19 = a1[1];
        do
        {
          if ( v19 != 0 )
          {
            v20 = *(volatile int32_t **)v18;
            v14 = *(uint32_t *)v18 == 0;
            *(uint32_t *)v19 = *(uint32_t *)v18;
            if ( !v14 )
              sub_8B1B00(v20);
            *(uint8_t *)(v19 + 4) = *(uint8_t *)(v18 + 4);
            *(uint8_t *)(v19 + 5) = *(uint8_t *)(v18 + 5);
          }
          v18 += 8;
          v19 += 8;
        }
        while ( v18 != a4 );
        v6 = (a4 - a3) >> 3;
        v17 = a1[1];
      }
      v21 = v17 + 8 * (v6 - ((v44 - a2) >> 3));
      a1[1] = v21;
      if ( v44 != a2 )
      {
        v22 = a2;
        do
        {
          if ( v21 != 0 )
          {
            v23 = *(volatile int32_t **)v22;
            v14 = *(uint32_t *)v22 == 0;
            *(uint32_t *)v21 = *(uint32_t *)v22;
            if ( !v14 )
              sub_8B1B00(v23);
            *(uint8_t *)(v21 + 4) = *(uint8_t *)(v22 + 4);
            *(uint8_t *)(v21 + 5) = *(uint8_t *)(v22 + 5);
          }
          v22 += 8;
          v21 += 8;
        }
        while ( v44 != v22 );
        v21 = a1[1];
      }
      a1[1] = v50 + v21;
      g4_std::copy_move_a_false_scene_SMaterialInf_c13d58(a3, v49, a2);
    }
    else
    {
      v8 = 8 * v6;
      v9 = v44 - v8;
      v48 = v8;
      v10 = a1[1];
      v46 = v9;
      if ( v44 != v9 )
      {
        v11 = v9;
        v12 = a1[1];
        do
        {
          if ( v12 != 0 )
          {
            v13 = *(volatile int32_t **)v11;
            v14 = *(uint32_t *)v11 == 0;
            *(uint32_t *)v12 = *(uint32_t *)v11;
            if ( !v14 )
              sub_8B1B00(v13);
            *(uint8_t *)(v12 + 4) = *(uint8_t *)(v11 + 4);
            *(uint8_t *)(v12 + 5) = *(uint8_t *)(v11 + 5);
          }
          v11 += 8;
          v12 += 8;
        }
        while ( v44 != v11 );
        v4 = a4;
        v10 = a1[1];
      }
      a1[1] = v48 + v10;
      g4_std::copy_backward_scene_SMaterialInfo_scen_38caee(a2, v46, v44);
      g4_std::copy_move_a_false_scene_SMaterialInf_c13d58(a3, v4, a2);
    }
    return;
  }
  v24 = *a1;
  v25 = (v44 - *a1) >> 3;
  if ( v6 > 0x1FFFFFFF - v25 )
    sub_1900180("vector::_M_range_insert");
  v47 = -8;
  if ( v25 >= v6 )
    v6 = (v44 - *a1) >> 3;
  v26 = __CFADD__(v25, v6);
  v27 = v25 + v6;
  if ( !v26 && v27 <= 0x1FFFFFFF )
  {
    if ( v27 == 0 )
    {
      v45 = 0;
      v47 = 0;
      v28 = 0;
      goto LABEL_36;
    }
    v47 = 8 * v27;
  }
  v28 = sub_4EBDC0(v47);
  v45 = v28;
  v24 = *a1;
LABEL_36:
  if ( v24 == a2 )
  {
    v33 = a4;
    v32 = v28;
  }
  else
  {
    v29 = v24;
    v30 = v28;
    do
    {
      if ( v30 != 0 )
      {
        v31 = *(volatile int32_t **)v29;
        v14 = *(uint32_t *)v29 == 0;
        *(uint32_t *)v30 = *(uint32_t *)v29;
        if ( !v14 )
          sub_8B1B00(v31);
        *(uint8_t *)(v30 + 4) = *(uint8_t *)(v29 + 4);
        *(uint8_t *)(v30 + 5) = *(uint8_t *)(v29 + 5);
      }
      v29 += 8;
      v30 += 8;
    }
    while ( v29 != a2 );
    v32 = v30;
    v33 = a4;
    v5 = a3;
  }
  do
  {
    if ( v32 != 0 )
    {
      v34 = *(volatile int32_t **)v5;
      v14 = *(uint32_t *)v5 == 0;
      *(uint32_t *)v32 = *(uint32_t *)v5;
      if ( !v14 )
        sub_8B1B00(v34);
      *(uint8_t *)(v32 + 4) = *(uint8_t *)(v5 + 4);
      *(uint8_t *)(v32 + 5) = *(uint8_t *)(v5 + 5);
    }
    v5 += 8;
    v32 += 8;
  }
  while ( v5 != v33 );
  v35 = a1;
  v36 = a2;
  v37 = v32;
  v38 = a1[1];
  if ( v38 != a2 )
  {
    do
    {
      if ( v32 != 0 )
      {
        v39 = *(volatile int32_t **)v36;
        v14 = *(uint32_t *)v36 == 0;
        *(uint32_t *)v32 = *(uint32_t *)v36;
        if ( !v14 )
          sub_8B1B00(v39);
        *(uint8_t *)(v32 + 4) = *(uint8_t *)(v36 + 4);
        *(uint8_t *)(v32 + 5) = *(uint8_t *)(v36 + 5);
      }
      v36 += 8;
      v32 += 8;
    }
    while ( v38 != v36 );
    v37 = v32;
    v35 = a1;
    v38 = a1[1];
  }
  v40 = *v35;
  if ( v38 != *v35 )
  {
    v41 = v37;
    do
    {
      v42 = (glitch::video::CMaterial::Self **)v40;
      v40 += 8;
      sub_5ED4F0(v42);
    }
    while ( v38 != v40 );
    v37 = v41;
    v40 = *a1;
  }
  if ( v40 != 0 )
  {
    v43 = v37;
    gll_operator_delete_arr(v40);
    v37 = v43;
  }
  a1[1] = v37;
  *a1 = v45;
  a1[2] = v45 + v47;
}
// ----------------------------------------------------------------------------
// Function: g4_std::vector_scene_SDrawInfo_SAllocat_ddd42a::Destroy  (binary VA: 0xf7ae20)
// Original: std::vector<glitch::scene::SDrawInfo,glitch::core::SAllocator<glitch::scene::SDrawInfo,(glitch::memory::E_MEMORY_HINT)0>>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_scene_SDrawInfo_SAllocat_ddd42a::Destroy(std::vector<glitch::scene::SDrawInfo::Self, glitch::core::SAllocator<glitch::scene::SDrawInfo::Self, (glitch::memory::E_MEMORY_HINT)0>> *self)
{
  int v1;
  int v2;
  int v3;
  glitch::video::CVertexStreams::Self *v4;
  glitch::video::CMaterial::Self **v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = *(uint32_t *)self;
  v7 = *((uint32_t *)self + 1);
  v6 = *(uint32_t *)self;
  if ( v7 != *(uint32_t *)self )
  {
    v2 = *(uint32_t *)self;
    v10 = v1 + 56;
    v9 = v1 + 52;
    v8 = v1 + 48;
    do
    {
      v3 = v2 - v6;
      if ( *(uint32_t *)(v2 - v6 + v10) != 0 )
        sub_5459C0(*(volatile int32_t **)(v2 - v6 + v10));
      v4 = *(glitch::video::CVertexStreams::Self **)(v3 + v9);
      if ( v4 != nullptr && __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CVertexStreams::Destroy(v4);
        gll_operator_delete_arr((int)(uintptr_t)(v4));
      }
      if ( *(uint32_t *)(v3 + v8) != 0 )
        sub_5459C0(*(volatile int32_t **)(v3 + v8));
      v5 = (glitch::video::CMaterial::Self **)(v2 + 8);
      v2 += 152;
      sub_5ED4F0(v5);
    }
    while ( v7 != v2 );
    v6 = *(uint32_t *)self;
  }
  if ( v6 != 0 )
    gll_operator_delete_arr(v6);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_triangle3d_float_SAlloca_343806::opAssign  (binary VA: 0xf7af00)
// Original: std::vector<glitch::core::triangle3d<float>,glitch::core::SAllocator<glitch::core::triangle3d<float>,(glitch::memory::E_MEMORY_HINT)0>>::operator=
// ----------------------------------------------------------------------------
std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> * g4_std::vector_triangle3d_float_SAlloca_343806::opAssign(std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *self, const std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *result;
  int32_t v3;
  int v4;
  uint32_t *v5;
  int v6;
  unsigned int v7;
  int v8;
  const double *v9;
  double *v10;
  unsigned int v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  int *v21;
  unsigned int v22;
  uint32_t *v23;
  int v24;
  char *v25;
  char *v26;
  int32_t v27;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v28;
  int v29;
  unsigned int v30;
  uint32_t *v31;
  const double *v32;
  double *v33;
  unsigned int v34;
  __m128 v35;
  __m128 v36;
  __m128 v37;
  __m128 v38;
  __m128 v39;
  __m128 v40;
  __m128 v41;
  __m128 v42;
  __m128 v43;
  int *v44;
  unsigned int v45;
  uint32_t *v46;
  int v47;
  char *v48;
  char *v49;
  int32_t v50;
  unsigned int v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  int32_t v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  int v61;
  unsigned int v62;
  typedef __m128 _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef __m128 _g4_t_v65;
  typedef __m128 _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v63)) > _g4_s0 ? (0u + sizeof(_g4_t_v63)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v64)) > _g4_s1 ? (28u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v65)) > _g4_s2 ? (32u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v66)) > _g4_s3 ? (48u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v67)) > _g4_s4 ? (64u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v68)) > _g4_s5 ? (68u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v69)) > _g4_s6 ? (72u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v70)) > _g4_s7 ? (76u + sizeof(_g4_t_v70)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 0u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 64u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 68u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 72u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 76u);

  result = self;
  if ( a2 != self )
  {
    v3 = *((uint32_t *)a2 + 1);
    v67 = *(uint32_t *)a2;
    v4 = (int)(v3 - v67) >> 2;
g4_m128_lane<int32_t>(v65, 0) = v3;
    v64 = 954437177 * v4;
    v69 = 954437177 * v4;
    v68 = *(uint32_t *)self;
    if ( 954437177 * v4 > (unsigned int)(954437177 * ((int)(*((uint32_t *)self + 2) - v68) >> 2)) )
    {
      v69 = 0;
      v68 = 0;
      if ( v64 != 0 )
      {
        v69 = 4 * v4;
        v68 = sub_4EBDC0(4 * v4);
      }
      if ( v67 !=g4_m128_lane<int32_t>(v65, 0) )
      {
g4_m128_lane<int32_t>(v66, 0) = v68 + 16;
        v56 = (uint32_t *)(v67 + 16);
        v57 = (uint32_t *)(v67 + 24);
        v58 = (uint32_t *)v68;
        v59 = (uint32_t *)v67;
        v70 = v68 + 24;
        do
        {
          if ( v58 != nullptr )
          {
            *v58 = *v59;
            v58[1] = v59[1];
            v58[2] = v59[2];
            v60 = (uint32_t *)g4_m128_lane<int32_t>(v66, 0);
            *(uint32_t *)(g4_m128_lane<int32_t>(v66, 0) - 4) = *(v56 - 1);
            *v60 = *v56;
            v60[1] = v56[1];
            v61 = v70;
            *(uint32_t *)v70 = *v57;
            *(uint32_t *)(v61 + 4) = v57[1];
            *(uint32_t *)(v61 + 8) = v57[2];
          }
          v59 += 9;
          v58 += 9;
          v56 += 9;
g4_m128_lane<int32_t>(v66, 0) += 36;
          v57 += 9;
          v70 += 36;
        }
        while ( (uint32_t *)g4_m128_lane<int32_t>(v65, 0) != v59 );
      }
      if ( *(uint32_t *)self != 0 )
        gll_operator_delete_arr(*(uint32_t *)self);
      v62 = v68;
      v28 = self;
      *(uint32_t *)self = v68;
      v29 = v62 + v69;
      *((uint32_t *)self + 2) = v62 + v69;
      goto LABEL_13;
    }
    v5 = *((uint32_t **)self + 1);
    v6 = (int)((int)(uintptr_t)(v5) - v68) >> 2;
    if ( v64 > 954437177 * v6 )
    {
      v30 = 954437177 * v6;
      v69 = 954437177 * v6;
      v31 = (uint32_t *)(v67 + 4 * v6);
      if ( 954437177 * v6 > 0 )
      {
        v70 = 4 * (v30 >> 2);
        if ( v70 == 0 )
          goto LABEL_21;
        if ( v67 <= v68 + 144 && v68 <= v67 + 144 || v30 <= 3 )
          goto LABEL_21;
        v32 = (const double *)v67;
        v33 = (double *)v68;
        v34 = 0;
        do
        {
          v63 = _mm_shuffle_ps(_mm_loadl_ps(v32 + 12), g4_m128_from<__m128>(0LL), 228);
          _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v63, 1), _mm_loadl_ps(v32 + 13));
          v66 = _mm_shuffle_ps(_mm_loadl_ps(v32 + 14), g4_m128_from<__m128>(0LL), 228);
          _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v66, 1), _mm_loadl_ps(v32 + 15));
          v35 = _mm_loadh_ps(v32 + 7);
          v36 = _mm_loadh_ps(v32 + 1);
          v37 = _mm_loadh_ps(v32 + 3);
          v38 = _mm_loadh_ps(v32 + 5);
          v65 = _mm_shuffle_ps(_mm_loadl_ps(v32 + 16), g4_m128_from<__m128>(0LL), 228);
          v39 = _mm_loadh_ps(v32 + 9);
          v40 = _mm_loadh_ps(v32 + 11);
          _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v65, 1), _mm_loadl_ps(v32 + 17));
          ++v34;
          _mm_storel_ps(v33, v36);
          v32 += 18;
          _mm_storeh_ps(v33 + 1, v36);
          _mm_storel_ps(v33 + 2, v37);
          _mm_storeh_ps(v33 + 3, v37);
          _mm_storel_ps(v33 + 4, v38);
          _mm_storeh_ps(v33 + 5, v38);
          _mm_storel_ps(v33 + 6, v35);
          v41 = v63;
          _mm_storel_ps(v33 + 12, v63);
          _mm_storeh_ps(v33 + 13, v41);
          v42 = v66;
          _mm_storel_ps(v33 + 14, v66);
          _mm_storeh_ps(v33 + 15, v42);
          v43 = v65;
          _mm_storeh_ps(v33 + 7, v35);
          _mm_storel_ps(v33 + 8, v39);
          _mm_storeh_ps(v33 + 9, v39);
          _mm_storel_ps(v33 + 10, v40);
          _mm_storeh_ps(v33 + 11, v40);
          _mm_storel_ps(v33 + 16, v43);
          _mm_storeh_ps(v33 + 17, v43);
          v33 += 18;
        }
        while ( v30 >> 2 > v34 );
        v69 = v30 - v70;
        v67 += 36 * v70;
        v68 += 36 * v70;
        if ( v30 != v70 )
        {
LABEL_21:
          v44 = (int *)v67;
          v70 = v68;
g4_m128_lane<int32_t>(v66, 0) = v68 + 12;
          v45 = v67 + 24;
g4_m128_lane<int32_t>(v65, 0) = v68 + 24;
g4_m128_lane<int32_t>(v63, 0) = v67 + 12;
          do
          {
            v46 = (uint32_t *)v70;
            v47 = *v44;
            v48 = (char *)v44 - v67;
            --v69;
            v70 += 36;
            *v46 = v47;
            v46[1] = v44[1];
            v46[2] = v44[2];
            v49 = (char *)v46 - v68;
            *(uint32_t *)&v49[g4_m128_lane<int32_t>(v66, 0)] = *(uint32_t *)&v48[g4_m128_lane<int32_t>(v63, 0)];
            *(uint32_t *)&v49[g4_m128_lane<int32_t>(v66, 0) + 4] = *(uint32_t *)&v48[g4_m128_lane<int32_t>(v63, 0) + 4];
            *(uint32_t *)&v49[g4_m128_lane<int32_t>(v66, 0) + 8] = *(uint32_t *)&v48[g4_m128_lane<int32_t>(v63, 0) + 8];
            v50 =g4_m128_lane<int32_t>(v65, 0);
            v44 += 9;
            *(uint32_t *)&v49[g4_m128_lane<int32_t>(v65, 0)] = *(uint32_t *)&v48[v45];
            *(uint32_t *)&v49[v50 + 4] = *(uint32_t *)&v48[v45 + 4];
            *(uint32_t *)&v49[v50 + 8] = *(uint32_t *)&v48[v45 + 8];
          }
          while ( v69 > 0 );
        }
        v5 = *((uint32_t **)self + 1);
g4_m128_lane<int32_t>(v65, 0) = *((uint32_t *)a2 + 1);
        v51 = (unsigned int)(uintptr_t)(v5) - *(uint32_t *)self;
        v68 = *(uint32_t *)self;
        v31 = (uint32_t *)(*(uint32_t *)a2 + (v51 & 0xFFFFFFFC));
      }
      if ( (uint32_t *)g4_m128_lane<int32_t>(v65, 0) == v31 )
      {
        v28 = self;
        v29 = v68 + 36 * v64;
        goto LABEL_13;
      }
      v70 = (int)(uintptr_t)(v5 + 4);
      v52 = v31 + 4;
      v53 = v31 + 6;
g4_m128_lane<int32_t>(v66, 0) = (int32_t)(uintptr_t)(v5 + 6);
      do
      {
        if ( v5 != nullptr )
        {
          *v5 = *v31;
          v5[1] = v31[1];
          v5[2] = v31[2];
          v54 = (uint32_t *)v70;
          *(uint32_t *)(v70 - 4) = *(v52 - 1);
          *v54 = *v52;
          v54[1] = v52[1];
          v55 =g4_m128_lane<int32_t>(v66, 0);
          *(uint32_t *)g4_m128_lane<int32_t>(v66, 0) = *v53;
          *(uint32_t *)(v55 + 4) = v53[1];
          *(uint32_t *)(v55 + 8) = v53[2];
        }
        v31 += 9;
        v5 += 9;
        v52 += 9;
        v70 += 36;
        v53 += 9;
g4_m128_lane<int32_t>(v66, 0) += 36;
      }
      while ( v31 != (uint32_t *)g4_m128_lane<int32_t>(v65, 0) );
    }
    else
    {
      if ( (int)v64 <= 0 )
      {
        v29 = v68 + 4 * v4;
        v28 = self;
        goto LABEL_13;
      }
      v7 = v64 >> 2;
      v8 = 4 * (v64 >> 2);
      if ( v8 == 0 )
        goto LABEL_10;
      if ( v64 <= 3 || v68 <= v67 + 144 && v67 <= v68 + 144 )
        goto LABEL_10;
      v9 = (const double *)v67;
      v10 = (double *)v68;
      v11 = 0;
      do
      {
        v63 = _mm_shuffle_ps(_mm_loadl_ps(v9 + 12), g4_m128_from<__m128>(0LL), 228);
        _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v63, 1), _mm_loadl_ps(v9 + 13));
        v66 = _mm_shuffle_ps(_mm_loadl_ps(v9 + 14), g4_m128_from<__m128>(0LL), 228);
        _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v66, 1), _mm_loadl_ps(v9 + 15));
        v12 = _mm_loadh_ps(v9 + 7);
        v13 = _mm_loadh_ps(v9 + 1);
        v14 = _mm_loadh_ps(v9 + 3);
        v15 = _mm_loadh_ps(v9 + 5);
        v65 = _mm_shuffle_ps(_mm_loadl_ps(v9 + 16), g4_m128_from<__m128>(0LL), 228);
        v16 = _mm_loadh_ps(v9 + 9);
        v17 = _mm_loadh_ps(v9 + 11);
        _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v65, 1), _mm_loadl_ps(v9 + 17));
        ++v11;
        _mm_storel_ps(v10, v13);
        v9 += 18;
        _mm_storeh_ps(v10 + 1, v13);
        _mm_storel_ps(v10 + 2, v14);
        _mm_storeh_ps(v10 + 3, v14);
        _mm_storel_ps(v10 + 4, v15);
        _mm_storeh_ps(v10 + 5, v15);
        _mm_storel_ps(v10 + 6, v12);
        v18 = v63;
        _mm_storel_ps(v10 + 12, v63);
        _mm_storeh_ps(v10 + 13, v18);
        v19 = v66;
        _mm_storel_ps(v10 + 14, v66);
        _mm_storeh_ps(v10 + 15, v19);
        v20 = v65;
        _mm_storeh_ps(v10 + 7, v12);
        _mm_storel_ps(v10 + 8, v16);
        _mm_storeh_ps(v10 + 9, v16);
        _mm_storel_ps(v10 + 10, v17);
        _mm_storeh_ps(v10 + 11, v17);
        _mm_storel_ps(v10 + 16, v20);
        _mm_storeh_ps(v10 + 17, v20);
        v10 += 18;
      }
      while ( v7 > v11 );
      v67 += 36 * v8;
      v68 += 36 * v8;
      v69 = v64 - v8;
      if ( v64 != v8 )
      {
LABEL_10:
        v21 = (int *)v67;
        v70 = v68;
        v22 = v67 + 24;
g4_m128_lane<int32_t>(v66, 0) = v68 + 12;
g4_m128_lane<int32_t>(v65, 0) = v68 + 24;
g4_m128_lane<int32_t>(v63, 0) = v67 + 12;
        do
        {
          v23 = (uint32_t *)v70;
          v24 = *v21;
          v25 = (char *)v21 - v67;
          --v69;
          v70 += 36;
          *v23 = v24;
          v23[1] = v21[1];
          v23[2] = v21[2];
          v26 = (char *)v23 - v68;
          *(uint32_t *)&v26[g4_m128_lane<int32_t>(v66, 0)] = *(uint32_t *)&v25[g4_m128_lane<int32_t>(v63, 0)];
          *(uint32_t *)&v26[g4_m128_lane<int32_t>(v66, 0) + 4] = *(uint32_t *)&v25[g4_m128_lane<int32_t>(v63, 0) + 4];
          *(uint32_t *)&v26[g4_m128_lane<int32_t>(v66, 0) + 8] = *(uint32_t *)&v25[g4_m128_lane<int32_t>(v63, 0) + 8];
          v27 =g4_m128_lane<int32_t>(v65, 0);
          v21 += 9;
          *(uint32_t *)&v26[g4_m128_lane<int32_t>(v65, 0)] = *(uint32_t *)&v25[v22];
          *(uint32_t *)&v26[v27 + 4] = *(uint32_t *)&v25[v22 + 4];
          *(uint32_t *)&v26[v27 + 8] = *(uint32_t *)&v25[v22 + 8];
        }
        while ( v69 > 0 );
      }
    }
    v28 = self;
    v29 = *(uint32_t *)self + 36 * v64;
LABEL_13:
    *((uint32_t *)v28 + 1) = v29;
    return v28;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_CMatrix4_float_SAllocato_c0e067::M_insert_aux  (binary VA: 0xf7d4c0)
// Original: std::vector<glitch::core::CMatrix4<float>,glitch::core::SAllocator<glitch::core::CMatrix4<float>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
size_t g4_std::vector_CMatrix4_float_SAllocato_c0e067::M_insert_aux(int *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  size_t result;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  int *v21;
  unsigned int v22;
  typedef int _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef uint32_t _g4_t_v25[15];
  typedef size_t _g4_t_v26;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v25)) > _g4_s2 ? (16u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v26)) > _g4_s3 ? (76u + sizeof(_g4_t_v26)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);

  v3 = a2;
  v4 = (uint32_t *)a1[1];
  if ( v4 != (uint32_t *)a1[2] )
  {
    sub_F59BC0(v4, v4 - 16);
    a1[1] += 64;
    sub_F59BC0(v25, a3);
    v5 = a1[1];
    v6 = (v5 - 128 - (int)(uintptr_t)(a2)) >> 6;
    if ( v6 > 0 )
    {
      v7 = (uint32_t *)(v5 - 64);
      do
      {
        v7 -= 16;
        --v6;
        *v7 = *(v7 - 16);
        v7[1] = *(v7 - 15);
        v7[2] = *(v7 - 14);
        v7[3] = *(v7 - 13);
        v7[4] = *(v7 - 12);
        v7[5] = *(v7 - 11);
        v7[6] = *(v7 - 10);
        v7[7] = *(v7 - 9);
        v7[8] = *(v7 - 8);
        v7[9] = *(v7 - 7);
        v7[10] = *(v7 - 6);
        v7[11] = *(v7 - 5);
        v7[12] = *(v7 - 4);
        v7[13] = *(v7 - 3);
        v7[14] = *(v7 - 2);
        v7[15] = *(v7 - 1);
      }
      while ( v6 != 0 );
    }
    std::memcpy(a2, v25, 60);
    result = v26;
    a2[15] = v26;
    return result;
  }
  v9 = *a1;
  v10 = ((int)(uintptr_t)(v4) - *a1) >> 6;
  if ( v10 != 0 )
  {
    v22 = 2 * v10;
    if ( v10 > 2 * v10 || v22 > 0x3FFFFFF )
    {
      v24 = 0xFFFFFFC0;
      v11 = ((int)(uintptr_t)(a2) - v9) >> 6;
    }
    else
    {
      v11 = ((int)(uintptr_t)(a2) - v9) >> 6;
      v24 = v10 << 7;
      if ( v22 == 0 )
      {
        v12 = 64;
        v23 = 0;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v24 = 64;
    v11 = ((int)(uintptr_t)(a2) - v9) >> 6;
  }
  v23 = sub_4EBDC0(v24);
  v12 = v23 + 64;
LABEL_9:
  sub_F59BC0((uint32_t *)(v23 + (v11 << 6)), a3);
  v13 = a1;
  v14 = (uint32_t *)*a1;
  if ( (uint32_t *)*a1 != a2 )
  {
    v15 = (uint32_t *)v23;
    do
    {
      v16 = v14;
      v17 = v15;
      v14 += 16;
      v15 += 16;
      sub_F59BC0(v17, v16);
    }
    while ( v14 != a2 );
    v12 = (int)(uintptr_t)(v15 + 16);
    v13 = a1;
  }
  v18 = (uint32_t *)v13[1];
  if ( v18 != a2 )
  {
    do
    {
      v19 = v3;
      v20 = (uint32_t *)v12;
      v3 += 16;
      v12 += 64;
      sub_F59BC0(v20, v19);
    }
    while ( v18 != v3 );
  }
  v21 = a1;
  if ( *a1 != 0 )
  {
    gll_operator_delete_arr(*a1);
    v21 = a1;
  }
  v21[1] = v12;
  *v21 = v23;
  v21[2] = v24 + v23;
  return v24 + v23;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_scene_CTerrainTriangleSe_1cf220::M_insert_aux  (binary VA: 0xf7db30)
// Original: std::vector<glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch,glitch::core::SAllocator<glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> * g4_std::vector_scene_CTerrainTriangleSe_1cf220::M_insert_aux(std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> **a1, std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *a2, unsigned int *a3)
{
  int32_t v3;
  bool v4;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v5;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v6;
  unsigned int *v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  uint32_t *v13;
  unsigned int v14;
  int v15;
  uint32_t *v16;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  int32_t v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v30;
  uint32_t *v31;
  int32_t v32;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v33;
  unsigned int v34;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v35;
  __m128 v36;
  int v37;
  char *v38;
  uint32_t *v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  const double *v44;
  double *v45;
  unsigned int v46;
  __m128 v47;
  __m128 v48;
  __m128 v49;
  __m128 v50;
  __m128 v51;
  __m128 v52;
  __m128 v53;
  __m128 v54;
  __m128 v55;
  int *v56;
  uint32_t *v57;
  uint32_t *v58;
  int v59;
  char *v60;
  char *v61;
  int v62;
  int v63;
  int v64;
  int v65;
  char *v66;
  char *v67;
  int v68;
  int v69;
  char *v70;
  char *v71;
  int v72;
  char *v73;
  int v74;
  unsigned int v75;
  unsigned int v76;
  uint32_t *v77;
  unsigned int v78;
  const double *v79;
  double *v80;
  unsigned int v81;
  __m128 v82;
  __m128 v83;
  __m128 v84;
  __m128 v85;
  __m128 v86;
  __m128 v87;
  __m128 v88;
  __m128 v89;
  __m128 v90;
  int *v91;
  unsigned int v92;
  uint32_t *v93;
  int v94;
  char *v95;
  char *v96;
  int v97;
  uint32_t *v98;
  uint32_t *v99;
  uint32_t *v100;
  uint32_t *v101;
  int32_t v102;
  uint32_t *v103;
  uint32_t *v104;
  uint32_t *v105;
  uint32_t *v106;
  int32_t v107;
  int v108;
  int v109;
  int v110;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *result;
  int v112;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v113;
  unsigned int v114;
  int v115;
  glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::Self *v116;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v117;
  int v118;
  int v119;
  int v120;
  uint32_t *v121;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v122;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v123;
  unsigned int v124;
  unsigned int v125;
  uint32_t *v126;
  int32_t v127;
  uint32_t *v128;
  uint32_t *v129;
  uint32_t *v130;
  uint32_t *v131;
  uint32_t *v132;
  int32_t v133;
  int v134;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v135;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v136;
  int v137;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v138;
  int v139; // xmm0_4
  int v140;
  int v141;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v142;
  int v143;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v144;
  int v145;
  int v146;
  int v147;
  uint32_t *v148;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v149;
  unsigned int v150;
  unsigned int v151;
  uint32_t *v152;
  int32_t v153;
  uint32_t *v154;
  uint32_t *v155;
  uint32_t *v156;
  uint32_t *v157;
  uint32_t *v158;
  int32_t v159;
  int v160;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v161;
  std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *v162;
  int v163;
  int v164; // xmm0_4
  int v165;
  int v166;
  int v167;
  int *v168;
  int v169;
  int v170;
  typedef __m128 _g4_t_v171;
  typedef __m128 _g4_t_v172;
  typedef char *_g4_t_v173;
  typedef int _g4_t_v174;
  typedef char *_g4_t_v175;
  typedef char *_g4_t_v176;
  typedef char *_g4_t_v177;
  typedef char *_g4_t_v178;
  typedef signed int _g4_t_v179;
  typedef std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v180;
  typedef int _g4_t_v181;
  typedef unsigned int _g4_t_v182;
  typedef int _g4_t_v183;
  typedef std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v184;
  typedef int _g4_t_v185;
  typedef unsigned int _g4_t_v186;
  typedef unsigned int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef __m128 _g4_t_v189;
  typedef __m128 _g4_t_v190;
  typedef std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v191;
  typedef std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v192;
  typedef char *_g4_t_v193;
  typedef unsigned int _g4_t_v194;
  typedef unsigned int _g4_t_v195;
  typedef unsigned int _g4_t_v196;
  typedef unsigned int _g4_t_v197;
  typedef unsigned int _g4_t_v198;
  typedef unsigned int _g4_t_v199;
  typedef unsigned int _g4_t_v200;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v171)) > _g4_s0 ? (0u + sizeof(_g4_t_v171)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v172)) > _g4_s1 ? (16u + sizeof(_g4_t_v172)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v173)) > _g4_s2 ? (32u + sizeof(_g4_t_v173)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v174)) > _g4_s3 ? (36u + sizeof(_g4_t_v174)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v175)) > _g4_s4 ? (40u + sizeof(_g4_t_v175)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v176)) > _g4_s5 ? (44u + sizeof(_g4_t_v176)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v177)) > _g4_s6 ? (48u + sizeof(_g4_t_v177)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v178)) > _g4_s7 ? (52u + sizeof(_g4_t_v178)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v179)) > _g4_s8 ? (56u + sizeof(_g4_t_v179)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v180)) > _g4_s9 ? (60u + sizeof(_g4_t_v180)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v181)) > _g4_s10 ? (64u + sizeof(_g4_t_v181)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v182)) > _g4_s11 ? (68u + sizeof(_g4_t_v182)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v183)) > _g4_s12 ? (72u + sizeof(_g4_t_v183)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v184)) > _g4_s13 ? (76u + sizeof(_g4_t_v184)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v185)) > _g4_s14 ? (80u + sizeof(_g4_t_v185)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v186)) > _g4_s15 ? (84u + sizeof(_g4_t_v186)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v187)) > _g4_s16 ? (88u + sizeof(_g4_t_v187)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v188)) > _g4_s17 ? (92u + sizeof(_g4_t_v188)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v189)) > _g4_s18 ? (96u + sizeof(_g4_t_v189)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v190)) > _g4_s19 ? (112u + sizeof(_g4_t_v190)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v191)) > _g4_s20 ? (128u + sizeof(_g4_t_v191)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v192)) > _g4_s21 ? (132u + sizeof(_g4_t_v192)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v193)) > _g4_s22 ? (136u + sizeof(_g4_t_v193)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v194)) > _g4_s23 ? (140u + sizeof(_g4_t_v194)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v195)) > _g4_s24 ? (144u + sizeof(_g4_t_v195)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v196)) > _g4_s25 ? (148u + sizeof(_g4_t_v196)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v197)) > _g4_s26 ? (152u + sizeof(_g4_t_v197)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v198)) > _g4_s27 ? (156u + sizeof(_g4_t_v198)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v199)) > _g4_s28 ? (160u + sizeof(_g4_t_v199)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v200)) > _g4_s29 ? (164u + sizeof(_g4_t_v200)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 0u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 16u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 32u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 36u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 40u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 44u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 48u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 52u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 56u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 60u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 64u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 68u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 72u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 76u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 80u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 84u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 88u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 92u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 96u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 112u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 128u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 132u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 136u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 140u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 144u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 148u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 152u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 156u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 160u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 164u);

  v3 = (int32_t)(uintptr_t)(a1[1]);
  v4 = v3 == (uint32_t)(uintptr_t)(a1[2]);
g4_m128_lane<int32_t>(v190, 0) = v3;
  if ( !v4 )
  {
    v5 = nullptr;
    if ( v3 != 0 )
    {
      v6 = *(std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> **)(v3 - 36);
      v7 = (unsigned int *)g4_m128_lane<int32_t>(v190, 0);
      v8 = (int)(uintptr_t)(v6) - *(uint32_t *)(v3 - 40);
      v182 = *(uint32_t *)(v3 - 40);
      v9 = v8 >> 2;
      v10 = 0;
      v184 = v6;
      *(uint32_t *)g4_m128_lane<int32_t>(v190, 0) = 0;
      v7[1] = 0;
      v7[2] = 0;
      v187 = 0;
      if ( 954437177 * v9 != 0 )
      {
        v10 = 4 * v9;
        v187 = sub_4EBDC0(4 * v9);
        v7 = (unsigned int *)g4_m128_lane<int32_t>(v190, 0);
        v11 = *(uint32_t *)(g4_m128_lane<int32_t>(v190, 0) - 40);
        v184 = *(std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> **)(g4_m128_lane<int32_t>(v190, 0) - 36);
        v182 = v11;
      }
      v12 = v187;
      v13 = (uint32_t *)v182;
      v14 = v187 + v10;
      v4 = v184 == (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)v182;
      *v7 = v187;
      v7[1] = v12;
      v7[2] = v14;
      if ( !v4 )
      {
        v15 = v12 + 16;
g4_m128_lane<int32_t>(v189, 0) = v12 + 24;
        v16 = v13 + 4;
        v17 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)v13;
        v18 = v13 + 6;
        v19 = (uint32_t *)v187;
        v188 = v15;
        do
        {
          if ( v19 != nullptr )
          {
            *v19 = *(uint32_t *)v17;
            v19[1] = *((uint32_t *)v17 + 1);
            v19[2] = *((uint32_t *)v17 + 2);
            v20 = (uint32_t *)v188;
            *(uint32_t *)(v188 - 4) = *(v16 - 1);
            *v20 = *v16;
            v20[1] = v16[1];
            v21 =g4_m128_lane<int32_t>(v189, 0);
            *(uint32_t *)g4_m128_lane<int32_t>(v189, 0) = *v18;
            *(uint32_t *)(v21 + 4) = v18[1];
            *(uint32_t *)(v21 + 8) = v18[2];
          }
          v17 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v17 + 36);
          v19 += 9;
          v16 += 9;
          v188 += 36;
          v18 += 9;
g4_m128_lane<int32_t>(v189, 0) += 36;
        }
        while ( v17 != v184 );
        v7 = (unsigned int *)g4_m128_lane<int32_t>(v190, 0);
        v187 += 4 * (((unsigned int)(uintptr_t)(v17) - v182 - 36) >> 2) + 36;
        v12 = v187;
      }
      v7[1] = v12;
      v7[3] = *(v7 - 7);
      v7[4] = *(v7 - 6);
      v7[5] = *(v7 - 5);
      v7[6] = *(v7 - 4);
      v7[7] = *(v7 - 3);
      v7[8] = *(v7 - 2);
      v7[9] = *(v7 - 1);
      v5 = a1[1];
    }
    v191 = nullptr;
    v192 = nullptr;
    v193 = nullptr;
    v184 = nullptr;
    a1[1] = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v5 + 40);
    v22 = a3[1];
    v187 = *a3;
    v23 = (int)(v22 - v187) >> 2;
    v24 = 0;
    v188 = v22;
    if ( 954437177 * v23 != 0 )
    {
      v24 = 4 * v23;
      v184 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)sub_4EBDC0(4 * v23);
      v25 = *a3;
      v188 = a3[1];
      v187 = v25;
    }
    v26 = v184;
    v27 = (uint32_t *)v187;
    v191 = v184;
    v192 = v184;
    v193 = (char *)v184 + v24;
    if ( v188 != v187 )
    {
g4_m128_lane<int32_t>(v189, 0) = (int32_t)(uintptr_t)(v184) + 24;
      v28 = (uint32_t *)(v187 + 16);
      v29 = (uint32_t *)(v187 + 24);
      v30 = v184;
g4_m128_lane<int32_t>(v190, 0) = (int32_t)(uintptr_t)(v184) + 16;
      do
      {
        if ( v30 != nullptr )
        {
          *(uint32_t *)v30 = *v27;
          *((uint32_t *)v30 + 1) = v27[1];
          *((uint32_t *)v30 + 2) = v27[2];
          v31 = (uint32_t *)g4_m128_lane<int32_t>(v190, 0);
          *(uint32_t *)(g4_m128_lane<int32_t>(v190, 0) - 4) = *(v28 - 1);
          *v31 = *v28;
          v31[1] = v28[1];
          v32 =g4_m128_lane<int32_t>(v189, 0);
          *(uint32_t *)g4_m128_lane<int32_t>(v189, 0) = *v29;
          *(uint32_t *)(v32 + 4) = v29[1];
          *(uint32_t *)(v32 + 8) = v29[2];
        }
        v27 += 9;
        v30 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v30 + 36);
        v28 += 9;
g4_m128_lane<int32_t>(v190, 0) += 36;
        v29 += 9;
g4_m128_lane<int32_t>(v189, 0) += 36;
      }
      while ( (uint32_t *)v188 != v27 );
      v184 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v184 + 4 * ((v188 - (v187 + 36)) >> 2) + 36);
      v26 = v184;
    }
    v192 = v26;
    v194 = a3[3];
    v195 = a3[4];
    v196 = a3[5];
    v197 = a3[6];
    v198 = a3[7];
    v33 = a1[1];
    v199 = a3[8];
    v34 = a3[9];
    v180 = v33;
    v200 = v34;
    v179 = -858993459
         * (((std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v33 - 80)
           - a2) >> 3);
    if ( v179 > 0 )
    {
      v173 = (char *)v33 - 120;
      v177 = (char *)v33 - 104;
      v35 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v33 - 40);
      v181 = (int)(uintptr_t)(v33) - 80;
      v178 = (char *)v33 - 64;
      v175 = (char *)v180 - 92;
      v176 = (char *)v180 - 52;
g4_m128_raw(v36) = 0;
      while ( 1 )
      {
        v37 = *((uint32_t *)v35 - 19);
        v184 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v35 - 40);
        v188 = v37;
        v38 = (char *)v35 - 40;
        v39 = *((uint32_t **)v35 - 20);
        v187 = *((uint32_t *)v35 - 10);
        v40 = (v37 - (int)(uintptr_t)(v39)) >> 2;
        v41 = 954437177 * ((int)(*((uint32_t *)v35 - 8) - v187) >> 2);
        v182 = 954437177 * v40;
g4_m128_lane<int32_t>(v190, 0) = 954437177 * v40;
        if ( 954437177 * v40 > v41 )
        {
          v187 = 0;
          v185 = 0;
          if ( 954437177 * v40 != 0 )
          {
            v172 = v36;
            v187 = 4 * v40;
            v185 = sub_4EBDC0(4 * v40);
            v36 = v172;
          }
          if ( v39 != (uint32_t *)v188 )
          {
g4_m128_lane<int32_t>(v189, 0) = v185 + 24;
            v103 = v39 + 4;
            v104 = v39 + 6;
            v105 = (uint32_t *)v185;
g4_m128_lane<int32_t>(v190, 0) = v185 + 16;
            do
            {
              if ( v105 != nullptr )
              {
                *v105 = *v39;
                v105[1] = v39[1];
                v105[2] = v39[2];
                v106 = (uint32_t *)g4_m128_lane<int32_t>(v190, 0);
                *(uint32_t *)(g4_m128_lane<int32_t>(v190, 0) - 4) = *(v103 - 1);
                *v106 = *v103;
                v106[1] = v103[1];
                v107 =g4_m128_lane<int32_t>(v189, 0);
                *(uint32_t *)g4_m128_lane<int32_t>(v189, 0) = *v104;
                *(uint32_t *)(v107 + 4) = v104[1];
                *(uint32_t *)(v107 + 8) = v104[2];
              }
              v39 += 9;
              v105 += 9;
              v103 += 9;
g4_m128_lane<int32_t>(v190, 0) += 36;
              v104 += 9;
g4_m128_lane<int32_t>(v189, 0) += 36;
            }
            while ( (uint32_t *)v188 != v39 );
          }
          v108 = v184 - v180;
          v109 = *(uint32_t *)(v184 - v180 + v181 + 80);
          if ( v109 != 0 )
          {
            v172 = v36;
            gll_operator_delete_arr(v109);
            v36 = v172;
          }
          v110 = v185;
          v63 = v181;
          *(uint32_t *)(v108 + v181 + 80) = v185;
          v64 = v187 + v110;
          *(uint32_t *)(v108 + v63 + 88) = v64;
        }
        else
        {
          v42 = (int)(*((uint32_t *)v38 + 1) - v187) >> 2;
          if ( v182 > 954437177 * v42 )
          {
            v74 = v184 - v180;
            v174 = v184 - v180;
            v75 = *(uint32_t *)&v173[v184 - v180 + 80];
            v76 = *(uint32_t *)(v184 - v180 + v181 + 80);
            v183 = v76;
            v186 = v75;
            v77 = (uint32_t *)(v75 + 4 * v42);
            v78 = 954437177 * v42;
g4_m128_lane<int32_t>(v190, 0) = v78;
            if ( (int)v78 > 0 )
            {
              v188 = 4 * (v78 >> 2);
              if ( v188 == 0 )
                goto LABEL_41;
              if ( v186 <= v76 + 144 && v76 <= v186 + 144 || v78 <= 3 )
                goto LABEL_41;
              v79 = (const double *)v186;
              v80 = (double *)v183;
              v81 = 0;
              do
              {
                v171 = _mm_shuffle_ps(_mm_loadl_ps(v79 + 12), v36, 228);
                _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v171, 1), _mm_loadl_ps(v79 + 13));
                v189 = _mm_shuffle_ps(_mm_loadl_ps(v79 + 14), v36, 228);
                _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v189, 1), _mm_loadl_ps(v79 + 15));
                v82 = _mm_loadh_ps(v79 + 7);
                v83 = _mm_loadh_ps(v79 + 1);
                v84 = _mm_loadh_ps(v79 + 3);
                v85 = _mm_loadh_ps(v79 + 5);
                v190 = _mm_shuffle_ps(_mm_loadl_ps(v79 + 16), v36, 228);
                v86 = _mm_loadh_ps(v79 + 9);
                v87 = _mm_loadh_ps(v79 + 11);
                _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v190, 1), _mm_loadl_ps(v79 + 17));
                ++v81;
                _mm_storel_ps(v80, v83);
                v79 += 18;
                _mm_storeh_ps(v80 + 1, v83);
                _mm_storel_ps(v80 + 2, v84);
                _mm_storeh_ps(v80 + 3, v84);
                _mm_storel_ps(v80 + 4, v85);
                _mm_storeh_ps(v80 + 5, v85);
                _mm_storel_ps(v80 + 6, v82);
                v88 = v171;
                _mm_storel_ps(v80 + 12, v171);
                _mm_storeh_ps(v80 + 13, v88);
                v89 = v189;
                _mm_storel_ps(v80 + 14, v189);
                _mm_storeh_ps(v80 + 15, v89);
                v90 = v190;
                _mm_storeh_ps(v80 + 7, v82);
                _mm_storel_ps(v80 + 8, v86);
                _mm_storeh_ps(v80 + 9, v86);
                _mm_storel_ps(v80 + 10, v87);
                _mm_storeh_ps(v80 + 11, v87);
                _mm_storel_ps(v80 + 16, v90);
                _mm_storeh_ps(v80 + 17, v90);
                v80 += 18;
              }
              while ( v78 >> 2 > v81 );
g4_m128_lane<int32_t>(v190, 0) = v78 - v188;
              v186 += 36 * v188;
              v183 += 36 * v188;
              if ( v78 != v188 )
              {
LABEL_41:
                v91 = (int *)v186;
g4_m128_lane<int32_t>(v189, 0) = v183;
                v188 = v183 + 12;
                v92 = v186 + 12;
                v185 = v183 + 24;
                v187 = v186 + 24;
                do
                {
                  v93 = (uint32_t *)g4_m128_lane<int32_t>(v189, 0);
                  v94 = *v91;
                  v95 = (char *)v91 - v186;
                  --g4_m128_lane<int32_t>(v190, 0);
g4_m128_lane<int32_t>(v189, 0) += 36;
                  *v93 = v94;
                  v93[1] = v91[1];
                  v93[2] = v91[2];
                  v96 = (char *)v93 - v183;
                  v97 = v188;
                  v91 += 9;
                  *(uint32_t *)&v96[v188] = *(uint32_t *)&v95[v92];
                  *(uint32_t *)&v96[v97 + 4] = *(uint32_t *)&v95[v92 + 4];
                  *(uint32_t *)&v96[v97 + 8] = *(uint32_t *)&v95[v92 + 8];
                  *(uint32_t *)&v96[v185] = *(uint32_t *)&v95[v187];
                  *(uint32_t *)&v96[v185 + 4] = *(uint32_t *)&v95[v187 + 4];
                  *(uint32_t *)&v96[v185 + 8] = *(uint32_t *)&v95[v187 + 8];
                }
                while (g4_m128_lane<int32_t>(v190, 0) > 0 );
              }
              v74 = v174;
              v77 = (uint32_t *)(*(uint32_t *)&v173[v174 + 80] + ((*((uint32_t *)v184 + 1) - *(uint32_t *)v184) & 0xFFFFFFFC));
            }
            v98 = *(uint32_t **)(v74 + v181 + 84);
            v188 = *(uint32_t *)&v173[v74 + 84];
            if ( (uint32_t *)v188 == v77 )
            {
              v112 = *(uint32_t *)(v74 + v181 + 80);
              v63 = v181;
              v64 = v112 + 36 * v182;
            }
            else
            {
g4_m128_lane<int32_t>(v189, 0) = (int32_t)(uintptr_t)(v98 + 6);
              v99 = v77 + 6;
              v100 = v77 + 4;
g4_m128_lane<int32_t>(v190, 0) = (int32_t)(uintptr_t)(v98 + 4);
              do
              {
                if ( v98 != nullptr )
                {
                  *v98 = *v77;
                  v98[1] = v77[1];
                  v98[2] = v77[2];
                  v101 = (uint32_t *)g4_m128_lane<int32_t>(v190, 0);
                  *(uint32_t *)(g4_m128_lane<int32_t>(v190, 0) - 4) = *(v100 - 1);
                  *v101 = *v100;
                  v101[1] = v100[1];
                  v102 =g4_m128_lane<int32_t>(v189, 0);
                  *(uint32_t *)g4_m128_lane<int32_t>(v189, 0) = *v99;
                  *(uint32_t *)(v102 + 4) = v99[1];
                  *(uint32_t *)(v102 + 8) = v99[2];
                }
                v77 += 9;
                v98 += 9;
                v100 += 9;
g4_m128_lane<int32_t>(v190, 0) += 36;
                v99 += 9;
g4_m128_lane<int32_t>(v189, 0) += 36;
              }
              while ( (uint32_t *)v188 != v77 );
              v63 = v181;
              v64 = *(uint32_t *)(v174 + v181 + 80) + 36 * v182;
            }
          }
          else if ( (int)v182 <= 0 )
          {
            v63 = v181;
            v64 = *(uint32_t *)(v181 + v184 - v180 + 80) + 4 * v40;
          }
          else
          {
            v43 = v182 >> 2;
            v188 = 4 * (v182 >> 2);
            if ( v188 == 0 )
              goto LABEL_30;
            if ( (unsigned int)(uintptr_t)(v39) <= v187 + 144 && v187 <= (unsigned int)(uintptr_t)(v39 + 36) || v182 <= 3 )
              goto LABEL_30;
            v44 = (const double *)v39;
            v45 = (double *)v187;
            v46 = 0;
            do
            {
              v171 = _mm_shuffle_ps(_mm_loadl_ps(v44 + 12), v36, 228);
              _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v171, 1), _mm_loadl_ps(v44 + 13));
              v189 = _mm_shuffle_ps(_mm_loadl_ps(v44 + 14), v36, 228);
              _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v189, 1), _mm_loadl_ps(v44 + 15));
              v47 = _mm_loadh_ps(v44 + 7);
              v48 = _mm_loadh_ps(v44 + 1);
              v49 = _mm_loadh_ps(v44 + 3);
              v50 = _mm_loadh_ps(v44 + 5);
              v190 = _mm_shuffle_ps(_mm_loadl_ps(v44 + 16), v36, 228);
              v51 = _mm_loadh_ps(v44 + 9);
              v52 = _mm_loadh_ps(v44 + 11);
              _mm_storel_ps((double *)&g4_m128_lane<uint64_t>(v190, 1), _mm_loadl_ps(v44 + 17));
              ++v46;
              _mm_storel_ps(v45, v48);
              v44 += 18;
              _mm_storeh_ps(v45 + 1, v48);
              _mm_storel_ps(v45 + 2, v49);
              _mm_storeh_ps(v45 + 3, v49);
              _mm_storel_ps(v45 + 4, v50);
              _mm_storeh_ps(v45 + 5, v50);
              _mm_storel_ps(v45 + 6, v47);
              v53 = v171;
              _mm_storel_ps(v45 + 12, v171);
              _mm_storeh_ps(v45 + 13, v53);
              v54 = v189;
              _mm_storel_ps(v45 + 14, v189);
              _mm_storeh_ps(v45 + 15, v54);
              v55 = v190;
              _mm_storeh_ps(v45 + 7, v47);
              _mm_storel_ps(v45 + 8, v51);
              _mm_storeh_ps(v45 + 9, v51);
              _mm_storel_ps(v45 + 10, v52);
              _mm_storeh_ps(v45 + 11, v52);
              _mm_storel_ps(v45 + 16, v55);
              _mm_storeh_ps(v45 + 17, v55);
              v45 += 18;
            }
            while ( v43 > v46 );
g4_m128_lane<int32_t>(v190, 0) = v182 - v188;
            v187 += 36 * v188;
            v39 += 9 * v188;
            if ( v182 != v188 )
            {
LABEL_30:
g4_m128_lane<int32_t>(v189, 0) = v187;
              v188 = v187 + 12;
              v56 = (int *)(v39);
              v57 = v39 + 6;
              v185 = v187 + 24;
              v183 = (int)(uintptr_t)(v39);
              v186 = (unsigned int)(uintptr_t)(v39 + 3);
              do
              {
                v58 = (uint32_t *)g4_m128_lane<int32_t>(v189, 0);
                v59 = *v56;
                v60 = (char *)v56 - v183;
                --g4_m128_lane<int32_t>(v190, 0);
g4_m128_lane<int32_t>(v189, 0) += 36;
                *v58 = v59;
                v58[1] = v56[1];
                v58[2] = v56[2];
                v61 = (char *)v58 - v187;
                *(uint32_t *)&v61[v188] = *(uint32_t *)&v60[v186];
                *(uint32_t *)&v61[v188 + 4] = *(uint32_t *)&v60[v186 + 4];
                *(uint32_t *)&v61[v188 + 8] = *(uint32_t *)&v60[v186 + 8];
                v62 = v185;
                v56 += 9;
                *(uint32_t *)&v61[v185] = *(uint32_t *)((char *)v57 + (uint32_t)(uintptr_t)(v60));
                *(uint32_t *)&v61[v62 + 4] = *(uint32_t *)((char *)v57 + (uint32_t)(uintptr_t)(v60) + 4);
                *(uint32_t *)&v61[v62 + 8] = *(uint32_t *)((char *)v57 + (uint32_t)(uintptr_t)(v60) + 8);
              }
              while (g4_m128_lane<int32_t>(v190, 0) > 0 );
            }
            v63 = v181;
            v64 = *(uint32_t *)(v181 + v184 - v180 + 80) + 36 * v182;
          }
        }
        v65 = v184 - v180;
        v66 = v173;
        v67 = v177;
        v4 = v179-- == 1;
        *(uint32_t *)(v63 + v65 + 84) = v64;
        v68 = v65;
        v69 = *(uint32_t *)&v66[v65 + 92];
        v70 = v175;
        *(uint32_t *)(v68 + v63 + 92) = v69;
        v71 = v178;
        *(uint32_t *)&v178[v68 + 80] = *(uint32_t *)&v67[v68 + 80];
        *(uint32_t *)&v71[v68 + 84] = *(uint32_t *)&v67[v68 + 84];
        v72 = *(uint32_t *)&v67[v68 + 88];
        v73 = v176;
        *(uint32_t *)&v71[v68 + 88] = v72;
        *(uint32_t *)&v73[v68 + 80] = *(uint32_t *)&v70[v68 + 80];
        *(uint32_t *)&v73[v68 + 84] = *(uint32_t *)&v70[v68 + 84];
        *(uint32_t *)&v73[v68 + 88] = *(uint32_t *)&v70[v68 + 88];
        if ( v4 )
          break;
        v35 = v184;
      }
    }
    g4_std::vector_triangle3d_float_SAlloca_343806::opAssign(
      a2,
      (const std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)&v191);
    *((uint32_t *)a2 + 3) = v194;
    *((uint32_t *)a2 + 4) = v195;
    *((uint32_t *)a2 + 5) = v196;
    *((uint32_t *)a2 + 6) = v197;
    *((uint32_t *)a2 + 7) = v198;
    *((uint32_t *)a2 + 8) = v199;
    *((uint32_t *)a2 + 9) = v200;
    result = v191;
    if ( v191 != nullptr )
      return (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)gll_operator_delete_arr((int)(uintptr_t)(v191));
    return result;
  }
  v113 = *a1;
  if ( -858993459 * ((g4_m128_lane<int32_t>(v190, 0) - (int)(uintptr_t)(*a1)) >> 3) != 0 )
  {
    v114 = -1717986918 * ((g4_m128_lane<int32_t>(v190, 0) - (int)(uintptr_t)(*a1)) >> 3);
    if ( -858993459 * ((g4_m128_lane<int32_t>(v190, 0) - (int)(uintptr_t)(*a1)) >> 3) > v114 || v114 > 0x6666666 )
    {
      v179 = -16;
      v115 = -858993459 * ((a2 - v113) >> 3);
    }
    else
    {
      v115 = -858993459 * ((a2 - v113) >> 3);
      v179 = 16 * ((g4_m128_lane<int32_t>(v190, 0) - (int)(uintptr_t)(*a1)) >> 3);
      if ( v114 == 0 )
      {
        v181 = 40;
        v183 = 0;
        goto LABEL_69;
      }
    }
  }
  else
  {
    v179 = 40;
    v115 = -858993459 * ((a2 - v113) >> 3);
  }
  v183 = sub_4EBDC0(v179);
  v181 = v183 + 40;
LABEL_69:
  v116 = (glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::Self *)(v183 + 40 * v115);
  if ( v116 != nullptr )
    glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::Construct(
      v116,
      (const glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::Self *)a3);
  v117 = *a1;
  v180 = *a1;
  if ( v180 != a2 )
  {
    v184 = v117;
    v188 = v183;
    do
    {
      if ( v188 != 0 )
      {
        v118 = v188;
        v119 = 0;
        v187 = 0;
        v120 = (*((uint32_t *)v184 + 1) - *(uint32_t *)v184) >> 2;
        *(uint32_t *)v188 = 0;
        *(uint32_t *)(v118 + 4) = 0;
        *(uint32_t *)(v118 + 8) = 0;
        if ( 954437177 * v120 != 0 )
        {
          v119 = 4 * v120;
          v187 = sub_4EBDC0(4 * v120);
        }
        v121 = (uint32_t *)v188;
        v122 = v184;
        v123 = v184;
        v124 = v187;
        v125 = v187 + v119;
        *(uint32_t *)v188 = v187;
        v121[1] = v124;
        v121[2] = v125;
        v126 = *(uint32_t **)v123;
        v185 = *((uint32_t *)v122 + 1);
        v182 = (unsigned int)(uintptr_t)(v126);
        if ( (uint32_t *)v185 != v126 )
        {
          v127 = v124 + 16;
          v128 = v126;
g4_m128_lane<int32_t>(v189, 0) = v124 + 24;
          v129 = v126 + 4;
          v130 = v126 + 6;
          v131 = (uint32_t *)v187;
g4_m128_lane<int32_t>(v190, 0) = v127;
          do
          {
            if ( v131 != nullptr )
            {
              *v131 = *v128;
              v131[1] = v128[1];
              v131[2] = v128[2];
              v132 = (uint32_t *)g4_m128_lane<int32_t>(v190, 0);
              *(uint32_t *)(g4_m128_lane<int32_t>(v190, 0) - 4) = *(v129 - 1);
              *v132 = *v129;
              v132[1] = v129[1];
              v133 =g4_m128_lane<int32_t>(v189, 0);
              *(uint32_t *)g4_m128_lane<int32_t>(v189, 0) = *v130;
              *(uint32_t *)(v133 + 4) = v130[1];
              *(uint32_t *)(v133 + 8) = v130[2];
            }
            v128 += 9;
            v131 += 9;
            v129 += 9;
g4_m128_lane<int32_t>(v190, 0) += 36;
            v130 += 9;
g4_m128_lane<int32_t>(v189, 0) += 36;
          }
          while ( (uint32_t *)v185 != v128 );
          v121 = (uint32_t *)v188;
          v187 += 4 * ((v185 - (v182 + 36)) >> 2) + 36;
          v124 = v187;
        }
        v134 = v188;
        v135 = v184;
        v136 = v184;
        *(uint32_t *)(v188 + 4) = v124;
        *(uint32_t *)(v134 + 12) = *((uint32_t *)v135 + 3);
        v137 = v135 - v180;
        v138 = v180;
        v139 = *((uint32_t *)v136 + 4);
        v140 = v188 - v183;
        v141 = v183;
        v121[4] = v139;
        *(uint32_t *)(v140 + v141 + 20) = *(uint32_t *)((char *)v138 + v137 + 20);
        *(uint32_t *)(v140 + v141 + 24) = *(uint32_t *)((char *)v138 + v137 + 24);
        v142 = v180;
        v143 = v183;
        *(uint32_t *)(v188 + 28) = *((uint32_t *)v184 + 7);
        *(uint32_t *)(v140 + v143 + 32) = *(uint32_t *)((char *)v142 + v137 + 32);
        *(uint32_t *)(v140 + v143 + 36) = *(uint32_t *)((char *)v142 + v137 + 36);
      }
      v184 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v184 + 40);
      v188 += 40;
    }
    while ( v184 != a2 );
    v181 = v188 + 40;
  }
  v188 = v181;
  v180 = a1[1];
  if ( v180 != a2 )
  {
    v184 = a2;
    do
    {
      if ( v188 != 0 )
      {
        v144 = v184;
        v145 = v188;
        v187 = 0;
        v146 = (*((uint32_t *)v184 + 1) - *(uint32_t *)v184) >> 2;
        *(uint32_t *)v188 = 0;
        *(uint32_t *)(v145 + 4) = 0;
        *(uint32_t *)(v145 + 8) = 0;
        v147 = 0;
        if ( 954437177 * v146 != 0 )
        {
          v147 = 4 * v146;
          v187 = sub_4EBDC0(4 * v146);
          v144 = v184;
        }
        v148 = (uint32_t *)v188;
        v149 = v184;
        v150 = v187;
        v151 = v187 + v147;
        *(uint32_t *)v188 = v187;
        v148[1] = v150;
        v148[2] = v151;
        v152 = *(uint32_t **)v144;
        v185 = *((uint32_t *)v149 + 1);
        v182 = (unsigned int)(uintptr_t)(v152);
        if ( (uint32_t *)v185 != v152 )
        {
          v153 = v150 + 16;
          v154 = v152;
g4_m128_lane<int32_t>(v189, 0) = v150 + 24;
          v155 = v152 + 4;
          v156 = v152 + 6;
          v157 = (uint32_t *)v187;
g4_m128_lane<int32_t>(v190, 0) = v153;
          do
          {
            if ( v157 != nullptr )
            {
              *v157 = *v154;
              v157[1] = v154[1];
              v157[2] = v154[2];
              v158 = (uint32_t *)g4_m128_lane<int32_t>(v190, 0);
              *(uint32_t *)(g4_m128_lane<int32_t>(v190, 0) - 4) = *(v155 - 1);
              *v158 = *v155;
              v158[1] = v155[1];
              v159 =g4_m128_lane<int32_t>(v189, 0);
              *(uint32_t *)g4_m128_lane<int32_t>(v189, 0) = *v156;
              *(uint32_t *)(v159 + 4) = v156[1];
              *(uint32_t *)(v159 + 8) = v156[2];
            }
            v154 += 9;
            v157 += 9;
            v155 += 9;
g4_m128_lane<int32_t>(v190, 0) += 36;
            v156 += 9;
g4_m128_lane<int32_t>(v189, 0) += 36;
          }
          while ( (uint32_t *)v185 != v154 );
          v148 = (uint32_t *)v188;
          v187 += 4 * ((v185 - (v182 + 36)) >> 2) + 36;
          v150 = v187;
        }
        v160 = v188;
        v161 = v184;
        v162 = v184;
        *(uint32_t *)(v188 + 4) = v150;
        *(uint32_t *)(v160 + 12) = *((uint32_t *)v161 + 3);
        v163 = v161 - a2;
        v164 = *((uint32_t *)v162 + 4);
        v165 = v188 - v181;
        v166 = v181;
        v148[4] = v164;
        *(uint32_t *)(v165 + v166 + 20) = *(uint32_t *)((char *)a2 + v163 + 20);
        *(uint32_t *)(v165 + v166 + 24) = *(uint32_t *)((char *)a2 + v163 + 24);
        v167 = v181;
        *(uint32_t *)(v188 + 28) = *((uint32_t *)v184 + 7);
        *(uint32_t *)(v165 + v167 + 32) = *(uint32_t *)((char *)a2 + v163 + 32);
        *(uint32_t *)(v165 + v167 + 36) = *(uint32_t *)((char *)a2 + v163 + 36);
      }
      v184 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v184 + 40);
      v188 += 40;
    }
    while ( v180 != v184 );
    v180 = a1[1];
  }
  v168 = (int *)*a1;
  if ( *a1 != v180 )
  {
    do
    {
      if ( *v168 != 0 )
        gll_operator_delete_arr(*v168);
      v168 += 10;
    }
    while ( v168 != (int *)v180 );
    v168 = (int *)*a1;
  }
  if ( v168 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v168));
  v169 = v183;
  v170 = v188;
  *a1 = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)v183;
  result = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)(v179 + v169);
  a1[1] = (std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *)v170;
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_quickhull3d_detail_SEdge_a9257c::M_fill_insert  (binary VA: 0xf7f060)
// Original: std::vector<glitch::core::quickhull3d_detail::SEdgeIndex,glitch::core::SAllocator<glitch::core::quickhull3d_detail::SEdgeIndex,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_quickhull3d_detail_SEdge_a9257c::M_fill_insert(int *a1, char *a2, unsigned int a3, int *a4)
{
  char *v4;
  int v5;
  char *v6;
  uint32_t *v7;
  int v8;
  char *v9;
  char *v10;
  char *v11;
  uint32_t *v12;
  unsigned int v13;
  uint32_t *v14;
  char *v15;
  char *v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  bool v20;
  unsigned int v21;
  int v22;
  size_t v23;
  int v24;
  int v25;
  int *v26;
  unsigned int i;
  uint32_t *v28;
  char *v29;
  uint32_t *v30;
  char *v31;
  char *v32;
  uint32_t *v33;
  int v34;
  unsigned int v35;
  char *v36;
  int v37;
  size_t v38;
  size_t v39;
  int v40;

  if ( a3 == 0 )
    return;
  v4 = (char *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v35 = (v4 - a2) >> 2;
    if ( a3 >= v35 )
    {
      v12 = (uint32_t *)a1[1];
      if ( a3 != v35 )
      {
        v13 = a3 - v35;
        do
        {
          if ( v12 != nullptr )
            *v12 = v5;
          ++v12;
          --v13;
        }
        while ( v13 != 0 );
        v12 = (uint32_t *)a1[1];
      }
      v14 = &v12[a3 - v35];
      a1[1] = (int)(uintptr_t)(v14);
      if ( v4 == a2 )
      {
        a1[1] = (int)(uintptr_t)(&v14[v35]);
      }
      else
      {
        v15 = a2;
        do
        {
          if ( v14 != nullptr )
            *v14 = *(uint32_t *)v15;
          v15 += 4;
          ++v14;
        }
        while ( v4 != v15 );
        a1[1] += 4 * v35;
        v16 = a2;
        do
        {
          *(uint32_t *)v16 = v5;
          v16 += 4;
        }
        while ( v4 != v16 );
      }
    }
    else
    {
      v6 = &v4[-4 * a3];
      v38 = 4 * a3;
      v36 = v6;
      v7 = (uint32_t *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *(uint32_t *)v6;
          v6 += 4;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (uint32_t *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v38 / 4]);
      v8 = (v36 - a2) >> 2;
      if ( v8 > 0 )
      {
        v9 = &v4[-4 * v8];
        v10 = &v36[-4 * v8];
        do
        {
          *(uint32_t *)&v9[4 * v8 - 4] = *(uint32_t *)&v10[4 * v8 - 4];
          --v8;
        }
        while ( v8 != 0 );
      }
      if ( &a2[v38] != a2 )
      {
        v11 = a2;
        do
        {
          *(uint32_t *)v11 = v5;
          v11 += 4;
        }
        while ( &a2[v38] != v11 );
      }
    }
    return;
  }
  v17 = *a1;
  v18 = (int)(uintptr_t)(&v4[-*a1]) >> 2;
  if ( a3 > 0x3FFFFFFF - v18 )
    sub_1900180("vector::_M_fill_insert");
  v19 = a3;
  if ( v18 >= a3 )
    v19 = v18;
  v20 = __CFADD__(v19, v18);
  v21 = v19 + v18;
  if ( v20 || v21 > 0x3FFFFFFF )
  {
    v39 = 0xFFFFFFFC;
    v22 = (int)(uintptr_t)(&a2[-v17]);
    v23 = 0xFFFFFFFC;
    v24 = v22 >> 2;
LABEL_35:
    v34 = v24;
    v37 = sub_4EBDC0(v23);
    v24 = v34;
    v25 = v37;
    goto LABEL_36;
  }
  v24 = (int)(uintptr_t)(&a2[-v17]) >> 2;
  if ( v21 != 0 )
  {
    v39 = 4 * v21;
    v23 = 4 * v21;
    goto LABEL_35;
  }
  v37 = 0;
  v39 = 0;
  v25 = 0;
LABEL_36:
  v26 = (int *)(v25 + 4 * v24);
  for ( i = a3; i != 0; --i )
  {
    if ( v26 != nullptr )
      *v26 = *a4;
    ++v26;
  }
  v28 = (uint32_t *)v37;
  if ( (char *)*a1 != a2 )
  {
    v29 = (char *)*a1;
    v40 = *a1;
    do
    {
      if ( v28 != nullptr )
        *v28 = *(uint32_t *)v29;
      v29 += 4;
      ++v28;
    }
    while ( v29 != a2 );
    v28 = (uint32_t *)(v37 + 4 * ((unsigned int)(uintptr_t)(&a2[-v40 - 4]) >> 2) + 4);
  }
  v30 = &v28[a3];
  v31 = (char *)a1[1];
  if ( v31 != a2 )
  {
    v32 = a2;
    v33 = &v28[a3];
    do
    {
      if ( v33 != nullptr )
        *v33 = *(uint32_t *)v32;
      v32 += 4;
      ++v33;
    }
    while ( v31 != v32 );
    v30 += ((unsigned int)(v31 - (a2 + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  a1[1] = (int)(uintptr_t)(v30);
  *a1 = v37;
  a1[2] = v39 + v37;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_vector3d_float_SAllocato_a26dcf::M_fill_insert  (binary VA: 0xf7f320)
// Original: std::vector<glitch::core::vector3d<float>,glitch::core::SAllocator<glitch::core::vector3d<float>,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_vector3d_float_SAllocato_a26dcf::M_fill_insert(int *a1, char *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4;
  char *v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  char *v9;
  uint32_t *v10;
  int v11;
  char *v12;
  char *v13;
  uint64_t v14; // xmm6_8
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  double *v19;
  unsigned int v20;
  char *v21;
  int v22;
  unsigned int v23;
  uint32_t *v24;
  uint32_t *v25;
  char *v26;
  uint64_t v27; // xmm6_8
  __m128 v28;
  __m128 v29;
  __m128 v30;
  __m128 v31;
  double *v32;
  unsigned int v33;
  char *v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  bool v38;
  unsigned int v39;
  int v40;
  size_t v41;
  int v42;
  uint32_t *v43;
  unsigned int v44;
  uint32_t *v45;
  char *v46;
  char *v47;
  char *v48;
  uint32_t *v49;
  int v50;
  int v51;
  int v52;
  char *v53;
  int v54;
  unsigned int v55;
  char *v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  uint32_t *v60;

  v4 = a3;
  v53 = a2;
  if ( a3 == 0 )
    return;
  v5 = (char *)a1[1];
  if ( a3 <= -1431655765 * ((a1[2] - (int)(uintptr_t)(v5)) >> 2) )
  {
    v55 = -1431655765 * ((v5 - a2) >> 2);
g4_m128_raw(v6) = *a4;
g4_m128_raw(v7) = a4[1];
g4_m128_raw(v8) = a4[2];
    if ( a3 >= v55 )
    {
      v22 = a1[1];
      if ( a3 != v55 )
      {
        v23 = a3 - v55;
        v24 = (uint32_t *)a1[1];
        do
        {
          if ( v24 != nullptr )
          {
            *v24 =g4_m128_lane<int32_t>(v6, 0);
            v24[1] =g4_m128_lane<int32_t>(v7, 0);
            v24[2] =g4_m128_lane<int32_t>(v8, 0);
          }
          v24 += 3;
          --v23;
        }
        while ( v23 != 0 );
        v22 = a1[1];
      }
      v25 = (uint32_t *)(v22 + 12 * (a3 - v55));
      a1[1] = (int)(uintptr_t)(v25);
      if ( v5 == a2 )
      {
        a1[1] = (int)(uintptr_t)(&v25[(v5 - a2) >> 2]);
      }
      else
      {
        v26 = a2;
        do
        {
          if ( v25 != nullptr )
          {
            *v25 = *(uint32_t *)v26;
            v25[1] = *((uint32_t *)v26 + 1);
            v25[2] = *((uint32_t *)v26 + 2);
          }
          v26 += 12;
          v25 += 3;
        }
        while ( v5 != v26 );
        a1[1] += 4 * ((v5 - a2) >> 2);
        v58 = ((715827883 * ((unsigned int)(v5 - (a2 + 12)) >> 2)) & 0x3FFFFFFF) + 1;
        if ( v58 <= 3 )
          goto LABEL_37;
        if ( 4 * (v58 >> 2) == 0 )
          goto LABEL_37;
g4_m128_lane<uint64_t>(v30, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v7, v8), 0);
        v27 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v8, v6), 0);
g4_m128_lane<uint64_t>(v28, 0) = v27;
g4_m128_lane<uint64_t>(v28, 1) =g4_m128_lane<uint64_t>(v30, 0);
        v29 = v28;
g4_m128_lane<uint64_t>(v31, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v6, v7), 0);
g4_m128_lane<uint64_t>(v30, 1) =g4_m128_lane<uint64_t>(v31, 0);
g4_m128_lane<uint64_t>(v31, 1) = v27;
        v32 = (double *)a2;
        v33 = 0;
        do
        {
          ++v33;
          _mm_storel_ps(v32, v31);
          _mm_storeh_ps(v32 + 1, v31);
          _mm_storel_ps(v32 + 2, v30);
          _mm_storeh_ps(v32 + 3, v30);
          _mm_storel_ps(v32 + 4, v29);
          _mm_storeh_ps(v32 + 5, v29);
          v32 += 6;
        }
        while ( v33 < v58 >> 2 );
        v53 = &a2[48 * (v58 >> 2)];
        if ( v58 != 4 * (v58 >> 2) )
        {
LABEL_37:
          v34 = v53;
          do
          {
            *(uint32_t *)v34 =g4_m128_lane<int32_t>(v6, 0);
            *((uint32_t *)v34 + 1) =g4_m128_lane<int32_t>(v7, 0);
            *((uint32_t *)v34 + 2) =g4_m128_lane<int32_t>(v8, 0);
            v34 += 12;
          }
          while ( v5 != v34 );
        }
      }
    }
    else
    {
      v9 = &v5[-12 * a3];
      v51 = 12 * a3;
      v56 = v9;
      v10 = (uint32_t *)a1[1];
      if ( v5 != v9 )
      {
        do
        {
          if ( v10 != nullptr )
          {
            *v10 = *(uint32_t *)v9;
            v10[1] = *((uint32_t *)v9 + 1);
            v10[2] = *((uint32_t *)v9 + 2);
          }
          v9 += 12;
          v10 += 3;
        }
        while ( v5 != v9 );
        v10 = (uint32_t *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v10[v51 / 4u]);
      v11 = -1431655765 * ((v56 - a2) >> 2);
      if ( v11 > 0 )
      {
        v12 = v5 - 12;
        v13 = v56 - 12;
        do
        {
          --v11;
          *(uint32_t *)v12 = *(uint32_t *)v13;
          *((uint32_t *)v12 + 1) = *((uint32_t *)v13 + 1);
          *((uint32_t *)v12 + 2) = *((uint32_t *)v13 + 2);
          v13 -= 12;
          v12 -= 12;
        }
        while ( v11 != 0 );
      }
      if ( &a2[v51] != a2 )
      {
        v57 = ((715827883 * ((unsigned int)(v51 - 12) >> 2)) & 0x3FFFFFFF) + 1;
        if ( v57 <= 3 )
          goto LABEL_18;
        if ( 4 * (v57 >> 2) == 0 )
          goto LABEL_18;
g4_m128_lane<uint64_t>(v17, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v7, v8), 0);
        v14 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v8, v6), 0);
g4_m128_lane<uint64_t>(v15, 0) = v14;
g4_m128_lane<uint64_t>(v15, 1) =g4_m128_lane<uint64_t>(v17, 0);
        v16 = v15;
g4_m128_lane<uint64_t>(v18, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v6, v7), 0);
g4_m128_lane<uint64_t>(v17, 1) =g4_m128_lane<uint64_t>(v18, 0);
g4_m128_lane<uint64_t>(v18, 1) = v14;
        v19 = (double *)a2;
        v20 = 0;
        do
        {
          ++v20;
          _mm_storel_ps(v19, v18);
          _mm_storeh_ps(v19 + 1, v18);
          _mm_storel_ps(v19 + 2, v17);
          _mm_storeh_ps(v19 + 3, v17);
          _mm_storel_ps(v19 + 4, v16);
          _mm_storeh_ps(v19 + 5, v16);
          v19 += 6;
        }
        while ( v57 >> 2 > v20 );
        v53 = &a2[48 * (v57 >> 2)];
        if ( v57 != 4 * (v57 >> 2) )
        {
LABEL_18:
          v21 = v53;
          do
          {
            *(uint32_t *)v21 =g4_m128_lane<int32_t>(v6, 0);
            *((uint32_t *)v21 + 1) =g4_m128_lane<int32_t>(v7, 0);
            *((uint32_t *)v21 + 2) =g4_m128_lane<int32_t>(v8, 0);
            v21 += 12;
          }
          while ( &a2[v51] != v21 );
        }
      }
    }
    return;
  }
  v35 = *a1;
  v36 = -1431655765 * ((int)(uintptr_t)(&v5[-*a1]) >> 2);
  if ( a3 > 357913941 - v36 )
    sub_1900180("vector::_M_fill_insert");
  v37 = a3;
  if ( v36 >= a3 )
    v37 = v36;
  v38 = __CFADD__(v36, v37);
  v39 = v36 + v37;
  if ( v38 || v39 > 0x15555555 )
  {
    v52 = -4;
    v40 = (int)(uintptr_t)(&a2[-v35]);
    v41 = 0xFFFFFFFC;
    v42 = -1431655765 * (v40 >> 2);
LABEL_45:
    v50 = v42;
    v54 = sub_4EBDC0(v41);
    v4 = a3;
    v42 = v50;
    goto LABEL_46;
  }
  v42 = -1431655765 * ((int)(uintptr_t)(&a2[-v35]) >> 2);
  if ( v39 != 0 )
  {
    v52 = 12 * v39;
    v41 = 12 * v39;
    goto LABEL_45;
  }
  v52 = 0;
  v54 = 0;
LABEL_46:
  v43 = (uint32_t *)(v54 + 12 * v42);
  v44 = v4;
  do
  {
    if ( v43 != nullptr )
    {
      *v43 = *a4;
      v43[1] = a4[1];
      v43[2] = a4[2];
    }
    v43 += 3;
    --v44;
  }
  while ( v44 != 0 );
  v45 = (uint32_t *)v54;
  v59 = *a1;
  if ( (char *)*a1 != a2 )
  {
    v46 = (char *)*a1;
    do
    {
      if ( v45 != nullptr )
      {
        *v45 = *(uint32_t *)v46;
        v45[1] = *((uint32_t *)v46 + 1);
        v45[2] = *((uint32_t *)v46 + 2);
      }
      v46 += 12;
      v45 += 3;
    }
    while ( v46 != a2 );
    v45 = (uint32_t *)(v54 + 4 * ((unsigned int)(uintptr_t)(&a2[-v59 - 12]) >> 2) + 12);
  }
  v60 = &v45[3 * v4];
  v47 = (char *)a1[1];
  if ( v47 != a2 )
  {
    v48 = a2;
    v49 = v60;
    do
    {
      if ( v49 != nullptr )
      {
        *v49 = *(uint32_t *)v48;
        v49[1] = *((uint32_t *)v48 + 1);
        v49[2] = *((uint32_t *)v48 + 2);
      }
      v48 += 12;
      v49 += 3;
    }
    while ( v47 != v48 );
    v60 += ((unsigned int)(v47 - (a2 + 12)) >> 2) + 3;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v54;
  a1[1] = (int)(uintptr_t)(v60);
  a1[2] = v52 + v54;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_quickhull3d_detail_SEdge_9a10d2::M_fill_insert  (binary VA: 0xf7f820)
// Original: std::vector<glitch::core::quickhull3d_detail::SEdge *,glitch::core::SAllocator<glitch::core::quickhull3d_detail::SEdge *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_quickhull3d_detail_SEdge_9a10d2::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int *v11;
  unsigned int i;
  uint32_t *v13;
  char *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  char *v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int *v24;
  unsigned int j;
  __m128i *v26;
  __m128i v27;
  unsigned int v28;
  size_t v29;
  unsigned int v30;
  unsigned int *v31;
  unsigned int *v32;
  unsigned int *v33;
  unsigned int v34;
  bool v35;
  unsigned int *v36;
  unsigned int v37;
  __m128i v38;
  unsigned int v39;
  __m128i *v40;
  unsigned int *v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  uint32_t *v46;
  unsigned int *v47;
  uint8_t *v48;
  int v49;
  unsigned int v50;
  int v51;
  char *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 > (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v48 = (uint8_t *)*a1;
    v5 = ((int)(uintptr_t)(v4) - *a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = v5;
    v7 = __CFADD__(v6, v5);
    v8 = v6 + v5;
    if ( v7 || v8 > 0x3FFFFFFF )
    {
      v44 = -4;
      v29 = 0xFFFFFFFC;
      v9 = (src - (char *)(v48)) >> 2;
    }
    else
    {
      v9 = (src - (char *)(v48)) >> 2;
      if ( v8 == 0 )
      {
        v49 = 0;
        v44 = 0;
        v10 = 0;
        goto LABEL_10;
      }
      v44 = 4 * v8;
      v29 = 4 * v8;
    }
    v42 = v9;
    v49 = sub_4EBDC0(v29);
    v9 = v42;
    v10 = v49;
LABEL_10:
    v11 = (unsigned int *)(v10 + 4 * v9);
    for ( i = a3; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v13 = (uint32_t *)v49;
    v45 = *a1;
    if ( (char *)*a1 != src )
    {
      v14 = (char *)*a1;
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v14;
        v14 += 4;
        ++v13;
      }
      while ( v14 != src );
      v13 = (uint32_t *)(v49 + 4 * ((unsigned int)(uintptr_t)(&src[-v45 - 4]) >> 2) + 4);
    }
    v46 = &v13[a3];
    v15 = (char *)a1[1];
    if ( v15 != src )
    {
      v16 = src;
      v17 = &v13[a3];
      do
      {
        if ( v17 != nullptr )
          *v17 = *(uint32_t *)v16;
        v16 += 4;
        ++v17;
      }
      while ( v15 != v16 );
      v46 += ((unsigned int)(v15 - (src + 4)) >> 2) + 1;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v49;
    a1[1] = (int)(uintptr_t)(v46);
    a1[2] = v44 + v49;
    return;
  }
  v18 = *a4;
  v50 = ((char *)v4 - src) >> 2;
  if ( a3 >= v50 )
  {
    v30 = a3 - v50;
    v31 = (unsigned int *)a1[1];
    if ( a3 != v50 )
    {
      do
      {
        if ( v31 != nullptr )
          *v31 = v18;
        ++v31;
        --v30;
      }
      while ( v30 != 0 );
      v31 = (unsigned int *)a1[1];
      v30 = a3 - v50;
    }
    v32 = &v31[v30];
    a1[1] = (int)(uintptr_t)(v32);
    if ( v4 == (unsigned int *)src )
    {
      a1[1] = (int)(uintptr_t)(&v32[v50]);
    }
    else
    {
      v33 = (unsigned int *)src;
      do
      {
        if ( v32 != nullptr )
          *v32 = *v33;
        ++v33;
        ++v32;
      }
      while ( v4 != v33 );
      a1[1] += 4 * v50;
      v56 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v34 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      if ( v34 > v56 )
        v34 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v35 = v34 == 0;
      v53 = v34;
      v36 = (unsigned int *)src;
      if ( v35 )
        goto LABEL_82;
      v37 = 0;
      do
      {
        ++v37;
        *v36++ = v18;
      }
      while ( v53 > v37 );
      if ( v56 != v53 )
      {
LABEL_82:
        v57 = v56 - v53;
        if ( 4 * (v57 >> 2) == 0 )
          goto LABEL_83;
        v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v39 = 0;
        v40 = (__m128i *)&src[4 * v53];
        do
        {
          ++v39;
          *v40++ = v38;
        }
        while ( v39 < v57 >> 2 );
        v36 += 4 * (v57 >> 2);
        if ( v57 != 4 * (v57 >> 2) )
        {
LABEL_83:
          do
          {
            *v36 = v18;
            v41 = v36 + 1;
            if ( v4 == v41 )
              break;
            *v41 = v18;
            v36 = v41 + 1;
          }
          while ( v4 != v36 );
        }
      }
    }
  }
  else
  {
    v51 = 4 * a3;
    v47 = &v4[-a3];
    v19 = (unsigned int *)a1[1];
    if ( v4 != v47 )
    {
      v20 = &v4[-a3];
      do
      {
        if ( v19 != nullptr )
          *v19 = *v20;
        ++v20;
        ++v19;
      }
      while ( v4 != v20 );
      v19 = (unsigned int *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(&v19[v51 / 4u]);
    if ( ((char *)v47 - src) >> 2 != 0 )
    {
      v43 = v18;
      memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      v18 = v43;
    }
    v21 = &src[v51];
    v52 = &src[v51];
    if ( v52 != src )
    {
      v22 = ((unsigned int)(v21 - (src + 4)) >> 2) + 1;
      v23 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      v54 = v22;
      if ( v22 <= v23 )
        v23 = v22;
      v24 = (unsigned int *)src;
      if ( v23 == 0 )
        goto LABEL_84;
      for ( j = 0; j < v23; ++j )
        *v24++ = v18;
      if ( v54 != v23 )
      {
LABEL_84:
        v55 = v54 - v23;
        if ( 4 * (v55 >> 2) == 0 )
          goto LABEL_85;
        v26 = (__m128i *)&src[4 * v23];
        v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v28 = 0;
        do
        {
          ++v28;
          *v26++ = v27;
        }
        while ( v28 < v55 >> 2 );
        v24 += 4 * (v55 >> 2);
        if ( v55 != 4 * (v55 >> 2) )
        {
LABEL_85:
          do
            *v24++ = v18;
          while ( v52 != (char *)v24 );
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_CContinuousAllocator_SNo_b2ae84::M_fill_insert  (binary VA: 0xf7fdd0)
// Original: std::vector<glitch::core::CContinuousAllocator::SNode *,glitch::core::SAllocator<glitch::core::CContinuousAllocator::SNode *,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_CContinuousAllocator_SNo_b2ae84::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v9;
  unsigned int j;
  __m128i v11;
  unsigned int v12;
  __m128i *v13;
  unsigned int *v14;
  unsigned int v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int i;
  __m128i v21;
  unsigned int v22;
  __m128i *v23;
  unsigned int *v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  bool v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int k;
  int *v36;
  uint32_t *v37;
  char *v38;
  char *v39;
  uint32_t *v40;
  char *v41;
  uint32_t *v42;
  int v43;
  __m128i *v44;
  __m128i *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v49 = ((char *)v4 - src) >> 2;
    if ( a3 >= v49 )
    {
      v14 = (unsigned int *)a1[1];
      if ( a3 != v49 )
      {
        v15 = a3 - v49;
        do
        {
          if ( v14 != nullptr )
            *v14 = v5;
          ++v14;
          --v15;
        }
        while ( v15 != 0 );
        v14 = (unsigned int *)a1[1];
      }
      v16 = &v14[a3 - v49];
      a1[1] = (int)(uintptr_t)(v16);
      if ( v4 == (unsigned int *)src )
      {
        a1[1] = (int)(uintptr_t)(&v16[v49]);
      }
      else
      {
        v17 = (unsigned int *)src;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v17;
          ++v17;
          ++v16;
        }
        while ( v4 != v17 );
        a1[1] += 4 * v49;
        v18 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v54 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        if ( v18 > v54 )
          v18 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
        v19 = (unsigned int *)src;
        if ( v18 == 0 )
          goto LABEL_81;
        for ( i = 0; i < v18; ++i )
          *v19++ = v5;
        if ( v54 != v18 )
        {
LABEL_81:
          v55 = v54 - v18;
          if ( 4 * (v55 >> 2) == 0 )
            goto LABEL_82;
          v21 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v45 = (__m128i *)&src[4 * v18];
          v22 = 0;
          v23 = v45;
          do
          {
            ++v22;
            *v23++ = v21;
          }
          while ( v22 < v55 >> 2 );
          v19 += 4 * (v55 >> 2);
          if ( v55 != 4 * (v55 >> 2) )
          {
LABEL_82:
            do
            {
              *v19 = v5;
              v24 = v19 + 1;
              if ( v4 == v24 )
                break;
              *v24 = v5;
              v19 = v24 + 1;
            }
            while ( v4 != v19 );
          }
        }
      }
    }
    else
    {
      v6 = &v4[-a3];
      v50 = 4 * a3;
      v47 = v6;
      v7 = (unsigned int *)a1[1];
      if ( v4 != v6 )
      {
        do
        {
          if ( v7 != nullptr )
            *v7 = *v6;
          ++v6;
          ++v7;
        }
        while ( v4 != v6 );
        v7 = (unsigned int *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v50 / 4u]);
      if ( ((char *)v47 - src) >> 2 != 0 )
        memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      if ( &src[v50] != src )
      {
        v8 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
        v52 = ((unsigned int)(v50 - 4) >> 2) + 1;
        if ( v52 <= v8 )
          v8 = ((unsigned int)(v50 - 4) >> 2) + 1;
        v9 = (unsigned int *)src;
        if ( v8 == 0 )
          goto LABEL_18;
        for ( j = 0; j < v8; ++j )
          *v9++ = v5;
        if ( v52 != v8 )
        {
LABEL_18:
          v53 = v52 - v8;
          if ( 4 * (v53 >> 2) == 0 )
            goto LABEL_83;
          v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
          v44 = (__m128i *)&src[4 * v8];
          v12 = 0;
          v13 = v44;
          do
          {
            ++v12;
            *v13++ = v11;
          }
          while ( v12 < v53 >> 2 );
          v9 += 4 * (v53 >> 2);
          if ( v53 != 4 * (v53 >> 2) )
          {
LABEL_83:
            do
              *v9++ = v5;
            while ( &src[v50] != (char *)v9 );
          }
        }
      }
    }
    return;
  }
  v25 = (uint8_t *)*a1;
  v26 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  if ( a3 > 0x3FFFFFFF - v26 )
    sub_1900180("vector::_M_fill_insert");
  v27 = a3;
  if ( v26 >= a3 )
    v27 = v26;
  v28 = __CFADD__(v27, v26);
  v29 = v27 + v26;
  if ( v28 || v29 > 0x3FFFFFFF )
  {
    v48 = -4;
    v30 = src - (char *)(v25);
    v31 = 0xFFFFFFFC;
    v32 = v30 >> 2;
LABEL_53:
    v43 = v32;
    v51 = sub_4EBDC0(v31);
    v32 = v43;
    v33 = v51;
    goto LABEL_54;
  }
  v32 = (src - (char *)(v25)) >> 2;
  if ( v29 != 0 )
  {
    v48 = 4 * v29;
    v31 = 4 * v29;
    goto LABEL_53;
  }
  v51 = 0;
  v48 = 0;
  v33 = 0;
LABEL_54:
  v34 = (unsigned int *)(v33 + 4 * v32);
  for ( k = a3; k != 0; --k )
  {
    if ( v34 != nullptr )
      *v34 = *a4;
    ++v34;
  }
  v36 = a1;
  v37 = (uint32_t *)v51;
  if ( (char *)*a1 != src )
  {
    v38 = (char *)*a1;
    v46 = *a1;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v38 != src );
    v36 = a1;
    v37 = (uint32_t *)(v51 + 4 * ((unsigned int)(uintptr_t)(&src[-v46 - 4]) >> 2) + 4);
  }
  v39 = (char *)v36[1];
  v40 = &v37[a3];
  if ( v39 != src )
  {
    v41 = src;
    v42 = &v37[a3];
    do
    {
      if ( v42 != nullptr )
        *v42 = *(uint32_t *)v41;
      v41 += 4;
      ++v42;
    }
    while ( v39 != v41 );
    v40 += ((unsigned int)(v39 - (src + 4)) >> 2) + 1;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v40);
  a1[2] = v48 + v51;
}


