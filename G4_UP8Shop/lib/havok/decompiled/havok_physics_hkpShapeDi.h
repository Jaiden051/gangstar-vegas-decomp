#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpShapeDi.h
// Library: havok | Module: havok_physics_hkpShapeDi
// Binary Address Span: 0x181b5c0 .. 0x183ff20 (68 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x181b5c0] (29 bytes) hkpShapeDisplayBuilder::~hkpShapeDisplayBuilder()
// void hkpShapeDisplayBuilder::~hkpShapeDisplayBuilder(hkpShapeDisplayBuilder *this);
// [0x181b690] (96 bytes) hkpShapeDisplayBuilder::~hkpShapeDisplayBuilder()
// void hkpShapeDisplayBuilder::~hkpShapeDisplayBuilder(hkpShapeDisplayBuilder *this);
// [0x181b750] (110 bytes) hkpShapeDisplayBuilder::getInitialContinueData(hkReferencedObject const*)
// uint32_t *hkpShapeDisplayBuilder::getInitialContinueData();
// [0x181b9b0] (15 bytes) hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::hkpShapeDisplayBuilderEnvironment(void)
// struct hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment *hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::hkpShapeDisplayBuilderEnvironment( hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment *this);
// [0x181b9c0] (50 bytes) hkpShapeDisplayBuilder::hkpShapeDisplayBuilder(hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment const&)
// void hkpShapeDisplayBuilder::hkpShapeDisplayBuilder( hkpShapeDisplayBuilder *this, const hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment *a2);
// [0x181ba00] (331 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_Sphere(hkpSphereShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// int hkpShapeDisplayBuilder::buildShapeDisplay_Sphere(int a1, int a2, uint32_t *a3, int a4, float *a5);
// [0x181bb50] (328 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_MultiSphere(hkpMultiSphereShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplay_MultiSphere(int a1, int a2, int a3, uint32_t *a4);
// [0x181bca0] (527 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_Capsule(hkpCapsuleShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// 0x181bca0 hkpShapeDisplayBuilder::buildShapeDisplay_Capsule(hkpCapsuleShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// [0x181beb0] (543 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_Cylinder(hkpCylinderShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// 0x181beb0 hkpShapeDisplayBuilder::buildShapeDisplay_Cylinder(hkpCylinderShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// [0x181c0d0] (315 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_Box(hkpBoxShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// int hkpShapeDisplayBuilder::buildShapeDisplay_Box(int a1, __m128 *a2, uint32_t *a3, int a4, __m128 *a5);
// [0x181c210] (1025 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_ConvexVertices(hkpConvexVerticesShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// int hkpShapeDisplayBuilder::buildShapeDisplay_ConvexVertices(int a1, int *a2, int a3, int a4, int a5);
// [0x181c620] (731 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_ConvexPiece(hkpConvexPieceShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplay_ConvexPiece( int a1, uint32_t *a2, hkTransformf *a3, hkMemoryAllocator *a4);
// [0x181c900] (159 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_UserShapes(hkpShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// uint8_t *hkpShapeDisplayBuilder::buildShapeDisplay_UserShapes( uint8_t *a1, int a2, int a3, int a4, int a5);
// [0x181c9a0] (430 bytes) hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiSphere(hkpMultiSphereShape const*,hkTransformf const&,int,int &,hkpShapeContinueData *,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// char *hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiSphere( char *a1, int a2, int a3, int a4, int a5, int *a6, int a7, hkMemoryAllocator *a8);
// [0x181cb50] (266 bytes) hkpShapeDisplayBuilder::getCurrentRawGeometry(hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::getCurrentRawGeometry(int a1, uint32_t *a2);
// [0x181cc60] (1566 bytes) hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsCompress(hkpExtendedMeshShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// void hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsCompress( int a1, int a2, hkTransformf *a3, uint32_t *a4);
// [0x181d280] (1172 bytes) hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsStorage(hkpStorageExtendedMeshShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// uint32_t *hkpShapeDisplayBuilder::buildShapeDisplayTriangleSubPartsStorage( int a1, int a2, hkTransformf *a3, uint32_t *a4);
// [0x181d720] (825 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_SampledHeightField(hkpSampledHeightFieldShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplay_SampledHeightField( int a1, float *a2, hkTransformf *a3, uint32_t *a4);
// [0x181da60] (740 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_MultiRay(hkpMultiRayShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplay_MultiRay(int a1, int a2, hkTransformf *a3, uint32_t *a4);
// [0x181dd50] (1158 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_Triangle(hkpTriangleShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// int hkpShapeDisplayBuilder::buildShapeDisplay_Triangle( int a1, float *a2, hkTransformf *a3, uint32_t *a4, int *a5);
// [0x181e1e0] (857 bytes) hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiRay(hkpMultiRayShape const*,hkTransformf const&,int,int &,hkpShapeContinueData *,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// char *hkpShapeDisplayBuilder::buildPartialShapeDisplay_MultiRay( char *a1, int a2, int a3, hkTransformf *a4, int a5, int *a6, int a7, uint32_t *a8);
// [0x181e540] (1449 bytes) hkpShapeDisplayBuilder::buildPartialShapeDisplay_SampledHeightField(hkpSampledHeightFieldShape const*,hkTransformf const&,int,int &,hkpShapeContinueData *,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// uint8_t *hkpShapeDisplayBuilder::buildPartialShapeDisplay_SampledHeightField( uint8_t *a1, int a2, float *a3, hkTransformf *a4, int a5, int *a6, int a7, uint32_t *a8);
// [0x181eaf0] (396 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_BvCompressedMeshShape(hkpBvCompressedMeshShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// int hkpShapeDisplayBuilder::buildShapeDisplay_BvCompressedMeshShape( int a1, hkpBvCompressedMeshShape *a2, hkTransformf *a3, uint32_t *a4, uint32_t *a5);
// [0x181ec80] (2776 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_CompressedMeshShape(hkpCompressedMeshShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplay_CompressedMeshShape( int a1, hkpCompressedMeshShapeBuilder *a2, hkTransformf *a3, uint32_t *a4);
// [0x181f760] (2365 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_Plane(hkpPlaneShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplay_Plane(int a1, unsigned int *a2, hkTransformf *a3, uint32_t *a4);
// [0x18200a0] (1608 bytes) hkpShapeDisplayBuilder::buildPartialShapeDisplay(hkpShape const*,hkTransformf const&,int,int &,hkpShapeContinueData *,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// uint8_t *hkpShapeDisplayBuilder::buildPartialShapeDisplay( uint8_t *a1, int a2, float *a3, hkTransformf *a4, int a5, int *a6, int a7, hkMemoryAllocator *a8, __m128 *a9);
// [0x18206f0] (564 bytes) hkpShapeDisplayBuilder::buildPartialShapeDisplay_ShapeContainer(hkpShapeContainer const*,hkTransformf const&,int,int &,hkpShapeContinueData *,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// uint8_t *hkpShapeDisplayBuilder::buildPartialShapeDisplay_ShapeContainer( uint8_t *a1, int a2, int a3, hkTransformf *a4, int a5, int *a6, uint32_t *a7, hkMemoryAllocator *a8, __m128 *a9);
// [0x1820930] (16 bytes) hkpShapeDisplayBuilder::resetCurrentRawGeometry(void)
// hkpShapeDisplayBuilder *hkpShapeDisplayBuilder::resetCurrentRawGeometry(hkpShapeDisplayBuilder *this);
// [0x1820940] (405 bytes) hkpShapeDisplayBuilder::buildPartialDisplayGeometries(hkReferencedObject const*,int &,hkReferencedObject*,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// uint8_t *hkpShapeDisplayBuilder::buildPartialDisplayGeometries( uint8_t *a1, hkpShapeDisplayBuilder *a2, float *a3, int *a4, int a5, hkMemoryAllocator *a6);
// [0x1820bc0] (2190 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_ShapeUnregistered(hkpShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplay_ShapeUnregistered( int a1, int a2, int a3, int a4, int a5, hkMemoryAllocator *a6, int a7, int a8, int a9, int a10, int a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19, float a20, float a21, float a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35);
// [0x1821950] (128 bytes) hkpShapeDisplayBuilder::buildShapeDisplay(hkpShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// uint8_t *hkpShapeDisplayBuilder::buildShapeDisplay( int a1, int a2, hkTransformf *a3, hkMemoryAllocator *a4, __m128 *a5);
// [0x18219d0] (241 bytes) hkpShapeDisplayBuilder::buildDisplayGeometries(hkpShape const*,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// uint8_t *hkpShapeDisplayBuilder::buildDisplayGeometries( hkpShapeDisplayBuilder *a1, int a2, hkMemoryAllocator *a3);
// [0x1821ad0] (255 bytes) hkpShapeDisplayBuilder::addObjectToDebugDisplay(hkpShape const*,hkTransformf &,unsigned long)
// int hkpShapeDisplayBuilder::addObjectToDebugDisplay( hkpShapeDisplayBuilder *this, const hkpShape *a2, hkTransformf *a3);
// [0x1821bd0] (50 bytes) hkpShapeDisplayBuilder::buildDisplayGeometries(hkReferencedObject const*,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// uint8_t *hkpShapeDisplayBuilder::buildDisplayGeometries( hkpShapeDisplayBuilder *a1, int a2, hkMemoryAllocator *a3);
// [0x1821c10] (288 bytes) hkpShapeDisplayBuilder::buildShapeDisplayShapeSubParts(hkpExtendedMeshShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplayShapeSubParts( int a1, int a2, hkTransformf *a3, hkMemoryAllocator *a4);
// [0x1821d30] (148 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_ShapeContainer(hkpShapeContainer const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// 0x1821d30 hkpShapeDisplayBuilder::buildShapeDisplay_ShapeContainer(hkpShapeContainer const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// [0x1821dd0] (162 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_ExtendedMeshShape(hkpExtendedMeshShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplay_ExtendedMeshShape( int a1, int a2, hkTransformf *a3, hkMemoryAllocator *a4);
// [0x1821e80] (122 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_ListShape(hkpListShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// int hkpShapeDisplayBuilder::buildShapeDisplay_ListShape( int a1, uint32_t *a2, hkTransformf *a3, hkMemoryAllocator *a4);
// [0x1821f00] (1232 bytes) hkpShapeDisplayBuilder::buildShapeDisplay_StaticCompound(hkpStaticCompoundShape const*,hkTransformf const&,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &,hkVector4f const*)
// int hkpShapeDisplayBuilder::buildShapeDisplay_StaticCompound( int a1, int a2, hkTransformf *a3, hkMemoryAllocator *a4, float *a5);
// [0x183dd20] (12 bytes) hkpShapeDisplayViewer::getProcessTag(void)
// int hkpShapeDisplayViewer::getProcessTag(hkpShapeDisplayViewer *this);
// [0x183df50] (45 bytes) hkpShapeDisplayViewer::entityShapeSetCallback(hkpEntity *)
// int hkpShapeDisplayViewer::entityShapeSetCallback(hkpShapeDisplayViewer *this, hkpEntity *a2);
// [0x183df90] (36 bytes) hkpShapeDisplayViewer::synchronizeTransforms(hkpWorld *)
// int hkpShapeDisplayViewer::synchronizeTransforms(hkpShapeDisplayViewer *this, hkpWorld *a2);
// [0x183dfc0] (84 bytes) hkpShapeDisplayViewer::isTriggerVolume(hkpEntity *)
// hkpShapeDisplayViewer *hkpShapeDisplayViewer::isTriggerVolume(hkpShapeDisplayViewer *this, hkpEntity *a2);
// [0x183e020] (89 bytes) hkpShapeDisplayViewer::isShape(hkpEntity *)
// hkpShapeDisplayViewer *hkpShapeDisplayViewer::isShape(hkpShapeDisplayViewer *this, hkpEntity *a2);
// [0x183e080] (152 bytes) hkpShapeDisplayViewer::postSimulationCallback(hkpWorld *)
// int hkpShapeDisplayViewer::postSimulationCallback(hkpShapeDisplayViewer *this, hkpWorld *a2);
// [0x183e130] (191 bytes) hkpShapeDisplayViewer::inactiveEntityMovedCallback(hkpEntity *)
// int hkpShapeDisplayViewer::inactiveEntityMovedCallback(hkpShapeDisplayViewer *this, hkpEntity *a2);
// [0x183e200] (448 bytes) hkpShapeDisplayViewer::synchronizeTransforms(hkDebugDisplayHandler *,hkpWorld *)
// int hkpShapeDisplayViewer::synchronizeTransforms( hkpShapeDisplayViewer *this, hkDebugDisplayHandler *a2, hkpWorld *a3);
// [0x183e3c0] (106 bytes) hkpShapeDisplayViewer::registerViewer(void)
// int hkpShapeDisplayViewer::registerViewer();
// [0x183e430] (434 bytes) hkpShapeDisplayViewer::hkpShapeDisplayViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&,int,hkBool (*)(hkpEntity *))
// int hkpShapeDisplayViewer::hkpShapeDisplayViewer(int a1, uint32_t *a2, int a3, int a4);
// [0x183e5f0] (116 bytes) hkpShapeDisplayViewer::createShapeViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkpShapeDisplayViewer::createShapeViewer(uint32_t *a1);
// [0x183e670] (116 bytes) hkpShapeDisplayViewer::createTriggerVolumeViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkpShapeDisplayViewer::createTriggerVolumeViewer(uint32_t *a1);
// [0x183e6f0] (448 bytes) hkpShapeDisplayViewer::addWorld(hkpWorld *)
// hkpWorld *hkpShapeDisplayViewer::addWorld(hkpShapeDisplayViewer *this, hkpWorld *a2);
// [0x183e8b0] (85 bytes) hkpShapeDisplayViewer::init(void)
// int hkpShapeDisplayViewer::init(hkpShapeDisplayViewer *this);
// [0x183e920] (42 bytes) hkpShapeDisplayViewer::worldAddedCallback(hkpWorld *)
// hkpWorld *hkpShapeDisplayViewer::worldAddedCallback(hkpShapeDisplayViewer *this, hkpWorld *a2);
// [0x183e960] (14 bytes) hkpShapeDisplayViewer::setInstancingEnabled(bool)
// int hkpShapeDisplayViewer::setInstancingEnabled(hkpShapeDisplayViewer *this, int a2);
// [0x183e970] (14 bytes) hkpShapeDisplayViewer::setAutoColorMode(bool)
// int hkpShapeDisplayViewer::setAutoColorMode(hkpShapeDisplayViewer *this, int a2);
// [0x183e980] (14 bytes) hkpShapeDisplayViewer::setDisplayBodyCachingEnabled(bool)
// int hkpShapeDisplayViewer::setDisplayBodyCachingEnabled(hkpShapeDisplayViewer *this, int a2);
// [0x183e990] (14 bytes) hkpShapeDisplayViewer::setDisplayBodyCreateEnabled(bool)
// int hkpShapeDisplayViewer::setDisplayBodyCreateEnabled(hkpShapeDisplayViewer *this, int a2);
// [0x183e9a0] (14 bytes) hkpShapeDisplayViewer::setAutoGeometryCreation(bool)
// int hkpShapeDisplayViewer::setAutoGeometryCreation(hkpShapeDisplayViewer *this, int a2);
// [0x183e9b0] (37 bytes) hkpShapeDisplayViewer::clearCache(void)
// int hkpShapeDisplayViewer::clearCache(hkpShapeDisplayViewer *this);
// [0x183e9e0] (131 bytes) hkpShapeDisplayViewer::removeAllGeometries(int)
// int hkpShapeDisplayViewer::removeAllGeometries(hkpShapeDisplayViewer *this, int a2);
// [0x183ea70] (62 bytes) hkpShapeDisplayViewer::findWorld(hkpWorld const*)
// int hkpShapeDisplayViewer::findWorld(hkpShapeDisplayViewer *this, const hkpWorld *a2);
// [0x183eab0] (563 bytes) hkpShapeDisplayViewer::entityRemovedCallback(hkpEntity *)
// int hkpShapeDisplayViewer::entityRemovedCallback(hkpShapeDisplayViewer *this, hkpEntity *a2);
// [0x183ed00] (3815 bytes) hkpShapeDisplayViewer::entityAddedCallback(hkpEntity *)
// int hkpShapeDisplayViewer::entityAddedCallback( hkpShapeDisplayViewer *this, hkpEntity *a2, unsigned int a3, uint64_t *a4, int a5);
// [0x183fc00] (225 bytes) hkpShapeDisplayViewer::removeWorld(int)
// int hkpShapeDisplayViewer::removeWorld(hkpShapeDisplayViewer *this, int a2);
// [0x183fcf0] (333 bytes) hkpShapeDisplayViewer::~hkpShapeDisplayViewer()
// void hkpShapeDisplayViewer::~hkpShapeDisplayViewer(hkpShapeDisplayViewer *this);
// [0x183fe80] (93 bytes) hkpShapeDisplayViewer::~hkpShapeDisplayViewer()
// void hkpShapeDisplayViewer::~hkpShapeDisplayViewer(hkpShapeDisplayViewer *this);
// [0x183ff20] (60 bytes) hkpShapeDisplayViewer::worldRemovedCallback(hkpWorld *)
// int hkpShapeDisplayViewer::worldRemovedCallback(hkpShapeDisplayViewer *this, hkpWorld *a2);
