#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpCharact.h
// Library: havok | Module: havok_physics_hkpCharact
// Binary Address Span: 0x17521b0 .. 0x18384a0 (49 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x17521b0] (47 bytes) hkpCharacterMotion::setInertiaInvLocal(hkMatrix3f const&)
// hkpCharacterMotion *hkpCharacterMotion::setInertiaInvLocal(hkpCharacterMotion *this, const hkMatrix3f *a2);
// [0x17521e0] (79 bytes) hkpCharacterMotion::getInertiaInvLocal(hkMatrix3f &)const
// hkMatrix3f *hkpCharacterMotion::getInertiaInvLocal(hkpCharacterMotion *this, hkMatrix3f *a2);
// [0x1752230] (79 bytes) hkpCharacterMotion::getInertiaInvWorld(hkMatrix3f &)const
// hkMatrix3f *hkpCharacterMotion::getInertiaInvWorld(hkpCharacterMotion *this, hkMatrix3f *a2);
// [0x1752280] (332 bytes) hkpCharacterMotion::applyPointImpulse(hkVector4f const&,hkVector4f const&)
// float *hkpCharacterMotion::applyPointImpulse( hkpCharacterMotion *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x17523d0] (134 bytes) hkpCharacterMotion::applyForce(float,hkVector4f const&)
// hkpCharacterMotion *hkpCharacterMotion::applyForce(hkpCharacterMotion *this, float a2, const hkVector4f *a3);
// [0x1752460] (58 bytes) hkpCharacterMotion::applyForce(float,hkVector4f const&,hkVector4f const&)
// int hkpCharacterMotion::applyForce(hkpCharacterMotion *this, unsigned int a2, __m128 *a3, const hkVector4f *a4);
// [0x17524a0] (51 bytes) hkpCharacterMotion::applyTorque(float,hkVector4f const&)
// int hkpCharacterMotion::applyTorque(hkpCharacterMotion *this, unsigned int a2, __m128 *a3);
// [0x17524e0] (218 bytes) hkpCharacterMotion::getProjectedPointVelocity(hkVector4f const&,hkVector4f const&,float &,float &)const
// float *hkpCharacterMotion::getProjectedPointVelocity( hkpCharacterMotion *this, const hkVector4f *a2, const hkVector4f *a3, float *a4, float *a5);
// [0x17525c0] (218 bytes) hkpCharacterMotion::getProjectedPointVelocitySimd(hkVector4f const&,hkVector4f const&,hkSimdFloat32 &,hkSimdFloat32 &)const
// uint32_t *hkpCharacterMotion::getProjectedPointVelocitySimd(int a1, float *a2, float *a3, float *a4, uint32_t *a5);
// [0x17526a0] (168 bytes) hkpCharacterMotion::setInertiaLocal(hkMatrix3f const&)
// hkpCharacterMotion *hkpCharacterMotion::setInertiaLocal(hkpCharacterMotion *this, const hkMatrix3f *a2);
// [0x1752750] (29 bytes) hkpCharacterMotion::~hkpCharacterMotion()
// void hkpCharacterMotion::~hkpCharacterMotion(hkpCharacterMotion *this);
// [0x1752770] (96 bytes) hkpCharacterMotion::~hkpCharacterMotion()
// void hkpCharacterMotion::~hkpCharacterMotion(hkpCharacterMotion *this);
// [0x17527d0] (124 bytes) hkpCharacterMotion::applyAngularImpulse(hkVector4f const&)
// hkpCharacterMotion *hkpCharacterMotion::applyAngularImpulse(hkpCharacterMotion *this, const hkVector4f *a2);
// [0x1752850] (188 bytes) hkpCharacterMotion::getInertiaWorld(hkMatrix3f &)const
// hkMatrix3f *hkpCharacterMotion::getInertiaWorld(hkpCharacterMotion *this, hkMatrix3f *a2);
// [0x1752910] (286 bytes) hkpCharacterMotion::getInertiaLocal(hkMatrix3f &)const
// hkMatrix3f *hkpCharacterMotion::getInertiaLocal(hkpCharacterMotion *this, hkMatrix3f *a2);
// [0x175f670] (22 bytes) hkpCharacterMotion::staticClass(void)
// void *hkpCharacterMotion::staticClass();
// [0x1823ad0] (22 bytes) hkpCharacterControllerCinfo::staticClass(void)
// void *hkpCharacterControllerCinfo::staticClass();
// [0x182e420] (29 bytes) hkpCharacterRigidBodyListener::~hkpCharacterRigidBodyListener()
// void hkpCharacterRigidBodyListener::~hkpCharacterRigidBodyListener(hkpCharacterRigidBodyListener *this);
// [0x182e440] (139 bytes) hkpCharacterRigidBodyListener::processActualPoints(hkpWorld const*,hkpCharacterRigidBody *,hkpLinkedCollidable::CollisionEntry const&,hkpSimpleConstraintContactMgr *,hkArray<unsigned short,hkContainerHeapAllocator> &)
// int hkpCharacterRigidBodyListener::processActualPoints(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x182e4d0] (96 bytes) hkpCharacterRigidBodyListener::~hkpCharacterRigidBodyListener()
// void hkpCharacterRigidBodyListener::~hkpCharacterRigidBodyListener(hkpCharacterRigidBodyListener *this);
// [0x182e530] (1670 bytes) hkpCharacterRigidBodyListener::unweldContactPoints(hkpCharacterRigidBody *,hkpLinkedCollidable::CollisionEntry const&,hkpSimpleConstraintContactMgr *,hkArray<unsigned short,hkContainerHeapAllocator> const&)
// int hkpCharacterRigidBodyListener::unweldContactPoints(int a1, int a2, int a3, int a4, uint32_t *a5);
// [0x182ebc0] (1035 bytes) hkpCharacterRigidBodyListener::considerCollisionEntryForSlope(hkpWorld const*,hkpCharacterRigidBody *,hkpLinkedCollidable::CollisionEntry const&,hkpSimpleConstraintContactMgr *,hkArray<unsigned short,hkContainerHeapAllocator> &)
// int hkpCharacterRigidBodyListener::considerCollisionEntryForSlope( int a1, int a2, int a3, int a4, int a5, hkMemoryAllocator *a6);
// [0x182efd0] (1092 bytes) hkpCharacterRigidBodyListener::considerCollisionEntryForMassModification(hkpWorld const*,hkpCharacterRigidBody *,hkpLinkedCollidable::CollisionEntry const&,hkpSimpleConstraintContactMgr *,hkArray<unsigned short,hkContainerHeapAllocator> const&)
// int hkpCharacterRigidBodyListener::considerCollisionEntryForMassModification( __m128i a1, int a2, int a3, int a4, int a5, hkpResponseModifier *a6, uint32_t *a7);
// [0x182f420] (1019 bytes) hkpCharacterRigidBodyListener::discardVerticalPoints(hkpCharacterRigidBody *)
// hkpCharacterRigidBody *hkpCharacterRigidBodyListener::discardVerticalPoints( hkpCharacterRigidBodyListener *this, hkpCharacterRigidBody *a2);
// [0x182f820] (357 bytes) hkpCharacterRigidBodyListener::processActualPoints(hkpWorld *,hkpCharacterRigidBody *)
// int hkpCharacterRigidBodyListener::processActualPoints( hkpCharacterRigidBodyListener *this, hkpWorld *a2, hkpCharacterRigidBody *a3);
// [0x182f990] (250 bytes) hkpCharacterRigidBodyListener::characterCallback(hkpWorld *,hkpCharacterRigidBody *)
// int hkpCharacterRigidBodyListener::characterCallback( hkpCharacterRigidBodyListener *this, hkpWorld *a2, hkpCharacterRigidBody *a3);
// [0x1832220] (36 bytes) hkpCharacterRigidBody::postSimulationCallback(hkpWorld *)
// int hkpCharacterRigidBody::postSimulationCallback(hkpCharacterRigidBody *this, hkpWorld *a2);
// [0x1832260] (103 bytes) hkpCharacterRigidBody::entityAddedCallback(hkpEntity *)
// int hkpCharacterRigidBody::entityAddedCallback(hkpCharacterRigidBody *this, hkpWorld **a2);
// [0x18322e0] (247 bytes) hkpCharacterRigidBody::checkSupport(hkStepInfo const&,hkpSurfaceInfo &)const
// int hkpCharacterRigidBody::checkSupport(int a1, int a2, int *a3);
// [0x18323e0] (1312 bytes) hkpCharacterRigidBody::getGround(hkArray<hkpCharacterRigidBody::SupportInfo,hkContainerHeapAllocator> const&,hkBool,hkpSurfaceInfo &)const
// int hkpCharacterRigidBody::getGround(int a1, uint32_t *a2, char a3, int a4);
// [0x1832900] (120 bytes) hkpCharacterRigidBody::entityRemovedCallback(hkpEntity *)
// hkpWorld *hkpCharacterRigidBody::entityRemovedCallback(hkpCharacterRigidBody *this, hkpWorld **a2);
// [0x1832990] (333 bytes) hkpCharacterRigidBody::~hkpCharacterRigidBody()
// void hkpCharacterRigidBody::~hkpCharacterRigidBody(hkpCharacterRigidBody *this);
// [0x1832b00] (93 bytes) hkpCharacterRigidBody::~hkpCharacterRigidBody()
// void hkpCharacterRigidBody::~hkpCharacterRigidBody(hkpCharacterRigidBody *this);
// [0x1832b80] (3478 bytes) hkpCharacterRigidBody::getSupportInfo(hkStepInfo const&,hkArray<hkpCharacterRigidBody::SupportInfo,hkContainerHeapAllocator> &)const
// int hkpCharacterRigidBody::getSupportInfo(int a1, int a2, uint32_t *a3);
// [0x1833920] (614 bytes) hkpCharacterRigidBody::hkpCharacterRigidBody(hkpCharacterRigidBodyCinfo const&)
// void hkpCharacterRigidBody::hkpCharacterRigidBody( hkpCharacterRigidBody *this, const hkpCharacterRigidBodyCinfo *a2);
// [0x1833b90] (101 bytes) hkpCharacterRigidBody::setListener(hkpCharacterRigidBodyListener *)
// hkpWorld *hkpCharacterRigidBody::setListener(hkpCharacterRigidBody *this, hkpCharacterRigidBodyListener *a2);
// [0x1833c00] (122 bytes) hkpCharacterRigidBody::removeListener(void)
// hkpWorld *hkpCharacterRigidBody::removeListener(hkpCharacterRigidBody *this);
// [0x1833c80] (12 bytes) hkpCharacterRigidBody::getRigidBody(void)const
// int hkpCharacterRigidBody::getRigidBody(hkpCharacterRigidBody *this);
// [0x1833c90] (32 bytes) hkpCharacterRigidBody::setLinearAccelerationToMassModifier(hkVector4f const&)
// hkpCharacterRigidBody *hkpCharacterRigidBody::setLinearAccelerationToMassModifier( hkpCharacterRigidBody *this, const hkVector4f *a2);
// [0x1833cb0] (18 bytes) hkpCharacterRigidBody::setMaxForce(float)
// hkpCharacterRigidBody *hkpCharacterRigidBody::setMaxForce(hkpCharacterRigidBody *this, float a2);
// [0x1833cd0] (388 bytes) hkpCharacterRigidBody::setLinearVelocity(hkVector4f const&,float)
// int hkpCharacterRigidBody::setLinearVelocity(hkpCharacterRigidBody *this, const hkVector4f *a2, float a3);
// [0x1833e60] (15 bytes) hkpCharacterRigidBody::getLinearVelocity(void)const
// int hkpCharacterRigidBody::getLinearVelocity(hkpCharacterRigidBody *this);
// [0x1833e70] (207 bytes) hkpCharacterRigidBody::setAngularVelocity(hkVector4f const&)
// int hkpCharacterRigidBody::setAngularVelocity(hkpCharacterRigidBody *this, const hkVector4f *a2);
// [0x1833f40] (15 bytes) hkpCharacterRigidBody::getAngularVelocity(void)const
// int hkpCharacterRigidBody::getAngularVelocity(hkpCharacterRigidBody *this);
// [0x1833f50] (15 bytes) hkpCharacterRigidBody::getPosition(void)const
// int hkpCharacterRigidBody::getPosition(hkpCharacterRigidBody *this);
// [0x18370f0] (29 bytes) hkpCharacterProxyCinfo::~hkpCharacterProxyCinfo()
// void hkpCharacterProxyCinfo::~hkpCharacterProxyCinfo(hkpCharacterProxyCinfo *this);
// [0x1837110] (96 bytes) hkpCharacterProxyCinfo::~hkpCharacterProxyCinfo()
// void hkpCharacterProxyCinfo::~hkpCharacterProxyCinfo(hkpCharacterProxyCinfo *this);
// [0x1837170] (22 bytes) hkpCharacterProxyCinfo::staticClass(void)
// void *hkpCharacterProxyCinfo::staticClass();
// [0x18384a0] (22 bytes) hkpCharacterRigidBodyCinfo::staticClass(void)
// void *hkpCharacterRigidBodyCinfo::staticClass();
