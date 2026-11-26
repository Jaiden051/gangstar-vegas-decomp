#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_base_part01.h
// Library: havok | Module: havok_base_part01
// Binary Address Span: 0x1545750 .. 0x1562020 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1545750] (9 bytes) hkCheckFlushDenormals(void)
// void hkCheckFlushDenormals();
// [0x15459a0] (215 bytes) hkMonitorStreamColorTable::~hkMonitorStreamColorTable()
// void hkMonitorStreamColorTable::~hkMonitorStreamColorTable(hkMonitorStreamColorTable *this);
// [0x1545a80] (160 bytes) hkMonitorStreamColorTable::~hkMonitorStreamColorTable()
// void hkMonitorStreamColorTable::~hkMonitorStreamColorTable(hkMonitorStreamColorTable *this);
// [0x1545b20] (22 bytes) hkMonitorStreamColorTable::ColorPair::staticClass(void)
// void *hkMonitorStreamColorTable::ColorPair::staticClass();
// [0x1545b40] (22 bytes) hkMonitorStreamColorTable::staticClass(void)
// void *hkMonitorStreamColorTable::staticClass();
// [0x1545b60] (22 bytes) hkMonitorStreamFrameInfo::staticClass(void)
// void *hkMonitorStreamFrameInfo::staticClass();
// [0x1545b80] (22 bytes) hkMonitorStreamStringMap::StringMap::staticClass(void)
// void *hkMonitorStreamStringMap::StringMap::staticClass();
// [0x1545ba0] (22 bytes) hkMonitorStreamStringMap::staticClass(void)
// void *hkMonitorStreamStringMap::staticClass();
// [0x1545f50] (223 bytes) hkArrayUtil::_reserve(hkMemoryAllocator &,void *,int,int)
// hkArrayUtil *hkArrayUtil::_reserve(hkArrayUtil *this, hkMemoryAllocator *a2, int *a3, int a4, int a5);
// [0x1546030] (188 bytes) hkArrayUtil::_reserveMore(hkMemoryAllocator &,void *,int)
// int hkArrayUtil::_reserveMore(hkArrayUtil *this, hkMemoryAllocator *a2, int a3, int a4);
// [0x15460f0] (206 bytes) hkArrayUtil::_reduce(hkMemoryAllocator &,void *,int,char *,int)
// int hkArrayUtil::_reduce(int *a1, int *a2, int a3, int dest, int a5);
// [0x15461d0] (22 bytes) hkFloat16Transform::staticClass(void)
// void *hkFloat16Transform::staticClass();
// [0x15462f0] (13 bytes) hkAndroidAssetManagerFileSystem::openWriter(char const*,hkFileSystem::OpenFlags)
// uint32_t *hkAndroidAssetManagerFileSystem::openWriter(uint32_t *a1);
// [0x1546300] (29 bytes) hkFileSystem::Iterator::Impl::~Impl()
// void hkFileSystem::Iterator::Impl::~Impl(hkFileSystem::Iterator::Impl *this);
// [0x1546320] (29 bytes) hkAndroidAssetManagerFileSystem::~hkAndroidAssetManagerFileSystem()
// void hkAndroidAssetManagerFileSystem::~hkAndroidAssetManagerFileSystem(hkAndroidAssetManagerFileSystem *this);
// [0x15466d0] (96 bytes) hkAndroidAssetManagerFileSystem::~hkAndroidAssetManagerFileSystem()
// void hkAndroidAssetManagerFileSystem::~hkAndroidAssetManagerFileSystem(hkAndroidAssetManagerFileSystem *this);
// [0x1546790] (187 bytes) hkAndroidAssetManagerFileSystem::createIterator(char const*,char const*)
// hkAndroidAssetManagerFileSystem *hkAndroidAssetManagerFileSystem::createIterator( hkAndroidAssetManagerFileSystem *this, const char *a2, hkString *a3, hkString *a4);
// [0x1546850] (96 bytes) hkFileSystem::Iterator::Impl::~Impl()
// void hkFileSystem::Iterator::Impl::~Impl(hkFileSystem::Iterator::Impl *this);
// [0x1546910] (164 bytes) hkAndroidAssetManagerFileSystem::openReader(char const*,hkFileSystem::OpenFlags)
// uint32_t *hkAndroidAssetManagerFileSystem::openReader(uint32_t *a1, int a2, int a3, char a4);
// [0x1546ae0] (146 bytes) hkAndroidAssetManagerFileSystem::stat(char const*,hkFileSystem::Entry &)
// int hkAndroidAssetManagerFileSystem::stat( hkAndroidAssetManagerFileSystem *this, hkString *a2, hkFileSystem::Entry *a3);
// [0x1546b80] (52 bytes) hkErrStream::~hkErrStream()
// void hkErrStream::~hkErrStream(hkErrStream *this);
// [0x1546bc0] (93 bytes) hkErrStream::~hkErrStream()
// void hkErrStream::~hkErrStream(hkErrStream *this);
// [0x1546c20] (180 bytes) hkErrStream::hkErrStream(void *,int)
// void hkErrStream::hkErrStream(hkErrStream *this, hkString *a2, int a3);
// [0x1546ce0] (78 bytes) hkError::messageReport(int,char const*,char const*,int)
// int hkError::messageReport(hkError *this, int a2, const char *a3, const char *a4);
// [0x1546d30] (78 bytes) hkError::messageWarning(int,char const*,char const*,int)
// int hkError::messageWarning(hkError *this, int a2, const char *a3, const char *a4);
// [0x1546d80] (78 bytes) hkError::messageAssert(int,char const*,char const*,int)
// int hkError::messageAssert(hkError *this, int a2, const char *a3, const char *a4);
// [0x1546dd0] (78 bytes) hkError::messageError(int,char const*,char const*,int)
// int hkError::messageError(hkError *this, int a2, const char *a3, const char *a4);
// [0x1546e20] (332 bytes) hkReferenceCountError(hkReferencedObject const*,char const*)
// void hkReferenceCountError(const hkReferencedObject *a1, hkString *a2);
// [0x1546f70] (126 bytes) hkErrorMessage
// void hkErrorMessage(hkString *a1);
// [0x1547050] (22 bytes) hkSphere::staticClass(void)
// void *hkSphere::staticClass();
// [0x1547140] (27 bytes) hkUFloat8::getEncodedFloat(unsigned char)
// int hkUFloat8::getEncodedFloat(hkUFloat8 *this);
// [0x15471b0] (195 bytes) hkMemoryInitUtil::initFreeListLargeBlock(hkMemoryAllocator *,hkMemorySystem::FrameInfo const&,hkFreeListAllocator::Cinfo const*,hkFreeListMemorySystem::SetupFlags)
// int hkMemoryInitUtil::initFreeListLargeBlock( hkMemorySystem *a1, int a2, hkFreeListAllocator::Cinfo *a3, int a4);
// [0x1547280] (167 bytes) hkMemoryInitUtil::initFreeList(hkMemoryAllocator *,hkMemoryAllocator::ExtendedInterface *,hkMemorySystem::FrameInfo const&,hkFreeListAllocator::Cinfo const*,hkFreeListMemorySystem::SetupFlags)
// int hkMemoryInitUtil::initFreeList( hkMemorySystem *a1, hkMemoryAllocator::ExtendedInterface *a2, int a3, hkFreeListAllocator::Cinfo *a4, int a5);
// [0x1547330] (116 bytes) hkMemoryInitUtil::initHeapAllocator(hkMemoryAllocator *,hkMemoryAllocator *,hkMemoryAllocator::ExtendedInterface *,hkMemorySystem::FrameInfo const&)
// int hkMemoryInitUtil::initHeapAllocator( hkMemoryInitUtil *this, hkMemoryAllocator *a2, hkMemoryAllocator *a3, hkMemoryAllocator::ExtendedInterface *a4);
// [0x15473e0] (22 bytes) hkSimpleProperty::staticClass(void)
// void *hkSimpleProperty::staticClass();
// [0x1547400] (22 bytes) hkSimplePropertyValue::staticClass(void)
// void *hkSimplePropertyValue::staticClass();
// [0x15475a0] (22 bytes) hkMultiThreadCheck::staticClass(void)
// void *hkMultiThreadCheck::staticClass();
// [0x15476a0] (22 bytes) hkUFloat8::staticClass(void)
// void *hkUFloat8::staticClass();
// [0x1547790] (29 bytes) hkMemoryAllocator::ExtendedInterface::~ExtendedInterface()
// void hkMemoryAllocator::ExtendedInterface::~ExtendedInterface(hkMemoryAllocator::ExtendedInterface *this);
// [0x15477b0] (12 bytes) hkFreeListAllocator::getExtendedInterface(void)
// char *hkFreeListAllocator::getExtendedInterface(hkFreeListAllocator *this);
// [0x15477c0] (37 bytes) hkFreeListAllocator::getApproxTotalAllocated(void)const
// int hkFreeListAllocator::getApproxTotalAllocated(hkFreeListAllocator *this);
// [0x1547800] (90 bytes) hkFreeListAllocator::resetPeakMemoryStatistics(void)
// int hkFreeListAllocator::resetPeakMemoryStatistics(hkFreeListAllocator *this);
// [0x1547860] (29 bytes) hkFreeListAllocator::blockAlloc(int)
// int hkFreeListAllocator::blockAlloc(hkFreeListAllocator *this, ...);
// [0x1547880] (15 bytes) hkFreeListAllocator::getMemorySoftLimit(void)const
// int hkFreeListAllocator::getMemorySoftLimit(hkFreeListAllocator *this);
// [0x15478a0] (45 bytes) hkMemoryAllocator::ExtendedInterface::~ExtendedInterface()
// void hkMemoryAllocator::ExtendedInterface::~ExtendedInterface(hkMemoryAllocator::ExtendedInterface *this);
// [0x15478d0] (390 bytes) hkFreeListAllocator::garbageCollect(void)
// int hkFreeListAllocator::garbageCollect(hkFreeListAllocator *this);
// [0x1547a70] (80 bytes) hkFreeListAllocator::getAllocatedSize(void const*,int)const
// int hkFreeListAllocator::getAllocatedSize(hkFreeListAllocator *this, const void *a2, int a3);
// [0x1547b70] (64 bytes) hkFreeListAllocator::canAllocTotal(int)
// bool hkFreeListAllocator::canAllocTotal(hkFreeListAllocator *this, int a2);
// [0x1547bc0] (221 bytes) hkFreeListAllocator::setScrubValues(unsigned int,unsigned int)
// int hkFreeListAllocator::setScrubValues(hkFreeListAllocator *this, unsigned int a2);
// [0x1547cc0] (237 bytes) hkFreeListAllocator::setMemorySoftLimit(unsigned int)
// hkFreeListAllocator *hkFreeListAllocator::setMemorySoftLimit( hkFreeListAllocator *this, unsigned int a2, int a3);
// [0x1547dd0] (343 bytes) hkFreeListAllocator::blockFree(void *,int)
// void hkFreeListAllocator::blockFree(hkFreeListAllocator *this, uint32_t *a2, int a3);
// [0x1547f30] (478 bytes) hkFreeListAllocator::bufAlloc(int &)
// uint32_t *hkFreeListAllocator::bufAlloc(hkFreeListAllocator *this, int *a2);
// [0x1548110] (430 bytes) hkFreeListAllocator::blockFreeBatch(void **,int,int)
// int hkFreeListAllocator::blockFreeBatch(hkFreeListAllocator *this, void **a2, int a3, int a4);
// [0x15482c0] (316 bytes) hkFreeListAllocator::isOk(void)const
// hkFreeListAllocator *hkFreeListAllocator::isOk(hkFreeListAllocator *this, int a2);
// [0x1548410] (549 bytes) hkFreeListAllocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkFreeListAllocator::getMemoryStatistics( int a1, pthread_mutex_t *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
// [0x1548640] (676 bytes) hkFreeListAllocator::blockAllocBatch(void **,int,int)
// int hkFreeListAllocator::blockAllocBatch(hkFreeListAllocator *this, void **a2, int a3, int a4);
// [0x15488f0] (428 bytes) hkFreeListAllocator::incrementalGarbageCollect(int)
// int hkFreeListAllocator::incrementalGarbageCollect(hkFreeListAllocator *this, int *a2);
// [0x1548ac0] (412 bytes) hkFreeListAllocator::addToSnapshot(hkMemorySnapshot &,int)
// int hkFreeListAllocator::addToSnapshot(hkFreeListAllocator *this, hkMemorySnapshot *a2, int a3);
// [0x1548c70] (460 bytes) hkFreeListAllocator::hkFreeListAllocator(void)
// void hkFreeListAllocator::hkFreeListAllocator(hkFreeListAllocator *this);
// [0x1548e50] (54 bytes) hkFreeListAllocator::Cinfo::findInfoIndex(unsigned int)const
// int hkFreeListAllocator::Cinfo::findInfoIndex(hkFreeListAllocator::Cinfo *this, unsigned int a2);
// [0x1548e90] (87 bytes) hkFreeListAllocator::Cinfo::add(unsigned int,unsigned int,unsigned int)
// uint32_t *hkFreeListAllocator::Cinfo::add( hkFreeListAllocator::Cinfo *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0x1548ef0] (56 bytes) hkFreeListAllocator::Cinfo::removeAt(int)
// hkFreeListAllocator::Cinfo *hkFreeListAllocator::Cinfo::removeAt(hkFreeListAllocator::Cinfo *this, int a2);
// [0x1548f30] (319 bytes) hkFreeListAllocator::setFixedSizeCinfo(unsigned int,hkFreeListAllocator::Cinfo &)
// uint32_t *hkFreeListAllocator::setFixedSizeCinfo(hkFreeListAllocator *this, hkFreeListAllocator::Cinfo *a2);
// [0x1549070] (352 bytes) hkFreeListAllocator::setDefaultCinfo(hkFreeListAllocator::Cinfo &)
// uint32_t *hkFreeListAllocator::setDefaultCinfo(hkFreeListAllocator *this);
// [0x15491d0] (70 bytes) hkFreeListAllocator::_deleteFreeList(hkFreeList *)
// char *hkFreeListAllocator::_deleteFreeList(hkFreeListAllocator *this, hkFreeList *a2);
// [0x1549220] (345 bytes) hkFreeListAllocator::~hkFreeListAllocator()
// void hkFreeListAllocator::~hkFreeListAllocator(hkFreeListAllocator *this);
// [0x1549390] (34 bytes) hkFreeListAllocator::~hkFreeListAllocator()
// void hkFreeListAllocator::~hkFreeListAllocator(hkFreeListAllocator *this);
// [0x15493d0] (220 bytes) hkFreeListAllocator::_newFreeList(unsigned int,unsigned int,unsigned int)
// hkFreeList *hkFreeListAllocator::_newFreeList( hkFreeListAllocator *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0x15494b0] (459 bytes) hkFreeListAllocator::_construct(hkFreeListAllocator::Cinfo const*)
// 0x15494b0 hkFreeListAllocator::_construct(hkFreeListAllocator::Cinfo const*)
// [0x1549680] (477 bytes) hkFreeListAllocator::hkFreeListAllocator(hkMemoryAllocator *,hkMemoryAllocator::ExtendedInterface *,hkFreeListAllocator::Cinfo const*)
// void hkFreeListAllocator::hkFreeListAllocator( hkFreeListAllocator *this, hkMemoryAllocator *a2, hkMemoryAllocator::ExtendedInterface *a3, const hkFreeListAllocator::Cinfo *a4);
// [0x1549870] (56 bytes) hkFreeListAllocator::init(hkMemoryAllocator *,hkMemoryAllocator::ExtendedInterface *,hkFreeListAllocator::Cinfo const*)
// int hkFreeListAllocator::init( hkFreeListAllocator *this, hkMemoryAllocator *a2, hkMemoryAllocator::ExtendedInterface *a3, const hkFreeListAllocator::Cinfo *a4);
// [0x1549ff0] (1108 bytes) hkFreeListAllocator::walkMemory(void (*)(void *,unsigned int,bool,int,void *),void *)
// hkFreeListAllocator *hkFreeListAllocator::walkMemory( hkFreeListAllocator *this, void (*a2)(void *, unsigned int, bool, int, void *), void (*a3)(void *, unsigned int, bool, int, void *), void *a4);
// [0x154a460] (9 bytes) hkStreamReader::isSeekTellSupported(void)
// int hkStreamReader::isSeekTellSupported();
// [0x154a470] (108 bytes) hkStreamReader::skip(int)
// int hkStreamReader::skip(hkStreamReader *this, int a2);
// [0x154a4e0] (9 bytes) hkStreamReader::peek(void *,int)
// int hkStreamReader::peek();
// [0x154a4f0] (29 bytes) hkStreamReader::~hkStreamReader()
// void hkStreamReader::~hkStreamReader(hkStreamReader *this);
// [0x154a510] (96 bytes) hkStreamReader::~hkStreamReader()
// void hkStreamReader::~hkStreamReader(hkStreamReader *this);
// [0x154a580] (22 bytes) hkClass::staticClass(void)
// void *hkClass::staticClass();
// [0x154a6c0] (22 bytes) hkUuid::staticClass(void)
// void *hkUuid::staticClass();
// [0x154a7b0] (9 bytes) hkStreamWriter::flush(void)
// void hkStreamWriter::flush();
// [0x154a7c0] (29 bytes) hkCrcStreamWriter<unsigned int,3988292384u>::~hkCrcStreamWriter()
// void hkCrcStreamWriter<unsigned int,3988292384u>::~hkCrcStreamWriter( hkCrcStreamWriter<unsigned int, 3988292384u> *this);
// [0x154a7e0] (29 bytes) hkCrc32StreamWriter::~hkCrc32StreamWriter()
// void hkCrc32StreamWriter::~hkCrc32StreamWriter(hkCrc32StreamWriter *this);
// [0x154a800] (10 bytes) hkCrcStreamWriter<unsigned int,3988292384u>::isOk(void)const
// hkCrcStreamWriter<unsigned int, 3988292384u> *hkCrcStreamWriter<unsigned int,3988292384u>::isOk( hkCrcStreamWriter<unsigned int, 3988292384u> *this);
// [0x154a810] (240 bytes) hkCrcStreamWriter<unsigned int,3988292384u>::write(void const*,int)
// int hkCrcStreamWriter<unsigned int,3988292384u>::write( hkCrcStreamWriter<unsigned int, 3988292384u> *this, char *a2, int a3);
// [0x154a900] (96 bytes) hkCrc32StreamWriter::~hkCrc32StreamWriter()
// void hkCrc32StreamWriter::~hkCrc32StreamWriter(hkCrc32StreamWriter *this);
// [0x154a960] (96 bytes) hkCrcStreamWriter<unsigned int,3988292384u>::~hkCrcStreamWriter()
// void hkCrcStreamWriter<unsigned int,3988292384u>::~hkCrcStreamWriter( hkCrcStreamWriter<unsigned int, 3988292384u> *this);
// [0x154a9c0] (88 bytes) hkClass::hkClass(char const*,hkClass const*,int,hkClass const**,int,hkClassEnum const*,int,hkClassMember const*,int,void const*,hkCustomAttributes const*,unsigned int,unsigned int)
// void hkClass::hkClass( hkClass *this, const char *a2, const hkClass *a3, int a4, const hkClass **a5, int a6, const hkClassEnum *a7, int a8, const hkClassMember *a9, int a10, const void *a11, const hkCustomAttributes *a12, unsigned int a13, unsigned int a14);
// [0x154aa20] (11 bytes) hkClass::getName(void)const
// int hkClass::getName(hkClass *this);
// [0x154aa30] (98 bytes) hkClass::equals(hkClass const*)const
// bool hkClass::equals(hkClass *this, const hkClass *a2);
// [0x154aaa0] (12 bytes) hkClass::getParent(void)const
// int hkClass::getParent(hkClass *this);
// [0x154aab0] (12 bytes) hkClass::getParent(void)
// int hkClass::getParent(hkClass *this);
// [0x154aac0] (28 bytes) hkClass::getInheritanceDepth(void)const
// int hkClass::getInheritanceDepth(hkClass *this);
// [0x154aae0] (130 bytes) hkClass::isSuperClass(hkClass const&)const
// hkClass *hkClass::isSuperClass(hkClass *this, const hkClass *a2, hkClass *a3);
// [0x154ab70] (27 bytes) hkClass::getNumInterfaces(void)const
// int hkClass::getNumInterfaces(hkClass *this);
// [0x154ab90] (9 bytes) hkClass::getInterface(int)const
// int hkClass::getInterface();
// [0x154aba0] (9 bytes) hkClass::getDeclaredInterface(int)const
// int hkClass::getDeclaredInterface();
// [0x154abb0] (12 bytes) hkClass::getNumDeclaredInterfaces(void)const
// int hkClass::getNumDeclaredInterfaces(hkClass *this);
// [0x154abc0] (27 bytes) hkClass::getNumEnums(void)const
// int hkClass::getNumEnums(hkClass *this);
// [0x154abe0] (96 bytes) hkClass::getEnum(int)const
// int hkClass::getEnum(hkClass *this, int a2);
// [0x154ac40] (107 bytes) hkClass::getEnumByName(char const*)const
// hkString **hkClass::getEnumByName(hkClass *this, char *a2);
// [0x154acb0] (22 bytes) hkClass::getDeclaredEnum(int)const
// int hkClass::getDeclaredEnum(hkClass *this, int a2);
// [0x154acd0] (12 bytes) hkClass::getNumDeclaredEnums(void)const
// int hkClass::getNumDeclaredEnums(hkClass *this);
// [0x154ace0] (107 bytes) hkClass::getDeclaredEnumByName(char const*)const
// hkString **hkClass::getDeclaredEnumByName(hkClass *this, char *a2);
// [0x154ad50] (27 bytes) hkClass::getNumMembers(void)const
// int hkClass::getNumMembers(hkClass *this);
// [0x154ad70] (96 bytes) hkClass::getMember(int)const
// int hkClass::getMember(hkClass *this, int a2);
// [0x154add0] (42 bytes) hkClass::getMember(int)
// int hkClass::getMember(hkClass *this, int a2);
// [0x154ae00] (12 bytes) hkClass::getNumDeclaredMembers(void)const
// int hkClass::getNumDeclaredMembers(hkClass *this);
// [0x154ae10] (21 bytes) hkClass::getDeclaredMember(int)const
// int hkClass::getDeclaredMember(hkClass *this, int a2);
// [0x154ae30] (107 bytes) hkClass::getDeclaredMemberByName(char const*)const
// hkString **hkClass::getDeclaredMemberByName(hkClass *this, char *a2);
// [0x154aea0] (107 bytes) hkClass::getMemberByName(char const*)const
// hkString **hkClass::getMemberByName(hkClass *this, char *a2);
// [0x154af10] (107 bytes) hkClass::getMemberIndexByName(char const*)const
// int hkClass::getMemberIndexByName(hkClass *this, char *a2);
// [0x154af80] (107 bytes) hkClass::getMemberIndexByNameCaseInsensitive(char const*)const
// int hkClass::getMemberIndexByNameCaseInsensitive(hkClass *this, char *a2);
// [0x154aff0] (107 bytes) hkClass::getDeclaredMemberIndexByName(char const*)const
// int hkClass::getDeclaredMemberIndexByName(hkClass *this, char *a2);
// [0x154b060] (12 bytes) hkClass::getObjectSize(void)const
// int hkClass::getObjectSize(hkClass *this);
// [0x154b070] (14 bytes) hkClass::setObjectSize(int)
// hkClass *hkClass::setObjectSize(hkClass *this, int a2);
// [0x154b080] (74 bytes) hkClass::hasVtable(void)const
// hkClass *hkClass::hasVtable(hkClass *this, hkClass *Parent);
// [0x154b0d0] (12 bytes) hkClass::getDescribedVersion(void)const
// int hkClass::getDescribedVersion(hkClass *this);
// [0x154b0e0] (176 bytes) hkClass::retrieveMember(int,void const*&,hkClassMember const*&)const
// hkClass *hkClass::retrieveMember( hkClass *this, hkClass *a2, const void **a3, const hkClassMember **a4, uint32_t *a5);
// [0x154b190] (76 bytes) hkClass::hasDefault(int)const
// bool hkClass::hasDefault(hkClass *this, const void **a2);
// [0x154b1e0] (43 bytes) hkClass::hasDeclaredDefault(int)const
// bool hkClass::hasDeclaredDefault(hkClass *this, int a2);
// [0x154b210] (110 bytes) hkClass::getDefault(int)const
// const hkClassMember *hkClass::getDefault(hkClass *this, const void **a2);
// [0x154b280] (150 bytes) hkClass::getDefault(int,hkStreamWriter *)const
// hkClass *hkClass::getDefault(hkClass *this, hkClass *a2, const void **a3, int a4);
// [0x154b320] (155 bytes) hkClass::getDeclaredDefault(int,hkStreamWriter *)const
// hkClass *hkClass::getDeclaredDefault(hkClass *this, int a2, hkStreamWriter *a3, int a4);
// [0x154b3c0] (308 bytes) hkClass::getDefault(int,hkTypedUnion &)const
// hkClass *hkClass::getDefault(hkClass *a1, hkClass *a2, const void **a3, uint32_t *a4);
// [0x154b500] (67 bytes) hkClass::getDeclaredDefault(int)const
// char *hkClass::getDeclaredDefault(hkClass *this, int a2);
// [0x154b550] (304 bytes) hkClass::getDeclaredDefault(int,hkTypedUnion &)const
// uint32_t *hkClass::getDeclaredDefault(uint32_t *a1, int a2, int a3, uint32_t *a4);
// [0x154b680] (123 bytes) hkClass::getAttribute(char const*)const
// int hkClass::getAttribute(hkClass *this, char *a2);
// [0x154b700] (12 bytes) hkClass::getFlags(void)const
// char *hkClass::getFlags(hkClass *this);
// [0x154b710] (12 bytes) hkClass::getFlags(void)
// char *hkClass::getFlags(hkClass *this);
// [0x154b720] (684 bytes) hkClass::writeSignature(hkStreamWriter *)const
// void hkClass::writeSignature(hkClass *this, hkStreamWriter *a2);
// [0x154b9d0] (146 bytes) hkClass::getSignature(int)const
// int hkClass::getSignature(hkClass *this, char a2);
// [0x154ba70] (9 bytes) hkMemoryAllocator::getExtendedInterface(void)
// int hkMemoryAllocator::getExtendedInterface();
// [0x154ba80] (20 bytes) hkMallocAllocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// uint32_t *hkMallocAllocator::getMemoryStatistics(int a1, uint32_t *a2);
// [0x154baa0] (13 bytes) hkMallocAllocator::resetPeakMemoryStatistics(void)
// hkMallocAllocator *hkMallocAllocator::resetPeakMemoryStatistics(hkMallocAllocator *this);
// [0x154bab0] (11 bytes) hkMallocAllocator::getAllocatedSize(void const*,int)const
// int hkMallocAllocator::getAllocatedSize(hkMallocAllocator *this, const void *a2, int a3);
// [0x154bac0] (65 bytes) hkMallocAllocator::blockAlloc(int)
// void *hkMallocAllocator::blockAlloc(hkMallocAllocator *this, size_t size);
// [0x154bb10] (48 bytes) hkMallocAllocator::blockFree(void *,int)
// void hkMallocAllocator::blockFree(hkMallocAllocator *this, void *ptr, int a3);
// [0x154bbe0] (24 bytes) hkSetOutOfMemoryState(hkMemoryAllocator::MemoryState)
// uint32_t *hkSetOutOfMemoryState(int a1);
// [0x154bc00] (19 bytes) hkMemoryExceptionTestingUtil::hkMemoryExceptionTestingUtil(void)
// void hkMemoryExceptionTestingUtil::hkMemoryExceptionTestingUtil(hkMemoryExceptionTestingUtil *this);
// [0x154bc20] (9 bytes) hkMemoryExceptionTestingUtil::~hkMemoryExceptionTestingUtil()
// void hkMemoryExceptionTestingUtil::~hkMemoryExceptionTestingUtil();
// [0x154bc30] (144 bytes) hkMemoryExceptionTestingUtil::create(void)
// void hkMemoryExceptionTestingUtil::create();
// [0x154bcc0] (91 bytes) hkMemoryExceptionTestingUtil::destroy(void)
// void hkMemoryExceptionTestingUtil::destroy();
// [0x154bd20] (22 bytes) hkMemoryExceptionTestingUtil::getInstance(void)
// int hkMemoryExceptionTestingUtil::getInstance();
// [0x154bd40] (109 bytes) hkMemoryExceptionTestingUtil::startNewDemoImpl(void)
// int hkMemoryExceptionTestingUtil::startNewDemoImpl(hkMemoryExceptionTestingUtil *this);
// [0x154bdb0] (14 bytes) hkMemoryExceptionTestingUtil::startFrameImpl(void)
// hkMemoryExceptionTestingUtil *hkMemoryExceptionTestingUtil::startFrameImpl(hkMemoryExceptionTestingUtil *this);
// [0x154bdc0] (9 bytes) hkMemoryExceptionTestingUtil::endFrameImpl(void)
// void hkMemoryExceptionTestingUtil::endFrameImpl();
// [0x154bdd0] (14 bytes) hkMemoryExceptionTestingUtil::allowMemoryExceptionsImpl(bool)
// int hkMemoryExceptionTestingUtil::allowMemoryExceptionsImpl(hkMemoryExceptionTestingUtil *this, int a2);
// [0x154bde0] (101 bytes) hkMemoryExceptionTestingUtil::isMemoryAvailableImpl(int)
// int hkMemoryExceptionTestingUtil::isMemoryAvailableImpl(hkMemoryExceptionTestingUtil *this, int a2);
// [0x154be50] (29 bytes) hkReferencedObject::~hkReferencedObject()
// void hkReferencedObject::~hkReferencedObject(hkReferencedObject *this);
// [0x154be90] (9 bytes) hkReferencedObject::getClassType(void)const
// int hkReferencedObject::getClassType();
// [0x154bea0] (25 bytes) hkReferencedObject::deleteThisReferencedObject(void)const
// hkReferencedObject *hkReferencedObject::deleteThisReferencedObject(hkReferencedObject *this);
// [0x154bec0] (96 bytes) hkReferencedObject::~hkReferencedObject()
// void hkReferencedObject::~hkReferencedObject(hkReferencedObject *this);
// [0x154bf20] (122 bytes) hkReferencedObjectLock::~hkReferencedObjectLock()
// void hkReferencedObjectLock::~hkReferencedObjectLock(hkReferencedObjectLock *this);
// [0x154bfa0] (179 bytes) hkReferencedObjectLock::~hkReferencedObjectLock()
// void hkReferencedObjectLock::~hkReferencedObjectLock(hkReferencedObjectLock *this);
// [0x154c060] (554 bytes) hkReferencedObject::initializeLock(void)
// int hkReferencedObject::initializeLock();
// [0x154c290] (111 bytes) hkReferencedObject::deinitializeLock(void)
// int hkReferencedObject::deinitializeLock();
// [0x154c300] (27 bytes) hkReferencedObject::setLockMode(hkReferencedObject::LockMode)
// int hkReferencedObject::setLockMode(int a1);
// [0x154c320] (585 bytes) hkReferencedObject::lockInit(hkReferencedObject::LockMode)
// uint32_t *hkReferencedObject::lockInit(int a1);
// [0x154c570] (23 bytes) hkReferencedObject::getLockMode(void)
// int hkReferencedObject::getLockMode();
// [0x154c590] (205 bytes) hkReferencedObject::lockAll(void)
// int hkReferencedObject::lockAll();
// [0x154c660] (143 bytes) hkReferencedObject::unlockAll(void)
// int hkReferencedObject::unlockAll();
// [0x154c700] (97 bytes) hkReferencedObject::addReferences(hkReferencedObject const* const*,int,int)
// const hkReferencedObject *const *hkReferencedObject::addReferences( hkReferencedObject *this, const hkReferencedObject *const *a2, int a3);
// [0x154c770] (112 bytes) hkReferencedObject::removeReferences(hkReferencedObject const* const*,int,int)
// int hkReferencedObject::removeReferences(hkReferencedObject *this, const hkReferencedObject *const *a2, int a3);
// [0x154c7e0] (23 bytes) hkReferencedObject::getLockCriticalSection(void)
// int hkReferencedObject::getLockCriticalSection();
// [0x154c880] (481 bytes) hkMultiThreadCheck::staticInit(hkMemoryAllocator *)
// hkMultiThreadCheck *hkMultiThreadCheck::staticInit(hkMultiThreadCheck *this);
// [0x154ca70] (185 bytes) hkMultiThreadCheck::staticQuit(void)
// void hkMultiThreadCheck::staticQuit();
// [0x154cc10] (314 bytes) hkMultiThreadCheck::markForReadImpl(hkMultiThreadCheck::ReadMode)
// void hkMultiThreadCheck::markForReadImpl(int *a1, int a2);
// [0x154cd50] (280 bytes) hkMultiThreadCheck::markForWriteImpl(void)
// void hkMultiThreadCheck::markForWriteImpl(hkMultiThreadCheck *this);
// [0x154ce70] (241 bytes) hkMultiThreadCheck::isMarkedForWriteImpl(void)
// int hkMultiThreadCheck::isMarkedForWriteImpl(hkMultiThreadCheck *this);
// [0x154cf70] (273 bytes) hkMultiThreadCheck::unmarkForReadImpl(void)
// void hkMultiThreadCheck::unmarkForReadImpl(hkMultiThreadCheck *this);
// [0x154d090] (273 bytes) hkMultiThreadCheck::unmarkForWriteImpl(void)
// void hkMultiThreadCheck::unmarkForWriteImpl(hkMultiThreadCheck *this);
// [0x154d1b0] (9 bytes) hkMultiThreadCheck::accessCheck(hkMultiThreadCheck::AccessType)const
// void hkMultiThreadCheck::accessCheck();
// [0x154d1c0] (189 bytes) hkMultiThreadCheck::accessCheckWithParent(hkMultiThreadCheck const*,hkMultiThreadCheck::AccessType,hkMultiThreadCheck const&,hkMultiThreadCheck::AccessType)
// void hkMultiThreadCheck::accessCheckWithParent(int16_t *a1, int a2, int a3, int a4);
// [0x154d280] (15 bytes) hkMultiThreadCheck::disableChecks(void)
// hkMultiThreadCheck *hkMultiThreadCheck::disableChecks(hkMultiThreadCheck *this);
// [0x154d290] (53 bytes) hkMultiThreadCheck::enableChecks(void)
// hkMultiThreadCheck *hkMultiThreadCheck::enableChecks(hkMultiThreadCheck *this);
// [0x154d2d0] (15 bytes) hkMultiThreadCheck::reenableChecks(void)
// hkMultiThreadCheck *hkMultiThreadCheck::reenableChecks(hkMultiThreadCheck *this);
// [0x154d2e0] (9 bytes) hkMultiThreadCheck::globalCriticalSectionLock(void)
// void hkMultiThreadCheck::globalCriticalSectionLock();
// [0x154d2f0] (9 bytes) hkMultiThreadCheck::globalCriticalSectionUnlock(void)
// void hkMultiThreadCheck::globalCriticalSectionUnlock();
// [0x154d350] (50 bytes) hkMemUtil::memCpy(void *,void const*,int)
// void *hkMemUtil::memCpy(hkMemUtil *this, void *src, size_t n);
// [0x154d390] (50 bytes) hkMemUtil::memSet(void *,int,int)
// void *hkMemUtil::memSet(hkMemUtil *this, void *c, size_t n);
// [0x154d3d0] (253 bytes) hkMemUtil::memCpyBackwards(void *,void const*,int)
// unsigned int hkMemUtil::memCpyBackwards(hkMemUtil *this, char *a2, unsigned int a3);
// [0x154d4d0] (98 bytes) hkMemUtil::memMove(void *,void const*,int)
// hkMemUtil *hkMemUtil::memMove(hkMemUtil *this, char *src, size_t n);
// [0x154d540] (57 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator new();
// [0x154d580] (71 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator delete(void *a1);
// [0x154d5d0] (11 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator new( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x154d5e0] (11 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator new[]( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x154d5f0] (9 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator delete();
// [0x154d600] (9 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator delete[]();
// [0x154d610] (90 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::hkCachedHashMap(hkStringMapOperations)
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::hkCachedHashMap(hkString **a1);
// [0x154d670] (62 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::~hkCachedHashMap()
// void hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::~hkCachedHashMap( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this);
// [0x154d6b0] (49 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getIterator(void)const
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getIterator( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this);
// [0x154d6f0] (20 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getKey(Dummy *)const
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getKey(uint32_t *a1, int a2);
// [0x154d710] (20 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getValue(Dummy *)const
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getValue(uint32_t *a1, int a2);
// [0x154d730] (24 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::setValue(Dummy *,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::setValue(uint32_t *a1, int a2, int a3);
// [0x154d750] (67 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getNext(Dummy *)const
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getNext(uint32_t *a1, int a2);
// [0x154d7a0] (21 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::isValid(Dummy *)const
// bool *hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::isValid( bool *a1, int a2, int a3);
// [0x154d7c0] (210 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::findKey(unsigned long)const
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::findKey( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, hkString *a2);
// [0x154d8a0] (73 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::hasKey(unsigned long)const
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::hasKey( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2, hkString *a3);
// [0x154d8f0] (134 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::get(unsigned long,unsigned long *)const
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::get( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2, hkString *a3, int *a4);
// [0x154d980] (85 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getWithDefault(unsigned long,unsigned long)const
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getWithDefault( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, hkString *a2, int a3);
// [0x154d9e0] (272 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::remove(Dummy *)
// unsigned int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::remove(int *a1, unsigned int a2);
// [0x154daf0] (129 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::remove(unsigned long)
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::remove( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2, hkString *a3);
// [0x154db80] (12 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getSize(void)const
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getSize( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this);
// [0x154db90] (162 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::isOk(void)const
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::isOk( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, int *a2);
// [0x154dc40] (134 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator=(hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator> const*)
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator=( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, const hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2);
// [0x154dcd0] (45 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::clear(void)
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::clear( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this);
// [0x154dd00] (47 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::swap(hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>&)
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::swap( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2);
// [0x154dd30] (13 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getCapacity(void)const
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getCapacity( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this);
// [0x154dd40] (216 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::resizeTable(int)
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::resizeTable( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, int a2);
// [0x154de20] (315 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::insert(unsigned long,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::insert( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, hkString *a2, unsigned int a3);
// [0x154df60] (124 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getOrInsert(unsigned long,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getOrInsert( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, hkString *a2, unsigned int a3);
// [0x154dfe0] (91 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::merge(hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator> const&)
// void hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::merge( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, const hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2);
// [0x154e040] (263 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::findOrInsertKey(unsigned long,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::findOrInsertKey( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, hkString *a2, unsigned int a3);
// [0x154e150] (82 bytes) hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::reserve(int)
// int hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::reserve( hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *this, int a2);
// [0x154e1b0] (9 bytes) hkMemorySystem::advanceFrame(void)
// void hkMemorySystem::advanceFrame();
// [0x154e1c0] (9 bytes) hkMemorySystem::getDebugInterface(void)
// int hkMemorySystem::getDebugInterface();
// [0x154e1d0] (13 bytes) hkMemorySystem::getMemorySnapshot(hkMemorySnapshot &)const
// hkMemorySystem *hkMemorySystem::getMemorySnapshot(hkMemorySystem *this, hkMemorySnapshot *a2);
// [0x154e1e0] (13 bytes) hkMemorySystem::getAllocationCallStack(void const*,unsigned long *,int &,unsigned int &)
// hkMemorySystem *hkMemorySystem::getAllocationCallStack( hkMemorySystem *this, const void *a2, unsigned int *a3, int *a4, unsigned int *a5);
// [0x154e1f0] (9 bytes) hkMemorySystem::setHeapScrubValues(unsigned int,unsigned int)
// void hkMemorySystem::setHeapScrubValues();
// [0x154e200] (12 bytes) hkMemorySystem::isOk(void)const
// int hkMemorySystem::isOk();
// [0x154e210] (29 bytes) hkMemorySystem::~hkMemorySystem()
// void hkMemorySystem::~hkMemorySystem(hkMemorySystem *this);
// [0x154e230] (34 bytes) hkMemorySystem::~hkMemorySystem()
// void hkMemorySystem::~hkMemorySystem(hkMemorySystem *this);
// [0x154e260] (9 bytes) hkMemorySystem::garbageCollectThread(hkMemoryRouter &)
// void hkMemorySystem::garbageCollectThread();
// [0x154e270] (9 bytes) hkMemorySystem::garbageCollectShared(void)
// void hkMemorySystem::garbageCollectShared();
// [0x154e280] (13 bytes) hkMemorySystem::setHeapSoftLimit(int)
// hkMemorySystem *hkMemorySystem::setHeapSoftLimit(hkMemorySystem *this, int a2);
// [0x154e290] (12 bytes) hkMemorySystem::getHeapSoftLimit(void)const
// int hkMemorySystem::getHeapSoftLimit();
// [0x154e2a0] (12 bytes) hkMemorySystem::solverCanAllocSingleBlock(int)
// int hkMemorySystem::solverCanAllocSingleBlock();
// [0x154e2b0] (12 bytes) hkMemorySystem::heapCanAllocTotal(int)
// int hkMemorySystem::heapCanAllocTotal();
// [0x154e2c0] (64 bytes) hkMemorySystem::garbageCollect(void)
// int hkMemorySystem::garbageCollect(hkMemorySystem *this);
// [0x154e300] (13 bytes) hkMemorySystem::FrameInfo::FrameInfo(int)
// struct hkMemorySystem::FrameInfo *hkMemorySystem::FrameInfo::FrameInfo(hkMemorySystem::FrameInfo *this, int a2);
// [0x154e310] (24 bytes) hkMemorySystem::replaceInstance(hkMemorySystem*)
// uint32_t *hkMemorySystem::replaceInstance(hkMemorySystem *this);
// [0x154e330] (22 bytes) hkMemorySystem::getInstance(void)
// int hkMemorySystem::getInstance();
// [0x154e350] (22 bytes) hkMemorySystem::getInstancePtr(void)
// int hkMemorySystem::getInstancePtr();
// [0x154e380] (22 bytes) hkClassMember::staticClass(void)
// void *hkClassMember::staticClass();
// [0x154e480] (26 bytes) hkClassMember::getClassMemberTypeProperties(hkClassMember::Type)
// char *hkClassMember::getClassMemberTypeProperties(int a1);
// [0x154e4a0] (18 bytes) hkClassMember::isNotOwner(void)const
// hkClassMember *hkClassMember::isNotOwner(hkClassMember *this, int a2);
// [0x154e4c0] (222 bytes) hkClassMember::getAlignment(void)const
// int hkClassMember::getAlignment(hkClass **this);
// [0x154e5a0] (13 bytes) hkClassMember::getArrayType(void)const
// int hkClassMember::getArrayType(hkClassMember *this);
// [0x154e5b0] (890 bytes) hkClassMember::getTypeName(char *,int)const
// int hkClassMember::getTypeName(hkClassMember *this, hkString *a2, size_t a3);
// [0x154e930] (12 bytes) hkClassMember::getStructClass(void)const
// int hkClassMember::getStructClass(hkClassMember *this);
// [0x154e940] (127 bytes) hkClassMember::getArrayMemberSize(void)const
// int hkClassMember::getArrayMemberSize(hkClassMember *this);
// [0x154e9c0] (12 bytes) hkClassMember::getClass(void)const
// int hkClassMember::getClass(hkClassMember *this);
// [0x154e9d0] (12 bytes) hkClassMember::getEnumClass(void)const
// int hkClassMember::getEnumClass(hkClassMember *this);
// [0x154e9e0] (13 bytes) hkClassMember::getCstyleArraySize(void)const
// int hkClassMember::getCstyleArraySize(hkClassMember *this);
// [0x154e9f0] (247 bytes) hkClassMember::getSizeInBytes(void)const
// int hkClassMember::getSizeInBytes(hkClassMember *this);
// [0x154eaf0] (12 bytes) hkClassMember::getEnumType(void)const
// int hkClassMember::getEnumType(hkClassMember *this);
// [0x154eb00] (54 bytes) hkClassMember::getEnumValue(void const*)const
// int hkClassMember::getEnumValue(hkClassMember *this, const void *a2);
// [0x154eb40] (69 bytes) hkClassMember::setEnumValue(void *,int)const
// int hkClassMember::setEnumValue(hkClassMember *this, void *a2, int a3);
// [0x154eb90] (123 bytes) hkClassMember::getAttribute(char const*)const
// int hkClassMember::getAttribute(hkClassMember *this, char *a2);
// [0x154ec10] (487 bytes) hkClassMember::getTypeOf(char const*)
// int hkClassMember::getTypeOf(hkClassMember *this);
// [0x154ee00] (357 bytes) hkClassMember::getSubtypeOf(char const*)
// int hkClassMember::getSubtypeOf(hkClassMember *this);
// [0x154f4c0] (22 bytes) hkContactPointMaterial::staticClass(void)
// void *hkContactPointMaterial::staticClass();
// [0x154f5b0] (22 bytes) hkOstream::getClassType(void)const
// void *hkOstream::getClassType();
// [0x154f5d0] (122 bytes) hkOstream::~hkOstream()
// void hkOstream::~hkOstream(hkOstream *this);
// [0x154f650] (93 bytes) hkOstream::~hkOstream()
// void hkOstream::~hkOstream(hkOstream *this);
// [0x154f6b0] (99 bytes) hkOstream::hkOstream(hkStreamWriter *)
// void hkOstream::hkOstream(hkOstream *this, hkStreamWriter *a2);
// [0x154f720] (187 bytes) hkOstream::hkOstream(char const*)
// void hkOstream::hkOstream(hkOstream *this, const char *a2);
// [0x154f7e0] (212 bytes) hkOstream::hkOstream(void *,int,hkBool)
// int hkOstream::hkOstream(uint32_t *a1, hkString *a2, size_t a3, char a4);
// [0x154f8c0] (310 bytes) hkOstream::hkOstream(hkArray<char,hkContainerHeapAllocator> &)
// 0x154f8c0 hkOstream::hkOstream(hkArray<char,hkContainerHeapAllocator> &)
// [0x154fa00] (212 bytes) hkOstream::hkOstream(hkMemoryTrack *)
// void hkOstream::hkOstream(hkOstream *this, hkMemoryTrack *a2);
// [0x154fae0] (74 bytes) hkOstream::isOk(void)const
// hkOstream *hkOstream::isOk(hkOstream *this, int a2);
// [0x154fb30] (119 bytes) hkOstream::operator<<(void const*)
// int hkOstream::operator<<(int a1, char *a2);
// [0x154fbb0] (86 bytes) hkOstream::operator<<(hkBool)
// int hkOstream::operator<<(int a1, char a2);
// [0x154fc10] (52 bytes) hkOstream::operator<<(char)
// int hkOstream::operator<<(int a1, char a2);
// [0x154fc50] (117 bytes) hkOstream::operator<<(char const*)
// int hkOstream::operator<<(int a1, hkString *a2);
// [0x154fcd0] (120 bytes) hkOstream::operator<<(short)
// int hkOstream::operator<<(int a1, int16_t a2);
// [0x154fd50] (120 bytes) hkOstream::operator<<(unsigned short)
// int hkOstream::operator<<(int a1, uint16_t a2);
// [0x154fdd0] (119 bytes) hkOstream::operator<<(int)
// int hkOstream::operator<<(int a1, char *a2);
// [0x154fe50] (119 bytes) hkOstream::operator<<(unsigned int)
// int hkOstream::operator<<(int a1, char *a2);
// [0x154fed0] (125 bytes) hkOstream::operator<<(hkSimdFloat32 const&)
// int hkOstream::operator<<(int a1, float *a2);
// [0x154ff50] (125 bytes) hkOstream::operator<<(hkSimdDouble64 const&)
// int hkOstream::operator<<(int a1, const char **a2);
// [0x154ffd0] (123 bytes) hkOstream::operator<<(float)
// int hkOstream::operator<<(int a1, float a2);
// [0x1550050] (130 bytes) hkOstream::operator<<(long long)
// int hkOstream::operator<<(int a1, char *a2);
// [0x15500e0] (130 bytes) hkOstream::operator<<(unsigned long long)
// int hkOstream::operator<<(int a1, char *a2);
// [0x1550170] (112 bytes) hkOstream::printf(char const*,...)
// int hkOstream::printf(hkOstream *this, char *a2, ...);
// [0x15501e0] (95 bytes) hkOstream::operator<<(hkVector4f const&)
// hkOstream *hkOstream::operator<<(hkOstream *a1, float *a2);
// [0x1550240] (95 bytes) hkOstream::operator<<(hkVector4d const&)
// hkOstream *hkOstream::operator<<(hkOstream *a1, double *a2);
// [0x15502a0] (95 bytes) hkOstream::operator<<(hkQuaternionf const&)
// hkOstream *hkOstream::operator<<(hkOstream *a1, float *a2);
// [0x1550300] (95 bytes) hkOstream::operator<<(hkQuaterniond const&)
// hkOstream *hkOstream::operator<<(hkOstream *a1, double *a2);
// [0x1550360] (136 bytes) hkOstream::operator<<(hkMatrix3f const&)
// hkOstream *hkOstream::operator<<(hkOstream *a1, int a2);
// [0x15503f0] (59 bytes) hkOstream::operator<<(hkTransformf const&)
// hkOstream *hkOstream::operator<<(hkOstream *a1, int a2);
// [0x1550430] (134 bytes) hkOstream::operator<<(hkMatrix3d const&)
// hkOstream *hkOstream::operator<<(hkOstream *a1, int a2);
// [0x15504c0] (59 bytes) hkOstream::operator<<(hkTransformd const&)
// hkOstream *hkOstream::operator<<(hkOstream *a1, int a2);
// [0x1550500] (130 bytes) hkOstream::operator<<(hkStringPtr const&)
// int hkOstream::operator<<(int a1, hkStringPtr *a2);
// [0x1550590] (111 bytes) hkOstream::operator<<(hkStringBuf const&)
// int hkOstream::operator<<(int a1, uint32_t *a2);
// [0x1550600] (24 bytes) hkOstream::flush(void)
// int hkOstream::flush(hkOstream *this);
// [0x1550620] (40 bytes) hkOstream::write(char const*,int)
// int hkOstream::write(hkOstream *this, const char *a2, int a3);
// [0x1550650] (147 bytes) hkOstream::setStreamWriter(hkStreamWriter *)
// int hkOstream::setStreamWriter(hkOstream *this, hkStreamWriter *a2);
// [0x15507a0] (22 bytes) hkCustomAttributes::Attribute::staticClass(void)
// void *hkCustomAttributes::Attribute::staticClass();
// [0x15507c0] (22 bytes) hkCustomAttributes::staticClass(void)
// void *hkCustomAttributes::staticClass();
// [0x1550970] (22 bytes) hkQTransformf::staticClass(void)
// void *hkQTransformf::staticClass();
// [0x1550a60] (9 bytes) hkMemoryAllocator::resetPeakMemoryStatistics(void)
// void hkMemoryAllocator::resetPeakMemoryStatistics();
// [0x1550a70] (29 bytes) hkMemoryAllocator::~hkMemoryAllocator()
// void hkMemoryAllocator::~hkMemoryAllocator(hkMemoryAllocator *this);
// [0x1550a90] (34 bytes) hkMemoryAllocator::~hkMemoryAllocator()
// void hkMemoryAllocator::~hkMemoryAllocator(hkMemoryAllocator *this);
// [0x1550ac0] (31 bytes) hkMemoryAllocator::bufAlloc(int &)
// int hkMemoryAllocator::bufAlloc(hkMemoryAllocator *this, int *a2);
// [0x1550ae0] (37 bytes) hkMemoryAllocator::bufFree(void *,int)
// int hkMemoryAllocator::bufFree(hkMemoryAllocator *this, void *a2, int a3);
// [0x1550b10] (69 bytes) hkMemoryAllocator::blockAllocBatch(void **,int,int)
// void *hkMemoryAllocator::blockAllocBatch(hkMemoryAllocator *this, void **a2, void *a3, int a4);
// [0x1550b60] (77 bytes) hkMemoryAllocator::blockFreeBatch(void **,int,int)
// void hkMemoryAllocator::blockFreeBatch(hkMemoryAllocator *this, void **a2, int a3, int a4);
// [0x1550bb0] (111 bytes) hkMemoryAllocator::bufRealloc(void *,int,int &)
// hkMemUtil *hkMemoryAllocator::bufRealloc(hkMemoryAllocator *this, void *a2, signed int a3, int *a4);
// [0x1550c30] (22 bytes) hkBufferedStreamWriter::getClassType(void)const
// void *hkBufferedStreamWriter::getClassType();
// [0x1550c50] (55 bytes) hkBufferedStreamWriter::seekTellSupported(void)const
// hkBufferedStreamWriter *hkBufferedStreamWriter::seekTellSupported(hkBufferedStreamWriter *this, int a2);
// [0x1550c90] (55 bytes) hkBufferedStreamWriter::tell(void)const
// int hkBufferedStreamWriter::tell(hkBufferedStreamWriter *this);
// [0x1550cd0] (10 bytes) hkBufferedStreamWriter::isBuffered(void)const
// hkBufferedStreamWriter *hkBufferedStreamWriter::isBuffered(hkBufferedStreamWriter *this);
// [0x1550ce0] (61 bytes) hkBufferedStreamWriter::isOk(void)const
// hkBufferedStreamWriter *hkBufferedStreamWriter::isOk(hkBufferedStreamWriter *this, uint32_t *a2);
// [0x1550d20] (164 bytes) hkBufferedStreamWriter::hkBufferedStreamWriter(hkStreamWriter *,int)
// void hkBufferedStreamWriter::hkBufferedStreamWriter( hkBufferedStreamWriter *this, hkStreamWriter *a2, hkMemoryAllocator *a3);
// [0x1550dd0] (126 bytes) hkBufferedStreamWriter::hkBufferedStreamWriter(void *,int,hkBool)
// int hkBufferedStreamWriter::hkBufferedStreamWriter(int a1, hkString *a2, size_t a3, char a4);
// [0x1550e50] (114 bytes) hkBufferedStreamWriter::flushBuffer(void)
// int hkBufferedStreamWriter::flushBuffer(hkBufferedStreamWriter *this);
// [0x1550ed0] (171 bytes) hkBufferedStreamWriter::write(void const*,int)
// signed int hkBufferedStreamWriter::write(hkBufferedStreamWriter *this, char *a2, signed int a3);
// [0x1550f80] (51 bytes) hkBufferedStreamWriter::flush(void)
// int hkBufferedStreamWriter::flush(hkBufferedStreamWriter *this);
// [0x1550fc0] (162 bytes) hkBufferedStreamWriter::~hkBufferedStreamWriter()
// void hkBufferedStreamWriter::~hkBufferedStreamWriter(hkMemoryAllocator **this);
// [0x1551070] (93 bytes) hkBufferedStreamWriter::~hkBufferedStreamWriter()
// void hkBufferedStreamWriter::~hkBufferedStreamWriter(hkMemoryAllocator **this);
// [0x15510d0] (192 bytes) hkBufferedStreamWriter::seek(int,hkStreamWriter::SeekWhence)
// int *hkBufferedStreamWriter::seek(int *a1, hkBufferedStreamWriter *a2, int a3, int a4);
// [0x1551230] (22 bytes) hkTraceStream::Title::staticClass(void)
// void *hkTraceStream::Title::staticClass();
// [0x1551320] (196 bytes) hkSingletonInitNode::populate(hkSingletonInitNode*,hkSingletonInitNode const*)
// void hkSingletonInitNode::populate(hkSingletonInitNode *this, hkSingletonInitNode *a2);
// [0x15513f0] (222 bytes) hkSingletonInitNode::depopulate(hkSingletonInitNode*,hkSingletonInitNode const*)
// void hkSingletonInitNode::depopulate(hkSingletonInitNode *this, hkSingletonInitNode *a2);
// [0x15514d0] (73 bytes) hkSingletonInitNode::findByName(char const*)
// hkSingletonInitNode *hkSingletonInitNode::findByName(hkSingletonInitNode *this, hkString *a2);
// [0x1551520] (9 bytes) hkDummySingleton::forceLinkage(void)
// void hkDummySingleton::forceLinkage();
// [0x1551530] (29 bytes) hkDummySingleton::~hkDummySingleton()
// void hkDummySingleton::~hkDummySingleton(hkDummySingleton *this);
// [0x1551550] (96 bytes) hkDummySingleton::~hkDummySingleton()
// void hkDummySingleton::~hkDummySingleton(hkDummySingleton *this);
// [0x1551600] (407 bytes) hkBaseSystem::initSingletons(void)
// int hkBaseSystem::initSingletons();
// [0x15517a0] (359 bytes) hkBaseSystem::quitSingletons(void)
// int hkBaseSystem::quitSingletons();
// [0x1551910] (55 bytes) hkBaseSystem::initThread(hkMemoryRouter *)
// hkBaseSystem *hkBaseSystem::initThread(hkBaseSystem *this, hkMemoryRouter *a2);
// [0x1551950] (394 bytes) hkBaseSystem::init(hkMemoryRouter *,void (*)(char const*,void *),void *)
// hkBaseSystem *hkBaseSystem::init( hkBaseSystem *this, hkMemoryRouter *a2, void (*a3)(const char *, void *), void *a4);
// [0x1551ae0] (98 bytes) hkBaseSystem::quitThread(void)
// hkBaseSystem *hkBaseSystem::quitThread(hkBaseSystem *this);
// [0x1551b50] (302 bytes) hkBaseSystem::quit(void)
// hkBaseSystem *hkBaseSystem::quit(hkBaseSystem *this);
// [0x1551c80] (29 bytes) hkBaseSystem::isInitialized(void)
// hkBaseSystem *hkBaseSystem::isInitialized(hkBaseSystem *this);
// [0x1551f90] (22 bytes) hkBitField::staticClass(void)
// void *hkBitField::staticClass();
// [0x1551fb0] (22 bytes) hkOffsetBitField::staticClass(void)
// void *hkOffsetBitField::staticClass();
// [0x15523f0] (22 bytes) hkColor::staticClass(void)
// void *hkColor::staticClass();
// [0x15524d0] (122 bytes) hkOArchive::~hkOArchive()
// void hkOArchive::~hkOArchive(hkOArchive *this);
// [0x1552550] (93 bytes) hkOArchive::~hkOArchive()
// void hkOArchive::~hkOArchive(hkOArchive *this);
// [0x15525b0] (115 bytes) hkOArchive::hkOArchive(hkStreamWriter *,hkBool)
// int hkOArchive::hkOArchive(int a1, int a2, uint8_t a3);
// [0x1552630] (195 bytes) hkOArchive::hkOArchive(char const*,hkBool)
// int hkOArchive::hkOArchive(int a1, int a2, char a3);
// [0x1552700] (219 bytes) hkOArchive::hkOArchive(void *,int,hkBool)
// int hkOArchive::hkOArchive(int a1, hkString *a2, size_t a3, char a4);
// [0x15527e0] (318 bytes) hkOArchive::hkOArchive(hkArray<char,hkContainerHeapAllocator> &,hkBool)
// 0x15527e0 hkOArchive::hkOArchive(hkArray<char,hkContainerHeapAllocator> &,hkBool)
// [0x1552920] (48 bytes) hkOArchive::write8(signed char)
// int hkOArchive::write8(hkOArchive *this, char a2);
// [0x1552950] (48 bytes) hkOArchive::write8u(unsigned char)
// int hkOArchive::write8u(hkOArchive *this, uint8_t a2);
// [0x1552980] (2898 bytes) hkOArchive::writeArrayGeneric(void const*,int,int)
// uint8_t *hkOArchive::writeArrayGeneric(hkOArchive *this, char *a2, int a3, int a4);
// [0x15534e0] (67 bytes) hkOArchive::write16(short)
// uint8_t *hkOArchive::write16(hkOArchive *this, int16_t a2);
// [0x1553530] (67 bytes) hkOArchive::write16u(unsigned short)
// uint8_t *hkOArchive::write16u(hkOArchive *this, uint16_t a2);
// [0x1553580] (58 bytes) hkOArchive::write32(int)
// uint8_t *hkOArchive::write32(hkOArchive *this, ...);
// [0x15535c0] (58 bytes) hkOArchive::write32u(unsigned int)
// uint8_t *hkOArchive::write32u(hkOArchive *this, ...);
// [0x1553600] (74 bytes) hkOArchive::write64(long long)
// uint8_t *hkOArchive::write64(hkOArchive *this, int64_t a2);
// [0x1553650] (74 bytes) hkOArchive::write64u(unsigned long long)
// uint8_t *hkOArchive::write64u(hkOArchive *this, uint64_t a2);
// [0x15536a0] (58 bytes) hkOArchive::writeFloat32(float)
// uint8_t *hkOArchive::writeFloat32(hkOArchive *this, float a2);
// [0x15536e0] (85 bytes) hkOArchive::writeArrayFloat32(double const*,int)
// uint8_t *hkOArchive::writeArrayFloat32(hkOArchive *this, const double *a2, uint8_t *a3);
// [0x1553740] (74 bytes) hkOArchive::writeDouble64(double)
// uint8_t *hkOArchive::writeDouble64(hkOArchive *this, double a2);
// [0x1553790] (58 bytes) hkOArchive::writeArray8(signed char const*,int)
// uint8_t *hkOArchive::writeArray8(hkOArchive *this, char *a2, int a3);
// [0x15537d0] (58 bytes) hkOArchive::writeArray8u(unsigned char const*,int)
// uint8_t *hkOArchive::writeArray8u(hkOArchive *this, char *a2, int a3);
// [0x1553810] (58 bytes) hkOArchive::writeArray16(short const*,int)
// uint8_t *hkOArchive::writeArray16(hkOArchive *this, char *a2, int a3);
// [0x1553850] (58 bytes) hkOArchive::writeArray16u(unsigned short const*,int)
// uint8_t *hkOArchive::writeArray16u(hkOArchive *this, char *a2, int a3);
// [0x1553890] (58 bytes) hkOArchive::writeArray32(int const*,int)
// uint8_t *hkOArchive::writeArray32(hkOArchive *this, char *a2, int a3);
// [0x15538d0] (58 bytes) hkOArchive::writeArray32u(unsigned int const*,int)
// uint8_t *hkOArchive::writeArray32u(hkOArchive *this, char *a2, int a3);
// [0x1553910] (58 bytes) hkOArchive::writeArray64(long long const*,int)
// uint8_t *hkOArchive::writeArray64(hkOArchive *this, char *a2, int a3);
// [0x1553950] (58 bytes) hkOArchive::writeArray64u(unsigned long long const*,int)
// uint8_t *hkOArchive::writeArray64u(hkOArchive *this, char *a2, int a3);
// [0x1553990] (58 bytes) hkOArchive::writeArrayFloat32(float const*,int)
// uint8_t *hkOArchive::writeArrayFloat32(hkOArchive *this, float *a2, int a3);
// [0x15539d0] (58 bytes) hkOArchive::writeArrayDouble64(double const*,int)
// uint8_t *hkOArchive::writeArrayDouble64(hkOArchive *this, double *a2, int a3);
// [0x1553a10] (40 bytes) hkOArchive::writeRaw(void const*,int)
// int hkOArchive::writeRaw(hkOArchive *this, const void *a2, int a3);
// [0x1553a40] (15 bytes) hkOArchive::setByteSwap(hkBool)
// int hkOArchive::setByteSwap(int a1, uint8_t a2);
// [0x1553a50] (17 bytes) hkOArchive::getByteSwap(void)const
// hkOArchive *hkOArchive::getByteSwap(hkOArchive *this, int a2);
// [0x1553a70] (41 bytes) hkOArchive::isOk(void)const
// hkOArchive *hkOArchive::isOk(hkOArchive *this, int a2);
// [0x1553aa0] (12 bytes) hkOArchive::getStreamWriter(void)
// int hkOArchive::getStreamWriter(hkOArchive *this);
// [0x1553ab0] (147 bytes) hkOArchive::setStreamWriter(hkStreamWriter *)
// int hkOArchive::setStreamWriter(hkOArchive *this, hkStreamWriter *a2);
// [0x1553b50] (45 bytes) hkContainerTempAllocator::Allocator::~Allocator()
// void hkContainerTempAllocator::Allocator::~Allocator(hkContainerTempAllocator::Allocator *this);
// [0x1553b80] (45 bytes) hkContainerHeapAllocator::Allocator::~Allocator()
// void hkContainerHeapAllocator::Allocator::~Allocator(hkContainerHeapAllocator::Allocator *this);
// [0x1553bb0] (45 bytes) hkContainerDebugAllocator::Allocator::~Allocator()
// void hkContainerDebugAllocator::Allocator::~Allocator(hkContainerDebugAllocator::Allocator *this);
// [0x1553be0] (86 bytes) hkContainerTempAllocator::Allocator::~Allocator()
// void hkContainerTempAllocator::Allocator::~Allocator(hkContainerTempAllocator::Allocator *this);
// [0x1553c40] (86 bytes) hkContainerDebugAllocator::Allocator::~Allocator()
// void hkContainerDebugAllocator::Allocator::~Allocator(hkContainerDebugAllocator::Allocator *this);
// [0x1553ca0] (86 bytes) hkContainerHeapAllocator::Allocator::~Allocator()
// void hkContainerHeapAllocator::Allocator::~Allocator(hkContainerHeapAllocator::Allocator *this);
// [0x1553d00] (65 bytes) hkContainerHeapAllocator::Allocator::getAllocatedSize(void const*,int)const
// int hkContainerHeapAllocator::Allocator::getAllocatedSize( hkContainerHeapAllocator::Allocator *this, const void *a2, int a3);
// [0x1553d50] (57 bytes) hkContainerHeapAllocator::Allocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkContainerHeapAllocator::Allocator::getMemoryStatistics(int a1, int a2);
// [0x1553d90] (73 bytes) hkContainerHeapAllocator::Allocator::bufRealloc(void *,int,int &)
// int hkContainerHeapAllocator::Allocator::bufRealloc( hkContainerHeapAllocator::Allocator *this, void *a2, int a3, int *a4);
// [0x1553de0] (65 bytes) hkContainerHeapAllocator::Allocator::bufFree(void *,int)
// int hkContainerHeapAllocator::Allocator::bufFree(hkContainerHeapAllocator::Allocator *this, void *a2, int a3);
// [0x1553e30] (57 bytes) hkContainerHeapAllocator::Allocator::bufAlloc(int &)
// int hkContainerHeapAllocator::Allocator::bufAlloc(hkContainerHeapAllocator::Allocator *this, int *a2);
// [0x1553e70] (65 bytes) hkContainerHeapAllocator::Allocator::blockFree(void *,int)
// int hkContainerHeapAllocator::Allocator::blockFree(hkContainerHeapAllocator::Allocator *this, void *a2, int a3);
// [0x1553ec0] (57 bytes) hkContainerHeapAllocator::Allocator::blockAlloc(int)
// int hkContainerHeapAllocator::Allocator::blockAlloc(hkContainerHeapAllocator::Allocator *this, int a2);
// [0x1553f00] (65 bytes) hkContainerDebugAllocator::Allocator::getAllocatedSize(void const*,int)const
// int hkContainerDebugAllocator::Allocator::getAllocatedSize( hkContainerDebugAllocator::Allocator *this, const void *a2, int a3);
// [0x1553f50] (57 bytes) hkContainerDebugAllocator::Allocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkContainerDebugAllocator::Allocator::getMemoryStatistics(int a1, int a2);
// [0x1553f90] (73 bytes) hkContainerDebugAllocator::Allocator::bufRealloc(void *,int,int &)
// int hkContainerDebugAllocator::Allocator::bufRealloc( hkContainerDebugAllocator::Allocator *this, void *a2, int a3, int *a4);
// [0x1553fe0] (65 bytes) hkContainerDebugAllocator::Allocator::bufFree(void *,int)
// int hkContainerDebugAllocator::Allocator::bufFree(hkContainerDebugAllocator::Allocator *this, void *a2, int a3);
// [0x1554030] (57 bytes) hkContainerDebugAllocator::Allocator::bufAlloc(int &)
// int hkContainerDebugAllocator::Allocator::bufAlloc(hkContainerDebugAllocator::Allocator *this, int *a2);
// [0x1554070] (65 bytes) hkContainerDebugAllocator::Allocator::blockFree(void *,int)
// int hkContainerDebugAllocator::Allocator::blockFree( hkContainerDebugAllocator::Allocator *this, void *a2, int a3);
// [0x15540c0] (57 bytes) hkContainerDebugAllocator::Allocator::blockAlloc(int)
// int hkContainerDebugAllocator::Allocator::blockAlloc(hkContainerDebugAllocator::Allocator *this, int a2);
// [0x1554100] (65 bytes) hkContainerTempAllocator::Allocator::getAllocatedSize(void const*,int)const
// int hkContainerTempAllocator::Allocator::getAllocatedSize( hkContainerTempAllocator::Allocator *this, const void *a2, int a3);
// [0x1554150] (57 bytes) hkContainerTempAllocator::Allocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkContainerTempAllocator::Allocator::getMemoryStatistics(int a1, int a2);
// [0x1554190] (73 bytes) hkContainerTempAllocator::Allocator::bufRealloc(void *,int,int &)
// int hkContainerTempAllocator::Allocator::bufRealloc( hkContainerTempAllocator::Allocator *this, void *a2, int a3, int *a4);
// [0x15541e0] (65 bytes) hkContainerTempAllocator::Allocator::bufFree(void *,int)
// int hkContainerTempAllocator::Allocator::bufFree(hkContainerTempAllocator::Allocator *this, void *a2, int a3);
// [0x1554230] (57 bytes) hkContainerTempAllocator::Allocator::bufAlloc(int &)
// int hkContainerTempAllocator::Allocator::bufAlloc(hkContainerTempAllocator::Allocator *this, int *a2);
// [0x1554270] (65 bytes) hkContainerTempAllocator::Allocator::blockFree(void *,int)
// int hkContainerTempAllocator::Allocator::blockFree(hkContainerTempAllocator::Allocator *this, void *a2, int a3);
// [0x15542c0] (57 bytes) hkContainerTempAllocator::Allocator::blockAlloc(int)
// int hkContainerTempAllocator::Allocator::blockAlloc(hkContainerTempAllocator::Allocator *this, int a2);
// [0x1554300] (22 bytes) hkContainerDefaultMallocAllocator::get(void const*)
// int hkContainerDefaultMallocAllocator::get();
// [0x15543c0] (9 bytes) hkError::setMinimumMessageLevel(hkError::Message)
// void hkError::setMinimumMessageLevel();
// [0x15543d0] (9 bytes) hkError::getMinimumMessageLevel(void)
// int hkError::getMinimumMessageLevel();
// [0x15543e0] (9 bytes) hkError::sectionBegin(int,char const*)
// void hkError::sectionBegin();
// [0x15543f0] (9 bytes) hkError::sectionEnd(void)
// void hkError::sectionEnd();
// [0x1554400] (29 bytes) hkError::~hkError()
// void hkError::~hkError(hkError *this);
// [0x1554420] (14 bytes) hkDefaultError::setMinimumMessageLevel(hkError::Message)
// int hkDefaultError::setMinimumMessageLevel(int a1, int a2);
// [0x1554430] (12 bytes) hkDefaultError::getMinimumMessageLevel(void)
// int hkDefaultError::getMinimumMessageLevel(hkDefaultError *this);
// [0x1554440] (328 bytes) hkDefaultError::message(hkError::Message,int,char const*,char const*,int)
// bool hkDefaultError::message(int *a1, int a2, int a3, int a4, int a5, int a6);
// [0x1554590] (13 bytes) hkDefaultError::sectionEnd(void)
// hkDefaultError *hkDefaultError::sectionEnd(hkDefaultError *this);
// [0x15545a0] (68 bytes) hkDefaultError::isEnabled(int)
// hkDefaultError *hkDefaultError::isEnabled(hkDefaultError *this, int a2, unsigned int a3);
// [0x15545f0] (44 bytes) hkDefaultError::enableAll(void)
// int hkDefaultError::enableAll(hkDefaultError *this);
// [0x1554620] (98 bytes) hkDefaultError::sectionBegin(int,char const*)
// int hkDefaultError::sectionBegin(hkDefaultError *this, int a2);
// [0x1554690] (133 bytes) hkDefaultError::~hkDefaultError()
// void hkDefaultError::~hkDefaultError(hkDefaultError *this);
// [0x1554720] (105 bytes) hkDefaultError::setEnabled(int,hkBool)
// int hkDefaultError::setEnabled(int a1, unsigned int a2, char a3);
// [0x1554790] (96 bytes) hkError::~hkError()
// void hkError::~hkError(hkError *this);
// [0x15547f0] (188 bytes) hkDefaultError::~hkDefaultError()
// void hkDefaultError::~hkDefaultError(hkDefaultError *this);
// [0x15548b0] (128 bytes) hkDefaultError::hkDefaultError(void (*)(char const*,void *),void *)
// void hkDefaultError::hkDefaultError(hkDefaultError *this, void (*a2)(const char *, void *), void *a3);
// [0x1554930] (429 bytes) hkDefaultError::showMessage(char const*,int,char const*,char const*,int,hkBool)
// 0x1554930 hkDefaultError::showMessage(char const*,int,char const*,char const*,int,hkBool)
// [0x1554ae0] (42 bytes) hkMemoryRouter::replaceInstance(hkMemoryRouter*)
// uint32_t *hkMemoryRouter::replaceInstance(hkMemoryRouter *this);
// [0x1554b10] (79 bytes) hkMemoryRouter::hkMemoryRouter(void)
// void hkMemoryRouter::hkMemoryRouter(hkMemoryRouter *this);
// [0x1554b60] (69 bytes) hkMemoryRouter::alignedAlloc(hkMemoryAllocator &,int,int)
// int hkMemoryRouter::alignedAlloc(hkMemoryRouter *this, hkMemoryAllocator *a2, int a3);
// [0x1554bb0] (55 bytes) hkMemoryRouter::alignedFree(hkMemoryAllocator &,void *)
// hkMemoryAllocator *hkMemoryRouter::alignedFree(hkMemoryRouter *this, hkMemoryAllocator *a2);
// [0x1554bf0] (46 bytes) hkMemoryRouter::easyAlloc(hkMemoryAllocator &,int)
// uint32_t *hkMemoryRouter::easyAlloc(hkMemoryRouter *this, hkMemoryAllocator *a2);
// [0x1554c20] (12 bytes) hkMemoryRouter::getEasyAllocSize(hkMemoryAllocator &,void const*)
// int hkMemoryRouter::getEasyAllocSize(hkMemoryRouter *this, hkMemoryAllocator *a2);
// [0x1554c30] (12 bytes) hkMemoryRouter::getEasyAllocStartAddress(hkMemoryAllocator &,void const*)
// char *hkMemoryRouter::getEasyAllocStartAddress(hkMemoryRouter *this, hkMemoryAllocator *a2);
// [0x1554c40] (55 bytes) hkMemoryRouter::easyFree(hkMemoryAllocator &,void *)
// hkMemoryAllocator *hkMemoryRouter::easyFree(hkMemoryRouter *this, hkMemoryAllocator *a2);
// [0x1554c80] (59 bytes) hkMemoryRouter::resetPeakMemoryStatistics(void)
// int hkMemoryRouter::resetPeakMemoryStatistics(hkMemoryRouter *this);
// [0x1554cc0] (298 bytes) hkRotationf::set(hkQuaternionf const&)
// hkRotationf *hkRotationf::set(hkRotationf *this, const hkQuaternionf *a2);
// [0x1554df0] (75 bytes) hkRotationf::setAxisAngle(hkVector4f const&,float)
// hkRotationf *hkRotationf::setAxisAngle(hkRotationf *this, const hkVector4f *a2, float a3);
// [0x1554e40] (71 bytes) hkRotationf::setAxisAngle(hkVector4f const&,hkSimdFloat32 const&)
// hkRotationf *hkRotationf::setAxisAngle(hkRotationf *a1, int a2, int a3);
// [0x1554e90] (391 bytes) hkRotationf::isOrthonormal(float)const
// bool hkRotationf::isOrthonormal(hkRotationf *this, float a2);
// [0x1555020] (62 bytes) hkRotationf::isOk(void)const
// int hkRotationf::isOk(hkRotationf *this);
// [0x1555060] (762 bytes) hkRotationf::renormalize(void)
// hkRotationf *hkRotationf::renormalize(hkRotationf *this);
// [0x1555370] (22 bytes) hkFourTransposedPointsf::staticClass(void)
// void *hkFourTransposedPointsf::staticClass();
// [0x1555460] (28 bytes) hkFreeListMemorySystem::garbageCollectShared(void)
// int hkFreeListMemorySystem::garbageCollectShared(hkFreeListMemorySystem *this);
// [0x1555480] (69 bytes) hkFreeListMemorySystem::setHeapSoftLimit(int)
// hkFreeListMemorySystem *hkFreeListMemorySystem::setHeapSoftLimit(hkFreeListMemorySystem *this, int a2);
// [0x15554d0] (30 bytes) hkFreeListMemorySystem::getHeapSoftLimit(void)const
// int hkFreeListMemorySystem::getHeapSoftLimit(hkFreeListMemorySystem *this);
// [0x15554f0] (41 bytes) hkFreeListMemorySystem::heapCanAllocTotal(int)
// int hkFreeListMemorySystem::heapCanAllocTotal(hkFreeListMemorySystem *this, int a2);
// [0x1555520] (12 bytes) hkFreeListMemorySystem::getUncachedLockedHeapAllocator(void)
// int hkFreeListMemorySystem::getUncachedLockedHeapAllocator(hkFreeListMemorySystem *this);
// [0x1555530] (44 bytes) hkFreeListMemorySystem::setHeapScrubValues(unsigned int,unsigned int)
// int hkFreeListMemorySystem::setHeapScrubValues(hkFreeListMemorySystem *this, unsigned int a2, unsigned int a3);
// [0x1555560] (164 bytes) hkFreeListMemorySystem::mainInit(hkMemorySystem::FrameInfo const&,hkFlags<hkMemorySystem::FlagBits,int>)
// int hkFreeListMemorySystem::mainInit(int a1, int *a2, int a3);
// [0x1555610] (186 bytes) hkFreeListMemorySystem::mainQuit(hkFlags<hkMemorySystem::FlagBits,int>)
// uint32_t *hkFreeListMemorySystem::mainQuit(uint32_t *a1, int a2, int a3);
// [0x15556d0] (160 bytes) hkFreeListMemorySystem::threadQuit(hkMemoryRouter &,hkFlags<hkMemorySystem::FlagBits,int>)
// char *hkFreeListMemorySystem::threadQuit(int a1, hkMemUtil *a2, char a3);
// [0x1555770] (45 bytes) hkFreeListMemorySystem::solverCanAllocSingleBlock(int)
// int hkFreeListMemorySystem::solverCanAllocSingleBlock(hkFreeListMemorySystem *this, int a2);
// [0x15557a0] (37 bytes) hkFreeListMemorySystem::garbageCollectThread(hkMemoryRouter &)
// hkFreeListMemorySystem *hkFreeListMemorySystem::garbageCollectThread( hkFreeListMemorySystem *this, hkMemoryRouter *a2);
// [0x15557d0] (1386 bytes) hkFreeListMemorySystem::printStatistics(hkOstream &)const
// int hkFreeListMemorySystem::printStatistics( hkFreeListMemorySystem *this, int64_t a2, pthread_mutex_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34);
// [0x1555d40] (523 bytes) hkFreeListMemorySystem::getMemorySnapshot(hkMemorySnapshot &)const
// hkFreeListMemorySystem *hkFreeListMemorySystem::getMemorySnapshot( hkFreeListMemorySystem *this, hkMemorySnapshot *a2, hkMemorySnapshot *a3);
// [0x1555f50] (563 bytes) hkFreeListMemorySystem::hkFreeListMemorySystem(hkMemoryAllocator *,hkMemoryAllocator *,hkMemoryAllocator::ExtendedInterface *,hkFreeListMemorySystem::SetupFlags)
// int hkFreeListMemorySystem::hkFreeListMemorySystem(uint32_t *a1, hkMemoryAllocator *a2, int a3, int a4, int a5);
// [0x1556190] (324 bytes) hkFreeListMemorySystem::~hkFreeListMemorySystem()
// void hkFreeListMemorySystem::~hkFreeListMemorySystem(hkFreeListMemorySystem *this);
// [0x15562e0] (34 bytes) hkFreeListMemorySystem::~hkFreeListMemorySystem()
// void hkFreeListMemorySystem::~hkFreeListMemorySystem(hkFreeListMemorySystem *this);
// [0x1556310] (715 bytes) hkFreeListMemorySystem::threadInit(hkMemoryRouter &,char const*,hkFlags<hkMemorySystem::FlagBits,int>)
// void hkFreeListMemorySystem::threadInit(int a1, hkLifoAllocator *a2, int a3, char a4);
// [0x15565e0] (754 bytes) hkFreeListMemorySystem::getMemoryStatistics(hkMemorySystem::MemoryStatistics &)
// int hkFreeListMemorySystem::getMemoryStatistics(int a1, hkMemoryAllocator *a2);
// [0x15569b0] (22 bytes) hkRefCountedProperties::Entry::staticClass(void)
// void *hkRefCountedProperties::Entry::staticClass();
// [0x15569d0] (22 bytes) hkRefCountedProperties::staticClass(void)
// void *hkRefCountedProperties::staticClass();
// [0x1556b60] (21 bytes) hkCompareInfosBySize(hkMonitorStreamAnalyzerPrintByTypeInfo const*,hkMonitorStreamAnalyzerPrintByTypeInfo const*)
// bool hkCompareInfosBySize(int a1, int a2);
// [0x1557b90] (25 bytes) hkMonitorStreamStringMap::hkMonitorStreamStringMap(void)
// void hkMonitorStreamStringMap::hkMonitorStreamStringMap(hkMonitorStreamStringMap *this);
// [0x1557bb0] (9 bytes) hkMonitorStreamStringMap::hkMonitorStreamStringMap(hkFinishLoadedObjectFlag)
// void hkMonitorStreamStringMap::hkMonitorStreamStringMap();
// [0x1557bc0] (37 bytes) hkMonitorStreamStringMap::StringMap::StringMap(void)
// hkMonitorStreamStringMap::StringMap *hkMonitorStreamStringMap::StringMap::StringMap( hkMonitorStreamStringMap::StringMap *this);
// [0x1557bf0] (45 bytes) hkMonitorStreamStringMap::StringMap::StringMap(hkFinishLoadedObjectFlag)
// int hkMonitorStreamStringMap::StringMap::StringMap(int a1, int a2);
// [0x1557c20] (389 bytes) hkMonitorStreamAnalyzer::Node::Node(hkMonitorStreamAnalyzer::Node*,char const*,hkMonitorStreamAnalyzer::Node::NodeType)
// int hkMonitorStreamAnalyzer::Node::Node(int a1, uint32_t *a2, int a3, int16_t a4);
// [0x1558bc0] (164 bytes) hkMonitorStreamAnalyzer::Node::~Node()
// void hkMonitorStreamAnalyzer::Node::~Node(hkMonitorStreamAnalyzer::Node *this);
// [0x1558c70] (19 bytes) hkMonitorStreamAnalyzer::getStreamBegin(void)
// int hkMonitorStreamAnalyzer::getStreamBegin(hkMonitorStreamAnalyzer *this);
// [0x1558c90] (154 bytes) hkMonitorStreamAnalyzer::reset(void)
// hkMonitorStreamAnalyzer *hkMonitorStreamAnalyzer::reset(hkMonitorStreamAnalyzer *this);
// [0x1558d30] (436 bytes) hkMonitorStreamAnalyzer::resetNumThreads(int,int)
// hkMonitorStreamAnalyzer *hkMonitorStreamAnalyzer::resetNumThreads( hkMonitorStreamAnalyzer *this, int a2, int a3);
// [0x1558ef0] (186 bytes) hkMonitorStreamAnalyzer::hkMonitorStreamAnalyzer(int,int,int)
// void hkMonitorStreamAnalyzer::hkMonitorStreamAnalyzer(hkMonitorStreamAnalyzer *this, int a2, int a3, int a4);
// [0x1558fb0] (106 bytes) hkMonitorStreamFrameInfo::hkMonitorStreamFrameInfo(void)
// void hkMonitorStreamFrameInfo::hkMonitorStreamFrameInfo(hkMonitorStreamFrameInfo *this);
// [0x1559020] (1024 bytes) hkMonitorStreamAnalyzer::applyStringMap(char const*,char const*,hkPointerMap<void const*,char const*,hkContainerHeapAllocator> const&,hkBool)
// unsigned int *hkMonitorStreamAnalyzer::applyStringMap( unsigned int a1, unsigned int a2, unsigned int a3, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a4, char a5);
// [0x1559420] (200 bytes) hkMonitorStreamAnalyzer::extractStringMap(char const*,char const*,hkPointerMap<void const*,char const*,hkContainerHeapAllocator> &)
// void hkMonitorStreamAnalyzer::extractStringMap( unsigned int *a1, unsigned int a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3);
// [0x15594f0] (322 bytes) hkMonitorStreamAnalyzer::captureFrameDetails(char const*,char const*,hkMonitorStreamFrameInfo &)
// hkMonitorStreamAnalyzer *hkMonitorStreamAnalyzer::captureFrameDetails( hkMonitorStreamAnalyzer *this, const char *a2, hkMonitorStreamFrameInfo *a3, hkMonitorStreamFrameInfo *a4, hkStringPtr *a5);
// [0x1559640] (226 bytes) hkMonitorStreamAnalyzer::Node::setTimers(hkMonitorStreamFrameInfo const&,hkMonitorStream::TimerCommand const&,hkMonitorStream::TimerCommand const&)
// int hkMonitorStreamAnalyzer::Node::setTimers(int a1, int a2, int a3, int a4);
// [0x1559730] (154 bytes) hkMonitorStreamAnalyzer::Node::setTimers(hkMonitorStreamFrameInfo const&,hkMonitorStream::MultiTimerCommand const&)
// int hkMonitorStreamAnalyzer::Node::setTimers(int a1, int a2, uint32_t *a3);
// [0x15597d0] (441 bytes) hkMonitorStreamAnalyzer::Node::createSelfTimer(hkMonitorStreamFrameInfo const&,hkMonitorStreamAnalyzer::Node*)
// const hkMonitorStreamFrameInfo *hkMonitorStreamAnalyzer::Node::createSelfTimer( hkMonitorStreamAnalyzer::Node *this, const hkMonitorStreamFrameInfo *a2);
// [0x1559990] (86 bytes) hkMonitorStreamAnalyzer::mergeTreesForCombinedThreadSummary(hkMonitorStreamAnalyzer::Node *,hkMonitorStreamAnalyzer::Node *,int,int,float)
// int hkMonitorStreamAnalyzer::mergeTreesForCombinedThreadSummary( hkMonitorStreamAnalyzer *this, hkMonitorStreamAnalyzer::Node *a2, hkMonitorStreamAnalyzer::Node *a3, int a4, int a5);
// [0x15599f0] (342 bytes) hkMonitorStreamAnalyzer::navigateMonitors(hkMonitorStreamAnalyzer::CursorKeys const&,hkMonitorStreamAnalyzer::Node *)
// int hkMonitorStreamAnalyzer::navigateMonitors(uint8_t *a1, int a2);
// [0x1559b50] (158 bytes) hkMonitorStreamAnalyzer::findMaxTimerNameIndent(hkMonitorStreamAnalyzer::Node *,int,int,bool)
// int hkMonitorStreamAnalyzer::findMaxTimerNameIndent( hkString **this, hkMonitorStreamAnalyzer::Node *a2, int a3, uint8_t a4);
// [0x1559bf0] (3526 bytes) hkMonitorStreamAnalyzer::makeStatisticsTreeForSingleFrame(char const*,char const*,hkMonitorStreamFrameInfo const&,char const*,bool)
// hkMonitorStreamAnalyzer::Node *hkMonitorStreamAnalyzer::makeStatisticsTreeForSingleFrame( hkMonitorStreamAnalyzer *this, const char *a2, hkMonitorStreamFrameInfo *a3, const hkMonitorStreamFrameInfo *a4, const char *a5);
// [0x155a9c0] (316 bytes) hkMonitorStreamAnalyzer::makeStatisticsTreeForMultipleFrames(int,hkBool)
// 0x155a9c0 hkMonitorStreamAnalyzer::makeStatisticsTreeForMultipleFrames(int,hkBool)
// [0x155ab00] (226 bytes) hkMonitorStreamAnalyzer::traverseCompleteTreeToFindTotalCallCounts(hkMonitorStreamAnalyzer::Node *,unsigned int)
// void hkMonitorStreamAnalyzer::traverseCompleteTreeToFindTotalCallCounts( hkMonitorStreamAnalyzer *this, hkMonitorStreamAnalyzer::Node *a2);
// [0x155afb0] (116 bytes) hkMonitorStreamColorTable::findColor(char const*)
// int hkMonitorStreamColorTable::findColor(hkMonitorStreamColorTable *this, char *a2);
// [0x155b030] (146 bytes) hkMonitorStreamColorTable::addColor(char const*,unsigned int)
// void hkMonitorStreamColorTable::addColor(hkMonitorStreamColorTable *this, hkString *a2, unsigned int a3);
// [0x155b0d0] (2430 bytes) hkMonitorStreamColorTable::setupDefaultColorTable(void)
// void hkMonitorStreamColorTable::setupDefaultColorTable(hkMonitorStreamColorTable *this);
// [0x155bae0] (9 bytes) hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames(void)const
// void hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames();
// [0x155baf0] (1629 bytes) hkMonitorStreamAnalyzer::writeRawStatistics(hkOstream &)
// int hkMonitorStreamAnalyzer::writeRawStatistics(hkMonitorStreamAnalyzer *this, hkOstream *a2);
// [0x155c1f0] (31 bytes) hkMonitorStreamAnalyzer::ThreadDrawInput::computePerThreadHeightToFit(int,int,int,int,int)
// int hkMonitorStreamAnalyzer::ThreadDrawInput::computePerThreadHeightToFit( hkMonitorStreamAnalyzer::ThreadDrawInput *this, int a2, int a3, int a4, int a5);
// [0x155c210] (1313 bytes) hkMonitorStreamAnalyzer::getTimerLimits(hkArrayBase<hkMonitorStreamAnalyzer::Node *> const&,hkMonitorStreamAnalyzer::ThreadDrawInput const&,hkArray<hkArray<hkMonitorStreamFrameInfo,hkContainerHeapAllocator>,hkContainerHeapAllocator> &,float &,hkArray<float,hkContainerHeapAllocator> &)
// float *hkMonitorStreamAnalyzer::getTimerLimits(uint32_t *a1, float *a2, uint32_t **a3, float *a4, int *a5);
// [0x155c740] (2874 bytes) hkMonitorStreamAnalyzer::writeStatisticsDetailsToTexture(hkArrayBase<hkMonitorStreamAnalyzer::Node *> const&,hkMonitorStreamAnalyzer::ThreadDrawInput const&,hkArray<hkArray<hkMonitorStreamFrameInfo,hkContainerHeapAllocator>,hkContainerHeapAllocator> &,int *&,int &,hkMonitorStreamAnalyzer::SampleInfo *)
// int hkMonitorStreamAnalyzer::writeStatisticsDetailsToTexture( uint32_t *a1, float *a2, uint32_t **a3, hkString **a4, char *a5, float *a6);
// [0x155d280] (167 bytes) hkMonitorStreamAnalyzer::writeStatisticsDetailsToTga(hkArrayBase<hkMonitorStreamAnalyzer::Node *> const&,hkMonitorStreamAnalyzer::ThreadDrawInput const&,hkArray<hkArray<hkMonitorStreamFrameInfo,hkContainerHeapAllocator>,hkContainerHeapAllocator> &,hkOstream &,hkMonitorStreamAnalyzer::SampleInfo *)
// hkMemoryAllocator *hkMonitorStreamAnalyzer::writeStatisticsDetailsToTga( uint32_t *a1, int a2, uint32_t **a3, hkOstream *a4, float *a5);
// [0x155d330] (445 bytes) hkMonitorStreamAnalyzer::drawThreadsToTga(hkMonitorStreamAnalyzer::ThreadDrawInput const&,hkOstream &)
// int hkMonitorStreamAnalyzer::drawThreadsToTga( hkMonitorStreamAnalyzer *this, const hkMonitorStreamAnalyzer::ThreadDrawInput *a2, hkOstream *a3);
// [0x155d4f0] (615 bytes) hkMonitorStreamAnalyzer::reverseLookupNodeAtTgaSample(int,int,hkArrayBase<hkMonitorStreamAnalyzer::Node *> const&,hkMonitorStreamAnalyzer::ThreadDrawInput const&,hkArray<hkArray<hkMonitorStreamFrameInfo,hkContainerHeapAllocator>,hkContainerHeapAllocator> &)
// int hkMonitorStreamAnalyzer::reverseLookupNodeAtTgaSample(int a1, int a2, uint32_t *a3, float *a4, uint32_t **a5);
// [0x155d760] (2534 bytes) hkMonitorStreamAnalyzer::gatherRawStreamTimerValues(char const*,char const*,hkMonitorStreamFrameInfo const&,char const**,int,float *)
// void hkMonitorStreamAnalyzer::gatherRawStreamTimerValues( hkMonitorStreamAnalyzer *this, hkMonitorStreamAnalyzer *a2, const char *a3, const hkMonitorStreamFrameInfo *a4, const char **a5, int a6);
// [0x155f480] (887 bytes) hkMonitorStreamAnalyzer::showCombinedThreadSummaryRec(hkOstream &,hkMonitorStreamAnalyzer::Node *,int,int,int,hkMonitorStreamAnalyzer::CombinedThreadSummaryOptions const&)
// int hkMonitorStreamAnalyzer::showCombinedThreadSummaryRec(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x155f800] (697 bytes) hkMonitorStreamAnalyzer::showCombinedThreadSummaryForSingleFrame(hkMonitorStreamAnalyzer::Node *,int,int,hkOstream &,hkMonitorStreamAnalyzer::CombinedThreadSummaryOptions &)
// int hkMonitorStreamAnalyzer::showCombinedThreadSummaryForSingleFrame( hkString **a1, int a2, int a3, hkOstream *a4, int a5);
// [0x155fac0] (6938 bytes) hkMonitorStreamAnalyzer::writeStatisticsDetails(hkOstream &,hkArrayBase<hkMonitorStreamAnalyzer::Node *> &,int,int,int,char const*,bool)
// void hkMonitorStreamAnalyzer::writeStatisticsDetails( hkOstream *a1, char ***a2, int a3, char *a4, char a5, hkString *a6, char a7);
// [0x15615e0] (378 bytes) hkMonitorStreamAnalyzer::writeStatistics(hkOstream &,int)
// int hkMonitorStreamAnalyzer::writeStatistics(hkMonitorStreamAnalyzer *this, hkOstream *a2, char a3);
// [0x1561760] (29 bytes) hkStackTracer::~hkStackTracer()
// void hkStackTracer::~hkStackTracer(hkStackTracer *this);
// [0x15617b0] (79 bytes) hkStackTracer::~hkStackTracer()
// void hkStackTracer::~hkStackTracer(hkStackTracer *this);
// [0x1561800] (94 bytes) hkStackTracer::CallTree::quit(void)
// int hkStackTracer::CallTree::quit(hkStackTracer::CallTree *this);
// [0x1561860] (34 bytes) hkStackTracer::CallTree::~CallTree()
// void hkStackTracer::CallTree::~CallTree(hkStackTracer::CallTree *this);
// [0x1561890] (299 bytes) hkStackTracer::CallTree::getTraces(hkArray<unsigned long,hkContainerHeapAllocator> &,hkArray<int,hkContainerHeapAllocator> &)const
// int hkStackTracer::CallTree::getTraces( hkStackTracer::CallTree *this, hkArray<unsigned long, hkContainerHeapAllocator> *a2, hkArray<int, hkContainerHeapAllocator> *a3);
// [0x15619c0] (138 bytes) hkStackTracer::CallTree::swap(hkStackTracer::CallTree&)
// hkStackTracer::CallTree *hkStackTracer::CallTree::swap( hkStackTracer::CallTree *this, hkStackTracer::CallTree *a2);
// [0x1561a50] (277 bytes) hkStackTracer::CallTree::CallTree(hkStackTracer::CallTree const&)
// hkStackTracer::CallTree *hkStackTracer::CallTree::CallTree( hkStackTracer::CallTree *this, const hkStackTracer::CallTree *a2);
// [0x1561b70] (329 bytes) hkStackTracer::CallTree::operator=(hkStackTracer::CallTree const&)
// int hkStackTracer::CallTree::operator=(hkStackTracer::CallTree *this, const hkStackTracer::CallTree *a2);
// [0x1561cc0] (76 bytes) hkStackTracer::CallTree::getCallStack(int,unsigned long *,int)const
// int hkStackTracer::CallTree::getCallStack(hkStackTracer::CallTree *this, int a2, unsigned int *a3, int a4);
// [0x1561d10] (34 bytes) hkStackTracer::CallTree::getCallStackSize(int)const
// int hkStackTracer::CallTree::getCallStackSize(hkStackTracer::CallTree *this, int a2);
// [0x1561d40] (161 bytes) hkStackTracer::CallTree::removeNodeIfUnused(int)
// int hkStackTracer::CallTree::removeNodeIfUnused(hkStackTracer::CallTree *this, int a2);
// [0x1561df0] (58 bytes) hkStackTracer::CallTree::releaseCallStack(int)
// int hkStackTracer::CallTree::releaseCallStack(hkStackTracer::CallTree *this, int a2);
// [0x1561e30] (185 bytes) hkStackTracer::CallTree::getFreeNode(void)
// int hkStackTracer::CallTree::getFreeNode(hkStackTracer::CallTree *this);
// [0x1561ef0] (296 bytes) hkStackTracer::CallTree::insertCallStack(unsigned long const*,int)
// int hkStackTracer::CallTree::insertCallStack(hkStackTracer::CallTree *this, const unsigned int *a2, int a3);
// [0x1562020] (18 bytes) hkStackTracer::CallTree::isEmpty(void)const
// hkStackTracer::CallTree *hkStackTracer::CallTree::isEmpty(hkStackTracer::CallTree *this, int a2);
