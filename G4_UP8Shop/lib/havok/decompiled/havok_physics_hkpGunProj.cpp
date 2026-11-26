#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpGunProj.h"

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::onHit  (binary VA: 0x184dd50)
// Original: hkpGunProjectile::onHit
// ----------------------------------------------------------------------------
int hkpGunProjectile::onHit(int a1)
{
  *(uint8_t *)(a1 + 12) |= 2u;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::onUpdate  (binary VA: 0x184dd60)
// Original: hkpGunProjectile::onUpdate
// ----------------------------------------------------------------------------
void hkpGunProjectile::onUpdate()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::contactPointCallback  (binary VA: 0x184dd70)
// Original: hkpGunProjectile::contactPointCallback
// ----------------------------------------------------------------------------
int hkpGunProjectile::contactPointCallback(int a1, int a2)
{
  return G4_VCALL<int>(a1, 24, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::Construct  (binary VA: 0x184de80)
// Original: hkpGunProjectile::hkpGunProjectile
// ----------------------------------------------------------------------------
void hkpGunProjectile::Construct(hkpGunProjectile::Self *self, hkpProjectileGun::Self *a2, hkpRigidBody::Self *a3)
{
  int v3;
  int32_t v4; // kr00_4

  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_20A41D4);
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A41A8);
  *((uint8_t *)self + 12) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  if ( *((uint16_t *)a3 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a3 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
    }
    while ( v4 != __sync_val_compare_and_swap((volatile int32_t *)a3 + 1, v4, v3 | (uint16_t)(v4 + 1)) );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::destroy  (binary VA: 0x184def0)
// Original: hkpGunProjectile::destroy
// ----------------------------------------------------------------------------
int hkpGunProjectile::destroy(hkpGunProjectile::Self *self)
{
  int result;

  if ( (*((uint8_t *)self + 12) & 1) == 0 )
  {
    result = G4_VCALL<int>(self, 20);
    *((uint8_t *)self + 12) |= 1u;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::addToWorld  (binary VA: 0x184df20)
// Original: hkpGunProjectile::addToWorld
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpGunProjectile::addToWorld(hkpGunProjectile::Self *self, hkpWorld::Self *a2)
{
  if ( (*((uint8_t *)self + 12) & 4) != 0 )
    hkpEntity::addContactListener(*((uint32_t *)self + 4), (int)(uintptr_t)(self) + 8);
  return hkpWorld::addEntity(a2, *((hkpEntity::Self **)self + 4), 1);
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::removeFromWorld  (binary VA: 0x184df80)
// Original: hkpGunProjectile::removeFromWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpGunProjectile::removeFromWorld(hkpGunProjectile::Self *self)
{
  hkpWorld::Self *result;
  uint8_t v2[9];

  result = *((hkpWorld::Self **)self + 4);
  if ( result != nullptr )
  {
    result = hkpWorld::removeEntity((hkpWorld::Self *)v2, *((hkpEntity::Self **)result + 2), *((hkpWorld::Self **)self + 4));
    if ( (*((uint8_t *)self + 12) & 4) != 0 )
      return (hkpWorld::Self *)hkpEntity::removeContactListener(*((uint32_t *)self + 4), (int)(uintptr_t)(self) + 8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::destroyBody  (binary VA: 0x184dff0)
// Original: hkpGunProjectile::_destroyBody
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpGunProjectile::destroyBody(hkpGunProjectile::Self *self)
{
  int v1;
  hkpWorld::Self *result;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett

  v1 = *((uint32_t *)self + 4);
  if ( v1 != 0 )
  {
    result = *(hkpWorld::Self **)(v1 + 8);
    if ( result != nullptr )
    {
      result = hkpGunProjectile::removeFromWorld(self);
      v1 = *((uint32_t *)self + 4);
    }
    if ( *(uint16_t *)(v1 + 6) != 0 )
    {
      do
      {
        v4 = *(uint32_t *)(v1 + 4);
        HIWORD(v3) = HIWORD(v4);
        LOWORD(v3) = 0;
        v5 = v3 | (uint16_t)(v4 - 1);
        v6 = v4;
        result = (hkpWorld::Self *)__sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v6, v5);
      }
      while ( (hkpWorld::Self *)v6 != result );
      if ( (uint16_t)v5 == 0 )
        result = (hkpWorld::Self *)G4_VCALL<int>(v1, 16);
    }
    *((uint32_t *)self + 4) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::Destroy  (binary VA: 0x184e070)
// Original: hkpGunProjectile::~hkpGunProjectile
// ----------------------------------------------------------------------------
void hkpGunProjectile::Destroy(hkpGunProjectile::Self *self)
{
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_20A41D4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A41A8);
  hkpGunProjectile::destroyBody(self);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054FC8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::Destroy_ea184e0d0  (binary VA: 0x184e0d0)
// Original: hkpGunProjectile::~hkpGunProjectile
// ----------------------------------------------------------------------------
void hkpGunProjectile::Destroy_ea184e0d0(hkpGunProjectile::Self *self)
{
  int v1;
  int v2;

  hkpGunProjectile::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::onDestroy  (binary VA: 0x184e140)
// Original: hkpGunProjectile::onDestroy
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpGunProjectile::onDestroy(hkpGunProjectile::Self *self)
{
  return hkpGunProjectile::destroyBody(self);
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::update  (binary VA: 0x184e170)
// Original: hkpGunProjectile::update
// ----------------------------------------------------------------------------
hkpGunProjectile::Self * hkpGunProjectile::update(hkpGunProjectile::Self *self, float a2)
{
  hkpGunProjectile::Self *result;
  float v3;

  result = self;
  if ( (*((uint8_t *)self + 12) & 1) == 0 )
  {
    v3 = *(float *)self;
    *((float *)self + 5) = *((float *)self + 5) + a2;
    return (hkpGunProjectile::Self *)(*(int (**)(hkpGunProjectile::Self *, uint32_t))(LODWORD(v3) + 28))(self, LODWORD(a2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::setHitListening  (binary VA: 0x184e1b0)
// Original: hkpGunProjectile::setHitListening
// ----------------------------------------------------------------------------
uint32_t * hkpGunProjectile::setHitListening(hkpGunProjectile::Self *self, bool a2)
{
  char v2;
  uint32_t *result;

  v2 = *((uint8_t *)self + 12);
  result = (uint32_t *)((v2 & 4) != 0);
  if ( a2 != (uint8_t)(uintptr_t)result )
  {
    result = *((uint32_t **)self + 4);
    if ( result != nullptr && result[2] != 0 )
    {
      if ( a2 )
      {
        result = (uint32_t *)hkpEntity::addContactListener(*((uint32_t *)self + 4), (int)(uintptr_t)(self) + 8);
        v2 = *((uint8_t *)self + 12);
LABEL_6:
        *((uint8_t *)self + 12) = v2 | 4;
        return result;
      }
      result = hkpEntity::removeContactListener(*((uint32_t *)self + 4), (int)(uintptr_t)(self) + 8);
      v2 = *((uint8_t *)self + 12);
    }
    else if ( a2 )
    {
      goto LABEL_6;
    }
    *((uint8_t *)self + 12) = v2 & 0xFB;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGunProjectile::flyTrue  (binary VA: 0x184e240)
// Original: hkpGunProjectile::flyTrue
// ----------------------------------------------------------------------------
int hkpGunProjectile::flyTrue(hkpGunProjectile::Self *self, hkpRigidBody::Self *a2, float a3)
{
  __m128i v3;
  float v4; // xmm1_4
  int result;
  float v6; // xmm0_4
  __m128i v7;
  float v8; // xmm4_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm4_4
  __m128i v15;
  float v16; // xmm4_4
  float v17; // xmm3_4
  __m128i v18;
  int v19;
  int v20;
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  bool v25;
  float v26; // xmm0_4
  typedef float _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[48];
  typedef uint8_t _g4_t_v29[48];
  typedef float _g4_t_v30[19];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v28)) > _g4_s1 ? (16u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v29)) > _g4_s2 ? (64u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v30)) > _g4_s3 ? (112u + sizeof(_g4_t_v30)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);

  v30[0] = *((float *)self + 60);
  v30[1] = *((float *)self + 61);
  v30[2] = *((float *)self + 62);
  v30[3] = *((float *)self + 63);
  v30[4] = *((float *)self + 64);
  v30[5] = *((float *)self + 65);
  v30[6] = *((float *)self + 66);
  v30[7] = *((float *)self + 67);
  v30[8] = *((float *)self + 68);
  v30[9] = *((float *)self + 69);
  v30[10] = *((float *)self + 70);
  v30[11] = *((float *)self + 71);
  v30[12] = *((float *)self + 72);
  v30[13] = *((float *)self + 73);
g4_m128_raw(v3) = *((unsigned int *)self + 108);
  v30[14] = *((float *)self + 74);
  v4 = *((float *)self + 109);
  v7 = v3;
  result = *((int *)self + 75);
  LODWORD(v30[15]) = result;
  v6 = *((float *)self + 110);
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)g4_m128_ptr<int32_t>(v3)) + (float)(v4 * v4))
                         + (float)(v6 * v6);
  if ( *(float *)g4_m128_ptr<int32_t>(v7) > (float)(*(float *)&a2 * *(float *)&a2) )
  {
    v8 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v7) > 0.0 )
    {
      v9 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v7);
      result = ((_mm_cvtsi128_si32(v7) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v7) >> 1));
      v10 = (float)(*(float *)&result * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * *(float *)&result)
                  * (float)(*(float *)&result * *(float *)&result));
      v11 = (float)(v10 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v10) * (float)(v10 * v10));
      v8 = (float)(1.5 * v11) - (float)((float)(v9 * v11) * (float)(v11 * v11));
    }
    v12 = *(float *)g4_m128_ptr<int32_t>(v3) * v8;
    v13 = v4 * v8;
    v14 = v8 * v6;
g4_m128_raw(v15) = LODWORD(v30[2]);
    *(float *)g4_m128_ptr<int32_t>(v15) = (float)(v30[2] * v13) - (float)(v30[1] * v14);
    v16 = (float)(v14 * v30[0]) - (float)(v30[2] * v12);
    v17 = (float)(v12 * v30[1]) - (float)(v13 * v30[0]);
    v18 = v15;
    *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15)) + (float)(v16 * v16))
                            + (float)(v17 * v17);
    if ( *(float *)g4_m128_ptr<int32_t>(v18) > 0.0 )
    {
      v19 = _mm_cvtsi128_si32(v18) >> 1;
      v20 = (_mm_cvtsi128_si32(v18) + 2139095040) >> 31;
      *(float *)&result = COERCE_FLOAT(&dword_1C7B664);
      v21 = (float)(1.5 * COERCE_FLOAT(v20 & (1597463174 - v19)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * COERCE_FLOAT(v20 & (1597463174 - v19)))
                  * (float)(COERCE_FLOAT(v20 & (1597463174 - v19)) * COERCE_FLOAT(v20 & (1597463174 - v19))));
      v22 = (float)(1.5 * v21) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * v21) * (float)(v21 * v21));
      v23 = (float)(1.5 * v22) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v18)) * v22) * (float)(v22 * v22));
      v24 = *(float *)g4_m128_ptr<int32_t>(v18) * v23;
      if ( (float)(*(float *)g4_m128_ptr<int32_t>(v18) * v23) > 0.00001f )
      {
        v25 = *(float *)g4_m128_ptr<int32_t>(v18) > 0.0;
        v26 = 0.0;
        if ( v25 )
          v26 = 0.0 * v23;
        else
          v23 = 0.0;
        v27[0] = *(float *)g4_m128_ptr<int32_t>(v15) * v23;
        v27[1] = v16 * v23;
        v27[2] = v23 * v17;
        v27[3] = v26;
        hkRotationf::setAxisAngle((hkRotationf::Self *)v28, (const hkVector4f::Self *)v27, (float)(v24 * a3) * -5.0);
        hkMatrix3f::setMul((hkMatrix3f::Self *)v29, (const hkMatrix3f::Self *)v28, (const hkMatrix3f::Self *)v30);
        std::memcpy(v30, v29, 48);
        *(float *)&result = COERCE_FLOAT(hkpRigidBody::setTransform(self, (const hkTransformf::Self *)v30));
      }
    }
  }
  return result;
}


