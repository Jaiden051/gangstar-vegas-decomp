#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_intrusive_ptr_glitch.h
// Library: glitch | Module: glitch_intrusive_ptr_glitch
// Binary Address Span: 0xcf1010 .. 0xf80210 (20 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcf1010] (62 bytes) boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData>::~intrusive_ptr()
// void boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData>::~intrusive_ptr( glitch::core::detail::SSharedStringHeapEntry::SData **this);
// [0xd36230] (5855 bytes) boost::intrusive_ptr<glitch::video::CMaterialRenderer> glitch::collada::createMaterialRendererForProfile<glitch::collada::SProfileGLES2Traits>(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,char const*,glitch::collada::SEffectList const&,glitch::collada::CRootSceneNode *,glitch::collada::CColladaFactory &)
// glitch::video::CMaterialRenderer **glitch::collada::createMaterialRendererForProfile<glitch::collada::SProfileGLES2Traits>( glitch::video::CMaterialRenderer **a1, int a2, glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef, unsigned short, false, glitch::video::detail::globalmaterialparametermanager::SPropeties, glitch::video::detail::globalmaterialparametermanager::SValueTraits, 1> **a3, char *a4, uint32_t *a5, int a6, int a7);
// [0xd37910] (4279 bytes) boost::intrusive_ptr<glitch::video::CMaterialRenderer> glitch::collada::createMaterialRendererForProfile<glitch::collada::SProfileNullTraits>(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,char const*,glitch::collada::SEffectList const&,glitch::collada::CRootSceneNode *,glitch::collada::CColladaFactory &)
// glitch::video::CMaterialRenderer **glitch::collada::createMaterialRendererForProfile<glitch::collada::SProfileNullTraits>( glitch::video::CMaterialRenderer **a1, int a2, glitch::video::CMaterialRendererManager **a3, char *a4, uint32_t *a5, int a6, char *a7);
// [0xd389d0] (85 bytes) boost::intrusive_ptr<glitch::scene::CMeshBuffer>::operator=(glitch::scene::CMeshBuffer*)
// volatile int32_t **boost::intrusive_ptr<glitch::scene::CMeshBuffer>::operator=( volatile int32_t **this, glitch::scene::CMeshBuffer *a2);
// [0xd83f50] (55 bytes) boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator>::intrusive_ptr(boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&)
// volatile int32_t *boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator>::intrusive_ptr( boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> *this, volatile int32_t **a2);
// [0xde1b40] (117 bytes) boost::intrusive_ptr<glitch::video::CLight>::~intrusive_ptr()
// void boost::intrusive_ptr<glitch::video::CLight>::~intrusive_ptr( boost::intrusive_ptr<glitch::video::CLight> *this);
// [0xde1f80] (93 bytes) boost::intrusive_ptr<glitch::video::CVertexStreams const>::~intrusive_ptr()
// void boost::intrusive_ptr<glitch::video::CVertexStreams const>::~intrusive_ptr( glitch::video::CVertexStreams **this);
// [0xde1fe0] (87 bytes) boost::intrusive_ptr<glitch::collada::CResFile>::operator=(boost::intrusive_ptr<glitch::collada::CResFile> const&)
// boost::intrusive_ptr<glitch::collada::CResFile> *boost::intrusive_ptr<glitch::collada::CResFile>::operator=( volatile int32_t **this, volatile int32_t **a2);
// [0xde2040] (122 bytes) boost::intrusive_ptr<glitch::video::CVertexStreams>::operator=(boost::intrusive_ptr<glitch::video::CVertexStreams> const&)
// boost::intrusive_ptr<glitch::video::CVertexStreams> *boost::intrusive_ptr<glitch::video::CVertexStreams>::operator=( glitch::video::CVertexStreams **this, volatile int32_t **a2);
// [0xde29b0] (87 bytes) boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer>::operator=(boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer> const&)
// boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer> *boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer>::operator=( volatile int32_t **this, volatile int32_t **a2);
// [0xde2a40] (87 bytes) boost::intrusive_ptr<glitch::video::IRenderTarget>& boost::intrusive_ptr<glitch::video::IRenderTarget>::operator=<glitch::video::IVideoDriver::IFramebuffer>(boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer> const&)
// volatile int32_t **boost::intrusive_ptr<glitch::video::IRenderTarget>::operator=<glitch::video::IVideoDriver::IFramebuffer>( volatile int32_t **this, volatile int32_t **a2);
// [0xde2aa0] (54 bytes) boost::intrusive_ptr<glitch::video::CVertexAttributeMap>::~intrusive_ptr()
// void boost::intrusive_ptr<glitch::video::CVertexAttributeMap>::~intrusive_ptr( boost::intrusive_ptr<glitch::video::CVertexAttributeMap> *this);
// [0xe54fc0] (40 bytes) boost::intrusive_ptr<glitch::video::IShader>::~intrusive_ptr()
// void boost::intrusive_ptr<glitch::video::IShader>::~intrusive_ptr(volatile int32_t **this);
// [0xe54ff0] (40 bytes) boost::intrusive_ptr<glitch::video::IShaderCode>::~intrusive_ptr()
// void boost::intrusive_ptr<glitch::video::IShaderCode>::~intrusive_ptr(volatile int32_t **this);
// [0xe73d50] (90 bytes) boost::intrusive_ptr<glitch::video::ITexture>::operator=(boost::intrusive_ptr<glitch::video::ITexture> const&)
// boost::intrusive_ptr<glitch::video::ITexture> *boost::intrusive_ptr<glitch::video::ITexture>::operator=( boost::intrusive_ptr<glitch::video::ITexture> *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2);
// [0xe95a60] (73 bytes) boost::intrusive_ptr<glitch::io::IReadFile>::operator=(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// boost::intrusive_ptr<glitch::io::IReadFile> *boost::intrusive_ptr<glitch::io::IReadFile>::operator=( volatile int32_t **this, volatile int32_t **a2);
// [0xf06df0] (122 bytes) boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap>::operator=(boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap> const&)
// boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap> *boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap>::operator=( glitch::video::CMaterialVertexAttributeMap ***this, volatile int32_t **a2);
// [0xf15740] (40 bytes) boost::intrusive_ptr<glitch::scene::CPVSDatabase>::~intrusive_ptr()
// void boost::intrusive_ptr<glitch::scene::CPVSDatabase>::~intrusive_ptr(glitch::scene::CPVSDatabase **this);
// [0xf7ae00] (28 bytes) boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK>::intrusive_ptr(boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> const&)
// uint32_t *boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK>::intrusive_ptr( boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *this, const boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *a2);
// [0xf80210] (145 bytes) boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> * std::copy_backward<boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *,boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *>(boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *,boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *,boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *)
// boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *std::copy_backward<boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *,boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *>( boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *a1, boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *a2, boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *a3);
