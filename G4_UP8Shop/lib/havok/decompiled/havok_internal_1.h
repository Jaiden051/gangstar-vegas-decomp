#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_internal_1.h
// Library: havok | Module: havok_internal_1
// Binary Address Span: 0x15c53a0 .. 0x1640600 (201 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x15c53a0] (1357 bytes) sub_15C53A0
// int sub_15C53A0(int a1, int a2, uint32_t *a3, int *a4, int *a5, int *a6);
// [0x15c58f0] (2043 bytes) void hkAlgorithm::quickSortRecursive<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkAlgorithm::less<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>>>(hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant> *,int,int,hkAlgorithm::less<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>>)
// int hkAlgorithm::quickSortRecursive<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>,hkAlgorithm::less<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>>>( int a1, int a2, int a3);
// [0x15c6870] (1369 bytes) sub_15C6870
// int sub_15C6870(__m128i *a1, uint32_t *a2);
// [0x15d1e30] (38 bytes) sub_15D1E30
// int32_t sub_15D1E30(int a1);
// [0x15d1f10] (256 bytes) sub_15D1F10
// int sub_15D1F10(int a1, uint32_t *a2);
// [0x15d2010] (281 bytes) sub_15D2010
// int *sub_15D2010(int **a1, int a2);
// [0x15de940] (256 bytes) sub_15DE940
// int sub_15DE940(int a1, uint32_t *a2);
// [0x15dea40] (1397 bytes) sub_15DEA40
// int sub_15DEA40( double *a1, double *a2, double *a3, double *a4, double *a5, double *a6, uint32_t *a7);
// [0x15dff10] (947 bytes) void hkInt128Vector4::setMul<3>(hkSimdInt<128> const&,hkInt64Vector4 const&)
// uint64_t hkInt128Vector4::setMul<3>(int a1, hkSimdInt<128> *a2, int *a3);
// [0x15e4120] (779 bytes) void hkInt128Vector4::subMul<3>(hkSimdInt<128> const&,hkInt64Vector4 const&)
// uint64_t hkInt128Vector4::subMul<3>(int a1, hkSimdInt<128> *a2, int64_t *a3);
// [0x15e7650] (191 bytes) void hkSimdInt<256>::setShiftRight<128>(hkSimdInt<256> const&)
// void hkSimdInt<256>::setShiftRight<128>(hkSimdInt<256> *this, const hkSimdInt<256> *a2);
// [0x15ebc00] (517 bytes) void hkSimdInt<512>::setShiftLeft<256>(hkSimdInt<512> const&)
// void hkSimdInt<512>::setShiftLeft<256>(hkSimdInt<512> *this, const hkSimdInt<512> *a2);
// [0x15ebe10] (896 bytes) void hkSimdInt<512>::setShiftRight<256>(hkSimdInt<512> const&)
// void hkSimdInt<512>::setShiftRight<256>(hkSimdInt<512> *this, const hkSimdInt<512> *a2);
// [0x15ef1c8] (1 bytes) nullsub_623
// void nullsub_623();
// [0x15ef1d8] (1 bytes) nullsub_624
// void nullsub_624();
// [0x15ef1e0] (263 bytes) sub_15EF1E0
// int sub_15EF1E0(uint32_t *a1);
// [0x15ef330] (364 bytes) sub_15EF330
// uint32_t *sub_15EF330();
// [0x15ef4a8] (1 bytes) nullsub_625
// void nullsub_625();
// [0x15ef4b8] (1 bytes) nullsub_626
// void nullsub_626();
// [0x15ef4c8] (1 bytes) nullsub_627
// void nullsub_627();
// [0x15ef4d8] (1 bytes) nullsub_628
// void nullsub_628();
// [0x15ef4e8] (1 bytes) nullsub_629
// void nullsub_629();
// [0x15ef590] (859 bytes) sub_15EF590
// uint32_t *sub_15EF590();
// [0x15ef8f8] (1 bytes) nullsub_630
// void nullsub_630();
// [0x15ef908] (1 bytes) nullsub_631
// void nullsub_631();
// [0x15ef930] (197 bytes) sub_15EF930
// uint32_t *sub_15EF930();
// [0x15efa08] (1 bytes) nullsub_632
// void nullsub_632();
// [0x15efa18] (1 bytes) nullsub_633
// void nullsub_633();
// [0x15efa28] (1 bytes) nullsub_634
// void nullsub_634();
// [0x15efa38] (1 bytes) nullsub_635
// void nullsub_635();
// [0x15efa48] (1 bytes) nullsub_636
// void nullsub_636();
// [0x15efa58] (1 bytes) nullsub_637
// void nullsub_637();
// [0x15efa68] (1 bytes) nullsub_638
// void nullsub_638();
// [0x15efa78] (1 bytes) nullsub_639
// void nullsub_639();
// [0x15efa80] (82 bytes) sub_15EFA80
// int sub_15EFA80(uint32_t *a1);
// [0x15efae0] (87 bytes) sub_15EFAE0
// int sub_15EFAE0(uint32_t *a1);
// [0x15efb40] (89 bytes) sub_15EFB40
// int sub_15EFB40(uint32_t *a1);
// [0x15efba0] (82 bytes) sub_15EFBA0
// int sub_15EFBA0(uint32_t *a1);
// [0x15efc00] (82 bytes) sub_15EFC00
// int sub_15EFC00(uint32_t *a1);
// [0x15efc60] (87 bytes) sub_15EFC60
// int sub_15EFC60(uint32_t *a1);
// [0x15efcc0] (89 bytes) sub_15EFCC0
// int sub_15EFCC0(uint32_t *a1);
// [0x15efd20] (82 bytes) sub_15EFD20
// int sub_15EFD20(uint32_t *a1);
// [0x15efe00] (1392 bytes) sub_15EFE00
// uint32_t *sub_15EFE00();
// [0x15f0378] (1 bytes) nullsub_640
// void nullsub_640();
// [0x15f0388] (1 bytes) nullsub_641
// void nullsub_641();
// [0x15f0398] (1 bytes) nullsub_642
// void nullsub_642();
// [0x15f03a8] (1 bytes) nullsub_643
// void nullsub_643();
// [0x15f03b8] (1 bytes) nullsub_644
// void nullsub_644();
// [0x15f03c8] (1 bytes) nullsub_645
// void nullsub_645();
// [0x15f03d8] (1 bytes) nullsub_646
// void nullsub_646();
// [0x15f03e8] (1 bytes) nullsub_647
// void nullsub_647();
// [0x15f03f8] (1 bytes) nullsub_648
// void nullsub_648();
// [0x15f0408] (1 bytes) nullsub_649
// void nullsub_649();
// [0x15f0418] (1 bytes) nullsub_650
// void nullsub_650();
// [0x15f0428] (1 bytes) nullsub_651
// void nullsub_651();
// [0x15f0438] (1 bytes) nullsub_652
// void nullsub_652();
// [0x15f0448] (1 bytes) nullsub_653
// void nullsub_653();
// [0x15f0458] (1 bytes) nullsub_654
// void nullsub_654();
// [0x15f0520] (1382 bytes) sub_15F0520
// uint32_t *sub_15F0520();
// [0x15f0a98] (1 bytes) nullsub_655
// void nullsub_655();
// [0x15f0aa8] (1 bytes) nullsub_656
// void nullsub_656();
// [0x15f0ab8] (1 bytes) nullsub_657
// void nullsub_657();
// [0x15f0ac8] (1 bytes) nullsub_658
// void nullsub_658();
// [0x15f0ad8] (1 bytes) nullsub_659
// void nullsub_659();
// [0x15f0ae8] (1 bytes) nullsub_660
// void nullsub_660();
// [0x15f0b50] (531 bytes) sub_15F0B50
// uint32_t *sub_15F0B50();
// [0x15f0d78] (1 bytes) nullsub_661
// void nullsub_661();
// [0x15f0d80] (144 bytes) sub_15F0D80
// int sub_15F0D80(uint32_t *a1);
// [0x15f0e30] (195 bytes) sub_15F0E30
// uint32_t *sub_15F0E30();
// [0x15f0f08] (1 bytes) nullsub_662
// void nullsub_662();
// [0x15f0f18] (1 bytes) nullsub_663
// void nullsub_663();
// [0x15f0f20] (20 bytes) sub_15F0F20
// int sub_15F0F20(int (***a1)(uint32_t));
// [0x15f0f40] (45 bytes) sub_15F0F40
// int sub_15F0F40(int a1, int a2);
// [0x15f0fb0] (398 bytes) sub_15F0FB0
// uint32_t *sub_15F0FB0();
// [0x15f1148] (1 bytes) nullsub_664
// void nullsub_664();
// [0x15f1158] (1 bytes) nullsub_665
// void nullsub_665();
// [0x15f1168] (1 bytes) nullsub_666
// void nullsub_666();
// [0x15f1178] (1 bytes) nullsub_667
// void nullsub_667();
// [0x15f1188] (1 bytes) nullsub_668
// void nullsub_668();
// [0x15f1198] (1 bytes) nullsub_669
// void nullsub_669();
// [0x15f11a8] (1 bytes) nullsub_670
// void nullsub_670();
// [0x15f11b8] (1 bytes) nullsub_671
// void nullsub_671();
// [0x15f11c8] (1 bytes) nullsub_672
// void nullsub_672();
// [0x15f11d8] (1 bytes) nullsub_673
// void nullsub_673();
// [0x15f11e8] (1 bytes) nullsub_674
// void nullsub_674();
// [0x15f11f8] (1 bytes) nullsub_675
// void nullsub_675();
// [0x15f1200] (85 bytes) sub_15F1200
// int sub_15F1200(uint32_t *a1);
// [0x15f1260] (85 bytes) sub_15F1260
// int sub_15F1260(uint32_t *a1);
// [0x15f12c0] (82 bytes) sub_15F12C0
// int sub_15F12C0(uint32_t *a1);
// [0x15f1320] (82 bytes) sub_15F1320
// int sub_15F1320(uint32_t *a1);
// [0x15f1380] (82 bytes) sub_15F1380
// int sub_15F1380(uint32_t *a1);
// [0x15f13e0] (85 bytes) sub_15F13E0
// int sub_15F13E0(uint32_t *a1);
// [0x15f1440] (85 bytes) sub_15F1440
// int sub_15F1440(uint32_t *a1);
// [0x15f14a0] (82 bytes) sub_15F14A0
// int sub_15F14A0(uint32_t *a1);
// [0x15f1500] (82 bytes) sub_15F1500
// int sub_15F1500(uint32_t *a1);
// [0x15f1560] (82 bytes) sub_15F1560
// int sub_15F1560(uint32_t *a1);
// [0x15f15c0] (85 bytes) sub_15F15C0
// int sub_15F15C0(uint32_t *a1);
// [0x15f1620] (85 bytes) sub_15F1620
// int sub_15F1620(uint32_t *a1);
// [0x15f1700] (2064 bytes) sub_15F1700
// uint32_t *sub_15F1700();
// [0x15f1f10] (20 bytes) sub_15F1F10
// int sub_15F1F10(int (***a1)(uint32_t));
// [0x15f1f30] (45 bytes) sub_15F1F30
// int sub_15F1F30(int a1, int a2);
// [0x15f1f80] (223 bytes) sub_15F1F80
// uint32_t *sub_15F1F80();
// [0x15f2068] (1 bytes) nullsub_676
// void nullsub_676();
// [0x15f2078] (1 bytes) nullsub_677
// void nullsub_677();
// [0x15f2088] (1 bytes) nullsub_678
// void nullsub_678();
// [0x15f2098] (1 bytes) nullsub_679
// void nullsub_679();
// [0x15f20a8] (1 bytes) nullsub_680
// void nullsub_680();
// [0x15f20b8] (1 bytes) nullsub_681
// void nullsub_681();
// [0x15f20c8] (1 bytes) nullsub_682
// void nullsub_682();
// [0x15f20d8] (1 bytes) nullsub_683
// void nullsub_683();
// [0x15f20e0] (85 bytes) sub_15F20E0
// int sub_15F20E0(uint32_t *a1);
// [0x15f2140] (85 bytes) sub_15F2140
// int sub_15F2140(uint32_t *a1);
// [0x15f21a0] (82 bytes) sub_15F21A0
// int sub_15F21A0(uint32_t *a1);
// [0x15f2200] (82 bytes) sub_15F2200
// int sub_15F2200(uint32_t *a1);
// [0x15f2260] (85 bytes) sub_15F2260
// int sub_15F2260(uint32_t *a1);
// [0x15f22c0] (85 bytes) sub_15F22C0
// int sub_15F22C0(uint32_t *a1);
// [0x15f2320] (82 bytes) sub_15F2320
// int sub_15F2320(uint32_t *a1);
// [0x15f2380] (82 bytes) sub_15F2380
// int sub_15F2380(uint32_t *a1);
// [0x15f2460] (1392 bytes) sub_15F2460
// uint32_t *sub_15F2460();
// [0x15f29d8] (1 bytes) nullsub_684
// void nullsub_684();
// [0x15f29e8] (1 bytes) nullsub_685
// void nullsub_685();
// [0x15f29f8] (1 bytes) nullsub_686
// void nullsub_686();
// [0x15f2a08] (1 bytes) nullsub_687
// void nullsub_687();
// [0x15f2a18] (1 bytes) nullsub_688
// void nullsub_688();
// [0x15f2a28] (1 bytes) nullsub_689
// void nullsub_689();
// [0x15f2a38] (1 bytes) nullsub_690
// void nullsub_690();
// [0x15f2a40] (45 bytes) sub_15F2A40
// int sub_15F2A40(int a1, int a2);
// [0x15f2a70] (374 bytes) sub_15F2A70
// int sub_15F2A70(uint32_t *a1);
// [0x15f2bf0] (82 bytes) sub_15F2BF0
// int sub_15F2BF0(uint32_t *a1);
// [0x15f2d30] (1386 bytes) sub_15F2D30
// uint32_t *sub_15F2D30();
// [0x15f32a8] (1 bytes) nullsub_691
// void nullsub_691();
// [0x15f32b8] (1 bytes) nullsub_692
// void nullsub_692();
// [0x15f32c8] (1 bytes) nullsub_693
// void nullsub_693();
// [0x15f32d8] (1 bytes) nullsub_694
// void nullsub_694();
// [0x15f32e8] (1 bytes) nullsub_695
// void nullsub_695();
// [0x15f32f8] (1 bytes) nullsub_696
// void nullsub_696();
// [0x15f3308] (1 bytes) nullsub_697
// void nullsub_697();
// [0x15f3318] (1 bytes) nullsub_698
// void nullsub_698();
// [0x15f3320] (82 bytes) sub_15F3320
// int sub_15F3320(uint32_t *a1);
// [0x15f3380] (87 bytes) sub_15F3380
// int sub_15F3380(uint32_t *a1);
// [0x15f33e0] (89 bytes) sub_15F33E0
// int sub_15F33E0(uint32_t *a1);
// [0x15f3440] (82 bytes) sub_15F3440
// int sub_15F3440(uint32_t *a1);
// [0x15f34a0] (82 bytes) sub_15F34A0
// int sub_15F34A0(uint32_t *a1);
// [0x15f3500] (87 bytes) sub_15F3500
// int sub_15F3500(uint32_t *a1);
// [0x15f3560] (89 bytes) sub_15F3560
// int sub_15F3560(uint32_t *a1);
// [0x15f35c0] (82 bytes) sub_15F35C0
// int sub_15F35C0(uint32_t *a1);
// [0x15f36a0] (1384 bytes) sub_15F36A0
// uint32_t *sub_15F36A0();
// [0x15f43f0] (566 bytes) sub_15F43F0
// int sub_15F43F0(int a1, int a2, int a3);
// [0x15f86f0] (2525 bytes) void hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>>(hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit> const&,hkcdSimdTree::Node const*,hkcdSimdTree::Node*)
// int hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromICustomRefit>>( uint32_t *a1, int a2, int a3);
// [0x15f9c70] (3437 bytes) void hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>>(hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres> const&,hkcdSimdTree::Node const*,hkcdSimdTree::Node*)
// int hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromSpheres>>( int *a1, int a2, __m128 *a3);
// [0x15fb8a0] (2117 bytes) void hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>(hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16 const&,hkcdSimdTree::Node const*,hkcdSimdTree::Node*)
// int hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>( hkIntSpaceUtil *a1, int a2, __m128 *a3);
// [0x15fc0f0] (2965 bytes) void hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>>(hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs> const&,hkcdSimdTree::Node const*,hkcdSimdTree::Node*)
// int hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs>>( int *a1, int a2, __m128 *a3);
// [0x15fdcc0] (4584 bytes) void hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>>(hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> const&,hkcdSimdTree::Node const*,hkcdSimdTree::Node*)
// void hkcdSimdTreeUtils::Build::IRefit::_refitNode<hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16>>( hkcdSimdTreeUtils::Build::IRefit *this, const hkcdSimdTreeUtils::Build::IRefit::GetClusterAabb<hkcdSimdTreeUtils::Build::GetLeafAabbFromAabbs16> *a2, __m128 *a3);
// [0x1604490] (20 bytes) sub_1604490
// int sub_1604490(int (***a1)(uint32_t));
// [0x16044b0] (45 bytes) sub_16044B0
// int sub_16044B0(int a1, int a2);
// [0x1604500] (223 bytes) sub_1604500
// uint32_t *sub_1604500();
// [0x1605250] (2667 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SphereCastWrapper<WrappedRaycastQuery<hkcdStaticTree::DefaultTreeStorage6>>>(hkcdStaticTree::DefaultTreeStorage6 const&,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SphereCastWrapper<WrappedRaycastQuery<hkcdStaticTree::DefaultTreeStorage6>> &)
// int32_t hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SphereCastWrapper<WrappedRaycastQuery<hkcdStaticTree::DefaultTreeStorage6>>>( unsigned int *a1, int32_t *a2, float *a3);
// [0x1606220] (1768 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<WrappedAabbQuery<hkcdStaticTree::DefaultTreeStorage6>>>(hkcdStaticTree::DefaultTreeStorage6 const&,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<WrappedAabbQuery<hkcdStaticTree::DefaultTreeStorage6>> &)
// uint8_t *hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<WrappedAabbQuery<hkcdStaticTree::DefaultTreeStorage6>>>( int *a1, uint32_t *a2, float *a3);
// [0x1606aa0] (1508 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<WrappedAabbHitsQuery<hkcdStaticTree::DefaultTreeStorage6>>>(hkcdStaticTree::DefaultTreeStorage6 const&,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<WrappedAabbHitsQuery<hkcdStaticTree::DefaultTreeStorage6>> &)
// float *hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<WrappedAabbHitsQuery<hkcdStaticTree::DefaultTreeStorage6>>>( float *a1, uint32_t *a2, float *a3);
// [0x1607230] (2474 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<WrappedClosestPointQuery<hkcdStaticTree::DefaultTreeStorage6>>>(hkcdStaticTree::DefaultTreeStorage6 const&,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<WrappedClosestPointQuery<hkcdStaticTree::DefaultTreeStorage6>> &)
// int hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<WrappedClosestPointQuery<hkcdStaticTree::DefaultTreeStorage6>>>( int a1, int *a2, float *a3);
// [0x1607dd0] (10708 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdStaticTree::DefaultTreeStorage6,hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdStaticTree::DefaultTreeStorage6,hkcdStaticTree::DefaultTreeStorage6>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<WrappedAllPairsQuery<hkcdStaticTree::DefaultTreeStorage6>>>(bool,hkcdStaticTree::DefaultTreeStorage6 const&,hkcdStaticTree::DefaultTreeStorage6 const&,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdStaticTree::DefaultTreeStorage6,hkcdStaticTree::DefaultTreeStorage6>> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<WrappedAllPairsQuery<hkcdStaticTree::DefaultTreeStorage6>> &,hkcdStaticTree::DefaultTreeStorage6::NodeContext const*,hkcdStaticTree::DefaultTreeStorage6::NodeContext const*)
// float hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdStaticTree::DefaultTreeStorage6,hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdStaticTree::DefaultTreeStorage6,hkcdStaticTree::DefaultTreeStorage6>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<WrappedAllPairsQuery<hkcdStaticTree::DefaultTreeStorage6>>>( float result, char a2, int a3, int a4, hkMemoryAllocator *a5, uint32_t **a6, int a7, int a8);
// [0x160aaa0] (2547 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<WrappedRaycastQuery<hkcdStaticTree::DefaultTreeStorage6>>>(hkcdStaticTree::DefaultTreeStorage6 const&,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<WrappedRaycastQuery<hkcdStaticTree::DefaultTreeStorage6>> &)
// int hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdStaticTree::DefaultTreeStorage6,hkcdTreeQueriesStacks::Dynamic<64,hkcdStaticTree::Tree<hkcdStaticTree::DynamicStorage6>::Slot>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<WrappedRaycastQuery<hkcdStaticTree::DefaultTreeStorage6>>>( int a1, int32_t *a2, float *a3);
// [0x160e610] (1171 bytes) void hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::copyTo<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>>(hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> &)const
// int hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::copyTo<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>>( hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *this, hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32> *a2);
// [0x160ec00] (2032 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SphereCastWrapper<WrappedRaycastQuery<hkcdDynamicTree::DefaultTree48Storage>>>(hkcdDynamicTree::DefaultTree48Storage const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned int> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SphereCastWrapper<WrappedRaycastQuery<hkcdDynamicTree::DefaultTree48Storage>> &)
// hkMemoryAllocator *hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SphereCastWrapper<WrappedRaycastQuery<hkcdDynamicTree::DefaultTree48Storage>>>( int32_t *a1, hkMemoryAllocator *a2, int a3);
// [0x160f950] (1508 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<WrappedAabbQuery<hkcdDynamicTree::DefaultTree48Storage>>>(hkcdDynamicTree::DefaultTree48Storage const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned int> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<WrappedAabbQuery<hkcdDynamicTree::DefaultTree48Storage>> &)
// int hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsWithEarlyExitWrapper<WrappedAabbQuery<hkcdDynamicTree::DefaultTree48Storage>>>( int *a1, hkMemoryAllocator *a2, float *a3);
// [0x16100d0] (825 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<WrappedAabbHitsQuery<hkcdDynamicTree::DefaultTree48Storage>>>(hkcdDynamicTree::DefaultTree48Storage const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned int> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<WrappedAabbHitsQuery<hkcdDynamicTree::DefaultTree48Storage>> &)
// int hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<WrappedAabbHitsQuery<hkcdDynamicTree::DefaultTree48Storage>>>( uint32_t *a1, uint32_t *a2, float *a3);
// [0x16105d0] (1818 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<WrappedClosestPointQuery<hkcdDynamicTree::DefaultTree48Storage>>>(hkcdDynamicTree::DefaultTree48Storage const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned int> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<WrappedClosestPointQuery<hkcdDynamicTree::DefaultTree48Storage>> &)
// int hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ClosestFromPointWrapper<WrappedClosestPointQuery<hkcdDynamicTree::DefaultTree48Storage>>>( int *a1, int *a2, float *a3);
// [0x16110b0] (3770 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdDynamicTree::DefaultTree48Storage,hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::DefaultTree48Storage,hkcdDynamicTree::DefaultTree48Storage>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<WrappedAllPairsQuery<hkcdDynamicTree::DefaultTree48Storage>>>(bool,hkcdDynamicTree::DefaultTree48Storage const&,hkcdDynamicTree::DefaultTree48Storage const&,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::DefaultTree48Storage,hkcdDynamicTree::DefaultTree48Storage>> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<WrappedAllPairsQuery<hkcdDynamicTree::DefaultTree48Storage>> &,hkcdDynamicTree::DefaultTree48Storage::NodeContext const*,hkcdDynamicTree::DefaultTree48Storage::NodeContext const*)
// float hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdDynamicTree::DefaultTree48Storage,hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::DefaultTree48Storage,hkcdDynamicTree::DefaultTree48Storage>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<WrappedAllPairsQuery<hkcdDynamicTree::DefaultTree48Storage>>>( float result, char a2, int *a3, uint32_t *a4, hkMemoryAllocator *a5, uint32_t **a6, int a7, int a8);
// [0x16161e0] (1784 bytes) void hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<WrappedRaycastQuery<hkcdDynamicTree::DefaultTree48Storage>>>(hkcdDynamicTree::DefaultTree48Storage const&,hkcdTreeQueriesStacks::Dynamic<64,unsigned int> &,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<WrappedRaycastQuery<hkcdDynamicTree::DefaultTree48Storage>> &)
// int hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkcdDynamicTree::DefaultTree48Storage,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<WrappedRaycastQuery<hkcdDynamicTree::DefaultTree48Storage>>>( int *a1, hkMemoryAllocator *a2, float *a3);
// [0x1617480] (856 bytes) bool hkcdStaticTree::Filtering<1>::computeFilter<hkcdStaticMeshTreeBase>(hkcdStaticMeshTreeBase const&,hkcdStaticMeshTreeBase::NodeContext const&,unsigned int *)
// int hkcdStaticTree::Filtering<1>::computeFilter<hkcdStaticMeshTreeBase>(uint32_t *a1, int a2, int a3);
// [0x16177e0] (132 bytes) bool hkcdStaticTree::Filtering<1>::computeFilter<hkcdStaticMeshTreeBase>(hkcdStaticMeshTreeBase const&,unsigned int *)
// int hkcdStaticTree::Filtering<1>::computeFilter<hkcdStaticMeshTreeBase>( hkcdStaticTree::Filtering<1> *this, const hkcdStaticMeshTreeBase *a2);
// [0x1617aa0] (26 bytes) sub_1617AA0
// uint32_t *sub_1617AA0();
// [0x1617d80] (48 bytes) sub_1617D80
// uint32_t *sub_1617D80();
// [0x1619640] (63 bytes) hashTriangle(hkGeometry::Triangle const&)
// int hashTriangle(const hkGeometry::Triangle *a1);
// [0x1620e90] (466 bytes) void hkAlgorithm::quickSortRecursive<triInfo,sortByKey>(triInfo *,int,int,sortByKey)
// int hkAlgorithm::quickSortRecursive<triInfo,sortByKey>(int a1, int a2, int a3);
// [0x1621070] (337 bytes) void hkAlgorithm::quickSortRecursive<triInfo,sortByIndex>(triInfo *,int,int,sortByIndex)
// int hkAlgorithm::quickSortRecursive<triInfo,sortByIndex>(int a1, int a2, int a3);
// [0x16216d0] (2235 bytes) void hkAlgorithm::quickSortRecursive<weldVerticesVirtualNs::VertexRef,hkAlgorithm::less<weldVerticesVirtualNs::VertexRef>>(weldVerticesVirtualNs::VertexRef *,int,int,hkAlgorithm::less<weldVerticesVirtualNs::VertexRef>)
// int hkAlgorithm::quickSortRecursive<weldVerticesVirtualNs::VertexRef,hkAlgorithm::less<weldVerticesVirtualNs::VertexRef>>( int a1, int a2, int a3);
// [0x1623530] (142 bytes) sub_1623530
// float sub_1623530(__m128i a1);
// [0x16235c0] (127 bytes) sub_16235C0
// int sub_16235C0(hkMemoryAllocator *a1);
// [0x1623640] (103 bytes) sub_1623640
// hkMemoryAllocator *sub_1623640(hkMemoryAllocator *result, uint32_t *a2);
// [0x16236b0] (119 bytes) sub_16236B0
// hkMemoryAllocator *sub_16236B0(hkMemoryAllocator *result, uint32_t *a2);
// [0x1623730] (109 bytes) sub_1623730
// hkArrayUtil *sub_1623730(hkArrayUtil *result, int *a2, int a3);
// [0x16237a0] (178 bytes) sub_16237A0
// int sub_16237A0(uint32_t *a1);
// [0x1623c00] (452 bytes) sub_1623C00
// int sub_1623C00(int result);
// [0x1629570] (254 bytes) unsigned int hkVector4f::normalizeIfNotZero<3,(hkMathAccuracyMode)1,(hkMathNegSqrtMode)1>(void)
// unsigned int hkVector4f::normalizeIfNotZero<3,(hkMathAccuracyMode)1,(hkMathNegSqrtMode)1>(hkVector4f *this);
// [0x162a9e0] (128 bytes) void hkMxVectorf_Implementation::reduceAddH<3>(hkVector4f const*,hkVector4f&)
// void hkMxVectorf_Implementation::reduceAddH<3>(hkMxVectorf_Implementation *this, const hkVector4f *a2);
// [0x162aad0] (275 bytes) void hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::Triangle *,hkgpConvexHullImpl::Triangle::SortByPlaneId>(hkgpConvexHullImpl::Triangle * *,int,int,hkgpConvexHullImpl::Triangle::SortByPlaneId)
// int hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::Triangle *,hkgpConvexHullImpl::Triangle::SortByPlaneId>( int a1, int a2, int a3);
// [0x162abf0] (337 bytes) void hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::SortedEdge,hkAlgorithm::less<hkgpConvexHullImpl::SortedEdge>>(hkgpConvexHullImpl::SortedEdge *,int,int,hkAlgorithm::less<hkgpConvexHullImpl::SortedEdge>)
// int *hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::SortedEdge,hkAlgorithm::less<hkgpConvexHullImpl::SortedEdge>>( int a1, int a2, int a3);
// [0x162ae10] (301 bytes) void hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::SortedTriangle,hkAlgorithm::less<hkgpConvexHullImpl::SortedTriangle>>(hkgpConvexHullImpl::SortedTriangle *,int,int,hkAlgorithm::less<hkgpConvexHullImpl::SortedTriangle>)
// float *hkAlgorithm::quickSortRecursive<hkgpConvexHullImpl::SortedTriangle,hkAlgorithm::less<hkgpConvexHullImpl::SortedTriangle>>( int a1, int a2, int a3);
// [0x162af40] (4070 bytes) void hkgpConvexHullImpl::buildIndices<hkgpConvexHullImpl::PositionAsTransform>(void)
// void hkgpConvexHullImpl::buildIndices<hkgpConvexHullImpl::PositionAsTransform>(hkgpConvexHullImpl *this);
// [0x162ca30] (162 bytes) sub_162CA30
// void sub_162CA30(char **a1);
// [0x162d820] (3585 bytes) sub_162D820
// float *sub_162D820( float *a1, int a2, unsigned int a3, int a4, int a5, float *a6, float *a7);
// [0x1630240] (238 bytes) sub_1630240
// float *sub_1630240(int a1, hkgpConvexHull *a2);
// [0x16304d0] (303 bytes) sub_16304D0
// float *sub_16304D0(int a1, hkgpConvexHull *a2, int a3);
// [0x1630600] (305 bytes) sub_1630600
// float *sub_1630600(int a1, hkgpConvexHull *a2, int a3);
// [0x1630740] (303 bytes) sub_1630740
// float *sub_1630740(int a1, hkgpConvexHull *a2, int a3);
// [0x1639bb0] (162 bytes) sub_1639BB0
// void sub_1639BB0(char **a1);
// [0x163ff50] (279 bytes) sub_163FF50
// int sub_163FF50(int *a1, int a2, int a3);
// [0x1640070] (109 bytes) sub_1640070
// hkArrayUtil *sub_1640070(hkArrayUtil *result, int *a2, int a3);
// [0x16400e0] (373 bytes) sub_16400E0
// hkArrayUtil *sub_16400E0(int *a1, int a2, int a3);
// [0x1640600] (341 bytes) sub_1640600
// int *sub_1640600(int *result, unsigned int a2, unsigned int a3);
