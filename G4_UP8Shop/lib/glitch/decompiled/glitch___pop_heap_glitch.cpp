#include "Core/Utils/DecompTypes.h"
#include "glitch___pop_heap_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::pop_heap_video_SShaderVertexAttri_b97b63  (binary VA: 0xdee240)
// Original: std::__pop_heap<glitch::video::SShaderVertexAttributeDef *>
// ----------------------------------------------------------------------------
void g4_std::pop_heap_video_SShaderVertexAttri_b97b63(glitch::core::detail::SSharedStringHeapEntry::SData::Self **a1, glitch::video::SShaderVertexAttributeDef::Self *a2, glitch::core::detail::SSharedStringHeapEntry::SData::Self **a3)
{
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v3;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v4;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v5;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v6;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v7;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v8;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v9;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v10;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v11[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  v3 = *a3;
  v8 = *a3;
  if ( v8 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v3, 1u);
  v4 = nullptr;
  v9 = a3[1];
  v10 = a3[2];
  v5 = *a1;
  v7 = *a1;
  if ( v7 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v5, 1u);
    v4 = v7;
  }
  v6 = *a3;
  *a3 = v4;
  v7 = v6;
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v7);
  *((uint8_t *)a3 + 4) = *((uint8_t *)a1 + 4);
  *((uint8_t *)a3 + 5) = *((uint8_t *)a1 + 5);
  *((uint16_t *)a3 + 3) = *((uint16_t *)a1 + 3);
  *((uint16_t *)a3 + 4) = *((uint16_t *)a1 + 4);
  *((uint16_t *)a3 + 5) = *((uint16_t *)a1 + 5);
  v11[0] = v8;
  if ( v8 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v8, 1u);
  v11[1] = v9;
  v11[2] = v10;
  sub_DAD560((int)(uintptr_t)(a1), 0, -1431655765 * ((a2 - (glitch::video::SShaderVertexAttributeDef::Self *)a1) >> 2), (int)(uintptr_t)(v11));
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v11);
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v8);
}

// ----------------------------------------------------------------------------
// Function: g4_std::pop_heap_SEvent_133198  (binary VA: 0xf81280)
// Original: std::__pop_heap<glitch::core::detail::SEvent *>
// ----------------------------------------------------------------------------
int g4_std::pop_heap_SEvent_133198(float *a1, int a2, float *a3)
{
  int v3;
  float v5;
  int v6;

  v6 = *((uint32_t *)a3 + 1);
  v5 = *a3;
  v3 = *((uint32_t *)a1 + 1);
  *a3 = *a1;
  *((uint32_t *)a3 + 1) = v3;
  return g4_std::adjust_heap_SEvent_int_SEvent_a959a1(
           (int)(uintptr_t)(a1),
           0,
           (a2 - (int)(uintptr_t)(a1)) >> 3,
           v5,
           v6);
}


