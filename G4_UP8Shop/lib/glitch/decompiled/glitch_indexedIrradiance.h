#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_indexedIrradiance.h
// Library: glitch | Module: glitch_indexedIrradiance
// Binary Address Span: 0xd8a520 .. 0xde0450 (52 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xd8a520] (96 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingNbNeighbours(glitch::indexedIrradiance::CIndexedIrradianceManager::ProbeSimilarity const&,glitch::indexedIrradiance::CIndexedIrradianceManager::ProbeSimilarity const&)
// bool glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingNbNeighbours( int a1, int a2);
// [0xd8a580] (9 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::~CIndexedIrradiancePoint()
// void glitch::indexedIrradiance::CIndexedIrradiancePoint::~CIndexedIrradiancePoint();
// [0xd9ec80] (442 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::clear(void)
// void glitch::indexedIrradiance::CIndexedIrradianceManager::clear( glitch::indexedIrradiance::CIndexedIrradianceManager *this);
// [0xd9ee40] (1070 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData(void)
// int glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData( glitch::indexedIrradiance::CIndexedIrradianceManager *this);
// [0xd9f270] (351 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData(int,float,glitch::core::vector3d<int> const&)
// int glitch::indexedIrradiance::CIndexedIrradianceManager::initialiseIrradianceData( glitch::indexedIrradiance::CIndexedIrradianceManager *a1, int a2, float a3, int *a4);
// [0xd9f3d0] (130 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingAvgDistance(glitch::indexedIrradiance::CIndexedIrradianceManager::ProbeSimilarity const&,glitch::indexedIrradiance::CIndexedIrradianceManager::ProbeSimilarity const&)
// bool glitch::indexedIrradiance::CIndexedIrradianceManager::compareProbeSimilarityUsingAvgDistance( int a1, int a2);
// [0xd9f460] (728 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradianceInternal(glitch::core::vector3d<int> const&,int)
// void glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradianceInternal( uint32_t *a1, int *a2, int a3);
// [0xd9f740] (285 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradiance(glitch::core::vector3d<int> const&,int)
// void glitch::indexedIrradiance::CIndexedIrradianceManager::expandIrradiance(uint32_t *a1, int *a2, int a3);
// [0xd9f860] (924 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::compressIndex(void)
// uint32_t *glitch::indexedIrradiance::CIndexedIrradianceManager::compressIndex( glitch::indexedIrradiance::CIndexedIrradianceManager *this);
// [0xd9fc00] (634 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::simulateIndexCompression(void)
// uint32_t *glitch::indexedIrradiance::CIndexedIrradianceManager::simulateIndexCompression( glitch::indexedIrradiance::CIndexedIrradianceManager *this);
// [0xd9fe80] (589 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::findSHCoefRange(void)
// void glitch::indexedIrradiance::CIndexedIrradianceManager::findSHCoefRange( glitch::indexedIrradiance::CIndexedIrradianceManager *this);
// [0xda00d0] (12 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::getNbSHCoefs(void)
// int glitch::indexedIrradiance::CIndexedIrradiancePoint::getNbSHCoefs();
// [0xda00e0] (12 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::getSizeOfCoef(void)
// int glitch::indexedIrradiance::CIndexedIrradiancePoint::getSizeOfCoef();
// [0xda00f0] (215 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(glitch::indexedIrradiance::CIndexedIrradiancePoint const*)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2);
// [0xda01d0] (215 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom(glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::copyFrom( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2);
// [0xda02b0] (58 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::operator=(glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::operator=( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2);
// [0xda02f0] (124 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::CIndexedIrradiancePoint(glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::CIndexedIrradiancePoint( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2);
// [0xda0370] (251 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::operator+=(glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::operator+=( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2);
// [0xda0470] (251 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::operator-=(glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::operator-=( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2);
// [0xda0570] (291 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::operator*=(float)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::operator*=( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, unsigned int a2);
// [0xda06a0] (108 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::clear(void)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::clear( glitch::indexedIrradiance::CIndexedIrradiancePoint *this);
// [0xda0710] (116 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::CIndexedIrradiancePoint(void)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::CIndexedIrradiancePoint( glitch::indexedIrradiance::CIndexedIrradiancePoint *this);
// [0xda0790] (2035 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::load(char const*,glitch::core::vector3d<float> const&)
// int glitch::indexedIrradiance::CIndexedIrradianceManager::load( glitch::indexedIrradiance::CIndexedIrradianceManager *a1, const char *a2);
// [0xda0f90] (64 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::load(char const*)
// int glitch::indexedIrradiance::CIndexedIrradianceManager::load( glitch::indexedIrradiance::CIndexedIrradianceManager *this, const char *a2);
// [0xda0fd0] (398 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::operator*(float)const
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::operator*( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, float a2, float a3);
// [0xda1160] (342 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::modulate(glitch::indexedIrradiance::CIndexedIrradiancePoint const&,glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::modulate( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a3);
// [0xda12c0] (34 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::setCoefficientAllChannel(int,glitch::core::vector3d<float> const&)
// int glitch::indexedIrradiance::CIndexedIrradiancePoint::setCoefficientAllChannel(int a1, int a2, uint32_t *a3);
// [0xda12f0] (26 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::setChannelCoefficient(int,int,float)
// char *glitch::indexedIrradiance::CIndexedIrradiancePoint::setChannelCoefficient( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, int a2, int a3, float a4);
// [0xda1310] (72 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::setPlainColor(glitch::core::vector3d<float> const&)
// int glitch::indexedIrradiance::CIndexedIrradiancePoint::setPlainColor( glitch::indexedIrradiance::CIndexedIrradiancePoint *a1, uint32_t *a2);
// [0xda1360] (229 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::setVerticalHemispheres(glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&)
// int glitch::indexedIrradiance::CIndexedIrradiancePoint::setVerticalHemispheres( glitch::indexedIrradiance::CIndexedIrradiancePoint *a1, float *a2, float *a3);
// [0xda1450] (26 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakDirection(glitch::core::vector3d<float> const&)
// uint32_t *glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakDirection(uint32_t *a1, uint32_t *a2);
// [0xda1470] (593 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::substract(glitch::indexedIrradiance::CIndexedIrradiancePoint const&,glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::substract( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a3);
// [0xda16d0] (593 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::add(glitch::indexedIrradiance::CIndexedIrradiancePoint const&,glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::add( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a3);
// [0xda1930] (741 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(glitch::indexedIrradiance::CIndexedIrradiancePoint const&,glitch::indexedIrradiance::CIndexedIrradiancePoint const&,float)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a3, unsigned int a4);
// [0xda1c20] (741 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp(glitch::indexedIrradiance::CIndexedIrradiancePoint const*,glitch::indexedIrradiance::CIndexedIrradiancePoint const*,float)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::lerp( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a3, unsigned int a4);
// [0xda1f10] (6409 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPointOptim(glitch::core::vector3d<float> const&,int)const
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPointOptim( glitch::indexedIrradiance::CIndexedIrradiancePoint *a1, int a2, float *a3, int a4);
// [0xda3820] (4836 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint(glitch::core::vector3d<float> const&,int)const
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint( glitch::indexedIrradiance::CIndexedIrradiancePoint *a1, int a2, float *a3, int a4);
// [0xda4b10] (281 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint(glitch::core::vector3d<float> const&)const
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradianceManager::getIndexedPoint( glitch::indexedIrradiance::CIndexedIrradiancePoint *a1, int a2, float *a3);
// [0xda4c30] (29 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakIntensity(glitch::core::vector3d<float> const&)
// uint32_t *glitch::indexedIrradiance::CIndexedIrradiancePoint::setPeakIntensity(uint32_t *a1, uint32_t *a2);
// [0xda4c50] (30 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakDirection(void)const
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakDirection( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, uint32_t *a2);
// [0xda4c70] (33 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakIntensity(void)const
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::getPeakIntensity( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, uint32_t *a2);
// [0xda4ca0] (1105 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::getParameters(float *,float *,float *,float *,float *,float *,float *,float *,float *)const
// int glitch::indexedIrradiance::CIndexedIrradiancePoint::getParameters( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8, float *a9, float *a10);
// [0xda5100] (194 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::getParameters(glitch::core::vector3d<float> const&,float *,float *,float *,float *,float *,float *,float *,float *,float *)const
// void glitch::indexedIrradiance::CIndexedIrradianceManager::getParameters( int a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8, float *a9, float *a10, float *a11);
// [0xda51d0] (659 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::evalDiffuse(glitch::core::vector3d<float> const&)const
// float *glitch::indexedIrradiance::CIndexedIrradiancePoint::evalDiffuse( float *a1, glitch::indexedIrradiance::CIndexedIrradiancePoint *a2, float *a3);
// [0xda5470] (289 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::sample(glitch::core::vector3d<float> const*,int)const
// int glitch::indexedIrradiance::CIndexedIrradiancePoint::sample( glitch::indexedIrradiance::CIndexedIrradiancePoint *a1, int a2, unsigned int a3);
// [0xda55a0] (6008 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::compressIrradiance(float,int)
// void glitch::indexedIrradiance::CIndexedIrradianceManager::compressIrradiance( glitch::indexedIrradiance::CIndexedIrradianceManager *this, float a2, char *a3);
// [0xda6d20] (335 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference(glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2);
// [0xda6e70] (107 bytes) glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference(glitch::indexedIrradiance::CIndexedIrradiancePoint const&,glitch::indexedIrradiance::CIndexedIrradiancePoint const&)
// glitch::indexedIrradiance::CIndexedIrradiancePoint *glitch::indexedIrradiance::CIndexedIrradiancePoint::absDifference( glitch::indexedIrradiance::CIndexedIrradiancePoint *this, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a2, const glitch::indexedIrradiance::CIndexedIrradiancePoint *a3);
// [0xda6ee0] (4095 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::loadAndCompare(char const*,char const*,glitch::core::vector3d<float> const&)
// void glitch::indexedIrradiance::CIndexedIrradianceManager::loadAndCompare( glitch::indexedIrradiance::CIndexedIrradianceManager *a1, const char *a2, const char *a3);
// [0xda7f20] (146 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::CIndexedIrradianceManager(glitch::IDevice *)
// glitch::indexedIrradiance::CIndexedIrradianceManager *glitch::indexedIrradiance::CIndexedIrradianceManager::CIndexedIrradianceManager( glitch::indexedIrradiance::CIndexedIrradianceManager *this, glitch::IDevice *a2);
// [0xde03c0] (137 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(int,int,int,int)const
// int glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp( glitch::indexedIrradiance::CIndexedIrradianceManager *this, int a2, int a3, int a4, int a5);
// [0xde0450] (187 bytes) glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp(int,int,int,int,int,int)const
// int glitch::indexedIrradiance::CIndexedIrradianceManager::getProbeIndexWithClamp( glitch::indexedIrradiance::CIndexedIrradianceManager *this, int a2, int a3, int a4, int a5, int a6, int a7);
