#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpCollisi.h
// Library: havok | Module: havok_physics_hkpCollisi
// Binary Address Span: 0x1693980 .. 0x177cf60 (51 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1693980] (22 bytes) hkpCollisionFilter::staticClass(void)
// void *hkpCollisionFilter::staticClass();
// [0x169ae90] (11 bytes) hkpCollisionFilter::numShapeKeyHitsLimitBreached(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpBvTreeShape const*,hkAabb &,unsigned int *,int)const
// int hkpCollisionFilter::numShapeKeyHitsLimitBreached( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
// [0x169aeb0] (75 bytes) hkpCollisionFilter::~hkpCollisionFilter()
// void hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169af40] (144 bytes) hkpCollisionFilter::~hkpCollisionFilter()
// void hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169b010] (72 bytes) hkpCollisionFilter::hkpCollisionFilter(void)
// void hkpCollisionFilter::hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169bd80] (22 bytes) hkpCollisionFilterList::staticClass(void)
// void *hkpCollisionFilterList::staticClass();
// [0x16a0200] (9 bytes) hkpCollisionAgent::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// void hkpCollisionAgent::updateShapeCollectionFilter();
// [0x16c2fb0] (487 bytes) hkpCollisionDispatcher::resetCreationFunctions(void)
// int hkpCollisionDispatcher::resetCreationFunctions(hkpCollisionDispatcher *this);
// [0x16c31a0] (491 bytes) hkpCollisionDispatcher::hkpCollisionDispatcher(hkpCollisionAgent * (*)(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *),hkpContactMgrFactory *)
// int hkpCollisionDispatcher::hkpCollisionDispatcher(hkpCollisionDispatcher *a1, int a2, int a3);
// [0x16c3390] (18 bytes) hkpCollisionDispatcher::setEnableChecks(hkBool)
// int hkpCollisionDispatcher::setEnableChecks(int a1, uint8_t a2);
// [0x16c33b0] (220 bytes) hkpCollisionDispatcher::disableDebugging(void)
// void hkpCollisionDispatcher::disableDebugging(hkpCollisionDispatcher *this);
// [0x16c3490] (274 bytes) hkpCollisionDispatcher::~hkpCollisionDispatcher()
// void hkpCollisionDispatcher::~hkpCollisionDispatcher(hkpCollisionDispatcher *this);
// [0x16c35b0] (93 bytes) hkpCollisionDispatcher::~hkpCollisionDispatcher()
// void hkpCollisionDispatcher::~hkpCollisionDispatcher(hkpCollisionDispatcher *this);
// [0x16c3610] (928 bytes) hkpCollisionDispatcher::internalRegisterCollisionAgent(unsigned char (*)[35],int,hkcdShapeType::ShapeTypeEnum,hkcdShapeType::ShapeTypeEnum,hkcdShapeType::ShapeTypeEnum,hkcdShapeType::ShapeTypeEnum,hkpCollisionDispatcher::DebugEntry (*)[35][35],int)
// int hkpCollisionDispatcher::internalRegisterCollisionAgent( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0x16c39b0] (361 bytes) hkpCollisionDispatcher::registerCollisionAgent(hkpCollisionDispatcher::AgentFuncs &,hkcdShapeType::ShapeTypeEnum,hkcdShapeType::ShapeTypeEnum)
// int hkpCollisionDispatcher::registerCollisionAgent(int *a1, int a2, int a3, int a4);
// [0x16c3b20] (237 bytes) hkpCollisionDispatcher::registerCollisionAgent2(hkpCollisionDispatcher::AgentFuncs &,hkcdShapeType::ShapeTypeEnum,hkcdShapeType::ShapeTypeEnum)
// int hkpCollisionDispatcher::registerCollisionAgent2(int *a1, int a2, int a3, int a4);
// [0x16c3c10] (826 bytes) hkpCollisionDispatcher::registerAgent3(hkpCollisionDispatcher::Agent3Funcs &,hkcdShapeType::ShapeTypeEnum,hkcdShapeType::ShapeTypeEnum)
// int hkpCollisionDispatcher::registerAgent3(int a1, int *a2, int a3, int a4);
// [0x16c3f50] (153 bytes) hkpCollisionDispatcher::updateHasAlternateType(hkcdShapeType::ShapeTypeEnum,hkcdShapeType::ShapeTypeEnum,int)
// uint32_t *hkpCollisionDispatcher::updateHasAlternateType(int a1, int a2, int a3, int a4);
// [0x16c3ff0] (362 bytes) hkpCollisionDispatcher::registerAlternateShapeType(hkcdShapeType::ShapeTypeEnum,hkcdShapeType::ShapeTypeEnum)
// int *hkpCollisionDispatcher::registerAlternateShapeType(uint32_t *a1, int a2, int a3);
// [0x16c4160] (307 bytes) hkpCollisionDispatcher::registerContactMgrFactory(hkpContactMgrFactory *,int,int)
// int hkpCollisionDispatcher::registerContactMgrFactory( hkpCollisionDispatcher *this, hkpContactMgrFactory *a2, int a3, int a4);
// [0x16c42a0] (312 bytes) hkpCollisionDispatcher::registerContactMgrFactoryWithAll(hkpContactMgrFactory *,int)
// uint32_t *hkpCollisionDispatcher::registerContactMgrFactoryWithAll( hkpCollisionDispatcher *this, hkpContactMgrFactory *a2, int a3);
// [0x16c43e0] (561 bytes) hkpCollisionDispatcher::getClosestPoints(hkpShape const*,hkTransformf const&,hkpShape const*,hkTransformf const&,float,hkpCdPointCollector &)
// void hkpCollisionDispatcher::getClosestPoints(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x16c4620] (561 bytes) hkpCollisionDispatcher::getPenetrations(hkpShape const*,hkTransformf const&,hkpShape const*,hkTransformf const&,float,hkpCdBodyPairCollector &)
// void hkpCollisionDispatcher::getPenetrations(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x16c4860] (2693 bytes) hkpCollisionDispatcher::initCollisionQualityInfo(hkpCollisionDispatcher::InitCollisionQualityInfo &)
// int hkpCollisionDispatcher::initCollisionQualityInfo(uint8_t *a1, int a2);
// [0x16c52f0] (1156 bytes) hkpCollisionDispatcher::debugPrintTable(void)
// 0x16c52f0 hkpCollisionDispatcher::debugPrintTable(void)
// [0x16db5a0] (29 bytes) hkpCollisionAgent::~hkpCollisionAgent()
// void hkpCollisionAgent::~hkpCollisionAgent(hkpCollisionAgent *this);
// [0x16db5c0] (9 bytes) hkpCollisionAgent::invalidateTim(hkpCollisionInput const&)
// void hkpCollisionAgent::invalidateTim();
// [0x16db5d0] (9 bytes) hkpCollisionAgent::warpTime(float,float,hkpCollisionInput const&)
// void hkpCollisionAgent::warpTime();
// [0x16db5e0] (9 bytes) hkpCollisionAgent::removePoint(unsigned short)
// void hkpCollisionAgent::removePoint();
// [0x16db5f0] (9 bytes) hkpCollisionAgent::commitPotential(unsigned short)
// void hkpCollisionAgent::commitPotential();
// [0x16db600] (9 bytes) hkpCollisionAgent::createZombie(unsigned short)
// void hkpCollisionAgent::createZombie();
// [0x16db610] (96 bytes) hkpCollisionAgent::~hkpCollisionAgent()
// void hkpCollisionAgent::~hkpCollisionAgent(hkpCollisionAgent *this);
// [0x16f3e40] (135 bytes) hkpCollisionFilterList::isCollisionEnabled(hkpCollidable const&,hkpCollidable const&)const
// hkpCollisionFilterList *hkpCollisionFilterList::isCollisionEnabled( hkpCollisionFilterList *this, const hkpCollidable *a2, const hkpCollidable *a3);
// [0x16f3ee0] (159 bytes) hkpCollisionFilterList::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,unsigned int)const
// uint8_t *hkpCollisionFilterList::isCollisionEnabled(uint8_t *a1, int a2);
// [0x16f3f90] (143 bytes) hkpCollisionFilterList::isCollisionEnabled(hkpShapeRayCastInput const&,hkpShapeContainer const&,unsigned int)const
// uint8_t *hkpCollisionFilterList::isCollisionEnabled(uint8_t *a1, int a2);
// [0x16f4030] (167 bytes) hkpCollisionFilterList::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,hkpShapeContainer const&,unsigned int,unsigned int)const
// uint8_t *hkpCollisionFilterList::isCollisionEnabled(uint8_t *a1, int a2);
// [0x16f40f0] (135 bytes) hkpCollisionFilterList::isCollisionEnabled(hkpWorldRayCastInput const&,hkpCollidable const&)const
// uint8_t *hkpCollisionFilterList::isCollisionEnabled(uint8_t *a1, int a2);
// [0x16f4190] (66 bytes) hkpCollisionFilterList::init(hkpWorld *)
// int hkpCollisionFilterList::init(hkpCollisionFilterList *this, hkpWorld *a2);
// [0x16f41e0] (278 bytes) hkpCollisionFilterList::~hkpCollisionFilterList()
// void hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f4340] (93 bytes) hkpCollisionFilterList::~hkpCollisionFilterList()
// void hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f43e0] (517 bytes) hkpCollisionFilterList::hkpCollisionFilterList(hkArray<hkpCollisionFilter *,hkContainerHeapAllocator> const&)
// unsigned int hkpCollisionFilterList::hkpCollisionFilterList(hkpCollisionFilter *a1, int *a2, int a3, int a4);
// [0x16f45f0] (96 bytes) hkpCollisionFilterList::hkpCollisionFilterList(void)
// void hkpCollisionFilterList::hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f4650] (150 bytes) hkpCollisionFilterList::addCollisionFilter(hkpCollisionFilter *)
// int hkpCollisionFilterList::addCollisionFilter(hkpCollisionFilterList *this, hkpCollisionFilter *a2);
// [0x16f46f0] (158 bytes) hkpCollisionFilterList::removeCollisionFilter(hkpCollisionFilter *)
// int hkpCollisionFilterList::removeCollisionFilter(hkpCollisionFilterList *this, hkpCollisionFilter *a2);
// [0x16f4790] (12 bytes) hkpCollisionFilterList::getCollisionFilters(void)const
// char *hkpCollisionFilterList::getCollisionFilters(hkpCollisionFilterList *this);
// [0x177cb30] (66 bytes) hkpCollisionCallbackUtil::performAttachments(hkpWorld *)
// int hkpCollisionCallbackUtil::performAttachments(hkpCollisionCallbackUtil *this, hkpWorld *a2);
// [0x177cb80] (66 bytes) hkpCollisionCallbackUtil::performDetachments(hkpWorld *)
// hkpWorld *hkpCollisionCallbackUtil::performDetachments(hkpCollisionCallbackUtil *this, hkpWorld *a2);
// [0x177cbd0] (234 bytes) hkpCollisionCallbackUtil::constraintRemovedCallback(hkpConstraintInstance *)
// int hkpCollisionCallbackUtil::constraintRemovedCallback( hkpCollisionCallbackUtil *this, hkpConstraintInstance *a2);
// [0x177ccd0] (234 bytes) hkpCollisionCallbackUtil::constraintAddedCallback(hkpConstraintInstance *)
// int hkpCollisionCallbackUtil::constraintAddedCallback( hkpCollisionCallbackUtil *this, hkpConstraintInstance *a2);
// [0x177ce30] (279 bytes) hkpCollisionCallbackUtil::~hkpCollisionCallbackUtil()
// void hkpCollisionCallbackUtil::~hkpCollisionCallbackUtil(hkpCollisionCallbackUtil *this);
// [0x177cf60] (336 bytes) hkpCollisionCallbackUtil::~hkpCollisionCallbackUtil()
// void hkpCollisionCallbackUtil::~hkpCollisionCallbackUtil(hkpCollisionCallbackUtil *this);
