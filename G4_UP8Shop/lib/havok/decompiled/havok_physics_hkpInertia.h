#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpInertia.h
// Library: havok | Module: havok_physics_hkpInertia
// Binary Address Span: 0x1826760 .. 0x1828540 (7 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1826760] (130 bytes) hkpInertiaTensorComputer::setMassProperties(hkMassProperties const&,hkpRigidBodyCinfo &)
// const hkMassProperties *hkpInertiaTensorComputer::setMassProperties( hkpInertiaTensorComputer *this, const hkMassProperties *a2);
// [0x18267f0] (189 bytes) hkpInertiaTensorComputer::setAndScaleToMass(hkMassProperties const&,hkSimdFloat32 const&,hkpRigidBodyCinfo &)
// float *hkpInertiaTensorComputer::setAndScaleToMass(int a1, float *a2, int a3);
// [0x18268b0] (70 bytes) hkpInertiaTensorComputer::setAndScaleToDensity(hkMassProperties const&,hkSimdFloat32 const&,hkpRigidBodyCinfo &)
// float *hkpInertiaTensorComputer::setAndScaleToDensity(float *a1, float *a2, int a3);
// [0x1826900] (64 bytes) hkpInertiaTensorComputer::clipInertia(float,hkpRigidBodyCinfo &)
// int hkpInertiaTensorComputer::clipInertia(hkpInertiaTensorComputer *this, float a2);
// [0x1828180] (634 bytes) hkpInertiaTensorComputer::computeShapeVolumeMassProperties(hkcdShape const*,float,hkMassProperties &)
// int hkpInertiaTensorComputer::computeShapeVolumeMassProperties( hkpInertiaTensorComputer *this, const hkcdShape *a2, int32_t *a3);
// [0x1828400] (312 bytes) hkpInertiaTensorComputer::setShapeVolumeMassProperties(hkpShape const*,float,hkpRigidBodyCinfo &)
// int hkpInertiaTensorComputer::setShapeVolumeMassProperties( hkpInertiaTensorComputer *this, const hkpShape *a2, float a3);
// [0x1828540] (433 bytes) hkpInertiaTensorComputer::optimizeInertiasOfConstraintTree(hkpConstraintInstance * const*,int,hkpRigidBody *,float)
// int hkpInertiaTensorComputer::optimizeInertiasOfConstraintTree( hkpInertiaTensorComputer *this, int a2, hkpRigidBody *a3, hkpRigidBody *a4);
