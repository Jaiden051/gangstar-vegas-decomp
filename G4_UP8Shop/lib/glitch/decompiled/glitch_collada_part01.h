#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_collada_part01.h
// Library: glitch | Module: glitch_collada_part01
// Binary Address Span: 0xcfb380 .. 0xd1c4e0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcfb380] (620 bytes) glitch::collada::CParametricController1DBase::getClipWeights(glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *,glitch::core::vector3d<float>*)
// int glitch::collada::CParametricController1DBase::getClipWeights(uint32_t *a1, uint32_t *a2, int a3, uint32_t *a4);
// [0xcfb5f0] (165 bytes) glitch::collada::CPlanarParametricController2d::toGridCoord(int,glitch::core::vector3d<float> const&)const
// float *glitch::collada::CPlanarParametricController2d::toGridCoord( float *a1, int a2, int a3, float *a4);
// [0xcfb6a0] (155 bytes) glitch::collada::CPlanarParametricController2d::toWorldCoord(int,glitch::core::vector2d<float> const&)const
// float *glitch::collada::CPlanarParametricController2d::toWorldCoord( float *a1, int a2, int a3, float *a4);
// [0xcfb740] (115 bytes) glitch::collada::CPlanarParametricController2d::projectPoint(glitch::core::vector3d<float> const&)const
// int glitch::collada::CPlanarParametricController2d::projectPoint(int a1, int a2);
// [0xcfb7c0] (221 bytes) glitch::collada::CSphericalParametricController2d::toGridCoord(int,glitch::core::vector3d<float> const&)const
// float *glitch::collada::CSphericalParametricController2d::toGridCoord( float *a1, int a2, int a3, float *a4);
// [0xcfb8a0] (27 bytes) glitch::collada::CParametricController3d::toGridCoord(glitch::core::vector3d<float> const&)const
// uint32_t *glitch::collada::CParametricController3d::toGridCoord(uint32_t *a1, int a2, uint32_t *a3);
// [0xcfb8c0] (27 bytes) glitch::collada::CParametricController3d::toWorldCoord(glitch::core::vector3d<float> const&)const
// uint32_t *glitch::collada::CParametricController3d::toWorldCoord(uint32_t *a1, int a2, uint32_t *a3);
// [0xcfb8e0] (27 bytes) glitch::collada::CColladaFactory::~CColladaFactory()
// void glitch::collada::CColladaFactory::~CColladaFactory(glitch::collada::CColladaFactory *this);
// [0xcfb900] (9 bytes) glitch::collada::CColladaFactory::useImageIDAsTextureHashName(glitch::collada::CColladaDatabase const&,glitch::collada::SImage *)
// int glitch::collada::CColladaFactory::useImageIDAsTextureHashName();
// [0xcfb910] (9 bytes) glitch::collada::CColladaFactory::getAdditionalEffects(glitch::collada::CColladaDatabase const&,glitch::collada::SEffect *,glitch::collada::SEffectList &)
// void glitch::collada::CColladaFactory::getAdditionalEffects();
// [0xcfb920] (9 bytes) glitch::collada::CColladaFactory::getSamplerState(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::video::ITexture> &,glitch::collada::SSamplerState &)
// void glitch::collada::CColladaFactory::getSamplerState();
// [0xcfb930] (24 bytes) glitch::collada::CColladaFactory::getVertexBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SGeometry *)
// int glitch::collada::CColladaFactory::getVertexBufferConfig(int a1);
// [0xcfb950] (24 bytes) glitch::collada::CColladaFactory::getIndexBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SGeometry *)
// int glitch::collada::CColladaFactory::getIndexBufferConfig(int a1);
// [0xcfb970] (24 bytes) glitch::collada::CColladaFactory::getSourceProcessBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SController *)
// int glitch::collada::CColladaFactory::getSourceProcessBufferConfig(int a1);
// [0xcfb990] (24 bytes) glitch::collada::CColladaFactory::getProcessBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SController *)
// int glitch::collada::CColladaFactory::getProcessBufferConfig(int a1);
// [0xcfb9b0] (24 bytes) glitch::collada::CColladaFactory::getProcessBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SInstanceModularSkin *)
// int glitch::collada::CColladaFactory::getProcessBufferConfig(int a1);
// [0xcfb9d0] (24 bytes) glitch::collada::CColladaFactory::getProcessBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SGNPSEmitter *)
// int glitch::collada::CColladaFactory::getProcessBufferConfig(int a1);
// [0xcfb9f0] (12 bytes) glitch::collada::CColladaFactory::isSharingMeshBuffers(glitch::collada::CColladaDatabase const&,glitch::collada::SGeometry *)
// int glitch::collada::CColladaFactory::isSharingMeshBuffers();
// [0xcfba00] (12 bytes) glitch::collada::CColladaFactory::isSharingProcessBuffer(glitch::collada::CColladaDatabase const&,glitch::collada::SController *)
// int glitch::collada::CColladaFactory::isSharingProcessBuffer();
// [0xcfba10] (12 bytes) glitch::collada::CColladaFactory::isSharingProcessBuffer(glitch::collada::CColladaDatabase const&,glitch::collada::SInstanceModularSkin *)
// int glitch::collada::CColladaFactory::isSharingProcessBuffer();
// [0xcfba20] (12 bytes) glitch::collada::CColladaFactory::isSharingProcessBuffer(glitch::collada::CColladaDatabase const&,glitch::collada::SGNPSEmitter *)
// int glitch::collada::CColladaFactory::isSharingProcessBuffer();
// [0xcfba30] (9 bytes) glitch::collada::CColladaFactory::isOptimizingOutSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// int glitch::collada::CColladaFactory::isOptimizingOutSceneNode();
// [0xcfba40] (12 bytes) glitch::collada::CColladaFactory::getCreateAndAddAnimatorsForExternEmitters(void)
// int glitch::collada::CColladaFactory::getCreateAndAddAnimatorsForExternEmitters();
// [0xcfba50] (12 bytes) glitch::collada::CColladaFactory::getResolveExternals(glitch::collada::CColladaDatabase const&)
// int glitch::collada::CColladaFactory::getResolveExternals();
// [0xcfba60] (12 bytes) glitch::collada::CColladaFactory::getExternalConstructionFlags(glitch::collada::CColladaDatabase const&,glitch::collada::CColladaDatabase const&,unsigned int)
// unsigned int glitch::collada::CColladaFactory::getExternalConstructionFlags( glitch::collada::CColladaFactory *this, const glitch::collada::CColladaDatabase *a2, const glitch::collada::CColladaDatabase *a3, unsigned int a4);
// [0xcfba70] (45 bytes) glitch::collada::CColladaFactoryWrapperBase::~CColladaFactoryWrapperBase()
// void glitch::collada::CColladaFactoryWrapperBase::~CColladaFactoryWrapperBase( glitch::collada::CColladaFactoryWrapperBase *this);
// [0xcfbaa0] (49 bytes) glitch::collada::CColladaFactoryWrapperBase::createAnimator(glitch::collada::CColladaDatabase const&)
// glitch::collada::CColladaFactoryWrapperBase *glitch::collada::CColladaFactoryWrapperBase::createAnimator( glitch::collada::CColladaFactoryWrapperBase *this, const glitch::collada::CColladaDatabase *a2);
// [0xcfbae0] (57 bytes) glitch::collada::CColladaFactoryWrapperBase::createLight(glitch::collada::CColladaDatabase const&,glitch::collada::SLight *)
// int glitch::collada::CColladaFactoryWrapperBase::createLight(int a1, int a2);
// [0xcfbb20] (40 bytes) glitch::collada::CColladaFactoryWrapperBase::useImageIDAsTextureHashName(glitch::collada::CColladaDatabase const&,glitch::collada::SImage *)
// int glitch::collada::CColladaFactoryWrapperBase::useImageIDAsTextureHashName(int a1, int a2, int a3);
// [0xcfbb50] (65 bytes) glitch::collada::CColladaFactoryWrapperBase::createImage(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SImage *)
// int glitch::collada::CColladaFactoryWrapperBase::createImage(int a1, int a2);
// [0xcfbba0] (48 bytes) glitch::collada::CColladaFactoryWrapperBase::getAdditionalEffects(glitch::collada::CColladaDatabase const&,glitch::collada::SEffect *,glitch::collada::SEffectList &)
// int glitch::collada::CColladaFactoryWrapperBase::getAdditionalEffects(int a1, int a2, int a3, int a4);
// [0xcfbbd0] (65 bytes) glitch::collada::CColladaFactoryWrapperBase::getEffectName(glitch::collada::CColladaDatabase const&,char const*,char const*)
// glitch::collada::CColladaFactoryWrapperBase *glitch::collada::CColladaFactoryWrapperBase::getEffectName( glitch::collada::CColladaFactoryWrapperBase *this, const glitch::collada::CColladaDatabase *a2, const char *a3, const char *a4);
// [0xcfbc20] (48 bytes) glitch::collada::CColladaFactoryWrapperBase::getSamplerState(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::video::ITexture> &,glitch::collada::SSamplerState &)
// int glitch::collada::CColladaFactoryWrapperBase::getSamplerState(int a1, int a2, int a3, int a4);
// [0xcfbc50] (48 bytes) glitch::collada::CColladaFactoryWrapperBase::getEffectPlatform(glitch::collada::CColladaDatabase const&,glitch::collada::SEffect *,glitch::collada::SPlatformTechniqueMap &)
// int glitch::collada::CColladaFactoryWrapperBase::getEffectPlatform(int a1, int a2, int a3, int a4);
// [0xcfbc80] (56 bytes) glitch::collada::CColladaFactoryWrapperBase::getEffectPlatformTechniqueMap(glitch::collada::CColladaDatabase const&,glitch::collada::SEffect *,glitch::collada::SPlatformTechniqueMap &,glitch::collada::SEffectTechniqueMap &)
// int glitch::collada::CColladaFactoryWrapperBase::getEffectPlatformTechniqueMap( int a1, int a2, int a3, int a4, int a5);
// [0xcfbcc0] (89 bytes) glitch::collada::CColladaFactoryWrapperBase::createMaterialRenderer(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SEffect *,char const*,char const*,glitch::collada::CRootSceneNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createMaterialRenderer(int a1, int a2);
// [0xcfbd20] (73 bytes) glitch::collada::CColladaFactoryWrapperBase::createMaterial(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SMaterial *,glitch::collada::CRootSceneNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createMaterial(int a1, int a2);
// [0xcfbd70] (81 bytes) glitch::collada::CColladaFactoryWrapperBase::createMaterial(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&,glitch::collada::SMaterial *,glitch::collada::CRootSceneNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createMaterial(int a1, int a2);
// [0xcfbdd0] (90 bytes) glitch::collada::CColladaFactoryWrapperBase::createMaterialVertexAttributeMap(glitch::collada::CColladaDatabase const&,glitch::collada::SInstanceMaterial *,boost::intrusive_ptr<glitch::collada::IMesh> const&,boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned int,bool)
// int glitch::collada::CColladaFactoryWrapperBase::createMaterialVertexAttributeMap(int a1, int a2);
// [0xcfbe30] (57 bytes) glitch::collada::CColladaFactoryWrapperBase::getVertexBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SGeometry *)
// int glitch::collada::CColladaFactoryWrapperBase::getVertexBufferConfig(int a1, int a2);
// [0xcfbe70] (57 bytes) glitch::collada::CColladaFactoryWrapperBase::getIndexBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SGeometry *)
// int glitch::collada::CColladaFactoryWrapperBase::getIndexBufferConfig(int a1, int a2);
// [0xcfbeb0] (57 bytes) glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SController *)
// int glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig(int a1, int a2);
// [0xcfbef0] (57 bytes) glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SInstanceModularSkin *)
// int glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig(int a1, int a2);
// [0xcfbf30] (32 bytes) glitch::collada::CColladaFactoryWrapperBase::getResolveExternals(glitch::collada::CColladaDatabase const&)
// int glitch::collada::CColladaFactoryWrapperBase::getResolveExternals( glitch::collada::CColladaFactoryWrapperBase *this, const glitch::collada::CColladaDatabase *a2);
// [0xcfbf50] (57 bytes) glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig(glitch::collada::CColladaDatabase const&,glitch::collada::SGNPSEmitter *)
// int glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig(int a1, int a2);
// [0xcfbf90] (48 bytes) glitch::collada::CColladaFactoryWrapperBase::getExternalConstructionFlags(glitch::collada::CColladaDatabase const&,glitch::collada::CColladaDatabase const&,unsigned int)
// int glitch::collada::CColladaFactoryWrapperBase::getExternalConstructionFlags( glitch::collada::CColladaFactoryWrapperBase *this, const glitch::collada::CColladaDatabase *a2, const glitch::collada::CColladaDatabase *a3, unsigned int a4);
// [0xcfbfc0] (40 bytes) glitch::collada::CColladaFactoryWrapperBase::isSharingMeshBuffers(glitch::collada::CColladaDatabase const&,glitch::collada::SGeometry *)
// int glitch::collada::CColladaFactoryWrapperBase::isSharingMeshBuffers(int a1, int a2, int a3);
// [0xcfbff0] (40 bytes) glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer(glitch::collada::CColladaDatabase const&,glitch::collada::SController *)
// int glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer(int a1, int a2, int a3);
// [0xcfc020] (40 bytes) glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer(glitch::collada::CColladaDatabase const&,glitch::collada::SInstanceModularSkin *)
// int glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer(int a1, int a2, int a3);
// [0xcfc050] (40 bytes) glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer(glitch::collada::CColladaDatabase const&,glitch::collada::SGNPSEmitter *)
// int glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer(int a1, int a2, int a3);
// [0xcfc080] (40 bytes) glitch::collada::CColladaFactoryWrapperBase::isOptimizingOutSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// int glitch::collada::CColladaFactoryWrapperBase::isOptimizingOutSceneNode(int a1, int a2, int a3);
// [0xcfc0b0] (68 bytes) glitch::collada::CColladaFactoryWrapperBase::createGeometry(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SGeometry *)
// int glitch::collada::CColladaFactoryWrapperBase::createGeometry(int a1, int a2);
// [0xcfc100] (76 bytes) glitch::collada::CColladaFactoryWrapperBase::createMorph(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController *,glitch::collada::CRootSceneNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createMorph(int a1, int a2);
// [0xcfc150] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createNode(int a1, int a2);
// [0xcfc190] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createBillboard(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createBillboard(int a1, int a2);
// [0xcfc1d0] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createCameraNode(glitch::collada::CColladaDatabase const&,glitch::collada::SCamera *)
// int glitch::collada::CColladaFactoryWrapperBase::createCameraNode(int a1, int a2);
// [0xcfc210] (68 bytes) glitch::collada::CColladaFactoryWrapperBase::createMeshNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::collada::IMesh> const&,void *)
// int glitch::collada::CColladaFactoryWrapperBase::createMeshNode(int a1, int a2);
// [0xcfc260] (68 bytes) glitch::collada::CColladaFactoryWrapperBase::createSkinNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::collada::IMesh> const&,void *)
// int glitch::collada::CColladaFactoryWrapperBase::createSkinNode(int a1, int a2);
// [0xcfc2b0] (68 bytes) glitch::collada::CColladaFactoryWrapperBase::createModularSkinNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::collada::IMesh> const&,void *)
// int glitch::collada::CColladaFactoryWrapperBase::createModularSkinNode(int a1, int a2);
// [0xcfc300] (52 bytes) glitch::collada::CColladaFactoryWrapperBase::createScene(glitch::collada::CColladaDatabase const&)
// glitch::collada::CColladaFactoryWrapperBase *glitch::collada::CColladaFactoryWrapperBase::createScene( glitch::collada::CColladaFactoryWrapperBase *this, const glitch::collada::CColladaDatabase *a2);
// [0xcfc340] (76 bytes) glitch::collada::CColladaFactoryWrapperBase::createSkin(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController *,glitch::collada::CRootSceneNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createSkin(int a1, int a2);
// [0xcfc390] (68 bytes) glitch::collada::CColladaFactoryWrapperBase::createLodSelector(glitch::collada::CColladaDatabase const&,glitch::collada::SController *,glitch::collada::CRootSceneNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createLodSelector(int a1, int a2);
// [0xcfc3e0] (76 bytes) glitch::collada::CColladaFactoryWrapperBase::createModularSkin(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SInstanceModularSkin *,glitch::collada::CRootSceneNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createModularSkin(int a1, int a2);
// [0xcfc430] (76 bytes) glitch::collada::CColladaFactoryWrapperBase::createCoronas(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SCoronas *,glitch::collada::CRootSceneNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createCoronas(int a1, int a2);
// [0xcfc480] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createAnimationPackage(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SAnimationPackage const*)const
// int glitch::collada::CColladaFactoryWrapperBase::createAnimationPackage(int a1, int a2);
// [0xcfc4c0] (68 bytes) glitch::collada::CColladaFactoryWrapperBase::createAnimator(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::collada::CAnimationSet> const&,glitch::collada::anim_pack::SAnimationGraphNode const&)const
// int glitch::collada::CColladaFactoryWrapperBase::createAnimator(int a1, int a2);
// [0xcfc510] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createAnimationSet(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SAnimationPackage const*)const
// int glitch::collada::CColladaFactoryWrapperBase::createAnimationSet(int a1, int a2);
// [0xcfc550] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createIKSolver(glitch::collada::CColladaDatabase const&,glitch::collada::SArticulatedSystem const*)const
// int glitch::collada::CColladaFactoryWrapperBase::createIKSolver(int a1, int a2);
// [0xcfc590] (84 bytes) glitch::collada::CColladaFactoryWrapperBase::createGlitchNewParticleSystem(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SGNPSEmitter *,glitch::res::vector<glitch::res::String> *,glitch::collada::CRootSceneNode *)
// int glitch::collada::CColladaFactoryWrapperBase::createGlitchNewParticleSystem(int a1, int a2);
// [0xcfc5f0] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createParticleSystemGravityForce(glitch::collada::CColladaDatabase const&,glitch::collada::SForce *)
// int glitch::collada::CColladaFactoryWrapperBase::createParticleSystemGravityForce(int a1, int a2);
// [0xcfc630] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createParticleSystemWindForce(glitch::collada::CColladaDatabase const&,glitch::collada::SForce *)
// int glitch::collada::CColladaFactoryWrapperBase::createParticleSystemWindForce(int a1, int a2);
// [0xcfc670] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createParticleSystemDeflectorForce(glitch::collada::CColladaDatabase const&,glitch::collada::SForce *)
// int glitch::collada::CColladaFactoryWrapperBase::createParticleSystemDeflectorForce(int a1, int a2);
// [0xcfc6b0] (60 bytes) glitch::collada::CColladaFactoryWrapperBase::createParticleSystemVortexForce(glitch::collada::CColladaDatabase const&,glitch::collada::SForce *)
// int glitch::collada::CColladaFactoryWrapperBase::createParticleSystemVortexForce(int a1, int a2);
// [0xcfc6f0] (87 bytes) glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned short,unsigned int,char const*)
// int glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode(int a1, int a2);
// [0xcfc750] (87 bytes) glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::video::CMaterialRenderer const> const&,unsigned short,unsigned int,char const*)
// int glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode(int a1, int a2);
// [0xcfc7b0] (75 bytes) glitch::collada::CColladaFactoryWrapperBase::getShaderCompilerOptions(glitch::collada::CColladaDatabase const&,glitch::collada::SEffect &,glitch::collada::STechnique<glitch::collada::SPass<glitch::collada::SRenderStatesProgrammable>> &,glitch::collada::SPass<glitch::collada::SRenderStatesProgrammable>&,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> &,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::collada::CColladaFactoryWrapperBase::getShaderCompilerOptions( int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0xcfc800] (27 bytes) glitch::collada::CColladaFactoryWrapperBase::getCreateAndAddAnimatorsForExternEmitters(void)
// int glitch::collada::CColladaFactoryWrapperBase::getCreateAndAddAnimatorsForExternEmitters( glitch::collada::CColladaFactoryWrapperBase *this);
// [0xcfc820] (9 bytes) glitch::collada::CMesh::getType(void)const
// int glitch::collada::CMesh::getType();
// [0xcfc830] (20 bytes) glitch::collada::CMesh::getMeshBufferCount(void)const
// int glitch::collada::CMesh::getMeshBufferCount(glitch::collada::CMesh *this);
// [0xcfc850] (12 bytes) glitch::collada::CMesh::getBoundingBox(void)const
// char *glitch::collada::CMesh::getBoundingBox(glitch::collada::CMesh *this);
// [0xcfc860] (44 bytes) glitch::collada::CMesh::setBoundingBox(glitch::core::aabbox3d<float> const&)
// uint32_t *glitch::collada::CMesh::setBoundingBox(uint32_t *a1, uint32_t *a2);
// [0xcfc940] (13 bytes) glitch::collada::CModularSkinnedMesh::clone(void)const
// glitch::collada::CModularSkinnedMesh *glitch::collada::CModularSkinnedMesh::clone( glitch::collada::CModularSkinnedMesh *this);
// [0xcfc980] (9 bytes) glitch::collada::CModularSkinnedMesh::getBindShapeMatrix(void)const
// int glitch::collada::CModularSkinnedMesh::getBindShapeMatrix();
// [0xcfc990] (12 bytes) glitch::collada::CModularSkinnedMesh::getType(void)const
// int glitch::collada::CModularSkinnedMesh::getType();
// [0xcfc9a0] (14 bytes) glitch::collada::CModularSkinnedMesh::needOutputBuffer(void)const
// bool glitch::collada::CModularSkinnedMesh::needOutputBuffer(glitch::collada::CModularSkinnedMesh *this);
// [0xcfc9b0] (92 bytes) glitch::collada::CModularSkinnedMesh::needOutputBuffer(unsigned int)const
// int glitch::collada::CModularSkinnedMesh::needOutputBuffer( glitch::collada::CModularSkinnedMesh *this, unsigned int a2);
// [0xcfca10] (99 bytes) glitch::collada::CModularSkinnedMesh::updateTechnique(unsigned int)
// int glitch::collada::CModularSkinnedMesh::updateTechnique( glitch::collada::CModularSkinnedMesh *this, unsigned int a2);
// [0xcfca80] (136 bytes) glitch::collada::CModularSkinnedMesh::updateTechnique(void)
// int glitch::collada::CModularSkinnedMesh::updateTechnique(glitch::collada::CModularSkinnedMesh *this);
// [0xcfcb10] (9 bytes) glitch::collada::CModularSkinnedMesh::getSourceMesh(void)const
// int glitch::collada::CModularSkinnedMesh::getSourceMesh();
// [0xcfcb20] (26 bytes) glitch::collada::CModularSkinnedMesh::getMeshBufferCount(void)const
// int glitch::collada::CModularSkinnedMesh::getMeshBufferCount(glitch::collada::CModularSkinnedMesh *this);
// [0xcfcb40] (12 bytes) glitch::collada::CMorphingMesh::getType(void)const
// int glitch::collada::CMorphingMesh::getType();
// [0xcfcb50] (13 bytes) glitch::collada::CMorphingMesh::clone(void)const
// glitch::collada::CMorphingMesh *glitch::collada::CMorphingMesh::clone(glitch::collada::CMorphingMesh *this);
// [0xcfcb60] (26 bytes) glitch::collada::CMorphingMesh::getSourceMesh(void)const
// int glitch::collada::CMorphingMesh::getSourceMesh(glitch::collada::CMorphingMesh *this);
// [0xcfcb80] (26 bytes) glitch::collada::CMorphingMesh::getMeshBufferCount(void)const
// int glitch::collada::CMorphingMesh::getMeshBufferCount(glitch::collada::CMorphingMesh *this);
// [0xcfcba0] (26 bytes) glitch::collada::CMorphingMesh::getBoundingBox(void)const
// int glitch::collada::CMorphingMesh::getBoundingBox(glitch::collada::CMorphingMesh *this);
// [0xcfcbc0] (9 bytes) glitch::collada::CMorphingMesh::setBoundingBox(glitch::core::aabbox3d<float> const&)
// void glitch::collada::CMorphingMesh::setBoundingBox();
// [0xcfcbd0] (9 bytes) glitch::collada::CSkinnedMesh::init(glitch::video::IVideoDriver *,bool,glitch::collada::SProcessBufferConfig const&)
// void glitch::collada::CSkinnedMesh::init();
// [0xcfcbe0] (12 bytes) glitch::collada::CSkinnedMesh::getType(void)const
// int glitch::collada::CSkinnedMesh::getType();
// [0xcfcbf0] (40 bytes) glitch::collada::CSkinnedMesh::needOutputBuffer(unsigned int)const
// int glitch::collada::CSkinnedMesh::needOutputBuffer(glitch::collada::CSkinnedMesh *this, unsigned int a2);
// [0xcfcc20] (13 bytes) glitch::collada::CSkinnedMesh::clone(void)const
// glitch::collada::CSkinnedMesh *glitch::collada::CSkinnedMesh::clone(glitch::collada::CSkinnedMesh *this);
// [0xcfcc30] (27 bytes) glitch::collada::CSkinnedMesh::getSourceMesh(void)const
// int glitch::collada::CSkinnedMesh::getSourceMesh(glitch::collada::CSkinnedMesh *this);
// [0xcfcc50] (27 bytes) glitch::collada::CSkinnedMesh::getMeshBufferCount(void)const
// int glitch::collada::CSkinnedMesh::getMeshBufferCount(glitch::collada::CSkinnedMesh *this);
// [0xcfcc70] (16 bytes) glitch::collada::CSkinnedMesh::getBindShapeMatrix(void)const
// int glitch::collada::CSkinnedMesh::getBindShapeMatrix(glitch::collada::CSkinnedMesh *this);
// [0xcfcc80] (25 bytes) glitch::collada::CSkinnedMesh::getSkinIndicesOffset(unsigned int)const
// int glitch::collada::CSkinnedMesh::getSkinIndicesOffset(glitch::collada::CSkinnedMesh *this, unsigned int a2);
// [0xcfcca0] (28 bytes) glitch::collada::CSkinnedMesh::setSkinIndicesOffset(unsigned int,unsigned int)
// unsigned int glitch::collada::CSkinnedMesh::setSkinIndicesOffset( glitch::collada::CSkinnedMesh *this, unsigned int a2, char a3);
// [0xcfccc0] (25 bytes) glitch::collada::CSkinnedMesh::getSkinMaxVertexWeightsCount(unsigned int)const
// int glitch::collada::CSkinnedMesh::getSkinMaxVertexWeightsCount( glitch::collada::CSkinnedMesh *this, unsigned int a2);
// [0xcfcce0] (28 bytes) glitch::collada::CSkinnedMesh::setSkinMaxVertexWeightsCount(unsigned int,unsigned char)
// unsigned int glitch::collada::CSkinnedMesh::setSkinMaxVertexWeightsCount( glitch::collada::CSkinnedMesh *this, unsigned int a2, uint8_t a3);
// [0xcfcd00] (24 bytes) glitch::collada::CSkinnedMesh::getSkinTechnique(unsigned int)const
// int glitch::collada::CSkinnedMesh::getSkinTechnique(glitch::collada::CSkinnedMesh *this, unsigned int a2);
// [0xcfcd20] (9 bytes) glitch::collada::IMesh::onAnimate(float)
// void glitch::collada::IMesh::onAnimate();
// [0xcfcd30] (12 bytes) glitch::collada::IMesh::onPrepareBufferForRendering(glitch::collada::E_PREPARE_BUFFER_STEP,glitch::video::IVideoDriver *,unsigned int)
// int glitch::collada::IMesh::onPrepareBufferForRendering();
// [0xcfcd40] (9 bytes) glitch::collada::IMesh::releaseProcessBuffer(glitch::video::IVideoDriver *,unsigned int)
// void glitch::collada::IMesh::releaseProcessBuffer();
// [0xcfcd50] (9 bytes) glitch::collada::IMesh::init(glitch::video::IVideoDriver *,bool,glitch::collada::SProcessBufferConfig const&)
// void glitch::collada::IMesh::init();
// [0xcfcd60] (9 bytes) glitch::collada::IMesh::init(glitch::video::IVideoDriver *,bool,glitch::collada::SProcessBufferConfig const&,glitch::collada::SProcessBufferConfig const&)
// void glitch::collada::IMesh::init();
// [0xcfcd70] (21 bytes) glitch::collada::ISkinnedMesh::setIsSkinningEnabled(bool)
// unsigned int glitch::collada::ISkinnedMesh::setIsSkinningEnabled(glitch::collada::ISkinnedMesh *this, bool a2);
// [0xcfcd90] (9 bytes) glitch::collada::ISkinnedMesh::setBoundingBox(glitch::core::aabbox3d<float> const&)
// void glitch::collada::ISkinnedMesh::setBoundingBox();
// [0xcfcda0] (65 bytes) glitch::collada::ISkinnedMesh::getTransformedBoundingBox(glitch::core::CMatrix4<float> const&)const
// glitch::collada::ISkinnedMesh *glitch::collada::ISkinnedMesh::getTransformedBoundingBox( glitch::collada::ISkinnedMesh *this, const glitch::core::CMatrix4<float> *a2);
// [0xcfcdf0] (76 bytes) glitch::collada::ps::CParticleSystemStripBaker::generateParticleId(void)const
// int16_t glitch::collada::ps::CParticleSystemStripBaker::generateParticleId( glitch::collada::ps::CParticleSystemStripBaker *this);
// [0xcfce40] (13 bytes) glitch::collada::ps::CParticleSystemSpinModel::isSpinAxisInLocalSpace(void)const
// bool glitch::collada::ps::CParticleSystemSpinModel::isSpinAxisInLocalSpace( glitch::collada::ps::CParticleSystemSpinModel *this);
// [0xcfce50] (47 bytes) glitch::collada::ps::CBlobDomain::transform(glitch::core::CMatrix4<float> const&)
// glitch::collada::ps::CBlobDomain *glitch::collada::ps::CBlobDomain::transform( glitch::collada::ps::CBlobDomain *this, const glitch::core::CMatrix4<float> *a2);
// [0xcfce80] (203 bytes) glitch::collada::ps::CGeometryDomain::transform(glitch::core::CMatrix4<float> const&)
// glitch::collada::ps::CGeometryDomain *glitch::collada::ps::CGeometryDomain::transform( glitch::collada::ps::CGeometryDomain *this, const glitch::core::CMatrix4<float> *a2);
// [0xcfcf50] (275 bytes) glitch::collada::ps::CLineDomain::generate(glitch::collada::ps::CRandomGenerator &,float)const
// float *glitch::collada::ps::CLineDomain::generate(float *a1, float *a2, int *a3, float a4);
// [0xcfd070] (227 bytes) glitch::collada::ps::CLineDomain::generate(glitch::collada::ps::CRandomGenerator &)const
// int glitch::collada::ps::CLineDomain::generate(int a1, float *a2, int *a3);
// [0xcfd160] (108 bytes) glitch::collada::ps::CPointDomain::generate(glitch::collada::ps::CRandomGenerator &,float)const
// float *glitch::collada::ps::CPointDomain::generate(float *a1, float *a2, int a3, float a4);
// [0xcfd1d0] (28 bytes) glitch::collada::ps::CPointDomain::generate(glitch::collada::ps::CRandomGenerator &)const
// uint32_t *glitch::collada::ps::CPointDomain::generate(uint32_t *a1, uint32_t *a2);
// [0xcfd1f0] (47 bytes) glitch::collada::ps::CPointDomain::transform(glitch::core::CMatrix4<float> const&)
// glitch::collada::ps::CPointDomain *glitch::collada::ps::CPointDomain::transform( glitch::collada::ps::CPointDomain *this, const glitch::core::CMatrix4<float> *a2);
// [0xcfd280] (56 bytes) glitch::collada::CColladaFactoryWrapperBase::~CColladaFactoryWrapperBase()
// void glitch::collada::CColladaFactoryWrapperBase::~CColladaFactoryWrapperBase( glitch::collada::CColladaFactoryWrapperBase *this);
// [0xcfd2c0] (56 bytes) glitch::collada::CColladaFactory::~CColladaFactory()
// void glitch::collada::CColladaFactory::~CColladaFactory(glitch::collada::CColladaFactory *this);
// [0xcfd390] (224 bytes) glitch::collada::CCircularParametricController1d::toWorldCoord(float)const
// int glitch::collada::CCircularParametricController1d::toWorldCoord( glitch::collada::CCircularParametricController1d *this, float a2, float a3);
// [0xcfd470] (306 bytes) glitch::collada::CCylindricalParametricController3D::toWorldCoord(glitch::core::vector3d<float> const&)const
// float *glitch::collada::CCylindricalParametricController3D::toWorldCoord( float *a1, int a2, float *a3);
// [0xcfd5b0] (781 bytes) glitch::collada::ps::CBlobDomain::generate(glitch::collada::ps::CRandomGenerator &)const
// float *glitch::collada::ps::CBlobDomain::generate(float *a1, int a2, int *a3);
// [0xcfd8c0] (52 bytes) glitch::collada::ps::IParticleSystemBaker::~IParticleSystemBaker()
// void glitch::collada::ps::IParticleSystemBaker::~IParticleSystemBaker( glitch::collada::ps::IParticleSystemBaker *this);
// [0xcfd900] (56 bytes) glitch::collada::ps::IParticleSystemBaker::~IParticleSystemBaker()
// void glitch::collada::ps::IParticleSystemBaker::~IParticleSystemBaker( glitch::collada::ps::IParticleSystemBaker *this);
// [0xcfd940] (69 bytes) glitch::collada::ps::CParticleSystemStripBaker::fillParticleIndexBuffer(glitch::scene::CMeshBuffer const*)
// int glitch::collada::ps::CParticleSystemStripBaker::fillParticleIndexBuffer( glitch::collada::ps::CParticleSystemStripBaker *this);
// [0xcfd990] (108 bytes) glitch::collada::ISkinnedMesh::setTransform(glitch::video::IVideoDriver *,glitch::core::CMatrix4<float> const&,glitch::core::aabbox3d<float> const&)
// int glitch::collada::ISkinnedMesh::setTransform(int a1, int a2, int a3, int a4);
// [0xcfda00] (66 bytes) glitch::collada::IMesh::setTransform(glitch::video::IVideoDriver *,glitch::core::CMatrix4<float> const&,glitch::core::aabbox3d<float> const&)
// int glitch::collada::IMesh::setTransform(int a1, int a2, int a3, int a4);
// [0xcfda50] (115 bytes) glitch::collada::CColladaFactory::getEffectPlatform(glitch::collada::CColladaDatabase const&,glitch::collada::SEffect *,glitch::collada::SPlatformTechniqueMap &)
// int glitch::collada::CColladaFactory::getEffectPlatform(int a1, int a2, int a3, uint32_t *a4);
// [0xcfdb00] (271 bytes) glitch::collada::CCylindricalParametricController3D::toGridCoord(glitch::core::vector3d<float> const&)const
// float *glitch::collada::CCylindricalParametricController3D::toGridCoord(float *a1, int a2, float *a3);
// [0xcfdc10] (198 bytes) glitch::collada::CCircularParametricController1d::toGridCoord(glitch::core::vector3d<float> const&)const
// long double glitch::collada::CCircularParametricController1d::toGridCoord(int a1, float *a2);
// [0xcfdce0] (230 bytes) glitch::collada::ps::CParticleSystemBillboardBaker::fillParticleIndexBuffer(glitch::scene::CMeshBuffer const*)
// int glitch::collada::ps::CParticleSystemBillboardBaker::fillParticleIndexBuffer( glitch::collada::ps::CParticleSystemBillboardBaker *this);
// [0xcfddd0] (89 bytes) glitch::collada::CSkinnedMesh::updateMeshBuffers(void)
// int glitch::collada::CSkinnedMesh::updateMeshBuffers(glitch::collada::CSkinnedMesh *this);
// [0xcfdec0] (50 bytes) glitch::collada::CMesh::getSourceMesh(void)const
// int glitch::collada::CMesh::getSourceMesh(glitch::collada::CMesh *this);
// [0xcfdf00] (139 bytes) glitch::collada::CModularSkinnedMesh::setIsSkinningEnabled(bool)
// unsigned int glitch::collada::CModularSkinnedMesh::setIsSkinningEnabled( glitch::collada::CModularSkinnedMesh *this, bool a2);
// [0xcfeba0] (70 bytes) glitch::collada::CParametricController2DBase::~CParametricController2DBase()
// void glitch::collada::CParametricController2DBase::~CParametricController2DBase( glitch::collada::CParametricController2DBase *this);
// [0xcfebf0] (56 bytes) glitch::collada::CParametricController2DBase::~CParametricController2DBase()
// void glitch::collada::CParametricController2DBase::~CParametricController2DBase( glitch::collada::CParametricController2DBase *this);
// [0xcfec30] (70 bytes) glitch::collada::CCircularParametricController1d::~CCircularParametricController1d()
// void glitch::collada::CCircularParametricController1d::~CCircularParametricController1d( glitch::collada::CCircularParametricController1d *this);
// [0xcfec80] (56 bytes) glitch::collada::CCircularParametricController1d::~CCircularParametricController1d()
// void glitch::collada::CCircularParametricController1d::~CCircularParametricController1d( glitch::collada::CCircularParametricController1d *this);
// [0xcff1a0] (180 bytes) glitch::collada::ps::CParticleSystemBatchingManager::~CParticleSystemBatchingManager()
// void glitch::collada::ps::CParticleSystemBatchingManager::~CParticleSystemBatchingManager( pthread_mutex_t **this);
// [0xcff260] (56 bytes) glitch::collada::ps::CParticleSystemBatchingManager::~CParticleSystemBatchingManager()
// void glitch::collada::ps::CParticleSystemBatchingManager::~CParticleSystemBatchingManager( pthread_mutex_t **this);
// [0xcff2a0] (210 bytes) glitch::collada::ps::CSphereDomain::transform(glitch::core::CMatrix4<float> const&)
// float *glitch::collada::ps::CSphereDomain::transform( glitch::collada::ps::CSphereDomain *this, const glitch::core::CMatrix4<float> *a2);
// [0xcff870] (410 bytes) glitch::collada::ps::CBoxDomain::generate(glitch::collada::ps::CRandomGenerator &)const
// float *glitch::collada::ps::CBoxDomain::generate(float *a1, float *a2, int *a3);
// [0xcffa10] (507 bytes) glitch::collada::ps::CBoxDomain::generate(glitch::collada::ps::CRandomGenerator &,float)const
// float *glitch::collada::ps::CBoxDomain::generate(float *a1, float *a2, int *a3, float a4);
// [0xcffca0] (584 bytes) glitch::collada::CColladaFactory::getShaderCompilerOptions(glitch::collada::CColladaDatabase const&,glitch::collada::SEffect &,glitch::collada::STechnique<glitch::collada::SPass<glitch::collada::SRenderStatesProgrammable>> &,glitch::collada::SPass<glitch::collada::SRenderStatesProgrammable>&,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> &,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> &)
// char *glitch::collada::CColladaFactory::getShaderCompilerOptions( int a1, int a2, int a3, int a4, int a5, int *a6, int *a7);
// [0xcffef0] (343 bytes) glitch::collada::CColladaFactory::getEffectName(glitch::collada::CColladaDatabase const&,char const*,char const*)
// glitch::collada::CColladaFactory *glitch::collada::CColladaFactory::getEffectName( glitch::collada::CColladaFactory *this, const glitch::collada::CColladaDatabase *a2, const char *a3, char *s);
// [0xd00050] (821 bytes) glitch::collada::ps::CBlobDomain::generate(glitch::collada::ps::CRandomGenerator &,float)const
// float *glitch::collada::ps::CBlobDomain::generate(float *a1, int a2, int *a3, float a4);
// [0xd00390] (247 bytes) glitch::collada::CSphericalParametricController2d::toWorldCoord(int,glitch::core::vector2d<float> const&)const
// float *glitch::collada::CSphericalParametricController2d::toWorldCoord( float *a1, int a2, int a3, float *a4);
// [0xd00490] (197 bytes) glitch::collada::CSphericalParametricController2d::projectPoint(glitch::core::vector3d<float> const&)const
// float *glitch::collada::CSphericalParametricController2d::projectPoint(float *a1, int a2, float *a3);
// [0xd00560] (113 bytes) glitch::collada::CColladaFactory::createAnimator(glitch::collada::CColladaDatabase const&)
// glitch::collada::CColladaFactory *glitch::collada::CColladaFactory::createAnimator( glitch::collada::CColladaFactory *this, const glitch::collada::CColladaDatabase *a2, glitch::collada::CColladaDatabase *a3);
// [0xd005e0] (121 bytes) glitch::collada::CColladaFactory::createLight(glitch::collada::CColladaDatabase const&,glitch::collada::SLight *)
// glitch::scene::CLightSceneNode **glitch::collada::CColladaFactory::createLight( glitch::scene::CLightSceneNode **a1, int a2, int a3, int a4);
// [0xd00660] (121 bytes) glitch::collada::CColladaFactory::createNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// glitch::scene::ISceneNode **glitch::collada::CColladaFactory::createNode( glitch::scene::ISceneNode **a1, int a2, int a3, int a4);
// [0xd006e0] (121 bytes) glitch::collada::CColladaFactory::createCameraNode(glitch::collada::CColladaDatabase const&,glitch::collada::SCamera *)
// glitch::scene::CCameraSceneNode **glitch::collada::CColladaFactory::createCameraNode( glitch::scene::CCameraSceneNode **a1, int a2, int a3, int a4);
// [0xd00760] (115 bytes) glitch::collada::CColladaFactory::createAnimationPackage(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SAnimationPackage const*)const
// int *glitch::collada::CColladaFactory::createAnimationPackage(int *a1, int a2, int a3, int a4);
// [0xd007e0] (121 bytes) glitch::collada::CColladaFactory::createParticleSystemVortexForce(glitch::collada::CColladaDatabase const&,glitch::collada::SForce *)
// glitch::IObject **glitch::collada::CColladaFactory::createParticleSystemVortexForce( glitch::IObject **a1, int a2, int a3, int a4);
// [0xd00860] (121 bytes) glitch::collada::CColladaFactory::createParticleSystemDeflectorForce(glitch::collada::CColladaDatabase const&,glitch::collada::SForce *)
// glitch::IObject **glitch::collada::CColladaFactory::createParticleSystemDeflectorForce( glitch::IObject **a1, int a2, int a3, int a4);
// [0xd008e0] (121 bytes) glitch::collada::CColladaFactory::createParticleSystemWindForce(glitch::collada::CColladaDatabase const&,glitch::collada::SForce *)
// glitch::IObject **glitch::collada::CColladaFactory::createParticleSystemWindForce( glitch::IObject **a1, int a2, int a3, int a4);
// [0xd00960] (121 bytes) glitch::collada::CColladaFactory::createParticleSystemGravityForce(glitch::collada::CColladaDatabase const&,glitch::collada::SForce *)
// glitch::IObject **glitch::collada::CColladaFactory::createParticleSystemGravityForce( glitch::IObject **a1, int a2, int a3, int a4);
// [0xd009e0] (233 bytes) glitch::collada::CColladaFactory::createModularSkinNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::collada::IMesh> const&,void *)
// glitch::IObject **glitch::collada::CColladaFactory::createModularSkinNode( glitch::IObject **a1, int a2, int a3, int a4);
// [0xd00ad0] (233 bytes) glitch::collada::CColladaFactory::createSkinNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::collada::IMesh> const&,void *)
// glitch::IObject **glitch::collada::CColladaFactory::createSkinNode( glitch::IObject **a1, int a2, int a3, int a4);
// [0xd00bc0] (233 bytes) glitch::collada::CColladaFactory::createMeshNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::collada::IMesh> const&,void *)
// glitch::IObject **glitch::collada::CColladaFactory::createMeshNode( glitch::IObject **a1, int a2, int a3, int a4);
// [0xd00cb0] (121 bytes) glitch::collada::CColladaFactory::createBillboard(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// glitch::scene::ISceneNode **glitch::collada::CColladaFactory::createBillboard( glitch::scene::ISceneNode **a1, int a2, int a3, int a4);
// [0xd00d30] (1502 bytes) glitch::collada::CColladaFactory::createImage(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SImage *)
// glitch::video::CTextureManager *glitch::collada::CColladaFactory::createImage( int a1, int a2, int a3, int a4, int a5);
// [0xd01310] (113 bytes) glitch::collada::CColladaFactory::createScene(glitch::collada::CColladaDatabase const&)
// glitch::collada::CColladaFactory *glitch::collada::CColladaFactory::createScene( glitch::collada::CColladaFactory *this, const glitch::collada::CColladaDatabase *a2, glitch::collada::CColladaDatabase *a3);
// [0xd01390] (81 bytes) glitch::collada::CModularSkinnedMesh::getMaterialVertexAttributeMap(unsigned int)const
// glitch::collada::CModularSkinnedMesh *glitch::collada::CModularSkinnedMesh::getMaterialVertexAttributeMap( glitch::collada::CModularSkinnedMesh *this, unsigned int a2, int a3);
// [0xd013f0] (78 bytes) glitch::collada::CMorphingMesh::getMaterialVertexAttributeMap(unsigned int)const
// glitch::collada::CMorphingMesh *glitch::collada::CMorphingMesh::getMaterialVertexAttributeMap( glitch::collada::CMorphingMesh *this, unsigned int a2, int a3);
// [0xd01440] (81 bytes) glitch::collada::CSkinnedMesh::getMaterialVertexAttributeMap(unsigned int)const
// glitch::collada::CSkinnedMesh *glitch::collada::CSkinnedMesh::getMaterialVertexAttributeMap( glitch::collada::CSkinnedMesh *this, unsigned int a2, int a3);
// [0xd014a0] (124 bytes) glitch::collada::CMesh::getMaterialVertexAttributeMap(unsigned int)const
// glitch::collada::CMesh *glitch::collada::CMesh::getMaterialVertexAttributeMap( glitch::collada::CMesh *this, unsigned int a2, unsigned int a3);
// [0xd01520] (188 bytes) glitch::collada::CModularSkinnedMesh::getMaterialByCategoryId(unsigned int)const
// glitch::collada::CModularSkinnedMesh *glitch::collada::CModularSkinnedMesh::getMaterialByCategoryId( glitch::collada::CModularSkinnedMesh *this, unsigned int a2, int a3);
// [0xd015e0] (133 bytes) glitch::collada::CModularSkinnedMesh::getMaterial(unsigned int)const
// glitch::collada::CModularSkinnedMesh *glitch::collada::CModularSkinnedMesh::getMaterial( glitch::collada::CModularSkinnedMesh *this, unsigned int a2, unsigned int a3);
// [0xd01670] (125 bytes) glitch::collada::CMorphingMesh::getMaterial(unsigned int)const
// glitch::collada::CMorphingMesh *glitch::collada::CMorphingMesh::getMaterial( glitch::collada::CMorphingMesh *this, unsigned int a2, unsigned int a3);
// [0xd016f0] (133 bytes) glitch::collada::CSkinnedMesh::getMaterial(unsigned int)const
// glitch::collada::CSkinnedMesh *glitch::collada::CSkinnedMesh::getMaterial( glitch::collada::CSkinnedMesh *this, unsigned int a2, unsigned int a3);
// [0xd01780] (124 bytes) glitch::collada::CMesh::getMaterial(unsigned int)const
// glitch::collada::CMesh *glitch::collada::CMesh::getMaterial( glitch::collada::CMesh *this, unsigned int a2, unsigned int a3);
// [0xd01800] (341 bytes) glitch::collada::CSkinnedMesh::setMaterial(unsigned int,boost::intrusive_ptr<glitch::video::CMaterial> const&,boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap> const&)
// int glitch::collada::CSkinnedMesh::setMaterial( int a1, int a2, volatile int32_t **a3, volatile int32_t **a4);
// [0xd01960] (301 bytes) glitch::collada::CMorphingMesh::setMaterial(unsigned int,boost::intrusive_ptr<glitch::video::CMaterial> const&,boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap> const&)
// volatile int32_t *glitch::collada::CMorphingMesh::setMaterial( int a1, int a2, volatile int32_t **a3, volatile int32_t **a4);
// [0xd01a90] (253 bytes) glitch::collada::CModularSkinnedMesh::setMaterial(unsigned int,boost::intrusive_ptr<glitch::video::CMaterial> const&,boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap> const&)
// volatile int32_t *glitch::collada::CModularSkinnedMesh::setMaterial( int a1, int a2, volatile int32_t **a3, volatile int32_t **a4);
// [0xd01b90] (250 bytes) glitch::collada::CMesh::setMaterial(unsigned int,boost::intrusive_ptr<glitch::video::CMaterial> const&,boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap> const&)
// unsigned int glitch::collada::CMesh::setMaterial( int a1, unsigned int a2, volatile int32_t **a3, volatile int32_t **a4);
// [0xd01d30] (80 bytes) glitch::collada::CMorphingMesh::getMeshBuffer(unsigned int)const
// glitch::collada::CMorphingMesh *glitch::collada::CMorphingMesh::getMeshBuffer( glitch::collada::CMorphingMesh *this, unsigned int a2, int a3);
// [0xd01d80] (83 bytes) glitch::collada::CSkinnedMesh::getMeshBuffer(unsigned int)const
// glitch::collada::CSkinnedMesh *glitch::collada::CSkinnedMesh::getMeshBuffer( glitch::collada::CSkinnedMesh *this, unsigned int a2, int a3);
// [0xd01ec0] (133 bytes) glitch::collada::CModularSkinnedMesh::getMeshBuffer(unsigned int)const
// glitch::collada::CModularSkinnedMesh *glitch::collada::CModularSkinnedMesh::getMeshBuffer( glitch::collada::CModularSkinnedMesh *this, unsigned int a2, int a3);
// [0xd01f50] (126 bytes) glitch::collada::CMesh::getMeshBuffer(unsigned int)const
// glitch::collada::CMesh *glitch::collada::CMesh::getMeshBuffer( glitch::collada::CMesh *this, unsigned int a2, unsigned int a3);
// [0xd02120] (372 bytes) glitch::collada::CColladaFactory::createLodSelector(glitch::collada::CColladaDatabase const&,glitch::collada::SController *,glitch::collada::CRootSceneNode *)
// volatile int32_t **glitch::collada::CColladaFactory::createLodSelector( volatile int32_t **a1, int a2, int a3, int a4);
// [0xd022a0] (107 bytes) glitch::collada::ps::IParticleContext::~IParticleContext()
// void glitch::collada::ps::IParticleContext::~IParticleContext(glitch::collada::ps::IParticleContext *this);
// [0xd02310] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel( glitch::collada::ps::CParticleSystemSpinModel *this);
// [0xd02320] (54 bytes) glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel()
// void glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel( glitch::collada::ps::CParticleSystemSpinModel *this);
// [0xd02360] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel( glitch::collada::ps::CParticleSystemSpinModel *this);
// [0xd02370] (56 bytes) glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel()
// void glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel( glitch::collada::ps::CParticleSystemSpinModel *this);
// [0xd023b0] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel( glitch::collada::ps::CParticleSystemSizeModel *this);
// [0xd023c0] (54 bytes) glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel()
// void glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel( glitch::collada::ps::CParticleSystemSizeModel *this);
// [0xd02400] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel( glitch::collada::ps::CParticleSystemSizeModel *this);
// [0xd02410] (56 bytes) glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel()
// void glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel( glitch::collada::ps::CParticleSystemSizeModel *this);
// [0xd02450] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel( glitch::collada::ps::CParticleSystemMotionModel *this);
// [0xd02460] (54 bytes) glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel()
// void glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel( glitch::collada::ps::CParticleSystemMotionModel *this);
// [0xd024a0] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel( glitch::collada::ps::CParticleSystemMotionModel *this);
// [0xd024b0] (56 bytes) glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel()
// void glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel( glitch::collada::ps::CParticleSystemMotionModel *this);
// [0xd024f0] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel( glitch::collada::ps::CParticleSystemLifeModel *this);
// [0xd02500] (54 bytes) glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel()
// void glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel( glitch::collada::ps::CParticleSystemLifeModel *this);
// [0xd02540] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel( glitch::collada::ps::CParticleSystemLifeModel *this);
// [0xd02550] (56 bytes) glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel()
// void glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel( glitch::collada::ps::CParticleSystemLifeModel *this);
// [0xd02590] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel( glitch::collada::ps::CParticleSystemGenerationModel *this);
// [0xd025a0] (54 bytes) glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel()
// void glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel( glitch::collada::ps::CParticleSystemGenerationModel *this);
// [0xd025e0] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel( glitch::collada::ps::CParticleSystemGenerationModel *this);
// [0xd025f0] (56 bytes) glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel()
// void glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel( glitch::collada::ps::CParticleSystemGenerationModel *this);
// [0xd02630] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel( glitch::collada::ps::CParticleSystemColorModel *this);
// [0xd02640] (54 bytes) glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel()
// void glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel( glitch::collada::ps::CParticleSystemColorModel *this);
// [0xd02680] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel( glitch::collada::ps::CParticleSystemColorModel *this);
// [0xd02690] (56 bytes) glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel()
// void glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel( glitch::collada::ps::CParticleSystemColorModel *this);
// [0xd026d0] (56 bytes) glitch::collada::ps::IParticleContext::~IParticleContext()
// void glitch::collada::ps::IParticleContext::~IParticleContext(glitch::collada::ps::IParticleContext *this);
// [0xd02710] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel( glitch::collada::ps::CParticleSystemForcesModel *this);
// [0xd02720] (112 bytes) glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel()
// void glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel( glitch::collada::ps::CParticleSystemForcesModel *this);
// [0xd02790] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel( glitch::collada::ps::CParticleSystemForcesModel *this);
// [0xd027a0] (56 bytes) glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel()
// void glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel( glitch::collada::ps::CParticleSystemForcesModel *this);
// [0xd027e0] (728 bytes) glitch::collada::CColladaFactory::createIKSolver(glitch::collada::CColladaDatabase const&,glitch::collada::SArticulatedSystem const*)const
// int *glitch::collada::CColladaFactory::createIKSolver( int *a1, int a2, glitch::collada::CColladaDatabase *a3, int a4);
// [0xd02ac0] (2302 bytes) glitch::collada::CColladaFactory::createAnimationSet(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SAnimationPackage const*)const
// volatile int32_t **glitch::collada::CColladaFactory::createAnimationSet( volatile int32_t **a1, int a2, int *a3, int a4, int a5, int a6, int *a7, int a8, int a9, int a10, int a11);
// [0xd033c0] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel( glitch::collada::ps::CParticleSystemEmitterModel *this);
// [0xd033d0] (105 bytes) glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel()
// void glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel( glitch::collada::ps::CParticleSystemEmitterModel *this);
// [0xd03440] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel( glitch::collada::ps::CParticleSystemEmitterModel *this);
// [0xd03450] (56 bytes) glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel()
// void glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel( glitch::collada::ps::CParticleSystemEmitterModel *this);
// [0xd03490] (257 bytes) glitch::collada::ps::CParticleSystemGeometryBaker::fillParticleIndexBuffer(glitch::scene::CMeshBuffer const*)
// int glitch::collada::ps::CParticleSystemGeometryBaker::fillParticleIndexBuffer( glitch::collada::ps::CParticleSystemGeometryBaker *this, const glitch::scene::CMeshBuffer *a2);
// [0xd035a0] (260 bytes) glitch::collada::CColladaFactory::getExternalLightSceneNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned short,unsigned int,char const*)
// uint32_t *glitch::collada::CColladaFactory::getExternalLightSceneNode( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, const char *a7);
// [0xd036b0] (185 bytes) glitch::collada::CColladaFactory::createCoronas(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SCoronas *,glitch::collada::CRootSceneNode *)
// uint32_t *glitch::collada::CColladaFactory::createCoronas( uint32_t *a1, int a2, int a3, int a4, int a5, uint32_t *a6);
// [0xd03770] (602 bytes) glitch::collada::CColladaFactory::createCommandNode(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SStreamingCommand *)
// uint32_t *glitch::collada::CColladaFactory::createCommandNode( uint32_t *a1, int a2, glitch::collada::CColladaDatabase *a3, int a4, int a5);
// [0xd03ce0] (174 bytes) glitch::collada::ps::CGeometryDomain::stop(void)
// volatile int32_t *glitch::collada::ps::CGeometryDomain::stop(glitch::collada::ps::CGeometryDomain *this);
// [0xd03df0] (225 bytes) glitch::collada::ps::CParticleSystemBatcher::~CParticleSystemBatcher()
// void glitch::collada::ps::CParticleSystemBatcher::~CParticleSystemBatcher( glitch::collada::ps::CParticleSystemBatcher *this);
// [0xd03ee0] (56 bytes) glitch::collada::ps::CParticleSystemBatcher::~CParticleSystemBatcher()
// void glitch::collada::ps::CParticleSystemBatcher::~CParticleSystemBatcher( glitch::collada::ps::CParticleSystemBatcher *this);
// [0xd03f20] (261 bytes) glitch::collada::ps::IParticleSystemBaker::createVertexBuffer(glitch::collada::ps::CParticleSystem *,glitch::scene::CMeshBuffer const*,unsigned int,boost::intrusive_ptr<glitch::video::CVertexStreams> &)
// int glitch::collada::ps::IParticleSystemBaker::createVertexBuffer( glitch::collada::ps::IParticleSystemBaker *this, glitch::collada::ps::CParticleSystem *a2, const glitch::scene::CMeshBuffer *a3, unsigned int a4, glitch::video::CVertexStreams **a5);
// [0xd04030] (910 bytes) glitch::collada::ps::CParticleSystemGeometryBaker::createIndexBuffer(glitch::collada::ps::CParticleSystem *,glitch::scene::CMeshBuffer const*,glitch::video::CPrimitiveStream *)
// int glitch::collada::ps::CParticleSystemGeometryBaker::createIndexBuffer( glitch::collada::ps::CParticleSystemGeometryBaker *this, glitch::collada::ps::CParticleSystem *a2, const glitch::scene::CMeshBuffer *a3, glitch::video::CPrimitiveStream *a4);
// [0xd04470] (643 bytes) glitch::collada::CMorphingMesh::~CMorphingMesh()
// void glitch::collada::CMorphingMesh::~CMorphingMesh(glitch::collada::CRootSceneNode **this);
// [0xd04700] (56 bytes) glitch::collada::CMorphingMesh::~CMorphingMesh()
// void glitch::collada::CMorphingMesh::~CMorphingMesh(glitch::collada::CRootSceneNode **this);
// [0xd04740] (168 bytes) glitch::collada::CSkinnedMesh::skin(unsigned int)
// volatile int32_t *glitch::collada::CSkinnedMesh::skin( glitch::collada::CSkinnedMesh *this, unsigned int a2);
// [0xd047f0] (274 bytes) glitch::collada::CSkinnedMesh::skin(unsigned int,boost::intrusive_ptr<glitch::video::CMaterial>)
// volatile int32_t *glitch::collada::CSkinnedMesh::skin(int a1, int a2, volatile int32_t **a3);
// [0xd04910] (354 bytes) glitch::collada::ISkinnedMesh::releaseProcessBuffer(glitch::video::IVideoDriver *,unsigned int)
// int glitch::collada::ISkinnedMesh::releaseProcessBuffer( glitch::collada::ISkinnedMesh *this, glitch::video::IVideoDriver *a2, char a3, int a4);
// [0xd04a80] (129 bytes) glitch::collada::CSkinnedMesh::releaseProcessBuffer(glitch::video::IVideoDriver *,unsigned int)
// int16_t glitch::collada::CSkinnedMesh::releaseProcessBuffer( glitch::collada::CSkinnedMesh *this, glitch::video::IVideoDriver *a2, unsigned int a3);
// [0xd04b10] (229 bytes) glitch::collada::CMorphingMesh::releaseProcessBuffer(glitch::video::IVideoDriver *,unsigned int)
// int glitch::collada::CMorphingMesh::releaseProcessBuffer( glitch::collada::CMorphingMesh *this, glitch::video::IVideoDriver *a2, unsigned int a3);
// [0xd05620] (469 bytes) glitch::collada::ps::CGeometryDomain::start(void)
// volatile int32_t *glitch::collada::ps::CGeometryDomain::start(volatile int32_t **this);
// [0xd05800] (1077 bytes) glitch::collada::CMorphingMesh::init(glitch::video::IVideoDriver *,bool,glitch::collada::SProcessBufferConfig const&)
// int glitch::collada::CMorphingMesh::init(int a1, int a2, uint8_t a3, int *a4);
// [0xd05c40] (1696 bytes) glitch::collada::CColladaFactory::createMaterialVertexAttributeMap(glitch::collada::CColladaDatabase const&,glitch::collada::SInstanceMaterial *,boost::intrusive_ptr<glitch::collada::IMesh> const&,boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned int,bool)
// glitch::video::CMaterialVertexAttributeMap **glitch::collada::CColladaFactory::createMaterialVertexAttributeMap( glitch::video::CMaterialVertexAttributeMap **a1, int a2, glitch::video::CMaterialVertexAttributeMap *a3, int a4, uint32_t *a5, int a6, int a7, char a8);
// [0xd062e0] (344 bytes) glitch::collada::CColladaFactory::createAnimator(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::collada::CAnimationSet> const&,glitch::collada::anim_pack::SAnimationGraphNode const&)const
// glitch::collada::ISceneNodeAnimator **glitch::collada::CColladaFactory::createAnimator( glitch::collada::ISceneNodeAnimator **a1, int a2, int a3, int a4, int a5);
// [0xd06440] (260 bytes) glitch::collada::CColladaFactory::getExternalLightSceneNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::video::CMaterialRenderer const> const&,unsigned short,unsigned int,char const*)
// uint32_t *glitch::collada::CColladaFactory::getExternalLightSceneNode( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, const char *a7);
// [0xd06550] (108 bytes) glitch::collada::CParametricController1DBase::CParametricController1DBase(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// int glitch::collada::CParametricController1DBase::CParametricController1DBase( uint32_t *a1, int a2, int a3, int a4);
// [0xd065c0] (193 bytes) glitch::collada::CCircularParametricController1d::CCircularParametricController1d(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// float *glitch::collada::CCircularParametricController1d::CCircularParametricController1d( float *a1, int a2, int a3, int a4);
// [0xd06690] (108 bytes) glitch::collada::CParametricController2DBase::CParametricController2DBase(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// int glitch::collada::CParametricController2DBase::CParametricController2DBase( uint32_t *a1, int a2, int a3, int a4);
// [0xd06700] (549 bytes) glitch::collada::CParametricController2DBase::getSurfaceIndex(int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float>*)const
// int glitch::collada::CParametricController2DBase::getSurfaceIndex(uint32_t *a1, int a2, int a3, float *a4);
// [0xd06930] (392 bytes) glitch::collada::CParametricController2DBase::packClipWeights(glitch::collada::anim_pack::SParametricControllerSurface const&,glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *)const
// int glitch::collada::CParametricController2DBase::packClipWeights(int a1, uint32_t *a2, float *a3, float *a4);
// [0xd06ac0] (1175 bytes) glitch::collada::CPlanarParametricController2d::getClipWeights(glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *,glitch::core::vector3d<float>*)
// int glitch::collada::CPlanarParametricController2d::getClipWeights(uint32_t *a1, float *a2, float *a3, float *a4);
// [0xd06f60] (83 bytes) glitch::collada::CPlanarParametricController2d::CPlanarParametricController2d(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// void (**glitch::collada::CPlanarParametricController2d::CPlanarParametricController2d( uint32_t *a1, int a2, int a3, int a4))(glitch::collada::CPlanarParametricController2d *__hidden this);
// [0xd06fc0] (83 bytes) glitch::collada::CSphericalParametricController2d::CSphericalParametricController2d(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// void (**glitch::collada::CSphericalParametricController2d::CSphericalParametricController2d( uint32_t *a1, int a2, int a3, int a4))(glitch::collada::CSphericalParametricController2d *__hidden this);
// [0xd07020] (1021 bytes) glitch::collada::CSphericalParametricController2d::computeBarycentricCoords(glitch::collada::anim_pack::SParametricControllerSurface const&,glitch::core::vector3d<float> const&)const
// int glitch::collada::CSphericalParametricController2d::computeBarycentricCoords(int a1);
// [0xd07420] (1592 bytes) glitch::collada::CSphericalParametricController2d::getClipWeights(glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *,glitch::core::vector3d<float>*)
// int glitch::collada::CSphericalParametricController2d::getClipWeights( uint32_t *a1, float *a2, float *a3, uint32_t *a4);
// [0xd07a60] (108 bytes) glitch::collada::CParametricController3d::CParametricController3d(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// int glitch::collada::CParametricController3d::CParametricController3d(uint32_t *a1, int a2, int a3, int a4);
// [0xd07ad0] (209 bytes) glitch::collada::CCylindricalParametricController3D::CCylindricalParametricController3D(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// float *glitch::collada::CCylindricalParametricController3D::CCylindricalParametricController3D( float *a1, int a2, int a3, int a4);
// [0xd07bb0] (588 bytes) glitch::collada::CParametricController3d::getVolume(glitch::core::vector3d<float> const&,glitch::core::vector4d<float> &)const
// float *glitch::collada::CParametricController3d::getVolume(int a1, float *a2, float *a3);
// [0xd07e00] (518 bytes) glitch::collada::CParametricController3d::packClipWeights(glitch::collada::anim_pack::SGridVolume const&,glitch::core::vector4d<float> const&,glitch::collada::SClipWeight *)const
// int glitch::collada::CParametricController3d::packClipWeights(int a1, uint32_t *a2, float *a3, float *a4);
// [0xd08010] (192 bytes) glitch::collada::CParametricController3d::getClipWeights(glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *,glitch::core::vector3d<float>*)
// int glitch::collada::CParametricController3d::getClipWeights(int *a1, uint32_t *a2, float *a3, uint32_t *a4);
// [0xd080d0] (270 bytes) glitch::collada::CCylindricalParametricController3D::getClipWeights(glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *,glitch::core::vector3d<float>*)
// int glitch::collada::CCylindricalParametricController3D::getClipWeights( int *a1, uint32_t *a2, float *a3, uint32_t *a4);
// [0xd081e0] (315 bytes) glitch::collada::CCylindricalParametricController3D::getClipWeights(glitch::core::vector3d<float> const&,glitch::core::vector4d<float> const&,glitch::collada::SClipWeight *)const
// int glitch::collada::CCylindricalParametricController3D::getClipWeights(int a1, int a2, float *a3, float *a4);
// [0xd08320] (53 bytes) glitch::collada::SEffectTechniqueMap::SEffectTechniqueMap(void)
// struct glitch::collada::SEffectTechniqueMap *glitch::collada::SEffectTechniqueMap::SEffectTechniqueMap( glitch::collada::SEffectTechniqueMap *this);
// [0xd08360] (65 bytes) glitch::collada::SEffectTechniqueMap::~SEffectTechniqueMap()
// void glitch::collada::SEffectTechniqueMap::~SEffectTechniqueMap(glitch::collada::SEffectTechniqueMap *this);
// [0xd083b0] (57 bytes) glitch::collada::SEffectTechniqueMap::set(unsigned int,char const**,void (*)(char const**,void *),void *,unsigned char *,void (*)(unsigned char *,void *),void *)
// glitch::collada::SEffectTechniqueMap *glitch::collada::SEffectTechniqueMap::set( glitch::collada::SEffectTechniqueMap *this, unsigned int a2, const char **a3, void (*a4)(const char **, void *), void *a5, uint8_t *a6, void (*a7)(uint8_t *, void *), void *a8);
// [0xd083f0] (233 bytes) glitch::collada::CColladaFactory::getEffectPlatformTechniqueMap(glitch::collada::CColladaDatabase const&,glitch::collada::SEffect *,glitch::collada::SPlatformTechniqueMap &,glitch::collada::SEffectTechniqueMap &)
// glitch::collada::SEffectTechniqueMap *glitch::collada::CColladaFactory::getEffectPlatformTechniqueMap( int a1, glitch::collada::SEffectTechniqueMap *a2, int a3, uint8_t *a4, glitch::collada::SEffectTechniqueMap *a5);
// [0xd084e0] (409 bytes) glitch::collada::CColladaFactory::initParticleSystem(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SGNPSEmitter *,boost::intrusive_ptr<glitch::collada::CParticleSystemEmitterSceneNode> const&)
// volatile int32_t *glitch::collada::CColladaFactory::initParticleSystem( int a1, glitch::video::IVideoDriver *a2, const char *a3, int a4, uint32_t *a5);
// [0xd08680] (183 bytes) glitch::collada::CColladaFactory::createGlitchNewParticleSystem(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SGNPSEmitter *,glitch::res::vector<glitch::res::String> *,glitch::collada::CRootSceneNode *)
// glitch::IObject **glitch::collada::CColladaFactory::createGlitchNewParticleSystem( glitch::IObject **a1, int a2, glitch::video::IVideoDriver *a3, const char *a4, int a5, int a6, int a7);
// [0xd08740] (34 bytes) glitch::collada::CColladaFactoryChooseSkin::CColladaFactoryChooseSkin(bool (*)(glitch::video::STechnique const&,unsigned int))
// glitch::collada::CColladaFactoryChooseSkin *glitch::collada::CColladaFactoryChooseSkin::CColladaFactoryChooseSkin( glitch::collada::CColladaFactoryChooseSkin *this, bool (*a2)(const glitch::video::STechnique *, unsigned int));
// [0xd08770] (69 bytes) glitch::collada::CColladaFactoryCommonSkinned::CColladaFactoryCommonSkinned(void)
// void (**glitch::collada::CColladaFactoryCommonSkinned::CColladaFactoryCommonSkinned( glitch::collada::CColladaFactoryCommonSkinned *this))(glitch::collada::CColladaFactoryCommonSkinned *__hidden this);
// [0xd087c0] (34 bytes) glitch::collada::CColladaFactoryWrapperBase::CColladaFactoryWrapperBase(glitch::collada::CColladaFactory *)
// glitch::collada::CColladaFactoryWrapperBase *glitch::collada::CColladaFactoryWrapperBase::CColladaFactoryWrapperBase( glitch::collada::CColladaFactoryWrapperBase *this, glitch::collada::CColladaFactory *a2);
// [0xd087f0] (136 bytes) glitch::collada::CModularSkinnedMesh::getCategoryId(char const*)const
// int glitch::collada::CModularSkinnedMesh::getCategoryId(glitch::collada::CModularSkinnedMesh *this, char *s2);
// [0xd08880] (34 bytes) glitch::collada::CModularSkinnedMesh::getCategoryName(int)const
// int glitch::collada::CModularSkinnedMesh::getCategoryName(glitch::collada::CModularSkinnedMesh *this, int a2);
// [0xd088b0] (182 bytes) glitch::collada::CModularSkinnedMesh::getModuleId(char const*)const
// int glitch::collada::CModularSkinnedMesh::getModuleId(glitch::collada::CModularSkinnedMesh *this, char *s2);
// [0xd08970] (160 bytes) glitch::collada::CModularSkinnedMesh::getModuleId(int,char const*)const
// int glitch::collada::CModularSkinnedMesh::getModuleId( glitch::collada::CModularSkinnedMesh *this, int a2, char *s2);
// [0xd08a10] (75 bytes) glitch::collada::CModularSkinnedMesh::getModuleName(int,int)const
// int glitch::collada::CModularSkinnedMesh::getModuleName( glitch::collada::CModularSkinnedMesh *this, int a2, int a3);
// [0xd08a60] (2090 bytes) glitch::collada::CModularSkinnedMesh::findBiggestModules(int,std::list<std::pair<boost::intrusive_ptr<glitch::video::CMaterial>,std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<boost::intrusive_ptr<glitch::video::CMaterial>,std::pair<unsigned int,unsigned int>>>> &)
// void glitch::collada::CModularSkinnedMesh::findBiggestModules(int a1, int a2, uint32_t *a3);
// [0xd09290] (15 bytes) glitch::collada::CModularSkinnedMesh::getCategoryCount(void)const
// int glitch::collada::CModularSkinnedMesh::getCategoryCount(glitch::collada::CModularSkinnedMesh *this);
// [0xd092a0] (26 bytes) glitch::collada::CModularSkinnedMesh::getCategoryModuleCount(int)const
// int glitch::collada::CModularSkinnedMesh::getCategoryModuleCount( glitch::collada::CModularSkinnedMesh *this, int a2);
// [0xd092c0] (23 bytes) glitch::collada::CModularSkinnedMesh::getCurrentModuleId(int)const
// int glitch::collada::CModularSkinnedMesh::getCurrentModuleId( glitch::collada::CModularSkinnedMesh *this, int a2);
// [0xd092e0] (116 bytes) glitch::collada::CModularSkinnedMesh::getCurrentModuleName(int)const
// int glitch::collada::CModularSkinnedMesh::getCurrentModuleName( glitch::collada::CModularSkinnedMesh *this, int a2);
// [0xd09360] (9 bytes) glitch::collada::CModularSkinnedMesh::reallocate(unsigned int)
// int glitch::collada::CModularSkinnedMesh::reallocate();
// [0xd09370] (631 bytes) glitch::collada::CModularSkinnedMesh::computeBoundingBox(void)
// int glitch::collada::CModularSkinnedMesh::computeBoundingBox(glitch::collada::CModularSkinnedMesh *this);
// [0xd095f0] (60 bytes) glitch::collada::CModularSkinnedMesh::getBoundingBox(void)const
// char *glitch::collada::CModularSkinnedMesh::getBoundingBox(glitch::collada::CModularSkinnedMesh *this);
// [0xd09630] (569 bytes) glitch::collada::CModularSkinnedMesh::setCategoryMaterialBinding(int,boost::intrusive_ptr<glitch::video::CMaterial> const&,boost::intrusive_ptr<glitch::scene::CMeshBuffer> const&)
// int glitch::collada::CModularSkinnedMesh::setCategoryMaterialBinding(int a1, int a2, unsigned int *a3, int *a4);
// [0xd09870] (152 bytes) glitch::collada::CModularSkinnedMesh::getCategoryMaterialBinding(int,boost::intrusive_ptr<glitch::video::CMaterial> const&)
// uint32_t *glitch::collada::CModularSkinnedMesh::getCategoryMaterialBinding( uint32_t *a1, int a2, int a3, unsigned int *a4);
// [0xd09910] (354 bytes) glitch::collada::CModularSkinnedMesh::forceUpdateBuffer(void)
// int glitch::collada::CModularSkinnedMesh::forceUpdateBuffer(glitch::collada::CModularSkinnedMesh *this);
// [0xd09a80] (489 bytes) glitch::collada::CModularSkinnedMeshBatchManager::SHash::operator()(glitch::collada::modularSkinnedMesh::SKey const&)const
// int glitch::collada::CModularSkinnedMeshBatchManager::SHash::operator()(int a1, int *a2);
// [0xd09c70] (105 bytes) glitch::collada::CModularSkinnedMeshBatchManager::SEqualTo::operator()(glitch::collada::modularSkinnedMesh::SKey const&,glitch::collada::modularSkinnedMesh::SKey const&)const
// int glitch::collada::CModularSkinnedMeshBatchManager::SEqualTo::operator()(int a1, uint32_t *a2, uint32_t *a3);
// [0xd09ce0] (235 bytes) glitch::collada::CModularSkinnedMeshBatchManager::findAndIncrement(glitch::collada::modularSkinnedMesh::SKey const&)
// glitch::collada::CModularSkinnedMeshBatchManager *glitch::collada::CModularSkinnedMeshBatchManager::findAndIncrement( glitch::collada::CModularSkinnedMeshBatchManager *this, pthread_mutex_t **a2, int *a3);
// [0xd09dd0] (55 bytes) glitch::collada::modularSkinnedMesh::SCategory::SCategory(void)
// struct glitch::collada::modularSkinnedMesh::SCategory *glitch::collada::modularSkinnedMesh::SCategory::SCategory( glitch::collada::modularSkinnedMesh::SCategory *this);
// [0xd09e10] (90 bytes) glitch::collada::modularSkinnedMesh::SCategory::reset(void)
// volatile int32_t *glitch::collada::modularSkinnedMesh::SCategory::reset( glitch::collada::modularSkinnedMesh::SCategory *this);
// [0xd09e70] (74 bytes) glitch::collada::modularSkinnedMesh::SModularBuffer::SModularBuffer(void)
// struct glitch::collada::modularSkinnedMesh::SModularBuffer *glitch::collada::modularSkinnedMesh::SModularBuffer::SModularBuffer( glitch::collada::modularSkinnedMesh::SModularBuffer *this);
// [0xd09ec0] (218 bytes) glitch::collada::modularSkinnedMesh::SModularBuffer::~SModularBuffer()
// void glitch::collada::modularSkinnedMesh::SModularBuffer::~SModularBuffer( glitch::collada::modularSkinnedMesh::SModularBuffer *this);
// [0xd09fa0] (131 bytes) glitch::collada::modularSkinnedMesh::SSharedModularBuffer::SSharedModularBuffer(glitch::collada::modularSkinnedMesh::SModularBuffer const&)
// struct glitch::collada::modularSkinnedMesh::SSharedModularBuffer *glitch::collada::modularSkinnedMesh::SSharedModularBuffer::SSharedModularBuffer( glitch::collada::modularSkinnedMesh::SSharedModularBuffer *this, const glitch::collada::modularSkinnedMesh::SModularBuffer *a2);
// [0xd0a030] (138 bytes) glitch::collada::modularSkinnedMesh::SSharedModularBuffer::~SSharedModularBuffer()
// void glitch::collada::modularSkinnedMesh::SSharedModularBuffer::~SSharedModularBuffer( glitch::collada::modularSkinnedMesh::SSharedModularBuffer *this);
// [0xd0a0c0] (549 bytes) glitch::collada::CModularSkinnedMeshBatchManager::release(glitch::collada::modularSkinnedMesh::SKey const&)
// int glitch::collada::CModularSkinnedMeshBatchManager::release( pthread_mutex_t **this, const glitch::collada::modularSkinnedMesh::SKey *a2);
// [0xd0a2f0] (53 bytes) glitch::collada::modularSkinnedMesh::SKey::SKey(void)
// struct glitch::collada::modularSkinnedMesh::SKey *glitch::collada::modularSkinnedMesh::SKey::SKey( glitch::collada::modularSkinnedMesh::SKey *this);
// [0xd0a330] (302 bytes) glitch::collada::modularSkinnedMesh::SKey::SKey(unsigned int,std::vector<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>> const&,std::vector<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int glitch::collada::modularSkinnedMesh::SKey::SKey( glitch::collada::modularSkinnedMesh::SKey *this, unsigned int a2, const std::vector<unsigned int, glitch::core::SAllocator<unsigned int, (glitch::memory::E_MEMORY_HINT)0>> *a3, const std::vector<unsigned int, glitch::core::SAllocator<unsigned int, (glitch::memory::E_MEMORY_HINT)0>> *a4);
// [0xd0a460] (326 bytes) glitch::collada::modularSkinnedMesh::SKey::SKey(glitch::collada::modularSkinnedMesh::SKey const&)
// glitch::collada::modularSkinnedMesh::SKey *glitch::collada::modularSkinnedMesh::SKey::SKey( glitch::collada::modularSkinnedMesh::SKey *this, const glitch::collada::modularSkinnedMesh::SKey *a2);
// [0xd0a5b0] (1666 bytes) glitch::collada::modularSkinnedMesh::SKey::SKey(boost::intrusive_ptr<glitch::collada::CResFile> const&,std::vector<glitch::collada::modularSkinnedMesh::SModularBuffer,glitch::core::SAllocator<glitch::collada::modularSkinnedMesh::SModularBuffer,(glitch::memory::E_MEMORY_HINT)0>> const&,std::vector<glitch::collada::modularSkinnedMesh::SCategory,glitch::core::SAllocator<glitch::collada::modularSkinnedMesh::SCategory,(glitch::memory::E_MEMORY_HINT)0>> const&)
// unsigned int glitch::collada::modularSkinnedMesh::SKey::SKey(uint32_t *a1, int *a2, int *a3, int *a4);
// [0xd0ac40] (1850 bytes) glitch::collada::CMorphingMesh::instanciateMesh(glitch::video::IVideoDriver *,glitch::collada::CRootSceneNode *)
// int glitch::collada::CMorphingMesh::instanciateMesh( volatile int32_t ***this, glitch::video::IVideoDriver *a2, glitch::collada::CRootSceneNode *a3);
// [0xd0b380] (2588 bytes) glitch::collada::CMorphingMesh::morph(unsigned int)
// 0xd0b380 glitch::collada::CMorphingMesh::morph(unsigned int)
// [0xd0bda0] (710 bytes) glitch::collada::CMorphingMesh::onPrepareBufferForRendering(glitch::collada::E_PREPARE_BUFFER_STEP,glitch::video::IVideoDriver *,unsigned int)
// int glitch::collada::CMorphingMesh::onPrepareBufferForRendering( glitch::collada::CMorphingMesh *a1, int a2, int a3, int a4);
// [0xd0c070] (1807 bytes) glitch::collada::CSkinnedMesh::instanciateMesh(glitch::video::IVideoDriver *,glitch::collada::CRootSceneNode *)
// unsigned int glitch::collada::CSkinnedMesh::instanciateMesh( glitch::collada::CSkinnedMesh *this, glitch::video::IVideoDriver *a2, glitch::collada::CRootSceneNode *a3);
// [0xd0c780] (85 bytes) glitch::collada::CSkinnedMesh::attach(glitch::scene::ISceneNode *)
// int glitch::collada::CSkinnedMesh::attach(glitch::collada::CSkinnedMesh *this, glitch::scene::ISceneNode *a2);
// [0xd0c7e0] (170 bytes) glitch::collada::CSkinnedMesh::reverifySkinTechnique(glitch::collada::SSkinBuffer const&)const
// int glitch::collada::CSkinnedMesh::reverifySkinTechnique(uint32_t *a1, int a2);
// [0xd0c890] (87 bytes) glitch::collada::CSkinnedMesh::needOutputBuffer(void)const
// int glitch::collada::CSkinnedMesh::needOutputBuffer(glitch::collada::CSkinnedMesh *this);
// [0xd0c8f0] (487 bytes) glitch::collada::CSkinnedMesh::setIsSkinningEnabled(bool)
// unsigned int glitch::collada::CSkinnedMesh::setIsSkinningEnabled(glitch::collada::CSkinnedMesh *this, bool a2);
// [0xd0cae0] (460 bytes) glitch::collada::CSkinnedMesh::updateTechnique(unsigned int)
// int glitch::collada::CSkinnedMesh::updateTechnique(glitch::collada::CSkinnedMesh *this, unsigned int a2);
// [0xd0ccb0] (1356 bytes) glitch::collada::CSkinnedMesh::computeBoundingBox(void)
// int16_t glitch::collada::CSkinnedMesh::computeBoundingBox(glitch::collada::detail::ISkinTechnique **this);
// [0xd0d200] (63 bytes) glitch::collada::CSkinnedMesh::getBoundingBox(void)const
// glitch::collada::detail::ISkinTechnique **glitch::collada::CSkinnedMesh::getBoundingBox( glitch::collada::detail::ISkinTechnique **this);
// [0xd0d240] (154 bytes) glitch::collada::IMesh::IMesh(glitch::collada::CColladaDatabase const&)
// void (**glitch::collada::IMesh::IMesh( glitch::collada::IMesh *this, const glitch::collada::CColladaDatabase *a2))(glitch::collada::IMesh *__hidden this);
// [0xd0d2e0] (368 bytes) glitch::collada::CMesh::CMesh(glitch::collada::CMesh const&)
// glitch::collada::CMesh *glitch::collada::CMesh::CMesh(glitch::collada::CMesh *this, char **a2);
// [0xd0d450] (107 bytes) glitch::collada::CMesh::clone(void)const
// glitch::collada::CMesh *glitch::collada::CMesh::clone(glitch::collada::CMesh *this, char **a2);
// [0xd0d4c0] (1436 bytes) glitch::collada::CMorphingMesh::CMorphingMesh(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController &,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)
// volatile int32_t *glitch::collada::CMorphingMesh::CMorphingMesh( glitch::collada::IMesh *a1, const glitch::collada::CColladaDatabase *a2, glitch::video::IVideoDriver *a3, uint32_t *a4, int *a5);
// [0xd0da60] (179 bytes) glitch::collada::CColladaFactory::createMorph(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController *,glitch::collada::CRootSceneNode *)
// volatile int32_t **glitch::collada::CColladaFactory::createMorph( volatile int32_t **a1, int a2, const glitch::collada::CColladaDatabase *a3, glitch::video::IVideoDriver *a4, uint32_t *a5, uint32_t *a6);
// [0xd0db20] (1755 bytes) glitch::collada::CSkinnedMesh::CSkinnedMesh(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController &,glitch::collada::CRootSceneNode *,bool)
// int glitch::collada::CSkinnedMesh::CSkinnedMesh( glitch::collada::IMesh *a1, const glitch::collada::CColladaDatabase *a2, glitch::video::IVideoDriver *a3, int a4, glitch::collada::CRootSceneNode *a5, char a6);
// [0xd0e200] (139 bytes) glitch::collada::CColladaFactory::createSkin(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController *,glitch::collada::CRootSceneNode *)
// volatile int32_t **glitch::collada::CColladaFactory::createSkin( volatile int32_t **a1, int a2, const glitch::collada::CColladaDatabase *a3, glitch::video::IVideoDriver *a4, int a5, glitch::collada::CRootSceneNode *a6);
// [0xd0e290] (42 bytes) glitch::collada::ISkinnedMesh::initIsSkinningDirty(bool)
// int glitch::collada::ISkinnedMesh::initIsSkinningDirty(glitch::collada::ISkinnedMesh *this, bool a2);
// [0xd0e2c0] (361 bytes) glitch::collada::CSkinnedMesh::init(glitch::video::IVideoDriver *,bool,glitch::collada::SProcessBufferConfig const&,glitch::collada::SProcessBufferConfig const&)
// int glitch::collada::CSkinnedMesh::init(glitch::collada::ISkinnedMesh *a1, int a2, char a3, int a4, int a5);
// [0xd0e430] (115 bytes) glitch::collada::ISkinnedMesh::updateIsSkinningDirty(bool)
// unsigned int glitch::collada::ISkinnedMesh::updateIsSkinningDirty(glitch::collada::ISkinnedMesh *this, bool a2);
// [0xd0e4b0] (130 bytes) glitch::collada::CSkinnedMesh::onAnimate(float)
// int glitch::collada::CSkinnedMesh::onAnimate(glitch::collada::CSkinnedMesh *this, float a2);
// [0xd0e540] (31 bytes) glitch::collada::ISkinnedMesh::forceIsSkinningDirty(bool)
// unsigned int glitch::collada::ISkinnedMesh::forceIsSkinningDirty(glitch::collada::ISkinnedMesh *this, bool a2);
// [0xd0e560] (233 bytes) glitch::collada::CModularSkinnedMesh::onAnimate(float)
// int glitch::collada::CModularSkinnedMesh::onAnimate(glitch::collada::CModularSkinnedMesh *this, float a2);
// [0xd0e650] (707 bytes) glitch::collada::CModularSkinnedMesh::setCategoryModule(int,int,bool)
// unsigned int glitch::collada::CModularSkinnedMesh::setCategoryModule( glitch::collada::CModularSkinnedMesh *this, int a2, int a3, bool a4);
// [0xd0e920] (121 bytes) glitch::collada::CModularSkinnedMesh::setCategoryModule(char const*,char const*,bool)
// unsigned int glitch::collada::CModularSkinnedMesh::setCategoryModule( glitch::collada::CModularSkinnedMesh *this, char *a2, char *a3, bool a4);
// [0xd0e9a0] (13 bytes) glitch::collada::ISkinnedMesh::onSkinningBufferUpdated(void)
// glitch::collada::ISkinnedMesh *glitch::collada::ISkinnedMesh::onSkinningBufferUpdated( glitch::collada::ISkinnedMesh *this);
// [0xd0e9b0] (3567 bytes) glitch::collada::CModularSkinnedMesh::skin(unsigned int,glitch::collada::E_PREPARE_BUFFER_STEP,glitch::video::IVideoDriver *,bool)
// int glitch::collada::CModularSkinnedMesh::skin( glitch::collada::ISkinnedMesh *a1, int a2, int a3, int a4, char a5);
// [0xd0f7a0] (368 bytes) glitch::collada::CSkinnedMesh::onPrepareBufferForRendering(glitch::collada::E_PREPARE_BUFFER_STEP,glitch::video::IVideoDriver *,unsigned int)
// int glitch::collada::CSkinnedMesh::onPrepareBufferForRendering( glitch::collada::ISkinnedMesh *a1, int a2, int a3, int a4);
// [0xd0f910] (123 bytes) glitch::collada::ps::CParticleSystemManager::CParticleSystemManager(void)
// pthread_mutex_t **glitch::collada::ps::CParticleSystemManager::CParticleSystemManager( glitch::collada::ps::CParticleSystemManager *this);
// [0xd0f990] (187 bytes) glitch::collada::ps::CParticleSystemManager::activateEmitter(glitch::collada::ps::CParticleSystem *)
// int glitch::collada::ps::CParticleSystemManager::activateEmitter( pthread_mutex_t **this, glitch::collada::ps::CParticleSystem *a2);
// [0xd0fa50] (200 bytes) glitch::collada::ps::CParticleSystemManager::unactivateEmitter(glitch::collada::ps::CParticleSystem *)
// int glitch::collada::ps::CParticleSystemManager::unactivateEmitter( pthread_mutex_t **this, glitch::collada::ps::CParticleSystem *a2);
// [0xd0fb20] (116 bytes) glitch::collada::ps::CParticleSystemManager::deleteParticleSystem(glitch::collada::ps::CParticleSystem *)
// int glitch::collada::ps::CParticleSystemManager::deleteParticleSystem( pthread_mutex_t **this, glitch::collada::ps::CParticleSystem *a2);
// [0xd0fba0] (437 bytes) glitch::collada::ps::CParticleSystemManager::initParameterOffsets(glitch::collada::ps::CParticleSystem *)
// char *glitch::collada::ps::CParticleSystemManager::initParameterOffsets( glitch::collada::ps::CParticleSystemManager *this, glitch::collada::ps::CParticleSystem *a2);
// [0xd0fd60] (54 bytes) glitch::collada::ps::CParticleSystemManager::deallocateParticle(glitch::collada::ps::SParticle *)
// uint32_t *glitch::collada::ps::CParticleSystemManager::deallocateParticle(uint32_t *a1, uint32_t *a2);
// [0xd0fda0] (1255 bytes) glitch::collada::ps::CSmoothRandomGenerator::CSmoothRandomGenerator(void)
// unsigned int glitch::collada::ps::CSmoothRandomGenerator::CSmoothRandomGenerator( glitch::collada::ps::CSmoothRandomGenerator *this);
// [0xd10290] (208 bytes) glitch::collada::ps::CSmoothRandomGenerator::rand(unsigned short,float,float)
// long double glitch::collada::ps::CSmoothRandomGenerator::rand( glitch::collada::ps::CSmoothRandomGenerator *this, uint16_t a2, float a3, unsigned int a4);
// [0xd10360] (112 bytes) glitch::collada::ps::CSmoothRandomGenerator::rand(unsigned short,float,float,float)
// long double glitch::collada::ps::CSmoothRandomGenerator::rand( glitch::collada::ps::CSmoothRandomGenerator *this, uint16_t a2, float a3, unsigned int a4, float a5);
// [0xd103d0] (101 bytes) glitch::collada::ps::CSmoothRandomGenerator::rand(unsigned short,float,float,float,float)
// long double glitch::collada::ps::CSmoothRandomGenerator::rand( glitch::collada::ps::CSmoothRandomGenerator *this, uint16_t a2, float a3, unsigned int a4, float a5, float a6);
// [0xd10440] (213 bytes) glitch::collada::ps::CSmoothRandomGenerator::randVec(unsigned short,glitch::core::vector3d<float> const&,float)
// float *glitch::collada::ps::CSmoothRandomGenerator::randVec( float *a1, glitch::collada::ps::CSmoothRandomGenerator *a2, uint16_t a3, float *a4, unsigned int a5);
// [0xd10520] (246 bytes) glitch::collada::ps::CSmoothRandomGenerator::randVec(unsigned short,glitch::core::vector3d<float> const&,float,glitch::core::vector3d<float> const&)
// float *glitch::collada::ps::CSmoothRandomGenerator::randVec( float *a1, glitch::collada::ps::CSmoothRandomGenerator *a2, uint16_t a3, float *a4, unsigned int a5, float *a6);
// [0xd10620] (280 bytes) glitch::collada::ps::CSmoothRandomGenerator::randVec(unsigned short,glitch::core::vector3d<float> const&,float,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&)
// float *glitch::collada::ps::CSmoothRandomGenerator::randVec( float *a1, glitch::collada::ps::CSmoothRandomGenerator *a2, uint16_t a3, float *a4, unsigned int a5, float *a6, float *a7);
// [0xd10740] (209 bytes) glitch::collada::ps::CParticleSystem::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// int glitch::collada::ps::CParticleSystem::getParameterImpl(uint32_t *a1, int a2);
// [0xd10820] (408 bytes) glitch::collada::ps::IParticleContext::IParticleContext(void)
// struct glitch::collada::ps::IParticleContext *glitch::collada::ps::IParticleContext::IParticleContext( glitch::collada::ps::IParticleContext *this);
// [0xd109c0] (261 bytes) glitch::collada::ps::CParticleSystemBatcher::CParticleSystemBatcher(glitch::video::IVideoDriver *)
// glitch::collada::ps::CParticleSystemBatcher *glitch::collada::ps::CParticleSystemBatcher::CParticleSystemBatcher( glitch::collada::ps::CParticleSystemBatcher *this, glitch::video::IVideoDriver *a2);
// [0xd10ad0] (9 bytes) glitch::collada::ps::CParticleSystemBatcher::releaseBuffers(void)
// void glitch::collada::ps::CParticleSystemBatcher::releaseBuffers();
// [0xd10ae0] (15 bytes) glitch::collada::ps::CParticleSystemBatcher::isCompatible(unsigned int)const
// bool glitch::collada::ps::CParticleSystemBatcher::isCompatible( glitch::collada::ps::CParticleSystemBatcher *this, unsigned int a2);
// [0xd10af0] (786 bytes) glitch::collada::ps::CParticleSystemBatcher::updateVertexBuffer(int)
// 0xd10af0 glitch::collada::ps::CParticleSystemBatcher::updateVertexBuffer(int)
// [0xd10e10] (365 bytes) glitch::collada::ps::CParticleSystemBatcher::createVertexBuffer(unsigned int,unsigned int)
// int glitch::collada::ps::CParticleSystemBatcher::createVertexBuffer( glitch::collada::ps::CParticleSystemBatcher *this, unsigned int a2, unsigned int a3);
// [0xd10f80] (608 bytes) glitch::collada::ps::CParticleSystemBatcher::updateIndexBuffer(int)
// int glitch::collada::ps::CParticleSystemBatcher::updateIndexBuffer( glitch::collada::ps::CParticleSystemBatcher *this, int a2);
// [0xd111e0] (270 bytes) glitch::collada::ps::CParticleSystemBatcher::createIndexBuffer(unsigned int)
// int glitch::collada::ps::CParticleSystemBatcher::createIndexBuffer( glitch::collada::ps::CParticleSystemBatcher *this, unsigned int a2);
// [0xd112f0] (48 bytes) glitch::collada::ps::CParticleSystemBatcher::setIndexRange(unsigned int,unsigned int,unsigned int,unsigned int)
// uint32_t *glitch::collada::ps::CParticleSystemBatcher::setIndexRange( glitch::collada::ps::CParticleSystemBatcher *this, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
// [0xd11320] (12 bytes) glitch::collada::ps::CParticleSystemBatcher::getMaxVertices(void)const
// int glitch::collada::ps::CParticleSystemBatcher::getMaxVertices( glitch::collada::ps::CParticleSystemBatcher *this);
// [0xd11330] (12 bytes) glitch::collada::ps::CParticleSystemBatcher::getMaxIndices(void)const
// int glitch::collada::ps::CParticleSystemBatcher::getMaxIndices( glitch::collada::ps::CParticleSystemBatcher *this);
// [0xd11340] (72 bytes) glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams(void)const
// glitch::collada::ps::CParticleSystemBatcher *glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams( glitch::collada::ps::CParticleSystemBatcher *this, int a2);
// [0xd11390] (18 bytes) glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream(void)const
// char *glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream( glitch::collada::ps::CParticleSystemBatcher *this);
// [0xd113b0] (56 bytes) glitch::collada::ps::CParticleSystemBatcher::resetStreams(void)
// glitch::collada::ps::CParticleSystemBatcher *glitch::collada::ps::CParticleSystemBatcher::resetStreams( glitch::collada::ps::CParticleSystemBatcher *this);
// [0xd113f0] (686 bytes) glitch::collada::ps::CParticleSystemBatcher::mapStreams(unsigned char)
// void glitch::collada::ps::CParticleSystemBatcher::mapStreams( glitch::collada::ps::CParticleSystemBatcher *this, uint8_t a2);
// [0xd116a0] (378 bytes) glitch::collada::ps::CParticleSystemBatcher::unmapStreams(void)
// void glitch::collada::ps::CParticleSystemBatcher::unmapStreams( glitch::collada::ps::CParticleSystemBatcher *this);
// [0xd11820] (1894 bytes) glitch::collada::ps::CParticleSystemBatchingManager::CParticleSystemBatchingManager(void)
// glitch::collada::ps::CParticleSystemBatchingManager *glitch::collada::ps::CParticleSystemBatchingManager::CParticleSystemBatchingManager( glitch::collada::ps::CParticleSystemBatchingManager *this);
// [0xd11f90] (120 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getInstancePtr(void)
// int glitch::collada::ps::CParticleSystemBatchingManager::getInstancePtr();
// [0xd12010] (27 bytes) glitch::collada::ps::getParticleSystemBillboardBatchingManager(void)
// int glitch::collada::ps::getParticleSystemBillboardBatchingManager();
// [0xd12030] (9 bytes) glitch::collada::ps::CParticleSystemBatchingManager::releaseBatch(void)
// void glitch::collada::ps::CParticleSystemBatchingManager::releaseBatch();
// [0xd12040] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd12050] (354 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel()
// void glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd121c0] (15 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel()
// void `virtual thunk to'glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd121d0] (56 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel()
// void glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd12210] (156 bytes) glitch::collada::ps::CParticleSystemBatchingManager::clearRendering(unsigned int,unsigned int)
// glitch::collada::ps::CParticleSystemBatcher *glitch::collada::ps::CParticleSystemBatchingManager::clearRendering( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, unsigned int a3);
// [0xd122b0] (1047 bytes) glitch::collada::ps::CParticleSystemBatchingManager::renderBatch(unsigned int)
// int *glitch::collada::ps::CParticleSystemBatchingManager::renderBatch( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2);
// [0xd126d0] (76 bytes) glitch::collada::ps::CParticleSystemBatchingManager::flushRendering(unsigned int,unsigned int)
// unsigned int glitch::collada::ps::CParticleSystemBatchingManager::flushRendering( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2);
// [0xd12720] (36 bytes) glitch::collada::ps::CParticleSystemBatchingManager::updateVertexCount(unsigned int,unsigned int,unsigned int)
// unsigned int glitch::collada::ps::CParticleSystemBatchingManager::updateVertexCount( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0xd12750] (24 bytes) glitch::collada::ps::CParticleSystemBatchingManager::incrPSRegisteredCount(unsigned int,unsigned int)
// unsigned int glitch::collada::ps::CParticleSystemBatchingManager::incrPSRegisteredCount( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, unsigned int a3);
// [0xd12770] (24 bytes) glitch::collada::ps::CParticleSystemBatchingManager::incrPSRenderedCount(unsigned int,unsigned int)
// unsigned int glitch::collada::ps::CParticleSystemBatchingManager::incrPSRenderedCount( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, unsigned int a3);
// [0xd12790] (123 bytes) glitch::collada::ps::CParticleSystemBatchingManager::resetPSRenderedCount(unsigned int,unsigned int)
// unsigned int glitch::collada::ps::CParticleSystemBatchingManager::resetPSRenderedCount( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, unsigned int a3);
// [0xd12810] (1520 bytes) glitch::collada::ps::CParticleSystemBatchingManager::registerForRendering(unsigned int,unsigned int,boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned int *,bool *,bool)
// unsigned int glitch::collada::ps::CParticleSystemBatchingManager::registerForRendering( glitch::collada::ps::CParticleSystemBatchingManager *a1, unsigned int a2, unsigned int a3, glitch::video::CMaterialRenderer ***a4, uint32_t *a5, uint8_t *a6);
// [0xd12e00] (23 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getPSRegisteredCount(unsigned int,unsigned int)const
// int glitch::collada::ps::CParticleSystemBatchingManager::getPSRegisteredCount( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, unsigned int a3);
// [0xd12e20] (23 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getPSRenderedCount(unsigned int,unsigned int)const
// int glitch::collada::ps::CParticleSystemBatchingManager::getPSRenderedCount( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, unsigned int a3);
// [0xd12e40] (79 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getVertexStreams(unsigned int)const
// glitch::collada::ps::CParticleSystemBatchingManager *glitch::collada::ps::CParticleSystemBatchingManager::getVertexStreams( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, int a3);
// [0xd12e90] (49 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreams(unsigned int)const
// char *glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreams( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2);
// [0xd12ed0] (12 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getRegisteredBatchLock(void)
// char *glitch::collada::ps::CParticleSystemBatchingManager::getRegisteredBatchLock( glitch::collada::ps::CParticleSystemBatchingManager *this);
// [0xd12ee0] (107 bytes) glitch::collada::ps::CParticleSystemBatchingManager::isCompatible(unsigned int,unsigned int)const
// bool glitch::collada::ps::CParticleSystemBatchingManager::isCompatible( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, unsigned int a3);
// [0xd12f50] (58 bytes) glitch::collada::ps::CParticleSystemBatchingManager::mapAllStreams(unsigned int,unsigned char)
// void glitch::collada::ps::CParticleSystemBatchingManager::mapAllStreams( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2, char a3);
// [0xd12f90] (134 bytes) glitch::collada::ps::CParticleSystemBatchingManager::unmapAllStreams(unsigned int)
// void glitch::collada::ps::CParticleSystemBatchingManager::unmapAllStreams( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2);
// [0xd13020] (3172 bytes) glitch::collada::ps::CParticleSystemBatchingManager::unregisterParticleSystem(glitch::collada::ps::CParticleSystem *,unsigned int)
// int glitch::collada::ps::CParticleSystemBatchingManager::unregisterParticleSystem( pthread_mutex_t **this, glitch::collada::ps::CParticleSystem *a2, unsigned int a3);
// [0xd13c90] (30 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getPositionStreamMap(unsigned int)const
// int glitch::collada::ps::CParticleSystemBatchingManager::getPositionStreamMap( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2);
// [0xd13cb0] (30 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getTexCoordStreamMap(unsigned int)const
// int glitch::collada::ps::CParticleSystemBatchingManager::getTexCoordStreamMap( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2);
// [0xd13cd0] (30 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getColorStreamMap(unsigned int)const
// int glitch::collada::ps::CParticleSystemBatchingManager::getColorStreamMap( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2);
// [0xd13cf0] (30 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getNormalStreamMap(unsigned int)const
// int glitch::collada::ps::CParticleSystemBatchingManager::getNormalStreamMap( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2);
// [0xd13d10] (30 bytes) glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreamMap(unsigned int)const
// int glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreamMap( glitch::collada::ps::CParticleSystemBatchingManager *this, unsigned int a2);
// [0xd13d30] (486 bytes) glitch::collada::ps::CParticleSystemGeometryBaker::getSpinning(glitch::collada::ps::CParticleSystem *,glitch::collada::ps::SParticle const*,glitch::core::CMatrix4<float> &)
// int *glitch::collada::ps::CParticleSystemGeometryBaker::getSpinning(int a1, int a2, float *a3, int a4);
// [0xd13f20] (520 bytes) glitch::collada::ps::CParticleSystemGeometryBaker::mapSource(unsigned int,glitch::video::CVertexStreams const*,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor const> &)
// uint32_t *glitch::collada::ps::CParticleSystemGeometryBaker::mapSource( int a1, int a2, int a3, int a4, uint32_t *a5, int a6, uint32_t *a7);
// [0xd14130] (191 bytes) glitch::collada::ps::CParticleSystemGeometryBaker::resetSourceIterators(unsigned int,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor const> &,glitch::video::SVertexStream::SAccessorBase<glitch::core::vector3d<float> const>::SIterator &,glitch::video::SVertexStream::SAccessorBase<glitch::core::vector3d<float> const>::SIterator &,glitch::video::SVertexStream::SAccessorBase<glitch::core::vector2d<float> const>::SIterator &,glitch::video::SVertexStream::SAccessorBase<glitch::video::SColor const>::SIterator &)
// int glitch::collada::ps::CParticleSystemGeometryBaker::resetSourceIterators( int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int a7, int a8, int a9, int a10);
// [0xd141f0] (92 bytes) glitch::collada::ps::CParticleSystemStripBaker::bake(glitch::collada::ps::CParticleSystem *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float>> &,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor> &)
// int glitch::collada::ps::CParticleSystemStripBaker::bake();
// [0xd14250] (70 bytes) glitch::collada::ps::IParticleSystemBaker::IParticleSystemBaker(glitch::collada::ps::CParticleSystem *)
// struct glitch::collada::ps::IParticleSystemBaker *glitch::collada::ps::IParticleSystemBaker::IParticleSystemBaker( glitch::collada::ps::IParticleSystemBaker *this);
// [0xd142a0] (81 bytes) glitch::collada::ps::CParticleSystemGeometryBaker::CParticleSystemGeometryBaker(glitch::collada::ps::CParticleSystem *)
// void (**glitch::collada::ps::CParticleSystemGeometryBaker::CParticleSystemGeometryBaker( glitch::collada::ps::CParticleSystemGeometryBaker *this))(glitch::collada::ps::CParticleSystemGeometryBaker *__hidden this);
// [0xd14300] (105 bytes) glitch::collada::ps::CParticleSystemBillboardBaker::CParticleSystemBillboardBaker(glitch::collada::ps::CParticleSystem *,bool)
// struct glitch::collada::ps::CParticleSystemBillboardBaker *glitch::collada::ps::CParticleSystemBillboardBaker::CParticleSystemBillboardBaker( glitch::collada::ps::CParticleSystemBillboardBaker *this, glitch::collada::ps::CParticleSystem *a2, bool a3);
// [0xd14370] (224 bytes) glitch::collada::ps::IParticleSystemBaker::initVirtualTextureOffsetScale(glitch::collada::ps::CParticleSystem *)
// int *glitch::collada::ps::IParticleSystemBaker::initVirtualTextureOffsetScale( glitch::collada::ps::IParticleSystemBaker *this, glitch::collada::ps::CParticleSystem *a2);
// [0xd14450] (53 bytes) glitch::collada::ps::IParticleSystemBaker::applyVirtualTextureOffsetScale(glitch::core::vector2d<float> &)
// int64_t glitch::collada::ps::IParticleSystemBaker::applyVirtualTextureOffsetScale(int64_t a1);
// [0xd14490] (2726 bytes) glitch::collada::ps::CParticleSystemStripBaker::bakeContinuous(glitch::collada::ps::CParticleSystem *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float>> &,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor> &)
// int glitch::collada::ps::CParticleSystemStripBaker::bakeContinuous( unsigned int a1, int *a2, int *a3, int *a4, uint32_t *a5);
// [0xd14f40] (465 bytes) glitch::collada::ps::CParticleSystemStripBaker::bake(glitch::collada::ps::CParticleSystem *,glitch::scene::CMeshBuffer const*,glitch::video::CVertexStreams *,boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned int,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float>> *,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor> *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> *)
// 0xd14f40 glitch::collada::ps::CParticleSystemStripBaker::bake(glitch::collada::ps::CParticleSystem *,glitch::scene::CMeshBuffer const*,glitch::video::CVertexStreams *,boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned int,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float>> *,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor> *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> *)
// [0xd15120] (14 bytes) glitch::collada::ps::IParticleSystemBaker::setBufferMappingFlag(unsigned int)
// glitch::collada::ps::IParticleSystemBaker *glitch::collada::ps::IParticleSystemBaker::setBufferMappingFlag( glitch::collada::ps::IParticleSystemBaker *this, unsigned int a2);
// [0xd15130] (236 bytes) glitch::collada::ps::IParticleSystemBaker::fillIndexBuffer(boost::intrusive_ptr<glitch::video::IBuffer> const&,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned short *)const
// uint16_t *glitch::collada::ps::IParticleSystemBaker::fillIndexBuffer( int a1, glitch::video::IBuffer **a2, uint16_t *a3, int16_t a4, unsigned int a5, int16_t a6, int a7, int a8);
// [0xd15220] (22 bytes) glitch::collada::ps::IParticleSystemBaker::getStaticIndexBufferLock(void)
// void *glitch::collada::ps::IParticleSystemBaker::getStaticIndexBufferLock();
// [0xd15240] (256 bytes) glitch::collada::ps::CDeflector::CDeflector(glitch::collada::ps::CDeflector::SParameters &)
// int glitch::collada::ps::CDeflector::CDeflector(int a1, int a2);
// [0xd15340] (367 bytes) glitch::collada::ps::CDeflector::GetFrictionCoefficient(float,float,float,float)
// long double glitch::collada::ps::CDeflector::GetFrictionCoefficient( glitch::collada::ps::CDeflector *this, float a2, float a3, float a4, float a5);
// [0xd154b0] (4284 bytes) glitch::collada::ps::CDeflector::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// int glitch::collada::ps::CDeflector::apply(glitch::collada::ps::CDeflector *a1, float **a2, float **a3, int a4);
// [0xd16570] (13 bytes) glitch::collada::ps::CGravity::CGravity(glitch::collada::ps::CGravity::SParameters &)
// uint32_t *glitch::collada::ps::CGravity::CGravity(uint32_t *a1, int a2);
// [0xd16580] (696 bytes) glitch::collada::ps::CGravity::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// float *glitch::collada::ps::CGravity::apply(float ***a1, float **a2, float **a3, int a4);
// [0xd16840] (13 bytes) glitch::collada::ps::CVortex::CVortex(glitch::collada::ps::CVortex::SParameters &)
// uint32_t *glitch::collada::ps::CVortex::CVortex(uint32_t *a1, int a2);
// [0xd16850] (1577 bytes) glitch::collada::ps::CVortex::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// float *glitch::collada::ps::CVortex::apply(float ***a1, float **a2, float **a3, float *a4);
// [0xd16e80] (13 bytes) glitch::collada::ps::CWind::CWind(glitch::collada::ps::CWind::SParameters &)
// uint32_t *glitch::collada::ps::CWind::CWind(uint32_t *a1, int a2);
// [0xd16e90] (864 bytes) glitch::collada::ps::CWind::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// float *glitch::collada::ps::CWind::apply(float ***a1, float **a2, float **a3, int a4);
// [0xd171f0] (149 bytes) glitch::collada::ps::CParticleSystemColorModel::CParticleSystemColorModel(void)
// struct glitch::collada::ps::CParticleSystemColorModel *glitch::collada::ps::CParticleSystemColorModel::CParticleSystemColorModel( glitch::collada::ps::CParticleSystemColorModel *this, int *a2);
// [0xd17290] (181 bytes) glitch::collada::ps::CParticleSystemColorModel::CParticleSystemColorModel(void)
// glitch::collada::ps::CParticleSystemColorModel *glitch::collada::ps::CParticleSystemColorModel::CParticleSystemColorModel( glitch::collada::ps::CParticleSystemColorModel *this);
// [0xd17350] (22 bytes) glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel()
// void glitch::collada::ps::CParticleSystemColorModel::~CParticleSystemColorModel( glitch::collada::ps::CParticleSystemColorModel *this, int *a2);
// [0xd17370] (16 bytes) glitch::collada::ps::CParticleSystemColorModel::initPColorModel(void)
// glitch::collada::ps::CParticleSystemColorModel *glitch::collada::ps::CParticleSystemColorModel::initPColorModel( glitch::collada::ps::CParticleSystemColorModel *this);
// [0xd17380] (16 bytes) glitch::collada::ps::CParticleSystemColorModel::resetPColorModel(void)
// glitch::collada::ps::CParticleSystemColorModel *glitch::collada::ps::CParticleSystemColorModel::resetPColorModel( glitch::collada::ps::CParticleSystemColorModel *this);
// [0xd17390] (3173 bytes) glitch::collada::ps::CParticleSystemColorModel::initPColor(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemColorModel::initPColor(int a1, int *a2, int *a3);
// [0xd18000] (538 bytes) glitch::collada::ps::CParticleSystemColorModel::applyUVAnimation(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemColorModel::applyUVAnimation(int a1, int *a2, int *a3);
// [0xd18220] (280 bytes) glitch::collada::ps::CParticleSystemColorModel::applyDiffuseAnimation(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemColorModel::applyDiffuseAnimation(int a1, int *a2, int *a3);
// [0xd18340] (752 bytes) glitch::collada::ps::CParticleSystemColorModel::applyUVAndDiffuseAnimation(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemColorModel::applyUVAndDiffuseAnimation( float *a1, float **a2, float **a3);
// [0xd18630] (175 bytes) glitch::collada::ps::CParticleSystemColorModel::applyPColor(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemColorModel::applyPColor(int a1, int *a2, int *a3);
// [0xd186e0] (149 bytes) glitch::collada::ps::CParticleSystemColorModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// int glitch::collada::ps::CParticleSystemColorModel::getParameterImpl(int a1, int a2);
// [0xd18780] (94 bytes) glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel()
// void glitch::collada::ps::CParticleSystemEmitterModel::~CParticleSystemEmitterModel( glitch::collada::ps::CParticleSystemEmitterModel *this, int *a2);
// [0xd187e0] (62 bytes) glitch::collada::ps::CParticleSystemEmitterModel::resetPEmitterModelTransform(void)
// int glitch::collada::ps::CParticleSystemEmitterModel::resetPEmitterModelTransform( glitch::collada::ps::CParticleSystemEmitterModel *this);
// [0xd18820] (34 bytes) glitch::collada::ps::CParticleSystemEmitterModel::resetPEmitterModel(void)
// int glitch::collada::ps::CParticleSystemEmitterModel::resetPEmitterModel( glitch::collada::ps::CParticleSystemEmitterModel *this);
// [0xd18850] (367 bytes) glitch::collada::ps::CParticleSystemEmitterModel::initPPosition(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemEmitterModel::initPPosition(int a1, uint32_t **a2, uint32_t **a3);
// [0xd189c0] (93 bytes) glitch::collada::ps::CParticleSystemEmitterModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// int glitch::collada::ps::CParticleSystemEmitterModel::getParameterImpl(int a1, int a2);
// [0xd18a20] (47 bytes) glitch::collada::ps::CParticleSystemForcesModel::CParticleSystemForcesModel(void)
// struct glitch::collada::ps::CParticleSystemForcesModel *glitch::collada::ps::CParticleSystemForcesModel::CParticleSystemForcesModel( glitch::collada::ps::CParticleSystemForcesModel *this, int *a2);
// [0xd18a50] (93 bytes) glitch::collada::ps::CParticleSystemForcesModel::CParticleSystemForcesModel(void)
// void (**glitch::collada::ps::CParticleSystemForcesModel::CParticleSystemForcesModel( glitch::collada::ps::CParticleSystemForcesModel *this))(glitch::collada::ps::CParticleSystemForcesModel *__hidden this);
// [0xd18ab0] (101 bytes) glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel()
// void glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel( glitch::collada::ps::CParticleSystemForcesModel *this, int *a2);
// [0xd18b20] (420 bytes) glitch::collada::ps::CParticleSystemForcesModel::addPForce(glitch::collada::ps::IForce *)
// int glitch::collada::ps::CParticleSystemForcesModel::addPForce( glitch::collada::ps::CParticleSystemForcesModel *this, glitch::collada::ps::IForce *a2);
// [0xd18cd0] (334 bytes) glitch::collada::ps::CParticleSystemForcesModel::removePForce(glitch::collada::ps::IForce *)
// char *glitch::collada::ps::CParticleSystemForcesModel::removePForce( glitch::collada::ps::CParticleSystemForcesModel *this, glitch::collada::ps::IForce *a2);
// [0xd18e20] (144 bytes) glitch::collada::ps::CParticleSystemForcesModel::removePForce(int)
// void glitch::collada::ps::CParticleSystemForcesModel::removePForce( glitch::collada::ps::CParticleSystemForcesModel *this, int a2);
// [0xd18eb0] (9 bytes) glitch::collada::ps::CParticleSystemForcesModel::resetPForcesModel(void)
// void glitch::collada::ps::CParticleSystemForcesModel::resetPForcesModel();
// [0xd18ec0] (9 bytes) glitch::collada::ps::CParticleSystemForcesModel::initPForces(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// void glitch::collada::ps::CParticleSystemForcesModel::initPForces();
// [0xd18ed0] (18 bytes) glitch::collada::ps::CParticleSystemForcesModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// int glitch::collada::ps::CParticleSystemForcesModel::getParameterImpl(int a1, int a2);
// [0xd18ef0] (81 bytes) glitch::collada::ps::CParticleSystemGenerationModel::CParticleSystemGenerationModel(void)
// struct glitch::collada::ps::CParticleSystemGenerationModel *glitch::collada::ps::CParticleSystemGenerationModel::CParticleSystemGenerationModel( glitch::collada::ps::CParticleSystemGenerationModel *this, int *a2);
// [0xd18f50] (113 bytes) glitch::collada::ps::CParticleSystemGenerationModel::CParticleSystemGenerationModel(void)
// glitch::collada::ps::CParticleSystemGenerationModel *glitch::collada::ps::CParticleSystemGenerationModel::CParticleSystemGenerationModel( glitch::collada::ps::CParticleSystemGenerationModel *this);
// [0xd18fd0] (22 bytes) glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel()
// void glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel( glitch::collada::ps::CParticleSystemGenerationModel *this, int *a2);
// [0xd18ff0] (9 bytes) glitch::collada::ps::CParticleSystemGenerationModel::initGenerationModel(void)
// void glitch::collada::ps::CParticleSystemGenerationModel::initGenerationModel();
// [0xd19000] (16 bytes) glitch::collada::ps::CParticleSystemGenerationModel::resetGenerationModel(void)
// glitch::collada::ps::CParticleSystemGenerationModel *glitch::collada::ps::CParticleSystemGenerationModel::resetGenerationModel( glitch::collada::ps::CParticleSystemGenerationModel *this);
// [0xd19010] (116 bytes) glitch::collada::ps::CParticleSystemGenerationModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// int glitch::collada::ps::CParticleSystemGenerationModel::getParameterImpl(int a1, int a2);
// [0xd19090] (32 bytes) glitch::collada::ps::CParticleSystemLifeModel::CParticleSystemLifeModel(void)
// struct glitch::collada::ps::CParticleSystemLifeModel *glitch::collada::ps::CParticleSystemLifeModel::CParticleSystemLifeModel( glitch::collada::ps::CParticleSystemLifeModel *this, int *a2);
// [0xd190b0] (76 bytes) glitch::collada::ps::CParticleSystemLifeModel::CParticleSystemLifeModel(void)
// glitch::collada::ps::CParticleSystemLifeModel *glitch::collada::ps::CParticleSystemLifeModel::CParticleSystemLifeModel( glitch::collada::ps::CParticleSystemLifeModel *this);
// [0xd19100] (22 bytes) glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel()
// void glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel( glitch::collada::ps::CParticleSystemLifeModel *this, int *a2);
// [0xd19120] (9 bytes) glitch::collada::ps::CParticleSystemLifeModel::initPLifeModel(void)
// void glitch::collada::ps::CParticleSystemLifeModel::initPLifeModel();
// [0xd19130] (9 bytes) glitch::collada::ps::CParticleSystemLifeModel::resetPLifeModel(void)
// void glitch::collada::ps::CParticleSystemLifeModel::resetPLifeModel();
// [0xd19140] (470 bytes) glitch::collada::ps::CParticleSystemLifeModel::initPLife(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemLifeModel::initPLife(float *a1, int *a2, int *a3);
// [0xd19320] (72 bytes) glitch::collada::ps::CParticleSystemLifeModel::applyPLife(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemLifeModel::applyPLife(uint32_t *a1, int a2, int a3);
// [0xd19370] (36 bytes) glitch::collada::ps::CParticleSystemLifeModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// int glitch::collada::ps::CParticleSystemLifeModel::getParameterImpl(int a1, int a2);
// [0xd193a0] (144 bytes) glitch::collada::ps::CParticleSystemMotionModel::CParticleSystemMotionModel(void)
// struct glitch::collada::ps::CParticleSystemMotionModel *glitch::collada::ps::CParticleSystemMotionModel::CParticleSystemMotionModel( glitch::collada::ps::CParticleSystemMotionModel *this, int *a2);
// [0xd19430] (176 bytes) glitch::collada::ps::CParticleSystemMotionModel::CParticleSystemMotionModel(void)
// glitch::collada::ps::CParticleSystemMotionModel *glitch::collada::ps::CParticleSystemMotionModel::CParticleSystemMotionModel( glitch::collada::ps::CParticleSystemMotionModel *this);
// [0xd194e0] (22 bytes) glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel()
// void glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel( glitch::collada::ps::CParticleSystemMotionModel *this, int *a2);
// [0xd19500] (9 bytes) glitch::collada::ps::CParticleSystemMotionModel::initPMotionModel(void)
// void glitch::collada::ps::CParticleSystemMotionModel::initPMotionModel();
// [0xd19510] (9 bytes) glitch::collada::ps::CParticleSystemMotionModel::resetPMotionModel(void)
// void glitch::collada::ps::CParticleSystemMotionModel::resetPMotionModel();
// [0xd19520] (2886 bytes) glitch::collada::ps::CParticleSystemMotionModel::initPMotion(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// float *glitch::collada::ps::CParticleSystemMotionModel::initPMotion(int a1, float **a2, float **a3);
// [0xd1a070] (279 bytes) glitch::collada::ps::CParticleSystemMotionModel::applySpeedScale(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemMotionModel::applySpeedScale(int *a1, int *a2, int *a3);
// [0xd1a190] (1728 bytes) glitch::collada::ps::CParticleSystemMotionModel::applyPMotion(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// float *glitch::collada::ps::CParticleSystemMotionModel::applyPMotion(float *a1, float **a2, float **a3);
// [0xd1a850] (220 bytes) glitch::collada::ps::CParticleSystemMotionModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// int glitch::collada::ps::CParticleSystemMotionModel::getParameterImpl(int a1, int a2);
// [0xd1a930] (268 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::CParticleSystemRenderDataModel(void)
// struct glitch::collada::ps::CParticleSystemRenderDataModel *glitch::collada::ps::CParticleSystemRenderDataModel::CParticleSystemRenderDataModel( glitch::collada::ps::CParticleSystemRenderDataModel *this, int *a2);
// [0xd1aa40] (306 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::CParticleSystemRenderDataModel(void)
// int glitch::collada::ps::CParticleSystemRenderDataModel::CParticleSystemRenderDataModel( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd1ab80] (330 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel()
// void glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel( glitch::collada::ps::CParticleSystemRenderDataModel *this, int *a2);
// [0xd1acd0] (18 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::resetRenderDataModel(void)
// glitch::collada::ps::CParticleSystemRenderDataModel *glitch::collada::ps::CParticleSystemRenderDataModel::resetRenderDataModel( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd1acf0] (262 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::getBuffer(void)
// int glitch::collada::ps::CParticleSystemRenderDataModel::getBuffer( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd1ae00] (200 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::releaseBuffer(void)
// void glitch::collada::ps::CParticleSystemRenderDataModel::releaseBuffer( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd1aed0] (879 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::updateRenderData(void)
// int glitch::collada::ps::CParticleSystemRenderDataModel::updateRenderData( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd1b240] (88 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::registerForRendering(bool,bool)
// unsigned int glitch::collada::ps::CParticleSystemRenderDataModel::registerForRendering( glitch::collada::ps::CParticleSystemRenderDataModel *this, bool a2);
// [0xd1b2a0] (150 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::flushRendering(void)
// glitch::collada::ps::CParticleSystemBatcher *glitch::collada::ps::CParticleSystemRenderDataModel::flushRendering( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd1b340] (33 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::updateBatchIndex(unsigned int)
// glitch::collada::ps::CParticleSystemRenderDataModel *glitch::collada::ps::CParticleSystemRenderDataModel::updateBatchIndex( glitch::collada::ps::CParticleSystemRenderDataModel *this, unsigned int a2);
// [0xd1b370] (103 bytes) glitch::collada::ps::CParticleSystemManager::updateBatchIndex(unsigned int)
// int glitch::collada::ps::CParticleSystemManager::updateBatchIndex(pthread_mutex_t **this, unsigned int a2);
// [0xd1b3e0] (326 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::deallocate(void)
// int glitch::collada::ps::CParticleSystemRenderDataModel::deallocate( glitch::collada::ps::CParticleSystemRenderDataModel *this);
// [0xd1b530] (174 bytes) glitch::collada::ps::CParticleSystemRenderDataModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// int glitch::collada::ps::CParticleSystemRenderDataModel::getParameterImpl(int a1, int a2);
// [0xd1b5e0] (95 bytes) glitch::collada::ps::CParticleSystemSizeModel::CParticleSystemSizeModel(void)
// struct glitch::collada::ps::CParticleSystemSizeModel *glitch::collada::ps::CParticleSystemSizeModel::CParticleSystemSizeModel( glitch::collada::ps::CParticleSystemSizeModel *this, int *a2);
// [0xd1b640] (127 bytes) glitch::collada::ps::CParticleSystemSizeModel::CParticleSystemSizeModel(void)
// int glitch::collada::ps::CParticleSystemSizeModel::CParticleSystemSizeModel( glitch::collada::ps::CParticleSystemSizeModel *this);
// [0xd1b6c0] (22 bytes) glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel()
// void glitch::collada::ps::CParticleSystemSizeModel::~CParticleSystemSizeModel( glitch::collada::ps::CParticleSystemSizeModel *this, int *a2);
// [0xd1b6e0] (9 bytes) glitch::collada::ps::CParticleSystemSizeModel::initPSizeModel(void)
// void glitch::collada::ps::CParticleSystemSizeModel::initPSizeModel();
// [0xd1b6f0] (9 bytes) glitch::collada::ps::CParticleSystemSizeModel::resetPSizeModel(void)
// void glitch::collada::ps::CParticleSystemSizeModel::resetPSizeModel();
// [0xd1b700] (1766 bytes) glitch::collada::ps::CParticleSystemSizeModel::initPSize(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// float *glitch::collada::ps::CParticleSystemSizeModel::initPSize(int a1, float **a2, float **a3);
// [0xd1bdf0] (715 bytes) glitch::collada::ps::CParticleSystemSizeModel::applyPSize(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// int glitch::collada::ps::CParticleSystemSizeModel::applyPSize(float *a1, int a2, int *a3);
// [0xd1c0c0] (89 bytes) glitch::collada::ps::CParticleSystemSizeModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// int glitch::collada::ps::CParticleSystemSizeModel::getParameterImpl(int a1, int a2);
// [0xd1c120] (93 bytes) glitch::collada::ps::CParticleSystemSpinModel::CParticleSystemSpinModel(void)
// glitch::collada::ps::CParticleSystemSpinModel *glitch::collada::ps::CParticleSystemSpinModel::CParticleSystemSpinModel( glitch::collada::ps::CParticleSystemSpinModel *this, int *a2);
// [0xd1c180] (125 bytes) glitch::collada::ps::CParticleSystemSpinModel::CParticleSystemSpinModel(void)
// glitch::collada::ps::CParticleSystemSpinModel *glitch::collada::ps::CParticleSystemSpinModel::CParticleSystemSpinModel( glitch::collada::ps::CParticleSystemSpinModel *this);
// [0xd1c200] (22 bytes) glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel()
// void glitch::collada::ps::CParticleSystemSpinModel::~CParticleSystemSpinModel( glitch::collada::ps::CParticleSystemSpinModel *this, int *a2);
// [0xd1c220] (18 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c240] (10 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c250] (10 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c260] (10 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c270] (10 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c280] (10 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c290] (7 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c2a0] (7 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c2b0] (7 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c2c0] (479 bytes) glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void glitch::collada::ps::CParticleSystem::~CParticleSystem(glitch::collada::ps::CParticleSystem *this);
// [0xd1c4a0] (18 bytes) `virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c4c0] (10 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c4d0] (10 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
// [0xd1c4e0] (10 bytes) `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem()
// void `non-virtual thunk to'glitch::collada::ps::CParticleSystem::~CParticleSystem( glitch::collada::ps::CParticleSystem *this);
