#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpStaticC.h
// Library: havok | Module: havok_physics_hkpStaticC
// Binary Address Span: 0x16ee680 .. 0x181ac60 (55 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x16ee680] (526 bytes) hkpStaticCompoundAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpStaticCompoundAgent::staticLinearCast(float a1, float a2, float a3, float a4, float a5);
// [0x16ee9b0] (66 bytes) hkpStaticCompoundAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpStaticCompoundAgent::linearCast(int a1, float a2, float a3, float a4, float a5, float a6);
// [0x16eea00] (166 bytes) hkpStaticCompoundAgent::~hkpStaticCompoundAgent()
// void hkpStaticCompoundAgent::~hkpStaticCompoundAgent(hkpStaticCompoundAgent *this);
// [0x16eeb00] (109 bytes) hkpStaticCompoundAgent::~hkpStaticCompoundAgent()
// void hkpStaticCompoundAgent::~hkpStaticCompoundAgent(hkpStaticCompoundAgent *this);
// [0x16eeb70] (55 bytes) hkpStaticCompoundAgent::hkpStaticCompoundAgent(hkpContactMgr *)
// void hkpStaticCompoundAgent::hkpStaticCompoundAgent(hkpStaticCompoundAgent *this, hkpContactMgr *a2);
// [0x16eebb0] (79 bytes) hkpStaticCompoundAgent::createShapeVsStaticCompoundAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpStaticCompoundAgent *hkpStaticCompoundAgent::createShapeVsStaticCompoundAgent( int a1, int a2, int a3, hkpContactMgr *a4);
// [0x16eec00] (79 bytes) hkpStaticCompoundAgent::createStaticCompoundVsShapeAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpStaticCompoundAgent *hkpStaticCompoundAgent::createStaticCompoundVsShapeAgent( int a1, int a2, int a3, hkpContactMgr *a4);
// [0x16eec50] (79 bytes) hkpStaticCompoundAgent::createStaticCompoundVsStaticCompoundAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpStaticCompoundAgent *hkpStaticCompoundAgent::createStaticCompoundVsStaticCompoundAgent( int a1, int a2, int a3, hkpContactMgr *a4);
// [0x16eeca0] (273 bytes) hkpStaticCompoundAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpStaticCompoundAgent::registerAgent(hkpStaticCompoundAgent *this);
// [0x172ca40] (22 bytes) hkpStaticCompoundShapeBreakableMaterial::staticClass(void)
// void *hkpStaticCompoundShapeBreakableMaterial::staticClass();
// [0x172cfb0] (22 bytes) hkpStaticCompoundShapeBreakableMaterial::getClassType(void)const
// void *hkpStaticCompoundShapeBreakableMaterial::getClassType();
// [0x172cfd0] (16 bytes) hkpStaticCompoundShapeBreakableMaterial::setDefaultMapping(void)
// int hkpStaticCompoundShapeBreakableMaterial::setDefaultMapping(hkpStaticCompoundShapeBreakableMaterial *this);
// [0x172cfe0] (16 bytes) hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndex(hkcdShape const*,unsigned int)const
// int hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndex( hkpStaticCompoundShapeBreakableMaterial *this, const hkcdShape *a2, unsigned int a3);
// [0x172cff0] (32 bytes) hkpStaticCompoundShapeBreakableMaterial::getShapeKeyMaterial(hkcdShape const*,unsigned int)const
// int hkpStaticCompoundShapeBreakableMaterial::getShapeKeyMaterial( hkpStaticCompoundShapeBreakableMaterial *this, const hkcdShape *a2, unsigned int a3);
// [0x172d010] (15 bytes) hkpStaticCompoundShapeBreakableMaterial::convertShapeKeyToSubShapeId(unsigned int)const
// unsigned int hkpStaticCompoundShapeBreakableMaterial::convertShapeKeyToSubShapeId( hkpStaticCompoundShapeBreakableMaterial *this, unsigned int a2);
// [0x172d020] (53 bytes) hkpStaticCompoundShapeBreakableMaterial::convertShapeKeysToSubShapeIds(hkArray<unsigned int,hkContainerHeapAllocator> &)const
// int hkpStaticCompoundShapeBreakableMaterial::convertShapeKeysToSubShapeIds( hkpStaticCompoundShapeBreakableMaterial *this, hkArray<unsigned int, hkContainerHeapAllocator> *a2);
// [0x172d060] (114 bytes) hkpStaticCompoundShapeBreakableMaterial::disableSubShapes(hkcdShape *,short const*,int)
// void hkpStaticCompoundShapeBreakableMaterial::disableSubShapes( hkpStaticCompoundShapeBreakableMaterial *this, hkcdShape *a2, const int16_t *a3, int a4);
// [0x172d0e0] (238 bytes) hkpStaticCompoundShapeBreakableMaterial::getShapeKeysForSubShapes(hkcdShape const*,unsigned int const*,int,hkpBreakableMaterial::ShapeKeyCollector *)const
// int hkpStaticCompoundShapeBreakableMaterial::getShapeKeysForSubShapes( hkpStaticCompoundShapeBreakableMaterial *this, const hkcdShape *a2, const unsigned int *a3, int a4, hkpBreakableMaterial::ShapeKeyCollector *a5);
// [0x172d1d0] (221 bytes) hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndices(hkcdShape const*,hkArray<unsigned int,hkContainerHeapAllocator> const&,hkArray<short,hkContainerHeapAllocator> &)const
// int hkpStaticCompoundShapeBreakableMaterial::getSubShapeMaterialIndices(int a1, int a2, uint32_t *a3, int *a4);
// [0x172d2b0] (341 bytes) hkpStaticCompoundShapeBreakableMaterial::~hkpStaticCompoundShapeBreakableMaterial()
// void hkpStaticCompoundShapeBreakableMaterial::~hkpStaticCompoundShapeBreakableMaterial( hkpStaticCompoundShapeBreakableMaterial *this);
// [0x172d410] (285 bytes) hkpStaticCompoundShapeBreakableMaterial::~hkpStaticCompoundShapeBreakableMaterial()
// void hkpStaticCompoundShapeBreakableMaterial::~hkpStaticCompoundShapeBreakableMaterial( hkpStaticCompoundShapeBreakableMaterial *this);
// [0x172d530] (78 bytes) hkpStaticCompoundShapeBreakableMaterial::hkpStaticCompoundShapeBreakableMaterial(hkArray<hkpBreakableMaterial *,hkContainerHeapAllocator> const&,float)
// int hkpStaticCompoundShapeBreakableMaterial::hkpStaticCompoundShapeBreakableMaterial( uint32_t *a1, int a2, int a3);
// [0x172d580] (55 bytes) hkpStaticCompoundShapeBreakableMaterial::hkpStaticCompoundShapeBreakableMaterial(hkFinishLoadedObjectFlag)
// void (**hkpStaticCompoundShapeBreakableMaterial::hkpStaticCompoundShapeBreakableMaterial( uint32_t *a1))(hkpStaticCompoundShapeBreakableMaterial *__hidden this);
// [0x172d5c0] (55 bytes) hkpStaticCompoundShapeBreakableMaterial::hkpStaticCompoundShapeBreakableMaterial(hkpStaticCompoundShapeBreakableMaterial const&)
// void hkpStaticCompoundShapeBreakableMaterial::hkpStaticCompoundShapeBreakableMaterial( hkpStaticCompoundShapeBreakableMaterial *this, const hkpStaticCompoundShapeBreakableMaterial *a2);
// [0x172d600] (79 bytes) hkpStaticCompoundShapeBreakableMaterial::duplicate(void)
// hkpStaticCompoundShapeBreakableMaterial *hkpStaticCompoundShapeBreakableMaterial::duplicate( hkpStaticCompoundShapeBreakableMaterial *this);
// [0x17df470] (22 bytes) hkpStaticCompoundShape::Instance::staticClass(void)
// void *hkpStaticCompoundShape::Instance::staticClass();
// [0x17df490] (22 bytes) hkpStaticCompoundShape::staticClass(void)
// void *hkpStaticCompoundShape::staticClass();
// [0x180cf50] (12 bytes) hkpStaticCompoundShape::getContainer(void)const
// char *hkpStaticCompoundShape::getContainer(hkpStaticCompoundShape *this);
// [0x180cf60] (121 bytes) hkpStaticCompoundShape::getFirstKey(void)const
// int hkpStaticCompoundShape::getFirstKey(hkpStaticCompoundShape *this);
// [0x180cff0] (212 bytes) hkpStaticCompoundShape::getNextKey(unsigned int)const
// int hkpStaticCompoundShape::getNextKey(hkpStaticCompoundShape *this, unsigned int a2);
// [0x180d0e0] (125 bytes) hkpStaticCompoundShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpStaticCompoundShape::calcSizeForSpu(int a1, int a2);
// [0x180d160] (29 bytes) hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::~AabbCastCollectorWrapper()
// void hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::~AabbCastCollectorWrapper( hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper *this);
// [0x180d1a0] (320 bytes) hkpStaticCompoundShape::getNumChildShapes(void)const
// int hkpStaticCompoundShape::getNumChildShapes(hkpStaticCompoundShape *this);
// [0x180d2f0] (250 bytes) hkpStaticCompoundShape::getMaximumProjection(hkVector4f const&)const
// long double hkpStaticCompoundShape::getMaximumProjection( long double a1, hkpStaticCompoundShape *this, const hkVector4f *a3);
// [0x180d3f0] (411 bytes) hkpStaticCompoundShape::~hkpStaticCompoundShape()
// void hkpStaticCompoundShape::~hkpStaticCompoundShape(hkpStaticCompoundShape *this);
// [0x180d5f0] (78 bytes) hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::~AabbCastCollectorWrapper()
// void hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::~AabbCastCollectorWrapper( hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper *this);
// [0x180d640] (196 bytes) hkpStaticCompoundShape::getCollisionFilterInfo(unsigned int)const
// int hkpStaticCompoundShape::getCollisionFilterInfo(hkpStaticCompoundShape *this, unsigned int a2);
// [0x180d720] (419 bytes) hkpStaticCompoundShape::getAabb(hkTransformf const&,float,hkAabb &)const
// int hkpStaticCompoundShape::getAabb(hkpStaticCompoundShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x180d8d0] (93 bytes) hkpStaticCompoundShape::~hkpStaticCompoundShape()
// void hkpStaticCompoundShape::~hkpStaticCompoundShape(hkpStaticCompoundShape *this);
// [0x180d940] (197 bytes) hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::addHit(unsigned int)
// int hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper::addHit( hkpStaticCompoundShape_Internals::AabbCastQuery::AabbCastCollectorWrapper *this, unsigned int a2);
// [0x180da10] (279 bytes) hkpStaticCompoundShape::hkpStaticCompoundShape(hkpShapeContainer::ReferencePolicy)
// int hkpStaticCompoundShape::hkpStaticCompoundShape(int a1, char a2);
// [0x180db30] (116 bytes) hkpStaticCompoundShape::hkpStaticCompoundShape(hkFinishLoadedObjectFlag)
// int hkpStaticCompoundShape::hkpStaticCompoundShape(int a1, int a2);
// [0x180dbb0] (378 bytes) hkpStaticCompoundShape::setShapeKeyEnabled(unsigned int,unsigned int)
// unsigned int hkpStaticCompoundShape::setShapeKeyEnabled( hkpStaticCompoundShape *this, unsigned int a2, unsigned int a3);
// [0x180dd30] (275 bytes) hkpStaticCompoundShape::isShapeKeyEnabled(unsigned int)const
// int hkpStaticCompoundShape::isShapeKeyEnabled(hkpStaticCompoundShape *this, unsigned int a2);
// [0x180de50] (96 bytes) hkpStaticCompoundShape::enableAllInstancesAndShapeKeys(void)
// int hkpStaticCompoundShape::enableAllInstancesAndShapeKeys(hkpStaticCompoundShape *this);
// [0x180f930] (586 bytes) hkpStaticCompoundShape::queryAabb(hkAabb const&,hkArray<unsigned int,hkContainerHeapAllocator> &)const
// int hkpStaticCompoundShape::queryAabb( uint8_t **this, const hkAabb *a2, hkArray<unsigned int, hkContainerHeapAllocator> *a3);
// [0x1810aa0] (626 bytes) hkpStaticCompoundShape::queryAabbImpl(hkAabb const&,unsigned int *,int)const
// int hkpStaticCompoundShape::queryAabbImpl(uint8_t **this, const hkAabb *a2, unsigned int *a3, int a4);
// [0x1812020] (1809 bytes) hkpStaticCompoundShape::castAabb(hkpShape const*,hkTransformf const&,hkVector4f const&,hkpAabbCastCollector &,float)const
// int hkpStaticCompoundShape::castAabb( uint8_t **this, const hkpShape *a2, const hkTransformf *a3, const hkVector4f *a4, hkpAabbCastCollector *a5, float a6, int a7, int a8, int a9, int a10, int a11, char *a12, int a13, int a14, char *a15, int a16, int a17, int a18, int a19, float a20, float a21, float a22, float a23, float a24, float a25, float a26, float a27, int32_t a28, float a29, int32_t a30, float a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, float a48, float a49, float a50, float a51, int32_t a52, int32_t a53, int32_t a54, int a55, float a56, float a57, float a58, int a59, float a60, float a61, float a62, float a63);
// [0x1812740] (1753 bytes) hkpStaticCompoundShape::castAabbImpl(hkAabb const&,hkVector4f const&,hkpAabbCastCollector &)const
// int hkpStaticCompoundShape::castAabbImpl( uint8_t **this, const hkAabb *a2, const hkVector4f *a3, hkpAabbCastCollector *a4);
// [0x1814270] (3029 bytes) hkpStaticCompoundShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// uint8_t *hkpStaticCompoundShape::castRay(uint8_t *a1, int a2, int a3, float *a4);
// [0x1814e50] (1577 bytes) hkpStaticCompoundShape::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpStaticCompoundShape::castRayWithCollector(int a1, float *a2, int a3, int a4);
// [0x1815480] (3986 bytes) hkpStaticCompoundShape::bake(void)
// int hkpStaticCompoundShape::bake(long double a1, hkpStaticCompoundShape *this);
// [0x1816420] (1259 bytes) hkpStaticCompoundShape::addInstance(hkpShape const*,hkQsTransformf const&)
// int hkpStaticCompoundShape::addInstance( hkpStaticCompoundShape *this, const hkpShape *a2, const hkQsTransformf *a3);
// [0x1816910] (3797 bytes) hkpStaticCompoundShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// __m128i *hkpStaticCompoundShape::getChildShape(int a1, unsigned int a2, __m128i *a3);
// [0x181ac60] (423 bytes) hkpStaticCompoundShape_Internals::getTransformedMaximumProjection(hkpShape const*,hkQsTransformf const&,hkVector4f const&)
// long double hkpStaticCompoundShape_Internals::getTransformedMaximumProjection( hkpStaticCompoundShape_Internals *this, const hkpShape *a2, const hkQsTransformf *a3);
