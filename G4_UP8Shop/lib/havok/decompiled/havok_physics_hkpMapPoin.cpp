#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMapPoin.h"

// ----------------------------------------------------------------------------
// Function: hkpMapPointsToSubShapeContactMgr::addContactPointImpl  (binary VA: 0x16e9840)
// Original: hkpMapPointsToSubShapeContactMgr::addContactPointImpl
// ----------------------------------------------------------------------------
int hkpMapPointsToSubShapeContactMgr::addContactPointImpl(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5, int a6, int a7)
{
  uint32_t *v7;
  int v9;
  int v10;
  signed int v11;
  uint16_t v12;
  int v13;
  typedef uint32_t *_g4_t_v14;
  typedef signed int _g4_t_v15;
  typedef uint32_t _g4_t_v16[4];
  typedef uint32_t _g4_t_v17[4];
  typedef uint8_t _g4_t_v18[520];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v17)) > _g4_s3 ? (32u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v18)) > _g4_s4 ? (48u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  v14 = a2;
  if ( *(uint8_t *)(*a2 + 8) == 26 )
  {
    v12 = HIBYTE(*(uint16_t *)a6);
    if ( *(uint8_t *)(a6 + 8) > 1u
      && (v12 != *(uint8_t *)(a6 + 3)
       || *(uint8_t *)(a6 + 8) > 2u
       && (v12 != *(uint8_t *)(a6 + 5)
        || *(uint8_t *)(a6 + 8) > 3u && v12 != *(uint8_t *)(a6 + 7))) )
    {
      goto LABEL_15;
    }
    v13 = v12;
    v16[0] = G4_VCALL<int>(*a2, 100, v12, v18);
    v16[3] = (uint32_t)(uintptr_t)(a2);
    v16[1] = v13;
    v14 = v16;
    v16[2] = a2[2];
  }
  v7 = a3;
  if ( *(uint8_t *)(*a3 + 8) != 26 )
    return (*(int (**)(uint32_t, uint32_t *, uint32_t *, int, int, int, int))(**(uint32_t **)(a1 + 12) + 20))(
             *(uint32_t *)(a1 + 12),
             v14,
             v7,
             a4,
             a5,
             a6,
             a7);
  v9 = *(uint8_t *)(a6 + 8);
  v10 = *(uint8_t *)(a6 + 2 * v9 + 1);
  v15 = v9 + *(uint8_t *)(a6 + 9);
  if ( v9 + 1 >= (unsigned int)v15
    || (uint16_t)v10 == *(uint8_t *)(a6 + 2 * (v9 + 1) + 1)
    && (v15 <= v9 + 2
     || (uint16_t)v10 == *(uint8_t *)(a6 + 2 * (v9 + 2) + 1)
     && (v15 <= v9 + 3
      || (uint16_t)v10 == *(uint8_t *)(a6 + 2 * (v9 + 3) + 1)
      && (v15 <= v9 + 4
       || (uint16_t)v10 == *(uint8_t *)(a6 + 2 * (v9 + 4) + 1)
       && ((v11 = v9 + 5, v15 <= v11) || (uint16_t)v10 == *(uint8_t *)(a6 + 2 * v11 + 1))))) )
  {
    v17[0] = G4_VCALL<int>(*a3, 100, v10, v18);
    v17[3] = (uint32_t)(uintptr_t)(a3);
    v17[1] = v10;
    v7 = v17;
    v17[2] = a3[2];
    return (*(int (**)(uint32_t, uint32_t *, uint32_t *, int, int, int, int))(**(uint32_t **)(a1 + 12) + 20))(
             *(uint32_t *)(a1 + 12),
             v14,
             v7,
             a4,
             a5,
             a6,
             a7);
  }
LABEL_15:
  *(uint8_t *)(a1 + 16) = 1;
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpMapPointsToSubShapeContactMgr::reserveContactPointsImpl  (binary VA: 0x16e99f0)
// Original: hkpMapPointsToSubShapeContactMgr::reserveContactPointsImpl
// ----------------------------------------------------------------------------
hkpMapPointsToSubShapeContactMgr::Self * hkpMapPointsToSubShapeContactMgr::reserveContactPointsImpl(hkpMapPointsToSubShapeContactMgr::Self *self, int a2)
{
  (*(void (**)(hkpMapPointsToSubShapeContactMgr::Self *))(**(uint32_t **)(a2 + 12) + 24))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMapPointsToSubShapeContactMgr::removeContactPointImpl  (binary VA: 0x16e9a20)
// Original: hkpMapPointsToSubShapeContactMgr::removeContactPointImpl
// ----------------------------------------------------------------------------
int hkpMapPointsToSubShapeContactMgr::removeContactPointImpl(hkpMapPointsToSubShapeContactMgr::Self *self, uint16_t a2, hkpConstraintOwner::Self *a3)
{
  return (*(int (**)(uint32_t, uint32_t, hkpConstraintOwner::Self *))(**((uint32_t **)self + 3) + 28))(
           *((uint32_t *)self + 3),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkpMapPointsToSubShapeContactMgr::processContactImpl  (binary VA: 0x16e9a50)
// Original: hkpMapPointsToSubShapeContactMgr::processContactImpl
// ----------------------------------------------------------------------------
int hkpMapPointsToSubShapeContactMgr::processContactImpl(int a1, int a2, int a3, int a4, int a5)
{
  return (*(int (**)(uint32_t, int, int, int, int))(**(uint32_t **)(a1 + 12) + 32))(
           *(uint32_t *)(a1 + 12),
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: hkpMapPointsToSubShapeContactMgr::cleanup  (binary VA: 0x16e9a90)
// Original: hkpMapPointsToSubShapeContactMgr::cleanup
// ----------------------------------------------------------------------------
int hkpMapPointsToSubShapeContactMgr::cleanup(hkpMapPointsToSubShapeContactMgr::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 44))(*((uint32_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: hkpMapPointsToSubShapeContactMgr::addToiImpl  (binary VA: 0x16e9ab0)
// Original: hkpMapPointsToSubShapeContactMgr::addToiImpl
// ----------------------------------------------------------------------------
int hkpMapPointsToSubShapeContactMgr::addToiImpl(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5, int64_t a6, int a7, int a8, int a9)
{
  uint32_t *v9;
  int v11;
  int v12;
  signed int v13;
  uint16_t v14;
  int v15;
  typedef uint32_t *_g4_t_v16;
  typedef signed int _g4_t_v17;
  typedef uint32_t _g4_t_v18[4];
  typedef uint32_t _g4_t_v19[4];
  typedef uint8_t _g4_t_v20[520];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v19)) > _g4_s3 ? (32u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v20)) > _g4_s4 ? (48u + sizeof(_g4_t_v20)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);

  v16 = a2;
  if ( *(uint8_t *)(*a2 + 8) == 26 )
  {
    v14 = HIBYTE(*(uint16_t *)a7);
    if ( *(uint8_t *)(a7 + 8) > 1u
      && (v14 != *(uint8_t *)(a7 + 3)
       || *(uint8_t *)(a7 + 8) > 2u
       && (v14 != *(uint8_t *)(a7 + 5)
        || *(uint8_t *)(a7 + 8) > 3u && v14 != *(uint8_t *)(a7 + 7))) )
    {
      goto LABEL_15;
    }
    v15 = v14;
    v18[0] = G4_VCALL<int>(*a2, 100, v14, v20);
    v18[3] = (uint32_t)(uintptr_t)(a2);
    v18[1] = v15;
    v16 = v18;
    v18[2] = a2[2];
  }
  v9 = a3;
  if ( *(uint8_t *)(*a3 + 8) != 26 )
    return (*(int (**)(uint32_t, uint32_t *, uint32_t *, int, int, uint32_t, uint32_t, int, int, int))(**(uint32_t **)(a1 + 12) + 36))(
             *(uint32_t *)(a1 + 12),
             v16,
             v9,
             a4,
             a5,
             a6,
             HIDWORD(a6),
             a7,
             a8,
             a9);
  v11 = *(uint8_t *)(a7 + 8);
  v12 = *(uint8_t *)(a7 + 2 * v11 + 1);
  v17 = v11 + *(uint8_t *)(a7 + 9);
  if ( v11 + 1 >= (unsigned int)v17
    || (uint16_t)v12 == *(uint8_t *)(a7 + 2 * (v11 + 1) + 1)
    && (v17 <= v11 + 2
     || (uint16_t)v12 == *(uint8_t *)(a7 + 2 * (v11 + 2) + 1)
     && (v17 <= v11 + 3
      || (uint16_t)v12 == *(uint8_t *)(a7 + 2 * (v11 + 3) + 1)
      && (v17 <= v11 + 4
       || (uint16_t)v12 == *(uint8_t *)(a7 + 2 * (v11 + 4) + 1)
       && ((v13 = v11 + 5, v17 <= v13) || (uint16_t)v12 == *(uint8_t *)(a7 + 2 * v13 + 1))))) )
  {
    v19[0] = G4_VCALL<int>(*a3, 100, v12, v20);
    v19[3] = (uint32_t)(uintptr_t)(a3);
    v19[1] = v12;
    v9 = v19;
    v19[2] = a3[2];
    return (*(int (**)(uint32_t, uint32_t *, uint32_t *, int, int, uint32_t, uint32_t, int, int, int))(**(uint32_t **)(a1 + 12) + 36))(
             *(uint32_t *)(a1 + 12),
             v16,
             v9,
             a4,
             a5,
             a6,
             HIDWORD(a6),
             a7,
             a8,
             a9);
  }
LABEL_15:
  *(uint8_t *)(a1 + 16) = 1;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpMapPointsToSubShapeContactMgr::removeToiImpl  (binary VA: 0x16e9c80)
// Original: hkpMapPointsToSubShapeContactMgr::removeToiImpl
// ----------------------------------------------------------------------------
int hkpMapPointsToSubShapeContactMgr::removeToiImpl(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 12) + 40))(*(uint32_t *)(a1 + 12), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpMapPointsToSubShapeContactMgr::Destroy  (binary VA: 0x16e9cf0)
// Original: hkpMapPointsToSubShapeContactMgr::~hkpMapPointsToSubShapeContactMgr
// ----------------------------------------------------------------------------
void hkpMapPointsToSubShapeContactMgr::Destroy(hkpMapPointsToSubShapeContactMgr::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMapPointsToSubShapeContactMgr::Destroy_ea16e9fc0  (binary VA: 0x16e9fc0)
// Original: hkpMapPointsToSubShapeContactMgr::~hkpMapPointsToSubShapeContactMgr
// ----------------------------------------------------------------------------
void hkpMapPointsToSubShapeContactMgr::Destroy_ea16e9fc0(hkpMapPointsToSubShapeContactMgr::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}


