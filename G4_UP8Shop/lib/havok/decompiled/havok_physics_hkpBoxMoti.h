#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpBoxMoti.h
// Library: havok | Module: havok_physics_hkpBoxMoti
// Binary Address Span: 0x17305e0 .. 0x17695f0 (19 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x17305e0] (22 bytes) hkpBoxMotion::staticClass(void)
// void *hkpBoxMotion::staticClass();
// [0x17687f0] (109 bytes) hkpBoxMotion::getInertiaInvLocal(hkMatrix3f &)const
// hkMatrix3f *hkpBoxMotion::getInertiaInvLocal(hkpBoxMotion *this, hkMatrix3f *a2);
// [0x1768860] (47 bytes) hkpBoxMotion::setInertiaInvLocal(hkMatrix3f const&)
// hkpBoxMotion *hkpBoxMotion::setInertiaInvLocal(hkpBoxMotion *this, const hkMatrix3f *a2);
// [0x1768890] (505 bytes) hkpBoxMotion::applyPointImpulse(hkVector4f const&,hkVector4f const&)
// float *hkpBoxMotion::applyPointImpulse(hkpBoxMotion *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x1768a90] (134 bytes) hkpBoxMotion::applyForce(float,hkVector4f const&)
// hkpBoxMotion *hkpBoxMotion::applyForce(hkpBoxMotion *this, float a2, const hkVector4f *a3);
// [0x1768b20] (58 bytes) hkpBoxMotion::applyForce(float,hkVector4f const&,hkVector4f const&)
// int hkpBoxMotion::applyForce(hkpBoxMotion *this, unsigned int a2, __m128 *a3, const hkVector4f *a4);
// [0x1768b60] (51 bytes) hkpBoxMotion::applyTorque(float,hkVector4f const&)
// int hkpBoxMotion::applyTorque(hkpBoxMotion *this, unsigned int a2, __m128 *a3);
// [0x1768ba0] (437 bytes) hkpBoxMotion::getInertiaLocal(hkMatrix3f &)const
// hkMatrix3f *hkpBoxMotion::getInertiaLocal(hkpBoxMotion *this, hkMatrix3f *a2);
// [0x1768d60] (130 bytes) hkpBoxMotion::setMass(hkSimdFloat32 const&)
// int hkpBoxMotion::setMass(int a1, unsigned int *a2);
// [0x1768df0] (29 bytes) hkpBoxMotion::~hkpBoxMotion()
// void hkpBoxMotion::~hkpBoxMotion(hkpBoxMotion *this);
// [0x1768e10] (275 bytes) hkpBoxMotion::getInertiaInvWorld(hkMatrix3f &)const
// hkMatrix3f *hkpBoxMotion::getInertiaInvWorld(hkpBoxMotion *this, hkMatrix3f *a2);
// [0x1768f30] (61 bytes) hkpBoxMotion::getInertiaWorld(hkMatrix3f &)const
// hkMatrix3f *hkpBoxMotion::getInertiaWorld(hkpBoxMotion *this, hkMatrix3f *a2);
// [0x1768f70] (96 bytes) hkpBoxMotion::~hkpBoxMotion()
// void hkpBoxMotion::~hkpBoxMotion(hkpBoxMotion *this);
// [0x1768fd0] (128 bytes) hkpBoxMotion::setMass(float)
// hkpBoxMotion *hkpBoxMotion::setMass(hkpBoxMotion *this, unsigned int a2);
// [0x1769050] (354 bytes) hkpBoxMotion::getProjectedPointVelocitySimd(hkVector4f const&,hkVector4f const&,hkSimdFloat32 &,hkSimdFloat32 &)const
// float *hkpBoxMotion::getProjectedPointVelocitySimd(float *a1, float *a2, float *a3, float *a4, float *a5);
// [0x17691c0] (376 bytes) hkpBoxMotion::getProjectedPointVelocity(hkVector4f const&,hkVector4f const&,float &,float &)const
// float *hkpBoxMotion::getProjectedPointVelocity( hkpBoxMotion *this, const hkVector4f *a2, const hkVector4f *a3, float *a4, float *a5);
// [0x1769340] (327 bytes) hkpBoxMotion::applyAngularImpulse(hkVector4f const&)
// hkpBoxMotion *hkpBoxMotion::applyAngularImpulse(hkpBoxMotion *this, const hkVector4f *a2);
// [0x1769490] (341 bytes) hkpBoxMotion::setInertiaLocal(hkMatrix3f const&)
// int hkpBoxMotion::setInertiaLocal(hkpBoxMotion *this, const hkMatrix3f *a2);
// [0x17695f0] (117 bytes) hkpBoxMotion::hkpBoxMotion(hkVector4f const&,hkQuaternionf const&)
// void hkpBoxMotion::hkpBoxMotion(hkpBoxMotion *this, const hkVector4f *a2, const hkQuaternionf *a3);
