#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_scene_part02.h
// Library: glitch | Module: glitch_scene_part02
// Binary Address Span: 0xf0b530 .. 0xf4e2f0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xf0b530] (56 bytes) glitch::scene::CTextureAtlasCompilePass::~CTextureAtlasCompilePass()
// void glitch::scene::CTextureAtlasCompilePass::~CTextureAtlasCompilePass( glitch::scene::CTextureAtlasCompilePass *this);
// [0xf0c4b0] (1228 bytes) glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem::SArrayChoiceTreeItem(glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem const&)
// glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem *glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem::SArrayChoiceTreeItem( glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem *this, const glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem *a2);
// [0xf0c980] (618 bytes) glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem::operator=(glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem const&)
// glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem *glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem::operator=( glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem *this, const glitch::scene::CTextureAtlasCompilePass::SArrayChoiceTreeItem *a2);
// [0xf0cbf0] (1394 bytes) glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem::SFactorChoiceTreeItem(glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem const&)
// glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem *glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem::SFactorChoiceTreeItem( glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem *this, const glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem *a2);
// [0xf0d170] (2801 bytes) glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem::operator=(glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem const&)
// glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem *glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem::operator=( glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem *this, const glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem *a2);
// [0xf0e810] (231 bytes) glitch::scene::SAtlasArray::SAtlasArray(glitch::scene::SAtlasArray const&)
// int glitch::scene::SAtlasArray::SAtlasArray( glitch::scene::SAtlasArray *this, const glitch::scene::SAtlasArray *a2);
// [0xf0e900] (259 bytes) glitch::scene::SDrawInfo::SDrawInfo(glitch::scene::SDrawInfo const&)
// int glitch::scene::SDrawInfo::SDrawInfo(glitch::scene::SDrawInfo *this, const glitch::scene::SDrawInfo *a2);
// [0xf0ea10] (493 bytes) glitch::scene::SDrawInfo::operator=(glitch::scene::SDrawInfo const&)
// glitch::scene::SDrawInfo *glitch::scene::SDrawInfo::operator=( glitch::scene::SDrawInfo *this, const glitch::scene::SDrawInfo *a2);
// [0xf11a70] (149 bytes) glitch::scene::SMaterialInfo * std::copy_backward<glitch::scene::SMaterialInfo *,glitch::scene::SMaterialInfo *>(glitch::scene::SMaterialInfo *,glitch::scene::SMaterialInfo *,glitch::scene::SMaterialInfo *)
// int std::copy_backward<glitch::scene::SMaterialInfo *,glitch::scene::SMaterialInfo *>(int a1, int a2, int a3);
// [0xf143a0] (45 bytes) glitch::scene::CRangedBasedLODSelector::setName(char const*)
// const void **glitch::scene::CRangedBasedLODSelector::setName(const void **this, char *a2);
// [0xf143d0] (45 bytes) glitch::scene::CProjectionBasedLODSelector::setName(char const*)
// const void **glitch::scene::CProjectionBasedLODSelector::setName(const void **this, char *a2);
// [0xf158f0] (150 bytes) glitch::scene::SMaterialInfo * std::__copy_move_a<false,glitch::scene::SMaterialInfo *,glitch::scene::SMaterialInfo *>(glitch::scene::SMaterialInfo *,glitch::scene::SMaterialInfo *,glitch::scene::SMaterialInfo *)
// int std::__copy_move_a<false,glitch::scene::SMaterialInfo *,glitch::scene::SMaterialInfo *>( int a1, int a2, int a3);
// [0xf15990] (1328 bytes) glitch::scene::STextureAtlasArray::operator=(glitch::scene::STextureAtlasArray const&)
// glitch::scene::STextureAtlasArray *glitch::scene::STextureAtlasArray::operator=( glitch::scene::STextureAtlasArray *this, const glitch::scene::STextureAtlasArray *a2);
// [0xf1a960] (14 bytes) glitch::scene::CDefaultSceneNodeFactory::getCreatableSceneNodeTypeCount(void)const
// int glitch::scene::CDefaultSceneNodeFactory::getCreatableSceneNodeTypeCount( glitch::scene::CDefaultSceneNodeFactory *this);
// [0xf1a970] (37 bytes) glitch::scene::CDefaultSceneNodeFactory::getCreateableSceneNodeType(unsigned int)const
// int glitch::scene::CDefaultSceneNodeFactory::getCreateableSceneNodeType( glitch::scene::CDefaultSceneNodeFactory *this, unsigned int a2);
// [0xf1a9a0] (32 bytes) glitch::scene::CDefaultSceneNodeFactory::getCreateableSceneNodeTypeName(unsigned int)const
// int glitch::scene::CDefaultSceneNodeFactory::getCreateableSceneNodeTypeName( glitch::scene::CDefaultSceneNodeFactory *this, unsigned int a2);
// [0xf1a9c0] (62 bytes) glitch::scene::CDefaultSceneNodeFactory::getCreateableSceneNodeTypeName(glitch::scene::E_SCENE_NODE_TYPE)const
// int glitch::scene::CDefaultSceneNodeFactory::getCreateableSceneNodeTypeName(int a1, int a2);
// [0xf1aa00] (54 bytes) glitch::scene::CNodeRegistrationCounter::registerNode(glitch::scene::ISceneNode *,void const*,boost::intrusive_ptr<glitch::video::CMaterial> const&,void *,glitch::scene::E_SCENE_NODE_RENDER_PASS,glitch::core::vector3d<float> const*,int)
// int glitch::scene::CNodeRegistrationCounter::registerNode( int a1, int a2, int a3, int a4, int a5, unsigned int a6);
// [0xf1aa40] (15 bytes) `virtual thunk to'glitch::scene::CSceneManager::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `virtual thunk to'glitch::scene::CSceneManager::serializeAttributes(uint32_t *a1, int a2);
// [0xf1aa50] (185 bytes) glitch::scene::CSceneManager::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::scene::CSceneManager::serializeAttributes(int a1, int a2);
// [0xf1ab10] (155 bytes) glitch::scene::CSceneManager::registerSceneNodes(boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// int glitch::scene::CSceneManager::registerSceneNodes(uint32_t *a1, int a2);
// [0xf1abb0] (155 bytes) glitch::scene::CSceneManager::registerSceneNodes(std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>> const&)
// void glitch::scene::CSceneManager::registerSceneNodes( glitch::scene::CSceneManager *this, const std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>, glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xf1ac50] (243 bytes) glitch::scene::CSceneManager::registerSceneNodesCompile(boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// int glitch::scene::CSceneManager::registerSceneNodesCompile(int a1, int *a2);
// [0xf1ad50] (52 bytes) glitch::scene::CSceneManager::registerSceneNodesCompile(std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int glitch::scene::CSceneManager::registerSceneNodesCompile( glitch::scene::CSceneManager *this, const std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>, glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xf1ad90] (62 bytes) glitch::scene::CSceneManager::drawInit(glitch::video::IVideoDriver *)
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::drawInit( glitch::scene::CSceneManager *this, glitch::video::IVideoDriver *a2);
// [0xf1add0] (138 bytes) glitch::scene::CSceneManager::drawAll(std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>> const&,bool,bool)
// int glitch::scene::CSceneManager::drawAll( glitch::scene::CSceneManager *this, const std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>, glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>, (glitch::memory::E_MEMORY_HINT)0>> *a2, bool a3, bool a4);
// [0xf1ae60] (138 bytes) glitch::scene::CSceneManager::drawAll(boost::intrusive_ptr<glitch::scene::ISceneNode> const&,bool,bool)
// int glitch::scene::CSceneManager::drawAll(uint32_t *a1, int a2, char a3, uint8_t a4);
// [0xf1b1c0] (9 bytes) glitch::scene::CTriangle3DTree::preCompileBuildStep(glitch::scene::CSceneManager *,boost::intrusive_ptr<glitch::scene::ISceneNode> const&,unsigned int)
// int glitch::scene::CTriangle3DTree::preCompileBuildStep();
// [0xf1b1d0] (9 bytes) glitch::scene::CTriangle3DTree::preGatherTriangleBuildStep(void *,glitch::scene::CSceneManager *,std::vector<glitch::scene::SDrawInfo,glitch::core::SAllocator<glitch::scene::SDrawInfo,(glitch::memory::E_MEMORY_HINT)0>> &,glitch::scene::SRenderTree *)
// void glitch::scene::CTriangle3DTree::preGatherTriangleBuildStep();
// [0xf1b1e0] (9 bytes) glitch::scene::CTriangle3DTree::postCompileBuildStep(void *,glitch::scene::CSceneManager *,boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// void glitch::scene::CTriangle3DTree::postCompileBuildStep();
// [0xf1b1f0] (9 bytes) glitch::scene::CTriangle3DTree::cleanupBuildStep(void *)
// void glitch::scene::CTriangle3DTree::cleanupBuildStep();
// [0xf1b200] (73 bytes) glitch::scene::CMetaTriangleSelector::getTriangleCount(void)const
// int glitch::scene::CMetaTriangleSelector::getTriangleCount(glitch::scene::CMetaTriangleSelector *this);
// [0xf1b250] (135 bytes) glitch::scene::CMetaTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::CMatrix4<float> const*)const
// int *glitch::scene::CMetaTriangleSelector::getTriangles( glitch::scene::CMetaTriangleSelector *this, glitch::core::triangle3d<float> *a2, int a3, int *a4, const glitch::core::CMatrix4<float> *a5);
// [0xf1b2e0] (143 bytes) glitch::scene::CMetaTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::aabbox3d<float> const&,glitch::core::CMatrix4<float> const*)const
// uint32_t *glitch::scene::CMetaTriangleSelector::getTriangles(int a1, int a2, int a3, uint32_t *a4, int a5, int a6);
// [0xf1b370] (143 bytes) glitch::scene::CMetaTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::line3d<float> const&,glitch::core::CMatrix4<float> const*)const
// uint32_t *glitch::scene::CMetaTriangleSelector::getTriangles(int a1, int a2, int a3, uint32_t *a4, int a5, int a6);
// [0xf1b400] (12 bytes) glitch::scene::CTerrainTriangleSelector::getTriangleCount(void)const
// int glitch::scene::CTerrainTriangleSelector::getTriangleCount(glitch::scene::CTerrainTriangleSelector *this);
// [0xf1b410] (20 bytes) glitch::scene::CTriangleSelector::getTriangleCount(void)const
// int glitch::scene::CTriangleSelector::getTriangleCount(glitch::scene::CTriangleSelector *this);
// [0xf1b430] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::onRegisterSceneNodeInternal(void const*)
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::onRegisterSceneNodeInternal( glitch::scene::CBillboardSceneNode *this, const void *a2);
// [0xf1b440] (94 bytes) glitch::scene::CBillboardSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CBillboardSceneNode::onRegisterSceneNodeInternal( glitch::scene::CBillboardSceneNode *this, const void *a2);
// [0xf1b4a0] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getBoundingBox(void)const
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getBoundingBox( glitch::scene::CBillboardSceneNode *this);
// [0xf1b4b0] (14 bytes) glitch::scene::CBillboardSceneNode::getBoundingBox(void)const
// char *glitch::scene::CBillboardSceneNode::getBoundingBox(glitch::scene::CBillboardSceneNode *this);
// [0xf1b4c0] (160 bytes) glitch::scene::CBillboardSceneNode::setSize(glitch::core::dimension2d<float> const&)
// int glitch::scene::CBillboardSceneNode::setSize(int a1, float *a2);
// [0xf1b560] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getMaterialCount(void)const
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getMaterialCount( glitch::scene::CBillboardSceneNode *this);
// [0xf1b570] (12 bytes) glitch::scene::CBillboardSceneNode::getMaterialCount(void)const
// int glitch::scene::CBillboardSceneNode::getMaterialCount();
// [0xf1b580] (14 bytes) glitch::scene::CBillboardSceneNode::getSize(void)const
// char *glitch::scene::CBillboardSceneNode::getSize(glitch::scene::CBillboardSceneNode *this);
// [0xf1b590] (41 bytes) glitch::scene::CBillboardSceneNode::setColor(glitch::video::SColor const&)
// uint32_t *glitch::scene::CBillboardSceneNode::setColor(uint32_t *a1, uint32_t *a2);
// [0xf1b5c0] (47 bytes) glitch::scene::CBillboardSceneNode::setColor(glitch::video::SColor const&,glitch::video::SColor const&)
// uint32_t *glitch::scene::CBillboardSceneNode::setColor(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0xf1b5f0] (29 bytes) glitch::scene::CBillboardSceneNode::getColor(glitch::video::SColor &,glitch::video::SColor &)const
// uint32_t *glitch::scene::CBillboardSceneNode::getColor(int a1, uint32_t *a2, uint32_t *a3);
// [0xf1b610] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getType(void)const
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getType(glitch::scene::CBillboardSceneNode *this);
// [0xf1b620] (12 bytes) glitch::scene::CBillboardSceneNode::getType(void)const
// int glitch::scene::CBillboardSceneNode::getType();
// [0xf1b630] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::setAutomaticCulling(void const*,glitch::scene::E_CULLING_TYPE)
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::setAutomaticCulling(int a1, int a2, int a3);
// [0xf1b640] (17 bytes) glitch::scene::CBillboardSceneNode::setAutomaticCulling(void const*,glitch::scene::E_CULLING_TYPE)
// int glitch::scene::CBillboardSceneNode::setAutomaticCulling(int a1, int a2, int a3);
// [0xf1b660] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getAutomaticCulling(void const*)const
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getAutomaticCulling( glitch::scene::CBillboardSceneNode *this, const void *a2);
// [0xf1b670] (15 bytes) glitch::scene::CBillboardSceneNode::getAutomaticCulling(void const*)const
// int glitch::scene::CBillboardSceneNode::getAutomaticCulling(glitch::scene::CBillboardSceneNode *this);
// [0xf1b680] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getCullingData( glitch::scene::CBillboardSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1b690] (40 bytes) glitch::scene::CBillboardSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::CBillboardSceneNode::getCullingData( glitch::scene::CBillboardSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1b6c0] (12 bytes) glitch::scene::CCameraSceneNode::getType(void)const
// int glitch::scene::CCameraSceneNode::getType();
// [0xf1b6d0] (83 bytes) glitch::scene::CCameraSceneNode::onChangedSceneManager(void)
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::onChangedSceneManager( glitch::scene::CCameraSceneNode *this);
// [0xf1b730] (17 bytes) glitch::scene::CCameraSceneNode::setInputReceiverEnabled(bool)
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::setInputReceiverEnabled( glitch::scene::CCameraSceneNode *this, bool a2);
// [0xf1b750] (16 bytes) glitch::scene::CCameraSceneNode::isInputReceiverEnabled(void)const
// int glitch::scene::CCameraSceneNode::isInputReceiverEnabled(glitch::scene::CCameraSceneNode *this);
// [0xf1b760] (41 bytes) glitch::scene::CCameraSceneNode::getProjectionMatrix(void)const
// char *glitch::scene::CCameraSceneNode::getProjectionMatrix(glitch::scene::CCameraSceneNode *this);
// [0xf1b790] (14 bytes) glitch::scene::CCameraSceneNode::getViewMatrix(void)const
// char *glitch::scene::CCameraSceneNode::getViewMatrix(glitch::scene::CCameraSceneNode *this);
// [0xf1b7a0] (35 bytes) glitch::scene::CCameraSceneNode::setTarget(glitch::core::vector3d<float> const&)
// uint32_t *glitch::scene::CCameraSceneNode::setTarget(uint32_t *a1, uint32_t *a2);
// [0xf1b7d0] (14 bytes) glitch::scene::CCameraSceneNode::getTarget(void)const
// char *glitch::scene::CCameraSceneNode::getTarget(glitch::scene::CCameraSceneNode *this);
// [0xf1b7e0] (35 bytes) glitch::scene::CCameraSceneNode::setUpVector(glitch::core::vector3d<float> const&)
// uint32_t *glitch::scene::CCameraSceneNode::setUpVector(uint32_t *a1, uint32_t *a2);
// [0xf1b810] (14 bytes) glitch::scene::CCameraSceneNode::getUpVector(void)const
// char *glitch::scene::CCameraSceneNode::getUpVector(glitch::scene::CCameraSceneNode *this);
// [0xf1b820] (15 bytes) glitch::scene::CCameraSceneNode::getNearValue(void)const
// long double glitch::scene::CCameraSceneNode::getNearValue(glitch::scene::CCameraSceneNode *this);
// [0xf1b830] (15 bytes) glitch::scene::CCameraSceneNode::getFarValue(void)const
// long double glitch::scene::CCameraSceneNode::getFarValue(glitch::scene::CCameraSceneNode *this);
// [0xf1b840] (15 bytes) glitch::scene::CCameraSceneNode::getAspectRatio(void)const
// long double glitch::scene::CCameraSceneNode::getAspectRatio(glitch::scene::CCameraSceneNode *this);
// [0xf1b850] (15 bytes) glitch::scene::CCameraSceneNode::getFOV(void)const
// long double glitch::scene::CCameraSceneNode::getFOV(glitch::scene::CCameraSceneNode *this);
// [0xf1b860] (15 bytes) glitch::scene::CCameraSceneNode::getMAG(void)const
// long double glitch::scene::CCameraSceneNode::getMAG(glitch::scene::CCameraSceneNode *this);
// [0xf1b870] (16 bytes) glitch::scene::CCameraSceneNode::getFarToInifinity(void)
// int glitch::scene::CCameraSceneNode::getFarToInifinity(glitch::scene::CCameraSceneNode *this);
// [0xf1b880] (23 bytes) glitch::scene::CCameraSceneNode::setNearValue(float)
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::setNearValue( glitch::scene::CCameraSceneNode *this, float a2);
// [0xf1b8a0] (23 bytes) glitch::scene::CCameraSceneNode::setFarValue(float)
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::setFarValue( glitch::scene::CCameraSceneNode *this, float a2);
// [0xf1b8c0] (23 bytes) glitch::scene::CCameraSceneNode::setAspectRatio(float)
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::setAspectRatio( glitch::scene::CCameraSceneNode *this, float a2);
// [0xf1b8e0] (23 bytes) glitch::scene::CCameraSceneNode::setFOV(float)
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::setFOV( glitch::scene::CCameraSceneNode *this, float a2);
// [0xf1b900] (23 bytes) glitch::scene::CCameraSceneNode::setMAG(float)
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::setMAG( glitch::scene::CCameraSceneNode *this, float a2);
// [0xf1b920] (23 bytes) glitch::scene::CCameraSceneNode::setFarToInifinity(bool)
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::setFarToInifinity( glitch::scene::CCameraSceneNode *this, bool a2);
// [0xf1b940] (14 bytes) glitch::scene::CCameraSceneNode::getBoundingBox(void)const
// char *glitch::scene::CCameraSceneNode::getBoundingBox(glitch::scene::CCameraSceneNode *this);
// [0xf1b950] (14 bytes) glitch::scene::CCameraSceneNode::getViewFrustum(void)const
// char *glitch::scene::CCameraSceneNode::getViewFrustum(glitch::scene::CCameraSceneNode *this);
// [0xf1b960] (12 bytes) glitch::scene::CCameraTargetTrackerSceneNode::getType(void)const
// int glitch::scene::CCameraTargetTrackerSceneNode::getType();
// [0xf1b970] (42 bytes) glitch::scene::CCameraTargetTrackerSceneNode::setTarget(glitch::core::vector3d<float> const&)
// uint32_t *glitch::scene::CCameraTargetTrackerSceneNode::setTarget(uint32_t *a1, uint32_t *a2);
// [0xf1b9a0] (12 bytes) glitch::scene::CEmptySceneNode::getType(void)const
// int glitch::scene::CEmptySceneNode::getType();
// [0xf1b9b0] (9 bytes) glitch::scene::CEmptySceneNode::renderInternal(void *)
// void glitch::scene::CEmptySceneNode::renderInternal();
// [0xf1b9c0] (14 bytes) glitch::scene::CEmptySceneNode::getBoundingBox(void)const
// char *glitch::scene::CEmptySceneNode::getBoundingBox(glitch::scene::CEmptySceneNode *this);
// [0xf1b9d0] (12 bytes) glitch::scene::CLightSceneNode::getType(void)const
// int glitch::scene::CLightSceneNode::getType();
// [0xf1b9e0] (15 bytes) glitch::scene::CLightSceneNode::getAutomaticCulling(void const*)const
// int glitch::scene::CLightSceneNode::getAutomaticCulling(glitch::scene::CLightSceneNode *this);
// [0xf1b9f0] (17 bytes) glitch::scene::CLightSceneNode::setAutomaticCulling(void const*,glitch::scene::E_CULLING_TYPE)
// int glitch::scene::CLightSceneNode::setAutomaticCulling(int a1, int a2, int a3);
// [0xf1ba10] (37 bytes) glitch::scene::CLightSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::CLightSceneNode::getCullingData( glitch::scene::CLightSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1ba40] (12 bytes) glitch::scene::CLODSceneNode::getType(void)const
// int glitch::scene::CLODSceneNode::getType();
// [0xf1ba50] (9 bytes) glitch::scene::CLODSceneNode::renderInternal(void *)
// void glitch::scene::CLODSceneNode::renderInternal();
// [0xf1ba60] (14 bytes) glitch::scene::CLODSceneNode::getBoundingBox(void)const
// char *glitch::scene::CLODSceneNode::getBoundingBox(glitch::scene::CLODSceneNode *this);
// [0xf1ba70] (75 bytes) glitch::scene::CLODSceneNode::onRegisterSceneNodeCompileInternal(void const*)
// int glitch::scene::CLODSceneNode::onRegisterSceneNodeCompileInternal(glitch::scene::CLODSceneNode *this);
// [0xf1bac0] (27 bytes) glitch::scene::CMeshSceneNode::getBoundingBox(void)const
// int glitch::scene::CMeshSceneNode::getBoundingBox(glitch::scene::CMeshSceneNode *this);
// [0xf1bae0] (12 bytes) glitch::scene::CMeshSceneNode::getType(void)const
// int glitch::scene::CMeshSceneNode::getType();
// [0xf1baf0] (15 bytes) glitch::scene::CMeshSceneNode::getAutomaticCulling(void const*)const
// int glitch::scene::CMeshSceneNode::getAutomaticCulling(glitch::scene::CMeshSceneNode *this);
// [0xf1bb00] (17 bytes) glitch::scene::CMeshSceneNode::setAutomaticCulling(void const*,glitch::scene::E_CULLING_TYPE)
// int glitch::scene::CMeshSceneNode::setAutomaticCulling(int a1, int a2, int a3);
// [0xf1bb20] (9 bytes) glitch::scene::CRegisterProxySceneNode::renderInternal(void *)
// void glitch::scene::CRegisterProxySceneNode::renderInternal();
// [0xf1bb30] (9 bytes) glitch::scene::CRegisterProxySceneNode::renderCompileInternal(void *)
// void glitch::scene::CRegisterProxySceneNode::renderCompileInternal();
// [0xf1bb40] (67 bytes) glitch::scene::CRegisterProxySceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CRegisterProxySceneNode::onRegisterSceneNodeInternal( glitch::scene::CRegisterProxySceneNode *this);
// [0xf1bb90] (29 bytes) glitch::scene::CRegisterProxySceneNode::onRegisterSceneNodeCompileInternal(void const*)
// int glitch::scene::CRegisterProxySceneNode::onRegisterSceneNodeCompileInternal( glitch::scene::CRegisterProxySceneNode *this, const void *a2);
// [0xf1bbb0] (12 bytes) glitch::scene::CShadowProjectionSceneNode::getType(void)const
// int glitch::scene::CShadowProjectionSceneNode::getType();
// [0xf1bbc0] (27 bytes) glitch::scene::CShadowProjectionSceneNode::getBoundingBox(void)const
// int glitch::scene::CShadowProjectionSceneNode::getBoundingBox(glitch::scene::CShadowProjectionSceneNode *this);
// [0xf1bbe0] (27 bytes) glitch::scene::CShadowProjectionSceneNode::getTransformedBoundingBox(void)const
// int glitch::scene::CShadowProjectionSceneNode::getTransformedBoundingBox( glitch::scene::CShadowProjectionSceneNode *this);
// [0xf1bc00] (9 bytes) glitch::scene::CShadowVolumeSceneNode::load(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// int glitch::scene::CShadowVolumeSceneNode::load();
// [0xf1bc10] (14 bytes) glitch::scene::CShadowVolumeSceneNode::getBoundingBox(void)const
// char *glitch::scene::CShadowVolumeSceneNode::getBoundingBox(glitch::scene::CShadowVolumeSceneNode *this);
// [0xf1bc20] (12 bytes) glitch::scene::CShadowVolumeSceneNode::getType(void)const
// int glitch::scene::CShadowVolumeSceneNode::getType();
// [0xf1bc30] (9 bytes) glitch::scene::CShadowVolumeStaticSceneNode::setShadowMesh(boost::intrusive_ptr<glitch::scene::IMesh const> const&)
// void glitch::scene::CShadowVolumeStaticSceneNode::setShadowMesh();
// [0xf1bc40] (9 bytes) glitch::scene::CShadowVolumeStaticSceneNode::updateShadowVolumes(void)
// void glitch::scene::CShadowVolumeStaticSceneNode::updateShadowVolumes();
// [0xf1bc50] (14 bytes) glitch::scene::CShadowVolumeStaticSceneNode::getBoundingBox(void)const
// char *glitch::scene::CShadowVolumeStaticSceneNode::getBoundingBox( glitch::scene::CShadowVolumeStaticSceneNode *this);
// [0xf1bc60] (12 bytes) glitch::scene::CShadowVolumeStaticSceneNode::getType(void)const
// int glitch::scene::CShadowVolumeStaticSceneNode::getType();
// [0xf1bc70] (12 bytes) glitch::scene::CSkyBoxSceneNode::getType(void)const
// int glitch::scene::CSkyBoxSceneNode::getType();
// [0xf1bc80] (14 bytes) glitch::scene::CSkyBoxSceneNode::getBoundingBox(void)const
// char *glitch::scene::CSkyBoxSceneNode::getBoundingBox(glitch::scene::CSkyBoxSceneNode *this);
// [0xf1bc90] (12 bytes) glitch::scene::CSkyBoxSceneNode::getMaterialCount(void)const
// int glitch::scene::CSkyBoxSceneNode::getMaterialCount();
// [0xf1bca0] (37 bytes) glitch::scene::CSkyBoxSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::CSkyBoxSceneNode::getCullingData( glitch::scene::CSkyBoxSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1bcd0] (12 bytes) glitch::scene::CSkyCubeSceneNode::getType(void)const
// int glitch::scene::CSkyCubeSceneNode::getType();
// [0xf1bce0] (14 bytes) glitch::scene::CSkyCubeSceneNode::getBoundingBox(void)const
// char *glitch::scene::CSkyCubeSceneNode::getBoundingBox(glitch::scene::CSkyCubeSceneNode *this);
// [0xf1bcf0] (12 bytes) glitch::scene::CSkyCubeSceneNode::getMaterialCount(void)const
// int glitch::scene::CSkyCubeSceneNode::getMaterialCount();
// [0xf1bd00] (37 bytes) glitch::scene::CSkyCubeSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::CSkyCubeSceneNode::getCullingData( glitch::scene::CSkyCubeSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1bd30] (14 bytes) glitch::scene::CSkyDomeSceneNode::getBoundingBox(void)const
// char *glitch::scene::CSkyDomeSceneNode::getBoundingBox(glitch::scene::CSkyDomeSceneNode *this);
// [0xf1bd40] (91 bytes) glitch::scene::CSkyDomeSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CSkyDomeSceneNode::onRegisterSceneNodeInternal( glitch::scene::CSkyDomeSceneNode *this, const void *a2);
// [0xf1bda0] (12 bytes) glitch::scene::CSkyDomeSceneNode::getMaterialCount(void)const
// int glitch::scene::CSkyDomeSceneNode::getMaterialCount();
// [0xf1bdb0] (12 bytes) glitch::scene::CSkyDomeSceneNode::getType(void)const
// int glitch::scene::CSkyDomeSceneNode::getType();
// [0xf1bdc0] (37 bytes) glitch::scene::CSkyDomeSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::CSkyDomeSceneNode::getCullingData( glitch::scene::CSkyDomeSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1bdf0] (12 bytes) glitch::scene::CStereoCameraSceneNode::getType(void)const
// int glitch::scene::CStereoCameraSceneNode::getType();
// [0xf1be00] (12 bytes) glitch::scene::CStreamingSceneNode::getType(void)const
// int glitch::scene::CStreamingSceneNode::getType();
// [0xf1be10] (14 bytes) glitch::scene::CStreamingSceneNode::getBoundingBox(void)const
// char *glitch::scene::CStreamingSceneNode::getBoundingBox(glitch::scene::CStreamingSceneNode *this);
// [0xf1be20] (52 bytes) glitch::scene::CTerrainSceneNode::getMaterial(unsigned int)const
// glitch::scene::CTerrainSceneNode *glitch::scene::CTerrainSceneNode::getMaterial( glitch::scene::CTerrainSceneNode *this, unsigned int a2);
// [0xf1be60] (27 bytes) glitch::scene::CTerrainSceneNode::getMaterialCount(void)const
// int glitch::scene::CTerrainSceneNode::getMaterialCount(glitch::scene::CTerrainSceneNode *this);
// [0xf1be80] (14 bytes) glitch::scene::CTerrainSceneNode::getScale(void)const
// char *glitch::scene::CTerrainSceneNode::getScale(glitch::scene::CTerrainSceneNode *this);
// [0xf1be90] (14 bytes) glitch::scene::CTerrainSceneNode::getRotation(void)const
// char *glitch::scene::CTerrainSceneNode::getRotation(glitch::scene::CTerrainSceneNode *this);
// [0xf1bea0] (14 bytes) glitch::scene::CTerrainSceneNode::getPosition(void)const
// char *glitch::scene::CTerrainSceneNode::getPosition(glitch::scene::CTerrainSceneNode *this);
// [0xf1beb0] (14 bytes) glitch::scene::CTerrainSceneNode::getBoundingBox(void)const
// char *glitch::scene::CTerrainSceneNode::getBoundingBox(glitch::scene::CTerrainSceneNode *this);
// [0xf1bec0] (37 bytes) glitch::scene::CTerrainSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::CTerrainSceneNode::getCullingData( glitch::scene::CTerrainSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1bef0] (7 bytes) `non-virtual thunk to'glitch::scene::IBillboardSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int `non-virtual thunk to'glitch::scene::IBillboardSceneNode::getCullingData( glitch::scene::IBillboardSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1bf00] (40 bytes) glitch::scene::IBillboardSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::IBillboardSceneNode::getCullingData( glitch::scene::IBillboardSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1bf30] (9 bytes) glitch::scene::ICameraSceneNode::getAutomaticCulling(void const*)const
// int glitch::scene::ICameraSceneNode::getAutomaticCulling();
// [0xf1bf40] (37 bytes) glitch::scene::ICameraSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::ICameraSceneNode::getCullingData( glitch::scene::ICameraSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1bf70] (35 bytes) glitch::scene::IMeshSceneNode::setAsShadowCaster(bool)
// glitch::scene::IMeshSceneNode *glitch::scene::IMeshSceneNode::setAsShadowCaster( glitch::scene::IMeshSceneNode *this, bool a2);
// [0xf1bfa0] (17 bytes) glitch::scene::IMeshSceneNode::isShadowCaster(void)
// bool glitch::scene::IMeshSceneNode::isShadowCaster(glitch::scene::IMeshSceneNode *this);
// [0xf1bfc0] (37 bytes) glitch::scene::IMeshSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::IMeshSceneNode::getCullingData( glitch::scene::IMeshSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf1bff0] (27 bytes) glitch::scene::IRenderable::~IRenderable()
// void glitch::scene::IRenderable::~IRenderable(glitch::scene::IRenderable *this);
// [0xf1c010] (15 bytes) `virtual thunk to'glitch::scene::ISceneNode::onDelete(void)
// int `virtual thunk to'glitch::scene::ISceneNode::onDelete(glitch::scene::ISceneNode *this);
// [0xf1c020] (24 bytes) glitch::scene::ISceneNode::onDelete(void)
// int glitch::scene::ISceneNode::onDelete(glitch::scene::ISceneNode *this);
// [0xf1c040] (12 bytes) glitch::scene::ISceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::ISceneNode::onRegisterSceneNodeInternal();
// [0xf1c050] (35 bytes) glitch::scene::ISceneNode::onRegisterSceneNodeCompileInternal(void const*)
// int glitch::scene::ISceneNode::onRegisterSceneNodeCompileInternal( glitch::scene::ISceneNode *this, const void *a2);
// [0xf1c080] (9 bytes) glitch::scene::ISceneNode::renderInternal(void *)
// void glitch::scene::ISceneNode::renderInternal();
// [0xf1c090] (35 bytes) glitch::scene::ISceneNode::renderCompileInternal(void *)
// int glitch::scene::ISceneNode::renderCompileInternal(glitch::scene::ISceneNode *this, void *a2);
// [0xf1c0c0] (12 bytes) glitch::scene::ISceneNode::getRenderVertexCount(void *)const
// int glitch::scene::ISceneNode::getRenderVertexCount();
// [0xf1c0d0] (12 bytes) glitch::scene::ISceneNode::getName(void)const
// int glitch::scene::ISceneNode::getName(glitch::scene::ISceneNode *this);
// [0xf1c0e0] (917 bytes) glitch::scene::ISceneNode::getTransformedBoundingBox(void)const
// char *glitch::scene::ISceneNode::getTransformedBoundingBox(glitch::scene::ISceneNode *this);
// [0xf1c480] (61 bytes) glitch::scene::ISceneNode::getTransformedBoundingBox(void const*,glitch::core::aabbox3d<float> &)const
// int glitch::scene::ISceneNode::getTransformedBoundingBox(int a1, int a2, uint32_t *a3);
// [0xf1c4c0] (9 bytes) glitch::scene::ISceneNode::onChangedSceneManager(void)
// void glitch::scene::ISceneNode::onChangedSceneManager();
// [0xf1c4d0] (20 bytes) glitch::scene::ISceneNode::isVisible(void const*)const
// bool glitch::scene::ISceneNode::isVisible(glitch::scene::ISceneNode *this);
// [0xf1c4f0] (9 bytes) glitch::scene::ISceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// void glitch::scene::ISceneNode::getCullingData();
// [0xf1c500] (15 bytes) glitch::scene::ISceneNode::getID(void)const
// int glitch::scene::ISceneNode::getID(glitch::scene::ISceneNode *this);
// [0xf1c510] (17 bytes) glitch::scene::ISceneNode::setID(int)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::setID(glitch::scene::ISceneNode *this, int a2);
// [0xf1c530] (22 bytes) glitch::scene::ISceneNode::getUID(void)const
// void *glitch::scene::ISceneNode::getUID();
// [0xf1c550] (22 bytes) glitch::scene::ISceneNode::getScopeID(void)const
// void *glitch::scene::ISceneNode::getScopeID();
// [0xf1c570] (40 bytes) glitch::scene::ISceneNode::addChild(boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// int glitch::scene::ISceneNode::addChild(int a1, int a2);
// [0xf1c5a0] (40 bytes) glitch::scene::ISceneNode::addChildBlocking(boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// int glitch::scene::ISceneNode::addChildBlocking(int a1, int a2);
// [0xf1c5d0] (40 bytes) glitch::scene::ISceneNode::removeChild(boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// int glitch::scene::ISceneNode::removeChild(int a1, int a2);
// [0xf1c600] (65 bytes) glitch::scene::ISceneNode::removeAllDeferred(void)
// void glitch::scene::ISceneNode::removeAllDeferred(glitch::scene::ISceneNode *this);
// [0xf1c650] (13 bytes) glitch::scene::ISceneNode::getMaterial(unsigned int)const
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::getMaterial( glitch::scene::ISceneNode *this, unsigned int a2);
// [0xf1c660] (9 bytes) glitch::scene::ISceneNode::getMaterialCount(void)const
// int glitch::scene::ISceneNode::getMaterialCount();
// [0xf1c670] (14 bytes) glitch::scene::ISceneNode::getScale(void)const
// char *glitch::scene::ISceneNode::getScale(glitch::scene::ISceneNode *this);
// [0xf1c680] (150 bytes) glitch::scene::ISceneNode::setScale(glitch::core::vector3d<float> const&)
// uint32_t *glitch::scene::ISceneNode::setScale(uint32_t *a1, float *a2);
// [0xf1c720] (14 bytes) glitch::scene::ISceneNode::getRotation(void)const
// char *glitch::scene::ISceneNode::getRotation(glitch::scene::ISceneNode *this);
// [0xf1c730] (164 bytes) glitch::scene::ISceneNode::setRotation(glitch::core::quaternion const&)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::setRotation( glitch::scene::ISceneNode *this, const glitch::core::quaternion *a2);
// [0xf1c7e0] (14 bytes) glitch::scene::ISceneNode::getPosition(void)const
// char *glitch::scene::ISceneNode::getPosition(glitch::scene::ISceneNode *this);
// [0xf1c7f0] (134 bytes) glitch::scene::ISceneNode::setPosition(glitch::core::vector3d<float> const&)
// uint32_t *glitch::scene::ISceneNode::setPosition(uint32_t *a1, float *a2);
// [0xf1c880] (16 bytes) glitch::scene::ISceneNode::getAutomaticCulling(void const*)const
// int glitch::scene::ISceneNode::getAutomaticCulling(glitch::scene::ISceneNode *this);
// [0xf1c890] (9 bytes) glitch::scene::ISceneNode::getUserProperty(void)const
// int glitch::scene::ISceneNode::getUserProperty();
// [0xf1c8a0] (9 bytes) glitch::scene::ISceneNode::getUserPropertyStr(void)const
// int glitch::scene::ISceneNode::getUserPropertyStr();
// [0xf1c8b0] (218 bytes) glitch::scene::ISceneNode::setSceneManager(glitch::scene::CSceneManager *)
// int glitch::scene::ISceneNode::setSceneManager( glitch::scene::ISceneNode *this, glitch::scene::CSceneManager *a2);
// [0xf1c990] (12 bytes) glitch::scene::ISceneNode::getAbsoluteTransformation(void)const
// char *glitch::scene::ISceneNode::getAbsoluteTransformation(glitch::scene::ISceneNode *this);
// [0xf1c9a0] (12 bytes) glitch::scene::ISceneNode::getType(void)const
// int glitch::scene::ISceneNode::getType();
// [0xf1c9b0] (17 bytes) glitch::scene::ISceneNode::setCameraOffset(float)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::setCameraOffset( glitch::scene::ISceneNode *this, float a2);
// [0xf1c9d0] (15 bytes) glitch::scene::ISceneNode::getCameraOffset(void)const
// long double glitch::scene::ISceneNode::getCameraOffset(glitch::scene::ISceneNode *this);
// [0xf1c9e0] (17 bytes) glitch::scene::ISceneNode::setRenderingLayer(int)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::setRenderingLayer( glitch::scene::ISceneNode *this, int a2);
// [0xf1ca00] (15 bytes) glitch::scene::ISceneNode::getRenderingLayer(void)const
// int glitch::scene::ISceneNode::getRenderingLayer(glitch::scene::ISceneNode *this);
// [0xf1ca10] (9 bytes) glitch::scene::ISceneNode::setAsShadowCaster(bool)
// void glitch::scene::ISceneNode::setAsShadowCaster();
// [0xf1ca20] (43 bytes) glitch::scene::CShadowProjectionSceneNode::setAsShadowCaster(bool)
// void glitch::scene::CShadowProjectionSceneNode::setAsShadowCaster();
// [0xf1ca50] (9 bytes) glitch::scene::ISceneNode::isShadowCaster(void)
// int glitch::scene::ISceneNode::isShadowCaster();
// [0xf1ca60] (9 bytes) glitch::scene::ISceneNode::preRender(bool)
// void glitch::scene::ISceneNode::preRender();
// [0xf1ca70] (9 bytes) glitch::scene::ISceneNode::resetTransform(bool)
// void glitch::scene::ISceneNode::resetTransform();
// [0xf1ca80] (9 bytes) glitch::scene::ISceneNode::getRenderTree(glitch::scene::SRenderTree *)
// void glitch::scene::ISceneNode::getRenderTree();
// [0xf1ca90] (9 bytes) glitch::scene::ISceneNode::onVisibilityChange(bool)
// void glitch::scene::ISceneNode::onVisibilityChange();
// [0xf1caa0] (37 bytes) glitch::scene::IShadowVolumeSceneNode::getCullingData(glitch::scene::ICullingDataConsumer &)
// int glitch::scene::IShadowVolumeSceneNode::getCullingData( glitch::scene::IShadowVolumeSceneNode *this, glitch::scene::ICullingDataConsumer *a2);
// [0xf20d60] (56 bytes) glitch::scene::IRenderable::~IRenderable()
// void glitch::scene::IRenderable::~IRenderable(glitch::scene::IRenderable *this);
// [0xf20da0] (105 bytes) glitch::scene::CTerrainTriangleSelector::~CTerrainTriangleSelector()
// void glitch::scene::CTerrainTriangleSelector::~CTerrainTriangleSelector( glitch::scene::CTerrainTriangleSelector *this);
// [0xf20e10] (56 bytes) glitch::scene::CTerrainTriangleSelector::~CTerrainTriangleSelector()
// void glitch::scene::CTerrainTriangleSelector::~CTerrainTriangleSelector( glitch::scene::CTerrainTriangleSelector *this);
// [0xf20ee0] (58 bytes) glitch::scene::CTriangle3DTree::allocDataInternal(unsigned int,unsigned int &)
// int glitch::scene::CTriangle3DTree::allocDataInternal( glitch::scene::CTriangle3DTree *this, unsigned int a2, unsigned int *a3);
// [0xf20f20] (125 bytes) glitch::scene::CTriangle3DTree::allocTriangles(unsigned int)
// int glitch::scene::CTriangle3DTree::allocTriangles(glitch::scene::CTriangle3DTree *this, unsigned int a2);
// [0xf20fa0] (157 bytes) glitch::scene::CCameraSceneNode::renderInternal(void *)
// uint32_t *glitch::scene::CCameraSceneNode::renderInternal(glitch::scene::CCameraSceneNode *this);
// [0xf21040] (57 bytes) glitch::scene::CLightSceneNode::renderInternal(void *)
// int glitch::scene::CLightSceneNode::renderInternal(glitch::scene::CLightSceneNode *this);
// [0xf21080] (951 bytes) glitch::scene::CTriangle3DTree::intersectWithLeaf(unsigned int,unsigned int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&,float,float,glitch::core::SIntersectionInfo &)const
// bool glitch::scene::CTriangle3DTree::intersectWithLeaf( int a1, int a2, int a3, float *a4, float *a5, float a6, float a7, int a8);
// [0xf215a0] (70 bytes) glitch::scene::CRenderDataToCullingDataGatherer::registerNode(glitch::scene::ISceneNode *,void const*,boost::intrusive_ptr<glitch::video::CMaterial> const&,void *,glitch::scene::E_SCENE_NODE_RENDER_PASS,glitch::core::vector3d<float> const*,int)
// int glitch::scene::CRenderDataToCullingDataGatherer::registerNode( int a1, int a2, int a3, int a4, int a5, unsigned int a6);
// [0xf215f0] (183 bytes) glitch::scene::CShadowProjectionSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CShadowProjectionSceneNode::onRegisterSceneNodeInternal( glitch::scene::CShadowProjectionSceneNode *this, const void *a2);
// [0xf216b0] (33 bytes) glitch::scene::CMeshSceneNode::getMaterialCount(void)const
// int glitch::scene::CMeshSceneNode::getMaterialCount(glitch::scene::CMeshSceneNode *this);
// [0xf217b0] (81 bytes) glitch::scene::ISceneNode::onAnimate(float)
// int glitch::scene::ISceneNode::onAnimate(glitch::scene::ISceneNode *this, float a2);
// [0xf21810] (69 bytes) glitch::scene::ISceneNode::onUpdateTime(float)
// int glitch::scene::ISceneNode::onUpdateTime(glitch::scene::ISceneNode *this, float a2);
// [0xf21860] (10 bytes) `non-virtual thunk to'glitch::scene::CCameraSceneNode::OnEvent(glf::CoreEvent const&)
// int `non-virtual thunk to'glitch::scene::CCameraSceneNode::OnEvent(int a1, int a2);
// [0xf21870] (112 bytes) glitch::scene::CCameraSceneNode::OnEvent(glf::CoreEvent const&)
// int glitch::scene::CCameraSceneNode::OnEvent(int a1, int a2);
// [0xf232d0] (262 bytes) glitch::scene::CMeshSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CMeshSceneNode::onRegisterSceneNodeInternal( glitch::scene::CMeshSceneNode *this, const void *a2);
// [0xf24360] (654 bytes) glitch::scene::ISceneNode::setVisible(bool)
// char glitch::scene::ISceneNode::setVisible(glitch::scene::ISceneNode *this, bool a2);
// [0xf24860] (160 bytes) glitch::scene::ISceneNode::setName(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int *glitch::scene::ISceneNode::setName(glitch::scene::ISceneNode *this, int **a2);
// [0xf25c80] (304 bytes) glitch::scene::ISceneNode::setName(char const*)
// unsigned int glitch::scene::ISceneNode::setName(glitch::scene::ISceneNode *this, char *s);
// [0xf26be0] (206 bytes) glitch::scene::CSceneManager::setupCamera(void)
// int glitch::scene::CSceneManager::setupCamera(glitch::scene::CSceneManager *this);
// [0xf27150] (1931 bytes) glitch::scene::CSceneManager::registerNode(glitch::scene::ISceneNode *,void const*,boost::intrusive_ptr<glitch::video::CMaterial> const&,void *,glitch::scene::E_SCENE_NODE_RENDER_PASS,glitch::core::vector3d<float> const*,int)
// int glitch::scene::CSceneManager::registerNode( int a1, uint8_t *a2, int a3, glitch::video::CMaterial **a4, int a5, int a6, float *a7, int a8);
// [0xf27d10] (1143 bytes) glitch::scene::CTerrainTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::CMatrix4<float> const*)const
// int *glitch::scene::CTerrainTriangleSelector::getTriangles( glitch::scene::CTerrainTriangleSelector *this, glitch::core::triangle3d<float> *a2, int a3, int *a4, const glitch::core::CMatrix4<float> *a5);
// [0xf28190] (1231 bytes) glitch::scene::CTerrainTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::aabbox3d<float> const&,glitch::core::CMatrix4<float> const*)const
// uint32_t *glitch::scene::CTerrainTriangleSelector::getTriangles( uint32_t *a1, int a2, int a3, uint32_t *a4, float *a5, uint32_t *a6);
// [0xf28660] (1811 bytes) glitch::scene::CTerrainTriangleSelector::getTriangles(glitch::core::triangle3d<float> *,int,int &,glitch::core::line3d<float> const&,glitch::core::CMatrix4<float> const*)const
// uint32_t *glitch::scene::CTerrainTriangleSelector::getTriangles( uint32_t *a1, int a2, int a3, uint32_t *a4, float *a5, uint32_t *a6);
// [0xf2dab0] (34 bytes) glitch::scene::CCameraTargetTrackerSceneNode::getTargetNode(void)const
// glitch::scene::CCameraTargetTrackerSceneNode *glitch::scene::CCameraTargetTrackerSceneNode::getTargetNode( glitch::scene::CCameraTargetTrackerSceneNode *this, int a2);
// [0xf2dae0] (13 bytes) glitch::scene::CCameraSceneNode::getTargetNode(void)const
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::getTargetNode( glitch::scene::CCameraSceneNode *this);
// [0xf2daf0] (28 bytes) glitch::scene::CMeshSceneNode::getMesh(void)const
// glitch::scene::CMeshSceneNode *glitch::scene::CMeshSceneNode::getMesh( glitch::scene::CMeshSceneNode *this, int a2);
// [0xf2db10] (27 bytes) glitch::scene::CSkyDomeSceneNode::getMaterial(unsigned int)const
// glitch::scene::CSkyDomeSceneNode *glitch::scene::CSkyDomeSceneNode::getMaterial( glitch::scene::CSkyDomeSceneNode *this, unsigned int a2);
// [0xf2db30] (32 bytes) glitch::scene::CSkyBoxSceneNode::getMaterial(unsigned int)const
// glitch::scene::CSkyBoxSceneNode *glitch::scene::CSkyBoxSceneNode::getMaterial( glitch::scene::CSkyBoxSceneNode *this, unsigned int a2, int a3);
// [0xf2db50] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getMaterial(unsigned int)const
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::getMaterial( glitch::scene::CBillboardSceneNode *this, unsigned int a2);
// [0xf2db60] (27 bytes) glitch::scene::CBillboardSceneNode::getMaterial(unsigned int)const
// glitch::scene::CBillboardSceneNode *glitch::scene::CBillboardSceneNode::getMaterial( glitch::scene::CBillboardSceneNode *this, unsigned int a2);
// [0xf2dd50] (167 bytes) glitch::scene::ISceneNode::addAnimator(boost::intrusive_ptr<glitch::scene::ISceneNodeAnimator> const&)
// int glitch::scene::ISceneNode::addAnimator(int a1, int *a2);
// [0xf2de00] (138 bytes) glitch::scene::CLightSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CLightSceneNode::onRegisterSceneNodeInternal( glitch::scene::CLightSceneNode *this, const void *a2);
// [0xf2de90] (138 bytes) glitch::scene::CSkyCubeSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CSkyCubeSceneNode::onRegisterSceneNodeInternal( glitch::scene::CSkyCubeSceneNode *this, const void *a2);
// [0xf2df20] (138 bytes) glitch::scene::CSkyBoxSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CSkyBoxSceneNode::onRegisterSceneNodeInternal( glitch::scene::CSkyBoxSceneNode *this, const void *a2);
// [0xf2dfb0] (13 bytes) glitch::scene::CLODSceneNode::clone(void)const
// glitch::scene::CLODSceneNode *glitch::scene::CLODSceneNode::clone(glitch::scene::CLODSceneNode *this);
// [0xf2dfc0] (13 bytes) glitch::scene::CCameraSceneNode::clone(void)const
// glitch::scene::CCameraSceneNode *glitch::scene::CCameraSceneNode::clone( glitch::scene::CCameraSceneNode *this);
// [0xf2dfd0] (13 bytes) glitch::scene::CShadowVolumeSceneNode::clone(void)const
// glitch::scene::CShadowVolumeSceneNode *glitch::scene::CShadowVolumeSceneNode::clone( glitch::scene::CShadowVolumeSceneNode *this);
// [0xf2dfe0] (13 bytes) glitch::scene::CShadowVolumeStaticSceneNode::clone(void)const
// glitch::scene::CShadowVolumeStaticSceneNode *glitch::scene::CShadowVolumeStaticSceneNode::clone( glitch::scene::CShadowVolumeStaticSceneNode *this);
// [0xf2dff0] (13 bytes) glitch::scene::CStreamingSceneNode::clone(void)const
// glitch::scene::CStreamingSceneNode *glitch::scene::CStreamingSceneNode::clone( glitch::scene::CStreamingSceneNode *this);
// [0xf2e000] (13 bytes) glitch::scene::CSkyDomeSceneNode::clone(void)const
// glitch::scene::CSkyDomeSceneNode *glitch::scene::CSkyDomeSceneNode::clone( glitch::scene::CSkyDomeSceneNode *this);
// [0xf2e010] (107 bytes) glitch::scene::CMeshSceneNode::getMaterial(unsigned int)const
// glitch::scene::CMeshSceneNode *glitch::scene::CMeshSceneNode::getMaterial( glitch::scene::CMeshSceneNode *this, unsigned int a2, unsigned int a3);
// [0xf2e080] (49 bytes) glitch::scene::CSkyCubeSceneNode::getMaterial(unsigned int)const
// glitch::scene::CSkyCubeSceneNode *glitch::scene::CSkyCubeSceneNode::getMaterial( glitch::scene::CSkyCubeSceneNode *this, unsigned int a2, int a3);
// [0xf2e0c0] (236 bytes) glitch::scene::CShadowVolumeSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CShadowVolumeSceneNode::onRegisterSceneNodeInternal( glitch::scene::CShadowVolumeSceneNode *this, const void *a2);
// [0xf2e1b0] (269 bytes) glitch::scene::CShadowVolumeStaticSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CShadowVolumeStaticSceneNode::onRegisterSceneNodeInternal( glitch::scene::CShadowVolumeStaticSceneNode *this, const void *a2);
// [0xf2e2c0] (161 bytes) glitch::scene::CCameraSceneNode::onRegisterSceneNodeInternal(void const*)
// int glitch::scene::CCameraSceneNode::onRegisterSceneNodeInternal( glitch::scene::CCameraSceneNode *this, const void *a2);
// [0xf2e3e0] (161 bytes) glitch::scene::CShadowVolumeSceneNode::save(char const*,bool,glitch::core::CMatrix4<float> const&)
// int glitch::scene::CShadowVolumeSceneNode::save( glitch::scene::CShadowVolumeSceneNode *this, glf::CrcChecker *a2, bool a3, const glitch::core::CMatrix4<float> *a4);
// [0xf2e490] (150 bytes) glitch::scene::CSceneManager::saveScene(char const*,glitch::scene::ISceneUserDataSerializer *)
// int glitch::scene::CSceneManager::saveScene(uint32_t **a1, int a2, int a3);
// [0xf2e530] (399 bytes) glitch::scene::CShadowVolumeStaticSceneNode::save(char const*,bool,glitch::core::CMatrix4<float> const&)
// int glitch::scene::CShadowVolumeStaticSceneNode::save( glitch::scene::CShadowVolumeStaticSceneNode *this, char *a2);
// [0xf2e6c0] (200 bytes) glitch::scene::ISceneNode::removeChildInternal(boost::intrusive_ptr<glitch::scene::ISceneNode> const&,bool)
// int glitch::scene::ISceneNode::removeChildInternal(int a1, int **a2);
// [0xf2e790] (191 bytes) glitch::scene::ISceneNode::removeAnimator(boost::intrusive_ptr<glitch::scene::ISceneNodeAnimator> const&)
// void glitch::scene::ISceneNode::removeAnimator(int a1, uint32_t *a2);
// [0xf2e850] (182 bytes) glitch::scene::CSceneManager::loadScene(char const*,glitch::scene::ISceneUserDataSerializer *)
// int glitch::scene::CSceneManager::loadScene(int a1, int a2, int a3);
// [0xf2e910] (86 bytes) glitch::scene::CShadowVolumeSceneNode::setShadowMesh(boost::intrusive_ptr<glitch::scene::IMesh const> const&)
// int glitch::scene::CShadowVolumeSceneNode::setShadowMesh(int a1, int *a2);
// [0xf2e970] (65 bytes) glitch::scene::CMeshSceneNode::setMesh(boost::intrusive_ptr<glitch::scene::IMesh> const&)
// int glitch::scene::CMeshSceneNode::setMesh(int a1, int *a2);
// [0xf2e9c0] (105 bytes) glitch::scene::CMetaTriangleSelector::~CMetaTriangleSelector()
// void glitch::scene::CMetaTriangleSelector::~CMetaTriangleSelector(glitch::scene::CMetaTriangleSelector *this);
// [0xf2ea30] (56 bytes) glitch::scene::CMetaTriangleSelector::~CMetaTriangleSelector()
// void glitch::scene::CMetaTriangleSelector::~CMetaTriangleSelector(glitch::scene::CMetaTriangleSelector *this);
// [0xf2ea70] (65 bytes) glitch::scene::ISceneNode::setTriangleSelector(boost::intrusive_ptr<glitch::scene::ITriangleSelector> const&)
// int glitch::scene::ISceneNode::setTriangleSelector(int a1, int *a2);
// [0xf2eac0] (452 bytes) glitch::scene::CStreamingSceneNode::onAnimate(float)
// int glitch::scene::CStreamingSceneNode::onAnimate(glitch::scene::CStreamingSceneNode *this);
// [0xf2ee00] (501 bytes) glitch::scene::CShadowVolumeSceneNode::renderInternal(void *)
// glitch::scene::CShadowVolumeSceneNode *glitch::scene::CShadowVolumeSceneNode::renderInternal( glitch::scene::CShadowVolumeSceneNode *this, char *a2);
// [0xf2f000] (104 bytes) glitch::scene::CSceneManager::clear(void)
// volatile int32_t **glitch::scene::CSceneManager::clear(glitch::scene::CSceneManager *this);
// [0xf2f070] (442 bytes) glitch::scene::CShadowVolumeStaticSceneNode::renderInternal(void *)
// int32_t glitch::scene::CShadowVolumeStaticSceneNode::renderInternal( glitch::scene::CShadowVolumeStaticSceneNode *this, char *a2, int a3, volatile int32_t *a4, int a5, int a6, volatile int32_t *a7);
// [0xf2f230] (199 bytes) glitch::scene::ISceneNode::removeAnimators(void)
// char *glitch::scene::ISceneNode::removeAnimators(glitch::scene::ISceneNode *this);
// [0xf2f5a0] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::renderInternal(void *)
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::renderInternal( glitch::scene::CBillboardSceneNode *this, void *a2);
// [0xf2f5b0] (2924 bytes) glitch::scene::CBillboardSceneNode::renderInternal(void *)
// volatile int32_t *glitch::scene::CBillboardSceneNode::renderInternal( glitch::scene::CBillboardSceneNode *this, volatile int32_t *a2);
// [0xf30120] (173 bytes) glitch::scene::ISceneNode::removeAllBlocking(void)
// char *glitch::scene::ISceneNode::removeAllBlocking(glitch::scene::ISceneNode *this);
// [0xf301d0] (15 bytes) `virtual thunk to'glitch::scene::ISceneNode::~ISceneNode()
// void `virtual thunk to'glitch::scene::ISceneNode::~ISceneNode(glitch::scene::ISceneNode *this);
// [0xf301e0] (15 bytes) `virtual thunk to'glitch::scene::ISceneNode::~ISceneNode()
// void `virtual thunk to'glitch::scene::ISceneNode::~ISceneNode(glitch::scene::ISceneNode *this);
// [0xf301f0] (310 bytes) glitch::scene::ISceneNode::~ISceneNode()
// void glitch::scene::ISceneNode::~ISceneNode(glitch::scene::ISceneNode *this);
// [0xf30330] (15 bytes) `virtual thunk to'glitch::scene::ISceneNode::~ISceneNode()
// void `virtual thunk to'glitch::scene::ISceneNode::~ISceneNode(glitch::scene::ISceneNode *this);
// [0xf30340] (15 bytes) `virtual thunk to'glitch::scene::ISceneNode::~ISceneNode()
// void `virtual thunk to'glitch::scene::ISceneNode::~ISceneNode(glitch::scene::ISceneNode *this);
// [0xf30350] (56 bytes) glitch::scene::ISceneNode::~ISceneNode()
// void glitch::scene::ISceneNode::~ISceneNode(glitch::scene::ISceneNode *this);
// [0xf30390] (173 bytes) glitch::scene::ISceneNode::removeAll(void)
// char *glitch::scene::ISceneNode::removeAll(glitch::scene::ISceneNode *this);
// [0xf30440] (267 bytes) glitch::scene::CSceneManager::addSceneNode(char const*,glitch::scene::ISceneNode *)
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::addSceneNode( glitch::scene::CSceneManager *this, const char *a2, glitch::scene::ISceneNode *a3);
// [0xf30550] (249 bytes) glitch::scene::ISceneNode::removeDeferred(void)
// uint32_t *glitch::scene::ISceneNode::removeDeferred(glitch::scene::ISceneNode *this);
// [0xf30650] (349 bytes) glitch::scene::ISceneNode::addChildDeferred(boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// int glitch::scene::ISceneNode::addChildDeferred(uint32_t *a1, uint32_t **a2);
// [0xf30a50] (96 bytes) glitch::scene::ISceneNode::remove(void)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::remove(int **this);
// [0xf30ab0] (107 bytes) glitch::scene::ISceneNode::removeBlocking(void)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::removeBlocking(int **this);
// [0xf30b20] (546 bytes) glitch::scene::CTerrainSceneNode::renderInternal(void *)
// int *glitch::scene::CTerrainSceneNode::renderInternal(glitch::scene::CTerrainSceneNode *this, void *a2);
// [0xf30d50] (514 bytes) glitch::scene::CMeshSceneNode::renderInternal(void *)
// int glitch::scene::CMeshSceneNode::renderInternal(glitch::scene::CMeshSceneNode *this, void *a2);
// [0xf30f60] (122 bytes) glitch::scene::COctTreeTriangleSelector::~COctTreeTriangleSelector()
// void glitch::scene::COctTreeTriangleSelector::~COctTreeTriangleSelector( glitch::scene::COctTreeTriangleSelector *this);
// [0xf30fe0] (56 bytes) glitch::scene::COctTreeTriangleSelector::~COctTreeTriangleSelector()
// void glitch::scene::COctTreeTriangleSelector::~COctTreeTriangleSelector( glitch::scene::COctTreeTriangleSelector *this);
// [0xf361f0] (400 bytes) glitch::scene::CTriangle3DTree::getClippedBounds(glitch::core::aabbox3d<float> &,glitch::core::aabbox3d<float> const&,unsigned int)
// int glitch::scene::CTriangle3DTree::getClippedBounds(int a1, float *a2, float *a3, int a4);
// [0xf363e0] (2552 bytes) glitch::scene::CShadowVolumeSceneNode::save(boost::intrusive_ptr<glitch::io::IWriteFile> const&,bool,glitch::core::CMatrix4<float> const&,glitch::os::E_ENDIAN)
// int glitch::scene::CShadowVolumeSceneNode::save(uint32_t *a1, uint32_t *a2, char a3, int a4, int a5);
// [0xf38150] (2277 bytes) glitch::scene::CDefaultSceneNodeFactory::CDefaultSceneNodeFactory(glitch::scene::CSceneManager *,boost::intrusive_ptr<glitch::io::IFileSystem> const&)
// char *glitch::scene::CDefaultSceneNodeFactory::CDefaultSceneNodeFactory(uint32_t *a1, int a2, int *a3);
// [0xf38a40] (166 bytes) glitch::scene::CDefaultSceneNodeFactory::getTypeFromName(char const*)const
// int glitch::scene::CDefaultSceneNodeFactory::getTypeFromName( glitch::scene::CDefaultSceneNodeFactory *this, char *s);
// [0xf38af0] (110 bytes) glitch::scene::CDefaultSceneNodeFactory::addSceneNode(char const*,glitch::scene::ISceneNode *)
// glitch::scene::CDefaultSceneNodeFactory *glitch::scene::CDefaultSceneNodeFactory::addSceneNode( glitch::scene::CDefaultSceneNodeFactory *this, glitch::scene::CDefaultSceneNodeFactory *a2, glitch::scene::ISceneNode *a3);
// [0xf38b60] (126 bytes) glitch::scene::CSceneManager::setActiveCamera(boost::intrusive_ptr<glitch::scene::ICameraSceneNode> const&)
// uint32_t *glitch::scene::CSceneManager::setActiveCamera(uint32_t *a1, uint32_t **a2);
// [0xf38be0] (119 bytes) glitch::scene::CCameraSceneNode::remove(void)
// glitch::scene::ISceneNode *glitch::scene::CCameraSceneNode::remove(glitch::scene::CCameraSceneNode *this);
// [0xf38c60] (17 bytes) glitch::scene::CSceneManager::setMultithreading(bool)
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::setMultithreading( glitch::scene::CSceneManager *this, bool a2);
// [0xf38c80] (232 bytes) glitch::scene::CSceneManager::preRenderTransparentList(std::vector<glitch::scene::CSceneManager::STransparentNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::STransparentNodeEntry,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::scene::CSceneManager::preRenderTransparentList(int a1, int *a2);
// [0xf38d70] (33 bytes) glitch::scene::CSceneManager::setShadowColor(glitch::video::SColor)
// uint32_t *glitch::scene::CSceneManager::setShadowColor(uint32_t *a1, int a2);
// [0xf38da0] (155 bytes) glitch::scene::CSceneManager::addToDeletionQueue(glitch::scene::ISceneNode *)
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::addToDeletionQueue( glitch::scene::CSceneManager *this, glitch::scene::ISceneNode *a2);
// [0xf38e40] (157 bytes) glitch::scene::CSceneManager::clearDeletionList(void)
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::clearDeletionList(char **this);
// [0xf38ee0] (15 bytes) `virtual thunk to'glitch::scene::CSceneManager::~CSceneManager()
// void `virtual thunk to'glitch::scene::CSceneManager::~CSceneManager(glitch::scene::CSceneManager *this);
// [0xf38ef0] (15 bytes) `virtual thunk to'glitch::scene::CSceneManager::~CSceneManager()
// void `virtual thunk to'glitch::scene::CSceneManager::~CSceneManager(glitch::scene::CSceneManager *this);
// [0xf38f00] (1086 bytes) glitch::scene::CSceneManager::~CSceneManager()
// void glitch::scene::CSceneManager::~CSceneManager(glitch::scene::CSceneManager *this);
// [0xf39340] (15 bytes) `virtual thunk to'glitch::scene::CSceneManager::~CSceneManager()
// void `virtual thunk to'glitch::scene::CSceneManager::~CSceneManager(glitch::scene::CSceneManager *this);
// [0xf39350] (15 bytes) `virtual thunk to'glitch::scene::CSceneManager::~CSceneManager()
// void `virtual thunk to'glitch::scene::CSceneManager::~CSceneManager(glitch::scene::CSceneManager *this);
// [0xf39360] (56 bytes) glitch::scene::CSceneManager::~CSceneManager()
// void glitch::scene::CSceneManager::~CSceneManager(glitch::scene::CSceneManager *this);
// [0xf393a0] (1048 bytes) glitch::scene::CSceneManager::~CSceneManager()
// void glitch::scene::CSceneManager::~CSceneManager(glitch::scene::CSceneManager *this, int *a2);
// [0xf397c0] (21 bytes) glitch::scene::CSceneManager::setSceneNodeRenderPass(glitch::scene::E_SCENE_NODE_RENDER_PASS)
// int glitch::scene::CSceneManager::setSceneNodeRenderPass(int a1, int a2);
// [0xf397e0] (66 bytes) glitch::scene::CSceneManager::getSceneNodeFactory(unsigned int)const
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::getSceneNodeFactory( glitch::scene::CSceneManager *this, unsigned int a2, unsigned int a3);
// [0xf39830] (72 bytes) glitch::scene::CSceneManager::getDefaultSceneNodeFactory(void)const
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::getDefaultSceneNodeFactory( glitch::scene::CSceneManager *this, unsigned int a2);
// [0xf39880] (1129 bytes) glitch::scene::CSceneManager::readMaterials(boost::intrusive_ptr<glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>> const&,glitch::scene::ISceneNode *)
// int glitch::scene::CSceneManager::readMaterials(int a1, int *a2, int a3);
// [0xf39cf0] (1177 bytes) glitch::scene::CSceneManager::readUserData(boost::intrusive_ptr<glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>> const&,glitch::scene::ISceneNode *,glitch::scene::ISceneUserDataSerializer *)
// int glitch::scene::CSceneManager::readUserData(int a1, int *a2, int a3, int a4);
// [0xf3a190] (2245 bytes) glitch::scene::CSceneManager::readSceneNode(boost::intrusive_ptr<glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>> const&,glitch::scene::ISceneNode *,glitch::scene::ISceneUserDataSerializer *)
// int *glitch::scene::CSceneManager::readSceneNode(int a1, int *a2, int a3, const wchar_t *a4);
// [0xf3aa60] (249 bytes) glitch::scene::CSceneManager::loadScene(boost::intrusive_ptr<glitch::io::IReadFile> const&,glitch::scene::ISceneUserDataSerializer *)
// int glitch::scene::CSceneManager::loadScene(int a1, uint32_t *a2, int a3);
// [0xf3ab60] (93 bytes) glitch::scene::CSceneManager::getSceneNodeTypeName(glitch::scene::E_SCENE_NODE_TYPE)const
// int glitch::scene::CSceneManager::getSceneNodeTypeName(int a1, int a2);
// [0xf3abc0] (44 bytes) glitch::scene::CSceneManager::setAmbientLight(glitch::video::SColorf const&)
// uint32_t *glitch::scene::CSceneManager::setAmbientLight(uint32_t *a1, uint32_t *a2);
// [0xf3abf0] (17 bytes) glitch::scene::CSceneManager::setRegisterTransparentPassAsSolid(bool)
// glitch::scene::CSceneManager *glitch::scene::CSceneManager::setRegisterTransparentPassAsSolid( glitch::scene::CSceneManager *this, bool a2);
// [0xf3ac10] (45 bytes) glitch::scene::CSceneManager::getCurrentRenderedNode(void **,int *)const
// int glitch::scene::CSceneManager::getCurrentRenderedNode( glitch::scene::CSceneManager *this, void **a2, int *a3);
// [0xf3ac40] (45 bytes) glitch::scene::CSceneManager::getNextRenderedNode(void **,int *)const
// int glitch::scene::CSceneManager::getNextRenderedNode(glitch::scene::CSceneManager *this, void **a2, int *a3);
// [0xf3ac70] (434 bytes) glitch::scene::CSceneManager::removeShadowReceiverTarget(boost::intrusive_ptr<glitch::scene::IShadowReceiverTarget> const&)
// volatile int32_t **glitch::scene::CSceneManager::removeShadowReceiverTarget( int a1, volatile int32_t **a2);
// [0xf3ae30] (245 bytes) glitch::scene::CSceneManager::compile(std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>> const&,glitch::scene::IBatchCompiler *,glitch::scene::ISplitSegmentChoiceCallback *)
// int glitch::scene::CSceneManager::compile(glitch::scene::CSceneManager *a1, int a2, int a3);
// [0xf3af30] (269 bytes) glitch::scene::CSceneManager::compile(boost::intrusive_ptr<glitch::scene::ISceneNode> const&,glitch::scene::IBatchCompiler *,glitch::scene::ISplitSegmentChoiceCallback *)
// int glitch::scene::CSceneManager::compile(glitch::scene::CSceneManager *a1, int a2, int a3);
// [0xf3b040] (169 bytes) glitch::scene::CSceneManager::updateIKAnimators(float)
// unsigned int glitch::scene::CSceneManager::updateIKAnimators(glitch::scene::CSceneManager *this, float a2);
// [0xf3b0f0] (37 bytes) glitch::scene::CSceneManager::setThreadAsOwner(void)
// pthread_t glitch::scene::CSceneManager::setThreadAsOwner(glitch::scene::CSceneManager *this);
// [0xf3b120] (173 bytes) glitch::scene::CTriangle3DTree::SData::SData(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&)
// int glitch::scene::CTriangle3DTree::SData::SData( glitch::scene::CTriangle3DTree::SData *this, const boost::intrusive_ptr<glitch::video::CVertexStreams const> *a2);
// [0xf3b1d0] (65 bytes) glitch::scene::CTriangle3DTree::constructData(glitch::scene::CTriangle3DTree::SData *,glitch::scene::SDrawInfo const&,void *)
// glitch::scene::CTriangle3DTree::SData *glitch::scene::CTriangle3DTree::constructData( glitch::scene::CTriangle3DTree *this, glitch::scene::CTriangle3DTree::SData *a2, const glitch::scene::SDrawInfo *a3);
// [0xf3b220] (91 bytes) glitch::scene::CTriangle3DTree::SData::~SData()
// void glitch::scene::CTriangle3DTree::SData::~SData(glitch::scene::CTriangle3DTree::SData *this);
// [0xf3b280] (82 bytes) glitch::scene::CTriangle3DTree::deleteData(unsigned int,glitch::scene::CTriangle3DTree::SData *)
// void glitch::scene::CTriangle3DTree::deleteData( void **this, unsigned int a2, glitch::scene::CTriangle3DTree::SData *a3);
// [0xf3b2e0] (108 bytes) glitch::scene::CTriangle3DTree::CTriangle3DTree(void)
// void (**glitch::scene::CTriangle3DTree::CTriangle3DTree( glitch::scene::CTriangle3DTree *this))(glitch::scene::CTriangle3DTree *__hidden this);
// [0xf3b350] (195 bytes) glitch::scene::CTriangle3DTree::clear(bool,bool)
// int glitch::scene::CTriangle3DTree::clear(glitch::scene::CTriangle3DTree *this, bool a2, bool a3);
// [0xf3b420] (113 bytes) glitch::scene::CTriangle3DTree::~CTriangle3DTree()
// void glitch::scene::CTriangle3DTree::~CTriangle3DTree(glitch::scene::CTriangle3DTree *this);
// [0xf3b4a0] (56 bytes) glitch::scene::CTriangle3DTree::~CTriangle3DTree()
// void glitch::scene::CTriangle3DTree::~CTriangle3DTree(glitch::scene::CTriangle3DTree *this);
// [0xf3b4e0] (87 bytes) glitch::scene::CTriangle3DTree::allocData(unsigned int,unsigned int &)
// int glitch::scene::CTriangle3DTree::allocData( glitch::scene::CTriangle3DTree *this, unsigned int a2, unsigned int *a3);
// [0xf3b540] (2750 bytes) glitch::scene::createHillPlaneMesh(unsigned int,glitch::video::IVideoDriver *,glitch::core::dimension2d<float> const&,glitch::core::dimension2d<unsigned int> const&,boost::intrusive_ptr<glitch::video::CMaterial> const&,boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap> const&,float,glitch::core::dimension2d<float> const&,glitch::core::dimension2d<float> const&)
// volatile int32_t **glitch::scene::createHillPlaneMesh( volatile int32_t **a1, int a2, int *a3, float *a4, int *a5, glitch::video::CMaterial **a6, glitch::video::CMaterialVertexAttributeMap ***a7, float a8, unsigned int *a9, float *a10);
// [0xf3c000] (3812 bytes) glitch::scene::createSphereMesh(unsigned int,glitch::video::IVideoDriver *,float,unsigned int,unsigned int,glitch::video::E_BUFFER_USAGE,glitch::core::vector3d<float>,glitch::video::SColor const&)
// volatile int32_t **glitch::scene::createSphereMesh( volatile int32_t **a1, int a2, int *a3, float a4, unsigned int a5, unsigned int a6, int a7, float *a8, int *a9);
// [0xf3cef0] (3131 bytes) glitch::scene::createCubeMesh(unsigned int,glitch::video::IVideoDriver *,float,glitch::video::SColor const&,glitch::video::E_BUFFER_USAGE)
// volatile int32_t **glitch::scene::createCubeMesh( volatile int32_t **a1, int a2, int *a3, float a4, int *a5, int a6);
// [0xf3db30] (3107 bytes) glitch::scene::createCylinderMesh(unsigned int,glitch::video::IVideoDriver *,float,float,unsigned int,glitch::video::SColor const&,bool,float,glitch::video::E_BUFFER_USAGE)
// volatile int32_t **glitch::scene::createCylinderMesh( volatile int32_t **a1, int a2, int *a3, float a4, float a5, unsigned int a6, uint32_t *a7, char a8, float a9, int a10);
// [0xf3e760] (1795 bytes) glitch::scene::createConeMesh(unsigned int,glitch::video::IVideoDriver *,float,float,unsigned int,glitch::video::SColor const&,glitch::video::SColor const&,float,glitch::video::E_BUFFER_USAGE)
// volatile int32_t **glitch::scene::createConeMesh( volatile int32_t **a1, int a2, int *a3, float a4, int a5, unsigned int a6, uint32_t *a7, uint32_t *a8, int a9, int a10);
// [0xf3ee70] (769 bytes) glitch::scene::createArrowMesh(unsigned int,glitch::video::IVideoDriver *,unsigned int,unsigned int,float,float,float,float,glitch::video::SColor,glitch::video::SColor,glitch::video::E_BUFFER_USAGE)
// uint32_t *glitch::scene::createArrowMesh( int a1, int a2, int *a3, unsigned int a4, unsigned int a5, float a6, float a7, float a8, float a9, int a10, int a11, int a12);
// [0xf3f180] (1850 bytes) glitch::scene::createPlaneMesh(unsigned int,glitch::video::IVideoDriver *,float,glitch::video::SColor const&,glitch::video::E_BUFFER_USAGE)
// volatile int32_t **glitch::scene::createPlaneMesh( volatile int32_t **a1, int a2, int *a3, float a4, uint32_t *a5, int a6);
// [0xf3f8c0] (1590 bytes) glitch::scene::createFrustrumMesh(unsigned int,glitch::video::IVideoDriver *,float,float,float,float,float,float,glitch::video::SColor const&,glitch::video::E_BUFFER_USAGE)
// volatile int32_t **glitch::scene::createFrustrumMesh( volatile int32_t **a1, int a2, int *a3, int a4, int a5, int a6, int a7, float a8, float a9, uint32_t *a10, int a11);
// [0xf3ff00] (202 bytes) glitch::scene::SUpdateTimeTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SUpdateTimeTraversal::traverse( glitch::scene::SUpdateTimeTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf3ffd0] (359 bytes) glitch::scene::SUpdateAbsolutePositionTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SUpdateAbsolutePositionTraversal::traverse( glitch::scene::SUpdateAbsolutePositionTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf40140] (399 bytes) glitch::scene::SAnimateAndUpdateAbsolutePositionTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SAnimateAndUpdateAbsolutePositionTraversal::traverse( glitch::scene::SAnimateAndUpdateAbsolutePositionTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf402d0] (56 bytes) glitch::scene::CSceneManager::updateTask(glitch::scene::ISceneNode *)
// int glitch::scene::CSceneManager::updateTask(glitch::scene::CSceneManager *this, glitch::scene::ISceneNode *a2);
// [0xf40310] (1345 bytes) glitch::scene::CSceneManager::update(float,bool)
// int glitch::scene::CSceneManager::update(glitch::scene::CSceneManager *this, float a2, bool a3);
// [0xf40860] (202 bytes) glitch::scene::SSetAsShadowCasterTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SSetAsShadowCasterTraversal::traverse( glitch::scene::SSetAsShadowCasterTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf40930] (650 bytes) glitch::scene::SGetShadowCasterTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetShadowCasterTraversal::traverse( glitch::scene::SGetShadowCasterTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf40bc0] (254 bytes) glitch::scene::SSetAsAnimatedTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SSetAsAnimatedTraversal::traverse( glitch::scene::SSetAsAnimatedTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf40cc0] (267 bytes) glitch::scene::SGetSceneNodeFromNameTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodeFromNameTraversal::traverse( glitch::scene::SGetSceneNodeFromNameTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf40dd0] (267 bytes) glitch::scene::SGetSceneNodeFromScopeIDTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodeFromScopeIDTraversal::traverse( glitch::scene::SGetSceneNodeFromScopeIDTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf40ee0] (267 bytes) glitch::scene::SGetSceneNodeFromUIDTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodeFromUIDTraversal::traverse( glitch::scene::SGetSceneNodeFromUIDTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf40ff0] (216 bytes) glitch::scene::SGetSceneNodeFromIDTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodeFromIDTraversal::traverse( glitch::scene::SGetSceneNodeFromIDTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf410d0] (176 bytes) glitch::scene::CSceneManager::getSceneNodeFromId(int,boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// uint32_t *glitch::scene::CSceneManager::getSceneNodeFromId( uint32_t *a1, int a2, int a3, glitch::scene::ISceneNode **a4);
// [0xf41180] (256 bytes) glitch::scene::SGetSceneNodeFromTypeTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodeFromTypeTraversal::traverse( glitch::scene::SGetSceneNodeFromTypeTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf41280] (463 bytes) glitch::scene::SGetSceneNodesFromNameTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodesFromNameTraversal::traverse( glitch::scene::SGetSceneNodesFromNameTraversal *this, glitch::scene::ISceneNode *a2, int a3, uint32_t *a4, int a5, int a6, int a7, uint32_t *a8);
// [0xf41450] (463 bytes) glitch::scene::SGetSceneNodesFromScopeIDTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodesFromScopeIDTraversal::traverse( glitch::scene::SGetSceneNodesFromScopeIDTraversal *this, glitch::scene::ISceneNode *a2, int a3, uint32_t *a4, int a5, int a6, int a7, uint32_t *a8);
// [0xf41620] (463 bytes) glitch::scene::SGetSceneNodesFromUIDTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodesFromUIDTraversal::traverse( glitch::scene::SGetSceneNodesFromUIDTraversal *this, glitch::scene::ISceneNode *a2, int a3, uint32_t *a4, int a5, int a6, int a7, uint32_t *a8);
// [0xf417f0] (428 bytes) glitch::scene::SGetSceneNodesFromIDTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodesFromIDTraversal::traverse( glitch::scene::SGetSceneNodesFromIDTraversal *this, glitch::scene::ISceneNode *a2, int a3, uint32_t *a4, int a5, int a6, int a7, uint32_t *a8);
// [0xf419a0] (479 bytes) glitch::scene::SGetSceneNodesFromTypeTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SGetSceneNodesFromTypeTraversal::traverse( glitch::scene::SGetSceneNodesFromTypeTraversal *this, glitch::scene::ISceneNode *a2, int a3, uint32_t *a4, int a5, int a6, int a7, uint32_t *a8);
// [0xf41b80] (252 bytes) glitch::scene::SLogTreeTraversal::traverse(glitch::scene::ISceneNode *)
// int glitch::scene::SLogTreeTraversal::traverse( glitch::scene::SLogTreeTraversal *this, glitch::scene::ISceneNode *a2);
// [0xf41c80] (55 bytes) glitch::scene::CMetaTriangleSelector::CMetaTriangleSelector(void)
// glitch::scene::CMetaTriangleSelector *glitch::scene::CMetaTriangleSelector::CMetaTriangleSelector( glitch::scene::CMetaTriangleSelector *this);
// [0xf41cc0] (213 bytes) glitch::scene::CMetaTriangleSelector::removeTriangleSelector(boost::intrusive_ptr<glitch::scene::ITriangleSelector> const&)
// int glitch::scene::CMetaTriangleSelector::removeTriangleSelector(int a1, uint32_t *a2);
// [0xf41da0] (77 bytes) glitch::scene::CMetaTriangleSelector::removeAllTriangleSelectors(void)
// volatile int32_t **glitch::scene::CMetaTriangleSelector::removeAllTriangleSelectors( glitch::scene::CMetaTriangleSelector *this);
// [0xf41df0] (321 bytes) glitch::scene::COctTreeTriangleSelector::getTrianglesFromOctTreeBox(glitch::scene::COctTreeTriangleSelector::SOctTreeNode *)const
// int glitch::scene::COctTreeTriangleSelector::getTrianglesFromOctTreeBox( glitch::scene::COctTreeTriangleSelector *this, glitch::scene::COctTreeTriangleSelector::SOctTreeNode *a2);
// [0xf41f40] (317 bytes) glitch::scene::CTriangleSelector::CTriangleSelector(glitch::scene::ISceneNode const*,bool)
// glitch::scene::CTriangleSelector *glitch::scene::CTriangleSelector::CTriangleSelector( glitch::scene::CTriangleSelector *this, const glitch::scene::ISceneNode *a2, bool a3);
// [0xf42080] (3176 bytes) glitch::scene::CTriangleSelector::createMeshBufferTriangles(glitch::scene::CMeshBuffer const*,int,int)
// void glitch::scene::CTriangleSelector::createMeshBufferTriangles( glitch::scene::CTriangleSelector *this, const glitch::scene::CMeshBuffer *a2, int a3, int a4);
// [0xf42cf0] (317 bytes) glitch::scene::CTriangleSelector::CTriangleSelector(glitch::core::aabbox3d<float> const&,glitch::scene::ISceneNode const*,bool)
// int glitch::scene::CTriangleSelector::CTriangleSelector(int a1, int a2, int a3, char a4);
// [0xf42e30] (19 bytes) glitch::scene::CTriangleSelector::getTriangleBegin(void)const
// int glitch::scene::CTriangleSelector::getTriangleBegin(glitch::scene::CTriangleSelector *this);
// [0xf42e50] (27 bytes) glitch::scene::CTriangleSelector::getTriangleEnd(void)const
// int glitch::scene::CTriangleSelector::getTriangleEnd(glitch::scene::CTriangleSelector *this);
// [0xf42e70] (81 bytes) glitch::scene::CBillboardSceneNode::setMaterial(boost::intrusive_ptr<glitch::video::CMaterial> const&)
// int glitch::scene::CBillboardSceneNode::setMaterial(int a1, glitch::video::CMaterial **a2);
// [0xf42ed0] (174 bytes) glitch::scene::CCameraSceneNode::recalculateViewArea(void)
// int glitch::scene::CCameraSceneNode::recalculateViewArea(glitch::scene::CCameraSceneNode *this);
// [0xf42f80] (278 bytes) glitch::scene::CLightSceneNode::doLightRecalc(void)
// unsigned int glitch::scene::CLightSceneNode::doLightRecalc(glitch::scene::CLightSceneNode *this);
// [0xf430a0] (72 bytes) glitch::scene::CLightSceneNode::getBoundingBox(void)const
// char *glitch::scene::CLightSceneNode::getBoundingBox(glitch::scene::CLightSceneNode *this);
// [0xf430f0] (220 bytes) glitch::scene::SLodNode::~SLodNode()
// void glitch::scene::SLodNode::~SLodNode(glitch::scene::SLodNode *this);
// [0xf431d0] (111 bytes) glitch::scene::CLODSceneNode::updateLODNodes(glitch::scene::SLodNode *)
// int glitch::scene::CLODSceneNode::updateLODNodes( glitch::scene::CLODSceneNode *this, glitch::scene::SLodNode *a2);
// [0xf43240] (121 bytes) glitch::scene::CLODSceneNode::updateLODNodes(void)
// int glitch::scene::CLODSceneNode::updateLODNodes(glitch::scene::CLODSceneNode *this);
// [0xf432c0] (743 bytes) glitch::scene::CLODSceneNode::updateLOD(unsigned int,unsigned int,glitch::scene::SLodNode *)
// float *glitch::scene::CLODSceneNode::updateLOD( glitch::scene::CLODSceneNode *this, float *a2, float *a3, glitch::scene::SLodNode *a4);
// [0xf435b0] (9 bytes) glitch::scene::CLODSceneNode::getRenderTree(glitch::scene::SRenderTree *,glitch::scene::SLodNode *)
// void glitch::scene::CLODSceneNode::getRenderTree();
// [0xf435c0] (56 bytes) glitch::scene::CLODSceneNode::getRenderTree(glitch::scene::SRenderTree *)
// void glitch::scene::CLODSceneNode::getRenderTree(int a1, int a2);
// [0xf43600] (596 bytes) glitch::scene::CLODSceneNode::getLOD(void)
// int glitch::scene::CLODSceneNode::getLOD( glitch::scene::CLODSceneNode *this, int a2, int a3, int a4, int a5, int a6, int a7, uint32_t *a8);
// [0xf43860] (294 bytes) glitch::scene::CLODSceneNode::updateLOD(void)
// int glitch::scene::CLODSceneNode::updateLOD(glitch::scene::CLODSceneNode **this);
// [0xf43990] (64 bytes) glitch::scene::CLODSceneNode::onAnimate(float)
// int glitch::scene::CLODSceneNode::onAnimate(glitch::scene::CLODSceneNode **this, float a2);
// [0xf439d0] (74 bytes) glitch::scene::CRegisterProxySceneNode::CRegisterProxySceneNode(boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// uint32_t *glitch::scene::CRegisterProxySceneNode::CRegisterProxySceneNode(uint32_t *a1, uint32_t **a2);
// [0xf43a20] (137 bytes) glitch::scene::CShadowVolumeSceneNode::CShadowVolume::CShadowVolume(void)
// struct glitch::scene::CShadowVolumeSceneNode::CShadowVolume *glitch::scene::CShadowVolumeSceneNode::CShadowVolume::CShadowVolume( glitch::scene::CShadowVolumeSceneNode::CShadowVolume *this);
// [0xf43ab0] (105 bytes) glitch::scene::CShadowVolumeSceneNode::SSilhouette::SSilhouette(boost::intrusive_ptr<glitch::scene::CMeshBuffer const> const&)
// volatile int32_t *glitch::scene::CShadowVolumeSceneNode::SSilhouette::SSilhouette( uint32_t *a1, volatile int32_t **a2);
// [0xf43b20] (78 bytes) glitch::scene::CShadowVolumeSceneNode::SSilhouette::~SSilhouette()
// void glitch::scene::CShadowVolumeSceneNode::SSilhouette::~SSilhouette( glitch::scene::CShadowVolumeSceneNode::SSilhouette *this);
// [0xf43b70] (186 bytes) glitch::scene::CShadowVolumeSceneNode::CShadowVolume::~CShadowVolume()
// void glitch::scene::CShadowVolumeSceneNode::CShadowVolume::~CShadowVolume( glitch::scene::CShadowVolumeSceneNode::CShadowVolume *this);
// [0xf43c30] (763 bytes) glitch::scene::CShadowVolumeSceneNode::getProjectedVertex(glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&,glitch::video::E_LIGHT_TYPE,bool)
// float *glitch::scene::CShadowVolumeSceneNode::getProjectedVertex( float *a1, int a2, float *a3, float *a4, int a5, char a6);
// [0xf43f30] (2987 bytes) glitch::scene::CShadowVolumeSceneNode::createFacingTriangleVolume(glitch::video::CPrimitiveStream::SMapBuffer<unsigned short const> const&,unsigned int,glitch::core::vector3d<float> const&,glitch::video::E_LIGHT_TYPE,glitch::scene::CShadowVolumeSceneNode::CShadowVolume *,bool)
// unsigned int glitch::scene::CShadowVolumeSceneNode::createFacingTriangleVolume( int a1, int a2, int a3, float *a4, int a5, int a6, char a7);
// [0xf44ae0] (17 bytes) glitch::scene::CShadowVolumeSceneNode::setBiasFactor(float)
// glitch::scene::CShadowVolumeSceneNode *glitch::scene::CShadowVolumeSceneNode::setBiasFactor( glitch::scene::CShadowVolumeSceneNode *this, float a2);
// [0xf44b00] (23 bytes) glitch::scene::CStereoCameraSceneNode::updateMatricesCache(void)
// glitch::scene::CStereoCameraSceneNode *glitch::scene::CStereoCameraSceneNode::updateMatricesCache( glitch::scene::CStereoCameraSceneNode *this);
// [0xf44b20] (147 bytes) glitch::scene::CStereoCameraSceneNode::renderInternal(void *)
// uint32_t *glitch::scene::CStereoCameraSceneNode::renderInternal(glitch::scene::CStereoCameraSceneNode *this);
// [0xf44bc0] (64 bytes) glitch::scene::CStereoCameraSceneNode::getViewMatrix(void)const
// char *glitch::scene::CStereoCameraSceneNode::getViewMatrix(glitch::scene::CStereoCameraSceneNode *this);
// [0xf44c00] (64 bytes) glitch::scene::CStereoCameraSceneNode::getProjectionMatrix(void)const
// char *glitch::scene::CStereoCameraSceneNode::getProjectionMatrix(glitch::scene::CStereoCameraSceneNode *this);
// [0xf44c40] (304 bytes) glitch::scene::CStreamingSceneNode::removeSwappableItem(glitch::streaming::IFrameSwappable *)
// int glitch::scene::CStreamingSceneNode::removeSwappableItem(int a1, int a2);
// [0xf44d70] (42 bytes) glitch::scene::CTerrainSceneNode::setRotationPivot(glitch::core::vector3d<float> const&)
// int glitch::scene::CTerrainSceneNode::setRotationPivot(int a1, uint32_t *a2);
// [0xf44da0] (9 bytes) glitch::scene::CTerrainSceneNode::loadHeightMapRAW(boost::intrusive_ptr<glitch::io::IReadFile> const&,int,glitch::video::SColor,int)
// int glitch::scene::CTerrainSceneNode::loadHeightMapRAW();
// [0xf44db0] (1332 bytes) glitch::scene::CTerrainSceneNode::preRenderLODCalculations(void)
// int glitch::scene::CTerrainSceneNode::preRenderLODCalculations(int this);
// [0xf452f0] (32 bytes) glitch::scene::CTerrainSceneNode::getBoundingBox(int,int)const
// int glitch::scene::CTerrainSceneNode::getBoundingBox(glitch::scene::CTerrainSceneNode *this, int a2, int a3);
// [0xf45310] (474 bytes) glitch::scene::CTerrainSceneNode::getCurrentLODOfPatches(std::vector<int,glitch::core::SAllocator<int,(glitch::memory::E_MEMORY_HINT)0>> &)const
// int glitch::scene::CTerrainSceneNode::getCurrentLODOfPatches(glitch::scene::CTerrainSceneNode *this, char **a2);
// [0xf454f0] (35 bytes) glitch::scene::CTerrainSceneNode::setLODOfPatch(int,int,int)
// uint32_t *glitch::scene::CTerrainSceneNode::setLODOfPatch( glitch::scene::CTerrainSceneNode *this, int a2, int a3, int a4);
// [0xf45520] (56 bytes) glitch::scene::CTerrainSceneNode::overrideLODDistance(int,double)
// int glitch::scene::CTerrainSceneNode::overrideLODDistance( glitch::scene::CTerrainSceneNode *this, int a2, double a3);
// [0xf45560] (666 bytes) glitch::scene::CTerrainSceneNode::scaleTexture(float,float)
// int glitch::scene::CTerrainSceneNode::scaleTexture(glitch::scene::CTerrainSceneNode *this, float a2, float a3);
// [0xf45800] (337 bytes) glitch::scene::CTerrainSceneNode::getIndex(int,int,int,unsigned int,unsigned int)const
// unsigned int glitch::scene::CTerrainSceneNode::getIndex( glitch::scene::CTerrainSceneNode *this, int a2, int a3, int a4, unsigned int a5, unsigned int a6);
// [0xf45960] (358 bytes) glitch::scene::CTerrainSceneNode::smoothTerrain(boost::intrusive_ptr<glitch::scene::CMeshBuffer> const&,int)
// int glitch::scene::CTerrainSceneNode::smoothTerrain( glitch::scene::CTerrainSceneNode *this, const boost::intrusive_ptr<glitch::scene::CMeshBuffer> *a2, int a3);
// [0xf45ad0] (2958 bytes) glitch::scene::CTerrainSceneNode::calculateNormals(boost::intrusive_ptr<glitch::scene::CMeshBuffer> const&)
// int glitch::scene::CTerrainSceneNode::calculateNormals( glitch::scene::CTerrainSceneNode *this, const boost::intrusive_ptr<glitch::scene::CMeshBuffer> *a2);
// [0xf46660] (272 bytes) glitch::scene::CTerrainSceneNode::createPatches(void)
// uint32_t *glitch::scene::CTerrainSceneNode::createPatches(glitch::scene::CTerrainSceneNode *this);
// [0xf46770] (1365 bytes) glitch::scene::CTerrainSceneNode::calculatePatchData(void)
// int glitch::scene::CTerrainSceneNode::calculatePatchData(glitch::scene::CTerrainSceneNode *this);
// [0xf46cd0] (775 bytes) glitch::scene::CTerrainSceneNode::calculateDistanceThresholds(bool)
// void glitch::scene::CTerrainSceneNode::calculateDistanceThresholds(glitch::scene::CTerrainSceneNode *this);
// [0xf46fe0] (1122 bytes) glitch::scene::CTerrainSceneNode::applyTransformation(void)
// int glitch::scene::CTerrainSceneNode::applyTransformation(glitch::scene::CTerrainSceneNode *this);
// [0xf47450] (85 bytes) glitch::scene::CTerrainSceneNode::setPosition(glitch::core::vector3d<float> const&)
// int glitch::scene::CTerrainSceneNode::setPosition(glitch::scene::CTerrainSceneNode *a1, uint32_t *a2);
// [0xf474b0] (94 bytes) glitch::scene::CTerrainSceneNode::setRotation(glitch::core::quaternion const&)
// int glitch::scene::CTerrainSceneNode::setRotation( glitch::scene::CTerrainSceneNode *this, const glitch::core::quaternion *a2);
// [0xf47510] (85 bytes) glitch::scene::CTerrainSceneNode::setScale(glitch::core::vector3d<float> const&)
// int glitch::scene::CTerrainSceneNode::setScale(glitch::scene::CTerrainSceneNode *a1, uint32_t *a2);
// [0xf47570] (4111 bytes) glitch::scene::CTerrainSceneNode::loadHeightMap(boost::intrusive_ptr<glitch::io::IReadFile> const&,glitch::video::SColor,int)
// int glitch::scene::CTerrainSceneNode::loadHeightMap( glitch::scene::CTerrainSceneNode *a1, uint32_t *a2, int a3, int a4);
// [0xf48580] (55 bytes) glitch::scene::CTerrainSceneNode::setCurrentLODOfPatches(int)
// void glitch::scene::CTerrainSceneNode::setCurrentLODOfPatches(glitch::scene::CTerrainSceneNode *this, int a2);
// [0xf485c0] (74 bytes) glitch::scene::CTerrainSceneNode::setCurrentLODOfPatches(std::vector<int,glitch::core::SAllocator<int,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int glitch::scene::CTerrainSceneNode::setCurrentLODOfPatches( glitch::scene::CTerrainSceneNode *this, const std::vector<int, glitch::core::SAllocator<int, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xf48610] (884 bytes) glitch::scene::CTerrainSceneNode::getHeight(float,float)const
// long double glitch::scene::CTerrainSceneNode::getHeight( glitch::scene::CTerrainSceneNode *this, float a2, float a3);
// [0xf48990] (280 bytes) glitch::scene::ISceneNode::~ISceneNode()
// void glitch::scene::ISceneNode::~ISceneNode(volatile int32_t **this, volatile int32_t **a2);
// [0xf48ab0] (172 bytes) glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode()
// void glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode( glitch::scene::CStereoCameraSceneNode *this, volatile int32_t **a2);
// [0xf48b60] (15 bytes) `virtual thunk to'glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode()
// void `virtual thunk to'glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode( glitch::scene::IShadowVolumeSceneNode *this);
// [0xf48b70] (15 bytes) `virtual thunk to'glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode()
// void `virtual thunk to'glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode( glitch::scene::IShadowVolumeSceneNode *this);
// [0xf48b80] (125 bytes) glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode()
// void glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode( glitch::scene::IShadowVolumeSceneNode *this);
// [0xf48c00] (15 bytes) `virtual thunk to'glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode()
// void `virtual thunk to'glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode( glitch::scene::IShadowVolumeSceneNode *this);
// [0xf48c10] (15 bytes) `virtual thunk to'glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode()
// void `virtual thunk to'glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode( glitch::scene::IShadowVolumeSceneNode *this);
// [0xf48c20] (56 bytes) glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode()
// void glitch::scene::IShadowVolumeSceneNode::~IShadowVolumeSceneNode( glitch::scene::IShadowVolumeSceneNode *this);
// [0xf48c60] (15 bytes) `virtual thunk to'glitch::scene::CTerrainSceneNode::~CTerrainSceneNode()
// void `virtual thunk to'glitch::scene::CTerrainSceneNode::~CTerrainSceneNode( glitch::scene::CTerrainSceneNode *this);
// [0xf48c70] (15 bytes) `virtual thunk to'glitch::scene::CTerrainSceneNode::~CTerrainSceneNode()
// void `virtual thunk to'glitch::scene::CTerrainSceneNode::~CTerrainSceneNode( glitch::scene::CTerrainSceneNode *this);
// [0xf48c80] (245 bytes) glitch::scene::CTerrainSceneNode::~CTerrainSceneNode()
// void glitch::scene::CTerrainSceneNode::~CTerrainSceneNode(glitch::scene::CTerrainSceneNode *this);
// [0xf48d80] (15 bytes) `virtual thunk to'glitch::scene::CTerrainSceneNode::~CTerrainSceneNode()
// void `virtual thunk to'glitch::scene::CTerrainSceneNode::~CTerrainSceneNode( glitch::scene::CTerrainSceneNode *this);
// [0xf48d90] (15 bytes) `virtual thunk to'glitch::scene::CTerrainSceneNode::~CTerrainSceneNode()
// void `virtual thunk to'glitch::scene::CTerrainSceneNode::~CTerrainSceneNode( glitch::scene::CTerrainSceneNode *this);
// [0xf48da0] (56 bytes) glitch::scene::CTerrainSceneNode::~CTerrainSceneNode()
// void glitch::scene::CTerrainSceneNode::~CTerrainSceneNode(glitch::scene::CTerrainSceneNode *this);
// [0xf48de0] (202 bytes) glitch::scene::CTerrainSceneNode::~CTerrainSceneNode()
// void glitch::scene::CTerrainSceneNode::~CTerrainSceneNode( glitch::scene::CTerrainSceneNode *this, volatile int32_t **a2);
// [0xf48eb0] (15 bytes) `virtual thunk to'glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode()
// void `virtual thunk to'glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode( glitch::scene::CSkyDomeSceneNode *this);
// [0xf48ec0] (15 bytes) `virtual thunk to'glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode()
// void `virtual thunk to'glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode( glitch::scene::CSkyDomeSceneNode *this);
// [0xf48ed0] (210 bytes) glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode()
// void glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode(glitch::scene::CSkyDomeSceneNode *this);
// [0xf48fb0] (15 bytes) `virtual thunk to'glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode()
// void `virtual thunk to'glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode( glitch::scene::CSkyDomeSceneNode *this);
// [0xf48fc0] (15 bytes) `virtual thunk to'glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode()
// void `virtual thunk to'glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode( glitch::scene::CSkyDomeSceneNode *this);
// [0xf48fd0] (56 bytes) glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode()
// void glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode(glitch::scene::CSkyDomeSceneNode *this);
// [0xf49010] (178 bytes) glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode()
// void glitch::scene::CSkyDomeSceneNode::~CSkyDomeSceneNode( glitch::scene::CSkyDomeSceneNode *this, volatile int32_t **a2);
// [0xf490d0] (15 bytes) `virtual thunk to'glitch::scene::CMeshSceneNode::~CMeshSceneNode()
// void `virtual thunk to'glitch::scene::CMeshSceneNode::~CMeshSceneNode(glitch::scene::CMeshSceneNode *this);
// [0xf490e0] (15 bytes) `virtual thunk to'glitch::scene::CMeshSceneNode::~CMeshSceneNode()
// void `virtual thunk to'glitch::scene::CMeshSceneNode::~CMeshSceneNode(glitch::scene::CMeshSceneNode *this);
// [0xf490f0] (165 bytes) glitch::scene::CMeshSceneNode::~CMeshSceneNode()
// void glitch::scene::CMeshSceneNode::~CMeshSceneNode(glitch::scene::CMeshSceneNode *this);
// [0xf491a0] (15 bytes) `virtual thunk to'glitch::scene::CMeshSceneNode::~CMeshSceneNode()
// void `virtual thunk to'glitch::scene::CMeshSceneNode::~CMeshSceneNode(glitch::scene::CMeshSceneNode *this);
// [0xf491b0] (15 bytes) `virtual thunk to'glitch::scene::CMeshSceneNode::~CMeshSceneNode()
// void `virtual thunk to'glitch::scene::CMeshSceneNode::~CMeshSceneNode(glitch::scene::CMeshSceneNode *this);
// [0xf491c0] (56 bytes) glitch::scene::CMeshSceneNode::~CMeshSceneNode()
// void glitch::scene::CMeshSceneNode::~CMeshSceneNode(glitch::scene::CMeshSceneNode *this);
// [0xf49200] (134 bytes) glitch::scene::CMeshSceneNode::~CMeshSceneNode()
// void glitch::scene::CMeshSceneNode::~CMeshSceneNode(volatile int32_t **this, int a2);
// [0xf49290] (15 bytes) `virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode()
// void `virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode( glitch::scene::CStereoCameraSceneNode *this);
// [0xf492a0] (15 bytes) `virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode()
// void `virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode( glitch::scene::CStereoCameraSceneNode *this);
// [0xf492b0] (10 bytes) `non-virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode()
// void `non-virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode( glitch::scene::CStereoCameraSceneNode *this);
// [0xf492c0] (128 bytes) glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode()
// void glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode( glitch::scene::CStereoCameraSceneNode *this);
// [0xf49340] (15 bytes) `virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode()
// void `virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode( glitch::scene::CStereoCameraSceneNode *this);
// [0xf49350] (15 bytes) `virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode()
// void `virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode( glitch::scene::CStereoCameraSceneNode *this);
// [0xf49360] (10 bytes) `non-virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode()
// void `non-virtual thunk to'glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode( glitch::scene::CStereoCameraSceneNode *this);
// [0xf49370] (56 bytes) glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode()
// void glitch::scene::CStereoCameraSceneNode::~CStereoCameraSceneNode( glitch::scene::CStereoCameraSceneNode *this);
// [0xf493b0] (17 bytes) glitch::scene::ISceneNode::definitelyHaveAbsoluteTransformation(void)const
// bool glitch::scene::ISceneNode::definitelyHaveAbsoluteTransformation(glitch::scene::ISceneNode *this);
// [0xf493d0] (24 bytes) glitch::scene::ISceneNode::definitelyHaveRelativeTransformation(void)const
// bool glitch::scene::ISceneNode::definitelyHaveRelativeTransformation(glitch::scene::ISceneNode *this);
// [0xf493f0] (26 bytes) glitch::scene::ISceneNode::getRelativeTransformation(void)const
// char *glitch::scene::ISceneNode::getRelativeTransformation(glitch::scene::ISceneNode *this);
// [0xf49410] (389 bytes) glitch::scene::ISceneNode::setRelativeTransformation(glitch::core::CMatrix4<float> const&)
// int glitch::scene::ISceneNode::setRelativeTransformation( glitch::scene::ISceneNode *this, const glitch::core::CMatrix4<float> *a2);
// [0xf495a0] (14 bytes) glitch::scene::ISceneNode::getAnimators(void)const
// char *glitch::scene::ISceneNode::getAnimators(glitch::scene::ISceneNode *this);
// [0xf495b0] (56 bytes) glitch::scene::ISceneNode::setPosition(float,float,float)
// int glitch::scene::ISceneNode::setPosition(glitch::scene::ISceneNode *this, float a2, float a3, float a4);
// [0xf495f0] (24 bytes) glitch::scene::ISceneNode::setAutomaticCulling(glitch::scene::E_CULLING_TYPE)
// unsigned int glitch::scene::ISceneNode::setAutomaticCulling(int a1, int a2);
// [0xf49610] (42 bytes) glitch::scene::ISceneNode::setAutomaticCulling(void const*,glitch::scene::E_CULLING_TYPE)
// unsigned int glitch::scene::ISceneNode::setAutomaticCulling(int a1, int a2, int a3);
// [0xf49640] (35 bytes) glitch::scene::ISceneNode::setIsDebugObject(bool)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::setIsDebugObject( glitch::scene::ISceneNode *this, bool a2);
// [0xf49670] (17 bytes) glitch::scene::ISceneNode::isDebugObject(void)const
// bool glitch::scene::ISceneNode::isDebugObject(glitch::scene::ISceneNode *this);
// [0xf49690] (15 bytes) `virtual thunk to'glitch::scene::ISceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `virtual thunk to'glitch::scene::ISceneNode::serializeAttributes( glitch::scene::ISceneNode *a1, int a2, int a3);
// [0xf496a0] (679 bytes) glitch::scene::ISceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// void glitch::scene::ISceneNode::serializeAttributes(glitch::scene::ISceneNode *a1, int *a2, uint32_t *a3);
// [0xf49950] (15 bytes) `virtual thunk to'glitch::scene::CTerrainSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `virtual thunk to'glitch::scene::CTerrainSceneNode::serializeAttributes( glitch::scene::ISceneNode *a1, int a2, int a3);
// [0xf49960] (180 bytes) glitch::scene::CTerrainSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::scene::CTerrainSceneNode::serializeAttributes(glitch::scene::ISceneNode *a1, int *a2, uint32_t *a3);
// [0xf49a20] (15 bytes) `virtual thunk to'glitch::scene::CMeshSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `virtual thunk to'glitch::scene::CMeshSceneNode::serializeAttributes( glitch::scene::ISceneNode *a1, int a2, int a3);
// [0xf49a30] (50 bytes) glitch::scene::CMeshSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// void glitch::scene::CMeshSceneNode::serializeAttributes(glitch::scene::ISceneNode *a1, int *a2, uint32_t *a3);
// [0xf49a70] (15 bytes) `virtual thunk to'glitch::scene::CLightSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `virtual thunk to'glitch::scene::CLightSceneNode::serializeAttributes( glitch::scene::ISceneNode *a1, int a2, int a3);
// [0xf49a80] (128 bytes) glitch::scene::CLightSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::scene::CLightSceneNode::serializeAttributes(glitch::scene::ISceneNode *a1, int *a2, uint32_t *a3);
// [0xf49b00] (15 bytes) `virtual thunk to'glitch::scene::CCameraSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `virtual thunk to'glitch::scene::CCameraSceneNode::serializeAttributes( glitch::scene::ISceneNode *a1, int a2, int a3);
// [0xf49b10] (276 bytes) glitch::scene::CCameraSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::scene::CCameraSceneNode::serializeAttributes(glitch::scene::ISceneNode *a1, int *a2, uint32_t *a3);
// [0xf49c30] (15 bytes) `virtual thunk to'glitch::scene::CBillboardSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `virtual thunk to'glitch::scene::CBillboardSceneNode::serializeAttributes(uint32_t *a1, int a2, int a3);
// [0xf49c40] (7 bytes) `non-virtual thunk to'glitch::scene::CBillboardSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int `non-virtual thunk to'glitch::scene::CBillboardSceneNode::serializeAttributes(int a1, int a2, int a3);
// [0xf49c50] (225 bytes) glitch::scene::CBillboardSceneNode::serializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)const
// int glitch::scene::CBillboardSceneNode::serializeAttributes(uint32_t *a1, int *a2, uint32_t *a3);
// [0xf49d40] (14 bytes) glitch::scene::ISceneNode::getChildren(void)const
// char *glitch::scene::ISceneNode::getChildren(glitch::scene::ISceneNode *this);
// [0xf49d50] (1286 bytes) glitch::scene::CSceneManager::writeSceneNode(boost::intrusive_ptr<glitch::io::IXMLWriter> const&,glitch::scene::ISceneNode const*,glitch::scene::ISceneUserDataSerializer *)
// char glitch::scene::CSceneManager::writeSceneNode(int a1, int *a2, glitch::scene::ISceneNode *a3, int a4);
// [0xf4a260] (168 bytes) glitch::scene::CSceneManager::saveScene(boost::intrusive_ptr<glitch::io::IWriteFile> const&,glitch::scene::ISceneUserDataSerializer *)
// int glitch::scene::CSceneManager::saveScene(int a1, uint32_t *a2, int a3);
// [0xf4a310] (101 bytes) glitch::scene::ISceneNode::getSceneNodeFromName(char const*)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::getSceneNodeFromName( glitch::scene::ISceneNode *this, glitch::scene::ISceneNode *a2, int a3);
// [0xf4a380] (89 bytes) glitch::scene::CSceneManager::getSceneNodeFromName(char const*,boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// glitch::scene::ISceneNode *glitch::scene::CSceneManager::getSceneNodeFromName( glitch::scene::ISceneNode *a1, int a2, int a3, glitch::scene::ISceneNode **a4);
// [0xf4a3e0] (101 bytes) glitch::scene::ISceneNode::getSceneNodeFromScopeID(char const*)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::getSceneNodeFromScopeID( glitch::scene::ISceneNode *this, glitch::scene::ISceneNode *a2, int a3);
// [0xf4a450] (101 bytes) glitch::scene::ISceneNode::getSceneNodeFromUID(char const*)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::getSceneNodeFromUID( glitch::scene::ISceneNode *this, glitch::scene::ISceneNode *a2, int a3);
// [0xf4a4c0] (89 bytes) glitch::scene::CSceneManager::getSceneNodeFromUID(char const*,boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// glitch::scene::ISceneNode *glitch::scene::CSceneManager::getSceneNodeFromUID( glitch::scene::ISceneNode *a1, int a2, int a3, glitch::scene::ISceneNode **a4);
// [0xf4a520] (101 bytes) glitch::scene::ISceneNode::getSceneNodeFromType(glitch::scene::E_SCENE_NODE_TYPE)
// uint32_t *glitch::scene::ISceneNode::getSceneNodeFromType( uint32_t *a1, glitch::scene::ISceneNode *a2, int a3);
// [0xf4a590] (89 bytes) glitch::scene::CSceneManager::getSceneNodeFromType(glitch::scene::E_SCENE_NODE_TYPE,boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// uint32_t *glitch::scene::CSceneManager::getSceneNodeFromType( uint32_t *a1, int a2, int a3, glitch::scene::ISceneNode **a4);
// [0xf4a5f0] (58 bytes) glitch::scene::ISceneNode::getSceneNodesFromType(glitch::scene::E_SCENE_NODE_TYPE,std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::scene::ISceneNode::getSceneNodesFromType(glitch::scene::ISceneNode *a1, uint32_t *a2, int a3);
// [0xf4a630] (65 bytes) glitch::scene::CSceneManager::getSceneNodesFromType(glitch::scene::E_SCENE_NODE_TYPE,std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>> &,boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// int glitch::scene::CSceneManager::getSceneNodesFromType( int a1, uint32_t *a2, int a3, glitch::scene::ISceneNode **a4);
// [0xf4a680] (140 bytes) glitch::scene::ISceneNode::setParent(glitch::scene::ISceneNode*)
// int glitch::scene::ISceneNode::setParent(glitch::scene::ISceneNode *this, glitch::scene::ISceneNode *a2);
// [0xf4a710] (940 bytes) glitch::scene::ISceneNode::addChildInternal(boost::intrusive_ptr<glitch::scene::ISceneNode> const&,bool)
// char glitch::scene::ISceneNode::addChildInternal( glitch::scene::ISceneNode *a1, glitch::scene::ISceneNode **a2, char a3);
// [0xf4aac0] (119 bytes) glitch::scene::ISceneNode::updateAbsolutePosition(bool)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::updateAbsolutePosition( glitch::scene::ISceneNode *this, bool a2);
// [0xf4ab40] (15 bytes) `virtual thunk to'glitch::scene::CSceneManager::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// int `virtual thunk to'glitch::scene::CSceneManager::deserializeAttributes(uint32_t *a1);
// [0xf4ab50] (485 bytes) glitch::scene::CSceneManager::deserializeAttributes(glitch::io::IAttributes *,glitch::io::SAttributeReadWriteOptions *)
// glitch::scene::ISceneNode *glitch::scene::CSceneManager::deserializeAttributes(int *a1, int a2);
// [0xf4ad40] (942 bytes) glitch::scene::ISceneNode::ISceneNode(int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::ISceneNode( glitch::IObject *a1, int a2, float *a3, uint32_t *a4, float *a5);
// [0xf4b0f0] (902 bytes) glitch::scene::ISceneNode::ISceneNode(int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// glitch::scene::ISceneNode *glitch::scene::ISceneNode::ISceneNode( glitch::IObject *a1, int *a2, int a3, float *a4, uint32_t *a5, float *a6);
// [0xf4b480] (149 bytes) glitch::scene::IMeshSceneNode::IMeshSceneNode(int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// int (**glitch::scene::IMeshSceneNode::IMeshSceneNode( glitch::IObject *a1, int a2, float *a3, uint32_t *a4, float *a5))(glitch::scene::ISceneNode *);
// [0xf4b520] (123 bytes) glitch::scene::IMeshSceneNode::IMeshSceneNode(int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// int glitch::scene::IMeshSceneNode::IMeshSceneNode( glitch::IObject *a1, int *a2, int a3, float *a4, uint32_t *a5, float *a6);
// [0xf4b5a0] (194 bytes) glitch::scene::CMeshSceneNode::CMeshSceneNode(boost::intrusive_ptr<glitch::scene::IMesh> const&,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// int glitch::scene::CMeshSceneNode::CMeshSceneNode( glitch::IObject *a1, int *a2, int a3, float *a4, uint32_t *a5, float *a6);
// [0xf4b670] (168 bytes) glitch::scene::CMeshSceneNode::CMeshSceneNode(boost::intrusive_ptr<glitch::scene::IMesh> const&,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// int glitch::scene::CMeshSceneNode::CMeshSceneNode( glitch::IObject *a1, int *a2, int *a3, int a4, float *a5, uint32_t *a6, float *a7);
// [0xf4b720] (859 bytes) glitch::scene::CShadowProjectionSceneNode::CShadowProjectionSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::scene::IMesh> const&,boost::intrusive_ptr<glitch::scene::ISceneNode> const&,boost::intrusive_ptr<glitch::video::CLight> const&,glitch::scene::CShadowProjectionSceneNode::E_SHADOW_PROJECTION_TYPE,glitch::core::plane3d<float>,glitch::video::SColor,float,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// void glitch::scene::CShadowProjectionSceneNode::CShadowProjectionSceneNode( glitch::IObject *a1, int a2, int *a3, uint32_t **a4, volatile int32_t **a5, int a6, int a7, int a8, int a9, int a10, float *a11, uint32_t *a12, float *a13);
// [0xf4ba80] (827 bytes) glitch::scene::CShadowProjectionSceneNode::CShadowProjectionSceneNode(glitch::video::IVideoDriver *,boost::intrusive_ptr<glitch::scene::IMesh> const&,boost::intrusive_ptr<glitch::scene::ISceneNode> const&,boost::intrusive_ptr<glitch::video::CLight> const&,glitch::scene::CShadowProjectionSceneNode::E_SHADOW_PROJECTION_TYPE,glitch::core::plane3d<float>,glitch::video::SColor,float,int,glitch::core::vector3d<float> const&,glitch::core::quaternion const&,glitch::core::vector3d<float> const&)
// void glitch::scene::CShadowProjectionSceneNode::CShadowProjectionSceneNode( glitch::IObject *a1, int *a2, int a3, int *a4, uint32_t **a5, volatile int32_t **a6, int a7, int a8, int a9, int a10, int a11, float *a12, uint32_t *a13, float *a14);
// [0xf4bdc0] (633 bytes) glitch::scene::ICameraSceneNode::ICameraSceneNode(int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&)
// void (**glitch::scene::ICameraSceneNode::ICameraSceneNode( glitch::IObject *a1, int a2, float *a3, float *a4, float *a5))(glitch::scene::ICameraSceneNode *__hidden this);
// [0xf4c040] (612 bytes) glitch::scene::ICameraSceneNode::ICameraSceneNode(int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&)
// void (**glitch::scene::ICameraSceneNode::ICameraSceneNode( glitch::IObject *a1, int *a2, int a3, float *a4, float *a5, float *a6))(glitch::scene::ICameraSceneNode *__hidden this);
// [0xf4c2b0] (1456 bytes) glitch::scene::CCameraSceneNode::CCameraSceneNode(int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&,bool)
// int glitch::scene::CCameraSceneNode::CCameraSceneNode( glitch::IObject *a1, int a2, float *a3, uint32_t *a4, char a5);
// [0xf4c860] (1424 bytes) glitch::scene::CCameraSceneNode::CCameraSceneNode(int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&,bool)
// int glitch::scene::CCameraSceneNode::CCameraSceneNode( glitch::IObject *a1, int *a2, int a3, float *a4, uint32_t *a5, char a6);
// [0xf4cdf0] (800 bytes) glitch::scene::CStereoCameraSceneNode::CStereoCameraSceneNode(int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&)
// int glitch::scene::CStereoCameraSceneNode::CStereoCameraSceneNode( glitch::IObject *a1, int a2, float *a3, uint32_t *a4);
// [0xf4d110] (760 bytes) glitch::scene::CStereoCameraSceneNode::CStereoCameraSceneNode(int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&)
// int glitch::scene::CStereoCameraSceneNode::CStereoCameraSceneNode( glitch::IObject *a1, int *a2, int a3, float *a4, uint32_t *a5);
// [0xf4d410] (204 bytes) glitch::scene::IBillboardSceneNode::IBillboardSceneNode(int,glitch::core::vector3d<float> const&)
// int (**glitch::scene::IBillboardSceneNode::IBillboardSceneNode(uint32_t *a1, int a2, float *a3))(int);
// [0xf4d4e0] (178 bytes) glitch::scene::IBillboardSceneNode::IBillboardSceneNode(int,glitch::core::vector3d<float> const&)
// int glitch::scene::IBillboardSceneNode::IBillboardSceneNode(int *a1, int *a2, int a3, float *a4);
// [0xf4d5a0] (1091 bytes) glitch::scene::CBillboardSceneNode::CBillboardSceneNode(glitch::video::IVideoDriver *,int,glitch::core::vector3d<float> const&,glitch::core::dimension2d<float> const&,glitch::video::SColor,glitch::video::SColor)
// volatile int32_t *glitch::scene::CBillboardSceneNode::CBillboardSceneNode( int a1, int *a2, int a3, float *a4, float *a5, int a6, int a7);
// [0xf4d9f0] (1043 bytes) glitch::scene::CBillboardSceneNode::CBillboardSceneNode(glitch::video::IVideoDriver *,int,glitch::core::vector3d<float> const&,glitch::core::dimension2d<float> const&,glitch::video::SColor,glitch::video::SColor)
// volatile int32_t *glitch::scene::CBillboardSceneNode::CBillboardSceneNode( int *a1, int *a2, uint32_t *a3, int a4, float *a5, float *a6, int a7, int a8);
// [0xf4de10] (410 bytes) glitch::scene::CLODSceneNode::CLODSceneNode(boost::intrusive_ptr<glitch::scene::ILODSelector> const&,int)
// int glitch::scene::CLODSceneNode::CLODSceneNode(glitch::IObject *a1, int *a2, int a3);
// [0xf4dfb0] (366 bytes) glitch::scene::CLODSceneNode::CLODSceneNode(boost::intrusive_ptr<glitch::scene::ILODSelector> const&,int)
// int glitch::scene::CLODSceneNode::CLODSceneNode(glitch::IObject *a1, int *a2, int *a3, int a4);
// [0xf4e120] (242 bytes) glitch::scene::CEmptySceneNode::CEmptySceneNode(int)
// int glitch::scene::CEmptySceneNode::CEmptySceneNode(glitch::scene::CEmptySceneNode *this, int a2);
// [0xf4e220] (198 bytes) glitch::scene::CEmptySceneNode::CEmptySceneNode(int)
// int glitch::scene::CEmptySceneNode::CEmptySceneNode(glitch::scene::CEmptySceneNode *this, int *a2, int a3);
// [0xf4e2f0] (256 bytes) glitch::scene::CStreamingSceneNode::CStreamingSceneNode(glitch::streaming::CStreamingPackage *,boost::intrusive_ptr<glitch::streaming::SSharedStreamingData> const&,int)
// int glitch::scene::CStreamingSceneNode::CStreamingSceneNode( glitch::scene::CEmptySceneNode *a1, int a2, int *a3, int a4);
