#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_base_part04.h
// Library: havok | Module: havok_base_part04
// Binary Address Span: 0x1646be0 .. 0x187aac0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1646be0] (1465 bytes) hkGeometryProcessing::computeCurvature(hkGeometry &,hkSimdFloat32 &)
// int hkGeometryProcessing::computeCurvature(const hkGeometry *a1, float *a2);
// [0x1648f10] (321 bytes) hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin>::_trySetSize(hkMemoryAllocator &,int)
// hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin> *hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin>::_trySetSize( hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin> *this, hkMemoryAllocator *a2, hkMemoryAllocator *a3, int a4);
// [0x16497e0] (186 bytes) hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHTask>::_clearAndDeallocate(hkMemoryAllocator &)
// hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHTask> *hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHTask>::_clearAndDeallocate( hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHTask> *this, hkMemoryAllocator *a2);
// [0x16498a0] (196 bytes) hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin>::_clearAndDeallocate(hkMemoryAllocator &)
// hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin> *hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin>::_clearAndDeallocate( hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>::SAHBin> *this, hkMemoryAllocator *a2);
// [0x164c5f0] (5458 bytes) hkGeometryProcessing::generateClusters(hkAabb const*,int,int,hkArray<int,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &)
// int hkGeometryProcessing::generateClusters( hkGeometryProcessing *this, const hkAabb *a2, int a3, hkMemoryAllocator *a4, hkArray<int, hkContainerHeapAllocator> *a5);
// [0x164db50] (3827 bytes) hkGeometryProcessing::fixTJunctions(hkGeometry &,float)
// void hkGeometryProcessing::fixTJunctions(hkGeometryProcessing *this, hkGeometry *a2);
// [0x164ea50] (5195 bytes) hkGeometryProcessing::generateUniformDistribution(hkGeometry const&,int,hkArray<hkVector4f,hkContainerHeapAllocator> &,int,int,hkGeometryProcessing::IFunction<hkVector4f,float> const*)
// bool hkGeometryProcessing::generateUniformDistribution( hkGeometryProcessing *this, const hkGeometry *a2, uint32_t *a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4, int a5, int a6);
// [0x164fea0] (74 bytes) hkGeometryProcessing::generateRandomDistribution(hkGeometry const&,int,hkArray<hkVector4f,hkContainerHeapAllocator> &,int)
// bool hkGeometryProcessing::generateRandomDistribution( hkGeometryProcessing *this, const hkGeometry *a2, uint32_t *a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4);
// [0x164fef0] (138 bytes) hkGeometryProcessing::weldVertices(hkGeometry &)
// void hkGeometryProcessing::weldVertices(hkGeometryProcessing *this);
// [0x1656900] (135 bytes) hkVector4f::setSelect(hkVector4fComparison const&,hkVector4f const&,hkVector4f const&)
// uint32_t *hkVector4f::setSelect(uint32_t *a1, uint8_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1656990] (133 bytes) hkVector4f::setFlipSign(hkVector4f const&,hkSimdFloat32 const&)
// int64_t hkVector4f::setFlipSign(int64_t a1, int *a2);
// [0x1656a20] (119 bytes) hkVector4f::setInterpolate(hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&)
// float *hkVector4f::setInterpolate(float *a1, float *a2, float *a3, float *a4);
// [0x1656aa0] (193 bytes) hkMatrix4f::transformPosition(hkVector4f const&,hkVector4f&)const
// hkMatrix4f *hkMatrix4f::transformPosition(hkMatrix4f *this, const hkVector4f *a2, hkVector4f *a3);
// [0x1656b70] (487 bytes) hkMatrix4f::isApproximatelyIdentity(hkSimdFloat32 const&)const
// bool hkMatrix4f::isApproximatelyIdentity(float *a1, float *a2);
// [0x1656d60] (81 bytes) hkAabb::overlaps(hkAabb const&)const
// bool hkAabb::overlaps(hkAabb *this, const hkAabb *a2);
// [0x1656dc0] (150 bytes) hkGeometryProcessing::crossOffset(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&)
// const hkVector4f *hkGeometryProcessing::crossOffset( hkGeometryProcessing *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x1656e60] (268 bytes) hkGeometryProcessing::tetrahedronVolume6(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// hkGeometryProcessing *hkGeometryProcessing::tetrahedronVolume6( hkGeometryProcessing *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x165b720] (126 bytes) hkSimdFloat32_AdvancedInterface::unroll_setReciprocal<(hkMathAccuracyMode)1,(hkMathDivByZeroMode)0>::apply(float &,hkSimdFloat32 const&)
// float *hkSimdFloat32_AdvancedInterface::unroll_setReciprocal<(hkMathAccuracyMode)1,(hkMathDivByZeroMode)0>::apply(;
// [0x165fc20] (210 bytes) hkGeometryProcessing::HashTable<hkgpMesh::SingleEdge,hkContainerHeapAllocator>::insert(int,hkgpMesh::SingleEdge const&)
// int hkGeometryProcessing::HashTable<hkgpMesh::SingleEdge,hkContainerHeapAllocator>::insert( int *a1, unsigned int a2, uint32_t *a3);
// [0x1661230] (188 bytes) hkArrayBase<hkVector4f>::_append(hkMemoryAllocator &,hkVector4f const*,int)
// int hkArrayBase<hkVector4f>::_append( hkArrayBase<hkVector4f> *this, hkMemoryAllocator *a2, const hkVector4f *a3, int a4);
// [0x16620b0] (82 bytes) hkArray<hkgpMeshBase::Triangle *,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<hkgpMeshBase::Triangle *,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<hkgpMeshBase::Triangle *, hkContainerHeapAllocator> *this);
// [0x1662500] (82 bytes) hkArray<hkgpMeshBase::Vertex *,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<hkgpMeshBase::Vertex *,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<hkgpMeshBase::Vertex *, hkContainerHeapAllocator> *this);
// [0x1664450] (82 bytes) hkArray<hkgpMeshBase::Edge,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<hkgpMeshBase::Edge,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<hkgpMeshBase::Edge, hkContainerHeapAllocator> *this);
// [0x1666720] (117 bytes) hkArrayBase<hkVector4f>::_pushBack(hkMemoryAllocator &,hkVector4f const&)
// uint32_t *hkArrayBase<hkVector4f>::_pushBack( hkArrayBase<hkVector4f> *this, hkMemoryAllocator *a2, const hkVector4f *a3);
// [0x1666b60] (101 bytes) hkArrayBase<hkgpMeshInternals::Segment>::_pushBack(hkMemoryAllocator &,hkgpMeshInternals::Segment const&)
// const hkgpMeshInternals::Segment *hkArrayBase<hkgpMeshInternals::Segment>::_pushBack( hkArrayBase<hkgpMeshInternals::Segment> *this, hkMemoryAllocator *a2, const hkgpMeshInternals::Segment *a3);
// [0x166abc0] (178 bytes) hkLocalArray<unsigned long>::~hkLocalArray()
// void hkLocalArray<unsigned long>::~hkLocalArray(hkLocalArray<unsigned long> *this);
// [0x166ac80] (391 bytes) hkArrayBase<unsigned long>::copyFromArray(hkMemoryAllocator &,hkArrayBase<unsigned long> const&,hkTrait::TraitBool<true>)
// unsigned int *hkArrayBase<unsigned long>::copyFromArray(unsigned int *a1, int *a2, int *a3);
// [0x166be60] (93 bytes) hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>>::_expandOne(hkMemoryAllocator &)
// int hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>>::_expandOne( hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStoragePtr>>> *this, hkMemoryAllocator *a2);
// [0x1692d50] (22 bytes) hkMoppBvTreeShapeBase::staticClass(void)
// void *hkMoppBvTreeShapeBase::staticClass();
// [0x169ebe0] (101 bytes) hkBvTreeAgent3::updateFilter(hkpAgentEntry *,void *,hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *,hkpConstraintOwner &)
// int hkBvTreeAgent3::updateFilter(int a1, int a2, int a3, uint32_t *a4, int a5, int a6, int a7);
// [0x169ec50] (45 bytes) hkBvTreeAgent3::invalidateTim(hkpAgentEntry *,void *,hkpCollisionInput const&)
// int hkBvTreeAgent3::invalidateTim(int a1, int a2, int a3);
// [0x169ec80] (69 bytes) hkBvTreeAgent3::warpTime(hkpAgentEntry *,void *,float,float,hkpCollisionInput const&)
// int hkBvTreeAgent3::warpTime(int a1, int a2, int64_t a3, int a4);
// [0x169ecd0] (108 bytes) hkBvTreeAgent3::initAgentFunc(hkpCollisionDispatcher::Agent3Funcs &)
// int hkBvTreeAgent3::initAgentFunc(int a1);
// [0x169ed40] (98 bytes) hkBvTreeAgent3::registerAgent3(hkpCollisionDispatcher *)
// int hkBvTreeAgent3::registerAgent3(hkBvTreeAgent3 *this);
// [0x169edb0] (2742 bytes) hkBvTreeAgent3::calcAabbAndQueryTree(hkpCdBody const&,hkpCdBody const&,hkTransformf const&,hkVector4f const&,hkpProcessCollisionInput const&,hkAabb *,unsigned int *,int)
// int hkBvTreeAgent3::calcAabbAndQueryTree( uint32_t *a1, uint32_t *a2, int a3, float *a4, int a5, __m128 *a6, float a7, float a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, float *a21, float a22, float a23, int a24, float a25, float a26, float a27, float a28, int a29, int a30, int a31, float a32, float a33, float a34, float a35, float a36, float a37, float a38, float a39);
// [0x169f870] (36 bytes) hkBvTreeAgent3::getShapeCollectionIfBvTreeSupportsAabbQueries(hkpCdBody const*,hkpShapeBufferStorage &)
// int hkBvTreeAgent3::getShapeCollectionIfBvTreeSupportsAabbQueries(int *a1);
// [0x169f8a0] (755 bytes) hkBvTreeAgent3::process(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &)
// int hkBvTreeAgent3::process( int a1, int a2, int a3, int a4, int a5, int a6, hkLifoAllocator **a7, int *a8, int a9, int a10, int a11, int a12, int a13, char *a14, int a15);
// [0x16a2c90] (103 bytes) hkPredGskAgent3::commitPotential(hkpAgentEntry *,void *,unsigned short)
// int hkPredGskAgent3::commitPotential(int a1, int a2, int16_t a3);
// [0x16a2d00] (91 bytes) hkPredGskAgent3::createZombie(hkpAgentEntry *,void *,unsigned short)
// void hkPredGskAgent3::createZombie(int a1, int a2, int16_t a3);
// [0x16a2d60] (103 bytes) hkPredGskAgent3::create(hkpAgent3Input const&,hkpAgentEntry *,void *)
// int hkPredGskAgent3::create(hkpConvexShape ***a1, int a2, hkpGskCache *a3);
// [0x16a2dd0] (523 bytes) hkPredGskAgent3::sepNormal(hkpAgent3Input const&,hkpAgentEntry *,void *,hkVector4f &)
// 0x16a2dd0 hkPredGskAgent3::sepNormal(hkpAgent3Input const&,hkpAgentEntry *,void *,hkVector4f &)
// [0x16a2fe0] (127 bytes) hkPredGskAgent3::removePoint(hkpAgentEntry *,void *,unsigned short)
// int hkPredGskAgent3::removePoint(int a1, int a2, int16_t a3);
// [0x16a3060] (88 bytes) hkPredGskAgent3::cleanup(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &)
// uint8_t *hkPredGskAgent3::cleanup(int a1, uint8_t *a2, int a3, int a4);
// [0x16a30c0] (58 bytes) hkPredGskAgent3::destroy(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &,hkpCollisionDispatcher *)
// uint8_t *hkPredGskAgent3::destroy(int a1, uint8_t *a2, int a3, int a4);
// [0x16a3100] (1679 bytes) hkPredGskAgent3::process(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &)
// uint8_t *hkPredGskAgent3::process(int a1, int a2, uint8_t *a3, int a4, uint32_t *a5);
// [0x16a3790] (91 bytes) hkPredGskAgent3::initAgentFunc(hkpCollisionDispatcher::Agent3Funcs &)
// int hkPredGskAgent3::initAgentFunc(int a1);
// [0x16a37f0] (96 bytes) hkPredGskAgent3::registerAgent3(hkpCollisionDispatcher *,hkcdShapeType::ShapeTypeEnum,hkcdShapeType::ShapeTypeEnum)
// int hkPredGskAgent3::registerAgent3(int a1, int a2, int a3);
// [0x16ad9a0] (105 bytes) hk3AxisSweep16CreateBroadPhase(hkVector4f const&,hkVector4f const&,int)
// hkp3AxisSweep *hk3AxisSweep16CreateBroadPhase(const hkVector4f *a1, const hkVector4f *a2, int a3);
// [0x16b6790] (3265 bytes) _findConnectivity(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkGeomHull &)
// uint32_t *_findConnectivity( const hkArray<hkVector4f, hkContainerHeapAllocator> *a1, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2, const hkArray<hkVector4f, hkContainerHeapAllocator> *a3, hkGeomHull *a4);
// [0x16c1b20] (339 bytes) hkGetShapeTypeName(hkcdShapeType::ShapeTypeEnum)
// const char *hkGetShapeTypeName(int a1);
// [0x16c2f20] (14 bytes) hkNullAgent3::create(hkpAgent3Input const&,hkpAgentEntry *,void *)
// int hkNullAgent3::create(int a1, uint8_t *a2, int a3);
// [0x16c2f30] (9 bytes) hkNullAgent3::destroy(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &,hkpCollisionDispatcher *)
// void hkNullAgent3::destroy();
// [0x16c2f40] (11 bytes) hkNullAgent3::process(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &)
// int hkNullAgent3::process(int a1, int a2, int a3);
// [0x16d5a90] (81 bytes) hkMoppBvTreeShapeBase::queryObb(hkTransformf const&,hkVector4f const&,float,hkArray<unsigned int,hkContainerHeapAllocator> &)const
// int hkMoppBvTreeShapeBase::queryObb( hkMoppBvTreeShapeBase *this, const hkTransformf *a2, const hkVector4f *a3, int64_t a4);
// [0x16d5af0] (211 bytes) hkMoppBvTreeShapeBase::queryAabb(hkAabb const&,hkArray<unsigned int,hkContainerHeapAllocator> &)const
// int hkMoppBvTreeShapeBase::queryAabb( hkMoppBvTreeShapeBase *this, const hkAabb *a2, hkArray<unsigned int, hkContainerHeapAllocator> *a3);
// [0x16d5bd0] (353 bytes) hkMoppBvTreeShapeBase::queryAabbImpl(hkAabb const&,unsigned int *,int)const
// int hkMoppBvTreeShapeBase::queryAabbImpl( hkMoppBvTreeShapeBase *this, const hkAabb *a2, unsigned int *a3, int a4);
// [0x16d60d0] (114 bytes) hkMoppBvTreeShapeBase::~hkMoppBvTreeShapeBase()
// void hkMoppBvTreeShapeBase::~hkMoppBvTreeShapeBase(hkMoppBvTreeShapeBase *this);
// [0x16d6290] (170 bytes) hkMoppBvTreeShapeBase::~hkMoppBvTreeShapeBase()
// void hkMoppBvTreeShapeBase::~hkMoppBvTreeShapeBase(hkMoppBvTreeShapeBase *this);
// [0x16d6340] (157 bytes) hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase(hkcdShapeType::ShapeTypeEnum,hkpMoppCode const*)
// int hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase(int a1, char a2, int a3);
// [0x16e0190] (7251 bytes) hkAgent1nMachine_Process
// int *hkAgent1nMachine_Process(int *a1, __m128i *a2, int a3, unsigned int *a4, int *a5);
// [0x16e1df0] (525 bytes) hkAgent1nMachine_UpdateShapeCollectionFilterVisitor
// char *hkAgent1nMachine_UpdateShapeCollectionFilterVisitor(uint32_t *a1, int a2, int a3);
// [0x16e2000] (7478 bytes) hkAgentNmMachine_Process
// unsigned int hkAgentNmMachine_Process(int *a1, __m128i *a2, int a3, int a4, unsigned int *a5, int *a6);
// [0x16e3d40] (707 bytes) hkAgentNmMachine_UpdateShapeCollectionFilterVisitor
// char *hkAgentNmMachine_UpdateShapeCollectionFilterVisitor(int *a1, int a2, int a3);
// [0x16e93e0] (63 bytes) hkListAgent3::create(hkpAgent3Input const&,hkpAgentEntry *,void *)
// uint32_t *hkListAgent3::create(int a1, int a2, uint32_t *a3);
// [0x16e9420] (61 bytes) hkListAgent3::destroy(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &,hkpCollisionDispatcher *)
// int hkListAgent3::destroy(int a1, int a2, int a3, int a4, int a5);
// [0x16e9460] (101 bytes) hkListAgent3::updateFilter(hkpAgentEntry *,void *,hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *,hkpConstraintOwner &)
// int hkListAgent3::updateFilter(int a1, int a2, int a3, uint32_t *a4, int a5, int a6, int a7);
// [0x16e94d0] (45 bytes) hkListAgent3::invalidateTim(hkpAgentEntry *,void *,hkpCollisionInput const&)
// int hkListAgent3::invalidateTim(int a1, int a2, int a3);
// [0x16e9500] (69 bytes) hkListAgent3::warpTime(hkpAgentEntry *,void *,float,float,hkpCollisionInput const&)
// int hkListAgent3::warpTime(int a1, int a2, int64_t a3, int a4);
// [0x16e9550] (440 bytes) hkListAgent3::process(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &)
// int hkListAgent3::process(int a1, int a2, int a3, int a4, int *a5);
// [0x16e9710] (108 bytes) hkListAgent3::initAgentFunc(hkpCollisionDispatcher::Agent3Funcs &)
// int hkListAgent3::initAgentFunc(int a1);
// [0x16e9780] (98 bytes) hkListAgent3::registerAgent3(hkpCollisionDispatcher *)
// int hkListAgent3::registerAgent3(hkListAgent3 *this);
// [0x16ecc30] (413 bytes) hkAgent1nMachine_Destroy
// int hkAgent1nMachine_Destroy(uint32_t *a1, int a2, int a3, int a4);
// [0x16ecdd0] (284 bytes) hkAgent1nMachine_InvalidateTim
// unsigned int hkAgent1nMachine_InvalidateTim(uint32_t **a1, uint32_t *a2);
// [0x16ecef0] (340 bytes) hkAgent1nMachine_WarpTime
// unsigned int hkAgent1nMachine_WarpTime(uint32_t **a1, int64_t a2, uint32_t *a3);
// [0x16ed050] (152 bytes) hkAgent1nMachine_FindAgent
// unsigned int hkAgent1nMachine_FindAgent(uint32_t ***a1, int a2, int a3, uint32_t *a4);
// [0x16ed0f0] (241 bytes) hkAgent1nMachine_Create
// int hkAgent1nMachine_Create(int *a1);
// [0x16ed1f0] (2550 bytes) hkAgent1nMachine_Weld
// int hkAgent1nMachine_Weld(int **a1, int a2, int *a3);
// [0x16edbf0] (1999 bytes) hkAgent1nMachine_VisitAllAgents
// int hkAgent1nMachine_VisitAllAgents(int *a1, const void *a2, int (*a3)(uint32_t *, __m128i *, __m128i *));
// [0x16ee3c0] (202 bytes) hkAgent1nMachine_initInputAtTime
// const hkTransformf *hkAgent1nMachine_initInputAtTime(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x16ee490] (132 bytes) hkAgent1nMachine_flipInput
// hkTransformf *hkAgent1nMachine_flipInput(int a1, int a2);
// [0x16ee520] (52 bytes) hkAgent1nMachine_UpdateShapeCollectionFilter
// int hkAgent1nMachine_UpdateShapeCollectionFilter(int *a1, const void *a2);
// [0x16ee560] (52 bytes) hkAgentNmMachine_UpdateShapeCollectionFilter
// int hkAgentNmMachine_UpdateShapeCollectionFilter(int *a1, const void *a2);
// [0x16ef7e0] (146 bytes) hkAgent3Bridge::create(hkpAgent3Input const&,hkpAgentEntry *,void *)
// uint32_t *hkAgent3Bridge::create(uint32_t *a1, uint8_t *a2, uint32_t *a3);
// [0x16ef880] (62 bytes) hkAgent3Bridge::process(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &)
// uint32_t *hkAgent3Bridge::process(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5);
// [0x16ef8c0] (31 bytes) hkAgent3Bridge::destroy(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &,hkpCollisionDispatcher *)
// int hkAgent3Bridge::destroy(int a1, uint32_t *a2, int a3, int a4);
// [0x16ef8e0] (55 bytes) hkAgent3Bridge::updateFilter(hkpAgentEntry *,void *,hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *,hkpConstraintOwner &)
// int hkAgent3Bridge::updateFilter(int a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7);
// [0x16ef920] (31 bytes) hkAgent3Bridge::invalidateTim(hkpAgentEntry *,void *,hkpCollisionInput const&)
// int hkAgent3Bridge::invalidateTim(int a1, uint32_t *a2, int a3);
// [0x16ef940] (55 bytes) hkAgent3Bridge::warpTime(hkpAgentEntry *,void *,float,float,hkpCollisionInput const&)
// int hkAgent3Bridge::warpTime(int a1, uint32_t *a2, int64_t a3, int a4);
// [0x16ef980] (32 bytes) hkAgent3Bridge::removePoint(hkpAgentEntry *,void *,unsigned short)
// int hkAgent3Bridge::removePoint(int a1, uint32_t *a2, uint16_t a3);
// [0x16ef9a0] (32 bytes) hkAgent3Bridge::commitPotential(hkpAgentEntry *,void *,unsigned short)
// int hkAgent3Bridge::commitPotential(int a1, uint32_t *a2, uint16_t a3);
// [0x16ef9c0] (32 bytes) hkAgent3Bridge::createZombie(hkpAgentEntry *,void *,unsigned short)
// int hkAgent3Bridge::createZombie(int a1, uint32_t *a2, uint16_t a3);
// [0x16ef9e0] (183 bytes) hkAgent3Bridge::registerAgent3(hkpCollisionDispatcher *)
// int hkAgent3Bridge::registerAgent3(hkAgent3Bridge *this);
// [0x16fece0] (1258 bytes) hkVector4UtilImpl<float>::packQuaternionIntoInt32(hkVector4f const&)
// int hkVector4UtilImpl<float>::packQuaternionIntoInt32(hkVector4UtilImpl<float> *this);
// [0x1702c00] (201 bytes) hkAgentNnMachine_GetAgentType
// int hkAgentNnMachine_GetAgentType(int a1, int a2, int *a3, uint32_t *a4, bool *a5);
// [0x1702cd0] (761 bytes) hkAgentNnMachine_CreateAgent
// int hkAgentNnMachine_CreateAgent( uint16_t *a1, int a2, int a3, uint32_t *a4, int a5, int a6, int a7, int *a8, int a9);
// [0x1702fd0] (78 bytes) hkAgentNnMachine_IsEntryOnTrack
// int hkAgentNnMachine_IsEntryOnTrack(uint16_t *a1, unsigned int a2);
// [0x1703020] (497 bytes) hkAgentNnMachine_InternalDeallocateEntry
// unsigned int hkAgentNnMachine_InternalDeallocateEntry(uint16_t *a1, unsigned int a2);
// [0x1703220] (568 bytes) hkAgentNnMachine_DestroyAgent
// unsigned int hkAgentNnMachine_DestroyAgent(uint16_t *a1, unsigned int a2, int a3, int a4);
// [0x1703460] (177 bytes) hkAgentNnMachine_InvalidateTimInAgent
// int hkAgentNnMachine_InvalidateTimInAgent(int a1, uint32_t *a2);
// [0x1703520] (234 bytes) hkAgentNnMachine_WarpTimeInAgent
// int hkAgentNnMachine_WarpTimeInAgent(int a1, int64_t a2, uint32_t *a3);
// [0x1703610] (375 bytes) hkAgentNnMachine_CopyAndRelinkAgentEntry
// unsigned int hkAgentNnMachine_CopyAndRelinkAgentEntry(uint16_t *a1, unsigned int a2);
// [0x1703790] (789 bytes) hkAgentNnMachine_AppendTrack
// int hkAgentNnMachine_AppendTrack(int a1, uint16_t *a2);
// [0x1703ab0] (104 bytes) hkAgentNnMachine_DestroyTrack(hkpAgentNnTrack &,hkpCollisionDispatcher *,hkpConstraintOwner &)
// unsigned int hkAgentNnMachine_DestroyTrack(uint16_t *a1, int a2, int a3);
// [0x1703b20] (85 bytes) hkAgentNnMachine_FindAgent
// int hkAgentNnMachine_FindAgent(int a1, int a2);
// [0x1703b80] (76 bytes) hkAgentNnMachine_AssertTrackValidity
// void hkAgentNnMachine_AssertTrackValidity(uint16_t *a1);
// [0x1703bd0] (1844 bytes) hkAgentMachine_processTransformedShapes
// uint32_t *hkAgentMachine_processTransformedShapes(uint32_t *a1, uint32_t *a2, int a3, int a4, uint8_t *a5);
// [0x1704310] (311 bytes) hkAgentNnMachine_UpdateShapeCollectionFilter
// int hkAgentNnMachine_UpdateShapeCollectionFilter(uint8_t *a1, uint32_t *a2, int a3);
// [0x1704ab0] (45 bytes) hkAgentNnMachine_ProcessAgent
// int hkAgentNnMachine_ProcessAgent(uint8_t *a1, int a2, int a3);
// [0x1704ae0] (1989 bytes) hkAgentNnMachine_ProcessTrack
// float *hkAgentNnMachine_ProcessTrack(hkTransformf *a1, uint16_t *a2, int a3);
// [0x17052b0] (9 bytes) hkAgentNnMachine_TouchAgent
// void hkAgentNnMachine_TouchAgent();
// [0x1706c10] (104 bytes) hkPredGskCylinderAgent3::create(hkpAgent3Input const&,hkpAgentEntry *,void *)
// int hkPredGskCylinderAgent3::create(int a1, int a2, hkpGskCache *a3);
// [0x1706c80] (4706 bytes) hkPredGskCylinderAgent3::process(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &)
// char *hkPredGskCylinderAgent3::process(uint32_t **a1, int a2, uint8_t *a3, float *a4, uint32_t *a5);
// [0x1707ef0] (219 bytes) hkPredGskCylinderAgent3::registerAgent3(hkpCollisionDispatcher *)
// int hkPredGskCylinderAgent3::registerAgent3(hkPredGskCylinderAgent3 *this);
// [0x1708440] (74 bytes) hkCapsuleTriangleAgent3::cleanup(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &)
// int hkCapsuleTriangleAgent3::cleanup(int a1, int a2, int a3, int a4);
// [0x1708490] (63 bytes) hkCapsuleTriangleAgent3::removePoint(hkpAgentEntry *,void *,unsigned short)
// uint16_t *hkCapsuleTriangleAgent3::removePoint(int a1, uint16_t *a2, int16_t a3);
// [0x17084d0] (60 bytes) hkCapsuleTriangleAgent3::commitPotential(hkpAgentEntry *,void *,unsigned short)
// int64_t hkCapsuleTriangleAgent3::commitPotential(int a1, int64_t a2);
// [0x1708510] (9 bytes) hkCapsuleTriangleAgent3::createZombie(hkpAgentEntry *,void *,unsigned short)
// void hkCapsuleTriangleAgent3::createZombie();
// [0x1708520] (58 bytes) hkCapsuleTriangleAgent3::destroy(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &,hkpCollisionDispatcher *)
// int hkCapsuleTriangleAgent3::destroy(int a1, int a2, int a3, int a4);
// [0x1708560] (83 bytes) hkCapsuleTriangleAgent3::create(hkpAgent3Input const&,hkpAgentEntry *,void *)
// uint16_t *hkCapsuleTriangleAgent3::create(int a1, int a2, uint16_t *a3);
// [0x17085c0] (1442 bytes) hkCapsuleTriangleAgent3::sepNormal(hkpAgent3Input const&,hkpAgentEntry *,void *,hkVector4f &)
// int hkCapsuleTriangleAgent3::sepNormal(int **a1, int a2, int a3, float *a4);
// [0x1708b70] (2852 bytes) hkCapsuleTriangleAgent3::process(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &)
// int hkCapsuleTriangleAgent3::process(int **a1, int a2, int a3, float *a4, uint32_t *a5);
// [0x17096a0] (181 bytes) hkCapsuleTriangleAgent3::registerAgent3(hkpCollisionDispatcher *)
// int hkCapsuleTriangleAgent3::registerAgent3(hkCapsuleTriangleAgent3 *this);
// [0x1709760] (51 bytes) hkConvexListAgent3::invalidateTim(hkpAgentEntry *,void *,hkpCollisionInput const&)
// unsigned int hkConvexListAgent3::invalidateTim(int a1, unsigned int a2, uint32_t *a3);
// [0x17097a0] (75 bytes) hkConvexListAgent3::warpTime(hkpAgentEntry *,void *,float,float,hkpCollisionInput const&)
// unsigned int hkConvexListAgent3::warpTime(int a1, unsigned int a2, int64_t a3, uint32_t *a4);
// [0x17097f0] (65 bytes) hkConvexListAgent3::create(hkpAgent3Input const&,hkpAgentEntry *,void *)
// int hkConvexListAgent3::create(hkpConvexShape ***a1, int a2, hkpGskCache *a3);
// [0x1709840] (111 bytes) hkConvexListAgent3::destroy(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &,hkpCollisionDispatcher *)
// uint8_t *hkConvexListAgent3::destroy(int a1, int a2, int a3, int a4, int a5);
// [0x17098b0] (138 bytes) hkConvexListAgent3::sepNormal(hkpAgent3Input const&,hkpAgentEntry *,void *,hkVector4f &)
// void *hkConvexListAgent3::sepNormal(int a1, int a2, int a3, int a4);
// [0x1709940] (58 bytes) hkConvexListAgent3::cleanup(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &)
// uint8_t *hkConvexListAgent3::cleanup(int a1, uint8_t *a2, int a3, int a4);
// [0x1709980] (59 bytes) hkConvexListAgent3::removePoint(hkpAgentEntry *,void *,unsigned short)
// int hkConvexListAgent3::removePoint(int a1, int a2, int16_t a3);
// [0x17099c0] (59 bytes) hkConvexListAgent3::commitPotential(hkpAgentEntry *,void *,unsigned short)
// int hkConvexListAgent3::commitPotential(int a1, int a2, int16_t a3);
// [0x1709a00] (59 bytes) hkConvexListAgent3::createZombie(hkpAgentEntry *,void *,unsigned short)
// void hkConvexListAgent3::createZombie(int a1, int a2, int16_t a3);
// [0x1709a40] (109 bytes) hkConvexListAgent3::updateFilter(hkpAgentEntry *,void *,hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpContactMgr *,hkpConstraintOwner &)
// void hkConvexListAgent3::updateFilter(int a1, int a2, int a3, uint32_t *a4, int a5, int a6, int a7);
// [0x1709ab0] (2503 bytes) hkConvexListAgent3::process(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &)
// unsigned int hkConvexListAgent3::process(__m128i *a1, int a2, int a3, int a4, float *a5);
// [0x170a480] (118 bytes) hkConvexListAgent3::initAgentFunc(hkpCollisionDispatcher::Agent3Funcs &)
// int hkConvexListAgent3::initAgentFunc(int a1);
// [0x170a500] (128 bytes) hkConvexListAgent3::registerAgent3(hkpCollisionDispatcher *)
// int hkConvexListAgent3::registerAgent3(hkConvexListAgent3 *this);
// [0x170a580] (12 bytes) hkConvexListAgent3::getAgent1nTrack(hkpAgentEntry const*,void *)
// int hkConvexListAgent3::getAgent1nTrack(int a1, int a2);
// [0x170a590] (12 bytes) hkConvexListAgent3::getAgent1nTrack(hkpAgentEntry const*,void const*)
// int hkConvexListAgent3::getAgent1nTrack(int a1, int a2);
// [0x170b690] (100 bytes) hkBoxBoxAgent3::cleanup(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &)
// int hkBoxBoxAgent3::cleanup(int a1, int a2, int a3, int a4);
// [0x170b700] (191 bytes) hkBoxBoxAgent3::commitPotential(hkpAgentEntry *,void *,unsigned short)
// int hkBoxBoxAgent3::commitPotential(int a1, int a2, int16_t a3);
// [0x170b7c0] (9 bytes) hkBoxBoxAgent3::createZombie(hkpAgentEntry *,void *,unsigned short)
// void hkBoxBoxAgent3::createZombie();
// [0x170b7d0] (58 bytes) hkBoxBoxAgent3::destroy(hkpAgentEntry *,void *,hkpContactMgr *,hkpConstraintOwner &,hkpCollisionDispatcher *)
// int hkBoxBoxAgent3::destroy(int a1, int a2, int a3, int a4);
// [0x170b810] (41 bytes) hkBoxBoxAgent3::create(hkpAgent3Input const&,hkpAgentEntry *,void *)
// int hkBoxBoxAgent3::create(int a1, int a2, hkpBoxBoxManifold *a3);
// [0x170b840] (231 bytes) hkBoxBoxAgent3::removePoint(hkpAgentEntry *,void *,unsigned short)
// hkpBoxBoxManifold *hkBoxBoxAgent3::removePoint(int a1, hkpBoxBoxManifold *a2, int16_t a3);
// [0x170b930] (673 bytes) hkBoxBoxAgent3::process(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &)
// int hkBoxBoxAgent3::process(int a1, int a2, hkpBoxBoxManifold *a3, int a4, int a5);
// [0x170bbe0] (96 bytes) hkBoxBoxAgent3::initAgentFunc(hkpCollisionDispatcher::Agent3Funcs &)
// int hkBoxBoxAgent3::initAgentFunc(int a1);
// [0x170bc40] (98 bytes) hkBoxBoxAgent3::registerAgent3(hkpCollisionDispatcher *)
// int hkBoxBoxAgent3::registerAgent3(hkBoxBoxAgent3 *this);
// [0x170f4f0] (2386 bytes) hkCollideCapsuleUtilClostestPointCapsVsCaps(hkVector4f const*,float const&,hkVector4f const*,float const&,float,hkContactPoint &)
// const hkVector4f *hkCollideCapsuleUtilClostestPointCapsVsCaps( const hkVector4f *a1, float *a2, const hkVector4f *a3, const float *a4, float *a5, hkContactPoint *a6, float *a7);
// [0x170fe50] (6814 bytes) hkCollideCapsuleUtilCapsVsTri(hkVector4f const*,float,hkVector4f const*,float,hkpCollideTriangleUtil::PointTriangleDistanceCache const&,float,int,hkContactPoint *,hkpFeatureOutput *)
// __m128 *hkCollideCapsuleUtilCapsVsTri( __m128 *a1, hkVector4f *a2, float *a3, hkVector4f *a4, float *a5, float a6, int a7, float *a8, int a9);
// [0x1715a90] (37 bytes) hkBridgeConstraintAtom_callData(hkpConstraintData *,hkpConstraintQueryIn const&,hkpConstraintQueryOut &)
// int hkBridgeConstraintAtom_callData(int a1, int a2, int a3);
// [0x1729260] (791 bytes) hk1dAngularBilateralConstraintBuildJacobian
// float *hk1dAngularBilateralConstraintBuildJacobian(float *a1, int a2, float **a3);
// [0x1729580] (964 bytes) hk1dLinearFrictionBuildJacobian
// int hk1dLinearFrictionBuildJacobian(int a1, int a2, int *a3);
// [0x1729950] (1035 bytes) hk1dLinearBilateralConstraintBuildJacobian
// int hk1dLinearBilateralConstraintBuildJacobian(int a1, int a2, int *a3);
// [0x1729d60] (977 bytes) hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs
// int hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs(int a1, int a2, int *a3, float a4);
// [0x172a140] (962 bytes) hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs_noSchema
// int hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs_noSchema(int a1, int a2, int a3, float a4);
// [0x172a510] (997 bytes) hk1dLinearBilateralConstraintUserTauBuildJacobian
// int hk1dLinearBilateralConstraintUserTauBuildJacobian(int a1, int a2, int *a3);
// [0x172a900] (1037 bytes) hk1dLinearLimitBuildJacobian
// int hk1dLinearLimitBuildJacobian(int a1, int a2, int *a3);
// [0x172ad10] (74 bytes) hkSetInvMassBuildJacobian
// int hkSetInvMassBuildJacobian(uint32_t *a1, uint32_t *a2, int *a3);
// [0x172ad60] (52 bytes) hkAddVelocityBuildJacobian
// int hkAddVelocityBuildJacobian(uint32_t *a1, int a2, int *a3);
// [0x172ada0] (170 bytes) hkSetCenterOfMassBuildJacobian
// int hkSetCenterOfMassBuildJacobian(uint32_t *a1, uint32_t *a2, int *a3);
// [0x172ce00] (29 bytes) hkWorldMemoryAvailableWatchDog::~hkWorldMemoryAvailableWatchDog()
// void hkWorldMemoryAvailableWatchDog::~hkWorldMemoryAvailableWatchDog(hkWorldMemoryAvailableWatchDog *this);
// [0x172ce60] (96 bytes) hkWorldMemoryAvailableWatchDog::~hkWorldMemoryAvailableWatchDog()
// void hkWorldMemoryAvailableWatchDog::~hkWorldMemoryAvailableWatchDog(hkWorldMemoryAvailableWatchDog *this);
// [0x1742ec0] (376 bytes) hkLs_collectAgentEntriesToProcess(hkpEntity const*,hkpConstraintInstance::ConstraintPriority,float,hkFixedArray<unsigned char> &,hkLocalArray<hkpAgentNnEntry *> &)
// int hkLs_collectAgentEntriesToProcess(int a1, int a2, hkSweptTransformf *a3, uint32_t *a4, hkMemoryAllocator *a5);
// [0x1743040] (135 bytes) hkLs_areVelocitiesOk(float,hkpConstraintSchemaInfo const&,float const*,int,hkpProcessCollisionInput const&)
// int hkLs_areVelocitiesOk(float a1, float *a2, int a3, int a4, uint32_t *a5);
// [0x17430d0] (1301 bytes) hkLs_toiCheckValidityOfConstraints(hkpConstraintSolverResources &,hkpProcessCollisionInput &,hkArray<hkpConstraintSchemaInfo,hkContainerHeapAllocator> &,int &,hkpConstraintInstance::ConstraintPriority,hkFixedArray<unsigned char> &,hkArray<hkpEntity *,hkContainerHeapAllocator> const&,hkArray<hkpEntity *,hkContainerHeapAllocator>&)
// hkLifoAllocator *hkLs_toiCheckValidityOfConstraints( uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4, int a5, uint32_t *a6, uint32_t *a7, hkMemoryAllocator *a8);
// [0x17435f0] (194 bytes) hkLs_toiActivateConstraintsLinkingToFixedAndKeyframedEntities(hkArray<hkpConstraintSchemaInfo,hkContainerHeapAllocator> &,int &,int)
// void hkLs_toiActivateConstraintsLinkingToFixedAndKeyframedEntities(uint32_t *a1, uint32_t *a2, int a3);
// [0x17436c0] (216 bytes) hkLs_toiActivateConstraintsLinkingActivatedEntities(hkArray<hkpConstraintSchemaInfo,hkContainerHeapAllocator> &,int &,hkFixedArray<unsigned char> &)
// int hkLs_toiActivateConstraintsLinkingActivatedEntities(uint32_t *a1, int *a2, uint32_t *a3);
// [0x17437a0] (327 bytes) hkLs_toiResetVelocityAccumulatorsForEntities(hkpConstraintSolverResources &,hkArray<hkpEntity *,hkContainerHeapAllocator> const&)
// int hkLs_toiResetVelocityAccumulatorsForEntities(int a1, uint32_t *a2);
// [0x17438f0] (354 bytes) hkLs_backstepAndFreezeEntireIsland(float,hkpSimulationIsland *,hkFixedArray<unsigned char> &,hkArray<hkpEntity *,hkContainerHeapAllocator> &)
// void hkLs_backstepAndFreezeEntireIsland(hkSweptTransformUtil *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1743a60] (632 bytes) hkLs_restoreTransformOnBodiesWithUpdatedTransform(hkpSimulationIsland *,hkFixedArray<unsigned char> &,hkpConstraintSolverResources &)
// float *hkLs_restoreTransformOnBodiesWithUpdatedTransform(int a1, uint32_t *a2, int a3);
// [0x1743ce0] (511 bytes) hkLs_toiCheckFinalValidityOfCriticalConstraints(hkpConstraintSolverResources &,hkArray<hkpConstraintSchemaInfo,hkContainerHeapAllocator> const&,hkpProcessCollisionInput &,hkArray<hkpToiResourceMgr::ConstraintViolationInfo,hkContainerHeapAllocator> *)
// char *hkLs_toiCheckFinalValidityOfCriticalConstraints( char *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x1744180] (85 bytes) hkArray<hkpToiResourceMgr::ConstraintViolationInfo,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<hkpToiResourceMgr::ConstraintViolationInfo,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<hkpToiResourceMgr::ConstraintViolationInfo, hkContainerHeapAllocator> *this);
// [0x1745280] (3210 bytes) hkLs_toiActivateEntitiesAndCheckConstraints(hkpProcessCollisionInput &,hkpConstraintInstance::ConstraintPriority,float,hkArray<hkpEntity *,hkContainerHeapAllocator> const&,hkFixedArray<unsigned char> &,hkArray<hkpEntity *,hkContainerHeapAllocator>&,hkArray<hkpConstraintInstance*,hkContainerHeapAllocator> &)
// uint32_t *hkLs_toiActivateEntitiesAndCheckConstraints( int a1, int a2, hkSweptTransformf *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, hkMemoryAllocator *a7);
// [0x1745f10] (4843 bytes) hkLs_localizedSolveToi(hkpToiResources const&,hkpConstraintSolverResources &,hkpToiEvent &,hkpToiResourceMgr &,hkpWorld *,hkArray<hkpEntity *,hkContainerHeapAllocator> &,hkFixedArray<unsigned char> &,float)
// 0x1745f10 hkLs_localizedSolveToi(hkpToiResources const&,hkpConstraintSolverResources &,hkpToiEvent &,hkpToiResourceMgr &,hkpWorld *,hkArray<hkpEntity *,hkContainerHeapAllocator> &,hkFixedArray<unsigned char> &,float)
// [0x175f3d0] (22 bytes) hkWorldMemoryAvailableWatchDog::staticClass(void)
// void *hkWorldMemoryAvailableWatchDog::staticClass();
// [0x1761920] (383 bytes) hkMapBase<hkpPairCollisionFilter::PairFilterKey,unsigned long long,hkpPairCollisionFilter::PairFilterPointerMapOperations>::remove(Dummy *)
// unsigned int hkMapBase<hkpPairCollisionFilter::PairFilterKey,unsigned long long,hkpPairCollisionFilter::PairFilterPointerMapOperations>::remove( int *a1, unsigned int a2);
// [0x1761aa0] (609 bytes) hkMapBase<hkpPairCollisionFilter::PairFilterKey,unsigned long long,hkpPairCollisionFilter::PairFilterPointerMapOperations>::resizeTable(hkMemoryAllocator &,int)
// hkMapBase<hkpPairCollisionFilter::PairFilterKey, unsigned long long, hkpPairCollisionFilter::PairFilterPointerMapOperations> *hkMapBase<hkpPairCollisionFilter::PairFilterKey,unsigned long long,hkpPairCollisionFilter::PairFilterPointerMapOperations>::resizeTable( hkMapBase<hkpPairCollisionFilter::PairFilterKey, unsigned long long, hkpPairCollisionFilter::PairFilterPointerMapOperations> *this, hkMemoryAllocator *a2, int a3, int a4);
// [0x1765f50] (2127 bytes) hkSimpleContactConstraintData_fireCallbacks(hkpSimpleContactConstraintData *,hkpConstraintQueryIn const*,hkpSimpleContactConstraintAtom *,hkpContactPointEvent::Type)
// int hkSimpleContactConstraintData_fireCallbacks(hkpSimpleContactConstraintData *a1, int a2, int a3, int a4);
// [0x176fa10] (663 bytes) hkLs_doSimpleCollisionResponse(hkpWorld *,hkpToiEvent const&,float,hkArray<hkpEntity *,hkContainerHeapAllocator> &)
// int hkLs_doSimpleCollisionResponse(int a1, int a2, int a3, uint32_t *a4);
// [0x177d5c0] (2784 bytes) hkSweptTransformUtil::_stepMotionState(hkStepInfo const&,hkVector4f &,hkVector4f &,hkMotionState &)
// hkRotationf *hkSweptTransformUtil::_stepMotionState(int a1, float *a2, __m128 *a3, __m128 *a4);
// [0x177e0a0] (298 bytes) hkRigidMotionUtilCanDeactivateFinal
// int hkRigidMotionUtilCanDeactivateFinal(int a1, int a2, int a3, int a4);
// [0x177e1d0] (129 bytes) hkRigidMotionUtilStep
// void hkRigidMotionUtilStep(int a1, int a2, int a3, int a4);
// [0x177e260] (1845 bytes) hkRigidMotionUtilBuildAccumulators
// int hkRigidMotionUtilBuildAccumulators(float *a1, int a2, int a3, int a4, int a5);
// [0x177e9a0] (2226 bytes) hkRigidMotionUtilApplyForcesAndBuildAccumulators
// int hkRigidMotionUtilApplyForcesAndBuildAccumulators(float *a1, int a2, int a3, int a4, int a5);
// [0x177f260] (3438 bytes) hkRigidMotionUtilApplyAccumulators
// int hkRigidMotionUtilApplyAccumulators(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x177ffd0] (3089 bytes) hkRigidMotionUtilApplyForcesAndStep
// int hkRigidMotionUtilApplyForcesAndStep(int a1, int a2, float *a3, int a4, int a5, int a6);
// [0x1787a70] (124 bytes) hkSolveGetToiViolatingConstraintVelocity
// int hkSolveGetToiViolatingConstraintVelocity(int a1, int a2, int a3, int a4, float *a5);
// [0x1788a90] (2010 bytes) hk4dGskCollidePointsWithPlane
// void hk4dGskCollidePointsWithPlane(int a1, float *a2, float *a3);
// [0x1789270] (12334 bytes) hk4dGskCollideCalcToi
// 0x1789270 hk4dGskCollideCalcToi
// [0x17921b0] (2211 bytes) hkGskRecalcContactInternal
// char *hkGskRecalcContactInternal(__m128 *a1, __m128 *a2, int a3, int a4, float *a5, float *a6, float *a7);
// [0x1794cb0] (410 bytes) hkCalculatePenetrationDepth(hkpConvexShape const*,hkpConvexShape const*,hkTransformf const&,float,hkcdVertex *,hkcdVertex *,hkVector4f *,int,hkpGskOut &)
// int hkCalculatePenetrationDepth( float a1, float a2, float *a3, float a4, float a5, float a6, float a7, float a8, float *a9);
// [0x1794e50] (2339 bytes) hkCalcMultiPenetrationDepth(hkTransformf const&,hkpConvexShape const*,hkpConvexShape const**,int,hkTransformf const&,hkContactPoint **)
// const hkTransformf *hkCalcMultiPenetrationDepth( const hkTransformf *a1, const hkpConvexShape *a2, const hkpConvexShape **a3, int a4, const hkTransformf *a5, hkContactPoint **a6, int a7);
// [0x1795ec0] (101 bytes) hkMoppEarlyExitObbVirtualMachine_queryObb
// bool hkMoppEarlyExitObbVirtualMachine_queryObb(const hkTransformf *a1, const hkVector4f *a2, const float *a3);
// [0x1795f30] (80 bytes) hkMoppFindAllVirtualMachine_getAllKeys
// int hkMoppFindAllVirtualMachine_getAllKeys(int a1, int a2);
// [0x1795f80] (78 bytes) hkMoppObbVirtualMachine_queryObb
// int hkMoppObbVirtualMachine_queryObb(int a1, int a2, int a3, int64_t a4);
// [0x1795fd0] (60 bytes) hkMoppObbVirtualMachine_queryAabb
// int hkMoppObbVirtualMachine_queryAabb(int a1, int a2, int a3);
// [0x1796010] (60 bytes) hkMoppSphereVirtualMachine_querySphere
// int hkMoppSphereVirtualMachine_querySphere(int a1, int a2, int a3);
// [0x1796050] (60 bytes) hkMoppModifyVirtualMachine_queryAabb
// int hkMoppModifyVirtualMachine_queryAabb(hkpMoppCode *a1, hkAabb *a2, hkpMoppModifier *a3);
// [0x1796090] (82 bytes) hkMoppKDopGeometriesVirtualMachine_query
// void hkMoppKDopGeometriesVirtualMachine_query(int a1, int a2, int a3);
// [0x1797780] (1801 bytes) hkMoppUsingFloatAabbVirtualMachine_queryPlanes
// char hkMoppUsingFloatAabbVirtualMachine_queryPlanes(int a1, int *a2, float a3, float a4);
// [0x1799660] (1801 bytes) hkMoppUsingFloatAabbVirtualMachine_queryPlanesOptimized
// char hkMoppUsingFloatAabbVirtualMachine_queryPlanesOptimized(int a1, int *a2, int a3, int a4);
// [0x179ac90] (289 bytes) hkMoppUsingFloatAabbVirtualMachine_querySphere
// int hkMoppUsingFloatAabbVirtualMachine_querySphere(int a1, float *a2, float a3, float a4);
// [0x179bd90] (289 bytes) hkMoppUsingFloatAabbVirtualMachine_querySphereOptimized
// int hkMoppUsingFloatAabbVirtualMachine_querySphereOptimized(int a1, float *a2, float a3, float a4);
// [0x179e680] (215 bytes) hkVector4f::_setRotatedDir(hkMatrix3f const&,hkVector4f const&)
// hkVector4f *hkVector4f::_setRotatedDir(hkVector4f *this, const hkMatrix3f *a2, const hkVector4f *a3);
// [0x179e760] (549 bytes) hkQuaternion_setFromRotationFpu(hkRotationf const&,hkVector4f &)
// hkVector4f *hkQuaternion_setFromRotationFpu(const hkRotationf *a1, hkVector4f *a2);
// [0x179e990] (808 bytes) hkInternalConstraintUtils_inlineCalcRelativeAngle(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&,hkPadSpu<float> &,hkPadSpu<float> &)
// float *hkInternalConstraintUtils_inlineCalcRelativeAngle( float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7);
// [0x179f080] (926 bytes) hkJacobianBuilder::buildLinearJacobian(hkpVelocityAccumulator const*,hkpVelocityAccumulator const*,hkVector4f const&,hkVector4f const&,float,hkp1Lin2AngJacobian *)
// int hkJacobianBuilder::buildLinearJacobian(int a1, float *a2, float *a3, float *a4, float a5, int a6);
// [0x179f420] (952 bytes) hkJacobianBuilder::buildLinearAndRhs(hkpVelocityAccumulator const*,hkpVelocityAccumulator const*,hkVector4f const&,hkVector4f const&,hkVector4f const&,float const&,float,hkp1Lin2AngJacobian *)
// float *hkJacobianBuilder::buildLinearAndRhs( int a1, float *a2, float *a3, float *a4, float *a5, float *a6, float a7, float *a8);
// [0x179f7e0] (692 bytes) hkJacobianBuilder::buildAngularJacobian(hkpVelocityAccumulator const*,hkpVelocityAccumulator const*,hkVector4f const&,float,hkp2AngJacobian *)
// float *hkJacobianBuilder::buildAngularJacobian(int a1, float *a2, float *a3, float a4, float *a5);
// [0x17a0df0] (804 bytes) hk1dAngularLimitBuildJacobian
// float *hk1dAngularLimitBuildJacobian(float *a1, int a2, float **a3);
// [0x17a1120] (697 bytes) hk1dAngularVelocityMotorBeginJacobian
// float *hk1dAngularVelocityMotorBeginJacobian(float *a1, int a2, float *a3, float *a4);
// [0x17a13e0] (104 bytes) hk1dAngularVelocityMotorCommitJacobian
// int hk1dAngularVelocityMotorCommitJacobian(int a1, int a2, int a3, int *a4);
// [0x17a1450] (903 bytes) hk1dAngularFrictionBuildJacobian
// float **hk1dAngularFrictionBuildJacobian(int a1, int a2, float **a3);
// [0x17a1980] (208 bytes) hkSimdFloat32 const hkVector4f::length<3,(hkMathAccuracyMode)1,(hkMathNegSqrtMode)1>(void)const
// float *hkVector4f::length<3,(hkMathAccuracyMode)1,(hkMathNegSqrtMode)1>(float *a1, float *a2);
// [0x17a1a50] (207 bytes) hkVector4UtilImpl<float>::toRange(hkSimdFloat32 const&,hkSimdFloat32 const&,hkSimdFloat32 const&,hkSimdFloat32 const&,hkSimdFloat32&)
// float *hkVector4UtilImpl<float>::toRange( float *a1, float *a2, float *a3, float *a4, float *a5, float *a6);
// [0x17a1b20] (18000 bytes) hkSolverBuildJacobianFromAtomsNotContact(hkpConstraintAtom const*,int,hkpConstraintQueryIn const&,hkpConstraintQueryOut &)
// unsigned int hkSolverBuildJacobianFromAtomsNotContact(uint16_t *a1, int a2, float *a3, float **a4);
// [0x17a6170] (94 bytes) hkSolverBuildJacobianFromAtoms(hkpConstraintAtom const*,int,hkpConstraintQueryIn const&,hkpConstraintQueryOut &)
// unsigned int hkSolverBuildJacobianFromAtoms(uint16_t *a1, int a2, float *a3, float **a4);
// [0x17a7290] (379 bytes) hkVector4f::_setRotatedDir(hkQuaternionf const&,hkVector4f const&)
// hkVector4f *hkVector4f::_setRotatedDir(hkVector4f *this, const hkQuaternionf *a2, const hkVector4f *a3);
// [0x17a7410] (1311 bytes) hkSolver_solveStiffSpringChain(hkpSolverInfo const&,hkSolverStepTemp const&,hkpVelocityAccumulator *,hkpJacobianStiffSpringChainSchema *,hkpSolverElemTemp *)
// int hkSolver_solveStiffSpringChain(int a1, int a2, int a3, int a4, int a5);
// [0x17a7930] (944 bytes) hkSolver::integrateVelocityAccumulator(hkpSolverInfo const&,hkpVelocityAccumulator *)
// int hkSolver::integrateVelocityAccumulator(int a1, int a2);
// [0x17a7ce0] (1725 bytes) hkSolver::_applyVelField(hkpSolverInfo const&,hkVector4f const&,hkpVelocityAccumulator *,hkpVelocityAccumulator *)
// unsigned int hkSolver::_applyVelField(int a1, float *a2, float *a3, unsigned int a4);
// [0x17a83a0] (1725 bytes) hkSolver::applyVelField(hkpSolverInfo const&,hkVector4f const&,hkpVelocityAccumulator *,hkpVelocityAccumulator *)
// unsigned int hkSolver::applyVelField(int a1, float *a2, float *a3, unsigned int a4);
// [0x17a8a60] (88 bytes) hkSolveApplyGravityByTheSteps
// unsigned int hkSolveApplyGravityByTheSteps(int a1, float *a2, unsigned int a3);
// [0x17a8ac0] (496 bytes) hkSymmetricMatrixUtilImpl<float>::_computeInverseBasisTransform(hkMatrix3f const&,hkVector4f const&,hkSymmetricMatrix3Impl<float> &)
// float *hkSymmetricMatrixUtilImpl<float>::_computeInverseBasisTransform(float *a1, float *a2, int a3);
// [0x17a9650] (2927 bytes) hkSolver_solvePoweredChain(hkpSolverInfo const&,hkSolverStepTemp const&,hkpVelocityAccumulator *,hkpJacobianPoweredChainSchema *,hkpSolverElemTemp *)
// int hkSolver_solvePoweredChain(int a1, int a2, int a3, int a4, int a5);
// [0x17aa1c0] (3527 bytes) hkSolver_solveBallAndSocketChain(hkpSolverInfo const&,hkSolverStepTemp const&,hkpVelocityAccumulator *,hkpJacobianBallSocketChainSchema *,hkpSolverElemTemp *)
// float *hkSolver_solveBallAndSocketChain(int a1, int a2, int a3, int a4, int a5);
// [0x17aaf90] (6570 bytes) hkSolver_solveStabilizedBallAndSocketChain(hkpSolverInfo const&,hkSolverStepTemp const&,hkpVelocityAccumulator *,hkpJacobianStabilizedBallSocketChainSchema *,hkpSolverElemTemp *)
// int hkSolver_solveStabilizedBallAndSocketChain(float *a1, int a2, int a3, int a4, int a5);
// [0x17aded0] (955 bytes) hkSolveIntegrateVelocitiesByTheSteps
// int hkSolveIntegrateVelocitiesByTheSteps(int a1, int a2, uint8_t *a3, uint8_t *a4, uint8_t *a5);
// [0x17ae290] (569 bytes) hkSimdFloat32 hkSolver::getLinearDv0UserTauWithCustomRhs<hkpVelocityAccumulator,hkpSolverInfo>(hkp1Lin2AngJacobian const&,hkpVelocityAccumulator const*,hkpVelocityAccumulator const*,hkpSolverInfo const&,hkSimdFloat32 const&,hkSimdFloat32 const&,hkSimdFloat32 const&)
// float *hkSolver::getLinearDv0UserTauWithCustomRhs<hkpVelocityAccumulator,hkpSolverInfo>( float *a1, float *a2, float *a3, float *a4, int a5, float *a6, float *a7, float *a8);
// [0x17ae4d0] (170 bytes) hkSimdFloat32 hkSolver::getLinearDv0<hkpVelocityAccumulator,hkpSolverInfo>(hkp1Lin2AngJacobian const&,hkpVelocityAccumulator const*,hkpVelocityAccumulator const*,hkpSolverInfo const&)
// float *hkSolver::getLinearDv0<hkpVelocityAccumulator,hkpSolverInfo>( float *a1, float *a2, float *a3, float *a4);
// [0x17b1490] (628 bytes) hkMatrix3UtilImpl<float>::_computeTransposeMul(hkMatrix3f const&,hkMatrix3f const&,hkMatrix3f&)
// const hkMatrix3f *hkMatrix3UtilImpl<float>::_computeTransposeMul( hkMatrix3UtilImpl<float> *this, const hkMatrix3f *a2, const hkMatrix3f *a3);
// [0x17b4f40] (10694 bytes) hkSolver::_stepJacobian(hkpSolverInfo const&,hkSolverStepTemp &,hkpJacobianSchema const*,hkpVelocityAccumulator *,hkpSolverElemTemp *)
// int hkSolver::_stepJacobian(float *a1, int a2, float *a3, int a4, float *a5);
// [0x17b7910] (66 bytes) hkSolver::stepJacobian(hkpSolverInfo const&,hkSolverStepTemp &,hkpJacobianSchema const*,hkpVelocityAccumulator *,hkpSolverElemTemp *)
// int hkSolver::stepJacobian(float *a1, int a2, float *a3, int a4, float *a5);
// [0x17b7960] (83 bytes) hkSolveStepJacobians
// int hkSolveStepJacobians(float *a1, float *a2, int a3, float *a4);
// [0x17b79c0] (1188 bytes) hkSolveConstraints
// int hkSolveConstraints(int a1, float *a2, float *a3, float *a4);
// [0x17b7e70] (138 bytes) hkSolveConstraintsByTheSteps
// int hkSolveConstraintsByTheSteps(float *a1, float a2, int a3, float *a4, int a5, float *a6);
// [0x17b9710] (750 bytes) hkQuaternionUtilImpl<float>::_computeShortestRotation(hkVector4f const&,hkVector4f const&,hkQuaternionf &)
// void hkQuaternionUtilImpl<float>::_computeShortestRotation( hkQuaternionUtilImpl<float> *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x17c7370] (413 bytes) hkJacobianBuilder::getInvJac01(hkpVelocityAccumulator const*,hkpVelocityAccumulator const*,hkp1Lin2AngJacobian *,float,float)
// long double hkJacobianBuilder::getInvJac01(float *a1, float *a2, int a3, float a4, float a5);
// [0x17c7510] (8958 bytes) hkSimpleContactConstraintDataBuildJacobian
// int *hkSimpleContactConstraintDataBuildJacobian(__m128i a1, int a2, int a3, char a4, int *a5);
// [0x17c9810] (35 bytes) hkSimpleContactConstraintDataAddALittleSurfaceViscosity
// int hkSimpleContactConstraintDataAddALittleSurfaceViscosity(int a1);
// [0x17c99e0] (351 bytes) hkGskManifold_removePoint
// uint8_t *hkGskManifold_removePoint(uint8_t *a1, int a2);
// [0x17c9b40] (7317 bytes) hkGskManifold_verifyAndGetPoints
// int hkGskManifold_verifyAndGetPoints(uint8_t *a1, float *a2, unsigned int a3, int *a4, int a5);
// [0x17cb7e0] (722 bytes) hkGskManifold_doesPointExistAndResort
// int hkGskManifold_doesPointExistAndResort(int a1, int a2);
// [0x17cbac0] (4481 bytes) hkGskManifold_addPoint
// int hkGskManifold_addPoint( uint8_t *a1, int a2, int a3, int a4, int a5, int a6, uint32_t *a7, int a8, int a9, int a10);
// [0x17ccc50] (90 bytes) hkGskManifold_cleanup
// void hkGskManifold_cleanup(uint8_t *a1, int a2, int a3);
// [0x17cccb0] (2833 bytes) hkSimpleConstraintUtil_InitInfo
// int *hkSimpleConstraintUtil_InitInfo(int a1, int a2, float *a3, hkMatrix3f *a4);
// [0x17cd7d0] (726 bytes) hkSimpleConstraintUtil_applyImpulse
// float *hkSimpleConstraintUtil_applyImpulse(float *a1, float *a2, float *a3, int a4);
// [0x17cdab0] (666 bytes) hkSimpleConstraintUtil_getPointVelocity
// float *hkSimpleConstraintUtil_getPointVelocity(float *a1, int a2, float *a3, float *a4);
// [0x17cdd50] (2091 bytes) hkSimpleConstraintUtil_Collide
// long double hkSimpleConstraintUtil_Collide(int a1, float *a2, float *a3, float *a4);
// [0x17cf9d0] (82 bytes) hkLifoAllocator::fastBlockAlloc(int)
// int hkLifoAllocator::fastBlockAlloc(hkLifoAllocator *this, int a2);
// [0x17cfa30] (90 bytes) hkLifoAllocator::fastBlockFree(void *,int)
// hkLifoAllocator *hkLifoAllocator::fastBlockFree(hkLifoAllocator *this, char *a2, int a3);
// [0x17cfb40] (288 bytes) hkAabbUtil::expandAabbByMotion(hkAabb const&,hkVector4f const&,hkAabb&)
// hkAabbUtil *hkAabbUtil::expandAabbByMotion(hkAabbUtil *this, const hkAabb *a2, __m128 *a3);
// [0x17d6220] (86 bytes) hkArray<unsigned short,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<unsigned short,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<unsigned short, hkContainerHeapAllocator> *this);
// [0x17d6880] (337 bytes) hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHBin>::_trySetSize(hkMemoryAllocator &,int)
// hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHBin> *hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHBin>::_trySetSize( hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHBin> *this, hkMemoryAllocator *a2, hkMemoryAllocator *a3, int a4);
// [0x17d6d70] (178 bytes) hkLocalArray<unsigned short>::~hkLocalArray()
// void hkLocalArray<unsigned short>::~hkLocalArray(hkLocalArray<unsigned short> *this);
// [0x17d9610] (190 bytes) hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHTask>::_clearAndDeallocate(hkMemoryAllocator &)
// hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHTask> *hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHTask>::_clearAndDeallocate( hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHTask> *this, hkMemoryAllocator *a2);
// [0x17d96d0] (200 bytes) hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHBin>::_clearAndDeallocate(hkMemoryAllocator &)
// hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHBin> *hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHBin>::_clearAndDeallocate( hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHBin> *this, hkMemoryAllocator *a2);
// [0x17dbec0] (93 bytes) hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>>>::_expandOne(hkMemoryAllocator &)
// int hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>>>::_expandOne( hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::CodecRawUlong>>, hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::CodecRawUlong>>>> *this, hkMemoryAllocator *a2);
// [0x17dc7e0] (93 bytes) hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkpTreeBroadPhaseSpatialTree16>>::_expandOne(hkMemoryAllocator &)
// int hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkpTreeBroadPhaseSpatialTree16>>::_expandOne( hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::CodecRawUlong>>, hkpTreeBroadPhaseSpatialTree16>> *this, hkMemoryAllocator *a2);
// [0x17e1ed0] (29 bytes) hkGeometryUtils::IVertices::~IVertices()
// void hkGeometryUtils::IVertices::~IVertices(hkGeometryUtils::IVertices *this);
// [0x17e1ef0] (12 bytes) hkGeometryUtils::IVertices::isWeldingAllowed(int,int)const
// int hkGeometryUtils::IVertices::isWeldingAllowed();
// [0x17e1fd0] (78 bytes) hkGeometryUtils::IVertices::~IVertices()
// void hkGeometryUtils::IVertices::~IVertices(hkGeometryUtils::IVertices *this);
// [0x17e3400] (123 bytes) hkAabb::expandBy(hkSimdFloat32 const&)
// float *hkAabb::expandBy(float *a1, float *a2);
// [0x17e3500] (57 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::operator new();
// [0x17e3540] (71 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkStringMap<unsigned int,hkContainerHeapAllocator>::operator delete(void *a1);
// [0x17e3590] (11 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkStringMap<unsigned int,hkContainerHeapAllocator>::operator new( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x17e35a0] (11 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkStringMap<unsigned int,hkContainerHeapAllocator>::operator new[]( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x17e35b0] (9 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkStringMap<unsigned int,hkContainerHeapAllocator>::operator delete();
// [0x17e35c0] (9 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkStringMap<unsigned int,hkContainerHeapAllocator>::operator delete[]();
// [0x17e35d0] (39 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::hkStringMap(void)
// void hkStringMap<unsigned int,hkContainerHeapAllocator>::hkStringMap(hkStringMap_Raw *this);
// [0x17e3600] (50 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::insert(char const*,unsigned int)
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::insert( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, hkString *a2, unsigned int a3);
// [0x17e3640] (42 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::findKey(char const*)const
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::findKey( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, hkString *a2);
// [0x17e3670] (50 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::findOrInsertKey(char const*,unsigned int)
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::findOrInsertKey( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, hkString *a2, unsigned int a3);
// [0x17e36b0] (73 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::hasKey(char const*)const
// hkStringMap<unsigned int, hkContainerHeapAllocator> *hkStringMap<unsigned int,hkContainerHeapAllocator>::hasKey( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2, hkString *a3);
// [0x17e3700] (50 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::getOrInsert(char const*,unsigned int)
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::getOrInsert( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, hkString *a2, unsigned int a3);
// [0x17e3740] (50 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::getWithDefault(char const*,unsigned int)const
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::getWithDefault( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, hkString *a2, unsigned int a3);
// [0x17e3780] (122 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::get(char const*,unsigned int *)const
// hkStringMap<unsigned int, hkContainerHeapAllocator> *hkStringMap<unsigned int,hkContainerHeapAllocator>::get( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2, hkString *a3, uint32_t *a4);
// [0x17e3800] (42 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::remove(Dummy *)
// unsigned int hkStringMap<unsigned int,hkContainerHeapAllocator>::remove(int *a1, unsigned int a2);
// [0x17e3830] (59 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::remove(char const*)
// hkStringMap<unsigned int, hkContainerHeapAllocator> *hkStringMap<unsigned int,hkContainerHeapAllocator>::remove( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2, hkString *a3);
// [0x17e3870] (12 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::getSize(void)const
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::getSize( hkStringMap<unsigned int, hkContainerHeapAllocator> *this);
// [0x17e3880] (52 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::isOk(void)const
// hkStringMap<unsigned int, hkContainerHeapAllocator> *hkStringMap<unsigned int,hkContainerHeapAllocator>::isOk( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, int *a2);
// [0x17e38c0] (34 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::getIterator(void)const
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::getIterator( hkStringMap<unsigned int, hkContainerHeapAllocator> *this);
// [0x17e38f0] (42 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::getKey(Dummy *)const
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::getKey(uint32_t *a1, int a2);
// [0x17e3920] (42 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::getValue(Dummy *)const
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::getValue(uint32_t *a1, int a2);
// [0x17e3950] (50 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::setValue(Dummy *,unsigned int)
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::setValue(uint32_t *a1, int a2, int a3);
// [0x17e3990] (42 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::getNext(Dummy *)const
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::getNext(uint32_t *a1, int a2);
// [0x17e39c0] (59 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::isValid(Dummy *)const
// bool *hkStringMap<unsigned int,hkContainerHeapAllocator>::isValid(bool *a1, int a2, int a3);
// [0x17e3a00] (34 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::clear(void)
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::clear( hkStringMap<unsigned int, hkContainerHeapAllocator> *this);
// [0x17e3a30] (65 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::reset(void)
// void hkStringMap<unsigned int,hkContainerHeapAllocator>::reset( hkStringMap<unsigned int, hkContainerHeapAllocator> *this);
// [0x17e3a80] (42 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::swap(hkStringMap<unsigned int,hkContainerHeapAllocator>&)
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkStringMap<unsigned int,hkContainerHeapAllocator>::swap( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, hkStringMap<unsigned int, hkContainerHeapAllocator> *a2);
// [0x17e3ab0] (42 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::merge(hkStringMap<unsigned int,hkContainerHeapAllocator> const&)
// void hkStringMap<unsigned int,hkContainerHeapAllocator>::merge( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, const hkStringMap<unsigned int, hkContainerHeapAllocator> *a2);
// [0x17e3ae0] (34 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::getCapacity(void)const
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::getCapacity( hkStringMap<unsigned int, hkContainerHeapAllocator> *this);
// [0x17e3b10] (42 bytes) hkStringMap<unsigned int,hkContainerHeapAllocator>::reserve(int)
// int hkStringMap<unsigned int,hkContainerHeapAllocator>::reserve( hkStringMap<unsigned int, hkContainerHeapAllocator> *this, int a2);
// [0x17e5a80] (368 bytes) hkArrayBase<hkPointerMap<int,int,hkContainerHeapAllocator>>::_setSize(hkMemoryAllocator &,int)
// hkArrayBase<hkPointerMap<int, int, hkContainerHeapAllocator>> *hkArrayBase<hkPointerMap<int,int,hkContainerHeapAllocator>>::_setSize( hkArrayBase<hkPointerMap<int, int, hkContainerHeapAllocator>> *this, hkMemoryAllocator *a2, int a3);
// [0x17e6bc0] (558 bytes) hkVector4_AdvancedInterface::unrollf_setReciprocal<(hkMathAccuracyMode)1,(hkMathDivByZeroMode)1>::apply(hkQuadFloat32 &,hkVector4f const&)
// int hkVector4_AdvancedInterface::unrollf_setReciprocal<(hkMathAccuracyMode)1,(hkMathDivByZeroMode)1>::apply(;
// [0x17f4df0] (198 bytes) hkSolverExport::exportImpulsesAndRhs(hkpSolverInfo const&,hkpSolverElemTemp const*,hkpJacobianSchema const*,hkpVelocityAccumulator const*)
// float *hkSolverExport::exportImpulsesAndRhs(int a1, float *a2, float *a3, int a4);
// [0x17f7860] (58 bytes) hkExportImpulsesAndRhs
// float *hkExportImpulsesAndRhs(int a1, float *a2, float *a3, int a4);
// [0x17f8900] (2721 bytes) hkGskAgentUtil_processCollisionNoTim(hkpAgent3Input const&,hkpAgentEntry *,void *,hkpGskCache &,hkpGskManifold &,hkVector4f &,int,hkpProcessCollisionOutput &)
// void hkGskAgentUtil_processCollisionNoTim( int *a1, unsigned int a2, unsigned int a3, int a4, uint8_t *a5, float *a6, int a7, int *a8);
// [0x1801800] (178 bytes) hkLocalArray<unsigned int>::~hkLocalArray()
// void hkLocalArray<unsigned int>::~hkLocalArray(hkLocalArray<unsigned int> *this);
// [0x1808dd0] (93 bytes) hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkpTreeBroadPhaseSpatialTree32>>::_expandOne(hkMemoryAllocator &)
// int hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkpTreeBroadPhaseSpatialTree32>>::_expandOne( hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric, hkcdDynamicTree::CodecRawUlong>>, hkpTreeBroadPhaseSpatialTree32>> *this, hkMemoryAllocator *a2);
// [0x181b550] (59 bytes) hkDisplayGeometryBuilder::buildPartialDisplayGeometries(hkReferencedObject const*,int &,hkReferencedObject*,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// uint8_t *hkDisplayGeometryBuilder::buildPartialDisplayGeometries( uint8_t *a1, int a2, int a3, uint32_t *a4, int a5, int a6);
// [0x181b590] (9 bytes) hkDisplayGeometryBuilder::getInitialContinueData(hkReferencedObject const*)
// int hkDisplayGeometryBuilder::getInitialContinueData();
// [0x181b5a0] (29 bytes) hkDisplayGeometryBuilder::~hkDisplayGeometryBuilder()
// void hkDisplayGeometryBuilder::~hkDisplayGeometryBuilder(hkDisplayGeometryBuilder *this);
// [0x181b7c0] (96 bytes) hkDisplayGeometryBuilder::~hkDisplayGeometryBuilder()
// void hkDisplayGeometryBuilder::~hkDisplayGeometryBuilder(hkDisplayGeometryBuilder *this);
// [0x182daf0] (12 bytes) hkProcess::getType(void)const
// int hkProcess::getType();
// [0x182db00] (9 bytes) hkProcess::init(void)
// void hkProcess::init();
// [0x182dbb0] (61 bytes) hkProcess::isOk(void)
// bool hkProcess::isOk(hkProcess *this);
// [0x182fe10] (303 bytes) hkQueue<hkpRigidBody *>::setCapacity(int)
// int hkQueue<hkpRigidBody *>::setCapacity(hkQueue<hkpRigidBody *> *this, int a2);
// [0x1831530] (29 bytes) hkPackfileWriter::AddObjectListener::~AddObjectListener()
// void hkPackfileWriter::AddObjectListener::~AddObjectListener(hkPackfileWriter::AddObjectListener *this);
// [0x1831650] (96 bytes) hkPackfileWriter::AddObjectListener::~AddObjectListener()
// void hkPackfileWriter::AddObjectListener::~AddObjectListener(hkPackfileWriter::AddObjectListener *this);
// [0x183bcc0] (29 bytes) hkCrcStreamWriter<unsigned long long,14514072000185962306ull>::~hkCrcStreamWriter()
// void hkCrcStreamWriter<unsigned long long,14514072000185962306ull>::~hkCrcStreamWriter( hkCrcStreamWriter<unsigned long long, 14514072000185962306ull> *this);
// [0x183bce0] (152 bytes) hkCrcStreamWriter<unsigned long long,14514072000185962306ull>::write(void const*,int)
// int hkCrcStreamWriter<unsigned long long,14514072000185962306ull>::write( hkCrcStreamWriter<unsigned long long, 14514072000185962306ull> *this, char *a2, int a3);
// [0x183bd80] (29 bytes) hkCrc64StreamWriter::~hkCrc64StreamWriter()
// void hkCrc64StreamWriter::~hkCrc64StreamWriter(hkCrc64StreamWriter *this);
// [0x183bda0] (10 bytes) hkCrcStreamWriter<unsigned long long,14514072000185962306ull>::isOk(void)const
// hkCrcStreamWriter<unsigned long long, 14514072000185962306ull> *hkCrcStreamWriter<unsigned long long,14514072000185962306ull>::isOk( hkCrcStreamWriter<unsigned long long, 14514072000185962306ull> *this);
// [0x183bdb0] (96 bytes) hkCrc64StreamWriter::~hkCrc64StreamWriter()
// void hkCrc64StreamWriter::~hkCrc64StreamWriter(hkCrc64StreamWriter *this);
// [0x183be10] (96 bytes) hkCrcStreamWriter<unsigned long long,14514072000185962306ull>::~hkCrcStreamWriter()
// void hkCrcStreamWriter<unsigned long long,14514072000185962306ull>::~hkCrcStreamWriter( hkCrcStreamWriter<unsigned long long, 14514072000185962306ull> *this);
// [0x1846800] (29 bytes) hkProcess::~hkProcess()
// void hkProcess::~hkProcess(hkProcess *this);
// [0x1846820] (21 bytes) hkProcess::getConsumableCommands(unsigned char *&,int &)
// int *hkProcess::getConsumableCommands(hkProcess *this, uint8_t **a2, int *a3);
// [0x1846840] (9 bytes) hkProcess::consumeCommand(unsigned char)
// void hkProcess::consumeCommand();
// [0x1846850] (9 bytes) hkProcess::step(float)
// void hkProcess::step();
// [0x1846860] (78 bytes) hkProcess::~hkProcess()
// void hkProcess::~hkProcess(hkProcess *this);
// [0x185ac80] (291 bytes) hkArrayBase<hkpBallSocketChainData::ConstraintInfo>::_spliceInto(hkMemoryAllocator &,int,int,hkpBallSocketChainData::ConstraintInfo const*,int)
// int hkArrayBase<hkpBallSocketChainData::ConstraintInfo>::_spliceInto( hkArrayBase<hkpBallSocketChainData::ConstraintInfo> *this, hkMemoryAllocator *a2, int a3, int a4, const hkpBallSocketChainData::ConstraintInfo *a5, int a6);
// [0x186fcb0] (9 bytes) hkMeshShape::getName(void)const
// int hkMeshShape::getName();
// [0x186fcc0] (9 bytes) hkMeshShape::setName(char const*)
// void hkMeshShape::setName();
// [0x186fcd0] (29 bytes) hkMeshShape::~hkMeshShape()
// void hkMeshShape::~hkMeshShape(hkMeshShape *this);
// [0x186fcf0] (12 bytes) hkxBlobMeshShape::getNumSections(void)const
// int hkxBlobMeshShape::getNumSections();
// [0x186fd00] (9 bytes) hkxBlobMeshShape::lockSection(int,unsigned char,hkMeshSection &)const
// void hkxBlobMeshShape::lockSection();
// [0x186fd10] (9 bytes) hkxBlobMeshShape::unlockSection(hkMeshSection const&)const
// void hkxBlobMeshShape::unlockSection();
// [0x186fd20] (13 bytes) hkxBlobMeshShape::getName(void)const
// unsigned int hkxBlobMeshShape::getName(hkxBlobMeshShape *this);
// [0x186fd30] (22 bytes) hkxBlobMeshShape::getClassType(void)const
// void *hkxBlobMeshShape::getClassType();
// [0x186fd70] (45 bytes) hkxBlobMeshShape::setName(char const*)
// hkStringPtr *hkxBlobMeshShape::setName(hkxBlobMeshShape *this, hkString *a2);
// [0x186fdf0] (96 bytes) hkMeshShape::~hkMeshShape()
// void hkMeshShape::~hkMeshShape(hkMeshShape *this);
// [0x186fe50] (191 bytes) hkxBlobMeshShape::~hkxBlobMeshShape()
// void hkxBlobMeshShape::~hkxBlobMeshShape(hkxBlobMeshShape *this);
// [0x186ff10] (108 bytes) hkxBlob::~hkxBlob()
// void hkxBlob::~hkxBlob(hkxBlob *this);
// [0x186ff80] (134 bytes) hkxBlobMeshShape::~hkxBlobMeshShape()
// void hkxBlobMeshShape::~hkxBlobMeshShape(hkxBlobMeshShape *this);
// [0x1870010] (165 bytes) hkxBlob::~hkxBlob()
// void hkxBlob::~hkxBlob(hkxBlob *this);
// [0x18700c0] (22 bytes) hkxBlobMeshShape::staticClass(void)
// void *hkxBlobMeshShape::staticClass();
// [0x1870230] (163 bytes) hkxSpline::~hkxSpline()
// void hkxSpline::~hkxSpline(hkxSpline *this);
// [0x18702e0] (106 bytes) hkxSpline::~hkxSpline()
// void hkxSpline::~hkxSpline(hkxSpline *this);
// [0x1870350] (22 bytes) hkxSpline::ControlPoint::staticClass(void)
// void *hkxSpline::ControlPoint::staticClass();
// [0x1870370] (22 bytes) hkxSpline::staticClass(void)
// void *hkxSpline::staticClass();
// [0x1870610] (22 bytes) hkxMaterial::TextureStage::staticClass(void)
// void *hkxMaterial::TextureStage::staticClass();
// [0x1870630] (22 bytes) hkxMaterial::Property::staticClass(void)
// void *hkxMaterial::Property::staticClass();
// [0x1870650] (22 bytes) hkxMaterial::staticClass(void)
// void *hkxMaterial::staticClass();
// [0x1870930] (163 bytes) hkxAnimatedVector::~hkxAnimatedVector()
// void hkxAnimatedVector::~hkxAnimatedVector(hkxAnimatedVector *this);
// [0x18709e0] (106 bytes) hkxAnimatedVector::~hkxAnimatedVector()
// void hkxAnimatedVector::~hkxAnimatedVector(hkxAnimatedVector *this);
// [0x1870a50] (22 bytes) hkxAnimatedVector::staticClass(void)
// void *hkxAnimatedVector::staticClass();
// [0x1870b90] (163 bytes) hkxTriangleSelectionChannel::~hkxTriangleSelectionChannel()
// void hkxTriangleSelectionChannel::~hkxTriangleSelectionChannel(hkxTriangleSelectionChannel *this);
// [0x1870c40] (106 bytes) hkxTriangleSelectionChannel::~hkxTriangleSelectionChannel()
// void hkxTriangleSelectionChannel::~hkxTriangleSelectionChannel(hkxTriangleSelectionChannel *this);
// [0x1870cb0] (22 bytes) hkxTriangleSelectionChannel::staticClass(void)
// void *hkxTriangleSelectionChannel::staticClass();
// [0x1870da0] (557 bytes) hkxMaterial::~hkxMaterial()
// void hkxMaterial::~hkxMaterial(hkxMaterial *this);
// [0x1870fd0] (93 bytes) hkxMaterial::~hkxMaterial()
// void hkxMaterial::~hkxMaterial(hkxMaterial *this);
// [0x1871030] (717 bytes) hkxMaterial::sortTextureStageOrder(void)
// int *hkxMaterial::sortTextureStageOrder(hkxMaterial *this);
// [0x1871300] (86 bytes) hkxMaterial::getProperty(int)const
// int hkxMaterial::getProperty(hkxMaterial *this, int a2);
// [0x1871360] (71 bytes) hkxMaterial::hasProperty(int)const
// hkxMaterial *hkxMaterial::hasProperty(hkxMaterial *this, int a2, int a3);
// [0x18713b0] (190 bytes) hkxMaterial::addProperty(int,int)
// hkxMaterial *hkxMaterial::addProperty(hkxMaterial *this, int a2, int a3);
// [0x1871470] (1215 bytes) hkxMaterial::equals(hkxMaterial const*)const
// int hkxMaterial::equals(hkxMaterial *this, const hkxMaterial *a2);
// [0x1871970] (163 bytes) hkxVertexVectorDataChannel::~hkxVertexVectorDataChannel()
// void hkxVertexVectorDataChannel::~hkxVertexVectorDataChannel(hkxVertexVectorDataChannel *this);
// [0x1871a20] (106 bytes) hkxVertexVectorDataChannel::~hkxVertexVectorDataChannel()
// void hkxVertexVectorDataChannel::~hkxVertexVectorDataChannel(hkxVertexVectorDataChannel *this);
// [0x1871a90] (22 bytes) hkxVertexVectorDataChannel::staticClass(void)
// void *hkxVertexVectorDataChannel::staticClass();
// [0x1871bc0] (224 bytes) hkxSparselyAnimatedString::~hkxSparselyAnimatedString()
// void hkxSparselyAnimatedString::~hkxSparselyAnimatedString(hkxSparselyAnimatedString *this);
// [0x1871ca0] (279 bytes) hkxSparselyAnimatedString::~hkxSparselyAnimatedString()
// void hkxSparselyAnimatedString::~hkxSparselyAnimatedString(hkxSparselyAnimatedString *this);
// [0x1871dc0] (22 bytes) hkxSparselyAnimatedString::staticClass(void)
// void *hkxSparselyAnimatedString::staticClass();
// [0x1871eb0] (22 bytes) hkxTextureFile::getClassType(void)const
// void *hkxTextureFile::getClassType();
// [0x1871ef0] (83 bytes) hkxTextureFile::~hkxTextureFile()
// void hkxTextureFile::~hkxTextureFile(hkxTextureFile *this);
// [0x1871fb0] (140 bytes) hkxTextureFile::~hkxTextureFile()
// void hkxTextureFile::~hkxTextureFile(hkxTextureFile *this);
// [0x1872040] (90 bytes) hkxTextureFile::hkxTextureFile(hkFinishLoadedObjectFlag)
// void hkxTextureFile::hkxTextureFile(uint32_t *a1);
// [0x18720a0] (22 bytes) hkxTextureFile::staticClass(void)
// void *hkxTextureFile::staticClass();
// [0x18721e0] (163 bytes) hkxVertexFloatDataChannel::~hkxVertexFloatDataChannel()
// void hkxVertexFloatDataChannel::~hkxVertexFloatDataChannel(hkxVertexFloatDataChannel *this);
// [0x1872290] (106 bytes) hkxVertexFloatDataChannel::~hkxVertexFloatDataChannel()
// void hkxVertexFloatDataChannel::~hkxVertexFloatDataChannel(hkxVertexFloatDataChannel *this);
// [0x1872300] (22 bytes) hkxVertexFloatDataChannel::staticClass(void)
// void *hkxVertexFloatDataChannel::staticClass();
// [0x18725a0] (22 bytes) hkxVertexBuffer::VertexData::staticClass(void)
// void *hkxVertexBuffer::VertexData::staticClass();
// [0x18725c0] (22 bytes) hkxVertexBuffer::staticClass(void)
// void *hkxVertexBuffer::staticClass();
// [0x18727b0] (163 bytes) hkxVertexIntDataChannel::~hkxVertexIntDataChannel()
// void hkxVertexIntDataChannel::~hkxVertexIntDataChannel(hkxVertexIntDataChannel *this);
// [0x1872860] (106 bytes) hkxVertexIntDataChannel::~hkxVertexIntDataChannel()
// void hkxVertexIntDataChannel::~hkxVertexIntDataChannel(hkxVertexIntDataChannel *this);
// [0x18728d0] (22 bytes) hkxVertexIntDataChannel::staticClass(void)
// void *hkxVertexIntDataChannel::staticClass();
// [0x1872a00] (166 bytes) hkxIndexBuffer::~hkxIndexBuffer()
// void hkxIndexBuffer::~hkxIndexBuffer(hkxIndexBuffer *this);
// [0x1872ab0] (223 bytes) hkxIndexBuffer::~hkxIndexBuffer()
// void hkxIndexBuffer::~hkxIndexBuffer(hkxIndexBuffer *this);
// [0x1872b90] (22 bytes) hkxIndexBuffer::staticClass(void)
// void *hkxIndexBuffer::staticClass();
// [0x1872cd0] (163 bytes) hkxAnimatedQuaternion::~hkxAnimatedQuaternion()
// void hkxAnimatedQuaternion::~hkxAnimatedQuaternion(hkxAnimatedQuaternion *this);
// [0x1872d80] (106 bytes) hkxAnimatedQuaternion::~hkxAnimatedQuaternion()
// void hkxAnimatedQuaternion::~hkxAnimatedQuaternion(hkxAnimatedQuaternion *this);
// [0x1872df0] (22 bytes) hkxAnimatedQuaternion::staticClass(void)
// void *hkxAnimatedQuaternion::staticClass();
// [0x1872f20] (162 bytes) hkxSparselyAnimatedInt::~hkxSparselyAnimatedInt()
// void hkxSparselyAnimatedInt::~hkxSparselyAnimatedInt(hkxSparselyAnimatedInt *this);
// [0x1872fd0] (219 bytes) hkxSparselyAnimatedInt::~hkxSparselyAnimatedInt()
// void hkxSparselyAnimatedInt::~hkxSparselyAnimatedInt(hkxSparselyAnimatedInt *this);
// [0x18730b0] (22 bytes) hkxSparselyAnimatedInt::staticClass(void)
// void *hkxSparselyAnimatedInt::staticClass();
// [0x1873300] (22 bytes) hkxAttributeGroup::staticClass(void)
// void *hkxAttributeGroup::staticClass();
// [0x1873430] (163 bytes) hkxEdgeSelectionChannel::~hkxEdgeSelectionChannel()
// void hkxEdgeSelectionChannel::~hkxEdgeSelectionChannel(hkxEdgeSelectionChannel *this);
// [0x18734e0] (106 bytes) hkxEdgeSelectionChannel::~hkxEdgeSelectionChannel()
// void hkxEdgeSelectionChannel::~hkxEdgeSelectionChannel(hkxEdgeSelectionChannel *this);
// [0x1873550] (22 bytes) hkxEdgeSelectionChannel::staticClass(void)
// void *hkxEdgeSelectionChannel::staticClass();
// [0x1873680] (163 bytes) hkxAnimatedMatrix::~hkxAnimatedMatrix()
// void hkxAnimatedMatrix::~hkxAnimatedMatrix(hkxAnimatedMatrix *this);
// [0x1873730] (106 bytes) hkxAnimatedMatrix::~hkxAnimatedMatrix()
// void hkxAnimatedMatrix::~hkxAnimatedMatrix(hkxAnimatedMatrix *this);
// [0x18737a0] (22 bytes) hkxAnimatedMatrix::staticClass(void)
// void *hkxAnimatedMatrix::staticClass();
// [0x18738e0] (69 bytes) hkxMesh::UserChannelInfo::~UserChannelInfo()
// void hkxMesh::UserChannelInfo::~UserChannelInfo(hkxMesh::UserChannelInfo *this);
// [0x18739b0] (126 bytes) hkxMesh::UserChannelInfo::~UserChannelInfo()
// void hkxMesh::UserChannelInfo::~UserChannelInfo(hkxMesh::UserChannelInfo *this);
// [0x1873a30] (22 bytes) hkxMesh::UserChannelInfo::staticClass(void)
// void *hkxMesh::UserChannelInfo::staticClass();
// [0x1873a50] (22 bytes) hkxMesh::staticClass(void)
// void *hkxMesh::staticClass();
// [0x1873c40] (517 bytes) hkxAttributeHolder::~hkxAttributeHolder()
// void hkxAttributeHolder::~hkxAttributeHolder(hkxAttributeHolder *this);
// [0x1873e50] (93 bytes) hkxAttributeHolder::~hkxAttributeHolder()
// void hkxAttributeHolder::~hkxAttributeHolder(hkxAttributeHolder *this);
// [0x1873eb0] (647 bytes) hkxAttributeHolder::hkxAttributeHolder(hkxAttributeHolder const&)
// void hkxAttributeHolder::hkxAttributeHolder(hkxAttributeHolder *this, const hkxAttributeHolder *a2);
// [0x1874140] (115 bytes) hkxAttributeHolder::findAttributeGroupByName(char const*)const
// uint32_t *hkxAttributeHolder::findAttributeGroupByName(hkxAttributeHolder *this, char *a2);
// [0x18741c0] (304 bytes) hkxAttributeHolder::findAttributeVariantByName(char const*)const
// hkxAttributeHolder *hkxAttributeHolder::findAttributeVariantByName( hkxAttributeHolder *this, const char *a2, int a3);
// [0x18742f0] (228 bytes) hkxAttributeHolder::findAttributeObjectByName(char const*,hkClass const*)const
// int hkxAttributeHolder::findAttributeObjectByName(hkxAttributeHolder *this, const char *a2, const hkClass *a3);
// [0x18744c0] (215 bytes) hkxEnum::~hkxEnum()
// void hkxEnum::~hkxEnum(hkxEnum *this);
// [0x18745a0] (253 bytes) hkxSparselyAnimatedEnum::~hkxSparselyAnimatedEnum()
// void hkxSparselyAnimatedEnum::~hkxSparselyAnimatedEnum(hkxSparselyAnimatedEnum *this);
// [0x18746a0] (309 bytes) hkxSparselyAnimatedEnum::~hkxSparselyAnimatedEnum()
// void hkxSparselyAnimatedEnum::~hkxSparselyAnimatedEnum(hkxSparselyAnimatedEnum *this);
// [0x18747e0] (160 bytes) hkxEnum::~hkxEnum()
// void hkxEnum::~hkxEnum(hkxEnum *this);
// [0x1874880] (22 bytes) hkxEnum::Item::staticClass(void)
// void *hkxEnum::Item::staticClass();
// [0x18748a0] (22 bytes) hkxEnum::staticClass(void)
// void *hkxEnum::staticClass();
// [0x18748c0] (22 bytes) hkxSparselyAnimatedEnum::staticClass(void)
// void *hkxSparselyAnimatedEnum::staticClass();
// [0x1874b30] (119 bytes) hkxMaterialEffect::~hkxMaterialEffect()
// void hkxMaterialEffect::~hkxMaterialEffect(hkxMaterialEffect *this);
// [0x1874bf0] (176 bytes) hkxMaterialEffect::~hkxMaterialEffect()
// void hkxMaterialEffect::~hkxMaterialEffect(hkxMaterialEffect *this);
// [0x1874ca0] (22 bytes) hkxMaterialEffect::staticClass(void)
// void *hkxMaterialEffect::staticClass();
// [0x1874e10] (22 bytes) hkAlignSceneToNodeOptions::staticClass(void)
// void *hkAlignSceneToNodeOptions::staticClass();
// [0x1874f10] (448 bytes) hkxVertexBuffer::~hkxVertexBuffer()
// void hkxVertexBuffer::~hkxVertexBuffer(hkxVertexBuffer *this);
// [0x18750d0] (503 bytes) hkxVertexBuffer::~hkxVertexBuffer()
// void hkxVertexBuffer::~hkxVertexBuffer(hkxVertexBuffer *this);
// [0x18752d0] (82 bytes) hkxVertexBuffer::VertexData::clear(void)
// hkxVertexBuffer::VertexData *hkxVertexBuffer::VertexData::clear(hkxVertexBuffer::VertexData *this);
// [0x1875330] (440 bytes) hkxVertexBuffer::VertexData::setSize(int)
// hkArrayUtil *hkxVertexBuffer::VertexData::setSize(hkxVertexBuffer::VertexData *this, int a2);
// [0x18754f0] (492 bytes) hkxVertexBuffer::VertexData::expandBy(int)
// int hkxVertexBuffer::VertexData::expandBy(hkxVertexBuffer::VertexData *this, int a2);
// [0x18756e0] (57 bytes) hkxVertexBuffer::hkxVertexBuffer(hkFinishLoadedObjectFlag)
// int hkxVertexBuffer::hkxVertexBuffer(uint32_t *a1, int a2);
// [0x1875720] (1260 bytes) hkxVertexBuffer::setNumVertices(int,hkxVertexDescription const&)
// hkArrayUtil *hkxVertexBuffer::setNumVertices(hkxVertexBuffer *this, int a2, const hkxVertexDescription *a3);
// [0x1875c10] (45 bytes) hkxVertexBuffer::expandNumVertices(int)
// int hkxVertexBuffer::expandNumVertices(hkxVertexBuffer *this, int a2);
// [0x1875c40] (121 bytes) hkxVertexBuffer::getVertexDataPtr(hkxVertexDescription::ElementDecl const&)
// int hkxVertexBuffer::getVertexDataPtr(hkxVertexBuffer *this, const hkxVertexDescription::ElementDecl *a2);
// [0x1875cc0] (42 bytes) hkxVertexBuffer::getVertexDataPtr(hkxVertexDescription::ElementDecl const&)const
// int hkxVertexBuffer::getVertexDataPtr(hkxVertexBuffer *this, const hkxVertexDescription::ElementDecl *a2);
// [0x1875cf0] (999 bytes) hkxVertexBuffer::copyVertex(hkxVertexBuffer const&,int,int)
// int hkxVertexBuffer::copyVertex(size_t *this, const hkxVertexBuffer *a2, int a3, int a4);
// [0x18760e0] (397 bytes) hkxVertexBuffer::copy(hkxVertexBuffer const&,bool)
// int hkxVertexBuffer::copy(hkString **this, const hkxVertexBuffer *a2, bool a3);
// [0x18762b0] (29 bytes) hkxCamera::~hkxCamera()
// void hkxCamera::~hkxCamera(hkxCamera *this);
// [0x18762d0] (96 bytes) hkxCamera::~hkxCamera()
// void hkxCamera::~hkxCamera(hkxCamera *this);
// [0x1876330] (22 bytes) hkxCamera::staticClass(void)
// void *hkxCamera::staticClass();
// [0x1876440] (152 bytes) hkxMaterialShader::~hkxMaterialShader()
// void hkxMaterialShader::~hkxMaterialShader(hkxMaterialShader *this);
// [0x1876550] (209 bytes) hkxMaterialShader::~hkxMaterialShader()
// void hkxMaterialShader::~hkxMaterialShader(hkxMaterialShader *this);
// [0x1876630] (105 bytes) hkxMaterialShader::hkxMaterialShader(hkFinishLoadedObjectFlag)
// void hkxMaterialShader::hkxMaterialShader(uint32_t *a1);
// [0x18766a0] (22 bytes) hkxMaterialShader::staticClass(void)
// void *hkxMaterialShader::staticClass();
// [0x18767f0] (290 bytes) hkxSkinBinding::~hkxSkinBinding()
// void hkxSkinBinding::~hkxSkinBinding(hkxSkinBinding *this);
// [0x1876920] (346 bytes) hkxSkinBinding::~hkxSkinBinding()
// void hkxSkinBinding::~hkxSkinBinding(hkxSkinBinding *this);
// [0x1876a80] (22 bytes) hkxSkinBinding::staticClass(void)
// void *hkxSkinBinding::staticClass();
// [0x1876b90] (130 bytes) hkxTextureInplace::~hkxTextureInplace()
// void hkxTextureInplace::~hkxTextureInplace(hkxTextureInplace *this);
// [0x1876c70] (187 bytes) hkxTextureInplace::~hkxTextureInplace()
// void hkxTextureInplace::~hkxTextureInplace(hkxTextureInplace *this);
// [0x1876d30] (22 bytes) hkxTextureInplace::staticClass(void)
// void *hkxTextureInplace::staticClass();
// [0x1876eb0] (220 bytes) hkxNodeSelectionSet::~hkxNodeSelectionSet()
// void hkxNodeSelectionSet::~hkxNodeSelectionSet(hkxNodeSelectionSet *this);
// [0x1876f90] (275 bytes) hkxNodeSelectionSet::~hkxNodeSelectionSet()
// void hkxNodeSelectionSet::~hkxNodeSelectionSet(hkxNodeSelectionSet *this);
// [0x18770b0] (22 bytes) hkxNodeSelectionSet::staticClass(void)
// void *hkxNodeSelectionSet::staticClass();
// [0x1877210] (22 bytes) hkxMaterialShaderSet::staticClass(void)
// void *hkxMaterialShaderSet::staticClass();
// [0x1877310] (279 bytes) hkxMaterialShaderSet::~hkxMaterialShaderSet()
// void hkxMaterialShaderSet::~hkxMaterialShaderSet(hkxMaterialShaderSet *this);
// [0x1877430] (224 bytes) hkxMaterialShaderSet::~hkxMaterialShaderSet()
// void hkxMaterialShaderSet::~hkxMaterialShaderSet(hkxMaterialShaderSet *this);
// [0x1877510] (55 bytes) hkxMaterialShaderSet::hkxMaterialShaderSet(void)
// void hkxMaterialShaderSet::hkxMaterialShaderSet(hkxMaterialShaderSet *this);
// [0x1877550] (29 bytes) hkxMaterialShaderSet::hkxMaterialShaderSet(hkFinishLoadedObjectFlag)
// uint32_t *hkxMaterialShaderSet::hkxMaterialShaderSet(uint32_t *a1);
// [0x18775b0] (22 bytes) hkxAttributeHolder::staticClass(void)
// void *hkxAttributeHolder::staticClass();
// [0x1877770] (22 bytes) hkxNode::AnnotationData::staticClass(void)
// void *hkxNode::AnnotationData::staticClass();
// [0x1877790] (22 bytes) hkxNode::staticClass(void)
// void *hkxNode::staticClass();
// [0x18779e0] (22 bytes) hkxScene::staticClass(void)
// void *hkxScene::staticClass();
// [0x1877bb0] (22 bytes) hkxAttribute::staticClass(void)
// void *hkxAttribute::staticClass();
// [0x1877ca0] (22 bytes) hkxAnimatedFloat::getClassType(void)const
// void *hkxAnimatedFloat::getClassType();
// [0x1877d00] (163 bytes) hkxAnimatedFloat::~hkxAnimatedFloat()
// void hkxAnimatedFloat::~hkxAnimatedFloat(hkxAnimatedFloat *this);
// [0x1877db0] (106 bytes) hkxAnimatedFloat::~hkxAnimatedFloat()
// void hkxAnimatedFloat::~hkxAnimatedFloat(hkxAnimatedFloat *this);
// [0x1877e20] (22 bytes) hkxAnimatedFloat::staticClass(void)
// void *hkxAnimatedFloat::staticClass();
// [0x1877f60] (163 bytes) hkxVertexSelectionChannel::~hkxVertexSelectionChannel()
// void hkxVertexSelectionChannel::~hkxVertexSelectionChannel(hkxVertexSelectionChannel *this);
// [0x1878010] (106 bytes) hkxVertexSelectionChannel::~hkxVertexSelectionChannel()
// void hkxVertexSelectionChannel::~hkxVertexSelectionChannel(hkxVertexSelectionChannel *this);
// [0x1878080] (22 bytes) hkxVertexSelectionChannel::staticClass(void)
// void *hkxVertexSelectionChannel::staticClass();
// [0x18781b0] (22 bytes) hkxBlob::staticClass(void)
// void *hkxBlob::staticClass();
// [0x18782a0] (384 bytes) hkxMesh::~hkxMesh()
// void hkxMesh::~hkxMesh(hkxMesh *this);
// [0x1878420] (93 bytes) hkxMesh::~hkxMesh()
// void hkxMesh::~hkxMesh(hkxMesh *this);
// [0x1878480] (29 bytes) hkxMesh::hkxMesh(hkFinishLoadedObjectFlag)
// uint32_t *hkxMesh::hkxMesh(uint32_t *a1);
// [0x18784a0] (83 bytes) hkxMesh::collectVertexPositions(hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// int hkxMesh::collectVertexPositions(hkxMesh *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1878500] (1155 bytes) hkxMesh::appendGeometry(hkGeometry &,hkArray<hkxMaterial *,hkContainerHeapAllocator> *)const
// int hkxMesh::appendGeometry(int a1, uint32_t *a2, hkMemoryAllocator *a3);
// [0x1878990] (349 bytes) hkxMesh::removeUserChannel(int)
// signed int hkxMesh::removeUserChannel(hkxMesh *this, int a2);
// [0x1878af0] (9 bytes) hkxVertexDescription::hkxVertexDescription(hkFinishLoadedObjectFlag)
// void hkxVertexDescription::hkxVertexDescription();
// [0x1878b00] (250 bytes) hkxVertexDescription::operator==(hkxVertexDescription const&)const
// int hkxVertexDescription::operator==(hkxVertexDescription *this, const hkxVertexDescription *a2);
// [0x1878c00] (530 bytes) hkxNode::~hkxNode()
// void hkxNode::~hkxNode(hkxNode *this);
// [0x1878e20] (93 bytes) hkxNode::~hkxNode()
// void hkxNode::~hkxNode(hkxNode *this);
// [0x1878e80] (117 bytes) hkxNode::findChildByName(char const*)const
// int hkxNode::findChildByName(hkxNode *this, char *a2);
// [0x1878f00] (157 bytes) hkxNode::findDescendantByName(char const*)const
// hkxNode *hkxNode::findDescendantByName(hkxNode *this, char *a2);
// [0x1878fa0] (269 bytes) hkxNode::getPathToNode(hkxNode const*,hkArray<hkxNode const*,hkContainerHeapAllocator> &)const
// int *hkxNode::getPathToNode(int *a1, int a2, int a3, hkMemoryAllocator *a4);
// [0x18790b0] (345 bytes) hkxNode::findVariantByObject(hkReferencedObject const*)const
// hkxNode *hkxNode::findVariantByObject(hkxNode *this, const hkReferencedObject *a2, int a3);
// [0x1879210] (235 bytes) hkxNode::replaceAllObjects(hkReferencedObject const*,hkReferencedObject const*)
// int hkxNode::replaceAllObjects(hkxNode *this, const hkReferencedObject *a2, const hkReferencedObject *a3);
// [0x1879300] (67 bytes) hkxNode::getNumDescendants(void)const
// int hkxNode::getNumDescendants(hkxNode *this);
// [0x1879390] (29 bytes) hkxLight::~hkxLight()
// void hkxLight::~hkxLight(hkxLight *this);
// [0x18793b0] (96 bytes) hkxLight::~hkxLight()
// void hkxLight::~hkxLight(hkxLight *this);
// [0x1879410] (22 bytes) hkxLight::staticClass(void)
// void *hkxLight::staticClass();
// [0x1879510] (660 bytes) hkxAttributeGroup::operator=(hkxAttributeGroup const&)
// hkxAttributeGroup *hkxAttributeGroup::operator=(hkxAttributeGroup *this, const hkxAttributeGroup *a2);
// [0x18797b0] (102 bytes) hkxAttributeGroup::findAttributeIndexByName(char const*)const
// int hkxAttributeGroup::findAttributeIndexByName(hkxAttributeGroup *this, char *a2);
// [0x1879820] (170 bytes) hkxAttributeGroup::findAttributeVariantByName(char const*)const
// hkxAttributeGroup *hkxAttributeGroup::findAttributeVariantByName( hkxAttributeGroup *this, hkxAttributeGroup *a2, char *a3);
// [0x18798d0] (214 bytes) hkxAttributeGroup::findAttributeObjectByName(char const*,hkClass const*)const
// int hkxAttributeGroup::findAttributeObjectByName(hkxAttributeGroup *this, char *a2, const hkClass *a3);
// [0x18799b0] (52 bytes) hkxAttributeGroup::findBoolAttributeByName(char const*)const
// int hkxAttributeGroup::findBoolAttributeByName(hkxAttributeGroup *this, char *a2);
// [0x18799f0] (52 bytes) hkxAttributeGroup::findIntAttributeByName(char const*)const
// int hkxAttributeGroup::findIntAttributeByName(hkxAttributeGroup *this, char *a2);
// [0x1879a30] (52 bytes) hkxAttributeGroup::findEnumAttributeByName(char const*)const
// int hkxAttributeGroup::findEnumAttributeByName(hkxAttributeGroup *this, char *a2);
// [0x1879a70] (52 bytes) hkxAttributeGroup::findStringAttributeByName(char const*)const
// int hkxAttributeGroup::findStringAttributeByName(hkxAttributeGroup *this, char *a2);
// [0x1879ab0] (52 bytes) hkxAttributeGroup::findFloatAttributeByName(char const*)const
// int hkxAttributeGroup::findFloatAttributeByName(hkxAttributeGroup *this, char *a2);
// [0x1879af0] (52 bytes) hkxAttributeGroup::findVectorAttributeByName(char const*)const
// int hkxAttributeGroup::findVectorAttributeByName(hkxAttributeGroup *this, char *a2);
// [0x1879b30] (52 bytes) hkxAttributeGroup::findQuaternionAttributeByName(char const*)const
// int hkxAttributeGroup::findQuaternionAttributeByName(hkxAttributeGroup *this, char *a2);
// [0x1879b70] (52 bytes) hkxAttributeGroup::findMatrixAttributeByName(char const*)const
// int hkxAttributeGroup::findMatrixAttributeByName(hkxAttributeGroup *this, char *a2);
// [0x1879bb0] (334 bytes) hkxAttributeGroup::getBoolValue(char const*,bool,hkBool &)const
// uint32_t *hkxAttributeGroup::getBoolValue( uint32_t *a1, hkxAttributeGroup *a2, hkString *a3, char a4, bool *a5);
// [0x1879d00] (386 bytes) hkxAttributeGroup::getIntValue(char const*,bool,int &)const
// hkxAttributeGroup *hkxAttributeGroup::getIntValue( hkxAttributeGroup *this, hkxAttributeGroup *a2, hkString *a3, int *a4, uint32_t *a5);
// [0x1879e90] (74 bytes) hkxAttributeGroup::getIntValue(char const*,bool,unsigned int &)const
// hkxAttributeGroup *hkxAttributeGroup::getIntValue( hkxAttributeGroup *this, char *a2, hkString *a3, unsigned int *a4, uint32_t *a5);
// [0x1879ee0] (351 bytes) hkxAttributeGroup::getStringValue(char const*,bool,char const*&)const
// hkxAttributeGroup *hkxAttributeGroup::getStringValue( hkxAttributeGroup *this, hkxAttributeGroup *a2, char *a3, const char **a4, unsigned int *a5);
// [0x187a040] (311 bytes) hkxAttributeGroup::getFloatValue(char const*,bool,float &)const
// hkxAttributeGroup *hkxAttributeGroup::getFloatValue( hkxAttributeGroup *this, hkxAttributeGroup *a2, char *a3, float *a4, uint32_t *a5);
// [0x187a180] (335 bytes) hkxAttributeGroup::getVectorValue(char const*,bool,hkVector4f &)const
// hkxAttributeGroup *hkxAttributeGroup::getVectorValue( hkxAttributeGroup *this, hkxAttributeGroup *a2, char *a3, hkVector4f *a4, uint32_t *a5);
// [0x187a2d0] (335 bytes) hkxAttributeGroup::getQuaternionValue(char const*,bool,hkQuaternionf &)const
// hkxAttributeGroup *hkxAttributeGroup::getQuaternionValue( hkxAttributeGroup *this, hkxAttributeGroup *a2, char *a3, hkQuaternionf *a4, uint32_t *a5);
// [0x187a420] (311 bytes) hkxAttributeGroup::getMatrixValue(char const*,bool,hkMatrix4f &)const
// hkxAttributeGroup *hkxAttributeGroup::getMatrixValue( hkxAttributeGroup *this, hkxAttributeGroup *a2, char *a3, hkMatrix4f *a4, hkMatrix4f *a5);
// [0x187a5d0] (595 bytes) hkxVertexAnimation::~hkxVertexAnimation()
// void hkxVertexAnimation::~hkxVertexAnimation(hkxVertexAnimation *this);
// [0x187a830] (650 bytes) hkxVertexAnimation::~hkxVertexAnimation()
// void hkxVertexAnimation::~hkxVertexAnimation(hkxVertexAnimation *this);
// [0x187aac0] (22 bytes) hkxVertexAnimation::UsageMap::staticClass(void)
// void *hkxVertexAnimation::UsageMap::staticClass();
