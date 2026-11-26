#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpPointTo.h
// Library: havok | Module: havok_physics_hkpPointTo
// Binary Address Span: 0x17161f0 .. 0x1af1bc0 (26 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x17161f0] (22 bytes) hkpPointToPlaneConstraintData::Atoms::staticClass(void)
// void *hkpPointToPlaneConstraintData::Atoms::staticClass();
// [0x1716210] (22 bytes) hkpPointToPlaneConstraintData::staticClass(void)
// void *hkpPointToPlaneConstraintData::staticClass();
// [0x1717500] (22 bytes) hkpPointToPathConstraintData::staticClass(void)
// void *hkpPointToPathConstraintData::staticClass();
// [0x1721890] (52 bytes) hkpPointToPathConstraintData::getConstraintInfo(hkpConstraintData::ConstraintInfo &)const
// uint32_t *hkpPointToPathConstraintData::getConstraintInfo(int a1, uint32_t *a2);
// [0x17218d0] (20 bytes) hkpPointToPathConstraintData::getRuntimeInfo(hkBool,hkpConstraintData::RuntimeInfo &)const
// uint32_t *hkpPointToPathConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3);
// [0x17218f0] (39 bytes) hkpPointToPathConstraintData::isValid(void)const
// hkpPointToPathConstraintData *hkpPointToPathConstraintData::isValid( hkpPointToPathConstraintData *this, int a2);
// [0x1721920] (12 bytes) hkpPointToPathConstraintData::getType(void)const
// int hkpPointToPathConstraintData::getType();
// [0x1721930] (114 bytes) hkpPointToPathConstraintData::~hkpPointToPathConstraintData()
// void hkpPointToPathConstraintData::~hkpPointToPathConstraintData(hkpPointToPathConstraintData *this);
// [0x17219b0] (93 bytes) hkpPointToPathConstraintData::~hkpPointToPathConstraintData()
// void hkpPointToPathConstraintData::~hkpPointToPathConstraintData(hkpPointToPathConstraintData *this);
// [0x1721a10] (2933 bytes) hkpPointToPathConstraintData::buildJacobian(hkpConstraintQueryIn const&,hkpConstraintQueryOut &)
// int hkpPointToPathConstraintData::buildJacobian(int a1, int a2, int a3);
// [0x1722590] (379 bytes) hkpPointToPathConstraintData::hkpPointToPathConstraintData(void)
// void hkpPointToPathConstraintData::hkpPointToPathConstraintData(hkpPointToPathConstraintData *this);
// [0x1722710] (147 bytes) hkpPointToPathConstraintData::setPath(hkpParametricCurve *)
// int hkpPointToPathConstraintData::setPath(hkpPointToPathConstraintData *this, hkpParametricCurve *a2);
// [0x17227b0] (53 bytes) hkpPointToPathConstraintData::calcPivot(hkTransformf const&,hkVector4f &)const
// const hkTransformf *hkpPointToPathConstraintData::calcPivot( hkpPointToPathConstraintData *this, const hkTransformf *a2, hkVector4f *a3);
// [0x17227f0] (1141 bytes) hkpPointToPathConstraintData::setInWorldSpace(hkTransformf const&,hkTransformf const&,hkVector4f const&,hkpParametricCurve *,hkTransformf const&)
// int hkpPointToPathConstraintData::setInWorldSpace( hkpPointToPathConstraintData *this, const hkTransformf *a2, const hkTransformf *a3, const hkVector4f *a4, hkpParametricCurve *a5, const hkTransformf *a6, int a7, float a8, float a9, float a10, int a11, float a12, float a13, float a14, int a15, char a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, float a48, float a49, float a50, int a51, float a52, float a53, float a54, int a55, float a56, float a57, float a58, int a59, const hkVector4f *a60, hkpParametricCurve *a61, const hkTransformf *a62, int a63);
// [0x1722c70] (573 bytes) hkpPointToPathConstraintData::setInBodySpace(hkVector4f const&,hkVector4f const&,hkpParametricCurve *)
// int hkpPointToPathConstraintData::setInBodySpace( hkpPointToPathConstraintData *this, const hkVector4f *a2, const hkVector4f *a3, hkpParametricCurve *a4);
// [0x1725610] (33 bytes) hkpPointToPlaneConstraintData::getRuntimeInfo(hkBool,hkpConstraintData::RuntimeInfo &)const
// int64_t hkpPointToPlaneConstraintData::getRuntimeInfo(int a1, char a2, uint64_t *a3);
// [0x1725640] (12 bytes) hkpPointToPlaneConstraintData::getType(void)const
// int hkpPointToPlaneConstraintData::getType();
// [0x1725650] (29 bytes) hkpPointToPlaneConstraintData::~hkpPointToPlaneConstraintData()
// void hkpPointToPlaneConstraintData::~hkpPointToPlaneConstraintData(hkpPointToPlaneConstraintData *this);
// [0x1725670] (53 bytes) hkpPointToPlaneConstraintData::getConstraintInfo(hkpConstraintData::ConstraintInfo &)const
// uint32_t *hkpPointToPlaneConstraintData::getConstraintInfo(int a1, uint32_t *a2);
// [0x17256b0] (88 bytes) hkpPointToPlaneConstraintData::isValid(void)const
// hkpPointToPlaneConstraintData *hkpPointToPlaneConstraintData::isValid( hkpPointToPlaneConstraintData *this, int a2);
// [0x1725710] (96 bytes) hkpPointToPlaneConstraintData::~hkpPointToPlaneConstraintData()
// void hkpPointToPlaneConstraintData::~hkpPointToPlaneConstraintData(hkpPointToPlaneConstraintData *this);
// [0x1725770] (350 bytes) hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData(void)
// void hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData(hkpPointToPlaneConstraintData *this);
// [0x17258d0] (744 bytes) hkpPointToPlaneConstraintData::setInWorldSpace(hkTransformf const&,hkTransformf const&,hkVector4f const&,hkVector4f const&)
// char *hkpPointToPlaneConstraintData::setInWorldSpace( hkpPointToPlaneConstraintData *this, const hkTransformf *a2, const hkTransformf *a3, const hkVector4f *a4, const hkVector4f *a5);
// [0x1725bc0] (736 bytes) hkpPointToPlaneConstraintData::setInBodySpace(hkVector4f const&,hkVector4f const&,hkVector4f const&)
// char *hkpPointToPlaneConstraintData::setInBodySpace( hkpPointToPlaneConstraintData *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x1aed9a0] (1445 bytes) hkpPointToPlaneDrawer::drawConstraint(hkpPointToPlaneConstraintData const*,hkTransformf const&,hkTransformf const&,hkDebugDisplayHandler *,int,int)
// int hkpPointToPlaneDrawer::drawConstraint( hkpPointToPlaneDrawer *this, const hkpPointToPlaneConstraintData *a2, const hkTransformf *a3, const hkTransformf *a4, hkDebugDisplayHandler *a5, int a6, int a7);
// [0x1af1bc0] (781 bytes) hkpPointToPathDrawer::drawConstraint(hkpPointToPathConstraintData const*,hkTransformf const&,hkTransformf const&,hkDebugDisplayHandler *,int,int)
// int hkpPointToPathDrawer::drawConstraint( hkpPointToPathDrawer *this, const hkpPointToPathConstraintData *a2, const hkTransformf *a3, const hkTransformf *a4, hkDebugDisplayHandler *a5, int a6, int a7);
