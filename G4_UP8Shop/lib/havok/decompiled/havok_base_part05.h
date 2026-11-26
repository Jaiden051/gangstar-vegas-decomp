#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_base_part05.h
// Library: havok | Module: havok_base_part05
// Binary Address Span: 0x187aae0 .. 0x18b3eb0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x187aae0] (22 bytes) hkxVertexAnimation::staticClass(void)
// void *hkxVertexAnimation::staticClass();
// [0x187add0] (22 bytes) hkxVertexDescription::ElementDecl::staticClass(void)
// void *hkxVertexDescription::ElementDecl::staticClass();
// [0x187adf0] (22 bytes) hkxVertexDescription::staticClass(void)
// void *hkxVertexDescription::staticClass();
// [0x187afa0] (1610 bytes) hkxScene::~hkxScene()
// void hkxScene::~hkxScene(hkxScene *this);
// [0x187b5f0] (93 bytes) hkxScene::~hkxScene()
// void hkxScene::~hkxScene(hkxScene *this);
// [0x187b650] (434 bytes) hkxScene::hkxScene(void)
// void hkxScene::hkxScene(hkxScene *this);
// [0x187b810] (106 bytes) hkxScene::findNodeByName(char const*)const
// hkxNode *hkxScene::findNodeByName(hkxScene *this, char *a2);
// [0x187b880] (69 bytes) hkxScene::getFullPathToNode(hkxNode const*,hkArray<hkxNode const*,hkContainerHeapAllocator> &)const
// int *hkxScene::getFullPathToNode(int *a1, int a2, int a3, hkMemoryAllocator *a4);
// [0x187b8d0] (1287 bytes) hkxScene::getWorldFromNodeTransform(hkxNode const*,hkMatrix4f &,int)const
// hkxScene *hkxScene::getWorldFromNodeTransform( hkxScene *this, const hkxNode *a2, hkMatrix4f *a3, int32_t *a4, int a5);
// [0x187bec0] (22 bytes) hkxEnvironment::Variable::staticClass(void)
// void *hkxEnvironment::Variable::staticClass();
// [0x187bee0] (22 bytes) hkxEnvironment::staticClass(void)
// void *hkxEnvironment::staticClass();
// [0x187c0d0] (901 bytes) hkxMeshSection::~hkxMeshSection()
// void hkxMeshSection::~hkxMeshSection(hkxMeshSection *this);
// [0x187c460] (957 bytes) hkxMeshSection::~hkxMeshSection()
// void hkxMeshSection::~hkxMeshSection(hkxMeshSection *this);
// [0x187c820] (22 bytes) hkxMeshSection::staticClass(void)
// void *hkxMeshSection::staticClass();
// [0x187c910] (1673 bytes) hkxMeshSection::hkxMeshSection(hkxMeshSection const&)
// void hkxMeshSection::hkxMeshSection(hkxMeshSection *this, const hkxMeshSection *a2);
// [0x187cfa0] (87 bytes) hkxMeshSection::getNumTriangles(void)const
// int hkxMeshSection::getNumTriangles(hkxMeshSection *this);
// [0x187d000] (137 bytes) hkxMeshSection::getTriangleIndices(unsigned int,unsigned int &,unsigned int &,unsigned int &)const
// void hkxMeshSection::getTriangleIndices( hkxMeshSection *this, unsigned int a2, unsigned int *a3, unsigned int *a4, unsigned int *a5);
// [0x187d090] (347 bytes) hkxMeshSection::collectVertexPositions(hkArray<hkVector4f,hkContainerHeapAllocator> &)const
// hkxVertexBuffer *hkxMeshSection::collectVertexPositions( hkxMeshSection *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x187d1f0] (661 bytes) hkxMeshSection::appendGeometry(hkGeometry &,int)
// int hkxMeshSection::appendGeometry(hkxMeshSection *this, hkGeometry *a2, int a3);
// [0x187d4d0] (164 bytes) hkxSparselyAnimatedBool::~hkxSparselyAnimatedBool()
// void hkxSparselyAnimatedBool::~hkxSparselyAnimatedBool(hkxSparselyAnimatedBool *this);
// [0x187d580] (221 bytes) hkxSparselyAnimatedBool::~hkxSparselyAnimatedBool()
// void hkxSparselyAnimatedBool::~hkxSparselyAnimatedBool(hkxSparselyAnimatedBool *this);
// [0x187d660] (22 bytes) hkxSparselyAnimatedBool::staticClass(void)
// void *hkxSparselyAnimatedBool::staticClass();
// [0x187d750] (61 bytes) hkAlignSceneToNodeOptions::~hkAlignSceneToNodeOptions()
// void hkAlignSceneToNodeOptions::~hkAlignSceneToNodeOptions(hkAlignSceneToNodeOptions *this);
// [0x187d790] (118 bytes) hkAlignSceneToNodeOptions::~hkAlignSceneToNodeOptions()
// void hkAlignSceneToNodeOptions::~hkAlignSceneToNodeOptions(hkAlignSceneToNodeOptions *this);
// [0x187d810] (56 bytes) hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(void)
// void hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(hkAlignSceneToNodeOptions *this);
// [0x187d850] (57 bytes) hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(hkFinishLoadedObjectFlag)
// void hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(uint32_t *a1);
// [0x187d890] (12 bytes) hkAlignSceneToNodeOptions::getNodeName(void)
// char *hkAlignSceneToNodeOptions::getNodeName(hkAlignSceneToNodeOptions *this);
// [0x187d8a0] (45 bytes) hkAlignSceneToNodeOptions::setNodeName(char const*)
// hkStringPtr *hkAlignSceneToNodeOptions::setNodeName(hkAlignSceneToNodeOptions *this, hkString *a2);
// [0x187d8d0] (228 bytes) hkxEnvironment::~hkxEnvironment()
// void hkxEnvironment::~hkxEnvironment(hkxEnvironment *this);
// [0x187d9c0] (173 bytes) hkxEnvironment::~hkxEnvironment()
// void hkxEnvironment::~hkxEnvironment(hkxEnvironment *this);
// [0x187da70] (55 bytes) hkxEnvironment::hkxEnvironment(void)
// void hkxEnvironment::hkxEnvironment(hkxEnvironment *this);
// [0x187dab0] (29 bytes) hkxEnvironment::hkxEnvironment(hkFinishLoadedObjectFlag)
// uint32_t *hkxEnvironment::hkxEnvironment(uint32_t *a1);
// [0x187dad0] (112 bytes) hkxEnvironment::clear(void)
// void hkxEnvironment::clear(hkxEnvironment *this);
// [0x187db40] (102 bytes) hkxEnvironment::findVariableByName(char const*)const
// int hkxEnvironment::findVariableByName(hkxEnvironment *this, char *a2);
// [0x187dbb0] (68 bytes) hkxEnvironment::getVariableValue(char const*)const
// unsigned int hkxEnvironment::getVariableValue(hkxEnvironment *this, char *a2);
// [0x187dc00] (421 bytes) hkxEnvironment::setVariable(char const*,char const*)
// hkxEnvironment *hkxEnvironment::setVariable(hkxEnvironment *this, hkxEnvironment *a2, char *a3, hkString *a4);
// [0x187ddb0] (12 bytes) hkxEnvironment::getNumVariables(void)const
// int hkxEnvironment::getNumVariables(hkxEnvironment *this);
// [0x187ddc0] (18 bytes) hkxEnvironment::getVariableName(int)const
// unsigned int hkxEnvironment::getVariableName(hkxEnvironment *this, int a2);
// [0x187dde0] (19 bytes) hkxEnvironment::getVariableValue(int)const
// unsigned int hkxEnvironment::getVariableValue(hkxEnvironment *this, int a2);
// [0x187de00] (385 bytes) hkxEnvironment::convertToString(hkStringBuf &)const
// int hkxEnvironment::convertToString(hkxEnvironment *this, hkStringBuf *a2);
// [0x187df90] (1102 bytes) hkxEnvironment::interpretString(char const*)
// hkxEnvironment *hkxEnvironment::interpretString(hkxEnvironment *this, char *a2, hkString *a3);
// [0x187e3e0] (104 bytes) hkxEnum::getNameOfValue(int,char const**)const
// hkxEnum *hkxEnum::getNameOfValue(hkxEnum *this, int a2, const char **a3, unsigned int *a4);
// [0x187e450] (141 bytes) hkxEnum::getValueOfName(char const*,int *)const
// hkxEnum *hkxEnum::getValueOfName(hkxEnum *this, const char *a2, hkString *a3, uint32_t *a4);
// [0x187e4e0] (65 bytes) hkxIndexBuffer::getNumTriangles(void)const
// int hkxIndexBuffer::getNumTriangles(hkxIndexBuffer *this);
// [0x187e530] (322 bytes) hkxIndexBuffer::getTriangleIndices(unsigned int,unsigned int &,unsigned int &,unsigned int &)
// int hkxIndexBuffer::getTriangleIndices( hkxIndexBuffer *this, unsigned int a2, unsigned int *a3, unsigned int *a4, unsigned int *a5);
// [0x187e680] (43 bytes) hkxAttribute::hkxAttribute(void)
// void hkxAttribute::hkxAttribute(hkxAttribute *this);
// [0x187e6b0] (42 bytes) hkxAttribute::hkxAttribute(hkFinishLoadedObjectFlag)
// void hkxAttribute::hkxAttribute();
// [0x187e6e0] (53 bytes) hkxAttribute::setValue(hkReferencedObject *,hkClass const*)
// int hkxAttribute::setValue(hkxAttribute *this, hkReferencedObject *a2, const hkClass *a3);
// [0x187e730] (22 bytes) hkPackfileHeader::staticClass(void)
// void *hkPackfileHeader::staticClass();
// [0x187e820] (29 bytes) hkTagfileReader::~hkTagfileReader()
// void hkTagfileReader::~hkTagfileReader(hkTagfileReader *this);
// [0x187e840] (29 bytes) hkTagfileWriter::AddDataObjectListener::~AddDataObjectListener()
// void hkTagfileWriter::AddDataObjectListener::~AddDataObjectListener( hkTagfileWriter::AddDataObjectListener *this);
// [0x187e860] (29 bytes) hkTagfileWriter::~hkTagfileWriter()
// void hkTagfileWriter::~hkTagfileWriter(hkTagfileWriter *this);
// [0x187e930] (29 bytes) hkVersionPatchManager::ClassWrapper::~ClassWrapper()
// void hkVersionPatchManager::ClassWrapper::~ClassWrapper(hkVersionPatchManager::ClassWrapper *this);
// [0x187e950] (51 bytes) hkTypeInfoRegistry::registerTypeInfo(hkTypeInfo const*)
// int hkTypeInfoRegistry::registerTypeInfo(hkTypeInfoRegistry *this, hkString **a2);
// [0x187e990] (88 bytes) hkTypeInfoRegistry::finishLoadedObject(void *,char const*)const
// hkTypeInfo *hkTypeInfoRegistry::finishLoadedObject(hkTypeInfoRegistry *this, void *a2, hkString *a3);
// [0x187e9f0] (53 bytes) hkTypeInfoRegistry::getTypeInfo(char const*)const
// int hkTypeInfoRegistry::getTypeInfo(hkTypeInfoRegistry *this, hkString *a2);
// [0x187ea30] (79 bytes) hkTypeInfoRegistry::cleanupLoadedObject(void *,char const*)const
// hkTypeInfo *hkTypeInfoRegistry::cleanupLoadedObject(hkTypeInfoRegistry *this, void *a2, hkString *a3);
// [0x187ea80] (156 bytes) hkTypeInfoRegistry::merge(hkTypeInfoRegistry const&)
// bool *hkTypeInfoRegistry::merge(hkTypeInfoRegistry *this, const hkTypeInfoRegistry *a2);
// [0x187ec90] (61 bytes) hkTypeInfoRegistry::~hkTypeInfoRegistry()
// void hkTypeInfoRegistry::~hkTypeInfoRegistry(hkTypeInfoRegistry *this);
// [0x187ee30] (96 bytes) hkVersionPatchManager::ClassWrapper::~ClassWrapper()
// void hkVersionPatchManager::ClassWrapper::~ClassWrapper(hkVersionPatchManager::ClassWrapper *this);
// [0x187ee90] (118 bytes) hkTypeInfoRegistry::~hkTypeInfoRegistry()
// void hkTypeInfoRegistry::~hkTypeInfoRegistry(hkTypeInfoRegistry *this);
// [0x187ef70] (96 bytes) hkTagfileWriter::~hkTagfileWriter()
// void hkTagfileWriter::~hkTagfileWriter(hkTagfileWriter *this);
// [0x187efd0] (96 bytes) hkTagfileWriter::AddDataObjectListener::~AddDataObjectListener()
// void hkTagfileWriter::AddDataObjectListener::~AddDataObjectListener( hkTagfileWriter::AddDataObjectListener *this);
// [0x187f030] (96 bytes) hkTagfileReader::~hkTagfileReader()
// void hkTagfileReader::~hkTagfileReader(hkTagfileReader *this);
// [0x187f2f0] (62 bytes) hkSerializeUtil::LoadOptions::getClassNameRegistry(void)const
// int hkSerializeUtil::LoadOptions::getClassNameRegistry(hkSerializeUtil::LoadOptions *this);
// [0x187f330] (62 bytes) hkSerializeUtil::LoadOptions::getTypeInfoRegistry(void)const
// int hkSerializeUtil::LoadOptions::getTypeInfoRegistry(hkSerializeUtil::LoadOptions *this);
// [0x187f370] (98 bytes) hkSerializeUtil::FormatDetails::verifiesPredicate(hkEnum<hkContentPredicate::PredicateIdEnum,unsigned short>)const
// uint32_t *hkSerializeUtil::FormatDetails::verifiesPredicate(uint32_t *a1, int a2, uint16_t a3);
// [0x187f3e0] (3216 bytes) hkSerializeUtil::detectFormat(hkStreamReader *,hkSerializeUtil::FormatDetails &,hkSerializeUtil::ErrorDetails *)
// int hkSerializeUtil::detectFormat(int a1, uint32_t *a2, uint32_t *a3);
// [0x1880070] (460 bytes) hkSerializeUtil::isLoadable(hkStreamReader *)
// int hkSerializeUtil::isLoadable(hkSerializeUtil *this);
// [0x1880240] (181 bytes) hkSerializeUtil::detectFormat(hkStreamReader *,hkSerializeUtil::ErrorDetails *)
// uint32_t *hkSerializeUtil::detectFormat(uint32_t *a1, int a2, uint32_t *a3);
// [0x1880820] (80 bytes) hkSerializeUtil::detectFormat(char const*,hkSerializeUtil::FormatDetails &,hkSerializeUtil::ErrorDetails *)
// void hkSerializeUtil::detectFormat(char *a1, uint32_t *a2, uint32_t *a3);
// [0x1880870] (1242 bytes) hkSerializeUtil::savePackfile(void const*,hkClass const&,hkStreamWriter *,hkPackfileWriter::Options const&,hkPackfileWriter::AddObjectListener *,hkSerializeUtil::SaveOptions)
// uint32_t *hkSerializeUtil::savePackfile(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, char a7);
// [0x1880d50] (881 bytes) hkSerializeUtil::saveTagfile(void const*,hkClass const&,hkStreamWriter *,hkPackfileWriter::AddObjectListener *,hkSerializeUtil::SaveOptions)
// uint32_t *hkSerializeUtil::saveTagfile( uint32_t *a1, void *a2, const hkClass *a3, int a4, int a5, char a6);
// [0x18810d0] (81 bytes) hkSerializeUtil::save(void const*,hkClass const&,hkStreamWriter *,hkSerializeUtil::SaveOptions)
// uint32_t *hkSerializeUtil::save(uint32_t *a1, void *a2, const hkClass *a3, int a4, char a5);
// [0x1881800] (1269 bytes) hkSerializeUtil::load(hkStreamReader *,hkSerializeUtil::ErrorDetails *,hkSerializeUtil::LoadOptions)
// int hkSerializeUtil::load(hkDataWorld *a1, hkStringPtr *a2, char a3, unsigned int a4, int a5);
// [0x1881d00] (102 bytes) hkSerializeUtil::load(char const*,hkSerializeUtil::ErrorDetails *,hkSerializeUtil::LoadOptions)
// int hkSerializeUtil::load(char *a1, hkStringPtr *a2, char a3, unsigned int a4, int a5);
// [0x1881d70] (350 bytes) hkSerializeUtil::load(void const*,int,hkSerializeUtil::ErrorDetails *,hkSerializeUtil::LoadOptions)
// int hkSerializeUtil::load( hkNativePackfileUtils *a1, size_t a2, hkStringPtr *a3, char a4, unsigned int a5, int a6);
// [0x1881ed0] (1761 bytes) hkSerializeUtil::loadOnHeap(hkStreamReader *,hkSerializeUtil::ErrorDetails *,hkSerializeUtil::LoadOptions)
// int hkSerializeUtil::loadOnHeap(int a1, hkSerializeUtil::LoadOptions *a2, int a3, int a4, unsigned int a5);
// [0x18825c0] (102 bytes) hkSerializeUtil::loadOnHeap(char const*,hkSerializeUtil::ErrorDetails *,hkSerializeUtil::LoadOptions)
// int hkSerializeUtil::loadOnHeap(char *a1, hkSerializeUtil::LoadOptions *a2, int a3, int a4, unsigned int a5);
// [0x1882630] (110 bytes) hkSerializeUtil::loadOnHeap(void const*,int,hkSerializeUtil::ErrorDetails *,hkSerializeUtil::LoadOptions)
// int hkSerializeUtil::loadOnHeap( void *a1, size_t a2, hkSerializeUtil::LoadOptions *a3, int a4, int a5, unsigned int a6);
// [0x18826e0] (145 bytes) hkRootLevelContainer::NamedVariant::NamedVariant(char const*,void *,hkClass const*)
// hkRootLevelContainer::NamedVariant *hkRootLevelContainer::NamedVariant::NamedVariant( hkRootLevelContainer::NamedVariant *this, hkString *a2, void *a3, const hkClass *a4);
// [0x1882780] (357 bytes) hkRootLevelContainer::NamedVariant::NamedVariant(char const*,hkVariant const&)
// hkStringPtr *hkRootLevelContainer::NamedVariant::NamedVariant(hkStringPtr *a1, hkString *a2, int a3);
// [0x18828f0] (61 bytes) hkRootLevelContainer::NamedVariant::NamedVariant(hkFinishLoadedObjectFlag)
// void hkRootLevelContainer::NamedVariant::NamedVariant();
// [0x1882930] (9 bytes) hkRootLevelContainer::hkRootLevelContainer(hkFinishLoadedObjectFlag)
// void hkRootLevelContainer::hkRootLevelContainer();
// [0x1882940] (337 bytes) hkRootLevelContainer::findObjectByType(char const*,void const*)const
// int hkRootLevelContainer::findObjectByType(hkRootLevelContainer *this, hkString *a2, const void *a3);
// [0x1882aa0] (182 bytes) hkRootLevelContainer::findObjectByName(char const*,void const*)const
// int hkRootLevelContainer::findObjectByName(hkRootLevelContainer *this, hkString *a2, const void *a3);
// [0x1882bb0] (29 bytes) hkResource::~hkResource()
// void hkResource::~hkResource(hkResource *this);
// [0x1882bd0] (9 bytes) hkResource::callDestructors(void)
// void hkResource::callDestructors();
// [0x1882cb0] (96 bytes) hkResource::~hkResource()
// void hkResource::~hkResource(hkResource *this);
// [0x1882d10] (384 bytes) hkNativePackfileUtils::validatePackfileHeader(void const*,char const**)
// hkNativePackfileUtils *hkNativePackfileUtils::validatePackfileHeader( hkNativePackfileUtils *this, char *a2, const char **a3);
// [0x1882e90] (148 bytes) hkNativePackfileUtils::getRequiredBufferSize(void const*,int)
// int hkNativePackfileUtils::getRequiredBufferSize(hkNativePackfileUtils *this);
// [0x1882f30] (2032 bytes) hkNativePackfileUtils::load(void const*,int,void *,int,hkTypeInfoRegistry const*)
// char *hkNativePackfileUtils::load( hkNativePackfileUtils *this, const void *a2, uint32_t *a3, void *a4, int a5, const hkTypeInfoRegistry *a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, char *a16, int a17, int a18, char *a19, int a20);
// [0x1883720] (283 bytes) hkNativePackfileUtils::load(void const*,int,hkTypeInfoRegistry const*)
// 0x1883720 hkNativePackfileUtils::load(void const*,int,hkTypeInfoRegistry const*)
// [0x1883840] (1600 bytes) hkNativePackfileUtils::loadInPlace(void *,int,hkTypeInfoRegistry const*,char const**)
// char *hkNativePackfileUtils::loadInPlace(hkNativePackfileUtils *this, void *a2, int a3, const char **a4);
// [0x1883e80] (130 bytes) hkNativePackfileUtils::getContentsClassName(void const*,int)
// char *hkNativePackfileUtils::getContentsClassName(hkNativePackfileUtils *this, const void *a2);
// [0x1883f10] (204 bytes) hkNativePackfileUtils::unload(void *,int)
// int hkNativePackfileUtils::unload(hkNativePackfileUtils *this);
// [0x18841a0] (225 bytes) hkNativePackfileUtils::unloadInPlace(void *,int)
// hkNativePackfileUtils *hkNativePackfileUtils::unloadInPlace(hkNativePackfileUtils *this);
// [0x1884290] (110 bytes) hkNativePackfileUtils::getImportsExports(void const*,hkArray<hkResource::Export,hkContainerHeapAllocator> &,hkArray<hkResource::Import,hkContainerHeapAllocator> &)
// int hkNativePackfileUtils::getImportsExports(int a1, int a2, int a3);
// [0x1884300] (53 bytes) LOCALNAMESPACE::hkNativeResource::getImportsExports(hkArray<hkResource::Import,hkContainerHeapAllocator> &,hkArray<hkResource::Export,hkContainerHeapAllocator> &)const
// int LOCALNAMESPACE::hkNativeResource::getImportsExports(int a1, int a2, int a3);
// [0x1884340] (137 bytes) getImportsExportsInPlace(void const*,hkArray<hkResource::Export,hkContainerHeapAllocator> &,hkArray<hkResource::Import,hkContainerHeapAllocator> &)
// void getImportsExportsInPlace(hkPackfileHeader *a1, int a2, int a3);
// [0x18843e0] (22 bytes) hkPackfileSectionHeader::staticClass(void)
// void *hkPackfileSectionHeader::staticClass();
// [0x18844d0] (53 bytes) hkContentPredicate::hkContentPredicate(hkEnum<hkContentPredicate::PredicateIdEnum,unsigned short>,char const*,bool (*)(hkVariant))
// int hkContentPredicate::hkContentPredicate(int a1, int16_t a2, int a3, int a4);
// [0x1884510] (66 bytes) hkContentPredicate::findPredicate(hkEnum<hkContentPredicate::PredicateIdEnum,unsigned short>)
// uint16_t *hkContentPredicate::findPredicate(int16_t a1);
// [0x1884560] (88 bytes) hkContentPredicate::mergePredicateList(hkContentPredicate*)
// void hkContentPredicate::mergePredicateList(hkContentPredicate *this);
// [0x18845c0] (29 bytes) hkClassNameRegistry::~hkClassNameRegistry()
// void hkClassNameRegistry::~hkClassNameRegistry(hkClassNameRegistry *this);
// [0x18845e0] (12 bytes) hkDynamicClassNameRegistry::getName(void)const
// int hkDynamicClassNameRegistry::getName(hkDynamicClassNameRegistry *this);
// [0x18845f0] (14 bytes) hkDynamicClassNameRegistry::setName(char const*)
// hkDynamicClassNameRegistry *hkDynamicClassNameRegistry::setName( hkDynamicClassNameRegistry *this, const char *a2);
// [0x1884600] (68 bytes) hkDynamicClassNameRegistry::registerList(hkClass const* const*)
// const hkClass *hkDynamicClassNameRegistry::registerList( hkDynamicClassNameRegistry *this, const hkClass *const *a2);
// [0x1884650] (29 bytes) hkBuiltinTypeRegistry::~hkBuiltinTypeRegistry()
// void hkBuiltinTypeRegistry::~hkBuiltinTypeRegistry(hkBuiltinTypeRegistry *this);
// [0x1884670] (22 bytes) hkDefaultBuiltinTypeRegistry::getTypeInfoRegistry(void)
// int hkDefaultBuiltinTypeRegistry::getTypeInfoRegistry();
// [0x1884690] (22 bytes) hkDefaultBuiltinTypeRegistry::getClassNameRegistry(void)
// int hkDefaultBuiltinTypeRegistry::getClassNameRegistry();
// [0x18846b0] (22 bytes) hkDefaultBuiltinTypeRegistry::getVtableClassRegistry(void)
// int hkDefaultBuiltinTypeRegistry::getVtableClassRegistry();
// [0x18846d0] (169 bytes) hkDynamicClassNameRegistry::merge(hkClassNameRegistry const&)
// const hkClassNameRegistry *hkDynamicClassNameRegistry::merge( hkDynamicClassNameRegistry *this, const hkClassNameRegistry *a2);
// [0x1884780] (29 bytes) hkDefaultBuiltinTypeRegistry::~hkDefaultBuiltinTypeRegistry()
// void hkDefaultBuiltinTypeRegistry::~hkDefaultBuiltinTypeRegistry(hkDefaultBuiltinTypeRegistry *this);
// [0x18847a0] (29 bytes) hkStaticClassNameRegistry::~hkStaticClassNameRegistry()
// void hkStaticClassNameRegistry::~hkStaticClassNameRegistry(hkStaticClassNameRegistry *this);
// [0x18847c0] (53 bytes) hkDynamicClassNameRegistry::getClassByName(char const*)const
// int hkDynamicClassNameRegistry::getClassByName(hkDynamicClassNameRegistry *this, hkString *a2);
// [0x1884800] (144 bytes) hkDynamicClassNameRegistry::merge(hkStringMap<hkClass const*,hkContainerHeapAllocator> const&)
// bool *hkDynamicClassNameRegistry::merge( int a1, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *a2);
// [0x1884890] (74 bytes) hkDynamicClassNameRegistry::registerClass(hkClass const*,char const*)
// int hkDynamicClassNameRegistry::registerClass( hkDynamicClassNameRegistry *this, const hkClass *a2, hkString *a3);
// [0x18848e0] (61 bytes) hkDynamicClassNameRegistry::~hkDynamicClassNameRegistry()
// void hkDynamicClassNameRegistry::~hkDynamicClassNameRegistry(hkDynamicClassNameRegistry *this);
// [0x1884920] (61 bytes) hkDefaultClassNameRegistry::~hkDefaultClassNameRegistry()
// void hkDefaultClassNameRegistry::~hkDefaultClassNameRegistry(hkDefaultClassNameRegistry *this);
// [0x1884960] (133 bytes) hkBuiltinTypeRegistry::addType(hkTypeInfo const*,hkClass const*)
// int hkBuiltinTypeRegistry::addType(hkBuiltinTypeRegistry *this, const hkTypeInfo *a2, const hkClass *a3);
// [0x18849f0] (96 bytes) hkStaticClassNameRegistry::~hkStaticClassNameRegistry()
// void hkStaticClassNameRegistry::~hkStaticClassNameRegistry(hkStaticClassNameRegistry *this);
// [0x1884a50] (118 bytes) hkDefaultClassNameRegistry::~hkDefaultClassNameRegistry()
// void hkDefaultClassNameRegistry::~hkDefaultClassNameRegistry(hkDefaultClassNameRegistry *this);
// [0x1884ad0] (96 bytes) hkDefaultBuiltinTypeRegistry::~hkDefaultBuiltinTypeRegistry()
// void hkDefaultBuiltinTypeRegistry::~hkDefaultBuiltinTypeRegistry(hkDefaultBuiltinTypeRegistry *this);
// [0x1884b30] (96 bytes) hkBuiltinTypeRegistry::~hkBuiltinTypeRegistry()
// void hkBuiltinTypeRegistry::~hkBuiltinTypeRegistry(hkBuiltinTypeRegistry *this);
// [0x1884b90] (118 bytes) hkDynamicClassNameRegistry::~hkDynamicClassNameRegistry()
// void hkDynamicClassNameRegistry::~hkDynamicClassNameRegistry(hkDynamicClassNameRegistry *this);
// [0x1884c10] (96 bytes) hkClassNameRegistry::~hkClassNameRegistry()
// void hkClassNameRegistry::~hkClassNameRegistry(hkClassNameRegistry *this);
// [0x1884c70] (200 bytes) hkDynamicClassNameRegistry::getClasses(hkArray<hkClass const*,hkContainerHeapAllocator> &)const
// bool *hkDynamicClassNameRegistry::getClasses(int a1, hkMemoryAllocator *a2);
// [0x1884e50] (621 bytes) hkDefaultBuiltinTypeRegistry::reinitialize(void)
// int hkDefaultBuiltinTypeRegistry::reinitialize();
// [0x1885160] (29 bytes) hkBinaryTagfileWriter::~hkBinaryTagfileWriter()
// void hkBinaryTagfileWriter::~hkBinaryTagfileWriter(hkBinaryTagfileWriter *this);
// [0x1885400] (96 bytes) hkBinaryTagfileWriter::~hkBinaryTagfileWriter()
// void hkBinaryTagfileWriter::~hkBinaryTagfileWriter(hkBinaryTagfileWriter *this);
// [0x1888250] (55 bytes) hkDataRefCounted::removeExternalReference(void)const
// hkDataRefCounted *hkDataRefCounted::removeExternalReference(hkDataRefCounted *this);
// [0x1888290] (71 bytes) hkDataObject_Value::asObject(void)const
// hkDataObject_Value *hkDataObject_Value::asObject(hkDataObject_Value *this, uint32_t *a2);
// [0x18882e0] (172 bytes) hkArray<hkDataClass_MemberInfo,hkContainerTempAllocator>::hkArray(int)
// void hkArray<hkDataClass_MemberInfo,hkContainerTempAllocator>::hkArray(hkArray_Raw *this, int a2);
// [0x1888390] (82 bytes) hkArray<hkDataClass_MemberInfo,hkContainerTempAllocator>::clearAndDeallocate(void)
// int hkArray<hkDataClass_MemberInfo,hkContainerTempAllocator>::clearAndDeallocate( hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator> *this);
// [0x188e790] (2880 bytes) hkBinaryTagfileWriter::save(hkDataObject const&,hkStreamWriter *,hkTagfileWriter::AddDataObjectListener *,hkTagfileWriter::Options const&)
// uint32_t *hkBinaryTagfileWriter::save(int a1, int a2, uint32_t *a3, int a4, int a5, int a6);
// [0x188f2d0] (199 bytes) hkTypeManager::~hkTypeManager()
// void hkTypeManager::~hkTypeManager(hkTypeManager *this);
// [0x188f3a0] (93 bytes) hkTypeManager::~hkTypeManager()
// void hkTypeManager::~hkTypeManager(hkTypeManager *this);
// [0x188f480] (22 bytes) hkTypeManager::Type::getTupleSize(void)const
// int hkTypeManager::Type::getTupleSize(hkTypeManager::Type *this);
// [0x188f4a0] (15 bytes) hkTypeManager::Type::getTypeName(void)const
// int hkTypeManager::Type::getTypeName(hkTypeManager::Type *this);
// [0x188f4b0] (62 bytes) hkTypeManager::Type::_calcHash(hkTypeManager::Type const*)
// int hkTypeManager::Type::_calcHash(hkTypeManager::Type *this);
// [0x188f4f0] (47 bytes) hkTypeManager::Type::calcHash(void)const
// int hkTypeManager::Type::calcHash(hkTypeManager::Type *this);
// [0x188f520] (69 bytes) hkTypeManager::Type::_equals(hkTypeManager::Type const&)const
// hkTypeManager::Type *hkTypeManager::Type::_equals( hkTypeManager::Type *this, const hkTypeManager::Type *a2, uint32_t *a3);
// [0x188f570] (18 bytes) hkTypeManager::Type::findTerminal(void)
// hkTypeManager::Type *hkTypeManager::Type::findTerminal(hkTypeManager::Type *this);
// [0x188f590] (431 bytes) hkTypeManager::Type::asText(hkTypeManager::Type const*,hkOstream &)
// int hkTypeManager::Type::asText(hkTypeManager::Type *this, const hkTypeManager::Type *a2);
// [0x188f740] (42 bytes) hkTypeManager::Type::asText(hkOstream &)const
// int hkTypeManager::Type::asText(hkTypeManager::Type *this, hkOstream *a2);
// [0x188f770] (121 bytes) hkTypeManager::Type::getTypePath(hkTypeManager::Type*,hkArray<hkTypeManager::Type*,hkContainerHeapAllocator> &)
// int hkTypeManager::Type::getTypePath(int a1, hkMemoryAllocator *a2);
// [0x188f7f0] (218 bytes) hkTypeManager::Type::_isEqual(hkTypeManager::Type const*,hkTypeManager::Type const*)
// hkTypeManager::Type *hkTypeManager::Type::_isEqual( hkTypeManager::Type *this, const hkTypeManager::Type *a2, const hkTypeManager::Type *a3);
// [0x188f8d0] (78 bytes) hkTypeManager::Type::isEqual(hkTypeManager::Type const*)const
// hkTypeManager::Type *hkTypeManager::Type::isEqual( hkTypeManager::Type *this, const hkTypeManager::Type *a2, hkTypeManager::Type *a3);
// [0x188f920] (386 bytes) hkTypeManager::_addType(hkTypeManager::Type const&)
// uint32_t *hkTypeManager::_addType(hkTypeManager *this, const hkTypeManager::Type *a2);
// [0x188fab0] (78 bytes) hkTypeManager::_addBuiltIn(hkTypeManager::SubType)
// uint32_t *hkTypeManager::_addBuiltIn(hkTypeManager *a1, int a2);
// [0x188fb00] (356 bytes) hkTypeManager::hkTypeManager(void)
// void hkTypeManager::hkTypeManager(hkTypeManager *this);
// [0x188fc70] (234 bytes) hkTypeManager::findTypesUsingClass(hkTypeManager::Type *,hkArray<hkTypeManager::Type *,hkContainerHeapAllocator> &)
// uint32_t *hkTypeManager::findTypesUsingClass(int a1, hkTypeManager::Type *a2, hkMemoryAllocator *a3);
// [0x188fd60] (535 bytes) hkTypeManager::removeClass(hkTypeManager::Type *)
// int hkTypeManager::removeClass(hkTypeManager *this, hkTypeManager::Type *a2);
// [0x188ff80] (211 bytes) hkTypeManager::garbageCollect(void)
// int hkTypeManager::garbageCollect(hkTypeManager *this);
// [0x1890060] (69 bytes) hkTypeManager::makePointer(hkTypeManager::Type *)
// uint32_t *hkTypeManager::makePointer(hkTypeManager *this, hkTypeManager::Type *a2);
// [0x18900b0] (61 bytes) hkTypeManager::makeArray(hkTypeManager::Type *)
// uint32_t *hkTypeManager::makeArray(hkTypeManager *this, hkTypeManager::Type *a2);
// [0x18900f0] (68 bytes) hkTypeManager::makeTuple(hkTypeManager::Type *,int)
// uint32_t *hkTypeManager::makeTuple(hkTypeManager *this, hkTypeManager::Type *a2, int a3);
// [0x1890140] (111 bytes) hkTypeManager::_isValidClassName(char const*)
// hkTypeManager *hkTypeManager::_isValidClassName(hkTypeManager *this, const char *a2);
// [0x18901b0] (53 bytes) hkTypeManager::getClass(char const*)const
// int hkTypeManager::getClass(hkTypeManager *this, hkString *a2);
// [0x18901f0] (330 bytes) hkTypeManager::renameClass(char const*,char const*)
// int hkTypeManager::renameClass(hkTypeManager *this, hkString *a2, hkString *a3);
// [0x1890340] (334 bytes) hkTypeManager::addClass(char const*)
// int hkTypeManager::addClass(hkTypeManager::Type **this, hkString *a2);
// [0x1890490] (143 bytes) hkTypeManager::replaceParent(hkTypeManager::Type *,hkTypeManager::Type *)
// hkTypeManager::Type *hkTypeManager::replaceParent( hkTypeManager *this, hkTypeManager::Type *a2, hkTypeManager::Type *a3);
// [0x1890520] (275 bytes) hkTypeManager::replaceTerminal(hkTypeManager::Type *,hkTypeManager::Type *)
// hkTypeManager::Type *hkTypeManager::replaceTerminal( hkTypeManager *this, hkTypeManager::Type *a2, hkTypeManager::Type *a3);
// [0x1890640] (50 bytes) hkTypeManager::makeArray(hkTypeManager::SubType)
// uint32_t *hkTypeManager::makeArray(hkTypeManager *a1, int a2);
// [0x1890680] (56 bytes) hkTypeManager::getClassPointer(char const*)
// uint32_t *hkTypeManager::getClassPointer(hkTypeManager::Type **this, hkString *a2);
// [0x18906c0] (237 bytes) hkTypeManager::isOwned(hkTypeManager::Type *)const
// hkTypeManager *hkTypeManager::isOwned(hkTypeManager *this, hkTypeManager::Type *a2, hkTypeManager::Type *a3);
// [0x18907b0] (316 bytes) hkTypeManager::copyType(hkTypeManager::Type *)
// hkTypeManager::Type *hkTypeManager::copyType(hkTypeManager *this, hkTypeManager::Type *a2);
// [0x18908f0] (415 bytes) hkTypeManager::appendTypeExpression(hkTypeManager::Type const*,hkOstream &)
// int hkTypeManager::appendTypeExpression(hkTypeManager *this, const hkTypeManager::Type *a2);
// [0x1890a90] (567 bytes) hkTypeManager::parseTypeExpression(char const*)
// uint32_t *hkTypeManager::parseTypeExpression(hkTypeManager *this, const char *a2);
// [0x1890cd0] (427 bytes) hkTypeManager::getType(hkLegacyType::Type,char const*,int)
// hkTypeManager::Type *hkTypeManager::getType(hkTypeManager *a1, char a2, hkString *a3, int a4);
// [0x1890e80] (277 bytes) hkTypeManager::getTerminalLegacyType(hkTypeManager::Type *,char const**)
// char hkTypeManager::getTerminalLegacyType(hkTypeManager::Type **this, hkTypeManager::Type *a2);
// [0x1890fa0] (179 bytes) hkTypeManager::getLegacyType(hkTypeManager::Type *,char const**,int &)
// char hkTypeManager::getLegacyType(hkTypeManager::Type ***this, hkTypeManager::Type *a2, const char **a3);
// [0x1891060] (235 bytes) hkTypeManager::Type::asString(void)const
// hkTypeManager::Type *hkTypeManager::Type::asString(hkTypeManager::Type *this, hkTypeManager::Type *a2);
// [0x1891150] (224 bytes) hkPackfileHeader::readHeader(hkStreamReader *,hkPackfileHeader&)
// hkPackfileHeader *hkPackfileHeader::readHeader( hkPackfileHeader *this, hkStreamReader *a2, hkPackfileHeader *a3);
// [0x1891230] (98 bytes) hkPackfileHeader::getSectionHeader(void const*,int)const
// char *hkPackfileHeader::getSectionHeader(hkPackfileHeader *this, uint32_t *a2, int a3);
// [0x18912a0] (50 bytes) hkPackfileHeader::getSectionHeader(void *,int)const
// char *hkPackfileHeader::getSectionHeader(hkPackfileHeader *this, uint32_t *a2, int a3);
// [0x18912e0] (389 bytes) hkPackfileHeader::readPredicates(hkStreamReader *,hkArray<unsigned short,hkContainerHeapAllocator> &)const
// hkPackfileHeader *hkPackfileHeader::readPredicates( hkPackfileHeader *this, hkStreamReader *a2, hkArray<unsigned short, hkContainerHeapAllocator> *a3, int *a4);
// [0x1891580] (26 bytes) hkStructureLayout::hkStructureLayout(void)
// void hkStructureLayout::hkStructureLayout(hkStructureLayout *this);
// [0x18915a0] (13 bytes) hkStructureLayout::hkStructureLayout(hkStructureLayout::LayoutRules const&)
// uint32_t *hkStructureLayout::hkStructureLayout(uint32_t *a1, uint32_t *a2);
// [0x1891ac0] (99 bytes) hkStructureLayout::computeMemberOffsetsInplace(hkClass &,hkPointerMap<hkClass const*,int,hkContainerHeapAllocator> &,unsigned int)const
// int hkStructureLayout::computeMemberOffsetsInplace( uint8_t *a1, unsigned int a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3, int a4);
// [0x1891b30] (29 bytes) hkXmlTagfileReader::~hkXmlTagfileReader()
// void hkXmlTagfileReader::~hkXmlTagfileReader(hkXmlTagfileReader *this);
// [0x1891b50] (96 bytes) hkXmlTagfileReader::~hkXmlTagfileReader()
// void hkXmlTagfileReader::~hkXmlTagfileReader(hkXmlTagfileReader *this);
// [0x1894970] (341 bytes) hkResult hkXmlStreamParser::getIntListAttribute<unsigned short>(char const*,hkArray<unsigned short,hkContainerHeapAllocator> &)const
// uint32_t *hkXmlStreamParser::getIntListAttribute<unsigned short>( uint32_t *a1, const char *a2, hkSubString *a3, hkMemoryAllocator *a4);
// [0x1894ad0] (61 bytes) hkXmlLexAnalyzer::~hkXmlLexAnalyzer()
// void hkXmlLexAnalyzer::~hkXmlLexAnalyzer(hkXmlLexAnalyzer *this);
// [0x1894b10] (118 bytes) hkXmlLexAnalyzer::~hkXmlLexAnalyzer()
// void hkXmlLexAnalyzer::~hkXmlLexAnalyzer(hkXmlLexAnalyzer *this);
// [0x1894b90] (264 bytes) hkXmlStreamParser::~hkXmlStreamParser()
// void hkXmlStreamParser::~hkXmlStreamParser(hkXmlStreamParser *this);
// [0x1894ca0] (319 bytes) hkXmlStreamParser::~hkXmlStreamParser()
// void hkXmlStreamParser::~hkXmlStreamParser(hkXmlStreamParser *this);
// [0x1895220] (4271 bytes) hkXmlTagfileReader::load(hkStreamReader *,hkDataWorld &)
// hkXmlTagfileReader *hkXmlTagfileReader::load( hkXmlTagfileReader *this, hkStreamReader *a2, hkDataWorld *a3, int a4);
// [0x18962d0] (769 bytes) hkXmlTagfileReader::readHeader(hkStreamReader *,hkXmlTagfile::Header &)
// uint32_t *hkXmlTagfileReader::readHeader(uint32_t *a1, int a2, hkStreamReader *a3, char **a4);
// [0x18967f0] (22 bytes) hkRootLevelContainer::NamedVariant::staticClass(void)
// void *hkRootLevelContainer::NamedVariant::staticClass();
// [0x1896810] (22 bytes) hkRootLevelContainer::staticClass(void)
// void *hkRootLevelContainer::staticClass();
// [0x1896ad0] (22 bytes) hkMemoryResourceContainer::staticClass(void)
// void *hkMemoryResourceContainer::staticClass();
// [0x1896af0] (22 bytes) hkMemoryResourceHandle::ExternalLink::staticClass(void)
// void *hkMemoryResourceHandle::ExternalLink::staticClass();
// [0x1896b10] (22 bytes) hkMemoryResourceHandle::staticClass(void)
// void *hkMemoryResourceHandle::staticClass();
// [0x1896b30] (22 bytes) hkResourceBase::staticClass(void)
// void *hkResourceBase::staticClass();
// [0x1896b50] (22 bytes) hkResourceContainer::staticClass(void)
// void *hkResourceContainer::staticClass();
// [0x1896b70] (22 bytes) hkResourceHandle::staticClass(void)
// void *hkResourceHandle::staticClass();
// [0x1896f40] (29 bytes) hkXmlTagfileWriter::~hkXmlTagfileWriter()
// void hkXmlTagfileWriter::~hkXmlTagfileWriter(hkXmlTagfileWriter *this);
// [0x1897110] (96 bytes) hkXmlTagfileWriter::~hkXmlTagfileWriter()
// void hkXmlTagfileWriter::~hkXmlTagfileWriter(hkXmlTagfileWriter *this);
// [0x189f230] (4478 bytes) hkXmlTagfileWriter::save(hkDataObject const&,hkStreamWriter *,hkTagfileWriter::AddDataObjectListener *,hkTagfileWriter::Options const&)
// 0x189f230 hkXmlTagfileWriter::save(hkDataObject const&,hkStreamWriter *,hkTagfileWriter::AddDataObjectListener *,hkTagfileWriter::Options const&)
// [0x18a03b0] (280 bytes) hkPackfileSectionHeader::getExports(void const*,hkArray<hkResource::Export,hkContainerHeapAllocator> &)const
// int hkPackfileSectionHeader::getExports(int a1, int a2, hkMemoryAllocator *a3);
// [0x18a04d0] (280 bytes) hkPackfileSectionHeader::getImports(void const*,hkArray<hkResource::Import,hkContainerHeapAllocator> &)const
// int hkPackfileSectionHeader::getImports(int a1, int a2, hkMemoryAllocator *a3);
// [0x18a05f0] (12 bytes) hkStaticClassNameRegistry::getName(void)const
// int hkStaticClassNameRegistry::getName(hkStaticClassNameRegistry *this);
// [0x18a0600] (62 bytes) hkStaticClassNameRegistry::hkStaticClassNameRegistry(hkClass * const*,int,char const*)
// void hkStaticClassNameRegistry::hkStaticClassNameRegistry( hkStaticClassNameRegistry *this, hkClass *const *a2, int a3, const char *a4);
// [0x18a0640] (62 bytes) hkStaticClassNameRegistry::hkStaticClassNameRegistry(hkClass const* const*,int,char const*)
// void hkStaticClassNameRegistry::hkStaticClassNameRegistry( hkStaticClassNameRegistry *this, const hkClass *const *a2, int a3, const char *a4);
// [0x18a0680] (60 bytes) hkStaticClassNameRegistry::checkIfReady(void)const
// int hkStaticClassNameRegistry::checkIfReady(hkStaticClassNameRegistry *this);
// [0x18a06c0] (131 bytes) hkStaticClassNameRegistry::getClassByName(char const*)const
// int hkStaticClassNameRegistry::getClassByName(hkClass ***this, hkString *a2);
// [0x18a0750] (215 bytes) hkStaticClassNameRegistry::getClasses(hkArray<hkClass const*,hkContainerHeapAllocator> &)const
// int hkStaticClassNameRegistry::getClasses(hkStaticClassNameRegistry *a1, int *a2);
// [0x18a0830] (41 bytes) hkSubStreamWriter::isOk(void)const
// hkSubStreamWriter *hkSubStreamWriter::isOk(hkSubStreamWriter *this, int a2);
// [0x18a0860] (40 bytes) hkSubStreamWriter::write(void const*,int)
// int hkSubStreamWriter::write(hkSubStreamWriter *this, const void *a2, int a3);
// [0x18a0890] (24 bytes) hkSubStreamWriter::flush(void)
// int hkSubStreamWriter::flush(hkSubStreamWriter *this);
// [0x18a08b0] (41 bytes) hkSubStreamWriter::seekTellSupported(void)const
// hkSubStreamWriter *hkSubStreamWriter::seekTellSupported(hkSubStreamWriter *this, int a2);
// [0x18a08e0] (65 bytes) hkSubStreamWriter::seek(int,hkStreamWriter::SeekWhence)
// int hkSubStreamWriter::seek(int a1, int a2);
// [0x18a0930] (29 bytes) hkSubStreamWriter::tell(void)const
// int hkSubStreamWriter::tell(hkSubStreamWriter *this);
// [0x18a0950] (29 bytes) hkSubStreamWriter::~hkSubStreamWriter()
// void hkSubStreamWriter::~hkSubStreamWriter(hkSubStreamWriter *this);
// [0x18a0970] (45 bytes) hkBinaryPackfileWriter::~hkBinaryPackfileWriter()
// void hkBinaryPackfileWriter::~hkBinaryPackfileWriter(hkBinaryPackfileWriter *this);
// [0x18a09a0] (96 bytes) hkSubStreamWriter::~hkSubStreamWriter()
// void hkSubStreamWriter::~hkSubStreamWriter(hkSubStreamWriter *this);
// [0x18a0a00] (93 bytes) hkBinaryPackfileWriter::~hkBinaryPackfileWriter()
// void hkBinaryPackfileWriter::~hkBinaryPackfileWriter(hkBinaryPackfileWriter *this);
// [0x18a0bb0] (179 bytes) hkBinaryPackfileWriter::hkBinaryPackfileWriter(hkPackfileWriter::Options const&)
// int hkBinaryPackfileWriter::hkBinaryPackfileWriter(hkPackfileWriter *a1, int a2);
// [0x18a0c70] (297 bytes) hkBinaryPackfileWriter::fillSectionTags(hkBinaryPackfileWriter::SaveContext &)
// char *hkBinaryPackfileWriter::fillSectionTags(int a1, int a2);
// [0x18a0da0] (222 bytes) hkBinaryPackfileWriter::writeClassName(hkBinaryPackfileWriter::SaveContext &,hkClass const&,int)
// int hkBinaryPackfileWriter::writeClassName(int a1, int a2, hkClass *a3, int a4);
// [0x18a0e80] (2842 bytes) hkBinaryPackfileWriter::writeAllObjects(hkBinaryPackfileWriter::SaveContext &)
// 0x18a0e80 hkBinaryPackfileWriter::writeAllObjects(hkBinaryPackfileWriter::SaveContext &)
// [0x18a19a0] (1648 bytes) hkBinaryPackfileWriter::doDeferredWrites(hkBinaryPackfileWriter::SaveContext &,int)
// 0x18a19a0 hkBinaryPackfileWriter::doDeferredWrites(hkBinaryPackfileWriter::SaveContext &,int)
// [0x18a2010] (1408 bytes) hkBinaryPackfileWriter::save(hkStreamWriter *,hkPackfileWriter::Options const&)
// 0x18a2010 hkBinaryPackfileWriter::save(hkStreamWriter *,hkPackfileWriter::Options const&)
// [0x18a2590] (29 bytes) hkDataRefCounted::~hkDataRefCounted()
// void hkDataRefCounted::~hkDataRefCounted(hkDataRefCounted *this);
// [0x18a25b0] (9 bytes) hkDataArrayImpl::getUnderlyingIntegerSize(void)const
// int hkDataArrayImpl::getUnderlyingIntegerSize();
// [0x18a25c0] (9 bytes) hkDataArrayImpl::swizzleObjectMember(char const*)const
// int hkDataArrayImpl::swizzleObjectMember();
// [0x18a25d0] (9 bytes) hkDataArrayImpl::asVec(int)const
// int hkDataArrayImpl::asVec();
// [0x18a25e0] (9 bytes) hkDataArrayImpl::setVec(int,float const*)
// void hkDataArrayImpl::setVec();
// [0x18a25f0] (9 bytes) hkDataArrayImpl::asString(int)const
// int hkDataArrayImpl::asString();
// [0x18a2600] (9 bytes) hkDataArrayImpl::setString(int,char const*)
// void hkDataArrayImpl::setString();
// [0x18a2610] (9 bytes) hkDataArrayImpl::asReal(int)const
// long double hkDataArrayImpl::asReal();
// [0x18a2620] (9 bytes) hkDataArrayImpl::setReal(int,float)
// void hkDataArrayImpl::setReal();
// [0x18a2630] (9 bytes) hkDataArrayImpl::asInt(int)const
// int hkDataArrayImpl::asInt();
// [0x18a2640] (9 bytes) hkDataArrayImpl::setInt(int,int)
// void hkDataArrayImpl::setInt();
// [0x18a2650] (9 bytes) hkDataArrayImpl::asInt64(int)const
// int64_t hkDataArrayImpl::asInt64();
// [0x18a2660] (9 bytes) hkDataArrayImpl::setInt64(int,long long)
// void hkDataArrayImpl::setInt64();
// [0x18a2670] (9 bytes) hkDataArrayImpl::asObject(int)const
// int hkDataArrayImpl::asObject();
// [0x18a2680] (9 bytes) hkDataArrayImpl::setObject(int,hkDataObjectImpl *)
// void hkDataArrayImpl::setObject();
// [0x18a2690] (9 bytes) hkDataArrayImpl::asArray(int)const
// int hkDataArrayImpl::asArray();
// [0x18a26a0] (9 bytes) hkDataArrayImpl::setArray(int,hkDataArrayImpl*)
// void hkDataArrayImpl::setArray();
// [0x18a26b0] (12 bytes) hkDataArrayImpl::asHalf(int)const
// hkDataArrayImpl *hkDataArrayImpl::asHalf(hkDataArrayImpl *this, int a2);
// [0x18a26c0] (9 bytes) hkDataArrayImpl::setHalf(int,hkHalf)
// void hkDataArrayImpl::setHalf();
// [0x18a26d0] (9 bytes) hkDataArrayImpl::setAll(hkBool const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a26e0] (9 bytes) hkDataArrayImpl::setAll(char const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a26f0] (9 bytes) hkDataArrayImpl::setAll(signed char const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2700] (9 bytes) hkDataArrayImpl::setAll(unsigned char const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2710] (9 bytes) hkDataArrayImpl::setAll(short const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2720] (9 bytes) hkDataArrayImpl::setAll(unsigned short const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2730] (9 bytes) hkDataArrayImpl::setAll(int const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2740] (9 bytes) hkDataArrayImpl::setAll(unsigned int const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2750] (9 bytes) hkDataArrayImpl::setAll(long long const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2760] (9 bytes) hkDataArrayImpl::setAll(unsigned long long const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2770] (9 bytes) hkDataArrayImpl::setAll(float const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2780] (9 bytes) hkDataArrayImpl::setAll(hkHalf const*,int)
// void hkDataArrayImpl::setAll();
// [0x18a2790] (12 bytes) hkDataWorldNative::getTypeManager(void)
// char *hkDataWorldNative::getTypeManager(hkDataWorldNative *this);
// [0x18a27a0] (29 bytes) hkDataClassImpl::~hkDataClassImpl()
// void hkDataClassImpl::~hkDataClassImpl(hkDataClassImpl *this);
// [0x18a27c0] (12 bytes) hkDataClassNative::getWorld(void)const
// int hkDataClassNative::getWorld(hkDataClassNative *this);
// [0x18a27d0] (29 bytes) hkDataArrayImpl::~hkDataArrayImpl()
// void hkDataArrayImpl::~hkDataArrayImpl(hkDataArrayImpl *this);
// [0x18a27f0] (12 bytes) hkDataArrayNative::getType(void)const
// int hkDataArrayNative::getType(hkDataArrayNative *this);
// [0x18a2800] (12 bytes) hkDataArrayNative::getWorld(void)const
// int hkDataArrayNative::getWorld(hkDataArrayNative *this);
// [0x18a2810] (22 bytes) hkDataArrayNative::getUnderlyingIntegerSize(void)const
// int hkDataArrayNative::getUnderlyingIntegerSize(hkDataArrayNative *this);
// [0x18a2830] (167 bytes) hkDataArrayNative::asStridedBasicArray(hkStridedBasicArray &)
// uint32_t *hkDataArrayNative::asStridedBasicArray(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x18a28e0] (9 bytes) hkDataArrayNative::setArray(int,hkDataArrayImpl *)
// void hkDataArrayNative::setArray();
// [0x18a28f0] (29 bytes) hkDataObjectImpl::~hkDataObjectImpl()
// void hkDataObjectImpl::~hkDataObjectImpl(hkDataObjectImpl *this);
// [0x18a2910] (9 bytes) hkDataObjectNative::getMemberIterator(void)const
// int hkDataObjectNative::getMemberIterator();
// [0x18a2920] (12 bytes) hkDataObjectNative::getNextMember(int)const
// int hkDataObjectNative::getNextMember(hkDataObjectNative *this, int a2);
// [0x18a2930] (9 bytes) hkDataObjectNative::destroy(void)
// void hkDataObjectNative::destroy();
// [0x18a2940] (9 bytes) hkDataObjectNative::assign(_hkDataObject_MemberHandle const*,hkDataArrayImpl *)
// void hkDataObjectNative::assign();
// [0x18a2950] (9 bytes) hkDataObjectNative::createdDuringPatching(void)const
// int hkDataObjectNative::createdDuringPatching();
// [0x18a2960] (9 bytes) hkDataObjectNative::destroyMember(char const*)
// void hkDataObjectNative::destroyMember();
// [0x18a2970] (13 bytes) hkDataWorldNative::getType(void)const
// hkDataWorldNative *hkDataWorldNative::getType(hkDataWorldNative *this);
// [0x18a2980] (9 bytes) hkDataWorldNative::newClass(hkDataClass::Cinfo const&)
// int hkDataWorldNative::newClass();
// [0x18a2990] (9 bytes) hkDataWorldNative::newArray(hkDataObject &,_hkDataObject_MemberHandle const*,hkDataClass_MemberInfo const&)const
// int hkDataWorldNative::newArray();
// [0x18a29a0] (29 bytes) hkDataArrayNative::~hkDataArrayNative()
// void hkDataArrayNative::~hkDataArrayNative(hkDataArrayNative *this);
// [0x18a29c0] (29 bytes) hkDataClassNative::~hkDataClassNative()
// void hkDataClassNative::~hkDataClassNative(hkDataClassNative *this);
// [0x18a29e0] (37 bytes) hkDataClassNative::getName(void)const
// int hkDataClassNative::getName(hkClass **this);
// [0x18a2a10] (76 bytes) hkDataArrayNative::getClass(void)const
// int hkDataArrayNative::getClass(hkDataArrayNative *this);
// [0x18a2a60] (76 bytes) hkDataObjectNative::getClass(void)const
// int hkDataObjectNative::getClass(hkDataObjectNative *this);
// [0x18a2ab0] (37 bytes) hkDataClassNative::getVersion(void)const
// int hkDataClassNative::getVersion(hkClass **this);
// [0x18a2ae0] (84 bytes) hkDataClassNative::getParent(void)const
// int hkDataClassNative::getParent(hkClass **this);
// [0x18a2b40] (130 bytes) hkDataClassNative::isSuperClass(hkDataClassImpl const*)const
// hkDataClassNative *hkDataClassNative::isSuperClass( hkDataClassNative *this, const hkDataClassImpl *a2, int a3);
// [0x18a2bd0] (37 bytes) hkDataClassNative::getNumDeclaredMembers(void)const
// int hkDataClassNative::getNumDeclaredMembers(hkClass **this);
// [0x18a2c00] (45 bytes) hkDataClassNative::getDeclaredMemberIndexByName(char const*)const
// int hkDataClassNative::getDeclaredMemberIndexByName(hkClass **this, char *a2);
// [0x18a2c30] (37 bytes) hkDataClassNative::getNumMembers(void)const
// int hkDataClassNative::getNumMembers(hkClass **this);
// [0x18a2c60] (47 bytes) hkDataObjectNative::isValid(int)const
// bool hkDataObjectNative::isValid(hkClass **this, int a2);
// [0x18a2c90] (45 bytes) hkDataClassNative::getMemberIndexByName(char const*)const
// int hkDataClassNative::getMemberIndexByName(hkClass **this, char *a2);
// [0x18a2cc0] (47 bytes) hkDataObjectNative::getMemberName(int)const
// int hkDataObjectNative::getMemberName(hkClass **this, int a2);
// [0x18a2cf0] (62 bytes) hkDataObjectNative::getMemberValue(int)const
// hkDataObjectNative *hkDataObjectNative::getMemberValue(hkDataObjectNative *this, int a2, int a3);
// [0x18a2d30] (61 bytes) hkDataArrayNative::clear(void)
// void hkDataArrayNative::clear(hkDataArrayNative *this);
// [0x18a2d70] (64 bytes) hkDataArrayNative::reserve(int)
// int hkDataArrayNative::reserve(hkDataArrayNative *this, int a2);
// [0x18a2db0] (57 bytes) hkDataArrayNative::getSize(void)const
// int hkDataArrayNative::getSize(hkVariantDataUtil **this);
// [0x18a2df0] (72 bytes) hkDataArrayNative::asVec(int)const
// unsigned int hkDataArrayNative::asVec(hkDataArrayNative *this, int a2);
// [0x18a2e40] (52 bytes) hkDataArrayNative::asString(int)const
// unsigned int hkDataArrayNative::asString(hkDataArrayNative *this, int a2);
// [0x18a2e80] (52 bytes) hkDataArrayNative::asReal(int)const
// void hkDataArrayNative::asReal(hkDataArrayNative *this, int a2);
// [0x18a2ec0] (59 bytes) hkDataArrayNative::asInt(int)const
// int64_t hkDataArrayNative::asInt(hkDataArrayNative *this, int a2);
// [0x18a2f00] (59 bytes) hkDataArrayNative::asInt64(int)const
// int64_t hkDataArrayNative::asInt64(hkDataArrayNative *this, int a2);
// [0x18a2f40] (134 bytes) hkDataArrayNative::setAll(unsigned char const*,int)
// char *hkDataArrayNative::setAll(hkDataArrayNative *this, uint8_t *a2, int a3);
// [0x18a2fd0] (75 bytes) hkDataArrayNative::setVec(int,float const*)
// int hkDataArrayNative::setVec(hkDataArrayNative *this, int a2, const float *a3);
// [0x18a3020] (60 bytes) hkDataArrayNative::setString(int,char const*)
// hkStringPtr *hkDataArrayNative::setString(hkStringPtr **this, int a2, hkString *a3);
// [0x18a3060] (64 bytes) hkDataArrayNative::setReal(int,float)
// int hkDataArrayNative::setReal(hkDataArrayNative *this, int a2, int a3);
// [0x18a30a0] (62 bytes) hkDataArrayNative::setHalf(int,hkHalf)
// int *hkDataArrayNative::setHalf(int a1, int a2, int16_t a3);
// [0x18a30e0] (69 bytes) hkDataArrayNative::setInt(int,int)
// char *hkDataArrayNative::setInt(char **this, int a2, int a3);
// [0x18a3130] (70 bytes) hkDataArrayNative::setInt64(int,long long)
// char *hkDataArrayNative::setInt64(char **this, int a2, int64_t a3);
// [0x18a3180] (91 bytes) hkDataObjectNative::getHandle(void)const
// hkDataObjectNative *hkDataObjectNative::getHandle(hkDataObjectNative *this, int a2);
// [0x18a31e0] (82 bytes) hkDataObjectNative::hasMember(char const*)const
// bool hkDataObjectNative::hasMember(hkDataObjectNative *this, char *a2);
// [0x18a3240] (160 bytes) hkDataObjectNative::accessByName(char const*)
// hkDataObjectNative *hkDataObjectNative::accessByName(hkDataObjectNative *this, const char *a2, char *a3);
// [0x18a32e0] (82 bytes) hkDataObjectNative::isSet(_hkDataObject_MemberHandle const*)
// bool hkDataObjectNative::isSet(int a1, hkClassMember *a2);
// [0x18a3340] (81 bytes) hkDataObjectNative::asString(_hkDataObject_MemberHandle const*)
// unsigned int hkDataObjectNative::asString(int a1, hkClassMember *a2);
// [0x18a33a0] (89 bytes) hkDataObjectNative::asInt(_hkDataObject_MemberHandle const*)
// int64_t hkDataObjectNative::asInt(int a1, hkClassMember *a2);
// [0x18a3400] (110 bytes) hkDataObjectNative::asVec(_hkDataObject_MemberHandle const*,int)
// unsigned int hkDataObjectNative::asVec(int a1, hkClassMember *a2);
// [0x18a3470] (81 bytes) hkDataObjectNative::asReal(_hkDataObject_MemberHandle const*)
// void hkDataObjectNative::asReal(int a1, hkClassMember *a2);
// [0x18a34d0] (89 bytes) hkDataObjectNative::assign(_hkDataObject_MemberHandle const*,char const*)
// hkStringPtr *hkDataObjectNative::assign(int a1, hkClassMember *a2, hkString *a3);
// [0x18a3530] (93 bytes) hkDataObjectNative::assign(_hkDataObject_MemberHandle const*,float)
// int hkDataObjectNative::assign(int a1, hkClassMember *a2, int a3);
// [0x18a3590] (114 bytes) hkDataObjectNative::assign(_hkDataObject_MemberHandle const*,hkHalf)
// int hkDataObjectNative::assign(int a1, hkClassMember *a2, int16_t a3);
// [0x18a3610] (111 bytes) hkDataObjectNative::assign(_hkDataObject_MemberHandle const*,float const*,int)
// int hkDataObjectNative::assign(int a1, hkClassMember *a2, unsigned int a3, int a4);
// [0x18a3680] (50 bytes) hkDataObjectNative::assign(_hkDataObject_MemberHandle const*,hkDataObject_Value const&)
// int hkDataObjectNative::assign(int a1, int a2, hkDataObject_Value *a3);
// [0x18a36c0] (193 bytes) hkDataObjectNative::assign(_hkDataObject_MemberHandle const*,hkDataObjectImpl *)
// int *hkDataObjectNative::assign(int a1, hkClassMember *a2, int a3);
// [0x18a3790] (81 bytes) hkDataArrayNative::setObject(int,hkDataObjectImpl *)
// int *hkDataArrayNative::setObject(hkDataArrayNative *this, int a2, hkDataObjectImpl *a3);
// [0x18a37f0] (115 bytes) hkDataObjectNative::assign(_hkDataObject_MemberHandle const*,long long)
// char *hkDataObjectNative::assign(int a1, hkClassMember *a2, int64_t a3);
// [0x18a3870] (104 bytes) hkDataObjectNative::assign(_hkDataObject_MemberHandle const*,int)
// char *hkDataObjectNative::assign(int a1, hkClassMember *a2, int a3);
// [0x18a38e0] (69 bytes) hkDataWorldNative::getTypeFromMemberType(hkClassMember::Type,hkClassMember::Type,hkClass const*,int)
// int hkDataWorldNative::getTypeFromMemberType(int a1, int a2, int a3, hkClass *a4, int a5);
// [0x18a3930] (287 bytes) hkDataWorldNative::findAllClasses(hkArray<hkDataClassImpl *,hkContainerTempAllocator> &)const
// int hkDataWorldNative::findAllClasses(uint32_t *a1, hkMemoryAllocator *a2);
// [0x18a3a50] (560 bytes) hkDataClassNative::getAllMemberInfo(hkArrayBase<hkDataClass_MemberInfo> &)const
// hkClass *hkDataClassNative::getAllMemberInfo(int a1, uint32_t *a2);
// [0x18a3c80] (144 bytes) hkDataObjectNative::getAllMemberHandles(hkArrayBase<_hkDataObject_MemberHandle const*> &)const
// int hkDataObjectNative::getAllMemberHandles(int a1, int *a2);
// [0x18a3d10] (88 bytes) hkDataArrayNative::setSize(int)
// int hkDataArrayNative::setSize(hkDataArrayNative *this, int a2);
// [0x18a3d70] (224 bytes) hkDataWorldNative::findClass(char const*)const
// int hkDataWorldNative::findClass(hkDataWorldNative *this, hkString *a2);
// [0x18a3e50] (96 bytes) hkDataClassNative::~hkDataClassNative()
// void hkDataClassNative::~hkDataClassNative(hkDataClassNative *this);
// [0x18a3eb0] (96 bytes) hkDataArrayNative::~hkDataArrayNative()
// void hkDataArrayNative::~hkDataArrayNative(hkDataArrayNative *this);
// [0x18a3f10] (152 bytes) hkDataWorldNative::getContents(void)const
// hkDataWorldNative *hkDataWorldNative::getContents(hkDataWorldNative *this, int a2);
// [0x18a3fb0] (843 bytes) hkDataObjectNative::asArray(_hkDataObject_MemberHandle const*)
// uint32_t *hkDataObjectNative::asArray(int a1, hkClassMember *a2, int a3, int a4, int a5, int a6, int a7);
// [0x18a4300] (96 bytes) hkDataObjectImpl::~hkDataObjectImpl()
// void hkDataObjectImpl::~hkDataObjectImpl(hkDataObjectImpl *this);
// [0x18a4360] (259 bytes) hkDataArrayNative::swizzleObjectMember(char const*)const
// uint32_t *hkDataArrayNative::swizzleObjectMember(hkClass **this, char *a2);
// [0x18a4470] (492 bytes) hkDataArrayNative::asArray(int)const
// uint32_t *hkDataArrayNative::asArray(hkDataArrayNative *this, int a2);
// [0x18a4660] (96 bytes) hkDataArrayImpl::~hkDataArrayImpl()
// void hkDataArrayImpl::~hkDataArrayImpl(hkDataArrayImpl *this);
// [0x18a46c0] (96 bytes) hkDataClassImpl::~hkDataClassImpl()
// void hkDataClassImpl::~hkDataClassImpl(hkDataClassImpl *this);
// [0x18a4720] (96 bytes) hkDataRefCounted::~hkDataRefCounted()
// void hkDataRefCounted::~hkDataRefCounted(hkDataRefCounted *this);
// [0x18a4780] (192 bytes) hkDataWorldNative::findObject(hkDataObject_Handle const&)const
// int *hkDataWorldNative::findObject(int *a1, int a2, void **a3);
// [0x18a4840] (107 bytes) hkDataArrayNative::setAll(int const*,int)
// void hkDataArrayNative::setAll(hkString **this, void *a2, int a3);
// [0x18a48b0] (107 bytes) hkDataArrayNative::setAll(long long const*,int)
// void hkDataArrayNative::setAll(hkString **this, int64_t *a2, int a3);
// [0x18a4920] (107 bytes) hkDataArrayNative::setAll(unsigned long long const*,int)
// void hkDataArrayNative::setAll(hkString **this, uint64_t *a2, int a3);
// [0x18a4990] (107 bytes) hkDataArrayNative::setAll(unsigned int const*,int)
// void hkDataArrayNative::setAll(hkString **this, void *a2, int a3);
// [0x18a4a00] (107 bytes) hkDataArrayNative::setAll(signed char const*,int)
// void hkDataArrayNative::setAll(hkString **this, char *a2, int a3);
// [0x18a4a70] (107 bytes) hkDataArrayNative::setAll(short const*,int)
// void hkDataArrayNative::setAll(hkString **this, int16_t *a2, int a3);
// [0x18a4ae0] (107 bytes) hkDataArrayNative::setAll(unsigned short const*,int)
// void hkDataArrayNative::setAll(hkString **this, uint16_t *a2, int a3);
// [0x18a4b50] (107 bytes) hkDataArrayNative::setAll(hkBool const*,int)
// void hkDataArrayNative::setAll(int a1, void *a2, int a3);
// [0x18a4bc0] (107 bytes) hkDataArrayNative::setAll(char const*,int)
// void hkDataArrayNative::setAll(hkString **this, char *a2, int a3);
// [0x18a4c30] (107 bytes) hkDataArrayNative::setAll(float const*,int)
// void hkDataArrayNative::setAll(hkString **this, float *a2, int a3);
// [0x18a4ca0] (107 bytes) hkDataArrayNative::setAll(hkHalf const*,int)
// void hkDataArrayNative::setAll(int a1, void *a2, int a3);
// [0x18a4d10] (118 bytes) hkDataObjectNative::~hkDataObjectNative()
// void hkDataObjectNative::~hkDataObjectNative(hkDataObjectNative *this);
// [0x18a4d90] (374 bytes) hkDataObjectNative::getMemberInfo(_hkDataObject_MemberHandle const*,hkDataClass_MemberInfo &)
// int hkDataObjectNative::getMemberInfo(int a1, hkClassMember *a2, uint32_t *a3);
// [0x18a4f10] (416 bytes) hkDataClassNative::getDeclaredMemberInfo(int,hkDataClass_MemberInfo &)const
// char *hkDataClassNative::getDeclaredMemberInfo(int a1, int a2, uint32_t *a3);
// [0x18a50b0] (416 bytes) hkDataClassNative::getMemberInfo(int,hkDataClass_MemberInfo &)const
// const hkClassMember *hkDataClassNative::getMemberInfo(int a1, const void **a2, uint32_t *a3);
// [0x18a5250] (177 bytes) hkDataObjectNative::~hkDataObjectNative()
// void hkDataObjectNative::~hkDataObjectNative(hkDataObjectNative *this);
// [0x18a5310] (604 bytes) hkDataWorldNative::hkDataWorldNative(hkBool)
// int hkDataWorldNative::hkDataWorldNative(int a1, char a2);
// [0x18a5570] (147 bytes) hkDataWorldNative::setClassRegistry(hkClassNameRegistry const*)
// int hkDataWorldNative::setClassRegistry(hkDataWorldNative *this, const hkClassNameRegistry *a2);
// [0x18a5610] (147 bytes) hkDataWorldNative::setVtableRegistry(hkVtableClassRegistry const*)
// int hkDataWorldNative::setVtableRegistry(hkDataWorldNative *this, const hkVtableClassRegistry *a2);
// [0x18a56b0] (159 bytes) hkDataWorldNative::setContents(void *,hkClass const&)
// hkClass *hkDataWorldNative::setContents(hkDataWorldNative *this, hkVariantDataUtil *a2, const hkClass *a3);
// [0x18a58d0] (249 bytes) hkDataWorldNative::newObject(hkDataClass const&,bool)const
// int hkDataWorldNative::newObject(hkDataWorldNative *this, const hkDataClass *a2);
// [0x18a59d0] (42 bytes) hkDataWorldNative::wrapObject(void *,hkClass const&)const
// int hkDataWorldNative::wrapObject(hkDataWorldNative *this, void *a2, const hkClass *a3);
// [0x18a5a00] (196 bytes) hkDataObjectNative::asObject(_hkDataObject_MemberHandle const*)
// int hkDataObjectNative::asObject(int a1, const hkClassMember *a2);
// [0x18a5ad0] (140 bytes) hkDataArrayNative::asObject(int)const
// int hkDataArrayNative::asObject(hkDataArrayNative *this, int a2);
// [0x18a5b60] (477 bytes) hkDataWorldNative::~hkDataWorldNative()
// void hkDataWorldNative::~hkDataWorldNative(hkDataWorldNative *this);
// [0x18a5d40] (93 bytes) hkDataWorldNative::~hkDataWorldNative()
// void hkDataWorldNative::~hkDataWorldNative(hkDataWorldNative *this);
// [0x18a5da0] (12 bytes) hkDataWorldDict::getTypeManager(void)
// char *hkDataWorldDict::getTypeManager(hkDataWorldDict *this);
// [0x18a5db0] (12 bytes) hkDataClassDict::getWorld(void)const
// int hkDataClassDict::getWorld(hkDataClassDict *this);
// [0x18a5dc0] (13 bytes) hkDataClassDict::getName(void)const
// int hkDataClassDict::getName(hkDataClassDict *this);
// [0x18a5dd0] (12 bytes) hkDataClassDict::getVersion(void)const
// int hkDataClassDict::getVersion(hkDataClassDict *this);
// [0x18a5de0] (12 bytes) hkDataClassDict::getParent(void)const
// int hkDataClassDict::getParent(hkDataClassDict *this);
// [0x18a5df0] (12 bytes) hkDataClassDict::getNumDeclaredMembers(void)const
// int hkDataClassDict::getNumDeclaredMembers(hkDataClassDict *this);
// [0x18a5e00] (47 bytes) hkDataClassDict::getDeclaredMemberInfo(int,hkDataClass_MemberInfo &)const
// uint32_t *hkDataClassDict::getDeclaredMemberInfo(int a1, int a2, uint32_t *a3);
// [0x18a5e30] (27 bytes) hkDataClassDict::getNumMembers(void)const
// int hkDataClassDict::getNumMembers(hkDataClassDict *this);
// [0x18a5e50] (95 bytes) hkDataClassDict::getMemberInfo(int,hkDataClass_MemberInfo &)const
// uint32_t *hkDataClassDict::getMemberInfo(uint32_t *a1, int a2, uint32_t *a3);
// [0x18a5eb0] (111 bytes) hkDataClassDict::getAllMemberInfo(hkArrayBase<hkDataClass_MemberInfo> &)const
// int *hkDataClassDict::getAllMemberInfo(uint32_t *a1, int *a2);
// [0x18a5f20] (12 bytes) hkDataObjectDict::createdDuringPatching(void)const
// int hkDataObjectDict::createdDuringPatching(hkDataObjectDict *this);
// [0x18a5f30] (20 bytes) hkDataObjectDict::getHandle(void)const
// hkDataObjectDict *hkDataObjectDict::getHandle(hkDataObjectDict *this, int a2);
// [0x18a5f50] (12 bytes) hkDataObjectDict::getClass(void)const
// int hkDataObjectDict::getClass(hkDataObjectDict *this);
// [0x18a5f60] (9 bytes) hkDataObjectDict::getMemberIterator(void)const
// int hkDataObjectDict::getMemberIterator();
// [0x18a5f70] (18 bytes) hkDataObjectDict::isValid(int)const
// bool hkDataObjectDict::isValid(hkDataObjectDict *this, int a2);
// [0x18a5f90] (12 bytes) hkDataObjectDict::getNextMember(int)const
// int hkDataObjectDict::getNextMember(hkDataObjectDict *this, int a2);
// [0x18a5fa0] (20 bytes) hkDataObjectDict::getMemberName(int)const
// int hkDataObjectDict::getMemberName(hkDataObjectDict *this, int a2);
// [0x18a5fc0] (31 bytes) hkDataObjectDict::getMemberValue(int)const
// hkDataObjectDict *hkDataObjectDict::getMemberValue(hkDataObjectDict *this, int a2, int a3);
// [0x18a5fe0] (32 bytes) hkDataObjectDict::getMemberInfo(_hkDataObject_MemberHandle const*,hkDataClass_MemberInfo &)
// uint32_t *hkDataObjectDict::getMemberInfo(int a1, int *a2, uint32_t *a3);
// [0x18a7480] (48 bytes) hkDataWorldDict::getContents(void)const
// hkDataWorldDict *hkDataWorldDict::getContents(hkDataWorldDict *this, int a2);
// [0x18a74b0] (13 bytes) hkDataWorldDict::getType(void)const
// hkDataWorldDict *hkDataWorldDict::getType(hkDataWorldDict *this);
// [0x18a74c0] (44 bytes) hkDataWorldDict::findObject(hkDataObject_Handle const&)const
// int *hkDataWorldDict::findObject(int *a1, int a2, int *a3);
// [0x18a74f0] (14 bytes) hkDataWorldDict::setClassVersion(hkDataClass &,int)
// int hkDataWorldDict::setClassVersion(hkDataWorldDict *this, hkDataClass *a2, int a3);
// [0x18a7940] (68 bytes) hkDataWorldDict::findClass(char const*)const
// int hkDataWorldDict::findClass(hkDataWorldDict *this, hkString *a2);
// [0x18a7fd0] (573 bytes) hkDataWorldDict::castObject(hkDataObject &,hkDataClass const&)
// unsigned int hkDataWorldDict::castObject(hkDataWorldDict *this, hkDataObject *a2, const hkDataClass *a3);
// [0x18a8210] (216 bytes) hkDataWorldDict::findAllClasses(hkArray<hkDataClassImpl *,hkContainerTempAllocator> &)const
// bool *hkDataWorldDict::findAllClasses(int a1, int *a2);
// [0x18a82f0] (87 bytes) hkDataObjectDict::isSet(_hkDataObject_MemberHandle const*)
// int hkDataObjectDict::isSet(int a1, uint32_t *a2);
// [0x18a8a00] (848 bytes) hkDataWorldDict::copyClassFromWorld(char const*,hkDataWorld const&)
// int hkDataWorldDict::copyClassFromWorld(hkDataWorldDict *this, const char *a2, const hkDataWorld *a3);
// [0x18aa6e0] (31 bytes) hkDataWorldDict::findObjectsByExactClass(char const*,hkArray<hkDataObjectImpl *,hkContainerTempAllocator> &)const
// uint32_t *hkDataWorldDict::findObjectsByExactClass(int a1, hkString *a2, hkMemoryAllocator *a3);
// [0x18aa700] (558 bytes) hkDataObjectDict::getAllMemberHandles(hkArrayBase<_hkDataObject_MemberHandle const*> &)const
// int hkDataObjectDict::getAllMemberHandles(int a1, int *a2);
// [0x18aaad0] (218 bytes) hkDataClassDict::isSuperClass(hkDataClassImpl const*)const
// hkDataClassDict *hkDataClassDict::isSuperClass(hkDataClassDict *this, const hkDataClassImpl *a2, int a3);
// [0x18aae90] (183 bytes) hkDataWorldDict::setClassMemberDefault(hkDataClass &,char const*,void const*)
// const void *hkDataWorldDict::setClassMemberDefault( hkDataWorldDict *this, hkDataClass *a2, hkString *a3, const void *a4);
// [0x18aaf50] (169 bytes) hkDataClassDict::getDeclaredMemberIndexByName(char const*)const
// int hkDataClassDict::getDeclaredMemberIndexByName(hkDataClassDict *this, hkString *a2);
// [0x18ab000] (526 bytes) hkDataWorldDict::renameClass(hkDataClass &,char const*)
// int hkDataWorldDict::renameClass(hkDataWorldDict *this, hkDataClass *a2, hkString *a3);
// [0x18ab310] (225 bytes) hkDataObjectDict::accessByName(char const*)
// hkDataObjectDict *hkDataObjectDict::accessByName(hkDataObjectDict *this, const char *a2, hkString *a3);
// [0x18ab5a0] (414 bytes) hkDataWorldDict::newObject(hkDataClass const&,bool)const
// void (***hkDataWorldDict::newObject( hkDataWorldDict *this, const hkDataClass *a2, bool a3))(hkDataObjectDict *__hidden this);
// [0x18ab740] (187 bytes) hkDataClassDict::getMemberIndexByName(char const*)const
// int hkDataClassDict::getMemberIndexByName(hkDataClassDict *this, hkString *a2);
// [0x18ab800] (248 bytes) hkDataObjectDict::hasMember(char const*)const
// bool hkDataObjectDict::hasMember(hkDataObjectDict *this, hkString *a2);
// [0x18ab900] (416 bytes) hkDataObjectDict::destroyMember(char const*)
// int hkDataObjectDict::destroyMember(hkDataObjectDict *this, hkString *a2);
// [0x18abaa0] (518 bytes) hkDataWorldDict::addClassMember(hkDataClass &,char const*,hkTypeManager::Type *,void const*)
// hkString *hkDataWorldDict::addClassMember( hkDataWorldDict *this, hkDataClass *a2, hkString *a3, hkTypeManager::Type *a4, hkString *a5);
// [0x18abcb0] (424 bytes) hkDataObjectDict::assign(_hkDataObject_MemberHandle const*,float)
// int hkDataObjectDict::assign(uint32_t *a1, int *a2, int a3);
// [0x18abe60] (440 bytes) hkDataObjectDict::assign(_hkDataObject_MemberHandle const*,hkHalf)
// int hkDataObjectDict::assign(uint32_t *a1, int *a2, int16_t a3);
// [0x18ac020] (440 bytes) hkDataObjectDict::assign(_hkDataObject_MemberHandle const*,hkDataObjectImpl *)
// int hkDataObjectDict::assign(uint32_t *a1, int *a2, int a3);
// [0x18ac1e0] (545 bytes) hkDataObjectDict::assign(_hkDataObject_MemberHandle const*,long long)
// int hkDataObjectDict::assign(uint32_t *a1, int *a2, int64_t a3);
// [0x18ac410] (559 bytes) hkDataObjectDict::assign(_hkDataObject_MemberHandle const*,int)
// int hkDataObjectDict::assign(uint32_t *a1, int *a2, int a3);
// [0x18ac640] (440 bytes) hkDataObjectDict::assign(_hkDataObject_MemberHandle const*,char const*)
// hkString *hkDataObjectDict::assign(uint32_t *a1, int *a2, hkString *a3);
// [0x18ac800] (554 bytes) hkDataObjectDict::assign(_hkDataObject_MemberHandle const*,hkDataArrayImpl *)
// int hkDataObjectDict::assign(uint32_t *a1, int *a2, uint32_t *a3);
// [0x18aca30] (567 bytes) hkDataObjectDict::destroy(void)
// hkDataObjectDict *hkDataObjectDict::destroy(hkDataObjectDict *this);
// [0x18acc70] (1351 bytes) hkDataWorldDict::newClass(hkDataClass::Cinfo const&)
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkDataWorldDict::newClass( int a1, hkString **a2);
// [0x18ad1c0] (538 bytes) hkDataClassDict::~hkDataClassDict()
// void hkDataClassDict::~hkDataClassDict(hkDataClassDict *this);
// [0x18ad3e0] (642 bytes) hkDataClassDict::~hkDataClassDict()
// void hkDataClassDict::~hkDataClassDict(hkDataClassDict *this);
// [0x18ad670] (687 bytes) hkDataWorldDict::setClassParent(hkDataClass &,hkDataClass &)
// unsigned int hkDataWorldDict::setClassParent(hkDataWorldDict *this, hkDataClass *a2, hkDataClass *a3);
// [0x18ad920] (61 bytes) hkDataObject::~hkDataObject()
// void hkDataObject::~hkDataObject(hkDataObject *this);
// [0x18ad960] (402 bytes) hkDataClassDict::selfDestruct(void)
// int *hkDataClassDict::selfDestruct(hkDataClassDict *this);
// [0x18adb00] (567 bytes) hkDataObjectDict::selfDestruct(void)
// hkDataObjectDict *hkDataObjectDict::selfDestruct(hkDataObjectDict *this);
// [0x18add40] (95 bytes) hkDataObjectDict::~hkDataObjectDict()
// void hkDataObjectDict::~hkDataObjectDict(hkDataObjectDict *this);
// [0x18adda0] (152 bytes) hkDataObjectDict::~hkDataObjectDict()
// void hkDataObjectDict::~hkDataObjectDict(hkDataObjectDict *this);
// [0x18aedb0] (758 bytes) hkDataObjectDict::_readAccess(_hkDataObject_MemberHandle const*,hkTypeManager::SubType)
// uint32_t *hkDataObjectDict::_readAccess(uint32_t *a1, uint32_t *a2, int a3);
// [0x18af0b0] (78 bytes) hkDataObjectDict::asArray(_hkDataObject_MemberHandle const*)
// int hkDataObjectDict::asArray(uint32_t *a1, int a2);
// [0x18af100] (78 bytes) hkDataObjectDict::asString(_hkDataObject_MemberHandle const*)
// int hkDataObjectDict::asString(uint32_t *a1, int a2);
// [0x18af150] (134 bytes) hkDataObjectDict::asInt(_hkDataObject_MemberHandle const*)
// int64_t hkDataObjectDict::asInt(uint32_t *a1, int a2);
// [0x18af1e0] (78 bytes) hkDataObjectDict::asObject(_hkDataObject_MemberHandle const*)
// int hkDataObjectDict::asObject(uint32_t *a1, int a2);
// [0x18af230] (126 bytes) hkDataObjectDict::asVec(_hkDataObject_MemberHandle const*,int)
// int hkDataObjectDict::asVec(uint32_t *a1, int a2, int a3);
// [0x18af2b0] (88 bytes) hkDataObjectDict::asReal(_hkDataObject_MemberHandle const*)
// long double hkDataObjectDict::asReal(uint32_t *a1, int a2);
// [0x18af310] (647 bytes) hkDataObjectDict::assign(_hkDataObject_MemberHandle const*,hkDataObject_Value const&)
// int hkDataObjectDict::assign(uint32_t *a1, int *a2, int *a3);
// [0x18af5a0] (597 bytes) hkDataObjectDict::assign(_hkDataObject_MemberHandle const*,float const*,int)
// char *hkDataObjectDict::assign(uint32_t *a1, int *a2, void *a3, int a4);
// [0x18af840] (1631 bytes) hkDataWorldDict::newArray(hkDataObject &,_hkDataObject_MemberHandle const*,hkDataClass_MemberInfo const&)const
// int hkDataWorldDict::newArray(hkDataWorldDict *a1, int *a2, int a3, int a4);
// [0x18afea0] (208 bytes) hkDataWorldDict::ObjectTracker::ObjectTracker(hkMemoryAllocator *)
// hkDataWorldDict::ObjectTracker *hkDataWorldDict::ObjectTracker::ObjectTracker( hkString **this, hkMemoryAllocator *a2);
// [0x18aff70] (425 bytes) hkDataWorldDict::ObjectTracker::getTrackedStructArrays(hkDataClassDict *,unsigned int,hkArray<hkDataArrayImpl *,hkContainerTempAllocator> &)
// unsigned int hkDataWorldDict::ObjectTracker::getTrackedStructArrays( uint32_t *a1, unsigned int a2, int a3, int *a4);
// [0x18b0120] (350 bytes) hkDataWorldDict::ObjectTracker::trackClass(hkDataClassDict *)
// bool *hkDataWorldDict::ObjectTracker::trackClass(hkDataWorldDict::ObjectTracker *this, hkDataClassDict *a2);
// [0x18b0280] (654 bytes) hkDataWorldDict::ObjectTracker::findTrackedObjectsByBase(char const*,unsigned int,unsigned int,hkArray<hkDataObjectImpl *,hkContainerTempAllocator> &)const
// unsigned int hkDataWorldDict::ObjectTracker::findTrackedObjectsByBase( uint32_t *a1, hkString *a2, int a3, int a4, hkMemoryAllocator *a5);
// [0x18b0510] (76 bytes) hkDataWorldDict::findObjectsByBaseClass(char const*,hkArray<hkDataObjectImpl *,hkContainerTempAllocator> &)const
// unsigned int hkDataWorldDict::findObjectsByBaseClass(int a1, hkString *a2, hkMemoryAllocator *a3);
// [0x18b07d0] (843 bytes) hkDataWorldDict::renameClassMember(hkDataClass &,char const*,char const*)
// int hkDataWorldDict::renameClassMember( hkDataWorldDict *this, hkDataClass *a2, hkString *a3, hkString *a4, hkDataClass *a5, int a6, int a7, int a8, hkDataClass *a9, int a10);
// [0x18b0b20] (1314 bytes) hkDataWorldDict::removeClassMember(hkDataClass &,char const*)
// int hkDataWorldDict::removeClassMember( hkDataWorldDict *this, hkDataClass *a2, hkString *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18);
// [0x18b1050] (120 bytes) hkDataWorldDict::hkDataWorldDict(void)
// void hkDataWorldDict::hkDataWorldDict(hkDataWorldDict *this);
// [0x18b10d0] (121 bytes) hkDataWorldDict::hkDataWorldDict(hkMemoryAllocator *)
// void hkDataWorldDict::hkDataWorldDict(hkDataWorldDict *this, hkMemoryAllocator *a2);
// [0x18b1150] (1315 bytes) hkDataWorldDict::wrapClass(hkClass const&)
// hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator> *hkDataWorldDict::wrapClass( hkDataWorldDict *this, const hkClass *a2);
// [0x18b18c0] (2284 bytes) hkDataWorldDict::ObjectTracker::~ObjectTracker()
// void hkDataWorldDict::ObjectTracker::~ObjectTracker(hkDataWorldDict::ObjectTracker *this);
// [0x18b21b0] (1051 bytes) hkDataWorldDict::ObjectTracker::removeClassContent(hkDataClassDict *)
// unsigned int hkDataWorldDict::ObjectTracker::removeClassContent( hkDataWorldDict::ObjectTracker *this, hkDataClassDict *a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9, int a10, int a11, char *a12, int a13, int a14, char *a15, int a16, int a17, int a18, int a19, char a20);
// [0x18b25d0] (1216 bytes) hkDataWorldDict::ObjectTracker::untrackClass(hkDataClassDict *)
// 0x18b25d0 hkDataWorldDict::ObjectTracker::untrackClass(hkDataClassDict *)
// [0x18b2a90] (114 bytes) hkDataWorldDict::removeClass(hkDataClass &)
// int hkDataWorldDict::removeClass(hkDataWorldDict::ObjectTracker **this, hkDataClassDict **a2);
// [0x18b2b10] (117 bytes) hkDataWorldDict::~hkDataWorldDict()
// void hkDataWorldDict::~hkDataWorldDict(hkDataWorldDict *this);
// [0x18b2b90] (93 bytes) hkDataWorldDict::~hkDataWorldDict()
// void hkDataWorldDict::~hkDataWorldDict(hkDataWorldDict *this);
// [0x18b2bf0] (229 bytes) hkTagfileReader::detectFormat(hkStreamReader *)
// hkTagfileReader *hkTagfileReader::detectFormat(hkTagfileReader *this, hkStreamReader *a2);
// [0x18b2d00] (223 bytes) hkDataObjectUtil::getBasicType(hkTypeManager &,hkClassMember::Type,char const*)
// uint32_t *hkDataObjectUtil::getBasicType(hkTypeManager *a1, int a2, hkString *a3);
// [0x18b2de0] (353 bytes) hkDataObjectUtil::getTypeFromMemberTypeClassName(hkTypeManager &,hkClassMember::Type,hkClassMember::Type,char const*,int)
// hkTypeManager::Type *hkDataObjectUtil::getTypeFromMemberTypeClassName( hkTypeManager *a1, int a2, int a3, hkString *a4, int a5);
// [0x18b2f50] (98 bytes) hkDataObjectUtil::getTypeFromMemberType(hkTypeManager &,hkClassMember::Type,hkClassMember::Type,hkClass const*,int)
// hkTypeManager::Type *hkDataObjectUtil::getTypeFromMemberType( hkTypeManager *a1, int a2, int a3, hkClass *a4, int a5);
// [0x18b2fc0] (335 bytes) hkDataObjectUtil::getExtraStorageSize(hkClass const*,hkDataObject const&)
// int hkDataObjectUtil::getExtraStorageSize(hkDataObjectUtil *this, const hkClass *a2);
// [0x18b3110] (57 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator new(unsigned int)
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator new();
// [0x18b3150] (71 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator delete(void *,unsigned int)
// void hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator delete( void *a1);
// [0x18b31a0] (11 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator new(unsigned int,void *)
// unsigned int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator new( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this, unsigned int a2);
// [0x18b31b0] (11 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator new[](unsigned int,void *)
// unsigned int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator new[]( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this, unsigned int a2);
// [0x18b31c0] (9 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator delete(void *,void *)
// void hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator delete();
// [0x18b31d0] (9 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator delete[](void *,void *)
// void hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::operator delete[]();
// [0x18b31e0] (25 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hkMapBase(void)
// void hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hkMapBase( hkMapBase_Raw *this);
// [0x18b3200] (9 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hkMapBase(hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::InternalInitializer)
// void hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hkMapBase();
// [0x18b3210] (9 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::~hkMapBase()
// void hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::~hkMapBase();
// [0x18b3220] (65 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getIterator(void)const
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getIterator( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18b3270] (30 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getKey(Dummy *)const
// uint32_t *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getKey( uint32_t *a1, uint32_t *a2, int a3);
// [0x18b3290] (31 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getValue(Dummy *)const
// uint32_t *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getValue( uint32_t *a1, uint32_t *a2, int a3);
// [0x18b32b0] (28 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::setValue(Dummy *,hkDataObject_Handle)
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::setValue( uint32_t *a1, int a2, int a3, int a4);
// [0x18b32d0] (67 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getNext(Dummy *)const
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getNext( uint32_t *a1, int a2);
// [0x18b3320] (21 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::isValid(Dummy *)const
// bool *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::isValid( bool *a1, int a2, int a3);
// [0x18b3340] (101 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::findKey(hkDataObject_Handle)const
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::findKey( uint32_t *a1, unsigned int a2, int a3);
// [0x18b33b0] (68 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hasKey(hkDataObject_Handle)const
// uint8_t *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hasKey( uint8_t *a1, uint32_t *a2, unsigned int a3, int a4);
// [0x18b3400] (141 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getWithDefault(hkDataObject_Handle,hkDataObject_Handle)const
// uint32_t *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getWithDefault( uint32_t *a1, uint32_t *a2, unsigned int a3, int a4, int a5, int a6);
// [0x18b3490] (96 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::get(hkDataObject_Handle,hkDataObject_Handle*)const
// int *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::get( int *a1, uint32_t *a2, unsigned int a3, int a4, uint32_t *a5);
// [0x18b34f0] (264 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::remove(Dummy *)
// unsigned int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::remove( int *a1, unsigned int a2);
// [0x18b3600] (110 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::remove(hkDataObject_Handle)
// uint32_t *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::remove( uint32_t *a1, int *a2, unsigned int a3, int a4);
// [0x18b3670] (15 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getSize(void)const
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getSize( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18b3680] (16 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getCapacity(void)const
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getCapacity( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18b3690] (14 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getMemSize(void)const
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getMemSize( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18b36a0] (11 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getMemStart(void)const
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getMemStart( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18b36b0] (143 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::isOk(void)const
// hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::isOk( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this, int a2);
// [0x18b3740] (61 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::clear(void)
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::clear( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18b3780] (96 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::clearAndDeallocate(hkMemoryAllocator &)
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::clearAndDeallocate( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this, hkMemoryAllocator *a2);
// [0x18b37e0] (54 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::~hkMap()
// void hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::~hkMap( hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this);
// [0x18b3820] (106 bytes) hkDataObjectUtil::deepCopyWorld(hkDataWorld &,hkDataWorld const&)
// hkDataObjectUtil *hkDataObjectUtil::deepCopyWorld( hkDataObjectUtil *this, hkDataWorld *a2, const hkDataWorld *a3);
// [0x18b3890] (21 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::wasReallocated(void)const
// int64_t hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::wasReallocated( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this, int a2);
// [0x18b38b0] (36 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::setOwnedData(void *,int,int)
// hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::setOwnedData( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this, void *a2, int a3, int a4);
// [0x18b38e0] (48 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getSizeInBytesFor(int)
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::getSizeInBytesFor( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18b3910] (72 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::init(void *,int)
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::init( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this, uint32_t *a2, unsigned int a3);
// [0x18b3960] (50 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hkMapBase(void *,int)
// void hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::hkMapBase( hkMapBase_Raw *this, uint32_t *a2, unsigned int a3);
// [0x18b39a0] (321 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::resizeTable(hkMemoryAllocator &,int)
// hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::resizeTable( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this, hkMemoryAllocator *a2, int a3, int a4);
// [0x18b3af0] (235 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::insert(hkMemoryAllocator &,hkDataObject_Handle,hkDataObject_Handle)
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::insert( hkMemoryAllocator *a1, int a2, unsigned int a3, int a4, int a5, int a6);
// [0x18b3be0] (156 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::tryInsert(hkMemoryAllocator &,hkDataObject_Handle,hkDataObject_Handle,hkResult &)
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::tryInsert( hkMemoryAllocator *a1, int a2, unsigned int a3, int a4, int a5, int a6, uint32_t *a7);
// [0x18b3c80] (234 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::findOrInsertKey(hkMemoryAllocator &,hkDataObject_Handle,hkDataObject_Handle)
// int hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::findOrInsertKey( hkMemoryAllocator *a1, int a2, unsigned int a3, int a4, int a5, int a6);
// [0x18b3d70] (91 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::reserve(hkMemoryAllocator &,int)
// hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::reserve( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this, hkMemoryAllocator *a2, int a3);
// [0x18b3dd0] (18 bytes) hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::isPower2(unsigned int)
// bool hkMapBase<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>>::isPower2( hkMapBase<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>> *this);
// [0x18b3df0] (57 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new();
// [0x18b3e30] (71 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete( void *a1);
// [0x18b3e80] (11 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new( hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x18b3e90] (11 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator new[]( hkMap<hkDataObject_Handle, hkDataObject_Handle, hkMapOperations<hkDataObject_Handle>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x18b3ea0] (9 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete();
// [0x18b3eb0] (9 bytes) hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkMap<hkDataObject_Handle,hkDataObject_Handle,hkMapOperations<hkDataObject_Handle>,hkContainerHeapAllocator>::operator delete[]();
