#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpTreeBro.h
// Library: havok | Module: havok_physics_hkpTreeBro
// Binary Address Span: 0x17ce8e0 .. 0x180ba30 (111 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x17ce8e0] (33 bytes) hkpTreeBroadPhase::getAabbCacheSize(void)const
// int hkpTreeBroadPhase::getAabbCacheSize(hkpTreeBroadPhase *this);
// [0x17ce910] (47 bytes) hkpTreeBroadPhase::calcAabbCache(hkAabb const&,char *)const
// int hkpTreeBroadPhase::calcAabbCache(hkpTreeBroadPhase *this, const hkAabb *a2, char *a3);
// [0x17ce940] (47 bytes) hkpTreeBroadPhase::calcAabbCache(hkArrayBase<hkpCollidable *> const&,char *)const
// int hkpTreeBroadPhase::calcAabbCache(int a1, int a2, int a3);
// [0x17ce970] (12 bytes) hkpTreeBroadPhase::getType(void)const
// int hkpTreeBroadPhase::getType();
// [0x17ce9b0] (601 bytes) hkpTreeBroadPhase::set32BitOffsetAndScale(hkVector4f const&,hkVector4f const&,hkVector4f const&)
// int hkpTreeBroadPhase::set32BitOffsetAndScale( hkpTreeBroadPhase *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x17cec10] (52 bytes) hkpTreeBroadPhase::getCapabilityDelegate(hkpBroadPhase::Capabilities)const
// int hkpTreeBroadPhase::getCapabilityDelegate(int a1, int a2);
// [0x17cec50] (58 bytes) hkpTreeBroadPhase::getNumObjects(void)const
// int hkpTreeBroadPhase::getNumObjects(hkpTreeBroadPhase *this);
// [0x17cec90] (132 bytes) hkpTreeBroadPhase::getOffsetLowHigh32bit(hkVector4f &,hkVector4f &)const
// int hkpTreeBroadPhase::getOffsetLowHigh32bit(hkpTreeBroadPhase *this, hkVector4f *a2, hkVector4f *a3);
// [0x17ced20] (192 bytes) hkpTreeBroadPhase::getAabb(hkpBroadPhaseHandle const*,hkAabb &)const
// int hkpTreeBroadPhase::getAabb(hkpTreeBroadPhase *this, const hkpBroadPhaseHandle *a2, hkAabb *a3);
// [0x17cef70] (285 bytes) hkpTreeBroadPhase::~hkpTreeBroadPhase()
// void hkpTreeBroadPhase::~hkpTreeBroadPhase(hkpTreeBroadPhase *this);
// [0x17cf090] (93 bytes) hkpTreeBroadPhase::~hkpTreeBroadPhase()
// void hkpTreeBroadPhase::~hkpTreeBroadPhase(hkpTreeBroadPhase *this);
// [0x17cf4c0] (698 bytes) hkpTreeBroadPhase::getAllAabbs(hkArray<hkAabb,hkContainerHeapAllocator> &)const
// unsigned int hkpTreeBroadPhase::getAllAabbs(int a1, hkMemoryAllocator *a2);
// [0x17cf780] (585 bytes) hkpTreeBroadPhase::getExtents(hkVector4f &,hkVector4f &)const
// hkVector4f *hkpTreeBroadPhase::getExtents(hkpTreeBroadPhase *this, hkVector4f *a2, hkVector4f *a3);
// [0x17cfa90] (161 bytes) hkpTreeBroadPhase::areAabbsOverlapping(hkpBroadPhaseHandle const*,hkpBroadPhaseHandle const*)const
// char hkpTreeBroadPhase::areAabbsOverlapping( hkpTreeBroadPhase *this, const hkpBroadPhaseHandle *a2, const hkpBroadPhaseHandle *a3, int a4, int a5, int a6, int a7, ...);
// [0x17d00b0] (429 bytes) hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::NodeContext const&)
// int hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf(int a1, int a2);
// [0x17d0260] (82 bytes) hkpTreeBroadPhase::getMemoryFootPrint(void)const
// int hkpTreeBroadPhase::getMemoryFootPrint(hkpTreeBroadPhase *this);
// [0x17d02c0] (475 bytes) hkpTreeBroadPhase::updateHandlesMapping(void)
// int hkpTreeBroadPhase::updateHandlesMapping(hkpTreeBroadPhase *this);
// [0x17d04a0] (184 bytes) hkpTreeBroadPhase::defragment(void)
// int hkpTreeBroadPhase::defragment(hkpTreeBroadPhase *this);
// [0x17d0560] (132 bytes) hkpTreeBroadPhase::indexAndCompact(int)
// int hkpTreeBroadPhase::indexAndCompact(hkpTreeBroadPhase *this, int a2);
// [0x17d05f0] (21 bytes) hkpTreeBroadPhase::setJitterMargin(float)
// hkpTreeBroadPhase *hkpTreeBroadPhase::setJitterMargin(hkpTreeBroadPhase *this, float a2);
// [0x17d0610] (21 bytes) hkpTreeBroadPhase::setUpdateQuality(float)
// hkpTreeBroadPhase *hkpTreeBroadPhase::setUpdateQuality(hkpTreeBroadPhase *this, float a2);
// [0x17d0630] (21 bytes) hkpTreeBroadPhase::setMotionPredictionFactor(float)
// hkpTreeBroadPhase *hkpTreeBroadPhase::setMotionPredictionFactor(hkpTreeBroadPhase *this, float a2);
// [0x17d0650] (20 bytes) hkpTreeBroadPhase::setCacheQuality(int)
// int hkpTreeBroadPhase::setCacheQuality(hkpTreeBroadPhase *this, int a2);
// [0x17d0670] (771 bytes) hkpTreeBroadPhase::hkpTreeBroadPhase(hkpBroadPhase *)
// void hkpTreeBroadPhase::hkpTreeBroadPhase(hkpTreeBroadPhase *this, hkpBroadPhase *a2);
// [0x17d0fa0] (301 bytes) hkpTreeBroadPhase::removeHandles(hkpBroadPhaseHandle const* const*,int)
// uint32_t *hkpTreeBroadPhase::removeHandles(hkpTreeBroadPhase *this, const hkpBroadPhaseHandle *const *a2, int a3);
// [0x17d10d0] (430 bytes) hkpTreeBroadPhase::removeUserObjects(int,hkpBroadPhaseHandle * const*)
// uint32_t *hkpTreeBroadPhase::removeUserObjects(hkpTreeBroadPhase *this, int a2, hkpBroadPhaseHandle *const *a3);
// [0x17d15a0] (1744 bytes) hkpTreeBroadPhase::addHandles(hkpBroadPhaseHandle const* const*,hkAabb const*,int)
// const hkAabb *hkpTreeBroadPhase::addHandles( hkpTreeBroadPhase *this, const hkpBroadPhaseHandle *const *a2, const hkAabb *a3, int a4);
// [0x17d20f0] (614 bytes) hkpTreeBroadPhase::optimize(float,int)
// int hkpTreeBroadPhase::optimize(hkpTreeBroadPhase *this, float a2, int a3);
// [0x17d2d50] (1357 bytes) hkpTreeBroadPhase::updateUserObjects(int,hkpBroadPhaseHandle const* const*,hkAabb const*,hkVector4f const*)
// const hkVector4f *hkpTreeBroadPhase::updateUserObjects( hkpTreeBroadPhase *this, const hkVector4f *a2, const hkpBroadPhaseHandle *const *a3, const hkAabb *a4, const hkVector4f *a5);
// [0x17d32a0] (845 bytes) hkpTreeBroadPhase::updateHandles(hkpBroadPhaseHandle const* const*,hkAabb const*,int)
// float *hkpTreeBroadPhase::updateHandles( hkpTreeBroadPhase *this, const hkpBroadPhaseHandle *const *a2, const hkAabb *a3, int a4);
// [0x17d35f0] (380 bytes) hkpTreeBroadPhase::shiftAllObjects(hkVector4f const&,hkVector4f&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// uint16_t *hkpTreeBroadPhase::shiftAllObjects(uint32_t *a1, int a2, float *a3, int a4);
// [0x17d3770] (1682 bytes) hkpTreeBroadPhase::addUserObjects(int,hkpBroadPhaseHandle * const*,hkAabb const*)
// const hkAabb *hkpTreeBroadPhase::addUserObjects( hkpTreeBroadPhase *this, int a2, hkpBroadPhaseHandle *const *a3, const hkAabb *a4);
// [0x17d4350] (1018 bytes) hkpTreeBroadPhase::removeHandlesStandalone(hkpBroadPhaseHandle * const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkpTreeBroadPhase::removeHandlesStandalone(int *a1, int a2, int a3, int a4);
// [0x17d4750] (151 bytes) hkpTreeBroadPhase::removeObject(hkpBroadPhaseHandle *,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkpTreeBroadPhase::removeObject(hkpTreeBroadPhase *a1, hkpBroadPhaseHandle *a2, int a3);
// [0x17d47f0] (149 bytes) hkpTreeBroadPhase::removeObjectBatch(hkArrayBase<hkpBroadPhaseHandle *> const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkpTreeBroadPhase::removeObjectBatch(hkpTreeBroadPhase *a1, int *a2, int a3);
// [0x17d5e20] (498 bytes) hkpTreeBroadPhase::querySingleAabb(hkAabb const&,hkpBroadPhaseHandle const*,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// int hkpTreeBroadPhase::querySingleAabb(int a1, uint32_t *a2, int a3, int a4);
// [0x17d6020] (129 bytes) hkpTreeBroadPhase::reQuerySingleObject(hkpBroadPhaseHandle const*,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// int hkpTreeBroadPhase::reQuerySingleObject(uint32_t *a1, int a2, int a3);
// [0x17d60b0] (303 bytes) hkpTreeBroadPhase::querySingleAabbWithCollector(hkAabb const&,hkpBroadPhaseCastCollector *)const
// int hkpTreeBroadPhase::querySingleAabbWithCollector(int a1, uint32_t *a2, int a3);
// [0x17d61e0] (58 bytes) hkpTreeBroadPhase::querySingleAabb(hkAabb const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// int hkpTreeBroadPhase::querySingleAabb(int a1, uint32_t *a2, int a3);
// [0x17d6710] (357 bytes) hkpTreeBroadPhase::compact(void)
// char *hkpTreeBroadPhase::compact(hkpTreeBroadPhase *this);
// [0x17d6e30] (1936 bytes) hkpTreeBroadPhase::updateHandlesStandalone(hkpBroadPhaseHandle * const*,hkAabb const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkpTreeBroadPhase::updateHandlesStandalone(int a1, int a2, __m128 *a3, int a4, int a5, int a6);
// [0x17d75c0] (226 bytes) hkpTreeBroadPhase::updateAabbs(hkpBroadPhaseHandle **,hkAabb const*,hkAabbUint32 const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// float *hkpTreeBroadPhase::updateAabbs( hkpTreeBroadPhase *a1, hkpBroadPhaseHandle **a2, hkAabb *a3, int a4, int a5, int a6, int a7);
// [0x17d76b0] (82 bytes) hkpTreeBroadPhase::updateAabbs(hkpBroadPhaseHandle **,hkAabb const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// float *hkpTreeBroadPhase::updateAabbs( hkpTreeBroadPhase *a1, hkpBroadPhaseHandle **a2, hkAabb *a3, int a4, int a5, int a6);
// [0x17d7710] (614 bytes) hkpTreeBroadPhase::updateAabbsUint32(hkpBroadPhaseHandle **,hkAabbUint32 const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// hkLifoAllocator *hkpTreeBroadPhase::updateAabbsUint32( hkpTreeBroadPhase *a1, hkpBroadPhaseHandle **a2, int *a3, int a4, int a5, int a6);
// [0x17d7980] (832 bytes) hkpTreeBroadPhase::castAabb(hkpBroadPhase::hkpCastAabbInput const&,hkpBroadPhaseCastCollector &)const
// void hkpTreeBroadPhase::castAabb(int a1, __m128 *a2, int a3);
// [0x17d8880] (439 bytes) hkpTreeBroadPhase::queryConvex(hkVector4f const*,int,hkArray<hkpBroadPhaseHandle const*,hkContainerHeapAllocator> &,unsigned int)const
// int hkpTreeBroadPhase::queryConvex(int a1, int a2, int a3, int a4, int a5);
// [0x17d92c0] (843 bytes) hkpTreeBroadPhase::queryConvexSorted(hkVector4f const&,hkVector4f const*,int,hkArray<hkpBroadPhaseHandle const*,hkContainerHeapAllocator> &,unsigned int)const
// int hkpTreeBroadPhase::queryConvexSorted(int a1, int *a2, int a3, int a4, int *a5, int a6);
// [0x17dbc50] (458 bytes) hkpTreeBroadPhase::fullOptimize(void)
// int hkpTreeBroadPhase::fullOptimize(hkpTreeBroadPhase *this);
// [0x17dbe20] (111 bytes) hkpTreeBroadPhase::update(float)
// int hkpTreeBroadPhase::update(hkpTreeBroadPhase *this, float a2);
// [0x17dd070] (2713 bytes) hkpTreeBroadPhase::addHandlesStandalone(hkpBroadPhaseHandle * const*,hkAabb const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// hkArrayUtil *hkpTreeBroadPhase::addHandlesStandalone( int *a1, hkpBroadPhaseHandle **a2, hkAabb *a3, int a4, int a5);
// [0x17ddb10] (722 bytes) hkpTreeBroadPhase::addObject(hkpBroadPhaseHandle *,hkAabbUint32 const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,bool)
// hkArrayUtil *hkpTreeBroadPhase::addObject( hkpTreeBroadPhase *a1, hkpBroadPhaseHandle *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19);
// [0x17dddf0] (156 bytes) hkpTreeBroadPhase::addObject(hkpBroadPhaseHandle *,hkAabb const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,bool)
// hkArrayUtil *hkpTreeBroadPhase::addObject(hkpTreeBroadPhase *a1, hkpBroadPhaseHandle *a2, hkAabb *a3, int a4);
// [0x17dde90] (149 bytes) hkpTreeBroadPhase::addObjectBatch(hkArrayBase<hkpBroadPhaseHandle *> const&,hkArrayBase<hkAabb> const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// hkArrayUtil *hkpTreeBroadPhase::addObjectBatch(hkpTreeBroadPhase *a1, int a2, hkAabb **a3, int a4);
// [0x17de6b0] (2026 bytes) hkpTreeBroadPhase::castRay(hkpBroadPhase::hkpCastRayInput const&,hkpBroadPhaseCastCollector *,int)const
// void hkpTreeBroadPhase::castRay(int a1, int a2, float a3, int a4);
// [0x17deee0] (151 bytes) hkpTreeBroadPhase::shiftBroadPhase(hkVector4f const&,hkVector4f&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// void hkpTreeBroadPhase::shiftBroadPhase(int a1, int a2, uint32_t *a3);
// [0x17ffba0] (33 bytes) hkpTreeBroadPhase32::getAabbCacheSize(void)const
// int hkpTreeBroadPhase32::getAabbCacheSize(hkpTreeBroadPhase32 *this);
// [0x17ffbd0] (47 bytes) hkpTreeBroadPhase32::calcAabbCache(hkAabb const&,char *)const
// int hkpTreeBroadPhase32::calcAabbCache(hkpTreeBroadPhase32 *this, const hkAabb *a2, char *a3);
// [0x17ffc00] (47 bytes) hkpTreeBroadPhase32::calcAabbCache(hkArrayBase<hkpCollidable *> const&,char *)const
// int hkpTreeBroadPhase32::calcAabbCache(int a1, int a2, int a3);
// [0x17ffc30] (12 bytes) hkpTreeBroadPhase32::getType(void)const
// int hkpTreeBroadPhase32::getType();
// [0x17ffc60] (601 bytes) hkpTreeBroadPhase32::set32BitOffsetAndScale(hkVector4f const&,hkVector4f const&,hkVector4f const&)
// int hkpTreeBroadPhase32::set32BitOffsetAndScale( hkpTreeBroadPhase32 *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x17ffec0] (52 bytes) hkpTreeBroadPhase32::getCapabilityDelegate(hkpBroadPhase::Capabilities)const
// int hkpTreeBroadPhase32::getCapabilityDelegate(int a1, int a2);
// [0x17fff00] (58 bytes) hkpTreeBroadPhase32::getNumObjects(void)const
// int hkpTreeBroadPhase32::getNumObjects(hkpTreeBroadPhase32 *this);
// [0x17fff40] (132 bytes) hkpTreeBroadPhase32::getOffsetLowHigh32bit(hkVector4f &,hkVector4f &)const
// int hkpTreeBroadPhase32::getOffsetLowHigh32bit(hkpTreeBroadPhase32 *this, hkVector4f *a2, hkVector4f *a3);
// [0x17fffd0] (176 bytes) hkpTreeBroadPhase32::getAabb(hkpBroadPhaseHandle const*,hkAabb &)const
// int hkpTreeBroadPhase32::getAabb(hkpTreeBroadPhase32 *this, const hkpBroadPhaseHandle *a2, hkAabb *a3);
// [0x1800200] (301 bytes) hkpTreeBroadPhase32::~hkpTreeBroadPhase32()
// void hkpTreeBroadPhase32::~hkpTreeBroadPhase32(hkpTreeBroadPhase32 *this);
// [0x1800330] (93 bytes) hkpTreeBroadPhase32::~hkpTreeBroadPhase32()
// void hkpTreeBroadPhase32::~hkpTreeBroadPhase32(hkpTreeBroadPhase32 *this);
// [0x1800600] (618 bytes) hkpTreeBroadPhase32::getAllAabbs(hkArray<hkAabb,hkContainerHeapAllocator> &)const
// int hkpTreeBroadPhase32::getAllAabbs(int a1, hkMemoryAllocator *a2);
// [0x1800870] (567 bytes) hkpTreeBroadPhase32::getExtents(hkVector4f &,hkVector4f &)const
// hkVector4f *hkpTreeBroadPhase32::getExtents(hkpTreeBroadPhase32 *this, hkVector4f *a2, hkVector4f *a3);
// [0x1800ab0] (198 bytes) hkpTreeBroadPhase32::areAabbsOverlapping(hkpBroadPhaseHandle const*,hkpBroadPhaseHandle const*)const
// char hkpTreeBroadPhase32::areAabbsOverlapping( hkpTreeBroadPhase32 *this, const hkpBroadPhaseHandle *a2, const hkpBroadPhaseHandle *a3);
// [0x1800b80] (429 bytes) hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::NodeContext const&)
// int hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf(int a1, int a2);
// [0x1800d30] (100 bytes) hkpTreeBroadPhase32::getMemoryFootPrint(void)const
// int hkpTreeBroadPhase32::getMemoryFootPrint(hkpTreeBroadPhase32 *this);
// [0x1800da0] (491 bytes) hkpTreeBroadPhase32::updateHandlesMapping(void)
// int hkpTreeBroadPhase32::updateHandlesMapping(hkpTreeBroadPhase32 *this);
// [0x1800f90] (184 bytes) hkpTreeBroadPhase32::defragment(void)
// int hkpTreeBroadPhase32::defragment(hkpTreeBroadPhase32 *this);
// [0x1801050] (156 bytes) hkpTreeBroadPhase32::indexAndCompact(int)
// int hkpTreeBroadPhase32::indexAndCompact(hkpTreeBroadPhase32 *this, int a2);
// [0x18010f0] (21 bytes) hkpTreeBroadPhase32::setJitterMargin(float)
// hkpTreeBroadPhase32 *hkpTreeBroadPhase32::setJitterMargin(hkpTreeBroadPhase32 *this, float a2);
// [0x1801110] (21 bytes) hkpTreeBroadPhase32::setUpdateQuality(float)
// hkpTreeBroadPhase32 *hkpTreeBroadPhase32::setUpdateQuality(hkpTreeBroadPhase32 *this, float a2);
// [0x1801130] (21 bytes) hkpTreeBroadPhase32::setMotionPredictionFactor(float)
// hkpTreeBroadPhase32 *hkpTreeBroadPhase32::setMotionPredictionFactor(hkpTreeBroadPhase32 *this, float a2);
// [0x1801150] (20 bytes) hkpTreeBroadPhase32::setCacheQuality(int)
// int hkpTreeBroadPhase32::setCacheQuality(hkpTreeBroadPhase32 *this, int a2);
// [0x1801170] (787 bytes) hkpTreeBroadPhase32::hkpTreeBroadPhase32(hkpBroadPhase *)
// void hkpTreeBroadPhase32::hkpTreeBroadPhase32(hkpTreeBroadPhase32 *this, hkpBroadPhase *a2);
// [0x1801490] (79 bytes) hkpTreeBroadPhase32_createTreeBroadPhase(hkpBroadPhase *)
// hkpTreeBroadPhase32 *hkpTreeBroadPhase32_createTreeBroadPhase(hkpBroadPhase *a1);
// [0x1801b50] (285 bytes) hkpTreeBroadPhase32::removeHandles(hkpBroadPhaseHandle const* const*,int)
// int hkpTreeBroadPhase32::removeHandles(hkpTreeBroadPhase32 *this, const hkpBroadPhaseHandle *const *a2, int a3);
// [0x1801c70] (409 bytes) hkpTreeBroadPhase32::removeUserObjects(int,hkpBroadPhaseHandle * const*)
// int hkpTreeBroadPhase32::removeUserObjects(hkpTreeBroadPhase32 *this, int a2, hkpBroadPhaseHandle *const *a3);
// [0x1802320] (506 bytes) hkpTreeBroadPhase32::compact(void)
// int hkpTreeBroadPhase32::compact(hkpTreeBroadPhase32 *this);
// [0x1802520] (566 bytes) hkpTreeBroadPhase32::optimize(float,int)
// uint32_t *hkpTreeBroadPhase32::optimize(hkpTreeBroadPhase32 *this, float a2, int a3);
// [0x1802840] (1486 bytes) hkpTreeBroadPhase32::updateUserObjects(int,hkpBroadPhaseHandle const* const*,hkAabb const*,hkVector4f const*)
// const hkVector4f *hkpTreeBroadPhase32::updateUserObjects( hkpTreeBroadPhase32 *this, const hkVector4f *a2, const hkpBroadPhaseHandle *const *a3, const hkAabb *a4, const hkVector4f *a5);
// [0x1802e10] (865 bytes) hkpTreeBroadPhase32::updateHandles(hkpBroadPhaseHandle const* const*,hkAabb const*,int)
// hkpTreeBroadPhase32 *hkpTreeBroadPhase32::updateHandles( hkpTreeBroadPhase32 *this, const hkpBroadPhaseHandle *const *a2, const hkAabb *a3, int a4);
// [0x1803180] (640 bytes) hkpTreeBroadPhase32::addHandles(hkpBroadPhaseHandle const* const*,hkAabb const*,int)
// int hkpTreeBroadPhase32::addHandles( hkpTreeBroadPhase32 *this, const hkpBroadPhaseHandle *const *a2, const hkAabb *a3, int a4);
// [0x1803400] (520 bytes) hkpTreeBroadPhase32::addUserObjects(int,hkpBroadPhaseHandle * const*,hkAabb const*)
// int hkpTreeBroadPhase32::addUserObjects( hkpTreeBroadPhase32 *this, int a2, hkpBroadPhaseHandle *const *a3, const hkAabb *a4);
// [0x1803610] (529 bytes) hkpTreeBroadPhase32::shiftAllObjects(hkVector4f const&,hkVector4f&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkpTreeBroadPhase32::shiftAllObjects(uint32_t *a1, int a2, float *a3, int a4);
// [0x1803d90] (1014 bytes) hkpTreeBroadPhase32::removeHandlesStandalone(hkpBroadPhaseHandle * const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkpTreeBroadPhase32::removeHandlesStandalone(uint32_t *a1, int a2, int a3, int a4);
// [0x1804190] (151 bytes) hkpTreeBroadPhase32::removeObject(hkpBroadPhaseHandle *,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkpTreeBroadPhase32::removeObject(hkpTreeBroadPhase32 *a1, hkpBroadPhaseHandle *a2, int a3);
// [0x1804230] (149 bytes) hkpTreeBroadPhase32::removeObjectBatch(hkArrayBase<hkpBroadPhaseHandle *> const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkpTreeBroadPhase32::removeObjectBatch(hkpTreeBroadPhase32 *a1, int *a2, int a3);
// [0x18050f0] (2480 bytes) hkpTreeBroadPhase32::updateHandlesStandalone(hkpBroadPhaseHandle * const*,hkAabb const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// int hkpTreeBroadPhase32::updateHandlesStandalone(uint32_t *a1, int a2, __m128 *a3, int a4, int a5, int a6);
// [0x1805aa0] (226 bytes) hkpTreeBroadPhase32::updateAabbs(hkpBroadPhaseHandle **,hkAabb const*,hkAabbUint32 const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// hkpTreeBroadPhase32 *hkpTreeBroadPhase32::updateAabbs( hkpTreeBroadPhase32 *a1, hkpBroadPhaseHandle **a2, hkAabb *a3, int a4, int a5, int a6, int a7);
// [0x1805b90] (82 bytes) hkpTreeBroadPhase32::updateAabbs(hkpBroadPhaseHandle **,hkAabb const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// hkpTreeBroadPhase32 *hkpTreeBroadPhase32::updateAabbs( hkpTreeBroadPhase32 *a1, hkpBroadPhaseHandle **a2, hkAabb *a3, int a4, int a5, int a6);
// [0x1805bf0] (614 bytes) hkpTreeBroadPhase32::updateAabbsUint32(hkpBroadPhaseHandle **,hkAabbUint32 const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// hkLifoAllocator *hkpTreeBroadPhase32::updateAabbsUint32( hkpTreeBroadPhase32 *a1, hkpBroadPhaseHandle **a2, int *a3, int a4, int a5, int a6);
// [0x1806520] (986 bytes) hkpTreeBroadPhase32::castAabb(hkpBroadPhase::hkpCastAabbInput const&,hkpBroadPhaseCastCollector &)const
// int hkpTreeBroadPhase32::castAabb(int a1, __m128 *a2, int a3);
// [0x1806ea0] (506 bytes) hkpTreeBroadPhase32::querySingleAabb(hkAabb const&,hkpBroadPhaseHandle const*,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// int hkpTreeBroadPhase32::querySingleAabb(int a1, float *a2, int a3, int a4);
// [0x18070a0] (129 bytes) hkpTreeBroadPhase32::reQuerySingleObject(hkpBroadPhaseHandle const*,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// int hkpTreeBroadPhase32::reQuerySingleObject(uint32_t *a1, int a2, int a3);
// [0x1807130] (303 bytes) hkpTreeBroadPhase32::querySingleAabbWithCollector(hkAabb const&,hkpBroadPhaseCastCollector *)const
// int hkpTreeBroadPhase32::querySingleAabbWithCollector(int a1, float *a2, int a3);
// [0x1807260] (58 bytes) hkpTreeBroadPhase32::querySingleAabb(hkAabb const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)const
// int hkpTreeBroadPhase32::querySingleAabb(int a1, float *a2, int a3);
// [0x1807e50] (442 bytes) hkpTreeBroadPhase32::queryConvex(hkVector4f const*,int,hkArray<hkpBroadPhaseHandle const*,hkContainerHeapAllocator> &,unsigned int)const
// int hkpTreeBroadPhase32::queryConvex(int a1, int a2, int a3, int a4, int a5);
// [0x1808790] (851 bytes) hkpTreeBroadPhase32::queryConvexSorted(hkVector4f const&,hkVector4f const*,int,hkArray<hkpBroadPhaseHandle const*,hkContainerHeapAllocator> &,unsigned int)const
// int hkpTreeBroadPhase32::queryConvexSorted(int a1, int *a2, int a3, int a4, int *a5, int a6);
// [0x1808af0] (562 bytes) hkpTreeBroadPhase32::fullOptimize(void)
// int hkpTreeBroadPhase32::fullOptimize(hkpTreeBroadPhase32 *this);
// [0x1808d30] (111 bytes) hkpTreeBroadPhase32::update(float)
// uint32_t *hkpTreeBroadPhase32::update(hkpTreeBroadPhase32 *this, float a2);
// [0x18097f0] (2905 bytes) hkpTreeBroadPhase32::addHandlesStandalone(hkpBroadPhaseHandle * const*,hkAabb const*,int,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// hkArrayUtil *hkpTreeBroadPhase32::addHandlesStandalone( int *a1, hkpBroadPhaseHandle **a2, hkAabb *a3, int a4, int a5);
// [0x180a350] (722 bytes) hkpTreeBroadPhase32::addObject(hkpBroadPhaseHandle *,hkAabbUint32 const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,bool)
// hkArrayUtil *hkpTreeBroadPhase32::addObject( hkpTreeBroadPhase32 *a1, hkpBroadPhaseHandle *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19);
// [0x180a630] (156 bytes) hkpTreeBroadPhase32::addObject(hkpBroadPhaseHandle *,hkAabb const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &,bool)
// hkArrayUtil *hkpTreeBroadPhase32::addObject( hkpTreeBroadPhase32 *a1, hkpBroadPhaseHandle *a2, hkAabb *a3, int a4);
// [0x180a6d0] (149 bytes) hkpTreeBroadPhase32::addObjectBatch(hkArrayBase<hkpBroadPhaseHandle *> const&,hkArrayBase<hkAabb> const&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// hkArrayUtil *hkpTreeBroadPhase32::addObjectBatch(hkpTreeBroadPhase32 *a1, int a2, hkAabb **a3, int a4);
// [0x180b200] (2032 bytes) hkpTreeBroadPhase32::castRay(hkpBroadPhase::hkpCastRayInput const&,hkpBroadPhaseCastCollector *,int)const
// void hkpTreeBroadPhase32::castRay(int a1, int a2, float a3, int a4);
// [0x180ba30] (151 bytes) hkpTreeBroadPhase32::shiftBroadPhase(hkVector4f const&,hkVector4f&,hkArray<hkpBroadPhaseHandlePair,hkContainerHeapAllocator> &)
// void hkpTreeBroadPhase32::shiftBroadPhase(int a1, int a2, uint32_t *a3);
