#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpDefault.h
// Library: havok | Module: havok_physics_hkpDefault
// Binary Address Span: 0x16d64b0 .. 0x1818ed0 (39 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x16d64b0] (22 bytes) hkpDefaultConvexListFilter::staticClass(void)
// void *hkpDefaultConvexListFilter::staticClass();
// [0x16ecb90] (30 bytes) hkpDefaultConvexListFilter::getConvexListCollisionType(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&)const
// bool hkpDefaultConvexListFilter::getConvexListCollisionType(int a1, int a2, int a3, uint32_t *a4);
// [0x16ecbb0] (29 bytes) hkpDefaultConvexListFilter::~hkpDefaultConvexListFilter()
// void hkpDefaultConvexListFilter::~hkpDefaultConvexListFilter(hkpDefaultConvexListFilter *this);
// [0x16ecbd0] (96 bytes) hkpDefaultConvexListFilter::~hkpDefaultConvexListFilter()
// void hkpDefaultConvexListFilter::~hkpDefaultConvexListFilter(hkpDefaultConvexListFilter *this);
// [0x172cec0] (22 bytes) hkpDefaultWorldMemoryWatchDog::staticClass(void)
// void *hkpDefaultWorldMemoryWatchDog::staticClass();
// [0x173f480] (35 bytes) hkpDefaultWorldMaintenanceMgr::init(hkpWorld *)
// int hkpDefaultWorldMaintenanceMgr::init(hkpDefaultWorldMaintenanceMgr *this, hkpWorld *a2);
// [0x173f4b0] (29 bytes) hkpDefaultWorldMaintenanceMgr::~hkpDefaultWorldMaintenanceMgr()
// void hkpDefaultWorldMaintenanceMgr::~hkpDefaultWorldMaintenanceMgr(hkpDefaultWorldMaintenanceMgr *this);
// [0x173f4d0] (96 bytes) hkpDefaultWorldMaintenanceMgr::~hkpDefaultWorldMaintenanceMgr()
// void hkpDefaultWorldMaintenanceMgr::~hkpDefaultWorldMaintenanceMgr(hkpDefaultWorldMaintenanceMgr *this);
// [0x173f530] (520 bytes) hkpDefaultWorldMaintenanceMgr::performMaintenanceNoSplit(hkpWorld *,hkStepInfo &)
// int hkpDefaultWorldMaintenanceMgr::performMaintenanceNoSplit(int a1, int a2, int a3);
// [0x173f7a0] (568 bytes) hkpDefaultWorldMaintenanceMgr::performMaintenance(hkpWorld *,hkStepInfo &)
// int hkpDefaultWorldMaintenanceMgr::performMaintenance(int a1, hkpWorldOperationUtil *a2, int a3);
// [0x173f9e0] (48 bytes) hkpDefaultWorldMaintenanceMgr::hkpDefaultWorldMaintenanceMgr(void)
// void hkpDefaultWorldMaintenanceMgr::hkpDefaultWorldMaintenanceMgr(hkpDefaultWorldMaintenanceMgr *this);
// [0x1770540] (12 bytes) hkpDefaultWorldMemoryWatchDog::getAmountOfFreeHeapMemoryRequested(void)
// int hkpDefaultWorldMemoryWatchDog::getAmountOfFreeHeapMemoryRequested(hkpDefaultWorldMemoryWatchDog *this);
// [0x1770550] (29 bytes) hkpDefaultWorldMemoryWatchDog::~hkpDefaultWorldMemoryWatchDog()
// void hkpDefaultWorldMemoryWatchDog::~hkpDefaultWorldMemoryWatchDog(hkpDefaultWorldMemoryWatchDog *this);
// [0x1770570] (60 bytes) hkpDefaultWorldMemoryWatchDog::reduceConstraintsInIsland(hkWorldMemoryAvailableWatchDog::MemUsageInfo const&,int)
// hkpWorld *hkpDefaultWorldMemoryWatchDog::reduceConstraintsInIsland(int16_t a1, int a2);
// [0x17705b0] (96 bytes) hkpDefaultWorldMemoryWatchDog::~hkpDefaultWorldMemoryWatchDog()
// void hkpDefaultWorldMemoryWatchDog::~hkpDefaultWorldMemoryWatchDog(hkpDefaultWorldMemoryWatchDog *this);
// [0x1770610] (41 bytes) hkpDefaultWorldMemoryWatchDog::hkpDefaultWorldMemoryWatchDog(int)
// void hkpDefaultWorldMemoryWatchDog::hkpDefaultWorldMemoryWatchDog(hkpDefaultWorldMemoryWatchDog *this, int a2);
// [0x1770640] (160 bytes) hkpDefaultWorldMemoryWatchDog::removeObjectsFromIsland(hkpSimulationIsland *,int,int,int &)
// int hkpDefaultWorldMemoryWatchDog::removeObjectsFromIsland( hkpDefaultWorldMemoryWatchDog *this, hkpSimulationIsland *a2, int a3, int *a4);
// [0x17706e0] (219 bytes) hkpDefaultWorldMemoryWatchDog::freeHeapMemoryTillRequestedAmountIsAvailable(hkpWorld *)
// int hkpDefaultWorldMemoryWatchDog::freeHeapMemoryTillRequestedAmountIsAvailable( hkpDefaultWorldMemoryWatchDog *this, hkpWorld *a2);
// [0x17faae0] (22 bytes) hkpDefaultToiResourceMgr::getClassType(void)const
// void *hkpDefaultToiResourceMgr::getClassType();
// [0x17fab00] (12 bytes) hkpDefaultToiResourceMgr::getScratchpadCapacity(void)
// int hkpDefaultToiResourceMgr::getScratchpadCapacity(hkpDefaultToiResourceMgr *this);
// [0x17fab10] (29 bytes) hkpDefaultToiResourceMgr::~hkpDefaultToiResourceMgr()
// void hkpDefaultToiResourceMgr::~hkpDefaultToiResourceMgr(hkpDefaultToiResourceMgr *this);
// [0x17fab30] (12 bytes) hkpDefaultToiResourceMgr::resourcesDepleted(void)
// int hkpDefaultToiResourceMgr::resourcesDepleted();
// [0x17fab40] (9 bytes) hkpDefaultToiResourceMgr::cannotSolve(hkArray<hkpToiResourceMgr::ConstraintViolationInfo,hkContainerHeapAllocator> &)
// int hkpDefaultToiResourceMgr::cannotSolve();
// [0x17fab50] (93 bytes) hkpDefaultToiResourceMgr::~hkpDefaultToiResourceMgr()
// void hkpDefaultToiResourceMgr::~hkpDefaultToiResourceMgr(hkpDefaultToiResourceMgr *this);
// [0x17fabb0] (71 bytes) hkpDefaultToiResourceMgr::endToiAndFreeResources(hkpToiEvent const&,hkArray<hkpToiEvent,hkContainerHeapAllocator> const&,hkpToiResources const&)
// int hkpDefaultToiResourceMgr::endToiAndFreeResources(int a1, int a2, int a3, int a4);
// [0x17fac60] (41 bytes) hkpDefaultToiResourceMgr::hkpDefaultToiResourceMgr(void)
// void hkpDefaultToiResourceMgr::hkpDefaultToiResourceMgr(hkpDefaultToiResourceMgr *this);
// [0x17fac90] (10 bytes) hkpDefaultToiResourceMgr::shouldHandleGivenToi(hkpToiEvent const&)
// uint8_t *hkpDefaultToiResourceMgr::shouldHandleGivenToi(uint8_t *a1);
// [0x17faca0] (224 bytes) hkpDefaultToiResourceMgr::beginToiAndSetupResources(hkpToiEvent const&,hkArray<hkpToiEvent,hkContainerHeapAllocator> const&,hkpToiResources &)
// uint32_t *hkpDefaultToiResourceMgr::beginToiAndSetupResources( uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x1818b00] (19 bytes) hkpDefaultBvCompressedMeshShapeCinfo::getNumVertices(void)const
// int hkpDefaultBvCompressedMeshShapeCinfo::getNumVertices(hkpDefaultBvCompressedMeshShapeCinfo *this);
// [0x1818b20] (19 bytes) hkpDefaultBvCompressedMeshShapeCinfo::getNumTriangles(void)const
// int hkpDefaultBvCompressedMeshShapeCinfo::getNumTriangles(hkpDefaultBvCompressedMeshShapeCinfo *this);
// [0x1818b40] (44 bytes) hkpDefaultBvCompressedMeshShapeCinfo::getVertex(int,hkVector4f &)const
// int hkpDefaultBvCompressedMeshShapeCinfo::getVertex( hkpDefaultBvCompressedMeshShapeCinfo *this, int a2, hkVector4f *a3);
// [0x1818b70] (38 bytes) hkpDefaultBvCompressedMeshShapeCinfo::getIndices(int,int *)const
// int hkpDefaultBvCompressedMeshShapeCinfo::getIndices( hkpDefaultBvCompressedMeshShapeCinfo *this, int a2, int *a3);
// [0x1818ba0] (21 bytes) hkpDefaultBvCompressedMeshShapeCinfo::getTriangleUserData(int)const
// int hkpDefaultBvCompressedMeshShapeCinfo::getTriangleUserData( hkpDefaultBvCompressedMeshShapeCinfo *this, int a2);
// [0x1818bc0] (12 bytes) hkpDefaultBvCompressedMeshShapeCinfo::getNumConvexShapes(void)const
// int hkpDefaultBvCompressedMeshShapeCinfo::getNumConvexShapes(hkpDefaultBvCompressedMeshShapeCinfo *this);
// [0x1818bd0] (106 bytes) hkpDefaultBvCompressedMeshShapeCinfo::getConvexShape(int,hkpConvexShape const*&,hkQsTransformf &)const
// hkQsTransformf *hkpDefaultBvCompressedMeshShapeCinfo::getConvexShape( hkpDefaultBvCompressedMeshShapeCinfo *this, int a2, const hkpConvexShape **a3, hkQsTransformf *a4);
// [0x1818c40] (20 bytes) hkpDefaultBvCompressedMeshShapeCinfo::getConvexShapeUserData(int)const
// int hkpDefaultBvCompressedMeshShapeCinfo::getConvexShapeUserData( hkpDefaultBvCompressedMeshShapeCinfo *this, int a2);
// [0x1818d30] (227 bytes) hkpDefaultBvCompressedMeshShapeCinfo::~hkpDefaultBvCompressedMeshShapeCinfo()
// void hkpDefaultBvCompressedMeshShapeCinfo::~hkpDefaultBvCompressedMeshShapeCinfo( hkpDefaultBvCompressedMeshShapeCinfo *this);
// [0x1818e20] (79 bytes) hkpDefaultBvCompressedMeshShapeCinfo::~hkpDefaultBvCompressedMeshShapeCinfo()
// void hkpDefaultBvCompressedMeshShapeCinfo::~hkpDefaultBvCompressedMeshShapeCinfo( hkpDefaultBvCompressedMeshShapeCinfo *this);
// [0x1818ed0] (221 bytes) hkpDefaultBvCompressedMeshShapeCinfo::addConvexShape(hkpConvexShape const*,hkQsTransformf const&)
// uint32_t *hkpDefaultBvCompressedMeshShapeCinfo::addConvexShape( hkpDefaultBvCompressedMeshShapeCinfo *this, const hkpConvexShape *a2, const hkQsTransformf *a3);
