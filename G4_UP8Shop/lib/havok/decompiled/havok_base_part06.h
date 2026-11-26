#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_base_part06.h
// Library: havok | Module: havok_base_part06
// Binary Address Span: 0x18b3ec0 .. 0x18e4090 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x18b3ec0] (76 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap(int)
// void hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap( hkMap_Raw *this, int a2);
// [0x18b3f10] (50 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap(void *,int)
// void hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap( hkMap_Raw *this, uint32_t *a2, unsigned int a3);
// [0x18b3f50] (9 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap(hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::InternalInitializer)
// void hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap();
// [0x18b3f60] (76 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::insert(hkDataObject_Handle,hkDataObject_Handle)
// int hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::insert( hkMemoryAllocator *a1, unsigned int a2, int a3, int a4, int a5);
// [0x18b3fb0] (84 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::tryInsert(hkDataObject_Handle,hkDataObject_Handle,hkResult &)
// int hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::tryInsert( hkMemoryAllocator *a1, unsigned int a2, int a3, int a4, int a5, uint32_t *a6);
// [0x18b4010] (76 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::findOrInsertKey(hkDataObject_Handle,hkDataObject_Handle)
// int hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::findOrInsertKey( hkMemoryAllocator *a1, unsigned int a2, int a3, int a4, int a5);
// [0x18b4060] (47 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::swap(hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>&)
// hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::swap( hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this, hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *a2);
// [0x18b4090] (52 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::reserve(int)
// hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::reserve( hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this, int a2);
// [0x18b40d0] (277 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::remove(Dummy *)
// unsigned int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::remove( int *a1, unsigned int a2);
// [0x18b41f0] (507 bytes) hkMapBase<hkDataObject_Handle,Copier::LiveObjectInfo,hkMapOperations<hkDataObject_Handle>>::insert(hkMemoryAllocator &,hkDataObject_Handle,Copier::LiveObjectInfo)
// int hkMapBase<hkDataObject_Handle,Copier::LiveObjectInfo,hkMapOperations<hkDataObject_Handle>>::insert( int *a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6, int a7, int a8);
// [0x18b43f0] (470 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::insert(hkMemoryAllocator &,hkDataObject_Handle,int)
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::insert( int *a1, int a2, unsigned int a3, unsigned int a4, int a5);
// [0x18b45d0] (350 bytes) hkSerializeMultiMap<hkDataObject_Handle,Copier::PointerPatch,hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>>::insert(hkDataObject_Handle,Copier::PointerPatch const&)
// int hkSerializeMultiMap<hkDataObject_Handle,Copier::PointerPatch,hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>>::insert( uint32_t *a1, unsigned int a2, unsigned int a3, int a4);
// [0x18b56e0] (1796 bytes) hkDataObjectUtil::toObjectWithRegistry(hkDataObject const&,hkClassNameRegistry const*,hkTypeInfoRegistry const*,unsigned int)
// hkObjectResource *hkDataObjectUtil::toObjectWithRegistry( hkDataObjectUtil *this, const hkDataObject *a2, const hkClassNameRegistry *a3, const hkTypeInfoRegistry *a4);
// [0x18b5df0] (82 bytes) hkDataObjectUtil::toObject(hkDataObject const&,unsigned int)
// hkObjectResource *hkDataObjectUtil::toObject(hkDataObjectUtil *this, const hkDataObject *a2);
// [0x18b5e50] (1646 bytes) hkDataObjectUtil::toResourceWithRegistry(hkDataObject const&,hkClassNameRegistry const*,unsigned int)
// hkPackfileData *hkDataObjectUtil::toResourceWithRegistry( hkDataObjectUtil *this, const hkDataObject *a2, const hkClassNameRegistry *a3);
// [0x18b64c0] (62 bytes) hkDataObjectUtil::toResource(hkDataObject const&,unsigned int)
// hkPackfileData *hkDataObjectUtil::toResource(hkDataObjectUtil *this, const hkDataObject *a2);
// [0x18b6500] (124 bytes) hkDefaultClassWrapper::wrapClass(hkDataWorld *,char const*)
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkDefaultClassWrapper::wrapClass( hkDefaultClassWrapper *this, hkDataWorld *a2, const char *a3);
// [0x18b6740] (122 bytes) hkDefaultClassWrapper::~hkDefaultClassWrapper()
// void hkDefaultClassWrapper::~hkDefaultClassWrapper(hkDefaultClassWrapper *this);
// [0x18b67c0] (178 bytes) hkDefaultClassWrapper::~hkDefaultClassWrapper()
// void hkDefaultClassWrapper::~hkDefaultClassWrapper(hkDefaultClassWrapper *this);
// [0x18b7620] (219 bytes) hkDefaultClassWrapper::hkDefaultClassWrapper(hkClassNameRegistry const*)
// void hkDefaultClassWrapper::hkDefaultClassWrapper(hkDefaultClassWrapper *this, const hkClassNameRegistry *a2);
// [0x18b7700] (229 bytes) hkVersionPatchManager::UidFromClassVersion::~UidFromClassVersion()
// void hkVersionPatchManager::UidFromClassVersion::~UidFromClassVersion( hkVersionPatchManager::UidFromClassVersion *this);
// [0x18b77f0] (259 bytes) hkVersionPatchManager::~hkVersionPatchManager()
// void hkVersionPatchManager::~hkVersionPatchManager(hkVersionPatchManager *this);
// [0x18b7900] (93 bytes) hkVersionPatchManager::~hkVersionPatchManager()
// void hkVersionPatchManager::~hkVersionPatchManager(hkVersionPatchManager *this);
// [0x18b7960] (15 bytes) hkVersionPatchManager::UidFromClassVersion::getName(unsigned long long)const
// int hkVersionPatchManager::UidFromClassVersion::getName( hkVersionPatchManager::UidFromClassVersion *this, uint64_t a2);
// [0x18b7970] (11 bytes) hkVersionPatchManager::UidFromClassVersion::getVersion(unsigned long long)const
// int hkVersionPatchManager::UidFromClassVersion::getVersion( hkVersionPatchManager::UidFromClassVersion *this, uint64_t a2);
// [0x18b7980] (108 bytes) hkVersionPatchManager::UidFromClassVersion::cache(char const*)const
// int hkVersionPatchManager::UidFromClassVersion::cache( hkVersionPatchManager::UidFromClassVersion *this, hkString *a2);
// [0x18b79f0] (162 bytes) hkVersionPatchManager::UidFromClassVersion::get(char const*,int)const
// int hkVersionPatchManager::UidFromClassVersion::get( hkVersionPatchManager::UidFromClassVersion *this, hkString *a2);
// [0x18b7aa0] (529 bytes) hkVersionPatchManager::hkVersionPatchManager(void)
// void hkVersionPatchManager::hkVersionPatchManager(hkVersionPatchManager *this);
// [0x18b7d10] (224 bytes) hkVersionPatchManager::clearPatches(void)
// int hkVersionPatchManager::clearPatches(hkVersionPatchManager *this);
// [0x18b7df0] (328 bytes) hkVersionPatchManager::clearProductPatches(char const*)
// int hkVersionPatchManager::clearProductPatches(hkVersionPatchManager *this, hkString *a2);
// [0x18b7f40] (12 bytes) hkVersionPatchManager::getPatches(void)const
// char *hkVersionPatchManager::getPatches(hkVersionPatchManager *this);
// [0x18b7f50] (53 bytes) hkVersionPatchManager::getUid(char const*,int)const
// int hkVersionPatchManager::getUid(hkVersionPatchManager::UidFromClassVersion **this, hkString *a2);
// [0x18b8330] (53 bytes) hkVersionPatchManager::getClassName(unsigned long long)const
// int hkVersionPatchManager::getClassName(hkVersionPatchManager::UidFromClassVersion **this, uint64_t a2);
// [0x18b8370] (53 bytes) hkVersionPatchManager::getClassVersion(unsigned long long)const
// int hkVersionPatchManager::getClassVersion( hkVersionPatchManager::UidFromClassVersion **this, uint64_t a2);
// [0x18b8410] (353 bytes) hkVersionPatchManager::findLastPatchIndexForUid(unsigned long long,unsigned int)const
// int hkVersionPatchManager::findLastPatchIndexForUid( hkVersionPatchManager *this, uint64_t a2, unsigned int a3);
// [0x18b8580] (5410 bytes) hkVersionPatchManager::recomputePatchDependencies(void)const
// hkVersionPatchManager *hkVersionPatchManager::recomputePatchDependencies( hkVersionPatchManager *this, uint32_t *a2);
// [0x18b9ab0] (40 bytes) hkVersionPatchManager::applyPatchesDebug(hkDataWorld &)const
// hkVersionPatchManager *hkVersionPatchManager::applyPatchesDebug( hkVersionPatchManager *this, hkDataWorld *a2, int *a3);
// [0x18b9ae0] (130 bytes) hkVersionPatchManager::addPatch(hkVersionPatchManager::PatchInfo const*)
// int hkVersionPatchManager::addPatch(uint32_t *a1, uint32_t *a2);
// [0x18b9bc0] (3678 bytes) hkVersionPatchManager::preparePatches(hkDataWorld &,hkVersionPatchManager::ClassWrapper *,hkArray<hkVersionPatchManager::PatchInfo const*,hkContainerHeapAllocator> &)const
// 0x18b9bc0 hkVersionPatchManager::preparePatches(hkDataWorld &,hkVersionPatchManager::ClassWrapper *,hkArray<hkVersionPatchManager::PatchInfo const*,hkContainerHeapAllocator> &)const
// [0x18baa20] (514 bytes) hkVersionPatchManager::applyPatches(hkDataWorld &,hkVersionPatchManager::ClassWrapper *)const
// hkVersionPatchManager *hkVersionPatchManager::applyPatches( hkVersionPatchManager *this, hkDataWorld *a2, hkVersionPatchManager::ClassWrapper *a3, uint32_t *a4);
// [0x18bac30] (9 bytes) hkSerializeDeprecated::isLoadable(hkSerializeUtil::FormatDetails const&)
// int hkSerializeDeprecated::isLoadable();
// [0x18bac40] (9 bytes) hkSerializeDeprecated::isEnabled(void)const
// int hkSerializeDeprecated::isEnabled();
// [0x18bac50] (29 bytes) hkSerializeDeprecated::~hkSerializeDeprecated()
// void hkSerializeDeprecated::~hkSerializeDeprecated(hkSerializeDeprecated *this);
// [0x18bac70] (79 bytes) hkSerializeDeprecated::saveXmlPackfile(void const*,hkClass const&,hkStreamWriter *,hkPackfileWriter::Options const&,hkPackfileWriter::AddObjectListener *,hkSerializeUtil::ErrorDetails *)
// uint32_t *hkSerializeDeprecated::saveXmlPackfile( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, uint32_t *a8);
// [0x18bad80] (65 bytes) hkSerializeDeprecated::loadOldPackfile(hkStreamReader &,hkSerializeUtil::FormatDetails const&,hkSerializeUtil::ErrorDetails *)
// int hkSerializeDeprecated::loadOldPackfile(int a1, int a2, int a3, uint32_t *a4);
// [0x18badd0] (65 bytes) hkSerializeDeprecated::loadOldPackfileOnHeap(hkStreamReader &,hkSerializeUtil::FormatDetails const&,hkSerializeUtil::ErrorDetails *)
// int hkSerializeDeprecated::loadOldPackfileOnHeap(int a1, int a2, int a3, uint32_t *a4);
// [0x18bae20] (96 bytes) hkSerializeDeprecated::~hkSerializeDeprecated()
// void hkSerializeDeprecated::~hkSerializeDeprecated(hkSerializeDeprecated *this);
// [0x18baed0] (309 bytes) hkSerializeDeprecated::readXmlPackfileHeader(hkStreamReader *,hkSerializeDeprecated::XmlPackfileHeader &,hkSerializeUtil::ErrorDetails *)
// uint32_t *hkSerializeDeprecated::readXmlPackfileHeader(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x18bb010] (170 bytes) hkParserBuffer::~hkParserBuffer()
// void hkParserBuffer::~hkParserBuffer(hkParserBuffer *this);
// [0x18bb0c0] (93 bytes) hkParserBuffer::~hkParserBuffer()
// void hkParserBuffer::~hkParserBuffer(hkParserBuffer *this);
// [0x18bb120] (225 bytes) hkParserBuffer::hkParserBuffer(hkStreamReader *)
// void hkParserBuffer::hkParserBuffer(hkParserBuffer *this, hkStreamReader *a2);
// [0x18bb210] (233 bytes) hkParserBuffer::read(int)
// int hkParserBuffer::read(hkParserBuffer *this, int a2);
// [0x18bb300] (70 bytes) hkParserBuffer::lexemeCommit(void)
// uint8_t *hkParserBuffer::lexemeCommit(hkParserBuffer *this);
// [0x18bb350] (99 bytes) hkParserBuffer::bufferCommit(void)
// int hkParserBuffer::bufferCommit(hkParserBuffer *this);
// [0x18bb3c0] (18 bytes) hkParserBuffer::setLexemePosition(int)
// int hkParserBuffer::setLexemePosition(hkParserBuffer *this, int a2);
// [0x18bb3e0] (139 bytes) hkParserBuffer::match(char const*,int)
// hkParserBuffer *hkParserBuffer::match(hkParserBuffer *this, hkParserBuffer *a2, char *a3, int a4);
// [0x18bb470] (73 bytes) hkParserBuffer::match(char const*)
// hkParserBuffer *hkParserBuffer::match(hkParserBuffer *this, char *a2, hkString *a3);
// [0x18bb4c0] (135 bytes) hkParserBuffer::matchAndConsume(char const*)
// hkParserBuffer *hkParserBuffer::matchAndConsume(hkParserBuffer *this, char *a2, hkString *a3);
// [0x18bb550] (29 bytes) hkObjectWriter::~hkObjectWriter()
// void hkObjectWriter::~hkObjectWriter(hkObjectWriter *this);
// [0x18bb570] (59 bytes) hkPlatformObjectWriter::writeRaw(hkStreamWriter *,void const*,int)
// hkPlatformObjectWriter *hkPlatformObjectWriter::writeRaw( hkPlatformObjectWriter *this, hkStreamWriter *a2, const void *a3, int a4, int a5);
// [0x18bb5b0] (229 bytes) hkPlatformObjectWriter::Cache::~Cache()
// void hkPlatformObjectWriter::Cache::~Cache(hkPlatformObjectWriter::Cache *this);
// [0x18bb6a0] (96 bytes) hkObjectWriter::~hkObjectWriter()
// void hkObjectWriter::~hkObjectWriter(hkObjectWriter *this);
// [0x18bb700] (93 bytes) hkPlatformObjectWriter::Cache::~Cache()
// void hkPlatformObjectWriter::Cache::~Cache(hkPlatformObjectWriter::Cache *this);
// [0x18bb760] (170 bytes) hkPlatformObjectWriter::~hkPlatformObjectWriter()
// void hkPlatformObjectWriter::~hkPlatformObjectWriter(hkPlatformObjectWriter *this);
// [0x18bb810] (93 bytes) hkPlatformObjectWriter::~hkPlatformObjectWriter()
// void hkPlatformObjectWriter::~hkPlatformObjectWriter(hkPlatformObjectWriter *this);
// [0x18bb870] (97 bytes) hkPlatformObjectWriter::Cache::Cache(void)
// struct hkPlatformObjectWriter::Cache *hkPlatformObjectWriter::Cache::Cache(hkPlatformObjectWriter::Cache *this);
// [0x18bb8e0] (272 bytes) hkPlatformObjectWriter::Cache::get(hkClass const*,hkStructureLayout const&)
// unsigned int hkPlatformObjectWriter::Cache::get( hkPlatformObjectWriter::Cache *this, const hkClass *a2, const hkStructureLayout *a3);
// [0x18bb9f0] (13 bytes) hkPlatformObjectWriter::getLayout(void)const
// int hkPlatformObjectWriter::getLayout(hkPlatformObjectWriter *this);
// [0x18bba00] (331 bytes) hkPlatformObjectWriter::hkPlatformObjectWriter(hkStructureLayout const&,hkPlatformObjectWriter::Cache *,hkFlags<hkObjectCopier::ObjectCopierFlagBits,unsigned int>)
// struct hkPlatformObjectWriter::Cache *hkPlatformObjectWriter::hkPlatformObjectWriter( hkPlatformObjectWriter *a1, int a2, int a3, int a4);
// [0x18bbb50] (514 bytes) hkPlatformObjectWriter::writeObject(hkStreamWriter *,void const*,hkClass const&,hkRelocationInfo &)
// hkPlatformObjectWriter *hkPlatformObjectWriter::writeObject( hkPlatformObjectWriter *this, hkPlatformObjectWriter::Cache **a2, uint8_t *a3, const hkClass *a4, hkRelocationInfo *a5, int a6);
// [0x18bbd60] (9 bytes) hkObjectResource::getName(void)const
// int hkObjectResource::getName();
// [0x18bbd70] (9 bytes) hkObjectResource::getImportsExports(hkArray<hkResource::Import,hkContainerHeapAllocator> &,hkArray<hkResource::Export,hkContainerHeapAllocator> &)const
// void hkObjectResource::getImportsExports();
// [0x18bbd80] (57 bytes) hkObjectResource::stealContentsPointer(char const*,hkTypeInfoRegistry const*)
// int hkObjectResource::stealContentsPointer( hkObjectResource *this, const char *a2, const hkTypeInfoRegistry *a3);
// [0x18bbdc0] (37 bytes) hkObjectResource::getContentsTypeName(void)const
// int hkObjectResource::getContentsTypeName(hkClass **this);
// [0x18bbdf0] (131 bytes) hkObjectResource::getContentsPointer(char const*,hkTypeInfoRegistry const*)const
// int hkObjectResource::getContentsPointer(hkObjectResource *this, const char *a2);
// [0x18bbe80] (429 bytes) hkObjectResource::~hkObjectResource()
// void hkObjectResource::~hkObjectResource(hkClass **this);
// [0x18bc030] (93 bytes) hkObjectResource::~hkObjectResource()
// void hkObjectResource::~hkObjectResource(hkClass **this);
// [0x18bc090] (206 bytes) hkObjectResource::hkObjectResource(hkVariant const&)
// int hkObjectResource::hkObjectResource(uint32_t *a1, uint32_t *a2);
// [0x18bc160] (147 bytes) hkObjectResource::setClassNameRegistry(hkClassNameRegistry const*)
// int hkObjectResource::setClassNameRegistry(hkObjectResource *this, const hkClassNameRegistry *a2);
// [0x18bc200] (147 bytes) hkObjectResource::setTypeInfoRegistry(hkTypeInfoRegistry const*)
// int hkObjectResource::setTypeInfoRegistry(hkObjectResource *this, const hkTypeInfoRegistry *a2);
// [0x18bc2a0] (437 bytes) hkDataObjectImpl::assignValueImpl(hkDataObjectImpl*,_hkDataObject_MemberHandle const*,hkDataObject_Value const&)
// hkTypeManager::Type *hkDataObjectImpl::assignValueImpl(int a1, int a2, hkDataObject_Value *a3);
// [0x18bc460] (522 bytes) hkDataArrayImpl::set(int,hkDataObject_Value const&)
// int *hkDataArrayImpl::set(hkDataArrayImpl *this, int a2, const hkDataObject_Value *a3);
// [0x18bc670] (29 bytes) hkBinaryTagfileReader::~hkBinaryTagfileReader()
// void hkBinaryTagfileReader::~hkBinaryTagfileReader(hkBinaryTagfileReader *this);
// [0x18bc690] (96 bytes) hkBinaryTagfileReader::~hkBinaryTagfileReader()
// void hkBinaryTagfileReader::~hkBinaryTagfileReader(hkBinaryTagfileReader *this);
// [0x18bc6f0] (34 bytes) hkBinaryTagfileReader::hkBinaryTagfileReader(void)
// void hkBinaryTagfileReader::hkBinaryTagfileReader(hkBinaryTagfileReader *this);
// [0x18c0ac0] (2615 bytes) hkBinaryTagfileReader::readHeader(hkStreamReader *,hkBinaryTagfile::Header &)
// uint32_t *hkBinaryTagfileReader::readHeader(uint32_t *a1, int a2, int a3, int a4);
// [0x18c1500] (735 bytes) hkBinaryTagfileReader::load(hkStreamReader *,hkDataWorld &)
// hkBinaryTagfileReader *hkBinaryTagfileReader::load( hkBinaryTagfileReader *this, hkStreamReader *a2, hkDataWorld *a3, int a4);
// [0x18c17e0] (22 bytes) hkVersionUtil::getCurrentVersion(void)
// const char *hkVersionUtil::getCurrentVersion();
// [0x18c1800] (226 bytes) hkVersionUtil::renameMember(hkVariant &,char const*,hkVariant &,char const*)
// char *hkVersionUtil::renameMember(int a1, char *a2, int a3, char *a4);
// [0x18c18f0] (165 bytes) hkVersionUtil::recomputeClassMemberOffsets(hkClass * const*,int)
// void hkVersionUtil::recomputeClassMemberOffsets(hkVersionUtil *this, hkClass **a2);
// [0x18c19a0] (237 bytes) hkVersionUtil::copyDefaults(void *,hkClass const&,hkClass const&)
// void hkVersionUtil::copyDefaults(hkVersionUtil *this, hkClass *a2, const hkClass *a3);
// [0x18c1a90] (441 bytes) hkRelocationInfo::~hkRelocationInfo()
// void hkRelocationInfo::~hkRelocationInfo(hkRelocationInfo *this);
// [0x18c1c50] (92 bytes) hkRelocationInfo::applyLocalAndGlobal(void *)
// int hkRelocationInfo::applyLocalAndGlobal(hkRelocationInfo *this, char *a2);
// [0x18c1cb0] (366 bytes) hkRelocationInfo::addImport(int,char const*)
// uint32_t *hkRelocationInfo::addImport(hkRelocationInfo *this, int a2, hkString *a3);
// [0x18c1e20] (84 bytes) hkPackfileWriter::setContents(void const*,hkClass const&,hkPackfileWriter::AddObjectListener *)
// int hkPackfileWriter::setContents( hkPackfileWriter *this, const void *a2, const hkClass *a3, hkPackfileWriter::AddObjectListener *a4);
// [0x18c1e80] (144 bytes) hkPackfileWriter::addImport(void const*,char const*)
// int hkPackfileWriter::addImport(hkPackfileWriter *this, const void *a2, const char *a3);
// [0x18c1f10] (63 bytes) hkPackfileWriter::addExport(void const*,char const*)
// int hkPackfileWriter::addExport(hkPackfileWriter *this, const void *a2, const char *a3);
// [0x18c1f50] (589 bytes) hkPackfileWriter::~hkPackfileWriter()
// void hkPackfileWriter::~hkPackfileWriter(hkPackfileWriter *this);
// [0x18c21a0] (93 bytes) hkPackfileWriter::~hkPackfileWriter()
// void hkPackfileWriter::~hkPackfileWriter(hkPackfileWriter *this);
// [0x18c2200] (1031 bytes) hkPackfileWriter::hkPackfileWriter(hkPackfileWriter::Options const&)
// int hkPackfileWriter::hkPackfileWriter(uint32_t *a1, hkMemoryAllocator *a2);
// [0x18c2610] (230 bytes) hkPackfileWriter::sectionTagToIndex(char const*)
// int hkPackfileWriter::sectionTagToIndex(hkPackfileWriter *this, hkString *a2);
// [0x18c2700] (42 bytes) hkPackfileWriter::addSection(char const*)
// int hkPackfileWriter::addSection(hkPackfileWriter *this, char *a2);
// [0x18c2730] (82 bytes) hkPackfileWriter::setSectionForClass(hkClass const&,char const*)
// int hkPackfileWriter::setSectionForClass(hkPackfileWriter *this, const hkClass *a2, char *a3);
// [0x18c2790] (80 bytes) hkPackfileWriter::setSectionForPointer(void const*,char const*)
// int hkPackfileWriter::setSectionForPointer(hkPackfileWriter *this, const void *a2, char *a3);
// [0x18c27e0] (168 bytes) hkPackfileWriter::findSectionFor(void const*,hkClass const&,char const*)
// int hkPackfileWriter::findSectionFor(hkPackfileWriter *this, const void *a2, const hkClass *Parent, char *a4);
// [0x18c2890] (213 bytes) hkPackfileWriter::addPendingWrite(void const*,hkClass const&,void const*,hkClass const&,char const*)
// int hkPackfileWriter::addPendingWrite( hkPackfileWriter *this, const void *a2, const hkClass *a3, void *a4, const hkClass *a5, char *a6);
// [0x18c2970] (62 bytes) hkPackfileWriter::getCurrentVersion(char *,int)
// int hkPackfileWriter::getCurrentVersion(hkPackfileWriter *this, size_t a2);
// [0x18c29b0] (528 bytes) hkPackfileWriter::notDuplicateMetaData(void const*,hkClass const*)
// int hkPackfileWriter::notDuplicateMetaData(hkPackfileWriter *this, hkClass *a2, const hkClass *a3);
// [0x18c2bc0] (1994 bytes) hkPackfileWriter::addObject(void const*,hkClass const&,hkVtableClassRegistry const*,hkPackfileWriter::AddObjectListener *,char const*)
// void hkPackfileWriter::addObject( hkPackfileWriter *this, unsigned int a2, const hkClass *a3, const hkVtableClassRegistry *a4, hkPackfileWriter::AddObjectListener *a5, char *a6);
// [0x18c3390] (270 bytes) hkPackfileWriter::setContentsWithRegistry(void const*,hkClass const&,hkVtableClassRegistry const*,hkPackfileWriter::AddObjectListener *)
// unsigned int hkPackfileWriter::setContentsWithRegistry( hkPackfileWriter *this, const void *a2, const hkClass *a3, const hkVtableClassRegistry *a4, hkPackfileWriter::AddObjectListener *a5);
// [0x18c34a0] (12 bytes) hkPackfileData::getName(void)const
// int hkPackfileData::getName(hkPackfileData *this);
// [0x18c34b0] (249 bytes) hkPackfileData::callDestructors(void)
// int hkPackfileData::callDestructors(hkPackfileData *this);
// [0x18c35b0] (507 bytes) hkPackfileData::getImportsExports(hkArray<hkResource::Import,hkContainerHeapAllocator> &,hkArray<hkResource::Export,hkContainerHeapAllocator> &)const
// int *hkPackfileData::getImportsExports(uint32_t *a1, int *a2, int *a3);
// [0x18c37b0] (60 bytes) hkPackfileData::getContentsTypeName(void)const
// unsigned int hkPackfileData::getContentsTypeName(hkPackfileData *this);
// [0x18c37f0] (610 bytes) hkPackfileData::~hkPackfileData()
// void hkPackfileData::~hkPackfileData(hkMemoryAllocator **this);
// [0x18c3a60] (93 bytes) hkPackfileData::~hkPackfileData()
// void hkPackfileData::~hkPackfileData(hkMemoryAllocator **this);
// [0x18c3ac0] (451 bytes) hkPackfileData::hkPackfileData(hkClassNameRegistry const*)
// void hkPackfileData::hkPackfileData(hkPackfileData *this, const hkClassNameRegistry *a2);
// [0x18c3c90] (77 bytes) hkPackfileData::setName(char const*)
// hkString *hkPackfileData::setName(hkMemoryAllocator **this, hkString *a2);
// [0x18c3ce0] (106 bytes) hkPackfileData::addExport(char const*,void *)
// uint32_t *hkPackfileData::addExport(hkPackfileData *this, const char *a2, void *a3);
// [0x18c3d50] (92 bytes) hkPackfileData::removeExport(void *)
// int hkPackfileData::removeExport(hkPackfileData *this, void *a2);
// [0x18c3db0] (106 bytes) hkPackfileData::addImport(char const*,void **)
// uint32_t *hkPackfileData::addImport(hkPackfileData *this, const char *a2, void **a3);
// [0x18c3e20] (135 bytes) hkPackfileData::removeImport(void **)
// hkPackfileData *hkPackfileData::removeImport(hkPackfileData *this, void **a2);
// [0x18c3eb0] (16 bytes) hkPackfileData::finishedObjects(void)const
// bool hkPackfileData::finishedObjects(hkPackfileData *this);
// [0x18c3ec0] (460 bytes) hkPackfileData::getContentsPointer(char const*,hkTypeInfoRegistry const*)const
// int hkPackfileData::getContentsPointer(hkPackfileData *this, const char *a2, const hkTypeInfoRegistry *a3);
// [0x18c4090] (14 bytes) hkPackfileData::setContentsWithName(void *,char const*)
// hkPackfileData *hkPackfileData::setContentsWithName(hkPackfileData *this, void *a2);
// [0x18c40a0] (139 bytes) hkPackfileData::setPackfileClassNameRegistry(hkClassNameRegistry const*)
// int hkPackfileData::setPackfileClassNameRegistry(hkPackfileData *this, const hkClassNameRegistry *a2);
// [0x18c4130] (174 bytes) hkDeepCopier::freeDeepCopy(void *)
// hkDeepCopier *hkDeepCopier::freeDeepCopy(hkDeepCopier *this, hkMemoryAllocator *a2);
// [0x18c41e0] (2442 bytes) hkDeepCopier::deepCopy(void const*,hkClass const&,hkPointerMap<void const*,void *,hkContainerHeapAllocator> *,hkVtableClassRegistry *,hkTypeInfoRegistry *,hkFlags<hkObjectCopier::ObjectCopierFlagBits,unsigned int>)
// hkString *hkDeepCopier::deepCopy( unsigned int a1, unsigned int a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3, int a4, int a5, int a6);
// [0x18c4b70] (9 bytes) hkDataWorld::renameClass(hkDataClass &,char const*)
// void hkDataWorld::renameClass();
// [0x18c4b80] (9 bytes) hkDataWorld::removeClass(hkDataClass &)
// void hkDataWorld::removeClass();
// [0x18c4b90] (9 bytes) hkDataWorld::setClassVersion(hkDataClass &,int)
// void hkDataWorld::setClassVersion();
// [0x18c4ba0] (9 bytes) hkDataWorld::setClassParent(hkDataClass &,hkDataClass &)
// void hkDataWorld::setClassParent();
// [0x18c4bb0] (9 bytes) hkDataWorld::renameClassMember(hkDataClass &,char const*,char const*)
// void hkDataWorld::renameClassMember();
// [0x18c4bc0] (9 bytes) hkDataWorld::removeClassMember(hkDataClass &,char const*)
// void hkDataWorld::removeClassMember();
// [0x18c4bd0] (9 bytes) hkDataWorld::findObjectsByBaseClass(char const*,hkArray<hkDataObjectImpl *,hkContainerTempAllocator> &)const
// void hkDataWorld::findObjectsByBaseClass();
// [0x18c4be0] (9 bytes) hkDataWorld::findObjectsByExactClass(char const*,hkArray<hkDataObjectImpl *,hkContainerTempAllocator> &)const
// void hkDataWorld::findObjectsByExactClass();
// [0x18c4bf0] (9 bytes) hkDataWorld::castObject(hkDataObject &,hkDataClass const&)
// void hkDataWorld::castObject();
// [0x18c4c00] (9 bytes) hkDataWorld::setClassMemberDefault(hkDataClass &,char const*,void const*)
// void hkDataWorld::setClassMemberDefault();
// [0x18c4c10] (9 bytes) hkDataWorld::copyClassFromWorld(char const*,hkDataWorld const&)
// int hkDataWorld::copyClassFromWorld();
// [0x18c4c20] (9 bytes) hkDataWorld::addClassMember(hkDataClass &,char const*,hkTypeManager::Type *,void const*)
// void hkDataWorld::addClassMember();
// [0x18c4c30] (29 bytes) hkDataWorld::~hkDataWorld()
// void hkDataWorld::~hkDataWorld(hkDataWorld *this);
// [0x18c4c50] (96 bytes) hkDataWorld::~hkDataWorld()
// void hkDataWorld::~hkDataWorld(hkDataWorld *this);
// [0x18c4cb0] (91 bytes) hkDataClass::getAllDeclaredMemberInfo(hkArrayBase<hkDataClass_MemberInfo> &)const
// int hkDataClass::getAllDeclaredMemberInfo(uint32_t *a1, uint32_t *a2);
// [0x18c4d10] (313 bytes) hkDataClass::getCinfo(hkDataClass::Cinfo &)const
// int hkDataClass::getCinfo(uint32_t *a1, uint32_t *a2);
// [0x18c4e50] (76 bytes) hkDataObject_Value::getType(void)const
// int hkDataObject_Value::getType(hkDataObject_Value *this);
// [0x18c4ea0] (323 bytes) hkDataWorld::addClassMemberTypeExpression(hkDataClass &,char const*,char const*,char const*,void const*)
// uint32_t *hkDataWorld::addClassMemberTypeExpression( hkDataWorld *this, hkDataClass *a2, hkTypeManager *a3, hkString *a4, hkString *a5, int a6, char a7);
// [0x18c4ff0] (31 bytes) hkDataObject::destroyMember(char const*)
// int hkDataObject::destroyMember(hkDataObject *this, const char *a2);
// [0x18c5010] (9 bytes) hkResourceHandle::getType(void)const
// int hkResourceHandle::getType();
// [0x18c5020] (29 bytes) hkResourceBase::~hkResourceBase()
// void hkResourceBase::~hkResourceBase(hkResourceBase *this);
// [0x18c5040] (29 bytes) hkResourceHandle::~hkResourceHandle()
// void hkResourceHandle::~hkResourceHandle(hkResourceHandle *this);
// [0x18c5060] (9 bytes) hkResourceContainer::getType(void)const
// int hkResourceContainer::getType();
// [0x18c5070] (29 bytes) hkResourceContainer::~hkResourceContainer()
// void hkResourceContainer::~hkResourceContainer(hkResourceContainer *this);
// [0x18c5090] (29 bytes) hkResourceMap::~hkResourceMap()
// void hkResourceMap::~hkResourceMap(hkResourceMap *this);
// [0x18c50b0] (12 bytes) hkMemoryResourceContainer::getNumResources(void)
// int hkMemoryResourceContainer::getNumResources(hkMemoryResourceContainer *this);
// [0x18c50c0] (12 bytes) hkMemoryResourceContainer::getParent(void)
// int hkMemoryResourceContainer::getParent(hkMemoryResourceContainer *this);
// [0x18c50d0] (31 bytes) hkMemoryResourceHandle::getName(hkStringBuf &)const
// const char *hkMemoryResourceHandle::getName(hkMemoryResourceHandle *this);
// [0x18c50f0] (12 bytes) hkMemoryResourceHandle::getObject(void)const
// int hkMemoryResourceHandle::getObject(hkMemoryResourceHandle *this);
// [0x18c5100] (13 bytes) hkMemoryResourceContainer::getName(hkStringBuf &)const
// unsigned int hkMemoryResourceContainer::getName(hkMemoryResourceContainer *this);
// [0x18c5110] (12 bytes) hkMemoryResourceContainer::getNumContainers(void)
// int hkMemoryResourceContainer::getNumContainers(hkMemoryResourceContainer *this);
// [0x18c5120] (45 bytes) hkMemoryResourceHandle::setName(char const*)
// hkStringPtr *hkMemoryResourceHandle::setName(hkMemoryResourceHandle *this, hkString *a2);
// [0x18c5150] (37 bytes) hkMemoryResourceHandle::getClass(void)const
// int hkMemoryResourceHandle::getClass(hkMemoryResourceHandle *this);
// [0x18c5180] (53 bytes) hkMemoryResourceHandle::setObject(void *,hkClass const*)
// int hkMemoryResourceHandle::setObject(hkMemoryResourceHandle *this, void *a2, const hkClass *a3);
// [0x18c51c0] (191 bytes) hkMemoryResourceContainer::findContainerByName(char const*,hkResourceContainer const*)const
// int hkMemoryResourceContainer::findContainerByName( hkMemoryResourceContainer *this, hkString *a2, const hkResourceContainer *a3);
// [0x18c5280] (136 bytes) hkContainerResourceMap::findObjectByName(char const*,hkClass const**)const
// int hkContainerResourceMap::findObjectByName(hkContainerResourceMap *this, hkString *a2, const hkClass **a3);
// [0x18c5310] (61 bytes) hkContainerResourceMap::~hkContainerResourceMap()
// void hkContainerResourceMap::~hkContainerResourceMap(hkContainerResourceMap *this);
// [0x18c5350] (100 bytes) hkContainerResourceMap::~hkContainerResourceMap()
// void hkContainerResourceMap::~hkContainerResourceMap(hkContainerResourceMap *this);
// [0x18c53c0] (78 bytes) hkResourceMap::~hkResourceMap()
// void hkResourceMap::~hkResourceMap(hkResourceMap *this);
// [0x18c5410] (96 bytes) hkResourceContainer::~hkResourceContainer()
// void hkResourceContainer::~hkResourceContainer(hkResourceContainer *this);
// [0x18c5470] (96 bytes) hkResourceHandle::~hkResourceHandle()
// void hkResourceHandle::~hkResourceHandle(hkResourceHandle *this);
// [0x18c54d0] (96 bytes) hkResourceBase::~hkResourceBase()
// void hkResourceBase::~hkResourceBase(hkResourceBase *this);
// [0x18c5530] (159 bytes) hkMemoryResourceHandle::removeExternalLink(char const*)
// void hkMemoryResourceHandle::removeExternalLink(hkMemoryResourceHandle *this, char *a2);
// [0x18c55d0] (162 bytes) hkMemoryResourceHandle::addExternalLink(char const*,char const*)
// hkStringPtr *hkMemoryResourceHandle::addExternalLink(hkMemoryResourceHandle *this, hkString *a2, hkString *a3);
// [0x18c5680] (112 bytes) hkMemoryResourceHandle::clearExternalLinks(void)
// void hkMemoryResourceHandle::clearExternalLinks(hkMemoryResourceHandle *this);
// [0x18c56f0] (395 bytes) hkMemoryResourceContainer::~hkMemoryResourceContainer()
// void hkMemoryResourceContainer::~hkMemoryResourceContainer(hkMemoryResourceContainer *this);
// [0x18c5880] (93 bytes) hkMemoryResourceContainer::~hkMemoryResourceContainer()
// void hkMemoryResourceContainer::~hkMemoryResourceContainer(hkMemoryResourceContainer *this);
// [0x18c58e0] (250 bytes) hkMemoryResourceHandle::~hkMemoryResourceHandle()
// void hkMemoryResourceHandle::~hkMemoryResourceHandle(hkMemoryResourceHandle *this);
// [0x18c59e0] (93 bytes) hkMemoryResourceHandle::~hkMemoryResourceHandle()
// void hkMemoryResourceHandle::~hkMemoryResourceHandle(hkMemoryResourceHandle *this);
// [0x18c5a40] (337 bytes) hkMemoryResourceContainer::destroyContainer(hkResourceContainer *)
// void hkMemoryResourceContainer::destroyContainer(hkMemoryResourceContainer *this, hkResourceContainer *a2);
// [0x18c5ba0] (388 bytes) hkMemoryResourceContainer::destroyResource(hkResourceHandle *)
// void hkMemoryResourceContainer::destroyResource(hkMemoryResourceContainer *this, hkResourceHandle *a2);
// [0x18c5d30] (85 bytes) hkMemoryResourceHandle::hkMemoryResourceHandle(void)
// void hkMemoryResourceHandle::hkMemoryResourceHandle(hkMemoryResourceHandle *this);
// [0x18c5d90] (395 bytes) hkMemoryResourceContainer::createResource(char const*,void *,hkClass const*)
// int hkMemoryResourceContainer::createResource( hkMemoryResourceContainer *this, const char *a2, void *a3, const hkClass *a4);
// [0x18c5f20] (57 bytes) hkMemoryResourceHandle::hkMemoryResourceHandle(hkFinishLoadedObjectFlag)
// void hkMemoryResourceHandle::hkMemoryResourceHandle(uint32_t *a1);
// [0x18c5f60] (189 bytes) hkResourceContainer::getPath(hkStringBuf &)
// int hkResourceContainer::getPath(hkResourceContainer *this, hkStringBuf *a2, char a3);
// [0x18c6020] (233 bytes) hkResourceContainer::findAllResourceRecursively(hkArray<hkResourceHandle *,hkContainerHeapAllocator> &)
// int hkResourceContainer::findAllResourceRecursively(int a1, hkMemoryAllocator *a2);
// [0x18c6110] (161 bytes) hkResourceContainer::tryToResolveLinks(hkResourceMap &)
// int hkResourceContainer::tryToResolveLinks(hkResourceContainer *this, hkResourceMap *a2);
// [0x18c61c0] (143 bytes) hkResourceContainer::findAllContainersRecursively(hkArray<hkResourceContainer*,hkContainerHeapAllocator> &)
// int hkResourceContainer::findAllContainersRecursively(int a1, hkMemoryAllocator *a2);
// [0x18c6250] (114 bytes) hkMemoryResourceContainer::hkMemoryResourceContainer(char const*)
// void hkMemoryResourceContainer::hkMemoryResourceContainer(hkMemoryResourceContainer *this, hkString *a2);
// [0x18c62d0] (469 bytes) hkMemoryResourceContainer::createContainer(char const*)
// int hkMemoryResourceContainer::createContainer(hkMemoryResourceContainer *this, hkString *a2);
// [0x18c64b0] (105 bytes) hkMemoryResourceContainer::hkMemoryResourceContainer(hkFinishLoadedObjectFlag)
// void hkMemoryResourceContainer::hkMemoryResourceContainer(uint32_t *a1, int a2);
// [0x18c6520] (335 bytes) hkContainerResourceMap::hkContainerResourceMap(hkResourceContainer *)
// void hkContainerResourceMap::hkContainerResourceMap(hkContainerResourceMap *this, hkResourceContainer *a2);
// [0x18c6670] (885 bytes) hkMemoryResourceHandle::getExternalLinks(hkArray<hkResourceHandle::Link,hkContainerHeapAllocator> &)
// int hkMemoryResourceHandle::getExternalLinks(uint32_t *a1, uint32_t *a2);
// [0x18c69f0] (663 bytes) hkResourceHandle::tryToResolveLinks(hkResourceMap &)
// int hkResourceHandle::tryToResolveLinks(hkResourceHandle *this, hkResourceMap *a2);
// [0x18c6c90] (728 bytes) hkMemoryResourceContainer::findResourceByName(char const*,hkClass const*,hkResourceHandle const*)const
// int hkMemoryResourceContainer::findResourceByName( hkMemoryResourceContainer *this, hkClass *a2, const hkClass *a3, const hkResourceHandle *a4);
// [0x18c6f70] (1108 bytes) hkMemoryResourceContainer::parentTo(hkResourceContainer *)
// hkMemoryResourceContainer *hkMemoryResourceContainer::parentTo( hkMemoryResourceContainer *this, hkResourceContainer *a2, hkResourceContainer *a3);
// [0x18c73d0] (151 bytes) hkXmlStreamParser::hkXmlStreamParser(hkStreamReader *)
// void hkXmlStreamParser::hkXmlStreamParser(hkXmlStreamParser *this, hkStreamReader *a2);
// [0x18c7470] (114 bytes) hkXmlStreamParser::_pushLexeme(void)
// int hkXmlStreamParser::_pushLexeme(hkXmlStreamParser *this);
// [0x18c74f0] (747 bytes) hkXmlStreamParser::_extractAttributes(void)
// hkArrayUtil *hkXmlStreamParser::_extractAttributes(hkXmlStreamParser *this);
// [0x18c77e0] (245 bytes) hkXmlStreamParser::_parseBlock(void)
// int hkXmlStreamParser::_parseBlock(hkXmlStreamParser *this);
// [0x18c78e0] (137 bytes) hkXmlStreamParser::_parseQBlock(void)
// int hkXmlStreamParser::_parseQBlock(hkXmlStreamParser *this);
// [0x18c7970] (181 bytes) hkXmlStreamParser::_advance(void)
// int hkXmlStreamParser::_advance(hkXmlStreamParser *this);
// [0x18c7a30] (39 bytes) hkXmlStreamParser::advance(void)
// int hkXmlStreamParser::advance(hkXmlStreamParser *this);
// [0x18c7a60] (124 bytes) hkXmlStreamParser::getValue(char const*,hkSubString &)const
// hkXmlStreamParser *hkXmlStreamParser::getValue( hkXmlStreamParser *this, const char *a2, hkSubString *a3, uint32_t *a4);
// [0x18c7ae0] (61 bytes) hkXmlStreamParser::getBlockName(void)const
// hkXmlStreamParser *hkXmlStreamParser::getBlockName(hkXmlStreamParser *this, uint32_t *a2);
// [0x18c7b20] (27 bytes) hkXmlStreamParser::getLexeme(void)const
// hkXmlStreamParser *hkXmlStreamParser::getLexeme(hkXmlStreamParser *this, uint32_t *a2);
// [0x18c7b40] (794 bytes) hkXmlStreamParser::dumpParse(hkOstream &)
// char *hkXmlStreamParser::dumpParse(hkXmlStreamParser *this, hkOstream *a2);
// [0x18c7e60] (203 bytes) hkXmlStreamParser::parseInt(hkSubString const&,long long &)
// hkXmlStreamParser *hkXmlStreamParser::parseInt( hkXmlStreamParser *this, const hkSubString *a2, int64_t *a3);
// [0x18c7f30] (303 bytes) hkXmlStreamParser::parseInt(hkSubString const&,int &,unsigned long long &)
// hkXmlStreamParser *hkXmlStreamParser::parseInt( hkXmlStreamParser *this, const hkSubString *a2, int *a3, uint64_t *a4);
// [0x18c8060] (208 bytes) hkXmlStreamParser::getIntAttribute(char const*,int &)const
// hkXmlStreamParser *hkXmlStreamParser::getIntAttribute( hkXmlStreamParser *this, const char *a2, hkSubString *a3, uint32_t *a4);
// [0x18c8130] (107 bytes) hkXmlStreamParser::hasAttribute(char const*)const
// hkXmlStreamParser *hkXmlStreamParser::hasAttribute(hkXmlStreamParser *this, const char *a2, hkSubString *a3);
// [0x18c81a0] (454 bytes) hkXmlStreamParser::parseReal(hkSubString const&,float &)
// hkXmlStreamParser *hkXmlStreamParser::parseReal(hkXmlStreamParser *this, const hkSubString *a2, float *a3);
// [0x18c8370] (173 bytes) hkXmlStreamParser::getRealAttribute(char const*,float &)const
// hkXmlStreamParser *hkXmlStreamParser::getRealAttribute( hkXmlStreamParser *this, const char *a2, hkSubString *a3, float *a4);
// [0x18c8420] (54 bytes) hkXmlStreamParser::needsDecode(hkSubString const&)
// hkXmlStreamParser *hkXmlStreamParser::needsDecode(hkXmlStreamParser *this, const hkSubString *a2);
// [0x18c8460] (809 bytes) hkXmlStreamParser::decodeString(hkSubString const&,hkStringBuf &)
// hkXmlStreamParser *hkXmlStreamParser::decodeString( hkXmlStreamParser *this, const hkSubString *a2, hkStringBuf *a3);
// [0x18c8790] (83 bytes) hkFloatParseUtil::getFloatType(float)
// char hkFloatParseUtil::getFloatType(hkFloatParseUtil *this);
// [0x18c87f0] (100 bytes) hkFloatParseUtil::getFloatType(double)
// int hkFloatParseUtil::getFloatType(hkFloatParseUtil *this, double a2);
// [0x18c8860] (91 bytes) hkFloatParseUtil::equals(float,float)
// int hkFloatParseUtil::equals(hkFloatParseUtil *this, hkFloatParseUtil *a2);
// [0x18c88c0] (114 bytes) hkFloatParseUtil::equals(double,double)
// int hkFloatParseUtil::equals(double this, double a2);
// [0x18c8940] (112 bytes) hkFloatParseUtil::calcFloatText(float,hkStringBuf &)
// hkStringBuf *hkFloatParseUtil::calcFloatText(hkFloatParseUtil *this, hkStringBuf *a2);
// [0x18c89b0] (114 bytes) hkFloatParseUtil::calcFloatText(double,hkStringBuf &)
// hkStringBuf *hkFloatParseUtil::calcFloatText(hkFloatParseUtil *this, double a2);
// [0x18c8a30] (159 bytes) hkFloatParseUtil::calcFloatTextWithPoint(float,hkStringBuf &)
// hkStringBuf *hkFloatParseUtil::calcFloatTextWithPoint(hkFloatParseUtil *this, hkStringBuf *a2);
// [0x18c8ad0] (161 bytes) hkFloatParseUtil::calcFloatTextWithPoint(double,hkStringBuf &)
// hkStringBuf *hkFloatParseUtil::calcFloatTextWithPoint(hkFloatParseUtil *this, double a2);
// [0x18c8b80] (245 bytes) hkFloatParseUtil::parseFloat(hkSubString const&,float &)
// hkFloatParseUtil *hkFloatParseUtil::parseFloat(hkFloatParseUtil *this, const hkSubString *a2, float *a3);
// [0x18c8c80] (49 bytes) hkDataObjectToNative::findClassOf(hkDataObject const&)
// int hkDataObjectToNative::findClassOf(hkDataObjectToNative *this, const hkDataObject *a2);
// [0x18c8cc0] (397 bytes) hkDataObjectToNative::allocateObject(hkDataObject const&,hkDataObjectToNative::CopyInfoOut &)
// hkString **hkDataObjectToNative::allocateObject(hkString **a1, uint32_t *a2, hkClass *a3, uint32_t *a4);
// [0x18c8e50] (135 bytes) hkDataObjectToNative::fillNativeEnumMember(void *,hkClassMember const&,hkDataObject_Value const&,hkClass const&)
// hkDataObjectToNative *hkDataObjectToNative::fillNativeEnumMember( hkDataObjectToNative *this, void *a2, const hkClassMember *a3, const hkDataObject_Value *a4, const hkClass *a5);
// [0x18c8ee0] (279 bytes) hkDataObjectToNative::getMemberClassAndCheck(hkClassMember const&,hkDataObject const&)
// int hkDataObjectToNative::getMemberClassAndCheck( hkDataObjectToNative *this, const hkClassMember *a2, const hkDataObject *a3);
// [0x18c9000] (1765 bytes) hkResult hkDataObjectToNative::fillNativeSimpleMember<hkDataObject_Value>(void *,hkClassMember::Type,hkDataObject_Value const&,hkClass const*,unsigned int,hkDataObjectToNative::CopyInfoOut &)
// uint32_t *hkDataObjectToNative::fillNativeSimpleMember<hkDataObject_Value>( uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, int a6, int a7, uint32_t *a8);
// [0x18c96f0] (2835 bytes) hkDataObjectToNative::fillNativeMembers(void *,hkDataObject const&,hkDataObjectToNative::CopyInfoOut &)
// uint32_t *hkDataObjectToNative::fillNativeMembers( uint32_t *a1, hkDataObjectToNative *a2, int a3, const hkDataObject *a4, uint32_t *a5);
// [0x18ca210] (1765 bytes) hkResult hkDataObjectToNative::fillNativeSimpleMember<hkDataArray_Value>(void *,hkClassMember::Type,hkDataArray_Value const&,hkClass const*,unsigned int,hkDataObjectToNative::CopyInfoOut &)
// uint32_t *hkDataObjectToNative::fillNativeSimpleMember<hkDataArray_Value>( uint32_t *a1, hkDataObjectToNative *a2, int a3, int a4, uint32_t *a5, int a6, int a7, uint32_t *a8);
// [0x18ca900] (5178 bytes) hkDataObjectToNative::copyIntoNativeArray(void *,hkClassMember const&,hkDataArray const&,hkDataObjectToNative::CopyInfoOut &)
// 0x18ca900 hkDataObjectToNative::copyIntoNativeArray(void *,hkClassMember const&,hkDataArray const&,hkDataObjectToNative::CopyInfoOut &)
// [0x18cbd40] (3147 bytes) hkDataObjectToNative::copyIntoRelArray(void *,hkClassMember const&,hkDataArray const&,hkDataObjectToNative::CopyInfoOut &,void *&,void *)
// 0x18cbd40 hkDataObjectToNative::copyIntoRelArray(void *,hkClassMember const&,hkDataArray const&,hkDataObjectToNative::CopyInfoOut &,void *&,void *)
// [0x18cc990] (29 bytes) hkXmlParser::Node::~Node()
// void hkXmlParser::Node::~Node(hkXmlParser::Node *this);
// [0x18cc9b0] (61 bytes) hkXmlParser::EndElement::~EndElement()
// void hkXmlParser::EndElement::~EndElement(hkXmlParser::EndElement *this);
// [0x18cc9f0] (61 bytes) hkXmlParser::Characters::~Characters()
// void hkXmlParser::Characters::~Characters(hkXmlParser::Characters *this);
// [0x18cca30] (162 bytes) hkXmlParser::~hkXmlParser()
// void hkXmlParser::~hkXmlParser(hkXmlParser *this);
// [0x18ccae0] (98 bytes) hkXmlParser::putBack(hkXmlParser::Node *)
// int hkXmlParser::putBack(hkXmlParser *this, hkXmlParser::Node *a2);
// [0x18ccb50] (118 bytes) hkXmlParser::EndElement::~EndElement()
// void hkXmlParser::EndElement::~EndElement(hkXmlParser::EndElement *this);
// [0x18ccbd0] (118 bytes) hkXmlParser::Characters::~Characters()
// void hkXmlParser::Characters::~Characters(hkXmlParser::Characters *this);
// [0x18ccc50] (93 bytes) hkXmlParser::~hkXmlParser()
// void hkXmlParser::~hkXmlParser(hkXmlParser *this);
// [0x18cccb0] (96 bytes) hkXmlParser::Node::~Node()
// void hkXmlParser::Node::~Node(hkXmlParser::Node *this);
// [0x18ccd10] (184 bytes) hkXmlParser::StartElement::~StartElement()
// void hkXmlParser::StartElement::~StartElement(hkXmlParser::StartElement *this);
// [0x18ccdd0] (239 bytes) hkXmlParser::StartElement::~StartElement()
// void hkXmlParser::StartElement::~StartElement(hkXmlParser::StartElement *this);
// [0x18ccec0] (180 bytes) hkXmlParser::StartElement::getAttribute(char const*,char const*)const
// const char *hkXmlParser::StartElement::getAttribute(hkXmlParser::StartElement *this, char *a2, const char *a3);
// [0x18ccf80] (423 bytes) hkXmlParser::translateEntities(char *,char const*)
// int hkXmlParser::translateEntities(hkXmlParser *this, char *a2);
// [0x18cd130] (166 bytes) hkXmlParser::canonicalize(char *,char const*,char const*)
// int hkXmlParser::canonicalize(hkXmlParser *this, char *a2, const char *a3);
// [0x18cd1e0] (282 bytes) hkXmlParser::Characters::canonicalize(char const*)
// hkXmlParser::Characters *hkXmlParser::Characters::canonicalize( hkXmlParser::Characters *this, const char *a2, char *a3);
// [0x18cd300] (77 bytes) hkXmlParser::hkXmlParser(void)
// void hkXmlParser::hkXmlParser(hkXmlParser *this);
// [0x18cd350] (208 bytes) hkXmlParser::parse(hkTree<hkRefPtr<hkXmlParser::Node>> &,hkStreamReader *)
// uint32_t *hkXmlParser::parse(uint32_t *a1, int a2, int a3, int a4);
// [0x18cd420] (13 bytes) hkXmlParser::getLastError(void)const
// unsigned int hkXmlParser::getLastError(hkXmlParser *this);
// [0x18cd430] (4544 bytes) hkXmlParser::nextNode(hkXmlParser::Node **,hkStreamReader *)
// hkXmlParser *hkXmlParser::nextNode( hkXmlParser *this, hkXmlParser::Node **a2, hkStreamReader *a3, hkStreamReader *a4);
// [0x18ce5f0] (1804 bytes) hkXmlParser::expandNode(hkXmlParser::StartElement *,hkTree<hkRefPtr<hkXmlParser::Node>> &,hkStreamReader *)
// uint32_t *hkXmlParser::expandNode(int a1, int a2, int a3, char **a4, hkStreamReader *a5);
// [0x18ced00] (39 bytes) hkDataWorldCloner::hkDataWorldCloner(hkDataWorld &,hkDataWorld const&)
// void hkDataWorldCloner::hkDataWorldCloner(hkDataWorldCloner *this, hkDataWorld *a2, const hkDataWorld *a3);
// [0x18ced30] (1055 bytes) hkDataWorldCloner::findDestClass(char const*)
// int hkDataWorldCloner::findDestClass(hkDataWorldCloner *this, const char *a2);
// [0x18cf150] (516 bytes) hkDataWorldCloner::getClassMemberInfos(hkArray<hkDataClass_MemberInfo,hkContainerTempAllocator> &,hkDataClass const&,hkDataClass const&)
// int hkDataWorldCloner::getClassMemberInfos( hkDataWorldCloner *this, hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator> *a2, const hkDataClass *a3, const hkDataClass *a4);
// [0x18cf360] (57 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator new(unsigned int)
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator new();
// [0x18cf3a0] (71 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator delete(void *,unsigned int)
// void hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator delete(void *a1);
// [0x18cf3f0] (11 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator new(unsigned int,void *)
// unsigned int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator new( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this, unsigned int a2);
// [0x18cf400] (11 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator new[](unsigned int,void *)
// unsigned int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator new[]( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this, unsigned int a2);
// [0x18cf410] (9 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator delete(void *,void *)
// void hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator delete();
// [0x18cf420] (9 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator delete[](void *,void *)
// void hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::operator delete[]();
// [0x18cf430] (25 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hkMapBase(void)
// void hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hkMapBase(hkMapBase_Raw *this);
// [0x18cf450] (9 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hkMapBase(hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::InternalInitializer)
// void hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hkMapBase();
// [0x18cf460] (9 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::~hkMapBase()
// void hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::~hkMapBase();
// [0x18cf470] (65 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getIterator(void)const
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getIterator( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18cf4c0] (33 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getKey(Dummy *)const
// uint32_t *hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getKey( uint32_t *a1, uint32_t *a2, int a3);
// [0x18cf4f0] (20 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getValue(Dummy *)const
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getValue(uint32_t *a1, int a2);
// [0x18cf510] (24 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::setValue(Dummy *,int)
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::setValue( uint32_t *a1, int a2, int a3);
// [0x18cf530] (67 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getNext(Dummy *)const
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getNext(uint32_t *a1, int a2);
// [0x18cf580] (21 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::isValid(Dummy *)const
// bool *hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::isValid( bool *a1, int a2, int a3);
// [0x18cf5a0] (109 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::findKey(hkDataObject_Handle)const
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::findKey( uint32_t *a1, unsigned int a2, int a3);
// [0x18cf610] (68 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hasKey(hkDataObject_Handle)const
// uint8_t *hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hasKey( uint8_t *a1, uint32_t *a2, unsigned int a3, int a4);
// [0x18cf660] (108 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getWithDefault(hkDataObject_Handle,int)const
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getWithDefault( uint32_t *a1, unsigned int a2, int a3, int a4);
// [0x18cf6d0] (93 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::get(hkDataObject_Handle,int *)const
// int *hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::get( int *a1, uint32_t *a2, unsigned int a3, int a4, uint32_t *a5);
// [0x18cf730] (110 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::remove(hkDataObject_Handle)
// uint32_t *hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::remove( uint32_t *a1, int *a2, unsigned int a3, int a4);
// [0x18cf7a0] (15 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getSize(void)const
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getSize( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18cf7b0] (16 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getCapacity(void)const
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getCapacity( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18cf7c0] (15 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getMemSize(void)const
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getMemSize( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18cf7d0] (11 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getMemStart(void)const
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getMemStart( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18cf7e0] (144 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::isOk(void)const
// hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::isOk( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this, int a2);
// [0x18cf870] (62 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::clear(void)
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::clear( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18cf8b0] (97 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::clearAndDeallocate(hkMemoryAllocator &)
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::clearAndDeallocate( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this, hkMemoryAllocator *a2);
// [0x18cf920] (21 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::wasReallocated(void)const
// int64_t hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::wasReallocated( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this, int a2);
// [0x18cf940] (36 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::setOwnedData(void *,int,int)
// hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::setOwnedData( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this, void *a2, int a3, int a4);
// [0x18cf970] (51 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getSizeInBytesFor(int)
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::getSizeInBytesFor( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18cf9b0] (78 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::init(void *,int)
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::init( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this, char *a2, unsigned int a3);
// [0x18cfa00] (50 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hkMapBase(void *,int)
// void hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::hkMapBase( hkMapBase_Raw *this, char *a2, unsigned int a3);
// [0x18cfa40] (303 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::resizeTable(hkMemoryAllocator &,int)
// hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::resizeTable( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this, hkMemoryAllocator *a2, int a3, int a4);
// [0x18cfb70] (148 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::tryInsert(hkMemoryAllocator &,hkDataObject_Handle,int,hkResult &)
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::tryInsert( hkMemoryAllocator *a1, int a2, unsigned int a3, unsigned int a4, int a5, uint32_t *a6);
// [0x18cfc10] (234 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::findOrInsertKey(hkMemoryAllocator &,hkDataObject_Handle,int)
// int hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::findOrInsertKey( hkMemoryAllocator *a1, int a2, unsigned int a3, int a4, int a5);
// [0x18cfd00] (91 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::reserve(hkMemoryAllocator &,int)
// hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::reserve( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this, hkMemoryAllocator *a2, int a3);
// [0x18cfd60] (18 bytes) hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::isPower2(unsigned int)
// bool hkMapBase<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>>::isPower2( hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18cfd80] (57 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new();
// [0x18cfdc0] (71 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete( void *a1);
// [0x18cfe10] (11 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new( hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x18cfe20] (11 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new[]( hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x18cfe30] (9 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete();
// [0x18cfe40] (9 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete[]();
// [0x18cfe50] (76 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap(int)
// void hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap( hkMap_Raw *this, int a2);
// [0x18cfea0] (50 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap(void *,int)
// void hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap( hkMap_Raw *this, char *a2, unsigned int a3);
// [0x18cfee0] (9 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap(hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::InternalInitializer)
// void hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::hkMap();
// [0x18cfef0] (54 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::~hkMap()
// void hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::~hkMap( hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this);
// [0x18cff30] (68 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::insert(hkDataObject_Handle,int)
// int hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::insert( int *a1, unsigned int a2, unsigned int a3, int a4);
// [0x18cff80] (76 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::tryInsert(hkDataObject_Handle,int,hkResult &)
// int hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::tryInsert( hkMemoryAllocator *a1, unsigned int a2, unsigned int a3, int a4, uint32_t *a5);
// [0x18cffd0] (68 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::findOrInsertKey(hkDataObject_Handle,int)
// int hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::findOrInsertKey( hkMemoryAllocator *a1, unsigned int a2, int a3, int a4);
// [0x18d0020] (47 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::swap(hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>&)
// hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::swap( hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this, hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *a2);
// [0x18d0050] (52 bytes) hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::reserve(int)
// hkMapBase<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>> *hkMap<hkDataObject_Handle,int,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::reserve( hkMap<hkDataObject_Handle, int, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this, int a2);
// [0x18d0090] (569 bytes) hkDataWorldCloner::copyObject(hkDataObject const&)
// hkDataWorldCloner *hkDataWorldCloner::copyObject( hkDataWorldCloner *this, const hkDataObject *a2, hkDataObject *a3);
// [0x18d04d0] (2328 bytes) hkDataWorldCloner::copyArray(hkDataArray &,hkDataArray const&,int)
// hkTypeManager::Type *hkDataWorldCloner::copyArray(int a1, int **a2, int a3, int a4);
// [0x18d1000] (872 bytes) hkDataWorldCloner::copyValue(hkDataObject &,hkDataObject const&,hkDataClass_MemberInfo const&)
// hkTypeManager::Type *hkDataWorldCloner::copyValue(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x18d1370] (225 bytes) hkDataWorldCloner::copyObjectMembers(hkDataObject &,hkDataObject const&)
// int hkDataWorldCloner::copyObjectMembers( hkDataWorldCloner *this, hkDataObject *a2, const hkDataObject *a3, int a4, int a5, int a6);
// [0x18d1460] (176 bytes) hkDataWorldCloner::clone(void)
// hkDataWorldCloner *hkDataWorldCloner::clone(hkDataWorldCloner *this, hkDataObject *a2);
// [0x18d1510] (11 bytes) hkObjectCopier::lookupClass(hkClass const&)
// const hkClass *hkObjectCopier::lookupClass(hkObjectCopier *this, const hkClass *a2);
// [0x18d1520] (29 bytes) hkObjectCopier::~hkObjectCopier()
// void hkObjectCopier::~hkObjectCopier(hkObjectCopier *this);
// [0x18d1540] (54 bytes) hkObjectCopier::areMembersCompatible(hkClassMember const&,hkClassMember const&)
// int hkObjectCopier::areMembersCompatible( hkObjectCopier *this, const hkClassMember *a2, const hkClassMember *a3);
// [0x18d1580] (93 bytes) hkObjectCopier::~hkObjectCopier()
// void hkObjectCopier::~hkObjectCopier(hkObjectCopier *this);
// [0x18d2120] (74 bytes) hkObjectCopier::hkObjectCopier(hkStructureLayout const&,hkStructureLayout const&,hkFlags<hkObjectCopier::ObjectCopierFlagBits,unsigned int>)
// int hkObjectCopier::hkObjectCopier(int a1, uint32_t *a2, int *a3, int a4);
// [0x18d2170] (640 bytes) hkObjectCopier::writeZero(hkOArchive &,hkClassMember const&,hkLocalArray<char> &)
// int hkObjectCopier::writeZero(int a1, hkOArchive *a2, hkClassMember *a3, const void **a4);
// [0x18d23f0] (5622 bytes) hkObjectCopier::saveBody(void const*,hkClass const&,hkOArchive &,hkClass const&,hkLocalArray<char> &)
// int hkObjectCopier::saveBody(int a1, hkString *a2, hkClass *a3, hkOArchive *a4, hkClass *a5, const void **a6);
// [0x18d39f0] (6313 bytes) hkObjectCopier::saveExtras(void const*,hkClass const&,hkOArchive &,hkClass const&,int,int,hkRelocationInfo &,hkLocalArray<char> &,int)
// int hkObjectCopier::saveExtras( uint8_t *a1, int a2, hkClass *a3, hkOArchive *a4, hkClass *a5, int a6, int a7, uint32_t *a8, const void **a9, int a10);
// [0x18d52a0] (1145 bytes) hkObjectCopier::copyObject(void const*,hkClass const&,hkStreamWriter *,hkClass const&,hkRelocationInfo &)
// 0x18d52a0 hkObjectCopier::copyObject(void const*,hkClass const&,hkStreamWriter *,hkClass const&,hkRelocationInfo &)
// [0x18d5720] (72 bytes) hkXmlLexAnalyzer::hkXmlLexAnalyzer(hkStreamReader *)
// void hkXmlLexAnalyzer::hkXmlLexAnalyzer(hkXmlLexAnalyzer *this, hkStreamReader *a2);
// [0x18d5770] (157 bytes) hkXmlLexAnalyzer::_lexIdentifier(void)
// int hkXmlLexAnalyzer::_lexIdentifier(hkXmlLexAnalyzer *this);
// [0x18d5810] (162 bytes) hkXmlLexAnalyzer::_lexWhiteSpace(void)
// int hkXmlLexAnalyzer::_lexWhiteSpace(hkXmlLexAnalyzer *this);
// [0x18d58c0] (217 bytes) hkXmlLexAnalyzer::_lexText(void)
// int hkXmlLexAnalyzer::_lexText(hkXmlLexAnalyzer *this);
// [0x18d59a0] (12 bytes) hkXmlLexAnalyzer::_handleError(char const*)
// int hkXmlLexAnalyzer::_handleError();
// [0x18d59b0] (173 bytes) hkXmlLexAnalyzer::_lexComment(void)
// int hkXmlLexAnalyzer::_lexComment(hkXmlLexAnalyzer *this);
// [0x18d5a60] (362 bytes) hkXmlLexAnalyzer::_matchOutsideBrackets(void)
// int hkXmlLexAnalyzer::_matchOutsideBrackets(hkXmlLexAnalyzer *this);
// [0x18d5bd0] (206 bytes) hkXmlLexAnalyzer::_lexQuotedString(void)
// int hkXmlLexAnalyzer::_lexQuotedString(hkXmlLexAnalyzer *this);
// [0x18d5ca0] (484 bytes) hkXmlLexAnalyzer::_matchInBrackets(void)
// int hkXmlLexAnalyzer::_matchInBrackets(hkXmlLexAnalyzer *this);
// [0x18d5e90] (68 bytes) hkXmlLexAnalyzer::advance(void)
// int hkXmlLexAnalyzer::advance(hkXmlLexAnalyzer *this);
// [0x18d5ee0] (45 bytes) hkDisplaySphere::~hkDisplaySphere()
// void hkDisplaySphere::~hkDisplaySphere(hkDisplaySphere *this);
// [0x18d5f10] (104 bytes) hkDisplaySphere::~hkDisplaySphere()
// void hkDisplaySphere::~hkDisplaySphere(hkDisplaySphere *this);
// [0x18d6530] (240 bytes) hkDisplaySphere::hkDisplaySphere(hkSphere const&,int)
// void hkDisplaySphere::hkDisplaySphere(hkDisplaySphere *this, const hkSphere *a2, int a3);
// [0x18d6620] (1368 bytes) hkDisplaySphere::buildIcosahedron(hkGeometry &,hkSimdFloat32 const&)
// uint32_t *hkDisplaySphere::buildIcosahedron(uint32_t *a1, float *a2);
// [0x18d6b80] (215 bytes) hkDisplaySphere::buildGeometry(void)
// int *hkDisplaySphere::buildGeometry(hkDisplaySphere *this);
// [0x18d6c60] (658 bytes) hkDisplaySphere::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// int hkDisplaySphere::getWireframeGeometry( hkDisplaySphere *this, hkArrayBase<hkVector4f> *a2, hkMemoryAllocator *a3);
// [0x18d6f00] (106 bytes) hkVisualDebugger::addContext(hkProcessContext *)
// int hkVisualDebugger::addContext(hkVisualDebugger *this, hkProcessContext *a2);
// [0x18d6f70] (605 bytes) hkVisualDebugger::createRequiredAndDefaultProcessList(hkVisualDebuggerClient &,hkStringBuf &)
// hkStringBuf *hkVisualDebugger::createRequiredAndDefaultProcessList(int *a1, int a2, hkStringBuf *a3);
// [0x18d71d0] (210 bytes) hkVisualDebugger::deleteClient(int)
// int hkVisualDebugger::deleteClient(hkVisualDebugger *this, int a2);
// [0x18d72b0] (94 bytes) hkVisualDebugger::endCapture(void)
// int hkVisualDebugger::endCapture(hkVisualDebugger *this);
// [0x18d7310] (14 bytes) hkVisualDebugger::SupressPollForNewClient(bool)
// int hkVisualDebugger::SupressPollForNewClient(hkVisualDebugger *this, int a2);
// [0x18d7320] (133 bytes) hkVisualDebugger::writeStep(int,float)
// int hkVisualDebugger::writeStep(hkVisualDebugger *this, int a2, float a3);
// [0x18d73b0] (673 bytes) hkVisualDebugger::createClient(hkSocket *,hkStreamReader *,hkStreamWriter *)
// int hkVisualDebugger::createClient( hkVisualDebugger *this, hkSocket *a2, hkStreamReader *a3, hkStreamWriter *a4);
// [0x18d7660] (131 bytes) hkVisualDebugger::clearDefaultAndRequiredProcesses(void)
// void hkVisualDebugger::clearDefaultAndRequiredProcesses(hkVisualDebugger *this);
// [0x18d76f0] (130 bytes) hkVisualDebugger::addDefaultProcess(char const*)
// hkStringPtr *hkVisualDebugger::addDefaultProcess(hkVisualDebugger *this, hkString *a2);
// [0x18d7780] (130 bytes) hkVisualDebugger::addRequiredProcess(char const*)
// hkStringPtr *hkVisualDebugger::addRequiredProcess(hkVisualDebugger *this, hkString *a2);
// [0x18d7810] (197 bytes) hkVisualDebugger::addTrackedObject(void *,hkClass const&,char const*,unsigned long)
// int hkVisualDebugger::addTrackedObject( hkVisualDebugger *this, void *a2, const hkClass *a3, const char *a4, unsigned int a5);
// [0x18d78e0] (231 bytes) hkVisualDebugger::removeTrackedObject(void *)
// int hkVisualDebugger::removeTrackedObject(hkVisualDebugger *this, void *a2);
// [0x18d79d0] (162 bytes) hkVisualDebugger::addTrackedObjectCallback(void (*)(void *,hkClass const*,hkBool,unsigned long,void *),void *)
// int hkVisualDebugger::addTrackedObjectCallback(uint32_t *a1, int a2, int a3);
// [0x18d7a80] (108 bytes) hkVisualDebugger::removeTrackedObjectCallback(void (*)(void *,hkClass const*,hkBool,unsigned long,void *))
// void hkVisualDebugger::removeTrackedObjectCallback(uint32_t *a1, int a2);
// [0x18d7af0] (468 bytes) hkVisualDebugger::getCurrentProcesses(hkArray<hkProcess *,hkContainerHeapAllocator> &)const
// int hkVisualDebugger::getCurrentProcesses(int a1, int *a2);
// [0x18d7cd0] (125 bytes) hkVisualDebugger::removeContext(hkProcessContext *)
// hkVisualDebugger *hkVisualDebugger::removeContext(hkVisualDebugger *this, hkProcessContext *a2);
// [0x18d7d50] (279 bytes) hkVisualDebugger::getCurrentProcessByName(char const*)const
// int hkVisualDebugger::getCurrentProcessByName(hkVisualDebugger *this, char *a2);
// [0x18d7e70] (634 bytes) hkVisualDebugger::hkVisualDebugger(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&,hkVtableClassRegistry const*)
// int hkVisualDebugger::hkVisualDebugger(hkVisualDebugger *a1, uint32_t *a2, int a3);
// [0x18d80f0] (374 bytes) hkVisualDebugger::shutdown(void)
// int hkVisualDebugger::shutdown(hkVisualDebugger *this);
// [0x18d8270] (778 bytes) hkVisualDebugger::~hkVisualDebugger()
// void hkVisualDebugger::~hkVisualDebugger(hkVisualDebugger *this);
// [0x18d8580] (93 bytes) hkVisualDebugger::~hkVisualDebugger()
// void hkVisualDebugger::~hkVisualDebugger(hkVisualDebugger *this);
// [0x18d85e0] (514 bytes) hkVisualDebugger::serve(int)
// int hkVisualDebugger::serve(hkVisualDebugger *this, char *a2);
// [0x18d87f0] (892 bytes) hkVisualDebugger::capture(char const*)
// int hkVisualDebugger::capture(hkVisualDebugger *this, hkString *a2);
// [0x18d8b70] (973 bytes) hkVisualDebugger::capture(hkMemoryTrack *,hkMemoryTrack *)
// int hkVisualDebugger::capture(hkVisualDebugger *this, hkMemoryTrack *a2, hkMemoryTrack *a3);
// [0x18d9080] (19 bytes) hkVisualDebugger::pollForNewClients(void)
// hkVisualDebugger *hkVisualDebugger::pollForNewClients(hkVisualDebugger *this);
// [0x18d90a0] (807 bytes) hkVisualDebugger::step(float)
// hkVisualDebugger *hkVisualDebugger::step(hkVisualDebugger *this, float a2, int a3, int a4, ...);
// [0x18d93d0] (359 bytes) hkVisualDebugger::removeDefaultProcess(char const*)
// int hkVisualDebugger::removeDefaultProcess(hkVisualDebugger *this, hkString *a2);
// [0x18d9540] (29 bytes) hkProcessHandler::~hkProcessHandler()
// void hkProcessHandler::~hkProcessHandler(hkProcessHandler *this);
// [0x18d9560] (22 bytes) hkServerProcessHandler::getProcessTag(void)
// int hkServerProcessHandler::getProcessTag();
// [0x18d9590] (34 bytes) hkServerProcessHandler::getConsumableCommands(unsigned char *&,int &)
// int *hkServerProcessHandler::getConsumableCommands(hkServerProcessHandler *this, uint8_t **a2, int *a3);
// [0x18d95d0] (45 bytes) hkProcessHandler::~hkProcessHandler()
// void hkProcessHandler::~hkProcessHandler(hkProcessHandler *this);
// [0x18d9600] (46 bytes) hkServerProcessHandler::getProcessId(char const*)
// int hkServerProcessHandler::getProcessId(hkServerProcessHandler *this, char *a2);
// [0x18d9640] (46 bytes) hkServerProcessHandler::getProcessName(int)
// int hkServerProcessHandler::getProcessName(hkServerProcessHandler *this, int a2);
// [0x18d9680] (101 bytes) hkServerProcessHandler::selectProcess(int)
// hkServerProcessHandler *hkServerProcessHandler::selectProcess(hkServerProcessHandler *this, int a2, int a3);
// [0x18d9700] (164 bytes) hkServerProcessHandler::registerProcess(char const*,int)
// hkServerProcessHandler *hkServerProcessHandler::registerProcess( hkServerProcessHandler *this, hkOArchive **a2, hkString *a3, int a4);
// [0x18d97c0] (191 bytes) hkServerProcessHandler::step(float)
// int hkServerProcessHandler::step(hkServerProcessHandler *this, float a2);
// [0x18d9890] (61 bytes) hkCommandRouter::~hkCommandRouter()
// void hkCommandRouter::~hkCommandRouter(hkCommandRouter *this);
// [0x18d98d0] (364 bytes) hkServerProcessHandler::~hkServerProcessHandler()
// void hkServerProcessHandler::~hkServerProcessHandler(hkServerProcessHandler *this);
// [0x18d9a60] (238 bytes) hkServerProcessHandler::consumeCommand(unsigned char)
// int hkServerProcessHandler::consumeCommand(hkIArchive **this, int a2);
// [0x18d9b60] (118 bytes) hkCommandRouter::~hkCommandRouter()
// void hkCommandRouter::~hkCommandRouter(hkCommandRouter *this);
// [0x18d9be0] (93 bytes) hkServerProcessHandler::~hkServerProcessHandler()
// void hkServerProcessHandler::~hkServerProcessHandler(hkServerProcessHandler *this);
// [0x18d9c60] (199 bytes) hkServerProcessHandler::getProcessesByType(int,hkArray<hkProcess *,hkContainerHeapAllocator> &)
// int hkServerProcessHandler::getProcessesByType(int a1, int a2, hkMemoryAllocator *a3);
// [0x18d9d30] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::getProcessesByType(int,hkArray<hkProcess *,hkContainerHeapAllocator> &)
// int `non-virtual thunk to'hkServerProcessHandler::getProcessesByType(int a1, int a2, hkMemoryAllocator *a3);
// [0x18d9d40] (785 bytes) hkServerProcessHandler::hkServerProcessHandler(hkArray<hkProcessContext *,hkContainerHeapAllocator> &,hkStreamReader *,hkStreamWriter *)
// int hkServerProcessHandler::hkServerProcessHandler(int a1, int a2, hkStreamReader *a3, hkStreamWriter *a4);
// [0x18da060] (77 bytes) hkServerProcessHandler::findProcessByTag(int)
// int hkServerProcessHandler::findProcessByTag(hkServerProcessHandler *this, int a2);
// [0x18da0b0] (81 bytes) hkServerProcessHandler::getProcessByName(char const*)
// int hkServerProcessHandler::getProcessByName(hkServerProcessHandler *this, const char *a2);
// [0x18da120] (119 bytes) hkServerProcessHandler::deleteProcess(int)
// hkServerProcessHandler *hkServerProcessHandler::deleteProcess( hkServerProcessHandler *this, hkServerProcessHandler *a2, int a3);
// [0x18da1b0] (259 bytes) hkServerProcessHandler::createProcess(int)
// hkServerProcessHandler *hkServerProcessHandler::createProcess( hkServerProcessHandler *this, hkServerProcessHandler *a2, int a3);
// [0x18da2d0] (122 bytes) hkServerProcessHandler::registerAllAvailableProcesss(void)
// hkServerProcessHandler *hkServerProcessHandler::registerAllAvailableProcesss( hkServerProcessHandler *this, int a2);
// [0x18da350] (225 bytes) hkDebugDisplay::~hkDebugDisplay()
// void hkDebugDisplay::~hkDebugDisplay(hkDebugDisplay *this);
// [0x18da440] (93 bytes) hkDebugDisplay::~hkDebugDisplay()
// void hkDebugDisplay::~hkDebugDisplay(hkDebugDisplay *this);
// [0x18da4a0] (449 bytes) hkDebugDisplay::hkDebugDisplay(void)
// void hkDebugDisplay::hkDebugDisplay(hkDebugDisplay *this);
// [0x18da6c0] (309 bytes) hkDebugDisplay::addDebugDisplayHandler(hkDebugDisplayHandler *)
// int hkDebugDisplay::addDebugDisplayHandler(hkDebugDisplay *this, hkDebugDisplayHandler *a2);
// [0x18da800] (333 bytes) hkDebugDisplay::removeDebugDisplayHandler(hkDebugDisplayHandler *)
// int hkDebugDisplay::removeDebugDisplayHandler(hkDebugDisplay *this, hkDebugDisplayHandler *a2);
// [0x18da950] (221 bytes) hkDebugDisplay::clear(void)
// int hkDebugDisplay::clear(hkDebugDisplay *this);
// [0x18daa40] (335 bytes) hkDebugDisplay::addGeometry(hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> const&,hkTransformf const&,unsigned long,int,unsigned long)
// int hkDebugDisplay::addGeometry(int a1);
// [0x18daba0] (319 bytes) hkDebugDisplay::addGeometry(hkDisplayGeometry *,unsigned long,int,unsigned long)
// int hkDebugDisplay::addGeometry(pthread_mutex_t **this);
// [0x18dacf0] (327 bytes) hkDebugDisplay::addGeometryInstance(unsigned long,hkTransformf const&,unsigned long,int,unsigned long)
// int hkDebugDisplay::addGeometryInstance(pthread_mutex_t **this);
// [0x18dae40] (311 bytes) hkDebugDisplay::setGeometryPickable(hkBool,unsigned long,int)
// int hkDebugDisplay::setGeometryPickable(int a1);
// [0x18daf80] (311 bytes) hkDebugDisplay::setGeometryColor(unsigned int,unsigned long,int)
// int hkDebugDisplay::setGeometryColor(pthread_mutex_t **this);
// [0x18db0c0] (311 bytes) hkDebugDisplay::updateGeometry(hkTransformf const&,unsigned long,int)
// int hkDebugDisplay::updateGeometry(pthread_mutex_t **this);
// [0x18db200] (311 bytes) hkDebugDisplay::updateGeometry(hkMatrix4f const&,unsigned long,int)
// int hkDebugDisplay::updateGeometry(pthread_mutex_t **this);
// [0x18db340] (311 bytes) hkDebugDisplay::updateGeometry(hkQsTransformf const&,unsigned long,int)
// int hkDebugDisplay::updateGeometry(pthread_mutex_t **this, const hkQsTransformf *a2, unsigned int a3);
// [0x18db480] (335 bytes) hkDebugDisplay::skinGeometry(unsigned long *,int,hkMatrix4f const*,int,hkMatrix4f const&,int)
// int hkDebugDisplay::skinGeometry(pthread_mutex_t **this);
// [0x18db5e0] (351 bytes) hkDebugDisplay::skinGeometry(unsigned long *,int,hkQsTransformf const*,int,hkQsTransformf const&,int)
// int hkDebugDisplay::skinGeometry( pthread_mutex_t **this, unsigned int *a2, hkQsTransformf *a3, const hkQsTransformf *a4, hkQsTransformf *a5, const hkQsTransformf *a6);
// [0x18db750] (311 bytes) hkDebugDisplay::removeGeometry(unsigned long,int,unsigned long)
// int hkDebugDisplay::removeGeometry(pthread_mutex_t **this);
// [0x18db890] (351 bytes) hkDebugDisplay::updateCamera(hkVector4f const&,hkVector4f const&,hkVector4f const&,float,float,float,char const*)
// int hkDebugDisplay::updateCamera(pthread_mutex_t **this);
// [0x18dba00] (319 bytes) hkDebugDisplay::displayPoint(hkVector4f const&,unsigned int,int,int)
// int hkDebugDisplay::displayPoint(pthread_mutex_t **this);
// [0x18dbb50] (327 bytes) hkDebugDisplay::displayLine(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// int hkDebugDisplay::displayLine(pthread_mutex_t **this);
// [0x18dbca0] (335 bytes) hkDebugDisplay::displayTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// int hkDebugDisplay::displayTriangle(pthread_mutex_t **this);
// [0x18dbe00] (121 bytes) hkDebugDisplay::displayLineModelSpace(hkQsTransformf const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// int hkDebugDisplay::displayLineModelSpace( pthread_mutex_t **this, const hkQsTransformf *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x18dbe80] (99 bytes) hkDebugDisplay::displayLineModelSpace(hkTransformf const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// int hkDebugDisplay::displayLineModelSpace( pthread_mutex_t **this, const hkTransformf *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x18dbef0] (174 bytes) hkDebugDisplay::displayRay(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// int hkDebugDisplay::displayRay(hkDebugDisplay *this, __m128 *a2, __m128 *a3);
// [0x18dbfa0] (124 bytes) hkDebugDisplay::displayRayModelSpace(hkQsTransformf const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// int hkDebugDisplay::displayRayModelSpace( hkDebugDisplay *this, const hkQsTransformf *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x18dc020] (99 bytes) hkDebugDisplay::displayRayModelSpace(hkTransformf const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// int hkDebugDisplay::displayRayModelSpace( hkDebugDisplay *this, const hkTransformf *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x18dc090] (1547 bytes) hkDebugDisplay::displayArrow(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// const hkVector4f *hkDebugDisplay::displayArrow( pthread_mutex_t **this, const hkVector4f *a2, const hkVector4f *a3);
// [0x18dc6a0] (640 bytes) hkDebugDisplay::displayFrame(hkTransformf const&,float,int,int)
// const hkVector4f *hkDebugDisplay::displayFrame(pthread_mutex_t **this, const hkTransformf *a2, unsigned int a3);
// [0x18dc920] (640 bytes) hkDebugDisplay::displayFrame(hkQsTransformf const&,float,int,int)
// const hkVector4f *hkDebugDisplay::displayFrame( pthread_mutex_t **this, const hkQsTransformf *a2, unsigned int a3);
// [0x18dcba0] (299 bytes) hkDebugDisplay::displayStar(hkVector4f const&,float,unsigned int,int,int)
// int hkDebugDisplay::displayStar(pthread_mutex_t **this, const hkVector4f *a2, float a3);
// [0x18dccd0] (103 bytes) hkDebugDisplay::displayStarModelSpace(hkQsTransformf const&,hkVector4f const&,float,unsigned int,int,int)
// int hkDebugDisplay::displayStarModelSpace( pthread_mutex_t **this, const hkQsTransformf *a2, const hkVector4f *a3, float a4);
// [0x18dcd40] (103 bytes) hkDebugDisplay::displayStarModelSpace(hkTransformf const&,hkVector4f const&,float,unsigned int,int,int)
// int hkDebugDisplay::displayStarModelSpace( pthread_mutex_t **this, const hkTransformf *a2, const hkVector4f *a3, float a4);
// [0x18dcdb0] (985 bytes) hkDebugDisplay::displayAabb(hkAabb const&,unsigned int,int,int)
// int hkDebugDisplay::displayAabb(pthread_mutex_t **this, const hkAabb *a2);
// [0x18dd190] (1039 bytes) hkDebugDisplay::displayAabb(hkTransformf const&,hkAabb const&,unsigned int,int,int)
// int hkDebugDisplay::displayAabb(pthread_mutex_t **this, const hkTransformf *a2, const hkAabb *a3);
// [0x18dd5a0] (1475 bytes) hkDebugDisplay::displayPlane(hkVector4f const&,hkVector4f const&,float,unsigned int,int,int)
// const hkVector4f *hkDebugDisplay::displayPlane( pthread_mutex_t **this, __m128 *a2, const hkVector4f *a3, unsigned int a4);
// [0x18ddb70] (313 bytes) hkDebugDisplay::displayModelSpacePose(int,short const*,hkQsTransformf const*,hkQsTransformf const&,int,int,unsigned int)
// int hkDebugDisplay::displayModelSpacePose( hkDebugDisplay *this, int a2, int16_t *a3, const hkQsTransformf *a4, const hkQsTransformf *a5, int a6, int a7, unsigned int a8);
// [0x18ddcb0] (313 bytes) hkDebugDisplay::displayLocalSpacePose(int,short const*,hkQsTransformf const*,hkQsTransformf const&,int,int,unsigned int)
// int hkDebugDisplay::displayLocalSpacePose( hkDebugDisplay *this, int a2, int16_t *a3, const hkQsTransformf *a4, const hkQsTransformf *a5, int a6, int a7, unsigned int a8);
// [0x18dddf0] (319 bytes) hkDebugDisplay::displayText(char const*,unsigned int,int,int)
// int hkDebugDisplay::displayText(pthread_mutex_t **this);
// [0x18ddf40] (327 bytes) hkDebugDisplay::display3dText(char const*,hkVector4f const&,unsigned int,int,int)
// int hkDebugDisplay::display3dText(pthread_mutex_t **this);
// [0x18de090] (327 bytes) hkDebugDisplay::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned int,int,int)
// int hkDebugDisplay::displayGeometry(int a1);
// [0x18de1e0] (319 bytes) hkDebugDisplay::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,unsigned int,int,int)
// int hkDebugDisplay::displayGeometry(int a1);
// [0x18de330] (790 bytes) hkDebugDisplay::displayLitTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int)
// void hkDebugDisplay::displayLitTriangle( hkDebugDisplay *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, unsigned int a5);
// [0x18de6a0] (72 bytes) hkDisplayGeometry::~hkDisplayGeometry()
// void hkDisplayGeometry::~hkDisplayGeometry(hkDisplayGeometry *this);
// [0x18de6f0] (93 bytes) hkDisplayGeometry::~hkDisplayGeometry()
// void hkDisplayGeometry::~hkDisplayGeometry(hkDisplayGeometry *this);
// [0x18de750] (45 bytes) hkDisplayPlane::~hkDisplayPlane()
// void hkDisplayPlane::~hkDisplayPlane(hkDisplayPlane *this);
// [0x18de780] (104 bytes) hkDisplayPlane::~hkDisplayPlane()
// void hkDisplayPlane::~hkDisplayPlane(hkDisplayPlane *this);
// [0x18de7f0] (168 bytes) hkDisplayPlane::buildGeometry(void)
// uint32_t *hkDisplayPlane::buildGeometry(hkDisplayPlane *this);
// [0x18de8a0] (703 bytes) hkDisplayPlane::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// int hkDisplayPlane::getWireframeGeometry( hkDisplayPlane *this, hkArrayBase<hkVector4f> *a2, hkMemoryAllocator *a3);
// [0x18deb60] (326 bytes) hkDisplayPlane::hkDisplayPlane(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// void hkDisplayPlane::hkDisplayPlane( hkDisplayPlane *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x18decb0] (291 bytes) hkDisplayPlane::hkDisplayPlane(void)
// void hkDisplayPlane::hkDisplayPlane(hkDisplayPlane *this);
// [0x18dede0] (12 bytes) hkDisplayPlane::getNormal(void)
// char *hkDisplayPlane::getNormal(hkDisplayPlane *this);
// [0x18dedf0] (12 bytes) hkDisplayPlane::getCenter(void)
// char *hkDisplayPlane::getCenter(hkDisplayPlane *this);
// [0x18dee00] (12 bytes) hkDisplayPlane::getPerpToNormal(void)
// char *hkDisplayPlane::getPerpToNormal(hkDisplayPlane *this);
// [0x18dee10] (14 bytes) hkDisplayPlane::getExtents(void)
// char *hkDisplayPlane::getExtents(hkDisplayPlane *this);
// [0x18dee20] (143 bytes) hkDisplayPlane::setParameters(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// hkDisplayPlane *hkDisplayPlane::setParameters( hkDisplayPlane *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x18deeb0] (9 bytes) hkDisplayCylinder::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// void hkDisplayCylinder::getWireframeGeometry();
// [0x18deec0] (45 bytes) hkDisplayCylinder::~hkDisplayCylinder()
// void hkDisplayCylinder::~hkDisplayCylinder(hkDisplayCylinder *this);
// [0x18deef0] (104 bytes) hkDisplayCylinder::~hkDisplayCylinder()
// void hkDisplayCylinder::~hkDisplayCylinder(hkDisplayCylinder *this);
// [0x18def60] (182 bytes) hkDisplayCylinder::buildGeometry(void)
// int hkDisplayCylinder::buildGeometry(hkDisplayCylinder *this);
// [0x18df020] (279 bytes) hkDisplayCylinder::hkDisplayCylinder(hkVector4f const&,hkVector4f const&,float,int,int)
// void hkDisplayCylinder::hkDisplayCylinder( hkDisplayCylinder *this, const hkVector4f *a2, const hkVector4f *a3, float a4, int a5, int a6);
// [0x18df140] (9 bytes) hkDebugDisplayHandler::addTextureSearchPath(char const*)
// void hkDebugDisplayHandler::addTextureSearchPath();
// [0x18df150] (9 bytes) hkDebugDisplayHandler::clearTextureSearchPaths(void)
// void hkDebugDisplayHandler::clearTextureSearchPaths();
// [0x18df160] (9 bytes) hkDebugDisplayHandler::lockForUpdate(void)
// void hkDebugDisplayHandler::lockForUpdate();
// [0x18df170] (9 bytes) hkDebugDisplayHandler::unlockForUpdate(void)
// void hkDebugDisplayHandler::unlockForUpdate();
// [0x18df180] (13 bytes) hkServerDebugDisplayHandler::setGeometryVisibility(int,bool,unsigned long,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::setGeometryVisibility( hkServerDebugDisplayHandler *this, int a2, bool a3, unsigned int a4, int a5);
// [0x18df1a0] (12 bytes) hkServerDebugDisplayHandler::getProcessTag(void)
// int hkServerDebugDisplayHandler::getProcessTag();
// [0x18df1c0] (13 bytes) hkServerDebugDisplayHandler::displayPoint2d(hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayPoint2d( hkServerDebugDisplayHandler *this, const hkVector4f *a2, unsigned int a3, int a4, int a5);
// [0x18df1e0] (13 bytes) hkServerDebugDisplayHandler::displayLine2d(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayLine2d( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, unsigned int a4, int a5, int a6);
// [0x18df200] (13 bytes) hkServerDebugDisplayHandler::displayTriangle2d(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayTriangle2d( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, unsigned int a5, int a6, int a7);
// [0x18df220] (13 bytes) hkServerDebugDisplayHandler::displayText2d(char const*,hkVector4f const&,float,unsigned int,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayText2d( hkServerDebugDisplayHandler *this, const char *a2, const hkVector4f *a3, float a4, unsigned int a5, int a6, int a7);
// [0x18df240] (34 bytes) hkServerDebugDisplayHandler::getConsumableCommands(unsigned char *&,int &)
// int *hkServerDebugDisplayHandler::getConsumableCommands( hkServerDebugDisplayHandler *this, uint8_t **a2, int *a3);
// [0x18df280] (17 bytes) hkServerDebugDisplayHandler::doesSupportHashes(void)const
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::doesSupportHashes( hkServerDebugDisplayHandler *this, int a2);
// [0x18df2b0] (442 bytes) hkServerDebugDisplayHandler::updateGeometries(hkTransformf const*,unsigned long const*,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::updateGeometries( hkServerDebugDisplayHandler *this, const hkTransformf *a2, const unsigned int *a3, int a4, int a5, int a6);
// [0x18df480] (346 bytes) hkServerDebugDisplayHandler::holdImmediate(void)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::holdImmediate( hkServerDebugDisplayHandler *this, int a2);
// [0x18df5f0] (394 bytes) hkServerDebugDisplayHandler::removeGeometry(unsigned long,int,unsigned long)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::removeGeometry( hkServerDebugDisplayHandler *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0x18df790] (410 bytes) hkServerDebugDisplayHandler::sendMemStatsDump(char const*,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::sendMemStatsDump( hkServerDebugDisplayHandler *this, const char *a2, void *a3, int a4);
// [0x18df940] (394 bytes) hkServerDebugDisplayHandler::updateGeometry(hkTransformf const&,unsigned long,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::updateGeometry( hkServerDebugDisplayHandler *this, const hkTransformf *a2, hkTransformf *a3, unsigned int a4, int a5);
// [0x18dfae0] (426 bytes) hkServerDebugDisplayHandler::setGeometryTransparency(float,unsigned long,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::setGeometryTransparency( hkServerDebugDisplayHandler *this, float a2, float a3, unsigned int a4, int a5);
// [0x18dfca0] (426 bytes) hkServerDebugDisplayHandler::setGeometryColor(unsigned int,unsigned long,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::setGeometryColor( hkServerDebugDisplayHandler *this, unsigned int a2, unsigned int a3, unsigned int a4, int a5);
// [0x18dfe60] (426 bytes) hkServerDebugDisplayHandler::setGeometryPickable(hkBool,unsigned long,int)
// bool *hkServerDebugDisplayHandler::setGeometryPickable( bool *a1, int a2, char a3, unsigned int a4, int a5);
// [0x18e0020] (426 bytes) hkServerDebugDisplayHandler::updateGeometry(hkMatrix4f const&,unsigned long,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::updateGeometry( hkServerDebugDisplayHandler *this, const hkMatrix4f *a2, float *a3, unsigned int a4, int a5);
// [0x18e01e0] (442 bytes) hkServerDebugDisplayHandler::displayPoint(hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayPoint( hkServerDebugDisplayHandler *this, const hkVector4f *a2, hkVector4f *a3, int a4, int a5, int a6);
// [0x18e03b0] (458 bytes) hkServerDebugDisplayHandler::addGeometryInstance(unsigned long,hkTransformf const&,unsigned long,int,unsigned long)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::addGeometryInstance( hkServerDebugDisplayHandler *this, unsigned int a2, const hkTransformf *a3, const hkTransformf *a4, unsigned int a5, unsigned int a6);
// [0x18e0590] (458 bytes) hkServerDebugDisplayHandler::displayLine(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayLine( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, hkVector4f *a4, int a5, int a6, int a7);
// [0x18e0770] (458 bytes) hkServerDebugDisplayHandler::displayBone(hkVector4f const&,hkVector4f const&,hkQuaternionf const&,unsigned int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayBone( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, const hkQuaternionf *a4, float *a5, int a6, int a7);
// [0x18e0950] (511 bytes) hkServerDebugDisplayHandler::displayAnnotation(char const*,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayAnnotation( hkServerDebugDisplayHandler *this, const char *a2, hkString *a3, int a4, int a5);
// [0x18e0b60] (512 bytes) hkServerDebugDisplayHandler::displayText(char const*,unsigned int,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayText( hkServerDebugDisplayHandler *this, const char *a2, hkString *a3, int a4, int a5, int a6);
// [0x18e0d70] (522 bytes) hkServerDebugDisplayHandler::updateCamera(hkVector4f const&,hkVector4f const&,hkVector4f const&,float,float,float,char const*)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::updateCamera( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5, float a6, float a7, const char *a8, hkString *a9);
// [0x18e0f90] (610 bytes) hkServerDebugDisplayHandler::display3dText(char const*,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::display3dText( hkServerDebugDisplayHandler *this, const char *a2, const hkVector4f *a3, float *a4, int a5, int a6, int a7);
// [0x18e1210] (805 bytes) hkServerDebugDisplayHandler::addGeometryHash(hkReferencedObject const*,hkDisplayGeometryBuilder *,unsigned long long const&,hkAabb const&,unsigned int,hkTransformf const&,unsigned long,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::addGeometryHash( hkServerDebugDisplayHandler *this, pthread_mutex_t **a2, hkDisplayGeometryBuilder *a3, const uint64_t *a4, const hkAabb *a5, hkAabb *a6, const hkTransformf *a7, hkTransformf *a8, unsigned int a9, int a10);
// [0x18e1550] (686 bytes) hkServerDebugDisplayHandler::skinGeometry(unsigned long *,int,hkMatrix4f const*,int,hkMatrix4f const&,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::skinGeometry( hkServerDebugDisplayHandler *this, unsigned int *a2, int a3, const hkMatrix4f *a4, float *a5, const hkMatrix4f *a6, float *a7, int a8);
// [0x18e1810] (666 bytes) hkServerDebugDisplayHandler::displayTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::displayTriangle( hkServerDebugDisplayHandler *this, pthread_mutex_t **a2, const hkVector4f *a3, const hkVector4f *a4, int *a5, int a6, int a7, int a8);
// [0x18e1ac0] (436 bytes) hkServerDebugDisplayHandler::updateGeometryVerts(unsigned long,hkArray<hkVector4f,hkContainerHeapAllocator> const&,int)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::updateGeometryVerts( hkServerDebugDisplayHandler *this, unsigned int a2, const hkArray<hkVector4f, hkContainerHeapAllocator> *a3, uint32_t *a4, int a5);
// [0x18e1c80] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::updateGeometryVerts(unsigned long,hkArray<hkVector4f,hkContainerHeapAllocator> const&,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::updateGeometryVerts( hkServerDebugDisplayHandler *this, unsigned int a2, const hkArray<hkVector4f, hkContainerHeapAllocator> *a3, uint32_t *a4, int a5);
// [0x18e1c90] (781 bytes) hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler()
// void hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler(hkServerDebugDisplayHandler *this);
// [0x18e1fc0] (93 bytes) hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler()
// void hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler(hkServerDebugDisplayHandler *this);
// [0x18e2040] (553 bytes) hkServerDebugDisplayHandler::hkServerDebugDisplayHandler(hkDisplaySerializeOStream *,hkDisplaySerializeIStream *)
// void hkServerDebugDisplayHandler::hkServerDebugDisplayHandler( hkServerDebugDisplayHandler *this, hkDisplaySerializeOStream *a2, hkDisplaySerializeIStream *a3);
// [0x18e2270] (301 bytes) hkServerDebugDisplayHandler::sendGeometryData(hkArrayBase<hkDisplayGeometry *> const&)
// int hkServerDebugDisplayHandler::sendGeometryData(int a1, uint32_t *a2);
// [0x18e23b0] (565 bytes) hkServerDebugDisplayHandler::addGeometry(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned long,int,unsigned long,hkGeometry::GeometryType)
// bool *hkServerDebugDisplayHandler::addGeometry( bool *a1, int a2, uint32_t *a3, hkTransformf *a4, unsigned int a5, int a6, int a7, int a8);
// [0x18e2600] (548 bytes) hkServerDebugDisplayHandler::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned int,int,int)
// bool *hkServerDebugDisplayHandler::displayGeometry( bool *a1, int a2, uint32_t *a3, hkTransformf *a4, int a5, int a6, int a7);
// [0x18e2840] (516 bytes) hkServerDebugDisplayHandler::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,unsigned int,int,int)
// bool *hkServerDebugDisplayHandler::displayGeometry( bool *a1, int a2, uint32_t *a3, int a4, int a5, int a6);
// [0x18e2a60] (484 bytes) hkServerDebugDisplayHandler::useGeometryForHash(hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> const&,unsigned long long const&,hkBool)
// bool *hkServerDebugDisplayHandler::useGeometryForHash( bool *a1, int a2, uint32_t *a3, uint64_t *a4, char a5);
// [0x18e2c50] (107 bytes) hkServerDebugDisplayHandler::findIndexForGeometryAwaitingRequest(unsigned long long const&)const
// int hkServerDebugDisplayHandler::findIndexForGeometryAwaitingRequest( hkServerDebugDisplayHandler *this, const uint64_t *a2);
// [0x18e2cc0] (349 bytes) hkServerDebugDisplayHandler::processGeometryWithHashNotRequested(unsigned long long const&)
// unsigned int hkServerDebugDisplayHandler::processGeometryWithHashNotRequested( hkServerDebugDisplayHandler *this, uint64_t *a2);
// [0x18e2e20] (205 bytes) hkServerDebugDisplayHandler::processGeometryWithHashRequested(unsigned long long const&)
// int hkServerDebugDisplayHandler::processGeometryWithHashRequested( hkServerDebugDisplayHandler *this, uint64_t *a2);
// [0x18e2ef0] (288 bytes) hkServerDebugDisplayHandler::consumeCommand(unsigned char)
// void hkServerDebugDisplayHandler::consumeCommand(hkDisplaySerializeIStream **this, uint8_t a2);
// [0x18e3020] (666 bytes) hkServerDebugDisplayHandler::addGeometryPart(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned long,int,unsigned long,hkBool)
// bool *hkServerDebugDisplayHandler::addGeometryPart( bool *a1, int a2, uint32_t *a3, hkTransformf *a4, unsigned int a5, int a6, int a7, char a8);
// [0x18e32c0] (1533 bytes) hkServerDebugDisplayHandler::buildAndSendGeometries(void)
// int hkServerDebugDisplayHandler::buildAndSendGeometries(hkServerDebugDisplayHandler *this);
// [0x18e38c0] (34 bytes) hkServerDebugDisplayHandler::step(float)
// int hkServerDebugDisplayHandler::step(hkServerDebugDisplayHandler *this);
// [0x18e3900] (815 bytes) hkServerDebugDisplayHandler::addGeometryInParts(hkReferencedObject const*,hkDisplayGeometryBuilder *,hkTransformf const&,unsigned long,int,unsigned long)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::addGeometryInParts( hkServerDebugDisplayHandler *this, const hkReferencedObject *a2, hkDisplayGeometryBuilder *a3, const hkTransformf *a4, int a5, int a6, hkReferencedObject **a7, hkServerDebugDisplayHandler *a8);
// [0x18e3c30] (160 bytes) hkServerDebugDisplayHandler::addGeometryLazily(hkReferencedObject const*,hkDisplayGeometryBuilder *,hkTransformf const&,unsigned long,int,unsigned long)
// hkServerDebugDisplayHandler *hkServerDebugDisplayHandler::addGeometryLazily( hkServerDebugDisplayHandler *this, const hkReferencedObject *a2, hkDisplayGeometryBuilder *a3, const hkTransformf *a4, unsigned int a5, int a6, hkReferencedObject **a7, hkServerDebugDisplayHandler *a8);
// [0x18e3ce0] (289 bytes) hkProcessFactory::~hkProcessFactory()
// void hkProcessFactory::~hkProcessFactory(hkProcessFactory *this);
// [0x18e3e10] (93 bytes) hkProcessFactory::~hkProcessFactory()
// void hkProcessFactory::~hkProcessFactory(hkProcessFactory *this);
// [0x18e3e70] (457 bytes) hkProcessFactory::hkProcessFactory(void)
// void hkProcessFactory::hkProcessFactory(hkProcessFactory *this);
// [0x18e4090] (604 bytes) hkProcessFactory::registerProcess(char const*,hkProcess * (*)(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&))
// int hkProcessFactory::registerProcess(int a1, char *a2, int a3);
