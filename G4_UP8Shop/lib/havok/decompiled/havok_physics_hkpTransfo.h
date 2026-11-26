#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpTransfo.h
// Library: havok | Module: havok_physics_hkpTransfo
// Binary Address Span: 0x16b4950 .. 0x16deff0 (31 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x16b4950] (22 bytes) hkpTransformShape::staticClass(void)
// void *hkpTransformShape::staticClass();
// [0x16cdb30] (42 bytes) hkpTransformAgent::cleanup(hkpConstraintOwner &)
// int hkpTransformAgent::cleanup(hkpTransformAgent *this, hkpConstraintOwner *a2);
// [0x16cdb60] (32 bytes) hkpTransformAgent::invalidateTim(hkpCollisionInput const&)
// int hkpTransformAgent::invalidateTim(int a1, int a2);
// [0x16cdb80] (56 bytes) hkpTransformAgent::warpTime(float,float,hkpCollisionInput const&)
// int hkpTransformAgent::warpTime(int a1, int64_t a2, int a3);
// [0x16cdbc0] (33 bytes) hkpTransformAgent::removePoint(unsigned short)
// int hkpTransformAgent::removePoint(hkpTransformAgent *this, uint16_t a2);
// [0x16cdbf0] (33 bytes) hkpTransformAgent::commitPotential(unsigned short)
// int hkpTransformAgent::commitPotential(hkpTransformAgent *this, uint16_t a2);
// [0x16cdc20] (33 bytes) hkpTransformAgent::createZombie(unsigned short)
// int hkpTransformAgent::createZombie(hkpTransformAgent *this, uint16_t a2);
// [0x16cdc50] (29 bytes) hkpTransformAgent::~hkpTransformAgent()
// void hkpTransformAgent::~hkpTransformAgent(hkpTransformAgent *this);
// [0x16cdcb0] (146 bytes) hkpTransformAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpTransformAgent::linearCast(int a1, const hkTransformf **a2, int a3, int a4, int a5, int a6);
// [0x16cdea0] (139 bytes) hkpTransformAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpTransformAgent::getClosestPoints(int a1, const hkTransformf **a2, int a3, int a4, int a5);
// [0x16cdf90] (139 bytes) hkpTransformAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpTransformAgent::getPenetrations(int a1, const hkTransformf **a2, int a3, int a4, int a5);
// [0x16ce080] (139 bytes) hkpTransformAgent::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpTransformAgent::updateShapeCollectionFilter(int a1, const hkTransformf **a2, int a3, int a4, int a5);
// [0x16ce160] (178 bytes) hkpTransformAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpTransformAgent::staticLinearCast(const hkTransformf **a1, int *a2, uint32_t *a3, int a4, int a5);
// [0x16ce340] (171 bytes) hkpTransformAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpTransformAgent::staticGetClosestPoints(const hkTransformf **a1, int *a2, uint32_t *a3, int a4);
// [0x16ce450] (171 bytes) hkpTransformAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpTransformAgent::staticGetPenetrations(const hkTransformf **a1, int *a2, uint32_t *a3, int a4);
// [0x16ce620] (96 bytes) hkpTransformAgent::~hkpTransformAgent()
// void hkpTransformAgent::~hkpTransformAgent(hkpTransformAgent *this);
// [0x16ce680] (282 bytes) hkpTransformAgent::createTransformAAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpTransformAgent::createTransformAAgent(uint32_t *a1, int a2, int a3, ...);
// [0x16ce7a0] (306 bytes) hkpTransformAgent::createTransformBAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpTransformAgent::createTransformBAgent(int a1, uint32_t *a2, int a3, ...);
// [0x16ce8e0] (1098 bytes) hkpTransformAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpTransformAgent::processCollision(int a1, const hkTransformf **a2, int a3, int *a4, int a5);
// [0x16cef00] (195 bytes) hkpTransformAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpTransformAgent::registerAgent(hkpTransformAgent *this);
// [0x16de6d0] (236 bytes) hkpTransformShape::getMaximumProjection(hkVector4f const&)const
// long double hkpTransformShape::getMaximumProjection(hkpTransformShape *this, const hkVector4f *a2);
// [0x16de7c0] (12 bytes) hkpTransformShape::getContainer(void)const
// char *hkpTransformShape::getContainer(hkpTransformShape *this);
// [0x16de7d0] (111 bytes) hkpTransformShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpTransformShape::calcSizeForSpu(int a1, int a2, int a3);
// [0x16de840] (96 bytes) hkpTransformShape::getAabb(hkTransformf const&,float,hkAabb &)const
// int hkpTransformShape::getAabb(hkpTransformShape *this, const hkTransformf *a2, int64_t a3);
// [0x16de8a0] (138 bytes) hkpTransformShape::~hkpTransformShape()
// void hkpTransformShape::~hkpTransformShape(hkpTransformShape *this);
// [0x16de930] (194 bytes) hkpTransformShape::~hkpTransformShape()
// void hkpTransformShape::~hkpTransformShape(hkpTransformShape *this);
// [0x16dea00] (752 bytes) hkpTransformShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// int hkpTransformShape::castRay(uint8_t *a1, int a2, int a3, int a4);
// [0x16decf0] (544 bytes) hkpTransformShape::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpTransformShape::castRayWithCollector(int a1, int a2, int a3, int a4);
// [0x16def10] (71 bytes) hkpTransformShape::hkpTransformShape(hkFinishLoadedObjectFlag)
// void (**hkpTransformShape::hkpTransformShape(int a1, int a2))(hkpSingleShapeContainer *__hidden this);
// [0x16def60] (143 bytes) hkpTransformShape::setTransform(hkTransformf const&)
// hkQuaternionf *hkpTransformShape::setTransform(hkpTransformShape *this, const hkTransformf *a2);
// [0x16deff0] (142 bytes) hkpTransformShape::hkpTransformShape(hkpShape const*,hkTransformf const&)
// void hkpTransformShape::hkpTransformShape(hkpTransformShape *this, const hkpShape *a2, const hkTransformf *a3);
