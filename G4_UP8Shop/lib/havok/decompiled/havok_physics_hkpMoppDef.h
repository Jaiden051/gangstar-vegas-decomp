#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpMoppDef.h
// Library: havok | Module: havok_physics_hkpMoppDef
// Binary Address Span: 0x1b06270 .. 0x1b0fb10 (49 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1b06270] (12 bytes) hkpMoppDefaultAssembler::getNumSplittingPlaneDirections(void)const
// int hkpMoppDefaultAssembler::getNumSplittingPlaneDirections();
// [0x1b06280] (12 bytes) hkpMoppDefaultAssembler::getSplittingPlaneDirections(void)const
// int hkpMoppDefaultAssembler::getSplittingPlaneDirections(hkpMoppDefaultAssembler *this);
// [0x1b06290] (124 bytes) hkpMoppDefaultAssembler::getScaleInfo(hkpMoppTreeNode *,hkpMoppCode::CodeInfo *)
// int hkpMoppDefaultAssembler::getScaleInfo(int a1, int a2, float *a3);
// [0x1b06310] (106 bytes) hkpMoppDefaultAssembler::~hkpMoppDefaultAssembler()
// void hkpMoppDefaultAssembler::~hkpMoppDefaultAssembler(hkpMoppDefaultAssembler *this);
// [0x1b06380] (93 bytes) hkpMoppDefaultAssembler::~hkpMoppDefaultAssembler()
// void hkpMoppDefaultAssembler::~hkpMoppDefaultAssembler(hkpMoppDefaultAssembler *this);
// [0x1b06710] (75 bytes) hkpMoppDefaultAssembler::updateParams(hkpMoppAssembler::hkpMoppAssemblerParams const&)
// int hkpMoppDefaultAssembler::updateParams(int a1, int a2);
// [0x1b06760] (1186 bytes) hkpMoppDefaultAssembler::hkpMoppDefaultAssembler(hkpMoppAssembler::hkpMoppAssemblerParams const&,hkpMoppCodeGenerator *,hkpMoppMediator *)
// int hkpMoppDefaultAssembler::hkpMoppDefaultAssembler(int a1, int a2, int a3, int a4);
// [0x1b06c10] (97 bytes) hkpMoppDefaultAssembler::releaseNode(hkpMoppTreeNode *)
// int hkpMoppDefaultAssembler::releaseNode(int a1, int a2);
// [0x1b06c80] (46 bytes) hkpMoppDefaultAssembler::shouldAssemble(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&)
// bool *hkpMoppDefaultAssembler::shouldAssemble(bool *a1, int a2, int a3, uint32_t *a4);
// [0x1b06cb0] (33 bytes) hkpMoppDefaultAssembler::calcRescaleBits(hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&)
// int hkpMoppDefaultAssembler::calcRescaleBits(int a1, int a2, int a3);
// [0x1b06ce0] (306 bytes) hkpMoppDefaultAssembler::recalcRescale(hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&,hkpMoppAssemblerRescaleCommand &)
// int hkpMoppDefaultAssembler::recalcRescale(int a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x1b06e20] (1999 bytes) hkpMoppDefaultAssembler::preCalcScale(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&)
// int hkpMoppDefaultAssembler::preCalcScale(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x1b075f0] (36 bytes) hkpMoppDefaultAssembler::fixScale(hkpMoppTreeNode *)
// int *hkpMoppDefaultAssembler::fixScale(int a1, int *a2);
// [0x1b07620] (332 bytes) hkpMoppDefaultAssembler::calcTermCut(hkpMoppTreeNode *,hkpMoppAssemblerCutInfo &)
// int hkpMoppDefaultAssembler::calcTermCut(int a1, int a2, int a3);
// [0x1b07770] (325 bytes) hkpMoppDefaultAssembler::calcTerminalIdsForChunks(hkpMoppTreeNode *,int,int)
// int hkpMoppDefaultAssembler::calcTerminalIdsForChunks(int a1, int a2, int a3, int a4);
// [0x1b078c0] (123 bytes) hkpMoppDefaultAssembler::calcReoffset(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&)
// unsigned int hkpMoppDefaultAssembler::calcReoffset(int a1, int a2, int a3, int a4);
// [0x1b07940] (98 bytes) hkpMoppDefaultAssembler::initTopDown(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&,hkpMoppAssemblerRescaleCommand &)
// unsigned int hkpMoppDefaultAssembler::initTopDown(int a1, int a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x1b079b0] (450 bytes) hkpMoppDefaultAssembler::addProperty(int,int)
// int hkpMoppDefaultAssembler::addProperty(hkpMoppDefaultAssembler *this, char a2, int a3);
// [0x1b07b80] (251 bytes) hkpMoppDefaultAssembler::addJumpChunk(int)
// int hkpMoppDefaultAssembler::addJumpChunk(hkpMoppDefaultAssembler *this, int a2);
// [0x1b07c80] (258 bytes) hkpMoppDefaultAssembler::addDataOffset(int,int)
// int hkpMoppDefaultAssembler::addDataOffset(hkpMoppDefaultAssembler *this, int16_t a2, int16_t a3);
// [0x1b07d90] (206 bytes) hkpMoppDefaultAssembler::addRescale(hkpMoppAssemblerRescaleCommand const&)
// hkpMoppCodeGenerator *hkpMoppDefaultAssembler::addRescale(int a1, uint32_t *a2);
// [0x1b07e60] (400 bytes) hkpMoppDefaultAssembler::addTermIdOffset(unsigned int)
// int hkpMoppDefaultAssembler::addTermIdOffset(hkpMoppDefaultAssembler *this, unsigned int a2);
// [0x1b07ff0] (618 bytes) hkpMoppDefaultAssembler::addCut(hkpMoppTreeNode const*,hkpMoppAssemblerNodeInfo const&)
// hkpMoppCodeGenerator *hkpMoppDefaultAssembler::addCut(int a1, int a2, int a3);
// [0x1b08260] (112 bytes) hkpMoppDefaultAssembler::checkAndAddProperties(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&)
// int hkpMoppDefaultAssembler::checkAndAddProperties(hkpMoppDefaultAssembler *a1, uint32_t *a2, int a3, int a4);
// [0x1b082d0] (677 bytes) hkpMoppDefaultAssembler::addTerminals(hkpMoppTreeTerminal *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo const&)
// int hkpMoppDefaultAssembler::addTerminals(hkpMoppDefaultAssembler *a1, int a2, int a3, int a4);
// [0x1b08580] (597 bytes) hkpMoppDefaultAssembler::addJump(unsigned int)
// int hkpMoppDefaultAssembler::addJump(hkpMoppDefaultAssembler *this, unsigned int a2);
// [0x1b087e0] (876 bytes) hkpMoppDefaultAssembler::addSplit(int,int,HK_MOPP_SPLIT_DIRECTIONS,int,int)
// hkpMoppCodeGenerator *hkpMoppDefaultAssembler::addSplit( hkpMoppDefaultAssembler *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6);
// [0x1b08b50] (214 bytes) hkpMoppDefaultAssembler::getSplitCode(hkVector4f const&)
// char hkpMoppDefaultAssembler::getSplitCode(hkpMoppDefaultAssembler *this, const hkVector4f *a2);
// [0x1b08c30] (1807 bytes) hkpMoppDefaultAssembler::findPlanes(hkpMoppTreeInternalNode const*,hkpMoppAssemblerNodeInfo const&,int &,int &)
// int hkpMoppDefaultAssembler::findPlanes( __m128i a1, __m128i a2, float *a3, int a4, uint32_t *a5, int *a6, int *a7);
// [0x1b09340] (2109 bytes) hkpMoppDefaultAssembler::preCalcCutPositions(hkpMoppTreeNode *,hkpMoppAssemblerCutInfo const&,hkpMoppAssemblerCutInfo&)
// int hkpMoppDefaultAssembler::preCalcCutPositions( __m128i a1, __m128i a2, hkpMoppDefaultAssembler *a3, int a4, uint32_t *a5, uint32_t *a6);
// [0x1b09b80] (127 bytes) hkpMoppDefaultAssembler::assembleCutAndTerminalCommand(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&)
// int hkpMoppDefaultAssembler::assembleCutAndTerminalCommand(hkpMoppDefaultAssembler *a1, int a2, int a3, int a4);
// [0x1b09c00] (278 bytes) hkpMoppDefaultAssembler::assembleNonTerminalCommand(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&,hkpMoppAssemblerRescaleCommand &)
// int hkpMoppDefaultAssembler::assembleNonTerminalCommand( __m128i a1, __m128i a2, hkpMoppDefaultAssembler *a3, int a4, int a5, uint32_t *a6, uint32_t *a7);
// [0x1b09d20] (2814 bytes) hkpMoppDefaultAssembler::assemblesubNode(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&)
// int hkpMoppDefaultAssembler::assemblesubNode( __m128i a1, __m128i a2, hkpMoppDefaultAssembler *a3, int *a4, uint32_t *a5, uint32_t *a6);
// [0x1b0a820] (5266 bytes) hkpMoppDefaultAssembler::calcChunkPoints(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&,hkArray<unsigned int,hkContainerHeapAllocator> &)
// int hkpMoppDefaultAssembler::calcChunkPoints( __m128i a1, __m128i a2, hkpMoppDefaultAssembler *a3, int a4, uint32_t *a5, uint32_t *a6, hkMemoryAllocator *a7);
// [0x1b0bcc0] (178 bytes) hkpMoppDefaultAssembler::assembleJumpChunkCommand(hkpMoppTreeNode *)
// int hkpMoppDefaultAssembler::assembleJumpChunkCommand(hkpMoppDefaultAssembler *a1, int a2);
// [0x1b0bd80] (2512 bytes) hkpMoppDefaultAssembler::assembleSubNodeIntoChunks(hkpMoppTreeNode *,hkpMoppAssemblerNodeInfo const&,hkpMoppAssemblerNodeInfo&,int,hkArray<unsigned int,hkContainerHeapAllocator> &)
// hkMemoryAllocator *hkpMoppDefaultAssembler::assembleSubNodeIntoChunks( __m128i a1, __m128i a2, hkpMoppDefaultAssembler *a3, uint32_t *a4, uint32_t *a5, int a6, int a7, hkMemoryAllocator *a8, int a9, int a10, int a11, int a12, hkpMoppCodeGenerator *a13, int a14, int a15, int a16);
// [0x1b0df90] (41 bytes) hkpMoppDefaultAssembler::assemble(hkpMoppTreeNode *,hkpMoppNodeMgr *,int)
// uint32_t *hkpMoppDefaultAssembler::assemble( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20);
// [0x1b0e000] (29 bytes) hkpMoppDefaultSplitter::~hkpMoppDefaultSplitter()
// void hkpMoppDefaultSplitter::~hkpMoppDefaultSplitter(hkpMoppDefaultSplitter *this);
// [0x1b0e020] (13 bytes) hkpMoppDefaultSplitter::getFreeNodes(void)
// int hkpMoppDefaultSplitter::getFreeNodes(hkpMoppDefaultSplitter *this);
// [0x1b0e030] (45 bytes) hkpMoppDefaultSplitter::releaseNode(hkpMoppTreeNode *)
// int hkpMoppDefaultSplitter::releaseNode(uint32_t *a1, int a2);
// [0x1b0e060] (93 bytes) hkpMoppDefaultSplitter::~hkpMoppDefaultSplitter()
// void hkpMoppDefaultSplitter::~hkpMoppDefaultSplitter(hkpMoppDefaultSplitter *this);
// [0x1b0e180] (76 bytes) hkpMoppDefaultSplitter::hkpMoppDefaultSplitter(void)
// void hkpMoppDefaultSplitter::hkpMoppDefaultSplitter(hkpMoppDefaultSplitter *this);
// [0x1b0e1d0] (1579 bytes) hkpMoppDefaultSplitter::findSplittingPlanePositions(hkpMoppBasicNode *,hkpMoppSplittingPlaneDirection const*,hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const&,hkpMoppExtent const&,int)
// int hkpMoppDefaultSplitter::findSplittingPlanePositions( uint32_t *a1, int a2, int a3, float **a4, float *a5, int a6);
// [0x1b0e800] (377 bytes) hkpMoppDefaultSplitter::createTerminal(hkpMoppTreeInternalNode *,hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const&)
// int *hkpMoppDefaultSplitter::createTerminal(int a1, int a2, unsigned int **a3);
// [0x1b0e980] (96 bytes) hkpMoppDefaultSplitter::createNode(void)
// int *hkpMoppDefaultSplitter::createNode(hkpMoppDefaultSplitter *this);
// [0x1b0e9e0] (610 bytes) hkpMoppDefaultSplitter::resortAxis(hkpMoppTreeInternalNode const*,int *,float *)
// int hkpMoppDefaultSplitter::resortAxis(int a1, int a2, int *a3, int a4);
// [0x1b0edb0] (1826 bytes) hkpMoppDefaultSplitter::groupPrimitives(hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const&,hkpMoppBasicNode *,int,hkpMoppDefaultSplitter::hkpMoppPrimitiveArray&,hkpMoppDefaultSplitter::hkpMoppPrimitiveArray&)
// uint32_t *hkpMoppDefaultSplitter::groupPrimitives( __m128i a1, int a2, unsigned int *a3, int a4, int a5, unsigned int *a6, uint32_t *a7);
// [0x1b0f4e0] (1577 bytes) hkpMoppDefaultSplitter::split(hkpMoppTreeInternalNode *,hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const&,hkpMoppDefaultSplitter::hkpMoppDsSide,int)
// int hkpMoppDefaultSplitter::split(hkpMoppDefaultSplitter *a1, uint32_t *a2, unsigned int **a3, int a4, int a5);
// [0x1b0fb10] (592 bytes) hkpMoppDefaultSplitter::buildTree(hkpMoppMediator *,hkpMoppCostFunction *,hkpMoppAssembler *,hkpMoppSplitter::hkpMoppSplitParams const&,hkpMoppSplitter::hkpMoppScratchArea &)
// int hkpMoppDefaultSplitter::buildTree(hkpMoppDefaultSplitter *a1, int a2, int a3, int a4, int a5, int *a6);
