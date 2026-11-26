#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpCylinde.h
// Library: havok | Module: havok_physics_hkpCylinde
// Binary Address Span: 0x1693c60 .. 0x169bc00 (19 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1693c60] (12 bytes) hkpCylinderShape::getSize(void)const
// int hkpCylinderShape::getSize();
// [0x1693c70] (12 bytes) hkpCylinderShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpCylinderShape::calcSizeForSpu();
// [0x1693c80] (12 bytes) hkpCylinderShape::getNumCollisionSpheres(void)const
// int hkpCylinderShape::getNumCollisionSpheres();
// [0x1693c90] (123 bytes) hkpCylinderShape::getCentre(hkVector4f &)const
// void *hkpCylinderShape::getCentre(hkpCylinderShape *this, hkVector4f *a2);
// [0x1693d10] (32 bytes) hkpCylinderShape::getFirstVertex(hkVector4f &)const
// hkVector4f *hkpCylinderShape::getFirstVertex(hkpCylinderShape *this, hkVector4f *a2);
// [0x1693d30] (1495 bytes) hkpCylinderShape::getCollisionSpheres(hkSphere *)const
// hkSphere *hkpCylinderShape::getCollisionSpheres(hkpCylinderShape *this, hkSphere *a2);
// [0x1694310] (29 bytes) hkpCylinderShape::~hkpCylinderShape()
// void hkpCylinderShape::~hkpCylinderShape(hkpCylinderShape *this);
// [0x1694330] (96 bytes) hkpCylinderShape::~hkpCylinderShape()
// void hkpCylinderShape::~hkpCylinderShape(hkpCylinderShape *this);
// [0x1694390] (553 bytes) hkpCylinderShape::convertVertexIdsToVertices(unsigned short const*,int,hkcdVertex *)const
// int hkpCylinderShape::convertVertexIdsToVertices( __m128 a1, float *a2, uint16_t *a3, int a4, int a5);
// [0x16945c0] (2007 bytes) hkpCylinderShape::getAabb(hkTransformf const&,float,hkAabb &)const
// __m128 *hkpCylinderShape::getAabb(hkpCylinderShape *this, const hkTransformf *a2, float a3, __m128 *a4);
// [0x1694da0] (1143 bytes) hkpCylinderShape::getSupportingVertex(hkVector4f const&,hkcdVertex &)const
// float *hkpCylinderShape::getSupportingVertex(int a1, float *a2, int a3);
// [0x1695bb0] (1800 bytes) hkpCylinderShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// uint8_t *hkpCylinderShape::castRay(uint8_t *a1, int a2, int a3, int a4);
// [0x16962c0] (265 bytes) hkpCylinderShape::hkpCylinderShape(hkFinishLoadedObjectFlag)
// void (**hkpCylinderShape::hkpCylinderShape(int a1, int a2))(hkpCylinderShape *__hidden this);
// [0x16963d0] (81 bytes) hkpCylinderShape::setNumberOfVirtualSideSegments(int)
// float *hkpCylinderShape::setNumberOfVirtualSideSegments(hkpCylinderShape *this);
// [0x1696430] (736 bytes) hkpCylinderShape::presetPerpendicularVector(void)
// hkpCylinderShape *hkpCylinderShape::presetPerpendicularVector(hkpCylinderShape *this);
// [0x1696710] (26 bytes) hkpCylinderShape::getCylinderRadius(void)const
// long double hkpCylinderShape::getCylinderRadius(hkpCylinderShape *this);
// [0x1696730] (31 bytes) hkpCylinderShape::setCylinderRadius(float)
// hkpCylinderShape *hkpCylinderShape::setCylinderRadius(hkpCylinderShape *this, float a2);
// [0x1696750] (389 bytes) hkpCylinderShape::hkpCylinderShape(hkVector4f const&,hkVector4f const&,float,float)
// void hkpCylinderShape::hkpCylinderShape( hkpCylinderShape *this, const hkVector4f *a2, const hkVector4f *a3, float a4, float a5);
// [0x169bc00] (22 bytes) hkpCylinderShape::staticClass(void)
// void *hkpCylinderShape::staticClass();
