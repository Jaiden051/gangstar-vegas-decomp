#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpCompres.h
// Library: havok | Module: havok_physics_hkpCompres
// Binary Address Span: 0x16c1e70 .. 0x1ae5990 (55 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x16c1e70] (22 bytes) hkpCompressedMeshShape::Chunk::staticClass(void)
// void *hkpCompressedMeshShape::Chunk::staticClass();
// [0x16c1e90] (22 bytes) hkpCompressedMeshShape::BigTriangle::staticClass(void)
// void *hkpCompressedMeshShape::BigTriangle::staticClass();
// [0x16c1eb0] (22 bytes) hkpCompressedMeshShape::ConvexPiece::staticClass(void)
// void *hkpCompressedMeshShape::ConvexPiece::staticClass();
// [0x16c1ed0] (22 bytes) hkpCompressedMeshShape::staticClass(void)
// void *hkpCompressedMeshShape::staticClass();
// [0x16ffa10] (29 bytes) hkpCompressedMeshShape::getFirstKey(void)const
// int hkpCompressedMeshShape::getFirstKey(hkpCompressedMeshShape *this);
// [0x16ffa40] (12 bytes) hkpCompressedMeshShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpCompressedMeshShape::calcSizeForSpu();
// [0x16ffa50] (95 bytes) hkpCompressedMeshShape::setWeldingInfo(unsigned int,short)
// hkpCompressedMeshShape *hkpCompressedMeshShape::setWeldingInfo( hkpCompressedMeshShape *this, unsigned int a2, int16_t a3);
// [0x16ffab0] (245 bytes) hkpCompressedMeshShape::initWeldingInfo(hkpWeldingUtility::WeldingType)
// int hkpCompressedMeshShape::initWeldingInfo(int a1, int a2);
// [0x16ffbb0] (657 bytes) hkpCompressedMeshShape::getAabb(hkTransformf const&,float,hkAabb &)const
// const hkTransformf *hkpCompressedMeshShape::getAabb( hkpCompressedMeshShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x16ffe50] (1357 bytes) hkpCompressedMeshShape::~hkpCompressedMeshShape()
// void hkpCompressedMeshShape::~hkpCompressedMeshShape(hkpCompressedMeshShape *this);
// [0x17003b0] (1337 bytes) hkpCompressedMeshShape::~hkpCompressedMeshShape()
// void hkpCompressedMeshShape::~hkpCompressedMeshShape(hkpCompressedMeshShape *this);
// [0x1700900] (376 bytes) hkpCompressedMeshShape::hkpCompressedMeshShape(int,float)
// void hkpCompressedMeshShape::hkpCompressedMeshShape(hkpCompressedMeshShape *this, int a2, float a3);
// [0x1700a80] (108 bytes) hkpCompressedMeshShape::hkpCompressedMeshShape(hkFinishLoadedObjectFlag)
// void (**hkpCompressedMeshShape::hkpCompressedMeshShape( int a1, int a2))(hkpCompressedMeshShape *__hidden this);
// [0x1700af0] (249 bytes) hkpCompressedMeshShape::Chunk::getNextIndex(int,int &)const
// int hkpCompressedMeshShape::Chunk::getNextIndex(hkpCompressedMeshShape::Chunk *this, int a2, int *a3);
// [0x1700bf0] (653 bytes) hkpCompressedMeshShape::getNextKey(unsigned int)const
// int hkpCompressedMeshShape::getNextKey(hkpCompressedMeshShape *this, unsigned int a2);
// [0x1700e90] (485 bytes) hkpCompressedMeshShape::Chunk::getTriangle(int,int,int,float,hkVector4f &,hkVector4f &,hkVector4f &)const
// hkpCompressedMeshShape::Chunk *hkpCompressedMeshShape::Chunk::getTriangle( hkpCompressedMeshShape::Chunk *this, int a2, int a3, int a4, float a5, hkVector4f *a6, hkVector4f *a7, hkVector4f *a8);
// [0x1701080] (3316 bytes) hkpCompressedMeshShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// hkpConvexVerticesShape *hkpCompressedMeshShape::getChildShape( int a1, unsigned int a2, hkpConvexVerticesShape *a3);
// [0x1701d90] (889 bytes) hkpCompressedMeshShape::Chunk::getNumTriangles(void)const
// int hkpCompressedMeshShape::Chunk::getNumTriangles(hkpCompressedMeshShape::Chunk *this);
// [0x1702110] (191 bytes) hkpCompressedMeshShape::isValidShapeKey(unsigned int)
// int hkpCompressedMeshShape::isValidShapeKey(hkpCompressedMeshShape *this, unsigned int a2);
// [0x17021d0] (56 bytes) hkpCompressedMeshShape::setShapeKeyBitsPerIndex(int)
// hkpCompressedMeshShape *hkpCompressedMeshShape::setShapeKeyBitsPerIndex(hkpCompressedMeshShape *this, int a2);
// [0x1702210] (120 bytes) hkpCompressedMeshShape::Chunk::getTriangle(int,float,hkVector4f &,hkVector4f &,hkVector4f &)const
// hkpCompressedMeshShape::Chunk *hkpCompressedMeshShape::Chunk::getTriangle( hkpCompressedMeshShape::Chunk *this, int a2, float a3, hkVector4f *a4, hkVector4f *a5, hkVector4f *a6);
// [0x1702290] (454 bytes) hkpCompressedMeshShape::Chunk::getVertices(float,hkQsTransformf const&,hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// int hkpCompressedMeshShape::Chunk::getVertices( hkpCompressedMeshShape::Chunk *this, float a2, const hkQsTransformf *a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4);
// [0x1702460] (539 bytes) hkpCompressedMeshShape::getChunkAabb(hkpCompressedMeshShape::Chunk const&,hkAabb &)
// int hkpCompressedMeshShape::getChunkAabb( hkpCompressedMeshShape *this, const hkpCompressedMeshShape::Chunk *a2, hkAabb *a3);
// [0x1702680] (454 bytes) hkpCompressedMeshShape::ConvexPiece::getVertices(float,hkQsTransformf const&,hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// int hkpCompressedMeshShape::ConvexPiece::getVertices( hkpCompressedMeshShape::ConvexPiece *this, float a2, const hkQsTransformf *a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4);
// [0x1702850] (424 bytes) hkpCompressedMeshShape::getConvexPieceAabb(hkpCompressedMeshShape::ConvexPiece const&,hkAabb &)
// int hkpCompressedMeshShape::getConvexPieceAabb( hkpCompressedMeshShape *this, const hkpCompressedMeshShape::ConvexPiece *a2, hkAabb *a3);
// [0x1702a00] (218 bytes) hkpCompressedMeshShape::getMaterial(unsigned int)const
// int hkpCompressedMeshShape::getMaterial(hkpCompressedMeshShape *this, unsigned int a2);
// [0x1702ae0] (69 bytes) hkpCompressedMeshShape::getCollisionFilterInfo(unsigned int)const
// int hkpCompressedMeshShape::getCollisionFilterInfo(hkpCompressedMeshShape *this, unsigned int a2);
// [0x1adaca0] (1197 bytes) hkpCompressedMeshShapeBuilder::MappingTree::~MappingTree()
// void hkpCompressedMeshShapeBuilder::MappingTree::~MappingTree(hkpCompressedMeshShapeBuilder::MappingTree *this);
// [0x1adb150] (282 bytes) hkpCompressedMeshShapeBuilder::createMeshShape(float,hkpCompressedMeshShape::MaterialType,int)
// int hkpCompressedMeshShapeBuilder::createMeshShape(uint32_t *a1, int a2, char a3, int a4);
// [0x1adb270] (408 bytes) hkpCompressedMeshShapeBuilder::gatherStatistics(hkpCompressedMeshShape *)
// int hkpCompressedMeshShapeBuilder::gatherStatistics( hkpCompressedMeshShapeBuilder *this, hkpCompressedMeshShape *a2);
// [0x1adb410] (219 bytes) hkpCompressedMeshShapeBuilder::beginSubpart(hkpCompressedMeshShape *)
// int hkpCompressedMeshShapeBuilder::beginSubpart( hkpCompressedMeshShapeBuilder *this, hkpCompressedMeshShape *a2);
// [0x1adb4f0] (81 bytes) hkpCompressedMeshShapeBuilder::endSubpart(hkpCompressedMeshShape *)
// uint32_t *hkpCompressedMeshShapeBuilder::endSubpart( hkpCompressedMeshShapeBuilder *this, hkpCompressedMeshShape *a2);
// [0x1adb550] (2758 bytes) hkpCompressedMeshShapeBuilder::addInstance(int,hkMatrix4f const&,hkpCompressedMeshShape *,hkArray<unsigned int,hkContainerHeapAllocator> *)
// uint32_t *hkpCompressedMeshShapeBuilder::addInstance( hkpCompressedMeshShapeBuilder *this, int a2, const hkMatrix4f *a3, hkpCompressedMeshShape *a4, hkArray<unsigned int, hkContainerHeapAllocator> *a5);
// [0x1adc020] (539 bytes) hkpCompressedMeshShapeBuilder::appendGeometry(hkGeometry &,hkGeometry const&)
// int hkpCompressedMeshShapeBuilder::appendGeometry( hkpCompressedMeshShapeBuilder *this, hkGeometry *a2, const hkGeometry *a3);
// [0x1adc280] (565 bytes) hkpCompressedMeshShapeBuilder::snapToGrid(hkVector4f &,float)
// hkpCompressedMeshShapeBuilder *hkpCompressedMeshShapeBuilder::snapToGrid( hkpCompressedMeshShapeBuilder *this, hkVector4f *a2);
// [0x1adc4c0] (333 bytes) hkpCompressedMeshShapeBuilder::addMaterial(hkpCompressedMeshShape::Chunk &,int)
// int hkpCompressedMeshShapeBuilder::addMaterial( hkpCompressedMeshShapeBuilder *this, hkpCompressedMeshShape::Chunk *a2, int a3);
// [0x1adc610] (816 bytes) hkpCompressedMeshShapeBuilder::quantizeVertices(float,hkVector4f const&,hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<unsigned short,hkContainerHeapAllocator> &)
// const hkArray<hkVector4f, hkContainerHeapAllocator> *hkpCompressedMeshShapeBuilder::quantizeVertices( hkpCompressedMeshShapeBuilder *this, float *a2, const hkVector4f *a3, const hkArray<hkVector4f, hkContainerHeapAllocator> *a4);
// [0x1adc940] (3239 bytes) hkpCompressedMeshShapeBuilder::createChunk(hkGeometry const&,hkVector4f const&,hkpCompressedMeshShape::Chunk &,hkpCompressedMeshShapeBuilder::MappingTree *)
// int hkpCompressedMeshShapeBuilder::createChunk( hkpCompressedMeshShapeBuilder *this, const hkGeometry *a2, const hkVector4f *a3, hkpCompressedMeshShape::Chunk *a4, hkpCompressedMeshShapeBuilder::MappingTree *a5);
// [0x1add5f0] (171 bytes) hkpCompressedMeshShapeBuilder::splitCriterion(hkVector4f const&,hkVector4f const&,hkVector4f const&,float,int)
// int hkpCompressedMeshShapeBuilder::splitCriterion( hkpCompressedMeshShapeBuilder *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, float a5, int a6);
// [0x1adda40] (315 bytes) hkpCompressedMeshShapeBuilder::addLeftOverTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,int,hkpCompressedMeshShapeBuilder::TriangleMapping *)
// uint32_t *hkpCompressedMeshShapeBuilder::addLeftOverTriangle( uint32_t *a1, hkVector4f *a2, hkVector4f *a3, hkVector4f *a4, uint32_t *a5, uint32_t *a6);
// [0x1addb80] (1185 bytes) hkpCompressedMeshShapeBuilder::splitGeometry(hkGeometry const&,hkGeometry&,hkGeometry&,int,float,hkpCompressedMeshShapeBuilder::MappingTree *)
// int hkpCompressedMeshShapeBuilder::splitGeometry( hkpCompressedMeshShapeBuilder *this, const hkGeometry *a2, hkGeometry *a3, hkGeometry *a4, int a5, float a6, hkpCompressedMeshShapeBuilder::MappingTree *a7);
// [0x1ade030] (315 bytes) hkpCompressedMeshShapeBuilder::splitGeometry(hkGeometry const&,hkGeometry&,hkGeometry&,hkGeometry&)
// int hkpCompressedMeshShapeBuilder::splitGeometry( hkpCompressedMeshShapeBuilder *this, hkAabbUtil **a2, hkGeometry *a3, hkGeometry *a4);
// [0x1ade170] (11271 bytes) hkpCompressedMeshShapeBuilder::addChunk(hkGeometry const&,hkArray<hkpCompressedMeshShape::Chunk,hkContainerHeapAllocator> &,hkpCompressedMeshShapeBuilder::MappingTree *)
// int hkpCompressedMeshShapeBuilder::addChunk( hkpCompressedMeshShapeBuilder *a1, int a2, hkMemoryAllocator *a3, int *a4);
// [0x1ae0d80] (1417 bytes) hkpCompressedMeshShapeBuilder::chunkToGeometry(hkpCompressedMeshShape *,int,hkGeometry &)
// int hkpCompressedMeshShapeBuilder::chunkToGeometry( hkpCompressedMeshShapeBuilder *this, hkpCompressedMeshShape *a2, uint32_t *a3);
// [0x1ae1310] (401 bytes) hkpCompressedMeshShapeBuilder::convexPieceToGeometry(hkpCompressedMeshShape const*,int,hkGeometry &)
// int hkpCompressedMeshShapeBuilder::convexPieceToGeometry( hkpCompressedMeshShapeBuilder *this, const hkpCompressedMeshShape *a2, int *a3);
// [0x1ae14b0] (864 bytes) hkpCompressedMeshShapeBuilder::bigTrianglesToGeometry(hkpCompressedMeshShape const*,hkGeometry &)
// hkpCompressedMeshShapeBuilder *hkpCompressedMeshShapeBuilder::bigTrianglesToGeometry( hkpCompressedMeshShapeBuilder *this, const hkpCompressedMeshShape *a2);
// [0x1ae1810] (136 bytes) hkpCompressedMeshShapeBuilder::MappingTree::getKeys(hkArray<unsigned int,hkContainerHeapAllocator> &,int)
// hkpCompressedMeshShapeBuilder::MappingTree *hkpCompressedMeshShapeBuilder::MappingTree::getKeys( hkpCompressedMeshShapeBuilder::MappingTree *this, hkArray<unsigned int, hkContainerHeapAllocator> *a2, int a3);
// [0x1ae18a0] (584 bytes) hkpCompressedMeshShapeBuilder::addBigTriangles(hkpCompressedMeshShape *)
// int hkpCompressedMeshShapeBuilder::addBigTriangles( hkpCompressedMeshShapeBuilder *this, hkpCompressedMeshShape *a2);
// [0x1ae1af0] (76 bytes) hkpCompressedMeshShapeBuilder::snapGeometry(hkGeometry &,float)
// hkpCompressedMeshShapeBuilder *hkpCompressedMeshShapeBuilder::snapGeometry( hkpCompressedMeshShapeBuilder *this, hkGeometry *a2);
// [0x1ae1b40] (1585 bytes) hkpCompressedMeshShapeBuilder::filterGeometry(hkpCompressedMeshShapeBuilder::MappingTree *)
// int hkpCompressedMeshShapeBuilder::filterGeometry( hkpCompressedMeshShapeBuilder *this, hkpCompressedMeshShapeBuilder::MappingTree *a2);
// [0x1ae2630] (1623 bytes) hkpCompressedMeshShapeBuilder::snapGeometry(hkpCompressedMeshShapeBuilder::MappingTree *)
// int hkpCompressedMeshShapeBuilder::snapGeometry( hkpCompressedMeshShapeBuilder *this, hkpCompressedMeshShapeBuilder::MappingTree *a2);
// [0x1ae2c90] (8423 bytes) hkpCompressedMeshShapeBuilder::addGeometry(hkGeometry const&,hkMatrix4f const&,hkpCompressedMeshShape *)
// int hkpCompressedMeshShapeBuilder::addGeometry( hkpCompressedMeshShapeBuilder *this, const hkGeometry *a2, const hkMatrix4f *a3, hkpCompressedMeshShape *a4);
// [0x1ae4d80] (1610 bytes) hkpCompressedMeshShapeBuilder::createMeshFromGeometry(hkGeometry const&,float,hkpCompressedMeshShape::MaterialType)
// hkpCompressedMeshShape *hkpCompressedMeshShapeBuilder::createMeshFromGeometry(hkGeometry *a1, int a2, char a3);
// [0x1ae53d0] (1464 bytes) hkpCompressedMeshShapeBuilder::addConvexPiece(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkpCompressedMeshShape *)
// int hkpCompressedMeshShapeBuilder::addConvexPiece( hkpCompressedMeshShapeBuilder *this, hkAabbUtil **a2, hkpCompressedMeshShape *a3);
// [0x1ae5990] (254 bytes) hkpCompressedMeshShapeBuilder::addConvexPiece(hkGeometry const&,hkpCompressedMeshShape *)
// int hkpCompressedMeshShapeBuilder::addConvexPiece( hkpCompressedMeshShapeBuilder *this, hkAabbUtil **a2, hkpCompressedMeshShape *a3);
