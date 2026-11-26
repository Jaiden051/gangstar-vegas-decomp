#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpMotion.h
// Library: havok | Module: havok_physics_hkpMotion
// Binary Address Span: 0x172f2c0 .. 0x1740540 (22 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x172f2c0] (22 bytes) hkpMotion::staticClass(void)
// void *hkpMotion::staticClass();
// [0x173fc00] (29 bytes) hkpMotion::~hkpMotion()
// void hkpMotion::~hkpMotion(hkpMotion *this);
// [0x173fc20] (82 bytes) hkpMotion::setMass(float)
// int hkpMotion::setMass(hkpMotion *this, float a2);
// [0x173fc80] (21 bytes) hkpMotion::setMassInv(float)
// hkpMotion *hkpMotion::setMassInv(hkpMotion *this, float a2);
// [0x173fca0] (21 bytes) hkpMotion::setMassInv(hkSimdFloat32 const&)
// int hkpMotion::setMassInv(int a1, uint32_t *a2);
// [0x173fcc0] (44 bytes) hkpMotion::setLinearVelocity(hkVector4f const&)
// hkpMotion *hkpMotion::setLinearVelocity(hkpMotion *this, const hkVector4f *a2);
// [0x173fcf0] (44 bytes) hkpMotion::setAngularVelocity(hkVector4f const&)
// hkpMotion *hkpMotion::setAngularVelocity(hkpMotion *this, const hkVector4f *a2);
// [0x173fd20] (112 bytes) hkpMotion::applyLinearImpulse(hkVector4f const&)
// hkpMotion *hkpMotion::applyLinearImpulse(hkpMotion *this, const hkVector4f *a2);
// [0x173fd90] (521 bytes) hkpMotion::getMotionStateAndVelocitiesAndDeactivationType(hkpMotion*)
// hkpMotion *hkpMotion::getMotionStateAndVelocitiesAndDeactivationType(hkpMotion *this, hkpMotion *a2);
// [0x173ffa0] (167 bytes) hkpMotion::setMass(hkSimdFloat32 const&)
// int hkpMotion::setMass(int *a1, unsigned int *a2);
// [0x1740050] (45 bytes) hkpMotion::setCenterOfMassInLocal(hkVector4f const&)
// int hkpMotion::setCenterOfMassInLocal(hkpMotion *this, const hkVector4f *a2);
// [0x1740080] (45 bytes) hkpMotion::setPosition(hkVector4f const&)
// int hkpMotion::setPosition(hkpMotion *this, const hkVector4f *a2);
// [0x17400b0] (45 bytes) hkpMotion::setRotation(hkQuaternionf const&)
// int hkpMotion::setRotation(hkpMotion *this, const hkQuaternionf *a2);
// [0x17400e0] (53 bytes) hkpMotion::setPositionAndRotation(hkVector4f const&,hkQuaternionf const&)
// int hkpMotion::setPositionAndRotation(hkpMotion *this, const hkVector4f *a2, const hkQuaternionf *a3);
// [0x1740120] (45 bytes) hkpMotion::setTransform(hkTransformf const&)
// int hkpMotion::setTransform(hkpMotion *this, const hkTransformf *a2);
// [0x1740150] (96 bytes) hkpMotion::~hkpMotion()
// void hkpMotion::~hkpMotion(hkpMotion *this);
// [0x17401b0] (358 bytes) hkpMotion::hkpMotion(void)
// void hkpMotion::hkpMotion(hkpMotion *this);
// [0x1740320] (265 bytes) hkpMotion::hkpMotion(hkVector4f const&,hkQuaternionf const&,bool)
// void hkpMotion::hkpMotion(hkpMotion *this, const hkVector4f *a2, const hkQuaternionf *a3, bool a4);
// [0x1740430] (163 bytes) hkpMotion::getMass(void)const
// long double hkpMotion::getMass(hkpMotion *this);
// [0x17404e0] (57 bytes) hkpMotion::approxTransformAt(float,hkTransformf &)
// int hkpMotion::approxTransformAt(hkpMotion *this, float a2, hkTransformf *a3);
// [0x1740520] (17 bytes) hkpMotion::setDeactivationClass(int)
// int hkpMotion::setDeactivationClass(hkpMotion *this, int a2);
// [0x1740540] (163 bytes) hkpMotion::requestDeactivation(void)
// int hkpMotion::requestDeactivation(hkpMotion *this);
