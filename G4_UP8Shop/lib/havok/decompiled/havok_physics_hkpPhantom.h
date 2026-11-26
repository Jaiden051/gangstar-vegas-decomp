#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpPhantom.h
// Library: havok | Module: havok_physics_hkpPhantom
// Binary Address Span: 0x169b060 .. 0x184b0c0 (58 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x169b060] (22 bytes) hkpPhantomCallbackShape::staticClass(void)
// void *hkpPhantomCallbackShape::staticClass();
// [0x16b61a0] (119 bytes) hkpPhantomAgent::cleanup(hkpConstraintOwner &)
// int hkpPhantomAgent::cleanup(hkpPhantomAgent *this);
// [0x16b6220] (9 bytes) hkpPhantomAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// void hkpPhantomAgent::processCollision();
// [0x16b6230] (37 bytes) hkpPhantomAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpPhantomAgent::getPenetrations(int a1, int a2, int a3, int a4, int a5);
// [0x16b6260] (37 bytes) hkpPhantomAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpPhantomAgent::staticGetPenetrations(int a1, int a2, int a3, int a4);
// [0x16b6290] (9 bytes) hkpPhantomAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// void hkpPhantomAgent::getClosestPoints();
// [0x16b62a0] (9 bytes) hkpPhantomAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// void hkpPhantomAgent::staticGetClosestPoints();
// [0x16b62b0] (9 bytes) hkpPhantomAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// void hkpPhantomAgent::linearCast();
// [0x16b62c0] (9 bytes) hkpPhantomAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// void hkpPhantomAgent::staticLinearCast();
// [0x16b62d0] (29 bytes) hkpPhantomAgent::~hkpPhantomAgent()
// void hkpPhantomAgent::~hkpPhantomAgent(hkpPhantomAgent *this);
// [0x16b62f0] (96 bytes) hkpPhantomAgent::~hkpPhantomAgent()
// void hkpPhantomAgent::~hkpPhantomAgent(hkpPhantomAgent *this);
// [0x16b6350] (145 bytes) hkpPhantomAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpPhantomAgent::registerAgent(hkpPhantomAgent *this);
// [0x16b63f0] (106 bytes) hkpPhantomAgent::hkpPhantomAgent(hkpCdBody const&,hkpCdBody const&,hkpContactMgr *)
// void hkpPhantomAgent::hkpPhantomAgent( hkpPhantomAgent *this, const hkpCdBody *a2, const hkpCdBody *a3, hkpContactMgr *a4);
// [0x16b6460] (282 bytes) hkpPhantomAgent::createPhantomAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpPhantomAgent *hkpPhantomAgent::createPhantomAgent( const hkpCdBody *a1, const hkpCdBody *a2, int a3, hkpContactMgr *a4);
// [0x16b6580] (179 bytes) hkpPhantomAgent::createNoPhantomAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// int hkpPhantomAgent::createNoPhantomAgent(uint32_t *a1, uint32_t *a2, int a3);
// [0x172baa0] (29 bytes) hkpPhantomOverlapListener::~hkpPhantomOverlapListener()
// void hkpPhantomOverlapListener::~hkpPhantomOverlapListener(hkpPhantomOverlapListener *this);
// [0x172bc20] (78 bytes) hkpPhantomOverlapListener::~hkpPhantomOverlapListener()
// void hkpPhantomOverlapListener::~hkpPhantomOverlapListener(hkpPhantomOverlapListener *this);
// [0x172dd80] (9 bytes) hkpPhantom::updateShapeCollectionFilter(void)
// void hkpPhantom::updateShapeCollectionFilter();
// [0x172dd90] (204 bytes) hkpPhantom::deallocateInternalArrays(void)
// int hkpPhantom::deallocateInternalArrays(hkpPhantom *this);
// [0x172de60] (155 bytes) hkpPhantom::removeNullOverlapListeners(void)
// int hkpPhantom::removeNullOverlapListeners(hkpPhantom *this);
// [0x172df00] (155 bytes) hkpPhantom::removeNullPhantomListeners(void)
// int hkpPhantom::removeNullPhantomListeners(hkpPhantom *this);
// [0x172dfa0] (76 bytes) hkpPhantom::firePhantomDeleted(void)
// int hkpPhantom::firePhantomDeleted(hkpPhantom *this);
// [0x172dff0] (413 bytes) hkpPhantom::~hkpPhantom()
// void hkpPhantom::~hkpPhantom(hkpPhantom *this);
// [0x172e190] (93 bytes) hkpPhantom::~hkpPhantom()
// void hkpPhantom::~hkpPhantom(hkpPhantom *this);
// [0x172e1f0] (101 bytes) hkpPhantom::firePhantomRemoved(void)
// int hkpPhantom::firePhantomRemoved(hkpPhantom *this);
// [0x172e260] (101 bytes) hkpPhantom::firePhantomAdded(void)
// int hkpPhantom::firePhantomAdded(hkpPhantom *this);
// [0x172e2d0] (101 bytes) hkpPhantom::firePhantomShapeSet(void)
// int hkpPhantom::firePhantomShapeSet(hkpPhantom *this);
// [0x172e340] (1867 bytes) hkpPhantom::setBoundingVolumeData(hkAabb const&)
// unsigned int hkpPhantom::setBoundingVolumeData(hkpPhantom *this, const hkAabb *a2);
// [0x172ea90] (1172 bytes) hkpPhantom::updateBroadPhase(hkAabb const&)
// int hkpPhantom::updateBroadPhase(hkpPhantom *this, const hkAabb *a2);
// [0x172ef30] (112 bytes) hkpPhantom::addPhantomListener(hkpPhantomListener *)
// int hkpPhantom::addPhantomListener(hkpPhantom *this, hkpPhantomListener *a2);
// [0x172efa0] (170 bytes) hkpPhantom::removePhantomListener(hkpPhantomListener *)
// int hkpPhantom::removePhantomListener(hkpPhantom *this, hkpPhantomListener *a2);
// [0x172f050] (112 bytes) hkpPhantom::addPhantomOverlapListener(hkpPhantomOverlapListener *)
// int hkpPhantom::addPhantomOverlapListener(hkpPhantom *this, hkpPhantomOverlapListener *a2);
// [0x172f0c0] (170 bytes) hkpPhantom::removePhantomOverlapListener(hkpPhantomOverlapListener *)
// int hkpPhantom::removePhantomOverlapListener(hkpPhantom *this, hkpPhantomOverlapListener *a2);
// [0x1730a70] (22 bytes) hkpPhantom::staticClass(void)
// void *hkpPhantom::staticClass();
// [0x1775ec0] (125 bytes) hkpPhantomBroadPhaseListener::addCollisionPair(hkpTypedBroadPhaseHandlePair &)
// int hkpPhantomBroadPhaseListener::addCollisionPair(int a1, uint32_t *a2);
// [0x1775f50] (125 bytes) hkpPhantomBroadPhaseListener::removeCollisionPair(hkpTypedBroadPhaseHandlePair &)
// int hkpPhantomBroadPhaseListener::removeCollisionPair(int a1, uint32_t *a2);
// [0x1775fe0] (39 bytes) hkpPhantomBroadPhaseListener::~hkpPhantomBroadPhaseListener()
// void hkpPhantomBroadPhaseListener::~hkpPhantomBroadPhaseListener(hkpPhantomBroadPhaseListener *this);
// [0x1776020] (108 bytes) hkpPhantomBroadPhaseListener::~hkpPhantomBroadPhaseListener()
// void hkpPhantomBroadPhaseListener::~hkpPhantomBroadPhaseListener(hkpPhantomBroadPhaseListener *this);
// [0x182c890] (29 bytes) hkpPhantomListener::~hkpPhantomListener()
// void hkpPhantomListener::~hkpPhantomListener(hkpPhantomListener *this);
// [0x182c8b0] (9 bytes) hkpPhantomListener::phantomAddedCallback(hkpPhantom *)
// void hkpPhantomListener::phantomAddedCallback();
// [0x182c8c0] (9 bytes) hkpPhantomListener::phantomRemovedCallback(hkpPhantom *)
// void hkpPhantomListener::phantomRemovedCallback();
// [0x182c8d0] (52 bytes) hkpPhantomListener::phantomShapeSetCallback(hkpPhantom *)
// int hkpPhantomListener::phantomShapeSetCallback(hkpPhantomListener *this, hkpPhantom *a2);
// [0x182c910] (9 bytes) hkpPhantomListener::phantomDeletedCallback(hkpPhantom *)
// void hkpPhantomListener::phantomDeletedCallback();
// [0x182c980] (45 bytes) hkpPhantomListener::~hkpPhantomListener()
// void hkpPhantomListener::~hkpPhantomListener(hkpPhantomListener *this);
// [0x184a280] (22 bytes) hkpPhantomDisplayViewer::getProcessTag(void)
// int hkpPhantomDisplayViewer::getProcessTag();
// [0x184a2b0] (172 bytes) hkpPhantomDisplayViewer::phantomRemovedCallback(hkpPhantom *)
// int hkpPhantomDisplayViewer::phantomRemovedCallback(hkpPhantomDisplayViewer *this, hkpPhantom *a2);
// [0x184a4f0] (1546 bytes) hkpPhantomDisplayViewer::postSimulationCallback(hkpWorld *)
// int hkpPhantomDisplayViewer::postSimulationCallback(hkpPhantomDisplayViewer *this, hkpWorld *a2);
// [0x184ab10] (66 bytes) hkpPhantomDisplayViewer::registerViewer(void)
// int hkpPhantomDisplayViewer::registerViewer();
// [0x184ab60] (107 bytes) hkpPhantomDisplayViewer::hkpPhantomDisplayViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// void (**hkpPhantomDisplayViewer::hkpPhantomDisplayViewer( uint32_t *a1, uint32_t *a2))(hkpPhantomDisplayViewer *__hidden this);
// [0x184abd0] (92 bytes) hkpPhantomDisplayViewer::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// uint32_t *hkpPhantomDisplayViewer::create(uint32_t *a1);
// [0x184ac30] (122 bytes) hkpPhantomDisplayViewer::removeWorld(hkpWorld *)
// int hkpPhantomDisplayViewer::removeWorld(hkpPhantomDisplayViewer *this, hkpWorld *a2);
// [0x184acb0] (42 bytes) hkpPhantomDisplayViewer::worldRemovedCallback(hkpWorld *)
// int hkpPhantomDisplayViewer::worldRemovedCallback(hkpPhantomDisplayViewer *this, hkpWorld *a2);
// [0x184acf0] (205 bytes) hkpPhantomDisplayViewer::~hkpPhantomDisplayViewer()
// void hkpPhantomDisplayViewer::~hkpPhantomDisplayViewer(hkpPhantomDisplayViewer *this);
// [0x184ae00] (93 bytes) hkpPhantomDisplayViewer::~hkpPhantomDisplayViewer()
// void hkpPhantomDisplayViewer::~hkpPhantomDisplayViewer(hkpPhantomDisplayViewer *this);
// [0x184aea0] (122 bytes) hkpPhantomDisplayViewer::addWorld(hkpWorld *)
// int hkpPhantomDisplayViewer::addWorld(hkpPhantomDisplayViewer *this, hkpWorld *a2);
// [0x184af20] (85 bytes) hkpPhantomDisplayViewer::init(void)
// int hkpPhantomDisplayViewer::init(hkpPhantomDisplayViewer *this);
// [0x184af90] (42 bytes) hkpPhantomDisplayViewer::worldAddedCallback(hkpWorld *)
// int hkpPhantomDisplayViewer::worldAddedCallback(hkpPhantomDisplayViewer *this, hkpWorld *a2);
// [0x184b0c0] (909 bytes) hkpPhantomDisplayViewer::phantomAddedCallback(hkpPhantom *)
// char hkpPhantomDisplayViewer::phantomAddedCallback(hkpPhantomDisplayViewer *this, hkpPhantomDisplayViewer **a2);
