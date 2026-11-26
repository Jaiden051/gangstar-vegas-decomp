#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpWorldCa.h
// Library: havok | Module: havok_physics_hkpWorldCa
// Binary Address Span: 0x1769670 .. 0x176c3e0 (31 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1769670] (343 bytes) hkpWorldCallbackUtil::fireActionAdded(hkpWorld *,hkpAction *)
// int hkpWorldCallbackUtil::fireActionAdded(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x17697d0] (343 bytes) hkpWorldCallbackUtil::fireActionRemoved(hkpWorld *,hkpAction *)
// int hkpWorldCallbackUtil::fireActionRemoved(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x1769930] (343 bytes) hkpWorldCallbackUtil::fireEntityAdded(hkpWorld *,hkpEntity *)
// int hkpWorldCallbackUtil::fireEntityAdded(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x1769a90] (343 bytes) hkpWorldCallbackUtil::fireEntityRemoved(hkpWorld *,hkpEntity *)
// int hkpWorldCallbackUtil::fireEntityRemoved(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x1769bf0] (343 bytes) hkpWorldCallbackUtil::fireEntityShapeSet(hkpWorld *,hkpEntity *)
// int hkpWorldCallbackUtil::fireEntityShapeSet(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x1769d50] (343 bytes) hkpWorldCallbackUtil::fireEntitySetMotionType(hkpWorld *,hkpEntity *)
// int hkpWorldCallbackUtil::fireEntitySetMotionType(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x1769eb0] (343 bytes) hkpWorldCallbackUtil::firePhantomAdded(hkpWorld *,hkpPhantom *)
// int hkpWorldCallbackUtil::firePhantomAdded(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x176a010] (343 bytes) hkpWorldCallbackUtil::firePhantomRemoved(hkpWorld *,hkpPhantom *)
// int hkpWorldCallbackUtil::firePhantomRemoved(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x176a170] (343 bytes) hkpWorldCallbackUtil::firePhantomShapeSet(hkpWorld *,hkpPhantom *)
// int hkpWorldCallbackUtil::firePhantomShapeSet(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x176a2d0] (343 bytes) hkpWorldCallbackUtil::fireConstraintAdded(hkpWorld *,hkpConstraintInstance *)
// int hkpWorldCallbackUtil::fireConstraintAdded(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x176a430] (343 bytes) hkpWorldCallbackUtil::fireConstraintRemoved(hkpWorld *,hkpConstraintInstance *)
// int hkpWorldCallbackUtil::fireConstraintRemoved(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x176a590] (343 bytes) hkpWorldCallbackUtil::fireConstraintViolated(hkpWorld *,hkpConstraintInstance *)
// int hkpWorldCallbackUtil::fireConstraintViolated(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x176a6f0] (344 bytes) hkpWorldCallbackUtil::fireConstraintBroken(hkpWorld *,hkpConstraintBrokenEvent const&)
// int hkpWorldCallbackUtil::fireConstraintBroken(int a1, int a2);
// [0x176a850] (344 bytes) hkpWorldCallbackUtil::fireConstraintRepaired(hkpWorld *,hkpConstraintRepairedEvent const&)
// int hkpWorldCallbackUtil::fireConstraintRepaired(int a1, int a2);
// [0x176a9b0] (343 bytes) hkpWorldCallbackUtil::fireContactPointCallback(hkpWorld *,hkpContactPointEvent &)
// int hkpWorldCallbackUtil::fireContactPointCallback(int a1, int a2);
// [0x176ab10] (343 bytes) hkpWorldCallbackUtil::fireContactConstraintAddedCallback(hkpWorld *,hkpCollisionEvent &)
// int hkpWorldCallbackUtil::fireContactConstraintAddedCallback(int a1, int a2);
// [0x176ac70] (343 bytes) hkpWorldCallbackUtil::fireContactConstraintRemovedCallback(hkpWorld *,hkpCollisionEvent &)
// int hkpWorldCallbackUtil::fireContactConstraintRemovedCallback(int a1, int a2);
// [0x176add0] (327 bytes) hkpWorldCallbackUtil::fireWorldDeleted(hkpWorld *)
// int hkpWorldCallbackUtil::fireWorldDeleted(hkpWorldCallbackUtil *this);
// [0x176af20] (327 bytes) hkpWorldCallbackUtil::fireWorldRemoveAll(hkpWorld *)
// int hkpWorldCallbackUtil::fireWorldRemoveAll(hkpWorldCallbackUtil *this);
// [0x176b070] (892 bytes) hkpWorldCallbackUtil::fireIslandActivated(hkpWorld *,hkpSimulationIsland *)
// hkpWorldCallbackUtil *hkpWorldCallbackUtil::fireIslandActivated(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x176b3f0] (892 bytes) hkpWorldCallbackUtil::fireIslandDeactivated(hkpWorld *,hkpSimulationIsland *)
// hkpWorldCallbackUtil *hkpWorldCallbackUtil::fireIslandDeactivated(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x176b770] (360 bytes) hkpWorldCallbackUtil::firePostSimulationCallback(hkpWorld *)
// int hkpWorldCallbackUtil::firePostSimulationCallback(hkpWorldCallbackUtil *this);
// [0x176b8e0] (343 bytes) hkpWorldCallbackUtil::firePostIntegrateCallback(hkpWorld *,hkStepInfo const&)
// int hkpWorldCallbackUtil::firePostIntegrateCallback(int a1, int a2);
// [0x176ba40] (343 bytes) hkpWorldCallbackUtil::firePostCollideCallback(hkpWorld *,hkStepInfo const&)
// int hkpWorldCallbackUtil::firePostCollideCallback(int a1, int a2);
// [0x176bba0] (343 bytes) hkpWorldCallbackUtil::fireIslandPostIntegrateCallback(hkpWorld *,hkpSimulationIsland *,hkStepInfo const&)
// int hkpWorldCallbackUtil::fireIslandPostIntegrateCallback(int a1, int a2, int a3);
// [0x176bd00] (343 bytes) hkpWorldCallbackUtil::fireIslandPostCollideCallback(hkpWorld *,hkpSimulationIsland *,hkStepInfo const&)
// int hkpWorldCallbackUtil::fireIslandPostCollideCallback(int a1, int a2, int a3);
// [0x176be60] (343 bytes) hkpWorldCallbackUtil::fireContactImpulseLimitBreached(hkpWorld *,hkpContactImpulseLimitBreachedListenerInfo const*,int)
// int hkpWorldCallbackUtil::fireContactImpulseLimitBreached(int a1, int a2, int a3);
// [0x176bfc0] (343 bytes) hkpWorldCallbackUtil::fireInactiveEntityMoved(hkpWorld *,hkpEntity *)
// int hkpWorldCallbackUtil::fireInactiveEntityMoved(hkpWorldCallbackUtil *this, hkpWorld *a2);
// [0x176c120] (343 bytes) hkpWorldCallbackUtil::fireContactPointAdded(hkpWorld *,hkpContactPointAddedEvent &)
// int hkpWorldCallbackUtil::fireContactPointAdded(int a1, int a2);
// [0x176c280] (343 bytes) hkpWorldCallbackUtil::fireContactPointRemoved(hkpWorld *,hkpContactPointRemovedEvent &)
// int hkpWorldCallbackUtil::fireContactPointRemoved(int a1, int a2);
// [0x176c3e0] (343 bytes) hkpWorldCallbackUtil::fireContactProcess(hkpWorld *,hkpContactProcessEvent &)
// int hkpWorldCallbackUtil::fireContactProcess(int a1, int a2);
