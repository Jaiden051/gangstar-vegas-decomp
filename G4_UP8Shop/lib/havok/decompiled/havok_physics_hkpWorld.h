#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpWorld.h
// Library: havok | Module: havok_physics_hkpWorld
// Binary Address Span: 0x172b610 .. 0x173ce50 (114 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x172b610] (22 bytes) hkpWorld::staticClass(void)
// void *hkpWorld::staticClass();
// [0x1733680] (543 bytes) hkpWorld::hkpWorld(hkFinishLoadedObjectFlag)
// int hkpWorld::hkpWorld(int a1);
// [0x17338a0] (218 bytes) hkpWorld::attachActionToEntity(hkpAction *,hkpEntity *)
// int hkpWorld::attachActionToEntity(hkpWorld *this, hkpAction *a2, hkpEntity *a3);
// [0x1733980] (373 bytes) hkpWorld::detachActionFromEntity(hkpAction *,hkpEntity *)
// int hkpWorld::detachActionFromEntity( hkpWorld *this, hkpSimulationIsland **a2, hkpEntity *a3, int a4, int a5, int a6);
// [0x1733b00] (32 bytes) hkpWorld::setGravity(hkVector4f const&)
// hkpWorld *hkpWorld::setGravity(hkpWorld *this, const hkVector4f *a2);
// [0x1733b20] (112 bytes) hkpWorld::addActionListener(hkpActionListener *)
// int hkpWorld::addActionListener(hkpWorld *this, hkpActionListener *a2);
// [0x1733b90] (94 bytes) hkpWorld::removeActionListener(hkpActionListener *)
// hkpWorld *hkpWorld::removeActionListener(hkpWorld *this, hkpActionListener *a2);
// [0x1733bf0] (112 bytes) hkpWorld::addConstraintListener(hkpConstraintListener *)
// int hkpWorld::addConstraintListener(hkpWorld *this, hkpConstraintListener *a2);
// [0x1733c60] (94 bytes) hkpWorld::removeConstraintListener(hkpConstraintListener *)
// hkpWorld *hkpWorld::removeConstraintListener(hkpWorld *this, hkpConstraintListener *a2);
// [0x1733cc0] (112 bytes) hkpWorld::addEntityListener(hkpEntityListener *)
// int hkpWorld::addEntityListener(uint32_t *a1, int a2);
// [0x1733d30] (94 bytes) hkpWorld::removeEntityListener(hkpEntityListener *)
// uint32_t *hkpWorld::removeEntityListener(uint32_t *a1, int a2);
// [0x1733d90] (112 bytes) hkpWorld::addPhantomListener(hkpPhantomListener *)
// int hkpWorld::addPhantomListener(hkpWorld *this, hkpPhantomListener *a2);
// [0x1733e00] (94 bytes) hkpWorld::removePhantomListener(hkpPhantomListener *)
// hkpWorld *hkpWorld::removePhantomListener(hkpWorld *this, hkpPhantomListener *a2);
// [0x1733e60] (112 bytes) hkpWorld::addIslandActivationListener(hkpIslandActivationListener *)
// int hkpWorld::addIslandActivationListener(uint32_t *a1, int a2);
// [0x1733ed0] (94 bytes) hkpWorld::removeIslandActivationListener(hkpIslandActivationListener *)
// uint32_t *hkpWorld::removeIslandActivationListener(uint32_t *a1, int a2);
// [0x1733f30] (112 bytes) hkpWorld::addWorldPostCollideListener(hkpWorldPostCollideListener *)
// int hkpWorld::addWorldPostCollideListener(uint32_t *a1, int a2);
// [0x1733fa0] (94 bytes) hkpWorld::removeWorldPostCollideListener(hkpWorldPostCollideListener *)
// uint32_t *hkpWorld::removeWorldPostCollideListener(uint32_t *a1, int a2);
// [0x1734000] (112 bytes) hkpWorld::addWorldPostSimulationListener(hkpWorldPostSimulationListener *)
// int hkpWorld::addWorldPostSimulationListener(hkpWorld *this, hkpWorldPostSimulationListener *a2);
// [0x1734070] (94 bytes) hkpWorld::removeWorldPostSimulationListener(hkpWorldPostSimulationListener *)
// hkpWorld *hkpWorld::removeWorldPostSimulationListener(hkpWorld *this, hkpWorldPostSimulationListener *a2);
// [0x17340d0] (112 bytes) hkpWorld::addWorldPostIntegrateListener(hkpWorldPostIntegrateListener *)
// int hkpWorld::addWorldPostIntegrateListener(uint32_t *a1, int a2);
// [0x1734140] (94 bytes) hkpWorld::removeWorldPostIntegrateListener(hkpWorldPostIntegrateListener *)
// uint32_t *hkpWorld::removeWorldPostIntegrateListener(uint32_t *a1, int a2);
// [0x17341a0] (112 bytes) hkpWorld::addIslandPostCollideListener(hkpIslandPostCollideListener *)
// int hkpWorld::addIslandPostCollideListener(uint32_t *a1, int a2);
// [0x1734210] (94 bytes) hkpWorld::removeIslandPostCollideListener(hkpIslandPostCollideListener *)
// uint32_t *hkpWorld::removeIslandPostCollideListener(uint32_t *a1, int a2);
// [0x1734270] (112 bytes) hkpWorld::addIslandPostIntegrateListener(hkpIslandPostIntegrateListener *)
// int hkpWorld::addIslandPostIntegrateListener(uint32_t *a1, int a2);
// [0x17342e0] (94 bytes) hkpWorld::removeIslandPostIntegrateListener(hkpIslandPostIntegrateListener *)
// uint32_t *hkpWorld::removeIslandPostIntegrateListener(uint32_t *a1, int a2);
// [0x1734340] (112 bytes) hkpWorld::addContactListener(hkpContactListener *)
// int hkpWorld::addContactListener(uint32_t *a1, int a2);
// [0x17343b0] (94 bytes) hkpWorld::removeContactListener(hkpContactListener *)
// uint32_t *hkpWorld::removeContactListener(uint32_t *a1, int a2);
// [0x1734410] (112 bytes) hkpWorld::addWorldDeletionListener(hkpWorldDeletionListener *)
// int hkpWorld::addWorldDeletionListener(hkpWorld *this, hkpWorldDeletionListener *a2);
// [0x1734480] (94 bytes) hkpWorld::removeWorldDeletionListener(hkpWorldDeletionListener *)
// hkpWorld *hkpWorld::removeWorldDeletionListener(hkpWorld *this, hkpWorldDeletionListener *a2);
// [0x17344e0] (112 bytes) hkpWorld::addContactImpulseLimitBreachedListener(hkpContactImpulseLimitBreachedListener *)
// int hkpWorld::addContactImpulseLimitBreachedListener(uint32_t *a1, int a2);
// [0x1734550] (94 bytes) hkpWorld::removeContactImpulseLimitBreachedListener(hkpContactImpulseLimitBreachedListener *)
// uint32_t *hkpWorld::removeContactImpulseLimitBreachedListener(uint32_t *a1, int a2);
// [0x17345b0] (168 bytes) hkpWorld::addWorldExtension(hkpWorldExtension *)
// int hkpWorld::addWorldExtension(hkpWorld *this, hkpWorldExtension *a2);
// [0x1734660] (178 bytes) hkpWorld::removeWorldExtension(hkpWorldExtension *)
// int hkpWorld::removeWorldExtension(hkpWorld *this, hkpWorldExtension *a2);
// [0x1734720] (60 bytes) hkpWorld::findWorldExtension(int)const
// int hkpWorld::findWorldExtension(hkpWorld *this, int a2);
// [0x1734760] (29 bytes) hkpWorld::getCurrentTime(void)const
// long double hkpWorld::getCurrentTime(hkpWorld *this);
// [0x1734780] (29 bytes) hkpWorld::getCurrentPsiTime(void)const
// long double hkpWorld::getCurrentPsiTime(hkpWorld *this);
// [0x17347a0] (49 bytes) hkpWorld::setFrameTimeMarker(float)
// int hkpWorld::setFrameTimeMarker(hkpSimulation **this, float a2);
// [0x17347e0] (37 bytes) hkpWorld::isSimulationAtMarker(void)const
// int hkpWorld::isSimulationAtMarker(hkpSimulation **this);
// [0x1734810] (37 bytes) hkpWorld::isSimulationAtPsi(void)const
// int hkpWorld::isSimulationAtPsi(hkpSimulation **this);
// [0x1734840] (166 bytes) hkpWorld::finishMtStep(hkJobQueue *,hkThreadPool *)
// int hkpWorld::finishMtStep(int a1, int a2, int a3);
// [0x17348f0] (32 bytes) hkpWorld::getMultithreadConfig(hkpMultithreadConfig &)
// int hkpWorld::getMultithreadConfig(hkpWorld *this, hkpMultithreadConfig *a2);
// [0x1734910] (40 bytes) hkpWorld::setMultithreadConfig(hkpMultithreadConfig const&,hkJobQueue *)
// int hkpWorld::setMultithreadConfig(hkpWorld *this, const hkpMultithreadConfig *a2, hkJobQueue *a3);
// [0x1734940] (9 bytes) hkpWorld::checkDeterminismOfIslandBroadPhase(hkpSimulationIsland const*)
// void hkpWorld::checkDeterminismOfIslandBroadPhase();
// [0x1734950] (9 bytes) hkpWorld::checkDeterminism(void)
// void hkpWorld::checkDeterminism();
// [0x1734960] (1323 bytes) hkpWorld::getCinfo(hkpWorldCinfo &)const
// int hkpWorld::getCinfo(hkpWorld *a1, uint32_t *a2);
// [0x1734e90] (12 bytes) hkpWorld::getMemoryWatchDog(void)const
// int hkpWorld::getMemoryWatchDog(hkpWorld *this);
// [0x1734ea0] (147 bytes) hkpWorld::setMemoryWatchDog(hkWorldMemoryAvailableWatchDog *)
// int hkpWorld::setMemoryWatchDog(hkpWorld *this, hkWorldMemoryAvailableWatchDog *a2);
// [0x1734f40] (9 bytes) hkpWorld::checkAccessGetActiveSimulationIslands(void)const
// void hkpWorld::checkAccessGetActiveSimulationIslands();
// [0x1734f50] (170 bytes) hkpWorld::setBroadPhaseBorder(hkpBroadPhaseBorder *)
// int hkpWorld::setBroadPhaseBorder(hkpWorld *this, hkpBroadPhaseBorder *a2);
// [0x1735000] (15 bytes) hkpWorld::getBroadPhaseBorder(void)const
// int hkpWorld::getBroadPhaseBorder(hkpWorld *this);
// [0x17350e0] (211 bytes) hkpWorld::castRay(hkpWorldRayCastInput const&,hkpRayHitCollector &)const
// int hkpWorld::castRay(int a1, int *a2, int a3);
// [0x17351c0] (211 bytes) hkpWorld::castRay(hkpWorldRayCastInput const&,hkpWorldRayCastOutput &)const
// int hkpWorld::castRay(int a1, int a2, int a3);
// [0x17352a0] (518 bytes) hkpWorld::castRayMt(hkpWorldRayCastCommand *,int,hkJobQueue *,hkThreadPool *,hkSemaphore *,int)const
// int hkpWorld::castRayMt( uint32_t *a1, int a2, int a3, pthread_mutex_t *a4, int a5, hkSemaphore *a6, int *a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, pthread_mutex_t *a16, int a17, hkSemaphore *a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);
// [0x17354b0] (648 bytes) hkpWorld::getClosestPoints(hkpCollidable const*,hkpCollisionInput const&,hkpCdPointCollector &)const
// int hkpWorld::getClosestPoints(int a1, uint32_t *a2, int a3, int a4);
// [0x1735740] (550 bytes) hkpWorld::getClosestPointsMt(hkpWorldGetClosestPointsCommand *,int,hkJobQueue *,hkThreadPool *,hkSemaphore *,int)const
// int hkpWorld::getClosestPointsMt( uint32_t *a1, int a2, int a3, pthread_mutex_t *a4, int a5, hkSemaphore *a6, uint32_t *a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, pthread_mutex_t *a16, int a17, hkSemaphore *a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);
// [0x1735970] (664 bytes) hkpWorld::getPenetrations(hkpCollidable const*,hkpCollisionInput const&,hkpCdBodyPairCollector &)const
// int hkpWorld::getPenetrations(int a1, uint32_t *a2, int a3, int a4);
// [0x1735c10] (251 bytes) hkpWorld::linearCast(hkpCollidable const*,hkpLinearCastInput const&,hkpCdPointCollector &,hkpCdPointCollector*)const
// int hkpWorld::linearCast(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x1735d10] (486 bytes) hkpWorld::linearCastMt(hkpWorldLinearCastCommand *,int,hkJobQueue *,hkThreadPool *,hkSemaphore *,int)const
// int hkpWorld::linearCastMt( uint32_t *a1, int a2, int a3, pthread_mutex_t *a4, int a5, hkSemaphore *a6, uint32_t *a7, int a8, int a9, int a10, uint32_t *a11, int a12, int a13, int a14, int a15, pthread_mutex_t *a16, int a17, hkSemaphore *a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);
// [0x1735f00] (898 bytes) hkpWorld::getWorldAsOneSystem(void)const
// hkpPhysicsSystem *hkpWorld::getWorldAsOneSystem(hkpWorld *this);
// [0x1736290] (1063 bytes) hkpWorld::getWorldAsSystems(hkArray<hkpPhysicsSystem *,hkContainerHeapAllocator> &)const
// int *hkpWorld::getWorldAsSystems(hkpWorld *a1, hkMemoryAllocator *a2);
// [0x17366c0] (50 bytes) hkpWorld::internal_executePendingOperations(void)
// int hkpWorld::internal_executePendingOperations(hkpWorld *this);
// [0x1736700] (50 bytes) hkpWorld::internal_executePendingBodyOperations(void)
// int hkpWorld::internal_executePendingBodyOperations(hkpWorld *this);
// [0x1736740] (1819 bytes) hkpWorld::shiftBroadPhase(hkVector4f const&,hkVector4f&,hkpWorld::CachedAabbUpdate)
// int hkpWorld::shiftBroadPhase( int a1, int *a2, float *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18);
// [0x1736e60] (978 bytes) hkpWorld::removeActionImmediately(hkpAction *)
// hkpWorld *hkpWorld::removeActionImmediately(hkpWorld *this, hkpAction *a2, int a3, int a4, int a5, int a6);
// [0x1737240] (98 bytes) hkpWorld::checkConstraintsViolated(void)
// int *hkpWorld::checkConstraintsViolated(hkpWorld *this);
// [0x17372b0] (48 bytes) hkpWorld::queueOperation(hkWorldOperation::BaseOperation const&)
// int hkpWorld::queueOperation(int a1, int a2);
// [0x17372e0] (274 bytes) hkpWorld::reenableCollisionBetweenEntityPair(hkpEntity *,hkpEntity *)
// int hkpWorld::reenableCollisionBetweenEntityPair(hkpWorld *this, hkpEntity *a2, hkpEntity *a3);
// [0x1737400] (592 bytes) hkpWorld::addEntity(hkpEntity *,hkpEntityActivation)
// hkpEntity *hkpWorld::addEntity(hkpWorld *a1, hkpEntity *a2, int a3);
// [0x1737650] (344 bytes) hkpWorld::removeEntity(hkpEntity *)
// hkpWorld *hkpWorld::removeEntity(hkpWorld *this, hkpEntity *a2, hkpWorld *a3);
// [0x17377b0] (133 bytes) hkpWorld::reintegrateAndRecollideEntities(hkpEntity **,int,hkpWorld::ReintegrationRecollideMode)
// int hkpWorld::reintegrateAndRecollideEntities(int a1, int a2, int a3, int a4);
// [0x1737840] (415 bytes) hkpWorld::removePhantom(hkpPhantom *)
// int hkpWorld::removePhantom(hkpWorld *this, hkpPhantom *a2);
// [0x17379e0] (306 bytes) hkpWorld::activateRegion(hkAabb const&)
// int hkpWorld::activateRegion(hkpWorld *this, const hkAabb *a2, int a3);
// [0x1737b20] (1129 bytes) hkpWorld::updateCollisionFilterOnPhantom(hkpPhantom *,hkpUpdateCollectionFilterMode)
// int hkpWorld::updateCollisionFilterOnPhantom(hkpWorld *a1, int a2, int a3);
// [0x1737f90] (1979 bytes) hkpWorld::addEntityBatch(hkpEntity * const*,int,hkpEntityActivation)
// int hkpWorld::addEntityBatch(int a1, hkpEntity *a2, int a3, int a4);
// [0x1738750] (1207 bytes) hkpWorld::removeEntityBatch(hkpEntity * const*,int)
// hkpWorld *hkpWorld::removeEntityBatch(hkpWorld *this, hkpWorld **a2, int a3);
// [0x1738c10] (2316 bytes) hkpWorld::updateCollisionFilterOnEntity(hkpEntity *,hkpUpdateCollisionFilterOnEntityMode,hkpUpdateCollectionFilterMode)
// int hkpWorld::updateCollisionFilterOnEntity(hkpWorld *a1, int a2, int a3, int a4);
// [0x1739520] (400 bytes) hkpWorld::addPhantom(hkpPhantom *)
// hkpPhantom *hkpWorld::addPhantom(hkpWorld *this, hkpPhantom *a2);
// [0x17396b0] (1513 bytes) hkpWorld::addPhantomBatch(hkpPhantom * const*,int)
// int hkpWorld::addPhantomBatch(hkpWorld *this, hkpPhantom *const *a2, int a3);
// [0x1739ca0] (1170 bytes) hkpWorld::removePhantomBatch(hkpPhantom * const*,int)
// int hkpWorld::removePhantomBatch(hkpWorld *this, hkpPhantom *const *a2, int a3);
// [0x173a140] (1474 bytes) hkpWorld::removeAll(void)
// int hkpWorld::removeAll(hkpWorld *this);
// [0x173a710] (3086 bytes) hkpWorld::~hkpWorld()
// void hkpWorld::~hkpWorld(hkpWorld *this);
// [0x173b320] (93 bytes) hkpWorld::~hkpWorld()
// void hkpWorld::~hkpWorld(hkpWorld *this);
// [0x173b380] (668 bytes) hkpWorld::addAction(hkpAction *)
// hkpAction *hkpWorld::addAction(hkpWorld *this, hkpAction *a2);
// [0x173b620] (369 bytes) hkpWorld::addConstraint(hkpConstraintInstance *)
// int hkpWorld::addConstraint(hkpWorld *this, hkpConstraintInstance *a2);
// [0x173b7a0] (127 bytes) hkpWorld::createAndAddConstraintInstance(hkpRigidBody *,hkpRigidBody *,hkpConstraintData *)
// hkpConstraintInstance *hkpWorld::createAndAddConstraintInstance( hkpWorld *this, hkpRigidBody *a2, hkpRigidBody *a3, hkpConstraintData *a4);
// [0x173b820] (394 bytes) hkpWorld::addPhysicsSystem(hkpPhysicsSystem const*)
// void hkpWorld::addPhysicsSystem(hkpWorld *this, const hkpPhysicsSystem *a2);
// [0x173b9b0] (394 bytes) hkpWorld::removeConstraint(hkpConstraintInstance *)
// 0x173b9b0 hkpWorld::removeConstraint(hkpConstraintInstance *)
// [0x173bb40] (86 bytes) hkpWorld::removeAction(hkpAction *)
// hkpWorld *hkpWorld::removeAction(hkpWorld *this, hkpAction *a2);
// [0x173bba0] (417 bytes) hkpWorld::removePhysicsSystem(hkpPhysicsSystem const*)
// int hkpWorld::removePhysicsSystem(hkpWorld *this, const hkpPhysicsSystem *a2);
// [0x173bd50] (1532 bytes) hkpWorld::updateCollisionFilterOnWorld(hkpUpdateCollisionFilterOnWorldMode,hkpUpdateCollectionFilterMode)
// int hkpWorld::updateCollisionFilterOnWorld(int a1, int a2, int a3);
// [0x173c350] (320 bytes) hkpWorld::setCollisionFilter(hkpCollisionFilter *,hkBool,hkpUpdateCollisionFilterOnWorldMode,hkpUpdateCollectionFilterMode)
// int hkpWorld::setCollisionFilter(int a1, int a2, char a3, int a4, int a5);
// [0x173c490] (72 bytes) hkpWorld::addBodyOperation(hkpRigidBody *,hkpBodyOperation *,int,int)
// int hkpWorld::addBodyOperation(int a1, int a2, int a3, int a4, int a5);
// [0x173c4e0] (102 bytes) hkpWorld::queueCallback(hkWorldOperation::UserCallback *,unsigned long)
// int hkpWorld::queueCallback(int a1, int a2, int a3);
// [0x173c550] (146 bytes) hkpWorld::findInitialContactPoints(hkpEntity **,int)
// int hkpWorld::findInitialContactPoints(hkpWorld *this, hkpEntity **a2, int a3);
// [0x173c5f0] (124 bytes) hkpWorld::findInitialContactPointsOfAllEntities(void)
// int hkpWorld::findInitialContactPointsOfAllEntities(hkpWorld *this);
// [0x173c670] (278 bytes) hkpWorld::calcRequiredSolverBufferSize(hkWorldMemoryAvailableWatchDog::MemUsageInfo &)
// int hkpWorld::calcRequiredSolverBufferSize(hkpWorldOperationUtil *a1, signed int *a2);
// [0x173c790] (40 bytes) hkpWorld::lock(void)
// int hkpWorld::lock(hkpWorld *this);
// [0x173c7c0] (38 bytes) hkpWorld::unlock(void)
// int hkpWorld::unlock(hkpWorld *this);
// [0x173c7f0] (180 bytes) hkpWorld::stepDeltaTime(float)
// int hkpWorld::stepDeltaTime(hkpWorld *this, float a2);
// [0x173c8b0] (73 bytes) hkpWorld::integrate(float)
// int hkpWorld::integrate(hkpWorld *this, float a2);
// [0x173c900] (61 bytes) hkpWorld::collide(void)
// int hkpWorld::collide(hkpWorld *this);
// [0x173c940] (61 bytes) hkpWorld::advanceTime(void)
// int hkpWorld::advanceTime(hkpWorld *this);
// [0x173c980] (90 bytes) hkpWorld::initMtStep(hkJobQueue *,float)
// int hkpWorld::initMtStep(hkpWorld *this, hkJobQueue *a2, float a3);
// [0x173c9e0] (128 bytes) hkpWorld::stepMultithreaded(hkJobQueue *,hkThreadPool *,float)
// int hkpWorld::stepMultithreaded(hkpWorld *a1, pthread_mutex_t *a2, int a3, float a4);
// [0x173ca60] (9 bytes) hkpWorld::lockReadOnly(void)
// void hkpWorld::lockReadOnly();
// [0x173ca70] (9 bytes) hkpWorld::unlockReadOnly(void)
// void hkpWorld::unlockReadOnly();
// [0x173ca80] (12 bytes) hkpWorld::checkUnmarked(void)
// int hkpWorld::checkUnmarked();
// [0x173ca90] (149 bytes) hkpWorld::lockIslandForConstraintUpdate(hkpSimulationIsland *)
// hkpWorld *hkpWorld::lockIslandForConstraintUpdate(pthread_mutex_t **this);
// [0x173cb30] (149 bytes) hkpWorld::lockForIslandSplit(hkpSimulationIsland *)
// hkpWorld *hkpWorld::lockForIslandSplit(pthread_mutex_t **this);
// [0x173cbd0] (105 bytes) hkpWorld::unlockIslandForConstraintUpdate(hkpSimulationIsland *)
// int hkpWorld::unlockIslandForConstraintUpdate(hkpWorld *this);
// [0x173cc40] (105 bytes) hkpWorld::unlockForIslandSplit(hkpSimulationIsland *)
// int hkpWorld::unlockForIslandSplit(hkpWorld *this);
// [0x173ccb0] (98 bytes) hkpWorld::setMultithreadedAccessChecking(hkpWorld::MtAccessChecking)
// hkMultiThreadCheck *hkpWorld::setMultithreadedAccessChecking(int a1, int a2);
// [0x173cd20] (46 bytes) hkpWorld::getMultithreadedAccessChecking(void)const
// bool hkpWorld::getMultithreadedAccessChecking(hkpWorld *this);
// [0x173ce50] (9733 bytes) hkpWorld::hkpWorld(hkpWorldCinfo const&,unsigned int)
// 0x173ce50 hkpWorld::hkpWorld(hkpWorldCinfo const&,unsigned int)
