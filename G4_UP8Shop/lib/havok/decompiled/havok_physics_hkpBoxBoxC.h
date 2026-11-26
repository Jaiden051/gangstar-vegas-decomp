#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpBoxBoxC.h
// Library: havok | Module: havok_physics_hkpBoxBoxC
// Binary Address Span: 0x16f9000 .. 0x16ff1d0 (11 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x16f9000] (752 bytes) hkpBoxBoxCollisionDetection::checkCompleteness(hkpBoxBoxManifold &,int,int)const
// hkpBoxBoxManifold *hkpBoxBoxCollisionDetection::checkCompleteness( hkpBoxBoxCollisionDetection *this, hkpBoxBoxManifold *a2, int a3, int a4);
// [0x16f92f0] (1689 bytes) hkpBoxBoxCollisionDetection::addPoint(hkpBoxBoxManifold &,hkpBoxBoxCollisionDetection::hkpFeaturePointCache const&,hkpFeatureContactPoint &)const
// uint32_t *hkpBoxBoxCollisionDetection::addPoint( uint32_t *a1, float *a2, hkpBoxBoxManifold *a3, int a4, uint8_t *a5);
// [0x16f9990] (3766 bytes) hkpBoxBoxCollisionDetection::findAdditionalManifoldPoints(hkpBoxBoxManifold &,hkpFeatureContactPoint)const
// const int16_t *hkpBoxBoxCollisionDetection::findAdditionalManifoldPoints( float *a1, hkpBoxBoxManifold *a2, unsigned int a3);
// [0x16fa850] (6000 bytes) hkpBoxBoxCollisionDetection::checkIntersection(hkVector4f const&)const
// hkpBoxBoxCollisionDetection *hkpBoxBoxCollisionDetection::checkIntersection( hkpBoxBoxCollisionDetection *this, const hkVector4f *a2, float *a3);
// [0x16fbfc0] (1730 bytes) hkpBoxBoxCollisionDetection::isValidEdgeEdge(hkpBoxBoxCollisionDetection::hkpFeaturePointCache &)const
// bool hkpBoxBoxCollisionDetection::isValidEdgeEdge(float *a1, int a2);
// [0x16fc690] (518 bytes) hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper(hkpBoxBoxManifold &,hkpFeatureContactPoint &,hkSimdFloat32 const&)const
// char hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper( float *a1, uint8_t *a2, uint8_t *a3, float *a4);
// [0x16fc8a0] (438 bytes) hkpBoxBoxCollisionDetection::tryToAddPointOnEdge(hkpBoxBoxManifold &,int,int,int,int,hkVector4f const&,hkVector4f const&,hkSimdFloat32 const&)const
// char hkpBoxBoxCollisionDetection::tryToAddPointOnEdge( float *a1, uint8_t *a2, int a3, int a4, char a5, char a6, float *a7, float *a8, float *a9);
// [0x16fca60] (4873 bytes) hkpBoxBoxCollisionDetection::findClosestPoint(hkpBoxBoxManifold &,hkpFeatureContactPoint &,hkpBoxBoxCollisionDetection::hkpFeaturePointCache &)const
// int hkpBoxBoxCollisionDetection::findClosestPoint(float *a1, int a2, uint8_t *a3, int a4);
// [0x16fdd70] (2478 bytes) hkpBoxBoxCollisionDetection::refreshManifold(hkpBoxBoxManifold &,hkSimdFloat32 &)const
// int hkpBoxBoxCollisionDetection::refreshManifold(int a1, hkpBoxBoxManifold *a2, float *a3);
// [0x16fe720] (1461 bytes) hkpBoxBoxCollisionDetection::calculateClosestPoint(hkContactPoint &)const
// hkpBoxBoxCollisionDetection *hkpBoxBoxCollisionDetection::calculateClosestPoint( hkpBoxBoxCollisionDetection *this, hkContactPoint *a2, _OWORD *a3);
// [0x16ff1d0] (2112 bytes) hkpBoxBoxCollisionDetection::calcManifold(hkpBoxBoxManifold &)const
// int16_t *hkpBoxBoxCollisionDetection::calcManifold(hkpBoxBoxCollisionDetection *this, hkpBoxBoxManifold *a2);
