#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_video_part03.h
// Library: glitch | Module: glitch_video_part03
// Binary Address Span: 0xe45950 .. 0xf7a1b0 (345 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xe45950] (136 bytes) glitch::video::IMultipleRenderTarget::getTarget(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE,unsigned char,boost::intrusive_ptr<glitch::video::ITexture> &,glitch::video::E_TEXTURE_CUBE_MAP_FACE &,unsigned char &)const
// int glitch::video::IMultipleRenderTarget::getTarget( int a1, int a2, uint8_t a3, int *a4, uint32_t *a5, uint8_t *a6);
// [0xe459e0] (145 bytes) glitch::video::CTextureManager::clearPlaceHolder(glitch::video::E_TEXTURE_TYPE,glitch::video::ITexture *)
// int glitch::video::CTextureManager::clearPlaceHolder(int a1, int a2, int a3);
// [0xe45a80] (169 bytes) glitch::video::CLight::refreshSpotLookupTable(glitch::video::IVideoDriver *)
// unsigned int glitch::video::CLight::refreshSpotLookupTable( glitch::video::CLight *this, glitch::video::IVideoDriver *a2);
// [0xe45b30] (975 bytes) glitch::video::CTextureManager::makeColorKeyTexture(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&)const
// void glitch::video::CTextureManager::makeColorKeyTexture(int a1, glitch::video::ITexture **a2, uint32_t *a3);
// [0xe45f00] (404 bytes) glitch::video::CLight::refreshAttenuationLookupTable(glitch::video::IVideoDriver *)
// int glitch::video::CLight::refreshAttenuationLookupTable( glitch::video::CLight *this, glitch::video::IVideoDriver *a2);
// [0xe460a0] (628 bytes) glitch::video::CTextureManager::getTexture(char const*,bool,glitch::core::SScopedProcessArray<char> &)const
// int *glitch::video::CTextureManager::getTexture(int *a1, int a2, char *s, char a4, glitch::core **a5);
// [0xe46320] (139 bytes) glitch::video::CTextureManager::setPlaceHolder(glitch::video::CTextureManager::E_PLACE_HOLDER,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::E_TEXTURE_TYPE)
// int glitch::video::CTextureManager::setPlaceHolder(int a1, int a2, int *a3, int a4);
// [0xe463b0] (362 bytes) glitch::video::CTextureManager::addVirtualTexture(char const*,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector3d<int>,glitch::core::dimension2d<int>,unsigned int,bool)
// int *glitch::video::CTextureManager::addVirtualTexture( int *a1, int *a2, char *a3, int *a4, int *a5, int a6, int a7, int a8, char a9);
// [0xe46520] (196 bytes) glitch::video::ITexture::setAlphaTexture(boost::intrusive_ptr<glitch::video::ITexture> const&,int)
// int glitch::video::ITexture::setAlphaTexture( glitch::video::ITexture *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2, unsigned int a3);
// [0xe465f0] (421 bytes) glitch::video::CTextureManager::addTexture(char const*,glitch::video::STextureDesc const&,bool)
// int *glitch::video::CTextureManager::addTexture(int *a1, char *a2, char *a3, int a4, char a5);
// [0xe467a0] (241 bytes) glitch::video::CTextureManager::addTexture(glitch::core::dimension2d<int> const&,char const*,glitch::video::E_PIXEL_FORMAT,bool)
// int *glitch::video::CTextureManager::addTexture( int *a1, char *a2, int *a3, char *a4, int a5, char a6);
// [0xe468a0] (840 bytes) glitch::video::CTextureManager::getPlaceHolder(glitch::video::CTextureManager::E_PLACE_HOLDER,glitch::video::E_TEXTURE_TYPE)
// int glitch::video::CTextureManager::getPlaceHolder(int a1, int a2, int a3);
// [0xe46bf0] (3393 bytes) glitch::video::CTextureManager::reloadTextureInternal(boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::io::IReadFile>,char const*,long)
// int glitch::video::CTextureManager::reloadTextureInternal( const boost::intrusive_ptr<glitch::video::ITexture> *a1, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> ***a2, volatile int32_t **a3, char *a4, int a5);
// [0xe47940] (180 bytes) glitch::video::CTextureManager::reloadTexture(boost::intrusive_ptr<glitch::video::ITexture> const&)
// int glitch::video::CTextureManager::reloadTexture( glitch::video::CTextureManager *this, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> ***a2);
// [0xe47a00] (334 bytes) glitch::video::ITexture::bind(unsigned int,unsigned int)
// char glitch::video::ITexture::bind(glitch::video::ITexture *this, unsigned int a2, unsigned int a3);
// [0xe47b50] (475 bytes) glitch::video::ITexture::generateMipmaps(void)
// int glitch::video::ITexture::generateMipmaps(glitch::video::ITexture *this);
// [0xe47fc0] (2053 bytes) glitch::video::CTextureManager::createTextureFromImage(char const*,boost::intrusive_ptr<glitch::video::CImage> const&,glitch::video::E_TEXTURE_LAYOUT,boost::intrusive_ptr<glitch::video::ITexture> const&)
// glf::App **glitch::video::CTextureManager::createTextureFromImage( glf::App **a1, int a2, int a3, uint32_t *a4, int a5, int *a6);
// [0xe487d0] (475 bytes) glitch::video::CTextureManager::addTexture(char const*,boost::intrusive_ptr<glitch::video::CImage> const&,bool,glitch::video::E_TEXTURE_LAYOUT)
// int *glitch::video::CTextureManager::addTexture( int *a1, int a2, char *a3, uint32_t *a4, char a5, int a6);
// [0xe489b0] (1147 bytes) glitch::video::CTextureManager::applyUsagePolicy(glitch::video::ITexture *)
// glitch::video::ITexture *glitch::video::CTextureManager::applyUsagePolicy( glitch::video::CTextureManager *this, glitch::video::ITexture *a2);
// [0xe48e30] (1398 bytes) glitch::video::CTextureManager::loadTextureFromFile(glitch::io::IReadFile *,char const*,long,char const*,glitch::video::E_PIXEL_FORMAT &,glitch::video::E_TEXTURE_LAYOUT &,bool,boost::intrusive_ptr<glitch::video::ITexture> const&)
// 0xe48e30 glitch::video::CTextureManager::loadTextureFromFile(glitch::io::IReadFile *,char const*,long,char const*,glitch::video::E_PIXEL_FORMAT &,glitch::video::E_TEXTURE_LAYOUT &,bool,boost::intrusive_ptr<glitch::video::ITexture> const&)
// [0xe493b0] (2555 bytes) glitch::video::CTextureManager::getTextureInternal(glitch::io::IReadFile *,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,bool,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&)
// 0xe493b0 glitch::video::CTextureManager::getTextureInternal(glitch::io::IReadFile *,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,bool,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&)
// [0xe49db0] (1268 bytes) glitch::video::CTextureManager::reloadTexture(boost::intrusive_ptr<glitch::video::ITexture>,char const*)
// int glitch::video::CTextureManager::reloadTexture( glitch::video::ITexture **a1, glitch::video::ITexture **a2, int a3);
// [0xe4a2b0] (866 bytes) glitch::video::CTextureManager::getTexture(boost::intrusive_ptr<glitch::io::IReadFile> const&,char const*,bool)
// glitch::video::CTextureManager *glitch::video::CTextureManager::getTexture( glitch::video::CTextureManager *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, const char *a3, const char *a4);
// [0xe4a620] (896 bytes) glitch::video::CTextureManager::getTexture(char const*,char const*)
// glitch::video::CTextureManager *glitch::video::CTextureManager::getTexture( glitch::video::CTextureManager *this, char *a2, const char *a3, const char *a4);
// [0xe4a9a0] (1017 bytes) glitch::video::CMaterial::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// glitch::core *glitch::video::CMaterial::serializeAttributes( glitch::video::CMaterial *a1, glitch::io::IAttributes *a2);
// [0xe4ada0] (262 bytes) glitch::video::CMaterial::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::video::CMaterial::deserializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, glitch::io::IAttributes *a2);
// [0xe4aeb0] (319 bytes) glitch::video::CMaterialRenderer::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::video::CMaterialRenderer::deserializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, glitch::io::IAttributes *a2);
// [0xe4aff0] (383 bytes) glitch::video::CMaterialRenderer::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::video::CMaterialRenderer::serializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, glitch::io::IAttributes *a2, uint8_t *a3);
// [0xe4b170] (749 bytes) glitch::video::CGlobalMaterialParameterManager::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::video::CGlobalMaterialParameterManager::serializeAttributes( glitch::video::CGlobalMaterialParameterManager *a1, glitch::io::IAttributes *a2, uint8_t *a3);
// [0xe4b520] (551 bytes) glitch::video::CGlobalMaterialParameterManager::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::video::CGlobalMaterialParameterManager::deserializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *a1, glitch::io::IAttributes *a2, uint8_t *a3);
// [0xe4b750] (34 bytes) glitch::video::CGlobalMaterialParameterManager::clearParameters(void)
// int glitch::video::CGlobalMaterialParameterManager::clearParameters( glitch::video::CGlobalMaterialParameterManager *this);
// [0xe4b780] (43 bytes) glitch::video::detail::globalmaterialparametermanager::SPropeties::onRemove(void *,unsigned short)
// int glitch::video::detail::globalmaterialparametermanager::SPropeties::onRemove( glitch::video::detail::globalmaterialparametermanager::SPropeties *this, glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *a2, uint16_t a3);
// [0xe4b7b0] (101 bytes) glitch::video::CGlobalMaterialParameterManager::removeUnused(void)
// int glitch::video::CGlobalMaterialParameterManager::removeUnused( glitch::video::CGlobalMaterialParameterManager *this);
// [0xe4b820] (101 bytes) glitch::video::CGlobalMaterialParameterManager::removeAll(void)
// int glitch::video::CGlobalMaterialParameterManager::removeAll( glitch::video::CGlobalMaterialParameterManager *this);
// [0xe4b890] (110 bytes) glitch::video::CGlobalMaterialParameterManager::remove(unsigned short)
// int glitch::video::CGlobalMaterialParameterManager::remove( glitch::video::CGlobalMaterialParameterManager *this, uint16_t a2);
// [0xe4b900] (420 bytes) glitch::video::CMaterialRenderer::~CMaterialRenderer()
// void glitch::video::CMaterialRenderer::~CMaterialRenderer( glitch::core::detail::SSharedStringHeapEntry::SData ***this);
// [0xe4bab0] (145 bytes) glitch::video::CMaterialVertexAttributeMap::~CMaterialVertexAttributeMap()
// void glitch::video::CMaterialVertexAttributeMap::~CMaterialVertexAttributeMap( glitch::video::CMaterialVertexAttributeMap **this);
// [0xe4bb50] (366 bytes) glitch::video::CMaterialRendererManager::createMaterialRenderer(glitch::video::IVideoDriver *,glitch::video::E_MATERIAL_TYPE,glitch::collada::CColladaFactory *)
// int glitch::video::CMaterialRendererManager::createMaterialRenderer( int a1, int a2, int a3, glitch::collada::CColladaFactory *a4);
// [0xe4bcc0] (584 bytes) glitch::video::CMaterialRenderer::allocate(glitch::video::IVideoDriver *,unsigned short,char const*,glitch::video::detail::material_renderer_manager::STechniqueList const&,unsigned short,glitch::video::SShaderParameterDef const* const*,unsigned int,unsigned short,unsigned short const*)
// volatile int32_t **glitch::video::CMaterialRenderer::allocate( volatile int32_t **a1, int a2, int16_t a3, char *s, uint32_t *a5, uint16_t a6, int *a7, int a8, uint16_t a9, char *a10);
// [0xe4bf10] (77 bytes) glitch::video::CMaterial::clearParameters(void)
// void *glitch::video::CMaterial::clearParameters(glitch::video::CMaterial *this);
// [0xe4bf60] (230 bytes) glitch::video::CMaterial::init(unsigned char const*,glitch::video::detail::material::SRenderState const*,bool,glitch::video::CMaterial const*,unsigned int)
// void *glitch::video::CMaterial::init( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, void *src, int a3, char a4, int a5);
// [0xe4c050] (150 bytes) glitch::video::CMaterial::copyFrom(boost::intrusive_ptr<glitch::video::CMaterial const> const&)
// int glitch::video::CMaterial::copyFrom(int a1, int *a2);
// [0xe4c0f0] (112 bytes) glitch::video::CMaterial::reset(glitch::video::detail::material::SRenderState const*)
// void *glitch::video::CMaterial::reset(int a1, int a2);
// [0xe4c160] (208 bytes) glitch::video::CMaterial::CMaterial(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&,char const*,glitch::video::CMaterial::SStateWithoutRenderState const&,unsigned char const*,glitch::video::detail::material::SRenderState const*,glitch::video::CMaterial const*,unsigned int)
// void *glitch::video::CMaterial::CMaterial( int a1, volatile int32_t **a2, glitch::core::detail::SSharedStringHeapEntry::SData *a3, int a4, void *a5, int a6, int a7);
// [0xe4c230] (130 bytes) glitch::video::CMaterial::~CMaterial()
// void glitch::video::CMaterial::~CMaterial(glitch::video::CMaterial *this);
// [0xe4c2c0] (406 bytes) glitch::video::CMaterialRendererManager::SDriverCacheAccess::removeUnused(glitch::video::CMaterialRendererManager&)
// uint32_t *glitch::video::CMaterialRendererManager::SDriverCacheAccess::removeUnused( glitch::video::CMaterialRendererManager::SDriverCacheAccess *this);
// [0xe4c460] (210 bytes) glitch::video::CMaterialRendererManager::~CMaterialRendererManager()
// void glitch::video::CMaterialRendererManager::~CMaterialRendererManager( glitch::video::CMaterialRendererManager *this);
// [0xe4c540] (290 bytes) glitch::video::CMaterial::allocate(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&,char const*,glitch::video::CMaterial::SStateWithoutRenderState const&,unsigned char const*,glitch::video::detail::material::SRenderState const*,glitch::video::CMaterial const*)
// glitch::video::CMaterial **glitch::video::CMaterial::allocate( glitch::video::CMaterial **a1, volatile int32_t **a2, glitch::core::detail::SSharedStringHeapEntry::SData *a3, int a4, void *a5, int a6, int a7);
// [0xe4c670] (137 bytes) glitch::video::CMaterial::allocate(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&,char const*,unsigned char)
// glitch::video::CMaterial **glitch::video::CMaterial::allocate( glitch::video::CMaterial **a1, volatile int32_t **a2, glitch::core::detail::SSharedStringHeapEntry::SData *a3, char a4);
// [0xe4c700] (143 bytes) glitch::video::CMaterial::clone(char const*)const
// glitch::video::CMaterial **glitch::video::CMaterial::clone( glitch::video::CMaterial **this, const char *a2, glitch::core::detail::SSharedStringHeapEntry::SData *a3);
// [0xe4c790] (421 bytes) glitch::video::CMaterialRendererManager::createMaterialInstance(glitch::video::IVideoDriver *,glitch::video::E_MATERIAL_TYPE,glitch::collada::CColladaFactory *,char const*)
// glitch::video::CMaterial **glitch::video::CMaterialRendererManager::createMaterialInstance( glitch::video::CMaterial **a1, int a2, int a3, int a4, glitch::collada::CColladaFactory *a5, glitch::core::detail::SSharedStringHeapEntry::SData *a6);
// [0xe4c940] (565 bytes) glitch::video::IShaderManager::removeAllBatchBakers(void)
// int glitch::video::IShaderManager::removeAllBatchBakers(glitch::video::IShaderManager *this);
// [0xe4cb80] (346 bytes) glitch::video::CMaterialRendererManager::clearUnusedInstance(unsigned short)
// unsigned int glitch::video::CMaterialRendererManager::clearUnusedInstance( glitch::video::CMaterialRendererManager *this, uint16_t a2);
// [0xe4cce0] (209 bytes) glitch::video::CMaterialRendererManager::clearUnusedInstances(void)
// uint32_t *glitch::video::CMaterialRendererManager::clearUnusedInstances( glitch::video::CMaterialRendererManager *this);
// [0xe4cdc0] (5199 bytes) glitch::video::CMaterialRendererManager::endMaterialRenderer(glitch::video::CMaterialRendererManager::SCreationContext &)
// int glitch::video::CMaterialRendererManager::endMaterialRenderer( glitch::video::CMaterialRendererManager *this, glitch::video::CMaterialRendererManager::SCreationContext *a2);
// [0xe4e210] (218 bytes) glitch::video::CMaterialRendererManager::createPinkWireFrameMaterialRenderer(glitch::video::IVideoDriver *,char const*)
// glitch::video::CMaterialRendererManager *glitch::video::CMaterialRendererManager::createPinkWireFrameMaterialRenderer( glitch::video::CMaterialRendererManager *this, glitch::video::IVideoDriver *a2, glitch::video::IVideoDriver *a3, char *s);
// [0xe4e2f0] (1158 bytes) glitch::video::cloneMaterialRenderer(boost::intrusive_ptr<glitch::video::CMaterialRenderer const> const&,unsigned char,glitch::video::CMaterialRendererManager &,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int glitch::video::cloneMaterialRenderer( glitch::video::CMaterialRenderer **a1, uint8_t a2, glitch::video::CMaterialRendererManager *a3, char **a4);
// [0xe4e780] (322 bytes) glitch::video::CMaterialRendererManager::SDriverCacheAccess::set(glitch::video::CMaterialRendererManager&,boost::intrusive_ptr<glitch::video::CMaterial const> const&)
// int glitch::video::CMaterialRendererManager::SDriverCacheAccess::set(int a1, int *a2);
// [0xe4e8d0] (693 bytes) glitch::video::CMaterialRendererManager::getMaterialInstance(unsigned short,bool)
// glitch::video::CMaterial **glitch::video::CMaterialRendererManager::getMaterialInstance( glitch::video::CMaterial **this, int a2, uint16_t a3, char a4);
// [0xe4eb90] (1756 bytes) glitch::video::copyParameter(boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned short,boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned short)
// int glitch::video::copyParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> **a1, uint16_t a2, uint32_t *a3, uint16_t a4);
// [0xe4f270] (361 bytes) glitch::video::copyMaterialParameters(boost::intrusive_ptr<glitch::video::CMaterial> const&,boost::intrusive_ptr<glitch::video::CMaterial const> const&)
// int glitch::video::copyMaterialParameters(glitch::video::CMaterial **a1, glitch::video::CMaterial **a2);
// [0xe4f3e0] (1717 bytes) glitch::video::copyGlobalParameter(boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned short,unsigned short)
// int glitch::video::copyGlobalParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> **a1, uint16_t a2, int16_t a3);
// [0xe4faa0] (2756 bytes) glitch::video::compareParameter(boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned short,boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned short)
// int glitch::video::compareParameter(uint32_t *a1, uint16_t a2, uint32_t *a3, uint16_t a4);
// [0xe50570] (690 bytes) glitch::video::CTextureManager::removeAll(void)
// int glitch::video::CTextureManager::removeAll(glitch::video::CTextureManager *this);
// [0xe50830] (564 bytes) glitch::video::CTextureManager::~CTextureManager()
// void glitch::video::CTextureManager::~CTextureManager(glitch::video::CTextureManager *this);
// [0xe52360] (7377 bytes) glitch::video::CMaterialRendererManager::SMaterialTechniqueMapsAccess::load(glitch::video::CMaterialRendererManager&,boost::intrusive_ptr<glitch::io::IReadFile> const&)
// int glitch::video::CMaterialRendererManager::SMaterialTechniqueMapsAccess::load( glitch::video::CMaterialRendererManager::SMaterialTechniqueMapsAccess *this, glitch::video::CMaterialRendererManager *a2);
// [0xe54040] (9 bytes) glitch::video::ILookupTableGenerator::generate(float *,unsigned int)
// void glitch::video::ILookupTableGenerator::generate();
// [0xe54050] (9 bytes) glitch::video::ILookupTableGenerator::updateHashName(void)
// void glitch::video::ILookupTableGenerator::updateHashName();
// [0xe54060] (27 bytes) glitch::video::IRenderTarget::~IRenderTarget()
// void glitch::video::IRenderTarget::~IRenderTarget(glitch::video::IRenderTarget *this);
// [0xe54080] (9 bytes) glitch::video::IImageLoader::hasTextureLoadInterface(void)const
// int glitch::video::IImageLoader::hasTextureLoadInterface();
// [0xe54090] (12 bytes) glitch::video::IImageLoader::hasImageLoadInterface(void)const
// int glitch::video::IImageLoader::hasImageLoadInterface();
// [0xe540a0] (9 bytes) glitch::video::IImageLoader::loadTextureHeader(glitch::io::IReadFile *,glitch::video::STextureDesc &)const
// int glitch::video::IImageLoader::loadTextureHeader();
// [0xe540b0] (9 bytes) glitch::video::IImageLoader::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// int glitch::video::IImageLoader::loadTextureData();
// [0xe540c0] (9 bytes) glitch::video::IImageLoader::loadTextureData(glitch::io::IReadFile *,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::STextureDesc const&)const
// int glitch::video::IImageLoader::loadTextureData();
// [0xe540d0] (12 bytes) glitch::video::CImageLoaderDDS::hasTextureLoadInterface(void)const
// int glitch::video::CImageLoaderDDS::hasTextureLoadInterface();
// [0xe540e0] (12 bytes) glitch::video::CImageLoaderJPG::hasTextureLoadInterface(void)const
// int glitch::video::CImageLoaderJPG::hasTextureLoadInterface();
// [0xe540f0] (12 bytes) glitch::video::CImageLoaderPng::hasTextureLoadInterface(void)const
// int glitch::video::CImageLoaderPng::hasTextureLoadInterface();
// [0xe54100] (12 bytes) glitch::video::CImageLoaderTGA::hasTextureLoadInterface(void)const
// int glitch::video::CImageLoaderTGA::hasTextureLoadInterface();
// [0xe54110] (12 bytes) glitch::video::CImageLoaderPVR::hasTextureLoadInterface(void)const
// int glitch::video::CImageLoaderPVR::hasTextureLoadInterface();
// [0xe54120] (27 bytes) glitch::video::IImageLoader::~IImageLoader()
// void glitch::video::IImageLoader::~IImageLoader(glitch::video::IImageLoader *this);
// [0xe54140] (9 bytes) glitch::video::CImageLoaderJPG::CDataReader::readAllImpl(void *)
// int glitch::video::CImageLoaderJPG::CDataReader::readAllImpl();
// [0xe54150] (9 bytes) glitch::video::CImageLoaderJPG::CDataReader::readNextFaceImpl(glitch::video::ITexture *,void *)
// int glitch::video::CImageLoaderJPG::CDataReader::readNextFaceImpl();
// [0xe54160] (12 bytes) glitch::video::CImageLoaderKTX::hasTextureLoadInterface(void)const
// int glitch::video::CImageLoaderKTX::hasTextureLoadInterface();
// [0xe54170] (9 bytes) glitch::video::CImageLoaderKTX::hasImageLoadInterface(void)const
// int glitch::video::CImageLoaderKTX::hasImageLoadInterface();
// [0xe54180] (9 bytes) glitch::video::CImageLoaderKTX::CDataReader::readAllImpl(void *)
// int glitch::video::CImageLoaderKTX::CDataReader::readAllImpl();
// [0xe54190] (9 bytes) glitch::video::CImageLoaderKTX::CDataReader::readNextFaceImpl(glitch::video::ITexture *,void *)
// int glitch::video::CImageLoaderKTX::CDataReader::readNextFaceImpl();
// [0xe541a0] (9 bytes) glitch::video::CImageLoaderPng::CDataReader::readAllImpl(void *)
// int glitch::video::CImageLoaderPng::CDataReader::readAllImpl();
// [0xe541b0] (9 bytes) glitch::video::CImageLoaderPng::CDataReader::readNextFaceImpl(glitch::video::ITexture *,void *)
// int glitch::video::CImageLoaderPng::CDataReader::readNextFaceImpl();
// [0xe541c0] (27 bytes) glitch::video::IImageWriter::~IImageWriter()
// void glitch::video::IImageWriter::~IImageWriter(glitch::video::IImageWriter *this);
// [0xe541e0] (45 bytes) glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::~CPackedContiguousMipmapChainDataReader()
// void glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::~CPackedContiguousMipmapChainDataReader( glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader *this);
// [0xe54210] (45 bytes) glitch::video::CImageLoaderPng::CDataReader::~CDataReader()
// void glitch::video::CImageLoaderPng::CDataReader::~CDataReader( glitch::video::CImageLoaderPng::CDataReader *this);
// [0xe54240] (45 bytes) glitch::video::CImageLoaderKTX::CDataReader::~CDataReader()
// void glitch::video::CImageLoaderKTX::CDataReader::~CDataReader( glitch::video::CImageLoaderKTX::CDataReader *this);
// [0xe54270] (45 bytes) glitch::video::CImageLoaderJPG::CDataReader::~CDataReader()
// void glitch::video::CImageLoaderJPG::CDataReader::~CDataReader( glitch::video::CImageLoaderJPG::CDataReader *this);
// [0xe542c0] (27 bytes) glitch::video::CImageWriterPVR::~CImageWriterPVR()
// void glitch::video::CImageWriterPVR::~CImageWriterPVR(glitch::video::CImageWriterPVR *this);
// [0xe542e0] (27 bytes) glitch::video::CImageWriterPNG::~CImageWriterPNG()
// void glitch::video::CImageWriterPNG::~CImageWriterPNG(glitch::video::CImageWriterPNG *this);
// [0xe54300] (27 bytes) glitch::video::CImageWriterKTX::~CImageWriterKTX()
// void glitch::video::CImageWriterKTX::~CImageWriterKTX(glitch::video::CImageWriterKTX *this);
// [0xe54320] (27 bytes) glitch::video::CImageWriterJPG::~CImageWriterJPG()
// void glitch::video::CImageWriterJPG::~CImageWriterJPG(glitch::video::CImageWriterJPG *this);
// [0xe54340] (27 bytes) glitch::video::CImageWriterDDS::~CImageWriterDDS()
// void glitch::video::CImageWriterDDS::~CImageWriterDDS(glitch::video::CImageWriterDDS *this);
// [0xe54360] (27 bytes) glitch::video::CImageLoaderTGA::~CImageLoaderTGA()
// void glitch::video::CImageLoaderTGA::~CImageLoaderTGA(glitch::video::CImageLoaderTGA *this);
// [0xe54380] (27 bytes) glitch::video::CImageLoaderDDS::~CImageLoaderDDS()
// void glitch::video::CImageLoaderDDS::~CImageLoaderDDS(glitch::video::CImageLoaderDDS *this);
// [0xe543a0] (45 bytes) glitch::video::CImageLoaderDDS::~CImageLoaderDDS()
// void glitch::video::CImageLoaderDDS::~CImageLoaderDDS(glitch::video::CImageLoaderDDS *this);
// [0xe543d0] (45 bytes) glitch::video::CImageLoaderTGA::~CImageLoaderTGA()
// void glitch::video::CImageLoaderTGA::~CImageLoaderTGA(glitch::video::CImageLoaderTGA *this);
// [0xe54400] (45 bytes) glitch::video::CImageWriterDDS::~CImageWriterDDS()
// void glitch::video::CImageWriterDDS::~CImageWriterDDS(glitch::video::CImageWriterDDS *this);
// [0xe54430] (45 bytes) glitch::video::CImageWriterJPG::~CImageWriterJPG()
// void glitch::video::CImageWriterJPG::~CImageWriterJPG(glitch::video::CImageWriterJPG *this);
// [0xe54460] (45 bytes) glitch::video::CImageWriterKTX::~CImageWriterKTX()
// void glitch::video::CImageWriterKTX::~CImageWriterKTX(glitch::video::CImageWriterKTX *this);
// [0xe54490] (45 bytes) glitch::video::CImageWriterPNG::~CImageWriterPNG()
// void glitch::video::CImageWriterPNG::~CImageWriterPNG(glitch::video::CImageWriterPNG *this);
// [0xe544c0] (45 bytes) glitch::video::CImageWriterPVR::~CImageWriterPVR()
// void glitch::video::CImageWriterPVR::~CImageWriterPVR(glitch::video::CImageWriterPVR *this);
// [0xe54520] (45 bytes) glitch::video::IImageWriter::~IImageWriter()
// void glitch::video::IImageWriter::~IImageWriter(glitch::video::IImageWriter *this);
// [0xe54550] (45 bytes) glitch::video::IImageLoader::~IImageLoader()
// void glitch::video::IImageLoader::~IImageLoader(glitch::video::IImageLoader *this);
// [0xe54580] (45 bytes) glitch::video::IRenderTarget::~IRenderTarget()
// void glitch::video::IRenderTarget::~IRenderTarget(glitch::video::IRenderTarget *this);
// [0xe545b0] (99 bytes) glitch::video::CDefaultTexturePolicy::~CDefaultTexturePolicy()
// void glitch::video::CDefaultTexturePolicy::~CDefaultTexturePolicy(glitch::video::CDefaultTexturePolicy *this);
// [0xe54620] (62 bytes) glitch::video::CImageLoaderPng::CDataReader::setMipmapRange(std::pair<unsigned char,unsigned char> const&)
// int glitch::video::CImageLoaderPng::CDataReader::setMipmapRange(int a1, int a2);
// [0xe54660] (62 bytes) glitch::video::CImageLoaderJPG::CDataReader::setMipmapRange(std::pair<unsigned char,unsigned char> const&)
// int glitch::video::CImageLoaderJPG::CDataReader::setMipmapRange(int a1, int a2);
// [0xe546a0] (67 bytes) glitch::video::CImageLoaderJPG::CDataReader::~CDataReader()
// void glitch::video::CImageLoaderJPG::CDataReader::~CDataReader( glitch::video::CImageLoaderJPG::CDataReader *this);
// [0xe546f0] (67 bytes) glitch::video::CImageLoaderKTX::CDataReader::~CDataReader()
// void glitch::video::CImageLoaderKTX::CDataReader::~CDataReader( glitch::video::CImageLoaderKTX::CDataReader *this);
// [0xe54740] (67 bytes) glitch::video::CImageLoaderPng::CDataReader::~CDataReader()
// void glitch::video::CImageLoaderPng::CDataReader::~CDataReader( glitch::video::CImageLoaderPng::CDataReader *this);
// [0xe54790] (67 bytes) glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::~CPackedContiguousMipmapChainDataReader()
// void glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::~CPackedContiguousMipmapChainDataReader( glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader *this);
// [0xe547e0] (107 bytes) glitch::video::CDefaultTexturePolicy::~CDefaultTexturePolicy()
// void glitch::video::CDefaultTexturePolicy::~CDefaultTexturePolicy(glitch::video::CDefaultTexturePolicy *this);
// [0xe54850] (409 bytes) glitch::video::CImageLoaderKTX::CDataReader::setMipmapRange(std::pair<unsigned char,unsigned char> const&)
// int glitch::video::CImageLoaderKTX::CDataReader::setMipmapRange(int a1, uint16_t *a2);
// [0xe549f0] (106 bytes) glitch::video::CLinearLookupTableGenerator::~CLinearLookupTableGenerator()
// void glitch::video::CLinearLookupTableGenerator::~CLinearLookupTableGenerator( glitch::video::CLinearLookupTableGenerator *this);
// [0xe54a60] (62 bytes) glitch::video::SShaderParameterDef::~SShaderParameterDef()
// void glitch::video::SShaderParameterDef::~SShaderParameterDef( glitch::core::detail::SSharedStringHeapEntry::SData **this);
// [0xe54af0] (98 bytes) glitch::video::ILookupTableGenerator::~ILookupTableGenerator()
// void glitch::video::ILookupTableGenerator::~ILookupTableGenerator(glitch::video::ILookupTableGenerator *this);
// [0xe54b60] (106 bytes) glitch::video::CExpLookupTableGenerator::~CExpLookupTableGenerator()
// void glitch::video::CExpLookupTableGenerator::~CExpLookupTableGenerator( glitch::video::CExpLookupTableGenerator *this);
// [0xe54bd0] (106 bytes) glitch::video::CPowLookupTableGenerator::~CPowLookupTableGenerator()
// void glitch::video::CPowLookupTableGenerator::~CPowLookupTableGenerator( glitch::video::CPowLookupTableGenerator *this);
// [0xe54c40] (98 bytes) glitch::video::CLinearLookupTableGenerator::~CLinearLookupTableGenerator()
// void glitch::video::CLinearLookupTableGenerator::~CLinearLookupTableGenerator( glitch::video::CLinearLookupTableGenerator *this);
// [0xe54cb0] (98 bytes) glitch::video::CExpLookupTableGenerator::~CExpLookupTableGenerator()
// void glitch::video::CExpLookupTableGenerator::~CExpLookupTableGenerator( glitch::video::CExpLookupTableGenerator *this);
// [0xe54d20] (98 bytes) glitch::video::CExp2LookupTableGenerator::~CExp2LookupTableGenerator()
// void glitch::video::CExp2LookupTableGenerator::~CExp2LookupTableGenerator( glitch::video::CExp2LookupTableGenerator *this);
// [0xe54d90] (98 bytes) glitch::video::CPowLookupTableGenerator::~CPowLookupTableGenerator()
// void glitch::video::CPowLookupTableGenerator::~CPowLookupTableGenerator( glitch::video::CPowLookupTableGenerator *this);
// [0xe54e00] (98 bytes) glitch::video::CAttenautionLookupTableGenerator::~CAttenautionLookupTableGenerator()
// void glitch::video::CAttenautionLookupTableGenerator::~CAttenautionLookupTableGenerator( glitch::video::CAttenautionLookupTableGenerator *this);
// [0xe54e70] (106 bytes) glitch::video::ILookupTableGenerator::~ILookupTableGenerator()
// void glitch::video::ILookupTableGenerator::~ILookupTableGenerator(glitch::video::ILookupTableGenerator *this);
// [0xe54ee0] (106 bytes) glitch::video::CAttenautionLookupTableGenerator::~CAttenautionLookupTableGenerator()
// void glitch::video::CAttenautionLookupTableGenerator::~CAttenautionLookupTableGenerator( glitch::video::CAttenautionLookupTableGenerator *this);
// [0xe54f50] (106 bytes) glitch::video::CExp2LookupTableGenerator::~CExp2LookupTableGenerator()
// void glitch::video::CExp2LookupTableGenerator::~CExp2LookupTableGenerator( glitch::video::CExp2LookupTableGenerator *this);
// [0xe55020] (98 bytes) glitch::video::pixel_format::getMipmapCount(unsigned int,unsigned int,unsigned int)
// unsigned int glitch::video::pixel_format::getMipmapCount( glitch::video::pixel_format *this, unsigned int a2, unsigned int a3);
// [0xe55090] (327 bytes) glitch::video::CTextureManager::findTexture(char const*)const
// glitch::video::CTextureManager *glitch::video::CTextureManager::findTexture( glitch::video::CTextureManager *this, pthread_mutex_t **a2, char *s1);
// [0xe551e0] (87 bytes) glitch::video::CGlobalMaterialParameterManager::getParameterDef(unsigned short)const
// uint32_t *glitch::video::CGlobalMaterialParameterManager::getParameterDef( glitch::video::CGlobalMaterialParameterManager *this, uint16_t a2);
// [0xe552a0] (1664 bytes) glitch::video::detail::renderpass::SRenderState::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::detail::renderpass::SRenderState::serializeAttributes( glitch::video::detail::renderpass::SRenderState *this, glitch::io::IAttributes *a2);
// [0xe55920] (730 bytes) glitch::video::CMaterialRendererManager::SCreationState::makeTechnique(void)
// int glitch::video::CMaterialRendererManager::SCreationState::makeTechnique( glitch::video::CMaterialRendererManager::SCreationState *this);
// [0xe55c00] (342 bytes) glitch::video::CImageLoaderPng::CDataReader::readNextImageImpl(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy &,glitch::video::E_TEXTURE_CUBE_MAP_FACE &,unsigned char &)
// int glitch::video::CImageLoaderPng::CDataReader::readNextImageImpl(int a1, uint32_t *a2, uint32_t *a3, uint8_t *a4);
// [0xe55d60] (397 bytes) glitch::video::CImageLoaderJPG::CDataReader::readNextImageImpl(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy &,glitch::video::E_TEXTURE_CUBE_MAP_FACE &,unsigned char &)
// int glitch::video::CImageLoaderJPG::CDataReader::readNextImageImpl(int a1, uint32_t *a2, uint32_t *a3, uint8_t *a4);
// [0xe55ef0] (140 bytes) glitch::video::CImageLoaderKTX::CDataReader::readImageSize(glitch::io::IReadFile *)const
// uint32_t glitch::video::CImageLoaderKTX::CDataReader::readImageSize(int a1, int a2);
// [0xe55f80] (385 bytes) glitch::video::CImageLoaderKTX::CDataReader::readNextImageImpl(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy &,glitch::video::E_TEXTURE_CUBE_MAP_FACE &,unsigned char &)
// int glitch::video::CImageLoaderKTX::CDataReader::readNextImageImpl( int a1, uint32_t *a2, uint32_t *a3, uint8_t *a4);
// [0xe56110] (2917 bytes) glitch::video::CMaterialRendererManager::SCreationState::bindParameter(glitch::video::SShaderParameterDef const*,unsigned short,glitch::video::E_SHADER_PARAMETER_TYPE,glitch::video::STechnique const&,glitch::video::SRenderPass &,unsigned short,glitch::video::E_SHADER_STAGE)
// int glitch::video::CMaterialRendererManager::SCreationState::bindParameter( uint32_t *a1, int *a2, int16_t a3, int a4, int *a5, int a6, uint16_t a7, int a8);
// [0xe56c80] (1474 bytes) glitch::video::CMaterialRendererManager::SCreationState::createPinkWireFrameRenderPass(void)
// 0xe56c80 glitch::video::CMaterialRendererManager::SCreationState::createPinkWireFrameRenderPass(void)
// [0xe584e0] (11 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getThis(void)
// glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getThis( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this);
// [0xe584f0] (11 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getThis(void)const
// glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getThis( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this);
// [0xe58500] (12 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterBlock(void)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterBlock( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this);
// [0xe58510] (12 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterBlock(void)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterBlock( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this);
// [0xe58520] (43 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterDef(unsigned short)const
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterDef( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2);
// [0xe58550] (9 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setDirty(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setDirty();
// [0xe58560] (9 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setDirty(boost::intrusive_ptr<glitch::video::ITexture> const*,glitch::video::ITexture* const*)
// void glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setDirty();
// [0xe58570] (15 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt(int *,float)
// int *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, int *a2, float a3);
// [0xe58580] (17 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt(float *,int)
// float *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, float *a2, int a3);
// [0xe585a0] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt(glitch::video::SColorf *,glitch::core::vector4d<float> const&)
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe585c0] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt(glitch::core::vector4d<float> *,glitch::video::SColorf const&)
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe585e0] (17 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt(int const*,float &)const
// float *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, const int *a2, float *a3);
// [0xe58600] (15 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt(float const*,int &)const
// int *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, const float *a2, int *a3);
// [0xe58610] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt(glitch::video::SColorf const*,glitch::core::vector4d<float> &)const
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe58630] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt(glitch::core::vector4d<float> const*,glitch::video::SColorf &)const
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe58650] (13 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt(boost::intrusive_ptr<glitch::video::ITexture> const*,glitch::video::ITexture*&)const
// glitch::video::ITexture **glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, glitch::video::ITexture **a2, glitch::video::ITexture **a3);
// [0xe58660] (224 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter(unsigned short,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3);
// [0xe58740] (232 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter(unsigned short,unsigned int,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, unsigned int a3, glitch::core::CMatrix4<float> *a4);
// [0xe58830] (366 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter(unsigned short,glitch::core::CMatrix4<float> *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3, int a4);
// [0xe589a0] (224 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt(unsigned short,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3);
// [0xe58a80] (232 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt(unsigned short,unsigned int,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, unsigned int a3, glitch::core::CMatrix4<float> *a4);
// [0xe58b70] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt(unsigned short,glitch::core::CMatrix4<float> *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3, int a4);
// [0xe5e550] (11 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getThis(void)
// glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getThis( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this);
// [0xe5e560] (11 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getThis(void)const
// glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getThis( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this);
// [0xe5e570] (12 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterBlock(void)
// char *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterBlock( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this);
// [0xe5e580] (12 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterBlock(void)const
// char *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterBlock( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this);
// [0xe5e590] (30 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterDef(unsigned short)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterDef( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2);
// [0xe5e5b0] (33 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setDirty(void)
// glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setDirty( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this);
// [0xe5e5e0] (49 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setDirty(boost::intrusive_ptr<glitch::video::ITexture> const*,glitch::video::ITexture* const*)
// glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setDirty( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, glitch::video::ITexture *const *a2, glitch::video::ITexture *const *a3);
// [0xe5e620] (49 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt(int *,float)
// glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, int *a2, float a3);
// [0xe5e660] (52 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt(float *,int)
// glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, float *a2, int a3);
// [0xe5e6a0] (226 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt(glitch::video::SColorf *,glitch::core::vector4d<float> const&)
// float *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt( uint32_t *a1, float *a2, float *a3);
// [0xe5e790] (112 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt(glitch::core::vector4d<float> *,glitch::video::SColorf const&)
// float *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt( uint32_t *a1, float *a2, float *a3);
// [0xe5e800] (17 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt(int const*,float &)const
// float *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, const int *a2, float *a3);
// [0xe5e820] (15 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt(float const*,int &)const
// int *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, const float *a2, int *a3);
// [0xe5e830] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt(glitch::video::SColorf const*,glitch::core::vector4d<float> &)const
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe5e850] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt(glitch::core::vector4d<float> const*,glitch::video::SColorf &)const
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe5e870] (13 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt(boost::intrusive_ptr<glitch::video::ITexture> const*,glitch::video::ITexture*&)const
// glitch::video::ITexture **glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, glitch::video::ITexture **a2, glitch::video::ITexture **a3);
// [0xe5e880] (232 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter(unsigned short,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3);
// [0xe5e970] (232 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter(unsigned short,unsigned int,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, unsigned int a3, glitch::core::CMatrix4<float> *a4);
// [0xe5ea60] (358 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter(unsigned short,glitch::core::CMatrix4<float> *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3, int a4);
// [0xe5ebd0] (232 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt(unsigned short,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3);
// [0xe5ecc0] (107 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt(unsigned short,unsigned int,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, unsigned int a3, glitch::core::CMatrix4<float> *a4);
// [0xe5ed30] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt(unsigned short,glitch::core::CMatrix4<float> *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3, int a4);
// [0xe64de0] (11 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getThis(void)
// glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getThis( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this);
// [0xe64df0] (11 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getThis(void)const
// glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getThis( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this);
// [0xe64e00] (12 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterBlock(void)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterBlock( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this);
// [0xe64e10] (12 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterBlock(void)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterBlock( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this);
// [0xe64e20] (27 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterDef(unsigned short)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterDef( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2);
// [0xe64e40] (9 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setDirty(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setDirty();
// [0xe64e50] (9 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setDirty(boost::intrusive_ptr<glitch::video::ITexture> const*,glitch::video::ITexture* const*)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setDirty();
// [0xe64e60] (15 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt(int *,float)
// int *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, int *a2, float a3);
// [0xe64e70] (17 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt(float *,int)
// float *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, float *a2, int a3);
// [0xe64e90] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt(glitch::video::SColorf *,glitch::core::vector4d<float> const&)
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe64eb0] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt(glitch::core::vector4d<float> *,glitch::video::SColorf const&)
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe64ed0] (17 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt(int const*,float &)const
// float *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, const int *a2, float *a3);
// [0xe64ef0] (15 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt(float const*,int &)const
// int *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, const float *a2, int *a3);
// [0xe64f00] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt(glitch::video::SColorf const*,glitch::core::vector4d<float> &)const
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe64f20] (31 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt(glitch::core::vector4d<float> const*,glitch::video::SColorf &)const
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt( int a1, uint32_t *a2, uint32_t *a3);
// [0xe64f40] (13 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt(boost::intrusive_ptr<glitch::video::ITexture> const*,glitch::video::ITexture*&)const
// glitch::video::ITexture **glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, glitch::video::ITexture **a2, glitch::video::ITexture **a3);
// [0xe64f50] (192 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter(unsigned short,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3);
// [0xe65010] (232 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter(unsigned short,unsigned int,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, unsigned int a3, glitch::core::CMatrix4<float> *a4);
// [0xe65100] (350 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter(unsigned short,glitch::core::CMatrix4<float> *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3, int a4);
// [0xe65260] (192 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt(unsigned short,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3);
// [0xe65320] (232 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt(unsigned short,unsigned int,glitch::core::CMatrix4<float> &)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, unsigned int a3, glitch::core::CMatrix4<float> *a4);
// [0xe65410] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt(unsigned short,glitch::core::CMatrix4<float> *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, glitch::core::CMatrix4<float> *a3, int a4);
// [0xe6c700] (250 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter(unsigned short,unsigned int,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, unsigned int a3, const glitch::core::CMatrix4<float> *a4);
// [0xe6c800] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt(unsigned short,unsigned int,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, unsigned int a3, const glitch::core::CMatrix4<float> *a4);
// [0xe6c840] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter(unsigned short,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3);
// [0xe6c880] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt(unsigned short,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3);
// [0xe6c8c0] (288 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter(unsigned short,glitch::core::CMatrix4<float> const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, unsigned int a4, unsigned int a5, int a6);
// [0xe6c9e0] (75 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt(unsigned short,glitch::core::CMatrix4<float> const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, unsigned int a4, unsigned int a5, int a6);
// [0xe6ca30] (109 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter(unsigned short,glitch::core::CMatrix4<float> const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, int a4);
// [0xe6caa0] (109 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt(unsigned short,glitch::core::CMatrix4<float> const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, int a4);
// [0xe6cb10] (272 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter(unsigned short,glitch::core::CMatrix4<float> const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, unsigned int a4, unsigned int a5, int a6);
// [0xe6cc20] (75 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt(unsigned short,glitch::core::CMatrix4<float> const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, unsigned int a4, unsigned int a5, int a6);
// [0xe6cc70] (96 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter(unsigned short,glitch::core::CMatrix4<float> const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, int a4);
// [0xe6ccd0] (96 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt(unsigned short,glitch::core::CMatrix4<float> const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, int a4);
// [0xe6cd30] (296 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter(unsigned short,glitch::core::CMatrix4<float> const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, unsigned int a4, unsigned int a5, int a6);
// [0xe6ce60] (75 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt(unsigned short,glitch::core::CMatrix4<float> const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, unsigned int a4, unsigned int a5, int a6);
// [0xe6ceb0] (119 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter(unsigned short,glitch::core::CMatrix4<float> const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, int a4);
// [0xe6cf30] (119 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt(unsigned short,glitch::core::CMatrix4<float> const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3, int a4);
// [0xe6cfb0] (274 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter(unsigned short,unsigned int,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, unsigned int a3, const glitch::core::CMatrix4<float> *a4);
// [0xe6d0d0] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt(unsigned short,unsigned int,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, unsigned int a3, const glitch::core::CMatrix4<float> *a4);
// [0xe6d110] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter(unsigned short,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3);
// [0xe6d150] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt(unsigned short,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3);
// [0xe6d190] (245 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter(unsigned short,unsigned int,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, unsigned int a3, const glitch::core::CMatrix4<float> *a4);
// [0xe6d290] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt(unsigned short,unsigned int,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, unsigned int a3, const glitch::core::CMatrix4<float> *a4);
// [0xe6d2d0] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter(unsigned short,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3);
// [0xe6d310] (59 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt(unsigned short,glitch::core::CMatrix4<float> const&)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2, const glitch::core::CMatrix4<float> *a3);
// [0xe74270] (45 bytes) glitch::video::CVirtualTexture::~CVirtualTexture()
// void glitch::video::CVirtualTexture::~CVirtualTexture(glitch::video::CVirtualTexture *this);
// [0xe742a0] (67 bytes) glitch::video::CVirtualTexture::~CVirtualTexture()
// void glitch::video::CVirtualTexture::~CVirtualTexture(glitch::video::CVirtualTexture *this);
// [0xe742f0] (72 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt(boost::intrusive_ptr<glitch::video::ITexture> *,glitch::video::ITexture*)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, boost::intrusive_ptr<glitch::video::ITexture> *a2, glitch::video::ITexture *a3);
// [0xe74340] (107 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt(boost::intrusive_ptr<glitch::video::ITexture> *,glitch::video::ITexture*)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, glitch::video::ITexture **a2, glitch::video::ITexture *a3);
// [0xe743b0] (72 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt(boost::intrusive_ptr<glitch::video::ITexture> *,glitch::video::ITexture*)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterAt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, boost::intrusive_ptr<glitch::video::ITexture> *a2, glitch::video::ITexture *a3);
// [0xe74400] (322 bytes) glitch::video::detail::setArrayParameter(glitch::video::SShaderParameterDef const*,boost::intrusive_ptr<glitch::video::ITexture> *,glitch::video::ITexture* const*,unsigned int,unsigned int,int)
// void glitch::video::detail::setArrayParameter( glitch::video::detail *this, const glitch::video::SShaderParameterDef *a2, boost::intrusive_ptr<glitch::video::ITexture> *a3, glitch::video::ITexture *const *a4, signed int a5, unsigned int a6);
// [0xe755c0] (322 bytes) glitch::video::detail::setArrayParameter(glitch::video::SShaderParameterDef const*,boost::intrusive_ptr<glitch::video::ITexture> *,boost::intrusive_ptr<glitch::video::ITexture> const*,unsigned int,unsigned int,int)
// void glitch::video::detail::setArrayParameter( glitch::video::detail *this, const glitch::video::SShaderParameterDef *a2, boost::intrusive_ptr<glitch::video::ITexture> *a3, const boost::intrusive_ptr<glitch::video::ITexture> *a4, signed int a5, unsigned int a6);
// [0xe77300] (173 bytes) glitch::video::CTextureManager::bindTexture(glitch::video::ITexture *)
// char glitch::video::CTextureManager::bindTexture( glitch::video::CTextureManager *this, glitch::video::ITexture *a2);
// [0xe776a0] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, int a5);
// [0xe778e0] (3817 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::serializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, glitch::io::IAttributes *a2);
// [0xe78ab0] (704 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter( glitch::video::CGlobalMaterialParameterManager *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, boost::intrusive_ptr<glitch::video::ITexture> *a5, unsigned int a6, int a7);
// [0xe78d70] (117 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter( glitch::video::CGlobalMaterialParameterManager *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, int a5);
// [0xe78df0] (4704 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::deserializeAttributes(glitch::io::IAttributes *)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::deserializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, glitch::io::IAttributes *a2);
// [0xe7a170] (704 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, boost::intrusive_ptr<glitch::video::ITexture> *a5, unsigned int a6, int a7);
// [0xe7a430] (104 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, int a5);
// [0xe7a4a0] (1283 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::grabParameters(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::grabParameters( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this);
// [0xe7a9b0] (4023 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::deserializeAttributes(glitch::io::IAttributes *)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::deserializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, glitch::io::IAttributes *a2);
// [0xe7b970] (3332 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::serializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, glitch::io::IAttributes *a2);
// [0xe7c680] (3466 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::serializeAttributes(glitch::io::IAttributes *)const
// uint32_t *glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::serializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, glitch::io::IAttributes *a2);
// [0xe7d500] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, int a5);
// [0xe7d840] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, int a5);
// [0xe7db20] (704 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, boost::intrusive_ptr<glitch::video::ITexture> *a5, unsigned int a6, unsigned int a7);
// [0xe7dde0] (104 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, unsigned int a5);
// [0xe7df20] (704 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, boost::intrusive_ptr<glitch::video::ITexture> *a5, unsigned int a6, unsigned int a7);
// [0xe7e1e0] (127 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, unsigned int a5);
// [0xe7e300] (704 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt( glitch::video::CGlobalMaterialParameterManager *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, boost::intrusive_ptr<glitch::video::ITexture> *a5, unsigned int a6, unsigned int a7);
// [0xe7e5c0] (117 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt( glitch::video::CGlobalMaterialParameterManager *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, unsigned int a5);
// [0xe7e640] (4133 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::deserializeAttributes(glitch::io::IAttributes *)
// void glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::deserializeAttributes( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, glitch::io::IAttributes *a2);
// [0xe7f790] (704 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,unsigned int,unsigned int,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, boost::intrusive_ptr<glitch::video::ITexture> *a5, unsigned int a6, int a7);
// [0xe7fa50] (127 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*,int)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, int a5);
// [0xe7fad0] (1067 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::grabParameters(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::grabParameters( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this);
// [0xe7ff00] (1067 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::grabParameters(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::grabParameters( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this);
// [0xe80330] (707 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::dropParameter(unsigned short)
// void glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::dropParameter( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this, uint16_t a2);
// [0xe80600] (209 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::dropParameters(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::dropParameters( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this);
// [0xe80a20] (715 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::dropParameter(unsigned short)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::dropParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this, uint16_t a2);
// [0xe80cf0] (72 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::dropParameters(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::dropParameters( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this);
// [0xe80d40] (707 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::dropParameter(unsigned short)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::dropParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this, uint16_t a2);
// [0xe81010] (72 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::dropParameters(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::dropParameters( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this);
// [0xe81710] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, int a5);
// [0xe81a70] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, int a5);
// [0xe81dc0] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt(unsigned short,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *,int)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *a1, uint16_t a2, int a3, glitch::core::CMatrix4<float> *a4, int a5);
// [0xe82110] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, uint16_t a2, unsigned int a3, int a4, glitch::core::CMatrix4<float> *a5);
// [0xe82350] (636 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::initParametersToIdentity(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::initParametersToIdentity( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *this);
// [0xe825d0] (814 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::initParametersToIdentity(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::initParametersToIdentity( glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager, glitch::video::detail::globalmaterialparametermanager::SEmptyBase> *this);
// [0xe82900] (632 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::initParametersToIdentity(void)
// void glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::initParametersToIdentity( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *this);
// [0xe82c60] (620 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter( int a1, uint16_t a2, unsigned int a3, int a4, int *a5);
// [0xe82fc0] (620 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter( int a1, uint16_t a2, unsigned int a3, int a4, int *a5);
// [0xe83310] (620 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter( glitch::video::CGlobalMaterialParameterManager *a1, uint16_t a2, unsigned int a3, int a4, int *a5);
// [0xe83660] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, uint16_t a2, unsigned int a3, int a4, glitch::core::CMatrix4<float> *a5);
// [0xe83980] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter( glitch::video::CGlobalMaterialParameterManager *a1, uint16_t a2, unsigned int a3, int a4, glitch::core::CMatrix4<float> *a5);
// [0xe83ce0] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> *a1, uint16_t a2, unsigned int a3, int a4, glitch::core::CMatrix4<float> *a5);
// [0xe84010] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*)
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt( glitch::video::CGlobalMaterialParameterManager *a1, uint16_t a2, unsigned int a3, int a4, glitch::core::CMatrix4<float> *a5);
// [0xe84340] (620 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt( int a1, uint16_t a2, unsigned int a3, int a4, float *a5);
// [0xe846a0] (564 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void const*)
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt( glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>> *a1, uint16_t a2, unsigned int a3, int a4, glitch::core::CMatrix4<float> *a5);
// [0xe849e0] (620 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt( int a1, uint16_t a2, unsigned int a3, int a4, float *a5);
// [0xe84d40] (620 bytes) glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt(unsigned short,unsigned int,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,void *)const
// int glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt( glitch::video::CGlobalMaterialParameterManager *a1, uint16_t a2, unsigned int a3, int a4, float *a5);
// [0xe885d0] (60 bytes) glitch::video::CFPSCounter::CFPSCounter(void)
// struct glitch::video::CFPSCounter *glitch::video::CFPSCounter::CFPSCounter(glitch::video::CFPSCounter *this);
// [0xe88610] (423 bytes) glitch::video::CFPSCounter::registerFrame(unsigned long long,unsigned int,unsigned int const*,unsigned int)
// __m128i *glitch::video::CFPSCounter::registerFrame( __m128 a1, __m128i *this, uint64_t a3, unsigned int a4, const unsigned int *a5, unsigned int a6);
// [0xe887c0] (122 bytes) glitch::video::CVertexAttributeMap::CVertexAttributeMap(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&)
// const boost::intrusive_ptr<glitch::video::CVertexStreams const> *glitch::video::CVertexAttributeMap::CVertexAttributeMap( glitch::video::CVertexAttributeMap *this, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a2);
// [0xe88840] (69 bytes) glitch::video::CVertexAttributeMap::CVertexAttributeMap(unsigned char const*)
// glitch::video::CVertexAttributeMap *glitch::video::CVertexAttributeMap::CVertexAttributeMap( glitch::video::CVertexAttributeMap *this, const uint8_t *a2);
// [0xe88890] (64 bytes) glitch::video::CVertexAttributeMap::operator=(glitch::video::CVertexAttributeMap const&)
// glitch::video::CVertexAttributeMap *glitch::video::CVertexAttributeMap::operator=( glitch::video::CVertexAttributeMap *this, const glitch::video::CVertexAttributeMap *a2);
// [0xe888d0] (48 bytes) glitch::video::CVertexAttributeMap::CVertexAttributeMap(glitch::video::CVertexAttributeMap const&)
// glitch::video::CVertexAttributeMap *glitch::video::CVertexAttributeMap::CVertexAttributeMap( glitch::video::CVertexAttributeMap *this, const glitch::video::CVertexAttributeMap *a2);
// [0xe88900] (350 bytes) glitch::video::CVertexStreams::CVertexStreams(unsigned int,unsigned int,unsigned char,unsigned char,glitch::video::SVertexStream const*,glitch::core::vector3d<float> const*)
// void *glitch::video::CVertexStreams::CVertexStreams( int a1, int a2, int a3, uint8_t a4, uint8_t a5, int *a6, void *src);
// [0xe88a60] (61 bytes) glitch::video::CVertexStreams::~CVertexStreams()
// void glitch::video::CVertexStreams::~CVertexStreams(glitch::video::CVertexStreams *this);
// [0xe88aa0] (210 bytes) glitch::video::CVertexStreams::allocate(unsigned int,unsigned int,unsigned char,unsigned char,glitch::video::SVertexStream const*,glitch::core::vector3d<float> const*)
// glitch::video::CVertexStreams **glitch::video::CVertexStreams::allocate( glitch::video::CVertexStreams **a1, int a2, int a3, uint8_t a4, uint8_t a5, int *a6, void *a7);
// [0xe88b80] (195 bytes) glitch::video::CVertexStreams::allocate(unsigned char,unsigned int)
// glitch::video::CVertexStreams **glitch::video::CVertexStreams::allocate( glitch::video::CVertexStreams **this, uint8_t a2, unsigned int a3);
// [0xe88c50] (114 bytes) glitch::video::CVertexStreams::allocate(unsigned int)
// glitch::video::CVertexStreams **glitch::video::CVertexStreams::allocate( glitch::video::CVertexStreams **this, unsigned int a2);
// [0xe88cd0] (121 bytes) glitch::video::CVertexStreams::clone(void)const
// glitch::video::CVertexStreams **glitch::video::CVertexStreams::clone( glitch::video::CVertexStreams **this, int a2);
// [0xe88d50] (51 bytes) glitch::video::CVertexStreams::getActiveAttributeMask(void)const
// int glitch::video::CVertexStreams::getActiveAttributeMask(glitch::video::CVertexStreams *this);
// [0xe88d90] (71 bytes) glitch::video::CVertexStreams::getStream(glitch::video::E_VERTEX_ATTRIBUTE,glitch::video::SVertexStream const*,glitch::video::SVertexStream const*)const
// int glitch::video::CVertexStreams::getStream(int a1, int a2, int a3, int a4);
// [0xe88de0] (223 bytes) glitch::video::CVertexAttributeMap::set(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,unsigned int,unsigned char const*,bool)
// int glitch::video::CVertexAttributeMap::set( glitch::video::CVertexAttributeMap *this, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a2, unsigned int a3, const uint8_t *a4, bool a5);
// [0xe88ec0] (142 bytes) glitch::video::CVertexAttributeMap::CVertexAttributeMap(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,unsigned int,unsigned char const*,bool)
// int glitch::video::CVertexAttributeMap::CVertexAttributeMap( glitch::video::CVertexAttributeMap *this, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a2, unsigned int a3, const uint8_t *a4, bool a5);
// [0xe88f50] (71 bytes) glitch::video::CVertexStreams::getStream(glitch::video::E_VERTEX_ATTRIBUTE,glitch::video::SVertexStream *,glitch::video::SVertexStream *)
// int glitch::video::CVertexStreams::getStream(int a1, int a2, int a3, int a4);
// [0xe88fa0] (304 bytes) glitch::video::CVertexStreams::copyStreams(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,unsigned int,unsigned int,int,unsigned int)
// unsigned int glitch::video::CVertexStreams::copyStreams( glitch::video::CVertexStreams *this, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6);
// [0xe890d0] (35 bytes) glitch::video::CVertexStreams::addOffset(int)
// glitch::video::CVertexStreams *glitch::video::CVertexStreams::addOffset( glitch::video::CVertexStreams *this, int a2);
// [0xe89100] (171 bytes) glitch::video::CVertexStreams::isHomogeneous(unsigned int)const
// int glitch::video::CVertexStreams::isHomogeneous(glitch::video::CVertexStreams *this, unsigned int a2);
// [0xe891b0] (374 bytes) glitch::video::CVertexStreams::computeBoundingBox(unsigned int,unsigned int,glitch::core::aabbox3d<float> &)const
// float *glitch::video::CVertexStreams::computeBoundingBox(int a1, int a2, int a3, float *a4);
// [0xe89330] (72 bytes) glitch::video::CVertexStreams::updateHomogeneityInternal(bool)
// void glitch::video::CVertexStreams::updateHomogeneityInternal(glitch::video::CVertexStreams *this, bool a2);
// [0xe89380] (237 bytes) glitch::video::CVertexStreams::setupStreams(glitch::video::SVertexStreamData const*,unsigned int,bool)
// int glitch::video::CVertexStreams::setupStreams( glitch::video::CVertexStreams *a1, volatile int32_t **a2, int a3, bool a4);
// [0xe89470] (531 bytes) glitch::video::CVertexStreams::setupStreams(boost::intrusive_ptr<glitch::video::IBuffer> const&,unsigned int,bool,bool)
// int glitch::video::CVertexStreams::setupStreams( glitch::video::CVertexStreams *a1, volatile int32_t **a2, int a3, char a4, char a5);
// [0xe89690] (345 bytes) glitch::video::CVertexStreams::setStreams(boost::intrusive_ptr<glitch::video::CVertexStreams> const&,unsigned int,int,bool)
// int glitch::video::CVertexStreams::setStreams( glitch::video::CVertexStreams *a1, int *a2, int a3, int a4, char a5);
// [0xe8a920] (109 bytes) glitch::video::CVertexStreams::updateStatesInternal(bool)
// int glitch::video::CVertexStreams::updateStatesInternal(glitch::video::CVertexStreams *this, bool a2);
// [0xe8a990] (43 bytes) glitch::video::CVertexStreams::updateStates(bool)
// int glitch::video::CVertexStreams::updateStates(glitch::video::CVertexStreams *this, bool a2);
// [0xe8a9c0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_BUFFER_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe8a9e0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_BUFFER_USAGE *)
// char **glitch::video::getStringsInternal();
// [0xe8aa00] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_INDEX_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe8aa20] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_PRIMITIVE_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe8aa40] (296 bytes) glitch::video::CPrimitiveStream::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::video::CPrimitiveStream::deserializeAttributes(int a1, int a2);
// [0xe8ab70] (127 bytes) glitch::video::getPrimitiveCount(glitch::video::E_PRIMITIVE_TYPE,unsigned int)
// unsigned int glitch::video::getPrimitiveCount(int a1, unsigned int a2);
// [0xe8abf0] (462 bytes) glitch::video::CPrimitiveStream::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::video::CPrimitiveStream::serializeAttributes(int a1, int a2);
// [0xe8b860] (127 bytes) glitch::video::getTriangleCount(glitch::video::E_PRIMITIVE_TYPE,unsigned int)
// unsigned int glitch::video::getTriangleCount(int a1, unsigned int a2);
// [0xe8b8e0] (84 bytes) glitch::video::getIndexCount(glitch::video::E_PRIMITIVE_TYPE,unsigned int)
// int glitch::video::getIndexCount(int a1, int a2);
// [0xe8b940] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_QUERY_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe8b960] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_SYNC_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe8b980] (47 bytes) glitch::video::operator<(glitch::video::SVertexAttributeInfo const&,char const*)
// unsigned int glitch::video::operator<(const char **a1, char *s2);
// [0xe8b9b0] (47 bytes) glitch::video::operator<(char const*,glitch::video::SVertexAttributeInfo const&)
// unsigned int glitch::video::operator<(char *s1, const char **a2);
// [0xe8b9e0] (49 bytes) glitch::video::operator<(glitch::video::SVertexAttributeInfo const&,glitch::video::SVertexAttributeInfo const&)
// unsigned int glitch::video::operator<(const char **a1, const char **a2);
// [0xe8ba20] (49 bytes) glitch::video::operator==(glitch::video::SVertexAttributeInfo const&,char const*)
// bool glitch::video::operator==(const char **a1, char *s2);
// [0xe8ba60] (168 bytes) glitch::video::quick_binary_search(glitch::video::SVertexAttributeInfo const*,glitch::video::SVertexAttributeInfo const*,char const*)
// const char **glitch::video::quick_binary_search(const char **a1, unsigned int a2, char *a3);
// [0xe8bb10] (257 bytes) glitch::video::guessShaderVertexAttribute(char const*)
// int glitch::video::guessShaderVertexAttribute(glitch::video *this);
// [0xe95ae0] (1957 bytes) unsigned char * glitch::video::unpackTriangles<unsigned char>(glitch::video::E_PRIMITIVE_TYPE,unsigned int,unsigned int,glitch::video::E_INDEX_TYPE,void const*,unsigned char *,unsigned int,int)
// char *glitch::video::unpackTriangles<unsigned char>( int a1, unsigned int a2, unsigned int a3, int a4, uint8_t *a5, char *dest, int a7, int a8);
// [0xe96290] (1851 bytes) unsigned short * glitch::video::unpackTriangles<unsigned short>(glitch::video::E_PRIMITIVE_TYPE,unsigned int,unsigned int,glitch::video::E_INDEX_TYPE,void const*,unsigned short *,unsigned int,int)
// char *glitch::video::unpackTriangles<unsigned short>( int a1, unsigned int a2, unsigned int a3, int a4, uint16_t *a5, char *dest, int a7, int a8);
// [0xe969d0] (1728 bytes) unsigned int * glitch::video::unpackTriangles<unsigned int>(glitch::video::E_PRIMITIVE_TYPE,unsigned int,unsigned int,glitch::video::E_INDEX_TYPE,void const*,unsigned int *,unsigned int,int)
// char *glitch::video::unpackTriangles<unsigned int>( int a1, unsigned int a2, unsigned int a3, int a4, uint32_t *a5, char *dest, int a7, int a8);
// [0xe97090] (378 bytes) unsigned char * glitch::video::unpackTriangles<unsigned char>(glitch::video::E_PRIMITIVE_TYPE,unsigned int,unsigned int,unsigned char *,unsigned int,int)
// uint8_t *glitch::video::unpackTriangles<unsigned char>( int a1, unsigned int a2, unsigned int a3, uint8_t *a4, int a5, int a6);
// [0xe97210] (340 bytes) unsigned short * glitch::video::unpackTriangles<unsigned short>(glitch::video::E_PRIMITIVE_TYPE,unsigned int,unsigned int,unsigned short *,unsigned int,int)
// uint16_t *glitch::video::unpackTriangles<unsigned short>( int a1, unsigned int a2, unsigned int a3, uint16_t *a4, int a5, int a6);
// [0xe97370] (304 bytes) unsigned int * glitch::video::unpackTriangles<unsigned int>(glitch::video::E_PRIMITIVE_TYPE,unsigned int,unsigned int,unsigned int *,unsigned int,int)
// unsigned int *glitch::video::unpackTriangles<unsigned int>( int a1, unsigned int a2, unsigned int a3, unsigned int *a4, int a5, int a6);
// [0xe974a0] (411 bytes) unsigned short * glitch::video::CPrimitiveStream::unpackTriangles<unsigned short>(unsigned int,unsigned short *,unsigned int)const
// char *glitch::video::CPrimitiveStream::unpackTriangles<unsigned short>( glitch::video::CPrimitiveStream *this, unsigned int a2, uint16_t *a3, unsigned int a4);
// [0xe97640] (411 bytes) unsigned int * glitch::video::CPrimitiveStream::unpackTriangles<unsigned int>(unsigned int,unsigned int *,unsigned int)const
// char *glitch::video::CPrimitiveStream::unpackTriangles<unsigned int>( glitch::video::CPrimitiveStream *this, unsigned int a2, char *a3, unsigned int a4);
// [0xefe030] (377 bytes) glitch::video::CMaterial::getHashCode(unsigned char)const
// int glitch::video::CMaterial::getHashCode(glitch::video::CMaterial *this, uint8_t a2);
// [0xf79050] (121 bytes) glitch::video::CPrimitiveStream::operator=(glitch::video::CPrimitiveStream const&)
// glitch::video::CPrimitiveStream *glitch::video::CPrimitiveStream::operator=( volatile int32_t **this, volatile int32_t **a2);
// [0xf7a120] (139 bytes) bool glitch::video::getMaterialParameter<glitch::core::vector2d<float>>(glitch::video::CMaterial const*,unsigned short,glitch::core::vector2d<float> &)
// int glitch::video::getMaterialParameter<glitch::core::vector2d<float>>(int a1, uint16_t a2, uint32_t *a3);
// [0xf7a1b0] (139 bytes) bool glitch::video::getMaterialParameter<glitch::core::vector3d<float>>(glitch::video::CMaterial const*,unsigned short,glitch::core::vector3d<float> &)
// int glitch::video::getMaterialParameter<glitch::core::vector3d<float>>(int a1, uint16_t a2, uint32_t *a3);
