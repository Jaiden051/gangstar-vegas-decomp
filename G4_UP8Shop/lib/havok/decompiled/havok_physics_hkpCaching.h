#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpCaching.h
// Library: havok | Module: havok_physics_hkpCaching
// Binary Address Span: 0x175b150 .. 0x1763660 (16 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x175b150] (22 bytes) hkpCachingShapePhantom::staticClass(void)
// void *hkpCachingShapePhantom::staticClass();
// [0x17621f0] (12 bytes) hkpCachingShapePhantom::getType(void)const
// int hkpCachingShapePhantom::getType();
// [0x1762200] (151 bytes) hkpCachingShapePhantom::getClosestPoints(hkpCdPointCollector &,hkpCollisionInput const*)
// int hkpCachingShapePhantom::getClosestPoints(uint32_t *a1, int a2, int a3);
// [0x17622a0] (171 bytes) hkpCachingShapePhantom::getPenetrations(hkpCdBodyPairCollector &,hkpCollisionInput const*)
// int hkpCachingShapePhantom::getPenetrations(uint32_t *a1, int a2, int a3);
// [0x1762350] (72 bytes) hkpCachingShapePhantom::isOverlappingCollidableAdded(hkpCollidable const*)
// hkpCachingShapePhantom *hkpCachingShapePhantom::isOverlappingCollidableAdded( hkpCachingShapePhantom *this, const hkpCollidable *a2, int a3);
// [0x17623a0] (189 bytes) hkpCachingShapePhantom::updateShapeCollectionFilter(void)
// hkpCachingShapePhantom *hkpCachingShapePhantom::updateShapeCollectionFilter(hkpCachingShapePhantom *this);
// [0x1762480] (246 bytes) hkpCachingShapePhantom::~hkpCachingShapePhantom()
// void hkpCachingShapePhantom::~hkpCachingShapePhantom(hkpCachingShapePhantom *this);
// [0x1762580] (1014 bytes) hkpCachingShapePhantom::setPositionAndLinearCast(hkVector4f const&,hkpLinearCastInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int *hkpCachingShapePhantom::setPositionAndLinearCast( hkpPhantom *a1, float *a2, int a3, int a4, int a5, const hkAabb *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, unsigned int a36, float a37, float a38, float a39, int a40, float a41, int a42);
// [0x1762980] (177 bytes) hkpCachingShapePhantom::setTransformAndLinearCast(hkTransformf const&,hkpLinearCastInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// 0x1762980 hkpCachingShapePhantom::setTransformAndLinearCast(hkTransformf const&,hkpLinearCastInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// [0x1762aa0] (93 bytes) hkpCachingShapePhantom::~hkpCachingShapePhantom()
// void hkpCachingShapePhantom::~hkpCachingShapePhantom(hkpCachingShapePhantom *this);
// [0x1762b00] (653 bytes) hkpCachingShapePhantom::addOverlappingCollidable(hkpCollidable *)
// hkpCollidable *hkpCachingShapePhantom::addOverlappingCollidable( hkpCachingShapePhantom *this, hkpCollidable *a2);
// [0x1762d90] (134 bytes) hkpCachingShapePhantom::deallocateInternalArrays(void)
// int hkpCachingShapePhantom::deallocateInternalArrays(hkpCachingShapePhantom *this);
// [0x1762e20] (483 bytes) hkpCachingShapePhantom::removeOverlappingCollidable(hkpCollidable *)
// hkpCachingShapePhantom *hkpCachingShapePhantom::removeOverlappingCollidable( hkpCachingShapePhantom *this, hkpCollidable *a2);
// [0x1763010] (107 bytes) hkpCachingShapePhantom::hkpCachingShapePhantom(hkpShape const*,hkTransformf const&,unsigned int)
// void hkpCachingShapePhantom::hkpCachingShapePhantom( hkpCachingShapePhantom *this, const hkpShape *a2, const hkTransformf *a3, unsigned int a4);
// [0x1763080] (1173 bytes) hkpCachingShapePhantom::clone(void)const
// int *hkpCachingShapePhantom::clone(hkpCachingShapePhantom *this);
// [0x1763660] (89 bytes) hkpCachingShapePhantom::ensureDeterministicOrder(void)
// void hkpCachingShapePhantom::ensureDeterministicOrder(hkpCachingShapePhantom *this);
