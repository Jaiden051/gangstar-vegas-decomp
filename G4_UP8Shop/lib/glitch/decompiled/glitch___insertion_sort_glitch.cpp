#include "Core/Utils/DecompTypes.h"
#include "glitch___insertion_sort_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_video_SShaderVertexAttri_46ec3e  (binary VA: 0xde5b50)
// Original: std::__insertion_sort<glitch::video::SShaderVertexAttributeDef *>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_video_SShaderVertexAttri_46ec3e(glitch::video::SShaderVertexAttributeDef::Self *a1, glitch::video::SShaderVertexAttributeDef::Self *a2)
{
  glitch::video::SShaderVertexAttributeDef::Self *v2;
  uint8_t v3;
  int v4;
  volatile int32_t *v5;
  char *v6;
  char *v7;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v8;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v9;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v10;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v11;
  glitch::video::SShaderVertexAttributeDef::Self *v12;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v13;
  glitch::video::SShaderVertexAttributeDef::Self *i;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v15;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v16;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v17;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v18;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v19;
  typedef glitch::video::SShaderVertexAttributeDef::Self *_g4_t_v20;
  typedef glitch::video::SShaderVertexAttributeDef::Self *_g4_t_v21;
  typedef glitch::video::SShaderVertexAttributeDef::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v24;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v25;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v26;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v27;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v28;
  typedef uint8_t _g4_t_v29;
  typedef char _g4_t_v30;
  typedef int16_t _g4_t_v31;
  typedef int16_t _g4_t_v32;
  typedef int16_t _g4_t_v33;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v26)) > _g4_s6 ? (48u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v27)) > _g4_s7 ? (64u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v28)) > _g4_s8 ? (80u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v29)) > _g4_s9 ? (84u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (85u + sizeof(_g4_t_v30)) > _g4_s10 ? (85u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (86u + sizeof(_g4_t_v31)) > _g4_s11 ? (86u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v32)) > _g4_s12 ? (88u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (90u + sizeof(_g4_t_v33)) > _g4_s13 ? (90u + sizeof(_g4_t_v33)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 85u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 86u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 90u);

  if ( a1 != a2 && a2 != (glitch::video::SShaderVertexAttributeDef::Self *)((char *)a1 + 12) )
  {
    v20 = a1;
    v21 = (glitch::video::SShaderVertexAttributeDef::Self *)((char *)a1 + 24);
    v22 = (glitch::video::SShaderVertexAttributeDef::Self *)((char *)a1 + 12);
    do
    {
      v2 = v22;
      v3 = *((uint8_t *)v22 + 4);
      v4 = v3;
      if ( *((uint8_t *)a1 + 4) <= v3 )
      {
        v13 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v22;
        v28 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v22;
        if ( v28 != nullptr )
        {
          __sync_add_and_fetch((volatile int32_t *)v13, 1u);
          v3 = *((uint8_t *)v22 + 4);
          v4 = v3;
        }
        v29 = v3;
        i = v22;
        v30 = *((uint8_t *)v22 + 5);
        v31 = *((uint16_t *)v22 + 3);
        v32 = *((uint16_t *)v22 + 4);
        v33 = *((uint16_t *)v22 + 5);
        if ( *((uint8_t *)v22 - 8) > v4 )
        {
          for ( i = v20; ; i = (glitch::video::SShaderVertexAttributeDef::Self *)((char *)i - 12) )
          {
            v15 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)i;
            v16 = nullptr;
            v26 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)i;
            if ( v26 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v15, 1u);
              v16 = v26;
            }
            v17 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v2;
            *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v16);
            v26 = v17;
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v26);
            *((uint8_t *)v2 + 4) = *((uint8_t *)i + 4);
            *((uint8_t *)v2 + 5) = *((uint8_t *)i + 5);
            *((uint16_t *)v2 + 3) = *((uint16_t *)i + 3);
            *((uint16_t *)v2 + 4) = *((uint16_t *)i + 4);
            *((uint16_t *)v2 + 5) = *((uint16_t *)i + 5);
            if ( *((uint8_t *)i - 8) <= v29 )
              break;
            v2 = i;
          }
        }
        v18 = nullptr;
        v27 = v28;
        if ( v28 != nullptr )
        {
          __sync_add_and_fetch((volatile int32_t *)v28, 1u);
          v18 = v27;
        }
        v19 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)i;
        *(uint32_t *)i = (uint32_t)(uintptr_t)(v18);
        v27 = v19;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v27);
        *((uint8_t *)i + 4) = v29;
        *((uint8_t *)i + 5) = v30;
        *((uint16_t *)i + 3) = v31;
        *((uint16_t *)i + 4) = v32;
        *((uint16_t *)i + 5) = v33;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v28);
        v12 = v21;
      }
      else
      {
        v5 = *(volatile int32_t **)v22;
        v28 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v22;
        if ( v28 != nullptr )
        {
          __sync_add_and_fetch(v5, 1u);
          v3 = *((uint8_t *)v22 + 4);
        }
        v29 = v3;
        v30 = *((uint8_t *)v22 + 5);
        v31 = *((uint16_t *)v22 + 3);
        v32 = *((uint16_t *)v22 + 4);
        v33 = *((uint16_t *)v22 + 5);
        v23 = -1431655765 * ((v22 - a1) >> 2);
        if ( v23 > 0 )
        {
          v6 = (char *)v21 - 8;
          v7 = (char *)v22 - 8;
          do
          {
            v8 = nullptr;
            v24 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v7 - 1);
            if ( v24 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v24, 1u);
              v8 = v24;
            }
            v9 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v6 - 1);
            *((uint32_t *)v6 - 1) = (uint32_t)(uintptr_t)(v8);
            v24 = v9;
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v24);
            *v6 = *v7;
            v6[1] = v7[1];
            *((uint16_t *)v6 + 1) = *((uint16_t *)v7 + 1);
            *((uint16_t *)v6 + 2) = *((uint16_t *)v7 + 2);
            *((uint16_t *)v6 + 3) = *((uint16_t *)v7 + 3);
            v7 -= 12;
            v6 -= 12;
            --v23;
          }
          while ( v23 != 0 );
        }
        v10 = nullptr;
        v25 = v28;
        if ( v28 != nullptr )
        {
          __sync_add_and_fetch((volatile int32_t *)v28, 1u);
          v10 = v25;
        }
        v11 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1;
        *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v10);
        v25 = v11;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v25);
        *((uint8_t *)a1 + 4) = v29;
        *((uint8_t *)a1 + 5) = v30;
        *((uint16_t *)a1 + 3) = v31;
        *((uint16_t *)a1 + 4) = v32;
        *((uint16_t *)a1 + 5) = v33;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v28);
        v12 = v21;
      }
      v21 = (glitch::video::SShaderVertexAttributeDef::Self *)((char *)v21 + 12);
      v20 = (glitch::video::SShaderVertexAttributeDef::Self *)((char *)v20 + 12);
      v22 = (glitch::video::SShaderVertexAttributeDef::Self *)((char *)v22 + 12);
    }
    while ( a2 != v12 );
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_SEvent_0245bc  (binary VA: 0xf7fca0)
// Original: std::__insertion_sort<glitch::core::detail::SEvent *>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_SEvent_0245bc(int a1, int a2)
{
  int v2;
  float v3; // xmm0_4
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int i;
  float v10;
  int v11;
  int v12;

  if ( a1 != a2 )
  {
    v2 = a1 + 8;
    if ( a2 != a1 + 8 )
    {
      v11 = a1 + 16;
      do
      {
        v3 = *(float *)v2;
        v4 = v2;
        if ( *(float *)v2 == *(float *)a1 )
        {
          v12 = *(uint32_t *)(v2 + 4);
          if ( (v12 & 3u) >= (*(uint32_t *)(a1 + 4) & 3u) )
          {
LABEL_13:
            for ( i = v2 - 8; ; i -= 8 )
            {
              if ( v3 == *(float *)i )
              {
                if ( (v12 & 3) >= (*(uint32_t *)(i + 4) & 3) )
                {
LABEL_18:
                  *(uint32_t *)(v4 + 4) = v12;
                  *(float *)v4 = v3;
                  v8 = v11;
                  goto LABEL_10;
                }
              }
              else if ( *(float *)i <= v3 )
              {
                goto LABEL_18;
              }
              v10 = *(float *)i;
              *(uint32_t *)(v4 + 4) = *(uint32_t *)(i + 4);
              *(float *)v4 = v10;
              v4 = i;
            }
          }
        }
        else
        {
          v12 = *(uint32_t *)(v2 + 4);
          if ( *(float *)a1 <= v3 )
            goto LABEL_13;
        }
        v5 = (v2 - a1) >> 3;
        if ( v5 > 0 )
        {
          v6 = v2 - 8 * v5;
          do
          {
            v7 = *(uint32_t *)(v6 + 8 * v5 - 4);
            *(uint32_t *)(v6 + 8 * v5) = *(uint32_t *)(v6 + 8 * v5 - 8);
            *(uint32_t *)(v6 + 8 * v5-- + 4) = v7;
          }
          while ( v5 != 0 );
        }
        *(uint32_t *)(a1 + 4) = v12;
        v8 = v11;
        *(float *)a1 = v3;
LABEL_10:
        v2 += 8;
        v11 += 8;
      }
      while ( a2 != v8 );
    }
  }
}


