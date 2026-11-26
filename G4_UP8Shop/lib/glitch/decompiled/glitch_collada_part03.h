#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_collada_part03.h
// Library: glitch | Module: glitch_collada_part03
// Binary Address Span: 0xd4f380 .. 0xd7db30 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xd4f380] (220 bytes) glitch::collada::CMeshSceneNode::CMeshSceneNode(boost::intrusive_ptr<glitch::collada::IMesh> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// int glitch::collada::CMeshSceneNode::CMeshSceneNode( glitch::IObject *a1, int *a2, int a3, int a4, int a5, int a6, int a7);
// [0xd4f460] (176 bytes) glitch::collada::CMeshSceneNode::clone(void)const
// glitch::collada::CMeshSceneNode *glitch::collada::CMeshSceneNode::clone( glitch::collada::CMeshSceneNode *this, int a2);
// [0xd4f510] (134 bytes) glitch::collada::CMeshSceneNode::~CMeshSceneNode()
// void glitch::collada::CMeshSceneNode::~CMeshSceneNode( volatile int32_t **this, volatile int32_t **a2);
// [0xd4f5a0] (48 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getCategoryId(char const*)const
// int glitch::collada::CModularSkinnedMeshSceneNode::getCategoryId( glitch::collada::CModularSkinnedMesh **this, char *a2);
// [0xd4f5d0] (111 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getCategoryMaterial(char const*)
// glitch::collada::CModularSkinnedMeshSceneNode *glitch::collada::CModularSkinnedMeshSceneNode::getCategoryMaterial( glitch::collada::CModularSkinnedMeshSceneNode *this, const char *a2, char *a3);
// [0xd4f640] (48 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getCategoryName(int)const
// int glitch::collada::CModularSkinnedMeshSceneNode::getCategoryName( glitch::collada::CModularSkinnedMesh **this, int a2);
// [0xd4f670] (48 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getModuleId(char const*)const
// int glitch::collada::CModularSkinnedMeshSceneNode::getModuleId( glitch::collada::CModularSkinnedMesh **this, char *a2);
// [0xd4f6a0] (56 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getModuleId(int,char const*)const
// int glitch::collada::CModularSkinnedMeshSceneNode::getModuleId( glitch::collada::CModularSkinnedMesh **this, int a2, char *a3);
// [0xd4f6e0] (48 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleId(int)const
// int glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleId( glitch::collada::CModularSkinnedMesh **this, int a2);
// [0xd4f710] (48 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleName(int)const
// int glitch::collada::CModularSkinnedMeshSceneNode::getCurrentModuleName( glitch::collada::CModularSkinnedMesh **this, int a2);
// [0xd4f740] (56 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getModuleName(int,int)const
// int glitch::collada::CModularSkinnedMeshSceneNode::getModuleName( glitch::collada::CModularSkinnedMesh **this, int a2, int a3);
// [0xd4f780] (40 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getCategoryCount(void)const
// int glitch::collada::CModularSkinnedMeshSceneNode::getCategoryCount( glitch::collada::CModularSkinnedMesh **this);
// [0xd4f7b0] (48 bytes) glitch::collada::CModularSkinnedMeshSceneNode::getCategoryModuleCount(int)const
// int glitch::collada::CModularSkinnedMeshSceneNode::getCategoryModuleCount( glitch::collada::CModularSkinnedMesh **this, int a2);
// [0xd4f7e0] (15 bytes) `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::serializeAttributes( glitch::collada::CModularSkinnedMeshSceneNode *a1, int a2, int a3);
// [0xd4f7f0] (1010 bytes) glitch::collada::CModularSkinnedMeshSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::collada::CModularSkinnedMeshSceneNode::serializeAttributes( glitch::collada::CModularSkinnedMeshSceneNode *a1, int a2, int a3);
// [0xd4fbf0] (65 bytes) glitch::collada::CModularSkinnedMeshSceneNode::setCategoryModule(int,int,bool)
// unsigned int glitch::collada::CModularSkinnedMeshSceneNode::setCategoryModule( glitch::collada::CModularSkinnedMesh **this, int a2, int a3, bool a4);
// [0xd4fc40] (15 bytes) `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `virtual thunk to'glitch::collada::CModularSkinnedMeshSceneNode::deserializeAttributes( glitch::collada::CModularSkinnedMeshSceneNode *a1, int a2, int a3);
// [0xd4fc50] (152 bytes) glitch::collada::CModularSkinnedMeshSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::collada::CModularSkinnedMeshSceneNode::deserializeAttributes( glitch::collada::CModularSkinnedMesh **a1, int a2, int a3);
// [0xd4fcf0] (65 bytes) glitch::collada::CModularSkinnedMeshSceneNode::setCategoryModule(char const*,char const*,bool)
// unsigned int glitch::collada::CModularSkinnedMeshSceneNode::setCategoryModule( glitch::collada::CModularSkinnedMesh **this, char *a2, char *a3, bool a4);
// [0xd4fd40] (90 bytes) glitch::collada::CRootSceneNode::addCamera(glitch::collada::CCameraSceneNode *)
// int glitch::collada::CRootSceneNode::addCamera( glitch::collada::CRootSceneNode *this, glitch::collada::CCameraSceneNode *a2);
// [0xd4fda0] (90 bytes) glitch::collada::CRootSceneNode::addMorphingMesh(glitch::collada::CMorphingMesh *)
// int glitch::collada::CRootSceneNode::addMorphingMesh( glitch::collada::CRootSceneNode *this, glitch::collada::CMorphingMesh *a2);
// [0xd4fe00] (126 bytes) glitch::collada::CRootSceneNode::attachSkin(glitch::collada::CSkinnedMesh *)
// int glitch::collada::CRootSceneNode::attachSkin( glitch::collada::CRootSceneNode *this, glitch::collada::CSkinnedMesh *a2);
// [0xd4fe80] (90 bytes) glitch::collada::CRootSceneNode::addLight(glitch::scene::CLightSceneNode *)
// int glitch::collada::CRootSceneNode::addLight( glitch::collada::CRootSceneNode *this, glitch::scene::CLightSceneNode *a2);
// [0xd4fee0] (90 bytes) glitch::collada::CRootSceneNode::addParticleSystem(glitch::collada::CParticleSystemEmitterSceneNode *)
// int glitch::collada::CRootSceneNode::addParticleSystem( glitch::collada::CRootSceneNode *this, glitch::collada::CParticleSystemEmitterSceneNode *a2);
// [0xd4ff40] (77 bytes) glitch::collada::CRootSceneNode::removeParticleSystem(glitch::collada::CParticleSystemEmitterSceneNode *)
// glitch::collada::CParticleSystemEmitterSceneNode **glitch::collada::CRootSceneNode::removeParticleSystem( glitch::collada::CRootSceneNode *this, glitch::collada::CParticleSystemEmitterSceneNode *a2);
// [0xd4ff90] (702 bytes) glitch::collada::CRootSceneNode::addLodSelector(boost::intrusive_ptr<glitch::scene::ILODSelector> const&,char const*)
// uint32_t *glitch::collada::CRootSceneNode::addLodSelector(uint32_t *a1, int *a2, unsigned int a3);
// [0xd50250] (109 bytes) glitch::collada::CRootSceneNode::getMorphingMesh(char const*)
// int glitch::collada::CRootSceneNode::getMorphingMesh(glitch::collada::CRootSceneNode *this, char *s2);
// [0xd502c0] (107 bytes) glitch::collada::CRootSceneNode::getLight(char const*)
// uint32_t *glitch::collada::CRootSceneNode::getLight(glitch::collada::CRootSceneNode *this, char *s2);
// [0xd50330] (137 bytes) glitch::collada::CRootSceneNode::hasMaterial(char const*)const
// glitch::collada::CRootSceneNode *glitch::collada::CRootSceneNode::hasMaterial( glitch::collada::CRootSceneNode *this, const char *a2, char *s2);
// [0xd503c0] (354 bytes) glitch::collada::CRootSceneNode::addMaterial(glitch::collada::SMaterial *,glitch::video::IVideoDriver *)
// volatile int32_t **glitch::collada::CRootSceneNode::addMaterial( volatile int32_t **a1, uint32_t *a2, int a3);
// [0xd50530] (156 bytes) glitch::collada::CRootSceneNode::addMaterial(char const*,glitch::video::IVideoDriver *)
// volatile int32_t **glitch::collada::CRootSceneNode::addMaterial( volatile int32_t **this, char *a2, glitch::video::IVideoDriver *a3);
// [0xd505d0] (306 bytes) glitch::collada::CRootSceneNode::getMaterial(char const*,glitch::video::IVideoDriver *)
// glitch::video::CMaterial **glitch::collada::CRootSceneNode::getMaterial( glitch::video::CMaterial **this, char *a2, glitch::video::IVideoDriver *a3, int a4);
// [0xd50710] (306 bytes) glitch::collada::CRootSceneNode::getMaterial(glitch::collada::SMaterial *,glitch::video::IVideoDriver *)
// glitch::video::CMaterial **glitch::collada::CRootSceneNode::getMaterial( glitch::collada::CRootSceneNode *a1, char *a2, char **a3, int a4);
// [0xd50850] (277 bytes) glitch::collada::CCoronasSceneNode::setMaterial(glitch::collada::SMaterial &,glitch::video::IVideoDriver *)
// glitch::video::CMaterial *glitch::collada::CCoronasSceneNode::setMaterial(int a1, char **a2, int a3);
// [0xd50970] (107 bytes) glitch::collada::CRootSceneNode::getParticleSystem(char const*)
// uint32_t *glitch::collada::CRootSceneNode::getParticleSystem(glitch::collada::CRootSceneNode *this, char *s2);
// [0xd509e0] (107 bytes) glitch::collada::CRootSceneNode::getCamera(char const*)
// uint32_t *glitch::collada::CRootSceneNode::getCamera(glitch::collada::CRootSceneNode *this, char *s2);
// [0xd50a50] (82 bytes) glitch::collada::CRootSceneNode::removeMorphingMesh(glitch::collada::CMorphingMesh *)
// glitch::collada::CMorphingMesh **glitch::collada::CRootSceneNode::removeMorphingMesh( glitch::collada::CRootSceneNode *this, glitch::collada::CMorphingMesh *a2);
// [0xd50ab0] (140 bytes) glitch::collada::CRootSceneNode::removeMaterial(glitch::video::CMaterial const*)
// const glitch::video::CMaterial **glitch::collada::CRootSceneNode::removeMaterial( glitch::collada::CRootSceneNode *this, const glitch::video::CMaterial *a2);
// [0xd50b40] (137 bytes) glitch::collada::CRootSceneNode::attachSkin(void)
// glitch::collada::CRootSceneNode *glitch::collada::CRootSceneNode::attachSkin( glitch::collada::CRootSceneNode *this);
// [0xd50bd0] (284 bytes) glitch::collada::CRootSceneNode::attachCameras(void)
// char *glitch::collada::CRootSceneNode::attachCameras(glitch::collada::CRootSceneNode *this);
// [0xd50cf0] (154 bytes) glitch::collada::CRootSceneNode::addURLToResolve(boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned short,unsigned int,glitch::res::String const&)
// int glitch::collada::CRootSceneNode::addURLToResolve(int a1, int *a2, int16_t a3, int a4, int *a5);
// [0xd50d90] (154 bytes) glitch::collada::CRootSceneNode::addURLToResolve(boost::intrusive_ptr<glitch::video::CMaterialRenderer> const&,unsigned short,unsigned int,glitch::res::String const&)
// int glitch::collada::CRootSceneNode::addURLToResolve(int a1, int *a2, int16_t a3, int a4, int *a5);
// [0xd50e30] (931 bytes) glitch::collada::CRootSceneNode::resolveURLs(void)
// void glitch::collada::CRootSceneNode::resolveURLs(glitch::collada::CRootSceneNode *this);
// [0xd511e0] (142 bytes) glitch::collada::CRootSceneNode::getLodSelector(char const*)
// glitch::collada::CRootSceneNode *glitch::collada::CRootSceneNode::getLodSelector( glitch::collada::CRootSceneNode *this, const char *a2, unsigned int a3);
// [0xd51270] (221 bytes) glitch::collada::CRootSceneNode::addIKSolver(boost::intrusive_ptr<glitch::scene::CIKSolver> const&)
// int glitch::collada::CRootSceneNode::addIKSolver(int *a1, int a2);
// [0xd51350] (134 bytes) glitch::collada::CRootSceneNode::removeIKSolver(boost::intrusive_ptr<glitch::scene::CIKSolver> const&)
// uint32_t *glitch::collada::CRootSceneNode::removeIKSolver(int a1, int a2);
// [0xd513e0] (91 bytes) glitch::collada::CRootSceneNode::removeIKSolvers(void)
// uint32_t *glitch::collada::CRootSceneNode::removeIKSolvers(glitch::collada::CRootSceneNode *this);
// [0xd51440] (93 bytes) glitch::collada::CRootSceneNode::setRootMotion(boost::intrusive_ptr<glitch::collada::CRootMotion>)
// volatile int32_t *glitch::collada::CRootSceneNode::setRootMotion(int a1, int *a2);
// [0xd514a0] (14 bytes) glitch::collada::CRootSceneNode::getRootMotion(void)
// char *glitch::collada::CRootSceneNode::getRootMotion(glitch::collada::CRootSceneNode *this);
// [0xd514b0] (278 bytes) glitch::collada::CRootSceneNode::addSceneNodeAlias(char const*,glitch::scene::ISceneNode *)
// int glitch::collada::CRootSceneNode::addSceneNodeAlias( glitch::collada::CRootSceneNode *this, glitch::core::detail::SSharedStringHeapEntry::SData *a2, glitch::scene::ISceneNode *a3);
// [0xd515d0] (14 bytes) glitch::collada::CRootSceneNode::getSceneNodeAliasList(void)const
// char *glitch::collada::CRootSceneNode::getSceneNodeAliasList(glitch::collada::CRootSceneNode *this);
// [0xd515e0] (138 bytes) glitch::collada::CRootSceneNode::clearSceneNodeAliasList(void)
// glitch::collada::CRootSceneNode *glitch::collada::CRootSceneNode::clearSceneNodeAliasList( glitch::collada::CRootSceneNode *this);
// [0xd51670] (366 bytes) glitch::collada::CSceneNode::CSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// int glitch::collada::CSceneNode::CSceneNode(glitch::scene::ISceneNode *a1, int *a2, uint32_t *a3, int a4);
// [0xd517e0] (133 bytes) glitch::collada::CBillboardSceneNode::CBillboardSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// void (**glitch::collada::CBillboardSceneNode::CBillboardSceneNode( glitch::scene::ISceneNode *a1, uint32_t *a2, int a3))(glitch::collada::CBillboardSceneNode *__hidden this);
// [0xd51870] (107 bytes) glitch::collada::CBillboardSceneNode::CBillboardSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// int glitch::collada::CBillboardSceneNode::CBillboardSceneNode( glitch::scene::ISceneNode *a1, int *a2, uint32_t *a3, int a4);
// [0xd518e0] (412 bytes) glitch::collada::CRootSceneNode::CRootSceneNode(glitch::collada::CColladaDatabase const&)
// glitch::collada::CRootSceneNode *glitch::collada::CRootSceneNode::CRootSceneNode( glitch::collada::CRootSceneNode *this, const glitch::collada::CColladaDatabase *a2);
// [0xd51a80] (368 bytes) glitch::collada::CRootSceneNode::CRootSceneNode(glitch::collada::CColladaDatabase const&)
// glitch::collada::CRootSceneNode *glitch::collada::CRootSceneNode::CRootSceneNode( glitch::collada::CRootSceneNode *this, const glitch::collada::CColladaDatabase *a2, uint32_t *a3);
// [0xd51bf0] (409 bytes) glitch::collada::CSceneNode::CSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SNode *)
// int (**glitch::collada::CSceneNode::CSceneNode( glitch::scene::ISceneNode *a1, int *a2, int a3))(glitch::scene::ISceneNode *);
// [0xd51d90] (757 bytes) glitch::collada::CSceneNode::computeBoundingBox(glitch::core::aabbox3d<float> &)const
// int glitch::collada::CSceneNode::computeBoundingBox(glitch::scene::ISceneNode *a1, float *a2);
// [0xd52090] (360 bytes) glitch::collada::CSkinnedMeshSceneNode::CSkinnedMeshSceneNode(boost::intrusive_ptr<glitch::collada::IMesh> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// int glitch::collada::CSkinnedMeshSceneNode::CSkinnedMeshSceneNode( glitch::IObject *a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8);
// [0xd52200] (165 bytes) glitch::collada::CModularSkinnedMeshSceneNode::CModularSkinnedMeshSceneNode(boost::intrusive_ptr<glitch::collada::IMesh> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// void (**glitch::collada::CModularSkinnedMeshSceneNode::CModularSkinnedMeshSceneNode( glitch::IObject *a1, int *a2, int a3, int a4, int a5, int a6, int a7))(glitch::collada::CModularSkinnedMeshSceneNode *__hidden this);
// [0xd522b0] (139 bytes) glitch::collada::CModularSkinnedMeshSceneNode::CModularSkinnedMeshSceneNode(boost::intrusive_ptr<glitch::collada::IMesh> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// int glitch::collada::CModularSkinnedMeshSceneNode::CModularSkinnedMeshSceneNode( glitch::IObject *a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8);
// [0xd52340] (400 bytes) glitch::collada::CSkinnedMeshSceneNode::CSkinnedMeshSceneNode(boost::intrusive_ptr<glitch::collada::IMesh> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// int glitch::collada::CSkinnedMeshSceneNode::CSkinnedMeshSceneNode( glitch::IObject *a1, int *a2, int a3, int a4, int a5, int a6, int a7);
// [0xd524d0] (36 bytes) glitch::collada::CSkinnedMeshSceneNode::setIsSkinningEnabled(bool)
// int glitch::collada::CSkinnedMeshSceneNode::setIsSkinningEnabled( glitch::collada::CSkinnedMeshSceneNode *this, bool a2);
// [0xd52500] (404 bytes) glitch::collada::CParticleSystemEmitterSceneNode::CParticleSystemEmitterSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SGNPSEmitter &,glitch::res::vector<glitch::res::String> *,glitch::collada::CRootSceneNode *)
// glitch::collada::CRootSceneNode *glitch::collada::CParticleSystemEmitterSceneNode::CParticleSystemEmitterSceneNode( glitch::collada::CRootSceneNode **a1, glitch::collada::CRootSceneNode **a2, uint32_t *a3, const char **a4, glitch::collada::CRootSceneNode *a5, glitch::collada::CRootSceneNode *a6);
// [0xd526a0] (443 bytes) glitch::collada::CParticleSystemEmitterSceneNode::CParticleSystemEmitterSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SGNPSEmitter &,glitch::res::vector<glitch::res::String> *,glitch::collada::CRootSceneNode *)
// glitch::collada::CRootSceneNode *glitch::collada::CParticleSystemEmitterSceneNode::CParticleSystemEmitterSceneNode( glitch::IObject *a1, int *a2, int a3, int a4, int a5);
// [0xd52860] (381 bytes) glitch::collada::CParticleSystemEmitterSceneNode::~CParticleSystemEmitterSceneNode()
// void glitch::collada::CParticleSystemEmitterSceneNode::~CParticleSystemEmitterSceneNode( glitch::collada::CParticleSystemEmitterSceneNode *this, int *a2);
// [0xd529e0] (5926 bytes) glitch::collada::CParticleSystemEmitterSceneNode::initParticleSystem(glitch::video::IVideoDriver *,unsigned int,boost::intrusive_ptr<glitch::scene::IMesh>)
// int glitch::collada::CParticleSystemEmitterSceneNode::initParticleSystem( uint32_t *a1, int a2, int a3, __guard **a4);
// [0xd54110] (341 bytes) glitch::collada::CForceSceneNode::CForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CForceSceneNode::CForceSceneNode(glitch::IObject *a1, int *a2, uint32_t *a3, int a4);
// [0xd54270] (320 bytes) glitch::collada::CDeflectorForceSceneNode::CDeflectorForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CDeflectorForceSceneNode::CDeflectorForceSceneNode( glitch::IObject *a1, uint32_t *a2, int a3);
// [0xd543b0] (274 bytes) glitch::collada::CDeflectorForceSceneNode::CDeflectorForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CDeflectorForceSceneNode::CDeflectorForceSceneNode( glitch::IObject *a1, int *a2, uint32_t *a3, int a4);
// [0xd544d0] (359 bytes) glitch::collada::CForceSceneNode::CForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CForceSceneNode::CForceSceneNode(glitch::IObject *a1, int *a2, int a3);
// [0xd54640] (210 bytes) glitch::collada::CGravityForceSceneNode::CGravityForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CGravityForceSceneNode::CGravityForceSceneNode( glitch::IObject *a1, int *a2, uint32_t *a3, int a4);
// [0xd54720] (256 bytes) glitch::collada::CGravityForceSceneNode::CGravityForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CGravityForceSceneNode::CGravityForceSceneNode(glitch::IObject *a1, uint32_t *a2, int a3);
// [0xd54820] (455 bytes) glitch::collada::CVortexForceSceneNode::CVortexForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CVortexForceSceneNode::CVortexForceSceneNode( glitch::IObject *a1, int *a2, uint32_t *a3, int a4);
// [0xd549f0] (501 bytes) glitch::collada::CVortexForceSceneNode::CVortexForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CVortexForceSceneNode::CVortexForceSceneNode(glitch::IObject *a1, uint32_t *a2, int a3);
// [0xd54bf0] (252 bytes) glitch::collada::CWindForceSceneNode::CWindForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CWindForceSceneNode::CWindForceSceneNode(glitch::IObject *a1, int *a2, uint32_t *a3, int a4);
// [0xd54cf0] (298 bytes) glitch::collada::CWindForceSceneNode::CWindForceSceneNode(glitch::collada::CColladaDatabase const&,glitch::collada::SForce const&)
// int glitch::collada::CWindForceSceneNode::CWindForceSceneNode(glitch::IObject *a1, uint32_t *a2, int a3);
// [0xd54e20] (101 bytes) glitch::collada::CAnimationFilterBase::CAnimationFilterBase(boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&)
// volatile int32_t *glitch::collada::CAnimationFilterBase::CAnimationFilterBase( glitch::collada::CAnimationFilterBase *this, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> *a2);
// [0xd54e90] (101 bytes) glitch::collada::CAnimationFilterBase::CAnimationFilterBase(boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> const&)
// volatile int32_t *glitch::collada::CAnimationFilterBase::CAnimationFilterBase( volatile int32_t *a1, int a2);
// [0xd54f00] (76 bytes) glitch::collada::CAnimationFilterBase::CAnimationFilterBase(glitch::collada::CAnimationFilterBase const&)
// glitch::collada::CAnimationFilterBase *glitch::collada::CAnimationFilterBase::CAnimationFilterBase( glitch::collada::CAnimationFilterBase *this, const glitch::collada::CAnimationFilterBase *a2);
// [0xd54f50] (62 bytes) glitch::collada::CAnimationFilterBase::getMaskAllocationSize(void)const
// int glitch::collada::CAnimationFilterBase::getMaskAllocationSize(glitch::collada::CAnimationFilterBase *this);
// [0xd54f90] (74 bytes) glitch::collada::CAnimationFilterBase::init(glitch::collada::CAnimationFilterBase const&)
// void *glitch::collada::CAnimationFilterBase::init(void **this, const void **a2);
// [0xd54fe0] (87 bytes) glitch::collada::CAnimationFilterBase::set(glitch::collada::CAnimationFilterBase const&)
// int glitch::collada::CAnimationFilterBase::set( glitch::collada::CAnimationFilterBase *this, const glitch::collada::CAnimationFilterBase *a2);
// [0xd55040] (93 bytes) glitch::collada::CAnimationFilterBase::merge(glitch::collada::CAnimationFilterBase const&)
// int glitch::collada::CAnimationFilterBase::merge( glitch::collada::CAnimationFilterBase *this, const glitch::collada::CAnimationFilterBase *a2);
// [0xd550a0] (93 bytes) glitch::collada::CAnimationFilterBase::intersect(glitch::collada::CAnimationFilterBase const&)
// int glitch::collada::CAnimationFilterBase::intersect( glitch::collada::CAnimationFilterBase *this, const glitch::collada::CAnimationFilterBase *a2);
// [0xd55100] (77 bytes) glitch::collada::CAnimationFilterBase::inverse(void)
// int *glitch::collada::CAnimationFilterBase::inverse(glitch::collada::CAnimationFilterBase *this);
// [0xd55150] (102 bytes) glitch::collada::CAnimationFilterBase::disableAnimation(void)
// unsigned int glitch::collada::CAnimationFilterBase::disableAnimation( glitch::collada::CAnimationFilterBase *this);
// [0xd551c0] (92 bytes) glitch::collada::CAnimationFilterBase::isNull(void)const
// int glitch::collada::CAnimationFilterBase::isNull(glitch::collada::CAnimationFilterBase *this);
// [0xd55220] (120 bytes) glitch::collada::CAnimationFilterBase::disableAnimation(void *)
// int glitch::collada::CAnimationFilterBase::disableAnimation( glitch::collada::CAnimationFilterBase *this, void *a2);
// [0xd552a0] (279 bytes) glitch::collada::CAnimationFilterBase::disableAnimation(void *,glitch::collada::SChannel::Type)
// uint32_t *glitch::collada::CAnimationFilterBase::disableAnimation(int a1, int a2, int a3);
// [0xd553c0] (37 bytes) glitch::collada::CAnimationFilterBase::disableAnimation(int)
// int glitch::collada::CAnimationFilterBase::disableAnimation( glitch::collada::CAnimationFilterBase *this, int a2);
// [0xd553f0] (217 bytes) glitch::collada::CAnimationFilterBase::disableAnimation(glitch::collada::SChannel::Type)
// uint32_t *glitch::collada::CAnimationFilterBase::disableAnimation(int a1, int a2);
// [0xd554d0] (154 bytes) glitch::collada::CAnimationFilterBase::enableAnimation(void)
// int glitch::collada::CAnimationFilterBase::enableAnimation(glitch::collada::CAnimationFilterBase *this);
// [0xd55570] (34 bytes) glitch::collada::CAnimationFilterBase::init(void)
// int glitch::collada::CAnimationFilterBase::init(glitch::collada::CAnimationFilterBase *this);
// [0xd555a0] (326 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::onBindEx(glitch::scene::ISceneNode *,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::onBindEx( uint32_t *a1, int a2, volatile int32_t **a3);
// [0xd556f0] (629 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::onBindEx(glitch::scene::ISceneNode *,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// int glitch::collada::CSceneNodeAnimatorTrackBlender::onBindEx(uint32_t *a1, int a2, int *a3);
// [0xd55970] (118 bytes) glitch::collada::CAnimationFilterBase::enableAnimation(void *)
// int glitch::collada::CAnimationFilterBase::enableAnimation( glitch::collada::CAnimationFilterBase *this, void *a2);
// [0xd559f0] (279 bytes) glitch::collada::CAnimationFilterBase::enableAnimation(void *,glitch::collada::SChannel::Type)
// uint32_t *glitch::collada::CAnimationFilterBase::enableAnimation(int a1, int a2, int a3);
// [0xd55b10] (35 bytes) glitch::collada::CAnimationFilterBase::enableAnimation(int)
// uint32_t *glitch::collada::CAnimationFilterBase::enableAnimation( glitch::collada::CAnimationFilterBase *this, int a2);
// [0xd55b40] (217 bytes) glitch::collada::CAnimationFilterBase::enableAnimation(glitch::collada::SChannel::Type)
// uint32_t *glitch::collada::CAnimationFilterBase::enableAnimation(int a1, int a2);
// [0xd55c20] (261 bytes) glitch::collada::CAnimationFilterBase::getAnimationIndex(void *,glitch::collada::SChannel::Type)
// int glitch::collada::CAnimationFilterBase::getAnimationIndex(int a1, int a2, int a3);
// [0xd55d30] (285 bytes) glitch::collada::CAnimationFilterBase::isAnimationEnabled(void *,glitch::collada::SChannel::Type)
// bool glitch::collada::CAnimationFilterBase::isAnimationEnabled(int a1, int a2, int a3);
// [0xd55e50] (270 bytes) glitch::collada::CAnimationSet::CAnimationSet(void)
// glitch::collada::CAnimationSet *glitch::collada::CAnimationSet::CAnimationSet( glitch::collada::CAnimationSet *this);
// [0xd55f60] (198 bytes) glitch::collada::CAnimationSet::getAnimationClipIndex(int,float)
// int glitch::collada::CAnimationSet::getAnimationClipIndex( glitch::collada::CAnimationSet *this, int a2, float a3);
// [0xd56030] (31 bytes) glitch::collada::CAnimationSet::remAnimationTemplate(void)
// int glitch::collada::CAnimationSet::remAnimationTemplate(glitch::collada::CAnimationSet *this);
// [0xd56050] (286 bytes) glitch::collada::CAnimationSet::~CAnimationSet()
// void glitch::collada::CAnimationSet::~CAnimationSet(glitch::collada::CAnimationSet *this);
// [0xd56170] (56 bytes) glitch::collada::CAnimationSet::~CAnimationSet()
// void glitch::collada::CAnimationSet::~CAnimationSet(glitch::collada::CAnimationSet *this);
// [0xd561b0] (48 bytes) glitch::collada::CAnimationSetTransformationTemplate::CAnimationSetTransformationTemplate(char const*)
// glitch::collada::CAnimationSetTransformationTemplate *glitch::collada::CAnimationSetTransformationTemplate::CAnimationSetTransformationTemplate( glitch::collada::CAnimationSetTransformationTemplate *this);
// [0xd561e0] (349 bytes) glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets(glitch::collada::SNode &)
// uint32_t *glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets(int a1, int a2);
// [0xd56340] (222 bytes) glitch::collada::CAnimationSetTransformationTemplate::CAnimationSetTransformationTemplate(glitch::collada::CColladaDatabase *)
// glitch::collada::CAnimationSetTransformationTemplate *glitch::collada::CAnimationSetTransformationTemplate::CAnimationSetTransformationTemplate( glitch::collada::CAnimationSetTransformationTemplate *this, glitch::collada::CColladaDatabase *a2);
// [0xd56420] (84 bytes) glitch::collada::CAnimationSet::addAnimationTemplate(glitch::collada::CColladaDatabase *)
// glitch::collada::CAnimationSet *glitch::collada::CAnimationSet::addAnimationTemplate( glitch::collada::CAnimationSet *this, glitch::collada::CColladaDatabase *a2);
// [0xd56480] (349 bytes) glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets(glitch::collada::CSceneNode *)
// uint32_t *glitch::collada::CAnimationSetTransformationTemplate::addTransformationTargets( glitch::collada::CAnimationSetTransformationTemplate *this, glitch::collada::CSceneNode *a2);
// [0xd565e0] (74 bytes) glitch::collada::CAnimationSetTransformationTemplate::CAnimationSetTransformationTemplate(glitch::collada::CSceneNode *)
// glitch::collada::CAnimationSetTransformationTemplate *glitch::collada::CAnimationSetTransformationTemplate::CAnimationSetTransformationTemplate( glitch::collada::CAnimationSetTransformationTemplate *this, glitch::collada::CSceneNode *a2);
// [0xd56630] (84 bytes) glitch::collada::CAnimationSet::addAnimationTemplate(glitch::collada::CSceneNode *)
// glitch::collada::CAnimationSet *glitch::collada::CAnimationSet::addAnimationTemplate( glitch::collada::CAnimationSet *this, glitch::collada::CSceneNode *a2);
// [0xd56690] (106 bytes) glitch::collada::CAnimationBlock::getBlock(glitch::collada::SAnimationBlockSearchKey const&)
// uint32_t *glitch::collada::CAnimationBlock::getBlock(uint32_t *a1, int a2);
// [0xd56700] (128 bytes) glitch::collada::CAnimationStreamingManager::CAnimationStreamingManager(void)
// struct glitch::collada::CAnimationStreamingManager *glitch::collada::CAnimationStreamingManager::CAnimationStreamingManager( glitch::collada::CAnimationStreamingManager *this);
// [0xd56780] (207 bytes) glitch::collada::CAnimationStreamingManager::~CAnimationStreamingManager()
// void glitch::collada::CAnimationStreamingManager::~CAnimationStreamingManager(void **this);
// [0xd56850] (391 bytes) glitch::collada::CAnimationStreamingManager::checkMemoryUsage(void)
// char *glitch::collada::CAnimationStreamingManager::checkMemoryUsage( glitch::collada::CAnimationStreamingManager *this);
// [0xd569e0] (761 bytes) glitch::collada::CAnimationStreamingManager::cache(glitch::collada::CAnimationBlock *)
// void glitch::collada::CAnimationStreamingManager::cache( glitch::collada::CAnimationStreamingManager *this, glitch::collada::CAnimationBlock *a2);
// [0xd56ce0] (866 bytes) glitch::collada::CAnimationStreamingManager::registerAnimationBlock(glitch::collada::CAnimationBlock *)
// void glitch::collada::CAnimationStreamingManager::registerAnimationBlock( glitch::collada::CAnimationStreamingManager *this, glitch::collada::CAnimationBlock *a2);
// [0xd57050] (888 bytes) glitch::collada::CAnimationBlock::CAnimationBlock(glitch::collada::CColladaDatabase const&,glitch::collada::SAnimationClip const*,glitch::collada::SAnimationSegment *)
// volatile int32_t *glitch::collada::CAnimationBlock::CAnimationBlock( glitch::collada::CAnimationBlock *a1, uint32_t *a2, int a3, int a4);
// [0xd573d0] (1701 bytes) glitch::collada::CAnimationBlock::CAnimationBlock(glitch::collada::CColladaDatabase const&,glitch::collada::SAnimationClip const*,int)
// int glitch::collada::CAnimationBlock::CAnimationBlock( glitch::collada::CAnimationBlock *a1, glitch::collada::CColladaDatabase *a2, int a3, int a4);
// [0xd57a80] (560 bytes) glitch::collada::CAnimationStreamingManager::getAnimationBlock(glitch::collada::SAnimationBlockSearchKey const&)
// glitch::collada::CAnimationBlock *glitch::collada::CAnimationStreamingManager::getAnimationBlock( int a1, int **a2);
// [0xd57cb0] (148 bytes) glitch::collada::CAnimationBlock::prepareNextBlock(void)
// glitch::collada::CAnimationBlock *glitch::collada::CAnimationBlock::prepareNextBlock( glitch::collada::CAnimationBlock *this);
// [0xd57d50] (57 bytes) glitch::collada::CAnimationBlock::grab(void)
// glitch::collada::CAnimationBlock *glitch::collada::CAnimationBlock::grab( glitch::collada::CAnimationBlock *this);
// [0xd57d90] (346 bytes) glitch::collada::CAnimationStreamingManager::unregisterAnimationBlock(glitch::collada::CAnimationBlock *)
// int glitch::collada::CAnimationStreamingManager::unregisterAnimationBlock( glitch::collada::CAnimationStreamingManager *this, glitch::collada::CAnimationBlock *a2);
// [0xd57ef0] (80 bytes) glitch::collada::CAnimationBlock::free(void)
// void glitch::collada::CAnimationBlock::free(glitch::collada::CAnimationBlock *this);
// [0xd57f40] (202 bytes) glitch::collada::CAnimationBlock::drop(void)
// uint32_t *glitch::collada::CAnimationBlock::drop(glitch::collada::CAnimationBlock *this);
// [0xd58010] (446 bytes) glitch::collada::CAnimationStreamingManager::getAnimationBlock(glitch::collada::SAnimationBlockSearchKey const&,boost::intrusive_ptr<glitch::collada::CAnimationBlock> &)
// uint32_t *glitch::collada::CAnimationStreamingManager::getAnimationBlock( int a1, int a2, glitch::collada::CAnimationBlock **a3);
// [0xd581d0] (170 bytes) glitch::collada::CAnimationBlock::~CAnimationBlock()
// void glitch::collada::CAnimationBlock::~CAnimationBlock(glitch::collada::CAnimationBlock *this);
// [0xd58280] (9 bytes) glitch::collada::CAnimationTrackHandlers::setCallback(void (*)(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *))
// void glitch::collada::CAnimationTrackHandlers::setCallback();
// [0xd58290] (9 bytes) glitch::collada::CAnimationTrackHandlers::setCallback(glitch::collada::SChannel::Type,void (*)(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *))
// void glitch::collada::CAnimationTrackHandlers::setCallback();
// [0xd582a0] (9 bytes) glitch::collada::CAnimationTrackHandlers::setCallback(void *,void (*)(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *))
// void glitch::collada::CAnimationTrackHandlers::setCallback();
// [0xd582b0] (9 bytes) glitch::collada::CAnimationTrackHandlers::setCallback(void *,glitch::collada::SChannel::Type,void (*)(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *))
// void glitch::collada::CAnimationTrackHandlers::setCallback();
// [0xd582c0] (9 bytes) glitch::collada::CAnimationTrackHandlers::setType(glitch::collada::SAnimationTrackHandlingType)
// void glitch::collada::CAnimationTrackHandlers::setType();
// [0xd582d0] (9 bytes) glitch::collada::CAnimationTrackHandlers::setType(glitch::collada::SChannel::Type,glitch::collada::SAnimationTrackHandlingType)
// void glitch::collada::CAnimationTrackHandlers::setType();
// [0xd582e0] (9 bytes) glitch::collada::CAnimationTrackHandlers::setType(void *,glitch::collada::SAnimationTrackHandlingType)
// void glitch::collada::CAnimationTrackHandlers::setType();
// [0xd582f0] (9 bytes) glitch::collada::CAnimationTrackHandlers::setType(void *,glitch::collada::SChannel::Type,glitch::collada::SAnimationTrackHandlingType)
// void glitch::collada::CAnimationTrackHandlers::setType();
// [0xd58300] (9 bytes) glitch::collada::CAnimationTrackHandlers::setTrack(glitch::collada::SChannel::Type,void (*)(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *),glitch::collada::SAnimationTrackHandlingType)
// void glitch::collada::CAnimationTrackHandlers::setTrack();
// [0xd58310] (9 bytes) glitch::collada::CAnimationTrackHandlers::setTrack(void *,void (*)(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *),glitch::collada::SAnimationTrackHandlingType)
// void glitch::collada::CAnimationTrackHandlers::setTrack();
// [0xd58320] (183 bytes) glitch::collada::CAnimationTrackHandlers::setTrack(int,void (*)(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *),glitch::collada::SAnimationTrackHandlingType)
// uint32_t *glitch::collada::CAnimationTrackHandlers::setTrack(int a1, int a2, int a3, char a4);
// [0xd583e0] (85 bytes) glitch::collada::CAnimationTrackHandlers::setTrack(void (*)(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *),glitch::collada::SAnimationTrackHandlingType)
// uint32_t *glitch::collada::CAnimationTrackHandlers::setTrack(int a1, int a2, char a3);
// [0xd58440] (287 bytes) glitch::collada::CAnimationTrackHandlers::setTrack(void *,glitch::collada::SChannel::Type,void (*)(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *),glitch::collada::SAnimationTrackHandlingType)
// uint32_t *glitch::collada::CAnimationTrackHandlers::setTrack(int a1, int a2, int a3, int a4, char a5);
// [0xd58560] (67 bytes) glitch::collada::CAnimationTrackHandlersCookie::CAnimationTrackHandlersCookie(void)
// struct glitch::collada::CAnimationTrackHandlersCookie *glitch::collada::CAnimationTrackHandlersCookie::CAnimationTrackHandlersCookie( glitch::collada::CAnimationTrackHandlersCookie *this);
// [0xd585b0] (106 bytes) glitch::collada::CAnimationTrackHandlersCookie::cleanup(void)
// int glitch::collada::CAnimationTrackHandlersCookie::cleanup( glitch::collada::CAnimationTrackHandlersCookie *this);
// [0xd58620] (78 bytes) glitch::collada::CAnimationTrackHandlersCookie::~CAnimationTrackHandlersCookie()
// void glitch::collada::CAnimationTrackHandlersCookie::~CAnimationTrackHandlersCookie(void **this);
// [0xd58670] (32 bytes) glitch::collada::CAnimationTrackHandlersCookie::getHandlerBuffer(unsigned int)
// int glitch::collada::CAnimationTrackHandlersCookie::getHandlerBuffer( glitch::collada::CAnimationTrackHandlersCookie *this, unsigned int a2);
// [0xd58690] (201 bytes) glitch::collada::CAnimationTrackHandlersCookie::createHandlerBuffer(unsigned int &)
// int glitch::collada::CAnimationTrackHandlersCookie::createHandlerBuffer( glitch::collada::CAnimationTrackHandlersCookie *this, unsigned int *a2);
// [0xd58760] (57 bytes) glitch::collada::CAnimationTrackHandlersCookie::releaseHandlerBuffer(unsigned int)
// void glitch::collada::CAnimationTrackHandlersCookie::releaseHandlerBuffer( glitch::collada::CAnimationTrackHandlersCookie *this, unsigned int a2);
// [0xd587a0] (568 bytes) glitch::collada::CAnimationTrackHandlersCookie::onPostAnimate(void)
// char *glitch::collada::CAnimationTrackHandlersCookie::onPostAnimate( glitch::collada::CAnimationTrackHandlersCookie *this);
// [0xd589e0] (34 bytes) glitch::collada::CAnimationTrackHandlersCookie::invalidate(void)
// int glitch::collada::CAnimationTrackHandlersCookie::invalidate( glitch::collada::CAnimationTrackHandlersCookie *this);
// [0xd58a10] (20 bytes) glitch::collada::CAnimationTrackWeights::getApplyFilter(int)
// char *glitch::collada::CAnimationTrackWeights::getApplyFilter( glitch::collada::CAnimationTrackWeights *this, int a2);
// [0xd58a30] (12 bytes) glitch::collada::CAnimationTrackWeights::getBlendingFilter(void)
// char *glitch::collada::CAnimationTrackWeights::getBlendingFilter(glitch::collada::CAnimationTrackWeights *this);
// [0xd58a40] (205 bytes) glitch::collada::CAnimationTrackWeights::setFilters(int,float)
// uint32_t *glitch::collada::CAnimationTrackWeights::setFilters( glitch::collada::CAnimationTrackWeights *this, int a2, float a3);
// [0xd58b10] (86 bytes) glitch::collada::CAnimationTrackWeights::setWeight(int,float)
// int glitch::collada::CAnimationTrackWeights::setWeight( glitch::collada::CAnimationTrackWeights *this, int a2, float a3);
// [0xd58b70] (152 bytes) glitch::collada::CAnimationTrackWeights::setWeight(void *,float)
// uint32_t *glitch::collada::CAnimationTrackWeights::setWeight( glitch::collada::CAnimationTrackWeights *this, void *a2, float a3);
// [0xd58c10] (318 bytes) glitch::collada::CAnimationTrackWeights::setWeight(void *,glitch::collada::SChannel::Type,float)
// uint32_t *glitch::collada::CAnimationTrackWeights::setWeight( glitch::collada::CAnimationTrackWeights *a1, int a2, int a3, float a4);
// [0xd58d50] (217 bytes) glitch::collada::CAnimationTrackWeights::setWeight(glitch::collada::SChannel::Type,float)
// uint32_t *glitch::collada::CAnimationTrackWeights::setWeight( glitch::collada::CAnimationTrackWeights *a1, uint32_t *a2, float a3);
// [0xd58e30] (96 bytes) glitch::collada::CAnimationTrackWeights::setWeight(float)
// int glitch::collada::CAnimationTrackWeights::setWeight(glitch::collada::CAnimationTrackWeights *this, float a2);
// [0xd58e90] (614 bytes) glitch::collada::createTable(glitch::scene::ISceneNode *,std::vector<std::pair<char const*,glitch::scene::ISceneNode *>,glitch::core::SAllocator<std::pair<char const*,glitch::scene::ISceneNode *>,(glitch::memory::E_MEMORY_HINT)0>> &,glitch::collada::CColladaDatabase const&)
// uint32_t *glitch::collada::createTable(glitch::scene::ISceneNode *a1, int *a2, int a3);
// [0xd59100] (578 bytes) glitch::collada::createTable(glitch::collada::CRootSceneNode *,std::vector<std::pair<char const*,glitch::scene::ISceneNode *>,glitch::core::SAllocator<std::pair<char const*,glitch::scene::ISceneNode *>,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::collada::createTable(glitch::collada::CRootSceneNode *a1, int *a2);
// [0xd59350] (92 bytes) glitch::collada::find(std::vector<std::pair<char const*,glitch::scene::ISceneNode *>,glitch::core::SAllocator<std::pair<char const*,glitch::scene::ISceneNode *>,(glitch::memory::E_MEMORY_HINT)0>> &,char const*)
// int glitch::collada::find(int *a1, char *s2);
// [0xd593b0] (9 bytes) glitch::collada::CAnimationTreeCookie::unbind(void)
// void glitch::collada::CAnimationTreeCookie::unbind();
// [0xd593c0] (505 bytes) glitch::collada::CAnimationTreeCookie::compile(void)
// void glitch::collada::CAnimationTreeCookie::compile(glitch::collada::CAnimationTreeCookie *this);
// [0xd595c0] (82 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::animateEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::animateEx( int a1, int a2, glitch::collada::CAnimationTreeCookie **a3);
// [0xd59620] (82 bytes) glitch::collada::CSceneNodeAnimatorSet::animateEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// int glitch::collada::CSceneNodeAnimatorSet::animateEx( int a1, int a2, glitch::collada::CAnimationTreeCookie **a3);
// [0xd59680] (82 bytes) glitch::collada::CSceneNodeAnimatorBlender::animateEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// int glitch::collada::CSceneNodeAnimatorBlender::animateEx( int a1, int a2, glitch::collada::CAnimationTreeCookie **a3);
// [0xd596e0] (148 bytes) glitch::collada::CDynamicAnimationSet::CDynamicAnimationSet(void)
// glitch::collada::CDynamicAnimationSet *glitch::collada::CDynamicAnimationSet::CDynamicAnimationSet( glitch::collada::CDynamicAnimationSet *this);
// [0xd59780] (82 bytes) glitch::collada::CDynamicAnimationSet::getDatabaseIndex(glitch::collada::CColladaDatabase &)
// int glitch::collada::CDynamicAnimationSet::getDatabaseIndex( glitch::collada::CDynamicAnimationSet *this, glitch::collada::CColladaDatabase *a2);
// [0xd597e0] (84 bytes) glitch::collada::CDynamicAnimationSet::clearTracks(void)
// glitch::collada::CDynamicAnimationSet *glitch::collada::CDynamicAnimationSet::clearTracks( glitch::collada::CDynamicAnimationSet *this);
// [0xd59840] (106 bytes) glitch::collada::CDynamicAnimationSet::clearSet(void)
// glitch::collada::CColladaDatabase *glitch::collada::CDynamicAnimationSet::clearSet( glitch::collada::CDynamicAnimationSet *this);
// [0xd598b0] (158 bytes) glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary(glitch::collada::CColladaDatabase const&)
// void glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary( glitch::collada::CDynamicAnimationSet *this, const glitch::collada::CColladaDatabase *a2);
// [0xd59950] (303 bytes) glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary(unsigned int)
// void glitch::collada::CDynamicAnimationSet::setDefaultAnimationLibrary( glitch::collada::CDynamicAnimationSet *this, unsigned int a2);
// [0xd59a80] (374 bytes) glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings(unsigned int)
// void glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings( glitch::collada::CDynamicAnimationSet *this, unsigned int a2);
// [0xd59c00] (68 bytes) glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings(glitch::collada::CColladaDatabase &)
// void glitch::collada::CDynamicAnimationSet::remAnimationLibraryBindings( glitch::collada::CDynamicAnimationSet *this, glitch::collada::CColladaDatabase *a2);
// [0xd59c50] (540 bytes) glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings(glitch::collada::CColladaDatabase const&,unsigned int)
// void glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings( glitch::collada::CDynamicAnimationSet *this, const glitch::collada::CColladaDatabase *a2, unsigned int a3);
// [0xd59e70] (76 bytes) glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings(glitch::collada::CColladaDatabase const&,glitch::collada::CColladaDatabase&)
// void glitch::collada::CDynamicAnimationSet::overwriteAnimationLibraryBindings( glitch::collada::CDynamicAnimationSet *this, const glitch::collada::CColladaDatabase *a2, glitch::collada::CColladaDatabase *a3);
// [0xd59ec0] (209 bytes) glitch::collada::CRootMotion::enable(bool)
// int glitch::collada::CRootMotion::enable(glitch::collada::CRootMotion *this, bool a2);
// [0xd59fa0] (137 bytes) glitch::collada::CRootMotion::~CRootMotion()
// void glitch::collada::CRootMotion::~CRootMotion(volatile int32_t **this);
// [0xd5a030] (56 bytes) glitch::collada::CRootMotion::~CRootMotion()
// void glitch::collada::CRootMotion::~CRootMotion(volatile int32_t **this);
// [0xd5a070] (61 bytes) glitch::collada::CRootMotion::rotate(glitch::core::quaternion &)
// glitch::collada::CRootMotion *glitch::collada::CRootMotion::rotate(int **this, glitch::core::quaternion *a2);
// [0xd5a0b0] (42 bytes) glitch::collada::CRootMotion::rotateCallback(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *)
// glitch::collada::CRootMotion *glitch::collada::CRootMotion::rotateCallback( int a1, int a2, int a3, int a4, glitch::core::quaternion *a5, int **a6);
// [0xd5a0e0] (61 bytes) glitch::collada::CRootMotion::move(glitch::core::vector3d<float> &)
// int glitch::collada::CRootMotion::move(int a1, int a2);
// [0xd5a120] (42 bytes) glitch::collada::CRootMotion::moveCallback(glitch::collada::CAnimationTrackEx const*,void *,glitch::collada::animation_track::CApplicatorInfo *,glitch::collada::SAnimationTrackHandlingType,void const*,void *)
// int glitch::collada::CRootMotion::moveCallback(int a1, int a2, int a3, int a4, int a5, int a6);
// [0xd5a150] (63 bytes) glitch::collada::IAnimationSetTemplate::setUnAdded(void)
// unsigned int glitch::collada::IAnimationSetTemplate::setUnAdded(glitch::collada::IAnimationSetTemplate *this);
// [0xd5a190] (173 bytes) glitch::collada::IAnimationSetTemplate::addChannels(std::vector<glitch::collada::SChannel const*,glitch::core::SAllocator<glitch::collada::SChannel const*,(glitch::memory::E_MEMORY_HINT)0>> *,std::vector<glitch::collada::CAnimationTrackEx const*,glitch::core::SAllocator<glitch::collada::CAnimationTrackEx const*,(glitch::memory::E_MEMORY_HINT)0>> *)
// unsigned int glitch::collada::IAnimationSetTemplate::addChannels(glitch::collada::IAnimationSetTemplate *this);
// [0xd5a240] (100 bytes) glitch::collada::CAnimationTrackEx::CAnimationTrackEx(glitch::E_TYPE,signed char)
// int16_t glitch::collada::CAnimationTrackEx::CAnimationTrackEx(int a1, unsigned int a2, uint8_t a3);
// [0xd5a2b0] (15 bytes) glitch::collada::CSceneNodeAnimatorBlender::getAnimator(int)const
// int glitch::collada::CSceneNodeAnimatorBlender::getAnimator( glitch::collada::CSceneNodeAnimatorBlender *this, int a2);
// [0xd5a2c0] (198 bytes) glitch::collada::CSceneNodeAnimatorBlender::prepareAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::IBlendingBuffer &)
// int glitch::collada::CSceneNodeAnimatorBlender::prepareAnimationValues(uint32_t *a1, int64_t a2, int a3);
// [0xd5a390] (59 bytes) glitch::collada::CSceneNodeAnimatorBlender::getWeightIndex(boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&)
// int glitch::collada::CSceneNodeAnimatorBlender::getWeightIndex( glitch::collada::CSceneNodeAnimatorBlender *this, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> *a2);
// [0xd5a3d0] (22 bytes) glitch::collada::getStringsInternal(glitch::collada::E_BLENDER_MODE *)
// char **glitch::collada::getStringsInternal();
// [0xd5a3f0] (81 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::CSceneNodeAnimatorBlenderBase(void)
// struct glitch::collada::CSceneNodeAnimatorBlenderBase *glitch::collada::CSceneNodeAnimatorBlenderBase::CSceneNodeAnimatorBlenderBase( glitch::collada::CSceneNodeAnimatorBlenderBase *this);
// [0xd5a450] (134 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::normalizeWeights(void)
// signed int glitch::collada::CSceneNodeAnimatorBlenderBase::normalizeWeights( glitch::collada::CSceneNodeAnimatorBlenderBase *this);
// [0xd5a4e0] (112 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::prepareWeightsTable(void)
// signed int glitch::collada::CSceneNodeAnimatorBlenderBase::prepareWeightsTable( glitch::collada::CSceneNodeAnimatorBlenderBase *this);
// [0xd5a550] (221 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackValue(int,void const*,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> const&)
// int glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackValue(int a1, int a2, int a3, int *a4);
// [0xd5a630] (504 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackBlendedValue(int,void const*,float *,int,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> const&)
// int glitch::collada::CSceneNodeAnimatorBlenderBase::applyTrackBlendedValue( int a1, int a2, int a3, int a4, int a5, int *a6);
// [0xd5a830] (165 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::computeTrackBlendedValue(int,void const*,float *,int,void *,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> const&)
// int glitch::collada::CSceneNodeAnimatorBlenderBase::computeTrackBlendedValue( int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0xd5a8e0] (398 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::computeBlendedValue(glitch::collada::IBlendingBuffer const&,float *,glitch::collada::CBlendingUnit &,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> const&)
// uint16_t *glitch::collada::CSceneNodeAnimatorBlenderBase::computeBlendedValue( int a1, uint32_t *a2, int a3, uint32_t *a4, int a5);
// [0xd5aa70] (374 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::applyBlendedValue(glitch::collada::IBlendingBuffer const&,float *,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> const&)
// int glitch::collada::CSceneNodeAnimatorBlenderBase::applyBlendedValue(int a1, uint32_t *a2, int a3, int *a4);
// [0xd5abf0] (221 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &,bool &)
// int glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought( float **a1, int a2, int a3, int a4, uint8_t *a5);
// [0xd5acd0] (425 bytes) glitch::collada::CSceneNodeAnimatorBlender::computeAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// int glitch::collada::CSceneNodeAnimatorBlender::computeAnimationValues(float **a1, int64_t a2, uint32_t *a3);
// [0xd5ae80] (202 bytes) glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// int glitch::collada::CSceneNodeAnimatorBlenderBase::checkBlendingPassThrought(float **a1, int a2, int a3);
// [0xd5af50] (351 bytes) glitch::collada::CSceneNodeAnimatorBlender::applyAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// volatile int32_t *glitch::collada::CSceneNodeAnimatorBlender::applyAnimationValues( float **a1, int64_t a2);
// [0xd5b0b0] (148 bytes) glitch::collada::CSceneNodeAnimatorSet::getAnimationLength(int,int)
// long double glitch::collada::CSceneNodeAnimatorSet::getAnimationLength( glitch::collada::CSceneNodeAnimatorSet *this, int a2, unsigned int a3);
// [0xd5b150] (139 bytes) glitch::collada::CSceneNodeAnimatorSet::getAnimationStart(int,int)
// long double glitch::collada::CSceneNodeAnimatorSet::getAnimationStart( glitch::collada::CSceneNodeAnimatorSet *this, unsigned int a2, int a3);
// [0xd5b1e0] (139 bytes) glitch::collada::CSceneNodeAnimatorSet::getAnimationEnd(int,int)
// long double glitch::collada::CSceneNodeAnimatorSet::getAnimationEnd( glitch::collada::CSceneNodeAnimatorSet *this, unsigned int a2, int a3);
// [0xd5b270] (477 bytes) glitch::collada::CSceneNodeAnimatorSet::setCurrentAnimation(int)
// int glitch::collada::CSceneNodeAnimatorSet::setCurrentAnimation( glitch::collada::CSceneNodeAnimatorSet *this, unsigned int a2);
// [0xd5b450] (12 bytes) glitch::collada::CSceneNodeAnimatorSet::getAnimationDictionary(void)const
// char *glitch::collada::CSceneNodeAnimatorSet::getAnimationDictionary( glitch::collada::CSceneNodeAnimatorSet *this);
// [0xd5b460] (14 bytes) glitch::collada::CSceneNodeAnimatorSet::setMode(glitch::collada::E_ANIMATOR_MODE)
// int glitch::collada::CSceneNodeAnimatorSet::setMode(int a1, int a2);
// [0xd5b470] (12 bytes) glitch::collada::CSceneNodeAnimatorSet::getCurrentAnimation(void)const
// int glitch::collada::CSceneNodeAnimatorSet::getCurrentAnimation(glitch::collada::CSceneNodeAnimatorSet *this);
// [0xd5b480] (348 bytes) glitch::collada::CSceneNodeAnimatorSet::getAnimationData(float)
// int glitch::collada::CSceneNodeAnimatorSet::getAnimationData( glitch::collada::CSceneNodeAnimatorSet *this, float a2, int a3, glitch::collada::CColladaDatabase *a4, int a5, int a6);
// [0xd5b5e0] (339 bytes) glitch::collada::CSceneNodeAnimatorSet::getAnimationValue(int,float,void *)
// int glitch::collada::CSceneNodeAnimatorSet::getAnimationValue( glitch::collada::CSceneNodeAnimatorSet *this, int a2, int64_t a3);
// [0xd5b740] (688 bytes) glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingAdditiveValuesEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// volatile int32_t *glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingAdditiveValuesEx( glitch::collada::CSceneNodeAnimatorSet *a1, float a2, int a3, uint32_t *a4, int a5, void (***a6)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *__hidden this), int a7, void (**a8)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *__hidden this), volatile int32_t *a9, glitch::core *a10, int a11, char a12, glitch::collada::CSceneNodeAnimatorSet *a13);
// [0xd5b9f0] (2036 bytes) glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingValuesEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// int glitch::collada::CSceneNodeAnimatorSet::computeAnimationNoHandlingValuesEx( int **a1, int64_t a2, uint32_t *a3);
// [0xd5c1f0] (688 bytes) glitch::collada::CSceneNodeAnimatorSet::computeAnimationAdditiveValuesEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// volatile int32_t *glitch::collada::CSceneNodeAnimatorSet::computeAnimationAdditiveValuesEx( glitch::collada::CSceneNodeAnimatorSet *a1, float a2, int a3, uint32_t *a4, int a5, void (***a6)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *__hidden this), int a7, void (**a8)(glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char, false>> *__hidden this), volatile int32_t *a9, glitch::core *a10, int a11, char a12, glitch::collada::CSceneNodeAnimatorSet *a13);
// [0xd5c4a0] (1688 bytes) glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// volatile int32_t *glitch::collada::CSceneNodeAnimatorSet::computeAnimationValuesEx( int **a1, int64_t a2, uint32_t *a3);
// [0xd5cb40] (1754 bytes) glitch::collada::CSceneNodeAnimatorSet::applyAnimationValuesEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// volatile int32_t *glitch::collada::CSceneNodeAnimatorSet::applyAnimationValuesEx( glitch::collada::CSceneNodeAnimatorSet *a1, float a2, int *a3);
// [0xd5d220] (200 bytes) glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues(float,float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>> &)
// int glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues( int **a1, unsigned int a2, int64_t a3, int a4);
// [0xd5d2f0] (688 bytes) glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>> &)
// int glitch::collada::CSceneNodeAnimatorSet::prepareAnimationHandlingValues( int **a1, void *a2, unsigned int a3, int a4);
// [0xd5d5a0] (1170 bytes) glitch::collada::CSceneNodeAnimatorSet::applyAnimationHandlingValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// const glitch::collada::CAnimationFilterBase *glitch::collada::CSceneNodeAnimatorSet::applyAnimationHandlingValues( glitch::collada::ISceneNodeAnimator *a1, void *a2, volatile int32_t **a3);
// [0xd5da40] (3124 bytes) glitch::collada::CSceneNodeAnimatorSet::applyAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// 0xd5da40 glitch::collada::CSceneNodeAnimatorSet::applyAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// [0xd5e680] (1162 bytes) glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// const glitch::collada::CAnimationFilterBase *glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues( glitch::collada::ISceneNodeAnimator *a1, void *a2, volatile int32_t **a3);
// [0xd5eb10] (315 bytes) glitch::collada::CSceneNodeAnimatorSet::computeAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// int glitch::collada::CSceneNodeAnimatorSet::computeAnimationValues( glitch::collada::ISceneNodeAnimator *a1, void *a2, volatile int32_t **a3, uint32_t *a4);
// [0xd5ec50] (1192 bytes) glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues(float,float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// const glitch::collada::CAnimationFilterBase *glitch::collada::CSceneNodeAnimatorSet::computeAnimationHandlingValues( int **a1, unsigned int a2, int64_t a3);
// [0xd5f100] (241 bytes) glitch::collada::CSceneNodeAnimatorSet::getAnimationValues(float,float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// int glitch::collada::CSceneNodeAnimatorSet::getAnimationValues( int **a1, unsigned int a2, int64_t a3, uint32_t *a4);
// [0xd5f200] (575 bytes) glitch::collada::CSceneNodeAnimatorSnapShot::captureFrame(void)
// int glitch::collada::CSceneNodeAnimatorSnapShot::captureFrame( glitch::collada::CSceneNodeAnimatorSnapShot *this, int a2, int a3, int a4, int a5, int a6, int a7, uint8_t a8, uint32_t *a9);
// [0xd5f440] (182 bytes) glitch::collada::CSceneNodeAnimatorSnapShot::prepareForCapture(void)
// 0xd5f440 glitch::collada::CSceneNodeAnimatorSnapShot::prepareForCapture(void)
// [0xd5f500] (150 bytes) glitch::collada::CSceneNodeAnimatorSnapShot::onBindEx(glitch::scene::ISceneNode *,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// int glitch::collada::CSceneNodeAnimatorSnapShot::onBindEx( glitch::collada::CSceneNodeAnimatorSnapShot *a1, int a2, int *a3);
// [0xd5f5a0] (53 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::setAnimators(boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&,boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&)
// int glitch::collada::CSceneNodeAnimatorTrackBlender::setAnimators( glitch::collada::CSceneNodeAnimatorTrackBlender *this, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> *a2, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> *a3);
// [0xd5f5e0] (87 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::setTrackWeights(boost::intrusive_ptr<glitch::collada::CAnimationTrackWeights> &)
// volatile int32_t *glitch::collada::CSceneNodeAnimatorTrackBlender::setTrackWeights(int a1, int *a2);
// [0xd5f640] (333 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::initAnimatorFilters(std::vector<unsigned short,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>> const&,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// int glitch::collada::CSceneNodeAnimatorTrackBlender::initAnimatorFilters(int a1, int *a2, int *a3);
// [0xd5f790] (1727 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::computeAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// int glitch::collada::CSceneNodeAnimatorTrackBlender::computeAnimationValues(int a1, int64_t a2, uint32_t *a3);
// [0xd5fe50] (1735 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::applyAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// volatile int32_t *glitch::collada::CSceneNodeAnimatorTrackBlender::applyAnimationValues( int a1, int64_t a2);
// [0xd60520] (78 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setAnimatorsMode(glitch::collada::E_ANIMATOR_MODE)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setAnimatorsMode(uint32_t *a1, int a2);
// [0xd60570] (102 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation(int,int &,int &)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation( glitch::collada::CSceneNodeAnimatorSynchronizedBlender *this, int a2, int *a3, int *a4);
// [0xd605e0] (44 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation(int)const
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimation( glitch::collada::CSceneNodeAnimatorSynchronizedBlender *this, int a2);
// [0xd60610] (41 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimationClip(int)const
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getCurrentAnimationClip( glitch::collada::CSceneNodeAnimatorSynchronizedBlender *this, int a2);
// [0xd60640] (12 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getAnimationLength(void)const
// long double glitch::collada::CSceneNodeAnimatorSynchronizedBlender::getAnimationLength( glitch::collada::CSceneNodeAnimatorSynchronizedBlender *this);
// [0xd60650] (208 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::adjustTimeline(void)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::adjustTimeline( glitch::collada::CSceneNodeAnimatorSynchronizedBlender *this);
// [0xd60720] (185 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setCurrentAnimation(int,int,int)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setCurrentAnimation( glitch::collada::CSceneNodeAnimatorSynchronizedBlender *this, int a2, int a3, int a4);
// [0xd607e0] (1381 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValuesEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>> &)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValuesEx( glitch::collada::ISceneNodeAnimator *a1, float a2, unsigned int a3, int a4);
// [0xd60d50] (331 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationNoHandlingValuesEx(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>> &)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationNoHandlingValuesEx( uint32_t *a1, float a2, int a3, int a4);
// [0xd60ea0] (1179 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>> &)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationHandlingValues( glitch::collada::CAnimationFilterBase **a1, float a2, unsigned int a3);
// [0xd61340] (232 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::detail::CBlendingBuffer<glitch::core::SProcessBufferAllocator<unsigned char,false>> &)
// glitch::collada::CAnimationFilterBase *glitch::collada::CSceneNodeAnimatorSynchronizedBlender::prepareAnimationValues( glitch::collada::CAnimationFilterBase **a1, float a2, int a3, int a4);
// [0xd61430] (347 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::computeAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &,glitch::collada::CBlendingUnit &)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::computeAnimationValues( glitch::collada::ISceneNodeAnimator *a1, float a2, volatile int32_t **a3, uint32_t *a4);
// [0xd61590] (347 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::applyAnimationValues(float,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> &)
// volatile int32_t *glitch::collada::CSceneNodeAnimatorSynchronizedBlender::applyAnimationValues( glitch::collada::ISceneNodeAnimator *a1, float a2, int *a3);
// [0xd616f0] (22 bytes) glitch::collada::getStringsInternal(glitch::collada::E_ANIMATOR_MODE *)
// char **glitch::collada::getStringsInternal();
// [0xd61710] (22 bytes) glitch::collada::getStringsInternal(glitch::collada::ISceneNodeAnimator::E_INTERPOLATION_MODE *)
// char **glitch::collada::getStringsInternal();
// [0xd61730] (192 bytes) glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(void)
// void (**glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator( glitch::collada::ISceneNodeAnimator *this, int *a2))(glitch::collada::ISceneNodeAnimator *__hidden this);
// [0xd617f0] (119 bytes) glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(void)
// void (**glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender( glitch::collada::CSceneNodeAnimatorBlender *this))(glitch::collada::CSceneNodeAnimatorBlender *__hidden this);
// [0xd61870] (105 bytes) glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(void)
// void (**glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender( glitch::collada::CSceneNodeAnimatorBlender *this, int *a2))(glitch::collada::CSceneNodeAnimatorBlender *__hidden this);
// [0xd618e0] (124 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::CSceneNodeAnimatorTrackBlender(void)
// void (**glitch::collada::CSceneNodeAnimatorTrackBlender::CSceneNodeAnimatorTrackBlender( glitch::collada::CSceneNodeAnimatorTrackBlender *this))(glitch::collada::CSceneNodeAnimatorTrackBlender *__hidden this);
// [0xd61960] (122 bytes) glitch::collada::CSceneNodeAnimatorTrackBlender::CSceneNodeAnimatorTrackBlender(void)
// void (**glitch::collada::CSceneNodeAnimatorTrackBlender::CSceneNodeAnimatorTrackBlender( glitch::collada::CSceneNodeAnimatorTrackBlender *this, int *a2))(glitch::collada::CSceneNodeAnimatorTrackBlender *__hidden this);
// [0xd619e0] (281 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::CSceneNodeAnimatorSynchronizedBlender(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::CSceneNodeAnimatorSynchronizedBlender( uint32_t *a1, int *a2);
// [0xd61b00] (264 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::CSceneNodeAnimatorSynchronizedBlender(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&)
// int glitch::collada::CSceneNodeAnimatorSynchronizedBlender::CSceneNodeAnimatorSynchronizedBlender( glitch::collada::ISceneNodeAnimator *a1, int *a2, int *a3);
// [0xd61c10] (153 bytes) glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator(void)
// void (**glitch::collada::ISceneNodeAnimator::ISceneNodeAnimator( glitch::collada::ISceneNodeAnimator *this))(glitch::collada::ISceneNodeAnimator *__hidden this);
// [0xd61cb0] (124 bytes) glitch::collada::ISceneNodeAnimator::~ISceneNodeAnimator()
// void glitch::collada::ISceneNodeAnimator::~ISceneNodeAnimator( glitch::collada::ISceneNodeAnimator *this, int *a2);
// [0xd61d30] (15 bytes) `virtual thunk to'glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender()
// void `virtual thunk to'glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender( glitch::collada::CSceneNodeAnimatorBlender *this);
// [0xd61d40] (7 bytes) `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender()
// void `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender( glitch::collada::CSceneNodeAnimatorBlender *this);
// [0xd61d50] (177 bytes) glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender()
// void glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender( glitch::collada::CSceneNodeAnimatorBlender *this);
// [0xd61e10] (15 bytes) `virtual thunk to'glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender()
// void `virtual thunk to'glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender( glitch::collada::CSceneNodeAnimatorBlender *this);
// [0xd61e20] (7 bytes) `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender()
// void `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender( glitch::collada::CSceneNodeAnimatorBlender *this);
// [0xd61e30] (56 bytes) glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender()
// void glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender( glitch::collada::CSceneNodeAnimatorBlender *this);
// [0xd61e70] (171 bytes) glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender()
// void glitch::collada::CSceneNodeAnimatorBlender::~CSceneNodeAnimatorBlender( glitch::collada::CSceneNodeAnimatorBlender *this, int *a2);
// [0xd61f20] (15 bytes) `virtual thunk to'glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet()
// void `virtual thunk to'glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet( glitch::collada::CSceneNodeAnimatorSet *this);
// [0xd61f30] (7 bytes) `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet()
// void `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet( glitch::collada::CSceneNodeAnimatorSet *this);
// [0xd61f40] (154 bytes) glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet()
// void glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet( glitch::collada::CSceneNodeAnimatorSet *this);
// [0xd61fe0] (15 bytes) `virtual thunk to'glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet()
// void `virtual thunk to'glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet( glitch::collada::CSceneNodeAnimatorSet *this);
// [0xd61ff0] (7 bytes) `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet()
// void `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet( glitch::collada::CSceneNodeAnimatorSet *this);
// [0xd62000] (56 bytes) glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet()
// void glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet( glitch::collada::CSceneNodeAnimatorSet *this);
// [0xd62040] (159 bytes) glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet()
// void glitch::collada::CSceneNodeAnimatorSet::~CSceneNodeAnimatorSet( glitch::collada::CSceneNodeAnimatorSet *this, int *a2);
// [0xd620e0] (15 bytes) `virtual thunk to'glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot()
// void `virtual thunk to'glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot( glitch::collada::CSceneNodeAnimatorSnapShot *this);
// [0xd620f0] (7 bytes) `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot()
// void `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot( glitch::collada::CSceneNodeAnimatorSnapShot *this);
// [0xd62100] (146 bytes) glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot()
// void glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot( glitch::collada::CSceneNodeAnimatorSnapShot *this);
// [0xd621a0] (15 bytes) `virtual thunk to'glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot()
// void `virtual thunk to'glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot( glitch::collada::CSceneNodeAnimatorSnapShot *this);
// [0xd621b0] (7 bytes) `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot()
// void `non-virtual thunk to'glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot( glitch::collada::CSceneNodeAnimatorSnapShot *this);
// [0xd621c0] (56 bytes) glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot()
// void glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot( glitch::collada::CSceneNodeAnimatorSnapShot *this);
// [0xd62200] (151 bytes) glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot()
// void glitch::collada::CSceneNodeAnimatorSnapShot::~CSceneNodeAnimatorSnapShot( glitch::collada::CSceneNodeAnimatorSnapShot *this, int *a2);
// [0xd622a0] (20 bytes) glitch::collada::SAnimationClipID::SAnimationClipID(void)
// struct glitch::collada::SAnimationClipID *glitch::collada::SAnimationClipID::SAnimationClipID( glitch::collada::SAnimationClipID *this);
// [0xd622c0] (41 bytes) glitch::collada::SAnimationClipID::SAnimationClipID(glitch::collada::SAnimationClipID const&)
// glitch::collada::SAnimationClipID *glitch::collada::SAnimationClipID::SAnimationClipID( glitch::collada::SAnimationClipID *this, const glitch::collada::SAnimationClipID *a2);
// [0xd625b0] (18 bytes) glitch::collada::SAnimationClipID::SAnimationClipID(int,int)
// glitch::collada::SAnimationClipID *glitch::collada::SAnimationClipID::SAnimationClipID( glitch::collada::SAnimationClipID *this, int a2, int a3);
// [0xd625d0] (24 bytes) glitch::collada::SAnimationClipID::operator==(glitch::collada::SAnimationClipID const&)const
// bool glitch::collada::SAnimationClipID::operator==( glitch::collada::SAnimationClipID *this, const glitch::collada::SAnimationClipID *a2);
// [0xd625f0] (22 bytes) glitch::collada::IAnimationDictionary::IAnimationDictionary(void)
// glitch::collada::IAnimationDictionary *glitch::collada::IAnimationDictionary::IAnimationDictionary( glitch::collada::IAnimationDictionary *this, int *a2);
// [0xd62610] (42 bytes) glitch::collada::IAnimationDictionary::IAnimationDictionary(void)
// glitch::collada::IAnimationDictionary *glitch::collada::IAnimationDictionary::IAnimationDictionary( glitch::collada::IAnimationDictionary *this);
// [0xd62640] (22 bytes) glitch::collada::IAnimationDictionary::~IAnimationDictionary()
// void glitch::collada::IAnimationDictionary::~IAnimationDictionary( glitch::collada::IAnimationDictionary *this, int *a2);
// [0xd62660] (15 bytes) `virtual thunk to'glitch::collada::CAnimationDictionary::~CAnimationDictionary()
// void `virtual thunk to'glitch::collada::CAnimationDictionary::~CAnimationDictionary( glitch::collada::CAnimationDictionary *this);
// [0xd62670] (119 bytes) glitch::collada::CAnimationDictionary::~CAnimationDictionary()
// void glitch::collada::CAnimationDictionary::~CAnimationDictionary(glitch::collada::CAnimationDictionary *this);
// [0xd626f0] (15 bytes) `virtual thunk to'glitch::collada::CAnimationDictionary::~CAnimationDictionary()
// void `virtual thunk to'glitch::collada::CAnimationDictionary::~CAnimationDictionary( glitch::collada::CAnimationDictionary *this);
// [0xd62700] (56 bytes) glitch::collada::CAnimationDictionary::~CAnimationDictionary()
// void glitch::collada::CAnimationDictionary::~CAnimationDictionary(glitch::collada::CAnimationDictionary *this);
// [0xd62740] (121 bytes) glitch::collada::CAnimationDictionary::~CAnimationDictionary()
// void glitch::collada::CAnimationDictionary::~CAnimationDictionary( glitch::collada::CAnimationDictionary *this, int *a2);
// [0xd627c0] (210 bytes) glitch::collada::CAnimationDictionary::getClip(char const*)const
// const char **glitch::collada::CAnimationDictionary::getClip( glitch::collada::CAnimationDictionary *this, char *s2);
// [0xd628a0] (88 bytes) glitch::collada::CAnimationDictionary::getClipIndex(char const*)const
// int glitch::collada::CAnimationDictionary::getClipIndex(glitch::collada::CAnimationDictionary *this, char *a2);
// [0xd62900] (212 bytes) glitch::collada::CAnimationDictionary::resolveClipID(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&,int,char const*)
// int glitch::collada::CAnimationDictionary::resolveClipID(int a1, int a2, char *s1);
// [0xd629e0] (125 bytes) glitch::collada::CAnimationPackage::getTrackWeights(char const*)const
// int glitch::collada::CAnimationPackage::getTrackWeights(glitch::collada::CAnimationPackage *this, char *s2);
// [0xd62a60] (76 bytes) glitch::collada::CAnimationPackage::getBaseAnimationDictionary(void)const
// glitch::collada::CAnimationPackage *glitch::collada::CAnimationPackage::getBaseAnimationDictionary( glitch::collada::CAnimationPackage *this, int a2);
// [0xd62ab0] (133 bytes) glitch::collada::CAnimationPackage::getAnimationDictionary(char const*)const
// glitch::collada::CAnimationPackage *glitch::collada::CAnimationPackage::getAnimationDictionary( glitch::collada::CAnimationPackage *this, const char *a2, char *s2);
// [0xd62b40] (34 bytes) glitch::collada::CAnimationPackage::getAnimationClipID(char const*)const
// int glitch::collada::CAnimationPackage::getAnimationClipID( glitch::collada::CAnimationPackage *this, const char *a2);
// [0xd62b70] (34 bytes) glitch::collada::CAnimationPackage::getAnimationClipID(int)const
// int glitch::collada::CAnimationPackage::getAnimationClipID(glitch::collada::CAnimationPackage *this, int a2);
// [0xd62ba0] (1100 bytes) glitch::collada::CAnimationPackage::createParametricController(glitch::collada::anim_pack::SParametricController const&)
// volatile int32_t **glitch::collada::CAnimationPackage::createParametricController( volatile int32_t **a1, int a2, int a3);
// [0xd62ff0] (12 bytes) glitch::collada::CAnimationPackage::getColladaAnimationPackage(void)const
// int glitch::collada::CAnimationPackage::getColladaAnimationPackage(glitch::collada::CAnimationPackage *this);
// [0xd63000] (1091 bytes) glitch::collada::CAnimationDictionary::resolveAnimationID(glitch::collada::CAnimationPackage const*,char const*)
// int glitch::collada::CAnimationDictionary::resolveAnimationID( glitch::collada::CAnimationDictionary *this, const glitch::collada::CAnimationPackage *a2);
// [0xd63450] (1138 bytes) glitch::collada::CAnimationDictionary::CAnimationDictionary(glitch::collada::CAnimationPackage const*,glitch::collada::anim_pack::SAnimationDictionary const&,glitch::collada::CAnimationDictionary const*)
// unsigned int glitch::collada::CAnimationDictionary::CAnimationDictionary( glitch::collada::IAnimationDictionary *a1, glitch::collada::CAnimationDictionary *a2, uint32_t *a3, glitch::collada::IAnimationDictionary *a4);
// [0xd638d0] (1074 bytes) glitch::collada::CAnimationPackage::createAnimationSet(void)
// unsigned int glitch::collada::CAnimationPackage::createAnimationSet(glitch::collada::CAnimationPackage *this);
// [0xd63d10] (1007 bytes) glitch::collada::CAnimationPackage::CAnimationPackage(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SAnimationPackage const&)
// volatile int32_t *glitch::collada::CAnimationPackage::CAnimationPackage( glitch::collada::CAnimationPackage *a1, uint32_t *a2, uint32_t *a3);
// [0xd64100] (1114 bytes) glitch::collada::CAnimationDictionary::CAnimationDictionary(glitch::collada::CAnimationPackage const*,glitch::collada::anim_pack::SAnimationDictionary const&,glitch::collada::CAnimationDictionary const*)
// unsigned int glitch::collada::CAnimationDictionary::CAnimationDictionary( glitch::collada::IAnimationDictionary *a1, int *a2, glitch::collada::CAnimationDictionary *a3, uint32_t *a4, glitch::collada::IAnimationDictionary *a5);
// [0xd64560] (22 bytes) glitch::collada::getStringsInternal(glitch::collada::E_ANIMATION_INPUT_PARAMETER_TYPE *)
// char **glitch::collada::getStringsInternal();
// [0xd64580] (22 bytes) glitch::collada::getStringsInternal(glitch::collada::E_PARAMETRIC_CONTROLLER_TYPE *)
// char **glitch::collada::getStringsInternal();
// [0xd645a0] (22 bytes) glitch::collada::getStringsInternal(glitch::collada::E_ANIMATION_GRAPH_NODE_TYPE *)
// char **glitch::collada::getStringsInternal();
// [0xd645c0] (87 bytes) glitch::collada::CAnimationGraph::getAnimatorNode(int)const
// glitch::collada::CAnimationGraph *glitch::collada::CAnimationGraph::getAnimatorNode( glitch::collada::CAnimationGraph *this, int a2, int a3);
// [0xd64620] (13 bytes) glitch::collada::CAnimationGraph::getRootAnimator(void)const
// int glitch::collada::CAnimationGraph::getRootAnimator(glitch::collada::CAnimationGraph *this);
// [0xd64630] (81 bytes) glitch::collada::CAnimationGraph::getBlenderController(int)const
// glitch::collada::CAnimationGraph *glitch::collada::CAnimationGraph::getBlenderController( glitch::collada::CAnimationGraph *this, int a2, int a3);
// [0xd64690] (156 bytes) glitch::collada::CAnimationGraph::getBlenderWeight(int,int)const
// long double glitch::collada::CAnimationGraph::getBlenderWeight( glitch::collada::CAnimationGraph *this, int a2, int a3);
// [0xd64730] (145 bytes) glitch::collada::CAnimationGraph::getBlenderWidth(int)const
// int glitch::collada::CAnimationGraph::getBlenderWidth(glitch::collada::CAnimationGraph *this, int a2);
// [0xd647d0] (20 bytes) glitch::collada::CAnimationGraph::getGraphNodeCount(void)const
// int glitch::collada::CAnimationGraph::getGraphNodeCount(glitch::collada::CAnimationGraph *this);
// [0xd647f0] (22 bytes) glitch::collada::CAnimationGraph::getGraphNodeName(int)const
// int glitch::collada::CAnimationGraph::getGraphNodeName(glitch::collada::CAnimationGraph *this, int a2);
// [0xd64810] (23 bytes) glitch::collada::CAnimationGraph::getGraphNodeType(int)const
// int glitch::collada::CAnimationGraph::getGraphNodeType(glitch::collada::CAnimationGraph *this, int a2);
// [0xd64830] (83 bytes) glitch::collada::CAnimationGraph::getIKSolverNode(int)const
// glitch::collada::CAnimationGraph *glitch::collada::CAnimationGraph::getIKSolverNode( glitch::collada::CAnimationGraph *this, int a2, int a3);
// [0xd64890] (68 bytes) glitch::collada::CAnimationGraph::getInputs(void)const
// glitch::collada::CAnimationGraph *glitch::collada::CAnimationGraph::getInputs( glitch::collada::CAnimationGraph *this, int a2);
// [0xd648e0] (74 bytes) glitch::collada::CAnimationGraph::getAnimationDictionary(void)const
// glitch::collada::CAnimationGraph *glitch::collada::CAnimationGraph::getAnimationDictionary( glitch::collada::CAnimationGraph *this, int a2);
// [0xd64930] (124 bytes) glitch::collada::CAnimationGraph::setAnimationClip(glitch::collada::CSceneNodeAnimatorSynchronizedBlender *,int,int)
// int glitch::collada::CAnimationGraph::setAnimationClip( glitch::collada::CAnimationGraph *this, glitch::collada::CSceneNodeAnimatorSynchronizedBlender *a2, int a3, int a4);
// [0xd649b0] (147 bytes) glitch::collada::CAnimationGraph::setAnimationClip(glitch::collada::CSceneNodeAnimatorSet *,int)
// int glitch::collada::CAnimationGraph::setAnimationClip( glitch::collada::CAnimationGraph *this, glitch::collada::CSceneNodeAnimatorSet *a2, int a3);
// [0xd64a50] (26 bytes) glitch::collada::CAnimationGraph::isBlenderControlled(int)const
// bool glitch::collada::CAnimationGraph::isBlenderControlled(glitch::collada::CAnimationGraph *this, int a2);
// [0xd64a70] (14 bytes) glitch::collada::CAnimationGraph::isBlenderNodeType(glitch::collada::E_ANIMATION_GRAPH_NODE_TYPE)const
// bool glitch::collada::CAnimationGraph::isBlenderNodeType(int a1, int a2);
// [0xd64a80] (52 bytes) glitch::collada::CAnimationGraph::isAnimatorNodeType(glitch::collada::E_ANIMATION_GRAPH_NODE_TYPE)const
// bool glitch::collada::CAnimationGraph::isAnimatorNodeType(int a1, unsigned int a2);
// [0xd64ac0] (56 bytes) glitch::collada::CAnimationGraph::isAnimatorNodeType(int)const
// bool glitch::collada::CAnimationGraph::isAnimatorNodeType(glitch::collada::CAnimationGraph *this, int a2);
// [0xd64b00] (56 bytes) glitch::collada::CAnimationGraph::isBlenderNodeType(int)const
// bool glitch::collada::CAnimationGraph::isBlenderNodeType(glitch::collada::CAnimationGraph *this, int a2);
// [0xd64b40] (13 bytes) glitch::collada::CAnimationGraph::isIKSolverNodeType(glitch::collada::E_ANIMATION_GRAPH_NODE_TYPE)const
// bool glitch::collada::CAnimationGraph::isIKSolverNodeType(int a1, int a2);
// [0xd64b50] (56 bytes) glitch::collada::CAnimationGraph::isIKSolverNodeType(int)const
// bool glitch::collada::CAnimationGraph::isIKSolverNodeType(glitch::collada::CAnimationGraph *this, int a2);
// [0xd64b90] (161 bytes) glitch::collada::CAnimationGraph::setBlenderParameter(int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float>*)
// int glitch::collada::CAnimationGraph::setBlenderParameter(int a1, int a2, int a3, int a4);
// [0xd64c40] (236 bytes) glitch::collada::CAnimationGraph::setBlenderWeight(int,int,float)
// int glitch::collada::CAnimationGraph::setBlenderWeight( glitch::collada::CAnimationGraph *this, int a2, int a3, float a4);
// [0xd64d30] (68 bytes) glitch::collada::CAnimationGraph::setIKSolverTarget(int,boost::intrusive_ptr<glitch::scene::IIKTarget> const&)
// int glitch::collada::CAnimationGraph::setIKSolverTarget(int a1, int a2, int a3);
// [0xd64d80] (18 bytes) glitch::collada::CAnimationGraph::getNode(int)
// int glitch::collada::CAnimationGraph::getNode(glitch::collada::CAnimationGraph *this, int a2);
// [0xd64da0] (533 bytes) glitch::collada::CAnimationGraph::getNode(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)const
// int glitch::collada::CAnimationGraph::getNode(glitch::collada::CAnimationGraph *this, const void **a2);
// [0xd64fc0] (42 bytes) glitch::collada::CAnimationGraph::getGraphNodeId(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)const
// int glitch::collada::CAnimationGraph::getGraphNodeId(glitch::collada::CAnimationGraph *this, const void **a2);
// [0xd64ff0] (98 bytes) glitch::collada::CAnimationGraph::setAnimationDictionary(boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// uint32_t *glitch::collada::CAnimationGraph::setAnimationDictionary(int a1, uint32_t **a2);
// [0xd65060] (382 bytes) glitch::collada::CAnimationIOParam::CAnimationIOParam(glitch::collada::anim_pack::SAnimationIOParamHeader const&)
// int glitch::collada::CAnimationIOParam::CAnimationIOParam(uint32_t *a1, int a2);
// [0xd651e0] (12 bytes) glitch::collada::CAnimationIOParam::getName(void)const
// char *glitch::collada::CAnimationIOParam::getName(glitch::collada::CAnimationIOParam *this);
// [0xd651f0] (12 bytes) glitch::collada::CAnimationIOParam::getType(void)const
// int glitch::collada::CAnimationIOParam::getType(glitch::collada::CAnimationIOParam *this);
// [0xd65200] (13 bytes) glitch::collada::CAnimationIOParam::isDirty(void)const
// int glitch::collada::CAnimationIOParam::isDirty(glitch::collada::CAnimationIOParam *this);
// [0xd65210] (14 bytes) glitch::collada::CAnimationIOParam::resetDirtyFlag(bool)
// glitch::collada::CAnimationIOParam *glitch::collada::CAnimationIOParam::resetDirtyFlag( glitch::collada::CAnimationIOParam *this, bool a2);
// [0xd65220] (83 bytes) glitch::collada::CAnimationIOParam::getHeaderDefaultValuePtr(glitch::collada::anim_pack::SAnimationIOParamHeader const&)const
// int glitch::collada::CAnimationIOParam::getHeaderDefaultValuePtr(int a1, int a2);
// [0xd65280] (398 bytes) glitch::collada::CAnimationIOStringParam::CAnimationIOStringParam(glitch::collada::anim_pack::SAnimationIOParamHeader const&)
// uint32_t *glitch::collada::CAnimationIOStringParam::CAnimationIOStringParam(uint32_t *a1, int a2);
// [0xd65410] (323 bytes) glitch::collada::CAnimationIOStringParam::getValue(void)const
// glitch::collada::CAnimationIOStringParam *glitch::collada::CAnimationIOStringParam::getValue( glitch::collada::CAnimationIOStringParam *this, int a2);
// [0xd65560] (160 bytes) glitch::collada::CAnimationIOStringParam::setValue(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int *glitch::collada::CAnimationIOStringParam::setValue( glitch::collada::CAnimationIOStringParam *this, int **a2);
// [0xd65600] (103 bytes) glitch::collada::CAnimationIOClipParam::CAnimationIOClipParam(glitch::collada::CAnimationPackage const&,glitch::collada::anim_pack::SAnimationIOParamHeader const&)
// uint32_t *glitch::collada::CAnimationIOClipParam::CAnimationIOClipParam(uint32_t *a1, int a2, int a3);
// [0xd65670] (12 bytes) glitch::collada::CAnimationIOClipParam::getValue(void)const
// int glitch::collada::CAnimationIOClipParam::getValue(glitch::collada::CAnimationIOClipParam *this);
// [0xd65680] (16 bytes) glitch::collada::CAnimationIOClipParam::setValue(int)
// glitch::collada::CAnimationIOClipParam *glitch::collada::CAnimationIOClipParam::setValue( glitch::collada::CAnimationIOClipParam *this, int a2);
// [0xd65690] (625 bytes) glitch::collada::CAnimationIO::createParameter(glitch::collada::CAnimationPackage const&,glitch::collada::anim_pack::SAnimationIOParamHeader const&)
// int *glitch::collada::CAnimationIO::createParameter(int *a1, int a2, int a3, int a4);
// [0xd65910] (740 bytes) glitch::collada::CAnimationIO::CAnimationIO(glitch::collada::CAnimationPackage const&,glitch::collada::anim_pack::SAnimationIOHeader const&)
// volatile int32_t *glitch::collada::CAnimationIO::CAnimationIO(uint32_t *a1, int a2, int *a3);
// [0xd65c00] (15 bytes) glitch::collada::CAnimationIO::getParameter(int)const
// int glitch::collada::CAnimationIO::getParameter(glitch::collada::CAnimationIO *this, int a2);
// [0xd65c10] (78 bytes) glitch::collada::CAnimationIO::resetDirtyFlags(bool)
// glitch::collada::CAnimationIOParam *glitch::collada::CAnimationIO::resetDirtyFlags( glitch::collada::CAnimationIOParam ***this, bool a2);
// [0xd65c60] (48 bytes) glitch::collada::CAnimationIO::apply(void)
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::apply(int **this);
// [0xd65c90] (32 bytes) glitch::collada::CParametricControllerBlender::SControllerSlot::SControllerSlot(void)
// struct glitch::collada::CParametricControllerBlender::SControllerSlot *glitch::collada::CParametricControllerBlender::SControllerSlot::SControllerSlot( glitch::collada::CParametricControllerBlender::SControllerSlot *this);
// [0xd65cb0] (20 bytes) glitch::collada::CParametricControllerBlender::SDelegator::SDelegator(short,short)
// struct glitch::collada::CParametricControllerBlender::SDelegator *glitch::collada::CParametricControllerBlender::SDelegator::SDelegator( glitch::collada::CParametricControllerBlender::SDelegator *this, int16_t a2, int16_t a3);
// [0xd65cd0] (84 bytes) glitch::collada::CParametricControllerBlender::SDelegateControllerSlot::SDelegateControllerSlot(boost::intrusive_ptr<glitch::collada::IParametricController> const&)
// volatile int32_t *glitch::collada::CParametricControllerBlender::SDelegateControllerSlot::SDelegateControllerSlot( volatile int32_t **a1, volatile int32_t **a2);
// [0xd65d30] (38 bytes) glitch::collada::CParametricControllerBlender::setInput(int,glitch::core::vector3d<float> const&)
// uint32_t *glitch::collada::CParametricControllerBlender::setInput(int a1, int a2, uint32_t *a3);
// [0xd65d60] (49 bytes) glitch::collada::CParametricControllerBlender::setInputs(glitch::core::vector3d<float> const&)
// uint32_t *glitch::collada::CParametricControllerBlender::setInputs(int a1, uint32_t *a2);
// [0xd65da0] (20 bytes) glitch::collada::CParametricControllerBlender::getControllerSlotCount(void)const
// int glitch::collada::CParametricControllerBlender::getControllerSlotCount( glitch::collada::CParametricControllerBlender *this);
// [0xd65dc0] (21 bytes) glitch::collada::CParametricControllerBlender::getController(int)const
// int glitch::collada::CParametricControllerBlender::getController( glitch::collada::CParametricControllerBlender *this, int a2);
// [0xd65de0] (21 bytes) glitch::collada::CParametricControllerBlender::getWeight(int)const
// long double glitch::collada::CParametricControllerBlender::getWeight( glitch::collada::CParametricControllerBlender *this, int a2);
// [0xd65e00] (18 bytes) glitch::collada::CParametricControllerBlender::getInput(int)const
// int glitch::collada::CParametricControllerBlender::getInput( glitch::collada::CParametricControllerBlender *this, int a2);
// [0xd65e20] (86 bytes) glitch::collada::CParametricControllerBlender::updateTotalWidth(void)
// int glitch::collada::CParametricControllerBlender::updateTotalWidth( glitch::collada::CParametricControllerBlender *this);
// [0xd65e80] (81 bytes) glitch::collada::IParametricController::IParametricController(glitch::collada::E_PARAMETRIC_CONTROLLER_TYPE,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// volatile int32_t *glitch::collada::IParametricController::IParametricController( volatile int32_t *a1, int a2, uint32_t **a3);
// [0xd65ee0] (193 bytes) glitch::collada::CParametricControllerBlender::CParametricControllerBlender(boost::intrusive_ptr<glitch::collada::CAnimationPackage const> const&)
// volatile int32_t *glitch::collada::CParametricControllerBlender::CParametricControllerBlender( int a1, volatile int32_t **a2);
// [0xd65fb0] (103 bytes) glitch::collada::IParametricController::getAnimationWeights(glitch::collada::SClipWeight const*,int,glitch::collada::SAnimationWeight *)const
// int glitch::collada::IParametricController::getAnimationWeights(int a1, uint32_t *a2, int a3, uint32_t *a4);
// [0xd66020] (104 bytes) glitch::collada::IParametricController::getAnimationWeights(glitch::core::vector3d<float> const&,glitch::collada::SAnimationWeight *,glitch::core::vector3d<float>*)
// int glitch::collada::IParametricController::getAnimationWeights(int a1, int a2, uint32_t *a3, int a4);
// [0xd66090] (44 bytes) glitch::collada::IParametricController::setAnimatorMode(boost::intrusive_ptr<glitch::collada::CSceneNodeAnimatorSynchronizedBlender> const&,glitch::collada::E_ANIMATOR_MODE)
// int glitch::collada::IParametricController::setAnimatorMode(int a1, uint32_t **a2, int a3);
// [0xd660c0] (98 bytes) glitch::collada::IParametricController::setAnimationDictionary(boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// uint32_t *glitch::collada::IParametricController::setAnimationDictionary(int a1, uint32_t **a2);
// [0xd66130] (166 bytes) glitch::collada::CParametricControllerBase::CParametricControllerBase(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// int glitch::collada::CParametricControllerBase::CParametricControllerBase( int a1, int *a2, int *a3, uint32_t **a4);
// [0xd661e0] (635 bytes) glitch::collada::CAnimationTrackEx::getValue(glitch::collada::SAnimationAccessor const&,float,void *,bool)const
// int glitch::collada::CAnimationTrackEx::getValue( glitch::collada::CAnimationTrackEx *this, const glitch::collada::SAnimationAccessor *a2, float a3, void *a4, bool a5);
// [0xd66460] (667 bytes) glitch::collada::CAnimationTrackEx::applyValue(glitch::collada::SAnimationAccessor const&,float,void *,glitch::collada::animation_track::CApplicatorInfo *,bool)const
// int glitch::collada::CAnimationTrackEx::applyValue( glitch::collada::CAnimationTrackEx *this, const glitch::collada::SAnimationAccessor *a2, float a3, void *a4, glitch::collada::animation_track::CApplicatorInfo *a5, bool a6);
// [0xd66700] (207 bytes) glitch::collada::CSkinnedMeshSceneNode::getTransformedBoundingBox(void)const
// char *glitch::collada::CSkinnedMeshSceneNode::getTransformedBoundingBox( glitch::collada::CSkinnedMeshSceneNode *this);
// [0xd667d0] (5089 bytes) glitch::collada::CCoronasSceneNode::renderInternal(void *)
// int glitch::collada::CCoronasSceneNode::renderInternal( glitch::collada::CCoronasSceneNode *this, void *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63, glitch::video::CVertexStreams *a64);
// [0xd692d0] (70 bytes) glitch::collada::CBillboardSceneNode::updateAbsolutePositionInternal(void)
// int glitch::collada::CBillboardSceneNode::updateAbsolutePositionInternal( glitch::collada::CBillboardSceneNode *this, int a2, glitch::collada::CBillboardSceneNode *a3, __int128 a4, __int128 a5, __int128 a6, __int128 a7, __int128 a8, __int128 a9, __int128 a10, __int128 a11, __int128 a12, __int128 a13, __int128 a14, __int128 a15, __int128 a16, __int128 a17, __int128 a18);
// [0xd69320] (527 bytes) glitch::collada::CLODMeshSceneNode::CLODMeshSceneNode(boost::intrusive_ptr<glitch::scene::ILODSelector> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// void glitch::collada::CLODMeshSceneNode::CLODMeshSceneNode( glitch::IObject *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
// [0xd69530] (248 bytes) glitch::collada::CLODMeshSceneNode::clone(void)const
// glitch::collada::CLODMeshSceneNode *glitch::collada::CLODMeshSceneNode::clone( glitch::collada::CLODMeshSceneNode *this, int *a2);
// [0xd69630] (479 bytes) glitch::collada::CLODMeshSceneNode::CLODMeshSceneNode(boost::intrusive_ptr<glitch::scene::ILODSelector> const&,glitch::collada::SNode *,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// void glitch::collada::CLODMeshSceneNode::CLODMeshSceneNode( glitch::IObject *a1, int *a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
// [0xd69810] (3028 bytes) glitch::collada::CParticleSystemEmitterSceneNode::init(bool,glitch::collada::SProcessBufferConfig const&)
// int glitch::collada::CParticleSystemEmitterSceneNode::init(uint32_t *a1, char a2, uint32_t *a3);
// [0xd6a3f0] (141 bytes) glitch::collada::CParticleSystemEmitterSceneNode::restart(void)
// int glitch::collada::CParticleSystemEmitterSceneNode::restart( glitch::collada::CParticleSystemEmitterSceneNode *this);
// [0xd6a480] (3107 bytes) glitch::collada::CRootSceneNode::resolveExternals(glitch::video::IVideoDriver *,unsigned int)
// char *glitch::collada::CRootSceneNode::resolveExternals( glitch::collada::CColladaFactory **this, glitch::video::IVideoDriver *a2, unsigned int a3);
// [0xd6b0b0] (131 bytes) glitch::collada::CAnimationStreamingManager::release(glitch::collada::CColladaDatabase *)
// uint32_t *glitch::collada::CAnimationStreamingManager::release( glitch::collada::CAnimationStreamingManager *this, glitch::collada::CColladaDatabase *a2);
// [0xd6b140] (10430 bytes) glitch::collada::CAnimationTreeCookie::bind(boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&,glitch::collada::ISceneNodeAnimator *)
// int glitch::collada::CAnimationTreeCookie::bind(int a1, glitch::collada::CRootSceneNode **a2, uint32_t *a3);
// [0xd6da00] (104 bytes) glitch::collada::CDynamicAnimationSet::remAnimationLibrary(unsigned int)
// unsigned int glitch::collada::CDynamicAnimationSet::remAnimationLibrary( glitch::collada::CDynamicAnimationSet *this, unsigned int a2);
// [0xd6da70] (68 bytes) glitch::collada::CDynamicAnimationSet::remAnimationLibrary(glitch::collada::CColladaDatabase &)
// unsigned int glitch::collada::CDynamicAnimationSet::remAnimationLibrary( glitch::collada::CDynamicAnimationSet *this, glitch::collada::CColladaDatabase *a2);
// [0xd6dac0] (107 bytes) glitch::collada::CAnimationPackage::getParametricController(char const*)const
// char *glitch::collada::CAnimationPackage::getParametricController( glitch::collada::CAnimationPackage *this, char *s2);
// [0xd6db30] (117 bytes) glitch::collada::CAnimationGraph::setSyncBlenderNodeController(int,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// volatile int32_t *glitch::collada::CAnimationGraph::setSyncBlenderNodeController( glitch::collada::CAnimationPackage **this, int a2, char **a3);
// [0xd6dbb0] (77 bytes) glitch::collada::detail::CHardwareMatrixSkinTechnique::~CHardwareMatrixSkinTechnique()
// void glitch::collada::detail::CHardwareMatrixSkinTechnique::~CHardwareMatrixSkinTechnique( glitch::collada::detail::CHardwareMatrixSkinTechnique *this);
// [0xd6dc00] (56 bytes) glitch::collada::detail::CHardwareMatrixSkinTechnique::~CHardwareMatrixSkinTechnique()
// void glitch::collada::detail::CHardwareMatrixSkinTechnique::~CHardwareMatrixSkinTechnique( glitch::collada::detail::CHardwareMatrixSkinTechnique *this);
// [0xd6dc40] (77 bytes) glitch::collada::detail::CSoftwareSkinTechnique::~CSoftwareSkinTechnique()
// void glitch::collada::detail::CSoftwareSkinTechnique::~CSoftwareSkinTechnique( glitch::collada::detail::CSoftwareSkinTechnique *this);
// [0xd6dc90] (56 bytes) glitch::collada::detail::CSoftwareSkinTechnique::~CSoftwareSkinTechnique()
// void glitch::collada::detail::CSoftwareSkinTechnique::~CSoftwareSkinTechnique( glitch::collada::detail::CSoftwareSkinTechnique *this);
// [0xd6dcd0] (15 bytes) `virtual thunk to'glitch::collada::CRootSceneNode::~CRootSceneNode()
// void `virtual thunk to'glitch::collada::CRootSceneNode::~CRootSceneNode(glitch::collada::CRootSceneNode *this);
// [0xd6dce0] (15 bytes) `virtual thunk to'glitch::collada::CRootSceneNode::~CRootSceneNode()
// void `virtual thunk to'glitch::collada::CRootSceneNode::~CRootSceneNode(glitch::collada::CRootSceneNode *this);
// [0xd6dcf0] (910 bytes) glitch::collada::CRootSceneNode::~CRootSceneNode()
// void glitch::collada::CRootSceneNode::~CRootSceneNode(glitch::collada::CRootSceneNode ***this);
// [0xd6e080] (15 bytes) `virtual thunk to'glitch::collada::CRootSceneNode::~CRootSceneNode()
// void `virtual thunk to'glitch::collada::CRootSceneNode::~CRootSceneNode(glitch::collada::CRootSceneNode *this);
// [0xd6e090] (15 bytes) `virtual thunk to'glitch::collada::CRootSceneNode::~CRootSceneNode()
// void `virtual thunk to'glitch::collada::CRootSceneNode::~CRootSceneNode(glitch::collada::CRootSceneNode *this);
// [0xd6e0a0] (56 bytes) glitch::collada::CRootSceneNode::~CRootSceneNode()
// void glitch::collada::CRootSceneNode::~CRootSceneNode(glitch::collada::CRootSceneNode ***this);
// [0xd6e0e0] (860 bytes) glitch::collada::CRootSceneNode::~CRootSceneNode()
// void glitch::collada::CRootSceneNode::~CRootSceneNode( glitch::collada::CRootSceneNode ***this, glitch::collada::CRootSceneNode ***a2);
// [0xd6e440] (1043 bytes) glitch::collada::CAnimationSet::addAnimation(glitch::collada::SAnimation const*)
// int glitch::collada::CAnimationSet::addAnimation(uint32_t *a1, int a2);
// [0xd6e860] (280 bytes) glitch::collada::CAnimationSet::addAnimationLibrary(glitch::collada::CColladaDatabase const&)
// int glitch::collada::CAnimationSet::addAnimationLibrary( glitch::collada::CAnimationSet *this, const glitch::collada::CColladaDatabase *a2);
// [0xd6e980] (63 bytes) glitch::collada::CDynamicAnimationSet::addAnimationLibrary(glitch::collada::CColladaDatabase const&)
// int glitch::collada::CDynamicAnimationSet::addAnimationLibrary( glitch::collada::CDynamicAnimationSet *this, const glitch::collada::CColladaDatabase *a2);
// [0xd6e9c0] (741 bytes) glitch::collada::CDynamicAnimationSet::addAnimationLibraryBindings(glitch::collada::CColladaDatabase const&)
// uint32_t *glitch::collada::CDynamicAnimationSet::addAnimationLibraryBindings( char **this, const glitch::collada::CColladaDatabase *a2);
// [0xd6ecb0] (1147 bytes) glitch::collada::CAnimationGraph::connectNodes(glitch::collada::anim_pack::SAnimationGraph const&)
// void glitch::collada::CAnimationGraph::connectNodes(glitch::collada::CAnimationGraph *a1, int a2);
// [0xd6f130] (249 bytes) glitch::collada::CAnimationIO::findClipParameter(char const*)
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findClipParameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd6f230] (249 bytes) glitch::collada::CAnimationIO::findVector3Parameter(char const*)
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findVector3Parameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd6f330] (249 bytes) glitch::collada::CAnimationIO::findVector2Parameter(char const*)
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findVector2Parameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd6f430] (240 bytes) glitch::collada::CAnimationIO::setStringParameterValue(char const*,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int *glitch::collada::CAnimationIO::setStringParameterValue( glitch::collada::CAnimationIOParam ***this, const char *a2, int **a3);
// [0xd6f520] (249 bytes) glitch::collada::CAnimationIO::findFloatParameter(char const*)
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findFloatParameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd6f620] (256 bytes) glitch::collada::CAnimationIO::findIntParameter(char const*)
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findIntParameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd6f720] (222 bytes) glitch::collada::CAnimationIO::setIntParameterValue(char const*,int)
// glitch::collada::CAnimationIOParam *glitch::collada::CAnimationIO::setIntParameterValue( glitch::collada::CAnimationIOParam ***this, const char *a2, int a3);
// [0xd6f800] (235 bytes) glitch::collada::CAnimationIO::setFloatParameterValue(char const*,float)
// glitch::collada::CAnimationIOParam *glitch::collada::CAnimationIO::setFloatParameterValue( glitch::collada::CAnimationIOParam ***this, const char *a2, float a3);
// [0xd6f8f0] (249 bytes) glitch::collada::CAnimationIO::findStringParameter(char const*)
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findStringParameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd6f9f0] (5844 bytes) glitch::collada::CAnimationGraph::connectInputs(glitch::collada::anim_pack::SAnimationGraph const&)
// glitch::collada::CAnimationIOParam *glitch::collada::CAnimationGraph::connectInputs( glitch::collada::CAnimationIOParam ****a1, int a2);
// [0xd710d0] (247 bytes) glitch::collada::CAnimationIO::setVector2ParameterValue(char const*,glitch::core::vector2d<float> const&)
// glitch::collada::CAnimationIOParam *glitch::collada::CAnimationIO::setVector2ParameterValue( int a1, char *a2, uint32_t *a3);
// [0xd711d0] (253 bytes) glitch::collada::CAnimationIO::setVector3ParameterValue(char const*,glitch::core::vector3d<float> const&)
// glitch::collada::CAnimationIOParam *glitch::collada::CAnimationIO::setVector3ParameterValue( int a1, char *a2, uint32_t *a3);
// [0xd712d0] (240 bytes) glitch::collada::CAnimationIO::setClipParameterValue(char const*,int)
// glitch::collada::CAnimationIOClipParam *glitch::collada::CAnimationIO::setClipParameterValue( glitch::collada::CAnimationIOParam ***this, const char *a2, int a3);
// [0xd713c0] (234 bytes) glitch::collada::CAnimationIO::getParameterType(char const*)const
// int glitch::collada::CAnimationIO::getParameterType(glitch::collada::CAnimationIOParam ***this, const char *a2);
// [0xd714b0] (242 bytes) glitch::collada::CAnimationIO::getClipParameterValue(char const*)const
// int glitch::collada::CAnimationIO::getClipParameterValue( glitch::collada::CAnimationIOParam ***this, const char *a2);
// [0xd715b0] (249 bytes) glitch::collada::CAnimationIO::findVector3Parameter(char const*)const
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findVector3Parameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd716b0] (249 bytes) glitch::collada::CAnimationIO::findVector2Parameter(char const*)const
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findVector2Parameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd717b0] (263 bytes) glitch::collada::CAnimationIO::getStringParameterValue(char const*)const
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::getStringParameterValue( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd718c0] (249 bytes) glitch::collada::CAnimationIO::findFloatParameter(char const*)const
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findFloatParameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd719c0] (256 bytes) glitch::collada::CAnimationIO::findIntParameter(char const*)const
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findIntParameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd71ac0] (249 bytes) glitch::collada::CAnimationIO::findClipParameter(char const*)const
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findClipParameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd71bc0] (228 bytes) glitch::collada::CAnimationIO::getIntParameterValue(char const*)const
// int glitch::collada::CAnimationIO::getIntParameterValue( glitch::collada::CAnimationIOParam ***this, const char *a2);
// [0xd71cb0] (245 bytes) glitch::collada::CAnimationIO::getFloatParameterValue(char const*)const
// long double glitch::collada::CAnimationIO::getFloatParameterValue( glitch::collada::CAnimationIOParam ***this, const char *a2);
// [0xd71db0] (249 bytes) glitch::collada::CAnimationIO::findStringParameter(char const*)const
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::findStringParameter( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd71eb0] (259 bytes) glitch::collada::CAnimationIO::getVector2ParameterValue(char const*)const
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::getVector2ParameterValue( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd71fc0] (273 bytes) glitch::collada::CAnimationIO::getVector3ParameterValue(char const*)const
// glitch::collada::CAnimationIO *glitch::collada::CAnimationIO::getVector3ParameterValue( glitch::collada::CAnimationIO *this, glitch::collada::CAnimationIOParam ***a2, char *a3);
// [0xd720e0] (1893 bytes) glitch::collada::CParametricControllerBlender::addDelegateControllerSlot(boost::intrusive_ptr<glitch::collada::IParametricController> const&,int,int)
// size_t glitch::collada::CParametricControllerBlender::addDelegateControllerSlot( uint32_t *a1, volatile int32_t **a2, int16_t a3, int16_t a4);
// [0xd72850] (2009 bytes) glitch::collada::CParametricControllerBlender::updateDelegateControllerSlots(void)
// int glitch::collada::CParametricControllerBlender::updateDelegateControllerSlots( glitch::collada::CParametricControllerBlender *this);
// [0xd73030] (52 bytes) glitch::collada::CParametricControllerBlender::enableOptimization(bool)
// glitch::collada::CParametricControllerBlender *glitch::collada::CParametricControllerBlender::enableOptimization( glitch::collada::CParametricControllerBlender *this, bool a2);
// [0xd73070] (116 bytes) glitch::collada::CParametricControllerBlender::setController(int,boost::intrusive_ptr<glitch::collada::IParametricController> const&)
// int glitch::collada::CParametricControllerBlender::setController( glitch::collada::CParametricControllerBlender *a1, int a2, int *a3);
// [0xd730f0] (118 bytes) glitch::collada::CParametricControllerBlender::setControllerById(int,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int glitch::collada::CParametricControllerBlender::setControllerById( glitch::collada::CAnimationPackage **this, int a2, char **a3);
// [0xd73170] (1085 bytes) glitch::collada::CMeshSceneNode::renderInternal(void *)
// volatile int32_t *glitch::collada::CMeshSceneNode::renderInternal( glitch::collada::CMeshSceneNode *this, char *a2);
// [0xd735b0] (159 bytes) glitch::collada::CLODMeshSceneNode::renderCompileInternal(void *)
// volatile int32_t *glitch::collada::CLODMeshSceneNode::renderCompileInternal( glitch::collada::CLODMeshSceneNode *this, unsigned int a2);
// [0xd73650] (144 bytes) glitch::collada::CLODMeshSceneNode::renderInternal(void *)
// volatile int32_t *glitch::collada::CLODMeshSceneNode::renderInternal( glitch::collada::CLODMeshSceneNode *this, unsigned int a2);
// [0xd736e0] (1126 bytes) glitch::collada::CAnimationTrackWeights::CAnimationTrackWeights(boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&)
// glitch::collada::CAnimationTrackWeights *glitch::collada::CAnimationTrackWeights::CAnimationTrackWeights( glitch::collada::CAnimationTrackWeights *this, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> *a2);
// [0xd73b50] (628 bytes) glitch::collada::CAnimationGraph::bind(boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&,int)
// glitch::collada::CAnimationTrackWeights *glitch::collada::CAnimationGraph::bind(int a1, int **a2, int a3);
// [0xd73dd0] (1126 bytes) glitch::collada::CAnimationTrackWeights::CAnimationTrackWeights(boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> const&)
// int glitch::collada::CAnimationTrackWeights::CAnimationTrackWeights( glitch::collada::CAnimationTrackWeights *a1, int a2);
// [0xd74240] (463 bytes) glitch::collada::CAnimationPackage::createTrackWeights(char const*,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&,boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> const&)const
// volatile int32_t **glitch::collada::CAnimationPackage::createTrackWeights( volatile int32_t **a1, glitch::collada::CAnimationPackage *a2, char *a3, const char **a4, uint32_t *a5);
// [0xd74410] (280 bytes) glitch::collada::detail::ISkinTechnique::preparePtrCache(void)
// uint32_t *glitch::collada::detail::ISkinTechnique::preparePtrCache(glitch::collada::detail::ISkinTechnique *this);
// [0xd74530] (7274 bytes) glitch::collada::detail::CSoftwareSkinTechnique::skin(unsigned int,glitch::collada::SSkinBuffer &,glitch::scene::CMeshBuffer *,boost::intrusive_ptr<glitch::video::CMaterial>)
// int glitch::collada::detail::CSoftwareSkinTechnique::skin( glitch::collada::detail::ISkinTechnique *a1, unsigned int a2, int a3, uint32_t *a4, glitch::video::CMaterial **a5);
// [0xd761a0] (1537 bytes) glitch::collada::detail::CHardwareMatrixSkinTechnique::skin(unsigned int,glitch::collada::SSkinBuffer &,glitch::scene::CMeshBuffer *,boost::intrusive_ptr<glitch::video::CMaterial>)
// int glitch::collada::detail::CHardwareMatrixSkinTechnique::skin( glitch::collada::detail::ISkinTechnique *a1, int a2, int a3, int a4, glitch::video::detail::IMaterialParameters<glitch::video::CMaterial, glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>> **a5);
// [0xd767b0] (629 bytes) glitch::collada::CParticleSystemEmitterSceneNode::attach(glitch::scene::ISceneNode *)
// unsigned int glitch::collada::CParticleSystemEmitterSceneNode::attach( unsigned int **this, glitch::scene::ISceneNode *a2);
// [0xd76a30] (308 bytes) glitch::collada::CRootSceneNode::attachParticleSystems(void)
// unsigned int *glitch::collada::CRootSceneNode::attachParticleSystems(glitch::collada::CRootSceneNode *this);
// [0xd76b70] (108 bytes) glitch::collada::CRootSceneNode::onPostLoad(void)
// int glitch::collada::CRootSceneNode::onPostLoad(glitch::collada::CRootSceneNode *this);
// [0xd76be0] (3350 bytes) glitch::collada::CAnimationSet::compileInternal(void)
// unsigned int glitch::collada::CAnimationSet::compileInternal(glitch::collada::CAnimationSet *this);
// [0xd77900] (1491 bytes) glitch::collada::CDynamicAnimationSet::compile(void)
// void glitch::collada::CDynamicAnimationSet::compile(char **this);
// [0xd77ee0] (2399 bytes) glitch::collada::CAnimationSet::compile(void)
// unsigned int glitch::collada::CAnimationSet::compile(glitch::collada::CAnimationSet *this);
// [0xd78840] (1038 bytes) glitch::collada::CAnimationTrackHandlers::CAnimationTrackHandlers(boost::intrusive_ptr<glitch::collada::CAnimationTreeCookie> const&)
// int glitch::collada::CAnimationTrackHandlers::CAnimationTrackHandlers(uint32_t *a1, int a2);
// [0xd78c50] (1038 bytes) glitch::collada::CAnimationTrackHandlers::CAnimationTrackHandlers(boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&)
// glitch::collada::CAnimationTrackHandlers *glitch::collada::CAnimationTrackHandlers::CAnimationTrackHandlers( glitch::collada::CAnimationTrackHandlers *this, const boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> *a2);
// [0xd79060] (1582 bytes) glitch::collada::CAnimationTreeCookie::CAnimationTreeCookie(boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&,boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator>)
// int glitch::collada::CAnimationTreeCookie::CAnimationTreeCookie( int a1, glitch::collada::CRootSceneNode **a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8);
// [0xd79690] (859 bytes) glitch::collada::CDynamicAnimationSet::addAnimation(glitch::collada::SAnimation const*)
// int glitch::collada::CDynamicAnimationSet::addAnimation(int a1, int a2);
// [0xd799f0] (520 bytes) glitch::collada::CSceneNodeAnimatorSet::init(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&)
// int glitch::collada::CSceneNodeAnimatorSet::init(uint32_t *a1, int *a2);
// [0xd79c00] (198 bytes) glitch::collada::CSceneNodeAnimatorSet::CSceneNodeAnimatorSet(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&)
// int glitch::collada::CSceneNodeAnimatorSet::CSceneNodeAnimatorSet( glitch::collada::ISceneNodeAnimator *a1, int *a2);
// [0xd79cd0] (1145 bytes) glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setAnimatorCount(int)
// void glitch::collada::CSceneNodeAnimatorSynchronizedBlender::setAnimatorCount( glitch::collada::CSceneNodeAnimatorSynchronizedBlender *this, unsigned int a2);
// [0xd7a150] (606 bytes) glitch::collada::IParametricController::updateBlenderWeights(boost::intrusive_ptr<glitch::collada::CSceneNodeAnimatorSynchronizedBlender> const&,glitch::core::vector3d<float> const&,glitch::core::vector3d<float>*)
// int glitch::collada::IParametricController::updateBlenderWeights( int a1, glitch::collada::CSceneNodeAnimatorSynchronizedBlender **a2, int a3, ...);
// [0xd7a3b0] (1471 bytes) glitch::collada::CParametricControllerBlender::updateBlenderWeights(boost::intrusive_ptr<glitch::collada::CSceneNodeAnimatorSynchronizedBlender> const&,glitch::core::vector3d<float> const&,glitch::core::vector3d<float>*)
// int glitch::collada::CParametricControllerBlender::updateBlenderWeights( unsigned int *a1, glitch::collada::CSceneNodeAnimatorSynchronizedBlender **a2, float *a3, float *a4);
// [0xd7a970] (196 bytes) glitch::collada::CSceneNodeAnimatorSet::CSceneNodeAnimatorSet(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&)
// int glitch::collada::CSceneNodeAnimatorSet::CSceneNodeAnimatorSet( glitch::collada::ISceneNodeAnimator *a1, int *a2, int *a3);
// [0xd7aa40] (129 bytes) glitch::collada::CSceneNodeAnimatorSnapShot::CSceneNodeAnimatorSnapShot(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&)
// void (**glitch::collada::CSceneNodeAnimatorSnapShot::CSceneNodeAnimatorSnapShot( glitch::collada::ISceneNodeAnimator *a1, int *a2))(glitch::collada::CSceneNodeAnimatorSnapShot *__hidden this);
// [0xd7aad0] (127 bytes) glitch::collada::CSceneNodeAnimatorSnapShot::CSceneNodeAnimatorSnapShot(boost::intrusive_ptr<glitch::collada::CAnimationSet> const&)
// void (**glitch::collada::CSceneNodeAnimatorSnapShot::CSceneNodeAnimatorSnapShot( glitch::collada::ISceneNodeAnimator *a1, int *a2, int *a3))(glitch::collada::CSceneNodeAnimatorSnapShot *__hidden this);
// [0xd7ab50] (276 bytes) glitch::collada::CSceneNodeAnimatorSet::CSceneNodeAnimatorSet(glitch::collada::CColladaDatabase const&)
// glitch::collada::CSceneNodeAnimatorSet *glitch::collada::CSceneNodeAnimatorSet::CSceneNodeAnimatorSet( glitch::collada::CSceneNodeAnimatorSet *this, const glitch::collada::CColladaDatabase *a2);
// [0xd7ac70] (254 bytes) glitch::collada::CSceneNodeAnimatorSet::CSceneNodeAnimatorSet(glitch::collada::CColladaDatabase const&)
// glitch::collada::CSceneNodeAnimatorSet *glitch::collada::CSceneNodeAnimatorSet::CSceneNodeAnimatorSet( volatile int32_t **this, const glitch::collada::CColladaDatabase *a2, int a3);
// [0xd7ad70] (1060 bytes) glitch::collada::CRootMotion::CRootMotion(boost::intrusive_ptr<glitch::scene::ISceneNode> const&,boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> const&,bool)
// volatile int32_t *glitch::collada::CRootMotion::CRootMotion( int a1, uint32_t **a2, boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator> *a3, char a4);
// [0xd7b1a0] (434 bytes) glitch::collada::ISceneNodeAnimator::onBind(glitch::scene::ISceneNode *)
// 0xd7b1a0 glitch::collada::ISceneNodeAnimator::onBind(glitch::scene::ISceneNode *)
// [0xd7b360] (1484 bytes) glitch::collada::CParametricControllerBlender::setControllerSlotCount(int)
// int glitch::collada::CParametricControllerBlender::setControllerSlotCount( glitch::collada::CParametricControllerBlender::SControllerSlot **this, unsigned int a2);
// [0xd7b930] (6777 bytes) glitch::collada::CAnimationGraph::createNodes(glitch::collada::anim_pack::SAnimationGraph const&)
// volatile int32_t *glitch::collada::CAnimationGraph::createNodes(uint32_t *a1, int a2);
// [0xd7d3b0] (352 bytes) glitch::collada::CAnimationGraph::CAnimationGraph(boost::intrusive_ptr<glitch::collada::CAnimationPackage const> const&,glitch::collada::anim_pack::SAnimationGraph const&)
// glitch::collada::CAnimationIOParam *glitch::collada::CAnimationGraph::CAnimationGraph( glitch::collada::CAnimationGraph *a1, int *a2, uint32_t *a3);
// [0xd7d510] (395 bytes) glitch::collada::CAnimationPackage::getAnimationGraph(char const*)const
// int *glitch::collada::CAnimationPackage::getAnimationGraph( glitch::collada::CAnimationPackage *this, const char *a2, char *a3);
// [0xd7d6a0] (27 bytes) glitch::collada::animation_track::CApplicatorInfo::~CApplicatorInfo()
// void glitch::collada::animation_track::CApplicatorInfo::~CApplicatorInfo( glitch::collada::animation_track::CApplicatorInfo *this);
// [0xd7d6c0] (27 bytes) glitch::collada::IAnimationTrackEx::~IAnimationTrackEx()
// void glitch::collada::IAnimationTrackEx::~IAnimationTrackEx(glitch::collada::IAnimationTrackEx *this);
// [0xd7d6e0] (9 bytes) glitch::collada::IAnimationTrackEx::getDeltaValue(void const*,int,void *)const
// void glitch::collada::IAnimationTrackEx::getDeltaValue();
// [0xd7d6f0] (9 bytes) glitch::collada::IAnimationTrackEx::getHandledValue(void const*,int,glitch::collada::SAnimationTrackHandlingType,void *)const
// void glitch::collada::IAnimationTrackEx::getHandledValue();
// [0xd7d700] (9 bytes) glitch::collada::IAnimationTrackEx::applyBlendedValue(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// void glitch::collada::IAnimationTrackEx::applyBlendedValue();
// [0xd7d710] (9 bytes) glitch::collada::IAnimationTrackEx::applyAddedValue(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// void glitch::collada::IAnimationTrackEx::applyAddedValue();
// [0xd7d720] (9 bytes) glitch::collada::IAnimationTrackEx::applyDeltaValue(void const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// void glitch::collada::IAnimationTrackEx::applyDeltaValue();
// [0xd7d730] (61 bytes) glitch::collada::IAnimationTrackEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,int,float,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// int glitch::collada::IAnimationTrackEx::applyKeyBasedValue( glitch::collada::IAnimationTrackEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, int a4, float a5, void *a6);
// [0xd7d770] (45 bytes) glitch::collada::IAnimationTrackEx::applyKeyBasedValue(glitch::collada::SAnimationAccessor const&,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// int glitch::collada::IAnimationTrackEx::applyKeyBasedValue( glitch::collada::IAnimationTrackEx *this, const glitch::collada::SAnimationAccessor *a2, int a3, void *a4);
// [0xd7d7a0] (9 bytes) glitch::collada::IAnimationTrackEx::applyValue(glitch::collada::SAnimationAccessor const&,float,void *,glitch::collada::animation_track::CApplicatorInfo *,bool)const
// void glitch::collada::IAnimationTrackEx::applyValue();
// [0xd7d7b0] (9 bytes) glitch::collada::IAnimationTrackEx::applyValue(glitch::collada::SAnimationAccessor const&,float,void *,glitch::collada::animation_track::CApplicatorInfo *,int &,bool)const
// void glitch::collada::IAnimationTrackEx::applyValue();
// [0xd7d7c0] (12 bytes) glitch::collada::IAnimationTrackEx::getType(void)const
// int glitch::collada::IAnimationTrackEx::getType();
// [0xd7d7d0] (71 bytes) glitch::collada::CAnimationTrackEx::getAdditiveValue(void const*,void *)const
// int glitch::collada::CAnimationTrackEx::getAdditiveValue( glitch::collada::CAnimationTrackEx *this, const void *a2, void *a3);
// [0xd7d820] (27 bytes) glitch::collada::CAnimationTrackEx::~CAnimationTrackEx()
// void glitch::collada::CAnimationTrackEx::~CAnimationTrackEx(glitch::collada::CAnimationTrackEx *this);
// [0xd7d840] (69 bytes) glitch::collada::animation_track::CFloatEx::applyBlendedValue(void const*,float const*,int,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// int glitch::collada::animation_track::CFloatEx::applyBlendedValue( glitch::collada::animation_track::CFloatEx *this, float *a2, const float *a3, int a4, float *a5);
// [0xd7d890] (12 bytes) glitch::collada::animation_track::CFloatEx::getValueSize(void)const
// int glitch::collada::animation_track::CFloatEx::getValueSize();
// [0xd7d8a0] (15 bytes) glitch::collada::animation_track::CFloatEx::getIdentityValue(void *)const
// uint32_t *glitch::collada::animation_track::CFloatEx::getIdentityValue( glitch::collada::animation_track::CFloatEx *this, uint32_t *a2);
// [0xd7d8b0] (69 bytes) glitch::collada::animation_track::CFloatEx::getBlendedValue(void const*,float const*,int,void *)const
// int glitch::collada::animation_track::CFloatEx::getBlendedValue( glitch::collada::animation_track::CFloatEx *this, float *a2, const float *a3, int a4, float *a5);
// [0xd7d900] (69 bytes) glitch::collada::animation_track::CFloatEx::getAddedValue(void const*,float const*,int,void *)const
// int glitch::collada::animation_track::CFloatEx::getAddedValue( glitch::collada::animation_track::CFloatEx *this, float *a2, const float *a3, int a4, float *a5);
// [0xd7d980] (12 bytes) glitch::collada::animation_track::CVector3dEx::getValueSize(void)const
// int glitch::collada::animation_track::CVector3dEx::getValueSize();
// [0xd7d990] (15 bytes) glitch::collada::animation_track::CVector3dEx::getIdentityValue(void *)const
// uint32_t *glitch::collada::animation_track::CVector3dEx::getIdentityValue( glitch::collada::animation_track::CVector3dEx *this, uint32_t *a2);
// [0xd7d9a0] (115 bytes) glitch::collada::animation_track::CVector3dEx::getAddedValue(void const*,float const*,int,void *)const
// void glitch::collada::animation_track::CVector3dEx::getAddedValue( glitch::collada::animation_track::CVector3dEx *this, float *a2, const float *a3, int a4, float *a5);
// [0xd7da20] (24 bytes) glitch::collada::animation_track::CVisibilityEx::retrieveValue(void *,void *)const
// bool *glitch::collada::animation_track::CVisibilityEx::retrieveValue( glitch::collada::animation_track::CVisibilityEx *this, uint32_t *a2, bool *a3);
// [0xd7da40] (32 bytes) glitch::collada::animation_track::CVisibilityEx::applyValue(void const*,void *,glitch::collada::animation_track::CApplicatorInfo *)const
// int glitch::collada::animation_track::CVisibilityEx::applyValue( glitch::collada::animation_track::CVisibilityEx *this, uint8_t *a2, void *a3);
// [0xd7da60] (12 bytes) glitch::collada::animation_track::CVisibilityEx::getValueSize(void)const
// int glitch::collada::animation_track::CVisibilityEx::getValueSize();
// [0xd7da70] (15 bytes) glitch::collada::animation_track::CVisibilityEx::getIdentityValue(void *)const
// uint32_t *glitch::collada::animation_track::CVisibilityEx::getIdentityValue( glitch::collada::animation_track::CVisibilityEx *this, uint32_t *a2);
// [0xd7da80] (74 bytes) glitch::collada::animation_track::CVisibilityEx::getBlendedValue(void const*,float const*,int,void *)const
// void glitch::collada::animation_track::CVisibilityEx::getBlendedValue( glitch::collada::animation_track::CVisibilityEx *this, uint32_t *a2, const float *a3, int a4, uint32_t *a5);
// [0xd7dad0] (74 bytes) glitch::collada::animation_track::CVisibilityEx::getAddedValue(void const*,float const*,int,void *)const
// void glitch::collada::animation_track::CVisibilityEx::getAddedValue( glitch::collada::animation_track::CVisibilityEx *this, uint32_t *a2, const float *a3, int a4, uint32_t *a5);
// [0xd7db20] (12 bytes) glitch::collada::animation_track::CWeightEx::getValueSize(void)const
// int glitch::collada::animation_track::CWeightEx::getValueSize();
// [0xd7db30] (15 bytes) glitch::collada::animation_track::CWeightEx::getIdentityValue(void *)const
// uint32_t *glitch::collada::animation_track::CWeightEx::getIdentityValue( glitch::collada::animation_track::CWeightEx *this, uint32_t *a2);
