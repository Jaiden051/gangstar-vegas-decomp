#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpMultiSp.h
// Library: havok | Module: havok_physics_hkpMultiSp
// Binary Address Span: 0x16933d0 .. 0x16de600 (35 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x16933d0] (22 bytes) hkpMultiSphereShape::staticClass(void)
// void *hkpMultiSphereShape::staticClass();
// [0x16c2200] (12 bytes) hkpMultiSphereShape::getNumCollisionSpheres(void)const
// int hkpMultiSphereShape::getNumCollisionSpheres(hkpMultiSphereShape *this);
// [0x16c2210] (73 bytes) hkpMultiSphereShape::getCollisionSpheres(hkSphere *)const
// hkSphere *hkpMultiSphereShape::getCollisionSpheres(hkpMultiSphereShape *this, hkSphere *a2);
// [0x16c2260] (29 bytes) hkpMultiSphereShape::~hkpMultiSphereShape()
// void hkpMultiSphereShape::~hkpMultiSphereShape(hkpMultiSphereShape *this);
// [0x16c2280] (96 bytes) hkpMultiSphereShape::~hkpMultiSphereShape()
// void hkpMultiSphereShape::~hkpMultiSphereShape(hkpMultiSphereShape *this);
// [0x16c25d0] (505 bytes) hkpMultiSphereShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// char *hkpMultiSphereShape::castRay(char *a1, int a2, float *a3, int a4);
// [0x16c27d0] (757 bytes) hkpMultiSphereShape::getAabb(hkTransformf const&,float,hkAabb &)const
// hkAabb *hkpMultiSphereShape::getAabb(hkpMultiSphereShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x16c2ad0] (870 bytes) hkpMultiSphereShape::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpMultiSphereShape::castRayWithCollector( int a1, float *a2, int a3, void (***a4)(uint32_t, int, float *));
// [0x16c2e40] (126 bytes) hkpMultiSphereShape::hkpMultiSphereShape(hkVector4f const*,int)
// void hkpMultiSphereShape::hkpMultiSphereShape(hkpMultiSphereShape *this, const hkVector4f *a2, int a3);
// [0x16c2ec0] (59 bytes) hkpMultiSphereShape::hkpMultiSphereShape(hkFinishLoadedObjectFlag)
// void (**hkpMultiSphereShape::hkpMultiSphereShape(int a1, int a2))(hkpMultiSphereShape *__hidden this);
// [0x16cefd0] (76 bytes) hkpMultiSphereAgent::cleanup(hkpConstraintOwner &)
// int hkpMultiSphereAgent::cleanup(hkpMultiSphereAgent *this, hkpConstraintOwner *a2);
// [0x16cf0e0] (106 bytes) hkpMultiSphereAgent::~hkpMultiSphereAgent()
// void hkpMultiSphereAgent::~hkpMultiSphereAgent(hkpMultiSphereAgent *this);
// [0x16cf230] (163 bytes) hkpMultiSphereAgent::~hkpMultiSphereAgent()
// void hkpMultiSphereAgent::~hkpMultiSphereAgent(hkpMultiSphereAgent *this);
// [0x16cf390] (513 bytes) hkpMultiSphereAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// uint32_t *hkpMultiSphereAgent::staticGetClosestPoints(int *a1, int a2, uint32_t *a3, int a4);
// [0x16cf600] (469 bytes) hkpMultiSphereAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpMultiSphereAgent::linearCast(int a1, int *a2, int a3, int a4, int a5, int a6);
// [0x16cf930] (522 bytes) hkpMultiSphereAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// uint32_t *hkpMultiSphereAgent::staticLinearCast(int *a1, int a2, uint32_t *a3, int a4, int a5);
// [0x16cfc60] (455 bytes) hkpMultiSphereAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// uint32_t *hkpMultiSphereAgent::getClosestPoints(int a1, int *a2, int a3, int a4, int a5);
// [0x16cfe90] (518 bytes) hkpMultiSphereAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// uint32_t *hkpMultiSphereAgent::staticGetPenetrations(int *a1, int a2, uint32_t *a3, int a4);
// [0x16d0100] (460 bytes) hkpMultiSphereAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// uint32_t *hkpMultiSphereAgent::getPenetrations(int a1, int *a2, int a3, int a4, uint8_t *a5);
// [0x16d0330] (599 bytes) hkpMultiSphereAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// uint32_t *hkpMultiSphereAgent::processCollision(int a1, int *a2, int a3, int a4, int a5);
// [0x16d0760] (195 bytes) hkpMultiSphereAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpMultiSphereAgent::registerAgent(hkpMultiSphereAgent *this);
// [0x16d0830] (1020 bytes) hkpMultiSphereAgent::hkpMultiSphereAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// float *hkpMultiSphereAgent::hkpMultiSphereAgent(uint32_t *a1, int *a2, int a3, uint32_t *a4, int a5);
// [0x16d0c30] (103 bytes) hkpMultiSphereAgent::createListAAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpMultiSphereAgent::createListAAgent(int *a1, int a2, uint32_t *a3, int a4);
// [0x16d0ca0] (114 bytes) hkpMultiSphereAgent::createListBAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpMultiSphereAgent::createListBAgent(int a1, int *a2, uint32_t *a3, int a4);
// [0x16db670] (101 bytes) hkpMultiSphereTriangleAgent::cleanup(hkpConstraintOwner &)
// int hkpMultiSphereTriangleAgent::cleanup(hkpMultiSphereTriangleAgent *this, hkpConstraintOwner *a2);
// [0x16db6e0] (29 bytes) hkpMultiSphereTriangleAgent::~hkpMultiSphereTriangleAgent()
// void hkpMultiSphereTriangleAgent::~hkpMultiSphereTriangleAgent(hkpMultiSphereTriangleAgent *this);
// [0x16db8b0] (96 bytes) hkpMultiSphereTriangleAgent::~hkpMultiSphereTriangleAgent()
// void hkpMultiSphereTriangleAgent::~hkpMultiSphereTriangleAgent(hkpMultiSphereTriangleAgent *this);
// [0x16db910] (140 bytes) hkpMultiSphereTriangleAgent::createMultiSphereTriangleAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpMultiSphereTriangleAgent::createMultiSphereTriangleAgent(int a1, uint32_t *a2, int a3, int a4);
// [0x16db9a0] (151 bytes) hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent(uint32_t *a1, int a2, int a3, int a4);
// [0x16dc320] (1443 bytes) hkpMultiSphereTriangleAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpMultiSphereTriangleAgent::getPenetrations(int a1, int *a2, float **a3, int a4, int a5);
// [0x16dc930] (1462 bytes) hkpMultiSphereTriangleAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpMultiSphereTriangleAgent::staticGetPenetrations(int *a1, float **a2, int a3, int a4);
// [0x16dcf50] (1889 bytes) hkpMultiSphereTriangleAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpMultiSphereTriangleAgent::staticGetClosestPoints(int *a1, float **a2, int a3, int a4);
// [0x16dd720] (1857 bytes) hkpMultiSphereTriangleAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpMultiSphereTriangleAgent::getClosestPoints(int a1, int *a2, float **a3, int a4, int a5);
// [0x16dded0] (1832 bytes) hkpMultiSphereTriangleAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpMultiSphereTriangleAgent::processCollision(int a1, int *a2, float **a3, int a4, int *a5);
// [0x16de600] (195 bytes) hkpMultiSphereTriangleAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpMultiSphereTriangleAgent::registerAgent(hkpMultiSphereTriangleAgent *this);
