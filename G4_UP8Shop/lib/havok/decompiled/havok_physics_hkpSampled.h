#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpSampled.h
// Library: havok | Module: havok_physics_hkpSampled
// Binary Address Span: 0x1ae67f0 .. 0x1ae8ff0 (16 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1ae67f0] (866 bytes) hkpSampledHeightFieldShape::getAabb(hkTransformf const&,float,hkAabb &)const
// int hkpSampledHeightFieldShape::getAabb(hkpSampledHeightFieldShape *this, const hkTransformf *a2);
// [0x1ae6b60] (124 bytes) hkpSampledHeightFieldShape::getCoarseMinMax(int,int,int,hkVector4f &,hkVector4f &)const
// uint32_t *hkpSampledHeightFieldShape::getCoarseMinMax( hkpSampledHeightFieldShape *this, int a2, int a3, int a4, hkVector4f *a5, hkVector4f *a6);
// [0x1ae6c40] (131 bytes) hkpSampledHeightFieldShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// uint8_t *hkpSampledHeightFieldShape::castRay(uint8_t *a1, int a2, int a3, int a4);
// [0x1ae6cd0] (108 bytes) hkpSampledHeightFieldShape::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpSampledHeightFieldShape::castRayWithCollector(int a1, int a2, int a3, int a4);
// [0x1ae6d40] (293 bytes) hkpSampledHeightFieldShape::castSphere(hkpHeightFieldShape::hkpSphereCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpSampledHeightFieldShape::castSphere(int a1, int a2, int a3, int a4);
// [0x1ae6f10] (221 bytes) hkpSampledHeightFieldShape::~hkpSampledHeightFieldShape()
// void hkpSampledHeightFieldShape::~hkpSampledHeightFieldShape(hkpSampledHeightFieldShape *this);
// [0x1ae6ff0] (93 bytes) hkpSampledHeightFieldShape::~hkpSampledHeightFieldShape()
// void hkpSampledHeightFieldShape::~hkpSampledHeightFieldShape(hkpSampledHeightFieldShape *this);
// [0x1ae7170] (69 bytes) hkpSampledHeightFieldShape::hkpSampledHeightFieldShape(hkFinishLoadedObjectFlag)
// void (**hkpSampledHeightFieldShape::hkpSampledHeightFieldShape( int a1, int a2))(hkpSampledHeightFieldShape *__hidden this);
// [0x1ae71c0] (9 bytes) hkpSampledHeightFieldShape::getCinfo(hkpSampledHeightFieldBaseCinfo &)const
// void hkpSampledHeightFieldShape::getCinfo();
// [0x1ae71d0] (837 bytes) hkpSampledHeightFieldShape::getHeightAndNormalAt(int,int,float,float,hkVector4f &,float &,int &)const
// uint32_t *hkpSampledHeightFieldShape::getHeightAndNormalAt( hkpSampledHeightFieldShape *this, int a2, int a3, float a4, float a5, hkVector4f *a6, float *a7, int *a8);
// [0x1ae75e0] (715 bytes) hkpSampledHeightFieldShape::hkpSampledHeightFieldShape(hkpSampledHeightFieldBaseCinfo const&,hkpSampledHeightFieldShape::HeightFieldType)
// hkVector4UtilImpl<float> *hkpSampledHeightFieldShape::hkpSampledHeightFieldShape( int a1, unsigned int *a2, char a3);
// [0x1ae78b0] (120 bytes) hkpSampledHeightFieldShape::collideSpheres(hkpHeightFieldShape::CollideSpheresInput const&,hkVector4f *)const
// void hkpSampledHeightFieldShape::collideSpheres();
// [0x1ae7930] (122 bytes) hkpSampledHeightFieldShape::getHeightAtImpl(int,int)const
// long double hkpSampledHeightFieldShape::getHeightAtImpl();
// [0x1ae79b0] (136 bytes) hkpSampledHeightFieldShape::getTriangleFlipImpl(void)const
// hkpSampledHeightFieldShape *hkpSampledHeightFieldShape::getTriangleFlipImpl(hkpSampledHeightFieldShape *this);
// [0x1ae8fd0] (22 bytes) hkpSampledHeightFieldShape::CoarseMinMaxLevel::staticClass(void)
// void *hkpSampledHeightFieldShape::CoarseMinMaxLevel::staticClass();
// [0x1ae8ff0] (22 bytes) hkpSampledHeightFieldShape::staticClass(void)
// void *hkpSampledHeightFieldShape::staticClass();
