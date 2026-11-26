#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_internal_2.h
// Library: openssl | Module: openssl_internal_2
// Binary Address Span: 0x1a4e760 .. 0x1acc620 (178 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1a4e760] (75 bytes) sub_1A4E760
// bool sub_1A4E760(int a1, int a2);
// [0x1a4e9d0] (101 bytes) sub_1A4E9D0
// int sub_1A4E9D0(uint32_t *a1);
// [0x1a4f1b0] (213 bytes) sub_1A4F1B0
// bool sub_1A4F1B0(int a1, void *a2, unsigned int a3);
// [0x1a4f290] (74 bytes) sub_1A4F290
// int sub_1A4F290(int a1, int a2);
// [0x1a4f2e0] (445 bytes) sub_1A4F2E0
// char sub_1A4F2E0(int *a1, int a2);
// [0x1a4f4a0] (291 bytes) sub_1A4F4A0
// int sub_1A4F4A0(int a1, int a2, const char *s, void *src, size_t n);
// [0x1a4f5d0] (92 bytes) sub_1A4F5D0
// int sub_1A4F5D0(int a1, int a2, const char *a3, char *s);
// [0x1a4f630] (260 bytes) sub_1A4F630
// char *sub_1A4F630(int a1, int a2, int a3, int a4, uint8_t *a5, int a6);
// [0x1a4f740] (653 bytes) sub_1A4F740
// int sub_1A4F740(int a1, int a2, int *a3);
// [0x1a4f9d0] (159 bytes) sub_1A4F9D0
// bool sub_1A4F9D0(char *a1, char *a2, int a3);
// [0x1a4fa70] (410 bytes) sub_1A4FA70
// int sub_1A4FA70(int a1, char *a2, int a3, int a4);
// [0x1a4fc10] (166 bytes) sub_1A4FC10
// int sub_1A4FC10(uint8_t *a1);
// [0x1a4fcc0] (141 bytes) sub_1A4FCC0
// size_t sub_1A4FCC0(char *dest, int a2, int a3, char *s);
// [0x1a4fd50] (789 bytes) sub_1A4FD50
// int sub_1A4FD50(int a1, int a2, int a3, char *a4, size_t a5, int *a6);
// [0x1a50070] (129 bytes) sub_1A50070
// unsigned int sub_1A50070(unsigned int a1, void *a2, size_t a3, char *a4, size_t a5, int a6, int *a7);
// [0x1a50100] (199 bytes) sub_1A50100
// int sub_1A50100(int a1, int a2, int *a3, uint32_t *a4);
// [0x1a501d0] (123 bytes) sub_1A501D0
// bool sub_1A501D0(char *a1, char *a2);
// [0x1a50250] (5974 bytes) sub_1A50250
// int *sub_1A50250(int a1, int *a2, char a3);
// [0x1a519b0] (334 bytes) sub_1A519B0
// int sub_1A519B0(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x1a51b00] (314 bytes) sub_1A51B00
// int sub_1A51B00(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x1a51d90] (4579 bytes) sub_1A51D90
// char sub_1A51D90(void **a1, int a2, char a3, uint8_t *a4);
// [0x1a53b60] (373 bytes) sub_1A53B60
// int sub_1A53B60(int a1);
// [0x1a56290] (2055 bytes) sub_1A56290
// int sub_1A56290(int a1);
// [0x1a56cc0] (103 bytes) sub_1A56CC0
// int sub_1A56CC0(int *a1, int a2);
// [0x1a56d38] (1 bytes) nullsub_875
// void nullsub_875();
// [0x1a56d40] (211 bytes) sub_1A56D40
// char sub_1A56D40(int a1);
// [0x1a56e20] (109 bytes) sub_1A56E20
// uint32_t *sub_1A56E20(uint32_t *result, char a2);
// [0x1a56e90] (366 bytes) sub_1A56E90
// int sub_1A56E90(const char *a1, const char *s);
// [0x1a57030] (488 bytes) sub_1A57030
// int sub_1A57030(int result);
// [0x1a57220] (280 bytes) sub_1A57220
// int sub_1A57220(const char *s, int *a2, int *a3);
// [0x1a579f0] (246 bytes) sub_1A579F0
// int sub_1A579F0(int a1);
// [0x1a57af0] (233 bytes) sub_1A57AF0
// void sub_1A57AF0(int a1, int a2);
// [0x1a57be0] (8383 bytes) sub_1A57BE0
// int sub_1A57BE0(int a1, int *a2, uint8_t *a3);
// [0x1a5c81f] (61 bytes) sub_1A5C81F
// void sub_1A5C81F(int a1, char *a2, char **a3);
// [0x1a5c85c] (83 bytes) sub_1A5C85C
// int sub_1A5C85C(uint32_t *a1, int a2);
// [0x1a5c8b0] (12 bytes) curlx_ultous
// int curlx_ultous(uint16_t a1);
// [0x1a5c8c0] (12 bytes) curlx_ultouc
// int curlx_ultouc(uint8_t a1);
// [0x1a5c8d0] (14 bytes) curlx_uztosi
// int curlx_uztosi(int a1);
// [0x1a5c8e0] (14 bytes) curlx_sltosi
// int curlx_sltosi(int a1);
// [0x1a5c8f0] (11 bytes) curlx_sltoui
// int curlx_sltoui(int a1);
// [0x1a5c900] (12 bytes) curlx_sltous
// int curlx_sltous(uint16_t a1);
// [0x1a5c910] (14 bytes) curlx_uztosz
// int curlx_uztosz(int a1);
// [0x1a5c920] (11 bytes) curlx_sotouz
// int curlx_sotouz(int a1);
// [0x1a5ca10] (145 bytes) sub_1A5CA10
// int sub_1A5CA10(int a1, int a2, int a3);
// [0x1a5cab0] (121 bytes) sub_1A5CAB0
// int sub_1A5CAB0(int fd, uint32_t *a2);
// [0x1a5cb30] (194 bytes) sub_1A5CB30
// int sub_1A5CB30(uint8_t *a1, char *a2, int a3, uint32_t *a4);
// [0x1a5d130] (2414 bytes) sub_1A5D130
// int sub_1A5D130(int *a1, int a2, int a3, int *a4, uint8_t *a5);
// [0x1a5dfd0] (301 bytes) sub_1A5DFD0
// int sub_1A5DFD0(uint8_t *a1, int a2, uint32_t *a3);
// [0x1a5e100] (85 bytes) sub_1A5E100
// int sub_1A5E100(int a1, int a2);
// [0x1a5e160] (566 bytes) sub_1A5E160
// int sub_1A5E160(int *a1, int a2);
// [0x1a5e8d0] (141 bytes) sub_1A5E8D0
// int sub_1A5E8D0(uint32_t *a1);
// [0x1a5e960] (288 bytes) sub_1A5E960
// int sub_1A5E960(int a1);
// [0x1a5ea80] (116 bytes) sub_1A5EA80
// int sub_1A5EA80(int a1, int *a2);
// [0x1a60610] (161 bytes) sub_1A60610
// uint8_t *sub_1A60610(int a1, char *a2);
// [0x1a606c0] (1122 bytes) sub_1A606C0
// int sub_1A606C0(int *a1, uint8_t *a2);
// [0x1a60e50] (77 bytes) sub_1A60E50
// int sub_1A60E50(int a1);
// [0x1a60ea0] (364 bytes) sub_1A60EA0
// int sub_1A60EA0(int *a1, uint8_t *a2);
// [0x1a61010] (2706 bytes) sub_1A61010
// int (*sub_1A61010(int *a1, uint8_t *a2))(char *, int, size_t, uint32_t);
// [0x1a61bb0] (132 bytes) sub_1A61BB0
// uint32_t *sub_1A61BB0(int a1, int a2, int a3);
// [0x1a61c40] (233 bytes) sub_1A61C40
// size_t sub_1A61C40(int a1, void *ptr, size_t n);
// [0x1a61d30] (178 bytes) sub_1A61D30
// int sub_1A61D30(const char *s);
// [0x1a61df0] (461 bytes) sub_1A61DF0
// int sub_1A61DF0(uint32_t **a1, unsigned int a2, char *s, size_t n, uint64_t *a5);
// [0x1a61fc0] (132 bytes) sub_1A61FC0
// int sub_1A61FC0(uint32_t **a1, uint64_t *a2, char *a3, ...);
// [0x1a62050] (173 bytes) sub_1A62050
// char *sub_1A62050(const char *s, size_t a2);
// [0x1a63500] (623 bytes) sub_1A63500
// int (*sub_1A63500(int *a1, uint8_t *a2))(char *, int, size_t, uint32_t);
// [0x1a63770] (168 bytes) sub_1A63770
// int sub_1A63770(uint8_t *a1);
// [0x1a63820] (22 bytes) sub_1A63820
// int sub_1A63820(int a1, uint32_t *a2);
// [0x1a63840] (75 bytes) sub_1A63840
// int sub_1A63840(int a1, uint8_t *a2);
// [0x1a63890] (290 bytes) sub_1A63890
// size_t sub_1A63890(void *dest, int a2, int a3, uint32_t *a4);
// [0x1a639c0] (268 bytes) sub_1A639C0
// void *sub_1A639C0(char *a1);
// [0x1a63ca0] (87 bytes) sub_1A63CA0
// int sub_1A63CA0(uint32_t *a1, uint32_t *a2, int a3);
// [0x1a63d00] (284 bytes) sub_1A63D00
// int sub_1A63D00(int a1, int a2, size_t n);
// [0x1a63e20] (128 bytes) sub_1A63E20
// char sub_1A63E20(int a1, int a2);
// [0x1a63ea0] (637 bytes) sub_1A63EA0
// int sub_1A63EA0(int a1);
// [0x1a64290] (748 bytes) sub_1A64290
// int sub_1A64290(int a1, int a2, int a3, char *a4, char a5);
// [0x1a65140] (187 bytes) sub_1A65140
// int sub_1A65140(int a1, int a2, char **a3);
// [0x1a688e0] (192 bytes) sub_1A688E0
// int sub_1A688E0(int *a1);
// [0x1a689a0] (92 bytes) sub_1A689A0
// int sub_1A689A0(int a1, int a2);
// [0x1a69630] (193 bytes) sub_1A69630
// int sub_1A69630(uint8_t *a1, uint32_t *a2);
// [0x1a69700] (216 bytes) sub_1A69700
// unsigned int sub_1A69700(uint8_t *a1, uint8_t *a2, uint8_t *a3);
// [0x1a697e0] (187 bytes) sub_1A697E0
// int sub_1A697E0(const char *s, int a2);
// [0x1a6b4e0] (41 bytes) sub_1A6B4E0
// int sub_1A6B4E0(int a1);
// [0x1a6b510] (18 bytes) sub_1A6B510
// bool sub_1A6B510(uint32_t *a1, int a2, uint32_t *a3);
// [0x1a6b530] (18 bytes) sub_1A6B530
// int sub_1A6B530(uint32_t *a1, int a2, int a3);
// [0x1a6b558] (1 bytes) nullsub_876
// void nullsub_876();
// [0x1a6b560] (37 bytes) sub_1A6B560
// void sub_1A6B560(int a1, void *a2);
// [0x1a6b590] (209 bytes) sub_1A6B590
// int sub_1A6B590(int *a1, uint32_t *a2);
// [0x1a6b670] (32 bytes) sub_1A6B670
// int sub_1A6B670(int result, uint32_t *a2, int a3);
// [0x1a6b690] (295 bytes) sub_1A6B690
// int sub_1A6B690(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x1a6b7c0] (183 bytes) sub_1A6B7C0
// int sub_1A6B7C0(int *a1, int *a2);
// [0x1a6b880] (199 bytes) sub_1A6B880
// int sub_1A6B880(int *a1);
// [0x1a6b950] (276 bytes) sub_1A6B950
// int sub_1A6B950(uint32_t *a1, uint32_t *a2);
// [0x1a6ba70] (1067 bytes) sub_1A6BA70
// uint32_t *sub_1A6BA70(int a1, uint32_t *a2);
// [0x1a6c5f0] (317 bytes) sub_1A6C5F0
// int sub_1A6C5F0(int a1);
// [0x1a6c730] (4569 bytes) sub_1A6C730
// int sub_1A6C730(int a1, int a2, int a3, int *a4);
// [0x1a6dad0] (742 bytes) sub_1A6DAD0
// int sub_1A6DAD0(int a1, char a2, int a3, int a4, uint32_t *a5);
// [0x1a6ea90] (9 bytes) curlx_nonblock
// int curlx_nonblock();
// [0x1a6f1d0] (538 bytes) sub_1A6F1D0
// int sub_1A6F1D0(char *a1, int64_t a2);
// [0x1a6f3f0] (662 bytes) sub_1A6F3F0
// int sub_1A6F3F0(int64_t a1@<edx:eax>, int a2);
// [0x1a709f0] (306 bytes) sub_1A709F0
// int sub_1A709F0(int a1, int a2, int a3);
// [0x1a72820] (142 bytes) curlx_tvnow
// struct timeval *curlx_tvnow(struct timeval *a1);
// [0x1a728b0] (45 bytes) curlx_tvdiff
// int curlx_tvdiff(int a1, int a2, int a3, int a4);
// [0x1a728e0] (64 bytes) curlx_tvdiff_secs
// long double curlx_tvdiff_secs(int a1, int a2, int a3, int a4);
// [0x1a72930] (159 bytes) sub_1A72930
// int sub_1A72930(uint8_t *a1, int a2);
// [0x1a731f0] (31 bytes) sub_1A731F0
// int sub_1A731F0(int a1);
// [0x1a73210] (319 bytes) sub_1A73210
// unsigned int sub_1A73210( hkClass *a1, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2);
// [0x1a73350] (208 bytes) sub_1A73350
// unsigned int sub_1A73350( hkClass *Parent, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, int a3, void (*a4)(hkClassMember *));
// [0x1a73420] (190 bytes) sub_1A73420
// int sub_1A73420(int a1);
// [0x1a76ee0] (71 bytes) sub_1A76EE0
// hkHardwareInfo *sub_1A76EE0();
// [0x1a76f30] (70 bytes) sub_1A76F30
// uint32_t *sub_1A76F30();
// [0x1a796e0] (56 bytes) defaultPopDispatchFunc(hkJobQueue &,hkJobQueue::DynamicData *,hkJobQueue::JobQueueEntry &,hkJobQueue::JobQueueEntry &)
// int defaultPopDispatchFunc(int a1, int a2, int a3, int a4);
// [0x1a79720] (56 bytes) defaultFinishDispatchFunc(hkJobQueue &,hkJobQueue::DynamicData *,hkJobQueue::JobQueueEntry const&,hkJobQueue::JobQueueEntryInput &)
// int defaultFinishDispatchFunc(int a1, int a2, int a3, int a4);
// [0x1a79760] (9 bytes) sub_1A79760
// int sub_1A79760();
// [0x1a79770] (12 bytes) sub_1A79770
// int sub_1A79770();
// [0x1a7f9e0] (96 bytes) sub_1A7F9E0
// uint32_t *sub_1A7F9E0();
// [0x1a7fbe0] (70 bytes) sub_1A7FBE0
// uint32_t *sub_1A7FBE0();
// [0x1a812a0] (78 bytes) sub_1A812A0
// int sub_1A812A0(hkString *a1, int a2);
// [0x1a812f0] (169 bytes) sub_1A812F0
// int sub_1A812F0(hkString *a1, int a2);
// [0x1a821c0] (467 bytes) sub_1A821C0
// int sub_1A821C0();
// [0x1a82460] (922 bytes) sub_1A82460
// void sub_1A82460();
// [0x1a84260] (57 bytes) sub_1A84260
// bool *sub_1A84260(bool *a1, int a2, int a3);
// [0x1a84ff0] (327 bytes) void hkAlgorithm::quickSortRecursive<hkTrackerScanSnapshot::Block *,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*)>(hkTrackerScanSnapshot::Block * *,int,int,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*))
// int hkAlgorithm::quickSortRecursive<hkTrackerScanSnapshot::Block *,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*)>(;
// [0x1a853f0] (327 bytes) void hkAlgorithm::quickSortRecursive<hkTrackerScanSnapshot::Block const*,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*)>(hkTrackerScanSnapshot::Block const* *,int,int,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*))
// int hkAlgorithm::quickSortRecursive<hkTrackerScanSnapshot::Block const*,hkBool (*)(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*)>(;
// [0x1a86750] (111 bytes) sub_1A86750
// int sub_1A86750();
// [0x1a867c0] (70 bytes) sub_1A867C0
// uint32_t *sub_1A867C0();
// [0x1a86980] (117 bytes) sub_1A86980
// int sub_1A86980();
// [0x1a86a00] (70 bytes) sub_1A86A00
// uint32_t *sub_1A86A00();
// [0x1a86b30] (725 bytes) sub_1A86B30
// int64_t sub_1A86B30@<edx:eax>(int a1, uint8_t *a2);
// [0x1a86e10] (429 bytes) sub_1A86E10
// int sub_1A86E10(int a1, int a2, int a3, int a4, int16_t a5);
// [0x1a89150] (57 bytes) operator<<(hkOstream &,hkSubString const&)
// hkOstream *operator<<(hkOstream *a1, const char **a2);
// [0x1a91530] (21 bytes) sub_1A91530
// bool sub_1A91530(int a1, int a2);
// [0x1a91a50] (386 bytes) void hkAlgorithm::quickSortRecursive<hkDefaultMemoryTracker::ClassAlloc,unsigned int (*)(hkDefaultMemoryTracker::ClassAlloc const&,hkDefaultMemoryTracker::ClassAlloc const&)>(hkDefaultMemoryTracker::ClassAlloc *,int,int,unsigned int (*)(hkDefaultMemoryTracker::ClassAlloc const&,hkDefaultMemoryTracker::ClassAlloc const&))
// hkDefaultMemoryTracker::ClassAlloc *hkAlgorithm::quickSortRecursive<hkDefaultMemoryTracker::ClassAlloc,unsigned int (*)(hkDefaultMemoryTracker::ClassAlloc const&,hkDefaultMemoryTracker::ClassAlloc const&)>(;
// [0x1a91be0] (633 bytes) sub_1A91BE0
// hkDefaultMemoryTracker::ClassAlloc *sub_1A91BE0(hkAlgorithm *a1, int a2);
// [0x1a91e80] (101 bytes) sub_1A91E80
// int sub_1A91E80();
// [0x1a93f10] (144 bytes) sub_1A93F10
// void sub_1A93F10();
// [0x1a963c0] (246 bytes) sub_1A963C0
// int sub_1A963C0(int a1, int *a2, hkMemoryAllocator *a3);
// [0x1aa11e0] (2963 bytes) bool hkcdGskImpl<hkcdGsk_Vector4ShapeInterface>::linearCast<hkcdGsk::Cache>(hkcdGsk_Vector4ShapeInterface const*,void const*,void const*,hkcdGsk::LinearCastInput const&,hkcdGsk::Cache *,hkSimdFloat32 &,hkVector4f &)
// int hkcdGskImpl<hkcdGsk_Vector4ShapeInterface>::linearCast<hkcdGsk::Cache>( __m128 *a1, int a2, uint32_t *a3, int *a4, int a5, int a6, float *a7, int *a8);
// [0x1aa2c20] (2674 bytes) bool hkcdGskImpl<hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>>::linearCast<hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>>(hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape> const*,void const*,void const*,hkcdGsk::LinearCastInput const&,hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape> *,hkSimdFloat32 &,hkVector4f &)
// int hkcdGskImpl<hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>>::linearCast<hkcdGskBase::RayCastShapeInterface<hkcdGsk_Vector4Shape>>( __m128 *a1, int a2, int32_t **a3, int a4, float *a5, int a6, float *a7, float *a8);
// [0x1aafc30] (40 bytes) sub_1AAFC30
// uint32_t *sub_1AAFC30();
// [0x1aafc60] (20 bytes) sub_1AAFC60
// int sub_1AAFC60(int (***a1)(uint32_t));
// [0x1aafc80] (45 bytes) sub_1AAFC80
// int sub_1AAFC80(int a1, int a2);
// [0x1aafcd0] (226 bytes) sub_1AAFCD0
// uint32_t *sub_1AAFCD0();
// [0x1ab3e80] (20 bytes) sub_1AB3E80
// int sub_1AB3E80(int (***a1)(uint32_t));
// [0x1ab3ea8] (1 bytes) nullsub_877
// void nullsub_877();
// [0x1ab3eb0] (45 bytes) sub_1AB3EB0
// uint32_t *sub_1AB3EB0(uint32_t *a1);
// [0x1ab3ee0] (86 bytes) sub_1AB3EE0
// int sub_1AB3EE0(uint32_t *a1);
// [0x1ab3f80] (397 bytes) sub_1AB3F80
// uint32_t *sub_1AB3F80();
// [0x1ab4130] (146 bytes) sub_1AB4130
// void sub_1AB4130();
// [0x1ab41d8] (1 bytes) nullsub_878
// void nullsub_878();
// [0x1ab41e8] (1 bytes) nullsub_879
// void nullsub_879();
// [0x1ab41f0] (88 bytes) sub_1AB41F0
// int sub_1AB41F0(uint32_t *a1);
// [0x1ab42d0] (662 bytes) sub_1AB42D0
// void sub_1AB42D0();
// [0x1ab4570] (46 bytes) sub_1AB4570
// bool sub_1AB4570(int a1, int a2);
// [0x1ab4b10] (326 bytes) void hkAlgorithm::quickSortRecursive<hkVertexFormat::Element,bool (*)(hkVertexFormat::Element const&,hkVertexFormat::Element const&)>(hkVertexFormat::Element *,int,int,bool (*)(hkVertexFormat::Element const&,hkVertexFormat::Element const&))
// hkVertexFormat::Element *hkAlgorithm::quickSortRecursive<hkVertexFormat::Element,bool (*)(hkVertexFormat::Element const&,hkVertexFormat::Element const&)>(;
// [0x1ab8450] (1383 bytes) InternalInertiaTensorComputer::compProjectionIntegrals(hkVector4f const*)
// InternalInertiaTensorComputer *InternalInertiaTensorComputer::compProjectionIntegrals( InternalInertiaTensorComputer *this, const hkVector4f *a2);
// [0x1ab89c0] (894 bytes) InternalInertiaTensorComputer::compFaceIntegrals(hkVector4f const*,hkVector4f const&)
// int *InternalInertiaTensorComputer::compFaceIntegrals( InternalInertiaTensorComputer *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x1ab8d40] (1664 bytes) InternalInertiaTensorComputer::compVolumeIntegrals(hkGeometry const*,hkVector4f const&)
// void *InternalInertiaTensorComputer::compVolumeIntegrals( __m128 *this, const hkGeometry *a2, const hkVector4f *a3);
// [0x1ab93c0] (466 bytes) InternalInertiaTensorComputer::computeInertialTensorInternal(hkSimdFloat32 const&,hkSimdFloat32 const&,hkVector4f &,hkMatrix3f &)
// int InternalInertiaTensorComputer::computeInertialTensorInternal( float *a1, float *a2, float *a3, float *a4, int a5);
// [0x1ab95a0] (493 bytes) InternalInertiaTensorComputer::compGeometryAabb(float const*,int,int,hkVector4f &,hkVector4f &)
// hkVector4f *InternalInertiaTensorComputer::compGeometryAabb( InternalInertiaTensorComputer *this, const float *a2, int a3, float *a4, hkVector4f *a5);
// [0x1abbd78] (1 bytes) nullsub_880
// void nullsub_880();
// [0x1abbd88] (1 bytes) nullsub_881
// void nullsub_881();
// [0x1abbd98] (1 bytes) nullsub_882
// void nullsub_882();
// [0x1abbe00] (532 bytes) sub_1ABBE00
// uint32_t *sub_1ABBE00();
// [0x1abc020] (264 bytes) sub_1ABC020
// int sub_1ABC020(uint32_t *a1);
// [0x1abc130] (1648 bytes) sub_1ABC130
// int sub_1ABC130(float *a1, float *a2, float *a3, float *a4);
// [0x1abc7a0] (2049 bytes) sub_1ABC7A0
// int sub_1ABC7A0(int a1, int a2, int a3, float *a4, float *a5);
// [0x1abcfb0] (1362 bytes) sub_1ABCFB0
// int sub_1ABCFB0(uint32_t *a1, float *a2, float *a3, float *a4, int a5, float *a6, float *a7);
// [0x1abe0b0] (821 bytes) sub_1ABE0B0
// void *sub_1ABE0B0(float *a1, int a2, float *a3, float *a4, float *a5);
// [0x1abe3f0] (1016 bytes) sub_1ABE3F0
// float *sub_1ABE3F0(float *a1, float *a2, int a3, int a4);
// [0x1abe7f0] (1056 bytes) sub_1ABE7F0
// int sub_1ABE7F0(uint32_t *a1, float *a2, float *a3, int a4);
// [0x1abec10] (2239 bytes) sub_1ABEC10
// float *sub_1ABEC10(float *a1, float *a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x1abffa0] (26 bytes) sub_1ABFFA0
// void sub_1ABFFA0();
// [0x1abffc0] (3024 bytes) sub_1ABFFC0
// float *sub_1ABFFC0(int a1, float *a2);
// [0x1ac0b90] (958 bytes) sub_1AC0B90
// float *sub_1AC0B90(int a1, int *a2, int a3, int a4);
// [0x1ac6680] (27 bytes) sub_1AC6680
// bool *sub_1AC6680(bool *a1, int a2, int a3);
// [0x1ac66a0] (27 bytes) sub_1AC66A0
// bool *sub_1AC66A0(bool *a1, int a2, int a3);
// [0x1acc460] (448 bytes) void hkAlgorithm::quickSortRecursive<hkVector4f,hkBool (*)(hkVector4f&,hkVector4f&)>(hkVector4f *,int,int,hkBool (*)(hkVector4f&,hkVector4f&))
// int hkAlgorithm::quickSortRecursive<hkVector4f,hkBool (*)(hkVector4f&,hkVector4f&)>(;
// [0x1acc620] (772 bytes) sub_1ACC620
// int sub_1ACC620(int a1, int a2, int a3);
