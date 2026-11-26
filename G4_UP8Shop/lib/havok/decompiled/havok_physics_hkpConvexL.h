#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpConvexL.h
// Library: havok | Module: havok_physics_hkpConvexL
// Binary Address Span: 0x169baa0 .. 0x16eb450 (48 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x169baa0] (22 bytes) hkpConvexListShape::staticClass(void)
// void *hkpConvexListShape::staticClass();
// [0x16c2f00] (29 bytes) hkpConvexListFilter::~hkpConvexListFilter()
// void hkpConvexListFilter::~hkpConvexListFilter(hkpConvexListFilter *this);
// [0x16c2f50] (96 bytes) hkpConvexListFilter::~hkpConvexListFilter()
// void hkpConvexListFilter::~hkpConvexListFilter(hkpConvexListFilter *this);
// [0x16c93d0] (252 bytes) hkpConvexListShape::getSupportingVertex(hkVector4f const&,hkcdVertex &)const
// int hkpConvexListShape::getSupportingVertex(int a1, float *a2, float *a3);
// [0x16c94d0] (141 bytes) hkpConvexListShape::convertVertexIdsToVertices(unsigned short const*,int,hkcdVertex *)const
// int hkpConvexListShape::convertVertexIdsToVertices(int a1, uint16_t *a2, int a3, int a4);
// [0x16c9560] (34 bytes) hkpConvexListShape::getFirstVertex(hkVector4f &)const
// int hkpConvexListShape::getFirstVertex(hkpConvexListShape *this, hkVector4f *a2);
// [0x16c9590] (70 bytes) hkpConvexListShape::getNumCollisionSpheres(void)const
// int hkpConvexListShape::getNumCollisionSpheres(hkpConvexListShape *this);
// [0x16c95e0] (91 bytes) hkpConvexListShape::getCollisionSpheres(hkSphere *)const
// hkSphere *hkpConvexListShape::getCollisionSpheres(hkpConvexListShape *this, hkSphere *a2);
// [0x16c9640] (12 bytes) hkpConvexListShape::getNumChildShapes(void)const
// int hkpConvexListShape::getNumChildShapes(hkpConvexListShape *this);
// [0x16c9660] (9 bytes) hkpConvexListShape::getFirstKey(void)const
// int hkpConvexListShape::getFirstKey();
// [0x16c9680] (25 bytes) hkpConvexListShape::getNextKey(unsigned int)const
// int hkpConvexListShape::getNextKey(hkpConvexListShape *this, unsigned int a2);
// [0x16c96b0] (15 bytes) hkpConvexListShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// int hkpConvexListShape::getChildShape(int a1, int a2);
// [0x16c96d0] (9 bytes) hkpConvexListShape::getCollisionFilterInfo(unsigned int)const
// int hkpConvexListShape::getCollisionFilterInfo();
// [0x16c96f0] (12 bytes) hkpConvexListShape::getContainer(void)const
// char *hkpConvexListShape::getContainer(hkpConvexListShape *this);
// [0x16c9700] (986 bytes) hkpConvexListShape::getAabb(hkTransformf const&,float,hkAabb &)const
// float *hkpConvexListShape::getAabb( hkpConvexListShape *this, const hkTransformf *a2, float a3, hkAabb *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, float a16, float a17, float a18, float a19, float a20, float a21, float a22, float a23);
// [0x16c9ae0] (246 bytes) hkpConvexListShape::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// uint32_t *hkpConvexListShape::castRayWithCollector( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int *a7, int a8, int a9, int a10);
// [0x16c9be0] (410 bytes) hkpConvexListShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// char *hkpConvexListShape::castRay(char *a1, int *a2, int a3, int a4);
// [0x16c9d80] (226 bytes) hkpConvexListShape::~hkpConvexListShape()
// void hkpConvexListShape::~hkpConvexListShape(hkpConvexListShape *this);
// [0x16c9e80] (93 bytes) hkpConvexListShape::~hkpConvexListShape()
// void hkpConvexListShape::~hkpConvexListShape(hkpConvexListShape *this);
// [0x16c9ef0] (67 bytes) hkpConvexListShape::hkpConvexListShape(hkFinishLoadedObjectFlag)
// void (**hkpConvexListShape::hkpConvexListShape(int a1, int a2))(hkpConvexListShape *__hidden this);
// [0x16c9f40] (243 bytes) hkpConvexListShape::setShapesAndRadius(hkpConvexShape const* const*,int)
// hkpConvexListShape *hkpConvexListShape::setShapesAndRadius( hkpConvexListShape *this, const hkpConvexShape *const *a2, int a3);
// [0x16ca040] (502 bytes) hkpConvexListShape::setUseCachedAabb(bool)
// void hkpConvexListShape::setUseCachedAabb(hkpConvexListShape *this, bool a2);
// [0x16ca240] (152 bytes) hkpConvexListShape::hkpConvexListShape(hkpConvexShape const* const*,int)
// void hkpConvexListShape::hkpConvexListShape(hkpConvexListShape *this, hkpConvexShape **a2, int a3);
// [0x16ca2e0] (14 bytes) hkpConvexListShape::getUseCachedAabb(void)
// bool hkpConvexListShape::getUseCachedAabb(hkpConvexListShape *this);
// [0x16d7910] (22 bytes) hkpConvexListFilter::staticClass(void)
// void *hkpConvexListFilter::staticClass();
// [0x16e9800] (29 bytes) hkpConvexListAgent::~hkpConvexListAgent()
// void hkpConvexListAgent::~hkpConvexListAgent(hkpConvexListAgent *this);
// [0x16e9d10] (70 bytes) hkpConvexListAgent::invalidateTim(hkpCollisionInput const&)
// uint32_t *hkpConvexListAgent::invalidateTim(int a1, int a2);
// [0x16e9d60] (94 bytes) hkpConvexListAgent::warpTime(float,float,hkpCollisionInput const&)
// int hkpConvexListAgent::warpTime(int a1, float a2, int64_t a3);
// [0x16e9dc0] (51 bytes) hkpConvexListAgent::removePoint(unsigned short)
// hkpGskfAgent *hkpConvexListAgent::removePoint(hkpConvexListAgent *this, uint16_t a2);
// [0x16e9e00] (51 bytes) hkpConvexListAgent::commitPotential(unsigned short)
// hkpGskfAgent *hkpConvexListAgent::commitPotential(hkpConvexListAgent *this, uint16_t a2);
// [0x16e9e40] (51 bytes) hkpConvexListAgent::createZombie(unsigned short)
// void hkpConvexListAgent::createZombie(hkpConvexListAgent *this, uint16_t a2);
// [0x16e9e80] (116 bytes) hkpConvexListAgent::cleanup(hkpConstraintOwner &)
// int hkpConvexListAgent::cleanup(hkpConvexListAgent *this, hkpConstraintOwner *a2);
// [0x16e9f00] (110 bytes) hkpConvexListAgent::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// void hkpConvexListAgent::updateShapeCollectionFilter(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0x16ea0e0] (498 bytes) hkpConvexListAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpConvexListAgent::staticLinearCast(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x16ea400] (66 bytes) hkpConvexListAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpConvexListAgent::linearCast(int a1, int a2, uint32_t *a3, int a4, int a5, int a6);
// [0x16ea600] (96 bytes) hkpConvexListAgent::~hkpConvexListAgent()
// void hkpConvexListAgent::~hkpConvexListAgent(hkpConvexListAgent *this);
// [0x16ea660] (269 bytes) hkpConvexListAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpConvexListAgent::staticGetPenetrations(int a1, uint32_t *a2, int a3, int a4);
// [0x16ea7d0] (58 bytes) hkpConvexListAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpConvexListAgent::getPenetrations(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0x16ea870] (605 bytes) hkpConvexListAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpConvexListAgent::staticGetClosestPoints(int a1, uint32_t *a2, int a3, uint32_t *a4);
// [0x16eab30] (58 bytes) hkpConvexListAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpConvexListAgent::getClosestPoints(int a1, int a2, uint32_t *a3, int a4, uint32_t *a5);
// [0x16eabd0] (186 bytes) hkpConvexListAgent::hkpConvexListAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpConvexListAgent::hkpConvexListAgent( hkpGskfAgent *a1, const hkTransformf **a2, const hkTransformf **a3, int *a4, hkpContactMgr *a5);
// [0x16eac90] (421 bytes) hkpConvexListAgent::createConvexConvexListAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpGskfAgent *hkpConvexListAgent::createConvexConvexListAgent( const hkTransformf **a1, const hkTransformf **a2, hkpContactMgr *a3, hkpContactMgr *a4);
// [0x16eae40] (444 bytes) hkpConvexListAgent::createConvexListConvexAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpGskfAgent *hkpConvexListAgent::createConvexListConvexAgent( const hkTransformf **a1, const hkTransformf **a2, int a3, hkpContactMgr *a4);
// [0x16eb000] (623 bytes) hkpConvexListAgent::createConvexListConvexListAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpGskfAgent *hkpConvexListAgent::createConvexListConvexListAgent( const hkTransformf **a1, const hkTransformf **a2, int a3, hkpContactMgr *a4);
// [0x16eb270] (273 bytes) hkpConvexListAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpConvexListAgent::registerAgent(hkpConvexListAgent *this);
// [0x16eb390] (104 bytes) hkpConvexListAgent::switchToStreamMode(hkpConstraintOwner &)
// int hkpConvexListAgent::switchToStreamMode(hkpConvexListAgent *this, hkpConstraintOwner *a2);
// [0x16eb400] (72 bytes) hkpConvexListAgent::switchToGskMode(hkpConstraintOwner &)
// int hkpConvexListAgent::switchToGskMode(hkpConvexListAgent *this, hkpConstraintOwner *a2);
// [0x16eb450] (3359 bytes) hkpConvexListAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpConvexListAgent::processCollision(hkpConvexListAgent *a1, int64_t a2, int a3, int a4);
