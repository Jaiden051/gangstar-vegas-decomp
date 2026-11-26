#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpShapeCo.h
// Library: havok | Module: havok_physics_hkpShapeCo
// Binary Address Span: 0x1696ff0 .. 0x181b900 (39 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1696ff0] (29 bytes) hkpShapeContainer::~hkpShapeContainer()
// void hkpShapeContainer::~hkpShapeContainer(hkpShapeContainer *this);
// [0x1697010] (12 bytes) hkpShapeContainer::isWeldingEnabled(void)const
// int hkpShapeContainer::isWeldingEnabled();
// [0x1697050] (9 bytes) hkpShapeContainer::getCollisionFilterInfo(unsigned int)const
// int hkpShapeContainer::getCollisionFilterInfo();
// [0x1697060] (61 bytes) hkpShapeContainer::getNumChildShapes(void)const
// int hkpShapeContainer::getNumChildShapes(hkpShapeContainer *this);
// [0x16970b0] (78 bytes) hkpShapeContainer::~hkpShapeContainer()
// void hkpShapeContainer::~hkpShapeContainer(hkpShapeContainer *this);
// [0x1699820] (22 bytes) hkpShapeCollection::staticClass(void)
// void *hkpShapeCollection::staticClass();
// [0x169a3e0] (22 bytes) hkpShapeCollectionFilter::staticClass(void)
// void *hkpShapeCollectionFilter::staticClass();
// [0x16a39a0] (14 bytes) hkpShapeCollection::isWeldingEnabled(void)const
// bool hkpShapeCollection::isWeldingEnabled(hkpShapeCollection *this);
// [0x16b4780] (22 bytes) hkpShapeContainer::staticClass(void)
// void *hkpShapeContainer::staticClass();
// [0x16c0190] (76 bytes) hkpShapeCollectionAgent::cleanup(hkpConstraintOwner &)
// int hkpShapeCollectionAgent::cleanup(hkpShapeCollectionAgent *this, hkpConstraintOwner *a2);
// [0x16c01e0] (67 bytes) hkpShapeCollectionAgent::invalidateTim(hkpCollisionInput const&)
// int hkpShapeCollectionAgent::invalidateTim(int a1, int a2);
// [0x16c0230] (91 bytes) hkpShapeCollectionAgent::warpTime(float,float,hkpCollisionInput const&)
// int hkpShapeCollectionAgent::warpTime(int a1, int64_t a2, int a3);
// [0x16c0290] (1066 bytes) hkpShapeCollectionAgent::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpShapeCollectionAgent::updateShapeCollectionFilter(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5);
// [0x16c06c0] (514 bytes) hkpShapeCollectionAgent::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpShapeCollectionAgent::staticGetPenetrations(uint32_t *a1, int a2, int a3, int a4);
// [0x16c0930] (283 bytes) hkpShapeCollectionAgent::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpShapeCollectionAgent::getPenetrations( int a1, uint32_t *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, uint32_t *a11, int a12, char a13);
// [0x16c0a50] (519 bytes) hkpShapeCollectionAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpShapeCollectionAgent::staticLinearCast(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x16c0d80] (297 bytes) hkpShapeCollectionAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpShapeCollectionAgent::linearCast(int a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, ...);
// [0x16c0eb0] (495 bytes) hkpShapeCollectionAgent::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpShapeCollectionAgent::staticGetClosestPoints(uint32_t *a1, int a2, int a3, int a4);
// [0x16c1100] (290 bytes) hkpShapeCollectionAgent::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpShapeCollectionAgent::getClosestPoints(int a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, ...);
// [0x16c1230] (290 bytes) hkpShapeCollectionAgent::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpShapeCollectionAgent::processCollision(int a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, ...);
// [0x16c1360] (106 bytes) hkpShapeCollectionAgent::~hkpShapeCollectionAgent()
// void hkpShapeCollectionAgent::~hkpShapeCollectionAgent(hkpShapeCollectionAgent *this);
// [0x16c13d0] (163 bytes) hkpShapeCollectionAgent::~hkpShapeCollectionAgent()
// void hkpShapeCollectionAgent::~hkpShapeCollectionAgent(hkpShapeCollectionAgent *this);
// [0x16c1480] (251 bytes) hkpShapeCollectionAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpShapeCollectionAgent::registerAgent(hkpShapeCollectionAgent *this);
// [0x16c1580] (644 bytes) hkpShapeCollectionAgent::hkpShapeCollectionAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpShapeCollectionAgent::hkpShapeCollectionAgent(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5);
// [0x16c1810] (103 bytes) hkpShapeCollectionAgent::createListAAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpShapeCollectionAgent::createListAAgent(uint32_t *a1, int a2, int a3, int a4);
// [0x16c1880] (114 bytes) hkpShapeCollectionAgent::createListBAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// uint32_t *hkpShapeCollectionAgent::createListBAgent(int a1, uint32_t *a2, int a3, int a4);
// [0x16eedc0] (39 bytes) hkpShapeCollection::~hkpShapeCollection()
// void hkpShapeCollection::~hkpShapeCollection(hkpShapeCollection *this);
// [0x16eee00] (12 bytes) hkpShapeCollection::getContainer(void)const
// char *hkpShapeCollection::getContainer(hkpShapeCollection *this);
// [0x16eee10] (9 bytes) hkpShapeCollection::setWeldingInfo(unsigned int,short)
// void hkpShapeCollection::setWeldingInfo();
// [0x16eee20] (9 bytes) hkpShapeCollection::initWeldingInfo(hkpWeldingUtility::WeldingType)
// void hkpShapeCollection::initWeldingInfo();
// [0x16eee30] (639 bytes) hkpShapeCollection::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpShapeCollection::castRayWithCollector(int a1, int a2, int a3, int a4);
// [0x16ef0b0] (295 bytes) hkpShapeCollection::getMaximumProjection(hkVector4f const&)const
// long double hkpShapeCollection::getMaximumProjection(hkpShapeCollection *this, const hkVector4f *a2, int a3, ...);
// [0x16ef1e0] (502 bytes) hkpShapeCollection::getAabb(hkTransformf const&,float,hkAabb &)const
// int hkpShapeCollection::getAabb( hkpShapeCollection *this, const hkTransformf *a2, uint32_t *a3, hkAabb *a4, int a5, int a6, int a7, ...);
// [0x16ef3e0] (718 bytes) hkpShapeCollection::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// char *hkpShapeCollection::castRay(char *a1, int a2, int a3, int a4);
// [0x16ef6b0] (108 bytes) hkpShapeCollection::~hkpShapeCollection()
// void hkpShapeCollection::~hkpShapeCollection(hkpShapeCollection *this);
// [0x16ef730] (81 bytes) hkpShapeCollection::hkpShapeCollection(hkcdShapeType::ShapeTypeEnum,hkpShapeCollection::CollectionType)
// int hkpShapeCollection::hkpShapeCollection(int a1, char a2, char a3);
// [0x16ef790] (77 bytes) hkpShapeCollection::hkpShapeCollection(hkFinishLoadedObjectFlag)
// void (**hkpShapeCollection::hkpShapeCollection(int a1, int a2))(hkpShapeCollection *__hidden this);
// [0x181b890] (106 bytes) hkpShapeContinueData::~hkpShapeContinueData()
// void hkpShapeContinueData::~hkpShapeContinueData(hkpShapeContinueData *this);
// [0x181b900] (163 bytes) hkpShapeContinueData::~hkpShapeContinueData()
// void hkpShapeContinueData::~hkpShapeContinueData(hkpShapeContinueData *this);
