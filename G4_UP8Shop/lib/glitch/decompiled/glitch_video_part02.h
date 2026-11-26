#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_video_part02.h
// Library: glitch | Module: glitch_video_part02
// Binary Address Span: 0xdec3d0 .. 0xe45780 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xdec3d0] (128 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitCurrentMaterialDirectParameters(unsigned char)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitCurrentMaterialDirectParameters( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this, uint8_t a2);
// [0xdec450] (302 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::commitCurrentMaterial(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::commitCurrentMaterial( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this);
// [0xdec580] (322 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::restoreShadowState(void)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::restoreShadowState( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this);
// [0xdec6d0] (4589 bytes) unsigned short glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>::commitCurrentMaterialParametersAux<glitch::video::CGlobalMaterialParameterManager>(glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *,glitch::video::CGLSLShader const*,glitch::video::CGlobalMaterialParameterManager const*,glitch::video::SShaderParameterBinding const*,glitch::video::SShaderParameterBinding const*,glitch::video::CVertexStreams const*,unsigned char const*,unsigned short)
// int glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>::commitCurrentMaterialParametersAux<glitch::video::CGlobalMaterialParameterManager>( glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler> *a1, glf::Thread *a2, glitch::video::CGLSLShader *a3, uint32_t *a4, uint16_t *a5, uint16_t *a6, int a7, int a8, uint16_t a9);
// [0xded8c0] (333 bytes) glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitCurrentMaterialIndirectParameters(unsigned char,glitch::video::CVertexStreams const*,unsigned char const*)
// int glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>::commitCurrentMaterialIndirectParameters( glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>> *this, uint8_t a2, const glitch::video::CVertexStreams *a3, uint8_t *a4);
// [0xdeda10] (687 bytes) glitch::video::detail::CGLSyncFunctionPointerSet<true>::init(glitch::video::CCommonGLDriverBase const*)
// int glitch::video::detail::CGLSyncFunctionPointerSet<true>::init( glitch::video::detail::CGLSyncFunctionPointerSet<true> *this, const glitch::video::CCommonGLDriverBase *a2);
// [0xdedcc0] (798 bytes) glitch::video::detail::CCommonGLFunctionPointerSet<516154>::init(glitch::video::CCommonGLDriverBase const*)
// int glitch::video::detail::CCommonGLFunctionPointerSet<516154>::init( glitch::video::detail::CCommonGLFunctionPointerSet<516154> *this, const glitch::video::CCommonGLDriverBase *a2);
// [0xdf8b30] (842 bytes) void glitch::video::IVideoDriver::SApplyRenderState::result<glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>,glitch::video::detail::driver::SRenderState>(glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet> *,glitch::video::detail::driver::SRenderState const&)
// int glitch::video::IVideoDriver::SApplyRenderState::result<glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>,glitch::video::detail::driver::SRenderState>( int a1, uint8_t *a2);
// [0xdf8e80] (328 bytes) void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::applyRenderStateBlendImpl<true,glitch::video::detail::renderpass::SRenderState>(glitch::video::detail::renderpass::SRenderState const&)
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::applyRenderStateBlendImpl<true,glitch::video::detail::renderpass::SRenderState>( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this, const glitch::video::detail::renderpass::SRenderState *a2);
// [0xdf8fd0] (405 bytes) void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::applyRenderStateStencilImpl<true,glitch::video::detail::renderpass::SRenderState>(glitch::video::detail::renderpass::SRenderState const&)
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::applyRenderStateStencilImpl<true,glitch::video::detail::renderpass::SRenderState>( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this, const glitch::video::detail::renderpass::SRenderState *a2);
// [0xdf9170] (2241 bytes) void glitch::video::IVideoDriver::SApplyRenderState::result<glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>,glitch::video::detail::renderpass::SRenderState>(glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet> *,glitch::video::detail::renderpass::SRenderState const&)
// void glitch::video::IVideoDriver::SApplyRenderState::result<glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>,glitch::video::detail::renderpass::SRenderState>( GLclampf *this, GLfloat *a2);
// [0xdf9a40] (2877 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::drawImpl(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,glitch::video::CPrimitiveStream const&,glitch::video::CDriverBinding **)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::drawImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this, const glitch::video::CVertexStreams **a2, const glitch::video::CPrimitiveStream *a3);
// [0xdfa580] (922 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::clearBuffersImpl(int)
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::clearBuffersImpl( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet> *this, char a2);
// [0xdfa920] (196 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::checkDirty(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::checkDirty( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget *this);
// [0xdfa9f0] (795 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::bind(int,unsigned int,unsigned int,bool)
// unsigned int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::bind( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget *this, glf::App *a2, unsigned int a3, unsigned int a4, bool a5);
// [0xdfad10] (237 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::bind(void)
// unsigned int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::bind( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget *this);
// [0xdfae00] (488 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::bind(void)
// unsigned int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::bind( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA *this);
// [0xdfaff0] (180 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::discardBuffers(void)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::discardBuffers( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget *this);
// [0xdfb0b0] (275 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::unbind(void)
// glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget *glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTarget::unbind( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture **this);
// [0xdfb1d0] (803 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::unbind(void)
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::unbind( glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA *this);
// [0xdfb500] (244 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createBoundRenderbuffer(glitch::video::E_PIXEL_FORMAT,glitch::core::dimension2d<int> const&,unsigned char)
// int glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::createBoundRenderbuffer( int a1, int a2, uint32_t *a3, uint8_t a4);
// [0xdfb600] (998 bytes) glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::compileAttachment(int,int,glitch::video::IMultipleRenderTarget::SAttachment const&,unsigned int)
// void glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::CRenderTargetMSAA::compileAttachment( glf::Thread **this, glf::App *a2, int a3, int **a4, char a5);
// [0xdfbaa0] (27 bytes) glitch::video::IQuery::~IQuery()
// void glitch::video::IQuery::~IQuery(glitch::video::IQuery *this);
// [0xdfbac0] (27 bytes) glitch::video::ISync::~ISync()
// void glitch::video::ISync::~ISync(glitch::video::ISync *this);
// [0xdfbb50] (9 bytes) glitch::video::CDefaultTexturePolicy::getMipmapCountToSkip(glitch::video::ITexture const*)const
// int glitch::video::CDefaultTexturePolicy::getMipmapCountToSkip();
// [0xdfbb60] (9 bytes) glitch::video::CDefaultTexturePolicy::useOnlyOneMipmap(glitch::video::ITexture const*)const
// int glitch::video::CDefaultTexturePolicy::useOnlyOneMipmap();
// [0xdfbb70] (9 bytes) glitch::video::CDefaultTexturePolicy::useOnlySmallSubstitute(glitch::video::ITexture const*)const
// int glitch::video::CDefaultTexturePolicy::useOnlySmallSubstitute();
// [0xdfbb80] (9 bytes) glitch::video::CDefaultTexturePolicy::addToStreamingQueueOnLoad(glitch::video::ITexture const*)const
// int glitch::video::CDefaultTexturePolicy::addToStreamingQueueOnLoad();
// [0xdfbb90] (12 bytes) glitch::video::CDefaultTexturePolicy::useTextureStreaming(glitch::video::ITexture const*)const
// int glitch::video::CDefaultTexturePolicy::useTextureStreaming();
// [0xdfbba0] (12 bytes) glitch::video::CDefaultTexturePolicy::getMipmapCountForSubstitute(glitch::video::ITexture const*)const
// int glitch::video::CDefaultTexturePolicy::getMipmapCountForSubstitute();
// [0xdfbbb0] (27 bytes) glitch::video::ITexturePolicySelector::~ITexturePolicySelector()
// void glitch::video::ITexturePolicySelector::~ITexturePolicySelector( glitch::video::ITexturePolicySelector *this);
// [0xdfbbd0] (12 bytes) glitch::video::CSimpleTexturePolicySelector::selectPolicy(boost::intrusive_ptr<glitch::video::ITexture> const&)
// int glitch::video::CSimpleTexturePolicySelector::selectPolicy( glitch::video::CSimpleTexturePolicySelector *this);
// [0xdfbbe0] (383 bytes) glitch::video::CVirtualTexture::getScaleOffset(glitch::core::vector3d<float> &,glitch::core::vector3d<float> &)const
// int glitch::video::CVirtualTexture::getScaleOffset(uint32_t *a1, float *a2, float *a3);
// [0xdfbd60] (49 bytes) glitch::video::CVirtualTexture::getFaceSizeInBytes(void)const
// unsigned int glitch::video::CVirtualTexture::getFaceSizeInBytes(glitch::video::CVirtualTexture *this);
// [0xdfbda0] (29 bytes) glitch::video::CVirtualTexture::getPitch(void)const
// int glitch::video::CVirtualTexture::getPitch(glitch::video::CVirtualTexture *this);
// [0xdfbdc0] (38 bytes) glitch::video::CVirtualTexture::getPitch(unsigned char)const
// int glitch::video::CVirtualTexture::getPitch(glitch::video::CVirtualTexture *this, uint8_t a2);
// [0xdfbdf0] (29 bytes) glitch::video::CVirtualTexture::getSlicePitch(void)const
// int glitch::video::CVirtualTexture::getSlicePitch(glitch::video::CVirtualTexture *this);
// [0xdfbe10] (38 bytes) glitch::video::CVirtualTexture::getSlicePitch(unsigned char)const
// int glitch::video::CVirtualTexture::getSlicePitch(glitch::video::CVirtualTexture *this, uint8_t a2);
// [0xdfbe40] (9 bytes) glitch::video::CVirtualTexture::bindImpl(unsigned int,unsigned int)
// int glitch::video::CVirtualTexture::bindImpl();
// [0xdfbe50] (9 bytes) glitch::video::CVirtualTexture::unbindImpl(unsigned int,unsigned int)
// int glitch::video::CVirtualTexture::unbindImpl();
// [0xdfbe60] (9 bytes) glitch::video::CVirtualTexture::mapImpl(unsigned char,glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char)
// int glitch::video::CVirtualTexture::mapImpl();
// [0xdfbe70] (9 bytes) glitch::video::CVirtualTexture::getMappedPtr(void)const
// int glitch::video::CVirtualTexture::getMappedPtr();
// [0xdfbe80] (9 bytes) glitch::video::CVirtualTexture::generateMipmapsImpl(void)
// void glitch::video::CVirtualTexture::generateMipmapsImpl();
// [0xdfc0f0] (119 bytes) glitch::video::ITexture::getDataInternal(glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char)const
// unsigned int glitch::video::ITexture::getDataInternal(uint32_t *a1, int a2, uint8_t a3);
// [0xdfc170] (95 bytes) glitch::video::ITexture::getRAMSize(void)const
// int glitch::video::ITexture::getRAMSize(glitch::video::ITexture *this);
// [0xdfc1d0] (23 bytes) glitch::video::ITexture::getSizeInBytes(unsigned char)const
// int glitch::video::ITexture::getSizeInBytes(glitch::video::ITexture *this, uint8_t a2);
// [0xdfc1f0] (27 bytes) glitch::video::ITexture::getSlicePitch(void)const
// int glitch::video::ITexture::getSlicePitch(glitch::video::ITexture *this);
// [0xdfc210] (78 bytes) glitch::video::ITexture::getSlicePitch(unsigned char)const
// int glitch::video::ITexture::getSlicePitch(glitch::video::ITexture *this, uint8_t a2);
// [0xdfc260] (34 bytes) glitch::video::ITexture::getScaleOffset(glitch::core::vector3d<float> &,glitch::core::vector3d<float> &)const
// uint32_t *glitch::video::ITexture::getScaleOffset(int a1, uint32_t *a2, uint32_t *a3);
// [0xdfc710] (54 bytes) glitch::video::CImageLoaderDDS::isALoadableFileFormat(glitch::io::IReadFile *)const
// bool glitch::video::CImageLoaderDDS::isALoadableFileFormat(int a1, int a2);
// [0xdfc7b0] (27 bytes) glitch::video::CImageLoaderJPG::~CImageLoaderJPG()
// void glitch::video::CImageLoaderJPG::~CImageLoaderJPG(glitch::video::CImageLoaderJPG *this);
// [0xdfc7d0] (27 bytes) glitch::video::CImageLoaderKTX::~CImageLoaderKTX()
// void glitch::video::CImageLoaderKTX::~CImageLoaderKTX(glitch::video::CImageLoaderKTX *this);
// [0xdfc7f0] (27 bytes) glitch::video::CImageLoaderPng::~CImageLoaderPng()
// void glitch::video::CImageLoaderPng::~CImageLoaderPng(glitch::video::CImageLoaderPng *this);
// [0xdfc810] (27 bytes) glitch::video::CImageLoaderPVR::~CImageLoaderPVR()
// void glitch::video::CImageLoaderPVR::~CImageLoaderPVR(glitch::video::CImageLoaderPVR *this);
// [0xdfc8c0] (9 bytes) glitch::video::CImageWriterJPG::writeTexture(glitch::io::IWriteFile *,glitch::video::STextureDesc const&,void const* const*,unsigned char,unsigned int)const
// int glitch::video::CImageWriterJPG::writeTexture();
// [0xdfc8d0] (9 bytes) glitch::video::CImageWriterPNG::writeTexture(glitch::io::IWriteFile *,glitch::video::STextureDesc const&,void const* const*,unsigned char,unsigned int)const
// int glitch::video::CImageWriterPNG::writeTexture();
// [0xdfc990] (27 bytes) glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy::~IOutputBufferPolicy()
// void glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy::~IOutputBufferPolicy( glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *this);
// [0xdfc9b0] (27 bytes) glitch::video::IImageLoader::IDataReader::~IDataReader()
// void glitch::video::IImageLoader::IDataReader::~IDataReader(glitch::video::IImageLoader::IDataReader *this);
// [0xdfc9d0] (21 bytes) glitch::video::IImageLoader::IDataReader::setMipmapRange(std::pair<unsigned char,unsigned char> const&)
// int glitch::video::IImageLoader::IDataReader::setMipmapRange(int a1, uint16_t *a2);
// [0xdfc9f0] (269 bytes) glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::readNextFaceImpl(glitch::video::ITexture *,void *)
// int glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::readNextFaceImpl( glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader *this, glitch::video::ITexture *a2, char *a3);
// [0xdfd130] (56 bytes) glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy::~IOutputBufferPolicy()
// void glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy::~IOutputBufferPolicy( glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *this);
// [0xdfd170] (56 bytes) glitch::video::CImageLoaderPVR::~CImageLoaderPVR()
// void glitch::video::CImageLoaderPVR::~CImageLoaderPVR(glitch::video::CImageLoaderPVR *this);
// [0xdfd1b0] (56 bytes) glitch::video::CImageLoaderPng::~CImageLoaderPng()
// void glitch::video::CImageLoaderPng::~CImageLoaderPng(glitch::video::CImageLoaderPng *this);
// [0xdfd1f0] (56 bytes) glitch::video::CImageLoaderKTX::~CImageLoaderKTX()
// void glitch::video::CImageLoaderKTX::~CImageLoaderKTX(glitch::video::CImageLoaderKTX *this);
// [0xdfd230] (56 bytes) glitch::video::CImageLoaderJPG::~CImageLoaderJPG()
// void glitch::video::CImageLoaderJPG::~CImageLoaderJPG(glitch::video::CImageLoaderJPG *this);
// [0xdfd270] (56 bytes) glitch::video::ITexturePolicySelector::~ITexturePolicySelector()
// void glitch::video::ITexturePolicySelector::~ITexturePolicySelector( glitch::video::ITexturePolicySelector *this);
// [0xdfd310] (56 bytes) glitch::video::IImageLoader::IDataReader::~IDataReader()
// void glitch::video::IImageLoader::IDataReader::~IDataReader(glitch::video::IImageLoader::IDataReader *this);
// [0xdfd350] (56 bytes) glitch::video::ISync::~ISync()
// void glitch::video::ISync::~ISync(glitch::video::ISync *this);
// [0xdfd390] (56 bytes) glitch::video::IQuery::~IQuery()
// void glitch::video::IQuery::~IQuery(glitch::video::IQuery *this);
// [0xdfd3d0] (177 bytes) glitch::video::CImage::~CImage()
// void glitch::video::CImage::~CImage(glitch::video::CImage *this);
// [0xdfd490] (56 bytes) glitch::video::CImage::~CImage()
// void glitch::video::CImage::~CImage(glitch::video::CImage *this);
// [0xdfd4d0] (83 bytes) glitch::video::IBuffer::~IBuffer()
// void glitch::video::IBuffer::~IBuffer(glitch::video::IBuffer *this);
// [0xdfd530] (56 bytes) glitch::video::IBuffer::~IBuffer()
// void glitch::video::IBuffer::~IBuffer(glitch::video::IBuffer *this);
// [0xdfd570] (119 bytes) glitch::video::CImageLoaderPVR::isALoadableFileFormat(glitch::io::IReadFile *)const
// int glitch::video::CImageLoaderPVR::isALoadableFileFormat(int a1, int a2);
// [0xdfd5f0] (49 bytes) glitch::video::CImageLoaderPVR::isALoadableFileExtension(char const*)const
// bool glitch::video::CImageLoaderPVR::isALoadableFileExtension( glitch::video::CImageLoaderPVR *this, char *haystack);
// [0xdfd630] (49 bytes) glitch::video::CImageLoaderKTX::isALoadableFileExtension(char const*)const
// bool glitch::video::CImageLoaderKTX::isALoadableFileExtension( glitch::video::CImageLoaderKTX *this, char *haystack);
// [0xdfd670] (49 bytes) glitch::video::CImageLoaderDDS::isALoadableFileExtension(char const*)const
// bool glitch::video::CImageLoaderDDS::isALoadableFileExtension( glitch::video::CImageLoaderDDS *this, char *haystack);
// [0xdfd820] (102 bytes) glitch::video::user_write_data_fcn(png_struct_def *,unsigned char *,unsigned int)
// int glitch::video::user_write_data_fcn(int a1, int a2, int a3);
// [0xdfd890] (102 bytes) glitch::video::user_read_data_fcn(png_struct_def *,unsigned char *,unsigned int)
// int glitch::video::user_read_data_fcn(int a1, int a2, int a3);
// [0xdfd900] (167 bytes) glitch::video::CImageWriterJPG::isAWriteableFileExtension(char const*)const
// char *glitch::video::CImageWriterJPG::isAWriteableFileExtension( glitch::video::CImageWriterJPG *this, const char *s);
// [0xdfd9b0] (134 bytes) glitch::video::CImageLoaderPng::isALoadableFileExtension(char const*)const
// char *glitch::video::CImageLoaderPng::isALoadableFileExtension( glitch::video::CImageLoaderPng *this, const char *s);
// [0xdfda40] (121 bytes) glitch::video::CImageLoaderPng::isALoadableFileFormat(glitch::io::IReadFile *)const
// int glitch::video::CImageLoaderPng::isALoadableFileFormat(int a1, int a2);
// [0xdfdac0] (123 bytes) glitch::video::CImageLoaderKTX::isALoadableFileFormat(glitch::io::IReadFile *)const
// int glitch::video::CImageLoaderKTX::isALoadableFileFormat(int a1, int a2);
// [0xdfdb40] (646 bytes) glitch::video::CLinearLookupTableGenerator::generate(float *,unsigned int)
// void glitch::video::CLinearLookupTableGenerator::generate( glitch::video::CLinearLookupTableGenerator *this, float *a2, unsigned int a3);
// [0xdfddd0] (758 bytes) glitch::video::CAttenautionLookupTableGenerator::generate(float *,unsigned int)
// void glitch::video::CAttenautionLookupTableGenerator::generate( glitch::video::CAttenautionLookupTableGenerator *this, float *a2, unsigned int a3);
// [0xdfe0d0] (151 bytes) glitch::video::CImageLoaderJPG::isALoadableFileFormat(glitch::io::IReadFile *)const
// int glitch::video::CImageLoaderJPG::isALoadableFileFormat(int a1, int *a2);
// [0xdfe3d0] (215 bytes) glitch::video::CImageLoaderTGA::isALoadableFileFormat(glitch::io::IReadFile *)const
// int glitch::video::CImageLoaderTGA::isALoadableFileFormat(int a1, int a2);
// [0xdfe4b0] (110 bytes) glitch::video::CImageWriterPVR::isAWriteableFileExtension(char const*)const
// int glitch::video::CImageWriterPVR::isAWriteableFileExtension( glitch::video::CImageWriterPVR *this, char *haystack);
// [0xdfe520] (110 bytes) glitch::video::CImageWriterPNG::isAWriteableFileExtension(char const*)const
// int glitch::video::CImageWriterPNG::isAWriteableFileExtension( glitch::video::CImageWriterPNG *this, char *haystack);
// [0xdfe590] (110 bytes) glitch::video::CImageWriterKTX::isAWriteableFileExtension(char const*)const
// int glitch::video::CImageWriterKTX::isAWriteableFileExtension( glitch::video::CImageWriterKTX *this, char *haystack);
// [0xdfe600] (110 bytes) glitch::video::CImageWriterDDS::isAWriteableFileExtension(char const*)const
// int glitch::video::CImageWriterDDS::isAWriteableFileExtension( glitch::video::CImageWriterDDS *this, char *haystack);
// [0xdfe670] (110 bytes) glitch::video::CImageLoaderTGA::isALoadableFileExtension(char const*)const
// int glitch::video::CImageLoaderTGA::isALoadableFileExtension( glitch::video::CImageLoaderTGA *this, char *haystack);
// [0xdfe6e0] (110 bytes) glitch::video::CImageLoaderJPG::isALoadableFileExtension(char const*)const
// int glitch::video::CImageLoaderJPG::isALoadableFileExtension( glitch::video::CImageLoaderJPG *this, char *haystack);
// [0xdfe750] (752 bytes) glitch::video::CExp2LookupTableGenerator::generate(float *,unsigned int)
// float *glitch::video::CExp2LookupTableGenerator::generate( glitch::video::CExp2LookupTableGenerator *this, float *a2, unsigned int a3);
// [0xdfea40] (660 bytes) glitch::video::CExpLookupTableGenerator::generate(float *,unsigned int)
// float *glitch::video::CExpLookupTableGenerator::generate( glitch::video::CExpLookupTableGenerator *this, float *a2, unsigned int a3);
// [0xdfece0] (619 bytes) glitch::video::CPowLookupTableGenerator::generate(float *,unsigned int)
// float *glitch::video::CPowLookupTableGenerator::generate( glitch::video::CPowLookupTableGenerator *this, float *a2, unsigned int a3);
// [0xdff030] (53 bytes) glitch::video::ITexture::getFaceSizeInBytes(void)const
// int glitch::video::ITexture::getFaceSizeInBytes(glitch::video::ITexture *this);
// [0xdff2b0] (184 bytes) glitch::video::IRenderTarget::setViewport(glitch::core::rect<int> const&)
// uint32_t **glitch::video::IRenderTarget::setViewport(uint32_t *a1, int *a2);
// [0xe00ea0] (189 bytes) glitch::video::CImageLoaderJPG::loadTextureHeader(glitch::io::IReadFile *,glitch::video::STextureDesc &)const
// int glitch::video::CImageLoaderJPG::loadTextureHeader(int a1, int a2, int a3);
// [0xe012a0] (253 bytes) glitch::video::IShaderManager::clearDriverSpecificResources(void)
// glitch::video::IShaderManager *glitch::video::IShaderManager::clearDriverSpecificResources( glitch::video::IShaderManager *this);
// [0xe013a0] (394 bytes) glitch::video::CImageLoaderTGA::loadTextureHeader(glitch::io::IReadFile *,glitch::video::STextureDesc &)const
// int glitch::video::CImageLoaderTGA::loadTextureHeader(int a1, int a2, uint32_t *a3, uint8_t a4);
// [0xe01530] (776 bytes) glitch::video::CImageLoaderPng::loadTextureHeader(glitch::io::IReadFile *,glitch::video::STextureDesc &)const
// 0xe01530 glitch::video::CImageLoaderPng::loadTextureHeader(glitch::io::IReadFile *,glitch::video::STextureDesc &)const
// [0xe02b10] (1387 bytes) glitch::video::CImageLoaderKTX::loadTextureHeader(glitch::io::IReadFile *,glitch::video::STextureDesc &)const
// int glitch::video::CImageLoaderKTX::loadTextureHeader( int a1, int a2, int a3, int s1, int a5, int a6, char a7, unsigned int a8, int a9, unsigned int a10, unsigned int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18);
// [0xe03080] (101 bytes) glitch::video::IShaderManager::createBatchBaker(glitch::video::IShader const*)const
// glitch::video::IShaderManager *glitch::video::IShaderManager::createBatchBaker( glitch::video::IShaderManager *this, const glitch::video::IShader *a2, const glitch::video::IShader *a3);
// [0xe031b0] (13 bytes) glitch::video::CImageLoaderKTX::loadImage(glitch::io::IReadFile *)const
// uint32_t *glitch::video::CImageLoaderKTX::loadImage(uint32_t *a1);
// [0xe031c0] (13 bytes) glitch::video::CDefaultTexturePolicy::customSubstitute(glitch::video::ITexture const*)const
// glitch::video::CDefaultTexturePolicy *glitch::video::CDefaultTexturePolicy::customSubstitute( glitch::video::CDefaultTexturePolicy *this, const glitch::video::ITexture *a2);
// [0xe031d0] (454 bytes) glitch::video::IImageWriter::writeImage(glitch::io::IWriteFile *,boost::intrusive_ptr<glitch::video::CImage> const&,unsigned int)const
// int glitch::video::IImageWriter::writeImage(int a1, int a2, int *a3, int a4);
// [0xe1d810] (98 bytes) glitch::video::IShaderCode::~IShaderCode()
// void glitch::video::IShaderCode::~IShaderCode(glitch::video::IShaderCode *this);
// [0xe1d880] (56 bytes) glitch::video::IShaderCode::~IShaderCode()
// void glitch::video::IShaderCode::~IShaderCode(glitch::video::IShaderCode *this);
// [0xe1d8c0] (98 bytes) glitch::video::IShader::~IShader()
// void glitch::video::IShader::~IShader(glitch::video::IShader *this);
// [0xe1d930] (56 bytes) glitch::video::IShader::~IShader()
// void glitch::video::IShader::~IShader(glitch::video::IShader *this);
// [0xe1d970] (653 bytes) glitch::video::IShader::deserializeAttributes(glitch::io::IAttributes *)
// int16_t glitch::video::IShader::deserializeAttributes( glitch::video::IShader *this, glitch::io::IAttributes *a2);
// [0xe1df20] (1013 bytes) glitch::video::IShader::serializeAttributes(glitch::io::IAttributes *)const
// int glitch::video::IShader::serializeAttributes(glitch::video::IShader *this, glitch::io::IAttributes *a2);
// [0xe1eac0] (74 bytes) glitch::video::CSimpleTexturePolicySelector::~CSimpleTexturePolicySelector()
// void glitch::video::CSimpleTexturePolicySelector::~CSimpleTexturePolicySelector(volatile int32_t **this);
// [0xe1eb10] (45 bytes) glitch::video::CDefaultTexturePolicySelector::~CDefaultTexturePolicySelector()
// void glitch::video::CDefaultTexturePolicySelector::~CDefaultTexturePolicySelector( volatile int32_t **this);
// [0xe1eb40] (56 bytes) glitch::video::CDefaultTexturePolicySelector::~CDefaultTexturePolicySelector()
// void glitch::video::CDefaultTexturePolicySelector::~CDefaultTexturePolicySelector( volatile int32_t **this);
// [0xe1eb80] (56 bytes) glitch::video::CSimpleTexturePolicySelector::~CSimpleTexturePolicySelector()
// void glitch::video::CSimpleTexturePolicySelector::~CSimpleTexturePolicySelector(volatile int32_t **this);
// [0xe1ebc0] (1243 bytes) glitch::video::CImageLoaderPVR::loadTextureHeader(glitch::io::IReadFile *,glitch::video::STextureDesc &)const
// int glitch::video::CImageLoaderPVR::loadTextureHeader( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, unsigned int a9, glitch::video::pixel_format *a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, unsigned int a20);
// [0xe1f0a0] (15 bytes) glitch::video::IBuffer::CDirtyRangeSet::CDirtyRangeSet(void)
// struct glitch::video::IBuffer::CDirtyRangeSet *glitch::video::IBuffer::CDirtyRangeSet::CDirtyRangeSet( glitch::video::IBuffer::CDirtyRangeSet *this);
// [0xe1f0b0] (609 bytes) glitch::video::IBuffer::CDirtyRangeSet::add(unsigned int,unsigned int,unsigned int)
// unsigned int glitch::video::IBuffer::CDirtyRangeSet::add( glitch::video::IBuffer::CDirtyRangeSet *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0xe1f320] (107 bytes) glitch::video::IBuffer::CDirtyRangeSet::clear(void)
// glitch::video::IBuffer::CDirtyRangeSet *glitch::video::IBuffer::CDirtyRangeSet::clear( glitch::video::IBuffer::CDirtyRangeSet *this);
// [0xe1f390] (34 bytes) glitch::video::IBuffer::CDirtyRangeSet::~CDirtyRangeSet()
// void glitch::video::IBuffer::CDirtyRangeSet::~CDirtyRangeSet(glitch::video::IBuffer::CDirtyRangeSet *this);
// [0xe1f3c0] (206 bytes) glitch::video::IBuffer::CDirtyRangeSet::clear(glitch::core::SScopedProcessArray<std::pair<unsigned int,unsigned int>> &)
// int glitch::video::IBuffer::CDirtyRangeSet::clear(uint32_t **a1, glitch::core **a2);
// [0xe1f490] (584 bytes) glitch::video::IBuffer::CDirtyRangeSet::merge(unsigned int)
// uint32_t *glitch::video::IBuffer::CDirtyRangeSet::merge( glitch::video::IBuffer::CDirtyRangeSet *this, unsigned int a2);
// [0xe1f6e0] (1807 bytes) glitch::video::IBuffer::CDirtyRangeSet::merge(unsigned int,glitch::video::IBuffer::CDirtyRangeSet const&)
// uint32_t *glitch::video::IBuffer::CDirtyRangeSet::merge( glitch::video::IBuffer::CDirtyRangeSet *this, unsigned int a2, const glitch::video::IBuffer::CDirtyRangeSet *a3);
// [0xe1fdf0] (775 bytes) glitch::video::IBuffer::CDirtyRangeSet::merge(glitch::video::IBuffer::CDirtyRangeSet const*,unsigned int,unsigned int,glitch::core::SScopedProcessArray<std::pair<unsigned int,unsigned int>> &)
// int glitch::video::IBuffer::CDirtyRangeSet::merge(uint32_t **a1, int a2, int a3, glitch::core **a4);
// [0xe20100] (241 bytes) glitch::video::IBuffer::IBuffer(glitch::video::IVideoDriver *,glitch::video::SBufferDesc const&)
// int glitch::video::IBuffer::IBuffer(int a1, int a2, int a3);
// [0xe20200] (92 bytes) glitch::video::IBuffer::validateSafetyHints(glitch::video::E_BUFFER_USAGE)const
// int glitch::video::IBuffer::validateSafetyHints(int a1, char a2);
// [0xe20260] (125 bytes) glitch::video::IBuffer::copy(void)
// int glitch::video::IBuffer::copy(glitch::video::IBuffer *this);
// [0xe202e0] (150 bytes) glitch::video::IBuffer::clone(void)const
// glitch::video::IBuffer **glitch::video::IBuffer::clone(glitch::video::IBuffer **this, uint8_t *a2);
// [0xe20380] (516 bytes) glitch::video::IBuffer::setData(void *,bool)
// int glitch::video::IBuffer::setData(glitch::video::IBuffer *this, void *a2, bool a3);
// [0xe20590] (248 bytes) glitch::video::IBuffer::bind(unsigned int,unsigned int)
// int glitch::video::IBuffer::bind(glitch::video::IBuffer *this, unsigned int a2, unsigned int a3);
// [0xe20690] (65 bytes) glitch::video::IBuffer::unbind(unsigned int,unsigned int)
// int glitch::video::IBuffer::unbind(glitch::video::IBuffer *this, unsigned int a2, unsigned int a3);
// [0xe206e0] (159 bytes) glitch::video::IBuffer::reset(unsigned int,void *,bool)
// int glitch::video::IBuffer::reset(glitch::video::IBuffer *this, unsigned int a2, void *a3, bool a4);
// [0xe20780] (111 bytes) glitch::video::IBuffer::setBaseUsage(glitch::video::E_BUFFER_USAGE)
// int glitch::video::IBuffer::setBaseUsage(glitch::video::IBuffer *a1, int a2);
// [0xe207f0] (388 bytes) glitch::video::IBuffer::setUsage(glitch::video::E_BUFFER_USAGE)
// int glitch::video::IBuffer::setUsage(size_t *a1, int a2);
// [0xe20980] (155 bytes) glitch::video::IBuffer::subData(unsigned int,unsigned int,void const*,unsigned int,unsigned int)
// char *glitch::video::IBuffer::subData( glitch::video::IBuffer *this, unsigned int a2, size_t n, void *src, unsigned int a5, unsigned int a6);
// [0xe20a20] (215 bytes) glitch::video::IBuffer::mapInternal(unsigned int,unsigned int,unsigned int,unsigned int)const
// int glitch::video::IBuffer::mapInternal( glitch::video::IBuffer *this, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
// [0xe20b00] (185 bytes) glitch::video::IBuffer::unmap(void)const
// int glitch::video::IBuffer::unmap(glitch::video::IBuffer *this);
// [0xe20bc0] (45 bytes) glitch::video::IQuery::IQuery(glitch::video::E_QUERY_TYPE)
// int glitch::video::IQuery::IQuery(int a1, uint8_t a2);
// [0xe20bf0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_ANTIALIASING_SETTING *)
// char **glitch::video::getStringsInternal();
// [0xe20c10] (33 bytes) glitch::video::getAntiAliasingSetting(glf::FullScreenAntiAliasSetting)
// int glitch::video::getAntiAliasingSetting(unsigned int a1);
// [0xe20c40] (22 bytes) glitch::video::getStringsInternal(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe20c60] (123 bytes) glitch::video::IRenderTarget::IRenderTarget(glitch::video::IVideoDriver *,glitch::core::dimension2d<int> const&,glitch::video::E_ANTIALIASING_SETTING)
// int glitch::video::IRenderTarget::IRenderTarget(int a1, int a2, uint32_t *a3, int16_t a4);
// [0xe20ce0] (27 bytes) glitch::video::IMultipleRenderTarget::SAttachment::SAttachment(void)
// struct glitch::video::IMultipleRenderTarget::SAttachment *glitch::video::IMultipleRenderTarget::SAttachment::SAttachment( glitch::video::IMultipleRenderTarget::SAttachment *this);
// [0xe20d00] (72 bytes) glitch::video::IMultipleRenderTarget::SAttachment::SAttachment(glitch::video::IMultipleRenderTarget::SAttachment const&)
// glitch::video::IMultipleRenderTarget::SAttachment *glitch::video::IMultipleRenderTarget::SAttachment::SAttachment( glitch::video::IMultipleRenderTarget::SAttachment *this, const glitch::video::IMultipleRenderTarget::SAttachment *a2);
// [0xe20d50] (44 bytes) glitch::video::IMultipleRenderTarget::SAttachment::SAttachment(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char)
// int glitch::video::IMultipleRenderTarget::SAttachment::SAttachment(int a1, int *a2, char a3, char a4);
// [0xe20d80] (41 bytes) glitch::video::IMultipleRenderTarget::SAttachment::SAttachment(boost::intrusive_ptr<glitch::video::IRenderBuffer> const&,bool)
// int glitch::video::IMultipleRenderTarget::SAttachment::SAttachment(int a1, int *a2, char a3);
// [0xe20db0] (157 bytes) glitch::video::IMultipleRenderTarget::IMultipleRenderTarget(glitch::video::IVideoDriver *,glitch::video::E_ANTIALIASING_SETTING)
// struct glitch::video::IMultipleRenderTarget::SAttachment *glitch::video::IMultipleRenderTarget::IMultipleRenderTarget( int a1, int a2, int16_t a3);
// [0xe20e50] (172 bytes) glitch::video::IMultipleRenderTarget::getTargetCount(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE)const
// char glitch::video::IMultipleRenderTarget::getTargetCount(int a1, int a2);
// [0xe20f00] (181 bytes) glitch::video::IMultipleRenderTarget::getTarget(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE,unsigned char)const
// int glitch::video::IMultipleRenderTarget::getTarget(int a1, int a2, uint8_t a3);
// [0xe20fc0] (72 bytes) glitch::video::IMultipleRenderTarget::getTargetType(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE,unsigned char)const
// int glitch::video::IMultipleRenderTarget::getTargetType(int a1, int a2, uint8_t a3);
// [0xe21010] (137 bytes) glitch::video::IMultipleRenderTarget::getTarget(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE,unsigned char,boost::intrusive_ptr<glitch::video::IRenderBuffer> &,bool &)const
// int glitch::video::IMultipleRenderTarget::getTarget( int a1, int a2, uint8_t a3, volatile int32_t **a4, uint8_t *a5);
// [0xe210a0] (45 bytes) glitch::video::ISync::ISync(glitch::video::E_SYNC_TYPE)
// int glitch::video::ISync::ISync(int a1, char a2);
// [0xe210d0] (83 bytes) glitch::video::SVertexStream::getStreamData(void)const
// glitch::video::SVertexStream *glitch::video::SVertexStream::getStreamData( glitch::video::SVertexStream *this, int *a2);
// [0xe21130] (334 bytes) glitch::video::SVertexStream::copyStream(glitch::video::SVertexStream const&,unsigned int,unsigned int,unsigned int)
// int glitch::video::SVertexStream::copyStream( glitch::video::IBuffer **this, glitch::video::IBuffer **a2, unsigned int a3, unsigned int a4, unsigned int a5);
// [0xe21280] (66 bytes) glitch::video::SVertexStream::append(glitch::video::SVertexStream const&,unsigned int,unsigned int,unsigned int)
// int glitch::video::SVertexStream::append( glitch::video::IBuffer **this, glitch::video::IBuffer **a2, unsigned int a3, unsigned int a4, unsigned int a5);
// [0xe212d0] (865 bytes) glitch::video::computeSphereMapTexCoords(glitch::core::CMatrix4<float> const&,glitch::core::CMatrix4<float> const*,unsigned int,glitch::core::vector3d<float> const*,unsigned int,glitch::core::vector3d<float> const*,unsigned int,glitch::core::vector2d<float> *,unsigned int)
// void glitch::video::computeSphereMapTexCoords( float *a1, float *a2, int a3, float *a4, int a5, float *a6, int a7, float *a8, int a9);
// [0xe21640] (409 bytes) glitch::video::computeSimpleSphereMapTexCoords(glitch::core::CMatrix4<float> const&,unsigned int,glitch::core::vector3d<float> const*,unsigned int,glitch::core::vector2d<float> *,unsigned int,bool)
// float *glitch::video::computeSimpleSphereMapTexCoords( float *a1, int a2, float *a3, int a4, float *a5, int a6, uint8_t a7);
// [0xe217e0] (149 bytes) glitch::video::CGlobalMaterialParameterManager::pack(void)
// void glitch::video::CGlobalMaterialParameterManager::pack(glitch::video::CGlobalMaterialParameterManager *this);
// [0xe21880] (93 bytes) glitch::video::CGlobalMaterialParameterManager::setAutoPacking(bool)
// void glitch::video::CGlobalMaterialParameterManager::setAutoPacking( glitch::video::CGlobalMaterialParameterManager *this, bool a2);
// [0xe218e0] (90 bytes) glitch::video::CGlobalMaterialParameterManager::grabInternal(unsigned short)
// uint32_t *glitch::video::CGlobalMaterialParameterManager::grabInternal( volatile int32_t **this, uint16_t a2);
// [0xe21940] (106 bytes) glitch::video::CGlobalMaterialParameterManager::dropInternal(unsigned short)
// uint32_t *glitch::video::CGlobalMaterialParameterManager::dropInternal( volatile int32_t **this, uint16_t a2);
// [0xe219b0] (174 bytes) glitch::video::CLight::setAbsoluteTransformation(glitch::core::CMatrix4<float> const&)
// int glitch::video::CLight::setAbsoluteTransformation( glitch::video::CLight *this, const glitch::core::CMatrix4<float> *a2);
// [0xe21a60] (195 bytes) glitch::video::CMaterial::getTechnique(void)const
// int glitch::video::CMaterial::getTechnique(glitch::video::CMaterial *this);
// [0xe21b30] (9 bytes) glitch::video::CMaterial::getRenderStateBlockSize(glitch::video::CMaterialRenderer const&)
// int glitch::video::CMaterial::getRenderStateBlockSize();
// [0xe21b40] (9 bytes) glitch::video::CMaterial::setRenderStateInternal(unsigned char,unsigned char,glitch::video::detail::material::SRenderState const&)
// void glitch::video::CMaterial::setRenderStateInternal();
// [0xe21b50] (653 bytes) glitch::video::CMaterial::updateParametersHashCode(unsigned char,unsigned long long)const
// int glitch::video::CMaterial::updateParametersHashCode( glitch::video::CMaterial *this, uint8_t a2, uint64_t a3);
// [0xe21de0] (9 bytes) glitch::video::CMaterial::updateRenderStateHashCode(unsigned char)const
// void glitch::video::CMaterial::updateRenderStateHashCode();
// [0xe21df0] (293 bytes) glitch::video::CMaterial::updateHashCode(unsigned char,unsigned long long)const
// int glitch::video::CMaterial::updateHashCode( glitch::video::CMaterial *this, uint8_t a2, uint64_t a3);
// [0xe21f20] (841 bytes) glitch::video::CMaterial::areParametersEqual(unsigned char,unsigned char,glitch::video::CMaterial const&,unsigned char,unsigned long long,bool)const
// int glitch::video::CMaterial::areParametersEqual( glitch::video::CMaterial *this, uint8_t a2, char a3, const glitch::video::CMaterial *a4, uint8_t a5, uint64_t a6, bool a7);
// [0xe22270] (828 bytes) glitch::video::CMaterial::compare(unsigned char,unsigned char,glitch::video::CMaterial const&,unsigned char)const
// int glitch::video::CMaterial::compare( glitch::video::CMaterial *this, uint8_t a2, char a3, const glitch::video::CMaterial *a4, uint8_t a5);
// [0xe225b0] (14 bytes) glitch::video::CMaterial::setRootSceneNode(glitch::collada::CRootSceneNode *)
// glitch::video::CMaterial *glitch::video::CMaterial::setRootSceneNode( glitch::video::CMaterial *this, glitch::collada::CRootSceneNode *a2);
// [0xe225c0] (45 bytes) glitch::video::CMaterial::removeFromRootSceneNode(void)const
// const glitch::video::CMaterial **glitch::video::CMaterial::removeFromRootSceneNode( glitch::video::CMaterial *this);
// [0xe225f0] (109 bytes) glitch::video::CMaterialRenderer::getTechniqueID(glitch::core::SSharedString const&)const
// int glitch::video::CMaterialRenderer::getTechniqueID( glitch::video::CMaterialRenderer *this, const glitch::core::SSharedString *a2);
// [0xe22660] (321 bytes) glitch::video::CMaterialRenderer::getParameterID(glitch::video::E_SHADER_PARAMETER_TYPE,unsigned short,bool)const
// int glitch::video::CMaterialRenderer::getParameterID(int a1, int a2, int a3, char a4);
// [0xe227b0] (352 bytes) glitch::video::CMaterialRenderer::getParameterID(unsigned char,unsigned char,glitch::video::E_SHADER_STAGE,glitch::video::E_SHADER_STAGE,glitch::video::E_SHADER_PARAMETER_TYPE,bool)const
// int glitch::video::CMaterialRenderer::getParameterID( int a1, uint8_t a2, uint8_t a3, int a4, int a5, int a6, char a7);
// [0xe22910] (525 bytes) glitch::video::CMaterialRenderer::getParameterID(unsigned char,unsigned char,glitch::video::E_SHADER_STAGE,glitch::video::E_SHADER_STAGE,char const*)const
// int glitch::video::CMaterialRenderer::getParameterID( int a1, uint8_t a2, uint8_t a3, int a4, int a5, glitch::core::detail::SSharedStringHeapEntry::SData *a6);
// [0xe22b20] (203 bytes) glitch::video::CMaterialRenderer::getParameterID(char const*,unsigned short)const
// int glitch::video::CMaterialRenderer::getParameterID( glitch::video::CMaterialRenderer *this, glitch::core::detail::SSharedStringHeapEntry::SData *a2, uint16_t a3);
// [0xe22bf0] (155 bytes) glitch::video::CMaterialRenderer::setRenderState(unsigned char,unsigned char,glitch::video::detail::renderpass::SRenderState const&)
// int glitch::video::CMaterialRenderer::setRenderState( int a1, uint8_t a2, uint8_t a3, uint32_t *s2);
// [0xe22c90] (485 bytes) glitch::video::CMaterialRenderer::getBindedLightCount(unsigned char,unsigned char)const
// int glitch::video::CMaterialRenderer::getBindedLightCount( glitch::video::CMaterialRenderer *this, uint8_t a2, uint8_t a3);
// [0xe22e80] (101 bytes) glitch::video::CMaterialRenderer::updateRenderStateHashCode(unsigned char)const
// int glitch::video::CMaterialRenderer::updateRenderStateHashCode( glitch::video::CMaterialRenderer *this, uint8_t a2);
// [0xe22ef0] (29 bytes) glitch::video::detail::materialrenderermanager::SProperties::onRemove(void *,unsigned short)
// int glitch::video::detail::materialrenderermanager::SProperties::onRemove( glitch::video::detail::materialrenderermanager::SProperties *this, uint16_t *a2);
// [0xe22f10] (13 bytes) glitch::video::CMaterialRendererManager::SCreationContext::SCreationContext(void *)
// struct glitch::video::CMaterialRendererManager::SCreationContext *glitch::video::CMaterialRendererManager::SCreationContext::SCreationContext( glitch::video::CMaterialRendererManager::SCreationContext *this, void *a2);
// [0xe22f20] (156 bytes) glitch::video::CMaterialRendererManager::SCreationContext::getTechniqueID(char const*)const
// glitch::video::CMaterialRendererManager::SCreationContext *glitch::video::CMaterialRendererManager::SCreationContext::getTechniqueID( glitch::video::CMaterialRendererManager::SCreationContext *this, const char *a2, glitch::core::detail::SSharedStringHeapEntry::SData *a3);
// [0xe22fc0] (882 bytes) glitch::video::CMaterialRendererManager::SCreationContext::beginTechnique(char const*,bool)
// int glitch::video::CMaterialRendererManager::SCreationContext::beginTechnique( glitch::video::CMaterialRendererManager::SCreationContext *this, char *s, bool a3);
// [0xe23340] (535 bytes) glitch::video::CMaterialRendererManager::SCreationContext::addParameter(char const*,glitch::video::E_SHADER_PARAMETER_TYPE,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,unsigned int)
// uint32_t *glitch::video::CMaterialRendererManager::SCreationContext::addParameter( uint32_t *a1, uint32_t **a2, glitch::core::detail::SSharedStringHeapEntry::SData *a3, int a4, int a5, int16_t a6);
// [0xe23560] (263 bytes) glitch::video::CMaterialRendererManager::SCreationContext::getParameterID(char const*)const
// glitch::video::CMaterialRendererManager::SCreationContext *glitch::video::CMaterialRendererManager::SCreationContext::getParameterID( glitch::video::CMaterialRendererManager::SCreationContext *this, const char *a2, glitch::core::detail::SSharedStringHeapEntry::SData *a3);
// [0xe23670] (419 bytes) glitch::video::CMaterialRendererManager::clearMaterialTechniqueMapRules(void)
// glitch::video::CMaterialRendererManager *glitch::video::CMaterialRendererManager::clearMaterialTechniqueMapRules( glitch::video::CMaterialRendererManager *this);
// [0xe23820] (89 bytes) glitch::video::CMaterialRendererManager::SDriverCacheAccess::get(glitch::video::CMaterialRendererManager const&,unsigned short)
// int32_t glitch::video::CMaterialRendererManager::SDriverCacheAccess::get( volatile int32_t **this, const glitch::video::CMaterialRendererManager *a2);
// [0xe23880] (209 bytes) glitch::video::CMaterialRendererManager::SMaterialTechniqueMapsAccess::unload(glitch::video::CMaterialRendererManager&)
// void glitch::video::CMaterialRendererManager::SMaterialTechniqueMapsAccess::unload( glitch::video::CMaterialRendererManager::SMaterialTechniqueMapsAccess *this);
// [0xe23960] (840 bytes) glitch::video::CMaterialRendererManager::createDefaultTechniqueMaps(glitch::video::CMaterialRenderer const&,unsigned char const*)
// int glitch::video::CMaterialRendererManager::createDefaultTechniqueMaps( volatile int32_t **this, const glitch::video::CMaterialRenderer *a2, const uint8_t *src);
// [0xe23cb0] (2044 bytes) glitch::video::CMaterialRendererManager::setupTechniqueMaps(glitch::video::CMaterialRenderer const&)
// void glitch::video::CMaterialRendererManager::setupTechniqueMaps( glitch::video::CMaterialRendererManager *this, const glitch::video::CMaterialRenderer *a2);
// [0xe244b0] (228 bytes) glitch::video::CMaterialRendererManager::setMaterialTechniqueMapValue(glitch::video::CMaterialRenderer const&,unsigned int,unsigned int,unsigned char,unsigned char)
// int glitch::video::CMaterialRendererManager::setMaterialTechniqueMapValue( volatile int32_t **this, const glitch::video::CMaterialRenderer *a2, unsigned int a3, unsigned int a4, uint8_t a5, char a6);
// [0xe245a0] (244 bytes) glitch::video::CMaterialRendererManager::getMapGroupID(glitch::core::SSharedString const&,int)const
// int glitch::video::CMaterialRendererManager::getMapGroupID( glitch::video::CMaterialRendererManager *this, const glitch::core::SSharedString *a2, int a3);
// [0xe246a0] (134 bytes) glitch::video::CMaterialRendererManager::getMaterialTechniqueMapID(char const*)const
// int glitch::video::CMaterialRendererManager::getMaterialTechniqueMapID( glitch::video::CMaterialRendererManager *this, glitch::core::detail::SSharedStringHeapEntry::SData *a2);
// [0xe24730] (250 bytes) glitch::video::CMaterialRendererManager::getMaterialGroupID(char const*)const
// int glitch::video::CMaterialRendererManager::getMaterialGroupID( glitch::video::CMaterialRendererManager *this, glitch::core::detail::SSharedStringHeapEntry::SData *a2);
// [0xe24830] (116 bytes) glitch::video::CMaterialVertexAttributeMap::set(unsigned char,unsigned char,boost::intrusive_ptr<glitch::video::CVertexAttributeMap> const&)
// void glitch::video::CMaterialVertexAttributeMap::set( glitch::video::CMaterialVertexAttributeMap *this, uint8_t a2, uint8_t a3, volatile int32_t **a4);
// [0xe248b0] (45 bytes) glitch::video::CMaterialVertexAttributeMap::totalMapCount(glitch::video::CMaterialRenderer const&)
// int glitch::video::CMaterialVertexAttributeMap::totalMapCount(glitch::video::CMaterialVertexAttributeMap *this);
// [0xe248e0] (59 bytes) glitch::video::CMaterialVertexAttributeMap::allocateBase(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&)
// int glitch::video::CMaterialVertexAttributeMap::allocateBase(glitch::video::CMaterialVertexAttributeMap **a1);
// [0xe24920] (142 bytes) glitch::video::CMaterialVertexAttributeMap::CMaterialVertexAttributeMap(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&,boost::intrusive_ptr<glitch::video::CVertexStreams const> const&)
// int glitch::video::CMaterialVertexAttributeMap::CMaterialVertexAttributeMap( uint32_t *a1, glitch::video::CMaterialVertexAttributeMap **a2, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a3);
// [0xe249b0] (120 bytes) glitch::video::CMaterialVertexAttributeMap::allocate(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&,boost::intrusive_ptr<glitch::video::CVertexStreams const> const&)
// volatile int32_t **glitch::video::CMaterialVertexAttributeMap::allocate( volatile int32_t **a1, glitch::video::CMaterialVertexAttributeMap **a2, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a3);
// [0xe24a30] (227 bytes) glitch::video::CMaterialVertexAttributeMap::CMaterialVertexAttributeMap(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&,boost::intrusive_ptr<glitch::video::CVertexAttributeMap> const*,bool)
// int glitch::video::CMaterialVertexAttributeMap::CMaterialVertexAttributeMap( uint32_t *a1, glitch::video::CMaterialVertexAttributeMap **a2, const glitch::video::CVertexAttributeMap **a3, char a4);
// [0xe24b20] (144 bytes) glitch::video::CMaterialVertexAttributeMap::clone(bool)const
// glitch::video::CMaterialVertexAttributeMap *glitch::video::CMaterialVertexAttributeMap::clone( glitch::video::CMaterialVertexAttributeMap *this, int a2, char a3);
// [0xe24bb0] (88 bytes) glitch::video::CMaterialVertexAttributeMap::CMaterialVertexAttributeMap(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&)
// int glitch::video::CMaterialVertexAttributeMap::CMaterialVertexAttributeMap( uint32_t *a1, glitch::video::CMaterialVertexAttributeMap **a2);
// [0xe24c10] (112 bytes) glitch::video::CMaterialVertexAttributeMap::allocate(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&)
// volatile int32_t **glitch::video::CMaterialVertexAttributeMap::allocate( volatile int32_t **a1, glitch::video::CMaterialVertexAttributeMap **a2);
// [0xe24c80] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_SHADE_MODEL *)
// char **glitch::video::getStringsInternal();
// [0xe24ca0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_FOG_MODE *)
// char **glitch::video::getStringsInternal();
// [0xe24cc0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_FOG_MODE_3DS *)
// char **glitch::video::getStringsInternal();
// [0xe24ce0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_RENDER_HINT *)
// char **glitch::video::getStringsInternal();
// [0xe24d00] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_ENV_MODE *)
// char **glitch::video::getStringsInternal();
// [0xe24d20] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_COMBINE_MODE *)
// char **glitch::video::getStringsInternal();
// [0xe24d40] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_COMBINE_MODE_3DS *)
// char **glitch::video::getStringsInternal();
// [0xe24d60] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_COMBINE_SOURCE *)
// char **glitch::video::getStringsInternal();
// [0xe24d80] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_COMBINE_SOURCE_3DS *)
// char **glitch::video::getStringsInternal();
// [0xe24da0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_COMBINE_OPERAND *)
// char **glitch::video::getStringsInternal();
// [0xe24dc0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_COMBINE_OPERAND_3DS *)
// char **glitch::video::getStringsInternal();
// [0xe24de0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_COMBINE_BUFFER_SOURCE_3DS *)
// char **glitch::video::getStringsInternal();
// [0xe24e00] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEX_GEN_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe24e20] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_COLOR_GEN *)
// char **glitch::video::getStringsInternal();
// [0xe24e40] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_3DS_LIGTH_FRESNEL_FACTOR *)
// char **glitch::video::getStringsInternal();
// [0xe24e60] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_3DS_LIGHT_ENV_LAYER_CONFIG *)
// char **glitch::video::getStringsInternal();
// [0xe24e80] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_3DS_LIGHT_LUT_INPUT *)
// char **glitch::video::getStringsInternal();
// [0xe24ea0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_3DS_LIGHT_LUT_SCALE *)
// char **glitch::video::getStringsInternal();
// [0xe24ec0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_3DS_TEXENV_SCALE *)
// char **glitch::video::getStringsInternal();
// [0xe24ee0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_3DS_FRAGMENT_OPERATION_MODE *)
// char **glitch::video::getStringsInternal();
// [0xe24f00] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_3DS_FRGAMENT_SAMPLER_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe24f20] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_SELECTOR_SOURCE_3DS *)
// char **glitch::video::getStringsInternal();
// [0xe24f40] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_LIGHT_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe24f60] (411 bytes) glitch::video::CLight::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::video::CLight::serializeAttributes(int a1, int a2);
// [0xe25100] (448 bytes) glitch::video::CLight::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::video::CLight::deserializeAttributes(int a1, const char *a2);
// [0xe252c0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_MATERIAL_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe252e0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_BLEND_FACTOR *)
// char **glitch::video::getStringsInternal();
// [0xe25300] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_BLEND_EQUATION *)
// char **glitch::video::getStringsInternal();
// [0xe25320] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_FACE_SIDE *)
// char **glitch::video::getStringsInternal();
// [0xe25340] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_FACE_WINDING *)
// char **glitch::video::getStringsInternal();
// [0xe25360] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_COMPARE_FUNC *)
// char **glitch::video::getStringsInternal();
// [0xe25380] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_POLYGON_MODE *)
// char **glitch::video::getStringsInternal();
// [0xe253a0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_STENCIL_OP *)
// char **glitch::video::getStringsInternal();
// [0xe253c0] (134 bytes) glitch::video::SRenderPass::SRenderPass(boost::intrusive_ptr<glitch::video::IShader const> const&)
// int glitch::video::SRenderPass::SRenderPass(int a1, int *a2);
// [0xe25450] (120 bytes) glitch::video::SRenderPass::SRenderPass(boost::intrusive_ptr<glitch::video::IShader const> const&,glitch::video::detail::renderpass::SRenderState const&)
// int glitch::video::SRenderPass::SRenderPass(int a1, int *a2, uint32_t *a3);
// [0xe254d0] (120 bytes) glitch::video::SRenderPass::SRenderPass(boost::intrusive_ptr<glitch::video::IShader const> const&,glitch::video::detail::renderpass::SRenderState const&,glitch::video::detail::material::SRenderState const&)
// int glitch::video::SRenderPass::SRenderPass(int a1, int *a2, uint32_t *a3);
// [0xe25550] (159 bytes) glitch::video::SRenderPass::SRenderPass(boost::intrusive_ptr<glitch::video::IShader const> const&,glitch::video::detail::renderpass::SRenderState const&,glitch::video::detail::material::SRenderState const&,unsigned short const*,glitch::video::SShaderParameterBinding const*,glitch::video::SShaderParameterID const*,unsigned short,unsigned short,unsigned short)
// int glitch::video::SRenderPass::SRenderPass( int a1, int *a2, uint32_t *a3, int a4, int a5, int a6, int a7, int16_t a8, int16_t a9, int16_t a10);
// [0xe255f0] (41 bytes) glitch::video::SRenderPass::~SRenderPass()
// void glitch::video::SRenderPass::~SRenderPass(volatile int32_t **this);
// [0xe25620] (144 bytes) glitch::video::SRenderPass::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::video::SRenderPass::serializeAttributes( glitch::video::detail::renderpass::SRenderState *a1, glitch::io::IAttributes *a2, uint8_t *a3);
// [0xe256b0] (1835 bytes) glitch::video::SRenderPass::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::video::SRenderPass::deserializeAttributes(int a1, int a2);
// [0xe25de0] (90 bytes) glitch::video::STechnique::STechnique(char const*,unsigned char,glitch::video::SRenderPass *)
// glitch::video::STechnique *glitch::video::STechnique::STechnique( glitch::video::STechnique *this, glitch::core::detail::SSharedStringHeapEntry::SData *a2, int a3, glitch::video::SRenderPass *a4);
// [0xe25e40] (40 bytes) glitch::video::STechnique::STechnique(glitch::core::SSharedString const&,unsigned char,glitch::video::SRenderPass *)
// glitch::video::STechnique *glitch::video::STechnique::STechnique( glitch::video::STechnique *this, volatile int32_t **a2, char a3, glitch::video::SRenderPass *a4);
// [0xe25e70] (2116 bytes) glitch::video::CMaterialRenderer::CMaterialRenderer(glitch::video::IVideoDriver *,unsigned short,char const*,glitch::video::detail::material_renderer_manager::STechniqueList const&,unsigned short,unsigned short,glitch::video::SShaderParameterDef const* const*,unsigned int,unsigned short,unsigned short const*,unsigned int)
// char *glitch::video::CMaterialRenderer::CMaterialRenderer( int a1, int a2, int16_t a3, char *a4, uint32_t *a5, uint16_t a6, uint16_t a7, int *a8, int a9, int16_t a10, char *a11);
// [0xe266c0] (41 bytes) glitch::video::CDefaultTexturePolicy::CDefaultTexturePolicy(glitch::video::CTextureMemoryPoolManager *)
// glitch::video::CDefaultTexturePolicy *glitch::video::CDefaultTexturePolicy::CDefaultTexturePolicy( glitch::video::CDefaultTexturePolicy *this, glitch::video::CTextureMemoryPoolManager *a2);
// [0xe266f0] (34 bytes) glitch::video::ITexturePolicySelector::ITexturePolicySelector(void)
// glitch::video::ITexturePolicySelector *glitch::video::ITexturePolicySelector::ITexturePolicySelector( glitch::video::ITexturePolicySelector *this);
// [0xe26720] (77 bytes) glitch::video::CSimpleTexturePolicySelector::CSimpleTexturePolicySelector(boost::intrusive_ptr<glitch::video::ITexturePolicy> const&)
// int glitch::video::CSimpleTexturePolicySelector::CSimpleTexturePolicySelector( glitch::video::ITexturePolicySelector *a1, int *a2);
// [0xe26770] (269 bytes) glitch::video::CTextureManager::getImageLoader(boost::intrusive_ptr<glitch::io::IReadFile> const&)const
// glitch::video::CTextureManager *glitch::video::CTextureManager::getImageLoader( glitch::video::CTextureManager *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, uint32_t *a3);
// [0xe26880] (283 bytes) glitch::video::CTextureManager::openTextureFile(boost::intrusive_ptr<glitch::video::ITexture> const&)const
// glitch::video::CTextureManager *glitch::video::CTextureManager::openTextureFile( glitch::video::CTextureManager *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2, int a3);
// [0xe269a0] (460 bytes) glitch::video::CTextureManager::reloadClientData(boost::intrusive_ptr<glitch::video::ITexture> const&)
// int glitch::video::CTextureManager::reloadClientData( glitch::video::CTextureManager *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2);
// [0xe26b70] (174 bytes) glitch::video::CTextureManager::getTextureFileName(unsigned short)const
// int glitch::video::CTextureManager::getTextureFileName( glitch::video::CTextureManager *this, uint16_t a2);
// [0xe26c20] (190 bytes) glitch::video::CTextureManager::getTextureRequestedFormat(unsigned short,glitch::video::E_PIXEL_FORMAT &,glitch::video::E_TEXTURE_LAYOUT &)const
// int glitch::video::CTextureManager::getTextureRequestedFormat( int a1, uint16_t a2, uint32_t *a3, uint32_t *a4);
// [0xe26ce0] (1334 bytes) glitch::video::CTextureManager::getHashName(char const*)const
// char **glitch::video::CTextureManager::getHashName(char **this, const char *a2, const char *a3);
// [0xe27220] (172 bytes) glitch::video::CTextureManager::createImageFromFile(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// glitch::video::CTextureManager *glitch::video::CTextureManager::createImageFromFile( glitch::video::CTextureManager *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, uint32_t *a3);
// [0xe272d0] (268 bytes) glitch::video::CTextureManager::createImageFromFile(char const*)
// volatile int32_t **glitch::video::CTextureManager::createImageFromFile( volatile int32_t **this, const char *a2, int a3);
// [0xe273e0] (310 bytes) glitch::video::CTextureManager::writeTextureToFile(boost::intrusive_ptr<glitch::video::ITexture> const&,char const*,unsigned int)
// int glitch::video::CTextureManager::writeTextureToFile( glitch::video::CTextureManager *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2, const char *a3, unsigned int a4);
// [0xe27520] (310 bytes) glitch::video::CTextureManager::writeImageToFile(boost::intrusive_ptr<glitch::video::CImage> const&,char const*,unsigned int)
// int glitch::video::CTextureManager::writeImageToFile(int a1, int a2, int a3, int a4);
// [0xe27660] (320 bytes) glitch::video::CTextureManager::markTextureAsUnloadable(boost::intrusive_ptr<glitch::video::ITexture> const&)
// int glitch::video::CTextureManager::markTextureAsUnloadable( glitch::video::CTextureManager *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2);
// [0xe277a0] (377 bytes) glitch::video::CTextureManager::getMinimumMipmapForFormat(glitch::video::STextureDesc &,unsigned int)
// unsigned int glitch::video::CTextureManager::getMinimumMipmapForFormat(uint32_t *a1, unsigned int a2);
// [0xe27920] (78 bytes) glitch::video::CTextureMemoryPoolManager::CTextureMemoryPoolManager(unsigned int,glitch::video::CTextureManager *)
// struct glitch::video::CTextureMemoryPoolManager *glitch::video::CTextureMemoryPoolManager::CTextureMemoryPoolManager( glitch::video::CTextureMemoryPoolManager *this, unsigned int a2, glitch::video::CTextureManager *a3);
// [0xe27970] (192 bytes) glitch::video::CDefaultTexturePolicySelector::CDefaultTexturePolicySelector(unsigned int,glitch::video::CTextureManager *)
// void (**glitch::video::CDefaultTexturePolicySelector::CDefaultTexturePolicySelector( glitch::video::CDefaultTexturePolicySelector *this, unsigned int a2, glitch::video::CTextureManager *a3))(glitch::video::CDefaultTexturePolicySelector *__hidden this);
// [0xe27a30] (192 bytes) glitch::video::CDefaultTexturePolicySelector::CDefaultTexturePolicySelector(glitch::video::CTextureManager *)
// void (**glitch::video::CDefaultTexturePolicySelector::CDefaultTexturePolicySelector( glitch::video::CDefaultTexturePolicySelector *this, glitch::video::CTextureManager *a2))(glitch::video::CDefaultTexturePolicySelector *__hidden this);
// [0xe27af0] (30 bytes) glitch::video::CTextureMemoryPoolManager::touch(glitch::video::ITexture *)
// int glitch::video::CTextureMemoryPoolManager::touch( glitch::video::CTextureMemoryPoolManager *this, glitch::video::ITexture *a2);
// [0xe27b10] (45 bytes) glitch::video::CDefaultTexturePolicy::touch(glitch::video::ITexture *)
// int glitch::video::CDefaultTexturePolicy::touch( glitch::video::CTextureMemoryPoolManager **this, glitch::video::ITexture *a2);
// [0xe27b40] (91 bytes) glitch::video::CTextureMemoryPoolManager::getSpaceLeft(void)const
// int glitch::video::CTextureMemoryPoolManager::getSpaceLeft(glitch::video::CTextureMemoryPoolManager *this);
// [0xe27ba0] (181 bytes) glitch::video::CVirtualTexture::getByteOffset(unsigned char)const
// unsigned int glitch::video::CVirtualTexture::getByteOffset( glitch::video::CVirtualTexture *this, uint8_t a2);
// [0xe27c60] (105 bytes) glitch::video::CVirtualTexture::getDataInternal(glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char)const
// unsigned int glitch::video::CVirtualTexture::getDataInternal( glitch::video::CVirtualTexture *a1, int a2, uint8_t a3);
// [0xe27cd0] (97 bytes) glitch::video::CVirtualTexture::getDataInternal(unsigned char)const
// unsigned int glitch::video::CVirtualTexture::getDataInternal( glitch::video::CVirtualTexture *this, uint8_t a2);
// [0xe27d40] (84 bytes) glitch::video::CVirtualTexture::getDataInternal(void)const
// unsigned int glitch::video::CVirtualTexture::getDataInternal(glitch::video::CVirtualTexture *this);
// [0xe27da0] (113 bytes) glitch::video::CVirtualTexture::map(glitch::video::E_BUFFER_MAP_ACCESS,glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char)
// unsigned int glitch::video::CVirtualTexture::map( glitch::video::CVirtualTexture *a1, int a2, int a3, uint8_t a4);
// [0xe27e20] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_PIXEL_FORMAT *)
// char **glitch::video::getStringsInternal();
// [0xe27e40] (95 bytes) glitch::video::pixel_format::getPackedType(glitch::video::E_PIXEL_FORMAT)
// char glitch::video::pixel_format::getPackedType(int a1);
// [0xe2bb80] (175 bytes) glitch::video::pixel_format::computeRelativeSwizzleTable(glitch::video::E_PIXEL_FORMAT,glitch::video::E_PIXEL_FORMAT,unsigned char *)
// int glitch::video::pixel_format::computeRelativeSwizzleTable(int a1, int a2, int a3);
// [0xe2bc30] (98 bytes) glitch::video::pixel_format::getFormat(unsigned int,unsigned int,unsigned int,unsigned int)
// int glitch::video::pixel_format::getFormat( glitch::video::pixel_format *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0xe2bca0] (1302 bytes) glitch::video::CImageLoaderDDS::loadTextureHeader(glitch::io::IReadFile *,glitch::video::STextureDesc &)const
// int glitch::video::CImageLoaderDDS::loadTextureHeader( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, unsigned int a26, unsigned int a27, int a28, int a29, unsigned int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, unsigned int a44, int a45, glitch::video::pixel_format *a46, glitch::video::pixel_format *a47, unsigned int a48, unsigned int a49, int a50, int a51);
// [0xe2c1c0] (102 bytes) glitch::video::pixel_format::computePitch(glitch::video::E_PIXEL_FORMAT,unsigned int)
// unsigned int glitch::video::pixel_format::computePitch(int a1, int a2);
// [0xe2c230] (53 bytes) glitch::video::ITexture::getPitch(void)const
// unsigned int glitch::video::ITexture::getPitch(glitch::video::ITexture *this);
// [0xe2c270] (98 bytes) glitch::video::ITexture::getPitch(unsigned char)const
// unsigned int glitch::video::ITexture::getPitch(glitch::video::ITexture *this, uint8_t a2);
// [0xe2c6e0] (137 bytes) glitch::video::pixel_format::computeSizeInBytes(glitch::video::E_PIXEL_FORMAT,unsigned int,unsigned int)
// unsigned int glitch::video::pixel_format::computeSizeInBytes(int a1, int a2, int a3);
// [0xe2c770] (55 bytes) glitch::video::pixel_format::computeSizeInBytes(glitch::video::E_PIXEL_FORMAT,unsigned int,unsigned int,unsigned int)
// unsigned int glitch::video::pixel_format::computeSizeInBytes(int a1, int a2, int a3, int a4);
// [0xe2c7b0] (93 bytes) glitch::video::pixel_format::computeMipmapSizeInBytes(glitch::video::E_PIXEL_FORMAT,unsigned int,unsigned int,unsigned char,bool)
// unsigned int glitch::video::pixel_format::computeMipmapSizeInBytes( int a1, unsigned int a2, unsigned int a3, char a4, char a5);
// [0xe2c810] (1179 bytes) glitch::video::CImageWriterDDS::writeTexture(glitch::io::IWriteFile *,glitch::video::STextureDesc const&,void const* const*,unsigned char,unsigned int)const
// 0xe2c810 glitch::video::CImageWriterDDS::writeTexture(glitch::io::IWriteFile *,glitch::video::STextureDesc const&,void const* const*,unsigned char,unsigned int)const
// [0xe2ccb0] (136 bytes) glitch::video::pixel_format::computeMipmapSizeInBytes(glitch::video::E_PIXEL_FORMAT,unsigned int,unsigned int,unsigned int,unsigned char,bool)
// unsigned int glitch::video::pixel_format::computeMipmapSizeInBytes( int a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5, char a6);
// [0xe2cd40] (352 bytes) glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::readNextImageImpl(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy &,glitch::video::E_TEXTURE_CUBE_MAP_FACE &,unsigned char &)
// int glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::readNextImageImpl( int a1, uint32_t *a2, unsigned int *a3, uint8_t *a4);
// [0xe2cea0] (2599 bytes) glitch::video::CImageWriterKTX::writeTexture(glitch::io::IWriteFile *,glitch::video::STextureDesc const&,void const* const*,unsigned char,unsigned int)const
// int glitch::video::CImageWriterKTX::writeTexture(int a1, int *a2, int *a3, uint32_t *a4, uint8_t a5);
// [0xe2d8d0] (137 bytes) glitch::video::pixel_format::computeSizeInBytes(glitch::video::E_PIXEL_FORMAT,unsigned int,unsigned int,unsigned int,unsigned char,bool)
// int glitch::video::pixel_format::computeSizeInBytes( int a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5, char a6);
// [0xe2d960] (136 bytes) glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::readAllImpl(void *)
// bool glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::readAllImpl( glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader *this, void *a2);
// [0xe2d9f0] (76 bytes) glitch::video::pixel_format::computeSizeInBytes(glitch::video::E_PIXEL_FORMAT,unsigned int,unsigned int,unsigned char,bool)
// int glitch::video::pixel_format::computeSizeInBytes(int a1, unsigned int a2, unsigned int a3, char a4, char a5);
// [0xe2da40] (1283 bytes) glitch::video::CImageWriterPVR::writeTexture(glitch::io::IWriteFile *,glitch::video::STextureDesc const&,void const* const*,unsigned char,unsigned int)const
// 0xe2da40 glitch::video::CImageWriterPVR::writeTexture(glitch::io::IWriteFile *,glitch::video::STextureDesc const&,void const* const*,unsigned char,unsigned int)const
// [0xe2df50] (287 bytes) glitch::video::CVirtualTexture::getSizeInBytes(void)const
// int glitch::video::CVirtualTexture::getSizeInBytes(glitch::video::CVirtualTexture *this);
// [0xe2e070] (539 bytes) glitch::video::CTextureMemoryPoolManager::add(glitch::video::ITexture *)
// int glitch::video::CTextureMemoryPoolManager::add(glitch::video::ITexture ***this, glitch::video::ITexture *a2);
// [0xe2e290] (45 bytes) glitch::video::CDefaultTexturePolicy::add(glitch::video::ITexture *)
// int glitch::video::CDefaultTexturePolicy::add(glitch::video::ITexture ****this, glitch::video::ITexture *a2);
// [0xe2e2c0] (262 bytes) glitch::video::ITexture::getVRAMSize(void)const
// int glitch::video::ITexture::getVRAMSize(glitch::video::ITexture *this);
// [0xe2e3d0] (476 bytes) glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::setMipmapRange(std::pair<unsigned char,unsigned char> const&)
// int glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::setMipmapRange( int a1, uint8_t *a2);
// [0xe2e5b0] (233 bytes) glitch::video::CVirtualTexture::getSizeInBytes(unsigned char)const
// unsigned int glitch::video::CVirtualTexture::getSizeInBytes( glitch::video::CVirtualTexture *this, uint8_t a2);
// [0xe2e6a0] (9959 bytes) glitch::video::pixel_format::convert(glitch::video::E_PIXEL_FORMAT,void const*,unsigned int,glitch::video::E_PIXEL_FORMAT,void *,unsigned int,unsigned int,unsigned int,bool,glitch::video::pixel_format::E_ROTATION)
// int glitch::video::pixel_format::convert( int a1, char *src, unsigned int a3, int a4, char *a5, unsigned int a6, int a7, int a8, char a9, int a10);
// [0xe31030] (21 bytes) glitch::video::CImageWriterJPG::writeImage(glitch::io::IWriteFile *,boost::intrusive_ptr<glitch::video::CImage> const&,unsigned int)const
// int glitch::video::CImageWriterJPG::writeImage(int a1, int a2, int *a3, int a4);
// [0xe31a30] (1280 bytes) glitch::video::CImageWriterPNG::writeImage(glitch::io::IWriteFile *,boost::intrusive_ptr<glitch::video::CImage> const&,unsigned int)const
// int glitch::video::CImageWriterPNG::writeImage(int a1, int a2, int *a3);
// [0xe31f30] (457 bytes) glitch::video::pixel_format::swapBytes(glitch::video::E_PIXEL_FORMAT,void const*,unsigned int,bool,void *)
// int glitch::video::pixel_format::swapBytes(int a1, unsigned int a2, int a3, char a4, unsigned int a5);
// [0xe32100] (900 bytes) glitch::video::pixel_format::unpackPalettized(void const*,unsigned int,unsigned char,glitch::video::E_PIXEL_FORMAT,void const*,void *,unsigned int,unsigned int,unsigned int,bool)
// int glitch::video::pixel_format::unpackPalettized( uint8_t *a1, int a2, uint8_t a3, int a4, int a5, uint8_t *a6, int a7, int a8, int a9, char a10);
// [0xe32490] (124 bytes) glitch::video::pixel_format::twiddleUV(unsigned int,unsigned int,unsigned int,unsigned int)
// int glitch::video::pixel_format::twiddleUV( glitch::video::pixel_format *this, glitch::video::pixel_format *a2, unsigned int a3, unsigned int a4);
// [0xe32510] (459 bytes) glitch::video::pixel_format::copyTwiddling(glitch::video::E_PIXEL_FORMAT,void const*,glitch::core::dimension2d<int>,glitch::core::rect<int>,void *,glitch::core::dimension2d<int>,glitch::core::vector2d<int>)
// unsigned int glitch::video::pixel_format::copyTwiddling( int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5, int a6, unsigned int a7, unsigned int a8, unsigned int *a9);
// [0xe326e0] (691 bytes) glitch::video::pixel_format::copy(void const*,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::core::dimension2d<int> const&,void *,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::core::dimension2d<int> const&,glitch::core::vector2d<int> const&,glitch::core::rect<int> const&,glitch::core::rect<int> const*)
// signed int glitch::video::pixel_format::copy( int a1, int a2, unsigned int a3, unsigned int *a4, int a5, int a6, unsigned int a7, unsigned int *a8, signed int *a9, unsigned int *a10, signed int *a11);
// [0xe329a0] (143 bytes) glitch::video::pixel_format::copy(void const*,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::core::dimension2d<int> const&,void *,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::core::dimension2d<int> const&,glitch::core::vector2d<int> const&)
// signed int glitch::video::pixel_format::copy( int a1, int a2, unsigned int a3, unsigned int *a4, int a5, int a6, unsigned int a7, unsigned int *a8, signed int *a9);
// [0xe32a30] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe32a50] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_LAYOUT *)
// char **glitch::video::getStringsInternal();
// [0xe32a70] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_CUBE_MAP_FACE *)
// char **glitch::video::getStringsInternal();
// [0xe32a90] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_FILTER_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe32ab0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_TEXTURE_CLAMP *)
// char **glitch::video::getStringsInternal();
// [0xe32ad0] (150 bytes) glitch::video::ITexture::SSharedState::SSharedState(glitch::video::IVideoDriver *)
// struct glitch::video::ITexture::SSharedState *glitch::video::ITexture::SSharedState::SSharedState( glitch::video::ITexture::SSharedState *this, glitch::video::IVideoDriver *a2);
// [0xe32b70] (438 bytes) glitch::video::ITexture::ITexture(char const*,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::dimension2d<int>,unsigned int)
// int glitch::video::ITexture::ITexture(uint32_t *a1, char *s, int *a3, int a4, int a5, int a6);
// [0xe32d30] (149 bytes) glitch::video::CVirtualTexture::CVirtualTexture(char const*,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::core::vector3d<int>,glitch::core::dimension2d<int>,unsigned int)
// int glitch::video::CVirtualTexture::CVirtualTexture( uint32_t *a1, char *a2, int *a3, uint32_t *a4, int a5, int a6, int a7);
// [0xe32dd0] (170 bytes) glitch::video::ITexture::copy(void)
// int glitch::video::ITexture::copy(glitch::video::ITexture *this);
// [0xe32e80] (40 bytes) glitch::video::ITexture::isPowerOfTwo(void)const
// bool glitch::video::ITexture::isPowerOfTwo(glitch::video::ITexture *this);
// [0xe32eb0] (146 bytes) glitch::video::ITexture::computeSizeInBytes(void)const
// unsigned int glitch::video::ITexture::computeSizeInBytes(glitch::video::ITexture *this);
// [0xe32f50] (34 bytes) glitch::video::ITexture::getSizeInBytes(void)const
// unsigned int glitch::video::ITexture::getSizeInBytes(glitch::video::ITexture *this);
// [0xe32f80] (152 bytes) glitch::video::ITexture::setDataDirty(unsigned char,bool)const
// int glitch::video::ITexture::setDataDirty(glitch::video::ITexture *this, uint8_t a2, bool a3);
// [0xe33020] (355 bytes) glitch::video::ITexture::setDataDirty(bool)const
// int glitch::video::ITexture::setDataDirty(glitch::video::ITexture *this, bool a2);
// [0xe33190] (128 bytes) glitch::video::ITexture::setDataDirty(glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char,bool)const
// int glitch::video::ITexture::setDataDirty(uint32_t *a1, int a2, uint8_t a3, uint8_t a4);
// [0xe33210] (97 bytes) glitch::video::ITexture::unbind(unsigned int,unsigned int)
// int glitch::video::ITexture::unbind(glitch::video::ITexture *this, unsigned int a2, unsigned int a3);
// [0xe332c0] (110 bytes) glitch::video::CTextureManager::unloadTexturesMarkedAsUnloadable(void)
// int glitch::video::CTextureManager::unloadTexturesMarkedAsUnloadable(pthread_mutex_t **this);
// [0xe33330] (236 bytes) glitch::video::CTextureManager::clearDriverSpecificResources(void)
// uint32_t *glitch::video::CTextureManager::clearDriverSpecificResources(glitch::video::CTextureManager *this);
// [0xe33420] (101 bytes) glitch::video::ITexture::unmap(void)const
// uint8_t *glitch::video::ITexture::unmap(glitch::video::ITexture *this);
// [0xe334c0] (42 bytes) glitch::video::CVirtualTexture::unmapImpl(void)const
// uint8_t *glitch::video::CVirtualTexture::unmapImpl(glitch::video::CVirtualTexture *this);
// [0xe33e40] (97 bytes) glitch::video::ITexture::setMinFilter(glitch::video::E_TEXTURE_FILTER_TYPE)
// int glitch::video::ITexture::setMinFilter(int a1, int a2);
// [0xe33eb0] (620 bytes) glitch::video::ITexture::setData(void *,bool,bool)
// const char *glitch::video::ITexture::setData(glitch::video::ITexture *this, void *a2, bool a3, bool a4);
// [0xe34120] (74 bytes) glitch::video::ITexture::setMagFilter(glitch::video::E_TEXTURE_FILTER_TYPE)
// int glitch::video::ITexture::setMagFilter(int a1, int a2);
// [0xe34170] (241 bytes) glitch::video::ITexture::setWrap(glitch::video::E_TEXTURE_COORD,glitch::video::E_TEXTURE_CLAMP)
// uint32_t *glitch::video::ITexture::setWrap(glitch::video::ITexture *a1, char a2, int a3);
// [0xe34270] (89 bytes) glitch::video::ITexture::setCompareRToTexture(bool)
// int glitch::video::ITexture::setCompareRToTexture(glitch::video::ITexture *this, bool a2);
// [0xe342d0] (69 bytes) glitch::video::ITexture::setCompareMode(glitch::video::E_COMPARE_FUNC)
// int glitch::video::ITexture::setCompareMode(int a1, int a2);
// [0xe34320] (53 bytes) glitch::video::ITexture::setAnisotropy(float)
// glitch::video::ITexture *glitch::video::ITexture::setAnisotropy(glitch::video::ITexture **this, float a2);
// [0xe34360] (34 bytes) glitch::video::ITexture::setLODBias(float)
// glitch::video::ITexture *glitch::video::ITexture::setLODBias(glitch::video::ITexture **this, float a2);
// [0xe34390] (34 bytes) glitch::video::ITexture::setMinLOD(float)
// glitch::video::ITexture *glitch::video::ITexture::setMinLOD(glitch::video::ITexture **this, float a2);
// [0xe343c0] (34 bytes) glitch::video::ITexture::setMaxLOD(float)
// glitch::video::ITexture *glitch::video::ITexture::setMaxLOD(glitch::video::ITexture **this, float a2);
// [0xe343f0] (234 bytes) glitch::video::ITexture::copyParametersFrom(boost::intrusive_ptr<glitch::video::ITexture> const&)
// uint32_t *glitch::video::ITexture::copyParametersFrom(glitch::video::ITexture **a1, int a2);
// [0xe344e0] (1339 bytes) glitch::video::ITexture::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::video::ITexture::serializeAttributes(int a1, int a2);
// [0xe34a20] (548 bytes) glitch::video::ITexture::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::video::ITexture::deserializeAttributes(glitch::video::ITexture *a1, int a2);
// [0xe34c50] (109 bytes) glitch::video::ITexture::fillTextureDesc(glitch::video::STextureDesc &)const
// int glitch::video::ITexture::fillTextureDesc(uint32_t *a1, int a2);
// [0xe34cc0] (480 bytes) glitch::video::IImageWriter::writeTexture(glitch::io::IWriteFile *,boost::intrusive_ptr<glitch::video::ITexture> const&,unsigned int)const
// int glitch::video::IImageWriter::writeTexture( glitch::video::IImageWriter *this, glitch::io::IWriteFile *a2, const boost::intrusive_ptr<glitch::video::ITexture> *a3);
// [0xe34ea0] (498 bytes) glitch::video::CImage::initData(bool)
// int glitch::video::CImage::initData(glitch::video::CImage *this, bool a2);
// [0xe350a0] (595 bytes) glitch::video::CImage::CImage(glitch::video::E_PIXEL_FORMAT,glitch::core::dimension2d<int> const&,void *,void **,bool,bool)
// unsigned int glitch::video::CImage::CImage( glitch::video::CImage *a1, int a2, uint32_t *a3, void *src, int a5, char a6, char a7);
// [0xe35300] (220 bytes) glitch::video::CImage::CImage(glitch::video::E_PIXEL_FORMAT,glitch::core::dimension2d<int> const&,void *,bool,bool)
// void *glitch::video::CImage::CImage(glitch::video::CImage *a1, int a2, uint32_t *a3, void *src, char a5, char a6);
// [0xe353e0] (161 bytes) glitch::video::CTextureManager::createImageFromData(glitch::video::E_PIXEL_FORMAT,glitch::core::dimension2d<int> const&,void *,bool,bool)
// volatile int32_t **glitch::video::CTextureManager::createImageFromData( volatile int32_t **a1, int a2, int a3, uint32_t *a4, void *a5, char a6, char a7);
// [0xe35490] (746 bytes) glitch::video::CImageLoaderJPG::loadImage(glitch::io::IReadFile *)const
// 0xe35490 glitch::video::CImageLoaderJPG::loadImage(glitch::io::IReadFile *)const
// [0xe35780] (150 bytes) glitch::video::CImage::CImage(glitch::video::E_PIXEL_FORMAT,glitch::core::dimension2d<int> const&,bool)
// int glitch::video::CImage::CImage(int a1, int a2, uint32_t *a3, char a4);
// [0xe35820] (147 bytes) glitch::video::CImage::CImage(glitch::video::E_PIXEL_FORMAT,glitch::core::dimension2d<int> const&)
// int glitch::video::CImage::CImage(int a1, int a2, uint32_t *a3);
// [0xe358c0] (109 bytes) glitch::video::CTextureManager::createImage(glitch::video::E_PIXEL_FORMAT,glitch::core::dimension2d<int> const&)
// int *glitch::video::CTextureManager::createImage(int *a1, int a2, int a3, uint32_t *a4);
// [0xe35930] (964 bytes) glitch::video::CImageLoaderTGA::loadImage(glitch::io::IReadFile *)const
// 0xe35930 glitch::video::CImageLoaderTGA::loadImage(glitch::io::IReadFile *)const
// [0xe35d00] (1531 bytes) glitch::video::CImageLoaderPng::loadImage(glitch::io::IReadFile *)const
// 0xe35d00 glitch::video::CImageLoaderPng::loadImage(glitch::io::IReadFile *)const
// [0xe36300] (384 bytes) glitch::video::CImage::CImage(glitch::video::E_PIXEL_FORMAT,glitch::core::dimension2d<int> const&,void *,unsigned int,unsigned int,bool,bool)
// int glitch::video::CImage::CImage( glitch::video::CImage *a1, int a2, uint32_t *a3, void *src, size_t n, int a6, char a7, char a8);
// [0xe36480] (816 bytes) glitch::video::CImageLoaderPVR::loadImage(glitch::io::IReadFile *)const
// 0xe36480 glitch::video::CImageLoaderPVR::loadImage(glitch::io::IReadFile *)const
// [0xe367b0] (700 bytes) glitch::video::CImageLoaderDDS::loadImage(glitch::io::IReadFile *)const
// 0xe367b0 glitch::video::CImageLoaderDDS::loadImage(glitch::io::IReadFile *)const
// [0xe36a70] (386 bytes) glitch::video::CImage::CImage(glitch::video::E_PIXEL_FORMAT,boost::intrusive_ptr<glitch::video::CImage> const&)
// void glitch::video::CImage::CImage(glitch::video::CImage *a1, int a2, int *a3);
// [0xe36c00] (109 bytes) glitch::video::CTextureManager::createImage(glitch::video::E_PIXEL_FORMAT,boost::intrusive_ptr<glitch::video::CImage> const&)
// volatile int32_t **glitch::video::CTextureManager::createImage( volatile int32_t **a1, int a2, int a3, int *a4);
// [0xe36c70] (315 bytes) glitch::video::CImage::CImage(boost::intrusive_ptr<glitch::video::CImage> const&,glitch::core::vector2d<int> const&,glitch::core::dimension2d<int> const&)
// int glitch::video::CImage::CImage(glitch::video::CImage *a1, int a2, uint32_t *a3, int *a4);
// [0xe36db0] (117 bytes) glitch::video::CTextureManager::createImage(boost::intrusive_ptr<glitch::video::CImage> const&,glitch::core::vector2d<int> const&,glitch::core::dimension2d<int> const&)
// volatile int32_t **glitch::video::CTextureManager::createImage( volatile int32_t **a1, int a2, int a3, uint32_t *a4, int *a5);
// [0xe36e30] (72 bytes) glitch::video::CImage::getDimension(unsigned int)const
// glitch::video::CImage *glitch::video::CImage::getDimension( glitch::video::CImage *this, unsigned int a2, char a3);
// [0xe36e80] (443 bytes) glitch::video::CImage::setPixel(unsigned int,unsigned int,glitch::video::SColor const&)
// int glitch::video::CImage::setPixel(uint32_t *a1, unsigned int a2, unsigned int a3, uint8_t *a4);
// [0xe37040] (541 bytes) glitch::video::CImage::getPixel(unsigned int,unsigned int)const
// glitch::video::CImage *glitch::video::CImage::getPixel( glitch::video::CImage *this, uint32_t *a2, unsigned int a3, unsigned int a4);
// [0xe37260] (1255 bytes) glitch::video::CImage::copyToWithAlpha(boost::intrusive_ptr<glitch::video::CImage> const&,glitch::core::vector2d<int> const&,glitch::core::rect<int> const&,glitch::video::SColor const&,glitch::core::rect<int> const*)
// int glitch::video::CImage::copyToWithAlpha(uint32_t *a1, int a2, int *a3, int *a4, char *a5, int *a6);
// [0xe37750] (556 bytes) glitch::video::CImage::copyToWithBlockTwiddling(boost::intrusive_ptr<glitch::video::CImage> const&,glitch::core::vector2d<int> const&,glitch::core::rect<int> const&,unsigned int)
// unsigned int glitch::video::CImage::copyToWithBlockTwiddling( uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5);
// [0xe37980] (803 bytes) glitch::video::CImage::copyTo(boost::intrusive_ptr<glitch::video::CImage> const&,glitch::core::vector2d<int> const&,glitch::core::rect<int> const&,glitch::core::rect<int> const*,unsigned int)
// signed int glitch::video::CImage::copyTo( uint32_t *a1, unsigned int *a2, int *a3, int *a4, signed int *a5, unsigned int a6);
// [0xe37cb0] (104 bytes) glitch::video::CImage::copyTo(boost::intrusive_ptr<glitch::video::CImage> const&,glitch::core::vector2d<int> const&,unsigned int)
// signed int glitch::video::CImage::copyTo(uint32_t *a1, unsigned int *a2, int *a3, unsigned int a4);
// [0xe37d20] (577 bytes) glitch::video::CImage::fill(glitch::video::SColor const&)
// int glitch::video::CImage::fill(uint32_t *a1, uint8_t *a2);
// [0xe37f70] (34 bytes) glitch::video::CImageLoaderDDS::CImageLoaderDDS(void)
// glitch::video::CImageLoaderDDS *glitch::video::CImageLoaderDDS::CImageLoaderDDS( glitch::video::CImageLoaderDDS *this);
// [0xe37fa0] (68 bytes) glitch::video::createImageLoaderDDS(void)
// glitch::video::CImageLoaderDDS *glitch::video::createImageLoaderDDS();
// [0xe37ff0] (34 bytes) glitch::video::CImageLoaderJPG::CImageLoaderJPG(void)
// glitch::video::CImageLoaderJPG *glitch::video::CImageLoaderJPG::CImageLoaderJPG( glitch::video::CImageLoaderJPG *this);
// [0xe38020] (68 bytes) glitch::video::createImageLoaderJPG(void)
// glitch::video::CImageLoaderJPG *glitch::video::createImageLoaderJPG();
// [0xe38070] (34 bytes) glitch::video::CImageLoaderKTX::CImageLoaderKTX(void)
// glitch::video::CImageLoaderKTX *glitch::video::CImageLoaderKTX::CImageLoaderKTX( glitch::video::CImageLoaderKTX *this);
// [0xe380a0] (68 bytes) glitch::video::createImageLoaderKTX(void)
// glitch::video::CImageLoaderKTX *glitch::video::createImageLoaderKTX();
// [0xe380f0] (34 bytes) glitch::video::CImageLoaderPng::CImageLoaderPng(void)
// glitch::video::CImageLoaderPng *glitch::video::CImageLoaderPng::CImageLoaderPng( glitch::video::CImageLoaderPng *this);
// [0xe38120] (68 bytes) glitch::video::createImageLoaderPNG(void)
// glitch::video::CImageLoaderPng *glitch::video::createImageLoaderPNG();
// [0xe38170] (34 bytes) glitch::video::CImageLoaderPVR::CImageLoaderPVR(void)
// glitch::video::CImageLoaderPVR *glitch::video::CImageLoaderPVR::CImageLoaderPVR( glitch::video::CImageLoaderPVR *this);
// [0xe381a0] (68 bytes) glitch::video::createImageLoaderPVR(void)
// glitch::video::CImageLoaderPVR *glitch::video::createImageLoaderPVR();
// [0xe381f0] (60 bytes) glitch::video::createImageLoaderTGA(void)
// uint32_t *glitch::video::createImageLoaderTGA();
// [0xe38230] (34 bytes) glitch::video::CImageWriterDDS::CImageWriterDDS(void)
// glitch::video::CImageWriterDDS *glitch::video::CImageWriterDDS::CImageWriterDDS( glitch::video::CImageWriterDDS *this);
// [0xe38260] (68 bytes) glitch::video::createImageWriterDDS(void)
// glitch::video::CImageWriterDDS *glitch::video::createImageWriterDDS();
// [0xe382b0] (34 bytes) glitch::video::CImageWriterJPG::CImageWriterJPG(void)
// glitch::video::CImageWriterJPG *glitch::video::CImageWriterJPG::CImageWriterJPG( glitch::video::CImageWriterJPG *this);
// [0xe382e0] (68 bytes) glitch::video::createImageWriterJPG(void)
// glitch::video::CImageWriterJPG *glitch::video::createImageWriterJPG();
// [0xe38330] (34 bytes) glitch::video::CImageWriterKTX::CImageWriterKTX(void)
// glitch::video::CImageWriterKTX *glitch::video::CImageWriterKTX::CImageWriterKTX( glitch::video::CImageWriterKTX *this);
// [0xe38360] (68 bytes) glitch::video::createImageWriterKTX(void)
// glitch::video::CImageWriterKTX *glitch::video::createImageWriterKTX();
// [0xe383b0] (34 bytes) glitch::video::CImageWriterPNG::CImageWriterPNG(void)
// glitch::video::CImageWriterPNG *glitch::video::CImageWriterPNG::CImageWriterPNG( glitch::video::CImageWriterPNG *this);
// [0xe383e0] (68 bytes) glitch::video::createImageWriterPNG(void)
// glitch::video::CImageWriterPNG *glitch::video::createImageWriterPNG();
// [0xe38430] (34 bytes) glitch::video::CImageWriterPVR::CImageWriterPVR(void)
// glitch::video::CImageWriterPVR *glitch::video::CImageWriterPVR::CImageWriterPVR( glitch::video::CImageWriterPVR *this);
// [0xe38460] (68 bytes) glitch::video::createImageWriterPVR(void)
// glitch::video::CImageWriterPVR *glitch::video::createImageWriterPVR();
// [0xe384b0] (111 bytes) glitch::video::IImageLoader::IDataReader::IDataReader(glitch::io::IReadFile *,glitch::core::dimension2d<int> const&,unsigned int,bool,bool,bool)
// int glitch::video::IImageLoader::IDataReader::IDataReader( int a1, int a2, uint32_t *a3, int a4, char a5, char a6, uint8_t a7);
// [0xe38520] (252 bytes) glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::CPackedContiguousMipmapChainDataReader(glitch::io::IReadFile *,glitch::video::STextureDesc const&,bool,bool)
// int glitch::video::IImageLoader::CPackedContiguousMipmapChainDataReader::CPackedContiguousMipmapChainDataReader( int a1, int a2, int a3, char a4, char a5);
// [0xe38620] (2376 bytes) glitch::video::IImageLoader::loadData(glitch::video::IImageLoader::IDataReader &,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)
// 0xe38620 glitch::video::IImageLoader::loadData(glitch::video::IImageLoader::IDataReader &,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)
// [0xe38f70] (680 bytes) glitch::video::CImageLoaderTGA::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// 0xe38f70 glitch::video::CImageLoaderTGA::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// [0xe39220] (411 bytes) glitch::video::CImageLoaderPVR::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// 0xe39220 glitch::video::CImageLoaderPVR::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// [0xe393c0] (1061 bytes) glitch::video::CImageLoaderPng::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// 0xe393c0 glitch::video::CImageLoaderPng::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// [0xe397f0] (408 bytes) glitch::video::CImageLoaderKTX::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// int glitch::video::CImageLoaderKTX::loadTextureData(int a1, int a2, uint32_t *a3, int a4);
// [0xe39990] (434 bytes) glitch::video::CImageLoaderJPG::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// 0xe39990 glitch::video::CImageLoaderJPG::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// [0xe39b50] (223 bytes) glitch::video::CImageLoaderDDS::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// 0xe39b50 glitch::video::CImageLoaderDDS::loadTextureData(glitch::io::IReadFile *,glitch::video::STextureDesc const&,boost::intrusive_ptr<glitch::video::ITexture> const&)const
// [0xe39c30] (733 bytes) glitch::video::guessShaderParameterType(char const*,bool)
// int glitch::video::guessShaderParameterType(glitch::video *this, const char *a2);
// [0xe39f10] (388 bytes) glitch::video::CMaterialRendererManager::SCreationContext::bindGlobalParameter(unsigned short,glitch::video::E_SHADER_PARAMETER_TYPE,glitch::video::CMaterialRendererManager::STemporaryID,unsigned char,unsigned short,glitch::video::E_SHADER_STAGE)
// int glitch::video::CMaterialRendererManager::SCreationContext::bindGlobalParameter( int *a1, uint16_t a2, int a3, int a4, uint8_t a5, int16_t a6, int a7);
// [0xe3a0a0] (388 bytes) glitch::video::CMaterialRendererManager::SCreationContext::bindGlobalParameter(unsigned short,glitch::video::CMaterialRendererManager::STemporaryID,unsigned char,unsigned short,glitch::video::E_SHADER_STAGE)
// int glitch::video::CMaterialRendererManager::SCreationContext::bindGlobalParameter( int *a1, uint16_t a2, int a3, uint8_t a4, uint16_t a5, int a6);
// [0xe3a230] (214 bytes) glitch::video::CMaterialRendererManager::SCreationContext::bindParameter(glitch::video::CMaterialRendererManager::STemporaryID,glitch::video::E_SHADER_PARAMETER_TYPE,glitch::video::CMaterialRendererManager::STemporaryID,unsigned char,unsigned short,glitch::video::E_SHADER_STAGE)
// int glitch::video::CMaterialRendererManager::SCreationContext::bindParameter( int *a1, int a2, int a3, int a4, uint8_t a5, int16_t a6, int a7);
// [0xe3a310] (1298 bytes) glitch::video::CMaterialRendererManager::SCreationContext::endTechnique(bool,unsigned short)
// glitch::video::CMaterialRendererManager::SCreationContext *glitch::video::CMaterialRendererManager::SCreationContext::endTechnique( glitch::video::CMaterialRendererManager::SCreationContext *this, int *a2, uint16_t a3, uint16_t a4);
// [0xe3a830] (169 bytes) glitch::video::getShaderParameterValueType(glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,unsigned int)
// char glitch::video::getShaderParameterValueType(int a1, unsigned int a2);
// [0xe3a8e0] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_SHADER_STAGE *)
// char **glitch::video::getStringsInternal();
// [0xe3a900] (22 bytes) glitch::video::getStringsInternal(glitch::video::E_SHADER_TYPE *)
// char **glitch::video::getStringsInternal();
// [0xe3a920] (36 bytes) glitch::video::isValidShaderType(glitch::video::E_SHADER_TYPE)
// int glitch::video::isValidShaderType(int a1);
// [0xe3a950] (238 bytes) glitch::video::ICodeShaderManager::makeShaderCodeName(char const*,unsigned int,char const*,unsigned int,char const*,unsigned int,unsigned int *)const
// char *glitch::video::ICodeShaderManager::makeShaderCodeName( glitch::video::ICodeShaderManager *this, char *a2, unsigned int a3, char *a4, unsigned int a5, char *a6, unsigned int a7, unsigned int *a8);
// [0xe3aa40] (195 bytes) glitch::video::ICodeShaderManager::makeShaderCodeName(char const*,char const*,char const*,unsigned int *)const
// char *glitch::video::ICodeShaderManager::makeShaderCodeName( glitch::video::ICodeShaderManager *this, char *a2, char *s, char *a4, unsigned int *a5);
// [0xe3ab10] (267 bytes) glitch::video::ICodeShaderManager::makeShaderFileMapkey(char const*,unsigned int,glitch::video::E_SHADER_TYPE,char const*,unsigned int,char const*,unsigned int,unsigned int *)const
// char *glitch::video::ICodeShaderManager::makeShaderFileMapkey( int a1, int a2, int a3, unsigned int a4, void *a5, int a6, void *a7, int a8, size_t *a9);
// [0xe3ac20] (203 bytes) glitch::video::ICodeShaderManager::makeShaderFileMapkey(char const*,glitch::video::E_SHADER_TYPE,char const*,char const*,unsigned int *)const
// char *glitch::video::ICodeShaderManager::makeShaderFileMapkey( int a1, char *a2, unsigned int a3, char *s, char *a5, size_t *a6);
// [0xe3acf0] (310 bytes) glitch::video::ICodeShaderManager::initAdditionalConfig(char const*)
// void glitch::video::ICodeShaderManager::initAdditionalConfig( glitch::video::ICodeShaderManager *this, const char *a2);
// [0xe3ae30] (133 bytes) glitch::video::ICodeShaderManager::getShaderInfo(char const*)const
// const char **glitch::video::ICodeShaderManager::getShaderInfo( glitch::video::ICodeShaderManager *this, char *s2);
// [0xe3aec0] (130 bytes) glitch::video::ICodeShaderManager::getShaderInfo(char const*,glitch::video::E_SHADER_TYPE,char const*,char const*)const
// const char **glitch::video::ICodeShaderManager::getShaderInfo( glitch::video::ICodeShaderManager *a1, char *a2, unsigned int a3, char *a4, char *a5);
// [0xe3af50] (154 bytes) glitch::video::ICodeShaderManager::getShaderInfo(char const*,unsigned int,glitch::video::E_SHADER_TYPE,char const*,unsigned int,char const*,unsigned int)const
// const char **glitch::video::ICodeShaderManager::getShaderInfo( glitch::video::ICodeShaderManager *a1, int a2, int a3, unsigned int a4, void *a5, int a6, void *a7, int a8);
// [0xe3aff0] (1441 bytes) glitch::video::ICodeShaderManager::initShaderInfo(char const*)
// const char *glitch::video::ICodeShaderManager::initShaderInfo( glitch::video::ICodeShaderManager *this, const char *a2);
// [0xe3b5a0] (478 bytes) glitch::video::IShader::IShader(unsigned short,char const*,glitch::video::IVideoDriver *)
// glitch::video::IShader *glitch::video::IShader::IShader( glitch::video::IShader *this, uint16_t a2, char *s, glitch::video::IVideoDriver *a4);
// [0xe3b780] (195 bytes) glitch::video::IShader::getParameterID(char const*,glitch::video::E_SHADER_STAGE,unsigned short)const
// int glitch::video::IShader::getParameterID( int a1, glitch::core::detail::SSharedStringHeapEntry::SData *a2, int a3, uint16_t a4);
// [0xe3b850] (96 bytes) glitch::video::IShader::getParameterID(glitch::video::E_SHADER_PARAMETER_TYPE,glitch::video::E_SHADER_STAGE,unsigned short)const
// int glitch::video::IShader::getParameterID(int a1, int a2, int a3, int a4);
// [0xe3b8b0] (129 bytes) glitch::video::IShader::init(void)
// int glitch::video::IShader::init(glitch::video::IShader *this);
// [0xe3b940] (676 bytes) glitch::video::CMaterialRendererManager::SCreationContext::addRenderPass(unsigned short,glitch::video::detail::renderpass::SRenderState const&,glitch::video::detail::material::SRenderState const&)
// int glitch::video::CMaterialRendererManager::SCreationContext::addRenderPass( glitch::video::CMaterialRendererManager::SCreationState **a1, uint16_t a2, uint32_t *a3, int a4);
// [0xe3bbf0] (122 bytes) glitch::video::CMaterialRendererManager::SCreationContext::createPinkWireFrameTechnique(char const*)
// glitch::video::CMaterialRendererManager::SCreationContext *glitch::video::CMaterialRendererManager::SCreationContext::createPinkWireFrameTechnique( glitch::video::CMaterialRendererManager::SCreationContext *this, glitch::video::CMaterialRendererManager::SCreationContext *a2, char *s);
// [0xe3bc70] (473 bytes) glitch::video::CMaterialRendererManager::SCreationContext::addRenderPass(boost::intrusive_ptr<glitch::video::IShader const> const&,glitch::video::detail::renderpass::SRenderState const&,glitch::video::detail::material::SRenderState const&)
// int glitch::video::CMaterialRendererManager::SCreationContext::addRenderPass( glitch::video::CMaterialRendererManager::SCreationState **a1, int *a2, uint32_t *a3, int a4);
// [0xe3be50] (86 bytes) glitch::video::IShader::getVertexAttributeDefIndex(glitch::video::E_VERTEX_ATTRIBUTE)const
// int glitch::video::IShader::getVertexAttributeDefIndex(int a1, int a2);
// [0xe3beb0] (296 bytes) glitch::video::IShader::getBatchBaker(void)const
// glitch::video::IShader *glitch::video::IShader::getBatchBaker(glitch::video::IShader *this, int a2);
// [0xe3bfe0] (154 bytes) glitch::video::IShader::removeBatchBaker(void)const
// unsigned int glitch::video::IShader::removeBatchBaker(glitch::video::IShader *this);
// [0xe3c080] (363 bytes) glitch::video::IShaderCode::IShaderCode(char const*)
// glitch::video::IShaderCode *glitch::video::IShaderCode::IShaderCode(glitch::video::IShaderCode *this, char *s);
// [0xe3c1f0] (501 bytes) glitch::video::IShaderManager::serializeShader(boost::intrusive_ptr<glitch::video::IShader> const&,char const*)
// int glitch::video::IShaderManager::serializeShader( glitch::video::IShaderManager *this, const boost::intrusive_ptr<glitch::video::IShader> *a2, const char *a3);
// [0xe3c3f0] (2383 bytes) glitch::video::IShaderManager::addShaderSearchPath(char const*,bool)
// char *glitch::video::IShaderManager::addShaderSearchPath(glitch::video::IShaderManager *this, char *s, bool a3);
// [0xe3cd40] (144 bytes) glitch::video::CMaterialRendererManager::SCreationContext::addRenderPass(char const*,glitch::video::detail::renderpass::SRenderState const&,glitch::video::detail::material::SRenderState const&)
// int glitch::video::CMaterialRendererManager::SCreationContext::addRenderPass( glitch::video::CMaterialRendererManager::SCreationState **a1, char *a2, uint32_t *a3, int a4);
// [0xe3cdd0] (2360 bytes) glitch::video::CImage::copyToScaling(void *,unsigned int,unsigned int,glitch::video::E_PIXEL_FORMAT,unsigned int,int)
// void glitch::video::CImage::copyToScaling( int a1, char *a2, unsigned int a3, unsigned int a4, int a5, int a6, int a7);
// [0xe3d710] (171 bytes) glitch::video::CImage::copyToScaling(boost::intrusive_ptr<glitch::video::CImage> const&,int)
// void glitch::video::CImage::copyToScaling(uint32_t *a1, unsigned int *a2, int a3);
// [0xe3d7c0] (50 bytes) glitch::video::CImage::copyToScalingBoxFilter(boost::intrusive_ptr<glitch::video::CImage> const&,int)
// void glitch::video::CImage::copyToScalingBoxFilter(uint32_t *a1, unsigned int *a2, int a3);
// [0xe3d800] (2441 bytes) glitch::video::pixel_format::convertScaling(void const*,unsigned int,unsigned int,glitch::video::E_PIXEL_FORMAT,unsigned int,void *,unsigned int,unsigned int,glitch::video::E_PIXEL_FORMAT,unsigned int,int)
// void glitch::video::pixel_format::convertScaling( char *src, unsigned int a2, unsigned int a3, int a4, unsigned int a5, char *a6, unsigned int a7, unsigned int a8, int a9, int a10, int a11);
// [0xe3e190] (505 bytes) glitch::video::pixel_format::copyScaling(void const*,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::core::dimension2d<int> const&,void *,glitch::video::E_PIXEL_FORMAT,unsigned int,glitch::core::dimension2d<int> const&,glitch::core::vector2d<int> const&,glitch::core::dimension2d<int> const&,glitch::core::rect<int> const&,glitch::core::rect<int> const*)
// void glitch::video::pixel_format::copyScaling( int a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, int *a8, int *a9, signed int *a10, uint32_t *a11, int *a12);
// [0xe3e390] (152 bytes) glitch::video::ICodeShaderManager::getShaderCode(char const*)const
// glitch::video::ICodeShaderManager *glitch::video::ICodeShaderManager::getShaderCode( glitch::video::ICodeShaderManager *this, const char *a2, char *a3);
// [0xe3e430] (63 bytes) glitch::video::CGlobalMaterialParameterManager::~CGlobalMaterialParameterManager()
// void glitch::video::CGlobalMaterialParameterManager::~CGlobalMaterialParameterManager( glitch::video::CGlobalMaterialParameterManager *this);
// [0xe3e470] (96 bytes) glitch::video::CGlobalMaterialParameterManager::CGlobalMaterialParameterManager(glitch::video::IVideoDriver *)
// glitch::video::CGlobalMaterialParameterManager *glitch::video::CGlobalMaterialParameterManager::CGlobalMaterialParameterManager( glitch::video::CGlobalMaterialParameterManager *this, glitch::video::IVideoDriver *a2);
// [0xe3e4d0] (63 bytes) glitch::video::CLookupTableManager::CLookupTableManager(glitch::video::IVideoDriver *)
// struct glitch::video::CLookupTableManager *glitch::video::CLookupTableManager::CLookupTableManager( glitch::video::CLookupTableManager *this, glitch::video::IVideoDriver *a2);
// [0xe3e510] (153 bytes) glitch::video::CMaterialRendererManager::CMaterialRendererManager(void)
// glitch::video::CMaterialRendererManager *glitch::video::CMaterialRendererManager::CMaterialRendererManager( glitch::video::CMaterialRendererManager *this);
// [0xe3e5b0] (34 bytes) glitch::video::ICodeShaderManager::CShaderCodeManager::~CShaderCodeManager()
// void glitch::video::ICodeShaderManager::CShaderCodeManager::~CShaderCodeManager( glitch::video::ICodeShaderManager::CShaderCodeManager *this);
// [0xe3e5e0] (42 bytes) glitch::video::ICodeShaderManager::CShaderCodeManager::CShaderCodeManager(void)
// glitch::video::ICodeShaderManager::CShaderCodeManager *glitch::video::ICodeShaderManager::CShaderCodeManager::CShaderCodeManager( glitch::video::ICodeShaderManager::CShaderCodeManager *this);
// [0xe3e610] (171 bytes) glitch::video::IShaderManager::~IShaderManager()
// void glitch::video::IShaderManager::~IShaderManager(glitch::video::IShaderManager *this);
// [0xe3e6c0] (56 bytes) glitch::video::IShaderManager::~IShaderManager()
// void glitch::video::IShaderManager::~IShaderManager(glitch::video::IShaderManager *this);
// [0xe3e700] (150 bytes) glitch::video::IShaderManager::IShaderManager(void)
// glitch::video::IShaderManager *glitch::video::IShaderManager::IShaderManager( glitch::video::IShaderManager *this);
// [0xe3e7a0] (137 bytes) glitch::video::ICodeShaderManager::ICodeShaderManager(void)
// glitch::video::ICodeShaderManager *glitch::video::ICodeShaderManager::ICodeShaderManager( glitch::video::ICodeShaderManager *this);
// [0xe3e890] (356 bytes) glitch::video::CLight::CLight(glitch::video::STransformationSource **)
// int glitch::video::CLight::CLight(int a1, uint32_t *a2);
// [0xe3ea00] (100 bytes) glitch::video::CLight::allocate(glitch::video::STransformationSource **)
// volatile int32_t **glitch::video::CLight::allocate(volatile int32_t **a1, uint32_t *a2);
// [0xe3ea70] (372 bytes) glitch::video::CLight::CLight(glitch::video::CLight const&,glitch::video::STransformationSource **)
// unsigned int glitch::video::CLight::CLight(int a1, int a2, uint32_t *a3);
// [0xe3ebf0] (108 bytes) glitch::video::CLight::clone(glitch::video::STransformationSource **)const
// volatile int32_t **glitch::video::CLight::clone( volatile int32_t **a1, int a2, uint32_t *a3);
// [0xe3ec60] (750 bytes) glitch::video::CGlobalMaterialParameterManager::addParameter(char const*,glitch::video::E_SHADER_PARAMETER_TYPE,glitch::video::E_SHADER_PARAMETER_VALUE_TYPE,unsigned int,unsigned char)
// int glitch::video::CGlobalMaterialParameterManager::addParameter( int a1, glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef, unsigned short, false, glitch::video::detail::globalmaterialparametermanager::SPropeties, glitch::video::detail::globalmaterialparametermanager::SValueTraits, 1> *a2, char *a3, int a4, int a5, int a6, char a7);
// [0xe3ef50] (619 bytes) glitch::video::CMaterialRendererManager::SCreationContext::~SCreationContext()
// void glitch::video::CMaterialRendererManager::SCreationContext::~SCreationContext( glitch::video::CMaterialRendererManager::SCreationContext *this);
// [0xe3f1c0] (862 bytes) glitch::video::CMaterialRendererManager::beginMaterialRenderer(glitch::video::CMaterialRendererManager::SCreationContext &,glitch::video::IVideoDriver *,char const*,bool)
// int glitch::video::CMaterialRendererManager::beginMaterialRenderer( glitch::video::CMaterialRendererManager *this, glitch::video::CMaterialRendererManager::SCreationContext *a2, glitch::video::IVideoDriver *a3, char *s, bool a5);
// [0xe3f520] (101 bytes) glitch::video::CTextureManager::addExternalImageLoader(boost::intrusive_ptr<glitch::video::IImageLoader> const&)
// int glitch::video::CTextureManager::addExternalImageLoader(int a1, int *a2);
// [0xe3f590] (101 bytes) glitch::video::CTextureManager::addExternalImageWriter(boost::intrusive_ptr<glitch::video::IImageWriter> const&)
// int glitch::video::CTextureManager::addExternalImageWriter(int a1, int *a2);
// [0xe3f600] (1681 bytes) glitch::video::CTextureManager::CTextureManager(glitch::video::IVideoDriver *)
// glitch::video::CTextureManager *glitch::video::CTextureManager::CTextureManager( glitch::video::CTextureManager *this, glitch::video::IVideoDriver *a2);
// [0xe3fca0] (101 bytes) glitch::video::ICodeShaderManager::addShaderCode(boost::intrusive_ptr<glitch::video::IShaderCode> const&)
// int glitch::video::ICodeShaderManager::addShaderCode( glitch::video::ICodeShaderManager *this, const boost::intrusive_ptr<glitch::video::IShaderCode> *a2);
// [0xe3fd10] (106 bytes) glitch::video::ICodeShaderManager::~ICodeShaderManager()
// void glitch::video::ICodeShaderManager::~ICodeShaderManager(glitch::video::ICodeShaderManager *this);
// [0xe3fd80] (56 bytes) glitch::video::ICodeShaderManager::~ICodeShaderManager()
// void glitch::video::ICodeShaderManager::~ICodeShaderManager(glitch::video::ICodeShaderManager *this);
// [0xe3fdc0] (163 bytes) glitch::video::IShaderManager::addShader(char const*,boost::intrusive_ptr<glitch::video::IShader> const&)
// int glitch::video::IShaderManager::addShader( glitch::video::IShaderManager *this, char *s, const boost::intrusive_ptr<glitch::video::IShader> *a3);
// [0xe3fe70] (106 bytes) glitch::video::IShaderManager::addShader(boost::intrusive_ptr<glitch::video::IShader> const&)
// int glitch::video::IShaderManager::addShader( glitch::video::IShaderManager *this, const boost::intrusive_ptr<glitch::video::IShader> *a2);
// [0xe3fee0] (1769 bytes) glitch::video::CMaterialRendererManager::getUniqueName(char const*)const
// glitch::video::CMaterialRendererManager *glitch::video::CMaterialRendererManager::getUniqueName( glitch::video::CMaterialRendererManager *this, glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer>, unsigned short, false, glitch::video::detail::materialrenderermanager::SProperties, glitch::core::detail::sidedcollection::SValueTraits, 1> *a2, char *s);
// [0xe405d0] (143 bytes) glitch::video::IShaderManager::init(glitch::video::IVideoDriver *,bool)
// char *glitch::video::IShaderManager::init( glitch::video::IShaderManager *this, glitch::video::IVideoDriver *a2, bool a3);
// [0xe40660] (99 bytes) glitch::video::ITexture::setFile(char const*,long,long)
// int glitch::video::ITexture::setFile( std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **this, char *s, int a3, int a4);
// [0xe406d0] (2088 bytes) glitch::video::CAttenautionLookupTableGenerator::updateHashName(void)
// size_t glitch::video::CAttenautionLookupTableGenerator::updateHashName( glitch::video::CAttenautionLookupTableGenerator *this);
// [0xe40f00] (1256 bytes) glitch::video::CPowLookupTableGenerator::updateHashName(void)
// size_t glitch::video::CPowLookupTableGenerator::updateHashName(glitch::video::CPowLookupTableGenerator *this);
// [0xe413f0] (1256 bytes) glitch::video::CExp2LookupTableGenerator::updateHashName(void)
// size_t glitch::video::CExp2LookupTableGenerator::updateHashName(glitch::video::CExp2LookupTableGenerator *this);
// [0xe418e0] (1256 bytes) glitch::video::CExpLookupTableGenerator::updateHashName(void)
// size_t glitch::video::CExpLookupTableGenerator::updateHashName(glitch::video::CExpLookupTableGenerator *this);
// [0xe41dd0] (1672 bytes) glitch::video::CLinearLookupTableGenerator::updateHashName(void)
// size_t glitch::video::CLinearLookupTableGenerator::updateHashName( glitch::video::CLinearLookupTableGenerator *this);
// [0xe42460] (934 bytes) glitch::video::CTextureManager::renameTexture(boost::intrusive_ptr<glitch::video::ITexture> const&,char const*)
// int glitch::video::CTextureManager::renameTexture(uint32_t *a1, int *a2, char *s);
// [0xe42810] (189 bytes) glitch::video::CTextureManager::setTextureFileName(unsigned short,char const*)
// int glitch::video::CTextureManager::setTextureFileName( glitch::video::CTextureManager *this, uint16_t a2, char *s);
// [0xe42c20] (45 bytes) glitch::video::ICodeShaderManager::removeUnusedShaderCodes(void)
// int glitch::video::ICodeShaderManager::removeUnusedShaderCodes(glitch::video::ICodeShaderManager *this);
// [0xe42c50] (45 bytes) glitch::video::IShaderManager::removeUnusedShaders(void)
// int glitch::video::IShaderManager::removeUnusedShaders(glitch::video::IShaderManager *this);
// [0xe42c80] (68 bytes) glitch::video::ICodeShaderManager::removeUnusedShaders(void)
// int glitch::video::ICodeShaderManager::removeUnusedShaders(glitch::video::ICodeShaderManager *this);
// [0xe42cd0] (1017 bytes) glitch::video::CTextureManager::removeTexture(glitch::video::ITexture *)
// int glitch::video::CTextureManager::removeTexture( glitch::video::CTextureManager *this, glitch::video::ITexture *a2);
// [0xe430d0] (144 bytes) glitch::video::ITexture::removeFromTextureManager(void)const
// int glitch::video::ITexture::removeFromTextureManager(glitch::video::ITexture *this);
// [0xe43160] (64 bytes) glitch::video::CLookupTableManager::~CLookupTableManager()
// void glitch::video::CLookupTableManager::~CLookupTableManager(glitch::video::CLookupTableManager *this);
// [0xe431a0] (651 bytes) glitch::video::ITexture::map(glitch::video::E_BUFFER_MAP_ACCESS,glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char)
// int glitch::video::ITexture::map(volatile int32_t *a1, uint8_t a2, int a3, uint8_t a4);
// [0xe43430] (127 bytes) glitch::video::ITexture::SSharedState::~SSharedState()
// void glitch::video::ITexture::SSharedState::~SSharedState(glitch::video::ITexture::SSharedState *this);
// [0xe434b0] (200 bytes) glitch::video::ITexture::~ITexture()
// void glitch::video::ITexture::~ITexture(glitch::video::ITexture *this);
// [0xe43580] (56 bytes) glitch::video::ITexture::~ITexture()
// void glitch::video::ITexture::~ITexture(glitch::video::ITexture *this);
// [0xe435c0] (335 bytes) glitch::video::CTextureManager::addTexture(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::E_PIXEL_FORMAT,glitch::video::E_TEXTURE_LAYOUT,char const*,boost::intrusive_ptr<glitch::video::ITexture> const&)
// int glitch::video::CTextureManager::addTexture(char *a1, int *a2, int16_t a3, int16_t a4, char *s, int a6);
// [0xe43780] (453 bytes) glitch::video::CTextureManager::unloadTexture(boost::intrusive_ptr<glitch::video::ITexture> const&,bool)
// int glitch::video::CTextureManager::unloadTexture( glitch::video::CTextureManager *this, glitch::video::ITexture **a2, bool a3, glitch::video::ITexture *a4);
// [0xe43950] (495 bytes) glitch::video::CTextureMemoryPoolManager::clearSpace(unsigned int)
// bool glitch::video::CTextureMemoryPoolManager::clearSpace( glitch::video::CTextureManager **this, unsigned int a2);
// [0xe43b40] (45 bytes) glitch::video::CDefaultTexturePolicy::clearSpace(unsigned int)
// bool glitch::video::CDefaultTexturePolicy::clearSpace(glitch::video::CTextureManager ***this, unsigned int a2);
// [0xe43b70] (599 bytes) glitch::video::CTextureMemoryPoolManager::remove(glitch::video::ITexture *)
// int glitch::video::CTextureMemoryPoolManager::remove( glitch::video::CTextureMemoryPoolManager *this, glitch::video::ITexture *a2);
// [0xe43dd0] (45 bytes) glitch::video::CDefaultTexturePolicy::remove(glitch::video::ITexture *)
// int glitch::video::CDefaultTexturePolicy::remove( glitch::video::CTextureMemoryPoolManager **this, glitch::video::ITexture *a2);
// [0xe43e50] (599 bytes) glitch::video::CLookupTableManager::getLookupTable(boost::intrusive_ptr<glitch::video::ILookupTableGenerator>)
// int *glitch::video::CLookupTableManager::getLookupTable(int *a1, uint32_t *a2, const char ***a3);
// [0xe440b0] (98 bytes) glitch::video::IMultipleRenderTarget::SAttachment::~SAttachment()
// void glitch::video::IMultipleRenderTarget::SAttachment::~SAttachment(volatile int32_t **this);
// [0xe44120] (1446 bytes) glitch::video::IMultipleRenderTarget::setTarget(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE,glitch::video::E_PIXEL_FORMAT,glitch::core::dimension2d<int> const&,void *,unsigned char)
// volatile int32_t **glitch::video::IMultipleRenderTarget::setTarget( int *a1, int a2, int a3, uint32_t *a4, int a5, uint8_t a6);
// [0xe446d0] (70 bytes) glitch::video::IMultipleRenderTarget::SAttachment::operator=(glitch::video::IMultipleRenderTarget::SAttachment const&)
// volatile int32_t **glitch::video::IMultipleRenderTarget::SAttachment::operator=( volatile int32_t **this, const glitch::video::IMultipleRenderTarget::SAttachment *a2);
// [0xe44720] (591 bytes) glitch::video::IMultipleRenderTarget::setTargetInternal(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE,boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::E_TEXTURE_CUBE_MAP_FACE,unsigned char,unsigned char)
// int glitch::video::IMultipleRenderTarget::setTargetInternal( int a1, int a2, int *a3, int a4, uint8_t a5, uint8_t a6);
// [0xe44970] (587 bytes) glitch::video::IMultipleRenderTarget::setTargetInternal(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE,boost::intrusive_ptr<glitch::video::IRenderBuffer> const&,unsigned char,bool)
// int glitch::video::IMultipleRenderTarget::setTargetInternal( int a1, int a2, int *a3, uint8_t a4, char a5);
// [0xe44bc0] (310 bytes) glitch::video::IMultipleRenderTarget::removeTarget(glitch::video::IRenderTarget::E_ATTACHMENT_TYPE,unsigned char)
// int glitch::video::IMultipleRenderTarget::removeTarget(int a1, int a2, uint8_t a3);
// [0xe44d50] (93 bytes) glitch::video::CTextureManager::removeTexture(boost::intrusive_ptr<glitch::video::ITexture> &)
// unsigned int glitch::video::CTextureManager::removeTexture( glitch::video::CTextureManager *this, boost::intrusive_ptr<glitch::video::ITexture> *a2);
// [0xe44e10] (1071 bytes) glitch::video::CTextureManager::makeColorKeyTexture(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::SColor)const
// int glitch::video::CTextureManager::makeColorKeyTexture(int a1, glitch::video::ITexture **a2, unsigned int a3);
// [0xe45240] (1049 bytes) glitch::video::ITexture::init(glitch::video::STextureDesc const&)
// int glitch::video::ITexture::init(glitch::video::ITexture *a1, int a2);
// [0xe45660] (288 bytes) glitch::video::ITexture::recreate(glitch::video::STextureDesc const&)
// int glitch::video::ITexture::recreate(glitch::video::ITexture *a1, int a2, int a3);
// [0xe45780] (454 bytes) glitch::video::ITexture::ITexture(char const*,glitch::video::IVideoDriver *,glitch::video::STextureDesc const&)
// int glitch::video::ITexture::ITexture( glitch::video::ITexture *a1, char *s, glitch::video::IVideoDriver *a3, int a4);
