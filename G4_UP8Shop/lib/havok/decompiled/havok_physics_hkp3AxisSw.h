#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkp3AxisSw.h
// Library: havok | Module: havok_physics_hkp3AxisSw
// Binary Address Span: 0x16a71c0 .. 0x16b3550 (53 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x16a71c0] (73 bytes) hkp3AxisSweep::getOffsetLowHigh32bit(hkVector4f &,hkVector4f &)const
// int hkp3AxisSweep::getOffsetLowHigh32bit(hkp3AxisSweep *this, hkVector4f *a2, hkVector4f *a3);
// [0x16a7210] (9 bytes) hkp3AxisSweep::getType(void)const
// int hkp3AxisSweep::getType();
// [0x16a7220] (290 bytes) hkp3AxisSweep::set32BitOffsetAndScale(hkVector4f const&,hkVector4f const&,hkVector4f const&)
// float *hkp3AxisSweep::set32BitOffsetAndScale( hkp3AxisSweep *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x16a7350] (99 bytes) hkp3AxisSweep::areAabbsOverlapping(hkpBroadPhaseHandle const*,hkpBroadPhaseHandle const*)const
// bool hkp3AxisSweep::areAabbsOverlapping( hkp3AxisSweep *this, const hkpBroadPhaseHandle *a2, const hkpBroadPhaseHandle *a3);
// [0x16a73c0] (16 bytes) hkp3AxisSweep::getNumObjects(void)const
// int hkp3AxisSweep::getNumObjects(hkp3AxisSweep *this);
// [0x16a73d0] (36 bytes) hkp3AxisSweep::getAabbCacheSize(void)const
// int hkp3AxisSweep::getAabbCacheSize(hkp3AxisSweep *this);
// [0x16a7400] (9 bytes) hkp3AxisSweep::checkDeterminism(void)
// void hkp3AxisSweep::checkDeterminism();
// [0x16a7410] (353 bytes) hkp3AxisSweep::~hkp3AxisSweep()
// void hkp3AxisSweep::~hkp3AxisSweep(hkp3AxisSweep *this);
// [0x16a7580] (93 bytes) hkp3AxisSweep::~hkp3AxisSweep()
// void hkp3AxisSweep::~hkp3AxisSweep(hkp3AxisSweep *this);
// [0x16a75e0] (1995 bytes) hkp3AxisSweep::addObject(hkpBroadPhaseHandle *,hkAabb const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,bool)
// int hkp3AxisSweep::addObject(float *a1, int a2, unsigned int *a3, int a4, int a5);
// [0x16a7db0] (507 bytes) hkp3AxisSweep::getExtents(hkVector4f &,hkVector4f &)const
// hkVector4f *hkp3AxisSweep::getExtents(hkp3AxisSweep *this, hkVector4f *a2, hkVector4f *a3);
// [0x16a7fb0] (1037 bytes) hkp3AxisSweep::shiftBroadPhase(hkVector4f const&,hkVector4f&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// float *hkp3AxisSweep::shiftBroadPhase(int a1, __m128 *a2, float *a3, int a4);
// [0x16a83c0] (5931 bytes) hkp3AxisSweep::castRay(hkpBroadPhase::hkpCastRayInput const&,hkpBroadPhaseCastCollector *,int)const
// hkLifoAllocator *hkp3AxisSweep::castRay(int a1, float *a2, int a3, int a4);
// [0x16a9af0] (7040 bytes) hkp3AxisSweep::castAabb(hkpBroadPhase::hkpCastAabbInput const&,hkpBroadPhaseCastCollector &)const
// int hkp3AxisSweep::castAabb(int a1, int a2, int a3);
// [0x16ab670] (111 bytes) hkp3AxisSweep::beginOverlap(hkp3AxisSweep::hkpBpNode &,hkp3AxisSweep::hkpBpNode &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// uint32_t *hkp3AxisSweep::beginOverlap(int a1, int a2, hkMemoryAllocator *a3);
// [0x16ab6e0] (111 bytes) hkp3AxisSweep::endOverlap(hkp3AxisSweep::hkpBpNode &,hkp3AxisSweep::hkpBpNode &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// uint32_t *hkp3AxisSweep::endOverlap(int a1, int a2, hkMemoryAllocator *a3);
// [0x16ab750] (215 bytes) hkp3AxisSweep::beginOverlapCheckMarker(hkp3AxisSweep::hkpBpMarker *,hkp3AxisSweep::hkpBpNode &,int,hkp3AxisSweep::hkpBpNode &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// uint32_t *hkp3AxisSweep::beginOverlapCheckMarker(int a1, int a2, int16_t a3, int a4, hkMemoryAllocator *a5);
// [0x16ab830] (237 bytes) hkp3AxisSweep::endOverlapCheckMarker(hkp3AxisSweep::hkpBpMarker *,hkp3AxisSweep::hkpBpNode &,int,hkp3AxisSweep::hkpBpNode &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkp3AxisSweep::endOverlapCheckMarker(int a1, int a2, int16_t a3, int a4, int *a5);
// [0x16ab920] (877 bytes) hkp3AxisSweep::_fixDeterministicOrderAfterNodeIdWasDecreased(int)
// uint16_t *hkp3AxisSweep::_fixDeterministicOrderAfterNodeIdWasDecreased( hkp3AxisSweep *this, unsigned int a2);
// [0x16abc90] (3784 bytes) hkp3AxisSweep::updateAabb(hkpBroadPhaseHandle *,hkAabbUint32 const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkp3AxisSweep::updateAabb(uint32_t *a1, unsigned int *a2, unsigned int *a3, hkMemoryAllocator *a4, int *a5);
// [0x16acb60] (640 bytes) hkp3AxisSweep::updateAabbs(hkpBroadPhaseHandle **,hkAabb const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// unsigned int **hkp3AxisSweep::updateAabbs( int a1, unsigned int **a2, unsigned int *a3, int a4, hkMemoryAllocator *a5, int *a6);
// [0x16acde0] (288 bytes) hkp3AxisSweep::updateAabbsUint32(hkpBroadPhaseHandle **,hkAabbUint32 const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// unsigned int **hkp3AxisSweep::updateAabbsUint32( uint32_t *a1, unsigned int **a2, uint32_t *a3, int a4, hkMemoryAllocator *a5, int *a6);
// [0x16acf00] (945 bytes) hkp3AxisSweep::shiftAllObjects(hkVector4f const&,hkVector4f&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkp3AxisSweep::shiftAllObjects(int a1, int a2, int a3, hkMemoryAllocator *a4);
// [0x16ad2c0] (1760 bytes) hkp3AxisSweep::hkp3AxisSweep(hkVector4f const&,hkVector4f const&,int)
// void hkp3AxisSweep::hkp3AxisSweep(hkp3AxisSweep *this, const hkVector4f *a2, const hkVector4f *a3, int a4);
// [0x16ada10] (374 bytes) hkp3AxisSweep::hkpBpAxis::insert(hkp3AxisSweep::hkpBpNode *,int,unsigned short,unsigned short,unsigned short &,unsigned short &)
// uint16_t *hkp3AxisSweep::hkpBpAxis::insert( int *a1, int a2, unsigned int a3, uint16_t a4, uint16_t a5, uint16_t *a6, uint16_t *a7);
// [0x16adb90] (113 bytes) hkp3AxisSweep::hkpBpAxis::remove(int,int)
// unsigned int hkp3AxisSweep::hkpBpAxis::remove(hkp3AxisSweep::hkpBpAxis *this, int a2, int a3);
// [0x16adc10] (335 bytes) hkp3AxisSweep::updateNodesAfterInsert(hkp3AxisSweep::hkpBpNode *,int,hkp3AxisSweep::hkpBpNode&)
// unsigned int hkp3AxisSweep::updateNodesAfterInsert(int a1, unsigned int a2, int a3, uint16_t *a4);
// [0x16add60] (1102 bytes) hkp3AxisSweep::collide1Axis(hkp3AxisSweep::hkpBpNode const*,int,hkp3AxisSweep::hkpBpNode const*,int,hkp3AxisSweep::MarkerHandling,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkp3AxisSweep::collide1Axis(int a1, int a2, int a3, int a4, int a5, int a6, hkMemoryAllocator *a7);
// [0x16ae1b0] (200 bytes) hkp3AxisSweep::collide1Axis(hkp3AxisSweep::hkpBpNode const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// void hkp3AxisSweep::collide1Axis(int a1, int a2, int a3, hkMemoryAllocator *a4);
// [0x16ae280] (3492 bytes) hkp3AxisSweep::removeObjectBatch(hkArrayBase<hkpBroadPhaseHandle *> const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// 0x16ae280 hkp3AxisSweep::removeObjectBatch(hkArrayBase<hkpBroadPhaseHandle *> const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// [0x16af030] (213 bytes) hkp3AxisSweep::updateNodesAfterBatchTailInsert(hkp3AxisSweep::hkpBpNode *,int,int,int *)
// unsigned int hkp3AxisSweep::updateNodesAfterBatchTailInsert( int a1, unsigned int a2, int a3, int16_t a4, uint16_t *a5);
// [0x16af110] (303 bytes) hkp3AxisSweep::updateNodesAfterDelete(hkp3AxisSweep::hkpBpNode *,int,hkp3AxisSweep::hkpBpNode&)
// int hkp3AxisSweep::updateNodesAfterDelete(int a1, int a2, int a3, uint16_t *a4);
// [0x16af240] (632 bytes) hkp3AxisSweep::setBitsBasedOnXInterval(int,int,hkp3AxisSweep::hkpBpNode const&,unsigned short,unsigned int *)const
// unsigned int hkp3AxisSweep::setBitsBasedOnXInterval(uint32_t *a1, int a2, int a3, int a4, int16_t a5, int a6);
// [0x16af4c0] (533 bytes) hkp3AxisSweep::reQuerySingleObject(hkpBroadPhaseHandle const*,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// uint32_t *hkp3AxisSweep::reQuerySingleObject(uint32_t *a1, uint32_t *a2, hkMemoryAllocator *a3);
// [0x16af6e0] (426 bytes) hkp3AxisSweep::querySingleAabbAddObject(hkpBroadPhaseHandle *,int,unsigned int const*,hkp3AxisSweep::hkpBpNode &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// int hkp3AxisSweep::querySingleAabbAddObject( uint32_t *a1, int a2, int16_t a3, unsigned int *a4, uint32_t *a5, hkMemoryAllocator *a6);
// [0x16af890] (1064 bytes) hkp3AxisSweep::addObject(hkpBroadPhaseHandle *,hkAabbUint32 const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,bool)
// int hkp3AxisSweep::addObject(int *a1, unsigned int *a2, uint32_t *a3, hkMemoryAllocator *a4, char a5);
// [0x16afcc0] (493 bytes) hkp3AxisSweep::querySingleAabbRemoveObject(hkpBroadPhaseHandle *,int,unsigned int const*,hkp3AxisSweep::hkpBpNode &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// unsigned int hkp3AxisSweep::querySingleAabbRemoveObject( uint32_t *a1, int a2, int16_t a3, unsigned int *a4, uint32_t *a5, hkMemoryAllocator *a6);
// [0x16afeb0] (1118 bytes) hkp3AxisSweep::removeObject(hkpBroadPhaseHandle *,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// 0x16afeb0 hkp3AxisSweep::removeObject(hkpBroadPhaseHandle *,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// [0x16b0310] (9 bytes) hkp3AxisSweep::checkConsistency(void)
// void hkp3AxisSweep::checkConsistency();
// [0x16b0320] (75 bytes) hkp3AxisSweep::hkpBpAxis::find(hkp3AxisSweep::hkpBpEndPoint const*,hkp3AxisSweep::hkpBpEndPoint const*,unsigned short)const
// char *hkp3AxisSweep::hkpBpAxis::find(int a1, char *a2, char *a3, uint16_t a4);
// [0x16b0370] (1084 bytes) hkp3AxisSweep::querySingleAabbSub(hkpBroadPhaseHandle *,unsigned int const*,hkp3AxisSweep::hkpBpNode &,hkp3AxisSweep::hkpBpQuerySingleType,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> *,hkArrayBase<hkp3AxisSweep::hkpBpNode const*> *,hkpBroadPhaseCastCollector *)const
// int hkp3AxisSweep::querySingleAabbSub( int a1, int a2, unsigned int *a3, uint32_t *a4, int a5, hkMemoryAllocator *a6, uint32_t *a7, int a8);
// [0x16b07b0] (1539 bytes) hkp3AxisSweep::_querySingleAabb(hkAabb const&,hkp3AxisSweep::hkpBpQuerySingleType,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> *,hkArrayBase<hkp3AxisSweep::hkpBpNode const*> *,hkpBroadPhaseCastCollector *)const
// int hkp3AxisSweep::_querySingleAabb( int a1, unsigned int *a2, int a3, hkMemoryAllocator *a4, uint32_t *a5, int a6);
// [0x16b0dc0] (74 bytes) hkp3AxisSweep::querySingleAabb(hkAabb const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// int hkp3AxisSweep::querySingleAabb(int a1, unsigned int *a2, hkMemoryAllocator *a3);
// [0x16b0e10] (74 bytes) hkp3AxisSweep::querySingleAabbWithCollector(hkAabb const&,hkpBroadPhaseCastCollector *)const
// int hkp3AxisSweep::querySingleAabbWithCollector(int a1, unsigned int *a2, int a3);
// [0x16b0e60] (661 bytes) hkp3AxisSweep::getAabbFromNode(hkp3AxisSweep::hkpBpNode const&,hkAabb &)const
// float *hkp3AxisSweep::getAabbFromNode(int a1, uint16_t *a2, float *a3);
// [0x16b1100] (61 bytes) hkp3AxisSweep::getAabb(hkpBroadPhaseHandle const*,hkAabb &)const
// float *hkp3AxisSweep::getAabb(hkp3AxisSweep *this, const hkpBroadPhaseHandle *a2, hkAabb *a3);
// [0x16b1140] (212 bytes) hkp3AxisSweep::getAllAabbs(hkArray<hkAabb,hkContainerHeapAllocator> &)const
// float *hkp3AxisSweep::getAllAabbs(uint32_t *a1, int *a2);
// [0x16b1220] (12 bytes) hkp3AxisSweep::getOriginalAabb(void)const
// char *hkp3AxisSweep::getOriginalAabb(hkp3AxisSweep *this);
// [0x16b16e0] (4185 bytes) hkp3AxisSweep::addObjectBatch(hkArrayBase<hkpBroadPhaseHandle *> const&,hkArrayBase<hkAabb> const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkp3AxisSweep::addObjectBatch(int a1, uint32_t *a2, uint32_t *a3, hkMemoryAllocator *a4);
// [0x16b2740] (508 bytes) hkp3AxisSweep::calcAabbCacheInternal(hkArrayBase<hkp3AxisSweep::hkpBpNode const*> const&,char *)const
// uint16_t *hkp3AxisSweep::calcAabbCacheInternal(uint32_t *a1, int a2, int a3);
// [0x16b2940] (481 bytes) hkp3AxisSweep::calcAabbCache(hkArrayBase<hkpCollidable *> const&,char *)const
// int hkp3AxisSweep::calcAabbCache(uint32_t *a1, uint32_t *a2, int a3);
// [0x16b2b30] (244 bytes) hkp3AxisSweep::calcAabbCache(hkAabb const&,char *)const
// int hkp3AxisSweep::calcAabbCache(hkp3AxisSweep *this, const hkAabb *a2, char *a3);
// [0x16b3550] (990 bytes) hkp3AxisSweep::defragment(void)
// uint16_t *hkp3AxisSweep::defragment(hkp3AxisSweep *this);
