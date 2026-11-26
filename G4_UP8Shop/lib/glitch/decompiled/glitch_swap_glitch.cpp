#include "Core/Utils/DecompTypes.h"
#include "glitch_swap_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::swap_video_SShaderParameterDe_2608ab  (binary VA: 0xde50f0)
// Original: std::swap<glitch::video::SShaderParameterDef>
// ----------------------------------------------------------------------------
void g4_std::swap_video_SShaderParameterDe_2608ab(glitch::core::detail::SSharedStringHeapEntry::SData::Self **a1, glitch::core::detail::SSharedStringHeapEntry::SData::Self **a2)
{
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v2;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v3;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v4;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v5;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v6;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v7;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v8;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v9;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v10;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef int16_t _g4_t_v17;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (17u + sizeof(_g4_t_v13)) > _g4_s5 ? (17u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (18u + sizeof(_g4_t_v14)) > _g4_s6 ? (18u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (19u + sizeof(_g4_t_v15)) > _g4_s7 ? (19u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v16)) > _g4_s8 ? (20u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (22u + sizeof(_g4_t_v17)) > _g4_s9 ? (22u + sizeof(_g4_t_v17)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 17u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 18u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 19u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 22u);

  v2 = *a1;
  v10 = *a1;
  if ( v10 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v2, 1u);
  v3 = nullptr;
  v11 = a1[1];
  v12 = *((uint8_t *)a1 + 8);
  v13 = *((uint8_t *)a1 + 9);
  v14 = *((uint8_t *)a1 + 10);
  v15 = *((uint8_t *)a1 + 11);
  v16 = *((uint16_t *)a1 + 6);
  v17 = *((uint16_t *)a1 + 7);
  v4 = *a2;
  v8 = *a2;
  if ( v8 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v4, 1u);
    v3 = v8;
  }
  v5 = *a1;
  *a1 = v3;
  v8 = v5;
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v8);
  v6 = nullptr;
  a1[1] = a2[1];
  *((uint8_t *)a1 + 8) = *((uint8_t *)a2 + 8);
  *((uint8_t *)a1 + 9) = *((uint8_t *)a2 + 9);
  *((uint8_t *)a1 + 10) = *((uint8_t *)a2 + 10);
  *((uint8_t *)a1 + 11) = *((uint8_t *)a2 + 11);
  *((uint16_t *)a1 + 6) = *((uint16_t *)a2 + 6);
  *((uint16_t *)a1 + 7) = *((uint16_t *)a2 + 7);
  v9 = v10;
  if ( v10 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v10, 1u);
    v6 = v9;
  }
  v7 = *a2;
  *a2 = v6;
  v9 = v7;
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v9);
  a2[1] = v11;
  *((uint8_t *)a2 + 8) = v12;
  *((uint8_t *)a2 + 9) = v13;
  *((uint8_t *)a2 + 10) = v14;
  *((uint8_t *)a2 + 11) = v15;
  *((uint16_t *)a2 + 6) = v16;
  *((uint16_t *)a2 + 7) = v17;
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v10);
}


