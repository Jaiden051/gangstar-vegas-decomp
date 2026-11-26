#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpWheelFr.h
// Library: havok | Module: havok_physics_hkpWheelFr
// Binary Address Span: 0x1713250 .. 0x17232e0 (24 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1713250] (22 bytes) hkpWheelFrictionConstraintData::Runtime::staticClass(void)
// void *hkpWheelFrictionConstraintData::Runtime::staticClass();
// [0x1713270] (22 bytes) hkpWheelFrictionConstraintData::Atoms::staticClass(void)
// void *hkpWheelFrictionConstraintData::Atoms::staticClass();
// [0x1713290] (22 bytes) hkpWheelFrictionConstraintData::staticClass(void)
// void *hkpWheelFrictionConstraintData::staticClass();
// [0x1719bd0] (22 bytes) hkpWheelFrictionConstraintAtom::Axle::staticClass(void)
// void *hkpWheelFrictionConstraintAtom::Axle::staticClass();
// [0x1719bf0] (22 bytes) hkpWheelFrictionConstraintAtom::staticClass(void)
// void *hkpWheelFrictionConstraintAtom::staticClass();
// [0x1722eb0] (22 bytes) hkpWheelFrictionConstraintData::isValid(void)const
// hkpWheelFrictionConstraintData *hkpWheelFrictionConstraintData::isValid( hkpWheelFrictionConstraintData *this, int a2);
// [0x1722ed0] (12 bytes) hkpWheelFrictionConstraintData::getType(void)const
// int hkpWheelFrictionConstraintData::getType();
// [0x1722ee0] (24 bytes) hkpWheelFrictionConstraintData::getRuntimeInfo(hkBool,hkpConstraintData::RuntimeInfo &)const
// int64_t hkpWheelFrictionConstraintData::getRuntimeInfo(int a1, char a2, uint32_t *a3);
// [0x1722f00] (29 bytes) hkpWheelFrictionConstraintData::~hkpWheelFrictionConstraintData()
// void hkpWheelFrictionConstraintData::~hkpWheelFrictionConstraintData(hkpWheelFrictionConstraintData *this);
// [0x1722f20] (53 bytes) hkpWheelFrictionConstraintData::getConstraintInfo(hkpConstraintData::ConstraintInfo &)const
// uint32_t *hkpWheelFrictionConstraintData::getConstraintInfo(int a1, uint32_t *a2);
// [0x1722f60] (96 bytes) hkpWheelFrictionConstraintData::~hkpWheelFrictionConstraintData()
// void hkpWheelFrictionConstraintData::~hkpWheelFrictionConstraintData(hkpWheelFrictionConstraintData *this);
// [0x1722fc0] (60 bytes) hkpWheelFrictionConstraintData::init(hkpWheelFrictionConstraintAtom::Axle *,float)
// hkpWheelFrictionConstraintData *hkpWheelFrictionConstraintData::init( hkpWheelFrictionConstraintData *this, hkpWheelFrictionConstraintAtom::Axle *a2, float a3);
// [0x1723000] (349 bytes) hkpWheelFrictionConstraintData::setInWorldSpace(hkTransformf const&,hkTransformf const&,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// const hkTransformf *hkpWheelFrictionConstraintData::setInWorldSpace( hkpWheelFrictionConstraintData *this, const hkTransformf *a2, const hkTransformf *a3, const hkVector4f *a4, const hkVector4f *a5, const hkVector4f *a6);
// [0x1723160] (21 bytes) hkpWheelFrictionConstraintData::setMaxFrictionForce(float)
// hkpWheelFrictionConstraintData *hkpWheelFrictionConstraintData::setMaxFrictionForce( hkpWheelFrictionConstraintData *this, float a2);
// [0x1723180] (21 bytes) hkpWheelFrictionConstraintData::setTorque(float)
// hkpWheelFrictionConstraintData *hkpWheelFrictionConstraintData::setTorque( hkpWheelFrictionConstraintData *this, float a2);
// [0x17231a0] (31 bytes) hkpWheelFrictionConstraintData::getSpinVelocity(void)
// long double hkpWheelFrictionConstraintData::getSpinVelocity(float **this);
// [0x17231c0] (21 bytes) hkpWheelFrictionConstraintData::setSpinVelocity(float)
// float *hkpWheelFrictionConstraintData::setSpinVelocity(hkpWheelFrictionConstraintData *this, float a2);
// [0x17231e0] (72 bytes) hkpWheelFrictionConstraintData::setInvInertia(float)
// int hkpWheelFrictionConstraintData::setInvInertia(hkpWheelFrictionConstraintData *this, float a2);
// [0x1723230] (33 bytes) hkpWheelFrictionConstraintData::setImpulseScaling(float,float)
// int hkpWheelFrictionConstraintData::setImpulseScaling(hkpWheelFrictionConstraintData *this, float a2, float a3);
// [0x1723260] (29 bytes) hkpWheelFrictionConstraintData::getForwardFrictionImpulse(void)
// long double hkpWheelFrictionConstraintData::getForwardFrictionImpulse(hkpWheelFrictionConstraintData *this);
// [0x1723280] (29 bytes) hkpWheelFrictionConstraintData::getSideFrictionImpulse(void)
// long double hkpWheelFrictionConstraintData::getSideFrictionImpulse(hkpWheelFrictionConstraintData *this);
// [0x17232a0] (29 bytes) hkpWheelFrictionConstraintData::getForwardSlipImpulse(void)
// long double hkpWheelFrictionConstraintData::getForwardSlipImpulse(hkpWheelFrictionConstraintData *this);
// [0x17232c0] (29 bytes) hkpWheelFrictionConstraintData::getSideSlipImpulse(void)
// long double hkpWheelFrictionConstraintData::getSideSlipImpulse(hkpWheelFrictionConstraintData *this);
// [0x17232e0] (37 bytes) hkpWheelFrictionConstraintData::resetSolverData(void)
// hkpWheelFrictionConstraintData *hkpWheelFrictionConstraintData::resetSolverData( hkpWheelFrictionConstraintData *this);
