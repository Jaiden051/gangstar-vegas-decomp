#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_util.h
// Library: glitch | Module: glitch_util
// Binary Address Span: 0xcd0cb0 .. 0xf11190 (25 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcd0cb0] (75 bytes) glitch::util::edgeComp(glitch::util::SEdge const&,glitch::util::SEdge const&)
// bool glitch::util::edgeComp(int a1, int a2);
// [0xcd4ec0] (70 bytes) glitch::util::edgeComp2(glitch::util::SEdge const&,glitch::util::SEdge const&)
// bool glitch::util::edgeComp2(int a1, int a2);
// [0xcd4f10] (16 bytes) glitch::util::edgeGroup(glitch::util::SEdge const&,glitch::util::SEdge const&)
// bool glitch::util::edgeGroup(uint32_t *a1, uint32_t *a2);
// [0xcd4f20] (289 bytes) glitch::util::CAreaManager::free(glitch::core::rect<int> const&)
// int glitch::util::CAreaManager::free(int a1, int *a2);
// [0xcd5050] (117 bytes) glitch::util::CAreaManager::verifyEdgeList(std::list<glitch::util::SEdge,std::allocator<glitch::util::SEdge>> const&)
// bool glitch::util::CAreaManager::verifyEdgeList(uint32_t **a1);
// [0xcd50d0] (522 bytes) glitch::util::CAreaManager::mergeEdges(std::list<glitch::util::SEdge,std::allocator<glitch::util::SEdge>> &,std::list<glitch::util::SEdge,std::allocator<glitch::util::SEdge>> &)
// void glitch::util::CAreaManager::mergeEdges(int a1, uint32_t *a2, uint32_t *a3);
// [0xcd52e0] (117 bytes) glitch::util::CAreaManager::verifyEdgeListFull(std::list<glitch::util::SEdge,std::allocator<glitch::util::SEdge>> const&)
// bool glitch::util::CAreaManager::verifyEdgeListFull(uint32_t **a1);
// [0xcd5360] (710 bytes) glitch::util::CAreaManager::manageEdges(std::list<glitch::util::SEdge,std::allocator<glitch::util::SEdge>> &,glitch::util::SEdge const&,std::list<glitch::util::SEdge,std::allocator<glitch::util::SEdge>> &)
// char glitch::util::CAreaManager::manageEdges(int a1, uint32_t **a2, int *a3, uint32_t **a4);
// [0xcd5630] (593 bytes) glitch::util::CAreaManager::prepareAllocEdges(std::_List_iterator<glitch::util::SEdge>,std::_List_iterator<glitch::util::SEdge>,std::list<glitch::util::SEdge,std::allocator<glitch::util::SEdge>> &)
// void glitch::util::CAreaManager::prepareAllocEdges(int a1, uint32_t *a2, uint32_t *a3, int **a4);
// [0xcd5890] (1121 bytes) glitch::util::CAreaManager::sweepCleanZone(std::list<glitch::util::SEdge,std::allocator<glitch::util::SEdge>> &)
// void glitch::util::CAreaManager::sweepCleanZone(int a1, int *a2);
// [0xcd5d00] (160 bytes) glitch::util::CAreaManager::CAreaManager(glitch::core::dimension2d<int> const&)
// void glitch::util::CAreaManager::CAreaManager(int a1, uint32_t *a2);
// [0xcd5da0] (261 bytes) glitch::util::CAreaManager::sweepAllocate(std::list<glitch::util::SEdge,std::allocator<glitch::util::SEdge>> &,glitch::core::rect<int> const&)
// int glitch::util::CAreaManager::sweepAllocate(int a1, uint32_t *a2, int *a3);
// [0xcd5eb0] (310 bytes) glitch::util::CAreaManager::allocate(glitch::core::dimension2d<int> const&)
// int glitch::util::CAreaManager::allocate(int a1, int a2, int *a3);
// [0xcd5ff0] (248 bytes) glitch::util::STriangleIterator::initIterator(void)
// int glitch::util::STriangleIterator::initIterator(glitch::video::IBuffer ***this);
// [0xcd60f0] (71 bytes) glitch::util::STriangleIterator::operator=(glitch::util::STriangleIterator const&)
// glitch::util::STriangleIterator *glitch::util::STriangleIterator::operator=( glitch::util::STriangleIterator *this, const glitch::util::STriangleIterator *a2);
// [0xcd6140] (112 bytes) glitch::util::STriangleIterator::STriangleIterator(glitch::util::STriangleIterator const&)
// glitch::util::STriangleIterator *glitch::util::STriangleIterator::STriangleIterator( glitch::util::STriangleIterator *this, const glitch::util::STriangleIterator *a2);
// [0xcd61b0] (591 bytes) glitch::util::STriangleIterator::assignTriangle(unsigned int)const
// glitch::util::STriangleIterator *glitch::util::STriangleIterator::assignTriangle( glitch::util::STriangleIterator *this, unsigned int a2);
// [0xcd6400] (219 bytes) glitch::util::getMinimumAtlasTextureSize(unsigned int)
// glitch::util *glitch::util::getMinimumAtlasTextureSize(glitch::util *this, unsigned int a2);
// [0xcd64e0] (42 bytes) glitch::util::bumpAtlasSize(glitch::core::dimension2d<int> const&)
// uint32_t *glitch::util::bumpAtlasSize(uint32_t *a1, int *a2);
// [0xcdba70] (1485 bytes) glitch::util::fillTexture(std::pair<boost::intrusive_ptr<glitch::video::ITexture>,glitch::core::rect<int>> const&,boost::intrusive_ptr<glitch::video::ITexture> const&)
// int glitch::util::fillTexture(glitch::video::ITexture **a1, uint32_t *a2);
// [0xcdc040] (724 bytes) glitch::util::atlasTextures(std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture>,glitch::core::rect<int>>,std::allocator<std::pair<boost::intrusive_ptr<glitch::video::ITexture>,glitch::core::rect<int>>>> const&,int,int,char const*,boost::intrusive_ptr<glitch::video::IVideoDriver> const&)
// uint32_t *glitch::util::atlasTextures(uint32_t *a1, glitch::video::ITexture **a2, int a3, int a4);
// [0xcdc320] (1548 bytes) glitch::util::atlasTextureArray(std::list<std::pair<glitch::util::STextureArray,glitch::core::rect<int>>,std::allocator<std::pair<glitch::util::STextureArray,glitch::core::rect<int>>>> const&,int,int,char const**,boost::intrusive_ptr<glitch::video::IVideoDriver> const&)
// uint32_t *glitch::util::atlasTextureArray(uint32_t *a1, int a2, int a3);
// [0xcf93f0] (678 bytes) glitch::util::SStringPool::resolve(glitch::core::SSharedString const&,bool)
// int glitch::util::SStringPool::resolve( __m128d a1, glitch::util::SStringPool *this, volatile int32_t **a3, bool a4);
// [0xefa900] (26 bytes) glitch::util::SMagicReverseSortPolicy<glitch::util::SDimensionArrayId>::rectangleSort(glitch::util::SDimensionArrayId const&,glitch::util::SDimensionArrayId const&)
// bool glitch::util::SMagicReverseSortPolicy<glitch::util::SDimensionArrayId>::rectangleSort( uint32_t *a1, uint32_t *a2);
// [0xf11190] (1665 bytes) glitch::util::CFastRectanglePacker::findCoords(glitch::util::CFastRectanglePacker::SNode *,int,int)
// int *glitch::util::CFastRectanglePacker::findCoords(int a1, uint32_t *a2, int a3, int a4);
