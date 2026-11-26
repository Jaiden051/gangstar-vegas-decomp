#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpExtende.h
// Library: havok | Module: havok_physics_hkpExtende
// Binary Address Span: 0x169b3a0 .. 0x1775b60 (52 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x169b3a0] (22 bytes) hkpExtendedMeshShape::Subpart::staticClass(void)
// void *hkpExtendedMeshShape::Subpart::staticClass();
// [0x169b3c0] (22 bytes) hkpExtendedMeshShape::TrianglesSubpart::staticClass(void)
// void *hkpExtendedMeshShape::TrianglesSubpart::staticClass();
// [0x169b3e0] (22 bytes) hkpExtendedMeshShape::ShapesSubpart::staticClass(void)
// void *hkpExtendedMeshShape::ShapesSubpart::staticClass();
// [0x169b400] (22 bytes) hkpExtendedMeshShape::staticClass(void)
// void *hkpExtendedMeshShape::staticClass();
// [0x16e4b90] (540 bytes) hkpExtendedMeshShape::getAabb(hkTransformf const&,float,hkAabb &)const
// const hkTransformf *hkpExtendedMeshShape::getAabb( hkpExtendedMeshShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x16e4db0] (192 bytes) hkpExtendedMeshShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpExtendedMeshShape::calcSizeForSpu(int a1, int a2);
// [0x16e4e70] (64 bytes) hkpExtendedMeshShape::getNumChildShapes(void)const
// int hkpExtendedMeshShape::getNumChildShapes(hkpExtendedMeshShape *this);
// [0x16e4ec0] (170 bytes) hkpExtendedMeshShape::getFirstKey(void)const
// int hkpExtendedMeshShape::getFirstKey(hkpExtendedMeshShape *this);
// [0x16e4f80] (399 bytes) hkpExtendedMeshShape::getNextKey(unsigned int)const
// int hkpExtendedMeshShape::getNextKey(hkpExtendedMeshShape *this, unsigned int a2);
// [0x16e5120] (412 bytes) hkpExtendedMeshShape::setWeldingInfo(unsigned int,short)
// unsigned int hkpExtendedMeshShape::setWeldingInfo(hkpExtendedMeshShape *this, int a2, unsigned int a3);
// [0x16e52c0] (422 bytes) hkpExtendedMeshShape::initWeldingInfo(hkpWeldingUtility::WeldingType)
// int hkpExtendedMeshShape::initWeldingInfo(int a1, int a2);
// [0x16e5470] (2546 bytes) hkpExtendedMeshShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// int32_t hkpExtendedMeshShape::getChildShape(int a1, int a2, int32_t a3);
// [0x16e5e80] (474 bytes) hkpExtendedMeshShape::hkpExtendedMeshShape(float,int)
// void hkpExtendedMeshShape::hkpExtendedMeshShape(hkpExtendedMeshShape *this, float a2, int a3);
// [0x16e6060] (210 bytes) hkpExtendedMeshShape::_getNumChildShapesInTrianglesSubpart(hkpExtendedMeshShape::TrianglesSubpart const&,int)const
// int hkpExtendedMeshShape::_getNumChildShapesInTrianglesSubpart( hkpExtendedMeshShape *this, const hkpExtendedMeshShape::TrianglesSubpart *a2, int a3);
// [0x16e6140] (12 bytes) hkpExtendedMeshShape::_getNumChildShapesInShapesSubpart(hkpExtendedMeshShape::ShapesSubpart const&)const
// int hkpExtendedMeshShape::_getNumChildShapesInShapesSubpart( hkpExtendedMeshShape *this, const hkpExtendedMeshShape::ShapesSubpart *a2);
// [0x16e6150] (158 bytes) hkpExtendedMeshShape::getMeshMaterial(unsigned int)const
// int hkpExtendedMeshShape::getMeshMaterial(hkpExtendedMeshShape *this, signed int a2);
// [0x16e61f0] (69 bytes) hkpExtendedMeshShape::getCollisionFilterInfo(unsigned int)const
// int hkpExtendedMeshShape::getCollisionFilterInfo(hkpExtendedMeshShape *this, unsigned int a2);
// [0x16e6250] (1857 bytes) hkpExtendedMeshShape::calcAabbExtents(hkpExtendedMeshShape::TrianglesSubpart &,hkAabb &)
// void *hkpExtendedMeshShape::calcAabbExtents( hkpExtendedMeshShape *this, hkpExtendedMeshShape::TrianglesSubpart *a2);
// [0x16e69a0] (384 bytes) hkpExtendedMeshShape::calcAabbExtents(hkpExtendedMeshShape::ShapesSubpart const&,hkAabb &)
// float *hkpExtendedMeshShape::calcAabbExtents( hkpExtendedMeshShape *this, const hkpExtendedMeshShape::ShapesSubpart *a2);
// [0x16e6b20] (891 bytes) hkpExtendedMeshShape::recalcAabbExtents(void)
// void *hkpExtendedMeshShape::recalcAabbExtents(hkpExtendedMeshShape *this);
// [0x16e6ea0] (1578 bytes) hkpExtendedMeshShape::hkpExtendedMeshShape(hkpMeshShape const*)
// void hkpExtendedMeshShape::hkpExtendedMeshShape(hkpExtendedMeshShape *this, const hkpMeshShape *a2);
// [0x16e74d0] (9 bytes) hkpExtendedMeshShape::assertTrianglesSubpartValidity(hkpExtendedMeshShape::TrianglesSubpart const&)
// void hkpExtendedMeshShape::assertTrianglesSubpartValidity();
// [0x16e74e0] (9 bytes) hkpExtendedMeshShape::assertShapesSubpartValidity(hkpExtendedMeshShape::ShapesSubpart const&)
// void hkpExtendedMeshShape::assertShapesSubpartValidity();
// [0x16e74f0] (222 bytes) hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(hkFinishLoadedObjectFlag)
// int hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(float *a1, int a2);
// [0x16e75d0] (691 bytes) hkpExtendedMeshShape::hkpExtendedMeshShape(hkFinishLoadedObjectFlag)
// int hkpExtendedMeshShape::hkpExtendedMeshShape(__m128i *a1, int a2);
// [0x16e7890] (590 bytes) hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(hkpConvexShape const* const*,int,hkVector4f const&)
// hkpExtendedMeshShape::ShapesSubpart *hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart( hkpExtendedMeshShape::ShapesSubpart *this, const hkpConvexShape *const *a2, int a3, const hkVector4f *a4);
// [0x16e7ae0] (640 bytes) hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(hkpConvexShape const* const*,int,hkTransformf const&)
// int hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart( hkpExtendedMeshShape::ShapesSubpart *this, const hkpConvexShape *const *a2, int a3, const hkTransformf *a4);
// [0x16e7d60] (205 bytes) hkpExtendedMeshShape::ShapesSubpart::~ShapesSubpart()
// void hkpExtendedMeshShape::ShapesSubpart::~ShapesSubpart(hkpExtendedMeshShape::ShapesSubpart *this);
// [0x16e7e30] (359 bytes) hkpExtendedMeshShape::~hkpExtendedMeshShape()
// void hkpExtendedMeshShape::~hkpExtendedMeshShape(hkpExtendedMeshShape *this);
// [0x16e7fb0] (93 bytes) hkpExtendedMeshShape::~hkpExtendedMeshShape()
// void hkpExtendedMeshShape::~hkpExtendedMeshShape(hkpExtendedMeshShape *this);
// [0x16e8020] (197 bytes) hkpExtendedMeshShape::expandOneTriangleSubparts(void)
// int hkpExtendedMeshShape::expandOneTriangleSubparts(hkpExtendedMeshShape *this);
// [0x16e80f0] (814 bytes) hkpExtendedMeshShape::addTrianglesSubpart(hkpExtendedMeshShape::TrianglesSubpart const&)
// int hkpExtendedMeshShape::addTrianglesSubpart( hkpExtendedMeshShape *this, const hkpExtendedMeshShape::TrianglesSubpart *a2);
// [0x16e8420] (212 bytes) hkpExtendedMeshShape::expandOneShapesSubparts(void)
// int hkpExtendedMeshShape::expandOneShapesSubparts(hkpExtendedMeshShape *this);
// [0x16e8500] (1182 bytes) hkpExtendedMeshShape::addShapesSubpart(hkpExtendedMeshShape::ShapesSubpart const&)
// int hkpExtendedMeshShape::addShapesSubpart( hkpExtendedMeshShape *this, const hkpExtendedMeshShape::ShapesSubpart *a2);
// [0x16e89a0] (9 bytes) hkpExtendedMeshShape::freeTriangleSubparts(void)
// void hkpExtendedMeshShape::freeTriangleSubparts();
// [0x16e89b0] (9 bytes) hkpExtendedMeshShape::freeShapesSubparts(void)
// void hkpExtendedMeshShape::freeShapesSubparts();
// [0x1763770] (22 bytes) hkpExtendedMeshShapeBreakableMaterial::staticClass(void)
// void *hkpExtendedMeshShapeBreakableMaterial::staticClass();
// [0x17753f0] (22 bytes) hkpExtendedMeshShapeBreakableMaterial::getClassType(void)const
// void *hkpExtendedMeshShapeBreakableMaterial::getClassType();
// [0x1775410] (16 bytes) hkpExtendedMeshShapeBreakableMaterial::setDefaultMapping(void)
// int hkpExtendedMeshShapeBreakableMaterial::setDefaultMapping(hkpExtendedMeshShapeBreakableMaterial *this);
// [0x1775420] (79 bytes) hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndex(hkcdShape const*,unsigned int)const
// int hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndex( hkpExtendedMeshShapeBreakableMaterial *this, const hkcdShape **a2, signed int a3);
// [0x1775470] (105 bytes) hkpExtendedMeshShapeBreakableMaterial::getShapeKeyMaterial(hkcdShape const*,unsigned int)const
// int hkpExtendedMeshShapeBreakableMaterial::getShapeKeyMaterial( hkpExtendedMeshShapeBreakableMaterial *this, const hkcdShape **a2, signed int a3);
// [0x17754e0] (20 bytes) hkpExtendedMeshShapeBreakableMaterial::convertShapeKeyToSubShapeId(unsigned int)const
// unsigned int hkpExtendedMeshShapeBreakableMaterial::convertShapeKeyToSubShapeId( hkpExtendedMeshShapeBreakableMaterial *this, unsigned int a2);
// [0x1775500] (69 bytes) hkpExtendedMeshShapeBreakableMaterial::convertShapeKeysToSubShapeIds(hkArray<unsigned int,hkContainerHeapAllocator> &)const
// int hkpExtendedMeshShapeBreakableMaterial::convertShapeKeysToSubShapeIds( hkpExtendedMeshShapeBreakableMaterial *this, hkArray<unsigned int, hkContainerHeapAllocator> *a2);
// [0x1775550] (114 bytes) hkpExtendedMeshShapeBreakableMaterial::getShapeKeysForSubShapes(hkcdShape const*,unsigned int const*,int,hkpBreakableMaterial::ShapeKeyCollector *)const
// int hkpExtendedMeshShapeBreakableMaterial::getShapeKeysForSubShapes( hkpExtendedMeshShapeBreakableMaterial *this, const hkcdShape *a2, const unsigned int *a3, int a4, hkpBreakableMaterial::ShapeKeyCollector *a5);
// [0x17755d0] (275 bytes) hkpExtendedMeshShapeBreakableMaterial::createInverseMapping(hkcdShape const*)
// int hkpExtendedMeshShapeBreakableMaterial::createInverseMapping( hkpExtendedMeshShapeBreakableMaterial *this, const hkcdShape **a2);
// [0x17756f0] (256 bytes) hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndices(hkcdShape const*,hkArray<unsigned int,hkContainerHeapAllocator> const&,hkArray<short,hkContainerHeapAllocator> &)const
// int hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndices(int a1, int a2, uint32_t *a3, int *a4);
// [0x17757f0] (341 bytes) hkpExtendedMeshShapeBreakableMaterial::~hkpExtendedMeshShapeBreakableMaterial()
// void hkpExtendedMeshShapeBreakableMaterial::~hkpExtendedMeshShapeBreakableMaterial( hkpExtendedMeshShapeBreakableMaterial *this);
// [0x1775950] (285 bytes) hkpExtendedMeshShapeBreakableMaterial::~hkpExtendedMeshShapeBreakableMaterial()
// void hkpExtendedMeshShapeBreakableMaterial::~hkpExtendedMeshShapeBreakableMaterial( hkpExtendedMeshShapeBreakableMaterial *this);
// [0x1775a70] (98 bytes) hkpExtendedMeshShapeBreakableMaterial::hkpExtendedMeshShapeBreakableMaterial(hkArray<hkpBreakableMaterial *,hkContainerHeapAllocator> const&,int,float)
// unsigned int hkpExtendedMeshShapeBreakableMaterial::hkpExtendedMeshShapeBreakableMaterial( uint32_t *a1, uint32_t *a2, char a3, int a4);
// [0x1775ae0] (55 bytes) hkpExtendedMeshShapeBreakableMaterial::hkpExtendedMeshShapeBreakableMaterial(hkFinishLoadedObjectFlag)
// void (**hkpExtendedMeshShapeBreakableMaterial::hkpExtendedMeshShapeBreakableMaterial( uint32_t *a1))(hkpExtendedMeshShapeBreakableMaterial *__hidden this);
// [0x1775b20] (55 bytes) hkpExtendedMeshShapeBreakableMaterial::hkpExtendedMeshShapeBreakableMaterial(hkpExtendedMeshShapeBreakableMaterial const&)
// void hkpExtendedMeshShapeBreakableMaterial::hkpExtendedMeshShapeBreakableMaterial( hkpExtendedMeshShapeBreakableMaterial *this, const hkpExtendedMeshShapeBreakableMaterial *a2);
// [0x1775b60] (79 bytes) hkpExtendedMeshShapeBreakableMaterial::duplicate(void)
// hkpExtendedMeshShapeBreakableMaterial *hkpExtendedMeshShapeBreakableMaterial::duplicate( hkpExtendedMeshShapeBreakableMaterial *this);
