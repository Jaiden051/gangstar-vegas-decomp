#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBallGun.h"

// ----------------------------------------------------------------------------
// Function: hkpBallGun::staticClass  (binary VA: 0x182fdf0)
// Original: hkpBallGun::staticClass
// ----------------------------------------------------------------------------
void * hkpBallGun::staticClass()
{
  return &hkpBallGunClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBallGun::reset  (binary VA: 0x183ae00)
// Original: hkpBallGun::reset
// ----------------------------------------------------------------------------
uint32_t * hkpBallGun::reset(hkpBallGun::Self *self, hkpWorld::Self *a2)
{
  uint32_t *result;
  int v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int32_t v13; // kr00_4
  int32_t v14;
  int32_t v15; // ett
  typedef int _g4_t_v16;
  typedef hkpBallGun::Self *_g4_t_v17;
  typedef hkpBallGun::Self *_g4_t_v18;
  typedef hkpBallGun::Self *_g4_t_v19;
  typedef uint8_t _g4_t_v20[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (15u + sizeof(_g4_t_v20)) > _g4_s4 ? (15u + sizeof(_g4_t_v20)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 15u);

  while ( 1 )
  {
    result = *((uint32_t **)self + 20);
    v4 = result[4];
    if ( v4 == 0 )
      break;
    while ( 1 )
    {
      v5 = result[2];
      v6 = *(uint32_t *)(*result + 4 * v5++);
      v7 = v5 == result[1];
      v16 = v6;
      result[2] = v5;
      if ( v7 )
        result[2] = 0;
      result[4] = v4 - 1;
      v8 = *((uint32_t *)self + 6) - 1;
      v9 = 4 * v8;
      if ( v8 >= 0 )
      {
        do
        {
          v17 = self;
          --v8;
          v10 = *(uint32_t *)(*((uint32_t *)self + 5) + v9);
          v9 -= 4;
          G4_VCALL<void>(v10, 24, v16);
          self = v17;
        }
        while ( v8 != -1 );
      }
      v11 = v16;
      if ( *(hkpWorld::Self **)(v16 + 8) == a2 )
      {
        v19 = self;
        hkpWorld::removeEntity((hkpWorld::Self *)v20, a2, (hkpWorld::Self *)v16);
        self = v19;
        v11 = v16;
      }
      if ( *(uint16_t *)(v11 + 6) == 0 )
        break;
      do
      {
        v13 = *(uint32_t *)(v16 + 4);
        HIWORD(v12) = HIWORD(v13);
        LOWORD(v12) = 0;
        v14 = v12 | (uint16_t)(v13 - 1);
        v15 = v13;
      }
      while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v15, v14) );
      if ( (uint16_t)v14 != 0 )
        break;
      v18 = self;
      G4_VCALL<void>(v16, 16);
      self = v18;
      result = *((uint32_t **)v18 + 20);
      v4 = result[4];
      if ( v4 == 0 )
        return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBallGun::Destroy  (binary VA: 0x183af20)
// Original: hkpBallGun::~hkpBallGun
// ----------------------------------------------------------------------------
void hkpBallGun::Destroy(hkpBallGun::Self *self)
{
  hkpBallGun::Self *v1;
  hkpWorld::Self **v2;
  hkpWorld::Self *v3;
  hkpWorld::Self *v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int32_t v11; // kr00_4
  int32_t v12;
  int32_t v13; // ett
  hkpBallGun::Self *v14;
  hkpBallGun::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int32_t v20; // kr04_4
  int32_t v21;
  int32_t v22; // ett
  int v23;
  int *v24;
  typedef hkpWorld::Self *_g4_t_v25;
  typedef hkpWorld::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef hkpBallGun::Self *_g4_t_address;
  typedef uint32_t _g4_t_v30[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v26)) > _g4_s1 ? (4u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v27)) > _g4_s2 ? (8u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v28)) > _g4_s3 ? (8u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_address)) > _g4_s4 ? (12u + sizeof(_g4_t_address)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v30)) > _g4_s5 ? (16u + sizeof(_g4_t_v30)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3228);
  v26 = (hkpWorld::Self *)((char *)v30 + 3);
  while ( 1 )
  {
    v2 = *((hkpWorld::Self ***)v1 + 20);
    v3 = v2[4];
    if ( v3 == nullptr )
      break;
    while ( 1 )
    {
      v4 = v2[2];
      v5 = *((uint32_t *)*v2 + (uint32_t)(uintptr_t)(v4));
      v4 = (hkpWorld::Self *)((char *)v4 + 1);
      v6 = v4 == v2[1];
      v27 = v5;
      v2[2] = v4;
      if ( v6 )
        v2[2] = nullptr;
      v2[4] = (hkpWorld::Self *)((char *)v3 - 1);
      v7 = *((uint32_t *)v1 + 6) - 1;
      v8 = 4 * v7;
      if ( v7 >= 0 )
      {
        do
        {
          address = v1;
          --v7;
          v9 = *(uint32_t *)(*((uint32_t *)v1 + 5) + v8);
          v8 -= 4;
          G4_VCALL<void>(v9, 24, v27);
          v1 = address;
        }
        while ( v7 != -1 );
      }
      if ( *(uint32_t *)(v27 + 8) != 0 )
      {
        address = v1;
        hkpWorld::removeEntity((hkpWorld::Self *)((char *)v30 + 3), *(hkpEntity::Self **)(v27 + 8), (hkpWorld::Self *)v27);
        v1 = address;
      }
      if ( *(uint16_t *)(v27 + 6) == 0 )
        break;
      do
      {
        v11 = *(uint32_t *)(v27 + 4);
        HIWORD(v10) = HIWORD(v11);
        LOWORD(v10) = 0;
        v12 = v10 | (uint16_t)(v11 - 1);
        v13 = v11;
      }
      while ( v13 != __sync_val_compare_and_swap((volatile int32_t *)(v27 + 4), v13, v12) );
      if ( (uint16_t)v12 != 0 )
        break;
      address = v1;
      G4_VCALL<void>(v27, 16);
      v1 = address;
      v2 = *((hkpWorld::Self ***)address + 20);
      v3 = v2[4];
      if ( v3 == nullptr )
        goto LABEL_13;
    }
  }
LABEL_13:
  v14 = v1;
  if ( v2[1] != nullptr )
  {
    v25 = v2[1];
    v26 = *v2;
    address = (hkpBallGun::Self *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v24 = *(int **)(*(uint32_t *)address + 44);
    v27 = *v24;
    G4_VCALL<void>(v24, 12, v26, 4 * (uint32_t)(uintptr_t)(v25));
    v15 = address;
  }
  else
  {
    v15 = (hkpBallGun::Self *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  }
  (*(void (**)(uint32_t, hkpWorld::Self **, int, hkpWorld::Self *, hkpWorld::Self *, int, hkpBallGun::Self *, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)v15 + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)v15 + 44),
    v2,
    20,
    v25,
    v26,
    v27,
    address,
    v30[0],
    v30[1],
    v30[2],
    v30[3]);
  v16 = *((uint32_t *)v14 + 6);
  v17 = 0;
  for ( *(uint32_t *)v14 = ((uint32_t)(uintptr_t)&off_20A35C8); v17 < v16; ++v17 )
  {
    v18 = *(uint32_t *)(*((uint32_t *)v14 + 5) + 4 * v17);
    if ( *(uint16_t *)(v18 + 6) != 0 )
    {
      v28 = v17;
      do
      {
        v20 = *(uint32_t *)(v18 + 4);
        HIWORD(v19) = HIWORD(v20);
        LOWORD(v19) = 0;
        v21 = v19 | (uint16_t)(v20 - 1);
        v22 = v20;
      }
      while ( v22 != __sync_val_compare_and_swap((volatile int32_t *)(v18 + 4), v22, v21) );
      v17 = v28;
      if ( (uint16_t)v21 == 0 )
        G4_VCALL<void>(v18, 16);
      v16 = *((uint32_t *)v14 + 6);
    }
  }
  v23 = *((uint32_t *)v14 + 7);
  *((uint32_t *)v14 + 6) = 0;
  if ( v23 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v14 + 5),
      4 * v23);
  *((uint32_t *)v14 + 5) = 0;
  *((uint32_t *)v14 + 7) = 0x80000000;
  hkStringPtr::Destroy((hkpBallGun::Self *)((char *)v14 + 12));
  *(uint32_t *)v14 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBallGun::Destroy_ea183b180  (binary VA: 0x183b180)
// Original: hkpBallGun::~hkpBallGun
// ----------------------------------------------------------------------------
void hkpBallGun::Destroy_ea183b180(hkpBallGun::Self *self)
{
  int v1;
  int v2;

  hkpBallGun::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBallGun::Construct  (binary VA: 0x183b1e0)
// Original: hkpBallGun::hkpBallGun
// ----------------------------------------------------------------------------
void hkpBallGun::Construct(hkpBallGun::Self *self, int a2)
{
  int address;
  hkString::Self **v3;
  hkString::Self **v4;
  int v5;
  int v6;
  hkString::Self *v7;
  char *v8;
  hkString::Self *v9;
  hkString::Self *v10;
  hkString::Self *v11;
  hkString::Self *v12;
  int v13;
  hkString::Self *v14;
  size_t v15;

  hkpFirstPersonGun::Construct(self);
  *((uint32_t *)self + 8) = 1045220557;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3228);
  *((uint32_t *)self + 12) = a2;
  *((uint32_t *)self + 9) = 1109393408;
  *((uint32_t *)self + 10) = 1112014848;
  *((uint32_t *)self + 11) = 1112014848;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint8_t *)self + 8) = 1;
  hkStringPtr::opAssign((hkpBallGun::Self *)((char *)self + 12), (hkString::Self *)"BallGun");
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (hkString::Self **)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                      *(uint32_t *)(*(uint32_t *)address + 44),
                      20);
  *v3 = nullptr;
  v3[1] = nullptr;
  v3[2] = nullptr;
  v3[3] = nullptr;
  v3[4] = nullptr;
  v4 = v3;
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(v3);
  v5 = (int)(uintptr_t)(v3[1]);
  if ( a2 <= v5 )
    return;
  v6 = 2 * v5;
  if ( a2 >= v6 )
    v6 = a2;
  v13 = v6;
  v7 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     4 * v6);
  v8 = (char *)*v4;
  if ( v7 != nullptr && v8 != nullptr )
  {
    v9 = v4[4];
    if ( v9 != nullptr )
    {
      v14 = v4[3];
      v10 = v4[2];
      if ( (int)(uintptr_t)(v14) > (int)(uintptr_t)(v10) )
      {
        hkString::memCpy(v7, &v8[4 * (uint32_t)(uintptr_t)(v10)], 4 * (uint32_t)(uintptr_t)(v9));
        v12 = v4[4];
        v8 = (char *)*v4;
        v4[2] = nullptr;
        v4[3] = v12;
        goto LABEL_10;
      }
      v15 = 4 * (v4[1] - v10);
      hkString::memCpy(v7, &v8[4 * (uint32_t)(uintptr_t)(v10)], v15);
      hkString::memCpy((hkString::Self *)((char *)v7 + v15), *v4, 4 * (uint32_t)(uintptr_t)(v14));
      v9 = v4[4];
      v8 = (char *)*v4;
    }
    v4[2] = nullptr;
    v4[3] = v9;
  }
LABEL_10:
  v11 = v4[1];
  if ( v11 != nullptr )
    (*(void (**)(uint32_t, char *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v8,
      4 * (uint32_t)(uintptr_t)(v11));
  *v4 = v7;
  v4[1] = (hkString::Self *)v13;
}


