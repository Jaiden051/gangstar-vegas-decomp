#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpSimpleC.h
// Library: havok | Module: havok_physics_hkpSimpleC
// Binary Address Span: 0x17052c0 .. 0x17ce580 (53 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x17052c0] (46 bytes) hkpSimpleClosestContactCollector::reset(void)
// hkpSimpleClosestContactCollector *hkpSimpleClosestContactCollector::reset( hkpSimpleClosestContactCollector *this);
// [0x17052f0] (29 bytes) hkpSimpleClosestContactCollector::~hkpSimpleClosestContactCollector()
// void hkpSimpleClosestContactCollector::~hkpSimpleClosestContactCollector( hkpSimpleClosestContactCollector *this);
// [0x1705310] (86 bytes) hkpSimpleClosestContactCollector::addCdPoint(hkpCdPoint const&)
// int hkpSimpleClosestContactCollector::addCdPoint(int a1, int a2);
// [0x1705370] (78 bytes) hkpSimpleClosestContactCollector::~hkpSimpleClosestContactCollector()
// void hkpSimpleClosestContactCollector::~hkpSimpleClosestContactCollector( hkpSimpleClosestContactCollector *this);
// [0x172b490] (22 bytes) hkpSimpleContactConstraintAtom::staticClass(void)
// void *hkpSimpleContactConstraintAtom::staticClass();
// [0x17306d0] (33 bytes) hkpSimpleContactConstraintAtom::hkpSimpleContactConstraintAtom(hkFinishLoadedObjectFlag)
// uint8_t *hkpSimpleContactConstraintAtom::hkpSimpleContactConstraintAtom(uint8_t *a1, int a2);
// [0x1765550] (277 bytes) hkpSimpleContactConstraintData::getConstraintInfo(hkpConstraintData::ConstraintInfo &)const
// __m128i *hkpSimpleContactConstraintData::getConstraintInfo(int a1, __m128i *a2);
// [0x1765670] (20 bytes) hkpSimpleContactConstraintData::getRuntimeInfo(hkBool,hkpConstraintData::RuntimeInfo &)const
// uint32_t *hkpSimpleContactConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3);
// [0x1765690] (9 bytes) hkpSimpleContactConstraintData::getSolverResults(hkpConstraintRuntime *)const
// int hkpSimpleContactConstraintData::getSolverResults();
// [0x17656a0] (10 bytes) hkpSimpleContactConstraintData::isValid(void)const
// hkpSimpleContactConstraintData *hkpSimpleContactConstraintData::isValid(hkpSimpleContactConstraintData *this);
// [0x17656b0] (12 bytes) hkpSimpleContactConstraintData::getType(void)const
// int hkpSimpleContactConstraintData::getType();
// [0x17656c0] (281 bytes) hkpSimpleContactConstraintData::collisionResponseBeginCallback(hkContactPoint const&,hkpSimpleConstraintInfoInitInput &,hkpBodyVelocity &,hkpSimpleConstraintInfoInitInput &,hkpBodyVelocity &)
// int hkpSimpleContactConstraintData::collisionResponseBeginCallback( int a1, int a2, int a3, int a4, int a5, int a6);
// [0x17657e0] (539 bytes) hkpSimpleContactConstraintData::collisionResponseEndCallback(hkContactPoint const&,float,hkpSimpleConstraintInfoInitInput &,hkpBodyVelocity &,hkpSimpleConstraintInfoInitInput &,hkpBodyVelocity &)
// int hkpSimpleContactConstraintData::collisionResponseEndCallback( int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1765a00] (168 bytes) hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData()
// void hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData(hkpSimpleContactConstraintData *this);
// [0x1765ab0] (245 bytes) hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData()
// void hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData(hkpSimpleContactConstraintData *this);
// [0x1765bb0] (664 bytes) hkpSimpleContactConstraintData::allocateContactPoint(hkpConstraintOwner &,hkContactPoint **,hkpContactPointProperties **)
// int hkpSimpleContactConstraintData::allocateContactPoint(int a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1765e50] (235 bytes) hkpSimpleContactConstraintData::hkpSimpleContactConstraintData(hkpConstraintInstance *,hkpRigidBody *,hkpRigidBody *)
// void hkpSimpleContactConstraintData::hkpSimpleContactConstraintData( hkpSimpleContactConstraintData *this, hkpConstraintInstance *a2, hkpRigidBody *a3, hkpRigidBody *a4);
// [0x1765f40] (12 bytes) hkpSimpleContactConstraintData::getSimpleConstraintContactMgr(void)const
// char *hkpSimpleContactConstraintData::getSimpleConstraintContactMgr(hkpSimpleContactConstraintData *this);
// [0x1776140] (25 bytes) hkpSimpleConstraintContactMgr::cleanup(void)
// hkpSimpleConstraintContactMgr *hkpSimpleConstraintContactMgr::cleanup(hkpSimpleConstraintContactMgr *this);
// [0x1776160] (9 bytes) hkpSimpleConstraintContactMgr::getType(void)const
// int hkpSimpleConstraintContactMgr::getType();
// [0x1776170] (22 bytes) hkpSimpleConstraintContactMgr::getClassType(void)const
// void *hkpSimpleConstraintContactMgr::getClassType();
// [0x1776190] (12 bytes) hkpSimpleConstraintContactMgr::getConstraintInstance(void)
// char *hkpSimpleConstraintContactMgr::getConstraintInstance(hkpSimpleConstraintContactMgr *this);
// [0x17761a0] (12 bytes) hkpSimpleConstraintContactMgr::getConstraintInstance(void)const
// char *hkpSimpleConstraintContactMgr::getConstraintInstance(hkpSimpleConstraintContactMgr *this);
// [0x17761b0] (70 bytes) hkpSimpleConstraintContactMgr::reserveContactPointsImpl(int)
// hkpSimpleConstraintContactMgr *hkpSimpleConstraintContactMgr::reserveContactPointsImpl( hkpSimpleConstraintContactMgr *this, int a2, int a3);
// [0x1776200] (28 bytes) hkpSimpleConstraintContactMgr::getContactPoint(unsigned short)
// int hkpSimpleConstraintContactMgr::getContactPoint(hkpSimpleConstraintContactMgr *this, uint16_t a2);
// [0x1776220] (60 bytes) hkpSimpleConstraintContactMgr::getContactPointProperties(unsigned short)
// int hkpSimpleConstraintContactMgr::getContactPointProperties( hkpSimpleConstraintContactMgr *this, uint16_t a2);
// [0x1776260] (29 bytes) hkpSimpleConstraintContactMgr::Factory::~Factory()
// void hkpSimpleConstraintContactMgr::Factory::~Factory(hkpSimpleConstraintContactMgr::Factory *this);
// [0x1776280] (270 bytes) hkpSimpleConstraintContactMgr::fireCallbacksForEarliestToi(hkpToiEvent &,float &)
// uint8_t *hkpSimpleConstraintContactMgr::fireCallbacksForEarliestToi(uint8_t *a1, int a2, int a3, int a4);
// [0x1776390] (113 bytes) hkpSimpleConstraintContactMgr::confirmToi(hkpToiEvent &,float,hkArray<hkpEntity *,hkContainerHeapAllocator> &)
// int hkpSimpleConstraintContactMgr::confirmToi(int a1, int a2, int64_t a3);
// [0x1776410] (143 bytes) hkpSimpleConstraintContactMgr::getAllContactPointIds(hkArray<unsigned short,hkContainerHeapAllocator> &)const
// int hkpSimpleConstraintContactMgr::getAllContactPointIds( hkpSimpleConstraintContactMgr *this, hkArray<unsigned short, hkContainerHeapAllocator> *a2);
// [0x17764a0] (77 bytes) hkpSimpleConstraintContactMgr::toiCollisionResponseBeginCallback(hkContactPoint const&,hkpSimpleConstraintInfoInitInput &,hkpBodyVelocity &,hkpSimpleConstraintInfoInitInput &,hkpBodyVelocity &)
// int hkpSimpleConstraintContactMgr::toiCollisionResponseBeginCallback( int a1, int a2, int a3, int a4, int a5, int a6);
// [0x17764f0] (89 bytes) hkpSimpleConstraintContactMgr::toiCollisionResponseEndCallback(hkContactPoint const&,float,hkpSimpleConstraintInfoInitInput &,hkpBodyVelocity &,hkpSimpleConstraintInfoInitInput &,hkpBodyVelocity &)
// int hkpSimpleConstraintContactMgr::toiCollisionResponseEndCallback( int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1776550] (536 bytes) hkpSimpleConstraintContactMgr::processContactImpl(hkpCollidable const&,hkpCollidable const&,hkpProcessCollisionInput const&,hkpProcessCollisionData &)
// int *hkpSimpleConstraintContactMgr::processContactImpl(int a1, int a2, int a3, int a4, int a5);
// [0x1776770] (96 bytes) hkpSimpleConstraintContactMgr::Factory::~Factory()
// void hkpSimpleConstraintContactMgr::Factory::~Factory(hkpSimpleConstraintContactMgr::Factory *this);
// [0x1776830] (154 bytes) hkpSimpleConstraintContactMgr::removeToiImpl(hkpConstraintOwner &,hkpContactPointProperties &)
// int hkpSimpleConstraintContactMgr::removeToiImpl(uint32_t *a1, int a2, int a3);
// [0x17768d0] (1719 bytes) hkpSimpleConstraintContactMgr::addContactPointImpl(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &,hkpGskCache const*,hkContactPoint &)
// int hkpSimpleConstraintContactMgr::addContactPointImpl( __m128i a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6, int a7, float *a8);
// [0x1776f90] (940 bytes) hkpSimpleConstraintContactMgr::addToiImpl(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &,float,hkContactPoint &,hkpGskCache const*,float &,hkpContactPointProperties &)
// int hkpSimpleConstraintContactMgr::addToiImpl( __m128i a1, uint32_t *a2, float a3, float a4, int a5, int a6, int a7, float a8, float a9, int *a10, uint8_t *a11);
// [0x1777340] (298 bytes) hkpSimpleConstraintContactMgr::hkpSimpleConstraintContactMgr(hkpWorld *,hkpRigidBody *,hkpRigidBody *)
// void hkpSimpleConstraintContactMgr::hkpSimpleConstraintContactMgr( hkpSimpleConstraintContactMgr *this, hkpWorld *a2, hkpRigidBody *a3, hkpRigidBody *a4);
// [0x1777470] (114 bytes) hkpSimpleConstraintContactMgr::Factory::createContactMgr(hkpCollidable const&,hkpCollidable const&,hkpCollisionInput const&)
// hkpSimpleConstraintContactMgr *hkpSimpleConstraintContactMgr::Factory::createContactMgr(int a1, int a2, int a3);
// [0x17774f0] (998 bytes) hkpSimpleContactConstraintData::freeContactPoint(hkpConstraintOwner &,unsigned short)
// int hkpSimpleContactConstraintData::freeContactPoint( hkpSimpleContactConstraintData *this, hkpConstraintOwner *a2, uint16_t a3);
// [0x17778e0] (278 bytes) hkpSimpleConstraintContactMgr::removeContactPointImpl(unsigned short,hkpConstraintOwner &)
// int hkpSimpleConstraintContactMgr::removeContactPointImpl( hkpSimpleConstraintContactMgr *this, uint16_t a2, hkpConstraintOwner *a3);
// [0x1777a00] (41 bytes) hkpSimpleConstraintContactMgr::Factory::Factory(hkpWorld *)
// hkpSimpleConstraintContactMgr::Factory *hkpSimpleConstraintContactMgr::Factory::Factory( hkpSimpleConstraintContactMgr::Factory *this, hkpWorld *a2);
// [0x1777ac0] (248 bytes) hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr()
// void hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr(hkpWorldCallbackUtil **this);
// [0x1777bc0] (93 bytes) hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr()
// void hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr(hkpWorldCallbackUtil **this);
// [0x177b460] (222 bytes) hkpSimpleContactConstraintAtomUtil::allocateAtom(int,int,int,int)
// int hkpSimpleContactConstraintAtomUtil::allocateAtom( hkpSimpleContactConstraintAtomUtil *this, int a2, int a3, int16_t a4);
// [0x177b540] (719 bytes) hkpSimpleContactConstraintAtomUtil::copyContents(hkpSimpleContactConstraintAtom *,hkpSimpleContactConstraintAtom const*)
// hkpSimpleContactConstraintAtom *hkpSimpleContactConstraintAtomUtil::copyContents( hkpSimpleContactConstraintAtomUtil *this, hkpSimpleContactConstraintAtom *a2);
// [0x177b810] (238 bytes) hkpSimpleContactConstraintAtomUtil::expandOne(hkpSimpleContactConstraintAtom *,hkPadSpu<bool> &)
// hkpSimpleContactConstraintAtom *hkpSimpleContactConstraintAtomUtil::expandOne( hkpSimpleContactConstraintAtom *a1, uint8_t *a2);
// [0x177b900] (158 bytes) hkpSimpleContactConstraintAtomUtil::optimizeCapacity(hkpSimpleContactConstraintAtom *,int,hkPadSpu<bool> &)
// hkpSimpleContactConstraintAtom *hkpSimpleContactConstraintAtomUtil::optimizeCapacity( hkpSimpleContactConstraintAtom *a1, int a2, uint8_t *a3);
// [0x177b9a0] (2194 bytes) hkpSimpleCollisionResponse::solveSingleContact(hkContactPoint const&,float,hkpSimpleConstraintUtilCollideParams &,hkpMotion *,hkpMotion *,hkpDynamicsContactMgr *,hkpSimpleCollisionResponse::SolveSingleOutput &)
// int hkpSimpleCollisionResponse::solveSingleContact( int a1, float a2, int a3, int a4, float *a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, float a36, float a37, float a38, float a39, float a40, float a41, float a42, float a43, float a44, float a45, float a46, float a47, float a48, float a49, float a50, float a51, int a52, int a53, int a54, int a55, unsigned int a56, unsigned int a57, unsigned int a58, unsigned int a59, float a60, float a61, float a62, int a63, int a64);
// [0x177c240] (2256 bytes) hkpSimpleCollisionResponse::solveSingleContact2(hkpSimpleContactConstraintData *,hkContactPoint const&,hkpSimpleConstraintUtilCollideParams &,hkpRigidBody *,hkpRigidBody *,hkpVelocityAccumulator *,hkpVelocityAccumulator *,hkpSimpleCollisionResponse::SolveSingleOutput2 &)
// int hkpSimpleCollisionResponse::solveSingleContact2( int *a1, int a2, int a3, int a4, int a5, int a6, int a7, float *a8, int a9, int a10, int a11, int a12, hkMatrix3f *a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, float a32, float a33, float a34, int a35, int a36, int a37, int a38, int a39, float a40, float a41, float a42, int a43);
// [0x1781a10] (334 bytes) hkpSimpleContactConstraintUtil::calculateSeparatingVelocity(hkpRigidBody const*,hkpRigidBody const*,hkVector4f const&,hkVector4f const&,hkContactPoint const*)
// hkpSimpleContactConstraintUtil *hkpSimpleContactConstraintUtil::calculateSeparatingVelocity( hkpSimpleContactConstraintUtil *this, const hkpRigidBody *a2, const hkpRigidBody *a3, const hkVector4f *a4, const hkVector4f *a5, const hkContactPoint *a6);
// [0x178c2c0] (22 bytes) hkpSimpleContactConstraintDataInfo::staticClass(void)
// void *hkpSimpleContactConstraintDataInfo::staticClass();
// [0x17ce580] (720 bytes) hkpSimpleConstraintInfo::BodyInfo::getEnergy(hkpBodyVelocity const&)const
// long double hkpSimpleConstraintInfo::BodyInfo::getEnergy(unsigned int *a1, float *a2);
