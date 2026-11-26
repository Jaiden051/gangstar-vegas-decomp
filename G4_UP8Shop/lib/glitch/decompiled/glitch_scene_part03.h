#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_scene_part03.h
// Library: glitch | Module: glitch_scene_part03
// Binary Address Span: 0xf4e3f0 .. 0xf7d9a0 (191 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xf4e3f0] (230 bytes) glitch::scene::CStreamingSceneNode::CStreamingSceneNode(glitch::streaming::CStreamingPackage *,boost::intrusive_ptr<glitch::streaming::SSharedStreamingData> const&,int)
// int glitch::scene::CStreamingSceneNode::CStreamingSceneNode( glitch::scene::CEmptySceneNode *a1, int *a2, int a3, int *a4, int a5);
// [0xf4e4e0] (1171 bytes) glitch::scene::CTerrainSceneNode::CTerrainSceneNode(boost::intrusive_ptr<glitch::io::IFileSystem> const&,int,unsigned int,int,glitch::scene::E_TERRAIN_PATCH_SIZE,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// volatile int32_t *glitch::scene::CTerrainSceneNode::CTerrainSceneNode( int a1, int *a2, int a3, unsigned int a4, int a5, int a6, float *a7, uint32_t *a8, int a9);
// [0xf4e980] (1131 bytes) glitch::scene::CTerrainSceneNode::CTerrainSceneNode(boost::intrusive_ptr<glitch::io::IFileSystem> const&,int,unsigned int,int,glitch::scene::E_TERRAIN_PATCH_SIZE,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// volatile int32_t *glitch::scene::CTerrainSceneNode::CTerrainSceneNode( glitch::IObject *a1, int *a2, int *a3, int a4, unsigned int a5, int a6, int a7, float *a8, uint32_t *a9, float *a10);
// [0xf4edf0] (3133 bytes) glitch::scene::CSkyDomeSceneNode::CSkyDomeSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,unsigned int,unsigned int,double,double,double,int)
// glitch::scene::CSkyDomeSceneNode *glitch::scene::CSkyDomeSceneNode::CSkyDomeSceneNode( glitch::scene::CSkyDomeSceneNode *this, glitch::video::IVideoDriver *a2, const boost::intrusive_ptr<glitch::video::ITexture> *a3, unsigned int a4, unsigned int a5, double a6, double a7, double a8, int a9);
// [0xf4fa30] (3069 bytes) glitch::scene::CSkyDomeSceneNode::CSkyDomeSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,unsigned int,unsigned int,double,double,double,int)
// glitch::scene::CSkyDomeSceneNode *glitch::scene::CSkyDomeSceneNode::CSkyDomeSceneNode( glitch::scene::CSkyDomeSceneNode *this, glitch::video::IVideoDriver *a2, const boost::intrusive_ptr<glitch::video::ITexture> *a3, int *a4, unsigned int a5, unsigned int a6, double a7, double a8, double a9, int a10);
// [0xf50630] (2397 bytes) glitch::scene::CSkyCubeSceneNode::CSkyCubeSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,int)
// glitch::scene::CSkyCubeSceneNode *glitch::scene::CSkyCubeSceneNode::CSkyCubeSceneNode( glitch::scene::CSkyCubeSceneNode *this, glitch::video::IVideoDriver *a2, glitch::video::ITexture **a3, int a4);
// [0xf50f90] (2365 bytes) glitch::scene::CSkyCubeSceneNode::CSkyCubeSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,int)
// glitch::scene::CSkyCubeSceneNode *glitch::scene::CSkyCubeSceneNode::CSkyCubeSceneNode( glitch::scene::CSkyCubeSceneNode *this, glitch::video::IVideoDriver *a2, const boost::intrusive_ptr<glitch::video::ITexture> *a3, glitch::video::ITexture **a4, int a5);
// [0xf518d0] (971 bytes) glitch::scene::CCameraTargetTrackerSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CCameraTargetTrackerSceneNode::onRegisterSceneNodeInternal( glitch::scene::CCameraTargetTrackerSceneNode *this, void *a2);
// [0xf51ca0] (15 bytes) `virtual thunk to'glitch::scene::ISceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `virtual thunk to'glitch::scene::ISceneNode::deserializeAttributes(uint32_t *a1, int a2, int a3);
// [0xf51cb0] (1413 bytes) glitch::scene::ISceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// void glitch::scene::ISceneNode::deserializeAttributes(glitch::scene::ISceneNode *a1, int a2, uint32_t *a3);
// [0xf52240] (15 bytes) `virtual thunk to'glitch::scene::CMeshSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `virtual thunk to'glitch::scene::CMeshSceneNode::deserializeAttributes(uint32_t *a1, int a2, int a3);
// [0xf52250] (50 bytes) glitch::scene::CMeshSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// void glitch::scene::CMeshSceneNode::deserializeAttributes(glitch::scene::ISceneNode *a1, int a2, uint32_t *a3);
// [0xf52290] (15 bytes) `virtual thunk to'glitch::scene::CLightSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `virtual thunk to'glitch::scene::CLightSceneNode::deserializeAttributes(uint32_t *a1, int a2, int a3);
// [0xf522a0] (128 bytes) glitch::scene::CLightSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::scene::CLightSceneNode::deserializeAttributes(int *a1, const char *a2, uint32_t *a3);
// [0xf52320] (15 bytes) `virtual thunk to'glitch::scene::CCameraSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `virtual thunk to'glitch::scene::CCameraSceneNode::deserializeAttributes(uint32_t *a1, int a2, int a3);
// [0xf52330] (324 bytes) glitch::scene::CCameraSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// void glitch::scene::CCameraSceneNode::deserializeAttributes(int a1, int a2, uint32_t *a3);
// [0xf52480] (15 bytes) `virtual thunk to'glitch::scene::CBillboardSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `virtual thunk to'glitch::scene::CBillboardSceneNode::deserializeAttributes(uint32_t *a1, int a2, int a3);
// [0xf52490] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::deserializeAttributes(int a1, int a2, int a3);
// [0xf524a0] (231 bytes) glitch::scene::CBillboardSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::scene::CBillboardSceneNode::deserializeAttributes(int a1, int a2, uint32_t *a3);
// [0xf52590] (15 bytes) `virtual thunk to'glitch::scene::CTerrainSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `virtual thunk to'glitch::scene::CTerrainSceneNode::deserializeAttributes(uint32_t *a1);
// [0xf525a0] (691 bytes) glitch::scene::CTerrainSceneNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// uint32_t *glitch::scene::CTerrainSceneNode::deserializeAttributes(int a1, int a2, int a3);
// [0xf52860] (35 bytes) glitch::scene::ISceneNode::setAbsolutePositionFromTransformedBoundingBox(bool)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::setAbsolutePositionFromTransformedBoundingBox( glitch::scene::ISceneNode *this, bool a2);
// [0xf52890] (871 bytes) glitch::scene::ISceneNode::cloneMembers(glitch::scene::ISceneNode const*)
// char *glitch::scene::ISceneNode::cloneMembers( glitch::scene::ISceneNode *this, const glitch::scene::ISceneNode *a2);
// [0xf52c00] (280 bytes) glitch::scene::CMeshSceneNode::clone(void)const
// glitch::scene::CMeshSceneNode *glitch::scene::CMeshSceneNode::clone( glitch::scene::CMeshSceneNode *this, glitch::scene::ISceneNode *a2);
// [0xf52d20] (206 bytes) glitch::scene::CEmptySceneNode::clone(void)const
// glitch::scene::CEmptySceneNode *glitch::scene::CEmptySceneNode::clone( glitch::scene::CEmptySceneNode *this, int *a2);
// [0xf52df0] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::clone(void)const
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::clone(glitch::scene::CBillboardSceneNode *this);
// [0xf52e00] (269 bytes) glitch::scene::CBillboardSceneNode::clone(void)const
// glitch::scene::CBillboardSceneNode *glitch::scene::CBillboardSceneNode::clone( glitch::scene::CBillboardSceneNode *this, int a2);
// [0xf52f10] (712 bytes) glitch::scene::CTerrainSceneNode::clone(void)const
// 0xf52f10 glitch::scene::CTerrainSceneNode::clone(void)const
// [0xf531e0] (177 bytes) glitch::scene::IShadowVolumeSceneNode::IShadowVolumeSceneNode(int)
// glitch::scene::IShadowVolumeSceneNode *glitch::scene::IShadowVolumeSceneNode::IShadowVolumeSceneNode( glitch::scene::IShadowVolumeSceneNode *this, int *a2, int a3);
// [0xf532a0] (203 bytes) glitch::scene::IShadowVolumeSceneNode::IShadowVolumeSceneNode(int)
// void (**glitch::scene::IShadowVolumeSceneNode::IShadowVolumeSceneNode( glitch::scene::IShadowVolumeSceneNode *this, int a2))(glitch::scene::IShadowVolumeSceneNode *__hidden this);
// [0xf53370] (83 bytes) glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode()
// void glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode(volatile int32_t **this, int a2);
// [0xf533d0] (924 bytes) glitch::scene::IShadowVolumeSceneNode::setupMaterials(glitch::video::IVideoDriver *)
// uint32_t *glitch::scene::IShadowVolumeSceneNode::setupMaterials( __m128d a1, glitch::scene::IShadowVolumeSceneNode *this, glitch::video::IVideoDriver *a3);
// [0xf53770] (409 bytes) glitch::scene::CShadowVolumeSceneNode::CShadowVolumeSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::scene::IMesh const> const&,int,glitch::scene::E_SHADOW_VOLUME_TYPE,float)
// uint32_t *glitch::scene::CShadowVolumeSceneNode::CShadowVolumeSceneNode( __m128d a1, glitch::scene::IShadowVolumeSceneNode *a2, glitch::video::IVideoDriver *a3, int *a4, int a5, char a6, int a7);
// [0xf53910] (389 bytes) glitch::scene::CShadowVolumeSceneNode::CShadowVolumeSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::scene::IMesh const> const&,int,glitch::scene::E_SHADOW_VOLUME_TYPE,float)
// uint32_t *glitch::scene::CShadowVolumeSceneNode::CShadowVolumeSceneNode( __m128d a1, glitch::scene::IShadowVolumeSceneNode *a2, int *a3, glitch::video::IVideoDriver *a4, int *a5, int a6, char a7, int a8);
// [0xf53aa0] (69 bytes) glitch::scene::IShadowVolumeSceneNode::unSetupMaterials(void)
// int glitch::scene::IShadowVolumeSceneNode::unSetupMaterials();
// [0xf53af0] (15 bytes) `virtual thunk to'glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode()
// void `virtual thunk to'glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode( glitch::scene::CShadowVolumeStaticSceneNode *this);
// [0xf53b00] (15 bytes) `virtual thunk to'glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode()
// void `virtual thunk to'glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode( glitch::scene::CShadowVolumeStaticSceneNode *this);
// [0xf53b10] (258 bytes) glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode()
// void glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode( glitch::scene::CShadowVolumeStaticSceneNode *this);
// [0xf53c20] (15 bytes) `virtual thunk to'glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode()
// void `virtual thunk to'glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode( glitch::scene::CShadowVolumeStaticSceneNode *this);
// [0xf53c30] (15 bytes) `virtual thunk to'glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode()
// void `virtual thunk to'glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode( glitch::scene::CShadowVolumeStaticSceneNode *this);
// [0xf53c40] (56 bytes) glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode()
// void glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode( glitch::scene::CShadowVolumeStaticSceneNode *this);
// [0xf53c80] (242 bytes) glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode()
// void glitch::scene::CShadowVolumeStaticSceneNode::~CShadowVolumeStaticSceneNode( glitch::scene::CShadowVolumeStaticSceneNode *this, int *a2);
// [0xf53d80] (391 bytes) glitch::scene::CLightSceneNode::CLightSceneNode(glitch::scene::CLightSceneNode const&)
// glitch::scene::CLightSceneNode *glitch::scene::CLightSceneNode::CLightSceneNode( volatile int32_t **this, const glitch::scene::CLightSceneNode *a2, int *a3);
// [0xf53f10] (385 bytes) glitch::scene::CLightSceneNode::CLightSceneNode(bool)
// glitch::scene::CLightSceneNode *glitch::scene::CLightSceneNode::CLightSceneNode( glitch::scene::CLightSceneNode *this);
// [0xf540a0] (363 bytes) glitch::scene::CLightSceneNode::CLightSceneNode(bool)
// glitch::scene::CLightSceneNode *glitch::scene::CLightSceneNode::CLightSceneNode( volatile int32_t **this, uint32_t *a2);
// [0xf54210] (509 bytes) glitch::scene::CLightSceneNode::CLightSceneNode(int,glitch::core::vector3d<float> const&,glitch::video::SColorf const&,float)
// unsigned int glitch::scene::CLightSceneNode::CLightSceneNode( glitch::scene::CLightSceneNode *a1, int a2, float *a3, float *a4, int a5);
// [0xf54410] (467 bytes) glitch::scene::CLightSceneNode::CLightSceneNode(int,glitch::core::vector3d<float> const&,glitch::video::SColorf const&,float)
// unsigned int glitch::scene::CLightSceneNode::CLightSceneNode( volatile int32_t **a1, uint32_t *a2, int a3, float *a4, float *a5, int a6);
// [0xf545f0] (433 bytes) glitch::scene::CLightSceneNode::CLightSceneNode(glitch::scene::CLightSceneNode const&)
// glitch::scene::CLightSceneNode *glitch::scene::CLightSceneNode::CLightSceneNode( glitch::scene::CLightSceneNode *this, const glitch::scene::CLightSceneNode *a2);
// [0xf547b0] (107 bytes) glitch::scene::CLightSceneNode::clone(void)const
// glitch::scene::CLightSceneNode *glitch::scene::CLightSceneNode::clone( glitch::scene::CLightSceneNode *this, glitch::scene::CLightSceneNode *a2);
// [0xf54820] (4395 bytes) glitch::scene::CSkyBoxSceneNode::CSkyBoxSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,int)
// glitch::scene::CSkyBoxSceneNode *glitch::scene::CSkyBoxSceneNode::CSkyBoxSceneNode( glitch::scene::CSkyBoxSceneNode *this, glitch::video::IVideoDriver *a2, glitch::video::ITexture **a3, const boost::intrusive_ptr<glitch::video::ITexture> *a4, glitch::video::ITexture **a5, glitch::video::ITexture **a6, const boost::intrusive_ptr<glitch::video::ITexture> *a7, glitch::video::ITexture **a8, int a9);
// [0xf55950] (4355 bytes) glitch::scene::CSkyBoxSceneNode::CSkyBoxSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,boost::intrusive_ptr<glitch::video::ITexture> const&,int)
// glitch::scene::CSkyBoxSceneNode *glitch::scene::CSkyBoxSceneNode::CSkyBoxSceneNode( glitch::scene::CSkyBoxSceneNode *this, glitch::video::IVideoDriver *a2, const boost::intrusive_ptr<glitch::video::ITexture> *a3, glitch::video::ITexture **a4, const boost::intrusive_ptr<glitch::video::ITexture> *a5, glitch::video::ITexture **a6, glitch::video::ITexture **a7, glitch::video::ITexture **a8, glitch::video::ITexture **a9, int a10);
// [0xf56a60] (2130 bytes) glitch::scene::CDefaultSceneNodeFactory::addSceneNode(glitch::scene::E_SCENE_NODE_TYPE,glitch::scene::ISceneNode *)
// glitch::IObject **glitch::scene::CDefaultSceneNodeFactory::addSceneNode( glitch::IObject **a1, glitch::video::IVideoDriver *a2, int a3, int a4);
// [0xf572c0] (244 bytes) glitch::scene::CSkyCubeSceneNode::clone(void)const
// glitch::scene::CSkyCubeSceneNode *glitch::scene::CSkyCubeSceneNode::clone( glitch::scene::CSkyCubeSceneNode *this, int *a2);
// [0xf573c0] (605 bytes) glitch::scene::CSkyBoxSceneNode::clone(void)const
// glitch::scene::CSkyBoxSceneNode *glitch::scene::CSkyBoxSceneNode::clone( glitch::scene::CSkyBoxSceneNode *this, glitch::scene::ISceneNode *a2);
// [0xf57620] (342 bytes) glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode()
// void glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode( glitch::scene::CShadowVolumeSceneNode *this, int *a2);
// [0xf57780] (15 bytes) `virtual thunk to'glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode()
// void `virtual thunk to'glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode( glitch::scene::CShadowVolumeSceneNode *this);
// [0xf57790] (15 bytes) `virtual thunk to'glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode()
// void `virtual thunk to'glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode( glitch::scene::CShadowVolumeSceneNode *this);
// [0xf577a0] (374 bytes) glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode()
// void glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode( glitch::scene::CShadowVolumeSceneNode *this);
// [0xf57920] (15 bytes) `virtual thunk to'glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode()
// void `virtual thunk to'glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode( glitch::scene::CShadowVolumeSceneNode *this);
// [0xf57930] (15 bytes) `virtual thunk to'glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode()
// void `virtual thunk to'glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode( glitch::scene::CShadowVolumeSceneNode *this);
// [0xf57940] (56 bytes) glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode()
// void glitch::scene::CShadowVolumeSceneNode::~CShadowVolumeSceneNode( glitch::scene::CShadowVolumeSceneNode *this);
// [0xf57980] (15 bytes) `virtual thunk to'glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode()
// void `virtual thunk to'glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode( glitch::scene::CShadowProjectionSceneNode *this);
// [0xf57990] (15 bytes) `virtual thunk to'glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode()
// void `virtual thunk to'glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode( glitch::scene::CShadowProjectionSceneNode *this);
// [0xf579a0] (368 bytes) glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode()
// void glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode( glitch::scene::CShadowProjectionSceneNode *this);
// [0xf57b10] (15 bytes) `virtual thunk to'glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode()
// void `virtual thunk to'glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode( glitch::scene::CShadowProjectionSceneNode *this);
// [0xf57b20] (15 bytes) `virtual thunk to'glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode()
// void `virtual thunk to'glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode( glitch::scene::CShadowProjectionSceneNode *this);
// [0xf57b30] (56 bytes) glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode()
// void glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode( glitch::scene::CShadowProjectionSceneNode *this);
// [0xf57b70] (360 bytes) glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode()
// void glitch::scene::CShadowProjectionSceneNode::~CShadowProjectionSceneNode( glitch::scene::CShadowProjectionSceneNode *this, int *a2);
// [0xf57ce0] (1308 bytes) glitch::scene::CTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::CMatrix4<float> const*)const
// int *glitch::scene::CTriangleSelector::getTriangles( glitch::scene::CTriangleSelector *this, glitch::core::triangle3d<float> *a2, int a3, int *a4, const glitch::core::CMatrix4<float> *a5);
// [0xf58200] (972 bytes) glitch::scene::COctTreeTriangleSelector::getTrianglesFromOctTreeLine(glitch::scene::COctTreeTriangleSelector::SOctTreeNode *)const
// int glitch::scene::COctTreeTriangleSelector::getTrianglesFromOctTreeLine( glitch::scene::COctTreeTriangleSelector *this, glitch::scene::COctTreeTriangleSelector::SOctTreeNode *a2);
// [0xf585d0] (141 bytes) glitch::scene::CSceneManager::removeShadowReceiverTarget(boost::intrusive_ptr<glitch::video::ITexture> const&)
// void glitch::scene::CSceneManager::removeShadowReceiverTarget( glitch::scene::CSceneManager *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2);
// [0xf58a20] (1813 bytes) glitch::scene::CShadowVolumeStaticSceneNode::load(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// int glitch::scene::CShadowVolumeStaticSceneNode::load( glitch::scene::CShadowVolumeStaticSceneNode *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2);
// [0xf59140] (381 bytes) glitch::scene::CShadowVolumeStaticSceneNode::CShadowVolumeStaticSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::io::IReadFile> const&)
// glitch::scene::CShadowVolumeStaticSceneNode *glitch::scene::CShadowVolumeStaticSceneNode::CShadowVolumeStaticSceneNode( __m128d a1, glitch::scene::CShadowVolumeStaticSceneNode *this, glitch::video::IVideoDriver *a3, const boost::intrusive_ptr<glitch::io::IReadFile> *a4);
// [0xf592c0] (361 bytes) glitch::scene::CShadowVolumeStaticSceneNode::CShadowVolumeStaticSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::io::IReadFile> const&)
// glitch::scene::CShadowVolumeStaticSceneNode *glitch::scene::CShadowVolumeStaticSceneNode::CShadowVolumeStaticSceneNode( __m128d a1, glitch::scene::CShadowVolumeStaticSceneNode *this, glitch::video::IVideoDriver *a3, const boost::intrusive_ptr<glitch::io::IReadFile> *a4, boost::intrusive_ptr<glitch::io::IReadFile> *a5);
// [0xf59430] (285 bytes) glitch::scene::CTerrainSceneNode::preRenderIndicesCalculations(void)
// void glitch::scene::CTerrainSceneNode::preRenderIndicesCalculations(glitch::scene::CTerrainSceneNode *this);
// [0xf59550] (84 bytes) glitch::scene::CTerrainSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CTerrainSceneNode::onRegisterSceneNodeInternal(glitch::scene::CTerrainSceneNode *this);
// [0xf595b0] (1544 bytes) glitch::scene::CCameraSceneNode::recalculateMatrices(void)
// int glitch::scene::CCameraSceneNode::recalculateMatrices( glitch::scene::CCameraSceneNode *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24);
// [0xf59c20] (2741 bytes) glitch::scene::CSceneManager::drawShadowReceivers(void)
// void glitch::scene::CSceneManager::drawShadowReceivers(glitch::scene::CSceneManager *this);
// [0xf5a6e0] (1449 bytes) glitch::scene::CTriangleSelector::CTriangleSelector(boost::intrusive_ptr<glitch::scene::IMesh const> const&,glitch::scene::ISceneNode const*,bool)
// float *glitch::scene::CTriangleSelector::CTriangleSelector(int a1, uint32_t *a2, int a3, char a4);
// [0xf5ac90] (1334 bytes) glitch::scene::CTriangleSelector::CTriangleSelector(boost::intrusive_ptr<glitch::scene::CMeshBuffer const> const&,glitch::scene::ISceneNode const*,bool,int,int)
// float *glitch::scene::CTriangleSelector::CTriangleSelector( glitch::scene::CTriangleSelector *a1, const glitch::scene::CMeshBuffer **a2, int a3, char a4, int a5, int a6);
// [0xf5b1d0] (5864 bytes) glitch::scene::CTriangle3DTree::SData::SData(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,glitch::core::CMatrix4<float> const&,unsigned int,unsigned int)
// glitch::scene::CTriangle3DTree::SData *glitch::scene::CTriangle3DTree::SData::SData( glitch::scene::CTriangle3DTree::SData *this, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a2, const glitch::core::CMatrix4<float> *a3, unsigned int a4, unsigned int a5);
// [0xf5c8c0] (87 bytes) glitch::scene::CTriangle3DTree::constructData(glitch::scene::CTriangle3DTree::SData *,glitch::scene::SDrawInfo const&,glitch::core::CMatrix4<float> const&,void *)
// glitch::scene::CTriangle3DTree::SData *glitch::scene::CTriangle3DTree::constructData( glitch::scene::CTriangle3DTree *this, glitch::scene::CTriangle3DTree::SData *a2, const glitch::scene::SDrawInfo *a3, const glitch::core::CMatrix4<float> *a4);
// [0xf5c920] (358 bytes) glitch::scene::CLightSceneNode::~CLightSceneNode()
// void glitch::scene::CLightSceneNode::~CLightSceneNode( glitch::scene::CLightSceneNode *this, volatile int32_t **a2);
// [0xf5ca90] (3653 bytes) glitch::scene::CSkyBoxSceneNode::renderInternal(void *)
// 0xf5ca90 glitch::scene::CSkyBoxSceneNode::renderInternal(void *)
// [0xf5d8e0] (361 bytes) glitch::scene::CSkyCubeSceneNode::renderInternal(void *)
// volatile int32_t *glitch::scene::CSkyCubeSceneNode::renderInternal( glitch::scene::CSkyCubeSceneNode *this);
// [0xf5da50] (385 bytes) glitch::scene::CSkyDomeSceneNode::renderInternal(void *)
// volatile int32_t *glitch::scene::CSkyDomeSceneNode::renderInternal( glitch::scene::CSkyDomeSceneNode *this);
// [0xf5dbe0] (15 bytes) `virtual thunk to'glitch::scene::CLightSceneNode::~CLightSceneNode()
// void `virtual thunk to'glitch::scene::CLightSceneNode::~CLightSceneNode(glitch::scene::CLightSceneNode *this);
// [0xf5dbf0] (15 bytes) `virtual thunk to'glitch::scene::CLightSceneNode::~CLightSceneNode()
// void `virtual thunk to'glitch::scene::CLightSceneNode::~CLightSceneNode(glitch::scene::CLightSceneNode *this);
// [0xf5dc00] (380 bytes) glitch::scene::CLightSceneNode::~CLightSceneNode()
// void glitch::scene::CLightSceneNode::~CLightSceneNode(glitch::scene::CLightSceneNode *this);
// [0xf5dd80] (15 bytes) `virtual thunk to'glitch::scene::CLightSceneNode::~CLightSceneNode()
// void `virtual thunk to'glitch::scene::CLightSceneNode::~CLightSceneNode(glitch::scene::CLightSceneNode *this);
// [0xf5dd90] (15 bytes) `virtual thunk to'glitch::scene::CLightSceneNode::~CLightSceneNode()
// void `virtual thunk to'glitch::scene::CLightSceneNode::~CLightSceneNode(glitch::scene::CLightSceneNode *this);
// [0xf5dda0] (56 bytes) glitch::scene::CLightSceneNode::~CLightSceneNode()
// void glitch::scene::CLightSceneNode::~CLightSceneNode(glitch::scene::CLightSceneNode *this);
// [0xf5dde0] (1308 bytes) glitch::scene::CTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::aabbox3d<float> const&,glitch::core::CMatrix4<float> const*)const
// uint32_t *glitch::scene::CTriangleSelector::getTriangles( int a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0xf5e300] (107 bytes) glitch::scene::CTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::line3d<float> const&,glitch::core::CMatrix4<float> const*)const
// uint32_t *glitch::scene::CTriangleSelector::getTriangles(uint32_t *a1, int a2, int a3, uint32_t *a4, int a5, int a6);
// [0xf5e370] (114 bytes) glitch::scene::COctTreeTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::line3d<float> const&,glitch::core::CMatrix4<float> const*)const
// uint32_t *glitch::scene::COctTreeTriangleSelector::getTriangles( int a1, int a2, int a3, uint32_t *a4, int a5, int a6);
// [0xf5e3f0] (1316 bytes) glitch::scene::COctTreeTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::aabbox3d<float> const&,glitch::core::CMatrix4<float> const*)const
// uint32_t *glitch::scene::COctTreeTriangleSelector::getTriangles( int a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0xf5e920] (903 bytes) glitch::scene::CCameraSceneNode::recalculateProjectionMatrix(void)
// void glitch::scene::CCameraSceneNode::recalculateProjectionMatrix(glitch::scene::CCameraSceneNode *this);
// [0xf5ecb0] (170 bytes) glitch::scene::CCameraSceneNode::setProjectionMatrix(glitch::core::CMatrix4<float> const&,bool)
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::setProjectionMatrix( glitch::scene::CCameraSceneNode *this, const glitch::core::CMatrix4<float> *a2, bool a3);
// [0xf5ed60] (643 bytes) glitch::scene::ISceneNode::updateAbsolutePositionInternal(void)
// int glitch::scene::ISceneNode::updateAbsolutePositionInternal(glitch::scene::ISceneNode *this);
// [0xf60c20] (1467 bytes) glitch::scene::ISceneNode::setAbsoluteTransformation(glitch::core::CMatrix4<float> const&)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::setAbsoluteTransformation( glitch::scene::ISceneNode *this, const glitch::core::CMatrix4<float> *a2);
// [0xf611e0] (1205 bytes) glitch::scene::CShadowProjectionSceneNode::renderInternal(void *)
// int glitch::scene::CShadowProjectionSceneNode::renderInternal( glitch::scene::CShadowProjectionSceneNode *this, char *a2);
// [0xf660b0] (119 bytes) glitch::scene::CSceneManager::registerSceneNodeFactory(boost::intrusive_ptr<glitch::scene::ISceneNodeFactory> const&)
// int glitch::scene::CSceneManager::registerSceneNodeFactory(int a1, int *a2);
// [0xf66130] (493 bytes) glitch::scene::CSceneManager::init(void)
// volatile int32_t *glitch::scene::CSceneManager::init(glitch::scene::CSceneManager *this);
// [0xf66320] (981 bytes) glitch::scene::CSceneManager::CSceneManager(boost::intrusive_ptr<glitch::video::IVideoDriver> const&,boost::intrusive_ptr<glitch::io::IFileSystem> const&,boost::intrusive_ptr<glitch::scene::ICuller> const&)
// volatile int32_t *glitch::scene::CSceneManager::CSceneManager( glitch::IObject *a1, uint32_t *a2, int *a3, volatile int32_t **a4);
// [0xf66700] (957 bytes) glitch::scene::CSceneManager::CSceneManager(boost::intrusive_ptr<glitch::video::IVideoDriver> const&,boost::intrusive_ptr<glitch::io::IFileSystem> const&,boost::intrusive_ptr<glitch::scene::ICuller> const&)
// volatile int32_t *glitch::scene::CSceneManager::CSceneManager( glitch::IObject *a1, int *a2, uint32_t *a3, int *a4, volatile int32_t **a5);
// [0xf66ac0] (428 bytes) glitch::scene::CSceneManager::addShadowReceiverTarget(boost::intrusive_ptr<glitch::scene::IShadowReceiverTarget> const&)
// char *glitch::scene::CSceneManager::addShadowReceiverTarget(uint32_t *a1, int *a2);
// [0xf66cf0] (101 bytes) glitch::scene::CMetaTriangleSelector::addTriangleSelector(boost::intrusive_ptr<glitch::scene::ITriangleSelector> const&)
// int glitch::scene::CMetaTriangleSelector::addTriangleSelector(int a1, int *a2);
// [0xf66d60] (834 bytes) glitch::scene::CTerrainSceneNode::getIndicesForPatch(std::vector<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>> &,int,int,int)
// int glitch::scene::CTerrainSceneNode::getIndicesForPatch( glitch::scene::CTerrainSceneNode *this, std::vector<unsigned int, glitch::core::SAllocator<unsigned int, (glitch::memory::E_MEMORY_HINT)0>> *a2, int a3, int a4, int a5);
// [0xf670b0] (2590 bytes) glitch::scene::CTerrainTriangleSelector::setTriangleData(glitch::scene::CTerrainSceneNode *,int)
// int glitch::scene::CTerrainTriangleSelector::setTriangleData( glitch::scene::CTerrainTriangleSelector *this, glitch::scene::CTerrainSceneNode *a2, int a3);
// [0xf67ad0] (106 bytes) glitch::scene::CTerrainTriangleSelector::CTerrainTriangleSelector(glitch::scene::CTerrainSceneNode *,int)
// glitch::scene::CTerrainTriangleSelector *glitch::scene::CTerrainTriangleSelector::CTerrainTriangleSelector( glitch::scene::CTerrainTriangleSelector *this, glitch::scene::CTerrainSceneNode *a2, int a3);
// [0xf67b40] (188 bytes) glitch::scene::CTriangle3DTree::makeLeafData(unsigned int const*,unsigned int const*)
// int glitch::scene::CTriangle3DTree::makeLeafData(glitch::scene::CTriangle3DTree *this, uint8_t *src, char *a3);
// [0xf685e0] (4693 bytes) glitch::scene::CSceneManager::renderListsCompile(glitch::video::IVideoDriver *)
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::renderListsCompile( glitch::scene::CSceneManager *this, glitch::video::IVideoDriver *a2);
// [0xf69840] (4297 bytes) glitch::scene::CSceneManager::renderLists(glitch::video::IVideoDriver *,bool)
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::renderLists( glitch::scene::CSceneManager *this, glitch::video::IVideoDriver *a2, char a3);
// [0xf6a910] (395 bytes) glitch::scene::CSceneManager::registerIKAnimator(boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK>)
// uint32_t *glitch::scene::CSceneManager::registerIKAnimator( uint32_t *a1, const boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *a2);
// [0xf6aaa0] (2278 bytes) glitch::scene::COctTreeTriangleSelector::constructOctTree(glitch::scene::COctTreeTriangleSelector::SOctTreeNode *)
// int glitch::scene::COctTreeTriangleSelector::constructOctTree( glitch::scene::COctTreeTriangleSelector *this, glitch::scene::COctTreeTriangleSelector::SOctTreeNode *a2);
// [0xf6b390] (417 bytes) glitch::scene::COctTreeTriangleSelector::COctTreeTriangleSelector(boost::intrusive_ptr<glitch::scene::IMesh> const&,glitch::scene::ISceneNode const*,int,bool)
// int glitch::scene::COctTreeTriangleSelector::COctTreeTriangleSelector( glitch::os::Timer *a1, volatile int32_t **a2, int a3, int a4, char a5);
// [0xf72470] (1777 bytes) glitch::scene::CShadowVolumeSceneNode::SSilhouette::createSilhouette(glitch::core::vector3d<float> const&,glitch::video::E_LIGHT_TYPE,boost::intrusive_ptr<glitch::scene::CMeshBuffer const> const&)
// int glitch::scene::CShadowVolumeSceneNode::SSilhouette::createSilhouette(uint32_t *a1, float *a2, int a3, int a4);
// [0xf72b70] (2301 bytes) glitch::scene::CShadowVolumeSceneNode::createSilhouetteVolume(boost::intrusive_ptr<glitch::scene::CMeshBuffer const> const&,glitch::video::CPrimitiveStream::SMapBuffer<unsigned short const> const&,unsigned int,glitch::core::vector3d<float> const&,glitch::video::E_LIGHT_TYPE,glitch::scene::CShadowVolumeSceneNode::CShadowVolume *,bool)
// unsigned int glitch::scene::CShadowVolumeSceneNode::createSilhouetteVolume( int a1, volatile int32_t **a2, int a3, int a4, float *a5, int a6, int a7, char a8);
// [0xf73470] (1846 bytes) glitch::scene::CShadowVolumeSceneNode::createShadowVolume(boost::intrusive_ptr<glitch::scene::CMeshBuffer const> const&,glitch::core::vector3d<float> const&,glitch::video::E_LIGHT_TYPE)
// 0xf73470 glitch::scene::CShadowVolumeSceneNode::createShadowVolume(boost::intrusive_ptr<glitch::scene::CMeshBuffer const> const&,glitch::core::vector3d<float> const&,glitch::video::E_LIGHT_TYPE)
// [0xf73bb0] (1619 bytes) glitch::scene::CShadowVolumeSceneNode::updateShadowVolumes(void)
// void glitch::scene::CShadowVolumeSceneNode::updateShadowVolumes(glitch::scene::CShadowVolumeSceneNode *this);
// [0xf75860] (1118 bytes) glitch::scene::CTriangle3DTree::build(glitch::scene::CTriangle3DTree::STriangle const*,unsigned int,glitch::core::IStatic3DTree::ICostFunction *,unsigned int,unsigned int)
// void glitch::scene::CTriangle3DTree::build(const void **a1, const void *a2, int a3, int a4, int a5, int a6);
// [0xf75cc0] (1292 bytes) glitch::scene::CTriangle3DTree::build(glitch::scene::CSceneManager *,boost::intrusive_ptr<glitch::scene::ISceneNode> const&,glitch::core::IStatic3DTree::ICostFunction *,unsigned int,unsigned int,unsigned int)
// 0xf75cc0 glitch::scene::CTriangle3DTree::build(glitch::scene::CSceneManager *,boost::intrusive_ptr<glitch::scene::ISceneNode> const&,glitch::core::IStatic3DTree::ICostFunction *,unsigned int,unsigned int,unsigned int)
// [0xf761d0] (983 bytes) glitch::scene::CStreamingSceneNode::addSwappableItem(glitch::streaming::SPriorityFrameSwappable const&)
// int glitch::scene::CStreamingSceneNode::addSwappableItem(int *a1, uint32_t *a2);
// [0xf765b0] (27 bytes) glitch::scene::ITriangleSelector::~ITriangleSelector()
// void glitch::scene::ITriangleSelector::~ITriangleSelector(glitch::scene::ITriangleSelector *this);
// [0xf765d0] (27 bytes) glitch::scene::INodeRegisterer::~INodeRegisterer()
// void glitch::scene::INodeRegisterer::~INodeRegisterer(glitch::scene::INodeRegisterer *this);
// [0xf76630] (27 bytes) glitch::scene::ISceneNodeFactory::~ISceneNodeFactory()
// void glitch::scene::ISceneNodeFactory::~ISceneNodeFactory(glitch::scene::ISceneNodeFactory *this);
// [0xf76650] (12 bytes) glitch::scene::CTerrainSceneNode::getType(void)const
// int glitch::scene::CTerrainSceneNode::getType();
// [0xf76680] (12 bytes) glitch::scene::CSceneManagerRootNode::getType(void)const
// int glitch::scene::CSceneManagerRootNode::getType();
// [0xf76690] (15 bytes) `virtual thunk to'glitch::scene::CSceneManagerRootNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `virtual thunk to'glitch::scene::CSceneManagerRootNode::serializeAttributes(uint32_t *a1, int a2, int a3);
// [0xf766a0] (43 bytes) glitch::scene::CSceneManagerRootNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::scene::CSceneManagerRootNode::serializeAttributes(int a1, int a2, int a3);
// [0xf766d0] (15 bytes) `virtual thunk to'glitch::scene::CSceneManagerRootNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `virtual thunk to'glitch::scene::CSceneManagerRootNode::deserializeAttributes(uint32_t *a1, int a2, int a3);
// [0xf766e0] (43 bytes) glitch::scene::CSceneManagerRootNode::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int glitch::scene::CSceneManagerRootNode::deserializeAttributes(int a1, int a2, int a3);
// [0xf76710] (27 bytes) glitch::scene::CNodeRegistrationCounter::~CNodeRegistrationCounter()
// void glitch::scene::CNodeRegistrationCounter::~CNodeRegistrationCounter( glitch::scene::CNodeRegistrationCounter *this);
// [0xf76730] (27 bytes) glitch::scene::CTriangle3DTree::SCountPass::~SCountPass()
// void glitch::scene::CTriangle3DTree::SCountPass::~SCountPass(glitch::scene::CTriangle3DTree::SCountPass *this);
// [0xf76770] (27 bytes) glitch::scene::CRenderDataToCullingDataGatherer::~CRenderDataToCullingDataGatherer()
// void glitch::scene::CRenderDataToCullingDataGatherer::~CRenderDataToCullingDataGatherer( glitch::scene::CRenderDataToCullingDataGatherer *this);
// [0xf76790] (27 bytes) glitch::scene::CFlattenCuller::~CFlattenCuller()
// void glitch::scene::CFlattenCuller::~CFlattenCuller(glitch::scene::CFlattenCuller *this);
// [0xf76830] (45 bytes) glitch::scene::CRenderDataToCullingDataGatherer::~CRenderDataToCullingDataGatherer()
// void glitch::scene::CRenderDataToCullingDataGatherer::~CRenderDataToCullingDataGatherer( glitch::scene::CRenderDataToCullingDataGatherer *this);
// [0xf76890] (45 bytes) glitch::scene::CTriangle3DTree::SCountPass::~SCountPass()
// void glitch::scene::CTriangle3DTree::SCountPass::~SCountPass(glitch::scene::CTriangle3DTree::SCountPass *this);
// [0xf768c0] (45 bytes) glitch::scene::CNodeRegistrationCounter::~CNodeRegistrationCounter()
// void glitch::scene::CNodeRegistrationCounter::~CNodeRegistrationCounter( glitch::scene::CNodeRegistrationCounter *this);
// [0xf76920] (45 bytes) glitch::scene::ISceneNodeFactory::~ISceneNodeFactory()
// void glitch::scene::ISceneNodeFactory::~ISceneNodeFactory(glitch::scene::ISceneNodeFactory *this);
// [0xf769b0] (45 bytes) glitch::scene::INodeRegisterer::~INodeRegisterer()
// void glitch::scene::INodeRegisterer::~INodeRegisterer(glitch::scene::INodeRegisterer *this);
// [0xf769e0] (45 bytes) glitch::scene::ITriangleSelector::~ITriangleSelector()
// void glitch::scene::ITriangleSelector::~ITriangleSelector(glitch::scene::ITriangleSelector *this);
// [0xf76a10] (45 bytes) glitch::scene::CFlattenCuller::~CFlattenCuller()
// void glitch::scene::CFlattenCuller::~CFlattenCuller(glitch::scene::CFlattenCuller *this);
// [0xf76a40] (77 bytes) glitch::scene::CTriangleSelector::~CTriangleSelector()
// void glitch::scene::CTriangleSelector::~CTriangleSelector(glitch::scene::CTriangleSelector *this);
// [0xf76a90] (77 bytes) glitch::scene::CTriangle3DTree::SGatherTrianglesPass::~SGatherTrianglesPass()
// void glitch::scene::CTriangle3DTree::SGatherTrianglesPass::~SGatherTrianglesPass( glitch::scene::CTriangle3DTree::SGatherTrianglesPass *this);
// [0xf76ae0] (97 bytes) glitch::scene::CTriangle3DTree::SCountPass::process(glitch::scene::CSceneManager *,std::vector<glitch::scene::SDrawInfo,glitch::core::SAllocator<glitch::scene::SDrawInfo,(glitch::memory::E_MEMORY_HINT)0>> &,glitch::scene::SRenderTree *)
// unsigned int glitch::scene::CTriangle3DTree::SCountPass::process(int a1, int a2, int *a3);
// [0xf76b50] (85 bytes) glitch::scene::CTriangle3DTree::SGatherTrianglesPass::~SGatherTrianglesPass()
// void glitch::scene::CTriangle3DTree::SGatherTrianglesPass::~SGatherTrianglesPass( glitch::scene::CTriangle3DTree::SGatherTrianglesPass *this);
// [0xf76bb0] (85 bytes) glitch::scene::CTriangleSelector::~CTriangleSelector()
// void glitch::scene::CTriangleSelector::~CTriangleSelector(glitch::scene::CTriangleSelector *this);
// [0xf76c10] (175 bytes) glitch::scene::CDefaultSceneNodeFactory::~CDefaultSceneNodeFactory()
// void glitch::scene::CDefaultSceneNodeFactory::~CDefaultSceneNodeFactory(volatile int32_t **this);
// [0xf76cc0] (183 bytes) glitch::scene::CDefaultSceneNodeFactory::~CDefaultSceneNodeFactory()
// void glitch::scene::CDefaultSceneNodeFactory::~CDefaultSceneNodeFactory(volatile int32_t **this);
// [0xf76e50] (94 bytes) glitch::scene::CRegisterProxySceneNode::~CRegisterProxySceneNode()
// void glitch::scene::CRegisterProxySceneNode::~CRegisterProxySceneNode( glitch::scene::CRegisterProxySceneNode *this);
// [0xf76f80] (102 bytes) glitch::scene::CRegisterProxySceneNode::~CRegisterProxySceneNode()
// void glitch::scene::CRegisterProxySceneNode::~CRegisterProxySceneNode( glitch::scene::CRegisterProxySceneNode *this);
// [0xf76ff0] (951 bytes) glitch::scene::CTriangleSelector::testWithBox(std::vector<glitch::core::triangle3d<float>,glitch::core::SAllocator<glitch::core::triangle3d<float>,(glitch::memory::E_MEMORY_HINT)0>> &)const
// int glitch::scene::CTriangleSelector::testWithBox( glitch::scene::CTriangleSelector *this, std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xf773b0] (2825 bytes) glitch::scene::COctTreeTriangleSelector::SOctTreeNode::~SOctTreeNode()
// void glitch::scene::COctTreeTriangleSelector::SOctTreeNode::~SOctTreeNode( glitch::scene::COctTreeTriangleSelector::SOctTreeNode *this);
// [0xf78d60] (751 bytes) glitch::scene::CTriangle3DTree::SGatherTrianglesPass::process(glitch::scene::CSceneManager *,std::vector<glitch::scene::SDrawInfo,glitch::core::SAllocator<glitch::scene::SDrawInfo,(glitch::memory::E_MEMORY_HINT)0>> &,glitch::scene::SRenderTree *)
// int glitch::scene::CTriangle3DTree::SGatherTrianglesPass::process( int a1, int a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, unsigned int a12);
// [0xf790d0] (15 bytes) `virtual thunk to'glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode()
// void `virtual thunk to'glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode( glitch::scene::CSceneManagerRootNode *this);
// [0xf790e0] (15 bytes) `virtual thunk to'glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode()
// void `virtual thunk to'glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode( glitch::scene::CSceneManagerRootNode *this);
// [0xf790f0] (125 bytes) glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode()
// void glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode(glitch::scene::CSceneManagerRootNode *this);
// [0xf79170] (15 bytes) `virtual thunk to'glitch::scene::CStreamingSceneNode::~CStreamingSceneNode()
// void `virtual thunk to'glitch::scene::CStreamingSceneNode::~CStreamingSceneNode( glitch::scene::CStreamingSceneNode *this);
// [0xf79180] (15 bytes) `virtual thunk to'glitch::scene::CStreamingSceneNode::~CStreamingSceneNode()
// void `virtual thunk to'glitch::scene::CStreamingSceneNode::~CStreamingSceneNode( glitch::scene::CStreamingSceneNode *this);
// [0xf79190] (242 bytes) glitch::scene::CStreamingSceneNode::~CStreamingSceneNode()
// void glitch::scene::CStreamingSceneNode::~CStreamingSceneNode(glitch::scene::CStreamingSceneNode *this);
// [0xf79290] (15 bytes) `virtual thunk to'glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode()
// void `virtual thunk to'glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode( glitch::scene::CSkyBoxSceneNode *this);
// [0xf792a0] (15 bytes) `virtual thunk to'glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode()
// void `virtual thunk to'glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode( glitch::scene::CSkyBoxSceneNode *this);
// [0xf792b0] (253 bytes) glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode()
// void glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode(glitch::scene::CSkyBoxSceneNode *this);
// [0xf793b0] (15 bytes) `virtual thunk to'glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode()
// void `virtual thunk to'glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode( glitch::scene::CSkyCubeSceneNode *this);
// [0xf793c0] (15 bytes) `virtual thunk to'glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode()
// void `virtual thunk to'glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode( glitch::scene::CSkyCubeSceneNode *this);
// [0xf793d0] (210 bytes) glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode()
// void glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode(glitch::scene::CSkyCubeSceneNode *this);
// [0xf794b0] (15 bytes) `virtual thunk to'glitch::scene::CLODSceneNode::~CLODSceneNode()
// void `virtual thunk to'glitch::scene::CLODSceneNode::~CLODSceneNode(glitch::scene::CLODSceneNode *this);
// [0xf794c0] (15 bytes) `virtual thunk to'glitch::scene::CLODSceneNode::~CLODSceneNode()
// void `virtual thunk to'glitch::scene::CLODSceneNode::~CLODSceneNode(glitch::scene::CLODSceneNode *this);
// [0xf794d0] (145 bytes) glitch::scene::CLODSceneNode::~CLODSceneNode()
// void glitch::scene::CLODSceneNode::~CLODSceneNode(glitch::scene::CLODSceneNode *this);
// [0xf79570] (15 bytes) `virtual thunk to'glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode()
// void `virtual thunk to'glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode( glitch::scene::CSceneManagerRootNode *this);
// [0xf79580] (15 bytes) `virtual thunk to'glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode()
// void `virtual thunk to'glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode( glitch::scene::CSceneManagerRootNode *this);
// [0xf79590] (121 bytes) glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode()
// void glitch::scene::CSceneManagerRootNode::~CSceneManagerRootNode(glitch::scene::CSceneManagerRootNode *this);
// [0xf79610] (15 bytes) `virtual thunk to'glitch::scene::CLODSceneNode::~CLODSceneNode()
// void `virtual thunk to'glitch::scene::CLODSceneNode::~CLODSceneNode(glitch::scene::CLODSceneNode *this);
// [0xf79620] (15 bytes) `virtual thunk to'glitch::scene::CLODSceneNode::~CLODSceneNode()
// void `virtual thunk to'glitch::scene::CLODSceneNode::~CLODSceneNode(glitch::scene::CLODSceneNode *this);
// [0xf79630] (153 bytes) glitch::scene::CLODSceneNode::~CLODSceneNode()
// void glitch::scene::CLODSceneNode::~CLODSceneNode(glitch::scene::CLODSceneNode *this);
// [0xf796d0] (15 bytes) `virtual thunk to'glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode()
// void `virtual thunk to'glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode( glitch::scene::CSkyCubeSceneNode *this);
// [0xf796e0] (15 bytes) `virtual thunk to'glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode()
// void `virtual thunk to'glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode( glitch::scene::CSkyCubeSceneNode *this);
// [0xf796f0] (221 bytes) glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode()
// void glitch::scene::CSkyCubeSceneNode::~CSkyCubeSceneNode(glitch::scene::CSkyCubeSceneNode *this);
// [0xf797d0] (15 bytes) `virtual thunk to'glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode()
// void `virtual thunk to'glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode( glitch::scene::CSkyBoxSceneNode *this);
// [0xf797e0] (15 bytes) `virtual thunk to'glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode()
// void `virtual thunk to'glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode( glitch::scene::CSkyBoxSceneNode *this);
// [0xf797f0] (261 bytes) glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode()
// void glitch::scene::CSkyBoxSceneNode::~CSkyBoxSceneNode(glitch::scene::CSkyBoxSceneNode *this);
// [0xf79900] (15 bytes) `virtual thunk to'glitch::scene::CStreamingSceneNode::~CStreamingSceneNode()
// void `virtual thunk to'glitch::scene::CStreamingSceneNode::~CStreamingSceneNode( glitch::scene::CStreamingSceneNode *this);
// [0xf79910] (15 bytes) `virtual thunk to'glitch::scene::CStreamingSceneNode::~CStreamingSceneNode()
// void `virtual thunk to'glitch::scene::CStreamingSceneNode::~CStreamingSceneNode( glitch::scene::CStreamingSceneNode *this);
// [0xf79920] (250 bytes) glitch::scene::CStreamingSceneNode::~CStreamingSceneNode()
// void glitch::scene::CStreamingSceneNode::~CStreamingSceneNode(glitch::scene::CStreamingSceneNode *this);
// [0xf79df0] (812 bytes) glitch::scene::CTriangleSelector::testWithLine(std::vector<glitch::core::triangle3d<float>,glitch::core::SAllocator<glitch::core::triangle3d<float>,(glitch::memory::E_MEMORY_HINT)0>> &)const
// int glitch::scene::CTriangleSelector::testWithLine( glitch::scene::CTriangleSelector *this, std::vector<glitch::core::triangle3d<float>, glitch::core::SAllocator<glitch::core::triangle3d<float>, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xf7a660] (479 bytes) void glitch::scene::CSceneManager::renderList<glitch::scene::CSceneManager::SUnsortedNodeEntry>(glitch::scene::E_SCENE_NODE_RENDER_PASS,std::vector<glitch::scene::CSceneManager::SUnsortedNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SUnsortedNodeEntry,(glitch::memory::E_MEMORY_HINT)0>> &,bool)
// unsigned int glitch::scene::CSceneManager::renderList<glitch::scene::CSceneManager::SUnsortedNodeEntry>( uint32_t *a1, int a2, int *a3, char a4);
// [0xf7b640] (535 bytes) void glitch::scene::CTerrainSceneNode::preRenderIndicesCalculationsDirect<unsigned short>(unsigned short *)
// void glitch::scene::CTerrainSceneNode::preRenderIndicesCalculationsDirect<unsigned short>( glitch::scene::CTerrainSceneNode *this, uint16_t *a2);
// [0xf7b860] (526 bytes) void glitch::scene::CTerrainSceneNode::preRenderIndicesCalculationsDirect<unsigned int>(unsigned int *)
// void glitch::scene::CTerrainSceneNode::preRenderIndicesCalculationsDirect<unsigned int>( glitch::scene::CTerrainSceneNode *this, unsigned int *a2);
// [0xf7ba70] (1604 bytes) glitch::scene::CTriangleSelector::setup(glitch::core::triangle3d<float> *,int,glitch::core::CMatrix4<float> const*,glitch::core::line3d<float> const&)const
// int glitch::scene::CTriangleSelector::setup(int a1, int a2, int a3, uint32_t *a4, float *a5);
// [0xf7d9a0] (396 bytes) glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::SGeoMipMapTrianglePatch(glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch const&)
// int glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch::SGeoMipMapTrianglePatch( glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch *this, const glitch::scene::CTerrainTriangleSelector::SGeoMipMapTrianglePatch *a2);
