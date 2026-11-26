#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpSymmetr.h
// Library: havok | Module: havok_physics_hkpSymmetr
// Binary Address Span: 0x169beb0 .. 0x170f300 (171 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x169beb0] (92 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::getPenetrations(int a1, int a2, int a3, int a4, int a5);
// [0x169bf10] (85 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::staticGetPenetrations(int a1, int a2, int a3, int a4);
// [0x169bfb0] (95 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::getClosestPoints(int a1, int a2, int a3, int a4, int a5);
// [0x169c010] (88 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::staticGetClosestPoints(int a1, int a2, int a3, int a4);
// [0x169c0c0] (322 bytes) hkpSymmetricAgent<hkpBvTreeStreamAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpBvTreeStreamAgent>::linearCast(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x169c210] (274 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::staticLinearCast(int a1, int a2, float *a3, int a4, int a5);
// [0x169c330] (322 bytes) hkpSymmetricAgent<hkpShapeCollectionAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpShapeCollectionAgent>::linearCast(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x169c570] (66 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::updateShapeCollectionFilter( uint32_t *a1, uint32_t *a2, int a3, int a4, int a5);
// [0x169c640] (92 bytes) hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::getPenetrations( int a1, int a2, int a3, int a4, int a5);
// [0x169c6a0] (95 bytes) hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::getClosestPoints( int a1, int a2, int a3, int a4, int a5);
// [0x169c700] (66 bytes) hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::updateShapeCollectionFilter( int a1, int a2, int a3, int a4, int a5);
// [0x169c750] (163 bytes) hkpSymmetricAgent<hkpBvTreeStreamAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpBvTreeStreamAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpBvTreeStreamAgent> *this);
// [0x169c800] (163 bytes) hkpSymmetricAgent<hkpShapeCollectionAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpShapeCollectionAgent>::~hkpSymmetricAgent( hkpSymmetricAgent<hkpShapeCollectionAgent> *this);
// [0x169c970] (106 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent> *this);
// [0x169c9e0] (106 bytes) hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent> *this);
// [0x169ca50] (106 bytes) hkpSymmetricAgent<hkpShapeCollectionAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpShapeCollectionAgent>::~hkpSymmetricAgent( hkpSymmetricAgent<hkpShapeCollectionAgent> *this);
// [0x169cac0] (106 bytes) hkpSymmetricAgent<hkpBvTreeStreamAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpBvTreeStreamAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpBvTreeStreamAgent> *this);
// [0x169cbe0] (163 bytes) hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent> *this);
// [0x169cc90] (163 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent> *this);
// [0x169cd40] (452 bytes) hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::processCollision( int a1, int a2, int a3, int a4, float *a5);
// [0x169e410] (452 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// 0x169e410 hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// [0x16a11e0] (29 bytes) hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpSphereBoxAgent> *this);
// [0x16a1200] (9 bytes) hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// void hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::updateShapeCollectionFilter();
// [0x16a1210] (274 bytes) hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::staticLinearCast(int a1, int a2, float *a3, int a4, int a5);
// [0x16a1330] (96 bytes) hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpSphereBoxAgent> *this);
// [0x16a1a90] (452 bytes) hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::processCollision( int a1, uint32_t *a2, uint32_t *a3, int a4, int a5);
// [0x16a1f20] (85 bytes) hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::staticGetPenetrations( uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x16a1fc0] (92 bytes) hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getPenetrations( int a1, uint32_t *a2, uint32_t *a3, int a4, int a5);
// [0x16a2590] (88 bytes) hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::staticGetClosestPoints( uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x16a2b60] (95 bytes) hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getClosestPoints( int a1, uint32_t *a2, uint32_t *a3, int a4, int a5);
// [0x16a4ac0] (29 bytes) hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent> *this);
// [0x16a4ae0] (9 bytes) hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// void hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::updateShapeCollectionFilter();
// [0x16a4af0] (274 bytes) hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::staticLinearCast( int a1, int a2, float *a3, int a4, int a5);
// [0x16a4c10] (96 bytes) hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent> *this);
// [0x16a4e70] (85 bytes) hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::staticGetPenetrations( int *a1, int *a2, int a3, int a4);
// [0x16a5160] (92 bytes) hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getPenetrations( int a1, int *a2, int *a3, int a4, int a5);
// [0x16a51c0] (2120 bytes) hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::processCollision( int a1, float **a2, int *a3, int a4, float *a5);
// [0x16a5ed0] (95 bytes) hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getClosestPoints( int a1, float **a2, int *a3, int a4, int a5);
// [0x16a6b80] (88 bytes) hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::staticGetClosestPoints( float **a1, int *a2, int a3, int a4);
// [0x16bc0b0] (29 bytes) hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent> *this);
// [0x16bc0d0] (9 bytes) hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// void hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::updateShapeCollectionFilter();
// [0x16bc0e0] (274 bytes) hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::staticLinearCast( int a1, int a2, float *a3, int a4, int a5);
// [0x16bc200] (96 bytes) hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent> *this);
// [0x16bc380] (2040 bytes) hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::processCollision( int a1, int *a2, int *a3, int a4, float *a5);
// [0x16bce40] (85 bytes) hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::staticGetPenetrations(int *a1, int *a2, int a3, int a4);
// [0x16bcee0] (92 bytes) hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getPenetrations( int a1, int *a2, int *a3, int a4, int a5);
// [0x16bd530] (88 bytes) hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::staticGetClosestPoints( uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x16be1c0] (95 bytes) hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getClosestPoints( int a1, uint32_t *a2, uint32_t *a3, int a4, int a5);
// [0x16c08d0] (85 bytes) hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::staticGetPenetrations( int a1, uint32_t *a2, int a3, int a4);
// [0x16c0c60] (274 bytes) hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::staticLinearCast( int a1, uint32_t *a2, float *a3, int a4, int a5);
// [0x16c10a0] (88 bytes) hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::staticGetClosestPoints( int a1, uint32_t *a2, int a3, int a4);
// [0x16c8350] (92 bytes) hkpSymmetricAgentLinearCast<hkpMoppAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpMoppAgent>::getPenetrations(int a1, int a2, int a3, int a4, int a5);
// [0x16c83b0] (95 bytes) hkpSymmetricAgentLinearCast<hkpMoppAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpMoppAgent>::getClosestPoints(int a1, int a2, int a3, int a4, int a5);
// [0x16c8410] (322 bytes) hkpSymmetricAgent<hkpMoppAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpMoppAgent>::linearCast(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x16c8560] (452 bytes) hkpSymmetricAgentLinearCast<hkpMoppAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpMoppAgent>::processCollision(int a1, int a2, int a3, int a4, float *a5);
// [0x16c8730] (66 bytes) hkpSymmetricAgentLinearCast<hkpMoppAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpSymmetricAgentLinearCast<hkpMoppAgent>::updateShapeCollectionFilter( int a1, int a2, int a3, int a4, int a5);
// [0x16c8780] (85 bytes) hkpSymmetricAgentLinearCast<hkpMoppAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpMoppAgent>::staticGetPenetrations(int a1, int a2, int a3, int a4);
// [0x16c87e0] (88 bytes) hkpSymmetricAgentLinearCast<hkpMoppAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpMoppAgent>::staticGetClosestPoints(int a1, int a2, int a3, int a4);
// [0x16c8840] (166 bytes) hkpSymmetricAgent<hkpMoppAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpMoppAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpMoppAgent> *this);
// [0x16c8b90] (274 bytes) hkpSymmetricAgentLinearCast<hkpMoppAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpMoppAgent>::staticLinearCast( const hkTransformf **a1, const hkTransformf **a2, float *a3, int a4, float a5);
// [0x16c8d20] (109 bytes) hkpSymmetricAgentLinearCast<hkpMoppAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpMoppAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpMoppAgent> *this);
// [0x16c8d90] (109 bytes) hkpSymmetricAgent<hkpMoppAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpMoppAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpMoppAgent> *this);
// [0x16c8eb0] (166 bytes) hkpSymmetricAgentLinearCast<hkpMoppAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpMoppAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpMoppAgent> *this);
// [0x16cdc70] (29 bytes) hkpSymmetricAgentLinearCast<hkpTransformAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpTransformAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpTransformAgent> *this);
// [0x16cdc90] (29 bytes) hkpSymmetricAgent<hkpTransformAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpTransformAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpTransformAgent> *this);
// [0x16cdd50] (322 bytes) hkpSymmetricAgent<hkpTransformAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpTransformAgent>::linearCast( int a1, int a2, const hkTransformf **a3, int a4, int a5, int a6);
// [0x16cdf30] (95 bytes) hkpSymmetricAgentLinearCast<hkpTransformAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpTransformAgent>::getClosestPoints( int a1, int a2, const hkTransformf **a3, int a4, int a5);
// [0x16ce020] (92 bytes) hkpSymmetricAgentLinearCast<hkpTransformAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpTransformAgent>::getPenetrations( int a1, int a2, const hkTransformf **a3, int a4, int a5);
// [0x16ce110] (66 bytes) hkpSymmetricAgentLinearCast<hkpTransformAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpSymmetricAgentLinearCast<hkpTransformAgent>::updateShapeCollectionFilter( int a1, int a2, const hkTransformf **a3, int a4, int a5);
// [0x16ce220] (274 bytes) hkpSymmetricAgentLinearCast<hkpTransformAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpTransformAgent>::staticLinearCast( int *a1, const hkTransformf **a2, float *a3, int a4, int a5);
// [0x16ce3f0] (88 bytes) hkpSymmetricAgentLinearCast<hkpTransformAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpTransformAgent>::staticGetClosestPoints( int *a1, const hkTransformf **a2, uint32_t *a3, int a4);
// [0x16ce500] (85 bytes) hkpSymmetricAgentLinearCast<hkpTransformAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpTransformAgent>::staticGetPenetrations( int *a1, const hkTransformf **a2, uint32_t *a3, int a4);
// [0x16ce560] (96 bytes) hkpSymmetricAgent<hkpTransformAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpTransformAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpTransformAgent> *this);
// [0x16ce5c0] (96 bytes) hkpSymmetricAgentLinearCast<hkpTransformAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpTransformAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpTransformAgent> *this);
// [0x16ced30] (452 bytes) hkpSymmetricAgentLinearCast<hkpTransformAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpTransformAgent>::processCollision( int a1, int a2, const hkTransformf **a3, int *a4, int a5);
// [0x16cf020] (9 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// void hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::updateShapeCollectionFilter();
// [0x16cf030] (163 bytes) hkpSymmetricAgent<hkpMultiSphereAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpMultiSphereAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpMultiSphereAgent> *this);
// [0x16cf150] (106 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpMultiSphereAgent> *this);
// [0x16cf1c0] (106 bytes) hkpSymmetricAgent<hkpMultiSphereAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpMultiSphereAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpMultiSphereAgent> *this);
// [0x16cf2e0] (163 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpMultiSphereAgent> *this);
// [0x16cf5a0] (88 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// uint32_t *hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::staticGetClosestPoints( int a1, int *a2, uint32_t *a3, int a4);
// [0x16cf7e0] (322 bytes) hkpSymmetricAgent<hkpMultiSphereAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpMultiSphereAgent>::linearCast(int a1, int a2, int *a3, int a4, int a5, int a6);
// [0x16cfb40] (274 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// uint32_t *hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::staticLinearCast( int a1, int *a2, float *a3, int a4, int a5);
// [0x16cfe30] (95 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// uint32_t *hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::getClosestPoints( int a1, int a2, int *a3, int a4, int a5);
// [0x16d00a0] (85 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// uint32_t *hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::staticGetPenetrations( int a1, int *a2, uint32_t *a3, int a4);
// [0x16d02d0] (92 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// uint32_t *hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::getPenetrations( int a1, int a2, int *a3, int a4, int a5);
// [0x16d0590] (452 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// float *hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::processCollision( int a1, int a2, int *a3, int a4, int a5);
// [0x16d1540] (66 bytes) hkpSymmetricAgentLinearCast<hkpListAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpSymmetricAgentLinearCast<hkpListAgent>::updateShapeCollectionFilter( int a1, int *a2, int a3, int a4, int a5);
// [0x16d1590] (163 bytes) hkpSymmetricAgent<hkpListAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpListAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpListAgent> *this);
// [0x16d18a0] (452 bytes) hkpSymmetricAgentLinearCast<hkpListAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// hkLifoAllocator *hkpSymmetricAgentLinearCast<hkpListAgent>::processCollision( int a1, int *a2, int a3, int a4, float *a5);
// [0x16d1ae0] (106 bytes) hkpSymmetricAgentLinearCast<hkpListAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpListAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpListAgent> *this);
// [0x16d1b50] (106 bytes) hkpSymmetricAgent<hkpListAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpListAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpListAgent> *this);
// [0x16d1c70] (163 bytes) hkpSymmetricAgentLinearCast<hkpListAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpListAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpListAgent> *this);
// [0x16d2020] (95 bytes) hkpSymmetricAgentLinearCast<hkpListAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpListAgent>::getClosestPoints(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x16d21f0] (322 bytes) hkpSymmetricAgent<hkpListAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpListAgent>::linearCast(int a1, uint32_t *a2, int a3, int a4, int a5, int a6);
// [0x16d23e0] (92 bytes) hkpSymmetricAgentLinearCast<hkpListAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpListAgent>::getPenetrations(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x16db700] (29 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent> *this);
// [0x16db720] (9 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// void hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::updateShapeCollectionFilter();
// [0x16db730] (274 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::staticLinearCast( int a1, int a2, float *a3, int a4, int a5);
// [0x16db850] (96 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent> *this);
// [0x16dba40] (2264 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::processCollision( int a1, float **a2, int *a3, int a4, int a5);
// [0x16dc8d0] (92 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getPenetrations( int a1, float **a2, int *a3, int a4, int a5);
// [0x16dcef0] (85 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::staticGetPenetrations( float **a1, int *a2, int a3, int a4);
// [0x16dd6c0] (88 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::staticGetClosestPoints( float **a1, int *a2, int a3, int a4);
// [0x16dde70] (95 bytes) hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getClosestPoints( int a1, float **a2, int *a3, int a4, int a5);
// [0x16e9cb0] (29 bytes) hkpSymmetricAgentLinearCast<hkpConvexListAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpConvexListAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpConvexListAgent> *this);
// [0x16e9cd0] (29 bytes) hkpSymmetricAgent<hkpConvexListAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpConvexListAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpConvexListAgent> *this);
// [0x16e9f70] (66 bytes) hkpSymmetricAgentLinearCast<hkpConvexListAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// void hkpSymmetricAgentLinearCast<hkpConvexListAgent>::updateShapeCollectionFilter( int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x16ea020] (96 bytes) hkpSymmetricAgent<hkpConvexListAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpConvexListAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpConvexListAgent> *this);
// [0x16ea080] (96 bytes) hkpSymmetricAgentLinearCast<hkpConvexListAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpConvexListAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpConvexListAgent> *this);
// [0x16ea2e0] (274 bytes) hkpSymmetricAgentLinearCast<hkpConvexListAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpConvexListAgent>::staticLinearCast( uint32_t *a1, int a2, float *a3, int a4, int a5);
// [0x16ea450] (322 bytes) hkpSymmetricAgent<hkpConvexListAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpConvexListAgent>::linearCast(int a1, uint32_t *a2, int a3, int a4, int a5, int a6);
// [0x16ea770] (85 bytes) hkpSymmetricAgentLinearCast<hkpConvexListAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpConvexListAgent>::staticGetPenetrations(uint32_t *a1, int a2, int a3, int a4);
// [0x16ea810] (92 bytes) hkpSymmetricAgentLinearCast<hkpConvexListAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpConvexListAgent>::getPenetrations( int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x16eaad0] (88 bytes) hkpSymmetricAgentLinearCast<hkpConvexListAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpConvexListAgent>::staticGetClosestPoints(uint32_t *a1, int a2, int a3, int a4);
// [0x16eab70] (95 bytes) hkpSymmetricAgentLinearCast<hkpConvexListAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpConvexListAgent>::getClosestPoints( int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x16ec170] (452 bytes) hkpSymmetricAgentLinearCast<hkpConvexListAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpConvexListAgent>::processCollision( hkpConvexListAgent *a1, unsigned int a2, unsigned int a3, int a4, int a5);
// [0x16ec340] (252 bytes) hkpSymmetricAgentFlipCollector::addCdPoint(hkpCdPoint const&)
// int hkpSymmetricAgentFlipCollector::addCdPoint(int a1, float *a2);
// [0x16ec440] (246 bytes) hkpSymmetricAgentFlipCastCollector::addCdPoint(hkpCdPoint const&)
// int hkpSymmetricAgentFlipCastCollector::addCdPoint(int a1, int a2);
// [0x16ec540] (52 bytes) hkpSymmetricAgentFlipBodyCollector::addCdBodyPair(hkpCdBody const&,hkpCdBody const&)
// int hkpSymmetricAgentFlipBodyCollector::addCdBodyPair( hkpSymmetricAgentFlipBodyCollector *this, const hkpCdBody *a2, const hkpCdBody *a3);
// [0x16ec580] (29 bytes) hkpSymmetricAgentFlipBodyCollector::~hkpSymmetricAgentFlipBodyCollector()
// void hkpSymmetricAgentFlipBodyCollector::~hkpSymmetricAgentFlipBodyCollector( hkpSymmetricAgentFlipBodyCollector *this);
// [0x16ec5a0] (29 bytes) hkpSymmetricAgentFlipCastCollector::~hkpSymmetricAgentFlipCastCollector()
// void hkpSymmetricAgentFlipCastCollector::~hkpSymmetricAgentFlipCastCollector( hkpSymmetricAgentFlipCastCollector *this);
// [0x16ec5c0] (29 bytes) hkpSymmetricAgentFlipCollector::~hkpSymmetricAgentFlipCollector()
// void hkpSymmetricAgentFlipCollector::~hkpSymmetricAgentFlipCollector(hkpSymmetricAgentFlipCollector *this);
// [0x16ec5e0] (78 bytes) hkpSymmetricAgentFlipCollector::~hkpSymmetricAgentFlipCollector()
// void hkpSymmetricAgentFlipCollector::~hkpSymmetricAgentFlipCollector(hkpSymmetricAgentFlipCollector *this);
// [0x16ec630] (78 bytes) hkpSymmetricAgentFlipCastCollector::~hkpSymmetricAgentFlipCastCollector()
// void hkpSymmetricAgentFlipCastCollector::~hkpSymmetricAgentFlipCastCollector( hkpSymmetricAgentFlipCastCollector *this);
// [0x16ec680] (78 bytes) hkpSymmetricAgentFlipBodyCollector::~hkpSymmetricAgentFlipBodyCollector()
// void hkpSymmetricAgentFlipBodyCollector::~hkpSymmetricAgentFlipBodyCollector( hkpSymmetricAgentFlipBodyCollector *this);
// [0x16ee5c0] (85 bytes) hkpSymmetricAgentLinearCast<hkpStaticCompoundAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpStaticCompoundAgent>::staticGetPenetrations(int a1, int a2, int a3, int a4);
// [0x16ee620] (88 bytes) hkpSymmetricAgentLinearCast<hkpStaticCompoundAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpStaticCompoundAgent>::staticGetClosestPoints(int a1, int a2, int a3, int a4);
// [0x16ee890] (274 bytes) hkpSymmetricAgentLinearCast<hkpStaticCompoundAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpStaticCompoundAgent>::staticLinearCast( float a1, float a2, float *a3, int a4, int a5);
// [0x16efb20] (29 bytes) hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent> *this);
// [0x16efb40] (9 bytes) hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// void hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::updateShapeCollectionFilter();
// [0x16efb50] (274 bytes) hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::staticLinearCast( int a1, int a2, float *a3, int a4, int a5);
// [0x16efc70] (96 bytes) hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent> *this);
// [0x16efe50] (2525 bytes) hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::processCollision( int a1, int *a2, int *a3, int a4, int a5);
// [0x16f0e10] (92 bytes) hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getPenetrations( int a1, int *a2, int *a3, int a4, int a5);
// [0x16f1460] (85 bytes) hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::staticGetPenetrations( int *a1, int *a2, int a3, int a4);
// [0x16f1d70] (95 bytes) hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getClosestPoints( int a1, int *a2, int *a3, float *a4, int a5);
// [0x16f2ee0] (88 bytes) hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::staticGetClosestPoints( int *a1, int *a2, float *a3, int a4);
// [0x1705610] (29 bytes) hkpSymmetricAgentLinearCast<hkpBvAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpBvAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpBvAgent> *this);
// [0x1705630] (29 bytes) hkpSymmetricAgent<hkpBvAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpBvAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpBvAgent> *this);
// [0x1705650] (66 bytes) hkpSymmetricAgentLinearCast<hkpBvAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpSymmetricAgentLinearCast<hkpBvAgent>::updateShapeCollectionFilter( int a1, int a2, int *a3, int a4, int a5);
// [0x17056a0] (96 bytes) hkpSymmetricAgent<hkpBvAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpBvAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpBvAgent> *this);
// [0x1705700] (96 bytes) hkpSymmetricAgentLinearCast<hkpBvAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpBvAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpBvAgent> *this);
// [0x1705910] (274 bytes) hkpSymmetricAgentLinearCast<hkpBvAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpBvAgent>::staticLinearCast(int *a1, int *a2, float *a3, int a4, int a5);
// [0x1705c20] (322 bytes) hkpSymmetricAgent<hkpBvAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpBvAgent>::linearCast(int a1, int *a2, int *a3, int a4, int a5, int a6);
// [0x1705fc0] (452 bytes) hkpSymmetricAgentLinearCast<hkpBvAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpBvAgent>::processCollision(int a1, int *a2, int *a3, uint32_t *a4, int a5);
// [0x1706350] (95 bytes) hkpSymmetricAgentLinearCast<hkpBvAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvAgent>::getClosestPoints(int a1, int *a2, int *a3, uint32_t *a4, int a5);
// [0x1706530] (88 bytes) hkpSymmetricAgentLinearCast<hkpBvAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvAgent>::staticGetClosestPoints(int *a1, int *a2, int *a3, char a4);
// [0x1706750] (92 bytes) hkpSymmetricAgentLinearCast<hkpBvAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvAgent>::getPenetrations(int a1, int *a2, int *a3, uint32_t *a4, int a5);
// [0x1706930] (85 bytes) hkpSymmetricAgentLinearCast<hkpBvAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvAgent>::staticGetPenetrations(int *a1, int *a2, int *a3, char a4);
// [0x170a840] (85 bytes) hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::staticGetPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::staticGetPenetrations( int a1, int a2, int a3, int a4);
// [0x170a8a0] (88 bytes) hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::staticGetClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::staticGetClosestPoints( int a1, int a2, int a3, int a4);
// [0x170aad0] (274 bytes) hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::staticLinearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::staticLinearCast( int *a1, const hkTransformf **a2, float *a3, int a4, int a5);
// [0x170ac40] (322 bytes) hkpSymmetricAgent<hkpBvCompressedMeshAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpBvCompressedMeshAgent>::linearCast( int a1, int *a2, const hkTransformf **a3, int a4, int a5, int a6);
// [0x170ad90] (92 bytes) hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::getPenetrations( int a1, int a2, int a3, int a4, int a5);
// [0x170adf0] (95 bytes) hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::getClosestPoints( int a1, int a2, int a3, int a4, int a5);
// [0x170ae50] (452 bytes) hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::processCollision( int a1, int a2, int a3, int a4, float *a5);
// [0x170b020] (66 bytes) hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// int hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::updateShapeCollectionFilter( int a1, int a2, int a3, int a4, int a5);
// [0x170b070] (166 bytes) hkpSymmetricAgent<hkpBvCompressedMeshAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpBvCompressedMeshAgent>::~hkpSymmetricAgent( hkpSymmetricAgent<hkpBvCompressedMeshAgent> *this);
// [0x170b190] (109 bytes) hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent> *this);
// [0x170b200] (109 bytes) hkpSymmetricAgent<hkpBvCompressedMeshAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpBvCompressedMeshAgent>::~hkpSymmetricAgent( hkpSymmetricAgent<hkpBvCompressedMeshAgent> *this);
// [0x170b320] (166 bytes) hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent> *this);
// [0x170c220] (66 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::updateShapeCollectionFilter(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpConstraintOwner &)
// uint32_t *hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::updateShapeCollectionFilter( hkpNullAgent *a1, uint32_t *a2, int a3, uint32_t *a4, int a5);
// [0x170c330] (109 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpBvTreeAgent> *this);
// [0x170c3a0] (109 bytes) hkpSymmetricAgent<hkpBvTreeAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpBvTreeAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpBvTreeAgent> *this);
// [0x170c4c0] (166 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::~hkpSymmetricAgentLinearCast()
// void hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::~hkpSymmetricAgentLinearCast( hkpSymmetricAgentLinearCast<hkpBvTreeAgent> *this);
// [0x170c570] (166 bytes) hkpSymmetricAgent<hkpBvTreeAgent>::~hkpSymmetricAgent()
// void hkpSymmetricAgent<hkpBvTreeAgent>::~hkpSymmetricAgent(hkpSymmetricAgent<hkpBvTreeAgent> *this);
// [0x170cee0] (322 bytes) hkpSymmetricAgent<hkpBvTreeAgent>::linearCast(hkpCdBody const&,hkpCdBody const&,hkpLinearCastCollisionInput const&,hkpCdPointCollector &,hkpCdPointCollector*)
// int hkpSymmetricAgent<hkpBvTreeAgent>::linearCast( int a1, uint32_t *a2, const hkTransformf **a3, int a4, int a5, int a6);
// [0x170d4b0] (95 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::getClosestPoints(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdPointCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::getClosestPoints( int a1, uint32_t *a2, const hkTransformf **a3, uint32_t *a4, int a5);
// [0x170d810] (92 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::getPenetrations(hkpCdBody const&,hkpCdBody const&,hkpCollisionInput const&,hkpCdBodyPairCollector &)
// int hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::getPenetrations( int a1, uint32_t *a2, const hkTransformf **a3, uint32_t *a4, int a5);
// [0x170f300] (452 bytes) hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::processCollision(hkpCdBody const&,hkpCdBody const&,hkpProcessCollisionInput const&,hkpProcessCollisionOutput &)
// int hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::processCollision( hkpNullAgent *a1, const hkTransformf **a2, const hkTransformf **a3, int a4, int a5);
