#include "Core/Utils/DecompTypes.h"
#include "havok_internal_3.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_16C76F0  (binary VA: 0x16c76f0)
// Original: sub_16C76F0
// ----------------------------------------------------------------------------
void sub_16C76F0()
{
  dword_2125290[0] = 0;
  dword_2125294[0] = 1;
  dword_2125298 = 2;
  dword_212529C = 0;
  dword_21252A0 = 1;
  dword_21252A4 = 2;
}

// ----------------------------------------------------------------------------
// Function: nullsub_718  (binary VA: 0x16c9178)
// Original: nullsub_718
// ----------------------------------------------------------------------------
void nullsub_718()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_16C9180  (binary VA: 0x16c9180)
// Original: sub_16C9180
// ----------------------------------------------------------------------------
int sub_16C9180(int a1, int a2)
{
  int result;

  result = a1;
  if ( a2 != 0 )
  {
    *(uint16_t *)(a1 + 64) = 0;
    *(uint16_t *)(a1 + 66) = 0;
    *(uint32_t *)(a1 + 68) = 0;
    *(uint32_t *)(a1 + 72) = 0;
    *(uint32_t *)(a1 + 32) = 1;
    *(uint32_t *)(a1 + 48) = 0;
    *(uint8_t *)(a1 + 25) = -20;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_719  (binary VA: 0x16c91c8)
// Original: nullsub_719
// ----------------------------------------------------------------------------
void nullsub_719()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_16C91D0  (binary VA: 0x16c91d0)
// Original: sub_16C91D0
// ----------------------------------------------------------------------------
int sub_16C91D0(int a1, int a2)
{
  int result;

  result = a1;
  if ( a2 != 0 )
  {
    *(uint16_t *)(a1 + 32) = 0;
    *(uint16_t *)(a1 + 34) = 0;
    *(uint32_t *)(a1 + 36) = 0;
    *(uint32_t *)(a1 + 40) = 0;
    *(uint32_t *)a1 = 1;
    *(uint32_t *)(a1 + 16) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_16C9250  (binary VA: 0x16c9250)
// Original: sub_16C9250
// ----------------------------------------------------------------------------
uint32_t * sub_16C9250()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpCollidableBoundingVolumeDataClass,
    "hkpCollidableBoundingVolumeData",
    nullptr,
    44,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_203A000,
    10,
    nullptr,
    nullptr,
    0,
    1u);
  hkpCollidableBoundingVolumeDataTypeInfo = (uint32_t)(uintptr_t)("hkpCollidableBoundingVolumeData");
  *(uintptr_t *)(unk_2125314) = (uintptr_t)("!hkpCollidable::BoundingVolumeData");
  *(uintptr_t *)(unk_2125320) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2125324) = (uintptr_t)(44);
  *(uintptr_t *)(unk_2125318) = (uintptr_t)(sub_16C91D0);
  *(uintptr_t *)(unk_212531C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpCollidableClass,
    "hkpCollidable",
    (const hkClass::Self *)&hkpCdBodyClass,
    80,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_203A0F0,
    1,
    (const hkClassMember::Self *)&hkpCollidable::Members,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkpCollidableTypeInfo[0] = (uint32_t)(uintptr_t)("hkpCollidable");
  hkpCollidableTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpCollidable");
  hkpCollidableTypeInfo[4] = 0;
  hkpCollidableTypeInfo[5] = 80;
  hkpCollidableTypeInfo[2] = (uint32_t)(uintptr_t)(sub_16C9180);
  hkpCollidableTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkpCollidableTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: hkpBroadPhaseBorder::thunk_postSimulationCallback  (binary VA: 0x16c9650)
// Original: `non-virtual thunk to'hkpBroadPhaseBorder::postSimulationCallback
// ----------------------------------------------------------------------------
hkpBroadPhaseBorder::Self * hkpBroadPhaseBorder::thunk_postSimulationCallback(hkpBroadPhaseBorder::Self *self)
{
  return (hkpBroadPhaseBorder::Self *)(uintptr_t)(G4_MEM_CALL((uintptr_t)(hkpBroadPhaseBorder::postSimulationCallback), (hkpBroadPhaseBorder::Self *)((char *)self - 16)));
}

// ----------------------------------------------------------------------------
// Function: sub_172C9F0  (binary VA: 0x172c9f0)
// Original: sub_172C9F0
// ----------------------------------------------------------------------------
int sub_172C9F0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_172CA10  (binary VA: 0x172ca10)
// Original: sub_172CA10
// ----------------------------------------------------------------------------
int sub_172CA10(int a1, int a2)
{
  return ((hkpStaticCompoundShapeBreakableMaterial::Construct((uint32_t *)(uintptr_t)(a1))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_172CA60  (binary VA: 0x172ca60)
// Original: sub_172CA60
// ----------------------------------------------------------------------------
uint32_t * sub_172CA60()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpStaticCompoundShapeBreakableMaterialClass,
    "hkpStaticCompoundShapeBreakableMaterial",
    (const hkClass::Self *)&hkpBreakableMultiMaterialClass,
    36,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkpStaticCompoundShapeBreakableMaterial::Construct((uint32_t *)&v1);
  hkpStaticCompoundShapeBreakableMaterialTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpStaticCompoundShapeBreakableMaterial");
  hkpStaticCompoundShapeBreakableMaterialTypeInfo[2] = (uint32_t)(uintptr_t)(sub_172CA10);
  hkpStaticCompoundShapeBreakableMaterialTypeInfo[3] = (uint32_t)(uintptr_t)(sub_172C9F0);
  hkpStaticCompoundShapeBreakableMaterialTypeInfo[0] = (uint32_t)(uintptr_t)("hkpStaticCompoundShapeBreakableMaterial");
  hkpStaticCompoundShapeBreakableMaterialTypeInfo[4] = v1;
  hkpStaticCompoundShapeBreakableMaterialTypeInfo[5] = 36;
  return hkpStaticCompoundShapeBreakableMaterialTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_817  (binary VA: 0x172cb48)
// Original: nullsub_817
// ----------------------------------------------------------------------------
void nullsub_817()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_172CB50  (binary VA: 0x172cb50)
// Original: sub_172CB50
// ----------------------------------------------------------------------------
int sub_172CB50(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}



// ============================================================================
// Address:   0x172cb70 (size: 59 bytes)
// Symbol:    sub_172CB70
// Demangled: sub_172CB70
// ============================================================================
void (**sub_172CB70())(hkpSimpleShapePhantom::Self * self)
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkpWorldObject::Construct(&v1, 0);
  return (void (**)(hkpSimpleShapePhantom::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A04A8));
}


// ============================================================================
// Address:   0x172cbb0 (size: 149 bytes)
// Symbol:    sub_172CBB0
// Demangled: sub_172CBB0
// ============================================================================
void (**sub_172CBB0(uint32_t *a1, int a2))(hkpSimpleShapePhantom::Self * self)
{
  hkpWorldObject::Construct(a1, a2);
  a1[34] = 0;
  a1[35] = 0;
  a1[36] = 0x80000000;
  a1[37] = 0;
  a1[38] = 0;
  a1[39] = 0x80000000;
  *a1 = ((uint32_t)(uintptr_t)&off_20A04A8);
  a1[84] = 0;
  a1[85] = 0;
  a1[86] = 0x80000000;
  return (void (**)(hkpSimpleShapePhantom::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A04A8));
}


// ============================================================================
// Address:   0x172cc90 (size: 367 bytes)
// Symbol:    sub_172CC90
// Demangled: sub_172CC90
// ============================================================================
void (**sub_172CC90())(hkpSimpleShapePhantom::Self * self)
{
  void (**result)(hkpSimpleShapePhantom::Self *);

  hkClass::Construct(
    (hkClass::Self *)&hkpSimpleShapePhantomCollisionDetailClass,
    "hkpSimpleShapePhantomCollisionDetail",
    nullptr,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_209E900,
    1,
    nullptr,
    nullptr,
    1u,
    0);
  hkpSimpleShapePhantomCollisionDetailTypeInfo = (uint32_t)(uintptr_t)("hkpSimpleShapePhantomCollisionDetail");
  *(uintptr_t *)(unk_2128C14) = (uintptr_t)("!hkpSimpleShapePhantom::CollisionDetail");
  *(uintptr_t *)(unk_2128C18) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2128C20) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2128C24) = (uintptr_t)(4);
  *(uintptr_t *)(unk_2128C1C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpSimpleShapePhantomClass,
    "hkpSimpleShapePhantom",
    (const hkClass::Self *)&hkpShapePhantomClass,
    352,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpSimpleShapePhantom::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  result = sub_172CB70();
  hkpSimpleShapePhantomTypeInfo = (uint32_t)(uintptr_t)("hkpSimpleShapePhantom");
  *(uintptr_t *)(unk_2128BC4) = (uintptr_t)("!hkpSimpleShapePhantom");
  *(uintptr_t *)(unk_2128BD0) = (uintptr_t)(result);
  *(uintptr_t *)(unk_2128BD4) = (uintptr_t)(352);
  *(uintptr_t *)(unk_2128BC8) = (uintptr_t)(((void (** (*)(uint32_t *, int a2))(hkpSimpleShapePhantom::Self *))sub_172CBB0));
  *(uintptr_t *)(unk_2128BCC) = (uintptr_t)(sub_172CB50);
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_172CE20  (binary VA: 0x172ce20)
// Original: sub_172CE20
// ----------------------------------------------------------------------------
uint32_t * sub_172CE20(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A02C8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_172CE40  (binary VA: 0x172ce40)
// Original: sub_172CE40
// ----------------------------------------------------------------------------
int sub_172CE40(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_172CEE0  (binary VA: 0x172cee0)
// Original: sub_172CEE0
// ----------------------------------------------------------------------------
uint32_t * sub_172CEE0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpDefaultWorldMemoryWatchDogClass,
    "hkpDefaultWorldMemoryWatchDog",
    (const hkClass::Self *)&hkWorldMemoryAvailableWatchDogClass,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpDefaultWorldMemoryWatchDog::Members,
    1,
    nullptr,
    nullptr,
    0,
    1u);
  hkpDefaultWorldMemoryWatchDogTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpDefaultWorldMemoryWatchDog");
  hkpDefaultWorldMemoryWatchDogTypeInfo[2] = (uint32_t)(uintptr_t)(sub_172CE20);
  hkpDefaultWorldMemoryWatchDogTypeInfo[3] = (uint32_t)(uintptr_t)(sub_172CE40);
  hkpDefaultWorldMemoryWatchDogTypeInfo[0] = (uint32_t)(uintptr_t)("hkpDefaultWorldMemoryWatchDog");
  hkpDefaultWorldMemoryWatchDogTypeInfo[4] = ((uint32_t)(uintptr_t)&off_20A02C8);
  hkpDefaultWorldMemoryWatchDogTypeInfo[5] = 12;
  return hkpDefaultWorldMemoryWatchDogTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_172D650  (binary VA: 0x172d650)
// Original: sub_172D650
// ----------------------------------------------------------------------------
int sub_172D650(int a1, int a2)
{
  int result;

  result = a1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209F268);
  if ( a2 != 0 )
    *(uint16_t *)(a1 + 286) = 16256;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209FB68);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_172D690  (binary VA: 0x172d690)
// Original: sub_172D690
// ----------------------------------------------------------------------------
int sub_172D690(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_172D6B0  (binary VA: 0x172d6b0)
// Original: sub_172D6B0
// ----------------------------------------------------------------------------
int sub_172D6B0(int a1, int a2)
{
  int result;

  result = a1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209F268);
  if ( a2 != 0 )
    *(uint16_t *)(a1 + 286) = 16256;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209EA08);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_172D6F0  (binary VA: 0x172d6f0)
// Original: sub_172D6F0
// ----------------------------------------------------------------------------
int sub_172D6F0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_172D7F0  (binary VA: 0x172d7f0)
// Original: sub_172D7F0
// ----------------------------------------------------------------------------
uint32_t * sub_172D7F0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpKeyframedRigidMotionClass,
    "hkpKeyframedRigidMotion",
    (const hkClass::Self *)&hkpMotionClass,
    288,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  *(uintptr_t *)(unk_2128D34) = (uintptr_t)("!hkpKeyframedRigidMotion");
  *(uintptr_t *)(unk_2128D38) = (uintptr_t)(sub_172D650);
  *(uintptr_t *)(unk_2128D3C) = (uintptr_t)(sub_172D690);
  hkpKeyframedRigidMotionTypeInfo = (uint32_t)(uintptr_t)("hkpKeyframedRigidMotion");
  *(uintptr_t *)(unk_2128D40) = (uintptr_t)(((uint32_t)(uintptr_t)&off_209FB68));
  *(uintptr_t *)(unk_2128D44) = (uintptr_t)(288);
  hkClass::Construct(
    (hkClass::Self *)&hkpMaxSizeMotionClass,
    "hkpMaxSizeMotion",
    (const hkClass::Self *)&hkpKeyframedRigidMotionClass,
    288,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkpMaxSizeMotionTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpMaxSizeMotion");
  hkpMaxSizeMotionTypeInfo[2] = (uint32_t)(uintptr_t)(sub_172D6B0);
  hkpMaxSizeMotionTypeInfo[3] = (uint32_t)(uintptr_t)(sub_172D6F0);
  hkpMaxSizeMotionTypeInfo[0] = (uint32_t)(uintptr_t)("hkpMaxSizeMotion");
  hkpMaxSizeMotionTypeInfo[4] = ((uint32_t)(uintptr_t)&off_209EA08);
  hkpMaxSizeMotionTypeInfo[5] = 288;
  return hkpMaxSizeMotionTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_172D970  (binary VA: 0x172d970)
// Original: sub_172D970
// ----------------------------------------------------------------------------
uint32_t * sub_172D970(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20A0208);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_172D990  (binary VA: 0x172d990)
// Original: sub_172D990
// ----------------------------------------------------------------------------
int sub_172D990(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_172D9D0  (binary VA: 0x172d9d0)
// Original: sub_172D9D0
// ----------------------------------------------------------------------------
uint32_t * sub_172D9D0()
{
  *(uintptr_t *)(unk_20C7F98) = (uintptr_t)(hkpSimulationLastProcessingStepEnum[0]);
  hkClass::Construct(
    (hkClass::Self *)&hkpSimulationClass,
    "hkpSimulation",
    (const hkClass::Self *)&hkReferencedObjectClass,
    44,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_203B6E0,
    3,
    (const hkClassMember::Self *)&hkpSimulation::Members,
    9,
    nullptr,
    nullptr,
    1u,
    0);
  hkpSimulationTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpSimulation");
  hkpSimulationTypeInfo[2] = (uint32_t)(uintptr_t)(sub_172D970);
  hkpSimulationTypeInfo[3] = (uint32_t)(uintptr_t)(sub_172D990);
  hkpSimulationTypeInfo[0] = (uint32_t)(uintptr_t)("hkpSimulation");
  hkpSimulationTypeInfo[4] = ((uint32_t)(uintptr_t)&off_20A0208);
  hkpSimulationTypeInfo[5] = 44;
  return hkpSimulationTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_172DAB0  (binary VA: 0x172dab0)
// Original: sub_172DAB0
// ----------------------------------------------------------------------------
int sub_172DAB0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_172DAD0  (binary VA: 0x172dad0)
// Original: sub_172DAD0
// ----------------------------------------------------------------------------
int sub_172DAD0(int a1, int a2)
{
  return ((hkpRigidBody::Construct((uint32_t *)(uintptr_t)(a1), a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_172DB00  (binary VA: 0x172db00)
// Original: sub_172DB00
// ----------------------------------------------------------------------------
int sub_172DB00()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkpRigidBody::Construct((uint32_t *)&v1, 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_172DB60  (binary VA: 0x172db60)
// Original: sub_172DB60
// ----------------------------------------------------------------------------
int sub_172DB60()
{
  int result;

  hkClass::Construct(
    (hkClass::Self *)&hkpRigidBodyClass,
    "hkpRigidBody",
    (const hkClass::Self *)&hkpEntityClass,
    544,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  result = sub_172DB00();
  hkpRigidBodyTypeInfo = (uint32_t)(uintptr_t)("hkpRigidBody");
  *(uintptr_t *)(unk_2128E04) = (uintptr_t)("!hkpRigidBody");
  *(uintptr_t *)(unk_2128E10) = (uintptr_t)(result);
  *(uintptr_t *)(unk_2128E14) = (uintptr_t)(544);
  *(uintptr_t *)(unk_2128E08) = (uintptr_t)(sub_172DAD0);
  *(uintptr_t *)(unk_2128E0C) = (uintptr_t)(sub_172DAB0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_172DC30  (binary VA: 0x172dc30)
// Original: sub_172DC30
// ----------------------------------------------------------------------------
int sub_172DC30(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_172DC50  (binary VA: 0x172dc50)
// Original: sub_172DC50
// ----------------------------------------------------------------------------
int sub_172DC50(int a1, int a2)
{
  return (int)(uintptr_t)(hkpSimpleBreakableMaterial::Construct(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_172DCA0  (binary VA: 0x172dca0)
// Original: sub_172DCA0
// ----------------------------------------------------------------------------
uint32_t * sub_172DCA0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpSimpleBreakableMaterialClass,
    "hkpSimpleBreakableMaterial",
    (const hkClass::Self *)&hkpBreakableMaterialClass,
    20,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkpSimpleBreakableMaterial::Construct(&v1, 0);
  hkpSimpleBreakableMaterialTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpSimpleBreakableMaterial");
  hkpSimpleBreakableMaterialTypeInfo[2] = (uint32_t)(uintptr_t)(sub_172DC50);
  hkpSimpleBreakableMaterialTypeInfo[3] = (uint32_t)(uintptr_t)(sub_172DC30);
  hkpSimpleBreakableMaterialTypeInfo[0] = (uint32_t)(uintptr_t)("hkpSimpleBreakableMaterial");
  hkpSimpleBreakableMaterialTypeInfo[4] = v1;
  hkpSimpleBreakableMaterialTypeInfo[5] = 20;
  return hkpSimpleBreakableMaterialTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_172F170  (binary VA: 0x172f170)
// Original: sub_172F170
// ----------------------------------------------------------------------------
int sub_172F170(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_172F190  (binary VA: 0x172f190)
// Original: sub_172F190
// ----------------------------------------------------------------------------
int sub_172F190(hkpConstraintData::Self *a1, int a2)
{
  return (int)(uintptr_t)(hkpMalleableConstraintData::Construct(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_172F1E0  (binary VA: 0x172f1e0)
// Original: sub_172F1E0
// ----------------------------------------------------------------------------
uint32_t * sub_172F1E0()
{
  uint32_t v1[14];

  hkClass::Construct(
    (hkClass::Self *)&hkpMalleableConstraintDataClass,
    "hkpMalleableConstraintData",
    (const hkClass::Self *)&hkpWrappedConstraintDataClass,
    48,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_209EB00,
    2,
    nullptr,
    nullptr,
    0,
    1u);
  hkpMalleableConstraintData::Construct((hkpConstraintData::Self *)v1, 0);
  hkpMalleableConstraintDataTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpMalleableConstraintData");
  hkpMalleableConstraintDataTypeInfo[2] = (uint32_t)(uintptr_t)(sub_172F190);
  hkpMalleableConstraintDataTypeInfo[3] = (uint32_t)(uintptr_t)(sub_172F170);
  hkpMalleableConstraintDataTypeInfo[0] = (uint32_t)(uintptr_t)("hkpMalleableConstraintData");
  hkpMalleableConstraintDataTypeInfo[4] = v1[0];
  hkpMalleableConstraintDataTypeInfo[5] = 48;
  return hkpMalleableConstraintDataTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_172F2E0  (binary VA: 0x172f2e0)
// Original: sub_172F2E0
// ----------------------------------------------------------------------------
void sub_172F2E0()
{
  dword_20C8068 = (int)hkpMotionMotionTypeEnum;
  hkClass::Construct(
    (hkClass::Self *)&hkpMotionClass,
    "hkpMotion",
    (const hkClass::Self *)&hkReferencedObjectClass,
    288,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_203B78C,
    1,
    (const hkClassMember::Self *)&off_20C8060,
    12,
    nullptr,
    nullptr,
    0,
    3u);
}

// ----------------------------------------------------------------------------
// Function: sub_172F3B0  (binary VA: 0x172f3b0)
// Original: sub_172F3B0
// ----------------------------------------------------------------------------
void sub_172F3B0()
{
  byte_2128F90 = 4;
  hkClass::Construct(
    (hkClass::Self *)&hkpUnaryActionClass,
    "hkpUnaryAction",
    (const hkClass::Self *)&hkpActionClass,
    28,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpUnaryAction::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_1730580  (binary VA: 0x1730580)
// Original: sub_1730580
// ----------------------------------------------------------------------------
int sub_1730580(int a1, int a2)
{
  int result;

  result = a1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209F268);
  if ( a2 != 0 )
    *(uint16_t *)(a1 + 286) = 16256;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A0168);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17305C0  (binary VA: 0x17305c0)
// Original: sub_17305C0
// ----------------------------------------------------------------------------
int sub_17305C0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1730600  (binary VA: 0x1730600)
// Original: sub_1730600
// ----------------------------------------------------------------------------
uint32_t * sub_1730600()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpBoxMotionClass,
    "hkpBoxMotion",
    (const hkClass::Self *)&hkpMotionClass,
    288,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkpBoxMotionTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpBoxMotion");
  hkpBoxMotionTypeInfo[2] = (uint32_t)(uintptr_t)(sub_1730580);
  hkpBoxMotionTypeInfo[3] = (uint32_t)(uintptr_t)(sub_17305C0);
  hkpBoxMotionTypeInfo[0] = (uint32_t)(uintptr_t)("hkpBoxMotion");
  hkpBoxMotionTypeInfo[4] = ((uint32_t)(uintptr_t)&off_20A0168);
  hkpBoxMotionTypeInfo[5] = 288;
  return hkpBoxMotionTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1730700  (binary VA: 0x1730700)
// Original: sub_1730700
// ----------------------------------------------------------------------------
int sub_1730700(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}



// ============================================================================
// Address:   0x1730720 (size: 69 bytes)
// Symbol:    sub_1730720
// Demangled: sub_1730720
// ============================================================================
void (**sub_1730720(uint32_t *a1))(hkpConstraintChainInstanceAction::Self * self)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Construct();
  *a1 = ((uint32_t)(uintptr_t)&off_209FF68);
  return (void (**)(hkpConstraintChainInstanceAction::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209FF68));
}
// ----------------------------------------------------------------------------
// Function: sub_1730770  (binary VA: 0x1730770)
// Original: sub_1730770
// ----------------------------------------------------------------------------
int sub_1730770(int a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkStringPtr::Self *)(a1 + 20));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v2 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v1, 12, a1, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1730810  (binary VA: 0x1730810)
// Original: sub_1730810
// ----------------------------------------------------------------------------
uint32_t * sub_1730810()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpConstraintChainInstanceActionClass,
    "hkpConstraintChainInstanceAction",
    (const hkClass::Self *)&hkpActionClass,
    28,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_209EBE8,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkStringPtr::Construct();
  hkpConstraintChainInstanceActionTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpConstraintChainInstanceAction");
  hkpConstraintChainInstanceActionTypeInfo[2] = (uint32_t)(uintptr_t)(((void (** (*)(uint32_t *a1))(hkpConstraintChainInstanceAction::Self *))sub_1730720));
  hkpConstraintChainInstanceActionTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1730700);
  hkpConstraintChainInstanceActionTypeInfo[0] = (uint32_t)(uintptr_t)("hkpConstraintChainInstanceAction");
  hkpConstraintChainInstanceActionTypeInfo[4] = ((uint32_t)(uintptr_t)&off_209FF68);
  hkpConstraintChainInstanceActionTypeInfo[5] = 28;
  return hkpConstraintChainInstanceActionTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1730910  (binary VA: 0x1730910)
// Original: sub_1730910
// ----------------------------------------------------------------------------
int sub_1730910(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1730930  (binary VA: 0x1730930)
// Original: sub_1730930
// ----------------------------------------------------------------------------
int sub_1730930(hkpConstraintData::Self *a1, int a2)
{
  return (int)(uintptr_t)(hkpGenericConstraintData::Construct(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_1730980  (binary VA: 0x1730980)
// Original: sub_1730980
// ----------------------------------------------------------------------------
uint32_t * sub_1730980()
{
  uint32_t v1[26];

  hkClass::Construct(
    (hkClass::Self *)&hkpGenericConstraintDataClass,
    "hkpGenericConstraintData",
    (const hkClass::Self *)&hkpConstraintDataClass,
    96,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpGenericConstraintData::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpGenericConstraintData::Construct((hkpConstraintData::Self *)v1, 0);
  hkpGenericConstraintDataTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpGenericConstraintData");
  hkpGenericConstraintDataTypeInfo[2] = (uint32_t)(uintptr_t)(sub_1730930);
  hkpGenericConstraintDataTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1730910);
  hkpGenericConstraintDataTypeInfo[0] = (uint32_t)(uintptr_t)("hkpGenericConstraintData");
  hkpGenericConstraintDataTypeInfo[4] = v1[0];
  hkpGenericConstraintDataTypeInfo[5] = 96;
  return hkpGenericConstraintDataTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1730A90  (binary VA: 0x1730a90)
// Original: sub_1730A90
// ----------------------------------------------------------------------------
void sub_1730A90()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpPhantomClass,
    "hkpPhantom",
    (const hkClass::Self *)&hkpWorldObjectClass,
    160,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpPhantom::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_1730BB0  (binary VA: 0x1730bb0)
// Original: sub_1730BB0
// ----------------------------------------------------------------------------
uint32_t * sub_1730BB0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_209F548);
  a1[2] = ((uint32_t)(uintptr_t)&off_209F590);
  a1[3] = ((uint32_t)(uintptr_t)&off_209F5A4);
  a1[4] = (uint32_t)(uintptr_t)(&off_209F5C0);
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = -1;
  a1[5] = ((uint32_t)(uintptr_t)&off_209F5D4);
  a1[16] = ((uint32_t)(uintptr_t)&off_209F5E8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1730C10  (binary VA: 0x1730c10)
// Original: sub_1730C10
// ----------------------------------------------------------------------------
int sub_1730C10(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1730CA0  (binary VA: 0x1730ca0)
// Original: sub_1730CA0
// ----------------------------------------------------------------------------
uint32_t * sub_1730CA0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpConstraintCollisionFilterClass,
    "hkpConstraintCollisionFilter",
    (const hkClass::Self *)&hkpPairCollisionFilterClass,
    68,
    nullptr,
    1,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkpConstraintCollisionFilterTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpConstraintCollisionFilter");
  hkpConstraintCollisionFilterTypeInfo[2] = (uint32_t)(uintptr_t)(sub_1730BB0);
  hkpConstraintCollisionFilterTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1730C10);
  hkpConstraintCollisionFilterTypeInfo[0] = (uint32_t)(uintptr_t)("hkpConstraintCollisionFilter");
  hkpConstraintCollisionFilterTypeInfo[4] = ((uint32_t)(uintptr_t)&off_209F548);
  hkpConstraintCollisionFilterTypeInfo[5] = 68;
  return hkpConstraintCollisionFilterTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_818  (binary VA: 0x1730d78)
// Original: nullsub_818
// ----------------------------------------------------------------------------
void nullsub_818()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1730D80  (binary VA: 0x1730d80)
// Original: sub_1730D80
// ----------------------------------------------------------------------------
int sub_1730D80(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1730DA0  (binary VA: 0x1730da0)
// Original: sub_1730DA0
// ----------------------------------------------------------------------------
uint32_t * sub_1730DA0(uint32_t *a1)
{
  return hkpBreakableMultiMaterial::InverseMapping::Construct(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1730E30  (binary VA: 0x1730e30)
// Original: sub_1730E30
// ----------------------------------------------------------------------------
void sub_1730E30()
{
  typedef int _g4_t_v0;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v0)) > _g4_s0 ? (0u + sizeof(_g4_t_v0)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpBreakableMultiMaterialInverseMappingDescriptorClass,
    "hkpBreakableMultiMaterialInverseMappingDescriptor",
    nullptr,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_203B840,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpBreakableMultiMaterialInverseMappingDescriptorTypeInfo = (uint32_t)(uintptr_t)("hkpBreakableMultiMaterialInverseMappingDescriptor");
  *(uintptr_t *)(unk_21291F4) = (uintptr_t)("!hkpBreakableMultiMaterial::InverseMappingDescriptor");
  *(uintptr_t *)(unk_21291F8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2129200) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2129204) = (uintptr_t)(4);
  *(uintptr_t *)(unk_21291FC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpBreakableMultiMaterialInverseMappingClass,
    "hkpBreakableMultiMaterialInverseMapping",
    (const hkClass::Self *)&hkReferencedObjectClass,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_209ECA0,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkpBreakableMultiMaterial::InverseMapping::Construct((uint32_t *)&v0);
  *(uintptr_t *)(unk_2129194) = (uintptr_t)("!hkpBreakableMultiMaterial::InverseMapping");
  *(uintptr_t *)(unk_2129198) = (uintptr_t)(sub_1730DA0);
  *(uintptr_t *)(unk_212919C) = (uintptr_t)(sub_1730D80);
  hkpBreakableMultiMaterialInverseMappingTypeInfo = (uint32_t)(uintptr_t)("hkpBreakableMultiMaterialInverseMapping");
  *(uintptr_t *)(unk_21291A0) = (uintptr_t)(v0);
  *(uintptr_t *)(unk_21291A4) = (uintptr_t)(32);
  hkClass::Construct(
    (hkClass::Self *)&hkpBreakableMultiMaterialClass,
    "hkpBreakableMultiMaterial",
    (const hkClass::Self *)&hkpBreakableMaterialClass,
    36,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpBreakableMultiMaterial::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_1731060  (binary VA: 0x1731060)
// Original: sub_1731060
// ----------------------------------------------------------------------------
void sub_1731060()
{
  byte_21292A0 = 4;
  byte_20C81B0 = 0;
  byte_20C81B1 = 1;
  byte_20C81B2 = 0;
  byte_20C81C0 = 0;
  byte_20C81C1 = 0;
  byte_20C81C2 = 0;
  byte_2129290 = 3;
  byte_20C8190 = 1;
  byte_20C8191 = 1;
  byte_20C8192 = 0;
  byte_20C81A0 = 1;
  byte_20C81A1 = 0;
  byte_20C81A2 = 0;
  hkClass::Construct(
    (hkClass::Self *)&hkpBinaryActionClass,
    "hkpBinaryAction",
    (const hkClass::Self *)&hkpActionClass,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpBinaryAction::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: nullsub_819  (binary VA: 0x1731388)
// Original: nullsub_819
// ----------------------------------------------------------------------------
void nullsub_819()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1731390  (binary VA: 0x1731390)
// Original: sub_1731390
// ----------------------------------------------------------------------------
int sub_1731390(int a1, int a2)
{
  return hkpGenericConstraintDataScheme::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_17313C0  (binary VA: 0x17313c0)
// Original: sub_17313C0
// ----------------------------------------------------------------------------
int sub_17313C0(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = a1[15];
  a1[14] = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[13],
      4 * v1);
  v2 = a1[12];
  a1[13] = 0;
  a1[15] = 0x80000000;
  a1[11] = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[10],
      4 * v2);
  v3 = a1[9];
  a1[10] = 0;
  a1[12] = 0x80000000;
  a1[8] = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a1[7],
      4 * v3);
  result = a1[6];
  a1[7] = 0;
  a1[9] = 0x80000000;
  a1[5] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               a1[4],
               16 * result);
  a1[4] = 0;
  a1[6] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1731500  (binary VA: 0x1731500)
// Original: sub_1731500
// ----------------------------------------------------------------------------
uint32_t * sub_1731500()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpGenericConstraintDataSchemeConstraintInfoClass,
    "hkpGenericConstraintDataSchemeConstraintInfo",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_203B880,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkpGenericConstraintDataSchemeConstraintInfoTypeInfo = (uint32_t)(uintptr_t)("hkpGenericConstraintDataSchemeConstraintInfo");
  *(uintptr_t *)(unk_2129314) = (uintptr_t)("!hkpGenericConstraintDataScheme::ConstraintInfo");
  *(uintptr_t *)(unk_2129318) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2129320) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2129324) = (uintptr_t)(16);
  *(uintptr_t *)(unk_212931C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpGenericConstraintDataSchemeClass,
    "hkpGenericConstraintDataScheme",
    nullptr,
    64,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_209EE40,
    5,
    nullptr,
    nullptr,
    0,
    0);
  hkpGenericConstraintDataSchemeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpGenericConstraintDataScheme");
  hkpGenericConstraintDataSchemeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpGenericConstraintDataScheme");
  hkpGenericConstraintDataSchemeTypeInfo[4] = 0;
  hkpGenericConstraintDataSchemeTypeInfo[5] = 64;
  hkpGenericConstraintDataSchemeTypeInfo[2] = (uint32_t)(uintptr_t)(sub_1731390);
  hkpGenericConstraintDataSchemeTypeInfo[3] = (uint32_t)(uintptr_t)(sub_17313C0);
  return hkpGenericConstraintDataSchemeTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1731700  (binary VA: 0x1731700)
// Original: sub_1731700
// ----------------------------------------------------------------------------
int sub_1731700(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int *j;
  int v11;
  int result;
  int v13;
  uint32_t *v14;
  int v16;
  int i;
  uint32_t *v18;
  unsigned int v19;

  v4 = a2;
  v13 = a2;
  while ( 2 )
  {
    v5 = a1;
    v18 = *(uint32_t **)(a1 + 4 * ((v4 + a3) >> 1));
    v19 = v18[13];
    v6 = v4 + 1;
    v7 = a3;
    for ( i = v6; ; v6 = i )
    {
      v8 = v6;
      v9 = *(uint32_t **)(v5 + 4 * v6 - 4);
      v14 = v9;
      v16 = v8 - 1;
      if ( v9[13] >= v19
        && (v9[13] > v19 || *(uint32_t *)&dword_D0[a4 ^ v9[6] ^ v9[5]] >= *(uint32_t *)&dword_D0[a4 ^ v18[6] ^ v18[5]]) )
      {
        break;
      }
LABEL_19:
      ++i;
      v5 = a1;
    }
    for ( j = (int *)(a1 + 4 * v7); ; --j )
    {
      v11 = *j;
      if ( *(uint32_t *)(*j + 52) <= v19
        && (*(uint32_t *)(*j + 52) < v19
         || *(uint32_t *)&dword_D0[a4 ^ v18[6] ^ v18[5]] >= *(uint32_t *)&dword_D0[a4
                                                                             ^ *(uint32_t *)(v11 + 24)
                                                                             ^ *(uint32_t *)(v11 + 20)]) )
      {
        break;
      }
      --v7;
    }
    if ( v16 <= v7 )
    {
      if ( v16 != v7 )
      {
        *j = (int)(uintptr_t)(v14);
        *(uint32_t *)(a1 + 4 * i - 4) = v11;
      }
      --v7;
      v16 = i;
      if ( v7 >= i )
      {
        v19 = v18[13];
        goto LABEL_19;
      }
    }
    if ( v13 < v7 )
    {
      sub_1731700(v7, a4);
      result = v16;
      if ( a3 > v16 )
      {
LABEL_14:
        v13 = result;
        v4 = result;
        continue;
      }
    }
    else
    {
      result = v16;
      if ( a3 > v16 )
        goto LABEL_14;
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1733120  (binary VA: 0x1733120)
// Original: sub_1733120
// ----------------------------------------------------------------------------
void sub_1733120()
{
  hkClass::Construct(
    (hkClass::Self *)&hkpWorldObjectClass,
    "hkpWorldObject",
    (const hkClass::Self *)&hkReferencedObjectClass,
    136,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_203B8E0,
    2,
    (const hkClassMember::Self *)&hkpWorldObject::Members,
    6,
    &unk_1D17A04,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_17332F0  (binary VA: 0x17332f0)
// Original: sub_17332F0
// ----------------------------------------------------------------------------
char * sub_17332F0(char *a1, uint32_t *a2, hkpPhysicsSystem::Self *a3)
{
  int v3;
  int v4;
  int i;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  char v11;
  hkpRigidBody::Self *v13;
  int *v14;
  bool v17;

  v3 = a2[8];
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 80);
    if ( v4 > 0 )
    {
      for ( i = 0; i < v4; ++i )
      {
        v6 = *(uint32_t *)(v3 + 76);
        if ( i != 0 || *(uint32_t *)(*(uint32_t *)v6 + 16) != 0 )
        {
          hkpPhysicsSystem::addRigidBody(a3, *(hkpRigidBody::Self **)(v6 + 4 * i));
          v4 = *(uint32_t *)(v3 + 80);
        }
      }
    }
    v17 = v4 > 0;
  }
  else
  {
    v17 = false;
  }
  v7 = (int *)a2[13];
  v8 = a2[14];
  v14 = v7;
  if ( 4 * v8 != 0 )
  {
    do
    {
      v9 = *v14;
      if ( *(int *)(*v14 + 80) > 0 )
      {
        v10 = 0;
        do
        {
          v13 = *(hkpRigidBody::Self **)(*(uint32_t *)(v9 + 76) + 4 * v10++);
          hkpPhysicsSystem::addRigidBody(a3, v13);
        }
        while ( *(uint32_t *)(v9 + 80) > v10 );
        v7 = (int *)a2[13];
        v8 = a2[14];
      }
      ++v14;
    }
    while ( v14 != &v7[v8] );
  }
  v11 = 1;
  if ( v8 <= 0 )
    v11 = v17;
  *a1 = v11;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1733520  (binary VA: 0x1733520)
// Original: sub_1733520
// ----------------------------------------------------------------------------
int sub_1733520(int a1)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;
  int32_t v13; // kr08_4
  int32_t v14;
  int32_t v15; // ett
  int v16;
  int v17;

  v1 = *(uint32_t *)(a1 + 104);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20550C8);
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
  v6 = *(uint32_t *)(a1 + 88);
  *(uint32_t *)(a1 + 104) = 0;
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
  {
    do
    {
      v8 = *(uint32_t *)(v6 + 4);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(v6, 16);
  }
  v11 = *(uint32_t *)(a1 + 84);
  *(uint32_t *)(a1 + 88) = 0;
  if ( v11 != 0 && *(uint16_t *)(v11 + 6) != 0 )
  {
    do
    {
      v13 = *(uint32_t *)(v11 + 4);
      HIWORD(v12) = HIWORD(v13);
      LOWORD(v12) = 0;
      v14 = v12 | (uint16_t)(v13 - 1);
      v15 = v13;
    }
    while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v15, v14) );
    if ( (uint16_t)v14 == 0 )
      G4_VCALL<void>(v11, 16);
  }
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v16 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v17 = 240;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v17 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v16, 12, a1, v17);
}

// ----------------------------------------------------------------------------
// Function: sub_1735010  (binary VA: 0x1735010)
// Original: sub_1735010
// ----------------------------------------------------------------------------
int sub_1735010(hkpWorld::Self *a1, hkpPhysicsSystem::Self *a2)
{
  int result;
  int v4;
  int v5;
  int i;
  int v7;
  hkpPhantom::Self *v8;

  result = hkpWorld::getBroadPhaseBorder(a1);
  v4 = result;
  if ( result != 0 )
  {
    v5 = *((uint32_t *)a1 + 70);
    for ( i = 0; i < v5; ++i )
    {
      v7 = *(uint32_t *)(*((uint32_t *)a1 + 69) + 4 * i);
      if ( *(uint32_t *)(v4 + 24) != v7
        && *(uint32_t *)(v4 + 28) != v7
        && *(uint32_t *)(v4 + 32) != v7
        && *(uint32_t *)(v4 + 36) != v7
        && *(uint32_t *)(v4 + 40) != v7
        && *(uint32_t *)(v4 + 44) != v7 )
      {
        result = hkpPhysicsSystem::addPhantom(a2, *(hkpPhantom::Self **)(*((uint32_t *)a1 + 69) + 4 * i));
        v5 = *((uint32_t *)a1 + 70);
      }
    }
  }
  else if ( *((int *)a1 + 70) > 0 )
  {
    do
    {
      v8 = *(hkpPhantom::Self **)(*((uint32_t *)a1 + 69) + 4 * v4++);
      result = hkpPhysicsSystem::addPhantom(a2, v8);
    }
    while ( v4 < *((uint32_t *)a1 + 70) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldExtension::requireExtension_hkpCollisionCallbackUtil_5553e9  (binary VA: 0x173cd50)
// Original: hkpWorldExtension::requireExtension<hkpCollisionCallbackUtil>
// ----------------------------------------------------------------------------
void hkpWorldExtension::requireExtension_hkpCollisionCallbackUtil_5553e9(hkpWorldExtension::Self *self)
{
  int WorldExtension;
  int address;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett

  WorldExtension = hkpWorld::findWorldExtension(self, 1001);
  if ( WorldExtension == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    WorldExtension = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)address + 44),
                       80);
    hkpWorldExtension::Construct((hkpWorldExtension::Self *)WorldExtension, 1001);
    *(uint32_t *)(WorldExtension + 20) = ((uint32_t)(uintptr_t)&off_20A09F4);
    *(uint32_t *)WorldExtension = ((uint32_t)(uintptr_t)&off_20A09C8);
    hkpEndOfStepCallbackUtil::Construct((hkpEndOfStepCallbackUtil::Self *)(WorldExtension + 24));
    hkpWorld::addWorldExtension(self, (hkpWorldExtension::Self *)WorldExtension);
    if ( *(uint16_t *)(WorldExtension + 6) != 0 )
    {
      do
      {
        v4 = *(uint32_t *)(WorldExtension + 4);
        HIWORD(v3) = HIWORD(v4);
        LOWORD(v3) = 0;
        v5 = v3 | (uint16_t)(v4 - 1);
        v6 = v4;
      }
      while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(WorldExtension + 4), v6, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(WorldExtension, 16);
    }
  }
  ++*(uint16_t *)(WorldExtension + 16);
}

// ----------------------------------------------------------------------------
// Function: sub_173CE30  (binary VA: 0x173ce30)
// Original: sub_173CE30
// ----------------------------------------------------------------------------
uint8_t * sub_173CE30()
{
  hkpWorld::m_forceMultithreadedSimulation[0] = 0;
  return (uint8_t *)(hkpWorld::m_forceMultithreadedSimulation);
}

// ----------------------------------------------------------------------------
// Function: sub_1740690  (binary VA: 0x1740690)
// Original: sub_1740690
// ----------------------------------------------------------------------------
bool * sub_1740690(bool *a1, int a2, int a3)
{
  *a1 = *(uint32_t *)(a2 + 208) < *(uint32_t *)(a3 + 208);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_17406B0  (binary VA: 0x17406b0)
// Original: sub_17406B0
// ----------------------------------------------------------------------------
uint8_t * sub_17406B0(uint8_t *a1, int a2, int a3)
{
  uint8_t *result;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;

  result = a1;
  v4 = *(uint32_t *)(a2 + 48);
  v5 = *(uint32_t *)(v4 + 4 * *(uint8_t *)(v4 + 26) + 4);
  v6 = *(uint32_t *)(a3 + 48);
  v7 = *(uint32_t *)(*(uint32_t *)(v6 + 4 * *(uint8_t *)(v6 + 26) + 4) + 208);
  *a1 = *(uint32_t *)(v5 + 208) < v7 || *(uint32_t *)(v5 + 208) == v7 && v4 < v6;
  return result;
}



// ============================================================================
// Address:   0x1743ee0 (size: 327 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIP21hkpConstraintInstancePF6hkBoolPKS1_S5_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkpConstraintInstance *,hkBool (*)(hkpConstraintInstance const*,hkpConstraintInstance const*)>(hkpConstraintInstance * *,int,int,hkBool (*)(hkpConstraintInstance const*,hkpConstraintInstance const*))
// ============================================================================
int hkAlgorithm::quickSortRecursive_eb5d10(
        int a1,
        int a2,
        int a3,
        void (*a4)(uint8_t *))
{
  int i;
  int v5;
  int v6;
  uint32_t *v7;
  int result;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_j;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef void (*_g4_t_v17)(uint8_t *);
  typedef uint8_t _g4_t_v18[9];
  typedef int *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_j)) > _g4_s4 ? (16u + sizeof(_g4_t_j)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v16)) > _g4_s6 ? (20u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v18)) > _g4_s8 ? (39u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v19)) > _g4_s9 ? (48u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 39u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  v19 = &a1;
  v12 = a1;
  v11 = a2;
  v10 = a3;
  v17 = a4;
  for ( i = a2; ; i = result )
  {
    v5 = v10;
    v6 = i + 1;
    for ( j = i + 1; ; v6 = j )
    {
      v13 = v6 - 1;
      v17(v18);
      if ( v18[0] == 0 )
      {
        v7 = (uint32_t *)(v12 + 4 * v5);
        while ( 1 )
        {
          v15 = v7--;
          v17(v18);
          if ( v18[0] == 0 )
            break;
          --v5;
        }
        if ( v13 > v5 )
          break;
        if ( v13 != v5 )
        {
          v9 = v15;
          v16 = *v15;
          *v9 = *(uint32_t *)(v12 + 4 * j - 4);
          *(uint32_t *)(v12 + 4 * j - 4) = v16;
        }
        --v5;
        v13 = j;
        if ( v5 < j )
          break;
      }
      ++j;
    }
    if ( v11 < v5 )
      break;
    result = v13;
    if ( v10 <= v13 )
      return result;
LABEL_10:
    v11 = result;
  }
  hkAlgorithm::quickSortRecursive_eb5d10(
    v12,
    v11,
    v5,
    v17);
  result = v13;
  if ( v10 > v13 )
    goto LABEL_10;
  return result;
}


// ============================================================================
// Address:   0x1744030 (size: 327 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIP9hkpEntityPF6hkBoolPKS1_S5_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkpEntity *,hkBool (*)(hkpEntity const*,hkpEntity const*)>(hkpEntity * *,int,int,hkBool (*)(hkpEntity const*,hkpEntity const*))
// ============================================================================
int hkAlgorithm::quickSortRecursive_2e6314(
        int a1,
        int a2,
        int a3,
        void (*a4)(uint8_t *))
{
  int i;
  int v5;
  int v6;
  uint32_t *v7;
  int result;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_j;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef void (*_g4_t_v17)(uint8_t *);
  typedef uint8_t _g4_t_v18[9];
  typedef int *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_j)) > _g4_s4 ? (16u + sizeof(_g4_t_j)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v16)) > _g4_s6 ? (20u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v18)) > _g4_s8 ? (39u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v19)) > _g4_s9 ? (48u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 39u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  v19 = &a1;
  v12 = a1;
  v11 = a2;
  v10 = a3;
  v17 = a4;
  for ( i = a2; ; i = result )
  {
    v5 = v10;
    v6 = i + 1;
    for ( j = i + 1; ; v6 = j )
    {
      v13 = v6 - 1;
      v17(v18);
      if ( v18[0] == 0 )
      {
        v7 = (uint32_t *)(v12 + 4 * v5);
        while ( 1 )
        {
          v15 = v7--;
          v17(v18);
          if ( v18[0] == 0 )
            break;
          --v5;
        }
        if ( v13 > v5 )
          break;
        if ( v13 != v5 )
        {
          v9 = v15;
          v16 = *v15;
          *v9 = *(uint32_t *)(v12 + 4 * j - 4);
          *(uint32_t *)(v12 + 4 * j - 4) = v16;
        }
        --v5;
        v13 = j;
        if ( v5 < j )
          break;
      }
      ++j;
    }
    if ( v11 < v5 )
      break;
    result = v13;
    if ( v10 <= v13 )
      return result;
LABEL_10:
    v11 = result;
  }
  hkAlgorithm::quickSortRecursive_2e6314(v12, v11, v5, v17);
  result = v13;
  if ( v10 > v13 )
    goto LABEL_10;
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_17441E0  (binary VA: 0x17441e0)
// Original: sub_17441E0
// ----------------------------------------------------------------------------
void sub_17441E0()
{
  hkOptionalComponent::Construct(
    (hkOptionalComponent::Self *)&hkOptionalComponent_hkpContinuousSimulation,
    "hkpContinuousSimulation",
    &hkpSimulation::createContinuous,
    hkpContinuousSimulation::create);
}


