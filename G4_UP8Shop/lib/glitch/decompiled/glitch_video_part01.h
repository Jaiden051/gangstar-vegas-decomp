#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_video_part01.h
// Library: glitch | Module: glitch_video_part01
// Binary Address Span: 0xd820d0 .. 0xdec160 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xd820d0] (258 bytes) glitch::video::IVideoDriver::drawMeshBuffer(boost::intrusive_ptr<glitch::scene::CMeshBuffer> const&)
// volatile int32_t *glitch::video::IVideoDriver::drawMeshBuffer( glitch::video::IVideoDriver *this, volatile int32_t **a2);
// [0xd89f70] (27 bytes) glitch::video::IDriverBinding::~IDriverBinding()
// void glitch::video::IDriverBinding::~IDriverBinding(glitch::video::IDriverBinding *this);
// [0xd89f90] (9 bytes) glitch::video::IDriverBinding::onDelete(void)
// void glitch::video::IDriverBinding::onDelete();
// [0xd89fa0] (27 bytes) glitch::video::IVideoDriver::ICompileData::~ICompileData()
// void glitch::video::IVideoDriver::ICompileData::~ICompileData(glitch::video::IVideoDriver::ICompileData *this);
// [0xd89fc0] (511 bytes) glitch::video::IVideoDriver::draw3DBox(glitch::core::aabbox3d<float> const&,glitch::video::SColor)
// int glitch::video::IVideoDriver::draw3DBox(int a1, int *a2, int a3);
// [0xd8a1c0] (9 bytes) glitch::video::IVideoDriver::checkDriverReset(void)
// int glitch::video::IVideoDriver::checkDriverReset();
// [0xd8a1d0] (42 bytes) glitch::video::IVideoDriver::setMaxTextureSize(glitch::core::dimension2d<int> const&)
// int glitch::video::IVideoDriver::setMaxTextureSize(int a1, uint32_t *a2);
// [0xd8a200] (12 bytes) glitch::video::IVideoDriver::getMaximalPrimitiveCount(void)const
// int glitch::video::IVideoDriver::getMaximalPrimitiveCount();
// [0xd8a210] (9 bytes) glitch::video::CNullDriver::CBuffer::bindImpl(unsigned int,unsigned int)
// void glitch::video::CNullDriver::CBuffer::bindImpl();
// [0xd8a220] (9 bytes) glitch::video::CNullDriver::CBuffer::unbindImpl(unsigned int,unsigned int)
// void glitch::video::CNullDriver::CBuffer::unbindImpl();
// [0xd8a230] (9 bytes) glitch::video::CNullDriver::CBuffer::mapImpl(unsigned int,unsigned int,unsigned int,unsigned int)const
// int glitch::video::CNullDriver::CBuffer::mapImpl();
// [0xd8a240] (9 bytes) glitch::video::CNullDriver::CBuffer::unmapImpl(void)const
// void glitch::video::CNullDriver::CBuffer::unmapImpl();
// [0xd8a250] (9 bytes) glitch::video::CNullDriver::CBuffer::subDataImpl(unsigned int,unsigned int,void const*,unsigned int,unsigned int)const
// void glitch::video::CNullDriver::CBuffer::subDataImpl();
// [0xd8a260] (9 bytes) glitch::video::CNullDriver::CBuffer::updateRangesImpl(glitch::video::IBuffer::CDirtyRangeSet const&,unsigned int,unsigned int)
// void glitch::video::CNullDriver::CBuffer::updateRangesImpl();
// [0xd8a270] (15 bytes) glitch::video::CNullDriver::CTexture::bindImpl(unsigned int,unsigned int)
// int glitch::video::CNullDriver::CTexture::bindImpl(glitch::video::CNullDriver::CTexture *this);
// [0xd8a280] (9 bytes) glitch::video::CNullDriver::CTexture::unbindImpl(unsigned int,unsigned int)
// int glitch::video::CNullDriver::CTexture::unbindImpl();
// [0xd8a290] (9 bytes) glitch::video::CNullDriver::CTexture::mapImpl(unsigned char,glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char)
// int glitch::video::CNullDriver::CTexture::mapImpl();
// [0xd8a2a0] (9 bytes) glitch::video::CNullDriver::CTexture::unmapImpl(void)const
// void glitch::video::CNullDriver::CTexture::unmapImpl();
// [0xd8a2b0] (9 bytes) glitch::video::CNullDriver::CTexture::getMappedPtr(void)const
// int glitch::video::CNullDriver::CTexture::getMappedPtr();
// [0xd8a2c0] (9 bytes) glitch::video::CNullDriver::CTexture::generateMipmapsImpl(void)
// void glitch::video::CNullDriver::CTexture::generateMipmapsImpl();
// [0xd8a2d0] (9 bytes) glitch::video::CNullDriver::CFramebuffer::bind(void)
// void glitch::video::CNullDriver::CFramebuffer::bind();
// [0xd8a2e0] (9 bytes) glitch::video::CNullDriver::CFramebuffer::unbind(void)
// void glitch::video::CNullDriver::CFramebuffer::unbind();
// [0xd8a2f0] (9 bytes) glitch::video::CNullDriver::readFramebufferImpl(glitch::core::rect<int> const&,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::video::E_FRAMEBUFFER_FLIP,glitch::video::E_FRAMEBUFFER_ROTATION,void *)
// int glitch::video::CNullDriver::readFramebufferImpl();
// [0xd8a300] (9 bytes) glitch::video::CNullDriver::writeFramebufferImpl(glitch::core::rect<int> const&,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::video::E_FRAMEBUFFER_FLIP,void const*)
// int glitch::video::CNullDriver::writeFramebufferImpl();
// [0xd8a310] (9 bytes) glitch::video::CNullDriver::captureFramebufferImpl(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&,glitch::core::rect<int> const&,unsigned char,glitch::video::E_TEXTURE_CUBE_MAP_FACE,bool)
// int glitch::video::CNullDriver::captureFramebufferImpl();
// [0xd8a320] (9 bytes) glitch::video::CNullDriver::clearBuffersImpl(int)
// void glitch::video::CNullDriver::clearBuffersImpl();
// [0xd8a330] (9 bytes) glitch::video::CNullDriver::swapBuffersImpl(int)
// void glitch::video::CNullDriver::swapBuffersImpl();
// [0xd8a340] (12 bytes) glitch::video::CNullDriver::beginScene2D(void)
// int glitch::video::CNullDriver::beginScene2D();
// [0xd8a350] (12 bytes) glitch::video::CNullDriver::endScene2D(void)
// int glitch::video::CNullDriver::endScene2D();
// [0xd8a360] (9 bytes) glitch::video::CNullDriver::setTransformImpl(glitch::video::E_TRANSFORMATION_STATE,glitch::core::CMatrix4<float> const&,glitch::core::aabbox3d<float> const&,unsigned int)
// int glitch::video::CNullDriver::setTransformImpl();
// [0xd8a370] (9 bytes) glitch::video::CNullDriver::commitCurrentMaterial(void)
// void glitch::video::CNullDriver::commitCurrentMaterial();
// [0xd8a380] (9 bytes) glitch::video::CNullDriver::setViewportImpl(glitch::core::rect<int> const&)
// void glitch::video::CNullDriver::setViewportImpl();
// [0xd8a390] (9 bytes) glitch::video::CNullDriver::getMaxUserClipPlanes(void)const
// int glitch::video::CNullDriver::getMaxUserClipPlanes();
// [0xd8a3a0] (9 bytes) glitch::video::CNullDriver::draw2DLine(glitch::core::vector2d<int> const&,glitch::core::vector2d<int> const&,glitch::video::SColor)
// void glitch::video::CNullDriver::draw2DLine();
// [0xd8a3b0] (9 bytes) glitch::video::CNullDriver::draw2DRectangle(glitch::core::rect<int> const&,glitch::core::rect<int> const&,glitch::video::SColor const*,glitch::core::rect<int> const*)
// void glitch::video::CNullDriver::draw2DRectangle();
// [0xd8a3c0] (12 bytes) glitch::video::CNullDriver::getColorFormat(void)const
// int glitch::video::CNullDriver::getColorFormat();
// [0xd8a3d0] (9 bytes) glitch::video::CNullDriver::getDriverType(void)const
// int glitch::video::CNullDriver::getDriverType();
// [0xd8a3e0] (9 bytes) glitch::video::CNullDriver::restoreShadowState(void)
// void glitch::video::CNullDriver::restoreShadowState();
// [0xd8a3f0] (9 bytes) glitch::video::CNullDriver::drawImpl(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,glitch::video::CPrimitiveStream const&,glitch::video::CDriverBinding **)
// int glitch::video::CNullDriver::drawImpl();
// [0xd8a400] (9 bytes) glitch::video::CNullDriver::redrawImpl(glitch::video::CPrimitiveStream const&,glitch::video::CDriverBinding **)
// int glitch::video::CNullDriver::redrawImpl();
// [0xd8a410] (9 bytes) glitch::video::CNullDriver::commitCurrentMaterial(bool)
// void glitch::video::CNullDriver::commitCurrentMaterial();
// [0xd8a420] (9 bytes) glitch::video::CNullDriver::onClearMaterial(void)
// void glitch::video::CNullDriver::onClearMaterial();
// [0xd8a430] (9 bytes) glitch::video::CNullDriver::beginQueryImpl(boost::intrusive_ptr<glitch::video::IQuery> const&)
// void glitch::video::CNullDriver::beginQueryImpl();
// [0xd8a440] (9 bytes) glitch::video::CNullDriver::endQueryImpl(boost::intrusive_ptr<glitch::video::IQuery> const&)
// void glitch::video::CNullDriver::endQueryImpl();
// [0xd8a450] (9 bytes) glitch::video::CNullDriver::pushSyncImpl(boost::intrusive_ptr<glitch::video::ISync> const&)
// void glitch::video::CNullDriver::pushSyncImpl();
// [0xd8a460] (9 bytes) glitch::video::CNullShader::releaseDriverSpecificResources(void)
// void glitch::video::CNullShader::releaseDriverSpecificResources();
// [0xd8a470] (9 bytes) glitch::video::CNullShader::bindShader(void)const
// void glitch::video::CNullShader::bindShader();
// [0xd8a480] (9 bytes) glitch::video::CCommonGLDriverBase::CTextureBase::getMappedPtr(void)const
// int glitch::video::CCommonGLDriverBase::CTextureBase::getMappedPtr();
// [0xd8a490] (9 bytes) glitch::video::CCommonGLDriverBase::CTextureBase::unmapImpl(void)const
// void glitch::video::CCommonGLDriverBase::CTextureBase::unmapImpl();
// [0xd8a4a0] (9 bytes) glitch::video::CCommonGLDriverBase::CFramebufferBase::unbind(void)
// void glitch::video::CCommonGLDriverBase::CFramebufferBase::unbind();
// [0xd8a4b0] (15 bytes) glitch::video::CCommonGLDriverBase::getColorFormat(void)const
// int glitch::video::CCommonGLDriverBase::getColorFormat(glitch::video::CCommonGLDriverBase *this);
// [0xd8a4c0] (50 bytes) glitch::video::COpenGLES2Driver::initDriverWithGlf(glf::PlatformInfo const&)
// int glitch::video::COpenGLES2Driver::initDriverWithGlf(uint32_t *a1, uint32_t *a2);
// [0xd8a500] (12 bytes) glitch::video::COpenGLES2Driver::getDriverType(void)const
// int glitch::video::COpenGLES2Driver::getDriverType();
// [0xd8a510] (12 bytes) glitch::video::CGenericBaker::getParameterMask(void)const
// int64_t glitch::video::CGenericBaker::getParameterMask();
// [0xd8a9c0] (424 bytes) glitch::video::IVideoDriver::onResize(glitch::core::dimension2d<int> const&)
// int glitch::video::IVideoDriver::onResize(uint32_t *a1, int *a2);
// [0xd8ac50] (56 bytes) glitch::video::IVideoDriver::ICompileData::~ICompileData()
// void glitch::video::IVideoDriver::ICompileData::~ICompileData(glitch::video::IVideoDriver::ICompileData *this);
// [0xd8ac90] (56 bytes) glitch::video::IDriverBinding::~IDriverBinding()
// void glitch::video::IDriverBinding::~IDriverBinding(glitch::video::IDriverBinding *this);
// [0xd8acd0] (45 bytes) glitch::video::CCommonGLDriverBase::CTextureBase::~CTextureBase()
// void glitch::video::CCommonGLDriverBase::CTextureBase::~CTextureBase( glitch::video::CCommonGLDriverBase::CTextureBase *this);
// [0xd8ad00] (56 bytes) glitch::video::CCommonGLDriverBase::CTextureBase::~CTextureBase()
// void glitch::video::CCommonGLDriverBase::CTextureBase::~CTextureBase( glitch::video::CCommonGLDriverBase::CTextureBase *this);
// [0xd8ae40] (49 bytes) glitch::video::CNullDriver::recreateTextureImpl(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::STextureDesc const&)
// int glitch::video::CNullDriver::recreateTextureImpl(int a1, glitch::video::ITexture **a2, int a3);
// [0xd8b280] (609 bytes) glitch::video::CGenericBaker::configureAppendBuffer(boost::intrusive_ptr<glitch::scene::CAppendMeshBuffer> const&)const
// int glitch::video::CGenericBaker::configureAppendBuffer(int a1, glitch::scene::CAppendMeshBuffer **a2);
// [0xd8b4f0] (45 bytes) glitch::video::CGLSLShaderManager::~CGLSLShaderManager()
// void glitch::video::CGLSLShaderManager::~CGLSLShaderManager(glitch::video::CGLSLShaderManager *this);
// [0xd8b520] (56 bytes) glitch::video::CGLSLShaderManager::~CGLSLShaderManager()
// void glitch::video::CGLSLShaderManager::~CGLSLShaderManager(glitch::video::CGLSLShaderManager *this);
// [0xd8b560] (70 bytes) glitch::video::CGLSLShaderCode::~CGLSLShaderCode()
// void glitch::video::CGLSLShaderCode::~CGLSLShaderCode(glitch::video::CGLSLShaderCode *this);
// [0xd8b5b0] (56 bytes) glitch::video::CGLSLShaderCode::~CGLSLShaderCode()
// void glitch::video::CGLSLShaderCode::~CGLSLShaderCode(glitch::video::CGLSLShaderCode *this);
// [0xd8b5f0] (42 bytes) glitch::video::CNullShader::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::CNullShader::serializeAttributes( glitch::video::CNullShader *this, glitch::io::IAttributes *a2);
// [0xd8b620] (45 bytes) glitch::video::CNullShader::~CNullShader()
// void glitch::video::CNullShader::~CNullShader(glitch::video::CNullShader *this);
// [0xd8b650] (56 bytes) glitch::video::CNullShader::~CNullShader()
// void glitch::video::CNullShader::~CNullShader(glitch::video::CNullShader *this);
// [0xd8b690] (45 bytes) glitch::video::CCommonGLDriverBase::CSyncBase::~CSyncBase()
// void glitch::video::CCommonGLDriverBase::CSyncBase::~CSyncBase( glitch::video::CCommonGLDriverBase::CSyncBase *this);
// [0xd8b6c0] (56 bytes) glitch::video::CCommonGLDriverBase::CSyncBase::~CSyncBase()
// void glitch::video::CCommonGLDriverBase::CSyncBase::~CSyncBase( glitch::video::CCommonGLDriverBase::CSyncBase *this);
// [0xd8b700] (45 bytes) glitch::video::CCommonGLDriverBase::CQueryBase::~CQueryBase()
// void glitch::video::CCommonGLDriverBase::CQueryBase::~CQueryBase( glitch::video::CCommonGLDriverBase::CQueryBase *this);
// [0xd8b730] (56 bytes) glitch::video::CCommonGLDriverBase::CQueryBase::~CQueryBase()
// void glitch::video::CCommonGLDriverBase::CQueryBase::~CQueryBase( glitch::video::CCommonGLDriverBase::CQueryBase *this);
// [0xd8b770] (45 bytes) glitch::video::CNullDriver::CBuffer::~CBuffer()
// void glitch::video::CNullDriver::CBuffer::~CBuffer(glitch::video::CNullDriver::CBuffer *this);
// [0xd8b7a0] (56 bytes) glitch::video::CNullDriver::CBuffer::~CBuffer()
// void glitch::video::CNullDriver::CBuffer::~CBuffer(glitch::video::CNullDriver::CBuffer *this);
// [0xd8b7e0] (100 bytes) glitch::video::CCommonGLDriverBase::CBufferBase::~CBufferBase()
// void glitch::video::CCommonGLDriverBase::CBufferBase::~CBufferBase( glitch::video::CCommonGLDriverBase::CBufferBase *this);
// [0xd8b850] (56 bytes) glitch::video::CCommonGLDriverBase::CBufferBase::~CBufferBase()
// void glitch::video::CCommonGLDriverBase::CBufferBase::~CBufferBase( glitch::video::CCommonGLDriverBase::CBufferBase *this);
// [0xd8b890] (34 bytes) glitch::video::CNullShaderManager::removeUnusedShaders(void)
// int glitch::video::CNullShaderManager::removeUnusedShaders(glitch::video::CNullShaderManager *this);
// [0xd8b8c0] (138 bytes) glitch::video::IVideoDriver::endScene(void)
// int glitch::video::IVideoDriver::endScene(glitch::video::IVideoDriver *this);
// [0xd8b950] (260 bytes) glitch::video::CGenericBaker::bake(glitch::video::SBatchBakerInputDesc const&,glitch::video::SBatchBakerOutputDesc const&,glitch::video::IVideoDriver const*)const
// int glitch::video::CGenericBaker::bake(int a1, int a2, int *a3, int a4);
// [0xd8ba60] (137 bytes) glitch::video::IVideoDriver::setOption(unsigned int,bool)
// void glitch::video::IVideoDriver::setOption(glitch::video::IVideoDriver *this, unsigned int a2, bool a3);
// [0xd8bb30] (158 bytes) glitch::video::CBatchDriver::flushImpl(unsigned int)
// int glitch::video::CBatchDriver::flushImpl(glitch::video::CBatchDriver *this, char a2);
// [0xd8bc50] (160 bytes) glitch::video::CGLSLShader::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::CGLSLShader::serializeAttributes( glitch::video::CGLSLShader *this, glitch::io::IAttributes *a2);
// [0xd8c9d0] (440 bytes) glitch::video::CGLSLShaderCode::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::CGLSLShaderCode::serializeAttributes( glitch::video::CGLSLShaderCode *this, glitch::io::IAttributes *a2);
// [0xd8cb90] (2355 bytes) glitch::video::IVideoDriver::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// glitch::core *glitch::video::IVideoDriver::serializeAttributes( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, glitch::core *a10, int a11, int a12, int a13, int a14, int a15, char *a16, char *a17, uint32_t *a18, uint32_t *a19, int (**a20)(int), int a21, int (**a22)(int), int (**a23)(int), int a24, int a25, uint8_t *a26, uint8_t *a27, uint8_t *a28, int a29, int a30, int a31, uint32_t *a32, int (**a33)(int), int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int16_t a62, int a63, int a64);
// [0xd8e570] (13 bytes) glitch::video::CNullDriver::createQueryImpl(glitch::video::E_QUERY_TYPE)
// uint32_t *glitch::video::CNullDriver::createQueryImpl(uint32_t *a1);
// [0xd8e580] (13 bytes) glitch::video::CNullDriver::createSyncImpl(glitch::video::E_SYNC_TYPE)
// uint32_t *glitch::video::CNullDriver::createSyncImpl(uint32_t *a1);
// [0xd8e590] (13 bytes) glitch::video::CNullDriver::createRenderTargetImpl(boost::intrusive_ptr<glitch::video::ITexture> const&,unsigned char,glitch::video::E_ANTIALIASING_SETTING)
// uint32_t *glitch::video::CNullDriver::createRenderTargetImpl(uint32_t *a1);
// [0xd8e5a0] (13 bytes) glitch::video::CNullDriver::createRenderBuffer(glitch::core::dimension2d<int> const&,glitch::video::E_PIXEL_FORMAT)
// uint32_t *glitch::video::CNullDriver::createRenderBuffer(uint32_t *a1);
// [0xd8e5b0] (13 bytes) glitch::video::CNullDriver::createMultipleRenderTargetImpl(glitch::video::E_ANTIALIASING_SETTING)
// uint32_t *glitch::video::CNullDriver::createMultipleRenderTargetImpl(uint32_t *a1);
// [0xd8e5c0] (211 bytes) glitch::video::CGenericBaker::isCompatible(boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned char)const
// int glitch::video::CGenericBaker::isCompatible( uint32_t *a1, int a2, uint8_t a3, int a4, int a5, int a6, int a7, glitch::video::CMaterial *a8);
// [0xd8e6a0] (179 bytes) glitch::video::CGenericBaker::getMaterialVertexAttributeMap(boost::intrusive_ptr<glitch::video::CVertexStreams> const&)const
// glitch::video::CGenericBaker *glitch::video::CGenericBaker::getMaterialVertexAttributeMap( glitch::video::CGenericBaker *this, const boost::intrusive_ptr<glitch::video::CVertexStreams> *a2, volatile int32_t **a3);
// [0xd8ec00] (204 bytes) glitch::video::IVideoDriver::pushRenderTarget(boost::intrusive_ptr<glitch::video::IRenderTarget> const&)
// volatile int32_t *glitch::video::IVideoDriver::pushRenderTarget( glitch::video::IVideoDriver *this, const boost::intrusive_ptr<glitch::video::IRenderTarget> *a2);
// [0xd8f7c0] (981 bytes) glitch::video::CGenericBaker::allocateVertexStreams(void)const
// glitch::video::CGenericBaker *glitch::video::CGenericBaker::allocateVertexStreams( glitch::video::CGenericBaker *this, int a2);
// [0xd8fbf0] (458 bytes) glitch::video::IVideoDriver::draw3DLines(glitch::core::vector3d<float> *,unsigned short *,glitch::video::SColor *,unsigned int,unsigned int)
// volatile int32_t *glitch::video::IVideoDriver::draw3DLines( int *a1, void *a2, void *a3, void *a4, int a5, int a6, int a7, glitch::video::CVertexStreams *a8, int a9, int a10, volatile int32_t *a11, volatile int32_t *a12, int a13, int a14, int a15, int a16, int a17);
// [0xd8fdc0] (370 bytes) glitch::video::IVideoDriver::draw3DLine(glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&,glitch::video::SColor,glitch::video::SColor)
// volatile int32_t *glitch::video::IVideoDriver::draw3DLine( int *a1, int *a2, int *a3, int a4, volatile int32_t *a5, int a6, int a7, volatile int32_t *a8, volatile int32_t *a9, int a10, int a11, int a12, int a13, int a14);
// [0xd8ff40] (578 bytes) glitch::video::IVideoDriver::draw2DLines(glitch::core::vector2d<int> *,unsigned short *,glitch::video::SColor *,unsigned int,unsigned int)
// int glitch::video::IVideoDriver::draw2DLines( int a1, int a2, void *a3, void *a4, int a5, int a6, glitch::core *a7, glitch::video::CVertexStreams *a8, int a9, int a10, volatile int32_t *a11, volatile int32_t *a12, int a13, int a14, int a15, int a16, int a17);
// [0xd90190] (386 bytes) glitch::video::IVideoDriver::draw2DLine(glitch::core::vector2d<int> const&,glitch::core::vector2d<int> const&,glitch::video::SColor)
// volatile int32_t *glitch::video::IVideoDriver::draw2DLine( int *a1, int *a2, int *a3, int a4, glitch::video::CVertexStreams *a5, int a6, int a7, volatile int32_t *a8, volatile int32_t *a9, int a10, int a11, int a12, int a13, int a14);
// [0xd90320] (178 bytes) glitch::video::CDriverBinding::~CDriverBinding()
// void glitch::video::CDriverBinding::~CDriverBinding(glitch::video::CDriverBinding *this);
// [0xd903e0] (56 bytes) glitch::video::CDriverBinding::~CDriverBinding()
// void glitch::video::CDriverBinding::~CDriverBinding(glitch::video::CDriverBinding *this);
// [0xd90730] (626 bytes) glitch::video::IVideoDriver::draw3DTriangle(glitch::core::triangle3d<float> const&,glitch::video::SColor,bool)
// 0xd90730 glitch::video::IVideoDriver::draw3DTriangle(glitch::core::triangle3d<float> const&,glitch::video::SColor,bool)
// [0xd909b0] (797 bytes) glitch::video::CGenericBaker::isCompatible(boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned char,boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned char)const
// int glitch::video::CGenericBaker::isCompatible( uint8_t *a1, glitch::video::CMaterial **a2, uint8_t a3, glitch::video::CMaterial **a4, uint8_t a5);
// [0xd90cd0] (130 bytes) glitch::video::CGenericBaker::~CGenericBaker()
// void glitch::video::CGenericBaker::~CGenericBaker(glitch::video **this);
// [0xd90d60] (56 bytes) glitch::video::CGenericBaker::~CGenericBaker()
// void glitch::video::CGenericBaker::~CGenericBaker(glitch::video **this);
// [0xd91730] (54 bytes) glitch::video::extractParameterProperties(char *)
// char *glitch::video::extractParameterProperties(glitch::video *this);
// [0xd91770] (468 bytes) glitch::video::getLightParameterName(char const*)
// glitch::video *glitch::video::getLightParameterName(glitch::video *this, char *a2);
// [0xd91950] (329 bytes) glitch::video::guessSubIdFromName(char const*,char const*)
// int glitch::video::guessSubIdFromName(glitch::video *this, char *a2);
// [0xd91aa0] (235 bytes) glitch::video::guessSubIdFromName(char const*,glitch::video::E_SHADER_PARAMETER_TYPE)
// int glitch::video::guessSubIdFromName(glitch::video *a1, int a2);
// [0xd91b90] (1536 bytes) glitch::video::processParameterProperties(glitch::video::SShaderParameterDef &,char *,glitch::video::SShaderVertexAttributeDef const*,unsigned short,char const*)
// int glitch::video::processParameterProperties( glitch::video *this, glitch::video::SShaderParameterDef *a2, char *a3, const glitch::video::SShaderVertexAttributeDef *a4, glitch::video *a5);
// [0xd92190] (2094 bytes) glitch::video::preprocessShaderSource(char const*,void * (*)(void *,unsigned int),void *,void (*)(char const*),void (*)(void *,char const*,char const*,char *,bool),void *)
// int glitch::video::preprocessShaderSource( glitch::video *this, const char *a2, void *(*a3)(void *, unsigned int), void *a4, void (*a5)(const char *), void (*a6)(void *, const char *, const char *, char *, bool));
// [0xd929c0] (165 bytes) glitch::video::preprocessShaderSource(char const*,std::list<glitch::video::SShaderPreprocessorExpansion,glitch::core::SProcessBufferAllocator<glitch::video::SShaderPreprocessorExpansion,false>> &)
// int glitch::video::preprocessShaderSource( glitch::video *a1, void (**a2)(void *, const char *, const char *, char *, bool));
// [0xd92a70] (46 bytes) glitch::video::SShaderParameterDef::SShaderParameterDef(void)
// struct glitch::video::SShaderParameterDef *glitch::video::SShaderParameterDef::SShaderParameterDef( glitch::video::SShaderParameterDef *this);
// [0xd92aa0] (147 bytes) glitch::video::SShaderParameterDef::SShaderParameterDef(char const*,glitch::video::E_SHADER_PARAMETER_TYPE,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,unsigned short,unsigned int,unsigned char,unsigned short,unsigned char)
// int glitch::video::SShaderParameterDef::SShaderParameterDef( int a1, glitch::core::detail::SSharedStringHeapEntry::SData *a2, char a3, char a4, int16_t a5, int a6, char a7, int16_t a8, uint8_t a9);
// [0xd92b40] (110 bytes) glitch::video::SShaderParameterDef::SShaderParameterDef(glitch::core::SSharedString const&,glitch::video::E_SHADER_PARAMETER_TYPE,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,unsigned short,unsigned int,unsigned char,unsigned short,unsigned char)
// int glitch::video::SShaderParameterDef::SShaderParameterDef( int a1, volatile int32_t **a2, char a3, char a4, int16_t a5, int a6, char a7, int16_t a8, char a9);
// [0xd92bb0] (365 bytes) glitch::video::SShaderParameterDef::saveBinaryAttributes(boost::intrusive_ptr<glitch::io::IWriteFile> &)const
// int glitch::video::SShaderParameterDef::saveBinaryAttributes(int a1, uint32_t *a2);
// [0xd92d20] (37 bytes) glitch::video::SShaderVertexAttributeDef::SShaderVertexAttributeDef(void)
// struct glitch::video::SShaderVertexAttributeDef *glitch::video::SShaderVertexAttributeDef::SShaderVertexAttributeDef( glitch::video::SShaderVertexAttributeDef *this);
// [0xd92d50] (84 bytes) glitch::video::SShaderVertexAttributeDef::SShaderVertexAttributeDef(glitch::core::SSharedString const&,glitch::video::E_VERTEX_ATTRIBUTE,glitch::video::E_VERTEX_ATTRIBUTE_VALUE_TYPE,unsigned short,unsigned short,unsigned short)
// int glitch::video::SShaderVertexAttributeDef::SShaderVertexAttributeDef( int a1, volatile int32_t **a2, char a3, char a4, int16_t a5, int16_t a6, int16_t a7);
// [0xd92db0] (124 bytes) glitch::video::SShaderVertexAttributeDef::SShaderVertexAttributeDef(char const*,glitch::video::E_VERTEX_ATTRIBUTE,glitch::video::E_VERTEX_ATTRIBUTE_VALUE_TYPE,unsigned short,unsigned short,unsigned short)
// int glitch::video::SShaderVertexAttributeDef::SShaderVertexAttributeDef( int a1, glitch::core::detail::SSharedStringHeapEntry::SData *a2, char a3, int a4, int16_t a5, int16_t a6, int16_t a7);
// [0xd92e30] (307 bytes) glitch::video::SShaderVertexAttributeDef::saveBinaryAttributes(boost::intrusive_ptr<glitch::io::IWriteFile> &)const
// int glitch::video::SShaderVertexAttributeDef::saveBinaryAttributes(int a1, uint32_t *a2);
// [0xd92f70] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_SHADER_PARAMETER_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xd92f90] (179 bytes) glitch::video::SShaderParameterDef::deserializeAttributes(glitch::io::IAttributes *)
// int glitch::video::SShaderParameterDef::deserializeAttributes( glitch::video::SShaderParameterDef *this, glitch::io::IAttributes *a2);
// [0xd93050] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_SHADER_PARAMETER_VALUE_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xd93070] (344 bytes) glitch::video::SShaderParameterDef::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::SShaderParameterDef::serializeAttributes( glitch::video::SShaderParameterDef *this, glitch::io::IAttributes *a2);
// [0xd931d0] (279 bytes) glitch::video::CBatchDriver::initBuffer(glitch::video::E_INDEX_TYPE)
// void glitch::video::CBatchDriver::initBuffer(int a1, int a2);
// [0xd932f0] (184 bytes) glitch::video::isVertexStreamHomolaced(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,unsigned int &)
// bool glitch::video::isVertexStreamHomolaced( glitch::video *this, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a2);
// [0xd933b0] (403 bytes) glitch::video::copyVertex(unsigned short,boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,boost::intrusive_ptr<glitch::video::CVertexStreams> const&,unsigned char const*,unsigned char *&,bool)
// void **glitch::video::copyVertex( glitch::video *this, void ***a2, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a3, const boost::intrusive_ptr<glitch::video::CVertexStreams> *a4, void **a5, uint8_t **a6);
// [0xd93550] (104 bytes) glitch::video::detail::getStrides(unsigned int,boost::intrusive_ptr<glitch::video::CVertexStreams> const&)
// int glitch::video::detail::getStrides(glitch::video::detail *this, uint32_t *a2);
// [0xd935c0] (212 bytes) glitch::video::detail::assignBuffer(boost::intrusive_ptr<glitch::video::IBuffer> const&,unsigned int,unsigned int,unsigned int,boost::intrusive_ptr<glitch::video::CVertexStreams> const&)
// glitch::video::CVertexStreams **glitch::video::detail::assignBuffer( int *a1, int16_t a2, glitch::video::CVertexStreams **a3, int a4, glitch::video::CVertexStreams **a5);
// [0xd936a0] (279 bytes) glitch::video::detail::clearBuffer(unsigned int,boost::intrusive_ptr<glitch::video::CVertexStreams> const&)
// glitch::video::detail *glitch::video::detail::clearBuffer( glitch::video::detail *this, unsigned int a2, glitch::video::CVertexStreams **a3);
// [0xd937c0] (82 bytes) glitch::video::CDriverBinding::CDriverBinding(glitch::video::IVideoDriver *)
// struct glitch::video::CDriverBinding *glitch::video::CDriverBinding::CDriverBinding( glitch::video::CDriverBinding *this, glitch::video::IVideoDriver *a2);
// [0xd93820] (76 bytes) glitch::video::IVideoDriver::createBinding(void)
// glitch::video::CDriverBinding *glitch::video::IVideoDriver::createBinding(glitch::video::IVideoDriver *this);
// [0xd93870] (82 bytes) glitch::video::CDriverBinding::clearProcessBuffer(void)
// volatile int32_t *glitch::video::CDriverBinding::clearProcessBuffer(glitch::video::CDriverBinding *this);
// [0xd938d0] (573 bytes) glitch::video::CDriverBinding::allocateStaticProcessBuffer(unsigned int,unsigned int,boost::intrusive_ptr<glitch::video::CVertexStreams> const&,glitch::video::E_BUFFER_USAGE,unsigned int,bool)
// int glitch::video::CDriverBinding::allocateStaticProcessBuffer( int a1, int a2, glitch::video::detail *a3, glitch::video::CVertexStreams **a4, volatile int32_t *a5, int a6, char a7);
// [0xd93b10] (268 bytes) glitch::video::CDriverBinding::getProcessBuffer(unsigned int,unsigned int,boost::intrusive_ptr<glitch::video::CVertexStreams> const&)
// char glitch::video::CDriverBinding::getProcessBuffer( glitch::video::CDriverBinding *this, unsigned int a2, glitch::video::detail *a3, glitch::video::CVertexStreams **a4);
// [0xd93c20] (157 bytes) glitch::video::CDriverBinding::releaseProcessBuffer(boost::intrusive_ptr<glitch::video::CVertexStreams> const&,unsigned int)
// glitch::video::CVertexStreams **glitch::video::CDriverBinding::releaseProcessBuffer( glitch::video::CDriverBinding *this, glitch::video::CVertexStreams **a2, unsigned int a3);
// [0xd93cc0] (411 bytes) glitch::video::IVideoDriver::releaseProcessBuffer(glitch::video::E_PROCESS_BUFFER_TYPE,boost::intrusive_ptr<glitch::video::CVertexStreams> const&,unsigned int,glitch::video::CDriverBinding *)
// glitch::video::CVertexStreams **glitch::video::IVideoDriver::releaseProcessBuffer( volatile int32_t ***a1, glitch::video::CVertexStreams **a2, glitch::video::CVertexStreams **a3, unsigned int a4, glitch::video::CDriverBinding *a5);
// [0xd93e60] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_ORIENTATION *)
// void **glitch::video::getStringsInternal();
// [0xd93e80] (160 bytes) glitch::video::IVideoDriver::IFramebuffer::setFramebufferScreenInternal(glitch::core::rect<int> const&)
// uint32_t *glitch::video::IVideoDriver::IFramebuffer::setFramebufferScreenInternal( uint32_t *a1, uint32_t *a2, int *a3);
// [0xd93f20] (49 bytes) glitch::video::IVideoDriver::SConfig::SConfig(void)
// struct glitch::video::IVideoDriver::SConfig *glitch::video::IVideoDriver::SConfig::SConfig( glitch::video::IVideoDriver::SConfig *this);
// [0xd93f60] (119 bytes) glitch::video::IVideoDriver::resetDefaultDynamicLight(void)
// int glitch::video::IVideoDriver::resetDefaultDynamicLight(glitch::video::IVideoDriver *this);
// [0xd93fe0] (4388 bytes) glitch::video::IVideoDriver::init(boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer> const&,glitch::video::IVideoDriver::SConfig const&)
// volatile int32_t *glitch::video::IVideoDriver::init( glitch::video::IVideoDriver *this, const boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer> *a2, const glitch::video::IVideoDriver::SConfig *a3);
// [0xd95110] (562 bytes) glitch::video::IVideoDriver::getMatchingGlobalParameterID(glitch::video::IShader const*,unsigned short,glitch::video::E_SHADER_STAGE,unsigned int)const
// int glitch::video::IVideoDriver::getMatchingGlobalParameterID( uint16_t *a1, int a2, uint16_t a3, int a4, unsigned int a5);
// [0xd95350] (93 bytes) glitch::video::IVideoDriver::setIrradianceManager(boost::intrusive_ptr<glitch::irradiance::IIrradianceManager> const&)
// volatile int32_t *glitch::video::IVideoDriver::setIrradianceManager(int a1, int *a2);
// [0xd953b0] (303 bytes) glitch::video::IVideoDriver::disableFeature(glitch::video::E_VIDEO_DRIVER_FEATURE)
// int glitch::video::IVideoDriver::disableFeature(uint32_t *a1, unsigned int a2);
// [0xd954e0] (240 bytes) glitch::video::IVideoDriver::setTransform(glitch::video::E_TRANSFORMATION_STATE,glitch::core::CMatrix4<float> const&,unsigned int)
// uint32_t *glitch::video::IVideoDriver::setTransform(uint8_t *a1, int a2, uint32_t *a3, int a4);
// [0xd955d0] (164 bytes) glitch::video::IVideoDriver::setTransform(glitch::video::E_TRANSFORMATION_STATE,glitch::core::CMatrix4<float> const&,glitch::core::aabbox3d<float> const&,unsigned int)
// uint32_t *glitch::video::IVideoDriver::setTransform(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0xd95680] (200 bytes) glitch::video::IVideoDriver::setTransform(glitch::video::E_TRANSFORMATION_STATE,glitch::core::CMatrix4<float> const&,glitch::core::vector3d<float> const&,unsigned int)
// int *glitch::video::IVideoDriver::setTransform(int *a1, int a2, int *a3, int *a4, int a5);
// [0xd95750] (986 bytes) glitch::video::IVideoDriver::setMaterialInternal(glitch::video::CMaterial *,unsigned char,glitch::video::CMaterialVertexAttributeMap const*)
// int glitch::video::IVideoDriver::setMaterialInternal( glitch::video::IVideoDriver *this, glitch::video::CMaterial *a2, uint8_t a3, const glitch::video::CMaterialVertexAttributeMap *a4);
// [0xd95b30] (338 bytes) glitch::video::IVideoDriver::draw3DPoint(glitch::core::vector3d<float> const&,glitch::video::SColor)
// volatile int32_t *glitch::video::IVideoDriver::draw3DPoint( int *a1, int *a2, int a3, int a4, glitch::video::CVertexStreams *a5, int a6, int a7, volatile int32_t *a8, int a9, int a10, int a11, int a12, volatile int32_t *a13, int a14, int a15, int a16, int a17, int a18);
// [0xd95c90] (332 bytes) glitch::video::IVideoDriver::createQuery(glitch::video::E_QUERY_TYPE)
// uint32_t *glitch::video::IVideoDriver::createQuery(uint32_t *a1, uint32_t *a2, int a3);
// [0xd95de0] (152 bytes) glitch::video::IVideoDriver::createSync(glitch::video::E_SYNC_TYPE)
// uint32_t *glitch::video::IVideoDriver::createSync(uint32_t *a1, uint8_t *a2, int a3);
// [0xd95e80] (187 bytes) glitch::video::IVideoDriver::setFramebufferScreen(glitch::core::rect<int> const&)
// int glitch::video::IVideoDriver::setFramebufferScreen(int a1, int *a2);
// [0xd95f40] (592 bytes) glitch::video::IVideoDriver::resetBatchMaterial(boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned char)
// volatile int32_t *glitch::video::IVideoDriver::resetBatchMaterial(int a1, glitch::video **a2);
// [0xd96190] (1280 bytes) glitch::video::IVideoDriver::setMaterial(boost::intrusive_ptr<glitch::video::CMaterial> const&,boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap const> const&)
// int glitch::video::IVideoDriver::setMaterial( glitch::video::IVideoDriver *a1, glitch::video::CMaterial **a2, volatile int32_t **a3);
// [0xd96690] (58 bytes) glitch::video::IVideoDriver::releaseClearRenderStatesList(glitch::video::IVideoDriver::SRenderTarget &)
// int glitch::video::IVideoDriver::releaseClearRenderStatesList(int a1, int a2);
// [0xd966d0] (1446 bytes) glitch::video::IVideoDriver::preDrawImpl(void)
// volatile int32_t *glitch::video::IVideoDriver::preDrawImpl(glitch::video::IVideoDriver *this);
// [0xd96c80] (185 bytes) glitch::video::IVideoDriver::swapBuffers(int)
// volatile int32_t *glitch::video::IVideoDriver::swapBuffers(glitch::video::IVideoDriver *this, int a2);
// [0xd96d40] (299 bytes) glitch::video::IVideoDriver::popRenderTarget(void)
// glitch::video::IVideoDriver *glitch::video::IVideoDriver::popRenderTarget( glitch::video::IVideoDriver *this, glitch::video::IVideoDriver *a2);
// [0xd96e70] (70 bytes) glitch::video::IVideoDriver::redraw(glitch::video::CPrimitiveStream const&,glitch::video::CDriverBinding **)
// int glitch::video::IVideoDriver::redraw( glitch::video::IVideoDriver *this, const glitch::video::CPrimitiveStream *a2, glitch::video::CDriverBinding **a3);
// [0xd96ec0] (773 bytes) glitch::video::IVideoDriver::forceCommitShader(boost::intrusive_ptr<glitch::video::CMaterial> const&)
// void glitch::video::IVideoDriver::forceCommitShader(glf::Thread *a1, glitch::video::CMaterial **a2);
// [0xd97220] (16 bytes) glitch::video::IVideoDriver::getFPS(int)const
// int glitch::video::IVideoDriver::getFPS(glitch::video::IVideoDriver *this, int a2);
// [0xd97230] (48 bytes) glitch::video::IVideoDriver::getPrimitiveCountDrawn(unsigned int,int)const
// int glitch::video::IVideoDriver::getPrimitiveCountDrawn( glitch::video::IVideoDriver *this, unsigned int a2, int a3);
// [0xd97260] (65 bytes) glitch::video::IVideoDriver::getDrawCallCount(int,int)const
// int glitch::video::IVideoDriver::getDrawCallCount(glitch::video::IVideoDriver *this, int a2, char a3);
// [0xd972b0] (50 bytes) glitch::video::IVideoDriver::getDrawCall2DCount(int)const
// int glitch::video::IVideoDriver::getDrawCall2DCount(glitch::video::IVideoDriver *this, int a2);
// [0xd972f0] (19 bytes) glitch::video::IVideoDriver::getTextureBindingCount(int)const
// int glitch::video::IVideoDriver::getTextureBindingCount(glitch::video::IVideoDriver *this, int a2);
// [0xd97310] (108 bytes) glitch::video::IVideoDriver::deleteAllDynamicLights(void)
// int glitch::video::IVideoDriver::deleteAllDynamicLights(glitch::video::IVideoDriver *this);
// [0xd97380] (96 bytes) glitch::video::IVideoDriver::addDynamicLight(boost::intrusive_ptr<glitch::video::CLight> const&)
// int glitch::video::IVideoDriver::addDynamicLight( glitch::video::CGlobalMaterialParameterManager **this, const boost::intrusive_ptr<glitch::video::CLight> *a2);
// [0xd973e0] (239 bytes) glitch::video::IVideoDriver::getDynamicLight(unsigned short)const
// int *glitch::video::IVideoDriver::getDynamicLight(glitch::video::IVideoDriver *this, uint16_t a2);
// [0xd974d0] (257 bytes) glitch::video::IVideoDriver::fixUpProjectionMatrixOrientation(glitch::core::CMatrix4<float> &)const
// glitch::core::CMatrix4<float> *glitch::video::IVideoDriver::fixUpProjectionMatrixOrientation( glitch::video::IVideoDriver *this, glitch::core::CMatrix4<float> *a2);
// [0xd975e0] (17 bytes) glitch::video::IVideoDriver::setBufferUpdateMergeThreshold(unsigned int)
// glitch::video::IVideoDriver *glitch::video::IVideoDriver::setBufferUpdateMergeThreshold( glitch::video::IVideoDriver *this, unsigned int a2);
// [0xd97600] (135 bytes) glitch::video::IVideoDriver::checkPrimitiveCount(unsigned int)const
// int glitch::video::IVideoDriver::checkPrimitiveCount(glitch::video::IVideoDriver *this, unsigned int a2);
// [0xd97690] (3241 bytes) glitch::video::IVideoDriver::clip(glitch::core::rect<int> &,glitch::core::rect<float> &,glitch::core::rect<int> const&,glitch::video::SColor *)
// int glitch::video::IVideoDriver::clip(uint32_t *a1, float *a2, uint32_t *a3, uint8_t *a4);
// [0xd98340] (871 bytes) glitch::video::IVideoDriver::isValidTextureDescription(char const*,glitch::video::STextureDesc const&)
// int glitch::video::IVideoDriver::isValidTextureDescription(int a1, int a2, int *a3);
// [0xd986b0] (136 bytes) glitch::video::IVideoDriver::createTexture(char const*,glitch::video::STextureDesc const&)
// uint32_t *glitch::video::IVideoDriver::createTexture(uint32_t *a1, int a2, int a3, int *a4);
// [0xd98740] (114 bytes) glitch::video::IVideoDriver::recreateTexture(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::STextureDesc const&)
// int glitch::video::IVideoDriver::recreateTexture(int a1, int a2, int *a3);
// [0xd987c0] (2726 bytes) glitch::video::IVideoDriver::initImplementationDependentData(void)
// 0xd987c0 glitch::video::IVideoDriver::initImplementationDependentData(void)
// [0xd99270] (1309 bytes) glitch::video::IVideoDriver::clearImplementationDependentData(void)
// int glitch::video::IVideoDriver::clearImplementationDependentData(glitch::video::IVideoDriver *this);
// [0xd99790] (142 bytes) glitch::video::CBatchDriver::releaseBuffer(void)
// int glitch::video::CBatchDriver::releaseBuffer(glitch::video::CBatchDriver *this);
// [0xd99820] (1136 bytes) glitch::video::IVideoDriver::clearBuffers(int)
// void glitch::video::IVideoDriver::clearBuffers(glitch::video::IVideoDriver *this, int a2);
// [0xd99c90] (99 bytes) glitch::video::IVideoDriver::swapBuffersImpl(int)
// void glitch::video::IVideoDriver::swapBuffersImpl(glitch::video::IVideoDriver *this, int a2);
// [0xd99d00] (78 bytes) glitch::video::IVideoDriver::onDisplayConnected(int,glitch::core::dimension2d<int> const&)
// int glitch::video::IVideoDriver::onDisplayConnected(int a1, int a2, int *a3);
// [0xd99d50] (51 bytes) glitch::video::IVideoDriver::ensureBinding(glitch::video::CDriverBinding **)
// glitch::video::CDriverBinding *glitch::video::IVideoDriver::ensureBinding( glitch::video::IVideoDriver *this, glitch::video::CDriverBinding **a2);
// [0xd99d90] (107 bytes) glitch::video::IVideoDriver::allocateStaticProcessBuffer(unsigned int,unsigned int,boost::intrusive_ptr<glitch::video::CVertexStreams> const&,glitch::video::CDriverBinding **,glitch::video::E_BUFFER_USAGE,unsigned int,bool)
// int glitch::video::IVideoDriver::allocateStaticProcessBuffer( glitch::video::IVideoDriver *a1, int a2, glitch::video::detail *a3, glitch::video::CVertexStreams **a4, glitch::video::CDriverBinding **a5, volatile int32_t *a6, int a7, char a8);
// [0xd99e00] (1370 bytes) glitch::video::IVideoDriver::getProcessBuffer(glitch::video::E_PROCESS_BUFFER_TYPE,unsigned int,unsigned int,unsigned int,boost::intrusive_ptr<glitch::video::CVertexStreams> const&,glitch::video::CDriverBinding **)
// char glitch::video::IVideoDriver::getProcessBuffer( glitch::video::IVideoDriver *a1, int a2, glitch::video::IBuffer *a3, int a4, glitch::video::detail *a5, glitch::video::CVertexStreams **a6, glitch::video::CDriverBinding **a7);
// [0xd9a360] (403 bytes) glitch::video::IVideoDriver::captureFramebuffer(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&,glitch::core::rect<int> const&,unsigned char,glitch::video::E_TEXTURE_CUBE_MAP_FACE,bool)
// int glitch::video::IVideoDriver::captureFramebuffer( uint32_t **a1, uint32_t *a2, int *a3, int32_t *a4, uint8_t a5, int a6, uint8_t a7);
// [0xd9a500] (56 bytes) glitch::video::IVideoDriver::clearRenderBuffers(void)
// glitch::video::IVideoDriver *glitch::video::IVideoDriver::clearRenderBuffers(int **this);
// [0xd9a540] (175 bytes) glitch::video::IVideoDriver::validateAntiAliasSetting(glitch::video::E_ANTIALIASING_SETTING)const
// int glitch::video::IVideoDriver::validateAntiAliasSetting(int a1, int a2);
// [0xd9a5f0] (128 bytes) glitch::video::IVideoDriver::createRenderTarget(boost::intrusive_ptr<glitch::video::ITexture> const&,unsigned char,glitch::video::E_ANTIALIASING_SETTING)
// int glitch::video::IVideoDriver::createRenderTarget(int a1, int a2, int a3, int a4, int a5);
// [0xd9a670] (102 bytes) glitch::video::IVideoDriver::createMultipleRenderTarget(glitch::video::E_ANTIALIASING_SETTING)
// int glitch::video::IVideoDriver::createMultipleRenderTarget(int a1, int a2, int a3);
// [0xd9a6e0] (85 bytes) glitch::video::IVideoDriver::loadMaterialTechniqueMaps(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// int glitch::video::IVideoDriver::loadMaterialTechniqueMaps( glitch::video::CMaterialRendererManager::SMaterialTechniqueMapsAccess **this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2);
// [0xd9a740] (132 bytes) glitch::video::IVideoDriver::loadMaterialTechniqueMaps(char const*)
// int glitch::video::IVideoDriver::loadMaterialTechniqueMaps(glitch::video::IVideoDriver *this);
// [0xd9a7d0] (64 bytes) glitch::video::IVideoDriver::unloadMaterialTechniqueMaps(void)
// int glitch::video::IVideoDriver::unloadMaterialTechniqueMaps( glitch::video::CMaterialRendererManager::SMaterialTechniqueMapsAccess **this);
// [0xd9a810] (75 bytes) glitch::video::CNullDriver::CBuffer::CBuffer(glitch::video::IVideoDriver *,glitch::video::SBufferDesc const&)
// void (**glitch::video::CNullDriver::CBuffer::CBuffer( uint32_t *a1, int a2, int a3))(glitch::video::CNullDriver::CBuffer *__hidden this);
// [0xd9a860] (115 bytes) glitch::video::CNullDriver::createBuffer(glitch::video::SBufferDesc const&)
// int *glitch::video::CNullDriver::createBuffer(int *a1, int a2, int a3);
// [0xd9a8e0] (126 bytes) glitch::video::CNullDriver::CBuffer::cloneImpl(glitch::video::SBufferDesc const&)const
// int *glitch::video::CNullDriver::CBuffer::cloneImpl(int *a1, int a2, int a3);
// [0xd9a960] (83 bytes) glitch::video::CNullDriver::CTexture::CTexture(char const*,glitch::video::CNullDriver*,glitch::video::STextureDesc const&)
// void (**glitch::video::CNullDriver::CTexture::CTexture( glitch::video::ITexture *a1, char *a2, glitch::video::IVideoDriver *a3, int a4))(glitch::video::CNullDriver::CTexture *__hidden this);
// [0xd9a9c0] (123 bytes) glitch::video::CNullDriver::createTextureImpl(char const*,glitch::video::STextureDesc const&)
// volatile int32_t **glitch::video::CNullDriver::createTextureImpl( volatile int32_t **a1, glitch::video::IVideoDriver *a2, char *a3, int a4);
// [0xd9aa40] (216 bytes) glitch::video::CNullDriver::initDriver(void)
// volatile int32_t *glitch::video::CNullDriver::initDriver(glitch::video::CNullDriver *this);
// [0xd9ab20] (16 bytes) glitch::video::CNullShader::updateHash(void)const
// glitch::video::CNullShader *glitch::video::CNullShader::updateHash(glitch::video::CNullShader *this);
// [0xd9ab30] (57 bytes) glitch::video::CNullShader::getShaderSize(void)const
// int glitch::video::CNullShader::getShaderSize(glitch::video::CNullShader *this);
// [0xd9ab70] (57 bytes) glitch::video::CNullShader::getHashValue(void)const
// int glitch::video::CNullShader::getHashValue(glitch::video::CNullShader *this);
// [0xd9abb0] (64 bytes) glitch::video::CNullShader::deserializeAttributes(glitch::io::IAttributes *)
// glitch::video::CNullShader *glitch::video::CNullShader::deserializeAttributes( glitch::video::CNullShader *this, glitch::io::IAttributes *a2);
// [0xd9abf0] (99 bytes) glitch::video::CNullShader::CNullShader(unsigned short,char const*,glitch::video::CNullDriver *)
// glitch::video::CNullShader *glitch::video::CNullShader::CNullShader( glitch::video::CNullShader *this, uint16_t a2, const char *a3, glitch::video::CNullDriver *a4);
// [0xd9ac60] (292 bytes) glitch::video::CNullShaderManager::createShader(char const*)
// glitch::video::CNullShaderManager *glitch::video::CNullShaderManager::createShader( glitch::video::CNullShaderManager *this, glitch::video::IShaderManager *a2, char *a3);
// [0xd9ad90] (125 bytes) glitch::video::C2DDriver::C2DDriver(boost::intrusive_ptr<glitch::video::IVideoDriver> const&)
// volatile int32_t *glitch::video::C2DDriver::C2DDriver(int a1, volatile int32_t **a2);
// [0xd9ae10] (48 bytes) glitch::video::C2DDriver::draw2DLine(glitch::core::vector2d<int> const&,glitch::core::vector2d<int> const&,glitch::video::SColor)
// int glitch::video::C2DDriver::draw2DLine(int a1, int a2, int a3, int a4);
// [0xd9ae40] (356 bytes) glitch::video::C2DDriver::draw2DPolygon(glitch::core::vector2d<int>,float,glitch::video::SColor,int)
// int glitch::video::C2DDriver::draw2DPolygon(int a1, uint32_t *a2, float a3, int a4, int a5);
// [0xd9afb0] (56 bytes) glitch::video::C2DDriver::draw2DRectangle(glitch::core::rect<int> const&,glitch::core::rect<int> const&,glitch::video::SColor const*,glitch::core::rect<int> const*)
// int glitch::video::C2DDriver::draw2DRectangle(int a1, int a2, int a3, int a4, int a5);
// [0xd9aff0] (45 bytes) glitch::video::C2DDriver::draw2DLine(glitch::video::IVideoDriver *,glitch::core::vector2d<int> const&,glitch::core::vector2d<int> const&,glitch::video::SColor)
// int glitch::video::C2DDriver::draw2DLine(int a1, int a2, int a3, int a4);
// [0xd9b020] (92 bytes) glitch::video::C2DDriver::draw2DPolygon(glitch::video::IVideoDriver *,glitch::core::vector2d<int>,float,glitch::video::SColor,int)
// int glitch::video::C2DDriver::draw2DPolygon(int a1, int *a2, float a3, int a4, int a5);
// [0xd9b080] (53 bytes) glitch::video::C2DDriver::draw2DRectangle(glitch::video::IVideoDriver *,glitch::core::rect<int> const&,glitch::core::rect<int> const&,glitch::video::SColor const*,glitch::core::rect<int> const*)
// int glitch::video::C2DDriver::draw2DRectangle(int a1, int a2, int a3, int a4, int a5);
// [0xd9b0c0] (146 bytes) glitch::video::CCommonGLDriverBase::CBufferBase::CBufferBase(glitch::video::CCommonGLDriverBase*,glitch::video::SBufferDesc const&)
// int glitch::video::CCommonGLDriverBase::CBufferBase::CBufferBase(int a1, int a2, int a3);
// [0xd9b160] (79 bytes) glitch::video::CCommonGLDriverBase::CBufferBase::swapInternal(void)const
// int glitch::video::CCommonGLDriverBase::CBufferBase::swapInternal( glitch::video::CCommonGLDriverBase::CBufferBase *this);
// [0xd9b1b0] (288 bytes) glitch::video::CCommonGLDriverBase::CBufferBase::deferredBindImpl(unsigned int,unsigned int)
// void glitch::video::CCommonGLDriverBase::CBufferBase::deferredBindImpl( glitch::video::CCommonGLDriverBase::CBufferBase *this, unsigned int a2, unsigned int a3);
// [0xd9b2d0] (676 bytes) glitch::video::CCommonGLDriverBase::CBufferBase::subDataTask(unsigned int,unsigned int,void const*,unsigned int,unsigned int)const
// void glitch::video::CCommonGLDriverBase::CBufferBase::subDataTask( glitch::video::CCommonGLDriverBase::CBufferBase *this, int a2, int n, void *src, int a5, unsigned int a6);
// [0xd9b580] (94 bytes) glitch::video::CCommonGLDriverBase::CTextureBase::CTextureBase(char const*,glitch::video::CCommonGLDriverBase*,glitch::video::STextureDesc const&)
// void (**glitch::video::CCommonGLDriverBase::CTextureBase::CTextureBase( glitch::video::ITexture *a1, char *a2, glitch::video::IVideoDriver *a3, int a4))(glitch::video::CCommonGLDriverBase::CTextureBase *__hidden this);
// [0xd9b5e0] (125 bytes) glitch::video::CCommonGLDriverBase::CFramebufferBase::CFramebufferBase(glitch::video::CCommonGLDriverBase*,glitch::core::dimension2d<int> const&)
// void (**glitch::video::CCommonGLDriverBase::CFramebufferBase::CFramebufferBase( uint32_t *a1, int a2, int a3))(glitch::video::CCommonGLDriverBase::CFramebufferBase *__hidden this);
// [0xd9b660] (82 bytes) glitch::video::CCommonGLDriverBase::CRenderTargetBase::CRenderTargetBase(glitch::video::CCommonGLDriverBase*,glitch::video::E_ANTIALIASING_SETTING)
// void (**glitch::video::CCommonGLDriverBase::CRenderTargetBase::CRenderTargetBase( uint32_t *a1, int a2, int a3))(glitch::video::CCommonGLDriverBase::CRenderTargetBase *__hidden this);
// [0xd9b6c0] (109 bytes) glitch::video::CCommonGLDriverBase::CRenderTargetMSAABase::CRenderTargetMSAABase(void)
// struct glitch::video::CCommonGLDriverBase::CRenderTargetMSAABase *glitch::video::CCommonGLDriverBase::CRenderTargetMSAABase::CRenderTargetMSAABase( glitch::video::CCommonGLDriverBase::CRenderTargetMSAABase *this);
// [0xd9b730] (81 bytes) glitch::video::CCommonGLDriverBase::CQueryBase::CQueryBase(glitch::video::CCommonGLDriverBase*,glitch::video::E_QUERY_TYPE)
// int glitch::video::CCommonGLDriverBase::CQueryBase::CQueryBase(uint32_t *a1, int a2, int a3);
// [0xd9b790] (81 bytes) glitch::video::CCommonGLDriverBase::CSyncBase::CSyncBase(glitch::video::CCommonGLDriverBase*,glitch::video::E_SYNC_TYPE)
// int glitch::video::CCommonGLDriverBase::CSyncBase::CSyncBase(uint32_t *a1, int a2, int a3);
// [0xd9b7f0] (157 bytes) glitch::video::CCommonGLDriverBase::SCommonShadowState::SCommonShadowState(void)
// struct glitch::video::CCommonGLDriverBase::SCommonShadowState *glitch::video::CCommonGLDriverBase::SCommonShadowState::SCommonShadowState( glitch::video::CCommonGLDriverBase::SCommonShadowState *this);
// [0xd9b890] (114 bytes) glitch::video::CCommonGLDriverBase::fixUpProjectionMatrix(glitch::core::CMatrix4<float> &)const
// glitch::core::CMatrix4<float> *glitch::video::CCommonGLDriverBase::fixUpProjectionMatrix( glitch::video::CCommonGLDriverBase *this, glitch::core::CMatrix4<float> *a2);
// [0xd9b910] (413 bytes) glitch::video::CCommonGLDriverBase::set2DProjection(void)
// int glitch::video::CCommonGLDriverBase::set2DProjection(glitch::video::CCommonGLDriverBase *this);
// [0xd9bab0] (650 bytes) glitch::video::CCommonGLDriverBase::drawQuads(glitch::core::rect<float> const&,glitch::core::rect<float> const&,glitch::video::SColor const*)
// volatile int32_t *glitch::video::CCommonGLDriverBase::drawQuads( int *a1, int *a2, int *a3, int *a4, int a5, int a6, int a7, glitch::video::CVertexStreams *a8, int a9, int a10, volatile int32_t *a11, volatile int32_t *a12, int a13, int a14, int a15, int a16, int a17);
// [0xd9bd40] (105 bytes) glitch::video::CCommonGLDriverBase::drawQuads(glitch::core::rect<int> const&,glitch::core::rect<float> const&,glitch::video::SColor const*)
// 0xd9bd40 glitch::video::CCommonGLDriverBase::drawQuads(glitch::core::rect<int> const&,glitch::core::rect<float> const&,glitch::video::SColor const*)
// [0xd9bdb0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_GL_EXTENSION *)
// char **glitch::video::getStringsInternal();
// [0xd9bdd0] (672 bytes) glitch::video::CCommonGLDriverBase::initExtensions(unsigned char const*)
// void glitch::video::CCommonGLDriverBase::initExtensions(glitch::video::CCommonGLDriverBase *this, char *s);
// [0xd9c070] (29 bytes) glitch::video::SFixedGLShaderTexEnv::SFixedGLShaderTexEnv(void)
// struct glitch::video::SFixedGLShaderTexEnv *glitch::video::SFixedGLShaderTexEnv::SFixedGLShaderTexEnv( glitch::video::SFixedGLShaderTexEnv *this);
// [0xd9c090] (1346 bytes) glitch::video::SFixedGLShaderTexEnv::serializeAttributes(glitch::io::IAttributes *,unsigned int)const
// int glitch::video::SFixedGLShaderTexEnv::serializeAttributes( glitch::video::SFixedGLShaderTexEnv *this, glitch::io::IAttributes *a2, unsigned int a3);
// [0xd9c5e0] (1019 bytes) glitch::video::SFixedGLShaderFragmentState::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::SFixedGLShaderFragmentState::serializeAttributes( glitch::video::SFixedGLShaderFragmentState *this, glitch::io::IAttributes *a2);
// [0xd9c9e0] (621 bytes) glitch::video::SFixedGLShaderTexEnv::updateTextureFlags(void)
// glitch::video::SFixedGLShaderTexEnv *glitch::video::SFixedGLShaderTexEnv::updateTextureFlags( glitch::video::SFixedGLShaderTexEnv *this);
// [0xd9cc50] (121 bytes) glitch::video::SFixedGLShaderFragmentState::setActiveUnitCount(unsigned char)
// unsigned int glitch::video::SFixedGLShaderFragmentState::setActiveUnitCount( glitch::video::SFixedGLShaderFragmentState *this, uint8_t a2);
// [0xd9ccd0] (1359 bytes) glitch::video::SFixedGLShaderTexEnv::deserializeAttributes(glitch::io::IAttributes *,unsigned int)
// int glitch::video::SFixedGLShaderTexEnv::deserializeAttributes( glitch::video::SFixedGLShaderTexEnv *this, glitch::io::IAttributes *a2, unsigned int a3);
// [0xd9d220] (1004 bytes) glitch::video::SFixedGLShaderFragmentState::deserializeAttributes(glitch::io::IAttributes *)
// int glitch::video::SFixedGLShaderFragmentState::deserializeAttributes( glitch::video::SFixedGLShaderFragmentState *this, glitch::io::IAttributes *a2);
// [0xd9d610] (1127 bytes) glitch::video::SFixedGLShaderVertexState::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::SFixedGLShaderVertexState::serializeAttributes( glitch::video::SFixedGLShaderVertexState *this, glitch::io::IAttributes *a2);
// [0xd9da80] (1064 bytes) glitch::video::SFixedGLShaderVertexState::deserializeAttributes(glitch::io::IAttributes *)
// unsigned int glitch::video::SFixedGLShaderVertexState::deserializeAttributes( glitch::video::SFixedGLShaderVertexState *this, glitch::io::IAttributes *a2);
// [0xd9deb0] (52 bytes) glitch::video::CGLSLShader::createProgram(void)
// int glitch::video::CGLSLShader::createProgram(glitch::video::CGLSLShader *this);
// [0xd9def0] (84 bytes) glitch::video::CGLSLShader::releaseShaderCode(void)
// volatile int32_t *glitch::video::CGLSLShader::releaseShaderCode(glitch::video::CGLSLShader *this);
// [0xd9df50] (70 bytes) glitch::video::CGLSLShader::releaseDriverSpecificResources(void)
// volatile int32_t *glitch::video::CGLSLShader::releaseDriverSpecificResources( glitch::video::CGLSLShader *this);
// [0xd9dfa0] (87 bytes) glitch::video::CGLSLShaderCode::CGLSLShaderCode(glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *)
// glitch::video::CGLSLShaderCode *glitch::video::CGLSLShaderCode::CGLSLShaderCode( glitch::video::CGLSLShaderCode *this, glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *a2);
// [0xd9e000] (110 bytes) glitch::video::CGLSLShaderCode::createShader(int,char const**,int)
// int glitch::video::CGLSLShaderCode::createShader( glitch::video::CGLSLShaderCode *this, glf::App *a2, const char **a3, int a4);
// [0xd9e070] (425 bytes) glitch::video::CGLSLShaderCode::deserializeAttributes(glitch::io::IAttributes *)
// int glitch::video::CGLSLShaderCode::deserializeAttributes( glitch::video::CGLSLShaderCode *this, glitch::io::IAttributes *a2);
// [0xd9e220] (1129 bytes) glitch::video::CGLSLShaderCode::compileShader(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> *)const
// int glitch::video::CGLSLShaderCode::compileShader(glitch::video::CGLSLShaderCode *this, glitch::core **a2);
// [0xd9e690] (171 bytes) glitch::video::CGLSLShaderCode::CGLSLShaderCode(char const*,char const**,glitch::video::E_SHADER_TYPE,glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *,bool)
// int glitch::video::CGLSLShaderCode::CGLSLShaderCode( glitch::video::CGLSLShaderCode *a1, char *a2, char **a3, int a4, int a5, char a6);
// [0xd9e740] (20 bytes) glitch::video::CGLSLShaderHandler::CGLSLShaderHandler(void)
// struct glitch::video::CGLSLShaderHandler *glitch::video::CGLSLShaderHandler::CGLSLShaderHandler( glitch::video::CGLSLShaderHandler *this);
// [0xd9e760] (417 bytes) glitch::video::CGLSLShaderHandler::doVersionCheck(unsigned int)
// int glitch::video::CGLSLShaderHandler::doVersionCheck(glitch::video::CGLSLShaderHandler *this, unsigned int a2);
// [0xd9e910] (58 bytes) glitch::video::CGLSLShaderHandler::initShaderHandler(glitch::video::IShaderManager *)
// int glitch::video::CGLSLShaderHandler::initShaderHandler(glitch::video::CGLSLShaderHandler *this);
// [0xd9e950] (59 bytes) glitch::video::CGLSLShaderManager::CGLSLShaderManager(void)
// void (**glitch::video::CGLSLShaderManager::CGLSLShaderManager( glitch::video::CGLSLShaderManager *this))(glitch::video::CGLSLShaderManager *__hidden this);
// [0xd9e990] (155 bytes) glitch::video::CGenericBaker::CGenericBaker(glitch::video::IShader const*)
// void (**glitch::video::CGenericBaker::CGenericBaker( glitch::video::CGenericBaker *this, const glitch::video::IShader *a2))(glitch::video::CGenericBaker *__hidden this);
// [0xd9ea30] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_VERTEX_ATTRIBUTE *)
// char **glitch::video::getStringsInternal();
// [0xd9ea50] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_VERTEX_ATTRIBUTE_VALUE_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xd9ea70] (228 bytes) glitch::video::SShaderVertexAttributeDef::deserializeAttributes(glitch::io::IAttributes *)
// int glitch::video::SShaderVertexAttributeDef::deserializeAttributes( glitch::video::SShaderVertexAttributeDef *this, glitch::io::IAttributes *a2);
// [0xd9eb60] (278 bytes) glitch::video::SShaderVertexAttributeDef::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::SShaderVertexAttributeDef::serializeAttributes( glitch::video::SShaderVertexAttributeDef *this, glitch::io::IAttributes *a2);
// [0xda7fc0] (137 bytes) glitch::video::IVideoDriver::instantiateIrradianceManager(void)const
// int glitch::video::IVideoDriver::instantiateIrradianceManager(glitch::IDevice **this);
// [0xda8050] (224 bytes) glitch::video::IVideoDriver::updateIrradianceCache(glitch::video::IVideoDriver::SIrradianceParameterCache &,unsigned int)
// int glitch::video::IVideoDriver::updateIrradianceCache(glitch::video::IVideoDriver *a1, int a2);
// [0xdac3d0] (347 bytes) glitch::video::SShaderParameterDef::loadBinaryAttributes(boost::intrusive_ptr<glitch::io::IReadFile> &)
// int glitch::video::SShaderParameterDef::loadBinaryAttributes( glitch::core::detail::SSharedStringHeapEntry::SData **this, boost::intrusive_ptr<glitch::io::IReadFile> *a2);
// [0xdac530] (649 bytes) glitch::video::C2DDriver::init(void)
// void glitch::video::C2DDriver::init(glitch::video::C2DDriver *this);
// [0xdac7c0] (211 bytes) glitch::video::C2DDriver::get2DMaterial(boost::intrusive_ptr<glitch::video::ITexture> const&,bool)
// glitch::video::C2DDriver *glitch::video::C2DDriver::get2DMaterial( glitch::video::C2DDriver *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2, uint32_t *a3, char a4);
// [0xdac8a0] (90 bytes) glitch::video::C2DDriver::get2DMaterial(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,bool)
// glitch::video::C2DDriver *glitch::video::C2DDriver::get2DMaterial( glitch::video::C2DDriver *this, glitch::video::IVideoDriver *a2, const boost::intrusive_ptr<glitch::video::ITexture> *a3, char a4);
// [0xdac900] (194 bytes) glitch::video::C2DDriver::set2DTexture(boost::intrusive_ptr<glitch::video::ITexture> const&,bool)
// glitch::video::C2DDriver *glitch::video::C2DDriver::set2DTexture( glitch::video::C2DDriver *this, glitch::video::IVideoDriver **a2, uint32_t *a3, char a4);
// [0xdac9d0] (90 bytes) glitch::video::C2DDriver::set2DTexture(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,bool)
// glitch::video::C2DDriver *glitch::video::C2DDriver::set2DTexture( glitch::video::C2DDriver *this, glitch::video::IVideoDriver *a2, const boost::intrusive_ptr<glitch::video::ITexture> *a3, char a4);
// [0xdaca30] (266 bytes) glitch::video::C2DDriver::draw2DImage(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::rect<int> const&,glitch::core::rect<int> const&,glitch::core::rect<int> const*,glitch::video::SColor const*,bool)
// int glitch::video::C2DDriver::draw2DImage( glitch::video::IVideoDriver **a1, uint32_t *a2, int a3, int a4, int a5, int a6, char a7);
// [0xdacb40] (92 bytes) glitch::video::C2DDriver::draw2DImage(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::rect<int> const&,glitch::core::rect<int> const&,glitch::core::rect<int> const*,glitch::video::SColor const*,bool)
// int glitch::video::C2DDriver::draw2DImage(int a1, uint32_t *a2, int a3, int a4, int a5, int a6, char a7);
// [0xdacba0] (271 bytes) glitch::video::C2DDriver::draw2DImage(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&,glitch::core::rect<int> const&,glitch::core::rect<int> const*,glitch::video::SColor,bool)
// int glitch::video::C2DDriver::draw2DImage( glitch::video::IVideoDriver **a1, uint32_t *a2, int *a3, uint32_t *a4, int a5, int a6, char a7);
// [0xdaccb0] (92 bytes) glitch::video::C2DDriver::draw2DImage(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&,glitch::core::rect<int> const&,glitch::core::rect<int> const*,glitch::video::SColor,bool)
// int glitch::video::C2DDriver::draw2DImage(int a1, uint32_t *a2, int *a3, uint32_t *a4, int a5, int a6, char a7);
// [0xdacd10] (203 bytes) glitch::video::C2DDriver::draw2DImage(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&,std::vector<glitch::core::rect<int>,glitch::core::SAllocator<glitch::core::rect<int>,(glitch::memory::E_MEMORY_HINT)0>> const&,std::vector<int,glitch::core::SAllocator<int,(glitch::memory::E_MEMORY_HINT)0>> const&,int,glitch::core::rect<int> const*,glitch::video::SColor,bool)
// unsigned int glitch::video::C2DDriver::draw2DImage( glitch::video::IVideoDriver **a1, uint32_t *a2, int *a3, int *a4, int *a5, int a6, int a7, int a8, char a9);
// [0xdacde0] (108 bytes) glitch::video::C2DDriver::draw2DImage(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&,std::vector<glitch::core::rect<int>,glitch::core::SAllocator<glitch::core::rect<int>,(glitch::memory::E_MEMORY_HINT)0>> const&,std::vector<int,glitch::core::SAllocator<int,(glitch::memory::E_MEMORY_HINT)0>> const&,int,glitch::core::rect<int> const*,glitch::video::SColor,bool)
// unsigned int glitch::video::C2DDriver::draw2DImage( int a1, uint32_t *a2, int *a3, int *a4, int *a5, int a6, int a7, int a8, char a9);
// [0xdace50] (114 bytes) glitch::video::C2DDriver::draw2DImage(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&)
// int glitch::video::C2DDriver::draw2DImage(glitch::video::IVideoDriver **a1, uint32_t *a2, int *a3);
// [0xdaced0] (59 bytes) glitch::video::C2DDriver::draw2DImage(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&)
// int glitch::video::C2DDriver::draw2DImage(int a1, uint32_t *a2, int *a3);
// [0xdad0b0] (276 bytes) glitch::video::CGLSLShader::deleteInfo(bool)
// int glitch::video::CGLSLShader::deleteInfo(glitch::video::CGLSLShader *this, bool a2);
// [0xdad1d0] (121 bytes) glitch::video::CGLSLShader::~CGLSLShader()
// void glitch::video::CGLSLShader::~CGLSLShader(glitch::video::CGLSLShader *this);
// [0xdad250] (56 bytes) glitch::video::CGLSLShader::~CGLSLShader()
// void glitch::video::CGLSLShader::~CGLSLShader(glitch::video::CGLSLShader *this);
// [0xdad430] (297 bytes) glitch::video::SShaderVertexAttributeDef::loadBinaryAttributes(boost::intrusive_ptr<glitch::io::IReadFile> &)
// int glitch::video::SShaderVertexAttributeDef::loadBinaryAttributes( glitch::core::detail::SSharedStringHeapEntry::SData **this, boost::intrusive_ptr<glitch::io::IReadFile> *a2);
// [0xdae990] (1209 bytes) glitch::video::sortParameters(glitch::video::SShaderParameterDef *,unsigned short)
// int glitch::video::sortParameters(glitch::video *this, glitch::video::SShaderParameterDef *a2);
// [0xdaeef0] (1039 bytes) glitch::video::CGenericBaker::initParameters(boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned char)const
// int glitch::video::CGenericBaker::initParameters(int a1, int *a2, uint8_t a3);
// [0xdaf300] (1643 bytes) glitch::video::CGenericBaker::getBatchMaterial(boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned char)const
// volatile int32_t **glitch::video::CGenericBaker::getBatchMaterial( volatile int32_t **a1, int a2, int *a3, uint8_t a4);
// [0xdaf970] (2399 bytes) glitch::video::IVideoDriver::IVideoDriver(glitch::IDevice *,glitch::video::IShaderManager *,glitch::video::CMaterialRendererManager *,glitch::video::CTextureManager *,glitch::video::CLookupTableManager *,glitch::video::CGlobalMaterialParameterManager *,boost::intrusive_ptr<glitch::video::CLight> const&)
// glitch::video::CMaterialRendererManager *glitch::video::IVideoDriver::IVideoDriver( glitch::video::IVideoDriver *a1, int a2, int a3, int a4, int a5, int a6, int a7, volatile int32_t **a8);
// [0xdb02d0] (2399 bytes) glitch::video::IVideoDriver::IVideoDriver(glitch::IDevice *,glitch::video::IShaderManager *,glitch::video::CMaterialRendererManager *,glitch::video::CTextureManager *,glitch::video::CLookupTableManager *,glitch::video::CGlobalMaterialParameterManager *,boost::intrusive_ptr<glitch::video::CLight> const&)
// glitch::video::CGlobalMaterialParameterManager *glitch::video::IVideoDriver::IVideoDriver( glitch::video::IVideoDriver *a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, volatile int32_t **a9);
// [0xdb0c30] (276 bytes) glitch::video::CNullDriver::CNullDriver(glitch::video::IVideoDriver *)
// glitch::video::CNullDriver *glitch::video::CNullDriver::CNullDriver( glitch::video::CNullDriver *this, glitch::video::IVideoDriver *a2);
// [0xdb0d50] (249 bytes) glitch::video::CNullDriver::CNullDriver(glitch::video::IVideoDriver *)
// glitch::video::CNullDriver *glitch::video::CNullDriver::CNullDriver( glitch::video::CNullDriver *this, glitch::video::IVideoDriver *a2, int a3);
// [0xdb0e50] (498 bytes) glitch::video::CBatchDriver::CBatchDriver(unsigned int,unsigned int,glitch::video::IVideoDriver *,glitch::scene::CSceneManager *,glitch::video::E_INDEX_TYPE)
// void glitch::video::CBatchDriver::CBatchDriver( glitch::video::IVideoDriver *a1, int a2, int a3, uint32_t *a4, int a5, int a6);
// [0xdb1050] (455 bytes) glitch::video::CBatchDriver::CBatchDriver(unsigned int,unsigned int,glitch::video::IVideoDriver *,glitch::scene::CSceneManager *,glitch::video::E_INDEX_TYPE)
// void glitch::video::CBatchDriver::CBatchDriver( glitch::video::IVideoDriver *a1, int *a2, int a3, int a4, uint32_t *a5, int a6, int a7);
// [0xdb14c0] (216 bytes) glitch::video::C2DDriver::freeTextures(void)
// int glitch::video::C2DDriver::freeTextures(glitch::video::C2DDriver *this);
// [0xdb15a0] (43 bytes) glitch::video::C2DDriver::freeTextures(glitch::video::IVideoDriver *)
// int glitch::video::C2DDriver::freeTextures(glitch::video::C2DDriver *this);
// [0xdb15d0] (253 bytes) glitch::video::IVideoDriver::removeUnused(void)
// bool glitch::video::IVideoDriver::removeUnused(glitch::video::IShaderManager **this);
// [0xdb16d0] (527 bytes) glitch::video::CCommonGLDriverBase::CTextureBase::mapImpl(unsigned char,glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char)
// int glitch::video::CCommonGLDriverBase::CTextureBase::mapImpl( volatile int32_t *a1, char a2, int a3, char a4, int a5, int a6, int a7, volatile int32_t *a8);
// [0xdb18e0] (205 bytes) glitch::video::C2DDriver::draw2DRectangle(glitch::core::rect<int> const&,glitch::video::SColor,glitch::video::SColor,glitch::video::SColor,glitch::video::SColor,glitch::core::rect<int> const*)
// int glitch::video::C2DDriver::draw2DRectangle( glitch::video::IVideoDriver **a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0xdb19b0] (91 bytes) glitch::video::C2DDriver::draw2DRectangle(glitch::video::IVideoDriver *,glitch::core::rect<int> const&,glitch::video::SColor,glitch::video::SColor,glitch::video::SColor,glitch::video::SColor,glitch::core::rect<int> const*)
// int glitch::video::C2DDriver::draw2DRectangle(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0xdb1a10] (219 bytes) glitch::video::C2DDriver::draw2DRectangle(glitch::video::SColor,glitch::core::rect<int> const&,glitch::core::rect<int> const*)
// int glitch::video::C2DDriver::draw2DRectangle(glitch::video::IVideoDriver **a1, int a2, int a3, int a4);
// [0xdb1af0] (67 bytes) glitch::video::C2DDriver::draw2DRectangle(glitch::video::IVideoDriver *,glitch::video::SColor,glitch::core::rect<int> const&,glitch::core::rect<int> const*)
// int glitch::video::C2DDriver::draw2DRectangle(int a1, int a2, int a3, int a4);
// [0xdb1be0] (303 bytes) glitch::video::CCommonGLDriverBase::CTextureBase::deferredBindImpl(unsigned int,unsigned int)
// int glitch::video::CCommonGLDriverBase::CTextureBase::deferredBindImpl( glitch::video::CCommonGLDriverBase::CTextureBase *this, unsigned int a2, unsigned int a3);
// [0xdb1d10] (664 bytes) glitch::video::CNullDriver::CNullDriver(glitch::IDevice *)
// glitch::video::CNullDriver *glitch::video::CNullDriver::CNullDriver( glitch::video::CNullDriver *this, glitch::IDevice *a2);
// [0xdb1fb0] (113 bytes) glitch::video::createNullDriver(glitch::IDevice *)
// glitch::video *glitch::video::createNullDriver(glitch::video *this, glitch::IDevice *a2);
// [0xdb2030] (15 bytes) `virtual thunk to'glitch::video::IVideoDriver::~IVideoDriver()
// void `virtual thunk to'glitch::video::IVideoDriver::~IVideoDriver(glitch::video::IVideoDriver *this);
// [0xdb2040] (1386 bytes) glitch::video::IVideoDriver::~IVideoDriver()
// void glitch::video::IVideoDriver::~IVideoDriver(glitch::video::IVideoDriver *this);
// [0xdb25b0] (15 bytes) `virtual thunk to'glitch::video::IVideoDriver::~IVideoDriver()
// void `virtual thunk to'glitch::video::IVideoDriver::~IVideoDriver(glitch::video::IVideoDriver *this);
// [0xdb25c0] (56 bytes) glitch::video::IVideoDriver::~IVideoDriver()
// void glitch::video::IVideoDriver::~IVideoDriver(glitch::video::IVideoDriver *this);
// [0xdb2600] (1386 bytes) glitch::video::IVideoDriver::~IVideoDriver()
// void glitch::video::IVideoDriver::~IVideoDriver(glitch::video::IVideoDriver *this, int *a2);
// [0xdb2b70] (15 bytes) `virtual thunk to'glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase()
// void `virtual thunk to'glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase( glitch::video::CCommonGLDriverBase *this);
// [0xdb2b80] (98 bytes) glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase()
// void glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase(glitch::video::CCommonGLDriverBase *this);
// [0xdb2bf0] (15 bytes) `virtual thunk to'glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase()
// void `virtual thunk to'glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase( glitch::video::CCommonGLDriverBase *this);
// [0xdb2c00] (56 bytes) glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase()
// void glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase(glitch::video::CCommonGLDriverBase *this);
// [0xdb2c40] (72 bytes) glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase()
// void glitch::video::CCommonGLDriverBase::~CCommonGLDriverBase( glitch::video::CCommonGLDriverBase *this, int *a2);
// [0xdb2c90] (15 bytes) `virtual thunk to'glitch::video::CNullDriver::~CNullDriver()
// void `virtual thunk to'glitch::video::CNullDriver::~CNullDriver(glitch::video::CNullDriver *this);
// [0xdb2ca0] (106 bytes) glitch::video::CNullDriver::~CNullDriver()
// void glitch::video::CNullDriver::~CNullDriver(glitch::video::CNullDriver *this);
// [0xdb2d10] (15 bytes) `virtual thunk to'glitch::video::CNullDriver::~CNullDriver()
// void `virtual thunk to'glitch::video::CNullDriver::~CNullDriver(glitch::video::CNullDriver *this);
// [0xdb2d20] (56 bytes) glitch::video::CNullDriver::~CNullDriver()
// void glitch::video::CNullDriver::~CNullDriver(glitch::video::CNullDriver *this);
// [0xdb2d60] (88 bytes) glitch::video::CNullDriver::~CNullDriver()
// void glitch::video::CNullDriver::~CNullDriver(glitch::video::CNullDriver *this, int *a2);
// [0xdb2dc0] (1398 bytes) glitch::video::CCommonGLDriverBase::CCommonGLDriverBase(glitch::IDevice *,glitch::video::IShaderManager *)
// glitch::video::CCommonGLDriverBase *glitch::video::CCommonGLDriverBase::CCommonGLDriverBase( glitch::video::CCommonGLDriverBase *this, glitch::IDevice *a2, glitch::video::IShaderManager *a3);
// [0xdb3340] (1367 bytes) glitch::video::CCommonGLDriverBase::CCommonGLDriverBase(glitch::IDevice *,glitch::video::IShaderManager *)
// glitch::video::CCommonGLDriverBase *glitch::video::CCommonGLDriverBase::CCommonGLDriverBase( glitch::video::CCommonGLDriverBase *this, glitch::IDevice *a2, glitch::video::IShaderManager *a3, int a4);
// [0xdb38a0] (632 bytes) glitch::video::CNullDriver::CNullDriver(glitch::IDevice *)
// glitch::video::CNullDriver *glitch::video::CNullDriver::CNullDriver(char **this, glitch::IDevice *a2, int a3);
// [0xdb3b20] (304 bytes) glitch::video::CCommonGLDriverBase::fixUpScreenArea(glitch::core::rect<int> const&,int &,int &,int &,int &,bool,bool)const
// int glitch::video::CCommonGLDriverBase::fixUpScreenArea( int a1, int *a2, int *a3, uint32_t *a4, int *a5, int *a6, char a7, char a8);
// [0xdb3c50] (418 bytes) glitch::video::IVideoDriver::writeFramebuffer(glitch::core::rect<int> const&,glitch::video::E_PIXEL_FORMAT,unsigned int,void const*,glitch::video::E_FRAMEBUFFER_FLIP)
// int glitch::video::IVideoDriver::writeFramebuffer(uint32_t *a1, int *a2, int a3, int a4, int a5, int a6);
// [0xdb3e00] (639 bytes) glitch::video::IVideoDriver::readFramebuffer(glitch::core::rect<int> const&,glitch::video::E_PIXEL_FORMAT,unsigned int,void *,glitch::video::E_FRAMEBUFFER_FLIP,glitch::video::E_FRAMEBUFFER_ROTATION,bool)
// int glitch::video::IVideoDriver::readFramebuffer( glitch::video::IVideoDriver *a1, int *a2, int a3, int a4, int a5, int a6, int a7, char a8);
// [0xdb4080] (335 bytes) glitch::video::IVideoDriver::createScreenShot(glitch::core::rect<int> const&)
// int *glitch::video::IVideoDriver::createScreenShot( int *a1, glitch::video::IVideoDriver *a2, unsigned int *a3);
// [0xdb41d0] (278 bytes) glitch::video::IVideoDriver::IFramebuffer::setOrientationImpl(glitch::video::E_ORIENTATION)
// int glitch::video::IVideoDriver::IFramebuffer::setOrientationImpl(int a1, int a2);
// [0xdb42f0] (449 bytes) glitch::video::IVideoDriver::beginScene(int)
// int glitch::video::IVideoDriver::beginScene(glitch::video::IVideoDriver *this, int a2);
// [0xdb44c0] (315 bytes) glitch::video::IVideoDriver::onDisplayDisconnected(int)
// int glitch::video::IVideoDriver::onDisplayDisconnected(glitch::video::IVideoDriver *this, int a2);
// [0xdb4600] (1859 bytes) glitch::video::IVideoDriver::forceCommitTexture(boost::intrusive_ptr<glitch::video::ITexture> const&,unsigned int)
// void glitch::video::IVideoDriver::forceCommitTexture( glitch::video::IVideoDriver *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2);
// [0xdb4da0] (116 bytes) glitch::video::COpenGLES2Driver::COpenGLES2Driver(glitch::IDevice *)
// void (**glitch::video::COpenGLES2Driver::COpenGLES2Driver( glitch::video::COpenGLES2Driver *this))(glitch::video::COpenGLES2Driver *__hidden this);
// [0xdb4e20] (88 bytes) glitch::video::COpenGLES2Driver::COpenGLES2Driver(glitch::IDevice *)
// glitch::video::COpenGLES2Driver *glitch::video::COpenGLES2Driver::COpenGLES2Driver( glitch::video::COpenGLES2Driver *this, glitch::IDevice *a2);
// [0xdb4e80] (15 bytes) `virtual thunk to'glitch::video::COpenGLES2Driver::~COpenGLES2Driver()
// void `virtual thunk to'glitch::video::COpenGLES2Driver::~COpenGLES2Driver( glitch::video::COpenGLES2Driver *this);
// [0xdb4e90] (106 bytes) glitch::video::COpenGLES2Driver::~COpenGLES2Driver()
// void glitch::video::COpenGLES2Driver::~COpenGLES2Driver(glitch::video::COpenGLES2Driver *this);
// [0xdb4f00] (15 bytes) `virtual thunk to'glitch::video::COpenGLES2Driver::~COpenGLES2Driver()
// void `virtual thunk to'glitch::video::COpenGLES2Driver::~COpenGLES2Driver( glitch::video::COpenGLES2Driver *this);
// [0xdb4f10] (56 bytes) glitch::video::COpenGLES2Driver::~COpenGLES2Driver()
// void glitch::video::COpenGLES2Driver::~COpenGLES2Driver(glitch::video::COpenGLES2Driver *this);
// [0xdb4f50] (88 bytes) glitch::video::COpenGLES2Driver::~COpenGLES2Driver()
// void glitch::video::COpenGLES2Driver::~COpenGLES2Driver(glitch::video::COpenGLES2Driver *this, int *a2);
// [0xdb9fb0] (1142 bytes) glitch::video::IVideoDriver::drawPendingBatch(void)
// int glitch::video::IVideoDriver::drawPendingBatch(glitch::video::IVideoDriver *this);
// [0xdba430] (43 bytes) glitch::video::CNullDriver::flushImpl(unsigned int)
// int glitch::video::CNullDriver::flushImpl(glitch::video::CNullDriver *this, char a2);
// [0xdba460] (1571 bytes) glitch::video::IVideoDriver::appendBatch(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,glitch::video::CPrimitiveStream const&,glitch::video::CDriverBinding **)
// int glitch::video::IVideoDriver::appendBatch( glitch::video::IVideoDriver *this, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a2, const glitch::video::CPrimitiveStream *a3, glitch::video::CDriverBinding **a4);
// [0xdbaa90] (134 bytes) glitch::video::IVideoDriver::draw(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,glitch::video::CPrimitiveStream const&,glitch::video::CDriverBinding **,boost::intrusive_ptr<glitch::scene::CMeshBuffer const> const&)
// glitch::video::IVideoDriver *glitch::video::IVideoDriver::draw( glitch::video::IVideoDriver *a1, boost::intrusive_ptr<glitch::video::CVertexStreams const> *a2, const glitch::video::CPrimitiveStream *a3, glitch::video::CDriverBinding **a4);
// [0xdbab20] (805 bytes) glitch::video::IVideoDriver::drawFullScreenQuad(glitch::video::SColor const*)
// uint32_t *glitch::video::IVideoDriver::drawFullScreenQuad( int *a1, uint32_t *a2, int a3, glitch::video::CVertexStreams *a4, int a5, int a6, volatile int32_t *a7, volatile int32_t *a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48);
// [0xdbae50] (1899 bytes) glitch::video::CGLSLShaderManager::createShaderCode(char const*,glitch::video::E_SHADER_TYPE,char const*,glitch::io::IReadFile *)
// glitch::video::CGLSLShaderCode **glitch::video::CGLSLShaderManager::createShaderCode( glitch::video::CGLSLShaderCode **a1, glitch::video::ICodeShaderManager *a2, char *a3, int a4, char *a5, int a6);
// [0xdbb670] (2281 bytes) glitch::video::spatialGridClustering(std::map<unsigned int,std::vector<unsigned int,std::allocator<unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int,std::allocator<unsigned int>>>>> &,std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>> const&,glitch::core::vector3d<float> const&)
// int glitch::video::spatialGridClustering(uint32_t *a1, int *a2, float *a3);
// [0xdbbf60] (662 bytes) glitch::video::distributeMeans(unsigned int,glitch::core::aabbox3d<float> const&,std::vector<glitch::core::vector3d<float>,glitch::core::SAllocator<glitch::core::vector3d<float>,(glitch::memory::E_MEMORY_HINT)0>> &,unsigned int,unsigned int &)
// float *glitch::video::distributeMeans(int a1, float *a2, int a3, float *a4, uint32_t *a5);
// [0xdbc200] (4966 bytes) glitch::video::kMeansClustering(std::map<unsigned int,std::vector<unsigned int,std::allocator<unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int,std::allocator<unsigned int>>>>> &,std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>> const&,unsigned int,glitch::core::aabbox3d<float> const&)
// int glitch::video::kMeansClustering(uint32_t *a1, uint32_t *a2, unsigned int a3, float *a4);
// [0xdbd610] (2171 bytes) glitch::video::assignTexCoordUnits(glitch::video::SShaderParameterDef *,unsigned short,glitch::video::SShaderVertexAttributeDef *,unsigned short)
// int glitch::video::assignTexCoordUnits( glitch::video *this, glitch::video::SShaderParameterDef *a2, int a3, glitch::video::SShaderVertexAttributeDef *a4);
// [0xdc1c70] (259 bytes) glitch::video::createOpenGLES2Driver(glitch::IDevice *)
// glitch::video *glitch::video::createOpenGLES2Driver(glitch::video *this, glitch::IDevice *a2);
// [0xdc5ca0] (6906 bytes) glitch::video::kdTreeClustering(std::map<unsigned int,std::vector<unsigned int,std::allocator<unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int,std::allocator<unsigned int>>>>> &,std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>> const&,unsigned int,glitch::core::aabbox3d<float> const&)
// int glitch::video::kdTreeClustering(uint32_t *a1, void **a2, unsigned int a3, float *a4);
// [0xdc77a0] (8035 bytes) glitch::video::CBatchDriver::thisAppendBatch(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,glitch::video::CPrimitiveStream const&,boost::intrusive_ptr<glitch::scene::CMeshBuffer const> const&,glitch::scene::ISceneNode *,void *)
// int glitch::video::CBatchDriver::thisAppendBatch( int a1, volatile int32_t **a2, int a3, int *a4, int a5, int a6);
// [0xdc9710] (72 bytes) glitch::video::CBatchDriver::drawInfo(glitch::scene::SDrawInfo const&)
// int glitch::video::CBatchDriver::drawInfo( glitch::video::CBatchDriver *this, const glitch::scene::SDrawInfo *a2);
// [0xdc9760] (114 bytes) glitch::video::CBatchDriver::draw(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,glitch::video::CPrimitiveStream const&,glitch::video::CDriverBinding **,boost::intrusive_ptr<glitch::scene::CMeshBuffer const> const&)
// int glitch::video::CBatchDriver::draw(int a1, volatile int32_t **a2, int a3, int a4, int *a5);
// [0xdc97e0] (1133 bytes) glitch::video::assignTextureParameterSubIDs(glitch::video::SShaderParameterDef *,unsigned short)
// void glitch::video::assignTextureParameterSubIDs(glitch::video *this, glitch::video::SShaderParameterDef *a2);
// [0xdc9c50] (4421 bytes) glitch::video::CGLSLShader::linkProgram(void)
// int glitch::video::CGLSLShader::linkProgram(glitch::video::CGLSLShader *this);
// [0xdcada0] (86 bytes) glitch::video::CGLSLShader::compileAndLink(void)
// int glitch::video::CGLSLShader::compileAndLink(glitch::video::CGLSLShaderCode **this);
// [0xdcae00] (357 bytes) glitch::video::CGLSLShader::deserializeAttributes(glitch::io::IAttributes *)
// int glitch::video::CGLSLShader::deserializeAttributes( glitch::video::CGLSLShader *this, glitch::io::IAttributes *a2);
// [0xdcaf70] (306 bytes) glitch::video::CGLSLShader::CGLSLShader(unsigned short,char const*,boost::intrusive_ptr<glitch::video::CGLSLShaderCode> const&,boost::intrusive_ptr<glitch::video::CGLSLShaderCode> const&,glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *)
// int glitch::video::CGLSLShader::CGLSLShader( glitch::video::IShader *a1, uint16_t a2, char *a3, int *a4, int *a5, glitch::video::IVideoDriver *a6);
// [0xdcb0b0] (248 bytes) glitch::video::CGLSLShaderManager::createShaderInternal(char const*,boost::intrusive_ptr<glitch::video::CGLSLShaderCode> const&,boost::intrusive_ptr<glitch::video::CGLSLShaderCode> const&)
// volatile int32_t **glitch::video::CGLSLShaderManager::createShaderInternal( volatile int32_t **a1, glitch::video::IShaderManager *a2, char *a3, int *a4, int *a5);
// [0xdcb1b0] (635 bytes) glitch::video::CGLSLShaderManager::createShader(char const*,char const*,char const*,char const*,char const*,glitch::io::IReadFile *,glitch::io::IReadFile *)
// volatile int32_t **glitch::video::CGLSLShaderManager::createShader( volatile int32_t **a1, uint32_t *a2, char *a3, char *a4, char *a5, char *a6, char *a7, int a8, int a9);
// [0xdcb4f0] (582 bytes) glitch::video::CGLSLShaderManager::createShader(char const*,boost::intrusive_ptr<glitch::video::CGLSLShaderCode> const&,boost::intrusive_ptr<glitch::video::CGLSLShaderCode> const&)
// volatile int32_t **glitch::video::CGLSLShaderManager::createShader( volatile int32_t **a1, int a2, char *a3, int *a4, int *a5);
// [0xdcb820] (14 bytes) glitch::video::IBuffer::hasVBO(void)const
// bool glitch::video::IBuffer::hasVBO(glitch::video::IBuffer *this);
// [0xdcb830] (55 bytes) glitch::video::IBuffer::setDirty(unsigned char)const
// glitch::video::IBuffer *glitch::video::IBuffer::setDirty(glitch::video::IBuffer *this, char a2);
// [0xdcb870] (11 bytes) glitch::video::ITexture::getRealTextureInternal(void)
// glitch::video::ITexture *glitch::video::ITexture::getRealTextureInternal(glitch::video::ITexture *this);
// [0xdcb880] (11 bytes) glitch::video::ITexture::getRealTextureInternal(void)const
// glitch::video::ITexture *glitch::video::ITexture::getRealTextureInternal(glitch::video::ITexture *this);
// [0xdcb890] (13 bytes) glitch::video::ITexture::getDataInternal(void)const
// int glitch::video::ITexture::getDataInternal(glitch::video::ITexture *this);
// [0xdcb8a0] (39 bytes) glitch::video::ITexture::getDataInternal(unsigned char)const
// int glitch::video::ITexture::getDataInternal(glitch::video::ITexture *this, uint8_t a2);
// [0xdcb8d0] (27 bytes) glitch::video::IBatchBaker::~IBatchBaker()
// void glitch::video::IBatchBaker::~IBatchBaker(glitch::video::IBatchBaker *this);
// [0xdcb8f0] (9 bytes) glitch::video::CDriverBinding::onDelete(void)
// void glitch::video::CDriverBinding::onDelete();
// [0xdcb900] (27 bytes) glitch::video::IVideoDriver::IFramebuffer::~IFramebuffer()
// void glitch::video::IVideoDriver::IFramebuffer::~IFramebuffer(glitch::video::IVideoDriver::IFramebuffer *this);
// [0xdcb920] (17 bytes) glitch::video::CBatchDriver::setStartOfBatchCallback(glitch::scene::IStartOfBatchCallback *)
// glitch::video::CBatchDriver *glitch::video::CBatchDriver::setStartOfBatchCallback( glitch::video::CBatchDriver *this, glitch::scene::IStartOfBatchCallback *a2);
// [0xdcb940] (17 bytes) glitch::video::CBatchDriver::setEndOfBatchCallback(glitch::scene::IEndOfBatchCallback *)
// glitch::video::CBatchDriver *glitch::video::CBatchDriver::setEndOfBatchCallback( glitch::video::CBatchDriver *this, glitch::scene::IEndOfBatchCallback *a2);
// [0xdcb960] (17 bytes) glitch::video::CBatchDriver::setSegmentCompileCallback(glitch::scene::ISegmentCompileCallback *)
// glitch::video::CBatchDriver *glitch::video::CBatchDriver::setSegmentCompileCallback( glitch::video::CBatchDriver *this, glitch::scene::ISegmentCompileCallback *a2);
// [0xdcb980] (17 bytes) glitch::video::CBatchDriver::setSplitSegmentChoiceCallback(glitch::scene::ISplitSegmentChoiceCallback *)
// int glitch::video::CBatchDriver::setSplitSegmentChoiceCallback(int a1, int a2);
// [0xdcb9a0] (27 bytes) glitch::video::IRenderBuffer::~IRenderBuffer()
// void glitch::video::IRenderBuffer::~IRenderBuffer(glitch::video::IRenderBuffer *this);
// [0xdcb9c0] (9 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::onClearMaterial(void)
// void glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::onClearMaterial();
// [0xdcb9d0] (15 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getMaxUserClipPlanes(void)const
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getMaxUserClipPlanes( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xdcb9e0] (12 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getDriverType(void)const
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getDriverType();
// [0xdcc130] (27 bytes) glitch::video::CCommonGLDriverBase::CFramebufferBase::~CFramebufferBase()
// void glitch::video::CCommonGLDriverBase::CFramebufferBase::~CFramebufferBase( glitch::video::CCommonGLDriverBase::CFramebufferBase *this);
// [0xdcc150] (27 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CFramebuffer::~CFramebuffer()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CFramebuffer::~CFramebuffer( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CFramebuffer *this);
// [0xdcc190] (27 bytes) glitch::video::CNullDriver::CFramebuffer::~CFramebuffer()
// void glitch::video::CNullDriver::CFramebuffer::~CFramebuffer(glitch::video::CNullDriver::CFramebuffer *this);
// [0xdcc1b0] (27 bytes) glitch::video::CCommonGLDriverBase::CRenderBufferBase::~CRenderBufferBase()
// void glitch::video::CCommonGLDriverBase::CRenderBufferBase::~CRenderBufferBase( glitch::video::CCommonGLDriverBase::CRenderBufferBase *this);
// [0xdcd930] (12 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::getMaximalPrimitiveCount(void)const
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::getMaximalPrimitiveCount();
// [0xdcd940] (9 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::captureFramebufferImpl(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector2d<int> const&,glitch::core::rect<int> const&,unsigned char,glitch::video::E_TEXTURE_CUBE_MAP_FACE,bool)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::captureFramebufferImpl();
// [0xdcdf50] (45 bytes) glitch::video::CCommonGLDriverBase::CRenderBufferBase::~CRenderBufferBase()
// void glitch::video::CCommonGLDriverBase::CRenderBufferBase::~CRenderBufferBase( glitch::video::CCommonGLDriverBase::CRenderBufferBase *this);
// [0xdcdfb0] (45 bytes) glitch::video::IRenderBuffer::~IRenderBuffer()
// void glitch::video::IRenderBuffer::~IRenderBuffer(glitch::video::IRenderBuffer *this);
// [0xdcdfe0] (45 bytes) glitch::video::IBatchBaker::~IBatchBaker()
// void glitch::video::IBatchBaker::~IBatchBaker(glitch::video::IBatchBaker *this);
// [0xdce070] (45 bytes) glitch::video::CNullDriver::CFramebuffer::~CFramebuffer()
// void glitch::video::CNullDriver::CFramebuffer::~CFramebuffer(glitch::video::CNullDriver::CFramebuffer *this);
// [0xdce0a0] (45 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CFramebuffer::~CFramebuffer()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CFramebuffer::~CFramebuffer( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CFramebuffer *this);
// [0xdce0d0] (45 bytes) glitch::video::CCommonGLDriverBase::CFramebufferBase::~CFramebufferBase()
// void glitch::video::CCommonGLDriverBase::CFramebufferBase::~CFramebufferBase( glitch::video::CCommonGLDriverBase::CFramebufferBase *this);
// [0xdce100] (45 bytes) glitch::video::IVideoDriver::IFramebuffer::~IFramebuffer()
// void glitch::video::IVideoDriver::IFramebuffer::~IFramebuffer(glitch::video::IVideoDriver::IFramebuffer *this);
// [0xdcec10] (107 bytes) glitch::video::CCommonGLDriverBase::CBufferBase::CSubDataImplTask::Run(void)
// int glitch::video::CCommonGLDriverBase::CBufferBase::CSubDataImplTask::Run( glitch::video::CCommonGLDriverBase::CBufferBase::CSubDataImplTask *this);
// [0xdcec80] (45 bytes) glitch::video::CNullDriver::CTexture::~CTexture()
// void glitch::video::CNullDriver::CTexture::~CTexture(glitch::video::CNullDriver::CTexture *this);
// [0xdcecb0] (45 bytes) glitch::video::CNullShaderManager::~CNullShaderManager()
// void glitch::video::CNullShaderManager::~CNullShaderManager(glitch::video::CNullShaderManager *this);
// [0xdcece0] (133 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::CDeleteBufferTask::Run(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::CDeleteBufferTask::Run( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::CDeleteBufferTask *this);
// [0xdced70] (45 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CDeleteRenderbuffersTask::~CDeleteRenderbuffersTask()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CDeleteRenderbuffersTask::~CDeleteRenderbuffersTask( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CDeleteRenderbuffersTask *this);
// [0xdceda0] (45 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::CDeleteBufferTask::~CDeleteBufferTask()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::CDeleteBufferTask::~CDeleteBufferTask( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::CDeleteBufferTask *this);
// [0xdcedd0] (45 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::CDeleteFramebufferTask::~CDeleteFramebufferTask()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::CDeleteFramebufferTask::~CDeleteFramebufferTask( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::CDeleteFramebufferTask *this);
// [0xdcee00] (46 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::writeFramebufferImpl(glitch::core::rect<int> const&,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::video::E_FRAMEBUFFER_FLIP,void const*)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::writeFramebufferImpl();
// [0xdcf4d0] (104 bytes) glitch::video::IMultipleRenderTarget::~IMultipleRenderTarget()
// void glitch::video::IMultipleRenderTarget::~IMultipleRenderTarget(glitch::video::IMultipleRenderTarget *this);
// [0xdcf540] (81 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::endScene(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::endScene( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this);
// [0xdcf5a0] (81 bytes) glitch::video::ITexture::setClientLevel0Only(bool)
// int glitch::video::ITexture::setClientLevel0Only(glitch::video::ITexture *this, bool a2);
// [0xdcfcf0] (67 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::CDeleteBufferTask::~CDeleteBufferTask()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::CDeleteBufferTask::~CDeleteBufferTask( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::CDeleteBufferTask *this);
// [0xdcfd40] (67 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::CDeleteFramebufferTask::~CDeleteFramebufferTask()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::CDeleteFramebufferTask::~CDeleteFramebufferTask( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::CDeleteFramebufferTask *this);
// [0xdcfd90] (67 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CDeleteRenderbuffersTask::~CDeleteRenderbuffersTask()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CDeleteRenderbuffersTask::~CDeleteRenderbuffersTask( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CDeleteRenderbuffersTask *this);
// [0xdcfde0] (67 bytes) glitch::video::CNullShaderManager::~CNullShaderManager()
// void glitch::video::CNullShaderManager::~CNullShaderManager(glitch::video::CNullShaderManager *this);
// [0xdcfe30] (67 bytes) glitch::video::CNullDriver::CTexture::~CTexture()
// void glitch::video::CNullDriver::CTexture::~CTexture(glitch::video::CNullDriver::CTexture *this);
// [0xdcfec0] (131 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::writeFramebufferImpl(glitch::core::rect<int> const&,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::video::E_FRAMEBUFFER_FLIP,void const*)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::writeFramebufferImpl( int a1);
// [0xdd0a60] (159 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::recreateTextureImpl(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::STextureDesc const&)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::recreateTextureImpl( int a1, glitch::video::ITexture **a2, int *a3);
// [0xdd0d30] (112 bytes) glitch::video::CCommonGLDriverBase::CRenderTargetBase::~CRenderTargetBase()
// void glitch::video::CCommonGLDriverBase::CRenderTargetBase::~CRenderTargetBase( glitch::video::CCommonGLDriverBase::CRenderTargetBase *this);
// [0xdd0e10] (104 bytes) glitch::video::CCommonGLDriverBase::CRenderTargetBase::~CRenderTargetBase()
// void glitch::video::CCommonGLDriverBase::CRenderTargetBase::~CRenderTargetBase( glitch::video::CCommonGLDriverBase::CRenderTargetBase *this);
// [0xdd0e80] (112 bytes) glitch::video::IMultipleRenderTarget::~IMultipleRenderTarget()
// void glitch::video::IMultipleRenderTarget::~IMultipleRenderTarget(glitch::video::IMultipleRenderTarget *this);
// [0xdd9f50] (72 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::beginQueryImpl(boost::intrusive_ptr<glitch::video::IQuery> const&)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::beginQueryImpl( int a1, int a2);
// [0xdd9fa0] (65 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::endQueryImpl(boost::intrusive_ptr<glitch::video::IQuery> const&)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::endQueryImpl( int a1, int a2);
// [0xdd9ff0] (58 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::CDeleteFramebufferTask::Run(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::CDeleteFramebufferTask::Run( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::CDeleteFramebufferTask *this);
// [0xdda030] (102 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery::isResultAvailableImpl(void)const
// bool glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery::isResultAvailableImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery *this);
// [0xdda0a0] (109 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery::getResultImpl(void)const
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery::getResultImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery *this);
// [0xdda110] (57 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CDeleteRenderbuffersTask::Run(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CDeleteRenderbuffersTask::Run( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CDeleteRenderbuffersTask *this);
// [0xdda150] (400 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::unbindImpl(unsigned int,unsigned int)
// uint32_t *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::unbindImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this);
// [0xdda2e0] (195 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CSync::~CSync()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CSync::~CSync( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CSync *this);
// [0xdda3b0] (351 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::pushSyncImpl(boost::intrusive_ptr<glitch::video::ISync> const&)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::pushSyncImpl( int a1, int a2, int *a3, int a4, int a5);
// [0xdda510] (203 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CSync::~CSync()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CSync::~CSync( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CSync *this);
// [0xdda5e0] (442 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CSync::waitImpl(unsigned long long)const
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CSync::waitImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CSync *this, uint64_t a2);
// [0xdda7a0] (118 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery::~CQuery()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery::~CQuery( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery *this);
// [0xdda820] (126 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery::~CQuery()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery::~CQuery( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CQuery *this);
// [0xdda8a0] (509 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderBuffer::~CRenderBuffer()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderBuffer::~CRenderBuffer( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderBuffer *this);
// [0xddaaa0] (56 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderBuffer::~CRenderBuffer()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderBuffer::~CRenderBuffer( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderBuffer *this);
// [0xddaae0] (194 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderBuffer::unbind(void)
// uint32_t *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderBuffer::unbind( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderBuffer *this);
// [0xddabb0] (229 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::~CRenderTarget()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::~CRenderTarget( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget *this);
// [0xddaca0] (237 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::~CRenderTarget()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::~CRenderTarget( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget *this);
// [0xddad90] (661 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::~CRenderTargetMSAA()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::~CRenderTargetMSAA( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA *this);
// [0xddb030] (56 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::~CRenderTargetMSAA()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::~CRenderTargetMSAA( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA *this);
// [0xddb070] (433 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::unmapImpl(void)const
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::unmapImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this);
// [0xddb230] (174 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::~CBuffer()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::~CBuffer( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this);
// [0xddb2e0] (182 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::~CBuffer()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::~CBuffer( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this);
// [0xdde570] (918 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createRenderBuffer(glitch::core::dimension2d<int> const&,glitch::video::E_PIXEL_FORMAT)
// int *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createRenderBuffer( int *a1, int a2, uint32_t *a3, int a4);
// [0xdde910] (74 bytes) glitch::video::CCommonGLDriverBase::CBufferBase::CSubDataImplTask::~CSubDataImplTask()
// void glitch::video::CCommonGLDriverBase::CBufferBase::CSubDataImplTask::~CSubDataImplTask( volatile int32_t **this);
// [0xdde960] (82 bytes) glitch::video::CCommonGLDriverBase::CBufferBase::CSubDataImplTask::~CSubDataImplTask()
// void glitch::video::CCommonGLDriverBase::CBufferBase::CSubDataImplTask::~CSubDataImplTask( volatile int32_t **this);
// [0xddea70] (90 bytes) glitch::video::intrusive_ptr_release(glitch::video::CMaterial const*)
// int glitch::video::intrusive_ptr_release(glitch::video *this);
// [0xddead0] (115 bytes) glitch::video::C2DDriver::~C2DDriver()
// void glitch::video::C2DDriver::~C2DDriver(glitch::video **this);
// [0xddeb50] (123 bytes) glitch::video::C2DDriver::~C2DDriver()
// void glitch::video::C2DDriver::~C2DDriver(glitch::video **this);
// [0xddebd0] (338 bytes) glitch::video::IVideoDriver::setCurrentMaterial(glitch::video::CMaterial *,unsigned char,glitch::video::CMaterialVertexAttributeMap const*)
// int glitch::video::IVideoDriver::setCurrentMaterial( glitch::video::IVideoDriver *this, glitch::video::CMaterial *a2, uint8_t a3, const glitch::video::CMaterialVertexAttributeMap *a4);
// [0xde0510] (248 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::endScene2D(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::endScene2D( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this);
// [0xde0610] (245 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CFramebuffer::bind(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CFramebuffer::bind( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CFramebuffer *this);
// [0xde0710] (122 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createBuffer(glitch::video::SBufferDesc const&)
// int *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createBuffer( int *a1, int a2, int a3);
// [0xde0790] (478 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::cloneImpl(glitch::video::SBufferDesc const&)const
// int *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::cloneImpl( int *a1, glitch::video::IBuffer *a2, uint32_t *a3);
// [0xde0970] (665 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::mapImpl(unsigned int,unsigned int,unsigned int,unsigned int)const
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::mapImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this, unsigned int a2, unsigned int a3, size_t a4, char a5);
// [0xde0c10] (254 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createTextureImpl(char const*,glitch::video::STextureDesc const&)
// volatile int32_t **glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createTextureImpl( volatile int32_t **a1, glitch::video::IVideoDriver *a2, char *a3, int *a4);
// [0xde0d10] (186 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createFramebuffer(glitch::core::dimension2d<int> const&,void *)
// int *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createFramebuffer( int *a1, int a2, int a3, int a4);
// [0xde0dd0] (356 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createRenderTargetImpl(boost::intrusive_ptr<glitch::video::ITexture> const&,unsigned char,glitch::video::E_ANTIALIASING_SETTING)
// int *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createRenderTargetImpl( int *a1, int a2, int a3, char a4, int a5);
// [0xde0f40] (236 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createMultipleRenderTargetImpl(glitch::video::E_ANTIALIASING_SETTING)
// int *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createMultipleRenderTargetImpl( int *a1, int a2, int a3);
// [0xde1030] (176 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createQueryImpl(glitch::video::E_QUERY_TYPE)
// int *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createQueryImpl( int *a1, int a2, int a3);
// [0xde10e0] (122 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createSyncImpl(glitch::video::E_SYNC_TYPE)
// int *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createSyncImpl( int *a1, int a2, int a3);
// [0xde1160] (792 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::beginScene2D(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::beginScene2D( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this);
// [0xde1480] (638 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::draw2DRectangle(glitch::core::rect<int> const&,glitch::core::rect<int> const&,glitch::video::SColor const*,glitch::core::rect<int> const*)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::draw2DRectangle( int a1, int32_t *a2, int *a3, int a4, int32_t *a5);
// [0xde1bc0] (15 bytes) `virtual thunk to'glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::~CCommonGLDriver()
// void `virtual thunk to'glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::~CCommonGLDriver( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this);
// [0xde1bd0] (98 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::~CCommonGLDriver()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::~CCommonGLDriver( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this);
// [0xde1c40] (15 bytes) `virtual thunk to'glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver()
// void `virtual thunk to'glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xde1c50] (98 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver()
// void glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xde1cc0] (15 bytes) `virtual thunk to'glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver()
// void `virtual thunk to'glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xde1cd0] (56 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver()
// void glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xde1d10] (15 bytes) `virtual thunk to'glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::~CCommonGLDriver()
// void `virtual thunk to'glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::~CCommonGLDriver( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this);
// [0xde1d20] (106 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::~CCommonGLDriver()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::~CCommonGLDriver( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this);
// [0xde1d90] (15 bytes) `virtual thunk to'glitch::video::CBatchDriver::~CBatchDriver()
// void `virtual thunk to'glitch::video::CBatchDriver::~CBatchDriver(glitch::video::CBatchDriver *this);
// [0xde1da0] (218 bytes) glitch::video::CBatchDriver::~CBatchDriver()
// void glitch::video::CBatchDriver::~CBatchDriver(glitch::video::CBatchDriver *this);
// [0xde1e80] (15 bytes) `virtual thunk to'glitch::video::CBatchDriver::~CBatchDriver()
// void `virtual thunk to'glitch::video::CBatchDriver::~CBatchDriver(glitch::video::CBatchDriver *this);
// [0xde1e90] (229 bytes) glitch::video::CBatchDriver::~CBatchDriver()
// void glitch::video::CBatchDriver::~CBatchDriver(glitch::video::CBatchDriver *this);
// [0xde2270] (399 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::setViewportImpl(glitch::core::rect<int> const&)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::setViewportImpl( glitch::video::CCommonGLDriverBase *a1, int *a2);
// [0xde2a10] (47 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::beginScene(int)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::beginScene( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this, int a2);
// [0xde2ae0] (485 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::CProgrammableGLDriver(glitch::IDevice *)
// unsigned int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::CProgrammableGLDriver( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this, glitch::IDevice *a2, glitch::video::IShaderManager *a3);
// [0xde2cd0] (533 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::CProgrammableGLDriver(glitch::IDevice *)
// unsigned int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::CProgrammableGLDriver( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this, glitch::IDevice *a2);
// [0xde2ef0] (86 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver()
// void glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::~CProgrammableGLDriver( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this, int *a2);
// [0xde2f50] (91 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::driverInit(glitch::core::dimension2d<int> const&)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::driverInit( uint32_t *a1);
// [0xde2fb0] (9 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::onSet3DMode(void)
// void glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::onSet3DMode();
// [0xde2fc0] (15 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::queryMaxLightCount(void)const
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::queryMaxLightCount( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xde2fd0] (15 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getShaderManager(void)const
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getShaderManager( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xde2fe0] (17 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getTransformForShader(glitch::video::E_TRANSFORMATION_STATE,unsigned int)const
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getTransformForShader( int a1, int a2);
// [0xde3000] (17 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getTransformForShader(glitch::video::E_TRANSFORMATION_STATE,unsigned int)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getTransformForShader( int a1, int a2);
// [0xde3020] (15 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getShaderLanguageVersion(void)const
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getShaderLanguageVersion( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xde3030] (70 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitShader(glitch::video::IShader const*)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitShader( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this, const glitch::video::IShader *a2);
// [0xde3080] (9 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::setTextureLODBiasTexEnv(glitch::video::ITexture const*)
// void glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::setTextureLODBiasTexEnv();
// [0xde3090] (49 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::doVersionCheck(void)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::doVersionCheck( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xde30d0] (141 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::SDrawSetup::~SDrawSetup()
// void glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::SDrawSetup::~SDrawSetup( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::SDrawSetup *this);
// [0xde3520] (886 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::setTransformImpl(glitch::video::E_TRANSFORMATION_STATE,glitch::core::CMatrix4<float> const&,glitch::core::aabbox3d<float> const&,unsigned int)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::setTransformImpl( glitch::video::IVideoDriver *a1, int a2, uint32_t *a3, uint32_t *a4, int a5);
// [0xde38a0] (86 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::flushImpl(unsigned int)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::flushImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this, char a2);
// [0xde5e20] (918 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::updateParameters(void)const
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::updateParameters( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *this);
// [0xde61c0] (152 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::setBuffer(glitch::video::E_BUFFER_TYPE,unsigned int,unsigned short)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::setBuffer( int a1, int a2, int a3, uint16_t a4);
// [0xde6260] (3184 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::updateMatrixForShader(glitch::video::E_SHADER_PARAMETER_TYPE,unsigned int)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::updateMatrixForShader( int a1, int a2, int a3);
// [0xde6ed0] (114 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getMatrixForShader(glitch::video::E_SHADER_PARAMETER_TYPE,unsigned int)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::getMatrixForShader( int a1, int a2, int a3);
// [0xde6f50] (3186 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitCurrentMaterialAutomaticParameters(glitch::video::CGLSLShader const*,glitch::video::SShaderParameterID const*,glitch::video::SShaderParameterID const*,glitch::video::CVertexStreams const*,unsigned char const*)
// unsigned int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitCurrentMaterialAutomaticParameters( glitch::video::IVideoDriver *a1, int a2, uint16_t *a3, uint16_t *a4, int a5, uint8_t *a6);
// [0xde8110] (283 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::testGLError(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::testGLError();
// [0xde8230] (2610 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::updateData(bool)const
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::updateData( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *this, char a2);
// [0xde8c70] (588 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::setTexture(unsigned int,glitch::video::ITexture *,glitch::video::E_TEXTURE_TYPE)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::setTexture( glf::Thread *a1, unsigned int a2, glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *a3, int a4);
// [0xde8ec0] (315 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::unbindImpl(unsigned int,unsigned int)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::unbindImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *this);
// [0xde9000] (125 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::~CTexture()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::~CTexture( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *this);
// [0xde9080] (133 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::~CTexture()
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::~CTexture( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *this);
// [0xde9110] (1612 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::restoreRenderState(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::restoreRenderState( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this);
// [0xde9760] (1573 bytes) glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>::commitLightParameter(glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *,glitch::video::CGLSLShader const*,glitch::video::CLight const*,glitch::video::SShaderParameterDef const&)
// void glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>::commitLightParameter( glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler> *this, glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *a2, const glitch::video::CGLSLShader *a3, const glitch::video::CLight *a4, const glitch::video::SShaderParameterDef *a5);
// [0xde9d90] (67 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitLightParameter(glitch::video::CGLSLShader const*,glitch::video::CLight const*,glitch::video::SShaderParameterDef const&)
// void glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitLightParameter( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this, const glitch::video::CGLSLShader *a2, const glitch::video::CLight *a3, const glitch::video::SShaderParameterDef *a4);
// [0xde9de0] (405 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::generateMipmapsImpl(void)
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::generateMipmapsImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *this);
// [0xde9f80] (430 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::compileAttachment(int,int,glitch::video::IMultipleRenderTarget::SAttachment const&,unsigned int)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::compileAttachment( glf::Thread **this, glf::App *a2, int a3, const glitch::video::IMultipleRenderTarget::SAttachment *a4);
// [0xdea130] (1317 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::bindImpl(unsigned int,unsigned int)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture::bindImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *this, unsigned int a2, unsigned int a3);
// [0xdea660] (1025 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::readFramebufferImpl(glitch::core::rect<int> const&,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::video::E_FRAMEBUFFER_FLIP,glitch::video::E_FRAMEBUFFER_ROTATION,void *)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::readFramebufferImpl( int a1, GLint *a2, int a3, int a4, int a5, int a6, char *a7);
// [0xdeaa70] (781 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::flushDirtyRanges(unsigned int)const
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::flushDirtyRanges( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this, char a2);
// [0xdead80] (985 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::update(unsigned int)const
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::update( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this, char a2);
// [0xdeb160] (127 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::updateRangesImpl(glitch::video::IBuffer::CDirtyRangeSet const&,unsigned int,unsigned int)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::updateRangesImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this, const glitch::video::IBuffer::CDirtyRangeSet *a2, unsigned int a3, char a4);
// [0xdeb1e0] (584 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::subDataImpl(unsigned int,unsigned int,void const*,unsigned int,unsigned int)const
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::subDataImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this, unsigned int a2, size_t a3, void *a4, unsigned int a5, unsigned int a6);
// [0xdeb430] (887 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::bindImpl(unsigned int,unsigned int)
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer::bindImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CBuffer *this, unsigned int a2, unsigned int a3);
// [0xdeb7b0] (948 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::setupArrays(glitch::video::CGLSLShader const*,glitch::video::CVertexStreams const*,unsigned char const*)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::setupArrays( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this, const glitch::video::CGLSLShader *a2, const glitch::video::CVertexStreams *a3, const uint8_t *a4);
// [0xdebb70] (66 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::SDrawSetup::SDrawSetup(glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>*,glitch::video::CVertexStreams const*,glitch::video::CPrimitiveStream const&,unsigned char const*,unsigned int)
// glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::SDrawSetup *glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::SDrawSetup::SDrawSetup( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::SDrawSetup *this, const glitch::video::CGLSLShader **a2, const glitch::video::CVertexStreams *a3, const glitch::video::CPrimitiveStream *a4, uint8_t *a5);
// [0xdebbc0] (1437 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::redrawImpl(glitch::video::CPrimitiveStream const&,glitch::video::CDriverBinding **)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::redrawImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this, GLsizei *a2);
// [0xdec160] (614 bytes) void glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>::applyTexCoordScaleOffset<glitch::core::vector4d<float>>(glitch::video::CGLSLShader const*,glitch::video::SShaderParameterDef const&,glitch::video::CVertexStreams const*,unsigned char const*,glitch::core::vector4d<float> const*,float const**,unsigned int &)
// int glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>::applyTexCoordScaleOffset<glitch::core::vector4d<float>>( int a1, int a2, int a3, int a4, int a5, int a6, int a7, uint32_t *a8);
