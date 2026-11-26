#include "Core/Utils/DecompTypes.h"
#include "gameswf_iter_swap_gameswf.h"

// ----------------------------------------------------------------------------
// Function: g4_std::iter_swap_gameswf_ASEventDispatche_e18c22  (binary VA: 0x116c3f0)
// Original: std::iter_swap<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *>
// ----------------------------------------------------------------------------
gameswf::Self * g4_std::iter_swap_gameswf_ASEventDispatche_e18c22(int a1, int a2)
{
  gameswf::Self *v2;
  typedef gameswf::Self *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef gameswf::Self *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef char _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v8)) > _g4_s4 ? (16u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v9)) > _g4_s5 ? (20u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);

  v2 = *(gameswf::Self **)a1;
  v4 = *(gameswf::Self **)a1;
  if ( v4 != nullptr )
    ++*(uint16_t *)v2;
  v5 = *(uint32_t *)(a1 + 4);
  v6 = *(gameswf::Self **)(a1 + 8);
  if ( v6 != nullptr )
    ++*(uint16_t *)v6;
  v7 = *(uint32_t *)(a1 + 12);
  v8 = *(uint32_t *)(a1 + 16);
  v9 = *(uint8_t *)(a1 + 20);
  gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)a1, *(gameswf::Self **)a2);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(a1 + 8), *(gameswf::Self **)(a2 + 8));
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a1 + 16) = *(uint32_t *)(a2 + 16);
  *(uint8_t *)(a1 + 20) = *(uint8_t *)(a2 + 20);
  gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)a2, v4);
  *(uint32_t *)(a2 + 4) = v5;
  gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)(a2 + 8), v6);
  *(uint32_t *)(a2 + 12) = v7;
  *(uint32_t *)(a2 + 16) = v8;
  *(uint8_t *)(a2 + 20) = v9;
  sub_7E5E90(&v6);
  return sub_7E5E90(&v4);
}


