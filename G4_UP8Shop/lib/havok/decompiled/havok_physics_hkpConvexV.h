#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpConvexV.h
// Library: havok | Module: havok_physics_hkpConvexV
// Binary Address Span: 0x1693870 .. 0x16ec980 (40 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1693870] (22 bytes) hkpConvexVerticesShape::staticClass(void)
// void *hkpConvexVerticesShape::staticClass();
// [0x169eaf0] (22 bytes) hkpConvexVerticesConnectivity::staticClass(void)
// void *hkpConvexVerticesConnectivity::staticClass();
// [0x16b7460] (432 bytes) hkpConvexVerticesConnectivityUtil::createGeometry(hkpConvexVerticesShape const*,hkpConvexVerticesConnectivity const*)
// uint32_t *hkpConvexVerticesConnectivityUtil::createGeometry( hkpConvexVerticesConnectivityUtil *this, const hkpConvexVerticesShape *a2);
// [0x16b7610] (640 bytes) hkpConvexVerticesConnectivityUtil::createGeometry(hkpConvexVerticesShape const*,hkpConvexVerticesConnectivity const*,hkTransformf const&)
// uint32_t *hkpConvexVerticesConnectivityUtil::createGeometry( hkpConvexVerticesConnectivityUtil *this, const hkpConvexVerticesShape *a2, const hkpConvexVerticesConnectivity *a3);
// [0x16b7890] (369 bytes) hkpConvexVerticesConnectivityUtil::findConnectivity(hkpConvexVerticesShape const*)
// uint32_t *hkpConvexVerticesConnectivityUtil::findConnectivity(hkpConvexVerticesConnectivityUtil *this);
// [0x16b7a10] (152 bytes) hkpConvexVerticesConnectivityUtil::ensureConnectivity(hkpConvexVerticesShape const*)
// hkpConvexVerticesConnectivityUtil *hkpConvexVerticesConnectivityUtil::ensureConnectivity( hkpConvexVerticesConnectivityUtil *this, const hkpConvexVerticesShape *a2);
// [0x16b7ab0] (355 bytes) hkpConvexVerticesConnectivityUtil::ensureConnectivityAll(hkpShape const*)
// hkpConvexVerticesConnectivityUtil *hkpConvexVerticesConnectivityUtil::ensureConnectivityAll( hkpConvexVerticesConnectivityUtil *this, const hkpShape *a2);
// [0x16b7c20] (411 bytes) hkpConvexVerticesConnectivityUtil::calculateVolume(hkArrayBase<hkVector4f> const&,hkpConvexVerticesConnectivity const*)
// long double hkpConvexVerticesConnectivityUtil::calculateVolume( hkpConvexVerticesConnectivityUtil *this, const hkArrayBase<hkVector4f> *a2);
// [0x16b7dc0] (141 bytes) hkpConvexVerticesConnectivityUtil::calculateVolume(hkpConvexVerticesShape const*,hkpConvexVerticesConnectivity const*)
// long double hkpConvexVerticesConnectivityUtil::calculateVolume( hkpConvexVerticesConnectivityUtil *this, const hkpConvexVerticesShape *a2);
// [0x16b7e50] (5616 bytes) hkpConvexVerticesConnectivityUtil::cut(hkpConvexVerticesShape const*,hkVector4f const&,float,float)
// hkpConvexVerticesShape *hkpConvexVerticesConnectivityUtil::cut( hkpConvexVerticesConnectivityUtil *this, const hkpConvexVerticesShape *a2, const hkVector4f *a3, float a4);
// [0x16d2440] (12 bytes) hkpConvexVerticesShape::getSize(void)const
// int hkpConvexVerticesShape::getSize();
// [0x16d2450] (12 bytes) hkpConvexVerticesShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpConvexVerticesShape::calcSizeForSpu();
// [0x16d2460] (12 bytes) hkpConvexVerticesShape::getNumCollisionSpheres(void)const
// int hkpConvexVerticesShape::getNumCollisionSpheres(hkpConvexVerticesShape *this);
// [0x16d2470] (47 bytes) hkpConvexVerticesShape::getFirstVertex(hkVector4f &)const
// hkVector4f *hkpConvexVerticesShape::getFirstVertex(hkpConvexVerticesShape *this, hkVector4f *a2);
// [0x16d24a0] (530 bytes) hkpConvexVerticesShape::getAabb(hkTransformf const&,float,hkAabb &)const
// const hkTransformf *hkpConvexVerticesShape::getAabb( hkpConvexVerticesShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x16d26c0] (132 bytes) hkpConvexVerticesShape::convertVertexIdsToVertices(unsigned short const*,int,hkcdVertex *)const
// int hkpConvexVerticesShape::convertVertexIdsToVertices(int a1, uint16_t *a2, int a3, int a4);
// [0x16d2750] (32 bytes) hkpConvexVerticesShape::getCentre(hkVector4f &)const
// hkVector4f *hkpConvexVerticesShape::getCentre(hkpConvexVerticesShape *this, hkVector4f *a2);
// [0x16d2770] (736 bytes) hkpConvexVerticesShape::getCollisionSpheres(hkSphere *)const
// hkSphere *hkpConvexVerticesShape::getCollisionSpheres(hkpConvexVerticesShape *this, hkSphere *a2);
// [0x16d2a50] (747 bytes) hkpConvexVerticesShape::getSupportingVertex(hkVector4f const&,hkcdVertex &)const
// uint32_t *hkpConvexVerticesShape::getSupportingVertex(int a1, float *a2, uint32_t *a3);
// [0x16d2d40] (237 bytes) hkpConvexVerticesShape::~hkpConvexVerticesShape()
// void hkpConvexVerticesShape::~hkpConvexVerticesShape(hkpConvexVerticesShape *this);
// [0x16d2e30] (93 bytes) hkpConvexVerticesShape::~hkpConvexVerticesShape()
// void hkpConvexVerticesShape::~hkpConvexVerticesShape(hkpConvexVerticesShape *this);
// [0x16d3cc0] (1933 bytes) hkpConvexVerticesShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// bool *hkpConvexVerticesShape::castRay(bool *a1, int a2, int a3, uint32_t *a4);
// [0x16d4450] (121 bytes) hkpConvexVerticesShape::hkpConvexVerticesShape(float)
// void hkpConvexVerticesShape::hkpConvexVerticesShape(hkpConvexVerticesShape *this, float a2);
// [0x16d44d0] (340 bytes) hkpConvexVerticesShape::hkpConvexVerticesShape(hkFourTransposedPointsf *,int,hkVector4f *,int,hkAabb const&,float)
// void hkpConvexVerticesShape::hkpConvexVerticesShape( hkpConvexVerticesShape *this, hkFourTransposedPointsf *a2, int a3, hkVector4f *a4, int a5, const hkAabb *a6, float a7);
// [0x16d4630] (65 bytes) hkpConvexVerticesShape::hkpConvexVerticesShape(hkFinishLoadedObjectFlag)
// void (**hkpConvexVerticesShape::hkpConvexVerticesShape( int a1, int a2))(hkpConvexVerticesShape *__hidden this);
// [0x16d4680] (215 bytes) hkpConvexVerticesShape::getOriginalVertices(hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// hkArrayUtil *hkpConvexVerticesShape::getOriginalVertices( hkpConvexVerticesShape *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x16d4760] (1139 bytes) hkpConvexVerticesShape::copyVertexData(float const*,int,int)
// hkpConvexVerticesShape *hkpConvexVerticesShape::copyVertexData( hkpConvexVerticesShape *this, hkAabbUtil *a2, int a3, float *a4);
// [0x16d4be0] (317 bytes) hkpConvexVerticesShape::hkpConvexVerticesShape(hkStridedVertices const&,hkArray<hkVector4f,hkContainerHeapAllocator> const&,float)
// hkpConvexVerticesShape *hkpConvexVerticesShape::hkpConvexVerticesShape( hkpConvexVerticesShape *a1, int a2, int *a3, int a4);
// [0x16d4d20] (12 bytes) hkpConvexVerticesShape::getPlaneEquations(void)const
// char *hkpConvexVerticesShape::getPlaneEquations(hkpConvexVerticesShape *this);
// [0x16d4d30] (1260 bytes) hkpConvexVerticesShape::transformVerticesAndPlaneEquations(hkTransformf const&)
// int hkpConvexVerticesShape::transformVerticesAndPlaneEquations( hkpConvexVerticesShape *this, const hkTransformf *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, hkAabbUtil *a16, float *a17, signed int a18, char *a19, int a20);
// [0x16d5220] (1523 bytes) hkpConvexVerticesShape::sortPlanes(void)
// int hkpConvexVerticesShape::sortPlanes(hkpConvexVerticesShape *this);
// [0x16d5820] (186 bytes) hkpConvexVerticesShape::setConnectivity(hkpConvexVerticesConnectivity const*,bool)
// int hkpConvexVerticesShape::setConnectivity( hkpConvexVerticesShape *this, const hkpConvexVerticesConnectivity *a2, int a3);
// [0x16d58e0] (247 bytes) hkpConvexVerticesShape::setPlaneEquations(hkArray<hkVector4f,hkContainerHeapAllocator> const&)
// hkpConvexVerticesShape *hkpConvexVerticesShape::setPlaneEquations( hkpConvexVerticesShape *this, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x16e89c0] (70 bytes) hkpConvexVerticesShape::BuildConfig::BuildConfig(void)
// struct hkpConvexVerticesShape::BuildConfig *hkpConvexVerticesShape::BuildConfig::BuildConfig( hkpConvexVerticesShape::BuildConfig *this);
// [0x16e8a10] (2504 bytes) hkpConvexVerticesShape::hkpConvexVerticesShape(hkStridedVertices const&,hkpConvexVerticesShape::BuildConfig const&)
// void hkpConvexVerticesShape::hkpConvexVerticesShape( hkpConvexVerticesConnectivity *a1, hkpConvexVerticesConnectivity *a2, int a3);
// [0x16ec6d0] (21 bytes) hkpConvexVerticesConnectivity::clear(void)
// hkpConvexVerticesConnectivity *hkpConvexVerticesConnectivity::clear(hkpConvexVerticesConnectivity *this);
// [0x16ec6f0] (168 bytes) hkpConvexVerticesConnectivity::~hkpConvexVerticesConnectivity()
// void hkpConvexVerticesConnectivity::~hkpConvexVerticesConnectivity(hkpConvexVerticesConnectivity *this);
// [0x16ec7a0] (225 bytes) hkpConvexVerticesConnectivity::~hkpConvexVerticesConnectivity()
// void hkpConvexVerticesConnectivity::~hkpConvexVerticesConnectivity(hkpConvexVerticesConnectivity *this);
// [0x16ec890] (237 bytes) hkpConvexVerticesConnectivity::addFace(int *,int)
// int hkpConvexVerticesConnectivity::addFace(hkpConvexVerticesConnectivity *this, int *a2, int a3);
// [0x16ec980] (527 bytes) hkpConvexVerticesConnectivity::isClosed(void)const
// hkpConvexVerticesConnectivity *hkpConvexVerticesConnectivity::isClosed( hkpConvexVerticesConnectivity *this, uint32_t *a2);
