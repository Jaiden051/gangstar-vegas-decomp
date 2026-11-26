#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpConstra.h"

// ----------------------------------------------------------------------------
// Function: hkpConstraintMotor::Destroy  (binary VA: 0x1711d80)
// Original: hkpConstraintMotor::~hkpConstraintMotor
// ----------------------------------------------------------------------------
void hkpConstraintMotor::Destroy(hkpConstraintMotor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintMotor::Destroy_ea1711e60  (binary VA: 0x1711e60)
// Original: hkpConstraintMotor::~hkpConstraintMotor
// ----------------------------------------------------------------------------
void hkpConstraintMotor::Destroy_ea1711e60(hkpConstraintMotor::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintMotor::staticClass  (binary VA: 0x1713750)
// Original: hkpConstraintMotor::staticClass
// ----------------------------------------------------------------------------
void * hkpConstraintMotor::staticClass()
{
  return &hkpConstraintMotorClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::isBuildJacobianCallbackRequired  (binary VA: 0x1713820)
// Original: hkpConstraintData::isBuildJacobianCallbackRequired
// ----------------------------------------------------------------------------
hkpConstraintData::Self * hkpConstraintData::isBuildJacobianCallbackRequired(hkpConstraintData::Self *self)
{
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::staticClass  (binary VA: 0x1717620)
// Original: hkpConstraintData::staticClass
// ----------------------------------------------------------------------------
void * hkpConstraintData::staticClass()
{
  return &hkpConstraintDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintAtom::staticClass  (binary VA: 0x1719990)
// Original: hkpConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpConstraintAtom::staticClass()
{
  return &hkpConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::Destroy  (binary VA: 0x171b8b0)
// Original: hkpConstraintData::~hkpConstraintData
// ----------------------------------------------------------------------------
void hkpConstraintData::Destroy(hkpConstraintData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::getSolverResults  (binary VA: 0x171b8d0)
// Original: hkpConstraintData::getSolverResults
// ----------------------------------------------------------------------------
int hkpConstraintData::getSolverResults(int a1, int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::setMaximumLinearImpulse  (binary VA: 0x171b8e0)
// Original: hkpConstraintData::setMaximumLinearImpulse
// ----------------------------------------------------------------------------
void hkpConstraintData::setMaximumLinearImpulse()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::setMaximumAngularImpulse  (binary VA: 0x171b8f0)
// Original: hkpConstraintData::setMaximumAngularImpulse
// ----------------------------------------------------------------------------
void hkpConstraintData::setMaximumAngularImpulse()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::setBreachImpulse  (binary VA: 0x171b900)
// Original: hkpConstraintData::setBreachImpulse
// ----------------------------------------------------------------------------
void hkpConstraintData::setBreachImpulse()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::getMaximumLinearImpulse  (binary VA: 0x171b910)
// Original: hkpConstraintData::getMaximumLinearImpulse
// ----------------------------------------------------------------------------
long double hkpConstraintData::getMaximumLinearImpulse()
{
  return 3.40282e38f;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::getMaximumAngularImpulse  (binary VA: 0x171b930)
// Original: hkpConstraintData::getMaximumAngularImpulse
// ----------------------------------------------------------------------------
long double hkpConstraintData::getMaximumAngularImpulse()
{
  return 3.40282e38f;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::getBreachImpulse  (binary VA: 0x171b950)
// Original: hkpConstraintData::getBreachImpulse
// ----------------------------------------------------------------------------
long double hkpConstraintData::getBreachImpulse()
{
  return 3.40282e38f;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::getNotifiedBodyIndex  (binary VA: 0x171b970)
// Original: hkpConstraintData::getNotifiedBodyIndex
// ----------------------------------------------------------------------------
int hkpConstraintData::getNotifiedBodyIndex()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::setBodyToNotify  (binary VA: 0x171b980)
// Original: hkpConstraintData::setBodyToNotify
// ----------------------------------------------------------------------------
void hkpConstraintData::setBodyToNotify()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::setSolvingMethod  (binary VA: 0x171b990)
// Original: hkpConstraintData::setSolvingMethod
// ----------------------------------------------------------------------------
void hkpConstraintData::setSolvingMethod()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::setInertiaStabilizationFactor  (binary VA: 0x171b9a0)
// Original: hkpConstraintData::setInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpConstraintData::Self * hkpConstraintData::setInertiaStabilizationFactor(hkpConstraintData::Self *self, float a2)
{
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::getInertiaStabilizationFactor  (binary VA: 0x171b9b0)
// Original: hkpConstraintData::getInertiaStabilizationFactor
// ----------------------------------------------------------------------------
hkpConstraintData::Self * hkpConstraintData::getInertiaStabilizationFactor(hkpConstraintData::Self *self, float *a2)
{
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::buildJacobian  (binary VA: 0x171b9c0)
// Original: hkpConstraintData::buildJacobian
// ----------------------------------------------------------------------------
void hkpConstraintData::buildJacobian()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::buildJacobianCallback  (binary VA: 0x171b9d0)
// Original: hkpConstraintData::buildJacobianCallback
// ----------------------------------------------------------------------------
void hkpConstraintData::buildJacobianCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::addInstance  (binary VA: 0x171b9e0)
// Original: hkpConstraintData::addInstance
// ----------------------------------------------------------------------------
hkString::Self * hkpConstraintData::addInstance(int a1, hkString::Self *a2, size_t a3)
{
  hkString::Self *result;

  result = a2;
  if ( a2 != nullptr )
    return (hkString::Self *)hkString::memSet(a2, nullptr, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::Destroy_ea171ba20  (binary VA: 0x171ba20)
// Original: hkpConstraintData::~hkpConstraintData
// ----------------------------------------------------------------------------
void hkpConstraintData::Destroy_ea171ba20(hkpConstraintData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::Construct  (binary VA: 0x171ba80)
// Original: hkpConstraintData::hkpConstraintData
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintData::Construct(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_209D2A8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintData::getConstraintInfoUtil  (binary VA: 0x171baa0)
// Original: hkpConstraintData::getConstraintInfoUtil
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintData::getConstraintInfoUtil(unsigned int a1, int a2, uint32_t *a3)
{
  uint32_t *result;
  unsigned int v4;
  unsigned int v5;
  uint16_t v6;
  int v7;
  int v8;

  result = a3;
  v4 = a1;
  a3[5] = a2;
  a3[4] = a1;
  *a3 = 0;
  a3[2] = 0;
  a3[3] = 0;
  a3[1] = 16;
  v5 = a1 + a2;
LABEL_2:
  if ( v4 < v5 )
  {
LABEL_3:
    v6 = *(uint16_t *)v4;
    do
    {
      if ( v6 <= 0x22u )
      {
        while ( 2 )
        {
          switch ( v6 )
          {
            case 0u:
              v4 = (v4 + 15) & 0xFFFFFFF0;
              v6 = *(uint16_t *)v4;
              if ( *(uint16_t *)v4 > 0x22u )
                break;
              continue;
            case 1u:
            case 0x1Eu:
            case 0x1Fu:
            case 0x20u:
            case 0x21u:
            case 0x22u:
              v4 = a1 + a2;
              goto LABEL_2;
            case 2u:
              v4 += 144;
              goto LABEL_2;
            case 3u:
              v4 += 48;
              goto LABEL_2;
            case 4u:
              v4 += 112;
              goto LABEL_2;
            case 5u:
              a3[1] += 144;
              a3[2] += 3;
              a3[3] += 3;
              a3[6] -= 16;
              v4 += 16;
              goto LABEL_2;
            case 6u:
              a3[1] += 48;
              ++a3[2];
              ++a3[3];
              a3[6] += 64;
              v4 += 12;
              goto LABEL_2;
            case 7u:
            case 0xEu:
              a3[1] += 48;
              ++a3[2];
              ++a3[3];
              v4 += 16;
              goto LABEL_2;
            case 8u:
            case 9u:
            case 0x15u:
            case 0x16u:
              v4 += 16;
              a3[1] += 64;
              ++a3[2];
              ++a3[3];
              if ( v4 >= v5 )
                return result;
              goto LABEL_3;
            case 0xAu:
            case 0xCu:
              a3[1] += 64;
              a3[2] += 2;
              a3[3] += 2;
              v4 += 16;
              goto LABEL_2;
            case 0xBu:
              a3[1] += 80;
              a3[2] += 2;
              a3[3] += 2;
              v4 += 16;
              goto LABEL_2;
            case 0xDu:
              v8 = *(uint8_t *)(v4 + 3);
              v4 += 16;
              a3[2] += v8;
              a3[3] += v8;
              a3[1] += 32 * v8;
              goto LABEL_2;
            case 0xFu:
            case 0x10u:
              a3[1] += 48;
              ++a3[2];
              ++a3[3];
              v4 += 32;
              goto LABEL_2;
            case 0x11u:
              v7 = *(uint8_t *)(v4 + 4);
              v4 += 16;
              a3[2] += 2 * v7;
              a3[3] += 2 * v7;
              a3[1] += 48 * v7;
              goto LABEL_2;
            case 0x12u:
              a3[1] += 64;
              a3[2] += 2;
              a3[3] += 2;
              v4 += 32;
              goto LABEL_2;
            case 0x13u:
              a3[1] += 192;
              a3[2] += 6;
              a3[3] += 6;
              v4 += 80;
              goto LABEL_2;
            case 0x14u:
              a3[1] += 64;
              ++a3[2];
              ++a3[3];
              v4 += 64;
              goto LABEL_2;
            case 0x17u:
              v4 += 16;
              goto LABEL_2;
            case 0x18u:
              a3[1] += 48;
              a3[2] += 3;
              a3[3] += 3;
              a3[6] += 64;
              v4 += 16;
              goto LABEL_2;
            case 0x19u:
            case 0x1Au:
              a3[1] += 128;
              a3[2] += 3;
              a3[3] += 3;
              a3[6] += 64;
              v4 += 96;
              goto LABEL_2;
            case 0x1Bu:
            case 0x1Du:
              goto LABEL_15;
            case 0x1Cu:
              a3[1] += 112;
              a3[3] += 2;
              v4 += 40;
              goto LABEL_2;
            default:
              abort();
          }
          break;
        }
      }
LABEL_15:
      ;
    }
    while ( v5 > v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstanceAction::staticClass  (binary VA: 0x17307f0)
// Original: hkpConstraintChainInstanceAction::staticClass
// ----------------------------------------------------------------------------
void * hkpConstraintChainInstanceAction::staticClass()
{
  return &hkpConstraintChainInstanceActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintListener::Destroy  (binary VA: 0x1730b30)
// Original: hkpConstraintListener::~hkpConstraintListener
// ----------------------------------------------------------------------------
void hkpConstraintListener::Destroy(hkpConstraintListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EC68);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintListener::constraintAddedCallback  (binary VA: 0x1730b50)
// Original: hkpConstraintListener::constraintAddedCallback
// ----------------------------------------------------------------------------
void hkpConstraintListener::constraintAddedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintListener::constraintRemovedCallback  (binary VA: 0x1730b60)
// Original: hkpConstraintListener::constraintRemovedCallback
// ----------------------------------------------------------------------------
void hkpConstraintListener::constraintRemovedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintListener::constraintDeletedCallback  (binary VA: 0x1730b70)
// Original: hkpConstraintListener::constraintDeletedCallback
// ----------------------------------------------------------------------------
void hkpConstraintListener::constraintDeletedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintListener::constraintViolatedCallback  (binary VA: 0x1730b80)
// Original: hkpConstraintListener::constraintViolatedCallback
// ----------------------------------------------------------------------------
void hkpConstraintListener::constraintViolatedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintListener::constraintBreakingCallback  (binary VA: 0x1730b90)
// Original: hkpConstraintListener::constraintBreakingCallback
// ----------------------------------------------------------------------------
void hkpConstraintListener::constraintBreakingCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintListener::constraintRepairedCallback  (binary VA: 0x1730ba0)
// Original: hkpConstraintListener::constraintRepairedCallback
// ----------------------------------------------------------------------------
void hkpConstraintListener::constraintRepairedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintListener::Destroy_ea1730c30  (binary VA: 0x1730c30)
// Original: hkpConstraintListener::~hkpConstraintListener
// ----------------------------------------------------------------------------
void hkpConstraintListener::Destroy_ea1730c30(hkpConstraintListener::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EC68);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpConstraintListener::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::staticClass  (binary VA: 0x1730c80)
// Original: hkpConstraintCollisionFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpConstraintCollisionFilter::staticClass()
{
  return &hkpConstraintCollisionFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainData::staticClass  (binary VA: 0x1747fc0)
// Original: hkpConstraintChainData::staticClass
// ----------------------------------------------------------------------------
void * hkpConstraintChainData::staticClass()
{
  return &hkpConstraintChainDataClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::Destroy  (binary VA: 0x174a6b0)
// Original: hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter
// ----------------------------------------------------------------------------
void hkpConstraintCollisionFilter::Destroy(hkpConstraintCollisionFilter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F548);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209F590);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_209F5A4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_209F5C0);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209F5D4);
  *((uint32_t *)self + 16) = ((uint32_t)(uintptr_t)&off_209EC68);
  hkpPairCollisionFilter::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::init  (binary VA: 0x174a760)
// Original: hkpConstraintCollisionFilter::init
// ----------------------------------------------------------------------------
int hkpConstraintCollisionFilter::init(hkpConstraintCollisionFilter::Self *self, hkpWorld::Self *a2)
{
  int v2;
  hkpConstraintCollisionFilter::Self **v3;
  int result;
  hkpConstraintListener::Self *v5;

  v2 = *((uint32_t *)a2 + 82);
  if ( v2 <= 0 )
  {
    v5 = (hkpConstraintListener::Self *)((hkpConstraintCollisionFilter::Self *)((char *)self + 64));
  }
  else
  {
    v3 = *((hkpConstraintCollisionFilter::Self ***)a2 + 81);
    result = (int)(uintptr_t)(self);
    v5 = (hkpConstraintListener::Self *)((hkpConstraintCollisionFilter::Self *)((char *)self + 64));
    if ( *v3 == (hkpConstraintCollisionFilter::Self *)((char *)self + 64) )
      return result;
    result = 0;
    while ( ++result != v2 )
    {
      if ( v3[result] == (hkpConstraintCollisionFilter::Self *)(v5) )
      {
        if ( result < 0 )
          return hkpWorld::addConstraintListener(a2, v5);
        return result;
      }
    }
  }
  return hkpWorld::addConstraintListener(a2, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::constraintRemovedCallback  (binary VA: 0x174a7d0)
// Original: hkpConstraintCollisionFilter::constraintRemovedCallback
// ----------------------------------------------------------------------------
void hkpConstraintCollisionFilter::constraintRemovedCallback(hkpConstraintCollisionFilter::Self *self, hkpConstraintInstance::Self *a2)
{
  hkpEntity::Self *v2;
  hkpEntity::Self *v3;
  int v4;
  hkpWorld::Self *v5;
  hkpWorld::Self *v6;
  typedef hkpWorld::Self *_g4_t_v8;
  typedef uint8_t _g4_t_v9[25];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (7u + sizeof(_g4_t_v9)) > _g4_s1 ? (7u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 7u);

  if ( a2 != nullptr && (*(int (**)(uint32_t))(**((uint32_t **)a2 + 3) + 20))(*((uint32_t *)a2 + 3)) != 11 )
  {
    v2 = *((hkpEntity::Self **)a2 + 5);
    if ( *((uint32_t *)v2 + 4) != 0 )
    {
      v3 = *((hkpEntity::Self **)a2 + 6);
      if ( *((uint32_t *)v3 + 4) != 0 && (int)hkpPairCollisionFilter::enableCollisionsBetween(self, v2, v3) <= 0 )
      {
        v4 = *((uint32_t *)self + 15);
        if ( v4 == 0 || ((*(void (**)(uint8_t *))(*(uint32_t *)v4 + 24))(v9), v9[0] != 0) )
        {
          v5 = *((hkpWorld::Self **)v2 + 2);
          if ( v5 != nullptr )
          {
            ++*((uint32_t *)v5 + 35);
            v8 = v5;
            hkpWorld::reenableCollisionBetweenEntityPair(v5, v2, v3);
            v6 = v8;
            if ( (*((uint32_t *)v8 + 35))-- == 1 && *((uint8_t *)v8 + 148) == 0 )
            {
              if ( *((uint32_t *)v8 + 33) != 0 )
              {
                hkpWorld::internal_executePendingOperations(v8);
                v6 = v8;
              }
              if ( *((uint32_t *)v6 + 39) == 1 && *((uint32_t *)v6 + 34) != 0 )
                hkpWorld::internal_executePendingBodyOperations(v6);
            }
          }
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::Destroy_ea174a900  (binary VA: 0x174a900)
// Original: hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter
// ----------------------------------------------------------------------------
void hkpConstraintCollisionFilter::Destroy_ea174a900(hkpConstraintCollisionFilter::Self *self)
{
  int v1;
  int v2;

  hkpConstraintCollisionFilter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 68;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::constraintAddedCallback  (binary VA: 0x174a9b0)
// Original: hkpConstraintCollisionFilter::constraintAddedCallback
// ----------------------------------------------------------------------------
void hkpConstraintCollisionFilter::constraintAddedCallback(hkpConstraintCollisionFilter::Self *self, hkpConstraintInstance::Self *a2)
{
  const hkpEntity::Self *v2;
  const hkpEntity::Self *v3;
  int Agent;
  int v5;

  if ( a2 != nullptr && (*(int (**)(uint32_t))(**((uint32_t **)a2 + 3) + 20))(*((uint32_t *)a2 + 3)) != 11 )
  {
    v2 = *((const hkpEntity::Self **)a2 + 5);
    if ( *((uint32_t *)v2 + 4) != 0 )
    {
      v3 = *((const hkpEntity::Self **)a2 + 6);
      if ( *((uint32_t *)v3 + 4) != 0 && hkpPairCollisionFilter::disableCollisionsBetween(self, v2, v3) == 1 )
      {
        Agent = hkAgentNnMachine_FindAgent(*((uint32_t *)a2 + 5) + 16, *((uint32_t *)a2 + 6) + 16);
        if ( Agent != 0 )
        {
          v5 = *((uint32_t *)v2 + 2);
          if ( v5 != 0 )
          {
            ++*(uint32_t *)(v5 + 140);
            hkpWorldAgentUtil::removeAgentAndItsToiEvents(Agent);
            if ( (*(uint32_t *)(v5 + 140))-- == 1 && *(uint8_t *)(v5 + 148) == 0 )
            {
              if ( *(uint32_t *)(v5 + 132) != 0 )
                hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v5);
              if ( *(uint32_t *)(v5 + 156) == 1 && *(uint32_t *)(v5 + 136) != 0 )
                hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v5);
            }
          }
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::Construct  (binary VA: 0x174aaa0)
// Original: hkpConstraintCollisionFilter::hkpConstraintCollisionFilter
// ----------------------------------------------------------------------------
void hkpConstraintCollisionFilter::Construct(hkpConstraintCollisionFilter::Self *self, const hkpCollisionFilter::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4

  hkpCollisionFilter::Construct(self);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FDE8);
  *((uint32_t *)self + 14) = -1;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209FE20);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_209FE34);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_209FE50);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209FE64);
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 8) = 5;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v3 = *((uint32_t *)a2 + 1);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
  }
  *((uint32_t *)self + 8) = 6;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F548);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209F590);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_209F5A4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_209F5C0);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209F5D4);
  *((uint32_t *)self + 16) = ((uint32_t)(uintptr_t)&off_209F5E8);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::updateFromWorld  (binary VA: 0x174ab80)
// Original: hkpConstraintCollisionFilter::updateFromWorld
// ----------------------------------------------------------------------------
int hkpConstraintCollisionFilter::updateFromWorld(hkpConstraintCollisionFilter::Self *self, hkpWorld::Self *a2)
{
  char *v2;
  int result;
  int v4;
  int v5;
  void (*v6)(hkpConstraintCollisionFilter::Self *, int);
  int Constraint;
  hkpEntity::Self *v8;
  int NumConstraints;
  int v10;
  int v11;
  int i;
  char *v13;
  int v14;

  hkpPairCollisionFilter::clearAll(self);
  v14 = 2;
  v13 = (char *)a2 + 40;
  v2 = (char *)a2 + 40;
  while ( 1 )
  {
    result = *((uint32_t *)v2 + 1);
    if ( result > 0 )
    {
      for ( i = 0; i < result; ++i )
      {
        v11 = *(uint32_t *)(*(uint32_t *)v13 + 4 * i);
        if ( *(int *)(v11 + 80) > 0 )
        {
          v10 = 0;
          v4 = *(uint32_t *)(*(uint32_t *)v13 + 4 * i);
          do
          {
            v5 = 0;
            v8 = *(hkpEntity::Self **)(*(uint32_t *)(v4 + 76) + 4 * v10);
            NumConstraints = hkpEntity::getNumConstraints(v8);
            if ( NumConstraints > 0 )
            {
              do
              {
                v6 = *(void (**)(hkpConstraintCollisionFilter::Self *, int))(*(uint32_t *)self + 48);
                Constraint = hkpEntity::getConstraint(v8, v5++);
                v6(self, Constraint);
              }
              while ( v5 != NumConstraints );
            }
            v4 = v11;
            ++v10;
          }
          while ( *(uint32_t *)(v11 + 80) > v10 );
          result = *((uint32_t *)v13 + 1);
        }
      }
    }
    if ( --v14 == 0 )
      break;
    v2 = (char *)a2 + 52;
    v13 = (char *)a2 + 52;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::constraintBreakingCallbackImmediate  (binary VA: 0x174ac90)
// Original: hkpConstraintCollisionFilter::_constraintBreakingCallbackImmediate
// ----------------------------------------------------------------------------
int hkpConstraintCollisionFilter::constraintBreakingCallbackImmediate(int *a1, int a2, char a3)
{
  int v3;

  v3 = *a1;
  if ( a3 != 0 )
    return (*(int (**)(int *, int))(v3 + 52))(a1, a2);
  else
    return (*(int (**)(int *, int))(v3 + 48))(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::constraintBreakingCallback  (binary VA: 0x174acd0)
// Original: hkpConstraintCollisionFilter::constraintBreakingCallback
// ----------------------------------------------------------------------------
int hkpConstraintCollisionFilter::constraintBreakingCallback(int *a1, int *a2)
{
  typedef int _g4_t_v3;
  typedef uint32_t _g4_t_v4[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);

  if ( *(uint32_t *)(*a2 + 140) == 0 )
    return hkpConstraintCollisionFilter::constraintBreakingCallbackImmediate(a1, a2[1], 1);
  v3 = *a2;
  v4[2] = a2[1];
  LOBYTE(v4[0]) = 37;
  v4[1] = (uint32_t)(uintptr_t)(a1);
  LOBYTE(v4[3]) = 1;
  return hkpWorld::queueOperation(v3, (int)(uintptr_t)(v4));
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCollisionFilter::constraintRepairedCallback  (binary VA: 0x174ad50)
// Original: hkpConstraintCollisionFilter::constraintRepairedCallback
// ----------------------------------------------------------------------------
int hkpConstraintCollisionFilter::constraintRepairedCallback(int *a1, int *a2)
{
  typedef int _g4_t_v3;
  typedef uint32_t _g4_t_v4[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);

  if ( *(uint32_t *)(*a2 + 140) == 0 )
    return hkpConstraintCollisionFilter::constraintBreakingCallbackImmediate(a1, a2[1], 0);
  v3 = *a2;
  v4[2] = a2[1];
  LOBYTE(v4[0]) = 37;
  v4[1] = (uint32_t)(uintptr_t)(a1);
  LOBYTE(v4[3]) = 0;
  return hkpWorld::queueOperation(v3, (int)(uintptr_t)(v4));
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::SmallArraySerializeOverrideType::staticClass  (binary VA: 0x17587a0)
// Original: hkpConstraintInstance::SmallArraySerializeOverrideType::staticClass
// ----------------------------------------------------------------------------
void * hkpConstraintInstance::SmallArraySerializeOverrideType::staticClass()
{
  return &hkpConstraintInstanceSmallArraySerializeOverrideTypeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::staticClass  (binary VA: 0x17587c0)
// Original: hkpConstraintInstance::staticClass
// ----------------------------------------------------------------------------
void * hkpConstraintInstance::staticClass()
{
  return &hkpConstraintInstanceClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::calcBufferOffsetsForSolve  (binary VA: 0x17589b0)
// Original: hkpConstraintSolverSetup::calcBufferOffsetsForSolve
// ----------------------------------------------------------------------------
int hkpConstraintSolverSetup::calcBufferOffsetsForSolve(uint32_t *a1, int a2, int a3, uint32_t *a4)
{
  int v4;
  int v5; // kr00_4
  int v6;
  int v7;
  int v8;
  int result;
  int v10;

  a4[5] = a2;
  v10 = a1[20];
  a4[12] = a2;
  v4 = (a1[20] << 7) + a2 + 144;
  v5 = a1[7];
  a4[15] = v4;
  v6 = v5 / 144 + 4;
  v7 = a1[3] + v4 + 32 * v6 + 16;
  v8 = 4 * (a1[5] + 6 * v6);
  a4[16] = v7;
  result = ((v8 + 23) & 0xFFFFFFF0) + v7 - a2;
  a4[6] = result;
  if ( a2 != 0 )
  {
    *(uint8_t *)(a2 + 1) = 0;
    *(uint8_t *)a2 = 1;
    *(uint32_t *)(a2 + 8) = 0;
    *(uint32_t *)(a2 + 48) = 0;
    *(uint32_t *)(a2 + 52) = 0;
    *(uint32_t *)(a2 + 56) = 0;
    *(uint32_t *)(a2 + 60) = 0;
    *(uint32_t *)(a2 + 16) = 0;
    *(uint32_t *)(a2 + 64) = 1065353216;
    *(uint32_t *)(a2 + 68) = 0;
    *(uint32_t *)(a2 + 72) = 0;
    *(uint32_t *)(a2 + 76) = 0;
    *(uint32_t *)(a2 + 80) = 0;
    *(uint32_t *)(a2 + 84) = 1065353216;
    *(uint32_t *)(a2 + 20) = 0;
    *(uint32_t *)(a2 + 24) = 0;
    *(uint32_t *)(a2 + 28) = 0;
    *(uint32_t *)(a2 + 32) = 0;
    *(uint32_t *)(a2 + 36) = 0;
    *(uint32_t *)(a2 + 40) = 0;
    *(uint32_t *)(a2 + 44) = 0;
    *(uint32_t *)(a2 + 112) = 0;
    *(uint32_t *)(a2 + 116) = 0;
    *(uint32_t *)(a2 + 120) = 0;
    *(uint32_t *)(a2 + 124) = 0;
    *(uint32_t *)(a2 + 88) = 0;
    *(uint32_t *)(a2 + 92) = 0;
    *(uint32_t *)(a2 + 96) = 0;
    *(uint32_t *)(a2 + 100) = 0;
    *(uint32_t *)(a2 + 104) = 1065353216;
    *(uint32_t *)(a2 + 108) = 0;
    *(uint8_t *)(a2 + ((v10 + 1) << 7)) = 3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::calcBufferSize  (binary VA: 0x1758b50)
// Original: hkpConstraintSolverSetup::calcBufferSize
// ----------------------------------------------------------------------------
int hkpConstraintSolverSetup::calcBufferSize(hkpConstraintSolverSetup::Self *self)
{
  int result;
  typedef int _g4_t_v2;
  typedef uint32_t _g4_t_v3[23];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int16_t _g4_t_v12;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (108u + sizeof(_g4_t_v4)) > _g4_s2 ? (108u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v5)) > _g4_s3 ? (112u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (116u + sizeof(_g4_t_v6)) > _g4_s4 ? (116u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (120u + sizeof(_g4_t_v7)) > _g4_s5 ? (120u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (124u + sizeof(_g4_t_v8)) > _g4_s6 ? (124u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v9)) > _g4_s7 ? (128u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (132u + sizeof(_g4_t_v10)) > _g4_s8 ? (132u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (136u + sizeof(_g4_t_v11)) > _g4_s9 ? (136u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (140u + sizeof(_g4_t_v12)) > _g4_s10 ? (140u + sizeof(_g4_t_v12)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 108u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 112u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 116u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 120u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 124u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 128u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 132u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 136u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 140u);

  v3[3] = 1;
  v3[4] = 1;
  memset(&v3[5], 0, 12);
  v4 = 0;
  v5 = 0;
  v6 = 0x80000000;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  result = hkpConstraintSolverSetup::calcBufferOffsetsForSolve((uint32_t *)(self), 0, 0, v3);
  v5 = 0;
  if ( v6 >= 0 )
  {
    v2 = result;
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v4,
      4 * v6);
    return v2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup_calcBufferSize  (binary VA: 0x1758c60)
// Original: hkpConstraintSolverSetup_calcBufferSize
// ----------------------------------------------------------------------------
int hkpConstraintSolverSetup_calcBufferSize(const hkpSimulationIsland::Self *a1)
{
  int result;
  typedef int _g4_t_v2;
  typedef uint32_t _g4_t_v3[23];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int16_t _g4_t_v12;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (108u + sizeof(_g4_t_v4)) > _g4_s2 ? (108u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v5)) > _g4_s3 ? (112u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (116u + sizeof(_g4_t_v6)) > _g4_s4 ? (116u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (120u + sizeof(_g4_t_v7)) > _g4_s5 ? (120u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (124u + sizeof(_g4_t_v8)) > _g4_s6 ? (124u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v9)) > _g4_s7 ? (128u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (132u + sizeof(_g4_t_v10)) > _g4_s8 ? (132u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (136u + sizeof(_g4_t_v11)) > _g4_s9 ? (136u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (140u + sizeof(_g4_t_v12)) > _g4_s10 ? (140u + sizeof(_g4_t_v12)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 108u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 112u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 116u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 120u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 124u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 128u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 132u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 136u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 140u);

  v3[3] = 1;
  v3[4] = 1;
  memset(&v3[5], 0, 12);
  v4 = 0;
  v5 = 0;
  v6 = 0x80000000;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  result = hkpConstraintSolverSetup::calcBufferOffsetsForSolve((uint32_t *)(a1), 0, 0, v3);
  v5 = 0;
  if ( v6 >= 0 )
  {
    v2 = result;
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v4,
      4 * v6);
    return v2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::buildJacobianElements  (binary VA: 0x1758d70)
// Original: hkpConstraintSolverSetup::_buildJacobianElements
// ----------------------------------------------------------------------------
int hkpConstraintSolverSetup::buildJacobianElements(uint32_t *a1, unsigned int a2, int a3, int a4, uint8_t *a5, unsigned int a6, uint8_t *a7)
{
  uint8_t *v7;
  unsigned int v8;
  uint8_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint16_t *v15;
  int v16;
  int v17;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint16_t *v27;
  int result;
  typedef int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_i;
  typedef uint8_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v33)) > _g4_s4 ? (28u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_i)) > _g4_s5 ? (28u + sizeof(_g4_t_i)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v35)) > _g4_s6 ? (32u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v36)) > _g4_s7 ? (36u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v37)) > _g4_s8 ? (40u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v38)) > _g4_s9 ? (48u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v39)) > _g4_s10 ? (52u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v40)) > _g4_s11 ? (56u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v41)) > _g4_s12 ? (60u + sizeof(_g4_t_v41)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);

  v7 = a5;
  v35 = a5;
  v30 = a2 + 4 * a3;
  v39 = 0;
  v40 = -2147483392;
  v38 = &v41;
  if ( a2 < v30 )
  {
    do
    {
      v8 = *(uint32_t *)(*(uint32_t *)a2 + 168);
      v33 = v8;
      v32 = v8 + 48 * *(uint16_t *)(*(uint32_t *)a2 + 172);
      if ( v8 < v32 )
      {
        v31 = v8 + 19;
        do
        {
          while ( 1 )
          {
            if ( (*(uint8_t *)(v8 + 18) & 0xD) != 0 )
            {
              a1[19] = *(uint32_t *)v8;
              v36 = *(uint32_t *)(v8 + 28);
              v16 = *(uint32_t *)(*(uint32_t *)v8 + 20);
              v17 = *(uint32_t *)(*(uint32_t *)v8 + 24);
              a1[12] = *(uint32_t *)(v16 + 160) + a4;
              a1[13] = *(uint32_t *)(v17 + 160) + a4;
              a1[14] = *(uint32_t *)(v16 + 24);
              a1[15] = *(uint32_t *)(v17 + 24);
              v18 = *(uint8_t *)(v8 + 18);
              if ( (v18 & 9) != 0 )
              {
                v29 = 2;
                hkSimpleContactConstraintData_fireCallbacks(
                  *(uint32_t *)(*(uint32_t *)v8 + 12),
                  a1,
                  *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v8 + 12) + 40));
                v18 = *(uint8_t *)(v8 + 18);
              }
              if ( (v18 & 4) != 0 )
                (*(void (**)(uint32_t, uint32_t *, uint8_t **))(**(uint32_t **)(*(uint32_t *)v8 + 12) + 96))(
                  *(uint32_t *)(*(uint32_t *)v8 + 12),
                  a1,
                  &v35);
            }
            if ( *(uint8_t *)(v31 + v8 - v33) <= 3u )
              break;
            v19 = v39;
            if ( v39 == (v40 & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v38,
                4,
                v29);
              v19 = v39;
            }
            v38[v19] = v8;
            v8 += 48;
            ++v39;
            if ( v32 <= v8 )
              goto LABEL_18;
          }
          v9 = v35;
          if ( (unsigned int)(uintptr_t)(v35) >= a6 )
          {
            *v35 = 2;
            a6 = 0xFFFFFFFF;
            *((uint32_t *)v9 + 2) = a7 - v9;
            v35 = a7;
          }
          v10 = *(uint32_t *)(v8 + 4);
          v11 = *(uint32_t *)(v8 + 8);
          a1[12] = *(uint32_t *)(v10 + 160) + a4;
          a1[13] = *(uint32_t *)(v11 + 160) + a4;
          a1[14] = v10 + 240;
          a1[15] = v11 + 240;
          a1[19] = *(uint32_t *)v8;
          v13 = (uint16_t)(*(uint32_t *)(v10 + 160) >> 7);
          v36 = *(uint32_t *)(v8 + 28);
          v12 = v36;
          a1[21] = v13;
          v14 = *(uint32_t *)(v11 + 160) >> 7;
          v37 = v12;
          a1[22] = (uint16_t)v14;
          v15 = *(uint16_t **)(v8 + 12);
          if ( *v15 == 29 )
            hkSimpleContactConstraintDataBuildJacobian(v15, a1, 1, &v35);
          else
            hkSolverBuildJacobianFromAtomsNotContact(v15, *(uint16_t *)(v8 + 16), a1, &v35);
          v8 += 48;
        }
        while ( v32 > v8 );
      }
LABEL_18:
      a2 += 4;
    }
    while ( v30 > a2 );
    v7 = v35;
    if ( v39 > 0 )
    {
      for ( i = 0; i < v39; ++i )
      {
        v20 = v38[i];
        if ( a6 <= (unsigned int)(uintptr_t)(v7) )
        {
          *v7 = 2;
          *((uint32_t *)v7 + 2) = a7 - v7;
          v35 = a7;
          a6 = 0xFFFFFFFF;
        }
        v21 = *(uint32_t *)(v20 + 4);
        v22 = *(uint32_t *)(v20 + 8);
        a1[12] = *(uint32_t *)(v21 + 160) + a4;
        a1[13] = *(uint32_t *)(v22 + 160) + a4;
        a1[14] = v21 + 240;
        a1[15] = v22 + 240;
        a1[19] = *(uint32_t *)v20;
        v24 = (uint16_t)(*(uint32_t *)(v21 + 160) >> 7);
        v36 = *(uint32_t *)(v20 + 28);
        v23 = v36;
        a1[21] = v24;
        v25 = *(uint32_t *)(v22 + 160) >> 7;
        v37 = v23;
        a1[22] = (uint16_t)v25;
        v26 = *(uint16_t *)(v20 + 16);
        v27 = *(uint16_t **)(v20 + 12);
        if ( *v27 == 29 )
          hkSimpleContactConstraintDataBuildJacobian(v27, a1, 1, &v35);
        else
          hkSolverBuildJacobianFromAtomsNotContact(v27, v26, a1, &v35);
        v7 = v35;
      }
    }
  }
  *(uint32_t *)v7 = 0;
  result = v40;
  v39 = 0;
  if ( v40 >= 0 )
    return (*(int (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v38,
             4 * v40);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::oneStepIntegrate  (binary VA: 0x1759150)
// Original: hkpConstraintSolverSetup::oneStepIntegrate
// ----------------------------------------------------------------------------
int hkpConstraintSolverSetup::oneStepIntegrate(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6; // xmm0_4
  int v7;
  int result;
  typedef int _g4_t_i;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[5];
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v12)) > _g4_s3 ? (48u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v13)) > _g4_s4 ? (68u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v14)) > _g4_s5 ? (72u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v15)) > _g4_s6 ? (76u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v16)) > _g4_s7 ? (80u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v17)) > _g4_s8 ? (84u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v18)) > _g4_s9 ? (88u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v19)) > _g4_s10 ? (92u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v20)) > _g4_s11 ? (96u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v21)) > _g4_s12 ? (100u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v22)) > _g4_s13 ? (104u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v23)) > _g4_s14 ? (108u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v24)) > _g4_s15 ? (112u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v25)) > _g4_s16 ? (116u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v26)) > _g4_s17 ? (120u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v27)) > _g4_s18 ? (124u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v28)) > _g4_s19 ? (128u + sizeof(_g4_t_v28)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v29)) > _g4_s20 ? (132u + sizeof(_g4_t_v29)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v30)) > _g4_s21 ? (136u + sizeof(_g4_t_v30)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v31)) > _g4_s22 ? (140u + sizeof(_g4_t_v31)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v32)) > _g4_s23 ? (144u + sizeof(_g4_t_v32)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v33)) > _g4_s24 ? (148u + sizeof(_g4_t_v33)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v34)) > _g4_s25 ? (152u + sizeof(_g4_t_v34)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v35)) > _g4_s26 ? (156u + sizeof(_g4_t_v35)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v36)) > _g4_s27 ? (160u + sizeof(_g4_t_v36)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v37)) > _g4_s28 ? (164u + sizeof(_g4_t_v37)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v38)) > _g4_s29 ? (168u + sizeof(_g4_t_v38)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v39)) > _g4_s30 ? (172u + sizeof(_g4_t_v39)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 112u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 116u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 124u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 132u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 136u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 140u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 144u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 148u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 152u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 156u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 160u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 164u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 168u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 172u);

  if ( a5 > 0 )
  {
    for ( i = 0; i != a5; result = i )
    {
      v10 = *(uint32_t *)(a4 + 4 * i);
      v11 = v10 + 224;
      v5 = *(uint32_t *)(v10 + 160) + a3;
      v6 = *(uint32_t *)(v5 + 8);
      v7 = *(uint32_t *)(v5 + 16);
      LOWORD(v12[0]) = *(uint16_t *)v5;
      v12[1] = *(uint32_t *)(v5 + 4);
      v12[4] = v7;
      v12[2] = v6;
      v13 = *(uint32_t *)(v5 + 20);
      v14 = *(uint32_t *)(v5 + 24);
      v15 = *(uint32_t *)(v5 + 28);
      v16 = *(uint32_t *)(v5 + 32);
      v17 = *(uint32_t *)(v5 + 36);
      v18 = *(uint32_t *)(v5 + 40);
      v19 = *(uint32_t *)(v5 + 44);
      v20 = *(uint32_t *)(v5 + 48);
      v21 = *(uint32_t *)(v5 + 52);
      v22 = *(uint32_t *)(v5 + 56);
      v23 = *(uint32_t *)(v5 + 60);
      v32 = *(uint32_t *)(v5 + 96);
      v33 = *(uint32_t *)(v5 + 100);
      v34 = *(uint32_t *)(v5 + 104);
      v35 = *(uint32_t *)(v5 + 108);
      v36 = *(uint32_t *)(v5 + 112);
      v37 = *(uint32_t *)(v5 + 116);
      v38 = *(uint32_t *)(v5 + 120);
      v39 = *(uint32_t *)(v5 + 124);
      v24 = v7;
      v25 = v13;
      v26 = v14;
      v27 = v15;
      v28 = v16;
      v29 = v17;
      v30 = v18;
      v31 = v19;
      LOBYTE(v7) = *(uint8_t *)(v10 + 233);
      *(uint8_t *)(v10 + 233) = -1;
      hkRigidMotionUtilApplyAccumulators(a1, a2, v12, &v11, 1, 0);
      hkpEntityAabbUtil::entityBatchRecalcAabb(*(uint32_t *)(*(uint32_t *)(v10 + 8) + 112), (int)(uintptr_t)(&v10), 1);
      ++i;
      *(uint8_t *)(v11 + 9) = v7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::solve  (binary VA: 0x1759390)
// Original: hkpConstraintSolverSetup::solve
// ----------------------------------------------------------------------------
int hkpConstraintSolverSetup::solve(int a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6, unsigned int a7, int a8)
{
  unsigned int v8;
  int v9;
  int v10;
  unsigned int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void *v18;
  int v19;
  int v20;
  int v21;
  void *v22;
  int v23;
  int *v24;
  int v25;
  uint32_t *v26;
  float *v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  hkLifoAllocator::Self **v35;
  hkLifoAllocator::Self *v36;
  signed int v37;
  bool v38; // cc
  int v39;
  char *v40;
  int address;
  int v42;
  typedef char *_g4_t_v43;
  typedef void *_g4_t_s;
  typedef void *_g4_t_v45;
  typedef char _g4_t_v46;
  typedef uint8_t *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef uint8_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef void *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef void *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef char *_g4_t_v57;
  typedef char *_g4_t_v58;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v43)) > _g4_s0 ? (0u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_s)) > _g4_s1 ? (0u + sizeof(_g4_t_s)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v45)) > _g4_s2 ? (0u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v46)) > _g4_s3 ? (0u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v47)) > _g4_s4 ? (4u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v48)) > _g4_s5 ? (8u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v49)) > _g4_s6 ? (12u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v50)) > _g4_s7 ? (12u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v51)) > _g4_s8 ? (12u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v52)) > _g4_s9 ? (12u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v53)) > _g4_s10 ? (16u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v54)) > _g4_s11 ? (20u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v55)) > _g4_s12 ? (20u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v56)) > _g4_s13 ? (24u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v57)) > _g4_s14 ? (28u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v58)) > _g4_s15 ? (44u + sizeof(_g4_t_v58)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);

  v53 = 0;
  v54 = (a8 << 7) + 144;
  v56 = a4[3] + 16;
  v43 = (char *)((4 * a4[5] + 23) & 0xFFFFFFF0);
  v8 = a6 + a5;
  v57 = &v43[v56 + v54];
  if ( a5 == 0 )
  {
    v42 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 52);
    v58 = &v43[128 * a8 + 144 + v56];
    v53 = G4_VCALL<int>(v42, 16, &v58);
    v57 = v58;
    v8 = (unsigned int)(uintptr_t)(&v58[v53]);
    a5 = v53;
  }
  v49 = nullptr;
  v48 = nullptr;
  v9 = 0;
LABEL_4:
  v47 = (uint8_t *)(a5 + v54);
  v10 = v56 + a5 + v54;
  v11 = v10;
LABEL_5:
  while ( 1 )
  {
    v12 = &v43[v10];
    if ( v8 >= (unsigned int)(uintptr_t)(&v43[v10]) )
      break;
    while ( 1 )
    {
      if ( v8 <= (unsigned int)(uintptr_t)(v47) )
      {
        v40 = &v12[-v53];
        v48 = &v12[-v53];
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v9 = (*(int (**)(uint32_t, char *))(**(uint32_t **)(*(uint32_t *)address + 40) + 8))(
               *(uint32_t *)(*(uint32_t *)address + 40),
               v40);
        v8 = (unsigned int)(uintptr_t)(&v40[v9]);
        a5 = v9;
        goto LABEL_4;
      }
      if ( v8 > v11 )
        break;
      v13 = a4[2] + 16;
      v14 = v8 - (uint32_t)(uintptr_t)(v47) - v13;
      if ( v14 <= 0 )
      {
        v15 = a4[3] + v13;
        v52 = a4[2] + 16;
        v48 = &v43[v15];
        v39 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v9 = (*(int (**)(uint32_t, char *))(**(uint32_t **)(*(uint32_t *)v39 + 40) + 8))(
               *(uint32_t *)(*(uint32_t *)v39 + 40),
               &v43[v15]);
        v17 = v52;
        if ( v14 != 0 )
        {
          v47 = (uint8_t *)v9;
          v8 = (unsigned int)(uintptr_t)(&v48[v9]);
          v49 = nullptr;
          v10 = a4[3] + v9 + 16;
          v11 = v10;
          goto LABEL_5;
        }
      }
      else
      {
        v50 = a4[2] + 16;
        v15 = a4[3] + v13 - v14;
        v48 = &v43[v15];
        v16 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v9 = (*(int (**)(uint32_t, char *))(**(uint32_t **)(*(uint32_t *)v16 + 40) + 8))(
               *(uint32_t *)(*(uint32_t *)v16 + 40),
               &v43[v15]);
        v17 = v50;
      }
      v10 = v9 + v15;
      v11 = v8 - v17;
      v8 = (unsigned int)(uintptr_t)(&v48[v9]);
      v12 = &v43[v10];
      v49 = (uint8_t *)v9;
      if ( &v48[v9] >= &v43[v10] )
        goto LABEL_11;
    }
    v35 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v36 = *v35;
    v37 = (unsigned int)(uintptr_t)(v43 + 127) & 0xFFFFFF80;
    v38 = v37 <= *((uint32_t *)*v35 + 2);
    v9 = *((uint32_t *)*v35 + 3);
    if ( v38 && (unsigned int)(v37 + v9) <= *((uint32_t *)v36 + 4) )
      *((uint32_t *)v36 + 3) = v37 + v9;
    else
      v9 = hkLifoAllocator::allocateFromNewSlab(v36, (unsigned int)(uintptr_t)(v43 + 127) & 0xFFFFFF80);
    v8 = (unsigned int)(uintptr_t)(&v43[v9]);
    v10 = v9;
  }
LABEL_11:
  v18 = (void *)v10;
  v19 = v9;
  *(uint8_t *)(a5 + 1) = 0;
  *(uint8_t *)a5 = 1;
  *(uint32_t *)(a5 + 8) = 0;
  *(uint32_t *)(a5 + 48) = 0;
  *(uint32_t *)(a5 + 52) = 0;
  *(uint32_t *)(a5 + 56) = 0;
  *(uint32_t *)(a5 + 60) = 0;
  *(uint32_t *)(a5 + 16) = 0;
  *(uint32_t *)(a5 + 20) = 0;
  *(uint32_t *)(a5 + 24) = 0;
  *(uint32_t *)(a5 + 28) = 0;
  *(uint32_t *)(a5 + 32) = 0;
  *(uint32_t *)(a5 + 36) = 0;
  *(uint32_t *)(a5 + 40) = 0;
  *(uint32_t *)(a5 + 44) = 0;
  *(uint32_t *)(a5 + 112) = 0;
  *(uint32_t *)(a5 + 116) = 0;
  *(uint32_t *)(a5 + 120) = 0;
  *(uint32_t *)(a5 + 124) = 0;
  *(uint32_t *)(a5 + 64) = 1065353216;
  *(uint32_t *)(a5 + 68) = 0;
  *(uint32_t *)(a5 + 72) = 0;
  *(uint32_t *)(a5 + 76) = 0;
  *(uint32_t *)(a5 + 80) = 0;
  *(uint32_t *)(a5 + 84) = 1065353216;
  *(uint32_t *)(a5 + 88) = 0;
  *(uint32_t *)(a5 + 92) = 0;
  *(uint32_t *)(a5 + 96) = 0;
  *(uint32_t *)(a5 + 100) = 0;
  *(uint32_t *)(a5 + 104) = 1065353216;
  *(uint32_t *)(a5 + 108) = 0;
  v20 = 0;
  if ( a8 > 0 )
  {
    v55 = v18;
    do
    {
      ++v20;
      v21 = *(uint32_t *)(a7 + 4 * v20 - 4);
      if ( *(uint32_t *)(v21 + 160) != v20 << 7 )
        *(uint32_t *)(v21 + 160) = v20 << 7;
    }
    while ( v20 != a8 );
    v18 = v55;
  }
  s = v18;
  *(uint8_t *)hkRigidMotionUtilApplyForcesAndBuildAccumulators(a1, a7, a8, 224, a5 + 128) = 3;
  v22 = s;
  v23 = a4[5];
  if ( v23 > 0 )
  {
    memset(s, 0, 4 * v23);
    v22 = s;
  }
  v45 = v22;
  hkpConstraintSolverSetup::buildJacobianElements(a3, a7, a8, a5, v47, v11, v49);
  v51 = v45;
  v46 = hkSolveConstraints(a2, v47, a5, v45);
  v24 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v25 = *v24;
  v26 = *(uint32_t **)(*v24 + 4);
  if ( (unsigned int)(uintptr_t)(v26) < *(uint32_t *)(*v24 + 12) )
  {
    *v26 = (uint32_t)(uintptr_t)("MiNumJacobians");
    v27 = (float *)(v26 + 2);
    *(v27 - 1) = (float)(int)a4[4];
    *(uint32_t *)(v25 + 4) = (uint32_t)(uintptr_t)(v27);
    v28 = *v24;
    v29 = *(uint32_t *)(*v24 + 4);
    if ( v29 < *(uint32_t *)(v28 + 12) )
    {
      v30 = v29 + 8;
      *(float *)(v30 - 4) = (float)a8;
      *(uint32_t *)(v30 - 8) = (uint32_t)(uintptr_t)("MiNumEntities");
      *(uint32_t *)(v28 + 4) = v30;
    }
  }
  v31 = 0;
  if ( v46 != 0 )
  {
    hkExportImpulsesAndRhs(a2, v51, v47, a5);
    v31 = hkRigidMotionUtilApplyAccumulators(a2, a1, a5 + 128, a7, a8, 224);
    hkpEntityAabbUtil::entityBatchRecalcAabb(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)a7 + 8) + 112), a7, a8);
    if ( *(uint32_t *)v47 != 0 )
      hkpWorldCallbackUtil::fireContactImpulseLimitBreached(a4[6], v47 + 16, *(uint32_t *)v47);
  }
  if ( v19 != 0 )
  {
    v32 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, char *))(**(uint32_t **)(*(uint32_t *)v32 + 40) + 12))(
      *(uint32_t *)(*(uint32_t *)v32 + 40),
      v19,
      v48);
  }
  if ( v53 != 0 )
  {
    v33 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, char *))(**(uint32_t **)(*(uint32_t *)v33 + 52) + 20))(
      *(uint32_t *)(*(uint32_t *)v33 + 52),
      v53,
      v57);
  }
  return v31;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::initializeSolverState  (binary VA: 0x17599f0)
// Original: hkpConstraintSolverSetup::initializeSolverState
// ----------------------------------------------------------------------------
unsigned int hkpConstraintSolverSetup::initializeSolverState(int a1, int a2, int a3, int a4, int a5, void *a6, float *a7, uint32_t *a8)
{
  int v8;
  __m128 v9;
  __m128 v10;
  unsigned int v11;
  unsigned int v12;
  float v13; // xmm0_4
  float v14; // xmm3_4
  __m128 v15;
  __m128 v16;
  unsigned int v17;
  float v18; // xmm3_4
  __m128 v19;
  unsigned int v20;
  float v21; // xmm0_4
  __m128 v22;
  unsigned int v23;
  unsigned int result;
  unsigned int v25;

  *a8 = a1;
  a8[1] = a2;
  a8[2] = a3;
  hkMemUtil::memCpy((hkMemUtil::Self *)(a8 + 20), a6, 6u);
  v8 = a5 - a5 % 16;
g4_m128_raw(v9) = 0;
  a8[3] = (a4 + 15) & 0xFFFFFFF0;
g4_m128_raw(v10) = 0;
  v11 = (((a4 + 15) & 0xFFFFFFF0) + 10 * v8 / 65) & 0xFFFFFFF0;
  a8[4] = v11;
  a8[6] = v11;
  v12 = (v8 / 13 + v11) & 0xFFFFFFF0;
  v13 = (float)(8 * (5 * v8 - 240));
  a8[7] = v12;
  a8[8] = v12;
  v14 = *a7 * v13;
  a8[10] = v12;
  a8[11] = v12;
g4_m128_lane<float>(v9, 0) = v14 / 65.0;
  v15 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v9);
g4_m128_raw(v16) = 0;
  v17 = (_mm_cvtsi128_si32(
           _mm_xor_si128(
             _mm_cvttps_epi32(_mm_sub_ps(v9, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v15))),
             _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v15)), 0x1Fu)))
       + v12
       + 16)
      & 0xFFFFFFF0;
  a8[9] = v17;
  a8[12] = v17;
  v18 = a7[1];
  a8[14] = v17;
  a8[15] = v17;
g4_m128_lane<float>(v16, 0) = (float)(v18 * v13) / 65.0;
  v19 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v16);
  v20 = (v17
       + _mm_cvtsi128_si32(
           _mm_xor_si128(
             _mm_cvttps_epi32(_mm_sub_ps(v16, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v19))),
             _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v19)), 0x1Fu)))
       + 16)
      & 0xFFFFFFF0;
  a8[13] = v20;
  a8[16] = v20;
  v21 = v13 * a7[2];
  a8[18] = v20;
  a8[19] = v20;
g4_m128_lane<float>(v10, 0) = v21 / 65.0;
  v22 = _mm_cmple_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v10);
  v23 = v20
      + _mm_cvtsi128_si32(
          _mm_xor_si128(
            _mm_cvttps_epi32(_mm_sub_ps(v10, _mm_and_ps(G4_BITCAST<__m128>(xmmword_1C7C220), v22))),
            _mm_slli_epi32(g4_m128_raw(G4_BITCAST<__m128i>(v22)), 0x1Fu)));
  result = (a4 + 15) & 0xFFFFFFF0;
  v25 = (v23 + 16) & 0xFFFFFFF0;
  a8[23] = a4 + v8;
  a8[17] = v25;
  a8[22] = v25;
  a8[5] = result;
  a8[24] = v25;
  a8[25] = v25;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::shutdownSolver  (binary VA: 0x1759bc0)
// Original: hkpConstraintSolverSetup::shutdownSolver
// ----------------------------------------------------------------------------
void hkpConstraintSolverSetup::shutdownSolver()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::internalAddAccumulators  (binary VA: 0x1759bd0)
// Original: hkpConstraintSolverSetup::internalAddAccumulators
// ----------------------------------------------------------------------------
uint8_t * hkpConstraintSolverSetup::internalAddAccumulators(__m128 a1, uint32_t *a2, int a3, uint8_t *a4)
{
  uint8_t *result;
  int v5;
  uint32_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  char *v23;
  float v24; // xmm2_4
  float v25; // xmm6_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  int v35;
  int v36;
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  __m128 v40;
  __m128 v41;
  __m128 v42;
  g4_int128_t v43;
  uint32_t *v44;
  float v45; // xmm0_4
  float v46; // xmm7_4
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  float v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  float v71;
  float v72;
  uint8_t *v73;
  int v74;
  int v75;
  uint32_t *v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  float v83;
  int v84;
  int v85;
  int v86;
  float v87;
  float v88;
  float v89;
  unsigned int v90;

  result = a4;
  if ( a4 != nullptr )
  {
    v5 = a2[5];
    if ( v5 == a2[3] )
    {
      *(uint8_t *)v5 = 1;
      *(uint32_t *)(v5 + 8) = 0;
      *(uint32_t *)(v5 + 48) = 0;
      *(uint32_t *)(v5 + 52) = 0;
      *(uint32_t *)(v5 + 56) = 0;
      *(uint32_t *)(v5 + 64) = 1065353216;
      *(uint32_t *)(v5 + 60) = 0;
      *(uint32_t *)(v5 + 16) = 0;
      *(uint32_t *)(v5 + 68) = 0;
      *(uint32_t *)(v5 + 20) = 0;
      *(uint32_t *)(v5 + 24) = 0;
      *(uint32_t *)(v5 + 72) = 0;
      *(uint32_t *)(v5 + 28) = 0;
      *(uint32_t *)(v5 + 32) = 0;
      *(uint32_t *)(v5 + 76) = 0;
      *(uint32_t *)(v5 + 36) = 0;
      *(uint32_t *)(v5 + 40) = 0;
      *(uint32_t *)(v5 + 80) = 0;
      *(uint32_t *)(v5 + 44) = 0;
      *(uint32_t *)(v5 + 112) = 0;
      *(uint32_t *)(v5 + 84) = 1065353216;
      *(uint32_t *)(v5 + 116) = 0;
      *(uint32_t *)(v5 + 120) = 0;
      *(uint32_t *)(v5 + 88) = 0;
      *(uint32_t *)(v5 + 124) = 0;
      *(uint32_t *)(v5 + 92) = 0;
      v31 = *(float *)(v5 + 64);
      *(uint32_t *)(v5 + 96) = 0;
      v32 = *(float *)(v5 + 84);
      *(uint32_t *)(v5 + 100) = 0;
      *(uint32_t *)(v5 + 104) = 1065353216;
      v33 = *(float *)(v5 + 104);
      *(uint32_t *)(v5 + 108) = 0;
      *(uint8_t *)(v5 + 1) = 1;
      v34 = (float)(v31 + v32) + v33;
      if ( v34 > 0.0 )
      {
        v45 = v34 + 1.0;
g4_m128_lane<float>(a1, 0) = fsqrt(v45);
        if ( __builtin_isnan(g4_m128_lane<float>(a1, 0)) )
        {
          v80 = v5;
          v83 = sqrtf(v45);
g4_m128_raw(a1) = LODWORD(v83);
          v5 = v80;
        }
g4_m128_raw(v40) = *(unsigned int *)(v5 + 88);
        v46 = 0.5 /g4_m128_lane<float>(a1, 0);
g4_m128_raw(v41) = *(unsigned int *)(v5 + 96);
g4_m128_raw(v42) = *(unsigned int *)(v5 + 68);
g4_m128_lane<float>(a1, 0) =g4_m128_lane<float>(a1, 0) * 0.5;
g4_m128_lane<float>(v42, 0) = (float)(g4_m128_lane<float>(v42, 0) - *(float *)(v5 + 80)) * v46;
g4_m128_lane<float>(v41, 0) = (float)(g4_m128_lane<float>(v41, 0) - *(float *)(v5 + 72)) * v46;
g4_m128_lane<float>(v40, 0) = (float)(g4_m128_lane<float>(v40, 0) - *(float *)(v5 + 100)) * v46;
      }
      else
      {
        v35 = v32 > v31;
        v84 = 1;
        v85 = 2;
        v86 = 0;
        v74 = 16 * v35;
        if ( v33 > *(float *)(v5 + 64 + 4 * v35 + 16 * v35) )
        {
          v62 = 16;
          v64 = 0;
          v74 = 32;
          v77 = 1;
          v79 = 0;
          v35 = 2;
        }
        else
        {
          v79 = *(&v84 + v35);
          v77 = *(&v84 + v79);
          v64 = 16 * v79;
          v62 = 16 * v77;
        }
        v82 = v5 + 64 + v74;
        v75 = v5 + 64 + v64;
        v36 = v5 + 64 + v62;
        v37 = (float)(*(float *)(v82 + 4 * v35) - (float)(*(float *)(v75 + 4 * v79) + *(float *)(v36 + 4 * v77))) + 1.0;
        v38 = fsqrt(v37);
        if ( __builtin_isnan(v38) )
        {
          v66 = v35;
          v68 = v5;
          v72 = sqrtf(v37);
          v38 = v72;
          v35 = v66;
          v5 = v68;
        }
        v39 = *(float *)(v75 + 4 * v77) - *(float *)(v36 + 4 * v79);
        *(&v87 + v35) = v38 * 0.5;
        *(float *)&v90 = v39 * (float)(0.5 / v38);
        *(&v87 + v79) = (float)(*(float *)(v82 + 4 * v79) + *(float *)(v75 + 4 * v35)) * (float)(0.5 / v38);
        *(&v87 + v77) = (float)(*(float *)(v82 + 4 * v77) + *(float *)(v36 + 4 * v35)) * (float)(0.5 / v38);
g4_m128_raw(v40) = LODWORD(v87);
g4_m128_raw(v41) = LODWORD(v88);
g4_m128_raw(v42) = LODWORD(v89);
g4_m128_raw(a1) = v90;
      }
      *(uint64_t *)&v43 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v40, v41), 0);
      *(uint32_t *)(v5 + 64) = 0;
      *((uint64_t *)&v43 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v42, a1), 0);
      *(uint32_t *)(v5 + 68) = 0;
      *(g4_int128_t *)(v5 + 96) = v43;
      *(uint32_t *)(v5 + 72) = 0;
      *(uint32_t *)(v5 + 76) = 0;
      *(uint32_t *)(v5 + 80) = 0;
      *(uint32_t *)(v5 + 84) = 0;
      *(uint32_t *)(v5 + 88) = 0;
      *(uint32_t *)(v5 + 92) = 0;
      a2[5] = v5 + 128;
      v44 = (uint32_t *)a2[6];
      *v44 = 1065353216;
      v44[1] = 0;
      v44[2] = 0;
      v44[3] = 0;
      v44[4] = 0;
      v44[5] = 1065353216;
      v44[6] = 0;
      v44[7] = 0;
      v44[8] = 0;
      v44[9] = 0;
      v44[10] = 1065353216;
      v44[11] = 0;
      v6 = a2;
      v5 = a2[5];
    }
    else
    {
      v6 = a2;
    }
    v7 = nullptr;
    while ( 1 )
    {
      v8 = ((uint32_t)(uintptr_t)(v7) << 7) + v5 - v6[3];
      v9 = *(uint32_t *)(a3 + 4 * (uint32_t)(uintptr_t)(v7++));
      *(uint32_t *)(v9 + 160) = v8;
      if ( v7 == a4 )
        break;
      v5 = v6[5];
    }
    v51 = a2[5];
    v63 = a2[6] + 48 * (*(uint32_t *)(*(uint32_t *)a3 + 160) >> 7);
    v78 = v51;
    v76 = (uint32_t *)v63;
    v73 = nullptr;
    a2[5] = hkRigidMotionUtilApplyForcesAndBuildAccumulators(*a2, a3, a4, 224, v51);
    v50 = v63 + 16;
    v49 = v63 + 32;
    v10 = v51 + 80;
    v11 = v51 + 64;
    v12 = v51 + 96;
    do
    {
      v81 = v78 - v51;
      *v76 = *(uint32_t *)(v78 - v51 + v11);
      v76[1] = *(uint32_t *)(v78 - v51 + v11 + 4);
      v76[2] = *(uint32_t *)(v78 - v51 + v11 + 8);
      v76[3] = *(uint32_t *)(v78 - v51 + v11 + 12);
      v23 = (char *)v76 - v63;
      *(uint32_t *)&v23[v50] = *(uint32_t *)(v78 + 80);
      *(uint32_t *)&v23[v50 + 4] = *(uint32_t *)(v78 + 84);
      *(uint32_t *)&v23[v50 + 8] = *(uint32_t *)(v78 + 88);
      *(uint32_t *)&v23[v50 + 12] = *(uint32_t *)(v78 + 92);
      *(uint32_t *)&v23[v49] = *(uint32_t *)(v78 - v51 + v12);
      *(uint32_t *)&v23[v49 + 4] = *(uint32_t *)(v78 - v51 + v12 + 4);
      *(uint32_t *)&v23[v49 + 8] = *(uint32_t *)(v78 - v51 + v12 + 8);
      *(uint32_t *)&v23[v49 + 12] = *(uint32_t *)(v78 - v51 + v12 + 12);
      *(uint8_t *)(v78 + 1) = 1;
      v24 = *(float *)(v78 + 64);
      v25 = *(float *)(v78 + 84);
      v26 = *(float *)(v78 + 104);
      v27 = (float)(v24 + v25) + v26;
      if ( v27 <= 0.0 )
      {
        v13 = v25 > v24;
        v84 = 1;
        v60 = v78 + 64;
        v85 = 2;
        v86 = 0;
        v69 = 16 * v13;
        if ( v26 > *(float *)(v78 + 64 + 4 * v13 + 16 * v13) )
        {
          v52 = 16;
          v57 = 0;
          v69 = 32;
          v65 = 1;
          v67 = 0;
          v13 = 2;
        }
        else
        {
          v67 = *(&v84 + v13);
          v65 = *(&v84 + v67);
          v57 = 16 * v67;
          v52 = 16 * v65;
        }
        v53 = v11;
        v14 = v60 + v69;
        v61 = v60 + v57;
        v70 = v14;
        v58 = v52 + v78 + 64;
        v15 = *(float *)(v14 + 4 * v13);
        v11 = v53;
        v16 = (float)(v15 - (float)(*(float *)(v61 + 4 * v67) + *(float *)(v58 + 4 * v65))) + 1.0;
        v17 = fsqrt(v16);
        if ( __builtin_isnan(v17) )
        {
          v47 = v12;
          v48 = v53;
          v54 = v13;
          v56 = sqrtf(v16);
          v12 = v47;
          v17 = v56;
          v11 = v48;
          v13 = v54;
        }
        v18 = *(float *)(v61 + 4 * v65) - *(float *)(v58 + 4 * v67);
        *(&v87 + v13) = v17 * 0.5;
        *(float *)&v90 = v18 * (float)(0.5 / v17);
        *(&v87 + v67) = (float)(*(float *)(v70 + 4 * v67) + *(float *)(v61 + 4 * v13)) * (float)(0.5 / v17);
        *(&v87 + v65) = (float)(*(float *)(v70 + 4 * v65) + *(float *)(v58 + 4 * v13)) * (float)(0.5 / v17);
        v19 = v87;
        v20 = v88;
        v21 = v89;
        v22 = *(float *)&v90;
      }
      else
      {
        v28 = v27 + 1.0;
        v29 = fsqrt(v28);
        if ( __builtin_isnan(v29) )
        {
          v55 = v12;
          v59 = v11;
          v71 = sqrtf(v28);
          v12 = v55;
          v29 = v71;
          v11 = v59;
        }
        v30 = 0.5 / v29;
        v22 = v29 * 0.5;
        v21 = (float)(*(float *)(v78 + 68) - *(float *)(v78 + 80)) * v30;
        v20 = (float)(*(float *)(v78 + 96) - *(float *)(v78 + 72)) * v30;
        v19 = (float)(*(float *)(v78 + 88) - *(float *)(v78 + 100)) * v30;
      }
      ++v73;
      *(float *)(v81 + v12) = v19;
      v78 += 128;
      *(float *)(v81 + v12 + 4) = v20;
      v76 += 12;
      *(float *)(v81 + v12 + 8) = v21;
      *(float *)(v81 + v12 + 12) = v22;
      *(uint32_t *)(v81 + v11) = 0;
      *(uint32_t *)(v81 + v11 + 4) = 0;
      *(uint32_t *)(v81 + v11 + 8) = 0;
      *(uint32_t *)(v81 + v11 + 12) = 0;
      *(uint32_t *)(v81 + v10) = 0;
      *(uint32_t *)(v81 + v10 + 4) = 0;
      *(uint32_t *)(v81 + v10 + 8) = 0;
      *(uint32_t *)(v81 + v10 + 12) = 0;
    }
    while ( v73 != a4 );
    result = (uint8_t *)a2[5];
    *result = 3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::internalAddJacobianSchemas  (binary VA: 0x175a5a0)
// Original: hkpConstraintSolverSetup::internalAddJacobianSchemas
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintSolverSetup::internalAddJacobianSchemas(int a1, int *a2, int a3, int *a4)
{
  int v4;
  int v5;
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  g4_int128_t v13;
  float v14; // xmm2_4
  __m128 v15;
  float v16; // xmm1_4
  float v17; // xmm0_4
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  __m128 v26;
  __m128 v27;
  __m128 v28;
  g4_int128_t v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  unsigned int v35;
  uint32_t *v36;
  int *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint16_t *v47;
  int v48;
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm0_4
  float v53; // xmm4_4
  float v54; // xmm0_4
  float v55; // xmm4_4
  uint32_t *result;
  int v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_i;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint8_t _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef float _g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef uint32_t _g4_t_v98[3];
  typedef unsigned int _g4_t_v99;
  typedef unsigned int _g4_t_v100;
  typedef unsigned int _g4_t_v101;
  typedef unsigned int _g4_t_v102;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v58)) > _g4_s0 ? (12u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v59)) > _g4_s1 ? (20u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_i)) > _g4_s2 ? (24u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v61)) > _g4_s3 ? (28u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v62)) > _g4_s4 ? (28u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v63)) > _g4_s5 ? (28u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v64)) > _g4_s6 ? (32u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v65)) > _g4_s7 ? (32u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v66)) > _g4_s8 ? (32u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v67)) > _g4_s9 ? (40u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v68)) > _g4_s10 ? (40u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v69)) > _g4_s11 ? (40u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v70)) > _g4_s12 ? (44u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v71)) > _g4_s13 ? (44u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v72)) > _g4_s14 ? (44u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v73)) > _g4_s15 ? (44u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v74)) > _g4_s16 ? (44u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v75)) > _g4_s17 ? (48u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v76)) > _g4_s18 ? (48u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v77)) > _g4_s19 ? (48u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v78)) > _g4_s20 ? (48u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v79)) > _g4_s21 ? (48u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v80)) > _g4_s22 ? (48u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v81)) > _g4_s23 ? (52u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v82)) > _g4_s24 ? (56u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v83)) > _g4_s25 ? (56u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v84)) > _g4_s26 ? (56u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v85)) > _g4_s27 ? (56u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v86)) > _g4_s28 ? (56u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v87)) > _g4_s29 ? (56u + sizeof(_g4_t_v87)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v88)) > _g4_s30 ? (60u + sizeof(_g4_t_v88)) : _g4_s30,
    _g4_s32 = (60u + sizeof(_g4_t_v89)) > _g4_s31 ? (60u + sizeof(_g4_t_v89)) : _g4_s31,
    _g4_s33 = (60u + sizeof(_g4_t_v90)) > _g4_s32 ? (60u + sizeof(_g4_t_v90)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v91)) > _g4_s33 ? (60u + sizeof(_g4_t_v91)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v92)) > _g4_s34 ? (60u + sizeof(_g4_t_v92)) : _g4_s34,
    _g4_s36 = (60u + sizeof(_g4_t_v93)) > _g4_s35 ? (60u + sizeof(_g4_t_v93)) : _g4_s35,
    _g4_s37 = (60u + sizeof(_g4_t_v94)) > _g4_s36 ? (60u + sizeof(_g4_t_v94)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v95)) > _g4_s37 ? (64u + sizeof(_g4_t_v95)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v96)) > _g4_s38 ? (68u + sizeof(_g4_t_v96)) : _g4_s38,
    _g4_s40 = (72u + sizeof(_g4_t_v97)) > _g4_s39 ? (72u + sizeof(_g4_t_v97)) : _g4_s39,
    _g4_s41 = (84u + sizeof(_g4_t_v98)) > _g4_s40 ? (84u + sizeof(_g4_t_v98)) : _g4_s40,
    _g4_s42 = (96u + sizeof(_g4_t_v99)) > _g4_s41 ? (96u + sizeof(_g4_t_v99)) : _g4_s41,
    _g4_s43 = (100u + sizeof(_g4_t_v100)) > _g4_s42 ? (100u + sizeof(_g4_t_v100)) : _g4_s42,
    _g4_s44 = (104u + sizeof(_g4_t_v101)) > _g4_s43 ? (104u + sizeof(_g4_t_v101)) : _g4_s43,
    _g4_s45 = (108u + sizeof(_g4_t_v102)) > _g4_s44 ? (108u + sizeof(_g4_t_v102)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 48u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 48u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 48u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 56u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 56u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 56u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 56u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 56u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 60u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 60u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 60u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 60u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 60u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 60u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 64u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 68u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 72u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 84u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 96u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 100u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 104u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 108u);

  v81 = *(uint32_t **)(a1 + 8);
  for ( i = (unsigned int)(uintptr_t)(&a2[a3]); i > (unsigned int)(uintptr_t)(a2); *(uint32_t *)(v57 + 92) = 0 )
  {
    v85 = *a2;
    v77 = *(uint8_t *)(a1 + *(uint8_t *)(*a2 + 28) + 80);
    v90 = *(uint32_t *)(*a2 + 48);
    v72 = *(uint32_t *)(v90 + 4);
    v69 = *(uint32_t *)(v90 + 8);
    v30 = *(uint32_t *)(a1 + 12);
    v31 = v30 + *(uint32_t *)(v72 + 160);
    v32 = v30 + *(uint32_t *)(v69 + 160);
    v81[12] = v31;
    v81[13] = v32;
    v33 = *(uint32_t *)(a1 + 24);
    v34 = (uint32_t *)(v33 + 48 * (*(uint32_t *)(*(uint32_t *)(v90 + 4) + 160) >> 7));
    v35 = *(uint32_t *)(*(uint32_t *)(v90 + 8) + 160);
    *(uint8_t *)(v31 + 1) = 0;
    *(uint8_t *)(v32 + 1) = 0;
    v36 = (uint32_t *)(v33 + 48 * (v35 >> 7));
    *(uint32_t *)(v31 + 64) = *v34;
    *(uint32_t *)(v31 + 68) = v34[1];
    *(uint32_t *)(v31 + 72) = v34[2];
    *(uint32_t *)(v31 + 76) = v34[3];
    *(uint32_t *)(v31 + 80) = v34[4];
    *(uint32_t *)(v31 + 84) = v34[5];
    *(uint32_t *)(v31 + 88) = v34[6];
    *(uint32_t *)(v31 + 92) = v34[7];
    *(uint32_t *)(v31 + 96) = v34[8];
    *(uint32_t *)(v31 + 100) = v34[9];
    *(uint32_t *)(v31 + 104) = v34[10];
    *(uint32_t *)(v31 + 108) = v34[11];
    *(uint32_t *)(v32 + 64) = *v36;
    *(uint32_t *)(v32 + 68) = v36[1];
    *(uint32_t *)(v32 + 72) = v36[2];
    *(uint32_t *)(v32 + 76) = v36[3];
    *(uint32_t *)(v32 + 80) = v36[4];
    *(uint32_t *)(v32 + 84) = v36[5];
    *(uint32_t *)(v32 + 88) = v36[6];
    *(uint32_t *)(v32 + 92) = v36[7];
    *(uint32_t *)(v32 + 96) = v36[8];
    *(uint32_t *)(v32 + 100) = v36[9];
    *(uint32_t *)(v32 + 104) = v36[10];
    *(uint32_t *)(v32 + 108) = v36[11];
    v81[14] = v72 + 240;
    v81[19] = v85;
    v81[15] = v69 + 240;
    v98[1] = *(uint32_t *)(*(uint32_t *)(v85 + 48) + 28);
    v81[21] = (uint16_t)(*(uint32_t *)(*(uint32_t *)(v90 + 4) + 160) >> 7);
    v81[22] = (uint16_t)(*(uint32_t *)(*(uint32_t *)(v90 + 8) + 160) >> 7);
    v37 = a4;
    v98[2] = *(uint32_t *)(*(uint32_t *)(v85 + 48) + 28);
    v38 = a4[1];
    if ( v38 == (a4[2] & 0x3FFFFFFF) )
    {
      v74 = v32;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a4, 12, v58);
      v32 = v74;
      v37 = a4;
      v38 = a4[1];
    }
    v73 = v32;
    v39 = *v37;
    a4[1] = v38 + 1;
    v40 = v39 + 12 * v38;
    v41 = a1 + 16 * v77;
    *(uint32_t *)v40 = v85;
    *(uint32_t *)(v40 + 4) = *(uint32_t *)(v41 + 40);
    *(float *)(v40 + 8) = fminf(*(float *)(*(uint32_t *)(v90 + 4) + 92), *(float *)(*(uint32_t *)(v90 + 8) + 92));
    v98[0] = *(uint32_t *)(v41 + 40);
    v42 = (*(int (**)(uint32_t))(**(uint32_t **)(v85 + 12) + 20))(*(uint32_t *)(v85 + 12));
    v43 = a1 + 16 * v77;
    v44 = v73;
    if ( v42 == 11 )
    {
      v58 = 1;
      hkSimpleContactConstraintData_fireCallbacks(*(uint32_t *)(v85 + 12), v81, *(uint32_t *)(*(uint32_t *)(v85 + 12) + 40));
      v43 = a1 + 16 * v77;
      v44 = v73;
    }
    v45 = *(uint32_t *)(v85 + 48);
    if ( (*(uint8_t *)(v45 + 18) & 4) != 0 )
    {
      v92 = v44;
      v79 = v43;
      (*(void (**)(uint32_t, uint32_t *, uint32_t *, int))(**(uint32_t **)(v85 + 12) + 96))(
        *(uint32_t *)(v85 + 12),
        v81,
        v98,
        v58);
      v43 = v79;
      v44 = v92;
      v45 = *(uint32_t *)(v85 + 48);
    }
    v46 = *(uint16_t *)(v45 + 16);
    v47 = *(uint16_t **)(v45 + 12);
    v91 = v44;
    v78 = v43;
    if ( *v47 == 29 )
    {
      hkSimpleContactConstraintDataBuildJacobian(v47, v81, 1, v98);
      v57 = v91;
      v48 = v78;
    }
    else
    {
      hkSolverBuildJacobianFromAtomsNotContact(v47, v46, v81, v98);
      v48 = v78;
      v57 = v91;
    }
    *(uint32_t *)(v48 + 40) = v98[0];
    *(uint32_t *)(a1 + 96) += 4 * *(uint16_t *)(*(uint32_t *)(v85 + 48) + 24);
    v49 = *(float *)(v31 + 64);
    *(uint8_t *)(v31 + 1) = 1;
g4_m128_raw(v12) = *(unsigned int *)(v31 + 84);
    v50 = *(float *)(v31 + 104);
    v51 = (float)(v49 +g4_m128_lane<float>(v12, 0)) + v50;
    if ( v51 <= 0.0 )
    {
      v4 =g4_m128_lane<float>(v12, 0) > v49;
      v75 = v31 + 64;
      v95 = 1;
      v96 = 2;
      v70 = 16 * v4;
      v97 = 0;
      if ( v50 > *(float *)(v31 + 64 + 4 * v4 + 16 * v4) )
      {
        v61 = 16;
        v67 = 0;
        v70 = 32;
        v82 = 1;
        v88 = 0;
        v4 = 2;
      }
      else
      {
        v88 = *(&v95 + v4);
        v82 = *(&v95 + v88);
        v67 = 16 * v88;
        v61 = 16 * v82;
      }
      v71 = v75 + v70;
      v5 = v61 + v75;
      v6 = *(float *)(v75 + v67 + 4 * v88);
      v68 = v75 + v67;
      v7 = (float)(*(float *)(v71 + 4 * v4) - (float)(v6 + *(float *)(v61 + v75 + 4 * v82))) + 1.0;
      v8 = fsqrt(v7);
      if ( __builtin_isnan(v8) )
      {
        v62 = v4;
        v65 = v57;
        v80 = sqrtf(v7);
        v4 = v62;
        v8 = v80;
        v57 = v65;
      }
      *((float *)&v99 + v4) = v8 * 0.5;
      *(float *)&v102 = (float)(*(float *)(v68 + 4 * v82) - *(float *)(v5 + 4 * v88)) * (float)(0.5 / v8);
      *((float *)&v99 + v88) = (float)(*(float *)(v71 + 4 * v88) + *(float *)(v68 + 4 * v4)) * (float)(0.5 / v8);
      *((float *)&v99 + v82) = (float)(*(float *)(v71 + 4 * v82) + *(float *)(v5 + 4 * v4)) * (float)(0.5 / v8);
g4_m128_raw(v9) = v99;
g4_m128_raw(v10) = v100;
g4_m128_raw(v11) = v101;
g4_m128_raw(v12) = v102;
    }
    else
    {
      v52 = v51 + 1.0;
g4_m128_lane<float>(v12, 0) = fsqrt(v52);
      if ( __builtin_isnan(g4_m128_lane<float>(v12, 0)) )
      {
        v87 = v57;
        v94 = sqrtf(v52);
        v57 = v87;
g4_m128_raw(v12) = LODWORD(v94);
      }
      v53 = 0.5 /g4_m128_lane<float>(v12, 0);
g4_m128_raw(v9) = *(unsigned int *)(v31 + 88);
g4_m128_raw(v10) = *(unsigned int *)(v31 + 96);
g4_m128_raw(v11) = *(unsigned int *)(v31 + 68);
g4_m128_lane<float>(v12, 0) =g4_m128_lane<float>(v12, 0) * 0.5;
g4_m128_lane<float>(v11, 0) = (float)(g4_m128_lane<float>(v11, 0) - *(float *)(v31 + 80)) * v53;
g4_m128_lane<float>(v10, 0) = (float)(g4_m128_lane<float>(v10, 0) - *(float *)(v31 + 72)) * v53;
g4_m128_lane<float>(v9, 0) = (float)(g4_m128_lane<float>(v9, 0) - *(float *)(v31 + 100)) * v53;
    }
    *(uint64_t *)&v13 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v9, v10), 0);
    *(uint32_t *)(v31 + 64) = 0;
    *((uint64_t *)&v13 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v11, v12), 0);
    *(uint32_t *)(v31 + 68) = 0;
    *(g4_int128_t *)(v31 + 96) = v13;
    *(uint32_t *)(v31 + 72) = 0;
    *(uint32_t *)(v31 + 76) = 0;
    *(uint32_t *)(v31 + 80) = 0;
    *(uint32_t *)(v31 + 84) = 0;
    *(uint32_t *)(v31 + 88) = 0;
    *(uint32_t *)(v31 + 92) = 0;
    v14 = *(float *)(v57 + 64);
    *(uint8_t *)(v57 + 1) = 1;
g4_m128_raw(v15) = *(unsigned int *)(v57 + 84);
    v16 = *(float *)(v57 + 104);
    v17 = (float)(v14 +g4_m128_lane<float>(v15, 0)) + v16;
    if ( v17 > 0.0 )
    {
      v54 = v17 + 1.0;
g4_m128_lane<float>(v15, 0) = fsqrt(v54);
      if ( __builtin_isnan(g4_m128_lane<float>(v15, 0)) )
      {
        v86 = v57;
        v93 = sqrtf(v54);
        v57 = v86;
g4_m128_raw(v15) = LODWORD(v93);
      }
      v55 = 0.5 /g4_m128_lane<float>(v15, 0);
g4_m128_raw(v26) = *(unsigned int *)(v57 + 88);
g4_m128_raw(v27) = *(unsigned int *)(v57 + 96);
g4_m128_raw(v28) = *(unsigned int *)(v57 + 68);
g4_m128_lane<float>(v15, 0) =g4_m128_lane<float>(v15, 0) * 0.5;
g4_m128_lane<float>(v28, 0) = (float)(g4_m128_lane<float>(v28, 0) - *(float *)(v57 + 80)) * v55;
g4_m128_lane<float>(v27, 0) = (float)(g4_m128_lane<float>(v27, 0) - *(float *)(v57 + 72)) * v55;
g4_m128_lane<float>(v26, 0) = (float)(g4_m128_lane<float>(v26, 0) - *(float *)(v57 + 100)) * v55;
    }
    else
    {
      v18 = v57 + 64;
      v19 =g4_m128_lane<float>(v15, 0) > v14;
      v95 = 1;
      v96 = 2;
      v20 = 16 * v19;
      v97 = 0;
      if ( v16 > *(float *)(v57 + 64 + 4 * v19 + 16 * v19) )
      {
        v64 = 16;
        v83 = 0;
        v20 = 32;
        v89 = 1;
        v76 = 0;
        v19 = 2;
      }
      else
      {
        v76 = *(&v95 + v19);
        v89 = *(&v95 + v76);
        v83 = 16 * v76;
        v64 = 16 * v89;
      }
      v21 = v20 + v18;
      v22 = v18 + v83;
      v84 = v64 + v18;
      v23 = (float)(*(float *)(v21 + 4 * v19) - (float)(*(float *)(v22 + 4 * v76) + *(float *)(v64 + v18 + 4 * v89)))
          + 1.0;
      v24 = fsqrt(v23);
      if ( __builtin_isnan(v24) )
      {
        v59 = v19;
        v63 = v57;
        v66 = sqrtf(v23);
        v19 = v59;
        v24 = v66;
        v57 = v63;
      }
      v25 = *(float *)(v22 + 4 * v89);
      *((float *)&v99 + v19) = v24 * 0.5;
      *(float *)&v102 = (float)(v25 - *(float *)(v84 + 4 * v76)) * (float)(0.5 / v24);
      *((float *)&v99 + v76) = (float)(*(float *)(v21 + 4 * v76) + *(float *)(v22 + 4 * v19)) * (float)(0.5 / v24);
      *((float *)&v99 + v89) = (float)(*(float *)(v21 + 4 * v89) + *(float *)(v84 + 4 * v19)) * (float)(0.5 / v24);
g4_m128_raw(v26) = v99;
g4_m128_raw(v27) = v100;
g4_m128_raw(v28) = v101;
g4_m128_raw(v15) = v102;
    }
    *(uint64_t *)&v29 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v26, v27), 0);
    ++a2;
    *((uint64_t *)&v29 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v28, v15), 0);
    *(uint32_t *)(v57 + 64) = 0;
    *(g4_int128_t *)(v57 + 96) = v29;
    *(uint32_t *)(v57 + 68) = 0;
    *(uint32_t *)(v57 + 72) = 0;
    *(uint32_t *)(v57 + 76) = 0;
    *(uint32_t *)(v57 + 80) = 0;
    *(uint32_t *)(v57 + 84) = 0;
    *(uint32_t *)(v57 + 88) = 0;
  }
  **(uint32_t **)(a1 + 40) = 0;
  **(uint32_t **)(a1 + 56) = 0;
  result = *(uint32_t **)(a1 + 72);
  *result = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::internalIsMemoryOkForNewAccumulators  (binary VA: 0x175aec0)
// Original: hkpConstraintSolverSetup::internalIsMemoryOkForNewAccumulators
// ----------------------------------------------------------------------------
bool * hkpConstraintSolverSetup::internalIsMemoryOkForNewAccumulators(bool *a1, uint32_t *a2, int a3, int a4)
{
  *a1 = a2[4] - a2[5] - 16 >= (a4 + (a2[5] == a2[3])) << 7;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::internalIsMemoryOkForNewJacobianSchemas  (binary VA: 0x175aef0)
// Original: hkpConstraintSolverSetup::internalIsMemoryOkForNewJacobianSchemas
// ----------------------------------------------------------------------------
bool * hkpConstraintSolverSetup::internalIsMemoryOkForNewJacobianSchemas(bool *a1, uint32_t *a2, int *a3, int a4)
{
  int *v4;
  unsigned int i;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v12;
  int v13;
  int v14;

  v4 = a3;
  v12 = a2[10];
  v13 = a2[14];
  v14 = a2[18];
  for ( i = a2[24]; &a3[a4] > v4; i += 4 * v9 )
  {
    v6 = *v4++;
    v7 = *(uint8_t *)(v6 + 28);
    v8 = *(uint32_t *)(v6 + 48);
    v9 = *(uint16_t *)(v8 + 24);
    *(&v12 + *((uint8_t *)a2 + v7 + 80)) += *(uint16_t *)(v8 + 20);
  }
  v10 = false;
  if ( a2[23] >= i && a2[9] >= (unsigned int)(v12 + 4) && a2[13] >= (unsigned int)(v13 + 4) )
    v10 = a2[17] >= (unsigned int)(v14 + 4);
  *a1 = v10;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintSolverSetup::subSolve  (binary VA: 0x175afa0)
// Original: hkpConstraintSolverSetup::subSolve
// ----------------------------------------------------------------------------
int hkpConstraintSolverSetup::subSolve(uint32_t *a1, int a2)
{
  int v2;
  void *s;
  int v4;
  uint32_t *v5;
  int v6;
  int result;

  if ( a2 == 0 )
  {
    a1[11] = a1[8];
    a1[15] = a1[12];
    a1[19] = a1[16];
  }
  v2 = a1[24];
  s = (void *)a1[25];
  v4 = (v2 - (int)(uintptr_t)(s)) >> 2;
  if ( v4 > 0 )
  {
    memset(s, 0, 4 * v4);
    v2 = a1[24];
  }
  a1[25] = v2;
  v5 = a1;
  do
  {
    v6 = v5[11];
    result = v5[10];
    if ( v6 != result )
    {
      hkSolveStepJacobians(a1[1], v6, a1[3], a1[22]);
      result = v5[10];
    }
    v5[11] = result;
    v5 += 4;
  }
  while ( v5 != a1 + 12 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::getType  (binary VA: 0x175f760)
// Original: hkpConstraintInstance::getType
// ----------------------------------------------------------------------------
int hkpConstraintInstance::getType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::entityAddedCallback  (binary VA: 0x175f770)
// Original: hkpConstraintInstance::entityAddedCallback
// ----------------------------------------------------------------------------
void hkpConstraintInstance::entityAddedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::entityDeletedCallback  (binary VA: 0x175f780)
// Original: hkpConstraintInstance::entityDeletedCallback
// ----------------------------------------------------------------------------
void hkpConstraintInstance::entityDeletedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::entityRemovedCallback  (binary VA: 0x175f790)
// Original: hkpConstraintInstance::entityRemovedCallback
// ----------------------------------------------------------------------------
hkpConstraintInstance::Self * hkpConstraintInstance::entityRemovedCallback(hkpConstraintInstance::Self *self, hkpWorldCallbackUtil::Self **a2)
{
  hkpConstraintInstance::Self *result;

  result = self;
  if ( *((uint32_t *)self + 2) != 0 )
    return (hkpConstraintInstance::Self *)hkpWorldOperationUtil::removeConstraintImmediately(a2[2], self, 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::Destroy  (binary VA: 0x175f7d0)
// Original: hkpConstraintInstance::~hkpConstraintInstance
// ----------------------------------------------------------------------------
void hkpConstraintInstance::Destroy(hkpConstraintInstance::Self *self)
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
  uint16_t *v11;
  int address;
  uint16_t *v13;
  int v14;
  int v15;
  int32_t v16; // kr08_4
  int32_t v17;
  int32_t v18; // ett
  int16_t v19; // si
  int v20;
  int v21;
  hkpConstraintInstance::Self *v22;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FDA8);
  hkpConstraintCallbackUtil::fireConstraintDeleted(self, v22);
  v1 = *((uint32_t *)self + 5);
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
  v6 = *((uint32_t *)self + 6);
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
  v11 = *((uint16_t **)self + 4);
  if ( v11 != nullptr && *v11 > 0x1Du )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    while ( 1 )
    {
      v13 = *((uint16_t **)v11 + 5);
      (*(void (**)(uint32_t, uint16_t *, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v11,
        v11[8]);
      if ( *v13 <= 0x1Du )
        break;
      v11 = v13;
    }
  }
  v14 = *((uint32_t *)self + 3);
  if ( v14 != 0 && *(uint16_t *)(v14 + 6) != 0 )
  {
    do
    {
      v16 = *(uint32_t *)(v14 + 4);
      HIWORD(v15) = HIWORD(v16);
      LOWORD(v15) = 0;
      v17 = v15 | (uint16_t)(v16 - 1);
      v18 = v16;
    }
    while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)(v14 + 4), v18, v17) );
    if ( (uint16_t)v17 == 0 )
      G4_VCALL<void>(v14, 16);
  }
  hkStringPtr::Destroy((hkpConstraintInstance::Self *)((char *)self + 40));
  v19 = *((uint16_t *)self + 19);
  v20 = *((uint32_t *)self + 8);
  if ( v19 >= 0 )
  {
    v21 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)v21 + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)v21 + 44),
      v20,
      4 * (v19 & 0x3FFF));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::Destroy_ea175f980  (binary VA: 0x175f980)
// Original: hkpConstraintInstance::~hkpConstraintInstance
// ----------------------------------------------------------------------------
void hkpConstraintInstance::Destroy_ea175f980(hkpConstraintInstance::Self *self)
{
  int v1;
  int v2;

  hkpConstraintInstance::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::Construct  (binary VA: 0x175f9e0)
// Original: hkpConstraintInstance::hkpConstraintInstance
// ----------------------------------------------------------------------------
int hkpConstraintInstance::Construct(int a1, int a2, int a3, int a4, char a5)
{
  int v5;
  int v6;
  int v7;
  int v9;
  int32_t v10; // kr00_4
  int v11;
  int32_t v12; // kr04_4
  int v13;
  int32_t v14; // kr08_4

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209FDA8);
  *(uint32_t *)(a1 + 12) = a4;
  *(uint8_t *)(a1 + 28) = a5;
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint8_t *)(a1 + 29) = 1;
  *(uint8_t *)(a1 + 30) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint16_t *)(a1 + 36) = 0;
  *(uint16_t *)(a1 + 38) = 0x8000;
  hkStringPtr::Construct((hkStringPtr::Self *)(a1 + 40));
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 20) = a2;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = -16;
  *(uint32_t *)(a1 + 24) = a3;
  *(uint32_t *)(a1 + 16) = 0;
  hkReferencedObject::lockAll();
  v5 = *(uint32_t *)(a1 + 20);
  if ( *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v12 = *(uint32_t *)(v5 + 4);
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
    }
    while ( v12 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v5 + 4),
                     v12,
                     v11 | (uint16_t)(v12 + 1)) );
  }
  v6 = *(uint32_t *)(a1 + 24);
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
  {
    do
    {
      v14 = *(uint32_t *)(v6 + 4);
      HIWORD(v13) = HIWORD(v14);
      LOWORD(v13) = 0;
    }
    while ( v14 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v6 + 4),
                     v14,
                     v13 | (uint16_t)(v14 + 1)) );
  }
  v7 = *(uint32_t *)(a1 + 12);
  if ( *(uint16_t *)(v7 + 6) != 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v7 + 4);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
    }
    while ( v10 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v7 + 4),
                     v10,
                     v9 | (uint16_t)(v10 + 1)) );
  }
  return hkReferencedObject::unlockAll();
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::Construct  (binary VA: 0x175fb20)
// Original: hkpConstraintInstance::hkpConstraintInstance
// ----------------------------------------------------------------------------
void hkpConstraintInstance::Construct(int a1, char a2)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209FDA8);
  *(uint8_t *)(a1 + 28) = a2;
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 29) = 1;
  *(uint8_t *)(a1 + 30) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint16_t *)(a1 + 36) = 0;
  *(uint16_t *)(a1 + 38) = 0x8000;
  hkStringPtr::Construct((hkStringPtr::Self *)(a1 + 40));
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = -16;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::setPriority  (binary VA: 0x175fba0)
// Original: hkpConstraintInstance::setPriority
// ----------------------------------------------------------------------------
int hkpConstraintInstance::setPriority(int a1, char a2)
{
  int result;

  *(uint8_t *)(a1 + 28) = a2;
  result = *(uint32_t *)(a1 + 48);
  if ( result != 0 )
    *(uint8_t *)(result + 19) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::getSimulationIsland  (binary VA: 0x175fbc0)
// Original: hkpConstraintInstance::getSimulationIsland
// ----------------------------------------------------------------------------
int hkpConstraintInstance::getSimulationIsland(hkpConstraintInstance::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 5);
  if ( *(uint8_t *)(v1 + 232) == 5 )
    return *(uint32_t *)(*((uint32_t *)self + 6) + 200);
  else
    return *(uint32_t *)(v1 + 200);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::addConstraintListener  (binary VA: 0x175fbf0)
// Original: hkpConstraintInstance::addConstraintListener
// ----------------------------------------------------------------------------
hkpConstraintListener::Self * hkpConstraintInstance::addConstraintListener(hkpConstraintInstance::Self *self, hkpConstraintListener::Self *a2)
{
  hkpConstraintInstance::Self *v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  hkpConstraintInstance::Self *v8;
  int v10;

  v2 = self;
  v3 = *((uint16_t *)self + 18);
  v4 = *((uint32_t **)self + 8);
  if ( (uint16_t)v3 == 0 )
  {
LABEL_7:
    if ( (uint16_t)v3 == (*((uint16_t *)v2 + 19) & 0x3FFF) )
    {
      hkSmallArrayUtil::reserveMore((hkpConstraintInstance::Self *)((char *)self + 32), &loc_4, v10);
      v8 = self;
      v3 = *((uint16_t *)self + 18);
      v4 = *((uint32_t **)self + 8);
    }
    else
    {
      v8 = self;
    }
    *((uint16_t *)v8 + 18) = v3 + 1;
    v4[v3] = (uint32_t)(uintptr_t)(a2);
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
    v2 = self;
    goto LABEL_7;
  }
  v7 = *((uint32_t **)self + 8);
LABEL_11:
  *v7 = (uint32_t)(uintptr_t)(a2);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::removeConstraintListener  (binary VA: 0x175fcb0)
// Original: hkpConstraintInstance::removeConstraintListener
// ----------------------------------------------------------------------------
hkpConstraintInstance::Self * hkpConstraintInstance::removeConstraintListener(hkpConstraintListener::Self ***self, hkpConstraintListener::Self *a2)
{
  hkpConstraintInstance::Self *result;
  hkpConstraintListener::Self **v3;
  int v4;
  hkpConstraintInstance::Self *v5;

  result = (hkpConstraintInstance::Self *)self;
  v3 = *(self + 8);
  if ( *((uint16_t *)self + 18) != 0 )
  {
    if ( *v3 == a2 )
    {
      v5 = (hkpConstraintInstance::Self *)*(self + 8);
      goto LABEL_7;
    }
    result = (hkpConstraintInstance::Self *)(v3 + 1);
    v4 = 0;
    while ( ++v4 < *((uint16_t *)self + 18) )
    {
      v5 = result;
      result = (hkpConstraintInstance::Self *)((char *)result + 4);
      if ( *((hkpConstraintListener::Self **)result - 1) == a2 )
        goto LABEL_7;
    }
  }
  v5 = (hkpConstraintInstance::Self *)(v3 - 1);
LABEL_7:
  *(uint32_t *)v5 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::pointNullsToFixedRigidBody  (binary VA: 0x175fd00)
// Original: hkpConstraintInstance::pointNullsToFixedRigidBody
// ----------------------------------------------------------------------------
void hkpConstraintInstance::pointNullsToFixedRigidBody(hkpConstraintInstance::Self *self)
{
  hkpConstraintInstance::Self *v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  hkpConstraintInstance::Self *v6;

  v1 = self;
  do
  {
    if ( *((uint32_t *)v1 + 5) == 0 && *((uint32_t *)self + 5) != *((uint32_t *)self + 6) )
    {
      v2 = *(uint32_t *)&(&byte_8)[*((uint32_t *)self + 5) ^ *((uint32_t *)self + 6)];
      if ( v2 != 0 )
      {
        v3 = *(uint32_t *)(v2 + 36);
        *((uint32_t *)v1 + 5) = v3;
        if ( *(uint16_t *)(v3 + 6) != 0 )
        {
          v6 = v1;
          do
          {
            v5 = *(uint32_t *)(v3 + 4);
            HIWORD(v4) = HIWORD(v5);
            LOWORD(v4) = 0;
          }
          while ( v5 != __sync_val_compare_and_swap(
                          (volatile int32_t *)(v3 + 4),
                          v5,
                          v4 | (uint16_t)(v5 + 1)) );
          v1 = v6;
        }
      }
    }
    v1 = (hkpConstraintInstance::Self *)((char *)v1 + 4);
  }
  while ( v1 != (hkpConstraintInstance::Self *)((char *)self + 8) );
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::isConstrainedToWorld  (binary VA: 0x175fd80)
// Original: hkpConstraintInstance::isConstrainedToWorld
// ----------------------------------------------------------------------------
hkpConstraintInstance::Self * hkpConstraintInstance::isConstrainedToWorld(hkpConstraintInstance::Self *self, int a2)
{
  hkpConstraintInstance::Self *result;
  int v3;
  int v4;

  result = self;
  v3 = *(uint32_t *)(a2 + 24);
  *(uint8_t *)self = v3 == 0 || (v4 = *(uint32_t *)(*(uint32_t *)(a2 + 20) + 8)) != 0 && v3 == *(uint32_t *)(v4 + 36);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::transform  (binary VA: 0x175fdc0)
// Original: hkpConstraintInstance::transform
// ----------------------------------------------------------------------------
char * hkpConstraintInstance::transform(hkpConstraintInstance::Self *self, const hkTransformf::Self *a2)
{
  hkpConstraintInstance::Self *v2;
  char *result;
  int i;
  int v5; // kr04_4
  int *v6;
  char *v7;
  hkVector4f::Self *v8;
  hkTransformf::Self *v9;
  char v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  int v29;
  char *v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  int v36;
  int v37;
  char *v38;
  int v39;
  int v40;
  int v41;
  char *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  char *v50;
  int v51;
  int v52;
  int v53;
  char *v54;
  int v55;
  int v56;
  int v57;
  char *v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  char *v66;
  hkpConstraintInstance::Self **v67;

  v67 = &self;
  v2 = self;
  v9 = (hkTransformf::Self *)(a2);
  result = (char *)hkpConstraintInstance::isConstrainedToWorld((hkpConstraintInstance::Self *)&v10, (int)(uintptr_t)(self));
  if ( v10 != 0 )
  {
    for ( i = *((uint32_t *)v2 + 3);
          G4_VCALL<int>(i, 20) == 13
       || G4_VCALL<int>(i, 20) == 12;
          i = G4_VCALL<int>(i, 104) )
    {
      ;
    }
    v5 = G4_VCALL<int>(i, 20);
    result = (char *)dword_20B9FF4 + (uint32_t)jpt_17600C8[v5];
    switch ( v5 )
    {
      case 0:
        hkVector4f::setTransformedPos((hkVector4f::Self *)(i + 48), v9, (const hkVector4f::Self *)(i + 48));
        result = (char *)hkpBallAndSocketConstraintData::setInBodySpace(
                           (hkpBallAndSocketConstraintData::Self *)i,
                           (const hkVector4f::Self *)(i + 32),
                           (const hkVector4f::Self *)(i + 48));
        break;
      case 1:
        v35 = *(uint32_t *)(i + 32);
        v36 = *(uint32_t *)(i + 36);
        v37 = *(uint32_t *)(i + 40);
        v38 = *(char **)(i + 44);
        v39 = *(uint32_t *)(i + 48);
        v40 = *(uint32_t *)(i + 52);
        v41 = *(uint32_t *)(i + 56);
        v42 = *(char **)(i + 60);
        v43 = *(uint32_t *)(i + 64);
        v44 = *(uint32_t *)(i + 68);
        v45 = *(uint32_t *)(i + 72);
        v46 = *(uint32_t *)(i + 76);
        v47 = *(uint32_t *)(i + 80);
        v48 = *(uint32_t *)(i + 84);
        v49 = *(uint32_t *)(i + 88);
        v50 = *(char **)(i + 92);
        v51 = *(uint32_t *)(i + 96);
        v52 = *(uint32_t *)(i + 100);
        v53 = *(uint32_t *)(i + 104);
        v54 = *(char **)(i + 108);
        v55 = *(uint32_t *)(i + 112);
        v56 = *(uint32_t *)(i + 116);
        v57 = *(uint32_t *)(i + 120);
        v58 = *(char **)(i + 124);
        v59 = *(uint32_t *)(i + 128);
        v60 = *(uint32_t *)(i + 132);
        v61 = *(uint32_t *)(i + 136);
        v62 = *(uint32_t *)(i + 140);
        v63 = *(uint32_t *)(i + 144);
        v64 = *(uint32_t *)(i + 148);
        v65 = *(uint32_t *)(i + 152);
        v66 = *(char **)(i + 156);
        v27 = v35;
        v28 = v36;
        v29 = v37;
        v30 = v38;
        v31 = v51;
        v34 = v54;
        v32 = v52;
        v33 = v53;
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v63, v9, (const hkVector4f::Self *)&v63);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&v31, v9, (const hkVector4f::Self *)&v31);
        result = (char *)hkpHingeConstraintData::setInBodySpace(
                           (hkpHingeConstraintData::Self *)i,
                           (const hkVector4f::Self *)&v47,
                           (const hkVector4f::Self *)&v63,
                           (const hkVector4f::Self *)&v27,
                           (const hkVector4f::Self *)&v31);
        break;
      case 2:
        v35 = *(uint32_t *)(i + 32);
        v36 = *(uint32_t *)(i + 36);
        v37 = *(uint32_t *)(i + 40);
        v38 = *(char **)(i + 44);
        v39 = *(uint32_t *)(i + 48);
        v40 = *(uint32_t *)(i + 52);
        v41 = *(uint32_t *)(i + 56);
        v42 = *(char **)(i + 60);
        v43 = *(uint32_t *)(i + 64);
        v44 = *(uint32_t *)(i + 68);
        v45 = *(uint32_t *)(i + 72);
        v46 = *(uint32_t *)(i + 76);
        v47 = *(uint32_t *)(i + 80);
        v48 = *(uint32_t *)(i + 84);
        v49 = *(uint32_t *)(i + 88);
        v50 = *(char **)(i + 92);
        v51 = *(uint32_t *)(i + 96);
        v52 = *(uint32_t *)(i + 100);
        v53 = *(uint32_t *)(i + 104);
        v54 = *(char **)(i + 108);
        v55 = *(uint32_t *)(i + 112);
        v56 = *(uint32_t *)(i + 116);
        v57 = *(uint32_t *)(i + 120);
        v58 = *(char **)(i + 124);
        v59 = *(uint32_t *)(i + 128);
        v60 = *(uint32_t *)(i + 132);
        v61 = *(uint32_t *)(i + 136);
        v62 = *(uint32_t *)(i + 140);
        v63 = *(uint32_t *)(i + 144);
        v64 = *(uint32_t *)(i + 148);
        v65 = *(uint32_t *)(i + 152);
        v66 = *(char **)(i + 156);
        v19 = v35;
        v20 = v36;
        v21 = v37;
        v22 = v38;
        v25 = v53;
        v26 = v54;
        v31 = v55;
        v23 = v51;
        v24 = v52;
        v27 = v39;
        v32 = v56;
        v29 = v41;
        v28 = v40;
        v30 = v42;
        v33 = v57;
        v34 = v58;
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v63, v9, (const hkVector4f::Self *)&v63);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&v23, v9, (const hkVector4f::Self *)&v23);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&v31, v9, (const hkVector4f::Self *)&v31);
        result = (char *)hkpLimitedHingeConstraintData::setInBodySpace(
                           (hkpLimitedHingeConstraintData::Self *)i,
                           (const hkVector4f::Self *)&v47,
                           (const hkVector4f::Self *)&v63,
                           (const hkVector4f::Self *)&v19,
                           (const hkVector4f::Self *)&v23,
                           (const hkVector4f::Self *)&v27,
                           (const hkVector4f::Self *)&v31);
        break;
      case 3:
      case 4:
      case 5:
      case 10:
      case 11:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
        return result;
      case 6:
        v35 = *(uint32_t *)(i + 32);
        v36 = *(uint32_t *)(i + 36);
        v37 = *(uint32_t *)(i + 40);
        v38 = *(char **)(i + 44);
        v39 = *(uint32_t *)(i + 48);
        v40 = *(uint32_t *)(i + 52);
        v41 = *(uint32_t *)(i + 56);
        v42 = *(char **)(i + 60);
        v43 = *(uint32_t *)(i + 64);
        v44 = *(uint32_t *)(i + 68);
        v45 = *(uint32_t *)(i + 72);
        v46 = *(uint32_t *)(i + 76);
        v47 = *(uint32_t *)(i + 80);
        v48 = *(uint32_t *)(i + 84);
        v49 = *(uint32_t *)(i + 88);
        v50 = *(char **)(i + 92);
        v51 = *(uint32_t *)(i + 96);
        v52 = *(uint32_t *)(i + 100);
        v53 = *(uint32_t *)(i + 104);
        v54 = *(char **)(i + 108);
        v55 = *(uint32_t *)(i + 112);
        v56 = *(uint32_t *)(i + 116);
        v57 = *(uint32_t *)(i + 120);
        v58 = *(char **)(i + 124);
        v59 = *(uint32_t *)(i + 128);
        v60 = *(uint32_t *)(i + 132);
        v61 = *(uint32_t *)(i + 136);
        v62 = *(uint32_t *)(i + 140);
        v63 = *(uint32_t *)(i + 144);
        v64 = *(uint32_t *)(i + 148);
        v65 = *(uint32_t *)(i + 152);
        v7 = *(char **)(i + 156);
        v11 = v35;
        v12 = v36;
        v13 = v37;
        v14 = v38;
        v15 = v39;
        v16 = v40;
        v17 = v41;
        v18 = v42;
        v19 = v47;
        v66 = v7;
        v20 = v48;
        v22 = v50;
        v23 = v51;
        v24 = v52;
        v25 = v53;
        v26 = v54;
        v27 = v55;
        v28 = v56;
        v21 = v49;
        v29 = v57;
        v33 = v65;
        v30 = v58;
        v31 = v63;
        v34 = v7;
        v32 = v64;
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v31, v9, (const hkVector4f::Self *)&v31);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&v23, v9, (const hkVector4f::Self *)&v23);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&v27, v9, (const hkVector4f::Self *)&v27);
        result = (char *)hkpPrismaticConstraintData::setInBodySpace(
                           (hkpPrismaticConstraintData::Self *)i,
                           (const hkVector4f::Self *)&v19,
                           (const hkVector4f::Self *)&v31,
                           (const hkVector4f::Self *)&v11,
                           (const hkVector4f::Self *)&v23,
                           (const hkVector4f::Self *)&v15,
                           (const hkVector4f::Self *)&v27);
        break;
      case 7:
        v35 = *(uint32_t *)(i + 32);
        v36 = *(uint32_t *)(i + 36);
        v37 = *(uint32_t *)(i + 40);
        v38 = *(char **)(i + 44);
        v39 = *(uint32_t *)(i + 48);
        v40 = *(uint32_t *)(i + 52);
        v41 = *(uint32_t *)(i + 56);
        v42 = *(char **)(i + 60);
        v43 = *(uint32_t *)(i + 64);
        v44 = *(uint32_t *)(i + 68);
        v45 = *(uint32_t *)(i + 72);
        v46 = *(uint32_t *)(i + 76);
        v47 = *(uint32_t *)(i + 80);
        v48 = *(uint32_t *)(i + 84);
        v49 = *(uint32_t *)(i + 88);
        v50 = *(char **)(i + 92);
        v51 = *(uint32_t *)(i + 96);
        v52 = *(uint32_t *)(i + 100);
        v53 = *(uint32_t *)(i + 104);
        v54 = *(char **)(i + 108);
        v55 = *(uint32_t *)(i + 112);
        v56 = *(uint32_t *)(i + 116);
        v57 = *(uint32_t *)(i + 120);
        v58 = *(char **)(i + 124);
        v59 = *(uint32_t *)(i + 128);
        v60 = *(uint32_t *)(i + 132);
        v61 = *(uint32_t *)(i + 136);
        v62 = *(uint32_t *)(i + 140);
        v63 = *(uint32_t *)(i + 144);
        v64 = *(uint32_t *)(i + 148);
        v65 = *(uint32_t *)(i + 152);
        v66 = *(char **)(i + 156);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v63, v9, (const hkVector4f::Self *)&v63);
        hkVector4f::setRotatedDir((hkVector4f::Self *)(i + 112), v9, (const hkVector4f::Self *)(i + 112));
        hkVector4f::setRotatedDir((hkVector4f::Self *)(i + 96), v9, (const hkVector4f::Self *)(i + 96));
        result = (char *)hkpRagdollConstraintData::setInBodySpace(
                           (hkpRagdollConstraintData::Self *)i,
                           (const hkVector4f::Self *)&v47,
                           (const hkVector4f::Self *)&v63,
                           (const hkVector4f::Self *)(i + 48),
                           (const hkVector4f::Self *)(i + 112),
                           (const hkVector4f::Self *)(i + 32),
                           (const hkVector4f::Self *)(i + 96));
        break;
      case 8:
        v35 = *(uint32_t *)(i + 32);
        v36 = *(uint32_t *)(i + 36);
        v37 = *(uint32_t *)(i + 40);
        v38 = *(char **)(i + 44);
        v51 = *(uint32_t *)(i + 48);
        v52 = *(uint32_t *)(i + 52);
        v53 = *(uint32_t *)(i + 56);
        v54 = *(char **)(i + 60);
        v8 = *(hkVector4f::Self **)(i + 84);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v51, v9, (const hkVector4f::Self *)&v51);
        *(uint32_t *)(i + 32) = v35;
        *(uint32_t *)(i + 36) = v36;
        *(uint32_t *)(i + 40) = v37;
        *(uint32_t *)(i + 44) = (uint32_t)(uintptr_t)(v38);
        *(uint32_t *)(i + 48) = v51;
        *(uint32_t *)(i + 52) = v52;
        *(uint32_t *)(i + 56) = v53;
        result = v54;
        *(uint32_t *)(i + 84) = (uint32_t)(uintptr_t)(v8);
        *(uint32_t *)(i + 60) = (uint32_t)(uintptr_t)(result);
        *(uint32_t *)(i + 88) = (uint32_t)(uintptr_t)(v8);
        break;
      case 9:
        v35 = *(uint32_t *)(i + 32);
        v36 = *(uint32_t *)(i + 36);
        v37 = *(uint32_t *)(i + 40);
        v38 = *(char **)(i + 44);
        v39 = *(uint32_t *)(i + 48);
        v40 = *(uint32_t *)(i + 52);
        v41 = *(uint32_t *)(i + 56);
        v42 = *(char **)(i + 60);
        v43 = *(uint32_t *)(i + 64);
        v44 = *(uint32_t *)(i + 68);
        v45 = *(uint32_t *)(i + 72);
        v46 = *(uint32_t *)(i + 76);
        v47 = *(uint32_t *)(i + 80);
        v48 = *(uint32_t *)(i + 84);
        v49 = *(uint32_t *)(i + 88);
        v50 = *(char **)(i + 92);
        v51 = *(uint32_t *)(i + 96);
        v52 = *(uint32_t *)(i + 100);
        v53 = *(uint32_t *)(i + 104);
        v54 = *(char **)(i + 108);
        v55 = *(uint32_t *)(i + 112);
        v56 = *(uint32_t *)(i + 116);
        v57 = *(uint32_t *)(i + 120);
        v58 = *(char **)(i + 124);
        v59 = *(uint32_t *)(i + 128);
        v60 = *(uint32_t *)(i + 132);
        v61 = *(uint32_t *)(i + 136);
        v62 = *(uint32_t *)(i + 140);
        v63 = *(uint32_t *)(i + 144);
        v64 = *(uint32_t *)(i + 148);
        v65 = *(uint32_t *)(i + 152);
        v66 = *(char **)(i + 156);
        v11 = v47;
        v16 = v64;
        v12 = v48;
        v13 = v49;
        v15 = v63;
        v17 = v65;
        v14 = v50;
        v18 = v66;
        v19 = *(uint32_t *)(i + 96);
        v20 = *(uint32_t *)(i + 100);
        v21 = *(uint32_t *)(i + 104);
        v22 = *(char **)(i + 108);
        v23 = *(uint32_t *)(i + 240);
        v24 = *(uint32_t *)(i + 244);
        v25 = *(uint32_t *)(i + 248);
        v26 = *(char **)(i + 252);
        v27 = *(uint32_t *)(i + 288);
        v28 = *(uint32_t *)(i + 292);
        v29 = *(uint32_t *)(i + 296);
        v30 = *(char **)(i + 300);
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v15, v9, (const hkVector4f::Self *)&v15);
        v31 = *(uint32_t *)(i + 304);
        v32 = *(uint32_t *)(i + 308);
        v33 = *(uint32_t *)(i + 312);
        v34 = *(char **)(i + 316);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&v19, v9, (const hkVector4f::Self *)&v19);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&v27, v9, (const hkVector4f::Self *)&v27);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&v31, v9, (const hkVector4f::Self *)&v31);
        result = (char *)hkpWheelConstraintData::setInBodySpace(
                           (hkpWheelConstraintData::Self *)i,
                           (const hkVector4f::Self *)&v11,
                           (const hkVector4f::Self *)&v15,
                           (const hkVector4f::Self *)&v23,
                           (const hkVector4f::Self *)&v27,
                           (const hkVector4f::Self *)&v19,
                           (const hkVector4f::Self *)&v31);
        break;
      case 14:
        v31 = *(uint32_t *)(i + 80);
        v32 = *(uint32_t *)(i + 84);
        v33 = *(uint32_t *)(i + 88);
        v34 = *(char **)(i + 92);
        v35 = *(uint32_t *)(i + 144);
        v36 = *(uint32_t *)(i + 148);
        v37 = *(uint32_t *)(i + 152);
        v38 = *(char **)(i + 156);
        v6 = (int *)(i + 16 * *(uint8_t *)(i + 162) + 96);
        v51 = *v6;
        v52 = v6[1];
        v53 = v6[2];
        v54 = (char *)v6[3];
        hkVector4f::setTransformedPos((hkVector4f::Self *)&v35, v9, (const hkVector4f::Self *)&v35);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&v51, v9, (const hkVector4f::Self *)&v51);
        result = hkpPointToPlaneConstraintData::setInBodySpace(
                   (hkpPointToPlaneConstraintData::Self *)i,
                   (const hkVector4f::Self *)&v31,
                   (const hkVector4f::Self *)&v35,
                   (const hkVector4f::Self *)&v51);
        break;
      case 23:
        v35 = *(uint32_t *)(i + 32);
        v36 = *(uint32_t *)(i + 36);
        v37 = *(uint32_t *)(i + 40);
        v38 = *(char **)(i + 44);
        v39 = *(uint32_t *)(i + 48);
        v40 = *(uint32_t *)(i + 52);
        v41 = *(uint32_t *)(i + 56);
        v42 = *(char **)(i + 60);
        v43 = *(uint32_t *)(i + 64);
        v44 = *(uint32_t *)(i + 68);
        v45 = *(uint32_t *)(i + 72);
        v46 = *(uint32_t *)(i + 76);
        v47 = *(uint32_t *)(i + 80);
        v48 = *(uint32_t *)(i + 84);
        v49 = *(uint32_t *)(i + 88);
        v50 = *(char **)(i + 92);
        hkTransformf::setMul((hkTransformf::Self *)&v51, v9, (const hkTransformf::Self *)(i + 96));
        result = (char *)hkpFixedConstraintData::setInBodySpace(
                           (hkpFixedConstraintData::Self *)i,
                           (const hkTransformf::Self *)&v35,
                           (const hkTransformf::Self *)&v51);
        break;
      case 24:
        v35 = *(uint32_t *)(i + 32);
        v36 = *(uint32_t *)(i + 36);
        v37 = *(uint32_t *)(i + 40);
        v38 = *(char **)(i + 44);
        v39 = *(uint32_t *)(i + 48);
        v40 = *(uint32_t *)(i + 52);
        v41 = *(uint32_t *)(i + 56);
        v42 = *(char **)(i + 60);
        v43 = *(uint32_t *)(i + 64);
        v44 = *(uint32_t *)(i + 68);
        v45 = *(uint32_t *)(i + 72);
        v46 = *(uint32_t *)(i + 76);
        v47 = *(uint32_t *)(i + 80);
        v48 = *(uint32_t *)(i + 84);
        v49 = *(uint32_t *)(i + 88);
        v50 = *(char **)(i + 92);
        hkTransformf::setMul((hkTransformf::Self *)&v51, v9, (const hkTransformf::Self *)(i + 96));
        result = (char *)hkpDeformableFixedConstraintData::setInBodySpace(
                           (hkpDeformableFixedConstraintData::Self *)i,
                           (const hkTransformf::Self *)&v35,
                           (const hkTransformf::Self *)&v51);
        break;
      default:
        result = (char *)v5;
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::getPivotsInWorld  (binary VA: 0x1760f90)
// Original: hkpConstraintInstance::getPivotsInWorld
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpConstraintInstance::getPivotsInWorld(hkpConstraintDataUtils::Self **self, hkVector4f::Self *a2, hkVector4f::Self *a3)
{
  uint32_t *PivotB;
  const hkTransformf::Self *v4;
  typedef const hkpConstraintData::Self *_g4_t_v6;
  typedef const hkpConstraintData::Self *_g4_t_v7;
  typedef g4_int128_t _g4_t_v8;
  typedef uint32_t _g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v9)) > _g4_s3 ? (32u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v8 = *(g4_int128_t *)hkpConstraintDataUtils::getPivotA(*(self + 3), v6);
  PivotB = (uint32_t *)hkpConstraintDataUtils::getPivotB(*(self + 3), v7);
  v9[0] = *PivotB;
  v9[1] = PivotB[1];
  v9[2] = PivotB[2];
  v9[3] = PivotB[3];
  v4 = *((const hkTransformf::Self **)*(self + 6) + 6);
  hkVector4f::setTransformedPos(a2, *((const hkTransformf::Self **)*(self + 5) + 6), (const hkVector4f::Self *)&v8);
  return hkVector4f::setTransformedPos(a3, v4, (const hkVector4f::Self *)v9);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::setVirtualMassInverse  (binary VA: 0x1761040)
// Original: hkpConstraintInstance::setVirtualMassInverse
// ----------------------------------------------------------------------------
uint16_t * hkpConstraintInstance::setVirtualMassInverse(__m128i a1, hkpConstraintOwner::Self **self, const hkVector4f::Self *a3, const hkVector4f::Self *a4)
{
  uint16_t *result;
  int address;
  int v6;
  hkpModifierConstraintAtom::Self *v7;
  int v8;
  hkpConstraintOwner::Self *v9;
  int v10;

  result = hkpWorldConstraintUtil::findModifier((int)(uintptr_t)(self), 31);
  if ( result != nullptr )
  {
    *((uint32_t *)result + 8) = *(uint32_t *)a3;
    *((uint32_t *)result + 9) = *((uint32_t *)a3 + 1);
    *((uint32_t *)result + 10) = *((uint32_t *)a3 + 2);
    *((uint32_t *)result + 11) = *((uint32_t *)a3 + 3);
    *((uint32_t *)result + 12) = *(uint32_t *)a4;
    *((uint32_t *)result + 13) = *((uint32_t *)a4 + 1);
    *((uint32_t *)result + 14) = *((uint32_t *)a4 + 2);
    *((uint32_t *)result + 15) = *((uint32_t *)a4 + 3);
  }
  else
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           64);
    *(uint16_t *)v6 = 31;
    *(uint16_t *)(v6 + 16) = 64;
    *(uint32_t *)(v6 + 32) = *(uint32_t *)a3;
    *(uint32_t *)(v6 + 36) = *((uint32_t *)a3 + 1);
    *(uint32_t *)(v6 + 40) = *((uint32_t *)a3 + 2);
    *(uint32_t *)(v6 + 44) = *((uint32_t *)a3 + 3);
    *(uint32_t *)(v6 + 48) = *(uint32_t *)a4;
    *(uint32_t *)(v6 + 52) = *((uint32_t *)a4 + 1);
    *(uint32_t *)(v6 + 56) = *((uint32_t *)a4 + 2);
    *(uint32_t *)(v6 + 60) = *((uint32_t *)a4 + 3);
    return (uint16_t *)hkpWorldConstraintUtil::addModifier(
                                 self,
                                 *(self + 2),
                                 (hkpConstraintOwner::Self *)v6,
                                 v7,
                                 a1,
                                 v8,
                                 v9,
                                 v10);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::enable  (binary VA: 0x1761130)
// Original: hkpConstraintInstance::enable
// ----------------------------------------------------------------------------
int hkpConstraintInstance::enable(hkpConstraintInstance::Self **self)
{
  hkpConstraintOwner::Self *v2;

  return hkpResponseModifier::enableConstraint((hkpResponseModifier::Self *)self, *(self + 2), v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::disable  (binary VA: 0x1761160)
// Original: hkpConstraintInstance::disable
// ----------------------------------------------------------------------------
int hkpConstraintInstance::disable(hkpConstraintInstance::Self **self)
{
  hkpConstraintOwner::Self *v2;

  return hkpResponseModifier::disableConstraint((hkpResponseModifier::Self *)self, *(self + 2), v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::setEnabled  (binary VA: 0x1761190)
// Original: hkpConstraintInstance::setEnabled
// ----------------------------------------------------------------------------
int hkpConstraintInstance::setEnabled(hkpConstraintInstance::Self **a1, char a2)
{
  if ( a2 != 0 )
    return hkpConstraintInstance::enable(a1);
  else
    return hkpConstraintInstance::disable(a1);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::isEnabled  (binary VA: 0x17611d0)
// Original: hkpConstraintInstance::isEnabled
// ----------------------------------------------------------------------------
hkpConstraintInstance::Self * hkpConstraintInstance::isEnabled(hkpConstraintInstance::Self *self, int a2)
{
  bool v2;

  v2 = hkpWorldConstraintUtil::findModifier(a2, 34) == nullptr;
  *(uint8_t *)self = v2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::replaceEntity  (binary VA: 0x1761210)
// Original: hkpConstraintInstance::replaceEntity
// ----------------------------------------------------------------------------
int hkpConstraintInstance::replaceEntity(hkpConstraintInstance::Self *self, hkpEntity::Self *a2, hkpEntity::Self *a3)
{
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v8;
  int32_t v9; // kr04_4
  bool v10;

  v10 = *((uint32_t *)self + 5) != (uint32_t)(uintptr_t)(a2);
  if ( *((uint16_t *)a3 + 3) != 0 )
  {
    do
    {
      v9 = *((uint32_t *)a3 + 1);
      HIWORD(v8) = HIWORD(v9);
      LOWORD(v8) = 0;
    }
    while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)a3 + 1, v9, v8 | (uint16_t)(v9 + 1)) );
  }
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(a2, 16);
  }
  *((uint32_t *)self + v10 + 5) = (uint32_t)(uintptr_t)(a3);
  return v10 + 4;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintInstance::setFixedRigidBodyPointersToZero  (binary VA: 0x17612b0)
// Original: hkpConstraintInstance::setFixedRigidBodyPointersToZero
// ----------------------------------------------------------------------------
int hkpConstraintInstance::setFixedRigidBodyPointersToZero(hkpConstraintInstance::Self *self, hkpWorld::Self *a2)
{
  int i;
  int v3;
  int result;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;

  for ( i = 0; i != 2; ++i )
  {
    v3 = *((uint32_t *)self + i + 5);
    if ( v3 == *((uint32_t *)a2 + 9) )
    {
      result = v3 + 4;
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v9 = i;
        do
        {
          v6 = *(uint32_t *)(v3 + 4);
          HIWORD(v5) = HIWORD(v6);
          LOWORD(v5) = 0;
          v7 = v5 | (uint16_t)(v6 - 1);
          v8 = v6;
          result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v7);
        }
        while ( v8 != result );
        i = v9;
        if ( (uint16_t)v7 == 0 )
          result = G4_VCALL<int>(v3, 16);
      }
      *((uint32_t *)self + i + 5) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintOwner::addConstraintToCriticalLockedIsland  (binary VA: 0x17621b0)
// Original: hkpConstraintOwner::addConstraintToCriticalLockedIsland
// ----------------------------------------------------------------------------
void hkpConstraintOwner::addConstraintToCriticalLockedIsland()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintOwner::removeConstraintFromCriticalLockedIsland  (binary VA: 0x17621c0)
// Original: hkpConstraintOwner::removeConstraintFromCriticalLockedIsland
// ----------------------------------------------------------------------------
void hkpConstraintOwner::removeConstraintFromCriticalLockedIsland()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintOwner::addCallbackRequest  (binary VA: 0x17621d0)
// Original: hkpConstraintOwner::addCallbackRequest
// ----------------------------------------------------------------------------
void hkpConstraintOwner::addCallbackRequest()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintOwner::checkAccessRw  (binary VA: 0x17621e0)
// Original: hkpConstraintOwner::checkAccessRw
// ----------------------------------------------------------------------------
void hkpConstraintOwner::checkAccessRw()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintOwner::Destroy  (binary VA: 0x1762460)
// Original: hkpConstraintOwner::~hkpConstraintOwner
// ----------------------------------------------------------------------------
void hkpConstraintOwner::Destroy(hkpConstraintOwner::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintOwner::Destroy_ea1762a40  (binary VA: 0x1762a40)
// Original: hkpConstraintOwner::~hkpConstraintOwner
// ----------------------------------------------------------------------------
void hkpConstraintOwner::Destroy_ea1762a40(hkpConstraintOwner::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstanceAction::applyAction  (binary VA: 0x1763870)
// Original: hkpConstraintChainInstanceAction::applyAction
// ----------------------------------------------------------------------------
void hkpConstraintChainInstanceAction::applyAction()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstanceAction::clone  (binary VA: 0x1763880)
// Original: hkpConstraintChainInstanceAction::clone
// ----------------------------------------------------------------------------
int hkpConstraintChainInstanceAction::clone()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstanceAction::entityRemovedCallback  (binary VA: 0x1763890)
// Original: hkpConstraintChainInstanceAction::entityRemovedCallback
// ----------------------------------------------------------------------------
int hkpConstraintChainInstanceAction::entityRemovedCallback(hkpConstraintChainInstanceAction::Self *self, hkpEntity::Self *a2)
{
  return (*(int (**)(uint32_t, hkpEntity::Self *))(**((uint32_t **)self + 6) + 24))(*((uint32_t *)self + 6), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstanceAction::getEntities  (binary VA: 0x17638b0)
// Original: hkpConstraintChainInstanceAction::getEntities
// ----------------------------------------------------------------------------
unsigned int hkpConstraintChainInstanceAction::getEntities(int a1, int *a2)
{
  int v2;
  unsigned int v3;
  unsigned int result;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v2 = *(uint32_t *)(a1 + 24);
  v3 = *(uint32_t *)(v2 + 60);
  if ( (a2[2] & 0x3FFFFFFF) < (int)v3 )
  {
    if ( a2[2] >= 0 )
    {
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *a2,
        4 * a2[2]);
      v3 = *(uint32_t *)(v2 + 60);
    }
    v13 = 4 * v3;
    v7 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           &v13);
    v8 = v13;
    *a2 = v7;
    v12 = v7;
    a2[2] = v8 / 4;
    v3 = *(uint32_t *)(v2 + 60);
  }
  else
  {
    v12 = *a2;
  }
  a2[1] = v3;
  result = *(uint32_t *)(v2 + 56);
  v11 = result;
  if ( (int)v3 > 0 )
  {
    if ( (v12 >= *(uint32_t *)(v2 + 56) + 16 || result >= v12 + 16) && v3 > 0xB )
    {
      v5 = 0;
      v6 = 0;
      v10 = 4 * (v3 >> 2);
      do
      {
        ++v6;
        *(__m128i *)(v12 + v5) = *(__m128i *)(result + v5);
        v5 += 16;
      }
      while ( v3 >> 2 > v6 );
      result = 4 * (v3 >> 2);
      if ( v3 != v10 )
      {
        *(uint32_t *)(v12 + 16 * (v3 >> 2)) = *(uint32_t *)(v11 + 16 * (v3 >> 2));
        if ( v10 + 1 < (int)v3 )
        {
          *(uint32_t *)(v12 + 4 * (v10 + 1)) = *(uint32_t *)(v11 + 4 * (v10 + 1));
          if ( (int)v3 > v10 + 2 )
          {
            result = v12;
            *(uint32_t *)(v12 + 4 * (v10 + 2)) = *(uint32_t *)(v11 + 4 * (v10 + 2));
          }
        }
      }
    }
    else
    {
      v9 = 0;
      result = v12;
      do
      {
        *(uint32_t *)(v12 + 4 * v9) = *(uint32_t *)(v11 + 4 * v9);
        ++v9;
      }
      while ( v9 != v3 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstanceAction::Destroy  (binary VA: 0x1763a50)
// Original: hkpConstraintChainInstanceAction::~hkpConstraintChainInstanceAction
// ----------------------------------------------------------------------------
void hkpConstraintChainInstanceAction::Destroy(hkpConstraintChainInstanceAction::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkpConstraintChainInstanceAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstanceAction::Destroy_ea1763a90  (binary VA: 0x1763a90)
// Original: hkpConstraintChainInstanceAction::~hkpConstraintChainInstanceAction
// ----------------------------------------------------------------------------
void hkpConstraintChainInstanceAction::Destroy_ea1763a90(hkpConstraintChainInstanceAction::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkpConstraintChainInstanceAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCallbackUtil::fireConstraintAdded  (binary VA: 0x176fd00)
// Original: hkpConstraintCallbackUtil::fireConstraintAdded
// ----------------------------------------------------------------------------
int hkpConstraintCallbackUtil::fireConstraintAdded(hkpConstraintCallbackUtil::Self *self)
{
  uint64_t v1; // rax
  int v2;
  int *address;
  int v4;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint32_t *v8;
  int v9;
  int v10;
  uint16_t v11;
  int v12;
  int v14;
  int v15;
  int v16;

  LODWORD(v1) = *((uint16_t *)self + 18) - 1;
  v14 = v1;
  if ( *((uint16_t *)self + 18) != 0 )
  {
    v2 = 4 * v1;
    do
    {
      LODWORD(v1) = *((uint32_t *)self + 8);
      v16 = *(uint32_t *)(v1 + v2);
      if ( v16 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v4 = *address;
        v5 = v16;
        v6 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
        {
          *v6 = (uint32_t)(uintptr_t)("TtconAddCb");
          v7 = __rdtsc();
          v6[1] = v7;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
          v5 = *(uint32_t *)(*((uint32_t *)self + 8) + v2);
        }
        LODWORD(v1) = G4_VCALL<int>(v5, 8, self);
        v8 = *(uint32_t **)(v4 + 4);
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v4 + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("Et");
          v1 = __rdtsc();
          v8[1] = v1;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
        }
      }
      --v14;
      v2 -= 4;
    }
    while ( v14 != -1 );
    v9 = *((uint16_t *)self + 18) - 1;
    if ( *((uint16_t *)self + 18) != 0 )
    {
      v10 = 4 * v9;
      do
      {
        while ( 1 )
        {
          LODWORD(v1) = *((uint32_t *)self + 8);
          if ( *(uint32_t *)(v1 + v10) == 0 )
          {
            v11 = *((uint16_t *)self + 18) - 1;
            *((uint16_t *)self + 18) = v11;
            if ( v9 < v11 )
              break;
          }
          --v9;
          v10 -= 4;
          if ( v9 == -1 )
            return v1;
        }
        HIDWORD(v1) = v10;
        v12 = v9;
        v15 = v9;
        while ( 1 )
        {
          *(uint32_t *)(v1 + HIDWORD(v1)) = *(uint32_t *)(v1 + HIDWORD(v1) + 4);
          ++v12;
          LODWORD(v1) = *((uint16_t *)self + 18);
          if ( v12 >= (int)v1 )
            break;
          LODWORD(v1) = *((uint32_t *)self + 8);
          HIDWORD(v1) += 4;
        }
        --v9;
        v10 -= 4;
      }
      while ( v15 != 0 );
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCallbackUtil::fireConstraintRemoved  (binary VA: 0x176fe50)
// Original: hkpConstraintCallbackUtil::fireConstraintRemoved
// ----------------------------------------------------------------------------
int hkpConstraintCallbackUtil::fireConstraintRemoved(hkpConstraintCallbackUtil::Self *self)
{
  uint64_t v1; // rax
  int v2;
  int *address;
  int v4;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint32_t *v8;
  int v9;
  int v10;
  uint16_t v11;
  int v12;
  int v14;
  int v15;
  int v16;

  LODWORD(v1) = *((uint16_t *)self + 18) - 1;
  v14 = v1;
  if ( *((uint16_t *)self + 18) != 0 )
  {
    v2 = 4 * v1;
    do
    {
      LODWORD(v1) = *((uint32_t *)self + 8);
      v16 = *(uint32_t *)(v1 + v2);
      if ( v16 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v4 = *address;
        v5 = v16;
        v6 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
        {
          *v6 = (uint32_t)(uintptr_t)("TtconRemCb");
          v7 = __rdtsc();
          v6[1] = v7;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
          v5 = *(uint32_t *)(*((uint32_t *)self + 8) + v2);
        }
        LODWORD(v1) = G4_VCALL<int>(v5, 12, self);
        v8 = *(uint32_t **)(v4 + 4);
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v4 + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("Et");
          v1 = __rdtsc();
          v8[1] = v1;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
        }
      }
      --v14;
      v2 -= 4;
    }
    while ( v14 != -1 );
    v9 = *((uint16_t *)self + 18) - 1;
    if ( *((uint16_t *)self + 18) != 0 )
    {
      v10 = 4 * v9;
      do
      {
        while ( 1 )
        {
          LODWORD(v1) = *((uint32_t *)self + 8);
          if ( *(uint32_t *)(v1 + v10) == 0 )
          {
            v11 = *((uint16_t *)self + 18) - 1;
            *((uint16_t *)self + 18) = v11;
            if ( v9 < v11 )
              break;
          }
          --v9;
          v10 -= 4;
          if ( v9 == -1 )
            return v1;
        }
        HIDWORD(v1) = v10;
        v12 = v9;
        v15 = v9;
        while ( 1 )
        {
          *(uint32_t *)(v1 + HIDWORD(v1)) = *(uint32_t *)(v1 + HIDWORD(v1) + 4);
          ++v12;
          LODWORD(v1) = *((uint16_t *)self + 18);
          if ( v12 >= (int)v1 )
            break;
          LODWORD(v1) = *((uint32_t *)self + 8);
          HIDWORD(v1) += 4;
        }
        --v9;
        v10 -= 4;
      }
      while ( v15 != 0 );
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCallbackUtil::fireConstraintDeleted  (binary VA: 0x176ffa0)
// Original: hkpConstraintCallbackUtil::fireConstraintDeleted
// ----------------------------------------------------------------------------
int hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintCallbackUtil::Self *self)
{
  uint64_t v1; // rax
  int v2;
  int *address;
  int v4;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint32_t *v8;
  int v9;
  int v10;
  uint16_t v11;
  int v12;
  int v14;
  int v15;
  int v16;

  LODWORD(v1) = *((uint16_t *)self + 18) - 1;
  v14 = v1;
  if ( *((uint16_t *)self + 18) != 0 )
  {
    v2 = 4 * v1;
    do
    {
      LODWORD(v1) = *((uint32_t *)self + 8);
      v16 = *(uint32_t *)(v1 + v2);
      if ( v16 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v4 = *address;
        v5 = v16;
        v6 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
        {
          *v6 = (uint32_t)(uintptr_t)("TtconDeletedCb");
          v7 = __rdtsc();
          v6[1] = v7;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
          v5 = *(uint32_t *)(*((uint32_t *)self + 8) + v2);
        }
        LODWORD(v1) = G4_VCALL<int>(v5, 16, self);
        v8 = *(uint32_t **)(v4 + 4);
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v4 + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("Et");
          v1 = __rdtsc();
          v8[1] = v1;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
        }
      }
      --v14;
      v2 -= 4;
    }
    while ( v14 != -1 );
    v9 = *((uint16_t *)self + 18) - 1;
    if ( *((uint16_t *)self + 18) != 0 )
    {
      v10 = 4 * v9;
      do
      {
        while ( 1 )
        {
          LODWORD(v1) = *((uint32_t *)self + 8);
          if ( *(uint32_t *)(v1 + v10) == 0 )
          {
            v11 = *((uint16_t *)self + 18) - 1;
            *((uint16_t *)self + 18) = v11;
            if ( v9 < v11 )
              break;
          }
          --v9;
          v10 -= 4;
          if ( v9 == -1 )
            return v1;
        }
        HIDWORD(v1) = v10;
        v12 = v9;
        v15 = v9;
        while ( 1 )
        {
          *(uint32_t *)(v1 + HIDWORD(v1)) = *(uint32_t *)(v1 + HIDWORD(v1) + 4);
          ++v12;
          LODWORD(v1) = *((uint16_t *)self + 18);
          if ( v12 >= (int)v1 )
            break;
          LODWORD(v1) = *((uint32_t *)self + 8);
          HIDWORD(v1) += 4;
        }
        --v9;
        v10 -= 4;
      }
      while ( v15 != 0 );
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCallbackUtil::fireConstraintBroken  (binary VA: 0x17700f0)
// Original: hkpConstraintCallbackUtil::fireConstraintBroken
// ----------------------------------------------------------------------------
int hkpConstraintCallbackUtil::fireConstraintBroken(int a1)
{
  int v1;
  uint64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  uint16_t v12;
  int v13;
  int v15;
  int v16;
  int v17;

  v1 = *(uint32_t *)(a1 + 4);
  LODWORD(v2) = *(uint16_t *)(v1 + 36) - 1;
  v15 = v2;
  if ( *(uint16_t *)(v1 + 36) != 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(v1 + 32);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtconBrokenCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 24, a1);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    v10 = *(uint16_t *)(v1 + 36) - 1;
    if ( *(uint16_t *)(v1 + 36) != 0 )
    {
      v11 = 4 * v10;
      do
      {
        while ( 1 )
        {
          LODWORD(v2) = *(uint32_t *)(v1 + 32);
          if ( *(uint32_t *)(v2 + v11) == 0 )
          {
            v12 = *(uint16_t *)(v1 + 36) - 1;
            *(uint16_t *)(v1 + 36) = v12;
            if ( v10 < v12 )
              break;
          }
          --v10;
          v11 -= 4;
          if ( v10 == -1 )
            return v2;
        }
        HIDWORD(v2) = v11;
        v13 = v10;
        v16 = v10;
        while ( 1 )
        {
          *(uint32_t *)(v2 + HIDWORD(v2)) = *(uint32_t *)(v2 + HIDWORD(v2) + 4);
          ++v13;
          LODWORD(v2) = *(uint16_t *)(v1 + 36);
          if ( v13 >= (int)v2 )
            break;
          LODWORD(v2) = *(uint32_t *)(v1 + 32);
          HIDWORD(v2) += 4;
        }
        --v10;
        v11 -= 4;
      }
      while ( v16 != 0 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintCallbackUtil::fireConstraintRepaired  (binary VA: 0x1770240)
// Original: hkpConstraintCallbackUtil::fireConstraintRepaired
// ----------------------------------------------------------------------------
int hkpConstraintCallbackUtil::fireConstraintRepaired(int a1)
{
  int v1;
  uint64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  uint16_t v12;
  int v13;
  int v15;
  int v16;
  int v17;

  v1 = *(uint32_t *)(a1 + 4);
  LODWORD(v2) = *(uint16_t *)(v1 + 36) - 1;
  v15 = v2;
  if ( *(uint16_t *)(v1 + 36) != 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(v1 + 32);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtconRepairedCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 28, a1);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    v10 = *(uint16_t *)(v1 + 36) - 1;
    if ( *(uint16_t *)(v1 + 36) != 0 )
    {
      v11 = 4 * v10;
      do
      {
        while ( 1 )
        {
          LODWORD(v2) = *(uint32_t *)(v1 + 32);
          if ( *(uint32_t *)(v2 + v11) == 0 )
          {
            v12 = *(uint16_t *)(v1 + 36) - 1;
            *(uint16_t *)(v1 + 36) = v12;
            if ( v10 < v12 )
              break;
          }
          --v10;
          v11 -= 4;
          if ( v10 == -1 )
            return v2;
        }
        HIDWORD(v2) = v11;
        v13 = v10;
        v16 = v10;
        while ( 1 )
        {
          *(uint32_t *)(v2 + HIDWORD(v2)) = *(uint32_t *)(v2 + HIDWORD(v2) + 4);
          ++v13;
          LODWORD(v2) = *(uint16_t *)(v1 + 36);
          if ( v13 >= (int)v2 )
            break;
          LODWORD(v2) = *(uint32_t *)(v1 + 32);
          HIDWORD(v2) += 4;
        }
        --v10;
        v11 -= 4;
      }
      while ( v16 != 0 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstance::staticClass  (binary VA: 0x1770410)
// Original: hkpConstraintChainInstance::staticClass
// ----------------------------------------------------------------------------
void * hkpConstraintChainInstance::staticClass()
{
  return &hkpConstraintChainInstanceClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainData::Destroy  (binary VA: 0x17707e0)
// Original: hkpConstraintChainData::~hkpConstraintChainData
// ----------------------------------------------------------------------------
void hkpConstraintChainData::Destroy(hkpConstraintChainData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainData::Destroy_ea1770970  (binary VA: 0x1770970)
// Original: hkpConstraintChainData::~hkpConstraintChainData
// ----------------------------------------------------------------------------
void hkpConstraintChainData::Destroy_ea1770970(hkpConstraintChainData::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataCloningUtil::deepClone  (binary VA: 0x177d0c0)
// Original: hkpConstraintDataCloningUtil::deepClone
// ----------------------------------------------------------------------------
hkpMalleableConstraintData::Self * hkpConstraintDataCloningUtil::deepClone(hkpConstraintDataCloningUtil::Self *self)
{
  int v1;
  hkpConstraintDataCloningUtil::Self *v2;
  int v3;
  int address;
  hkpMalleableConstraintData::Self *v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  hkpConstraintDataCloningUtil::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int32_t v16; // kr04_4
  int32_t v17;
  int32_t v18; // ett
  hkpConstraintData::Self *v19;

  v1 = G4_VCALL<int>(self, 20);
  if ( v1 != 12 )
  {
    if ( v1 != 13 )
      return (hkpMalleableConstraintData::Self *)hkpConstraintDataUtils::deepClone(self, v19);
    v2 = (hkpConstraintDataCloningUtil::Self *)G4_VCALL<int>(self, 100);
    v3 = (int)(uintptr_t)(hkpConstraintDataCloningUtil::deepClone(v2, v19));
    if ( v3 != 0 )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v5 = (hkpMalleableConstraintData::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                           *(uint32_t *)(*(uint32_t *)address + 44),
                                           48);
      hkpMalleableConstraintData::Construct(v5, (hkpConstraintData::Self *)v3);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        do
        {
          v7 = *(uint32_t *)(v3 + 4);
          HIWORD(v6) = HIWORD(v7);
          LOWORD(v6) = 0;
          v8 = v6 | (uint16_t)(v7 - 1);
          v9 = v7;
        }
        while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v9, v8) );
        if ( (uint16_t)v8 == 0 )
          G4_VCALL<void>(v3, 16);
      }
      *((uint32_t *)v5 + 8) = *((uint32_t *)self + 8);
      *((uint32_t *)v5 + 2) = *((uint32_t *)self + 2);
      return v5;
    }
    return nullptr;
  }
  v11 = (hkpConstraintDataCloningUtil::Self *)G4_VCALL<int>(self, 100);
  v12 = (int)(uintptr_t)(hkpConstraintDataCloningUtil::deepClone(v11, v19));
  if ( v12 == 0 )
    return nullptr;
  v13 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v14 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v13 + 44) + 8))(*(uint32_t *)(*(uint32_t *)v13 + 44), 48);
  hkpBreakableConstraintData::Construct((hkpBreakableConstraintData::Self *)v14, (hkpConstraintData::Self *)v12);
  if ( *(uint16_t *)(v12 + 6) != 0 )
  {
    do
    {
      v16 = *(uint32_t *)(v12 + 4);
      HIWORD(v15) = HIWORD(v16);
      LOWORD(v15) = 0;
      v17 = v15 | (uint16_t)(v16 - 1);
      v18 = v16;
    }
    while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)(v12 + 4), v18, v17) );
    if ( (uint16_t)v17 == 0 )
      G4_VCALL<void>(v12, 16);
  }
  *(uint32_t *)(v14 + 36) = *((uint32_t *)self + 9);
  *(uint8_t *)(v14 + 40) = *((uint8_t *)self + 40);
  *(uint8_t *)(v14 + 41) = *((uint8_t *)self + 41);
  *(uint32_t *)(v14 + 8) = *((uint32_t *)self + 2);
  return (hkpMalleableConstraintData::Self *)v14;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstance::getType  (binary VA: 0x1785300)
// Original: hkpConstraintChainInstance::getType
// ----------------------------------------------------------------------------
int hkpConstraintChainInstance::getType()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstance::entityRemovedCallback  (binary VA: 0x1785310)
// Original: hkpConstraintChainInstance::entityRemovedCallback
// ----------------------------------------------------------------------------
int hkpConstraintChainInstance::entityRemovedCallback(hkpAction::Self **self, hkpEntity::Self *a2)
{
  int v2;
  int result;
  bool v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = *((uint32_t *)a2 + 2);
  ++*(uint32_t *)(v2 + 140);
  hkpWorld::removeActionImmediately((hkpWorld::Self *)v2, *(self + 17), v5, v6, v7, v8);
  result = hkpWorldOperationUtil::removeConstraintFromCriticalLockedIsland(
             (hkpWorldOperationUtil::Self *)v2,
             (hkpWorld::Self *)self);
  v4 = (*(uint32_t *)(v2 + 140))-- == 1;
  if ( v4 && *(uint8_t *)(v2 + 148) == 0 )
  {
    result = *(uint32_t *)(v2 + 132);
    if ( result != 0 )
      result = hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v2);
    if ( *(uint32_t *)(v2 + 156) == 1 && *(uint32_t *)(v2 + 136) != 0 )
      return hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstance::Destroy  (binary VA: 0x17853b0)
// Original: hkpConstraintChainInstance::~hkpConstraintChainInstance
// ----------------------------------------------------------------------------
void hkpConstraintChainInstance::Destroy(hkpConstraintChainInstance::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;
  int32_t v10; // kr04_4
  int32_t v11;
  int32_t v12; // ett
  int v13;
  int v14;

  v1 = 0;
  v2 = *((uint32_t *)self + 15);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0B48);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 14) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v14 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v14;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 15);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 17);
  if ( *(uint16_t *)(v8 + 6) != 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v8 + 4);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      v11 = v9 | (uint16_t)(v10 - 1);
      v12 = v10;
    }
    while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v12, v11) );
    if ( (uint16_t)v11 == 0 )
      G4_VCALL<void>(v8, 16);
  }
  v13 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 15) = 0;
  if ( v13 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      4 * v13);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  hkpConstraintInstance::Destroy((hkpConstraintInstance::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstance::Destroy_ea17854b0  (binary VA: 0x17854b0)
// Original: hkpConstraintChainInstance::~hkpConstraintChainInstance
// ----------------------------------------------------------------------------
void hkpConstraintChainInstance::Destroy_ea17854b0(hkpConstraintChainInstance::Self *self)
{
  int v1;
  int v2;

  hkpConstraintChainInstance::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 76;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstance::Construct  (binary VA: 0x1785510)
// Original: hkpConstraintChainInstance::hkpConstraintChainInstance
// ----------------------------------------------------------------------------
void hkpConstraintChainInstance::Construct(hkpConstraintChainInstance::Self *self, hkpConstraintChainData::Self *a2)
{
  int address;
  uint32_t *v3;
  int v4;
  int32_t v5; // kr00_4

  hkpConstraintInstance::Construct((int)(uintptr_t)(self), 1);
  *((uint32_t *)self + 14) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0B48);
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v5 = *((uint32_t *)a2 + 1);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
  }
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   28);
  v3[1] = -65535;
  *v3 = ((uint32_t)(uintptr_t)&off_20553A8);
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  hkStringPtr::Construct((hkStringPtr::Self *)(v3 + 5));
  v3[6] = (uint32_t)(uintptr_t)(self);
  *v3 = ((uint32_t)(uintptr_t)&off_209FF68);
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 18) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainInstance::addEntity  (binary VA: 0x1785620)
// Original: hkpConstraintChainInstance::addEntity
// ----------------------------------------------------------------------------
int hkpConstraintChainInstance::addEntity(hkpConstraintChainInstance::Self *self, hkpEntity::Self *a2)
{
  int result;
  int v3;
  int32_t v4; // kr00_4
  char *v5;
  int v6;
  int32_t v7; // kr04_4
  int v8;

  result = *((uint32_t *)self + 15);
  if ( result <= 1 )
  {
    v5 = (char *)self + 4 * result;
    if ( *((uint32_t *)v5 + 5) == 0 )
    {
      *((uint32_t *)v5 + 5) = (uint32_t)(uintptr_t)(a2);
      if ( *((uint16_t *)a2 + 3) != 0 )
      {
        do
        {
          v7 = *((uint32_t *)a2 + 1);
          HIWORD(v6) = HIWORD(v7);
          LOWORD(v6) = 0;
        }
        while ( v7 != __sync_val_compare_and_swap(
                        (volatile int32_t *)a2 + 1,
                        v7,
                        v6 | (uint16_t)(v7 + 1)) );
        result = *((uint32_t *)self + 15);
      }
    }
  }
  if ( (*((uint32_t *)self + 16) & 0x3FFFFFFF) == result )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpConstraintChainInstance::Self *)((char *)self + 56),
      4,
      v8);
    result = *((uint32_t *)self + 15);
  }
  *(uint32_t *)(*((uint32_t *)self + 14) + 4 * result) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 15);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v4, v3 | (uint16_t)(v4 + 1));
    }
    while ( v4 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::begin  (binary VA: 0x1785700)
// Original: hkpConstraintConstructionKit::begin
// ----------------------------------------------------------------------------
char * hkpConstraintConstructionKit::begin(hkpConstraintConstructionKit::Self *self, hkpGenericConstraintData::Self *a2)
{
  char *result;

  result = hkpGenericConstraintData::getScheme(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 16) = 0;
  *((uint8_t *)self + 17) = 0;
  *((uint8_t *)self + 18) = 0;
  *((uint8_t *)self + 19) = 0;
  *((uint8_t *)self + 20) = 0;
  *((uint8_t *)self + 21) = 0;
  *((uint8_t *)self + 24) = 0;
  *((uint8_t *)self + 25) = 0;
  *((uint8_t *)self + 22) = 0;
  *((uint8_t *)self + 23) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setLinearDofA  (binary VA: 0x1785770)
// Original: hkpConstraintConstructionKit::setLinearDofA
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setLinearDofA(hkpConstraintConstructionKit::Self *self, const hkVector4f::Self *a2, int a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int result;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;

  v3 = *((uint32_t **)self + 1);
  v4 = v3[8];
  if ( v4 == (v3[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v3 + 7), 4, v11);
    v4 = v3[8];
  }
  *(uint32_t *)(v3[7] + 4 * v4) = 3;
  ++v3[8];
  v5 = *((uint32_t **)self + 1);
  v6 = v5[8];
  if ( v6 == (v5[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v5 + 7), 4, v11);
    v6 = v5[8];
  }
  *(uint32_t *)(v5[7] + 4 * v6) = a3;
  ++v5[8];
  v7 = *((uint32_t **)self + 1);
  result = v7[5];
  v9 = result;
  if ( result == (v7[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v7 + 4),
      16,
      result);
    v9 = v7[5];
    result = v12;
  }
  v10 = (uint32_t *)(v7[4] + 16 * v9);
  *v10 = *(uint32_t *)a2;
  v10[1] = *((uint32_t *)a2 + 1);
  v10[2] = *((uint32_t *)a2 + 2);
  v10[3] = *((uint32_t *)a2 + 3);
  ++v7[5];
  *((uint8_t *)self + a3 + 16) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setLinearDofB  (binary VA: 0x17858a0)
// Original: hkpConstraintConstructionKit::setLinearDofB
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setLinearDofB(hkpConstraintConstructionKit::Self *self, const hkVector4f::Self *a2, int a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int result;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;

  v3 = *((uint32_t **)self + 1);
  v4 = v3[8];
  if ( v4 == (v3[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v3 + 7), 4, v11);
    v4 = v3[8];
  }
  *(uint32_t *)(v3[7] + 4 * v4) = 4;
  ++v3[8];
  v5 = *((uint32_t **)self + 1);
  v6 = v5[8];
  if ( v6 == (v5[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v5 + 7), 4, v11);
    v6 = v5[8];
  }
  *(uint32_t *)(v5[7] + 4 * v6) = a3;
  ++v5[8];
  v7 = *((uint32_t **)self + 1);
  result = v7[5];
  v9 = result;
  if ( result == (v7[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v7 + 4),
      16,
      result);
    v9 = v7[5];
    result = v12;
  }
  v10 = (uint32_t *)(v7[4] + 16 * v9);
  *v10 = *(uint32_t *)a2;
  v10[1] = *((uint32_t *)a2 + 1);
  v10[2] = *((uint32_t *)a2 + 2);
  v10[3] = *((uint32_t *)a2 + 3);
  ++v7[5];
  *((uint8_t *)self + a3 + 19) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setLinearDofWorld  (binary VA: 0x17859d0)
// Original: hkpConstraintConstructionKit::setLinearDofWorld
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setLinearDofWorld(hkpConstraintConstructionKit::Self *self, const hkVector4f::Self *a2, int a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int result;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;

  v3 = *((uint32_t **)self + 1);
  v4 = v3[8];
  if ( v4 == (v3[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v3 + 7), 4, v11);
    v4 = v3[8];
  }
  *(uint32_t *)(v3[7] + 4 * v4) = 5;
  ++v3[8];
  v5 = *((uint32_t **)self + 1);
  v6 = v5[8];
  if ( v6 == (v5[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v5 + 7), 4, v11);
    v6 = v5[8];
  }
  *(uint32_t *)(v5[7] + 4 * v6) = a3;
  ++v5[8];
  v7 = *((uint32_t **)self + 1);
  result = v7[5];
  v9 = result;
  if ( result == (v7[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v7 + 4),
      16,
      result);
    v9 = v7[5];
    result = v12;
  }
  v10 = (uint32_t *)(v7[4] + 16 * v9);
  *v10 = *(uint32_t *)a2;
  v10[1] = *((uint32_t *)a2 + 1);
  v10[2] = *((uint32_t *)a2 + 2);
  v10[3] = *((uint32_t *)a2 + 3);
  ++v7[5];
  *((uint8_t *)self + a3 + 16) = 1;
  *((uint8_t *)self + a3 + 19) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::constrainLinearDof  (binary VA: 0x1785b10)
// Original: hkpConstraintConstructionKit::constrainLinearDof
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintConstructionKit::constrainLinearDof(hkpConstraintConstructionKit::Self *self, int a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *result;
  int v7;

  v2 = *((uint32_t **)self + 1);
  v3 = v2[8];
  if ( v3 == (v2[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v2 + 7), 4, v7);
    v3 = v2[8];
  }
  *(uint32_t *)(v2[7] + 4 * v3) = 6;
  ++v2[8];
  v4 = *((uint32_t **)self + 1);
  v5 = v4[8];
  if ( v5 == (v4[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v4 + 7), 4, v7);
    v5 = v4[8];
  }
  *(uint32_t *)(v4[7] + 4 * v5) = a2;
  ++v4[8];
  result = *((uint32_t **)self + 1);
  result[1] += 48;
  ++result[2];
  ++result[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::constrainAllLinearDof  (binary VA: 0x1785bd0)
// Original: hkpConstraintConstructionKit::constrainAllLinearDof
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintConstructionKit::constrainAllLinearDof(hkpConstraintConstructionKit::Self *self)
{
  uint32_t *v1;
  int v2;
  uint32_t *result;
  int v4;

  v1 = *((uint32_t **)self + 1);
  v2 = v1[8];
  if ( v2 == (v1[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v1 + 7), 4, v4);
    v2 = v1[8];
  }
  *(uint32_t *)(v1[7] + 4 * v2) = 7;
  ++v1[8];
  result = *((uint32_t **)self + 1);
  result[1] += 144;
  result[2] += 3;
  result[3] += 3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setAngularBasisA  (binary VA: 0x1785c50)
// Original: hkpConstraintConstructionKit::setAngularBasisA
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setAngularBasisA(hkpConstraintConstructionKit::Self *self, const hkMatrix3f::Self *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;

  v2 = *((uint32_t **)self + 1);
  v3 = v2[8];
  if ( v3 == (v2[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v2 + 7), 4, v15);
    v3 = v2[8];
  }
  *(uint32_t *)(v2[7] + 4 * v3) = 8;
  ++v2[8];
  v4 = *((uint32_t **)self + 1);
  v5 = v4[5];
  v6 = v5;
  if ( v5 == (v4[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v4 + 4),
      16,
      (int)(uintptr_t)(v4));
    v4 = v16;
    v6 = v16[5];
  }
  v7 = (uint32_t *)(v4[4] + 16 * v6);
  *v7 = *(uint32_t *)a2;
  v7[1] = *((uint32_t *)a2 + 1);
  v7[2] = *((uint32_t *)a2 + 2);
  v7[3] = *((uint32_t *)a2 + 3);
  ++v4[5];
  v8 = *((uint32_t **)self + 1);
  v9 = v8[5];
  if ( v9 == (v8[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v8 + 4),
      16,
      (int)(uintptr_t)(v8));
    v8 = v17;
    v9 = v17[5];
  }
  v10 = (uint32_t *)(v8[4] + 16 * v9);
  *v10 = *((uint32_t *)a2 + 4);
  v10[1] = *((uint32_t *)a2 + 5);
  v10[2] = *((uint32_t *)a2 + 6);
  v10[3] = *((uint32_t *)a2 + 7);
  ++v8[5];
  v11 = *((uint32_t **)self + 1);
  v12 = v11[5];
  if ( v12 == (v11[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v11 + 4),
      16,
      (int)(uintptr_t)(v11));
    v11 = v18;
    v12 = v18[5];
  }
  v13 = (uint32_t *)(v11[4] + 16 * v12);
  *v13 = *((uint32_t *)a2 + 8);
  v13[1] = *((uint32_t *)a2 + 9);
  v13[2] = *((uint32_t *)a2 + 10);
  v13[3] = *((uint32_t *)a2 + 11);
  ++v11[5];
  *((uint8_t *)self + 22) = 1;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setAngularBasisB  (binary VA: 0x1785e00)
// Original: hkpConstraintConstructionKit::setAngularBasisB
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setAngularBasisB(hkpConstraintConstructionKit::Self *self, const hkMatrix3f::Self *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;

  v2 = *((uint32_t **)self + 1);
  v3 = v2[8];
  if ( v3 == (v2[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v2 + 7), 4, v15);
    v3 = v2[8];
  }
  *(uint32_t *)(v2[7] + 4 * v3) = 9;
  ++v2[8];
  v4 = *((uint32_t **)self + 1);
  v5 = v4[5];
  v6 = v5;
  if ( v5 == (v4[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v4 + 4),
      16,
      (int)(uintptr_t)(v4));
    v4 = v16;
    v6 = v16[5];
  }
  v7 = (uint32_t *)(v4[4] + 16 * v6);
  *v7 = *(uint32_t *)a2;
  v7[1] = *((uint32_t *)a2 + 1);
  v7[2] = *((uint32_t *)a2 + 2);
  v7[3] = *((uint32_t *)a2 + 3);
  ++v4[5];
  v8 = *((uint32_t **)self + 1);
  v9 = v8[5];
  if ( v9 == (v8[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v8 + 4),
      16,
      (int)(uintptr_t)(v8));
    v8 = v17;
    v9 = v17[5];
  }
  v10 = (uint32_t *)(v8[4] + 16 * v9);
  *v10 = *((uint32_t *)a2 + 4);
  v10[1] = *((uint32_t *)a2 + 5);
  v10[2] = *((uint32_t *)a2 + 6);
  v10[3] = *((uint32_t *)a2 + 7);
  ++v8[5];
  v11 = *((uint32_t **)self + 1);
  v12 = v11[5];
  if ( v12 == (v11[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v11 + 4),
      16,
      (int)(uintptr_t)(v11));
    v11 = v18;
    v12 = v18[5];
  }
  v13 = (uint32_t *)(v11[4] + 16 * v12);
  *v13 = *((uint32_t *)a2 + 8);
  v13[1] = *((uint32_t *)a2 + 9);
  v13[2] = *((uint32_t *)a2 + 10);
  v13[3] = *((uint32_t *)a2 + 11);
  ++v11[5];
  *((uint8_t *)self + 23) = 1;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setAngularBasisABodyFrame  (binary VA: 0x1785fb0)
// Original: hkpConstraintConstructionKit::setAngularBasisABodyFrame
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setAngularBasisABodyFrame(hkpConstraintConstructionKit::Self *self)
{
  uint32_t *v1;
  int v2;
  int result;
  int v4;

  v1 = *((uint32_t **)self + 1);
  v2 = v1[8];
  if ( v2 == (v1[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v1 + 7), 4, v4);
    v2 = v1[8];
  }
  result = v1[7];
  *(uint32_t *)(result + 4 * v2) = 10;
  ++v1[8];
  *((uint8_t *)self + 22) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setAngularBasisBBodyFrame  (binary VA: 0x1786020)
// Original: hkpConstraintConstructionKit::setAngularBasisBBodyFrame
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setAngularBasisBBodyFrame(hkpConstraintConstructionKit::Self *self)
{
  uint32_t *v1;
  int v2;
  int result;
  int v4;

  v1 = *((uint32_t **)self + 1);
  v2 = v1[8];
  if ( v2 == (v1[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v1 + 7), 4, v4);
    v2 = v1[8];
  }
  result = v1[7];
  *(uint32_t *)(result + 4 * v2) = 11;
  ++v1[8];
  *((uint8_t *)self + 23) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::constrainToAngularDof  (binary VA: 0x1786090)
// Original: hkpConstraintConstructionKit::constrainToAngularDof
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintConstructionKit::constrainToAngularDof(hkpConstraintConstructionKit::Self *self, int a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *result;
  int v7;

  v2 = *((uint32_t **)self + 1);
  v3 = v2[8];
  if ( v3 == (v2[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v2 + 7), 4, v7);
    v3 = v2[8];
  }
  *(uint32_t *)(v2[7] + 4 * v3) = 12;
  ++v2[8];
  v4 = *((uint32_t **)self + 1);
  v5 = v4[8];
  if ( v5 == (v4[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v4 + 7), 4, v7);
    v5 = v4[8];
  }
  *(uint32_t *)(v4[7] + 4 * v5) = a2;
  ++v4[8];
  result = *((uint32_t **)self + 1);
  result[1] += 96;
  result[2] += 2;
  result[3] += 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::constrainAllAngularDof  (binary VA: 0x1786150)
// Original: hkpConstraintConstructionKit::constrainAllAngularDof
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintConstructionKit::constrainAllAngularDof(hkpConstraintConstructionKit::Self *self)
{
  uint32_t *v1;
  int v2;
  uint32_t *result;
  int v4;

  v1 = *((uint32_t **)self + 1);
  v2 = v1[8];
  if ( v2 == (v1[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v1 + 7), 4, v4);
    v2 = v1[8];
  }
  *(uint32_t *)(v1[7] + 4 * v2) = 13;
  ++v1[8];
  result = *((uint32_t **)self + 1);
  result[1] += 144;
  result[2] += 3;
  result[3] += 3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setPivotA  (binary VA: 0x17861d0)
// Original: hkpConstraintConstructionKit::setPivotA
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setPivotA(hkpConstraintConstructionKit::Self *self, const hkVector4f::Self *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int result;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;

  v2 = *((uint32_t **)self + 1);
  v3 = v2[8];
  if ( v3 == (v2[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v2 + 7), 4, v8);
    v3 = v2[8];
  }
  *(uint32_t *)(v2[7] + 4 * v3) = 1;
  ++v2[8];
  v4 = *((uint32_t **)self + 1);
  result = v4[5];
  v6 = result;
  if ( result == (v4[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v4 + 4),
      16,
      result);
    v6 = v4[5];
    result = v9;
  }
  v7 = (uint32_t *)(v4[4] + 16 * v6);
  *v7 = *(uint32_t *)a2;
  v7[1] = *((uint32_t *)a2 + 1);
  v7[2] = *((uint32_t *)a2 + 2);
  v7[3] = *((uint32_t *)a2 + 3);
  ++v4[5];
  *((uint8_t *)self + 24) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setPivotB  (binary VA: 0x17862b0)
// Original: hkpConstraintConstructionKit::setPivotB
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setPivotB(hkpConstraintConstructionKit::Self *self, const hkVector4f::Self *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int result;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;

  v2 = *((uint32_t **)self + 1);
  v3 = v2[8];
  if ( v3 == (v2[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v2 + 7), 4, v8);
    v3 = v2[8];
  }
  *(uint32_t *)(v2[7] + 4 * v3) = 2;
  ++v2[8];
  v4 = *((uint32_t **)self + 1);
  result = v4[5];
  v6 = result;
  if ( result == (v4[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v4 + 4),
      16,
      result);
    v6 = v4[5];
    result = v9;
  }
  v7 = (uint32_t *)(v4[4] + 16 * v6);
  *v7 = *(uint32_t *)a2;
  v7[1] = *((uint32_t *)a2 + 1);
  v7[2] = *((uint32_t *)a2 + 2);
  v7[3] = *((uint32_t *)a2 + 3);
  ++v4[5];
  *((uint8_t *)self + 25) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setPivotsHelper  (binary VA: 0x1786390)
// Original: hkpConstraintConstructionKit::setPivotsHelper
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setPivotsHelper(hkpConstraintConstructionKit::Self *self, hkpRigidBody::Self *a2, hkpRigidBody::Self *a3, const hkVector4f::Self *a4)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v23;
  typedef float _g4_t_v25[4];
  typedef float _g4_t_v26[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v26)) > _g4_s1 ? (16u + sizeof(_g4_t_v26)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);

  v4 = *(float *)a4 - *((float *)a2 + 72);
  v5 = *((float *)a4 + 1) - *((float *)a2 + 73);
  v6 = *((float *)a4 + 2) - *((float *)a2 + 74);
  v7 = (float)(*((float *)a2 + 60) * v4) + (float)(*((float *)a2 + 61) * v5);
  v8 = *(float *)a4 - *((float *)a3 + 72);
  v9 = *((float *)a4 + 1) - *((float *)a3 + 73);
  v10 = (float)(*((float *)a2 + 64) * v4) + (float)(*((float *)a2 + 65) * v5);
  v11 = *((float *)a2 + 66) * v6;
  v12 = (float)((float)(v4 * *((float *)a2 + 68)) + (float)(v5 * *((float *)a2 + 69)))
      + (float)(*((float *)a2 + 70) * v6);
  v13 = v7 + (float)(v6 * *((float *)a2 + 62));
  v14 = *((float *)a4 + 2) - *((float *)a3 + 74);
  v15 = *((float *)a3 + 65) * v9;
  v25[1] = v10 + v11;
  v16 = *((float *)a3 + 61);
  v25[0] = v13;
  v17 = *((float *)a3 + 60);
  v18 = v16 * v9;
  v19 = v9 * *((float *)a3 + 69);
  v25[2] = v12;
  v25[3] = v12;
  v20 = (float)(v17 * v8) + v18;
  v21 = (float)((float)(*((float *)a3 + 64) * v8) + v15) + (float)(*((float *)a3 + 66) * v14);
  v22 = (float)((float)(v8 * *((float *)a3 + 68)) + v19) + (float)(*((float *)a3 + 70) * v14);
  v26[0] = v20 + (float)(v14 * *((float *)a3 + 62));
  v26[1] = v21;
  v26[2] = v22;
  v26[3] = v22;
  v23 = hkpConstraintConstructionKit::setPivotA(self, (const hkVector4f::Self *)v25);
  hkpConstraintConstructionKit::setPivotB(self, (const hkVector4f::Self *)v26);
  *((uint8_t *)self + 24) = 1;
  *((uint8_t *)self + 25) = 1;
  return v23;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setLinearLimit  (binary VA: 0x1786560)
// Original: hkpConstraintConstructionKit::setLinearLimit
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setLinearLimit(hkpConstraintConstructionKit::Self *self, uint8_t a2, float a3, unsigned int a4)
{
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int result;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;

  v4 = *((uint32_t **)self + 1);
  v5 = v4[8];
  if ( v5 == (v4[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v4 + 7), 4, v13);
    v5 = v4[8];
  }
  *(uint32_t *)(v4[7] + 4 * v5) = 16;
  ++v4[8];
  v6 = *((uint32_t **)self + 1);
  v7 = v6[8];
  if ( v7 == (v6[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v6 + 7), 4, v13);
    v7 = v6[8];
  }
  *(uint32_t *)(v6[7] + 4 * v7) = a2;
  ++v6[8];
  v8 = *((uint32_t **)self + 1);
  result = v8[5];
  v10 = result;
  if ( result == (v8[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v8 + 4),
      16,
      result);
    v10 = v8[5];
    result = v14;
  }
  v11 = v8[4] + 16 * v10;
  *(float *)v11 = a3;
  *(uint64_t *)(v11 + 4) = a4;
  *(uint32_t *)(v11 + 12) = 0;
  ++v8[5];
  v12 = *((uint32_t **)self + 1);
  v12[1] += 64;
  ++v12[2];
  ++v12[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setAngularLimit  (binary VA: 0x17866a0)
// Original: hkpConstraintConstructionKit::setAngularLimit
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setAngularLimit(hkpConstraintConstructionKit::Self *self, uint8_t a2, float a3, unsigned int a4)
{
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int result;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;

  v4 = *((uint32_t **)self + 1);
  v5 = v4[8];
  if ( v5 == (v4[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v4 + 7), 4, v13);
    v5 = v4[8];
  }
  *(uint32_t *)(v4[7] + 4 * v5) = 17;
  ++v4[8];
  v6 = *((uint32_t **)self + 1);
  v7 = v6[8];
  if ( v7 == (v6[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v6 + 7), 4, v13);
    v7 = v6[8];
  }
  *(uint32_t *)(v6[7] + 4 * v7) = a2;
  ++v6[8];
  v8 = *((uint32_t **)self + 1);
  result = v8[5];
  v10 = result;
  if ( result == (v8[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v8 + 4),
      16,
      result);
    v10 = v8[5];
    result = v14;
  }
  v11 = v8[4] + 16 * v10;
  *(float *)v11 = a3;
  *(uint64_t *)(v11 + 4) = a4;
  *(uint32_t *)(v11 + 12) = 0;
  ++v8[5];
  v12 = *((uint32_t **)self + 1);
  v12[1] += 48;
  ++v12[2];
  ++v12[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setConeLimit  (binary VA: 0x17867e0)
// Original: hkpConstraintConstructionKit::setConeLimit
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setConeLimit(hkpConstraintConstructionKit::Self *self, uint8_t a2, float x)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  long double v7; // fst7
  uint32_t *v8;
  float v9; // xmm0_4
  int result;
  int v11;
  float *v12;
  uint32_t *v13;
  int v14;
  float v15;
  int v16;

  v3 = *((uint32_t **)self + 1);
  v4 = v3[8];
  if ( v4 == (v3[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v3 + 7), 4, v14);
    v4 = v3[8];
  }
  *(uint32_t *)(v3[7] + 4 * v4) = 18;
  ++v3[8];
  v5 = *((uint32_t **)self + 1);
  v6 = v5[8];
  if ( v6 == (v5[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v5 + 7), 4, v14);
    v6 = v5[8];
  }
  *(uint32_t *)(v5[7] + 4 * v6) = a2;
  ++v5[8];
  v7 = cosf(x);
  v8 = *((uint32_t **)self + 1);
  v15 = v7;
  v9 = v15;
  result = v8[5];
  v11 = result;
  if ( result == (v8[6] & 0x3FFFFFFF) )
  {
    v16 = v8[5];
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v8 + 4), 16, v14);
    v11 = v8[5];
    result = v16;
  }
  v12 = (float *)(v8[4] + 16 * v11);
  *v12 = v9;
  v12[1] = 100.0;
  v12[2] = 0.0;
  v12[3] = 0.0;
  ++v8[5];
  v13 = *((uint32_t **)self + 1);
  v13[1] += 48;
  ++v13[2];
  ++v13[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setTwistLimit  (binary VA: 0x1786940)
// Original: hkpConstraintConstructionKit::setTwistLimit
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setTwistLimit(hkpConstraintConstructionKit::Self *self, uint8_t a2, uint8_t a3, float a4, float x)
{
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  float v11;
  long double v12; // fst7
  uint32_t *v13;
  float v14; // xmm0_4
  int result;
  int v16;
  float *v17;
  uint32_t *v18;
  int v19;
  float v20;
  float v21;
  int v22;

  v5 = *((uint32_t **)self + 1);
  v6 = v5[8];
  if ( v6 == (v5[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v5 + 7), 4, v19);
    v6 = v5[8];
  }
  *(uint32_t *)(v5[7] + 4 * v6) = 19;
  ++v5[8];
  v7 = *((uint32_t **)self + 1);
  v8 = v7[8];
  if ( v8 == (v7[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v7 + 7), 4, v19);
    v8 = v7[8];
  }
  *(uint32_t *)(v7[7] + 4 * v8) = a2;
  ++v7[8];
  v9 = *((uint32_t **)self + 1);
  v10 = v9[8];
  if ( v10 == (v9[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v9 + 7), 4, v19);
    v10 = v9[8];
  }
  *(uint32_t *)(v9[7] + 4 * v10) = a3;
  ++v9[8];
  v20 = sinf(x);
  v11 = v20;
  v12 = sinf(a4);
  v13 = *((uint32_t **)self + 1);
  v21 = v12;
  v14 = v21;
  result = v13[5];
  v16 = result;
  if ( result == (v13[6] & 0x3FFFFFFF) )
  {
    v22 = v13[5];
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v13 + 4),
      16,
      v19);
    v16 = v13[5];
    result = v22;
  }
  v17 = (float *)(v13[4] + 16 * v16);
  *v17 = v14;
  v17[1] = v11;
  v17[2] = 0.0;
  v17[3] = 0.0;
  ++v13[5];
  v18 = *((uint32_t **)self + 1);
  v18[1] += 48;
  ++v18[2];
  ++v18[3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setAngularMotor  (binary VA: 0x1786b00)
// Original: hkpConstraintConstructionKit::setAngularMotor
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setAngularMotor(hkpConstraintConstructionKit::Self *self, uint8_t a2, hkpConstraintMotor::Self *a3)
{
  hkpConstraintConstructionKit::Self *v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  float v10; // xmm0_4
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v18;
  int32_t v19; // kr00_4
  int v20;
  uint32_t *v21;
  uint32_t *v22;

  v3 = self;
  v4 = *((uint32_t **)self + 1);
  v5 = v4[8];
  if ( v5 == (v4[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v4 + 7), 4, v20);
    v5 = v4[8];
  }
  v6 = a2;
  *(uint32_t *)(v4[7] + 4 * v5) = 14;
  ++v4[8];
  v7 = *((uint32_t **)self + 1);
  v8 = v7[8];
  if ( v8 == (v7[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v7 + 7), 4, v20);
    v8 = v7[8];
    v6 = a2;
  }
  *(uint32_t *)(v7[7] + 4 * v8) = v6;
  ++v7[8];
  v9 = *((uint32_t **)self + 1);
  v10 = (float)(int)v9[14];
  v11 = v9[5];
  v12 = v11;
  if ( *((uint16_t *)a3 + 3) != 0 )
  {
    do
    {
      v19 = *((uint32_t *)a3 + 1);
      HIWORD(v18) = HIWORD(v19);
      LOWORD(v18) = 0;
    }
    while ( v19 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a3 + 1,
                     v19,
                     v18 | (uint16_t)(v19 + 1)) );
    v3 = self;
    v9 = *((uint32_t **)self + 1);
    v12 = v9[5];
    if ( (v9[6] & 0x3FFFFFFF) != v12 )
      goto LABEL_7;
  }
  else if ( (v9[6] & 0x3FFFFFFF) != v11 )
  {
    goto LABEL_7;
  }
  v21 = v9;
  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v9 + 4), 16, v20);
  v9 = v21;
  v12 = v21[5];
LABEL_7:
  v13 = v9[4] + 16 * v12;
  *(float *)v13 = v10;
  *(uint32_t *)(v13 + 4) = 0;
  *(uint32_t *)(v13 + 8) = 0;
  *(uint32_t *)(v13 + 12) = 0;
  ++v9[5];
  v14 = *((uint32_t **)v3 + 1);
  v15 = v14[14];
  if ( v15 == (v14[15] & 0x3FFFFFFF) )
  {
    v22 = *((uint32_t **)v3 + 1);
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v14 + 13),
      4,
      v20);
    v14 = v22;
    v15 = v22[14];
  }
  *(uint32_t *)(v14[13] + 4 * v15) = (uint32_t)(uintptr_t)(a3);
  ++v14[14];
  v16 = *((uint32_t **)v3 + 1);
  v16[1] += 64;
  v16[2] += 2;
  v16[3] += 2;
  return v11;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setLinearMotor  (binary VA: 0x1786cf0)
// Original: hkpConstraintConstructionKit::setLinearMotor
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setLinearMotor(hkpConstraintConstructionKit::Self *self, uint8_t a2, hkpConstraintMotor::Self *a3)
{
  hkpConstraintConstructionKit::Self *v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  float v10; // xmm0_4
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v18;
  int32_t v19; // kr00_4
  int v20;
  uint32_t *v21;
  uint32_t *v22;

  v3 = self;
  v4 = *((uint32_t **)self + 1);
  v5 = v4[8];
  if ( v5 == (v4[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v4 + 7), 4, v20);
    v5 = v4[8];
  }
  v6 = a2;
  *(uint32_t *)(v4[7] + 4 * v5) = 15;
  ++v4[8];
  v7 = *((uint32_t **)self + 1);
  v8 = v7[8];
  if ( v8 == (v7[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v7 + 7), 4, v20);
    v8 = v7[8];
    v6 = a2;
  }
  *(uint32_t *)(v7[7] + 4 * v8) = v6;
  ++v7[8];
  v9 = *((uint32_t **)self + 1);
  v10 = (float)(int)v9[14];
  v11 = v9[5];
  v12 = v11;
  if ( *((uint16_t *)a3 + 3) != 0 )
  {
    do
    {
      v19 = *((uint32_t *)a3 + 1);
      HIWORD(v18) = HIWORD(v19);
      LOWORD(v18) = 0;
    }
    while ( v19 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a3 + 1,
                     v19,
                     v18 | (uint16_t)(v19 + 1)) );
    v3 = self;
    v9 = *((uint32_t **)self + 1);
    v12 = v9[5];
    if ( (v9[6] & 0x3FFFFFFF) != v12 )
      goto LABEL_7;
  }
  else if ( (v9[6] & 0x3FFFFFFF) != v11 )
  {
    goto LABEL_7;
  }
  v21 = v9;
  hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v9 + 4), 16, v20);
  v9 = v21;
  v12 = v21[5];
LABEL_7:
  v13 = v9[4] + 16 * v12;
  *(float *)v13 = v10;
  *(uint32_t *)(v13 + 4) = 0;
  *(uint32_t *)(v13 + 8) = 0;
  *(uint32_t *)(v13 + 12) = 0;
  ++v9[5];
  v14 = *((uint32_t **)v3 + 1);
  v15 = v14[14];
  if ( v15 == (v14[15] & 0x3FFFFFFF) )
  {
    v22 = *((uint32_t **)v3 + 1);
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v14 + 13),
      4,
      v20);
    v14 = v22;
    v15 = v22[14];
  }
  *(uint32_t *)(v14[13] + 4 * v15) = (uint32_t)(uintptr_t)(a3);
  ++v14[14];
  v16 = *((uint32_t **)v3 + 1);
  v16[1] += 80;
  v16[2] += 2;
  v16[3] += 2;
  return v11;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setAngularFriction  (binary VA: 0x1786ee0)
// Original: hkpConstraintConstructionKit::setAngularFriction
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setAngularFriction(hkpConstraintConstructionKit::Self *self, uint8_t a2, unsigned int a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int result;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;

  v3 = *((uint32_t **)self + 1);
  v4 = v3[8];
  if ( v4 == (v3[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v3 + 7), 4, v12);
    v4 = v3[8];
  }
  *(uint32_t *)(v3[7] + 4 * v4) = 20;
  ++v3[8];
  v5 = *((uint32_t **)self + 1);
  v6 = v5[8];
  if ( v6 == (v5[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v5 + 7), 4, v12);
    v6 = v5[8];
  }
  *(uint32_t *)(v5[7] + 4 * v6) = a2;
  ++v5[8];
  v7 = *((uint32_t **)self + 1);
  result = v7[5];
  v9 = result;
  if ( result == (v7[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v7 + 4),
      16,
      result);
    v9 = v7[5];
    result = v13;
  }
  v10 = v7[4] + 16 * v9;
  *(uint64_t *)v10 = a3;
  *(uint32_t *)(v10 + 8) = 0;
  *(uint32_t *)(v10 + 12) = 0;
  ++v7[5];
  v11 = *((uint32_t **)self + 1);
  v11[1] += 48;
  v11[2] += 2;
  v11[3] += 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setLinearFriction  (binary VA: 0x1787020)
// Original: hkpConstraintConstructionKit::setLinearFriction
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setLinearFriction(hkpConstraintConstructionKit::Self *self, uint8_t a2, unsigned int a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int result;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;

  v3 = *((uint32_t **)self + 1);
  v4 = v3[8];
  if ( v4 == (v3[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v3 + 7), 4, v12);
    v4 = v3[8];
  }
  *(uint32_t *)(v3[7] + 4 * v4) = 21;
  ++v3[8];
  v5 = *((uint32_t **)self + 1);
  v6 = v5[8];
  if ( v6 == (v5[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v5 + 7), 4, v12);
    v6 = v5[8];
  }
  *(uint32_t *)(v5[7] + 4 * v6) = a2;
  ++v5[8];
  v7 = *((uint32_t **)self + 1);
  result = v7[5];
  v9 = result;
  if ( result == (v7[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v7 + 4),
      16,
      result);
    v9 = v7[5];
    result = v13;
  }
  v10 = v7[4] + 16 * v9;
  *(uint64_t *)v10 = a3;
  *(uint32_t *)(v10 + 8) = 0;
  *(uint32_t *)(v10 + 12) = 0;
  ++v7[5];
  v11 = *((uint32_t **)self + 1);
  v11[1] += 64;
  v11[2] += 2;
  v11[3] += 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::setStrength  (binary VA: 0x1787160)
// Original: hkpConstraintConstructionKit::setStrength
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::setStrength(hkpConstraintConstructionKit::Self *self, unsigned int a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;

  v2 = *((uint32_t **)self + 1);
  ++*((uint32_t *)self + 2);
  v3 = v2[8];
  if ( v3 == (v2[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v2 + 7), 4, v8);
    v3 = v2[8];
  }
  *(uint32_t *)(v2[7] + 4 * v3) = 22;
  ++v2[8];
  v4 = *((uint32_t **)self + 1);
  result = v4[5];
  v6 = result;
  if ( result == (v4[6] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v4 + 4),
      16,
      result);
    v6 = v4[5];
    result = v9;
  }
  v7 = v4[4] + 16 * v6;
  *(uint64_t *)v7 = a2;
  *(uint32_t *)(v7 + 8) = 0;
  *(uint32_t *)(v7 + 12) = 0;
  ++v4[5];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::restoreStrength  (binary VA: 0x1787240)
// Original: hkpConstraintConstructionKit::restoreStrength
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::restoreStrength(hkpConstraintConstructionKit::Self *self)
{
  uint32_t *v1;
  int v2;
  int result;
  int v4;

  v1 = *((uint32_t **)self + 1);
  --*((uint32_t *)self + 2);
  v2 = v1[8];
  if ( v2 == (v1[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v1 + 7), 4, v4);
    v2 = v1[8];
  }
  result = v1[7];
  *(uint32_t *)(result + 4 * v2) = 23;
  ++v1[8];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::addConstraintModifierCallback  (binary VA: 0x17872b0)
// Original: hkpConstraintConstructionKit::addConstraintModifierCallback
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::addConstraintModifierCallback(int a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  int result;
  int v10;

  v3 = *(uint32_t **)(a1 + 4);
  v4 = v3[8];
  if ( v4 == (v3[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v3 + 7), 4, v10);
    v4 = v3[8];
  }
  *(uint32_t *)(v3[7] + 4 * v4) = 24;
  ++v3[8];
  v5 = *(uint32_t **)(a1 + 4);
  v6 = v5[11];
  if ( v6 == (v5[12] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v5 + 10), 4, v10);
    v6 = v5[11];
  }
  *(uint32_t *)(v5[10] + 4 * v6) = a2;
  ++v5[11];
  v7 = *(uint32_t **)(a1 + 4);
  v8 = v7[8];
  if ( v8 == (v7[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v7 + 7), 4, v10);
    v8 = v7[8];
  }
  result = v7[7];
  *(uint32_t *)(result + 4 * v8) = a3;
  ++v7[8];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::end  (binary VA: 0x17873b0)
// Original: hkpConstraintConstructionKit::end
// ----------------------------------------------------------------------------
int hkpConstraintConstructionKit::end(hkpConstraintConstructionKit::Self *self)
{
  uint32_t *v1;
  int v2;
  int result;
  int v4;

  v1 = *((uint32_t **)self + 1);
  v2 = v1[8];
  if ( v2 == (v1[9] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v1 + 7), 4, v4);
    v2 = v1[8];
  }
  result = v1[7];
  *(uint32_t *)(result + 4 * v2) = 0;
  ++v1[8];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintConstructionKit::computeConstraintInfo  (binary VA: 0x1787420)
// Original: hkpConstraintConstructionKit::computeConstraintInfo
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintConstructionKit::computeConstraintInfo(int a1, uint32_t *a2)
{
  uint32_t *result;
  unsigned int v3;

  result = *(uint32_t **)a1;
  v3 = *(uint32_t *)a1 + 4 * *(uint32_t *)(a1 + 4);
  if ( *(uint32_t *)a1 < v3 )
  {
    while ( 2 )
    {
      switch ( *result )
      {
        case 0:
          return result;
        case 3:
        case 4:
        case 5:
        case 0x18:
          ++result;
          goto LABEL_4;
        case 6:
        case 0x11:
        case 0x12:
          ++result;
          a2[1] += 48;
          ++a2[2];
          ++a2[3];
          goto LABEL_4;
        case 7:
        case 0xD:
          a2[1] += 144;
          a2[2] += 3;
          a2[3] += 3;
          goto LABEL_4;
        case 0xC:
          ++result;
          a2[1] += 96;
          a2[2] += 2;
          a2[3] += 2;
          goto LABEL_4;
        case 0xE:
        case 0x15:
          ++result;
          a2[1] += 64;
          a2[2] += 2;
          a2[3] += 2;
          goto LABEL_4;
        case 0xF:
          ++result;
          a2[1] += 80;
          a2[2] += 2;
          a2[3] += 2;
          goto LABEL_4;
        case 0x10:
          ++result;
          a2[1] += 64;
          ++a2[2];
          ++a2[3];
          goto LABEL_4;
        case 0x13:
          result += 2;
          a2[1] += 48;
          ++a2[2];
          ++a2[3];
          goto LABEL_4;
        case 0x14:
          ++result;
          a2[1] += 48;
          a2[2] += 2;
          a2[3] += 2;
        default:
LABEL_4:
          if ( (unsigned int)(uintptr_t)(++result) >= v3 )
            return result;
          continue;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::staticClass  (binary VA: 0x182da00)
// Original: hkpConstrainedSystemFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpConstrainedSystemFilter::staticClass()
{
  return &hkpConstrainedSystemFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::getClassType  (binary VA: 0x1833f60)
// Original: hkpConstrainedSystemFilter::getClassType
// ----------------------------------------------------------------------------
void * hkpConstrainedSystemFilter::getClassType()
{
  return &hkpConstrainedSystemFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::isCollisionEnabled  (binary VA: 0x1833f80)
// Original: hkpConstrainedSystemFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
bool * hkpConstrainedSystemFilter::isCollisionEnabled(bool *a1, int a2)
{
  bool *result;
  int v3;
  uint8_t v4[5];

  result = a1;
  v3 = *(uint32_t *)(a2 + 52);
  if ( v3 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v3 + 28))(v4);
    *a1 = v4[0] != 0;
    return a1;
  }
  else
  {
    *a1 = true;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::isCollisionEnabled_ea1834000  (binary VA: 0x1834000)
// Original: hkpConstrainedSystemFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
bool * hkpConstrainedSystemFilter::isCollisionEnabled_ea1834000(bool *a1, int a2)
{
  bool *result;
  int v3;
  uint8_t v4[5];

  result = a1;
  v3 = *(uint32_t *)(a2 + 52);
  if ( v3 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v3 + 32))(v4);
    *a1 = v4[0] != 0;
    return a1;
  }
  else
  {
    *a1 = true;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::isCollisionEnabled_ea1834090  (binary VA: 0x1834090)
// Original: hkpConstrainedSystemFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
bool * hkpConstrainedSystemFilter::isCollisionEnabled_ea1834090(bool *a1, int a2)
{
  bool *result;
  int v3;
  uint8_t v4[5];

  result = a1;
  v3 = *(uint32_t *)(a2 + 52);
  if ( v3 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v3 + 40))(v4);
    *a1 = v4[0] != 0;
    return a1;
  }
  else
  {
    *a1 = true;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::isCollisionEnabled_ea1834100  (binary VA: 0x1834100)
// Original: hkpConstrainedSystemFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
bool * hkpConstrainedSystemFilter::isCollisionEnabled_ea1834100(bool *a1, int a2)
{
  bool *result;
  int v3;
  uint8_t v4[5];

  result = a1;
  v3 = *(uint32_t *)(a2 + 52);
  if ( v3 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v3 + 44))(v4);
    *a1 = v4[0] != 0;
    return a1;
  }
  else
  {
    *a1 = true;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::constraintRemovedCallback  (binary VA: 0x1834170)
// Original: hkpConstrainedSystemFilter::constraintRemovedCallback
// ----------------------------------------------------------------------------
void hkpConstrainedSystemFilter::constraintRemovedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::isCollisionEnabled  (binary VA: 0x1834190)
// Original: hkpConstrainedSystemFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpConstrainedSystemFilter::Self * hkpConstrainedSystemFilter::isCollisionEnabled(hkpConstrainedSystemFilter::Self *self, const hkpCollidable::Self *a2, const hkpCollidable::Self *a3, int a4)
{
  hkpEntity::Self *v4;
  hkpEntity::Self *v5;
  int v6;
  int v8;
  int Constraint;
  int v10;
  typedef hkpEntity::Self *_g4_t_v11;
  typedef int _g4_t_NumConstraints;
  typedef int _g4_t_v13;
  typedef hkpEntity::Self *_g4_t_v14;
  typedef uint8_t _g4_t_v15[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_NumConstraints)) > _g4_s1 ? (4u + sizeof(_g4_t_NumConstraints)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v13)) > _g4_s2 ? (4u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v14)) > _g4_s3 ? (8u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (15u + sizeof(_g4_t_v15)) > _g4_s4 ? (15u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_NumConstraints &NumConstraints = *reinterpret_cast<_g4_t_NumConstraints *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 15u);

  v4 = nullptr;
  if ( *((uint8_t *)a3 + 24) == 1 )
    v4 = (hkpEntity::Self *)((const hkpCollidable::Self *)((char *)a3 + *((char *)a3 + 16)));
  v5 = nullptr;
  if ( *(uint8_t *)(a4 + 24) == 1 )
    v5 = (hkpEntity::Self *)(a4 + *(char *)(a4 + 16));
  v6 = *((uint32_t *)a2 + 13);
  if ( v6 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v6 + 24))(v15);
    if ( v15[0] == 0 )
    {
LABEL_7:
      *(uint8_t *)self = 0;
      return self;
    }
  }
  if ( v5 != nullptr && v4 != nullptr )
  {
    NumConstraints = hkpEntity::getNumConstraints(v4);
    v14 = v5;
    if ( NumConstraints <= hkpEntity::getNumConstraints(v5) )
    {
      v14 = v4;
      v4 = v5;
    }
    v13 = hkpEntity::getNumConstraints(v14);
    if ( v13 > 0 )
    {
      v8 = 0;
      v11 = v4;
      do
      {
        Constraint = hkpEntity::getConstraint(v14, v8);
        v10 = Constraint;
        if ( Constraint != 0
          && (*(int (**)(uint32_t))(**(uint32_t **)(Constraint + 12) + 20))(*(uint32_t *)(Constraint + 12)) != 11
          && (v11 == *(hkpEntity::Self **)(v10 + 20) || v11 == *(hkpEntity::Self **)(v10 + 24)) )
        {
          goto LABEL_7;
        }
      }
      while ( ++v8 != v13 );
    }
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::constraintAddedCallback  (binary VA: 0x18342e0)
// Original: hkpConstrainedSystemFilter::constraintAddedCallback
// ----------------------------------------------------------------------------
unsigned int hkpConstrainedSystemFilter::constraintAddedCallback(hkpConstrainedSystemFilter::Self *self, hkpConstraintInstance::Self *a2)
{
  unsigned int result;

  result = (*(int (**)(uint32_t))(**((uint32_t **)a2 + 3) + 20))(*((uint32_t *)a2 + 3));
  if ( result != 11 )
  {
    result = hkAgentNnMachine_FindAgent(*((uint32_t *)a2 + 5) + 16, *((uint32_t *)a2 + 6) + 16);
    if ( result != 0 )
      return hkpWorldAgentUtil::removeAgentAndItsToiEvents(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::Destroy  (binary VA: 0x1834340)
// Original: hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter
// ----------------------------------------------------------------------------
void hkpConstrainedSystemFilter::Destroy(hkpConstrainedSystemFilter::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A22E8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A2328);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A233C);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_20A2358);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A236C);
  v1 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20A2380);
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
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_209EC68);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::Destroy_ea1834470  (binary VA: 0x1834470)
// Original: hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter
// ----------------------------------------------------------------------------
void hkpConstrainedSystemFilter::Destroy_ea1834470(hkpConstrainedSystemFilter::Self *self)
{
  int v1;
  int v2;

  hkpConstrainedSystemFilter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstrainedSystemFilter::Construct  (binary VA: 0x1834520)
// Original: hkpConstrainedSystemFilter::hkpConstrainedSystemFilter
// ----------------------------------------------------------------------------
void hkpConstrainedSystemFilter::Construct(hkpConstrainedSystemFilter::Self *self, const hkpCollisionFilter::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4

  hkpCollisionFilter::Construct(self);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A22E8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A2328);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A233C);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_20A2358);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A236C);
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20A2380);
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v3 = *((uint32_t *)a2 + 1);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintViewer::getProcessTag  (binary VA: 0x18361d0)
// Original: hkpConstraintViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpConstraintViewer::getProcessTag()
{
  return hkpConstraintViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintViewer::worldAddedCallback  (binary VA: 0x1836200)
// Original: hkpConstraintViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpConstraintViewer::worldAddedCallback(hkpConstraintViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::addWorldPostSimulationListener(a2, (hkpConstraintViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintViewer::worldRemovedCallback  (binary VA: 0x1836240)
// Original: hkpConstraintViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpConstraintViewer::worldRemovedCallback(hkpConstraintViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::removeWorldPostSimulationListener(a2, (hkpConstraintViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintViewer::Destroy  (binary VA: 0x1836280)
// Original: hkpConstraintViewer::~hkpConstraintViewer
// ----------------------------------------------------------------------------
void hkpConstraintViewer::Destroy(hkpConstraintViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A2768);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A27A0);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A27CC);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A27E4);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpWorld::removeWorldPostSimulationListener(v3, (hkpConstraintViewer::Self *)((char *)self + 40));
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  v4 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v4);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_209E868);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintViewer::Destroy_ea1836380  (binary VA: 0x1836380)
// Original: hkpConstraintViewer::~hkpConstraintViewer
// ----------------------------------------------------------------------------
void hkpConstraintViewer::Destroy_ea1836380(hkpConstraintViewer::Self *self)
{
  int v1;
  int v2;

  hkpConstraintViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintViewer::registerViewer  (binary VA: 0x1836b60)
// Original: hkpConstraintViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpConstraintViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             (int)(uintptr_t)hkSingleton<hkProcessFactory::Self>::s_instance,
             (char *)"Constraints",
             (int)(uintptr_t)static_cast<uint32_t *(*)(int)>(hkpConstraintViewer::create));
  hkpConstraintViewer::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintViewer::Construct  (binary VA: 0x1836bb0)
// Original: hkpConstraintViewer::hkpConstraintViewer
// ----------------------------------------------------------------------------
int hkpConstraintViewer::Construct(uint32_t *a1, int a2)
{
  int result;
  int v3;
  hkpWorld::Self *v4;

  hkpWorldViewerBase::Construct(a1, a2);
  a1[11] = 0;
  a1[12] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A2768);
  a1[13] = 0x80000000;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A27A0);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A27E4);
  result = a1[9];
  a1[8] = ((uint32_t)(uintptr_t)&off_20A27CC);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v3++);
      hkpWorld::addWorldPostSimulationListener(v4, (hkpWorldPostSimulationListener::Self *)(a1 + 10));
      result = a1[9];
    }
    while ( v3 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintViewer::create  (binary VA: 0x1836c50)
// Original: hkpConstraintViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   56);
  hkpConstraintViewer::Construct(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintViewer::postSimulationCallback  (binary VA: 0x1836cb0)
// Original: hkpConstraintViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpConstraintViewer::postSimulationCallback(const hkpEntity::Self **self, hkpWorld::Self *a2)
{
  int *address;
  int v3;
  uint32_t *v4;
  uint64_t v5; // rax
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint64_t v20; // rax
  int v21;
  uint32_t *v22;
  hkDebugDisplayHandler::Self *v24;
  int i;
  int j;
  int v27;
  int v28;
  int *v29;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v29 = address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TthkpConstraintViewer");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  if ( *((int *)a2 + 11) > 0 )
  {
    v27 = 0;
    v6 = *((uint32_t *)a2 + 11);
    v7 = *((uint32_t *)a2 + 10);
    do
    {
      v8 = *(uint32_t *)(v7 + 4 * v27);
      v9 = *(uint32_t *)(v8 + 80);
      if ( v9 > 0 )
      {
        for ( i = 0; i < v9; ++i )
        {
          v10 = *(uint32_t *)(*(uint32_t *)(v8 + 76) + 4 * i);
          if ( *(uint16_t *)(v10 + 172) != 0 )
          {
            v11 = 0;
            do
            {
              v12 = 3 * v11++;
              hkpConstraintViewer::draw(
                *(hkpConstraintViewer::Self **)(*(uint32_t *)(v10 + 168) + 16 * v12),
                (hkpConstraintInstance::Self *)v10,
                *(self + 6),
                v24);
            }
            while ( v11 < *(uint16_t *)(v10 + 172) );
            v7 = *((uint32_t *)a2 + 10);
            v8 = *(uint32_t *)(v7 + 4 * v27);
            v9 = *(uint32_t *)(v8 + 80);
          }
        }
        v6 = *((uint32_t *)a2 + 11);
      }
      ++v27;
    }
    while ( v27 < v6 );
  }
  if ( *((int *)a2 + 14) > 0 )
  {
    v28 = 0;
    v13 = *((uint32_t *)a2 + 14);
    v14 = *((uint32_t *)a2 + 13);
    do
    {
      v15 = *(uint32_t *)(v14 + 4 * v28);
      v16 = *(uint32_t *)(v15 + 80);
      if ( v16 > 0 )
      {
        for ( j = 0; j < v16; ++j )
        {
          v17 = *(uint32_t *)(*(uint32_t *)(v15 + 76) + 4 * j);
          if ( *(uint16_t *)(v17 + 172) != 0 )
          {
            v18 = 0;
            do
            {
              v19 = 3 * v18++;
              hkpConstraintViewer::draw(
                *(hkpConstraintViewer::Self **)(*(uint32_t *)(v17 + 168) + 16 * v19),
                (hkpConstraintInstance::Self *)v17,
                *(self + 6),
                v24);
            }
            while ( v18 < *(uint16_t *)(v17 + 172) );
            v14 = *((uint32_t *)a2 + 13);
            v15 = *(uint32_t *)(v14 + 4 * v28);
            v16 = *(uint32_t *)(v15 + 80);
          }
        }
        v13 = *((uint32_t *)a2 + 14);
      }
      ++v28;
    }
    while ( v28 < v13 );
  }
  LODWORD(v20) = (uint32_t)(uintptr_t)(v29);
  v21 = *v29;
  v22 = *(uint32_t **)(*v29 + 4);
  if ( (unsigned int)(uintptr_t)(v22) < *(uint32_t *)(*v29 + 12) )
  {
    *v22 = (uint32_t)(uintptr_t)("Et");
    v20 = __rdtsc();
    v22[1] = v20;
    *(uint32_t *)(v21 + 4) = (uint32_t)(uintptr_t)(v22 + 3);
  }
  return v20;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainDrawer::drawConstraint  (binary VA: 0x184cc50)
// Original: hkpConstraintChainDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpConstraintChainDrawer::drawConstraint(uint32_t *a1, uint32_t *a2, int a3, int a4, hkDebugDisplayHandler::Self *a5, int a6, int a7, uint32_t *a8)
{
  uint32_t *v8;
  uint32_t *v9;
  int result;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  g4_int128_t *v22;
  int v23;
  typedef hkVector4f::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef hkVector4f::Self *_g4_t_v58;
  typedef hkVector4f::Self *_g4_t_v59;
  typedef hkDebugDisplayHandler::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef g4_int128_t _g4_t_v65;
  typedef g4_int128_t _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef uint32_t *_g4_t_v99;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v25)) > _g4_s1 ? (36u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v26)) > _g4_s2 ? (40u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v27)) > _g4_s3 ? (44u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v28)) > _g4_s4 ? (48u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v29)) > _g4_s5 ? (52u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v30)) > _g4_s6 ? (56u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v31)) > _g4_s7 ? (60u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v32)) > _g4_s8 ? (64u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v33)) > _g4_s9 ? (68u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v34)) > _g4_s10 ? (72u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v35)) > _g4_s11 ? (76u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v36)) > _g4_s12 ? (80u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v37)) > _g4_s13 ? (84u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v38)) > _g4_s14 ? (88u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v39)) > _g4_s15 ? (92u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v40)) > _g4_s16 ? (96u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v41)) > _g4_s17 ? (100u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v42)) > _g4_s18 ? (104u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v43)) > _g4_s19 ? (108u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v44)) > _g4_s20 ? (112u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v45)) > _g4_s21 ? (116u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v46)) > _g4_s22 ? (120u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v47)) > _g4_s23 ? (124u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v48)) > _g4_s24 ? (128u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v49)) > _g4_s25 ? (132u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v50)) > _g4_s26 ? (136u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v51)) > _g4_s27 ? (140u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v52)) > _g4_s28 ? (144u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v53)) > _g4_s29 ? (148u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v54)) > _g4_s30 ? (152u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v55)) > _g4_s31 ? (156u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v56)) > _g4_s32 ? (160u + sizeof(_g4_t_v56)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v57)) > _g4_s33 ? (160u + sizeof(_g4_t_v57)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v58)) > _g4_s34 ? (164u + sizeof(_g4_t_v58)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v59)) > _g4_s35 ? (168u + sizeof(_g4_t_v59)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v60)) > _g4_s36 ? (172u + sizeof(_g4_t_v60)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v61)) > _g4_s37 ? (176u + sizeof(_g4_t_v61)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v62)) > _g4_s38 ? (180u + sizeof(_g4_t_v62)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v63)) > _g4_s39 ? (184u + sizeof(_g4_t_v63)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v64)) > _g4_s40 ? (188u + sizeof(_g4_t_v64)) : _g4_s40,
    _g4_s42 = (192u + sizeof(_g4_t_v65)) > _g4_s41 ? (192u + sizeof(_g4_t_v65)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v66)) > _g4_s42 ? (208u + sizeof(_g4_t_v66)) : _g4_s42,
    _g4_s44 = (224u + sizeof(_g4_t_v67)) > _g4_s43 ? (224u + sizeof(_g4_t_v67)) : _g4_s43,
    _g4_s45 = (228u + sizeof(_g4_t_v68)) > _g4_s44 ? (228u + sizeof(_g4_t_v68)) : _g4_s44,
    _g4_s46 = (232u + sizeof(_g4_t_v69)) > _g4_s45 ? (232u + sizeof(_g4_t_v69)) : _g4_s45,
    _g4_s47 = (236u + sizeof(_g4_t_v70)) > _g4_s46 ? (236u + sizeof(_g4_t_v70)) : _g4_s46,
    _g4_s48 = (240u + sizeof(_g4_t_v71)) > _g4_s47 ? (240u + sizeof(_g4_t_v71)) : _g4_s47,
    _g4_s49 = (244u + sizeof(_g4_t_v72)) > _g4_s48 ? (244u + sizeof(_g4_t_v72)) : _g4_s48,
    _g4_s50 = (248u + sizeof(_g4_t_v73)) > _g4_s49 ? (248u + sizeof(_g4_t_v73)) : _g4_s49,
    _g4_s51 = (252u + sizeof(_g4_t_v74)) > _g4_s50 ? (252u + sizeof(_g4_t_v74)) : _g4_s50,
    _g4_s52 = (256u + sizeof(_g4_t_v75)) > _g4_s51 ? (256u + sizeof(_g4_t_v75)) : _g4_s51,
    _g4_s53 = (260u + sizeof(_g4_t_v76)) > _g4_s52 ? (260u + sizeof(_g4_t_v76)) : _g4_s52,
    _g4_s54 = (264u + sizeof(_g4_t_v77)) > _g4_s53 ? (264u + sizeof(_g4_t_v77)) : _g4_s53,
    _g4_s55 = (268u + sizeof(_g4_t_v78)) > _g4_s54 ? (268u + sizeof(_g4_t_v78)) : _g4_s54,
    _g4_s56 = (272u + sizeof(_g4_t_v79)) > _g4_s55 ? (272u + sizeof(_g4_t_v79)) : _g4_s55,
    _g4_s57 = (276u + sizeof(_g4_t_v80)) > _g4_s56 ? (276u + sizeof(_g4_t_v80)) : _g4_s56,
    _g4_s58 = (280u + sizeof(_g4_t_v81)) > _g4_s57 ? (280u + sizeof(_g4_t_v81)) : _g4_s57,
    _g4_s59 = (284u + sizeof(_g4_t_v82)) > _g4_s58 ? (284u + sizeof(_g4_t_v82)) : _g4_s58,
    _g4_s60 = (288u + sizeof(_g4_t_v83)) > _g4_s59 ? (288u + sizeof(_g4_t_v83)) : _g4_s59,
    _g4_s61 = (292u + sizeof(_g4_t_v84)) > _g4_s60 ? (292u + sizeof(_g4_t_v84)) : _g4_s60,
    _g4_s62 = (296u + sizeof(_g4_t_v85)) > _g4_s61 ? (296u + sizeof(_g4_t_v85)) : _g4_s61,
    _g4_s63 = (300u + sizeof(_g4_t_v86)) > _g4_s62 ? (300u + sizeof(_g4_t_v86)) : _g4_s62,
    _g4_s64 = (304u + sizeof(_g4_t_v87)) > _g4_s63 ? (304u + sizeof(_g4_t_v87)) : _g4_s63,
    _g4_s65 = (308u + sizeof(_g4_t_v88)) > _g4_s64 ? (308u + sizeof(_g4_t_v88)) : _g4_s64,
    _g4_s66 = (312u + sizeof(_g4_t_v89)) > _g4_s65 ? (312u + sizeof(_g4_t_v89)) : _g4_s65,
    _g4_s67 = (316u + sizeof(_g4_t_v90)) > _g4_s66 ? (316u + sizeof(_g4_t_v90)) : _g4_s66,
    _g4_s68 = (320u + sizeof(_g4_t_v91)) > _g4_s67 ? (320u + sizeof(_g4_t_v91)) : _g4_s67,
    _g4_s69 = (324u + sizeof(_g4_t_v92)) > _g4_s68 ? (324u + sizeof(_g4_t_v92)) : _g4_s68,
    _g4_s70 = (328u + sizeof(_g4_t_v93)) > _g4_s69 ? (328u + sizeof(_g4_t_v93)) : _g4_s69,
    _g4_s71 = (332u + sizeof(_g4_t_v94)) > _g4_s70 ? (332u + sizeof(_g4_t_v94)) : _g4_s70,
    _g4_s72 = (336u + sizeof(_g4_t_v95)) > _g4_s71 ? (336u + sizeof(_g4_t_v95)) : _g4_s71,
    _g4_s73 = (340u + sizeof(_g4_t_v96)) > _g4_s72 ? (340u + sizeof(_g4_t_v96)) : _g4_s72,
    _g4_s74 = (344u + sizeof(_g4_t_v97)) > _g4_s73 ? (344u + sizeof(_g4_t_v97)) : _g4_s73,
    _g4_s75 = (348u + sizeof(_g4_t_v98)) > _g4_s74 ? (348u + sizeof(_g4_t_v98)) : _g4_s74,
    _g4_s76 = (360u + sizeof(_g4_t_v99)) > _g4_s75 ? (360u + sizeof(_g4_t_v99)) : _g4_s75
  };
  alignas(16) uint8_t _g4_sf[_g4_s76];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 100u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 132u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 136u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 140u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 144u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 148u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 152u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 156u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 160u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 160u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 164u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 168u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 172u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 176u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 180u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 184u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 188u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 192u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 208u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 224u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 228u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 232u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 236u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 240u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 244u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 248u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 252u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 256u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 260u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 264u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 268u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 272u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 276u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 280u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 284u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 288u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 292u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 296u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 300u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 304u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 308u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 312u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 316u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 320u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 324u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 328u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 332u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 336u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 340u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 344u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 348u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 360u);

  v99 = (uint32_t *)(&a1);
  v8 = a1;
  v63 = a6;
  v62 = a7;
  v9 = a8;
  v27 = a2;
  v60 = a5;
  v26 = a8;
  hkpPrimitiveDrawer::setDisplayHandler((hkpPrimitiveDrawer::Self *)(a1 + 48), a5);
  result = v9[1];
  if ( result > 1 )
  {
    v59 = (hkVector4f::Self *)(v8 + 20);
    v58 = (hkVector4f::Self *)(v8 + 16);
    v25 = result - 1;
    v61 = 0;
    v11 = 0;
    v24 = (hkVector4f::Self *)&v66;
    while ( 1 )
    {
      ++v11;
      v12 = *(uint32_t **)(*v26 + 4 * v11);
      v56 = *(uint32_t **)(*v26 + 4 * v11 - 4);
      v13 = v12[60];
      v68 = v12[61];
      v55 = v68;
      v14 = v12[62];
      v67 = v13;
      v54 = v14;
      v69 = v14;
      v70 = v12[63];
      v53 = v70;
      v71 = v12[64];
      v52 = v71;
      v72 = v12[65];
      v51 = v72;
      v73 = v12[66];
      v50 = v73;
      v74 = v12[67];
      v49 = v74;
      v75 = v12[68];
      v48 = v75;
      v76 = v12[69];
      v47 = v76;
      v77 = v12[70];
      v46 = v77;
      v78 = v12[71];
      v45 = v78;
      v79 = v12[72];
      v44 = v79;
      v80 = v12[73];
      v43 = v80;
      v15 = v12[74];
      v16 = v12[75];
      v42 = v15;
      v81 = v15;
      v17 = v56;
      v41 = v16;
      v82 = v16;
      v57 = v56[60];
      v83 = v57;
      v84 = v17[61];
      v40 = v84;
      v85 = v17[62];
      v39 = v85;
      v86 = v17[63];
      v38 = v86;
      v87 = v17[64];
      v37 = v87;
      v88 = v17[65];
      v36 = v88;
      v89 = v17[66];
      v35 = v89;
      v90 = v17[67];
      v34 = v90;
      v91 = v17[68];
      v33 = v91;
      v92 = v17[69];
      v32 = v92;
      v93 = v17[70];
      v31 = v93;
      v94 = v17[71];
      v30 = v94;
      v95 = v17[72];
      v29 = v95;
      v96 = v17[73];
      v28 = v96;
      v18 = v17[74];
      v19 = v17[75];
      v8[36] = v13;
      v97 = v18;
      v98 = v19;
      v8[37] = v55;
      v8[38] = v54;
      v8[39] = v53;
      v8[40] = v52;
      v8[41] = v51;
      v8[42] = v50;
      v8[43] = v49;
      v8[44] = v48;
      v8[45] = v47;
      v8[46] = v46;
      v8[47] = v45;
      v8[24] = v57;
      v8[25] = v40;
      v8[26] = v39;
      v8[27] = v38;
      v8[28] = v37;
      v8[29] = v36;
      v8[30] = v35;
      v8[31] = v34;
      v8[32] = v33;
      v8[33] = v32;
      v8[34] = v31;
      v8[35] = v30;
      v8[12] = v44;
      v8[13] = v43;
      v8[14] = v42;
      v8[15] = v41;
      v8[8] = v29;
      v8[9] = v28;
      v8[10] = v18;
      v8[11] = v19;
      v20 = G4_VCALL<int>(v27, 20);
      if ( v20 == 101 )
      {
        v21 = 32 * v61;
      }
      else
      {
        if ( v20 == 102 )
        {
          v23 = 5 * v61;
        }
        else
        {
          if ( v20 != 100 )
            goto LABEL_5;
          v23 = 3 * v61;
        }
        v21 = 16 * v23;
      }
      v22 = (g4_int128_t *)(v27[8] + v21);
      v65 = v22[1];
      v66 = *v22;
LABEL_5:
      hkVector4f::setTransformedPos(v59, (const hkTransformf::Self *)&v67, (const hkVector4f::Self *)&v65);
      hkVector4f::setTransformedPos(v58, (const hkTransformf::Self *)&v83, v24);
      hkpConstraintDrawer::drawPivots((hkpConstraintDrawer::Self *)v8, v63, v62);
      hkpConstraintDrawer::drawBodyFrames((hkpConstraintDrawer::Self *)v8, v63, v62);
      v24 = (hkVector4f::Self *)v62;
      result = (*(int (**)(int *, hkDebugDisplayHandler::Self *, hkVector4f::Self *, hkVector4f::Self *, int, int))(*(uint32_t *)v60 + 72))(
                 &v64,
                 v60,
                 v58,
                 v59,
                 -65536,
                 v63);
      if ( v11 == v25 )
        return result;
      v61 = v11;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintUtils::convertToLimits  (binary VA: 0x1857fe0)
// Original: hkpConstraintUtils::convertToLimits
// ----------------------------------------------------------------------------
int hkpConstraintUtils::convertToLimits(hkpConstraintDataUtils::Self **self)
{
  hkpRagdollLimitsData::Self *Limited;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  char v10;
  int v11;

  Limited = hkpConstraintDataUtils::createLimited(*(self + 3));
  if ( Limited == nullptr )
    return 0;
  v2 = (int)(uintptr_t)(*(self + 5));
  v11 = (int)(uintptr_t)(*(self + 6));
  v10 = *((uint8_t *)self + 28);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = G4_VCALL<int>(v3, 8, 56);
  hkpConstraintInstance::Construct(v4, v2, v11, (int)(uintptr_t)(Limited), v10);
  result = v4;
  if ( *((uint16_t *)Limited + 3) != 0 )
  {
    do
    {
      v7 = *((uint32_t *)Limited + 1);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      v8 = v6 | (uint16_t)(v7 - 1);
      v9 = v7;
    }
    while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)Limited + 1, v9, v8) );
    result = v4;
    if ( (uint16_t)v8 == 0 )
    {
      G4_VCALL<void>(Limited, 16);
      return v4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintUtils::setHingePivotToOptimalPosition  (binary VA: 0x18580c0)
// Original: hkpConstraintUtils::setHingePivotToOptimalPosition
// ----------------------------------------------------------------------------
int hkpConstraintUtils::setHingePivotToOptimalPosition(hkpConstraintUtils::Self *self, hkpConstraintInstance::Self *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float a13, float a14, int a15, int a16, float a17, float a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31)
{
  int v31;
  int result;
  int v33;
  int v34;
  float v35; // xmm1_4
  __m128i v36;
  __m128i v37;
  int v38;
  int v39;
  float v40; // xmm3_4
  float v41; // xmm6_4
  float v42; // xmm3_4
  __m128i v43;
  int v44;
  int v45;
  float v46; // xmm2_4
  float v47; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm0_4
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm4_4
  float v54; // xmm0_4
  float v55; // xmm0_4
  float v56; // xmm0_4
  float v57; // xmm5_4
  int v58;
  int v59;
  float v60; // xmm2_4
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  float retaddr;
  float thisa;
  float v98;
  float v99;
  int v100;
  float v101;

  v31 = *((uint32_t *)self + 3);
  result = G4_VCALL<int>(v31, 20, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95);
  if ( result == 1 || result == 2 )
  {
    v33 = v31 + 16;
    v34 = *((uint32_t *)self + 6);
    v100 = *((uint32_t *)self + 5);
    G4_VCALL<void>(v100 + 224, 52, &a8);
    a20 = *(uint32_t *)(v33 + 16);
    a21 = *(uint32_t *)(v33 + 20);
    a22 = *(uint32_t *)(v33 + 24);
    a23 = *(uint32_t *)(v33 + 28);
    a24 = *(uint32_t *)(v33 + 32);
    a25 = *(uint32_t *)(v33 + 36);
    a26 = *(uint32_t *)(v33 + 40);
    a27 = *(uint32_t *)(v33 + 44);
    a28 = *(uint32_t *)(v33 + 48);
    a29 = *(uint32_t *)(v33 + 52);
    a30 = *(uint32_t *)(v33 + 56);
    a31 = *(uint32_t *)(v33 + 60);
    hkMatrix3f::transpose((hkMatrix3f::Self *)&a20);
    hkMatrix3f::changeBasis((hkMatrix3f::Self *)&a8, (const hkRotationf::Self *)&a20);
    v35 = (float)((float)(a13 + a17) + 0.0) + (float)(a14 + a18);
g4_m128_raw(v36) = *(unsigned int *)(v100 + 428);
    if ( *(float *)g4_m128_ptr<int32_t>(v36) > 0.00000011920929f )
    {
      v58 = _mm_cvtsi128_si32(v36);
      v59 = (2130706432 - v58) & ((v58 ^ (v58 + 2139095040)) >> 31);
      v60 = (float)(2.0
                  - (float)(*(float *)g4_m128_ptr<int32_t>(v36)
                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v36) * *(float *)&v59)) * *(float *)&v59)))
          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v36) * *(float *)&v59)) * *(float *)&v59);
      v35 = v35 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v36) * v60)) * v60);
    }
    G4_VCALL<void>(v34 + 224, 52, &a8);
    a20 = *(uint32_t *)(v33 + 80);
    a21 = *(uint32_t *)(v33 + 84);
    a22 = *(uint32_t *)(v33 + 88);
    a23 = *(uint32_t *)(v33 + 92);
    a24 = *(uint32_t *)(v33 + 96);
    a25 = *(uint32_t *)(v33 + 100);
    a26 = *(uint32_t *)(v33 + 104);
    a27 = *(uint32_t *)(v33 + 108);
    a28 = *(uint32_t *)(v33 + 112);
    a29 = *(uint32_t *)(v33 + 116);
    a30 = *(uint32_t *)(v33 + 120);
    a31 = *(uint32_t *)(v33 + 124);
    hkMatrix3f::transpose((hkMatrix3f::Self *)&a20);
    hkMatrix3f::changeBasis((hkMatrix3f::Self *)&a8, (const hkRotationf::Self *)&a20);
    result = v100;
    v101 = (float)((float)(a13 + a17) + 0.0) + (float)(a14 + a18);
g4_m128_raw(v37) = *(unsigned int *)(v34 + 428);
    if ( *(float *)g4_m128_ptr<int32_t>(v37) > 0.00000011920929f )
    {
      v38 = _mm_cvtsi128_si32(v37);
      v39 = (2130706432 - v38) & ((v38 ^ (v38 + 2139095040)) >> 31);
      v40 = (float)(2.0
                  - (float)(*(float *)g4_m128_ptr<int32_t>(v37)
                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v37) * *(float *)&v39)) * *(float *)&v39)))
          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v37) * *(float *)&v39)) * *(float *)&v39);
      v101 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v37) * v40)) * v40) * v101;
    }
    v99 = *(float *)(v33 + 72) - *(float *)(v100 + 376);
    v41 = *(float *)(v33 + 68) - *(float *)(v100 + 372);
    thisa = *(float *)(v33 + 132) - *(float *)(v34 + 372);
    v42 = (float)((float)(*(float *)(v33 + 16) * (float)(*(float *)(v33 + 64) - *(float *)(v100 + 368)))
                + (float)(*(float *)(v33 + 20) * v41))
        + (float)(v99 * *(float *)(v33 + 24));
g4_m128_raw(v43) = LODWORD(v101);
    *(float *)g4_m128_ptr<int32_t>(v43) = v101 + v35;
    v98 = *(float *)(v33 + 128) - *(float *)(v34 + 368);
    v44 = _mm_cvtsi128_si32(v43);
    retaddr = *(float *)(v33 + 136) - *(float *)(v34 + 376);
    v45 = (2130706432 - v44) & ((v44 ^ (v44 + 2139095040)) >> 31);
    v46 = (float)((float)(v98 * *(float *)(v33 + 80)) + (float)(*(float *)(v33 + 84) * thisa))
        + (float)(retaddr * *(float *)(v33 + 88));
    v47 = (float)(2.0
                - (float)((float)(v101 + v35)
                        * (float)((float)(2.0 - (float)((float)(v101 + v35) * *(float *)&v45)) * *(float *)&v45)))
        * (float)((float)(2.0 - (float)((float)(v101 + v35) * *(float *)&v45)) * *(float *)&v45);
    v48 = (float)(2.0 - (float)((float)(v101 + v35) * v47)) * v47;
    v49 = (float)((float)(v101 * (float)(v42 - v46)) * v48) - v42;
    v50 = (float)((float)((float)-(float)(v42 - v46) * v35) * v48) - v46;
    v51 = (float)(*(float *)(v33 + 76) - *(float *)(v100 + 380)) + (float)(*(float *)(v33 + 28) * v49);
    v52 = (float)(*(float *)(v33 + 140) - *(float *)(v34 + 380)) + (float)(*(float *)(v33 + 92) * v50);
    *(float *)(v33 + 64) = (float)((float)(*(float *)(v33 + 64) - *(float *)(v100 + 368))
                                 + (float)(*(float *)(v33 + 16) * v49))
                         + *(float *)(v100 + 368);
    v53 = *(float *)(v33 + 20) * v49;
    v54 = (float)(v49 * *(float *)(v33 + 24)) + v99;
    *(float *)(v33 + 68) = (float)(v41 + v53) + *(float *)(v100 + 372);
    *(float *)(v33 + 72) = v54 + *(float *)(v100 + 376);
    v55 = (float)(*(float *)(v33 + 80) * v50) + v98;
    *(float *)(v33 + 76) = v51 + *(float *)(v100 + 380);
    *(float *)(v33 + 128) = v55 + *(float *)(v34 + 368);
    v56 = *(float *)(v33 + 84) * v50;
    v57 = (float)(v50 * *(float *)(v33 + 88)) + retaddr;
    *(float *)(v33 + 132) = (float)(v56 + thisa) + *(float *)(v34 + 372);
    *(float *)(v33 + 136) = v57 + *(float *)(v34 + 376);
    *(float *)(v33 + 140) = v52 + *(float *)(v34 + 380);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintUtils::collectConstraints  (binary VA: 0x1858640)
// Original: hkpConstraintUtils::collectConstraints
// ----------------------------------------------------------------------------
void hkpConstraintUtils::collectConstraints(uint32_t *a1, hkMemoryAllocator::Self *a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  unsigned int Constraint;
  signed int Key;
  int v9;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef hkMemoryAllocator::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_NumConstraints;
  typedef hkpEntity::Self *_g4_t_v16;
  typedef char _g4_t_v17;
  typedef uint32_t _g4_t_v18[2];
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_NumConstraints)) > _g4_s5 ? (40u + sizeof(_g4_t_NumConstraints)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (51u + sizeof(_g4_t_v17)) > _g4_s7 ? (51u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v18)) > _g4_s8 ? (52u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v19)) > _g4_s9 ? (60u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v20)) > _g4_s10 ? (76u + sizeof(_g4_t_v20)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_NumConstraints &NumConstraints = *reinterpret_cast<_g4_t_NumConstraints *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 51u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);

  v20 = (uint32_t *)(&a1);
  v11 = a1;
  v13 = a2;
  v14 = a3;
  v18[0] = 0;
  v3 = a1[1];
  v18[1] = 0;
  v19 = -1;
  if ( v3 <= 0 )
  {
    hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v18,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc);
  }
  else
  {
    v12 = 0;
    v4 = 0;
    v5 = a1;
    do
    {
      v6 = 0;
      v16 = *(hkpEntity::Self **)(*v5 + 4 * v4);
      NumConstraints = hkpEntity::getNumConstraints(v16);
      if ( NumConstraints > 0 )
      {
        do
        {
          while ( 1 )
          {
            Constraint = hkpEntity::getConstraint(v16, v6);
            if ( v14 == 0 || ((*(void (**)(char *))(*(uint32_t *)v14 + 8))(&v17), v17 != 0) )
            {
              Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
                      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v18,
                      Constraint);
              if ( Key > v19 )
                break;
            }
            if ( ++v6 == NumConstraints )
              goto LABEL_12;
          }
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v18,
            (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
            Constraint,
            1u);
          v9 = *((uint32_t *)v13 + 1);
          if ( v9 == (*((uint32_t *)v13 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v13, 4, v10);
            v9 = *((uint32_t *)v13 + 1);
          }
          ++v6;
          *(uint32_t *)(*(uint32_t *)v13 + 4 * v9) = Constraint;
          ++*((uint32_t *)v13 + 1);
        }
        while ( v6 != NumConstraints );
      }
LABEL_12:
      v5 = v11;
      v4 = ++v12;
    }
    while ( v11[1] > v12 );
    hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v18,
      (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc);
  }
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintUtils::convertToPowered  (binary VA: 0x18587f0)
// Original: hkpConstraintUtils::convertToPowered
// ----------------------------------------------------------------------------
int hkpConstraintUtils::convertToPowered(int a1, hkpConstraintMotor::Self *a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int32_t v11; // kr00_4
  int32_t v12;
  int32_t v13; // ett
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int32_t v20; // kr04_4
  int i;
  int32_t v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int address;
  int v30;
  int v31;
  int v32[3];
  int v33[135];

  v3 = *(uint32_t *)(a1 + 12);
  v26 = *(uint32_t *)(a1 + 20);
  v27 = *(uint32_t *)(a1 + 24);
  v4 = G4_VCALL<int>(v3, 20);
  if ( v4 == 2 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           272);
    hkpLimitedHingeConstraintData::Construct((hkpLimitedHingeConstraintData::Self *)v5);
    *(uint16_t *)(v5 + 16) = *(uint16_t *)(v3 + 16);
    *(uint32_t *)(v5 + 32) = *(uint32_t *)(v3 + 32);
    *(uint32_t *)(v5 + 36) = *(uint32_t *)(v3 + 36);
    *(uint32_t *)(v5 + 40) = *(uint32_t *)(v3 + 40);
    *(uint32_t *)(v5 + 44) = *(uint32_t *)(v3 + 44);
    *(uint32_t *)(v5 + 48) = *(uint32_t *)(v3 + 48);
    *(uint32_t *)(v5 + 52) = *(uint32_t *)(v3 + 52);
    *(uint32_t *)(v5 + 56) = *(uint32_t *)(v3 + 56);
    *(uint32_t *)(v5 + 60) = *(uint32_t *)(v3 + 60);
    *(uint32_t *)(v5 + 64) = *(uint32_t *)(v3 + 64);
    *(uint32_t *)(v5 + 68) = *(uint32_t *)(v3 + 68);
    *(uint32_t *)(v5 + 72) = *(uint32_t *)(v3 + 72);
    *(uint32_t *)(v5 + 76) = *(uint32_t *)(v3 + 76);
    *(uint32_t *)(v5 + 80) = *(uint32_t *)(v3 + 80);
    *(uint32_t *)(v5 + 84) = *(uint32_t *)(v3 + 84);
    *(uint32_t *)(v5 + 88) = *(uint32_t *)(v3 + 88);
    *(uint32_t *)(v5 + 92) = *(uint32_t *)(v3 + 92);
    *(uint32_t *)(v5 + 96) = *(uint32_t *)(v3 + 96);
    *(uint32_t *)(v5 + 100) = *(uint32_t *)(v3 + 100);
    *(uint32_t *)(v5 + 104) = *(uint32_t *)(v3 + 104);
    *(uint32_t *)(v5 + 108) = *(uint32_t *)(v3 + 108);
    *(uint32_t *)(v5 + 112) = *(uint32_t *)(v3 + 112);
    *(uint32_t *)(v5 + 116) = *(uint32_t *)(v3 + 116);
    *(uint32_t *)(v5 + 120) = *(uint32_t *)(v3 + 120);
    *(uint32_t *)(v5 + 124) = *(uint32_t *)(v3 + 124);
    *(uint32_t *)(v5 + 128) = *(uint32_t *)(v3 + 128);
    *(uint32_t *)(v5 + 132) = *(uint32_t *)(v3 + 132);
    *(uint32_t *)(v5 + 136) = *(uint32_t *)(v3 + 136);
    *(uint32_t *)(v5 + 140) = *(uint32_t *)(v3 + 140);
    *(uint32_t *)(v5 + 144) = *(uint32_t *)(v3 + 144);
    *(uint32_t *)(v5 + 148) = *(uint32_t *)(v3 + 148);
    *(uint32_t *)(v5 + 152) = *(uint32_t *)(v3 + 152);
    *(uint32_t *)(v5 + 156) = *(uint32_t *)(v3 + 156);
    *(uint32_t *)(v5 + 160) = *(uint32_t *)(v3 + 160);
    *(uint32_t *)(v5 + 164) = *(uint32_t *)(v3 + 164);
    *(uint32_t *)(v5 + 168) = *(uint32_t *)(v3 + 168);
    *(uint32_t *)(v5 + 172) = *(uint32_t *)(v3 + 172);
    *(uint32_t *)(v5 + 176) = *(uint32_t *)(v3 + 176);
    *(uint32_t *)(v5 + 180) = *(uint32_t *)(v3 + 180);
    *(uint32_t *)(v5 + 184) = *(uint32_t *)(v3 + 184);
    *(uint32_t *)(v5 + 188) = *(uint32_t *)(v3 + 188);
    v18 = *(uint32_t *)(v3 + 192);
    *(uint32_t *)(v5 + 192) = v18;
    *(uint32_t *)(v5 + 196) = *(uint32_t *)(v3 + 196);
    *(uint32_t *)(v5 + 200) = *(uint32_t *)(v3 + 200);
    *(uint32_t *)(v5 + 204) = *(uint32_t *)(v3 + 204);
    *(uint32_t *)(v5 + 208) = *(uint32_t *)(v3 + 208);
    *(uint32_t *)(v5 + 212) = *(uint32_t *)(v3 + 212);
    *(uint32_t *)(v5 + 216) = *(uint32_t *)(v3 + 216);
    *(uint32_t *)(v5 + 220) = *(uint32_t *)(v3 + 220);
    *(uint32_t *)(v5 + 224) = *(uint32_t *)(v3 + 224);
    *(uint32_t *)(v5 + 228) = *(uint32_t *)(v3 + 228);
    *(uint32_t *)(v5 + 232) = *(uint32_t *)(v3 + 232);
    *(uint32_t *)(v5 + 236) = *(uint32_t *)(v3 + 236);
    *(uint32_t *)(v5 + 240) = *(uint32_t *)(v3 + 240);
    *(uint32_t *)(v5 + 244) = *(uint32_t *)(v3 + 244);
    *(uint32_t *)(v5 + 248) = *(uint32_t *)(v3 + 248);
    *(uint16_t *)(v5 + 252) = *(uint16_t *)(v3 + 252);
    *(uint8_t *)(v5 + 254) = *(uint8_t *)(v3 + 254);
    *(uint32_t *)(v5 + 256) = *(uint32_t *)(v3 + 256);
    *(uint32_t *)(v5 + 260) = *(uint32_t *)(v3 + 260);
    *(uint32_t *)(v5 + 264) = *(uint32_t *)(v3 + 264);
    *(uint32_t *)(v5 + 268) = *(uint32_t *)(v3 + 268);
    v8 = address;
    if ( v18 != 0 && *(uint16_t *)(v18 + 6) != 0 )
    {
      do
      {
        v20 = *(uint32_t *)(v18 + 4);
        HIWORD(v19) = HIWORD(v20);
        LOWORD(v19) = 0;
      }
      while ( v20 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(v18 + 4),
                       v20,
                       v19 | (uint16_t)(v20 + 1)) );
      v8 = address;
    }
  }
  else
  {
    if ( v4 != 7 )
    {
      hkErrStream::Construct((hkErrStream::Self *)v32, (hkString::Self *)v33, 512);
      v15 = *(uint32_t *)(a1 + 40);
      v16 = hkOstream::opShl((int)(uintptr_t)(v32), (hkString::Self *)"Cannot convert constraint \"");
      v17 = hkOstream::opShl(v16, (hkString::Self *)(v15 & 0xFFFFFFFE));
      hkOstream::opShl(v17, (hkString::Self *)"\" to a powered constraint.");
      hkError::messageWarning(
        (hkError::Self *)0xABBA1B34,
        (int)(uintptr_t)(v33),
        "Constraint/Bilateral/hkpConstraintUtils.cpp",
        (const char *)&dword_54 + 1,
        v24);
      hkErrStream::Destroy((hkErrStream::Self *)v32);
      hkErrStream::Construct((hkErrStream::Self *)v32, (hkString::Self *)v33, 512);
      hkOstream::opShl((int)(uintptr_t)(v32), (hkString::Self *)"Only limited hinges and ragdoll constraints can be powered.");
      hkError::messageWarning(
        (hkError::Self *)0xABBA1B34,
        (int)(uintptr_t)(v33),
        "Constraint/Bilateral/hkpConstraintUtils.cpp",
        (const char *)&dword_54 + 2,
        v25);
      hkErrStream::Destroy((hkErrStream::Self *)v32);
      return 0;
    }
    v30 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v30 + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)v30 + 44),
           384);
    hkpRagdollConstraintData::Construct((hkpRagdollConstraintData::Self *)v5);
    *(uint16_t *)(v5 + 16) = *(uint16_t *)(v3 + 16);
    *(uint32_t *)(v5 + 32) = *(uint32_t *)(v3 + 32);
    *(uint32_t *)(v5 + 36) = *(uint32_t *)(v3 + 36);
    *(uint32_t *)(v5 + 40) = *(uint32_t *)(v3 + 40);
    *(uint32_t *)(v5 + 44) = *(uint32_t *)(v3 + 44);
    *(uint32_t *)(v5 + 48) = *(uint32_t *)(v3 + 48);
    *(uint32_t *)(v5 + 52) = *(uint32_t *)(v3 + 52);
    *(uint32_t *)(v5 + 56) = *(uint32_t *)(v3 + 56);
    *(uint32_t *)(v5 + 60) = *(uint32_t *)(v3 + 60);
    *(uint32_t *)(v5 + 64) = *(uint32_t *)(v3 + 64);
    *(uint32_t *)(v5 + 68) = *(uint32_t *)(v3 + 68);
    *(uint32_t *)(v5 + 72) = *(uint32_t *)(v3 + 72);
    *(uint32_t *)(v5 + 76) = *(uint32_t *)(v3 + 76);
    *(uint32_t *)(v5 + 80) = *(uint32_t *)(v3 + 80);
    *(uint32_t *)(v5 + 84) = *(uint32_t *)(v3 + 84);
    *(uint32_t *)(v5 + 88) = *(uint32_t *)(v3 + 88);
    *(uint32_t *)(v5 + 92) = *(uint32_t *)(v3 + 92);
    *(uint32_t *)(v5 + 96) = *(uint32_t *)(v3 + 96);
    *(uint32_t *)(v5 + 100) = *(uint32_t *)(v3 + 100);
    *(uint32_t *)(v5 + 104) = *(uint32_t *)(v3 + 104);
    *(uint32_t *)(v5 + 108) = *(uint32_t *)(v3 + 108);
    *(uint32_t *)(v5 + 112) = *(uint32_t *)(v3 + 112);
    *(uint32_t *)(v5 + 116) = *(uint32_t *)(v3 + 116);
    *(uint32_t *)(v5 + 120) = *(uint32_t *)(v3 + 120);
    *(uint32_t *)(v5 + 124) = *(uint32_t *)(v3 + 124);
    *(uint32_t *)(v5 + 128) = *(uint32_t *)(v3 + 128);
    *(uint32_t *)(v5 + 132) = *(uint32_t *)(v3 + 132);
    *(uint32_t *)(v5 + 136) = *(uint32_t *)(v3 + 136);
    *(uint32_t *)(v5 + 140) = *(uint32_t *)(v3 + 140);
    *(uint32_t *)(v5 + 144) = *(uint32_t *)(v3 + 144);
    *(uint32_t *)(v5 + 148) = *(uint32_t *)(v3 + 148);
    *(uint32_t *)(v5 + 152) = *(uint32_t *)(v3 + 152);
    *(uint32_t *)(v5 + 156) = *(uint32_t *)(v3 + 156);
    *(uint32_t *)(v5 + 160) = *(uint32_t *)(v3 + 160);
    *(uint32_t *)(v5 + 164) = *(uint32_t *)(v3 + 164);
    *(uint32_t *)(v5 + 168) = *(uint32_t *)(v3 + 168);
    *(uint32_t *)(v5 + 172) = *(uint32_t *)(v3 + 172);
    *(uint16_t *)(v5 + 176) = *(uint16_t *)(v3 + 176);
    *(uint8_t *)(v5 + 178) = *(uint8_t *)(v3 + 178);
    *(uint16_t *)(v5 + 180) = *(uint16_t *)(v3 + 180);
    *(uint16_t *)(v5 + 182) = *(uint16_t *)(v3 + 182);
    *(uint32_t *)(v5 + 192) = *(uint32_t *)(v3 + 192);
    *(uint32_t *)(v5 + 196) = *(uint32_t *)(v3 + 196);
    *(uint32_t *)(v5 + 200) = *(uint32_t *)(v3 + 200);
    *(uint32_t *)(v5 + 204) = *(uint32_t *)(v3 + 204);
    *(uint32_t *)(v5 + 208) = *(uint32_t *)(v3 + 208);
    *(uint32_t *)(v5 + 212) = *(uint32_t *)(v3 + 212);
    *(uint32_t *)(v5 + 216) = *(uint32_t *)(v3 + 216);
    *(uint32_t *)(v5 + 220) = *(uint32_t *)(v3 + 220);
    *(uint32_t *)(v5 + 224) = *(uint32_t *)(v3 + 224);
    *(uint32_t *)(v5 + 228) = *(uint32_t *)(v3 + 228);
    *(uint32_t *)(v5 + 232) = *(uint32_t *)(v3 + 232);
    *(uint32_t *)(v5 + 236) = *(uint32_t *)(v3 + 236);
    *(uint32_t *)(v5 + 240) = *(uint32_t *)(v3 + 240);
    *(uint32_t *)(v5 + 244) = *(uint32_t *)(v3 + 244);
    *(uint32_t *)(v5 + 248) = *(uint32_t *)(v3 + 248);
    *(uint32_t *)(v5 + 256) = *(uint32_t *)(v3 + 256);
    *(uint32_t *)(v5 + 260) = *(uint32_t *)(v3 + 260);
    *(uint32_t *)(v5 + 264) = *(uint32_t *)(v3 + 264);
    *(uint32_t *)(v5 + 268) = *(uint32_t *)(v3 + 268);
    *(uint32_t *)(v5 + 272) = *(uint32_t *)(v3 + 272);
    *(uint32_t *)(v5 + 276) = *(uint32_t *)(v3 + 276);
    *(uint32_t *)(v5 + 280) = *(uint32_t *)(v3 + 280);
    *(uint32_t *)(v5 + 284) = *(uint32_t *)(v3 + 284);
    *(uint32_t *)(v5 + 288) = *(uint32_t *)(v3 + 288);
    *(uint32_t *)(v5 + 292) = *(uint32_t *)(v3 + 292);
    *(uint32_t *)(v5 + 296) = *(uint32_t *)(v3 + 296);
    *(uint32_t *)(v5 + 300) = *(uint32_t *)(v3 + 300);
    *(uint32_t *)(v5 + 304) = *(uint32_t *)(v3 + 304);
    *(uint32_t *)(v5 + 308) = *(uint32_t *)(v3 + 308);
    *(uint32_t *)(v5 + 312) = *(uint32_t *)(v3 + 312);
    *(uint32_t *)(v5 + 316) = *(uint32_t *)(v3 + 316);
    *(uint32_t *)(v5 + 320) = *(uint32_t *)(v3 + 320);
    *(uint32_t *)(v5 + 324) = *(uint32_t *)(v3 + 324);
    *(uint32_t *)(v5 + 328) = *(uint32_t *)(v3 + 328);
    *(uint32_t *)(v5 + 332) = *(uint32_t *)(v3 + 332);
    *(uint32_t *)(v5 + 336) = *(uint32_t *)(v3 + 336);
    *(uint32_t *)(v5 + 340) = *(uint32_t *)(v3 + 340);
    *(uint32_t *)(v5 + 344) = *(uint32_t *)(v3 + 344);
    *(uint32_t *)(v5 + 348) = *(uint32_t *)(v3 + 348);
    *(uint32_t *)(v5 + 352) = *(uint32_t *)(v3 + 352);
    *(uint32_t *)(v5 + 356) = *(uint32_t *)(v3 + 356);
    *(uint32_t *)(v5 + 360) = *(uint32_t *)(v3 + 360);
    *(uint32_t *)(v5 + 364) = *(uint32_t *)(v3 + 364);
    *(uint32_t *)(v5 + 368) = *(uint32_t *)(v3 + 368);
    *(uint32_t *)(v5 + 372) = *(uint32_t *)(v3 + 372);
    *(uint32_t *)(v5 + 376) = *(uint32_t *)(v3 + 376);
    *(uint32_t *)(v5 + 380) = *(uint32_t *)(v3 + 380);
    v6 = v5 + 16;
    do
    {
      v7 = *(uint32_t *)(v6 + 224);
      if ( v7 != 0 && *(uint16_t *)(v7 + 6) != 0 )
      {
        v31 = *(uint32_t *)(v6 + 224);
        for ( i = v31; ; i = v31 )
        {
          v22 = *(uint32_t *)(i + 4);
          HIWORD(v23) = HIWORD(v22);
          LOWORD(v23) = 0;
          if ( v22 == __sync_val_compare_and_swap(
                        (volatile int32_t *)(v7 + 4),
                        v22,
                        v23 | (uint16_t)(v22 + 1)) )
            break;
        }
      }
      v6 += 4;
    }
    while ( v6 != v5 + 28 );
    v8 = v30;
  }
  hkpConstraintDataUtils::convertToPowered((hkpLimitedHingeConstraintData::Self *)v5, a2, a3);
  v28 = *(uint8_t *)(a1 + 28);
  v9 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v8 + 44) + 8))(*(uint32_t *)(*(uint32_t *)v8 + 44), 56);
  hkpConstraintInstance::Construct(v9, v26, v27, v5, v28);
  if ( *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v11 = *(uint32_t *)(v5 + 4);
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
      v12 = v10 | (uint16_t)(v11 - 1);
      v13 = v11;
    }
    while ( v13 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v13, v12) );
    if ( (uint16_t)v12 == 0 )
      G4_VCALL<void>(v5, 16);
  }
  hkStringPtr::opAssign((hkStringPtr::Self *)(v9 + 40), (hkString::Self *)(*(uint32_t *)(a1 + 40) & 0xFFFFFFFE));
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintUtils::checkAndFixConstraint  (binary VA: 0x185a130)
// Original: hkpConstraintUtils::checkAndFixConstraint
// ----------------------------------------------------------------------------
hkpConstraintUtils::Self * hkpConstraintUtils::checkAndFixConstraint(hkpConstraintUtils::Self *self, const hkpConstraintData::Self **a2, float a3, float a4)
{
  const hkpConstraintData::Self **v4;
  hkpConstraintUtils::Self *v5;
  float v6; // xmm6_4
  float v7;
  float v8; // xmm4_4
  float *v9;
  const hkpConstraintData::Self *v10;
  float v11; // xmm5_4
  float v12; // xmm2_4
  float v13; // xmm7_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v17; // xmm3_4
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef hkpConstraintUtils::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[3];
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44[134];
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v24)) > _g4_s6 ? (36u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v25)) > _g4_s7 ? (40u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v26)) > _g4_s8 ? (44u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v27)) > _g4_s9 ? (48u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v28)) > _g4_s10 ? (52u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v29)) > _g4_s11 ? (56u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v30)) > _g4_s12 ? (60u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v31)) > _g4_s13 ? (64u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v32)) > _g4_s14 ? (68u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v33)) > _g4_s15 ? (72u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v34)) > _g4_s16 ? (76u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v35)) > _g4_s17 ? (76u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v36)) > _g4_s18 ? (80u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v37)) > _g4_s19 ? (88u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v38)) > _g4_s20 ? (100u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v39)) > _g4_s21 ? (104u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v40)) > _g4_s22 ? (108u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v41)) > _g4_s23 ? (116u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v42)) > _g4_s24 ? (120u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v43)) > _g4_s25 ? (124u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v44)) > _g4_s26 ? (132u + sizeof(_g4_t_v44)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 100u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 104u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 108u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 116u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 132u);

  LODWORD(v44[130]) = (uint32_t)(uintptr_t)(&self);
  v4 = a2;
  v33 = a3;
  v34 = self;
  v29 = a4;
  hkpConstraintDataUtils::getConstraintPivots(
    (hkpConstraintDataUtils::Self *)&v36,
    a2[3],
    (hkVector4f::Self *)&v38,
    (hkVector4f::Self *)&v41);
  v5 = v34;
  if ( v36 != 0 )
    goto LABEL_5;
  v6 = v38;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v39))));
  v8 = v40;
  if ( (float)((float)((float)(v6 * v6) + (float)(v39 * v39)) + (float)(v8 * v8)) > 0.000001f )
  {
    hkErrStream::Construct((hkErrStream::Self *)v37, (hkString::Self *)v44, 512);
    hkOstream::opShl(
      (int)(uintptr_t)(v37),
      (hkString::Self *)"Pivot of child rigid body (A) is expected to be aligned with the constraint at setup time.");
    hkError::messageWarning(
      (hkError::Self *)0xABBA5DFF,
      (int)(uintptr_t)(v44),
      "Constraint/Bilateral/hkpConstraintUtils.cpp",
      (const char *)&dword_80 + 3,
      v20);
    hkErrStream::Destroy((hkErrStream::Self *)v37);
    v6 = v38;
    v7 = v39;
    v8 = v40;
    v5 = v34;
  }
  v9 = (float *)v4[6];
  v25 = v9[63];
  v10 = v4[5];
  v24 = v9[67];
  v23 = v9[71];
  v26 = v42;
  v28 = v9[72];
  v31 = v43;
  v11 = (float)((float)((float)(v9[60] * v41) + (float)(v9[64] * v42)) + (float)(v9[68] * v43)) + v28;
  v35 = *((int *)v9 + 73);
  v32 = v9[74];
  v27 = v9[75];
  v12 = (float)((float)((float)(v9[61] * v41) + (float)(v9[65] * v42)) + (float)(v9[69] * v43)) + *(float *)&v35;
  v13 = (float)((float)((float)(v9[62] * v41) + (float)(v9[66] * v42)) + (float)(v43 * v9[70])) + v32;
  v30 = v11
      - (float)((float)((float)((float)(*((float *)v10 + 60) * v6) + (float)(v7 * *((float *)v10 + 64)))
                      + (float)(*((float *)v10 + 68) * v8))
              + *((float *)v10 + 72));
  v14 = v12
      - (float)((float)((float)((float)(*((float *)v10 + 61) * v6) + (float)(v7 * *((float *)v10 + 65)))
                      + (float)(*((float *)v10 + 69) * v8))
              + *((float *)v10 + 73));
  v15 = (float)((float)(v6 * *((float *)v10 + 62)) + (float)(v7 * *((float *)v10 + 66)))
      + (float)(v8 * *((float *)v10 + 70));
  if ( (float)((float)((float)(v14 * v14) + (float)(v30 * v30))
             + (float)((float)(v13 - (float)(v15 + *((float *)v10 + 74)))
                     * (float)(v13 - (float)(v15 + *((float *)v10 + 74))))) <= (float)(v33 * v33) )
  {
LABEL_5:
    *(uint8_t *)v5 = 0;
    return v5;
  }
  else
  {
    v17 = (float)((float)((float)(v41 * v25) + (float)(v42 * v24)) + (float)(v43 * v23)) + v27;
    v44[0] = (float)((float)(v28 - v11) * v29) + v11;
    v44[1] = (float)((float)(*(float *)&v35 - v12) * v29) + v12;
    v44[2] = (float)((float)(v32 - v13) * v29) + v13;
    v44[3] = (float)((float)(v27 - v17) * v29) + v17;
    hkpRigidBody::setPosition(v10, (const hkVector4f::Self *)v44);
    hkpEntity::activate(v10);
    (*(void (**)(int, float *, int, int, int, int, int, float, float, float, float, float, float, float, float, float, float))(*((uint32_t *)v10 + 56) + 80))(
      (int)(uintptr_t)(v10) + 224,
      v9 + 108,
      v18,
      v19,
      v20,
      v21,
      v22,
      COERCE_FLOAT(LODWORD(v23)),
      COERCE_FLOAT(LODWORD(v24)),
      COERCE_FLOAT(LODWORD(v25)),
      COERCE_FLOAT(LODWORD(v26)),
      COERCE_FLOAT(LODWORD(v27)),
      COERCE_FLOAT(LODWORD(v28)),
      COERCE_FLOAT(LODWORD(v29)),
      COERCE_FLOAT(LODWORD(v30)),
      COERCE_FLOAT(LODWORD(v31)),
      COERCE_FLOAT(LODWORD(v32)));
    hkpEntity::activate(v10);
    (*(void (**)(void))(*((uint32_t *)v10 + 56) + 84))();
    *((uint8_t *)v10 + 224) = 1;
    return (hkpConstraintUtils::Self *)((const hkpConstraintData::Self *)((char *)v10 + 224));
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainUtil::addConstraintToBallSocketChain  (binary VA: 0x185a600)
// Original: hkpConstraintChainUtil::addConstraintToBallSocketChain
// ----------------------------------------------------------------------------
int hkpConstraintChainUtil::addConstraintToBallSocketChain(hkpConstraintChainUtil::Self *self, hkpConstraintChainInstance::Self *a2, hkpEntity::Self *a3)
{
  int v3;
  float *v4;
  float *v5;
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm6_4
  typedef hkpBallSocketChainData::Self *_g4_t_v28;
  typedef float _g4_t_v29[4];
  typedef float _g4_t_v30[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);

  v28 = *((hkpBallSocketChainData::Self **)self + 3);
  v3 = *(uint32_t *)(*((uint32_t *)self + 14) + 4 * *((uint32_t *)self + 15) - 4);
  v4 = nullptr;
  if ( *(uint8_t *)(v3 + 40) == 1 )
    v4 = (float *)(v3 + *(char *)(v3 + 32) + 16);
  v5 = nullptr;
  if ( *((uint8_t *)a2 + 40) == 1 )
    v5 = (float *)((char *)a2 + *((char *)a2 + 32) + 16);
  v6 = *(float *)a3 - v4[72];
  v7 = *((float *)a3 + 1) - v4[73];
  v8 = *((float *)a3 + 2) - v4[74];
  v9 = (float)(v4[60] * v6) + (float)(v4[61] * v7);
  v10 = *(float *)a3 - v5[72];
  v11 = *((float *)a3 + 1) - v5[73];
  v12 = (float)(v4[64] * v6) + (float)(v4[65] * v7);
  v13 = v4[66] * v8;
  v14 = (float)((float)(v6 * v4[68]) + (float)(v7 * v4[69])) + (float)(v4[70] * v8);
  v15 = v9 + (float)(v8 * v4[62]);
  v16 = *((float *)a3 + 2) - v5[74];
  v17 = v5[65] * v11;
  v29[1] = v12 + v13;
  v18 = v5[61];
  v29[0] = v15;
  v19 = v5[60];
  v20 = v18 * v11;
  v21 = v11 * v5[69];
  v29[2] = v14;
  v29[3] = v14;
  v22 = (float)(v19 * v10) + v20;
  v23 = (float)((float)(v5[64] * v10) + v17) + (float)(v5[66] * v16);
  v24 = v5[70] * v16;
  v25 = v16 * v5[62];
  v26 = (float)((float)(v10 * v5[68]) + v21) + v24;
  v30[1] = v23;
  v30[0] = v22 + v25;
  v30[2] = v26;
  v30[3] = v26;
  hkpBallSocketChainData::addConstraintInfoInBodySpace(v28, (const hkVector4f::Self *)v29, (const hkVector4f::Self *)v30);
  return hkpConstraintChainInstance::addEntity((hkpConstraintChainInstance::Self *)(self), (hkpEntity::Self *)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainUtil::addConstraintToPoweredChain  (binary VA: 0x185a800)
// Original: hkpConstraintChainUtil::addConstraintToPoweredChain
// ----------------------------------------------------------------------------
int hkpConstraintChainUtil::addConstraintToPoweredChain(hkpConstraintChainUtil::Self *self, hkpConstraintChainInstance::Self *a2, hkpEntity::Self *a3, const hkVector4f::Self *a4, hkpConstraintMotor::Self *a5, hkpConstraintMotor::Self *a6)
{
  int v6;
  float *v7;
  float *v8;
  float v9;
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm5_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm6_4
  float v31; // xmm4_4
  float v32; // xmm7_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  typedef hkpPoweredChainData::Self *_g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41[4];
  typedef float _g4_t_v42[4];
  typedef float _g4_t_v43[15];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v39)) > _g4_s1 ? (8u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v40)) > _g4_s2 ? (12u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v41)) > _g4_s3 ? (16u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v42)) > _g4_s4 ? (32u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v43)) > _g4_s5 ? (48u + sizeof(_g4_t_v43)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);

  v38 = *((hkpPoweredChainData::Self **)self + 3);
  v6 = *(uint32_t *)(*((uint32_t *)self + 14) + 4 * *((uint32_t *)self + 15) - 4);
  v7 = nullptr;
  if ( *(uint8_t *)(v6 + 40) == 1 )
    v7 = (float *)(v6 + *(char *)(v6 + 32) + 16);
  v8 = nullptr;
  if ( *((uint8_t *)a2 + 40) == 1 )
    v8 = (float *)((char *)a2 + *((char *)a2 + 32) + 16);
  v9 = *((float *)a3 + 2);
  v10 = *(float *)a3 - v7[72];
  v11 = *((float *)a3 + 1) - v7[73];
  v12 = v9 - v7[74];
  v13 = (float)(v7[60] * v10) + (float)(v7[61] * v11);
  v14 = *(float *)a3 - v8[72];
  v15 = *((float *)a3 + 1) - v8[73];
  v16 = (float)(v7[64] * v10) + (float)(v7[65] * v11);
  v17 = v7[66] * v12;
  v18 = (float)((float)(v10 * v7[68]) + (float)(v11 * v7[69])) + (float)(v7[70] * v12);
  v19 = v13 + (float)(v12 * v7[62]);
  v20 = v9 - v8[74];
  v21 = v8[65] * v15;
  v41[1] = v16 + v17;
  v22 = v8[61];
  v41[0] = v19;
  v23 = v22 * v15;
  v24 = v8[60] * v14;
  v25 = v15 * v8[69];
  v41[2] = v18;
  v41[3] = v18;
  v26 = v24 + v23;
  v27 = (float)((float)(v8[64] * v14) + v21) + (float)(v8[66] * v20);
  v28 = v8[70] * v20;
  v29 = v20 * v8[62];
  v30 = (float)((float)(v14 * v8[68]) + v25) + v28;
  v42[1] = v27;
  v42[0] = v26 + v29;
  v42[2] = v30;
  v31 = v8[88];
  v32 = v7[89];
  v33 = v7[88];
  v40 = v8[91];
  v39 = v7[91];
  v42[3] = v30;
  v34 = v8[89];
  v35 = v8[90];
  v36 = v7[90];
  LODWORD(v43[8]) = (uint32_t)(uintptr_t)(a4);
  LODWORD(v43[9]) = (uint32_t)(uintptr_t)(a5);
  LODWORD(v43[10]) = (uint32_t)(uintptr_t)(a6);
  v43[0] = (float)((float)((float)(v32 * v35) - (float)(v34 * v36)) - (float)(v40 * v33)) + (float)(v39 * v31);
  v43[1] = (float)((float)((float)(v31 * v36) - (float)(v35 * v33)) - (float)(v40 * v32)) + (float)(v39 * v34);
  v43[3] = (float)((float)((float)(v31 * v33) + (float)(v32 * v34)) + (float)(v35 * v36)) + (float)(v40 * v39);
  v43[2] = (float)((float)((float)(v33 * v34) - (float)(v31 * v32)) - (float)(v36 * v40)) + (float)(v35 * v39);
  hkpPoweredChainData::addConstraintInfoInBodySpace(
    v38,
    (const hkVector4f::Self *)v41,
    (const hkVector4f::Self *)v42,
    (const hkQuaternionf::Self *)v43,
    a4,
    a5,
    a6);
  return hkpConstraintChainInstance::addEntity((hkpConstraintChainInstance::Self *)(self), (hkpEntity::Self *)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainUtil::getAdjointEntities  (binary VA: 0x185ab50)
// Original: hkpConstraintChainUtil::getAdjointEntities
// ----------------------------------------------------------------------------
void hkpConstraintChainUtil::getAdjointEntities(uint32_t *a1, int a2, hkMemoryAllocator::Self *a3, uint32_t *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v4 = 0;
  v5 = a1[1];
  if ( v5 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *(uint32_t *)(*a1 + 4 * v4);
        v7 = *(uint32_t *)(v6 + 20);
        if ( v7 != a2 )
          break;
        v8 = *(uint32_t *)(v6 + 24);
LABEL_7:
        v9 = v8 ^ a2 ^ v7;
        v13 = *((uint32_t *)a3 + 1);
        if ( v13 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
        {
          v14 = v9;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 4, v12);
          v9 = v14;
          v13 = *((uint32_t *)a3 + 1);
        }
        *(uint32_t *)(*(uint32_t *)a3 + 4 * v13) = v9;
        ++*((uint32_t *)a3 + 1);
        v10 = a4;
        v11 = a4[1];
        if ( v11 == (a4[2] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a4, 4, v12);
          v10 = a4;
          v11 = a4[1];
        }
        ++v4;
        *(uint32_t *)(*v10 + 4 * v11) = v6;
        ++v10[1];
        v5 = a1[1];
        if ( v4 >= v5 )
          return;
      }
      if ( a2 == *(uint32_t *)(v6 + 24) )
      {
        v8 = a2;
        goto LABEL_7;
      }
      ++v4;
    }
    while ( v4 < v5 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainUtil::addConstraintToChain  (binary VA: 0x185adb0)
// Original: hkpConstraintChainUtil::addConstraintToChain
// ----------------------------------------------------------------------------
hkpConstraintChainUtil::Self * hkpConstraintChainUtil::addConstraintToChain(hkpConstraintChainUtil::Self *self, const hkpConstraintData::Self **a2, hkpConstraintChainInstance::Self *a3, hkpBallSocketChainData::Self *a4)
{
  const hkpConstraintData::Self **v4;
  hkpConstraintChainUtil::Self *v5;
  int v6;
  const hkpConstraintData::Self **v7;
  const hkpConstraintData::Self *v8;
  const hkpConstraintData::Self *v9;
  const hkpConstraintData::Self *v11;
  int v12;
  int v13;
  hkpBallSocketChainData::Self *v14;
  int v15;
  int32_t v16; // kr00_4
  const hkpConstraintData::Self *v17;
  int v18;
  int v19;
  hkpBallSocketChainData::Self *v20;
  int v21;
  int32_t v22; // kr04_4
  int v23;
  int v24;
  typedef const hkpConstraintData::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef hkpBallSocketChainData::Self *_g4_t_v28;
  typedef hkpBallSocketChainData::Self *_g4_t_v29;
  typedef hkpBallSocketChainData::Self *_g4_t_v30;
  typedef int *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef hkpConstraintChainUtil::Self **_g4_t_v49;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v25)) > _g4_s0 ? (12u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v28)) > _g4_s3 ? (16u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v29)) > _g4_s4 ? (16u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v30)) > _g4_s5 ? (16u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v31)) > _g4_s6 ? (20u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v32)) > _g4_s7 ? (24u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v33)) > _g4_s8 ? (28u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v34)) > _g4_s9 ? (32u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v35)) > _g4_s10 ? (36u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v36)) > _g4_s11 ? (40u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v37)) > _g4_s12 ? (44u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v38)) > _g4_s13 ? (48u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v39)) > _g4_s14 ? (52u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v40)) > _g4_s15 ? (56u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v41)) > _g4_s16 ? (60u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v42)) > _g4_s17 ? (64u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v43)) > _g4_s18 ? (68u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v44)) > _g4_s19 ? (72u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v45)) > _g4_s20 ? (76u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v46)) > _g4_s21 ? (80u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v47)) > _g4_s22 ? (84u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v48)) > _g4_s23 ? (88u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v49)) > _g4_s24 ? (100u + sizeof(_g4_t_v49)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 100u);

  v49 = &self;
  v4 = a2;
  v5 = self;
  v31 = (int *)a3;
  v28 = a4;
  hkpConstraintDataUtils::getConstraintPivots(
    (hkpConstraintDataUtils::Self *)&v32,
    a2[3],
    (hkVector4f::Self *)&v33,
    (hkVector4f::Self *)&v37);
  if ( v32 != 0 )
    goto LABEL_8;
  v6 = v31[15];
  if ( v6 == 0 )
  {
    hkpConstraintChainInstance::addEntity((hkpConstraintChainInstance::Self *)v31, (hkpEntity::Self *)(v4[5]));
    v6 = v31[15];
  }
  v7 = (const hkpConstraintData::Self **)v31[14];
  v25 = v4[5];
  v8 = v7[v6 - 1];
  if ( v8 == v25 )
  {
    hkpBallSocketChainData::addConstraintInfoInBodySpace(v28, (const hkVector4f::Self *)&v33, (const hkVector4f::Self *)&v37);
    hkpConstraintChainInstance::addEntity((hkpConstraintChainInstance::Self *)v31, (hkpEntity::Self *)(v4[6]));
  }
  else
  {
    v9 = v4[6];
    if ( v8 == v9 )
    {
      hkpBallSocketChainData::addConstraintInfoInBodySpace(v28, (const hkVector4f::Self *)&v37, (const hkVector4f::Self *)&v33);
      hkpConstraintChainInstance::addEntity((hkpConstraintChainInstance::Self *)v31, (hkpEntity::Self *)(v4[5]));
    }
    else if ( v25 == *v7 )
    {
      v41 = v37;
      v42 = v38;
      v43 = v39;
      v44 = v40;
      v45 = v33;
      v46 = v34;
      v47 = v35;
      v48 = v36;
      hkArrayBase_hkpBallSocketChainData_C_f2ba7a::spliceInto(
        (hkpBallSocketChainData::Self *)((char *)v28 + 32),
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        0,
        0,
        (const hkpBallSocketChainData::ConstraintInfo::Self *)&v41,
        1);
      v17 = v4[6];
      v18 = v31[15];
      v19 = v31[16] & 0x3FFFFFFF;
      v20 = (hkpBallSocketChainData::Self *)(v18 + 1);
      if ( v18 + 1 > v19 )
      {
        v24 = 2 * v19;
        v27 = v31[15];
        if ( v24 < (int)(uintptr_t)(v20) )
          v24 = v31[15] + 1;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v32,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v31 + 14,
          v24,
          4);
        v18 = v27;
        v20 = (hkpBallSocketChainData::Self *)(v27 + 1);
      }
      v30 = v20;
      hkMemUtil::memMove((hkMemUtil::Self *)(v31[14] + 4), (char *)v31[14], 4 * v18);
      *(uint32_t *)v31[14] = (uint32_t)(uintptr_t)(v17);
      v31[15] = (int)(uintptr_t)(v30);
      if ( *((uint16_t *)v17 + 3) != 0 )
      {
        do
        {
          v22 = *((uint32_t *)v17 + 1);
          HIWORD(v21) = HIWORD(v22);
          LOWORD(v21) = 0;
        }
        while ( v22 != __sync_val_compare_and_swap(
                         (volatile int32_t *)v17 + 1,
                         v22,
                         v21 | (uint16_t)(v22 + 1)) );
      }
    }
    else
    {
      if ( v9 != *v7 )
      {
LABEL_8:
        *(uint32_t *)v5 = 1;
        return v5;
      }
      v41 = v33;
      v42 = v34;
      v43 = v35;
      v44 = v36;
      v45 = v37;
      v46 = v38;
      v47 = v39;
      v48 = v40;
      hkArrayBase_hkpBallSocketChainData_C_f2ba7a::spliceInto(
        (hkpBallSocketChainData::Self *)((char *)v28 + 32),
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        0,
        0,
        (const hkpBallSocketChainData::ConstraintInfo::Self *)&v41,
        1);
      v11 = v4[5];
      v12 = v31[15];
      v13 = v31[16] & 0x3FFFFFFF;
      v14 = (hkpBallSocketChainData::Self *)(v12 + 1);
      if ( v12 + 1 > v13 )
      {
        v23 = 2 * v13;
        v26 = v31[15];
        if ( v23 < (int)(uintptr_t)(v14) )
          v23 = v31[15] + 1;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v32,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v31 + 14,
          v23,
          4);
        v12 = v26;
        v14 = (hkpBallSocketChainData::Self *)(v26 + 1);
      }
      v29 = v14;
      hkMemUtil::memMove((hkMemUtil::Self *)(v31[14] + 4), (char *)v31[14], 4 * v12);
      *(uint32_t *)v31[14] = (uint32_t)(uintptr_t)(v11);
      v31[15] = (int)(uintptr_t)(v29);
      if ( *((uint16_t *)v11 + 3) != 0 )
      {
        do
        {
          v16 = *((uint32_t *)v11 + 1);
          HIWORD(v15) = HIWORD(v16);
          LOWORD(v15) = 0;
        }
        while ( v16 != __sync_val_compare_and_swap(
                         (volatile int32_t *)v11 + 1,
                         v16,
                         v15 | (uint16_t)(v16 + 1)) );
      }
    }
  }
  *(uint32_t *)v5 = 0;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainUtil::buildBallSocketChain  (binary VA: 0x185b160)
// Original: hkpConstraintChainUtil::buildBallSocketChain
// ----------------------------------------------------------------------------
int hkpConstraintChainUtil::buildBallSocketChain(int *a1)
{
  int *v1;
  int address;
  int v3;
  int v4;
  hkpEntity::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int32_t v12; // kr00_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int32_t v16; // kr04_4
  int32_t v17;
  int32_t v18; // ett
  int v19;
  int32_t v20; // kr08_4
  int32_t v21;
  int32_t v22; // ett
  int v23;
  int32_t v24; // kr0C_4
  int32_t v25;
  int32_t v26; // ett
  int v27;
  int32_t v28; // kr10_4
  int32_t v29;
  int32_t v30; // ett
  hkpBallSocketChainData::Self *v31;
  int *v32;
  int v33;
  uint32_t *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39[3];
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  uint32_t v48[134];
  int savedregs;

  v48[130] = (uint32_t)(uintptr_t)(&a1);
  v1 = a1;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v31 = (hkpBallSocketChainData::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                    *(uint32_t *)(*(uint32_t *)address + 44),
                                    64);
  hkpBallSocketChainData::Construct(v31);
  v3 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         76);
  hkpConstraintChainInstance::Construct((hkpConstraintChainInstance::Self *)v3, (hkpConstraintChainData::Self *)(v31));
  v4 = *(uint32_t *)*v1;
  v5 = *(hkpEntity::Self **)(v4 + 20);
  if ( v1[1] > 1 )
  {
    v6 = *(uint32_t *)(*v1 + 4);
    if ( v5 == *(hkpEntity::Self **)(v6 + 20) || v5 == *(hkpEntity::Self **)(v6 + 24) )
      v5 = *(hkpEntity::Self **)(v4 + 24);
  }
  hkpConstraintChainInstance::addEntity((hkpConstraintChainInstance::Self *)v3, v5);
  if ( v1[1] <= 0 )
  {
LABEL_13:
    result = v3;
    if ( *((uint16_t *)v31 + 3) != 0 )
    {
      do
      {
        v12 = *((uint32_t *)v31 + 1);
        HIWORD(v11) = HIWORD(v12);
        LOWORD(v11) = 0;
        v13 = v11 | (uint16_t)(v12 - 1);
        v14 = v12;
      }
      while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)v31 + 1, v14, v13) );
      result = v3;
      if ( (uint16_t)v13 == 0 )
      {
        G4_VCALL<void>(v31, 16);
        return v3;
      }
    }
  }
  else
  {
    v37 = 0;
    while ( 1 )
    {
      hkpConstraintDataUtils::getConstraintPivots(
        (hkpConstraintDataUtils::Self *)&v38,
        *(const hkpConstraintData::Self **)(*(uint32_t *)(*v1 + 4 * v37) + 12),
        (hkVector4f::Self *)&v40,
        (hkVector4f::Self *)&v44);
      if ( v38 == 1 )
        break;
      v35 = *v1 + 4 * v37;
      v34 = (uint32_t *)(*(uint32_t *)(v3 + 56) + 4 * *(uint32_t *)(v3 + 60) - 4);
      if ( *(uint32_t *)(*(uint32_t *)v35 + 20) != *v34 )
      {
        v32 = v1;
        v48[2] = v42;
        v33 = v42;
        v7 = v40;
        v48[1] = v41;
        v40 = v44;
        v8 = v45;
        v45 = v41;
        v41 = v8;
        v48[0] = v7;
        v9 = v43;
        v42 = v46;
        v44 = v7;
        v43 = v47;
        v48[3] = v9;
        v46 = v33;
        v47 = v9;
        v1 = v32;
        if ( *(uint32_t *)(*(uint32_t *)v35 + 24) != *v34 )
        {
          hkErrStream::Construct((hkErrStream::Self *)v39, (hkString::Self *)v48, 512);
          hkOstream::opShl(
            (int)(uintptr_t)(v39),
            (hkString::Self *)"Constraints are not ordered properly ! Two consecutive constraint share no common hkpEntity.");
          hkError::messageWarning(
            (hkError::Self *)0xABBAD88D,
            (int)(uintptr_t)(v48),
            "Constraint/Chain/hkpConstraintChainUtil.cpp",
            (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_114)->st_value,
            savedregs);
          hkErrStream::Destroy((hkErrStream::Self *)v39);
          if ( *((uint16_t *)v31 + 3) != 0 )
          {
            do
            {
              v24 = *((uint32_t *)v31 + 1);
              HIWORD(v23) = HIWORD(v24);
              LOWORD(v23) = 0;
              v25 = v23 | (uint16_t)(v24 - 1);
              v26 = v24;
            }
            while ( v26 != __sync_val_compare_and_swap((volatile int32_t *)v31 + 1, v26, v25) );
            if ( (uint16_t)v25 == 0 )
              G4_VCALL<void>(v31, 16);
          }
          if ( *(uint16_t *)(v3 + 6) != 0 )
          {
            do
            {
              v28 = *(uint32_t *)(v3 + 4);
              HIWORD(v27) = HIWORD(v28);
              LOWORD(v27) = 0;
              v29 = v27 | (uint16_t)(v28 - 1);
              v30 = v28;
            }
            while ( v30 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v30, v29) );
            if ( (uint16_t)v29 == 0 )
              goto LABEL_33;
          }
          return 0;
        }
      }
      hkpBallSocketChainData::addConstraintInfoInBodySpace(v31, (const hkVector4f::Self *)&v40, (const hkVector4f::Self *)&v44);
      v36 = *(uint32_t *)(*v1 + 4 * v37);
      if ( *(uint32_t *)(v36 + 20) == *(uint32_t *)(*(uint32_t *)(v3 + 56) + 4 * *(uint32_t *)(v3 + 60) - 4) )
        hkpConstraintChainInstance::addEntity((hkpConstraintChainInstance::Self *)v3, *(hkpEntity::Self **)(v36 + 24));
      else
        hkpConstraintChainInstance::addEntity((hkpConstraintChainInstance::Self *)v3, *(hkpEntity::Self **)(v36 + 20));
      if ( v1[1] <= ++v37 )
        goto LABEL_13;
    }
    hkErrStream::Construct((hkErrStream::Self *)v39, (hkString::Self *)v48, 512);
    hkOstream::opShl((int)(uintptr_t)(v39), (hkString::Self *)"Not supported types of constraints used to build a chain!");
    hkError::messageWarning(
      (hkError::Self *)0xABBAD88D,
      (int)(uintptr_t)(v48),
      "Constraint/Chain/hkpConstraintChainUtil.cpp",
      &dword_10C[1],
      savedregs);
    hkErrStream::Destroy((hkErrStream::Self *)v39);
    if ( *((uint16_t *)v31 + 3) != 0 )
    {
      do
      {
        v16 = *((uint32_t *)v31 + 1);
        HIWORD(v15) = HIWORD(v16);
        LOWORD(v15) = 0;
        v17 = v15 | (uint16_t)(v16 - 1);
        v18 = v16;
      }
      while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)v31 + 1, v18, v17) );
      if ( (uint16_t)v17 == 0 )
        G4_VCALL<void>(v31, 16);
    }
    if ( *(uint16_t *)(v3 + 6) == 0 )
      return 0;
    do
    {
      v20 = *(uint32_t *)(v3 + 4);
      HIWORD(v19) = HIWORD(v20);
      LOWORD(v19) = 0;
      v21 = v19 | (uint16_t)(v20 - 1);
      v22 = v20;
    }
    while ( v22 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v22, v21) );
    if ( (uint16_t)v21 != 0 )
      return 0;
LABEL_33:
    G4_VCALL<void>(v3, 16);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintChainUtil::findConstraintLinkBetweenEntities  (binary VA: 0x185bfe0)
// Original: hkpConstraintChainUtil::findConstraintLinkBetweenEntities
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintChainUtil::findConstraintLinkBetweenEntities(uint32_t *a1, uint32_t *a2, unsigned int a3, unsigned int a4, int *a5, int *a6)
{
  int v6;
  uint32_t *v7;
  signed int v8;
  int v9;
  signed int Key;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  signed int v17;
  signed int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  int v26;
  int v27;
  unsigned int v28;
  int i;
  int *v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  uint32_t *v37;
  int v38;
  int v39;
  uint32_t *v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  bool v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int *v57;
  int v58;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef int *_g4_t_v63;
  typedef int *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef unsigned int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef unsigned int _g4_t_v75;
  typedef unsigned int _g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef unsigned int _g4_t_v80;
  typedef unsigned int _g4_t_v81;
  typedef unsigned int _g4_t_v82;
  typedef unsigned int _g4_t_v83;
  typedef char _g4_t_v84[4];
  typedef uint32_t _g4_t_v85[4];
  typedef uint32_t _g4_t_v86[2];
  typedef unsigned int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef unsigned int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef uint32_t _g4_t_v92[2];
  typedef int _g4_t_v93;
  typedef char *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef char _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef char _g4_t_v105;
  typedef char *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef char _g4_t_v109;
  typedef char _g4_t_v110;
  typedef int _g4_t_v111;
  typedef signed int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef uint32_t _g4_t_v114[135];
  enum : size_t {
    _g4_s0 = 1344u,
    _g4_s1 = (4u + sizeof(_g4_t_v60)) > _g4_s0 ? (4u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v61)) > _g4_s1 ? (4u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v62)) > _g4_s2 ? (16u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v63)) > _g4_s3 ? (20u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v64)) > _g4_s4 ? (24u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v65)) > _g4_s5 ? (36u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v66)) > _g4_s6 ? (44u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v67)) > _g4_s7 ? (52u + sizeof(_g4_t_v67)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v68)) > _g4_s8 ? (60u + sizeof(_g4_t_v68)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v69)) > _g4_s9 ? (68u + sizeof(_g4_t_v69)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v70)) > _g4_s10 ? (68u + sizeof(_g4_t_v70)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v71)) > _g4_s11 ? (68u + sizeof(_g4_t_v71)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v72)) > _g4_s12 ? (68u + sizeof(_g4_t_v72)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v73)) > _g4_s13 ? (72u + sizeof(_g4_t_v73)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v74)) > _g4_s14 ? (72u + sizeof(_g4_t_v74)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v75)) > _g4_s15 ? (76u + sizeof(_g4_t_v75)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v76)) > _g4_s16 ? (76u + sizeof(_g4_t_v76)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v77)) > _g4_s17 ? (80u + sizeof(_g4_t_v77)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v78)) > _g4_s18 ? (80u + sizeof(_g4_t_v78)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v79)) > _g4_s19 ? (80u + sizeof(_g4_t_v79)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v80)) > _g4_s20 ? (80u + sizeof(_g4_t_v80)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v81)) > _g4_s21 ? (80u + sizeof(_g4_t_v81)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v82)) > _g4_s22 ? (80u + sizeof(_g4_t_v82)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v83)) > _g4_s23 ? (80u + sizeof(_g4_t_v83)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v84)) > _g4_s24 ? (84u + sizeof(_g4_t_v84)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v85)) > _g4_s25 ? (88u + sizeof(_g4_t_v85)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v86)) > _g4_s26 ? (104u + sizeof(_g4_t_v86)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v87)) > _g4_s27 ? (112u + sizeof(_g4_t_v87)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v88)) > _g4_s28 ? (116u + sizeof(_g4_t_v88)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v89)) > _g4_s29 ? (120u + sizeof(_g4_t_v89)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v90)) > _g4_s30 ? (124u + sizeof(_g4_t_v90)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v91)) > _g4_s31 ? (128u + sizeof(_g4_t_v91)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v92)) > _g4_s32 ? (136u + sizeof(_g4_t_v92)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v93)) > _g4_s33 ? (144u + sizeof(_g4_t_v93)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v94)) > _g4_s34 ? (152u + sizeof(_g4_t_v94)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v95)) > _g4_s35 ? (156u + sizeof(_g4_t_v95)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v96)) > _g4_s36 ? (160u + sizeof(_g4_t_v96)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v97)) > _g4_s37 ? (164u + sizeof(_g4_t_v97)) : _g4_s37,
    _g4_s39 = (296u + sizeof(_g4_t_v98)) > _g4_s38 ? (296u + sizeof(_g4_t_v98)) : _g4_s38,
    _g4_s40 = (300u + sizeof(_g4_t_v99)) > _g4_s39 ? (300u + sizeof(_g4_t_v99)) : _g4_s39,
    _g4_s41 = (304u + sizeof(_g4_t_v100)) > _g4_s40 ? (304u + sizeof(_g4_t_v100)) : _g4_s40,
    _g4_s42 = (308u + sizeof(_g4_t_v101)) > _g4_s41 ? (308u + sizeof(_g4_t_v101)) : _g4_s41,
    _g4_s43 = (440u + sizeof(_g4_t_v102)) > _g4_s42 ? (440u + sizeof(_g4_t_v102)) : _g4_s42,
    _g4_s44 = (444u + sizeof(_g4_t_v103)) > _g4_s43 ? (444u + sizeof(_g4_t_v103)) : _g4_s43,
    _g4_s45 = (448u + sizeof(_g4_t_v104)) > _g4_s44 ? (448u + sizeof(_g4_t_v104)) : _g4_s44,
    _g4_s46 = (452u + sizeof(_g4_t_v105)) > _g4_s45 ? (452u + sizeof(_g4_t_v105)) : _g4_s45,
    _g4_s47 = (580u + sizeof(_g4_t_v106)) > _g4_s46 ? (580u + sizeof(_g4_t_v106)) : _g4_s46,
    _g4_s48 = (584u + sizeof(_g4_t_v107)) > _g4_s47 ? (584u + sizeof(_g4_t_v107)) : _g4_s47,
    _g4_s49 = (588u + sizeof(_g4_t_v108)) > _g4_s48 ? (588u + sizeof(_g4_t_v108)) : _g4_s48,
    _g4_s50 = (592u + sizeof(_g4_t_v109)) > _g4_s49 ? (592u + sizeof(_g4_t_v109)) : _g4_s49,
    _g4_s51 = (720u + sizeof(_g4_t_v110)) > _g4_s50 ? (720u + sizeof(_g4_t_v110)) : _g4_s50,
    _g4_s52 = (728u + sizeof(_g4_t_v111)) > _g4_s51 ? (728u + sizeof(_g4_t_v111)) : _g4_s51,
    _g4_s53 = (732u + sizeof(_g4_t_v112)) > _g4_s52 ? (732u + sizeof(_g4_t_v112)) : _g4_s52,
    _g4_s54 = (736u + sizeof(_g4_t_v113)) > _g4_s53 ? (736u + sizeof(_g4_t_v113)) : _g4_s53,
    _g4_s55 = (740u + sizeof(_g4_t_v114)) > _g4_s54 ? (740u + sizeof(_g4_t_v114)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 68u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 68u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 68u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 72u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 76u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 76u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 80u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 80u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 80u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 80u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 80u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 80u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 84u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 88u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 104u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 112u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 116u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 120u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 124u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 128u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 136u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 144u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 152u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 156u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 160u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 164u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 296u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 300u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 304u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 308u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 440u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 444u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 448u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 452u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 580u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 584u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 588u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 592u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 720u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 728u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 732u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 736u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 740u);

  v114[131] = (uint32_t)(uintptr_t)(&a1);
  v62 = a1;
  v66 = a2;
  v77 = a3;
  v75 = a4;
  v63 = a5;
  v64 = a6;
  if ( a3 == a4 )
  {
    hkErrStream::Construct((hkErrStream::Self *)&v102, (hkString::Self *)&v111, 512);
    hkOstream::opShl((int)(uintptr_t)(&v102), (hkString::Self *)"Specify two different end bodies.");
    hkError::messageWarning(
      (hkError::Self *)0xABBA3BB3,
      (int)(uintptr_t)(&v111),
      "Constraint/Chain/hkpConstraintChainUtil.cpp",
      &stru_134[3]);
    hkErrStream::Destroy((hkErrStream::Self *)&v102);
    *v62 = 1;
    return v62;
  }
  v89 = 0;
  v90 = 0;
  v91 = 0x80000000;
  v92[0] = 0;
  v92[1] = 0;
  v93 = -1;
  if ( (int)a2[1] <= 0 )
  {
    v111 = (int)(uintptr_t)(v114);
    v113 = -2147483616;
    v112 = 0;
    goto LABEL_19;
  }
  v6 = 0;
  v7 = a2;
  do
  {
    while ( 1 )
    {
      v9 = *(uint32_t *)(*v7 + 4 * v6);
      Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
              *(uint32_t *)(v9 + 20));
      if ( Key > v93 )
      {
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          *(uint32_t *)(v9 + 20),
          v90);
        v11 = v90;
        v12 = *(uint32_t *)(v9 + 20);
        if ( v90 == (v91 & 0x3FFFFFFF) )
        {
          v72 = *(uint32_t *)(v9 + 20);
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v89,
            4,
            v60);
          v11 = v90;
          v12 = v72;
        }
        *(uint32_t *)(v89 + 4 * v11) = v12;
        ++v90;
      }
      v8 = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
             (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
             *(uint32_t *)(v9 + 24));
      if ( v8 > v93 )
        break;
      v7 = v66;
      if ( v66[1] <= ++v6 )
        goto LABEL_13;
    }
    hkMapBase_unsigned_long_unsigned_l_393416::insert(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      *(uint32_t *)(v9 + 24),
      v90);
    v13 = v90;
    v14 = *(uint32_t *)(v9 + 24);
    if ( v90 == (v91 & 0x3FFFFFFF) )
    {
      v71 = *(uint32_t *)(v9 + 24);
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v89, 4, v60);
      v13 = v90;
      v14 = v71;
    }
    ++v6;
    *(uint32_t *)(v89 + 4 * v13) = v14;
    v7 = v66;
    ++v90;
  }
  while ( v66[1] > v6 );
LABEL_13:
  v15 = v90;
  v111 = (int)(uintptr_t)(v114);
  v112 = 0;
  v113 = -2147483616;
  if ( (int)v90 <= 32 )
  {
    v112 = v90;
    if ( (int)v90 <= 0 )
      goto LABEL_19;
  }
  else
  {
    v16 = 64;
    if ( (int)v90 > 63 )
      v16 = v90;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v84, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v111, v16, 16);
    v112 = v15;
  }
  v17 = 0;
  do
  {
    v18 = v17++;
    *(uint32_t *)(v111 + 16 * v18) = -1;
  }
  while ( v112 > v17 );
LABEL_19:
  v102 = (int)(uintptr_t)(&v105);
  v106 = &v109;
  v103 = 0;
  v104 = -2147483616;
  v107 = 0;
  v108 = -2147483616;
  v85[0] = -1;
  v85[1] = -1;
  v19 = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
          v77);
  v20 = *(uint32_t *)(v92[0] + 8 * v19 + 4);
  v21 = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
          v75);
  v22 = *(uint32_t *)(v92[0] + 8 * v21 + 4);
  *(uint32_t *)(v111 + 16 * v20) = 0;
  v23 = v111;
  v24 = (uint32_t *)(16 * v20 + v111);
  v24[1] = -1;
  v24[2] = 0;
  v24[3] = 0;
  *(uint32_t *)(v23 + 16 * v22) = 1;
  v25 = (uint32_t *)(v111 + 16 * v22);
  v25[1] = -1;
  v25[2] = 0;
  v25[3] = 0;
  v26 = v103;
  if ( v103 == (v104 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v102, 4, v60);
    v26 = v103;
  }
  *(uint32_t *)(v102 + 4 * v26) = v20;
  v27 = v107;
  ++v103;
  if ( v107 == (v108 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v106, 4, v60);
    v27 = v107;
  }
  v76 = 0;
  v28 = 0;
  *(uint32_t *)&v106[4 * v27] = v22;
  ++v107;
  v94 = &v97;
  v95 = 0;
  v96 = -2147483616;
  v98 = &v101;
  v99 = 0;
  v100 = -2147483616;
  for ( i = -1; ; i = v85[v73] )
  {
    v30 = &v102 + 35 * v28;
    v31 = i + 1;
    v73 = 1 - v28;
    v85[v28] = v31;
    if ( v31 >= v30[1] )
    {
      *v62 = 1;
      goto LABEL_51;
    }
    v68 = 4 * v31;
    v65 = *(uint32_t *)(*v30 + 4 * v31);
    v32 = *(uint32_t *)(v89 + 4 * v65);
    v95 = 0;
    v99 = 0;
    hkpConstraintChainUtil::getAdjointEntities(v66, v32, (hkMemoryAllocator::Self *)&v94, (uint32_t *)(&v98));
    if ( v95 > 0 )
      break;
LABEL_33:
    v76 = v73;
    v28 = v73;
  }
  v33 = 0;
  while ( 1 )
  {
    v67 = v33;
    v69 = 4 * v33;
    v34 = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
            *(uint32_t *)&v94[4 * v33]);
    v35 = v67;
    v36 = v111;
    v78 = *(uint32_t *)(v92[0] + 8 * v34 + 4);
    v37 = (uint32_t *)(v111 + 16 * v78);
    if ( *v37 != v76 )
      break;
LABEL_32:
    v33 = v35 + 1;
    if ( v95 <= v33 )
      goto LABEL_33;
  }
  if ( *v37 != v73 )
  {
    v38 = v30[1];
    if ( v38 == (v30[2] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v30, 4, v61);
      v38 = v30[1];
      v35 = v67;
    }
    *(uint32_t *)(*v30 + 4 * v38) = v78;
    v39 = v111;
    ++v30[1];
    *(uint32_t *)(v39 + 16 * v78) = v76;
    v40 = (uint32_t *)(v111 + 16 * v78);
    v79 = v111;
    v40[1] = *(uint32_t *)(*v30 + v68);
    v40[2] = *(uint32_t *)&v98[v69];
    v40[3] = *(uint32_t *)(v79 + 16 * v65 + 12) + 1;
    goto LABEL_32;
  }
  v86[v76] = v65;
  *(&v87 + v76) = *(uint32_t *)(v36 + 16 * v65 + 12) + 1;
  *(&v87 + v73) = v37[3] + 1;
  v86[v73] = v78;
  v41 = v87;
  v42 = v88;
  v74 = *(uint32_t *)&v98[v69];
  v43 = v88 + v87;
  v63[1] = 0;
  v44 = v63[2] & 0x3FFFFFFF;
  if ( v43 > v44 )
  {
    v45 = 2 * v44;
    v80 = v41;
    if ( v45 < v43 )
      v45 = v43;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v84, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v63, v45, 4);
    v41 = v80;
  }
  v63[1] = v43;
  v64[1] = 0;
  v46 = v64[2] & 0x3FFFFFFF;
  if ( v43 > v46 )
  {
    v47 = 2 * v46;
    v81 = v41;
    if ( v47 < v43 )
      v47 = v43;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v84, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v64, v47, 4);
    v41 = v81;
  }
  v48 = v86[0];
  v64[1] = v43;
  v70 = v41 - 1;
  if ( (int)(v41 - 1) > 0 )
  {
    v82 = v41 - 1;
    v49 = 4 * (v41 - 1);
    do
    {
      v50 = *(uint32_t *)(v89 + 4 * v48);
      v51 = 16 * v48;
      *(uint32_t *)(*v63 + v49) = v50;
      *(uint32_t *)(*v64 + v49 - 4) = *(uint32_t *)(v111 + v51 + 8);
      v49 -= 4;
      v52 = v82-- == 1;
      v48 = *(uint32_t *)(v111 + v51 + 4);
    }
    while ( !v52 );
  }
  *(uint32_t *)*v63 = *(uint32_t *)(v89 + 4 * v48);
  v53 = v86[1];
  *(uint32_t *)(*v64 + 4 * v70) = v74;
  v54 = 4 * v70 + 4;
  if ( v42 > 0 )
  {
    v83 = 0;
    do
    {
      ++v83;
      v55 = *(uint32_t *)(v89 + 4 * v53);
      v56 = 16 * v53;
      *(uint32_t *)(*v63 + v54) = v55;
      *(uint32_t *)(*v64 + v54) = *(uint32_t *)(v111 + v56 + 8);
      v54 += 4;
      v53 = *(uint32_t *)(v111 + v56 + 4);
    }
    while ( v83 != v42 );
  }
  --v64[1];
  *v62 = 0;
LABEL_51:
  v99 = 0;
  if ( v100 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v98,
      4 * v100);
  v98 = nullptr;
  v100 = 0x80000000;
  v95 = 0;
  if ( v96 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v94,
      4 * v96);
  v94 = nullptr;
  v96 = 0x80000000;
  v57 = (int *)&v110;
  do
  {
    v57 -= 35;
    v58 = v57[2];
    v57[1] = 0;
    if ( v58 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *v57,
        4 * v58);
    *v57 = 0;
    v57[2] = 0x80000000;
  }
  while ( v57 != &v102 );
  v112 = 0;
  if ( v113 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v111,
      16 * v113);
  v111 = 0;
  v113 = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v92,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v90 = 0;
  if ( v91 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v89,
      4 * v91);
  return v62;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::getSizeOfRuntime  (binary VA: 0x1aedf50)
// Original: hkpConstraintDataUtils::getSizeOfRuntime
// ----------------------------------------------------------------------------
int hkpConstraintDataUtils::getSizeOfRuntime(hkpConstraintDataUtils::Self *self)
{
  unsigned int v1;
  int v2;

  v1 = G4_VCALL<int>(self, 20);
  v2 = 0;
  if ( v1 <= 0x18 )
    return dword_1D37BE0[v1];
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::getLargestLinearImpulse  (binary VA: 0x1aedf90)
// Original: hkpConstraintDataUtils::getLargestLinearImpulse
// ----------------------------------------------------------------------------
int hkpConstraintDataUtils::getLargestLinearImpulse(int a1, int a2, float *a3, float *a4)
{
  int result;
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm7_4
  float v16;
  float v17;

  result = a1;
  *(g4_int128_t *)a1 = 0;
  if ( a3 != nullptr )
  {
    switch ( a2 )
    {
      case 0:
      case 24:
        v5 = a4[3];
        v17 = a3[4];
        v6 = a3[2];
        v7 = *a3 * *a4;
        v8 = *a3;
        v16 = *a4;
        v9 = (float)(v5 * v5) - 0.5;
        v10 = a4[1];
        goto LABEL_4;
      case 1:
        v17 = a3[8];
        v14 = a3[6];
        v15 = a3[4];
        goto LABEL_7;
      case 2:
        v17 = a3[18];
        v14 = a3[16];
        v15 = a3[14];
        goto LABEL_7;
      case 7:
        v17 = a3[34];
        v14 = a3[32];
        v15 = a3[30];
        goto LABEL_7;
      case 23:
        v17 = a3[4];
        v14 = a3[2];
        v15 = *a3;
LABEL_7:
        v5 = a4[3];
        v8 = v15;
        v16 = *a4;
        v7 = v15 * *a4;
        v6 = v14;
        v9 = (float)(v5 * v5) - 0.5;
        v10 = a4[1];
LABEL_4:
        v11 = a4[2];
        v12 = (float)(v7 + (float)(v6 * v10)) + (float)(v17 * v11);
        *(float *)a1 = (float)((float)((float)(v8 * v9) + (float)(v16 * v12))
                             + (float)((float)((float)(v17 * v10) - (float)(v6 * v11)) * v5))
                     + (float)((float)((float)(v8 * v9) + (float)(v16 * v12))
                             + (float)((float)((float)(v17 * v10) - (float)(v6 * v11)) * v5));
        *(float *)(a1 + 4) = (float)((float)((float)(v6 * v9) + (float)(v10 * v12))
                                   + (float)((float)((float)(v8 * v11) - (float)(v16 * v17)) * v5))
                           + (float)((float)((float)(v6 * v9) + (float)(v10 * v12))
                                   + (float)((float)((float)(v8 * v11) - (float)(v16 * v17)) * v5));
        v13 = (float)((float)(v17 * v9) + (float)(v11 * v12))
            + (float)((float)((float)(v6 * v16) - (float)(v8 * v10)) * v5);
        *(float *)(a1 + 8) = v13 + v13;
        *(float *)(a1 + 12) = (float)((float)((float)(v9 * 0.0) + (float)(v12 * v5)) + (float)(v5 * 0.0))
                            + (float)((float)((float)(v9 * 0.0) + (float)(v12 * v5)) + (float)(v5 * 0.0));
        break;
      default:
        return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::constraintSupportsPivotGetSet  (binary VA: 0x1aee1e0)
// Original: hkpConstraintDataUtils::constraintSupportsPivotGetSet
// ----------------------------------------------------------------------------
hkpConstraintDataUtils::Self * hkpConstraintDataUtils::constraintSupportsPivotGetSet(hkpConstraintDataUtils::Self *self, const hkpConstraintData::Self *a2)
{
  unsigned int v2;
  bool v3;

  v2 = G4_VCALL<int>(a2, 20);
  v3 = false;
  if ( v2 <= 0x18 )
    v3 = ((1 << v2) & 0x180F3C7) != 0;
  *(uint8_t *)self = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::getPivot  (binary VA: 0x1aee220)
// Original: hkpConstraintDataUtils::getPivot
// ----------------------------------------------------------------------------
float * hkpConstraintDataUtils::getPivot(hkpConstraintDataUtils::Self *self, const hkpConstraintData::Self *a2)
{
  float *result;

  while ( 2 )
  {
    switch ( G4_VCALL<int>(self, 20) )
    {
      case 0:
      case 8:
      case 15:
        result = (float *)((char *)self + 16 * (uint32_t)(uintptr_t)(a2) + 32);
        break;
      case 1:
      case 2:
      case 6:
      case 7:
      case 9:
      case 14:
      case 23:
      case 24:
        result = (float *)((char *)self + 64 * (uint32_t)(uintptr_t)(a2) + 80);
        break;
      case 12:
      case 13:
        self = (hkpConstraintDataUtils::Self *)G4_VCALL<int>(self, 100);
        continue;
      default:
        result = (float *)&flt_1D12E20;
        break;
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::getPivotA  (binary VA: 0x1aee2a0)
// Original: hkpConstraintDataUtils::getPivotA
// ----------------------------------------------------------------------------
float * hkpConstraintDataUtils::getPivotA(hkpConstraintDataUtils::Self *self)
{
  float *result;

  while ( 2 )
  {
    switch ( G4_VCALL<int>(self, 20) )
    {
      case 0:
      case 8:
      case 15:
        result = (float *)((char *)self + 32);
        break;
      case 1:
      case 2:
      case 6:
      case 7:
      case 9:
      case 14:
      case 23:
      case 24:
        result = (float *)((char *)self + 80);
        break;
      case 12:
      case 13:
        self = (hkpConstraintDataUtils::Self *)G4_VCALL<int>(self, 100);
        continue;
      default:
        result = (float *)&flt_1D12E20;
        break;
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::getPivotB  (binary VA: 0x1aee310)
// Original: hkpConstraintDataUtils::getPivotB
// ----------------------------------------------------------------------------
float * hkpConstraintDataUtils::getPivotB(hkpConstraintDataUtils::Self *self)
{
  float *result;

  while ( 2 )
  {
    switch ( G4_VCALL<int>(self, 20) )
    {
      case 0:
      case 8:
      case 15:
        result = (float *)((char *)self + 48);
        break;
      case 1:
      case 2:
      case 6:
      case 7:
      case 9:
      case 14:
      case 23:
      case 24:
        result = (float *)((char *)self + 144);
        break;
      case 12:
      case 13:
        self = (hkpConstraintDataUtils::Self *)G4_VCALL<int>(self, 100);
        continue;
      default:
        result = (float *)&flt_1D12E20;
        break;
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::setPivot  (binary VA: 0x1aee380)
// Original: hkpConstraintDataUtils::setPivot
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintDataUtils::setPivot(hkpConstraintDataUtils::Self *self, hkpConstraintData::Self *a2, const hkVector4f::Self *a3)
{
  int v4; // kr04_4
  uint32_t *result;
  uint32_t *v6;

  while ( 2 )
  {
    v4 = G4_VCALL<int>(self, 20);
    result = (uint32_t *)((int *)((char *)dword_20B9FF4 + (uint32_t)jpt_1AEE3B0[v4]));
    switch ( v4 )
    {
      case 0:
      case 8:
      case 15:
        v6 = (uint32_t *)((char *)self + 16 * (uint32_t)(uintptr_t)(a3));
        v6[8] = *(uint32_t *)a2;
        v6[9] = *((uint32_t *)a2 + 1);
        v6[10] = *((uint32_t *)a2 + 2);
        v6[11] = *((uint32_t *)a2 + 3);
        result = (uint32_t *)(16 * (uint32_t)(uintptr_t)(a3));
        break;
      case 1:
      case 2:
      case 6:
      case 7:
      case 9:
      case 14:
      case 23:
      case 24:
        result = (uint32_t *)((char *)self + 64 * (uint32_t)(uintptr_t)(a3) + 32);
        result[12] = *(uint32_t *)a2;
        result[13] = *((uint32_t *)a2 + 1);
        result[14] = *((uint32_t *)a2 + 2);
        result[15] = *((uint32_t *)a2 + 3);
        break;
      case 3:
      case 4:
      case 5:
      case 10:
      case 11:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
        return result;
      case 12:
      case 13:
        self = (hkpConstraintDataUtils::Self *)G4_VCALL<int>(self, 104);
        continue;
      default:
        result = (uint32_t *)v4;
        break;
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::setPivotTransform  (binary VA: 0x1aee430)
// Original: hkpConstraintDataUtils::setPivotTransform
// ----------------------------------------------------------------------------
uint32_t * hkpConstraintDataUtils::setPivotTransform(hkpConstraintDataUtils::Self *self, hkpConstraintData::Self *a2, const hkTransformf::Self *a3)
{
  int v4; // kr04_4
  uint32_t *result;
  uint32_t *v6;

  while ( 2 )
  {
    v4 = G4_VCALL<int>(self, 20);
    result = (uint32_t *)((int *)((char *)dword_20B9FF4 + (uint32_t)jpt_1AEE460[v4]));
    switch ( v4 )
    {
      case 0:
      case 8:
      case 15:
        v6 = (uint32_t *)((char *)self + 16 * (uint32_t)(uintptr_t)(a3));
        v6[8] = *((uint32_t *)a2 + 12);
        v6[9] = *((uint32_t *)a2 + 13);
        v6[10] = *((uint32_t *)a2 + 14);
        v6[11] = *((uint32_t *)a2 + 15);
        result = (uint32_t *)(16 * (uint32_t)(uintptr_t)(a3));
        break;
      case 1:
      case 2:
      case 6:
      case 7:
      case 9:
      case 14:
      case 23:
      case 24:
        result = (uint32_t *)((char *)self + 64 * (uint32_t)(uintptr_t)(a3) + 32);
        *result = *(uint32_t *)a2;
        result[1] = *((uint32_t *)a2 + 1);
        result[2] = *((uint32_t *)a2 + 2);
        result[3] = *((uint32_t *)a2 + 3);
        result[4] = *((uint32_t *)a2 + 4);
        result[5] = *((uint32_t *)a2 + 5);
        result[6] = *((uint32_t *)a2 + 6);
        result[7] = *((uint32_t *)a2 + 7);
        result[8] = *((uint32_t *)a2 + 8);
        result[9] = *((uint32_t *)a2 + 9);
        result[10] = *((uint32_t *)a2 + 10);
        result[11] = *((uint32_t *)a2 + 11);
        result[12] = *((uint32_t *)a2 + 12);
        result[13] = *((uint32_t *)a2 + 13);
        result[14] = *((uint32_t *)a2 + 14);
        result[15] = *((uint32_t *)a2 + 15);
        break;
      case 3:
      case 4:
      case 5:
      case 10:
      case 11:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
        return result;
      case 12:
      case 13:
        self = (hkpConstraintDataUtils::Self *)G4_VCALL<int>(self, 104);
        continue;
      default:
        result = (uint32_t *)v4;
        break;
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::getPivotTransform  (binary VA: 0x1aee530)
// Original: hkpConstraintDataUtils::getPivotTransform
// ----------------------------------------------------------------------------
char * hkpConstraintDataUtils::getPivotTransform(hkpConstraintDataUtils::Self *self, const hkpConstraintData::Self *a2, uint32_t *a3)
{
  int v4; // kr04_4
  char *result;

  while ( 2 )
  {
    *a3 = 1065353216;
    a3[1] = 0;
    a3[2] = 0;
    a3[3] = 0;
    a3[4] = 0;
    a3[5] = 1065353216;
    a3[6] = 0;
    a3[7] = 0;
    a3[8] = 0;
    a3[9] = 0;
    a3[10] = 1065353216;
    a3[11] = 0;
    a3[12] = 0;
    a3[13] = 0;
    a3[14] = 0;
    a3[15] = 0;
    v4 = G4_VCALL<int>(self, 20);
    result = (char *)dword_20B9FF4 + (uint32_t)jpt_1AEE5F3[v4];
    switch ( v4 )
    {
      case 0:
      case 8:
      case 15:
        a3[12] = *((uint32_t *)self + 4 * (uint32_t)(uintptr_t)(a2) + 8);
        a3[13] = *((uint32_t *)self + 4 * (uint32_t)(uintptr_t)(a2) + 9);
        a3[14] = *((uint32_t *)self + 4 * (uint32_t)(uintptr_t)(a2) + 10);
        result = *((char **)self + 4 * (uint32_t)(uintptr_t)(a2) + 11);
        a3[15] = (uint32_t)(uintptr_t)(result);
        break;
      case 1:
      case 2:
      case 6:
      case 7:
      case 9:
      case 14:
      case 23:
      case 24:
        *a3 = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 8);
        a3[1] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 9);
        a3[2] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 10);
        a3[3] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 11);
        a3[4] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 12);
        a3[5] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 13);
        a3[6] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 14);
        a3[7] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 15);
        a3[8] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 16);
        a3[9] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 17);
        a3[10] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 18);
        a3[11] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 19);
        a3[12] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 20);
        a3[13] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 21);
        a3[14] = *((uint32_t *)self + 16 * (uint32_t)(uintptr_t)(a2) + 22);
        result = *((char **)self + 16 * (uint32_t)(uintptr_t)(a2) + 23);
        a3[15] = (uint32_t)(uintptr_t)(result);
        break;
      case 3:
      case 4:
      case 5:
      case 10:
      case 11:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
        return result;
      case 12:
      case 13:
        self = (hkpConstraintDataUtils::Self *)G4_VCALL<int>(self, 100);
        continue;
      default:
        result = (char *)v4;
        break;
    }
    break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::cloneIfCanHaveMotors  (binary VA: 0x1aee6c0)
// Original: hkpConstraintDataUtils::cloneIfCanHaveMotors
// ----------------------------------------------------------------------------
int hkpConstraintDataUtils::cloneIfCanHaveMotors(hkpConstraintDataUtils::Self *self)
{
  int v1;
  int v2;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int i;
  int v10;
  uint32_t *address;
  int v12;

  v1 = G4_VCALL<int>(self, 20);
  if ( v1 == 6 )
  {
    address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 256);
    hkpPrismaticConstraintData::Construct((hkpPrismaticConstraintData::Self *)v2);
    *(uint16_t *)(v2 + 16) = *((uint16_t *)self + 8);
    *(uint32_t *)(v2 + 32) = *((uint32_t *)self + 8);
    *(uint32_t *)(v2 + 36) = *((uint32_t *)self + 9);
    *(uint32_t *)(v2 + 40) = *((uint32_t *)self + 10);
    *(uint32_t *)(v2 + 44) = *((uint32_t *)self + 11);
    *(uint32_t *)(v2 + 48) = *((uint32_t *)self + 12);
    *(uint32_t *)(v2 + 52) = *((uint32_t *)self + 13);
    *(uint32_t *)(v2 + 56) = *((uint32_t *)self + 14);
    *(uint32_t *)(v2 + 60) = *((uint32_t *)self + 15);
    *(uint32_t *)(v2 + 64) = *((uint32_t *)self + 16);
    *(uint32_t *)(v2 + 68) = *((uint32_t *)self + 17);
    *(uint32_t *)(v2 + 72) = *((uint32_t *)self + 18);
    *(uint32_t *)(v2 + 76) = *((uint32_t *)self + 19);
    *(uint32_t *)(v2 + 80) = *((uint32_t *)self + 20);
    *(uint32_t *)(v2 + 84) = *((uint32_t *)self + 21);
    *(uint32_t *)(v2 + 88) = *((uint32_t *)self + 22);
    *(uint32_t *)(v2 + 92) = *((uint32_t *)self + 23);
    *(uint32_t *)(v2 + 96) = *((uint32_t *)self + 24);
    *(uint32_t *)(v2 + 100) = *((uint32_t *)self + 25);
    *(uint32_t *)(v2 + 104) = *((uint32_t *)self + 26);
    *(uint32_t *)(v2 + 108) = *((uint32_t *)self + 27);
    *(uint32_t *)(v2 + 112) = *((uint32_t *)self + 28);
    *(uint32_t *)(v2 + 116) = *((uint32_t *)self + 29);
    *(uint32_t *)(v2 + 120) = *((uint32_t *)self + 30);
    *(uint32_t *)(v2 + 124) = *((uint32_t *)self + 31);
    *(uint32_t *)(v2 + 128) = *((uint32_t *)self + 32);
    *(uint32_t *)(v2 + 132) = *((uint32_t *)self + 33);
    *(uint32_t *)(v2 + 136) = *((uint32_t *)self + 34);
    *(uint32_t *)(v2 + 140) = *((uint32_t *)self + 35);
    *(uint32_t *)(v2 + 144) = *((uint32_t *)self + 36);
    *(uint32_t *)(v2 + 148) = *((uint32_t *)self + 37);
    *(uint32_t *)(v2 + 152) = *((uint32_t *)self + 38);
    *(uint32_t *)(v2 + 156) = *((uint32_t *)self + 39);
    *(uint32_t *)(v2 + 160) = *((uint32_t *)self + 40);
    *(uint32_t *)(v2 + 164) = *((uint32_t *)self + 41);
    *(uint32_t *)(v2 + 168) = *((uint32_t *)self + 42);
    v12 = *((uint32_t *)self + 43);
    *(uint32_t *)(v2 + 172) = v12;
    *(uint32_t *)(v2 + 176) = *((uint32_t *)self + 44);
    *(uint32_t *)(v2 + 180) = *((uint32_t *)self + 45);
    *(uint32_t *)(v2 + 184) = *((uint32_t *)self + 46);
    *(uint32_t *)(v2 + 188) = *((uint32_t *)self + 47);
    *(uint32_t *)(v2 + 192) = *((uint32_t *)self + 48);
    *(uint32_t *)(v2 + 196) = *((uint32_t *)self + 49);
    *(uint32_t *)(v2 + 200) = *((uint32_t *)self + 50);
    *(uint32_t *)(v2 + 204) = *((uint32_t *)self + 51);
    *(uint32_t *)(v2 + 208) = *((uint32_t *)self + 52);
    *(uint32_t *)(v2 + 212) = *((uint32_t *)self + 53);
    *(uint32_t *)(v2 + 216) = *((uint32_t *)self + 54);
    *(uint16_t *)(v2 + 220) = *((uint16_t *)self + 110);
    *(uint8_t *)(v2 + 222) = *((uint8_t *)self + 222);
    *(uint32_t *)(v2 + 224) = *((uint32_t *)self + 56);
    *(uint32_t *)(v2 + 228) = *((uint32_t *)self + 57);
    *(uint32_t *)(v2 + 232) = *((uint32_t *)self + 58);
    *(uint16_t *)(v2 + 236) = *((uint16_t *)self + 118);
    *(uint8_t *)(v2 + 238) = *((uint8_t *)self + 238);
    *(uint32_t *)(v2 + 240) = *((uint32_t *)self + 60);
    *(uint32_t *)(v2 + 244) = *((uint32_t *)self + 61);
    *(uint32_t *)(v2 + 248) = *((uint32_t *)self + 62);
    *(uint32_t *)(v2 + 252) = *((uint32_t *)self + 63);
    *(uint32_t *)(v2 + 8) = *((uint32_t *)self + 2);
    if ( v12 == 0 )
      return v2;
    *(uint32_t *)(v2 + 172) = G4_VCALL<int>(v12, 20);
    return v2;
  }
  else
  {
    if ( v1 != 7 )
    {
      v2 = 0;
      if ( v1 == 2 )
      {
        v4 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v4 + 44) + 8))(*(uint32_t *)(*v4 + 44), 272);
        hkpLimitedHingeConstraintData::Construct((hkpLimitedHingeConstraintData::Self *)v2);
        *(uint16_t *)(v2 + 16) = *((uint16_t *)self + 8);
        *(uint32_t *)(v2 + 32) = *((uint32_t *)self + 8);
        *(uint32_t *)(v2 + 36) = *((uint32_t *)self + 9);
        *(uint32_t *)(v2 + 40) = *((uint32_t *)self + 10);
        *(uint32_t *)(v2 + 44) = *((uint32_t *)self + 11);
        *(uint32_t *)(v2 + 48) = *((uint32_t *)self + 12);
        *(uint32_t *)(v2 + 52) = *((uint32_t *)self + 13);
        *(uint32_t *)(v2 + 56) = *((uint32_t *)self + 14);
        *(uint32_t *)(v2 + 60) = *((uint32_t *)self + 15);
        *(uint32_t *)(v2 + 64) = *((uint32_t *)self + 16);
        *(uint32_t *)(v2 + 68) = *((uint32_t *)self + 17);
        *(uint32_t *)(v2 + 72) = *((uint32_t *)self + 18);
        *(uint32_t *)(v2 + 76) = *((uint32_t *)self + 19);
        *(uint32_t *)(v2 + 80) = *((uint32_t *)self + 20);
        *(uint32_t *)(v2 + 84) = *((uint32_t *)self + 21);
        *(uint32_t *)(v2 + 88) = *((uint32_t *)self + 22);
        *(uint32_t *)(v2 + 92) = *((uint32_t *)self + 23);
        *(uint32_t *)(v2 + 96) = *((uint32_t *)self + 24);
        *(uint32_t *)(v2 + 100) = *((uint32_t *)self + 25);
        *(uint32_t *)(v2 + 104) = *((uint32_t *)self + 26);
        *(uint32_t *)(v2 + 108) = *((uint32_t *)self + 27);
        *(uint32_t *)(v2 + 112) = *((uint32_t *)self + 28);
        *(uint32_t *)(v2 + 116) = *((uint32_t *)self + 29);
        *(uint32_t *)(v2 + 120) = *((uint32_t *)self + 30);
        *(uint32_t *)(v2 + 124) = *((uint32_t *)self + 31);
        *(uint32_t *)(v2 + 128) = *((uint32_t *)self + 32);
        *(uint32_t *)(v2 + 132) = *((uint32_t *)self + 33);
        *(uint32_t *)(v2 + 136) = *((uint32_t *)self + 34);
        *(uint32_t *)(v2 + 140) = *((uint32_t *)self + 35);
        *(uint32_t *)(v2 + 144) = *((uint32_t *)self + 36);
        *(uint32_t *)(v2 + 148) = *((uint32_t *)self + 37);
        *(uint32_t *)(v2 + 152) = *((uint32_t *)self + 38);
        *(uint32_t *)(v2 + 156) = *((uint32_t *)self + 39);
        *(uint32_t *)(v2 + 160) = *((uint32_t *)self + 40);
        *(uint32_t *)(v2 + 164) = *((uint32_t *)self + 41);
        *(uint32_t *)(v2 + 168) = *((uint32_t *)self + 42);
        *(uint32_t *)(v2 + 172) = *((uint32_t *)self + 43);
        *(uint32_t *)(v2 + 176) = *((uint32_t *)self + 44);
        *(uint32_t *)(v2 + 180) = *((uint32_t *)self + 45);
        *(uint32_t *)(v2 + 184) = *((uint32_t *)self + 46);
        *(uint32_t *)(v2 + 188) = *((uint32_t *)self + 47);
        v5 = *((uint32_t *)self + 48);
        *(uint32_t *)(v2 + 192) = v5;
        *(uint32_t *)(v2 + 196) = *((uint32_t *)self + 49);
        *(uint32_t *)(v2 + 200) = *((uint32_t *)self + 50);
        *(uint32_t *)(v2 + 204) = *((uint32_t *)self + 51);
        *(uint32_t *)(v2 + 208) = *((uint32_t *)self + 52);
        *(uint32_t *)(v2 + 212) = *((uint32_t *)self + 53);
        *(uint32_t *)(v2 + 216) = *((uint32_t *)self + 54);
        *(uint32_t *)(v2 + 220) = *((uint32_t *)self + 55);
        *(uint32_t *)(v2 + 224) = *((uint32_t *)self + 56);
        *(uint32_t *)(v2 + 228) = *((uint32_t *)self + 57);
        *(uint32_t *)(v2 + 232) = *((uint32_t *)self + 58);
        *(uint32_t *)(v2 + 236) = *((uint32_t *)self + 59);
        *(uint32_t *)(v2 + 240) = *((uint32_t *)self + 60);
        *(uint32_t *)(v2 + 244) = *((uint32_t *)self + 61);
        *(uint32_t *)(v2 + 248) = *((uint32_t *)self + 62);
        *(uint16_t *)(v2 + 252) = *((uint16_t *)self + 126);
        *(uint8_t *)(v2 + 254) = *((uint8_t *)self + 254);
        *(uint32_t *)(v2 + 256) = *((uint32_t *)self + 64);
        *(uint32_t *)(v2 + 260) = *((uint32_t *)self + 65);
        *(uint32_t *)(v2 + 264) = *((uint32_t *)self + 66);
        *(uint32_t *)(v2 + 268) = *((uint32_t *)self + 67);
        *(uint32_t *)(v2 + 8) = *((uint32_t *)self + 2);
        if ( v5 != 0 )
        {
          *(uint32_t *)(v2 + 192) = G4_VCALL<int>(v5, 20);
          return v2;
        }
      }
      return v2;
    }
    v6 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v7 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v6 + 44) + 8))(*(uint32_t *)(*v6 + 44), 384);
    hkpRagdollConstraintData::Construct((hkpRagdollConstraintData::Self *)v7);
    *(uint16_t *)(v7 + 16) = *((uint16_t *)self + 8);
    *(uint32_t *)(v7 + 32) = *((uint32_t *)self + 8);
    *(uint32_t *)(v7 + 36) = *((uint32_t *)self + 9);
    *(uint32_t *)(v7 + 40) = *((uint32_t *)self + 10);
    *(uint32_t *)(v7 + 44) = *((uint32_t *)self + 11);
    *(uint32_t *)(v7 + 48) = *((uint32_t *)self + 12);
    *(uint32_t *)(v7 + 52) = *((uint32_t *)self + 13);
    *(uint32_t *)(v7 + 56) = *((uint32_t *)self + 14);
    *(uint32_t *)(v7 + 60) = *((uint32_t *)self + 15);
    *(uint32_t *)(v7 + 64) = *((uint32_t *)self + 16);
    *(uint32_t *)(v7 + 68) = *((uint32_t *)self + 17);
    *(uint32_t *)(v7 + 72) = *((uint32_t *)self + 18);
    *(uint32_t *)(v7 + 76) = *((uint32_t *)self + 19);
    *(uint32_t *)(v7 + 80) = *((uint32_t *)self + 20);
    *(uint32_t *)(v7 + 84) = *((uint32_t *)self + 21);
    *(uint32_t *)(v7 + 88) = *((uint32_t *)self + 22);
    *(uint32_t *)(v7 + 92) = *((uint32_t *)self + 23);
    *(uint32_t *)(v7 + 96) = *((uint32_t *)self + 24);
    *(uint32_t *)(v7 + 100) = *((uint32_t *)self + 25);
    *(uint32_t *)(v7 + 104) = *((uint32_t *)self + 26);
    *(uint32_t *)(v7 + 108) = *((uint32_t *)self + 27);
    *(uint32_t *)(v7 + 112) = *((uint32_t *)self + 28);
    *(uint32_t *)(v7 + 116) = *((uint32_t *)self + 29);
    *(uint32_t *)(v7 + 120) = *((uint32_t *)self + 30);
    *(uint32_t *)(v7 + 124) = *((uint32_t *)self + 31);
    *(uint32_t *)(v7 + 128) = *((uint32_t *)self + 32);
    *(uint32_t *)(v7 + 132) = *((uint32_t *)self + 33);
    *(uint32_t *)(v7 + 136) = *((uint32_t *)self + 34);
    *(uint32_t *)(v7 + 140) = *((uint32_t *)self + 35);
    *(uint32_t *)(v7 + 144) = *((uint32_t *)self + 36);
    *(uint32_t *)(v7 + 148) = *((uint32_t *)self + 37);
    *(uint32_t *)(v7 + 152) = *((uint32_t *)self + 38);
    *(uint32_t *)(v7 + 156) = *((uint32_t *)self + 39);
    *(uint32_t *)(v7 + 160) = *((uint32_t *)self + 40);
    *(uint32_t *)(v7 + 164) = *((uint32_t *)self + 41);
    *(uint32_t *)(v7 + 168) = *((uint32_t *)self + 42);
    *(uint32_t *)(v7 + 172) = *((uint32_t *)self + 43);
    *(uint16_t *)(v7 + 176) = *((uint16_t *)self + 88);
    v8 = v7 + 240;
    *(uint8_t *)(v7 + 178) = *((uint8_t *)self + 178);
    *(uint16_t *)(v7 + 180) = *((uint16_t *)self + 90);
    *(uint16_t *)(v7 + 182) = *((uint16_t *)self + 91);
    *(uint32_t *)(v7 + 192) = *((uint32_t *)self + 48);
    *(uint32_t *)(v7 + 196) = *((uint32_t *)self + 49);
    *(uint32_t *)(v7 + 200) = *((uint32_t *)self + 50);
    *(uint32_t *)(v7 + 204) = *((uint32_t *)self + 51);
    *(uint32_t *)(v7 + 208) = *((uint32_t *)self + 52);
    *(uint32_t *)(v7 + 212) = *((uint32_t *)self + 53);
    *(uint32_t *)(v7 + 216) = *((uint32_t *)self + 54);
    *(uint32_t *)(v7 + 220) = *((uint32_t *)self + 55);
    *(uint32_t *)(v7 + 224) = *((uint32_t *)self + 56);
    *(uint32_t *)(v7 + 228) = *((uint32_t *)self + 57);
    *(uint32_t *)(v7 + 232) = *((uint32_t *)self + 58);
    *(uint32_t *)(v7 + 236) = *((uint32_t *)self + 59);
    *(uint32_t *)(v7 + 240) = *((uint32_t *)self + 60);
    *(uint32_t *)(v7 + 244) = *((uint32_t *)self + 61);
    *(uint32_t *)(v7 + 248) = *((uint32_t *)self + 62);
    *(uint32_t *)(v7 + 256) = *((uint32_t *)self + 64);
    *(uint32_t *)(v7 + 260) = *((uint32_t *)self + 65);
    *(uint32_t *)(v7 + 264) = *((uint32_t *)self + 66);
    *(uint32_t *)(v7 + 268) = *((uint32_t *)self + 67);
    *(uint32_t *)(v7 + 272) = *((uint32_t *)self + 68);
    *(uint32_t *)(v7 + 276) = *((uint32_t *)self + 69);
    *(uint32_t *)(v7 + 280) = *((uint32_t *)self + 70);
    *(uint32_t *)(v7 + 284) = *((uint32_t *)self + 71);
    *(uint32_t *)(v7 + 288) = *((uint32_t *)self + 72);
    *(uint32_t *)(v7 + 292) = *((uint32_t *)self + 73);
    *(uint32_t *)(v7 + 296) = *((uint32_t *)self + 74);
    *(uint32_t *)(v7 + 300) = *((uint32_t *)self + 75);
    *(uint32_t *)(v7 + 304) = *((uint32_t *)self + 76);
    *(uint32_t *)(v7 + 308) = *((uint32_t *)self + 77);
    *(uint32_t *)(v7 + 312) = *((uint32_t *)self + 78);
    *(uint32_t *)(v7 + 316) = *((uint32_t *)self + 79);
    *(uint32_t *)(v7 + 320) = *((uint32_t *)self + 80);
    *(uint32_t *)(v7 + 324) = *((uint32_t *)self + 81);
    *(uint32_t *)(v7 + 328) = *((uint32_t *)self + 82);
    *(uint32_t *)(v7 + 332) = *((uint32_t *)self + 83);
    *(uint32_t *)(v7 + 336) = *((uint32_t *)self + 84);
    *(uint32_t *)(v7 + 340) = *((uint32_t *)self + 85);
    *(uint32_t *)(v7 + 344) = *((uint32_t *)self + 86);
    *(uint32_t *)(v7 + 348) = *((uint32_t *)self + 87);
    *(uint32_t *)(v7 + 352) = *((uint32_t *)self + 88);
    *(uint32_t *)(v7 + 356) = *((uint32_t *)self + 89);
    *(uint32_t *)(v7 + 360) = *((uint32_t *)self + 90);
    *(uint32_t *)(v7 + 364) = *((uint32_t *)self + 91);
    *(uint32_t *)(v7 + 368) = *((uint32_t *)self + 92);
    *(uint32_t *)(v7 + 372) = *((uint32_t *)self + 93);
    *(uint32_t *)(v7 + 376) = *((uint32_t *)self + 94);
    *(uint32_t *)(v7 + 380) = *((uint32_t *)self + 95);
    *(uint32_t *)(v7 + 8) = *((uint32_t *)self + 2);
    for ( i = 0; i != 3; ++i )
    {
      v10 = *(uint32_t *)(v8 + 4 * i);
      if ( v10 != 0 )
        *(uint32_t *)(v8 + 4 * i) = (*(int (**)(uint32_t))(*(uint32_t *)v10 + 20))(*(uint32_t *)(v8 + 4 * i));
    }
    return v7;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::deepClone  (binary VA: 0x1aef040)
// Original: hkpConstraintDataUtils::deepClone
// ----------------------------------------------------------------------------
int hkpConstraintDataUtils::deepClone(hkpConstraintDataUtils::Self *self)
{
  uint32_t *v1;
  int v2;
  int result;
  uint32_t *address;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  int32_t v10; // kr00_4
  uint32_t *v11;
  int v12;
  hkpParametricCurve::Self *v13;
  int v14;
  int v15;
  int32_t v16; // kr04_4
  int32_t v17;
  int32_t v18; // ett
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int32_t v23; // kr08_4
  uint32_t *v24;
  int TwistMotor;
  int v26;
  int32_t v27; // kr0C_4
  int ConeMotor;
  int v29;
  int32_t v30; // kr10_4
  int PlaneMotor;
  int v32;
  int32_t v33; // kr14_4
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;

  switch ( G4_VCALL<int>(self, 20) )
  {
    case 0:
      address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 96);
      hkpBallAndSocketConstraintData::Construct((hkpBallAndSocketConstraintData::Self *)v2);
      hkString::memCpy((hkString::Self *)(v2 + 16), (char *)self + 16, 0x50u);
      goto LABEL_3;
    case 1:
      v5 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v5 + 44) + 8))(*(uint32_t *)(*v5 + 44), 208);
      hkpHingeConstraintData::Construct((hkpHingeConstraintData::Self *)v2);
      goto LABEL_7;
    case 2:
      v6 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v7 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v6 + 44) + 8))(*(uint32_t *)(*v6 + 44), 272);
      hkpLimitedHingeConstraintData::Construct((hkpLimitedHingeConstraintData::Self *)v7);
      hkString::memCpy((hkString::Self *)(v7 + 4), (char *)self + 16, 0x100u);
      v8 = v7[48];
      result = (int)(uintptr_t)(v7);
      if ( v8 == 0 || *(uint16_t *)(v8 + 6) == 0 )
        return result;
      do
      {
        v10 = *(uint32_t *)(v8 + 4);
        HIWORD(v9) = HIWORD(v10);
        LOWORD(v9) = 0;
      }
      while ( v10 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(v8 + 4),
                       v10,
                       v9 | (uint16_t)(v10 + 1)) );
      return (int)(uintptr_t)(v7);
    case 3:
      v11 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v12 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v11 + 44) + 8))(*(uint32_t *)(*v11 + 44), 176);
      hkpPointToPathConstraintData::Construct((hkpPointToPathConstraintData::Self *)v12);
      hkString::memCpy((hkString::Self *)(v12 + 16), (char *)self + 16, 0x10u);
      v13 = *((hkpParametricCurve::Self **)self + 8);
      v14 = G4_VCALL<int>(v13, 60);
      hkpPointToPathConstraintData::setPath((hkpPointToPathConstraintData::Self *)v12, v13);
      result = v12;
      if ( *(uint16_t *)(v14 + 6) != 0 )
      {
        do
        {
          v16 = *(uint32_t *)(v14 + 4);
          HIWORD(v15) = HIWORD(v16);
          LOWORD(v15) = 0;
          v17 = v15 | (uint16_t)(v16 - 1);
          v18 = v16;
        }
        while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)(v14 + 4), v18, v17) );
        result = v12;
        if ( (uint16_t)v17 == 0 )
        {
          G4_VCALL<void>(v14, 16);
          return v12;
        }
      }
      return result;
    case 6:
      v19 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v20 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v19 + 44) + 8))(*(uint32_t *)(*v19 + 44), 256);
      hkpPrismaticConstraintData::Construct((hkpPrismaticConstraintData::Self *)v20);
      hkString::memCpy((hkString::Self *)(v20 + 4), (char *)self + 16, 0xF0u);
      v21 = v20[43];
      result = (int)(uintptr_t)(v20);
      if ( v21 != 0 && *(uint16_t *)(v21 + 6) != 0 )
      {
        do
        {
          v23 = *(uint32_t *)(v21 + 4);
          HIWORD(v22) = HIWORD(v23);
          LOWORD(v22) = 0;
        }
        while ( v23 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v21 + 4),
                         v23,
                         v22 | (uint16_t)(v23 + 1)) );
        return (int)(uintptr_t)(v20);
      }
      return result;
    case 7:
      v24 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v7 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v24 + 44) + 8))(*(uint32_t *)(*v24 + 44), 384);
      hkpRagdollConstraintData::Construct((hkpRagdollConstraintData::Self *)v7);
      hkString::memCpy((hkString::Self *)(v7 + 4), (char *)self + 16, 0x170u);
      if ( hkpRagdollConstraintData::getTwistMotor((hkpRagdollConstraintData::Self *)v7) != 0 )
      {
        TwistMotor = hkpRagdollConstraintData::getTwistMotor((hkpRagdollConstraintData::Self *)v7);
        if ( *(uint16_t *)(TwistMotor + 6) != 0 )
        {
          do
          {
            v27 = *(uint32_t *)(TwistMotor + 4);
            HIWORD(v26) = HIWORD(v27);
            LOWORD(v26) = 0;
          }
          while ( v27 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(TwistMotor + 4),
                           v27,
                           v26 | (uint16_t)(v27 + 1)) );
        }
      }
      if ( hkpRagdollConstraintData::getConeMotor((hkpRagdollConstraintData::Self *)v7) != 0 )
      {
        ConeMotor = hkpRagdollConstraintData::getConeMotor((hkpRagdollConstraintData::Self *)v7);
        if ( *(uint16_t *)(ConeMotor + 6) != 0 )
        {
          do
          {
            v30 = *(uint32_t *)(ConeMotor + 4);
            HIWORD(v29) = HIWORD(v30);
            LOWORD(v29) = 0;
          }
          while ( v30 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(ConeMotor + 4),
                           v30,
                           v29 | (uint16_t)(v30 + 1)) );
        }
      }
      if ( hkpRagdollConstraintData::getPlaneMotor((hkpRagdollConstraintData::Self *)v7) == 0 )
        return (int)(uintptr_t)(v7);
      PlaneMotor = hkpRagdollConstraintData::getPlaneMotor((hkpRagdollConstraintData::Self *)v7);
      result = (int)(uintptr_t)(v7);
      if ( *(uint16_t *)(PlaneMotor + 6) != 0 )
      {
        do
        {
          v33 = *(uint32_t *)(PlaneMotor + 4);
          HIWORD(v32) = HIWORD(v33);
          LOWORD(v32) = 0;
        }
        while ( v33 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(PlaneMotor + 4),
                         v33,
                         v32 | (uint16_t)(v33 + 1)) );
        return (int)(uintptr_t)(v7);
      }
      return result;
    case 8:
      v34 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v34 + 44) + 8))(*(uint32_t *)(*v34 + 44), 96);
      hkpStiffSpringConstraintData::Construct((hkpStiffSpringConstraintData::Self *)v2);
      hkString::memCpy((hkString::Self *)(v2 + 16), (char *)self + 16, 0x4Cu);
      goto LABEL_3;
    case 9:
      v40 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v40 + 44) + 8))(*(uint32_t *)(*v40 + 44), 384);
      hkpWheelConstraintData::Construct((hkpWheelConstraintData::Self *)v2);
      hkString::memCpy((hkString::Self *)(v2 + 16), (char *)self + 16, 0x150u);
      goto LABEL_3;
    case 12:
    case 13:
      return G4_VCALL<int>(self, 108);
    case 14:
      v39 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v39 + 44) + 8))(*(uint32_t *)(*v39 + 44), 176);
      hkpPointToPlaneConstraintData::Construct((hkpPointToPlaneConstraintData::Self *)v2);
      hkString::memCpy((hkString::Self *)(v2 + 16), (char *)self + 16, 0xA0u);
      goto LABEL_3;
    case 15:
      v35 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v35 + 44) + 8))(*(uint32_t *)(*v35 + 44), 128);
      hkpPulleyConstraintData::Construct((hkpPulleyConstraintData::Self *)v2);
      hkString::memCpy((hkString::Self *)(v2 + 16), (char *)self + 16, 0x70u);
      goto LABEL_3;
    case 18:
      v36 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v36 + 44) + 8))(*(uint32_t *)(*v36 + 44), 160);
      hkpHingeLimitsData::Construct((hkpHingeLimitsData::Self *)v2);
      hkString::memCpy((hkString::Self *)(v2 + 16), (char *)self + 16, 0x90u);
      goto LABEL_3;
    case 19:
      v37 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v37 + 44) + 8))(*(uint32_t *)(*v37 + 44), 224);
      hkpRagdollLimitsData::Construct((hkpRagdollLimitsData::Self *)v2);
      hkString::memCpy((hkString::Self *)(v2 + 16), (char *)self + 16, 0xD0u);
      goto LABEL_3;
    case 23:
      v38 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v38 + 44) + 8))(*(uint32_t *)(*v38 + 44), 208);
      hkpFixedConstraintData::Construct((hkpFixedConstraintData::Self *)v2);
LABEL_7:
      hkString::memCpy((hkString::Self *)(v2 + 16), (char *)self + 16, 0xC0u);
      goto LABEL_3;
    case 24:
      v1 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v1 + 44) + 8))(*(uint32_t *)(*v1 + 44), 352);
      hkpDeformableFixedConstraintData::Construct((hkpDeformableFixedConstraintData::Self *)v2);
      hkString::memCpy((hkString::Self *)(v2 + 16), (char *)self + 16, 0x150u);
LABEL_3:
      result = v2;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::convertToPowered  (binary VA: 0x1aef5f0)
// Original: hkpConstraintDataUtils::convertToPowered
// ----------------------------------------------------------------------------
void hkpConstraintDataUtils::convertToPowered(hkpLimitedHingeConstraintData::Self *a1, hkpConstraintMotor::Self *a2, char a3)
{
  int v3;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[3];
  typedef int _g4_t_v8[131];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v3 = G4_VCALL<int>(a1, 20);
  if ( v3 == 2 )
  {
    hkpLimitedHingeConstraintData::setMotor(a1, a2);
    hkpLimitedHingeConstraintData::setMotorEnabled(a1, 0, a3);
  }
  else if ( v3 == 7 )
  {
    hkpRagdollConstraintData::setTwistMotor(a1, a2);
    hkpRagdollConstraintData::setPlaneMotor(a1, a2);
    hkpRagdollConstraintData::setConeMotor(a1, a2);
    hkpRagdollConstraintData::setMotorsEnabled(a1, 0, a3);
  }
  else
  {
    hkErrStream::Construct((hkErrStream::Self *)v7, (hkString::Self *)v8, 512);
    hkOstream::opShl((int)(uintptr_t)(v7), (hkString::Self *)"Cannot convert constraint data to a powered constraint.");
    hkError::messageWarning(
      (hkError::Self *)0xABBA1B34,
      (int)(uintptr_t)(v8),
      "Data/hkpConstraintDataUtils.cpp",
      (const char *)&dword_40 + 2,
      v6);
    hkErrStream::Destroy((hkErrStream::Self *)v7);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::createLimited  (binary VA: 0x1aef720)
// Original: hkpConstraintDataUtils::createLimited
// ----------------------------------------------------------------------------
hkpRagdollLimitsData::Self * hkpConstraintDataUtils::createLimited(hkpConstraintDataUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  int address;
  hkpRagdollLimitsData::Self *v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[3];
  typedef int _g4_t_v10[131];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v1 = G4_VCALL<int>(self, 20);
  if ( v1 == 7 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (hkpRagdollLimitsData::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                   *(uint32_t *)(*(uint32_t *)address + 44),
                                   224);
    hkpRagdollLimitsData::Construct(v6);
    *((uint32_t *)v6 + 8) = *((uint32_t *)self + 8);
    *((uint32_t *)v6 + 9) = *((uint32_t *)self + 9);
    *((uint32_t *)v6 + 10) = *((uint32_t *)self + 10);
    *((uint32_t *)v6 + 11) = *((uint32_t *)self + 11);
    *((uint32_t *)v6 + 12) = *((uint32_t *)self + 12);
    *((uint32_t *)v6 + 13) = *((uint32_t *)self + 13);
    *((uint32_t *)v6 + 14) = *((uint32_t *)self + 14);
    *((uint32_t *)v6 + 15) = *((uint32_t *)self + 15);
    *((uint32_t *)v6 + 16) = *((uint32_t *)self + 16);
    *((uint32_t *)v6 + 17) = *((uint32_t *)self + 17);
    *((uint32_t *)v6 + 18) = *((uint32_t *)self + 18);
    *((uint32_t *)v6 + 19) = *((uint32_t *)self + 19);
    *((uint32_t *)v6 + 20) = *((uint32_t *)self + 24);
    *((uint32_t *)v6 + 21) = *((uint32_t *)self + 25);
    *((uint32_t *)v6 + 22) = *((uint32_t *)self + 26);
    *((uint32_t *)v6 + 23) = *((uint32_t *)self + 27);
    *((uint32_t *)v6 + 24) = *((uint32_t *)self + 28);
    *((uint32_t *)v6 + 25) = *((uint32_t *)self + 29);
    *((uint32_t *)v6 + 26) = *((uint32_t *)self + 30);
    *((uint32_t *)v6 + 27) = *((uint32_t *)self + 31);
    *((uint32_t *)v6 + 28) = *((uint32_t *)self + 32);
    *((uint32_t *)v6 + 29) = *((uint32_t *)self + 33);
    *((uint32_t *)v6 + 30) = *((uint32_t *)self + 34);
    *((uint32_t *)v6 + 31) = *((uint32_t *)self + 35);
    *((uint32_t *)v6 + 32) = *((uint32_t *)self + 68);
    *((uint32_t *)v6 + 33) = *((uint32_t *)self + 69);
    *((uint32_t *)v6 + 34) = *((uint32_t *)self + 70);
    *((uint32_t *)v6 + 35) = *((uint32_t *)self + 71);
    *((uint32_t *)v6 + 36) = *((uint32_t *)self + 72);
    *((uint32_t *)v6 + 37) = *((uint32_t *)self + 73);
    *((uint32_t *)v6 + 38) = *((uint32_t *)self + 74);
    *((uint32_t *)v6 + 39) = *((uint32_t *)self + 75);
    *((uint32_t *)v6 + 48) = *((uint32_t *)self + 84);
    *((uint32_t *)v6 + 49) = *((uint32_t *)self + 85);
    *((uint32_t *)v6 + 50) = *((uint32_t *)self + 86);
    *((uint32_t *)v6 + 51) = *((uint32_t *)self + 87);
    *((uint32_t *)v6 + 52) = *((uint32_t *)self + 88);
    *((uint32_t *)v6 + 53) = *((uint32_t *)self + 89);
    *((uint32_t *)v6 + 54) = *((uint32_t *)self + 90);
    *((uint32_t *)v6 + 55) = *((uint32_t *)self + 91);
    *((uint32_t *)v6 + 40) = *((uint32_t *)self + 76);
    *((uint32_t *)v6 + 41) = *((uint32_t *)self + 77);
    *((uint32_t *)v6 + 42) = *((uint32_t *)self + 78);
    *((uint32_t *)v6 + 43) = *((uint32_t *)self + 79);
    *((uint32_t *)v6 + 44) = *((uint32_t *)self + 80);
    *((uint32_t *)v6 + 45) = *((uint32_t *)self + 81);
    *((uint32_t *)v6 + 46) = *((uint32_t *)self + 82);
    *((uint32_t *)v6 + 47) = *((uint32_t *)self + 83);
    hkpRagdollLimitsData::setConeLimitStabilization(v6, *((uint8_t *)self + 310) != 0);
    return v6;
  }
  if ( v1 <= 7 )
  {
    if ( v1 == 2 )
    {
      v2 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v3 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v2 + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)v2 + 44),
             160);
      hkpHingeLimitsData::Construct((hkpHingeLimitsData::Self *)v3);
      *(uint32_t *)(v3 + 32) = *((uint32_t *)self + 8);
      *(uint32_t *)(v3 + 36) = *((uint32_t *)self + 9);
      *(uint32_t *)(v3 + 40) = *((uint32_t *)self + 10);
      *(uint32_t *)(v3 + 44) = *((uint32_t *)self + 11);
      *(uint32_t *)(v3 + 48) = *((uint32_t *)self + 12);
      *(uint32_t *)(v3 + 52) = *((uint32_t *)self + 13);
      *(uint32_t *)(v3 + 56) = *((uint32_t *)self + 14);
      *(uint32_t *)(v3 + 60) = *((uint32_t *)self + 15);
      *(uint32_t *)(v3 + 64) = *((uint32_t *)self + 16);
      *(uint32_t *)(v3 + 68) = *((uint32_t *)self + 17);
      *(uint32_t *)(v3 + 72) = *((uint32_t *)self + 18);
      *(uint32_t *)(v3 + 76) = *((uint32_t *)self + 19);
      *(uint32_t *)(v3 + 80) = *((uint32_t *)self + 24);
      *(uint32_t *)(v3 + 84) = *((uint32_t *)self + 25);
      *(uint32_t *)(v3 + 88) = *((uint32_t *)self + 26);
      *(uint32_t *)(v3 + 92) = *((uint32_t *)self + 27);
      *(uint32_t *)(v3 + 96) = *((uint32_t *)self + 28);
      *(uint32_t *)(v3 + 100) = *((uint32_t *)self + 29);
      *(uint32_t *)(v3 + 104) = *((uint32_t *)self + 30);
      *(uint32_t *)(v3 + 108) = *((uint32_t *)self + 31);
      *(uint32_t *)(v3 + 112) = *((uint32_t *)self + 32);
      *(uint32_t *)(v3 + 116) = *((uint32_t *)self + 33);
      *(uint32_t *)(v3 + 120) = *((uint32_t *)self + 34);
      *(uint32_t *)(v3 + 124) = *((uint32_t *)self + 35);
      *(uint32_t *)(v3 + 128) = *((uint32_t *)self + 56);
      *(uint32_t *)(v3 + 132) = *((uint32_t *)self + 57);
      *(uint32_t *)(v3 + 136) = *((uint32_t *)self + 58);
      *(uint32_t *)(v3 + 140) = *((uint32_t *)self + 59);
      *(uint32_t *)(v3 + 144) = *((uint32_t *)self + 60);
      *(uint32_t *)(v3 + 148) = *((uint32_t *)self + 61);
      *(uint32_t *)(v3 + 152) = *((uint32_t *)self + 62);
      *(uint16_t *)(v3 + 156) = *((uint16_t *)self + 126);
      *(uint8_t *)(v3 + 158) = *((uint8_t *)self + 254);
      return (hkpRagdollLimitsData::Self *)v3;
    }
  }
  else if ( (unsigned int)(v1 - 18) <= 1 )
  {
    if ( loc_6 == 0 )
      return nullptr;
    do
    {
      HIWORD(v7) = (uint16_t)(uintptr_t)(loc_6);
      LOWORD(v7) = 0;
    }
    while ( (int32_t)(uintptr_t)(loc_4) != __sync_val_compare_and_swap(
                       (volatile int32_t *)&loc_4,
                       (int32_t)(uintptr_t)(loc_4),
                       v7 | (uint16_t)(uintptr_t)(loc_4 + 1)) );
    return nullptr;
  }
  hkErrStream::Construct((hkErrStream::Self *)v9, (hkString::Self *)v10, 512);
  hkOstream::opShl((int)(uintptr_t)(v9), (hkString::Self *)"Unsupported constraint type. Cannot generate limits constraints.");
  hkError::messageWarning(
    (hkError::Self *)0xABBAD7DA,
    (int)(uintptr_t)(v10),
    "Data/hkpConstraintDataUtils.cpp",
    (const char *)&dword_78 + 3,
    v8);
  hkErrStream::Destroy((hkErrStream::Self *)v9);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::getConstraintPivots  (binary VA: 0x1aefb70)
// Original: hkpConstraintDataUtils::getConstraintPivots
// ----------------------------------------------------------------------------
hkpConstraintDataUtils::Self * hkpConstraintDataUtils::getConstraintPivots(hkpConstraintDataUtils::Self *self, const hkpConstraintData::Self *a2, hkVector4f::Self *a3, hkVector4f::Self *a4)
{
  hkpConstraintDataUtils::Self *result;
  typedef int _g4_t_v5[3];
  typedef uint8_t _g4_t_v6[540];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  switch ( G4_VCALL<int>(a2, 20) )
  {
    case 0:
      *(uint32_t *)a3 = *((uint32_t *)a2 + 8);
      *((uint32_t *)a3 + 1) = *((uint32_t *)a2 + 9);
      *((uint32_t *)a3 + 2) = *((uint32_t *)a2 + 10);
      *((uint32_t *)a3 + 3) = *((uint32_t *)a2 + 11);
      *(uint32_t *)a4 = *((uint32_t *)a2 + 12);
      *((uint32_t *)a4 + 1) = *((uint32_t *)a2 + 13);
      *((uint32_t *)a4 + 2) = *((uint32_t *)a2 + 14);
      *((uint32_t *)a4 + 3) = *((uint32_t *)a2 + 15);
      goto LABEL_3;
    case 1:
    case 2:
    case 7:
    case 23:
    case 24:
      *(uint32_t *)a3 = *((uint32_t *)a2 + 20);
      *((uint32_t *)a3 + 1) = *((uint32_t *)a2 + 21);
      *((uint32_t *)a3 + 2) = *((uint32_t *)a2 + 22);
      *((uint32_t *)a3 + 3) = *((uint32_t *)a2 + 23);
      *(uint32_t *)a4 = *((uint32_t *)a2 + 36);
      *((uint32_t *)a4 + 1) = *((uint32_t *)a2 + 37);
      *((uint32_t *)a4 + 2) = *((uint32_t *)a2 + 38);
      *((uint32_t *)a4 + 3) = *((uint32_t *)a2 + 39);
LABEL_3:
      *(uint32_t *)self = 0;
      result = self;
      break;
    default:
      hkErrStream::Construct((hkErrStream::Self *)v5, (hkString::Self *)v6, 512);
      hkOstream::opShl((int)(uintptr_t)(v5), (hkString::Self *)"Unsupported type of constraint in getConstraintPivots");
      hkError::messageWarning((hkError::Self *)0xABBABF3B, (int)(uintptr_t)(v6), "Data/hkpConstraintDataUtils.cpp", &dword_B8[1]);
      hkErrStream::Destroy((hkErrStream::Self *)v5);
      *(uint32_t *)a3 = 0;
      *((uint32_t *)a3 + 1) = 0;
      *((uint32_t *)a3 + 2) = 0;
      *((uint32_t *)a3 + 3) = 0;
      *(uint32_t *)a4 = 0;
      *((uint32_t *)a4 + 1) = 0;
      *((uint32_t *)a4 + 2) = 0;
      *((uint32_t *)a4 + 3) = 0;
      *(uint32_t *)self = 1;
      result = self;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDataUtils::getConstraintMotors  (binary VA: 0x1aefd00)
// Original: hkpConstraintDataUtils::getConstraintMotors
// ----------------------------------------------------------------------------
hkpConstraintDataUtils::Self * hkpConstraintDataUtils::getConstraintMotors(hkpConstraintDataUtils::Self *self, const hkpConstraintData::Self *a2, hkpConstraintMotor::Self **a3, hkpConstraintMotor::Self **a4, hkpConstraintMotor::Self **a5)
{
  int v5;
  typedef int _g4_t_v7[3];
  typedef int _g4_t_v8[135];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v5 = G4_VCALL<int>(a2, 20);
  if ( v5 == 2 )
  {
    *a3 = *((hkpConstraintMotor::Self **)a2 + 48);
    *a4 = nullptr;
    *a5 = nullptr;
    goto LABEL_4;
  }
  if ( v5 == 7 )
  {
    *a3 = (hkpConstraintMotor::Self *)hkpRagdollConstraintData::getTwistMotor(a2);
    *a4 = (hkpConstraintMotor::Self *)hkpRagdollConstraintData::getConeMotor(a2);
    *a5 = (hkpConstraintMotor::Self *)hkpRagdollConstraintData::getPlaneMotor(a2);
LABEL_4:
    *(uint32_t *)self = 0;
    return self;
  }
  *a5 = nullptr;
  *a4 = nullptr;
  *a3 = nullptr;
  hkErrStream::Construct((hkErrStream::Self *)v7, (hkString::Self *)v8, 512);
  hkOstream::opShl((int)(uintptr_t)(v7), (hkString::Self *)"This type of constraint does not have motors");
  hkError::messageWarning((hkError::Self *)0xABBAE233, (int)(uintptr_t)(v8), "Data/hkpConstraintDataUtils.cpp", &dword_DC[2]);
  hkErrStream::Destroy((hkErrStream::Self *)v7);
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::Construct  (binary VA: 0x1aefe50)
// Original: hkpConstraintDrawer::hkpConstraintDrawer
// ----------------------------------------------------------------------------
void hkpConstraintDrawer::Construct(hkpConstraintDrawer::Self *self)
{
  hkpPrimitiveDrawer::Construct((hkpConstraintDrawer::Self *)((char *)self + 192));
  *((uint32_t *)self + 6) = 24;
  *((uint32_t *)self + 1) = 1061158912;
  *((uint32_t *)self + 2) = 1048576000;
  *((uint32_t *)self + 4) = 1056964608;
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 3) = 1065353216;
  *((uint32_t *)self + 5) = 1048576000;
  *((uint32_t *)self + 7) = 1065353216;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::drawPivots  (binary VA: 0x1af33a0)
// Original: hkpConstraintDrawer::drawPivots
// ----------------------------------------------------------------------------
int hkpConstraintDrawer::drawPivots(hkpConstraintDrawer::Self *self, int a2, int a3)
{
  hkpPrimitiveDrawer::displayOrientedPoint(
    (hkpConstraintDrawer::Self *)((char *)self + 192),
    (hkpConstraintDrawer::Self *)((char *)self + 64),
    (hkpConstraintDrawer::Self *)((char *)self + 96),
    *((float *)self + 2) * *((float *)self + 7),
    0xFFFF0000,
    a2,
    a3);
  return hkpPrimitiveDrawer::displayOrientedPoint(
           (hkpConstraintDrawer::Self *)((char *)self + 192),
           (hkpConstraintDrawer::Self *)((char *)self + 80),
           (hkpConstraintDrawer::Self *)((char *)self + 144),
           *((float *)self + 2) * *((float *)self + 7),
           0xFFFFFFFF,
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::drawBodyFrames  (binary VA: 0x1af3450)
// Original: hkpConstraintDrawer::drawBodyFrames
// ----------------------------------------------------------------------------
int hkpConstraintDrawer::drawBodyFrames(hkpConstraintDrawer::Self *self, int a2, int a3)
{
  typedef unsigned int _g4_t_v5;
  typedef unsigned int _g4_t_v6;
  typedef unsigned int _g4_t_v7;
  typedef g4_int128_t _g4_t_v8;
  typedef g4_int128_t _g4_t_v9;
  typedef g4_int128_t _g4_t_v10;
  typedef g4_int128_t _g4_t_v11;
  typedef g4_int128_t _g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v8)) > _g4_s3 ? (16u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v9)) > _g4_s4 ? (32u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v10)) > _g4_s5 ? (48u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v11)) > _g4_s6 ? (64u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v12)) > _g4_s7 ? (80u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v13)) > _g4_s8 ? (96u + sizeof(_g4_t_v13)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 80u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 96u);

  v7 = hkColor::rgbFromFloats((hkColor::Self *)0x3F800000, 0x3F800000u, 0.0, 0x3F800000u);
  v6 = hkColor::rgbFromFloats((hkColor::Self *)0x3F800000, 0x3F000000u, 0.0, 0x3F800000u);
  v5 = hkColor::rgbFromFloats((hkColor::Self *)0x3F800000, 0, 1.0, 0x3F800000u);
  v8 = *((g4_int128_t *)self + 6);
  v9 = *((g4_int128_t *)self + 7);
  v10 = *((g4_int128_t *)self + 8);
  v11 = *((g4_int128_t *)self + 9);
  v12 = *((g4_int128_t *)self + 10);
  v13[0] = *((uint32_t *)self + 44);
  v13[1] = *((uint32_t *)self + 45);
  v13[2] = *((uint32_t *)self + 46);
  v13[3] = *((uint32_t *)self + 47);
  hkpPrimitiveDrawer::displayArrow(
    (hkpConstraintDrawer::Self *)((char *)self + 192),
    (hkpConstraintDrawer::Self *)((char *)self + 32),
    (const hkVector4f::Self *)&v8,
    (const hkVector4f::Self *)&v9,
    0xFFFF0000,
    (float)(*((float *)self + 3) * *((float *)self + 7)) * 0.2f,
    a2,
    a3);
  hkpPrimitiveDrawer::displayArrow(
    (hkpConstraintDrawer::Self *)((char *)self + 192),
    (hkpConstraintDrawer::Self *)((char *)self + 32),
    (const hkVector4f::Self *)&v9,
    (const hkVector4f::Self *)&v10,
    0xFF008000,
    (float)(*((float *)self + 3) * *((float *)self + 7)) * 0.2f,
    a2,
    a3);
  hkpPrimitiveDrawer::displayArrow(
    (hkpConstraintDrawer::Self *)((char *)self + 192),
    (hkpConstraintDrawer::Self *)((char *)self + 32),
    (const hkVector4f::Self *)&v10,
    (const hkVector4f::Self *)&v8,
    0xFF0000FF,
    (float)(*((float *)self + 3) * *((float *)self + 7)) * 0.2f,
    a2,
    a3);
  hkpPrimitiveDrawer::displayArrow(
    (hkpConstraintDrawer::Self *)((char *)self + 192),
    (hkpConstraintDrawer::Self *)((char *)self + 48),
    (const hkVector4f::Self *)&v11,
    (const hkVector4f::Self *)&v12,
    v7,
    (float)(*((float *)self + 3) * *((float *)self + 7)) * 0.2f,
    a2,
    a3);
  hkpPrimitiveDrawer::displayArrow(
    (hkpConstraintDrawer::Self *)((char *)self + 192),
    (hkpConstraintDrawer::Self *)((char *)self + 48),
    (const hkVector4f::Self *)&v12,
    (const hkVector4f::Self *)v13,
    v6,
    (float)(*((float *)self + 3) * *((float *)self + 7)) * 0.2f,
    a2,
    a3);
  return hkpPrimitiveDrawer::displayArrow(
           (hkpConstraintDrawer::Self *)((char *)self + 192),
           (hkpConstraintDrawer::Self *)((char *)self + 48),
           (const hkVector4f::Self *)v13,
           (const hkVector4f::Self *)&v11,
           v5,
           (float)(*((float *)self + 3) * *((float *)self + 7)) * 0.2f,
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::setLineLength  (binary VA: 0x1af3800)
// Original: hkpConstraintDrawer::setLineLength
// ----------------------------------------------------------------------------
hkpConstraintDrawer::Self * hkpConstraintDrawer::setLineLength(hkpConstraintDrawer::Self *self, float a2)
{
  *(float *)self = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::setArcRadius  (binary VA: 0x1af3820)
// Original: hkpConstraintDrawer::setArcRadius
// ----------------------------------------------------------------------------
hkpConstraintDrawer::Self * hkpConstraintDrawer::setArcRadius(hkpConstraintDrawer::Self *self, float a2)
{
  *((float *)self + 1) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::setNumArcSegments  (binary VA: 0x1af3840)
// Original: hkpConstraintDrawer::setNumArcSegments
// ----------------------------------------------------------------------------
hkpConstraintDrawer::Self * hkpConstraintDrawer::setNumArcSegments(hkpConstraintDrawer::Self *self, int a2)
{
  *((uint32_t *)self + 6) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::setPivotSize  (binary VA: 0x1af3850)
// Original: hkpConstraintDrawer::setPivotSize
// ----------------------------------------------------------------------------
hkpConstraintDrawer::Self * hkpConstraintDrawer::setPivotSize(hkpConstraintDrawer::Self *self, float a2)
{
  *((float *)self + 2) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::setArrowSize  (binary VA: 0x1af3870)
// Original: hkpConstraintDrawer::setArrowSize
// ----------------------------------------------------------------------------
hkpConstraintDrawer::Self * hkpConstraintDrawer::setArrowSize(hkpConstraintDrawer::Self *self, float a2)
{
  *((float *)self + 3) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::setScale  (binary VA: 0x1af3890)
// Original: hkpConstraintDrawer::setScale
// ----------------------------------------------------------------------------
hkpConstraintDrawer::Self * hkpConstraintDrawer::setScale(hkpConstraintDrawer::Self *self, float a2)
{
  *((float *)self + 7) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConstraintDrawer::updateCommonParameters  (binary VA: 0x1af38b0)
// Original: hkpConstraintDrawer::updateCommonParameters
// ----------------------------------------------------------------------------
hkpConstraintDrawer::Self * hkpConstraintDrawer::updateCommonParameters(hkpConstraintDrawer::Self *self, const hkTransformf::Self *a2, const hkTransformf::Self *a3)
{
  *((uint32_t *)self + 36) = *(uint32_t *)a3;
  *((uint32_t *)self + 37) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 38) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 39) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 40) = *((uint32_t *)a3 + 4);
  *((uint32_t *)self + 41) = *((uint32_t *)a3 + 5);
  *((uint32_t *)self + 42) = *((uint32_t *)a3 + 6);
  *((uint32_t *)self + 43) = *((uint32_t *)a3 + 7);
  *((uint32_t *)self + 44) = *((uint32_t *)a3 + 8);
  *((uint32_t *)self + 45) = *((uint32_t *)a3 + 9);
  *((uint32_t *)self + 46) = *((uint32_t *)a3 + 10);
  *((uint32_t *)self + 47) = *((uint32_t *)a3 + 11);
  *((uint32_t *)self + 24) = *(uint32_t *)a2;
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 28) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 29) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 30) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 31) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 32) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 33) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 34) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 35) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 12) = *((uint32_t *)a3 + 12);
  *((uint32_t *)self + 13) = *((uint32_t *)a3 + 13);
  *((uint32_t *)self + 14) = *((uint32_t *)a3 + 14);
  *((uint32_t *)self + 15) = *((uint32_t *)a3 + 15);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 15);
  return self;
}


