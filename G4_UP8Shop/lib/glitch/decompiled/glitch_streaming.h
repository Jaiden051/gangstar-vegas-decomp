#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_streaming.h
// Library: glitch | Module: glitch_streaming
// Binary Address Span: 0xcd0310 .. 0xcf8910 (273 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcd0310] (49 bytes) glitch::streaming::CBaseStreamingManager::update(void)
// glitch::streaming::CBaseStreamingManager *glitch::streaming::CBaseStreamingManager::update( glitch::streaming::CBaseStreamingManager *this);
// [0xcd0350] (9 bytes) glitch::streaming::CBatchStreamingModule::update(void)
// void glitch::streaming::CBatchStreamingModule::update();
// [0xcd0360] (9 bytes) glitch::streaming::CBatchStreamingModule::removeObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CBatchStreamingModule::removeObjects();
// [0xcd0370] (9 bytes) glitch::streaming::CBatchStreamingModule::removeObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// void glitch::streaming::CBatchStreamingModule::removeObjects();
// [0xcd0380] (9 bytes) glitch::streaming::CBatchStreamingModule::decodeObjects(unsigned int,unsigned int,void const*,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CBatchStreamingModule::decodeObjects();
// [0xcd0390] (9 bytes) glitch::streaming::CBatchStreamingModule::clear(void)
// void glitch::streaming::CBatchStreamingModule::clear();
// [0xcd03a0] (9 bytes) glitch::streaming::CBatchStreamingModule::extractGeometricInformation(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CBatchStreamingModule::extractGeometricInformation();
// [0xcd03b0] (9 bytes) glitch::streaming::CBatchStreamingModule::extractGeometricInformation(unsigned int,void const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CBatchStreamingModule::extractGeometricInformation();
// [0xcd03c0] (9 bytes) glitch::streaming::CBatchStreamingModule::setEnable(std::pair<glitch::streaming::SCommand,bool> const*,std::pair<glitch::streaming::SCommand,bool> const*)
// void glitch::streaming::CBatchStreamingModule::setEnable();
// [0xcd03d0] (9 bytes) glitch::streaming::CCommandEmitter::getAdditionalFiles(std::list<std::pair<boost::intrusive_ptr<glitch::io::IReadFile>,bool>,std::allocator<std::pair<boost::intrusive_ptr<glitch::io::IReadFile>,bool>>> &)
// void glitch::streaming::CCommandEmitter::getAdditionalFiles();
// [0xcd03e0] (102 bytes) glitch::streaming::CCommandEmitter::emitAll(glitch::streaming::IStreamingReceiver &,glitch::util::SStringPool &,std::vector<glitch::core::SSharedString,glitch::core::SAllocator<glitch::core::SSharedString,(glitch::memory::E_MEMORY_HINT)0>> &)
// unsigned int glitch::streaming::CCommandEmitter::emitAll(uint32_t *a1, int a2, int a3, int a4);
// [0xcd0450] (46 bytes) glitch::streaming::CCommandEmitter::getGlobalBoundingBox(void)const
// glitch::streaming::CCommandEmitter *glitch::streaming::CCommandEmitter::getGlobalBoundingBox( glitch::streaming::CCommandEmitter *this, uint32_t *a2);
// [0xcd0480] (9 bytes) glitch::streaming::CCommandEmitter::addCompressor(glitch::streaming::IStreamingReceiver &)
// void glitch::streaming::CCommandEmitter::addCompressor();
// [0xcd0490] (9 bytes) glitch::streaming::CLoadBDAEModule::activateObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CLoadBDAEModule::activateObjects();
// [0xcd04a0] (9 bytes) glitch::streaming::CLoadBDAEModule::deactivateObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CLoadBDAEModule::deactivateObjects();
// [0xcd04b0] (102 bytes) glitch::streaming::CLodEmitter::emitAll(glitch::streaming::IStreamingReceiver &,glitch::util::SStringPool &,std::vector<glitch::core::SSharedString,glitch::core::SAllocator<glitch::core::SSharedString,(glitch::memory::E_MEMORY_HINT)0>> &)
// unsigned int glitch::streaming::CLodEmitter::emitAll(uint32_t *a1, int a2, int a3, int a4);
// [0xcd0520] (46 bytes) glitch::streaming::CLodEmitter::getGlobalBoundingBox(void)const
// glitch::streaming::CLodEmitter *glitch::streaming::CLodEmitter::getGlobalBoundingBox( glitch::streaming::CLodEmitter *this, uint32_t *a2);
// [0xcd0550] (9 bytes) glitch::streaming::CLodEmitter::addCompressor(glitch::streaming::IStreamingReceiver &)
// void glitch::streaming::CLodEmitter::addCompressor();
// [0xcd0560] (9 bytes) glitch::streaming::CLodPreloadStreamingModule::update(void)
// void glitch::streaming::CLodPreloadStreamingModule::update();
// [0xcd0570] (9 bytes) glitch::streaming::CLodPreloadStreamingModule::setEnable(std::pair<glitch::streaming::SCommand,bool> const*,std::pair<glitch::streaming::SCommand,bool> const*)
// void glitch::streaming::CLodPreloadStreamingModule::setEnable();
// [0xcd0580] (9 bytes) glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation();
// [0xcd0590] (9 bytes) glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation(unsigned int,void const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation();
// [0xcd05a0] (9 bytes) glitch::streaming::CLodStreamingModule::clear(void)
// void glitch::streaming::CLodStreamingModule::clear();
// [0xcd05b0] (88 bytes) glitch::streaming::CModifierEmitterBase::emitAll(glitch::streaming::IStreamingReceiver &,glitch::util::SStringPool &,std::vector<glitch::core::SSharedString,glitch::core::SAllocator<glitch::core::SSharedString,(glitch::memory::E_MEMORY_HINT)0>> &)
// unsigned int glitch::streaming::CModifierEmitterBase::emitAll(uint32_t *a1, int a2, int a3, int a4);
// [0xcd0610] (46 bytes) glitch::streaming::CModifierEmitterBase::getGlobalBoundingBox(void)const
// glitch::streaming::CModifierEmitterBase *glitch::streaming::CModifierEmitterBase::getGlobalBoundingBox( glitch::streaming::CModifierEmitterBase *this, uint32_t *a2);
// [0xcd0640] (41 bytes) glitch::streaming::CModifierEmitterBase::addCompressor(glitch::streaming::IStreamingReceiver &)
// int glitch::streaming::CModifierEmitterBase::addCompressor(int a1, int a2);
// [0xcd0670] (9 bytes) glitch::streaming::CModifierStreamingModule::setEnable(std::pair<glitch::streaming::SCommand,bool> const*,std::pair<glitch::streaming::SCommand,bool> const*)
// void glitch::streaming::CModifierStreamingModule::setEnable();
// [0xcd0680] (9 bytes) glitch::streaming::CModifierStreamingModule::loadExtraData(glitch::io::IReadFile *,unsigned int,glitch::streaming::CModifierStreamingModule::SObject const*)
// void glitch::streaming::CModifierStreamingModule::loadExtraData();
// [0xcd0690] (9 bytes) glitch::streaming::CModifierStreamingModule::unloadExtraData(glitch::streaming::CModifierStreamingModule::SObject const*)
// void glitch::streaming::CModifierStreamingModule::unloadExtraData();
// [0xcd06a0] (9 bytes) glitch::streaming::CNullStreamingModule::addObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CNullStreamingModule::addObjects();
// [0xcd06b0] (9 bytes) glitch::streaming::CNullStreamingModule::addObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// void glitch::streaming::CNullStreamingModule::addObjects();
// [0xcd06c0] (9 bytes) glitch::streaming::CNullStreamingModule::removeObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CNullStreamingModule::removeObjects();
// [0xcd06d0] (9 bytes) glitch::streaming::CNullStreamingModule::removeObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// void glitch::streaming::CNullStreamingModule::removeObjects();
// [0xcd06e0] (9 bytes) glitch::streaming::CNullStreamingModule::activateObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CNullStreamingModule::activateObjects();
// [0xcd06f0] (9 bytes) glitch::streaming::CNullStreamingModule::deactivateObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CNullStreamingModule::deactivateObjects();
// [0xcd0700] (65 bytes) glitch::streaming::CSegmentStreamingModule::setEnable(std::pair<glitch::streaming::SCommand,bool> const*,std::pair<glitch::streaming::SCommand,bool> const*)
// int glitch::streaming::CSegmentStreamingModule::setEnable(int a1, int a2, int a3);
// [0xcd0750] (24 bytes) glitch::streaming::CSegmentStreamingModule::update(void)
// int glitch::streaming::CSegmentStreamingModule::update(glitch::streaming::CSegmentStreamingModule *this);
// [0xcd0770] (68 bytes) glitch::streaming::CSegmentStreamingModule::swapFrame(void)
// int glitch::streaming::CSegmentStreamingModule::swapFrame(glitch::streaming::CSegmentStreamingModule *this);
// [0xcd07c0] (9 bytes) glitch::streaming::CSegmentStreamingModule::extractGeometricInformation(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CSegmentStreamingModule::extractGeometricInformation();
// [0xcd07d0] (9 bytes) glitch::streaming::CSegmentStreamingModule::extractGeometricInformation(unsigned int,void const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CSegmentStreamingModule::extractGeometricInformation();
// [0xcd07e0] (9 bytes) glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation();
// [0xcd07f0] (9 bytes) glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation(unsigned int,void const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation();
// [0xcd0800] (9 bytes) glitch::streaming::CStaticBatchStreamingModule::setEnable(std::pair<glitch::streaming::SCommand,bool> const*,std::pair<glitch::streaming::SCommand,bool> const*)
// void glitch::streaming::CStaticBatchStreamingModule::setEnable();
// [0xcd0810] (9 bytes) glitch::streaming::CStaticBatchStreamingModule::clear(void)
// void glitch::streaming::CStaticBatchStreamingModule::clear();
// [0xcd0820] (9 bytes) glitch::streaming::CStaticBatchStreamingModule::update(void)
// void glitch::streaming::CStaticBatchStreamingModule::update();
// [0xcd0830] (9 bytes) glitch::streaming::CStaticSegmentStreamingModule::update(void)
// void glitch::streaming::CStaticSegmentStreamingModule::update();
// [0xcd0840] (65 bytes) glitch::streaming::CStaticSegmentStreamingModule::activateObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// int glitch::streaming::CStaticSegmentStreamingModule::activateObjects( glitch::streaming::CStaticSegmentStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcd0890] (65 bytes) glitch::streaming::CStaticSegmentStreamingModule::deactivateObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// int glitch::streaming::CStaticSegmentStreamingModule::deactivateObjects( glitch::streaming::CStaticSegmentStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcd08e0] (65 bytes) glitch::streaming::CStaticSegmentStreamingModule::setEnable(std::pair<glitch::streaming::SCommand,bool> const*,std::pair<glitch::streaming::SCommand,bool> const*)
// int glitch::streaming::CStaticSegmentStreamingModule::setEnable(int a1, int a2, int a3);
// [0xcd0930] (9 bytes) glitch::streaming::CStaticSegmentStreamingModule::clear(void)
// void glitch::streaming::CStaticSegmentStreamingModule::clear();
// [0xcd0940] (50 bytes) glitch::streaming::CStreamingPackage::swapFrame(void)
// int glitch::streaming::CStreamingPackage::swapFrame(glitch::streaming::CStreamingPackage *this);
// [0xcd0980] (27 bytes) glitch::streaming::IStreamingModule::~IStreamingModule()
// void glitch::streaming::IStreamingModule::~IStreamingModule(glitch::streaming::IStreamingModule *this);
// [0xcd09a0] (9 bytes) glitch::streaming::IStreamingModule::preProcess(void)
// void glitch::streaming::IStreamingModule::preProcess();
// [0xcd09b0] (9 bytes) glitch::streaming::IStreamingModule::postProcess(void)
// void glitch::streaming::IStreamingModule::postProcess();
// [0xcd09c0] (9 bytes) glitch::streaming::IStreamingModule::swapFrame(void)
// void glitch::streaming::IStreamingModule::swapFrame();
// [0xcd09d0] (56 bytes) glitch::streaming::IStreamingModule::~IStreamingModule()
// void glitch::streaming::IStreamingModule::~IStreamingModule(glitch::streaming::IStreamingModule *this);
// [0xcd0aa0] (218 bytes) glitch::streaming::streaming_package::SStreamTask::Run(void)
// int glitch::streaming::streaming_package::SStreamTask::Run( glitch::streaming::streaming_package::SStreamTask *this);
// [0xcd1b90] (90 bytes) glitch::streaming::CModifierStreamingModule::postProcess(void)
// int glitch::streaming::CModifierStreamingModule::postProcess(glitch::streaming::CModifierStreamingModule *this);
// [0xcd3c00] (24 bytes) glitch::streaming::CModifierStreamingModule::getRegisterer(glitch::streaming::CModifierStreamingModule::SObject const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// int *glitch::streaming::CModifierStreamingModule::getRegisterer(int *a1, int a2, int a3, int *a4);
// [0xcd4620] (285 bytes) glitch::streaming::CStreamingPackage::~CStreamingPackage()
// void glitch::streaming::CStreamingPackage::~CStreamingPackage(glitch::streaming::CStreamingPackage *this);
// [0xcd4740] (56 bytes) glitch::streaming::CStreamingPackage::~CStreamingPackage()
// void glitch::streaming::CStreamingPackage::~CStreamingPackage(glitch::streaming::CStreamingPackage *this);
// [0xcd4780] (155 bytes) glitch::streaming::CBatchStreamingModule::~CBatchStreamingModule()
// void glitch::streaming::CBatchStreamingModule::~CBatchStreamingModule( glitch::streaming::CBatchStreamingModule *this);
// [0xcd4820] (56 bytes) glitch::streaming::CBatchStreamingModule::~CBatchStreamingModule()
// void glitch::streaming::CBatchStreamingModule::~CBatchStreamingModule( glitch::streaming::CBatchStreamingModule *this);
// [0xcd4860] (114 bytes) glitch::streaming::CModifierStreamingModule::decodeObjects(unsigned int,unsigned int,void const*,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>> &)
// uint8_t **glitch::streaming::CModifierStreamingModule::decodeObjects( glitch::streaming::CModifierStreamingModule *this, unsigned int a2, unsigned int a3, uint8_t *a4);
// [0xcd7d50] (324 bytes) glitch::streaming::CStaticSegmentStreamingModule::removeObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// uint8_t **glitch::streaming::CStaticSegmentStreamingModule::removeObjects( int a1, int a2, uint8_t *a3, uint32_t *a4);
// [0xcd7ea0] (308 bytes) glitch::streaming::CStaticSegmentStreamingModule::removeObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CStaticSegmentStreamingModule::removeObjects( glitch::streaming::CStaticSegmentStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcd7fe0] (332 bytes) glitch::streaming::CStaticSegmentStreamingModule::addObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// uint8_t **glitch::streaming::CStaticSegmentStreamingModule::addObjects( int a1, int a2, uint8_t *a3, uint32_t *a4);
// [0xcd8130] (316 bytes) glitch::streaming::CStaticSegmentStreamingModule::addObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CStaticSegmentStreamingModule::addObjects( glitch::streaming::CStaticSegmentStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcd8270] (324 bytes) glitch::streaming::CStaticBatchStreamingModule::removeObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// uint8_t **glitch::streaming::CStaticBatchStreamingModule::removeObjects( int a1, int a2, uint8_t *a3, uint32_t *a4);
// [0xcd83c0] (308 bytes) glitch::streaming::CStaticBatchStreamingModule::removeObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CStaticBatchStreamingModule::removeObjects( glitch::streaming::CStaticBatchStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcd8500] (332 bytes) glitch::streaming::CStaticBatchStreamingModule::addObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// uint8_t **glitch::streaming::CStaticBatchStreamingModule::addObjects( int a1, int a2, uint8_t *a3, uint32_t *a4);
// [0xcd8650] (316 bytes) glitch::streaming::CStaticBatchStreamingModule::addObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CStaticBatchStreamingModule::addObjects( glitch::streaming::CStaticBatchStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcd8790] (154 bytes) glitch::streaming::CSegmentStreamingModule::postProcess(void)
// int glitch::streaming::CSegmentStreamingModule::postProcess(glitch::streaming::CSegmentStreamingModule *this);
// [0xcd8830] (154 bytes) glitch::streaming::CBaseGridStreamingManager::getData(unsigned int)
// glitch::streaming::CBaseGridStreamingManager *glitch::streaming::CBaseGridStreamingManager::getData( glitch::streaming::CBaseGridStreamingManager *this, unsigned int a2, int a3);
// [0xcd88d0] (181 bytes) glitch::streaming::CBaseStreamingManager::CBaseStreamingManager(void)
// glitch::streaming::CBaseStreamingManager *glitch::streaming::CBaseStreamingManager::CBaseStreamingManager( glitch::streaming::CBaseStreamingManager *this);
// [0xcd8990] (509 bytes) glitch::streaming::CBaseGridStreamingManager::CBaseGridStreamingManager(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// struct glitch::streaming::CBaseGridStreamingManager *glitch::streaming::CBaseGridStreamingManager::CBaseGridStreamingManager( glitch::streaming::CBaseGridStreamingManager *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2);
// [0xcd8b90] (95 bytes) glitch::streaming::CBaseStreamingManager::requestTemporaryBuffer(unsigned int)
// int glitch::streaming::CBaseStreamingManager::requestTemporaryBuffer( glitch::streaming::CBaseStreamingManager *this, size_t a2);
// [0xcd8bf0] (15 bytes) glitch::streaming::CBaseStreamingManager::resolveString(unsigned int)const
// unsigned int glitch::streaming::CBaseStreamingManager::resolveString( glitch::streaming::CBaseStreamingManager *this, unsigned int a2);
// [0xcd8c00] (255 bytes) glitch::streaming::CBatchStreamingModule::CBatchStreamingModule(boost::intrusive_ptr<glitch::scene::ISegmentedMeshV2> const&,boost::intrusive_ptr<glitch::io::IReadFile> const&,boost::intrusive_ptr<glitch::io::IReadFile> const&,boost::intrusive_ptr<glitch::video::IVideoDriver> const&,boost::intrusive_ptr<glitch::streaming::detail::CSharedBuffer> const&,glitch::collada::CColladaFactory *,short)
// void glitch::streaming::CBatchStreamingModule::CBatchStreamingModule( int a1, int *a2, int *a3, boost::intrusive_ptr<glitch::io::IReadFile> *a4, uint32_t **a5, int *a6, glitch::collada::CColladaFactory *a7, int16_t a8);
// [0xcd8d00] (76 bytes) glitch::streaming::CCommandEmitter::CCommandEmitter(void)
// glitch::streaming::CCommandEmitter *glitch::streaming::CCommandEmitter::CCommandEmitter( glitch::streaming::CCommandEmitter *this);
// [0xcd8d50] (177 bytes) glitch::streaming::lod_cache::CStreamingStateCallback::operator new(unsigned int)
// uint32_t *glitch::streaming::lod_cache::CStreamingStateCallback::operator new();
// [0xcd8e10] (153 bytes) glitch::streaming::lod_cache::CStreamingStateCallback::operator delete(void *)
// void glitch::streaming::lod_cache::CStreamingStateCallback::operator delete(uint32_t *a1);
// [0xcd8eb0] (530 bytes) glitch::streaming::CLodCache::cleanupRecursive(glitch::streaming::lod_cache::SLodTreeNode *)
// unsigned int glitch::streaming::CLodCache::cleanupRecursive(int a1, int **a2);
// [0xcd90d0] (157 bytes) glitch::streaming::CLodCache::preProcess(void)
// void glitch::streaming::CLodCache::preProcess(glitch::streaming::CLodCache *this);
// [0xcd9170] (37 bytes) glitch::streaming::CLodStreamingModule::preProcess(void)
// void glitch::streaming::CLodStreamingModule::preProcess(glitch::streaming::CLodCache **this);
// [0xcd91a0] (657 bytes) glitch::streaming::CLodCache::fillLodNodeLine(glitch::streaming::lod_cache::SLodTreeNode *,unsigned int,std::vector<glitch::streaming::lod_cache::SLodNode *,glitch::core::SAllocator<glitch::streaming::lod_cache::SLodNode *,(glitch::memory::E_MEMORY_HINT)0>> &,unsigned int)
// uint32_t *glitch::streaming::CLodCache::fillLodNodeLine(int a1, uint32_t *a2, int a3, int *a4, int a5);
// [0xcd9440] (406 bytes) glitch::streaming::CLodCache::swapRecursive(glitch::streaming::lod_cache::SLodTreeNode *,glitch::streaming::lod_cache::SLodObject *,unsigned int)
// int *glitch::streaming::CLodCache::swapRecursive(int a1, int a2, int a3, int a4);
// [0xcd95e0] (221 bytes) glitch::streaming::CLodCache::postProcess(void)
// int glitch::streaming::CLodCache::postProcess(glitch::streaming::CLodCache *this);
// [0xcd96c0] (37 bytes) glitch::streaming::CLodStreamingModule::postProcess(void)
// int glitch::streaming::CLodStreamingModule::postProcess(glitch::streaming::CLodCache **this);
// [0xcd9740] (9 bytes) glitch::streaming::CLodCache::setEnable(std::pair<glitch::streaming::SCommand,bool> const*,std::pair<glitch::streaming::SCommand,bool> const*)
// void glitch::streaming::CLodCache::setEnable();
// [0xcd9750] (53 bytes) glitch::streaming::CLodStreamingModule::setEnable(std::pair<glitch::streaming::SCommand,bool> const*,std::pair<glitch::streaming::SCommand,bool> const*)
// void glitch::streaming::CLodStreamingModule::setEnable();
// [0xcd9790] (643 bytes) glitch::streaming::CLodEmitter::CLodEmitter(boost::intrusive_ptr<glitch::io::IFileSystem> const&,glitch::util::SStringPool &)
// volatile int32_t *glitch::streaming::CLodEmitter::CLodEmitter(uint32_t *a1, int *a2, int a3);
// [0xcd9a20] (53 bytes) glitch::streaming::CLodPreloadStreamingModule::CLodPreloadStreamingModule(boost::intrusive_ptr<glitch::streaming::CLodCache> const&,short)
// int glitch::streaming::CLodPreloadStreamingModule::CLodPreloadStreamingModule(int a1, int *a2, int16_t a3);
// [0xcd9a60] (53 bytes) glitch::streaming::CLodStreamingModule::CLodStreamingModule(boost::intrusive_ptr<glitch::streaming::CLodCache> const&,short)
// int glitch::streaming::CLodStreamingModule::CLodStreamingModule(int a1, int *a2, int16_t a3);
// [0xcd9aa0] (479 bytes) glitch::streaming::CModifierEmitterBase::CModifierEmitterBase(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,boost::intrusive_ptr<glitch::io::IFileSystem> const&,glitch::util::SStringPool &)
// void (**glitch::streaming::CModifierEmitterBase::CModifierEmitterBase( int a1, int *a2, int *a3, int *a4, int a5))(glitch::streaming::detail::CU32IdCodec *__hidden this);
// [0xcd9c80] (90 bytes) glitch::streaming::CModifierStreamingModule::swapFrameInternal(void)
// int glitch::streaming::CModifierStreamingModule::swapFrameInternal( glitch::streaming::CModifierStreamingModule *this);
// [0xcd9ce0] (208 bytes) glitch::streaming::CModifierStreamingModule::extractGeometricInformationImpl(unsigned int,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// uint8_t *glitch::streaming::CModifierStreamingModule::extractGeometricInformationImpl( glitch::streaming::CModifierStreamingModule *this, unsigned int a2, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a3);
// [0xcd9db0] (79 bytes) glitch::streaming::CModifierStreamingModule::extractGeometricInformation(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// uint8_t *glitch::streaming::CModifierStreamingModule::extractGeometricInformation( glitch::streaming::CModifierStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a4);
// [0xcd9e00] (35 bytes) glitch::streaming::CNullStreamingModule::CNullStreamingModule(short)
// glitch::streaming::CNullStreamingModule *glitch::streaming::CNullStreamingModule::CNullStreamingModule( glitch::streaming::CNullStreamingModule *this, int16_t a2);
// [0xcd9e30] (425 bytes) glitch::streaming::CSegmentStreamingModule::CSegmentStreamingModule(boost::intrusive_ptr<glitch::scene::ISegmentedMeshV2> const&,glitch::scene::ISceneNode *,boost::intrusive_ptr<glitch::io::IReadFile> const&,boost::intrusive_ptr<glitch::streaming::detail::CSharedBuffer> const&,short)
// int glitch::streaming::CSegmentStreamingModule::CSegmentStreamingModule( int a1, int *a2, int a3, int *a4, int *a5, int16_t a6);
// [0xcd9fe0] (533 bytes) glitch::streaming::CSegmentStreamingModule::removeSingleObject(unsigned int,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// int glitch::streaming::CSegmentStreamingModule::removeSingleObject(int a1, unsigned int a2, uint32_t *a3);
// [0xcda200] (78 bytes) glitch::streaming::CSegmentStreamingModule::removeObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// int glitch::streaming::CSegmentStreamingModule::removeObjects( glitch::streaming::CSegmentStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcda250] (107 bytes) glitch::streaming::CSegmentStreamingModule::removeObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// uint8_t **glitch::streaming::CSegmentStreamingModule::removeObjects( int a1, int a2, uint8_t *a3, uint32_t *a4);
// [0xcda2c0] (68 bytes) glitch::streaming::CStaticBatchStreamingModule::CStaticBatchStreamingModule(short)
// void (**glitch::streaming::CStaticBatchStreamingModule::CStaticBatchStreamingModule( glitch::streaming::CStaticBatchStreamingModule *this, int16_t a2))(glitch::streaming::CStaticBatchStreamingModule *__hidden this);
// [0xcda310] (234 bytes) glitch::streaming::CStaticSegmentStreamingModule::CStaticSegmentStreamingModule(boost::intrusive_ptr<glitch::scene::ISegmentedMesh> const&,glitch::scene::ISceneNode *,short,char const*)
// uint32_t *glitch::streaming::CStaticSegmentStreamingModule::CStaticSegmentStreamingModule( int a1, int *a2, int a3, int16_t a4, const char *a5);
// [0xcda400] (73 bytes) glitch::streaming::CStreamingPackage::addImpl(char const*,glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// int glitch::streaming::CStreamingPackage::addImpl( glitch::streaming::CStreamingPackage *this, const char *a2, const glitch::streaming::SCommandAndRegisterer *a3, const glitch::streaming::SCommandAndRegisterer *a4);
// [0xcda450] (80 bytes) glitch::streaming::CStreamingPackage::addImpl(char const*,unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// int glitch::streaming::CStreamingPackage::addImpl(int a1, unsigned int a2, int a3, int a4, int a5);
// [0xcda4a0] (73 bytes) glitch::streaming::CStreamingPackage::removeImpl(char const*,glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// int glitch::streaming::CStreamingPackage::removeImpl( glitch::streaming::CStreamingPackage *this, const char *a2, const glitch::streaming::SCommandAndRegisterer *a3, const glitch::streaming::SCommandAndRegisterer *a4);
// [0xcda4f0] (80 bytes) glitch::streaming::CStreamingPackage::removeImpl(char const*,unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// int glitch::streaming::CStreamingPackage::removeImpl(int a1, unsigned int a2, int a3, int a4, int a5);
// [0xcda540] (80 bytes) glitch::streaming::CStreamingPackage::decodeImpl(char const*,unsigned int,unsigned int,void const*,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::streaming::CStreamingPackage::decodeImpl( glitch::streaming::CStreamingPackage *this, const char *a2, unsigned int a3, unsigned int a4, const void *a5, std::vector<glitch::streaming::SCommandAndRegisterer, glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer, (glitch::memory::E_MEMORY_HINT)0>> *a6);
// [0xcda590] (73 bytes) glitch::streaming::CStreamingPackage::setEnableImpl(char const*,std::pair<glitch::streaming::SCommand,bool> const*,std::pair<glitch::streaming::SCommand,bool> const*)
// int glitch::streaming::CStreamingPackage::setEnableImpl(int a1, unsigned int a2, int a3, int a4);
// [0xcda5e0] (73 bytes) glitch::streaming::CStreamingPackage::getGeometricInfoImpl(char const*,glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::streaming::CStreamingPackage::getGeometricInfoImpl( glitch::streaming::CStreamingPackage *this, const char *a2, const glitch::streaming::SCommandAndRegisterer *a3, const glitch::streaming::SCommandAndRegisterer *a4, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a5);
// [0xcda630] (117 bytes) glitch::streaming::detail::SInPlaceMetaDataPolicy::init(void *,unsigned int,unsigned int)
// char *glitch::streaming::detail::SInPlaceMetaDataPolicy::init( glitch::streaming::detail::SInPlaceMetaDataPolicy *this, uint32_t *s, unsigned int a3, unsigned int a4);
// [0xcda6b0] (19 bytes) glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(unsigned int,unsigned int)
// unsigned int glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle( glitch::streaming::detail::SInPlaceMetaDataPolicy *this, unsigned int a2, unsigned int a3);
// [0xcda6d0] (19 bytes) glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(unsigned int,unsigned int)const
// unsigned int glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle( glitch::streaming::detail::SInPlaceMetaDataPolicy *this, unsigned int a2, unsigned int a3);
// [0xcda6f0] (57 bytes) glitch::streaming::detail::SInPlaceMetaDataPolicy::getNextFreeBlockHandle(unsigned int,unsigned int)const
// int glitch::streaming::detail::SInPlaceMetaDataPolicy::getNextFreeBlockHandle( glitch::streaming::detail::SInPlaceMetaDataPolicy *this, unsigned int a2, unsigned int a3);
// [0xcda730] (88 bytes) glitch::streaming::detail::SInPlaceMetaDataPolicy::getFreeBlockInfo(unsigned int,unsigned int)const
// glitch::streaming::detail::SInPlaceMetaDataPolicy *glitch::streaming::detail::SInPlaceMetaDataPolicy::getFreeBlockInfo( glitch::streaming::detail::SInPlaceMetaDataPolicy *this, glitch::streaming::detail::SInPlaceMetaDataPolicy *a2, unsigned int a3, unsigned int a4);
// [0xcda790] (263 bytes) glitch::streaming::detail::SInPlaceMetaDataPolicy::allocBlock(unsigned int,unsigned int,unsigned int)
// uint32_t *glitch::streaming::detail::SInPlaceMetaDataPolicy::allocBlock( glitch::streaming::detail::SInPlaceMetaDataPolicy *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0xcda8a0] (491 bytes) glitch::streaming::detail::SInPlaceMetaDataPolicy::deallocBlock(unsigned int,unsigned int,unsigned int,unsigned int)
// unsigned int glitch::streaming::detail::SInPlaceMetaDataPolicy::deallocBlock( glitch::streaming::detail::SInPlaceMetaDataPolicy *this, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
// [0xcdaa90] (1157 bytes) glitch::streaming::detail::fillBatchInfo(boost::intrusive_ptr<glitch::io::IReadFile> const&,glitch::collada::CColladaDatabase *,glitch::video::IVideoDriver *,unsigned int,unsigned int,void *,glitch::scene::SBatchAddInfo &)
// void glitch::streaming::detail::fillBatchInfo( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, glitch::video::CMaterial **a7);
// [0xcdaf20] (578 bytes) glitch::streaming::CBatchStreamingModule::addSingleObject(unsigned int,void *,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// 0xcdaf20 glitch::streaming::CBatchStreamingModule::addSingleObject(unsigned int,void *,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// [0xcdb170] (229 bytes) glitch::streaming::CBatchStreamingModule::addObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// void glitch::streaming::CBatchStreamingModule::addObjects(int a1, int a2, uint8_t *a3, int a4);
// [0xcdb260] (213 bytes) glitch::streaming::CBatchStreamingModule::addObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CBatchStreamingModule::addObjects( glitch::streaming::CBatchStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcdb390] (92 bytes) glitch::streaming::CBaseStreamingManager::setStringTable(glitch::core::SSharedString *,unsigned int)
// unsigned int glitch::streaming::CBaseStreamingManager::setStringTable( glitch::streaming::CBaseStreamingManager *this, glitch::core::SSharedString *a2, unsigned int a3);
// [0xcdb780] (679 bytes) glitch::streaming::CModifierEmitterBase::~CModifierEmitterBase()
// void glitch::streaming::CModifierEmitterBase::~CModifierEmitterBase( glitch::streaming::CModifierEmitterBase *this);
// [0xcdba30] (56 bytes) glitch::streaming::CModifierEmitterBase::~CModifierEmitterBase()
// void glitch::streaming::CModifierEmitterBase::~CModifierEmitterBase( glitch::streaming::CModifierEmitterBase *this);
// [0xcdcba0] (373 bytes) glitch::streaming::CLoadBDAEModule::removeObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// unsigned int glitch::streaming::CLoadBDAEModule::removeObjects(uint32_t *a1, int a2, size_t *a3);
// [0xcdcd20] (245 bytes) glitch::streaming::CLoadBDAEModule::removeObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// unsigned int glitch::streaming::CLoadBDAEModule::removeObjects( glitch::streaming::CLoadBDAEModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcdce20] (7 bytes) `non-virtual thunk to'glitch::streaming::CLodCache::~CLodCache()
// void `non-virtual thunk to'glitch::streaming::CLodCache::~CLodCache(glitch::streaming::CLodCache *this);
// [0xcdce30] (442 bytes) glitch::streaming::CLodCache::~CLodCache()
// void glitch::streaming::CLodCache::~CLodCache(glitch::streaming::CLodCache *this);
// [0xcdcff0] (7 bytes) `non-virtual thunk to'glitch::streaming::CLodCache::~CLodCache()
// void `non-virtual thunk to'glitch::streaming::CLodCache::~CLodCache(glitch::streaming::CLodCache *this);
// [0xcdd000] (56 bytes) glitch::streaming::CLodCache::~CLodCache()
// void glitch::streaming::CLodCache::~CLodCache(glitch::streaming::CLodCache *this);
// [0xcdd040] (1159 bytes) glitch::streaming::CLodCache::clear(void)
// void glitch::streaming::CLodCache::clear(char **this);
// [0xcdd4d0] (37 bytes) glitch::streaming::CLodPreloadStreamingModule::clear(void)
// void glitch::streaming::CLodPreloadStreamingModule::clear(char ***this);
// [0xcdd500] (295 bytes) glitch::streaming::CModifierStreamingModule::clear(void)
// void glitch::streaming::CModifierStreamingModule::clear(glitch::streaming::CModifierStreamingModule *this);
// [0xcdd630] (480 bytes) glitch::streaming::CSegmentStreamingModule::clear(void)
// void glitch::streaming::CSegmentStreamingModule::clear(glitch::streaming::CSegmentStreamingModule *this);
// [0xcddc80] (360 bytes) glitch::streaming::CBaseStreamingManager::extractGeometricInformation(glitch::streaming::SCommand const*,glitch::streaming::SCommand const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CBaseStreamingManager::extractGeometricInformation( glitch::streaming::CStreamingPackage **a1, _OWORD *a2, _OWORD *a3, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a4);
// [0xcdddf0] (214 bytes) glitch::streaming::CStaticSegmentStreamingModule::decodeObjects(unsigned int,unsigned int,void const*,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>> &)
// uint8_t *glitch::streaming::CStaticSegmentStreamingModule::decodeObjects( glitch::streaming::CStaticSegmentStreamingModule *this, unsigned int a2, unsigned int a3, uint8_t *a4, std::vector<glitch::streaming::SCommandAndRegisterer, glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer, (glitch::memory::E_MEMORY_HINT)0>> *a5);
// [0xcdded0] (214 bytes) glitch::streaming::CStaticBatchStreamingModule::decodeObjects(unsigned int,unsigned int,void const*,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>> &)
// uint8_t *glitch::streaming::CStaticBatchStreamingModule::decodeObjects( glitch::streaming::CStaticBatchStreamingModule *this, unsigned int a2, unsigned int a3, uint8_t *a4, std::vector<glitch::streaming::SCommandAndRegisterer, glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer, (glitch::memory::E_MEMORY_HINT)0>> *a5);
// [0xcddfb0] (214 bytes) glitch::streaming::CSegmentStreamingModule::decodeObjects(unsigned int,unsigned int,void const*,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>> &)
// uint8_t *glitch::streaming::CSegmentStreamingModule::decodeObjects( glitch::streaming::CSegmentStreamingModule *this, unsigned int a2, unsigned int a3, uint8_t *a4, std::vector<glitch::streaming::SCommandAndRegisterer, glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer, (glitch::memory::E_MEMORY_HINT)0>> *a5);
// [0xcde090] (390 bytes) glitch::streaming::CLodCache::decodeObjects(unsigned int,unsigned int,void const*,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>> &)
// volatile int32_t *glitch::streaming::CLodCache::decodeObjects( glitch::streaming::CLodCache *this, unsigned int a2, unsigned int a3, size_t *a4, std::vector<glitch::streaming::SCommandAndRegisterer, glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer, (glitch::memory::E_MEMORY_HINT)0>> *a5);
// [0xcde220] (69 bytes) glitch::streaming::CLodStreamingModule::decodeObjects(unsigned int,unsigned int,void const*,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>> &)
// volatile int32_t *glitch::streaming::CLodStreamingModule::decodeObjects( glitch::streaming::CLodCache **this, unsigned int a2, unsigned int a3, size_t *a4, std::vector<glitch::streaming::SCommandAndRegisterer, glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer, (glitch::memory::E_MEMORY_HINT)0>> *a5);
// [0xcde270] (69 bytes) glitch::streaming::CLodPreloadStreamingModule::decodeObjects(unsigned int,unsigned int,void const*,std::vector<glitch::streaming::SCommandAndRegisterer,glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer,(glitch::memory::E_MEMORY_HINT)0>> &)
// volatile int32_t *glitch::streaming::CLodPreloadStreamingModule::decodeObjects( glitch::streaming::CLodCache **this, unsigned int a2, unsigned int a3, size_t *a4, std::vector<glitch::streaming::SCommandAndRegisterer, glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer, (glitch::memory::E_MEMORY_HINT)0>> *a5);
// [0xcde2c0] (230 bytes) glitch::streaming::CBaseStreamingManager::remove(glitch::streaming::SCommand const*,glitch::streaming::SCommand const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// void glitch::streaming::CBaseStreamingManager::remove( int a1, __int128 *a2, __int128 *a3, volatile int32_t **a4);
// [0xcde3b0] (230 bytes) glitch::streaming::CBaseStreamingManager::add(glitch::streaming::SCommand const*,glitch::streaming::SCommand const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// void glitch::streaming::CBaseStreamingManager::add( int a1, __int128 *a2, __int128 *a3, volatile int32_t **a4);
// [0xcde4a0] (185 bytes) glitch::streaming::CBaseStreamingManager::setEnable(glitch::streaming::SCommand const*,glitch::streaming::SCommand const*,bool)
// int glitch::streaming::CBaseStreamingManager::setEnable(int a1, int *a2, int *a3, uint8_t a4);
// [0xcdf2a0] (2021 bytes) glitch::streaming::CCommandEmitter::addCommandToEmit(glitch::core::SSharedString const&,glitch::core::SSharedString const&,glitch::core::CMatrix4<float> const&,boost::intrusive_ptr<glitch::scene::IMesh> const&)
// 0xcdf2a0 glitch::streaming::CCommandEmitter::addCommandToEmit(glitch::core::SSharedString const&,glitch::core::SSharedString const&,glitch::core::CMatrix4<float> const&,boost::intrusive_ptr<glitch::scene::IMesh> const&)
// [0xcdff50] (2331 bytes) glitch::streaming::CLodCache::swapFrame(void)
// void glitch::streaming::CLodCache::swapFrame(glitch::streaming::CLodCache *this);
// [0xce0870] (37 bytes) glitch::streaming::CLodStreamingModule::swapFrame(void)
// void glitch::streaming::CLodStreamingModule::swapFrame(glitch::streaming::CLodCache **this);
// [0xce08a0] (727 bytes) glitch::streaming::CModifierEmitterBase::emit(glitch::streaming::IStreamingReceiver &,void const*,glitch::util::SStringPool &,std::vector<glitch::core::SSharedString,glitch::core::SAllocator<glitch::core::SSharedString,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CModifierEmitterBase::emit(uint32_t *a1, int a2, unsigned int a3, int a4, int a5);
// [0xce0b80] (923 bytes) glitch::streaming::CLodEmitter::emit(glitch::streaming::IStreamingReceiver &,void const*,glitch::util::SStringPool &,std::vector<glitch::core::SSharedString,glitch::core::SAllocator<glitch::core::SSharedString,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CLodEmitter::emit(uint32_t *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, ...);
// [0xce0f20] (436 bytes) glitch::streaming::CModifierEmitterBase::addObject(void)
// int glitch::streaming::CModifierEmitterBase::addObject(glitch::streaming::CModifierEmitterBase *this);
// [0xce10e0] (195 bytes) glitch::streaming::CStreamingPackage::process(glitch::streaming::SStreamingContext const&)
// uint32_t *glitch::streaming::CStreamingPackage::process(int a1, int a2);
// [0xce11b0] (1630 bytes) glitch::streaming::CBaseGridStreamingManager::extractGeometricInfos(std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::streaming::CBaseGridStreamingManager::extractGeometricInfos( glitch::streaming::CBaseGridStreamingManager *this, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xce1810] (466 bytes) glitch::streaming::CModifierStreamingModule::fillNewObject(unsigned int)
// int glitch::streaming::CModifierStreamingModule::fillNewObject( glitch::streaming::CModifierStreamingModule *this, unsigned int a2);
// [0xce19f0] (4729 bytes) glitch::streaming::CLodCache::extractGeometricInformationRecursive(glitch::streaming::lod_cache::SLodTreeNode const*,unsigned int,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &,std::vector<glitch::streaming::SGeometricObject,std::allocator<glitch::streaming::SGeometricObject>> &,std::vector<glitch::streaming::SGeometricObject,std::allocator<glitch::streaming::SGeometricObject>> &,std::vector<int,std::allocator<int>> &,std::vector<int,std::allocator<int>> &)
// void glitch::streaming::CLodCache::extractGeometricInformationRecursive( int a1, uint32_t *a2, int a3, int a4, int **a5, glitch::streaming::SGeometricObject **a6, glitch::streaming::SGeometricObject **a7, int a8, int a9);
// [0xce2c70] (210 bytes) glitch::streaming::CLodCache::extractGeometricInformation(unsigned int,void const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::streaming::CLodCache::extractGeometricInformation( glitch::streaming::CLodCache *this, unsigned int a2, size_t *a3, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a4);
// [0xce2d50] (61 bytes) glitch::streaming::CLodStreamingModule::extractGeometricInformation(unsigned int,void const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::streaming::CLodStreamingModule::extractGeometricInformation( glitch::streaming::CLodCache **this, unsigned int a2, size_t *a3, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a4);
// [0xce2d90] (79 bytes) glitch::streaming::CLodCache::extractGeometricInformation(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::streaming::CLodCache::extractGeometricInformation( glitch::streaming::CLodCache *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a4);
// [0xce2de0] (61 bytes) glitch::streaming::CLodStreamingModule::extractGeometricInformation(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::streaming::CLodStreamingModule::extractGeometricInformation( glitch::streaming::CLodCache **this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a4);
// [0xce2e20] (1689 bytes) glitch::streaming::CStaticSegmentStreamingModule::extractGeometricInformationInternal(unsigned int,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CStaticSegmentStreamingModule::extractGeometricInformationInternal( glitch::streaming::CStaticSegmentStreamingModule *this, unsigned int a2, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a3);
// [0xce34c0] (107 bytes) glitch::streaming::CStaticSegmentStreamingModule::extractGeometricInformation(unsigned int,void const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// uint8_t **glitch::streaming::CStaticSegmentStreamingModule::extractGeometricInformation( glitch::streaming::CStaticSegmentStreamingModule *this, unsigned int a2, uint8_t *a3, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a4);
// [0xce3530] (79 bytes) glitch::streaming::CStaticSegmentStreamingModule::extractGeometricInformation(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CStaticSegmentStreamingModule::extractGeometricInformation( glitch::streaming::CStaticSegmentStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a4);
// [0xce3580] (1186 bytes) glitch::streaming::CStreamingPackage::CStreamingPackage(boost::unordered::unordered_map<char const*,glitch::streaming::IStreamingModule *,boost::hash<char const*>,std::equal_to<char const*>,std::allocator<std::pair<char const* const,glitch::streaming::IStreamingModule *>>> const&,glitch::streaming::IStreamingManager *,boost::intrusive_ptr<glitch::streaming::detail::CSharedBuffer> const&,boost::intrusive_ptr<glitch::streaming::SSharedStreamingData> const&,bool)
// char *glitch::streaming::CStreamingPackage::CStreamingPackage( __m128d a1, int a2, boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<char const* const, glitch::streaming::IStreamingModule *>>, char const*, glitch::streaming::IStreamingModule *, boost::hash<char const*>, std::equal_to<char const*>>> *a3, int a4, int *a5, int *a6, uint8_t a7);
// [0xce3d20] (824 bytes) glitch::streaming::CLodCache::constructLodTree(glitch::streaming::lod_cache::SLodTreeNode *,unsigned char *&,unsigned int &)
// unsigned int *glitch::streaming::CLodCache::constructLodTree( unsigned int *a1, int a2, int a3, uint32_t *a4, int *a5);
// [0xce4060] (1175 bytes) glitch::streaming::CLodCache::fillNewLodObject(unsigned int,glitch::streaming::lod_cache::SLodObject &)
// void *glitch::streaming::CLodCache::fillNewLodObject( glitch::streaming::CLodCache *this, unsigned int a2, glitch::streaming::lod_cache::SLodObject *a3);
// [0xce45e0] (297 bytes) glitch::streaming::CLodCache::activateInternal(unsigned int)
// glitch::streaming::lod_cache::SLodObject *glitch::streaming::CLodCache::activateInternal( glitch::streaming::CLodCache *this, unsigned int a2);
// [0xce4710] (205 bytes) glitch::streaming::CLodCache::activate(unsigned int,void const*)
// int glitch::streaming::CLodCache::activate(glitch::streaming::CLodCache *this, unsigned int a2, size_t *a3);
// [0xce47e0] (53 bytes) glitch::streaming::CLodStreamingModule::addObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// int glitch::streaming::CLodStreamingModule::addObjects(int a1, unsigned int a2, size_t *a3);
// [0xce4820] (71 bytes) glitch::streaming::CLodCache::activate(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// glitch::streaming::lod_cache::SLodObject *glitch::streaming::CLodCache::activate( glitch::streaming::CLodCache *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xce4870] (53 bytes) glitch::streaming::CLodStreamingModule::addObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// glitch::streaming::lod_cache::SLodObject *glitch::streaming::CLodStreamingModule::addObjects( glitch::streaming::CLodCache **this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xce48b0] (814 bytes) glitch::streaming::CLodCache::unloadInternal(unsigned int,unsigned int,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// unsigned int glitch::streaming::CLodCache::unloadInternal(int a1, unsigned int a2, int a3, int a4);
// [0xce4be0] (200 bytes) glitch::streaming::CLodCache::unload(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// glitch::core *glitch::streaming::CLodCache::unload(int a1, int a2, size_t *a3, int a4);
// [0xce4cb0] (61 bytes) glitch::streaming::CLodPreloadStreamingModule::removeObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// glitch::core *glitch::streaming::CLodPreloadStreamingModule::removeObjects(int a1, int a2, size_t *a3, int a4);
// [0xce4cf0] (85 bytes) glitch::streaming::CLodCache::unload(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// unsigned int glitch::streaming::CLodCache::unload( glitch::streaming::CLodCache *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xce4d50] (53 bytes) glitch::streaming::CLodPreloadStreamingModule::removeObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// unsigned int glitch::streaming::CLodPreloadStreamingModule::removeObjects( glitch::streaming::CLodCache **this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xce4d90] (1423 bytes) glitch::streaming::CLodCache::CLodCache(boost::intrusive_ptr<glitch::io::IReadFile> const&,boost::intrusive_ptr<glitch::streaming::SSharedStreamingData> const&,boost::intrusive_ptr<glitch::streaming::detail::CSharedBuffer> const&)
// uint32_t *glitch::streaming::CLodCache::CLodCache( int a1, int *a2, int *a3, int *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
// [0xce5920] (29 bytes) glitch::streaming::CModifierStreamingModule::update(void)
// glitch::streaming::CModifierStreamingModule *glitch::streaming::CModifierStreamingModule::update( glitch::streaming::CModifierStreamingModule *this);
// [0xce5940] (664 bytes) glitch::streaming::CModifierStreamingModule::CModifierStreamingModule(boost::intrusive_ptr<glitch::io::IReadFile> const&,boost::intrusive_ptr<glitch::streaming::SSharedStreamingData> const&,boost::intrusive_ptr<glitch::streaming::detail::CSharedBuffer> const&,short)
// uint32_t *glitch::streaming::CModifierStreamingModule::CModifierStreamingModule( int a1, int *a2, int a3, int a4, int16_t a5);
// [0xce5be0] (330 bytes) glitch::streaming::CLodCache::deactivateInternal(unsigned int)
// int glitch::streaming::CLodCache::deactivateInternal(glitch::streaming::CLodCache *this, unsigned int a2);
// [0xce5d30] (205 bytes) glitch::streaming::CLodCache::deactivate(unsigned int,void const*)
// int glitch::streaming::CLodCache::deactivate(glitch::streaming::CLodCache *this, unsigned int a2, size_t *a3);
// [0xce5e00] (53 bytes) glitch::streaming::CLodStreamingModule::removeObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// int glitch::streaming::CLodStreamingModule::removeObjects(int a1, unsigned int a2, size_t *a3);
// [0xce5e40] (71 bytes) glitch::streaming::CLodCache::deactivate(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// int glitch::streaming::CLodCache::deactivate( glitch::streaming::CLodCache *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xce5e90] (53 bytes) glitch::streaming::CLodStreamingModule::removeObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// int glitch::streaming::CLodStreamingModule::removeObjects( glitch::streaming::CLodCache **this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xce5ed0] (692 bytes) glitch::streaming::CModifierStreamingModule::removeSingleObject(unsigned int,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// volatile int32_t *glitch::streaming::CModifierStreamingModule::removeSingleObject( int a1, int a2, int a3);
// [0xce6190] (107 bytes) glitch::streaming::CModifierStreamingModule::removeObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// uint8_t **glitch::streaming::CModifierStreamingModule::removeObjects( int a1, int a2, uint8_t *a3, int a4);
// [0xce6200] (78 bytes) glitch::streaming::CModifierStreamingModule::removeObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// volatile int32_t *glitch::streaming::CModifierStreamingModule::removeObjects( glitch::streaming::CModifierStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xce6250] (603 bytes) glitch::streaming::CModifierStreamingModule::addSingleObject(unsigned int,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// volatile int32_t *glitch::streaming::CModifierStreamingModule::addSingleObject( int a1, unsigned int a2, int a3);
// [0xce64b0] (107 bytes) glitch::streaming::CModifierStreamingModule::addObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// uint8_t **glitch::streaming::CModifierStreamingModule::addObjects( int a1, int a2, uint8_t *a3, int a4);
// [0xce6520] (78 bytes) glitch::streaming::CModifierStreamingModule::addObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// volatile int32_t *glitch::streaming::CModifierStreamingModule::addObjects( glitch::streaming::CModifierStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xce6570] (2405 bytes) glitch::streaming::CLodCache::processLodNode(glitch::streaming::lod_cache::SLodObject *,glitch::streaming::lod_cache::SLodNode *,unsigned int,bool)
// void glitch::streaming::CLodCache::processLodNode(int a1, int a2, unsigned int *a3, int a4, char a5);
// [0xce6ee0] (324 bytes) glitch::streaming::CLodCache::updateObject(glitch::streaming::lod_cache::SLodObject *,glitch::streaming::lod_cache::SLodTreeNode *,unsigned int)
// int *glitch::streaming::CLodCache::updateObject(int a1, int a2, int a3, int a4);
// [0xce7030] (1365 bytes) glitch::streaming::CLodCache::update(void)
// volatile int32_t *glitch::streaming::CLodCache::update(glitch::streaming::CLodCache *this);
// [0xce7590] (37 bytes) glitch::streaming::CLodStreamingModule::update(void)
// volatile int32_t *glitch::streaming::CLodStreamingModule::update(glitch::streaming::CLodCache **this);
// [0xce76a0] (3924 bytes) glitch::streaming::CBaseStreamingManager::flush(void)
// int glitch::streaming::CBaseStreamingManager::flush(glitch::streaming::CBaseStreamingManager *this);
// [0xce92f0] (936 bytes) glitch::streaming::CBaseStreamingManager::flushVisibility(void)
// void glitch::streaming::CBaseStreamingManager::flushVisibility(glitch::streaming::CBaseStreamingManager *this);
// [0xce96a0] (1152 bytes) glitch::streaming::CLodEmitter::addLodObject(unsigned int,std::vector<unsigned char,std::allocator<unsigned char>> const&)
// int glitch::streaming::CLodEmitter::addLodObject( const glitch::streaming::CLodEmitter::SLodObject **this, unsigned int a2, const std::vector<unsigned char> *a3);
// [0xce9b20] (1179 bytes) glitch::streaming::CCommandEmitter::emit(glitch::streaming::IStreamingReceiver &,void const*,glitch::util::SStringPool &,std::vector<glitch::core::SSharedString,glitch::core::SAllocator<glitch::core::SSharedString,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CCommandEmitter::emit(int a1, int a2, int a3, glitch::util::SStringPool *a4, int a5);
// [0xce9fc0] (1519 bytes) glitch::streaming::CLodEmitter::initFiles(void)
// volatile int32_t *glitch::streaming::CLodEmitter::initFiles(glitch::streaming::CLodEmitter *this);
// [0xcea5b0] (150 bytes) glitch::streaming::CLodEmitter::getAdditionalFiles(std::list<std::pair<boost::intrusive_ptr<glitch::io::IReadFile>,bool>,std::allocator<std::pair<boost::intrusive_ptr<glitch::io::IReadFile>,bool>>> &)
// int glitch::streaming::CLodEmitter::getAdditionalFiles(glitch::streaming::CLodEmitter *a1, int a2);
// [0xcea7e0] (341 bytes) glitch::streaming::CLoadBDAEModule::addObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// void glitch::streaming::CLoadBDAEModule::addObjects( glitch::streaming::CLoadBDAEModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcea940] (464 bytes) glitch::streaming::CLoadBDAEModule::addObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// glitch::core *glitch::streaming::CLoadBDAEModule::addObjects(int a1, int a2, size_t *a3);
// [0xceac90] (1398 bytes) glitch::streaming::CLodCache::loadInternal(unsigned int,unsigned int,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// uint32_t *glitch::streaming::CLodCache::loadInternal( glitch::streaming::CLodCache *a1, unsigned int a2, int a3, int *a4);
// [0xceb210] (200 bytes) glitch::streaming::CLodCache::load(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// glitch::core *glitch::streaming::CLodCache::load(glitch::streaming::CLodCache *a1, int a2, size_t *a3, int *a4);
// [0xceb2e0] (61 bytes) glitch::streaming::CLodPreloadStreamingModule::addObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// glitch::core *glitch::streaming::CLodPreloadStreamingModule::addObjects(int a1, int a2, size_t *a3, int *a4);
// [0xceb320] (85 bytes) glitch::streaming::CLodCache::load(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// uint32_t *glitch::streaming::CLodCache::load( glitch::streaming::CLodCache *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xceb380] (53 bytes) glitch::streaming::CLodPreloadStreamingModule::addObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// uint32_t *glitch::streaming::CLodPreloadStreamingModule::addObjects( glitch::streaming::CLodCache **this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xceb660] (5711 bytes) glitch::streaming::CLodEmitter::add(unsigned int,unsigned int,glitch::streaming::SStreamingItemDesc const&,glitch::streaming::IStreamingReceiver &,std::vector<glitch::core::SSharedString,glitch::core::SAllocator<glitch::core::SSharedString,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::streaming::CLodEmitter::add( char *a1, unsigned int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, const glitch::streaming::SStreamingItemDesc *a20, const glitch::streaming::SStreamingItemDesc *a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, char a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, glitch::video::IBuffer **a56, glitch::video::IBuffer **a57, int a58, glitch::video::IBuffer **a59, int a60, unsigned int a61, int a62, float a63, float a64);
// [0xceccb0] (2510 bytes) glitch::streaming::CModifierEmitterBase::add(unsigned int,glitch::streaming::SStreamingItemDesc const&,std::vector<glitch::core::SSharedString,glitch::core::SAllocator<glitch::core::SSharedString,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::streaming::CModifierEmitterBase::add( glitch::streaming::CModifierEmitterBase *this, unsigned int a2, const glitch::streaming::SStreamingItemDesc *a3);
// [0xced680] (457 bytes) glitch::streaming::CLodEmitter::addLodSelectorObject(glitch::scene::ILODSelector const*)
// const glitch::scene::ILODSelector *glitch::streaming::CLodEmitter::addLodSelectorObject( glitch::streaming::CLodEmitter *this, const glitch::scene::ILODSelector *a2);
// [0xced850] (1509 bytes) glitch::streaming::CSegmentStreamingModule::addSingleObject(unsigned int,bool,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// int glitch::streaming::CSegmentStreamingModule::addSingleObject(int a1, unsigned int a2, char a3, uint32_t *a4);
// [0xcede40] (115 bytes) glitch::streaming::CSegmentStreamingModule::addObjects(unsigned int,void const*,boost::intrusive_ptr<glitch::streaming::IStreamingRegisterer> const&)
// uint8_t **glitch::streaming::CSegmentStreamingModule::addObjects( int a1, int a2, uint8_t *a3, uint32_t *a4);
// [0xcedec0] (95 bytes) glitch::streaming::CSegmentStreamingModule::addObjects(glitch::streaming::SCommandAndRegisterer const*,glitch::streaming::SCommandAndRegisterer const*)
// int glitch::streaming::CSegmentStreamingModule::addObjects( glitch::streaming::CSegmentStreamingModule *this, const glitch::streaming::SCommandAndRegisterer *a2, const glitch::streaming::SCommandAndRegisterer *a3);
// [0xcee8b0] (1300 bytes) glitch::streaming::CModifierEmitterBase::initFiles(void)
// volatile int32_t *glitch::streaming::CModifierEmitterBase::initFiles( glitch::streaming::CModifierEmitterBase *this);
// [0xceedd0] (150 bytes) glitch::streaming::CModifierEmitterBase::getAdditionalFiles(std::list<std::pair<boost::intrusive_ptr<glitch::io::IReadFile>,bool>,std::allocator<std::pair<boost::intrusive_ptr<glitch::io::IReadFile>,bool>>> &)
// int glitch::streaming::CModifierEmitterBase::getAdditionalFiles( glitch::streaming::CModifierEmitterBase *a1, int a2);
// [0xceee70] (531 bytes) glitch::streaming::detail::CU32IdCodec::compress(__gnu_cxx::__normal_iterator<glitch::streaming::SStreamingItemFragment *,std::vector<glitch::streaming::SStreamingItemFragment,glitch::core::SAllocator<glitch::streaming::SStreamingItemFragment,(glitch::memory::E_MEMORY_HINT)0>>> const&,__gnu_cxx::__normal_iterator<glitch::streaming::SStreamingItemFragment *,std::vector<glitch::streaming::SStreamingItemFragment,glitch::core::SAllocator<glitch::streaming::SStreamingItemFragment,(glitch::memory::E_MEMORY_HINT)0>>> const&)
// size_t *glitch::streaming::detail::CU32IdCodec::compress(size_t *a1, int a2, int *a3, int *a4);
// [0xcef100] (12 bytes) glitch::streaming::lod_cache::CStreamingStateCallback::remove(glitch::scene::ISceneNode *,unsigned int,glitch::streaming::SResourceWeakPtr &,unsigned int)
// int glitch::streaming::lod_cache::CStreamingStateCallback::remove();
// [0xcef110] (7 bytes) `non-virtual thunk to'glitch::streaming::CLodCache::setCamera(glitch::scene::ICameraSceneNode const*)
// int `non-virtual thunk to'glitch::streaming::CLodCache::setCamera( glitch::streaming::CLodCache *this, const glitch::scene::ICameraSceneNode *a2);
// [0xcef120] (17 bytes) glitch::streaming::CLodCache::setCamera(glitch::scene::ICameraSceneNode const*)
// glitch::streaming::CLodCache *glitch::streaming::CLodCache::setCamera( glitch::streaming::CLodCache *this, const glitch::scene::ICameraSceneNode *a2);
// [0xcef140] (7 bytes) `non-virtual thunk to'glitch::streaming::CLodCache::getCamera(void)const
// int `non-virtual thunk to'glitch::streaming::CLodCache::getCamera(glitch::streaming::CLodCache *this);
// [0xcef150] (15 bytes) glitch::streaming::CLodCache::getCamera(void)const
// int glitch::streaming::CLodCache::getCamera(glitch::streaming::CLodCache *this);
// [0xcef160] (27 bytes) glitch::streaming::IStreamingEmitter::~IStreamingEmitter()
// void glitch::streaming::IStreamingEmitter::~IStreamingEmitter(glitch::streaming::IStreamingEmitter *this);
// [0xcef180] (27 bytes) glitch::streaming::IStreamingChannelCodec::~IStreamingChannelCodec()
// void glitch::streaming::IStreamingChannelCodec::~IStreamingChannelCodec( glitch::streaming::IStreamingChannelCodec *this);
// [0xcef1a0] (27 bytes) glitch::streaming::detail::CU32IdCodec::~CU32IdCodec()
// void glitch::streaming::detail::CU32IdCodec::~CU32IdCodec(glitch::streaming::detail::CU32IdCodec *this);
// [0xcef1c0] (45 bytes) glitch::streaming::CNullStreamingModule::~CNullStreamingModule()
// void glitch::streaming::CNullStreamingModule::~CNullStreamingModule( glitch::streaming::CNullStreamingModule *this);
// [0xcef2d0] (45 bytes) glitch::streaming::detail::CU32IdCodec::~CU32IdCodec()
// void glitch::streaming::detail::CU32IdCodec::~CU32IdCodec(glitch::streaming::detail::CU32IdCodec *this);
// [0xcef300] (45 bytes) glitch::streaming::IStreamingChannelCodec::~IStreamingChannelCodec()
// void glitch::streaming::IStreamingChannelCodec::~IStreamingChannelCodec( glitch::streaming::IStreamingChannelCodec *this);
// [0xcef330] (45 bytes) glitch::streaming::IStreamingEmitter::~IStreamingEmitter()
// void glitch::streaming::IStreamingEmitter::~IStreamingEmitter(glitch::streaming::IStreamingEmitter *this);
// [0xcef420] (45 bytes) glitch::streaming::streaming_package::SStreamTask::~SStreamTask()
// void glitch::streaming::streaming_package::SStreamTask::~SStreamTask( glitch::streaming::streaming_package::SStreamTask *this);
// [0xcef620] (128 bytes) glitch::streaming::lod_cache::CStreamingStateCallback::add(glitch::scene::ISceneNode *,unsigned int,glitch::streaming::SResourceWeakPtr &,glitch::streaming::E_STREAMING_STATUS,unsigned int)
// int glitch::streaming::lod_cache::CStreamingStateCallback::add( uint32_t *a1, int a2, int a3, int a4, int a5, int a6);
// [0xcef6a0] (67 bytes) glitch::streaming::CStaticBatchStreamingModule::~CStaticBatchStreamingModule()
// void glitch::streaming::CStaticBatchStreamingModule::~CStaticBatchStreamingModule( glitch::streaming::CStaticBatchStreamingModule *this);
// [0xcef6f0] (45 bytes) glitch::streaming::CStaticBatchStreamingModule::~CStaticBatchStreamingModule()
// void glitch::streaming::CStaticBatchStreamingModule::~CStaticBatchStreamingModule( glitch::streaming::CStaticBatchStreamingModule *this);
// [0xcef720] (67 bytes) glitch::streaming::CNullStreamingModule::~CNullStreamingModule()
// void glitch::streaming::CNullStreamingModule::~CNullStreamingModule( glitch::streaming::CNullStreamingModule *this);
// [0xcef770] (67 bytes) glitch::streaming::streaming_package::SStreamTask::~SStreamTask()
// void glitch::streaming::streaming_package::SStreamTask::~SStreamTask( glitch::streaming::streaming_package::SStreamTask *this);
// [0xcf0890] (74 bytes) glitch::streaming::CLodPreloadStreamingModule::~CLodPreloadStreamingModule()
// void glitch::streaming::CLodPreloadStreamingModule::~CLodPreloadStreamingModule(volatile int32_t **this);
// [0xcf08e0] (74 bytes) glitch::streaming::CLodStreamingModule::~CLodStreamingModule()
// void glitch::streaming::CLodStreamingModule::~CLodStreamingModule(volatile int32_t **this);
// [0xcf0930] (187 bytes) glitch::streaming::CStaticSegmentStreamingModule::~CStaticSegmentStreamingModule()
// void glitch::streaming::CStaticSegmentStreamingModule::~CStaticSegmentStreamingModule( glitch::streaming::CStaticSegmentStreamingModule *this);
// [0xcf09f0] (82 bytes) glitch::streaming::CLodStreamingModule::~CLodStreamingModule()
// void glitch::streaming::CLodStreamingModule::~CLodStreamingModule(volatile int32_t **this);
// [0xcf0a50] (82 bytes) glitch::streaming::CLodPreloadStreamingModule::~CLodPreloadStreamingModule()
// void glitch::streaming::CLodPreloadStreamingModule::~CLodPreloadStreamingModule(volatile int32_t **this);
// [0xcf0ab0] (202 bytes) glitch::streaming::CLoadBDAEModule::~CLoadBDAEModule()
// void glitch::streaming::CLoadBDAEModule::~CLoadBDAEModule(glitch::streaming::CLoadBDAEModule *this);
// [0xcf0b80] (56 bytes) glitch::streaming::CLoadBDAEModule::~CLoadBDAEModule()
// void glitch::streaming::CLoadBDAEModule::~CLoadBDAEModule(glitch::streaming::CLoadBDAEModule *this);
// [0xcf0bc0] (77 bytes) glitch::streaming::lod_cache::CStreamingStateCallback::~CStreamingStateCallback()
// void glitch::streaming::lod_cache::CStreamingStateCallback::~CStreamingStateCallback( volatile int32_t **this);
// [0xcf0c10] (199 bytes) glitch::streaming::CStaticSegmentStreamingModule::~CStaticSegmentStreamingModule()
// void glitch::streaming::CStaticSegmentStreamingModule::~CStaticSegmentStreamingModule( glitch::streaming::CStaticSegmentStreamingModule *this);
// [0xcf0d10] (150 bytes) glitch::streaming::SResourceWeakPtr::decrement(void)
// int *glitch::streaming::SResourceWeakPtr::decrement(int **this);
// [0xcf0db0] (85 bytes) glitch::streaming::lod_cache::CStreamingStateCallback::~CStreamingStateCallback()
// void glitch::streaming::lod_cache::CStreamingStateCallback::~CStreamingStateCallback( volatile int32_t **this);
// [0xcf0e10] (178 bytes) glitch::streaming::SGeometricObject::~SGeometricObject()
// void glitch::streaming::SGeometricObject::~SGeometricObject(glitch::streaming::SGeometricObject *this);
// [0xcf0ed0] (105 bytes) glitch::streaming::SGeometricObject::SGeometricObject(glitch::streaming::SGeometricObject const&)
// glitch::streaming::SGeometricObject *glitch::streaming::SGeometricObject::SGeometricObject( glitch::streaming::SGeometricObject *this, const glitch::streaming::SGeometricObject *a2);
// [0xcf0f40] (206 bytes) glitch::streaming::CModifierEmitterBase::SObject::~SObject()
// void glitch::streaming::CModifierEmitterBase::SObject::~SObject( glitch::streaming::CModifierEmitterBase::SObject *this);
// [0xcf1050] (189 bytes) glitch::streaming::SStreamingItemDesc::~SStreamingItemDesc()
// void glitch::streaming::SStreamingItemDesc::~SStreamingItemDesc(glitch::streaming::SStreamingItemDesc *this);
// [0xcf1110] (241 bytes) glitch::streaming::CBaseGridStreamingManager::~CBaseGridStreamingManager()
// void glitch::streaming::CBaseGridStreamingManager::~CBaseGridStreamingManager( glitch::streaming::CBaseGridStreamingManager *this);
// [0xcf1210] (249 bytes) glitch::streaming::CBaseGridStreamingManager::~CBaseGridStreamingManager()
// void glitch::streaming::CBaseGridStreamingManager::~CBaseGridStreamingManager( glitch::streaming::CBaseGridStreamingManager *this);
// [0xcf1310] (148 bytes) glitch::streaming::CCommandEmitter::~CCommandEmitter()
// void glitch::streaming::CCommandEmitter::~CCommandEmitter(glitch::streaming::CCommandEmitter *this);
// [0xcf13b0] (893 bytes) glitch::streaming::CLodEmitter::~CLodEmitter()
// void glitch::streaming::CLodEmitter::~CLodEmitter(glitch::streaming::CLodEmitter *this);
// [0xcf1730] (56 bytes) glitch::streaming::CLodEmitter::~CLodEmitter()
// void glitch::streaming::CLodEmitter::~CLodEmitter(glitch::streaming::CLodEmitter *this);
// [0xcf1770] (156 bytes) glitch::streaming::CCommandEmitter::~CCommandEmitter()
// void glitch::streaming::CCommandEmitter::~CCommandEmitter(glitch::streaming::CCommandEmitter *this);
// [0xcf1810] (373 bytes) glitch::streaming::CLodEmitter::SLodObject::~SLodObject()
// void glitch::streaming::CLodEmitter::SLodObject::~SLodObject(void **this);
// [0xcf1990] (86 bytes) glitch::streaming::SCommandAndRegisterer::operator=(glitch::streaming::SCommandAndRegisterer const&)
// glitch::streaming::SCommandAndRegisterer *glitch::streaming::SCommandAndRegisterer::operator=( glitch::streaming::SCommandAndRegisterer *this, const glitch::streaming::SCommandAndRegisterer *a2);
// [0xcf1b00] (100 bytes) glitch::streaming::lod_cache::SLodObject::~SLodObject()
// void glitch::streaming::lod_cache::SLodObject::~SLodObject(void **this);
// [0xcf24b0] (206 bytes) glitch::streaming::CModifierStreamingModule::~CModifierStreamingModule()
// void glitch::streaming::CModifierStreamingModule::~CModifierStreamingModule( glitch::streaming::CModifierStreamingModule *this);
// [0xcf2580] (214 bytes) glitch::streaming::CModifierStreamingModule::~CModifierStreamingModule()
// void glitch::streaming::CModifierStreamingModule::~CModifierStreamingModule( glitch::streaming::CModifierStreamingModule *this);
// [0xcf2790] (231 bytes) glitch::streaming::CSegmentStreamingModule::~CSegmentStreamingModule()
// void glitch::streaming::CSegmentStreamingModule::~CSegmentStreamingModule( glitch::streaming::CSegmentStreamingModule *this);
// [0xcf2880] (56 bytes) glitch::streaming::CSegmentStreamingModule::~CSegmentStreamingModule()
// void glitch::streaming::CSegmentStreamingModule::~CSegmentStreamingModule( glitch::streaming::CSegmentStreamingModule *this);
// [0xcf2960] (46 bytes) glitch::streaming::SCommandAndRegisterer::SCommandAndRegisterer(glitch::streaming::SCommandAndRegisterer const&)
// glitch::streaming::SCommandAndRegisterer *glitch::streaming::SCommandAndRegisterer::SCommandAndRegisterer( glitch::streaming::SCommandAndRegisterer *this, const glitch::streaming::SCommandAndRegisterer *a2);
// [0xcf3520] (65 bytes) glitch::streaming::CCommandEmitter::SCommandData::SCommandData(glitch::streaming::CCommandEmitter::SCommandData const&)
// volatile int32_t *glitch::streaming::CCommandEmitter::SCommandData::SCommandData( glitch::streaming::CCommandEmitter::SCommandData *this, volatile int32_t **a2);
// [0xcf4010] (421 bytes) glitch::streaming::SStreamingItemDesc::SStreamingItemDesc(glitch::streaming::SStreamingItemDesc const&)
// int glitch::streaming::SStreamingItemDesc::SStreamingItemDesc( glitch::streaming::SStreamingItemDesc *this, const glitch::streaming::SStreamingItemDesc *a2);
// [0xcf41c0] (161 bytes) glitch::streaming::CLodEmitter::SLodLevel::SLodLevel(glitch::streaming::CLodEmitter::SLodLevel const&)
// glitch::streaming::SStreamingItemDesc *glitch::streaming::CLodEmitter::SLodLevel::SLodLevel( glitch::streaming::CLodEmitter::SLodLevel *this, const glitch::streaming::CLodEmitter::SLodLevel *a2);
// [0xcf4270] (953 bytes) glitch::streaming::SStreamingItemDesc::operator=(glitch::streaming::SStreamingItemDesc const&)
// glitch::streaming::SStreamingItemDesc *glitch::streaming::SStreamingItemDesc::operator=( glitch::streaming::SStreamingItemDesc *this, const glitch::streaming::SStreamingItemDesc *a2);
// [0xcf4870] (502 bytes) glitch::streaming::CLodEmitter::SLodObject::SLodObject(glitch::streaming::CLodEmitter::SLodObject const&)
// int glitch::streaming::CLodEmitter::SLodObject::SLodObject( glitch::streaming::CLodEmitter::SLodObject *this, const glitch::streaming::SStreamingItemDesc ***a2);
// [0xcf5510] (301 bytes) glitch::streaming::SGeometricObject::operator=(glitch::streaming::SGeometricObject const&)
// glitch::streaming::SGeometricObject *glitch::streaming::SGeometricObject::operator=( glitch::streaming::SGeometricObject *this, const glitch::streaming::SGeometricObject *a2);
// [0xcf6990] (114 bytes) glitch::streaming::SGeometricObject * std::copy_backward<glitch::streaming::SGeometricObject *,glitch::streaming::SGeometricObject *>(glitch::streaming::SGeometricObject *,glitch::streaming::SGeometricObject *,glitch::streaming::SGeometricObject *)
// glitch::streaming::SGeometricObject *std::copy_backward<glitch::streaming::SGeometricObject *,glitch::streaming::SGeometricObject *>( glitch::streaming::SGeometricObject *a1, glitch::streaming::SGeometricObject *a2, glitch::streaming::SGeometricObject *a3);
// [0xcf6df0] (805 bytes) glitch::streaming::CLodCache::extractGeometricInformationInternal(unsigned int,std::vector<glitch::streaming::SGeometricInfo,glitch::core::SAllocator<glitch::streaming::SGeometricInfo,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::streaming::CLodCache::extractGeometricInformationInternal( glitch::streaming::CLodCache *this, unsigned int a2, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a3);
// [0xcf8620] (746 bytes) glitch::streaming::CLodEmitter::SLodLevel::operator=(glitch::streaming::CLodEmitter::SLodLevel const&)
// glitch::streaming::CLodEmitter::SLodLevel *glitch::streaming::CLodEmitter::SLodLevel::operator=( glitch::streaming::CLodEmitter::SLodLevel *this, const glitch::streaming::CLodEmitter::SLodLevel *a2);
// [0xcf8910] (1721 bytes) glitch::streaming::CLodEmitter::SLodObject::operator=(glitch::streaming::CLodEmitter::SLodObject const&)
// glitch::streaming::CLodEmitter::SLodObject *glitch::streaming::CLodEmitter::SLodObject::operator=( const glitch::streaming::SStreamingItemDesc ***this, const glitch::streaming::SStreamingItemDesc ***a2);
