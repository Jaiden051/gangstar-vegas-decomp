#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpSphereS.h
// Library: havok | Module: havok_physics_hkpSphereS
// Binary Address Span: 0x1690b90 .. 0x16e4b30 (28 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1690b90] (12 bytes) hkpSphereShape::getSize(void)const
// int hkpSphereShape::getSize();
// [0x1690ba0] (12 bytes) hkpSphereShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpSphereShape::calcSizeForSpu();
// [0x1690bb0] (15 bytes) hkpSphereShape::getSupportingVertex(hkVector4f const&,hkcdVertex &)const
// _OWORD *hkpSphereShape::getSupportingVertex(int a1, int a2, _OWORD *a3);
// [0x1690bc0] (71 bytes) hkpSphereShape::convertVertexIdsToVertices(unsigned short const*,int,hkcdVertex *)const
// uint32_t *hkpSphereShape::convertVertexIdsToVertices(int a1, int a2, int a3, int a4);
// [0x1690c10] (15 bytes) hkpSphereShape::getCentre(hkVector4f &)const
// hkVector4f *hkpSphereShape::getCentre(hkpSphereShape *this, hkVector4f *a2);
// [0x1690c20] (12 bytes) hkpSphereShape::getNumCollisionSpheres(void)const
// int hkpSphereShape::getNumCollisionSpheres();
// [0x1690c30] (131 bytes) hkpSphereShape::getAabb(hkTransformf const&,float,hkAabb &)const
// hkAabb *hkpSphereShape::getAabb(hkpSphereShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x1690cc0] (65 bytes) hkpSphereShape::getCollisionSpheres(hkSphere *)const
// hkSphere *hkpSphereShape::getCollisionSpheres(hkpSphereShape *this, hkSphere *a2);
// [0x1690d10] (15 bytes) hkpSphereShape::getFirstVertex(hkVector4f &)const
// hkVector4f *hkpSphereShape::getFirstVertex(hkpSphereShape *this, hkVector4f *a2);
// [0x1690d20] (29 bytes) hkpSphereShape::~hkpSphereShape()
// void hkpSphereShape::~hkpSphereShape(hkpSphereShape *this);
// [0x1690d40] (96 bytes) hkpSphereShape::~hkpSphereShape()
// void hkpSphereShape::~hkpSphereShape(hkpSphereShape *this);
// [0x1690e00] (1552 bytes) hkpSphereShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// char *hkpSphereShape::castRay(char *a1, int a2, int a3, int a4);
// [0x1691410] (5208 bytes) hkpSphereShape::castRayBundle(hkpShapeRayBundleCastInput const&,hkpShapeRayBundleCastOutput &,hkVector4fComparison const&)const
// int *hkpSphereShape::castRayBundle(int *a1, int a2, float *a3, int a4, int *a5);
// [0x1692870] (68 bytes) hkpSphereShape::hkpSphereShape(float)
// void hkpSphereShape::hkpSphereShape(hkpSphereShape *this, float a2);
// [0x16928c0] (59 bytes) hkpSphereShape::hkpSphereShape(hkFinishLoadedObjectFlag)
// void (**hkpSphereShape::hkpSphereShape(int a1, int a2))(hkpSphereShape *__hidden this);
// [0x1699a90] (22 bytes) hkpSphereShape::staticClass(void)
// void *hkpSphereShape::staticClass();
// [0x16e4010] (64 bytes) hkpSphereSphereAgent::cleanup(hkpConstraintOwner &)
// int hkpSphereSphereAgent::cleanup(hkpSphereSphereAgent *this, hkpConstraintOwner *a2);
// [0x16e4050] (29 bytes) hkpSphereSphereAgent::~hkpSphereSphereAgent()
// void hkpSphereSphereAgent::~hkpSphereSphereAgent(hkpSphereSphereAgent *this);
// [0x16e4070] (96 bytes) hkpSphereSphereAgent::~hkpSphereSphereAgent()
// void hkpSphereSphereAgent::~hkpSphereSphereAgent(hkpSphereSphereAgent *this);
// [0x16e40d0] (226 bytes) hkpSphereSphereAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSphereSphereAgent::staticGetPenetrations(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x16e41c0] (58 bytes) hkpSphereSphereAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSphereSphereAgent::getPenetrations(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5);
// [0x16e4200] (737 bytes) hkpSphereSphereAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSphereSphereAgent::processCollision(int a1, uint32_t *a2, uint32_t *a3, int a4, int *a5);
// [0x16e44f0] (88 bytes) hkpSphereSphereAgent::createSphereSphereAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpSphereSphereAgent::createSphereSphereAgent(int a1, int a2, int a3, int a4);
// [0x16e4550] (663 bytes) hkpSphereSphereAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSphereSphereAgent::getClosestPoints(int a1, uint32_t *a2, uint32_t *a3, int a4, int *a5);
// [0x16e47f0] (663 bytes) hkpSphereSphereAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSphereSphereAgent::staticGetClosestPoints(uint32_t *a1, uint32_t *a2, int a3, int *a4);
// [0x16e4a90] (51 bytes) hkpSphereSphereAgent::initAgentFunc(hkpCollisionDispatcher::AgentFuncs &)
// int (**hkpSphereSphereAgent::initAgentFunc( int (**a1)(int a1, int a2, int a3, int a4)))(int a1, int a2, int a3, int a4);
// [0x16e4ad0] (83 bytes) hkpSphereSphereAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpSphereSphereAgent::registerAgent(hkpSphereSphereAgent *this);
// [0x16e4b30] (83 bytes) hkpSphereSphereAgent::registerAgent2(hkpCollisionDispatcher *)
// int hkpSphereSphereAgent::registerAgent2(hkpSphereSphereAgent *this);
