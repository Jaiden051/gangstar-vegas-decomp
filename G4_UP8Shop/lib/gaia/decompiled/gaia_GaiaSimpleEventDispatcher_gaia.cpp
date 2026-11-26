#include "Core/Utils/DecompTypes.h"
#include "gaia_GaiaSimpleEventDispatcher_gaia.h"

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_gaia_ActionData_4c88a2::Destroy  (binary VA: 0x14a5720)
// Original: gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::~GaiaSimpleEventDispatcher
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_gaia_ActionData_4c88a2::Destroy(void ***self)
{
  *self = (void **)((uint32_t)(uintptr_t)&off_2095AC8);
  g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_erase(
    (int)(uintptr_t)(self + 1),
    *(self + 3));
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_gaia_ActionData_4c88a2::Destroy_ea14a5760  (binary VA: 0x14a5760)
// Original: gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::~GaiaSimpleEventDispatcher
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_gaia_ActionData_4c88a2::Destroy_ea14a5760(void ***self)
{
  gaia::GaiaSimpleEventDispatcher_gaia_ActionData_4c88a2::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_gaia_ActionData_4c88a2::Dispatch  (binary VA: 0x14a6d40)
// Original: gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::Dispatch
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_gaia_ActionData_4c88a2::Dispatch(uint32_t *a1, int a2, uint8_t a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int *v11;
  int v12;
  int *v13;
  int v14;
  void (*v15)(int, uint32_t, int);
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef void *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef void *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v18)) > _g4_s1 ? (28u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v19)) > _g4_s2 ? (32u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v20)) > _g4_s3 ? (40u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v22)) > _g4_s5 ? (60u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v23)) > _g4_s6 ? (64u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v24)) > _g4_s7 ? (68u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v25)) > _g4_s8 ? (72u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v26)) > _g4_s9 ? (76u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v27)) > _g4_s10 ? (80u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v28)) > _g4_s11 ? (84u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v29)) > _g4_s12 ? (88u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v30)) > _g4_s13 ? (92u + sizeof(_g4_t_v30)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);

  v3 = (uint32_t *)a1[3];
  if ( v3 == nullptr )
  {
    v4 = a1 + 2;
LABEL_28:
    v23 = a2;
    v24 = nullptr;
    v26 = 0;
    v25 = 0;
    g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert_unique(
      (int *)&v22,
      a1 + 1,
      (int)(uintptr_t)(v4),
      &v23);
    v4 = v22;
    if ( v24 != nullptr )
      opDelete(v24);
    goto LABEL_8;
  }
  v4 = a1 + 2;
  do
  {
    while ( v3[4] >= a2 )
    {
      v4 = v3;
      v3 = (uint32_t *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_6;
    }
    v3 = (uint32_t *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_6:
  if ( a1 + 2 == v4 || v4[4] > a2 )
    goto LABEL_28;
LABEL_8:
  v5 = (v4[6] - v4[5]) >> 2;
  v20 = -1431655765 * v5;
  v21 = (int *)opNewArray(4 * v5 + 4);
  *v21 = v20;
  if ( v20 > 0 )
  {
    v6 = 0;
    v7 = 0;
    v8 = (int)(uintptr_t)(a1 + 2);
    do
    {
      v9 = v8;
      v10 = (uint32_t *)a1[3];
      if ( v10 == nullptr )
        goto LABEL_17;
      do
      {
        while ( v10[4] >= a2 )
        {
          v9 = (int)(uintptr_t)(v10);
          v10 = (uint32_t *)v10[2];
          if ( v10 == nullptr )
            goto LABEL_15;
        }
        v10 = (uint32_t *)v10[3];
      }
      while ( v10 != nullptr );
LABEL_15:
      if ( v8 == v9 || *(uint32_t *)(v9 + 16) > a2 )
      {
LABEL_17:
        v27 = a2;
        v18 = v8;
        v28 = nullptr;
        v30 = 0;
        v29 = 0;
        g4_std::Rb_tree_int_pair_int_const_vecto_f10e8c::M_insert_unique(
          (int *)&v22,
          a1 + 1,
          v9,
          &v27);
        v9 = (int)(uintptr_t)(v22);
        v8 = v18;
        if ( v28 != nullptr )
        {
          v19 = (int)(uintptr_t)(v22);
          opDelete(v28);
          v8 = v18;
          v9 = v19;
        }
      }
      v11 = &v21[v7 + 1];
      ++v6;
      v12 = v7 * 4 + *(uint32_t *)(v9 + 20);
      v7 += 3;
      *v11 = *(uint32_t *)v12;
      v11[1] = *(uint32_t *)(v12 + 4);
      *((uint8_t *)v11 + 8) = *(uint8_t *)(v12 + 8);
    }
    while ( v6 != v20 );
    v13 = v21;
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v15 = (void (*)(int, uint32_t, int))v13[1];
        v16 = v13[2];
        if ( *((uint8_t *)v13 + 12) != 0 )
          break;
        ++v14;
        v13 += 3;
        if ( v14 == v20 )
          goto LABEL_24;
      }
      ++v14;
      LOBYTE(v17) = 0;
      v13 += 3;
      v15(v16, a3, v17);
    }
    while ( v14 != v20 );
  }
LABEL_24:
  if ( v21 != (int *)-4 )
    opDeleteArray(v21);
}


