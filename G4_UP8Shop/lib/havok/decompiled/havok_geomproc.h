#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_geomproc.h
// Library: havok | Module: havok_geomproc
// Binary Address Span: 0x1623860 .. 0x1690090 (358 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1623860] (270 bytes) hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::reset(void)
// int hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::reset( hkgpAbstractMesh<hkgpConvexHullImpl::Edge, hkgpConvexHullImpl::Vertex, hkgpConvexHullImpl::Triangle, hkContainerHeapAllocator> *this);
// [0x1623970] (289 bytes) hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh()
// void hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh( hkgpAbstractMesh<hkgpConvexHullImpl::Edge, hkgpConvexHullImpl::Vertex, hkgpConvexHullImpl::Triangle, hkContainerHeapAllocator> *this);
// [0x1623aa0] (344 bytes) hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh()
// void hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh( hkgpAbstractMesh<hkgpConvexHullImpl::Edge, hkgpConvexHullImpl::Vertex, hkgpConvexHullImpl::Triangle, hkContainerHeapAllocator> *this);
// [0x1623ed0] (951 bytes) hkgpConvexHullImpl::reset(bool)
// uint32_t *hkgpConvexHullImpl::reset(hkgpConvexHullImpl *this, bool a2);
// [0x1624290] (146 bytes) hkgpConvexHullImpl::transform(hkgpConvexHullImpl::Vertex const&)const
// hkgpConvexHullImpl *hkgpConvexHullImpl::transform(hkgpConvexHullImpl *this, const Vertex *a2, int *a3);
// [0x1624330] (983 bytes) hkgpConvexHullImpl::transformChecked(hkVector4f const&,bool &)const
// hkgpConvexHullImpl *hkgpConvexHullImpl::transformChecked( hkgpConvexHullImpl *this, const hkVector4f *a2, bool *a3, uint8_t *a4);
// [0x1624710] (730 bytes) hkgpConvexHullImpl::getSpan(hkVector4f const&,hkSimdFloat32 &,hkSimdFloat32 &)const
// float *hkgpConvexHullImpl::getSpan(float *a1, uint32_t *a2, __m128 *a3, float *a4, float *a5);
// [0x16249f0] (47 bytes) hkgpConvexHull::BuildConfig::BuildConfig(void)
// struct hkgpConvexHull::BuildConfig *hkgpConvexHull::BuildConfig::BuildConfig(hkgpConvexHull::BuildConfig *this);
// [0x1624a20] (2442 bytes) hkgpConvexHullImpl::clone(void)const
// int hkgpConvexHullImpl::clone(hkgpConvexHullImpl *this);
// [0x16253b0] (36 bytes) hkgpConvexHull::SimplifyConfig::SimplifyConfig(void)
// struct hkgpConvexHull::SimplifyConfig *hkgpConvexHull::SimplifyConfig::SimplifyConfig( hkgpConvexHull::SimplifyConfig *this);
// [0x16253e0] (25 bytes) hkgpConvexHull::AbsoluteScaleConfig::AbsoluteScaleConfig(void)
// struct hkgpConvexHull::AbsoluteScaleConfig *hkgpConvexHull::AbsoluteScaleConfig::AbsoluteScaleConfig( hkgpConvexHull::AbsoluteScaleConfig *this);
// [0x1625400] (1197 bytes) hkgpConvexHull::hkgpConvexHull(void)
// void hkgpConvexHull::hkgpConvexHull(hkgpConvexHull *this);
// [0x16258b0] (12 bytes) hkgpConvexHull::userData(void)const
// char *hkgpConvexHull::userData(hkgpConvexHull *this);
// [0x16258c0] (12 bytes) hkgpConvexHull::userObject(void)const
// char *hkgpConvexHull::userObject(hkgpConvexHull *this);
// [0x16258d0] (37 bytes) hkgpConvexHull::deleteUserObject(void)
// int hkgpConvexHull::deleteUserObject(hkgpConvexHull *this);
// [0x1625900] (977 bytes) hkgpConvexHull::reset(void)
// int hkgpConvexHull::reset(hkgpConvexHull *this);
// [0x1625ce0] (575 bytes) hkgpConvexHull::~hkgpConvexHull()
// void hkgpConvexHull::~hkgpConvexHull(hkgpConvexHull *this);
// [0x1625f20] (93 bytes) hkgpConvexHull::~hkgpConvexHull()
// void hkgpConvexHull::~hkgpConvexHull(hkgpConvexHull *this);
// [0x1625f80] (16 bytes) hkgpConvexHull::uid(void)const
// int hkgpConvexHull::uid(hkgpConvexHull *this);
// [0x1625f90] (18 bytes) hkgpConvexHull::changeUid(unsigned int)
// int hkgpConvexHull::changeUid(hkgpConvexHull *this, unsigned int a2);
// [0x1625fb0] (26 bytes) hkgpConvexHull::resetUidGenerator(void)
// int32_t *hkgpConvexHull::resetUidGenerator();
// [0x1625fd0] (109 bytes) hkgpConvexHull::build(hkVector4f const*,int,hkgpConvexHull::BuildConfig const&)
// int hkgpConvexHull::build( hkgpConvexHull *this, const hkVector4f *a2, int a3, const hkgpConvexHull::BuildConfig *a4);
// [0x1626040] (392 bytes) hkgpConvexHull::build(hkStridedVertices const&,hkgpConvexHull::BuildConfig const&)
// int hkgpConvexHull::build(hkgpConvexHull *a1, int a2, const hkgpConvexHull::BuildConfig *a3);
// [0x16261d0] (153 bytes) hkgpConvexHull::buildPlanar(hkVector4f const*,int,hkVector4f const&,hkgpConvexHull::BuildConfig const&)
// int hkgpConvexHull::buildPlanar( hkgpConvexHull *this, const hkVector4f *a2, int a3, const hkVector4f *a4, const hkgpConvexHull::BuildConfig *a5);
// [0x1626270] (391 bytes) hkgpConvexHull::buildPlanar(hkStridedVertices const&,hkVector4f const&,hkgpConvexHull::BuildConfig const&)
// int hkgpConvexHull::buildPlanar( hkgpConvexHull *a1, int a2, const hkVector4f *a3, const hkgpConvexHull::BuildConfig *a4);
// [0x1626400] (23 bytes) hkgpConvexHull::hasIndices(void)const
// hkgpConvexHull *hkgpConvexHull::hasIndices(hkgpConvexHull *this, int a2);
// [0x1626420] (23 bytes) hkgpConvexHull::hasMassProperties(void)const
// hkgpConvexHull *hkgpConvexHull::hasMassProperties(hkgpConvexHull *this, int a2);
// [0x1626440] (37 bytes) hkgpConvexHull::hasValidMassProperties(void)const
// int hkgpConvexHull::hasValidMassProperties(hkgpConvexHull *this, int a2);
// [0x1626470] (163 bytes) hkgpConvexHull::isVertexUsed(hkVector4f const&)const
// hkgpConvexHull *hkgpConvexHull::isVertexUsed(hkgpConvexHull *this, const hkVector4f **a2, bool *a3);
// [0x1626520] (12 bytes) hkgpConvexHull::getConfiguration(void)const
// int hkgpConvexHull::getConfiguration(hkgpConvexHull *this);
// [0x1626530] (12 bytes) hkgpConvexHull::getConfiguration(void)
// int hkgpConvexHull::getConfiguration(hkgpConvexHull *this);
// [0x1626540] (16 bytes) hkgpConvexHull::getDimensions(void)const
// int hkgpConvexHull::getDimensions(hkgpConvexHull *this);
// [0x1626550] (49 bytes) hkgpConvexHull::getProjectionAxis(void)const
// hkgpConvexHull *hkgpConvexHull::getProjectionAxis(hkgpConvexHull *this, int a2);
// [0x1626590] (15 bytes) hkgpConvexHull::getProjectionPlane(void)const
// int hkgpConvexHull::getProjectionPlane(hkgpConvexHull *this);
// [0x16265a0] (13 bytes) hkgpConvexHull::getNumVertices(void)const
// int hkgpConvexHull::getNumVertices(hkgpConvexHull *this);
// [0x16265b0] (13 bytes) hkgpConvexHull::getFirstVertex(void)const
// int hkgpConvexHull::getFirstVertex(hkgpConvexHull *this);
// [0x16265c0] (11 bytes) hkgpConvexHull::getNext(hkgpConvexHull::Vertex const*)const
// int hkgpConvexHull::getNext(hkgpConvexHull *this, const Vertex *a2);
// [0x16265d0] (149 bytes) hkgpConvexHull::getPosition(hkgpConvexHull::Vertex const*)const
// hkgpConvexHull *hkgpConvexHull::getPosition(hkgpConvexHull *this, const Vertex *a2, int *a3);
// [0x1626670] (12 bytes) hkgpConvexHull::getSourcePosition(hkgpConvexHull::Vertex const*)const
// uint16_t *hkgpConvexHull::getSourcePosition(hkgpConvexHull *this, const Vertex *a2);
// [0x1626680] (1655 bytes) hkgpConvexHull::getBoundingBox(hkgpConvexHull::Inputs,float,float)const
// int hkgpConvexHull::getBoundingBox(int a1, hkgpConvexHull *a2, int a3, float a4, float a5);
// [0x1626d00] (13 bytes) hkgpConvexHull::getNumTriangles(void)const
// int hkgpConvexHull::getNumTriangles(hkgpConvexHull *this);
// [0x1626d10] (13 bytes) hkgpConvexHull::getFirstTriangle(void)const
// int hkgpConvexHull::getFirstTriangle(hkgpConvexHull *this);
// [0x1626d20] (11 bytes) hkgpConvexHull::getNext(hkgpConvexHull::Triangle const*)const
// int hkgpConvexHull::getNext(int a1, int a2);
// [0x1626d30] (15 bytes) hkgpConvexHull::getVertex(hkgpConvexHull::Triangle const*,int)const
// int hkgpConvexHull::getVertex(int a1, int a2, int a3);
// [0x1626d40] (544 bytes) hkgpConvexHull::getPlaneEquation(hkgpConvexHull::Triangle const*)const
// float *hkgpConvexHull::getPlaneEquation(float *a1, hkgpConvexHull *a2, int a3);
// [0x1626f60] (16 bytes) hkgpConvexHull::getNeighbour(hkgpConvexHull::Triangle *,int)const
// unsigned int hkgpConvexHull::getNeighbour(int a1, int a2, int a3);
// [0x1626f70] (330 bytes) hkgpConvexHull::getSupportingVertex(hkVector4f const&,hkVector4f&)const
// int hkgpConvexHull::getSupportingVertex(hkgpConvexHull *this, const hkVector4f *a2, hkVector4f *a3);
// [0x16270c0] (141 bytes) hkgpConvexHull::getMinimumDistanceFromPlane(hkVector4f const&)const
// hkgpConvexHull *hkgpConvexHull::getMinimumDistanceFromPlane( hkgpConvexHull *this, const hkVector4f *a2, __m128 *a3);
// [0x1627150] (122 bytes) hkgpConvexHull::getMaximumDistanceFromPlane(hkVector4f const&)const
// hkgpConvexHull *hkgpConvexHull::getMaximumDistanceFromPlane( hkgpConvexHull *this, const hkVector4f *a2, float *a3);
// [0x16271d0] (161 bytes) hkgpConvexHull::getWidth(hkVector4f const&)const
// float *hkgpConvexHull::getWidth(hkgpConvexHull *this, const hkVector4f *a2, int32_t *a3);
// [0x1627280] (562 bytes) hkgpConvexHull::getNearestVertex(hkgpConvexHull::Inputs,hkVector4f const&,hkVector4f&)const
// int hkgpConvexHull::getNearestVertex(int a1, int a2, float *a3, int *a4);
// [0x16274c0] (546 bytes) hkgpConvexHull::getFarthestVertex(hkgpConvexHull::Inputs,hkVector4f const&,hkVector4f&)const
// float *hkgpConvexHull::getFarthestVertex(int a1, int a2, float *a3, int *a4);
// [0x16276f0] (192 bytes) hkgpConvexHull::getCentroid(void)const
// int hkgpConvexHull::getCentroid(hkgpConvexHull *this);
// [0x16277b0] (279 bytes) hkgpConvexHull::classify(hkVector4f const&,float,float *)const
// char hkgpConvexHull::classify(hkgpConvexHull *this, const hkVector4f *a2, float a3, float *a4);
// [0x16278d0] (1590 bytes) hkgpConvexHull::generateGeometry(hkgpConvexHull::Inputs,hkGeometry &,int,bool)const
// void hkgpConvexHull::generateGeometry(int a1, int a2, int *a3, int a4, int a5);
// [0x1627fa0] (169 bytes) void hkgpConvexHullImpl::fetchWorldPositions<hkgpConvexHullImpl::PositionAsSource>(hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// uint32_t *hkgpConvexHullImpl::fetchWorldPositions<hkgpConvexHullImpl::PositionAsSource>( hkgpConvexHullImpl *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1628050] (419 bytes) hkgpConvexHull::fetchPositions(hkgpConvexHull::Inputs,hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// hkArrayUtil *hkgpConvexHull::fetchPositions(int a1, int a2, hkArray<hkVector4f, hkContainerHeapAllocator> *a3);
// [0x1628200] (92 bytes) hkgpTopology::Edge<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkgpConvexHullImpl::Vertex*>::isMaster(void)const
// bool hkgpTopology::Edge<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkgpConvexHullImpl::Vertex*>::isMaster( hkgpTopology::Edge<hkgpConvexHullImpl::Edge, hkgpConvexHullImpl::Vertex, hkgpConvexHullImpl::Triangle, hkgpConvexHullImpl::Vertex*> *this);
// [0x16283d0] (356 bytes) void hkgpConvexHullImpl::fetchWorldPositions<hkgpConvexHullImpl::PositionAsTransform>(hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// hkArrayUtil *hkgpConvexHullImpl::fetchWorldPositions<hkgpConvexHullImpl::PositionAsTransform>( hkgpConvexHullImpl *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x16285a0] (1352 bytes) hkgpConvexHull::buildFromPlanes(hkVector4f const*,int,hkgpConvexHull::BuildConfig const&)
// int hkgpConvexHull::buildFromPlanes( hkgpConvexHull *this, const hkVector4f *a2, int a3, const hkgpConvexHull::BuildConfig *a4);
// [0x1628af0] (952 bytes) hkgpConvexHull::buildFromPlanes(hkVector4f const*,int,hkVector4f const&,hkgpConvexHull::BuildConfig const&)
// int hkgpConvexHull::buildFromPlanes( hkgpConvexHull *this, const hkVector4f *a2, int a3, const hkVector4f *a4, const hkgpConvexHull::BuildConfig *a5);
// [0x1628eb0] (1110 bytes) hkgpConvexHull::getEdgeLengths(void)const
// hkgpConvexHull *hkgpConvexHull::getEdgeLengths(hkgpConvexHull *this, int a2);
// [0x1629310] (598 bytes) hkgpConvexHull::clone(void)const
// hkgpConvexHull *hkgpConvexHull::clone(hkgpConvexHullImpl **this);
// [0x1629670] (702 bytes) hkgpConvexHullImpl::FanVolume<hkgpConvexHullImpl::PositionAsTransform>::operator()(hkgpConvexHullImpl::Edge)
// int hkgpConvexHullImpl::FanVolume<hkgpConvexHullImpl::PositionAsTransform>::operator()(;
// [0x1629930] (249 bytes) hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::EdgeIterator::next(void)
// void hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>::EdgeIterator::next( hkgpAbstractMesh<hkgpConvexHullImpl::Edge, hkgpConvexHullImpl::Vertex, hkgpConvexHullImpl::Triangle, hkContainerHeapAllocator>::EdgeIterator *this);
// [0x1629a90] (3914 bytes) hkgpConvexHull::buildFromDiscs(hkVector4f const*,hkSphere *,int,hkgpConvexHull::BuildConfig const&)
// int hkgpConvexHull::buildFromDiscs( hkgpConvexHull *this, const hkVector4f *a2, hkSphere *a3, int a4, const hkgpConvexHull::BuildConfig *a5);
// [0x162bf30] (68 bytes) hkgpConvexHull::buildIndices(float,hkBool)
// void hkgpConvexHull::buildIndices(int a1, int a2, char a3);
// [0x162bf80] (1515 bytes) hkgpConvexHullImpl::rebuildDomainParameters(hkVector4f const*,int)
// float *hkgpConvexHullImpl::rebuildDomainParameters(hkgpConvexHullImpl *this, const hkVector4f *a2, int a3);
// [0x162c570] (1208 bytes) hkgpConvexHullImpl::refitDomainFromSources(void)
// int hkgpConvexHullImpl::refitDomainFromSources(hkgpConvexHullImpl *this);
// [0x162cae0] (2882 bytes) int hkgpConvexHullImpl::generateIndexedFaces<int,int>(hkArray<int,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &,bool,bool)
// int hkgpConvexHullImpl::generateIndexedFaces<int,int>( char **this, hkArray<int, hkContainerHeapAllocator> *a2, hkArray<int, hkContainerHeapAllocator> *a3, bool a4, bool a5);
// [0x162d630] (82 bytes) hkgpConvexHull::generateIndexedFaces(hkgpConvexHull::Inputs,hkArray<int,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &,hkBool)const
// int hkgpConvexHull::generateIndexedFaces( int a1, int a2, hkArray<int, hkContainerHeapAllocator> *a3, hkArray<int, hkContainerHeapAllocator> *a4, char a5);
// [0x162d690] (400 bytes) hkgpConvexHull::isPointInside(hkVector4f const&,hkBool,float)const
// char *hkgpConvexHull::isPointInside(char *a1, int a2, float *a3, char a4, float a5);
// [0x162e630] (1682 bytes) hkgpConvexHullImpl::clipLine(hkVector4f const&,hkVector4f const&,float &,float &,float)const
// bool hkgpConvexHullImpl::clipLine( char **this, const hkVector4f *a2, const hkVector4f *a3, float *a4, float *a5, float a6);
// [0x162ecd0] (93 bytes) hkgpConvexHull::clipLine(hkVector4f const&,hkVector4f const&,float &,float &,float)const
// hkgpConvexHull *hkgpConvexHull::clipLine( hkgpConvexHull *this, char ***a2, const hkVector4f *a3, hkVector4f *a4, float *a5, float *a6, float a7);
// [0x162ed30] (2759 bytes) hkgpConvexHullImpl::getOrientedRectangle(hkVector4f const&,hkVector4f&,hkTransformf &)const
// hkgpConvexHullImpl *hkgpConvexHullImpl::getOrientedRectangle( hkgpConvexHullImpl *this, char **a2, hkVector4f *a3, hkTransformf *a4, int a5);
// [0x162f800] (69 bytes) hkgpConvexHull::getOrientedRectangle(hkVector4f const&,hkVector4f&,hkTransformf &)const
// hkgpConvexHullImpl *hkgpConvexHull::getOrientedRectangle( char ***this, const hkVector4f *a2, hkVector4f *a3, hkTransformf *a4);
// [0x162f850] (1335 bytes) hkgpConvexHull::getOrientedBoundingBox(hkVector4f &,hkTransformf &)const
// float *hkgpConvexHull::getOrientedBoundingBox(hkgpConvexHull *this, hkVector4f *a2, hkTransformf *a3);
// [0x162fd90] (160 bytes) hkgpConvexHull::getWidthBounds(hkSimdFloat32 &,hkSimdFloat32 &)const
// int hkgpConvexHull::getWidthBounds(hkgpConvexHull *a1, float *a2, float *a3);
// [0x162fe30] (70 bytes) hkgpConvexHull::getMinWidth(void)const
// hkgpConvexHull *hkgpConvexHull::getMinWidth(hkgpConvexHull *this, hkgpConvexHull *a2);
// [0x162fe80] (70 bytes) hkgpConvexHull::getMaxWidth(void)const
// hkgpConvexHull *hkgpConvexHull::getMaxWidth(hkgpConvexHull *this, hkgpConvexHull *a2);
// [0x162fed0] (754 bytes) hkgpConvexHull::getBestProjectionPlane(void)const
// hkgpConvexHull *hkgpConvexHull::getBestProjectionPlane(hkgpConvexHull *this, hkgpConvexHull *a2);
// [0x16301d0] (43 bytes) hkgpConvexHull::getNumPlanes(void)const
// int hkgpConvexHull::getNumPlanes(hkgpConvexHull *this);
// [0x1630200] (52 bytes) hkgpConvexHull::getPlane(int)const
// int hkgpConvexHull::getPlane(hkgpConvexHull *this, int a2);
// [0x1630330] (182 bytes) hkgpConvexHull::maximumDistanceToPlanes(hkVector4f const&,int *)const
// hkgpConvexHull *hkgpConvexHull::maximumDistanceToPlanes( hkgpConvexHull *this, const hkVector4f *a2, float *a3, int *a4);
// [0x16303f0] (221 bytes) hkgpConvexHull::fetchPlanes(hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// int hkgpConvexHull::fetchPlanes(hkgpConvexHull *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1630870] (42 bytes) hkgpConvexHull::getIndex(hkgpConvexHull::Vertex const*)const
// int hkgpConvexHull::getIndex(hkgpConvexHull *this, const Vertex *a2);
// [0x16308a0] (42 bytes) hkgpConvexHull::getIndex(hkgpConvexHull::Triangle const*)const
// int hkgpConvexHull::getIndex(int a1, int a2);
// [0x16308d0] (42 bytes) hkgpConvexHull::getPlaneIndex(hkgpConvexHull::Triangle const*)const
// int hkgpConvexHull::getPlaneIndex(int a1, int a2);
// [0x1630900] (5211 bytes) hkgpConvexHull::collapseEdges(float,int)
// long double hkgpConvexHull::collapseEdges( int a1, int a2, int a3, int a4, hkgpConvexHull *this, float a6, int a7);
// [0x1631d60] (635 bytes) hkgpConvexHull::rayCast(hkVector4f const&,hkVector4f const&,float &,int *)const
// hkgpConvexHull *hkgpConvexHull::rayCast( hkgpConvexHull *this, const hkVector4f *a2, const hkVector4f *a3, float *a4, int *a5, int *a6);
// [0x1631fe0] (986 bytes) hkgpConvexHull::fetchBevelPlanes(float,hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// Vertex *hkgpConvexHull::fetchBevelPlanes( hkgpConvexHull *this, float a2, hkArray<hkVector4f, hkContainerHeapAllocator> *a3);
// [0x16323c0] (3203 bytes) int hkgpConvexHullImpl::generateIndexedFaces<unsigned char,unsigned short>(hkArray<unsigned char,hkContainerHeapAllocator> &,hkArray<unsigned short,hkContainerHeapAllocator> &,bool,bool)
// int hkgpConvexHullImpl::generateIndexedFaces<unsigned char,unsigned short>( int a1, int *a2, int *a3, char a4, char a5);
// [0x1633050] (82 bytes) hkgpConvexHull::generateIndexedFaces(hkgpConvexHull::Inputs,hkArray<unsigned char,hkContainerHeapAllocator> &,hkArray<unsigned short,hkContainerHeapAllocator> &,hkBool)const
// int hkgpConvexHull::generateIndexedFaces(int a1, int a2, int *a3, int *a4, char a5);
// [0x16330b0] (1309 bytes) hkgpConvexHull::generateVertexAdjacencyGraph(hkArray<int,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &)const
// int hkgpConvexHull::generateVertexAdjacencyGraph( hkgpConvexHull *this, hkArray<int, hkContainerHeapAllocator> *a2, hkArray<int, hkContainerHeapAllocator> *a3);
// [0x16335d0] (1105 bytes) hkgpConvexHull::generatePlanesPerVertex(hkArray<int,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &)const
// int hkgpConvexHull::generatePlanesPerVertex( hkgpConvexHull *this, hkArray<int, hkContainerHeapAllocator> *a2, hkArray<int, hkContainerHeapAllocator> *a3);
// [0x1633a30] (6439 bytes) hkResult hkgpConvexHullImpl::buildMassProperties<hkgpConvexHullImpl::PositionAsTransform>(void)
// int *hkgpConvexHullImpl::buildMassProperties<hkgpConvexHullImpl::PositionAsTransform>( int *a1, int a2);
// [0x1635360] (55 bytes) hkgpConvexHull::buildMassProperties(void)
// hkgpConvexHull *hkgpConvexHull::buildMassProperties(hkgpConvexHull *this, int a2);
// [0x16353a0] (3919 bytes) hkgpConvexHullImpl::ensureContainment(hkArray<hkVector4f,hkContainerHeapAllocator> const&)
// hkgpConvexHullImpl *hkgpConvexHullImpl::ensureContainment( hkgpConvexHullImpl *this, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2, float **a3);
// [0x16362f0] (62 bytes) hkgpConvexHull::ensureContainment(hkArray<hkVector4f,hkContainerHeapAllocator> const&)
// hkgpConvexHull *hkgpConvexHull::ensureContainment( hkgpConvexHull *this, const hkArray<hkVector4f, hkContainerHeapAllocator> **a2, float **a3);
// [0x1636330] (5782 bytes) hkgpConvexHullImpl::decimateVertices(int,bool,bool)
// int hkgpConvexHullImpl::decimateVertices(hkgpConvexHull **this, char *a2, bool a3, bool a4);
// [0x16379d0] (2152 bytes) hkgpConvexHullImpl::simplify(hkgpConvexHull::SimplifyConfig const&)
// hkgpConvexHullImpl *hkgpConvexHullImpl::simplify( hkgpConvexHullImpl *this, const hkgpConvexHull::SimplifyConfig *a2, hkArray<int, hkContainerHeapAllocator> *a3);
// [0x1638240] (62 bytes) hkgpConvexHull::simplify(hkgpConvexHull::SimplifyConfig const&)
// hkgpConvexHull *hkgpConvexHull::simplify( hkgpConvexHull *this, const hkgpConvexHull::SimplifyConfig **a2, hkArray<int, hkContainerHeapAllocator> *a3);
// [0x1638280] (85 bytes) hkgpConvexHull::decimateVertices(int,hkBool,hkBool)
// uint8_t *hkgpConvexHull::decimateVertices(uint8_t *a1, int a2, char *a3, char a4, char a5);
// [0x16382e0] (6347 bytes) hkgpConvexHull::expandByPlanarMargin(float)
// hkgpConvexHull *hkgpConvexHull::expandByPlanarMargin(hkgpConvexHull *this, hkgpConvexHull *a2, float a3);
// [0x1639c60] (64 bytes) hkgpConvexHull::getVolume(void)const
// hkgpConvexHull *hkgpConvexHull::getVolume(hkgpConvexHull *this, int a2);
// [0x1639ca0] (64 bytes) hkgpConvexHull::getSurfaceArea(void)const
// hkgpConvexHull *hkgpConvexHull::getSurfaceArea(hkgpConvexHull *this, int a2);
// [0x1639ce0] (119 bytes) hkgpConvexHull::getSphericity(void)const
// hkgpConvexHull *hkgpConvexHull::getSphericity(hkgpConvexHull *this, int a2);
// [0x1639d60] (8118 bytes) hkgpConvexHull::mergePlanes(float)
// long double hkgpConvexHull::mergePlanes( int a1, int a2, int a3, int a4, hkgpConvexHull *this, float a6);
// [0x163bd20] (225 bytes) hkgpConvexHull::getLocalInertia(hkTransformf &,hkVector4f &)const
// int hkgpConvexHull::getLocalInertia(hkgpConvexHull *this, hkTransformf *a2, hkVector4f *a3);
// [0x163be10] (45 bytes) hkgpConvexHull::getWorldInertia(void)const
// int hkgpConvexHull::getWorldInertia(hkgpConvexHull *this);
// [0x163be40] (45 bytes) hkgpConvexHull::getCenterOfMass(void)const
// int hkgpConvexHull::getCenterOfMass(hkgpConvexHull *this);
// [0x163be70] (10639 bytes) hkgpConvexHull::absoluteScale(float,hkgpConvexHull::AbsoluteScaleConfig const&)
// long double hkgpConvexHull::absoluteScale( hkgpConvexHull *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2, const hkgpConvexHull::AbsoluteScaleConfig *a3);
// [0x163e800] (189 bytes) hkgpConvexHull::computeLocalTransform(hkTransformf &)const
// int hkgpConvexHull::computeLocalTransform(hkgpConvexHull *this, hkTransformf *a2);
// [0x163e8c0] (3108 bytes) hkgpConvexHull::Side hkgpConvexHullImpl::splitByPlane<hkgpConvexHullImpl::PositionAsSource>(hkVector4f const&,hkgpConvexHull**,hkgpConvexHull**,float)const
// int hkgpConvexHullImpl::splitByPlane<hkgpConvexHullImpl::PositionAsSource>( __m128 **a1, float *a2, hkgpConvexHull **a3, hkgpConvexHull **a4, float a5);
// [0x163f4f0] (73 bytes) hkgpConvexHull::splitByPlane(hkVector4f const&,hkgpConvexHull**,hkgpConvexHull**,float)const
// int hkgpConvexHull::splitByPlane( __m128 ***this, const hkVector4f *a2, hkgpConvexHull **a3, hkgpConvexHull **a4, float a5);
// [0x163f540] (396 bytes) hkgpConvexHull::getMajorPlane(void)const
// hkgpConvexHull *hkgpConvexHull::getMajorPlane(hkgpConvexHull *this, hkgpConvexHull *a2);
// [0x163f6d0] (671 bytes) hkgpConvexHull::subdivide(int,hkArray<hkgpConvexHull*,hkContainerHeapAllocator> &,float)const
// int hkgpConvexHull::subdivide(hkgpConvexHullImpl **a1, int a2, hkMemoryAllocator *a3, float a4);
// [0x163f970] (1306 bytes) hkgpConvexHull::getMajorPlanes(hkVector4f *)const
// float *hkgpConvexHull::getMajorPlanes(char **this, hkVector4f *a2);
// [0x1640260] (270 bytes) hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::reset(void)
// int hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::reset( hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge, hkgpIndexedMeshDefinitions::Vertex, hkgpIndexedMeshDefinitions::Triangle, hkContainerHeapAllocator> *this);
// [0x1640370] (289 bytes) hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh()
// void hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh( hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge, hkgpIndexedMeshDefinitions::Vertex, hkgpIndexedMeshDefinitions::Triangle, hkContainerHeapAllocator> *this);
// [0x1640760] (344 bytes) hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh()
// void hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh( hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge, hkgpIndexedMeshDefinitions::Vertex, hkgpIndexedMeshDefinitions::Triangle, hkContainerHeapAllocator> *this);
// [0x1646160] (637 bytes) hkgpIndexedMesh::~hkgpIndexedMesh()
// void hkgpIndexedMesh::~hkgpIndexedMesh(hkgpIndexedMesh *this);
// [0x1646440] (93 bytes) hkgpIndexedMesh::~hkgpIndexedMesh()
// void hkgpIndexedMesh::~hkgpIndexedMesh(hkgpIndexedMesh *this);
// [0x16464a0] (231 bytes) hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::EdgeIterator::next(void)
// void hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Vertex,hkgpIndexedMeshDefinitions::Triangle,hkContainerHeapAllocator>::EdgeIterator::next( hkgpAbstractMesh<hkgpIndexedMeshDefinitions::Edge, hkgpIndexedMeshDefinitions::Vertex, hkgpIndexedMeshDefinitions::Triangle, hkContainerHeapAllocator>::EdgeIterator *this);
// [0x164ff80] (29 bytes) hkgpIndexedMesh::IVertexRemoval::~IVertexRemoval()
// void hkgpIndexedMesh::IVertexRemoval::~IVertexRemoval(hkgpIndexedMesh::IVertexRemoval *this);
// [0x164ffa0] (29 bytes) hkgpIndexedMesh::ITriangleRemoval::~ITriangleRemoval()
// void hkgpIndexedMesh::ITriangleRemoval::~ITriangleRemoval(hkgpIndexedMesh::ITriangleRemoval *this);
// [0x164ffc0] (29 bytes) hkgpIndexedMesh::IEdgeCollapse::~IEdgeCollapse()
// void hkgpIndexedMesh::IEdgeCollapse::~IEdgeCollapse(hkgpIndexedMesh::IEdgeCollapse *this);
// [0x164ffe0] (9 bytes) hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::bind(hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Edge)
// void hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::bind();
// [0x164fff0] (12 bytes) hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::validTriangleSet(hkArrayBase<hkgpIndexedMeshDefinitions::Triangle *> const&,hkgpIndexedMeshDefinitions::Vertex const*,hkgpIndexedMeshDefinitions::Vertex const*)
// int hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::validTriangleSet();
// [0x1650000] (9 bytes) hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::removeVertex(hkgpIndexedMeshDefinitions::Vertex *)
// void hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::removeVertex();
// [0x1650010] (9 bytes) hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::removeTriangle(hkgpIndexedMeshDefinitions::Triangle *)
// void hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::removeTriangle();
// [0x1650020] (29 bytes) hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::~DefaultEdgeCollapseInterface()
// void hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::~DefaultEdgeCollapseInterface( hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface *this);
// [0x1650040] (78 bytes) hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::~DefaultEdgeCollapseInterface()
// void hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::~DefaultEdgeCollapseInterface( hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface *this);
// [0x1650090] (78 bytes) hkgpIndexedMesh::IEdgeCollapse::~IEdgeCollapse()
// void hkgpIndexedMesh::IEdgeCollapse::~IEdgeCollapse(hkgpIndexedMesh::IEdgeCollapse *this);
// [0x16500e0] (78 bytes) hkgpIndexedMesh::ITriangleRemoval::~ITriangleRemoval()
// void hkgpIndexedMesh::ITriangleRemoval::~ITriangleRemoval(hkgpIndexedMesh::ITriangleRemoval *this);
// [0x1650130] (78 bytes) hkgpIndexedMesh::IVertexRemoval::~IVertexRemoval()
// void hkgpIndexedMesh::IVertexRemoval::~IVertexRemoval(hkgpIndexedMesh::IVertexRemoval *this);
// [0x1650180] (1005 bytes) hkgpIndexedMesh::reset(void)
// int hkgpIndexedMesh::reset(hkgpIndexedMesh *this);
// [0x1650570] (185 bytes) hkgpIndexedMesh::hkgpIndexedMesh(void)
// void hkgpIndexedMesh::hkgpIndexedMesh(hkgpIndexedMesh *this);
// [0x1650630] (1758 bytes) hkgpIndexedMesh::appendTriangle(unsigned long const*,unsigned long,int,int)
// uint32_t *hkgpIndexedMesh::appendTriangle( hkgpIndexedMesh *this, const unsigned int *a2, unsigned int a3, int a4, int a5);
// [0x1650d10] (123 bytes) hkgpIndexedMesh::appendFromMesh(hkgpIndexedMesh const&)
// const hkgpIndexedMesh *hkgpIndexedMesh::appendFromMesh(hkgpIndexedMesh *this, const hkgpIndexedMesh *a2);
// [0x1650d90] (91 bytes) hkgpIndexedMesh::appendTriangle(hkGeometry::Triangle const&,unsigned long)
// uint32_t *hkgpIndexedMesh::appendTriangle(hkgpIndexedMesh *this, const hkGeometry::Triangle *a2, unsigned int a3);
// [0x1650df0] (89 bytes) hkgpIndexedMesh::appendFromGeometry(hkGeometry const&)
// uint32_t *hkgpIndexedMesh::appendFromGeometry(hkgpIndexedMesh *this, const hkGeometry *a2);
// [0x1650e50] (279 bytes) hkgpIndexedMesh::canFlipEdge(hkgpIndexedMeshDefinitions::Edge)const
// uint8_t *hkgpIndexedMesh::canFlipEdge(uint8_t *a1, int a2, int a3, int a4);
// [0x1650f70] (364 bytes) hkgpIndexedMesh::flipEdge(hkgpIndexedMeshDefinitions::Edge)
// uint32_t *hkgpIndexedMesh::flipEdge(uint32_t *a1, int a2, uint32_t *a3, int a4);
// [0x16510e0] (2375 bytes) hkgpIndexedMesh::splitEdge(hkgpIndexedMeshDefinitions::Edge)
// uint32_t *hkgpIndexedMesh::splitEdge(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x1651a30] (335 bytes) hkgpIndexedMesh::getReachableRing(hkgpIndexedMeshDefinitions::Edge,hkArray<hkgpIndexedMeshDefinitions::Triangle *,hkContainerHeapAllocator> &)const
// int hkgpIndexedMesh::getReachableRing(int a1, unsigned int a2, int a3, hkMemoryAllocator *a4);
// [0x1651b80] (490 bytes) hkgpIndexedMesh::removeTriangle(hkgpIndexedMeshDefinitions::Triangle *,hkgpIndexedMesh::ITriangleRemoval *)
// uint32_t *hkgpIndexedMesh::removeTriangle(uint32_t *a1, uint32_t *a2, int a3);
// [0x1651d70] (1959 bytes) hkgpIndexedMesh::collapseEdge(hkArray<hkgpIndexedMeshDefinitions::Triangle *,hkContainerHeapAllocator> const&,hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Edge*,hkgpIndexedMesh::IEdgeCollapse *)
// int hkgpIndexedMesh::collapseEdge( uint32_t *a1, unsigned int *a2, int a3, int a4, uint32_t *a5, void (***a6)(hkgpIndexedMesh::IVertexRemoval *__hidden this));
// [0x1652520] (327 bytes) hkgpIndexedMesh::growStrip(hkgpIndexedMeshDefinitions::Edge,hkArray<hkgpIndexedMeshDefinitions::Edge,hkContainerHeapAllocator> &,hkgpIndexedMesh::StripConfig const&)const
// int hkgpIndexedMesh::growStrip(int a1, unsigned int a2, unsigned int a3, hkMemoryAllocator *a4, int a5);
// [0x1652670] (1800 bytes) hkgpIndexedMesh::computeSets(hkgpIndexedMesh::EdgeBarrier const&)
// int hkgpIndexedMesh::computeSets(hkgpIndexedMesh *this, const hkgpIndexedMesh::EdgeBarrier *a2);
// [0x1652d80] (317 bytes) hkgpIndexedMesh::getSetVertices(int,hkArray<hkgpIndexedMeshDefinitions::Vertex *,hkContainerHeapAllocator> &)const
// void hkgpIndexedMesh::getSetVertices(int a1, int a2, hkMemoryAllocator *a3);
// [0x1652ec0] (143 bytes) hkgpIndexedMesh::getSetTriangles(int,hkArray<hkgpIndexedMeshDefinitions::Triangle *,hkContainerHeapAllocator> &)const
// int hkgpIndexedMesh::getSetTriangles(int a1, int a2, hkMemoryAllocator *a3);
// [0x1652f50] (185 bytes) hkgpIndexedMesh::deleteSetTriangles(int)
// int hkgpIndexedMesh::deleteSetTriangles(hkgpIndexedMesh *this, int a2);
// [0x16537f0] (638 bytes) hkgpIndexedMesh::getBothRings(hkgpIndexedMeshDefinitions::Edge,hkArray<hkgpIndexedMeshDefinitions::Triangle *,hkContainerHeapAllocator> &)const
// int hkgpIndexedMesh::getBothRings(int a1, unsigned int a2, int a3, int *a4);
// [0x1653a70] (182 bytes) hkgpIndexedMesh::collapseEdge(hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Edge*,hkgpIndexedMesh::IEdgeCollapse *)
// int hkgpIndexedMesh::collapseEdge( uint32_t *a1, unsigned int a2, int a3, uint32_t *a4, void (***a5)(hkgpIndexedMesh::IVertexRemoval *__hidden this));
// [0x1653cc0] (2003 bytes) hkgpIndexedMesh::generateStrips(hkArray<hkArray<int,hkContainerHeapAllocator>,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator>&,hkArray<int,hkContainerHeapAllocator>&,hkgpIndexedMesh::StripConfig const&)const
// int hkgpIndexedMesh::generateStrips(int a1, int *a2, hkMemoryAllocator *a3, hkMemoryAllocator *a4, int *a5);
// [0x1654530] (29 bytes) hkgpMesh::IConvexOverlap::IConvexShape::~IConvexShape()
// void hkgpMesh::IConvexOverlap::IConvexShape::~IConvexShape(hkgpMesh::IConvexOverlap::IConvexShape *this);
// [0x1654550] (29 bytes) hkgpMesh::IConvexOverlap::~IConvexOverlap()
// void hkgpMesh::IConvexOverlap::~IConvexOverlap(hkgpMesh::IConvexOverlap *this);
// [0x1654570] (316 bytes) hkgpMesh::TriangleShape::getSupportingVertex(hkVector4f const&,hkVector4f&)const
// int hkgpMesh::TriangleShape::getSupportingVertex( hkgpMesh::TriangleShape *this, const hkVector4f *a2, hkVector4f *a3);
// [0x16546b0] (201 bytes) hkgpMesh::ExternShape::getSupportingVertex(hkVector4f const&,hkVector4f&)const
// int hkgpMesh::ExternShape::getSupportingVertex( hkgpMesh::ExternShape *this, const hkVector4f *a2, hkVector4f *a3);
// [0x16547f0] (29 bytes) hkgpTriangulatorBase::~hkgpTriangulatorBase()
// void hkgpTriangulatorBase::~hkgpTriangulatorBase(hkgpTriangulatorBase *this);
// [0x1654850] (29 bytes) hkgpMesh::ExternShape::~ExternShape()
// void hkgpMesh::ExternShape::~ExternShape(hkgpMesh::ExternShape *this);
// [0x1654870] (29 bytes) hkgpMesh::TriangleShape::~TriangleShape()
// void hkgpMesh::TriangleShape::~TriangleShape(hkgpMesh::TriangleShape *this);
// [0x1654890] (45 bytes) hkgpMesh::IConvexOverlap::IConvexShape::~IConvexShape()
// void hkgpMesh::IConvexOverlap::IConvexShape::~IConvexShape(hkgpMesh::IConvexOverlap::IConvexShape *this);
// [0x16548c0] (45 bytes) hkgpMesh::IConvexOverlap::~IConvexOverlap()
// void hkgpMesh::IConvexOverlap::~IConvexOverlap(hkgpMesh::IConvexOverlap *this);
// [0x1654920] (58 bytes) hkgpMesh::ExternShape::getBoundingBox(void)const
// hkgpMesh::ExternShape *hkgpMesh::ExternShape::getBoundingBox(hkgpMesh::ExternShape *this, int a2);
// [0x1654960] (160 bytes) hkgpMesh::TriangleShape::getBoundingBox(void)const
// hkgpMesh::TriangleShape *hkgpMesh::TriangleShape::getBoundingBox(hkgpMesh::TriangleShape *this, int a2);
// [0x1654a50] (78 bytes) hkgpMesh::TriangleShape::~TriangleShape()
// void hkgpMesh::TriangleShape::~TriangleShape(hkgpMesh::TriangleShape *this);
// [0x1654aa0] (78 bytes) hkgpMesh::ExternShape::~ExternShape()
// void hkgpMesh::ExternShape::~ExternShape(hkgpMesh::ExternShape *this);
// [0x1654b40] (96 bytes) hkgpTriangulatorBase::~hkgpTriangulatorBase()
// void hkgpTriangulatorBase::~hkgpTriangulatorBase(hkgpTriangulatorBase *this);
// [0x1654fa0] (95 bytes) hkgpJobQueue::IJob::~IJob()
// void hkgpJobQueue::IJob::~IJob(hkgpJobQueue::IJob *this);
// [0x1655000] (95 bytes) hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::~Box()
// void hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::~Box( hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle> *this);
// [0x1655060] (270 bytes) hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Triangle,hkContainerHeapAllocator>::reset(void)
// int hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Triangle,hkContainerHeapAllocator>::reset( hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge, hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Vertex, hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Triangle, hkContainerHeapAllocator> *this);
// [0x1655170] (103 bytes) hkgpJobQueue::IJob::~IJob()
// void hkgpJobQueue::IJob::~IJob(hkgpJobQueue::IJob *this);
// [0x16552b0] (289 bytes) hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh()
// void hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh( hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge, hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Vertex, hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Triangle, hkContainerHeapAllocator> *this);
// [0x16553e0] (270 bytes) hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::reset(void)
// int hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::reset( hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle, hkContainerHeapAllocator> *this);
// [0x16554f0] (134 bytes) hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::~Box()
// void hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::~Box( hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle> *this);
// [0x1655580] (289 bytes) hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh()
// void hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh( hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle, hkContainerHeapAllocator> *this);
// [0x16563f0] (344 bytes) hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh()
// void hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh( hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge, hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Vertex, hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Triangle, hkContainerHeapAllocator> *this);
// [0x1656550] (344 bytes) hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh()
// void hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::~hkgpAbstractMesh( hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle, hkContainerHeapAllocator> *this);
// [0x1656f70] (233 bytes) hkgpMesh::Location::Location(void)
// struct hkgpMesh::Location *hkgpMesh::Location::Location(hkgpMesh::Location *this);
// [0x1657060] (314 bytes) hkgpMesh::getTwiceArea(hkgpMeshBase::Triangle const*)
// float *hkgpMesh::getTwiceArea(float *a1, uint32_t *a2);
// [0x1658210] (634 bytes) hkgpMeshInternals::createRing(hkgpMeshBase::Edge)
// hkMemoryAllocator *hkgpMeshInternals::createRing(unsigned int a1, int a2);
// [0x1658490] (192 bytes) hkgpMeshInternals::Segment::operator=(hkgpMeshInternals::Segment const&)
// hkgpMeshInternals::Segment *hkgpMeshInternals::Segment::operator=( hkgpMeshInternals::Segment *this, const hkgpMeshInternals::Segment *a2);
// [0x1658550] (62 bytes) hkgpMesh::isClosedManifold(void)const
// int hkgpMesh::isClosedManifold(hkgpMesh *this);
// [0x1658590] (217 bytes) hkgpMesh::getBoundingBox(void)const
// hkgpMesh *hkgpMesh::getBoundingBox(hkgpMesh *this, int a2);
// [0x1658670] (175 bytes) hkgpMesh::fetchPositions(hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// int hkgpMesh::fetchPositions(hkgpMesh *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1658720] (37 bytes) hkgpMesh::countParts(void)const
// int hkgpMesh::countParts(hkgpMesh *this);
// [0x1658750] (1208 bytes) hkgpMesh::splitTriangle(hkgpMeshBase::Triangle *,hkVector4f const&,bool)
// int hkgpMesh::splitTriangle(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1658c10] (12 bytes) hkgpMesh::getConvexHull(void)const
// int hkgpMesh::getConvexHull(hkgpMesh *this);
// [0x1658c20] (60 bytes) hkgpMesh::getConvexHullVolume(void)const
// hkgpMesh *hkgpMesh::getConvexHullVolume(hkgpMesh *this, hkgpMesh *a2);
// [0x1658c60] (37 bytes) hkgpMesh::invalidateConvexHull(void)
// int hkgpMesh::invalidateConvexHull(hkgpMesh *this);
// [0x1658c90] (374 bytes) hkgpMesh::reset(void)
// int hkgpMesh::reset(hkgpMesh *this);
// [0x1658e10] (275 bytes) hkgpMesh::hkgpMesh(void)
// void hkgpMesh::hkgpMesh(hkgpMesh *this);
// [0x1658f30] (586 bytes) hkgpMesh::~hkgpMesh()
// void hkgpMesh::~hkgpMesh(hkgpMesh *this);
// [0x1659180] (93 bytes) hkgpMesh::~hkgpMesh()
// void hkgpMesh::~hkgpMesh(hkgpMesh *this);
// [0x16591e0] (711 bytes) hkgpMesh::appendToGeometry(hkGeometry &,bool)const
// void hkgpMesh::appendToGeometry(hkgpMesh *this, hkGeometry *a2, bool a3);
// [0x16594b0] (26 bytes) hkgpMesh::setPartId(int)
// uint32_t *hkgpMesh::setPartId(hkgpMesh *this, int a2);
// [0x16594d0] (45 bytes) hkgpMesh::setVerticesData(int,float)
// uint32_t *hkgpMesh::setVerticesData(hkgpMesh *this, int a2, float a3);
// [0x1659500] (26 bytes) hkgpMesh::setVerticesTag(int)
// uint32_t *hkgpMesh::setVerticesTag(hkgpMesh *this, int a2);
// [0x1659520] (68 bytes) hkgpMesh::copyPartIdToVerticesW(void)
// uint32_t *hkgpMesh::copyPartIdToVerticesW(hkgpMesh *this);
// [0x1659570] (2229 bytes) hkgpMesh::assignVertexNormals(void)
// hkgpMesh *hkgpMesh::assignVertexNormals(hkgpMesh *this);
// [0x1659e30] (383 bytes) hkgpMesh::tetrahedronVolume6(hkgpMeshBase::Edge)
// hkMatrix3f *hkgpMesh::tetrahedronVolume6(hkMatrix3f *a1, int a2, int a3);
// [0x1659fb0] (64 bytes) hkgpMesh::isConcave(hkgpMeshBase::Edge,float)const
// bool hkgpMesh::isConcave(int a1, int a2, int a3, float a4);
// [0x1659ff0] (218 bytes) hkgpMesh::findEdge(hkgpMeshBase::Vertex const*,hkgpMeshBase::Vertex const*)const
// hkgpMesh *hkgpMesh::findEdge(hkgpMesh *this, const Vertex *a2, const Vertex *a3, const Vertex *a4);
// [0x165a0d0] (561 bytes) hkgpMesh::flipEdge(hkgpMeshBase::Edge)const
// uint32_t *hkgpMesh::flipEdge(uint32_t *a1, int a2, int a3, int a4);
// [0x165a310] (45 bytes) hkgpMesh::setPartIdsAsPlaneIndices(void)
// hkgpMesh *hkgpMesh::setPartIdsAsPlaneIndices(hkgpMesh **this);
// [0x165a340] (399 bytes) hkgpMesh::hasPosition(hkgpMeshBase::Triangle const*,hkVector4f const&)
// bool hkgpMesh::hasPosition(uint32_t *a1, float *a2);
// [0x165a4d0] (267 bytes) hkgpMesh::removeTriangle(hkgpMeshBase::Triangle *)
// uint32_t *hkgpMesh::removeTriangle(uint32_t *a1, int *a2);
// [0x165a5e0] (508 bytes) hkgpMesh::sortTrianglesByArea(float)
// int hkgpMesh::sortTrianglesByArea(hkgpMesh *this, float a2);
// [0x165a7e0] (323 bytes) hkgpMesh::removeOrphanVertices(void)
// int hkgpMesh::removeOrphanVertices(hkgpMesh *this);
// [0x165a930] (13 bytes) hkgpMesh::reportBadAreaTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&)
// hkgpMesh *hkgpMesh::reportBadAreaTriangle(hkgpMesh *this);
// [0x165a940] (13 bytes) hkgpMesh::reportBadEdgeLength(hkVector4f const&,hkVector4f const&)
// hkgpMesh *hkgpMesh::reportBadEdgeLength(hkgpMesh *this);
// [0x165a950] (1092 bytes) hkgpMesh::setPlane(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&,bool)
// int hkgpMesh::setPlane( hkgpMesh *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, hkVector4f *a5, bool a6);
// [0x165ada0] (89 bytes) hkgpMesh::setPlane(hkgpMeshBase::Triangle const*,hkVector4f &,bool)
// int hkgpMesh::setPlane(hkgpMesh *a1, uint32_t *a2, hkVector4f *a3, char a4);
// [0x165ae00] (355 bytes) hkgpMesh::CollapseMetric::operator()(hkgpMeshBase::Edge)
// int hkgpMesh::CollapseMetric::operator()(int a1, uint32_t *a2, int a3);
// [0x165af70] (131 bytes) hkgpMesh::updatePlane(hkgpMeshBase::Triangle *)
// int hkgpMesh::updatePlane(hkgpMesh *a1, uint32_t *a2);
// [0x165b000] (81 bytes) hkgpMesh::updatePlaneEquations(void)
// int hkgpMesh::updatePlaneEquations(hkgpMesh *this);
// [0x165b060] (358 bytes) hkgpMesh::createTriangle(hkgpMeshBase::Vertex *,hkgpMeshBase::Vertex *,hkgpMeshBase::Vertex *)
// uint32_t *hkgpMesh::createTriangle(hkgpMesh *this, Vertex *a2, Vertex *a3, Vertex *a4);
// [0x165b1d0] (13 bytes) hkgpMesh::reportDuplicatedEdge(hkVector4f const&,hkVector4f const&)
// hkgpMesh *hkgpMesh::reportDuplicatedEdge(hkgpMesh *this);
// [0x165b1e0] (13 bytes) hkgpMesh::reportInvalidEdgeWinding(hkVector4f const&,hkVector4f const&)
// hkgpMesh *hkgpMesh::reportInvalidEdgeWinding(hkgpMesh *this);
// [0x165b1f0] (523 bytes) hkgpMesh::bindEdgeList(hkArray<hkgpMeshBase::Edge,hkContainerHeapAllocator> &)
// int hkgpMesh::bindEdgeList(hkgpMesh *this, hkArray<hkgpMeshBase::Edge, hkContainerHeapAllocator> *a2);
// [0x165b400] (93 bytes) hkgpMesh::removePartTriangles(int)
// int *hkgpMesh::removePartTriangles(hkgpMesh *this, int a2);
// [0x165b460] (93 bytes) hkgpMesh::removePlaneTriangles(int)
// int *hkgpMesh::removePlaneTriangles(hkgpMesh *this, int a2);
// [0x165b4c0] (46 bytes) hkgpMesh::remapPlaneIndex(int,int)
// uint32_t *hkgpMesh::remapPlaneIndex(hkgpMesh *this, int a2, int a3);
// [0x165b4f0] (554 bytes) hkgpMesh::checkEdgeCollapseConvex(hkgpMesh::FanEdgeCollector const&,hkgpMeshBase::Edge)const
// uint8_t *hkgpMesh::checkEdgeCollapseConvex(uint8_t *a1, int a2, int a3, int a4, int a5);
// [0x165b7a0] (102 bytes) hkgpTopology::Edge<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkgpMeshBase::Vertex*>::null(void)
// uint32_t *hkgpTopology::Edge<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkgpMeshBase::Vertex*>::null();
// [0x165dfa0] (352 bytes) hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Triangle,hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpMeshBase::BaseVertex,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Triangle,32,hkContainerHeapAllocator>>::allocate(hkgpMeshBase::Triangle const&)
// uint32_t *hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Triangle,hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpMeshBase::BaseVertex,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Triangle,32,hkContainerHeapAllocator>>::allocate( uint32_t *a1, uint32_t *a2);
// [0x165e100] (1519 bytes) hkgpMesh::splitEdge(hkgpMeshBase::Edge,hkgpMeshBase::Vertex *,bool)
// uint32_t *hkgpMesh::splitEdge(uint32_t *a1, hkgpMesh *a2, uint32_t *a3, int a4, int a5, char a6);
// [0x165e6f0] (385 bytes) hkgpMesh::splitEdge(hkgpMeshBase::Edge,hkVector4f const&,bool)
// uint32_t *hkgpMesh::splitEdge(uint32_t *a1, hkgpMesh *a2, uint32_t *a3, int a4, uint32_t *a5, char a6);
// [0x165e880] (1018 bytes) hkgpMesh::clone(void)const
// hkgpMesh *hkgpMesh::clone(hkgpMesh *this);
// [0x165ec80] (872 bytes) hkgpMesh::append(hkgpMesh*)
// void hkgpMesh::append(hkgpMesh *this, hkgpMesh *a2);
// [0x165eff0] (368 bytes) hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpMeshBase::BaseVertex,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::allocate(hkgpMeshBase::Vertex const&)
// uint32_t *hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpMeshBase::BaseVertex,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::allocate( hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex, hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex, hkgpMeshBase::BaseVertex, hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex, 32, hkContainerHeapAllocator>>::Item, hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex, 32, hkContainerHeapAllocator>> *this, const Vertex *a2);
// [0x165f160] (419 bytes) hkgpTopology::Edge<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkgpMeshBase::Vertex*>::bindSides(void)const
// int hkgpTopology::Edge<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkgpMeshBase::Vertex*>::bindSides( hkgpTopology::Edge<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle, hkgpMeshBase::Vertex*> *this);
// [0x165f310] (883 bytes) hkgpMesh::collapseEdge(hkgpMeshBase::Edge,bool)
// uint32_t *hkgpMesh::collapseEdge(hkgpMesh *a1, uint32_t *a2, int a3, char a4);
// [0x165f690] (246 bytes) hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpMeshBase::BaseVertex,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::allocate(void)
// uint32_t *hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpMeshBase::BaseVertex,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::allocate( hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex, hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex, hkgpMeshBase::BaseVertex, hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex, 32, hkContainerHeapAllocator>>::Item, hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex, 32, hkContainerHeapAllocator>> *this);
// [0x165f900] (332 bytes) hkgpMesh::countFanPlanes(hkgpMeshBase::Edge)const
// int hkgpMesh::countFanPlanes(int a1, ...);
// [0x165fa50] (217 bytes) hkgpMesh::checkEdgeCollapseConvex(hkgpMeshBase::Edge)const
// uint8_t *hkgpMesh::checkEdgeCollapseConvex(uint8_t *a1, int a2, int a3, int a4);
// [0x165fb30] (236 bytes) hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Triangle,hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpMeshBase::BaseVertex,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Triangle,32,hkContainerHeapAllocator>>::allocate(void)
// uint32_t *hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Triangle,hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex,hkgpMeshBase::BaseVertex,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Triangle,32,hkContainerHeapAllocator>>::allocate( hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Triangle, hkgpAbstractMeshDefinitions::List<hkgpMeshBase::Vertex, hkgpMeshBase::BaseVertex, hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Vertex, 32, hkContainerHeapAllocator>>::Item, hkGeometryProcessing::PoolAllocator<hkgpMeshBase::Triangle, 32, hkContainerHeapAllocator>> *this);
// [0x165fd00] (116 bytes) hkgpTopology::Edge<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkgpMeshBase::Vertex*>::isMaster(void)const
// bool hkgpTopology::Edge<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkgpMeshBase::Vertex*>::isMaster( hkgpTopology::Edge<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle, hkgpMeshBase::Vertex*> *this);
// [0x165fd80] (684 bytes) hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::checkTopology(bool)const
// int hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::checkTopology( hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle, hkContainerHeapAllocator> *this, bool a2);
// [0x1660030] (406 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::hkgpTriangulatorType(void)
// int hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::hkgpTriangulatorType( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this);
// [0x16601d0] (655 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::transform(hkVector4f const&,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex &)const
// int hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::transform( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this, const hkVector4f *a2, Vertex *a3);
// [0x1660460] (330 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::canFlip(void)const
// int hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::canFlip( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *this);
// [0x16605b0] (609 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::getEdgeDataOrientation(void)const
// bool hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::getEdgeDataOrientation( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this);
// [0x1660820] (333 bytes) hkgpMesh::rebuildConvexHull(void)
// int hkgpMesh::rebuildConvexHull(hkgpConvexHull **this);
// [0x1660970] (2237 bytes) hkgpMesh::appendFromGeometryRaw(hkGeometry const&,hkMatrix4f const&,bool)
// int hkgpMesh::appendFromGeometryRaw(hkgpMesh *this, const hkGeometry *a2, const hkMatrix4f *a3, bool a4);
// [0x1662110] (716 bytes) hkgpMesh::Location::Region::hasCommonSuperset(hkgpMesh::Location::Region const* const*,int)
// int hkgpMesh::Location::Region::hasCommonSuperset( hkgpMesh::Location::Region *this, const hkgpMesh::Location::Region *const *a2);
// [0x1662560] (3294 bytes) hkgpMesh::appendFromGeometry(hkGeometry const&,hkMatrix4f const&,int,bool,bool)
// int hkgpMesh::appendFromGeometry( hkgpMesh *this, const hkGeometry *a2, const hkMatrix4f *a3, int a4, bool a5, bool a6);
// [0x1663240] (200 bytes) hkgpMesh::appendFromGeometry(hkGeometry const&,hkTransformf const&,int,bool,bool)
// int hkgpMesh::appendFromGeometry( hkgpMesh *this, const hkGeometry *a2, const hkTransformf *a3, int a4, bool a5, bool a6);
// [0x1663310] (310 bytes) hkgpMesh::appendFromConvexHull(hkgpConvexHull const*)
// int hkgpMesh::appendFromConvexHull(hkgpMesh *this, const hkgpConvexHull *a2);
// [0x1663450] (217 bytes) hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::EdgeIterator::next(void)
// void hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::EdgeIterator::next( hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle, hkContainerHeapAllocator>::EdgeIterator *this);
// [0x1663530] (161 bytes) hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::EdgeIterator::EdgeIterator(hkgpMeshBase::Edge)
// void hkgpAbstractMesh<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkContainerHeapAllocator>::EdgeIterator::EdgeIterator( hkgpAbstractMesh<hkgpMeshBase::Edge, hkgpMeshBase::Vertex, hkgpMeshBase::Triangle, hkContainerHeapAllocator>::EdgeIterator *a1, int a2, int a3);
// [0x16635e0] (1175 bytes) hkgpMesh::applyLaplacianSmoothing(float)
// hkgpMesh *hkgpMesh::applyLaplacianSmoothing( int a1, int a2, int a3, int a4, hkgpMesh *this, float a6);
// [0x1663a80] (623 bytes) hkgpMesh::setPartIdAsConvexQuads(float)
// int hkgpMesh::setPartIdAsConvexQuads(hkgpMesh *this, float a2);
// [0x1664340] (272 bytes) hkgpMesh::fetchAreaSortedTriangles(hkArray<hkgpMeshBase::Triangle *,hkContainerHeapAllocator> &,bool)const
// int hkgpMesh::fetchAreaSortedTriangles( hkgpMesh *this, hkArray<hkgpMeshBase::Triangle *, hkContainerHeapAllocator> *a2, bool a3);
// [0x16644b0] (600 bytes) hkgpMesh::floodFillDetachedParts(void)
// int hkgpMesh::floodFillDetachedParts(hkgpMesh *this);
// [0x1664710] (633 bytes) hkgpMesh::floodFillDetachedOrMaterialBoundariesParts(void)
// int hkgpMesh::floodFillDetachedOrMaterialBoundariesParts(hkgpMesh *this);
// [0x1664990] (2000 bytes) hkgpMesh::simplify(hkgpMesh::SimplifyConfig const&)
// uint32_t *hkgpMesh::simplify(hkgpMesh *a1, float *a2);
// [0x1665160] (1155 bytes) hkgpMesh::computeQEM(hkgpMeshBase::Edge)
// int hkgpMesh::computeQEM(int a1, unsigned int a2, int a3);
// [0x16655f0] (154 bytes) hkgpMesh::initializeQEM(void)
// int hkgpMesh::initializeQEM(hkgpMesh *this);
// [0x1665690] (582 bytes) hkgpMesh::flipPartOrientation(int)
// int hkgpMesh::flipPartOrientation(hkgpMesh *this, int a2);
// [0x16658e0] (1587 bytes) hkgpMesh::extractAllLoops(hkArray<hkArray<hkgpMeshBase::Edge,hkContainerHeapAllocator> *,hkContainerHeapAllocator> &,int)const
// uint32_t *hkgpMesh::extractAllLoops(int a1, int *a2, int a3);
// [0x1665f20] (2046 bytes) hkgpMesh::appendConcaveEdges(float,float,hkgpMesh const*)
// int hkgpMesh::appendConcaveEdges(hkgpMesh *this, float a2, float a3, const hkgpMesh *a4);
// [0x16667a0] (955 bytes) hkgpMesh::buildPlaneIndices(float,float,bool)
// int hkgpMesh::buildPlaneIndices(hkgpMesh *this, float a2, float a3, bool a4);
// [0x1666bd0] (364 bytes) hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>::~SparseEdgeDataPolicy()
// void hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>::~SparseEdgeDataPolicy( hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator> *this);
// [0x1666d40] (388 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::~hkgpTriangulatorType()
// void hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::~hkgpTriangulatorType( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this);
// [0x1666ed0] (443 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::~hkgpTriangulatorType()
// void hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::~hkgpTriangulatorType( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this);
// [0x1667090] (3076 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::setDomainFromPoints(hkStridedVertices const&,hkMatrix4f const&,bool,bool)
// int hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::setDomainFromPoints( __m128 *a1, int a2, float *a3, uint8_t a4, char a5);
// [0x1668180] (100 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::isConstrained(void)const
// int hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::isConstrained( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *this);
// [0x16681f0] (124 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::getAndClearConstraint(void)const
// int hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::getAndClearConstraint( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *this);
// [0x1668270] (116 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::setConstrained(void)const
// int hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::setConstrained( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *this);
// [0x16682f0] (842 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::flip(void)const
// hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge::flip( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *this, unsigned int *a2);
// [0x16694c0] (474 bytes) hkgpMesh::enumerateOverlaps(hkgpMesh::IConvexOverlap::IConvexShape *,hkArray<hkgpMeshBase::Triangle *,hkContainerHeapAllocator> &,float,bool)const
// int hkgpMesh::enumerateOverlaps( hkgpMesh *this, hkgpMesh::IConvexOverlap::IConvexShape *a2, hkArray<hkgpMeshBase::Triangle *, hkContainerHeapAllocator> *a3, float a4, bool a5);
// [0x16696a0] (474 bytes) hkgpMesh::checkOverlap(hkgpMesh::IConvexOverlap::IConvexShape *,float,bool)const
// int hkgpMesh::checkOverlap(hkgpMesh *this, hkgpMesh::IConvexOverlap::IConvexShape *a2, float a3, bool a4);
// [0x1669880] (358 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::newTriangle(hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex *,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex *,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex *)
// uint32_t *hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::newTriangle( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this, Vertex *a2, Vertex *a3, Vertex *a4);
// [0x1669fd0] (969 bytes) hkgpMesh::enumerateTriangleOverlaps(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkArray<hkgpMeshBase::Triangle *,hkContainerHeapAllocator> &)const
// int hkgpMesh::enumerateTriangleOverlaps( hkgpMesh *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, hkArray<hkgpMeshBase::Triangle *, hkContainerHeapAllocator> *a5);
// [0x166a980] (570 bytes) hkgpMesh::checkTriangleOverlap(hkVector4f const&,hkVector4f const&,hkVector4f const&)const
// int hkgpMesh::checkTriangleOverlap( hkgpMesh *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x166ae10] (238 bytes) hkgpAbstractMeshDefinitions::List<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpAbstractMeshDefinitions::List<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorBase::VertexBase,hkGeometryProcessing::PoolAllocator<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,32,hkContainerHeapAllocator>>::allocate(void)
// uint32_t *hkgpAbstractMeshDefinitions::List<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpAbstractMeshDefinitions::List<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorBase::VertexBase,hkGeometryProcessing::PoolAllocator<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,32,hkContainerHeapAllocator>>::Item,hkGeometryProcessing::PoolAllocator<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,32,hkContainerHeapAllocator>>::allocate( hkgpAbstractMeshDefinitions::List<hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Vertex, hkgpAbstractMeshDefinitions::List<hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Vertex, hkgpTriangulatorBase::VertexBase, hkGeometryProcessing::PoolAllocator<hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Vertex, 32, hkContainerHeapAllocator>>::Item, hkGeometryProcessing::PoolAllocator<hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Vertex, 32, hkContainerHeapAllocator>> *this);
// [0x166af00] (102 bytes) hkgpTopology::Edge<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Triangle,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex*>::null(void)
// uint32_t *hkgpTopology::Edge<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Triangle,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Vertex*>::null();
// [0x166af70] (2600 bytes) hkgpMesh::rebuildTrianglesTree(float)
// uint32_t *hkgpMesh::rebuildTrianglesTree(int **this, float a2);
// [0x166b9a0] (1049 bytes) void hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>::setEdgeData<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge>(hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge const&,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator> const&)
// int hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>::setEdgeData<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge>( int a1, uint32_t *a2, uint32_t *a3);
// [0x166c850] (127 bytes) hkgpMesh::IConvexOverlap::IConvexShape::getMaxIndex(void)const
// int hkgpMesh::IConvexOverlap::IConvexShape::getMaxIndex();
// [0x166c8d0] (2428 bytes) hkgpMesh::locate(hkVector4f const&,hkgpMesh::Location &,hkBool)const
// float *hkgpMesh::locate(int a1, hkVector4f *a2, hkVector4f *a3, char a4);
// [0x166d250] (4501 bytes) hkgpMesh::explodeParts(hkArray<hkgpMesh*,hkContainerHeapAllocator> &,bool,bool,bool,hkgpMesh::eHollows)const
// int hkgpMesh::explodeParts(hkgpMesh *a1, int *a2, char a3, char a4, char a5, int a6);
// [0x166e3f0] (358 bytes) hkgpMesh::squaredDistanceToPoint(hkVector4f const&,hkVector4f&,hkVector4fComparison &)const
// int *hkgpMesh::squaredDistanceToPoint(int *a1, int a2, hkVector4f *a3, uint32_t *a4, int *a5);
// [0x166e560] (1057 bytes) hkgpMesh::projectPointOnSurface(float,hkVector4f &,int)const
// hkgpMesh *hkgpMesh::projectPointOnSurface( int a1, int a2, int a3, int a4, hkgpMesh *this, int a6, hkVector4f *a7, hkVector4f *a8, int a9);
// [0x166e990] (535 bytes) hkgpMesh::projectPointOnSurface(float,hkVector4f const&,hkVector4f&,int)const
// float *hkgpMesh::projectPointOnSurface( int a1, int a2, int a3, int a4, hkgpMesh *this, int a6, const hkVector4f *a7, hkVector4f *a8, float *a9, int a10);
// [0x166ebb0] (1015 bytes) hkgpMesh::computeOffsetPoint(hkSimdFloat32 const&,hkVector4f const&,hkVector4f&,int,bool)const
// bool hkgpMesh::computeOffsetPoint(int a1, float *a2, float *a3, float *a4, int a5, char a6);
// [0x166efb0] (2755 bytes) hkgpMeshInternals::ConcaveEdgeJob::run(void)
// int hkgpMeshInternals::ConcaveEdgeJob::run(hkgpMesh **this);
// [0x166fa80] (3288 bytes) hkgpMesh::generateConcaveEdges(float,hkArray<hkVector4f,hkContainerHeapAllocator> &,unsigned int,hkgpJobQueue *)const
// int hkgpMesh::generateConcaveEdges( float **this, float a2, hkArray<hkVector4f, hkContainerHeapAllocator> *a3, unsigned int a4, hkgpJobQueue *a5);
// [0x1670760] (37 bytes) hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::run(void)const
// int hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::run(hkgpMesh ***this);
// [0x1670790] (750 bytes) hkgpMesh::removePartFromClassification(int,hkTransformf const&,hkgpMesh const*,bool)
// hkgpMesh *hkgpMesh::removePartFromClassification( hkgpMesh *this, int a2, const hkTransformf *a3, const hkgpMesh *a4, bool a5);
// [0x1670a80] (3014 bytes) hkgpMesh::generateSurfaceSamples(hkgpMesh::SurfaceSamplingConfig const&,hkArray<hkVector4f,hkContainerHeapAllocator> &,bool)const
// hkgpMesh *hkgpMesh::generateSurfaceSamples(hkgpMesh *a1, int a2, hkArrayBase<hkVector4f> *a3, char a4);
// [0x1671650] (885 bytes) hkgpMesh::removeButterflies(int)
// char *hkgpMesh::removeButterflies(hkgpMesh *this, int a2);
// [0x16719d0] (214 bytes) hkgpMesh::hasValidTopology(bool)const
// bool hkgpMesh::hasValidTopology(hkgpMesh *this, bool a2);
// [0x1671ab0] (507 bytes) hkgpMesh::bindEdge(hkgpMeshBase::Edge,bool,bool)
// int hkgpMesh::bindEdge(int a1, int a2, int a3, char a4, char a5);
// [0x1671d90] (951 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::locateVertex(hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge const&,int,int)const
// hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::locateVertex( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this, const hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *a2, uint32_t *a3, int a4, int a5);
// [0x1672150] (1193 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::partition(void)
// int hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::partition( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this);
// [0x1672600] (1599 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::flushConform(void)
// void hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::flushConform( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this);
// [0x1672c40] (6107 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::insertVertex(int,int,bool,hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Location const&,bool)
// uint32_t *hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::insertVertex( uint32_t *a1, int a2, int a3, int a4, char a5, int *a6, char a7);
// [0x1674420] (734 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::conformEdge(hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::Edge const&)
// hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::conformEdge( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this, const hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *a2, uint32_t *a3);
// [0x1674700] (3016 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::insertEdge(int,int,int,int,bool,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator> const*)
// uint32_t *hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::insertEdge( uint32_t *a1, const hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *a2, int a3, hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *a4, int a5, hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false>::Edge *a6, char a7, uint32_t *a8);
// [0x1675350] (830 bytes) hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::conformEdges(void)
// void hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,false>::conformEdges( hkgpTriangulatorType<hkContainerHeapAllocator, hkgpTriangulatorBase::VertexBase, hkgpTriangulatorBase::TriangleBase, hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>, hkContainerHeapAllocator>, -1, 4, 15, false> *this);
// [0x1675690] (3193 bytes) hkgpMesh::retriangulateFromPlanes(void)
// int hkgpMesh::retriangulateFromPlanes(hkgpMesh *this);
// [0x1676310] (1082 bytes) hkgpMesh::fixBindings(void)
// int hkgpMesh::fixBindings(hkgpMesh *this);
// [0x1676750] (1922 bytes) hkgpMesh::fixTJunctions(float,bool)
// int hkgpMesh::fixTJunctions(hkgpMesh *this, float a2, bool a3);
// [0x1676ee0] (1317 bytes) hkgpMesh::simplifyPlanes(bool)
// void hkgpMesh::simplifyPlanes(hkgpMesh *this, bool a2);
// [0x1677410] (818 bytes) hkgpMesh::simplifyQEM(int,float)
// int hkgpMesh::simplifyQEM(hkgpMesh *this, int a2, float a3);
// [0x1677750] (1780 bytes) hkgpMesh::generateEmptySpaceSamples(int,float,hkArray<hkVector4f,hkContainerHeapAllocator> &,bool)const
// void hkgpMesh::generateEmptySpaceSamples( hkgpMesh *this, int a2, float a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4, bool a5);
// [0x1677e50] (6847 bytes) hkgpMesh::fillHoles(hkgpMesh::HoleFillingConfig const&)
// int hkgpMesh::fillHoles(hkgpMesh *a1, uint32_t *a2);
// [0x1679910] (3333 bytes) hkgpCgo::optimize(hkgpCgo::Config const&,hkGeometry &,hkgpCgo::IProgress *,hkArray<hkgpCgo::ClusterData,hkContainerHeapAllocator> *)
// int hkgpCgo::optimize(uint8_t *a1, hkGeometry *a2, int a3, int a4);
// [0x167a620] (987 bytes) hkgpJobQueue::hkgpJobQueue(int)
// void hkgpJobQueue::hkgpJobQueue(hkgpJobQueue *this, int a2);
// [0x167aa00] (361 bytes) hkgpJobQueue::waitForCompletion(void)
// int hkgpJobQueue::waitForCompletion(hkgpJobQueue *this);
// [0x167ab70] (985 bytes) hkgpJobQueue::~hkgpJobQueue()
// void hkgpJobQueue::~hkgpJobQueue(hkgpJobQueue *this);
// [0x167af60] (1173 bytes) hkgpJobQueue::threadMain(void)
// int hkgpJobQueue::threadMain(hkgpJobQueue *this);
// [0x167b400] (168 bytes) hkgpJobQueue::threadStart(void *)
// int hkgpJobQueue::threadStart(hkgpJobQueue *this);
// [0x167b4b0] (653 bytes) hkgpJobQueue::push(hkgpJobQueue::IJob *)
// int hkgpJobQueue::push(hkgpJobQueue *this, hkgpJobQueue::IJob *a2);
// [0x167b740] (2441 bytes) hkgpConvexHullImpl::clearHorizon(hkgpConvexHullImpl::Vertex const&,hkgpConvexHullImpl::Edge const&,hkgpConvexHullImpl::Edge&)
// int *hkgpConvexHullImpl::clearHorizon(uint32_t *a1, int *a2, int **a3, unsigned int *a4);
// [0x167c0d0] (15966 bytes) hkgpConvexHullImpl::insert(hkgpConvexHullImpl::Vertex const&)
// int hkgpConvexHullImpl::insert(hkgpConvexHullImpl *this, const Vertex *a2);
// [0x16801b0] (7238 bytes) hkgpConvexHullImpl::flushPending(void)
// int hkgpConvexHullImpl::flushPending(__m128i a1, hkgpConvexHullImpl *this);
// [0x1681e00] (13281 bytes) hkgpConvexHullImpl::build(hkVector4f const*,int,bool,hkgpConvexHullImpl const*)
// int hkgpConvexHullImpl::build( hkgpConvexHullImpl *this, const hkVector4f *a2, int a3, bool a4, const hkgpConvexHullImpl *a5);
// [0x16851f0] (29 bytes) hkgpIndexedMesh::EdgeBarrier::~EdgeBarrier()
// void hkgpIndexedMesh::EdgeBarrier::~EdgeBarrier(hkgpIndexedMesh::EdgeBarrier *this);
// [0x1685210] (9 bytes) hkgpIndexedMesh::EdgeBarrier::isBlocked(hkgpIndexedMeshDefinitions::Edge)const
// int hkgpIndexedMesh::EdgeBarrier::isBlocked();
// [0x1685220] (9 bytes) hkgpCgoInternal::ICollapse::removeVertex(hkgpIndexedMeshDefinitions::Vertex *)
// void hkgpCgoInternal::ICollapse::removeVertex();
// [0x1685230] (29 bytes) hkgpCgoInternal::ICollapse::~ICollapse()
// void hkgpCgoInternal::ICollapse::~ICollapse(hkgpCgoInternal::ICollapse *this);
// [0x1685250] (78 bytes) hkgpCgoInternal::ICollapse::~ICollapse()
// void hkgpCgoInternal::ICollapse::~ICollapse(hkgpCgoInternal::ICollapse *this);
// [0x16852a0] (78 bytes) hkgpIndexedMesh::EdgeBarrier::~EdgeBarrier()
// void hkgpIndexedMesh::EdgeBarrier::~EdgeBarrier(hkgpIndexedMesh::EdgeBarrier *this);
// [0x16852f0] (95 bytes) hkgpJobQueue::Box<hkgpCgoInternal::UpdateJob>::~Box()
// void hkgpJobQueue::Box<hkgpCgoInternal::UpdateJob>::~Box(hkgpJobQueue::Box<hkgpCgoInternal::UpdateJob> *this);
// [0x1685350] (134 bytes) hkgpJobQueue::Box<hkgpCgoInternal::UpdateJob>::~Box()
// void hkgpJobQueue::Box<hkgpCgoInternal::UpdateJob>::~Box(hkgpJobQueue::Box<hkgpCgoInternal::UpdateJob> *this);
// [0x16859b0] (688 bytes) hkgpCgoInternal::reset(void)
// int hkgpCgoInternal::reset(hkgpCgoInternal *this);
// [0x1685c60] (76 bytes) hkgpCgoInternal::getBestEdge(void)
// int hkgpCgoInternal::getBestEdge(hkgpCgoInternal *this);
// [0x1685cb0] (517 bytes) hkgpCgoInternal::updatePlane(hkgpIndexedMeshDefinitions::Triangle const*)
// float *hkgpCgoInternal::updatePlane(int a1, uint32_t *a2);
// [0x1685ec0] (827 bytes) hkgpCgoInternal::computeError(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkVector4f const&,hkSimdFloat32 &)const
// float *hkgpCgoInternal::computeError(int a1, int *a2, float *a3, float *a4);
// [0x1686200] (487 bytes) hkgpCgoInternal::projectVertex(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkVector4f&)const
// int hkgpCgoInternal::projectVertex( hkgpCgoInternal *this, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2, hkVector4f *a3);
// [0x16863f0] (3517 bytes) hkgpCgoInternal::checkTwist(int,int,hkVector4f const&,hkArrayBase<hkgpCgoInternal::HTriangle> const&)const
// int hkgpCgoInternal::checkTwist(int a1, int a2, int a3, int a4, int *a5);
// [0x16871b0] (625 bytes) hkgpCgoInternal::checkInside(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkVector4f const&)const
// int hkgpCgoInternal::checkInside( hkgpCgoInternal *this, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2, const hkVector4f *a3);
// [0x1687430] (1421 bytes) hkgpCgoInternal::processVertex(hkgpCgoInternal::ProcessConfig const&,hkVector4f const&,hkgpCgoInternal::ProcessedVertex &)const
// int hkgpCgoInternal::processVertex(hkgpCgoInternal *a1, int a2, hkVector4f *a3, int a4);
// [0x16879c0] (202 bytes) hkgpCgoInternal::solveVertex(hkgpCgoInternal::ProcessConfig &,bool,hkVector4f const&)const
// int hkgpCgoInternal::solveVertex(hkgpCgoInternal *a1, int a2, char a3, uint32_t *a4);
// [0x1687a90] (5062 bytes) hkgpCgoInternal::updateEdge(hkgpCgoInternal::ProcessConfig &,hkgpCgoInternal::EdgeInfo *)
// int hkgpCgoInternal::updateEdge(hkgpCgoInternal *a1, int a2, uint32_t *a3);
// [0x1688e60] (560 bytes) hkgpCgoInternal::update(void)
// bool hkgpCgoInternal::update(hkgpCgoInternal *this);
// [0x1689090] (273 bytes) hkgpJobQueue::Box<hkgpCgoInternal::UpdateJob>::run(void)const
// int hkgpJobQueue::Box<hkgpCgoInternal::UpdateJob>::run(hkgpJobQueue::Box<hkgpCgoInternal::UpdateJob> *this);
// [0x16891b0] (79 bytes) hkgpCgoInternal::getEdgeInfo(hkgpIndexedMeshDefinitions::Edge)const
// int hkgpCgoInternal::getEdgeInfo(int a1, int a2, int a3);
// [0x1689200] (88 bytes) hkgpCgoInternal::setEdgeInfo(hkgpIndexedMeshDefinitions::Edge,hkgpCgoInternal::EdgeInfo *)
// unsigned int hkgpCgoInternal::setEdgeInfo(int a1, int a2, int a3, uint32_t *a4);
// [0x1689260] (649 bytes) hkgpCgoInternal::invalidateEdgeInfo(hkgpCgoInternal::EdgeInfo *)
// void hkgpCgoInternal::invalidateEdgeInfo(uint32_t *a1, int a2);
// [0x16894f0] (218 bytes) hkgpCgoInternal::ICollapse::validTriangleSet(hkArrayBase<hkgpIndexedMeshDefinitions::Triangle *> const&,hkgpIndexedMeshDefinitions::Vertex const*,hkgpIndexedMeshDefinitions::Vertex const*)
// int hkgpCgoInternal::ICollapse::validTriangleSet(int a1, uint32_t *a2);
// [0x16895d0] (81 bytes) hkgpCgoInternal::removeEdgeInfoFromInvalidQueue(hkgpCgoInternal::EdgeInfo *)
// int hkgpCgoInternal::removeEdgeInfoFromInvalidQueue(int a1, int a2);
// [0x1689630] (625 bytes) hkgpCgoInternal::ICollapse::removeTriangle(hkgpIndexedMeshDefinitions::Triangle *)
// int hkgpCgoInternal::ICollapse::removeTriangle(int a1, int a2);
// [0x16898b0] (519 bytes) hkgpCgoInternal::ICollapse::bind(hkgpIndexedMeshDefinitions::Edge,hkgpIndexedMeshDefinitions::Edge)
// unsigned int hkgpCgoInternal::ICollapse::bind(int a1, int a2, int a3, int a4, int a5);
// [0x1689ac0] (57 bytes) hkgpCgoInternal::getRing(int,int,hkArray<hkgpCgoInternal::HTriangle,hkContainerHeapAllocator> &)const
// int hkgpCgoInternal::getRing(int a1, int a2, int a3, int *a4);
// [0x1689b00] (638 bytes) hkgpCgoInternal::getPlanes(int,int,hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// int hkgpCgoInternal::getPlanes( hkgpCgoInternal *this, int a2, int a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4);
// [0x168bc30] (8105 bytes) hkgpCgoInternal::load(hkGeometry *)
// int hkgpCgoInternal::load(hkgpCgoInternal *this, hkGeometry *a2);
// [0x168dbe0] (1027 bytes) hkgpCgoInternal::bake(void)
// void hkgpCgoInternal::bake(hkgpCgoInternal *this);
// [0x168dff0] (1718 bytes) hkgpCgoInternal::flipEdge(hkgpCgoInternal::EdgeInfo *)
// int hkgpCgoInternal::flipEdge(uint32_t *a1, int *a2);
// [0x168e810] (2179 bytes) hkgpCgoInternal::analyze(hkArray<hkgpCgo::ClusterData,hkContainerHeapAllocator> &)const
// int hkgpCgoInternal::analyze(int a1, int *a2);
// [0x168f6b0] (356 bytes) hkgpCgoInternal::getErrors(hkArray<float,hkContainerHeapAllocator> &)const
// int hkgpCgoInternal::getErrors(uint32_t *a1, hkMemoryAllocator *a2);
// [0x168f820] (2149 bytes) hkgpCgoInternal::collapseEdge(hkgpCgoInternal::EdgeInfo *)
// int hkgpCgoInternal::collapseEdge(int a1, int a2);
// [0x1690090] (981 bytes) hkgpCgoInternal::checkIntegrity(void)const
// int hkgpCgoInternal::checkIntegrity(hkgpCgoInternal *this);
