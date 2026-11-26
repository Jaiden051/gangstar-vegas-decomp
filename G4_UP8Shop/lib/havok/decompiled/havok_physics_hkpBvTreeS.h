#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpBvTreeS.h
// Library: havok | Module: havok_physics_hkpBvTreeS
// Binary Address Span: 0x1692ef0 .. 0x169d650 (23 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1692ef0] (29 bytes) hkpBvTreeShape::~hkpBvTreeShape()
// void hkpBvTreeShape::~hkpBvTreeShape(hkpBvTreeShape *this);
// [0x1692f10] (96 bytes) hkpBvTreeShape::~hkpBvTreeShape()
// void hkpBvTreeShape::~hkpBvTreeShape(hkpBvTreeShape *this);
// [0x1692f70] (698 bytes) hkpBvTreeShape::castAabbImpl(hkAabb const&,hkVector4f const&,hkpAabbCastCollector &)const
// hkLifoAllocator *hkpBvTreeShape::castAabbImpl( hkpBvTreeShape *this, const hkAabb *a2, const hkVector4f *a3, hkpAabbCastCollector *a4, int a5, int a6, int a7, int a8, hkLifoAllocator **a9, int a10, char *a11);
// [0x1693230] (69 bytes) hkpBvTreeShape::hkpBvTreeShape(hkFinishLoadedObjectFlag)
// void (**hkpBvTreeShape::hkpBvTreeShape(int a1, int a2))(hkpBvTreeShape *__hidden this);
// [0x1696b90] (22 bytes) hkpBvTreeShape::staticClass(void)
// void *hkpBvTreeShape::staticClass();
// [0x169be70] (58 bytes) hkpBvTreeStreamAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpBvTreeStreamAgent::getPenetrations(int a1, int a2, int a3, int a4, int a5);
// [0x169bf70] (58 bytes) hkpBvTreeStreamAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpBvTreeStreamAgent::getClosestPoints(int a1, int a2, int a3, int a4, int a5);
// [0x169c070] (66 bytes) hkpBvTreeStreamAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpBvTreeStreamAgent::linearCast(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x169c480] (69 bytes) hkpBvTreeStreamAgent::cleanup(hkpConstraintOwner &)
// int hkpBvTreeStreamAgent::cleanup(hkpBvTreeStreamAgent *this, hkpConstraintOwner *a2);
// [0x169c4d0] (145 bytes) hkpBvTreeStreamAgent::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpBvTreeStreamAgent::updateShapeCollectionFilter(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5);
// [0x169c5c0] (45 bytes) hkpBvTreeStreamAgent::invalidateTim(hkpCollisionInput const&)
// int hkpBvTreeStreamAgent::invalidateTim(int a1, int a2);
// [0x169c5f0] (69 bytes) hkpBvTreeStreamAgent::warpTime(float,float,hkpCollisionInput const&)
// int hkpBvTreeStreamAgent::warpTime(int a1, int64_t a2, int a3);
// [0x169c900] (106 bytes) hkpBvTreeStreamAgent::~hkpBvTreeStreamAgent()
// void hkpBvTreeStreamAgent::~hkpBvTreeStreamAgent(hkpBvTreeStreamAgent *this);
// [0x169cb30] (163 bytes) hkpBvTreeStreamAgent::~hkpBvTreeStreamAgent()
// void hkpBvTreeStreamAgent::~hkpBvTreeStreamAgent(hkpBvTreeStreamAgent *this);
// [0x169cf10] (135 bytes) hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(uint32_t *a1, int a2, int a3, int *a4, int a5);
// [0x169cfa0] (103 bytes) hkpBvTreeStreamAgent::createShapeBvAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpBvTreeStreamAgent::createShapeBvAgent(int a1, int a2, int *a3, int a4);
// [0x169d010] (351 bytes) hkpBvTreeStreamAgent::dispatchConvexListBvTree(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpBvTreeStreamAgent::dispatchConvexListBvTree(int a1, int a2, int a3, int a4);
// [0x169d170] (114 bytes) hkpBvTreeStreamAgent::createBvTreeShapeAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpBvTreeStreamAgent::createBvTreeShapeAgent(int a1, int a2, int *a3, int a4);
// [0x169d1f0] (352 bytes) hkpBvTreeStreamAgent::dispatchBvTreeConvexList(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpBvTreeStreamAgent::dispatchBvTreeConvexList(int a1, int a2, int a3, int a4);
// [0x169d350] (251 bytes) hkpBvTreeStreamAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpBvTreeStreamAgent::registerAgent(hkpBvTreeStreamAgent *this);
// [0x169d450] (251 bytes) hkpBvTreeStreamAgent::registerConvexListAgent(hkpCollisionDispatcher *)
// int hkpBvTreeStreamAgent::registerConvexListAgent(hkpBvTreeStreamAgent *this);
// [0x169d550] (251 bytes) hkpBvTreeStreamAgent::registerMultiRayAgent(hkpCollisionDispatcher *)
// int hkpBvTreeStreamAgent::registerMultiRayAgent(hkpBvTreeStreamAgent *this);
// [0x169d650] (3510 bytes) hkpBvTreeStreamAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpBvTreeStreamAgent::processCollision( __m128 *a1, uint32_t *a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, float *a15, float a16, float a17, int a18, int *a19, float a20, float a21, float a22, int a23, float a24, int a25, int a26, int a27, float a28, float a29, float a30, float a31, float a32, float a33, float a34, float a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52);
