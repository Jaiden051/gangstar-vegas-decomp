#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpSimulat.h
// Library: havok | Module: havok_physics_hkpSimulat
// Binary Address Span: 0x172d9b0 .. 0x18383a0 (59 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x172d9b0] (22 bytes) hkpSimulation::staticClass(void)
// void *hkpSimulation::staticClass();
// [0x17405f0] (9 bytes) hkpSimulation::stepBeginSt(hkJobQueue *,float)
// int hkpSimulation::stepBeginSt();
// [0x1740600] (9 bytes) hkpSimulation::finishMtStep(hkJobQueue *,hkThreadPool *)
// int hkpSimulation::finishMtStep();
// [0x1740610] (9 bytes) hkpSimulation::getMultithreadConfig(hkpMultithreadConfig &)
// void hkpSimulation::getMultithreadConfig();
// [0x1740620] (9 bytes) hkpSimulation::setMultithreadConfig(hkpMultithreadConfig const&,hkJobQueue *)
// void hkpSimulation::setMultithreadConfig();
// [0x176c540] (9 bytes) hkpSimulation::assertThereIsNoCollisionInformationForEntities(hkpEntity **,int,hkpWorld *)
// void hkpSimulation::assertThereIsNoCollisionInformationForEntities();
// [0x176c550] (9 bytes) hkpSimulation::removeCollisionInformationForAgent(hkpAgentNnEntry *)
// void hkpSimulation::removeCollisionInformationForAgent();
// [0x176c560] (9 bytes) hkpSimulation::assertThereIsNoCollisionInformationForAgent(hkpAgentNnEntry *)
// void hkpSimulation::assertThereIsNoCollisionInformationForAgent();
// [0x176c570] (9 bytes) hkpSimulation::warpTime(float)
// void hkpSimulation::warpTime();
// [0x176c580] (29 bytes) hkpSimulation::~hkpSimulation()
// void hkpSimulation::~hkpSimulation(hkpSimulation *this);
// [0x176c5a0] (153 bytes) hkpSimulation::stepDeltaTime(float)
// int hkpSimulation::stepDeltaTime(hkpSimulation *this, hkpWorld *a2);
// [0x176c640] (42 bytes) hkpSimulation::processAgentResetCollisionInformation(hkpAgentNnEntry *,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSimulation::processAgentResetCollisionInformation(int a1, int a2, uint32_t *a3);
// [0x176c670] (186 bytes) hkpSimulation::processAgentCollideDiscrete(hkpAgentNnEntry *,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// uint32_t *hkpSimulation::processAgentCollideDiscrete(int a1, int a2, int *a3, uint32_t *a4);
// [0x176c730] (93 bytes) hkpSimulation::~hkpSimulation()
// void hkpSimulation::~hkpSimulation(hkpSimulation *this);
// [0x176c790] (86 bytes) hkpSimulation::hkpSimulation(hkpWorld *)
// void hkpSimulation::hkpSimulation(hkpSimulation *this, hkpWorld *a2);
// [0x176c7f0] (89 bytes) hkpSimulation::create(hkpWorld *)
// hkpSimulation *hkpSimulation::create(hkpSimulation *this);
// [0x176c850] (21 bytes) hkpSimulation::setFrameTimeMarker(float)
// hkpSimulation *hkpSimulation::setFrameTimeMarker(hkpSimulation *this, float a2);
// [0x176c870] (25 bytes) hkpSimulation::isSimulationAtMarker(void)
// int hkpSimulation::isSimulationAtMarker(hkpSimulation *this);
// [0x176c890] (25 bytes) hkpSimulation::isSimulationAtPsi(void)const
// int hkpSimulation::isSimulationAtPsi(hkpSimulation *this);
// [0x176c8b0] (9 bytes) hkpSimulation::checkDeltaTimeIsOk(float)
// void hkpSimulation::checkDeltaTimeIsOk();
// [0x176c8c0] (424 bytes) hkpSimulation::reCollideAfterStepFailure(void)
// int hkpSimulation::reCollideAfterStepFailure(hkpSimulation *this);
// [0x176ca70] (447 bytes) hkpSimulation::collide(void)
// int hkpSimulation::collide(hkpSimulation *this);
// [0x176cc30] (150 bytes) hkpSimulation::snapSimulateTimeAndGetTimeToAdvanceTo(void)
// long double hkpSimulation::snapSimulateTimeAndGetTimeToAdvanceTo(hkpSimulation *this);
// [0x176ccd0] (168 bytes) hkpSimulation::advanceTime(void)
// int hkpSimulation::advanceTime(hkpWorldCallbackUtil **this);
// [0x176cd80] (1808 bytes) hkpSimulation::collideEntitiesBroadPhaseDiscrete(hkpEntity **,int,hkpWorld *)
// int hkpSimulation::collideEntitiesBroadPhaseDiscrete( hkpSimulation *this, hkpEntity **a2, int a3, hkpWorld *a4, int a5, int a6, int a7, int a8, char *a9, char *a10, int a11, int *a12, hkLifoAllocator **a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, char *a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, char *a31, int a32);
// [0x176d490] (1030 bytes) hkpSimulation::collideInternal(hkStepInfo const&)
// 0x176d490 hkpSimulation::collideInternal(hkStepInfo const&)
// [0x176d8a0] (141 bytes) hkpSimulation::applyActions(void)
// int hkpSimulation::applyActions(hkpSimulation *this);
// [0x176d930] (1707 bytes) hkpSimulation::integrateInternal(hkStepInfo const&)
// 0x176d930 hkpSimulation::integrateInternal(hkStepInfo const&)
// [0x176dfe0] (337 bytes) hkpSimulation::integrate(float)
// int hkpSimulation::integrate(hkpSimulation *this, int a2);
// [0x176e140] (4974 bytes) hkpSimulation::processAgentsOfEntities(hkpEntity **,int,hkpProcessCollisionInput const&,void (hkpSimulation::*)(hkpAgentNnEntry *,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &),hkpSimulation::FindContacts)
// void hkpSimulation::processAgentsOfEntities(int a1, int a2, int a3, int a4, char *a5, int a6, int a7);
// [0x176f4b0] (84 bytes) hkpSimulation::collideEntitiesNarrowPhaseDiscrete(hkpEntity **,int,hkpProcessCollisionInput const&,hkpSimulation::FindContacts)
// void hkpSimulation::collideEntitiesNarrowPhaseDiscrete(int a1, int a2, int a3, int a4, int a5);
// [0x176f510] (528 bytes) hkpSimulation::collideEntitiesDiscrete(hkpEntity **,int,hkpWorld *,hkStepInfo const&,hkpSimulation::FindContacts)
// hkpWorld *hkpSimulation::collideEntitiesDiscrete( int a1, hkpSimulation *a2, hkpEntity **a3, hkpWorld *a4, int *a5, int a6);
// [0x176f720] (613 bytes) hkpSimulation::reintegrateAndRecollideEntities(hkpEntity **,int,hkpWorld *,int)
// 0x176f720 hkpSimulation::reintegrateAndRecollideEntities(hkpEntity **,int,hkpWorld *,int)
// [0x176f990] (127 bytes) hkpSimulation::resetCollisionInformationForEntities(hkpEntity **,int,hkpWorld *,hkpSimulation::ResetCollisionInformation)
// void hkpSimulation::resetCollisionInformationForEntities( int a1, hkpEntityAabbUtil *a2, hkpEntity **a3, int a4, char a5);
// [0x1783740] (22 bytes) hkpSimulationIsland::getClassType(void)const
// void *hkpSimulationIsland::getClassType();
// [0x1783760] (15 bytes) hkpSimulationIsland::addCallbackRequest(hkpConstraintInstance *,int)
// int hkpSimulationIsland::addCallbackRequest(hkpSimulationIsland *this, hkpConstraintInstance *a2, char a3);
// [0x1783770] (44 bytes) hkpSimulationIsland::addConstraintToCriticalLockedIsland(hkpConstraintInstance *)
// int hkpSimulationIsland::addConstraintToCriticalLockedIsland( hkpSimulationIsland *this, hkpConstraintInstance *a2);
// [0x17837a0] (44 bytes) hkpSimulationIsland::removeConstraintFromCriticalLockedIsland(hkpConstraintInstance *)
// int hkpSimulationIsland::removeConstraintFromCriticalLockedIsland( hkpSimulationIsland *this, hkpConstraintInstance *a2);
// [0x17837d0] (274 bytes) hkpSimulationIsland::~hkpSimulationIsland()
// void hkpSimulationIsland::~hkpSimulationIsland(hkpSimulationIsland *this);
// [0x17838f0] (93 bytes) hkpSimulationIsland::~hkpSimulationIsland()
// void hkpSimulationIsland::~hkpSimulationIsland(hkpSimulationIsland *this);
// [0x1783950] (227 bytes) hkpSimulationIsland::hkpSimulationIsland(hkpWorld *)
// void hkpSimulationIsland::hkpSimulationIsland(hkpSimulationIsland *this, hkpWorld *a2);
// [0x1783a40] (114 bytes) hkpSimulationIsland::internalAddEntity(hkpEntity *)
// int hkpSimulationIsland::internalAddEntity(hkpSimulationIsland *this, hkpEntity *a2);
// [0x1783ac0] (92 bytes) hkpSimulationIsland::internalRemoveEntity(hkpEntity *)
// hkpSimulationIsland *hkpSimulationIsland::internalRemoveEntity(hkpSimulationIsland *this, hkpEntity *a2);
// [0x1783b20] (98 bytes) hkpSimulationIsland::addAction(hkpAction *)
// int hkpSimulationIsland::addAction(hkpSimulationIsland *this, hkpAction *a2);
// [0x1783b90] (118 bytes) hkpSimulationIsland::removeAction(hkpAction *)
// int hkpSimulationIsland::removeAction(hkpSimulationIsland *this, hkpAction *a2);
// [0x1783c10] (817 bytes) hkpSimulationIsland::isFullyConnected(hkUnionFind &)
// bool hkpSimulationIsland::isFullyConnected(hkpSimulationIsland *this, hkUnionFind *a2);
// [0x1783f50] (234 bytes) hkpSimulationIsland::isFullyConnected(void)
// int hkpSimulationIsland::isFullyConnected(hkpSimulationIsland *this);
// [0x1784040] (9 bytes) hkpSimulationIsland::isValid(void)
// void hkpSimulationIsland::isValid();
// [0x1784050] (40 bytes) hkpSimulationIsland::mergeConstraintInfo(hkpSimulationIsland&)
// hkpSimulationIsland *hkpSimulationIsland::mergeConstraintInfo( hkpSimulationIsland *this, hkpSimulationIsland *a2);
// [0x1784080] (9 bytes) hkpSimulationIsland::markForWrite(void)
// void hkpSimulationIsland::markForWrite();
// [0x1837630] (22 bytes) hkpSimulationIslandViewer::getProcessTag(void)
// int hkpSimulationIslandViewer::getProcessTag();
// [0x1837660] (45 bytes) hkpSimulationIslandViewer::worldAddedCallback(hkpWorld *)
// int hkpSimulationIslandViewer::worldAddedCallback(hkpSimulationIslandViewer *this, hkpWorld *a2);
// [0x18376a0] (45 bytes) hkpSimulationIslandViewer::worldRemovedCallback(hkpWorld *)
// hkpWorld *hkpSimulationIslandViewer::worldRemovedCallback(hkpSimulationIslandViewer *this, hkpWorld *a2);
// [0x18376e0] (343 bytes) hkpSimulationIslandViewer::~hkpSimulationIslandViewer()
// void hkpSimulationIslandViewer::~hkpSimulationIslandViewer(hkpSimulationIslandViewer *this);
// [0x1837870] (93 bytes) hkpSimulationIslandViewer::~hkpSimulationIslandViewer()
// void hkpSimulationIslandViewer::~hkpSimulationIslandViewer(hkpSimulationIslandViewer *this);
// [0x1837900] (2423 bytes) hkpSimulationIslandViewer::postSimulationCallback(hkpWorld *)
// int hkpSimulationIslandViewer::postSimulationCallback(hkpSimulationIslandViewer *this, hkpWorld *a2);
// [0x1838290] (66 bytes) hkpSimulationIslandViewer::registerViewer(void)
// int hkpSimulationIslandViewer::registerViewer();
// [0x18382e0] (182 bytes) hkpSimulationIslandViewer::hkpSimulationIslandViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkpSimulationIslandViewer::hkpSimulationIslandViewer(int a1, int a2);
// [0x18383a0] (92 bytes) hkpSimulationIslandViewer::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkpSimulationIslandViewer::create(int a1);
