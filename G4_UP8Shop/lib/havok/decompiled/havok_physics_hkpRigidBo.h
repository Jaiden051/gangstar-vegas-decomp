#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpRigidBo.h
// Library: havok | Module: havok_physics_hkpRigidBo
// Binary Address Span: 0x172db40 .. 0x184dd10 (78 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x172db40] (22 bytes) hkpRigidBody::staticClass(void)
// void *hkpRigidBody::staticClass();
// [0x172f450] (417 bytes) hkpRigidBodyCinfo::hkpRigidBodyCinfo(void)
// void hkpRigidBodyCinfo::hkpRigidBodyCinfo(hkpRigidBodyCinfo *this);
// [0x172f600] (130 bytes) hkpRigidBodyCinfo::setMassProperties(hkMassProperties const&)
// hkpRigidBodyCinfo *hkpRigidBodyCinfo::setMassProperties(hkpRigidBodyCinfo *this, const hkMassProperties *a2);
// [0x172f690] (69 bytes) hkpRigidBodyCinfo::setTransform(hkTransformf const&)
// hkQuaternionf *hkpRigidBodyCinfo::setTransform(hkpRigidBodyCinfo *this, const hkTransformf *a2);
// [0x175b960] (14 bytes) hkpRigidBody::getMotionState(void)
// char *hkpRigidBody::getMotionState(hkpRigidBody *this);
// [0x175b970] (45 bytes) hkpRigidBody::~hkpRigidBody()
// void hkpRigidBody::~hkpRigidBody(hkpRigidBody *this);
// [0x175b9a0] (93 bytes) hkpRigidBody::~hkpRigidBody()
// void hkpRigidBody::~hkpRigidBody(hkpRigidBody *this);
// [0x175ba00] (413 bytes) hkpRigidBody::updateCachedShapeInfo(hkpShape const*,hkVector4f &)
// int hkpRigidBody::updateCachedShapeInfo( hkpRigidBody *this, const hkpShape *a2, hkVector4f *a3, float a4, float a5, float a6, float a7);
// [0x175bba0] (604 bytes) hkpRigidBody::setShape(hkpShape const*)
// int hkpRigidBody::setShape(hkpRigidBody *this, const hkpShape *a2);
// [0x175be00] (371 bytes) hkpRigidBody::updateShape(hkpShapeModifier *)
// int hkpRigidBody::updateShape(hkpRigidBody *a1, int a2);
// [0x175bf80] (483 bytes) hkpRigidBody::createDynamicRigidMotion(hkpMotion::MotionType,hkVector4f const&,hkQuaternionf const&,float,hkMatrix3f const&,hkVector4f const&,float,float,hkpMaxSizeMotion *)
// hkUFloat8 *hkpRigidBody::createDynamicRigidMotion( int a1, hkVector4f *a2, hkQuaternionf *a3, int a4, float *a5, int a6, int a7, int a8, hkpMotion *a9);
// [0x175c170] (55 bytes) hkpRigidBody::hkpRigidBody(hkFinishLoadedObjectFlag)
// void (**hkpRigidBody::hkpRigidBody(uint32_t *a1, int a2))(hkpRigidBody *__hidden this);
// [0x175c1b0] (159 bytes) hkpRigidBody::setMotionType(hkpMotion::MotionType,hkpEntityActivation,hkpUpdateCollisionFilterOnEntityMode)
// int hkpRigidBody::setMotionType(hkpWorld *a1, int a2, hkpEntity *a3, int a4);
// [0x175c250] (83 bytes) hkpRigidBody::setCenterOfMassLocal(hkVector4f const&)
// int hkpRigidBody::setCenterOfMassLocal(hkpRigidBody *this, const hkVector4f *a2);
// [0x175c2b0] (17 bytes) hkpRigidBody::isDeactivationEnabled(void)const
// bool hkpRigidBody::isDeactivationEnabled(hkpRigidBody *this);
// [0x175c2d0] (329 bytes) hkpRigidBody::enableDeactivation(bool)
// void hkpRigidBody::enableDeactivation(hkpRigidBody *this, bool a2);
// [0x175c420] (1108 bytes) hkpRigidBody::hkpRigidBody(hkpRigidBodyCinfo const&)
// void hkpRigidBody::hkpRigidBody(hkpRigidBody *this, const hkpRigidBodyCinfo *a2);
// [0x175c880] (619 bytes) hkpRigidBody::getCinfo(hkpRigidBodyCinfo &)const
// int hkpRigidBody::getCinfo(hkpRigidBody *this, hkpRigidBodyCinfo *a2);
// [0x175caf0] (985 bytes) hkpRigidBody::clone(void)const
// int *hkpRigidBody::clone(hkpRigidBody *this);
// [0x175ced0] (31 bytes) hkpRigidBody::getStoredDynamicMotion(void)
// int hkpRigidBody::getStoredDynamicMotion(hkpRigidBody *this);
// [0x175cef0] (31 bytes) hkpRigidBody::getStoredDynamicMotion(void)const
// int hkpRigidBody::getStoredDynamicMotion(hkpRigidBody *this);
// [0x175cf10] (338 bytes) hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody(hkpEntity *)
// hkpEntity *hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody(hkpRigidBody *this);
// [0x175d070] (64 bytes) hkpRigidBody::setPosition(hkVector4f const&)
// hkpEntity *hkpRigidBody::setPosition(hkpRigidBody *this, const hkVector4f *a2);
// [0x175d0b0] (64 bytes) hkpRigidBody::setRotation(hkQuaternionf const&)
// hkpEntity *hkpRigidBody::setRotation(hkpRigidBody *this, const hkQuaternionf *a2);
// [0x175d0f0] (72 bytes) hkpRigidBody::setPositionAndRotation(hkVector4f const&,hkQuaternionf const&)
// hkpEntity *hkpRigidBody::setPositionAndRotation( hkpRigidBody *this, const hkVector4f *a2, const hkQuaternionf *a3);
// [0x175d140] (64 bytes) hkpRigidBody::setTransform(hkTransformf const&)
// hkpEntity *hkpRigidBody::setTransform(hkpRigidBody *this, const hkTransformf *a2);
// [0x175d180] (45 bytes) hkpRigidBody::setMass(float)
// int hkpRigidBody::setMass(hkpRigidBody *this, float a2);
// [0x175d1b0] (45 bytes) hkpRigidBody::setMassInv(float)
// int hkpRigidBody::setMassInv(hkpRigidBody *this, float a2);
// [0x175d1e0] (21 bytes) hkpRigidBody::setFriction(float)
// hkpRigidBody *hkpRigidBody::setFriction(hkpRigidBody *this, float a2);
// [0x175d200] (44 bytes) hkpRigidBody::setRollingFrictionMultiplier(float)
// hkpRigidBody *hkpRigidBody::setRollingFrictionMultiplier(hkpRigidBody *this, float a2);
// [0x175d230] (21 bytes) hkpRigidBody::setRestitution(float)
// hkpRigidBody *hkpRigidBody::setRestitution(hkpRigidBody *this, float a2);
// [0x175d250] (41 bytes) hkpRigidBody::setInertiaLocal(hkMatrix3f const&)
// int hkpRigidBody::setInertiaLocal(hkpRigidBody *this, const hkMatrix3f *a2);
// [0x175d280] (41 bytes) hkpRigidBody::setInertiaInvLocal(hkMatrix3f const&)
// int hkpRigidBody::setInertiaInvLocal(hkpRigidBody *this, const hkMatrix3f *a2);
// [0x175d2b0] (206 bytes) hkpRigidBody::setPositionAndRotationAsCriticalOperation(hkVector4f const&,hkQuaternionf const&)
// hkpEntity *hkpRigidBody::setPositionAndRotationAsCriticalOperation( hkpRigidBody *this, const hkVector4f *a2, const hkQuaternionf *a3);
// [0x175d380] (153 bytes) hkpRigidBody::setLinearVelocityAsCriticalOperation(hkVector4f const&)
// int hkpRigidBody::setLinearVelocityAsCriticalOperation(hkpRigidBody *this, const hkVector4f *a2);
// [0x175d420] (153 bytes) hkpRigidBody::setAngularVelocityAsCriticalOperation(hkVector4f const&)
// int hkpRigidBody::setAngularVelocityAsCriticalOperation(hkpRigidBody *this, const hkVector4f *a2);
// [0x175d4c0] (153 bytes) hkpRigidBody::applyLinearImpulseAsCriticalOperation(hkVector4f const&)
// int hkpRigidBody::applyLinearImpulseAsCriticalOperation(hkpRigidBody *this, const hkVector4f *a2);
// [0x175d560] (222 bytes) hkpRigidBody::applyPointImpulseAsCriticalOperation(hkVector4f const&,hkVector4f const&)
// int hkpRigidBody::applyPointImpulseAsCriticalOperation( hkpRigidBody *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x175d640] (153 bytes) hkpRigidBody::applyAngularImpulseAsCriticalOperation(hkVector4f const&)
// int hkpRigidBody::applyAngularImpulseAsCriticalOperation(hkpRigidBody *this, const hkVector4f *a2);
// [0x175d6e0] (319 bytes) hkpRigidBody::checkPerformance(void)const
// hkpRigidBody *hkpRigidBody::checkPerformance(hkpRigidBody *this, int a2);
// [0x18345b0] (22 bytes) hkpRigidBodyLocalFrameViewer::getProcessTag(void)
// int hkpRigidBodyLocalFrameViewer::getProcessTag();
// [0x18345e0] (68 bytes) hkpRigidBodyLocalFrameViewer::init(void)
// int hkpRigidBodyLocalFrameViewer::init(hkpRigidBodyLocalFrameViewer *this);
// [0x1834640] (45 bytes) hkpRigidBodyLocalFrameViewer::worldRemovedCallback(hkpWorld *)
// hkpWorld *hkpRigidBodyLocalFrameViewer::worldRemovedCallback(hkpRigidBodyLocalFrameViewer *this, hkpWorld *a2);
// [0x1834680] (137 bytes) hkpRigidBodyLocalFrameViewer::~hkpRigidBodyLocalFrameViewer()
// void hkpRigidBodyLocalFrameViewer::~hkpRigidBodyLocalFrameViewer(hkpRigidBodyLocalFrameViewer *this);
// [0x1834740] (45 bytes) hkpRigidBodyLocalFrameViewer::worldAddedCallback(hkpWorld *)
// int hkpRigidBodyLocalFrameViewer::worldAddedCallback(hkpRigidBodyLocalFrameViewer *this, hkpWorld *a2);
// [0x1834780] (93 bytes) hkpRigidBodyLocalFrameViewer::~hkpRigidBodyLocalFrameViewer()
// void hkpRigidBodyLocalFrameViewer::~hkpRigidBodyLocalFrameViewer(hkpRigidBodyLocalFrameViewer *this);
// [0x1834810] (870 bytes) hkpRigidBodyLocalFrameViewer::postSimulationCallback(hkpWorld *)
// int hkpRigidBodyLocalFrameViewer::postSimulationCallback(hkpRigidBodyLocalFrameViewer *this, hkpWorld *a2);
// [0x1834b90] (66 bytes) hkpRigidBodyLocalFrameViewer::registerViewer(void)
// int hkpRigidBodyLocalFrameViewer::registerViewer();
// [0x1834be0] (77 bytes) hkpRigidBodyLocalFrameViewer::hkpRigidBodyLocalFrameViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// void (**hkpRigidBodyLocalFrameViewer::hkpRigidBodyLocalFrameViewer( uint32_t *a1, int a2))(hkpRigidBodyLocalFrameViewer *__hidden this);
// [0x1834c30] (92 bytes) hkpRigidBodyLocalFrameViewer::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// uint32_t *hkpRigidBodyLocalFrameViewer::create(int a1);
// [0x1841b00] (22 bytes) hkpRigidBodyInertiaViewer::getProcessTag(void)
// int hkpRigidBodyInertiaViewer::getProcessTag();
// [0x1841b30] (84 bytes) hkpRigidBodyInertiaViewer::entityRemovedCallback(hkpEntity *)
// void hkpRigidBodyInertiaViewer::entityRemovedCallback(hkpRigidBodyInertiaViewer *this, hkpEntity *a2);
// [0x1841ba0] (98 bytes) hkpRigidBodyInertiaViewer::entityAddedCallback(hkpEntity *)
// int hkpRigidBodyInertiaViewer::entityAddedCallback(hkpRigidBodyInertiaViewer *this, hkpEntity *a2);
// [0x1841c20] (2270 bytes) hkpRigidBodyInertiaViewer::postSimulationCallback(hkpWorld *)
// int hkpRigidBodyInertiaViewer::postSimulationCallback(hkpRigidBodyInertiaViewer *this);
// [0x1842510] (66 bytes) hkpRigidBodyInertiaViewer::registerViewer(void)
// int hkpRigidBodyInertiaViewer::registerViewer();
// [0x1842560] (128 bytes) hkpRigidBodyInertiaViewer::hkpRigidBodyInertiaViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// void (**hkpRigidBodyInertiaViewer::hkpRigidBodyInertiaViewer( uint32_t *a1, int a2))(hkpRigidBodyInertiaViewer *__hidden this);
// [0x18425e0] (92 bytes) hkpRigidBodyInertiaViewer::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// uint32_t *hkpRigidBodyInertiaViewer::create(int a1);
// [0x1842640] (323 bytes) hkpRigidBodyInertiaViewer::removeWorld(hkpWorld *)
// hkpWorld *hkpRigidBodyInertiaViewer::removeWorld(hkpRigidBodyInertiaViewer *this, hkpWorld *a2);
// [0x1842790] (42 bytes) hkpRigidBodyInertiaViewer::worldRemovedCallback(hkpWorld *)
// hkpWorld *hkpRigidBodyInertiaViewer::worldRemovedCallback(hkpRigidBodyInertiaViewer *this, hkpWorld *a2);
// [0x18427d0] (320 bytes) hkpRigidBodyInertiaViewer::~hkpRigidBodyInertiaViewer()
// void hkpRigidBodyInertiaViewer::~hkpRigidBodyInertiaViewer(hkpRigidBodyInertiaViewer *this);
// [0x1842950] (93 bytes) hkpRigidBodyInertiaViewer::~hkpRigidBodyInertiaViewer()
// void hkpRigidBodyInertiaViewer::~hkpRigidBodyInertiaViewer(hkpRigidBodyInertiaViewer *this);
// [0x18429f0] (323 bytes) hkpRigidBodyInertiaViewer::addWorld(hkpWorld *)
// hkpWorld *hkpRigidBodyInertiaViewer::addWorld(hkpRigidBodyInertiaViewer *this, hkpWorld *a2);
// [0x1842b40] (85 bytes) hkpRigidBodyInertiaViewer::init(void)
// hkpWorld *hkpRigidBodyInertiaViewer::init(hkpRigidBodyInertiaViewer *this);
// [0x1842bb0] (42 bytes) hkpRigidBodyInertiaViewer::worldAddedCallback(hkpWorld *)
// hkpWorld *hkpRigidBodyInertiaViewer::worldAddedCallback(hkpRigidBodyInertiaViewer *this, hkpWorld *a2);
// [0x184d210] (22 bytes) hkpRigidBodyCentreOfMassViewer::getProcessTag(void)
// int hkpRigidBodyCentreOfMassViewer::getProcessTag();
// [0x184d240] (84 bytes) hkpRigidBodyCentreOfMassViewer::entityRemovedCallback(hkpEntity *)
// void hkpRigidBodyCentreOfMassViewer::entityRemovedCallback(hkpRigidBodyCentreOfMassViewer *this, hkpEntity *a2);
// [0x184d2b0] (98 bytes) hkpRigidBodyCentreOfMassViewer::entityAddedCallback(hkpEntity *)
// int hkpRigidBodyCentreOfMassViewer::entityAddedCallback(hkpRigidBodyCentreOfMassViewer *this, hkpEntity *a2);
// [0x184d330] (938 bytes) hkpRigidBodyCentreOfMassViewer::postSimulationCallback(hkpWorld *)
// int hkpRigidBodyCentreOfMassViewer::postSimulationCallback(hkpRigidBodyCentreOfMassViewer *this);
// [0x184d6f0] (66 bytes) hkpRigidBodyCentreOfMassViewer::registerViewer(void)
// int hkpRigidBodyCentreOfMassViewer::registerViewer();
// [0x184d740] (107 bytes) hkpRigidBodyCentreOfMassViewer::hkpRigidBodyCentreOfMassViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// void (**hkpRigidBodyCentreOfMassViewer::hkpRigidBodyCentreOfMassViewer( uint32_t *a1, uint32_t *a2))(hkpRigidBodyCentreOfMassViewer *__hidden this);
// [0x184d7b0] (92 bytes) hkpRigidBodyCentreOfMassViewer::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// uint32_t *hkpRigidBodyCentreOfMassViewer::create(uint32_t *a1);
// [0x184d810] (323 bytes) hkpRigidBodyCentreOfMassViewer::removeWorld(hkpWorld *)
// hkpWorld *hkpRigidBodyCentreOfMassViewer::removeWorld(hkpRigidBodyCentreOfMassViewer *this, hkpWorld *a2);
// [0x184d960] (42 bytes) hkpRigidBodyCentreOfMassViewer::worldRemovedCallback(hkpWorld *)
// hkpWorld *hkpRigidBodyCentreOfMassViewer::worldRemovedCallback( hkpRigidBodyCentreOfMassViewer *this, hkpWorld *a2);
// [0x184d9a0] (205 bytes) hkpRigidBodyCentreOfMassViewer::~hkpRigidBodyCentreOfMassViewer()
// void hkpRigidBodyCentreOfMassViewer::~hkpRigidBodyCentreOfMassViewer(hkpRigidBodyCentreOfMassViewer *this);
// [0x184dab0] (93 bytes) hkpRigidBodyCentreOfMassViewer::~hkpRigidBodyCentreOfMassViewer()
// void hkpRigidBodyCentreOfMassViewer::~hkpRigidBodyCentreOfMassViewer(hkpRigidBodyCentreOfMassViewer *this);
// [0x184db50] (323 bytes) hkpRigidBodyCentreOfMassViewer::addWorld(hkpWorld *)
// hkpWorld *hkpRigidBodyCentreOfMassViewer::addWorld(hkpRigidBodyCentreOfMassViewer *this, hkpWorld *a2);
// [0x184dca0] (85 bytes) hkpRigidBodyCentreOfMassViewer::init(void)
// int hkpRigidBodyCentreOfMassViewer::init(hkpRigidBodyCentreOfMassViewer *this);
// [0x184dd10] (42 bytes) hkpRigidBodyCentreOfMassViewer::worldAddedCallback(hkpWorld *)
// hkpWorld *hkpRigidBodyCentreOfMassViewer::worldAddedCallback( hkpRigidBodyCentreOfMassViewer *this, hkpWorld *a2);
