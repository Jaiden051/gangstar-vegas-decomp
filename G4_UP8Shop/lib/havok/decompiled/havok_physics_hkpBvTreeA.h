#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpBvTreeA.h
// Library: havok | Module: havok_physics_hkpBvTreeA
// Binary Address Span: 0x170bcb0 .. 0x170d870 (26 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x170bcb0] (82 bytes) hkpBvTreeAgent::cleanup(hkpConstraintOwner &)
// int hkpBvTreeAgent::cleanup(hkpBvTreeAgent *this, hkpConstraintOwner *a2);
// [0x170bd10] (66 bytes) hkpBvTreeAgent::invalidateTim(hkpCollisionInput const&)
// int hkpBvTreeAgent::invalidateTim(int a1, int a2);
// [0x170bd60] (90 bytes) hkpBvTreeAgent::warpTime(float,float,hkpCollisionInput const&)
// int hkpBvTreeAgent::warpTime(int a1, int64_t a2, int a3);
// [0x170bdc0] (355 bytes) hkpBvTreeAgent::LinearCastAabbCastCollector::addHit(unsigned int)
// float *hkpBvTreeAgent::LinearCastAabbCastCollector::addHit( hkpBvTreeAgent::LinearCastAabbCastCollector *this, unsigned int a2);
// [0x170bf30] (29 bytes) hkpBvTreeAgent::LinearCastAabbCastCollector::~LinearCastAabbCastCollector()
// void hkpBvTreeAgent::LinearCastAabbCastCollector::~LinearCastAabbCastCollector( hkpBvTreeAgent::LinearCastAabbCastCollector *this);
// [0x170bf50] (714 bytes) hkpBvTreeAgent::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// uint32_t *hkpBvTreeAgent::updateShapeCollectionFilter(hkpNullAgent *a1, int a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x170c270] (78 bytes) hkpBvTreeAgent::LinearCastAabbCastCollector::~LinearCastAabbCastCollector()
// void hkpBvTreeAgent::LinearCastAabbCastCollector::~LinearCastAabbCastCollector( hkpBvTreeAgent::LinearCastAabbCastCollector *this);
// [0x170c2c0] (109 bytes) hkpBvTreeAgent::~hkpBvTreeAgent()
// void hkpBvTreeAgent::~hkpBvTreeAgent(hkpBvTreeAgent *this);
// [0x170c410] (166 bytes) hkpBvTreeAgent::~hkpBvTreeAgent()
// void hkpBvTreeAgent::~hkpBvTreeAgent(hkpBvTreeAgent *this);
// [0x170c620] (106 bytes) hkpBvTreeAgent::hkpBvTreeAgent(hkpContactMgr *)
// void hkpBvTreeAgent::hkpBvTreeAgent(hkpBvTreeAgent *this, hkpContactMgr *a2);
// [0x170c690] (79 bytes) hkpBvTreeAgent::createShapeBvAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpBvTreeAgent *hkpBvTreeAgent::createShapeBvAgent(int a1, int a2, int a3, hkpContactMgr *a4);
// [0x170c6e0] (90 bytes) hkpBvTreeAgent::createBvTreeShapeAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpBvTreeAgent *hkpBvTreeAgent::createBvTreeShapeAgent(int a1, int a2, int a3, hkpContactMgr *a4);
// [0x170c740] (181 bytes) hkpBvTreeAgent::createBvBvAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpBvTreeAgent *hkpBvTreeAgent::createBvBvAgent(int a1, int a2, int a3, hkpContactMgr *a4);
// [0x170c800] (29 bytes) hkpBvTreeAgent::getUseAabbCaching(void)
// hkpBvTreeAgent *hkpBvTreeAgent::getUseAabbCaching(hkpBvTreeAgent *this);
// [0x170c820] (25 bytes) hkpBvTreeAgent::setUseAabbCaching(hkBool)
// int hkpBvTreeAgent::setUseAabbCaching(uint8_t a1);
// [0x170c840] (357 bytes) hkpBvTreeAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpBvTreeAgent::registerAgent(hkpBvTreeAgent *this);
// [0x170c9b0] (106 bytes) hkpBvTreeAgent::defaultAgentCreate(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpBvTreeAgent::defaultAgentCreate(int a1, int a2, uint32_t *a3, int a4);
// [0x170ca20] (389 bytes) hkpBvTreeAgent::calcAabbLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkAabb &)
// unsigned int hkpBvTreeAgent::calcAabbLinearCast(const hkTransformf **a1, int a2, int a3, __m128 *a4);
// [0x170cbb0] (723 bytes) hkpBvTreeAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpBvTreeAgent::staticLinearCast(const hkTransformf **a1, uint32_t *a2, uint32_t *a3, int a4, int a5);
// [0x170ce90] (66 bytes) hkpBvTreeAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpBvTreeAgent::linearCast(int a1, const hkTransformf **a2, uint32_t *a3, uint32_t *a4, int a5, int a6);
// [0x170d030] (99 bytes) hkpBvTreeAgent::staticCalcAabb(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkAabb &)
// int hkpBvTreeAgent::staticCalcAabb(const hkTransformf **a1, int a2, int a3, int a4);
// [0x170d0a0] (961 bytes) hkpBvTreeAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpBvTreeAgent::staticGetClosestPoints(const hkTransformf **a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x170d470] (58 bytes) hkpBvTreeAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpBvTreeAgent::getClosestPoints(int a1, const hkTransformf **a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x170d510] (704 bytes) hkpBvTreeAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpBvTreeAgent::staticGetPenetrations(const hkTransformf **a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x170d7d0] (58 bytes) hkpBvTreeAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpBvTreeAgent::getPenetrations(int a1, const hkTransformf **a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x170d870] (6793 bytes) hkpBvTreeAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpBvTreeAgent::processCollision( hkpNullAgent *a1, const hkTransformf **a2, const hkTransformf **a3, int a4, int a5);
