#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_base_part09.h
// Library: havok | Module: havok_base_part09
// Binary Address Span: 0x1add6a0 .. 0x1b14c10 (44 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1add6a0] (589 bytes) addTriangle(int,int,int,int,hkVector4f const&,hkVector4f const&,hkVector4f const&,hkGeometry &,hkArray<int,hkContainerHeapAllocator> &)
// int *addTriangle( int a1, int a2, int a3, int a4, const hkVector4f *a5, const hkVector4f *a6, const hkVector4f *a7, hkGeometry *a8, hkArray<int, hkContainerHeapAllocator> *a9);
// [0x1ae7520] (183 bytes) hkVector4UtilImpl<float>::getFloatToInt16FloorCorrection(float &)
// hkVector4UtilImpl<float> *hkVector4UtilImpl<float>::getFloatToInt16FloorCorrection( hkVector4UtilImpl<float> *this);
// [0x1ae7b00] (2432 bytes) hkTjunctionDetector::vertexCloseToTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,float)
// int32_t hkTjunctionDetector::vertexCloseToTriangle( hkTjunctionDetector *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x1ae8480] (146 bytes) findTriangle(hkpSimpleMeshShape *,hkArray<unsigned int,hkContainerHeapAllocator> const&,int,int,int)
// int findTriangle( hkpSimpleMeshShape *a1, const hkArray<unsigned int, hkContainerHeapAllocator> *a2, int a3, int a4, int a5);
// [0x1ae8520] (1532 bytes) hkTjunctionDetector::detect(hkpSimpleMeshShape *,hkpBvTreeShape const*,hkArray<hkTjunctionDetector::ProximityInfo,hkContainerHeapAllocator> &,hkArray<hkVector4f,hkContainerHeapAllocator> &,float,float)
// hkpSimpleMeshShape *hkTjunctionDetector::detect( hkpSimpleMeshShape *a1, int *a2, hkMemoryAllocator *a3, hkMemoryAllocator *a4, hkVector4f *a5, int a6);
// [0x1ae8b20] (490 bytes) hkTjunctionDetector::createSimpleMeshFromGeometry(hkGeometry const&)
// int *hkTjunctionDetector::createSimpleMeshFromGeometry(hkTjunctionDetector *this);
// [0x1ae8d10] (504 bytes) hkTjunctionDetector::detect(hkGeometry const&,hkArray<hkTjunctionDetector::ProximityInfo,hkContainerHeapAllocator> &,hkArray<hkVector4f,hkContainerHeapAllocator> &,float,float)
// hkpSimpleMeshShape *hkTjunctionDetector::detect( hkTjunctionDetector *a1, hkMemoryAllocator *a2, hkMemoryAllocator *a3, int64_t a4);
// [0x1af7340] (1340 bytes) hkVehicleFrictionDescriptionInitValues
// void hkVehicleFrictionDescriptionInitValues(int a1, int a2);
// [0x1af7880] (11561 bytes) hkVehicleFrictionApplyVehicleFriction
// float *hkVehicleFrictionApplyVehicleFriction(float *a1, float *a2, int a3, int a4);
// [0x1afa5d0] (12 bytes) hkJacobianStiffSpringChainSchema_getJacobians
// int hkJacobianStiffSpringChainSchema_getJacobians(int a1);
// [0x1afa5e0] (12 bytes) hkJacobianBallSocketChainSchema_getJacobians
// int hkJacobianBallSocketChainSchema_getJacobians(int a1);
// [0x1afa5f0] (12 bytes) hkJacobianStabilizedBallSocketChainSchema_getJacobians
// int hkJacobianStabilizedBallSocketChainSchema_getJacobians(int a1);
// [0x1afa600] (12 bytes) hkJacobianPoweredChainSchema_getLinearJacobians
// int hkJacobianPoweredChainSchema_getLinearJacobians(int a1);
// [0x1afa610] (20 bytes) hkJacobianPoweredChainSchema_getAngularJacobians
// int hkJacobianPoweredChainSchema_getAngularJacobians(int a1, int a2);
// [0x1afa630] (151 bytes) hkJacobianStabilizedBallSocketChainSchema_init
// int hkJacobianStabilizedBallSocketChainSchema_init( int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);
// [0x1afa6d0] (794 bytes) hkPoweredChain_DisableMotorInMatrixRow_ThisConstraint
// uint32_t *hkPoweredChain_DisableMotorInMatrixRow_ThisConstraint(char *a1, char a2, int a3, uint32_t *a4);
// [0x1afa9f0] (247 bytes) hkPoweredChain_DisableMotorInMatrixRow_NextConstraint
// uint32_t *hkPoweredChain_DisableMotorInMatrixRow_NextConstraint(char *a1, uint32_t *a2);
// [0x1afaaf0] (2113 bytes) hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow
// uint32_t *hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow( char a1, int a2, char *a3, hkMatrix3f *a4, uint32_t *a5);
// [0x1afb340] (5444 bytes) hkPoweredChain_BuildConstraintMatrixAndLuDecomposition
// uint32_t *hkPoweredChain_BuildConstraintMatrixAndLuDecomposition( int a1, float *a2, char *a3, int a4, int a5, int a6, int a7, int a8);
// [0x1afc890] (630 bytes) hkPoweredChainBuildJacobian
// int hkPoweredChainBuildJacobian(int a1, int a2, int *a3);
// [0x1afcb10] (874 bytes) hkPoweredChain_UpdateLuDecomposition
// int hkPoweredChain_UpdateLuDecomposition(int a1, int a2, int a3, int a4);
// [0x1afce80] (1143 bytes) hkPoweredChain_CalculateVelocities
// int hkPoweredChain_CalculateVelocities(int a1, int a2, int a3);
// [0x1afd300] (83 bytes) hkPoweredChain_OverwriteVelocityWithExplicitImpulse
// int hkPoweredChain_OverwriteVelocityWithExplicitImpulse(int a1, int a2, int a3, int a4);
// [0x1afd360] (384 bytes) hkPoweredChain_RestoreVelocityValue
// int hkPoweredChain_RestoreVelocityValue(int a1, int a2, uint32_t *a3, int a4);
// [0x1afd4e0] (376 bytes) hkPoweredChain_SolveConstraintMatrix_ComputeVectorG
// void hkPoweredChain_SolveConstraintMatrix_ComputeVectorG(uint32_t *a1, uint32_t *a2);
// [0x1afd660] (741 bytes) hkPoweredChain_ScanAndDisableMotors
// int *hkPoweredChain_ScanAndDisableMotors(uint32_t *a1, int *a2, int *a3, float *a4);
// [0x1afd950] (2741 bytes) hkPoweredChain_ScanAndEnableMotors
// int *hkPoweredChain_ScanAndEnableMotors(uint32_t *a1, int *a2, int *a3);
// [0x1afe420] (756 bytes) hkInternalConstraintUtils_calcRelativeAngle
// float *hkInternalConstraintUtils_calcRelativeAngle( float *a1, float *a2, float *a3, float *a4, float *a5, float *a6);
// [0x1afe720] (501 bytes) hkCalcMotorData
// int hkCalcMotorData(int a1, int a2, float *a3);
// [0x1afe920] (930 bytes) hk1dLinearVelocityMotorBeginJacobian
// float *hk1dLinearVelocityMotorBeginJacobian(float *a1, float *a2, int a3, int a4, float *a5);
// [0x1afecd0] (104 bytes) hk1dLinearVelocityMotorCommitJacobian
// int hk1dLinearVelocityMotorCommitJacobian(int a1, int a2, int a3, int *a4);
// [0x1afffe0] (224 bytes) hkBallSocketChainBuildJacobian
// int hkBallSocketChainBuildJacobian(int a1, int a2, int a3, float a4, int a5, int a6, int a7, int a8, int *a9);
// [0x1b000c0] (154 bytes) hkStabilizedBallSocketChainBuildJacobian
// int *hkStabilizedBallSocketChainBuildJacobian( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9);
// [0x1b00160] (902 bytes) hkStiffSpringChainBuildJacobian
// int hkStiffSpringChainBuildJacobian( int a1, int a2, int a3, float a4, int a5, int a6, int a7, int a8, uint32_t *a9);
// [0x1b004f0] (3241 bytes) hkBallSocketConstraintBuildJacobian_noSchema_Proj
// int hkBallSocketConstraintBuildJacobian_noSchema_Proj(float *a1, float *a2, int a3, int a4);
// [0x1b011a0] (3154 bytes) hkBallSocketConstraintBuildJacobian_noSchema_noProj
// int hkBallSocketConstraintBuildJacobian_noSchema_noProj(float *a1, float *a2, int a3, int a4);
// [0x1b01e00] (3896 bytes) hkStabilizedBallSocketConstraintBuildJacobian_noSchema
// int *hkStabilizedBallSocketConstraintBuildJacobian_noSchema(float *a1, float *a2, float a3, int a4, int a5);
// [0x1b131d0] (870 bytes) hkMatrix6fAdd
// float *hkMatrix6fAdd(float *a1, float *a2);
// [0x1b13540] (870 bytes) hkMatrix6fSub
// float *hkMatrix6fSub(float *a1, float *a2);
// [0x1b138b0] (2484 bytes) hkMatrix6fSetMul
// float *hkMatrix6fSetMul(int a1, float *a2, float *a3);
// [0x1b14270] (947 bytes) hkMatrix6fSetMulV
// float *hkMatrix6fSetMulV(float *a1, float *a2, float *a3);
// [0x1b14630] (106 bytes) hkMatrix6fSetTranspose
// hkMatrix3f *hkMatrix6fSetTranspose(hkMatrix3f *a1, hkMatrix3f *a2);
// [0x1b146a0] (1382 bytes) hkMatrix6f::setInvert(hkMatrix6f const&)
// float *hkMatrix6f::setInvert(hkMatrix6f *this, const hkMatrix6f *a2);
// [0x1b14c10] (42 bytes) hkMatrix6fSetInvert
// float *hkMatrix6fSetInvert(hkMatrix6f *a1, hkMatrix6f *a2);
