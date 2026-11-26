#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBallSoc.h"

// ----------------------------------------------------------------------------
// Function: hkpBallSocketConstraintAtom::staticClass  (binary VA: 0x1719930)
// Original: hkpBallSocketConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpBallSocketConstraintAtom::staticClass()
{
  return &hkpBallSocketConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::ConstraintInfo::staticClass  (binary VA: 0x175de60)
// Original: hkpBallSocketChainData::ConstraintInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpBallSocketChainData::ConstraintInfo::staticClass()
{
  return &hkpBallSocketChainDataConstraintInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::staticClass  (binary VA: 0x175de80)
// Original: hkpBallSocketChainData::staticClass
// ----------------------------------------------------------------------------
void * hkpBallSocketChainData::staticClass()
{
  return &hkpBallSocketChainDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::isValid  (binary VA: 0x17707c0)
// Original: hkpBallSocketChainData::isValid
// ----------------------------------------------------------------------------
hkpBallSocketChainData::Self * hkpBallSocketChainData::isValid(hkpBallSocketChainData::Self *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::getNumConstraintInfos  (binary VA: 0x17707d0)
// Original: hkpBallSocketChainData::getNumConstraintInfos
// ----------------------------------------------------------------------------
int hkpBallSocketChainData::getNumConstraintInfos(hkpBallSocketChainData::Self *self)
{
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::getType  (binary VA: 0x1770800)
// Original: hkpBallSocketChainData::getType
// ----------------------------------------------------------------------------
int hkpBallSocketChainData::getType()
{
  return 101;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::getConstraintInfo  (binary VA: 0x1770810)
// Original: hkpBallSocketChainData::getConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpBallSocketChainData::getConstraintInfo(int a1, uint32_t *a2)
{
  int v3;
  int v4;
  int v5;

  a2[4] = a1 + 16;
  a2[5] = 16;
  a2[2] = 0;
  a2[3] = 0;
  a2[1] = 16;
  *a2 = 0;
  v3 = *(uint32_t *)(a1 + 36);
  v4 = 288 * v3;
  v5 = 5 * v3 + 5;
  v3 *= 3;
  a2[2] = v3;
  a2[3] = v3;
  a2[1] = ((v4 + 4 * v5 + 47) & 0xFFFFFFF0) + 16;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::Destroy  (binary VA: 0x1770870)
// Original: hkpBallSocketChainData::~hkpBallSocketChainData
// ----------------------------------------------------------------------------
void hkpBallSocketChainData::Destroy(hkpBallSocketChainData::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0388);
  v1 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      32 * v1);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::getRuntimeInfo  (binary VA: 0x17708e0)
// Original: hkpBallSocketChainData::getRuntimeInfo
// ----------------------------------------------------------------------------
int hkpBallSocketChainData::getRuntimeInfo(int a1, char a2, int *a3)
{
  int v3;
  int64_t v4; // rax

  v3 = 0;
  v4 = (unsigned int)(uintptr_t)(a3);
  if ( a2 != 0 )
  {
    HIDWORD(v4) = 3 * *(uint32_t *)(a1 + 36);
    v3 = 24 * *(uint32_t *)(a1 + 36);
  }
  *a3 = v3;
  *(uint32_t *)(v4 + 4) = HIDWORD(v4);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::Destroy_ea1770910  (binary VA: 0x1770910)
// Original: hkpBallSocketChainData::~hkpBallSocketChainData
// ----------------------------------------------------------------------------
void hkpBallSocketChainData::Destroy_ea1770910(hkpBallSocketChainData::Self *self)
{
  int v1;
  int v2;

  hkpBallSocketChainData::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::Construct  (binary VA: 0x17709d0)
// Original: hkpBallSocketChainData::hkpBallSocketChainData
// ----------------------------------------------------------------------------
void hkpBallSocketChainData::Construct(hkpBallSocketChainData::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0388);
  *((uint16_t *)self + 8) = 1;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 11) = 1058642330;
  *((uint32_t *)self + 12) = 1065353216;
  *((uint32_t *)self + 13) = 843893965;
  *((uint32_t *)self + 14) = 1036831949;
  *((uint8_t *)self + 60) = 0;
  hkpBridgeConstraintAtom::init((hkpBallSocketChainData::Self *)((char *)self + 16), self);
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::Construct  (binary VA: 0x1770a50)
// Original: hkpBallSocketChainData::hkpBallSocketChainData
// ----------------------------------------------------------------------------
hkpBridgeConstraintAtom::Self * hkpBallSocketChainData::Construct(hkpConstraintData::Self **a1, int a2)
{
  hkpBridgeConstraintAtom::Self *result;

  hkpConstraintData::Construct(a1);
  result = (hkpBridgeConstraintAtom::Self *)((uint32_t)(uintptr_t)&off_20A0388);
  *a1 = (hkpConstraintData::Self *)((uint32_t)(uintptr_t)&off_20A0388);
  if ( a2 != 0 )
  {
    hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), a1[6]);
    return hkpBridgeConstraintAtom::init((hkpBridgeConstraintAtom::Self *)(a1 + 4), (hkpConstraintData::Self *)a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::addConstraintInfoInBodySpace  (binary VA: 0x1770ac0)
// Original: hkpBallSocketChainData::addConstraintInfoInBodySpace
// ----------------------------------------------------------------------------
uint32_t * hkpBallSocketChainData::addConstraintInfoInBodySpace(hkpBallSocketChainData::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  int v3;
  uint32_t *result;
  int v5;

  v3 = *((uint32_t *)self + 9);
  if ( v3 == (*((uint32_t *)self + 10) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpBallSocketChainData::Self *)((char *)self + 32),
      32,
      v5);
    v3 = *((uint32_t *)self + 9);
  }
  result = (uint32_t *)(32 * v3 + *((uint32_t *)self + 8));
  *((uint32_t *)self + 9) = v3 + 1;
  *result = *(uint32_t *)a2;
  result[1] = *((uint32_t *)a2 + 1);
  result[2] = *((uint32_t *)a2 + 2);
  result[3] = *((uint32_t *)a2 + 3);
  result[4] = *(uint32_t *)a3;
  result[5] = *((uint32_t *)a3 + 1);
  result[6] = *((uint32_t *)a3 + 2);
  result[7] = *((uint32_t *)a3 + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::useStabilizedCode  (binary VA: 0x1770b60)
// Original: hkpBallSocketChainData::useStabilizedCode
// ----------------------------------------------------------------------------
int hkpBallSocketChainData::useStabilizedCode(hkpBallSocketChainData::Self *self, int a2)
{
  *((uint8_t *)self + 60) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketChainData::buildJacobian  (binary VA: 0x1770b70)
// Original: hkpBallSocketChainData::buildJacobian
// ----------------------------------------------------------------------------
int hkpBallSocketChainData::buildJacobian(int a1, int a2, int a3)
{
  if ( *(uint8_t *)(a1 + 60) != 0 )
    return hkpBallSocketChainData::buildJacobian_Stabilized(a1, a2, a3);
  else
    return hkpBallSocketChainData::buildJacobian_Unstabilized(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpBallSocketDrawer::drawConstraint  (binary VA: 0x1af4640)
// Original: hkpBallSocketDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpBallSocketDrawer::drawConstraint(hkpBallSocketDrawer::Self *self, const hkpBallAndSocketConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  uint8_t v8[28];

  hkpPrimitiveDrawer::setDisplayHandler((hkpBallSocketDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters(self, a3, a4);
  hkVector4f::setTransformedPos(
    (hkpBallSocketDrawer::Self *)((char *)self + 80),
    a4,
    (const hkpBallAndSocketConstraintData::Self *)((char *)a2 + 48));
  hkVector4f::setTransformedPos(
    (hkpBallSocketDrawer::Self *)((char *)self + 64),
    a3,
    (const hkpBallAndSocketConstraintData::Self *)((char *)a2 + 32));
  hkpConstraintDrawer::drawPivots(self, a6, a7);
  hkpConstraintDrawer::drawBodyFrames(self, a6, a7);
  return (*(int (**)(uint8_t *, hkDebugDisplayHandler::Self *, char *, char *, int, int, int))(*(uint32_t *)a5 + 72))(
           v8,
           a5,
           (char *)self + 64,
           (char *)self + 80,
           -65536,
           a6,
           a7);
}


