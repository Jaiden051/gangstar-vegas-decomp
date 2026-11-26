#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpBvCompr.h
// Library: havok | Module: havok_physics_hkpBvCompr
// Binary Address Span: 0x170a900 .. 0x1819240 (47 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x170a900] (460 bytes) hkpBvCompressedMeshAgent::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpBvCompressedMeshAgent::staticLinearCast(const hkTransformf **a1, int *a2, int a3, int a4, int a5);
// [0x170abf0] (66 bytes) hkpBvCompressedMeshAgent::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpBvCompressedMeshAgent::linearCast(int a1, const hkTransformf **a2, int *a3, int a4, int a5, int a6);
// [0x170b120] (109 bytes) hkpBvCompressedMeshAgent::~hkpBvCompressedMeshAgent()
// void hkpBvCompressedMeshAgent::~hkpBvCompressedMeshAgent(hkpBvCompressedMeshAgent *this);
// [0x170b270] (166 bytes) hkpBvCompressedMeshAgent::~hkpBvCompressedMeshAgent()
// void hkpBvCompressedMeshAgent::~hkpBvCompressedMeshAgent(hkpBvCompressedMeshAgent *this);
// [0x170b3d0] (55 bytes) hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent(hkpContactMgr *)
// void hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent(hkpBvCompressedMeshAgent *this, hkpContactMgr *a2);
// [0x170b410] (79 bytes) hkpBvCompressedMeshAgent::createShapeVsStaticMeshAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpBvCompressedMeshAgent *hkpBvCompressedMeshAgent::createShapeVsStaticMeshAgent( int a1, int a2, int a3, hkpContactMgr *a4);
// [0x170b460] (79 bytes) hkpBvCompressedMeshAgent::createStaticMeshVsShapeAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpBvCompressedMeshAgent *hkpBvCompressedMeshAgent::createStaticMeshVsShapeAgent( int a1, int a2, int a3, hkpContactMgr *a4);
// [0x170b4b0] (182 bytes) hkpBvCompressedMeshAgent::createStaticMeshVsStaticMeshAgent(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *)
// hkpBvCompressedMeshAgent *hkpBvCompressedMeshAgent::createStaticMeshVsStaticMeshAgent( uint32_t *a1, int *a2, int a3, hkpContactMgr *a4);
// [0x170b570] (273 bytes) hkpBvCompressedMeshAgent::registerAgent(hkpCollisionDispatcher *)
// int hkpBvCompressedMeshAgent::registerAgent(hkpBvCompressedMeshAgent *this);
// [0x178dc70] (22 bytes) hkpBvCompressedMeshShape::staticClass(void)
// void *hkpBvCompressedMeshShape::staticClass();
// [0x17b7f50] (29 bytes) hkpBvCompressedMeshShapeGc::~hkpBvCompressedMeshShapeGc()
// void hkpBvCompressedMeshShapeGc::~hkpBvCompressedMeshShapeGc(hkpBvCompressedMeshShapeGc *this);
// [0x17b7fa0] (45 bytes) hkpBvCompressedMeshShapeGc::~hkpBvCompressedMeshShapeGc()
// void hkpBvCompressedMeshShapeGc::~hkpBvCompressedMeshShapeGc(hkpBvCompressedMeshShapeGc *this);
// [0x17b7fd0] (115 bytes) hkpBvCompressedMeshShapeGc::isKeyConvertionAllowed(unsigned int)const
// bool hkpBvCompressedMeshShapeGc::isKeyConvertionAllowed(hkpBvCompressedMeshShapeGc *this, unsigned int a2);
// [0x17b8510] (74 bytes) hkpBvCompressedMeshShape::getAabb(hkTransformf const&,float,hkAabb &)const
// int hkpBvCompressedMeshShape::getAabb( hkpBvCompressedMeshShape *this, const hkTransformf *a2, float a3, hkAabb *a4);
// [0x17b8560] (12 bytes) hkpBvCompressedMeshShape::calcSizeForSpu(hkpShape::CalcSizeForSpuInput const&,int)const
// int hkpBvCompressedMeshShape::calcSizeForSpu();
// [0x17b8570] (15 bytes) hkpBvCompressedMeshShape::getNumChildShapes(void)const
// int hkpBvCompressedMeshShape::getNumChildShapes(hkpBvCompressedMeshShape *this);
// [0x17b8590] (423 bytes) hkpBvCompressedMeshShape::getFirstKey(void)const
// int hkpBvCompressedMeshShape::getFirstKey(hkpBvCompressedMeshShape *this);
// [0x17b8750] (417 bytes) hkpBvCompressedMeshShape::getNextKey(unsigned int)const
// unsigned int hkpBvCompressedMeshShape::getNextKey(hkpBvCompressedMeshShape *this, unsigned int a2);
// [0x17b8de0] (508 bytes) hkpBvCompressedMeshShape::getPrimitiveUserString(unsigned int)const
// hkpBvCompressedMeshShape *hkpBvCompressedMeshShape::getPrimitiveUserString( hkpBvCompressedMeshShape *this, unsigned int a2, unsigned int a3);
// [0x17b8fe0] (513 bytes) hkpBvCompressedMeshShape::getCollisionFilterInfo(unsigned int)const
// int hkpBvCompressedMeshShape::getCollisionFilterInfo(hkpBvCompressedMeshShape *this, unsigned int a2);
// [0x17b9200] (516 bytes) hkpBvCompressedMeshShape::getPrimitiveUserData(unsigned int)const
// int hkpBvCompressedMeshShape::getPrimitiveUserData(hkpBvCompressedMeshShape *this, unsigned int a2);
// [0x17bc4d0] (1809 bytes) hkpBvCompressedMeshShape::castAabbImpl(hkAabb const&,hkVector4f const&,hkpAabbCastCollector &)const
// int hkpBvCompressedMeshShape::castAabbImpl( hkpBvCompressedMeshShape *this, const hkAabb *a2, const hkVector4f *a3, hkpAabbCastCollector *a4);
// [0x17bd9f0] (650 bytes) hkpBvCompressedMeshShape::queryAabb(hkAabb const&,hkArray<unsigned int,hkContainerHeapAllocator> &)const
// int hkpBvCompressedMeshShape::queryAabb( hkpBvCompressedMeshShape *this, const hkAabb *a2, hkArray<unsigned int, hkContainerHeapAllocator> *a3);
// [0x17bea10] (682 bytes) hkpBvCompressedMeshShape::queryAabbImpl(hkAabb const&,unsigned int *,int)const
// int hkpBvCompressedMeshShape::queryAabbImpl( hkpBvCompressedMeshShape *this, const hkAabb *a2, unsigned int *a3, int a4);
// [0x17bfea0] (4101 bytes) hkpBvCompressedMeshShape_Internals::RayCastQuery::processLeaf(hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage4>::NodeContext const&,hkcdRay &)
// int hkpBvCompressedMeshShape_Internals::RayCastQuery::processLeaf(int a1, hkAabb *a2, float *a3);
// [0x17c2250] (2264 bytes) hkpBvCompressedMeshShape::castRay(hkpShapeRayCastInput const&,hkpShapeRayCastOutput &)const
// uint8_t *hkpBvCompressedMeshShape::castRay(uint8_t *a1, float *a2, int a3, float *a4);
// [0x17c2b30] (1665 bytes) hkpBvCompressedMeshShape::castRayWithCollector(hkpShapeRayCastInput const&,hkpCdBody const&,hkpRayHitCollector &)const
// int hkpBvCompressedMeshShape::castRayWithCollector(float *a1, int a2, int a3, int a4);
// [0x17c31c0] (4675 bytes) hkpBvCompressedMeshShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// hkpConvexVerticesShape *hkpBvCompressedMeshShape::getChildShape(int a1, unsigned int a2, int a3);
// [0x17c4a60] (4351 bytes) hkpBvCompressedMeshShapeGc::appendCustomPrimitiveToGeometry(hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int,unsigned long long,11,21>,hkpBvCompressedMeshShapeTreeDataRun>::Decoder const&,int,hkGeometry &)const
// void hkpBvCompressedMeshShapeGc::appendCustomPrimitiveToGeometry( hkpBvCompressedMeshShapeGc *this, const hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun>::Decoder *a2, int a3, hkGeometry *a4);
// [0x17c6160] (334 bytes) hkpBvCompressedMeshShape::convertToGeometry(hkGeometry &,hkArray<unsigned int,hkContainerHeapAllocator> const*,hkArray<unsigned int,hkContainerHeapAllocator> const*)const
// int hkpBvCompressedMeshShape::convertToGeometry( hkpBvCompressedMeshShape *this, hkGeometry *a2, const hkArray<unsigned int, hkContainerHeapAllocator> *a3, const hkArray<unsigned int, hkContainerHeapAllocator> *a4);
// [0x17e1ec0] (12 bytes) hkpBvCompressedMeshShape::getContainer(void)const
// char *hkpBvCompressedMeshShape::getContainer(hkpBvCompressedMeshShape *this);
// [0x17e2ff0] (907 bytes) hkpBvCompressedMeshShape::~hkpBvCompressedMeshShape()
// void hkpBvCompressedMeshShape::~hkpBvCompressedMeshShape(hkpBvCompressedMeshShape *this);
// [0x17e3390] (93 bytes) hkpBvCompressedMeshShape::~hkpBvCompressedMeshShape()
// void hkpBvCompressedMeshShape::~hkpBvCompressedMeshShape(hkpBvCompressedMeshShape *this);
// [0x17e3480] (77 bytes) hkpBvCompressedMeshShape::hkpBvCompressedMeshShape(hkFinishLoadedObjectFlag)
// void (**hkpBvCompressedMeshShape::hkpBvCompressedMeshShape( int a1, int a2))(hkpBvCompressedMeshShape *__hidden this);
// [0x17e7570] (5405 bytes) hkpBvCompressedMeshShape_Internals::GeometryProvider::getCustomPrimitiveInfos(int,hkcdStaticMeshTreeBase::BuildCustomInfos &)const
// void (**hkpBvCompressedMeshShape_Internals::GeometryProvider::getCustomPrimitiveInfos( long double a1, int a2, hkpCylinderShape *a3, uint32_t *a4))(hkpSingleShapeContainer *__hidden this);
// [0x17f2ce0] (8459 bytes) hkpBvCompressedMeshShape::hkpBvCompressedMeshShape(hkpBvCompressedMeshShapeCinfo const&)
// 0x17f2ce0 hkpBvCompressedMeshShape::hkpBvCompressedMeshShape(hkpBvCompressedMeshShapeCinfo const&)
// [0x1818aa0] (29 bytes) hkpBvCompressedMeshShapeCinfo::~hkpBvCompressedMeshShapeCinfo()
// void hkpBvCompressedMeshShapeCinfo::~hkpBvCompressedMeshShapeCinfo(hkpBvCompressedMeshShapeCinfo *this);
// [0x1818ac0] (9 bytes) hkpBvCompressedMeshShapeCinfo::getTriangleCollisionFilterInfo(int)const
// int hkpBvCompressedMeshShapeCinfo::getTriangleCollisionFilterInfo();
// [0x1818ad0] (9 bytes) hkpBvCompressedMeshShapeCinfo::getTriangleUserData(int)const
// int hkpBvCompressedMeshShapeCinfo::getTriangleUserData();
// [0x1818ae0] (9 bytes) hkpBvCompressedMeshShapeCinfo::getConvexShapeCollisionFilterInfo(int)const
// int hkpBvCompressedMeshShapeCinfo::getConvexShapeCollisionFilterInfo();
// [0x1818af0] (9 bytes) hkpBvCompressedMeshShapeCinfo::getConvexShapeUserData(int)const
// int hkpBvCompressedMeshShapeCinfo::getConvexShapeUserData();
// [0x1818c60] (52 bytes) hkpBvCompressedMeshShapeCinfo::getTriangleUserString(int,hkStringPtr &)const
// hkString *hkpBvCompressedMeshShapeCinfo::getTriangleUserString( hkpBvCompressedMeshShapeCinfo *this, int a2, hkStringPtr *a3);
// [0x1818ca0] (52 bytes) hkpBvCompressedMeshShapeCinfo::getConvexShapeUserString(int,hkStringPtr &)const
// hkString *hkpBvCompressedMeshShapeCinfo::getConvexShapeUserString( hkpBvCompressedMeshShapeCinfo *this, int a2, hkStringPtr *a3);
// [0x1818ce0] (78 bytes) hkpBvCompressedMeshShapeCinfo::~hkpBvCompressedMeshShapeCinfo()
// void hkpBvCompressedMeshShapeCinfo::~hkpBvCompressedMeshShapeCinfo(hkpBvCompressedMeshShapeCinfo *this);
// [0x1818e70] (90 bytes) hkpBvCompressedMeshShapeCinfo::hkpBvCompressedMeshShapeCinfo(void)
// void hkpBvCompressedMeshShapeCinfo::hkpBvCompressedMeshShapeCinfo(hkpBvCompressedMeshShapeCinfo *this);
// [0x1819220] (22 bytes) hkpBvCompressedMeshShapeTree::staticClass(void)
// void *hkpBvCompressedMeshShapeTree::staticClass();
// [0x1819240] (22 bytes) hkpBvCompressedMeshShapeTreeDataRun::staticClass(void)
// void *hkpBvCompressedMeshShapeTreeDataRun::staticClass();
