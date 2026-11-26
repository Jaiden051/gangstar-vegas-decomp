#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpRagdoll.h
// Library: havok | Module: havok_physics_hkpRagdoll
// Binary Address Span: 0x1712050 .. 0x1af2960 (53 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1712050] (22 bytes) hkpRagdollLimitsData::Atoms::staticClass(void)
// void *hkpRagdollLimitsData::Atoms::staticClass();
// [0x1712070] (22 bytes) hkpRagdollLimitsData::staticClass(void)
// void *hkpRagdollLimitsData::staticClass();
// [0x1714640] (20 bytes) hkpRagdollLimitsData::getRuntimeInfo(hkBool,hkpConstraintData::RuntimeInfo &)const
// uint32_t *hkpRagdollLimitsData::getRuntimeInfo(int a1, int a2, uint32_t *a3);
// [0x1714660] (12 bytes) hkpRagdollLimitsData::getType(void)const
// int hkpRagdollLimitsData::getType();
// [0x1714670] (29 bytes) hkpRagdollLimitsData::~hkpRagdollLimitsData()
// void hkpRagdollLimitsData::~hkpRagdollLimitsData(hkpRagdollLimitsData *this);
// [0x1714690] (53 bytes) hkpRagdollLimitsData::getConstraintInfo(hkpConstraintData::ConstraintInfo &)const
// int hkpRagdollLimitsData::getConstraintInfo(int a1, int a2);
// [0x17146d0] (192 bytes) hkpRagdollLimitsData::isValid(void)const
// hkpRagdollLimitsData *hkpRagdollLimitsData::isValid(hkpRagdollLimitsData *this, float *a2);
// [0x1714790] (96 bytes) hkpRagdollLimitsData::~hkpRagdollLimitsData()
// void hkpRagdollLimitsData::~hkpRagdollLimitsData(hkpRagdollLimitsData *this);
// [0x17147f0] (1616 bytes) hkpRagdollLimitsData::setInWorldSpace(hkTransformf const&,hkTransformf const&,hkVector4f const&,hkVector4f const&)
// hkpRagdollLimitsData *hkpRagdollLimitsData::setInWorldSpace( hkpRagdollLimitsData *this, const hkTransformf *a2, const hkTransformf *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x1714e40] (1224 bytes) hkpRagdollLimitsData::setInBodySpace(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// hkpRagdollLimitsData *hkpRagdollLimitsData::setInBodySpace( hkpRagdollLimitsData *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x1715310] (22 bytes) hkpRagdollLimitsData::setConeLimitStabilization(hkBool)
// int hkpRagdollLimitsData::setConeLimitStabilization(int a1, int a2, char a3);
// [0x1715330] (504 bytes) hkpRagdollLimitsData::hkpRagdollLimitsData(void)
// void hkpRagdollLimitsData::hkpRagdollLimitsData(hkpRagdollLimitsData *this);
// [0x1715530] (80 bytes) hkpRagdollLimitsData::getConstraintFrameA(hkMatrix3f &)const
// hkMatrix3f *hkpRagdollLimitsData::getConstraintFrameA(hkpRagdollLimitsData *this, hkMatrix3f *a2);
// [0x1715580] (80 bytes) hkpRagdollLimitsData::getConstraintFrameB(hkMatrix3f &)const
// hkMatrix3f *hkpRagdollLimitsData::getConstraintFrameB(hkpRagdollLimitsData *this, hkMatrix3f *a2);
// [0x1719af0] (22 bytes) hkpRagdollMotorConstraintAtom::staticClass(void)
// void *hkpRagdollMotorConstraintAtom::staticClass();
// [0x171bdc0] (102 bytes) hkpRagdollConstraintData::hkpRagdollConstraintData(hkFinishLoadedObjectFlag)
// int hkpRagdollConstraintData::hkpRagdollConstraintData(int a1, int a2);
// [0x171be70] (22 bytes) hkpRagdollConstraintData::Atoms::staticClass(void)
// void *hkpRagdollConstraintData::Atoms::staticClass();
// [0x171be90] (22 bytes) hkpRagdollConstraintData::staticClass(void)
// void *hkpRagdollConstraintData::staticClass();
// [0x1726380] (21 bytes) hkpRagdollConstraintData::setBreachImpulse(float)
// hkpRagdollConstraintData *hkpRagdollConstraintData::setBreachImpulse(hkpRagdollConstraintData *this, float a2);
// [0x17263a0] (29 bytes) hkpRagdollConstraintData::getBreachImpulse(void)const
// long double hkpRagdollConstraintData::getBreachImpulse(hkpRagdollConstraintData *this);
// [0x17263c0] (22 bytes) hkpRagdollConstraintData::setBodyToNotify(int)
// int hkpRagdollConstraintData::setBodyToNotify(hkpRagdollConstraintData *this, char a2);
// [0x17263e0] (16 bytes) hkpRagdollConstraintData::getNotifiedBodyIndex(void)const
// int hkpRagdollConstraintData::getNotifiedBodyIndex(hkpRagdollConstraintData *this);
// [0x17263f0] (20 bytes) hkpRagdollConstraintData::getRuntimeInfo(hkBool,hkpConstraintData::RuntimeInfo &)const
// uint32_t *hkpRagdollConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3);
// [0x1726410] (12 bytes) hkpRagdollConstraintData::getType(void)const
// int hkpRagdollConstraintData::getType();
// [0x1726420] (55 bytes) hkpRagdollConstraintData::setSolvingMethod(hkpConstraintAtom::SolvingMethod)
// int hkpRagdollConstraintData::setSolvingMethod(int a1, int a2);
// [0x1726460] (33 bytes) hkpRagdollConstraintData::getInertiaStabilizationFactor(float &)const
// hkpRagdollConstraintData *hkpRagdollConstraintData::getInertiaStabilizationFactor( hkpRagdollConstraintData *this, float *a2, float *a3);
// [0x1726490] (62 bytes) hkpRagdollConstraintData::setInertiaStabilizationFactor(float)
// hkpRagdollConstraintData *hkpRagdollConstraintData::setInertiaStabilizationFactor( hkpRagdollConstraintData *this, float a2, float a3);
// [0x17264d0] (53 bytes) hkpRagdollConstraintData::getConstraintInfo(hkpConstraintData::ConstraintInfo &)const
// uint32_t *hkpRagdollConstraintData::getConstraintInfo(int a1, uint32_t *a2);
// [0x1726510] (228 bytes) hkpRagdollConstraintData::isValid(void)const
// hkpRagdollConstraintData *hkpRagdollConstraintData::isValid(hkpRagdollConstraintData *this, int a2);
// [0x1726600] (141 bytes) hkpRagdollConstraintData::~hkpRagdollConstraintData()
// void hkpRagdollConstraintData::~hkpRagdollConstraintData(hkpRagdollConstraintData *this);
// [0x1726690] (93 bytes) hkpRagdollConstraintData::~hkpRagdollConstraintData()
// void hkpRagdollConstraintData::~hkpRagdollConstraintData(hkpRagdollConstraintData *this);
// [0x17266f0] (49 bytes) hkpRagdollConstraintData::Atoms::Atoms(hkFinishLoadedObjectFlag)
// int hkpRagdollConstraintData::Atoms::Atoms(int a1, int a2);
// [0x1726730] (1864 bytes) hkpRagdollConstraintData::setInWorldSpace(hkTransformf const&,hkTransformf const&,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// int hkpRagdollConstraintData::setInWorldSpace( hkpRagdollConstraintData *this, const hkTransformf *a2, const hkTransformf *a3, const hkVector4f *a4, const hkVector4f *a5, const hkVector4f *a6);
// [0x1726e80] (1440 bytes) hkpRagdollConstraintData::setInBodySpace(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// hkpRagdollConstraintData *hkpRagdollConstraintData::setInBodySpace( hkpRagdollConstraintData *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5, const hkVector4f *a6, const hkVector4f *a7);
// [0x1727420] (21 bytes) hkpRagdollConstraintData::setMaxFrictionTorque(float)
// hkpRagdollConstraintData *hkpRagdollConstraintData::setMaxFrictionTorque( hkpRagdollConstraintData *this, float a2);
// [0x1727440] (29 bytes) hkpRagdollConstraintData::setConeLimitStabilization(hkBool)
// int hkpRagdollConstraintData::setConeLimitStabilization(int a1, int a2, char a3);
// [0x1727460] (963 bytes) hkpRagdollConstraintData::hkpRagdollConstraintData(void)
// void hkpRagdollConstraintData::hkpRagdollConstraintData(hkpRagdollConstraintData *this);
// [0x1727830] (240 bytes) hkpRagdollConstraintData::setAsymmetricConeAngle(float,float)
// hkVector4f *hkpRagdollConstraintData::setAsymmetricConeAngle( hkpRagdollConstraintData *this, float a2, float a3);
// [0x1727920] (80 bytes) hkpRagdollConstraintData::getConstraintFrameA(hkMatrix3f &)const
// hkMatrix3f *hkpRagdollConstraintData::getConstraintFrameA(hkpRagdollConstraintData *this, hkMatrix3f *a2);
// [0x1727970] (92 bytes) hkpRagdollConstraintData::getConstraintFrameB(hkMatrix3f &)const
// hkMatrix3f *hkpRagdollConstraintData::getConstraintFrameB(hkpRagdollConstraintData *this, hkMatrix3f *a2);
// [0x17279d0] (56 bytes) hkpRagdollConstraintData::setTarget(hkMatrix3f const&)
// hkMatrix3f *hkpRagdollConstraintData::setTarget(hkpRagdollConstraintData *this, const hkMatrix3f *a2);
// [0x1727a10] (56 bytes) hkpRagdollConstraintData::setTargetRelativeOrientationOfBodies(hkRotationf const&)
// hkMatrix3f *hkpRagdollConstraintData::setTargetRelativeOrientationOfBodies( hkpRagdollConstraintData *this, const hkRotationf *a2);
// [0x1727a50] (57 bytes) hkpRagdollConstraintData::getTarget(hkMatrix3f &)
// hkMatrix3f *hkpRagdollConstraintData::getTarget(hkpRagdollConstraintData *this, hkMatrix3f *a2);
// [0x1727a90] (15 bytes) hkpRagdollConstraintData::getTwistMotor(void)const
// int hkpRagdollConstraintData::getTwistMotor(hkpRagdollConstraintData *this);
// [0x1727aa0] (158 bytes) hkpRagdollConstraintData::setMotor(hkpRagdollConstraintData::MotorIndex,hkpConstraintMotor *)
// int hkpRagdollConstraintData::setMotor(int a1, int a2, int a3);
// [0x1727b40] (50 bytes) hkpRagdollConstraintData::setTwistMotor(hkpConstraintMotor *)
// int hkpRagdollConstraintData::setTwistMotor(hkpRagdollConstraintData *this, hkpConstraintMotor *a2);
// [0x1727b80] (15 bytes) hkpRagdollConstraintData::getConeMotor(void)const
// int hkpRagdollConstraintData::getConeMotor(hkpRagdollConstraintData *this);
// [0x1727b90] (50 bytes) hkpRagdollConstraintData::setConeMotor(hkpConstraintMotor *)
// int hkpRagdollConstraintData::setConeMotor(hkpRagdollConstraintData *this, hkpConstraintMotor *a2);
// [0x1727bd0] (15 bytes) hkpRagdollConstraintData::getPlaneMotor(void)const
// int hkpRagdollConstraintData::getPlaneMotor(hkpRagdollConstraintData *this);
// [0x1727be0] (50 bytes) hkpRagdollConstraintData::setPlaneMotor(hkpConstraintMotor *)
// int hkpRagdollConstraintData::setPlaneMotor(hkpRagdollConstraintData *this, hkpConstraintMotor *a2);
// [0x1727c20] (110 bytes) hkpRagdollConstraintData::setMotorsEnabled(hkpConstraintRuntime *,hkBool)
// uint32_t *hkpRagdollConstraintData::setMotorsEnabled(int a1, uint32_t *a2, char a3);
// [0x1af0b80] (2587 bytes) hkpRagdollDrawer::drawConstraint(hkpRagdollConstraintData const*,hkTransformf const&,hkTransformf const&,hkDebugDisplayHandler *,int,int)
// int hkpRagdollDrawer::drawConstraint( hkpRagdollDrawer *this, const hkpRagdollConstraintData *a2, const hkTransformf *a3, const hkTransformf *a4, hkDebugDisplayHandler *a5, int a6, void *a7);
// [0x1af2960] (2507 bytes) hkpRagdollLimitsDrawer::drawConstraint(hkpRagdollLimitsData const*,hkTransformf const&,hkTransformf const&,hkDebugDisplayHandler *,int,int)
// int hkpRagdollLimitsDrawer::drawConstraint( hkpRagdollLimitsDrawer *this, const hkpRagdollLimitsData *a2, const hkTransformf *a3, const hkTransformf *a4, hkDebugDisplayHandler *a5, int a6, void *a7);
