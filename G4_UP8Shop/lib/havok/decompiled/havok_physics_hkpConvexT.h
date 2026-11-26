#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpConvexT.h
// Library: havok | Module: havok_physics_hkpConvexT
// Binary Address Span: 0x169a050 .. 0x16d9bd0 (38 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x169a050] (22 bytes) hkpConvexTransformShapeBase::staticClass(void)
// void *hkpConvexTransformShapeBase::staticClass();
// [0x169ff50] (138 bytes) hkpConvexTransformShapeBase::~hkpConvexTransformShapeBase()
// void hkpConvexTransformShapeBase::~hkpConvexTransformShapeBase(hkpConvexTransformShapeBase *this);
// [0x169ffe0] (194 bytes) hkpConvexTransformShapeBase::~hkpConvexTransformShapeBase()
// void hkpConvexTransformShapeBase::~hkpConvexTransformShapeBase(hkpConvexTransformShapeBase *this);
// [0x16a00f0] (142 bytes) hkpConvexTransformShapeBase::hkpConvexTransformShapeBase(hkcdShapeType::ShapeTypeEnum,float,hkpConvexShape const*,hkpShapeContainer::ReferencePolicy)
// int32_t hkpConvexTransformShapeBase::hkpConvexTransformShapeBase( int32_t a1, char a2, int a3, int a4, int a5);
// [0x16a38a0] (22 bytes) hkpConvexTranslateShape::staticClass(void)
// void *hkpConvexTranslateShape::staticClass();
// [0x16b4ab0] (22 bytes) hkpConvexTransformShape::staticClass(void)
// void *hkpConvexTransformShape::staticClass();
// [0x16c7740] (24 bytes) hkpConvexTranslateShape::getNumCollisionSpheres(void)const
// int hkpConvexTranslateShape::getNumCollisionSpheres(hkpConvexTranslateShape *this);
// [0x16c7760] (294 bytes) hkpConvexTranslateShape::getAabb(hkTransformf const&,float,hkAabb &)const
// int hkpConvexTranslateShape::getAabb(hkpConvexTranslateShape *this, const hkTransformf *a2, int64_t a3);
// [0x16c7890] (97 bytes) hkpConvexTranslateShape::getMaximumProjection(hkVector4f const&)const
// long double hkpConvexTranslateShape::getMaximumProjection(hkpConvexTranslateShape *this, const hkVector4f *a2);
// [0x16c7900] (111 bytes) hkpConvexTranslateShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpConvexTranslateShape::calcSizeForSpu(int a1, int a2, int a3);
// [0x16c7970] (87 bytes) hkpConvexTranslateShape::getSupportingVertex(hkVector4f const&,hkcdVertex &)const
// int hkpConvexTranslateShape::getSupportingVertex(int a1, int a2, float *a3);
// [0x16c79d0] (124 bytes) hkpConvexTranslateShape::convertVertexIdsToVertices(unsigned short const*,int,hkcdVertex *)const
// int hkpConvexTranslateShape::convertVertexIdsToVertices(int a1, int a2, int a3, int a4);
// [0x16c7a50] (94 bytes) hkpConvexTranslateShape::getCentre(hkVector4f &)const
// int hkpConvexTranslateShape::getCentre(hkpConvexTranslateShape *this, hkVector4f *a2);
// [0x16c7ab0] (94 bytes) hkpConvexTranslateShape::getFirstVertex(hkVector4f &)const
// int hkpConvexTranslateShape::getFirstVertex(hkpConvexTranslateShape *this, hkVector4f *a2);
// [0x16c7b10] (770 bytes) hkpConvexTranslateShape::getCollisionSpheres(hkSphere *)const
// hkSphere *hkpConvexTranslateShape::getCollisionSpheres(hkpConvexTranslateShape *this, hkSphere *a2);
// [0x16c7e20] (12 bytes) hkpConvexTranslateShape::getContainer(void)const
// char *hkpConvexTranslateShape::getContainer(hkpConvexTranslateShape *this);
// [0x16c7e30] (481 bytes) hkpConvexTranslateShape::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpConvexTranslateShape::castRayWithCollector(int a1, float *a2, int a3, int a4);
// [0x16c8020] (378 bytes) hkpConvexTranslateShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// int hkpConvexTranslateShape::castRay(uint8_t *a1, int a2, float *a3, int a4);
// [0x16c81a0] (138 bytes) hkpConvexTranslateShape::~hkpConvexTranslateShape()
// void hkpConvexTranslateShape::~hkpConvexTranslateShape(hkpConvexTranslateShape *this);
// [0x16c8230] (194 bytes) hkpConvexTranslateShape::~hkpConvexTranslateShape()
// void hkpConvexTranslateShape::~hkpConvexTranslateShape(hkpConvexTranslateShape *this);
// [0x16c8300] (71 bytes) hkpConvexTranslateShape::hkpConvexTranslateShape(hkFinishLoadedObjectFlag)
// void (**hkpConvexTranslateShape::hkpConvexTranslateShape( int a1, int a2))(hkpConvexTranslateShape *__hidden this);
// [0x16d79d0] (24 bytes) hkpConvexTransformShape::getNumCollisionSpheres(void)const
// int hkpConvexTransformShape::getNumCollisionSpheres(hkpConvexTransformShape *this);
// [0x16d79f0] (12 bytes) hkpConvexTransformShape::getContainer(void)const
// char *hkpConvexTransformShape::getContainer(hkpConvexTransformShape *this);
// [0x16d7a00] (111 bytes) hkpConvexTransformShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpConvexTransformShape::calcSizeForSpu(int a1, int a2, int a3);
// [0x16d7a70] (443 bytes) hkpConvexTransformShape::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpConvexTransformShape::castRayWithCollector(int *a1, int a2, int a3, int a4);
// [0x16d7c30] (138 bytes) hkpConvexTransformShape::~hkpConvexTransformShape()
// void hkpConvexTransformShape::~hkpConvexTransformShape(hkpConvexTransformShape *this);
// [0x16d7cc0] (829 bytes) hkpConvexTransformShape::getAabb(hkTransformf const&,float,hkAabb &)const
// hkTransformf *hkpConvexTransformShape::getAabb( hkpConvexTransformShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x16d8000] (194 bytes) hkpConvexTransformShape::~hkpConvexTransformShape()
// void hkpConvexTransformShape::~hkpConvexTransformShape(hkpConvexTransformShape *this);
// [0x16d80d0] (972 bytes) hkpConvexTransformShape::getSupportingVertex(hkVector4f const&,hkcdVertex &)const
// void *hkpConvexTransformShape::getSupportingVertex(int a1, float *a2, float *a3);
// [0x16d84a0] (1921 bytes) hkpConvexTransformShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// uint8_t *hkpConvexTransformShape::castRay(int a1, int a2, int a3, int a4);
// [0x16d8c30] (581 bytes) hkpConvexTransformShape::getCentre(hkVector4f &)const
// void *hkpConvexTransformShape::getCentre(hkpConvexTransformShape *this, hkVector4f *a2);
// [0x16d8e80] (581 bytes) hkpConvexTransformShape::getFirstVertex(hkVector4f &)const
// void *hkpConvexTransformShape::getFirstVertex(hkpConvexTransformShape *this, hkVector4f *a2);
// [0x16d90d0] (453 bytes) hkpConvexTransformShape::convertVertexIdsToVertices(unsigned short const*,int,hkcdVertex *)const
// float *hkpConvexTransformShape::convertVertexIdsToVertices(int a1, int a2, int a3, float *a4);
// [0x16d92a0] (481 bytes) hkpConvexTransformShape::getCollisionSpheres(hkSphere *)const
// hkSphere *hkpConvexTransformShape::getCollisionSpheres(hkpConvexTransformShape *this, hkSphere *a2);
// [0x16d9490] (132 bytes) hkpConvexTransformShape::hkpConvexTransformShape(hkpConvexShape const*,hkTransformf const&,hkpShapeContainer::ReferencePolicy)
// int hkpConvexTransformShape::hkpConvexTransformShape(uint32_t *a1, int a2, hkTransformf *a3, int a4);
// [0x16d9520] (71 bytes) hkpConvexTransformShape::hkpConvexTransformShape(hkFinishLoadedObjectFlag)
// void (**hkpConvexTransformShape::hkpConvexTransformShape( int a1, int a2))(hkpConvexTransformShape *__hidden this);
// [0x16d9570] (1624 bytes) hkpConvexTransformShape::setTransform(hkQsTransformf const&)
// int hkpConvexTransformShape::setTransform(hkpConvexTransformShape *this, const hkQsTransformf *a2);
// [0x16d9bd0] (106 bytes) hkpConvexTransformShape::hkpConvexTransformShape(hkpConvexShape const*,hkQsTransformf const&,hkpShapeContainer::ReferencePolicy)
// int hkpConvexTransformShape::hkpConvexTransformShape( hkpConvexTransformShape *a1, int a2, hkQsTransformf *a3, int a4);
