#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMalleab.h"

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::staticClass  (binary VA: 0x172f1c0)
// Original: hkpMalleableConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpMalleableConstraintData::staticClass()
{
  return &hkpMalleableConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::getConstraintInfo  (binary VA: 0x1773a50)
// Original: hkpMalleableConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
int hkpMalleableConstraintData::getConstraintInfo(int a1, int a2)
{
  (*(void (**)(uint32_t, int))(**(uint32_t **)(a1 + 12) + 24))(*(uint32_t *)(a1 + 12), a2);
  *(uint32_t *)(a2 + 16) = a1 + 16;
  *(uint32_t *)(a2 + 20) = 16;
  return 16;
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::getType  (binary VA: 0x1773a90)
// Original: hkpMalleableConstraintData::getType
// ----------------------------------------------------------------------------
int hkpMalleableConstraintData::getType()
{
  return 13;
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::buildJacobian  (binary VA: 0x1773aa0)
// Original: hkpMalleableConstraintData::buildJacobian
// ----------------------------------------------------------------------------
int hkpMalleableConstraintData::buildJacobian(int a1, const void *a2, int a3, int a4, int a5, int a6, int a7, int a8, uint16_t *a9, int a10)
{
  int v10;
  bool v11;
  int savedregs;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[7];
  typedef float _g4_t_v20[27];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v19)) > _g4_s6 ? (36u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v20)) > _g4_s7 ? (64u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);

  v19[6] = 0;
  std::memcpy(v20, a2, 96);
  v10 = *(uint32_t *)(a1 + 12);
  v20[9] = v20[9] * *(float *)(a1 + 32);
  G4_VCALL<void>(v10, 24, v19, v13, v14, v15, v16, v17, v20, v18);
  v11 = *a9 == 29;
  savedregs = a3;
  if ( v11 )
    return (int)(uintptr_t)(hkSimpleContactConstraintDataBuildJacobian(a9, a3, 1, savedregs));
  else
    return hkSolverBuildJacobianFromAtomsNotContact(a9, a10, a3, savedregs);
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::Destroy  (binary VA: 0x1773b50)
// Original: hkpMalleableConstraintData::~hkpMalleableConstraintData
// ----------------------------------------------------------------------------
void hkpMalleableConstraintData::Destroy(hkpMalleableConstraintData::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1F88);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
      v4 = v2 | (uint16_t)(v3 - 1);
      v5 = v3;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
    if ( (uint16_t)v4 == 0 )
      G4_VCALL<void>(v1, 16);
  }
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::Destroy_ea1773bd0  (binary VA: 0x1773bd0)
// Original: hkpMalleableConstraintData::~hkpMalleableConstraintData
// ----------------------------------------------------------------------------
void hkpMalleableConstraintData::Destroy_ea1773bd0(hkpMalleableConstraintData::Self *self)
{
  int v1;
  int v2;

  hkpMalleableConstraintData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::Construct  (binary VA: 0x1773c30)
// Original: hkpMalleableConstraintData::hkpMalleableConstraintData
// ----------------------------------------------------------------------------
void hkpMalleableConstraintData::Construct(hkpMalleableConstraintData::Self *self, hkpConstraintData::Self *a2)
{
  hkpWrappedConstraintData::Construct(self, a2);
  *((uint16_t *)self + 8) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0528);
  *((uint32_t *)self + 8) = 1008981770;
  hkpBridgeConstraintAtom::init((hkpMalleableConstraintData::Self *)((char *)self + 16), self);
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::Construct  (binary VA: 0x1773c90)
// Original: hkpMalleableConstraintData::hkpMalleableConstraintData
// ----------------------------------------------------------------------------
hkpBridgeConstraintAtom::Self * hkpMalleableConstraintData::Construct(hkpConstraintData::Self **a1, int a2)
{
  hkpBridgeConstraintAtom::Self *result;

  hkpWrappedConstraintData::Construct((uint32_t *)a1);
  result = (hkpBridgeConstraintAtom::Self *)((uint32_t)(uintptr_t)&off_20A0528);
  *a1 = (hkpConstraintData::Self *)((uint32_t)(uintptr_t)&off_20A0528);
  if ( a2 != 0 )
  {
    hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), a1[6]);
    return hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), (hkpConstraintData::Self *)a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::setStrength  (binary VA: 0x1773d00)
// Original: hkpMalleableConstraintData::setStrength
// ----------------------------------------------------------------------------
hkpMalleableConstraintData::Self * hkpMalleableConstraintData::setStrength(hkpMalleableConstraintData::Self *self, float a2)
{
  *((float *)self + 8) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::getStrength  (binary VA: 0x1773d20)
// Original: hkpMalleableConstraintData::getStrength
// ----------------------------------------------------------------------------
long double hkpMalleableConstraintData::getStrength(hkpMalleableConstraintData::Self *self)
{
  return *((float *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: hkpMalleableConstraintData::deepClone  (binary VA: 0x1773d40)
// Original: hkpMalleableConstraintData::deepClone
// ----------------------------------------------------------------------------
hkpMalleableConstraintData::Self * hkpMalleableConstraintData::deepClone(hkpMalleableConstraintData::Self *self)
{
  hkpConstraintDataUtils::Self *v1;
  int v2;
  int address;
  hkpMalleableConstraintData::Self *v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  hkpConstraintData::Self *v10;
  float Strength;

  v1 = (hkpConstraintDataUtils::Self *)G4_VCALL<int>(self, 100);
  v2 = hkpConstraintDataUtils::deepClone(v1, v10);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (hkpMalleableConstraintData::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                       *(uint32_t *)(*(uint32_t *)address + 44),
                                       48);
  hkpMalleableConstraintData::Construct(v4, (hkpConstraintData::Self *)v2);
  if ( *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v6 = *(uint32_t *)(v2 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v8, v7) );
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  Strength = hkpMalleableConstraintData::getStrength(self);
  hkpMalleableConstraintData::setStrength(v4, Strength);
  return v4;
}


