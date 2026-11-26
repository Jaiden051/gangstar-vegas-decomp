#include "Core/Utils/DecompTypes.h"
#include "gaia_GaiaSimpleEventDispatcher_std.h"

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_string_4c037c::Destroy  (binary VA: 0x14a52d0)
// Original: gaia::GaiaSimpleEventDispatcher<std::string>::~GaiaSimpleEventDispatcher
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_string_4c037c::Destroy(void ***self)
{
  *self = (void **)((uint32_t)(uintptr_t)&off_2095AA0);
  g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_erase(
    (int)(uintptr_t)(self + 1),
    *(self + 3));
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_string_4c037c::Destroy_ea14a5310  (binary VA: 0x14a5310)
// Original: gaia::GaiaSimpleEventDispatcher<std::string>::~GaiaSimpleEventDispatcher
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_string_4c037c::Destroy_ea14a5310(void ***self)
{
  gaia::GaiaSimpleEventDispatcher_string_4c037c::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_string_4c037c::Dispatch  (binary VA: 0x14a7390)
// Original: gaia::GaiaSimpleEventDispatcher<std::string>::Dispatch
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_string_4c037c::Dispatch(uint32_t *a1, int a2, uint8_t a3, int a4)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int *v12;
  int v13;
  int *v14;
  int i;
  void *v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef void (*_g4_t_v20)(int, uint32_t, int *);
  typedef int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23[3];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef void *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef void *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v23)) > _g4_s6 ? (44u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v24)) > _g4_s7 ? (60u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v25)) > _g4_s8 ? (64u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v26)) > _g4_s9 ? (68u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v27)) > _g4_s10 ? (72u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v28)) > _g4_s11 ? (76u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v29)) > _g4_s12 ? (80u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v30)) > _g4_s13 ? (84u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v31)) > _g4_s14 ? (88u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v32)) > _g4_s15 ? (92u + sizeof(_g4_t_v32)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);

  v4 = (uint32_t *)a1[3];
  if ( v4 == nullptr )
  {
    v5 = a1 + 2;
LABEL_30:
    v25 = a2;
    v26 = nullptr;
    v28 = 0;
    v27 = 0;
    g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert_unique(
      v23,
      a1 + 1,
      (int)(uintptr_t)(v5),
      &v25);
    v5 = (uint32_t *)v23[0];
    if ( v26 != nullptr )
      opDelete(v26);
    goto LABEL_8;
  }
  v5 = a1 + 2;
  do
  {
    while ( v4[4] >= a2 )
    {
      v5 = v4;
      v4 = (uint32_t *)v4[2];
      if ( v4 == nullptr )
        goto LABEL_6;
    }
    v4 = (uint32_t *)v4[3];
  }
  while ( v4 != nullptr );
LABEL_6:
  if ( a1 + 2 == v5 || v5[4] > a2 )
    goto LABEL_30;
LABEL_8:
  v6 = (v5[6] - v5[5]) >> 2;
  v21 = -1431655765 * v6;
  v22 = (int *)opNewArray(4 * v6 + 4);
  *v22 = v21;
  if ( v21 > 0 )
  {
    v7 = 0;
    v8 = 0;
    v9 = (int)(uintptr_t)(a1 + 2);
    do
    {
      v10 = v9;
      v11 = (uint32_t *)a1[3];
      if ( v11 == nullptr )
        goto LABEL_17;
      do
      {
        while ( v11[4] >= a2 )
        {
          v10 = (int)(uintptr_t)(v11);
          v11 = (uint32_t *)v11[2];
          if ( v11 == nullptr )
            goto LABEL_15;
        }
        v11 = (uint32_t *)v11[3];
      }
      while ( v11 != nullptr );
LABEL_15:
      if ( v9 == v10 || *(uint32_t *)(v10 + 16) > a2 )
      {
LABEL_17:
        v29 = a2;
        v17 = v9;
        v30 = nullptr;
        v32 = 0;
        v31 = 0;
        g4_std::Rb_tree_int_pair_int_const_vecto_e8e906::M_insert_unique(
          v23,
          a1 + 1,
          v10,
          &v29);
        v10 = v23[0];
        v9 = v17;
        if ( v30 != nullptr )
        {
          v18 = v23[0];
          opDelete(v30);
          v9 = v17;
          v10 = v18;
        }
      }
      v12 = &v22[v8 + 1];
      ++v7;
      v13 = v8 * 4 + *(uint32_t *)(v10 + 20);
      v8 += 3;
      *v12 = *(uint32_t *)v13;
      v12[1] = *(uint32_t *)(v13 + 4);
      *((uint8_t *)v12 + 8) = *(uint8_t *)(v13 + 8);
    }
    while ( v7 != v21 );
    v14 = v22;
    for ( i = 0; i != v21; ++i )
    {
      if ( *((uint8_t *)v14 + 12) != 0 )
      {
        v20 = (void (*)(int, uint32_t, int *))v14[1];
        v19 = v14[2];
        g4_std::string::construct_copy(&v24, a4);
        v20(v19, a3, &v24);
        v16 = (void *)(v24 - 12);
        if ( (uint32_t *)(v24 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v16);
        }
      }
      v14 += 3;
    }
  }
  if ( v22 != (int *)-4 )
    opDeleteArray(v22);
}


