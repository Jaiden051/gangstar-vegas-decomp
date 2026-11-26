#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_base_part03.h
// Library: havok | Module: havok_base_part03
// Binary Address Span: 0x157bf40 .. 0x1646590 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x157bf40] (45 bytes) hkFixedSizeAllocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkFixedSizeAllocator::getMemoryStatistics(int a1, int a2);
// [0x157bf70] (58 bytes) hkFixedSizeAllocator::~hkFixedSizeAllocator()
// void hkFixedSizeAllocator::~hkFixedSizeAllocator(hkFixedSizeAllocator *this);
// [0x157bfb0] (58 bytes) hkFixedSizeAllocator::~hkFixedSizeAllocator()
// void hkFixedSizeAllocator::~hkFixedSizeAllocator(hkFixedSizeAllocator *this);
// [0x157bff0] (93 bytes) hkFixedSizeAllocator::bufAlloc(int &)
// uint32_t *hkFixedSizeAllocator::bufAlloc(hkFixedSizeAllocator *this);
// [0x157c050] (93 bytes) hkFixedSizeAllocator::blockAlloc(int)
// uint32_t *hkFixedSizeAllocator::blockAlloc(hkFixedSizeAllocator *this);
// [0x157c0b0] (77 bytes) hkFixedSizeAllocator::init(unsigned int,unsigned int,unsigned int,hkMemoryAllocator *)
// int hkFixedSizeAllocator::init( hkFixedSizeAllocator *this, unsigned int a2, unsigned int a3, unsigned int a4, hkMemoryAllocator *a5);
// [0x157c100] (255 bytes) hkClassEnum::decomposeFlags(int,hkArray<char const*,hkContainerHeapAllocator> &,int &)const
// uint32_t *hkClassEnum::decomposeFlags(uint32_t *a1, int a2, int a3, hkMemoryAllocator *a4, uint32_t *a5);
// [0x157c200] (93 bytes) hkClassEnum::getNameOfValue(int,char const**)const
// hkClassEnum *hkClassEnum::getNameOfValue(hkClassEnum *this, int a2, const char **a3, uint32_t *a4);
// [0x157c260] (141 bytes) hkClassEnum::getValueOfName(char const*,int *)const
// hkClassEnum *hkClassEnum::getValueOfName(hkClassEnum *this, const char *a2, hkString *a3, uint32_t *a4);
// [0x157c2f0] (123 bytes) hkClassEnum::getAttribute(char const*)const
// int hkClassEnum::getAttribute(hkClassEnum *this, char *a2);
// [0x157c370] (214 bytes) hkClassEnum::writeSignature(hkStreamWriter *)const
// void hkClassEnum::writeSignature(hkString **this, hkStreamWriter *a2);
// [0x157c450] (81 bytes) hkClassEnum::getSignature(void)const
// int hkClassEnum::getSignature(hkString **this);
// [0x157c770] (22 bytes) hkIntRealPair::staticClass(void)
// void *hkIntRealPair::staticClass();
// [0x157c790] (22 bytes) hkSetIntFloatPair::staticClass(void)
// void *hkSetIntFloatPair::staticClass();
// [0x157c7b0] (22 bytes) hkSetUint32::staticClass(void)
// void *hkSetUint32::staticClass();
// [0x157c7d0] (22 bytes) hkSetUint64::staticClass(void)
// void *hkSetUint64::staticClass();
// [0x157ccb0] (81 bytes) hkPseudoRandomGenerator::getRandReal01(void)
// long double hkPseudoRandomGenerator::getRandReal01(hkPseudoRandomGenerator *this);
// [0x157cd10] (422 bytes) hkPseudoRandomGenerator::getRandomRotation(hkRotationf &)
// hkRotationf *hkPseudoRandomGenerator::getRandomRotation(hkPseudoRandomGenerator *this, hkRotationf *a2);
// [0x157cec0] (404 bytes) hkPseudoRandomGenerator::getRandomRotation(hkQuaternionf &)
// __m128 *hkPseudoRandomGenerator::getRandomRotation(hkPseudoRandomGenerator *a1, __m128 *a2);
// [0x157d060] (173 bytes) hkPseudoRandomGenerator::getRandomVector11(hkVector4f &)
// void hkPseudoRandomGenerator::getRandomVector11(hkPseudoRandomGenerator *this, hkVector4f *a2);
// [0x157d110] (197 bytes) hkPseudoRandomGenerator::getRandomVectorRange(float,hkVector4f &)
// void hkPseudoRandomGenerator::getRandomVectorRange(hkPseudoRandomGenerator *this, float a2, hkVector4f *a3);
// [0x157d1e0] (125 bytes) hkPseudoRandomGenerator::getRandomVector01(hkVector4f &)
// void hkPseudoRandomGenerator::getRandomVector01(hkPseudoRandomGenerator *this, hkVector4f *a2);
// [0x157d260] (172 bytes) hkPseudoRandomGenerator::getRandomVectorRange(hkVector4f const&,hkVector4f const&,hkVector4f&)
// const hkVector4f *hkPseudoRandomGenerator::getRandomVectorRange( hkPseudoRandomGenerator *this, const hkVector4f *a2, const hkVector4f *a3, hkVector4f *a4);
// [0x157d310] (172 bytes) hkPseudoRandomGenerator::getRandomPointInTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&)
// hkVector4f *hkPseudoRandomGenerator::getRandomPointInTriangle( hkPseudoRandomGenerator *this, __m128 *a2, __m128 *a3, __m128 *a4, hkVector4f *a5);
// [0x157d3c0] (63 bytes) hkPseudoRandomGenerator::randomizeMemory(void *,int)
// char *hkPseudoRandomGenerator::randomizeMemory(hkPseudoRandomGenerator *this, char *a2, int a3);
// [0x157d420] (22 bytes) hkPackedVector3::staticClass(void)
// void *hkPackedVector3::staticClass();
// [0x157d440] (22 bytes) hkPackedVector8_3::staticClass(void)
// void *hkPackedVector8_3::staticClass();
// [0x157d5d0] (61 bytes) hkMemoryInitUtil::outputDebugString(char const*,void *)
// int hkMemoryInitUtil::outputDebugString(hkMemoryInitUtil *this);
// [0x157d610] (141 bytes) hkMemoryInitUtil::quit(void)
// hkMemoryInitUtil *hkMemoryInitUtil::quit(hkMemoryInitUtil *this);
// [0x157d6a0] (52 bytes) hkMemoryInitUtil::refreshDebugSymbols(void)
// void hkMemoryInitUtil::refreshDebugSymbols();
// [0x157d7c0] (477 bytes) hkGeometry::hkGeometry(hkGeometry const&)
// void hkGeometry::hkGeometry(hkGeometry *this, const hkGeometry *a2);
// [0x157d9a0] (29 bytes) hkGeometry::hkGeometry(hkFinishLoadedObjectFlag)
// uint32_t *hkGeometry::hkGeometry(uint32_t *a1);
// [0x157d9c0] (21 bytes) hkGeometry::clear(void)
// hkGeometry *hkGeometry::clear(hkGeometry *this);
// [0x157d9e0] (228 bytes) hkGeometry::isValid(void)const
// hkGeometry *hkGeometry::isValid(hkGeometry *this, uint32_t *a2);
// [0x157dad0] (923 bytes) hkGeometry::appendGeometry(hkGeometry const&,hkMatrix4f const*)
// hkGeometry *hkGeometry::appendGeometry( hkGeometry *this, const hkGeometry *a2, const hkMatrix4f *a3, float *a4);
// [0x157ed50] (22 bytes) hkQTransform::staticClass(void)
// void *hkQTransform::staticClass();
// [0x157ee40] (19 bytes) hkString::toUpper(char)
// hkString *hkString::toUpper(hkString *this);
// [0x157ee60] (19 bytes) hkString::toLower(char)
// hkString *hkString::toLower(hkString *this);
// [0x157ee80] (58 bytes) hkString::vsnprintf(char *,int,char const*,char *)
// int hkString::vsnprintf(hkString *this, size_t maxlen, char *format, __gnuc_va_list __varargs);
// [0x157eec0] (58 bytes) hkString::snprintf(char *,int,char const*,...)
// int hkString::snprintf(hkString *this, size_t maxlen, char *format, const char *__varargs, ...);
// [0x157ef00] (50 bytes) hkString::sprintf(char *,char const*,...)
// int hkString::sprintf(hkString *this, char *format, const char *__varargs, ...);
// [0x157ef40] (42 bytes) hkString::strCmp(char const*,char const*)
// int hkString::strCmp(hkString *this, char *s2);
// [0x157ef70] (50 bytes) hkString::strNcmp(char const*,char const*,int)
// int hkString::strNcmp(hkString *this, char *s2, size_t n);
// [0x157efb0] (155 bytes) hkString::strCasecmp(char const*,char const*)
// int hkString::strCasecmp(hkString *this, const char *a2);
// [0x157f050] (166 bytes) hkString::strNcasecmp(char const*,char const*,int)
// int hkString::strNcasecmp(hkString *this, const char *a2, const char *a3);
// [0x157f100] (42 bytes) hkString::strCpy(char *,char const*)
// char *hkString::strCpy(hkString *this, char *src);
// [0x157f130] (54 bytes) hkString::strNcpy(char *,char const*,int)
// char *hkString::strNcpy(hkString *this, char *src, char *n);
// [0x157f170] (34 bytes) hkString::strLen(char const*)
// size_t hkString::strLen(hkString *this);
// [0x157f1a0] (42 bytes) hkString::strCat(char *,char const*)
// char *hkString::strCat(hkString *this, char *src);
// [0x157f1d0] (54 bytes) hkString::strNcat(char *,char const*,int)
// char *hkString::strNcat(hkString *this, char *src, char *n);
// [0x157f210] (50 bytes) hkString::atoi(char const*,int)
// unsigned int hkString::atoi(hkString *this, const char *base);
// [0x157f250] (50 bytes) hkString::atoll(char const*,int)
// int64_t hkString::atoll(hkString *this, const char *base);
// [0x157f290] (50 bytes) hkString::atoull(char const*,int)
// uint64_t hkString::atoull(hkString *this, const char *base);
// [0x157f2d0] (66 bytes) hkString::atof(char const*)
// long double hkString::atof(hkString *this);
// [0x157f320] (42 bytes) hkString::strStr(char const*,char const*)
// char *hkString::strStr(hkString *this, char *needle);
// [0x157f350] (42 bytes) hkString::strChr(char const*,int)
// char *hkString::strChr(hkString *this, const char *c);
// [0x157f380] (42 bytes) hkString::strRchr(char const*,int)
// char *hkString::strRchr(hkString *this, const char *c);
// [0x157f3b0] (73 bytes) hkString::strDup(char const*,hkMemoryAllocator &)
// hkString *hkString::strDup(hkString *this, hkMemoryRouter *a2);
// [0x157f400] (42 bytes) hkString::strFree(char *,hkMemoryAllocator &)
// hkMemoryAllocator *hkString::strFree(hkString *this, hkMemoryRouter *a2);
// [0x157f430] (57 bytes) hkString::strFree(char *)
// hkMemoryAllocator *hkString::strFree(hkString *this);
// [0x157f470] (94 bytes) hkString::strNdup(char const*,int,hkMemoryAllocator &)
// hkString *hkString::strNdup(hkString *this, char *a2, hkMemoryRouter *a3);
// [0x157f4d0] (57 bytes) hkString::strDup(char const*)
// hkString *hkString::strDup(hkString *this);
// [0x157f510] (65 bytes) hkString::strNdup(char const*,int)
// hkString *hkString::strNdup(hkString *this, char *a2);
// [0x157f560] (82 bytes) hkString::strLwr(char *)
// hkString *hkString::strLwr(hkString *this);
// [0x157f5c0] (82 bytes) hkString::strUpr(char *)
// hkString *hkString::strUpr(hkString *this);
// [0x157f620] (50 bytes) hkString::memCpy(void *,void const*,int)
// void *hkString::memCpy(hkString *this, void *src, size_t n);
// [0x157f660] (50 bytes) hkString::memMove(void *,void const*,int)
// void *hkString::memMove(hkString *this, void *src, size_t n);
// [0x157f6a0] (50 bytes) hkString::memSet(void *,int,int)
// void *hkString::memSet(hkString *this, void *c, size_t n);
// [0x157f6e0] (50 bytes) hkString::memCmp(void const*,void const*,int)
// int hkString::memCmp(hkString *this, void *s2, size_t n);
// [0x157f720] (266 bytes) hkString::findAllOccurrences(char const*,char const*,hkArray<int,hkContainerHeapAllocator> &,hkString::ReplaceType)
// uint8_t *hkString::findAllOccurrences(uint8_t *a1, hkString *a2, char *s, hkMemoryAllocator *a4, int a5);
// [0x157f830] (64 bytes) hkString::beginsWith(char const*,char const*)
// hkString *hkString::beginsWith(hkString *this, const char *a2, const char *a3);
// [0x157f870] (130 bytes) hkString::beginsWithCase(char const*,char const*)
// hkString *hkString::beginsWithCase(hkString *this, const char *a2, char *a3);
// [0x157f900] (136 bytes) hkString::endsWith(char const*,char const*)
// hkString *hkString::endsWith(hkString *this, hkString *a2, hkString *a3);
// [0x157f990] (154 bytes) hkString::endsWithCase(char const*,char const*)
// hkString *hkString::endsWithCase(hkString *this, hkString *a2, hkString *a3);
// [0x157fa30] (58 bytes) hkString::lastIndexOf(char const*,char)
// int hkString::lastIndexOf(hkString *this, const char *a2);
// [0x157fa70] (125 bytes) hkString::indexOf(char const*,char,int,int)
// int hkString::indexOf(hkString *this, const char *a2, int a3, int a4);
// [0x157faf0] (52 bytes) hkString::memClear128(void *,int)
// int hkString::memClear128(hkString *this, int a2);
// [0x157fb30] (18 bytes) hkFreeList::_compareElements(hkFreeList::Element const*,hkFreeList::Element const*)
// bool *hkFreeList::_compareElements(bool *a1, unsigned int a2, unsigned int a3);
// [0x157fd20] (88 bytes) hkFreeList::hkFreeList(void)
// void hkFreeList::hkFreeList(hkFreeList *this);
// [0x157fd80] (184 bytes) hkFreeList::_init(unsigned int,unsigned int,unsigned int,hkMemoryAllocator *,hkMemoryAllocator *)
// unsigned int hkFreeList::_init( hkFreeList *this, unsigned int a2, unsigned int a3, unsigned int a4, hkMemoryAllocator *a5, hkMemoryAllocator *a6);
// [0x157fe40] (74 bytes) hkFreeList::hkFreeList(unsigned int,unsigned int,unsigned int,hkMemoryAllocator *,hkMemoryAllocator *)
// void hkFreeList::hkFreeList( hkFreeList *this, unsigned int a2, unsigned int a3, unsigned int a4, hkMemoryAllocator *a5, hkMemoryAllocator *a6);
// [0x157fe90] (27 bytes) hkFreeList::calcNumBlocks(hkFreeList::Block const*)
// int hkFreeList::calcNumBlocks(uint32_t *a1);
// [0x157feb0] (140 bytes) hkFreeList::_freeBlocks(hkFreeList::Block *)
// int hkFreeList::_freeBlocks(int a1, uint32_t *a2);
// [0x157ff40] (120 bytes) hkFreeList::freeAllMemory(void)
// int hkFreeList::freeAllMemory(hkFreeList *this);
// [0x157ffc0] (84 bytes) hkFreeList::init(unsigned int,unsigned int,unsigned int,hkMemoryAllocator *,hkMemoryAllocator *)
// unsigned int hkFreeList::init( hkFreeList *this, unsigned int a2, unsigned int a3, unsigned int a4, hkMemoryAllocator *a5, hkMemoryAllocator *a6);
// [0x1580020] (62 bytes) hkFreeList::_moveTopToFree(void)
// uint32_t *hkFreeList::_moveTopToFree(hkFreeList *this);
// [0x1580060] (59 bytes) hkFreeList::_calcNumFreeElements(void)const
// int hkFreeList::_calcNumFreeElements(hkFreeList *this);
// [0x15800a0] (27 bytes) hkFreeList::_calcTotalNumElements(hkFreeList::Block *)
// int hkFreeList::_calcTotalNumElements(uint32_t *a1);
// [0x15800c0] (184 bytes) hkFreeList::_calculateBlockAllocatedSize(hkFreeList::Block *)const
// int hkFreeList::_calculateBlockAllocatedSize(int a1, uint32_t *a2);
// [0x1580180] (56 bytes) hkFreeList::_calcTotalNumElements(void)const
// int hkFreeList::_calcTotalNumElements(hkFreeList *this);
// [0x15801c0] (238 bytes) hkFreeList::_checkFreeBlocks(void)
// hkFreeList *hkFreeList::_checkFreeBlocks(hkFreeList *this, hkFreeList *a2);
// [0x15802b0] (358 bytes) hkFreeList::findGarbage(void)
// int hkFreeList::findGarbage(hkFreeList *this);
// [0x1580420] (114 bytes) hkFreeList::_walkMemoryBlockList(hkFreeList::Block *,void (*)(void *,unsigned int,bool,int,void *),int,void *)
// void hkFreeList::_walkMemoryBlockList( int a1, uint32_t *a2, void (*a3)(unsigned int, int, uint32_t, int, int), int a4, int a5);
// [0x15804a0] (292 bytes) hkFreeList::walkMemory(void (*)(void *,unsigned int,bool,int,void *),int,void *)
// uint32_t *hkFreeList::walkMemory( hkFreeList *this, void (*a2)(void *, unsigned int, bool, int, void *), int a3, void *a4);
// [0x15805d0] (424 bytes) hkFreeList::addToSnapshot(hkMemorySnapshot &,hkEnum<hkMemorySnapshot::StatusBits,signed char>,int)
// int hkFreeList::addToSnapshot(hkFreeList *a1, int a2, char a3, int a4);
// [0x1580780] (50 bytes) hkFreeList::freeAllFreeBlocks(void)
// int hkFreeList::freeAllFreeBlocks(hkFreeList *this);
// [0x15807c0] (22 bytes) hkFreeList::bestBlockSize(unsigned int,unsigned int)
// char *hkFreeList::bestBlockSize(hkFreeList *this, unsigned int a2);
// [0x15807e0] (455 bytes) hkFreeList::addSpace(void)
// int hkFreeList::addSpace(hkFreeList *this);
// [0x15809b0] (80 bytes) hkFreeList::freeAll(void)
// int hkFreeList::freeAll(hkFreeList *this);
// [0x1580a00] (105 bytes) hkFreeList::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkFreeList::getMemoryStatistics(int a1, uint32_t *a2);
// [0x1580a70] (138 bytes) hkFreeList::_getSortedBlockHeads(hkFreeList::Block const**,int)
// int hkFreeList::_getSortedBlockHeads(int a1, uint32_t *a2);
// [0x1580c50] (992 bytes) hkFreeList::_calcBlockFree(hkFreeList::Block *)
// int hkFreeList::_calcBlockFree(uint32_t *a1, int a2);
// [0x1581030] (207 bytes) hkFreeList::incrementalFindGarbage(int,int &)
// hkFreeList *hkFreeList::incrementalFindGarbage(hkFreeList *this, uint32_t *a2, int *a3, int **a4);
// [0x1581100] (73 bytes) hkBufferedStreamReader::isOk(void)const
// hkBufferedStreamReader *hkBufferedStreamReader::isOk(hkBufferedStreamReader *this, int a2);
// [0x1581150] (15 bytes) hkBufferedStreamReader::isSeekTellSupported(void)
// hkBufferedStreamReader *hkBufferedStreamReader::isSeekTellSupported(hkBufferedStreamReader *this);
// [0x1581160] (69 bytes) hkBufferedStreamReader::seek(int,hkSeekableStreamReader::SeekWhence)
// int hkBufferedStreamReader::seek(int a1, uint32_t *a2);
// [0x15811b0] (47 bytes) hkBufferedStreamReader::tell(void)const
// int hkBufferedStreamReader::tell(hkBufferedStreamReader *this);
// [0x15811e0] (243 bytes) hkBufferedStreamReader::skip(int)
// int hkBufferedStreamReader::skip(hkBufferedStreamReader *this, int a2);
// [0x15812e0] (291 bytes) hkBufferedStreamReader::read(void *,int)
// int hkBufferedStreamReader::read(hkBufferedStreamReader *this, char *a2, signed int a3);
// [0x1581410] (339 bytes) hkBufferedStreamReader::peek(void *,int)
// int hkBufferedStreamReader::peek(hkBufferedStreamReader *this, hkMemUtil *a2, signed int a3);
// [0x1581570] (92 bytes) hkBufferedStreamReader::Buffer::Buffer(int)
// struct hkBufferedStreamReader::Buffer *hkBufferedStreamReader::Buffer::Buffer( hkBufferedStreamReader::Buffer *this, hkMemoryAllocator *a2);
// [0x15815d0] (59 bytes) hkBufferedStreamReader::Buffer::~Buffer()
// void hkBufferedStreamReader::Buffer::~Buffer(hkMemoryAllocator **this);
// [0x1581610] (122 bytes) hkBufferedStreamReader::~hkBufferedStreamReader()
// void hkBufferedStreamReader::~hkBufferedStreamReader(hkBufferedStreamReader *this);
// [0x1581690] (93 bytes) hkBufferedStreamReader::~hkBufferedStreamReader()
// void hkBufferedStreamReader::~hkBufferedStreamReader(hkBufferedStreamReader *this);
// [0x15816f0] (124 bytes) hkBufferedStreamReader::hkBufferedStreamReader(hkStreamReader *,int)
// void hkBufferedStreamReader::hkBufferedStreamReader( hkBufferedStreamReader *this, hkStreamReader *a2, hkMemoryAllocator *a3);
// [0x1581770] (161 bytes) hkQuaternionf::setAxisAngle(hkVector4f const&,hkSimdFloat32 const&)
// void hkQuaternionf::setAxisAngle(float *a1, float *a2, float *a3);
// [0x1581820] (64 bytes) hkQuaternionf::setAxisAngle(hkVector4f const&,float)
// void hkQuaternionf::setAxisAngle(hkQuaternionf *this, const hkVector4f *a2, float a3);
// [0x1581860] (161 bytes) hkQuaternionf::setAxisAngle_Approximate(hkVector4f const&,hkSimdFloat32 const&)
// void hkQuaternionf::setAxisAngle_Approximate(float *a1, float *a2, float *a3);
// [0x1581910] (397 bytes) hkQuaternionf::setFromEulerAngles(hkSimdFloat32 const&,hkSimdFloat32 const&,hkSimdFloat32 const&)
// void hkQuaternionf::setFromEulerAngles(float *a1, float *a2, float *a3, float *a4);
// [0x1581aa0] (95 bytes) hkQuaternionf::setFromEulerAngles(float,float,float)
// void hkQuaternionf::setFromEulerAngles(hkQuaternionf *this, float a2, float a3, float a4);
// [0x1581b00] (58 bytes) hkQuaternionf::setFromEulerAngles_Approximate(hkSimdFloat32 const&,hkSimdFloat32 const&,hkSimdFloat32 const&)
// void hkQuaternionf::setFromEulerAngles_Approximate(float *a1, float *a2, float *a3, float *a4);
// [0x1581b40] (131 bytes) hkQuaternionf::getAngleSr(void)const
// hkQuaternionf *hkQuaternionf::getAngleSr(hkQuaternionf *this, int a2);
// [0x1581bd0] (183 bytes) hkQuaternionf::isOk(float)const
// bool hkQuaternionf::isOk(hkQuaternionf *this, float a2);
// [0x1581c90] (549 bytes) hkQuaternionf::set(hkRotationf const&)
// hkQuaternionf *hkQuaternionf::set(hkQuaternionf *this, const hkRotationf *a2);
// [0x1581ec0] (445 bytes) hkQuaternionf::setFlippedRotation(hkVector4f const&)
// hkQuaternionf *hkQuaternionf::setFlippedRotation(hkQuaternionf *this, const hkVector4f *a2);
// [0x1582080] (1216 bytes) hkQuaternionf::setSlerp(hkQuaternionf const&,hkQuaternionf const&,hkSimdFloat32 const&)
// __m128 *hkQuaternionf::setSlerp(__m128 *a1, float *a2, float *a3, float *a4);
// [0x1582540] (942 bytes) hkQuaternionf::setBarycentric(hkQuaternionf const*,hkVector4f const&)
// __m128 *hkQuaternionf::setBarycentric(hkQuaternionf *this, const hkQuaternionf *a2, const hkVector4f *a3);
// [0x15828f0] (1256 bytes) hkQuaternionf::removeAxisComponent(hkVector4f const&)
// void hkQuaternionf::removeAxisComponent(hkQuaternionf *this, const hkVector4f *a2);
// [0x1582de0] (655 bytes) hkQuaternionf::decomposeRestAxis(hkVector4f const&,hkQuaternionf&,hkSimdFloat32 &)const
// int hkQuaternionf::decomposeRestAxis(float *a1, float *a2, float *a3, float *a4);
// [0x15830d0] (22 bytes) hkGeometry::Triangle::staticClass(void)
// void *hkGeometry::Triangle::staticClass();
// [0x15830f0] (22 bytes) hkGeometry::staticClass(void)
// void *hkGeometry::staticClass();
// [0x15832a0] (66 bytes) hkOptionalComponent::hkOptionalComponent(char const*,void (*)(void))
// void hkOptionalComponent::hkOptionalComponent(hkOptionalComponent *this, const char *a2, void (*a3)());
// [0x15832f0] (66 bytes) hkOptionalComponent::hkOptionalComponent(char const*,void **,void *)
// void hkOptionalComponent::hkOptionalComponent(hkOptionalComponent *this, const char *a2, void **a3, void *a4);
// [0x1583340] (22 bytes) hkOptionalComponent::getFirstComponent(void)
// int hkOptionalComponent::getFirstComponent();
// [0x1583360] (40 bytes) hkOptionalComponent::request(void)
// uint32_t *hkOptionalComponent::request(hkOptionalComponent *this);
// [0x1583390] (238 bytes) hkOptionalComponent::writeReport(hkOstream &)
// int hkOptionalComponent::writeReport(hkOptionalComponent *this);
// [0x1583480] (18 bytes) hkFileSystem::TimeStamp::set(unsigned long long)
// uint64_t hkFileSystem::TimeStamp::set(hkFileSystem::TimeStamp *this, uint64_t a2);
// [0x15834a0] (12 bytes) hkFileSystem::TimeStamp::get(void)const
// int64_t hkFileSystem::TimeStamp::get(hkFileSystem::TimeStamp *this);
// [0x15834b0] (19 bytes) hkFileSystem::TimeStamp::isValid(void)const
// hkFileSystem::TimeStamp *hkFileSystem::TimeStamp::isValid(hkFileSystem::TimeStamp *this, uint64_t *a2);
// [0x15834d0] (60 bytes) hkFileSystem::Entry::openReader(hkFileSystem::OpenFlags)const
// int hkFileSystem::Entry::openReader(int a1, uint32_t *a2, int a3);
// [0x1583510] (60 bytes) hkFileSystem::Entry::openWriter(hkFileSystem::OpenFlags)const
// int hkFileSystem::Entry::openWriter(int a1, uint32_t *a2, int a3);
// [0x1583550] (52 bytes) hkFileSystem::Entry::setPath(hkFileSystem*,char const*)
// hkStringPtr *hkFileSystem::Entry::setPath(uint32_t *a1, int a2, hkString *a3);
// [0x1583590] (77 bytes) hkFileSystem::Entry::getName(void)const
// char *hkFileSystem::Entry::getName(hkFileSystem::Entry *this);
// [0x15835e0] (93 bytes) hkFileSystem::Entry::setAll(hkFileSystem*,char const*,hkFlags<hkFileSystem::Entry::FlagValues,unsigned int>,hkFileSystem::TimeStamp,long long)
// int hkFileSystem::Entry::setAll(uint32_t *a1, int a2, hkString *a3, int a4, int a5, int a6, int a7, int a8);
// [0x1583640] (282 bytes) hkFileSystem::Iterator::Iterator(hkFileSystem*,char const*,char const*)
// void hkFileSystem::Iterator::Iterator(uint32_t *a1, int a2, hkString *a3, int a4);
// [0x1583760] (317 bytes) hkFileSystem::Iterator::advance(void)
// int hkFileSystem::Iterator::advance(hkFileSystem::Iterator *this);
// [0x15838a0] (498 bytes) hkFileSystem::listDirectory(char const*,hkFileSystem::DirectoryListing &)
// uint32_t *hkFileSystem::listDirectory(uint32_t *a1, int a2, hkString *a3, hkMemoryAllocator *a4);
// [0x1583aa0] (109 bytes) hkFileSystem::Iterator::nameAcceptable(char const*,char const*)
// bool hkFileSystem::Iterator::nameAcceptable(hkFileSystem::Iterator *this, const char *a2);
// [0x1583b10] (175 bytes) hkFileSystem::_handleFlags(hkStreamReader *,hkFileSystem::OpenFlags)
// hkBufferedStreamReader *hkFileSystem::_handleFlags(int a1, hkStreamReader *a2, char a3);
// [0x1583bc0] (175 bytes) hkFileSystem::_handleFlags(hkStreamWriter *,hkFileSystem::OpenFlags)
// hkBufferedStreamWriter *hkFileSystem::_handleFlags(int a1, hkStreamWriter *a2, char a3);
// [0x1583cc0] (163 bytes) hkMatrix3f::isOk(void)const
// bool hkMatrix3f::isOk(hkMatrix3f *this);
// [0x1583d70] (65 bytes) hkMatrix3f::transpose(void)
// hkMatrix3f *hkMatrix3f::transpose(hkMatrix3f *this);
// [0x1583dc0] (625 bytes) hkMatrix3f_setMulMat3Mat3
// float *hkMatrix3f_setMulMat3Mat3(float *a1, float *a2, float *a3);
// [0x1584040] (108 bytes) hkMatrix3f::setTranspose(hkMatrix3f const&)
// hkMatrix3f *hkMatrix3f::setTranspose(hkMatrix3f *this, const hkMatrix3f *a2);
// [0x15840b0] (625 bytes) hkMatrix3f::setMul(hkMatrix3f const&,hkMatrix3f const&)
// hkMatrix3f *hkMatrix3f::setMul(hkMatrix3f *this, const hkMatrix3f *a2, const hkMatrix3f *a3);
// [0x1584330] (865 bytes) hkMatrix3f::setMulInverse(hkMatrix3f const&,hkRotationf const&)
// hkMatrix3f *hkMatrix3f::setMulInverse(hkMatrix3f *this, const hkMatrix3f *a2, const hkRotationf *a3);
// [0x15846a0] (77 bytes) hkMatrix3f::changeBasis(hkRotationf const&)
// hkMatrix3f *hkMatrix3f::changeBasis(hkMatrix3f *this, const hkRotationf *a2);
// [0x15846f0] (491 bytes) hkMatrix3f::setMulInverseMul(hkRotationf const&,hkMatrix3f const&)
// hkMatrix3f *hkMatrix3f::setMulInverseMul(hkMatrix3f *this, const hkRotationf *a2, const hkMatrix3f *a3);
// [0x15848e0] (628 bytes) hkMatrix3f::setTransposeMul(hkMatrix3f const&,hkMatrix3f const&)
// hkMatrix3f *hkMatrix3f::setTransposeMul(hkMatrix3f *this, const hkMatrix3f *a2, const hkMatrix3f *a3);
// [0x1584b60] (175 bytes) hkMatrix3f::mul(hkSimdFloat32 const&)
// float *hkMatrix3f::mul(float *a1, float *a2);
// [0x1584c10] (130 bytes) hkMatrix3f::setCrossSkewSymmetric(hkVector4f const&)
// hkMatrix3f *hkMatrix3f::setCrossSkewSymmetric(hkMatrix3f *this, const hkVector4f *a2);
// [0x1584ca0] (179 bytes) hkMatrix3f::setMul(hkSimdFloat32 const&,hkMatrix3f const&)
// float *hkMatrix3f::setMul(float *a1, float *a2, float *a3);
// [0x1584d60] (238 bytes) hkMatrix3f::addMul(hkSimdFloat32 const&,hkMatrix3f const&)
// float *hkMatrix3f::addMul(float *a1, float *a2, float *a3);
// [0x1584e50] (381 bytes) hkMatrix3f::isApproximatelyEqual(hkMatrix3f const&,float)const
// bool hkMatrix3f::isApproximatelyEqual(hkMatrix3f *this, const hkMatrix3f *a2, float a3);
// [0x1584fd0] (329 bytes) hkMatrix3f::isApproximatelyEqualSimd(hkMatrix3f const&,hkSimdFloat32 const&)const
// bool hkMatrix3f::isApproximatelyEqualSimd(float *a1, float *a2, float *a3);
// [0x1585120] (173 bytes) hkMatrix3f::isSymmetric(float)const
// bool hkMatrix3f::isSymmetric(hkMatrix3f *this, float a2);
// [0x15851d0] (648 bytes) hkMatrix3f::invert(float)
// hkMatrix3f *hkMatrix3f::invert(hkMatrix3f *this, float *a2, float a3);
// [0x1585460] (714 bytes) hkMatrix3f::invertSymmetric(void)
// hkMatrix3f *hkMatrix3f::invertSymmetric(hkMatrix3f *this);
// [0x1585730] (34 bytes) hkMatrix3f_invertSymmetric
// hkMatrix3f *hkMatrix3f_invertSymmetric(hkMatrix3f *a1);
// [0x1585760] (645 bytes) hkMatrix3f::setInverse(hkMatrix3f const&)
// hkMatrix3f *hkMatrix3f::setInverse(hkMatrix3f *this, const hkMatrix3f *a2);
// [0x15859f0] (186 bytes) hkMatrix3f::add(hkMatrix3f const&)
// hkMatrix3f *hkMatrix3f::add(hkMatrix3f *this, const hkMatrix3f *a2);
// [0x1585ab0] (186 bytes) hkMatrix3f::sub(hkMatrix3f const&)
// hkMatrix3f *hkMatrix3f::sub(hkMatrix3f *this, const hkMatrix3f *a2);
// [0x1585b70] (139 bytes) hkMatrix3f::mul(hkMatrix3f const&)
// int hkMatrix3f::mul(hkMatrix3f *this, const hkMatrix3f *a2);
// [0x1585c00] (109 bytes) hkMatrix3f::getDeterminant(void)const
// hkMatrix3f *hkMatrix3f::getDeterminant(hkMatrix3f *this, float *a2);
// [0x1585c70] (127 bytes) hkMatrix3f::frobeniusNormSqr(void)const
// hkMatrix3f *hkMatrix3f::frobeniusNormSqr(hkMatrix3f *this, float *a2);
// [0x1585cf0] (1619 bytes) hkMatrix3f::diagonalizeSymmetric(hkRotationf &,hkVector4f &,int,float)const
// hkMatrix3f *hkMatrix3f::diagonalizeSymmetric( hkMatrix3f *this, hkRotationf *a2, hkVector4f *a3, uint32_t *a4, int a5, float a6);
// [0x1586350] (2444 bytes) hkMatrix3f::diagonalizeSymmetricWarmStart(hkMatrix3f&,hkVector4f &,int,float)const
// hkMatrix3f *hkMatrix3f::diagonalizeSymmetricWarmStart( hkMatrix3f *this, hkMatrix3f *a2, hkVector4f *a3, float *a4, int a5, float a6);
// [0x1586ce0] (1398 bytes) hkMatrix3f::diagonalizeSymmetricApproximation(hkRotationf &,hkVector4f &,int)const
// hkVector4f *hkMatrix3f::diagonalizeSymmetricApproximation( hkMatrix3f *this, hkRotationf *a2, hkVector4f *a3, int a4);
// [0x15872a0] (61 bytes) hkLocalFrameGroup::~hkLocalFrameGroup()
// void hkLocalFrameGroup::~hkLocalFrameGroup(hkLocalFrameGroup *this);
// [0x1587360] (118 bytes) hkLocalFrameGroup::~hkLocalFrameGroup()
// void hkLocalFrameGroup::~hkLocalFrameGroup(hkLocalFrameGroup *this);
// [0x15873e0] (22 bytes) hkLocalFrame::staticClass(void)
// void *hkLocalFrame::staticClass();
// [0x1587400] (22 bytes) hkLocalFrameGroup::staticClass(void)
// void *hkLocalFrameGroup::staticClass();
// [0x1587420] (22 bytes) hkSimpleLocalFrame::staticClass(void)
// void *hkSimpleLocalFrame::staticClass();
// [0x1587680] (22 bytes) hkFloat16::staticClass(void)
// void *hkFloat16::staticClass();
// [0x1587770] (25 bytes) hkRefCountedProperties::hkRefCountedProperties(void)
// void hkRefCountedProperties::hkRefCountedProperties(hkRefCountedProperties *this);
// [0x1587790] (9 bytes) hkRefCountedProperties::hkRefCountedProperties(hkFinishLoadedObjectFlag)
// void hkRefCountedProperties::hkRefCountedProperties();
// [0x15877a0] (203 bytes) hkRefCountedProperties::~hkRefCountedProperties()
// void hkRefCountedProperties::~hkRefCountedProperties(hkRefCountedProperties *this);
// [0x1587870] (583 bytes) hkRefCountedProperties::addPropertyInternal(unsigned short,hkReferencedObject *,hkRefCountedProperties::ReferenceCountHandling)
// int hkRefCountedProperties::addPropertyInternal(hkMemoryAllocator *a1, int16_t a2, int a3, int a4);
// [0x1587ac0] (226 bytes) hkRefCountedProperties::removeProperty(unsigned short)
// int hkRefCountedProperties::removeProperty(hkRefCountedProperties *this, int a2);
// [0x1587bb0] (86 bytes) hkRefCountedProperties::accessProperty(unsigned short)const
// int hkRefCountedProperties::accessProperty(hkRefCountedProperties *this, uint16_t a2);
// [0x1587c10] (271 bytes) hkArrayBase<hkRefCountedProperties::Entry>::_append(hkMemoryAllocator &,hkRefCountedProperties::Entry const*,int)
// hkArrayBase<hkRefCountedProperties::Entry> *hkArrayBase<hkRefCountedProperties::Entry>::_append( hkArrayBase<hkRefCountedProperties::Entry> *this, hkMemoryAllocator *a2, const hkRefCountedProperties::Entry *a3, int a4);
// [0x1587d20] (81 bytes) hkRefCountedProperties::hkRefCountedProperties(hkRefCountedProperties const&)
// void hkRefCountedProperties::hkRefCountedProperties( hkRefCountedProperties *this, const hkRefCountedProperties *a2);
// [0x1587d80] (489 bytes) hkRefCountedProperties::replaceProperty(unsigned short,hkReferencedObject *)
// void hkRefCountedProperties::replaceProperty( hkRefCountedProperties *this, uint16_t a2, hkReferencedObject *a3);
// [0x1587f90] (22 bytes) hkAabb::staticClass(void)
// void *hkAabb::staticClass();
// [0x1587fb0] (22 bytes) hkAabbUint32::staticClass(void)
// void *hkAabbUint32::staticClass();
// [0x1588140] (13 bytes) hkSocket::asyncSelect(void *,unsigned int,hkSocket::SOCKET_EVENTS)
// uint32_t *hkSocket::asyncSelect(uint32_t *a1);
// [0x1588150] (9 bytes) hkSocket::canRead(void)
// int hkSocket::canRead();
// [0x1588160] (90 bytes) hkSocket::ReaderAdapter::read(void *,int)
// int hkSocket::ReaderAdapter::read(hkSocket::ReaderAdapter *this, char *a2, int a3);
// [0x15881c0] (41 bytes) hkSocket::ReaderAdapter::isOk(void)const
// hkSocket::ReaderAdapter *hkSocket::ReaderAdapter::isOk(hkSocket::ReaderAdapter *this, int a2);
// [0x15881f0] (90 bytes) hkSocket::WriterAdapter::write(void const*,int)
// int hkSocket::WriterAdapter::write(hkSocket::WriterAdapter *this, char *a2, int a3);
// [0x1588250] (41 bytes) hkSocket::WriterAdapter::isOk(void)const
// hkSocket::WriterAdapter *hkSocket::WriterAdapter::isOk(hkSocket::WriterAdapter *this, int a2);
// [0x1588280] (47 bytes) hkSocket::getAddress(hkStringBuf &,int &)const
// int *hkSocket::getAddress(hkSocket *this, hkStringBuf *a2, int *a3);
// [0x15882b0] (33 bytes) hkSocket::~hkSocket()
// void hkSocket::~hkSocket(hkSocket *this);
// [0x15882e0] (29 bytes) hkSocket::WriterAdapter::~WriterAdapter()
// void hkSocket::WriterAdapter::~WriterAdapter(hkSocket::WriterAdapter *this);
// [0x1588300] (29 bytes) hkSocket::ReaderAdapter::~ReaderAdapter()
// void hkSocket::ReaderAdapter::~ReaderAdapter(hkSocket::ReaderAdapter *this);
// [0x1588320] (96 bytes) hkSocket::ReaderAdapter::~ReaderAdapter()
// void hkSocket::ReaderAdapter::~ReaderAdapter(hkSocket::ReaderAdapter *this);
// [0x1588380] (96 bytes) hkSocket::WriterAdapter::~WriterAdapter()
// void hkSocket::WriterAdapter::~WriterAdapter(hkSocket::WriterAdapter *this);
// [0x15883e0] (102 bytes) hkSocket::~hkSocket()
// void hkSocket::~hkSocket(hkSocket *this);
// [0x15884a0] (118 bytes) hkSocket::hkSocket(void)
// void hkSocket::hkSocket(hkSocket *this);
// [0x1588540] (13 bytes) hkRecallAllocator::resetPeakMemoryStatistics(void)
// hkRecallAllocator *hkRecallAllocator::resetPeakMemoryStatistics(hkRecallAllocator *this);
// [0x1588550] (11 bytes) hkRecallAllocator::getAllocatedSize(void const*,int)const
// int hkRecallAllocator::getAllocatedSize(hkRecallAllocator *this, const void *a2, int a3);
// [0x1588560] (119 bytes) hkRecallAllocator::~hkRecallAllocator()
// void hkRecallAllocator::~hkRecallAllocator(hkRecallAllocator *this);
// [0x15885e0] (119 bytes) hkRecallAllocator::~hkRecallAllocator()
// void hkRecallAllocator::~hkRecallAllocator(hkRecallAllocator *this);
// [0x1588660] (369 bytes) hkRecallAllocator::blockFree(void *,int)
// uint32_t *hkRecallAllocator::blockFree(hkRecallAllocator *this, uint32_t *a2, int a3);
// [0x15887e0] (257 bytes) hkRecallAllocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkRecallAllocator::getMemoryStatistics(uint32_t *a1, uint32_t *a2);
// [0x15888f0] (289 bytes) hkRecallAllocator::blockAlloc(int)
// uint32_t *hkRecallAllocator::blockAlloc(hkRecallAllocator *this, int a2);
// [0x1588a20] (425 bytes) hkRecallAllocator::hkRecallAllocator(hkMemoryAllocator *)
// void hkRecallAllocator::hkRecallAllocator(hkRecallAllocator *this, hkMemoryAllocator *a2);
// [0x1588bd0] (14 bytes) hkRecallAllocator::init(hkMemoryAllocator *)
// hkRecallAllocator *hkRecallAllocator::init(hkRecallAllocator *this, hkMemoryAllocator *a2);
// [0x1588be0] (11 bytes) hkSolverAllocator::getAllocatedSize(void const*,int)const
// int hkSolverAllocator::getAllocatedSize(hkSolverAllocator *this, const void *a2, int a3);
// [0x1588bf0] (41 bytes) hkSolverAllocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkSolverAllocator::getMemoryStatistics(uint32_t *a1, uint32_t *a2);
// [0x1588c20] (14 bytes) hkSolverAllocator::resetPeakMemoryStatistics(void)
// hkSolverAllocator *hkSolverAllocator::resetPeakMemoryStatistics(hkSolverAllocator *this);
// [0x1588c30] (71 bytes) hkSolverAllocator::blockFree(void *,int)
// void *hkSolverAllocator::blockFree(hkSolverAllocator *this, void *a2, int a3);
// [0x1588c80] (931 bytes) hkSolverAllocator::bufFree(void *,int)
// int hkSolverAllocator::bufFree(char **this, char *a2, int a3);
// [0x1589030] (122 bytes) hkSolverAllocator::~hkSolverAllocator()
// void hkSolverAllocator::~hkSolverAllocator(hkSolverAllocator *this);
// [0x15890b0] (34 bytes) hkSolverAllocator::~hkSolverAllocator()
// void hkSolverAllocator::~hkSolverAllocator(hkSolverAllocator *this);
// [0x15890e0] (433 bytes) hkSolverAllocator::hkSolverAllocator(void)
// void hkSolverAllocator::hkSolverAllocator(hkSolverAllocator *this);
// [0x15892a0] (281 bytes) hkSolverAllocator::setBuffer(void *,int)
// int hkSolverAllocator::setBuffer(hkSolverAllocator *this, char *a2, int a3);
// [0x15893c0] (623 bytes) hkSolverAllocator::allocate(int &,bool)
// pthread_mutex_t *hkSolverAllocator::allocate(hkSolverAllocator *this, int *a2, bool a3);
// [0x1589630] (75 bytes) hkSolverAllocator::blockAlloc(int)
// pthread_mutex_t *hkSolverAllocator::blockAlloc(hkSolverAllocator *this, int a2);
// [0x1589680] (50 bytes) hkSolverAllocator::bufAlloc(int &)
// pthread_mutex_t *hkSolverAllocator::bufAlloc(hkSolverAllocator *this, int *a2);
// [0x15896c0] (18 bytes) hkSolverAllocator::canAllocSingleBlock(int)
// bool hkSolverAllocator::canAllocSingleBlock(hkSolverAllocator *this, int a2);
// [0x15896e0] (10 bytes) hkMemoryTrackStreamWriter::isOk(void)const
// hkMemoryTrackStreamWriter *hkMemoryTrackStreamWriter::isOk(hkMemoryTrackStreamWriter *this);
// [0x15896f0] (10 bytes) hkMemoryTrackStreamWriter::seekTellSupported(void)const
// hkMemoryTrackStreamWriter *hkMemoryTrackStreamWriter::seekTellSupported(hkMemoryTrackStreamWriter *this);
// [0x1589700] (13 bytes) hkMemoryTrackStreamWriter::seek(int,hkStreamWriter::SeekWhence)
// uint32_t *hkMemoryTrackStreamWriter::seek(uint32_t *a1);
// [0x1589710] (25 bytes) hkMemoryTrackStreamWriter::tell(void)const
// int hkMemoryTrackStreamWriter::tell(hkMemoryTrackStreamWriter *this);
// [0x1589730] (41 bytes) hkMemoryTrackStreamReader::isOk(void)const
// hkMemoryTrackStreamReader *hkMemoryTrackStreamReader::isOk(hkMemoryTrackStreamReader *this, int a2);
// [0x1589760] (10 bytes) hkArrayStreamWriter::isOk(void)const
// hkArrayStreamWriter *hkArrayStreamWriter::isOk(hkArrayStreamWriter *this);
// [0x1589770] (10 bytes) hkArrayStreamWriter::seekTellSupported(void)const
// hkArrayStreamWriter *hkArrayStreamWriter::seekTellSupported(hkArrayStreamWriter *this);
// [0x1589780] (12 bytes) hkArrayStreamWriter::tell(void)const
// int hkArrayStreamWriter::tell(hkArrayStreamWriter *this);
// [0x1589790] (22 bytes) hkArrayStreamWriter::getClassType(void)const
// void *hkArrayStreamWriter::getClassType();
// [0x15897b0] (9 bytes) hkMemoryTrackStreamReader::skip(int)
// int hkMemoryTrackStreamReader::skip();
// [0x15897c0] (217 bytes) hkArrayStreamWriter::write(void const*,int)
// int hkArrayStreamWriter::write(hkArrayStreamWriter *this, void *a2, int a3);
// [0x15898a0] (105 bytes) hkArrayStreamWriter::~hkArrayStreamWriter()
// void hkArrayStreamWriter::~hkArrayStreamWriter(hkArrayStreamWriter *this);
// [0x1589910] (149 bytes) hkArrayStreamWriter::clear(void)
// int hkArrayStreamWriter::clear(hkArrayStreamWriter *this);
// [0x15899b0] (331 bytes) hkArrayStreamWriter::seek(int,hkStreamWriter::SeekWhence)
// uint32_t *hkArrayStreamWriter::seek(uint32_t *a1, int a2, int a3, int a4);
// [0x1589b00] (162 bytes) hkArrayStreamWriter::~hkArrayStreamWriter()
// void hkArrayStreamWriter::~hkArrayStreamWriter(hkArrayStreamWriter *this);
// [0x1589bb0] (49 bytes) hkMemoryTrack::hkMemoryTrack(int)
// void hkMemoryTrack::hkMemoryTrack(hkMemoryTrack *this, int a2);
// [0x1589bf0] (170 bytes) hkMemoryTrack::clear(void)
// int hkMemoryTrack::clear(hkMemoryTrack *this);
// [0x1589ca0] (92 bytes) hkMemoryTrack::~hkMemoryTrack()
// void hkMemoryTrack::~hkMemoryTrack(hkMemoryTrack *this);
// [0x1589d00] (113 bytes) hkMemoryTrackStreamWriter::~hkMemoryTrackStreamWriter()
// void hkMemoryTrackStreamWriter::~hkMemoryTrackStreamWriter(hkMemoryTrackStreamWriter *this);
// [0x1589d80] (120 bytes) hkMemoryTrackStreamReader::~hkMemoryTrackStreamReader()
// void hkMemoryTrackStreamReader::~hkMemoryTrackStreamReader(hkMemoryTrackStreamReader *this);
// [0x1589e00] (93 bytes) hkMemoryTrackStreamReader::~hkMemoryTrackStreamReader()
// void hkMemoryTrackStreamReader::~hkMemoryTrackStreamReader(hkMemoryTrackStreamReader *this);
// [0x1589e60] (179 bytes) hkMemoryTrackStreamWriter::~hkMemoryTrackStreamWriter()
// void hkMemoryTrackStreamWriter::~hkMemoryTrackStreamWriter(hkMemoryTrackStreamWriter *this);
// [0x1589f20] (37 bytes) hkMemoryTrackStreamWriter::clear(void)
// int hkMemoryTrackStreamWriter::clear(hkMemoryTrack **this);
// [0x1589f50] (333 bytes) hkMemoryTrack::write(void const*,int)
// void *hkMemoryTrack::write(hkMemoryTrack *this, char *a2, signed int a3);
// [0x158a0a0] (57 bytes) hkMemoryTrackStreamWriter::write(void const*,int)
// size_t hkMemoryTrackStreamWriter::write(hkMemoryTrack **this, char *a2, size_t a3);
// [0x158a0e0] (284 bytes) hkMemoryTrack::appendByMove(hkMemoryTrack*)
// int hkMemoryTrack::appendByMove(hkMemoryTrack *this, hkMemoryTrack *a2);
// [0x158a200] (193 bytes) hkMemoryTrack::read(void *,int)
// char *hkMemoryTrack::read(hkMemoryTrack *this, hkString *a2, signed int a3);
// [0x158a2d0] (205 bytes) hkMemoryTrack::unloadReadSectors(void)
// int hkMemoryTrack::unloadReadSectors(hkMemoryTrack *this);
// [0x158a3a0] (221 bytes) hkMemoryTrackStreamReader::read(void *,int)
// signed int hkMemoryTrackStreamReader::read(hkMemoryTrackStreamReader *this, hkString *a2, signed int a3);
// [0x158a480] (62 bytes) hkMemoryTrackStreamReader::hkMemoryTrackStreamReader(hkMemoryTrack const*,hkMemoryTrackStreamReader::MemoryType,bool)
// int hkMemoryTrackStreamReader::hkMemoryTrackStreamReader(int a1, int a2, int a3, char a4);
// [0x158a550] (10 bytes) hkStreamWriter::seekTellSupported(void)const
// hkStreamWriter *hkStreamWriter::seekTellSupported(hkStreamWriter *this);
// [0x158a560] (13 bytes) hkStreamWriter::seek(int,hkStreamWriter::SeekWhence)
// uint32_t *hkStreamWriter::seek(uint32_t *a1);
// [0x158a570] (12 bytes) hkStreamWriter::tell(void)const
// int hkStreamWriter::tell();
// [0x158a580] (10 bytes) hkStreamWriter::isBuffered(void)const
// hkStreamWriter *hkStreamWriter::isBuffered(hkStreamWriter *this);
// [0x158a590] (29 bytes) hkStreamWriter::~hkStreamWriter()
// void hkStreamWriter::~hkStreamWriter(hkStreamWriter *this);
// [0x158a5b0] (96 bytes) hkStreamWriter::~hkStreamWriter()
// void hkStreamWriter::~hkStreamWriter(hkStreamWriter *this);
// [0x158a610] (66 bytes) hkVariantDataUtil::calcElementSize(hkClassMember::Type,hkClass const*)
// int hkVariantDataUtil::calcElementSize(int a1, hkClass *a2);
// [0x158a660] (69 bytes) hkVariantDataUtil::getReal(hkClassMember::Type,void const*)
// long double hkVariantDataUtil::getReal(int a1, int16_t *a2);
// [0x158a6b0] (47 bytes) hkVariantDataUtil::setReal(hkClassMember::Type,void *,float)
// int hkVariantDataUtil::setReal(int a1, int *a2, int a3);
// [0x158a6e0] (57 bytes) hkVariantDataUtil::setHalf(hkClassMember::Type,void *,hkHalf)
// int *hkVariantDataUtil::setHalf(int *a1, int *a2, int16_t a3);
// [0x158a720] (149 bytes) hkVariantDataUtil::getInt(hkClassMember::Type,void const*)
// int64_t hkVariantDataUtil::getInt(int a1, uint8_t *a2);
// [0x158a7c0] (74 bytes) hkVariantDataUtil::getInt(hkClassMember::Type,hkClassMember::Type,void const*)
// int64_t hkVariantDataUtil::getInt(int a1, int a2, uint8_t *a3);
// [0x158a810] (87 bytes) hkVariantDataUtil::setInt(hkClassMember::Type,void *,long long)
// char *hkVariantDataUtil::setInt(char *a1, bool *a2, int64_t a3);
// [0x158a870] (90 bytes) hkVariantDataUtil::setInt(hkClassMember::Type,hkClassMember::Type,void *,long long)
// char *hkVariantDataUtil::setInt(char *a1, char *a2, bool *a3, int64_t a4);
// [0x158a8d0] (39 bytes) hkVariantDataUtil::getString(hkClassMember::Type,void const*)
// unsigned int hkVariantDataUtil::getString(int a1, int a2);
// [0x158a900] (72 bytes) hkVariantDataUtil::setString(hkClassMember::Type,void *,char const*)
// hkStringPtr *hkVariantDataUtil::setString(hkStringPtr *a1, hkStringPtr *a2, hkString *a3);
// [0x158a950] (160 bytes) hkVariantDataUtil::needsConstruction(hkTypeInfoRegistry const*,hkClassMember &)
// hkVariantDataUtil *hkVariantDataUtil::needsConstruction( hkVariantDataUtil *this, const hkTypeInfoRegistry *a2, hkClassMember *a3);
// [0x158a9f0] (124 bytes) hkVariantDataUtil::newInstance(hkClass const&,void *)
// hkClass *hkVariantDataUtil::newInstance(hkVariantDataUtil *this, const hkClass *a2);
// [0x158aa70] (91 bytes) hkVariantDataUtil::finishObject(hkTypeInfoRegistry const*,hkClass const&,void *)
// hkTypeInfo *hkVariantDataUtil::finishObject( hkVariantDataUtil *this, const hkTypeInfoRegistry *a2, const hkClass *a3);
// [0x158aad0] (91 bytes) hkVariantDataUtil::finishObjectWithoutTracker(hkTypeInfoRegistry const*,hkClass const&,void *)
// hkTypeInfo *hkVariantDataUtil::finishObjectWithoutTracker( hkVariantDataUtil *this, const hkTypeInfoRegistry *a2, const hkClass *a3);
// [0x158ab30] (83 bytes) hkVariantDataUtil::deleteInstance(hkTypeInfoRegistry const*,hkClass const&,void *)
// hkTypeInfo *hkVariantDataUtil::deleteInstance( hkVariantDataUtil *this, const hkTypeInfoRegistry *a2, const hkClass *a3);
// [0x158ab90] (166 bytes) hkVariantDataUtil::newArray(hkTypeInfoRegistry const*,hkClass const&,void *,int,int)
// hkTypeInfo *hkVariantDataUtil::newArray( hkVariantDataUtil *this, const hkTypeInfoRegistry *a2, const hkClass *a3, char *a4, int a5);
// [0x158ac40] (122 bytes) hkVariantDataUtil::finishObjectArray(hkTypeInfoRegistry const*,hkClass const&,void *,int,int)
// int hkVariantDataUtil::finishObjectArray( hkVariantDataUtil *this, const hkTypeInfoRegistry *a2, const hkClass *a3, char *a4, int a5);
// [0x158acc0] (229 bytes) hkVariantDataUtil::newArray(hkTypeInfoRegistry const*,hkClassMember::Type,hkClass const*,void *,int,int)
// void hkVariantDataUtil::newArray( hkVariantDataUtil *a1, int a2, hkTypeInfoRegistry *a3, hkClass *a4, char *a5, int a6);
// [0x158adb0] (114 bytes) hkVariantDataUtil::deleteArray(hkTypeInfoRegistry const*,hkClass const&,void *,int,int)
// hkTypeInfo *hkVariantDataUtil::deleteArray( hkVariantDataUtil *this, const hkTypeInfoRegistry *a2, const hkClass *a3, hkTypeInfo *a4, int a5);
// [0x158ae30] (125 bytes) hkVariantDataUtil::deleteArray(hkTypeInfoRegistry const*,hkClassMember::Type,hkClass const*,void *,int,int)
// void hkVariantDataUtil::deleteArray( hkVariantDataUtil *a1, int a2, hkTypeInfoRegistry *a3, hkStringPtr *a4, hkTypeInfo *a5, int a6);
// [0x158aeb0] (107 bytes) hkVariantDataUtil::clearArray(hkTypeInfoRegistry const*,void *,hkClassMember::Type,hkClass const*)
// void hkVariantDataUtil::clearArray(hkVariantDataUtil *a1, hkStringPtr **a2, int a3, hkClass *a4);
// [0x158af20] (238 bytes) hkVariantDataUtil::setArraySize(hkTypeInfoRegistry const*,void *,hkClassMember::Type,hkClass const*,int)
// int hkVariantDataUtil::setArraySize(hkVariantDataUtil *a1, int *a2, int a3, hkClass *a4, int a5);
// [0x158b010] (12 bytes) hkVariantDataUtil::getArraySize(void *)
// int hkVariantDataUtil::getArraySize(hkVariantDataUtil *this);
// [0x158b020] (89 bytes) hkVariantDataUtil::reserveArray(void *,hkClassMember::Type,hkClass const*,int)
// int hkVariantDataUtil::reserveArray(int *a1, int a2, hkClass *a3, int a4);
// [0x158b080] (77 bytes) hkVariantDataUtil::calcNumReals(hkClassMember::Type,int)
// int hkVariantDataUtil::calcNumReals(int a1, int a2);
// [0x158b0d0] (677 bytes) hkVariantDataUtil::setReals(hkClassMember::Type,int,float const*,void *,int)
// int hkVariantDataUtil::setReals(int a1, int a2, unsigned int a3, unsigned int a4, int a5);
// [0x158b380] (518 bytes) hkVariantDataUtil::getReals(hkClassMember::Type,int,void const*,hkArray<unsigned char,hkContainerHeapAllocator> &)
// unsigned int hkVariantDataUtil::getReals(int a1, int a2, unsigned int a3, int *a4);
// [0x158b590] (57 bytes) hkVariantDataUtil::setObject(hkVariant const&,hkClassMember::Type,void *)
// int hkVariantDataUtil::setObject(int *a1, int a2, int *a3);
// [0x158b5d0] (76 bytes) hkVariantDataUtil::findMostDerivedClass(void const*,hkVtableClassRegistry const*,hkClassNameRegistry const*)
// hkClass *hkVariantDataUtil::findMostDerivedClass( hkVariantDataUtil *this, const void *a2, const hkVtableClassRegistry *a3);
// [0x158b620] (210 bytes) hkVariantDataUtil::setPointer(hkClass const&,void *,void **,hkBool)
// int *hkVariantDataUtil::setPointer(hkClass *a1, int a2, int *a3, char a4);
// [0x158b700] (66 bytes) hkVariantDataUtil::calcBasicElementSize(hkClassMember::Type,hkClass const*)
// int hkVariantDataUtil::calcBasicElementSize(int a1, hkClass *a2);
// [0x158b750] (102 bytes) hkVariantDataUtil::calcElementSize(hkClassMember::Type,hkClassMember::Type,hkClass const*,int)
// int hkVariantDataUtil::calcElementSize(int a1, int a2, hkClass *a3, int a4);
// [0x158b7c0] (1797 bytes) hkVariantDataUtil::convertTypeToBoolArray(hkClassMember::Type,void const*,hkBool *,int)
// size_t hkVariantDataUtil::convertTypeToBoolArray(int a1, char *a2, hkString *a3, int a4);
// [0x158bed0] (3162 bytes) hkVariantDataUtil::convertInt32ToTypeArray(int const*,hkClassMember::Type,void *,int)
// int hkVariantDataUtil::convertInt32ToTypeArray(char *a1, int a2, hkString *a3, signed int a4);
// [0x158cb30] (3027 bytes) hkVariantDataUtil::convertUint32ToTypeArray(unsigned int const*,hkClassMember::Type,void *,int)
// int hkVariantDataUtil::convertUint32ToTypeArray(char *a1, int a2, hkString *a3, signed int a4);
// [0x158d710] (2568 bytes) hkVariantDataUtil::convertBoolToTypeArray(hkBool const*,hkClassMember::Type,void *,int)
// size_t hkVariantDataUtil::convertBoolToTypeArray(char *a1, int a2, hkString *a3, int a4);
// [0x158e120] (3203 bytes) hkVariantDataUtil::convertInt64ToTypeArray(long long const*,hkClassMember::Type,void *,int)
// int hkVariantDataUtil::convertInt64ToTypeArray(char *a1, int a2, hkString *a3, signed int a4);
// [0x158edb0] (2051 bytes) hkVariantDataUtil::convertTypeToInt32Array(hkClassMember::Type,void const*,int *,int)
// hkString *hkVariantDataUtil::convertTypeToInt32Array(int a1, char *a2, hkString *a3, signed int a4);
// [0x158f5c0] (1333 bytes) hkVariantDataUtil::convertTypeToTypeArray(hkClassMember::Type,void const*,hkClassMember::Type,void *,int)
// int hkVariantDataUtil::convertTypeToTypeArray( int a1, int a2, char *a3, int a4, hkString *a5, signed int a6);
// [0x158fb00] (591 bytes) hkVariantDataUtil::stridedCopy(void const*,int,void *,int,int,int)
// int hkVariantDataUtil::stridedCopy( hkVariantDataUtil *this, unsigned int a2, hkString *a3, unsigned int a4, size_t a5, int a6);
// [0x158fd50] (742 bytes) hkVariantDataUtil::convertArray(hkStridedBasicArray const&,hkStridedBasicArray const&)
// int hkVariantDataUtil::convertArray(int *a1, int *a2);
// [0x1590120] (182 bytes) hkVariantDataUtil::getVariantWithMostDerivedClass(hkClass const*,void const*,hkVtableClassRegistry const*,hkClassNameRegistry const*)
// hkVariantDataUtil *hkVariantDataUtil::getVariantWithMostDerivedClass( hkVariantDataUtil *this, const hkClass *a2, hkVariantDataUtil *a3, const hkVtableClassRegistry *a4, const hkClassNameRegistry *a5);
// [0x15901e0] (164 bytes) hkVariantDataUtil::getObject(hkClassMember::Type,hkClass const*,hkVtableClassRegistry const*,hkClassNameRegistry const*,void const*)
// hkVariantDataUtil *hkVariantDataUtil::getObject( hkVariantDataUtil *a1, int a2, hkClass *a3, hkVtableClassRegistry *a4, hkClassNameRegistry *a5, hkVariantDataUtil *a6);
// [0x1590290] (443 bytes) hkAlgorithm::_sortList(hkAlgorithm::ListElement *)
// int hkAlgorithm::_sortList(uint32_t *a1);
// [0x1590450] (45 bytes) hkStopwatch::divide64(unsigned long long,unsigned long long)
// long double hkStopwatch::divide64(int64_t this, int64_t a2);
// [0x1590480] (27 bytes) hkStopwatch::getTickCounter(void)
// int hkStopwatch::getTickCounter();
// [0x15904a0] (27 bytes) hkStopwatch::getTicksPerSecond(void)
// int hkStopwatch::getTicksPerSecond();
// [0x15904c0] (59 bytes) hkStopwatch::secondsFromTicks(unsigned long long)
// void hkStopwatch::secondsFromTicks(hkStopwatch *this, uint64_t a2);
// [0x1590500] (29 bytes) hkLocalFrame::~hkLocalFrame()
// void hkLocalFrame::~hkLocalFrame(hkLocalFrame *this);
// [0x1590520] (13 bytes) hkSimpleLocalFrame::getName(void)const
// unsigned int hkSimpleLocalFrame::getName(hkSimpleLocalFrame *this);
// [0x1590530] (12 bytes) hkSimpleLocalFrame::getParentFrame(void)const
// int hkSimpleLocalFrame::getParentFrame(hkSimpleLocalFrame *this);
// [0x1590540] (14 bytes) hkSimpleLocalFrame::setParentFrame(hkLocalFrame const*)
// hkSimpleLocalFrame *hkSimpleLocalFrame::setParentFrame(hkSimpleLocalFrame *this, const hkLocalFrame *a2);
// [0x1590550] (12 bytes) hkSimpleLocalFrame::getGroup(void)const
// int hkSimpleLocalFrame::getGroup(hkSimpleLocalFrame *this);
// [0x1590560] (65 bytes) hkLocalFrame::getLocalPosition(hkVector4f &)const
// int hkLocalFrame::getLocalPosition(hkLocalFrame *this, hkVector4f *a2);
// [0x15905b0] (104 bytes) hkSimpleLocalFrame::getLocalTransform(hkTransformf &)const
// hkTransformf *hkSimpleLocalFrame::getLocalTransform(hkSimpleLocalFrame *this, hkTransformf *a2);
// [0x1590620] (32 bytes) hkSimpleLocalFrame::getLocalPosition(hkVector4f &)const
// hkVector4f *hkSimpleLocalFrame::getLocalPosition(hkSimpleLocalFrame *this, hkVector4f *a2);
// [0x1590640] (12 bytes) hkSimpleLocalFrame::getNumChildFrames(void)const
// int hkSimpleLocalFrame::getNumChildFrames(hkSimpleLocalFrame *this);
// [0x1590650] (15 bytes) hkSimpleLocalFrame::getChildFrame(int)const
// int hkSimpleLocalFrame::getChildFrame(hkSimpleLocalFrame *this, int a2);
// [0x1590660] (370 bytes) hkSimpleLocalFrame::getNearbyFrames(hkVector4f const&,float,hkLocalFrameCollector &)const
// int hkSimpleLocalFrame::getNearbyFrames(int a1, hkVector4f *a2, int64_t a3);
// [0x15907e0] (173 bytes) hkLocalFrame::getDescendants(hkArrayBase<hkLocalFrame const*> &,hkMemoryAllocator &)const
// int hkLocalFrame::getDescendants(int a1, hkMemoryAllocator *a2, hkArrayUtil *a3);
// [0x1590890] (96 bytes) hkLocalFrame::~hkLocalFrame()
// void hkLocalFrame::~hkLocalFrame(hkLocalFrame *this);
// [0x15908f0] (104 bytes) hkSimpleLocalFrame::setLocalTransform(hkTransformf const&)
// hkSimpleLocalFrame *hkSimpleLocalFrame::setLocalTransform(hkSimpleLocalFrame *this, const hkTransformf *a2);
// [0x1590960] (266 bytes) hkSimpleLocalFrame::~hkSimpleLocalFrame()
// void hkSimpleLocalFrame::~hkSimpleLocalFrame(hkSimpleLocalFrame *this);
// [0x1590a70] (93 bytes) hkSimpleLocalFrame::~hkSimpleLocalFrame()
// void hkSimpleLocalFrame::~hkSimpleLocalFrame(hkSimpleLocalFrame *this);
// [0x1590ad0] (139 bytes) hkSimpleLocalFrame::setGroup(hkLocalFrameGroup const*)
// int hkSimpleLocalFrame::setGroup(hkSimpleLocalFrame *this, const hkLocalFrameGroup *a2);
// [0x1590b60] (141 bytes) hkLocalFrame::getTransformToRoot(hkTransformf &)const
// hkTransformf *hkLocalFrame::getTransformToRoot( hkLocalFrame *this, hkTransformf *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, ...);
// [0x1590bf0] (122 bytes) hkLocalFrame::getPositionInRoot(hkVector4f &)const
// int hkLocalFrame::getPositionInRoot(hkLocalFrame *this, hkVector4f *a2);
// [0x1590c70] (18 bytes) hkBsdSocket::isOk(void)const
// hkBsdSocket *hkBsdSocket::isOk(hkBsdSocket *this, int a2);
// [0x1590c90] (13 bytes) hkBsdSocket::asyncSelect(void *,unsigned int,hkSocket::SOCKET_EVENTS)
// uint32_t *hkBsdSocket::asyncSelect(uint32_t *a1);
// [0x1590ca0] (51 bytes) hkBsdSocket::close(void)
// int hkBsdSocket::close(hkBsdSocket *this);
// [0x1590ce0] (64 bytes) hkBsdSocket::~hkBsdSocket()
// void hkBsdSocket::~hkBsdSocket(hkBsdSocket *this);
// [0x1590d20] (101 bytes) hkBsdSocket::getAddress(hkStringBuf &,int &)const
// 0x1590d20 hkBsdSocket::getAddress(hkStringBuf &,int &)const
// [0x1590d90] (97 bytes) hkBsdSocket::read(void *,int)
// ssize_t hkBsdSocket::read(hkBsdSocket *this, void *buf, size_t n);
// [0x1590e00] (97 bytes) hkBsdSocket::write(void const*,int)
// ssize_t hkBsdSocket::write(hkBsdSocket *this, void *buf, size_t n);
// [0x1590e70] (134 bytes) hkBsdSocket::canRead(void)
// bool hkBsdSocket::canRead(hkBsdSocket *this);
// [0x1590f00] (93 bytes) hkBsdSocket::~hkBsdSocket()
// void hkBsdSocket::~hkBsdSocket(hkBsdSocket *this);
// [0x1590f60] (30 bytes) hkBsdNetworkInit(void)
// void hkBsdNetworkInit();
// [0x1590f80] (9 bytes) hkBsdNetworkQuit(void)
// void hkBsdNetworkQuit();
// [0x1590f90] (88 bytes) hkBsdSocket::createSocket(void)
// hkBsdSocket *hkBsdSocket::createSocket(hkBsdSocket *this, uint32_t *a2);
// [0x1590ff0] (90 bytes) hkBsdSocket::hkBsdSocket(int)
// void hkBsdSocket::hkBsdSocket(hkBsdSocket *this, int a2);
// [0x1591050] (272 bytes) hkBsdSocket::connect(char const*,int)
// hkBsdSocket *hkBsdSocket::connect(hkBsdSocket *this, char *a2, char *cp, int16_t a4);
// [0x1591160] (13 bytes) hkBsdSocket::setBlocking(hkBool)
// uint32_t *hkBsdSocket::setBlocking(uint32_t *a1);
// [0x1591170] (306 bytes) hkBsdGetAddressString(hkStringBuf &)
// hkStringBuf *hkBsdGetAddressString(hkStringBuf *a1);
// [0x15914b0] (98 bytes) hkBsdSocket::listen(int)
// 0x15914b0 hkBsdSocket::listen(int)
// [0x1591520] (682 bytes) hkBsdSocket::pollForNewClient(void)
// hkBsdSocket *hkBsdSocket::pollForNewClient(hkBsdSocket *this);
// [0x15917d0] (37 bytes) hkTypeInfo::finishLoadedObject(void *,int)const
// int (*hkTypeInfo::finishLoadedObject(hkTypeInfo *this, void *a2, int a3))(void *, int);
// [0x1591800] (37 bytes) hkTypeInfo::finishLoadedObjectWithoutTracker(void *,int)const
// int (*hkTypeInfo::finishLoadedObjectWithoutTracker(hkTypeInfo *this, void *a2, int a3))(void *, int);
// [0x1591830] (29 bytes) hkTypeInfo::cleanupLoadedObject(void *)const
// int (*hkTypeInfo::cleanupLoadedObject(hkTypeInfo *this, void *a2))(void *);
// [0x1591850] (68 bytes) hkSystemClock::getTickCounter(void)
// int64_t hkSystemClock::getTickCounter();
// [0x15918a0] (12 bytes) hkSystemClock::getTicksPerSecond(void)
// int64_t hkSystemClock::getTicksPerSecond();
// [0x1596d50] (282 bytes) hkArrayBase<hkcdPlanarCsgOperand::GeomSource>::_append(hkMemoryAllocator &,hkcdPlanarCsgOperand::GeomSource const*,int)
// hkArrayBase<hkcdPlanarCsgOperand::GeomSource> *hkArrayBase<hkcdPlanarCsgOperand::GeomSource>::_append( hkArrayBase<hkcdPlanarCsgOperand::GeomSource> *this, hkMemoryAllocator *a2, const hkcdPlanarCsgOperand::GeomSource *a3, int a4);
// [0x159b000] (1850 bytes) hkSimdInt<128>::setShiftLeft(hkSimdInt<128> const&,int)
// int hkSimdInt<128>::setShiftLeft(hkSimdInt<128> *this, const hkSimdInt<128> *a2, int a3);
// [0x159b740] (2081 bytes) hkSimdInt<128>::setShiftRight(hkSimdInt<128> const&,int)
// int hkSimdInt<128>::setShiftRight(hkSimdInt<128> *this, const hkSimdInt<128> *a2, int a3);
// [0x159ea50] (1486 bytes) hkSimdInt<256>::setMul(hkSimdInt<128> const&,long long)
// uint64_t hkSimdInt<256>::setMul(hkSimdInt<256> *this, const hkSimdInt<128> *a2, int64_t a3);
// [0x159f9f0] (6943 bytes) hkSimdInt<256>::computeDiv32(hkSimdInt<256> const&,hkSimdInt<256> const&)
// int hkSimdInt<256>::computeDiv32(hkSimdInt<256> *this, const hkSimdInt<256> *a2);
// [0x15a23d0] (82 bytes) hkArray<int,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<int,hkContainerHeapAllocator>::clearAndDeallocate(hkArray<int, hkContainerHeapAllocator> *this);
// [0x15ab640] (43 bytes) hkndPlanarSimplificationImpl::PolyMtlPair::less(hkndPlanarSimplificationImpl::PolyMtlPair const&,hkndPlanarSimplificationImpl::PolyMtlPair const&)
// bool hkndPlanarSimplificationImpl::PolyMtlPair::less( hkndPlanarSimplificationImpl::PolyMtlPair *this, const hkndPlanarSimplificationImpl::PolyMtlPair *a2);
// [0x15ab670] (18 bytes) hkndPlanarSimplificationImpl::EdgePolyPair::polyLess(hkndPlanarSimplificationImpl::EdgePolyPair const&,hkndPlanarSimplificationImpl::EdgePolyPair const&)
// bool hkndPlanarSimplificationImpl::EdgePolyPair::polyLess( hkndPlanarSimplificationImpl::EdgePolyPair *this, const hkndPlanarSimplificationImpl::EdgePolyPair *a2);
// [0x15ab690] (29 bytes) hkndPlanarSimplificationImpl::EdgePolyPair::edgeLess(hkndPlanarSimplificationImpl::EdgePolyPair const&,hkndPlanarSimplificationImpl::EdgePolyPair const&)
// bool hkndPlanarSimplificationImpl::EdgePolyPair::edgeLess( hkndPlanarSimplificationImpl::EdgePolyPair *this, const hkndPlanarSimplificationImpl::EdgePolyPair *a2);
// [0x15abb90] (211 bytes) hkndPlanarSimplificationImpl::Simplifier::Simplifier(hkcdPlanarGeometry *,hkcdVertexGeometry const*)
// hkndPlanarSimplificationImpl::Simplifier *hkndPlanarSimplificationImpl::Simplifier::Simplifier( hkndPlanarSimplificationImpl::Simplifier *this, hkcdPlanarGeometry *a2, const hkcdVertexGeometry *a3);
// [0x15abc70] (236 bytes) hkndPlanarSimplificationImpl::Simplifier::extractBoundaryPlanes(hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkArray<hkndPlanarSimplificationImpl::EdgePolyPair,hkContainerHeapAllocator> const&,hkArray<hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkContainerHeapAllocator> &)
// int hkndPlanarSimplificationImpl::Simplifier::extractBoundaryPlanes(int a1, int a2, uint32_t *a3, int *a4);
// [0x15ac280] (761 bytes) hkndPlanarSimplificationImpl::Simplifier::collectBoundaryEdges(hkArray<hkHandle<unsigned int,0u,hkcdVertexGeometry::VPolygonCollectionBase::VPolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkArray<hkndPlanarSimplificationImpl::EdgePolyPair,hkContainerHeapAllocator> &)
// int hkndPlanarSimplificationImpl::Simplifier::collectBoundaryEdges(int a1, uint32_t *a2, hkMemoryAllocator *a3);
// [0x15ac580] (1017 bytes) hkndPlanarSimplificationImpl::Simplifier::buildSimplifyingSolidForBoundedGroup(hkcdPlanarSolid &,hkArray<hkHandle<unsigned int,0u,hkcdVertexGeometry::VPolygonCollectionBase::VPolygonIdDiscriminant>,hkContainerHeapAllocator> const&,hkLocalArray<hkHandle<unsigned int,0u,hkcdPlanarGeometryPolygonCollection::PolygonIdDiscriminant>> &,hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant> &,unsigned int)
// int hkndPlanarSimplificationImpl::Simplifier::buildSimplifyingSolidForBoundedGroup( uint32_t *a1, hkcdPlanarSolid *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x15ac980] (1150 bytes) hkndPlanarSimplificationImpl::Simplifier::simplifyBoundedGroup(hkArray<hkHandle<unsigned int,0u,hkcdVertexGeometry::VPolygonCollectionBase::VPolygonIdDiscriminant>,hkContainerHeapAllocator> const&,unsigned int)
// int hkndPlanarSimplificationImpl::Simplifier::simplifyBoundedGroup(uint32_t *a1, uint32_t *a2, int a3);
// [0x15ace00] (1963 bytes) hkndPlanarSimplificationImpl::Simplifier::simplifyCoplanar(hkndPlanarSimplificationImpl::PolyMtlPair const*,int,unsigned int)
// hkLifoAllocator *hkndPlanarSimplificationImpl::Simplifier::simplifyCoplanar( hkndPlanarSimplificationImpl::Simplifier *this, const hkndPlanarSimplificationImpl::PolyMtlPair *a2, hkLifoAllocator *a3, unsigned int a4);
// [0x15ad5b0] (1396 bytes) hkndPlanarSimplificationImpl::Simplifier::execute(void)
// hkLifoAllocator *hkndPlanarSimplificationImpl::Simplifier::execute( hkndPlanarSimplificationImpl::Simplifier *this);
// [0x15c2840] (245 bytes) hkFreeListArray<hkcdPlanarSolid::ArraySlot,hkHandle<unsigned int,4294967295u,hkcdPlanarSolid::ArrayIdDiscriminant>,128,hkDefaultFreeListArrayOperations<hkcdPlanarSolid::ArraySlot>>::grow(int)
// hkFreeListArray<hkcdPlanarSolid::ArraySlot, hkHandle<unsigned int, 4294967295u, hkcdPlanarSolid::ArrayIdDiscriminant>, 128, hkDefaultFreeListArrayOperations<hkcdPlanarSolid::ArraySlot>> *hkFreeListArray<hkcdPlanarSolid::ArraySlot,hkHandle<unsigned int,4294967295u,hkcdPlanarSolid::ArrayIdDiscriminant>,128,hkDefaultFreeListArrayOperations<hkcdPlanarSolid::ArraySlot>>::grow( hkFreeListArray<hkcdPlanarSolid::ArraySlot, hkHandle<unsigned int, 4294967295u, hkcdPlanarSolid::ArrayIdDiscriminant>, 128, hkDefaultFreeListArrayOperations<hkcdPlanarSolid::ArraySlot>> *this, int a2);
// [0x15d1750] (308 bytes) hkArrayBase<hkcdPlanarGeometryPrimitives::Plane>::_append(hkMemoryAllocator &,hkcdPlanarGeometryPrimitives::Plane const*,int)
// int hkArrayBase<hkcdPlanarGeometryPrimitives::Plane>::_append( hkArrayBase<hkcdPlanarGeometryPrimitives::Plane> *this, hkMemoryAllocator *a2, const hkcdPlanarGeometryPrimitives::Plane *a3, int a4);
// [0x15d23c0] (417 bytes) hkSimdInt<128>::countLeadingZeros(void)const
// unsigned int hkSimdInt<128>::countLeadingZeros(hkSimdInt<128> *this);
// [0x15d2570] (803 bytes) hkSimdInt<128>::setMul(hkSimdInt<128> const&,long long)
// uint64_t hkSimdInt<128>::setMul(hkSimdInt<128> *this, const hkSimdInt<128> *a2, int64_t a3);
// [0x15d28a0] (1103 bytes) hkInt128Vector4::setCross(hkInt64Vector4 const&,hkInt64Vector4 const&)
// int hkInt128Vector4::setCross(int a1, unsigned int *a2, unsigned int *a3);
// [0x15d4190] (3176 bytes) hkSimdInt<256>::setMul(hkSimdInt<128> const&,hkSimdInt<128> const&)
// uint64_t hkSimdInt<256>::setMul( hkSimdInt<256> *this, const hkSimdInt<128> *a2, const hkSimdInt<128> *a3);
// [0x15d8340] (148 bytes) hkArray<hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkContainerHeapAllocator>::hkArray(int)
// int hkArray<hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkContainerHeapAllocator>::hkArray( hkArray<hkHandle<unsigned int, 268435455u, hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>, hkContainerHeapAllocator> *this, int a2);
// [0x15d8bb0] (393 bytes) hkSimdInt<256>::setAbs(hkSimdInt<256> const&)
// int hkSimdInt<256>::setAbs(hkSimdInt<256> *this, const hkSimdInt<256> *a2);
// [0x15db670] (192 bytes) hkArrayBase<hkcdPlanarGeometryPrimitives::Plane>::_pushBack(hkMemoryAllocator &,hkcdPlanarGeometryPrimitives::Plane const&)
// uint32_t *hkArrayBase<hkcdPlanarGeometryPrimitives::Plane>::_pushBack( hkArrayBase<hkcdPlanarGeometryPrimitives::Plane> *this, hkMemoryAllocator *a2, const hkcdPlanarGeometryPrimitives::Plane *a3);
// [0x15dbdb0] (82 bytes) hkArray<hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<hkHandle<unsigned int,268435455u,hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<hkHandle<unsigned int, 268435455u, hkcdPlanarGeometryPrimitives::PlaneIdDiscriminant>, hkContainerHeapAllocator> *this);
// [0x15defc0] (298 bytes) hkSimdInt<128>::countTrailingZeros(void)const
// unsigned int hkSimdInt<128>::countTrailingZeros(hkSimdInt<128> *this);
// [0x15df0f0] (2135 bytes) hkSimdInt<256>::setUnsignedMul(hkSimdInt<128> const&,hkSimdInt<128> const&)
// uint64_t hkSimdInt<256>::setUnsignedMul( hkSimdInt<256> *this, const hkSimdInt<128> *a2, const hkSimdInt<128> *a3);
// [0x15df950] (1465 bytes) hkSimdInt<128>::setUnsignedDiv(hkSimdInt<128> const&,hkSimdInt<128> const&)
// int hkSimdInt<128>::setUnsignedDiv(hkSimdInt<128> *this, const hkSimdInt<128> *a2, const hkSimdInt<128> *a3);
// [0x15e7070] (877 bytes) hkSimdInt<256>::countLeadingZeros(void)const
// int hkSimdInt<256>::countLeadingZeros(hkSimdInt<256> *this);
// [0x15e73e0] (289 bytes) hkSimdInt<256>::setShiftLeft(hkSimdInt<256> const&,int)
// int hkSimdInt<256>::setShiftLeft(hkSimdInt<256> *this, const hkSimdInt<256> *a2, int a3);
// [0x15e7510] (308 bytes) hkSimdInt<256>::setShiftRight(hkSimdInt<256> const&,int)
// int hkSimdInt<256>::setShiftRight(hkSimdInt<256> *this, const hkSimdInt<256> *a2, int a3);
// [0x15e7710] (843 bytes) hkSimdInt<256>::setUnsignedMul(hkSimdInt<256> const&,hkSimdInt<256> const&)
// int hkSimdInt<256>::setUnsignedMul(hkSimdInt<256> *this, const hkSimdInt<256> *a2, const hkSimdInt<256> *a3);
// [0x15e7a60] (4734 bytes) hkSimdInt<256>::computeUnsignedDivMod(hkSimdInt<256> const&,hkSimdInt<256> const&,hkSimdInt<256>&,hkSimdInt<256>&)
// int32_t hkSimdInt<256>::computeUnsignedDivMod( hkSimdInt<256> *this, const hkSimdInt<256> *a2, const hkSimdInt<256> *a3, hkSimdInt<256> *a4);
// [0x15e8ce0] (2333 bytes) hkSimdInt<256>::compareFractions(hkSimdInt<256> const&,hkSimdInt<256> const&,hkSimdInt<256> const&,hkSimdInt<256> const&)
// int hkSimdInt<256>::compareFractions( hkSimdInt<256> *this, const hkSimdInt<256> *a2, const hkSimdInt<256> *a3, const hkSimdInt<256> *a4);
// [0x15e9600] (3647 bytes) hkSimdInt<512>::setUnsignedMul(hkSimdInt<256> const&,hkSimdInt<256> const&)
// int hkSimdInt<512>::setUnsignedMul(hkSimdInt<512> *this, const hkSimdInt<256> *a2, const hkSimdInt<256> *a3);
// [0x15ea440] (1978 bytes) hkSimdInt<512>::setAdd(hkSimdInt<512> const&,hkSimdInt<512> const&)
// int64_t hkSimdInt<512>::setAdd(hkSimdInt<512> *this, const hkSimdInt<512> *a2, const hkSimdInt<512> *a3);
// [0x15eac00] (782 bytes) hkSimdInt<512>::increment(void)
// int64_t hkSimdInt<512>::increment(hkSimdInt<512> *this);
// [0x15eaf10] (1710 bytes) hkSimdInt<512>::setMul(hkSimdInt<256> const&,hkSimdInt<256> const&)
// int hkSimdInt<512>::setMul(hkSimdInt<512> *this, const hkSimdInt<256> *a2, const hkSimdInt<256> *a3);
// [0x15eb5c0] (343 bytes) hkSimdInt<512>::setAbs(hkSimdInt<512> const&)
// int32_t hkSimdInt<512>::setAbs(hkSimdInt<512> *this, __m128i *a2);
// [0x15eb720] (1241 bytes) hkSimdInt<512>::setShiftLeft(hkSimdInt<512> const&,int)
// int hkSimdInt<512>::setShiftLeft(hkSimdInt<512> *this, const hkSimdInt<512> *a2, int a3);
// [0x15ec190] (732 bytes) hkSimdInt<512>::setUnsignedMul(hkSimdInt<512> const&,hkSimdInt<512> const&)
// int hkSimdInt<512>::setUnsignedMul(hkSimdInt<512> *this, const hkSimdInt<512> *a2, const hkSimdInt<512> *a3);
// [0x15ec470] (3299 bytes) hkSimdInt<512>::computeUnsignedDivMod(hkSimdInt<512> const&,hkSimdInt<512> const&,hkSimdInt<512>&,hkSimdInt<512>&)
// int hkSimdInt<512>::computeUnsignedDivMod( hkSimdInt<512> *this, const hkSimdInt<512> *a2, const hkSimdInt<512> *a3, hkSimdInt<512> *a4);
// [0x15ed160] (2555 bytes) hkSimdInt<512>::compareFractions(hkSimdInt<512> const&,hkSimdInt<512> const&,hkSimdInt<512> const&,hkSimdInt<512> const&)
// int hkSimdInt<512>::compareFractions(__m128i *this, __m128i *a2, __m128i *a3, __m128i *a4);
// [0x15f4630] (431 bytes) hkIntSpaceUtil::restoreAabb(hkAabb16 const&,hkAabb &)const
// int hkIntSpaceUtil::restoreAabb(hkIntSpaceUtil *this, const hkAabb16 *a2, hkAabb *a3);
// [0x15f8660] (138 bytes) hkArrayBase<hkcdSimdTree::Node>::_expandBy(hkMemoryAllocator &,int)
// int hkArrayBase<hkcdSimdTree::Node>::_expandBy( hkArrayBase<hkcdSimdTree::Node> *this, hkMemoryAllocator *a2, int a3);
// [0x160e5b0] (82 bytes) hkArray<unsigned int,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<unsigned int,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<unsigned int, hkContainerHeapAllocator> *this);
// [0x160eab0] (321 bytes) hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin>::_trySetSize(hkMemoryAllocator &,int)
// hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin> *hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin>::_trySetSize( hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin> *this, hkMemoryAllocator *a2, hkMemoryAllocator *a3, int a4);
// [0x1612260] (186 bytes) hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHTask>::_clearAndDeallocate(hkMemoryAllocator &)
// hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHTask> *hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHTask>::_clearAndDeallocate( hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHTask> *this, hkMemoryAllocator *a2);
// [0x1612320] (196 bytes) hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin>::_clearAndDeallocate(hkMemoryAllocator &)
// hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin> *hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin>::_clearAndDeallocate( hkArrayBase<hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32>::SAHBin> *this, hkMemoryAllocator *a2);
// [0x1617db0] (240 bytes) hkFindUniquePositionsUtil::reset(int)
// hkArrayUtil *hkFindUniquePositionsUtil::reset(hkFindUniquePositionsUtil *this, int a2);
// [0x1617ea0] (786 bytes) hkFindUniquePositionsUtil::addPosition(hkVector4f const&)
// int hkFindUniquePositionsUtil::addPosition(hkFindUniquePositionsUtil *this, const hkVector4f *a2);
// [0x16181c0] (76 bytes) hkFindUniquePositionsUtil::addPositions(hkVector4f const*,int)
// int hkFindUniquePositionsUtil::addPositions(hkFindUniquePositionsUtil *this, const hkVector4f *a2, int a3);
// [0x1618210] (262 bytes) hkFindUniquePositionsUtil::findPosition(hkVector4f const&)const
// int hkFindUniquePositionsUtil::findPosition(hkFindUniquePositionsUtil *this, const hkVector4f *a2);
// [0x1618320] (59 bytes) hkFindUniquePositionsUtil::getSizeInBytesFor(int)
// unsigned int hkFindUniquePositionsUtil::getSizeInBytesFor(hkFindUniquePositionsUtil *this);
// [0x1618360] (122 bytes) hkFindUniquePositionsUtil::setBuffer(void *,int)
// void hkFindUniquePositionsUtil::setBuffer( hkFindUniquePositionsUtil *this, char *a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3);
// [0x16183e0] (202 bytes) hkGeometryUtils::GridInput::GridInput(int,hkVector4f const&)
// struct hkGeometryUtils::GridInput *hkGeometryUtils::GridInput::GridInput( hkGeometryUtils::GridInput *this, int a2, const hkVector4f *a3);
// [0x16184b0] (647 bytes) hkGeometryUtils::createGrid(hkGeometryUtils::GridInput const&,hkGeometry *,int)
// int hkGeometryUtils::createGrid(hkGeometryUtils *this, const hkGeometryUtils::GridInput *a2, hkGeometry *a3);
// [0x1618740] (76 bytes) hkGeometryUtils::Node::Triangle::Triangle(unsigned int,unsigned int,unsigned int)
// struct hkGeometryUtils::Node::Triangle *hkGeometryUtils::Node::Triangle::Triangle( hkGeometryUtils::Node::Triangle *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0x1618790] (32 bytes) hkGeometryUtils::Node::Node(unsigned int)
// struct hkGeometryUtils::Node *hkGeometryUtils::Node::Node(hkGeometryUtils::Node *this, unsigned int a2);
// [0x16187b0] (252 bytes) hkGeometryUtils::Node::Edge::Edge(unsigned int,hkGeometryUtils::Node::Triangle const&,unsigned int)
// struct hkGeometryUtils::Node::Edge *hkGeometryUtils::Node::Edge::Edge( hkGeometryUtils::Node::Edge *this, unsigned int a2, const hkGeometryUtils::Node::Triangle *a3, unsigned int a4);
// [0x16188b0] (680 bytes) hkGeometryUtils::Node::Edge::Edge(hkGeometryUtils::Node::Edge const&)
// hkGeometryUtils::Node::Edge *hkGeometryUtils::Node::Edge::Edge( hkGeometryUtils::Node::Edge *this, const hkGeometryUtils::Node::Edge *a2);
// [0x1618b60] (738 bytes) hkGeometryUtils::Node::Edge::operator=(hkGeometryUtils::Node::Edge const&)
// hkGeometryUtils::Node::Edge *hkGeometryUtils::Node::Edge::operator=( hkGeometryUtils::Node::Edge *this, const hkGeometryUtils::Node::Edge *a2);
// [0x1618e50] (466 bytes) hkGeometryUtils::Node::Node(hkGeometryUtils::Node const&)
// hkGeometryUtils::Node *hkGeometryUtils::Node::Node( hkGeometryUtils::Node *this, const hkGeometryUtils::Node *a2);
// [0x1619030] (565 bytes) hkGeometryUtils::Node::operator=(hkGeometryUtils::Node const&)
// hkGeometryUtils::Node *hkGeometryUtils::Node::operator=( hkGeometryUtils::Node *this, const hkGeometryUtils::Node *a2);
// [0x1619270] (102 bytes) hkGeometryUtils::Node::Edge::hasTriangleSameWinding(hkGeometryUtils::Node::Triangle const&,int &)
// int hkGeometryUtils::Node::Edge::hasTriangleSameWinding( hkGeometryUtils::Node::Edge *this, const hkGeometryUtils::Node::Triangle *a2, int *a3);
// [0x16192e0] (102 bytes) hkGeometryUtils::Node::Edge::hasTriangleIgnoreWinding(hkGeometryUtils::Node::Triangle const&,int &)
// int hkGeometryUtils::Node::Edge::hasTriangleIgnoreWinding( hkGeometryUtils::Node::Edge *this, const hkGeometryUtils::Node::Triangle *a2, int *a3);
// [0x1619350] (62 bytes) hkGeometryUtils::Node::findEdge(unsigned int)
// uint32_t *hkGeometryUtils::Node::findEdge(hkGeometryUtils::Node *this, unsigned int a2);
// [0x1619390] (623 bytes) hkGeometryUtils::Node::addEdge(unsigned int,hkGeometryUtils::Node::Triangle const&,unsigned int,bool)
// uint32_t *hkGeometryUtils::Node::addEdge( hkGeometryUtils::Node *this, unsigned int a2, const hkGeometryUtils::Node::Triangle *a3, unsigned int a4, bool a5);
// [0x1619600] (59 bytes) hkGeometryUtils::Node::checkForNonManifoldGeometry(void)const
// int hkGeometryUtils::Node::checkForNonManifoldGeometry(hkGeometryUtils::Node *this);
// [0x1619680] (2475 bytes) hkGeometryUtils::_weldVertices(hkGeometry &,float,hkBool,hkArray<int,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &,hkArray<hkVector4f,hkContainerHeapAllocator> &,hkArrayBase<hk1AxisSweep::AabbInt> &,hkArrayBase<hkRadixSort::SortData32> &,hkArrayBase<hk1AxisSweep::AabbInt> &)
// uint32_t *hkGeometryUtils::_weldVertices( uint32_t *a1, float a2, char a3, int *a4, int *a5, hkMemoryAllocator *a6, uint32_t *a7, int a8, int a9);
// [0x161a030] (1031 bytes) hkGeometryUtils::weldVertices(hkGeometry &,float)
// int hkGeometryUtils::weldVertices(hkGeometryUtils *this, hkGeometry *a2);
// [0x161a440] (782 bytes) hkGeometryUtils::weldVertices(hkGeometry &,float,hkBool,hkArray<int,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &)
// int hkGeometryUtils::weldVertices(uint32_t *a1, float a2, char a3, int *a4, int *a5);
// [0x161a750] (7916 bytes) hkGeometryUtils::createCapsuleGeometry(hkVector4f const&,hkVector4f const&,float,int,int,hkTransformf const&,hkGeometry &)
// int hkGeometryUtils::createCapsuleGeometry( hkGeometryUtils *this, const hkVector4f *a2, const hkVector4f *a3, int a4, int a5, float *a6, const hkTransformf *a7);
// [0x161c640] (8993 bytes) hkGeometryUtils::createTaperedCapsuleGeometry(hkVector4f const&,hkVector4f const&,float,float,int,int,hkTransformf const&,hkGeometry &)
// int hkGeometryUtils::createTaperedCapsuleGeometry( hkGeometryUtils *this, const hkVector4f *a2, const hkVector4f *a3, float a4, int a5, int a6, float *a7, const hkTransformf *a8);
// [0x161e970] (3076 bytes) hkGeometryUtils::createCylinderGeometry(hkVector4f const&,hkVector4f const&,float,int,int,hkGeometry &)
// int hkGeometryUtils::createCylinderGeometry( hkGeometryUtils *this, const hkVector4f *a2, const hkVector4f *a3, int a4, int a5, int *a6);
// [0x161f580] (1012 bytes) hkGeometryUtils::createPlaneGeometry(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkGeometry &)
// uint32_t *hkGeometryUtils::createPlaneGeometry( hkGeometryUtils *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x161f980] (243 bytes) hkGeometryUtils::computeVolume(hkGeometry const&,hkSimdFloat32 &)
// float *hkGeometryUtils::computeVolume(uint32_t *a1, float *a2);
// [0x161fa80] (238 bytes) hkGeometryUtils::computeAabb(hkGeometry const&,hkAabb &)
// int hkGeometryUtils::computeAabb(hkGeometryUtils *this, const hkGeometry *a2);
// [0x161fb70] (549 bytes) hkGeometryUtils::computeAabbFromTriangles(hkGeometry const&,hkAabb &)
// unsigned int hkGeometryUtils::computeAabbFromTriangles(hkGeometryUtils *this, const hkGeometry *a2);
// [0x161fda0] (234 bytes) hkGeometryUtils::transformGeometry(hkMatrix4f const&,hkGeometry &)
// hkGeometryUtils *hkGeometryUtils::transformGeometry(hkGeometryUtils *this, const hkMatrix4f *a2);
// [0x161fe90] (416 bytes) hkGeometryUtils::appendGeometry(hkGeometry const&,hkGeometry&)
// int hkGeometryUtils::appendGeometry(hkGeometryUtils *this, const hkGeometry *a2);
// [0x1620030] (1809 bytes) hkGeometryUtils::quantize(hkGeometry &,int)
// hkGeometryUtils *hkGeometryUtils::quantize(hkGeometryUtils *this, hkGeometry *a2);
// [0x1620750] (1688 bytes) hkGeometryUtils::getGeometryInsideAabb(hkGeometry const&,hkGeometry&,hkAabb const&,hkArray<int,hkContainerHeapAllocator> &,hkGeometryUtils::GetGeometryInsideAabbMode)
// uint32_t *hkGeometryUtils::getGeometryInsideAabb( uint32_t *a1, uint32_t *a2, uint32_t *a3, float *a4, int *a5, int a6);
// [0x1620df0] (159 bytes) hkGeometryUtils::getGeometryInsideAabb(hkGeometry const&,hkGeometry&,hkAabb const&,hkGeometryUtils::GetGeometryInsideAabbMode)
// uint32_t *hkGeometryUtils::getGeometryInsideAabb(uint32_t *a1, uint32_t *a2, uint32_t *a3, float *a4, int a5);
// [0x16211d0] (1268 bytes) hkGeometryUtils::removeDuplicateTrianglesFast(hkGeometry &,hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> &)
// uint32_t *hkGeometryUtils::removeDuplicateTrianglesFast(uint32_t *a1, uint32_t *a2, hkMemoryAllocator *a3);
// [0x1621f90] (796 bytes) hkGeometryUtils::weldVerticesVirtual(hkGeometryUtils::IVertices const*,hkArray<int,hkContainerHeapAllocator> &,float)
// int hkGeometryUtils::weldVerticesVirtual( hkGeometryUtils *this, const hkGeometryUtils::IVertices *a2, hkArray<int, hkContainerHeapAllocator> *a3);
// [0x16222b0] (341 bytes) hkGeometryUtils::Node::warnAboutInconsistentWinding(int)const
// void hkGeometryUtils::Node::warnAboutInconsistentWinding(hkGeometryUtils::Node *this, int a2);
// [0x1622410] (3176 bytes) hkGeometryUtils::removeDuplicateTriangles(hkGeometry &,hkArray<int,hkContainerHeapAllocator> &,bool)
// int hkGeometryUtils::removeDuplicateTriangles( hkGeometryUtils *this, hkGeometry *a2, hkArray<int, hkContainerHeapAllocator> *a3);
// [0x1623080] (703 bytes) hkGeometryUtils::createSphere(hkVector4f const&,float,int,hkGeometry *,int)
// int hkGeometryUtils::createSphere(hkGeometryUtils *this, const hkVector4f *a2, int a3, int a4, hkGeometry *a5);
// [0x1623340] (481 bytes) hkGeometryUtils::createBox(hkVector4f const&,hkVector4f const&,hkGeometry *,int)
// void hkGeometryUtils::createBox( hkGeometryUtils *this, const hkVector4f *a2, const hkVector4f *a3, hkGeometry *a4);
// [0x1623dd0] (125 bytes) hkAabb::includePoint(hkVector4f const&)
// hkAabb *hkAabb::includePoint(hkAabb *this, const hkVector4f *a2);
// [0x1623e50] (121 bytes) hkAabb::setEmpty(void)
// hkAabb *hkAabb::setEmpty(hkAabb *this);
// [0x1627f10] (131 bytes) hkSimdFloat32_AdvancedInterface::unroll_setDiv<(hkMathAccuracyMode)1,(hkMathDivByZeroMode)0>::apply(float &,hkSimdFloat32 const&,hkSimdFloat32 const&)
// float *hkSimdFloat32_AdvancedInterface::unroll_setDiv<(hkMathAccuracyMode)1,(hkMathDivByZeroMode)0>::apply(;
// [0x1628260] (106 bytes) hkLocalBuffer<hkVector4f>::~hkLocalBuffer()
// void hkLocalBuffer<hkVector4f>::~hkLocalBuffer(char **this);
// [0x16282d0] (256 bytes) hkArray<hkAabb,hkContainerTempAllocator>::hkArray(int,hkAabb const&)
// void hkArray<hkAabb,hkContainerTempAllocator>::hkArray(hkArray_Raw *this, int a2, const hkAabb *a3);
// [0x1628540] (82 bytes) hkArray<hkVector4f,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<hkVector4f,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<hkVector4f, hkContainerHeapAllocator> *this);
// [0x1629a30] (82 bytes) hkArray<hkVector4f,hkContainerTempAllocator>::clearAndDeallocate(void)
// int hkArray<hkVector4f,hkContainerTempAllocator>::clearAndDeallocate( hkArray<hkVector4f, hkContainerTempAllocator> *this);
// [0x162aa60] (101 bytes) hkArrayBase<hkgpConvexHullImpl::Edge>::_pushBack(hkMemoryAllocator &,hkgpConvexHullImpl::Edge const&)
// int hkArrayBase<hkgpConvexHullImpl::Edge>::_pushBack(hkMemoryAllocator *a1, hkArrayUtil *a2, int *a3);
// [0x162ad50] (178 bytes) hkSimdFloat32 const hkVector4f::length<3,(hkMathAccuracyMode)2,(hkMathNegSqrtMode)1>(void)const
// float *hkVector4f::length<3,(hkMathAccuracyMode)2,(hkMathNegSqrtMode)1>(float *a1, float *a2);
// [0x163fe90] (29 bytes) hkGeometryProcessing::IFunction<hkVector4f,float>::~IFunction()
// void hkGeometryProcessing::IFunction<hkVector4f,float>::~IFunction( hkGeometryProcessing::IFunction<hkVector4f, float> *this);
// [0x163feb0] (29 bytes) hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4f,float>>::~ConstFunction()
// void hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4f,float>>::~ConstFunction( hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4f, float>> *this);
// [0x163fed0] (26 bytes) hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4f,float>>::evaluate(hkVector4f const&)const
// long double hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4f,float>>::evaluate( hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4f, float>> *this);
// [0x163fef0] (45 bytes) hkGeometryProcessing::IFunction<hkVector4f,float>::~IFunction()
// void hkGeometryProcessing::IFunction<hkVector4f,float>::~IFunction( hkGeometryProcessing::IFunction<hkVector4f, float> *this);
// [0x163ff20] (45 bytes) hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4f,float>>::~ConstFunction()
// void hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4f,float>>::~ConstFunction( hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4f, float>> *this);
// [0x16408c0] (126 bytes) hkAabb::includeAabb(hkAabb const&)
// hkAabb *hkAabb::includeAabb(hkAabb *this, const hkAabb *a2);
// [0x1641f00] (597 bytes) hkGeometryProcessing::IsoVertex::solveTriangle(float const*,hkGeometryProcessing::IsoVertex*,float)
// int hkGeometryProcessing::IsoVertex::solveTriangle( hkGeometryProcessing::IsoVertex *this, float *a2, hkGeometryProcessing::IsoVertex *a3);
// [0x1642160] (21 bytes) hkGeometryProcessing::SurfaceSampler::clear(void)
// hkGeometryProcessing::SurfaceSampler *hkGeometryProcessing::SurfaceSampler::clear( hkGeometryProcessing::SurfaceSampler *this);
// [0x1642180] (410 bytes) hkGeometryProcessing::SurfaceSampler::addElement(hkVector4f const&,hkVector4f const&,hkVector4f const&,int)
// const hkVector4f *hkGeometryProcessing::SurfaceSampler::addElement( hkGeometryProcessing::SurfaceSampler *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, int a5);
// [0x1642320] (214 bytes) hkGeometryProcessing::SurfaceSampler::addGeometry(hkGeometry const&,int)
// hkArrayUtil *hkGeometryProcessing::SurfaceSampler::addGeometry( hkGeometryProcessing::SurfaceSampler *this, const hkGeometry *a2, int a3);
// [0x1642400] (52 bytes) hkGeometryProcessing::SurfaceSampler::findElement(int)const
// int hkGeometryProcessing::SurfaceSampler::findElement(hkGeometryProcessing::SurfaceSampler *this, int a2);
// [0x1642440] (131 bytes) hkGeometryProcessing::SurfaceSampler::searchElement(float)const
// int hkGeometryProcessing::SurfaceSampler::searchElement(hkGeometryProcessing::SurfaceSampler *this, float a2);
// [0x16424d0] (614 bytes) hkGeometryProcessing::SurfaceSampler::getSample(hkGeometryProcessing::Prng &,hkVector4f &)const
// int hkGeometryProcessing::SurfaceSampler::getSample(hkGeometryProcessing::SurfaceSampler *a1, int *a2, int a3);
// [0x1642740] (401 bytes) hkGeometryProcessing::intersectPlanes(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&)
// int hkGeometryProcessing::intersectPlanes( hkGeometryProcessing *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x16428e0] (281 bytes) hkGeometryProcessing::intersectLineWithPlane(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32 &)
// int hkGeometryProcessing::intersectLineWithPlane(float *a1, float *a2, float *a3, float *a4);
// [0x1642a00] (387 bytes) hkGeometryProcessing::squaredDistanceFromPointToLine(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32 &)
// float *hkGeometryProcessing::squaredDistanceFromPointToLine( float *a1, float *a2, float *a3, float *a4, uint32_t *a5);
// [0x1642b90] (571 bytes) hkGeometryProcessing::squaredDistanceFromPointToLine(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&,float *)
// hkGeometryProcessing *hkGeometryProcessing::squaredDistanceFromPointToLine( hkGeometryProcessing *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, hkVector4f *a5, float *a6);
// [0x1642dd0] (87 bytes) hkGeometryProcessing::squaredDistanceFromPointToTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&,hkVector4f*)
// hkGeometryProcessing *hkGeometryProcessing::squaredDistanceFromPointToTriangle( hkGeometryProcessing *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5, hkVector4f *a6, hkVector4f *a7);
// [0x1642e30] (1196 bytes) hkGeometryProcessing::nearestDistanceBetweenLines(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32 &,hkSimdFloat32 &)
// float *hkGeometryProcessing::nearestDistanceBetweenLines( float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7);
// [0x16432e0] (640 bytes) hkGeometryProcessing::checkPointInsideTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&)
// bool hkGeometryProcessing::checkPointInsideTriangle(float *a1, float *a2, float *a3, float *a4, float *a5);
// [0x1643560] (849 bytes) hkGeometryProcessing::buildTransposedArray(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<hkFourTransposedPointsf,hkContainerHeapAllocator> &)
// int hkGeometryProcessing::buildTransposedArray(int **a1, int *a2);
// [0x16438c0] (95 bytes) hkGeometryProcessing::getSupportingVertex(hkArrayBase<hkFourTransposedPointsf> const&,hkVector4f const&,hkVector4f&)
// int hkGeometryProcessing::getSupportingVertex(int a1, float *a2, uint32_t *a3);
// [0x1643920] (628 bytes) hkGeometryProcessingInternals::generateRandomDistribution(hkgpMesh const&,int,hkArray<hkVector4f,hkContainerHeapAllocator> &,hkPseudoRandomGenerator &)
// bool hkGeometryProcessingInternals::generateRandomDistribution( hkGeometryProcessingInternals *this, const hkgpMesh *a2, uint32_t *a3, hkArray<hkVector4f, hkContainerHeapAllocator> *a4);
// [0x1643ba0] (248 bytes) hkGeometryProcessing::normalizeAspectRatio(hkAabb &)
// hkGeometryProcessing *hkGeometryProcessing::normalizeAspectRatio(hkGeometryProcessing *this);
// [0x1643ca0] (39 bytes) hkGeometryProcessing::sampleAabb(hkAabb const&,hkVector4f const&)
// hkGeometryProcessing *hkGeometryProcessing::sampleAabb(hkGeometryProcessing *this, __m128 *a2, __m128 *a3);
// [0x1643cd0] (1241 bytes) hkGeometryProcessing::octahedronToNormal(hkVector4f const&,hkVector4f&)
// void hkGeometryProcessing::octahedronToNormal(hkGeometryProcessing *this, const hkVector4f *a2);
// [0x16441b0] (893 bytes) hkGeometryProcessing::normalToOctahedron(hkVector4f const&,hkVector4f&)
// const hkVector4f *hkGeometryProcessing::normalToOctahedron(hkGeometryProcessing *this, const hkVector4f *a2);
// [0x1644530] (9 bytes) hkGeometryProcessing::wrapOctahedronCoordinates(hkVector4f &)
// void hkGeometryProcessing::wrapOctahedronCoordinates();
// [0x1644540] (688 bytes) hkGeometryProcessing::computeTriangleQuality(hkVector4f const&,hkVector4f const&,hkVector4f const&)
// hkGeometryProcessing *hkGeometryProcessing::computeTriangleQuality( hkGeometryProcessing *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x16447f0] (166 bytes) hkGeometryProcessing::computeMedian(hkVector4f const&,hkVector4f const&)
// hkGeometryProcessing *hkGeometryProcessing::computeMedian( hkGeometryProcessing *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x16448a0] (142 bytes) hkGeometryProcessing::computeMedian(hkVector4f const&,hkVector4f const&,hkVector4f const&)
// hkGeometryProcessing *hkGeometryProcessing::computeMedian( hkGeometryProcessing *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x1644930] (183 bytes) hkGeometryProcessing::computeMedian(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// hkGeometryProcessing *hkGeometryProcessing::computeMedian( hkGeometryProcessing *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x16449f0] (418 bytes) hkGeometryProcessing::computeSurfaceArea(hkGeometry const&)
// long double hkGeometryProcessing::computeSurfaceArea(hkGeometryProcessing *this);
// [0x1644ba0] (1527 bytes) hkGeometryProcessing::subdivideGeometry(hkGeometry &)
// int hkGeometryProcessing::subdivideGeometry(hkGeometryProcessing *this);
// [0x16451a0] (684 bytes) hkGeometryProcessing::detachTriangles(hkGeometry &)
// int hkGeometryProcessing::detachTriangles(hkGeometryProcessing *this);
// [0x1645580] (1068 bytes) hkSortedTree<hkGeometryProcessingInternals::ClusterQueueNode,hkSortedTreeBase::CompareValues,int,16>::insert(hkGeometryProcessingInternals::ClusterQueueNode const&)
// int hkSortedTree<hkGeometryProcessingInternals::ClusterQueueNode,hkSortedTreeBase::CompareValues,int,16>::insert( int *a1, uint32_t *a2);
// [0x16459b0] (1326 bytes) hkGeometryProcessing::generateClusters(hkArray<hkVector4f,hkContainerHeapAllocator> const&,hkArray<hkSimdFloat32,hkContainerHeapAllocator> const*,int,hkArray<int,hkContainerHeapAllocator> &,int)
// int hkGeometryProcessing::generateClusters(uint32_t *a1, uint32_t *a2, int a3, int *a4, int a5);
// [0x1645ee0] (339 bytes) hkGeometryProcessing::generateClusters(hkArray<float,hkContainerHeapAllocator> const&,hkArray<hkSimdFloat32,hkContainerHeapAllocator> const*,int,hkArray<int,hkContainerHeapAllocator> &,int)
// int hkGeometryProcessing::generateClusters(uint32_t *a1, uint32_t *a2, int a3, int *a4, int a5);
// [0x1646040] (85 bytes) hkArray<hkcdDynamicTree::CodecRawUlong,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<hkcdDynamicTree::CodecRawUlong,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<hkcdDynamicTree::CodecRawUlong, hkContainerHeapAllocator> *this);
// [0x16460a0] (85 bytes) hkArray<hkcdDynamicTree::CodecRawUint,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<hkcdDynamicTree::CodecRawUint,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<hkcdDynamicTree::CodecRawUint, hkContainerHeapAllocator> *this);
// [0x1646100] (82 bytes) hkArray<unsigned long,hkContainerHeapAllocator>::clearAndDeallocate(void)
// int hkArray<unsigned long,hkContainerHeapAllocator>::clearAndDeallocate( hkArray<unsigned long, hkContainerHeapAllocator> *this);
// [0x16463e0] (85 bytes) hkGeometryProcessing::isGeometryClosed(hkGeometry const&)
// hkGeometryProcessing *hkGeometryProcessing::isGeometryClosed( hkGeometryProcessing *this, const hkGeometry *a2);
// [0x1646590] (1607 bytes) hkGeometryProcessing::laplacianSmoothing(hkGeometry &,int,float)
// int hkGeometryProcessing::laplacianSmoothing( __m128i a1, hkGeometryProcessing *this, hkGeometry *a3, float a4);
