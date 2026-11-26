#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpWorldOp.h
// Library: havok | Module: havok_physics_hkpWorldOp
// Binary Address Span: 0x174b9d0 .. 0x1779e00 (38 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x174b9d0] (1300 bytes) hkpWorldOperationUtil::updateEntityBP(hkpWorld *,hkpEntity *)
// hkpWorldOperationUtil *hkpWorldOperationUtil::updateEntityBP(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174bef0] (593 bytes) hkpWorldOperationUtil::addEntityBP(hkpWorld *,hkpEntity *)
// int hkpWorldOperationUtil::addEntityBP(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174c150] (505 bytes) hkpWorldOperationUtil::addPhantomBP(hkpWorld *,hkpPhantom *)
// int hkpWorldOperationUtil::addPhantomBP( hkpWorldOperationUtil *this, hkpWorld *a2, hkpPhantom *a3, char *a4, int a5, int a6, char *a7, int a8);
// [0x174c350] (429 bytes) hkpWorldOperationUtil::addEntitySI(hkpWorld *,hkpEntity *,hkpEntityActivation)
// int hkpWorldOperationUtil::addEntitySI(hkpSimulationIsland **a1, hkpEntity *a2, int a3);
// [0x174c500] (513 bytes) hkpWorldOperationUtil::removeEntityBP(hkpWorld *,hkpEntity *)
// int hkpWorldOperationUtil::removeEntityBP(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174c710] (425 bytes) hkpWorldOperationUtil::removePhantomBP(hkpWorld *,hkpPhantom *)
// int hkpWorldOperationUtil::removePhantomBP( hkpWorldOperationUtil *this, hkpWorld *a2, hkpPhantom *a3, int a4, int a5, int a6, char *a7, int a8);
// [0x174c8c0] (643 bytes) hkpWorldOperationUtil::removeAttachedActionsFromFixedIsland(hkpWorld *,hkpEntity *,hkArray<hkpAction *,hkContainerHeapAllocator> &)
// int hkpWorldOperationUtil::removeAttachedActionsFromFixedIsland(int a1, int a2, hkMemoryAllocator *a3);
// [0x174cb50] (743 bytes) hkpWorldOperationUtil::removeAttachedActionsFromDynamicIsland(hkpWorld *,hkpEntity *,hkArray<hkpAction *,hkContainerHeapAllocator> &)
// int hkpWorldOperationUtil::removeAttachedActionsFromDynamicIsland(int a1, int a2, hkMemoryAllocator *a3);
// [0x174ce40] (86 bytes) hkpWorldOperationUtil::addConstraintToCriticalLockedIsland(hkpWorld *,hkpConstraintInstance *)
// int hkpWorldOperationUtil::addConstraintToCriticalLockedIsland(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174cea0] (86 bytes) hkpWorldOperationUtil::removeConstraintFromCriticalLockedIsland(hkpWorld *,hkpConstraintInstance *)
// int hkpWorldOperationUtil::removeConstraintFromCriticalLockedIsland(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174cf00] (210 bytes) hkpWorldOperationUtil::addConstraintImmediately(hkpWorld *,hkpConstraintInstance *,hkpWorldOperationUtil::FireCallbacks)
// hkpWorld *hkpWorldOperationUtil::addConstraintImmediately(hkpWorldCallbackUtil *a1, hkpWorld *a2, int a3);
// [0x174cfe0] (249 bytes) hkpWorldOperationUtil::removeConstraintImmediately(hkpWorld *,hkpConstraintInstance *,hkpWorldOperationUtil::FireCallbacks)
// int hkpWorldOperationUtil::removeConstraintImmediately( hkpWorldCallbackUtil *a1, hkpWorldConstraintUtil *a2, int a3);
// [0x174d0e0] (7495 bytes) hkpWorldOperationUtil::splitSimulationIsland(hkpSimulationIsland *,hkpWorld *,hkArray<hkpSimulationIsland *,hkContainerHeapAllocator> &,hkArray<hkpEntity *,hkContainerHeapAllocator> *)
// hkLifoAllocator *hkpWorldOperationUtil::splitSimulationIsland( hkpSimulationIsland *a1, hkpWorld *a2, hkMemoryAllocator *a3, uint32_t *a4);
// [0x174ee30] (141 bytes) hkpWorldOperationUtil::validateWorld(hkpWorld *)
// int hkpWorldOperationUtil::validateWorld(hkpWorldOperationUtil *this);
// [0x174eec0] (441 bytes) hkpWorldOperationUtil::removeAttachedConstraints(hkpEntity *,hkArray<hkpConstraintInstance *,hkContainerHeapAllocator> &)
// int hkpWorldOperationUtil::removeAttachedConstraints(int a1, hkMemoryAllocator *a2);
// [0x174f080] (384 bytes) hkpWorldOperationUtil::removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus(hkpAgentNnTrack &,hkpEntity *,hkpAgentNnTrack &,hkpMotion::MotionType)
// char *hkpWorldOperationUtil::removeAttachedAgentsConnectingTheEntityAndAFixedPartnerEntityPlus( int a1, int a2, uint16_t *a3, int a4);
// [0x174f200] (421 bytes) hkpWorldOperationUtil::internalDeactivateIsland(hkpWorld *,hkpSimulationIsland *)
// int hkpWorldOperationUtil::internalDeactivateIsland(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174f3b0] (329 bytes) hkpWorldOperationUtil::markIslandInactive(hkpWorld *,hkpSimulationIsland *)
// int hkpWorldOperationUtil::markIslandInactive(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174f500] (412 bytes) hkpWorldOperationUtil::splitSimulationIsland(hkpWorld *,hkpSimulationIsland *)
// int hkpWorldOperationUtil::splitSimulationIsland(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174f6a0] (121 bytes) hkpWorldOperationUtil::splitSimulationIslands(hkpWorld *)
// int hkpWorldOperationUtil::splitSimulationIslands(hkpWorldOperationUtil *this);
// [0x174f720] (329 bytes) hkpWorldOperationUtil::markIslandInactiveMt(hkpWorld *,hkpSimulationIsland *)
// int hkpWorldOperationUtil::markIslandInactiveMt(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174f870] (375 bytes) hkpWorldOperationUtil::markIslandActive(hkpWorld *,hkpSimulationIsland *)
// int hkpWorldOperationUtil::markIslandActive(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174f9f0] (35 bytes) hkpWorldOperationUtil::removeIslandFromDirtyList(hkpWorld *,hkpSimulationIsland *)
// hkpWorld *hkpWorldOperationUtil::removeIslandFromDirtyList(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174fa20] (136 bytes) hkpWorldOperationUtil::removeIsland(hkpWorld *,hkpSimulationIsland *)
// hkpWorld *hkpWorldOperationUtil::removeIsland(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174fab0] (103 bytes) hkpWorldOperationUtil::removeEntitySI(hkpWorld *,hkpEntity *)
// hkpWorldOperationUtil *hkpWorldOperationUtil::removeEntitySI(hkpWorldOperationUtil *this, hkpWorld *a2);
// [0x174fb20] (1611 bytes) hkpWorldOperationUtil::internalMergeTwoIslands(hkpWorld *,hkpSimulationIsland *,hkpSimulationIsland *)
// hkpWorldOperationUtil *hkpWorldOperationUtil::internalMergeTwoIslands( hkpWorldOperationUtil *this, hkpWorld *a2, hkpSimulationIsland *a3);
// [0x1750170] (117 bytes) hkpWorldOperationUtil::mergeIslands(hkpWorld *,hkpEntity *,hkpEntity *)
// hkpWorldOperationUtil *hkpWorldOperationUtil::mergeIslands( hkpWorldOperationUtil *this, hkpWorld **a2, hkpSimulationIsland **a3);
// [0x17501f0] (477 bytes) hkpWorldOperationUtil::addActionsToEntitysIsland(hkpWorld *,hkpEntity *,hkArray<hkpAction *,hkContainerHeapAllocator> &)
// int hkpWorldOperationUtil::addActionsToEntitysIsland(int a1, int a2, uint32_t *a3);
// [0x17503d0] (1048 bytes) hkpWorldOperationUtil::internalActivateIsland(hkpWorld *,hkpSimulationIsland *,hkBool)
// int hkpWorldOperationUtil::internalActivateIsland(hkpWorldOperationUtil *a1, hkpWorld *a2, char a3);
// [0x17507f0] (2457 bytes) hkpWorldOperationUtil::replaceMotionObject(hkpRigidBody *,hkpMotion::MotionType,hkBool,hkBool,hkpWorld *)
// __m128i *hkpWorldOperationUtil::replaceMotionObject(__m128i **a1, int a2, char a3, char a4, hkpWorld *a5);
// [0x1751190] (1911 bytes) hkpWorldOperationUtil::setRigidBodyMotionType(hkpRigidBody *,hkpMotion::MotionType,hkpEntityActivation,hkpUpdateCollisionFilterOnEntityMode)
// void hkpWorldOperationUtil::setRigidBodyMotionType(hkpWorldCallbackUtil **a1, int a2, int a3, int a4);
// [0x1751a60] (1309 bytes) hkpWorldOperationUtil::cleanupDirtyIslands(hkpWorld *)
// void hkpWorldOperationUtil::cleanupDirtyIslands(hkpWorldOperationUtil *this);
// [0x1778610] (74 bytes) hkpWorldOperationQueue::hkpWorldOperationQueue(hkpWorld *)
// void hkpWorldOperationQueue::hkpWorldOperationQueue(hkpWorldOperationQueue *this, hkpWorld *a2);
// [0x1778660] (194 bytes) hkpWorldOperationQueue::~hkpWorldOperationQueue()
// void hkpWorldOperationQueue::~hkpWorldOperationQueue(hkpWorldOperationQueue *this);
// [0x1778730] (3421 bytes) hkpWorldOperationQueue::queueOperation(hkWorldOperation::BaseOperation const&)
// int hkpWorldOperationQueue::queueOperation(uint32_t *a1, __m128i *a2);
// [0x1779490] (253 bytes) hkpWorldOperationQueue::queueBodyOperation(hkpEntity *,hkpBodyOperation *,int,hkpBodyOperation::ExecutionState)
// int hkpWorldOperationQueue::queueBodyOperation(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x1779720] (1121 bytes) hkpWorldOperationQueue::executeAllPendingBodyOperations(void)
// char *hkpWorldOperationQueue::executeAllPendingBodyOperations(hkpWorldOperationQueue *this);
// [0x1779e00] (5537 bytes) hkpWorldOperationQueue::executeAllPending(void)
// int hkpWorldOperationQueue::executeAllPending(hkpWorldOperationQueue *this);
