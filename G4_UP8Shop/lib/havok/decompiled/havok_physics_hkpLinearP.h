#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpLinearP.h
// Library: havok | Module: havok_physics_hkpLinearP
// Binary Address Span: 0x17122f0 .. 0x1719470 (19 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x17122f0] (22 bytes) hkpLinearParametricCurve::staticClass(void)
// void *hkpLinearParametricCurve::staticClass();
// [0x17176e0] (17 bytes) hkpLinearParametricCurve::isClosedLoop(void)const
// hkpLinearParametricCurve *hkpLinearParametricCurve::isClosedLoop(hkpLinearParametricCurve *this, int a2);
// [0x1717700] (9 bytes) hkpLinearParametricCurve::getStart(void)const
// long double hkpLinearParametricCurve::getStart();
// [0x1717710] (31 bytes) hkpLinearParametricCurve::getEnd(void)const
// long double hkpLinearParametricCurve::getEnd(hkpLinearParametricCurve *this);
// [0x1717730] (234 bytes) hkpLinearParametricCurve::transformPoints(hkTransformf const&)
// const hkTransformf *hkpLinearParametricCurve::transformPoints( hkpLinearParametricCurve *this, const hkTransformf *a2);
// [0x1717820] (242 bytes) hkpLinearParametricCurve::getPointsToDraw(hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// int hkpLinearParametricCurve::getPointsToDraw( hkpLinearParametricCurve *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1717920] (162 bytes) hkpLinearParametricCurve::~hkpLinearParametricCurve()
// void hkpLinearParametricCurve::~hkpLinearParametricCurve(hkpLinearParametricCurve *this);
// [0x17179d0] (219 bytes) hkpLinearParametricCurve::~hkpLinearParametricCurve()
// void hkpLinearParametricCurve::~hkpLinearParametricCurve(hkpLinearParametricCurve *this);
// [0x1717ab0] (355 bytes) hkpLinearParametricCurve::getPoint(float,hkVector4f &)const
// float *hkpLinearParametricCurve::getPoint(hkpLinearParametricCurve *this, float a2, hkVector4f *a3);
// [0x1717c20] (265 bytes) hkpLinearParametricCurve::getLengthFromStart(float)const
// long double hkpLinearParametricCurve::getLengthFromStart(hkpLinearParametricCurve *this, float a2);
// [0x1717d30] (616 bytes) hkpLinearParametricCurve::getBinormal(float,hkVector4f &)const
// int *hkpLinearParametricCurve::getBinormal(hkpLinearParametricCurve *this, unsigned int a2, hkVector4f *a3);
// [0x1717fa0] (1992 bytes) hkpLinearParametricCurve::getTangent(float,hkVector4f &)const
// signed int hkpLinearParametricCurve::getTangent(hkpLinearParametricCurve *this, int a2, hkVector4f *a3);
// [0x1718770] (1977 bytes) hkpLinearParametricCurve::getNearestPoint(float,hkVector4f const&,hkVector4f&)const
// long double hkpLinearParametricCurve::getNearestPoint( hkpLinearParametricCurve *this, float a2, const hkVector4f *a3, hkVector4f *a4);
// [0x1718f30] (131 bytes) hkpLinearParametricCurve::hkpLinearParametricCurve(void)
// void hkpLinearParametricCurve::hkpLinearParametricCurve(hkpLinearParametricCurve *this);
// [0x1718fc0] (15 bytes) hkpLinearParametricCurve::setClosedLoop(hkBool)
// int hkpLinearParametricCurve::setClosedLoop(int a1, uint8_t a2);
// [0x1718fd0] (517 bytes) hkpLinearParametricCurve::addPoint(hkVector4f const&)
// int hkpLinearParametricCurve::addPoint(hkpLinearParametricCurve *this, const hkVector4f *a2);
// [0x17191e0] (615 bytes) hkpLinearParametricCurve::clone(void)
// int hkpLinearParametricCurve::clone( hkpLinearParametricCurve *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
// [0x1719450] (26 bytes) hkpLinearParametricCurve::getSmoothingFactor(void)const
// long double hkpLinearParametricCurve::getSmoothingFactor(hkpLinearParametricCurve *this);
// [0x1719470] (18 bytes) hkpLinearParametricCurve::setSmoothingFactor(float)
// hkpLinearParametricCurve *hkpLinearParametricCurve::setSmoothingFactor( hkpLinearParametricCurve *this, float a2);
