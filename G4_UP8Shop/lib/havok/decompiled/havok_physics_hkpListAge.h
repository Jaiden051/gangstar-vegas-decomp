#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpListAge.h
// Library: havok | Module: havok_physics_hkpListAge
// Binary Address Span: 0x16d1400 .. 0x16d23a0 (19 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x16d1400] (69 bytes) hkpListAgent::cleanup(hkpConstraintOwner &)
// int hkpListAgent::cleanup(hkpListAgent *this, hkpConstraintOwner *a2);
// [0x16d1450] (45 bytes) hkpListAgent::invalidateTim(hkpCollisionInput const&)
// int hkpListAgent::invalidateTim(int a1, int a2);
// [0x16d1480] (69 bytes) hkpListAgent::warpTime(float,float,hkpCollisionInput const&)
// int hkpListAgent::warpTime(int a1, int64_t a2, int a3);
// [0x16d14d0] (100 bytes) hkpListAgent::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpListAgent::updateShapeCollectionFilter(int a1, int a2, int *a3, int a4, int a5);
// [0x16d1640] (608 bytes) hkpListAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// hkLifoAllocator *hkpListAgent::processCollision(int a1, int a2, int *a3, int a4);
// [0x16d1a70] (106 bytes) hkpListAgent::~hkpListAgent()
// void hkpListAgent::~hkpListAgent(hkpListAgent *this);
// [0x16d1bc0] (163 bytes) hkpListAgent::~hkpListAgent()
// void hkpListAgent::~hkpListAgent(hkpListAgent *this);
// [0x16d1d20] (59 bytes) hkpListAgent::initAgentFunc(hkpCollisionDispatcher::AgentFuncs &)
// int hkpListAgent::initAgentFunc(int a1);
// [0x16d1d60] (59 bytes) hkpListAgent::initAgentFuncInverse(hkpCollisionDispatcher::AgentFuncs &)
// int hkpListAgent::initAgentFuncInverse(int a1);
// [0x16d1da0] (131 bytes) hkpListAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpListAgent::registerAgent(hkpListAgent *this);
// [0x16d1e30] (92 bytes) hkpListAgent::hkpListAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpListAgent::hkpListAgent(uint32_t *a1, int a2, int a3, uint32_t *a4, int a5);
// [0x16d1e90] (103 bytes) hkpListAgent::createListBAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpListAgent::createListBAgent(int a1, int a2, uint32_t *a3, int a4);
// [0x16d1f00] (114 bytes) hkpListAgent::createListAAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpListAgent::createListAAgent(int a1, int a2, uint32_t *a3, int a4);
// [0x16d1f80] (88 bytes) hkpListAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpListAgent::staticGetClosestPoints(int a1, uint32_t *a2, int a3, int a4);
// [0x16d1fe0] (58 bytes) hkpListAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpListAgent::getClosestPoints(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0x16d2080] (274 bytes) hkpListAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpListAgent::staticLinearCast(int a1, uint32_t *a2, float *a3, int a4, int a5);
// [0x16d21a0] (66 bytes) hkpListAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpListAgent::linearCast(int a1, int a2, uint32_t *a3, float *a4, int a5, int a6);
// [0x16d2340] (85 bytes) hkpListAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpListAgent::staticGetPenetrations(int a1, uint32_t *a2, int a3, int a4);
// [0x16d23a0] (58 bytes) hkpListAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpListAgent::getPenetrations(int a1, int a2, uint32_t *a3, int a4, int a5);
