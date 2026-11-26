#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpContinu.h
// Library: havok | Module: havok_physics_hkpContinu
// Binary Address Span: 0x1740630 .. 0x1747200 (27 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1740630] (9 bytes) hkpContinuousSimulation::assertThereIsNoCollisionInformationForEntities(hkpEntity **,int,hkpWorld *)
// void hkpContinuousSimulation::assertThereIsNoCollisionInformationForEntities();
// [0x1740640] (9 bytes) hkpContinuousSimulation::assertThereIsNoCollisionInformationForAgent(hkpAgentNnEntry *)
// void hkpContinuousSimulation::assertThereIsNoCollisionInformationForAgent();
// [0x1740650] (63 bytes) hkpContinuousSimulation::warpTime(float)
// int hkpContinuousSimulation::warpTime(hkpContinuousSimulation *this, float a2);
// [0x1740710] (150 bytes) hkpContinuousSimulation::~hkpContinuousSimulation()
// void hkpContinuousSimulation::~hkpContinuousSimulation(hkpContinuousSimulation *this);
// [0x17407b0] (93 bytes) hkpContinuousSimulation::~hkpContinuousSimulation()
// void hkpContinuousSimulation::~hkpContinuousSimulation(hkpContinuousSimulation *this);
// [0x1740810] (274 bytes) hkpContinuousSimulation::removeCollisionInformationForAgent(hkpAgentNnEntry *)
// int hkpContinuousSimulation::removeCollisionInformationForAgent(int a1, int a2);
// [0x1740930] (1216 bytes) hkpContinuousSimulation::collideEntitiesNeedingPsiCollisionDetectionNarrowPhase_toiOnly(hkpProcessCollisionInput const&,hkPointerMap<unsigned int,hkpEntity *,hkContainerHeapAllocator> &)
// void hkpContinuousSimulation::collideEntitiesNeedingPsiCollisionDetectionNarrowPhase_toiOnly( int a1, int *a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3);
// [0x1740df0] (245 bytes) hkpContinuousSimulation::hkpContinuousSimulation(hkpWorld *)
// void hkpContinuousSimulation::hkpContinuousSimulation(hkpContinuousSimulation *this, hkpWorld *a2);
// [0x1740ef0] (89 bytes) hkpContinuousSimulation::create(hkpWorld *)
// hkpContinuousSimulation *hkpContinuousSimulation::create(hkpContinuousSimulation *this);
// [0x1740f50] (981 bytes) hkpContinuousSimulation::collideEntitiesBroadPhaseContinuousFindPairs(hkpEntity **,int,hkpWorld *,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// void hkpContinuousSimulation::collideEntitiesBroadPhaseContinuousFindPairs( int a1, int *a2, int a3, int a4, int a5, int a6);
// [0x1741330] (1984 bytes) hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous(hkpEntity **,int,hkpWorld *,signed char *)
// void hkpContinuousSimulation::collideEntitiesBroadPhaseContinuous( hkpContinuousSimulation *this, hkpEntity **a2, int a3, hkpWorld *a4, char *a5);
// [0x1741af0] (85 bytes) hkpContinuousSimulation::collideEntitiesNarrowPhaseContinuous(hkpEntity **,int,hkpProcessCollisionInput const&)
// int hkpContinuousSimulation::collideEntitiesNarrowPhaseContinuous(int a1, int a2, int a3, int a4);
// [0x1741b50] (709 bytes) hkpContinuousSimulation::reintegrateAndRecollideEntities(hkpEntity **,int,hkpWorld *,int)
// 0x1741b50 hkpContinuousSimulation::reintegrateAndRecollideEntities(hkpEntity **,int,hkpWorld *,int)
// [0x1741e20] (646 bytes) hkpContinuousSimulation::removeToiEventsOfEntities(hkpEntity **,int)
// void hkpContinuousSimulation::removeToiEventsOfEntities(hkpContinuousSimulation *this, hkpEntity **a2, int a3);
// [0x17420b0] (373 bytes) hkpContinuousSimulation::removeToiEventsOfEntity(hkpEntity *)
// void hkpContinuousSimulation::removeToiEventsOfEntity(hkpContinuousSimulation *this, hkpEntity *a2);
// [0x1742230] (1021 bytes) hkpContinuousSimulation::handleSimpleToi(hkpWorld *,hkpToiEvent &,float,float)
// int hkpContinuousSimulation::handleSimpleToi( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19);
// [0x1742630] (1476 bytes) hkpContinuousSimulation::handleAllToisTill(float)
// int hkpContinuousSimulation::handleAllToisTill(hkpContinuousSimulation *this, int a2);
// [0x1742c00] (460 bytes) hkpContinuousSimulation::advanceTimeInternal(void)
// int hkpContinuousSimulation::advanceTimeInternal(long double a1, hkpContinuousSimulation *this);
// [0x1742dd0] (240 bytes) hkpContinuousSimulation::advanceTime(void)
// int hkpContinuousSimulation::advanceTime(long double a1, hkpWorld **this);
// [0x1744230] (132 bytes) hkpContinuousSimulation::resetCollisionInformationForEntities(hkpEntity **,int,hkpWorld *,hkpSimulation::ResetCollisionInformation)
// void hkpContinuousSimulation::resetCollisionInformationForEntities( hkpContinuousSimulation *a1, hkpEntity **a2, hkpEntity **a3, int a4, int a5);
// [0x17442c0] (434 bytes) hkpContinuousSimulation::addToiEvent(hkpProcessCollisionOutput const&,hkpAgentNnEntry const&)
// void hkpContinuousSimulation::addToiEvent(uint32_t *a1, uint32_t *a2, int a3);
// [0x1744480] (612 bytes) hkpContinuousSimulation::collideIslandNarrowPhaseContinuous(hkpSimulationIsland *,hkpProcessCollisionInput const&)
// int hkpContinuousSimulation::collideIslandNarrowPhaseContinuous(uint32_t *a1, int a2, uint32_t *a3);
// [0x17446f0] (999 bytes) hkpContinuousSimulation::collideInternal(hkStepInfo const&)
// int hkpContinuousSimulation::collideInternal(hkpWorld **a1, float *a2);
// [0x1744ae0] (227 bytes) hkpContinuousSimulation::processAgentCollideContinuous(hkpAgentNnEntry *,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// void hkpContinuousSimulation::processAgentCollideContinuous(uint32_t *a1, int a2, uint32_t *a3, float *a4);
// [0x1744bd0] (1150 bytes) hkpContinuousSimulation::collideEntitiesOfOneIslandNarrowPhaseContinuous_toiOnly(hkpEntity **,int,hkpProcessCollisionInput const&,hkPointerMap<unsigned int,hkpEntity *,hkContainerHeapAllocator> &)
// hkLifoAllocator *hkpContinuousSimulation::collideEntitiesOfOneIslandNarrowPhaseContinuous_toiOnly( uint32_t *a1, int a2, int a3, uint32_t *a4, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a5);
// [0x1745050] (558 bytes) hkpContinuousSimulation::processAgentNnEntries(hkpAgentNnEntry * const*,int,hkpProcessCollisionInput const&,hkpSimulationIsland *,hkpContinuousSimulation::CollisionQualityOverride)
// int hkpContinuousSimulation::processAgentNnEntries(uint32_t *a1, int a2, int a3, int *a4, int a5, int a6);
// [0x1747200] (2739 bytes) hkpContinuousSimulation::simulateToi(hkpWorld *,hkpToiEvent &,float,float)
// 0x1747200 hkpContinuousSimulation::simulateToi(hkpWorld *,hkpToiEvent &,float,float)
