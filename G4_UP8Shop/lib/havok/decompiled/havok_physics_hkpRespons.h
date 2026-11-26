#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpRespons.h
// Library: havok | Module: havok_physics_hkpRespons
// Binary Address Span: 0x1784710 .. 0x1785180 (9 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1784710] (383 bytes) hkpResponseModifier::setInvMassScalingForContact(hkpDynamicsContactMgr *,hkpRigidBody *,hkpRigidBody *,hkpConstraintOwner &,hkVector4f const&,hkVector4f const&)
// int hkpResponseModifier::setInvMassScalingForContact( __m128i a1, hkpResponseModifier *this, hkpDynamicsContactMgr *a3, hkpRigidBody *a4, hkpRigidBody *a5, hkpConstraintOwner *a6, const hkVector4f *a7);
// [0x1784890] (505 bytes) hkpResponseModifier::setInvMassScalingForContact(hkpDynamicsContactMgr *,hkpRigidBody *,hkpConstraintOwner &,hkVector4f const&)
// int hkpResponseModifier::setInvMassScalingForContact( __m128i a1, hkpResponseModifier *this, hkpDynamicsContactMgr *a3, hkpRigidBody *a4, hkpConstraintOwner *a5);
// [0x1784a90] (383 bytes) hkpResponseModifier::setCenterOfMassDisplacementForContact(hkpDynamicsContactMgr *,hkpRigidBody *,hkpRigidBody *,hkpConstraintOwner &,hkVector4f const&,hkVector4f const&)
// int hkpResponseModifier::setCenterOfMassDisplacementForContact( __m128i a1, hkpResponseModifier *this, hkpDynamicsContactMgr *a3, hkpRigidBody *a4, hkpRigidBody *a5, hkpConstraintOwner *a6, const hkVector4f *a7);
// [0x1784c10] (277 bytes) hkpResponseModifier::setImpulseScalingForContact(hkpDynamicsContactMgr *,hkpRigidBody *,hkpRigidBody *,hkpConstraintOwner &,float,float)
// int hkpResponseModifier::setImpulseScalingForContact( __m128i a1, hkpResponseModifier *this, hkpDynamicsContactMgr *a3, hkpRigidBody *a4, hkpRigidBody *a5, hkpConstraintOwner *a6, float a7);
// [0x1784d30] (450 bytes) hkpResponseModifier::setSurfaceVelocity(hkpDynamicsContactMgr *,hkpRigidBody *,hkpConstraintOwner &,hkVector4f const&)
// 0x1784d30 hkpResponseModifier::setSurfaceVelocity(hkpDynamicsContactMgr *,hkpRigidBody *,hkpConstraintOwner &,hkVector4f const&)
// [0x1784f00] (161 bytes) hkpResponseModifier::clearSurfaceVelocity(hkpDynamicsContactMgr *,hkpConstraintOwner &,hkpRigidBody *)
// int hkpResponseModifier::clearSurfaceVelocity( __m128i a1, hkpResponseModifier *this, hkpDynamicsContactMgr *a3);
// [0x1784fb0] (239 bytes) hkpResponseModifier::setLowSurfaceViscosity(hkpDynamicsContactMgr *,hkpConstraintOwner &)
// int hkpResponseModifier::setLowSurfaceViscosity( __m128i a1, hkpResponseModifier *this, hkpDynamicsContactMgr *a3);
// [0x17850a0] (212 bytes) hkpResponseModifier::disableConstraint(hkpConstraintInstance *,hkpConstraintOwner &)
// int hkpResponseModifier::disableConstraint( __m128i a1, hkpConstraintOwner **this, hkpConstraintInstance *a3);
// [0x1785180] (225 bytes) hkpResponseModifier::enableConstraint(hkpConstraintInstance *,hkpConstraintOwner &)
// int hkpResponseModifier::enableConstraint( __m128i a1, hkpResponseModifier *this, hkpConstraintInstance *a3);
