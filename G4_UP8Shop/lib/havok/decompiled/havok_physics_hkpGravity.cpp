#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpGravity.h"

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::staticClass  (binary VA: 0x1834ce0)
// Original: hkpGravityGun::staticClass
// ----------------------------------------------------------------------------
void * hkpGravityGun::staticClass()
{
  return &hkpGravityGunClass;
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::Destroy  (binary VA: 0x1843e50)
// Original: hkpGravityGun::~hkpGravityGun
// ----------------------------------------------------------------------------
void hkpGravityGun::Destroy(hkpGravityGun::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A38E8);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v1);
  v2 = *((uint32_t *)self + 6);
  v3 = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  for ( *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A35C8); v3 < v2; ++v3 )
  {
    v4 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v3);
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      v10 = v3;
      do
      {
        v6 = *(uint32_t *)(v4 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
      v3 = v10;
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
      v2 = *((uint32_t *)self + 6);
    }
  }
  v9 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v9);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  hkStringPtr::Destroy((hkpGravityGun::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::Destroy_ea1843f70  (binary VA: 0x1843f70)
// Original: hkpGravityGun::~hkpGravityGun
// ----------------------------------------------------------------------------
void hkpGravityGun::Destroy_ea1843f70(hkpGravityGun::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;
  int v11;
  int v12;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A38E8);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v1);
  v2 = *((uint32_t *)self + 6);
  v3 = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  for ( *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A35C8); v3 < v2; ++v3 )
  {
    v4 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v3);
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      v12 = v3;
      do
      {
        v6 = *(uint32_t *)(v4 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
      v3 = v12;
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
      v2 = *((uint32_t *)self + 6);
    }
  }
  v9 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v9);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  hkStringPtr::Destroy((hkpGravityGun::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v10 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v11 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v11 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v10, 12, self, v11);
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::Construct  (binary VA: 0x18440c0)
// Original: hkpGravityGun::hkpGravityGun
// ----------------------------------------------------------------------------
void hkpGravityGun::Construct(hkpGravityGun::Self *self)
{
  hkpFirstPersonGun::Construct(self);
  *((uint32_t *)self + 8) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A38E8);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 13) = 1112014848;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 15) = 1112014848;
  *((uint32_t *)self + 11) = 10;
  *((uint32_t *)self + 12) = 1128792064;
  *((uint32_t *)self + 14) = 1120403456;
  *((uint8_t *)self + 8) = 3;
  hkStringPtr::opAssign((hkpGravityGun::Self *)((char *)self + 12), (hkString::Self *)"GravityGun");
  *((uint32_t *)self + 16) = 1075838976;
  *((uint32_t *)self + 17) = 1058642330;
  *((uint32_t *)self + 21) = 1065353216;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
}



// ============================================================================
// Address:   0x1844180 (size: 121 bytes)
// Symbol:    _ZN13hkpGravityGunC1E24hkFinishLoadedObjectFlag
// Demangled: hkpGravityGun::hkpGravityGun(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN13hkpGravityGunC2E24hkFinishLoadedObjectFlag'
void (**hkpGravityGun::Construct(int a1, int a2))(hkpGravityGun::Self * self)
{
  void (**result)(hkpGravityGun::Self *);

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A35C8);
  hkStringPtr::Construct();
  *(uint32_t *)(a1 + 20) = 0;
  result = (void (**)(hkpGravityGun::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A38E8));
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0x80000000;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A38E8);
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0x80000000;
  if ( a2 != 0 )
    *(uint8_t *)(a1 + 8) = 3;
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpGravityGun::pickBody  (binary VA: 0x1844200)
// Original: hkpGravityGun::pickBody
// ----------------------------------------------------------------------------
const hkpRigidBody::Self * hkpGravityGun::pickBody(hkpGravityGun::Self *self, const hkTransformf::Self *a2, const hkpRigidBody::Self *a3, const hkpWorld::Self *a4)
{
  char *v4;
  int v5;
  int v6;
  int v7;
  const hkpRigidBody::Self *v8;
  __m128i v9;
  int v10;
  int v11;
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  const hkpRigidBody::Self **v15;
  int v16;
  int v17;
  typedef int _g4_t_v19;
  typedef const hkpRigidBody::Self *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_i;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_Mass;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27[4];
  typedef int _g4_t_v28[12];
  typedef uint32_t _g4_t_v29[21];
  typedef uint32_t *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_i)) > _g4_s3 ? (24u + sizeof(_g4_t_i)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_Mass)) > _g4_s6 ? (36u + sizeof(_g4_t_Mass)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v26)) > _g4_s7 ? (44u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v27)) > _g4_s8 ? (48u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v28)) > _g4_s9 ? (64u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v29)) > _g4_s10 ? (112u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (196u + sizeof(_g4_t_v30)) > _g4_s11 ? (196u + sizeof(_g4_t_v30)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_Mass &Mass = *reinterpret_cast<_g4_t_Mass *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 112u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 196u);

  v19 = 2;
  v21 = (char *)a4 + 40;
  v20 = nullptr;
  v23 = 0.35f;
  v4 = (char *)a4 + 40;
  while ( 2 )
  {
    v5 = *((uint32_t *)v4 + 1);
    if ( v5 <= 0 )
      goto LABEL_22;
    for ( i = 0; i < v5; ++i )
    {
      v26 = *(uint32_t *)(*(uint32_t *)v21 + 4 * i);
      if ( *(int *)(v26 + 80) <= 0 )
        continue;
      v6 = 0;
      v7 = *(uint32_t *)(*(uint32_t *)v21 + 4 * i);
      do
      {
        v8 = *(const hkpRigidBody::Self **)(*(uint32_t *)(v7 + 76) + 4 * v6);
        hkVector4f::setTransformedInversePos((hkVector4f::Self *)v27, a2, (const hkpRigidBody::Self *)((char *)v8 + 320));
        if ( v27[0] <= *((float *)self + 13) && v27[0] >= 0.1f && v8 != a3 )
        {
g4_m128_raw(v9) = 0x3F800000u;
          *(float *)g4_m128_ptr<int32_t>(v9) = v27[0] + 1.0;
          v10 = _mm_cvtsi128_si32(v9);
          v11 = (2130706432 - v10) & ((v10 ^ (v10 + 2139095040)) >> 31);
          v12 = (float)(2.0
                      - (float)((float)(v27[0] + 1.0)
                              * (float)((float)(2.0 - (float)((float)(v27[0] + 1.0) * *(float *)&v11)) * *(float *)&v11)))
              * (float)((float)(2.0 - (float)((float)(v27[0] + 1.0) * *(float *)&v11)) * *(float *)&v11);
          v24 = (float)(fabs(v27[1]) + fabs(v27[2]))
              * (float)((float)(2.0 - (float)((float)(v27[0] + 1.0) * v12)) * v12);
          Mass = hkpMotion::getMass((const hkpRigidBody::Self *)((char *)v8 + 224));
          v13 = v24;
          if ( Mass > *((float *)self + 12) )
            v13 = v24 + 0.1f;
          if ( v13 <= v23 )
          {
            v14 = *((uint32_t *)self + 9);
            if ( v14 > 0 )
            {
              v15 = *((const hkpRigidBody::Self ***)self + 8);
              if ( v8 == *v15 )
                goto LABEL_19;
              v16 = 0;
              while ( ++v16 != v14 )
              {
                if ( v8 == v15[v16] )
                  goto LABEL_19;
              }
            }
            v29[1] = 1065353216;
            v29[8] = 1065353216;
            v29[0] = (uint32_t)(uintptr_t)(&off_20990F8);
            v29[9] = -1;
            v29[20] = 0;
            v29[12] = -1;
            v30 = nullptr;
            LOBYTE(v28[8]) = 0;
            v17 = *((uint32_t *)a2 + 12);
            v28[9] = 0;
            v28[0] = v17;
            v28[10] = 0;
            v28[1] = *((uint32_t *)a2 + 13);
            v28[2] = *((uint32_t *)a2 + 14);
            v28[3] = *((uint32_t *)a2 + 15);
            v28[4] = *((uint32_t *)v8 + 80);
            v28[5] = *((uint32_t *)v8 + 81);
            v28[6] = *((uint32_t *)v8 + 82);
            v28[7] = *((uint32_t *)v8 + 83);
            hkpWorld::castRay((int)(uintptr_t)(a4), v28, (int)(uintptr_t)(v29));
            if ( v30 == nullptr || v30 == (uint32_t *)((char *)v8 + 16) )
            {
              v23 = v13;
              v20 = v8;
            }
          }
        }
LABEL_19:
        v7 = v26;
        ++v6;
      }
      while ( *(uint32_t *)(v26 + 80) > v6 );
      v5 = *((uint32_t *)v21 + 1);
    }
LABEL_22:
    if ( --v19 != 0 )
    {
      v4 = (char *)a4 + 52;
      v21 = (char *)a4 + 52;
      continue;
    }
    return v20;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::takeObject  (binary VA: 0x1844540)
// Original: hkpGravityGun::takeObject
// ----------------------------------------------------------------------------
int hkpGravityGun::takeObject(hkpGravityGun::Self *self, hkpRigidBody::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4
  int v4;
  int v6;

  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v3 = *((uint32_t *)a2 + 1);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
  }
  v4 = *((uint32_t *)self + 9);
  if ( v4 == (*((uint32_t *)self + 10) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpGravityGun::Self *)((char *)self + 32),
      4,
      v6);
    v4 = *((uint32_t *)self + 9);
  }
  *(uint32_t *)(*((uint32_t *)self + 8) + 4 * v4) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 9);
  return hkpRigidBody::setMassInv(a2, 100.0 * *((float *)a2 + 107));
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::dropObject  (binary VA: 0x18445f0)
// Original: hkpGravityGun::dropObject
// ----------------------------------------------------------------------------
int hkpGravityGun::dropObject(hkpGravityGun::Self *self, int a2)
{
  int v2;
  int *v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett

  v2 = *((uint32_t *)self + 9) - 1;
  v3 = (int *)(*((uint32_t *)self + 8) + 4 * a2);
  v4 = *v3;
  *((uint32_t *)self + 9) = v2;
  v5 = 0;
  v6 = 4 * (v2 - a2);
  if ( v6 > 0 )
  {
    do
    {
      v3[v5 / 4] = v3[v5 / 4 + 1];
      v5 += 4;
    }
    while ( v6 > (int)v5 );
  }
  hkpRigidBody::setMassInv((hkpRigidBody::Self *)v4, 0.01f * *(float *)(v4 + 428));
  if ( *(uint16_t *)(v4 + 6) == 0 )
    return v4;
  do
  {
    v8 = *(uint32_t *)(v4 + 4);
    HIWORD(v7) = HIWORD(v8);
    LOWORD(v7) = 0;
    v9 = v7 | (uint16_t)(v8 - 1);
    v10 = v8;
  }
  while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v10, v9) );
  if ( (uint16_t)v9 != 0 )
    return v4;
  G4_VCALL<void>(v4, 16);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::reset  (binary VA: 0x18446c0)
// Original: hkpGravityGun::reset
// ----------------------------------------------------------------------------
int hkpGravityGun::reset(hkpGravityGun::Self *self)
{
  int result;

  result = *((uint32_t *)self + 9);
  if ( result != 0 )
  {
    do
      result = hkpGravityGun::dropObject(self, 0);
    while ( *((uint32_t *)self + 9) != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::gravityGunPull  (binary VA: 0x1844700)
// Original: hkpGravityGun::gravityGunPull
// ----------------------------------------------------------------------------
float * hkpGravityGun::gravityGunPull(hkpGravityGun::Self *self, const hkTransformf::Self *a2, const hkpRigidBody::Self *a3, const hkpWorld::Self *a4)
{
  float *result;
  float *v5;
  float v6; // xmm0_4
  float v7; // xmm0_4
  typedef float _g4_t_v8;
  typedef float _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  result = (float *)hkpGravityGun::pickBody(self, a2, a3, a4);
  v5 = result;
  if ( result != nullptr )
  {
    if ( (float)(*((float *)self + 12) * result[107]) >= 1.0 && *((uint32_t *)self + 9) < *((uint32_t *)self + 11) )
    {
      return (float *)hkpGravityGun::takeObject(self, (hkpRigidBody::Self *)result);
    }
    else
    {
      v6 = *((float *)self + 14);
      v8 = *(float *)a2;
      v7 = -v6;
      v9 = *((float *)a2 + 1);
      v10 = *((float *)a2 + 2);
      v11 = *((float *)a2 + 3);
      v8 = v8 * v7;
      v9 = v9 * v7;
      v10 = v10 * v7;
      v11 = v7 * v11;
      hkpEntity::activate((hkpEntity::Self *)result);
      return (float *)(*(int (**)(float *, float *))(*((uint32_t *)v5 + 56) + 96))(v5 + 56, &v8);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::gravityGunPush  (binary VA: 0x1844820)
// Original: hkpGravityGun::gravityGunPush
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpGravityGun::gravityGunPush(hkpGravityGun::Self *self, const hkTransformf::Self *a2, const hkpRigidBody::Self *a3, const hkpWorld::Self *a4)
{
  hkpEntity::Self *result;
  float v5; // xmm0_4
  hkpEntity::Self *v6;
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef hkpEntity::Self *_g4_t_v20;
  typedef hkpEntity::Self *_g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v21)) > _g4_s6 ? (28u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v22)) > _g4_s7 ? (32u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v23)) > _g4_s8 ? (36u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v24)) > _g4_s9 ? (40u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v25)) > _g4_s10 ? (44u + sizeof(_g4_t_v25)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);

  if ( *((uint32_t *)self + 9) != 0 )
  {
    v6 = (hkpEntity::Self *)hkpGravityGun::dropObject(self, 0);
    v7 = *((float *)self + 15);
    v21 = v6;
    v8 = (float)(*((float *)a2 + 1) * v7) + (float)(1.0 * 0.5);
    v9 = (float)(*((float *)a2 + 2) * v7) + (float)(0.0 * 0.5);
    v10 = *((float *)a2 + 3) * v7;
    v11 = v7 * *(float *)a2;
    v12 = v9 + *((float *)a3 + 110);
    v23 = v8 + *((float *)a3 + 109);
    v13 = (float)(v10 + (float)(0.0 * 0.5)) + *((float *)a3 + 111);
    v14 = (float)(v11 + (float)(0.5 * 0.0)) + *((float *)a3 + 108);
    v24 = v12;
    v25 = v13;
    v22 = v14;
    hkpEntity::activate(v6);
    (*(void (**)(int, float *, int, int, int, int, int, hkpEntity::Self *))(*((uint32_t *)v21 + 56) + 80))(
      (int)(uintptr_t)(v21) + 224,
      &v22,
      v15,
      v16,
      v17,
      v18,
      v19,
      v21);
    *((uint8_t *)a3 + 42) = 6;
    return (hkpEntity::Self *)(a3);
  }
  else
  {
    result = (hkpEntity::Self *)(hkpGravityGun::pickBody(self, a2, a3, a4));
    if ( result != nullptr )
    {
      v20 = result;
      v5 = *((float *)self + 14);
      v22 = *(float *)a2;
      v23 = *((float *)a2 + 1);
      v24 = *((float *)a2 + 2);
      v25 = *((float *)a2 + 3);
      v22 = v22 * v5;
      v23 = v23 * v5;
      v24 = v24 * v5;
      v25 = v5 * v25;
      hkpEntity::activate(result);
      return (hkpEntity::Self *)(*(int (**)(int, float *))(*((uint32_t *)v20 + 56) + 96))((int)(uintptr_t)(v20) + 224, &v22);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::gravityGunPutDown  (binary VA: 0x1844a00)
// Original: hkpGravityGun::gravityGunPutDown
// ----------------------------------------------------------------------------
hkpGravityGun::Self * hkpGravityGun::gravityGunPutDown(hkpGravityGun::Self *self)
{
  hkpGravityGun::Self *result;

  result = self;
  if ( *((uint32_t *)self + 9) != 0 )
    return (hkpGravityGun::Self *)hkpGravityGun::dropObject(self, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::gravityGunStep  (binary VA: 0x1844a40)
// Original: hkpGravityGun::gravityGunStep
// ----------------------------------------------------------------------------
void hkpGravityGun::gravityGunStep(__m128 *self, float a2, const hkTransformf::Self *a3, const hkpRigidBody::Self *a4)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  __m128 *v6;
  __m128 v7;
  float v8; // xmm5_4
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __m128i m128_i128;
  int v14;
  int v15;
  float v16; // xmm3_4
  __m128 v17;
  uint16_t EncodedFloat;
  __m128 v19;
  typedef hkUFloat8::Self *_g4_t_v20;
  typedef signed int _g4_t_v21;
  typedef __m128 *_g4_t_v22;
  typedef float _g4_t_v23;
  typedef __m128 _g4_t_v24;
  typedef float _g4_t_v25[4];
  typedef uint32_t _g4_t_v26[4];
  typedef __m128 _g4_t_v27;
  typedef __m128 _g4_t_v28;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v21)) > _g4_s1 ? (24u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v22)) > _g4_s2 ? (28u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v23)) > _g4_s3 ? (28u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v24)) > _g4_s4 ? (32u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v25)) > _g4_s5 ? (48u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v26)) > _g4_s6 ? (64u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v27)) > _g4_s7 ? (80u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v28)) > _g4_s8 ? (96u + sizeof(_g4_t_v28)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);

  if ( *((int *)self + 9) > 0 )
  {
    v21 = 0;
    do
    {
      while ( 1 )
      {
        v24 = _mm_add_ps(
                _mm_mul_ps(_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_cvtsi32_si128(v21), 0)), *(self + 5)),
                *(self + 4));
        hkVector4f::setTransformedPos((hkVector4f::Self *)v25, a3, (const hkVector4f::Self *)&v24);
g4_m128_raw(v7) = LODWORD(v25[1]);
g4_m128_raw(v11) = LODWORD(v25[3]);
        v6 = *(__m128 **)(*((uint32_t *)self + 8) + 4 * v21);
g4_m128_raw(v9) = LODWORD(v25[2]);
g4_m128_raw(v12) = LODWORD(v25[0]);
g4_m128_lane<float>(v12, 0) = (float)(v25[0] -g4_m128_lane<float>(v6[20], 0)) * (float)(0.4f / a2);
g4_m128_lane<float>(v7, 0) = (float)((float)((float)(*((float *)a4 + 109) -g4_m128_lane<float>(v6[27], 1)) * 0.8f) +g4_m128_lane<float>(v6[27], 1))
                       + (float)((float)(v25[1] -g4_m128_lane<float>(v6[20], 1)) * (float)(0.4f / a2));
        v8 = *((float *)a4 + 108) -g4_m128_lane<float>(v6[27], 0);
g4_m128_lane<float>(v9, 0) = (float)((float)((float)(*((float *)a4 + 110) -g4_m128_lane<float>(v6[27], 2)) * 0.8f) +g4_m128_lane<float>(v6[27], 2))
                       + (float)((float)(v25[2] -g4_m128_lane<float>(v6[20], 2)) * (float)(0.4f / a2));
g4_m128_raw(v10) = 0;
g4_m128_lane<float>(v11, 0) = (float)((float)((float)(*((float *)a4 + 111) -g4_m128_lane<float>(v6[27], 3)) * 0.8f) +g4_m128_lane<float>(v6[27], 3))
                        + (float)((float)(v25[3] -g4_m128_lane<float>(v6[20], 3)) * (float)(0.4f / a2));
        v26[1] =g4_m128_lane<int32_t>(v7, 0);
        v26[2] =g4_m128_lane<int32_t>(v9, 0);
g4_m128_lane<float>(v12, 0) = (float)((float)(v8 * 0.8f) +g4_m128_lane<float>(v6[27], 0)) +g4_m128_lane<float>(v12, 0);
        v26[0] =g4_m128_lane<int32_t>(v12, 0);
        m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v12));
        v26[3] =g4_m128_lane<int32_t>(v11, 0);
        *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v12, 0) *g4_m128_lane<float>(v12, 0))
                                              + (float)(g4_m128_lane<float>(v7, 0) *g4_m128_lane<float>(v7, 0)))
                                      + (float)(g4_m128_lane<float>(v9, 0) *g4_m128_lane<float>(v9, 0));
        if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) > 0.0 )
        {
          v14 = _mm_cvtsi128_si32(m128_i128) >> 1;
          v15 = (_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31;
          v23 = (float)(1.5 * COERCE_FLOAT(v15 & (1597463174 - v14)))
              - (float)((float)(COERCE_FLOAT(v15 & (1597463174 - v14)) * COERCE_FLOAT(v15 & (1597463174 - v14)))
                      * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * COERCE_FLOAT(v15 & (1597463174 - v14))));
          v16 = (float)(1.5 * v23)
              - (float)((float)(v23 * v23) * (float)(v23 * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128))));
g4_m128_raw(v10) = 0x3FC00000u;
g4_m128_lane<float>(v10, 0) = (float)(1.5 * v16)
                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * v16) * (float)(v16 * v16));
        }
g4_m128_lane<uint64_t>(v17, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v12, v7), 0);
g4_m128_lane<uint64_t>(v17, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v9, v11), 0);
        v20 = (hkUFloat8::Self *)g4_m128_lane<uint8_t>(v6[25], 10);
        v27 = _mm_mul_ps(v17, _mm_shuffle_ps(v10, v10, 0));
        EncodedFloat = hkUFloat8::getEncodedFloat(v20);
g4_m128_raw(v19) = 0;
        if ( EncodedFloat != 0 )
g4_m128_raw(v19) = (g4_int128_t)_mm_cvtsi32_si128(((unsigned int)EncodedFloat + 243712) << 12);
        if ( (float)(*(float *)g4_m128_ptr<int32_t>(m128_i128) *g4_m128_lane<float>(v10, 0)) >=g4_m128_lane<float>(v19, 0) )
        {
          v27 = _mm_mul_ps(_mm_sub_ps(_mm_shuffle_ps(v19, v19, 0), G4_BITCAST<__m128>(xmmword_1C7CE60)), v27);
          hkpEntity::activate((hkpEntity::Self *)v6);
          v22 = v6 + 14;
          (*(void (**)(__m128 *, __m128 *))(g4_m128_lane<int32_t>(v6[14], 0) + 80))(v6 + 14, &v27);
        }
        else
        {
          hkpEntity::activate((hkpEntity::Self *)v6);
          v22 = v6 + 14;
          (*(void (**)(__m128 *, uint32_t *))(g4_m128_lane<int32_t>(v6[14], 0) + 80))(v6 + 14, v26);
        }
        v4 = (float)(0.8f *g4_m128_lane<float>(v6[28], 2)) * (float)(0.8f *g4_m128_lane<float>(v6[28], 2));
        v5 = (float)((float)(0.8f *g4_m128_lane<float>(v6[28], 0)) * (float)(0.8f *g4_m128_lane<float>(v6[28], 0)))
           + (float)((float)(0.8f *g4_m128_lane<float>(v6[28], 1)) * (float)(0.8f *g4_m128_lane<float>(v6[28], 1)));
        v28 = _mm_mul_ps(G4_BITCAST<__m128>(xmmword_1C7CE70), v6[28]);
        if ( (float)(v5 + v4) > 1.0 )
          break;
        if ( *((uint32_t *)self + 9) <= ++v21 )
          return;
      }
      hkpEntity::activate((hkpEntity::Self *)v6);
      (*(void (**)(__m128 *, __m128 *))(g4_m128_lane<int32_t>(v6[14], 0) + 84))(v22, &v28);
      ++v21;
    }
    while ( *((uint32_t *)self + 9) > v21 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpGravityGun::stepGun  (binary VA: 0x1844e20)
// Original: hkpGravityGun::stepGun
// ----------------------------------------------------------------------------
void hkpGravityGun::stepGun(hkpGravityGun::Self *self, float a2, hkpWorld::Self *a3, const hkpRigidBody::Self *a4, const hkTransformf::Self *a5, bool a6, bool a7)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef hkpWorld::Self *_g4_t_v16;
  typedef g4_int128_t _g4_t_v17;
  typedef uint32_t _g4_t_v18[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v17)) > _g4_s1 ? (32u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v18)) > _g4_s2 ? (48u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  if ( a6 )
  {
    hkpGravityGun::gravityGunPush(self, a5, a4, a3);
    v10 = *((uint32_t *)self + 6);
    v18[0] = *((uint32_t *)a4 + 72);
    v18[1] = *((uint32_t *)a4 + 73);
    v18[2] = *((uint32_t *)a4 + 74);
    v18[3] = *((uint32_t *)a4 + 75);
    if ( v10 > 0 )
    {
      v11 = 0;
      do
      {
        v12 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v11++);
        G4_VCALL<void>(v12, 28, v18, 0);
      }
      while ( *((uint32_t *)self + 6) > v11 );
    }
  }
  else if ( a7 )
  {
    v16 = a3;
    if ( *((uint32_t *)self + 9) == *((uint32_t *)self + 11) )
    {
      hkpGravityGun::gravityGunPutDown(self);
      v13 = *((uint32_t *)self + 6);
      v18[0] = *((uint32_t *)a4 + 72);
      v18[1] = *((uint32_t *)a4 + 73);
      v18[2] = *((uint32_t *)a4 + 74);
      v18[3] = *((uint32_t *)a4 + 75);
      if ( v13 > 0 )
      {
        v14 = 0;
        do
        {
          v15 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v14++);
          G4_VCALL<void>(v15, 28, v18, 0, v16);
        }
        while ( *((uint32_t *)self + 6) > v14 );
      }
    }
    else
    {
      hkpGravityGun::gravityGunPull(self, a5, a4, a3);
      v7 = *((uint32_t *)self + 6);
      v17 = *((g4_int128_t *)a5 + 3);
      v18[0] = *((uint32_t *)a4 + 72);
      v18[1] = *((uint32_t *)a4 + 73);
      v18[2] = *((uint32_t *)a4 + 74);
      v18[3] = *((uint32_t *)a4 + 75);
      if ( v7 > 0 )
      {
        v8 = 0;
        do
        {
          v9 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v8++);
          G4_VCALL<void>(v9, 28, &v17, v18);
        }
        while ( *((uint32_t *)self + 6) > v8 );
      }
    }
  }
  hkpGravityGun::gravityGunStep((__m128 *)self, a2, a5, a4);
}


