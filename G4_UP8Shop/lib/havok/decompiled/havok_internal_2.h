#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_internal_2.h
// Library: havok | Module: havok_internal_2
// Binary Address Span: 0x1647d70 .. 0x16c22e0 (251 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1647d70] (1171 bytes) void hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::copyTo<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> &)const
// void hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::copyTo<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *this, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> *a2);
// [0x1648210] (1432 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<hkGeometryProcessingInternals::NearestFeaturePolicy>>(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned long> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<hkGeometryProcessingInternals::NearestFeaturePolicy> &)
// int hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<hkGeometryProcessingInternals::NearestFeaturePolicy>>( int *a1, hkMemoryAllocator *a2, int a3);
// [0x16488b0] (1631 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkGeometryProcessingInternals::TJunctionsQuery>>(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned int> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkGeometryProcessingInternals::TJunctionsQuery> &)
// int hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkGeometryProcessingInternals::TJunctionsQuery>>( uint32_t *a1, hkMemoryAllocator *a2, float *a3);
// [0x1649060] (960 bytes) void hkAlgorithm::_explicitStackQuickSort<unsigned long,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin::Sorter>(unsigned long *,int,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin::Sorter)
// uint32_t *hkAlgorithm::_explicitStackQuickSort<unsigned long,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin::Sorter>( uint32_t *a1, int a2, int a3, int *a4);
// [0x1649420] (960 bytes) void hkAlgorithm::_explicitStackQuickSort<unsigned int,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin::Sorter>(unsigned int *,int,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin::Sorter)
// uint32_t *hkAlgorithm::_explicitStackQuickSort<unsigned int,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin::Sorter>( uint32_t *a1, int a2, int a3, int *a4);
// [0x1653010] (2012 bytes) void hkAlgorithm::quickSortRecursive<hkgpIndexedMeshDefinitions::Triangle *,hkgpIndexedMeshInternals::TriangleSortLess>(hkgpIndexedMeshDefinitions::Triangle * *,int,int,hkgpIndexedMeshInternals::TriangleSortLess)
// int hkAlgorithm::quickSortRecursive<hkgpIndexedMeshDefinitions::Triangle *,hkgpIndexedMeshInternals::TriangleSortLess>( int a1, int a2, int a3);
// [0x1653b30] (390 bytes) void hkAlgorithm::quickSortRecursive<hkgpIndexedMeshDefinitions::Triangle *,hkgpIndexedMesh::SortByAscendingReferences>(hkgpIndexedMeshDefinitions::Triangle * *,int,int,hkgpIndexedMesh::SortByAscendingReferences)
// int hkAlgorithm::quickSortRecursive<hkgpIndexedMeshDefinitions::Triangle *,hkgpIndexedMesh::SortByAscendingReferences>( int a1, int a2, int a3);
// [0x16544a0] (142 bytes) sub_16544A0
// float sub_16544A0(__m128i a1);
// [0x16547a0] (67 bytes) IConvexOverlapImpl::checkOverlap(hkgpMesh::IConvexOverlap::IConvexShape const*,hkgpMesh::IConvexOverlap::IConvexShape const*,float)const
// bool IConvexOverlapImpl::checkOverlap( IConvexOverlapImpl *this, const hkgpMesh::IConvexOverlap::IConvexShape *a2, const hkgpMesh::IConvexOverlap::IConvexShape *a3, float a4);
// [0x1654810] (29 bytes) IConvexOverlapImpl::~IConvexOverlapImpl()
// void IConvexOverlapImpl::~IConvexOverlapImpl(IConvexOverlapImpl *this);
// [0x1654830] (29 bytes) IConvexOverlapImpl::ShapeInterface::~ShapeInterface()
// void IConvexOverlapImpl::ShapeInterface::~ShapeInterface(IConvexOverlapImpl::ShapeInterface *this);
// [0x16548f0] (45 bytes) IConvexOverlapImpl::~IConvexOverlapImpl()
// void IConvexOverlapImpl::~IConvexOverlapImpl(IConvexOverlapImpl *this);
// [0x1654a00] (71 bytes) sub_1654A00
// int sub_1654A00(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1654af0] (78 bytes) IConvexOverlapImpl::ShapeInterface::~ShapeInterface()
// void IConvexOverlapImpl::ShapeInterface::~ShapeInterface(IConvexOverlapImpl::ShapeInterface *this);
// [0x1654bf0] (109 bytes) sub_1654BF0
// hkArrayUtil *sub_1654BF0(hkArrayUtil *result, int *a2, int a3);
// [0x1654c60] (103 bytes) sub_1654C60
// hkMemoryAllocator *sub_1654C60(hkMemoryAllocator *result, uint32_t *a2);
// [0x1654cd0] (111 bytes) sub_1654CD0
// hkMemoryAllocator *sub_1654CD0(hkMemoryAllocator *result, uint32_t *a2);
// [0x1654d40] (103 bytes) sub_1654D40
// hkMemoryAllocator *sub_1654D40(hkMemoryAllocator *result, uint32_t *a2);
// [0x1654db0] (481 bytes) sub_1654DB0
// int sub_1654DB0(int *a1, int a2);
// [0x16551e0] (198 bytes) sub_16551E0
// int *sub_16551E0(int *result, int a2, int a3);
// [0x16556b0] (134 bytes) sub_16556B0
// int sub_16556B0(int a1, int *a2);
// [0x16558a0] (427 bytes) IConvexOverlapImpl::ShapeInterface::getSupportingVertices(void const*,hkVector4f const&,void const*,hkTransformf const&,hkcdVertex *,hkcdVertex *,hkVector4f*)const
// float *IConvexOverlapImpl::ShapeInterface::getSupportingVertices( int a1, int *a2, float *a3, int a4, float *a5, int a6, float *a7, float *a8);
// [0x1655a50] (140 bytes) sub_1655A50
// int sub_1655A50(uint32_t *a1, int a2, uint32_t *a3);
// [0x1655ae0] (2312 bytes) sub_1655AE0
// int sub_1655AE0(int a1);
// [0x16566b0] (584 bytes) sub_16566B0
// float *sub_16566B0(float *a1, uint32_t *a2, int a3);
// [0x165b810] (1004 bytes) int hkcdGskBase::_checkTriangleBoundaries<true>(hkVector4f const&,hkVector4f*,hkVector4f*)
// int hkcdGskBase::_checkTriangleBoundaries<true>( hkcdGskBase *this, const hkVector4f *a2, hkVector4f *a3, hkVector4f *a4);
// [0x165f790] (354 bytes) bool hkgpTopology::Edge<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkgpMeshBase::Vertex*>::applyFan<hkgpMesh::FanEdgeCollector>(hkgpMesh::FanEdgeCollector &)const
// int hkgpTopology::Edge<hkgpMeshBase::Edge,hkgpMeshBase::Vertex,hkgpMeshBase::Triangle,hkgpMeshBase::Vertex*>::applyFan<hkgpMesh::FanEdgeCollector>( unsigned int *a1, hkMemoryAllocator *a2);
// [0x1661e90] (530 bytes) IConvexOverlapImpl::distance(hkgpMesh::IConvexOverlap::IConvexShape const*,hkgpMesh::IConvexOverlap::IConvexShape const*,bool)const
// 0x1661e90 IConvexOverlapImpl::distance(hkgpMesh::IConvexOverlap::IConvexShape const*,hkgpMesh::IConvexOverlap::IConvexShape const*,bool)const
// [0x16623e0] (275 bytes) void hkAlgorithm::quickSortRecursive<hkgpMesh *,hkgpMeshInternals::CompareSetSize>(hkgpMesh * *,int,int,hkgpMeshInternals::CompareSetSize)
// int hkAlgorithm::quickSortRecursive<hkgpMesh *,hkgpMeshInternals::CompareSetSize>(int a1, int a2, int a3);
// [0x1663cf0] (1605 bytes) void hkAlgorithm::quickSortRecursive<hkgpMeshBase::Triangle *,hkgpMesh::SortByArea>(hkgpMeshBase::Triangle * *,int,int,hkgpMesh::SortByArea)
// int hkAlgorithm::quickSortRecursive<hkgpMeshBase::Triangle *,hkgpMesh::SortByArea>(int a1, int a2, int a3);
// [0x1667ca0] (1242 bytes) sub_1667CA0
// int sub_1667CA0(__m128 *a1, int a2, hkVector4f *a3);
// [0x1668640] (1674 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<NearestFeaturePolicy>>(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned long> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<NearestFeaturePolicy> &)
// uint32_t *hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<NearestFeaturePolicy>>( uint32_t *a1, int *a2, float *a3);
// [0x1668cd0] (2020 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<CollideShapeTriangle>>(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned long> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<CollideShapeTriangle> &)
// uint32_t *hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<CollideShapeTriangle>>( uint32_t *a1, int *a2, int *a3);
// [0x16699f0] (1494 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkgpMeshInternals::SimpleCollector>>(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned long> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkgpMeshInternals::SimpleCollector> &)
// uint32_t *hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkgpMeshInternals::SimpleCollector>>( uint32_t *a1, hkMemoryAllocator *a2, int a3);
// [0x166a3a0] (1500 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkgpMeshInternals::TriangleOverlap>>(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned long> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkgpMeshInternals::TriangleOverlap> &)
// int hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,unsigned long>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<hkgpMeshInternals::TriangleOverlap>>( int *a1, hkMemoryAllocator *a2, float *a3);
// [0x166bdc0] (155 bytes) sub_166BDC0
// int sub_166BDC0(int result, unsigned int a2, int a3, int a4);
// [0x166bec0] (2367 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<TrianglePairCollector>>(bool,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> const&,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr> const&,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<TrianglePairCollector> &,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::NodeContext const*,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::NodeContext const*)
// float *hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<TrianglePairCollector>>( char a1, int *a2, uint32_t *a3, hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>> *a4, hkMemoryAllocator ***a5, float *a6, uint32_t *a7);
// [0x166c800] (71 bytes) sub_166C800
// int sub_166C800();
// [0x1671cb0] (210 bytes) sub_1671CB0
// uint32_t *sub_1671CB0(uint32_t *a1);
// [0x16752d0] (120 bytes) sub_16752D0
// void sub_16752D0();
// [0x167ff30] (627 bytes) void hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::Vertex,hkAlgorithm::less<hkgpConvexHullImpl::Vertex>>(hkgpConvexHullImpl::Vertex *,int,int,hkAlgorithm::less<hkgpConvexHullImpl::Vertex>)
// int hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::Vertex,hkAlgorithm::less<hkgpConvexHullImpl::Vertex>>( int a1, int a2, int a3);
// [0x16853e0] (732 bytes) sub_16853E0
// int sub_16853E0(uint32_t *a1, uint32_t *a2, int *a3);
// [0x16856c0] (744 bytes) sub_16856C0
// int sub_16856C0(uint32_t *a1, uint32_t *a2, int *a3);
// [0x1689d80] (1445 bytes) void hkSortedTree<hkgpCgoInternal::EdgeInfo *,hkgpCgoInternal::EdgeInfo,int,16>::traverseMinMax<hkgpCgoInternal::ErrorCollector>(hkgpCgoInternal::ErrorCollector &,int)const
// int hkSortedTree<hkgpCgoInternal::EdgeInfo *,hkgpCgoInternal::EdgeInfo,int,16>::traverseMinMax<hkgpCgoInternal::ErrorCollector>( uint32_t *a1, hkMemoryAllocator *a2, int a3);
// [0x168a330] (2331 bytes) void hkAlgorithm::quickSortRecursive<hkgpCgoInternal::Set,hkAlgorithm::greater<hkgpCgoInternal::Set>>(hkgpCgoInternal::Set *,int,int,hkAlgorithm::greater<hkgpCgoInternal::Set>)
// int hkAlgorithm::quickSortRecursive<hkgpCgoInternal::Set,hkAlgorithm::greater<hkgpCgoInternal::Set>>( int a1, int a2, int a3);
// [0x168ac50] (1845 bytes) void hkAlgorithm::quickSortRecursive<int,hkAlgorithm::less<int>>(int *,int,int,hkAlgorithm::less<int>)
// int hkAlgorithm::quickSortRecursive<int,hkAlgorithm::less<int>>(int a1, int a2, int a3);
// [0x168b390] (2201 bytes) void hkAlgorithm::quickSortRecursive<hkgpCgoInternal::HTriangle,hkAlgorithm::less<hkgpCgoInternal::HTriangle>>(hkgpCgoInternal::HTriangle *,int,int,hkAlgorithm::less<hkgpCgoInternal::HTriangle>)
// int hkAlgorithm::quickSortRecursive<hkgpCgoInternal::HTriangle,hkAlgorithm::less<hkgpCgoInternal::HTriangle>>( int a1, int a2, int a3);
// [0x168e6b0] (344 bytes) void hkAlgorithm::quickSortRecursive<hkgpCgo::ClusterData,hkAlgorithm::less<hkgpCgo::ClusterData>>(hkgpCgo::ClusterData *,int,int,hkAlgorithm::less<hkgpCgo::ClusterData>)
// int hkAlgorithm::quickSortRecursive<hkgpCgo::ClusterData,hkAlgorithm::less<hkgpCgo::ClusterData>>( int a1, int a2, int a3);
// [0x168f0a0] (1545 bytes) void hkAlgorithm::quickSortRecursive<float,hkAlgorithm::less<float>>(float *,int,int,hkAlgorithm::less<float>)
// int hkAlgorithm::quickSortRecursive<float,hkAlgorithm::less<float>>(int a1, int a2, int a3);
// [0x1690478] (1 bytes) nullsub_699
// void nullsub_699();
// [0x16904a0] (193 bytes) sub_16904A0
// uint32_t *sub_16904A0();
// [0x1690808] (1 bytes) nullsub_700
// void nullsub_700();
// [0x1690810] (20 bytes) sub_1690810
// int sub_1690810(int (***a1)(uint32_t));
// [0x1690830] (45 bytes) sub_1690830
// int sub_1690830(int a1, int a2);
// [0x16908a0] (397 bytes) sub_16908A0
// uint32_t *sub_16908A0();
// [0x1690a50] (45 bytes) sub_1690A50
// void sub_1690A50(uint32_t *a1);
// [0x1690da0] (96 bytes) sub_1690DA0
// int sub_1690DA0(int a1);
// [0x1692900] (73 bytes) sub_1692900
// uint32_t *sub_1692900(uint32_t *a1, int a2);
// [0x1692950] (20 bytes) sub_1692950
// int sub_1692950(int (***a1)(uint32_t));
// [0x1692970] (45 bytes) sub_1692970
// void sub_1692970(uint32_t *a1);
// [0x16929a0] (45 bytes) sub_16929A0
// void sub_16929A0(uint32_t *a1);
// [0x16929d0] (45 bytes) sub_16929D0
// void sub_16929D0(uint32_t *a1);
// [0x1692a00] (45 bytes) sub_1692A00
// void sub_1692A00(uint32_t *a1);
// [0x1692a50] (200 bytes) sub_1692A50
// uint32_t *sub_1692A50();
// [0x1692b20] (20 bytes) sub_1692B20
// int sub_1692B20(int (***a1)(uint32_t));
// [0x1692b40] (45 bytes) sub_1692B40
// int sub_1692B40(int a1, int a2);
// [0x1692b90] (239 bytes) sub_1692B90
// uint32_t *sub_1692B90();
// [0x1692c80] (20 bytes) sub_1692C80
// int sub_1692C80(int (***a1)(uint32_t));
// [0x1692ca0] (175 bytes) sub_1692CA0
// void (**sub_1692CA0(int a1, int a2))(hkpSingleShapeContainer *__hidden this);
// [0x1692d90] (346 bytes) sub_1692D90
// uint32_t *sub_1692D90();
// [0x1693288] (1 bytes) nullsub_701
// void nullsub_701();
// [0x16932b0] (193 bytes) sub_16932B0
// uint32_t *sub_16932B0();
// [0x1693380] (20 bytes) sub_1693380
// int sub_1693380(int (***a1)(uint32_t));
// [0x16933a0] (45 bytes) sub_16933A0
// int sub_16933A0(int a1, int a2);
// [0x16933f0] (226 bytes) sub_16933F0
// uint32_t *sub_16933F0();
// [0x16934f0] (7 bytes) `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpCollidable const&,hkpCollidable const&)const
// hkpNullCollisionFilter *`non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled( hkpNullCollisionFilter *this, const hkpCollidable *a2, const hkpCollidable *a3);
// [0x1693510] (7 bytes) `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,unsigned int)const
// uint8_t *`non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(uint8_t *a1);
// [0x1693530] (7 bytes) `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,hkpShapeContainer const&,unsigned int,unsigned int)const
// uint8_t *`non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(uint8_t *a1);
// [0x1693550] (7 bytes) `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpShapeRayCastInput const&,hkpShapeContainer const&,unsigned int)const
// uint8_t *`non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(uint8_t *a1);
// [0x1693570] (7 bytes) `non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(hkpWorldRayCastInput const&,hkpCollidable const&)const
// uint8_t *`non-virtual thunk to'hkpNullCollisionFilter::isCollisionEnabled(uint8_t *a1);
// [0x16935d0] (10 bytes) `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter()
// void `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter(hkpNullCollisionFilter *this);
// [0x16935e0] (10 bytes) `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter()
// void `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter(hkpNullCollisionFilter *this);
// [0x16935f0] (10 bytes) `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter()
// void `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter(hkpNullCollisionFilter *this);
// [0x1693600] (10 bytes) `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter()
// void `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter(hkpNullCollisionFilter *this);
// [0x1693670] (10 bytes) `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter()
// void `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter(hkpNullCollisionFilter *this);
// [0x1693680] (10 bytes) `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter()
// void `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter(hkpNullCollisionFilter *this);
// [0x1693690] (10 bytes) `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter()
// void `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter(hkpNullCollisionFilter *this);
// [0x16936a0] (10 bytes) `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter()
// void `non-virtual thunk to'hkpNullCollisionFilter::~hkpNullCollisionFilter(hkpNullCollisionFilter *this);
// [0x16936b0] (20 bytes) sub_16936B0
// int sub_16936B0(int (***a1)(uint32_t));
// [0x16936d0] (63 bytes) sub_16936D0
// int (**sub_16936D0(int a1, int a2))(int);
// [0x1693730] (226 bytes) sub_1693730
// uint32_t *sub_1693730();
// [0x1693820] (20 bytes) sub_1693820
// int sub_1693820(int (***a1)(uint32_t));
// [0x1693840] (45 bytes) sub_1693840
// int sub_1693840(int a1, int a2);
// [0x1693890] (228 bytes) sub_1693890
// uint32_t *sub_1693890();
// [0x16939a0] (162 bytes) sub_16939A0
// void sub_16939A0();
// [0x1693a50] (20 bytes) sub_1693A50
// int sub_1693A50(int (***a1)(uint32_t));
// [0x1693a70] (45 bytes) sub_1693A70
// int sub_1693A70(int a1, int a2);
// [0x1693ac0] (225 bytes) sub_1693AC0
// uint32_t *sub_1693AC0();
// [0x1693bd0] (142 bytes) sub_1693BD0
// void sub_1693BD0();
// [0x16968e0] (73 bytes) sub_16968E0
// uint32_t *sub_16968E0(uint32_t *a1, int a2);
// [0x1696930] (20 bytes) sub_1696930
// int sub_1696930(int (***a1)(uint32_t));
// [0x1696970] (202 bytes) sub_1696970
// uint32_t *sub_1696970();
// [0x1696a40] (20 bytes) sub_1696A40
// int sub_1696A40(int (***a1)(uint32_t));
// [0x1696a60] (45 bytes) sub_1696A60
// int sub_1696A60(int a1, int a2);
// [0x1696ab0] (223 bytes) sub_1696AB0
// uint32_t *sub_1696AB0();
// [0x1696bb0] (164 bytes) sub_1696BB0
// void sub_1696BB0();
// [0x1696ea0] (20 bytes) sub_1696EA0
// int sub_1696EA0(int (***a1)(uint32_t));
// [0x1696ec0] (45 bytes) sub_1696EC0
// int sub_1696EC0(int a1, int a2);
// [0x1696f10] (223 bytes) sub_1696F10
// uint32_t *sub_1696F10();
// [0x1697240] (37 bytes) sub_1697240
// uint32_t *sub_1697240(uint32_t *a1);
// [0x1697270] (20 bytes) sub_1697270
// int sub_1697270(int (***a1)(uint32_t));
// [0x16972e0] (202 bytes) sub_16972E0
// uint32_t *sub_16972E0();
// [0x16973b0] (29 bytes) sub_16973B0
// uint32_t *sub_16973B0(uint32_t *a1);
// [0x16973d0] (20 bytes) sub_16973D0
// int sub_16973D0(int (***a1)(uint32_t));
// [0x16976a0] (202 bytes) sub_16976A0
// uint32_t *sub_16976A0();
// [0x1698ed8] (1 bytes) nullsub_702
// void nullsub_702();
// [0x1698f00] (193 bytes) sub_1698F00
// uint32_t *sub_1698F00();
// [0x1698fd8] (1 bytes) nullsub_703
// void nullsub_703();
// [0x1698fe8] (1 bytes) nullsub_704
// void nullsub_704();
// [0x1699010] (195 bytes) sub_1699010
// uint32_t *sub_1699010();
// [0x1699840] (164 bytes) sub_1699840
// void sub_1699840();
// [0x16998f0] (37 bytes) sub_16998F0
// void sub_16998F0(int a1);
// [0x1699920] (48 bytes) sub_1699920
// void sub_1699920();
// [0x1699970] (197 bytes) sub_1699970
// uint32_t *sub_1699970();
// [0x1699a40] (20 bytes) sub_1699A40
// int sub_1699A40(int (***a1)(uint32_t));
// [0x1699a60] (45 bytes) sub_1699A60
// void (**sub_1699A60(int a1, int a2))(hkpSphereShape *__hidden this);
// [0x1699ab0] (223 bytes) sub_1699AB0
// uint32_t *sub_1699AB0();
// [0x1699b98] (1 bytes) nullsub_705
// void nullsub_705();
// [0x1699ba0] (20 bytes) sub_1699BA0
// int sub_1699BA0(int (***a1)(uint32_t));
// [0x1699bc0] (20 bytes) sub_1699BC0
// int sub_1699BC0(int (***a1)(uint32_t));
// [0x1699be0] (20 bytes) sub_1699BE0
// int sub_1699BE0(int (***a1)(uint32_t));
// [0x1699c00] (45 bytes) sub_1699C00
// int sub_1699C00(int a1, int a2);
// [0x1699c30] (45 bytes) sub_1699C30
// int sub_1699C30(int a1);
// [0x1699c60] (45 bytes) sub_1699C60
// int sub_1699C60(int a1);
// [0x1699c90] (777 bytes) sub_1699C90
// uint32_t *sub_1699C90();
// [0x169a070] (268 bytes) sub_169A070
// void sub_169A070();
// [0x169a1a0] (142 bytes) sub_169A1A0
// void sub_169A1A0();
// [0x169a390] (78 bytes) sub_169A390
// int sub_169A390(uint32_t *a1);
// [0x169a400] (142 bytes) sub_169A400
// void sub_169A400();
// [0x169a4b0] (45 bytes) sub_169A4B0
// void sub_169A4B0(uint32_t *a1);
// [0x169ac68] (1 bytes) nullsub_706
// void nullsub_706();
// [0x169ac70] (20 bytes) sub_169AC70
// int sub_169AC70(int (***a1)(uint32_t));
// [0x169ac90] (45 bytes) sub_169AC90
// int sub_169AC90(int a1, int a2);
// [0x169ad00] (392 bytes) sub_169AD00
// uint32_t *sub_169AD00();
// [0x169aea0] (10 bytes) `non-virtual thunk to'hkpCollisionFilter::numShapeKeyHitsLimitBreached(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpBvTreeShape const*,hkAabb &,unsigned int *,int)const
// int `non-virtual thunk to'hkpCollisionFilter::numShapeKeyHitsLimitBreached( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
// [0x169af00] (10 bytes) `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter()
// void `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169af10] (10 bytes) `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter()
// void `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169af20] (10 bytes) `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter()
// void `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169af30] (10 bytes) `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter()
// void `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169afd0] (10 bytes) `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter()
// void `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169afe0] (10 bytes) `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter()
// void `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169aff0] (10 bytes) `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter()
// void `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169b000] (10 bytes) `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter()
// void `non-virtual thunk to'hkpCollisionFilter::~hkpCollisionFilter(hkpCollisionFilter *this);
// [0x169b080] (144 bytes) sub_169B080
// void sub_169B080();
// [0x169b110] (78 bytes) sub_169B110
// int sub_169B110(int a1, int a2);
// [0x169b160] (84 bytes) sub_169B160
// int sub_169B160(uint32_t *a1);
// [0x169b1e0] (197 bytes) sub_169B1E0
// uint32_t *sub_169B1E0();
// [0x169b2b8] (1 bytes) nullsub_707
// void nullsub_707();
// [0x169b2c8] (1 bytes) nullsub_708
// void nullsub_708();
// [0x169b2d8] (1 bytes) nullsub_709
// void nullsub_709();
// [0x169b2e8] (1 bytes) nullsub_710
// void nullsub_710();
// [0x169b2f0] (20 bytes) sub_169B2F0
// int sub_169B2F0(int (***a1)(uint32_t));
// [0x169b310] (45 bytes) sub_169B310
// int sub_169B310(int a1, int a2);
// [0x169b340] (34 bytes) sub_169B340
// void sub_169B340(hkpExtendedMeshShape::ShapesSubpart *a1);
// [0x169b370] (45 bytes) sub_169B370
// int sub_169B370(int a1, int a2);
// [0x169b420] (769 bytes) sub_169B420
// uint32_t *sub_169B420();
// [0x169b738] (1 bytes) nullsub_711
// void nullsub_711();
// [0x169b748] (1 bytes) nullsub_712
// void nullsub_712();
// [0x169b770] (195 bytes) sub_169B770
// uint32_t *sub_169B770();
// [0x169ba50] (20 bytes) sub_169BA50
// int sub_169BA50(int (***a1)(uint32_t));
// [0x169ba70] (45 bytes) sub_169BA70
// int sub_169BA70(int a1, int a2);
// [0x169bac0] (228 bytes) sub_169BAC0
// uint32_t *sub_169BAC0();
// [0x169bbb0] (20 bytes) sub_169BBB0
// int sub_169BBB0(int (***a1)(uint32_t));
// [0x169bbd0] (45 bytes) sub_169BBD0
// void (**sub_169BBD0(int a1, int a2))(hkpCylinderShape *__hidden this);
// [0x169bc20] (230 bytes) sub_169BC20
// uint32_t *sub_169BC20();
// [0x169bd10] (73 bytes) sub_169BD10
// uint32_t *sub_169BD10(uint32_t *a1, int a2);
// [0x169bd60] (20 bytes) sub_169BD60
// int sub_169BD60(int (***a1)(uint32_t));
// [0x169bda0] (202 bytes) sub_169BDA0
// uint32_t *sub_169BDA0();
// [0x169c8b0] (78 bytes) sub_169C8B0
// int sub_169C8B0(uint32_t *a1);
// [0x169e7f0] (611 bytes) void hkAlgorithm::quickSortRecursive<hkpRootCdPoint,hkAlgorithm::less<hkpRootCdPoint>>(hkpRootCdPoint *,int,int,hkAlgorithm::less<hkpRootCdPoint>)
// int hkAlgorithm::quickSortRecursive<hkpRootCdPoint,hkAlgorithm::less<hkpRootCdPoint>>(int a1, int a2, int a3);
// [0x169eab0] (29 bytes) sub_169EAB0
// uint32_t *sub_169EAB0(uint32_t *a1);
// [0x169ead0] (20 bytes) sub_169EAD0
// int sub_169EAD0(int (***a1)(uint32_t));
// [0x169eb10] (202 bytes) sub_169EB10
// uint32_t *sub_169EB10();
// [0x16a1160] (23 bytes) sub_16A1160
// uint8_t *sub_16A1160();
// [0x16a3850] (20 bytes) sub_16A3850
// int sub_16A3850(int (***a1)(uint32_t));
// [0x16a3870] (45 bytes) sub_16A3870
// int sub_16A3870(int a1, int a2);
// [0x16a38c0] (223 bytes) sub_16A38C0
// uint32_t *sub_16A38C0();
// [0x16a39b0] (7 bytes) `non-virtual thunk to'hkpShapeCollection::isWeldingEnabled(void)const
// bool `non-virtual thunk to'hkpShapeCollection::isWeldingEnabled(hkpShapeCollection *this);
// [0x16a39d0] (7 bytes) `non-virtual thunk to'hkpListShape::getNumChildShapes(void)const
// int `non-virtual thunk to'hkpListShape::getNumChildShapes(hkpListShape *this);
// [0x16a3a00] (10 bytes) `non-virtual thunk to'hkpListShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// int `non-virtual thunk to'hkpListShape::getChildShape(int a1, int a2);
// [0x16a3a30] (10 bytes) `non-virtual thunk to'hkpListShape::getCollisionFilterInfo(unsigned int)const
// int `non-virtual thunk to'hkpListShape::getCollisionFilterInfo(hkpListShape *this, unsigned int a2);
// [0x16a3b60] (7 bytes) `non-virtual thunk to'hkpListShape::getNextKey(unsigned int)const
// unsigned int `non-virtual thunk to'hkpListShape::getNextKey(hkpListShape *this, unsigned int a2);
// [0x16a40e0] (7 bytes) `non-virtual thunk to'hkpListShape::getFirstKey(void)const
// int `non-virtual thunk to'hkpListShape::getFirstKey(hkpListShape *this);
// [0x16a41e0] (10 bytes) `non-virtual thunk to'hkpListShape::~hkpListShape()
// void `non-virtual thunk to'hkpListShape::~hkpListShape(hkpListShape *this);
// [0x16a4250] (10 bytes) `non-virtual thunk to'hkpListShape::~hkpListShape()
// void `non-virtual thunk to'hkpListShape::~hkpListShape(hkpListShape *this);
// [0x16b1230] (284 bytes) int hkp3AxisSweep::hkpBpAxis::insertTail<0>(hkp3AxisSweep::hkpBpNode *,hkp3AxisSweep::hkpBpEndPoint *,int)
// int hkp3AxisSweep::hkpBpAxis::insertTail<0>(int *a1, int a2, int a3, int a4);
// [0x16b1350] (287 bytes) int hkp3AxisSweep::hkpBpAxis::insertTail<1>(hkp3AxisSweep::hkpBpNode *,hkp3AxisSweep::hkpBpEndPoint *,int)
// int hkp3AxisSweep::hkpBpAxis::insertTail<1>(int *a1, int a2, int a3, int a4);
// [0x16b1470] (287 bytes) int hkp3AxisSweep::hkpBpAxis::insertTail<2>(hkp3AxisSweep::hkpBpNode *,hkp3AxisSweep::hkpBpEndPoint *,int)
// int hkp3AxisSweep::hkpBpAxis::insertTail<2>(int *a1, int a2, int a3, int a4);
// [0x16b1590] (332 bytes) void hkAlgorithm::quickSortRecursive<hkp3AxisSweep::hkpBpEndPoint,hkAlgorithm::less<hkp3AxisSweep::hkpBpEndPoint>>(hkp3AxisSweep::hkpBpEndPoint *,int,int,hkAlgorithm::less<hkp3AxisSweep::hkpBpEndPoint>)
// uint16_t *hkAlgorithm::quickSortRecursive<hkp3AxisSweep::hkpBpEndPoint,hkAlgorithm::less<hkp3AxisSweep::hkpBpEndPoint>>( int a1, int a2, int a3);
// [0x16b2c30] (2325 bytes) void hkAlgorithm::quickSortRecursive<ValueIntPair<unsigned short>,hkAlgorithm::less<ValueIntPair<unsigned short>>>(ValueIntPair<unsigned short> *,int,int,hkAlgorithm::less<ValueIntPair<unsigned short>>)
// int hkAlgorithm::quickSortRecursive<ValueIntPair<unsigned short>,hkAlgorithm::less<ValueIntPair<unsigned short>>>( int a1, int a2, int a3);
// [0x16b3930] (113 bytes) sub_16B3930
// void sub_16B3930();
// [0x16b3a10] (10 bytes) `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter()
// void `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter(hkpGroupFilter *this);
// [0x16b3a20] (10 bytes) `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter()
// void `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter(hkpGroupFilter *this);
// [0x16b3a30] (10 bytes) `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter()
// void `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter(hkpGroupFilter *this);
// [0x16b3a40] (10 bytes) `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter()
// void `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter(hkpGroupFilter *this);
// [0x16b3ab0] (10 bytes) `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter()
// void `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter(hkpGroupFilter *this);
// [0x16b3ac0] (10 bytes) `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter()
// void `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter(hkpGroupFilter *this);
// [0x16b3ad0] (10 bytes) `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter()
// void `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter(hkpGroupFilter *this);
// [0x16b3ae0] (10 bytes) `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter()
// void `non-virtual thunk to'hkpGroupFilter::~hkpGroupFilter(hkpGroupFilter *this);
// [0x16b3c80] (10 bytes) `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpCollidable const&,hkpCollidable const&)const
// hkpGroupFilter *`non-virtual thunk to'hkpGroupFilter::isCollisionEnabled( hkpGroupFilter *this, const hkpCollidable *a2, const hkpCollidable *a3, int a4);
// [0x16b3d30] (10 bytes) `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,hkpShapeContainer const&,unsigned int,unsigned int)const
// hkpGroupFilter *`non-virtual thunk to'hkpGroupFilter::isCollisionEnabled( hkpGroupFilter *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0x16b3da0] (10 bytes) `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpShapeRayCastInput const&,hkpShapeContainer const&,unsigned int)const
// hkpGroupFilter *`non-virtual thunk to'hkpGroupFilter::isCollisionEnabled( hkpGroupFilter *a1, int a2, int a3, int a4, int a5);
// [0x16b3e00] (10 bytes) `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpWorldRayCastInput const&,hkpCollidable const&)const
// hkpGroupFilter *`non-virtual thunk to'hkpGroupFilter::isCollisionEnabled( hkpGroupFilter *a1, int a2, int a3, int a4);
// [0x16b3f50] (10 bytes) `non-virtual thunk to'hkpGroupFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,unsigned int)const
// hkpGroupFilter *`non-virtual thunk to'hkpGroupFilter::isCollisionEnabled( hkpGroupFilter *a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6, int a7);
// [0x16b40d0] (10 bytes) `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::shouldTerminalBeRemoved(unsigned int,unsigned int const*)
// hkpRemoveTerminalsMoppModifier *`non-virtual thunk to'hkpRemoveTerminalsMoppModifier::shouldTerminalBeRemoved( hkpRemoveTerminalsMoppModifier *this, unsigned int a2, const unsigned int *a3);
// [0x16b4110] (10 bytes) `non-virtual thunk to'hkpRemoveTerminalsMoppModifier2::shouldTerminalBeRemoved(unsigned int,unsigned int const*)
// int64_t `non-virtual thunk to'hkpRemoveTerminalsMoppModifier2::shouldTerminalBeRemoved( hkpRemoveTerminalsMoppModifier2 *this, unsigned int a2, const unsigned int *a3);
// [0x16b41a0] (10 bytes) `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier()
// void `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier( hkpRemoveTerminalsMoppModifier *this);
// [0x16b41f0] (10 bytes) `non-virtual thunk to'hkpRemoveTerminalsMoppModifier2::~hkpRemoveTerminalsMoppModifier2()
// void `non-virtual thunk to'hkpRemoveTerminalsMoppModifier2::~hkpRemoveTerminalsMoppModifier2( hkpRemoveTerminalsMoppModifier2 *this);
// [0x16b4270] (10 bytes) `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::addTerminalRemoveInfo(int)
// int `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::addTerminalRemoveInfo( hkpRemoveTerminalsMoppModifier *this, int a2);
// [0x16b42f0] (7 bytes) `non-virtual thunk to'hkpRemoveTerminalsMoppModifier2::~hkpRemoveTerminalsMoppModifier2()
// void `non-virtual thunk to'hkpRemoveTerminalsMoppModifier2::~hkpRemoveTerminalsMoppModifier2( hkpRemoveTerminalsMoppModifier2 *this);
// [0x16b4360] (10 bytes) `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier()
// void `non-virtual thunk to'hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier( hkpRemoveTerminalsMoppModifier *this);
// [0x16b4740] (29 bytes) sub_16B4740
// uint32_t *sub_16B4740(uint32_t *a1);
// [0x16b4760] (20 bytes) sub_16B4760
// int sub_16B4760(int (***a1)(uint32_t));
// [0x16b47c0] (316 bytes) sub_16B47C0
// uint32_t *sub_16B47C0();
// [0x16b4900] (20 bytes) sub_16B4900
// int sub_16B4900(int (***a1)(uint32_t));
// [0x16b4920] (45 bytes) sub_16B4920
// int sub_16B4920(int a1, int a2);
// [0x16b4970] (226 bytes) sub_16B4970
// uint32_t *sub_16B4970();
// [0x16b4a60] (20 bytes) sub_16B4A60
// int sub_16B4A60(int (***a1)(uint32_t));
// [0x16b4a80] (45 bytes) sub_16B4A80
// int sub_16B4A80(int a1, int a2);
// [0x16b4ad0] (226 bytes) sub_16B4AD0
// uint32_t *sub_16B4AD0();
// [0x16b6640] (20 bytes) sub_16B6640
// int sub_16B6640(int (***a1)(uint32_t));
// [0x16b6660] (45 bytes) sub_16B6660
// int sub_16B6660(int a1, int a2);
// [0x16b66b0] (223 bytes) sub_16B66B0
// uint32_t *sub_16B66B0();
// [0x16b9a70] (10 bytes) `non-virtual thunk to'hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape()
// void `non-virtual thunk to'hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape( hkpStorageExtendedMeshShape *this);
// [0x16b9ae0] (10 bytes) `non-virtual thunk to'hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape()
// void `non-virtual thunk to'hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape( hkpStorageExtendedMeshShape *this);
// [0x16bbbf8] (1 bytes) nullsub_713
// void nullsub_713();
// [0x16bbc08] (1 bytes) nullsub_714
// void nullsub_714();
// [0x16bbc30] (197 bytes) sub_16BBC30
// uint32_t *sub_16BBC30();
// [0x16bff90] (20 bytes) sub_16BFF90
// int sub_16BFF90(int (***a1)(uint32_t));
// [0x16bffb0] (45 bytes) sub_16BFFB0
// void (**sub_16BFFB0(int a1, int a2))(hkpShapeBase *__hidden this);
// [0x16c0000] (221 bytes) sub_16C0000
// uint32_t *sub_16C0000();
// [0x16c0100] (142 bytes) sub_16C0100
// void sub_16C0100();
// [0x16c1c88] (1 bytes) nullsub_715
// void nullsub_715();
// [0x16c1c98] (1 bytes) nullsub_716
// void nullsub_716();
// [0x16c1ca8] (1 bytes) nullsub_717
// void nullsub_717();
// [0x16c1cb0] (20 bytes) sub_16C1CB0
// int sub_16C1CB0(int (***a1)(uint32_t));
// [0x16c1cd0] (45 bytes) sub_16C1CD0
// int sub_16C1CD0(int a1, int a2);
// [0x16c1d00] (88 bytes) sub_16C1D00
// int sub_16C1D00(uint32_t *a1);
// [0x16c1d60] (268 bytes) sub_16C1D60
// int sub_16C1D60(uint32_t *a1);
// [0x16c1ef0] (771 bytes) sub_16C1EF0
// uint32_t *sub_16C1EF0();
// [0x16c22e0] (743 bytes) sub_16C22E0
// int sub_16C22E0(float *a1, float *a2, int a3, int a4, int a5);
