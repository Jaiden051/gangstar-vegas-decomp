#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpConvexR.h
// Library: havok | Module: havok_physics_hkpConvexR
// Binary Address Span: 0x184bbe0 .. 0x1857da0 (40 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x184bbe0] (22 bytes) hkpConvexRadiusViewer::getProcessTag(void)
// int hkpConvexRadiusViewer::getProcessTag();
// [0x184bc10] (85 bytes) hkpConvexRadiusViewer::inactiveEntityMovedCallback(hkpEntity *)
// int hkpConvexRadiusViewer::inactiveEntityMovedCallback(hkpConvexRadiusViewer *this, hkpEntity *a2);
// [0x184bc80] (355 bytes) hkpConvexRadiusViewer::postSimulationCallback(hkpWorld *)
// int hkpConvexRadiusViewer::postSimulationCallback(hkpConvexRadiusViewer *this, hkpWorld *a2);
// [0x184be00] (66 bytes) hkpConvexRadiusViewer::registerViewer(void)
// int hkpConvexRadiusViewer::registerViewer();
// [0x184be50] (193 bytes) hkpConvexRadiusViewer::hkpConvexRadiusViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkpConvexRadiusViewer::hkpConvexRadiusViewer(uint32_t *a1, uint32_t *a2);
// [0x184bf20] (92 bytes) hkpConvexRadiusViewer::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// uint32_t *hkpConvexRadiusViewer::create(uint32_t *a1);
// [0x184bf80] (448 bytes) hkpConvexRadiusViewer::addWorld(hkpWorld *)
// hkpWorld *hkpConvexRadiusViewer::addWorld(hkpConvexRadiusViewer *this, hkpWorld *a2);
// [0x184c140] (85 bytes) hkpConvexRadiusViewer::init(void)
// int hkpConvexRadiusViewer::init(hkpConvexRadiusViewer *this);
// [0x184c1b0] (42 bytes) hkpConvexRadiusViewer::worldAddedCallback(hkpWorld *)
// hkpWorld *hkpConvexRadiusViewer::worldAddedCallback(hkpConvexRadiusViewer *this, hkpWorld *a2);
// [0x184c1f0] (125 bytes) hkpConvexRadiusViewer::removeAllGeometries(int)
// int hkpConvexRadiusViewer::removeAllGeometries(hkpConvexRadiusViewer *this, int a2);
// [0x184c270] (62 bytes) hkpConvexRadiusViewer::findWorld(hkpWorld const*)
// int hkpConvexRadiusViewer::findWorld(hkpConvexRadiusViewer *this, const hkpWorld *a2);
// [0x184c2b0] (203 bytes) hkpConvexRadiusViewer::entityRemovedCallback(hkpEntity *)
// int hkpConvexRadiusViewer::entityRemovedCallback(hkpConvexRadiusViewer *this, hkpEntity *a2);
// [0x184c390] (1260 bytes) hkpConvexRadiusViewer::entityAddedCallback(hkpEntity *)
// int hkpConvexRadiusViewer::entityAddedCallback( hkpConvexRadiusViewer *this, const hkpWorld **a2, int a3, int a4, int a5);
// [0x184c890] (225 bytes) hkpConvexRadiusViewer::removeWorld(int)
// int hkpConvexRadiusViewer::removeWorld(hkpConvexRadiusViewer *this, int a2);
// [0x184c980] (261 bytes) hkpConvexRadiusViewer::~hkpConvexRadiusViewer()
// void hkpConvexRadiusViewer::~hkpConvexRadiusViewer(hkpConvexRadiusViewer *this);
// [0x184cad0] (93 bytes) hkpConvexRadiusViewer::~hkpConvexRadiusViewer()
// void hkpConvexRadiusViewer::~hkpConvexRadiusViewer(hkpConvexRadiusViewer *this);
// [0x184cb70] (60 bytes) hkpConvexRadiusViewer::worldRemovedCallback(hkpWorld *)
// int hkpConvexRadiusViewer::worldRemovedCallback(hkpConvexRadiusViewer *this, hkpWorld *a2);
// [0x184cbc0] (19 bytes) hkpConvexRadiusViewer::setMinimumVisibleRadius(float)
// int hkpConvexRadiusViewer::setMinimumVisibleRadius(hkpConvexRadiusViewer *this, float a2);
// [0x1854430] (29 bytes) hkpConvexRadiusBuilder::~hkpConvexRadiusBuilder()
// void hkpConvexRadiusBuilder::~hkpConvexRadiusBuilder(hkpConvexRadiusBuilder *this);
// [0x1854500] (96 bytes) hkpConvexRadiusBuilder::~hkpConvexRadiusBuilder()
// void hkpConvexRadiusBuilder::~hkpConvexRadiusBuilder(hkpConvexRadiusBuilder *this);
// [0x1854560] (110 bytes) hkpConvexRadiusBuilder::getInitialContinueData(hkReferencedObject const*)
// uint32_t *hkpConvexRadiusBuilder::getInitialContinueData();
// [0x1854820] (15 bytes) hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::hkpConvexRadiusBuilderEnvironment(void)
// struct hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment *hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment::hkpConvexRadiusBuilderEnvironment( hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment *this);
// [0x1854830] (54 bytes) hkpConvexRadiusBuilder::hkpConvexRadiusBuilder(hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment const&)
// void hkpConvexRadiusBuilder::hkpConvexRadiusBuilder( hkpConvexRadiusBuilder *this, const hkpConvexRadiusBuilder::hkpConvexRadiusBuilderEnvironment *a2);
// [0x1854870] (1137 bytes) hkpConvexRadiusBuilder::buildShapeDisplay_Cylinder(hkpCylinderShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// 0x1854870 hkpConvexRadiusBuilder::buildShapeDisplay_Cylinder(hkpCylinderShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// [0x1854cf0] (355 bytes) hkpConvexRadiusBuilder::buildShapeDisplay_Box(hkpBoxShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// __m128 *hkpConvexRadiusBuilder::buildShapeDisplay_Box(int a1, __m128 *a2, uint32_t *a3, __m128 **a4, __m128 *a5);
// [0x1854e60] (159 bytes) hkpConvexRadiusBuilder::buildShapeDisplay_UserShapes(hkpShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// uint8_t *hkpConvexRadiusBuilder::buildShapeDisplay_UserShapes( uint8_t *a1, int a2, int a3, int a4, int a5);
// [0x1854f00] (266 bytes) hkpConvexRadiusBuilder::getCurrentRawGeometry(hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpConvexRadiusBuilder::getCurrentRawGeometry(int a1, uint32_t *a2);
// [0x1855010] (3655 bytes) hkpConvexRadiusBuilder::buildShapeDisplay_Triangle(hkpTriangleShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// int hkpConvexRadiusBuilder::buildShapeDisplay_Triangle(int a1, int a2, hkTransformf *a3, uint32_t *a4, float *a5);
// [0x1855e60] (2052 bytes) hkpConvexRadiusBuilder::buildShapeDisplay_ConvexVertices(hkpConvexVerticesShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpConvexRadiusBuilder::buildShapeDisplay_ConvexVertices( int a1, hkpConvexVerticesShape *a2, hkTransformf *a3, hkMemoryAllocator *a4);
// [0x1856670] (16 bytes) hkpConvexRadiusBuilder::resetCurrentRawGeometry(void)
// hkpConvexRadiusBuilder *hkpConvexRadiusBuilder::resetCurrentRawGeometry(hkpConvexRadiusBuilder *this);
// [0x1856760] (1122 bytes) hkpConvexRadiusBuilder::buildShapeDisplay_ConvexTransform(hkpConvexTransformShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpConvexRadiusBuilder::buildShapeDisplay_ConvexTransform( int a1, int a2, hkTransformf *a3, hkMemoryAllocator *a4);
// [0x1856bd0] (828 bytes) hkpConvexRadiusBuilder::buildShapeDisplay(hkpShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// __m128 *hkpConvexRadiusBuilder::buildShapeDisplay( int a1, hkpConvexVerticesShape *a2, hkTransformf *a3, __m128 **a4, __m128 *a5);
// [0x1856f10] (241 bytes) hkpConvexRadiusBuilder::buildDisplayGeometries(hkpShape const*,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// __m128 *hkpConvexRadiusBuilder::buildDisplayGeometries( hkpConvexRadiusBuilder *a1, hkpConvexVerticesShape *a2, int a3);
// [0x1857010] (50 bytes) hkpConvexRadiusBuilder::buildDisplayGeometries(hkReferencedObject const*,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// __m128 *hkpConvexRadiusBuilder::buildDisplayGeometries( hkpConvexRadiusBuilder *a1, hkpConvexVerticesShape *a2, int a3);
// [0x1857050] (148 bytes) hkpConvexRadiusBuilder::buildShapeDisplay_ShapeContainer(hkpShapeContainer const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// 0x1857050 hkpConvexRadiusBuilder::buildShapeDisplay_ShapeContainer(hkpShapeContainer const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// [0x1857190] (50 bytes) hkpConvexRadiusBuilder::buildShapeDisplay_ConvexPiece(hkpConvexPieceShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// __m128 *hkpConvexRadiusBuilder::buildShapeDisplay_ConvexPiece(int a1, int a2, hkTransformf *a3, __m128 **a4);
// [0x18571d0] (1397 bytes) hkpConvexRadiusBuilder::buildPartialShapeDisplay_ConvexTransform(hkpConvexTransformShape const*,hkTransformf const&,int,int &,hkpShapeContinueData *,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpConvexRadiusBuilder::buildPartialShapeDisplay_ConvexTransform( int a1, int a2, hkTransformf *a3, int a4, int a5, int a6, hkMemoryAllocator *a7);
// [0x1857750] (1192 bytes) hkpConvexRadiusBuilder::buildPartialShapeDisplay(hkpShape const*,hkTransformf const&,int,int &,hkpShapeContinueData *,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// uint8_t *hkpConvexRadiusBuilder::buildPartialShapeDisplay( uint8_t *a1, int a2, hkpConvexVerticesShape *a3, hkTransformf *a4, int a5, uint32_t *a6, int a7, __m128 **a8, __m128 *a9);
// [0x1857c00] (405 bytes) hkpConvexRadiusBuilder::buildPartialDisplayGeometries(hkReferencedObject const*,int &,hkReferencedObject*,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// uint8_t *hkpConvexRadiusBuilder::buildPartialDisplayGeometries( uint8_t *a1, hkpConvexRadiusBuilder *a2, hkpConvexVerticesShape *a3, uint32_t *a4, int a5, int a6);
// [0x1857da0] (564 bytes) hkpConvexRadiusBuilder::buildPartialShapeDisplay_ShapeContainer(hkpShapeContainer const*,hkTransformf const&,int,int &,hkpShapeContinueData *,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// uint8_t *hkpConvexRadiusBuilder::buildPartialShapeDisplay_ShapeContainer( uint8_t *a1, int a2, int a3, hkTransformf *a4, int a5, int *a6, uint32_t *a7, __m128 **a8, __m128 *a9);
