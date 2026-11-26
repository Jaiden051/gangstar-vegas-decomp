#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSimulat.h"

// ----------------------------------------------------------------------------
// Function: hkpSimulation::staticClass  (binary VA: 0x172d9b0)
// Original: hkpSimulation::staticClass
// ----------------------------------------------------------------------------
void * hkpSimulation::staticClass()
{
  return &hkpSimulationClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::stepBeginSt  (binary VA: 0x17405f0)
// Original: hkpSimulation::stepBeginSt
// ----------------------------------------------------------------------------
int hkpSimulation::stepBeginSt()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::finishMtStep  (binary VA: 0x1740600)
// Original: hkpSimulation::finishMtStep
// ----------------------------------------------------------------------------
int hkpSimulation::finishMtStep()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::getMultithreadConfig  (binary VA: 0x1740610)
// Original: hkpSimulation::getMultithreadConfig
// ----------------------------------------------------------------------------
void hkpSimulation::getMultithreadConfig()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::setMultithreadConfig  (binary VA: 0x1740620)
// Original: hkpSimulation::setMultithreadConfig
// ----------------------------------------------------------------------------
void hkpSimulation::setMultithreadConfig()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::assertThereIsNoCollisionInformationForEntities  (binary VA: 0x176c540)
// Original: hkpSimulation::assertThereIsNoCollisionInformationForEntities
// ----------------------------------------------------------------------------
void hkpSimulation::assertThereIsNoCollisionInformationForEntities()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::removeCollisionInformationForAgent  (binary VA: 0x176c550)
// Original: hkpSimulation::removeCollisionInformationForAgent
// ----------------------------------------------------------------------------
void hkpSimulation::removeCollisionInformationForAgent()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::assertThereIsNoCollisionInformationForAgent  (binary VA: 0x176c560)
// Original: hkpSimulation::assertThereIsNoCollisionInformationForAgent
// ----------------------------------------------------------------------------
void hkpSimulation::assertThereIsNoCollisionInformationForAgent()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::warpTime  (binary VA: 0x176c570)
// Original: hkpSimulation::warpTime
// ----------------------------------------------------------------------------
void hkpSimulation::warpTime()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::Destroy  (binary VA: 0x176c580)
// Original: hkpSimulation::~hkpSimulation
// ----------------------------------------------------------------------------
void hkpSimulation::Destroy(hkpSimulation::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::stepDeltaTime  (binary VA: 0x176c5a0)
// Original: hkpSimulation::stepDeltaTime
// ----------------------------------------------------------------------------
int hkpSimulation::stepDeltaTime(hkpSimulation::Self *self, hkpWorld::Self *a2)
{
  unsigned int v2;
  int result;
  hkpWorld::Self *v4;

  v2 = *((uint32_t *)self + 10);
  if ( v2 <= 1 )
  {
    v4 = a2;
    G4_VCALL<void>(self, 24);
    v2 = *((uint32_t *)self + 10);
  }
  if ( (v2 & 0xFFFFFFFD) == 0 )
  {
    G4_VCALL<void>(self, 28);
    v2 = *((uint32_t *)self + 10);
  }
  if ( v2 != 3 && v2 != 0
    || (G4_VCALL<void>(self, 32), (result = *((uint32_t *)self + 10)) != 0) )
  {
    if ( hkpWorld::getMemoryWatchDog(*((hkpWorld::Self **)self + 3)) != 0 )
      hkpWorldMemoryUtil::tryToRecoverFromMemoryErrors(*((hkpWorldMemoryUtil::Self **)self + 3), v4);
    return *((uint32_t *)self + 10);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::processAgentResetCollisionInformation  (binary VA: 0x176c640)
// Original: hkpSimulation::processAgentResetCollisionInformation
// ----------------------------------------------------------------------------
int hkpSimulation::processAgentResetCollisionInformation(int a1, int a2, uint32_t *a3)
{
  return hkAgentNnMachine_InvalidateTimInAgent(a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::processAgentCollideDiscrete  (binary VA: 0x176c670)
// Original: hkpSimulation::processAgentCollideDiscrete
// ----------------------------------------------------------------------------
uint32_t * hkpSimulation::processAgentCollideDiscrete(int a1, int a2, int *a3, uint32_t *a4)
{
  int v4;
  uint32_t *result;

  *a4 = (uint32_t)(uintptr_t)(a4 + 4);
  a4[3084] = 2139095022;
  a4[3104] = 0;
  v4 = *a3;
  a3[24] = *a3 + 7952;
  a3[6] = *(uint32_t *)(v4 + (*(char *)(a2 + 12) << 6) + 7904);
  hkAgentNnMachine_ProcessAgent((uint8_t *)a2, (int)(uintptr_t)(a3), (int)(uintptr_t)(a4));
  result = hkOutOfMemoryState;
  if ( hkOutOfMemoryState[0] != 1 && a4 + 4 != (uint32_t *)*a4 )
    return (uint32_t *)(*(int (**)(uint32_t, uint32_t, uint32_t, int *, uint32_t *))(**(uint32_t **)(a2 + 8) + 32))(
                       *(uint32_t *)(a2 + 8),
                       *(uint32_t *)(a2 + 16),
                       *(uint32_t *)(a2 + 20),
                       a3,
                       a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::Destroy_ea176c730  (binary VA: 0x176c730)
// Original: hkpSimulation::~hkpSimulation
// ----------------------------------------------------------------------------
void hkpSimulation::Destroy_ea176c730(hkpSimulation::Self *self)
{
  int v1;
  int v2;

  hkpSimulation::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::Construct  (binary VA: 0x176c790)
// Original: hkpSimulation::hkpSimulation
// ----------------------------------------------------------------------------
void hkpSimulation::Construct(hkpSimulation::Self *self, hkpWorld::Self *a2)
{
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0208);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 8) = -1082130432;
  *((uint32_t *)self + 9) = 953267991;
  *((uint32_t *)self + 10) = 0;
  *((uint8_t *)self + 16) = 1;
  *((uint32_t *)self + 2) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::create  (binary VA: 0x176c7f0)
// Original: hkpSimulation::create
// ----------------------------------------------------------------------------
hkpSimulation::Self * hkpSimulation::create(hkpSimulation::Self *self)
{
  int address;
  hkpSimulation::Self *v2;

  *(uintptr_t *)(unk_2129F44) = (uintptr_t)(1);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpSimulation::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                          *(uint32_t *)(*(uint32_t *)address + 44),
                          44);
  hkpSimulation::Construct(v2, self);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::setFrameTimeMarker  (binary VA: 0x176c850)
// Original: hkpSimulation::setFrameTimeMarker
// ----------------------------------------------------------------------------
hkpSimulation::Self * hkpSimulation::setFrameTimeMarker(hkpSimulation::Self *self, float a2)
{
  *((float *)self + 8) = *((float *)self + 5) + a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::isSimulationAtMarker  (binary VA: 0x176c870)
// Original: hkpSimulation::isSimulationAtMarker
// ----------------------------------------------------------------------------
int hkpSimulation::isSimulationAtMarker(hkpSimulation::Self *self)
{
  int v1;
  int result;
  float v3; // xmm0_4

  result = 0;
  v3 = *((float *)self + 5);
  if ( v3 == *((float *)self + 8) )
  {
    LOBYTE(v1) = !__builtin_isunordered(v3, *((float *)self + 8));
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::isSimulationAtPsi  (binary VA: 0x176c890)
// Original: hkpSimulation::isSimulationAtPsi
// ----------------------------------------------------------------------------
int hkpSimulation::isSimulationAtPsi(hkpSimulation::Self *self)
{
  int v1;
  int result;
  float v3; // xmm0_4

  result = 0;
  v3 = *((float *)self + 6);
  if ( v3 == *((float *)self + 5) )
  {
    LOBYTE(v1) = !__builtin_isunordered(v3, *((float *)self + 5));
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::checkDeltaTimeIsOk  (binary VA: 0x176c8b0)
// Original: hkpSimulation::checkDeltaTimeIsOk
// ----------------------------------------------------------------------------
void hkpSimulation::checkDeltaTimeIsOk()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::reCollideAfterStepFailure  (binary VA: 0x176c8c0)
// Original: hkpSimulation::reCollideAfterStepFailure
// ----------------------------------------------------------------------------
int hkpSimulation::reCollideAfterStepFailure(hkpSimulation::Self *self)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  bool v6;
  int v7;
  float v9; // xmm1_4
  int *address;
  int v11;
  uint32_t *v12;
  uint64_t v13; // rax
  hkpSimulation::Self *v14;
  int *v15;
  int v16;
  int v17;
  uint32_t *v18;
  uint64_t v19; // rax
  int v20;
  uint32_t *v21;
  uint64_t v22; // rax
  hkpSimulation::Self *thisa;
  int *v33;
  int v34;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29[2];
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v25)) > _g4_s2 ? (16u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v26)) > _g4_s3 ? (20u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v27)) > _g4_s4 ? (24u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v28)) > _g4_s5 ? (28u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v29)) > _g4_s6 ? (32u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v30)) > _g4_s7 ? (40u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v31)) > _g4_s8 ? (44u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);

  hkpWorld::updateCollisionFilterOnWorld(*((uint32_t *)self + 3), 0, 1);
  v2 = *((float *)self + 6);
  if ( *((uint32_t *)self + 10) == 3 )
  {
    v9 = *((float *)self + 5);
    v29[1] = *((float *)self + 6);
    v4 = v2 - v9;
    v29[0] = v9;
    v5 = 0.0;
    v6 = v4 == 0.0;
    v30 = v4;
    if ( __builtin_isnan(v4) )
      goto LABEL_3;
  }
  else
  {
    v3 = *((float *)self + 7);
    v29[0] = *((float *)self + 6);
    v29[1] = v3 + v2;
    v30 = (float)(v3 + v2) - v2;
    v4 = v30;
    v5 = 0.0;
    v6 = v30 == 0.0;
    if ( __builtin_isnan(v4) )
    {
LABEL_3:
      v5 = 1.0 / v4;
      goto LABEL_4;
    }
  }
  if ( !v6 )
    goto LABEL_3;
LABEL_4:
  v7 = *(uint32_t *)self;
  v31 = v5;
  (*(void (**)(hkpSimulation::Self *, float *, int, int, int, int, int, int))(v7 + 76))(
    self,
    v29,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( hkOutOfMemoryState[0] == 1 )
  {
    address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v11 = *address;
    v12 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*address + 12) )
    {
      *v12 = (uint32_t)(uintptr_t)("Et");
      v13 = __rdtsc();
      v12[1] = v13;
      *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
    }
    return *((uint32_t *)self + 10);
  }
  else
  {
    if ( *((uint32_t *)self + 10) == 2 )
    {
      v14 = *((hkpSimulation::Self **)self + 3);
      *((float *)self + 6) = *((float *)self + 6) + *((float *)self + 7);
      if ( *((uint32_t *)v14 + 97) != 0 )
      {
        thisa = v14;
        v15 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v16 = *v15;
        v33 = v15;
        v17 = (int)(uintptr_t)(thisa);
        v18 = *(uint32_t **)(*v15 + 4);
        v34 = *(uint32_t *)(v16 + 4);
        if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(v16 + 12) )
        {
          *v18 = (uint32_t)(uintptr_t)("TtPostCollideCB");
          v19 = __rdtsc();
          *(uint32_t *)(v34 + 4) = v19;
          *(uint32_t *)(v16 + 4) = v34 + 12;
          v17 = *((uint32_t *)self + 3);
        }
        hkpWorldCallbackUtil::firePostCollideCallback(v17, (int)(uintptr_t)(v29));
        v20 = *v33;
        v21 = *(uint32_t **)(*v33 + 4);
        if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*v33 + 12) )
        {
          *v21 = (uint32_t)(uintptr_t)("Et");
          v22 = __rdtsc();
          v21[1] = v22;
          *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
        }
      }
      *((uint8_t *)self + 16) = 1;
    }
    *((uint32_t *)self + 10) = 0;
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::collide  (binary VA: 0x176ca70)
// Original: hkpSimulation::collide
// ----------------------------------------------------------------------------
int hkpSimulation::collide(hkpSimulation::Self *self)
{
  int *address;
  int v2;
  uint32_t *v3;
  uint64_t v4; // rax
  float v5; // xmm1_4
  float v6; // xmm1_4
  int v7;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  hkpWorld::Self *v12;
  int *v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint64_t v17; // rax
  int v18;
  uint32_t *v19;
  uint64_t v20; // rax
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef float _g4_t_v25[2];
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v24)) > _g4_s3 ? (12u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v25)) > _g4_s4 ? (16u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v26)) > _g4_s5 ? (24u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v27)) > _g4_s6 ? (28u + sizeof(_g4_t_v27)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v2 = *address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TtPhysics 2012");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  if ( *((uint32_t *)self + 10) != 0 )
  {
    v8 = hkpSimulation::reCollideAfterStepFailure(self);
  }
  else
  {
    v5 = *((float *)self + 7);
    v25[0] = *((float *)self + 6);
    v25[1] = v5 + v25[0];
    v26 = (float)(v5 + v25[0]) - v25[0];
    v6 = 0.0;
    if ( __builtin_isnan(v26) || v26 != 0.0 )
      v6 = 1.0 / v26;
    v7 = *(uint32_t *)self;
    v27 = v6;
    (*(void (**)(hkpSimulation::Self *, float *))(v7 + 76))(self, v25);
    if ( hkOutOfMemoryState[0] == 1 )
    {
      *((uint32_t *)self + 10) = 2;
      v8 = 2;
    }
    else
    {
      v12 = *((hkpWorld::Self **)self + 3);
      *((float *)self + 6) = *((float *)self + 6) + *((float *)self + 7);
      hkpWorld::checkConstraintsViolated(v12);
      if ( *(uint32_t *)(*((uint32_t *)self + 3) + 388) != 0 )
      {
        v22 = *((uint32_t *)self + 3);
        v13 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v14 = *v13;
        v23 = v13;
        v15 = v22;
        v16 = *(uint32_t **)(*v13 + 4);
        v21 = *(uint32_t *)(v14 + 4);
        if ( (unsigned int)(uintptr_t)(v16) < *(uint32_t *)(v14 + 12) )
        {
          *v16 = (uint32_t)(uintptr_t)("TtPostCollideCB");
          v17 = __rdtsc();
          *(uint32_t *)(v21 + 4) = v17;
          *(uint32_t *)(v14 + 4) = v21 + 12;
          v15 = *((uint32_t *)self + 3);
        }
        hkpWorldCallbackUtil::firePostCollideCallback(v15, (int)(uintptr_t)(v25));
        v18 = *v23;
        v19 = *(uint32_t **)(*v23 + 4);
        v24 = v19;
        if ( (unsigned int)(uintptr_t)(v19) < *(uint32_t *)(*v23 + 12) )
        {
          *v19 = (uint32_t)(uintptr_t)("Et");
          v20 = __rdtsc();
          v24[1] = v20;
          *(uint32_t *)(v18 + 4) = (uint32_t)(uintptr_t)(v24 + 3);
        }
      }
      *((uint8_t *)self + 16) = 1;
      *((uint32_t *)self + 10) = 0;
      v8 = 0;
    }
  }
  v9 = *(uint32_t **)(v2 + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v2 + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("Et");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::snapSimulateTimeAndGetTimeToAdvanceTo  (binary VA: 0x176cc30)
// Original: hkpSimulation::snapSimulateTimeAndGetTimeToAdvanceTo
// ----------------------------------------------------------------------------
long double hkpSimulation::snapSimulateTimeAndGetTimeToAdvanceTo(hkpSimulation::Self *self)
{
  __m128 v1;
  float v2; // xmm4_4
  __m128 v4;
  __m128 v5;
g4_m128_raw(v1) = *((unsigned int *)self + 8);
  if (g4_m128_lane<float>(v1, 0) == -1.0 )
    return *((float *)self + 6);
g4_m128_raw(v4) = *((unsigned int *)self + 6);
  v2 = *((float *)self + 6);
  if ( *((float *)self + 9) > fabs(g4_m128_lane<float>(v1, 0) -g4_m128_lane<float>(v4, 0)) )
  {
    *((uint32_t *)self + 8) =g4_m128_lane<int32_t>(v4, 0);
    if (g4_m128_lane<float>(v4, 0) == -1.0 )
      return v2;
  }
  else
  {
    v5 = _mm_cmplt_ss(v4, v1);
g4_m128_lane<int32_t>(v4, 0) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v5, v1), 0) |g4_m128_lane<int32_t>(v4, 0) &g4_m128_lane<int32_t>(v5, 0);
  }
  return g4_m128_lane<float>(v4, 0);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::advanceTime  (binary VA: 0x176ccd0)
// Original: hkpSimulation::advanceTime
// ----------------------------------------------------------------------------
int hkpSimulation::advanceTime(hkpWorldCallbackUtil::Self **self)
{
  bool v1;
  hkpWorldCallbackUtil::Self *v2;
  int *address;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint64_t v9; // rax
  float TimeToAdvanceTo;

  TimeToAdvanceTo = hkpSimulation::snapSimulateTimeAndGetTimeToAdvanceTo((hkpSimulation::Self *)self);
  v1 = TimeToAdvanceTo < *((float *)self + 8);
  *((float *)self + 5) = TimeToAdvanceTo;
  if ( !v1 )
  {
    v2 = *(self + 3);
    if ( *((uint32_t *)v2 + 91) != 0 )
    {
      address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
      v4 = *address;
      v5 = *(uint32_t **)(*address + 4);
      if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
      {
        *v5 = (uint32_t)(uintptr_t)("TtPostSimCb");
        v9 = __rdtsc();
        v5[1] = v9;
        *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
        v2 = *(self + 3);
      }
      hkpWorldCallbackUtil::firePostSimulationCallback(v2);
      v6 = *(uint32_t **)(v4 + 4);
      if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(v4 + 12) )
      {
        *v6 = (uint32_t)(uintptr_t)("Et");
        v7 = __rdtsc();
        v6[1] = v7;
        *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
      }
    }
  }
  *(self + 10) = nullptr;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::collideEntitiesBroadPhaseDiscrete  (binary VA: 0x176cd80)
// Original: hkpSimulation::collideEntitiesBroadPhaseDiscrete
// ----------------------------------------------------------------------------
int hkpSimulation::collideEntitiesBroadPhaseDiscrete(hkpSimulation::Self *self, hkpEntity::Self **a2, int a3, hkpWorld::Self *a4, int a5, int a6, int a7, int a8, char *a9, char *a10, int a11, int *a12, hkLifoAllocator::Self **a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, char *a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, char *a31, int a32)
{
  int *address;
  int v33;
  uint32_t *v34;
  uint64_t v35; // rax
  int v36;
  hkLifoAllocator::Self **v37;
  char *v38;
  int v39;
  hkLifoAllocator::Self *v40;
  int v41;
  hkLifoAllocator::Self *v42;
  int v43;
  int v44;
  uint32_t *v45;
  uint64_t v46; // rax
  uint32_t *v47;
  int v49;
  int v50;
  int v51;
  int v52;
  uint32_t *v53;
  int v54;
  uint32_t *v55;
  uint64_t v56; // rax
  int v57;
  hkLifoAllocator::Self *v58;
  hkLifoAllocator::Self *v59;
  int v60;
  uint32_t *v61;
  uint64_t v62; // rax
  int v63;
  uint32_t *v64;
  int Instance;
  int v66;
  uint32_t *v67;
  int v68;
  int v69;
  uint32_t *v70;
  uint64_t v71; // rax
  hkLifoAllocator::Self *v72;
  signed int v73;
  hkLifoAllocator::Self *v74;
  signed int v75;
  int result;
  uint64_t v77; // rax
  uint64_t v78; // rax
  hkLifoAllocator::Self **v79;
  hkLifoAllocator::Self *v80;
  signed int v81;
  int v82;
  hkLifoAllocator::Self *v83;
  signed int v84;
  int v85;
  uint32_t *v86;
  uint64_t v87; // rax
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef signed int _g4_t_v90;
  typedef signed int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef hkpSimulation::Self *_g4_t_v94;
  typedef int *_g4_t_v95;
  typedef hkLifoAllocator::Self **_g4_t_v96;
  typedef char *_g4_t_v97;
  typedef uint32_t *_g4_t_v98;
  typedef hkLifoAllocator::Self **_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef uint32_t *_g4_t_v103;
  typedef uint32_t _g4_t_v104[4];
  typedef int _g4_t_v105;
  typedef uint32_t _g4_t_v106[4];
  typedef char *_g4_t_v107;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v88)) > _g4_s0 ? (8u + sizeof(_g4_t_v88)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v89)) > _g4_s1 ? (12u + sizeof(_g4_t_v89)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v90)) > _g4_s2 ? (28u + sizeof(_g4_t_v90)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v91)) > _g4_s3 ? (32u + sizeof(_g4_t_v91)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v92)) > _g4_s4 ? (36u + sizeof(_g4_t_v92)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v93)) > _g4_s5 ? (40u + sizeof(_g4_t_v93)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v94)) > _g4_s6 ? (44u + sizeof(_g4_t_v94)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v95)) > _g4_s7 ? (48u + sizeof(_g4_t_v95)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v96)) > _g4_s8 ? (52u + sizeof(_g4_t_v96)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v97)) > _g4_s9 ? (56u + sizeof(_g4_t_v97)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v98)) > _g4_s10 ? (60u + sizeof(_g4_t_v98)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v99)) > _g4_s11 ? (60u + sizeof(_g4_t_v99)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v100)) > _g4_s12 ? (64u + sizeof(_g4_t_v100)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v101)) > _g4_s13 ? (68u + sizeof(_g4_t_v101)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v102)) > _g4_s14 ? (72u + sizeof(_g4_t_v102)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v103)) > _g4_s15 ? (76u + sizeof(_g4_t_v103)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v104)) > _g4_s16 ? (80u + sizeof(_g4_t_v104)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v105)) > _g4_s17 ? (96u + sizeof(_g4_t_v105)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v106)) > _g4_s18 ? (112u + sizeof(_g4_t_v106)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v107)) > _g4_s19 ? (128u + sizeof(_g4_t_v107)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 28u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 32u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 36u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 40u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 44u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 48u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 56u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 60u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 60u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 64u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 68u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 72u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 76u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 80u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 96u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 112u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 128u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v33 = *address;
  v95 = address;
  v34 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v34) < *(uint32_t *)(*address + 12) )
  {
    *v34 = (uint32_t)(uintptr_t)("LtBroadPhase");
    v34[3] = (uint32_t)(uintptr_t)("StInitMem");
    v35 = __rdtsc();
    v34[1] = v35;
    *(uint32_t *)(v33 + 4) = (uint32_t)(uintptr_t)(v34 + 4);
  }
  v104[0] = 0;
  v104[1] = 0;
  v104[2] = 0x80000000;
  v105 = *(uint32_t *)(a3 + 876);
  v36 = v105;
  if ( v105 != 0 )
  {
    v79 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v80 = *v79;
    v99 = v79;
    v81 = (8 * v105 + 127) & 0xFFFFFF80;
    v82 = *((uint32_t *)v80 + 3);
    if ( v81 <= *((uint32_t *)v80 + 2) && (unsigned int)(v81 + v82) <= *((uint32_t *)v80 + 4) )
      *((uint32_t *)v80 + 3) = v81 + v82;
    else
      v82 = hkLifoAllocator::allocateFromNewSlab(v80, (8 * v105 + 127) & 0xFFFFFF80);
    v104[0] = v82;
    v104[2] = v36 | 0x80000000;
    v104[3] = v82;
    v106[0] = 0;
    v106[1] = 0;
    v106[2] = 0x80000000;
    v37 = v99;
    v107 = *(char **)(a3 + 876);
    v38 = v107;
    if ( v107 != nullptr )
    {
      v83 = *v99;
      v84 = (8 * (uint32_t)(uintptr_t)(v107) + 127) & 0xFFFFFF80;
      v39 = *((uint32_t *)*v99 + 3);
      if ( v84 <= *((uint32_t *)*v99 + 2) && (unsigned int)(v84 + v39) <= *((uint32_t *)v83 + 4) )
      {
        *((uint32_t *)v83 + 3) = v84 + v39;
      }
      else
      {
        v97 = v107;
        v39 = hkLifoAllocator::allocateFromNewSlab(v83, (8 * (uint32_t)(uintptr_t)(v107) + 127) & 0xFFFFFF80);
        v38 = v107;
      }
      v37 = v99;
      v96 = v99;
    }
    else
    {
      v96 = v99;
      v39 = 0;
    }
  }
  else
  {
    v37 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v96 = v37;
    v104[0] = 0;
    v104[2] = 0x80000000;
    v104[3] = 0;
    v106[1] = 0;
    v107 = nullptr;
    v38 = nullptr;
    v39 = 0;
  }
  v40 = *v37;
  v106[2] = (unsigned int)(uintptr_t)(v38) | 0x80000000;
  v106[3] = v39;
  v106[0] = v39;
  v41 = *((uint32_t *)v40 + 3);
  v91 = (32 * (uint32_t)(uintptr_t)(a2) + 127) & 0xFFFFFF80;
  v93 = v41;
  if ( v91 <= *((uint32_t *)v40 + 2) && (unsigned int)(v91 + v41) <= *((uint32_t *)v40 + 4) )
    *((uint32_t *)v40 + 3) = v91 + v41;
  else
    v93 = hkLifoAllocator::allocateFromNewSlab(v40, v91);
  v90 = (4 * (uint32_t)(uintptr_t)(a2) + 127) & 0xFFFFFF80;
  v42 = *v96;
  v43 = *((uint32_t *)*v96 + 3);
  v92 = v43;
  if ( v90 <= *((uint32_t *)*v96 + 2) && (unsigned int)(v90 + v43) <= *((uint32_t *)v42 + 4) )
    *((uint32_t *)v42 + 3) = v90 + v43;
  else
    v92 = hkLifoAllocator::allocateFromNewSlab(v42, v90);
  v44 = *v95;
  v45 = *(uint32_t **)(*v95 + 4);
  if ( (unsigned int)(uintptr_t)(v45) < *(uint32_t *)(*v95 + 12) )
  {
    *v45 = (uint32_t)(uintptr_t)("StCalcAabbs");
    v46 = __rdtsc();
    v45[1] = v46;
    *(uint32_t *)(v44 + 4) = (uint32_t)(uintptr_t)(v45 + 3);
  }
  v47 = (uint32_t *)v93;
  if ( (int)(uintptr_t)(a2) - 1 >= 0 )
  {
    v97 = (char *)a2 - 1;
    v98 = (uint32_t *)v92;
    do
    {
      v103 = *(uint32_t **)self;
      v53 = v103;
      *v98 = (uint32_t)(uintptr_t)(v103 + 9);
      if ( v53[12] > v53[16] )
      {
        v94 = self;
        hkpEntityAabbUtil::entityBatchRecalcAabb(*(uint32_t *)(a3 + 112), (int)(uintptr_t)(&v103), 1);
        self = v94;
      }
      v49 = v53[12];
      v47[1] = v53[13];
      *v47 = v49;
      v50 = v53[14];
      v47[3] = v53[15];
      v47[2] = v50;
      v51 = v53[16];
      v47[5] = v53[17];
      v47[4] = v51;
      v52 = v53[18];
      v47[7] = v53[19];
      v47[6] = v52;
      ++v98;
      v47 += 8;
      --v97;
      self = (hkpSimulation::Self *)((char *)self + 4);
    }
    while ( v97 != (char *)-1 );
  }
  v54 = *v95;
  v55 = *(uint32_t **)(*v95 + 4);
  if ( (unsigned int)(uintptr_t)(v55) < *(uint32_t *)(*v95 + 12) )
  {
    *v55 = (uint32_t)(uintptr_t)("St3AxisSweep");
    v56 = __rdtsc();
    v55[1] = v56;
    *(uint32_t *)(v54 + 4) = (uint32_t)(uintptr_t)(v55 + 3);
  }
  v57 = v92;
  (*(void (**)(uint32_t, int, int, hkpEntity::Self **, uint32_t *, uint32_t *, int, int, signed int, signed int, uint32_t **, signed int, signed int, int, int, hkpSimulation::Self *, int *, hkLifoAllocator::Self **, char *, uint32_t *, int, int, int, uint32_t *))(**(uint32_t **)(a3 + 88) + 56))(
    *(uint32_t *)(a3 + 88),
    v92,
    v93,
    a2,
    v104,
    v106,
    v88,
    v89,
    v90,
    v91,
    &v103,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v106,
    v100,
    v101,
    v102,
    v103);
  v58 = *a13;
  if ( a7 > *((uint32_t *)*a13 + 2)
    || *((hkpWorld::Self **)v58 + 3) != (hkpWorld::Self *)((char *)a4 + v57)
    || a9 == *((char **)v58 + 5) )
  {
    hkLifoAllocator::slowBlockFree(*a13, a9, (int)(uintptr_t)(a4));
  }
  else
  {
    *((uint32_t *)v58 + 3) = (uint32_t)(uintptr_t)(a9);
  }
  v59 = *a13;
  if ( a8 > *((uint32_t *)*a13 + 2) || *((char **)v59 + 3) != &a10[a5] || a10 == *((char **)v59 + 5) )
    hkLifoAllocator::slowBlockFree(*a13, a10, a5);
  else
    *((uint32_t *)v59 + 3) = (uint32_t)(uintptr_t)(a10);
  if ( a29 + a21 <= 0 )
    goto LABEL_37;
  v60 = *a12;
  v61 = *(uint32_t **)(*a12 + 4);
  if ( (unsigned int)(uintptr_t)(v61) < *(uint32_t *)(*a12 + 12) )
  {
    *v61 = (uint32_t)(uintptr_t)("StRemoveDup");
    v62 = __rdtsc();
    v61[1] = v62;
    *(uint32_t *)(v60 + 4) = (uint32_t)(uintptr_t)(v61 + 3);
  }
  hkpTypedBroadPhaseDispatcher::removeDuplicates(v104, a15);
  v63 = *a12;
  v64 = *(uint32_t **)(*a12 + 4);
  if ( (unsigned int)(uintptr_t)(v64) < *(uint32_t *)(*a12 + 12) )
  {
    *v64 = (uint32_t)(uintptr_t)("StRemoveAgt");
    v77 = __rdtsc();
    v64[1] = v77;
    *(uint32_t *)(v63 + 4) = (uint32_t)(uintptr_t)(v64 + 3);
  }
  hkpTypedBroadPhaseDispatcher::removePairs(*(uint32_t *)(a3 + 92), a28, a29);
  Instance = hkMemorySystem::getInstance();
  if ( G4_VCALL<uint8_t>(Instance, 36, 640 * a21) != 0 )
  {
    v66 = *a12;
    v67 = *(uint32_t **)(*a12 + 4);
    if ( (unsigned int)(uintptr_t)(v67) < *(uint32_t *)(*a12 + 12) )
    {
      *v67 = (uint32_t)(uintptr_t)("StAddAgt");
      v78 = __rdtsc();
      v67[1] = v78;
      *(uint32_t *)(v66 + 4) = (uint32_t)(uintptr_t)(v67 + 3);
    }
    v68 = 0;
    if ( *(uint32_t *)(a3 + 116) != 0 )
      v68 = *(uint32_t *)(a3 + 116) + 8;
    hkpTypedBroadPhaseDispatcher::addPairs(*(uint32_t *)(a3 + 92), a20, a21, v68);
LABEL_37:
    v69 = *a12;
    v70 = *(uint32_t **)(*a12 + 4);
    if ( (unsigned int)(uintptr_t)(v70) < *(uint32_t *)(*a12 + 12) )
    {
      *v70 = (uint32_t)(uintptr_t)("lt");
      v71 = __rdtsc();
      v70[1] = v71;
      *(uint32_t *)(v69 + 4) = (uint32_t)(uintptr_t)(v70 + 3);
    }
    goto LABEL_39;
  }
  hkSetOutOfMemoryState(1);
  v85 = *a12;
  v86 = *(uint32_t **)(*a12 + 4);
  if ( (unsigned int)(uintptr_t)(v86) < *(uint32_t *)(*a12 + 12) )
  {
    *v86 = (uint32_t)(uintptr_t)("lt");
    v87 = __rdtsc();
    v86[1] = v87;
    *(uint32_t *)(v85 + 4) = (uint32_t)(uintptr_t)(v86 + 3);
  }
LABEL_39:
  v72 = *a13;
  v73 = (8 * a32 + 127) & 0xFFFFFF80;
  if ( v73 > *((uint32_t *)*a13 + 2) || *((char **)v72 + 3) != &a31[v73] || a31 == *((char **)v72 + 5) )
    hkLifoAllocator::slowBlockFree(v72, a31, (8 * a32 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v72 + 3) = (uint32_t)(uintptr_t)(a31);
  if ( a30 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      a28,
      8 * a30);
  v74 = *a13;
  v75 = (8 * a24 + 127) & 0xFFFFFF80;
  if ( v75 > *((uint32_t *)*a13 + 2) || *((char **)v74 + 3) != &a23[v75] || a23 == *((char **)v74 + 5) )
    hkLifoAllocator::slowBlockFree(v74, a23, (8 * a24 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v74 + 3) = (uint32_t)(uintptr_t)(a23);
  result = a22;
  if ( a22 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             a20,
             8 * a22);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::applyActions  (binary VA: 0x176d490)
// Original: hkpSimulation::applyActions
// ----------------------------------------------------------------------------
int hkpSimulation::applyActions(hkpSimulation::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v5 = 0;
  v6 = *((uint32_t *)self + 3);
  result = *(uint32_t *)(v6 + 44);
  if ( result > 0 )
  {
    do
    {
      v2 = *(uint32_t *)(*(uint32_t *)(v6 + 40) + 4 * v5);
      if ( *(int *)(v2 + 64) > 0 )
      {
        v3 = 0;
        do
        {
          v4 = *(uint32_t *)(*(uint32_t *)(v2 + 60) + 4 * v3++);
          G4_VCALL<void>(v4, 20, *((uint32_t *)self + 3) + 480);
        }
        while ( *(uint32_t *)(v2 + 64) > v3 );
        result = *(uint32_t *)(v6 + 44);
      }
      ++v5;
    }
    while ( v5 < result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::integrate  (binary VA: 0x176d930)
// Original: hkpSimulation::integrate
// ----------------------------------------------------------------------------
int hkpSimulation::integrate(hkpSimulation::Self *self, int a2)
{
  int *address;
  int v3;
  uint32_t *v4;
  uint64_t v5; // rax
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float *v9;
  float v10;
  float v11;
  float v12;
  float *v13;
  int v14;
  uint32_t *v15;
  uint64_t v16; // rax
  int v18;
  int v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TtPhysics 2012");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v21 = *((float *)self + 6);
  v7 = v21;
  v6 = v21;
  *((float *)self + 7) = *(float *)&a2;
  v22 = v7 + *(float *)&a2;
  v23 = (float)(v7 + *(float *)&a2) - v6;
  v8 = 0.0;
  if ( v23 != 0.0 )
    v8 = 1.0 / v23;
  v9 = *((float **)self + 3);
  v24 = v8;
  v10 = v21;
  v9[121] = v22;
  v9[122] = v23;
  v11 = v24;
  v9[120] = v10;
  v9[123] = v11;
  v12 = v23;
  v13 = *(float **)(*((uint32_t *)self + 3) + 112);
  v13[20] = v10;
  v13[21] = v22;
  v13[23] = v24;
  v13[22] = v12;
  (*(void (**)(uint32_t, uint32_t, float *, int, int, int, float *, uint32_t))(**(uint32_t **)(*((uint32_t *)self + 3)
                                                                                               + 76)
                                                                                 + 24))(
    *(uint32_t *)(*((uint32_t *)self + 3) + 76),
    *((uint32_t *)self + 3),
    &v21,
    v18,
    v19,
    v20,
    &v21,
    *((uint32_t *)self + 3));
  v14 = hkpSimulation::integrateInternal(self, a2);
  *((uint32_t *)self + 10) = v14;
  if ( v14 == 0 )
    *((uint8_t *)self + 16) = 0;
  v15 = *(uint32_t **)(v3 + 4);
  if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(v3 + 12) )
  {
    *v15 = (uint32_t)(uintptr_t)("Et");
    v16 = __rdtsc();
    v15[1] = v16;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
  }
  return v14;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::processAgentsOfEntities  (binary VA: 0x176e140)
// Original: hkpSimulation::processAgentsOfEntities
// ----------------------------------------------------------------------------
void hkpSimulation::processAgentsOfEntities(int a1, int a2, int a3, int a4, char *a5, int a6, int a7)
{
  int v7;
  int v8;
  void (*v9)(uint32_t *, int, int, float **);
  unsigned int *v10;
  signed int Key;
  int v12;
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  __m128i v21;
  __m128i v22;
  float v23; // xmm4_4
  int v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm4_4
  float v27; // xmm7_4
  __m128i v28;
  int v29;
  int v30; // xmm0_4
  float v31; // xmm3_4
  __m128 v32;
  float v33; // xmm5_4
  int v34;
  __m128 v35;
  __m128 v36;
  float v37; // xmm1_4
  __m128 v38;
  float v39; // xmm0_4
  float v40; // xmm2_4
  int v41;
  int v42;
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm3_4
  float v46; // xmm5_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  void (*v58)(uint32_t *, int, int, float **);
  __m128i v59;
  float v60; // xmm2_4
  float v61; // xmm1_4
  __m128i v62;
  float v63; // xmm5_4
  int v64;
  int v65;
  float v66; // xmm4_4
  float v67; // xmm0_4
  float v68; // xmm4_4
  float v69; // xmm0_4
  float v70; // xmm3_4
  float v71; // xmm5_4
  float v72; // xmm4_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm0_4
  float v76; // xmm4_4
  float v77; // xmm3_4
  float v78; // xmm2_4
  float v79; // xmm1_4
  void (*v80)(uint32_t *, int, int, float **);
  float v81; // xmm3_4
  float v82; // xmm5_4
  float v83; // xmm4_4
  float v84; // xmm2_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm4_4
  float v88; // xmm3_4
  float v89; // xmm2_4
  float v90; // xmm1_4
  void (*v91)(uint32_t *, int, int, float **);
  void (*v92)(uint32_t *, int, int, float **);
  int v93;
  typedef int *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_i;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef hkRotationf::Self *_g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef uint64_t _g4_t_v108 __attribute__((aligned(1)));
  typedef uint32_t *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_j;
  typedef float _g4_t_v112[4];
  typedef uint32_t _g4_t_v113[2];
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122[4];
  typedef float _g4_t_v123[4];
  typedef float _g4_t_v124[4];
  typedef uint32_t _g4_t_v125[16];
  typedef float *_g4_t_v126;
  typedef int _g4_t_v127;
  typedef float _g4_t_v128[4];
  typedef float _g4_t_v129;
  typedef uint64_t _g4_t_v130 __attribute__((aligned(1)));
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  enum : size_t {
    _g4_s0 = 12816u,
    _g4_s1 = (8u + sizeof(_g4_t_v94)) > _g4_s0 ? (8u + sizeof(_g4_t_v94)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v95)) > _g4_s1 ? (36u + sizeof(_g4_t_v95)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v96)) > _g4_s2 ? (40u + sizeof(_g4_t_v96)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v97)) > _g4_s3 ? (44u + sizeof(_g4_t_v97)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v98)) > _g4_s4 ? (56u + sizeof(_g4_t_v98)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v99)) > _g4_s5 ? (56u + sizeof(_g4_t_v99)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_i)) > _g4_s6 ? (60u + sizeof(_g4_t_i)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v101)) > _g4_s7 ? (68u + sizeof(_g4_t_v101)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v102)) > _g4_s8 ? (72u + sizeof(_g4_t_v102)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v103)) > _g4_s9 ? (76u + sizeof(_g4_t_v103)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v104)) > _g4_s10 ? (80u + sizeof(_g4_t_v104)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v105)) > _g4_s11 ? (80u + sizeof(_g4_t_v105)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v106)) > _g4_s12 ? (84u + sizeof(_g4_t_v106)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v107)) > _g4_s13 ? (96u + sizeof(_g4_t_v107)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v108)) > _g4_s14 ? (100u + sizeof(_g4_t_v108)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v109)) > _g4_s15 ? (112u + sizeof(_g4_t_v109)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v110)) > _g4_s16 ? (120u + sizeof(_g4_t_v110)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_j)) > _g4_s17 ? (124u + sizeof(_g4_t_j)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v112)) > _g4_s18 ? (128u + sizeof(_g4_t_v112)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v113)) > _g4_s19 ? (144u + sizeof(_g4_t_v113)) : _g4_s19,
    _g4_s21 = (152u + sizeof(_g4_t_v114)) > _g4_s20 ? (152u + sizeof(_g4_t_v114)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v115)) > _g4_s21 ? (160u + sizeof(_g4_t_v115)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v116)) > _g4_s22 ? (164u + sizeof(_g4_t_v116)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v117)) > _g4_s23 ? (168u + sizeof(_g4_t_v117)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v118)) > _g4_s24 ? (176u + sizeof(_g4_t_v118)) : _g4_s24,
    _g4_s26 = (180u + sizeof(_g4_t_v119)) > _g4_s25 ? (180u + sizeof(_g4_t_v119)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v120)) > _g4_s26 ? (184u + sizeof(_g4_t_v120)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v121)) > _g4_s27 ? (188u + sizeof(_g4_t_v121)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v122)) > _g4_s28 ? (192u + sizeof(_g4_t_v122)) : _g4_s28,
    _g4_s30 = (208u + sizeof(_g4_t_v123)) > _g4_s29 ? (208u + sizeof(_g4_t_v123)) : _g4_s29,
    _g4_s31 = (224u + sizeof(_g4_t_v124)) > _g4_s30 ? (224u + sizeof(_g4_t_v124)) : _g4_s30,
    _g4_s32 = (240u + sizeof(_g4_t_v125)) > _g4_s31 ? (240u + sizeof(_g4_t_v125)) : _g4_s31,
    _g4_s33 = (304u + sizeof(_g4_t_v126)) > _g4_s32 ? (304u + sizeof(_g4_t_v126)) : _g4_s32,
    _g4_s34 = (308u + sizeof(_g4_t_v127)) > _g4_s33 ? (308u + sizeof(_g4_t_v127)) : _g4_s33,
    _g4_s35 = (320u + sizeof(_g4_t_v128)) > _g4_s34 ? (320u + sizeof(_g4_t_v128)) : _g4_s34,
    _g4_s36 = (336u + sizeof(_g4_t_v129)) > _g4_s35 ? (336u + sizeof(_g4_t_v129)) : _g4_s35,
    _g4_s37 = (340u + sizeof(_g4_t_v130)) > _g4_s36 ? (340u + sizeof(_g4_t_v130)) : _g4_s36,
    _g4_s38 = (12640u + sizeof(_g4_t_v131)) > _g4_s37 ? (12640u + sizeof(_g4_t_v131)) : _g4_s37,
    _g4_s39 = (12672u + sizeof(_g4_t_v132)) > _g4_s38 ? (12672u + sizeof(_g4_t_v132)) : _g4_s38,
    _g4_s40 = (12676u + sizeof(_g4_t_v133)) > _g4_s39 ? (12676u + sizeof(_g4_t_v133)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 8u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 36u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 40u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 44u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 56u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 56u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 60u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 68u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 72u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 76u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 80u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 80u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 84u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 96u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 100u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 112u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 120u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 124u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 128u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 144u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 152u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 160u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 164u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 168u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 176u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 180u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 184u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 188u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 192u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 208u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 224u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 240u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 304u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 308u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 320u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 336u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 340u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 12640u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 12672u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 12676u);

  v113[0] = 0;
  v113[1] = 0;
  v114 = -1;
  if ( a3 == 0 )
  {
    v131 = 2139095022;
    v132 = 0;
    v133 = 0;
    v127 = 0;
LABEL_3:
    v116 = 0;
    goto LABEL_4;
  }
  hkMapBase_unsigned_long_unsigned_l_393416::reserve(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v113,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    a3);
  v131 = 2139095022;
  v132 = 0;
  v133 = 0;
  v127 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0x80000000;
  if ( a3 <= 0 )
    goto LABEL_3;
  v109 = (uint32_t *)(a1 + a6);
  for ( i = 0; i != a3; ++i )
  {
    v7 = *(uint32_t *)(a2 + 4 * i);
    hkMapBase_unsigned_long_unsigned_l_393416::insert(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v113,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      v7 + 16,
      0);
    hkpLinkedCollidable::getCollisionEntriesSorted(v7 + 16, (int)(uintptr_t)(&v115), v94);
    for ( j = 0; v116 > j; ++j )
    {
      v10 = (unsigned int *)(v115 + 8 * j);
      Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v113,
              v10[1]);
      if ( Key > v114 )
      {
        v110 = *v10;
        v12 = *(char *)(*(uint32_t *)(v110 + 16) + 16) + *(uint32_t *)(v110 + 16);
        if ( *(uint8_t *)(v12 + 232) == 5 )
          v8 = *(uint32_t *)(*(uint32_t *)(*v10 + 20) + *(char *)(*(uint32_t *)(*v10 + 20) + 16) + 200);
        else
          v8 = *(uint32_t *)(v12 + 200);
        v127 = v8;
        hkAgentNnMachine_InvalidateTimInAgent(v110, (uint32_t *)a4);
        v9 = (void (*)(uint32_t *, int, int, float **))a5;
        if ( ((uint8_t)(uintptr_t)(a5) & 1) != 0 )
          v9 = *(void (**)(uint32_t *, int, int, float **))&a5[*v109 - 1];
        v9(v109, v110, a4, &v126);
        if ( a7 != 1 || v126 == v128 )
          goto LABEL_13;
        v102 = *(float *)(v7 + 352);
        v125[0] = *(uint32_t *)(v7 + 240);
        v13 = *(float *)(v7 + 356);
        v14 = *(float *)(v7 + 364);
        v125[1] = *(uint32_t *)(v7 + 244);
        v106 = v13;
        v15 = *(float *)(v7 + 360);
        v125[2] = *(uint32_t *)(v7 + 248);
        v101 = v15;
        v103 = v14;
        v125[3] = *(uint32_t *)(v7 + 252);
        v125[4] = *(uint32_t *)(v7 + 256);
        v125[5] = *(uint32_t *)(v7 + 260);
        v125[6] = *(uint32_t *)(v7 + 264);
        v125[7] = *(uint32_t *)(v7 + 268);
        v125[8] = *(uint32_t *)(v7 + 272);
        v125[9] = *(uint32_t *)(v7 + 276);
        v125[10] = *(uint32_t *)(v7 + 280);
        v125[11] = *(uint32_t *)(v7 + 284);
        v125[12] = *(uint32_t *)(v7 + 288);
        v125[13] = *(uint32_t *)(v7 + 292);
        v107 = v129;
        v125[14] = *(uint32_t *)(v7 + 296);
        v125[15] = *(uint32_t *)(v7 + 300);
        v108 = v130;
        v16 = *((float *)&v130 + 1);
        if ( v7 + 16 != *(uint32_t *)(*v10 + 16) )
        {
          v107 = -v129;
          v108 = v130 ^ 0x8000000080000000LL;
          LODWORD(v16) = HIDWORD(v130) ^ 0x80000000;
        }
        v17 = *(float *)(v7 + 324);
        v18 = *(float *)(v7 + 328);
        v121 = 0.0;
        v19 = v17 - v128[1];
        v20 = v18 - v128[2];
g4_m128_raw(v21) = *(unsigned int *)(v7 + 320);
        *(float *)g4_m128_ptr<int32_t>(v21) = *(float *)g4_m128_ptr<int32_t>(v21) - v128[0];
        v118 = (float)(*(float *)&v108 * v20) - (float)(v16 * v19);
        v119 = (float)(v16 * *(float *)g4_m128_ptr<int32_t>(v21)) - (float)(v107 * v20);
        v120 = (float)(v107 * v19) - (float)(*(float *)&v108 * *(float *)g4_m128_ptr<int32_t>(v21));
        v104 = (float)((float)(v119 * v119) + (float)(v118 * v118)) + (float)(v120 * v120);
        v22 = v21;
        *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v21) * *(float *)g4_m128_ptr<int32_t>(v21)) + (float)(v19 * v19))
                                + (float)(v20 * v20);
        v23 = 0.0;
        if ( *(float *)g4_m128_ptr<int32_t>(v22) > 0.0 )
        {
          v24 = ((_mm_cvtsi128_si32(v22) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v22) >> 1));
          v25 = (float)(1.5 * *(float *)&v24)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * *(float *)&v24)
                      * (float)(*(float *)&v24 * *(float *)&v24));
          v26 = 1.5 * v25;
          v27 = (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * v25) * (float)(v25 * v25);
g4_m128_raw(v28) = 0x3FC00000u;
          *(float *)g4_m128_ptr<int32_t>(v28) = (float)((float)(1.5 * (float)(v26 - v27))
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * (float)(v26 - v27))
                                                  * (float)((float)(v26 - v27) * (float)(v26 - v27))))
                                  * *(float *)g4_m128_ptr<int32_t>(v22);
          v29 = _mm_cvtsi128_si32(v28);
          v30 = (2130706432 - v29) & ((v29 ^ (v29 + 2139095040)) >> 31);
          v23 = (float)(2.0
                      - (float)(*(float *)g4_m128_ptr<int32_t>(v28)
                              * (float)((float)(2.0
                                              - (float)((float)((float)(2.0
                                                                      - (float)(*(float *)&v30 * *(float *)g4_m128_ptr<int32_t>(v28)))
                                                              * *(float *)&v30)
                                                      * *(float *)g4_m128_ptr<int32_t>(v28)))
                                      * (float)((float)(2.0 - (float)(*(float *)&v30 * *(float *)g4_m128_ptr<int32_t>(v28)))
                                              * *(float *)&v30))))
              * (float)((float)(2.0
                              - (float)((float)((float)(2.0 - (float)(*(float *)&v30 * *(float *)g4_m128_ptr<int32_t>(v28)))
                                              * *(float *)&v30)
                                      * *(float *)g4_m128_ptr<int32_t>(v28)))
                      * (float)((float)(2.0 - (float)(*(float *)&v30 * *(float *)g4_m128_ptr<int32_t>(v28))) * *(float *)&v30));
        }
        if ( v104 <= 9.9999994e-11f
          || (v31 = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v21) * v107) + (float)(v19 * *(float *)&v108))
                  + (float)(v20 * *((float *)&v108 + 1)),
g4_m128_lane<float>(v32, 0) = v31 * v23,
              (float)(v31 * v23) >= 0.9999f) )
        {
LABEL_13:
          if ( hkOutOfMemoryState[0] == 1 )
            goto LABEL_41;
        }
        else
        {
          v33 = 20.0 * *(float *)(a4 + 12);
          v95 = *(uint32_t *)(a4 + 12);
          *(float *)(a4 + 12) = v33;
          v34 = *(uint32_t *)(a4 + 96);
          v97 = *(uint32_t *)(v34 + 4);
          *(float *)(v34 + 4) = v33;
          v96 = *(uint32_t *)(v34 + 8);
          *(float *)(*(uint32_t *)(a4 + 96) + 8) = v33;
g4_m128_lane<float>(v35, 0) = fmaxf((float)(v31 - (float)(v33 * 0.05f)) * v23, 0.0);
          if ( 0.0 < 1.0 )
          {
            if ( 0.0 > 1.0 || 0.0 < -1.0 )
              asinf(0.0);
            if ( 0.0 < 1.0 && (0.0 > 1.0 || 0.0 < -1.0) )
              asinf(0.0);
          }
          if ( fabs(g4_m128_lane<float>(v35, 0)) < 1.0 )
          {
            v99 = asinf(g4_m128_lane<float>(v35, 0));
            v37 = v99;
          }
          else
          {
            v36 = _mm_cmplt_ss(g4_m128_from<__m128>(0LL), v35);
            LODWORD(v37) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v36, g4_m128_from<__m128>(0xBFC90FDB)), 0) |g4_m128_lane<int32_t>(v36, 0) & 0x3FC90FDB;
          }
          if ( fabs(g4_m128_lane<float>(v32, 0)) < 1.0 )
          {
            v98 = asinf(g4_m128_lane<float>(v32, 0));
            v39 = v98;
          }
          else
          {
            v38 = _mm_cmplt_ss(g4_m128_from<__m128>(0LL), v32);
            LODWORD(v39) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v38, g4_m128_from<__m128>(0xBFC90FDB)), 0) |g4_m128_lane<int32_t>(v38, 0) & 0x3FC90FDB;
          }
          v40 = 0.5 * v104;
          v41 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v104))) >> 1;
          v42 = (_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v104))) + 2139095040) >> 31;
          v112[0] = v39 - v37;
          v43 = (float)(1.5 * COERCE_FLOAT(v42 & (1597463174 - v41)))
              - (float)((float)((float)(0.5 * v104) * COERCE_FLOAT(v42 & (1597463174 - v41)))
                      * (float)(COERCE_FLOAT(v42 & (1597463174 - v41)) * COERCE_FLOAT(v42 & (1597463174 - v41))));
          v44 = (float)(1.5 * (float)((float)(1.5 * v43) - (float)((float)(v40 * v43) * (float)(v43 * v43))))
              - (float)((float)(v40 * (float)((float)(1.5 * v43) - (float)((float)(v40 * v43) * (float)(v43 * v43))))
                      * (float)((float)((float)(1.5 * v43) - (float)((float)(v40 * v43) * (float)(v43 * v43)))
                              * (float)((float)(1.5 * v43) - (float)((float)(v40 * v43) * (float)(v43 * v43)))));
          v118 = v118 * v44;
          v119 = v119 * v44;
          v120 = v120 * v44;
          v121 = v44 * v121;
          hkQuaternionf::setAxisAngle(v123, &v118, v112);
          v45 = *(float *)(v7 + 352);
          v46 = *(float *)(v7 + 356);
          v105 = (hkRotationf::Self *)(v7 + 240);
          v47 = *(float *)(v7 + 360);
          v48 = *(float *)(v7 + 364);
          v124[0] = (float)((float)((float)(v123[1] * v47) - (float)(v123[2] * v46)) + (float)(v123[3] * v45))
                  + (float)(v123[0] * v48);
          v124[1] = (float)((float)((float)(v123[2] * v45) - (float)(v123[0] * v47)) + (float)(v123[3] * v46))
                  + (float)(v123[1] * v48);
          v124[2] = (float)((float)((float)(v46 * v123[0]) - (float)(v45 * v123[1])) + (float)(v123[3] * v47))
                  + (float)(v123[2] * v48);
          v124[3] = (float)(v48 * v123[3])
                  - (float)((float)((float)(v123[0] * v45) + (float)(v123[1] * v46)) + (float)(v47 * v123[2]));
          hkRotationf::set((hkRotationf::Self *)(v7 + 240), (const hkQuaternionf::Self *)v124);
          v49 = *(float *)(v7 + 368);
          v50 = *(float *)(v7 + 372);
          v51 = *(float *)(v7 + 376);
          v52 = (float)((float)(*(float *)(v7 + 244) * v49) + (float)(*(float *)(v7 + 260) * v50))
              + (float)(*(float *)(v7 + 276) * v51);
          v53 = (float)((float)(*(float *)(v7 + 248) * v49) + (float)(*(float *)(v7 + 264) * v50))
              + (float)(*(float *)(v7 + 280) * v51);
          v54 = (float)((float)(*(float *)(v7 + 252) * v49) + (float)(*(float *)(v7 + 268) * v50))
              + (float)(*(float *)(v7 + 284) * v51);
          *(float *)(v7 + 288) = *(float *)(v7 + 320)
                               - (float)((float)((float)(v49 * *(float *)(v7 + 240))
                                               + (float)(v50 * *(float *)(v7 + 256)))
                                       + (float)(v51 * *(float *)(v7 + 272)));
          v55 = *(float *)(v7 + 324) - v52;
          v56 = *(float *)(v7 + 328) - v53;
          v57 = *(float *)(v7 + 332) - v54;
          *(float *)(v7 + 292) = v55;
          *(float *)(v7 + 296) = v56;
          *(float *)(v7 + 300) = v57;
          hkAgentNnMachine_InvalidateTimInAgent(v110, (uint32_t *)a4);
          v58 = (void (*)(uint32_t *, int, int, float **))a5;
          if ( ((uint8_t)(uintptr_t)(a5) & 1) != 0 )
            v58 = *(void (**)(uint32_t *, int, int, float **))&a5[*v109 - 1];
          v58(v109, v110, a4, &v126);
g4_m128_raw(v59) = HIDWORD(v108);
          *(float *)g4_m128_ptr<int32_t>(v59) = (float)(*((float *)&v108 + 1) * v119) - (float)(*(float *)&v108 * v120);
          v60 = (float)(v120 * v107) - (float)(*((float *)&v108 + 1) * v118);
          v61 = (float)(v118 * *(float *)&v108) - (float)(v119 * v107);
          v62 = v59;
          *(float *)g4_m128_ptr<int32_t>(v62) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v59) * *(float *)g4_m128_ptr<int32_t>(v59))
                                          + (float)(v60 * v60))
                                  + (float)(v61 * v61);
          if ( *(float *)g4_m128_ptr<int32_t>(v62) <= 0.0 )
          {
            v69 = 0.0;
            v68 = 0.0;
          }
          else
          {
            v63 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v62);
            v64 = _mm_cvtsi128_si32(v62) >> 1;
            v65 = (_mm_cvtsi128_si32(v62) + 2139095040) >> 31;
            v66 = (float)(1.5 * COERCE_FLOAT(v65 & (1597463174 - v64)))
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v62)) * COERCE_FLOAT(v65 & (1597463174 - v64)))
                        * (float)(COERCE_FLOAT(v65 & (1597463174 - v64)) * COERCE_FLOAT(v65 & (1597463174 - v64))));
            v67 = (float)(1.5 * v66)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v62)) * v66) * (float)(v66 * v66));
            v68 = (float)(1.5 * v67) - (float)((float)(v63 * v67) * (float)(v67 * v67));
            v69 = 0.0 * v68;
          }
          v122[3] = v69;
          v122[0] = *(float *)g4_m128_ptr<int32_t>(v59) * v68;
          v122[1] = v60 * v68;
          v122[2] = v68 * v61;
          hkQuaternionf::setAxisAngle(v123, v122, v112);
          v124[0] = (float)((float)((float)(v101 * v123[1]) - (float)(v106 * v123[2])) + (float)(v102 * v123[3]))
                  + (float)(v103 * v123[0]);
          v124[1] = (float)((float)((float)(v102 * v123[2]) - (float)(v101 * v123[0])) + (float)(v106 * v123[3]))
                  + (float)(v103 * v123[1]);
          v124[2] = (float)((float)((float)(v123[0] * v106) - (float)(v123[1] * v102)) + (float)(v101 * v123[3]))
                  + (float)(v103 * v123[2]);
          v124[3] = (float)(v123[3] * v103)
                  - (float)((float)((float)(v102 * v123[0]) + (float)(v106 * v123[1])) + (float)(v123[2] * v101));
          hkRotationf::set(v105, (const hkQuaternionf::Self *)v124);
          v70 = *(float *)(v7 + 368);
          v71 = *(float *)(v7 + 372);
          v72 = *(float *)(v7 + 376);
          v73 = (float)((float)(*(float *)(v7 + 244) * v70) + (float)(*(float *)(v7 + 260) * v71))
              + (float)(*(float *)(v7 + 276) * v72);
          v74 = (float)((float)(*(float *)(v7 + 248) * v70) + (float)(*(float *)(v7 + 264) * v71))
              + (float)(*(float *)(v7 + 280) * v72);
          v75 = (float)((float)(*(float *)(v7 + 252) * v70) + (float)(*(float *)(v7 + 268) * v71))
              + (float)(*(float *)(v7 + 284) * v72);
          v76 = *(float *)(v7 + 320)
              - (float)((float)((float)(v70 * *(float *)(v7 + 240)) + (float)(v71 * *(float *)(v7 + 256)))
                      + (float)(v72 * *(float *)(v7 + 272)));
          v77 = *(float *)(v7 + 324) - v73;
          v78 = *(float *)(v7 + 328) - v74;
          v79 = *(float *)(v7 + 332) - v75;
          *(float *)(v7 + 288) = v76;
          *(float *)(v7 + 292) = v77;
          *(float *)(v7 + 296) = v78;
          *(float *)(v7 + 300) = v79;
          hkAgentNnMachine_InvalidateTimInAgent(v110, (uint32_t *)a4);
          v80 = (void (*)(uint32_t *, int, int, float **))a5;
          if ( ((uint8_t)(uintptr_t)(a5) & 1) != 0 )
            v80 = *(void (**)(uint32_t *, int, int, float **))&a5[*v109 - 1];
          v80(v109, v110, a4, &v126);
          v124[0] = (float)((float)((float)(v106 * v123[2]) - (float)(v101 * v123[1])) + (float)(v102 * v123[3]))
                  - (float)(v103 * v123[0]);
          v124[1] = (float)((float)((float)(v101 * v123[0]) - (float)(v102 * v123[2])) + (float)(v106 * v123[3]))
                  - (float)(v103 * v123[1]);
          v124[3] = (float)((float)((float)(v102 * v123[0]) + (float)(v106 * v123[1])) + (float)(v101 * v123[2]))
                  + (float)(v123[3] * v103);
          v124[2] = (float)((float)((float)(v123[1] * v102) - (float)(v123[0] * v106)) + (float)(v101 * v123[3]))
                  - (float)(v123[2] * v103);
          hkRotationf::set(v105, (const hkQuaternionf::Self *)v124);
          v81 = *(float *)(v7 + 368);
          v82 = *(float *)(v7 + 372);
          v83 = *(float *)(v7 + 376);
          v84 = (float)((float)(*(float *)(v7 + 244) * v81) + (float)(*(float *)(v7 + 260) * v82))
              + (float)(*(float *)(v7 + 276) * v83);
          v85 = (float)((float)(*(float *)(v7 + 248) * v81) + (float)(*(float *)(v7 + 264) * v82))
              + (float)(*(float *)(v7 + 280) * v83);
          v86 = (float)((float)(*(float *)(v7 + 252) * v81) + (float)(*(float *)(v7 + 268) * v82))
              + (float)(*(float *)(v7 + 284) * v83);
          v87 = *(float *)(v7 + 320)
              - (float)((float)((float)(v81 * *(float *)(v7 + 240)) + (float)(v82 * *(float *)(v7 + 256)))
                      + (float)(v83 * *(float *)(v7 + 272)));
          v88 = *(float *)(v7 + 324) - v84;
          v89 = *(float *)(v7 + 328) - v85;
          v90 = *(float *)(v7 + 332) - v86;
          *(float *)(v7 + 288) = v87;
          *(float *)(v7 + 292) = v88;
          *(float *)(v7 + 296) = v89;
          *(float *)(v7 + 300) = v90;
          hkAgentNnMachine_InvalidateTimInAgent(v110, (uint32_t *)a4);
          v91 = (void (*)(uint32_t *, int, int, float **))a5;
          if ( ((uint8_t)(uintptr_t)(a5) & 1) != 0 )
            v91 = *(void (**)(uint32_t *, int, int, float **))&a5[*v109 - 1];
          v91(v109, v110, a4, &v126);
          *(uint32_t *)(a4 + 12) = v95;
          *(uint32_t *)(*(uint32_t *)(a4 + 96) + 4) = v97;
          *(uint32_t *)(*(uint32_t *)(a4 + 96) + 8) = v96;
          G4_VCALL<void>(v7 + 224, 76, v125);
          hkAgentNnMachine_InvalidateTimInAgent(v110, (uint32_t *)a4);
          v92 = (void (*)(uint32_t *, int, int, float **))a5;
          if ( ((uint8_t)(uintptr_t)(a5) & 1) != 0 )
            v92 = *(void (**)(uint32_t *, int, int, float **))&a5[*v109 - 1];
          v92(v109, v110, a4, &v126);
          if ( hkOutOfMemoryState[0] == 1 )
          {
LABEL_41:
            v93 = v117;
            v116 = 0;
            if ( v117 >= 0 )
              goto LABEL_42;
            goto LABEL_4;
          }
        }
      }
    }
  }
  v93 = v117;
  v116 = 0;
  if ( v117 >= 0 )
LABEL_42:
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v115,
      8 * v93);
LABEL_4:
  v115 = 0;
  v117 = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v113,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::collideEntitiesNarrowPhaseDiscrete  (binary VA: 0x176f4b0)
// Original: hkpSimulation::collideEntitiesNarrowPhaseDiscrete
// ----------------------------------------------------------------------------
void hkpSimulation::collideEntitiesNarrowPhaseDiscrete(int a1, int a2, int a3, int a4, int a5)
{
  hkpSimulation::processAgentsOfEntities(a1, a2, a3, a4, (char *)hkpSimulation::processAgentCollideDiscrete, 0, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::collideEntitiesDiscrete  (binary VA: 0x176f510)
// Original: hkpSimulation::collideEntitiesDiscrete
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpSimulation::collideEntitiesDiscrete(int a1, hkpSimulation::Self *a2, hkpEntity::Self **a3, hkpWorld::Self *a4, int *a5, int a6)
{
  char **v6;
  char *v7; // xmm0_4
  char *v8;
  hkpWorld::Self *result;
  int v10;
  int address;
  typedef hkpWorld::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18[20];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char *_g4_t_v28;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v18)) > _g4_s6 ? (32u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v19)) > _g4_s7 ? (112u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (116u + sizeof(_g4_t_v20)) > _g4_s8 ? (116u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (120u + sizeof(_g4_t_v21)) > _g4_s9 ? (120u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (124u + sizeof(_g4_t_v22)) > _g4_s10 ? (124u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v23)) > _g4_s11 ? (128u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (132u + sizeof(_g4_t_v24)) > _g4_s12 ? (132u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v25)) > _g4_s13 ? (136u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v26)) > _g4_s14 ? (140u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (141u + sizeof(_g4_t_v27)) > _g4_s15 ? (141u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v28)) > _g4_s16 ? (144u + sizeof(_g4_t_v28)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 112u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 116u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 120u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 124u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 128u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 132u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 136u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 140u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 141u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 144u);

  v6 = *((char ***)a4 + 28);
  std::memcpy(v18, v6, sizeof(v18));
  v24 = 0;
  v7 = v6[3];
  v18[0] = *v6;
  v18[1] = v6[1];
  v8 = v6[2];
  v18[3] = v7;
  v18[2] = v8;
  v18[4] = v6[4];
  v18[5] = v6[5];
  v18[6] = v6[6];
  v18[8] = v6[8];
  v18[9] = v6[9];
  v18[10] = v6[10];
  v18[11] = v6[11];
  v18[12] = v6[12];
  v18[13] = v6[13];
  v18[14] = v6[14];
  v18[15] = v6[15];
  v18[16] = v6[16];
  v18[17] = v6[17];
  v18[18] = v6[18];
  v18[19] = v6[19];
  v23 = v6[24];
  v25 = v6[26];
  v26 = *((uint8_t *)v6 + 108);
  LOBYTE(v8) = *((uint8_t *)v6 + 109);
  v28 = v6[28];
  v19 = *a5;
  v20 = a5[1];
  v21 = (char *)a5[2];
  v22 = a5[3];
  v27 = (char)(uintptr_t)(v8);
  ++*((uint32_t *)a4 + 35);
  hkpSimulation::collideEntitiesBroadPhaseDiscrete(
    a2,
    a3,
    (int)(uintptr_t)(a4),
    v12,
    v13,
    v14,
    v15,
    v16,
    v18[0],
    v18[1],
    (int)(uintptr_t)(v18[2]),
    (int *)v18[3],
    (hkLifoAllocator::Self **)v18[4],
    (int)(uintptr_t)(v18[5]),
    (int)(uintptr_t)(v18[6]),
    (int)(uintptr_t)(v18[7]),
    (int)(uintptr_t)(v18[8]),
    (int)(uintptr_t)(v18[9]),
    (int)(uintptr_t)(v18[10]),
    (int)(uintptr_t)(v18[11]),
    (int)(uintptr_t)(v18[12]),
    (int)(uintptr_t)(v18[13]),
    v18[14],
    (int)(uintptr_t)(v18[15]),
    (int)(uintptr_t)(v18[16]),
    (int)(uintptr_t)(v18[17]),
    (int)(uintptr_t)(v18[18]),
    (int)(uintptr_t)(v18[19]),
    v19,
    v20,
    v21,
    v22);
  hkpSimulation::collideEntitiesNarrowPhaseDiscrete(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), (int)(uintptr_t)(v18), a6);
  v17 = *((uint32_t *)a4 + 35);
  result = (hkpWorld::Self *)(v17 - 1);
  *((uint32_t *)a4 + 35) = v17 - 1;
  if ( v17 == 1 && *((uint8_t *)a4 + 148) == 0 )
  {
    result = a4;
    if ( *((uint32_t *)a4 + 33) != 0 )
    {
      hkpWorld::internal_executePendingOperations(a4);
      result = a4;
    }
    if ( *((uint32_t *)result + 39) == 1 && *((uint32_t *)result + 34) != 0 )
      result = (hkpWorld::Self *)hkpWorld::internal_executePendingBodyOperations(result);
  }
  v10 = v24;
  if ( v24 != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    return (hkpWorld::Self *)(*(int (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
                         *(uint32_t *)(*(uint32_t *)address + 44),
                         v10,
                         512);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulation::resetCollisionInformationForEntities  (binary VA: 0x176f720)
// Original: hkpSimulation::resetCollisionInformationForEntities
// ----------------------------------------------------------------------------
void hkpSimulation::resetCollisionInformationForEntities(int a1, hkpEntityAabbUtil::Self *a2, hkpEntity::Self **a3, int a4, char a5)
{
  if ( (a5 & 2) != 0 )
    hkpSimulation::processAgentsOfEntities(
      a1,
      (int)(uintptr_t)(a2),
      (int)(uintptr_t)(a3),
      *(uint32_t *)(a4 + 112),
      (char *)hkpSimulation::processAgentResetCollisionInformation,
      0,
      0);
  if ( (a5 & 4) != 0 )
    hkpEntityAabbUtil::entityBatchInvalidateAabb(a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::getClassType  (binary VA: 0x1783740)
// Original: hkpSimulationIsland::getClassType
// ----------------------------------------------------------------------------
void * hkpSimulationIsland::getClassType()
{
  return &hkpSimulationIslandClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::addCallbackRequest  (binary VA: 0x1783760)
// Original: hkpSimulationIsland::addCallbackRequest
// ----------------------------------------------------------------------------
int hkpSimulationIsland::addCallbackRequest(hkpSimulationIsland::Self *self, hkpConstraintInstance::Self *a2, char a3)
{
  int result;

  result = *((uint32_t *)a2 + 12);
  *(uint8_t *)(result + 18) |= a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::addConstraintToCriticalLockedIsland  (binary VA: 0x1783770)
// Original: hkpSimulationIsland::addConstraintToCriticalLockedIsland
// ----------------------------------------------------------------------------
int hkpSimulationIsland::addConstraintToCriticalLockedIsland(hkpSimulationIsland::Self *self, hkpConstraintInstance::Self *a2)
{
  return hkpWorldOperationUtil::addConstraintToCriticalLockedIsland(
           *(hkpWorldOperationUtil::Self **)(*((uint32_t *)a2 + 5) + 8),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::removeConstraintFromCriticalLockedIsland  (binary VA: 0x17837a0)
// Original: hkpSimulationIsland::removeConstraintFromCriticalLockedIsland
// ----------------------------------------------------------------------------
int hkpSimulationIsland::removeConstraintFromCriticalLockedIsland(hkpSimulationIsland::Self *self, hkpConstraintInstance::Self *a2)
{
  return hkpWorldOperationUtil::removeConstraintFromCriticalLockedIsland(
           *(hkpWorldOperationUtil::Self **)(*((uint32_t *)a2 + 5) + 8),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::Destroy  (binary VA: 0x17837d0)
// Original: hkpSimulationIsland::~hkpSimulationIsland
// ----------------------------------------------------------------------------
void hkpSimulationIsland::Destroy(hkpSimulationIsland::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0AA8);
  v1 = *((uint32_t *)self + 31);
  *((uint32_t *)self + 30) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 29),
      4 * v1);
  v2 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 31) = 0x80000000;
  *((uint32_t *)self + 25) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 24),
      4 * v2);
  v3 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *((uint32_t *)self + 20) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 19),
      4 * v3);
  v4 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 21) = 0x80000000;
  *((uint32_t *)self + 16) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 15),
      4 * v4);
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::Destroy_ea17838f0  (binary VA: 0x17838f0)
// Original: hkpSimulationIsland::~hkpSimulationIsland
// ----------------------------------------------------------------------------
void hkpSimulationIsland::Destroy_ea17838f0(hkpSimulationIsland::Self *self)
{
  int v1;
  int v2;

  hkpSimulationIsland::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 132;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::Construct  (binary VA: 0x1783950)
// Original: hkpSimulationIsland::hkpSimulationIsland
// ----------------------------------------------------------------------------
void hkpSimulationIsland::Construct(hkpSimulationIsland::Self *self, hkpWorld::Self *a2)
{
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0AA8);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = -65535;
  *((uint16_t *)self + 17) = -1;
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)((char *)self + 88);
  *((uint8_t *)self + 38) = 5;
  *((uint32_t *)self + 10) = -15;
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)((char *)self + 108);
  *((uint16_t *)self + 24) = 0x8000;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0x80000000;
  *((uint32_t *)self + 18) = -1054867456;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = -2147483647;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = -2147483647;
  *((uint16_t *)self + 46) = 512;
  *((uint8_t *)self + 94) = 1;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)((char *)self + 128);
  *((uint32_t *)self + 31) = -2147483647;
  *((uint16_t *)self + 56) = 512;
  *((uint8_t *)self + 114) = 2;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint8_t *)self + 37) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::internalAddEntity  (binary VA: 0x1783a40)
// Original: hkpSimulationIsland::internalAddEntity
// ----------------------------------------------------------------------------
int hkpSimulationIsland::internalAddEntity(hkpSimulationIsland::Self *self, hkpEntity::Self *a2)
{
  int v2;
  int result;
  int v4;

  *((uint32_t *)a2 + 50) = (uint32_t)(uintptr_t)(self);
  *((uint16_t *)a2 + 82) = *((uint32_t *)self + 20);
  v2 = *((uint32_t *)self + 20);
  if ( v2 == (*((uint32_t *)self + 21) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpSimulationIsland::Self *)((char *)self + 76),
      4,
      v4);
    v2 = *((uint32_t *)self + 20);
  }
  result = *((uint32_t *)self + 19);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::internalRemoveEntity  (binary VA: 0x1783ac0)
// Original: hkpSimulationIsland::internalRemoveEntity
// ----------------------------------------------------------------------------
hkpSimulationIsland::Self * hkpSimulationIsland::internalRemoveEntity(hkpSimulationIsland::Self *self, hkpEntity::Self *a2)
{
  *(uint32_t *)(*((uint32_t *)self + 19) + 4 * *((uint16_t *)a2 + 82)) = *(uint32_t *)(*((uint32_t *)self + 19)
                                                                                       + 4 * *((uint32_t *)self + 20)
                                                                                       - 4);
  *(uint16_t *)(*(uint32_t *)(*((uint32_t *)self + 19) + 4 * *((uint16_t *)a2 + 82)) + 164) = *((uint16_t *)a2 + 82);
  --*((uint32_t *)self + 20);
  *((uint32_t *)a2 + 50) = 0;
  *((uint16_t *)a2 + 82) = -1;
  *((uint8_t *)self + 37) = *((uint8_t *)self + 37) & 0xFC | 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::addAction  (binary VA: 0x1783b20)
// Original: hkpSimulationIsland::addAction
// ----------------------------------------------------------------------------
int hkpSimulationIsland::addAction(hkpSimulationIsland::Self *self, hkpAction::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 16);
  if ( v2 == (*((uint32_t *)self + 17) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpSimulationIsland::Self *)((char *)self + 60),
      4,
      v4);
    v2 = *((uint32_t *)self + 16);
  }
  result = *((uint32_t *)self + 15);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 16);
  *((uint32_t *)a2 + 3) = (uint32_t)(uintptr_t)(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::removeAction  (binary VA: 0x1783b90)
// Original: hkpSimulationIsland::removeAction
// ----------------------------------------------------------------------------
int hkpSimulationIsland::removeAction(hkpSimulationIsland::Self *self, hkpAction::Self *a2)
{
  int v2;
  hkpAction::Self **v3;
  int v4;
  hkpAction::Self **v5;
  hkpAction::Self **v6;
  int result;

  v2 = *((uint32_t *)self + 16);
  if ( v2 <= 0 )
  {
    v6 = (hkpAction::Self **)(*((uint32_t *)self + 15) - 4);
  }
  else
  {
    v3 = *((hkpAction::Self ***)self + 15);
    if ( *v3 == a2 )
    {
      v6 = *((hkpAction::Self ***)self + 15);
    }
    else
    {
      v4 = 0;
      v5 = v3 + 1;
      while ( ++v4 != v2 )
      {
        v6 = v5++;
        if ( *(v5 - 1) == a2 )
          goto LABEL_7;
      }
      v6 = v3 - 1;
    }
  }
LABEL_7:
  *v6 = nullptr;
  *((uint32_t *)a2 + 3) = 0;
  result = *((uint8_t *)self + 37) & 0xCC | 0x11;
  *((uint8_t *)self + 37) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::isFullyConnected  (binary VA: 0x1783c10)
// Original: hkpSimulationIsland::isFullyConnected
// ----------------------------------------------------------------------------
bool hkpSimulationIsland::isFullyConnected(hkpSimulationIsland::Self *self, hkUnionFind::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint16_t v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v22;
  int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_i;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_i)) > _g4_s2 ? (12u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v29)) > _g4_s5 ? (20u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v30)) > _g4_s6 ? (24u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);

  v25 = 0;
  *((uint32_t *)a2 + 2) = 0;
  v2 = *((uint32_t *)self + 20);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 19) + 4 * v25);
      if ( *(int *)(v3 + 100) > 0 )
      {
        v4 = *(uint32_t *)(v3 + 100);
        v5 = 0;
        do
        {
          while ( 1 )
          {
            v6 = *(uint32_t *)(*(uint32_t *)(v3 + 96) + 8 * v5 + 4);
            v7 = v6 + *(char *)(v6 + 16);
            if ( *(uint8_t *)(v7 + 232) != 5 )
              break;
            if ( ++v5 >= v4 )
              goto LABEL_8;
          }
          hkUnionFind::addEdge(a2, v25, *(uint16_t *)(v7 + 164));
          if ( ***(uint32_t ***)a2 + *((uint32_t *)a2 + 1) == 0 )
            return true;
          v4 = *(uint32_t *)(v3 + 100);
          ++v5;
        }
        while ( v5 < v4 );
LABEL_8:
        v2 = *((uint32_t *)self + 20);
      }
      ++v25;
    }
    while ( v25 < v2 );
    if ( v2 > 0 )
    {
      for ( i = 0; i < v2; ++i )
      {
        v8 = *(uint32_t *)(*((uint32_t *)self + 19) + 4 * i);
        v9 = *(uint16_t *)(v8 + 172);
        if ( v9 != 0 )
        {
          v10 = 0;
          do
          {
            v11 = *(uint32_t *)(v8 + 168) + 48 * v10;
            v12 = *(uint32_t *)(v11 + 4);
            if ( *(uint8_t *)(v12 + 232) != 5 )
            {
              v13 = *(uint32_t *)(v11 + 8);
              if ( *(uint8_t *)(v13 + 232) != 5 )
              {
                hkUnionFind::addEdge(a2, *(uint16_t *)(v12 + 164), *(uint16_t *)(v13 + 164));
                if ( ***(uint32_t ***)a2 + *((uint32_t *)a2 + 1) == 0 )
                  return true;
                v9 = *(uint16_t *)(v8 + 172);
              }
            }
            ++v10;
          }
          while ( v10 < v9 );
          v2 = *((uint32_t *)self + 20);
        }
      }
    }
  }
  v28 = &v31;
  v29 = 0;
  v30 = -2147483638;
  v24 = 0;
  v14 = *((uint32_t *)self + 16);
  if ( v14 <= 0 )
    return ***(uint32_t ***)a2 + *((uint32_t *)a2 + 1) == 0;
  while ( 1 )
  {
    v15 = (uint32_t *)(*((uint32_t *)self + 15) + 4 * v24);
    v16 = *v15;
    if ( *v15 != 0 )
      break;
LABEL_28:
    if ( ++v24 >= v14 )
    {
      v29 = 0;
      if ( v30 >= 0 )
        (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v28,
          4 * v30);
      return ***(uint32_t ***)a2 + *((uint32_t *)a2 + 1) == 0;
    }
  }
  v29 = 0;
  (*(void (**)(int, uint32_t, int **))(*(uint32_t *)*v15 + 24))(v16, *v15, &v28);
  v17 = v29;
  v18 = 0;
  v19 = v28;
  if ( v29 <= 0 )
    goto LABEL_27;
  while ( 1 )
  {
    v27 = v18;
    if ( *(uint8_t *)(v28[v18] + 232) != 5 )
      break;
    v20 = v18 + 1;
LABEL_26:
    v18 = v20;
    if ( v20 >= v29 )
      goto LABEL_27;
  }
  v20 = v18 + 1;
  if ( v18 == -1 )
    goto LABEL_26;
  if ( v29 <= v20 )
  {
LABEL_27:
    v14 = *((uint32_t *)self + 16);
    goto LABEL_28;
  }
  v22 = v20;
  while ( 1 )
  {
    v23 = v19[v22];
    if ( *(uint8_t *)(v23 + 232) != 5 )
    {
      hkUnionFind::addEdge(a2, *(uint16_t *)(v19[v27] + 164), *(uint16_t *)(v23 + 164));
      if ( ***(uint32_t ***)a2 + *((uint32_t *)a2 + 1) == 0 )
        break;
      v17 = v29;
    }
    ++v20;
    ++v22;
    if ( v20 >= v17 )
      goto LABEL_27;
    v19 = v28;
  }
  v29 = 0;
  if ( v30 >= 0 )
    (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v28,
      4 * v30);
  return true;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::isFullyConnected  (binary VA: 0x1783f50)
// Original: hkpSimulationIsland::isFullyConnected
// ----------------------------------------------------------------------------
int hkpSimulationIsland::isFullyConnected(hkpSimulationIsland::Self *self)
{
  int v1;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v3;
  signed int v4;
  int v5;
  int v6;
  int v7;
  signed int v8;
  hkLifoAllocator::Self *v9;
  typedef hkLifoAllocator::Self **_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[32];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v1 = *((uint32_t *)self + 20);
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v3 = *address;
  v11 = address;
  v4 = (4 * v1 + 127) & 0xFFFFFF80;
  v5 = *((uint32_t *)*address + 3);
  if ( v4 <= *((uint32_t *)v3 + 2) && (unsigned int)(v4 + v5) <= *((uint32_t *)v3 + 4) )
    *((uint32_t *)v3 + 3) = v4 + v5;
  else
    v5 = hkLifoAllocator::allocateFromNewSlab(v3, (4 * v1 + 127) & 0xFFFFFF80);
  v12 = v5;
  v13 = v1;
  hkUnionFind::Construct((hkUnionFind::Self *)v14, (int)(uintptr_t)(&v12), *((uint32_t *)self + 20));
  LOBYTE(v6) = hkpSimulationIsland::isFullyConnected(self, (hkUnionFind::Self *)v14);
  v7 = v6;
  v8 = (4 * v13 + 127) & 0xFFFFFF80;
  v9 = *v11;
  if ( v8 > *((uint32_t *)*v11 + 2) || *((uint32_t *)v9 + 3) != v12 + v8 || v12 == *((uint32_t *)v9 + 5) )
    hkLifoAllocator::slowBlockFree(v9, (char *)v12, v8);
  else
    *((uint32_t *)v9 + 3) = v12;
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::isValid  (binary VA: 0x1784040)
// Original: hkpSimulationIsland::isValid
// ----------------------------------------------------------------------------
void hkpSimulationIsland::isValid()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::mergeConstraintInfo  (binary VA: 0x1784050)
// Original: hkpSimulationIsland::mergeConstraintInfo
// ----------------------------------------------------------------------------
hkpSimulationIsland::Self * hkpSimulationIsland::mergeConstraintInfo(hkpSimulationIsland::Self *self, hkpSimulationIsland::Self *a2)
{
  hkpSimulationIsland::Self *result;
  int v3;

  result = self;
  v3 = *((uint32_t *)a2 + 2);
  if ( *((uint32_t *)self + 2) >= v3 )
    v3 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = v3;
  *((uint32_t *)self + 3) += *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) += *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) += *((uint32_t *)a2 + 5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIsland::markForWrite  (binary VA: 0x1784080)
// Original: hkpSimulationIsland::markForWrite
// ----------------------------------------------------------------------------
void hkpSimulationIsland::markForWrite()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIslandViewer::getProcessTag  (binary VA: 0x1837630)
// Original: hkpSimulationIslandViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpSimulationIslandViewer::getProcessTag()
{
  return hkpSimulationIslandViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIslandViewer::worldAddedCallback  (binary VA: 0x1837660)
// Original: hkpSimulationIslandViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpSimulationIslandViewer::worldAddedCallback(hkpSimulationIslandViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::addWorldPostSimulationListener(a2, (hkpSimulationIslandViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIslandViewer::worldRemovedCallback  (binary VA: 0x18376a0)
// Original: hkpSimulationIslandViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpSimulationIslandViewer::worldRemovedCallback(hkpSimulationIslandViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::removeWorldPostSimulationListener(a2, (hkpSimulationIslandViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIslandViewer::Destroy  (binary VA: 0x18376e0)
// Original: hkpSimulationIslandViewer::~hkpSimulationIslandViewer
// ----------------------------------------------------------------------------
void hkpSimulationIslandViewer::Destroy(hkpSimulationIslandViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;
  int v4;
  hkpWorld::Self *v5;
  void (**v6)(hkpWorld::Self *);
  int v7;
  int v8;
  int v9;
  hkpWorld::Self *v10;
  void (**v11)(hkpWorld::Self *);
  int v12;
  hkpWorld::Self *v13;
  hkpWorld::Self *v14;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A2BC8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A2C00);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A2C2C);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A2C44);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpWorld::removeWorldPostSimulationListener(v3, (hkpSimulationIslandViewer::Self *)((char *)self + 40));
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  v4 = *((uint32_t *)self + 16) - 1;
  v5 = (hkpWorld::Self *)(*((uint32_t *)self + 15) + (v4 << 7));
  if ( v4 >= 0 )
  {
    do
    {
      v6 = *(void (***)(hkpWorld::Self *))v5;
      --v4;
      v13 = v5;
      v5 = (hkpWorld::Self *)((char *)v5 - 128);
      (*v6)(v13);
    }
    while ( v4 != -1 );
  }
  v7 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 16) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 15),
      v7 << 7);
  v8 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0x80000000;
  v9 = v8 - 1;
  v10 = (hkpWorld::Self *)(*((uint32_t *)self + 12) + ((v8 - 1) << 7));
  if ( v8 - 1 >= 0 )
  {
    do
    {
      v11 = *(void (***)(hkpWorld::Self *))v10;
      --v9;
      v14 = v10;
      v10 = (hkpWorld::Self *)((char *)v10 - 128);
      (*v11)(v14);
    }
    while ( v9 != -1 );
  }
  v12 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v12 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      v12 << 7);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_209E868);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIslandViewer::Destroy_ea1837870  (binary VA: 0x1837870)
// Original: hkpSimulationIslandViewer::~hkpSimulationIslandViewer
// ----------------------------------------------------------------------------
void hkpSimulationIslandViewer::Destroy_ea1837870(hkpSimulationIslandViewer::Self *self)
{
  int v1;
  int v2;

  hkpSimulationIslandViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 72;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIslandViewer::postSimulationCallback  (binary VA: 0x1837900)
// Original: hkpSimulationIslandViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpSimulationIslandViewer::postSimulationCallback(hkpSimulationIslandViewer::Self *self, hkpWorld::Self *a2)
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
  int i;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint64_t v25; // rax
  int v26;
  uint32_t *v27;
  hkpSimulationIslandViewer::Self *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  void (***v34)(uint32_t);
  void (**v35)(uint32_t);
  int v36;
  hkDisplayAABB::Self *v37;
  hkpSimulationIslandViewer::Self *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  void (***v44)(uint32_t);
  void (**v45)(uint32_t);
  int v46;
  hkDisplayAABB::Self *v47;
  typedef void (***_g4_t_v49)(uint32_t);
  typedef void (***_g4_t_v50)(uint32_t);
  typedef int *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef hkpSimulationIslandViewer::Self *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef hkpWorld::Self *_g4_t_v61;
  typedef char _g4_t_v62[4];
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef hkpSimulationIslandViewer::Self **_g4_t_v85;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v49)) > _g4_s0 ? (4u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v50)) > _g4_s1 ? (4u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v51)) > _g4_s2 ? (36u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v52)) > _g4_s3 ? (56u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v53)) > _g4_s4 ? (60u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v54)) > _g4_s5 ? (76u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v55)) > _g4_s6 ? (80u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v56)) > _g4_s7 ? (80u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v57)) > _g4_s8 ? (84u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v58)) > _g4_s9 ? (84u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v59)) > _g4_s10 ? (88u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v60)) > _g4_s11 ? (88u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v61)) > _g4_s12 ? (92u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v62)) > _g4_s13 ? (96u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v63)) > _g4_s14 ? (100u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v64)) > _g4_s15 ? (104u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v65)) > _g4_s16 ? (108u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v66)) > _g4_s17 ? (116u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v67)) > _g4_s18 ? (120u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v68)) > _g4_s19 ? (124u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v69)) > _g4_s20 ? (132u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v70)) > _g4_s21 ? (136u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v71)) > _g4_s22 ? (140u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v72)) > _g4_s23 ? (144u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v73)) > _g4_s24 ? (148u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v74)) > _g4_s25 ? (152u + sizeof(_g4_t_v74)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v75)) > _g4_s26 ? (156u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v76)) > _g4_s27 ? (160u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v77)) > _g4_s28 ? (164u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v78)) > _g4_s29 ? (168u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v79)) > _g4_s30 ? (172u + sizeof(_g4_t_v79)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v80)) > _g4_s31 ? (176u + sizeof(_g4_t_v80)) : _g4_s31,
    _g4_s33 = (180u + sizeof(_g4_t_v81)) > _g4_s32 ? (180u + sizeof(_g4_t_v81)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v82)) > _g4_s33 ? (184u + sizeof(_g4_t_v82)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v83)) > _g4_s34 ? (188u + sizeof(_g4_t_v83)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v84)) > _g4_s35 ? (192u + sizeof(_g4_t_v84)) : _g4_s35,
    _g4_s37 = (204u + sizeof(_g4_t_v85)) > _g4_s36 ? (204u + sizeof(_g4_t_v85)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 80u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 84u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 96u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 100u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 104u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 108u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 116u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 120u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 124u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 132u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 136u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 140u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 144u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 148u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 152u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 156u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 160u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 164u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 168u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 172u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 176u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 180u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 184u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 188u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 192u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 204u);

  v85 = &self;
  v54 = self;
  v61 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v51 = address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TthkpSimulationIslandViewer");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  if ( *((uint8_t *)v54 + 44) != 0 )
  {
    v57 = *((uint32_t *)v61 + 11);
    v6 = v57;
    v7 = *((uint32_t *)v54 + 16);
    if ( v57 > v7 )
    {
      v38 = v54;
      v39 = *((uint32_t *)v54 + 17) & 0x3FFFFFFF;
      if ( v57 > v39 )
      {
        v40 = 2 * v39;
        if ( v40 < v57 )
          v40 = *((uint32_t *)v61 + 11);
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v62,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)v54 + 15,
          v40,
          128);
        v7 = *((uint32_t *)v54 + 16);
        v38 = v54;
      }
      v41 = *((uint32_t *)v38 + 15);
      v42 = v57;
      v43 = v7 - v57 - 1;
      if ( v43 >= 0 )
      {
        v44 = (void (***)(uint32_t))(v41 + (v57 << 7) + (v43 << 7));
        do
        {
          v45 = *v44;
          --v43;
          v50 = v44;
          v44 -= 32;
          (*v45)((uint32_t)(uintptr_t)(v50));
        }
        while ( v43 != -1 );
        v7 = *((uint32_t *)v54 + 16);
        v41 = *((uint32_t *)v54 + 15);
        v42 = v57;
      }
      v46 = 0;
      v60 = v42 - v7;
      v47 = (hkDisplayAABB::Self *)((v7 << 7) + v41);
      if ( v60 > 0 )
      {
        do
        {
          ++v46;
          hkDisplayAABB::Construct(v47);
          v47 = (hkDisplayAABB::Self *)((char *)v47 + 128);
        }
        while ( v46 != v60 );
      }
      *((uint32_t *)v54 + 16) = v57;
      v6 = *((uint32_t *)v61 + 11);
    }
    v63 = 0;
    v64 = 0;
    v65 = 0x80000000;
    if ( v6 <= 0 )
    {
      v64 = v6;
      v66 = 0;
      v68 = 0x80000000;
    }
    else
    {
      hkArrayUtil::reserve((hkArrayUtil::Self *)v62, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v63, v6, 4);
      v64 = v6;
      v66 = 0;
      v67 = 0;
      v68 = 0x80000000;
      v8 = *((uint32_t *)v61 + 11);
      if ( v8 > 0 )
      {
        hkArrayUtil::reserve((hkArrayUtil::Self *)v62, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v66, v8, 32);
        v67 = v8;
        if ( *((int *)v61 + 11) > 0 )
        {
          v55 = 0;
          do
          {
            v9 = v66;
            v52 = 4 * v55;
            v10 = *(uint32_t *)(*((uint32_t *)v61 + 10) + 4 * v55);
            v11 = 32 * v55;
            *(uint32_t *)(v66 + v11) = 2139095022;
            *(uint32_t *)(v9 + v11 + 4) = 2139095022;
            *(uint32_t *)(v9 + v11 + 8) = 2139095022;
            *(uint32_t *)(v9 + v11 + 12) = 2139095022;
            v12 = v66;
            *(uint32_t *)(v66 + v11 + 16) = -8388626;
            *(uint32_t *)(v12 + v11 + 20) = -8388626;
            *(uint32_t *)(v12 + v11 + 24) = -8388626;
            *(uint32_t *)(v12 + v11 + 28) = -8388626;
            v69 = 3.40282e38f;
            v70 = 3.40282e38f;
            v71 = 3.40282e38f;
            v72 = 3.40282e38f;
            v73 = -3.40282e38f;
            v74 = -3.40282e38f;
            v75 = -3.40282e38f;
            v76 = -3.40282e38f;
            v13 = *(uint32_t *)(v10 + 80);
            for ( i = 0; i < v13; ++i )
            {
              v15 = *(uint32_t *)(*(uint32_t *)(v10 + 76) + 4 * i);
              if ( *(uint32_t *)(v15 + 16) != 0 )
              {
                (*(void (**)(uint32_t, int, float *))(**((uint32_t **)v61 + 22) + 72))(
                  *((uint32_t *)v61 + 22),
                  v15 + 36,
                  &v77);
                v73 = fmaxf(v73, v81);
                v74 = fmaxf(v74, v82);
                v75 = fmaxf(v75, v83);
                v76 = fmaxf(v76, v84);
                v69 = fminf(v69, v77);
                v70 = fminf(v70, v78);
                v71 = fminf(v71, v79);
                v72 = fminf(v72, v80);
                v13 = *(uint32_t *)(v10 + 80);
              }
            }
            v16 = v55 << 7;
            hkDisplayAABB::setExtents(
              (hkDisplayAABB::Self *)((v55++ << 7) + *((uint32_t *)v54 + 15)),
              (const hkVector4f::Self *)&v69,
              (const hkVector4f::Self *)&v73);
            *(uint32_t *)(v63 + v52) = *((uint32_t *)v54 + 15) + v16;
          }
          while ( *((uint32_t *)v61 + 11) > v55 );
        }
        goto LABEL_17;
      }
      v6 = *((uint32_t *)v61 + 11);
    }
    v67 = v6;
LABEL_17:
    (*(void (**)(char *))(**((uint32_t **)v54 + 6) + 116))(v62);
    v67 = 0;
    if ( v68 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v66,
        32 * v68);
    v66 = 0;
    v68 = 0x80000000;
    v64 = 0;
    if ( v65 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(hkContainerTempAllocator::s_alloc),
        v63,
        4 * v65);
  }
  if ( *((uint8_t *)v54 + 45) != 0 )
  {
    v58 = *((uint32_t *)v61 + 14);
    v17 = v58;
    v18 = *((uint32_t *)v54 + 13);
    if ( v58 > v18 )
    {
      v28 = v54;
      v29 = *((uint32_t *)v54 + 14) & 0x3FFFFFFF;
      if ( v58 > v29 )
      {
        v30 = 2 * v29;
        if ( v30 < v58 )
          v30 = *((uint32_t *)v61 + 14);
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v62,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)v54 + 12,
          v30,
          128);
        v18 = *((uint32_t *)v54 + 13);
        v28 = v54;
      }
      v31 = *((uint32_t *)v28 + 12);
      v32 = v58;
      v33 = v18 - v58 - 1;
      if ( v33 >= 0 )
      {
        v34 = (void (***)(uint32_t))(v31 + (v58 << 7) + (v33 << 7));
        do
        {
          v35 = *v34;
          --v33;
          v49 = v34;
          v34 -= 32;
          (*v35)((uint32_t)(uintptr_t)(v49));
        }
        while ( v33 != -1 );
        v18 = *((uint32_t *)v54 + 13);
        v31 = *((uint32_t *)v54 + 12);
        v32 = v58;
      }
      v36 = 0;
      v59 = v32 - v18;
      v37 = (hkDisplayAABB::Self *)((v18 << 7) + v31);
      if ( v59 > 0 )
      {
        do
        {
          ++v36;
          hkDisplayAABB::Construct(v37);
          v37 = (hkDisplayAABB::Self *)((char *)v37 + 128);
        }
        while ( v36 != v59 );
      }
      *((uint32_t *)v54 + 13) = v58;
      v17 = *((uint32_t *)v61 + 14);
    }
    v66 = 0;
    v67 = 0;
    v68 = 0x80000000;
    if ( v17 <= 0 )
    {
      v67 = v17;
    }
    else
    {
      hkArrayUtil::reserve((hkArrayUtil::Self *)v62, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v66, v17, 4);
      v67 = v17;
      if ( *((int *)v61 + 14) > 0 )
      {
        v56 = 0;
        v19 = 0;
        do
        {
          v53 = 4 * v19;
          v20 = *(uint32_t *)(*((uint32_t *)v61 + 13) + 4 * v19);
          v69 = 3.40282e38f;
          v70 = 3.40282e38f;
          v71 = 3.40282e38f;
          v72 = 3.40282e38f;
          v21 = 0;
          v73 = -3.40282e38f;
          v74 = -3.40282e38f;
          v75 = -3.40282e38f;
          v76 = -3.40282e38f;
          v22 = *(uint32_t *)(v20 + 80);
          if ( v22 > 0 )
          {
            do
            {
              v23 = *(uint32_t *)(*(uint32_t *)(v20 + 76) + 4 * v21);
              if ( *(uint32_t *)(v23 + 16) != 0 )
              {
                (*(void (**)(uint32_t, int, float *))(**((uint32_t **)v61 + 22) + 72))(
                  *((uint32_t *)v61 + 22),
                  v23 + 36,
                  &v77);
                v73 = fmaxf(v73, v81);
                v74 = fmaxf(v74, v82);
                v75 = fmaxf(v75, v83);
                v76 = fmaxf(v76, v84);
                v69 = fminf(v69, v77);
                v70 = fminf(v70, v78);
                v71 = fminf(v71, v79);
                v72 = fminf(v72, v80);
                v22 = *(uint32_t *)(v20 + 80);
              }
              ++v21;
            }
            while ( v21 < v22 );
          }
          v24 = v56 << 7;
          hkDisplayAABB::setExtents(
            (hkDisplayAABB::Self *)((v56++ << 7) + *((uint32_t *)v54 + 12)),
            (const hkVector4f::Self *)&v69,
            (const hkVector4f::Self *)&v73);
          *(uint32_t *)(v66 + v53) = *((uint32_t *)v54 + 12) + v24;
          v19 = v56;
        }
        while ( *((uint32_t *)v61 + 14) > v56 );
      }
    }
    (*(void (**)(char *))(**((uint32_t **)v54 + 6) + 116))(v62);
    v67 = 0;
    if ( v68 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v66,
        4 * v68);
  }
  LODWORD(v25) = (uint32_t)(uintptr_t)(v51);
  v26 = *v51;
  v27 = *(uint32_t **)(*v51 + 4);
  if ( (unsigned int)(uintptr_t)(v27) < *(uint32_t *)(*v51 + 12) )
  {
    *v27 = (uint32_t)(uintptr_t)("Et");
    v25 = __rdtsc();
    v27[1] = v25;
    *(uint32_t *)(v26 + 4) = (uint32_t)(uintptr_t)(v27 + 3);
  }
  return v25;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIslandViewer::registerViewer  (binary VA: 0x1838290)
// Original: hkpSimulationIslandViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpSimulationIslandViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Simulation Islands",
             hkpSimulationIslandViewer::create);
  hkpSimulationIslandViewer::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIslandViewer::Construct  (binary VA: 0x18382e0)
// Original: hkpSimulationIslandViewer::hkpSimulationIslandViewer
// ----------------------------------------------------------------------------
int hkpSimulationIslandViewer::Construct(int a1, int a2)
{
  int result;
  int v3;
  hkpWorld::Self *v4;

  hkpWorldViewerBase::Construct(a1, a2);
  *(uint8_t *)(a1 + 44) = 1;
  *(uint8_t *)(a1 + 45) = 1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A2BC8);
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20A2C00);
  *(uint32_t *)(a1 + 40) = ((uint32_t)(uintptr_t)&off_20A2C44);
  result = *(uint32_t *)(a1 + 36);
  *(uint32_t *)(a1 + 32) = ((uint32_t)(uintptr_t)&off_20A2C2C);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0x80000000;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0x80000000;
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v3++);
      hkpWorld::addWorldPostSimulationListener(v4, (hkpWorldPostSimulationListener::Self *)(a1 + 40));
      result = *(uint32_t *)(a1 + 36);
    }
    while ( v3 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimulationIslandViewer::create  (binary VA: 0x18383a0)
// Original: hkpSimulationIslandViewer::create
// ----------------------------------------------------------------------------
int hkpSimulationIslandViewer::create(int a1)
{
  int address;
  int v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         72);
  hkpSimulationIslandViewer::Construct(v2, a1);
  if ( v2 != 0 )
    return v2 + 8;
  else
    return 0;
}


