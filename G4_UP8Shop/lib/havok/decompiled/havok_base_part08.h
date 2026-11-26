#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_base_part08.h
// Library: havok | Module: havok_base_part08
// Binary Address Span: 0x1a83910 .. 0x1ad52d0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1a83910] (970 bytes) hk1AxisSweep::collide(hk1AxisSweep::AabbInt const*,int,hkArray<hkKeyPair,hkContainerHeapAllocator> &)
// uint32_t *hk1AxisSweep::collide(int a1, int a2, hkMemoryAllocator *a3);
// [0x1a83ce0] (831 bytes) hk1AxisSweep::sortAabbs(hk1AxisSweep::AabbInt *,int)
// int hk1AxisSweep::sortAabbs(hk1AxisSweep *this, int a2);
// [0x1a84020] (403 bytes) hk1AxisSweep::sortAabbs(hk1AxisSweep::AabbInt *,int,hkArrayBase<hkRadixSort::SortData32> &,hkArrayBase<hk1AxisSweep::AabbInt> &)
// __m128i *hk1AxisSweep::sortAabbs(__m128i *a1, int a2, uint8_t **a3, uint8_t **a4);
// [0x1a841c0] (151 bytes) hk1AxisSweep::AabbInt::set(hkAabb const&,int)
// hk1AxisSweep::AabbInt *hk1AxisSweep::AabbInt::set(hk1AxisSweep::AabbInt *this, const hkAabb *a2, int a3);
// [0x1a842a0] (992 bytes) hkTrackerScanSnapshot::hkTrackerScanSnapshot(hkTrackerSnapshot const*,hkTrackerLayoutCalculator *)
// void hkTrackerScanSnapshot::hkTrackerScanSnapshot( hkTrackerScanSnapshot *this, const hkTrackerSnapshot *a2, hkTrackerLayoutCalculator *a3);
// [0x1a84680] (309 bytes) hkTrackerScanSnapshot::hkTrackerScanSnapshot(void)
// void hkTrackerScanSnapshot::hkTrackerScanSnapshot(hkTrackerScanSnapshot *this);
// [0x1a847c0] (76 bytes) hkTrackerScanSnapshot::getTraceText(unsigned long)const
// int hkTrackerScanSnapshot::getTraceText(hkTrackerScanSnapshot *this, unsigned int a2);
// [0x1a84810] (299 bytes) hkTrackerScanSnapshot::setTraceText(unsigned long,char const*)
// signed int hkTrackerScanSnapshot::setTraceText(hkTrackerScanSnapshot *this, unsigned int a2, hkString *a3);
// [0x1a84940] (174 bytes) hkTrackerScanSnapshot::clear(void)
// int hkTrackerScanSnapshot::clear(hkTrackerScanSnapshot *this);
// [0x1a849f0] (533 bytes) hkTrackerScanSnapshot::~hkTrackerScanSnapshot()
// void hkTrackerScanSnapshot::~hkTrackerScanSnapshot(hkTrackerScanSnapshot *this);
// [0x1a84c10] (93 bytes) hkTrackerScanSnapshot::~hkTrackerScanSnapshot()
// void hkTrackerScanSnapshot::~hkTrackerScanSnapshot(hkTrackerScanSnapshot *this);
// [0x1a84c70] (250 bytes) hkTrackerScanSnapshot::addBlock(hkTrackerTypeTreeNode const*,void const*,unsigned int)
// uint32_t *hkTrackerScanSnapshot::addBlock( hkTrackerScanSnapshot *this, const hkTrackerTypeTreeNode *a2, const void *a3, unsigned int a4);
// [0x1a84d70] (98 bytes) hkTrackerScanSnapshot::findBlock(void const*)const
// unsigned int hkTrackerScanSnapshot::findBlock(hkTrackerScanSnapshot *this, const void *a2);
// [0x1a84de0] (27 bytes) hkTrackerScanSnapshot::getMemorySystemStatistics(void)const
// int hkTrackerScanSnapshot::getMemorySystemStatistics(hkTrackerScanSnapshot *this);
// [0x1a84e00] (109 bytes) hkTrackerScanSnapshot::calcOrderedTotalUsed(hkTrackerScanSnapshot::Block const* const*,int)
// int hkTrackerScanSnapshot::calcOrderedTotalUsed(int a1, int a2);
// [0x1a84e70] (44 bytes) hkTrackerScanSnapshot::calcTotalUsed(void)const
// int hkTrackerScanSnapshot::calcTotalUsed(hkTrackerScanSnapshot *this);
// [0x1a84ea0] (267 bytes) hkTrackerScanSnapshot::findBlocksByType(char const*,hkArray<hkTrackerScanSnapshot::Block *,hkContainerHeapAllocator> &)const
// hkMemoryAllocator *hkTrackerScanSnapshot::findBlocksByType(int a1, int a2, hkMemoryAllocator *a3);
// [0x1a84fb0] (51 bytes) hkTrackerScanSnapshot::findReferenceIndex(hkTrackerScanSnapshot::Block const*,hkTrackerScanSnapshot::Block const*)const
// int hkTrackerScanSnapshot::findReferenceIndex(int a1, int a2, int a3);
// [0x1a85140] (679 bytes) hkTrackerScanSnapshot::orderBlocks(void)
// int hkTrackerScanSnapshot::orderBlocks(hkTrackerScanSnapshot *this);
// [0x1a85540] (670 bytes) hkTrackerScanSnapshot::orderBlocks(hkTrackerScanSnapshot::Block const**,int)
// int hkTrackerScanSnapshot::orderBlocks(int a1, int a2);
// [0x1a857e0] (230 bytes) hkTrackerScanSnapshot::calcTotalUsed(hkTrackerScanSnapshot::Block const* const*,int)
// int hkTrackerScanSnapshot::calcTotalUsed(void *a1, int a2);
// [0x1a858d0] (122 bytes) hkIArchive::~hkIArchive()
// void hkIArchive::~hkIArchive(hkIArchive *this);
// [0x1a85950] (93 bytes) hkIArchive::~hkIArchive()
// void hkIArchive::~hkIArchive(hkIArchive *this);
// [0x1a859b0] (115 bytes) hkIArchive::hkIArchive(hkStreamReader *,hkBool)
// int hkIArchive::hkIArchive(int a1, int a2, uint8_t a3);
// [0x1a85a30] (195 bytes) hkIArchive::hkIArchive(char const*,hkBool)
// int hkIArchive::hkIArchive(int a1, int a2, char a3);
// [0x1a85b00] (220 bytes) hkIArchive::hkIArchive(void const*,int,hkBool)
// int hkIArchive::hkIArchive(int a1, void *a2, size_t a3, char a4);
// [0x1a85be0] (2511 bytes) hkIArchive::readArrayGeneric(void *,int,int)
// __m128i *hkIArchive::readArrayGeneric(hkIArchive *this, __m128i *a2, int a3, int a4);
// [0x1a865b0] (109 bytes) hkIArchive::readArrayFloat32(double *,int)
// double *hkIArchive::readArrayFloat32(hkIArchive *this, double *a2, double *a3);
// [0x1a86620] (40 bytes) hkIArchive::readRaw(void *,int)
// int hkIArchive::readRaw(hkIArchive *this, void *a2, int a3);
// [0x1a86650] (74 bytes) hkIArchive::isOk(void)const
// hkIArchive *hkIArchive::isOk(hkIArchive *this, int a2);
// [0x1a866a0] (12 bytes) hkIArchive::getStreamReader(void)
// int hkIArchive::getStreamReader(hkIArchive *this);
// [0x1a866b0] (147 bytes) hkIArchive::setStreamReader(hkStreamReader *)
// int hkIArchive::setStreamReader(hkIArchive *this, hkStreamReader *a2);
// [0x1a86810] (10 bytes) hkOffsetOnlyStreamWriter::isOk(void)const
// hkOffsetOnlyStreamWriter *hkOffsetOnlyStreamWriter::isOk(hkOffsetOnlyStreamWriter *this);
// [0x1a86820] (30 bytes) hkOffsetOnlyStreamWriter::write(void const*,int)
// int hkOffsetOnlyStreamWriter::write(hkOffsetOnlyStreamWriter *this, const void *a2, int a3);
// [0x1a86840] (10 bytes) hkOffsetOnlyStreamWriter::seekTellSupported(void)const
// hkOffsetOnlyStreamWriter *hkOffsetOnlyStreamWriter::seekTellSupported(hkOffsetOnlyStreamWriter *this);
// [0x1a86850] (103 bytes) hkOffsetOnlyStreamWriter::seek(int,hkStreamWriter::SeekWhence)
// int64_t hkOffsetOnlyStreamWriter::seek@<edx:eax>(int64_t a1, int a2, int a3);
// [0x1a868c0] (12 bytes) hkOffsetOnlyStreamWriter::tell(void)const
// int hkOffsetOnlyStreamWriter::tell(hkOffsetOnlyStreamWriter *this);
// [0x1a868d0] (29 bytes) hkOffsetOnlyStreamWriter::~hkOffsetOnlyStreamWriter()
// void hkOffsetOnlyStreamWriter::~hkOffsetOnlyStreamWriter(hkOffsetOnlyStreamWriter *this);
// [0x1a868f0] (96 bytes) hkOffsetOnlyStreamWriter::~hkOffsetOnlyStreamWriter()
// void hkOffsetOnlyStreamWriter::~hkOffsetOnlyStreamWriter(hkOffsetOnlyStreamWriter *this);
// [0x1a86950] (48 bytes) hkOffsetOnlyStreamWriter::hkOffsetOnlyStreamWriter(void)
// void hkOffsetOnlyStreamWriter::hkOffsetOnlyStreamWriter(hkOffsetOnlyStreamWriter *this);
// [0x1a86a50] (122 bytes) hkIstream::~hkIstream()
// void hkIstream::~hkIstream(hkIstream *this);
// [0x1a86ad0] (93 bytes) hkIstream::~hkIstream()
// void hkIstream::~hkIstream(hkIstream *this);
// [0x1a86fc0] (99 bytes) hkIstream::hkIstream(hkStreamReader *)
// void hkIstream::hkIstream(hkIstream *this, hkStreamReader *a2);
// [0x1a87030] (187 bytes) hkIstream::hkIstream(char const*)
// void hkIstream::hkIstream(hkIstream *this, const char *a2);
// [0x1a870f0] (212 bytes) hkIstream::hkIstream(void const*,int)
// void hkIstream::hkIstream(hkIstream *this, void *a2, size_t a3);
// [0x1a871d0] (212 bytes) hkIstream::hkIstream(hkMemoryTrack const*)
// void hkIstream::hkIstream(hkIstream *this, const hkMemoryTrack *a2);
// [0x1a872b0] (55 bytes) hkIstream::isOk(void)const
// hkIstream *hkIstream::isOk(hkIstream *this, int a2);
// [0x1a872f0] (475 bytes) hkIstream::operator>>(hkBool &)
// int hkIstream::operator>>(int a1, uint8_t *a2);
// [0x1a874d0] (44 bytes) hkIstream::operator>>(char &)
// hkIstream *hkIstream::operator>>(hkIstream *this, char *a2);
// [0x1a87500] (48 bytes) hkIstream::operator>>(short &)
// hkIstream *hkIstream::operator>>(hkIstream *this, int16_t *a2);
// [0x1a87530] (48 bytes) hkIstream::operator>>(unsigned short &)
// hkIstream *hkIstream::operator>>(hkIstream *this, uint16_t *a2);
// [0x1a87560] (47 bytes) hkIstream::operator>>(int &)
// hkIstream *hkIstream::operator>>(hkIstream *this, int *a2);
// [0x1a87590] (47 bytes) hkIstream::operator>>(unsigned int &)
// hkIstream *hkIstream::operator>>(hkIstream *this, unsigned int *a2);
// [0x1a875c0] (33 bytes) hkIstream::operator>>(float &)
// 0x1a875c0 hkIstream::operator>>(float &)
// [0x1a875f0] (37 bytes) hkIstream::operator>>(double &)
// 0x1a875f0 hkIstream::operator>>(double &)
// [0x1a87620] (52 bytes) hkIstream::operator>>(long long &)
// hkIstream *hkIstream::operator>>(hkIstream *this, int64_t *a2);
// [0x1a87660] (52 bytes) hkIstream::operator>>(unsigned long long &)
// hkIstream *hkIstream::operator>>(hkIstream *this, uint64_t *a2);
// [0x1a876a0] (1707 bytes) hkIstream::operator>>(hkStringBuf &)
// hkIstream *hkIstream::operator>>(hkIstream *this, hkStringBuf *a2);
// [0x1a87d50] (149 bytes) hkIstream::operator>>(hkStringPtr &)
// hkIstream *hkIstream::operator>>(hkIstream *this, hkStringPtr *a2);
// [0x1a87df0] (458 bytes) hkIstream::getline(char *,int,char)
// int hkIstream::getline(hkIstream *this, char *a2, int a3, char a4);
// [0x1a87fc0] (40 bytes) hkIstream::read(void *,int)
// int hkIstream::read(hkIstream *this, void *a2, int a3);
// [0x1a87ff0] (147 bytes) hkIstream::setStreamReader(hkStreamReader *)
// int hkIstream::setStreamReader(hkIstream *this, hkStreamReader *a2);
// [0x1a88090] (725 bytes) hkFourTransposedPointsf::setTransformedInverseDir(hkMatrix3f const&,hkFourTransposedPointsf const&)
// hkFourTransposedPointsf *hkFourTransposedPointsf::setTransformedInverseDir( hkFourTransposedPointsf *this, const hkMatrix3f *a2, const hkFourTransposedPointsf *a3);
// [0x1a88370] (250 bytes) hkFourTransposedPointsf::setTransformedInversePos(hkTransformf const&,hkFourTransposedPointsf const&)
// hkFourTransposedPointsf *hkFourTransposedPointsf::setTransformedInversePos( hkFourTransposedPointsf *this, const hkTransformf *a2, const hkFourTransposedPointsf *a3);
// [0x1a88470] (734 bytes) hkFourTransposedPointsf::setRotatedDir(hkMatrix3f const&,hkFourTransposedPointsf const&)
// hkFourTransposedPointsf *hkFourTransposedPointsf::setRotatedDir( hkFourTransposedPointsf *this, const hkMatrix3f *a2, const hkFourTransposedPointsf *a3);
// [0x1a88750] (887 bytes) hkFourTransposedPointsf::copyVertexData(hkVector4f const*,int,hkArray<hkFourTransposedPointsf,hkContainerHeapAllocator> &)
// char *hkFourTransposedPointsf::copyVertexData(char *a1, int a2, int *a3);
// [0x1a88ad0] (583 bytes) hkFourTransposedPointsf::getOriginalVertices(hkFourTransposedPointsf const*,int,hkcdVertex *)
// int hkFourTransposedPointsf::getOriginalVertices(int a1, int a2, uint32_t *a3);
// [0x1a88d20] (41 bytes) hkMemoryStreamReader::skip(int)
// int hkMemoryStreamReader::skip(hkMemoryStreamReader *this, int a2);
// [0x1a88d50] (18 bytes) hkMemoryStreamReader::isOk(void)const
// hkMemoryStreamReader *hkMemoryStreamReader::isOk(hkMemoryStreamReader *this, int a2);
// [0x1a88d70] (109 bytes) hkMemoryStreamReader::seek(int,hkSeekableStreamReader::SeekWhence)
// uint32_t *hkMemoryStreamReader::seek(uint32_t *a1, int a2, int a3, int a4);
// [0x1a88de0] (12 bytes) hkMemoryStreamReader::tell(void)const
// int hkMemoryStreamReader::tell(hkMemoryStreamReader *this);
// [0x1a88df0] (89 bytes) hkMemoryStreamReader::read(void *,int)
// signed int hkMemoryStreamReader::read(hkMemoryStreamReader *this, hkString *a2, signed int a3);
// [0x1a88e50] (70 bytes) hkMemoryStreamReader::peek(void *,int)
// size_t hkMemoryStreamReader::peek(hkMemoryStreamReader *this, hkMemUtil *a2, int a3);
// [0x1a88ea0] (92 bytes) hkMemoryStreamReader::~hkMemoryStreamReader()
// void hkMemoryStreamReader::~hkMemoryStreamReader(hkMemoryStreamReader *this);
// [0x1a88f00] (93 bytes) hkMemoryStreamReader::~hkMemoryStreamReader()
// void hkMemoryStreamReader::~hkMemoryStreamReader(hkMemoryStreamReader *this);
// [0x1a88f60] (150 bytes) hkMemoryStreamReader::hkMemoryStreamReader(void const*,int,hkMemoryStreamReader::MemoryType)
// void *hkMemoryStreamReader::hkMemoryStreamReader(int a1, void *a2, hkMemoryAllocator *a3, int a4);
// [0x1a89000] (122 bytes) hkSubString::operator==(hkSubString const&)const
// hkSubString *hkSubString::operator==(hkSubString *this, const hkSubString *a2, int a3);
// [0x1a89080] (104 bytes) hkSubString::operator==(char const*)const
// hkSubString *hkSubString::operator==(hkSubString *this, const char *a2, char *a3);
// [0x1a890f0] (90 bytes) hkSubString::getInt(void)const
// unsigned int hkSubString::getInt(char **this);
// [0x1a89190] (38 bytes) hkSubString::calcHash(void)const
// int hkSubString::calcHash(char **this);
// [0x1a891c0] (49 bytes) hkSubString::operator=(char const*)
// size_t hkSubString::operator=(hkSubString *this, hkString *a2);
// [0x1a89200] (173 bytes) hkSubString::compareTo(hkSubString const&)const
// int hkSubString::compareTo(char **this, const hkSubString *a2);
// [0x1a892b0] (362 bytes) hkAabbUtil::calcAabb(float const*,int,int,hkAabb &)
// int hkAabbUtil::calcAabb(hkAabbUtil *this, const float *a2, int a3, float *a4);
// [0x1a89420] (247 bytes) hkAabbUtil::calcAabb(hkVector4f const*,int,hkAabb &)
// int hkAabbUtil::calcAabb(hkAabbUtil *this, const hkVector4f *a2, float *a3);
// [0x1a89520] (673 bytes) hkAabbUtil::calcAabb(hkTransformf const&,hkAabb const&,hkSimdFloat32 const&,hkAabb&)
// float *hkAabbUtil::calcAabb(float *a1, float *a2, float *a3, float *a4);
// [0x1a897d0] (633 bytes) hkAabbUtil::calcAabb(hkTransformf const&,hkAabb const&,hkAabb&)
// hkAabbUtil *hkAabbUtil::calcAabb(hkAabbUtil *this, const hkTransformf *a2, const hkAabb *a3);
// [0x1a89a50] (755 bytes) hkAabbUtil::calcAabb(hkQsTransformf const&,hkAabb const&,hkAabb&)
// hkAabbUtil *hkAabbUtil::calcAabb(hkAabbUtil *this, const hkQsTransformf *a2, const hkAabb *a3);
// [0x1a89d50] (714 bytes) hkAabbUtil::calcAabb(hkQTransform const&,hkAabb const&,hkAabb&)
// void *hkAabbUtil::calcAabb(hkAabbUtil *this, const hkQTransform *a2, const hkAabb *a3);
// [0x1a8a020] (248 bytes) hkAabbUtil::calcAabb(hkVector4f const* const*,int,hkAabb &)
// float *hkAabbUtil::calcAabb(hkAabbUtil *this, const hkVector4f *const *a2, float *a3);
// [0x1a8a120] (2976 bytes) hkAabbUtil::initOffsetAabbInput(hkMotionState const*,hkAabbUtil::OffsetAabbInput &)
// hkRotationf *hkAabbUtil::initOffsetAabbInput(hkTransformf *a1, int a2);
// [0x1a8acc0] (306 bytes) hkTrackerSnapshotUtil::createSnapshot(hkTrackerSnapshot const&,hkTrackerLayoutCalculator *)
// int hkTrackerSnapshotUtil::createSnapshot(hkTrackerSnapshotUtil *this, const hkTrackerSnapshot *a2);
// [0x1a8ae00] (116 bytes) hkTrackerSnapshotUtil::createSnapshot(hkMemoryAllocator *)
// int hkTrackerSnapshotUtil::createSnapshot(hkTrackerSnapshotUtil *this);
// [0x1a8ae80] (109 bytes) hkTrackerSnapshotUtil::createSnapshot(void)
// int hkTrackerSnapshotUtil::createSnapshot();
// [0x1a8aef0] (1292 bytes) hkLineSegmentUtil::closestLineSegLineSeg(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkLineSegmentUtil::ClosestLineSegLineSegResult &)
// int hkLineSegmentUtil::closestLineSegLineSeg(float *a1, float *a2, float *a3, float *a4, float *a5);
// [0x1a8b400] (4402 bytes) hkLineSegmentUtil::capsuleCapsuleManifold(hkVector4f const*,float,hkVector4f const*,float,hkContactPoint *)
// int hkLineSegmentUtil::capsuleCapsuleManifold( __m128 *this, const hkVector4f *a2, float *a3, const hkVector4f *a4, float *a5);
// [0x1a8c540] (459 bytes) hkLineSegmentUtil::closestPointLineSeg(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkLineSegmentUtil::ClosestPointLineSegResult &)
// int hkLineSegmentUtil::closestPointLineSeg(float *a1, float *a2, float *a3, float *a4);
// [0x1a8c710] (1062 bytes) hkLineSegmentUtil::closestPointInfLineInfLine(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkLineSegmentUtil::ClosestPointInfLineInfLineResult &)
// int *hkLineSegmentUtil::closestPointInfLineInfLine( int *a1, float *a2, int a3, float *a4, float *a5, int a6);
// [0x1a8cb40] (401 bytes) hkLineSegmentUtil::intersectionInfLinePlane(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkLineSegmentUtil::IntersectionInfLinePlaneResult &)
// int *hkLineSegmentUtil::intersectionInfLinePlane(int *a1, float *a2, float *a3, float *a4, float *a5);
// [0x1a8cce0] (316 bytes) hkRotationd::set(hkQuaterniond const&)
// hkRotationd *hkRotationd::set(hkRotationd *this, const hkQuaterniond *a2);
// [0x1a8ce20] (75 bytes) hkRotationd::setAxisAngle(hkVector4d const&,double)
// hkRotationd *hkRotationd::setAxisAngle(hkRotationd *a1, int a2, int64_t a3);
// [0x1a8ce70] (71 bytes) hkRotationd::setAxisAngle(hkVector4d const&,hkSimdDouble64 const&)
// hkRotationd *hkRotationd::setAxisAngle(hkRotationd *a1, int a2, int a3);
// [0x1a8cec0] (422 bytes) hkRotationd::isOrthonormal(double)const
// bool hkRotationd::isOrthonormal(hkRotationd *this, double a2);
// [0x1a8d070] (68 bytes) hkRotationd::isOk(void)const
// int hkRotationd::isOk(hkRotationd *this);
// [0x1a8d0c0] (788 bytes) hkRotationd::renormalize(void)
// hkRotationd *hkRotationd::renormalize(hkRotationd *this);
// [0x1a8d3e0] (46 bytes) hkTrackerTypeTreeNode::hkTrackerTypeTreeNode(hkTrackerTypeTreeNode::Type)
// uint32_t *hkTrackerTypeTreeNode::hkTrackerTypeTreeNode(uint32_t *a1, int a2);
// [0x1a8d410] (34 bytes) hkTrackerTypeTreeNode::isNamedType(void)const
// hkTrackerTypeTreeNode *hkTrackerTypeTreeNode::isNamedType(hkTrackerTypeTreeNode *this, uint32_t *a2);
// [0x1a8d440] (144 bytes) hkTrackerTypeTreeNode::isNamedType(char const*)const
// hkTrackerTypeTreeNode *hkTrackerTypeTreeNode::isNamedType(hkTrackerTypeTreeNode *this, char *a2, char *a3);
// [0x1a8d4d0] (685 bytes) hkTrackerTypeTreeNode::dumpType(hkOstream &)const
// void hkTrackerTypeTreeNode::dumpType(hkTrackerTypeTreeNode *this, hkOstream *a2);
// [0x1a8d780] (76 bytes) hkTrackerTypeTreeNode::dumpType(hkTrackerTypeTreeNode const*,hkOstream &)
// void hkTrackerTypeTreeNode::dumpType(hkTrackerTypeTreeNode *this, const hkTrackerTypeTreeNode *a2);
// [0x1a8d7d0] (171 bytes) hkMatrix3d::isOk(void)const
// bool hkMatrix3d::isOk(hkMatrix3d *this);
// [0x1a8d880] (65 bytes) hkMatrix3d::transpose(void)
// hkMatrix3d *hkMatrix3d::transpose(hkMatrix3d *this);
// [0x1a8d8d0] (633 bytes) hkMatrix3d_setMulMat3Mat3
// double *hkMatrix3d_setMulMat3Mat3(double *a1, double *a2, double *a3);
// [0x1a8db50] (130 bytes) hkMatrix3d::setTranspose(hkMatrix3d const&)
// hkMatrix3d *hkMatrix3d::setTranspose(hkMatrix3d *this, const hkMatrix3d *a2);
// [0x1a8dbe0] (832 bytes) hkMatrix3d::setInverse(hkMatrix3d const&)
// hkMatrix3d *hkMatrix3d::setInverse(hkMatrix3d *this);
// [0x1a8df20] (633 bytes) hkMatrix3d::setMul(hkMatrix3d const&,hkMatrix3d const&)
// hkMatrix3d *hkMatrix3d::setMul(hkMatrix3d *this, const hkMatrix3d *a2, const hkMatrix3d *a3);
// [0x1a8e1a0] (1024 bytes) hkMatrix3d::setMulInverse(hkMatrix3d const&,hkRotationd const&)
// hkMatrix3d *hkMatrix3d::setMulInverse(hkMatrix3d *this, const hkMatrix3d *a2, const hkRotationd *a3);
// [0x1a8e5a0] (77 bytes) hkMatrix3d::changeBasis(hkRotationd const&)
// hkMatrix3d *hkMatrix3d::changeBasis(hkMatrix3d *this, const hkRotationd *a2);
// [0x1a8e5f0] (500 bytes) hkMatrix3d::setMulInverseMul(hkRotationd const&,hkMatrix3d const&)
// hkMatrix3d *hkMatrix3d::setMulInverseMul(hkMatrix3d *this, const hkRotationd *a2, const hkMatrix3d *a3);
// [0x1a8e7f0] (654 bytes) hkMatrix3d::setTransposeMul(hkMatrix3d const&,hkMatrix3d const&)
// hkMatrix3d *hkMatrix3d::setTransposeMul(hkMatrix3d *this, const hkMatrix3d *a2, const hkMatrix3d *a3);
// [0x1a8ea80] (175 bytes) hkMatrix3d::mul(hkSimdDouble64 const&)
// double *hkMatrix3d::mul(double *a1, double *a2);
// [0x1a8eb30] (137 bytes) hkMatrix3d::setCrossSkewSymmetric(hkVector4d const&)
// int hkMatrix3d::setCrossSkewSymmetric(int a1, int a2);
// [0x1a8ebc0] (179 bytes) hkMatrix3d::setMul(hkSimdDouble64 const&,hkMatrix3d const&)
// double *hkMatrix3d::setMul(double *a1, double *a2, double *a3);
// [0x1a8ec80] (238 bytes) hkMatrix3d::addMul(hkSimdDouble64 const&,hkMatrix3d const&)
// double *hkMatrix3d::addMul(double *a1, double *a2, double *a3);
// [0x1a8ed70] (417 bytes) hkMatrix3d::isApproximatelyEqual(hkMatrix3d const&,double)const
// bool hkMatrix3d::isApproximatelyEqual(hkMatrix3d *this, const hkMatrix3d *a2, double a3);
// [0x1a8ef20] (347 bytes) hkMatrix3d::isApproximatelyEqualSimd(hkMatrix3d const&,hkSimdDouble64 const&)const
// bool hkMatrix3d::isApproximatelyEqualSimd(double *a1, double *a2, double *a3);
// [0x1a8f080] (173 bytes) hkMatrix3d::isSymmetric(double)const
// bool hkMatrix3d::isSymmetric(hkMatrix3d *this, double a2);
// [0x1a8f130] (697 bytes) hkMatrix3d::invert(double)
// hkMatrix3d *hkMatrix3d::invert(hkMatrix3d *this, double a2);
// [0x1a8f3f0] (608 bytes) hkMatrix3d::invertSymmetric(void)
// hkMatrix3d *hkMatrix3d::invertSymmetric(hkMatrix3d *this);
// [0x1a8f650] (34 bytes) hkMatrix3d_invertSymmetric
// hkMatrix3d *hkMatrix3d_invertSymmetric(hkMatrix3d *a1);
// [0x1a8f680] (186 bytes) hkMatrix3d::add(hkMatrix3d const&)
// hkMatrix3d *hkMatrix3d::add(hkMatrix3d *this, const hkMatrix3d *a2);
// [0x1a8f740] (186 bytes) hkMatrix3d::sub(hkMatrix3d const&)
// hkMatrix3d *hkMatrix3d::sub(hkMatrix3d *this, const hkMatrix3d *a2);
// [0x1a8f800] (223 bytes) hkMatrix3d::mul(hkMatrix3d const&)
// int hkMatrix3d::mul(hkMatrix3d *this, const hkMatrix3d *a2);
// [0x1a8f8e0] (111 bytes) hkMatrix3d::getDeterminant(void)const
// hkMatrix3d *hkMatrix3d::getDeterminant(hkMatrix3d *this, double *a2);
// [0x1a8f950] (127 bytes) hkMatrix3d::frobeniusNormSqr(void)const
// hkMatrix3d *hkMatrix3d::frobeniusNormSqr(hkMatrix3d *this, double *a2);
// [0x1a8f9d0] (2023 bytes) hkMatrix3d::diagonalizeSymmetric(hkRotationd &,hkVector4d &,int,double)const
// uint32_t *hkMatrix3d::diagonalizeSymmetric( uint32_t *a1, double *a2, hkMatrix3d *a3, uint64_t *a4, int a5, double a6);
// [0x1a901c0] (2291 bytes) hkMatrix3d::diagonalizeSymmetricWarmStart(hkMatrix3d&,hkVector4d &,int,double)const
// uint32_t *hkMatrix3d::diagonalizeSymmetricWarmStart( uint32_t *a1, double *a2, hkMatrix3d *a3, double *a4, int a5, double a6);
// [0x1a90ac0] (1795 bytes) hkMatrix3d::diagonalizeSymmetricApproximation(hkRotationd &,hkVector4d &,int)const
// double *hkMatrix3d::diagonalizeSymmetricApproximation(double *a1, hkMatrix3d *a2, double *a3, int a4);
// [0x1a911d0] (41 bytes) hkVdbCommandWriter::isOk(void)const
// hkVdbCommandWriter *hkVdbCommandWriter::isOk(hkVdbCommandWriter *this, int a2);
// [0x1a91200] (170 bytes) hkVdbCommandWriter::hkVdbCommandWriter(hkStreamWriter *,unsigned char,unsigned int)
// void hkVdbCommandWriter::hkVdbCommandWriter( hkVdbCommandWriter *this, hkStreamWriter *a2, uint8_t a3, unsigned int a4);
// [0x1a912b0] (154 bytes) hkVdbCommandWriter::writeCommand(hkBool)
// int hkVdbCommandWriter::writeCommand(int a1, char a2);
// [0x1a91350] (50 bytes) hkVdbCommandWriter::flush(void)
// hkVdbCommandWriter *hkVdbCommandWriter::flush(hkVdbCommandWriter *this);
// [0x1a91390] (116 bytes) hkVdbCommandWriter::~hkVdbCommandWriter()
// void hkVdbCommandWriter::~hkVdbCommandWriter(hkVdbCommandWriter *this);
// [0x1a91410] (93 bytes) hkVdbCommandWriter::~hkVdbCommandWriter()
// void hkVdbCommandWriter::~hkVdbCommandWriter(hkVdbCommandWriter *this);
// [0x1a91470] (191 bytes) hkVdbCommandWriter::write(void const*,int)
// int hkVdbCommandWriter::write(hkVdbCommandWriter *this, char *a2, int a3);
// [0x1a91550] (97 bytes) hkTrackerSnapshot::hkTrackerSnapshot(void)
// void hkTrackerSnapshot::hkTrackerSnapshot(hkTrackerSnapshot *this);
// [0x1a915c0] (95 bytes) hkTrackerSnapshot::hkTrackerSnapshot(hkMemoryAllocator *)
// void hkTrackerSnapshot::hkTrackerSnapshot(hkTrackerSnapshot *this, hkMemoryAllocator *a2);
// [0x1a91620] (270 bytes) hkTrackerSnapshot::hkTrackerSnapshot(hkTrackerSnapshot const&)
// void hkTrackerSnapshot::hkTrackerSnapshot(hkTrackerSnapshot *this, const hkTrackerSnapshot *a2);
// [0x1a91730] (146 bytes) hkTrackerSnapshot::~hkTrackerSnapshot()
// void hkTrackerSnapshot::~hkTrackerSnapshot(hkTrackerSnapshot *this);
// [0x1a917d0] (85 bytes) hkTrackerSnapshot::swap(hkTrackerSnapshot&)
// hkTrackerSnapshot *hkTrackerSnapshot::swap(hkTrackerSnapshot *this, hkTrackerSnapshot *a2);
// [0x1a91830] (253 bytes) hkTrackerSnapshot::checkConsistent(void)const
// hkTrackerSnapshot *hkTrackerSnapshot::checkConsistent(hkTrackerSnapshot *this, uint32_t *a2);
// [0x1a91930] (95 bytes) hkTrackerSnapshot::findClassAllocation(void const*)const
// int hkTrackerSnapshot::findClassAllocation(hkTrackerSnapshot *this, const void *a2);
// [0x1a91990] (189 bytes) hkTrackerSnapshot::findAllocationForClassAllocation(hkDefaultMemoryTracker::ClassAlloc const&)
// int hkTrackerSnapshot::findAllocationForClassAllocation( hkTrackerSnapshot *this, const hkDefaultMemoryTracker::ClassAlloc *a2);
// [0x1a91e60] (25 bytes) hkTrackerSnapshot::orderClassAllocs(void)
// hkAlgorithm *hkTrackerSnapshot::orderClassAllocs(hkTrackerSnapshot *this);
// [0x1a91ef0] (921 bytes) hkTrackerSnapshot::init(hkMemorySystem *,hkDefaultMemoryTracker *)
// hkTrackerSnapshot *hkTrackerSnapshot::init( hkTrackerSnapshot *this, hkMemorySystem *a2, hkDefaultMemoryTracker *a3, int a4);
// [0x1a92290] (9 bytes) hkMemoryTracker::getClassType(void)const
// int hkMemoryTracker::getClassType();
// [0x1a922a0] (29 bytes) hkMemoryTracker::~hkMemoryTracker()
// void hkMemoryTracker::~hkMemoryTracker(hkMemoryTracker *this);
// [0x1a922c0] (29 bytes) hkMemoryTracker::~hkMemoryTracker()
// void hkMemoryTracker::~hkMemoryTracker(hkMemoryTracker *this);
// [0x1a922e0] (22 bytes) hkDefaultMemoryTracker::getClassType(void)const
// void *hkDefaultMemoryTracker::getClassType();
// [0x1a92300] (131 bytes) hkDefaultMemoryTracker::ClassAlloc::operator==(hkDefaultMemoryTracker::ClassAlloc const&)const
// hkDefaultMemoryTracker::ClassAlloc *hkDefaultMemoryTracker::ClassAlloc::operator==( hkDefaultMemoryTracker::ClassAlloc *this, hkString **a2, int a3);
// [0x1a92390] (433 bytes) hkDefaultMemoryTracker::_addClassAlloc(char const*,unsigned int,void *,int)
// uint32_t *hkDefaultMemoryTracker::_addClassAlloc( pthread_mutex_t *this, const char *a2, unsigned int a3, void *a4, int a5);
// [0x1a92550] (66 bytes) hkDefaultMemoryTracker::onNewReferencedObject(char const*,unsigned int,void *)
// uint32_t *hkDefaultMemoryTracker::onNewReferencedObject( hkDefaultMemoryTracker *this, char *a2, unsigned int a3, void *a4);
// [0x1a925a0] (66 bytes) hkDefaultMemoryTracker::onNewObject(char const*,unsigned int,void *)
// uint32_t *hkDefaultMemoryTracker::onNewObject(hkDefaultMemoryTracker *this, char *a2, unsigned int a3, void *a4);
// [0x1a925f0] (66 bytes) hkDefaultMemoryTracker::onNewRaw(char const*,unsigned int,void *)
// uint32_t *hkDefaultMemoryTracker::onNewRaw(hkDefaultMemoryTracker *this, char *a2, unsigned int a3, void *a4);
// [0x1a92640] (444 bytes) hkDefaultMemoryTracker::_removeClassAlloc(void *)
// void hkDefaultMemoryTracker::_removeClassAlloc(pthread_mutex_t *this, void *a2);
// [0x1a92800] (42 bytes) hkDefaultMemoryTracker::onDeleteReferencedObject(void *)
// void hkDefaultMemoryTracker::onDeleteReferencedObject(hkDefaultMemoryTracker *this, void *a2);
// [0x1a92830] (42 bytes) hkDefaultMemoryTracker::onDeleteObject(void *)
// void hkDefaultMemoryTracker::onDeleteObject(hkDefaultMemoryTracker *this, void *a2);
// [0x1a92860] (42 bytes) hkDefaultMemoryTracker::onDeleteRaw(void *)
// void hkDefaultMemoryTracker::onDeleteRaw(hkDefaultMemoryTracker *this, void *a2);
// [0x1a92890] (52 bytes) hkDefaultMemoryTracker::clearTrackingHistory(void)
// int hkDefaultMemoryTracker::clearTrackingHistory(hkDefaultMemoryTracker *this);
// [0x1a928d0] (237 bytes) hkDefaultMemoryTracker::findClassAlloc(void *)const
// unsigned int hkDefaultMemoryTracker::findClassAlloc(hkDefaultMemoryTracker *this, void *a2);
// [0x1a929d0] (213 bytes) hkDefaultMemoryTracker::setAssertRemoveAlloc(hkDefaultMemoryTracker::ClassAlloc const*)
// int hkDefaultMemoryTracker::setAssertRemoveAlloc( hkDefaultMemoryTracker *this, const hkDefaultMemoryTracker::ClassAlloc *a2);
// [0x1a92ab0] (57 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator new(unsigned int)
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator new();
// [0x1a92af0] (71 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator delete(void *,unsigned int)
// void hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator delete(void *a1);
// [0x1a92b40] (11 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator new(unsigned int,void *)
// unsigned int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator new( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, unsigned int a2);
// [0x1a92b50] (11 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator new[](unsigned int,void *)
// unsigned int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator new[]( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, unsigned int a2);
// [0x1a92b60] (9 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator delete(void *,void *)
// void hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator delete();
// [0x1a92b70] (9 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator delete[](void *,void *)
// void hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator delete[]();
// [0x1a92b80] (92 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::hkCachedHashMap(hkStringMapOperations)
// void *hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::hkCachedHashMap(hkString **a1);
// [0x1a92be0] (64 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::~hkCachedHashMap()
// void hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::~hkCachedHashMap( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this);
// [0x1a92c20] (229 bytes) hkDefaultMemoryTracker::~hkDefaultMemoryTracker()
// void hkDefaultMemoryTracker::~hkDefaultMemoryTracker(pthread_mutex_t *this);
// [0x1a92d10] (229 bytes) hkDefaultMemoryTracker::~hkDefaultMemoryTracker()
// void hkDefaultMemoryTracker::~hkDefaultMemoryTracker(pthread_mutex_t *this);
// [0x1a92e00] (49 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getIterator(void)const
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getIterator( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this);
// [0x1a92e40] (20 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getKey(Dummy *)const
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getKey(uint32_t *a1, int a2);
// [0x1a92e60] (20 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getValue(Dummy *)const
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getValue(uint32_t *a1, int a2);
// [0x1a92e80] (24 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::setValue(Dummy *,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::setValue( uint32_t *a1, int a2, int a3);
// [0x1a92ea0] (67 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getNext(Dummy *)const
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getNext(uint32_t *a1, int a2);
// [0x1a92ef0] (21 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::isValid(Dummy *)const
// bool *hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::isValid( bool *a1, int a2, int a3);
// [0x1a92f10] (134 bytes) hkDefaultMemoryTracker::getTypeDefinitions(hkMemoryTracker::TypeDefinition const**)
// int hkDefaultMemoryTracker::getTypeDefinitions(int a1, int *a2);
// [0x1a92fa0] (210 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::findKey(unsigned long)const
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::findKey( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, hkString *a2);
// [0x1a93080] (73 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::hasKey(unsigned long)const
// hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::hasKey( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *a2, hkString *a3);
// [0x1a930d0] (134 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::get(unsigned long,unsigned long *)const
// hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::get( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *a2, hkString *a3, int *a4);
// [0x1a93160] (85 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getWithDefault(unsigned long,unsigned long)const
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getWithDefault( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, hkString *a2, int a3);
// [0x1a931c0] (237 bytes) hkDefaultMemoryTracker::findTypeDefinition(char const*)
// int hkDefaultMemoryTracker::findTypeDefinition(hkDefaultMemoryTracker *this, hkString *a2);
// [0x1a932c0] (272 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::remove(Dummy *)
// unsigned int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::remove( int *a1, unsigned int a2);
// [0x1a933d0] (129 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::remove(unsigned long)
// hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::remove( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *a2, hkString *a3);
// [0x1a93460] (12 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getSize(void)const
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getSize( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this);
// [0x1a93470] (162 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::isOk(void)const
// hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::isOk( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, int *a2);
// [0x1a93520] (136 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator=(hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator> const*)
// hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::operator=( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, const hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *a2);
// [0x1a935b0] (45 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::clear(void)
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::clear( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this);
// [0x1a935e0] (47 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::swap(hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>&)
// hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::swap( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *a2);
// [0x1a93610] (257 bytes) hkDefaultMemoryTracker::clearTypeDefinitions(void)
// int hkDefaultMemoryTracker::clearTypeDefinitions(hkDefaultMemoryTracker *this);
// [0x1a93720] (13 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getCapacity(void)const
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getCapacity( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this);
// [0x1a93730] (224 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::resizeTable(int)
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::resizeTable( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, int a2);
// [0x1a93810] (315 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::insert(unsigned long,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::insert( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, hkString *a2, unsigned int a3);
// [0x1a93950] (281 bytes) hkDefaultMemoryTracker::addTypeDefinition(hkMemoryTracker::TypeDefinition const&)
// int hkDefaultMemoryTracker::addTypeDefinition(pthread_mutex_t *a1, hkString **a2);
// [0x1a93a80] (561 bytes) hkDefaultMemoryTracker::hkDefaultMemoryTracker(hkMemoryAllocator *)
// void hkDefaultMemoryTracker::hkDefaultMemoryTracker(hkDefaultMemoryTracker *this, hkMemoryAllocator *a2);
// [0x1a93cc0] (124 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getOrInsert(unsigned long,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::getOrInsert( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, hkString *a2, unsigned int a3);
// [0x1a93d40] (91 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::merge(hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator> const&)
// void hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::merge( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, const hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *a2);
// [0x1a93da0] (263 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::findOrInsertKey(unsigned long,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::findOrInsertKey( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, hkString *a2, unsigned int a3);
// [0x1a93eb0] (82 bytes) hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::reserve(int)
// int hkCachedHashMap<hkStringMapOperations,hkDefaultMemoryTrackerAllocator>::reserve( hkCachedHashMap<hkStringMapOperations, hkDefaultMemoryTrackerAllocator> *this, int a2);
// [0x1a93fa0] (137 bytes) hkQuaterniond::setAxisAngle(hkVector4d const&,hkSimdDouble64 const&)
// void hkQuaterniond::setAxisAngle(double *a1, double *a2, double *a3);
// [0x1a94030] (62 bytes) hkQuaterniond::setAxisAngle(hkVector4d const&,double)
// void hkQuaterniond::setAxisAngle(double *a1, double *a2, double a3);
// [0x1a94070] (137 bytes) hkQuaterniond::setAxisAngle_Approximate(hkVector4d const&,hkSimdDouble64 const&)
// void hkQuaterniond::setAxisAngle_Approximate(double *a1, double *a2, double *a3);
// [0x1a94100] (399 bytes) hkQuaterniond::setFromEulerAngles(hkSimdDouble64 const&,hkSimdDouble64 const&,hkSimdDouble64 const&)
// void hkQuaterniond::setFromEulerAngles(double *a1, double *a2, double *a3, double *a4);
// [0x1a94290] (94 bytes) hkQuaterniond::setFromEulerAngles(double,double,double)
// void hkQuaterniond::setFromEulerAngles(hkQuaterniond *this, double a2, double a3, double a4);
// [0x1a942f0] (58 bytes) hkQuaterniond::setFromEulerAngles_Approximate(hkSimdDouble64 const&,hkSimdDouble64 const&,hkSimdDouble64 const&)
// void hkQuaterniond::setFromEulerAngles_Approximate(double *a1, double *a2, double *a3, double *a4);
// [0x1a94330] (147 bytes) hkQuaterniond::getAngleSr(void)const
// hkQuaterniond *hkQuaterniond::getAngleSr(hkQuaterniond *this, int a2);
// [0x1a943d0] (236 bytes) hkQuaterniond::isOk(double)const
// bool hkQuaterniond::isOk(hkQuaterniond *this, double a2);
// [0x1a944c0] (563 bytes) hkQuaterniond::set(hkRotationd const&)
// hkQuaterniond *hkQuaterniond::set(hkQuaterniond *this, const hkRotationd *a2);
// [0x1a94700] (521 bytes) hkQuaterniond::setFlippedRotation(hkVector4d const&)
// int hkQuaterniond::setFlippedRotation(int a1, int a2);
// [0x1a94910] (1143 bytes) hkQuaterniond::setSlerp(hkQuaterniond const&,hkQuaterniond const&,hkSimdDouble64 const&)
// void hkQuaterniond::setSlerp(double *a1, double *a2, double *a3, double *a4);
// [0x1a94d90] (1273 bytes) hkQuaterniond::setBarycentric(hkQuaterniond const*,hkVector4d const&)
// void hkQuaterniond::setBarycentric(double *a1, int a2, double *a3);
// [0x1a95290] (1387 bytes) hkQuaterniond::removeAxisComponent(hkVector4d const&)
// void hkQuaterniond::removeAxisComponent(int a1, int a2);
// [0x1a95800] (727 bytes) hkQuaterniond::decomposeRestAxis(hkVector4d const&,hkQuaterniond&,hkSimdDouble64 &)const
// hkQuaterniond *hkQuaterniond::decomposeRestAxis(double *a1, double *a2, uint32_t *a3, double *a4);
// [0x1a95ae0] (1690 bytes) hkTrackerScanCalculator::_createSnapshot(hkTrackerSnapshot const*,hkTrackerLayoutCalculator *)
// hkTrackerScanSnapshot *hkTrackerScanCalculator::_createSnapshot( hkTrackerScanCalculator *this, const hkTrackerSnapshot *a2, hkTrackerLayoutCalculator *a3);
// [0x1a96180] (88 bytes) hkTrackerScanCalculator::createSnapshot(hkTrackerSnapshot const*,hkTrackerLayoutCalculator *)
// hkTrackerScanSnapshot *hkTrackerScanCalculator::createSnapshot( hkTrackerScanCalculator *this, const hkTrackerSnapshot *a2, hkTrackerLayoutCalculator *a3);
// [0x1a961e0] (37 bytes) hkTrackerTypeInit::hkTrackerTypeInit(hkMemoryTracker::TypeDefinition const&)
// uint32_t *hkTrackerTypeInit::hkTrackerTypeInit(uint32_t *a1, int a2);
// [0x1a96210] (77 bytes) hkTrackerTypeInit::registerTypes(hkMemoryTracker *)
// uint32_t *hkTrackerTypeInit::registerTypes(hkTrackerTypeInit *this);
// [0x1a96260] (29 bytes) hkTrackerLayoutHandler::~hkTrackerLayoutHandler()
// void hkTrackerLayoutHandler::~hkTrackerLayoutHandler(hkTrackerLayoutHandler *this);
// [0x1a96280] (96 bytes) hkTrackerLayoutHandler::~hkTrackerLayoutHandler()
// void hkTrackerLayoutHandler::~hkTrackerLayoutHandler(hkTrackerLayoutHandler *this);
// [0x1a962e0] (221 bytes) hkTrackerTypeLayout::~hkTrackerTypeLayout()
// void hkTrackerTypeLayout::~hkTrackerTypeLayout(hkTrackerTypeLayout *this);
// [0x1a964c0] (164 bytes) hkTrackerTypeLayout::~hkTrackerTypeLayout()
// void hkTrackerTypeLayout::~hkTrackerTypeLayout(hkTrackerTypeLayout *this);
// [0x1a96570] (175 bytes) hkTrackerLayoutCalculator::isDerived(hkSubString const&,hkSubString const&)const
// hkTrackerLayoutCalculator *hkTrackerLayoutCalculator::isDerived( hkTrackerLayoutCalculator *this, const hkSubString *a2, const hkSubString *a3, char *a4);
// [0x1a96620] (427 bytes) hkTrackerLayoutCalculator::clear(void)
// int hkTrackerLayoutCalculator::clear(hkTrackerLayoutCalculator *this);
// [0x1a967d0] (354 bytes) hkTrackerLayoutCalculator::~hkTrackerLayoutCalculator()
// void hkTrackerLayoutCalculator::~hkTrackerLayoutCalculator(hkTrackerLayoutCalculator *this);
// [0x1a96940] (93 bytes) hkTrackerLayoutCalculator::~hkTrackerLayoutCalculator()
// void hkTrackerLayoutCalculator::~hkTrackerLayoutCalculator(hkTrackerLayoutCalculator *this);
// [0x1a969a0] (352 bytes) hkTrackerLayoutCalculator::addHandler(char const*,hkTrackerLayoutHandler *)
// int hkTrackerLayoutCalculator::addHandler( hkTrackerLayoutCalculator *this, hkString *a2, hkTrackerLayoutHandler *a3);
// [0x1a96b00] (1881 bytes) hkTrackerLayoutCalculator::hkTrackerLayoutCalculator(hkTrackerTypeTreeCache *)
// void hkTrackerLayoutCalculator::hkTrackerLayoutCalculator( hkTrackerLayoutCalculator *this, hkTrackerTypeTreeCache *a2);
// [0x1a97260] (326 bytes) hkTrackerLayoutCalculator::getHandler(hkSubString const&)const
// int hkTrackerLayoutCalculator::getHandler(hkTrackerLayoutCalculator *this, const hkSubString *a2);
// [0x1a973b0] (209 bytes) hkTrackerLayoutCalculator::setLayout(hkTrackerTypeTreeNode const*,hkTrackerTypeLayout const*)
// int hkTrackerLayoutCalculator::setLayout( hkTrackerLayoutCalculator *this, const hkTrackerTypeTreeNode *a2, const hkTrackerTypeLayout *a3);
// [0x1a97490] (35 bytes) hkTrackerLayoutCalculator::calcBasicSize(hkTrackerTypeTreeNode::Type)
// int hkTrackerLayoutCalculator::calcBasicSize(int a1);
// [0x1a974c0] (35 bytes) hkTrackerLayoutCalculator::calcBasicAlignment(hkTrackerTypeTreeNode::Type)
// int hkTrackerLayoutCalculator::calcBasicAlignment(int a1);
// [0x1a974f0] (372 bytes) hkTrackerLayoutCalculator::_calcTypeSizeFromMember(hkTrackerTypeTreeNode const*)
// int hkTrackerLayoutCalculator::_calcTypeSizeFromMember( hkTrackerLayoutCalculator *this, const hkTrackerTypeTreeNode *a2);
// [0x1a97670] (63 bytes) hkTrackerLayoutCalculator::setTypeSize(hkTrackerTypeTreeNode const*,unsigned int)
// int hkTrackerLayoutCalculator::setTypeSize( hkTrackerLayoutCalculator *this, const hkTrackerTypeTreeNode *a2, unsigned int a3);
// [0x1a976b0] (674 bytes) hkTrackerLayoutCalculator::_createClassLayout(hkTrackerTypeTreeNode const*)
// int hkTrackerLayoutCalculator::_createClassLayout( hkTrackerLayoutCalculator *this, const hkTrackerTypeTreeNode *a2, int a3, int a4, int a5, int a6);
// [0x1a97960] (122 bytes) hkTrackerLayoutCalculator::getLayout(hkTrackerTypeTreeNode const*)
// unsigned int hkTrackerLayoutCalculator::getLayout( hkTrackerLayoutCalculator *this, const hkTrackerTypeTreeNode *a2);
// [0x1a979e0] (503 bytes) hkTrackerLayoutCalculator::calcTypeInfo(hkTrackerTypeTreeNode const*,hkTrackerLayoutTypeInfo &)
// uint32_t *hkTrackerLayoutCalculator::calcTypeInfo(uint32_t *a1, int a2, int *a3, int *a4);
// [0x1a97be0] (303 bytes) hkTrackerLayoutCalculator::calcTypeSize(hkTrackerTypeTreeNode const*)
// int hkTrackerLayoutCalculator::calcTypeSize(hkTrackerLayoutCalculator *this, const hkTrackerTypeTreeNode *a2);
// [0x1a97d10] (863 bytes) hkTrackerLayoutCalculator::getReferencesRecursive(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// int hkTrackerLayoutCalculator::getReferencesRecursive( hkTrackerLayoutCalculator *a1, uint32_t *a2, uint32_t *a3, int *a4, int *a5);
// [0x1a98070] (183 bytes) hkTrackerLayoutCalculator::getReferences(hkTrackerLayoutBlock *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// int hkTrackerLayoutCalculator::getReferences(hkTrackerLayoutCalculator *a1, int a2, int *a3);
// [0x1a98130] (596 bytes) hkTrackerLayoutCalculator::calcMembers(hkTrackerTypeTreeNode const*,unsigned int,hkArray<hkTrackerTypeLayout::Member,hkContainerHeapAllocator> &,int,int)
// unsigned int hkTrackerLayoutCalculator::calcMembers( hkTrackerLayoutCalculator *a1, hkTrackerTypeTreeNode *a2, int16_t a3, int *a4, int a5, int a6);
// [0x1a98390] (702 bytes) hkTrackerLayoutCalculator::_calcMemberNames(hkTrackerTypeTreeNode const*,hkStringBuf &,hkArray<char,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &)
// void hkTrackerLayoutCalculator::_calcMemberNames( hkTrackerLayoutCalculator *a1, hkTrackerTypeTreeNode *a2, hkStringBuf *a3, int *a4, hkMemoryAllocator *a5);
// [0x1a98650] (146 bytes) hkTrackerLayoutCalculator::calcMemberNames(hkTrackerTypeTreeNode const*,hkArray<char,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &)
// int hkTrackerLayoutCalculator::calcMemberNames( hkTrackerLayoutCalculator *a1, hkTrackerTypeTreeNode *a2, int *a3, hkMemoryAllocator *a4);
// [0x1a986f0] (611 bytes) hkTrackerLayoutCalculator::flattenTypes(void)
// int hkTrackerLayoutCalculator::flattenTypes(hkTrackerLayoutCalculator *this);
// [0x1a98960] (12 bytes) hkTrackerPadSpuLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerPadSpuLayoutHandler::getSize();
// [0x1a98970] (29 bytes) hkTrackerPadSpuLayoutHandler::~hkTrackerPadSpuLayoutHandler()
// void hkTrackerPadSpuLayoutHandler::~hkTrackerPadSpuLayoutHandler(hkTrackerPadSpuLayoutHandler *this);
// [0x1a98990] (69 bytes) hkTrackerPadSpuLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// int hkTrackerPadSpuLayoutHandler::getReferences( int a1, uint32_t *a2, uint32_t *a3, int a4, hkTrackerLayoutCalculator *a5, int *a6);
// [0x1a989e0] (96 bytes) hkTrackerPadSpuLayoutHandler::~hkTrackerPadSpuLayoutHandler()
// void hkTrackerPadSpuLayoutHandler::~hkTrackerPadSpuLayoutHandler(hkTrackerPadSpuLayoutHandler *this);
// [0x1a98a40] (9 bytes) hkDummyMemoryTrackerImpl::onNewReferencedObject(char const*,unsigned int,void *)
// void hkDummyMemoryTrackerImpl::onNewReferencedObject();
// [0x1a98a50] (9 bytes) hkDummyMemoryTrackerImpl::onDeleteReferencedObject(void *)
// void hkDummyMemoryTrackerImpl::onDeleteReferencedObject();
// [0x1a98a60] (9 bytes) hkDummyMemoryTrackerImpl::onNewObject(char const*,unsigned int,void *)
// void hkDummyMemoryTrackerImpl::onNewObject();
// [0x1a98a70] (9 bytes) hkDummyMemoryTrackerImpl::onDeleteObject(void *)
// void hkDummyMemoryTrackerImpl::onDeleteObject();
// [0x1a98a80] (9 bytes) hkDummyMemoryTrackerImpl::onNewRaw(char const*,unsigned int,void *)
// void hkDummyMemoryTrackerImpl::onNewRaw();
// [0x1a98a90] (9 bytes) hkDummyMemoryTrackerImpl::onDeleteRaw(void *)
// void hkDummyMemoryTrackerImpl::onDeleteRaw();
// [0x1a98aa0] (9 bytes) hkDummyMemoryTrackerImpl::addTypeDefinition(hkMemoryTracker::TypeDefinition const&)
// void hkDummyMemoryTrackerImpl::addTypeDefinition();
// [0x1a98ab0] (9 bytes) hkDummyMemoryTrackerImpl::findTypeDefinition(char const*)
// int hkDummyMemoryTrackerImpl::findTypeDefinition();
// [0x1a98ac0] (9 bytes) hkDummyMemoryTrackerImpl::getTypeDefinitions(hkMemoryTracker::TypeDefinition const**)
// int hkDummyMemoryTrackerImpl::getTypeDefinitions();
// [0x1a98ad0] (9 bytes) hkDummyMemoryTrackerImpl::clearTypeDefinitions(void)
// void hkDummyMemoryTrackerImpl::clearTypeDefinitions();
// [0x1a98ae0] (29 bytes) hkDummyMemoryTrackerImpl::~hkDummyMemoryTrackerImpl()
// void hkDummyMemoryTrackerImpl::~hkDummyMemoryTrackerImpl(hkDummyMemoryTrackerImpl *this);
// [0x1a98b00] (29 bytes) hkDummyMemoryTrackerImpl::~hkDummyMemoryTrackerImpl()
// void hkDummyMemoryTrackerImpl::~hkDummyMemoryTrackerImpl(hkDummyMemoryTrackerImpl *this);
// [0x1a98b20] (143 bytes) hkMemoryTracker::getInstance(void)
// int *hkMemoryTracker::getInstance();
// [0x1a98bb0] (24 bytes) hkMemoryTracker::setInstance(hkMemoryTracker*)
// uint32_t *hkMemoryTracker::setInstance(hkMemoryTracker *this);
// [0x1a98bd0] (226 bytes) hkMemoryTracker::findTypeDefinition(hkSubString const&)
// int hkMemoryTracker::findTypeDefinition(hkMemoryTracker *this, const hkSubString *a2);
// [0x1a98cc0] (87 bytes) hkMemoryTracker::isBasicType(hkSubString const&)
// hkMemoryTracker *hkMemoryTracker::isBasicType(hkMemoryTracker *this, const hkSubString *a2, hkSubString *a3);
// [0x1a98d20] (64 bytes) hkMemoryTracker::findClassDefinition(hkSubString const&)
// int hkMemoryTracker::findClassDefinition(hkMemoryTracker *this, const hkSubString *a2);
// [0x1a98d60] (47 bytes) hkMemoryTracker::findClassDefinition(char const*)
// int hkMemoryTracker::findClassDefinition(hkMemoryTracker *this, const char *a2);
// [0x1a98d90] (12 bytes) hkTrackerSetLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerSetLayoutHandler::getSize();
// [0x1a98da0] (29 bytes) hkTrackerSetLayoutHandler::~hkTrackerSetLayoutHandler()
// void hkTrackerSetLayoutHandler::~hkTrackerSetLayoutHandler(hkTrackerSetLayoutHandler *this);
// [0x1a98dc0] (136 bytes) hkTrackerSetLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// int hkTrackerSetLayoutHandler::getReferences( int a1, uint32_t *a2, uint32_t *a3, int a4, hkTrackerLayoutCalculator *a5, int *a6);
// [0x1a98e50] (96 bytes) hkTrackerSetLayoutHandler::~hkTrackerSetLayoutHandler()
// void hkTrackerSetLayoutHandler::~hkTrackerSetLayoutHandler(hkTrackerSetLayoutHandler *this);
// [0x1a994d0] (13 bytes) hkCurrentFunctionUtil::getClassName(char const*,char *)
// char *hkCurrentFunctionUtil::getClassName( int a1, int a2, int a3, int a4, hkCurrentFunctionUtil *this, char *a6);
// [0x1a994e0] (12 bytes) hkTrackerRefPtrLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerRefPtrLayoutHandler::getSize();
// [0x1a994f0] (29 bytes) hkTrackerRefPtrLayoutHandler::~hkTrackerRefPtrLayoutHandler()
// void hkTrackerRefPtrLayoutHandler::~hkTrackerRefPtrLayoutHandler(hkTrackerRefPtrLayoutHandler *this);
// [0x1a99510] (106 bytes) hkTrackerRefPtrLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// uint32_t *hkTrackerRefPtrLayoutHandler::getReferences(int a1, uint32_t *a2, uint32_t *a3);
// [0x1a99580] (96 bytes) hkTrackerRefPtrLayoutHandler::~hkTrackerRefPtrLayoutHandler()
// void hkTrackerRefPtrLayoutHandler::~hkTrackerRefPtrLayoutHandler(hkTrackerRefPtrLayoutHandler *this);
// [0x1a995e0] (282 bytes) hkTrackerTypeTreeCache::~hkTrackerTypeTreeCache()
// void hkTrackerTypeTreeCache::~hkTrackerTypeTreeCache(hkTrackerTypeTreeCache *this);
// [0x1a99700] (221 bytes) hkTrackerTypeTreeCache::~hkTrackerTypeTreeCache()
// void hkTrackerTypeTreeCache::~hkTrackerTypeTreeCache(hkTrackerTypeTreeCache *this);
// [0x1a997e0] (144 bytes) hkTrackerTypeTreeCache::getTypeExpressionTree(char const*,hkTrackerTypeTreeNode const**)const
// hkTrackerTypeTreeCache *hkTrackerTypeTreeCache::getTypeExpressionTree( hkTrackerTypeTreeCache *this, const char *a2, const hkTrackerTypeTreeNode **a3, int *a4);
// [0x1a99870] (55 bytes) hkTrackerTypeTreeCache::getTypeExpressionTree(char const*)const
// int hkTrackerTypeTreeCache::getTypeExpressionTree(hkTrackerTypeTreeCache *this, hkString *a2);
// [0x1a998b0] (55 bytes) hkTrackerTypeTreeCache::setTypeExpressionTree(char const*,hkTrackerTypeTreeNode const*)
// int hkTrackerTypeTreeCache::setTypeExpressionTree( hkTrackerTypeTreeCache *this, hkString *a2, const hkTrackerTypeTreeNode *a3);
// [0x1a998f0] (119 bytes) hkTrackerTypeTreeCache::newNode(hkTrackerTypeTreeNode::Type)
// uint32_t *hkTrackerTypeTreeCache::newNode(uint32_t *a1, int a2);
// [0x1a99970] (240 bytes) hkTrackerTypeTreeCache::hkTrackerTypeTreeCache(void)
// void hkTrackerTypeTreeCache::hkTrackerTypeTreeCache(hkTrackerTypeTreeCache *this);
// [0x1a99a60] (55 bytes) hkTrackerTypeTreeCache::getNamedNode(char const*)const
// int hkTrackerTypeTreeCache::getNamedNode(hkTrackerTypeTreeCache *this, hkString *a2);
// [0x1a99aa0] (252 bytes) hkTrackerTypeTreeCache::newText(char const*)
// int hkTrackerTypeTreeCache::newText(hkTrackerTypeTreeCache *this, hkString *a2);
// [0x1a99ba0] (234 bytes) hkTrackerTypeTreeCache::newNamedNode(hkTrackerTypeTreeNode::Type,char const*,hkBool)
// uint32_t *hkTrackerTypeTreeCache::newNamedNode(hkTrackerTypeTreeCache *a1, int a2, hkString *a3, char a4);
// [0x1a99c90] (234 bytes) hkTrackerTypeTreeCache::newNamedNode(hkTrackerTypeTreeNode::Type,hkSubString const&,hkBool)
// uint32_t *hkTrackerTypeTreeCache::newNamedNode(hkTrackerTypeTreeCache *a1, int a2, int a3);
// [0x1a99d80] (185 bytes) hkTrackerTypeTreeCache::clear(void)
// int hkTrackerTypeTreeCache::clear(hkTrackerTypeTreeCache *this);
// [0x1a99e40] (9 bytes) hkTrackerEnumLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// void hkTrackerEnumLayoutHandler::getReferences();
// [0x1a99e50] (29 bytes) hkTrackerEnumLayoutHandler::~hkTrackerEnumLayoutHandler()
// void hkTrackerEnumLayoutHandler::~hkTrackerEnumLayoutHandler(hkTrackerEnumLayoutHandler *this);
// [0x1a99e70] (48 bytes) hkTrackerEnumLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerEnumLayoutHandler::getSize( hkTrackerEnumLayoutHandler *this, const hkTrackerTypeTreeNode *a2, hkTrackerLayoutCalculator *a3);
// [0x1a99ea0] (96 bytes) hkTrackerEnumLayoutHandler::~hkTrackerEnumLayoutHandler()
// void hkTrackerEnumLayoutHandler::~hkTrackerEnumLayoutHandler(hkTrackerEnumLayoutHandler *this);
// [0x1a99f00] (12 bytes) hkTrackerStringPtrLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerStringPtrLayoutHandler::getSize();
// [0x1a99f10] (29 bytes) hkTrackerStringPtrLayoutHandler::~hkTrackerStringPtrLayoutHandler()
// void hkTrackerStringPtrLayoutHandler::~hkTrackerStringPtrLayoutHandler(hkTrackerStringPtrLayoutHandler *this);
// [0x1a99f30] (96 bytes) hkTrackerStringPtrLayoutHandler::~hkTrackerStringPtrLayoutHandler()
// void hkTrackerStringPtrLayoutHandler::~hkTrackerStringPtrLayoutHandler(hkTrackerStringPtrLayoutHandler *this);
// [0x1a99f90] (362 bytes) hkTrackerStringPtrLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// hkTrackerTypeTreeCache *hkTrackerStringPtrLayoutHandler::getReferences( int a1, uint32_t *a2, hkStringPtr *a3, int a4, int a5, hkMemoryAllocator *a6);
// [0x1a9a100] (12 bytes) hkTrackerQueueLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerQueueLayoutHandler::getSize();
// [0x1a9a110] (29 bytes) hkTrackerQueueLayoutHandler::~hkTrackerQueueLayoutHandler()
// void hkTrackerQueueLayoutHandler::~hkTrackerQueueLayoutHandler(hkTrackerQueueLayoutHandler *this);
// [0x1a9a130] (96 bytes) hkTrackerQueueLayoutHandler::~hkTrackerQueueLayoutHandler()
// void hkTrackerQueueLayoutHandler::~hkTrackerQueueLayoutHandler(hkTrackerQueueLayoutHandler *this);
// [0x1a9a190] (482 bytes) hkTrackerQueueLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// int hkTrackerQueueLayoutHandler::getReferences( int a1, uint32_t *a2, int *a3, int a4, hkTrackerLayoutCalculator *a5, hkMemoryAllocator *a6);
// [0x1a9a380] (29 bytes) hkTrackerArrayLayoutHandler::~hkTrackerArrayLayoutHandler()
// void hkTrackerArrayLayoutHandler::~hkTrackerArrayLayoutHandler(hkTrackerArrayLayoutHandler *this);
// [0x1a9a3a0] (157 bytes) hkTrackerArrayLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerArrayLayoutHandler::getSize( hkTrackerArrayLayoutHandler *this, const hkTrackerTypeTreeNode *a2, hkTrackerLayoutCalculator *a3);
// [0x1a9a440] (96 bytes) hkTrackerArrayLayoutHandler::~hkTrackerArrayLayoutHandler()
// void hkTrackerArrayLayoutHandler::~hkTrackerArrayLayoutHandler(hkTrackerArrayLayoutHandler *this);
// [0x1a9a4a0] (877 bytes) hkTrackerArrayLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// int hkTrackerArrayLayoutHandler::getReferences( int a1, hkTrackerTypeTreeCache **a2, int a3, int a4, hkTrackerLayoutCalculator *a5, hkMemoryAllocator *a6);
// [0x1a9a810] (29 bytes) hkTrackerPointerMapLayoutHandler::~hkTrackerPointerMapLayoutHandler()
// void hkTrackerPointerMapLayoutHandler::~hkTrackerPointerMapLayoutHandler( hkTrackerPointerMapLayoutHandler *this);
// [0x1a9a830] (65 bytes) hkTrackerPointerMapLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerPointerMapLayoutHandler::getSize( hkTrackerPointerMapLayoutHandler *this, const hkTrackerTypeTreeNode *a2);
// [0x1a9a880] (96 bytes) hkTrackerPointerMapLayoutHandler::~hkTrackerPointerMapLayoutHandler()
// void hkTrackerPointerMapLayoutHandler::~hkTrackerPointerMapLayoutHandler( hkTrackerPointerMapLayoutHandler *this);
// [0x1a9a8e0] (2171 bytes) hkTrackerPointerMapLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *hkTrackerPointerMapLayoutHandler::getReferences( int a1, uint32_t *a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3, int a4, hkTrackerLayoutCalculator *a5, hkMemoryAllocator *a6);
// [0x1a9b160] (1266 bytes) hkTrackerTypeTreeParser::_calcBuiltInType(hkSubString const&)
// int hkTrackerTypeTreeParser::_calcBuiltInType(hkTrackerTypeTreeParser *this);
// [0x1a9b660] (1531 bytes) hkTrackerTypeTreeParser::_parseTokens(hkSubString const&,hkTrackerTypeTreeParser::TokenContainer &)
// uint8_t *hkTrackerTypeTreeParser::_parseTokens(uint8_t *a1, hkTrackerTypeTreeParser **a2, uint32_t *a3);
// [0x1a9bc60] (1594 bytes) hkTrackerTypeTreeParser::_parseTerminalType(hkTrackerTypeTreeParser::TokenRange &,hkTrackerTypeTreeCache &,hkStringBuf const&)
// uint32_t *hkTrackerTypeTreeParser::_parseTerminalType( unsigned int *a1, hkTrackerTypeTreeCache *a2, const hkStringBuf *a3);
// [0x1a9c2a0] (335 bytes) hkTrackerTypeTreeParser::_parseType(hkTrackerTypeTreeParser::TokenRange &,hkTrackerTypeTreeCache &)
// uint32_t *hkTrackerTypeTreeParser::_parseType(unsigned int *a1, hkTrackerTypeTreeCache *a2);
// [0x1a9c3f0] (239 bytes) hkTrackerTypeTreeParser::parseNewType(hkSubString const&,hkTrackerTypeTreeCache &)
// uint32_t *hkTrackerTypeTreeParser::parseNewType(hkTrackerTypeTreeParser **this, const hkSubString *a2);
// [0x1a9c4e0] (138 bytes) hkTrackerTypeTreeParser::parseType(char const*,hkTrackerTypeTreeCache &)
// const hkTrackerTypeTreeNode *hkTrackerTypeTreeParser::parseType( const hkTrackerTypeTreeNode **this, const hkSubString *a2);
// [0x1a9c570] (218 bytes) hkTrackerTypeTreeParser::parseType(hkSubString const&,hkTrackerTypeTreeCache &)
// const hkTrackerTypeTreeNode *hkTrackerTypeTreeParser::parseType( hkTrackerTypeTreeParser *this, const hkSubString *a2);
// [0x1a9c650] (9 bytes) hkTrackerFlagsLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// void hkTrackerFlagsLayoutHandler::getReferences();
// [0x1a9c660] (29 bytes) hkTrackerFlagsLayoutHandler::~hkTrackerFlagsLayoutHandler()
// void hkTrackerFlagsLayoutHandler::~hkTrackerFlagsLayoutHandler(hkTrackerFlagsLayoutHandler *this);
// [0x1a9c680] (48 bytes) hkTrackerFlagsLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerFlagsLayoutHandler::getSize( hkTrackerFlagsLayoutHandler *this, const hkTrackerTypeTreeNode *a2, hkTrackerLayoutCalculator *a3);
// [0x1a9c6b0] (96 bytes) hkTrackerFlagsLayoutHandler::~hkTrackerFlagsLayoutHandler()
// void hkTrackerFlagsLayoutHandler::~hkTrackerFlagsLayoutHandler(hkTrackerFlagsLayoutHandler *this);
// [0x1a9c710] (12 bytes) hkTrackerStringMapLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerStringMapLayoutHandler::getSize();
// [0x1a9c720] (29 bytes) hkTrackerStringMapLayoutHandler::~hkTrackerStringMapLayoutHandler()
// void hkTrackerStringMapLayoutHandler::~hkTrackerStringMapLayoutHandler(hkTrackerStringMapLayoutHandler *this);
// [0x1a9c740] (96 bytes) hkTrackerStringMapLayoutHandler::~hkTrackerStringMapLayoutHandler()
// void hkTrackerStringMapLayoutHandler::~hkTrackerStringMapLayoutHandler(hkTrackerStringMapLayoutHandler *this);
// [0x1a9c7a0] (973 bytes) hkTrackerStringMapLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// bool *hkTrackerStringMapLayoutHandler::getReferences( int a1, uint32_t *a2, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a3, int a4, int a5, hkMemoryAllocator *a6);
// [0x1a9cb70] (12 bytes) hkTrackerJobQueueLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerJobQueueLayoutHandler::getSize();
// [0x1a9cb80] (12 bytes) hkTrackerJobQueueDynamicDataLayoutHandler::getSize(hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *)
// int hkTrackerJobQueueDynamicDataLayoutHandler::getSize();
// [0x1a9cb90] (29 bytes) hkTrackerJobQueueDynamicDataLayoutHandler::~hkTrackerJobQueueDynamicDataLayoutHandler()
// void hkTrackerJobQueueDynamicDataLayoutHandler::~hkTrackerJobQueueDynamicDataLayoutHandler( hkTrackerJobQueueDynamicDataLayoutHandler *this);
// [0x1a9cbb0] (29 bytes) hkTrackerJobQueueLayoutHandler::~hkTrackerJobQueueLayoutHandler()
// void hkTrackerJobQueueLayoutHandler::~hkTrackerJobQueueLayoutHandler(hkTrackerJobQueueLayoutHandler *this);
// [0x1a9cbd0] (305 bytes) hkTrackerJobQueueLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// int hkTrackerJobQueueLayoutHandler::getReferences( int a1, uint32_t *a2, int a3, hkTrackerTypeTreeNode *a4, hkTrackerLayoutCalculator *a5, int *a6);
// [0x1a9cd10] (250 bytes) hkTrackerJobQueueDynamicDataLayoutHandler::getReferences(hkTrackerLayoutBlock *,void const*,hkTrackerTypeTreeNode const*,hkTrackerLayoutCalculator *,hkArray<hkTrackerLayoutBlock const*,hkContainerTempAllocator> &)
// const char *hkTrackerJobQueueDynamicDataLayoutHandler::getReferences( int a1, uint32_t *a2, int a3, hkTrackerTypeTreeNode *a4, hkTrackerLayoutCalculator *a5, int *a6);
// [0x1a9ce10] (96 bytes) hkTrackerJobQueueLayoutHandler::~hkTrackerJobQueueLayoutHandler()
// void hkTrackerJobQueueLayoutHandler::~hkTrackerJobQueueLayoutHandler(hkTrackerJobQueueLayoutHandler *this);
// [0x1a9ce70] (96 bytes) hkTrackerJobQueueDynamicDataLayoutHandler::~hkTrackerJobQueueDynamicDataLayoutHandler()
// void hkTrackerJobQueueDynamicDataLayoutHandler::~hkTrackerJobQueueDynamicDataLayoutHandler( hkTrackerJobQueueDynamicDataLayoutHandler *this);
// [0x1aafcb0] (22 bytes) hkMemoryMeshBody::staticClass(void)
// void *hkMemoryMeshBody::staticClass();
// [0x1aafdc0] (9 bytes) hkMeshBody::getIndexTransformsOrder(void)const
// int hkMeshBody::getIndexTransformsOrder();
// [0x1aafdd0] (9 bytes) hkMeshBody::getIndexTransformNames(void)const
// int hkMeshBody::getIndexTransformNames();
// [0x1aafde0] (9 bytes) hkMeshBody::getIndexMappings(void)const
// int hkMeshBody::getIndexMappings();
// [0x1aafdf0] (9 bytes) hkMeshBody::getNumIndexMappings(void)const
// int hkMeshBody::getNumIndexMappings();
// [0x1aafe00] (13 bytes) hkMeshBody::setPickingData(int,void *)
// hkMeshBody *hkMeshBody::setPickingData(hkMeshBody *this, int a2, void *a3);
// [0x1aafe10] (9 bytes) hkMeshBody::getName(void)const
// int hkMeshBody::getName();
// [0x1aafe20] (9 bytes) hkMeshBody::setName(char const*)
// void hkMeshBody::setName();
// [0x1aafe30] (12 bytes) hkMemoryMeshBody::getMeshShape(void)const
// int hkMemoryMeshBody::getMeshShape(hkMemoryMeshBody *this);
// [0x1aafe40] (13 bytes) hkMemoryMeshBody::setPickingData(int,void *)
// hkMemoryMeshBody *hkMemoryMeshBody::setPickingData(hkMemoryMeshBody *this, int a2, void *a3);
// [0x1aafe50] (15 bytes) hkMemoryMeshBody::getVertexBuffer(int)
// int hkMemoryMeshBody::getVertexBuffer(hkMemoryMeshBody *this, int a2);
// [0x1aafe60] (19 bytes) hkMemoryMeshBody::getNumIndexedTransforms(void)
// int hkMemoryMeshBody::getNumIndexedTransforms(hkMemoryMeshBody *this);
// [0x1aafe80] (13 bytes) hkMemoryMeshBody::getIndexTransformsOrder(void)const
// int hkMemoryMeshBody::getIndexTransformsOrder(hkMemoryMeshBody *this);
// [0x1aafe90] (13 bytes) hkMemoryMeshBody::getIndexTransformNames(void)const
// int hkMemoryMeshBody::getIndexTransformNames(hkMemoryMeshBody *this);
// [0x1aafea0] (13 bytes) hkMemoryMeshBody::getIndexMappings(void)const
// int hkMemoryMeshBody::getIndexMappings(hkMemoryMeshBody *this);
// [0x1aafeb0] (19 bytes) hkMemoryMeshBody::getNumIndexMappings(void)const
// int hkMemoryMeshBody::getNumIndexMappings(hkMemoryMeshBody *this);
// [0x1aafed0] (9 bytes) hkMemoryMeshBody::completeUpdate(void)
// void hkMemoryMeshBody::completeUpdate();
// [0x1aafee0] (9 bytes) hkMemoryMeshBody::completeUpdate(hkMatrix4f const&)
// void hkMemoryMeshBody::completeUpdate();
// [0x1aafef0] (13 bytes) hkMemoryMeshBody::getName(void)const
// unsigned int hkMemoryMeshBody::getName(hkMemoryMeshBody *this);
// [0x1aaff00] (29 bytes) hkMeshBody::~hkMeshBody()
// void hkMeshBody::~hkMeshBody(hkMeshBody *this);
// [0x1aaff20] (61 bytes) hkMemoryMeshBody::setIndexedTransforms(int,hkMatrix4f const*,int)
// int hkMemoryMeshBody::setIndexedTransforms(hkIndexedTransformSet **this, int a2, const hkMatrix4f *a3, int a4);
// [0x1aaff60] (61 bytes) hkMemoryMeshBody::getIndexedTransforms(int,hkMatrix4f *,int)
// int hkMemoryMeshBody::getIndexedTransforms(hkIndexedTransformSet **this, int a2, hkMatrix4f *a3, int a4);
// [0x1aaffa0] (61 bytes) hkMemoryMeshBody::getIndexedInverseTransforms(int,hkMatrix4f *,int)
// int hkMemoryMeshBody::getIndexedInverseTransforms(hkIndexedTransformSet **this, int a2, hkMatrix4f *a3, int a4);
// [0x1aaffe0] (45 bytes) hkMemoryMeshBody::setName(char const*)
// hkStringPtr *hkMemoryMeshBody::setName(hkMemoryMeshBody *this, hkString *a2);
// [0x1ab0010] (96 bytes) hkMeshBody::~hkMeshBody()
// void hkMeshBody::~hkMeshBody(hkMeshBody *this);
// [0x1ab0070] (104 bytes) hkMemoryMeshBody::getTransform(hkMatrix4f &)const
// hkMatrix4f *hkMemoryMeshBody::getTransform(hkMemoryMeshBody *this, hkMatrix4f *a2);
// [0x1ab00e0] (104 bytes) hkMemoryMeshBody::setTransform(hkMatrix4f const&)
// hkMemoryMeshBody *hkMemoryMeshBody::setTransform(hkMemoryMeshBody *this, const hkMatrix4f *a2);
// [0x1ab0150] (346 bytes) hkMemoryMeshBody::~hkMemoryMeshBody()
// void hkMemoryMeshBody::~hkMemoryMeshBody(hkMemoryMeshBody *this);
// [0x1ab02b0] (93 bytes) hkMemoryMeshBody::~hkMemoryMeshBody()
// void hkMemoryMeshBody::~hkMemoryMeshBody(hkMemoryMeshBody *this);
// [0x1ab0310] (2950 bytes) hkMemoryMeshBody::hkMemoryMeshBody(hkMeshSystem *,hkMeshShape const*,hkMatrix4f const&,hkIndexedTransformSetCinfo *)
// uint32_t *hkMemoryMeshBody::hkMemoryMeshBody( uint32_t *a1, int a2, int *a3, uint32_t *a4, const hkIndexedTransformSetCinfo *a5);
// [0x1ab0ea0] (57 bytes) hkMemoryMeshBody::hkMemoryMeshBody(hkFinishLoadedObjectFlag)
// void hkMemoryMeshBody::hkMemoryMeshBody(uint32_t *a1);
// [0x1ab0ee0] (491 bytes) hkIndexedTransformSet::~hkIndexedTransformSet()
// void hkIndexedTransformSet::~hkIndexedTransformSet(hkIndexedTransformSet *this);
// [0x1ab10d0] (546 bytes) hkIndexedTransformSet::~hkIndexedTransformSet()
// void hkIndexedTransformSet::~hkIndexedTransformSet(hkIndexedTransformSet *this);
// [0x1ab1300] (57 bytes) hkIndexedTransformSetCinfo::hkIndexedTransformSetCinfo(void)
// void hkIndexedTransformSetCinfo::hkIndexedTransformSetCinfo(hkIndexedTransformSetCinfo *this);
// [0x1ab1340] (29 bytes) hkIndexedTransformSet::hkIndexedTransformSet(hkFinishLoadedObjectFlag)
// uint32_t *hkIndexedTransformSet::hkIndexedTransformSet(uint32_t *a1);
// [0x1ab1360] (2037 bytes) hkIndexedTransformSet::hkIndexedTransformSet(hkIndexedTransformSetCinfo const&)
// void hkIndexedTransformSet::hkIndexedTransformSet( hkIndexedTransformSet *this, const hkIndexedTransformSetCinfo *a2);
// [0x1ab1b60] (161 bytes) hkIndexedTransformSet::setMatrices(int,hkMatrix4f const*,int)
// void hkIndexedTransformSet::setMatrices(hkIndexedTransformSet *this, int a2, const hkMatrix4f *a3, int a4);
// [0x1ab1c10] (704 bytes) hkIndexedTransformSet::calculateMatrices(hkArray<hkMatrix4f,hkContainerHeapAllocator> &)const
// __m128i *hkIndexedTransformSet::calculateMatrices(uint32_t *a1, int *a2);
// [0x1ab1ed0] (2904 bytes) hkIndexedTransformSet::calculateMatrices(hkMatrix4f const&,hkArray<hkMatrix4f,hkContainerHeapAllocator> &)const
// unsigned int hkIndexedTransformSet::calculateMatrices(uint32_t *a1, float *a2, int *a3);
// [0x1ab2a30] (1312 bytes) hkIndexedTransformSet::calculateMatrix(int,hkMatrix4f &)const
// hkMatrix4f *hkIndexedTransformSet::calculateMatrix(hkIndexedTransformSet *this, int a2, __m128 *a3);
// [0x1ab2f50] (2941 bytes) hkIndexedTransformSet::calculateMatrix(hkMatrix4f const&,int,hkMatrix4f&)const
// hkMatrix4f *hkIndexedTransformSet::calculateMatrix( hkIndexedTransformSet *this, __m128 *a2, int a3, hkMatrix4f *a4);
// [0x1ab3ad0] (161 bytes) hkIndexedTransformSet::getMatrices(int,hkMatrix4f *,int)const
// void hkIndexedTransformSet::getMatrices(hkIndexedTransformSet *this, int a2, hkMatrix4f *a3, int a4);
// [0x1ab3b80] (563 bytes) hkIndexedTransformSet::getInverseMatrices(int,hkMatrix4f *,int)const
// void hkIndexedTransformSet::getInverseMatrices(hkIndexedTransformSet *this, int a2, hkMatrix4f *a3, int a4);
// [0x1ab3dc0] (177 bytes) hkIndexedTransformSet::setInverseMatrices(int,hkMatrix4f const*,int)
// __m128i *hkIndexedTransformSet::setInverseMatrices( hkIndexedTransformSet *this, int a2, const hkMatrix4f *a3, int a4);
// [0x1ab3f40] (22 bytes) hkIndexedTransformSet::staticClass(void)
// void *hkIndexedTransformSet::staticClass();
// [0x1ab3f60] (22 bytes) hkMeshBoneIndexMapping::staticClass(void)
// void *hkMeshBoneIndexMapping::staticClass();
// [0x1ab4110] (22 bytes) hkMeshBody::staticClass(void)
// void *hkMeshBody::staticClass();
// [0x1ab4250] (22 bytes) hkMeshMaterial::staticClass(void)
// void *hkMeshMaterial::staticClass();
// [0x1ab4270] (22 bytes) hkMeshSection::staticClass(void)
// void *hkMeshSection::staticClass();
// [0x1ab4290] (22 bytes) hkMeshSectionCinfo::staticClass(void)
// void *hkMeshSectionCinfo::staticClass();
// [0x1ab42b0] (22 bytes) hkMeshShape::staticClass(void)
// void *hkMeshShape::staticClass();
// [0x1ab45a0] (97 bytes) hkVertexFormat::Element::getText(hkStringBuf &)const
// int hkVertexFormat::Element::getText(hkVertexFormat::Element *this, hkStringBuf *a2);
// [0x1ab4610] (19 bytes) hkVertexFormat::hkVertexFormat(void)
// void hkVertexFormat::hkVertexFormat(hkVertexFormat *this);
// [0x1ab4630] (277 bytes) hkVertexFormat::operator==(hkVertexFormat const&)const
// int hkVertexFormat::operator==(hkVertexFormat *this, const hkVertexFormat *a2);
// [0x1ab4750] (72 bytes) hkVertexFormat::set(hkVertexFormat const&)
// int hkVertexFormat::set(hkVertexFormat *this, const hkVertexFormat *a2);
// [0x1ab47a0] (42 bytes) hkVertexFormat::operator=(hkVertexFormat const&)
// int hkVertexFormat::operator=(hkVertexFormat *this, const hkVertexFormat *a2);
// [0x1ab47d0] (42 bytes) hkVertexFormat::hkVertexFormat(hkVertexFormat const&)
// void hkVertexFormat::hkVertexFormat(hkVertexFormat *this, const hkVertexFormat *a2);
// [0x1ab4800] (95 bytes) hkVertexFormat::findNextSubUsage(hkVertexFormat::ComponentUsage)const
// int hkVertexFormat::findNextSubUsage(int a1);
// [0x1ab4860] (81 bytes) hkVertexFormat::findElementIndex(hkVertexFormat::ComponentUsage,int)const
// int hkVertexFormat::findElementIndex(int a1, char a2, int a3);
// [0x1ab48c0] (146 bytes) hkVertexFormat::isCanonicalOrder(void)const
// int hkVertexFormat::isCanonicalOrder(hkVertexFormat *this);
// [0x1ab4960] (104 bytes) hkVertexFormat::addElement(hkVertexFormat::ComponentUsage,hkVertexFormat::ComponentType,int,int)
// void hkVertexFormat::addElement(int a1, char a2, char a3, char a4, char a5);
// [0x1ab49d0] (113 bytes) hkVertexFormat::addElement(hkVertexFormat::Element const&)
// void hkVertexFormat::addElement(hkVertexFormat *this, const hkVertexFormat::Element *a2);
// [0x1ab4a50] (74 bytes) hkVertexFormat::calculateSharingType(void)const
// int hkVertexFormat::calculateSharingType(hkVertexFormat *this);
// [0x1ab4aa0] (109 bytes) hkMeshVertexBuffer::LockedVertices::findBufferIndex(hkVertexFormat::ComponentUsage,int)const
// int hkMeshVertexBuffer::LockedVertices::findBufferIndex(int a1, char a2, int a3);
// [0x1ab4c60] (863 bytes) hkVertexFormat::makeCanonicalOrder(void)
// int hkVertexFormat::makeCanonicalOrder(hkVertexFormat *this);
// [0x1ab4fc0] (210 bytes) hkInertiaTensorComputer::computeSphereVolumeMassProperties(float,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeSphereVolumeMassProperties( hkInertiaTensorComputer *this, float a2, float a3, hkMassProperties *a4);
// [0x1ab50a0] (876 bytes) hkInertiaTensorComputer::computeSphereSurfaceMassProperties(float,float,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeSphereSurfaceMassProperties( int a1, int a2, int a3, int a4, hkInertiaTensorComputer *this, float a6, float a7, float a8, hkMassProperties *a9);
// [0x1ab5410] (187 bytes) hkInertiaTensorComputer::computeBoxVolumeMassPropertiesDiagonalized(hkVector4f const&,float,hkVector4f&,float &)
// int hkInertiaTensorComputer::computeBoxVolumeMassPropertiesDiagonalized( int64_t this, float a2, hkVector4f *a3, float *a4);
// [0x1ab54d0] (213 bytes) hkInertiaTensorComputer::computeBoxVolumeMassProperties(hkVector4f const&,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeBoxVolumeMassProperties( int a1, int a2, int a3, int a4, hkInertiaTensorComputer *this, const hkVector4f *a6, float a7, hkMassProperties *a8);
// [0x1ab55b0] (1093 bytes) hkInertiaTensorComputer::computeBoxSurfaceMassProperties(hkVector4f const&,float,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeBoxSurfaceMassProperties( int a1, int a2, int a3, int a4, hkInertiaTensorComputer *this, const hkVector4f *a6, float a7, float a8, hkMassProperties *a9);
// [0x1ab5a00] (867 bytes) hkInertiaTensorComputer::computeVertexCloudMassProperties(float const*,int,int,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeVertexCloudMassProperties( hkInertiaTensorComputer *this, const float *a2, int a3, int a4, float a5, hkMassProperties *a6);
// [0x1ab5d70] (291 bytes) hkInertiaTensorComputer::shiftInertiaToCom(hkVector4f const&,hkSimdFloat32 const&,hkMatrix3f &)
// float *hkInertiaTensorComputer::shiftInertiaToCom(float *a1, float *a2, float *a3);
// [0x1ab5ea0] (77 bytes) hkInertiaTensorComputer::shiftInertiaFromCom(hkVector4f const&,hkSimdFloat32 const&,hkMatrix3f &)
// float *hkInertiaTensorComputer::shiftInertiaFromCom(float *a1, float *a2, float *a3);
// [0x1ab5ef0] (1171 bytes) hkInertiaTensorComputer::combineMassProperties(hkArray<hkMassElement,hkContainerHeapAllocator> const&,hkMassProperties &)
// uint32_t *hkInertiaTensorComputer::combineMassProperties(uint32_t *a1, int *a2, int a3);
// [0x1ab6390] (6289 bytes) hkInertiaTensorComputer::computeCapsuleVolumeMassProperties(hkVector4f const&,hkVector4f const&,float,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeCapsuleVolumeMassProperties( int a1, int a2, int a3, int a4, hkInertiaTensorComputer *this, const hkVector4f *a6, const hkVector4f *a7, float a8, float a9, hkMassProperties *a10);
// [0x1ab7c30] (1978 bytes) hkInertiaTensorComputer::computeCylinderVolumeMassProperties(hkVector4f const&,hkVector4f const&,float,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeCylinderVolumeMassProperties( float a1, float a2, float a3, float a4, hkInertiaTensorComputer *this, const hkVector4f *a6, const hkVector4f *a7, float a8, float a9, hkMassProperties *a10);
// [0x1ab83f0] (96 bytes) hkInertiaTensorComputer::simplifyInertiaTensorToOrientedParticle(hkMatrix3f &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::simplifyInertiaTensorToOrientedParticle( hkInertiaTensorComputer *this);
// [0x1ab9790] (1413 bytes) hkInertiaTensorComputer::computeGeometryVolumeMassProperties(hkGeometry const*,float,hkMassProperties &)
// int hkInertiaTensorComputer::computeGeometryVolumeMassProperties( int a1, int a2, int a3, int a4, InternalInertiaTensorComputer **this, const hkGeometry *a6, int a7);
// [0x1ab9d20] (3863 bytes) hkInertiaTensorComputer::computeTriangleSurfaceMassProperties(hkVector4f const&,hkVector4f const&,hkVector4f const&,float,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeTriangleSurfaceMassProperties( hkInertiaTensorComputer *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, float a5, float a6, hkMassProperties *a7);
// [0x1abac40] (1479 bytes) hkInertiaTensorComputer::computeGeometrySurfaceMassProperties(hkGeometry const*,float,hkBool,float,hkMassProperties &)
// uint32_t *hkInertiaTensorComputer::computeGeometrySurfaceMassProperties( uint32_t *a1, uint32_t *a2, float a3, char a4, float a5, int a6);
// [0x1abb210] (1188 bytes) hkInertiaTensorComputer::computeGeometryVolumeMassPropertiesChecked(hkGeometry const*,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeGeometryVolumeMassPropertiesChecked( int a1, int a2, int a3, int a4, hkInertiaTensorComputer *this, const hkGeometry *a6, float a7, hkMassProperties *a8);
// [0x1abb6c0] (75 bytes) hkMassProperties::scaleToMass(hkSimdFloat32 const&)
// float *hkMassProperties::scaleToMass(int a1, float *a2);
// [0x1abb710] (63 bytes) hkMassProperties::scaleToDensity(hkSimdFloat32 const&)
// float *hkMassProperties::scaleToDensity(float *a1, float *a2);
// [0x1abb750] (252 bytes) hkInertiaTensorComputer::computeApproximateConvexHullMassProperties(hkStridedVertices const&,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeApproximateConvexHullMassProperties( hkInertiaTensorComputer *a1, int a2, float a3, hkMassProperties *a4);
// [0x1abb850] (122 bytes) hkInertiaTensorComputer::computeConvexHullMassProperties(hkStridedVertices const&,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeConvexHullMassProperties( hkInertiaTensorComputer *a1, int a2, float a3, hkMassProperties *a4);
// [0x1abb8d0] (180 bytes) hkInertiaTensorComputer::computeVertexHullVolumeMassProperties(float const*,int,int,float,hkMassProperties &)
// hkInertiaTensorComputer *hkInertiaTensorComputer::computeVertexHullVolumeMassProperties( int a1, int a2, int a3, int a4, hkInertiaTensorComputer *this, const float *a6, int a7, int a8, float a9, hkMassProperties *a10);
// [0x1abb990] (989 bytes) hkInertiaTensorComputer::convertInertiaTensorToPrincipleAxis(hkMatrix3f &,hkRotationf &)
// int *hkInertiaTensorComputer::convertInertiaTensorToPrincipleAxis( hkInertiaTensorComputer *this, hkMatrix3f *a2);
// [0x1abbda0] (22 bytes) hkMeshVertexBuffer::staticClass(void)
// void *hkMeshVertexBuffer::staticClass();
// [0x1abbdc0] (22 bytes) hkVertexFormat::Element::staticClass(void)
// void *hkVertexFormat::Element::staticClass();
// [0x1abbde0] (22 bytes) hkVertexFormat::staticClass(void)
// void *hkVertexFormat::staticClass();
// [0x1abd510] (2964 bytes) hkSimplexSolverSolve
// int hkSimplexSolverSolve(int a1, __m128 *a2);
// [0x1abf4d0] (52 bytes) hkGeometryUtility::createVerticesFromPlaneEquations(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<hkVector4f,hkContainerHeapAllocator>&)
// int hkGeometryUtility::createVerticesFromPlaneEquations( hkGeometryUtility *this, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1abf510] (62 bytes) hkGeometryUtility::expandPlanes(hkArray<hkVector4f,hkContainerHeapAllocator> &,float)
// int hkGeometryUtility::expandPlanes(hkGeometryUtility *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1abf550] (2636 bytes) hkGeometryUtility::getAxesFromCovariance(hkMatrix3f &,hkVector4f &,hkVector4f &,hkVector4f &)
// hkGeometryUtility *hkGeometryUtility::getAxesFromCovariance( hkGeometryUtility *this, hkMatrix3f *a2, hkVector4f *a3, hkVector4f *a4, hkVector4f *a5);
// [0x1ac0f50] (1993 bytes) hkGeometryUtility::createMinBoundingSphere(hkStridedVertices const&)
// int hkGeometryUtility::createMinBoundingSphere(int a1, uint32_t *a2);
// [0x1ac1720] (52 bytes) hkGeometryUtility::createMinBoundingSphere(hkStridedVertices const&,float)
// int hkGeometryUtility::createMinBoundingSphere(int a1, uint32_t *a2);
// [0x1ac1760] (128 bytes) hkGeometryUtility::createConvexGeometry(hkStridedVertices const&,hkGeometry &)
// void hkGeometryUtility::createConvexGeometry(int a1, int *a2);
// [0x1ac17e0] (193 bytes) hkGeometryUtility::createGeometryFromPlaneEquations(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkGeometry &)
// int hkGeometryUtility::createGeometryFromPlaneEquations( hkGeometryUtility *this, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1ac18b0] (11269 bytes) hkGeometryUtility::calcObb(hkStridedVertices const&,hkVector4f &,hkTransformf &,hkGeomObbMode)
// int hkGeometryUtility::calcObb(int a1, float *a2, hkTransformf *a3, int a4);
// [0x1ac44c0] (165 bytes) hkGeometryUtility::createConvexGeometry(hkStridedVertices const&,hkGeometry &,hkArray<hkVector4f,hkContainerHeapAllocator> &)
// void hkGeometryUtility::createConvexGeometry( int a1, int *a2, hkArray<hkVector4f, hkContainerHeapAllocator> *a3);
// [0x1ac4570] (817 bytes) hkPlaneEquationUtil::findTriPlaneIntersectionPoint(hkArray<hkVector4f,hkContainerHeapAllocator> const&,int,int,int,hkPlaneEquationUtil::IntersectionPoint &)
// uint32_t *hkPlaneEquationUtil::findTriPlaneIntersectionPoint( uint32_t *a1, uint32_t *a2, int a3, int a4, int a5, int a6);
// [0x1ac48b0] (848 bytes) hkPlaneEquationUtil::findPlanarIntersections(hkVector4f const&,hkArray<hkVector4f,hkContainerHeapAllocator> const&,int,int,hkPlaneEquationUtil::IntersectionPoint &,hkPlaneEquationUtil::IntersectionPoint &)
// uint32_t *hkPlaneEquationUtil::findPlanarIntersections( uint32_t *a1, float *a2, uint32_t *a3, int a4, int a5, float *a6, float *a7);
// [0x1ac4c00] (940 bytes) hkPlaneEquationUtil::isNextIntersectionPoint(hkVector4f const&,hkArray<hkVector4f,hkContainerHeapAllocator> const&,int,int,hkVector4f&,hkArray<hkPlaneEquationUtil::IntersectionPoint,hkContainerHeapAllocator> &)
// char *hkPlaneEquationUtil::isNextIntersectionPoint( char *a1, float *a2, uint32_t *a3, int a4, int a5, int a6, hkMemoryAllocator *a7);
// [0x1ac4fb0] (1081 bytes) hkPlaneEquationUtil::getStartingPoint(hkArray<hkVector4f,hkContainerHeapAllocator> const&,int &,int &,hkPlaneEquationUtil::IntersectionPoint &,hkPlaneEquationUtil::IntersectionPoint &)
// uint32_t *hkPlaneEquationUtil::getStartingPoint( uint32_t *a1, uint32_t *a2, int *a3, int *a4, float *a5, float *a6);
// [0x1ac53f0] (252 bytes) hkPlaneEquationUtil::calculateIntersectionLine(hkArray<hkVector4f,hkContainerHeapAllocator> const&,int,int,int,hkVector4f&)
// int hkPlaneEquationUtil::calculateIntersectionLine( hkPlaneEquationUtil *this, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2, int a3, int a4, int a5);
// [0x1ac54f0] (794 bytes) hkPlaneEquationUtil::walkAlongEdge(hkPlaneEquationUtil::VisitedEdge &,hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<hkPlaneEquationUtil::VisitedEdge,hkContainerHeapAllocator> &,hkArray<hkVector4f,hkContainerHeapAllocator>&)
// const hkArray<hkVector4f, hkContainerHeapAllocator> **hkPlaneEquationUtil::walkAlongEdge( const hkArray<hkVector4f, hkContainerHeapAllocator> **a1, hkPlaneEquationUtil *a2, hkMemoryAllocator *a3, hkMemoryAllocator *a4);
// [0x1ac5810] (544 bytes) hkPlaneEquationUtil::weldXsortedVertices(float,hkArray<hkVector4f,hkContainerHeapAllocator> &,int &)
// unsigned int *hkPlaneEquationUtil::weldXsortedVertices( hkPlaneEquationUtil *this, int *a2, hkArray<hkVector4f, hkContainerHeapAllocator> *a3);
// [0x1ac5a30] (189 bytes) hkPlaneEquationUtil::getConvexVerticesFromPlaneEquations(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<hkVector4f,hkContainerHeapAllocator>&)
// hkPlaneEquationUtil *hkPlaneEquationUtil::getConvexVerticesFromPlaneEquations( hkPlaneEquationUtil *this, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2, hkArray<hkVector4f, hkContainerHeapAllocator> *a3);
// [0x1ac5af0] (34 bytes) hkGetSystemTime
// time_t hkGetSystemTime();
// [0x1ac5b20] (118 bytes) hkGeomHull::hkGeomHull(void)
// void hkGeomHull::hkGeomHull(hkGeomHull *this);
// [0x1ac5ba0] (117 bytes) hkGeomHull::initializeWithVertex(int)
// int hkGeomHull::initializeWithVertex(hkGeomHull *this, uint16_t a2);
// [0x1ac5c20] (215 bytes) hkGeomHull::initializeWithEdge(int,int)
// int hkGeomHull::initializeWithEdge(hkGeomHull *this, int16_t a2, uint16_t a3);
// [0x1ac5d00] (1583 bytes) hkGeomHull::initializeWithTriangle(int,int,int)
// int hkGeomHull::initializeWithTriangle(hkGeomHull *this, int a2, int a3, int a4);
// [0x1ac6330] (327 bytes) hkGeomHull::visitAllNextAndMirrorEdges(hkGeomEdge *)
// int hkGeomHull::visitAllNextAndMirrorEdges(int a1, int a2);
// [0x1ac6480] (404 bytes) hkGeomHull::isValidTopology(void)
// hkGeomHull *hkGeomHull::isValidTopology(hkGeomHull *this, int a2);
// [0x1ac6620] (84 bytes) hkGeomConvexHullBuilder::vectorLessAndMergeCoordinates(hkVector4f &,hkVector4f &)
// hkGeomConvexHullBuilder *hkGeomConvexHullBuilder::vectorLessAndMergeCoordinates( hkGeomConvexHullBuilder *this, hkVector4f *a2, hkVector4f *a3);
// [0x1ac66c0] (107 bytes) hkGeomConvexHullBuilder::getPseudoAngle(hkSimdFloat32 const&,hkSimdFloat32 const&)
// float *hkGeomConvexHullBuilder::getPseudoAngle(float *a1, float *a2, float *a3);
// [0x1ac6730] (4028 bytes) hkGeomConvexHullBuilder::generateHullFromPlanarPoints(hkVector4f const&,hkVector4f const*,int,hkArray<hkVector4f,hkContainerHeapAllocator> &,hkArray<hkVector4f,hkContainerHeapAllocator> &)
// int *hkGeomConvexHullBuilder::generateHullFromPlanarPoints( hkGeomConvexHullBuilder *this, const hkVector4f *a2, const hkVector4f *a3, hkMemoryAllocator *a4, hkArray<hkVector4f, hkContainerHeapAllocator> *a5);
// [0x1ac76f0] (222 bytes) hkGeomConvexHullBuilder::getAabb(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkAabb &)
// float *hkGeomConvexHullBuilder::getAabb( hkGeomConvexHullBuilder *this, const hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1ac77d0] (543 bytes) hkGeomConvexHullBuilder::weldXsortedVertices(float,hkArray<hkVector4f,hkContainerHeapAllocator> &,int &)
// unsigned int *hkGeomConvexHullBuilder::weldXsortedVertices( hkGeomConvexHullBuilder *this, int *a2, hkArray<hkVector4f, hkContainerHeapAllocator> *a3);
// [0x1ac79f0] (9 bytes) hkGeomConvexHullBuilder::printEdges(hkGeomHull &)
// void hkGeomConvexHullBuilder::printEdges();
// [0x1ac7a00] (278 bytes) hkGeomConvexHullBuilder::buildGeometry(hkGeomHull &,hkGeometry &)
// int hkGeomConvexHullBuilder::buildGeometry(hkGeomConvexHullBuilder *this, hkGeomHull *a2);
// [0x1ac7b20] (2408 bytes) hkGeomConvexHullBuilder::postFilterVertices(hkGeomHull &,int,int,hkGeomConvexHullTolerances const&,hkBool &)
// char *hkGeomConvexHullBuilder::postFilterVertices(char *a1, char *a2, char *a3, int a4, uint8_t *a5);
// [0x1ac8490] (721 bytes) hkGeomConvexHullBuilder::createBevelPlane(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkArray<hkVector4f,hkContainerHeapAllocator> &)
// const hkVector4f *hkGeomConvexHullBuilder::createBevelPlane( hkGeomConvexHullBuilder *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x1ac8770] (1234 bytes) hkGeomConvexHullBuilder::convertToUnitCube(hkArray<hkVector4f,hkContainerHeapAllocator> &,hkVector4f&,hkVector4f&)
// int hkGeomConvexHullBuilder::convertToUnitCube( hkGeomConvexHullBuilder *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2, hkVector4f *a3);
// [0x1ac8c50] (516 bytes) hkGeomConvexHullBuilder::convertFromUnitCube(hkArray<hkVector4f,hkContainerHeapAllocator> &,hkVector4f&,hkVector4f&)
// uint32_t *hkGeomConvexHullBuilder::convertFromUnitCube( hkGeomConvexHullBuilder *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2, hkVector4f *a3);
// [0x1ac8e60] (166 bytes) hkGeomConvexHullBuilder::draw(hkGeomHull &,unsigned int,hkTextDisplay *)
// hkMemoryAllocator *hkGeomConvexHullBuilder::draw(int a1);
// [0x1ac8f10] (9 bytes) hkGeomConvexHullBuilder::drawPlane(hkVector4f const&,hkVector4f const&,unsigned int)
// void hkGeomConvexHullBuilder::drawPlane();
// [0x1ac8f20] (1950 bytes) hkGeomConvexHullBuilder::isSingleLine(float,hkGeomHull &,hkGeomHull &,hkGeomHull &)
// hkGeomConvexHullBuilder *hkGeomConvexHullBuilder::isSingleLine( hkGeomConvexHullBuilder *this, float a2, hkGeomHull *a3, hkGeomHull *a4, hkGeomHull *a5);
// [0x1ac96c0] (194 bytes) hkGeomConvexHullBuilder::removeFlaggedVertices(hkArray<hkVector4f,hkContainerHeapAllocator> &)
// void hkGeomConvexHullBuilder::removeFlaggedVertices(hkGeomConvexHullBuilder *this);
// [0x1ac9790] (1795 bytes) hkGeomConvexHullBuilder::removeCollinearVertices(hkArray<hkVector4f,hkContainerHeapAllocator> &,float)
// void hkGeomConvexHullBuilder::removeCollinearVertices( hkGeomConvexHullBuilder *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x1ac9ea0] (628 bytes) hkGeomConvexHullBuilder::removeUnusedVertices(hkGeomHull &,hkArray<hkVector4f,hkContainerHeapAllocator> &)
// int hkGeomConvexHullBuilder::removeUnusedVertices(hkGeomConvexHullBuilder *this, hkGeomHull *a2);
// [0x1aca120] (428 bytes) hkGeomConvexHullBuilder::appendAndReindexEdges(hkGeomHull &,hkBool,hkGeomHull &,hkArray<unsigned short,hkContainerHeapAllocator> &)
// int hkGeomConvexHullBuilder::appendAndReindexEdges(int a1, int a2, uint32_t *a3, int *a4);
// [0x1aca2d0] (1675 bytes) hkGeomConvexHullBuilder::stitchHulls(hkGeomHull &,hkGeomHull &,hkArray<hkGeomConvexHullBuilder::WrappingLine,hkContainerHeapAllocator> &,hkGeomHull &)
// int hkGeomConvexHullBuilder::stitchHulls(int a1, int a2, uint32_t *a3, int *a4);
// [0x1aca960] (1024 bytes) hkGeomConvexHullBuilder::getPlaneEquationZaxis(hkVector4f const&,hkVector4f const&,hkVector4f&)
// const hkVector4f *hkGeomConvexHullBuilder::getPlaneEquationZaxis( hkGeomConvexHullBuilder *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x1acad60] (660 bytes) hkGeomConvexHullBuilder::getCommonTangent(hkGeomHull &,hkGeomHull &,hkGeomConvexHullBuilder::WeightedLine &,hkVector4f &)
// int hkGeomConvexHullBuilder::getCommonTangent(int *a1, int a2, uint32_t *a3, hkVector4f *a4);
// [0x1acb000] (931 bytes) hkGeomConvexHullBuilder::addWrappingLines(hkpGeomConvexHullConfig const&,hkGeomConvexHullBuilder::WeightedLine *,hkArray<hkGeomConvexHullBuilder::WeightedNeighbour,hkContainerHeapAllocator> &,hkArray<hkGeomConvexHullBuilder::WeightedNeighbour,hkContainerHeapAllocator> &,hkArray<hkGeomConvexHullBuilder::WeightedLine,hkContainerHeapAllocator> &)
// float hkGeomConvexHullBuilder::addWrappingLines( float result, float *a2, int a3, int *a4, uint32_t *a5, hkMemoryAllocator *a6);
// [0x1acb3b0] (412 bytes) hkGeomConvexHullBuilder::isValidEdgeCheck(hkGeomHull &,hkGeomEdge *,int)
// uint8_t *hkGeomConvexHullBuilder::isValidEdgeCheck(uint8_t *a1, int a2, int a3, int a4);
// [0x1acb550] (1434 bytes) hkGeomConvexHullBuilder::isValidWrapping(hkGeomHull &,hkGeomEdge *,hkBool,hkArray<hkGeomConvexHullBuilder::WrappingLine,hkContainerHeapAllocator> &)
// bool *hkGeomConvexHullBuilder::isValidWrapping(bool *a1, int a2, int a3, char a4, int **a5);
// [0x1acbaf0] (526 bytes) hkGeomConvexHullBuilder::findWrapping(hkGeomHull &,hkGeomHull &,hkArray<hkGeomConvexHullBuilder::WeightedLine,hkContainerHeapAllocator> const&,hkArray<hkGeomConvexHullBuilder::WrappingLine,hkContainerHeapAllocator> &)
// uint32_t *hkGeomConvexHullBuilder::findWrapping(int a1, int a2, uint32_t *a3, int *a4);
// [0x1acbd00] (1088 bytes) hkGeomConvexHullBuilder::getAngleBetweenVertexAndPlane(hkGeomConvexHullTolerances const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// long double hkGeomConvexHullBuilder::getAngleBetweenVertexAndPlane( int a1, float *a2, float *a3, float *a4, float *a5);
// [0x1acc140] (68 bytes) hkGeomConvexHullBuilder::PlaneAndPoints::sort(void)
// hkGeomConvexHullBuilder::PlaneAndPoints *hkGeomConvexHullBuilder::PlaneAndPoints::sort(uint16_t **this);
// [0x1acc190] (714 bytes) hkGeomConvexHullBuilder::PlaneAndPoints::findPair(hkGeomEdge *,hkGeomEdge *,hkGeomEdge *,hkGeomEdge *,hkGeomEdge *,hkGeomConvexHullBuilder::PlaneAndPoints&,hkGeomConvexHullBuilder::PlaneAndPoints&)
// bool *hkGeomConvexHullBuilder::PlaneAndPoints::findPair( bool *a1, int a2, int16_t *a3, int16_t *a4, int16_t *a5, int16_t *a6);
// [0x1acc930] (6320 bytes) hkGeomConvexHullBuilder::buildPlaneEquations(hkGeomConvexHullTolerances const&,hkGeomHull &,hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkVector4f&,hkBool &,hkArray<hkVector4f,hkContainerHeapAllocator>&,hkArray<hkGeomConvexHullBuilder::PlaneAndPoints,hkContainerHeapAllocator> &)
// uint8_t *hkGeomConvexHullBuilder::buildPlaneEquations( uint8_t *a1, int a2, uint32_t *a3, const hkVector4f **a4, float *a5, uint8_t *a6, int *a7, int *a8);
// [0x1ace1e0] (185 bytes) hkGeomConvexHullBuilder::buildPlaneEquations(hkGeomConvexHullTolerances const&,hkGeomHull &,hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<hkVector4f,hkContainerHeapAllocator>&)
// uint8_t *hkGeomConvexHullBuilder::buildPlaneEquations( uint8_t *a1, int a2, uint32_t *a3, const hkVector4f **a4, int *a5);
// [0x1ace2a0] (373 bytes) hkGeomConvexHullBuilder::getMaximumDistance(hkGeomHull &,hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<hkVector4f,hkContainerHeapAllocator> const&)
// long double hkGeomConvexHullBuilder::getMaximumDistance( hkGeomConvexHullBuilder *this, const hkVector4f **a2, const hkArray<hkVector4f, hkContainerHeapAllocator> *a3);
// [0x1ace970] (1218 bytes) hkGeomConvexHullBuilder::calculateNewNeighbours(hkVector4f const*,hkGeomConvexHullTolerances const&,float,hkVector4f const&,hkGeomEdge const*,hkVector4f const*,hkVector4f const*,hkArray<hkGeomConvexHullBuilder::WeightedNeighbour,hkContainerHeapAllocator> &)
// int hkGeomConvexHullBuilder::calculateNewNeighbours( int a1, int a2, float a3, int a4, uint16_t *a5, int a6, float *a7, int *a8);
// [0x1acee40] (698 bytes) hkGeomConvexHullBuilder::removeCoPlanarNeighbours(hkGeomConvexHullTolerances const&,hkGeomHull &,hkVector4f const&,hkGeomEdge const*,hkVector4f const*,hkVector4f const*,hkArray<hkGeomConvexHullBuilder::WeightedNeighbour,hkContainerHeapAllocator> &)
// int hkGeomConvexHullBuilder::removeCoPlanarNeighbours( int a1, int *a2, int a3, uint16_t *a4, int a5, float *a6, int *a7);
// [0x1acf100] (352 bytes) hkGeomConvexHullBuilder::findWeightedNeighbours(hkGeomConvexHullTolerances const&,hkGeomHull &,hkVector4f const&,unsigned short,hkGeomEdge const*,hkVector4f const*,hkVector4f const*,hkArray<hkGeomConvexHullBuilder::WeightedNeighbour,hkContainerHeapAllocator> &)
// int hkGeomConvexHullBuilder::findWeightedNeighbours( int a1, int *a2, float *a3, int16_t a4, uint16_t *a5, float *a6, float *a7, int *a8);
// [0x1acf260] (375 bytes) hkGeomConvexHullBuilder::validateNeighbours(hkGeomConvexHullTolerances const&,hkVector4f const*,hkVector4f const&,unsigned short,hkGeomConvexHullBuilder::WeightedLine *,hkVector4f const*,hkVector4f const*,hkArray<hkGeomConvexHullBuilder::WeightedNeighbour,hkContainerHeapAllocator> &,hkArray<hkGeomConvexHullBuilder::WeightedNeighbour,hkContainerHeapAllocator> &)
// float *hkGeomConvexHullBuilder::validateNeighbours( int a1, int a2, int a3, float *a4, int a5, int a6, float *a7, float **a8, float **a9);
// [0x1acf3e0] (4998 bytes) hkGeomConvexHullBuilder::mergeHulls(hkGeomConvexHullTolerances const&,hkGeomHull &,hkGeomHull &,hkGeomHull &)
// uint32_t *hkGeomConvexHullBuilder::mergeHulls( uint32_t *a1, int a2, int *a3, hkGeomHull *a4, hkGeomHull *a5);
// [0x1ad0770] (2495 bytes) hkGeomConvexHullBuilder::buildConvexSubHull(hkGeomConvexHullTolerances const&,hkArray<hkVector4f,hkContainerHeapAllocator> &,int,int,hkGeomHull &)
// int hkGeomConvexHullBuilder::buildConvexSubHull(int a1, int *a2, char *a3, char *a4, hkGeomHull *a5);
// [0x1ad1130] (570 bytes) hkGeomConvexHullBuilder::buildConvexHull(hkGeomConvexHullTolerances const&,hkVector4f const*,int,hkGeomHull &,hkArray<hkVector4f,hkContainerHeapAllocator> &)
// hkVector4f *hkGeomConvexHullBuilder::buildConvexHull( hkVector4f *a1, int *a2, int a3, hkGeomHull *a4, hkGeomConvexHullBuilder *a5);
// [0x1ad1370] (1662 bytes) hkGeomConvexHullBuilder::generateConvexHull(hkVector4f const*,int,hkGeomHull &,hkArray<hkVector4f,hkContainerHeapAllocator> &,hkGeomConvexHullMode)
// int hkGeomConvexHullBuilder::generateConvexHull( int *a1, int a2, hkGeomHull *a3, hkGeomConvexHullBuilder *a4, int a5);
// [0x1ad1a10] (298 bytes) hkGeomConvexHullTester::checkPlaneEquations(hkArray<hkVector4f,hkContainerHeapAllocator> &,hkArray<hkVector4f,hkContainerHeapAllocator> &,hkArray<hkVector4f,hkContainerHeapAllocator> &,float)
// hkGeomConvexHullTester *hkGeomConvexHullTester::checkPlaneEquations( hkGeomConvexHullTester *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2, hkArray<hkVector4f, hkContainerHeapAllocator> *a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4, float a5);
// [0x1ad1b40] (348 bytes) hkGeomConvexHullTester::findSameEdges(hkGeomConvexHullBuilder::PlaneAndPoints const&,hkGeomConvexHullBuilder::PlaneAndPoints const&,hkBool &,hkBool &,hkBool &)
// uint8_t *hkGeomConvexHullTester::findSameEdges( uint8_t *a1, uint32_t *a2, uint16_t **a3, uint8_t *a4, uint8_t *a5, uint8_t *a6);
// [0x1ad1ca0] (325 bytes) hkGeomConvexHullTester::isValidPlanarHull(hkArray<hkVector4f,hkContainerHeapAllocator> &,hkGeomHull &,hkArray<hkVector4f,hkContainerHeapAllocator> &,hkArray<hkVector4f,hkContainerHeapAllocator> &,hkArray<hkGeomConvexHullBuilder::PlaneAndPoints,hkContainerHeapAllocator> &,float)
// bool *hkGeomConvexHullTester::isValidPlanarHull( bool *a1, hkArray<hkVector4f, hkContainerHeapAllocator> *a2, int a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4, hkArray<hkVector4f, hkContainerHeapAllocator> *a5, uint32_t *a6, float a7);
// [0x1ad1df0] (712 bytes) hkGeomConvexHullTester::isValidNonPlanarHull(hkArray<hkVector4f,hkContainerHeapAllocator> &,hkGeomHull &,hkArray<hkVector4f,hkContainerHeapAllocator> &,hkArray<hkVector4f,hkContainerHeapAllocator> &,hkArray<hkGeomConvexHullBuilder::PlaneAndPoints,hkContainerHeapAllocator> &,float)
// bool *hkGeomConvexHullTester::isValidNonPlanarHull( bool *a1, hkArray<hkVector4f, hkContainerHeapAllocator> *a2, int a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4, hkArray<hkVector4f, hkContainerHeapAllocator> *a5, uint32_t *a6, float a7);
// [0x1ad20c0] (933 bytes) hkGeomConvexHullTester::isValidHull(hkGeomConvexHullTolerances const&,hkVector4f const*,int,hkGeomHull &,hkArray<hkVector4f,hkContainerHeapAllocator> &)
// bool *hkGeomConvexHullTester::isValidHull( bool *a1, int a2, int *a3, int a4, uint32_t *a5, hkGeomConvexHullBuilder *a6);
// [0x1ad4990] (927 bytes) hkClipEdgeAgainstPlanes(hkVector4f const&,hkVector4f const&,int,hkVector4f const*,float &,float &)
// int hkClipEdgeAgainstPlanes( const hkVector4f *a1, const hkVector4f *a2, int a3, const hkVector4f *a4, float *a5, float *a6);
// [0x1ad52d0] (1397 bytes) hkBuildClipPlanesForTriangle(hkVector4f *,hkpTriangleShape const*,float)
// const hkVector4f *hkBuildClipPlanesForTriangle(hkVector4f *a1, const hkpTriangleShape *a2, float a3);
