#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpEntity.h
// Library: havok | Module: havok_physics_hkpEntity
// Binary Address Span: 0x1731670 .. 0x1752be0 (34 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1731670] (9 bytes) hkpEntity::getMotionState(void)
// int hkpEntity::getMotionState();
// [0x1731860] (414 bytes) hkpEntity::hkpEntity(hkpShape const*)
// void hkpEntity::hkpEntity(hkpEntity *this, const hkpShape *a2);
// [0x1731a00] (492 bytes) hkpEntity::hkpEntity(hkFinishLoadedObjectFlag)
// void (**hkpEntity::hkpEntity(int a1, int a2))(hkpKeyframedRigidMotion *__hidden this);
// [0x1731bf0] (75 bytes) hkpEntity::updateCachedAabb(void)
// hkpEntity *hkpEntity::updateCachedAabb(hkpEntity *this);
// [0x1731c40] (224 bytes) hkpEntity::setCachedShapeData(hkpWorld const*,hkpShape const*)
// void hkpEntity::setCachedShapeData(hkpEntity *this, const hkpWorld *a2, const hkpShape *a3);
// [0x1731d20] (275 bytes) hkpEntity::addEntityListener(hkpEntityListener *)
// int hkpEntity::addEntityListener(int a1, int a2);
// [0x1731e40] (187 bytes) hkpEntity::removeEntityListener(hkpEntityListener *)
// int hkpEntity::removeEntityListener(int a1, int a2);
// [0x1731f00] (271 bytes) hkpEntity::addEntityActivationListener(hkpEntityActivationListener *)
// int hkpEntity::addEntityActivationListener(int a1, int a2);
// [0x1732010] (75 bytes) hkpEntity::removeEntityActivationListener(hkpEntityActivationListener *)
// uint32_t *hkpEntity::removeEntityActivationListener(int a1, int a2);
// [0x1732060] (189 bytes) hkpEntity::addContactListener(hkpContactListener *)
// int hkpEntity::addContactListener(int a1, int a2);
// [0x1732120] (75 bytes) hkpEntity::removeContactListener(hkpContactListener *)
// uint32_t *hkpEntity::removeContactListener(int a1, int a2);
// [0x1732170] (941 bytes) hkpEntity::~hkpEntity()
// void hkpEntity::~hkpEntity(hkpEntity *this);
// [0x1732520] (93 bytes) hkpEntity::~hkpEntity()
// void hkpEntity::~hkpEntity(hkpEntity *this);
// [0x1732580] (1292 bytes) hkpEntity::deallocateInternalArrays(void)
// int hkpEntity::deallocateInternalArrays(hkpEntity *this);
// [0x1732a90] (72 bytes) hkpEntity::findContactMgrTo(hkpEntity const*)const
// int hkpEntity::findContactMgrTo(hkpEntity *this, const hkpEntity *a2);
// [0x1732ae0] (47 bytes) hkpEntity::isActive(void)const
// hkpEntity *hkpEntity::isActive(hkpEntity *this, int a2);
// [0x1732b10] (239 bytes) hkpEntity::activate(void)
// hkpWorld *hkpEntity::activate(hkpEntity *this);
// [0x1732c00] (64 bytes) hkpEntity::requestDeactivation(void)
// hkpEntity *hkpEntity::requestDeactivation(hkpEntity *this);
// [0x1732c40] (235 bytes) hkpEntity::deactivate(void)
// void hkpEntity::deactivate(hkpEntity *this);
// [0x1732d30] (86 bytes) hkpEntity::activateAsCriticalOperation(void)
// hkpWorld *hkpEntity::activateAsCriticalOperation(hkpEntity *this);
// [0x1732d90] (86 bytes) hkpEntity::requestDeactivationAsCriticalOperation(void)
// hkpEntity *hkpEntity::requestDeactivationAsCriticalOperation(hkpEntity *this);
// [0x1732df0] (86 bytes) hkpEntity::deactivateAsCriticalOperation(void)
// void hkpEntity::deactivateAsCriticalOperation(hkpEntity *this);
// [0x1732e50] (20 bytes) hkpEntity::getNumConstraints(void)const
// int hkpEntity::getNumConstraints(hkpEntity *this);
// [0x1732e70] (47 bytes) hkpEntity::getConstraint(int)
// int hkpEntity::getConstraint(hkpEntity *this, int a2);
// [0x1732ea0] (47 bytes) hkpEntity::getConstraint(int)const
// int hkpEntity::getConstraint(hkpEntity *this, int a2);
// [0x1732ed0] (235 bytes) hkpEntity::getAllConstraints(hkArray<hkpConstraintInstance *,hkContainerHeapAllocator> &)
// int hkpEntity::getAllConstraints(hkpEntity *a1, int *a2);
// [0x1732fc0] (14 bytes) hkpEntity::getConstraintMastersImpl(void)const
// char *hkpEntity::getConstraintMastersImpl(hkpEntity *this);
// [0x1732fd0] (14 bytes) hkpEntity::getConstraintMastersRwImpl(void)
// char *hkpEntity::getConstraintMastersRwImpl(hkpEntity *this);
// [0x1732fe0] (14 bytes) hkpEntity::getConstraintSlavesImpl(void)const
// char *hkpEntity::getConstraintSlavesImpl(hkpEntity *this);
// [0x1732ff0] (267 bytes) hkpEntity::sortConstraintsSlavesDeterministically(void)
// hkpEntity *hkpEntity::sortConstraintsSlavesDeterministically(int this);
// [0x1752b80] (22 bytes) hkpEntity::SmallArraySerializeOverrideType::staticClass(void)
// void *hkpEntity::SmallArraySerializeOverrideType::staticClass();
// [0x1752ba0] (22 bytes) hkpEntity::SpuCollisionCallback::staticClass(void)
// void *hkpEntity::SpuCollisionCallback::staticClass();
// [0x1752bc0] (22 bytes) hkpEntity::ExtendedListeners::staticClass(void)
// void *hkpEntity::ExtendedListeners::staticClass();
// [0x1752be0] (22 bytes) hkpEntity::staticClass(void)
// void *hkpEntity::staticClass();
