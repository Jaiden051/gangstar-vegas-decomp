#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpEntity.h"

// ----------------------------------------------------------------------------
// Function: hkpEntity::getMotionState  (binary VA: 0x1731670)
// Original: hkpEntity::getMotionState
// ----------------------------------------------------------------------------
int hkpEntity::getMotionState()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::Construct  (binary VA: 0x1731860)
// Original: hkpEntity::hkpEntity
// ----------------------------------------------------------------------------
void hkpEntity::Construct(hkpEntity::Self *self, const hkpShape::Self *a2)
{
  hkpWorldObject::Construct(self, a2, 1);
  *((uint32_t *)self + 35) = 1056964608;
  *((uint32_t *)self + 36) = 1053609165;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EF88);
  *((uint16_t *)self + 69) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint16_t *)self + 86) = 0;
  *((uint16_t *)self + 87) = 0x8000;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0x80000000;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0x80000000;
  *((uint32_t *)self + 53) = 0;
  *((uint16_t *)self + 108) = 0;
  *((uint8_t *)self + 218) = 3;
  *((uint8_t *)self + 219) = 1;
  hkpMotion::Construct((hkpEntity::Self *)((char *)self + 224));
  *((uint32_t *)self + 126) = 0;
  *((uint32_t *)self + 128) = 0;
  *((uint32_t *)self + 56) = ((uint32_t)(uintptr_t)&off_209EA08);
  *((uint16_t *)self + 258) = 0;
  *((uint16_t *)self + 259) = 0x8000;
  *((uint32_t *)self + 130) = 0;
  *((uint16_t *)self + 262) = 0;
  *((uint16_t *)self + 263) = 0x8000;
  *((uint32_t *)self + 132) = 0;
  *((uint16_t *)self + 82) = -1;
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 133) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 52) = -1;
  *((uint32_t *)self + 40) = 0;
  *((uint8_t *)self + 205) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 38) = 1065353216;
  *((uint32_t *)self + 134) = -1;
}



// ============================================================================
// Address:   0x1731a00 (size: 492 bytes)
// Symbol:    _ZN9hkpEntityC2E24hkFinishLoadedObjectFlag
// Demangled: hkpEntity::hkpEntity(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN9hkpEntityC1E24hkFinishLoadedObjectFlag'
void (**hkpEntity::Construct(int a1, int a2))(hkpKeyframedRigidMotion::Self * self)
{
  void (**result)(hkpKeyframedRigidMotion::Self *);
  bool v3; // cc

  hkpWorldObject::Construct(a1, a2);
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209EF88);
  *(uint16_t *)(a1 + 172) = 0;
  *(uint16_t *)(a1 + 174) = 0x8000;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0x80000000;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint32_t *)(a1 + 192) = 0;
  *(uint32_t *)(a1 + 196) = 0x80000000;
  *(uint32_t *)(a1 + 224) = ((uint32_t)(uintptr_t)&off_209F268);
  if ( a2 != 0 )
  {
    *(uint16_t *)(a1 + 510) = 16256;
    result = (void (**)(hkpKeyframedRigidMotion::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209EA08));
    v3 = *(uint8_t *)(a1 + 232) <= 7u;
    *(uint32_t *)(a1 + 224) = ((uint32_t)(uintptr_t)&off_209EA08);
    *(uint32_t *)(a1 + 512) = 0;
    *(uint16_t *)(a1 + 516) = 0;
    *(uint16_t *)(a1 + 518) = 0x8000;
    *(uint32_t *)(a1 + 520) = 0;
    *(uint16_t *)(a1 + 524) = 0;
    *(uint16_t *)(a1 + 526) = 0x8000;
    if ( v3 )
    {
      result = (void (**)(hkpKeyframedRigidMotion::Self *))((char *)dword_20B9FF4
                                                                    + (uint32_t)jpt_1731B09[*(uint8_t *)(a1 + 232)]);
      switch ( *(uint8_t *)(a1 + 232) )
      {
        case 0:
        case 1:
          return result;
        case 2:
          result = (void (**)(hkpKeyframedRigidMotion::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A0408));
          *(uint32_t *)(a1 + 224) = ((uint32_t)(uintptr_t)&off_20A0408);
          break;
        case 3:
          result = (void (**)(hkpKeyframedRigidMotion::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A0168));
          *(uint32_t *)(a1 + 224) = ((uint32_t)(uintptr_t)&off_20A0168);
          break;
        case 4:
          result = (void (**)(hkpKeyframedRigidMotion::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209FB68));
          *(uint32_t *)(a1 + 224) = ((uint32_t)(uintptr_t)&off_209FB68);
          break;
        case 5:
          result = (void (**)(hkpKeyframedRigidMotion::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A06A8));
          *(uint32_t *)(a1 + 224) = ((uint32_t)(uintptr_t)&off_20A06A8);
          break;
        case 6:
          result = (void (**)(hkpKeyframedRigidMotion::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209EEE8));
          *(uint32_t *)(a1 + 224) = ((uint32_t)(uintptr_t)&off_209EEE8);
          break;
        case 7:
          result = (void (**)(hkpKeyframedRigidMotion::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209F728));
          *(uint32_t *)(a1 + 224) = ((uint32_t)(uintptr_t)&off_209F728);
          break;
        default:
          abort();
      }
    }
  }
  else
  {
    *(uint32_t *)(a1 + 512) = 0;
    *(uint16_t *)(a1 + 516) = 0;
    *(uint32_t *)(a1 + 224) = ((uint32_t)(uintptr_t)&off_209EA08);
    *(uint16_t *)(a1 + 518) = 0x8000;
    *(uint32_t *)(a1 + 520) = 0;
    *(uint16_t *)(a1 + 524) = 0;
    *(uint16_t *)(a1 + 526) = 0x8000;
    return (void (**)(hkpKeyframedRigidMotion::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209EA08));
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpEntity::updateCachedAabb  (binary VA: 0x1731bf0)
// Original: hkpEntity::updateCachedAabb
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpEntity::updateCachedAabb(hkpEntity::Self *self)
{
  hkpEntity::Self *result;
  int v2;
  typedef hkpEntity::Self *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);

  result = self;
  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 && *((uint32_t *)self + 4) != 0 )
  {
    v3 = self;
    return (hkpEntity::Self *)hkpEntityAabbUtil::entityBatchRecalcAabb(*(uint32_t *)(v2 + 112), &v3, 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::setCachedShapeData  (binary VA: 0x1731c40)
// Original: hkpEntity::setCachedShapeData
// ----------------------------------------------------------------------------
void hkpEntity::setCachedShapeData(hkpEntity::Self *self, const hkpWorld::Self *a2, const hkpShape::Self *a3)
{
  int v3;
  int v4;
  int v5;
  bool v6;

  if ( *((uint32_t *)self + 21) != 0 )
    hkpCollidable::BoundingVolumeData::deallocate((hkpEntity::Self *)((char *)self + 48));
  if ( a2 != nullptr && a3 != nullptr && (uint8_t)(*((uint8_t *)a3 + 8) - 16) > 1u )
  {
    v3 = *(uint32_t *)(*((uint32_t *)a2 + 30) + 4 * *((uint8_t *)a3 + 8) + 272);
    if ( (v3 & 0x40000) != 0 )
    {
      v4 = G4_VCALL<int>(a3, 64);
      if ( *((uint8_t *)a3 + 8) == 8 )
        goto LABEL_11;
      goto LABEL_15;
    }
    if ( (v3 & 0x400000) != 0 )
    {
      v4 = G4_VCALL<int>(a3, 64);
      if ( (uint8_t)(*((uint8_t *)self + 232) - 4) > 1u )
      {
        if ( *((uint8_t *)a3 + 8) == 8 )
        {
LABEL_11:
          v5 = *((uint32_t *)a3 + 7);
          goto LABEL_12;
        }
LABEL_15:
        v5 = G4_VCALL<int>(v4, 8);
LABEL_12:
        hkpCollidable::BoundingVolumeData::allocate((hkpEntity::Self *)((char *)self + 48), v5);
        v6 = *((uint8_t *)self + 232) == 5;
        *((uint32_t *)self + 12) = 1;
        *((uint32_t *)self + 16) = 0;
        if ( v6 )
          hkpEntity::updateCachedAabb(self);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::addEntityListener  (binary VA: 0x1731d20)
// Original: hkpEntity::addEntityListener
// ----------------------------------------------------------------------------
int hkpEntity::addEntityListener(int a1, int a2)
{
  uint16_t *v2;
  uint16_t v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int result;
  int address;
  int v11;
  int v12;
  uint16_t v13;

  v2 = *(uint16_t **)(a1 + 532);
  if ( v2 == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v11 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
            *(uint32_t *)(*(uint32_t *)address + 44),
            16);
    *(uint32_t *)v11 = 0;
    *(uint16_t *)(v11 + 4) = 0;
    *(uint16_t *)(v11 + 6) = 0x8000;
    *(uint32_t *)(v11 + 8) = 0;
    *(uint16_t *)(v11 + 12) = 0;
    *(uint16_t *)(v11 + 14) = 0x8000;
    v2 = (uint16_t *)v11;
    *(uint32_t *)(a1 + 532) = v11;
  }
  v3 = v2[6];
  v4 = *((uint32_t **)v2 + 2);
  v5 = v3;
  v13 = v3;
  if ( v3 == 0 )
  {
LABEL_8:
    if ( v13 == (v2[7] & 0x3FFF) )
    {
      hkSmallArrayUtil::reserveMore((hkSmallArrayUtil::Self *)(v2 + 4), &loc_4, v12);
      result = (uint16_t)v2[6];
      v4 = *((uint32_t **)v2 + 2);
    }
    else
    {
      result = v13;
    }
    v2[6] = result + 1;
    v4[result] = a2;
    return result;
  }
  if ( *v4 != 0 )
  {
    v6 = v4 + 1;
    v7 = 0;
    while ( ++v7 < v5 )
    {
      v8 = v6++;
      if ( *(v6 - 1) == 0 )
        goto LABEL_12;
    }
    goto LABEL_8;
  }
  v8 = *((uint32_t **)v2 + 2);
LABEL_12:
  *v8 = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::removeEntityListener  (binary VA: 0x1731e40)
// Original: hkpEntity::removeEntityListener
// ----------------------------------------------------------------------------
int hkpEntity::removeEntityListener(int a1, int a2)
{
  int result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int address;

  result = *(uint32_t *)(a1 + 532);
  if ( result == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
               *(uint32_t *)(*(uint32_t *)address + 44),
               16);
    *(uint32_t *)result = 0;
    *(uint16_t *)(result + 4) = 0;
    *(uint16_t *)(result + 6) = 0x8000;
    *(uint32_t *)(result + 8) = 0;
    *(uint16_t *)(result + 12) = 0;
    *(uint16_t *)(result + 14) = 0x8000;
    *(uint32_t *)(a1 + 532) = result;
  }
  v3 = *(uint16_t *)(result + 12);
  v4 = *(uint32_t **)(result + 8);
  if ( *(uint16_t *)(result + 12) != 0 )
  {
    if ( *v4 == a2 )
    {
      v6 = *(uint32_t **)(result + 8);
      goto LABEL_9;
    }
    result = (int)(uintptr_t)(v4 + 1);
    v5 = 0;
    while ( ++v5 < v3 )
    {
      v6 = (uint32_t *)result;
      result += 4;
      if ( *(uint32_t *)(result - 4) == a2 )
        goto LABEL_9;
    }
  }
  v6 = v4 - 1;
LABEL_9:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::addEntityActivationListener  (binary VA: 0x1731f00)
// Original: hkpEntity::addEntityActivationListener
// ----------------------------------------------------------------------------
int hkpEntity::addEntityActivationListener(int a1, int a2)
{
  hkSmallArrayUtil::Self *v2;
  uint16_t v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int result;
  int address;
  int v11;
  int v12;
  uint16_t v13;

  v2 = *(hkSmallArrayUtil::Self **)(a1 + 532);
  if ( v2 == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v11 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
            *(uint32_t *)(*(uint32_t *)address + 44),
            16);
    *(uint32_t *)v11 = 0;
    *(uint16_t *)(v11 + 4) = 0;
    *(uint16_t *)(v11 + 6) = 0x8000;
    *(uint32_t *)(v11 + 8) = 0;
    *(uint16_t *)(v11 + 12) = 0;
    *(uint16_t *)(v11 + 14) = 0x8000;
    v2 = (hkSmallArrayUtil::Self *)v11;
    *(uint32_t *)(a1 + 532) = v11;
  }
  v3 = *((uint16_t *)v2 + 2);
  v4 = *(uint32_t **)v2;
  v5 = v3;
  v13 = v3;
  if ( v3 == 0 )
  {
LABEL_8:
    if ( v13 == (*((uint16_t *)v2 + 3) & 0x3FFF) )
    {
      hkSmallArrayUtil::reserveMore(v2, &loc_4, v12);
      result = *((uint16_t *)v2 + 2);
      v4 = *(uint32_t **)v2;
    }
    else
    {
      result = v13;
    }
    *((uint16_t *)v2 + 2) = result + 1;
    v4[result] = a2;
    return result;
  }
  if ( *v4 != 0 )
  {
    v6 = v4 + 1;
    v7 = 0;
    while ( ++v7 < v5 )
    {
      v8 = v6++;
      if ( *(v6 - 1) == 0 )
        goto LABEL_12;
    }
    goto LABEL_8;
  }
  v8 = *(uint32_t **)v2;
LABEL_12:
  *v8 = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::removeEntityActivationListener  (binary VA: 0x1732010)
// Original: hkpEntity::removeEntityActivationListener
// ----------------------------------------------------------------------------
uint32_t * hkpEntity::removeEntityActivationListener(int a1, int a2)
{
  uint32_t *result;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  result = *(uint32_t **)(a1 + 532);
  v3 = *((uint16_t *)result + 2);
  v4 = (uint32_t *)*result;
  if ( *((uint16_t *)result + 2) != 0 )
  {
    if ( *v4 == a2 )
    {
      v6 = (uint32_t *)*result;
      goto LABEL_7;
    }
    result = v4 + 1;
    v5 = 0;
    while ( ++v5 < v3 )
    {
      v6 = result++;
      if ( *(result - 1) == a2 )
        goto LABEL_7;
    }
  }
  v6 = v4 - 1;
LABEL_7:
  *v6 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::addContactListener  (binary VA: 0x1732060)
// Original: hkpEntity::addContactListener
// ----------------------------------------------------------------------------
int hkpEntity::addContactListener(int a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v10;

  v2 = a1;
  v3 = *(uint16_t *)(a1 + 516);
  v4 = *(uint32_t **)(a1 + 512);
  if ( (uint16_t)v3 == 0 )
  {
LABEL_7:
    if ( (uint16_t)v3 == (*(uint16_t *)(v2 + 518) & 0x3FFF) )
    {
      hkSmallArrayUtil::reserveMore((hkSmallArrayUtil::Self *)(a1 + 512), &loc_4, v10);
      v8 = a1;
      v3 = *(uint16_t *)(a1 + 516);
      v4 = *(uint32_t **)(a1 + 512);
    }
    else
    {
      v8 = a1;
    }
    *(uint16_t *)(v8 + 516) = v3 + 1;
    v4[v3] = a2;
    return a2;
  }
  if ( *v4 != 0 )
  {
    v5 = v4 + 1;
    v6 = 0;
    while ( ++v6 < (uint16_t)v3 )
    {
      v7 = v5++;
      if ( *(v5 - 1) == 0 )
        goto LABEL_11;
    }
    v2 = a1;
    goto LABEL_7;
  }
  v7 = *(uint32_t **)(a1 + 512);
LABEL_11:
  *v7 = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::removeContactListener  (binary VA: 0x1732120)
// Original: hkpEntity::removeContactListener
// ----------------------------------------------------------------------------
uint32_t * hkpEntity::removeContactListener(int a1, int a2)
{
  uint32_t *result;
  uint32_t *v3;
  int v4;
  uint32_t *v5;

  result = (uint32_t *)a1;
  v3 = *(uint32_t **)(a1 + 512);
  if ( *(uint16_t *)(a1 + 516) != 0 )
  {
    if ( *v3 == a2 )
    {
      v5 = *(uint32_t **)(a1 + 512);
      goto LABEL_7;
    }
    result = v3 + 1;
    v4 = 0;
    while ( ++v4 < *(uint16_t *)(a1 + 516) )
    {
      v5 = result++;
      if ( *(result - 1) == a2 )
        goto LABEL_7;
    }
  }
  v5 = v3 - 1;
LABEL_7:
  *v5 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::Destroy  (binary VA: 0x1732170)
// Original: hkpEntity::~hkpEntity
// ----------------------------------------------------------------------------
void hkpEntity::Destroy(hkpEntity::Self *self)
{
  int v1;
  unsigned int v2;
  int v3;
  int16_t v4; // bp
  int address;
  int16_t v6;
  int v7;
  int v8;
  int32_t v9; // kr00_4
  int32_t v10;
  int32_t v11; // ett
  int16_t v12; // di
  int v13;
  int v14;
  int16_t v15; // di
  int v16;
  int v17;
  int v18;
  int v19;
  int16_t v20; // di
  int v21;
  int v22;
  int v23;
  int v24;
  int32_t v25; // kr04_4
  int32_t v26;
  int32_t v27; // ett
  int v28;
  int v29;
  hkpEntity::Self *v30;
  int v31;
  int v32;

  v1 = *((uint32_t *)self + 37);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EF88);
  v2 = v1 & 0xFFFFFFFE;
  if ( v2 != 0 )
  {
    hkpEntity::removeContactListener((int)(uintptr_t)(self), v2 + 8);
    G4_VCALL<void>(v2, 4);
    *((uint32_t *)self + 37) = 0;
  }
  hkpEntityCallbackUtil::fireEntityDeleted(self, v30);
  v3 = *((uint32_t *)self + 133);
  if ( v3 != 0 )
  {
    v4 = *(uint16_t *)(v3 + 14);
    v31 = *(uint32_t *)(v3 + 8);
    if ( v4 < 0 )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    }
    else
    {
      v32 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v32 + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)v32 + 44),
        v31,
        4 * (v4 & 0x3FFF));
      address = v32;
    }
    v6 = *(uint16_t *)(v3 + 6);
    if ( v6 >= 0 )
      (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        *(uint32_t *)v3,
        4 * (v6 & 0x3FFF));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v3,
      16);
  }
  v7 = *((uint32_t *)self + 132);
  if ( v7 != 0 && *(uint16_t *)(v7 + 6) != 0 )
  {
    do
    {
      v9 = *(uint32_t *)(v7 + 4);
      HIWORD(v8) = HIWORD(v9);
      LOWORD(v8) = 0;
      v10 = v8 | (uint16_t)(v9 - 1);
      v11 = v9;
    }
    while ( v11 != __sync_val_compare_and_swap((volatile int32_t *)(v7 + 4), v11, v10) );
    if ( (uint16_t)v10 == 0 )
      G4_VCALL<void>(v7, 16);
  }
  v12 = *((uint16_t *)self + 263);
  *((uint32_t *)self + 132) = 0;
  v13 = *((uint32_t *)self + 130);
  if ( v12 >= 0 )
  {
    v14 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v14 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v14 + 44),
      v13,
      4 * (v12 & 0x3FFF));
  }
  v15 = *((uint16_t *)self + 259);
  v16 = *((uint32_t *)self + 128);
  if ( v15 >= 0 )
  {
    v17 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v17 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v17 + 44),
      v16,
      4 * (v15 & 0x3FFF));
  }
  *((uint32_t *)self + 56) = ((uint32_t)(uintptr_t)&off_209EA08);
  hkpKeyframedRigidMotion::Destroy((hkpEntity::Self *)((char *)self + 224));
  v18 = *((uint32_t *)self + 49);
  *((uint32_t *)self + 48) = 0;
  if ( v18 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 47),
      v18 & 0x3FFFFFFF);
  v19 = *((uint32_t *)self + 46);
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 49) = 0x80000000;
  *((uint32_t *)self + 45) = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 44),
      4 * v19);
  v20 = *((uint16_t *)self + 87);
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 46) = 0x80000000;
  v21 = *((uint32_t *)self + 42);
  if ( v20 >= 0 )
  {
    v22 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v22 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v22 + 44),
      v21,
      48 * (v20 & 0x3FFF));
  }
  v23 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F3C8);
  if ( v23 != 0 && *(uint16_t *)(v23 + 6) != 0 )
  {
    do
    {
      v25 = *(uint32_t *)(v23 + 4);
      HIWORD(v24) = HIWORD(v25);
      LOWORD(v24) = 0;
      v26 = v24 | (uint16_t)(v25 - 1);
      v27 = v25;
    }
    while ( v27 != __sync_val_compare_and_swap((volatile int32_t *)(v23 + 4), v27, v26) );
    if ( (uint16_t)v26 == 0 )
      G4_VCALL<void>(v23, 16);
  }
  v28 = *((uint32_t *)self + 33);
  *((uint32_t *)self + 32) = 0;
  if ( v28 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 31),
      16 * v28);
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 33) = 0x80000000;
  hkStringPtr::Destroy((hkpEntity::Self *)((char *)self + 120));
  v29 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 25) = 0;
  if ( v29 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 24),
      8 * v29);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::Destroy_ea1732520  (binary VA: 0x1732520)
// Original: hkpEntity::~hkpEntity
// ----------------------------------------------------------------------------
void hkpEntity::Destroy_ea1732520(hkpEntity::Self *self)
{
  int v1;
  int v2;

  hkpEntity::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 544;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::deallocateInternalArrays  (binary VA: 0x1732580)
// Original: hkpEntity::deallocateInternalArrays
// ----------------------------------------------------------------------------
int hkpEntity::deallocateInternalArrays(hkpEntity::Self *self)
{
  unsigned int v1;
  int result;
  int v3;
  uint32_t *v4;
  int v5;
  int16_t v6; // bp
  int v7;
  int v8;
  int *v9;
  int16_t v10;
  int v11;
  char v12;
  int v13;
  int *v14;
  int v15;
  int16_t v16;
  int v17;
  int v18;
  int16_t v19; // bp
  int v20;
  int16_t v21;
  int16_t v22; // di
  int v23;
  int v24;
  int v25;
  int16_t v26; // di
  int v27;
  int address;
  int v29;
  int16_t v30;
  int16_t v31;
  int v32;
  char v33;
  int v34;

  v1 = *((uint32_t *)self + 37) & 0xFFFFFFFE;
  if ( v1 != 0 )
  {
    hkpEntity::removeContactListener((int)(uintptr_t)(self), v1 + 8);
    G4_VCALL<void>(v1, 4);
    *((uint32_t *)self + 37) = 0;
  }
  if ( *((uint32_t *)self + 25) == 0 )
  {
    v29 = *((uint32_t *)self + 26);
    *((uint32_t *)self + 25) = 0;
    if ( v29 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 24),
        8 * v29);
    *((uint32_t *)self + 24) = 0;
    *((uint32_t *)self + 26) = 0x80000000;
  }
  if ( *((uint16_t *)self + 86) == 0 )
  {
    v26 = *((uint16_t *)self + 87);
    v27 = *((uint32_t *)self + 42);
    if ( v26 >= 0 )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v27,
        48 * (v26 & 0x3FFF));
      v26 = *((uint16_t *)self + 87);
    }
    *((uint32_t *)self + 42) = 0;
    *((uint16_t *)self + 86) = 0;
    *((uint16_t *)self + 87) = v26 & 0x4000 | 0x8000;
  }
  if ( *((uint32_t *)self + 45) == 0 )
  {
    v25 = *((uint32_t *)self + 46);
    *((uint32_t *)self + 45) = 0;
    if ( v25 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 44),
        4 * v25);
    *((uint32_t *)self + 44) = 0;
    *((uint32_t *)self + 46) = 0x80000000;
  }
  result = *((uint32_t *)self + 48);
  if ( result == 0 )
  {
    result = *((uint32_t *)self + 49);
    *((uint32_t *)self + 48) = 0;
    if ( result >= 0 )
      result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 *((uint32_t *)self + 47),
                 result & 0x3FFFFFFF);
    *((uint32_t *)self + 47) = 0;
    *((uint32_t *)self + 49) = 0x80000000;
  }
  v3 = *((uint16_t *)self + 258);
  v4 = *((uint32_t **)self + 128);
  if ( (uint16_t)v3 != 0 )
  {
    if ( *v4 != 0 )
      goto LABEL_15;
    v5 = v3 - 1;
    result = 0;
    while ( result != v5 )
    {
      if ( v4[++result] != 0 )
        goto LABEL_15;
    }
  }
  v6 = *((uint16_t *)self + 259);
  if ( v6 >= 0 )
  {
    v7 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    result = (*(int (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)v7 + 44) + 12))(
               *(uint32_t *)(*(uint32_t *)v7 + 44),
               v4,
               4 * (v6 & 0x3FFF));
    v6 = *((uint16_t *)self + 259);
  }
  *((uint32_t *)self + 128) = 0;
  *((uint16_t *)self + 258) = 0;
  *((uint16_t *)self + 259) = v6 & 0x4000 | 0x8000;
LABEL_15:
  v8 = *((uint32_t *)self + 133);
  if ( v8 == 0 )
  {
LABEL_39:
    *((uint32_t *)self + 133) = 0;
    goto LABEL_40;
  }
  v9 = *(int **)v8;
  if ( *(uint16_t *)(v8 + 4) != 0 )
  {
    result = *v9;
    if ( *v9 != 0 )
    {
LABEL_42:
      v12 = 1;
      goto LABEL_25;
    }
    result = 0;
    while ( ++result < *(uint16_t *)(v8 + 4) )
    {
      if ( v9[result] != 0 )
        goto LABEL_42;
    }
  }
  v10 = *(uint16_t *)(v8 + 6);
  if ( v10 >= 0 )
  {
    v30 = *(uint16_t *)(v8 + 6);
    v11 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    result = (*(int (**)(uint32_t, int *, int))(**(uint32_t **)(*(uint32_t *)v11 + 44) + 12))(
               *(uint32_t *)(*(uint32_t *)v11 + 44),
               v9,
               4 * (v30 & 0x3FFF));
    v10 = *(uint16_t *)(v8 + 6);
  }
  *(uint32_t *)v8 = 0;
  *(uint16_t *)(v8 + 4) = 0;
  *(uint16_t *)(v8 + 6) = v10 & 0x4000 | 0x8000;
  v8 = *((uint32_t *)self + 133);
  if ( v8 == 0 )
    goto LABEL_39;
  v12 = 0;
LABEL_25:
  v13 = *(uint16_t *)(v8 + 12);
  v14 = *(int **)(v8 + 8);
  if ( (uint16_t)v13 != 0 )
  {
    result = *v14;
    if ( *v14 != 0 )
      goto LABEL_40;
    v15 = v13 - 1;
    result = 0;
    while ( result != v15 )
    {
      if ( v14[++result] != 0 )
        goto LABEL_40;
    }
  }
  v16 = *(uint16_t *)(v8 + 14);
  if ( v16 >= 0 )
  {
    v33 = v12;
    v31 = *(uint16_t *)(v8 + 14);
    v17 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    result = (*(int (**)(uint32_t, int *, int))(**(uint32_t **)(*(uint32_t *)v17 + 44) + 12))(
               *(uint32_t *)(*(uint32_t *)v17 + 44),
               v14,
               4 * (v31 & 0x3FFF));
    v16 = *(uint16_t *)(v8 + 14);
    v12 = v33;
  }
  *(uint32_t *)(v8 + 8) = 0;
  *(uint16_t *)(v8 + 12) = 0;
  *(uint16_t *)(v8 + 14) = v16 & 0x4000 | 0x8000;
  if ( v12 == 0 )
  {
    v18 = *((uint32_t *)self + 133);
    if ( v18 != 0 )
    {
      v19 = *(uint16_t *)(v18 + 14);
      v32 = *(uint32_t *)(v18 + 8);
      if ( v19 < 0 )
      {
        v20 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      }
      else
      {
        v34 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v34 + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)v34 + 44),
          v32,
          4 * (v19 & 0x3FFF));
        v20 = v34;
      }
      v21 = *(uint16_t *)(v18 + 6);
      if ( v21 >= 0 )
        (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(*(uint32_t *)v20 + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)v20 + 44),
          *(uint32_t *)v18,
          4 * (v21 & 0x3FFF));
      result = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v20 + 44) + 12))(
                 *(uint32_t *)(*(uint32_t *)v20 + 44),
                 v18,
                 16);
    }
    goto LABEL_39;
  }
LABEL_40:
  if ( *((uint16_t *)self + 262) == 0 )
  {
    v22 = *((uint16_t *)self + 263);
    v23 = *((uint32_t *)self + 130);
    if ( v22 >= 0 )
    {
      v24 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      result = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v24 + 44) + 12))(
                 *(uint32_t *)(*(uint32_t *)v24 + 44),
                 v23,
                 4 * (v22 & 0x3FFF));
      v22 = *((uint16_t *)self + 263);
    }
    *((uint32_t *)self + 130) = 0;
    *((uint16_t *)self + 262) = 0;
    *((uint16_t *)self + 263) = v22 & 0x4000 | 0x8000;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::findContactMgrTo  (binary VA: 0x1732a90)
// Original: hkpEntity::findContactMgrTo
// ----------------------------------------------------------------------------
int hkpEntity::findContactMgrTo(hkpEntity::Self *self, const hkpEntity::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = *((uint32_t *)self + 25);
  if ( v2 <= 0 )
    return 0;
  v3 = *((uint32_t *)self + 24);
  if ( *(const hkpEntity::Self **)(v3 + 4) != (const hkpEntity::Self *)((char *)a2 + 16) )
  {
    v4 = v3 + 8;
    v5 = 0;
    while ( ++v5 != v2 )
    {
      v6 = v4;
      v4 += 8;
      if ( *(const hkpEntity::Self **)(v4 - 4) == (const hkpEntity::Self *)((char *)a2 + 16) )
        return *(uint32_t *)(*(uint32_t *)v6 + 8);
    }
    return 0;
  }
  v6 = *((uint32_t *)self + 24);
  return *(uint32_t *)(*(uint32_t *)v6 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::isActive  (binary VA: 0x1732ae0)
// Original: hkpEntity::isActive
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpEntity::isActive(hkpEntity::Self *self, int a2)
{
  hkpEntity::Self *result;
  int v3;

  result = self;
  v3 = *(uint32_t *)(a2 + 200);
  *(uint8_t *)self = v3 != 0 && (*(uint8_t *)(v3 + 38) & 4) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::activate  (binary VA: 0x1732b10)
// Original: hkpEntity::activate
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpEntity::activate(hkpEntity::Self *self)
{
  hkpWorld::Self *result;
  hkpWorldOperationUtil::Self *v2;
  uint8_t *v3;
  int16_t v4; // di
  int16_t v5; // di
  int v6;
  int v7;
  int v8;

  result = *((hkpWorld::Self **)self + 50);
  if ( (result == nullptr || (*((uint8_t *)result + 38) & 4) == 0) && *((uint8_t *)self + 232) != 5 )
  {
    v2 = *((hkpWorldOperationUtil::Self **)self + 2);
    if ( v2 != nullptr )
    {
      *((uint16_t *)self + 117) = 0;
      *((uint16_t *)self + 118) = 0;
      hkpWorldOperationUtil::markIslandActive(v2, result);
      v3 = *((uint8_t **)self + 2);
      v4 = v3[813];
      v8 = v3[814];
      if ( (uint8_t)(v3[815] & 3) < (uint8_t)(*((uint8_t *)self + 233) & 3) )
        v4 = ~v4;
      v5 = v4 << 14;
      v6 = v8 << 14;
      if ( v3[815] < (int)*((uint8_t *)self + 233) )
        v6 = ~v8 << 14;
      *((uint16_t *)self + 117) = v5 | *((uint16_t *)self + 117) & 0x3FFF;
      v7 = *((uint16_t *)self + 118);
      LOWORD(v7) = v7 & 0x3FFF;
      result = (hkpWorld::Self *)(v6 | v7);
      *((uint16_t *)self + 118) = (uint16_t)(uintptr_t)(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::requestDeactivation  (binary VA: 0x1732c00)
// Original: hkpEntity::requestDeactivation
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpEntity::requestDeactivation(hkpEntity::Self *self)
{
  hkpEntity::Self *result;
  int v2;

  result = self;
  v2 = *((uint32_t *)self + 50);
  if ( v2 != 0 && (*(uint8_t *)(v2 + 38) & 4) != 0 && *((uint8_t *)self + 233) != 0xFF )
    return (hkpEntity::Self *)hkpMotion::requestDeactivation((hkpEntity::Self *)((char *)self + 224));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::deactivate  (binary VA: 0x1732c40)
// Original: hkpEntity::deactivate
// ----------------------------------------------------------------------------
void hkpEntity::deactivate(hkpEntity::Self *self)
{
  int v1;
  char v2;
  int v3;
  int v4;
  int v5;
  int v6;
  hkpSimulationIsland::Self *v7;

  v1 = *((uint32_t *)self + 50);
  if ( v1 != 0 && (*(uint8_t *)(v1 + 38) & 4) != 0 )
  {
    v2 = *(uint8_t *)(v1 + 37);
    if ( (v2 & 4) != 0 || (v2 & 1) != 0 )
    {
      v3 = *((uint32_t *)self + 2);
      v4 = *(uint32_t *)(v3 + 176);
      *(uint32_t *)(v3 + 176) = 0;
      *(uint8_t *)(*((uint32_t *)self + 50) + 37) &= 0xF3u;
      *(uint8_t *)(*((uint32_t *)self + 50) + 37) = *(uint8_t *)(*((uint32_t *)self + 50) + 37) & 0xFC | 1;
      hkpWorldOperationUtil::splitSimulationIsland(*((hkpWorldOperationUtil::Self **)self + 2), *((hkpWorld::Self **)self + 50), v7);
      *(uint32_t *)(*((uint32_t *)self + 2) + 176) = v4;
      v1 = *((uint32_t *)self + 50);
    }
    if ( *(int *)(v1 + 80) > 0 )
    {
      v5 = 0;
      do
      {
        v6 = *(uint32_t *)(*(uint32_t *)(v1 + 76) + 4 * v5++);
        *(uint32_t *)(v6 + 476) = 2139095022;
        *(uint32_t *)(v6 + 492) = 2139095022;
        v1 = *((uint32_t *)self + 50);
      }
      while ( *(uint32_t *)(v1 + 80) > v5 );
    }
    hkpWorldOperationUtil::markIslandInactive(*((hkpWorldOperationUtil::Self **)self + 2), (hkpWorld::Self *)v1, v7);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::activateAsCriticalOperation  (binary VA: 0x1732d30)
// Original: hkpEntity::activateAsCriticalOperation
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpEntity::activateAsCriticalOperation(hkpEntity::Self *self)
{
  int v1;
  uint32_t v3[4];

  v1 = *((uint32_t *)self + 2);
  if ( v1 == 0 || *(uint32_t *)(v1 + 140) == 0 )
    return hkpEntity::activate(self);
  v3[1] = (uint32_t)(uintptr_t)(self);
  LOBYTE(v3[0]) = 34;
  return (hkpWorld::Self *)hkpWorld::queueOperation(v1, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::requestDeactivationAsCriticalOperation  (binary VA: 0x1732d90)
// Original: hkpEntity::requestDeactivationAsCriticalOperation
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpEntity::requestDeactivationAsCriticalOperation(hkpEntity::Self *self)
{
  int v1;
  uint32_t v3[4];

  v1 = *((uint32_t *)self + 2);
  if ( v1 == 0 || *(uint32_t *)(v1 + 140) == 0 )
    return hkpEntity::requestDeactivation(self);
  v3[1] = (uint32_t)(uintptr_t)(self);
  LOBYTE(v3[0]) = 35;
  return (hkpEntity::Self *)hkpWorld::queueOperation(v1, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::deactivateAsCriticalOperation  (binary VA: 0x1732df0)
// Original: hkpEntity::deactivateAsCriticalOperation
// ----------------------------------------------------------------------------
void hkpEntity::deactivateAsCriticalOperation(hkpEntity::Self *self)
{
  int v1;
  uint32_t v2[4];

  v1 = *((uint32_t *)self + 2);
  if ( v1 != 0 && *(uint32_t *)(v1 + 140) != 0 )
  {
    v2[1] = (uint32_t)(uintptr_t)(self);
    LOBYTE(v2[0]) = 36;
    hkpWorld::queueOperation(v1, v2);
  }
  else
  {
    hkpEntity::deactivate(self);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::getNumConstraints  (binary VA: 0x1732e50)
// Original: hkpEntity::getNumConstraints
// ----------------------------------------------------------------------------
int hkpEntity::getNumConstraints(hkpEntity::Self *self)
{
  return *((uint32_t *)self + 45) + *((uint16_t *)self + 86);
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::getConstraint  (binary VA: 0x1732e70)
// Original: hkpEntity::getConstraint
// ----------------------------------------------------------------------------
int hkpEntity::getConstraint(hkpEntity::Self *self, int a2)
{
  int v2;

  v2 = *((uint16_t *)self + 86);
  if ( a2 < v2 )
    return *(uint32_t *)(*((uint32_t *)self + 42) + 48 * a2);
  else
    return *(uint32_t *)(*((uint32_t *)self + 44) + 4 * (a2 - v2));
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::getConstraint_ea1732ea0  (binary VA: 0x1732ea0)
// Original: hkpEntity::getConstraint
// ----------------------------------------------------------------------------
int hkpEntity::getConstraint_ea1732ea0(hkpEntity::Self *self, int a2)
{
  int v2;

  v2 = *((uint16_t *)self + 86);
  if ( a2 < v2 )
    return *(uint32_t *)(*((uint32_t *)self + 42) + 48 * a2);
  else
    return *(uint32_t *)(*((uint32_t *)self + 44) + 4 * (a2 - v2));
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::getAllConstraints  (binary VA: 0x1732ed0)
// Original: hkpEntity::getAllConstraints
// ----------------------------------------------------------------------------
int hkpEntity::getAllConstraints(hkpEntity::Self *a1, int *a2)
{
  int NumConstraints;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpEntity::Self *v8;
  int v9;
  int result;
  int v11;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);

  NumConstraints = hkpEntity::getNumConstraints(a1);
  v3 = a2[2] & 0x3FFFFFFF;
  if ( NumConstraints > v3 )
  {
    v4 = 2 * v3;
    if ( NumConstraints >= v4 )
      v4 = NumConstraints;
    v12 = NumConstraints;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v13, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a2, v4, 4);
    NumConstraints = v12;
  }
  a2[1] = NumConstraints;
  if ( *((uint16_t *)a1 + 86) != 0 )
  {
    v5 = 0;
    do
    {
      v6 = v5 + 1;
      *(uint32_t *)(*a2 + 4 * v5) = *(uint32_t *)(*((uint32_t *)a1 + 42) + 48 * v5);
      v5 = v6;
    }
    while ( v6 < *((uint16_t *)a1 + 86) );
  }
  else
  {
    v6 = 0;
  }
  v7 = v6;
  v8 = a1;
  v9 = 4 * v7;
  for ( result = 0; *((uint32_t *)a1 + 45) > result; v9 += 4 )
  {
    v11 = *(uint32_t *)(*((uint32_t *)v8 + 44) + 4 * result++);
    *(uint32_t *)(*a2 + v9) = v11;
    v8 = a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::getConstraintMastersImpl  (binary VA: 0x1732fc0)
// Original: hkpEntity::getConstraintMastersImpl
// ----------------------------------------------------------------------------
char * hkpEntity::getConstraintMastersImpl(hkpEntity::Self *self)
{
  return (char *)self + 168;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::getConstraintMastersRwImpl  (binary VA: 0x1732fd0)
// Original: hkpEntity::getConstraintMastersRwImpl
// ----------------------------------------------------------------------------
char * hkpEntity::getConstraintMastersRwImpl(hkpEntity::Self *self)
{
  return (char *)self + 168;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::getConstraintSlavesImpl  (binary VA: 0x1732fe0)
// Original: hkpEntity::getConstraintSlavesImpl
// ----------------------------------------------------------------------------
char * hkpEntity::getConstraintSlavesImpl(hkpEntity::Self *self)
{
  return (char *)self + 176;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::sortConstraintsSlavesDeterministically  (binary VA: 0x1732ff0)
// Original: hkpEntity::sortConstraintsSlavesDeterministically
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpEntity::sortConstraintsSlavesDeterministically(int self)
{
  hkpEntity::Self *result;
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int16_t v8;
  int v9;
  int v10;

  result = (hkpEntity::Self *)self;
  if ( *(uint8_t *)(self + 232) == 5 )
  {
    result = *(hkpEntity::Self **)(self + 176);
    v2 = *(uint32_t *)(self + 180);
    v9 = v2;
    if ( v2 > 1 )
    {
      sub_1731700((int)(uintptr_t)(result), 0, v2 - 1, self);
      result = *(hkpEntity::Self **)(self + 180);
      v9 = (int)(uintptr_t)(result);
    }
    if ( v9 > 0 )
    {
      v10 = 0;
      do
      {
        while ( 1 )
        {
          v3 = *(uint32_t *)(*(uint32_t *)(self + 176) + 4 * v10);
          if ( *(uint16_t *)((char *)&dword_AC + (self ^ *(uint32_t *)(v3 + 24) ^ *(uint32_t *)(v3 + 20))) != 0 )
            break;
LABEL_11:
          ++v10;
          result = (hkpEntity::Self *)v9;
          if ( v10 >= v9 )
            return result;
        }
        v4 = *(uint32_t **)((char *)&dword_A8 + (self ^ *(uint32_t *)(v3 + 24) ^ *(uint32_t *)(v3 + 20)));
        if ( v3 != *v4 )
        {
          v5 = v4 + 12;
          v6 = 0;
          while ( ++v6 < *(uint16_t *)((char *)&dword_AC + (self ^ *(uint32_t *)(v3 + 24) ^ *(uint32_t *)(v3 + 20))) )
          {
            v7 = v5;
            v5 += 12;
            if ( v3 == *(v5 - 12) )
              goto LABEL_14;
          }
          goto LABEL_11;
        }
        v7 = *(uint32_t **)((char *)&dword_A8 + (self ^ *(uint32_t *)(v3 + 24) ^ *(uint32_t *)(v3 + 20)));
LABEL_14:
        v8 = v10++;
        *((uint16_t *)v7 + 17) = v8;
        v9 = *(uint32_t *)(self + 180);
        result = (hkpEntity::Self *)v9;
      }
      while ( v10 < v9 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::SmallArraySerializeOverrideType::staticClass  (binary VA: 0x1752b80)
// Original: hkpEntity::SmallArraySerializeOverrideType::staticClass
// ----------------------------------------------------------------------------
void * hkpEntity::SmallArraySerializeOverrideType::staticClass()
{
  return &hkpEntitySmallArraySerializeOverrideTypeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::SpuCollisionCallback::staticClass  (binary VA: 0x1752ba0)
// Original: hkpEntity::SpuCollisionCallback::staticClass
// ----------------------------------------------------------------------------
void * hkpEntity::SpuCollisionCallback::staticClass()
{
  return &hkpEntitySpuCollisionCallbackClass;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::ExtendedListeners::staticClass  (binary VA: 0x1752bc0)
// Original: hkpEntity::ExtendedListeners::staticClass
// ----------------------------------------------------------------------------
void * hkpEntity::ExtendedListeners::staticClass()
{
  return &hkpEntityExtendedListenersClass;
}

// ----------------------------------------------------------------------------
// Function: hkpEntity::staticClass  (binary VA: 0x1752be0)
// Original: hkpEntity::staticClass
// ----------------------------------------------------------------------------
void * hkpEntity::staticClass()
{
  return &hkpEntityClass;
}


