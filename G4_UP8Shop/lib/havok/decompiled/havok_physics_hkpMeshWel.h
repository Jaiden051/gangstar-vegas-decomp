#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpMeshWel.h
// Library: havok | Module: havok_physics_hkpMeshWel
// Binary Address Span: 0x1ad4d30 .. 0x1ada3f0 (15 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1ad4d30] (960 bytes) hkpMeshWeldingUtility::testWindingConsistency(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkpTriangleShape const*,hkVector4f const&)
// hkpMeshWeldingUtility *hkpMeshWeldingUtility::testWindingConsistency( hkpMeshWeldingUtility *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkpTriangleShape *a5, const hkVector4f *a6);
// [0x1ad50f0] (120 bytes) hkpMeshWeldingUtility::calcAngleForEdge(hkVector4f const&,hkVector4f const&,hkVector4f const&)
// long double hkpMeshWeldingUtility::calcAngleForEdge( hkpMeshWeldingUtility *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x1ad5170] (352 bytes) hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f&)
// const hkVector4f *hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal( hkpMeshWeldingUtility *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x1ad5850] (34 bytes) hkpMeshWeldingUtility::modifyCombinedEdgesBitcode(unsigned short,int,int)
// int hkpMeshWeldingUtility::modifyCombinedEdgesBitcode(hkpMeshWeldingUtility *this, uint16_t a2, int a3);
// [0x1ad5880] (22 bytes) hkpMeshWeldingUtility::calcSingleEdgeBitcode(unsigned short,int)
// int hkpMeshWeldingUtility::calcSingleEdgeBitcode(hkpMeshWeldingUtility *this, uint16_t a2);
// [0x1ad58a0] (848 bytes) hkpMeshWeldingUtility::createSingularVertexArray(hkVector4f const*,hkVector4f const*,int,hkVector4f*,int *)
// int hkpMeshWeldingUtility::createSingularVertexArray( hkpMeshWeldingUtility *this, const hkVector4f *a2, const hkVector4f *a3, float *a4, hkVector4f *a5);
// [0x1ad5bf0] (468 bytes) hkpMeshWeldingUtility::calcAngleFromVertices(hkVector4f const*,float &,float &)
// long double hkpMeshWeldingUtility::calcAngleFromVertices( hkpMeshWeldingUtility *this, const hkVector4f *a2, float *a3);
// [0x1ad5dd0] (129 bytes) hkpMeshWeldingUtility::calcEdgeAngleBitcode(hkVector4f const*)
// int hkpMeshWeldingUtility::calcEdgeAngleBitcode(hkpMeshWeldingUtility *this);
// [0x1ad5e60] (1391 bytes) hkpMeshWeldingUtility::clipLineAgainstTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const*,hkVector4f const&,float,float &,float &)
// hkpMeshWeldingUtility *hkpMeshWeldingUtility::clipLineAgainstTriangle( hkpMeshWeldingUtility *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5, float a6, float *a7, float *a8);
// [0x1ad6560] (3003 bytes) hkpMeshWeldingUtility::computeTriangleWeldingInfo(hkVector4f const*,hkVector4f const*,int,hkBool,float)
// int hkpMeshWeldingUtility::computeTriangleWeldingInfo(float *a1, float *a2, int a3, char a4, float a5);
// [0x1ad7120] (11061 bytes) hkpMeshWeldingUtility::computeWeldingInfoMultiShape(hkTransformf const&,hkpShapeCollection *,hkpWeldingUtility::WeldingType,hkArray<hkpMeshWeldingUtility::ShapeInfo,hkContainerHeapAllocator> &,bool,bool)
// void hkpMeshWeldingUtility::computeWeldingInfoMultiShape( long double a1, float *a2, int a3, int a4, uint32_t *a5, char a6, char a7);
// [0x1ad9c60] (657 bytes) hkpMeshWeldingUtility::computeWeldingInfo(hkpShapeCollection *,hkpBvTreeShape const*,hkpWeldingUtility::WeldingType,bool,bool)
// int hkpMeshWeldingUtility::computeWeldingInfo( long double a1, int a2, int a3, int a4, char a5, char a6);
// [0x1ad9f00] (864 bytes) hkpMeshWeldingUtility::calcBitcodeForTriangleEdge(hkpBvTreeShape const*,hkpTriangleShape const*,unsigned int,int,hkpMeshWeldingUtility::WindingConsistency,short &)
// 0x1ad9f00 hkpMeshWeldingUtility::calcBitcodeForTriangleEdge(hkpBvTreeShape const*,hkpTriangleShape const*,unsigned int,int,hkpMeshWeldingUtility::WindingConsistency,short &)
// [0x1ada260] (389 bytes) hkpMeshWeldingUtility::calcWeldingInfoForTriangle(unsigned int,hkpBvTreeShape const*,hkpMeshWeldingUtility::WindingConsistency,unsigned short &)
// uint32_t *hkpMeshWeldingUtility::calcWeldingInfoForTriangle( float *a1, int a2, int a3, void *a4, uint16_t *a5);
// [0x1ada3f0] (387 bytes) hkpMeshWeldingUtility::isTriangleWindingValid(unsigned int,hkpBvTreeShape const*)
// hkpMeshWeldingUtility *hkpMeshWeldingUtility::isTriangleWindingValid( hkpMeshWeldingUtility *this, unsigned int a2, const hkpBvTreeShape *a3);
