#include "Core/Utils/DecompTypes.h"
#include "gaia_GaiaSimpleEventDispatcher_Json.h"

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener  (binary VA: 0x14a6810)
// Original: gaia::GaiaSimpleEventDispatcher<Json::Value>::RegisterEventListener
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_Json_Value_886827::RegisterEventListener(gaia::GaiaSimpleEventDispatcher<Json::Value::Self> *self, int a2, bool (__high *a3)(void *, bool, Json::Value::Self), void *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  bool v8;
  int v9;
  bool (__high *v11)(void *, bool, Json::Value::Self);
  typedef uint32_t *_g4_t_v10;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v12)) > _g4_s1 ? (24u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v14)) > _g4_s3 ? (32u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v15)) > _g4_s4 ? (36u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v16)) > _g4_s5 ? (40u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v17)) > _g4_s6 ? (44u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  if ( a3 != nullptr )
  {
    v4 = *((uint32_t **)self + 3);
    v5 = (uint32_t *)((char *)self + 8);
    if ( v4 == nullptr )
      goto LABEL_21;
    do
    {
      while ( v4[4] >= a2 )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_7;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_7:
    if ( (uint32_t *)((char *)self + 8) == v5 || v5[4] > a2 )
    {
LABEL_21:
      v14 = a2;
      v15 = nullptr;
      v17 = 0;
      v16 = 0;
      g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert_unique(
        (int *)&v10,
        (uint32_t *)self + 1,
        (int)(uintptr_t)(v5),
        &v14);
      v5 = v10;
      if ( v15 != nullptr )
        opDelete(v15);
    }
    v6 = v5[5];
    v7 = (uint32_t *)v5[6];
    if ( v7 == (uint32_t *)v6 )
    {
LABEL_17:
      v8 = v7 == (uint32_t *)v5[7];
      v11 = a3;
      v12 = a4;
      LOBYTE(v13) = 1;
      if ( v8 )
      {
        g4_std::vector_gaia_GaiaSimpleEventDisp_96cc60::M_insert_aux(
          (int)(uintptr_t)(v5 + 5),
          (int)(uintptr_t)(v7),
          (int *)&v11);
      }
      else
      {
        v9 = 0;
        if ( v7 != nullptr )
        {
          *v7 = (uint32_t)(uintptr_t)(a3);
          v7[1] = (uint32_t)(uintptr_t)(v12);
          v7[2] = v13;
          v9 = v5[6];
        }
        v5[6] = v9 + 12;
      }
    }
    else
    {
      while ( *(bool (__high **)(void *, bool, Json::Value::Self))v6 != a3 || *(void **)(v6 + 4) != a4 )
      {
        v6 += 12;
        if ( v7 == (uint32_t *)v6 )
          goto LABEL_17;
      }
      if ( *(uint8_t *)(v6 + 8) == 0 )
        *(uint8_t *)(v6 + 8) = 1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Destroy  (binary VA: 0x14ed460)
// Original: gaia::GaiaSimpleEventDispatcher<Json::Value>::~GaiaSimpleEventDispatcher
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Destroy(void ***self)
{
  *self = (void **)((uint32_t)(uintptr_t)&off_2095EC8);
  g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_erase(
    (int)(uintptr_t)(self + 1),
    *(self + 3));
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Destroy_ea14ed4a0  (binary VA: 0x14ed4a0)
// Original: gaia::GaiaSimpleEventDispatcher<Json::Value>::~GaiaSimpleEventDispatcher
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Destroy_ea14ed4a0(void ***self)
{
  gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Dispatch  (binary VA: 0x14f0020)
// Original: gaia::GaiaSimpleEventDispatcher<Json::Value>::Dispatch
// ----------------------------------------------------------------------------
void gaia::GaiaSimpleEventDispatcher_Json_Value_886827::Dispatch(uint32_t *a1, int a2, uint8_t a3, Json::Value::Self *a4)
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
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef void (*_g4_t_v19)(int, uint32_t, uint8_t *);
  typedef int _g4_t_v20;
  typedef int *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef int _g4_t_v24;
  typedef void *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef void *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v21)) > _g4_s5 ? (28u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v22)) > _g4_s6 ? (44u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v23)) > _g4_s7 ? (48u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v24)) > _g4_s8 ? (64u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v25)) > _g4_s9 ? (68u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v26)) > _g4_s10 ? (72u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v27)) > _g4_s11 ? (76u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v28)) > _g4_s12 ? (80u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v29)) > _g4_s13 ? (84u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v30)) > _g4_s14 ? (88u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v31)) > _g4_s15 ? (92u + sizeof(_g4_t_v31)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 88u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);

  v4 = (uint32_t *)a1[3];
  if ( v4 == nullptr )
  {
    v5 = a1 + 2;
LABEL_28:
    v24 = a2;
    v25 = nullptr;
    v27 = 0;
    v26 = 0;
    g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert_unique(
      (int *)&v22,
      a1 + 1,
      (int)(uintptr_t)(v5),
      &v24);
    v5 = v22;
    if ( v25 != nullptr )
      opDelete(v25);
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
    goto LABEL_28;
LABEL_8:
  v6 = (v5[6] - v5[5]) >> 2;
  v20 = -1431655765 * v6;
  v21 = (int *)opNewArray(4 * v6 + 4);
  *v21 = v20;
  if ( v20 > 0 )
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
        v28 = a2;
        v18 = v9;
        v29 = nullptr;
        v31 = 0;
        v30 = 0;
        g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_insert_unique(
          (int *)&v22,
          a1 + 1,
          v10,
          &v28);
        v10 = (int)(uintptr_t)(v22);
        v9 = v18;
        if ( v29 != nullptr )
        {
          v16 = (int)(uintptr_t)(v22);
          opDelete(v29);
          v9 = v18;
          v10 = v16;
        }
      }
      v12 = &v21[v8 + 1];
      ++v7;
      v13 = v8 * 4 + *(uint32_t *)(v10 + 20);
      v8 += 3;
      *v12 = *(uint32_t *)v13;
      v12[1] = *(uint32_t *)(v13 + 4);
      *((uint8_t *)v12 + 8) = *(uint8_t *)(v13 + 8);
    }
    while ( v7 != v20 );
    v14 = v21;
    v15 = 0;
    do
    {
      while ( *((uint8_t *)v14 + 12) == 0 )
      {
        ++v15;
        v14 += 3;
        if ( v15 == v20 )
          goto LABEL_24;
      }
      v19 = (void (*)(int, uint32_t, uint8_t *))v14[1];
      v17 = v14[2];
      ++v15;
      Json::Value::Construct((Json::Value::Self *)v23, a4);
      v14 += 3;
      v19(v17, a3, v23);
      Json::Value::Destroy((Json::Value::Self *)v23);
    }
    while ( v15 != v20 );
  }
LABEL_24:
  if ( v21 != (int *)-4 )
    opDeleteArray(v21);
}


