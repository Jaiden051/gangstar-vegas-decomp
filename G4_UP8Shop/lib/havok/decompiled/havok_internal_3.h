#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_internal_3.h
// Library: havok | Module: havok_internal_3
// Binary Address Span: 0x16c76f0 .. 0x17441e0 (351 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x16c76f0] (72 bytes) sub_16C76F0
// void sub_16C76F0();
// [0x16c9178] (1 bytes) nullsub_718
// void nullsub_718();
// [0x16c9180] (57 bytes) sub_16C9180
// int sub_16C9180(int a1, int a2);
// [0x16c91c8] (1 bytes) nullsub_719
// void nullsub_719();
// [0x16c91d0] (52 bytes) sub_16C91D0
// int sub_16C91D0(int a1, int a2);
// [0x16c9250] (370 bytes) sub_16C9250
// uint32_t *sub_16C9250();
// [0x16c9650] (10 bytes) `non-virtual thunk to'hkpConvexListShape::getNumChildShapes(void)const
// int `non-virtual thunk to'hkpConvexListShape::getNumChildShapes(hkpConvexListShape *this);
// [0x16c9670] (10 bytes) `non-virtual thunk to'hkpConvexListShape::getFirstKey(void)const
// int `non-virtual thunk to'hkpConvexListShape::getFirstKey();
// [0x16c96a0] (10 bytes) `non-virtual thunk to'hkpConvexListShape::getNextKey(unsigned int)const
// int `non-virtual thunk to'hkpConvexListShape::getNextKey(hkpConvexListShape *this, unsigned int a2);
// [0x16c96c0] (10 bytes) `non-virtual thunk to'hkpConvexListShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// int `non-virtual thunk to'hkpConvexListShape::getChildShape(int a1, int a2);
// [0x16c96e0] (10 bytes) `non-virtual thunk to'hkpConvexListShape::getCollisionFilterInfo(unsigned int)const
// int `non-virtual thunk to'hkpConvexListShape::getCollisionFilterInfo();
// [0x16c9e70] (10 bytes) `non-virtual thunk to'hkpConvexListShape::~hkpConvexListShape()
// void `non-virtual thunk to'hkpConvexListShape::~hkpConvexListShape(hkpConvexListShape *this);
// [0x16c9ee0] (10 bytes) `non-virtual thunk to'hkpConvexListShape::~hkpConvexListShape()
// void `non-virtual thunk to'hkpConvexListShape::~hkpConvexListShape(hkpConvexListShape *this);
// [0x16ca760] (486 bytes) void hkAlgorithm::quickSortRecursive<hk1AxisSweep::AabbInt,hkAlgorithm::less<hk1AxisSweep::AabbInt>>(hk1AxisSweep::AabbInt *,int,int,hkAlgorithm::less<hk1AxisSweep::AabbInt>)
// int hkAlgorithm::quickSortRecursive<hk1AxisSweep::AabbInt,hkAlgorithm::less<hk1AxisSweep::AabbInt>>( int a1, int a2, int a3);
// [0x16ca950] (4709 bytes) sub_16CA950
// int sub_16CA950(int a1, int a2, int a3, int a4, int *a5);
// [0x16cbbc0] (342 bytes) void hkAlgorithm::quickSortRecursive<hkpShapeKeyPair,hkAlgorithm::less<hkpShapeKeyPair>>(hkpShapeKeyPair *,int,int,hkAlgorithm::less<hkpShapeKeyPair>)
// unsigned int *hkAlgorithm::quickSortRecursive<hkpShapeKeyPair,hkAlgorithm::less<hkpShapeKeyPair>>( int a1, int a2, int a3);
// [0x16d6470] (29 bytes) sub_16D6470
// uint32_t *sub_16D6470(uint32_t *a1);
// [0x16d6490] (20 bytes) sub_16D6490
// int sub_16D6490(int (***a1)(uint32_t));
// [0x16d64d0] (200 bytes) sub_16D64D0
// uint32_t *sub_16D64D0();
// [0x16d7930] (146 bytes) sub_16D7930
// void sub_16D7930();
// [0x16d9d60] (24 bytes) sub_16D9D60
// bool sub_16D9D60(int a1, int a2);
// [0x16d9da0] (322 bytes) void hkAlgorithm::quickSortRecursive<hkpLinkedCollidable::CollisionEntry,bool (*)(hkpLinkedCollidable::CollisionEntry const&,hkpLinkedCollidable::CollisionEntry const&)>(hkpLinkedCollidable::CollisionEntry *,int,int,bool (*)(hkpLinkedCollidable::CollisionEntry const&,hkpLinkedCollidable::CollisionEntry const&))
// int hkAlgorithm::quickSortRecursive<hkpLinkedCollidable::CollisionEntry,bool (*)(hkpLinkedCollidable::CollisionEntry const&,hkpLinkedCollidable::CollisionEntry const&)>(;
// [0x16d9ef0] (614 bytes) sub_16D9EF0
// int sub_16D9EF0(int a1, int a2);
// [0x16e4eb0] (10 bytes) `non-virtual thunk to'hkpExtendedMeshShape::getNumChildShapes(void)const
// int `non-virtual thunk to'hkpExtendedMeshShape::getNumChildShapes(hkpExtendedMeshShape *this);
// [0x16e4f70] (10 bytes) `non-virtual thunk to'hkpExtendedMeshShape::getFirstKey(void)const
// int `non-virtual thunk to'hkpExtendedMeshShape::getFirstKey(hkpExtendedMeshShape *this);
// [0x16e5110] (10 bytes) `non-virtual thunk to'hkpExtendedMeshShape::getNextKey(unsigned int)const
// int `non-virtual thunk to'hkpExtendedMeshShape::getNextKey(hkpExtendedMeshShape *this, unsigned int a2);
// [0x16e5e70] (10 bytes) `non-virtual thunk to'hkpExtendedMeshShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// int32_t `non-virtual thunk to'hkpExtendedMeshShape::getChildShape(int a1, int a2, int32_t a3);
// [0x16e6240] (10 bytes) `non-virtual thunk to'hkpExtendedMeshShape::getCollisionFilterInfo(unsigned int)const
// int `non-virtual thunk to'hkpExtendedMeshShape::getCollisionFilterInfo( hkpExtendedMeshShape *this, unsigned int a2);
// [0x16e7fa0] (10 bytes) `non-virtual thunk to'hkpExtendedMeshShape::~hkpExtendedMeshShape()
// void `non-virtual thunk to'hkpExtendedMeshShape::~hkpExtendedMeshShape(hkpExtendedMeshShape *this);
// [0x16e8010] (10 bytes) `non-virtual thunk to'hkpExtendedMeshShape::~hkpExtendedMeshShape()
// void `non-virtual thunk to'hkpExtendedMeshShape::~hkpExtendedMeshShape(hkpExtendedMeshShape *this);
// [0x16eedf0] (10 bytes) `non-virtual thunk to'hkpShapeCollection::~hkpShapeCollection()
// void `non-virtual thunk to'hkpShapeCollection::~hkpShapeCollection(hkpShapeCollection *this);
// [0x16ef720] (7 bytes) `non-virtual thunk to'hkpShapeCollection::~hkpShapeCollection()
// void `non-virtual thunk to'hkpShapeCollection::~hkpShapeCollection(hkpShapeCollection *this);
// [0x16f3ed0] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled(hkpCollidable const&,hkpCollidable const&)const
// hkpCollisionFilterList *`non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled( hkpCollisionFilterList *this, const hkpCollidable *a2, const hkpCollidable *a3);
// [0x16f3f80] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,unsigned int)const
// uint8_t *`non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled(uint8_t *a1, int a2);
// [0x16f4020] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled(hkpShapeRayCastInput const&,hkpShapeContainer const&,unsigned int)const
// uint8_t *`non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled(uint8_t *a1, int a2);
// [0x16f40e0] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,hkpShapeContainer const&,unsigned int,unsigned int)const
// uint8_t *`non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled(uint8_t *a1, int a2);
// [0x16f4180] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled(hkpWorldRayCastInput const&,hkpCollidable const&)const
// uint8_t *`non-virtual thunk to'hkpCollisionFilterList::isCollisionEnabled(uint8_t *a1, int a2);
// [0x16f4300] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList()
// void `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f4310] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList()
// void `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f4320] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList()
// void `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f4330] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList()
// void `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f43a0] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList()
// void `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f43b0] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList()
// void `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f43c0] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList()
// void `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f43d0] (10 bytes) `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList()
// void `non-virtual thunk to'hkpCollisionFilterList::~hkpCollisionFilterList(hkpCollisionFilterList *this);
// [0x16f4b90] (766 bytes) sub_16F4B90
// float sub_16F4B90(hkpConvexVerticesShape *a1, int a2, float *a3);
// [0x16f52c0] (1288 bytes) sub_16F52C0
// int sub_16F52C0(hkpConvexVerticesShape *a1, char a2, const hkVector4f *a3, int a4);
// [0x16f57d0] (5903 bytes) sub_16F57D0
// hkpConvexVerticesShape *sub_16F57D0( int a1, hkMemoryAllocator *a2, long double a3, char a4);
// [0x16ffa30] (10 bytes) `non-virtual thunk to'hkpCompressedMeshShape::getFirstKey(void)const
// int `non-virtual thunk to'hkpCompressedMeshShape::getFirstKey(hkpCompressedMeshShape *this);
// [0x17003a0] (10 bytes) `non-virtual thunk to'hkpCompressedMeshShape::~hkpCompressedMeshShape()
// void `non-virtual thunk to'hkpCompressedMeshShape::~hkpCompressedMeshShape(hkpCompressedMeshShape *this);
// [0x17008f0] (10 bytes) `non-virtual thunk to'hkpCompressedMeshShape::~hkpCompressedMeshShape()
// void `non-virtual thunk to'hkpCompressedMeshShape::~hkpCompressedMeshShape(hkpCompressedMeshShape *this);
// [0x1700e80] (10 bytes) `non-virtual thunk to'hkpCompressedMeshShape::getNextKey(unsigned int)const
// int `non-virtual thunk to'hkpCompressedMeshShape::getNextKey(hkpCompressedMeshShape *this, unsigned int a2);
// [0x1701d80] (10 bytes) `non-virtual thunk to'hkpCompressedMeshShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// hkpConvexVerticesShape *`non-virtual thunk to'hkpCompressedMeshShape::getChildShape( int a1, unsigned int a2, hkpConvexVerticesShape *a3);
// [0x1702b30] (10 bytes) `non-virtual thunk to'hkpCompressedMeshShape::getCollisionFilterInfo(unsigned int)const
// int `non-virtual thunk to'hkpCompressedMeshShape::getCollisionFilterInfo( hkpCompressedMeshShape *this, unsigned int a2);
// [0x1702b40] (188 bytes) sub_1702B40
// _OWORD *sub_1702B40();
// [0x1704450] (1625 bytes) sub_1704450
// int sub_1704450(uint8_t *a1, int a2, uint32_t *a3, int a4);
// [0x170f4d0] (30 bytes) sub_170F4D0
// uint8_t *sub_170F4D0();
// [0x1711a60] (66 bytes) sub_1711A60
// int sub_1711A60();
// [0x1711b38] (1 bytes) nullsub_720
// void nullsub_720();
// [0x1711b48] (1 bytes) nullsub_721
// void nullsub_721();
// [0x1711b50] (49 bytes) sub_1711B50
// hkpConstraintData **sub_1711B50(hkpConstraintData **a1, int a2);
// [0x1711b90] (49 bytes) sub_1711B90
// hkpConstraintData **sub_1711B90(hkpConstraintData **a1, int a2);
// [0x1711c10] (368 bytes) sub_1711C10
// uint32_t *sub_1711C10();
// [0x1711dc0] (29 bytes) sub_1711DC0
// uint32_t *sub_1711DC0(uint32_t *a1);
// [0x1711de0] (20 bytes) sub_1711DE0
// int sub_1711DE0(int (***a1)(uint32_t));
// [0x1711ee0] (202 bytes) sub_1711EE0
// uint32_t *sub_1711EE0();
// [0x1711fb8] (1 bytes) nullsub_722
// void nullsub_722();
// [0x1711fc8] (1 bytes) nullsub_723
// void nullsub_723();
// [0x1711fd0] (20 bytes) sub_1711FD0
// int sub_1711FD0(int (***a1)(uint32_t));
// [0x1711ff0] (87 bytes) sub_1711FF0
// void (**sub_1711FF0(int a1, int a2))(hkpRagdollLimitsData *__hidden this);
// [0x1712090] (404 bytes) sub_1712090
// uint32_t *sub_1712090();
// [0x1712250] (29 bytes) sub_1712250
// uint32_t *sub_1712250(uint32_t *a1);
// [0x1712270] (20 bytes) sub_1712270
// int sub_1712270(int (***a1)(uint32_t));
// [0x1712310] (202 bytes) sub_1712310
// uint32_t *sub_1712310();
// [0x17123e0] (29 bytes) sub_17123E0
// uint32_t *sub_17123E0(uint32_t *a1);
// [0x1712400] (20 bytes) sub_1712400
// int sub_1712400(int (***a1)(uint32_t));
// [0x1712440] (202 bytes) sub_1712440
// uint32_t *sub_1712440();
// [0x1712518] (1 bytes) nullsub_724
// void nullsub_724();
// [0x1712528] (1 bytes) nullsub_725
// void nullsub_725();
// [0x1712530] (20 bytes) sub_1712530
// int sub_1712530(int (***a1)(uint32_t));
// [0x1712550] (59 bytes) sub_1712550
// void (**sub_1712550(uint32_t *a1))(hkpFixedConstraintData *__hidden this);
// [0x17125d0] (402 bytes) sub_17125D0
// uint32_t *sub_17125D0();
// [0x1712778] (1 bytes) nullsub_726
// void nullsub_726();
// [0x1712788] (1 bytes) nullsub_727
// void nullsub_727();
// [0x1712790] (20 bytes) sub_1712790
// int sub_1712790(int (***a1)(uint32_t));
// [0x17127b0] (59 bytes) sub_17127B0
// void (**sub_17127B0(uint32_t *a1))(hkpDeformableFixedConstraintData *__hidden this);
// [0x17127f0] (59 bytes) sub_17127F0
// void (**sub_17127F0())(hkpDeformableFixedConstraintData *__hidden this);
// [0x1712870] (369 bytes) sub_1712870
// void (**sub_1712870())(hkpDeformableFixedConstraintData *__hidden this);
// [0x17129f8] (1 bytes) nullsub_728
// void nullsub_728();
// [0x1712a08] (1 bytes) nullsub_729
// void nullsub_729();
// [0x1712a10] (20 bytes) sub_1712A10
// int sub_1712A10(int (***a1)(uint32_t));
// [0x1712a30] (59 bytes) sub_1712A30
// void (**sub_1712A30(uint32_t *a1))(hkpStiffSpringConstraintData *__hidden this);
// [0x1712ab0] (402 bytes) sub_1712AB0
// uint32_t *sub_1712AB0();
// [0x1712c58] (1 bytes) nullsub_730
// void nullsub_730();
// [0x1712c60] (20 bytes) sub_1712C60
// int sub_1712C60(int (***a1)(uint32_t));
// [0x1712c80] (45 bytes) sub_1712C80
// int sub_1712C80(int a1, int a2);
// [0x1712cb0] (77 bytes) sub_1712CB0
// int sub_1712CB0(uint32_t *a1, int a2);
// [0x1712d00] (87 bytes) sub_1712D00
// void (**sub_1712D00())(hkpLinearClearanceConstraintData *__hidden this);
// [0x1712da0] (373 bytes) sub_1712DA0
// void (**sub_1712DA0())(hkpLinearClearanceConstraintData *__hidden this);
// [0x1712f28] (1 bytes) nullsub_731
// void nullsub_731();
// [0x1712f38] (1 bytes) nullsub_732
// void nullsub_732();
// [0x1712f40] (20 bytes) sub_1712F40
// int sub_1712F40(int (***a1)(uint32_t));
// [0x1712f60] (59 bytes) sub_1712F60
// void (**sub_1712F60(uint32_t *a1))(hkpPulleyConstraintData *__hidden this);
// [0x1712fe0] (402 bytes) sub_1712FE0
// uint32_t *sub_1712FE0();
// [0x1713188] (1 bytes) nullsub_733
// void nullsub_733();
// [0x1713198] (1 bytes) nullsub_734
// void nullsub_734();
// [0x17131a0] (20 bytes) sub_17131A0
// int sub_17131A0(int (***a1)(uint32_t));
// [0x17131c0] (93 bytes) sub_17131C0
// void (**sub_17131C0(uint32_t *a1, int a2))(hkpWheelFrictionConstraintData *__hidden this);
// [0x1713220] (44 bytes) sub_1713220
// uint32_t *sub_1713220(uint32_t *a1, int a2);
// [0x17132b0] (569 bytes) sub_17132B0
// uint32_t *sub_17132B0();
// [0x17134f8] (1 bytes) nullsub_735
// void nullsub_735();
// [0x1713508] (1 bytes) nullsub_736
// void nullsub_736();
// [0x1713510] (20 bytes) sub_1713510
// int sub_1713510(int (***a1)(uint32_t));
// [0x1713530] (59 bytes) sub_1713530
// void (**sub_1713530(uint32_t *a1))(hkpRotationalConstraintData *__hidden this);
// [0x17135b0] (402 bytes) sub_17135B0
// uint32_t *sub_17135B0();
// [0x1713770] (162 bytes) sub_1713770
// void sub_1713770();
// [0x1714350] (144 bytes) sub_1714350
// void sub_1714350();
// [0x1714500] (29 bytes) sub_1714500
// uint32_t *sub_1714500(uint32_t *a1);
// [0x1714520] (20 bytes) sub_1714520
// int sub_1714520(int (***a1)(uint32_t));
// [0x1714560] (220 bytes) sub_1714560
// uint32_t *sub_1714560();
// [0x17155d8] (1 bytes) nullsub_737
// void nullsub_737();
// [0x17155e8] (1 bytes) nullsub_738
// void nullsub_738();
// [0x17155f0] (20 bytes) sub_17155F0
// int sub_17155F0(int (***a1)(uint32_t));
// [0x1715610] (59 bytes) sub_1715610
// void (**sub_1715610(uint32_t *a1))(hkpCogWheelConstraintData *__hidden this);
// [0x1715690] (402 bytes) sub_1715690
// uint32_t *sub_1715690();
// [0x1715838] (1 bytes) nullsub_739
// void nullsub_739();
// [0x1715848] (1 bytes) nullsub_740
// void nullsub_740();
// [0x1715850] (20 bytes) sub_1715850
// int sub_1715850(int (***a1)(uint32_t));
// [0x1715870] (59 bytes) sub_1715870
// void (**sub_1715870(uint32_t *a1))(hkpBallAndSocketConstraintData *__hidden this);
// [0x17158f0] (402 bytes) sub_17158F0
// uint32_t *sub_17158F0();
// [0x1715ae8] (1 bytes) nullsub_741
// void nullsub_741();
// [0x1715af8] (1 bytes) nullsub_742
// void nullsub_742();
// [0x1715b00] (20 bytes) sub_1715B00
// int sub_1715B00(int (***a1)(uint32_t));
// [0x1715b20] (59 bytes) sub_1715B20
// void (**sub_1715B20(uint32_t *a1))(hkpRackAndPinionConstraintData *__hidden this);
// [0x1715ba0] (404 bytes) sub_1715BA0
// uint32_t *sub_1715BA0();
// [0x1715d48] (1 bytes) nullsub_743
// void nullsub_743();
// [0x1715d58] (1 bytes) nullsub_744
// void nullsub_744();
// [0x1715d60] (20 bytes) sub_1715D60
// int sub_1715D60(int (***a1)(uint32_t));
// [0x1715d80] (59 bytes) sub_1715D80
// void (**sub_1715D80(uint32_t *a1))(hkpHingeConstraintData *__hidden this);
// [0x1715e00] (404 bytes) sub_1715E00
// uint32_t *sub_1715E00();
// [0x1716178] (1 bytes) nullsub_745
// void nullsub_745();
// [0x1716188] (1 bytes) nullsub_746
// void nullsub_746();
// [0x1716190] (20 bytes) sub_1716190
// int sub_1716190(int (***a1)(uint32_t));
// [0x17161b0] (59 bytes) sub_17161B0
// void (**sub_17161B0(uint32_t *a1))(hkpPointToPlaneConstraintData *__hidden this);
// [0x1716230] (402 bytes) sub_1716230
// uint32_t *sub_1716230();
// [0x17163f0] (146 bytes) sub_17163F0
// void sub_17163F0();
// [0x1716498] (1 bytes) nullsub_747
// void nullsub_747();
// [0x17164a8] (1 bytes) nullsub_748
// void nullsub_748();
// [0x17164b0] (20 bytes) sub_17164B0
// int sub_17164B0(int (***a1)(uint32_t));
// [0x17164d0] (59 bytes) sub_17164D0
// void (**sub_17164D0(uint32_t *a1))(hkpWheelConstraintData *__hidden this);
// [0x1716510] (59 bytes) sub_1716510
// void (**sub_1716510())(hkpWheelConstraintData *__hidden this);
// [0x1716590] (371 bytes) sub_1716590
// void (**sub_1716590())(hkpWheelConstraintData *__hidden this);
// [0x1717480] (20 bytes) sub_1717480
// int sub_1717480(int (***a1)(uint32_t));
// [0x17174a0] (83 bytes) sub_17174A0
// hkpBridgeConstraintAtom *sub_17174A0(int a1, int a2);
// [0x1717520] (244 bytes) sub_1717520
// uint32_t *sub_1717520();
// [0x1717640] (150 bytes) sub_1717640
// void sub_1717640();
// [0x1719498] (1 bytes) nullsub_749
// void nullsub_749();
// [0x17194a8] (1 bytes) nullsub_750
// void nullsub_750();
// [0x17194b8] (1 bytes) nullsub_751
// void nullsub_751();
// [0x17194c8] (1 bytes) nullsub_752
// void nullsub_752();
// [0x17194d8] (1 bytes) nullsub_753
// void nullsub_753();
// [0x17194e8] (1 bytes) nullsub_754
// void nullsub_754();
// [0x17194f8] (1 bytes) nullsub_755
// void nullsub_755();
// [0x1719508] (1 bytes) nullsub_756
// void nullsub_756();
// [0x1719518] (1 bytes) nullsub_757
// void nullsub_757();
// [0x1719528] (1 bytes) nullsub_758
// void nullsub_758();
// [0x1719530] (23 bytes) sub_1719530
// uint16_t *sub_1719530(uint16_t *a1);
// [0x1719558] (1 bytes) nullsub_759
// void nullsub_759();
// [0x1719568] (1 bytes) nullsub_760
// void nullsub_760();
// [0x1719578] (1 bytes) nullsub_761
// void nullsub_761();
// [0x1719588] (1 bytes) nullsub_762
// void nullsub_762();
// [0x1719598] (1 bytes) nullsub_763
// void nullsub_763();
// [0x17195a8] (1 bytes) nullsub_764
// void nullsub_764();
// [0x17195b8] (1 bytes) nullsub_765
// void nullsub_765();
// [0x17195c8] (1 bytes) nullsub_766
// void nullsub_766();
// [0x17195d8] (1 bytes) nullsub_767
// void nullsub_767();
// [0x17195e8] (1 bytes) nullsub_768
// void nullsub_768();
// [0x17195f8] (1 bytes) nullsub_769
// void nullsub_769();
// [0x1719608] (1 bytes) nullsub_770
// void nullsub_770();
// [0x1719618] (1 bytes) nullsub_771
// void nullsub_771();
// [0x1719628] (1 bytes) nullsub_772
// void nullsub_772();
// [0x1719638] (1 bytes) nullsub_773
// void nullsub_773();
// [0x1719648] (1 bytes) nullsub_774
// void nullsub_774();
// [0x1719658] (1 bytes) nullsub_775
// void nullsub_775();
// [0x1719668] (1 bytes) nullsub_776
// void nullsub_776();
// [0x1719678] (1 bytes) nullsub_777
// void nullsub_777();
// [0x1719680] (19 bytes) sub_1719680
// int sub_1719680(int a1);
// [0x17196a8] (1 bytes) nullsub_778
// void nullsub_778();
// [0x17196b8] (1 bytes) nullsub_779
// void nullsub_779();
// [0x17196c8] (1 bytes) nullsub_780
// void nullsub_780();
// [0x17196d8] (1 bytes) nullsub_781
// void nullsub_781();
// [0x17196e8] (1 bytes) nullsub_782
// void nullsub_782();
// [0x17196f8] (1 bytes) nullsub_783
// void nullsub_783();
// [0x1719708] (1 bytes) nullsub_784
// void nullsub_784();
// [0x1719718] (1 bytes) nullsub_785
// void nullsub_785();
// [0x1719728] (1 bytes) nullsub_786
// void nullsub_786();
// [0x1719730] (19 bytes) sub_1719730
// int sub_1719730(int a1);
// [0x1719758] (1 bytes) nullsub_787
// void nullsub_787();
// [0x1719768] (1 bytes) nullsub_788
// void nullsub_788();
// [0x1719778] (1 bytes) nullsub_789
// void nullsub_789();
// [0x1719788] (1 bytes) nullsub_790
// void nullsub_790();
// [0x1719798] (1 bytes) nullsub_791
// void nullsub_791();
// [0x17197a8] (1 bytes) nullsub_792
// void nullsub_792();
// [0x17197b8] (1 bytes) nullsub_793
// void nullsub_793();
// [0x17197c8] (1 bytes) nullsub_794
// void nullsub_794();
// [0x17197d8] (1 bytes) nullsub_795
// void nullsub_795();
// [0x17197e8] (1 bytes) nullsub_796
// void nullsub_796();
// [0x17197f8] (1 bytes) nullsub_797
// void nullsub_797();
// [0x1719808] (1 bytes) nullsub_798
// void nullsub_798();
// [0x1719818] (1 bytes) nullsub_799
// void nullsub_799();
// [0x1719828] (1 bytes) nullsub_800
// void nullsub_800();
// [0x1719838] (1 bytes) nullsub_801
// void nullsub_801();
// [0x1719848] (1 bytes) nullsub_802
// void nullsub_802();
// [0x1719850] (32 bytes) sub_1719850
// uint32_t *sub_1719850(uint32_t *a1, int a2);
// [0x1719c10] (4934 bytes) sub_1719C10
// uint32_t *sub_1719C10();
// [0x171af68] (1 bytes) nullsub_803
// void nullsub_803();
// [0x171af70] (20 bytes) sub_171AF70
// int sub_171AF70(int (***a1)(uint32_t));
// [0x171af90] (45 bytes) sub_171AF90
// int sub_171AF90(int a1, int a2);
// [0x171afc0] (77 bytes) sub_171AFC0
// int sub_171AFC0(uint32_t *a1, int a2);
// [0x171b010] (87 bytes) sub_171B010
// void (**sub_171B010())(hkpLimitedHingeConstraintData *__hidden this);
// [0x171b0b0] (371 bytes) sub_171B0B0
// void (**sub_171B0B0())(hkpLimitedHingeConstraintData *__hidden this);
// [0x171b238] (1 bytes) nullsub_804
// void nullsub_804();
// [0x171b248] (1 bytes) nullsub_805
// void nullsub_805();
// [0x171b250] (20 bytes) sub_171B250
// int sub_171B250(int (***a1)(uint32_t));
// [0x171b270] (59 bytes) sub_171B270
// void (**sub_171B270(uint32_t *a1))(hkpHingeLimitsData *__hidden this);
// [0x171b2f0] (404 bytes) sub_171B2F0
// uint32_t *sub_171B2F0();
// [0x171b810] (146 bytes) sub_171B810
// void sub_171B810();
// [0x171bcf8] (1 bytes) nullsub_806
// void nullsub_806();
// [0x171bd00] (20 bytes) sub_171BD00
// int sub_171BD00(int (***a1)(uint32_t));
// [0x171bd20] (45 bytes) sub_171BD20
// int sub_171BD20(int a1, int a2);
// [0x171bd50] (102 bytes) sub_171BD50
// int sub_171BD50(int a1, int a2);
// [0x171be30] (54 bytes) sub_171BE30
// int sub_171BE30();
// [0x171beb0] (373 bytes) sub_171BEB0
// int sub_171BEB0();
// [0x171d870] (29 bytes) sub_171D870
// uint32_t *sub_171D870(uint32_t *a1);
// [0x171d890] (20 bytes) sub_171D890
// int sub_171D890(int (***a1)(uint32_t));
// [0x171d8d0] (202 bytes) sub_171D8D0
// uint32_t *sub_171D8D0();
// [0x171dd28] (1 bytes) nullsub_807
// void nullsub_807();
// [0x171dd30] (20 bytes) sub_171DD30
// int sub_171DD30(int (***a1)(uint32_t));
// [0x171dd50] (45 bytes) sub_171DD50
// int sub_171DD50(int a1, int a2);
// [0x171dd80] (77 bytes) sub_171DD80
// int sub_171DD80(uint32_t *a1, int a2);
// [0x171de10] (432 bytes) sub_171DE10
// uint32_t *sub_171DE10();
// [0x1728e08] (1 bytes) nullsub_808
// void nullsub_808();
// [0x1728e10] (29 bytes) sub_1728E10
// uint32_t *sub_1728E10(uint32_t *a1);
// [0x1728e30] (20 bytes) sub_1728E30
// int sub_1728E30(int (***a1)(uint32_t));
// [0x1728e58] (1 bytes) nullsub_809
// void nullsub_809();
// [0x1728e68] (1 bytes) nullsub_810
// void nullsub_810();
// [0x1728e78] (1 bytes) nullsub_811
// void nullsub_811();
// [0x1728e88] (1 bytes) nullsub_812
// void nullsub_812();
// [0x1728f90] (713 bytes) sub_1728F90
// uint32_t *sub_1728F90();
// [0x172ae70] (146 bytes) sub_172AE70
// void sub_172AE70();
// [0x172af10] (20 bytes) sub_172AF10
// int sub_172AF10(int (***a1)(uint32_t));
// [0x172af30] (149 bytes) sub_172AF30
// void (**sub_172AF30(uint32_t *a1, int a2))(hkpAabbPhantom *__hidden this);
// [0x172aff0] (231 bytes) sub_172AFF0
// uint32_t *sub_172AFF0();
// [0x172b100] (29 bytes) sub_172B100
// uint32_t *sub_172B100(uint32_t *a1);
// [0x172b120] (20 bytes) sub_172B120
// int sub_172B120(int (***a1)(uint32_t));
// [0x172b1e0] (326 bytes) sub_172B1E0
// void sub_172B1E0();
// [0x172b338] (1 bytes) nullsub_813
// void nullsub_813();
// [0x172b348] (1 bytes) nullsub_814
// void nullsub_814();
// [0x172b370] (210 bytes) sub_172B370
// uint32_t *sub_172B370();
// [0x172b458] (1 bytes) nullsub_815
// void nullsub_815();
// [0x172b460] (45 bytes) sub_172B460
// int sub_172B460(int a1, int a2);
// [0x172b4b0] (197 bytes) sub_172B4B0
// uint32_t *sub_172B4B0();
// [0x172b580] (20 bytes) sub_172B580
// int sub_172B580(int (***a1)(uint32_t));
// [0x172b5a0] (45 bytes) sub_172B5A0
// int sub_172B5A0(int a1);
// [0x172b5d0] (54 bytes) sub_172B5D0
// int sub_172B5D0();
// [0x172b630] (200 bytes) sub_172B630
// int sub_172B630();
// [0x172b708] (1 bytes) nullsub_816
// void nullsub_816();
// [0x172b710] (79 bytes) sub_172B710
// uint32_t *sub_172B710(uint32_t *a1);
// [0x172b760] (20 bytes) sub_172B760
// int sub_172B760(int (***a1)(uint32_t));
// [0x172b7c0] (371 bytes) sub_172B7C0
// uint32_t *sub_172B7C0();
// [0x172b940] (20 bytes) sub_172B940
// int sub_172B940(int (***a1)(uint32_t));
// [0x172b960] (45 bytes) sub_172B960
// int sub_172B960(hkpConstraintData *a1, int a2);
// [0x172b9b0] (225 bytes) sub_172B9B0
// uint32_t *sub_172B9B0();
// [0x172bb10] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::collidableRemovedCallback(hkpCollidableRemovedEvent const&)
// void `non-virtual thunk to'hkpBroadPhaseBorder::collidableRemovedCallback();
// [0x172bb20] (24 bytes) sub_172BB20
// bool sub_172BB20(int a1, int a2);
// [0x172bd40] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::collidableAddedCallback(hkpCollidableAddedEvent const&)
// int `non-virtual thunk to'hkpBroadPhaseBorder::collidableAddedCallback(int a1, int a2);
// [0x172be60] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder()
// void `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder(hkpBroadPhaseBorder *this);
// [0x172be70] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder()
// void `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder(hkpBroadPhaseBorder *this);
// [0x172be80] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder()
// void `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder(hkpBroadPhaseBorder *this);
// [0x172bef0] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder()
// void `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder(hkpBroadPhaseBorder *this);
// [0x172bf00] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder()
// void `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder(hkpBroadPhaseBorder *this);
// [0x172bf10] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder()
// void `non-virtual thunk to'hkpBroadPhaseBorder::~hkpBroadPhaseBorder(hkpBroadPhaseBorder *this);
// [0x172c080] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::worldDeletedCallback(hkpWorld *)
// int `non-virtual thunk to'hkpBroadPhaseBorder::worldDeletedCallback(hkpBroadPhaseBorder *this);
// [0x172c600] (284 bytes) void hkAlgorithm::quickSortRecursive<hkpEntity *,bool (*)(hkpEntity const*,hkpEntity const*)>(hkpEntity * *,int,int,bool (*)(hkpEntity const*,hkpEntity const*))
// hkpEntity **hkAlgorithm::quickSortRecursive<hkpEntity *,bool (*)(hkpEntity const*,hkpEntity const*)>(;
// [0x172c9e0] (10 bytes) `non-virtual thunk to'hkpBroadPhaseBorder::postSimulationCallback(hkpWorld *)
// hkpBroadPhaseBorder *`non-virtual thunk to'hkpBroadPhaseBorder::postSimulationCallback( hkpBroadPhaseBorder *this);
// [0x172c9f0] (20 bytes) sub_172C9F0
// int sub_172C9F0(int (***a1)(uint32_t));
// [0x172ca10] (45 bytes) sub_172CA10
// int sub_172CA10(int a1, int a2);
// [0x172ca60] (221 bytes) sub_172CA60
// uint32_t *sub_172CA60();
// [0x172cb48] (1 bytes) nullsub_817
// void nullsub_817();
// [0x172cb50] (20 bytes) sub_172CB50
// int sub_172CB50(int (***a1)(uint32_t));
// [0x172cb70] (59 bytes) sub_172CB70
// void (**sub_172CB70())(hkpSimpleShapePhantom *__hidden this);
// [0x172cbb0] (149 bytes) sub_172CBB0
// void (**sub_172CBB0(uint32_t *a1, int a2))(hkpSimpleShapePhantom *__hidden this);
// [0x172cc90] (367 bytes) sub_172CC90
// void (**sub_172CC90())(hkpSimpleShapePhantom *__hidden this);
// [0x172ce20] (29 bytes) sub_172CE20
// uint32_t *sub_172CE20(uint32_t *a1);
// [0x172ce40] (20 bytes) sub_172CE40
// int sub_172CE40(int (***a1)(uint32_t));
// [0x172cee0] (202 bytes) sub_172CEE0
// uint32_t *sub_172CEE0();
// [0x172d650] (55 bytes) sub_172D650
// int sub_172D650(int a1, int a2);
// [0x172d690] (20 bytes) sub_172D690
// int sub_172D690(int (***a1)(uint32_t));
// [0x172d6b0] (55 bytes) sub_172D6B0
// int sub_172D6B0(int a1, int a2);
// [0x172d6f0] (20 bytes) sub_172D6F0
// int sub_172D6F0(int (***a1)(uint32_t));
// [0x172d7f0] (372 bytes) sub_172D7F0
// uint32_t *sub_172D7F0();
// [0x172d970] (29 bytes) sub_172D970
// uint32_t *sub_172D970(uint32_t *a1);
// [0x172d990] (20 bytes) sub_172D990
// int sub_172D990(int (***a1)(uint32_t));
// [0x172d9d0] (215 bytes) sub_172D9D0
// uint32_t *sub_172D9D0();
// [0x172dab0] (20 bytes) sub_172DAB0
// int sub_172DAB0(int (***a1)(uint32_t));
// [0x172dad0] (45 bytes) sub_172DAD0
// int sub_172DAD0(int a1, int a2);
// [0x172db00] (54 bytes) sub_172DB00
// int sub_172DB00();
// [0x172db60] (196 bytes) sub_172DB60
// int sub_172DB60();
// [0x172dc30] (20 bytes) sub_172DC30
// int sub_172DC30(int (***a1)(uint32_t));
// [0x172dc50] (45 bytes) sub_172DC50
// int sub_172DC50(int a1, int a2);
// [0x172dca0] (221 bytes) sub_172DCA0
// uint32_t *sub_172DCA0();
// [0x172f170] (20 bytes) sub_172F170
// int sub_172F170(int (***a1)(uint32_t));
// [0x172f190] (45 bytes) sub_172F190
// int sub_172F190(hkpConstraintData *a1, int a2);
// [0x172f1e0] (223 bytes) sub_172F1E0
// uint32_t *sub_172F1E0();
// [0x172f2e0] (162 bytes) sub_172F2E0
// void sub_172F2E0();
// [0x172f3b0] (153 bytes) sub_172F3B0
// void sub_172F3B0();
// [0x1730580] (55 bytes) sub_1730580
// int sub_1730580(int a1, int a2);
// [0x17305c0] (20 bytes) sub_17305C0
// int sub_17305C0(int (***a1)(uint32_t));
// [0x1730600] (200 bytes) sub_1730600
// uint32_t *sub_1730600();
// [0x1730700] (20 bytes) sub_1730700
// int sub_1730700(int (***a1)(uint32_t));
// [0x1730720] (69 bytes) sub_1730720
// void (**sub_1730720(uint32_t *a1))(hkpConstraintChainInstanceAction *__hidden this);
// [0x1730770] (118 bytes) sub_1730770
// int sub_1730770(int a1);
// [0x1730810] (241 bytes) sub_1730810
// uint32_t *sub_1730810();
// [0x1730910] (20 bytes) sub_1730910
// int sub_1730910(int (***a1)(uint32_t));
// [0x1730930] (45 bytes) sub_1730930
// int sub_1730930(hkpConstraintData *a1, int a2);
// [0x1730980] (226 bytes) sub_1730980
// uint32_t *sub_1730980();
// [0x1730a90] (146 bytes) sub_1730A90
// void sub_1730A90();
// [0x1730bb0] (91 bytes) sub_1730BB0
// uint32_t *sub_1730BB0(uint32_t *a1);
// [0x1730c10] (20 bytes) sub_1730C10
// int sub_1730C10(int (***a1)(uint32_t));
// [0x1730ca0] (200 bytes) sub_1730CA0
// uint32_t *sub_1730CA0();
// [0x1730d78] (1 bytes) nullsub_818
// void nullsub_818();
// [0x1730d80] (20 bytes) sub_1730D80
// int sub_1730D80(int (***a1)(uint32_t));
// [0x1730da0] (45 bytes) sub_1730DA0
// uint32_t *sub_1730DA0(uint32_t *a1);
// [0x1730e30] (516 bytes) sub_1730E30
// void sub_1730E30();
// [0x1731060] (244 bytes) sub_1731060
// void sub_1731060();
// [0x1731388] (1 bytes) nullsub_819
// void nullsub_819();
// [0x1731390] (45 bytes) sub_1731390
// int sub_1731390(int a1, int a2);
// [0x17313c0] (252 bytes) sub_17313C0
// int sub_17313C0(uint32_t *a1);
// [0x1731500] (364 bytes) sub_1731500
// uint32_t *sub_1731500();
// [0x1731700] (343 bytes) sub_1731700
// int sub_1731700(int a1, int a2, int a3, int a4);
// [0x1733120] (150 bytes) sub_1733120
// void sub_1733120();
// [0x17332f0] (250 bytes) sub_17332F0
// char *sub_17332F0(char *a1, uint32_t *a2, hkpPhysicsSystem *a3);
// [0x1733520] (325 bytes) sub_1733520
// int sub_1733520(int a1);
// [0x1735010] (205 bytes) sub_1735010
// int sub_1735010(hkpWorld *a1, hkpPhysicsSystem *a2);
// [0x173cd50] (215 bytes) void hkpWorldExtension::requireExtension<hkpCollisionCallbackUtil>(hkpWorld *)
// void hkpWorldExtension::requireExtension<hkpCollisionCallbackUtil>(hkpWorldExtension *this);
// [0x173ce30] (23 bytes) sub_173CE30
// uint8_t *sub_173CE30();
// [0x1740690] (30 bytes) sub_1740690
// bool *sub_1740690(bool *a1, int a2, int a3);
// [0x17406b0] (82 bytes) sub_17406B0
// uint8_t *sub_17406B0(uint8_t *a1, int a2, int a3);
// [0x1743ee0] (327 bytes) void hkAlgorithm::quickSortRecursive<hkpConstraintInstance *,hkBool (*)(hkpConstraintInstance const*,hkpConstraintInstance const*)>(hkpConstraintInstance * *,int,int,hkBool (*)(hkpConstraintInstance const*,hkpConstraintInstance const*))
// int hkAlgorithm::quickSortRecursive<hkpConstraintInstance *,hkBool (*)(hkpConstraintInstance const*,hkpConstraintInstance const*)>(;
// [0x1744030] (327 bytes) void hkAlgorithm::quickSortRecursive<hkpEntity *,hkBool (*)(hkpEntity const*,hkpEntity const*)>(hkpEntity * *,int,int,hkBool (*)(hkpEntity const*,hkpEntity const*))
// int hkAlgorithm::quickSortRecursive<hkpEntity *,hkBool (*)(hkpEntity const*,hkpEntity const*)>(;
// [0x17441e0] (66 bytes) sub_17441E0
// void sub_17441E0();
