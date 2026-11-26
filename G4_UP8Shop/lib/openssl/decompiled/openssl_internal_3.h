#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_internal_3.h
// Library: openssl | Module: openssl_internal_3
// Binary Address Span: 0x1ace420 .. 0x1b12ee0 (91 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1ace420] (460 bytes) void hkAlgorithm::quickSortRecursive<hkGeomConvexHullBuilder::WeightedLine,hkBool (*)(hkGeomConvexHullBuilder::WeightedLine const&,hkGeomConvexHullBuilder::WeightedLine const&)>(hkGeomConvexHullBuilder::WeightedLine *,int,int,hkBool (*)(hkGeomConvexHullBuilder::WeightedLine const&,hkGeomConvexHullBuilder::WeightedLine const&))
// int hkAlgorithm::quickSortRecursive<hkGeomConvexHullBuilder::WeightedLine,hkBool (*)(hkGeomConvexHullBuilder::WeightedLine const&,hkGeomConvexHullBuilder::WeightedLine const&)>(;
// [0x1ace5f0] (353 bytes) void hkAlgorithm::quickSortRecursive<hkGeomConvexHullBuilder::WeightedNeighbour,hkBool (*)(hkGeomConvexHullBuilder::WeightedNeighbour const&,hkGeomConvexHullBuilder::WeightedNeighbour const&)>(hkGeomConvexHullBuilder::WeightedNeighbour *,int,int,hkBool (*)(hkGeomConvexHullBuilder::WeightedNeighbour const&,hkGeomConvexHullBuilder::WeightedNeighbour const&))
// int hkAlgorithm::quickSortRecursive<hkGeomConvexHullBuilder::WeightedNeighbour,hkBool (*)(hkGeomConvexHullBuilder::WeightedNeighbour const&,hkGeomConvexHullBuilder::WeightedNeighbour const&)>(;
// [0x1ace760] (528 bytes) sub_1ACE760
// int sub_1ACE760(int a1, int a2);
// [0x1ad19f0] (23 bytes) sub_1AD19F0
// void sub_1AD19F0();
// [0x1ad3c60] (20 bytes) sub_1AD3C60
// int sub_1AD3C60(int (***a1)(uint32_t));
// [0x1ad3c80] (45 bytes) sub_1AD3C80
// int sub_1AD3C80(int a1, int a2);
// [0x1ad3cd0] (223 bytes) sub_1AD3CD0
// uint32_t *sub_1AD3CD0();
// [0x1ad3db0] (20 bytes) sub_1AD3DB0
// int sub_1AD3DB0(int (***a1)(uint32_t));
// [0x1ad3dd0] (20 bytes) sub_1AD3DD0
// int sub_1AD3DD0(int (***a1)(uint32_t));
// [0x1ad3df0] (45 bytes) sub_1AD3DF0
// int sub_1AD3DF0(int a1, int a2);
// [0x1ad3e20] (45 bytes) sub_1AD3E20
// int sub_1AD3E20(int a1);
// [0x1ad3e90] (417 bytes) sub_1AD3E90
// uint32_t *sub_1AD3E90();
// [0x1ad4050] (10 bytes) `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getFirstKey(void)const
// int `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getFirstKey();
// [0x1ad40e0] (10 bytes) `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getCollisionFilterInfo(unsigned int)const
// int `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getCollisionFilterInfo();
// [0x1ad4140] (10 bytes) `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getNextKey(unsigned int)const
// unsigned int `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getNextKey( hkpTriSampledHeightFieldCollection *this, unsigned int a2);
// [0x1ad4220] (10 bytes) `non-virtual thunk to'hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection()
// void `non-virtual thunk to'hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection( hkpTriSampledHeightFieldCollection *this);
// [0x1ad4290] (10 bytes) `non-virtual thunk to'hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection()
// void `non-virtual thunk to'hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection( hkpTriSampledHeightFieldCollection *this);
// [0x1ad4770] (10 bytes) `non-virtual thunk to'hkpTriSampledHeightFieldCollection::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// uint32_t *`non-virtual thunk to'hkpTriSampledHeightFieldCollection::getChildShape( int a1, unsigned int a2, int a3);
// [0x1ad4930] (27 bytes) operator<(hkEntry const&,hkEntry const&)
// bool *operator<(bool *a1, int a2, int a3);
// [0x1ad4950] (63 bytes) operator!=(hkEntry const&,hkEntry const&)
// bool *operator!=(bool *a1, int a2, int a3);
// [0x1ad63d0] (396 bytes) void hkAlgorithm::quickSortRecursive<hkEntry,hkAlgorithm::less<hkEntry>>(hkEntry *,int,int,hkAlgorithm::less<hkEntry>)
// int hkAlgorithm::quickSortRecursive<hkEntry,hkAlgorithm::less<hkEntry>>(int a1, int a2, int a3);
// [0x1adc240] (64 bytes) hasDifferentMaterials(hkGeometry const&)
// int hasDifferentMaterials(const hkGeometry *a1);
// [0x1add8f0] (323 bytes) addVertex(hkGeometry &,hkVector4f const&)
// int addVertex(hkGeometry *a1, const hkVector4f *a2);
// [0x1ae2180] (1189 bytes) projectOnEdge(hkVector4f &,hkVector4f const&,hkVector4f const&)
// void projectOnEdge(hkVector4f *a1, const hkVector4f *a2, const hkVector4f *a3);
// [0x1ae6be0] (96 bytes) sub_1AE6BE0
// int sub_1AE6BE0(int a1, int a2, int a3);
// [0x1ae6e70] (29 bytes) sub_1AE6E70
// uint32_t *sub_1AE6E70(uint32_t *a1);
// [0x1ae6e90] (29 bytes) sub_1AE6E90
// uint32_t *sub_1AE6E90(uint32_t *a1);
// [0x1ae6eb0] (45 bytes) sub_1AE6EB0
// void sub_1AE6EB0(uint32_t *a1);
// [0x1ae6ee0] (45 bytes) sub_1AE6EE0
// void sub_1AE6EE0(uint32_t *a1);
// [0x1ae7050] (286 bytes) sub_1AE7050
// int sub_1AE7050(int a1, int a2, int a3);
// [0x1ae7a40] (179 bytes) equalVertices(hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&)
// char equalVertices(float *a1, float *a2, float *a3);
// [0x1ae8f18] (1 bytes) nullsub_883
// void nullsub_883();
// [0x1ae8f20] (20 bytes) sub_1AE8F20
// int sub_1AE8F20(int (***a1)(uint32_t));
// [0x1ae8f40] (82 bytes) sub_1AE8F40
// int sub_1AE8F40(uint32_t *a1);
// [0x1ae8fa0] (45 bytes) sub_1AE8FA0
// void (**sub_1AE8FA0(int a1, int a2))(hkpSampledHeightFieldShape *__hidden this);
// [0x1ae9010] (415 bytes) sub_1AE9010
// uint32_t *sub_1AE9010();
// [0x1ae9ec0] (10 bytes) `non-virtual thunk to'hkpStorageMeshShape::~hkpStorageMeshShape()
// void `non-virtual thunk to'hkpStorageMeshShape::~hkpStorageMeshShape(hkpStorageMeshShape *this);
// [0x1ae9f30] (10 bytes) `non-virtual thunk to'hkpStorageMeshShape::~hkpStorageMeshShape()
// void `non-virtual thunk to'hkpStorageMeshShape::~hkpStorageMeshShape(hkpStorageMeshShape *this);
// [0x1aeb4f8] (1 bytes) nullsub_884
// void nullsub_884();
// [0x1aeb500] (20 bytes) sub_1AEB500
// int sub_1AEB500(int (***a1)(uint32_t));
// [0x1aeb520] (45 bytes) sub_1AEB520
// int sub_1AEB520(int a1, int a2);
// [0x1aeb590] (440 bytes) sub_1AEB590
// uint32_t *sub_1AEB590();
// [0x1aeb9b0] (10 bytes) `non-virtual thunk to'hkpMeshShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// int `non-virtual thunk to'hkpMeshShape::getChildShape(int a1, unsigned int a2, int a3);
// [0x1aeba20] (10 bytes) `non-virtual thunk to'hkpMeshShape::getCollisionFilterInfo(unsigned int)const
// int `non-virtual thunk to'hkpMeshShape::getCollisionFilterInfo(hkpMeshShape *this, unsigned int a2);
// [0x1aebcb0] (10 bytes) `non-virtual thunk to'hkpMeshShape::getNextKey(unsigned int)const
// int `non-virtual thunk to'hkpMeshShape::getNextKey(hkpMeshShape *this, unsigned int a2);
// [0x1aebe90] (10 bytes) `non-virtual thunk to'hkpMeshShape::getFirstKey(void)const
// int `non-virtual thunk to'hkpMeshShape::getFirstKey(hkpMeshShape *this);
// [0x1aebf60] (10 bytes) `non-virtual thunk to'hkpMeshShape::~hkpMeshShape()
// void `non-virtual thunk to'hkpMeshShape::~hkpMeshShape(hkpMeshShape *this);
// [0x1aec070] (10 bytes) `non-virtual thunk to'hkpMeshShape::~hkpMeshShape()
// void `non-virtual thunk to'hkpMeshShape::~hkpMeshShape(hkpMeshShape *this);
// [0x1aecc50] (10 bytes) `non-virtual thunk to'hkpSimpleMeshShape::getChildShape(unsigned int,hkpShapeBufferStorage &)const
// int `non-virtual thunk to'hkpSimpleMeshShape::getChildShape(int a1, int a2, int a3);
// [0x1aecd50] (10 bytes) `non-virtual thunk to'hkpSimpleMeshShape::~hkpSimpleMeshShape()
// void `non-virtual thunk to'hkpSimpleMeshShape::~hkpSimpleMeshShape(hkpSimpleMeshShape *this);
// [0x1aece10] (10 bytes) `non-virtual thunk to'hkpSimpleMeshShape::getFirstKey(void)const
// int `non-virtual thunk to'hkpSimpleMeshShape::getFirstKey(hkpSimpleMeshShape *this);
// [0x1aecef0] (10 bytes) `non-virtual thunk to'hkpSimpleMeshShape::getNextKey(unsigned int)const
// int `non-virtual thunk to'hkpSimpleMeshShape::getNextKey(hkpSimpleMeshShape *this, unsigned int a2);
// [0x1aed030] (10 bytes) `non-virtual thunk to'hkpSimpleMeshShape::~hkpSimpleMeshShape()
// void `non-virtual thunk to'hkpSimpleMeshShape::~hkpSimpleMeshShape(hkpSimpleMeshShape *this);
// [0x1aed150] (144 bytes) sub_1AED150
// void sub_1AED150();
// [0x1aed1f0] (10 bytes) `non-virtual thunk to'hkpNullBroadPhaseListener::addCollisionPair(hkpTypedBroadPhaseHandlePair &)
// void `non-virtual thunk to'hkpNullBroadPhaseListener::addCollisionPair();
// [0x1aed210] (10 bytes) `non-virtual thunk to'hkpNullBroadPhaseListener::removeCollisionPair(hkpTypedBroadPhaseHandlePair &)
// void `non-virtual thunk to'hkpNullBroadPhaseListener::removeCollisionPair();
// [0x1aed250] (10 bytes) `non-virtual thunk to'hkpNullBroadPhaseListener::~hkpNullBroadPhaseListener()
// void `non-virtual thunk to'hkpNullBroadPhaseListener::~hkpNullBroadPhaseListener( hkpNullBroadPhaseListener *this);
// [0x1aed2d0] (7 bytes) `non-virtual thunk to'hkpNullBroadPhaseListener::~hkpNullBroadPhaseListener()
// void `non-virtual thunk to'hkpNullBroadPhaseListener::~hkpNullBroadPhaseListener( hkpNullBroadPhaseListener *this);
// [0x1afa5b0] (23 bytes) sub_1AFA5B0
// void sub_1AFA5B0();
// [0x1afed40] (4706 bytes) sub_1AFED40
// int sub_1AFED40(int a1, float *a2, float a3, uint32_t *a4, int a5, float *a6);
// [0x1afffb0] (43 bytes) buildConstraintMatrixLuDecompositionForBallAndSocketChain_outOfLine(int,float,hkp1Lin2AngJacobian *,hkpVelocityAccumulatorOffset *,hkpVelocityAccumulator const*,hkpConstraintChainMatrixTriple *,int)
// int buildConstraintMatrixLuDecompositionForBallAndSocketChain_outOfLine( int a1, float a2, float *a3, uint32_t *a4, int a5, float *a6);
// [0x1b02d48] (1 bytes) nullsub_885
// void nullsub_885();
// [0x1b02d50] (20 bytes) sub_1B02D50
// int sub_1B02D50(int (***a1)(uint32_t));
// [0x1b02d70] (45 bytes) sub_1B02D70
// int sub_1B02D70(hkpConstraintData *a1, int a2);
// [0x1b02de0] (397 bytes) sub_1B02DE0
// uint32_t *sub_1B02DE0();
// [0x1b06440] (711 bytes) sub_1B06440
// int sub_1B06440(uint32_t *a1, uint32_t *a2, hkpMoppCodeGenerator *a3, uint32_t *a4);
// [0x1b0c750] (6197 bytes) sub_1B0C750
// 0x1b0c750 sub_1B0C750
// [0x1b0ec50] (349 bytes) void hkAlgorithm::quickSortRecursive<hkpMoppCompilerPrimitive,hkAlgorithm::less<hkpMoppCompilerPrimitive>>(hkpMoppCompilerPrimitive *,int,int,hkAlgorithm::less<hkpMoppCompilerPrimitive>)
// int hkAlgorithm::quickSortRecursive<hkpMoppCompilerPrimitive,hkAlgorithm::less<hkpMoppCompilerPrimitive>>( int a1, int a2, int a3);
// [0x1b10210] (186 bytes) sub_1B10210
// void (__noreturn **sub_1B10210(std::exception *a1))();
// [0x1b102d0] (18 bytes) sub_1B102D0
// void (__noreturn **sub_1B102D0(std::exception *a1))();
// [0x1b102f0] (10 bytes) sub_1B102F0
// void (__noreturn **sub_1B102F0(int a1))();
// [0x1b103d0] (193 bytes) sub_1B103D0
// void sub_1B103D0(std::exception *a1);
// [0x1b104a0] (18 bytes) sub_1B104A0
// void sub_1B104A0(std::exception *a1);
// [0x1b104c0] (10 bytes) sub_1B104C0
// void sub_1B104C0(int a1);
// [0x1b104d0] (274 bytes) sub_1B104D0
// void __noreturn sub_1B104D0(int a1);
// [0x1b105f0] (18 bytes) sub_1B105F0
// void __noreturn sub_1B105F0(uint32_t *a1);
// [0x1b10610] (183 bytes) sub_1B10610
// uint32_t *sub_1B10610(uint32_t *a1, int a2, int a3, char *a4);
// [0x1b106d0] (84 bytes) sub_1B106D0
// uint32_t *sub_1B106D0(uint32_t *a1);
// [0x1b10730] (59 bytes) sub_1B10730
// int64_t sub_1B10730(uint64_t *a1);
// [0x1b10790] (84 bytes) sub_1B10790
// uint32_t *sub_1B10790(uint32_t *a1);
// [0x1b107f0] (788 bytes) sub_1B107F0
// void __noreturn sub_1B107F0(int a1);
// [0x1b10b10] (233 bytes) sub_1B10B10
// uint32_t *sub_1B10B10(uint32_t *a1, uint32_t *a2);
// [0x1b10c00] (233 bytes) sub_1B10C00
// uint32_t *sub_1B10C00(uint32_t *a1, uint32_t *a2);
// [0x1b10cf0] (509 bytes) sub_1B10CF0
// int sub_1B10CF0(int a1);
// [0x1b10ef0] (18 bytes) sub_1B10EF0
// int sub_1B10EF0(uint32_t *a1);
// [0x1b10f10] (66 bytes) sub_1B10F10
// int sub_1B10F10();
// [0x1b10f60] (77 bytes) SSLeay_version
// const char *SSLeay_version(int a1);
// [0x1b10fb0] (12 bytes) SSLeay
// int SSLeay();
// [0x1b10fc0] (629 bytes) sub_1B10FC0
// int sub_1B10FC0(const void *a1, int a2, uint32_t *a3);
// [0x1b11aa0] (631 bytes) sub_1B11AA0
// int sub_1B11AA0(int *a1, char *a2, int *a3, int *a4);
// [0x1b12ee0] (98 bytes) OPENSSL_issetugid
// bool OPENSSL_issetugid();
