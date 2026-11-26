#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpCapsule.h
// Library: havok | Module: havok_physics_hkpCapsule
// Binary Address Span: 0x1693aa0 .. 0x16f3610 (43 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1693aa0] (22 bytes) hkpCapsuleShape::staticClass(void)
// void *hkpCapsuleShape::staticClass();
// [0x1697770] (12 bytes) hkpCapsuleShape::getSize(void)const
// int hkpCapsuleShape::getSize();
// [0x1697780] (12 bytes) hkpCapsuleShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpCapsuleShape::calcSizeForSpu();
// [0x1697790] (12 bytes) hkpCapsuleShape::getNumCollisionSpheres(void)const
// int hkpCapsuleShape::getNumCollisionSpheres();
// [0x16977a0] (123 bytes) hkpCapsuleShape::getCentre(hkVector4f &)const
// void *hkpCapsuleShape::getCentre(hkpCapsuleShape *this, hkVector4f *a2);
// [0x1697820] (78 bytes) hkpCapsuleShape::convertVertexIdsToVertices(unsigned short const*,int,hkcdVertex *)const
// int hkpCapsuleShape::convertVertexIdsToVertices(int a1, uint16_t *a2, int a3, int a4);
// [0x1697870] (32 bytes) hkpCapsuleShape::getFirstVertex(hkVector4f &)const
// hkVector4f *hkpCapsuleShape::getFirstVertex(hkpCapsuleShape *this, hkVector4f *a2);
// [0x1697890] (56 bytes) hkpCapsuleShape::getCollisionSpheres(hkSphere *)const
// hkSphere *hkpCapsuleShape::getCollisionSpheres(hkpCapsuleShape *this, hkSphere *a2);
// [0x16978d0] (29 bytes) hkpCapsuleShape::~hkpCapsuleShape()
// void hkpCapsuleShape::~hkpCapsuleShape(hkpCapsuleShape *this);
// [0x16978f0] (96 bytes) hkpCapsuleShape::~hkpCapsuleShape()
// void hkpCapsuleShape::~hkpCapsuleShape(hkpCapsuleShape *this);
// [0x1697950] (599 bytes) hkpCapsuleShape::getAabb(hkTransformf const&,float,hkAabb &)const
// hkAabb *hkpCapsuleShape::getAabb(hkpCapsuleShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x1697bb0] (165 bytes) hkpCapsuleShape::getSupportingVertex(hkVector4f const&,hkcdVertex &)const
// int hkpCapsuleShape::getSupportingVertex(int a1, float *a2, int a3);
// [0x1697c60] (148 bytes) hkpCapsuleShape::hkpCapsuleShape(hkVector4f const&,hkVector4f const&,float)
// void hkpCapsuleShape::hkpCapsuleShape( hkpCapsuleShape *this, const hkVector4f *a2, const hkVector4f *a3, float a4);
// [0x1697d00] (59 bytes) hkpCapsuleShape::hkpCapsuleShape(hkFinishLoadedObjectFlag)
// void (**hkpCapsuleShape::hkpCapsuleShape(int a1, int a2))(hkpCapsuleShape *__hidden this);
// [0x1697d40] (216 bytes) hkpCapsuleShape::closestInfLineSegInfLineSeg(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,float &,float &,float &,hkVector4f&,hkVector4f&)
// const hkVector4f *hkpCapsuleShape::closestInfLineSegInfLineSeg( hkpCapsuleShape *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5, float *a6, float *a7, float *a8, hkVector4f *a9);
// [0x1697e20] (455 bytes) hkpCapsuleShape::closestPointLineSeg(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&)
// const hkVector4f *hkpCapsuleShape::closestPointLineSeg( hkpCapsuleShape *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x1697ff0] (3800 bytes) hkpCapsuleShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// char *hkpCapsuleShape::castRay(char *a1, float *a2, __m128 *a3, int a4);
// [0x16b4bc0] (86 bytes) hkpCapsuleCapsuleAgent::cleanup(hkpConstraintOwner &)
// int hkpCapsuleCapsuleAgent::cleanup(hkpCapsuleCapsuleAgent *this, hkpConstraintOwner *a2);
// [0x16b4c20] (29 bytes) hkpCapsuleCapsuleAgent::~hkpCapsuleCapsuleAgent()
// void hkpCapsuleCapsuleAgent::~hkpCapsuleCapsuleAgent(hkpCapsuleCapsuleAgent *this);
// [0x16b4c40] (96 bytes) hkpCapsuleCapsuleAgent::~hkpCapsuleCapsuleAgent()
// void hkpCapsuleCapsuleAgent::~hkpCapsuleCapsuleAgent(hkpCapsuleCapsuleAgent *this);
// [0x16b4ca0] (100 bytes) hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent(int a1, int a2, int a3, int a4);
// [0x16b4d10] (1341 bytes) hkpCapsuleCapsuleAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpCapsuleCapsuleAgent::processCollision(int a1, int *a2, int *a3, int a4, int *a5);
// [0x16b5250] (1322 bytes) hkpCapsuleCapsuleAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpCapsuleCapsuleAgent::getClosestPoints(int a1, int *a2, int *a3, int a4, int *a5);
// [0x16b5780] (1322 bytes) hkpCapsuleCapsuleAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpCapsuleCapsuleAgent::staticGetClosestPoints(int *a1, int *a2, int a3, int *a4);
// [0x16b5cb0] (1086 bytes) hkpCapsuleCapsuleAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpCapsuleCapsuleAgent::staticGetPenetrations(int *a1, int *a2, int a3, int a4);
// [0x16b60f0] (58 bytes) hkpCapsuleCapsuleAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpCapsuleCapsuleAgent::getPenetrations(int a1, int *a2, int *a3, int a4, int a5);
// [0x16b6130] (112 bytes) hkpCapsuleCapsuleAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpCapsuleCapsuleAgent::registerAgent(hkpCapsuleCapsuleAgent *this);
// [0x16efaa0] (86 bytes) hkpCapsuleTriangleAgent::cleanup(hkpConstraintOwner &)
// int hkpCapsuleTriangleAgent::cleanup(hkpCapsuleTriangleAgent *this, hkpConstraintOwner *a2);
// [0x16efb00] (29 bytes) hkpCapsuleTriangleAgent::~hkpCapsuleTriangleAgent()
// void hkpCapsuleTriangleAgent::~hkpCapsuleTriangleAgent(hkpCapsuleTriangleAgent *this);
// [0x16efcd0] (96 bytes) hkpCapsuleTriangleAgent::~hkpCapsuleTriangleAgent()
// void hkpCapsuleTriangleAgent::~hkpCapsuleTriangleAgent(hkpCapsuleTriangleAgent *this);
// [0x16efd30] (130 bytes) hkpCapsuleTriangleAgent::createCapsuleTriangleAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpCapsuleTriangleAgent::createCapsuleTriangleAgent(int a1, uint32_t *a2, int a3, int a4);
// [0x16efdc0] (141 bytes) hkpCapsuleTriangleAgent::createTriangleCapsuleAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpCapsuleTriangleAgent::createTriangleCapsuleAgent(uint32_t *a1, int a2, int a3, int a4);
// [0x16f0830] (1494 bytes) hkpCapsuleTriangleAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpCapsuleTriangleAgent::getPenetrations(int a1, int *a2, int *a3, int a4, int a5);
// [0x16f0e70] (1518 bytes) hkpCapsuleTriangleAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpCapsuleTriangleAgent::staticGetPenetrations(int *a1, int *a2, int a3, int a4);
// [0x16f14c0] (2214 bytes) hkpCapsuleTriangleAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpCapsuleTriangleAgent::getClosestPoints(int a1, int *a2, int *a3, float *a4, int a5);
// [0x16f1dd0] (2125 bytes) hkpCapsuleTriangleAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpCapsuleTriangleAgent::processCollision(int a1, int *a2, int *a3, int a4, int a5);
// [0x16f2620] (2238 bytes) hkpCapsuleTriangleAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpCapsuleTriangleAgent::staticGetClosestPoints(int *a1, int *a2, float *a3, int a4);
// [0x16f2f40] (59 bytes) hkpCapsuleTriangleAgent::initAgentFunc(hkpCollisionDispatcher::AgentFuncs &)
// int hkpCapsuleTriangleAgent::initAgentFunc(int a1);
// [0x16f2f80] (59 bytes) hkpCapsuleTriangleAgent::initAgentFuncInverse(hkpCollisionDispatcher::AgentFuncs &)
// int hkpCapsuleTriangleAgent::initAgentFuncInverse(int a1);
// [0x16f2fc0] (131 bytes) hkpCapsuleTriangleAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpCapsuleTriangleAgent::registerAgent(hkpCapsuleTriangleAgent *this);
// [0x16f3050] (131 bytes) hkpCapsuleTriangleAgent::registerAgent2(hkpCollisionDispatcher *)
// int hkpCapsuleTriangleAgent::registerAgent2(hkpCapsuleTriangleAgent *this);
// [0x16f30e0] (1328 bytes) hkpCapsuleTriangleAgent::getClosestPointsPublic(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCollideTriangleUtil::PointTriangleDistanceCache &,int,hkContactPoint *)
// int hkpCapsuleTriangleAgent::getClosestPointsPublic(int *a1, int *a2, int a3, int a4, int a5, float a6);
// [0x16f3610] (2086 bytes) hkpCapsuleTriangleAgent::getClosestPoint(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCollideTriangleUtil::PointTriangleDistanceCache &,hkContactPoint &)
// int hkpCapsuleTriangleAgent::getClosestPoint(int *a1, int *a2, float *a3, int a4, int *a5);
