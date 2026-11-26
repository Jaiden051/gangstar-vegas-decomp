#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpListSha.h
// Library: havok | Module: havok_physics_hkpListSha
// Binary Address Span: 0x1690860 .. 0x17846c0 (36 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1690860] (22 bytes) hkpListShape::ChildInfo::staticClass(void)
// void *hkpListShape::ChildInfo::staticClass();
// [0x1690880] (22 bytes) hkpListShape::staticClass(void)
// void *hkpListShape::staticClass();
// [0x16a39c0] (14 bytes) hkpListShape::getNumChildShapes(void)const
// int hkpListShape::getNumChildShapes(hkpListShape *this);
// [0x16a39e0] (17 bytes) hkpListShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// int hkpListShape::getChildShape(int a1, int a2);
// [0x16a3a10] (18 bytes) hkpListShape::getCollisionFilterInfo(unsigned int)const
// int hkpListShape::getCollisionFilterInfo(hkpListShape *this, unsigned int a2);
// [0x16a3a40] (165 bytes) hkpListShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpListShape::calcSizeForSpu(int a1, uint8_t *a2);
// [0x16a3af0] (109 bytes) hkpListShape::getNextKey(unsigned int)const
// unsigned int hkpListShape::getNextKey(hkpListShape *this, unsigned int a2);
// [0x16a3b70] (853 bytes) hkpListShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// char *hkpListShape::castRay(char *a1, int a2, int a3, uint32_t *a4);
// [0x16a3ed0] (419 bytes) hkpListShape::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpListShape::castRayWithCollector(int a1, int a2, int a3, int a4);
// [0x16a4080] (89 bytes) hkpListShape::getFirstKey(void)const
// int hkpListShape::getFirstKey(hkpListShape *this);
// [0x16a40f0] (230 bytes) hkpListShape::~hkpListShape()
// void hkpListShape::~hkpListShape(hkpListShape *this);
// [0x16a41f0] (93 bytes) hkpListShape::~hkpListShape()
// void hkpListShape::~hkpListShape(hkpListShape *this);
// [0x16a4260] (77 bytes) hkpListShape::hkpListShape(hkFinishLoadedObjectFlag)
// void (**hkpListShape::hkpListShape(int a1, int a2))(hkpListShape *__hidden this);
// [0x16a42b0] (47 bytes) hkpListShape::disableChild(unsigned int)
// int hkpListShape::disableChild(hkpListShape *this, unsigned int a2);
// [0x16a42e0] (45 bytes) hkpListShape::enableChild(unsigned int)
// int hkpListShape::enableChild(hkpListShape *this, unsigned int a2);
// [0x16a4310] (181 bytes) hkpListShape::setEnabledChildren(hkBitField const&)
// int hkpListShape::setEnabledChildren(hkpListShape *this, const hkBitField *a2);
// [0x16a43d0] (523 bytes) hkpListShape::recalcAabbExtents(hkAabb &)
// int *hkpListShape::recalcAabbExtents( hkpListShape *this, hkAabb *a2, int a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11);
// [0x16a45e0] (46 bytes) hkpListShape::recalcAabbExtents(void)
// int *hkpListShape::recalcAabbExtents(hkpListShape *this);
// [0x16a4610] (419 bytes) hkpListShape::getAabb(hkTransformf const&,float,hkAabb &)const
// float *hkpListShape::getAabb(hkpListShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x16a47c0] (383 bytes) hkpListShape::setShapes(hkpShape const* const*,int,unsigned int const*,hkpShapeContainer::ReferencePolicy)
// int *hkpListShape::setShapes(int *a1, int a2, int a3, int a4, int a5);
// [0x16a4940] (247 bytes) hkpListShape::hkpListShape(hkpShape const* const*,int,hkpShapeContainer::ReferencePolicy)
// int *hkpListShape::hkpListShape(int a1, int a2, int a3, int a4);
// [0x16a4a40] (22 bytes) hkpListShape::setCollisionFilterInfo(unsigned int,unsigned int)
// unsigned int hkpListShape::setCollisionFilterInfo(hkpListShape *this, unsigned int a2, unsigned int a3);
// [0x17686f0] (22 bytes) hkpListShapeBreakableMaterial::staticClass(void)
// void *hkpListShapeBreakableMaterial::staticClass();
// [0x1784120] (22 bytes) hkpListShapeBreakableMaterial::getClassType(void)const
// void *hkpListShapeBreakableMaterial::getClassType();
// [0x1784140] (16 bytes) hkpListShapeBreakableMaterial::setDefaultMapping(void)
// int hkpListShapeBreakableMaterial::setDefaultMapping(hkpListShapeBreakableMaterial *this);
// [0x1784150] (28 bytes) hkpListShapeBreakableMaterial::getSubShapeMaterialIndex(hkcdShape const*,unsigned int)const
// int hkpListShapeBreakableMaterial::getSubShapeMaterialIndex( hkpListShapeBreakableMaterial *this, const hkcdShape **a2, unsigned int a3);
// [0x1784170] (38 bytes) hkpListShapeBreakableMaterial::getShapeKeyMaterial(hkcdShape const*,unsigned int)const
// int hkpListShapeBreakableMaterial::getShapeKeyMaterial( hkpListShapeBreakableMaterial *this, const hkcdShape **a2, unsigned int a3);
// [0x17841a0] (37 bytes) hkpListShapeBreakableMaterial::getShapeKeysForSubShapes(hkcdShape const*,unsigned int const*,int,hkpBreakableMaterial::ShapeKeyCollector *)const
// int hkpListShapeBreakableMaterial::getShapeKeysForSubShapes( hkpListShapeBreakableMaterial *this, const hkcdShape *a2, const unsigned int *a3, int a4, hkpBreakableMaterial::ShapeKeyCollector *a5);
// [0x17841d0] (164 bytes) hkpListShapeBreakableMaterial::disableSubShapes(hkcdShape *,short const*,int)
// int hkpListShapeBreakableMaterial::disableSubShapes( hkpListShapeBreakableMaterial *this, hkpListShape **a2, const int16_t *a3, int a4);
// [0x1784280] (235 bytes) hkpListShapeBreakableMaterial::getSubShapeMaterialIndices(hkcdShape const*,hkArray<unsigned int,hkContainerHeapAllocator> const&,hkArray<short,hkContainerHeapAllocator> &)const
// int hkpListShapeBreakableMaterial::getSubShapeMaterialIndices(int a1, int a2, uint32_t *a3, int *a4);
// [0x1784370] (341 bytes) hkpListShapeBreakableMaterial::~hkpListShapeBreakableMaterial()
// void hkpListShapeBreakableMaterial::~hkpListShapeBreakableMaterial(hkpListShapeBreakableMaterial *this);
// [0x17844d0] (285 bytes) hkpListShapeBreakableMaterial::~hkpListShapeBreakableMaterial()
// void hkpListShapeBreakableMaterial::~hkpListShapeBreakableMaterial(hkpListShapeBreakableMaterial *this);
// [0x17845f0] (78 bytes) hkpListShapeBreakableMaterial::hkpListShapeBreakableMaterial(hkArray<hkpBreakableMaterial *,hkContainerHeapAllocator> const&,float)
// int hkpListShapeBreakableMaterial::hkpListShapeBreakableMaterial(uint32_t *a1, uint32_t *a2, int a3);
// [0x1784640] (55 bytes) hkpListShapeBreakableMaterial::hkpListShapeBreakableMaterial(hkFinishLoadedObjectFlag)
// void (**hkpListShapeBreakableMaterial::hkpListShapeBreakableMaterial( uint32_t *a1))(hkpListShapeBreakableMaterial *__hidden this);
// [0x1784680] (55 bytes) hkpListShapeBreakableMaterial::hkpListShapeBreakableMaterial(hkpListShapeBreakableMaterial const&)
// void hkpListShapeBreakableMaterial::hkpListShapeBreakableMaterial( hkpListShapeBreakableMaterial *this, const hkpListShapeBreakableMaterial *a2);
// [0x17846c0] (79 bytes) hkpListShapeBreakableMaterial::duplicate(void)
// hkpListShapeBreakableMaterial *hkpListShapeBreakableMaterial::duplicate(hkpListShapeBreakableMaterial *this);
