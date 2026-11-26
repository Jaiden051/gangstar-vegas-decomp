#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpBvAgent.h
// Library: havok | Module: havok_physics_hkpBvAgent
// Binary Address Span: 0x17053c0 .. 0x1706b40 (20 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x17053c0] (29 bytes) hkpBvAgent::~hkpBvAgent()
// void hkpBvAgent::~hkpBvAgent(hkpBvAgent *this);
// [0x17053e0] (70 bytes) hkpBvAgent::cleanup(hkpConstraintOwner &)
// int hkpBvAgent::cleanup(hkpBvAgent *this, hkpConstraintOwner *a2);
// [0x1705430] (55 bytes) hkpBvAgent::invalidateTim(hkpCollisionInput const&)
// int hkpBvAgent::invalidateTim(int a1, int a2);
// [0x1705470] (103 bytes) hkpBvAgent::warpTime(float,float,hkpCollisionInput const&)
// int hkpBvAgent::warpTime(int a1, int64_t a2, int a3);
// [0x17054e0] (39 bytes) hkpBvAgent::removePoint(unsigned short)
// int hkpBvAgent::removePoint(hkpBvAgent *this, uint16_t a2);
// [0x1705510] (39 bytes) hkpBvAgent::commitPotential(unsigned short)
// int hkpBvAgent::commitPotential(hkpBvAgent *this, uint16_t a2);
// [0x1705540] (39 bytes) hkpBvAgent::createZombie(unsigned short)
// int hkpBvAgent::createZombie(hkpBvAgent *this, uint16_t a2);
// [0x1705570] (152 bytes) hkpBvAgent::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpBvAgent::updateShapeCollectionFilter(int a1, int *a2, int a3, int a4, int a5);
// [0x1705760] (424 bytes) hkpBvAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpBvAgent::staticLinearCast( int *a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10);
// [0x1705a30] (482 bytes) hkpBvAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpBvAgent::linearCast(int a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10);
// [0x1705d70] (96 bytes) hkpBvAgent::~hkpBvAgent()
// void hkpBvAgent::~hkpBvAgent(hkpBvAgent *this);
// [0x1705dd0] (482 bytes) hkpBvAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpBvAgent::processCollision(int a1, int *a2, int *a3, uint32_t *a4, int a5, int a6, char a7);
// [0x1706190] (442 bytes) hkpBvAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpBvAgent::getClosestPoints(int a1, int *a2, int *a3, uint32_t *a4, int a5, int a6, char a7);
// [0x17063b0] (384 bytes) hkpBvAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpBvAgent::staticGetClosestPoints(int *a1, int *a2, int *a3, int a4, int a5, int a6, char a7);
// [0x1706590] (442 bytes) hkpBvAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpBvAgent::getPenetrations(int a1, int *a2, int *a3, uint32_t *a4, int a5, int a6, char a7);
// [0x17067b0] (384 bytes) hkpBvAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpBvAgent::staticGetPenetrations(int *a1, int *a2, int *a3, int a4, int a5, int a6, char a7);
// [0x1706990] (186 bytes) hkpBvAgent::hkpBvAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpBvAgent::hkpBvAgent(uint32_t *a1, int *a2, int a3, int *a4, int a5);
// [0x1706a50] (103 bytes) hkpBvAgent::createBvShapeAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpBvAgent::createBvShapeAgent(int *a1, int a2, int *a3, int a4);
// [0x1706ac0] (114 bytes) hkpBvAgent::createShapeBvAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpBvAgent::createShapeBvAgent(int a1, int *a2, int *a3, int a4);
// [0x1706b40] (195 bytes) hkpBvAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpBvAgent::registerAgent(hkpBvAgent *this);
