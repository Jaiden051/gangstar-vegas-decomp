#include "Core/Utils/DecompTypes.h"
#include "glitch_collada_part01.h"

// ----------------------------------------------------------------------------
// Function: glitch::collada::CParametricController1DBase::getClipWeights  (binary VA: 0xcfb380)
// Original: glitch::collada::CParametricController1DBase::getClipWeights
// ----------------------------------------------------------------------------
int glitch::collada::CParametricController1DBase::getClipWeights(uint32_t *a1, uint32_t *a2, int a3, uint32_t *a4)
{
  uint32_t *v4;
  int v5;
  uint16_t *v6;
  uint16_t v7;
  int v8;
  int v9;
  int v10;
  float *v11;
  int v12;
  float v13; // xmm0_4
  int v14;
  float v15; // xmm1_4
  float v16; // xmm2_4
  int result;
  uint32_t *v18;
  float v19; // xmm3_4
  int v20;
  int v21;
  uint32_t *v22;
  __m128 v23;
  __m128 v24;
  __m128 v25;
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  float v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;

  v39 = ((long double (*)(uint32_t *, uint32_t *, int, int, int, int, int, int, int, int, int, int))*(uint32_t *)(*a1 + 28))(
          a1,
          a2,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
  if ( a4 != nullptr )
  {
    *a4 = *a2;
    a4[1] = a2[1];
    a4[2] = a2[2];
  }
  v4 = (uint32_t *)a1[11];
  v43 = v4;
  v5 = v4[5];
  if ( v5 > 0 )
  {
    v6 = (uint16_t *)((char *)&v4[(int)(float)((float)(v5 - 1) * v39) + 6] + v4[6]);
    v7 = v6[1];
    if ( v7 != 0 )
    {
      v41 = v4[8] + 4;
      v8 = *v6;
      a4 = (uint32_t *)(2 * (v8 + v7));
      v9 = 2 * v8;
      v40 = (int)(uintptr_t)(v4) + v4[4] + 16;
      v10 = (int)(uintptr_t)(v4) + v4[2] + 8;
      do
      {
        v11 = (float *)(v40 + 8 * *(uint16_t *)((char *)v43 + v9 + v41 + 28));
        v12 = v10 + 20 * *(uint16_t *)v11;
        v13 = *(float *)(v12 + 16);
        v14 = v10 + 20 * *((uint16_t *)v11 + 1);
        v15 = *(float *)(v14 + 16);
        if ( v13 > v15 )
        {
          if ( v39 >= v13 )
            goto LABEL_12;
          if ( v15 >= v39 )
          {
            v28 = (float)(v15 - v39) * v11[1];
            *(uint32_t *)LODWORD(v39) = *(uint32_t *)v12;
            *(float *)(LODWORD(v39) + 4) = v28;
            *(uint32_t *)(LODWORD(v39) + 8) = *(uint32_t *)v14;
            *(float *)(LODWORD(v39) + 12) = 1.0 - v28;
            return 2;
          }
        }
        else if ( v39 >= v13 && v15 >= v39 )
        {
LABEL_12:
          v16 = (float)(v39 - v13) * v11[1];
          *(uint32_t *)LODWORD(v39) = *(uint32_t *)v12;
          *(float *)(LODWORD(v39) + 4) = 1.0 - v16;
          *(uint32_t *)(LODWORD(v39) + 8) = *(uint32_t *)v14;
          *(float *)(LODWORD(v39) + 12) = v16;
          return 2;
        }
        v9 += 2;
      }
      while ( (uint32_t *)v9 != a4 );
    }
  }
  v42 = v43[1];
  result = 0;
  if ( v42 > 0 )
  {
    v18 = nullptr;
    v19 = 3.4028235e38f;
    v20 = 0;
    v21 = (int)(uintptr_t)(v43) + v43[2] + 8;
    while ( 1 )
    {
      v22 = (uint32_t *)(v21 + v20);
g4_m128_raw(v23) = LODWORD(v39);
g4_m128_lane<float>(v23, 0) = v39 - *(float *)(v21 + v20 + 16);
      v24 = _mm_and_ps(v23, g4_m128_u32(0x7FFFFFFFu));
      v25 = _mm_cmplt_ss(g4_m128_u32(0x3F000000u), v24);
      LODWORD(v26) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v25, v24), 0) | COERCE_UNSIGNED_INT(1.0 -g4_m128_lane<float>(v24, 0)) &g4_m128_lane<int32_t>(v25, 0);
      if ( v26 >= v19 )
        v22 = v18;
      ++result;
      v20 += 20;
      v27 = fminf(v26, v19);
      v18 = v22;
      if ( result == v42 )
        break;
      v19 = v27;
    }
    if ( v22 != nullptr )
    {
      if ( a4 != nullptr )
      {
        *a4 = v22[1];
        a4[1] = v22[2];
        a4[2] = v22[3];
      }
      *(uint32_t *)LODWORD(v39) = *v22;
      *(uint32_t *)(LODWORD(v39) + 4) = 1065353216;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CPlanarParametricController2d::toGridCoord  (binary VA: 0xcfb5f0)
// Original: glitch::collada::CPlanarParametricController2d::toGridCoord
// ----------------------------------------------------------------------------
float * glitch::collada::CPlanarParametricController2d::toGridCoord(float *a1, int a2, int a3, float *a4)
{
  float *result;
  uint32_t *v5;
  float *v6;
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4

  result = a1;
  v5 = *(uint32_t **)(a2 + 44);
  if ( *v5 != 0 )
  {
    v6 = (float *)((char *)v5 + *v5);
    v7 = *a4;
    v8 = a4[1];
    v9 = a4[2];
    v10 = (float)((float)(v6[3] * *a4) + (float)(v6[4] * v8)) + (float)(v6[5] * v9);
  }
  else
  {
    v7 = *a4;
    v8 = a4[1];
    v9 = a4[2];
    v6 = nullptr;
    v10 = (float)((float)(COERCE_FLOAT(196611) * v8) + (float)(0.0 * *a4)) + (float)(COERCE_FLOAT(1) * v9);
  }
  v11 = v8 * v6[1];
  v12 = v7 * *v6;
  v13 = v9 * v6[2];
  a1[1] = v10;
  *a1 = (float)(v11 + v12) + v13;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CPlanarParametricController2d::toWorldCoord  (binary VA: 0xcfb6a0)
// Original: glitch::collada::CPlanarParametricController2d::toWorldCoord
// ----------------------------------------------------------------------------
float * glitch::collada::CPlanarParametricController2d::toWorldCoord(float *a1, int a2, int a3, float *a4)
{
  float *result;
  float v5; // xmm0_4
  uint32_t *v6;
  float *v7;
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm2_4

  result = a1;
  v5 = a4[1];
  v6 = *(uint32_t **)(a2 + 44);
  if ( *v6 != 0 )
  {
    v7 = (float *)((char *)v6 + *v6);
    v8 = v7[3] * v5;
    v9 = v7[4] * v5;
    v10 = v7[5] * v5;
  }
  else
  {
    v7 = nullptr;
    v8 = 0.0 * v5;
    v9 = COERCE_FLOAT(196611) * v5;
    v10 = COERCE_FLOAT(1) * v5;
  }
  v11 = (float)(v7[2] * *a4) + v10;
  v12 = (float)(*a4 * *v7) + v8;
  a1[1] = (float)(v7[1] * *a4) + v9;
  a1[2] = v11;
  *a1 = v12;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CPlanarParametricController2d::projectPoint  (binary VA: 0xcfb740)
// Original: glitch::collada::CPlanarParametricController2d::projectPoint
// ----------------------------------------------------------------------------
int glitch::collada::CPlanarParametricController2d::projectPoint(int a1, int a2)
{
  void (*v3)(int);
  int v4;

  v3 = *(void (**)(int))(*(uint32_t *)a2 + 32);
  (*(void (**)(int *))(*(uint32_t *)a2 + 28))(&v4);
  v3(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSphericalParametricController2d::toGridCoord  (binary VA: 0xcfb7c0)
// Original: glitch::collada::CSphericalParametricController2d::toGridCoord
// ----------------------------------------------------------------------------
float * glitch::collada::CSphericalParametricController2d::toGridCoord(float *a1, int a2, int a3, float *a4)
{
  float *v5;
  float v6; // xmm6_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4

  v5 = (float *)((char *)&glitch::collada::CSphericalParametricController2d::GridPlaneNormals + 12 * a3);
  v6 = v5[1];
  v7 = v5[2];
  v8 = 1.0 / (float)((float)((float)(a4[1] * v6) + (float)(*a4 * *v5)) + (float)(a4[2] * v7));
  v9 = (float)(*a4 * v8) - *v5;
  v10 = (float)(a4[1] * v8) - v6;
  v11 = (float)(v8 * a4[2]) - v7;
  v12 = (float)((float)(glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[3 * a3 + 1] * v10)
              + (float)(glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[3 * a3] * v9))
      + (float)(glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[3 * a3 + 2] * v11);
  v13 = (float)((float)(v10 * glitch::collada::CSphericalParametricController2d::GridPlaneTangents[3 * a3 + 1])
              + (float)(v9 * glitch::collada::CSphericalParametricController2d::GridPlaneTangents[3 * a3]))
      + (float)(v11 * glitch::collada::CSphericalParametricController2d::GridPlaneTangents[3 * a3 + 2]);
  a1[1] = v12;
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CParametricController3d::toGridCoord  (binary VA: 0xcfb8a0)
// Original: glitch::collada::CParametricController3d::toGridCoord
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CParametricController3d::toGridCoord(uint32_t *a1, int a2, uint32_t *a3)
{
  *a1 = *a3;
  a1[1] = a3[1];
  a1[2] = a3[2];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CParametricController3d::toWorldCoord  (binary VA: 0xcfb8c0)
// Original: glitch::collada::CParametricController3d::toWorldCoord
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CParametricController3d::toWorldCoord(uint32_t *a1, int a2, uint32_t *a3)
{
  *a1 = *a3;
  a1[1] = a3[1];
  a1[2] = a3[2];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::Destroy  (binary VA: 0xcfb8e0)
// Original: glitch::collada::CColladaFactory::~CColladaFactory
// ----------------------------------------------------------------------------
void glitch::collada::CColladaFactory::Destroy(glitch::collada::CColladaFactory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206F8E8);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::useImageIDAsTextureHashName  (binary VA: 0xcfb900)
// Original: glitch::collada::CColladaFactory::useImageIDAsTextureHashName
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::useImageIDAsTextureHashName()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getAdditionalEffects  (binary VA: 0xcfb910)
// Original: glitch::collada::CColladaFactory::getAdditionalEffects
// ----------------------------------------------------------------------------
void glitch::collada::CColladaFactory::getAdditionalEffects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getSamplerState  (binary VA: 0xcfb920)
// Original: glitch::collada::CColladaFactory::getSamplerState
// ----------------------------------------------------------------------------
void glitch::collada::CColladaFactory::getSamplerState()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getVertexBufferConfig  (binary VA: 0xcfb930)
// Original: glitch::collada::CColladaFactory::getVertexBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::getVertexBufferConfig(int a1)
{
  *(uint32_t *)a1 = 4;
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getIndexBufferConfig  (binary VA: 0xcfb950)
// Original: glitch::collada::CColladaFactory::getIndexBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::getIndexBufferConfig(int a1)
{
  *(uint32_t *)a1 = 4;
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getSourceProcessBufferConfig  (binary VA: 0xcfb970)
// Original: glitch::collada::CColladaFactory::getSourceProcessBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::getSourceProcessBufferConfig(int a1)
{
  *(uint32_t *)a1 = 4;
  *(uint32_t *)(a1 + 4) = 2;
  *(uint8_t *)(a1 + 8) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getProcessBufferConfig  (binary VA: 0xcfb990)
// Original: glitch::collada::CColladaFactory::getProcessBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::getProcessBufferConfig(int a1)
{
  *(uint32_t *)a1 = 2;
  *(uint32_t *)(a1 + 4) = 2;
  *(uint8_t *)(a1 + 8) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getProcessBufferConfig_eacfb9b0  (binary VA: 0xcfb9b0)
// Original: glitch::collada::CColladaFactory::getProcessBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::getProcessBufferConfig_eacfb9b0(int a1)
{
  *(uint32_t *)a1 = 2;
  *(uint32_t *)(a1 + 4) = 2;
  *(uint8_t *)(a1 + 8) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getProcessBufferConfig_eacfb9d0  (binary VA: 0xcfb9d0)
// Original: glitch::collada::CColladaFactory::getProcessBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::getProcessBufferConfig_eacfb9d0(int a1)
{
  *(uint32_t *)a1 = 2;
  *(uint32_t *)(a1 + 4) = 2;
  *(uint8_t *)(a1 + 8) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::isSharingMeshBuffers  (binary VA: 0xcfb9f0)
// Original: glitch::collada::CColladaFactory::isSharingMeshBuffers
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::isSharingMeshBuffers()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::isSharingProcessBuffer  (binary VA: 0xcfba00)
// Original: glitch::collada::CColladaFactory::isSharingProcessBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::isSharingProcessBuffer()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::isSharingProcessBuffer_eacfba10  (binary VA: 0xcfba10)
// Original: glitch::collada::CColladaFactory::isSharingProcessBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::isSharingProcessBuffer_eacfba10()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::isSharingProcessBuffer_eacfba20  (binary VA: 0xcfba20)
// Original: glitch::collada::CColladaFactory::isSharingProcessBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::isSharingProcessBuffer_eacfba20()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::isOptimizingOutSceneNode  (binary VA: 0xcfba30)
// Original: glitch::collada::CColladaFactory::isOptimizingOutSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::isOptimizingOutSceneNode()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getCreateAndAddAnimatorsForExternEmitters  (binary VA: 0xcfba40)
// Original: glitch::collada::CColladaFactory::getCreateAndAddAnimatorsForExternEmitters
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::getCreateAndAddAnimatorsForExternEmitters()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getResolveExternals  (binary VA: 0xcfba50)
// Original: glitch::collada::CColladaFactory::getResolveExternals
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::getResolveExternals()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getExternalConstructionFlags  (binary VA: 0xcfba60)
// Original: glitch::collada::CColladaFactory::getExternalConstructionFlags
// ----------------------------------------------------------------------------
unsigned int glitch::collada::CColladaFactory::getExternalConstructionFlags(glitch::collada::CColladaFactory::Self *self, const glitch::collada::CColladaDatabase::Self *a2, const glitch::collada::CColladaDatabase::Self *a3, unsigned int a4)
{
  return a4 | 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::Destroy  (binary VA: 0xcfba70)
// Original: glitch::collada::CColladaFactoryWrapperBase::~CColladaFactoryWrapperBase
// ----------------------------------------------------------------------------
void glitch::collada::CColladaFactoryWrapperBase::Destroy(glitch::collada::CColladaFactoryWrapperBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206FAE8);
  glitch::collada::CColladaFactory::Destroy((glitch::collada::CColladaFactory::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createAnimator  (binary VA: 0xcfbaa0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createAnimator
// ----------------------------------------------------------------------------
glitch::collada::CColladaFactoryWrapperBase::Self * glitch::collada::CColladaFactoryWrapperBase::createAnimator(glitch::collada::CColladaFactoryWrapperBase::Self *self, const glitch::collada::CColladaDatabase::Self *a2)
{
  (*(void (**)(glitch::collada::CColladaFactoryWrapperBase::Self *))(**((uint32_t **)a2 + 1) + 12))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createLight  (binary VA: 0xcfbae0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createLight
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createLight(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 16))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::useImageIDAsTextureHashName  (binary VA: 0xcfbb20)
// Original: glitch::collada::CColladaFactoryWrapperBase::useImageIDAsTextureHashName
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::useImageIDAsTextureHashName(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 4) + 20))(*(uint32_t *)(a1 + 4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createImage  (binary VA: 0xcfbb50)
// Original: glitch::collada::CColladaFactoryWrapperBase::createImage
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createImage(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 24))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getAdditionalEffects  (binary VA: 0xcfbba0)
// Original: glitch::collada::CColladaFactoryWrapperBase::getAdditionalEffects
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getAdditionalEffects(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(uint32_t, int, int, int))(**(uint32_t **)(a1 + 4) + 28))(*(uint32_t *)(a1 + 4), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getEffectName  (binary VA: 0xcfbbd0)
// Original: glitch::collada::CColladaFactoryWrapperBase::getEffectName
// ----------------------------------------------------------------------------
glitch::collada::CColladaFactoryWrapperBase::Self * glitch::collada::CColladaFactoryWrapperBase::getEffectName(glitch::collada::CColladaFactoryWrapperBase::Self *self, const glitch::collada::CColladaDatabase::Self *a2, const char *a3, const char *a4)
{
  (*(void (**)(glitch::collada::CColladaFactoryWrapperBase::Self *))(**((uint32_t **)a2 + 1) + 32))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getSamplerState  (binary VA: 0xcfbc20)
// Original: glitch::collada::CColladaFactoryWrapperBase::getSamplerState
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getSamplerState(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(uint32_t, int, int, int))(**(uint32_t **)(a1 + 4) + 36))(*(uint32_t *)(a1 + 4), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getEffectPlatform  (binary VA: 0xcfbc50)
// Original: glitch::collada::CColladaFactoryWrapperBase::getEffectPlatform
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getEffectPlatform(int a1, int a2, int a3, int a4)
{
  return (*(int (**)(uint32_t, int, int, int))(**(uint32_t **)(a1 + 4) + 40))(*(uint32_t *)(a1 + 4), a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getEffectPlatformTechniqueMap  (binary VA: 0xcfbc80)
// Original: glitch::collada::CColladaFactoryWrapperBase::getEffectPlatformTechniqueMap
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getEffectPlatformTechniqueMap(int a1, int a2, int a3, int a4, int a5)
{
  return (*(int (**)(uint32_t, int, int, int, int))(**(uint32_t **)(a1 + 4) + 44))(
           *(uint32_t *)(a1 + 4),
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createMaterialRenderer  (binary VA: 0xcfbcc0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createMaterialRenderer
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createMaterialRenderer(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 52))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createMaterial  (binary VA: 0xcfbd20)
// Original: glitch::collada::CColladaFactoryWrapperBase::createMaterial
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createMaterial(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 56))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createMaterial_eacfbd70  (binary VA: 0xcfbd70)
// Original: glitch::collada::CColladaFactoryWrapperBase::createMaterial
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createMaterial_eacfbd70(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 60))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createMaterialVertexAttributeMap  (binary VA: 0xcfbdd0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createMaterialVertexAttributeMap
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createMaterialVertexAttributeMap(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 64))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getVertexBufferConfig  (binary VA: 0xcfbe30)
// Original: glitch::collada::CColladaFactoryWrapperBase::getVertexBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getVertexBufferConfig(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 68))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getIndexBufferConfig  (binary VA: 0xcfbe70)
// Original: glitch::collada::CColladaFactoryWrapperBase::getIndexBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getIndexBufferConfig(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 72))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig  (binary VA: 0xcfbeb0)
// Original: glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 76))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig_eacfbef0  (binary VA: 0xcfbef0)
// Original: glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig_eacfbef0(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 84))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getResolveExternals  (binary VA: 0xcfbf30)
// Original: glitch::collada::CColladaFactoryWrapperBase::getResolveExternals
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getResolveExternals(glitch::collada::CColladaFactoryWrapperBase::Self *self, const glitch::collada::CColladaDatabase::Self *a2)
{
  return (*(int (**)(uint32_t, const glitch::collada::CColladaDatabase::Self *))(**((uint32_t **)self + 1) + 92))(
           *((uint32_t *)self + 1),
           a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig_eacfbf50  (binary VA: 0xcfbf50)
// Original: glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getProcessBufferConfig_eacfbf50(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 88))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getExternalConstructionFlags  (binary VA: 0xcfbf90)
// Original: glitch::collada::CColladaFactoryWrapperBase::getExternalConstructionFlags
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getExternalConstructionFlags(glitch::collada::CColladaFactoryWrapperBase::Self *self, const glitch::collada::CColladaDatabase::Self *a2, const glitch::collada::CColladaDatabase::Self *a3, unsigned int a4)
{
  return (*(int (**)(uint32_t, const glitch::collada::CColladaDatabase::Self *, const glitch::collada::CColladaDatabase::Self *, unsigned int))(**((uint32_t **)self + 1) + 96))(
           *((uint32_t *)self + 1),
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::isSharingMeshBuffers  (binary VA: 0xcfbfc0)
// Original: glitch::collada::CColladaFactoryWrapperBase::isSharingMeshBuffers
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::isSharingMeshBuffers(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 4) + 100))(*(uint32_t *)(a1 + 4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer  (binary VA: 0xcfbff0)
// Original: glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 4) + 104))(*(uint32_t *)(a1 + 4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer_eacfc020  (binary VA: 0xcfc020)
// Original: glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer_eacfc020(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 4) + 108))(*(uint32_t *)(a1 + 4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer_eacfc050  (binary VA: 0xcfc050)
// Original: glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::isSharingProcessBuffer_eacfc050(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 4) + 112))(*(uint32_t *)(a1 + 4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::isOptimizingOutSceneNode  (binary VA: 0xcfc080)
// Original: glitch::collada::CColladaFactoryWrapperBase::isOptimizingOutSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::isOptimizingOutSceneNode(int a1, int a2, int a3)
{
  return (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 4) + 116))(*(uint32_t *)(a1 + 4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createGeometry  (binary VA: 0xcfc0b0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createGeometry
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createGeometry(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 128))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createMorph  (binary VA: 0xcfc100)
// Original: glitch::collada::CColladaFactoryWrapperBase::createMorph
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createMorph(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 132))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createNode  (binary VA: 0xcfc150)
// Original: glitch::collada::CColladaFactoryWrapperBase::createNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createNode(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 136))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createBillboard  (binary VA: 0xcfc190)
// Original: glitch::collada::CColladaFactoryWrapperBase::createBillboard
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createBillboard(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 140))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createCameraNode  (binary VA: 0xcfc1d0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createCameraNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createCameraNode(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 144))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createMeshNode  (binary VA: 0xcfc210)
// Original: glitch::collada::CColladaFactoryWrapperBase::createMeshNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createMeshNode(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 148))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createSkinNode  (binary VA: 0xcfc260)
// Original: glitch::collada::CColladaFactoryWrapperBase::createSkinNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createSkinNode(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 152))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createModularSkinNode  (binary VA: 0xcfc2b0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createModularSkinNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createModularSkinNode(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 156))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createScene  (binary VA: 0xcfc300)
// Original: glitch::collada::CColladaFactoryWrapperBase::createScene
// ----------------------------------------------------------------------------
glitch::collada::CColladaFactoryWrapperBase::Self * glitch::collada::CColladaFactoryWrapperBase::createScene(glitch::collada::CColladaFactoryWrapperBase::Self *self, const glitch::collada::CColladaDatabase::Self *a2)
{
  (*(void (**)(glitch::collada::CColladaFactoryWrapperBase::Self *))(**((uint32_t **)a2 + 1) + 160))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createSkin  (binary VA: 0xcfc340)
// Original: glitch::collada::CColladaFactoryWrapperBase::createSkin
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createSkin(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 164))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createLodSelector  (binary VA: 0xcfc390)
// Original: glitch::collada::CColladaFactoryWrapperBase::createLodSelector
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createLodSelector(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 168))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createModularSkin  (binary VA: 0xcfc3e0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createModularSkin
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createModularSkin(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 176))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createCoronas  (binary VA: 0xcfc430)
// Original: glitch::collada::CColladaFactoryWrapperBase::createCoronas
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createCoronas(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 180))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createAnimationPackage  (binary VA: 0xcfc480)
// Original: glitch::collada::CColladaFactoryWrapperBase::createAnimationPackage
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createAnimationPackage(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 188))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createAnimator  (binary VA: 0xcfc4c0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createAnimator
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createAnimator(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 192))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createAnimationSet  (binary VA: 0xcfc510)
// Original: glitch::collada::CColladaFactoryWrapperBase::createAnimationSet
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createAnimationSet(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 196))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createIKSolver  (binary VA: 0xcfc550)
// Original: glitch::collada::CColladaFactoryWrapperBase::createIKSolver
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createIKSolver(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 200))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createGlitchNewParticleSystem  (binary VA: 0xcfc590)
// Original: glitch::collada::CColladaFactoryWrapperBase::createGlitchNewParticleSystem
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createGlitchNewParticleSystem(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 204))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createParticleSystemGravityForce  (binary VA: 0xcfc5f0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createParticleSystemGravityForce
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createParticleSystemGravityForce(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 208))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createParticleSystemWindForce  (binary VA: 0xcfc630)
// Original: glitch::collada::CColladaFactoryWrapperBase::createParticleSystemWindForce
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createParticleSystemWindForce(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 212))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createParticleSystemDeflectorForce  (binary VA: 0xcfc670)
// Original: glitch::collada::CColladaFactoryWrapperBase::createParticleSystemDeflectorForce
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createParticleSystemDeflectorForce(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 216))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::createParticleSystemVortexForce  (binary VA: 0xcfc6b0)
// Original: glitch::collada::CColladaFactoryWrapperBase::createParticleSystemVortexForce
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::createParticleSystemVortexForce(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 220))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode  (binary VA: 0xcfc6f0)
// Original: glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 224))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode_eacfc750  (binary VA: 0xcfc750)
// Original: glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getExternalLightSceneNode_eacfc750(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 4) + 228))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getShaderCompilerOptions  (binary VA: 0xcfc7b0)
// Original: glitch::collada::CColladaFactoryWrapperBase::getShaderCompilerOptions
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getShaderCompilerOptions(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return (*(int (**)(uint32_t, int, int, int, int, int, int))(**(uint32_t **)(a1 + 4) + 232))(
           *(uint32_t *)(a1 + 4),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::getCreateAndAddAnimatorsForExternEmitters  (binary VA: 0xcfc800)
// Original: glitch::collada::CColladaFactoryWrapperBase::getCreateAndAddAnimatorsForExternEmitters
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactoryWrapperBase::getCreateAndAddAnimatorsForExternEmitters(glitch::collada::CColladaFactoryWrapperBase::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 236))(*((uint32_t *)self + 1));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMesh::getType  (binary VA: 0xcfc820)
// Original: glitch::collada::CMesh::getType
// ----------------------------------------------------------------------------
int glitch::collada::CMesh::getType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMesh::getMeshBufferCount  (binary VA: 0xcfc830)
// Original: glitch::collada::CMesh::getMeshBufferCount
// ----------------------------------------------------------------------------
int glitch::collada::CMesh::getMeshBufferCount(glitch::collada::CMesh::Self *self)
{
  return -1431655765 * ((*((uint32_t *)self + 11) - *((uint32_t *)self + 10)) >> 2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMesh::getBoundingBox  (binary VA: 0xcfc850)
// Original: glitch::collada::CMesh::getBoundingBox
// ----------------------------------------------------------------------------
char * glitch::collada::CMesh::getBoundingBox(glitch::collada::CMesh::Self *self)
{
  return (char *)self + 60;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMesh::setBoundingBox  (binary VA: 0xcfc860)
// Original: glitch::collada::CMesh::setBoundingBox
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::CMesh::setBoundingBox(uint32_t *a1, uint32_t *a2)
{
  a1[15] = *a2;
  a1[16] = a2[1];
  a1[17] = a2[2];
  a1[18] = a2[3];
  a1[19] = a2[4];
  a1[20] = a2[5];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::clone  (binary VA: 0xcfc940)
// Original: glitch::collada::CModularSkinnedMesh::clone
// ----------------------------------------------------------------------------
glitch::collada::CModularSkinnedMesh::Self * glitch::collada::CModularSkinnedMesh::clone(glitch::collada::CModularSkinnedMesh::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::getBindShapeMatrix  (binary VA: 0xcfc980)
// Original: glitch::collada::CModularSkinnedMesh::getBindShapeMatrix
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMesh::getBindShapeMatrix()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::getType  (binary VA: 0xcfc990)
// Original: glitch::collada::CModularSkinnedMesh::getType
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMesh::getType()
{
  return 3;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::needOutputBuffer  (binary VA: 0xcfc9a0)
// Original: glitch::collada::CModularSkinnedMesh::needOutputBuffer
// ----------------------------------------------------------------------------
bool glitch::collada::CModularSkinnedMesh::needOutputBuffer(glitch::collada::CModularSkinnedMesh::Self *self)
{
  return (*((uint8_t *)self + 41) & 4) != 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::needOutputBuffer  (binary VA: 0xcfc9b0)
// Original: glitch::collada::CModularSkinnedMesh::needOutputBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMesh::needOutputBuffer(glitch::collada::CModularSkinnedMesh::Self *self, unsigned int a2)
{
  int v2;
  unsigned int v3;
  uint32_t *v4;
  uint32_t *i;
  int v6;

  v2 = 0;
  v3 = *((uint32_t *)self + 48) + 40 * a2;
  v4 = *(uint32_t **)(v3 + 24);
  for ( i = *(uint32_t **)(v3 + 28); i != v4; v4 += 2 )
  {
    v6 = *(uint32_t *)(*((uint32_t *)self + 45) + 36 * *v4 + 4);
    if ( v6 != 0 )
      v2 |= (*(int (**)(uint32_t))(*(uint32_t *)v6 + 104))(*(uint32_t *)(*((uint32_t *)self + 45) + 36 * *v4 + 4));
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::updateTechnique  (binary VA: 0xcfca10)
// Original: glitch::collada::CModularSkinnedMesh::updateTechnique
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMesh::updateTechnique(glitch::collada::CModularSkinnedMesh::Self *self, unsigned int a2)
{
  int v2;
  unsigned int v3;
  uint32_t *v4;
  uint32_t *i;
  int v6;

  v2 = 0;
  v3 = *((uint32_t *)self + 48) + 40 * a2;
  v4 = *(uint32_t **)(v3 + 24);
  for ( i = *(uint32_t **)(v3 + 28); i != v4; v4 += 2 )
  {
    v6 = *(uint32_t *)(*((uint32_t *)self + 45) + 36 * *v4 + 4);
    if ( v6 != 0 )
      v2 |= G4_VCALL<int>(v6, 92, v4[1]);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::updateTechnique  (binary VA: 0xcfca80)
// Original: glitch::collada::CModularSkinnedMesh::updateTechnique
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMesh::updateTechnique(glitch::collada::CModularSkinnedMesh::Self *self)
{
  int v1;
  int v2;
  int v3;
  int i;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = 0;
  v2 = *((uint32_t *)self + 45);
  v9 = v2;
  v10 = *((uint32_t *)self + 46);
  if ( v2 != v10 )
  {
    v8 = *((uint32_t *)self + 45);
    v11 = v2 + 4;
    do
    {
      v3 = *(uint32_t *)(v11 + v8 - v9);
      if ( v3 != 0 )
      {
        v7 = (*(int (**)(uint32_t))(*(uint32_t *)v3 + 16))(*(uint32_t *)(v11 + v8 - v9));
        if ( v7 != 0 )
        {
          for ( i = 0; i != v7; ++i )
          {
            v6 = i;
            v1 |= G4_VCALL<int>(v3, 92, v6);
          }
        }
      }
      v8 += 36;
    }
    while ( v10 != v8 );
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::getSourceMesh  (binary VA: 0xcfcb10)
// Original: glitch::collada::CModularSkinnedMesh::getSourceMesh
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMesh::getSourceMesh()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::getMeshBufferCount  (binary VA: 0xcfcb20)
// Original: glitch::collada::CModularSkinnedMesh::getMeshBufferCount
// ----------------------------------------------------------------------------
int glitch::collada::CModularSkinnedMesh::getMeshBufferCount(glitch::collada::CModularSkinnedMesh::Self *self)
{
  return -858993459 * ((*((uint32_t *)self + 49) - *((uint32_t *)self + 48)) >> 3);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::getType  (binary VA: 0xcfcb40)
// Original: glitch::collada::CMorphingMesh::getType
// ----------------------------------------------------------------------------
int glitch::collada::CMorphingMesh::getType()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::clone  (binary VA: 0xcfcb50)
// Original: glitch::collada::CMorphingMesh::clone
// ----------------------------------------------------------------------------
glitch::collada::CMorphingMesh::Self * glitch::collada::CMorphingMesh::clone(glitch::collada::CMorphingMesh::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::getSourceMesh  (binary VA: 0xcfcb60)
// Original: glitch::collada::CMorphingMesh::getSourceMesh
// ----------------------------------------------------------------------------
int glitch::collada::CMorphingMesh::getSourceMesh(glitch::collada::CMorphingMesh::Self *self)
{
  return (*(int (**)(uint32_t))(***((uint32_t ***)self + 13) + 88))(**((uint32_t **)self + 13));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::getMeshBufferCount  (binary VA: 0xcfcb80)
// Original: glitch::collada::CMorphingMesh::getMeshBufferCount
// ----------------------------------------------------------------------------
int glitch::collada::CMorphingMesh::getMeshBufferCount(glitch::collada::CMorphingMesh::Self *self)
{
  return (*(int (**)(uint32_t))(***((uint32_t ***)self + 13) + 16))(**((uint32_t **)self + 13));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::getBoundingBox  (binary VA: 0xcfcba0)
// Original: glitch::collada::CMorphingMesh::getBoundingBox
// ----------------------------------------------------------------------------
int glitch::collada::CMorphingMesh::getBoundingBox(glitch::collada::CMorphingMesh::Self *self)
{
  return (*(int (**)(uint32_t))(***((uint32_t ***)self + 13) + 36))(**((uint32_t **)self + 13));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::setBoundingBox  (binary VA: 0xcfcbc0)
// Original: glitch::collada::CMorphingMesh::setBoundingBox
// ----------------------------------------------------------------------------
void glitch::collada::CMorphingMesh::setBoundingBox()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::init  (binary VA: 0xcfcbd0)
// Original: glitch::collada::CSkinnedMesh::init
// ----------------------------------------------------------------------------
void glitch::collada::CSkinnedMesh::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getType  (binary VA: 0xcfcbe0)
// Original: glitch::collada::CSkinnedMesh::getType
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::getType()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::needOutputBuffer  (binary VA: 0xcfcbf0)
// Original: glitch::collada::CSkinnedMesh::needOutputBuffer
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::needOutputBuffer(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2)
{
  return (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 44) + 48 * a2 + 12) + 8))(*(uint32_t *)(*((uint32_t *)self + 44) + 48 * a2 + 12));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::clone  (binary VA: 0xcfcc20)
// Original: glitch::collada::CSkinnedMesh::clone
// ----------------------------------------------------------------------------
glitch::collada::CSkinnedMesh::Self * glitch::collada::CSkinnedMesh::clone(glitch::collada::CSkinnedMesh::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getSourceMesh  (binary VA: 0xcfcc30)
// Original: glitch::collada::CSkinnedMesh::getSourceMesh
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::getSourceMesh(glitch::collada::CSkinnedMesh::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 47) + 88))(*((uint32_t *)self + 47));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getMeshBufferCount  (binary VA: 0xcfcc50)
// Original: glitch::collada::CSkinnedMesh::getMeshBufferCount
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::getMeshBufferCount(glitch::collada::CSkinnedMesh::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 47) + 16))(*((uint32_t *)self + 47));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getBindShapeMatrix  (binary VA: 0xcfcc70)
// Original: glitch::collada::CSkinnedMesh::getBindShapeMatrix
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::getBindShapeMatrix(glitch::collada::CSkinnedMesh::Self *self)
{
  return *((uint32_t *)self + 43) + 8;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getSkinIndicesOffset  (binary VA: 0xcfcc80)
// Original: glitch::collada::CSkinnedMesh::getSkinIndicesOffset
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::getSkinIndicesOffset(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2)
{
  return *(uint8_t *)(*((uint32_t *)self + 44) + 48 * a2 + 28);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::setSkinIndicesOffset  (binary VA: 0xcfcca0)
// Original: glitch::collada::CSkinnedMesh::setSkinIndicesOffset
// ----------------------------------------------------------------------------
unsigned int glitch::collada::CSkinnedMesh::setSkinIndicesOffset(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2, char a3)
{
  unsigned int result;

  result = *((uint32_t *)self + 44) + 48 * a2;
  *(uint8_t *)(result + 28) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getSkinMaxVertexWeightsCount  (binary VA: 0xcfccc0)
// Original: glitch::collada::CSkinnedMesh::getSkinMaxVertexWeightsCount
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::getSkinMaxVertexWeightsCount(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2)
{
  return *(uint8_t *)(*((uint32_t *)self + 44) + 48 * a2 + 29);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::setSkinMaxVertexWeightsCount  (binary VA: 0xcfcce0)
// Original: glitch::collada::CSkinnedMesh::setSkinMaxVertexWeightsCount
// ----------------------------------------------------------------------------
unsigned int glitch::collada::CSkinnedMesh::setSkinMaxVertexWeightsCount(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2, uint8_t a3)
{
  unsigned int result;

  result = *((uint32_t *)self + 44) + 48 * a2;
  *(uint8_t *)(result + 29) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getSkinTechnique  (binary VA: 0xcfcd00)
// Original: glitch::collada::CSkinnedMesh::getSkinTechnique
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::getSkinTechnique(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 44) + 48 * a2 + 12);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IMesh::onAnimate  (binary VA: 0xcfcd20)
// Original: glitch::collada::IMesh::onAnimate
// ----------------------------------------------------------------------------
void glitch::collada::IMesh::onAnimate()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IMesh::onPrepareBufferForRendering  (binary VA: 0xcfcd30)
// Original: glitch::collada::IMesh::onPrepareBufferForRendering
// ----------------------------------------------------------------------------
int glitch::collada::IMesh::onPrepareBufferForRendering()
{
  return 16;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IMesh::releaseProcessBuffer  (binary VA: 0xcfcd40)
// Original: glitch::collada::IMesh::releaseProcessBuffer
// ----------------------------------------------------------------------------
void glitch::collada::IMesh::releaseProcessBuffer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IMesh::init  (binary VA: 0xcfcd50)
// Original: glitch::collada::IMesh::init
// ----------------------------------------------------------------------------
void glitch::collada::IMesh::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IMesh::init_eacfcd60  (binary VA: 0xcfcd60)
// Original: glitch::collada::IMesh::init
// ----------------------------------------------------------------------------
void glitch::collada::IMesh::init_eacfcd60()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ISkinnedMesh::setIsSkinningEnabled  (binary VA: 0xcfcd70)
// Original: glitch::collada::ISkinnedMesh::setIsSkinningEnabled
// ----------------------------------------------------------------------------
unsigned int glitch::collada::ISkinnedMesh::setIsSkinningEnabled(glitch::collada::ISkinnedMesh::Self *self, bool a2)
{
  unsigned int result;

  result = *((uint32_t *)self + 10) & 0xFFFFFFFE | a2;
  *((uint32_t *)self + 10) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ISkinnedMesh::setBoundingBox  (binary VA: 0xcfcd90)
// Original: glitch::collada::ISkinnedMesh::setBoundingBox
// ----------------------------------------------------------------------------
void glitch::collada::ISkinnedMesh::setBoundingBox()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ISkinnedMesh::getTransformedBoundingBox  (binary VA: 0xcfcda0)
// Original: glitch::collada::ISkinnedMesh::getTransformedBoundingBox
// ----------------------------------------------------------------------------
glitch::collada::ISkinnedMesh::Self * glitch::collada::ISkinnedMesh::getTransformedBoundingBox(glitch::collada::ISkinnedMesh::Self *self, const glitch::core::CMatrix4<float> *a2)
{
  uint32_t *v2;

  v2 = (uint32_t *)G4_VCALL<int>(a2, 36);
  *(uint32_t *)self = *v2;
  *((uint32_t *)self + 1) = v2[1];
  *((uint32_t *)self + 2) = v2[2];
  *((uint32_t *)self + 3) = v2[3];
  *((uint32_t *)self + 4) = v2[4];
  *((uint32_t *)self + 5) = v2[5];
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemStripBaker::generateParticleId  (binary VA: 0xcfcdf0)
// Original: glitch::collada::ps::CParticleSystemStripBaker::generateParticleId
// ----------------------------------------------------------------------------
int16_t glitch::collada::ps::CParticleSystemStripBaker::generateParticleId(glitch::collada::ps::CParticleSystemStripBaker::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int16_t result;
  uint32_t *v4;

  v1 = *((uint32_t **)self + 11);
  v2 = *((uint32_t **)self + 12);
  result = -1;
  if ( v1 != v2 )
  {
    result = 0;
    if ( v1[1] != *v1 )
    {
      v4 = *((uint32_t **)self + 11);
      do
      {
        v4 += 3;
        if ( v4 == v2 )
          return -1;
      }
      while ( v4[1] != *v4 );
      return -21845 * (v4 - v1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemSpinModel::isSpinAxisInLocalSpace  (binary VA: 0xcfce40)
// Original: glitch::collada::ps::CParticleSystemSpinModel::isSpinAxisInLocalSpace
// ----------------------------------------------------------------------------
bool glitch::collada::ps::CParticleSystemSpinModel::isSpinAxisInLocalSpace(glitch::collada::ps::CParticleSystemSpinModel::Self *self)
{
  return *((uint32_t *)self + 24) > 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CBlobDomain::transform  (binary VA: 0xcfce50)
// Original: glitch::collada::ps::CBlobDomain::transform
// ----------------------------------------------------------------------------
glitch::collada::ps::CBlobDomain::Self * glitch::collada::ps::CBlobDomain::transform(glitch::collada::ps::CBlobDomain::Self *self, const glitch::core::CMatrix4<float> *a2)
{
  int v3;
  int v4;

  *((uint32_t *)self + 4) = *((uint32_t *)self + 1);
  *((uint32_t *)self + 5) = *((uint32_t *)self + 2);
  *((uint32_t *)self + 6) = *((uint32_t *)self + 3);
  v3 = *((uint32_t *)a2 + 13);
  v4 = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 2) = v3;
  *((uint32_t *)self + 3) = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CGeometryDomain::transform  (binary VA: 0xcfce80)
// Original: glitch::collada::ps::CGeometryDomain::transform
// ----------------------------------------------------------------------------
glitch::collada::ps::CGeometryDomain::Self * glitch::collada::ps::CGeometryDomain::transform(glitch::collada::ps::CGeometryDomain::Self *self, const glitch::core::CMatrix4<float> *a2)
{
  *((uint32_t *)self + 17) = *((uint32_t *)self + 1);
  *((uint32_t *)self + 18) = *((uint32_t *)self + 2);
  *((uint32_t *)self + 19) = *((uint32_t *)self + 3);
  *((uint32_t *)self + 20) = *((uint32_t *)self + 4);
  *((uint32_t *)self + 21) = *((uint32_t *)self + 5);
  *((uint32_t *)self + 22) = *((uint32_t *)self + 6);
  *((uint32_t *)self + 23) = *((uint32_t *)self + 7);
  *((uint32_t *)self + 24) = *((uint32_t *)self + 8);
  *((uint32_t *)self + 25) = *((uint32_t *)self + 9);
  *((uint32_t *)self + 26) = *((uint32_t *)self + 10);
  *((uint32_t *)self + 27) = *((uint32_t *)self + 11);
  *((uint32_t *)self + 28) = *((uint32_t *)self + 12);
  *((uint32_t *)self + 29) = *((uint32_t *)self + 13);
  *((uint32_t *)self + 30) = *((uint32_t *)self + 14);
  *((uint32_t *)self + 31) = *((uint32_t *)self + 15);
  *((uint32_t *)self + 32) = *((uint32_t *)self + 16);
  *((uint32_t *)self + 1) = *(uint32_t *)a2;
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 15);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CLineDomain::generate  (binary VA: 0xcfcf50)
// Original: glitch::collada::ps::CLineDomain::generate
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CLineDomain::generate(float *a1, float *a2, int *a3, float a4)
{
  int v4;
  double v5; // xmm3_8
  float v7; // xmm5_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm0_4

  v4 = 48271 * (*a3 % 44488) + 3399 * (*a3 / -44488);
  *a3 = v4;
  if ( v4 < 0 )
  {
    v4 += 0x7FFFFFFF;
    *a3 = v4;
  }
  v5 = (double)v4;
  v7 = a2[10];
  *(float *)&v5 = v5 * 4.656612875245797e-10;
  v8 = a2[5] * *(float *)&v5;
  v9 = a2[6] * *(float *)&v5;
  *(float *)&v5 = *(float *)&v5 * a2[4];
  v10 = a2[1];
  v11 = (float)((float)((float)(a2[3] - a2[12]) * a4) + a2[12]) + v9;
  a1[1] = (float)((float)((float)(a2[2] - a2[11]) * a4) + a2[11]) + v8;
  a1[2] = v11;
  *a1 = (float)((float)((float)(v10 - v7) * a4) + v7) + *(float *)&v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CLineDomain::generate  (binary VA: 0xcfd070)
// Original: glitch::collada::ps::CLineDomain::generate
// ----------------------------------------------------------------------------
int glitch::collada::ps::CLineDomain::generate(int a1, float *a2, int *a3)
{
  int v3;
  double v4; // xmm0_8
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm3_4

  v3 = 48271 * (*a3 % 44488) + 3399 * (*a3 / -44488);
  *a3 = v3;
  if ( v3 < 0 )
  {
    v3 += 0x7FFFFFFF;
    *a3 = v3;
  }
  v4 = (double)v3 * 4.656612875245797e-10;
  v6 = a2[1];
  *(float *)&v4 = v4;
  v7 = a2[4] * *(float *)&v4;
  v8 = a2[5] * *(float *)&v4;
  *(float *)&v4 = *(float *)&v4 * a2[6];
  *(float *)a1 = v6;
  v9 = a2[2];
  *(float *)(a1 + 4) = v9;
  *(float *)&v4 = *(float *)&v4 + a2[3];
  *(float *)a1 = v7 + v6;
  *(float *)(a1 + 4) = v8 + v9;
  *(uint32_t *)(a1 + 8) = LODWORD(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CPointDomain::generate  (binary VA: 0xcfd160)
// Original: glitch::collada::ps::CPointDomain::generate
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CPointDomain::generate(float *a1, float *a2, int a3, float a4)
{
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm0_4

  v5 = a2[4];
  v6 = a2[1];
  v7 = a2[2] - a2[5];
  v8 = a2[3] - a2[6];
  *a1 = v5;
  v9 = a2[5];
  a1[1] = v9;
  v10 = (float)(v8 * a4) + a2[6];
  *a1 = (float)((float)(v6 - v5) * a4) + v5;
  a1[1] = (float)(v7 * a4) + v9;
  a1[2] = v10;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CPointDomain::generate  (binary VA: 0xcfd1d0)
// Original: glitch::collada::ps::CPointDomain::generate
// ----------------------------------------------------------------------------
uint32_t * glitch::collada::ps::CPointDomain::generate(uint32_t *a1, uint32_t *a2)
{
  *a1 = a2[1];
  a1[1] = a2[2];
  a1[2] = a2[3];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CPointDomain::transform  (binary VA: 0xcfd1f0)
// Original: glitch::collada::ps::CPointDomain::transform
// ----------------------------------------------------------------------------
glitch::collada::ps::CPointDomain::Self * glitch::collada::ps::CPointDomain::transform(glitch::collada::ps::CPointDomain::Self *self, const glitch::core::CMatrix4<float> *a2)
{
  int v3;
  int v4;

  *((uint32_t *)self + 4) = *((uint32_t *)self + 1);
  *((uint32_t *)self + 5) = *((uint32_t *)self + 2);
  *((uint32_t *)self + 6) = *((uint32_t *)self + 3);
  v3 = *((uint32_t *)a2 + 13);
  v4 = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 2) = v3;
  *((uint32_t *)self + 3) = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactoryWrapperBase::Destroy_eacfd280  (binary VA: 0xcfd280)
// Original: glitch::collada::CColladaFactoryWrapperBase::~CColladaFactoryWrapperBase
// ----------------------------------------------------------------------------
void glitch::collada::CColladaFactoryWrapperBase::Destroy_eacfd280(glitch::collada::CColladaFactoryWrapperBase::Self *self)
{
  glitch::collada::CColladaFactoryWrapperBase::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::Destroy_eacfd2c0  (binary VA: 0xcfd2c0)
// Original: glitch::collada::CColladaFactory::~CColladaFactory
// ----------------------------------------------------------------------------
void glitch::collada::CColladaFactory::Destroy_eacfd2c0(glitch::collada::CColladaFactory::Self *self)
{
  glitch::collada::CColladaFactory::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CCircularParametricController1d::toWorldCoord  (binary VA: 0xcfd390)
// Original: glitch::collada::CCircularParametricController1d::toWorldCoord
// ----------------------------------------------------------------------------
int glitch::collada::CCircularParametricController1d::toWorldCoord(glitch::collada::CCircularParametricController1d::Self *self, float a2, float a3)
{
  int64_t v3; // rax
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v7;
  float v8;
  float v9;

  v7 = cosf(6.2831855f * a3);
  v9 = v7;
  v8 = sinf(6.2831855f * a3);
  v3 = (unsigned int)(uintptr_t)(self);
  if ( self != nullptr )
    HIDWORD(v3) = *(uint32_t *)(LODWORD(a2) + 44) + **(uint32_t **)(LODWORD(a2) + 44);
  v4 = (float)(*(float *)(HIDWORD(v3) + 8) * v9) + (float)(*(float *)(LODWORD(a2) + 56) * v8);
  v5 = (float)(v9 * *(float *)HIDWORD(v3)) + (float)(*(float *)(LODWORD(a2) + 48) * v8);
  *((float *)self + 1) = (float)(*(float *)(HIDWORD(v3) + 4) * v9) + (float)(*(float *)(LODWORD(a2) + 52) * v8);
  *((float *)self + 2) = v4;
  *(float *)self = v5;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CCylindricalParametricController3D::toWorldCoord  (binary VA: 0xcfd470)
// Original: glitch::collada::CCylindricalParametricController3D::toWorldCoord
// ----------------------------------------------------------------------------
float * glitch::collada::CCylindricalParametricController3D::toWorldCoord(float *a1, int a2, float *a3)
{
  float v3; // xmm2_4
  float *v4;
  float v6; // xmm0_4
  float v7; // xmm5_4
  float v8;
  float v9;
  float v10;
  float v11;
  float x;
  float v13;
  float v14;

  v3 = a3[2];
  v4 = *(float **)(a2 + 60);
  v13 = v4[4] * v3;
  x = a3[1];
  v14 = v4[5] * v3;
  v10 = *a3;
  v8 = sinf(x);
  v11 = v8;
  v9 = cosf(x);
  v6 = (float)((float)((float)(v4[2] * v9) + (float)(*(float *)(a2 + 56) * v11)) * v10) + v14;
  v7 = (float)((float)((float)(v9 * *v4) + (float)(v11 * *(float *)(a2 + 48))) * v10) + (float)(v3 * v4[3]);
  a1[1] = (float)((float)((float)(v4[1] * v9) + (float)(*(float *)(a2 + 52) * v11)) * v10) + v13;
  a1[2] = v6;
  *a1 = v7;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CBlobDomain::generate  (binary VA: 0xcfd5b0)
// Original: glitch::collada::ps::CBlobDomain::generate
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CBlobDomain::generate(float *a1, int a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  double v7; // xmm6_8
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  int v15;
  int v16;
  float v17; // xmm1_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm0_4
  float x; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26;
  float v27;
  float v28;

  v28 = **(float **)(a2 + 28);
  v3 = *a3;
  do
  {
    do
    {
      v4 = 48271 * (v3 % 44488) + 3399 * (v3 / -44488);
      v5 = v4 + (v4 < 0 ? 0x7FFFFFFF : 0);
      v7 = (double)v5 * 4.656612875245797e-10;
      v6 = 48271 * (v5 % 44488) + 3399 * (v5 / -44488);
      v3 = v6 + (v6 < 0 ? 0x7FFFFFFF : 0);
      *(float *)&v7 = v7;
      v8 = (double)v3 * 4.656612875245797e-10;
      v9 = (float)(*(float *)&v7 + *(float *)&v7) - 1.0;
      v10 = (float)(v8 + v8) - 1.0;
      v11 = (float)(v10 * v10) + (float)(v9 * v9);
    }
    while ( v11 > 1.0 );
  }
  while ( v11 == 0.0 );
  v26 = logf((float)(v10 * v10) + (float)(v9 * v9));
  v12 = fsqrt((float)(v26 * -2.0) / (float)((float)(v10 * v10) + (float)(v9 * v9)));
  v13 = (float)(v9 * v12) * v28;
  v14 = (float)(v10 * v12) * v28;
  do
  {
    v15 = 48271 * (v3 % 44488) + 3399 * (v3 / -44488);
    v16 = v15 + (v15 < 0 ? 0x7FFFFFFF : 0);
    v17 = (double)v16 * 4.656612875245797e-10;
    v18 = (float)(v17 + v17) - 1.0;
    v3 = 48271 * (v16 % 44488) + 3399 * (v16 / -44488);
    v19 = v3;
    if ( v3 < 0 )
    {
      v19 = v3 + 0x7FFFFFFF;
      v3 += 0x7FFFFFFF;
    }
    v20 = (double)v19 * 4.656612875245797e-10;
    x = (float)((float)((float)(v20 + v20) - 1.0) * (float)((float)(v20 + v20) - 1.0)) + (float)(v18 * v18);
  }
  while ( x > 1.0 || x == 0.0 );
  *a3 = v19;
  v27 = logf(x);
  v23 = *(float *)(a2 + 4);
  *a1 = v23;
  v24 = *(float *)(a2 + 8);
  a1[1] = v24;
  v25 = *(float *)(a2 + 12);
  *a1 = v13 + v23;
  a1[1] = v14 + v24;
  a1[2] = (float)((float)(fsqrt((float)(v27 * -2.0) / x) * v18) * v28) + v25;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::IParticleSystemBaker::Destroy  (binary VA: 0xcfd8c0)
// Original: glitch::collada::ps::IParticleSystemBaker::~IParticleSystemBaker
// ----------------------------------------------------------------------------
void glitch::collada::ps::IParticleSystemBaker::Destroy(glitch::collada::ps::IParticleSystemBaker::Self *self)
{
  void *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070408);
  v1 = *((void **)self + 9);
  if ( v1 != nullptr )
    opDeleteArray(v1);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::IParticleSystemBaker::Destroy_eacfd900  (binary VA: 0xcfd900)
// Original: glitch::collada::ps::IParticleSystemBaker::~IParticleSystemBaker
// ----------------------------------------------------------------------------
void glitch::collada::ps::IParticleSystemBaker::Destroy_eacfd900(glitch::collada::ps::IParticleSystemBaker::Self *self)
{
  glitch::collada::ps::IParticleSystemBaker::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemStripBaker::fillParticleIndexBuffer  (binary VA: 0xcfd940)
// Original: glitch::collada::ps::CParticleSystemStripBaker::fillParticleIndexBuffer
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemStripBaker::fillParticleIndexBuffer(glitch::collada::ps::CParticleSystemStripBaker::Self *self)
{
  uint16_t *v1;
  int result;

  v1 = (uint16_t *)opNewArray(4u);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v1);
  *v1 = 0;
  result = *((uint32_t *)self + 9);
  *(uint16_t *)(result + 2) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ISkinnedMesh::setTransform  (binary VA: 0xcfd990)
// Original: glitch::collada::ISkinnedMesh::setTransform
// ----------------------------------------------------------------------------
int glitch::collada::ISkinnedMesh::setTransform(int a1, int a2, int a3, int a4)
{
  uint8_t v5[68];

  (*(void (**)(uint8_t *))(*(uint32_t *)a1 + 116))(v5);
  return (int)(uintptr_t)(glitch::video::IVideoDriver::setTransform(a2, 2, v5, a4, 0));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::IMesh::setTransform  (binary VA: 0xcfda00)
// Original: glitch::collada::IMesh::setTransform
// ----------------------------------------------------------------------------
int glitch::collada::IMesh::setTransform(int a1, int a2, int a3, int a4)
{
  return (int)(uintptr_t)(glitch::video::IVideoDriver::setTransform(a2, 2, a3, a4, 0));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getEffectPlatform  (binary VA: 0xcfda50)
// Original: glitch::collada::CColladaFactory::getEffectPlatform
// ----------------------------------------------------------------------------
int glitch::collada::CColladaFactory::getEffectPlatform(int a1, int a2, int a3, uint32_t *a4)
{
  int result;

  result = 0;
  if ( *a4 != 0 )
  {
    while ( strcmp(*(const char **)((char *)&a4[result + 1] + a4[1]), "LowEnd") != 0 )
    {
      if ( *a4 == ++result )
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CCylindricalParametricController3D::toGridCoord  (binary VA: 0xcfdb00)
// Original: glitch::collada::CCylindricalParametricController3D::toGridCoord
// ----------------------------------------------------------------------------
float * glitch::collada::CCylindricalParametricController3D::toGridCoord(float *a1, int a2, float *a3)
{
  float *v3;
  float v4; // xmm4_4
  float v5; // xmm2_4
  float x; // xmm1_4
  float y; // xmm0_4
  long double v8; // fst7
  float v9; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13;
  float v14;

  v3 = *(float **)(a2 + 60);
  v4 = a3[1];
  v5 = a3[2];
  x = (float)((float)(v3[1] * v4) + (float)(*v3 * *a3)) + (float)(v3[2] * v5);
  y = (float)((float)(*(float *)(a2 + 52) * v4) + (float)(*(float *)(a2 + 48) * *a3))
    + (float)(*(float *)(a2 + 56) * v5);
  v14 = *a3;
  v13 = fsqrt((float)(y * y) + (float)(x * x));
  v8 = atan2f(y, x);
  v9 = v3[4];
  v11 = v14 * v3[3];
  v12 = v5 * v3[5];
  a1[1] = v8;
  *a1 = v13;
  a1[2] = (float)((float)(v9 * v4) + v11) + v12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CCircularParametricController1d::toGridCoord  (binary VA: 0xcfdc10)
// Original: glitch::collada::CCircularParametricController1d::toGridCoord
// ----------------------------------------------------------------------------
long double glitch::collada::CCircularParametricController1d::toGridCoord(int a1, float *a2)
{
  int *v2;
  int v3;
  float *v4;
  float *v5;
  float v6; // xmm0_4
  float v8;

  v2 = *(int **)(a1 + 44);
  v3 = *v2;
  v4 = (float *)((char *)v2 + *v2);
  v5 = nullptr;
  if ( v3 != 0 )
    v5 = v4;
  v8 = atan2f(
         (float)((float)(a2[1] * *(float *)(a1 + 52)) + (float)(*a2 * *(float *)(a1 + 48)))
       + (float)(a2[2] * *(float *)(a1 + 56)),
         (float)((float)(v5[1] * a2[1]) + (float)(*v5 * *a2)) + (float)(v5[2] * a2[2]));
  v6 = v8;
  if ( v8 < 0.0 )
    v6 = v8 + 6.2831855f;
  return (float)(v6 * 0.15915494f);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemBillboardBaker::fillParticleIndexBuffer  (binary VA: 0xcfdce0)
// Original: glitch::collada::ps::CParticleSystemBillboardBaker::fillParticleIndexBuffer
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemBillboardBaker::fillParticleIndexBuffer(glitch::collada::ps::CParticleSystemBillboardBaker::Self *self)
{
  uint16_t *v1;
  int result;
  uint16_t *v3;

  if ( *((uint8_t *)self + 40) != 0 )
  {
    v3 = (uint16_t *)opNewArray(0x18u);
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v3);
    *v3 = 0;
    *(uint16_t *)(*((uint32_t *)self + 9) + 2) = 1;
    *(uint16_t *)(*((uint32_t *)self + 9) + 4) = 2;
    *(uint16_t *)(*((uint32_t *)self + 9) + 6) = 0;
    *(uint16_t *)(*((uint32_t *)self + 9) + 8) = 2;
    *(uint16_t *)(*((uint32_t *)self + 9) + 10) = 3;
    *(uint16_t *)(*((uint32_t *)self + 9) + 12) = 0;
    *(uint16_t *)(*((uint32_t *)self + 9) + 14) = 3;
    *(uint16_t *)(*((uint32_t *)self + 9) + 16) = 4;
    *(uint16_t *)(*((uint32_t *)self + 9) + 18) = 0;
    *(uint16_t *)(*((uint32_t *)self + 9) + 20) = 4;
    result = *((uint32_t *)self + 9);
    *(uint16_t *)(result + 22) = 1;
  }
  else
  {
    v1 = (uint16_t *)opNewArray(0xCu);
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v1);
    *v1 = 0;
    *(uint16_t *)(*((uint32_t *)self + 9) + 2) = 1;
    *(uint16_t *)(*((uint32_t *)self + 9) + 4) = 2;
    *(uint16_t *)(*((uint32_t *)self + 9) + 6) = 0;
    *(uint16_t *)(*((uint32_t *)self + 9) + 8) = 2;
    result = *((uint32_t *)self + 9);
    *(uint16_t *)(result + 10) = 3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::updateMeshBuffers  (binary VA: 0xcfddd0)
// Original: glitch::collada::CSkinnedMesh::updateMeshBuffers
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::updateMeshBuffers(glitch::collada::CSkinnedMesh::Self *self)
{
  int v1;
  int i;
  int result;
  int v4;

  v1 = G4_VCALL<int>(self, 16);
  if ( v1 != 0 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v4 = i;
      G4_VCALL<void>(self, 92, v4);
    }
  }
  result = *((uint32_t *)self + 10);
  if ( (result & 0x1000) != 0 )
  {
    result = G4_VCALL<int>(self, 112, *((uint32_t *)self + 10) & 1);
    *((uint32_t *)self + 10) &= ~0x1000u;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMesh::getSourceMesh  (binary VA: 0xcfdec0)
// Original: glitch::collada::CMesh::getSourceMesh
// ----------------------------------------------------------------------------
int glitch::collada::CMesh::getSourceMesh(glitch::collada::CMesh::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;

  if ( *(int *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 3) + 16) + 32) + 132) > 0 )
    return *(uint32_t *)(*((uint32_t *)self + 13) + 16);
  v2 = *((uint32_t *)self + 14);
  result = 0;
  v3 = *(uint32_t *)(v2 + 12);
  v4 = v2 + v3 + 12;
  if ( v3 != 0 )
    return v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::setIsSkinningEnabled  (binary VA: 0xcfdf00)
// Original: glitch::collada::CModularSkinnedMesh::setIsSkinningEnabled
// ----------------------------------------------------------------------------
unsigned int glitch::collada::CModularSkinnedMesh::setIsSkinningEnabled(glitch::collada::CModularSkinnedMesh::Self *self, bool a2)
{
  unsigned int result;
  int v3;
  int v4;
  int v5;

  result = a2;
  if ( (*((uint8_t *)self + 32) & 1) != 0 )
  {
    if ( *((uint32_t *)self + 45) != *((uint32_t *)self + 46) )
    {
      v3 = *((uint32_t *)self + 45);
      v4 = *((uint32_t *)self + 46);
      do
      {
        v5 = *(uint32_t *)(v3 + 4);
        if ( v5 != 0 )
          G4_VCALL<void>(v5, 112, a2);
        v3 += 36;
      }
      while ( v4 != v3 );
    }
    return glitch::collada::ISkinnedMesh::setIsSkinningEnabled((glitch::collada::ISkinnedMesh::Self *)(self), a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CParametricController2DBase::Destroy  (binary VA: 0xcfeba0)
// Original: glitch::collada::CParametricController2DBase::~CParametricController2DBase
// ----------------------------------------------------------------------------
void glitch::collada::CParametricController2DBase::Destroy(glitch::collada::CParametricController2DBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20708E8);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CParametricController2DBase::Self *)((char *)self + 20));
  glitch::collada::IParametricController::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CParametricController2DBase::Destroy_eacfebf0  (binary VA: 0xcfebf0)
// Original: glitch::collada::CParametricController2DBase::~CParametricController2DBase
// ----------------------------------------------------------------------------
void glitch::collada::CParametricController2DBase::Destroy_eacfebf0(glitch::collada::CParametricController2DBase::Self *self)
{
  glitch::collada::CParametricController2DBase::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CCircularParametricController1d::Destroy  (binary VA: 0xcfec30)
// Original: glitch::collada::CCircularParametricController1d::~CCircularParametricController1d
// ----------------------------------------------------------------------------
void glitch::collada::CCircularParametricController1d::Destroy(glitch::collada::CCircularParametricController1d::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20708E8);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CCircularParametricController1d::Self *)((char *)self + 20));
  glitch::collada::IParametricController::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CCircularParametricController1d::Destroy_eacfec80  (binary VA: 0xcfec80)
// Original: glitch::collada::CCircularParametricController1d::~CCircularParametricController1d
// ----------------------------------------------------------------------------
void glitch::collada::CCircularParametricController1d::Destroy_eacfec80(glitch::collada::CCircularParametricController1d::Self *self)
{
  glitch::collada::CCircularParametricController1d::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemBatchingManager::Destroy  (binary VA: 0xcff1a0)
// Original: glitch::collada::ps::CParticleSystemBatchingManager::~CParticleSystemBatchingManager
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemBatchingManager::Destroy(pthread_mutex_t **self)
{
  glf::Mutex::Self *v1;
  glf::Mutex::Self *v2;
  void (**v3)(glf::Mutex::Self *);
  void **v4;
  void **v5;
  glf::Mutex::Self *v6;

  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_2070338);
  glf::Mutex::Destroy(self + 7);
  v1 = (glf::Mutex::Self *)*(self + 5);
  v2 = (glf::Mutex::Self *)*(self + 4);
  if ( v1 != v2 )
  {
    do
    {
      v3 = *(void (***)(glf::Mutex::Self *))v2;
      v6 = v2;
      v2 = (glf::Mutex::Self *)((char *)v2 + 136);
      (*v3)(v6);
    }
    while ( v1 != v2 );
    v2 = (glf::Mutex::Self *)*(self + 4);
  }
  if ( v2 != nullptr )
    opDelete(v2);
  v4 = (void **)*(self + 2);
  v5 = (void **)*(self + 1);
  if ( v4 != v5 )
  {
    do
    {
      if ( v5[13] != nullptr )
        opDelete(v5[13]);
      if ( v5[10] != nullptr )
        opDelete(v5[10]);
      if ( v5[7] != nullptr )
        opDelete(v5[7]);
      v5 += 16;
    }
    while ( v4 != v5 );
    v5 = (void **)*(self + 1);
  }
  if ( v5 != nullptr )
    opDelete(v5);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemBatchingManager::Destroy_eacff260  (binary VA: 0xcff260)
// Original: glitch::collada::ps::CParticleSystemBatchingManager::~CParticleSystemBatchingManager
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemBatchingManager::Destroy_eacff260(pthread_mutex_t **self)
{
  glitch::collada::ps::CParticleSystemBatchingManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CSphereDomain::transform  (binary VA: 0xcff2a0)
// Original: glitch::collada::ps::CSphereDomain::transform
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CSphereDomain::transform(glitch::collada::ps::CSphereDomain::Self *self, const glitch::core::CMatrix4<float> *a2)
{
  int v3;
  int v4;
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float *result;

  *((uint32_t *)self + 4) = *((uint32_t *)self + 1);
  *((uint32_t *)self + 5) = *((uint32_t *)self + 2);
  *((uint32_t *)self + 6) = *((uint32_t *)self + 3);
  v3 = *((uint32_t *)a2 + 13);
  v4 = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 1) = v4;
  *((uint32_t *)self + 2) = v3;
  v5 = *((float *)a2 + 8) * *((float *)a2 + 8);
  v6 = fsqrt(
         (float)((float)(*((float *)a2 + 1) * *((float *)a2 + 1)) + (float)(*(float *)a2 * *(float *)a2))
       + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)));
  v7 = *((float *)a2 + 10) * *((float *)a2 + 10);
  v8 = fsqrt(
         (float)((float)(*((float *)a2 + 5) * *((float *)a2 + 5)) + (float)(*((float *)a2 + 4) * *((float *)a2 + 4)))
       + (float)(*((float *)a2 + 6) * *((float *)a2 + 6)));
  result = *((float **)self + 7);
  *((float *)self + 8) = (float)(0.33333334f * *result)
                       * (float)((float)(v8 + v6)
                               + fsqrt((float)((float)(*((float *)a2 + 9) * *((float *)a2 + 9)) + v5) + v7));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CBoxDomain::generate  (binary VA: 0xcff870)
// Original: glitch::collada::ps::CBoxDomain::generate
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CBoxDomain::generate(float *a1, float *a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  double v6; // xmm2_8
  int v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm4_4
  double v11; // xmm3_8
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4

  v3 = 48271 * (*a3 % 44488) + 3399 * (*a3 / -44488);
  v4 = v3 + (v3 < 0 ? 0x7FFFFFFF : 0);
  v6 = (double)v4 * 4.656612875245797e-10;
  v5 = 48271 * (v4 % 44488) + 3399 * (v4 / -44488);
  v7 = v5 + (v5 < 0 ? 0x7FFFFFFF : 0);
  v8 = 48271 * (v7 % 44488) + 3399 * (v7 / -44488);
  v9 = v6;
  v10 = (double)v7 * 4.656612875245797e-10;
  *a3 = v8;
  if ( v8 < 0 )
  {
    v8 += 0x7FFFFFFF;
    *a3 = v8;
  }
  v11 = (double)v8 * 4.656612875245797e-10;
  *(float *)&v11 = v11;
  v13 = (float)((float)((float)(a2[24] * v9) + a2[6]) + (float)(a2[21] * v10)) + (float)(a2[18] * *(float *)&v11);
  v14 = (float)((float)((float)(a2[23] * v9) + a2[5]) + (float)(a2[20] * v10)) + (float)(a2[17] * *(float *)&v11);
  v15 = (float)((float)((float)(v9 * a2[22]) + a2[4]) + (float)(v10 * a2[19])) + (float)(*(float *)&v11 * a2[16]);
  a1[2] = v13;
  a1[1] = v14;
  *a1 = v15;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CBoxDomain::generate  (binary VA: 0xcffa10)
// Original: glitch::collada::ps::CBoxDomain::generate
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CBoxDomain::generate(float *a1, float *a2, int *a3, float a4)
{
  int v4;
  int v5;
  int v6;
  double v7; // xmm5_8
  int v8;
  int v9;
  float v10; // xmm5_4
  float v11; // xmm4_4
  double v12; // xmm3_8
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16;
  float v17;
  float v18;
  float v19;

  v4 = 48271 * (*a3 % 44488) + 3399 * (*a3 / -44488);
  v5 = v4 + (v4 < 0 ? 0x7FFFFFFF : 0);
  v7 = (double)v5 * 4.656612875245797e-10;
  v6 = 48271 * (v5 % 44488) + 3399 * (v5 / -44488);
  v8 = v6 + (v6 < 0 ? 0x7FFFFFFF : 0);
  v9 = 48271 * (v8 % 44488) + 3399 * (v8 / -44488);
  v10 = v7;
  v11 = (double)v8 * 4.656612875245797e-10;
  *a3 = v9;
  if ( v9 < 0 )
  {
    v9 += 0x7FFFFFFF;
    *a3 = v9;
  }
  v12 = (double)v9 * 4.656612875245797e-10;
  *(float *)&v12 = v12;
  v17 = a2[24] * v10;
  v18 = a2[21] * v11;
  v19 = a2[18] * *(float *)&v12;
  v16 = a2[15];
  v14 = a2[6];
  v15 = (float)((float)((float)((float)((float)(a2[5] - a2[14]) * a4) + a2[14]) + (float)(a2[23] * v10))
              + (float)(a2[20] * v11))
      + (float)(a2[17] * *(float *)&v12);
  *a1 = (float)((float)((float)((float)((float)(a2[4] - a2[13]) * a4) + a2[13]) + (float)(v10 * a2[22]))
              + (float)(v11 * a2[19]))
      + (float)(*(float *)&v12 * a2[16]);
  a1[1] = v15;
  a1[2] = (float)((float)((float)((float)((float)(v14 - v16) * a4) + v16) + v17) + v18) + v19;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getShaderCompilerOptions  (binary VA: 0xcffca0)
// Original: glitch::collada::CColladaFactory::getShaderCompilerOptions
// ----------------------------------------------------------------------------
char * glitch::collada::CColladaFactory::getShaderCompilerOptions(int a1, int a2, int a3, int a4, int a5, int *a6, int *a7)
{
  const char *s;
  unsigned int v8;
  char *v9;
  int v10;
  const char *src;
  unsigned int n;
  char *result;
  int v14;
  char *v15;

  s = *(const char **)(a5 + 12);
  v8 = strlen(s);
  v9 = (char *)*a6;
  v10 = *(uint32_t *)(*a6 - 12);
  if ( v8 > 0x3FFFFFFC )
LABEL_36:
    sub_1900180("basic_string::assign");
  if ( s >= v9 && s <= &v9[v10] && *((int *)v9 - 1) <= 0 )
  {
    if ( v8 <= s - v9 )
    {
      if ( v8 != 1 )
      {
        memcpy(v9, s, v8);
        v9 = (char *)*a6;
        goto LABEL_22;
      }
    }
    else
    {
      if ( s == v9 )
        goto LABEL_22;
      if ( v8 != 1 )
      {
        memmove(v9, s, v8);
        v9 = (char *)*a6;
        goto LABEL_22;
      }
    }
    *v9 = *s;
    v9 = (char *)*a6;
LABEL_22:
    if ( v9 - 12 != (char *)&dword_20D3E6C )
    {
      *((uint32_t *)v9 - 1) = 0;
      *((uint32_t *)v9 - 3) = v8;
      v9[v8] = 0;
    }
    goto LABEL_5;
  }
  sub_CFEE60(a6, v10, v8);
  if ( v8 != 0 )
  {
    v15 = (char *)*a6;
    if ( v8 == 1 )
      *v15 = *s;
    else
      memcpy(v15, s, v8);
  }
LABEL_5:
  src = *(const char **)(a5 + 24);
  n = strlen(src);
  result = (char *)*a7;
  v14 = *(uint32_t *)(*a7 - 12);
  if ( n > 0x3FFFFFFC )
    goto LABEL_36;
  if ( src >= result && src <= &result[v14] && *((int *)result - 1) <= 0 )
  {
    if ( n <= src - result )
    {
      if ( n != 1 )
      {
        memcpy(result, src, n);
        result = (char *)*a7;
        goto LABEL_15;
      }
    }
    else
    {
      if ( src == result )
        goto LABEL_15;
      if ( n != 1 )
      {
        memmove(result, src, n);
        result = (char *)*a7;
        goto LABEL_15;
      }
    }
    *result = *src;
    result = (char *)*a7;
LABEL_15:
    if ( result - 12 != (char *)&dword_20D3E6C )
    {
      *((uint32_t *)result - 1) = 0;
      *((uint32_t *)result - 3) = n;
      result[n] = 0;
    }
    return result;
  }
  result = (char *)sub_CFEE60(a7, v14, n);
  if ( n != 0 )
  {
    result = (char *)*a7;
    if ( n == 1 )
      *result = *src;
    else
      return (char *)memcpy(result, src, n);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::getEffectName  (binary VA: 0xcffef0)
// Original: glitch::collada::CColladaFactory::getEffectName
// ----------------------------------------------------------------------------
glitch::collada::CColladaFactory::Self * glitch::collada::CColladaFactory::getEffectName(glitch::collada::CColladaFactory::Self *self, const glitch::collada::CColladaDatabase::Self *a2, const char *a3, char *s)
{
  size_t v4;
  size_t n;
  unsigned int v6;
  int v7;
  int v8;
  void *v9;
  int v11;
  void *v12;

  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v4 = strlen(s);
  if ( s == &s[v4] )
  {
    v9 = &unk_20D3E78;
    goto LABEL_12;
  }
  n = v4;
  if ( v4 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v4 + 29 > 0x1000 && v4 != 0 )
  {
    v6 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
    v7 = 1073741820;
    if ( v6 <= 0x3FFFFFFC )
      v7 = v6;
    v11 = v7;
    v8 = sub_4EBDC0(v7 + 13);
    *(uint32_t *)(v8 + 4) = v11;
    *(uint32_t *)(v8 + 8) = 0;
    v9 = (void *)(v8 + 12);
    goto LABEL_9;
  }
  v8 = sub_4EBDC0(v4 + 13);
  *(uint32_t *)(v8 + 4) = n;
  *(uint32_t *)(v8 + 8) = 0;
  v9 = (void *)(v8 + 12);
  if ( n != 1 )
  {
LABEL_9:
    v12 = v9;
    memcpy(v9, s, n);
    v9 = v12;
    goto LABEL_10;
  }
  *(uint8_t *)(v8 + 12) = *s;
LABEL_10:
  if ( (int *)v8 != (int *)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v8 + 8) = 0;
    *(uint32_t *)v8 = n;
    *((uint8_t *)v9 + n) = 0;
  }
LABEL_12:
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v9);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CBlobDomain::generate  (binary VA: 0xd00050)
// Original: glitch::collada::ps::CBlobDomain::generate
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CBlobDomain::generate(float *a1, int a2, int *a3, float a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  double v8; // xmm6_8
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  int v16;
  int v17;
  float v18; // xmm1_4
  float v19; // xmm1_4
  int v20;
  float v21; // xmm0_4
  float x; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27;
  float v28;
  float v29;

  v29 = **(float **)(a2 + 28);
  v4 = *a3;
  do
  {
    do
    {
      v5 = 48271 * (v4 % 44488) + 3399 * (v4 / -44488);
      v6 = v5 + (v5 < 0 ? 0x7FFFFFFF : 0);
      v8 = (double)v6 * 4.656612875245797e-10;
      v7 = 48271 * (v6 % 44488) + 3399 * (v6 / -44488);
      v4 = v7 + (v7 < 0 ? 0x7FFFFFFF : 0);
      *(float *)&v8 = v8;
      v9 = (double)v4 * 4.656612875245797e-10;
      v10 = (float)(*(float *)&v8 + *(float *)&v8) - 1.0;
      v11 = (float)(v9 + v9) - 1.0;
      v12 = (float)(v11 * v11) + (float)(v10 * v10);
    }
    while ( v12 > 1.0 );
  }
  while ( v12 == 0.0 );
  v27 = logf((float)(v11 * v11) + (float)(v10 * v10));
  v13 = fsqrt((float)(v27 * -2.0) / (float)((float)(v11 * v11) + (float)(v10 * v10)));
  v14 = (float)(v10 * v13) * v29;
  v15 = (float)(v11 * v13) * v29;
  do
  {
    v16 = 48271 * (v4 % 44488) + 3399 * (v4 / -44488);
    v17 = v16 + (v16 < 0 ? 0x7FFFFFFF : 0);
    v18 = (double)v17 * 4.656612875245797e-10;
    v19 = (float)(v18 + v18) - 1.0;
    v4 = 48271 * (v17 % 44488) + 3399 * (v17 / -44488);
    v20 = v4;
    if ( v4 < 0 )
    {
      v20 = v4 + 0x7FFFFFFF;
      v4 += 0x7FFFFFFF;
    }
    v21 = (double)v20 * 4.656612875245797e-10;
    x = (float)((float)((float)(v21 + v21) - 1.0) * (float)((float)(v21 + v21) - 1.0)) + (float)(v19 * v19);
  }
  while ( x > 1.0 || x == 0.0 );
  *a3 = v20;
  v28 = logf(x);
  v24 = (float)(v28 * -2.0) / x;
  v25 = (float)((float)(*(float *)(a2 + 8) - *(float *)(a2 + 20)) * a4) + *(float *)(a2 + 20);
  v26 = (float)((float)(*(float *)(a2 + 12) - *(float *)(a2 + 24)) * a4) + *(float *)(a2 + 24);
  *a1 = (float)((float)((float)(*(float *)(a2 + 4) - *(float *)(a2 + 16)) * a4) + *(float *)(a2 + 16)) + v14;
  a1[1] = v25 + v15;
  a1[2] = v26 + (float)((float)(fsqrt(v24) * v19) * v29);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSphericalParametricController2d::toWorldCoord  (binary VA: 0xd00390)
// Original: glitch::collada::CSphericalParametricController2d::toWorldCoord
// ----------------------------------------------------------------------------
float * glitch::collada::CSphericalParametricController2d::toWorldCoord(float *a1, int a2, int a3, float *a4)
{
  float v4; // xmm0_4
  float *result;
  float *v6;
  float *v7;
  float *v8;
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm3_4

  v4 = a4[1];
  result = a1;
  v6 = (float *)(&glitch::collada::CSphericalParametricController2d::GridPlaneBitangents[3 * a3]);
  v7 = (float *)(&glitch::collada::CSphericalParametricController2d::GridPlaneTangents[3 * a3]);
  v8 = (float *)((char *)&glitch::collada::CSphericalParametricController2d::GridPlaneNormals + 12 * a3);
  v9 = (float)((float)(*v6 * v4) + (float)(*v7 * *a4)) + *v8;
  v10 = (float)((float)(v6[1] * v4) + (float)(v7[1] * *a4)) + v8[1];
  v11 = (float)((float)(v4 * v6[2]) + (float)(*a4 * v7[2])) + v8[2];
  *a1 = v9;
  a1[1] = v10;
  a1[2] = v11;
  v12 = (float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11);
  if ( v12 != 0.0 )
  {
    v13 = 1.0 / fsqrt(v12);
    v14 = (float)((float)((float)(v12 * v13) * v13) + -3.0) * (float)(v13 * -0.5);
    *a1 = v9 * v14;
    a1[1] = v10 * v14;
    a1[2] = v14 * v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSphericalParametricController2d::projectPoint  (binary VA: 0xd00490)
// Original: glitch::collada::CSphericalParametricController2d::projectPoint
// ----------------------------------------------------------------------------
float * glitch::collada::CSphericalParametricController2d::projectPoint(float *a1, int a2, float *a3)
{
  float *result;
  float v4; // xmm1_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm0_4

  result = a1;
  v4 = *a3;
  if ( *a3 == 0.0 && a3[1] == 0.0 && a3[2] == 0.0 )
  {
    *a1 = 1.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
  }
  else
  {
    *a1 = v4;
    v5 = a3[1];
    a1[1] = v5;
    v6 = a3[2];
    a1[2] = v6;
    v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
    if ( v7 != 0.0 )
    {
      v8 = 1.0 / fsqrt(v7);
      v9 = (float)((float)((float)(v7 * v8) * v8) + -3.0) * (float)(v8 * -0.5);
      *a1 = v4 * v9;
      a1[1] = v5 * v9;
      a1[2] = v9 * v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createAnimator  (binary VA: 0xd00560)
// Original: glitch::collada::CColladaFactory::createAnimator
// ----------------------------------------------------------------------------
glitch::collada::CColladaFactory::Self * glitch::collada::CColladaFactory::createAnimator(glitch::collada::CColladaFactory::Self *self, const glitch::collada::CColladaDatabase::Self *a2, glitch::collada::CColladaDatabase::Self *a3)
{
  glitch::collada::CSceneNodeAnimatorSet::Self *v3;

  v3 = (glitch::collada::CSceneNodeAnimatorSet::Self *)opNew(0x5Cu);
  glitch::collada::CSceneNodeAnimatorSet::Construct(v3, a3);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v3 + *(uint32_t *)(*(uint32_t *)v3 - 12) + 4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createLight  (binary VA: 0xd005e0)
// Original: glitch::collada::CColladaFactory::createLight
// ----------------------------------------------------------------------------
glitch::scene::CLightSceneNode::Self ** glitch::collada::CColladaFactory::createLight(glitch::scene::CLightSceneNode::Self **a1, int a2, int a3, int a4)
{
  glitch::scene::CLightSceneNode::Self *v4;

  v4 = (glitch::scene::CLightSceneNode::Self *)opNew(0x154u);
  glitch::collada::CLightSceneNode::CLightSceneNode(v4, a3, a4);
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createNode  (binary VA: 0xd00660)
// Original: glitch::collada::CColladaFactory::createNode
// ----------------------------------------------------------------------------
glitch::scene::ISceneNode::Self ** glitch::collada::CColladaFactory::createNode(glitch::scene::ISceneNode::Self **a1, int a2, int a3, int a4)
{
  glitch::scene::ISceneNode::Self *v4;

  v4 = (glitch::scene::ISceneNode::Self *)opNew(0x144u);
  glitch::collada::CSceneNode::Construct(v4, a3, a4);
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createCameraNode  (binary VA: 0xd006e0)
// Original: glitch::collada::CColladaFactory::createCameraNode
// ----------------------------------------------------------------------------
glitch::scene::CCameraSceneNode::Self ** glitch::collada::CColladaFactory::createCameraNode(glitch::scene::CCameraSceneNode::Self **a1, int a2, int a3, int a4)
{
  glitch::scene::CCameraSceneNode::Self *v4;

  v4 = (glitch::scene::CCameraSceneNode::Self *)opNew(0x370u);
  glitch::collada::CCameraFreeSceneNode::Construct(v4, a3, a4);
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createAnimationPackage  (binary VA: 0xd00760)
// Original: glitch::collada::CColladaFactory::createAnimationPackage
// ----------------------------------------------------------------------------
int * glitch::collada::CColladaFactory::createAnimationPackage(int *a1, int a2, int a3, int a4)
{
  int v4;

  v4 = opNew(0x44u);
  glitch::collada::CAnimationPackage::Construct(v4, a3, a4);
  *a1 = v4;
  if ( v4 != 0 )
    sub_8B1B00((volatile int32_t *)(v4 + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createParticleSystemVortexForce  (binary VA: 0xd007e0)
// Original: glitch::collada::CColladaFactory::createParticleSystemVortexForce
// ----------------------------------------------------------------------------
glitch::IObject::Self ** glitch::collada::CColladaFactory::createParticleSystemVortexForce(glitch::IObject::Self **a1, int a2, int a3, int a4)
{
  glitch::IObject::Self *v4;

  v4 = (glitch::IObject::Self *)opNew(0x16Cu);
  glitch::collada::CVortexForceSceneNode::Construct(v4, a3, a4);
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createParticleSystemDeflectorForce  (binary VA: 0xd00860)
// Original: glitch::collada::CColladaFactory::createParticleSystemDeflectorForce
// ----------------------------------------------------------------------------
glitch::IObject::Self ** glitch::collada::CColladaFactory::createParticleSystemDeflectorForce(glitch::IObject::Self **a1, int a2, int a3, int a4)
{
  glitch::IObject::Self *v4;

  v4 = (glitch::IObject::Self *)opNew(0x150u);
  glitch::collada::CDeflectorForceSceneNode::Construct(v4, a3, a4);
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createParticleSystemWindForce  (binary VA: 0xd008e0)
// Original: glitch::collada::CColladaFactory::createParticleSystemWindForce
// ----------------------------------------------------------------------------
glitch::IObject::Self ** glitch::collada::CColladaFactory::createParticleSystemWindForce(glitch::IObject::Self **a1, int a2, int a3, int a4)
{
  glitch::IObject::Self *v4;

  v4 = (glitch::IObject::Self *)opNew(0x14Cu);
  glitch::collada::CWindForceSceneNode::Construct(v4, a3, a4);
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createParticleSystemGravityForce  (binary VA: 0xd00960)
// Original: glitch::collada::CColladaFactory::createParticleSystemGravityForce
// ----------------------------------------------------------------------------
glitch::IObject::Self ** glitch::collada::CColladaFactory::createParticleSystemGravityForce(glitch::IObject::Self **a1, int a2, int a3, int a4)
{
  glitch::IObject::Self *v4;

  v4 = (glitch::IObject::Self *)opNew(0x140u);
  glitch::collada::CGravityForceSceneNode::Construct(v4, a3, a4);
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createModularSkinNode  (binary VA: 0xd009e0)
// Original: glitch::collada::CColladaFactory::createModularSkinNode
// ----------------------------------------------------------------------------
glitch::IObject::Self ** glitch::collada::CColladaFactory::createModularSkinNode(glitch::IObject::Self **a1, int a2, int a3, int a4)
{
  glitch::IObject::Self *v4;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7[3];
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v7)) > _g4_s1 ? (20u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  memset(v6, 0, sizeof(v6));
  memset(v8, 0, 12);
  v8[3] = 1065353216;
  v7[0] = 1065353216;
  v7[1] = 1065353216;
  v7[2] = 1065353216;
  v4 = (glitch::IObject::Self *)opNew(0x178u);
  glitch::collada::CModularSkinnedMeshSceneNode::CModularSkinnedMeshSceneNode(v4, a4, 0, 0, (int)(uintptr_t)(v6), (int)(uintptr_t)(v8), (int)(uintptr_t)(v7));
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createSkinNode  (binary VA: 0xd00ad0)
// Original: glitch::collada::CColladaFactory::createSkinNode
// ----------------------------------------------------------------------------
glitch::IObject::Self ** glitch::collada::CColladaFactory::createSkinNode(glitch::IObject::Self **a1, int a2, int a3, int a4)
{
  glitch::IObject::Self *v4;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7[3];
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v7)) > _g4_s1 ? (20u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  memset(v6, 0, sizeof(v6));
  memset(v8, 0, 12);
  v8[3] = 1065353216;
  v7[0] = 1065353216;
  v7[1] = 1065353216;
  v7[2] = 1065353216;
  v4 = (glitch::IObject::Self *)opNew(0x178u);
  glitch::collada::CSkinnedMeshSceneNode::Construct(v4, a4, 0, 0, (int)(uintptr_t)(v6), (int)(uintptr_t)(v8), (int)(uintptr_t)(v7));
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createMeshNode  (binary VA: 0xd00bc0)
// Original: glitch::collada::CColladaFactory::createMeshNode
// ----------------------------------------------------------------------------
glitch::IObject::Self ** glitch::collada::CColladaFactory::createMeshNode(glitch::IObject::Self **a1, int a2, int a3, int a4)
{
  glitch::IObject::Self *v4;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7[3];
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v7)) > _g4_s1 ? (20u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  memset(v6, 0, sizeof(v6));
  memset(v8, 0, 12);
  v8[3] = 1065353216;
  v7[0] = 1065353216;
  v7[1] = 1065353216;
  v7[2] = 1065353216;
  v4 = (glitch::IObject::Self *)opNew(0x120u);
  glitch::collada::CMeshSceneNode::Construct(v4, a4, 0, 0, (int)(uintptr_t)(v6), (int)(uintptr_t)(v8), (int)(uintptr_t)(v7));
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createBillboard  (binary VA: 0xd00cb0)
// Original: glitch::collada::CColladaFactory::createBillboard
// ----------------------------------------------------------------------------
glitch::scene::ISceneNode::Self ** glitch::collada::CColladaFactory::createBillboard(glitch::scene::ISceneNode::Self **a1, int a2, int a3, int a4)
{
  glitch::scene::ISceneNode::Self *v4;

  v4 = (glitch::scene::ISceneNode::Self *)opNew(0x144u);
  glitch::collada::CBillboardSceneNode::Construct(v4, a3, a4);
  *a1 = v4;
  if ( v4 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 16) + 4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createImage  (binary VA: 0xd00d30)
// Original: glitch::collada::CColladaFactory::createImage
// ----------------------------------------------------------------------------
glitch::video::CTextureManager::Self * glitch::collada::CColladaFactory::createImage(int a1, int a2, int a3, int a4, int a5)
{
  int *v5;
  char v6;
  int v7;
  int v8;
  uint8_t *v9;
  size_t v10;
  size_t v11;
  int16_t v12;
  unsigned int v13;
  int v14;
  volatile int32_t *v15;
  size_t v16;
  int v17;
  unsigned int v18;
  int *v19;
  int v20;
  unsigned int v21;
  char *v22;
  const char *v23;
  int v24;
  int *v25;
  unsigned int v26;
  const char *v27;
  int v28;
  char *v29;
  char *v30;
  int v31;
  int v32;
  int v33;
  int v35;
  int v36;
  int v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nd;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef void (*_g4_t_v53)(uint32_t *, int, volatile int32_t **);
  typedef char *_g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef char *_g4_t_v57;
  typedef glitch::video::CTextureManager::Self *_g4_t_v58;
  typedef char *_g4_t_s;
  typedef char *_g4_t_sa;
  typedef int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef volatile int32_t *_g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef uint32_t _g4_t_v66[4];
  typedef uint32_t _g4_t_v67[4];
  typedef const char *_g4_t_v68;
  typedef volatile int32_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71[5];
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v39)) > _g4_s1 ? (4u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v40)) > _g4_s2 ? (8u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v41)) > _g4_s3 ? (12u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_n)) > _g4_s4 ? (16u + sizeof(_g4_t_n)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_nb)) > _g4_s5 ? (16u + sizeof(_g4_t_nb)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_nc)) > _g4_s6 ? (16u + sizeof(_g4_t_nc)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_na)) > _g4_s7 ? (16u + sizeof(_g4_t_na)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_nd)) > _g4_s8 ? (16u + sizeof(_g4_t_nd)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v47)) > _g4_s9 ? (20u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v48)) > _g4_s10 ? (20u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v49)) > _g4_s11 ? (24u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v50)) > _g4_s12 ? (28u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v51)) > _g4_s13 ? (28u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v52)) > _g4_s14 ? (32u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v53)) > _g4_s15 ? (32u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v54)) > _g4_s16 ? (32u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v55)) > _g4_s17 ? (32u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v56)) > _g4_s18 ? (36u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v57)) > _g4_s19 ? (36u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v58)) > _g4_s20 ? (40u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_s)) > _g4_s21 ? (44u + sizeof(_g4_t_s)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_sa)) > _g4_s22 ? (44u + sizeof(_g4_t_sa)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v61)) > _g4_s23 ? (48u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v62)) > _g4_s24 ? (48u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v63)) > _g4_s25 ? (48u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v64)) > _g4_s26 ? (48u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v65)) > _g4_s27 ? (48u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v66)) > _g4_s28 ? (52u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v67)) > _g4_s29 ? (68u + sizeof(_g4_t_v67)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v68)) > _g4_s30 ? (84u + sizeof(_g4_t_v68)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v69)) > _g4_s31 ? (88u + sizeof(_g4_t_v69)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v70)) > _g4_s32 ? (92u + sizeof(_g4_t_v70)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v71)) > _g4_s33 ? (96u + sizeof(_g4_t_v71)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v72)) > _g4_s34 ? (116u + sizeof(_g4_t_v72)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v73)) > _g4_s35 ? (120u + sizeof(_g4_t_v73)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 16u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 16u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 16u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 16u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 92u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 96u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 116u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 120u);

  v5 = (int *)a3;
  v6 = (*(int (**)(uint32_t, int, int, int, int, int, int, size_t, int, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, const char *, volatile int32_t *, int, int, int, int, int *))(**(uint32_t **)(a3 + 4) + 20))(
         *(uint32_t *)(a3 + 4),
         a3,
         a5,
         v38,
         v39,
         v40,
         v41,
         n,
         v47,
         v49,
         v50,
         v52,
         a4,
         a1,
         a5,
         v61,
         v66[0],
         v66[1],
         v66[2],
         v66[3],
         v67[0],
         v67[1],
         v67[2],
         v67[3],
         v68,
         v69,
         v70,
         v71[0],
         v71[1],
         v71[2],
         &a1);
  v51 = 0;
  if ( v6 != 0 )
    v51 = *(uint32_t *)s;
  v7 = *(uint32_t *)(*((uint32_t *)v56 + 111) + 32);
  v53 = *(void (**)(uint32_t *, int, volatile int32_t **))(*(uint32_t *)v7 + 60);
  v8 = *v5;
  if ( *v5 == 0 || (v9 = *(uint8_t **)(v8 + 12)) == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v10 = strlen(*(const char **)(v8 + 12));
  if ( v9 == &v9[v10] )
  {
    v63 = (volatile int32_t *)&unk_20D3E78;
    goto LABEL_15;
  }
  v11 = v10;
  if ( v10 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  v12 = v10 + 29;
  if ( v11 + 29 > 0x1000 && v11 != 0 )
  {
    v13 = v11 + 4096 - (v12 & 0xFFF);
    if ( v13 > 0x3FFFFFFC )
      v13 = 1073741820;
    v62 = v13;
    nb = v11;
    v72 = 0;
    v14 = sub_4EBDC0(v13 + 13);
    *(uint32_t *)(v14 + 4) = v62;
    *(uint32_t *)(v14 + 8) = 0;
    v15 = (volatile int32_t *)(v14 + 12);
    v16 = nb;
    v63 = (volatile int32_t *)(v14 + 12);
    goto LABEL_12;
  }
  nd = v11;
  v72 = 0;
  v35 = sub_4EBDC0(v11 + 13);
  v16 = nd;
  v14 = v35;
  *(uint32_t *)(v35 + 4) = nd;
  *(uint32_t *)(v35 + 8) = 0;
  v15 = (volatile int32_t *)(v35 + 12);
  v63 = v15;
  if ( nd != 1 )
  {
LABEL_12:
    nc = v16;
    v48 = v14;
    memcpy((void *)v15, v9, v16);
    v14 = v48;
    v16 = nc;
    goto LABEL_13;
  }
  *(uint8_t *)(v14 + 12) = *v9;
LABEL_13:
  if ( (int *)v14 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v14 + 8) = 0;
    *(uint32_t *)v14 = v16;
    *((uint8_t *)v63 + v16) = 0;
  }
LABEL_15:
  v69 = v63;
  v53(v66, v7, &v69);
  v17 = (int)(uintptr_t)(v69 - 3);
  if ( v69 - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add(v69 - 1, 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(v17);
  v57 = *((char **)v56 + 114);
  v18 = v66[0];
  sa = *((char **)s + 2);
  v19 = (int *)(v66[0] - 12);
  if ( *(int *)(v66[0] - 4) < 0 )
  {
    v18 = sub_CFF610((int)(uintptr_t)(v19));
  }
  else if ( v19 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    __sync_add_and_fetch((volatile int32_t *)(v66[0] - 4), 1u);
  }
  v67[0] = v18;
  v20 = *(uint32_t *)(v18 - 12);
  if ( v20 == 1073741820 )
    goto LABEL_73;
  v64 = v20 + 1;
  v21 = *(uint32_t *)(v18 - 8);
  if ( v20 + 1 <= v21 && *(int *)(v18 - 4) <= 0 )
  {
    v22 = (char *)(v18 + v20);
    v23 = "/";
  }
  else if ( v18 > (unsigned int)(uintptr_t)("/") || (v22 = (char *)(v18 + v20), v18 + v20 < (unsigned int)(uintptr_t)("/")) )
  {
    if ( v64 == v21 && *(int *)(v18 - 4) <= 0 )
    {
      v22 = (char *)(v18 + v20);
      v23 = "/";
    }
    else
    {
      sub_CFF4B0(v67, v64);
      v23 = "/";
      v22 = (char *)(*(uint32_t *)(v67[0] - 12) + v67[0]);
    }
  }
  else
  {
    v54 = (char *)(&asc_1B1B5C6[-v18]);
    if ( v64 != v21 || *(int *)(v18 - 4) > 0 )
    {
      sub_CFF4B0(v67, v64);
      v18 = v67[0];
      v22 = (char *)(v67[0] + *(uint32_t *)(v67[0] - 12));
    }
    v23 = &v54[v18];
  }
  *v22 = *v23;
  v24 = v67[0];
  v25 = (int *)(v67[0] - 12);
  if ( (int *)(v67[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v67[0] - 4) = 0;
    *(uint32_t *)(v24 - 12) = v64;
    *(uint8_t *)(v24 + v20 + 1) = 0;
    v24 = v67[0];
    v25 = (int *)(v67[0] - 12);
  }
  if ( *(int *)(v24 - 4) < 0 )
  {
    v24 = sub_CFF610((int)(uintptr_t)(v25));
  }
  else if ( v25 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    __sync_add_and_fetch((volatile int32_t *)(v24 - 4), 1u);
  }
  v68 = (const char *)v24;
  na = v24;
  v26 = strlen(sa);
  v27 = (const char *)na;
  if ( v26 != 0 )
  {
    v28 = *(uint32_t *)(na - 12);
    if ( v26 <= 1073741820 - v28 )
    {
      v65 = v26 + v28;
      v55 = *(uint32_t *)(na - 8);
      if ( v26 + v28 <= v55 && *(int *)(na - 4) <= 0 )
        goto LABEL_65;
      if ( (unsigned int)(uintptr_t)(sa) >= na )
      {
        v29 = (char *)(na + v28);
        if ( (unsigned int)(uintptr_t)(sa) <= na + v28 )
        {
          if ( v65 != v55 || *(int *)(na - 4) > 0 )
          {
            sub_CFF4B0(&v68, v65);
            v27 = v68;
            v29 = (char *)&v68[*((uint32_t *)v68 - 3)];
          }
          v30 = &sa[(uint32_t)(uintptr_t)(v27) - na];
          goto LABEL_41;
        }
      }
      if ( v65 == v55 && *(int *)(na - 4) <= 0 )
      {
LABEL_65:
        v29 = (char *)(na + v28);
        v30 = sa;
      }
      else
      {
        sub_CFF4B0(&v68, v65);
        v30 = sa;
        v29 = (char *)&v68[*((uint32_t *)v68 - 3)];
      }
LABEL_41:
      if ( v26 == 1 )
        *v29 = *v30;
      else
        memcpy(v29, v30, v26);
      v27 = v68;
      if ( v68 - 12 != (const char *)&dword_20D3E6C )
      {
        *((uint32_t *)v68 - 1) = 0;
        *((uint32_t *)v27 - 3) = v65;
        ((char *)v27)[v65] = 0;
        v27 = v68;
      }
      goto LABEL_45;
    }
LABEL_73:
    sub_1900180("basic_string::append");
  }
LABEL_45:
  v73 = v51;
  glitch::video::CTextureManager::getTexture(v58, v57, v27);
  v31 = (int)(uintptr_t)(v68 - 12);
  if ( v68 - 12 != (const char *)&dword_20D3E6C
    && __sync_fetch_and_add((volatile int32_t *)v68 - 1, 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v31);
  }
  v32 = v67[0] - 12;
  if ( (int *)(v67[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)    && __sync_fetch_and_add((volatile int32_t *)(v67[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v32);
  }
  if ( *(uint32_t *)v58 == 0 )
  {
    v73 = v51;
    glitch::video::CTextureManager::getTexture((glitch::video::CTextureManager::Self *)&v70, v57, sa);
    v36 = 0;
    v71[0] = v70;
    if ( v70 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v70 + 4));
      v36 = v71[0];
    }
    v37 = *(uint32_t *)v58;
    *(uint32_t *)v58 = v36;
    v71[0] = v37;
    sub_CFE550(v71);
    sub_CFE550(&v70);
  }
  v33 = v66[0] - 12;
  if ( (int *)(v66[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)    && __sync_fetch_and_add((volatile int32_t *)(v66[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v33);
  }
  return v58;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createScene  (binary VA: 0xd01310)
// Original: glitch::collada::CColladaFactory::createScene
// ----------------------------------------------------------------------------
glitch::collada::CColladaFactory::Self * glitch::collada::CColladaFactory::createScene(glitch::collada::CColladaFactory::Self *self, const glitch::collada::CColladaDatabase::Self *a2, glitch::collada::CColladaDatabase::Self *a3)
{
  glitch::collada::CRootSceneNode::Self *v3;

  v3 = (glitch::collada::CRootSceneNode::Self *)opNew(0x1C0u);
  glitch::collada::CRootSceneNode::Construct(v3, a3);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v3 + *(uint32_t *)(*(uint32_t *)v3 - 16) + 4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::getMaterialVertexAttributeMap  (binary VA: 0xd01390)
// Original: glitch::collada::CModularSkinnedMesh::getMaterialVertexAttributeMap
// ----------------------------------------------------------------------------
glitch::collada::CModularSkinnedMesh::Self * glitch::collada::CModularSkinnedMesh::getMaterialVertexAttributeMap(glitch::collada::CModularSkinnedMesh::Self *self, unsigned int a2, int a3)
{
  volatile int32_t *v3;

  v3 = *(volatile int32_t **)(*(uint32_t *)(a2 + 192) + 40 * a3 + 20);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    sub_8B1B00(v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::getMaterialVertexAttributeMap  (binary VA: 0xd013f0)
// Original: glitch::collada::CMorphingMesh::getMaterialVertexAttributeMap
// ----------------------------------------------------------------------------
glitch::collada::CMorphingMesh::Self * glitch::collada::CMorphingMesh::getMaterialVertexAttributeMap(glitch::collada::CMorphingMesh::Self *self, unsigned int a2, int a3)
{
  volatile int32_t *v3;

  v3 = *(volatile int32_t **)(*(uint32_t *)(a2 + 40) + 12 * a3 + 8);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    sub_8B1B00(v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getMaterialVertexAttributeMap  (binary VA: 0xd01440)
// Original: glitch::collada::CSkinnedMesh::getMaterialVertexAttributeMap
// ----------------------------------------------------------------------------
glitch::collada::CSkinnedMesh::Self * glitch::collada::CSkinnedMesh::getMaterialVertexAttributeMap(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2, int a3)
{
  volatile int32_t *v3;

  v3 = *(volatile int32_t **)(*(uint32_t *)(a2 + 176) + 48 * a3 + 8);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    sub_8B1B00(v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMesh::getMaterialVertexAttributeMap  (binary VA: 0xd014a0)
// Original: glitch::collada::CMesh::getMaterialVertexAttributeMap
// ----------------------------------------------------------------------------
glitch::collada::CMesh::Self * glitch::collada::CMesh::getMaterialVertexAttributeMap(glitch::collada::CMesh::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  glitch::collada::CMesh::Self *result;
  volatile int32_t *v5;

  v3 = *(uint32_t *)(a2 + 40);
  result = self;
  if ( a3 < -1431655765 * ((*(uint32_t *)(a2 + 44) - v3) >> 2) )
  {
    v5 = *(volatile int32_t **)(v3 + 12 * a3 + 8);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
    if ( v5 != nullptr )
    {
      sub_8B1B00(v5);
      return self;
    }
  }
  else
  {
    *(uint32_t *)self = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::getMaterialByCategoryId  (binary VA: 0xd01520)
// Original: glitch::collada::CModularSkinnedMesh::getMaterialByCategoryId
// ----------------------------------------------------------------------------
glitch::collada::CModularSkinnedMesh::Self * glitch::collada::CModularSkinnedMesh::getMaterialByCategoryId(glitch::collada::CModularSkinnedMesh::Self *self, unsigned int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  volatile int32_t *v7;
  int v9;
  int v10;
  int v11;

  v3 = 0;
  v9 = 0;
  v10 = *(uint32_t *)(a2 + 192);
  v11 = -858993459 * ((*(uint32_t *)(a2 + 196) - v10) >> 3);
  if ( v11 == 0 )
  {
LABEL_8:
    *(uint32_t *)self = 0;
    return self;
  }
  while ( 1 )
  {
    v4 = *(uint32_t **)(v10 + v3 + 24);
    v5 = (*(uint32_t *)(v10 + v3 + 28) - (int)(uintptr_t)(v4)) >> 3;
    if ( v5 != 0 )
      break;
LABEL_7:
    ++v9;
    v3 += 40;
    if ( v11 == v9 )
      goto LABEL_8;
  }
  if ( *v4 != a3 )
  {
    v6 = 0;
    while ( ++v6 != v5 )
    {
      if ( v4[2 * v6] == a3 )
        goto LABEL_9;
    }
    goto LABEL_7;
  }
LABEL_9:
  v7 = *(volatile int32_t **)(v10 + v3 + 8);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v7);
  if ( v7 != nullptr )
    sub_8B1B00(v7);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::getMaterial  (binary VA: 0xd015e0)
// Original: glitch::collada::CModularSkinnedMesh::getMaterial
// ----------------------------------------------------------------------------
glitch::collada::CModularSkinnedMesh::Self * glitch::collada::CModularSkinnedMesh::getMaterial(glitch::collada::CModularSkinnedMesh::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  glitch::collada::CModularSkinnedMesh::Self *result;
  volatile int32_t *v5;

  v3 = *(uint32_t *)(a2 + 192);
  result = self;
  if ( a3 >= -858993459 * ((*(uint32_t *)(a2 + 196) - v3) >> 3) )
  {
    *(uint32_t *)self = 0;
  }
  else
  {
    v5 = *(volatile int32_t **)(v3 + 40 * a3 + 8);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
    if ( v5 != nullptr )
    {
      sub_8B1B00(v5);
      return self;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::getMaterial  (binary VA: 0xd01670)
// Original: glitch::collada::CMorphingMesh::getMaterial
// ----------------------------------------------------------------------------
glitch::collada::CMorphingMesh::Self * glitch::collada::CMorphingMesh::getMaterial(glitch::collada::CMorphingMesh::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  glitch::collada::CMorphingMesh::Self *result;
  volatile int32_t *v5;

  v3 = *(uint32_t *)(a2 + 40);
  result = self;
  if ( a3 >= -1431655765 * ((*(uint32_t *)(a2 + 44) - v3) >> 2) )
  {
    *(uint32_t *)self = 0;
  }
  else
  {
    v5 = *(volatile int32_t **)(v3 + 12 * a3 + 4);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
    if ( v5 != nullptr )
    {
      sub_8B1B00(v5);
      return self;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getMaterial  (binary VA: 0xd016f0)
// Original: glitch::collada::CSkinnedMesh::getMaterial
// ----------------------------------------------------------------------------
glitch::collada::CSkinnedMesh::Self * glitch::collada::CSkinnedMesh::getMaterial(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  glitch::collada::CSkinnedMesh::Self *result;
  volatile int32_t *v5;

  v3 = *(uint32_t *)(a2 + 176);
  result = self;
  if ( a3 >= -1431655765 * ((*(uint32_t *)(a2 + 180) - v3) >> 4) )
  {
    *(uint32_t *)self = 0;
  }
  else
  {
    v5 = *(volatile int32_t **)(v3 + 48 * a3 + 4);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
    if ( v5 != nullptr )
    {
      sub_8B1B00(v5);
      return self;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMesh::getMaterial  (binary VA: 0xd01780)
// Original: glitch::collada::CMesh::getMaterial
// ----------------------------------------------------------------------------
glitch::collada::CMesh::Self * glitch::collada::CMesh::getMaterial(glitch::collada::CMesh::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  glitch::collada::CMesh::Self *result;
  volatile int32_t *v5;

  v3 = *(uint32_t *)(a2 + 40);
  result = self;
  if ( a3 < -1431655765 * ((*(uint32_t *)(a2 + 44) - v3) >> 2) )
  {
    v5 = *(volatile int32_t **)(v3 + 12 * a3 + 4);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
    if ( v5 != nullptr )
    {
      sub_8B1B00(v5);
      return self;
    }
  }
  else
  {
    *(uint32_t *)self = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::setMaterial  (binary VA: 0xd01800)
// Original: glitch::collada::CSkinnedMesh::setMaterial
// ----------------------------------------------------------------------------
int glitch::collada::CSkinnedMesh::setMaterial(int a1, int a2, volatile int32_t **a3, volatile int32_t **a4)
{
  volatile int32_t *v4;
  int v5;
  int v6;
  glitch::video::CMaterial::Self *v7;
  bool v8;
  int v9;
  volatile int32_t *v10;
  glitch::video::CMaterialVertexAttributeMap::Self *v11;
  volatile int32_t *v13;
  volatile int32_t *v14;
  int v15;
  int v16;

  v4 = *a3;
  v5 = 48 * a2;
  v6 = 48 * a2 + *(uint32_t *)(a1 + 176);
  if ( *a3 != nullptr )
  {
    v13 = *a3;
    v15 = 48 * a2 + *(uint32_t *)(a1 + 176);
    sub_8B1B00(*a3);
    v6 = v15;
    v4 = v13;
  }
  v7 = *(glitch::video::CMaterial::Self **)(v6 + 4);
  *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v4);
  if ( v7 != nullptr )
  {
    v8 = *(uint32_t *)v7 == 2;
    _mm_mfence();
    if ( v8 )
      glitch::video::CMaterial::removeFromRootSceneNode(v7);
    if ( __sync_fetch_and_add((volatile int32_t *)v7, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v7);
      gll_operator_delete_arr((int)(uintptr_t)(v7));
    }
  }
  v9 = v5 + *(uint32_t *)(a1 + 176);
  v10 = *a4;
  if ( *a4 != nullptr )
  {
    v14 = *a4;
    v16 = v5 + *(uint32_t *)(a1 + 176);
    sub_8B1B00(*a4);
    v9 = v16;
    v10 = v14;
  }
  v11 = *(glitch::video::CMaterialVertexAttributeMap::Self **)(v9 + 8);
  *(uint32_t *)(v9 + 8) = (uint32_t)(uintptr_t)(v10);
  if ( v11 != nullptr && __sync_fetch_and_add((volatile int32_t *)v11, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v11);
    gll_operator_delete_arr((int)(uintptr_t)(v11));
  }
  *(uint8_t *)(*(uint32_t *)(a1 + 176) + v5 + 16) = -1;
  *(uint8_t *)(*(uint32_t *)(a1 + 176) + v5 + 17) = -1;
  return (*(int (**)(uint32_t, int, volatile int32_t **, volatile int32_t **))(**(uint32_t **)(a1 + 188)
                                                                                                 + 32))(
           *(uint32_t *)(a1 + 188),
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::setMaterial  (binary VA: 0xd01960)
// Original: glitch::collada::CMorphingMesh::setMaterial
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CMorphingMesh::setMaterial(int a1, int a2, volatile int32_t **a3, volatile int32_t **a4)
{
  volatile int32_t *v4;
  int v5;
  int v6;
  glitch::video::CMaterial::Self *v7;
  bool v8;
  int v9;
  volatile int32_t *result;
  volatile int32_t *v11;
  volatile int32_t *v12;
  int v13;
  int v14;
  int v15;

  (*(void (**)(uint32_t, int, volatile int32_t **, volatile int32_t **))(***(uint32_t ***)(a1 + 52)
                                                                                           + 32))(
    **(uint32_t **)(a1 + 52),
    a2,
    a3,
    a4);
  v4 = *a3;
  v5 = 12 * a2;
  v6 = 12 * a2 + *(uint32_t *)(a1 + 40);
  if ( *a3 != nullptr )
  {
    v15 = 12 * a2 + *(uint32_t *)(a1 + 40);
    sub_8B1B00(v4);
    v6 = v15;
    v5 = 12 * a2;
  }
  v7 = *(glitch::video::CMaterial::Self **)(v6 + 4);
  *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v4);
  if ( v7 != nullptr )
  {
    v8 = *(uint32_t *)v7 == 2;
    _mm_mfence();
    if ( v8 )
    {
      v14 = v5;
      glitch::video::CMaterial::removeFromRootSceneNode(v7);
      v5 = v14;
    }
    if ( __sync_fetch_and_add((volatile int32_t *)v7, 0xFFFFFFFF) == 1 )
    {
      v13 = v5;
      glitch::video::CMaterial::Destroy(v7);
      gll_operator_delete_arr((int)(uintptr_t)(v7));
      v5 = v13;
    }
  }
  v9 = v5 + *(uint32_t *)(a1 + 40);
  result = (volatile int32_t *)a4;
  v11 = *a4;
  if ( *a4 != nullptr )
    result = sub_8B1B00(*a4);
  v12 = *(volatile int32_t **)(v9 + 8);
  *(uint32_t *)(v9 + 8) = (uint32_t)(uintptr_t)(v11);
  if ( v12 != nullptr )
  {
    result = (volatile int32_t *)__sync_fetch_and_add(v12, 0xFFFFFFFF);
    if ( result == (int *)((char *)&dword_0 + 1) )
    {
      glitch::video::CMaterialVertexAttributeMap::Destroy((glitch::video::CMaterialVertexAttributeMap::Self *)v12);
      return (volatile int32_t *)gll_operator_delete_arr((int)(uintptr_t)(v12));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::setMaterial  (binary VA: 0xd01a90)
// Original: glitch::collada::CModularSkinnedMesh::setMaterial
// ----------------------------------------------------------------------------
volatile int32_t * glitch::collada::CModularSkinnedMesh::setMaterial(int a1, int a2, volatile int32_t **a3, volatile int32_t **a4)
{
  int v4;
  volatile int32_t *v5;
  glitch::video::CMaterial::Self *v6;
  bool v7;
  int v8;
  volatile int32_t *result;
  volatile int32_t *v10;
  volatile int32_t *v11;
  int v12;

  v4 = 40 * a2 + *(uint32_t *)(a1 + 192);
  v5 = *a3;
  if ( *a3 != nullptr )
  {
    v12 = 40 * a2 + *(uint32_t *)(a1 + 192);
    sub_8B1B00(v5);
    v4 = v12;
  }
  v6 = *(glitch::video::CMaterial::Self **)(v4 + 8);
  *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(v5);
  if ( v6 != nullptr )
  {
    v7 = *(uint32_t *)v6 == 2;
    _mm_mfence();
    if ( v7 )
      glitch::video::CMaterial::removeFromRootSceneNode(v6);
    if ( __sync_fetch_and_add((volatile int32_t *)v6, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v6);
      gll_operator_delete_arr((int)(uintptr_t)(v6));
    }
  }
  v8 = *(uint32_t *)(a1 + 192) + 40 * a2;
  result = (volatile int32_t *)a4;
  v10 = *a4;
  if ( *a4 != nullptr )
    result = sub_8B1B00(*a4);
  v11 = *(volatile int32_t **)(v8 + 20);
  *(uint32_t *)(v8 + 20) = (uint32_t)(uintptr_t)(v10);
  if ( v11 != nullptr )
  {
    result = (volatile int32_t *)__sync_fetch_and_add(v11, 0xFFFFFFFF);
    if ( result == (int *)((char *)&dword_0 + 1) )
    {
      glitch::video::CMaterialVertexAttributeMap::Destroy((glitch::video::CMaterialVertexAttributeMap::Self *)v11);
      return (volatile int32_t *)gll_operator_delete_arr((int)(uintptr_t)(v11));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMesh::setMaterial  (binary VA: 0xd01b90)
// Original: glitch::collada::CMesh::setMaterial
// ----------------------------------------------------------------------------
unsigned int glitch::collada::CMesh::setMaterial(int a1, unsigned int a2, volatile int32_t **a3, volatile int32_t **a4)
{
  int v4;
  unsigned int result;
  int v6;
  volatile int32_t *v7;
  glitch::video::CMaterial::Self *v8;
  bool v9;
  volatile int32_t *v10;
  volatile int32_t *v11;

  v4 = *(uint32_t *)(a1 + 40);
  result = -1431655765 * ((*(uint32_t *)(a1 + 44) - v4) >> 2);
  if ( a2 < result )
  {
    v6 = v4 + 12 * a2;
    v7 = *a3;
    if ( *a3 != nullptr )
      sub_8B1B00(*a3);
    v8 = *(glitch::video::CMaterial::Self **)(v6 + 4);
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7);
    if ( v8 != nullptr )
    {
      v9 = *(uint32_t *)v8 == 2;
      _mm_mfence();
      if ( v9 )
        glitch::video::CMaterial::removeFromRootSceneNode(v8);
      if ( __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterial::Destroy(v8);
        gll_operator_delete_arr((int)(uintptr_t)(v8));
      }
    }
    result = (unsigned int)(uintptr_t)(a4);
    v10 = *a4;
    if ( *a4 != nullptr )
      result = (unsigned int)(uintptr_t)(sub_8B1B00(*a4));
    v11 = *(volatile int32_t **)(v6 + 8);
    *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v10);
    if ( v11 != nullptr )
    {
      result = __sync_fetch_and_add(v11, 0xFFFFFFFF);
      if ( result == 1 )
      {
        glitch::video::CMaterialVertexAttributeMap::Destroy((glitch::video::CMaterialVertexAttributeMap::Self *)v11);
        return gll_operator_delete_arr((int)(uintptr_t)(v11));
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMorphingMesh::getMeshBuffer  (binary VA: 0xd01d30)
// Original: glitch::collada::CMorphingMesh::getMeshBuffer
// ----------------------------------------------------------------------------
glitch::collada::CMorphingMesh::Self * glitch::collada::CMorphingMesh::getMeshBuffer(glitch::collada::CMorphingMesh::Self *self, unsigned int a2, int a3)
{
  int v3;

  v3 = *(uint32_t *)(*(uint32_t *)(a2 + 40) + 12 * a3);
  *(uint32_t *)self = v3;
  if ( v3 != 0 )
    sub_8B1B00((volatile int32_t *)(v3 + 4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CSkinnedMesh::getMeshBuffer  (binary VA: 0xd01d80)
// Original: glitch::collada::CSkinnedMesh::getMeshBuffer
// ----------------------------------------------------------------------------
glitch::collada::CSkinnedMesh::Self * glitch::collada::CSkinnedMesh::getMeshBuffer(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2, int a3)
{
  int *v3;
  int v4;
  bool v5;

  v3 = (int *)(*(uint32_t *)(a2 + 176) + 48 * a3);
  v4 = *v3;
  v5 = *v3 == 0;
  *(uint32_t *)self = *v3;
  if ( !v5 )
    sub_8B1B00((volatile int32_t *)(v4 + 4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CModularSkinnedMesh::getMeshBuffer  (binary VA: 0xd01ec0)
// Original: glitch::collada::CModularSkinnedMesh::getMeshBuffer
// ----------------------------------------------------------------------------
glitch::collada::CModularSkinnedMesh::Self * glitch::collada::CModularSkinnedMesh::getMeshBuffer(glitch::collada::CModularSkinnedMesh::Self *self, unsigned int a2, int a3)
{
  int v3;
  int v4;

  v3 = *(uint32_t *)(a2 + 192) + 40 * a3;
  if ( (*(uint8_t *)(v3 + 36) & 3) != 0 )
  {
    v4 = *(uint32_t *)(v3 + 12);
    *(uint32_t *)self = v4;
    if ( v4 != 0 )
      sub_8B1B00((volatile int32_t *)(v4 + 4));
    return self;
  }
  else
  {
    (*(void (**)(glitch::collada::CModularSkinnedMesh::Self *))(**(uint32_t **)(*(uint32_t *)(a2 + 180)
                                                                                + 36 * **(uint32_t **)(v3 + 24)
                                                                                + 4)
                                                                  + 20))(self);
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CMesh::getMeshBuffer  (binary VA: 0xd01f50)
// Original: glitch::collada::CMesh::getMeshBuffer
// ----------------------------------------------------------------------------
glitch::collada::CMesh::Self * glitch::collada::CMesh::getMeshBuffer(glitch::collada::CMesh::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  glitch::collada::CMesh::Self *result;
  int v5;

  v3 = *(uint32_t *)(a2 + 40);
  result = self;
  if ( a3 < -1431655765 * ((*(uint32_t *)(a2 + 44) - v3) >> 2) )
  {
    v5 = *(uint32_t *)(v3 + 12 * a3);
    *(uint32_t *)self = v5;
    if ( v5 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v5 + 4));
      return self;
    }
  }
  else
  {
    *(uint32_t *)self = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::CColladaFactory::createLodSelector  (binary VA: 0xd02120)
// Original: glitch::collada::CColladaFactory::createLodSelector
// ----------------------------------------------------------------------------
volatile int32_t ** glitch::collada::CColladaFactory::createLodSelector(volatile int32_t **a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  const float *v8;
  glitch::scene::CRangedBasedLODSelector::Self *v9;
  int v11;
  int v12;
  const float *v13;
  volatile int32_t *v14;
  glitch::scene::CRangedBasedLODSelector::Self *v15;
  float *v16;
  float *v17;

  v4 = nullptr;
  v5 = *(uint32_t *)(a4 + 8);
  if ( v5 != 0 )
    v4 = (uint32_t *)(a4 + v5 + 8);
  *a1 = nullptr;
  if ( *v4 == 0 )
  {
    v6 = v4[2];
    if ( v6 != 0 )
    {
      v7 = (int)(uintptr_t)(v4) + v6 + 8;
      v16 = (float *)(v7 + *(uint32_t *)(v7 + 4) + 4);
    }
    else
    {
      v16 = (float *)(loc_4 + 4);
      v7 = 0;
    }
    v8 = (const float *)(v7 + *(uint32_t *)(v7 + 12) + 12);
    v15 = (glitch::scene::CRangedBasedLODSelector::Self *)opNew(0x44u);
    glitch::scene::CRangedBasedLODSelector::Construct(v15, v16, v8, v4[1] - 1);
    v9 = v15;
    if ( v15 == nullptr )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( *v4 != 1 )
    return a1;
  v11 = v4[2];
  if ( v11 != 0 )
  {
    v12 = (int)(uintptr_t)(v4) + v11 + 8;
    v17 = (float *)(v12 + *(uint32_t *)(v12 + 4) + 4);
  }
  else
  {
    v17 = (float *)(loc_4 + 4);
    v12 = 0;
  }
  v13 = (const float *)(v12 + *(uint32_t *)(v12 + 12) + 12);
  v15 = (glitch::scene::CRangedBasedLODSelector::Self *)opNew(0x24u);
  glitch::scene::CProjectionBasedLODSelector::Construct(v15, v17, v13, v4[1] - 1);
  v9 = v15;
  if ( v15 != nullptr )
  {
LABEL_13:
    sub_8B1B00((volatile int32_t *)v9 + 1);
    v9 = v15;
  }
LABEL_14:
  v14 = *a1;
  *a1 = (volatile int32_t *)v9;
  if ( v14 != nullptr )
    sub_5459C0(v14);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::IParticleContext::Destroy  (binary VA: 0xd022a0)
// Original: glitch::collada::ps::IParticleContext::~IParticleContext
// ----------------------------------------------------------------------------
void glitch::collada::ps::IParticleContext::Destroy(glitch::collada::ps::IParticleContext::Self *self)
{
  uint32_t *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070310);
  v1 = *((uint32_t **)self + 49);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
  if ( *((uint32_t *)self + 27) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 27));
  if ( *((uint32_t *)self + 21) != 0 )
    glitch::collada::CAnimationBlock::drop(*((glitch::collada::CAnimationBlock::Self **)self + 21));
  if ( *((uint32_t *)self + 9) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 9));
}



// ============================================================================
// Address:   0xd02310 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps24CParticleSystemSpinModelD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemSpinModel::Destroy()
// ============================================================================
static void g4_thunk_76(
        glitch::collada::ps::CParticleSystemSpinModel::Self *self)
{
  glitch::collada::ps::CParticleSystemSpinModel::Destroy((glitch::collada::ps::CParticleSystemSpinModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd02320 (size: 54 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSpinModelD1Ev
// Demangled: glitch::collada::ps::CParticleSystemSpinModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemSpinModel::Destroy(
        glitch::collada::ps::CParticleSystemSpinModel::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207064C);
  *((uint32_t *)self + 25) = ((uint32_t)(uintptr_t)&off_207066C);
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::IParticleContext::Self *)((glitch::collada::ps::CParticleSystemSpinModel::Self *)((char *)self + 100)));
}


// ============================================================================
// Address:   0xd02360 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps24CParticleSystemSpinModelD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemSpinModel::Destroy()
// ============================================================================
static void g4_thunk_77(
        glitch::collada::ps::CParticleSystemSpinModel::Self *self)
{
  glitch::collada::ps::CParticleSystemSpinModel::Destroy((glitch::collada::ps::CParticleSystemSpinModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd02370 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSpinModelD0Ev
// Demangled: glitch::collada::ps::CParticleSystemSpinModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemSpinModel::DestroyDeleting(
        glitch::collada::ps::CParticleSystemSpinModel::Self *self)
{
  glitch::collada::ps::CParticleSystemSpinModel::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd023b0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps24CParticleSystemSizeModelD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemSizeModel::Destroy()
// ============================================================================
static void g4_thunk_78(
        glitch::collada::ps::CParticleSystemSizeModel::Self *self)
{
  glitch::collada::ps::CParticleSystemSizeModel::Destroy((glitch::collada::ps::CParticleSystemSizeModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd023c0 (size: 54 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModelD1Ev
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemSizeModel::Destroy(
        glitch::collada::ps::CParticleSystemSizeModel::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207060C);
  *((uint32_t *)self + 17) = ((uint32_t)(uintptr_t)&off_2070628);
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::CParticleSystemSizeModel::Self *)((char *)self + 68));
}


// ============================================================================
// Address:   0xd02400 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps24CParticleSystemSizeModelD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemSizeModel::Destroy()
// ============================================================================
static void g4_thunk_79(
        glitch::collada::ps::CParticleSystemSizeModel::Self *self)
{
  glitch::collada::ps::CParticleSystemSizeModel::Destroy((glitch::collada::ps::CParticleSystemSizeModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd02410 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModelD0Ev
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemSizeModel::DestroyDeleting(
        glitch::collada::ps::CParticleSystemSizeModel::Self *self)
{
  glitch::collada::ps::CParticleSystemSizeModel::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd02450 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps26CParticleSystemMotionModelD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemMotionModel::Destroy()
// ============================================================================
static void g4_thunk_80(
        glitch::collada::ps::CParticleSystemMotionModel::Self *self)
{
  glitch::collada::ps::CParticleSystemMotionModel::Destroy((glitch::collada::ps::CParticleSystemMotionModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd02460 (size: 54 bytes)
// Symbol:    _ZN6glitch7collada2ps26CParticleSystemMotionModelD1Ev
// Demangled: glitch::collada::ps::CParticleSystemMotionModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemMotionModel::Destroy(
        glitch::collada::ps::CParticleSystemMotionModel::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207058C);
  *((uint32_t *)self + 29) = ((uint32_t)(uintptr_t)&off_20705A8);
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::CParticleSystemMotionModel::Self *)((char *)self + 116));
}


// ============================================================================
// Address:   0xd024a0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps26CParticleSystemMotionModelD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemMotionModel::Destroy()
// ============================================================================
static void g4_thunk_81(
        glitch::collada::ps::CParticleSystemMotionModel::Self *self)
{
  glitch::collada::ps::CParticleSystemMotionModel::Destroy((glitch::collada::ps::CParticleSystemMotionModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd024b0 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps26CParticleSystemMotionModelD0Ev
// Demangled: glitch::collada::ps::CParticleSystemMotionModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemMotionModel::DestroyDeleting(
        glitch::collada::ps::CParticleSystemMotionModel::Self *self)
{
  glitch::collada::ps::CParticleSystemMotionModel::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd024f0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps24CParticleSystemLifeModelD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemLifeModel::Destroy()
// ============================================================================
static void g4_thunk_82(
        glitch::collada::ps::CParticleSystemLifeModel::Self *self)
{
  glitch::collada::ps::CParticleSystemLifeModel::Destroy((glitch::collada::ps::CParticleSystemLifeModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd02500 (size: 54 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemLifeModelD1Ev
// Demangled: glitch::collada::ps::CParticleSystemLifeModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemLifeModel::Destroy(
        glitch::collada::ps::CParticleSystemLifeModel::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207054C);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_2070568);
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::CParticleSystemLifeModel::Self *)((char *)self + 16));
}


// ============================================================================
// Address:   0xd02540 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps24CParticleSystemLifeModelD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemLifeModel::Destroy()
// ============================================================================
static void g4_thunk_83(
        glitch::collada::ps::CParticleSystemLifeModel::Self *self)
{
  glitch::collada::ps::CParticleSystemLifeModel::Destroy((glitch::collada::ps::CParticleSystemLifeModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd02550 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemLifeModelD0Ev
// Demangled: glitch::collada::ps::CParticleSystemLifeModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemLifeModel::DestroyDeleting(
        glitch::collada::ps::CParticleSystemLifeModel::Self *self)
{
  glitch::collada::ps::CParticleSystemLifeModel::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd02590 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps30CParticleSystemGenerationModelD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemGenerationModel::Destroy()
// ============================================================================
static void g4_thunk_84(
        glitch::collada::ps::CParticleSystemGenerationModel::Self *self)
{
  glitch::collada::ps::CParticleSystemGenerationModel::Destroy((glitch::collada::ps::CParticleSystemGenerationModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd025a0 (size: 54 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemGenerationModelD1Ev
// Demangled: glitch::collada::ps::CParticleSystemGenerationModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemGenerationModel::Destroy(
        glitch::collada::ps::CParticleSystemGenerationModel::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207050C);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_2070528);
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::CParticleSystemGenerationModel::Self *)((char *)self + 44));
}


// ============================================================================
// Address:   0xd025e0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps30CParticleSystemGenerationModelD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemGenerationModel::Destroy()
// ============================================================================
static void g4_thunk_85(
        glitch::collada::ps::CParticleSystemGenerationModel::Self *self)
{
  glitch::collada::ps::CParticleSystemGenerationModel::Destroy((glitch::collada::ps::CParticleSystemGenerationModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd025f0 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemGenerationModelD0Ev
// Demangled: glitch::collada::ps::CParticleSystemGenerationModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemGenerationModel::DestroyDeleting(
        glitch::collada::ps::CParticleSystemGenerationModel::Self *self)
{
  glitch::collada::ps::CParticleSystemGenerationModel::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd02630 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps25CParticleSystemColorModelD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemColorModel::Destroy()
// ============================================================================
static void g4_thunk_86(
        glitch::collada::ps::CParticleSystemColorModel::Self *self)
{
  glitch::collada::ps::CParticleSystemColorModel::Destroy((glitch::collada::ps::CParticleSystemColorModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd02640 (size: 54 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModelD1Ev
// Demangled: glitch::collada::ps::CParticleSystemColorModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemColorModel::Destroy(
        glitch::collada::ps::CParticleSystemColorModel::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207044C);
  *((uint32_t *)self + 23) = ((uint32_t)(uintptr_t)&off_2070468);
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::CParticleSystemColorModel::Self *)((char *)self + 92));
}


// ============================================================================
// Address:   0xd02680 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps25CParticleSystemColorModelD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemColorModel::Destroy()
// ============================================================================
static void g4_thunk_87(
        glitch::collada::ps::CParticleSystemColorModel::Self *self)
{
  glitch::collada::ps::CParticleSystemColorModel::Destroy((glitch::collada::ps::CParticleSystemColorModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd02690 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModelD0Ev
// Demangled: glitch::collada::ps::CParticleSystemColorModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemColorModel::DestroyDeleting(
        glitch::collada::ps::CParticleSystemColorModel::Self *self)
{
  glitch::collada::ps::CParticleSystemColorModel::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd026d0 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps16IParticleContextD0Ev
// Demangled: glitch::collada::ps::IParticleContext::Destroy()
// ============================================================================
static void g4_IParticleContext_d0(glitch::collada::ps::IParticleContext::Self *self)
{
  glitch::collada::ps::IParticleContext::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd02710 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps26CParticleSystemForcesModelD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemForcesModel::Destroy()
// ============================================================================
static void g4_thunk_88(
        glitch::collada::ps::CParticleSystemForcesModel::Self *self)
{
  glitch::collada::ps::CParticleSystemForcesModel::Destroy((glitch::collada::ps::CParticleSystemForcesModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd02720 (size: 112 bytes)
// Symbol:    _ZN6glitch7collada2ps26CParticleSystemForcesModelD1Ev
// Demangled: glitch::collada::ps::CParticleSystemForcesModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemForcesModel::Destroy(
        glitch::collada::ps::CParticleSystemForcesModel::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;

  v1 = *((uint32_t **)self + 2);
  v2 = *((uint32_t **)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20704CC);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20704E8);
  if ( v1 != v2 )
  {
    do
    {
      if ( *v2 != 0 )
        (*(void (**)(uint32_t))(*(uint32_t *)*v2 + 4))(*v2);
      ++v2;
    }
    while ( v1 != v2 );
    v2 = *((uint32_t **)self + 1);
  }
  if ( v2 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v2));
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::CParticleSystemForcesModel::Self *)((char *)self + 20));
}


// ============================================================================
// Address:   0xd02790 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps26CParticleSystemForcesModelD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemForcesModel::Destroy()
// ============================================================================
static void g4_thunk_89(
        glitch::collada::ps::CParticleSystemForcesModel::Self *self)
{
  glitch::collada::ps::CParticleSystemForcesModel::Destroy((glitch::collada::ps::CParticleSystemForcesModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd027a0 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps26CParticleSystemForcesModelD0Ev
// Demangled: glitch::collada::ps::CParticleSystemForcesModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemForcesModel::DestroyDeleting(
        glitch::collada::ps::CParticleSystemForcesModel::Self *self)
{
  glitch::collada::ps::CParticleSystemForcesModel::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd027e0 (size: 728 bytes)
// Symbol:    _ZNK6glitch7collada15CColladaFactory14createIKSolverERKNS0_16CColladaDatabaseEPKNS0_18SArticulatedSystemE
// Demangled: glitch::collada::CColladaFactory::createIKSolver(glitch::collada::CColladaDatabase const&,glitch::collada::SArticulatedSystem const*)const
// ============================================================================
int *glitch::collada::CColladaFactory::createIKSolver(
        int *a1,
        int a2,
        glitch::collada::CColladaDatabase::Self *a3,
        int a4)
{
  uint32_t *v4;
  int v5;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  volatile int32_t *v12;
  void *v13;
  int v14;
  int v15;
  int v16;
  int i;
  int v18;
  int v19;
  int v20;
  int v21;
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  bool v25;
  float v26; // xmm0_4
  typedef uint32_t *_g4_t_JointDOF;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_KinematicsModel;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t _g4_t_v35[4];
  typedef int _g4_t_v36[5];
  typedef uint32_t _g4_t_v37[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_JointDOF)) > _g4_s0 ? (0u + sizeof(_g4_t_JointDOF)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v28)) > _g4_s1 ? (4u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v29)) > _g4_s2 ? (8u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_KinematicsModel)) > _g4_s3 ? (12u + sizeof(_g4_t_KinematicsModel)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (46u + sizeof(_g4_t_v34)) > _g4_s7 ? (46u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v35)) > _g4_s8 ? (48u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v36)) > _g4_s9 ? (64u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v37)) > _g4_s10 ? (84u + sizeof(_g4_t_v37)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_JointDOF &JointDOF = *reinterpret_cast<_g4_t_JointDOF *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_KinematicsModel &KinematicsModel = *reinterpret_cast<_g4_t_KinematicsModel *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 46u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);

  *a1 = 0;
  if ( a4 == 0 || *(uint32_t *)(a4 + 8) != 0 )
    return a1;
  v32 = a4 + 12;
  v4 = nullptr;
  v5 = *(uint32_t *)(a4 + 12);
  if ( v5 != 0 )
    v4 = (uint32_t *)(v5 + a4 + 12);
  if ( *v4 != 1 )
    return a1;
  v7 = v4;
  v8 = v4[4];
  v9 = 0;
  memset(v36, 0, 12);
  v10 = (int)(uintptr_t)(v7) + v8 + 16;
  if ( v8 != 0 )
    v9 = v10;
  if ( *(uint32_t *)v9 == 1 )
  {
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v35), *(char **)(v9 + 4), (int)(uintptr_t)(&v34));
    v11 = (int)(uintptr_t)(operator new(0x34u));
    glitch::scene::CIKSolver::Construct(v11, v35, 1);
    if ( v11 != 0 )
      sub_8B1B00((volatile int32_t *)(v11 + 4));
    v12 = (volatile int32_t *)*a1;
    *a1 = v11;
    if ( v12 != nullptr )
      sub_5459C0(v12);
    v13 = (void *)(v35[0] - 12);
    if ( (uint32_t *)(v35[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    glitch::scene::CIKSolver::getHardJoints(v36, 1);
    if ( *a1 != 0 )
    {
      v14 = 0;
      v15 = *(uint32_t *)(a4 + 12);
      if ( v15 != 0 )
        v14 = v15 + v32;
      KinematicsModel = glitch::collada::CColladaDatabase::getKinematicsModel(a3, *(uint32_t *)(v14 + 4));
      if ( KinematicsModel != 0 )
      {
        v16 = *(uint32_t *)(a4 + 12);
        v33 = 0;
        for ( i = 0; ; ++i )
        {
          v18 = 0;
          v19 = 0;
          if ( v16 != 0 )
            v19 = v16 + v32;
          if ( i >= *(uint32_t *)(v19 + 8) )
            break;
          if ( v16 != 0 )
            v18 = v16 + v32;
          v20 = v33 + v18 + *(uint32_t *)(v18 + 12) + 12;
          if ( *(uint8_t *)v20 != 0 )
          {
            v31 = *(uint8_t *)(v20 + 3);
            v29 = *(uint8_t *)(v20 + 2);
            v28 = v36[0] + 96 * v29;
            JointDOF = (uint32_t *)glitch::collada::CColladaDatabase::getJointDOF(a3, KinematicsModel, v29, v31);
            v21 = v28 + 32 * v31;
            if ( *(uint8_t *)(v21 + 12) == 0 )
              goto LABEL_33;
            if ( JointDOF != nullptr )
            {
              if ( *JointDOF == 1 )
              {
                v22 = *(float *)(v21 + 16);
                v23 = *(float *)(v21 + 20);
                v24 = *(float *)(v20 + 8);
                v25 = *(uint8_t *)(v20 + 1) == 0;
                v26 = *(float *)(v20 + 4);
                v37[0] = JointDOF[1];
                v37[1] = JointDOF[2];
                v37[2] = JointDOF[3];
                glitch::scene::CIKSolver::setJointAxis(*a1, v29, v31, v37, !v25, fmaxf(v26, v22), fminf(v24, v23));
              }
LABEL_33:
              v16 = *(uint32_t *)(a4 + 12);
              goto LABEL_22;
            }
            v16 = *(uint32_t *)(a4 + 12);
          }
LABEL_22:
          v33 += 12;
        }
      }
    }
  }
  if ( v36[0] == 0 )
    return a1;
  gll_operator_delete_arr(v36[0]);
  return a1;
}


// ============================================================================
// Address:   0xd02ac0 (size: 2302 bytes)
// Symbol:    _ZNK6glitch7collada15CColladaFactory18createAnimationSetERKNS0_16CColladaDatabaseEPKNS0_9anim_pack17SAnimationPackageE
// Demangled: glitch::collada::CColladaFactory::createAnimationSet(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SAnimationPackage const*)const
// ============================================================================
volatile int32_t **glitch::collada::CColladaFactory::createAnimationSet(
        volatile int32_t **a1,
        int a2,
        int *a3,
        int a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11;
  uint8_t *v12;
  size_t v13;
  size_t v14;
  int16_t v15;
  int v16;
  int v17;
  int *v18;
  void *v19;
  unsigned int v20;
  unsigned int i;
  uint8_t *v22;
  size_t v23;
  int v24;
  int v25;
  int v26;
  int *v27;
  int *v28;
  unsigned int v29;
  int v30;
  const char *v31;
  int v32;
  volatile int32_t *v33;
  volatile int32_t *v34;
  int *v35;
  uint8_t *v36;
  int v37;
  int v38;
  int v39;
  uint8_t *v40;
  size_t v41;
  size_t v42;
  int v43;
  int v44;
  int v45;
  volatile int32_t *v46;
  size_t v47;
  int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  size_t v54;
  int *v55;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef char *_g4_t_v60;
  typedef int *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int *_g4_t_v63;
  typedef uint8_t *_g4_t_v64;
  typedef char *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef void *_g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef uint32_t _g4_t_v70[3];
  typedef uint32_t _g4_t_v71[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v57)) > _g4_s0 ? (4u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v58)) > _g4_s1 ? (8u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v59)) > _g4_s2 ? (12u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v60)) > _g4_s3 ? (16u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v61)) > _g4_s4 ? (20u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v62)) > _g4_s5 ? (20u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v63)) > _g4_s6 ? (24u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v64)) > _g4_s7 ? (28u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v65)) > _g4_s8 ? (32u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v66)) > _g4_s9 ? (32u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v67)) > _g4_s10 ? (36u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v68)) > _g4_s11 ? (36u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v69)) > _g4_s12 ? (40u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v70)) > _g4_s13 ? (48u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v71)) > _g4_s14 ? (60u + sizeof(_g4_t_v71)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);

  *a1 = nullptr;
  v11 = *a3;
  if ( *a3 == 0 || (v12 = *(uint8_t **)(v11 + 12)) == nullptr )
LABEL_76:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v13 = strlen(*(const char **)(v11 + 12));
  if ( v12 != &v12[v13] )
  {
    v14 = v13;
    if ( v13 > 0x3FFFFFFC )
      goto LABEL_118;
    v15 = v13 + 29;
    if ( v14 + 29 > 0x1000 && v14 != 0 )
    {
      v16 = v15 & 0xFFF;
      v17 = 1073741820;
      if ( v14 + 4096 - v16 <= 0x3FFFFFFC )
        v17 = v14 + 4096 - v16;
      v61 = (int *)v17;
      v18 = (int *)sub_4EBDC0(v17 + 13);
      v18[1] = (int)(uintptr_t)(v61);
      v18[2] = 0;
      v19 = v18 + 3;
      v64 = (uint8_t *)(v18 + 3);
    }
    else
    {
      v49 = sub_4EBDC0(v14 + 13);
      v19 = (void *)(v49 + 12);
      v18 = (int *)v49;
      *(uint32_t *)(v49 + 4) = v14;
      *(uint32_t *)(v49 + 8) = 0;
      v64 = (uint8_t *)(v49 + 12);
      if ( v14 == 1 )
      {
        *(uint8_t *)(v49 + 12) = *v12;
LABEL_11:
        if ( v18 != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          v18[2] = 0;
          *v18 = v14;
          v64[v14] = 0;
        }
        goto LABEL_13;
      }
    }
    v63 = v18;
    memcpy(v19, v12, v14);
    v18 = v63;
    goto LABEL_11;
  }
  v64 = (uint8_t *)(&unk_20D3E78);
LABEL_13:
  v20 = *((uint32_t *)v64 - 3);
  v67 = v20;
  if ( v20 == 0 )
    goto LABEL_18;
  for ( i = v20 - 1; memchr("\\/", (char)v64[i], 2u) == nullptr; --i )
  {
    if ( i == 0 )
      goto LABEL_18;
  }
  v22 = &v64[i];
  if ( v67 <= i )
LABEL_18:
    v22 = &v64[v67];
  if ( v64 != v22 )
  {
    v23 = v22 - v64;
    if ( v23 <= 0x3FFFFFFC )
    {
      if ( v23 + 29 > 0x1000 && v23 != 0 )
      {
        v24 = ((uint16_t)v23 + 29) & 0xFFF;
        v25 = 1073741820;
        if ( v23 + 4096 - v24 <= 0x3FFFFFFC )
          v25 = v23 + 4096 - v24;
        v63 = (int *)v25;
        v26 = sub_4EBDC0(v25 + 13);
        *(uint32_t *)(v26 + 4) = (uint32_t)(uintptr_t)(v63);
        *(uint32_t *)(v26 + 8) = 0;
        v27 = (int *)(v26 + 12);
      }
      else
      {
        v26 = sub_4EBDC0(v23 + 13);
        *(uint32_t *)(v26 + 4) = v23;
        *(uint32_t *)(v26 + 8) = 0;
        v27 = (int *)(v26 + 12);
        if ( v23 == 1 )
        {
          *(uint8_t *)(v26 + 12) = *v64;
LABEL_27:
          if ( (int *)v26 != (int *)(uintptr_t)(&dword_20D3E6C) )
          {
            *(uint32_t *)(v26 + 8) = 0;
            *(uint32_t *)v26 = v23;
            *((uint8_t *)v27 + v23) = 0;
          }
          v28 = v27 - 3;
          if ( *(v27 - 1) >= 0 )
            goto LABEL_30;
LABEL_104:
          v61 = v27;
          v29 = sub_CFF610((int)(uintptr_t)(v28));
          v27 = v61;
          goto LABEL_33;
        }
      }
      v61 = v27;
      memcpy(v27, v64, v23);
      v27 = v61;
      goto LABEL_27;
    }
LABEL_118:
    sub_1900180("basic_string::_S_create");
  }
  v27 = (int *)&unk_20D3E78;
  v28 = (int *)(&dword_20D3E6C);
  if ( (intptr_t)(*(int32_t *)unk_20D3E74) < 0 )
    goto LABEL_104;
LABEL_30:
  if ( v28 != (int *)(uintptr_t)(&dword_20D3E6C) )
    __sync_add_and_fetch(v27 - 1, 1u);
  v29 = (unsigned int)(uintptr_t)(v27);
LABEL_33:
  v71[0] = v29;
  v30 = *(uint32_t *)(v29 - 12);
  if ( v30 == 1073741820 )
    sub_1900180("basic_string::append");
  v69 = v30 + 1;
  v68 = *(void **)(v29 - 8);
  if ( v30 + 1 <= (unsigned int)(uintptr_t)(v68) && *(int *)(v29 - 4) <= 0 )
  {
    v60 = (char *)(v30 + v29);
    v31 = "/";
  }
  else if ( v29 > (unsigned int)(uintptr_t)("/") || (v60 = (char *)(v29 + v30), v29 + v30 < (unsigned int)(uintptr_t)("/")) )
  {
    if ( (void *)v69 == v68 && *(int *)(v29 - 4) <= 0 )
    {
      v60 = (char *)(v30 + v29);
      v31 = "/";
    }
    else
    {
      v61 = v27;
      sub_CFF4B0(v71, v69);
      v27 = v61;
      v60 = (char *)(*(uint32_t *)(v71[0] - 12) + v71[0]);
      v31 = "/";
    }
  }
  else
  {
    v65 = (char *)(&asc_1B1B5C6[-v29]);
    if ( (void *)v69 != v68 || *(int *)(v29 - 4) > 0 )
    {
      v61 = v27;
      sub_CFF4B0(v71, v69);
      v29 = v71[0];
      v27 = v61;
      v60 = (char *)(v71[0] + *(uint32_t *)(v71[0] - 12));
    }
    v31 = &v65[v29];
  }
  *v60 = *v31;
  v32 = v71[0];
  if ( (int *)(v71[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v71[0] - 4) = 0;
    *(uint32_t *)(v32 - 12) = v69;
    *(uint8_t *)(v32 + v30 + 1) = 0;
  }
  if ( v28 != (int *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr((int)(uintptr_t)(v28));
  v57 = 0;
  v33 = (volatile int32_t *)operator new(0x90u);
  glitch::collada::CAnimationSet::Construct((glitch::collada::CAnimationSet::Self *)v33);
  if ( v33 != nullptr )
    sub_8B1B00(v33 + 1);
  v34 = *a1;
  *a1 = v33;
  if ( v34 != nullptr )
    sub_5459C0(v34);
  v66 = *(uint32_t *)(a4 + 4);
  if ( v66 > 0 )
  {
    v69 = 0;
    while ( 1 )
    {
      v39 = *(uint32_t *)(a4 + 8) + a4 + 8 * v69;
      v40 = *(uint8_t **)(v39 + 12);
      if ( v40 == nullptr )
        goto LABEL_76;
      v41 = strlen(*(const char **)(v39 + 12));
      if ( v40 == &v40[v41] )
      {
        v46 = (volatile int32_t *)v71[0];
        v35 = (int *)&unk_20D3E78;
        if ( *(int *)(v71[0] - 4) >= 0 )
          goto LABEL_69;
        goto LABEL_86;
      }
      v42 = v41;
      if ( v41 > 0x3FFFFFFC )
        goto LABEL_118;
      if ( v41 + 29 > 0x1000 && v41 != 0 )
        break;
      v45 = sub_4EBDC0(v41 + 13);
      *(uint32_t *)(v45 + 4) = v42;
      *(uint32_t *)(v45 + 8) = 0;
      v35 = (int *)(v45 + 12);
      if ( v42 != 1 )
        goto LABEL_65;
      *(uint8_t *)(v45 + 12) = *v40;
LABEL_66:
      if ( (int *)v45 != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        *(uint32_t *)(v45 + 8) = 0;
        *(uint32_t *)v45 = v42;
        *((uint8_t *)v35 + v42) = 0;
      }
      v46 = (volatile int32_t *)v71[0];
      if ( *(int *)(v71[0] - 4) >= 0 )
      {
LABEL_69:
        if ( v46 - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
          __sync_add_and_fetch(v46 - 1, 1u);
        goto LABEL_71;
      }
LABEL_86:
      v50 = *((uint32_t *)v46 - 3);
      v51 = *((uint32_t *)v46 - 2);
      if ( v50 > 0x3FFFFFFC )
        goto LABEL_118;
      if ( v50 > v51 && v50 < 2 * v51 )
        v50 = 2 * v51;
      if ( v50 + 29 > 0x1000 && v51 < v50 )
      {
        v52 = v50 + 4096 - (((uint16_t)v50 + 29) & 0xFFF);
        v50 = 1073741820;
        if ( v52 <= 0x3FFFFFFC )
          v50 = v52;
      }
      v61 = v35;
      v53 = sub_4EBDC0(v50 + 13);
      *(uint32_t *)(v53 + 4) = v50;
      *(uint32_t *)(v53 + 8) = 0;
      v54 = *((uint32_t *)v46 - 3);
      v55 = (int *)v53;
      v60 = nullptr;
      v68 = (void *)(v53 + 12);
      v35 = v61;
      if ( v54 != 0 )
      {
        if ( v54 == 1 )
        {
          *(uint8_t *)(v53 + 12) = *(uint8_t *)v46;
          v60 = *((char **)v46 - 3);
        }
        else
        {
          v63 = (int *)v53;
          memcpy(v68, (const void *)v46, v54);
          v35 = v61;
          v60 = *((char **)v46 - 3);
          v55 = v63;
        }
      }
      if ( v55 != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        v55[2] = 0;
        *v55 = (int)(uintptr_t)(v60);
        v60[(uint32_t)(uintptr_t)(v55) + 12] = 0;
      }
      v46 = (volatile int32_t *)v68;
LABEL_71:
      v70[0] = (uint32_t)(uintptr_t)(v46);
      v47 = *(v35 - 3);
      if ( v47 != 0 )
      {
        v48 = *((uint32_t *)v46 - 3);
        v68 = (void *)(v48 + v47);
        if ( v48 + v47 > *((uint32_t *)v46 - 2) || *((int *)v46 - 1) > 0 )
        {
          v61 = v35;
          sub_CFF4B0(v70, (unsigned int)(uintptr_t)(v68));
          v35 = v61;
          v36 = (uint8_t *)(*(uint32_t *)(v70[0] - 12) + v70[0]);
          if ( v47 == 1 )
            goto LABEL_75;
        }
        else
        {
          v36 = (uint8_t *)((char *)v46 + v48);
          if ( v47 == 1 )
          {
LABEL_75:
            *v36 = *(uint8_t *)v35;
LABEL_52:
            v37 = v70[0];
            if ( (int *)(v70[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
            {
              *(uint32_t *)(v70[0] - 4) = 0;
              *(uint32_t *)(v37 - 12) = (uint32_t)(uintptr_t)(v68);
              *((uint8_t *)v68 + v37) = 0;
            }
            goto LABEL_54;
          }
        }
        v61 = v35;
        memcpy(v36, v35, v47);
        v35 = v61;
        goto LABEL_52;
      }
LABEL_54:
      if ( v35 - 3 != (int *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add(v35 - 1, 0xFFFFFFFF) <= 0 )
        gll_operator_delete_arr((int)(uintptr_t)(v35 - 3));
      (*(void (**)(volatile int32_t *, uint32_t))(**a1 + 24))(*a1, v70[0]);
      v38 = v70[0] - 12;
      if ( (int *)(v70[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)        && __sync_fetch_and_add((volatile int32_t *)(v70[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        gll_operator_delete_arr(v38);
      }
      if ( ++v69 == v66 )
        goto LABEL_98;
    }
    v43 = ((uint16_t)v41 + 29) & 0xFFF;
    v44 = 1073741820;
    if ( v41 + 4096 - v43 <= 0x3FFFFFFC )
      v44 = v41 + 4096 - v43;
    v62 = v44;
    v45 = sub_4EBDC0(v44 + 13);
    *(uint32_t *)(v45 + 4) = v62;
    *(uint32_t *)(v45 + 8) = 0;
    v35 = (int *)(v45 + 12);
LABEL_65:
    v63 = (int *)v45;
    v61 = v35;
    memcpy(v35, v40, v42);
    v35 = v61;
    v45 = (int)(uintptr_t)(v63);
    goto LABEL_66;
  }
LABEL_98:
  (*(void (**)(volatile int32_t *, int, int, int, char *, int *, int *, uint8_t *, int, void *, unsigned int, int *, uint32_t, uint32_t, uint32_t, uint32_t))(**a1 + 40))(
    *a1,
    v57,
    v58,
    v59,
    v60,
    v61,
    v63,
    v64,
    v66,
    v68,
    v69,
    (int *)(&dword_20D3E6C),
    v70[0],
    v70[1],
    v70[2],
    v71[0]);
  if ( (int *)(a11 - 12) != a7 && __sync_fetch_and_add((volatile int32_t *)(a11 - 4), 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr(a11 - 12);
  if ( a3 - 3 != a7 && __sync_fetch_and_add(a3 - 1, 0xFFFFFFFF) <= 0 )
    gll_operator_delete_arr((int)(uintptr_t)(a3 - 3));
  return a1;
}


// ============================================================================
// Address:   0xd033c0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps27CParticleSystemEmitterModelD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemEmitterModel::Destroy()
// ============================================================================
static void g4_thunk_90(
        glitch::collada::ps::CParticleSystemEmitterModel::Self *self)
{
  glitch::collada::ps::CParticleSystemEmitterModel::Destroy((glitch::collada::ps::CParticleSystemEmitterModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd033d0 (size: 105 bytes)
// Symbol:    _ZN6glitch7collada2ps27CParticleSystemEmitterModelD1Ev
// Demangled: glitch::collada::ps::CParticleSystemEmitterModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemEmitterModel::Destroy(
        glitch::collada::ps::CParticleSystemEmitterModel::Self *self)
{
  int v1;

  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20704A8);
  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207048C);
  if ( v1 != 0 )
  {
    (*(void (**)(int))(*(uint32_t *)v1 + 4))(v1);
    *((uint32_t *)self + 2) = 0;
  }
  if ( *((uint32_t *)self + 6) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 6));
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::CParticleSystemEmitterModel::Self *)((char *)self + 32));
}


// ============================================================================
// Address:   0xd03440 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps27CParticleSystemEmitterModelD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemEmitterModel::Destroy()
// ============================================================================
static void g4_thunk_91(
        glitch::collada::ps::CParticleSystemEmitterModel::Self *self)
{
  glitch::collada::ps::CParticleSystemEmitterModel::Destroy((glitch::collada::ps::CParticleSystemEmitterModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd03450 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps27CParticleSystemEmitterModelD0Ev
// Demangled: glitch::collada::ps::CParticleSystemEmitterModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemEmitterModel::DestroyDeleting(
        glitch::collada::ps::CParticleSystemEmitterModel::Self *self)
{
  glitch::collada::ps::CParticleSystemEmitterModel::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd03490 (size: 257 bytes)
// Symbol:    _ZN6glitch7collada2ps28CParticleSystemGeometryBaker23fillParticleIndexBufferEPKNS_5scene11CMeshBufferE
// Demangled: glitch::collada::ps::CParticleSystemGeometryBaker::fillParticleIndexBuffer(glitch::scene::CMeshBuffer const*)
// ============================================================================
int glitch::collada::ps::CParticleSystemGeometryBaker::fillParticleIndexBuffer(
        glitch::collada::ps::CParticleSystemGeometryBaker::Self *self,
        const glitch::scene::CMeshBuffer *a2)
{
  glitch::video::CVertexStreams::Self *v2;
  int v3;
  int v4;
  const void *src;
  void *dest;
  int v7;
  int v9;

  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 5);
  v2 = *((glitch::video::CVertexStreams::Self **)a2 + 2);
  if ( v2 != nullptr )
    sub_8B1B00(*((volatile int32_t **)a2 + 2));
  v3 = *((uint32_t *)v2 + 2);
  if ( __sync_fetch_and_add((volatile int32_t *)v2, 0xFFFFFFFF) == 1 )
  {
    v9 = v3;
    glitch::video::CVertexStreams::Destroy(v2);
    gll_operator_delete_arr((int)(uintptr_t)(v2));
    v3 = v9;
  }
  *((uint32_t *)self + 10) = v3;
  v4 = *((uint32_t *)a2 + 3);
  if ( v4 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v4 + 4));
    sub_8B1B00((volatile int32_t *)(v4 + 4));
  }
  src = (const void *)glitch::video::IBuffer::mapInternal((glitch::video::IBuffer::Self *)v4, 0, 0, *(uint32_t *)(v4 + 20), 0);
  sub_5459C0((volatile int32_t *)v4);
  dest = (void *)operator new[](2 * *((uint32_t *)self + 11));
  v7 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(dest);
  memcpy(dest, src, 2 * v7);
  if ( src != nullptr )
    glitch::video::IBuffer::unmap((glitch::video::IBuffer::Self *)v4);
  return sub_5459C0((volatile int32_t *)v4);
}


// ============================================================================
// Address:   0xd035a0 (size: 260 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory25getExternalLightSceneNodeERKNS0_16CColladaDatabaseERKN5boost13intrusive_ptrIKNS_5video9CMaterialEEEtjPKc
// Demangled: glitch::collada::CColladaFactory::getExternalLightSceneNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::video::CMaterial const> const&,unsigned short,unsigned int,char const*)
// ============================================================================
uint32_t *glitch::collada::CColladaFactory::getExternalLightSceneNode(
        uint32_t *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        const char *a7)
{
  uint32_t *v7;
  int v8;
  bool v9;
  uint32_t *v10;
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);

  v14 = (uint32_t *)(&a1);
  v7 = a1;
  strchr(a7, 35);
  v8 = **(uint32_t **)(*(uint32_t *)(glitch::collada::CResFileManager::Inst + 32) + 16);
  v13 = nullptr;
  (*(void (**)(uint32_t **))(v8 + 24))(&v12);
  if ( v13 != nullptr )
    sub_5459C0((uint32_t *)((char *)v13 + *(uint32_t *)(*v13 - 16)));
  if ( v12 == nullptr )
  {
    v10 = nullptr;
    goto LABEL_5;
  }
  v9 = (*(int (**)(uint32_t *))(*v12 + 212))(v12) == 1952999276;
  v10 = v12;
  if ( !v9 )
  {
LABEL_5:
    *v7 = 0;
    goto LABEL_6;
  }
  *v7 = (uint32_t)(uintptr_t)(v12);
  if ( v10 == nullptr )
    return v7;
  sub_8B1B00((uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 16) + 4));
  v10 = v12;
LABEL_6:
  if ( v10 != nullptr )
    sub_5459C0((uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 16)));
  return v7;
}


// ============================================================================
// Address:   0xd036b0 (size: 185 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory13createCoronasERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverEPNS0_8SCoronasEPNS0_14CRootSceneNodeE
// Demangled: glitch::collada::CColladaFactory::createCoronas(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SCoronas *,glitch::collada::CRootSceneNode *)
// ============================================================================
uint32_t *glitch::collada::CColladaFactory::createCoronas(
        uint32_t *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        uint32_t *a6)
{
  uint32_t *v6;
  typedef uint32_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);

  v8 = a6;
  if ( a6 != nullptr )
    sub_8B1B00((uint32_t *)((char *)a6 + *(uint32_t *)(*a6 - 16) + 4));
  v6 = (uint32_t *)operator new(0x1DCu);
  glitch::collada::CCoronasSceneNode::Construct(v6, a3, a4, a5, &v8);
  *a1 = (uint32_t)(uintptr_t)(v6);
  if ( v6 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16) + 4));
  if ( v8 != nullptr )
    sub_5459C0((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 16)));
  return a1;
}


// ============================================================================
// Address:   0xd03770 (size: 602 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory17createCommandNodeERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverEPNS0_17SStreamingCommandE
// Demangled: glitch::collada::CColladaFactory::createCommandNode(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SStreamingCommand *)
// ============================================================================
uint32_t *glitch::collada::CColladaFactory::createCommandNode(
        uint32_t *a1,
        int a2,
        glitch::collada::CColladaDatabase::Self *a3,
        int a4,
        int a5)
{
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v8;
  int v9;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v10;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v12;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v13;
  typedef bool _g4_t_v14;
  typedef bool _g4_t_v15;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef int _g4_t_v19[3];
  typedef int _g4_t_v20[3];
  typedef int _g4_t_v21[11];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v16)) > _g4_s4 ? (48u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v17)) > _g4_s5 ? (52u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v18)) > _g4_s6 ? (56u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v19)) > _g4_s7 ? (60u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v20)) > _g4_s8 ? (72u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v21)) > _g4_s9 ? (84u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);

  glitch::collada::CColladaDatabase::getGeometry(a3, (const char *)(*(uint32_t *)(a5 + 8) + 1));
  (*(void (**)(volatile int32_t **))(*(uint32_t *)a2 + 128))(&v18);
  v17 = (int)(uintptr_t)(v18);
  if ( v18 != nullptr )
  {
    sub_8B1B00(v18 + 1);
    if ( v18 != nullptr )
      sub_5459C0(v18);
  }
  v5 = (uint32_t *)operator new(0x128u);
  v5[73] = 0;
  v6 = v5;
  v20[0] = 1065353216;
  v20[1] = 1065353216;
  v20[2] = 1065353216;
  memset(v21, 0, 12);
  v21[3] = 1065353216;
  v5[71] = ((uint32_t)(uintptr_t)&off_20709AC);
  v5[72] = (uint32_t)(uintptr_t)(&off_20709CC);
  memset(v19, 0, sizeof(v19));
  glitch::collada::CMeshSceneNode::Construct(
    (glitch::IObject::Self *)v5,
    (int)(uintptr_t)(&off_20709E4),
    (int)(uintptr_t)(&v17),
    0,
    0,
    (int)(uintptr_t)(v19),
    (int)(uintptr_t)(v21),
    (int)(uintptr_t)(v20));
  v6[69] = 0;
  v6[70] = 0;
  *v6 = ((uint32_t)(uintptr_t)&off_2070A30);
  v6[71] = (uint32_t)(uintptr_t)(&off_2070B6C);
  v6[72] = ((uint32_t)(uintptr_t)&off_2070B8C);
  v16 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(a5 + 28);
  v7 = (int)(uintptr_t)(glitch::core::detail::SSharedStringHeapEntry::SData::get(
         *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(a5 + 24),
         (const char *)&dword_0 + 1,
         v14));
  v8 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)v6[69];
  v6[69] = v7;
  if ( v8 != nullptr && __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
    glitch::core::detail::SSharedStringHeapEntry::SData::release(v8, v12);
  v9 = (int)(uintptr_t)(glitch::core::detail::SSharedStringHeapEntry::SData::get(v16, (const char *)&dword_0 + 1, v15));
  v10 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)v6[70];
  v6[70] = v9;
  if ( v10 != nullptr && __sync_fetch_and_add((volatile int32_t *)v10, 0xFFFFFFFF) == 1 )
    glitch::core::detail::SSharedStringHeapEntry::SData::release(v10, v13);
  *a1 = (uint32_t)(uintptr_t)(v6);
  sub_8B1B00((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16) + 4));
  if ( v17 != 0 )
    sub_5459C0((volatile int32_t *)v17);
  return a1;
}


// ============================================================================
// Address:   0xd03ce0 (size: 174 bytes)
// Symbol:    _ZN6glitch7collada2ps15CGeometryDomain4stopEv
// Demangled: glitch::collada::ps::CGeometryDomain::stop(void)
// ============================================================================
volatile int32_t *glitch::collada::ps::CGeometryDomain::stop(glitch::collada::ps::CGeometryDomain::Self *self)
{
  volatile int32_t *result;

  result = *((volatile int32_t **)self + 38);
  if ( result != nullptr )
  {
    if ( *((uint32_t *)self + 39) != 0 )
    {
      glitch::video::IBuffer::unmap(*((glitch::video::IBuffer::Self **)self + 38));
      result = *((volatile int32_t **)self + 38);
      *((uint32_t *)self + 38) = 0;
      if ( result == nullptr )
      {
        *((uint32_t *)self + 39) = 0;
        goto LABEL_5;
      }
    }
    else
    {
      *((uint32_t *)self + 38) = 0;
    }
    result = (volatile int32_t *)sub_5459C0(result);
    *((uint32_t *)self + 39) = 0;
  }
LABEL_5:
  if ( *((uint32_t *)self + 35) != 0 )
  {
    result = (volatile int32_t *)glitch::video::IBuffer::unmap(**((glitch::video::IBuffer::Self ***)self + 34));
    *((uint32_t *)self + 34) = 0;
    *((uint32_t *)self + 35) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0xd03df0 (size: 225 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcherD2Ev
// Demangled: glitch::collada::ps::CParticleSystemBatcher::~CParticleSystemBatcher()
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps22CParticleSystemBatcherD1Ev'
void glitch::collada::ps::CParticleSystemBatcher::Destroy(
        glitch::collada::ps::CParticleSystemBatcher *self)
{
  glitch::collada::ps::CParticleSystemBatcher *v1;
  glitch::collada::ps::CParticleSystemBatcher *v2;
  volatile int32_t **v3;
  volatile int32_t **v4;
  char *v5;
  char *v6;
  char *v7;
  glitch::video::CVertexStreams::Self *v8;
  char *v9;
  char *v10;
  char *v11;

  v1 = (glitch::collada::ps::CParticleSystemBatcher *)((char *)self + 68);
  v2 = (glitch::collada::ps::CParticleSystemBatcher *)((char *)self + 68);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070328);
  v11 = (char *)self + 64;
  do
  {
    if ( *(uint32_t *)&v11[v2 - v1] != 0 )
      sub_5459C0(*(volatile int32_t **)&v11[v2 - v1]);
    v2 = (glitch::collada::ps::CParticleSystemBatcher *)((char *)v2 - 4);
  }
  while ( (glitch::collada::ps::CParticleSystemBatcher *)((char *)self + 60) != v2 );
  v3 = (volatile int32_t **)((char *)self + 12);
  v4 = (volatile int32_t **)((char *)self + 60);
  do
  {
    if ( *(v4 - 6) != nullptr )
      sub_5459C0(*(v4 - 6));
    v4 -= 6;
  }
  while ( v3 != v4 );
  v5 = (char *)self + 12;
  v6 = (char *)self + 4;
  v7 = (char *)self + 8;
  do
  {
    v8 = *(glitch::video::CVertexStreams::Self **)&v7[v5 - (char *)v3];
    if ( v8 != nullptr && __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
    {
      v9 = v7;
      v10 = v6;
      glitch::video::CVertexStreams::Destroy(v8);
      gll_operator_delete_arr((int)(uintptr_t)(v8));
      v7 = v9;
      v6 = v10;
    }
    v5 -= 4;
  }
  while ( v6 != v5 );
}


// ============================================================================
// Address:   0xd03ee0 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcherD0Ev
// Demangled: glitch::collada::ps::CParticleSystemBatcher::~CParticleSystemBatcher()
// ============================================================================
static void g4_CParticleSystemBatcher_d0(
        glitch::collada::ps::CParticleSystemBatcher *self)
{
  glitch::collada::ps::CParticleSystemBatcher::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd03f20 (size: 261 bytes)
// Symbol:    _ZN6glitch7collada2ps20IParticleSystemBaker18createVertexBufferEPNS1_15CParticleSystemEPKNS_5scene11CMeshBufferEjRN5boost13intrusive_ptrINS_5video14CVertexStreamsEEE
// Demangled: glitch::collada::ps::IParticleSystemBaker::createVertexBuffer(glitch::collada::ps::CParticleSystem::Self *,glitch::scene::CMeshBuffer const*,unsigned int,boost::intrusive_ptr<glitch::video::CVertexStreams> &)
// ============================================================================
int glitch::collada::ps::IParticleSystemBaker::createVertexBuffer(
        glitch::collada::ps::IParticleSystemBaker::Self *self,
        glitch::collada::ps::CParticleSystem::Self *a2,
        const glitch::scene::CMeshBuffer *a3,
        unsigned int a4,
        glitch::video::CVertexStreams::Self **a5)
{
  glitch::video::CVertexStreams::Self **v5;
  glitch::video::CVertexStreams::Self *v6;
  glitch::video::CVertexStreams::Self *v7;
  glitch::video::CVertexStreams::Self *v8;
  int result;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v13[3] = (int)(uintptr_t)(&self);
  v5 = a5;
  v11 = a4;
  v13[0] = 0;
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self *)&v12, a4);
  v6 = v12;
  if ( v12 != nullptr )
  {
    v10 = v12;
    sub_8B1B00((volatile int32_t *)v12);
    v6 = v10;
  }
  v7 = *v5;
  *v5 = v6;
  if ( v7 != nullptr && __sync_fetch_and_add((volatile int32_t *)v7, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v7);
    gll_operator_delete_arr((int)(uintptr_t)(v7));
  }
  v8 = v12;
  if ( v12 != nullptr && __sync_fetch_and_add((volatile int32_t *)v12, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v8);
    gll_operator_delete_arr((int)(uintptr_t)(v8));
  }
  glitch::video::CVertexStreams::setupStreams(*v5, (int)(uintptr_t)(v13), v11, 0, 0);
  result = v13[0];
  if ( v13[0] != 0 )
    return sub_5459C0((volatile int32_t *)v13[0]);
  return result;
}


// ============================================================================
// Address:   0xd04030 (size: 910 bytes)
// Symbol:    _ZN6glitch7collada2ps28CParticleSystemGeometryBaker17createIndexBufferEPNS1_15CParticleSystemEPKNS_5scene11CMeshBufferEPNS_5video16CPrimitiveStreamE
// Demangled: glitch::collada::ps::CParticleSystemGeometryBaker::createIndexBuffer(glitch::collada::ps::CParticleSystem::Self *,glitch::scene::CMeshBuffer const*,glitch::video::CPrimitiveStream *)
// ============================================================================
// bad sp value at call has been detected, the output may be wrong!
int glitch::collada::ps::CParticleSystemGeometryBaker::createIndexBuffer(
        glitch::collada::ps::CParticleSystemGeometryBaker::Self *self,
        glitch::collada::ps::CParticleSystem::Self *a2,
        const glitch::scene::CMeshBuffer *a3,
        glitch::video::CPrimitiveStream::Self *a4)
{
  glitch::collada::ps::CParticleSystem::Self *v4;
  int *v5;
  int *v6;
  size_t v7;
  int v8;
  void *v9;
  glitch::video::IBuffer::Self *v10;
  volatile int32_t *v11;
  unsigned int *v12;
  glitch::video::CVertexStreams::Self *v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  volatile int32_t *v26;
  int result;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef glitch::video::IBuffer::Self *_g4_t_v36;
  typedef glitch::video::IBuffer::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef glitch::video::IBuffer::Self *_g4_t_v39;
  typedef glitch::video::IBuffer::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int16_t _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint16_t _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t _g4_t_v62[3];
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v28)) > _g4_s0 ? (8u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v29)) > _g4_s1 ? (12u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v30)) > _g4_s2 ? (16u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v31)) > _g4_s3 ? (20u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v32)) > _g4_s4 ? (24u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v33)) > _g4_s5 ? (28u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v34)) > _g4_s6 ? (32u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v35)) > _g4_s7 ? (32u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v36)) > _g4_s8 ? (36u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v37)) > _g4_s9 ? (36u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v38)) > _g4_s10 ? (40u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v39)) > _g4_s11 ? (44u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v40)) > _g4_s12 ? (44u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v41)) > _g4_s13 ? (48u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v42)) > _g4_s14 ? (52u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (54u + sizeof(_g4_t_v43)) > _g4_s15 ? (54u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v44)) > _g4_s16 ? (56u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v45)) > _g4_s17 ? (56u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v46)) > _g4_s18 ? (60u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v47)) > _g4_s19 ? (64u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v48)) > _g4_s20 ? (64u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v49)) > _g4_s21 ? (68u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v50)) > _g4_s22 ? (68u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v51)) > _g4_s23 ? (72u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v52)) > _g4_s24 ? (72u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v53)) > _g4_s25 ? (72u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v54)) > _g4_s26 ? (76u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v55)) > _g4_s27 ? (76u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v56)) > _g4_s28 ? (76u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v57)) > _g4_s29 ? (80u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v58)) > _g4_s30 ? (80u + sizeof(_g4_t_v58)) : _g4_s30,
    _g4_s32 = (84u + sizeof(_g4_t_v59)) > _g4_s31 ? (84u + sizeof(_g4_t_v59)) : _g4_s31,
    _g4_s33 = (88u + sizeof(_g4_t_v60)) > _g4_s32 ? (88u + sizeof(_g4_t_v60)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_v61)) > _g4_s33 ? (92u + sizeof(_g4_t_v61)) : _g4_s33,
    _g4_s35 = (96u + sizeof(_g4_t_v62)) > _g4_s34 ? (96u + sizeof(_g4_t_v62)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v63)) > _g4_s35 ? (108u + sizeof(_g4_t_v63)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v64)) > _g4_s36 ? (112u + sizeof(_g4_t_v64)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v65)) > _g4_s37 ? (116u + sizeof(_g4_t_v65)) : _g4_s37,
    _g4_s39 = (120u + sizeof(_g4_t_v66)) > _g4_s38 ? (120u + sizeof(_g4_t_v66)) : _g4_s38,
    _g4_s40 = (124u + sizeof(_g4_t_v67)) > _g4_s39 ? (124u + sizeof(_g4_t_v67)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v68)) > _g4_s40 ? (128u + sizeof(_g4_t_v68)) : _g4_s40,
    _g4_s42 = (132u + sizeof(_g4_t_v69)) > _g4_s41 ? (132u + sizeof(_g4_t_v69)) : _g4_s41,
    _g4_s43 = (140u + sizeof(_g4_t_v70)) > _g4_s42 ? (140u + sizeof(_g4_t_v70)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 54u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 72u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 96u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 108u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 112u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 116u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 120u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 132u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 140u);

  v4 = a2;
  v5 = *(int **)(*(uint32_t *)(*(uint32_t *)(*(int (**)(glitch::collada::ps::CParticleSystem::Self *, int, int, int, int, int, int, int, int, glitch::video::IBuffer::Self *, glitch::video::CPrimitiveStream::Self *, glitch::video::IBuffer::Self *, int, int, int, const glitch::scene::CMeshBuffer *, int, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, int, int, int, int, int, int, int, glitch::collada::ps::CParticleSystemGeometryBaker::Self **))(*(uint32_t *)a2 + 12))(
                                          a2,
                                          83,
                                          v28,
                                          v29,
                                          v30,
                                          v31,
                                          v32,
                                          v33,
                                          v34,
                                          (glitch::video::IBuffer::Self *)(v36),
                                          a4,
                                          v39,
                                          v41,
                                          v42,
                                          v44,
                                          a3,
                                          v47,
                                          v49,
                                          v51,
                                          v54,
                                          v57,
                                          v59,
                                          v60,
                                          v61,
                                          v62[0],
                                          v62[1],
                                          v62[2],
                                          v63,
                                          v64,
                                          v65,
                                          v66,
                                          v67,
                                          v68,
                                          v69,
                                          &self)
                           + 4)
               + 4);
  *(uint16_t *)(v38 + 20) = 1;
  *(uint32_t *)(v38 + 8) = 0;
  *(uint32_t *)(v38 + 12) = 0;
  *(uint32_t *)(v38 + 16) = 0;
  v6 = (int *)(*(int (**)(glitch::collada::ps::CParticleSystem::Self *, int))(*(uint32_t *)v4 + 12))(v4, 14);
  v45 = *v6;
  v7 = *v6 * 2 * *(uint32_t *)(v46 + 20);
  v8 = *v5;
  v63 = 1;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  LOWORD(v67) = 257;
  (*(void (**)(uint32_t *, int *, int *))(v8 + 88))(v62, v5, &v63);
  v70 = 0;
  v9 = (void *)sub_4EBDC0(v7);
  glitch::video::IBuffer::reset((glitch::video::IBuffer::Self *)v62[0], v7, v9, true);
  v10 = *(glitch::video::IBuffer::Self **)(v46 + 12);
  v40 = v10;
  if ( v10 != nullptr )
  {
    v11 = (volatile int32_t *)((char *)v10 + 4);
    sub_8B1B00((volatile int32_t *)v10 + 1);
    sub_8B1B00(v11);
    v10 = v40;
  }
  v48 = glitch::video::IBuffer::mapInternal(v10, 0, 0, *((uint32_t *)v10 + 5), 0);
  sub_5459C0((volatile int32_t *)v40);
  v12 = nullptr;
  v37 = (glitch::video::IBuffer::Self *)v62[0];
  if ( v62[0] != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v62[0] + 4));
    v12 = (unsigned int *)v62[0];
  }
  v35 = glitch::video::IBuffer::mapInternal((glitch::video::IBuffer::Self *)v12, 1u, 0, v12[5], 1u);
  v13 = *(glitch::video::CVertexStreams::Self **)(v46 + 8);
  if ( v13 != nullptr )
    sub_8B1B00(*(volatile int32_t **)(v46 + 8));
  v14 = *((uint32_t *)v13 + 2);
  if ( __sync_fetch_and_add((volatile int32_t *)v13, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v13);
    gll_operator_delete_arr((int)(uintptr_t)(v13));
  }
  v43 = v14;
  if ( v45 > 0 )
  {
    v15 = v35;
    v58 = 0;
    v50 = 0;
    while ( 1 )
    {
      v16 = *(uint32_t *)(v46 + 20);
      if ( v16 != 0 )
        break;
LABEL_21:
      ++v50;
      v58 += v43;
      if ( v45 == v50 )
        goto LABEL_22;
    }
    v52 = 8 * (v16 >> 3);
    if ( (v15 > v48 + 16 || v48 > v15 + 16) && v16 > 8 && v52 != 0 )
    {
      v17 = _mm_cvtsi32_si128(v58);
      v55 = *(uint32_t *)(v46 + 20);
      v18 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v17, v17), 0);
      v19 = 0;
      v20 = 0;
      do
      {
        ++v20;
        *(__m128i *)(v15 + v19) = _mm_add_epi16(*(__m128i *)(v48 + v19), v18);
        v19 += 16;
      }
      while ( v20 < v16 >> 3 );
      v16 = v55;
      v21 = v15 + 2 * v52;
      v56 = v48 + 2 * v52;
      v22 = v52;
      if ( v16 == v52 )
        goto LABEL_20;
    }
    else
    {
      v21 = v15;
      v56 = v48;
      v22 = 0;
    }
    v53 = v15;
    v23 = -2 * v22 + v21;
    v24 = v56 - 2 * v22;
    do
    {
      *(uint16_t *)(v23 + 2 * v22) = *(uint16_t *)(v24 + 2 * v22) + v58;
      ++v22;
    }
    while ( v16 != v22 );
    v15 = v53;
LABEL_20:
    v15 += 2 * v16;
    goto LABEL_21;
  }
LABEL_22:
  if ( v37 != nullptr )
  {
    if ( v35 != 0 )
      glitch::video::IBuffer::unmap(v37);
    sub_5459C0((volatile int32_t *)v37);
    v35 = 0;
  }
  glitch::video::IBuffer::bind((glitch::video::IBuffer::Self *)v62[0], 2u, 0);
  v25 = v62[0];
  if ( v62[0] != 0 )
    sub_8B1B00((volatile int32_t *)(v62[0] + 4));
  v26 = *(volatile int32_t **)v38;
  *(uint32_t *)v38 = v25;
  if ( v26 != nullptr )
    sub_5459C0(v26);
  if ( v35 != 0 )
    glitch::video::IBuffer::unmap(nullptr);
  if ( v48 != 0 )
    glitch::video::IBuffer::unmap(v40);
  sub_5459C0((volatile int32_t *)v40);
  result = v62[0];
  if ( v62[0] != 0 )
    return sub_5459C0((volatile int32_t *)v62[0]);
  return result;
}


// ============================================================================
// Address:   0xd04470 (size: 643 bytes)
// Symbol:    _ZN6glitch7collada13CMorphingMeshD2Ev
// Demangled: glitch::collada::CMorphingMesh::Destroy()
// ============================================================================
// Alternative name is '_ZN6glitch7collada13CMorphingMeshD1Ev'
void glitch::collada::CMorphingMesh::Destroy(glitch::collada::CRootSceneNode::Self **self)
{
  glitch::collada::CRootSceneNode::Self *v1;
  volatile int32_t **v2;
  glitch::video::CMaterialVertexAttributeMap::Self *v3;
  glitch::video::CMaterial::Self *v4;
  bool v5;
  int v6;
  volatile int32_t **v7;
  volatile int32_t **v8;
  int v9;
  volatile int32_t **v10;
  glitch::video::CMaterialVertexAttributeMap::Self *v11;
  glitch::video::CMaterial::Self *v12;
  glitch::collada::CRootSceneNode::Self *v13;
  int v14;
  volatile int32_t **v15;
  volatile int32_t **v16;
  int v17;
  int v18;
  int v19;
  int v20;

  *self = (glitch::collada::CRootSceneNode::Self *)((uint32_t)(uintptr_t)&off_206FD28);
  glitch::collada::CRootSceneNode::removeMorphingMesh(*(self + 19), (glitch::collada::CMorphingMesh::Self *)self);
  v1 = *(self + 10);
  v13 = v1;
  v15 = (volatile int32_t **)*(self + 11);
  if ( v1 != (glitch::collada::CRootSceneNode::Self *)v15 )
  {
    v2 = (volatile int32_t **)*(self + 10);
    v19 = (int)(uintptr_t)(v1) + 8;
    v17 = (int)(uintptr_t)(v1) + 4;
    do
    {
      v3 = *(glitch::video::CMaterialVertexAttributeMap::Self **)((char *)v2 - (char *)v13 + v19);
      if ( v3 != nullptr && __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterialVertexAttributeMap::Destroy(v3);
        gll_operator_delete_arr((int)(uintptr_t)(v3));
      }
      v4 = *(glitch::video::CMaterial::Self **)((char *)v2 - (char *)v13 + v17);
      if ( v4 != nullptr )
      {
        v5 = *(uint32_t *)v4 == 2;
        _mm_mfence();
        if ( v5 )
          glitch::video::CMaterial::removeFromRootSceneNode(v4);
        if ( __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterial::Destroy(v4);
          gll_operator_delete_arr((int)(uintptr_t)(v4));
        }
      }
      if ( *v2 != nullptr )
        sub_5459C0(*v2);
      v2 += 3;
    }
    while ( v15 != v2 );
  }
  v6 = (int)(uintptr_t)(*(self + 17));
  *(self + 11) = v13;
  if ( v6 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)v6, 0xFFFFFFFF) == 1 )
    {
      if ( *(uint32_t *)(v6 + 16) != 0 )
        operator delete[](*(void **)(v6 + 16));
      *(uint32_t *)(v6 + 16) = 0;
    }
    *(self + 17) = nullptr;
  }
  v7 = (volatile int32_t **)*(self + 14);
  v8 = (volatile int32_t **)*(self + 13);
  if ( v7 != v8 )
  {
    do
    {
      if ( *v8 != nullptr )
        sub_5459C0(*v8);
      v8 += 2;
    }
    while ( v7 != v8 );
    v8 = (volatile int32_t **)*(self + 13);
  }
  if ( v8 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v8));
  v9 = (int)(uintptr_t)(*(self + 10));
  v16 = (volatile int32_t **)*(self + 11);
  v14 = v9;
  if ( v16 != (volatile int32_t **)v9 )
  {
    v10 = (volatile int32_t **)*(self + 10);
    v20 = v9 + 8;
    v18 = v9 + 4;
    do
    {
      v11 = *(glitch::video::CMaterialVertexAttributeMap::Self **)((char *)v10 + v20 - v14);
      if ( v11 != nullptr && __sync_fetch_and_add((volatile int32_t *)v11, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterialVertexAttributeMap::Destroy(v11);
        gll_operator_delete_arr((int)(uintptr_t)(v11));
      }
      v12 = *(glitch::video::CMaterial::Self **)((char *)v10 + v18 - v14);
      if ( v12 != nullptr )
      {
        v5 = *(uint32_t *)v12 == 2;
        _mm_mfence();
        if ( v5 )
          glitch::video::CMaterial::removeFromRootSceneNode(v12);
        if ( __sync_fetch_and_add((volatile int32_t *)v12, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterial::Destroy(v12);
          gll_operator_delete_arr((int)(uintptr_t)(v12));
        }
      }
      if ( *v10 != nullptr )
        sub_5459C0(*v10);
      v10 += 3;
    }
    while ( v16 != v10 );
    v14 = (int)(uintptr_t)(*(self + 10));
  }
  if ( v14 != 0 )
    gll_operator_delete_arr(v14);
  *self = (glitch::collada::CRootSceneNode::Self *)((uint32_t)(uintptr_t)&off_206FE48);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)(self + 3));
  *self = (glitch::collada::CRootSceneNode::Self *)&off_20483C0;
}


// ============================================================================
// Address:   0xd04700 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada13CMorphingMeshD0Ev
// Demangled: glitch::collada::CMorphingMesh::Destroy()
// ============================================================================
void glitch::collada::CMorphingMesh::DestroyDeleting(glitch::collada::CRootSceneNode::Self **self)
{
  glitch::collada::CMorphingMesh::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd04740 (size: 168 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh4skinEj
// Demangled: glitch::collada::CSkinnedMesh::skin(unsigned int)
// ============================================================================
volatile int32_t *glitch::collada::CSkinnedMesh::skin(
        glitch::collada::CSkinnedMesh::Self *self,
        unsigned int a2)
{
  volatile int32_t *result;
  typedef int _g4_t_v3;
  typedef void (*_g4_t_v4)(int);
  typedef volatile int32_t *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v5)) > _g4_s2 ? (32u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 32u);

  v4 = *(void (**)(int))(*((uint32_t *)self + 44) + 48 * a2 + 12);
  (*(void (**)(volatile int32_t **, uint32_t, unsigned int))(**((uint32_t **)self + 47) + 20))(
    &v5,
    *((uint32_t *)self + 47),
    a2);
  v4(v3);
  result = v5;
  if ( v5 != nullptr )
    return (volatile int32_t *)sub_5459C0(v5);
  return result;
}


// ============================================================================
// Address:   0xd047f0 (size: 274 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh4skinEjN5boost13intrusive_ptrINS_5video9CMaterialEEE
// Demangled: glitch::collada::CSkinnedMesh::skin(unsigned int,boost::intrusive_ptr<glitch::video::CMaterial>)
// ============================================================================
volatile int32_t *glitch::collada::CSkinnedMesh::skin(int a1, int a2, volatile int32_t **a3)
{
  int v3;
  int v4;
  volatile int32_t *result;
  bool v6;
  typedef int _g4_t_v7;
  typedef void (*_g4_t_v8)(int);
  typedef int _g4_t_v9;
  typedef glitch::video::CMaterial::Self *_g4_t_v10;
  typedef volatile int32_t *_g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v11[3] = &a1;
  v3 = a2;
  v4 = a1;
  v9 = *(uint32_t *)(*(uint32_t *)(a1 + 176) + 48 * a2 + 12);
  v8 = *(void (**)(int))(*(uint32_t *)v9 + 24);
  v10 = (glitch::video::CMaterial::Self *)*a3;
  if ( *a3 != nullptr )
  {
    v7 = a1;
    sub_8B1B00(*a3);
    v4 = v7;
  }
  (*(void (**)(volatile int32_t **, uint32_t, int))(**(uint32_t **)(v4 + 188) + 20))(
    v11,
    *(uint32_t *)(v4 + 188),
    v3);
  v8(v9);
  result = v11[0];
  if ( v11[0] != nullptr )
    result = (volatile int32_t *)sub_5459C0(v11[0]);
  if ( v10 != nullptr )
  {
    v6 = *(uint32_t *)v10 == 2;
    _mm_mfence();
    if ( v6 )
      glitch::video::CMaterial::removeFromRootSceneNode(v10);
    result = (volatile int32_t *)__sync_fetch_and_add((volatile int32_t *)v10, 0xFFFFFFFF);
    if ( result == (int *)((char *)&dword_0 + 1) )
    {
      glitch::video::CMaterial::Destroy(v10);
      return (volatile int32_t *)gll_operator_delete_arr((int)(uintptr_t)(v10));
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd04910 (size: 354 bytes)
// Symbol:    _ZN6glitch7collada12ISkinnedMesh20releaseProcessBufferEPNS_5video12IVideoDriverEj
// Demangled: glitch::collada::ISkinnedMesh::releaseProcessBuffer(glitch::video::IVideoDriver *,unsigned int)
// ============================================================================
int glitch::collada::ISkinnedMesh::releaseProcessBuffer(
        glitch::collada::ISkinnedMesh::Self *self,
        glitch::video::IVideoDriver::Self *a2,
        char a3,
        int a4)
{
  glitch::video::CMaterial::Self *v4;
  uint8_t Technique;
  glitch::video::CMaterial::Self *v6;
  bool v7;
  int result;
  typedef glitch::video::CMaterial::Self *_g4_t_v9;
  typedef void (*_g4_t_v10)(glitch::video::IVideoDriver::Self *, uint32_t, char *, int, uint32_t);
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[4];
  typedef glitch::video::CMaterial::Self *_g4_t_v13;
  typedef uint8_t _g4_t_v14[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v13)) > _g4_s4 ? (36u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v14)) > _g4_s5 ? (40u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);

  if ( (*((uint8_t *)self + 40) & 4) == 0 )
    (*(void (**)(glitch::collada::ISkinnedMesh::Self *, int))(*(uint32_t *)self + 112))(self, 1);
  (*(void (**)(uint8_t *, glitch::collada::ISkinnedMesh::Self *))(*(uint32_t *)self + 20))(v12, (glitch::collada::ISkinnedMesh::Self *)(self));
  v4 = v13;
  if ( v13 != nullptr )
    sub_5459C0((volatile int32_t *)v13);
  v11 = *(uint32_t *)(*(uint32_t *)a2 + 188);
  (*(void (**)(uint8_t *, glitch::collada::ISkinnedMesh::Self *, int))(*(uint32_t *)self + 24))(v14, (glitch::collada::ISkinnedMesh::Self *)(self), a4);
  v9 = v13;
  Technique = glitch::video::CMaterial::getTechnique(v13);
  v10(
    a2,
    0,
    (char *)v4 + 8,
    *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v9 + 1) + 24) + 12 * Technique + 4) + 32) + 40)
  & 0x10001,
    0);
  v6 = v13;
  if ( v13 != nullptr )
  {
    v7 = *(uint32_t *)v13 == 2;
    _mm_mfence();
    if ( v7 )
      glitch::video::CMaterial::removeFromRootSceneNode(v6);
    if ( __sync_fetch_and_add((volatile int32_t *)v6, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v6);
      gll_operator_delete_arr((int)(uintptr_t)(v6));
    }
  }
  result = ~(1 << a3);
  *((uint32_t *)self + 8) &= result;
  if ( HIBYTE(v11) == 0 )
    return (*(int (**)(glitch::collada::ISkinnedMesh::Self *, uint32_t))(*(uint32_t *)self + 112))(self, 0);
  return result;
}


// ============================================================================
// Address:   0xd04a80 (size: 129 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh20releaseProcessBufferEPNS_5video12IVideoDriverEj
// Demangled: glitch::collada::CSkinnedMesh::releaseProcessBuffer(glitch::video::IVideoDriver *,unsigned int)
// ============================================================================
int16_t glitch::collada::CSkinnedMesh::releaseProcessBuffer(
        glitch::collada::CSkinnedMesh::Self *self,
        glitch::video::IVideoDriver::Self *a2,
        unsigned int a3)
{
  int v3;
  int v5;

  v3 = *((uint32_t *)self + 10);
  if ( (v3 & 0x800) != 0 )
  {
    (*(void (**)(uint32_t, glitch::video::IVideoDriver::Self *, unsigned int))(**((uint32_t **)self + 47) + 68))(
      *((uint32_t *)self + 47),
      a2,
      a3);
    v3 = *((uint32_t *)self + 10);
    BYTE1(v3) &= ~8u;
    *((uint32_t *)self + 10) = v3;
  }
  if ( (v3 & 4) != 0 )
    LOWORD(v3) = glitch::collada::ISkinnedMesh::releaseProcessBuffer(self, a2, a3, v5);
  return v3;
}


// ============================================================================
// Address:   0xd04b10 (size: 229 bytes)
// Symbol:    _ZN6glitch7collada13CMorphingMesh20releaseProcessBufferEPNS_5video12IVideoDriverEj
// Demangled: glitch::collada::CMorphingMesh::releaseProcessBuffer(glitch::video::IVideoDriver *,unsigned int)
// ============================================================================
int glitch::collada::CMorphingMesh::releaseProcessBuffer(
        glitch::collada::CMorphingMesh::Self *self,
        glitch::video::IVideoDriver::Self *a2,
        unsigned int a3)
{
  volatile int32_t *v3;
  uint8_t Technique;
  int result;
  typedef glitch::video::CMaterial::Self *_g4_t_v6;
  typedef void (*_g4_t_v7)(glitch::video::IVideoDriver::Self *, uint32_t, volatile int32_t *, int, uint32_t);
  typedef volatile int32_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  (*(void (**)(volatile int32_t **))(*(uint32_t *)self + 20))(&v8);
  v3 = v8;
  if ( v8 != nullptr )
    sub_5459C0(v8);
  v7 = *(void (**)(glitch::video::IVideoDriver::Self *, uint32_t, volatile int32_t *, int, uint32_t))(*(uint32_t *)a2 + 188);
  v6 = *(glitch::video::CMaterial::Self **)(*((uint32_t *)self + 10) + 12 * a3 + 4);
  Technique = glitch::video::CMaterial::getTechnique(v6);
  v7(
    a2,
    0,
    v3 + 2,
    *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v6 + 1) + 24) + 12 * Technique + 4) + 32) + 40)
  & 0x10001,
    0);
  result = ~(1 << a3);
  *((uint32_t *)self + 8) &= result;
  return result;
}


// ============================================================================
// Address:   0xd05620 (size: 469 bytes)
// Symbol:    _ZN6glitch7collada2ps15CGeometryDomain5startEv
// Demangled: glitch::collada::ps::CGeometryDomain::start(void)
// ============================================================================
volatile int32_t *glitch::collada::ps::CGeometryDomain::start(volatile int32_t **self)
{
  glitch::collada::ps::CGeometryDomain::Self *v1;
  volatile int32_t *result;
  int v3;
  volatile int32_t *v4;
  int v5;
  int v6;
  int v7;
  volatile int32_t *v8;
  int v9;
  volatile int32_t *v10;
  typedef volatile int32_t *_g4_t_v11[3];
  typedef int16_t _g4_t_v12;
  typedef glitch::collada::ps::CGeometryDomain::Self **_g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v13 = (glitch::collada::ps::CGeometryDomain::Self **)&self;
  v1 = (glitch::collada::ps::CGeometryDomain::Self *)self;
  result = *(self + 33);
  if ( result == nullptr )
    return result;
  (*(void (**)(volatile int32_t **))(*result + 20))(v11);
  v3 = *((uint32_t *)v11[0] + 3);
  if ( v3 != 0 )
    sub_8B1B00((volatile int32_t *)(v3 + 4));
  if ( v3 == *((uint32_t *)v1 + 38) )
  {
    if ( v3 == 0 )
      goto LABEL_12;
  }
  else
  {
    if ( *((uint32_t *)v1 + 39) != 0 )
      glitch::video::IBuffer::unmap(*((glitch::video::IBuffer::Self **)v1 + 38));
    if ( v3 == 0 )
    {
      v10 = *((volatile int32_t **)v1 + 38);
      *((uint32_t *)v1 + 38) = 0;
      if ( v10 != nullptr )
        sub_5459C0(v10);
      *((uint32_t *)v1 + 39) = 0;
      goto LABEL_12;
    }
    sub_8B1B00((volatile int32_t *)(v3 + 4));
    v4 = *((volatile int32_t **)v1 + 38);
    *((uint32_t *)v1 + 38) = v3;
    if ( v4 != nullptr )
      sub_5459C0(v4);
    *((uint32_t *)v1 + 39) = glitch::video::IBuffer::mapInternal(
                             (glitch::video::IBuffer::Self *)v3,
                             0,
                             0,
                             *(uint32_t *)(v3 + 20),
                             0);
  }
  sub_5459C0((volatile int32_t *)v3);
LABEL_12:
  v5 = *((uint32_t *)v11[0] + 2);
  v6 = v5 + 20;
  if ( *((uint32_t *)v1 + 35) != 0 )
  {
    glitch::video::IBuffer::unmap(**((glitch::video::IBuffer::Self ***)v1 + 34));
    *((uint32_t *)v1 + 35) = 0;
    v6 = v5 + 20;
  }
  *((uint32_t *)v1 + 34) = v6;
  v7 = glitch::video::IBuffer::mapInternal(
         *(glitch::video::IBuffer::Self **)(v5 + 20),
         0,
         0,
         *(uint32_t *)(*(uint32_t *)(v5 + 20) + 20),
         0);
  v8 = nullptr;
  if ( v7 != 0 )
    v8 = (volatile int32_t *)(v7 + *(uint32_t *)(v5 + 24));
  v9 = *((uint32_t *)v1 + 34);
  *((uint32_t *)v1 + 35) = (uint32_t)(uintptr_t)(v8);
  v11[2] = v8;
  LOWORD(v9) = *(uint16_t *)(v9 + 14);
  *((uint32_t *)v1 + 36) = (uint32_t)(uintptr_t)(v8);
  v12 = v9;
  *((uint16_t *)v1 + 74) = v9;
  *((uint32_t *)v1 + 40) = *((uint32_t *)v1 + 39);
  result = v11[0];
  if ( v11[0] != nullptr )
    return (volatile int32_t *)sub_5459C0(v11[0]);
  return result;
}


// ============================================================================
// Address:   0xd05800 (size: 1077 bytes)
// Symbol:    _ZN6glitch7collada13CMorphingMesh4initEPNS_5video12IVideoDriverEbRKNS0_20SProcessBufferConfigE
// Demangled: glitch::collada::CMorphingMesh::init(glitch::video::IVideoDriver *,bool,glitch::collada::SProcessBufferConfig const&)
// ============================================================================
int glitch::collada::CMorphingMesh::init(int a1, int a2, uint8_t a3, int *a4)
{
  int *v4;
  int v5;
  int result;
  volatile int32_t *v7;
  int v8;
  glitch::video::CVertexStreams::Self *v9;
  int v10;
  volatile int32_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  volatile int32_t *v17;
  unsigned int v18;
  volatile int32_t *v19;
  int v20;
  volatile int32_t **v21;
  volatile int32_t *v22;
  typedef volatile int32_t *_g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef volatile int32_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef volatile int32_t *_g4_t_v27;
  typedef volatile int32_t *_g4_t_v28;
  typedef volatile int32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef void (*_g4_t_v39)(int, int, int, int, int *, int, int, int);
  typedef volatile int32_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[2];
  typedef char _g4_t_v43;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v26)) > _g4_s3 ? (8u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v27)) > _g4_s4 ? (8u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v28)) > _g4_s5 ? (8u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v29)) > _g4_s6 ? (12u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v30)) > _g4_s7 ? (12u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v31)) > _g4_s8 ? (12u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v32)) > _g4_s9 ? (16u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v33)) > _g4_s10 ? (20u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v34)) > _g4_s11 ? (24u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v35)) > _g4_s12 ? (24u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v36)) > _g4_s13 ? (28u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v37)) > _g4_s14 ? (36u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v38)) > _g4_s15 ? (40u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v39)) > _g4_s16 ? (44u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v40)) > _g4_s17 ? (64u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v41)) > _g4_s18 ? (68u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v42)) > _g4_s19 ? (72u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v43)) > _g4_s20 ? (80u + sizeof(_g4_t_v43)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);

  v4 = **(int ***)(a1 + 52);
  v5 = *v4;
  v42[0] = 2;
  v42[1] = 2;
  v43 = 0;
  (*(void (**)(int *, int, uint32_t, uint32_t *))(v5 + 72))(v4, a2, a3, v42);
  result = (*(int (**)(uint32_t))(***(uint32_t ***)(a1 + 52) + 16))(**(uint32_t **)(a1 + 52));
  v36 = result;
  if ( result != 0 )
  {
    v33 = 0;
    v32 = 0;
    do
    {
      (*(void (**)(volatile int32_t **))(***(uint32_t ***)(a1 + 52) + 20))(&v40);
      v7 = v40;
      if ( v40 != nullptr )
      {
        v23 = v40;
        sub_5459C0(v40);
        v7 = v23;
      }
      v8 = *(uint32_t *)(*(uint32_t *)(a1 + 40) + v33);
      if ( v8 == 0 )
      {
        v18 = *(uint32_t *)(*((uint32_t *)v7 + 2) + 4);
        v27 = v7;
        v8 = (int)(uintptr_t)(operator new(0x2Cu));
        *(uint32_t *)(v8 + 4) = 0;
        *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_2081E88);
        glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self *)(v8 + 8), v18);
        v19 = v27;
        v20 = *((uint32_t *)v27 + 3);
        *(uint32_t *)(v8 + 12) = v20;
        if ( v20 != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v20 + 4));
          v19 = v27;
        }
        *(uint32_t *)(v8 + 16) = *((uint32_t *)v19 + 4);
        *(uint32_t *)(v8 + 20) = *((uint32_t *)v19 + 5);
        *(uint32_t *)(v8 + 24) = *((uint32_t *)v19 + 6);
        *(uint32_t *)(v8 + 28) = *((uint32_t *)v19 + 7);
        *(uint16_t *)(v8 + 32) = *((uint16_t *)v19 + 16);
        *(uint16_t *)(v8 + 34) = *((uint16_t *)v19 + 17);
        *(uint32_t *)(v8 + 36) = 0;
        *(uint8_t *)(v8 + 40) = 1;
        *(uint8_t *)(v8 + 41) = 1;
        v21 = (volatile int32_t **)(*(uint32_t *)(a1 + 40) + v33);
        v28 = v19;
        sub_8B1B00((volatile int32_t *)(v8 + 4));
        v22 = *v21;
        *v21 = (volatile int32_t *)v8;
        v7 = v28;
        if ( v22 != nullptr )
        {
          sub_5459C0(v22);
          v7 = v28;
        }
      }
      v9 = *((glitch::video::CVertexStreams::Self **)v7 + 2);
      v10 = *(uint32_t *)(v8 + 8);
      if ( v9 != nullptr )
      {
        v29 = *((volatile int32_t **)v7 + 2);
        v24 = v7;
        sub_8B1B00(v29);
        v7 = v24;
        v9 = (glitch::video::CVertexStreams::Self *)v29;
      }
      v34 = *((uint32_t *)v9 + 2);
      if ( __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) == 1 )
      {
        v25 = v7;
        v30 = (int)(uintptr_t)(v9);
        glitch::video::CVertexStreams::Destroy(v9);
        gll_operator_delete_arr(v30);
        v7 = v25;
      }
      *(uint32_t *)(v10 + 8) = v34;
      glitch::video::CVertexStreams::setStreams((glitch::video::CVertexStreams::Self *)v10, (int)(uintptr_t)(v7 + 2), -65538, 0, 1);
      v11 = *(volatile int32_t **)(v10 + 20);
      *(uint32_t *)(v10 + 20) = 0;
      if ( v11 != nullptr )
        sub_5459C0(v11);
      *(uint32_t *)(v10 + 24) = 0;
      *(uint16_t *)(v10 + 30) = 6;
      *(uint16_t *)(v10 + 32) = 3;
      *(uint16_t *)(v10 + 34) = 0;
      glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v10, true);
      if ( (*(uint8_t *)(v10 + 6) & 1) != 0 )
      {
        v16 = v10 + 16 * (*(uint8_t *)(v10 + 12) + 1) + 20;
        v17 = *(volatile int32_t **)v16;
        *(uint32_t *)v16 = 0;
        if ( v17 != nullptr )
        {
          v31 = v16;
          sub_5459C0(v17);
          v16 = v31;
        }
        *(uint32_t *)(v16 + 4) = 0;
        *(uint16_t *)(v16 + 10) = 6;
        *(uint16_t *)(v16 + 12) = 3;
        *(uint16_t *)(v16 + 14) = 0;
        glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v10, true);
      }
      if ( a3 != 0 )
      {
        *(uint32_t *)(a1 + 32) &= ~(1 << v32);
      }
      else
      {
        v35 = *((uint8_t *)a4 + 8);
        v37 = a4[1];
        v38 = *a4;
        sub_8B1B00((volatile int32_t *)(v8 + 4));
        v41 = *(uint32_t *)(v8 + 36);
        v12 = *(uint32_t *)(v8 + 8);
        v39 = *(void (**)(int, int, int, int, int *, int, int, int))(*(uint32_t *)a2 + 180);
        if ( v12 != 0 )
          sub_8B1B00((volatile int32_t *)v12);
        v13 = *(uint32_t *)(v12 + 8);
        if ( __sync_fetch_and_add((volatile int32_t *)v12, 0xFFFFFFFF) == 1 )
        {
          v26 = v13;
          glitch::video::CVertexStreams::Destroy((glitch::video::CVertexStreams::Self *)v12);
          gll_operator_delete_arr(v12);
          v13 = v26;
        }
        v39(a2, v13, 65537, v8 + 8, &v41, v38, v37, v35);
        v14 = v41;
        v15 = *(uint32_t *)(v8 + 36);
        if ( v41 != v15 )
        {
          if ( v15 != 0 && *(uint8_t *)(v8 + 40) != 0 )
            (*(void (**)(uint32_t))(*(uint32_t *)v15 + 4))(*(uint32_t *)(v8 + 36));
          *(uint32_t *)(v8 + 36) = v14;
          *(uint8_t *)(v8 + 40) = 1;
        }
        sub_5459C0((volatile int32_t *)v8);
        *(uint32_t *)(a1 + 32) |= 1 << v32;
      }
      ++v32;
      v33 += 12;
      result = v36;
    }
    while ( v32 != v36 );
  }
  return result;
}


// ============================================================================
// Address:   0xd05c40 (size: 1696 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory32createMaterialVertexAttributeMapERKNS0_16CColladaDatabaseEPNS0_17SInstanceMaterialERKN5boost13intrusive_ptrINS0_5IMeshEEERKNS8_INS_5video9CMaterialEEEjb
// Demangled: glitch::collada::CColladaFactory::createMaterialVertexAttributeMap(glitch::collada::CColladaDatabase const&,glitch::collada::SInstanceMaterial *,boost::intrusive_ptr<glitch::collada::IMesh> const&,boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned int,bool)
// ============================================================================
glitch::video::CMaterialVertexAttributeMap::Self **glitch::collada::CColladaFactory::createMaterialVertexAttributeMap(
        glitch::video::CMaterialVertexAttributeMap::Self **a1,
        int a2,
        glitch::video::CMaterialVertexAttributeMap::Self *a3,
        int a4,
        uint32_t *a5,
        int a6,
        int a7,
        char a8)
{
  int v8;
  volatile int32_t *v9;
  char v10; // si
  glitch::video::CMaterialRenderer::Self *v11;
  int16_t v12;
  int *v13;
  glitch::video::CMaterialVertexAttributeMap::Self *v14;
  glitch::video::CMaterialVertexAttributeMap::Self *v15;
  volatile int32_t *v16;
  char TechniqueID;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v18;
  int v19;
  glitch::video::CVertexAttributeMap::Self *v20;
  char *v21;
  char *v22;
  void *v23;
  glitch::video::CMaterialRenderer::Self *v24;
  char v25;
  glitch::video::CMaterialVertexAttributeMap::Self *v26;
  char v27;
  int v28;
  glitch::video::CVertexStreams::Self *v29;
  glitch::video::CVertexAttributeMap::Self *v31;
  void *v32;
  glitch::video::CMaterialVertexAttributeMap::Self *v33;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef glitch::video::CVertexAttributeMap::Self *_g4_t_v36;
  typedef glitch::video::CVertexAttributeMap::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef char _g4_t_v40;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v41;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v42;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v43;
  typedef glitch::video::CMaterialVertexAttributeMap::Self **_g4_t_v44;
  typedef int _g4_t_v45;
  typedef char _g4_t_v46[4];
  typedef char _g4_t_v47[4];
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v48;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v49;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v50;
  typedef char _g4_t_v51;
  typedef void *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef char _g4_t_v54[4];
  typedef char _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v59;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v60;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v61;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v62;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v63;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v64[4];
  typedef void *_g4_t_v65;
  typedef volatile int32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef void *_g4_t_v68;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v69[7];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v35)) > _g4_s1 ? (16u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v36)) > _g4_s2 ? (48u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v37)) > _g4_s3 ? (48u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v38)) > _g4_s4 ? (48u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v39)) > _g4_s5 ? (48u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v40)) > _g4_s6 ? (52u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v41)) > _g4_s7 ? (52u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v42)) > _g4_s8 ? (52u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v43)) > _g4_s9 ? (52u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v44)) > _g4_s10 ? (56u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v45)) > _g4_s11 ? (60u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v46)) > _g4_s12 ? (64u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v47)) > _g4_s13 ? (64u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v48)) > _g4_s14 ? (68u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v49)) > _g4_s15 ? (68u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v50)) > _g4_s16 ? (68u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v51)) > _g4_s17 ? (72u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v52)) > _g4_s18 ? (72u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v53)) > _g4_s19 ? (76u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v54)) > _g4_s20 ? (76u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v55)) > _g4_s21 ? (76u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v56)) > _g4_s22 ? (80u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v57)) > _g4_s23 ? (80u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v58)) > _g4_s24 ? (80u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v59)) > _g4_s25 ? (84u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v60)) > _g4_s26 ? (84u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (84u + sizeof(_g4_t_v61)) > _g4_s27 ? (84u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v62)) > _g4_s28 ? (88u + sizeof(_g4_t_v62)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v63)) > _g4_s29 ? (104u + sizeof(_g4_t_v63)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v64)) > _g4_s30 ? (120u + sizeof(_g4_t_v64)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v65)) > _g4_s31 ? (136u + sizeof(_g4_t_v65)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v66)) > _g4_s32 ? (152u + sizeof(_g4_t_v66)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v67)) > _g4_s33 ? (156u + sizeof(_g4_t_v67)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v68)) > _g4_s34 ? (160u + sizeof(_g4_t_v68)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v69)) > _g4_s35 ? (164u + sizeof(_g4_t_v69)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 84u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 88u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 104u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 120u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 136u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 152u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 156u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 160u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 164u);

  v69[3] = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)&a1;
  v48 = a3;
  v56 = a4;
  v53 = a5;
  v44 = a1;
  v8 = a6;
  v9 = *(volatile int32_t **)(a4 + 52);
  v59 = (glitch::video::CMaterialVertexAttributeMap::Self *)v9;
  v10 = a8;
  if ( v9 != nullptr )
    sub_8B1B00(v9);
  glf::SpinLock::Lock((volatile int32_t **)&glitch::collada::CColladaFactory::ResFileSharedContentLock);
  if ( *(uint32_t *)(v56 + 52) != 0 && v10 == 0 )
  {
LABEL_59:
    *v44 = v59;
    if ( v59 != nullptr )
      sub_8B1B00((volatile int32_t *)v59);
    goto LABEL_61;
  }
  v11 = nullptr;
  v62 = *(glitch::video::CMaterialRenderer::Self **)(*(uint32_t *)v8 + 4);
  if ( v62 != nullptr )
  {
    sub_8B1B00((volatile int32_t *)v62);
    v11 = v62;
  }
  v12 = (*(int (**)(uint32_t))(**((uint32_t **)v11 + 1) + 64))(*((uint32_t *)v11 + 1));
  if ( (v12 & 7) != 0 )
  {
    v13 = (int *)(v56 + 28);
LABEL_9:
    (*(void (**)(volatile int32_t **, uint32_t))(*(uint32_t *)*v53 + 20))(&v66, *v53);
    if ( v66 != nullptr )
      sub_5459C0(v66);
    glitch::video::CMaterialVertexAttributeMap::allocate(&v63);
    v14 = v63;
    if ( v63 != nullptr )
      sub_8B1B00((volatile int32_t *)v63);
    if ( v59 != nullptr && __sync_fetch_and_add((volatile int32_t *)v59, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterialVertexAttributeMap::Destroy(v59);
      gll_operator_delete_arr((int)(uintptr_t)(v59));
    }
    v15 = v63;
    if ( v63 != nullptr && __sync_fetch_and_add((volatile int32_t *)v63, 0xFFFFFFFF) == 1 )
    {
      v38 = (int)(uintptr_t)(v15);
      glitch::video::CMaterialVertexAttributeMap::Destroy(v15);
      gll_operator_delete_arr(v38);
    }
    if ( *(uint32_t *)(v56 + 52) == 0 )
    {
      if ( v14 != nullptr )
      {
        sub_8B1B00((volatile int32_t *)v14);
        v33 = *(glitch::video::CMaterialVertexAttributeMap::Self **)(v56 + 52);
        *(uint32_t *)(v56 + 52) = (uint32_t)(uintptr_t)(v14);
        if ( v33 != nullptr && __sync_fetch_and_add((volatile int32_t *)v33, 0xFFFFFFFF) == 1 )
        {
          v39 = (int)(uintptr_t)(v33);
          glitch::video::CMaterialVertexAttributeMap::Destroy(v33);
          gll_operator_delete_arr(v39);
        }
      }
      else
      {
        *(uint32_t *)(v56 + 52) = 0;
      }
      glitch::collada::CColladaDatabase::linkInstanceMaterial(v48, v56);
    }
    v35 = *v53;
    (*(void (**)(int *))(*(uint32_t *)*v53 + 20))(&v67);
    v16 = (volatile int32_t *)v67;
    v64[0] = *(glitch::video::CVertexStreams::Self **)(v67 + 8);
    if ( v64[0] != nullptr )
    {
      sub_8B1B00((volatile int32_t *)v64[0]);
      v16 = (volatile int32_t *)v67;
    }
    if ( v16 != nullptr )
      sub_5459C0(v16);
    v45 = *v13;
    if ( *v13 > 0 )
    {
      v57 = 0;
      *(uint32_t *)v46 = 0;
      v49 = v14;
      do
      {
        v69[0] = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                          *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)((char *)&v13[v57 + 1] + v13[1]),
                                                                          nullptr,
                                                                          v35);
        TechniqueID = glitch::video::CMaterialRenderer::getTechniqueID(v62, (const glitch::core::SSharedString::Self *)v69);
        v18 = v69[0];
        if ( v69[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v69[0], 0xFFFFFFFF) == 1 )
        {
          v40 = TechniqueID;
          glitch::core::detail::SSharedStringHeapEntry::SData::release(v18, v34);
          TechniqueID = v40;
        }
        if ( TechniqueID != -1 )
        {
          *(uint32_t *)v54 = *(int *)((char *)&v13[v57 + 2] + v13[1]);
          if ( *(int *)v54 > 0 )
          {
            v19 = 0;
            v51 = TechniqueID;
            v60 = nullptr;
            do
            {
              v36 = (glitch::video::CVertexAttributeMap::Self *)operator new(0x24u);
              glitch::video::CVertexAttributeMap::Construct(
                v36,
                (const boost::intrusive_ptr<glitch::video::CVertexStreams::Self const> *)v64);
              v20 = nullptr;
              v68 = v36;
              if ( v36 != nullptr )
              {
                sub_8B1B00((volatile int32_t *)v36);
                v20 = (glitch::video::CVertexAttributeMap::Self *)v68;
              }
              v21 = (char *)v13 + v13[1] + v57 * 4 + 4;
              v22 = &v21[*((uint32_t *)v21 + 2) + 8 + v19];
              glitch::video::CVertexAttributeMap::set(
                v20,
                (const boost::intrusive_ptr<glitch::video::CVertexStreams::Self const> *)v64,
                *((uint32_t *)v22 + 1),
                (const uint8_t *)&v22[*((uint32_t *)v22 + 2) + 8],
                false);
              glitch::video::CMaterialVertexAttributeMap::set(
                v49,
                v51,
                (char)(uintptr_t)(v60),
                (const boost::intrusive_ptr<glitch::video::CVertexAttributeMap::Self> *)&v68);
              v23 = v68;
              if ( v68 != nullptr && __sync_fetch_and_add((volatile int32_t *)v68, 0xFFFFFFFF) == 1 )
                operator delete(v23);
              v60 = (glitch::video::CMaterialVertexAttributeMap::Self *)((char *)v60 + 1);
              v19 += 12;
            }
            while ( v60 != *(glitch::video::CMaterialVertexAttributeMap::Self **)v54 );
          }
        }
        ++*(uint32_t *)v46;
        v57 += 3;
      }
      while ( *(uint32_t *)v46 != v45 );
      v14 = v49;
    }
    v24 = v62;
    v65 = nullptr;
    v25 = *((uint8_t *)v62 + 16);
    if ( v25 != 0 )
    {
      v61 = nullptr;
      v55 = 0;
      v52 = nullptr;
      v50 = (glitch::video::CMaterialVertexAttributeMap::Self *)(4 * (3 * (uint8_t)(v25 - 1) + 3));
      v26 = v14;
      while ( 1 )
      {
        v27 = *((uint8_t *)v61 + *((uint32_t *)v24 + 6) + 8);
        if ( v27 != 0 )
        {
          v28 = 0;
          *(uint32_t *)v47 = 0;
          v58 = 56 * ((uint8_t)(v27 - 1) + 1);
          do
          {
            while ( ((uint32_t *)v26
                   - 153391689
                   * ((v28
                     + *(uint32_t *)((char *)v61 + *(uint32_t *)(*((uint32_t *)v26 + 1) + 24) + 4)
                     - *(uint32_t *)(*((uint32_t *)v26 + 1) + 28)) >> 3))[2] != 0 )
            {
              ++*(uint32_t *)v47;
              v28 += 56;
              if ( v28 == v58 )
                goto LABEL_48;
            }
            if ( v52 == nullptr )
            {
              v42 = v26;
              v37 = (glitch::video::CVertexAttributeMap::Self *)operator new(0x24u);
              glitch::video::CVertexAttributeMap::Construct(
                v37,
                (const boost::intrusive_ptr<glitch::video::CVertexStreams::Self const> *)v64);
              v31 = v37;
              v26 = v42;
              if ( v37 != nullptr )
              {
                sub_8B1B00((volatile int32_t *)v37);
                v26 = v42;
                v31 = v37;
              }
              v32 = v65;
              v65 = v31;
              if ( v32 != nullptr && __sync_fetch_and_add((volatile int32_t *)v32, 0xFFFFFFFF) == 1 )
              {
                v43 = v26;
                operator delete(v32);
                v26 = v43;
              }
            }
            v41 = v26;
            v28 += 56;
            glitch::video::CMaterialVertexAttributeMap::set(
              v26,
              v55,
              v47[0],
              (const boost::intrusive_ptr<glitch::video::CVertexAttributeMap::Self> *)&v65);
            ++*(uint32_t *)v47;
            v52 = v65;
            v26 = v41;
          }
          while ( v28 != v58 );
        }
LABEL_48:
        ++v55;
        v61 = (glitch::video::CMaterialVertexAttributeMap::Self *)((char *)v61 + 12);
        if ( v61 == v50 )
          break;
        v24 = v62;
      }
      v14 = v26;
      if ( v52 != nullptr && __sync_fetch_and_add((volatile int32_t *)v52, 0xFFFFFFFF) == 1 )
        operator delete(v52);
    }
    v29 = v64[0];
    if ( v64[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v64[0], 0xFFFFFFFF) == 1 )
    {
      glitch::video::CVertexStreams::Destroy(v29);
      gll_operator_delete_arr((int)(uintptr_t)(v29));
    }
    v59 = v14;
    if ( v62 != nullptr && __sync_fetch_and_add((volatile int32_t *)v62, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterialRenderer::Destroy(v62);
      gll_operator_delete_arr((int)(uintptr_t)(v62));
    }
    goto LABEL_59;
  }
  if ( (v12 & 0x18) != 0 )
  {
    v13 = (int *)(v56 + 36);
    goto LABEL_9;
  }
  if ( (v12 & 0x260) != 0 )
  {
    v13 = (int *)(v56 + 20);
    goto LABEL_9;
  }
  if ( (v12 & 0x100) != 0 )
  {
    v13 = (int *)(v56 + 44);
    goto LABEL_9;
  }
  *v44 = nullptr;
  if ( v62 != nullptr && __sync_fetch_and_add((volatile int32_t *)v62, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v62);
    gll_operator_delete_arr((int)(uintptr_t)(v62));
  }
LABEL_61:
  glf::SpinLock::Unlock((glf::SpinLock::Self *)&glitch::collada::CColladaFactory::ResFileSharedContentLock);
  if ( v59 != nullptr && __sync_fetch_and_add((volatile int32_t *)v59, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v59);
    gll_operator_delete_arr((int)(uintptr_t)(v59));
  }
  return v44;
}


// ============================================================================
// Address:   0xd062e0 (size: 344 bytes)
// Symbol:    _ZNK6glitch7collada15CColladaFactory14createAnimatorERKNS0_16CColladaDatabaseERKN5boost13intrusive_ptrINS0_13CAnimationSetEEERKNS0_9anim_pack19SAnimationGraphNodeE
// Demangled: glitch::collada::CColladaFactory::createAnimator(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::collada::CAnimationSet> const&,glitch::collada::anim_pack::SAnimationGraphNode const&)const
// ============================================================================
glitch::collada::ISceneNodeAnimator::Self **glitch::collada::CColladaFactory::createAnimator(
        glitch::collada::ISceneNodeAnimator::Self **a1,
        int a2,
        int a3,
        int a4,
        int a5)
{
  glitch::collada::ISceneNodeAnimator::Self *v5;
  glitch::collada::ISceneNodeAnimator::Self *v6;
  glitch::collada::CSceneNodeAnimatorBlender::Self *v8;

  *a1 = nullptr;
  switch ( *(uint32_t *)(a5 + 4) )
  {
    case 0:
      v5 = (glitch::collada::ISceneNodeAnimator::Self *)operator new(0x5Cu);
      glitch::collada::CSceneNodeAnimatorSet::Construct(v5, a4);
      if ( v5 != nullptr )
        goto LABEL_3;
      goto LABEL_4;
    case 1:
      v5 = (glitch::collada::ISceneNodeAnimator::Self *)operator new(0x6Cu);
      glitch::collada::CSceneNodeAnimatorSnapShot::Construct(v5, a4);
      if ( v5 == nullptr )
        goto LABEL_4;
      goto LABEL_3;
    case 2:
      v8 = (glitch::collada::CSceneNodeAnimatorBlender::Self *)operator new(0x5Cu);
      glitch::collada::CSceneNodeAnimatorBlender::CSceneNodeAnimatorBlender(v8);
      if ( v8 == nullptr )
        goto LABEL_9;
      goto LABEL_8;
    case 3:
    case 5:
    case 6:
      v5 = (glitch::collada::ISceneNodeAnimator::Self *)operator new(0x70u);
      glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Construct(v5, a4);
      if ( v5 != nullptr )
LABEL_3:
        sub_8B1B00((volatile int32_t *)((char *)v5 + *(uint32_t *)(*(uint32_t *)v5 - 12) + 4));
LABEL_4:
      v6 = *a1;
      *a1 = v5;
      if ( v6 != nullptr )
        goto LABEL_5;
      return a1;
    case 4:
      v8 = (glitch::collada::CSceneNodeAnimatorBlender::Self *)operator new(0x6Cu);
      glitch::collada::CSceneNodeAnimatorTrackBlender::CSceneNodeAnimatorTrackBlender(v8);
      if ( v8 != nullptr )
LABEL_8:
        sub_8B1B00((volatile int32_t *)((char *)v8 + *(uint32_t *)(*(uint32_t *)v8 - 12) + 4));
LABEL_9:
      v6 = *a1;
      *a1 = (glitch::collada::ISceneNodeAnimator::Self *)(v8);
      if ( v6 == nullptr )
        return a1;
LABEL_5:
      sub_5459C0((volatile int32_t *)((char *)v6 + *(uint32_t *)(*(uint32_t *)v6 - 12)));
      break;
    default:
      return a1;
  }
  return a1;
}


// ============================================================================
// Address:   0xd06440 (size: 260 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory25getExternalLightSceneNodeERKNS0_16CColladaDatabaseERKN5boost13intrusive_ptrIKNS_5video17CMaterialRendererEEEtjPKc
// Demangled: glitch::collada::CColladaFactory::getExternalLightSceneNode(glitch::collada::CColladaDatabase const&,boost::intrusive_ptr<glitch::video::CMaterialRenderer const> const&,unsigned short,unsigned int,char const*)
// ============================================================================
uint32_t *glitch::collada::CColladaFactory::getExternalLightSceneNode(
        uint32_t *a1,
        int a2,
        void *a3,
        int a4,
        int a5,
        int a6,
        const char *a7)
{
  uint32_t *v7;
  int v8;
  bool v9;
  uint32_t *v10;
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);

  v14 = (uint32_t *)(&a1);
  v7 = a1;
  strchr(a7, 35);
  v8 = **(uint32_t **)(*(uint32_t *)(glitch::collada::CResFileManager::Inst + 32) + 16);
  v13 = nullptr;
  (*(void (**)(uint32_t **))(v8 + 24))(&v12);
  if ( v13 != nullptr )
    sub_5459C0((uint32_t *)((char *)v13 + *(uint32_t *)(*v13 - 16)));
  if ( v12 == nullptr )
  {
    v10 = nullptr;
    goto LABEL_5;
  }
  v9 = (*(int (**)(uint32_t *))(*v12 + 212))(v12) == 1952999276;
  v10 = v12;
  if ( !v9 )
  {
LABEL_5:
    *v7 = 0;
    goto LABEL_6;
  }
  *v7 = (uint32_t)(uintptr_t)(v12);
  if ( v10 == nullptr )
    return v7;
  sub_8B1B00((uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 16) + 4));
  v10 = v12;
LABEL_6:
  if ( v10 != nullptr )
    sub_5459C0((uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 16)));
  return v7;
}


// ============================================================================
// Address:   0xd06550 (size: 108 bytes)
// Symbol:    _ZN6glitch7collada27CParametricController1DBaseC2ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE
// Demangled: glitch::collada::CParametricController1DBase::CParametricController1DBase(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada27CParametricController1DBaseC1ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE'
int glitch::collada::CParametricController1DBase::CParametricController1DBase(
        uint32_t *a1,
        int a2,
        int a3,
        int a4)
{
  int v4;
  int result;

  glitch::collada::CParametricControllerBase::Construct(a1, a2, a3, a4);
  *a1 = ((uint32_t)(uintptr_t)&off_206F768);
  v4 = *(uint32_t *)(a3 + 8);
  result = 0;
  if ( v4 != 0 )
    result = a3 + v4 + 8;
  a1[11] = result;
  return result;
}


// ============================================================================
// Address:   0xd065c0 (size: 193 bytes)
// Symbol:    _ZN6glitch7collada31CCircularParametricController1dC2ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE
// Demangled: glitch::collada::CCircularParametricController1d::CCircularParametricController1d(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada31CCircularParametricController1dC1ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE'
float *glitch::collada::CCircularParametricController1d::Construct(
        float *a1,
        int a2,
        int a3,
        int a4)
{
  int *v4;
  int v5;
  float *v6;
  float *result;
  float v8; // xmm0_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm0_4

  glitch::collada::CParametricController1DBase::CParametricController1DBase((uint32_t *)(a1), a2, a3, a4);
  a1[12] = 0.0;
  a1[13] = 0.0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206F728);
  v4 = *((int **)a1 + 11);
  a1[14] = 0.0;
  v5 = *v4;
  v6 = (float *)((char *)v4 + *v4);
  result = nullptr;
  if ( v5 != 0 )
    result = v6;
  v8 = result[3];
  v9 = result[1];
  v10 = result[4];
  v11 = (float)(result[5] * *result) - (float)(result[2] * v8);
  v12 = (float)(v8 * v9) - (float)(v10 * *result);
  a1[12] = (float)(result[2] * v10) - (float)(result[5] * v9);
  a1[13] = v11;
  a1[14] = v12;
  return result;
}


// ============================================================================
// Address:   0xd06690 (size: 108 bytes)
// Symbol:    _ZN6glitch7collada27CParametricController2DBaseC2ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE
// Demangled: glitch::collada::CParametricController2DBase::CParametricController2DBase(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada27CParametricController2DBaseC1ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE'
int glitch::collada::CParametricController2DBase::CParametricController2DBase(
        uint32_t *a1,
        int a2,
        int a3,
        int a4)
{
  int v4;
  int result;

  glitch::collada::CParametricControllerBase::Construct(a1, a2, a3, a4);
  *a1 = ((uint32_t)(uintptr_t)&off_206F7A8);
  v4 = *(uint32_t *)(a3 + 8);
  result = 0;
  if ( v4 != 0 )
    result = a3 + v4 + 8;
  a1[11] = result;
  return result;
}


// ============================================================================
// Address:   0xd06700 (size: 549 bytes)
// Symbol:    _ZNK6glitch7collada27CParametricController2DBase15getSurfaceIndexEiRKNS_4core8vector3dIfEEPS4_
// Demangled: glitch::collada::CParametricController2DBase::getSurfaceIndex(int,glitch::core::vector3d<float> const&,glitch::core::vector3d<float>*)const
// ============================================================================
int glitch::collada::CParametricController2DBase::getSurfaceIndex(uint32_t *a1, int a2, int a3, float *a4)
{
  int result;
  float v5; // xmm3_4
  float v6; // xmm4_4
  int v7;
  int v8;
  int v9;
  float v10; // xmm3_4
  float v11; // xmm4_4
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  float v16; // xmm0_4
  float v17; // xmm7_4
  float v18; // xmm2_4
  typedef int _g4_t_v19;
  typedef float *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef float _g4_t_v22[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v22)) > _g4_s3 ? (36u + sizeof(_g4_t_v22)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);

  LODWORD(v22[4]) = (uint32_t)(uintptr_t)(&a1);
  v20 = a4;
  result = -1;
  if ( *(uint32_t *)(*(uint32_t *)(a1[11] + 56) + a1[11] + (a2 << 6) + 96) != 0
    && *(uint32_t *)(*(uint32_t *)(a1[11] + 56) + a1[11] + (a2 << 6) + 104) != 0 )
  {
    v19 = *(uint32_t *)(a1[11] + 56) + a1[11] + (a2 << 6) + 56;
    (*(void (**)(float *))(*a1 + 28))(v22);
    result = -1;
    v5 = v22[0] - *(float *)(v19 + 8);
    if ( v5 >= 0.0 )
    {
      v6 = v22[1] - *(float *)(v19 + 12);
      if ( v6 >= 0.0 )
      {
        v7 = (int)(float)(v5 / *(float *)(v19 + 32));
        if ( v7 < *(uint32_t *)v19 )
        {
          v8 = (int)(float)(v6 / *(float *)(v19 + 36));
          if ( v8 < *(uint32_t *)(v19 + 4) )
          {
            v9 = v8 * *(uint32_t *)v19 + v7;
            v10 = v5 / *(float *)(v19 + 24);
            v11 = v6 / *(float *)(v19 + 28);
            if ( v9 != -1 )
            {
              v12 = (uint32_t *)(v19 + *(uint32_t *)(v19 + 52) + 52 + 8 * v9);
              v13 = v12[1];
              if ( v13 > 0 )
              {
                v21 = 2 * v13;
                v14 = 0;
                while ( 1 )
                {
                  v15 = v19
                      + *(uint32_t *)(v19 + 44)
                      + 44
                      + 40 * *(uint16_t *)(*(uint32_t *)(v19 + 60) + 4 + v19 + 2 * *v12 + v14 + 56);
                  v16 = (float)((float)(*(float *)(v15 + 28) * v11) + (float)(*(float *)(v15 + 16) * v10))
                      + *(float *)(v15 + 4);
                  if ( v16 >= (float)-glitch::collada::IParametricController::EPSILON_NEAR_ZERO )
                  {
                    v17 = (float)((float)(*(float *)(v15 + 32) * v11) + (float)(*(float *)(v15 + 20) * v10))
                        + *(float *)(v15 + 8);
                    if ( v17 >= (float)-glitch::collada::IParametricController::EPSILON_NEAR_ZERO )
                    {
                      v18 = (float)((float)(*(float *)(v15 + 36) * v11) + (float)(*(float *)(v15 + 24) * v10))
                          + *(float *)(v15 + 12);
                      if ( v18 >= (float)-glitch::collada::IParametricController::EPSILON_NEAR_ZERO )
                        break;
                    }
                  }
                  v14 += 2;
                  if ( v14 == v21 )
                    return -1;
                }
                result = *(uint32_t *)v15;
                if ( v20 != nullptr )
                {
                  *v20 = v16;
                  v20[1] = v17;
                  v20[2] = v18;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd06930 (size: 392 bytes)
// Symbol:    _ZNK6glitch7collada27CParametricController2DBase15packClipWeightsERKNS0_9anim_pack28SParametricControllerSurfaceERKNS_4core8vector3dIfEEPNS0_11SClipWeightE
// Demangled: glitch::collada::CParametricController2DBase::packClipWeights(glitch::collada::anim_pack::SParametricControllerSurface const&,glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *)const
// ============================================================================
int glitch::collada::CParametricController2DBase::packClipWeights(int a1, uint32_t *a2, float *a3, float *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  float *v6;
  float v7; // xmm4_4
  float v8; // xmm7_4
  float *v9;
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float *v13;
  float v14; // xmm6_4
  float v15; // xmm5_4
  uint32_t *v16;
  int v17;
  int result;
  int v19;
  float *v20;
  int v21;
  float *v22;
  float *v23;
  float v24;
  int v25;
  int v26;
  uint32_t v27[5];
  float v28[5];

  v4 = *(uint32_t **)(a1 + 44);
  v5 = (uint32_t *)((char *)&v4[3 * a2[1] + 8] + v4[8]);
  v25 = (int)(uintptr_t)(v4) + v4[4] + 16;
  v6 = (float *)(v25 + 12 * v5[2]);
  v7 = a3[2];
  v8 = v6[1];
  v9 = (float *)(v25 + 12 * v5[1]);
  v10 = a3[1];
  v11 = v9[1];
  v24 = v6[2] * v7;
  v12 = v9[2];
  v13 = (float *)(v25 + 12 * *v5);
  v14 = v13[1] * *a3;
  v15 = v13[2] * *a3;
  v28[0] = (float)((float)(v10 * *v9) + (float)(v7 * *v6)) + (float)(*a3 * *v13);
  v28[1] = (float)((float)(v11 * v10) + (float)(v8 * v7)) + v14;
  v26 = 0;
  v16 = (uint32_t *)((char *)&v4[3 * *a2] + v4[6]);
  v28[2] = (float)((float)(v12 * v10) + v24) + v15;
  v27[0] = v16[6];
  v17 = v16[8];
  v27[1] = v16[7];
  v27[2] = v17;
  result = 0;
  do
  {
    if ( result == 0 )
    {
      v19 = v27[v26];
LABEL_7:
      v23 = &a4[2 * result++];
      *(uint32_t *)v23 = v19;
      v23[1] = v28[v26];
      goto LABEL_8;
    }
    v19 = v27[v26];
    if ( *(uint32_t *)a4 != v19 )
    {
      v20 = a4 + 2;
      v21 = 0;
      while ( ++v21 != result )
      {
        v22 = v20;
        v20 += 2;
        if ( *((uint32_t *)v20 - 2) == v19 )
          goto LABEL_11;
      }
      goto LABEL_7;
    }
    v22 = a4;
LABEL_11:
    v22[1] = v22[1] + v28[v26];
LABEL_8:
    ++v26;
  }
  while ( v26 != 3 );
  return result;
}


// ============================================================================
// Address:   0xd06ac0 (size: 1175 bytes)
// Symbol:    _ZN6glitch7collada29CPlanarParametricController2d14getClipWeightsERKNS_4core8vector3dIfEEPNS0_11SClipWeightEPS4_
// Demangled: glitch::collada::CPlanarParametricController2d::getClipWeights(glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *,glitch::core::vector3d<float>*)
// ============================================================================
int glitch::collada::CPlanarParametricController2d::getClipWeights(uint32_t *a1, float *a2, float *a3, float *a4)
{
  float *v4;
  int SurfaceIndex;
  int result;
  uint32_t *v7;
  float v8; // xmm5_4
  int v9;
  float *v10;
  float *v11;
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  int v22;
  uint32_t *v23;
  int v24;
  float *v25;
  float *v26;
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  typedef float _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef float *_g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef float *_g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t **_g4_t_v54;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v32)) > _g4_s0 ? (4u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v33)) > _g4_s1 ? (8u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v34)) > _g4_s2 ? (12u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v35)) > _g4_s3 ? (16u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v36)) > _g4_s4 ? (20u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v37)) > _g4_s5 ? (24u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v38)) > _g4_s6 ? (28u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v39)) > _g4_s7 ? (32u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v40)) > _g4_s8 ? (36u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v41)) > _g4_s9 ? (40u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v42)) > _g4_s10 ? (60u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v43)) > _g4_s11 ? (64u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v44)) > _g4_s12 ? (76u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v45)) > _g4_s13 ? (80u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v46)) > _g4_s14 ? (84u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v47)) > _g4_s15 ? (88u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v48)) > _g4_s16 ? (92u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v49)) > _g4_s17 ? (96u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v50)) > _g4_s18 ? (100u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v51)) > _g4_s19 ? (112u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v52)) > _g4_s20 ? (116u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v53)) > _g4_s21 ? (120u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v54)) > _g4_s22 ? (132u + sizeof(_g4_t_v54)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 96u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 100u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 112u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 116u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 120u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);

  v54 = &a1;
  v4 = a2;
  v44 = a1;
  v40 = a3;
  v47 = a4;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  SurfaceIndex = glitch::collada::CParametricController2DBase::getSurfaceIndex(a1, 0, (int)(uintptr_t)(a2), (float *)&v51);
  if ( SurfaceIndex != -1 )
  {
    if ( v47 != nullptr )
    {
      *v47 = *v4;
      v47[1] = v4[1];
      v47[2] = v4[2];
    }
    return glitch::collada::CParametricController2DBase::packClipWeights(
             (int)(uintptr_t)(v44),
             (uint32_t *)(v44[11] + *(uint32_t *)(v44[11] + 40) + 40 + 20 * SurfaceIndex),
             (float *)&v51,
             v40);
  }
  (*(void (**)(float *))(*v44 + 36))(&v48);
  v7 = (uint32_t *)v44[11];
  v39 = v7[11];
  result = 0;
  if ( v39 <= 0 )
    return result;
  v36 = v7[10] + 4;
  v35 = v7[2] + 4;
  v46 = 0;
  v32 = 0.0;
  v37 = nullptr;
  v41 = 3.4028235e38f;
  v45 = 0;
  v34 = v7 + 9;
  v38 = v7 + 1;
  v33 = (int)(uintptr_t)(v7) + v7[12] + 48;
  do
  {
    while ( 1 )
    {
      v9 = (int)(uintptr_t)(&v34[5 * *(uint32_t *)(v46 + v33)]) + v36;
      v10 = (float *)((char *)&v38[3 * *(uint32_t *)(v9 + 4 * *(uint32_t *)(v46 + v33 + 4) + 8)] + v35);
      v11 = (float *)((char *)&v38[3 * *(uint32_t *)(v9 + 4 * *(uint32_t *)(v46 + v33 + 8) + 8)] + v35);
      v43 = v11[1];
      v12 = v48 - *v10;
      v13 = *v11 - *v10;
      v14 = v10[1];
      v15 = v43 - v14;
      v42 = v11[2];
      v16 = v49 - v14;
      v17 = v10[2];
      v18 = v50 - v17;
      v19 = v42 - v17;
      v20 = (float)((float)((float)(v16 * v15) + (float)(v12 * v13)) + (float)((float)(v50 - v17) * v19))
          / (float)((float)((float)(v15 * v15) + (float)(v13 * v13)) + (float)(v19 * v19));
      if ( v20 > 0.0 )
      {
        if ( v20 < 1.0 )
          v8 = (float)((float)((float)(v16 - (float)(v15 * v20)) * (float)(v16 - (float)(v15 * v20)))
                     + (float)((float)(v12 - (float)(v13 * v20)) * (float)(v12 - (float)(v13 * v20))))
             + (float)((float)(v18 - (float)(v19 * v20)) * (float)(v18 - (float)(v19 * v20)));
        else
          v8 = (float)((float)((float)(v49 - v43) * (float)(v49 - v43))
                     + (float)((float)(v48 - *v11) * (float)(v48 - *v11)))
             + (float)((float)(v50 - v42) * (float)(v50 - v42));
      }
      else
      {
        v8 = (float)((float)(v16 * v16) + (float)(v12 * v12)) + (float)(v18 * v18);
      }
      if ( v41 > v8 )
      {
        if ( v20 <= 1.0 )
          break;
        v41 = v8;
        v37 = (int *)(v46 + v33);
        v32 = 1.0;
      }
LABEL_13:
      ++v45;
      v46 += 12;
      if ( v45 == v39 )
        goto LABEL_19;
    }
    v41 = v8;
    if ( v20 < 0.0 )
    {
      v37 = (int *)(v46 + v33);
      v32 = 0.0;
      goto LABEL_13;
    }
    v37 = (int *)(v46 + v33);
    ++v45;
    v46 += 12;
    v32 = v20;
  }
  while ( v45 != v39 );
LABEL_19:
  if ( v37 == nullptr )
    return 0;
  v21 = 1.0 - v32;
  v22 = *v37;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v23 = (uint32_t *)((char *)&v34[5 * v22] + v36);
  *((float *)&v51 + v37[1]) = 1.0 - v32;
  *((float *)&v51 + v37[2]) = v32;
  if ( v47 != nullptr )
  {
    v24 = (int)(uintptr_t)(v38) + v7[2] + 4;
    v25 = (float *)(v24 + 12 * v23[v37[2] + 2]);
    v26 = (float *)(v24 + 12 * v23[v37[1] + 2]);
    v27 = (float)(v26[1] * v21) + (float)(v32 * v25[1]);
    v28 = v26[2] * v21;
    v29 = v21 * *v26;
    v30 = v28 + (float)(v32 * v25[2]);
    v31 = v32 * *v25;
    v47[1] = v27;
    v47[2] = v30;
    *v47 = v29 + v31;
  }
  return glitch::collada::CParametricController2DBase::packClipWeights((int)(uintptr_t)(v44), v23, (float *)&v51, v40);
}


// ============================================================================
// Address:   0xd06f60 (size: 83 bytes)
// Symbol:    _ZN6glitch7collada29CPlanarParametricController2dC2ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE
// Demangled: glitch::collada::CPlanarParametricController2d::CPlanarParametricController2d(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada29CPlanarParametricController2dC1ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE'
void (**glitch::collada::CPlanarParametricController2d::Construct(
        uint32_t *a1,
        int a2,
        int a3,
        int a4))(glitch::collada::CPlanarParametricController2d::Self *__hidden self)
{
  glitch::collada::CParametricController2DBase::CParametricController2DBase(a1, a2, a3, a4);
  *a1 = ((uint32_t)(uintptr_t)&off_206F7E8);
  return (void (**)(glitch::collada::CPlanarParametricController2d::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206F7E8));
}


// ============================================================================
// Address:   0xd06fc0 (size: 83 bytes)
// Symbol:    _ZN6glitch7collada32CSphericalParametricController2dC2ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE
// Demangled: glitch::collada::CSphericalParametricController2d::CSphericalParametricController2d(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada32CSphericalParametricController2dC1ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE'
void (**glitch::collada::CSphericalParametricController2d::Construct(
        uint32_t *a1,
        int a2,
        int a3,
        int a4))(glitch::collada::CSphericalParametricController2d::Self *__hidden self)
{
  glitch::collada::CParametricController2DBase::CParametricController2DBase(a1, a2, a3, a4);
  *a1 = ((uint32_t)(uintptr_t)&off_206F828);
  return (void (**)(glitch::collada::CSphericalParametricController2d::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206F828));
}


// ============================================================================
// Address:   0xd07020 (size: 1021 bytes)
// Symbol:    _ZNK6glitch7collada32CSphericalParametricController2d24computeBarycentricCoordsERKNS0_9anim_pack28SParametricControllerSurfaceERKNS_4core8vector3dIfEE
// Demangled: glitch::collada::CSphericalParametricController2d::computeBarycentricCoords(glitch::collada::anim_pack::SParametricControllerSurface const&,glitch::core::vector3d<float> const&)const
// ============================================================================
int glitch::collada::CSphericalParametricController2d::computeBarycentricCoords(int a1)
{
  glitch::core::getBarycentricCoordinates(a1);
  return a1;
}


// ============================================================================
// Address:   0xd07420 (size: 1592 bytes)
// Symbol:    _ZN6glitch7collada32CSphericalParametricController2d14getClipWeightsERKNS_4core8vector3dIfEEPNS0_11SClipWeightEPS4_
// Demangled: glitch::collada::CSphericalParametricController2d::getClipWeights(glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *,glitch::core::vector3d<float>*)
// ============================================================================
// bad sp value at call has been detected, the output may be wrong!
int glitch::collada::CSphericalParametricController2d::getClipWeights(
        uint32_t *a1,
        float *a2,
        float *a3,
        uint32_t *a4)
{
  uint32_t *v4;
  float *v5;
  int v6;
  int SurfaceIndex;
  int result;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  float *v13;
  float *v14;
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm6_4
  float v31; // xmm6_4
  float v32; // xmm6_4
  uint32_t *v33;
  uint32_t *v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef float *_g4_t_v44;
  typedef float *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef float *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef float _g4_t_v73;
  typedef int _g4_t_v74;
  typedef float _g4_t_v75;
  typedef int _g4_t_v76;
  typedef float _g4_t_v77;
  typedef int _g4_t_v78;
  typedef float _g4_t_v79;
  typedef int _g4_t_v80;
  typedef float _g4_t_v81;
  typedef int _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89[3];
  typedef float _g4_t_v90[9];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v35)) > _g4_s0 ? (4u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v36)) > _g4_s1 ? (8u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v37)) > _g4_s2 ? (12u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v38)) > _g4_s3 ? (16u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v39)) > _g4_s4 ? (16u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v40)) > _g4_s5 ? (20u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v41)) > _g4_s6 ? (24u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v42)) > _g4_s7 ? (28u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v43)) > _g4_s8 ? (28u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v44)) > _g4_s9 ? (32u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v45)) > _g4_s10 ? (32u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v46)) > _g4_s11 ? (36u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v47)) > _g4_s12 ? (36u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v48)) > _g4_s13 ? (40u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v49)) > _g4_s14 ? (40u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v50)) > _g4_s15 ? (44u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v51)) > _g4_s16 ? (44u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v52)) > _g4_s17 ? (48u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v53)) > _g4_s18 ? (48u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v54)) > _g4_s19 ? (52u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v55)) > _g4_s20 ? (52u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v56)) > _g4_s21 ? (56u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v57)) > _g4_s22 ? (56u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v58)) > _g4_s23 ? (60u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v59)) > _g4_s24 ? (60u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v60)) > _g4_s25 ? (64u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v61)) > _g4_s26 ? (64u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v62)) > _g4_s27 ? (68u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v63)) > _g4_s28 ? (72u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v64)) > _g4_s29 ? (72u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v65)) > _g4_s30 ? (76u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v66)) > _g4_s31 ? (80u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (84u + sizeof(_g4_t_v67)) > _g4_s32 ? (84u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (88u + sizeof(_g4_t_v68)) > _g4_s33 ? (88u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v69)) > _g4_s34 ? (88u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (92u + sizeof(_g4_t_v70)) > _g4_s35 ? (92u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (92u + sizeof(_g4_t_v71)) > _g4_s36 ? (92u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (96u + sizeof(_g4_t_v72)) > _g4_s37 ? (96u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (96u + sizeof(_g4_t_v73)) > _g4_s38 ? (96u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (100u + sizeof(_g4_t_v74)) > _g4_s39 ? (100u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_v75)) > _g4_s40 ? (100u + sizeof(_g4_t_v75)) : _g4_s40,
    _g4_s42 = (104u + sizeof(_g4_t_v76)) > _g4_s41 ? (104u + sizeof(_g4_t_v76)) : _g4_s41,
    _g4_s43 = (104u + sizeof(_g4_t_v77)) > _g4_s42 ? (104u + sizeof(_g4_t_v77)) : _g4_s42,
    _g4_s44 = (108u + sizeof(_g4_t_v78)) > _g4_s43 ? (108u + sizeof(_g4_t_v78)) : _g4_s43,
    _g4_s45 = (108u + sizeof(_g4_t_v79)) > _g4_s44 ? (108u + sizeof(_g4_t_v79)) : _g4_s44,
    _g4_s46 = (112u + sizeof(_g4_t_v80)) > _g4_s45 ? (112u + sizeof(_g4_t_v80)) : _g4_s45,
    _g4_s47 = (112u + sizeof(_g4_t_v81)) > _g4_s46 ? (112u + sizeof(_g4_t_v81)) : _g4_s46,
    _g4_s48 = (116u + sizeof(_g4_t_v82)) > _g4_s47 ? (116u + sizeof(_g4_t_v82)) : _g4_s47,
    _g4_s49 = (120u + sizeof(_g4_t_v83)) > _g4_s48 ? (120u + sizeof(_g4_t_v83)) : _g4_s48,
    _g4_s50 = (124u + sizeof(_g4_t_v84)) > _g4_s49 ? (124u + sizeof(_g4_t_v84)) : _g4_s49,
    _g4_s51 = (128u + sizeof(_g4_t_v85)) > _g4_s50 ? (128u + sizeof(_g4_t_v85)) : _g4_s50,
    _g4_s52 = (136u + sizeof(_g4_t_v86)) > _g4_s51 ? (136u + sizeof(_g4_t_v86)) : _g4_s51,
    _g4_s53 = (140u + sizeof(_g4_t_v87)) > _g4_s52 ? (140u + sizeof(_g4_t_v87)) : _g4_s52,
    _g4_s54 = (144u + sizeof(_g4_t_v88)) > _g4_s53 ? (144u + sizeof(_g4_t_v88)) : _g4_s53,
    _g4_s55 = (160u + sizeof(_g4_t_v89)) > _g4_s54 ? (160u + sizeof(_g4_t_v89)) : _g4_s54,
    _g4_s56 = (172u + sizeof(_g4_t_v90)) > _g4_s55 ? (172u + sizeof(_g4_t_v90)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 84u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 92u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 96u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 100u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 104u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 104u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 108u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 108u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 112u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 112u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 116u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 120u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 124u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 128u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 136u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 140u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 144u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 160u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 172u);

  LODWORD(v90[5]) = (uint32_t)(uintptr_t)(&a1);
  v4 = a1;
  v5 = a2;
  v44 = a3;
  v63 = a4;
  if ( *(int *)(a1[11] + 52) <= 0 )
  {
LABEL_7:
    (*(void (**)(float *, uint32_t *, float *, int, int, int, uint32_t *, int, int, int, float *, int, int, int, int, int, int, int, int, int, uint32_t *, int, int, int, int, int, int, int, int, int, int, int))(*v4 + 36))(
      &v83,
      v4,
      v5,
      v35,
      v36,
      v37,
      v4,
      v40,
      v41,
      v42,
      v44,
      v46,
      v48,
      v50,
      v52,
      v54,
      v56,
      v58,
      v60,
      v62,
      v63,
      v65,
      v66,
      v67,
      v68,
      v70,
      v72,
      v74,
      v76,
      v78,
      v80,
      v82);
    result = 0;
    v86 = 0.0;
    v87 = 0.0;
    v88 = 0.0;
    v9 = *(uint32_t **)(v39 + 44);
    v61 = v9[11];
    if ( v61 > 0 )
    {
      v69 = 0;
      v55 = v9[12] + 4;
      v43 = nullptr;
      v57 = v9[10] + 4;
      v49 = v9 + 11;
      v71 = 0;
      v51 = v9 + 9;
      v59 = 3.4028235e38f;
      v53 = v9 + 1;
      v47 = *(uint32_t *)(v39 + 44);
      do
      {
        v10 = (uint32_t *)((char *)v49 + v55 + v69);
        v11 = (int)(uintptr_t)(&v51[5 * *v10]) + v57;
        v12 = (int)(uintptr_t)(v53) + *(uint32_t *)(v47 + 8) + 4;
        v13 = (float *)(v12 + 12 * *(uint32_t *)(v11 + 4 * v10[1] + 8));
        v14 = (float *)(v12 + 12 * *(uint32_t *)(v11 + 4 * v10[2] + 8));
        v15 = v14[1];
        v81 = v13[1];
        v16 = *v13;
        v17 = v13[2];
        v18 = (float)(v15 * *v13) - (float)(v81 * *v14);
        v79 = *v14;
        v77 = v14[2];
        v19 = (float)(*v14 * v17) - (float)(v77 * *v13);
        v20 = (float)(v81 * v77) - (float)(v17 * v15);
        v21 = (float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v18 * v18);
        if ( v21 != 0.0 )
        {
          v22 = 1.0 / fsqrt(v21);
          v23 = (float)((float)((float)(v21 * v22) * v22) + -3.0) * (float)(v22 * -0.5);
          v20 = v20 * v23;
          v19 = v19 * v23;
          v18 = v18 * v23;
        }
        v24 = (float)((float)(v84 * v19) + (float)(v83 * v20)) + (float)(v85 * v18);
        v25 = v83 - (float)(v20 * v24);
        v26 = v85 - (float)(v18 * v24);
        v27 = v84 - (float)(v19 * v24);
        v28 = (float)((float)(v27 * v27) + (float)(v25 * v25)) + (float)(v26 * v26);
        if ( v28 != 0.0 )
        {
          v29 = 1.0 / fsqrt(v28);
          v30 = (float)((float)((float)(v28 * v29) * v29) + -3.0) * (float)(v29 * -0.5);
          v25 = v25 * v30;
          v27 = v27 * v30;
          v26 = v26 * v30;
        }
        v73 = (float)(1.0 - (float)((float)(v79 * v16) + (float)(v77 * v17))) - (float)(v81 * v15);
        v75 = (float)(1.0 - (float)((float)(v26 * v17) + (float)(v81 * v27))) - (float)(v25 * v16);
        v31 = (float)(1.0 - (float)((float)(v77 * v26) + (float)(v27 * v15))) - (float)(v79 * v25);
        if ( v75 <= v73 && v31 <= v73 )
        {
          v16 = v25;
          v15 = v27;
          v32 = (float)(1.0 - (float)((float)(v85 * v26) + (float)(v83 * v25))) - (float)(v84 * v27);
          v17 = v26;
        }
        else if ( v31 <= v75 )
        {
          v17 = v14[2];
          v16 = *v14;
          v32 = (float)(1.0 - (float)((float)(v85 * v77) + (float)(v84 * v15))) - (float)(v83 * v79);
        }
        else
        {
          v15 = v13[1];
          v32 = (float)(1.0 - (float)((float)(v85 * v17) + (float)(v83 * v16))) - (float)(v84 * v81);
        }
        if ( v59 > v32 )
        {
          v86 = v16;
          v43 = (uint32_t *)((char *)v49 + v55 + v69);
          v87 = v15;
          v88 = v17;
          v59 = v32;
        }
        ++v71;
        v69 += 12;
      }
      while ( v71 != v61 );
      if ( v43 != nullptr )
      {
        v33 = (uint32_t *)((char *)&v51[5 * *v43] + v57);
        if ( v64 != nullptr )
        {
          *v64 = v86;
          v64[1] = v87;
          v64[2] = v88;
        }
        LODWORD(v90[6]) = v39;
        LODWORD(v90[8]) = (uint32_t)(uintptr_t)(&v86);
        LODWORD(v90[7]) = (uint32_t)(uintptr_t)(v33);
        glitch::collada::CSphericalParametricController2d::computeBarycentricCoords((int)(uintptr_t)(v90));
        return glitch::collada::CParametricController2DBase::packClipWeights(v39, v33, v90, v45);
      }
      else
      {
        return 0;
      }
    }
    return result;
  }
  v6 = 0;
  v82 = 0;
  v80 = *(uint32_t *)(a1[11] + 52);
  while ( (float)((float)((float)(v5[1] * glitch::collada::CSphericalParametricController2d::GridPlaneNormals[3 * v6 + 1])
                        + (float)(*v5 * glitch::collada::CSphericalParametricController2d::GridPlaneNormals[3 * v6]))
                + (float)(v5[2] * glitch::collada::CSphericalParametricController2d::GridPlaneNormals[3 * v6 + 2])) <= 0.0 )
  {
LABEL_6:
    if ( ++v6 >= v80 )
      goto LABEL_7;
  }
  v38 = (int)(uintptr_t)(v4);
  SurfaceIndex = glitch::collada::CParametricController2DBase::getSurfaceIndex(v4, v6, (int)(uintptr_t)(v5), nullptr);
  v4 = (uint32_t *)v38;
  if ( SurfaceIndex == -1 )
  {
    v80 = *(uint32_t *)(*(uint32_t *)(v38 + 44) + 52);
    goto LABEL_6;
  }
  v34 = (uint32_t *)(*(uint32_t *)(v38 + 44) + *(uint32_t *)(*(uint32_t *)(v38 + 44) + 40) + 40 + 20 * SurfaceIndex);
  if ( v63 != nullptr )
  {
    *v63 = *(uint32_t *)v5;
    v63[1] = *((uint32_t *)v5 + 1);
    v63[2] = *((uint32_t *)v5 + 2);
  }
  glitch::collada::CSphericalParametricController2d::computeBarycentricCoords((int)(uintptr_t)(v89));
  return glitch::collada::CParametricController2DBase::packClipWeights(v38, v34, v89, v44);
}


// ============================================================================
// Address:   0xd07a60 (size: 108 bytes)
// Symbol:    _ZN6glitch7collada23CParametricController3dC2ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE
// Demangled: glitch::collada::CParametricController3d::CParametricController3d(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada23CParametricController3dC1ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE'
int glitch::collada::CParametricController3d::CParametricController3d(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  glitch::collada::CParametricControllerBase::Construct(a1, a2, a3, a4);
  *a1 = ((uint32_t)(uintptr_t)&off_206F8A8);
  v4 = *(uint32_t *)(a3 + 8);
  result = 0;
  if ( v4 != 0 )
    result = a3 + v4 + 8;
  a1[11] = result;
  return result;
}


// ============================================================================
// Address:   0xd07ad0 (size: 209 bytes)
// Symbol:    _ZN6glitch7collada34CCylindricalParametricController3DC2ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE
// Demangled: glitch::collada::CCylindricalParametricController3D::CCylindricalParametricController3D(glitch::collada::CColladaDatabase const&,glitch::collada::anim_pack::SParametricController const*,boost::intrusive_ptr<glitch::collada::IAnimationDictionary> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada34CCylindricalParametricController3DC1ERKNS0_16CColladaDatabaseEPKNS0_9anim_pack21SParametricControllerERKN5boost13intrusive_ptrINS0_20IAnimationDictionaryEEE'
float *glitch::collada::CCylindricalParametricController3D::Construct(
        float *a1,
        int a2,
        int a3,
        int a4)
{
  int v4;
  int *v5;
  int v6;
  float *v7;
  float *result;
  float v9; // xmm0_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4

  glitch::collada::CParametricController3d::CParametricController3d((uint32_t *)(a1), a2, a3, a4);
  a1[12] = 0.0;
  a1[13] = 0.0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206F868);
  a1[14] = 0.0;
  v4 = *(uint32_t *)(a3 + 8);
  v5 = nullptr;
  if ( v4 != 0 )
    v5 = (int *)(a3 + v4 + 8);
  v6 = *v5;
  v7 = (float *)((char *)v5 + *v5);
  result = nullptr;
  if ( v6 != 0 )
    result = v7;
  *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)(result);
  v9 = result[3];
  v10 = result[1];
  v11 = result[4];
  v12 = (float)(result[5] * *result) - (float)(result[2] * v9);
  v13 = (float)(v9 * v10) - (float)(v11 * *result);
  a1[12] = (float)(result[2] * v11) - (float)(result[5] * v10);
  a1[13] = v12;
  a1[14] = v13;
  return result;
}


// ============================================================================
// Address:   0xd07bb0 (size: 588 bytes)
// Symbol:    _ZNK6glitch7collada23CParametricController3d9getVolumeERKNS_4core8vector3dIfEERNS2_8vector4dIfEE
// Demangled: glitch::collada::CParametricController3d::getVolume(glitch::core::vector3d<float> const&,glitch::core::vector4d<float> &)const
// ============================================================================
float *glitch::collada::CParametricController3d::getVolume(int a1, float *a2, float *a3)
{
  int v3;
  float v4; // xmm4_4
  float v5; // xmm5_4
  float *result;
  float v7; // xmm6_4
  int v8;
  int v9;
  int v10;
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  uint32_t *v14;
  int v15;
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  int v22;
  int v23;
  int v24;
  float v25;

  v3 = *(uint32_t *)(a1 + 44);
  v4 = *a2 - *(float *)(v3 + 40);
  if ( v4 < 0.0 )
    return nullptr;
  v5 = a2[1] - *(float *)(v3 + 44);
  if ( v5 < 0.0 )
    return nullptr;
  v7 = a2[2] - *(float *)(v3 + 48);
  if ( v7 < 0.0 )
    return nullptr;
  v22 = *(uint32_t *)(v3 + 28);
  v23 = (int)(float)(v4 / *(float *)(v3 + 76));
  result = nullptr;
  if ( v23 < v22 )
  {
    v24 = (int)(float)(v5 / *(float *)(v3 + 80));
    v8 = *(uint32_t *)(v3 + 32);
    if ( v24 < v8 )
    {
      v9 = (int)(float)(v7 / *(float *)(v3 + 84));
      if ( v9 < *(uint32_t *)(v3 + 36) )
      {
        v10 = v23 + v22 * (v24 + v9 * v8);
        v11 = v4 / *(float *)(v3 + 64);
        v12 = v5 / *(float *)(v3 + 68);
        v13 = v7 / *(float *)(v3 + 72);
        if ( v10 != -1 )
        {
          v14 = (uint32_t *)(v3 + *(uint32_t *)(v3 + 100) + 100 + 8 * v10);
          if ( (int)v14[1] > 0 )
          {
            v15 = 0;
            LODWORD(v25) = glitch::collada::IParametricController::EPSILON_NEAR_ZERO ^ 0x80000000;
            while ( 1 )
            {
              result = (float *)(v3
                               + 88
                               + *(uint32_t *)(v3 + 92)
                               + 4
                               + 72 * *(uint16_t *)(*(uint32_t *)(v3 + 108) + v3 + 2 * (*v14 + v15) + 108));
              v16 = (float)((float)((float)(result[17] * v13) + (float)(result[13] * v12)) + result[5])
                  + (float)(result[9] * v11);
              v17 = (float)((float)((float)(result[16] * v13) + (float)(result[12] * v12)) + result[4])
                  + (float)(result[8] * v11);
              v18 = (float)((float)((float)(result[15] * v13) + (float)(result[11] * v12)) + result[3])
                  + (float)(result[7] * v11);
              v19 = result[6] * v11;
              v20 = (float)((float)(result[14] * v13) + (float)(result[10] * v12)) + result[2];
              a3[1] = v18;
              a3[2] = v17;
              a3[3] = v16;
              v21 = v20 + v19;
              *a3 = v21;
              if ( v21 >= v25 && v18 >= v25 && v17 >= v25 && v16 >= v25 )
                break;
              if ( v14[1] <= ++v15 )
                return nullptr;
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd07e00 (size: 518 bytes)
// Symbol:    _ZNK6glitch7collada23CParametricController3d15packClipWeightsERKNS0_9anim_pack11SGridVolumeERKNS_4core8vector4dIfEEPNS0_11SClipWeightE
// Demangled: glitch::collada::CParametricController3d::packClipWeights(glitch::collada::anim_pack::SGridVolume const&,glitch::core::vector4d<float> const&,glitch::collada::SClipWeight *)const
// ============================================================================
int glitch::collada::CParametricController3d::packClipWeights(int a1, uint32_t *a2, float *a3, float *a4)
{
  uint32_t *v4;
  int v5;
  float v6; // xmm6_4
  float *v7;
  float v8; // xmm3_4
  float v9; // xmm5_4
  float *v10;
  float *v11;
  float *v12;
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  char *v17;
  int v18;
  float v19; // xmm3_4
  int result;
  float *v21;
  int v22;
  int v23;
  float *v24;
  float v25; // xmm0_4
  float *v26;
  int v27;
  int v28;
  float v29[7];

  v4 = *(uint32_t **)(a1 + 44);
  v5 = (int)(uintptr_t)(v4) + v4[4] + 16;
  v6 = a3[3];
  v7 = (float *)(v5 + 16 * *(uint32_t *)((char *)&v4[4 * a2[1] + 8] + v4[6]));
  v8 = a3[2];
  v9 = a3[1];
  v10 = (float *)(v5 + 16 * *(uint32_t *)((char *)&v4[4 * a2[1] + 9] + v4[6]));
  v11 = (float *)(v5 + 16 * *(uint32_t *)((char *)&v4[4 * a2[1] + 7] + v4[6]));
  v12 = (float *)((char *)&v4[4 * *(uint32_t *)((char *)&v4[4 * a2[1] + 6] + v4[6]) + 4] + v4[4]);
  v13 = (float)((float)((float)(v7[3] * v8) + (float)(v6 * v10[3])) + (float)(v11[3] * v9)) + (float)(v12[3] * *a3);
  v14 = (float)((float)((float)(v7[2] * v8) + (float)(v10[2] * v6)) + (float)(v11[2] * v9)) + (float)(v12[2] * *a3);
  v15 = (float)((float)(v7[1] * v8) + (float)(v10[1] * v6)) + (float)(v11[1] * v9);
  v16 = v12[1] * *a3;
  v29[0] = (float)((float)((float)(v8 * *v7) + (float)(v6 * *v10)) + (float)(v9 * *v11)) + (float)(*a3 * *v12);
  v17 = (char *)v4 + v4[2];
  v28 = 0;
  v29[2] = v14;
  v29[3] = v13;
  v18 = 16 * *a2;
  v29[1] = v15 + v16;
  v19 = glitch::collada::IParametricController::EPSILON_NEAR_ZERO;
  v27 = (int)(uintptr_t)(&v17[v18 + 8]);
  result = 0;
  do
  {
    if ( result != 0 )
    {
      v21 = a4;
      v22 = *(uint32_t *)(v27 + 4 * v28);
      if ( *(uint32_t *)a4 == v22 )
      {
LABEL_11:
        v21[1] = v21[1] + v29[v28];
        goto LABEL_9;
      }
      v23 = 0;
      v24 = a4 + 2;
      while ( ++v23 != result )
      {
        v21 = v24;
        v24 += 2;
        if ( v22 == *((uint32_t *)v24 - 2) )
          goto LABEL_11;
      }
    }
    v25 = v29[v28];
    if ( fabs(v25) > v19 )
    {
      v26 = &a4[2 * result++];
      *v26 = *(float *)(v27 + 4 * v28);
      v26[1] = v25;
    }
LABEL_9:
    ++v28;
  }
  while ( v28 != 4 );
  return result;
}


// ============================================================================
// Address:   0xd08010 (size: 192 bytes)
// Symbol:    _ZN6glitch7collada23CParametricController3d14getClipWeightsERKNS_4core8vector3dIfEEPNS0_11SClipWeightEPS4_
// Demangled: glitch::collada::CParametricController3d::getClipWeights(glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *,glitch::core::vector3d<float>*)
// ============================================================================
int glitch::collada::CParametricController3d::getClipWeights(int *a1, uint32_t *a2, float *a3, uint32_t *a4)
{
  int v4;
  float *Volume;
  int result;
  typedef float _g4_t_v7[3];
  typedef float _g4_t_v8[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v8)) > _g4_s1 ? (20u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);

  if ( a4 != nullptr )
  {
    *a4 = *a2;
    a4[1] = a2[1];
    a4[2] = a2[2];
  }
  v4 = *a1;
  memset(v8, 0, 16);
  (*(void (**)(float *))(v4 + 28))(v7);
  Volume = glitch::collada::CParametricController3d::getVolume((int)(uintptr_t)(a1), v7, v8);
  result = 0;
  if ( Volume != nullptr )
    return glitch::collada::CParametricController3d::packClipWeights((int)(uintptr_t)(a1), (uint32_t *)(Volume), v8, a3);
  return result;
}


// ============================================================================
// Address:   0xd080d0 (size: 270 bytes)
// Symbol:    _ZN6glitch7collada34CCylindricalParametricController3D14getClipWeightsERKNS_4core8vector3dIfEEPNS0_11SClipWeightEPS4_
// Demangled: glitch::collada::CCylindricalParametricController3D::getClipWeights(glitch::core::vector3d<float> const&,glitch::collada::SClipWeight *,glitch::core::vector3d<float>*)
// ============================================================================
int glitch::collada::CCylindricalParametricController3D::getClipWeights(
        int *a1,
        uint32_t *a2,
        float *a3,
        uint32_t *a4)
{
  int *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  float *Volume;
  __m128 v10; // xmm0
  typedef float *_g4_t_v11;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v14)) > _g4_s3 ? (32u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  LODWORD(v14[6]) = (uint32_t)(uintptr_t)(&a1);
  v4 = a1;
  v11 = a3;
  v5 = a4;
  v6 = a2;
  if ( a4 != nullptr )
  {
    *a4 = *a2;
    v5[1] = v6[1];
    v5[2] = v6[2];
  }
  v7 = *v4;
  memset(v14, 0, 16);
  (*(void (**)(float *))(v7 + 28))(&v12);
  Volume = glitch::collada::CParametricController3d::getVolume((int)(uintptr_t)(v4), &v12, v14);
  if ( Volume != nullptr )
    return glitch::collada::CParametricController3d::packClipWeights((int)(uintptr_t)(v4), (uint32_t *)(Volume), v14, v11);
  v10 = _mm_cmplt_ss(g4_to_m128(_mm_cvtsi32_si128(0)), g4_to_m128(LODWORD(v13)));
  v13 = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v10, g4_to_m128(0x40C90FDBu)), 0) |g4_m128_lane<int32_t>(v10, 0) & 0xC0C90FDB) + v13;
  Volume = glitch::collada::CParametricController3d::getVolume((int)(uintptr_t)(v4), &v12, v14);
  if ( Volume != nullptr )
    return glitch::collada::CParametricController3d::packClipWeights((int)(uintptr_t)(v4), (uint32_t *)(Volume), v14, v11);
  else
    return 0;
}


// ============================================================================
// Address:   0xd081e0 (size: 315 bytes)
// Symbol:    _ZNK6glitch7collada34CCylindricalParametricController3D14getClipWeightsERKNS_4core8vector3dIfEERKNS2_8vector4dIfEEPNS0_11SClipWeightE
// Demangled: glitch::collada::CCylindricalParametricController3D::getClipWeights(glitch::core::vector3d<float> const&,glitch::core::vector4d<float> const&,glitch::collada::SClipWeight *)const
// ============================================================================
int glitch::collada::CCylindricalParametricController3D::getClipWeights(int a1, int a2, float *a3, float *a4)
{
  int v4;
  float *v5;
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float *Volume;
  __m128 v12; // xmm0
  typedef float *_g4_t_v13;
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef uint8_t _g4_t_v17[4];
  typedef float _g4_t_v18;
  typedef float _g4_t_v19[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v17)) > _g4_s4 ? (36u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v18)) > _g4_s5 ? (40u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v19)) > _g4_s6 ? (48u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  LODWORD(v19[6]) = (uint32_t)(uintptr_t)(&a1);
  v4 = a1;
  v5 = a3;
  v13 = a4;
  (*(void (**)(uint8_t *))(*(uint32_t *)a1 + 28))(v17);
  v6 = v5[3];
  v7 = v5[2];
  v8 = *v5;
  v15 = v18;
  v9 = v5[1] + v5[1];
  v16 = v6 + v7;
  memset(v19, 0, 16);
  v14 = (float)((float)(v8 + v7) + (float)(v6 + v6)) + v9;
  Volume = glitch::collada::CParametricController3d::getVolume(v4, &v14, v19);
  if ( Volume != nullptr )
    return glitch::collada::CParametricController3d::packClipWeights(v4, (uint32_t *)(Volume), v19, v13);
  v12 = _mm_cmplt_ss(g4_to_m128(_mm_cvtsi32_si128(0)), g4_to_m128(LODWORD(v15)));
  v15 = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v12, g4_to_m128(0x40C90FDBu)), 0) |g4_m128_lane<int32_t>(v12, 0) & 0xC0C90FDB) + v15;
  Volume = glitch::collada::CParametricController3d::getVolume(v4, &v14, v19);
  if ( Volume != nullptr )
    return glitch::collada::CParametricController3d::packClipWeights(v4, (uint32_t *)(Volume), v19, v13);
  else
    return 0;
}


// ============================================================================
// Address:   0xd08320 (size: 53 bytes)
// Symbol:    _ZN6glitch7collada19SEffectTechniqueMapC2Ev
// Demangled: glitch::collada::SEffectTechniqueMap::SEffectTechniqueMap(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada19SEffectTechniqueMapC1Ev'
struct glitch::collada::SEffectTechniqueMap::Self *glitch::collada::SEffectTechniqueMap::Construct(
        glitch::collada::SEffectTechniqueMap::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  return self;
}


// ============================================================================
// Address:   0xd08360 (size: 65 bytes)
// Symbol:    _ZN6glitch7collada19SEffectTechniqueMapD2Ev
// Demangled: glitch::collada::SEffectTechniqueMap::~SEffectTechniqueMap()
// ============================================================================
// Alternative name is '_ZN6glitch7collada19SEffectTechniqueMapD1Ev'
void glitch::collada::SEffectTechniqueMap::Destroy(glitch::collada::SEffectTechniqueMap::Self *self)
{
  void (*v1)(uint32_t, uint32_t);
  void (*v2)(uint32_t, uint32_t);

  if ( *((uint32_t *)self + 6) != 0 )
  {
    v1 = *((void (**)(uint32_t, uint32_t))self + 1);
    if ( v1 != nullptr )
      v1(*(uint32_t *)self, *((uint32_t *)self + 2));
    v2 = *((void (**)(uint32_t, uint32_t))self + 4);
    if ( v2 != nullptr )
      v2(*((uint32_t *)self + 3), *((uint32_t *)self + 5));
  }
}


// ============================================================================
// Address:   0xd083b0 (size: 57 bytes)
// Symbol:    _ZN6glitch7collada19SEffectTechniqueMap3setEjPPKcPFvS4_PvES5_PhPFvS8_S5_ES5_
// Demangled: glitch::collada::SEffectTechniqueMap::set(unsigned int,char const**,void (*)(char const**,void *),void *,unsigned char *,void (*)(unsigned char *,void *),void *)
// ============================================================================
glitch::collada::SEffectTechniqueMap::Self *glitch::collada::SEffectTechniqueMap::set(
        glitch::collada::SEffectTechniqueMap::Self *self,
        unsigned int a2,
        const char **a3,
        void (*a4)(const char **, void *),
        void *a5,
        uint8_t *a6,
        void (*a7)(uint8_t *, void *),
        void *a8)
{
  glitch::collada::SEffectTechniqueMap::Self *result;

  result = self;
  if ( a2 != 0 )
  {
    *((uint32_t *)self + 6) = a2;
    *(uint32_t *)self = (uint32_t)(uintptr_t)(a3);
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a4);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a5);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a6);
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a7);
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a8);
  }
  return result;
}


// ============================================================================
// Address:   0xd083f0 (size: 233 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory29getEffectPlatformTechniqueMapERKNS0_16CColladaDatabaseEPNS0_7SEffectERNS0_21SPlatformTechniqueMapERNS0_19SEffectTechniqueMapE
// Demangled: glitch::collada::CColladaFactory::getEffectPlatformTechniqueMap(glitch::collada::CColladaDatabase const&,glitch::collada::SEffect *,glitch::collada::SPlatformTechniqueMap &,glitch::collada::SEffectTechniqueMap &)
// ============================================================================
glitch::collada::SEffectTechniqueMap::Self *glitch::collada::CColladaFactory::getEffectPlatformTechniqueMap(
        int a1,
        glitch::collada::SEffectTechniqueMap::Self *a2,
        int a3,
        uint8_t *a4,
        glitch::collada::SEffectTechniqueMap::Self *a5)
{
  glitch::collada::SEffectTechniqueMap::Self *result;
  int v6;
  unsigned int v7;
  const char **v8;
  int i;
  int v10;

  result = a2;
  if ( *((uint32_t *)a4 + 4) != 0 )
  {
    v6 = (*(int (**)(uint32_t *))(**((uint32_t **)a2 + 1) + 40))(*((uint32_t **)a2 + 1));
    v7 = *((uint32_t *)a4 + 2);
    v10 = v6;
    v8 = (const char **)glitch::core::allocProcessBuffer(4 * v7, (int)(uintptr_t)(a2));
    if ( v7 != 0 )
    {
      for ( i = 0; i != v7; ++i )
        v8[i] = *(const char **)&a4[4 * i + 12 + *((uint32_t *)a4 + 3)];
    }
    return glitch::collada::SEffectTechniqueMap::set(
             a5,
             v7,
             v8,
             (void (*)(const char **, void *))sub_CFDAD0,
             nullptr,
             &a4[*((uint32_t *)a4 + 5) + 20 + v7 * v10],
             nullptr,
             nullptr);
  }
  return result;
}


// ============================================================================
// Address:   0xd084e0 (size: 409 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory18initParticleSystemERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverEPNS0_12SGNPSEmitterERKN5boost13intrusive_ptrINS0_31CParticleSystemEmitterSceneNodeEEE
// Demangled: glitch::collada::CColladaFactory::initParticleSystem(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SGNPSEmitter *,boost::intrusive_ptr<glitch::collada::CParticleSystemEmitterSceneNode> const&)
// ============================================================================
volatile int32_t *glitch::collada::CColladaFactory::initParticleSystem(
        int a1,
        glitch::video::IVideoDriver::Self *a2,
        const char *a3,
        int a4,
        uint32_t *a5)
{
  volatile int32_t *result;
  const char *v6;
  uint32_t *v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef volatile int32_t *_g4_t_v13;
  typedef volatile int32_t *_g4_t_v14;
  typedef volatile int32_t *_g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef volatile int32_t *_g4_t_v17;
  typedef uint32_t _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v18[3] = (uint32_t)(uintptr_t)(&a1);
  result = (volatile int32_t *)a4;
  v6 = a3;
  v7 = a5;
  v8 = *(uint8_t *)(a4 + 92);
  if ( v8 != 0 )
  {
    if ( v8 == 1 )
    {
      glitch::collada::CColladaDatabase::constructGeometry((glitch::collada::CColladaDatabase::Self *)&v17, a2, a3);
      v14 = v17;
      if ( v17 != nullptr )
      {
        v13 = v17 + 1;
        sub_8B1B00(v17 + 1);
        if ( v17 != nullptr )
          sub_5459C0(v17);
        v15 = v14;
        sub_8B1B00(v13);
      }
      else
      {
        v15 = nullptr;
      }
      glitch::collada::CParticleSystemEmitterSceneNode::initParticleSystem(*v7, v6, 0, &v15);
      result = v15;
      if ( v15 != nullptr )
        result = (volatile int32_t *)sub_5459C0(v15);
      if ( v14 != nullptr )
        return (volatile int32_t *)sub_5459C0(v14);
    }
    else if ( v8 == 2 )
    {
      v12 = *a5;
      v18[0] = 0;
      glitch::collada::CParticleSystemEmitterSceneNode::initParticleSystem(v12, a3, 131075, v18);
      result = (volatile int32_t *)v18[0];
      if ( v18[0] != 0 )
        return (volatile int32_t *)sub_5459C0(result);
    }
  }
  else
  {
    v9 = *(uint32_t *)(a4 + 96);
    v10 = 0;
    v16 = nullptr;
    if ( v9 != 0 )
      v10 = a4 + v9 + 96;
    v11 = -(*(uint8_t *)(v10 + 2) == 0);
    LOWORD(v11) = 0;
    glitch::collada::CParticleSystemEmitterSceneNode::initParticleSystem(*a5, a3, v11 + 196611, &v16);
    result = v16;
    if ( v16 != nullptr )
      return (volatile int32_t *)sub_5459C0(result);
  }
  return result;
}


// ============================================================================
// Address:   0xd08680 (size: 183 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory29createGlitchNewParticleSystemERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverEPNS0_12SGNPSEmitterEPNS_3res6vectorINSA_6StringEEEPNS0_14CRootSceneNodeE
// Demangled: glitch::collada::CColladaFactory::createGlitchNewParticleSystem(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SGNPSEmitter *,glitch::res::vector<glitch::res::String> *,glitch::collada::CRootSceneNode *)
// ============================================================================
glitch::IObject::Self **glitch::collada::CColladaFactory::createGlitchNewParticleSystem(
        glitch::IObject::Self **a1,
        int a2,
        glitch::video::IVideoDriver::Self *a3,
        const char *a4,
        int a5,
        int a6,
        int a7)
{
  glitch::IObject::Self *v8;

  v8 = (glitch::IObject::Self *)operator new(0x160u);
  glitch::collada::CParticleSystemEmitterSceneNode::Construct(v8, (int)(uintptr_t)(a3), a5, a6, a7);
  *a1 = v8;
  if ( v8 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v8 + *(uint32_t *)(*(uint32_t *)v8 - 16) + 4));
  glitch::collada::CColladaFactory::initParticleSystem(a2, a3, a4, a5, (uint32_t *)(a1));
  return a1;
}


// ============================================================================
// Address:   0xd08740 (size: 34 bytes)
// Symbol:    _ZN6glitch7collada25CColladaFactoryChooseSkinC2EPFbRKNS_5video10STechniqueEjE
// Demangled: glitch::collada::CColladaFactoryChooseSkin::CColladaFactoryChooseSkin(bool (*)(glitch::video::STechnique const&,unsigned int))
// ============================================================================
// Alternative name is '_ZN6glitch7collada25CColladaFactoryChooseSkinC1EPFbRKNS_5video10STechniqueEjE'
glitch::collada::CColladaFactoryChooseSkin *glitch::collada::CColladaFactoryChooseSkin::Construct(
        glitch::collada::CColladaFactoryChooseSkin *self,
        bool (*a2)(const glitch::video::STechnique::Self *, unsigned int))
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206F9E8);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  return self;
}


// ============================================================================
// Address:   0xd08770 (size: 69 bytes)
// Symbol:    _ZN6glitch7collada28CColladaFactoryCommonSkinnedC2Ev
// Demangled: glitch::collada::CColladaFactoryCommonSkinned::CColladaFactoryCommonSkinned(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada28CColladaFactoryCommonSkinnedC1Ev'
void (**glitch::collada::CColladaFactoryCommonSkinned::Construct(
        glitch::collada::CColladaFactoryCommonSkinned::Self *self))(glitch::collada::CColladaFactoryCommonSkinned::Self *__hidden self)
{
  glitch::collada::CColladaFactoryChooseSkin::Construct(
    (glitch::collada::CColladaFactoryChooseSkin *)(self),
    (bool (*)(const glitch::video::STechnique::Self *, unsigned int))glitch::collada::detail::CHardwareMatrixSkinTechnique::checkAvailabilityStatic);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2071048);
  return (void (**)(glitch::collada::CColladaFactoryCommonSkinned::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2071048));
}


// ============================================================================
// Address:   0xd087c0 (size: 34 bytes)
// Symbol:    _ZN6glitch7collada26CColladaFactoryWrapperBaseC2EPNS0_15CColladaFactoryE
// Demangled: glitch::collada::CColladaFactoryWrapperBase::CColladaFactoryWrapperBase(glitch::collada::CColladaFactory *)
// ============================================================================
// Alternative name is '_ZN6glitch7collada26CColladaFactoryWrapperBaseC1EPNS0_15CColladaFactoryE'
glitch::collada::CColladaFactoryWrapperBase::Self *glitch::collada::CColladaFactoryWrapperBase::Construct(
        glitch::collada::CColladaFactoryWrapperBase::Self *self,
        glitch::collada::CColladaFactory::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206FAE8);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  return self;
}


// ============================================================================
// Address:   0xd087f0 (size: 136 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh13getCategoryIdEPKc
// Demangled: glitch::collada::CModularSkinnedMesh::getCategoryId(char const*)const
// ============================================================================
int glitch::collada::CModularSkinnedMesh::getCategoryId(glitch::collada::CModularSkinnedMesh::Self *self, char *s2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v2 = -1;
  v3 = *((int **)self + 43);
  v8 = *v3;
  if ( *v3 > 0 )
  {
    v2 = 0;
    v4 = v3[1] + 4;
    while ( 1 )
    {
      v7 = v4;
      v5 = strcmp(*(const char **)((char *)&v3[4 * v2] + v4), s2);
      v4 = v7;
      if ( v5 == 0 )
        break;
      if ( ++v2 == v8 )
        return -1;
    }
  }
  return v2;
}


// ============================================================================
// Address:   0xd08880 (size: 34 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh15getCategoryNameEi
// Demangled: glitch::collada::CModularSkinnedMesh::getCategoryName(int)const
// ============================================================================
int glitch::collada::CModularSkinnedMesh::getCategoryName(glitch::collada::CModularSkinnedMesh::Self *self, int a2)
{
  uint32_t *v2;
  int result;

  v2 = *((uint32_t **)self + 43);
  result = 0;
  if ( *v2 > a2 )
    return *(uint32_t *)((char *)&v2[4 * a2 + 1] + v2[1]);
  return result;
}


// ============================================================================
// Address:   0xd088b0 (size: 182 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh11getModuleIdEPKc
// Demangled: glitch::collada::CModularSkinnedMesh::getModuleId(char const*)const
// ============================================================================
int glitch::collada::CModularSkinnedMesh::getModuleId(glitch::collada::CModularSkinnedMesh::Self *self, char *s2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;

  v2 = -1;
  v3 = *((int **)self + 43);
  v13 = *v3;
  if ( *v3 > 0 )
  {
    v12 = 0;
    v14 = (int)(uintptr_t)(v3) + v3[1] + 4;
    while ( 1 )
    {
      v4 = v14 + 16 * v12;
      v11 = *(uint32_t *)(v4 + 8);
      if ( v11 > 0 )
        break;
LABEL_10:
      if ( ++v12 == v13 )
        return -1;
    }
    v2 = 0;
    v5 = v4 + *(uint32_t *)(v4 + 12) + 12;
    while ( 1 )
    {
      v6 = v5 + 8 * v2;
      v7 = 0;
      v8 = *(uint32_t *)(v6 + 4);
      v9 = v6 + v8 + 4;
      if ( v8 != 0 )
        v7 = v9;
      if ( strcmp(*(const char **)(v7 + 4), s2) == 0 )
        break;
      if ( ++v2 == v11 )
        goto LABEL_10;
    }
  }
  return v2;
}


// ============================================================================
// Address:   0xd08970 (size: 160 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh11getModuleIdEiPKc
// Demangled: glitch::collada::CModularSkinnedMesh::getModuleId(int,char const*)const
// ============================================================================
int glitch::collada::CModularSkinnedMesh::getModuleId(
        glitch::collada::CModularSkinnedMesh::Self *self,
        int a2,
        char *s2)
{
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;

  v3 = -1;
  v4 = *((uint32_t **)self + 43);
  if ( *v4 > a2 )
  {
    v5 = (int)(uintptr_t)(&v4[4 * a2 + 1]) + v4[1];
    v12 = *(uint32_t *)(v5 + 8);
    if ( v12 > 0 )
    {
      v3 = 0;
      v6 = v5 + *(uint32_t *)(v5 + 12) + 12;
      while ( 1 )
      {
        v7 = v6 + 8 * v3;
        v8 = 0;
        v9 = *(uint32_t *)(v7 + 4);
        v10 = v7 + v9 + 4;
        if ( v9 != 0 )
          v8 = v10;
        if ( strcmp(*(const char **)(v8 + 4), s2) == 0 )
          break;
        if ( ++v3 == v12 )
          return -1;
      }
    }
  }
  return v3;
}


// ============================================================================
// Address:   0xd08a10 (size: 75 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh13getModuleNameEii
// Demangled: glitch::collada::CModularSkinnedMesh::getModuleName(int,int)const
// ============================================================================
int glitch::collada::CModularSkinnedMesh::getModuleName(
        glitch::collada::CModularSkinnedMesh::Self *self,
        int a2,
        int a3)
{
  uint32_t *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  v3 = *((uint32_t **)self + 43);
  result = 0;
  if ( *v3 > a2 )
  {
    v5 = (int)(uintptr_t)(&v3[4 * a2 + 1]) + v3[1];
    if ( *(uint32_t *)(v5 + 8) > a3 )
    {
      v6 = v5 + *(uint32_t *)(v5 + 12) + 12 + 8 * a3;
      v7 = *(uint32_t *)(v6 + 4);
      v8 = v6 + v7 + 4;
      if ( v7 == 0 )
        v8 = 0;
      return *(uint32_t *)(v8 + 4);
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd08a60 (size: 2090 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh18findBiggestModulesEiRSt4listISt4pairIN5boost13intrusive_ptrINS_5video9CMaterialEEES3_IjjEESaISA_EE
// Demangled: glitch::collada::CModularSkinnedMesh::findBiggestModules(int,std::list<std::pair<boost::intrusive_ptr<glitch::video::CMaterial>,std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<boost::intrusive_ptr<glitch::video::CMaterial>,std::pair<unsigned int,unsigned int>>>> &)
// ============================================================================
void glitch::collada::CModularSkinnedMesh::findBiggestModules(int a1, int a2, uint32_t *a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *j;
  glitch::video::CMaterialRenderer::Self *v12;
  int v13;
  int v14;
  bool v15; // cc
  int v16;
  glitch::video::CMaterial::Self *v17;
  unsigned int v18;
  glitch::video::CMaterialRenderer::Self *v19;
  int v20;
  int v21;
  glitch::video::CMaterial::Self *v22;
  int v23;
  int v24;
  int v25;
  char v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  int v33;
  glitch::video::CVertexStreams::Self *v34;
  unsigned int v35;
  unsigned int v36;
  glitch::video::CMaterial::Self *v37;
  bool v38;
  volatile int32_t *v39;
  uint64_t v40; // rax
  volatile int32_t *v41;
  uint64_t v42; // rax
  glitch::video::CMaterial::Self *v43;
  glitch::video::CVertexStreams::Self *v44;
  int v45;
  int v46;
  glitch::video::CMaterial::Self *v47;
  glitch::video::CMaterial::Self *v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef volatile int32_t *_g4_t_v54;
  typedef volatile int32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef volatile int32_t *_g4_t_v60;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v62;
  typedef char _g4_t_v63[4];
  typedef char _g4_t_v64[4];
  typedef int _g4_t_v65;
  typedef char _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef glitch::video::CMaterial::Self *_g4_t_v70;
  typedef glitch::video::CMaterial::Self *_g4_t_v71;
  typedef glitch::video::CMaterial::Self *_g4_t_v72;
  typedef glitch::video::CMaterial::Self *_g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint8_t _g4_t_Technique;
  typedef char _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef volatile int32_t *_g4_t_v79;
  typedef uint32_t *_g4_t_v80;
  typedef glitch::video::CMaterial::Self *_g4_t_v81;
  typedef volatile int32_t *_g4_t_v82;
  typedef volatile int32_t *_g4_t_v83;
  typedef volatile int32_t *_g4_t_v84;
  typedef uint32_t _g4_t_v85[2];
  typedef uint32_t _g4_t_v86[11];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v49)) > _g4_s0 ? (12u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v50)) > _g4_s1 ? (12u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v51)) > _g4_s2 ? (16u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v52)) > _g4_s3 ? (20u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v53)) > _g4_s4 ? (48u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v54)) > _g4_s5 ? (52u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v55)) > _g4_s6 ? (52u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v56)) > _g4_s7 ? (60u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v57)) > _g4_s8 ? (64u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v58)) > _g4_s9 ? (68u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v59)) > _g4_s10 ? (72u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v60)) > _g4_s11 ? (76u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_i)) > _g4_s12 ? (80u + sizeof(_g4_t_i)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v62)) > _g4_s13 ? (84u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v63)) > _g4_s14 ? (88u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v64)) > _g4_s15 ? (88u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v65)) > _g4_s16 ? (92u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v66)) > _g4_s17 ? (92u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v67)) > _g4_s18 ? (96u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v68)) > _g4_s19 ? (100u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v69)) > _g4_s20 ? (100u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v70)) > _g4_s21 ? (104u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v71)) > _g4_s22 ? (104u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v72)) > _g4_s23 ? (108u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v73)) > _g4_s24 ? (108u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v74)) > _g4_s25 ? (112u + sizeof(_g4_t_v74)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v75)) > _g4_s26 ? (116u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_Technique)) > _g4_s27 ? (116u + sizeof(_g4_t_Technique)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v77)) > _g4_s28 ? (116u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v78)) > _g4_s29 ? (116u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v79)) > _g4_s30 ? (120u + sizeof(_g4_t_v79)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v80)) > _g4_s31 ? (136u + sizeof(_g4_t_v80)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v81)) > _g4_s32 ? (152u + sizeof(_g4_t_v81)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v82)) > _g4_s33 ? (160u + sizeof(_g4_t_v82)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v83)) > _g4_s34 ? (164u + sizeof(_g4_t_v83)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v84)) > _g4_s35 ? (168u + sizeof(_g4_t_v84)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v85)) > _g4_s36 ? (172u + sizeof(_g4_t_v85)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v86)) > _g4_s37 ? (180u + sizeof(_g4_t_v86)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 84u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 88u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 92u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 92u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 100u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 100u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 104u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 104u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 108u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 108u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 112u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 116u);
  _g4_t_Technique &Technique = *reinterpret_cast<_g4_t_Technique *>(_g4_sf + 116u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 116u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 116u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 120u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 136u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 152u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 160u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 164u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 168u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 172u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 180u);

  v86[7] = (uint32_t)(uintptr_t)(&a1);
  v57 = (uint32_t *)a1;
  v3 = a2;
  v62 = a3;
  glitch::collada::CColladaFactoryWrapperBase::Construct(
    (glitch::collada::CColladaFactoryWrapperBase::Self *)v85,
    *(glitch::collada::CColladaFactory::Self **)(a1 + 16));
  v85[0] = ((uint32_t)(uintptr_t)&off_2071168);
  v4 = v57;
  v86[0] = v57[3];
  if ( v86[0] != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v86[0] + 4));
    v4 = v57;
  }
  v86[1] = (uint32_t)(uintptr_t)(v85);
  v5 = v4[43];
  memset(&v86[2], 0, 12);
  v56 = 16 * v3;
  v6 = *(uint32_t *)(v5 + 4);
  if ( *(int *)(16 * v3 + v5 + v6 + 12) > 0 )
  {
    v58 = 0;
    do
    {
      v80 = (uint32_t *)v57[44];
      if ( v80 != nullptr )
      {
        sub_8B1B00((uint32_t *)((char *)v80 + *(uint32_t *)(*v80 - 16) + 4));
        v5 = v57[43];
        v6 = *(uint32_t *)(v5 + 4);
      }
      v7 = v56 + v5 + v6 + 4 + *(uint32_t *)(v56 + v5 + v6 + 4 + 12) + 12 + 8 * v58;
      v8 = 0;
      v9 = *(uint32_t *)(v7 + 4);
      v10 = v7 + v9 + 4;
      if ( v9 != 0 )
        v8 = v10;
      v52 = v8;
      v51 = *(uint32_t *)(*(uint32_t *)(glitch::collada::CResFileManager::Inst + 32) + 8);
      glitch::collada::CColladaDatabase::constructController(&v79);
      if ( v80 != nullptr )
        sub_5459C0((uint32_t *)((char *)v80 + *(uint32_t *)(*v80 - 16)));
      v59 = (*(int (**)(volatile int32_t *, uint32_t *, int, int, uint32_t **, int))(*v79 + 16))(
              v79,
              v86,
              v51,
              v52,
              &v80,
              1);
      if ( v59 == 0 )
        goto LABEL_55;
      for ( i = 0; i != v59; ++i )
      {
        (*(void (**)(glitch::video::CMaterial::Self **))(*v79 + 24))(&v81);
        (*(void (**)(volatile int32_t **))(*v79 + 20))(&v82);
        v60 = v82;
        if ( v82 != nullptr )
          sub_5459C0(v82);
        for ( j = v62; ; j = v74 )
        {
          v74 = (uint32_t *)*j;
          if ( (uint32_t *)*j == v62 )
            goto LABEL_69;
          v72 = v81;
          v17 = (glitch::video::CMaterial::Self *)v74[2];
          v70 = v17;
          Technique = glitch::video::CMaterial::getTechnique(v81);
          *(uint32_t *)v63 = Technique;
          v18 = (uint8_t)glitch::video::CMaterial::getTechnique(v17);
          v19 = *((glitch::video::CMaterialRenderer::Self **)v70 + 1);
          v68 = 12 * v18;
          v20 = *((uint32_t *)v19 + 6) + 12 * v18;
          v15 = *(uint8_t *)(v20 + 8) <= 1u;
          v21 = *(uint32_t *)(v20 + 4);
          if ( !v15 || *(uint8_t *)(v21 + 55) != 0 )
          {
            v65 = 4 * v18;
            *(uint32_t *)(*((uint32_t *)v19 + 10) + 4 * v18) = *(uint16_t *)(*(uint32_t *)(v21 + 32) + 46) << 16;
            glitch::video::CMaterialRenderer::updateRenderStateHashCode(v19, v18);
          }
          else
          {
            v65 = 4 * v18;
          }
          v53 = *(uint32_t *)(*((uint32_t *)v19 + 10) + v65);
          v12 = *((glitch::video::CMaterialRenderer::Self **)v72 + 1);
          v13 = Technique;
          v67 = 12 * Technique;
          v14 = *((uint32_t *)v12 + 6) + v67;
          v15 = *(uint8_t *)(v14 + 8) <= 1u;
          v16 = *(uint32_t *)(v14 + 4);
          if ( !v15 || *(uint8_t *)(v16 + 55) != 0 )
          {
            v75 = 4 * Technique;
            *(uint32_t *)(*((uint32_t *)v12 + 10) + 4 * v13) = *(uint16_t *)(*(uint32_t *)(v16 + 32) + 46) << 16;
            glitch::video::CMaterialRenderer::updateRenderStateHashCode(v12, v63[0]);
          }
          else
          {
            v75 = 4 * Technique;
          }
          if ( v53 == *(uint32_t *)(*((uint32_t *)v12 + 10) + v75) )
          {
            v22 = v70;
            if ( ((1 << v18) & *((uint32_t *)v70 + (v18 >> 5) + 5)) != 0 )
            {
              v50 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v70 + 1) + 24) + v68 + 4) + 32);
              glitch::video::IShader::getBatchBaker((glitch::video::IShader::Self *)&v83);
              v41 = v83;
              if ( v83 != nullptr )
              {
                sub_8B1B00(v83 + 1);
                if ( v83 != nullptr )
                  sub_5459C0(v83);
                v42 = ((int64_t (*)(volatile int32_t *, int))*(uint32_t *)(*v41 + 40))(v41, v50);
                glitch::video::CMaterial::updateHashCode(v70, v18, v42);
                sub_5459C0(v41);
                v22 = v70;
              }
              else
              {
                glitch::video::CMaterial::updateHashCode(v70, v18, 0x22000u);
                v22 = v70;
              }
            }
            v23 = *(uint32_t *)(*((uint32_t *)v22 + 8) + v65);
            if ( ((1 << v63[0]) & *((uint32_t *)v72 + (*(uint32_t *)v63 >> 5) + 5)) != 0 )
            {
              v49 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v72 + 1) + 24) + v67 + 4) + 32);
              glitch::video::IShader::getBatchBaker((glitch::video::IShader::Self *)&v84);
              if ( v84 != nullptr )
              {
                v54 = v84;
                sub_8B1B00(v84 + 1);
                v39 = v54;
                if ( v84 != nullptr )
                {
                  sub_5459C0(v84);
                  v39 = v54;
                }
                v55 = v39;
                v40 = ((int64_t (*)(volatile int32_t *, int))*(uint32_t *)(*v39 + 40))(v39, v49);
                glitch::video::CMaterial::updateHashCode(v72, v63[0], v40);
                sub_5459C0(v55);
              }
              else
              {
                glitch::video::CMaterial::updateHashCode(v72, v63[0], 0x22000u);
              }
            }
            if ( v23 == *(uint32_t *)(*((uint32_t *)v72 + 8) + v75) )
            {
              v24 = *(uint32_t *)(*((uint32_t *)v70 + 1) + 24) + v68;
              v25 = v67 + *(uint32_t *)(*((uint32_t *)v72 + 1) + 24);
              v26 = *(uint8_t *)(v24 + 8);
              v77 = v26;
              if ( v26 == *(uint8_t *)(v25 + 8) )
                break;
            }
          }
LABEL_20:
          ;
        }
        if ( v26 != 0 )
        {
          v27 = *(uint32_t **)(v24 + 4);
          v28 = *(uint32_t *)(v25 + 4);
          if ( v27[8] == *(uint32_t *)(v28 + 32) )
          {
            v66 = v18;
            v29 = v27;
            v30 = *(uint32_t **)(v25 + 4);
            v69 = 14;
            v31 = v27;
            v32 = v28;
            while ( memcmp(v31, v30, 0x20u) == 0 )
            {
              if ( v69 == 14 * ((uint8_t)(v77 - 1) + 1) )
              {
                LOBYTE(v18) = v66;
                goto LABEL_39;
              }
              v33 = v69 * 4;
              v31 = &v29[v69];
              v69 += 14;
              v30 = (uint32_t *)(v32 + v33);
              if ( v31[8] != v30[8] )
                goto LABEL_20;
            }
          }
          goto LABEL_20;
        }
LABEL_39:
        if ( (uint8_t)glitch::video::CMaterial::areParametersEqual(v70, v18, v77, v72, v63[0], 0x22000u, false) == 0 )
          goto LABEL_20;
        v34 = *((glitch::video::CVertexStreams::Self **)v60 + 2);
        if ( v34 != nullptr )
          sub_8B1B00(*((volatile int32_t **)v60 + 2));
        v35 = *((uint32_t *)v34 + 2);
        if ( v74[3] >= v35 )
          v35 = v74[3];
        v74[3] = v35;
        if ( __sync_fetch_and_add((volatile int32_t *)v34, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CVertexStreams::Destroy(v34);
          gll_operator_delete_arr((int)(uintptr_t)(v34));
        }
        v36 = *((uint32_t *)v60 + 5);
        if ( v74[4] >= v36 )
          v36 = v74[4];
        v74[4] = v36;
        if ( v74 == v62 )
        {
LABEL_69:
          v43 = v81;
          if ( v81 != nullptr )
            sub_8B1B00((volatile int32_t *)v81);
          v44 = *((glitch::video::CVertexStreams::Self **)v60 + 2);
          if ( v44 != nullptr )
            sub_8B1B00(*((volatile int32_t **)v60 + 2));
          v73 = *((glitch::video::CMaterial::Self **)v44 + 2);
          v78 = v74[3];
          if ( __sync_fetch_and_add((volatile int32_t *)v44, 0xFFFFFFFF) == 1 )
          {
            glitch::video::CVertexStreams::Destroy(v44);
            gll_operator_delete_arr((int)(uintptr_t)(v44));
          }
          v71 = *((glitch::video::CMaterial::Self **)v60 + 5);
          *(uint32_t *)v64 = v74[4];
          v45 = (int)(uintptr_t)(operator new(0x14u));
          v46 = v45;
          if ( v45 != -8 )
          {
            *(uint32_t *)(v45 + 8) = (uint32_t)(uintptr_t)(v43);
            if ( v43 != nullptr )
              sub_8B1B00((volatile int32_t *)v43);
            v47 = v73;
            if ( v78 >= (unsigned int)(uintptr_t)(v73) )
              v47 = (glitch::video::CMaterial::Self *)v78;
            *(uint32_t *)(v46 + 12) = (uint32_t)(uintptr_t)(v47);
            v48 = v71;
            if ( *(uint32_t *)v64 >= (unsigned int)(uintptr_t)(v71) )
              v48 = *(glitch::video::CMaterial::Self **)v64;
            *(uint32_t *)(v46 + 16) = (uint32_t)(uintptr_t)(v48);
          }
          sub_1901920(v46, v74);
          if ( v43 != nullptr )
          {
            v38 = *(uint32_t *)v43 == 2;
            _mm_mfence();
            if ( v38 )
              glitch::video::CMaterial::removeFromRootSceneNode(v43);
            if ( __sync_fetch_and_add((volatile int32_t *)v43, 0xFFFFFFFF) == 1 )
            {
              glitch::video::CMaterial::Destroy(v43);
              gll_operator_delete_arr((int)(uintptr_t)(v43));
            }
          }
        }
        v37 = v81;
        if ( v81 != nullptr )
        {
          v38 = *(uint32_t *)v81 == 2;
          _mm_mfence();
          if ( v38 )
            glitch::video::CMaterial::removeFromRootSceneNode(v37);
          if ( __sync_fetch_and_add((volatile int32_t *)v37, 0xFFFFFFFF) == 1 )
          {
            glitch::video::CMaterial::Destroy(v37);
            gll_operator_delete_arr((int)(uintptr_t)(v37));
          }
        }
      }
LABEL_55:
      if ( v79 != nullptr )
        sub_5459C0(v79);
      ++v58;
      v5 = v57[43];
      v6 = *(uint32_t *)(v5 + 4);
    }
    while ( *(uint32_t *)(v56 + v5 + v6 + 12) > v58 );
  }
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v86);
  v85[0] = ((uint32_t)(uintptr_t)&off_2071168);
  glitch::collada::CColladaFactoryWrapperBase::Destroy((glitch::collada::CColladaFactoryWrapperBase::Self *)v85);
}


// ============================================================================
// Address:   0xd09290 (size: 15 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh16getCategoryCountEv
// Demangled: glitch::collada::CModularSkinnedMesh::getCategoryCount(void)const
// ============================================================================
int glitch::collada::CModularSkinnedMesh::getCategoryCount(glitch::collada::CModularSkinnedMesh::Self *self)
{
  return **((uint32_t **)self + 43);
}


// ============================================================================
// Address:   0xd092a0 (size: 26 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh22getCategoryModuleCountEi
// Demangled: glitch::collada::CModularSkinnedMesh::getCategoryModuleCount(int)const
// ============================================================================
int glitch::collada::CModularSkinnedMesh::getCategoryModuleCount(
        glitch::collada::CModularSkinnedMesh::Self *self,
        int a2)
{
  return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 43) + 4) + *((uint32_t *)self + 43) + 16 * a2 + 12);
}


// ============================================================================
// Address:   0xd092c0 (size: 23 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh18getCurrentModuleIdEi
// Demangled: glitch::collada::CModularSkinnedMesh::getCurrentModuleId(int)const
// ============================================================================
int glitch::collada::CModularSkinnedMesh::getCurrentModuleId(
        glitch::collada::CModularSkinnedMesh::Self *self,
        int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 45) + 36 * a2);
}


// ============================================================================
// Address:   0xd092e0 (size: 116 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh20getCurrentModuleNameEi
// Demangled: glitch::collada::CModularSkinnedMesh::getCurrentModuleName(int)const
// ============================================================================
int glitch::collada::CModularSkinnedMesh::getCurrentModuleName(
        glitch::collada::CModularSkinnedMesh::Self *self,
        int a2)
{
  int CurrentModuleId;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  CurrentModuleId = glitch::collada::CModularSkinnedMesh::getCurrentModuleId(self, a2);
  v3 = 0;
  if ( CurrentModuleId != -1 )
  {
    v4 = *(uint32_t *)(*((uint32_t *)self + 43) + 4)
       + *((uint32_t *)self + 43)
       + 16 * a2
       + 4
       + *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 43) + 4) + *((uint32_t *)self + 43) + 16 * a2 + 16)
       + 12
       + 8 * CurrentModuleId;
    v5 = 0;
    v6 = *(uint32_t *)(v4 + 4);
    v7 = v4 + v6 + 4;
    if ( v6 != 0 )
      v5 = v7;
    return *(uint32_t *)(v5 + 4);
  }
  return v3;
}


// ============================================================================
// Address:   0xd09360 (size: 9 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh10reallocateEj
// Demangled: glitch::collada::CModularSkinnedMesh::reallocate(unsigned int)
// ============================================================================
int glitch::collada::CModularSkinnedMesh::reallocate()
{
  return 0;
}


// ============================================================================
// Address:   0xd09370 (size: 631 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh18computeBoundingBoxEv
// Demangled: glitch::collada::CModularSkinnedMesh::computeBoundingBox(void)
// ============================================================================
int glitch::collada::CModularSkinnedMesh::computeBoundingBox(glitch::collada::CModularSkinnedMesh::Self *self)
{
  int v1;
  int result;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  float v8; // xmm2_4
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19;
  bool v20;
  int v21;
  int v22;

  v20 = false;
  v1 = *((uint32_t *)self + 10);
  result = *((uint32_t *)self + 46);
  v3 = *((uint32_t *)self + 45);
  v21 = result;
  *((uint32_t *)self + 61) = -8388609;
  *((uint32_t *)self + 62) = -8388609;
  *((uint32_t *)self + 63) = -8388609;
  *((uint32_t *)self + 58) = 2139095039;
  *((uint32_t *)self + 59) = 2139095039;
  *((uint32_t *)self + 60) = 2139095039;
  if ( (v1 & 1) == 0 )
    v20 = (v1 & 0x800) != 0;
  if ( v3 != result )
  {
    v4 = v3;
    while ( 1 )
    {
      result = *(uint32_t *)(v4 + 4);
      if ( result != 0 )
        break;
      v4 += 36;
      if ( v21 == v4 )
        goto LABEL_40;
    }
    if ( v20 )
    {
      *(uint32_t *)(result + 244) |= 2u;
      result = *(uint32_t *)(v4 + 4);
    }
    v5 = (uint32_t *)(*(int (**)(int))(*(uint32_t *)result + 36))(result);
    *((uint32_t *)self + 58) = *v5;
    *((uint32_t *)self + 59) = v5[1];
    *((uint32_t *)self + 60) = v5[2];
    *((uint32_t *)self + 61) = v5[3];
    *((uint32_t *)self + 62) = v5[4];
    result = v5[5];
    *((uint32_t *)self + 63) = result;
    if ( v21 != v4 )
    {
      v6 = v4 + 36;
      if ( v21 != v4 + 36 )
      {
        v22 = v4;
        v7 = v4 + 40;
        do
        {
          result = *(uint32_t *)(v6 - v22 + v7 - 36);
          if ( result != 0 )
          {
            if ( v20 )
            {
              *(uint32_t *)(result + 244) |= 2u;
              result = *(uint32_t *)(v6 - v22 + v7 - 36);
            }
            result = (*(int (**)(int))(*(uint32_t *)result + 36))(result);
            v8 = *(float *)(result + 12);
            v9 = *((float *)self + 61);
            v10 = *(float *)(result + 20);
            v11 = *(float *)(result + 16);
            if ( v8 > v9 )
            {
              *((float *)self + 61) = v8;
              v9 = v8;
            }
            v12 = *((float *)self + 62);
            if ( v11 > v12 )
            {
              *((float *)self + 62) = v11;
              v12 = v11;
            }
            v19 = *((float *)self + 63);
            if ( v10 > v19 )
            {
              *((float *)self + 63) = v10;
              v19 = v10;
            }
            v13 = *((float *)self + 58);
            if ( v13 > v8 )
            {
              *((float *)self + 58) = v8;
              v13 = v8;
            }
            v14 = *((float *)self + 59);
            if ( v14 > v11 )
            {
              *((float *)self + 59) = v11;
              v14 = v11;
            }
            v15 = *((float *)self + 60);
            if ( v15 > v10 )
            {
              *((float *)self + 60) = v10;
              v15 = v10;
            }
            v16 = *(float *)result;
            v17 = *(float *)(result + 8);
            v18 = *(float *)(result + 4);
            if ( *(float *)result > v9 )
              *((float *)self + 61) = v16;
            if ( v18 > v12 )
              *((float *)self + 62) = v18;
            if ( v17 > v19 )
              *((float *)self + 63) = v17;
            if ( v13 > v16 )
              *((float *)self + 58) = v16;
            if ( v14 > v18 )
              *((float *)self + 59) = v18;
            if ( v15 > v17 )
              *((float *)self + 60) = v17;
          }
          v6 += 36;
        }
        while ( v21 != v6 );
      }
    }
    v1 = *((uint32_t *)self + 10);
  }
LABEL_40:
  *((uint32_t *)self + 10) = v1 & 0xFFFEFEFF | 0x100;
  return result;
}


// ============================================================================
// Address:   0xd095f0 (size: 60 bytes)
// Symbol:    _ZNK6glitch7collada19CModularSkinnedMesh14getBoundingBoxEv
// Demangled: glitch::collada::CModularSkinnedMesh::getBoundingBox(void)const
// ============================================================================
char *glitch::collada::CModularSkinnedMesh::getBoundingBox(glitch::collada::CModularSkinnedMesh::Self *self)
{
  if ( (*((uint8_t *)self + 42) & 1) != 0 )
    glitch::collada::CModularSkinnedMesh::computeBoundingBox(self);
  return (char *)self + 232;
}


// ============================================================================
// Address:   0xd09630 (size: 569 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh26setCategoryMaterialBindingEiRKN5boost13intrusive_ptrINS_5video9CMaterialEEERKNS3_INS_5scene11CMeshBufferEEE
// Demangled: glitch::collada::CModularSkinnedMesh::setCategoryMaterialBinding(int,boost::intrusive_ptr<glitch::video::CMaterial> const&,boost::intrusive_ptr<glitch::scene::CMeshBuffer> const&)
// ============================================================================
int glitch::collada::CModularSkinnedMesh::setCategoryMaterialBinding(int a1, int a2, unsigned int *a3, int *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  int result;
  int v8;
  volatile int32_t *v9;
  bool v10;
  int v11;
  int v12;
  uint32_t *v13;
  volatile int32_t *v14;
  int v15;
  uint32_t *v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t _g4_t_v23[3];
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v18)) > _g4_s1 ? (20u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v24)) > _g4_s7 ? (44u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v25)) > _g4_s8 ? (48u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v26)) > _g4_s9 ? (52u + sizeof(_g4_t_v26)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);

  v4 = (uint32_t *)(*(uint32_t *)(a1 + 180) + 36 * a2);
  v5 = (uint32_t *)v4[5];
  v6 = *a3;
  if ( v5 == nullptr )
    goto LABEL_22;
  result = (int)(uintptr_t)(v4 + 4);
  do
  {
    while ( v6 <= v5[4] )
    {
      result = (int)(uintptr_t)(v5);
      v5 = (uint32_t *)v5[2];
      if ( v5 == nullptr )
        goto LABEL_6;
    }
    v5 = (uint32_t *)v5[3];
  }
  while ( v5 != nullptr );
LABEL_6:
  v17 = result;
  if ( v4 + 4 == (uint32_t *)result )
  {
LABEL_22:
    v15 = v4[8];
    v25 = *a3;
    v26 = nullptr;
    v16 = v4 + 3;
    if ( v15 != 0 && v6 > *(uint32_t *)(v4[7] + 16) )
    {
      sub_D01DE0(&v24, (int)(uintptr_t)(v16), 0, v4[7], &v25);
      result = v24;
    }
    else
    {
      sub_D01FD0((int)(uintptr_t)(v23), v16, &v25);
      result = v23[0];
    }
  }
  else
  {
    if ( v6 >= *(uint32_t *)(result + 16) )
      goto LABEL_8;
    v10 = result == v4[6];
    v25 = *a3;
    v26 = nullptr;
    v22 = v4 + 3;
    if ( v10 )
    {
      sub_D01DE0(&v24, (int)(uintptr_t)(v22), result, result, &v25);
      result = v24;
    }
    else
    {
      v11 = sub_1904940(result);
      if ( v6 <= *(uint32_t *)(v11 + 16) )
      {
        sub_D01FD0((int)(uintptr_t)(v23), v22, &v25);
        result = v23[0];
      }
      else if ( *(uint32_t *)(v11 + 12) != 0 )
      {
        v12 = (int)(uintptr_t)(operator new(0x18u));
        v13 = v4 + 4;
        if ( v12 != -16 )
        {
          *(uint32_t *)(v12 + 16) = v25;
          v14 = v26;
          v10 = v26 == nullptr;
          *(uint32_t *)(v12 + 20) = (uint32_t)(uintptr_t)(v26);
          if ( !v10 )
          {
            v19 = v12;
            sub_8B1B00(v14 + 1);
            v13 = v4 + 4;
            v12 = v19;
          }
        }
        v20 = v12;
        sub_1904970(1, v12, v17, v13);
        ++v4[8];
        result = v20;
      }
      else
      {
        sub_D01DE0(&v24, (int)(uintptr_t)(v22), 0, v11, &v25);
        result = v24;
      }
    }
  }
  if ( v26 != nullptr )
  {
    v21 = result;
    sub_5459C0(v26);
    result = v21;
  }
LABEL_8:
  v8 = *a4;
  if ( *a4 != 0 )
  {
    v18 = result;
    sub_8B1B00((volatile int32_t *)(v8 + 4));
    result = v18;
  }
  v9 = *(volatile int32_t **)(result + 20);
  *(uint32_t *)(result + 20) = v8;
  if ( v9 != nullptr )
    return sub_5459C0(v9);
  return result;
}


// ============================================================================
// Address:   0xd09870 (size: 152 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh26getCategoryMaterialBindingEiRKN5boost13intrusive_ptrINS_5video9CMaterialEEE
// Demangled: glitch::collada::CModularSkinnedMesh::getCategoryMaterialBinding(int,boost::intrusive_ptr<glitch::video::CMaterial> const&)
// ============================================================================
uint32_t *glitch::collada::CModularSkinnedMesh::getCategoryMaterialBinding(
        uint32_t *a1,
        int a2,
        int a3,
        unsigned int *a4)
{
  uint32_t *result;
  int v5;
  unsigned int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;

  result = a1;
  v5 = *(uint32_t *)(a2 + 180) + 36 * a3;
  v6 = *a4;
  v7 = *(uint32_t **)(v5 + 20);
  if ( v7 == nullptr )
    goto LABEL_11;
  v8 = v5 + 16;
  v9 = (uint32_t *)(v5 + 16);
  do
  {
    while ( v6 <= v7[4] )
    {
      v9 = v7;
      v7 = (uint32_t *)v7[2];
      if ( v7 == nullptr )
        goto LABEL_6;
    }
    v7 = (uint32_t *)v7[3];
  }
  while ( v7 != nullptr );
LABEL_6:
  if ( (uint32_t *)v8 == v9 || v6 < v9[4] )
  {
LABEL_11:
    *a1 = 0;
  }
  else
  {
    v10 = v9[5];
    *a1 = v10;
    if ( v10 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v10 + 4));
      return a1;
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd09910 (size: 354 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh17forceUpdateBufferEv
// Demangled: glitch::collada::CModularSkinnedMesh::forceUpdateBuffer(void)
// ============================================================================
int glitch::collada::CModularSkinnedMesh::forceUpdateBuffer(glitch::collada::CModularSkinnedMesh::Self *self)
{
  glitch::collada::CModularSkinnedMesh::Self *v1;
  int result;
  int v3;
  glitch::video::CMaterial::Self *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  volatile int32_t *v8;
  bool v9;
  volatile int32_t *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef glitch::video::CMaterial::Self *_g4_t_v14[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v14[6] = (glitch::video::CMaterial::Self *)&self;
  v1 = self;
  v13 = 0;
  v12 = 0;
  *((uint32_t *)self + 10) |= 0x8000u;
  result = glitch::collada::CModularSkinnedMesh::getCategoryCount(v1);
  if ( result > 0 )
  {
    do
    {
      (*(void (**)(glitch::video::CMaterial::Self **))(**(uint32_t **)(*((uint32_t *)v1 + 45) + v13 + 4) + 24))(v14);
      v3 = *((uint32_t *)v1 + 45) + v13;
      v4 = v14[0];
      v5 = *(uint32_t **)(v3 + 20);
      if ( v5 == nullptr )
        goto LABEL_21;
      v6 = (uint32_t *)(v3 + 16);
      do
      {
        while ( v14[0] <= (glitch::video::CMaterial::Self *)v5[4] )
        {
          v6 = v5;
          v5 = (uint32_t *)v5[2];
          if ( v5 == nullptr )
            goto LABEL_7;
        }
        v5 = (uint32_t *)v5[3];
      }
      while ( v5 != nullptr );
LABEL_7:
      if ( (uint32_t *)(v3 + 16) == v6 || v14[0] < (glitch::video::CMaterial::Self *)v6[4] )
      {
LABEL_21:
        v10 = *(volatile int32_t **)(v3 + 8);
        *(uint32_t *)(v3 + 8) = 0;
        if ( v10 != nullptr )
        {
          sub_5459C0(v10);
          v4 = v14[0];
        }
      }
      else
      {
        v7 = v6[5];
        if ( v7 != 0 )
        {
          v11 = *((uint32_t *)v1 + 45) + v13;
          sub_8B1B00((volatile int32_t *)(v7 + 4));
          v3 = v11;
        }
        v8 = *(volatile int32_t **)(v3 + 8);
        *(uint32_t *)(v3 + 8) = v7;
        if ( v8 != nullptr )
          sub_5459C0(v8);
        v4 = v14[0];
      }
      if ( v4 != nullptr )
      {
        v9 = *(uint32_t *)v4 == 2;
        _mm_mfence();
        if ( v9 )
          glitch::video::CMaterial::removeFromRootSceneNode(v4);
        if ( __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterial::Destroy(v4);
          gll_operator_delete_arr((int)(uintptr_t)(v4));
        }
      }
      ++v12;
      v13 += 36;
      result = glitch::collada::CModularSkinnedMesh::getCategoryCount(v1);
    }
    while ( v12 < result );
  }
  return result;
}


// ============================================================================
// Address:   0xd09a80 (size: 489 bytes)
// Symbol:    _ZNK6glitch7collada31CModularSkinnedMeshBatchManager5SHashclERKNS0_18modularSkinnedMesh4SKeyE
// Demangled: glitch::collada::CModularSkinnedMeshBatchManager::SHash::operator()(glitch::collada::modularSkinnedMesh::SKey const&)const
// ============================================================================
int glitch::collada::CModularSkinnedMeshBatchManager::SHash::opCall(int a1, int *a2)
{
  char *v2;
  char *v3;
  int result;
  unsigned int v5;
  unsigned int v6;
  char *v7;
  unsigned int i;
  __m128i v9; // xmm0
  unsigned int v10;
  __m128i *v11;
  __m128i v12; // xmm0
  char *v13;
  char *v14;
  unsigned int v15;
  char *v16;
  unsigned int j;
  __m128i v18; // xmm0
  unsigned int v19;
  __m128i *v20;
  __m128i v21; // xmm0
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;

  v2 = (char *)a2[1];
  v3 = (char *)a2[2];
  result = *a2;
  if ( v2 != v3 )
  {
    v5 = v3 - (v2 + 4);
    v6 = -((a2[1] & 0xFu) >> 2) & 3;
    v24 = (v5 >> 2) + 1;
    if ( v6 > v24 )
      v6 = (v5 >> 2) + 1;
    v7 = (char *)a2[1];
    if ( v6 == 0 )
      goto LABEL_29;
    for ( i = 0; i < v6; ++i )
    {
      result ^= *(uint32_t *)v7;
      v7 += 4;
    }
    if ( v24 != v6 )
    {
LABEL_29:
      v25 = v24 - v6;
      if ( 4 * (v25 >> 2) == 0 )
        goto LABEL_30;
g4_m128_raw(v9) = 0;
      v23 = a2[1] + 4 * v6;
      v10 = 0;
      v11 = (__m128i *)v23;
      do
      {
        ++v10;
        v9 = _mm_xor_si128(v9, *v11++);
      }
      while ( v10 < v25 >> 2 );
      v3 = (char *)a2[2];
      v12 = _mm_xor_si128(v9, _mm_srli_si128(v9, 8));
      result ^= _mm_cvtsi128_si32(_mm_xor_si128(v12, _mm_srli_si128(v12, 4)));
      v7 += 16 * (v25 >> 2);
      if ( v25 != 4 * (v25 >> 2) )
      {
LABEL_30:
        do
        {
          result ^= *(uint32_t *)v7;
          v7 += 4;
        }
        while ( v3 != v7 );
      }
    }
  }
  v13 = (char *)a2[4];
  v14 = (char *)a2[5];
  if ( v13 != v14 )
  {
    v15 = -((a2[4] & 0xFu) >> 2) & 3;
    v26 = ((unsigned int)(v14 - (v13 + 4)) >> 2) + 1;
    if ( v15 > v26 )
      v15 = ((unsigned int)(v14 - (v13 + 4)) >> 2) + 1;
    if ( v15 != 0 )
    {
      v16 = (char *)a2[4];
      for ( j = 0; j < v15; ++j )
      {
        result ^= *(uint32_t *)v16;
        v16 += 4;
      }
      if ( v26 == v15 )
        return result;
    }
    else
    {
      v16 = (char *)a2[4];
    }
    v27 = v26 - v15;
    if ( 4 * (v27 >> 2) == 0 )
      goto LABEL_31;
g4_m128_raw(v18) = 0;
    v22 = a2[4] + 4 * v15;
    v19 = 0;
    v20 = (__m128i *)v22;
    do
    {
      ++v19;
      v18 = _mm_xor_si128(v18, *v20++);
    }
    while ( v19 < v27 >> 2 );
    v14 = (char *)a2[5];
    v21 = _mm_xor_si128(v18, _mm_srli_si128(v18, 8));
    result ^= _mm_cvtsi128_si32(_mm_xor_si128(v21, _mm_srli_si128(v21, 4)));
    v16 += 16 * (v27 >> 2);
    if ( v27 != 4 * (v27 >> 2) )
    {
LABEL_31:
      do
      {
        result ^= *(uint32_t *)v16;
        v16 += 4;
      }
      while ( v14 != v16 );
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd09c70 (size: 105 bytes)
// Symbol:    _ZNK6glitch7collada31CModularSkinnedMeshBatchManager8SEqualToclERKNS0_18modularSkinnedMesh4SKeyES6_
// Demangled: glitch::collada::CModularSkinnedMeshBatchManager::SEqualTo::operator()(glitch::collada::modularSkinnedMesh::SKey const&,glitch::collada::modularSkinnedMesh::SKey const&)const
// ============================================================================
int glitch::collada::CModularSkinnedMeshBatchManager::SEqualTo::opCall(int a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;

  result = 0;
  if ( *a2 == *a3 )
  {
    v4 = (uint32_t *)a2[1];
    v5 = (uint32_t *)a2[2];
    v6 = (uint32_t *)a3[1];
    if ( v5 - v4 == (a3[2] - (int)(uintptr_t)(v6)) >> 2 )
    {
      result = 1;
      if ( v4 != v5 )
      {
        result = 0;
        if ( *v4 == *v6 )
        {
          v7 = (uint32_t *)a3[1];
          while ( v5 != ++v4 )
          {
            if ( *v4 != *++v7 )
              return 0;
          }
          return 1;
        }
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd09ce0 (size: 235 bytes)
// Symbol:    _ZN6glitch7collada31CModularSkinnedMeshBatchManager16findAndIncrementERKNS0_18modularSkinnedMesh4SKeyE
// Demangled: glitch::collada::CModularSkinnedMeshBatchManager::findAndIncrement(glitch::collada::modularSkinnedMesh::SKey const&)
// ============================================================================
glitch::collada::CModularSkinnedMeshBatchManager::Self *glitch::collada::CModularSkinnedMeshBatchManager::findAndIncrement(
        glitch::collada::CModularSkinnedMeshBatchManager::Self *self,
        pthread_mutex_t **a2,
        int *a3)
{
  unsigned int v3;
  unsigned int v4;
  int *v5;
  int v6;
  int i;
  uint32_t *v8;
  unsigned int v9;
  char v11;
  int v12;
  char *v13;

  glf::Mutex::Lock(a2 + 6);
  v13 = (char *)a2 + *(uint8_t *)a2 + 1;
  v3 = glitch::collada::CModularSkinnedMeshBatchManager::SHash::opCall((int)(uintptr_t)(v13), a3);
  v4 = (unsigned int)(uintptr_t)(a2[1]);
  if ( a2[2] != nullptr )
  {
    v5 = (int *)*(&G4_MUTEX_LOCK(a2[5]) + v3 % v4);
    v6 = v3 % v4;
    if ( v5 != nullptr )
    {
      for ( i = *v5; i != 0; i = v8[9] )
      {
        v8 = (uint32_t *)(i - 36);
        if ( v8 == nullptr )
          break;
        v9 = v8[10];
        if ( v3 == v9 )
        {
          v12 = v6;
          v11 = glitch::collada::CModularSkinnedMeshBatchManager::SEqualTo::opCall((int)(uintptr_t)(v13), (uint32_t *)(a3), v8);
          v6 = v12;
          if ( v11 != 0 )
          {
            ++v8[7];
            *(uint8_t *)self = 1;
            *((uint32_t *)self + 1) = v8[8];
            goto LABEL_9;
          }
        }
        else if ( v6 != v9 % (unsigned int)(uintptr_t)(a2[1]) )
        {
          break;
        }
      }
    }
  }
  *(uint8_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
LABEL_9:
  glf::Mutex::Unlock(a2 + 6);
  return self;
}


// ============================================================================
// Address:   0xd09dd0 (size: 55 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh9SCategoryC2Ev
// Demangled: glitch::collada::modularSkinnedMesh::SCategory::SCategory(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada18modularSkinnedMesh9SCategoryC1Ev'
glitch::collada::modularSkinnedMesh::SCategory::Self *glitch::collada::modularSkinnedMesh::SCategory::Construct(
        glitch::collada::modularSkinnedMesh::SCategory::Self *self)
{
  *(uint32_t *)self = -1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 16);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)((char *)self + 16);
  return self;
}


// ============================================================================
// Address:   0xd09e10 (size: 90 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh9SCategory5resetEv
// Demangled: glitch::collada::modularSkinnedMesh::SCategory::reset(void)
// ============================================================================
volatile int32_t *glitch::collada::modularSkinnedMesh::SCategory::reset(
        glitch::collada::modularSkinnedMesh::SCategory::Self *self)
{
  volatile int32_t *v1;
  volatile int32_t *result;

  v1 = *((volatile int32_t **)self + 1);
  *((uint32_t *)self + 1) = 0;
  if ( v1 != nullptr )
    sub_5459C0(v1);
  result = *((volatile int32_t **)self + 2);
  *(uint32_t *)self = -1;
  *((uint32_t *)self + 2) = 0;
  if ( result != nullptr )
    return (volatile int32_t *)sub_5459C0(result);
  return result;
}


// ============================================================================
// Address:   0xd09e70 (size: 74 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh14SModularBufferC2Ev
// Demangled: glitch::collada::modularSkinnedMesh::SModularBuffer::SModularBuffer(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada18modularSkinnedMesh14SModularBufferC1Ev'
struct glitch::collada::modularSkinnedMesh::SModularBuffer *glitch::collada::modularSkinnedMesh::SModularBuffer::Construct(
        glitch::collada::modularSkinnedMesh::SModularBuffer *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  return self;
}


// ============================================================================
// Address:   0xd09ec0 (size: 218 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh14SModularBufferD2Ev
// Demangled: glitch::collada::modularSkinnedMesh::SModularBuffer::~SModularBuffer()
// ============================================================================
// Alternative name is '_ZN6glitch7collada18modularSkinnedMesh14SModularBufferD1Ev'
void glitch::collada::modularSkinnedMesh::SModularBuffer::Destroy(
        glitch::collada::modularSkinnedMesh::SModularBuffer *self)
{
  glitch::video::CMaterialVertexAttributeMap::Self *v1;
  glitch::video::CMaterial::Self *v2;
  bool v3;

  if ( *((uint32_t *)self + 6) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 6));
  v1 = *((glitch::video::CMaterialVertexAttributeMap::Self **)self + 5);
  if ( v1 != nullptr && __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v1);
    gll_operator_delete_arr((int)(uintptr_t)(v1));
  }
  if ( *((uint32_t *)self + 3) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 3));
  v2 = *((glitch::video::CMaterial::Self **)self + 2);
  if ( v2 != nullptr )
  {
    v3 = *(uint32_t *)v2 == 2;
    _mm_mfence();
    if ( v3 )
      glitch::video::CMaterial::removeFromRootSceneNode(v2);
    if ( __sync_fetch_and_add((volatile int32_t *)v2, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v2);
      gll_operator_delete_arr((int)(uintptr_t)(v2));
    }
  }
  if ( *((uint32_t *)self + 1) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 1));
  if ( *(uint32_t *)self != 0 )
    sub_5459C0(*(volatile int32_t **)self);
}


// ============================================================================
// Address:   0xd09fa0 (size: 131 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh20SSharedModularBufferC2ERKNS1_14SModularBufferE
// Demangled: glitch::collada::modularSkinnedMesh::SSharedModularBuffer::SSharedModularBuffer(glitch::collada::modularSkinnedMesh::SModularBuffer const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada18modularSkinnedMesh20SSharedModularBufferC1ERKNS1_14SModularBufferE'
struct glitch::collada::modularSkinnedMesh::SSharedModularBuffer *glitch::collada::modularSkinnedMesh::SSharedModularBuffer::Construct(
        glitch::collada::modularSkinnedMesh::SSharedModularBuffer *self,
        const glitch::collada::modularSkinnedMesh::SModularBuffer *a2)
{
  int v2;
  bool v3;
  int v4;
  int v5;
  struct glitch::collada::modularSkinnedMesh::SSharedModularBuffer *result;

  v2 = *(uint32_t *)a2;
  v3 = *(uint32_t *)a2 == 0;
  *(uint32_t *)self = *(uint32_t *)a2;
  if ( !v3 )
    sub_8B1B00((volatile int32_t *)(v2 + 4));
  v4 = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 1) = v4;
  if ( v4 != 0 )
    sub_8B1B00((volatile int32_t *)(v4 + 4));
  v5 = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 2) = v5;
  if ( v5 != 0 )
    sub_8B1B00((volatile int32_t *)(v5 + 4));
  result = *((struct glitch::collada::modularSkinnedMesh::SSharedModularBuffer **)a2 + 5);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(result);
  if ( result != nullptr )
    return (struct glitch::collada::modularSkinnedMesh::SSharedModularBuffer *)sub_8B1B00((volatile int32_t *)result);
  return result;
}


// ============================================================================
// Address:   0xd0a030 (size: 138 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh20SSharedModularBufferD2Ev
// Demangled: glitch::collada::modularSkinnedMesh::SSharedModularBuffer::~SSharedModularBuffer()
// ============================================================================
// Alternative name is '_ZN6glitch7collada18modularSkinnedMesh20SSharedModularBufferD1Ev'
void glitch::collada::modularSkinnedMesh::SSharedModularBuffer::Destroy(
        glitch::collada::modularSkinnedMesh::SSharedModularBuffer *self)
{
  glitch::video::CMaterialVertexAttributeMap::Self *v1;

  v1 = *((glitch::video::CMaterialVertexAttributeMap::Self **)self + 3);
  if ( v1 != nullptr && __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v1);
    gll_operator_delete_arr((int)(uintptr_t)(v1));
  }
  if ( *((uint32_t *)self + 2) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 2));
  if ( *((uint32_t *)self + 1) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 1));
  if ( *(uint32_t *)self != 0 )
    sub_5459C0(*(volatile int32_t **)self);
}


// ============================================================================
// Address:   0xd0a0c0 (size: 549 bytes)
// Symbol:    _ZN6glitch7collada31CModularSkinnedMeshBatchManager7releaseERKNS0_18modularSkinnedMesh4SKeyE
// Demangled: glitch::collada::CModularSkinnedMeshBatchManager::release(glitch::collada::modularSkinnedMesh::SKey const&)
// ============================================================================
int glitch::collada::CModularSkinnedMeshBatchManager::release(
        pthread_mutex_t **self,
        const glitch::collada::modularSkinnedMesh::SKey *a2)
{
  pthread_mutex_t **v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  int i;
  uint32_t *v10;
  unsigned int v11;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int v26;
  int *v27;
  uint32_t *v28;
  int v29;
  int v30;
  char v32;
  glf::Mutex::Self *v33;
  uint32_t *v34;
  uint32_t *v35;
  int v36;
  char *v37;
  int *v38;
  uint32_t *v39;

  v2 = self;
  glf::Mutex::Lock(self + 6);
  v37 = (char *)v2 + *(uint8_t *)v2 + 1;
  v3 = glitch::collada::CModularSkinnedMeshBatchManager::SHash::opCall((int)(uintptr_t)(v37), (int *)a2);
  v4 = v3;
  v5 = (unsigned int)(uintptr_t)(*(self + 1));
  if ( *(self + 2) != nullptr )
  {
    v6 = v3 % v5;
    v7 = (int *)*(&G4_MUTEX_LOCK((*(self + 5))) + v3 % v5);
    v8 = v6;
    if ( v7 != nullptr )
    {
      for ( i = *v7; i != 0; i = v10[9] )
      {
        v10 = (uint32_t *)(i - 36);
        if ( v10 == nullptr )
          break;
        v11 = v10[10];
        if ( v4 == v11 )
        {
          v36 = v8;
          v32 = glitch::collada::CModularSkinnedMeshBatchManager::SEqualTo::opCall((int)(uintptr_t)(v37), (uint32_t *)(a2), v10);
          v8 = v36;
          if ( v32 != 0 )
            goto LABEL_9;
        }
        else if ( v8 != v11 % (unsigned int)(uintptr_t)(*(self + 1)) )
        {
          break;
        }
      }
    }
  }
  v10 = nullptr;
LABEL_9:
  if ( v10[7]-- == 1 )
  {
    v13 = (int *)v10[8];
    v38 = v13;
    if ( v13 != nullptr )
    {
      v14 = v13[1];
      v15 = *(uint32_t *)v10[8];
      if ( v14 != v15 )
      {
        v16 = v14;
        do
        {
          v33 = (glf::Mutex::Self *)v15;
          v15 += 16;
          g4_noop_dtor(v33);
        }
        while ( v16 != v15 );
        v2 = self;
        v15 = *v38;
      }
      if ( v15 != 0 )
        gll_operator_delete_arr(v15);
      operator delete(v38);
    }
    v17 = v10[9];
    v18 = v10 + 9;
    v19 = v17 - 36;
    if ( v17 == 0 )
      v19 = 0;
    v20 = v10[10] % (unsigned int)(uintptr_t)(v2[1]);
    v21 = (uint32_t *)*(&G4_MUTEX_LOCK(v2[5]) + v20);
    v22 = v18;
    while ( 1 )
    {
      v23 = (uint32_t *)*v21;
      if ( v22 == (uint32_t *)*v21 )
        break;
      v21 = (uint32_t *)*v21;
    }
    v24 = (uint32_t *)(v19 + 36);
    if ( v19 == 0 )
      v24 = nullptr;
    v39 = v24;
    while ( 1 )
    {
      v28 = v23 - 9;
      if ( v23 == nullptr )
        v28 = nullptr;
      *v21 = v28[9];
      v29 = v28[4];
      if ( v29 != 0 )
      {
        v34 = v28;
        gll_operator_delete_arr(v29);
        v28 = v34;
      }
      v30 = v28[1];
      if ( v30 != 0 )
      {
        v35 = v28;
        gll_operator_delete_arr(v30);
        v28 = v35;
      }
      gll_operator_delete_arr((int)(uintptr_t)(v28));
      v2[2] = (pthread_mutex_t *)((char *)v2[2] - 1);
      v23 = (uint32_t *)*v21;
      if ( *v21 == 0 )
        break;
      v25 = v23[1] % (unsigned int)(uintptr_t)(v2[1]);
      v26 = v25;
      if ( v25 != v20 )
      {
        *(&G4_MUTEX_LOCK(v2[5]) + v25) = (int)(uintptr_t)(v21);
        v27 = &G4_MUTEX_LOCK(v2[5]) + v20;
        if ( (uint32_t *)*v27 != v21 )
        {
LABEL_28:
          v23 = (uint32_t *)*v21;
          v20 = v26;
          goto LABEL_29;
        }
LABEL_38:
        *v27 = 0;
        goto LABEL_28;
      }
LABEL_29:
      if ( v39 == v23 )
        return glf::Mutex::Unlock(self + 6);
    }
    v26 = v20;
    v27 = &G4_MUTEX_LOCK(v2[5]) + v20;
    if ( (uint32_t *)*v27 != v21 )
      goto LABEL_28;
    goto LABEL_38;
  }
  return glf::Mutex::Unlock(self + 6);
}


// ============================================================================
// Address:   0xd0a2f0 (size: 53 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh4SKeyC2Ev
// Demangled: glitch::collada::modularSkinnedMesh::SKey::SKey(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada18modularSkinnedMesh4SKeyC1Ev'
struct glitch::collada::modularSkinnedMesh::SKey *glitch::collada::modularSkinnedMesh::SKey::Construct(
        glitch::collada::modularSkinnedMesh::SKey *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  return self;
}


// ============================================================================
// Address:   0xd0a330 (size: 302 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh4SKeyC2EjRKSt6vectorIjNS_4core10SAllocatorIjLNS_6memory13E_MEMORY_HINTE0EEEESB_
// Demangled: glitch::collada::modularSkinnedMesh::SKey::SKey(unsigned int,std::vector<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>> const&,std::vector<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada18modularSkinnedMesh4SKeyC1EjRKSt6vectorIjNS_4core10SAllocatorIjLNS_6memory13E_MEMORY_HINTE0EEEESB_'
int glitch::collada::modularSkinnedMesh::SKey::Construct(
        glitch::collada::modularSkinnedMesh::SKey *self,
        unsigned int a2,
        const std::vector<unsigned int, glitch::core::SAllocator<unsigned int, (glitch::memory::E_MEMORY_HINT)0>> *a3,
        const std::vector<unsigned int, glitch::core::SAllocator<unsigned int, (glitch::memory::E_MEMORY_HINT)0>> *a4)
{
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int result;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;

  v4 = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  v5 = 0;
  v6 = (*((uint32_t *)a3 + 1) - *(uint32_t *)a3) >> 2;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  if ( v6 != 0 )
  {
    v4 = 4 * v6;
    v5 = sub_4EBDC0(4 * v6);
  }
  *((uint32_t *)self + 1) = v5;
  *((uint32_t *)self + 2) = v5;
  *((uint32_t *)self + 3) = v5 + v4;
  v7 = *((uint32_t **)a3 + 1);
  v8 = *(uint32_t *)a3;
  if ( v7 != *(uint32_t **)a3 )
  {
    v9 = *(uint32_t **)a3;
    v10 = (uint32_t *)v5;
    do
    {
      if ( v10 != nullptr )
        *v10 = *v9;
      ++v9;
      ++v10;
    }
    while ( v7 != v9 );
    v5 += 4 * (((unsigned int)(uintptr_t)(v7) - v8 - 4) >> 2) + 4;
  }
  *((uint32_t *)self + 2) = v5;
  v11 = 0;
  v12 = *((uint32_t *)a4 + 1) - *(uint32_t *)a4;
  result = 0;
  *((uint32_t *)self + 4) = 0;
  v14 = v12 >> 2;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  if ( v14 != 0 )
  {
    v11 = 4 * v14;
    result = sub_4EBDC0(4 * v14);
  }
  *((uint32_t *)self + 4) = result;
  *((uint32_t *)self + 5) = result;
  *((uint32_t *)self + 6) = result + v11;
  v15 = *((uint32_t **)a4 + 1);
  v18 = *(uint32_t *)a4;
  if ( v15 != *(uint32_t **)a4 )
  {
    v16 = *(uint32_t **)a4;
    v17 = (uint32_t *)result;
    do
    {
      if ( v17 != nullptr )
        *v17 = *v16;
      ++v16;
      ++v17;
    }
    while ( v15 != v16 );
    result += 4 * (((unsigned int)(uintptr_t)(v15) - v18 - 4) >> 2) + 4;
  }
  *((uint32_t *)self + 5) = result;
  return result;
}


// ============================================================================
// Address:   0xd0a460 (size: 326 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh4SKeyC2ERKS2_
// Demangled: glitch::collada::modularSkinnedMesh::SKey::SKey(glitch::collada::modularSkinnedMesh::SKey const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada18modularSkinnedMesh4SKeyC1ERKS2_'
glitch::collada::modularSkinnedMesh::SKey *glitch::collada::modularSkinnedMesh::SKey::Construct(
        glitch::collada::modularSkinnedMesh::SKey *self,
        const glitch::collada::modularSkinnedMesh::SKey *a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  char *v6;
  uint32_t *v7;
  int v8;
  glitch::collada::modularSkinnedMesh::SKey *result;
  int v10;
  char *v11;
  char *v12;
  char *v13;
  glitch::collada::modularSkinnedMesh::SKey *v14;
  int v15;
  char *v16;

  v2 = 0;
  v15 = 0;
  *(uint32_t *)self = *(uint32_t *)a2;
  v3 = *((uint32_t *)a2 + 2) - *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 1) = 0;
  v4 = v3 >> 2;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  if ( v4 != 0 )
  {
    v2 = 4 * v4;
    v15 = sub_4EBDC0(4 * v4);
  }
  *((uint32_t *)self + 1) = v15;
  *((uint32_t *)self + 2) = v15;
  *((uint32_t *)self + 3) = v15 + v2;
  v5 = *((char **)a2 + 2);
  v16 = *((char **)a2 + 1);
  if ( v5 != v16 )
  {
    v6 = *((char **)a2 + 1);
    v7 = (uint32_t *)v15;
    do
    {
      if ( v7 != nullptr )
        *v7 = *(uint32_t *)v6;
      v6 += 4;
      ++v7;
    }
    while ( v5 != v6 );
    v15 += 4 * ((unsigned int)(v5 - (v16 + 4)) >> 2) + 4;
  }
  v8 = 0;
  *((uint32_t *)self + 2) = v15;
  result = nullptr;
  v10 = (*((uint32_t *)a2 + 5) - *((uint32_t *)a2 + 4)) >> 2;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  if ( v10 != 0 )
  {
    v8 = 4 * v10;
    result = (glitch::collada::modularSkinnedMesh::SKey *)sub_4EBDC0(4 * v10);
  }
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)result + v8);
  v11 = *((char **)a2 + 5);
  v12 = *((char **)a2 + 4);
  if ( v11 != v12 )
  {
    v13 = *((char **)a2 + 4);
    v14 = result;
    do
    {
      if ( v14 != nullptr )
        *(uint32_t *)v14 = *(uint32_t *)v13;
      v13 += 4;
      v14 = (glitch::collada::modularSkinnedMesh::SKey *)((char *)v14 + 4);
    }
    while ( v11 != v13 );
    result = (glitch::collada::modularSkinnedMesh::SKey *)((char *)result
                                                         + 4 * ((unsigned int)(v11 - (v12 + 4)) >> 2)
                                                         + 4);
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
  return result;
}


// ============================================================================
// Address:   0xd0a5b0 (size: 1666 bytes)
// Symbol:    _ZN6glitch7collada18modularSkinnedMesh4SKeyC2ERKN5boost13intrusive_ptrINS0_8CResFileEEERKSt6vectorINS1_14SModularBufferENS_4core10SAllocatorISA_LNS_6memory13E_MEMORY_HINTE0EEEERKS9_INS1_9SCategoryENSC_ISJ_LSE_0EEEE
// Demangled: glitch::collada::modularSkinnedMesh::SKey::SKey(boost::intrusive_ptr<glitch::collada::CResFile> const&,std::vector<glitch::collada::modularSkinnedMesh::SModularBuffer,glitch::core::SAllocator<glitch::collada::modularSkinnedMesh::SModularBuffer,(glitch::memory::E_MEMORY_HINT)0>> const&,std::vector<glitch::collada::modularSkinnedMesh::SCategory,glitch::core::SAllocator<glitch::collada::modularSkinnedMesh::SCategory,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada18modularSkinnedMesh4SKeyC1ERKN5boost13intrusive_ptrINS0_8CResFileEEERKSt6vectorINS1_14SModularBufferENS_4core10SAllocatorISA_LNS_6memory13E_MEMORY_HINTE0EEEERKS9_INS1_9SCategoryENSC_ISJ_LSE_0EEEE'
unsigned int glitch::collada::modularSkinnedMesh::SKey::Construct(uint32_t *a1, int *a2, int *a3, int *a4)
{
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  glitch::video::CMaterial::Self *v8;
  int v9;
  int *v10;
  int v11;
  unsigned int v12;
  int *v13;
  int *v14;
  int *v15;
  int *v16;
  int *v17;
  uint32_t *v18;
  unsigned int v19;
  uint32_t *v20;
  unsigned int result;
  uint8_t *src;
  size_t v23;
  size_t n;
  int v25;
  int v26;
  int v27;
  int v28;
  char *v29;
  unsigned int v30;
  char *v31;
  char *v32;
  int v33;
  char *v34;
  int v35;
  unsigned int v36;
  unsigned int *v37;
  uint32_t *v38;
  char *v39;
  char *v40;
  uint32_t *v41;
  char *v42;
  char *v43;
  uint32_t *v44;
  size_t v45;
  int v46;
  int v47;
  uint32_t *v48;
  int v49;
  uint32_t *v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  size_t v62;
  int v63;
  int v64;
  size_t v65;
  int v66;
  size_t v67;
  int v68;
  int *v69;
  int v70;
  unsigned int v71;

  v4 = *a2;
  a1[1] = 0;
  *a1 = v4;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  v58 = *a3;
  v61 = a3[1];
  v5 = -858993459 * ((v61 - *a3) >> 3);
  if ( v5 <= 0x3FFFFFFF )
  {
    if ( v5 != 0 )
    {
      v45 = 858993460 * ((a3[1] - *a3) >> 3);
      v46 = sub_4EBDC0(v45);
      v47 = a1[1];
      if ( v47 != 0 )
      {
        v56 = v46;
        gll_operator_delete_arr(v47);
        v46 = v56;
      }
      a1[1] = v46;
      a1[2] = v46;
      a1[3] = v45 + v46;
      v58 = *a3;
      v61 = a3[1];
    }
    if ( v58 != v61 )
    {
      v6 = v58;
      do
      {
        while ( 1 )
        {
          v8 = *(glitch::video::CMaterial::Self **)(v6 + 8);
          v9 = *(uint32_t *)(*((uint32_t *)v8 + 1) + 24) + 12 * (uint8_t)glitch::video::CMaterial::getTechnique(v8);
          v10 = (int *)a1[2];
          v11 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v9 + 4) + 32) + 40) & *(uint32_t *)(v6 + 16);
          if ( v10 != (int *)a1[3] )
            break;
          v64 = 4;
          v12 = ((int)(uintptr_t)(v10) - a1[1]) >> 2;
          if ( v12 != 0 )
          {
            if ( v12 > 2 * v12 || 2 * v12 > 0x3FFFFFFF )
              v64 = -4;
            else
              v64 = 8 * v12;
          }
          v52 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v9 + 4) + 32) + 40) & *(uint32_t *)(v6 + 16);
          v55 = ((int)(uintptr_t)(v10) - a1[1]) >> 2;
          v66 = sub_4EBDC0(v64);
          v67 = v66 + 4;
          v13 = (int *)(v66 + 4 * v55);
          if ( v13 != nullptr )
            *v13 = v52;
          v14 = (int *)a1[1];
          v69 = v14;
          if ( v10 != v14 )
          {
            v15 = (int *)v66;
            do
            {
              if ( v15 != nullptr )
                *v15 = *v14;
              ++v14;
              ++v15;
            }
            while ( v10 != v14 );
            v67 = v66 + 4 * ((unsigned int)((char *)v10 - (char *)(v69 + 1)) >> 2) + 8;
          }
          v16 = (int *)a1[2];
          if ( v10 != v16 )
          {
            v17 = v10;
            v18 = (uint32_t *)v67;
            do
            {
              if ( v18 != nullptr )
                *v18 = *v17;
              ++v17;
              ++v18;
            }
            while ( v16 != v17 );
            v67 += 4 * ((unsigned int)((char *)v16 - (char *)(v10 + 1)) >> 2) + 4;
          }
          if ( a1[1] != 0 )
            gll_operator_delete_arr(a1[1]);
          a1[1] = v66;
          v6 += 40;
          a1[2] = v67;
          a1[3] = v64 + v66;
          if ( v61 == v6 )
            goto LABEL_29;
        }
        v7 = 0;
        if ( v10 != nullptr )
        {
          *v10 = v11;
          v7 = a1[2];
        }
        v6 += 40;
        a1[2] = v7 + 4;
      }
      while ( v61 != v6 );
    }
LABEL_29:
    v65 = a4[1];
    v63 = *a4;
    v19 = 954437177 * ((int)(v65 - *a4) >> 2);
    if ( v19 <= 0x3FFFFFFF )
    {
      v20 = (uint32_t *)a1[4];
      result = (a1[6] - (int)(uintptr_t)(v20)) >> 2;
      if ( v19 > result )
      {
        v48 = (uint32_t *)a1[5];
        v49 = 0;
        v62 = 0;
        v60 = v48 - v20;
        if ( v19 != 0 )
        {
          v62 = -477218588 * ((int)(v65 - *a4) >> 2);
          v49 = sub_4EBDC0(v62);
        }
        if ( v20 != v48 )
        {
          v50 = (uint32_t *)v49;
          do
          {
            if ( v50 != nullptr )
              *v50 = *v20;
            ++v20;
            ++v50;
          }
          while ( v48 != v20 );
        }
        v51 = a1[4];
        if ( v51 != 0 )
        {
          v57 = v49;
          gll_operator_delete_arr(v51);
          v49 = v57;
        }
        a1[4] = v49;
        a1[5] = v49 + 4 * v60;
        result = v62 + v49;
        a1[6] = result;
        v65 = a4[1];
        v63 = *a4;
      }
      if ( v65 != v63 )
      {
        v59 = v63;
        while ( 1 )
        {
          result = *(uint32_t *)(v59 + 4);
          if ( result != 0 )
            break;
LABEL_53:
          v59 += 36;
          if ( v65 == v59 )
            return result;
        }
        src = *(uint8_t **)(result + 8);
        if ( src == nullptr )
          sub_18FFFD0("basic_string::_S_construct null not valid");
        v23 = strlen(*(const char **)(result + 8));
        if ( src == &src[v23] )
        {
          v29 = (char *)&unk_20D3E78;
LABEL_45:
          v30 = 0;
          v31 = &v29[*((uint32_t *)v29 - 3)];
          if ( v31 != v29 )
          {
            v32 = v29;
            do
            {
              v33 = *v32++;
              v30 ^= (v30 << 6) + (v30 >> 2) - 1640531527 + v33;
            }
            while ( v32 != v31 );
          }
          v34 = (char *)a1[5];
          if ( v34 == (char *)a1[6] )
          {
            v68 = 4;
            v36 = (int)(uintptr_t)(&v34[-a1[4]]) >> 2;
            if ( v36 != 0 )
            {
              if ( v36 > 2 * v36 || 2 * v36 > 0x3FFFFFFF )
                v68 = -4;
              else
                v68 = 8 * v36;
            }
            v54 = (int)(uintptr_t)(&v34[-a1[4]]) >> 2;
            v70 = sub_4EBDC0(v68);
            v71 = v70 + 4;
            v37 = (unsigned int *)(v70 + 4 * v54);
            if ( v37 != nullptr )
              *v37 = v30;
            v38 = (uint32_t *)(a1);
            v39 = (char *)a1[4];
            if ( v34 != v39 )
            {
              v40 = (char *)a1[4];
              v41 = (uint32_t *)v70;
              do
              {
                if ( v41 != nullptr )
                  *v41 = *(uint32_t *)v40;
                v40 += 4;
                ++v41;
              }
              while ( v34 != v40 );
              v38 = (uint32_t *)(a1);
              v71 = v70 + 4 * ((unsigned int)(v34 - (v39 + 4)) >> 2) + 8;
            }
            v42 = (char *)v38[5];
            if ( v34 != v42 )
            {
              v43 = v34;
              v44 = (uint32_t *)v71;
              do
              {
                if ( v44 != nullptr )
                  *v44 = *(uint32_t *)v43;
                v43 += 4;
                ++v44;
              }
              while ( v42 != v43 );
              v38 = (uint32_t *)(a1);
              v71 += 4 * ((unsigned int)(v42 - (v34 + 4)) >> 2) + 4;
            }
            if ( v38[4] != 0 )
              gll_operator_delete_arr(v38[4]);
            a1[4] = v70;
            a1[5] = v71;
            a1[6] = v68 + v70;
          }
          else
          {
            v35 = 0;
            if ( v34 != nullptr )
            {
              *(uint32_t *)v34 = v30;
              v35 = a1[5];
            }
            a1[5] = v35 + 4;
          }
          result = (unsigned int)(uintptr_t)(v29 - 12);
          if ( v29 - 12 != (char *)&dword_20D3E6C
            && __sync_fetch_and_add((volatile int32_t *)v29 - 1, 0xFFFFFFFF) <= 0 )
          {
            result = gll_operator_delete_arr((int)(uintptr_t)(v29 - 12));
          }
          goto LABEL_53;
        }
        n = v23;
        if ( v23 > 0x3FFFFFFC )
          sub_1900180("basic_string::_S_create");
        if ( v23 + 29 > 0x1000 && v23 != 0 )
        {
          v25 = ((uint16_t)v23 + 29) & 0xFFF;
          v26 = 1073741820;
          if ( v23 + 4096 - v25 <= 0x3FFFFFFC )
            v26 = v23 + 4096 - v25;
          v27 = sub_4EBDC0(v26 + 13);
          *(uint32_t *)(v27 + 4) = v26;
          v28 = v27;
          *(uint32_t *)(v27 + 8) = 0;
          v29 = (char *)(v27 + 12);
        }
        else
        {
          v28 = sub_4EBDC0(v23 + 13);
          *(uint32_t *)(v28 + 4) = n;
          *(uint32_t *)(v28 + 8) = 0;
          v29 = (char *)(v28 + 12);
          if ( n == 1 )
          {
            *(uint8_t *)(v28 + 12) = *src;
LABEL_43:
            if ( (int *)v28 != (int *)(uintptr_t)(&dword_20D3E6C) )
            {
              *(uint32_t *)(v28 + 8) = 0;
              *(uint32_t *)v28 = n;
              v29[n] = 0;
            }
            goto LABEL_45;
          }
        }
        v53 = v28;
        memcpy(v29, src, n);
        v28 = v53;
        goto LABEL_43;
      }
      return result;
    }
  }
  sub_1900180("vector::reserve");
}


// ============================================================================
// Address:   0xd0ac40 (size: 1850 bytes)
// Symbol:    _ZN6glitch7collada13CMorphingMesh15instanciateMeshEPNS_5video12IVideoDriverEPNS0_14CRootSceneNodeE
// Demangled: glitch::collada::CMorphingMesh::instanciateMesh(glitch::video::IVideoDriver *,glitch::collada::CRootSceneNode *)
// ============================================================================
int glitch::collada::CMorphingMesh::instanciateMesh(
        volatile int32_t ***self,
        glitch::video::IVideoDriver::Self *a2,
        glitch::collada::CRootSceneNode::Self *a3)
{
  glitch::collada::CMorphingMesh::Self *v3;
  volatile int32_t **v4;
  volatile int32_t *v5;
  unsigned int v6;
  glitch::collada::CMorphingMesh::Self *v7;
  uint32_t *v8;
  int v9;
  bool v10;
  volatile int32_t **v11;
  volatile int32_t **v12;
  volatile int32_t *v13;
  int v14;
  int v15;
  volatile int32_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  volatile int32_t *v21;
  int v22;
  char *v23;
  int *v24;
  int v25;
  char *v26;
  volatile int32_t *v27;
  int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  volatile int32_t **v32;
  volatile int32_t **v33;
  char *v34;
  glitch::video::CMaterialVertexAttributeMap::Self *v35;
  glitch::video::CMaterial::Self *v36;
  int result;
  unsigned int v38;
  int v39;
  bool v40;
  unsigned int v41;
  unsigned int v42;
  char *v43;
  char *v44;
  char *v45;
  volatile int32_t **v46;
  char *v47;
  glitch::video::CMaterialVertexAttributeMap::Self *v48;
  glitch::video::CMaterial::Self *v49;
  unsigned int v50;
  uint32_t *v51;
  char *v52;
  typedef char *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef char *_g4_t_v55;
  typedef glitch::collada::CRootSceneNode::Self **_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int *_g4_t_v66;
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v67;
  typedef volatile int32_t ***_g4_t_v68;
  typedef char *_g4_t_v69;
  typedef glitch::collada::CMorphingMesh::Self *_g4_t_v70;
  typedef volatile int32_t *_g4_t_v71;
  typedef volatile int32_t *_g4_t_v72;
  typedef char *_g4_t_v73;
  typedef char *_g4_t_v74;
  typedef char *_g4_t_v75;
  typedef size_t _g4_t_v76;
  typedef signed int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v80;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v81;
  typedef volatile int32_t *_g4_t_v82;
  typedef volatile int32_t **_g4_t_v83;
  typedef volatile int32_t **_g4_t_v84;
  typedef int _g4_t_v85;
  typedef volatile int32_t **_g4_t_v86;
  typedef volatile int32_t **_g4_t_v87;
  typedef glitch::collada::CMorphingMesh::Self *_g4_t_v88;
  typedef char *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v91;
  typedef volatile int32_t *_g4_t_v92;
  typedef volatile int32_t *_g4_t_v93;
  typedef volatile int32_t *_g4_t_v94;
  typedef volatile int32_t *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef volatile int32_t *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef glitch::collada::CMorphingMesh::Self **_g4_t_v105;
  typedef int _g4_t_v106;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v53)) > _g4_s0 ? (12u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v54)) > _g4_s1 ? (16u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v55)) > _g4_s2 ? (20u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v56)) > _g4_s3 ? (24u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v57)) > _g4_s4 ? (28u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v58)) > _g4_s5 ? (32u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v59)) > _g4_s6 ? (36u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v60)) > _g4_s7 ? (40u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v61)) > _g4_s8 ? (44u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v62)) > _g4_s9 ? (48u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v63)) > _g4_s10 ? (48u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v64)) > _g4_s11 ? (48u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v65)) > _g4_s12 ? (52u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v66)) > _g4_s13 ? (52u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v67)) > _g4_s14 ? (56u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v68)) > _g4_s15 ? (56u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v69)) > _g4_s16 ? (56u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v70)) > _g4_s17 ? (60u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v71)) > _g4_s18 ? (60u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v72)) > _g4_s19 ? (60u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v73)) > _g4_s20 ? (64u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v74)) > _g4_s21 ? (64u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v75)) > _g4_s22 ? (64u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v76)) > _g4_s23 ? (68u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v77)) > _g4_s24 ? (68u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v78)) > _g4_s25 ? (68u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v79)) > _g4_s26 ? (72u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v80)) > _g4_s27 ? (72u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v81)) > _g4_s28 ? (72u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v82)) > _g4_s29 ? (76u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v83)) > _g4_s30 ? (76u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v84)) > _g4_s31 ? (76u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v85)) > _g4_s32 ? (80u + sizeof(_g4_t_v85)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v86)) > _g4_s33 ? (80u + sizeof(_g4_t_v86)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v87)) > _g4_s34 ? (80u + sizeof(_g4_t_v87)) : _g4_s34,
    _g4_s36 = (84u + sizeof(_g4_t_v88)) > _g4_s35 ? (84u + sizeof(_g4_t_v88)) : _g4_s35,
    _g4_s37 = (84u + sizeof(_g4_t_v89)) > _g4_s36 ? (84u + sizeof(_g4_t_v89)) : _g4_s36,
    _g4_s38 = (84u + sizeof(_g4_t_v90)) > _g4_s37 ? (84u + sizeof(_g4_t_v90)) : _g4_s37,
    _g4_s39 = (88u + sizeof(_g4_t_v91)) > _g4_s38 ? (88u + sizeof(_g4_t_v91)) : _g4_s38,
    _g4_s40 = (92u + sizeof(_g4_t_v92)) > _g4_s39 ? (92u + sizeof(_g4_t_v92)) : _g4_s39,
    _g4_s41 = (96u + sizeof(_g4_t_v93)) > _g4_s40 ? (96u + sizeof(_g4_t_v93)) : _g4_s40,
    _g4_s42 = (100u + sizeof(_g4_t_v94)) > _g4_s41 ? (100u + sizeof(_g4_t_v94)) : _g4_s41,
    _g4_s43 = (104u + sizeof(_g4_t_v95)) > _g4_s42 ? (104u + sizeof(_g4_t_v95)) : _g4_s42,
    _g4_s44 = (108u + sizeof(_g4_t_v96)) > _g4_s43 ? (108u + sizeof(_g4_t_v96)) : _g4_s43,
    _g4_s45 = (112u + sizeof(_g4_t_v97)) > _g4_s44 ? (112u + sizeof(_g4_t_v97)) : _g4_s44,
    _g4_s46 = (116u + sizeof(_g4_t_v98)) > _g4_s45 ? (116u + sizeof(_g4_t_v98)) : _g4_s45,
    _g4_s47 = (120u + sizeof(_g4_t_v99)) > _g4_s46 ? (120u + sizeof(_g4_t_v99)) : _g4_s46,
    _g4_s48 = (124u + sizeof(_g4_t_v100)) > _g4_s47 ? (124u + sizeof(_g4_t_v100)) : _g4_s47,
    _g4_s49 = (128u + sizeof(_g4_t_v101)) > _g4_s48 ? (128u + sizeof(_g4_t_v101)) : _g4_s48,
    _g4_s50 = (132u + sizeof(_g4_t_v102)) > _g4_s49 ? (132u + sizeof(_g4_t_v102)) : _g4_s49,
    _g4_s51 = (136u + sizeof(_g4_t_v103)) > _g4_s50 ? (136u + sizeof(_g4_t_v103)) : _g4_s50,
    _g4_s52 = (140u + sizeof(_g4_t_v104)) > _g4_s51 ? (140u + sizeof(_g4_t_v104)) : _g4_s51,
    _g4_s53 = (144u + sizeof(_g4_t_v105)) > _g4_s52 ? (144u + sizeof(_g4_t_v105)) : _g4_s52,
    _g4_s54 = (148u + sizeof(_g4_t_v106)) > _g4_s53 ? (148u + sizeof(_g4_t_v106)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 64u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 68u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 72u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 72u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 72u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 76u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 76u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 76u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 80u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 80u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 80u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 84u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 84u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 84u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 88u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 92u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 96u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 100u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 104u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 108u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 112u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 116u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 120u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 124u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 128u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 132u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 136u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 140u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 144u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 148u);

  v105 = (glitch::collada::CMorphingMesh::Self **)&self;
  v3 = (glitch::collada::CMorphingMesh::Self *)self;
  v73 = (char *)a2;
  v67 = a3;
  v4 = *(self + 16);
  v5 = *v4;
  v6 = (unsigned int)(uintptr_t)(v4[4]) + 1;
  v82 = v5;
  if ( v6 > 0x1FFFFFFF )
    sub_1900180("vector::reserve");
  v7 = (glitch::collada::CMorphingMesh::Self *)*(self + 13);
  if ( v6 > ((char *)*(self + 15) - (char *)v7) >> 3 )
  {
    v76 = 0;
    v88 = (glitch::collada::CMorphingMesh::Self *)*(self + 14);
    v79 = (v88 - v7) >> 3;
    v85 = 0;
    if ( v6 != 0 )
    {
      v76 = 8 * v6;
      v85 = sub_4EBDC0(8 * v6);
      if ( v7 != v88 )
      {
LABEL_5:
        v70 = v3;
        v8 = (uint32_t *)v85;
        do
        {
          if ( v8 != nullptr )
          {
            v9 = *(uint32_t *)v7;
            v10 = *(uint32_t *)v7 == 0;
            *v8 = *(uint32_t *)v7;
            if ( !v10 )
              sub_8B1B00((volatile int32_t *)(v9 + 4));
            v8[1] = *((uint32_t *)v7 + 1);
          }
          v7 = (glitch::collada::CMorphingMesh::Self *)((char *)v7 + 8);
          v8 += 2;
        }
        while ( v88 != v7 );
        v3 = v70;
      }
    }
    else if ( v7 != v88 )
    {
      goto LABEL_5;
    }
    v11 = *((volatile int32_t ***)v3 + 13);
    if ( *((volatile int32_t ***)v3 + 14) != v11 )
    {
      v88 = v3;
      v12 = *((volatile int32_t ***)v3 + 14);
      do
      {
        if ( *v11 != nullptr )
          sub_5459C0(*v11);
        v11 += 2;
      }
      while ( v12 != v11 );
      v3 = v88;
      v11 = *((volatile int32_t ***)v88 + 13);
    }
    if ( v11 != nullptr )
      gll_operator_delete_arr((int)(uintptr_t)(v11));
    *((uint32_t *)v3 + 13) = v85;
    *((uint32_t *)v3 + 14) = v85 + 8 * v79;
    *((uint32_t *)v3 + 15) = v85 + v76;
  }
  v55 = (char *)v82 + 1;
  glitch::collada::CColladaDatabase::constructGeometry(
    (glitch::collada::CColladaDatabase::Self *)&v92,
    (glitch::collada::CMorphingMesh::Self *)((char *)v3 + 12),
    v73);
  v71 = v92;
  if ( v92 != nullptr )
  {
    v13 = v92 + 1;
    sub_8B1B00(v92 + 1);
    if ( v92 != nullptr )
      sub_5459C0(v92);
    v95 = v71;
    goto LABEL_25;
  }
  v91 = v67;
  if ( v67 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v67 + *(uint32_t *)(*(uint32_t *)v67 - 16) + 4));
  v55 = (char *)v82 + 1;
  v54 = v73;
  v56 = &v91;
  v53 = (char *)v3 + 12;
  glitch::collada::CColladaDatabase::constructController(&v93);
  v71 = v93;
  if ( v93 != nullptr )
  {
    sub_8B1B00(v93 + 1);
    if ( v93 != nullptr )
      sub_5459C0(v93);
  }
  if ( v91 != nullptr )
    sub_5459C0((volatile int32_t *)((char *)v91 + *(uint32_t *)(*(uint32_t *)v91 - 16)));
  v95 = v71;
  if ( v71 != nullptr )
  {
    v13 = v71 + 1;
LABEL_25:
    sub_8B1B00(v13);
  }
  v68 = (volatile int32_t ***)((char *)v3 + 52);
  v14 = *((uint32_t *)v3 + 14);
  v10 = v14 == *((uint32_t *)v3 + 15);
  v96 = 1065353216;
  if ( v10 )
  {
    sub_D039D0(v68, (volatile int32_t **)v14, &v95);
  }
  else
  {
    v15 = 0;
    if ( v14 != 0 )
    {
      v16 = v95;
      v10 = v95 == nullptr;
      *(uint32_t *)v14 = (uint32_t)(uintptr_t)(v95);
      if ( !v10 )
        sub_8B1B00(v16 + 1);
      *(uint32_t *)(v14 + 4) = v96;
      v15 = *((uint32_t *)v3 + 14);
    }
    *((uint32_t *)v3 + 14) = v15 + 8;
  }
  if ( v95 != nullptr )
    sub_5459C0(v95);
  v17 = *((uint32_t *)v3 + 16);
  v77 = *(uint32_t *)(v17 + 16);
  if ( v77 > 0 )
  {
    v88 = nullptr;
    while ( 1 )
    {
      v85 = 4 * (uint32_t)(uintptr_t)(v88);
      v22 = v17 + *(uint32_t *)(v17 + 20) + 20;
      v23 = nullptr;
      v24 = (int *)(v22 + 4 * (uint32_t)(uintptr_t)(v88));
      v25 = *v24;
      v53 = (char *)v3 + 12;
      v26 = (char *)v24 + *v24;
      if ( v25 != 0 )
        v23 = v26;
      v55 = v23;
      v54 = v73;
      glitch::collada::CColladaDatabase::constructGeometry(&v94);
      v27 = v94;
      if ( v94 != nullptr )
      {
        v82 = v94 + 1;
        sub_8B1B00(v94 + 1);
        if ( v94 != nullptr )
          sub_5459C0(v94);
        v18 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v3 + 16) + 28) + *((uint32_t *)v3 + 16) + v85 + 28);
        v99 = v27;
        v62 = v18;
        sub_8B1B00(v82);
        v19 = *((uint32_t *)v3 + 14);
        v10 = v19 == *((uint32_t *)v3 + 15);
        v100 = v62;
        if ( v10 )
        {
LABEL_54:
          sub_D039D0(v68, (volatile int32_t **)v19, &v99);
          goto LABEL_44;
        }
      }
      else
      {
        v19 = *((uint32_t *)v3 + 14);
        v10 = v19 == *((uint32_t *)v3 + 15);
        v28 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v3 + 16) + 28) + *((uint32_t *)v3 + 16) + v85 + 28);
        v99 = nullptr;
        v100 = v28;
        if ( v10 )
          goto LABEL_54;
      }
      v20 = 0;
      if ( v19 != 0 )
      {
        v21 = v99;
        v10 = v99 == nullptr;
        *(uint32_t *)v19 = (uint32_t)(uintptr_t)(v99);
        if ( !v10 )
        {
          v62 = v19;
          sub_8B1B00(v21 + 1);
          v19 = v62;
        }
        *(uint32_t *)(v19 + 4) = v100;
        v20 = *((uint32_t *)v3 + 14);
      }
      *((uint32_t *)v3 + 14) = v20 + 8;
LABEL_44:
      if ( v99 != nullptr )
        sub_5459C0(v99);
      if ( v27 != nullptr )
        sub_5459C0(v27);
      v88 = (glitch::collada::CMorphingMesh::Self *)((char *)v88 + 1);
      if ( v88 == (glitch::collada::CMorphingMesh::Self *)v77 )
        break;
      v17 = *((uint32_t *)v3 + 16);
    }
  }
  v29 = (*(int (**)(uint32_t, char *, char *, char *, glitch::collada::CRootSceneNode::Self **, int, int, int, int, int, int, int, volatile int32_t ***, volatile int32_t *, char *, signed int, int, volatile int32_t *, int, glitch::collada::CMorphingMesh::Self *, glitch::collada::CRootSceneNode::Self *, volatile int32_t *, volatile int32_t *, volatile int32_t *, volatile int32_t *, int, int, int, volatile int32_t *, int, int, int, int, int))(***((uint32_t ***)v3 + 13) + 16))(
          **((uint32_t **)v3 + 13),
          v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62,
          v65,
          v68,
          v71,
          v73,
          v77,
          (int)(uintptr_t)(v3) + 12,
          v82,
          v85,
          v88,
          v91,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104);
  v30 = *((uint32_t *)v3 + 10);
  v89 = *((char **)v3 + 11);
  v31 = -1431655765 * ((int)(uintptr_t)(&v89[-v30]) >> 2);
  if ( v29 <= v31 )
  {
    if ( v29 < v31 )
    {
      v32 = (volatile int32_t **)(v30 + 12 * v29);
      v86 = v32;
      if ( v89 != (char *)v32 )
      {
        v33 = v32;
        v80 = (glitch::video::IVideoDriver::Self *)(v32 + 2);
        v83 = v32 + 1;
        v74 = (char *)v3;
        do
        {
          v34 = (char *)((char *)v33 - (char *)v86);
          v35 = *(glitch::video::CMaterialVertexAttributeMap::Self **)((char *)v80 + ((char *)v33 - (char *)v86));
          if ( v35 != nullptr && __sync_fetch_and_add((volatile int32_t *)v35, 0xFFFFFFFF) == 1 )
          {
            glitch::video::CMaterialVertexAttributeMap::Destroy(v35);
            gll_operator_delete_arr((int)(uintptr_t)(v35));
            v34 = (char *)((char *)v33 - (char *)v86);
          }
          v36 = *(glitch::video::CMaterial::Self **)((char *)v83 + (uint32_t)(uintptr_t)(v34));
          if ( v36 != nullptr )
          {
            v10 = *(uint32_t *)v36 == 2;
            _mm_mfence();
            if ( v10 )
              glitch::video::CMaterial::removeFromRootSceneNode(v36);
            if ( __sync_fetch_and_add((volatile int32_t *)v36, 0xFFFFFFFF) == 1 )
            {
              glitch::video::CMaterial::Destroy(v36);
              gll_operator_delete_arr((int)(uintptr_t)(v36));
            }
          }
          if ( *v33 != nullptr )
            sub_5459C0(*v33);
          v33 += 3;
        }
        while ( v89 != (char *)v33 );
        v3 = (glitch::collada::CMorphingMesh::Self *)v74;
      }
      *((uint32_t *)v3 + 11) = (uint32_t)(uintptr_t)(v86);
    }
    goto LABEL_74;
  }
  v38 = v29 - v31;
  if ( v29 == v31 )
    goto LABEL_74;
  if ( v38 > -1431655765 * ((*((uint32_t *)v3 + 12) - (int)(uintptr_t)(v89)) >> 2) )
  {
    if ( v38 > 357913941 - v31 )
      sub_1900180("vector::_M_fill_insert");
    v39 = -1431655765 * ((int)(uintptr_t)(&v89[-v30]) >> 2);
    v78 = -4;
    if ( v38 >= v31 )
      v39 = v38;
    v40 = __CFADD__(v31, v39);
    v41 = v31 + v39;
    if ( !v40 && v41 <= 0x15555555 )
    {
      if ( v41 == 0 )
      {
        v78 = 0;
        v75 = nullptr;
        goto LABEL_88;
      }
      v78 = 12 * v41;
    }
    v64 = v38;
    v106 = 0;
    v75 = (char *)sub_4EBDC0(v78);
    v38 = v64;
LABEL_88:
    v42 = v38;
    v43 = &v75[12 * v31];
    do
    {
      if ( v43 != nullptr )
      {
        *(uint32_t *)v43 = 0;
        *((uint32_t *)v43 + 1) = 0;
        *((uint32_t *)v43 + 2) = 0;
      }
      v43 += 12;
      --v42;
    }
    while ( v42 != 0 );
    v63 = v38;
    v44 = sub_D01C90(*((char **)v3 + 10), v89, v75);
    v45 = sub_D01C90(v89, *((char **)v3 + 11), &v44[12 * v63]);
    v46 = *((volatile int32_t ***)v3 + 10);
    v69 = v45;
    v87 = *((volatile int32_t ***)v3 + 11);
    v90 = (int)(uintptr_t)(v46);
    if ( v87 != v46 )
    {
      v81 = (glitch::video::IVideoDriver::Self *)(v46 + 2);
      v84 = v46 + 1;
      v66 = (int *)v3;
      do
      {
        v47 = (char *)v46 - v90;
        v48 = *(glitch::video::CMaterialVertexAttributeMap::Self **)((char *)v81 + (uint32_t)(uintptr_t)(v46) - v90);
        if ( v48 != nullptr && __sync_fetch_and_add((volatile int32_t *)v48, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterialVertexAttributeMap::Destroy(v48);
          gll_operator_delete_arr((int)(uintptr_t)(v48));
          v47 = (char *)v46 - v90;
        }
        v49 = *(glitch::video::CMaterial::Self **)((char *)v84 + (uint32_t)(uintptr_t)(v47));
        if ( v49 != nullptr )
        {
          v10 = *(uint32_t *)v49 == 2;
          _mm_mfence();
          if ( v10 )
            glitch::video::CMaterial::removeFromRootSceneNode(v49);
          if ( __sync_fetch_and_add((volatile int32_t *)v49, 0xFFFFFFFF) == 1 )
          {
            glitch::video::CMaterial::Destroy(v49);
            gll_operator_delete_arr((int)(uintptr_t)(v49));
          }
        }
        if ( *v46 != nullptr )
          sub_5459C0(*v46);
        v46 += 3;
      }
      while ( v87 != v46 );
      v3 = (glitch::collada::CMorphingMesh::Self *)v66;
      v90 = v66[10];
    }
    if ( v90 != 0 )
      gll_operator_delete_arr(v90);
    *((uint32_t *)v3 + 10) = (uint32_t)(uintptr_t)(v75);
    *((uint32_t *)v3 + 11) = (uint32_t)(uintptr_t)(v69);
    *((uint32_t *)v3 + 12) = (uint32_t)(uintptr_t)(&v75[v78]);
    goto LABEL_74;
  }
  v50 = v29 - v31;
  v51 = *((uint32_t **)v3 + 11);
  do
  {
    if ( v51 != nullptr )
    {
      *v51 = 0;
      v51[1] = 0;
      v51[2] = 0;
    }
    v51 += 3;
    --v50;
  }
  while ( v50 != 0 );
  v52 = (char *)(*((uint32_t *)v3 + 11) + 12 * v38);
  *((uint32_t *)v3 + 11) = (uint32_t)(uintptr_t)(v52);
  sub_D01C90(v89, v89, v52);
LABEL_74:
  result = (int)(uintptr_t)(v72);
  if ( v72 != nullptr )
    return sub_5459C0(v72);
  return result;
}


// ============================================================================
// Address:   0xd0b380 (size: 2588 bytes)
// Symbol:    _ZN6glitch7collada13CMorphingMesh5morphEj
// Demangled: glitch::collada::CMorphingMesh::morph(unsigned int)
// ============================================================================


// ============================================================================
// Address:   0xd0bda0 (size: 710 bytes)
// Symbol:    _ZN6glitch7collada13CMorphingMesh27onPrepareBufferForRenderingENS0_21E_PREPARE_BUFFER_STEPEPNS_5video12IVideoDriverEj
// Demangled: glitch::collada::CMorphingMesh::onPrepareBufferForRendering(glitch::collada::E_PREPARE_BUFFER_STEP,glitch::video::IVideoDriver *,unsigned int)
// ============================================================================
int glitch::collada::CMorphingMesh::onPrepareBufferForRendering(
        glitch::collada::CMorphingMesh::Self *a1,
        int a2,
        int a3,
        int a4)
{
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef glitch::video::CMaterial::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef glitch::video::CMaterial::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v20)) > _g4_s3 ? (8u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v21)) > _g4_s4 ? (8u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v22)) > _g4_s5 ? (8u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v23)) > _g4_s6 ? (8u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v24)) > _g4_s7 ? (12u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v25)) > _g4_s8 ? (12u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v26)) > _g4_s9 ? (28u + sizeof(_g4_t_v26)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);

  HIWORD(v4) = HIWORD(a2);
  v5 = a4;
  (*(void (**)(glitch::collada::CMorphingMesh::Self *))(*(uint32_t *)a1 + 16))(a1);
  result = (*(int (**)(uint32_t, int, int, int))(***((uint32_t ***)a1 + 13) + 64))(
             **((uint32_t **)a1 + 13),
             a2,
             a3,
             a4);
  if ( a2 != 0 )
  {
    v8 = *((uint32_t *)a1 + 10);
    v9 = 12 * a4;
    v10 = *(uint32_t *)(v8 + 12 * a4);
    if ( v10 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v10 + 4));
      v8 = *((uint32_t *)a1 + 10);
      v9 = 12 * a4;
    }
    v18 = *(glitch::video::CMaterial::Self **)(v8 + v9 + 4);
    v11 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v18 + 1) + 24)
                                            + 12 * (uint8_t)glitch::video::CMaterial::getTechnique(v18)
                                            + 4)
                                + 32)
                    + 40);
    v26[0] = *(uint32_t *)(v10 + 36);
    v12 = (*(int (**)(int, uint32_t, uint32_t, uint32_t, int, int, uint32_t *))(*(uint32_t *)a3 + 184))(
            a3,
            0,
            *(uint32_t *)(v10 + 24),
            *(uint32_t *)(v10 + 28),
            v11 & 0x10001,
            v10 + 8,
            v26);
    v13 = *(uint32_t *)(v10 + 36);
    v24 = v26[0];
    if ( v26[0] != v13 )
    {
      if ( v13 != 0 && *(uint8_t *)(v10 + 40) != 0 )
      {
        v23 = v12;
        (*(void (**)(int))(*(uint32_t *)v13 + 4))(v13);
        v12 = v23;
      }
      *(uint8_t *)(v10 + 40) = 1;
      *(uint32_t *)(v10 + 36) = v24;
    }
    if ( (v12 & 4) != 0 )
    {
      *((uint32_t *)a1 + 8) |= 1 << a4;
LABEL_25:
      v22 = v12;
      if ( v12 == 5 )
        v5 = a4 | 0x80000000;
      glitch::collada::CMorphingMesh::morph(a1, v5);
      v12 = v22;
    }
LABEL_16:
    v19 = v12;
    sub_5459C0((volatile int32_t *)v10);
    return v19;
  }
  LOWORD(v4) = 1;
  if ( ((1 << a4) & *((uint32_t *)a1 + 8)) == 0 )
  {
    v14 = (int *)(*((uint32_t *)a1 + 10) + 12 * a4);
    v10 = *v14;
    if ( *v14 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v10 + 4));
      v14 = (int *)(12 * a4 + *((uint32_t *)a1 + 10));
    }
    v20 = (glitch::video::CMaterial::Self *)v14[1];
    v15 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v20 + 1) + 24)
                                            + 12 * (uint8_t)glitch::video::CMaterial::getTechnique(v20)
                                            + 4)
                                + 32)
                    + 40);
    v26[0] = *(uint32_t *)(v10 + 36);
    v12 = (*(int (**)(int, int, uint32_t, uint32_t, int, int, uint32_t *))(*(uint32_t *)a3 + 184))(
            a3,
            1,
            *(uint32_t *)(v10 + 24),
            *(uint32_t *)(v10 + 28),
            v15 & 0x10001,
            v10 + 8,
            v26);
    v16 = *(uint32_t *)(v10 + 36);
    v25 = v26[0];
    if ( v26[0] != v16 )
    {
      if ( v16 != 0 && *(uint8_t *)(v10 + 40) != 0 )
      {
        v21 = v12;
        (*(void (**)(int))(*(uint32_t *)v16 + 4))(v16);
        v12 = v21;
      }
      *(uint8_t *)(v10 + 40) = 1;
      *(uint32_t *)(v10 + 36) = v25;
    }
    if ( (v12 & 4) == 0 )
      goto LABEL_16;
    goto LABEL_25;
  }
  v7 = *((uint32_t *)a1 + 20);
  if ( _bittest(&v7, (uint8_t)a4) )
  {
    v17 = result;
    if ( result == 5 )
      v5 = a4 | 0x80000000;
    glitch::collada::CMorphingMesh::morph(a1, v5);
    *((uint32_t *)a1 + 20) &= ~(v4 << v5);
    return v17;
  }
  return result;
}


// ============================================================================
// Address:   0xd0c070 (size: 1807 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh15instanciateMeshEPNS_5video12IVideoDriverEPNS0_14CRootSceneNodeE
// Demangled: glitch::collada::CSkinnedMesh::instanciateMesh(glitch::video::IVideoDriver *,glitch::collada::CRootSceneNode *)
// ============================================================================
unsigned int glitch::collada::CSkinnedMesh::instanciateMesh(
        glitch::collada::CSkinnedMesh::Self *self,
        glitch::video::IVideoDriver::Self *a2,
        glitch::collada::CRootSceneNode::Self *a3)
{
  glitch::collada::CSkinnedMesh::Self *v3;
  int v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  uint32_t *v8;
  unsigned int result;
  int v10;
  unsigned int v11;
  volatile int32_t **v12;
  int v13;
  glitch::video::CMaterialVertexAttributeMap::Self *v14;
  glitch::video::CMaterial::Self *v15;
  bool v16;
  char *v17;
  bool v18;
  unsigned int v19;
  char *v20;
  unsigned int v21;
  char *v22;
  char *v23;
  int v24;
  volatile int32_t *v25;
  volatile int32_t *v26;
  int v27;
  volatile int32_t *v28;
  volatile int32_t **v29;
  volatile int32_t *v30;
  volatile int32_t *v31;
  volatile int32_t *v32;
  int v33;
  volatile int32_t **v34;
  char *v35;
  glitch::video::CMaterialVertexAttributeMap::Self *v36;
  glitch::video::CMaterial::Self *v37;
  int v38;
  typedef char *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef char *_g4_t_v52;
  typedef size_t _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef glitch::collada::CSkinnedMesh::Self *_g4_t_v56;
  typedef glitch::collada::CSkinnedMesh::Self *_g4_t_v57;
  typedef glitch::collada::CSkinnedMesh::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef volatile int32_t *_g4_t_v60;
  typedef volatile int32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef volatile int32_t **_g4_t_v68;
  typedef volatile int32_t **_g4_t_v69;
  typedef char *_g4_t_v70;
  typedef char *_g4_t_v71;
  typedef char *_g4_t_v72;
  typedef char *_g4_t_v73;
  typedef volatile int32_t **_g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t _g4_t_v76[2];
  typedef volatile int32_t *_g4_t_v77;
  typedef volatile int32_t *_g4_t_v78[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v39)) > _g4_s0 ? (12u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v40)) > _g4_s1 ? (16u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v41)) > _g4_s2 ? (20u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v42)) > _g4_s3 ? (24u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v43)) > _g4_s4 ? (28u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v44)) > _g4_s5 ? (32u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v45)) > _g4_s6 ? (36u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v46)) > _g4_s7 ? (40u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v47)) > _g4_s8 ? (44u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v48)) > _g4_s9 ? (48u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v49)) > _g4_s10 ? (52u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v50)) > _g4_s11 ? (52u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v51)) > _g4_s12 ? (56u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v52)) > _g4_s13 ? (56u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v53)) > _g4_s14 ? (60u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v54)) > _g4_s15 ? (60u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v55)) > _g4_s16 ? (64u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v56)) > _g4_s17 ? (64u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v57)) > _g4_s18 ? (64u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v58)) > _g4_s19 ? (64u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v59)) > _g4_s20 ? (64u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v60)) > _g4_s21 ? (68u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v61)) > _g4_s22 ? (68u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v62)) > _g4_s23 ? (72u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v63)) > _g4_s24 ? (72u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v64)) > _g4_s25 ? (72u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v65)) > _g4_s26 ? (72u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v66)) > _g4_s27 ? (76u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v67)) > _g4_s28 ? (76u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v68)) > _g4_s29 ? (76u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v69)) > _g4_s30 ? (76u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v70)) > _g4_s31 ? (80u + sizeof(_g4_t_v70)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v71)) > _g4_s32 ? (80u + sizeof(_g4_t_v71)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v72)) > _g4_s33 ? (80u + sizeof(_g4_t_v72)) : _g4_s33,
    _g4_s35 = (84u + sizeof(_g4_t_v73)) > _g4_s34 ? (84u + sizeof(_g4_t_v73)) : _g4_s34,
    _g4_s36 = (84u + sizeof(_g4_t_v74)) > _g4_s35 ? (84u + sizeof(_g4_t_v74)) : _g4_s35,
    _g4_s37 = (84u + sizeof(_g4_t_v75)) > _g4_s36 ? (84u + sizeof(_g4_t_v75)) : _g4_s36,
    _g4_s38 = (88u + sizeof(_g4_t_v76)) > _g4_s37 ? (88u + sizeof(_g4_t_v76)) : _g4_s37,
    _g4_s39 = (96u + sizeof(_g4_t_v77)) > _g4_s38 ? (96u + sizeof(_g4_t_v77)) : _g4_s38,
    _g4_s40 = (100u + sizeof(_g4_t_v78)) > _g4_s39 ? (100u + sizeof(_g4_t_v78)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 64u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 80u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 80u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 84u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 84u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 88u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 96u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 100u);

  v78[3] = (volatile int32_t *)&self;
  v3 = self;
  v70 = (char *)a2;
  v66 = a3;
  v73 = (char *)self + 12;
  v4 = *(uint32_t *)(*((uint32_t *)self + 43) + 72) + 1;
  v41 = v4;
  glitch::collada::CColladaDatabase::constructGeometry(
    (glitch::collada::CColladaDatabase::Self *)&v77,
    (glitch::collada::CSkinnedMesh::Self *)((char *)self + 12),
    (const char *)a2);
  v60 = v77;
  if ( v77 != nullptr )
  {
    v5 = v77 + 1;
    sub_8B1B00(v77 + 1);
    if ( v77 != nullptr )
      sub_5459C0(v77);
    goto LABEL_4;
  }
  v76[0] = (uint32_t)(uintptr_t)(v66);
  if ( v66 != nullptr )
    sub_8B1B00((volatile int32_t *)((char *)v66 + *(uint32_t *)(*(uint32_t *)v66 - 16) + 4));
  v42 = v76;
  v41 = v4;
  v40 = v70;
  v39 = v73;
  glitch::collada::CColladaDatabase::constructController(v78);
  v60 = v78[0];
  if ( v78[0] != nullptr )
  {
    sub_8B1B00(v78[0] + 1);
    if ( v78[0] != nullptr )
      sub_5459C0(v78[0]);
  }
  if ( v76[0] != 0 )
    sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v76[0] - 16) + v76[0]));
  if ( v60 != nullptr )
  {
    v5 = v60 + 1;
LABEL_4:
    sub_8B1B00(v5);
    v6 = *((volatile int32_t **)v3 + 47);
    *((uint32_t *)v3 + 47) = (uint32_t)(uintptr_t)(v60);
    v7 = v60;
    if ( v6 != nullptr )
    {
      sub_5459C0(v6);
      v7 = *((volatile int32_t **)v3 + 47);
    }
    v8 = (uint32_t *)(*(int (**)(volatile int32_t *, char *, char *, int, uint32_t *))(*v7 + 36))(
                     v7,
                     v39,
                     v40,
                     v41,
                     v42);
    *((uint32_t *)v3 + 52) = *v8;
    *((uint32_t *)v3 + 53) = v8[1];
    *((uint32_t *)v3 + 54) = v8[2];
    *((uint32_t *)v3 + 55) = v8[3];
    *((uint32_t *)v3 + 56) = v8[4];
    *((uint32_t *)v3 + 57) = v8[5];
  }
  (*(void (**)(uint32_t, char *, char *, int, uint32_t *, int, int, int, int, int, int, int, int, size_t, int, volatile int32_t *, int, glitch::collada::CRootSceneNode::Self *, char *, char *, uint32_t, uint32_t, volatile int32_t *, volatile int32_t *, volatile int32_t *, volatile int32_t *))(**((uint32_t **)v3 + 47) + 16))(
    *((uint32_t *)v3 + 47),
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v51,
    v53,
    v55,
    v60,
    v62,
    v66,
    v70,
    v73,
    v76[0],
    v76[1],
    v77,
    v78[0],
    v78[1],
    v78[2]);
  result = (*(int (**)(uint32_t))(**((uint32_t **)v3 + 47) + 16))(*((uint32_t *)v3 + 47));
  v10 = *((uint32_t *)v3 + 44);
  v74 = *((volatile int32_t ***)v3 + 45);
  v11 = -1431655765 * (((int)(uintptr_t)(v74) - v10) >> 4);
  if ( result <= v11 )
  {
    if ( result < v11 )
    {
      result = v10 + 48 * result;
      v71 = (char *)result;
      if ( v74 != (volatile int32_t **)result )
      {
        v12 = (volatile int32_t **)result;
        v63 = result + 8;
        v67 = result + 4;
        v56 = v3;
        do
        {
          v13 = (char *)v12 - v71;
          v14 = *(glitch::video::CMaterialVertexAttributeMap::Self **)((char *)v12 - v71 + v63);
          if ( v14 != nullptr && __sync_fetch_and_add((volatile int32_t *)v14, 0xFFFFFFFF) == 1 )
          {
            glitch::video::CMaterialVertexAttributeMap::Destroy(v14);
            gll_operator_delete_arr((int)(uintptr_t)(v14));
            v13 = (char *)v12 - v71;
          }
          v15 = *(glitch::video::CMaterial::Self **)(v13 + v67);
          if ( v15 != nullptr )
          {
            v16 = *(uint32_t *)v15 == 2;
            _mm_mfence();
            if ( v16 )
              glitch::video::CMaterial::removeFromRootSceneNode(v15);
            if ( __sync_fetch_and_add((volatile int32_t *)v15, 0xFFFFFFFF) == 1 )
            {
              glitch::video::CMaterial::Destroy(v15);
              gll_operator_delete_arr((int)(uintptr_t)(v15));
            }
          }
          if ( *v12 != nullptr )
            sub_5459C0(*v12);
          v12 += 12;
        }
        while ( v74 != v12 );
        v3 = v56;
        result = (unsigned int)(uintptr_t)(v71);
      }
      *((uint32_t *)v3 + 45) = result;
    }
    goto LABEL_26;
  }
  result -= v11;
  v64 = result;
  if ( result == 0 )
    goto LABEL_26;
  if ( result > -1431655765 * ((*((uint32_t *)v3 + 46) - (int)(uintptr_t)(v74)) >> 4) )
  {
    if ( result > 89478485 - v11 )
      sub_1900180("vector::_M_fill_insert");
    if ( result < v11 )
      result = -1431655765 * (((int)(uintptr_t)(v74) - v10) >> 4);
    v54 = -16;
    v18 = __CFADD__(v11, result);
    v19 = v11 + result;
    if ( !v18 && v19 <= 0x5555555 )
    {
      if ( v19 == 0 )
      {
        v72 = nullptr;
        v54 = 0;
        v20 = nullptr;
        goto LABEL_40;
      }
      v54 = 48 * v19;
    }
    v78[4] = nullptr;
    v72 = (char *)sub_4EBDC0(v54);
    v20 = v72;
LABEL_40:
    v21 = v64;
    v22 = &v20[48 * v11];
    do
    {
      if ( v22 != nullptr )
      {
        *(uint32_t *)v22 = 0;
        *((uint32_t *)v22 + 1) = 0;
        *((uint32_t *)v22 + 2) = 0;
        *((uint32_t *)v22 + 3) = 0;
        v22[16] = -1;
        v22[17] = -1;
        v22[18] = -1;
        *((uint32_t *)v22 + 5) = 0;
        *((uint32_t *)v22 + 6) = -1;
        v22[28] = 0;
        v22[29] = -1;
        *((uint32_t *)v22 + 8) = 0;
        *((uint32_t *)v22 + 9) = 0;
        *((uint32_t *)v22 + 10) = 0;
        *((uint32_t *)v22 + 11) = 0;
      }
      v22 += 48;
      --v21;
    }
    while ( v21 != 0 );
    v68 = *((volatile int32_t ***)v3 + 44);
    v23 = v72;
    if ( v74 != v68 )
    {
      v57 = v3;
      v24 = *((uint32_t *)v3 + 44);
      do
      {
        if ( v23 != nullptr )
        {
          v25 = *(volatile int32_t **)v24;
          v16 = *(uint32_t *)v24 == 0;
          *(uint32_t *)v23 = *(uint32_t *)v24;
          if ( !v16 )
            sub_8B1B00(v25 + 1);
          v26 = *(volatile int32_t **)(v24 + 4);
          v27 = v24 - (uint32_t)(uintptr_t)(v68);
          *((uint32_t *)v23 + 1) = (uint32_t)(uintptr_t)(v26);
          if ( v26 != nullptr )
          {
            sub_8B1B00(v26);
            v27 = v24 - (uint32_t)(uintptr_t)(v68);
          }
          v28 = *(volatile int32_t **)((char *)v68 + v27 + 8);
          *((uint32_t *)v23 + 2) = (uint32_t)(uintptr_t)(v28);
          if ( v28 != nullptr )
            sub_8B1B00(v28);
          *((uint32_t *)v23 + 3) = *(uint32_t *)(v24 + 12);
          v23[16] = *(uint8_t *)(v24 + 16);
          v23[17] = *(uint8_t *)(v24 + 17);
          v23[18] = *(uint8_t *)(v24 + 18);
          *((uint32_t *)v23 + 5) = *(uint32_t *)(v24 + 20);
          *((uint32_t *)v23 + 6) = *(uint32_t *)(v24 + 24);
          v23[28] = *(uint8_t *)(v24 + 28);
          v23[29] = *(uint8_t *)(v24 + 29);
          *((uint32_t *)v23 + 8) = *(uint32_t *)(v24 + 32);
          *((uint32_t *)v23 + 9) = *(uint32_t *)(v24 + 36);
          *((uint32_t *)v23 + 10) = *(uint32_t *)(v24 + 40);
          *((uint32_t *)v23 + 11) = *(uint32_t *)(v24 + 44);
        }
        v24 += 48;
        v23 += 48;
      }
      while ( v74 != (volatile int32_t **)v24 );
      v3 = v57;
    }
    v69 = *((volatile int32_t ***)v3 + 45);
    v17 = &v23[48 * v64];
    if ( v74 != v69 )
    {
      v58 = v3;
      v29 = v74;
      do
      {
        if ( v17 != nullptr )
        {
          v30 = *v29;
          v16 = *v29 == nullptr;
          *(uint32_t *)v17 = (uint32_t)(uintptr_t)(*v29);
          if ( !v16 )
            sub_8B1B00(v30 + 1);
          v31 = v29[1];
          *((uint32_t *)v17 + 1) = (uint32_t)(uintptr_t)(v31);
          if ( v31 != nullptr )
            sub_8B1B00(v31);
          v32 = v29[2];
          *((uint32_t *)v17 + 2) = (uint32_t)(uintptr_t)(v32);
          if ( v32 != nullptr )
            sub_8B1B00(v32);
          *((uint32_t *)v17 + 3) = (uint32_t)(uintptr_t)(v29[3]);
          v17[16] = *((uint8_t *)v29 + 16);
          v17[17] = *((uint8_t *)v29 + 17);
          v17[18] = *((uint8_t *)v29 + 18);
          *((uint32_t *)v17 + 5) = (uint32_t)(uintptr_t)(v29[5]);
          *((uint32_t *)v17 + 6) = (uint32_t)(uintptr_t)(v29[6]);
          v17[28] = *((uint8_t *)v29 + 28);
          v17[29] = *((uint8_t *)v29 + 29);
          *((uint32_t *)v17 + 8) = (uint32_t)(uintptr_t)(v29[8]);
          *((uint32_t *)v17 + 9) = (uint32_t)(uintptr_t)(v29[9]);
          *((uint32_t *)v17 + 10) = (uint32_t)(uintptr_t)(v29[10]);
          *((uint32_t *)v17 + 11) = (uint32_t)(uintptr_t)(v29[11]);
        }
        v29 += 12;
        v17 += 48;
      }
      while ( v69 != v29 );
      v3 = v58;
      v69 = *((volatile int32_t ***)v58 + 45);
    }
    v33 = *((uint32_t *)v3 + 44);
    v75 = v33;
    if ( (volatile int32_t **)v33 != v69 )
    {
      v50 = (int *)v3;
      v59 = v33 + 8;
      v65 = v33 + 4;
      v52 = v17;
      v34 = *((volatile int32_t ***)v3 + 44);
      do
      {
        v35 = (char *)v34 - v75;
        v36 = *(glitch::video::CMaterialVertexAttributeMap::Self **)((char *)v34 + v59 - v75);
        if ( v36 != nullptr && __sync_fetch_and_add((volatile int32_t *)v36, 0xFFFFFFFF) == 1 )
        {
          glitch::video::CMaterialVertexAttributeMap::Destroy(v36);
          gll_operator_delete_arr((int)(uintptr_t)(v36));
          v35 = (char *)v34 - v75;
        }
        v37 = *(glitch::video::CMaterial::Self **)&v35[v65];
        if ( v37 != nullptr )
        {
          v16 = *(uint32_t *)v37 == 2;
          _mm_mfence();
          if ( v16 )
            glitch::video::CMaterial::removeFromRootSceneNode(v37);
          if ( __sync_fetch_and_add((volatile int32_t *)v37, 0xFFFFFFFF) == 1 )
          {
            glitch::video::CMaterial::Destroy(v37);
            gll_operator_delete_arr((int)(uintptr_t)(v37));
          }
        }
        if ( *v34 != nullptr )
          sub_5459C0(*v34);
        v34 += 12;
      }
      while ( v34 != v69 );
      v3 = (glitch::collada::CSkinnedMesh::Self *)v50;
      v17 = v52;
      v75 = v50[44];
    }
    if ( v75 != 0 )
      gll_operator_delete_arr(v75);
    *((uint32_t *)v3 + 45) = (uint32_t)(uintptr_t)(v17);
    *((uint32_t *)v3 + 44) = (uint32_t)(uintptr_t)(v72);
    result = (unsigned int)(uintptr_t)(&v72[v54]);
    *((uint32_t *)v3 + 46) = (uint32_t)(uintptr_t)(&v72[v54]);
    goto LABEL_26;
  }
  v38 = *((uint32_t *)v3 + 45);
  do
  {
    if ( v38 != 0 )
    {
      *(uint32_t *)v38 = 0;
      *(uint32_t *)(v38 + 4) = 0;
      *(uint32_t *)(v38 + 8) = 0;
      *(uint32_t *)(v38 + 12) = 0;
      *(uint8_t *)(v38 + 16) = -1;
      *(uint8_t *)(v38 + 17) = -1;
      *(uint8_t *)(v38 + 18) = -1;
      *(uint32_t *)(v38 + 20) = 0;
      *(uint32_t *)(v38 + 24) = -1;
      *(uint8_t *)(v38 + 28) = 0;
      *(uint8_t *)(v38 + 29) = -1;
      *(uint32_t *)(v38 + 32) = 0;
      *(uint32_t *)(v38 + 36) = 0;
      *(uint32_t *)(v38 + 40) = 0;
      *(uint32_t *)(v38 + 44) = 0;
    }
    v38 += 48;
    --result;
  }
  while ( result != 0 );
  result = 48 * v64;
  *((uint32_t *)v3 + 45) += 48 * v64;
LABEL_26:
  if ( v61 != nullptr )
    return sub_5459C0(v61);
  return result;
}


// ============================================================================
// Address:   0xd0c780 (size: 85 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh6attachEPNS_5scene10ISceneNodeE
// Demangled: glitch::collada::CSkinnedMesh::attach(glitch::scene::ISceneNode *)
// ============================================================================
int glitch::collada::CSkinnedMesh::attach(glitch::collada::CSkinnedMesh::Self *self, glitch::scene::ISceneNode::Self *a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 58);
  *((uint32_t *)self + 48) = (uint32_t)(uintptr_t)(a2);
  (*(void (**)(int, glitch::scene::ISceneNode::Self *))(*(uint32_t *)v2 + 32))(v2, a2);
  result = (*(int (**)(uint32_t, glitch::scene::ISceneNode::Self *))(**((uint32_t **)self + 59) + 32))(
             *((uint32_t *)self + 59),
             a2);
  *((uint32_t *)self + 61) = -1;
  return result;
}


// ============================================================================
// Address:   0xd0c7e0 (size: 170 bytes)
// Symbol:    _ZNK6glitch7collada12CSkinnedMesh21reverifySkinTechniqueERKNS0_11SSkinBufferE
// Demangled: glitch::collada::CSkinnedMesh::reverifySkinTechnique(glitch::collada::SSkinBuffer const&)const
// ============================================================================
int glitch::collada::CSkinnedMesh::reverifySkinTechnique(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int *v4;
  int v5;

  result = glitch::video::CMaterial::getTechnique(*(glitch::video::CMaterial::Self **)(a2 + 4));
  if ( *(uint8_t *)(a2 + 16) != (uint8_t)result )
  {
    v3 = *(uint32_t *)(a2 + 4);
    v4 = (int *)(a1 + 58);
    *(uint8_t *)(a2 + 16) = result;
    v5 = *(uint32_t *)(v3 + 4);
    if ( a1 + 58 != a1 + 60 )
    {
      while ( 1 )
      {
        result = (*(int (**)(int, int, uint32_t))(*(uint32_t *)*v4 + 28))(
                   *v4,
                   *(uint32_t *)(v5 + 24) + 12 * (uint8_t)result,
                   *(uint32_t *)(a1[43] + 76));
        if ( (uint8_t)result != 0 )
          break;
        if ( a1 + 60 == (uint32_t *)(uintptr_t)(++v4) )
          return result;
        LOBYTE(result) = *(uint8_t *)(a2 + 16);
      }
      result = *v4;
      *(uint32_t *)(a2 + 12) = *v4;
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd0c890 (size: 87 bytes)
// Symbol:    _ZNK6glitch7collada12CSkinnedMesh16needOutputBufferEv
// Demangled: glitch::collada::CSkinnedMesh::needOutputBuffer(void)const
// ============================================================================
int glitch::collada::CSkinnedMesh::needOutputBuffer(glitch::collada::CSkinnedMesh::Self *self)
{
  int v1;
  int i;
  int v3;

  v1 = 0;
  for ( i = *((uint32_t *)self + 44); *((uint32_t *)self + 45) != i; v1 |= (*(int (**)(int))(*(uint32_t *)v3 + 8))(v3) )
  {
    glitch::collada::CSkinnedMesh::reverifySkinTechnique((uint32_t *)(self), i);
    v3 = *(uint32_t *)(i + 12);
    i += 48;
  }
  return v1;
}


// ============================================================================
// Address:   0xd0c8f0 (size: 487 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh20setIsSkinningEnabledEb
// Demangled: glitch::collada::CSkinnedMesh::setIsSkinningEnabled(bool)
// ============================================================================
unsigned int glitch::collada::CSkinnedMesh::setIsSkinningEnabled(glitch::collada::CSkinnedMesh::Self *self, bool a2)
{
  unsigned int result;
  uint32_t **v3;
  uint32_t **v4;
  glitch::video::CVertexStreams::Self *v5;
  volatile int32_t *v6;
  glitch::video::CVertexStreams::Self *v7;
  volatile int32_t **v8;
  volatile int32_t *v9;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v10;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  result = *((uint32_t *)self + 10);
  if ( a2 != (*((uint8_t *)self + 40) & 1) || (result & 0x1000) != 0 )
  {
    if ( a2 )
    {
      *((uint32_t *)self + 61) |= 2u;
      if ( (*((uint8_t *)self + 32) & 1) == 0 )
        goto LABEL_4;
    }
    else if ( (*((uint8_t *)self + 32) & 1) == 0 )
    {
      *((uint32_t *)self + 61) |= 2u;
      *((uint32_t *)self + 10) = result & 0xFFFFFFEB;
LABEL_4:
      v3 = *((uint32_t ***)self + 44);
      v4 = *((uint32_t ***)self + 45);
      if ( v3 == v4 )
        return glitch::collada::ISkinnedMesh::setIsSkinningEnabled((glitch::collada::ISkinnedMesh::Self *)(self), a2);
      while ( 1 )
      {
        glitch::collada::CSkinnedMesh::reverifySkinTechnique((uint32_t *)(self), (int)(uintptr_t)(v3));
        if ( (*(uint8_t (**)(uint32_t *))(*v3[3] + 8))(v3[3]) == 0 )
          goto LABEL_9;
        if ( a2 )
        {
          v5 = (glitch::video::CVertexStreams::Self *)(*v3)[2];
          v6 = *((volatile int32_t **)v5 + 5);
          *((uint32_t *)v5 + 5) = 0;
          if ( v6 != nullptr )
          {
            v10 = v5;
            sub_5459C0(v6);
            v5 = v10;
          }
          v11 = v5;
          glitch::video::CVertexStreams::updateHomogeneityInternal(v5, true);
          v7 = v11;
          if ( (*((uint8_t *)v11 + 6) & 1) != 0 )
          {
            v8 = (volatile int32_t **)((char *)v11 + 16 * *((uint8_t *)v11 + 12) + 36);
            v9 = *v8;
            *v8 = nullptr;
            if ( v9 != nullptr )
            {
              sub_5459C0(v9);
              v7 = v11;
            }
            glitch::video::CVertexStreams::updateHomogeneityInternal(v7, true);
          }
          goto LABEL_9;
        }
        (*(void (**)(volatile int32_t **))(**((uint32_t **)self + 47) + 20))(&v12);
        glitch::video::CVertexStreams::setStreams(
          (glitch::video::CVertexStreams::Self *)(*v3)[2],
          (int)(uintptr_t)(v12 + 2),
          65537,
          0,
          0);
        if ( v12 != nullptr )
        {
          v3 += 12;
          sub_5459C0(v12);
          if ( v4 == v3 )
            return glitch::collada::ISkinnedMesh::setIsSkinningEnabled((glitch::collada::ISkinnedMesh::Self *)(self), a2);
        }
        else
        {
LABEL_9:
          v3 += 12;
          if ( v4 == v3 )
            return glitch::collada::ISkinnedMesh::setIsSkinningEnabled((glitch::collada::ISkinnedMesh::Self *)(self), a2);
        }
      }
    }
    return glitch::collada::ISkinnedMesh::setIsSkinningEnabled((glitch::collada::ISkinnedMesh::Self *)(self), a2);
  }
  return result;
}


// ============================================================================
// Address:   0xd0cae0 (size: 460 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh15updateTechniqueEj
// Demangled: glitch::collada::CSkinnedMesh::updateTechnique(unsigned int)
// ============================================================================
int glitch::collada::CSkinnedMesh::updateTechnique(glitch::collada::CSkinnedMesh::Self *self, unsigned int a2)
{
  glitch::collada::CSkinnedMesh::Self *v2;
  int v3;
  int v4;
  char v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int result;
  typedef int _g4_t_v11;
  typedef int (*_g4_t_v12)(uint32_t);
  typedef int _g4_t_v13;
  typedef char _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef volatile int32_t *_g4_t_v16[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (23u + sizeof(_g4_t_v14)) > _g4_s3 ? (23u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 23u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  v16[6] = (volatile int32_t *)&self;
  v2 = self;
  v15 = a2;
  v3 = 48 * a2 + *((uint32_t *)self + 44);
  glitch::collada::CSkinnedMesh::reverifySkinTechnique((uint32_t *)(self), v3);
  v14 = 0;
  v4 = glitch::os::Timer::TickCount[0];
  if ( *(uint32_t *)(v3 + 32) != glitch::os::Timer::TickCount[0] )
  {
    *(uint32_t *)(v3 + 44) = *(uint32_t *)(v3 + 40);
    if ( (*((uint8_t *)v2 + 40) & 1) != 0 )
      *(uint32_t *)(v3 + 40) = 0;
    *(uint32_t *)(v3 + 32) = v4;
    v14 = 1;
  }
  if ( *(uint8_t *)(v3 + 16) != *(uint8_t *)(v3 + 17)
    || (result = 0, (*((uint8_t *)v2 + 41) & 2) == 0) && *(uint32_t *)(v3 + 44) != *(uint32_t *)(v3 + 36) )
  {
    v13 = *(uint32_t *)(v3 + 36);
    v12 = *(int (**)(uint32_t))(**(uint32_t **)(v3 + 12) + 16);
    (*(void (**)(volatile int32_t **, uint32_t, unsigned int))(**((uint32_t **)v2 + 47) + 20))(
      v16,
      *((uint32_t *)v2 + 47),
      v15);
    v5 = v12(*(uint32_t *)(v3 + 12));
    v6 = v15 & 0x1F;
    if ( v5 != 0 )
    {
      v7 = 1 << v6;
      *((uint32_t *)v2 + 8) |= 1 << v6;
    }
    else
    {
      v7 = 1 << v6;
      *((uint32_t *)v2 + 8) &= ~(1 << v6);
    }
    if ( v16[0] != nullptr )
    {
      v11 = v7;
      sub_5459C0(v16[0]);
      v7 = v11;
    }
    *(uint8_t *)(v3 + 17) = *(uint8_t *)(v3 + 16);
    if ( *(uint32_t *)(v3 + 36) != v13 && (v7 & *((uint32_t *)v2 + 8)) != 0 )
      *((uint32_t *)v2 + 10) |= 0x10u;
    if ( v14 != 0 )
      *(uint32_t *)(v3 + 40) = 0;
    v8 = *((uint32_t *)v2 + 10);
    v9 = 0;
    if ( (v8 & 1) == 0 )
      v9 = (*((uint32_t *)v2 + 8) & v7) == 0 ? 0x1000 : 0;
    result = 1;
    *((uint32_t *)v2 + 10) = v8 | v9;
  }
  return result;
}


// ============================================================================
// Address:   0xd0ccb0 (size: 1356 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh18computeBoundingBoxEv
// Demangled: glitch::collada::CSkinnedMesh::computeBoundingBox(void)
// ============================================================================
int16_t glitch::collada::CSkinnedMesh::computeBoundingBox(glitch::collada::detail::ISkinTechnique **self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  float *v7;
  __m128i v8; // xmm3
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm6_4
  float *v13;
  __m128i v14; // xmm2
  __m128i v15; // xmm4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm5_4
  int v19;
  int v20;
  int v21;
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  glitch::collada::detail::ISkinTechnique *v26;
  int v27;
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm7_4
  int v34;
  float v35; // xmm3_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  int v38;
  float v39; // xmm4_4
  float *v40;
  float v41; // xmm2_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  int v60;
  glitch::collada::detail::ISkinTechnique *v61;

  glitch::collada::detail::ISkinTechnique::preparePtrCache(*(self + 58));
  v1 = (int)(uintptr_t)(*(self + 62));
  v61 = *(self + 10);
  v2 = (int)(uintptr_t)(*(self + 63));
  *(self + 55) = (glitch::collada::detail::ISkinTechnique *)-8388609;
  *(self + 56) = (glitch::collada::detail::ISkinTechnique *)-8388609;
  *(self + 57) = (glitch::collada::detail::ISkinTechnique *)-8388609;
  *(self + 52) = (glitch::collada::detail::ISkinTechnique *)2139095039;
  *(self + 53) = (glitch::collada::detail::ISkinTechnique *)2139095039;
  *(self + 54) = (glitch::collada::detail::ISkinTechnique *)2139095039;
  if ( ((uint8_t)(uintptr_t)(v61) & 0x10) == 0 && (*(uint8_t *)(self + 8) & 1) == 0 )
  {
    v27 = (*(int (**)(uint32_t))(*(uint32_t *)*(self + 47) + 36))((uint32_t)(uintptr_t)(*(self + 47)));
    v28 = *(float *)(v27 + 12);
    v29 = *(float *)(v27 + 4);
    v30 = *(float *)(v27 + 8);
    v31 = *(float *)(v27 + 16);
    v32 = *(float *)(v27 + 20);
    if ( v28 >= *(float *)v27 )
    {
      if ( v31 < v29 )
      {
LABEL_46:
        v61 = *(self + 10);
        goto LABEL_40;
      }
      if ( v32 >= v30 )
      {
        *(self + 52) = *(glitch::collada::detail::ISkinTechnique **)v27;
        *((float *)self + 53) = v29;
        *((float *)self + 54) = v30;
        *((float *)self + 55) = v28;
        *((float *)self + 56) = v31;
        *((float *)self + 57) = v32;
        goto LABEL_46;
      }
    }
    v61 = *(self + 10);
    goto LABEL_40;
  }
  v3 = (int)(uintptr_t)(*(self + 43));
  v4 = (v2 - v1) >> 2;
  if ( *(uint32_t *)(v3 + 100) != 0 )
  {
    v60 = (uint8_t)v4;
    if ( (uint8_t)v4 != 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = (float *)(v3 + 100 + *(uint32_t *)(v3 + 104) + 4 + v5);
g4_m128_raw(v8) = *(unsigned int *)v7;
        v9 = v7[3];
        v10 = v7[1];
        v11 = v7[2];
        v12 = v7[4];
        v45 = v7[5];
        if ( v9 >= *(float *)g4_m128_ptr<int32_t>(v8) && v12 >= v10 && v7[5] >= v11 )
        {
          v13 = *((float **)*(self + 62) + v6);
          if ( v13 != nullptr )
          {
            v49 = v13[4];
            v50 = v13[8];
g4_m128_raw(v14) = *(unsigned int *)v13;
            v51 = v13[12];
            v53 = v13[5];
            v55 = v13[13];
            *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)((float)(*v13 * *(float *)g4_m128_ptr<int32_t>(v8)) + (float)(v49 * v10)) + v51)
                                    + (float)(v50 * v11);
            v52 = v13[1];
            v54 = v13[9];
g4_m128_raw(v15) = LODWORD(v52);
            *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)((float)(v52 * *(float *)g4_m128_ptr<int32_t>(v8)) + (float)(v53 * v10)) + v55)
                                    + (float)(v54 * v11);
            v56 = v13[2];
            v57 = v13[6];
            v58 = v13[10];
            v59 = v13[14];
            *(float *)g4_m128_ptr<int32_t>(v8) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v8) * v56) + (float)(v10 * v57)) + v59)
                                   + (float)(v11 * v58);
            v16 = (float)((float)((float)(*v13 * v9) + (float)(v49 * v12)) + v51) + (float)(v50 * v45);
            v17 = (float)((float)((float)(v52 * v9) + (float)(v53 * v12)) + v55) + (float)(v54 * v45);
            v18 = (float)((float)((float)(v9 * v56) + (float)(v12 * v57)) + v59) + (float)(v58 * v45);
            if ( *(float *)g4_m128_ptr<int32_t>(v14) > v16 )
            {
              v19 = _mm_cvtsi128_si32(v14);
              *(float *)g4_m128_ptr<int32_t>(v14) = v16;
              v16 = *(float *)&v19;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v15) > v17 )
            {
              v20 = _mm_cvtsi128_si32(v15);
              *(float *)g4_m128_ptr<int32_t>(v15) = v17;
              v17 = *(float *)&v20;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v8) > v18 )
            {
              v21 = _mm_cvtsi128_si32(v8);
              *(float *)g4_m128_ptr<int32_t>(v8) = v18;
              v18 = *(float *)&v21;
            }
            v22 = *((float *)self + 55);
            if ( v16 > v22 )
            {
              *((float *)self + 55) = v16;
              v22 = v16;
            }
            v46 = *((float *)self + 56);
            if ( v17 > v46 )
            {
              *((float *)self + 56) = v17;
              v46 = v17;
            }
            v48 = *((float *)self + 57);
            if ( v18 > v48 )
            {
              *((float *)self + 57) = v18;
              v48 = v18;
            }
            v23 = *((float *)self + 52);
            if ( v23 > v16 )
            {
              *((float *)self + 52) = v16;
              v23 = v16;
            }
            v24 = *((float *)self + 53);
            if ( v24 > v17 )
            {
              *((float *)self + 53) = v17;
              v24 = v17;
            }
            v25 = *((float *)self + 54);
            if ( v25 > v18 )
            {
              *((float *)self + 54) = v18;
              v25 = v18;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v14) > v22 )
              *(self + 55) = (glitch::collada::detail::ISkinTechnique *)g4_m128_lane<int32_t>(v14, 0);
            if ( *(float *)g4_m128_ptr<int32_t>(v15) > v46 )
              *(self + 56) = (glitch::collada::detail::ISkinTechnique *)g4_m128_lane<int32_t>(v15, 0);
            if ( *(float *)g4_m128_ptr<int32_t>(v8) > v48 )
              *(self + 57) = (glitch::collada::detail::ISkinTechnique *)g4_m128_lane<int32_t>(v8, 0);
            if ( v23 > *(float *)g4_m128_ptr<int32_t>(v14) )
              *(self + 52) = (glitch::collada::detail::ISkinTechnique *)g4_m128_lane<int32_t>(v14, 0);
            if ( v24 > *(float *)g4_m128_ptr<int32_t>(v15) )
              *(self + 53) = (glitch::collada::detail::ISkinTechnique *)g4_m128_lane<int32_t>(v15, 0);
            if ( v25 > *(float *)g4_m128_ptr<int32_t>(v8) )
              *(self + 54) = (glitch::collada::detail::ISkinTechnique *)g4_m128_lane<int32_t>(v8, 0);
          }
        }
        ++v6;
        v5 += 24;
      }
      while ( v6 < v60 );
    }
  }
  else if ( (uint8_t)v4 != 0 )
  {
    v33 = 3.4028235e38f;
    v34 = 0;
    v35 = -3.4028235e38f;
    v36 = 3.4028235e38f;
    v37 = -3.4028235e38f;
    v38 = (uint8_t)v4 - 1;
    v39 = -3.4028235e38f;
    v47 = 3.4028235e38f;
    while ( 1 )
    {
      v40 = *(float **)(v1 + 4 * v34);
      v41 = v40[12];
      v42 = v40[14];
      v43 = v40[13];
      if ( v41 > v39 )
        *((float *)self + 55) = v41;
      if ( v43 > v37 )
        *((float *)self + 56) = v43;
      if ( v42 > v35 )
        *((float *)self + 57) = v42;
      if ( v36 > v41 )
        *((float *)self + 52) = v41;
      if ( v33 > v43 )
        *((float *)self + 53) = v43;
      if ( v47 > v42 )
      {
        *((float *)self + 54) = v42;
        v47 = v42;
      }
      if ( v34 == v38 )
        break;
      v39 = *((float *)self + 55);
      ++v34;
      v37 = *((float *)self + 56);
      v35 = *((float *)self + 57);
      v36 = *((float *)self + 52);
      v33 = *((float *)self + 53);
    }
  }
LABEL_40:
  v26 = v61;
  *(self + 61) = (glitch::collada::detail::ISkinTechnique *)((unsigned int)(uintptr_t)(*(self + 61)) & 0xFFFFFFFD);
  BYTE1(v26) = BYTE1(v61) | 1;
  *(self + 10) = v26;
  return (int16_t)(uintptr_t)(v26);
}


// ============================================================================
// Address:   0xd0d200 (size: 63 bytes)
// Symbol:    _ZNK6glitch7collada12CSkinnedMesh14getBoundingBoxEv
// Demangled: glitch::collada::CSkinnedMesh::getBoundingBox(void)const
// ============================================================================
glitch::collada::detail::ISkinTechnique **glitch::collada::CSkinnedMesh::getBoundingBox(
        glitch::collada::detail::ISkinTechnique **self)
{
  if ( (*(uint8_t *)(self + 61) & 2) != 0 )
    glitch::collada::CSkinnedMesh::computeBoundingBox(self);
  return self + 52;
}


// ============================================================================
// Address:   0xd0d240 (size: 154 bytes)
// Symbol:    _ZN6glitch7collada5IMeshC2ERKNS0_16CColladaDatabaseE
// Demangled: glitch::collada::IMesh::IMesh(glitch::collada::CColladaDatabase const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada5IMeshC1ERKNS0_16CColladaDatabaseE'
void (**glitch::collada::IMesh::Construct(
        glitch::collada::IMesh::Self *self,
        const glitch::collada::CColladaDatabase::Self *a2))(glitch::collada::IMesh::Self *__hidden self)
{
  int v2;
  bool v3;
  int v4;

  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2081EA8);
  v2 = *(uint32_t *)a2;
  v3 = *(uint32_t *)a2 == 0;
  *((uint32_t *)self + 3) = *(uint32_t *)a2;
  if ( !v3 )
    sub_8B1B00((volatile int32_t *)(v2 + 4));
  v4 = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 4) = v4;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&unk_20DFC20);
  *((uint32_t *)self + 7) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206FE48);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  return (void (**)(glitch::collada::IMesh::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206FE48));
}


// ============================================================================
// Address:   0xd0d2e0 (size: 368 bytes)
// Symbol:    _ZN6glitch7collada5CMeshC2ERKS1_
// Demangled: glitch::collada::CMesh::CMesh(glitch::collada::CMesh const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada5CMeshC1ERKS1_'
glitch::collada::CMesh::Self *glitch::collada::CMesh::Construct(glitch::collada::CMesh::Self *self, char **a2)
{
  int v2;
  const glitch::collada::CMesh::Self *v3;
  int v4;
  int v5;
  uint32_t *v6;
  char *v7;
  char *v8;
  int v9;
  bool v10;
  volatile int32_t *v11;
  char *v12;
  char *v13;
  volatile int32_t *v14;
  glitch::collada::CMesh::Self *result;
  int v16;
  char *v17;

  v2 = 0;
  v3 = (const glitch::collada::CMesh::Self *)a2;
  glitch::collada::IMesh::Construct(self, (const glitch::collada::CColladaDatabase::Self *)(a2 + 3));
  v16 = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206FBE8);
  v4 = *((uint32_t *)v3 + 11) - *((uint32_t *)v3 + 10);
  *((uint32_t *)self + 10) = 0;
  v5 = v4 >> 2;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  if ( -1431655765 * v5 != 0 )
  {
    v2 = 4 * v5;
    v16 = sub_4EBDC0(4 * v5);
  }
  *((uint32_t *)self + 12) = v16 + v2;
  *((uint32_t *)self + 10) = v16;
  *((uint32_t *)self + 11) = v16;
  v17 = a2[11];
  v6 = (uint32_t *)v16;
  if ( v17 != a2[10] )
  {
    v7 = a2[10];
    v8 = v7;
    do
    {
      if ( v6 != nullptr )
      {
        v9 = *(uint32_t *)v7;
        v10 = *(uint32_t *)v7 == 0;
        *v6 = *(uint32_t *)v7;
        if ( !v10 )
          sub_8B1B00((volatile int32_t *)(v9 + 4));
        v11 = *((volatile int32_t **)v7 + 1);
        v12 = (char *)(v7 - v8);
        v13 = (char *)v6 - v16;
        v6[1] = (uint32_t)(uintptr_t)(v11);
        if ( v11 != nullptr )
        {
          sub_8B1B00(v11);
          v12 = (char *)(v7 - v8);
          v13 = (char *)v6 - v16;
        }
        v14 = *(volatile int32_t **)&v12[(uint32_t)(uintptr_t)(v8) + 8];
        *(uint32_t *)&v13[v16 + 8] = (uint32_t)(uintptr_t)(v14);
        if ( v14 != nullptr )
          sub_8B1B00(v14);
      }
      v7 += 12;
      v6 += 3;
    }
    while ( v17 != v7 );
    v3 = (const glitch::collada::CMesh::Self *)a2;
  }
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(v6);
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = *((uint32_t *)v3 + 14);
  *((uint32_t *)self + 15) = *((uint32_t *)v3 + 15);
  *((uint32_t *)self + 16) = *((uint32_t *)v3 + 16);
  *((uint32_t *)self + 17) = *((uint32_t *)v3 + 17);
  *((uint32_t *)self + 18) = *((uint32_t *)v3 + 18);
  *((uint32_t *)self + 19) = *((uint32_t *)v3 + 19);
  result = *((glitch::collada::CMesh::Self **)v3 + 20);
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(result);
  return result;
}


// ============================================================================
// Address:   0xd0d450 (size: 107 bytes)
// Symbol:    _ZNK6glitch7collada5CMesh5cloneEv
// Demangled: glitch::collada::CMesh::clone(void)const
// ============================================================================
glitch::collada::CMesh::Self *glitch::collada::CMesh::clone(glitch::collada::CMesh::Self *self, char **a2)
{
  volatile int32_t *v2;

  v2 = (volatile int32_t *)operator new(0x54u);
  glitch::collada::CMesh::Construct((glitch::collada::CMesh::Self *)v2, a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
  if ( v2 != nullptr )
    sub_8B1B00(v2 + 1);
  return self;
}


// ============================================================================
// Address:   0xd0d4c0 (size: 1436 bytes)
// Symbol:    _ZN6glitch7collada13CMorphingMeshC2ERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverERNS0_11SControllerERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE
// Demangled: glitch::collada::CMorphingMesh::CMorphingMesh(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController &,boost::intrusive_ptr<glitch::collada::CRootSceneNode> const&)
// ============================================================================
// Alternative name is '_ZN6glitch7collada13CMorphingMeshC1ERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverERNS0_11SControllerERKN5boost13intrusive_ptrINS0_14CRootSceneNodeEEE'
volatile int32_t *glitch::collada::CMorphingMesh::Construct(
        glitch::collada::IMesh::Self *a1,
        const glitch::collada::CColladaDatabase::Self *a2,
        glitch::video::IVideoDriver::Self *a3,
        uint32_t *a4,
        int *a5)
{
  glitch::collada::IMesh::Self *v5;
  int v6;
  int v7;
  int v8;
  glitch::collada::CColladaDatabase::Self *v9;
  int v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  glitch::collada::CColladaDatabase::Self *v13;
  int v14;
  int v15;
  int v16;
  void *v17;
  int v18;
  int v19;
  unsigned int v20;
  int Geometry;
  uint32_t *v22;
  int v23;
  volatile int32_t *result;
  void *v25;
  int v26;
  glitch::collada::CColladaDatabase::Self *v27;
  unsigned int v28;
  bool v29;
  uint32_t *v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  __m128i *v34;
  uint32_t *v35;
  int v36;
  int v37;
  int v38;
  glitch::collada::CColladaDatabase::Self *v39;
  unsigned int v40;
  uint8_t *v41;
  unsigned int v42;
  int v43;
  __m128i *v44;
  unsigned int v45;
  int v46;
  glitch::collada::CColladaDatabase::Self *v47;
  int v48;
  int v49;
  int *v50;
  int v51;
  typedef uint32_t *_g4_t_v52;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v53;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v54;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v55;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v56;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v57;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v58;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v59;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v60;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v61;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint8_t *_g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef glitch::collada::IMesh::Self *_g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef glitch::collada::IMesh::Self *_g4_t_i;
  typedef unsigned int _g4_t_v83;
  typedef unsigned int _g4_t_v84;
  typedef uint8_t *_g4_t_v85;
  typedef volatile int32_t *_g4_t_v86;
  typedef volatile int32_t *_g4_t_v87;
  typedef uint32_t _g4_t_v88[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v52)) > _g4_s0 ? (0u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v53)) > _g4_s1 ? (4u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v54)) > _g4_s2 ? (4u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v55)) > _g4_s3 ? (4u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v56)) > _g4_s4 ? (4u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v57)) > _g4_s5 ? (4u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v58)) > _g4_s6 ? (4u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v59)) > _g4_s7 ? (4u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v60)) > _g4_s8 ? (4u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v61)) > _g4_s9 ? (4u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v62)) > _g4_s10 ? (4u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v63)) > _g4_s11 ? (8u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v64)) > _g4_s12 ? (20u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v65)) > _g4_s13 ? (20u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v66)) > _g4_s14 ? (24u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v67)) > _g4_s15 ? (24u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v68)) > _g4_s16 ? (24u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v69)) > _g4_s17 ? (28u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v70)) > _g4_s18 ? (28u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v71)) > _g4_s19 ? (32u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v72)) > _g4_s20 ? (36u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v73)) > _g4_s21 ? (36u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v74)) > _g4_s22 ? (40u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v75)) > _g4_s23 ? (40u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v76)) > _g4_s24 ? (40u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v77)) > _g4_s25 ? (40u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v78)) > _g4_s26 ? (40u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v79)) > _g4_s27 ? (40u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v80)) > _g4_s28 ? (40u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v81)) > _g4_s29 ? (44u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_i)) > _g4_s30 ? (44u + sizeof(_g4_t_i)) : _g4_s30,
    _g4_s32 = (44u + sizeof(_g4_t_v83)) > _g4_s31 ? (44u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (44u + sizeof(_g4_t_v84)) > _g4_s32 ? (44u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (44u + sizeof(_g4_t_v85)) > _g4_s33 ? (44u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (48u + sizeof(_g4_t_v86)) > _g4_s34 ? (48u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v87)) > _g4_s35 ? (64u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (72u + sizeof(_g4_t_v88)) > _g4_s36 ? (72u + sizeof(_g4_t_v88)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 36u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 40u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 40u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 40u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 40u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 40u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 44u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 44u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 48u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 64u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 72u);

  v88[4] = (uint32_t)(uintptr_t)(&a1);
  v5 = a1;
  v71 = a3;
  v81 = a4;
  v74 = a5;
  v53 = (glitch::collada::CColladaDatabase::Self *)(a2);
  glitch::collada::IMesh::Construct(a1, a2);
  *((uint32_t *)v5 + 10) = 0;
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_206FD28);
  *((uint32_t *)v5 + 11) = 0;
  *((uint32_t *)v5 + 12) = 0;
  *((uint32_t *)v5 + 13) = 0;
  *((uint32_t *)v5 + 14) = 0;
  *((uint32_t *)v5 + 15) = 0;
  v6 = v81[2];
  v7 = 0;
  *((uint32_t *)v5 + 17) = 0;
  v86 = nullptr;
  if ( v6 != 0 )
    v7 = (int)(uintptr_t)(v81) + v6 + 8;
  *((uint32_t *)v5 + 16) = v7;
  v8 = *v74;
  *((uint32_t *)v5 + 20) = -1;
  *((uint32_t *)v5 + 19) = v8;
  *((uint32_t *)v5 + 2) = v81[1];
  v9 = v53;
  v10 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v53 + 16) + 32);
  v75 = *(uint32_t *)(v10 + 144);
  if ( *(uint32_t *)(v10 + 4) != 0 )
  {
    (*(void (**)(volatile int32_t **))(**(uint32_t **)(*((uint32_t *)v71 + 111) + 32) + 12))(&v87);
    v11 = v87;
    v9 = v53;
    if ( v87 != nullptr )
    {
      sub_8B1B00(v87 + 1);
      v9 = v53;
    }
    v12 = v86;
    v86 = v11;
    if ( v12 != nullptr )
    {
      v54 = v9;
      sub_5459C0(v12);
      v9 = v54;
    }
    if ( v87 != nullptr )
    {
      v55 = v9;
      sub_5459C0(v87);
      v9 = v55;
    }
  }
  v56 = v9;
  glitch::collada::COnDemandReader::Construct(
    (glitch::collada::COnDemandReader::Self *)v88,
    (const boost::intrusive_ptr<glitch::io::IReadFile> *)&v86);
  v13 = v56;
  if ( v75 == 0 )
    goto LABEL_29;
  v14 = v81[2];
  v15 = 0;
  if ( v14 != 0 )
  {
    v15 = (int)(uintptr_t)(v81) + v14 + 8;
    __sync_add_and_fetch((volatile int32_t *)v15, 1u);
  }
  if ( *(uint32_t *)(v15 + 16) == 0 )
  {
    v83 = *(int *)(v15 + 12) >> 2;
    v26 = (int)(uintptr_t)(operator new[](4 * v83));
    v77 = (uint32_t *)v26;
    v27 = v56;
    v72 = v83 - 1;
    if ( v83 != 0 )
    {
      v28 = -((uint8_t)(v26 & 0xF) >> 2) & 3;
      if ( v83 <= v28 )
        v28 = v83;
      v29 = v28 == 0;
      v69 = v28;
      v30 = v77;
      if ( v29 )
      {
        v52 = v77;
        goto LABEL_42;
      }
      v66 = v15;
      v31 = 0;
      do
      {
        *v30 = 0;
        v32 = v83 - 2 - v31++;
        ++v30;
      }
      while ( v69 > v31 );
      v52 = v30;
      v72 = v32;
      v15 = v66;
      v27 = v56;
      if ( v83 != v69 )
      {
LABEL_42:
        v84 = v83 - v69;
        v64 = 4 * (v84 >> 2);
        if ( v64 == 0 )
          goto LABEL_46;
        v33 = 0;
        v34 = (__m128i *)&v77[v69];
        do
        {
          ++v33;
          *v34++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v33 < v84 >> 2 );
        v72 -= v64;
        v52 += 4 * (v84 >> 2);
        if ( v84 != v64 )
        {
LABEL_46:
          v35 = v52;
          v36 = v72;
          do
          {
            --v36;
            *v35++ = 0;
          }
          while ( v36 != -1 );
        }
      }
    }
    *(uint32_t *)(v15 + 16) = (uint32_t)(uintptr_t)(v77);
    v60 = v27;
    (*(void (**)(uint32_t *, uint32_t, int, uint32_t *))(v88[0] + 8))(
      v88,
      *(uint32_t *)(v15 + 12),
      *(uint32_t *)(v15 + 8) + 4 * *(uint32_t *)(v15 + 4),
      v77);
    v37 = *(uint32_t *)(v15 + 4);
    v13 = v60;
    if ( v37 > 0 )
    {
      v78 = 4 * v37;
      v38 = (int)(uintptr_t)(operator new[](4 * v37));
      v85 = (uint8_t *)v38;
      v39 = v60;
      v73 = v78 - 1;
      if ( v78 != 0 )
      {
        v40 = -v38 & 0xF;
        if ( v78 <= v40 )
          v40 = v78;
        v29 = v40 == 0;
        v70 = v40;
        v41 = v85;
        if ( v29 )
          goto LABEL_70;
        v67 = v15;
        v42 = 0;
        do
        {
          *v41 = 0;
          v43 = v78 - 2 - v42++;
          ++v41;
        }
        while ( v70 > v42 );
        v73 = v43;
        v15 = v67;
        v39 = v60;
        if ( v78 != v70 )
        {
LABEL_70:
          v79 = v78 - v70;
          v65 = 16 * (v79 >> 4);
          if ( v65 == 0 )
            goto LABEL_60;
          v44 = (__m128i *)&v85[v70];
          v68 = v41;
          v45 = 0;
          do
          {
            ++v45;
            *v44++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v79 >> 4 > v45 );
          v73 -= v65;
          v41 = &v68[v65];
          if ( v79 != v65 )
          {
LABEL_60:
            v46 = v73;
            do
            {
              --v46;
              *v41++ = 0;
            }
            while ( v46 != -1 );
          }
        }
      }
      v61 = v39;
      (*(void (**)(uint32_t *, int, uint32_t, uint8_t *))(v88[0] + 8))(
        v88,
        4 * *(uint32_t *)(v15 + 4),
        *(uint32_t *)(v15 + 8),
        v85);
      v47 = v61;
      if ( *(int *)(v15 + 4) > 0 )
      {
        v80 = v5;
        v48 = 0;
        v49 = *(uint32_t *)(v15 + 4);
        do
        {
          v50 = (int *)&v85[4 * v48];
          v51 = *v50 + *(uint32_t *)(v15 + 16) - 4 * (v49 - v48);
          *v50 = v51;
          ++v48;
          *(uint32_t *)v51 += v51;
          v49 = *(uint32_t *)(v15 + 4);
        }
        while ( v48 < v49 );
        v5 = v80;
        v47 = v61;
      }
      v62 = v47;
      operator delete(v85);
      v13 = v62;
    }
  }
  __sync_add_and_fetch((volatile int32_t *)v15, 1u);
  v16 = *((uint32_t *)v5 + 17);
  if ( v16 != 0 && __sync_fetch_and_add((volatile int32_t *)v16, 0xFFFFFFFF) == 1 )
  {
    v17 = *(void **)(v16 + 16);
    if ( v17 != nullptr )
    {
      v63 = v16;
      v57 = v13;
      operator delete[](v17);
      v13 = v57;
      v16 = v63;
    }
    *(uint32_t *)(v16 + 16) = 0;
  }
  *((uint32_t *)v5 + 17) = v15;
  if ( __sync_fetch_and_add((volatile int32_t *)v15, 0xFFFFFFFF) == 1 )
  {
    v25 = *(void **)(v15 + 16);
    if ( v25 != nullptr )
    {
      v59 = v13;
      operator delete[](v25);
      v13 = v59;
    }
    *(uint32_t *)(v15 + 16) = 0;
  }
  v18 = *(uint32_t *)(*((uint32_t *)v5 + 17) + 16);
  *((uint32_t *)v5 + 16) = v18;
  v76 = *(uint32_t *)(v18 + 16);
  if ( v76 > 0 )
  {
    v19 = 0;
    for ( i = v5; ; v18 = *((uint32_t *)i + 16) )
    {
      v20 = *(uint32_t *)(*(uint32_t *)(v18 + 20) + v18 + 4 * v19 + 20);
      if ( v20 > *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v13 + 16) + 32) + 136) )
      {
        if ( ++v19 == v76 )
          goto LABEL_28;
      }
      else
      {
        v58 = v13;
        Geometry = glitch::collada::CColladaDatabase::getGeometry(v13, v20);
        v22 = (uint32_t *)(*((uint32_t *)i + 16) + *(uint32_t *)(*((uint32_t *)i + 16) + 20) + 20 + 4 * v19);
        v23 = Geometry - (uint32_t)(uintptr_t)(v22);
        if ( Geometry == 0 )
          v23 = 0;
        ++v19;
        *v22 = v23;
        v13 = v58;
        if ( v19 == v76 )
        {
LABEL_28:
          v5 = i;
          break;
        }
      }
    }
  }
LABEL_29:
  glitch::collada::CMorphingMesh::instanciateMesh(
    (volatile int32_t ***)v5,
    v71,
    *((glitch::collada::CRootSceneNode::Self **)v5 + 19));
  glitch::collada::COnDemandReader::Destroy((glitch::collada::COnDemandReader::Self *)v88);
  result = v86;
  if ( v86 != nullptr )
    return (volatile int32_t *)sub_5459C0(v86);
  return result;
}


// ============================================================================
// Address:   0xd0da60 (size: 179 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory11createMorphERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverEPNS0_11SControllerEPNS0_14CRootSceneNodeE
// Demangled: glitch::collada::CColladaFactory::createMorph(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController *,glitch::collada::CRootSceneNode *)
// ============================================================================
volatile int32_t **glitch::collada::CColladaFactory::createMorph(
        volatile int32_t **a1,
        int a2,
        const glitch::collada::CColladaDatabase::Self *a3,
        glitch::video::IVideoDriver::Self *a4,
        uint32_t *a5,
        uint32_t *a6)
{
  volatile int32_t *v6;
  typedef uint32_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);

  v8 = a6;
  if ( a6 != nullptr )
    sub_8B1B00((uint32_t *)((char *)a6 + *(uint32_t *)(*a6 - 16) + 4));
  v6 = (volatile int32_t *)operator new(0x54u);
  glitch::collada::CMorphingMesh::Construct((glitch::collada::IMesh::Self *)v6, a3, a4, a5, (int *)&v8);
  *a1 = v6;
  if ( v6 != nullptr )
    sub_8B1B00(v6 + 1);
  if ( v8 != nullptr )
    sub_5459C0((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 16)));
  return a1;
}


// ============================================================================
// Address:   0xd0db20 (size: 1755 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMeshC2ERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverERNS0_11SControllerEPNS0_14CRootSceneNodeEb
// Demangled: glitch::collada::CSkinnedMesh::CSkinnedMesh(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController &,glitch::collada::CRootSceneNode *,bool)
// ============================================================================
// Alternative name is '_ZN6glitch7collada12CSkinnedMeshC1ERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverERNS0_11SControllerEPNS0_14CRootSceneNodeEb'
int glitch::collada::CSkinnedMesh::CSkinnedMesh(
        glitch::collada::IMesh::Self *a1,
        const glitch::collada::CColladaDatabase::Self *a2,
        glitch::video::IVideoDriver::Self *a3,
        int a4,
        glitch::collada::CRootSceneNode::Self *a5,
        char a6)
{
  glitch::collada::IMesh::Self *v6;
  uint16_t *v7;
  int v8;
  uint16_t *v9;
  uint16_t *v10;
  uint16_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  volatile int32_t *v16;
  int v17;
  int v18;
  int v19;
  void *v20;
  void *Instance;
  int v22;
  int v23;
  void *v24;
  int result;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  __m128i *v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  __m128i *v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  int *v44;
  int v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef __m128i *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char _g4_t_v56;
  typedef glitch::collada::CRootSceneNode::Self *_g4_t_v57;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef volatile int32_t *_g4_t_v62[4];
  typedef volatile int32_t *_g4_t_v63[2];
  typedef uint32_t _g4_t_v64[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v46)) > _g4_s0 ? (8u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v47)) > _g4_s1 ? (12u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v48)) > _g4_s2 ? (16u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v49)) > _g4_s3 ? (20u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v50)) > _g4_s4 ? (20u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v51)) > _g4_s5 ? (24u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v52)) > _g4_s6 ? (28u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v53)) > _g4_s7 ? (32u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v54)) > _g4_s8 ? (36u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v55)) > _g4_s9 ? (40u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (43u + sizeof(_g4_t_v56)) > _g4_s10 ? (43u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v57)) > _g4_s11 ? (44u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v58)) > _g4_s12 ? (48u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v59)) > _g4_s13 ? (52u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v60)) > _g4_s14 ? (56u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v61)) > _g4_s15 ? (56u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v62)) > _g4_s16 ? (60u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v63)) > _g4_s17 ? (76u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v64)) > _g4_s18 ? (84u + sizeof(_g4_t_v64)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 43u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 56u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 76u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);

  v64[4] = (uint32_t)(uintptr_t)(&a1);
  v6 = a1;
  v59 = (unsigned int)(uintptr_t)(a2);
  v58 = a3;
  v57 = a5;
  v7 = (uint16_t *)((char *)a1 + 44);
  v49 = a4;
  HIBYTE(v55) = a6;
  glitch::collada::IMesh::Construct(a1, a2);
  *((uint32_t *)v6 + 10) = 3;
  *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_206FEC8);
  v60 = 64;
  v8 = v49;
  if ( ((uint8_t)(uintptr_t)(v7) & 1) != 0 )
  {
    *((uint8_t *)v6 + 44) = 0;
    v7 = (uint16_t *)((char *)v6 + 45);
    v60 = 63;
  }
  if ( ((uint8_t)(uintptr_t)(v7) & 2) != 0 )
  {
    *v7++ = 0;
    v60 -= 2;
  }
  memset(v7, 0, 4 * (v60 >> 2));
  v9 = &v7[2 * (v60 >> 2)];
  if ( (v60 & 2) != 0 )
    *v9++ = 0;
  if ( (v60 & 1) != 0 )
    *(uint8_t *)v9 = 0;
  v10 = (uint16_t *)((char *)v6 + 108);
  *((uint32_t *)v6 + 11) = 1065353216;
  *((uint32_t *)v6 + 16) = 1065353216;
  *((uint32_t *)v6 + 21) = 1065353216;
  *((uint32_t *)v6 + 26) = 1065353216;
  v61 = 64;
  if ( (((unsigned int)(uintptr_t)(v6) + 108) & 1) != 0 )
  {
    v10 = (uint16_t *)((char *)v6 + 109);
    *((uint8_t *)v6 + 108) = 0;
    v61 = 63;
    if ( (((unsigned int)(uintptr_t)(v6) + 109) & 2) == 0 )
      goto LABEL_11;
  }
  else if ( ((uint8_t)(uintptr_t)(v10) & 2) == 0 )
  {
    goto LABEL_11;
  }
  *v10++ = 0;
  v61 -= 2;
LABEL_11:
  memset(v10, 0, 4 * (v61 >> 2));
  v11 = &v10[2 * (v61 >> 2)];
  if ( (v61 & 2) != 0 )
    *v11++ = 0;
  if ( (v61 & 1) != 0 )
    *(uint8_t *)v11 = 0;
  *((uint32_t *)v6 + 27) = 1065353216;
  *((uint32_t *)v6 + 32) = 1065353216;
  *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_206FDA8);
  *((uint32_t *)v6 + 37) = 1065353216;
  *((uint32_t *)v6 + 42) = 1065353216;
  v12 = *(uint32_t *)(v49 + 8);
  v13 = 0;
  *((uint32_t *)v6 + 44) = 0;
  *((uint32_t *)v6 + 45) = 0;
  *((uint32_t *)v6 + 46) = 0;
  *((uint32_t *)v6 + 47) = 0;
  if ( v12 != 0 )
    v13 = v49 + v12 + 8;
  *((uint32_t *)v6 + 48) = 0;
  *((uint32_t *)v6 + 43) = v13;
  *((uint32_t *)v6 + 49) = 2;
  *((uint32_t *)v6 + 50) = 2;
  *((uint8_t *)v6 + 204) = 0;
  *((uint32_t *)v6 + 52) = 2139095039;
  *((uint32_t *)v6 + 53) = 2139095039;
  *((uint32_t *)v6 + 54) = 2139095039;
  *((uint32_t *)v6 + 55) = -8388609;
  *((uint32_t *)v6 + 56) = -8388609;
  *((uint32_t *)v6 + 57) = -8388609;
  *((uint32_t *)v6 + 58) = 0;
  *((uint32_t *)v6 + 59) = 0;
  *((uint32_t *)v6 + 60) = 0;
  *((uint32_t *)v6 + 62) = 0;
  *((uint32_t *)v6 + 63) = 0;
  *((uint32_t *)v6 + 64) = 0;
  *((uint32_t *)v6 + 2) = *(uint32_t *)(v49 + 4);
  v14 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v59 + 16) + 32);
  if ( *(uint32_t *)(v14 + 144) != 0 )
  {
    v15 = *(uint32_t *)(v14 + 4);
    v62[0] = nullptr;
    if ( v15 != 0 )
    {
      (*(void (**)(volatile int32_t **))(**(uint32_t **)(*((uint32_t *)v58 + 111) + 32) + 12))(v63);
      v16 = v63[0];
      v8 = v49;
      if ( v63[0] != nullptr )
      {
        sub_8B1B00(v63[0] + 1);
        v8 = v49;
      }
      v62[0] = v16;
      if ( v63[0] != nullptr )
      {
        v50 = v8;
        sub_5459C0(v63[0]);
        v8 = v50;
      }
    }
    v49 = v8;
    v17 = 0;
    glitch::collada::COnDemandReader::Construct(
      (glitch::collada::COnDemandReader::Self *)v64,
      (const boost::intrusive_ptr<glitch::io::IReadFile> *)v62);
    v18 = *(uint32_t *)(v49 + 8);
    if ( v18 != 0 )
    {
      v17 = v49 + v18 + 8;
      __sync_add_and_fetch((volatile int32_t *)v17, 1u);
    }
    if ( *(uint32_t *)(v17 + 16) == 0 )
    {
      v61 = *(int *)(v17 + 12) >> 2;
      v27 = (int)(uintptr_t)(operator new[](4 * v61));
      v59 = v27;
      v54 = v61 - 1;
      if ( v61 != 0 )
      {
        v28 = -((uint8_t)(v27 & 0xF) >> 2) & 3;
        if ( v61 <= v28 )
          v28 = v61;
        if ( v28 == 0 )
          goto LABEL_80;
        v52 = (int)(uintptr_t)(v6);
        v53 = v17;
        v29 = 0;
        do
        {
          *(uint32_t *)v27 = 0;
          v30 = v61 - 2 - v29++;
          v27 += 4;
        }
        while ( v28 > v29 );
        v54 = v30;
        v17 = v53;
        if ( v61 != v28 )
        {
LABEL_80:
          v61 -= v28;
          v53 = v61 >> 2;
          v52 = 4 * (v61 >> 2);
          if ( v52 == 0 )
            goto LABEL_55;
          v51 = v17;
          v48 = (__m128i *)(v59 + 4 * v28);
          v31 = 0;
          v32 = v48;
          do
          {
            ++v31;
            *v32++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v31 < v53 );
          v54 -= v52;
          v27 += 16 * (v61 >> 2);
          if ( v61 != v52 )
          {
LABEL_55:
            v33 = v54;
            do
            {
              --v33;
              *(uint32_t *)v27 = 0;
              v27 += 4;
            }
            while ( v33 != -1 );
          }
        }
      }
      *(uint32_t *)(v17 + 16) = v59;
      (*(void (**)(uint32_t *, uint32_t, int, unsigned int))(v64[0] + 8))(
        v64,
        *(uint32_t *)(v17 + 12),
        *(uint32_t *)(v17 + 8) + 4 * *(uint32_t *)(v17 + 4),
        v59);
      v34 = *(uint32_t *)(v17 + 4);
      if ( v34 > 0 )
      {
        v59 = 4 * v34;
        v35 = (int)(uintptr_t)(operator new[](4 * v34));
        v61 = v35;
        v54 = v59 - 1;
        if ( v59 != 0 )
        {
          v36 = -v35 & 0xF;
          if ( v59 <= v36 )
            v36 = v59;
          if ( v36 == 0 )
            goto LABEL_81;
          v52 = (int)(uintptr_t)(v6);
          v53 = v17;
          v37 = 0;
          do
          {
            *(uint8_t *)v35 = 0;
            v38 = v59 - 2 - v37++;
            ++v35;
          }
          while ( v36 > v37 );
          v54 = v38;
          v17 = v53;
          if ( v36 != v59 )
          {
LABEL_81:
            v59 -= v36;
            v53 = v59 >> 4;
            v52 = 16 * (v59 >> 4);
            if ( v52 == 0 )
              goto LABEL_69;
            v51 = v17;
            v39 = (__m128i *)(v36 + v61);
            v40 = 0;
            do
            {
              ++v40;
              *v39++ = g4_m128_from<__m128i>(0LL);
            }
            while ( v53 > v40 );
            v35 += v52;
            v54 -= v52;
            if ( v59 != v52 )
            {
LABEL_69:
              v41 = v54;
              do
              {
                --v41;
                *(uint8_t *)v35++ = 0;
              }
              while ( v41 != -1 );
            }
          }
        }
        (*(void (**)(uint32_t *, int, uint32_t, unsigned int))(v64[0] + 8))(
          v64,
          4 * *(uint32_t *)(v17 + 4),
          *(uint32_t *)(v17 + 8),
          v61);
        if ( *(int *)(v17 + 4) > 0 )
        {
          v59 = (unsigned int)(uintptr_t)(v6);
          v42 = 0;
          v43 = *(uint32_t *)(v17 + 4);
          do
          {
            v44 = (int *)(v61 + 4 * v42);
            v45 = *v44 + *(uint32_t *)(v17 + 16) - 4 * (v43 - v42);
            *v44 = v45;
            ++v42;
            *(uint32_t *)v45 += v45;
            v43 = *(uint32_t *)(v17 + 4);
          }
          while ( v42 < v43 );
          v6 = (glitch::collada::IMesh::Self *)v59;
        }
        operator delete((void *)v61);
      }
    }
    __sync_add_and_fetch((volatile int32_t *)v17, 1u);
    v19 = *((uint32_t *)v6 + 60);
    if ( v19 != 0 && __sync_fetch_and_add((volatile int32_t *)v19, 0xFFFFFFFF) == 1 )
    {
      v20 = *(void **)(v19 + 16);
      if ( v20 != nullptr )
      {
        v49 = v19;
        operator delete[](v20);
        v19 = v49;
      }
      *(uint32_t *)(v19 + 16) = 0;
    }
    *((uint32_t *)v6 + 60) = v17;
    if ( __sync_fetch_and_add((volatile int32_t *)v17, 0xFFFFFFFF) == 1 )
    {
      if ( *(uint32_t *)(v17 + 16) != 0 )
        operator delete[](*(void **)(v17 + 16));
      *(uint32_t *)(v17 + 16) = 0;
    }
    *((uint32_t *)v6 + 43) = *(uint32_t *)(*((uint32_t *)v6 + 60) + 16);
    glitch::collada::COnDemandReader::Destroy((glitch::collada::COnDemandReader::Self *)v64);
    if ( v62[0] != nullptr )
      sub_5459C0(v62[0]);
  }
  glitch::collada::CSkinnedMesh::instanciateMesh((glitch::collada::CSkinnedMesh::Self *)(v6), v58, v57);
  Instance = glitch::CIrrFactory::getInstance();
  v22 = (*(int (**)(void *, uint32_t, int, int, int, __m128i *, int, int, int, unsigned int, int, int, glitch::collada::CRootSceneNode::Self *, glitch::video::IVideoDriver::Self *, unsigned int, unsigned int, volatile int32_t *, volatile int32_t *, volatile int32_t *, volatile int32_t *, volatile int32_t *, volatile int32_t *, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)Instance + 32))(
          Instance,
          *((uint32_t *)v6 + 43),
          (int)(uintptr_t)(v6) + 244,
          v46,
          v47,
          v48,
          v49,
          v51,
          v52,
          v53,
          v54,
          v55,
          v57,
          v58,
          v59,
          v61,
          v62[0],
          v62[1],
          v62[2],
          v62[3],
          v63[0],
          v63[1],
          v64[0],
          v64[1],
          v64[2],
          v64[3]);
  v23 = *((uint32_t *)v6 + 58);
  *((uint32_t *)v6 + 58) = v22;
  if ( v23 != 0 )
    (*(void (**)(int))(*(uint32_t *)v23 + 4))(v23);
  v24 = glitch::CIrrFactory::getInstance();
  result = (*(int (**)(void *, uint32_t, int))(*(uint32_t *)v24 + 28))(v24, *((uint32_t *)v6 + 43), (int)(uintptr_t)(v6) + 244);
  *(uint8_t *)(result + 18) = v56;
  v26 = *((uint32_t *)v6 + 59);
  *((uint32_t *)v6 + 59) = result;
  if ( v26 != 0 )
    return (*(int (**)(int))(*(uint32_t *)v26 + 4))(v26);
  return result;
}


// ============================================================================
// Address:   0xd0e200 (size: 139 bytes)
// Symbol:    _ZN6glitch7collada15CColladaFactory10createSkinERKNS0_16CColladaDatabaseEPNS_5video12IVideoDriverEPNS0_11SControllerEPNS0_14CRootSceneNodeE
// Demangled: glitch::collada::CColladaFactory::createSkin(glitch::collada::CColladaDatabase const&,glitch::video::IVideoDriver *,glitch::collada::SController *,glitch::collada::CRootSceneNode *)
// ============================================================================
volatile int32_t **glitch::collada::CColladaFactory::createSkin(
        volatile int32_t **a1,
        int a2,
        const glitch::collada::CColladaDatabase::Self *a3,
        glitch::video::IVideoDriver::Self *a4,
        int a5,
        glitch::collada::CRootSceneNode::Self *a6)
{
  volatile int32_t *v6;

  v6 = (volatile int32_t *)operator new(0x104u);
  glitch::collada::CSkinnedMesh::CSkinnedMesh((glitch::collada::IMesh::Self *)v6, a3, a4, a5, a6, 1);
  *a1 = v6;
  if ( v6 != nullptr )
    sub_8B1B00(v6 + 1);
  return a1;
}


// ============================================================================
// Address:   0xd0e290 (size: 42 bytes)
// Symbol:    _ZN6glitch7collada12ISkinnedMesh19initIsSkinningDirtyEb
// Demangled: glitch::collada::ISkinnedMesh::initIsSkinningDirty(bool)
// ============================================================================
int glitch::collada::ISkinnedMesh::initIsSkinningDirty(glitch::collada::ISkinnedMesh::Self *self, bool a2)
{
  int result;

  result = 20;
  if ( !a2 )
    result = -(*((uint32_t *)self + 10) & 1) & 0x14;
  *((uint32_t *)self + 10) = result | *((uint32_t *)self + 10) & 0xFFFFFFEB;
  return result;
}


// ============================================================================
// Address:   0xd0e2c0 (size: 361 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh4initEPNS_5video12IVideoDriverEbRKNS0_20SProcessBufferConfigES7_
// Demangled: glitch::collada::CSkinnedMesh::init(glitch::video::IVideoDriver *,bool,glitch::collada::SProcessBufferConfig const&,glitch::collada::SProcessBufferConfig const&)
// ============================================================================
int glitch::collada::CSkinnedMesh::init(glitch::collada::ISkinnedMesh::Self *a1, int a2, char a3, int a4, int a5)
{
  glitch::collada::ISkinnedMesh::Self *v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  glitch::collada::ISkinnedMesh::Self *v11;
  int v12;
  int v14;
  int v15;
  bool v16[4];
  int v17;
  glitch::collada::ISkinnedMesh::Self *v18;
  int v19;
  int v20;
  int v21;

  v5 = a1;
  (*(void (**)(uint32_t, int, uint32_t, int))(**((uint32_t **)a1 + 47) + 72))(*((uint32_t *)a1 + 47), a2, 0, a5);
  v6 = *((uint32_t *)a1 + 10);
  BYTE1(v6) &= ~2u;
  *((uint32_t *)a1 + 10) = v6 | (a3 != 0 ? 0x200 : 0);
  *((uint32_t *)a1 + 49) = *(uint32_t *)a4;
  *((uint32_t *)a1 + 50) = *(uint32_t *)(a4 + 4);
  v7 = *(uint32_t **)a1;
  *((uint8_t *)a1 + 204) = *(uint8_t *)(a4 + 8);
  v20 = ((int (*)(glitch::collada::ISkinnedMesh::Self *))v7[22])(a1);
  if ( v20 != 0 )
    (*(void (**)(uint32_t))(**((uint32_t **)a1 + 47) + 16))(*((uint32_t *)a1 + 47));
  v21 = (*(int (**)(uint32_t))(**((uint32_t **)a1 + 47) + 16))(*((uint32_t *)a1 + 47));
  if ( v21 != 0 )
  {
    if ( v20 != 0 )
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = a1;
      do
      {
        *(uint32_t *)v16 = v10;
        v17 = v8 + *((uint32_t *)v11 + 44);
        v18 = v11;
        ++v10;
        (*(void (**)(glitch::collada::ISkinnedMesh::Self *, bool *))(*(uint32_t *)v11 + 92))(v11, *(bool **)v16);
        v12 = v9 + v20;
        v8 += 48;
        v9 += 56;
        *(uint32_t *)(v17 + 20) = *(uint32_t *)(*(uint32_t *)(v20 + 60) + v12 + 92);
        v11 = v18;
      }
      while ( v10 != v21 );
      v5 = v18;
    }
    else
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v19 = v15 + *((uint32_t *)a1 + 44);
        (*(void (**)(glitch::collada::ISkinnedMesh::Self *, int))(*(uint32_t *)a1 + 92))(a1, v14++);
        v15 += 48;
        *(uint32_t *)(v19 + 20) = 0;
      }
      while ( v14 != v21 );
    }
  }
  return glitch::collada::ISkinnedMesh::initIsSkinningDirty(v5, *((uint32_t *)v5 + 8) & 1);
}


// ============================================================================
// Address:   0xd0e430 (size: 115 bytes)
// Symbol:    _ZN6glitch7collada12ISkinnedMesh21updateIsSkinningDirtyEb
// Demangled: glitch::collada::ISkinnedMesh::updateIsSkinningDirty(bool)
// ============================================================================
unsigned int glitch::collada::ISkinnedMesh::updateIsSkinningDirty(glitch::collada::ISkinnedMesh::Self *self, bool a2)
{
  unsigned int v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int result;

  v2 = *((uint32_t *)self + 10);
  if ( (v2 & 8) == 0 )
  {
    v3 = 4;
    if ( (v2 & 1) == 0 )
    {
      LOBYTE(v3) = 0;
      if ( (v2 & 2) != 0 )
        v3 = a2 ? 4 : 0;
    }
    v2 = v2 & 0xFFFFFFFB | v3;
  }
  v4 = v2 & 0xFFFFFFF5 | -(v2 & 1) & 2;
  v5 = v4 & ((v4 & 0x20) == 0 ? -1 : 0xFFFFFFEF);
  result = v5 & 0xFFFFFEDF | (4 * (uint8_t)v5) & 0x10;
  *((uint32_t *)self + 10) = result;
  return result;
}


// ============================================================================
// Address:   0xd0e4b0 (size: 130 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh9onAnimateEf
// Demangled: glitch::collada::CSkinnedMesh::onAnimate(float)
// ============================================================================
int glitch::collada::CSkinnedMesh::onAnimate(glitch::collada::CSkinnedMesh::Self *self, float a2)
{
  int v2;
  bool v3;
  int result;

  (*(void (**)(uint32_t, uint32_t))(**((uint32_t **)self + 47) + 60))(*((uint32_t *)self + 47), LODWORD(a2));
  v2 = *((uint32_t *)self + 10);
  if ( (v2 & 1) == 0 && (v2 & 2) != 0 )
  {
    LOBYTE(v3) = 0;
    if ( (*((uint8_t *)self + 32) & 1) != 0 )
    {
      LOBYTE(v2) = v2 | 0xC0;
      LOBYTE(v3) = 1;
      *((uint32_t *)self + 10) = v2;
    }
  }
  else
  {
    v3 = *((uint32_t *)self + 8) & 1;
  }
  *((uint32_t *)self + 61) |= 2u;
  glitch::collada::ISkinnedMesh::updateIsSkinningDirty((glitch::collada::ISkinnedMesh::Self *)(self), v3);
  result = -(*((uint32_t *)self + 10) & 1) & 2;
  *((uint32_t *)self + 61) |= result;
  return result;
}


// ============================================================================
// Address:   0xd0e540 (size: 31 bytes)
// Symbol:    _ZN6glitch7collada12ISkinnedMesh20forceIsSkinningDirtyEb
// Demangled: glitch::collada::ISkinnedMesh::forceIsSkinningDirty(bool)
// ============================================================================
unsigned int glitch::collada::ISkinnedMesh::forceIsSkinningDirty(glitch::collada::ISkinnedMesh::Self *self, bool a2)
{
  unsigned int result;

  result = (a2 ? 4 : 0) | *((uint32_t *)self + 10) & 0xFFFFFFF3 | 8;
  *((uint32_t *)self + 10) = result;
  return result;
}


// ============================================================================
// Address:   0xd0e560 (size: 233 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh9onAnimateEf
// Demangled: glitch::collada::CModularSkinnedMesh::onAnimate(float)
// ============================================================================
int glitch::collada::CModularSkinnedMesh::onAnimate(glitch::collada::CModularSkinnedMesh::Self *self, float a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = *((uint32_t *)self + 10);
  if ( (v2 & 1) == 0 && (*((uint32_t *)self + 10) & 0x802) == 0x802 )
  {
    v2 |= 0x100C0u;
    *((uint32_t *)self + 10) = v2;
  }
  glitch::collada::ISkinnedMesh::updateIsSkinningDirty((glitch::collada::ISkinnedMesh::Self *)(self), (v2 & 0x800) != 0);
  *((uint32_t *)self + 10) |= -(*((uint32_t *)self + 10) & 1) & 0x10000;
  result = *((uint32_t *)self + 45);
  v6 = result;
  v7 = *((uint32_t *)self + 46);
  if ( result != v7 )
  {
    v4 = *((uint32_t *)self + 45);
    v5 = result + 4;
    do
    {
      result = *(uint32_t *)(v4 - v6 + v5);
      if ( result != 0 )
      {
        glitch::collada::ISkinnedMesh::forceIsSkinningDirty(
          *(glitch::collada::ISkinnedMesh::Self **)(v4 - v6 + v5),
          (*((uint8_t *)self + 40) & 4) != 0);
        result = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)(v4 - v6 + v5) + 60))(
                   *(uint32_t *)(v4 - v6 + v5),
                   LODWORD(a2));
      }
      v4 += 36;
    }
    while ( v7 != v4 );
  }
  return result;
}


// ============================================================================
// Address:   0xd0e650 (size: 707 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh17setCategoryModuleEiib
// Demangled: glitch::collada::CModularSkinnedMesh::setCategoryModule(int,int,bool)
// ============================================================================
unsigned int glitch::collada::CModularSkinnedMesh::setCategoryModule(
        glitch::collada::CModularSkinnedMesh::Self *self,
        int a2,
        int a3,
        bool a4)
{
  glitch::collada::ISkinnedMesh::Self *v4;
  unsigned int result;
  int *v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  volatile int32_t *v13;
  volatile int32_t *v14;
  int *v15;
  glitch::video::CMaterial::Self *v16;
  int *v17;
  int v18;
  volatile int32_t *v19;
  bool v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef volatile int32_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef glitch::video::CMaterial::Self *_g4_t_v28;
  typedef bool _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef volatile int32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef glitch::video::CMaterial::Self *_g4_t_v34;
  typedef uint32_t _g4_t_v35[2];
  typedef uint32_t _g4_t_v36[14];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v24)) > _g4_s3 ? (48u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v25)) > _g4_s4 ? (48u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v26)) > _g4_s5 ? (48u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v27)) > _g4_s6 ? (48u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v28)) > _g4_s7 ? (48u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (59u + sizeof(_g4_t_v29)) > _g4_s8 ? (59u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v30)) > _g4_s9 ? (60u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v31)) > _g4_s10 ? (64u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v32)) > _g4_s11 ? (68u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v33)) > _g4_s12 ? (84u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v34)) > _g4_s13 ? (100u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v35)) > _g4_s14 ? (108u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v36)) > _g4_s15 ? (116u + sizeof(_g4_t_v36)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 59u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 108u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);

  v36[10] = (uint32_t)(uintptr_t)(&self);
  v4 = (glitch::collada::ISkinnedMesh::Self *)(self);
  v30 = a2;
  v31 = a3;
  v29 = a4;
  result = *((uint32_t *)self + 45);
  v6 = (int *)(result + 36 * a2);
  if ( *v6 != a3 )
  {
    if ( v6[1] != 0 )
      glitch::collada::modularSkinnedMesh::SCategory::reset((glitch::collada::modularSkinnedMesh::SCategory::Self *)v6);
    if ( v31 != -1 )
    {
      glitch::collada::CColladaFactoryWrapperBase::Construct(
        (glitch::collada::CColladaFactoryWrapperBase::Self *)v35,
        *((glitch::collada::CColladaFactory::Self **)v4 + 4));
      v7 = *((uint32_t *)v4 + 3);
      v35[0] = ((uint32_t)(uintptr_t)&off_2071168);
      v36[0] = v7;
      if ( v7 != 0 )
        sub_8B1B00((volatile int32_t *)(v7 + 4));
      v8 = *((uint32_t **)v4 + 44);
      v36[1] = (uint32_t)(uintptr_t)(v35);
      memset(&v36[2], 0, 12);
      v33 = v8;
      if ( v8 != nullptr )
        sub_8B1B00((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 16) + 4));
      v9 = *(uint32_t *)(*((uint32_t *)v4 + 43) + 4)
         + *((uint32_t *)v4 + 43)
         + 16 * v30
         + 4
         + *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v4 + 43) + 4) + *((uint32_t *)v4 + 43) + 16 * v30 + 16)
         + 12
         + 8 * v31;
      v10 = 0;
      v11 = *(uint32_t *)(v9 + 4);
      v12 = v9 + v11 + 4;
      if ( v11 != 0 )
        v10 = v12;
      v23 = v10;
      v22 = *(uint32_t *)(*(uint32_t *)(glitch::collada::CResFileManager::Inst + 32) + 8);
      v21 = v36;
      glitch::collada::CColladaDatabase::constructController(&v32);
      if ( v33 != nullptr )
        sub_5459C0((uint32_t *)((char *)v33 + *(uint32_t *)(*v33 - 16)));
      if ( v32 != nullptr )
      {
        (*(void (**)(volatile int32_t *))(*v32 + 56))(v32);
        v13 = v32;
        if ( v32 != nullptr )
        {
          v24 = v32;
          sub_8B1B00(v32 + 1);
          v13 = v24;
        }
        v14 = (volatile int32_t *)v6[1];
        v6[1] = (int)(uintptr_t)(v13);
        if ( v14 != nullptr )
        {
          v25 = v13;
          sub_5459C0(v14);
          v13 = v25;
        }
        *v6 = v31;
        (*(void (**)(glitch::video::CMaterial::Self **, volatile int32_t *, uint32_t, uint32_t **, int))(*v13 + 24))(
          &v34,
          v13,
          0,
          &v33,
          1);
        v15 = (int *)v6[5];
        v16 = v34;
        if ( v15 != nullptr )
        {
          v17 = v6 + 4;
          do
          {
            while ( (unsigned int)(uintptr_t)(v34) <= v15[4] )
            {
              v17 = v15;
              v15 = (int *)v15[2];
              if ( v15 == nullptr )
                goto LABEL_23;
            }
            v15 = (int *)v15[3];
          }
          while ( v15 != nullptr );
LABEL_23:
          if ( v17 != v6 + 4 && (unsigned int)(uintptr_t)(v34) >= v17[4] )
          {
            v18 = v17[5];
            if ( v18 != 0 )
            {
              v26 = v17[5];
              sub_8B1B00((volatile int32_t *)(v18 + 4));
              v18 = v26;
            }
            v19 = (volatile int32_t *)v6[2];
            v6[2] = v18;
            if ( v19 != nullptr )
              sub_5459C0(v19);
            v16 = v34;
          }
        }
        if ( v16 != nullptr )
        {
          v20 = *(uint32_t *)v16 == 2;
          _mm_mfence();
          if ( v20 )
          {
            v28 = v16;
            glitch::video::CMaterial::removeFromRootSceneNode(v16);
            v16 = v28;
          }
          if ( __sync_fetch_and_add((volatile int32_t *)v16, 0xFFFFFFFF) == 1 )
          {
            v27 = (int)(uintptr_t)(v16);
            glitch::video::CMaterial::Destroy(v16);
            gll_operator_delete_arr(v27);
          }
        }
        if ( v32 != nullptr )
          sub_5459C0(v32);
      }
      glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v36);
      v35[0] = ((uint32_t)(uintptr_t)&off_2071168);
      glitch::collada::CColladaFactoryWrapperBase::Destroy((glitch::collada::CColladaFactoryWrapperBase::Self *)v35);
    }
    *((uint32_t *)v4 + 10) |= 0x8000u;
    if ( v29 )
      (*(void (**)(glitch::collada::ISkinnedMesh::Self *, uint32_t *, int, int))(*(uint32_t *)v4 + 52))(v4, v21, v22, v23);
    return glitch::collada::ISkinnedMesh::forceIsSkinningDirty(v4, true);
  }
  return result;
}


// ============================================================================
// Address:   0xd0e920 (size: 121 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh17setCategoryModuleEPKcS3_b
// Demangled: glitch::collada::CModularSkinnedMesh::setCategoryModule(char const*,char const*,bool)
// ============================================================================
unsigned int glitch::collada::CModularSkinnedMesh::setCategoryModule(
        glitch::collada::CModularSkinnedMesh::Self *self,
        char *a2,
        char *a3,
        bool a4)
{
  int ModuleId;
  int CategoryId;

  ModuleId = glitch::collada::CModularSkinnedMesh::getModuleId(self, a3);
  CategoryId = glitch::collada::CModularSkinnedMesh::getCategoryId(self, a2);
  return glitch::collada::CModularSkinnedMesh::setCategoryModule(self, CategoryId, ModuleId, a4);
}


// ============================================================================
// Address:   0xd0e9a0 (size: 13 bytes)
// Symbol:    _ZN6glitch7collada12ISkinnedMesh23onSkinningBufferUpdatedEv
// Demangled: glitch::collada::ISkinnedMesh::onSkinningBufferUpdated(void)
// ============================================================================
glitch::collada::ISkinnedMesh::Self *glitch::collada::ISkinnedMesh::onSkinningBufferUpdated(
        glitch::collada::ISkinnedMesh::Self *self)
{
  *((uint32_t *)self + 10) |= 0x20u;
  return self;
}


// ============================================================================
// Address:   0xd0e9b0 (size: 3567 bytes)
// Symbol:    _ZN6glitch7collada19CModularSkinnedMesh4skinEjNS0_21E_PREPARE_BUFFER_STEPEPNS_5video12IVideoDriverEb
// Demangled: glitch::collada::CModularSkinnedMesh::skin(unsigned int,glitch::collada::E_PREPARE_BUFFER_STEP,glitch::video::IVideoDriver *,bool)
// ============================================================================
int glitch::collada::CModularSkinnedMesh::skin(
        glitch::collada::ISkinnedMesh::Self *a1,
        int a2,
        int a3,
        int a4,
        char a5)
{
  int result;
  uint32_t *v6;
  int v7;
  int (*v8)(int, uint32_t, glitch::video::CMaterial::Self **);
  glitch::video::CMaterial::Self *v9;
  bool v10;
  int *Stream;
  int v12;
  unsigned int *v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  glitch::video::CMaterial::Self *v18;
  int v19;
  uint32_t *v20;
  char v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int *v26;
  volatile int32_t *v27;
  int v28;
  volatile int32_t *v29;
  int v30;
  volatile int32_t *v31;
  int v32;
  int16_t v33;
  int v34;
  int v35;
  volatile int32_t *v36;
  int v37;
  int v38;
  volatile int32_t *v39;
  int v40;
  int16_t v41;
  int v42;
  int v43;
  volatile int32_t *v44;
  int v45;
  volatile int32_t *v46;
  int v47;
  int16_t v48;
  int v49;
  volatile int32_t *v50;
  int v51;
  volatile int32_t *v52;
  int v53;
  int16_t v54;
  volatile int32_t *v55;
  int v56;
  volatile int32_t *v57;
  int v58;
  volatile int32_t *v59;
  volatile int32_t *v60;
  int v61;
  volatile int32_t *v62;
  typedef char _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef volatile int32_t *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef volatile int32_t *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef volatile int32_t *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint32_t *_g4_t_i;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef volatile int32_t *_g4_t_v89;
  typedef uint32_t *_g4_t_v90;
  typedef int *_g4_t_v91;
  typedef char _g4_t_v92;
  typedef volatile int32_t *_g4_t_v93;
  typedef int *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef volatile int32_t *_g4_t_v97;
  typedef char _g4_t_v98;
  typedef volatile int32_t *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef volatile int32_t *_g4_t_v102;
  typedef volatile int32_t *_g4_t_v103;
  typedef volatile int32_t *_g4_t_v104;
  typedef int *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int16_t _g4_t_v108;
  typedef int16_t _g4_t_v109;
  typedef int16_t _g4_t_v110;
  typedef char _g4_t_v111;
  typedef int16_t _g4_t_v112;
  typedef int16_t _g4_t_v113;
  typedef int16_t _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int *_g4_t_v116;
  typedef int *_g4_t_v117;
  typedef int16_t _g4_t_v118;
  typedef int16_t _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef glitch::video::CMaterial::Self *_g4_t_v125;
  typedef volatile int32_t *_g4_t_v126;
  typedef uint32_t _g4_t_v127[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v63)) > _g4_s0 ? (0u + sizeof(_g4_t_v63)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v64)) > _g4_s1 ? (0u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v65)) > _g4_s2 ? (0u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v66)) > _g4_s3 ? (0u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v67)) > _g4_s4 ? (0u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v68)) > _g4_s5 ? (0u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v69)) > _g4_s6 ? (0u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v70)) > _g4_s7 ? (0u + sizeof(_g4_t_v70)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v71)) > _g4_s8 ? (0u + sizeof(_g4_t_v71)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v72)) > _g4_s9 ? (0u + sizeof(_g4_t_v72)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v73)) > _g4_s10 ? (0u + sizeof(_g4_t_v73)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v74)) > _g4_s11 ? (0u + sizeof(_g4_t_v74)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v75)) > _g4_s12 ? (0u + sizeof(_g4_t_v75)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_v76)) > _g4_s13 ? (0u + sizeof(_g4_t_v76)) : _g4_s13,
    _g4_s15 = (0u + sizeof(_g4_t_v77)) > _g4_s14 ? (0u + sizeof(_g4_t_v77)) : _g4_s14,
    _g4_s16 = (0u + sizeof(_g4_t_v78)) > _g4_s15 ? (0u + sizeof(_g4_t_v78)) : _g4_s15,
    _g4_s17 = (4u + sizeof(_g4_t_v79)) > _g4_s16 ? (4u + sizeof(_g4_t_v79)) : _g4_s16,
    _g4_s18 = (4u + sizeof(_g4_t_v80)) > _g4_s17 ? (4u + sizeof(_g4_t_v80)) : _g4_s17,
    _g4_s19 = (4u + sizeof(_g4_t_v81)) > _g4_s18 ? (4u + sizeof(_g4_t_v81)) : _g4_s18,
    _g4_s20 = (4u + sizeof(_g4_t_v82)) > _g4_s19 ? (4u + sizeof(_g4_t_v82)) : _g4_s19,
    _g4_s21 = (4u + sizeof(_g4_t_v83)) > _g4_s20 ? (4u + sizeof(_g4_t_v83)) : _g4_s20,
    _g4_s22 = (4u + sizeof(_g4_t_v84)) > _g4_s21 ? (4u + sizeof(_g4_t_v84)) : _g4_s21,
    _g4_s23 = (8u + sizeof(_g4_t_i)) > _g4_s22 ? (8u + sizeof(_g4_t_i)) : _g4_s22,
    _g4_s24 = (8u + sizeof(_g4_t_v86)) > _g4_s23 ? (8u + sizeof(_g4_t_v86)) : _g4_s23,
    _g4_s25 = (12u + sizeof(_g4_t_v87)) > _g4_s24 ? (12u + sizeof(_g4_t_v87)) : _g4_s24,
    _g4_s26 = (16u + sizeof(_g4_t_v88)) > _g4_s25 ? (16u + sizeof(_g4_t_v88)) : _g4_s25,
    _g4_s27 = (16u + sizeof(_g4_t_v89)) > _g4_s26 ? (16u + sizeof(_g4_t_v89)) : _g4_s26,
    _g4_s28 = (20u + sizeof(_g4_t_v90)) > _g4_s27 ? (20u + sizeof(_g4_t_v90)) : _g4_s27,
    _g4_s29 = (24u + sizeof(_g4_t_v91)) > _g4_s28 ? (24u + sizeof(_g4_t_v91)) : _g4_s28,
    _g4_s30 = (24u + sizeof(_g4_t_v92)) > _g4_s29 ? (24u + sizeof(_g4_t_v92)) : _g4_s29,
    _g4_s31 = (24u + sizeof(_g4_t_v93)) > _g4_s30 ? (24u + sizeof(_g4_t_v93)) : _g4_s30,
    _g4_s32 = (28u + sizeof(_g4_t_v94)) > _g4_s31 ? (28u + sizeof(_g4_t_v94)) : _g4_s31,
    _g4_s33 = (32u + sizeof(_g4_t_v95)) > _g4_s32 ? (32u + sizeof(_g4_t_v95)) : _g4_s32,
    _g4_s34 = (32u + sizeof(_g4_t_v96)) > _g4_s33 ? (32u + sizeof(_g4_t_v96)) : _g4_s33,
    _g4_s35 = (36u + sizeof(_g4_t_v97)) > _g4_s34 ? (36u + sizeof(_g4_t_v97)) : _g4_s34,
    _g4_s36 = (36u + sizeof(_g4_t_v98)) > _g4_s35 ? (36u + sizeof(_g4_t_v98)) : _g4_s35,
    _g4_s37 = (36u + sizeof(_g4_t_v99)) > _g4_s36 ? (36u + sizeof(_g4_t_v99)) : _g4_s36,
    _g4_s38 = (40u + sizeof(_g4_t_v100)) > _g4_s37 ? (40u + sizeof(_g4_t_v100)) : _g4_s37,
    _g4_s39 = (44u + sizeof(_g4_t_v101)) > _g4_s38 ? (44u + sizeof(_g4_t_v101)) : _g4_s38,
    _g4_s40 = (48u + sizeof(_g4_t_v102)) > _g4_s39 ? (48u + sizeof(_g4_t_v102)) : _g4_s39,
    _g4_s41 = (52u + sizeof(_g4_t_v103)) > _g4_s40 ? (52u + sizeof(_g4_t_v103)) : _g4_s40,
    _g4_s42 = (56u + sizeof(_g4_t_v104)) > _g4_s41 ? (56u + sizeof(_g4_t_v104)) : _g4_s41,
    _g4_s43 = (60u + sizeof(_g4_t_v105)) > _g4_s42 ? (60u + sizeof(_g4_t_v105)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v106)) > _g4_s43 ? (64u + sizeof(_g4_t_v106)) : _g4_s43,
    _g4_s45 = (72u + sizeof(_g4_t_v107)) > _g4_s44 ? (72u + sizeof(_g4_t_v107)) : _g4_s44,
    _g4_s46 = (76u + sizeof(_g4_t_v108)) > _g4_s45 ? (76u + sizeof(_g4_t_v108)) : _g4_s45,
    _g4_s47 = (78u + sizeof(_g4_t_v109)) > _g4_s46 ? (78u + sizeof(_g4_t_v109)) : _g4_s46,
    _g4_s48 = (80u + sizeof(_g4_t_v110)) > _g4_s47 ? (80u + sizeof(_g4_t_v110)) : _g4_s47,
    _g4_s49 = (82u + sizeof(_g4_t_v111)) > _g4_s48 ? (82u + sizeof(_g4_t_v111)) : _g4_s48,
    _g4_s50 = (84u + sizeof(_g4_t_v112)) > _g4_s49 ? (84u + sizeof(_g4_t_v112)) : _g4_s49,
    _g4_s51 = (88u + sizeof(_g4_t_v113)) > _g4_s50 ? (88u + sizeof(_g4_t_v113)) : _g4_s50,
    _g4_s52 = (92u + sizeof(_g4_t_v114)) > _g4_s51 ? (92u + sizeof(_g4_t_v114)) : _g4_s51,
    _g4_s53 = (96u + sizeof(_g4_t_v115)) > _g4_s52 ? (96u + sizeof(_g4_t_v115)) : _g4_s52,
    _g4_s54 = (100u + sizeof(_g4_t_v116)) > _g4_s53 ? (100u + sizeof(_g4_t_v116)) : _g4_s53,
    _g4_s55 = (104u + sizeof(_g4_t_v117)) > _g4_s54 ? (104u + sizeof(_g4_t_v117)) : _g4_s54,
    _g4_s56 = (108u + sizeof(_g4_t_v118)) > _g4_s55 ? (108u + sizeof(_g4_t_v118)) : _g4_s55,
    _g4_s57 = (110u + sizeof(_g4_t_v119)) > _g4_s56 ? (110u + sizeof(_g4_t_v119)) : _g4_s56,
    _g4_s58 = (112u + sizeof(_g4_t_v120)) > _g4_s57 ? (112u + sizeof(_g4_t_v120)) : _g4_s57,
    _g4_s59 = (116u + sizeof(_g4_t_v121)) > _g4_s58 ? (116u + sizeof(_g4_t_v121)) : _g4_s58,
    _g4_s60 = (120u + sizeof(_g4_t_v122)) > _g4_s59 ? (120u + sizeof(_g4_t_v122)) : _g4_s59,
    _g4_s61 = (124u + sizeof(_g4_t_v123)) > _g4_s60 ? (124u + sizeof(_g4_t_v123)) : _g4_s60,
    _g4_s62 = (128u + sizeof(_g4_t_v124)) > _g4_s61 ? (128u + sizeof(_g4_t_v124)) : _g4_s61,
    _g4_s63 = (136u + sizeof(_g4_t_v125)) > _g4_s62 ? (136u + sizeof(_g4_t_v125)) : _g4_s62,
    _g4_s64 = (140u + sizeof(_g4_t_v126)) > _g4_s63 ? (140u + sizeof(_g4_t_v126)) : _g4_s63,
    _g4_s65 = (144u + sizeof(_g4_t_v127)) > _g4_s64 ? (144u + sizeof(_g4_t_v127)) : _g4_s64
  };
  alignas(16) uint8_t _g4_sf[_g4_s65];
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 0u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 0u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 0u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 0u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 0u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 0u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 0u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 0u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 0u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 0u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 0u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 0u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 0u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 0u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 0u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 0u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 4u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 4u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 4u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 4u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 4u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 8u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 8u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 12u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 16u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 16u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 20u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 24u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 24u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 24u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 28u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 32u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 32u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 36u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 36u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 36u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 40u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 44u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 48u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 52u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 56u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 60u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 64u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 72u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 76u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 78u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 80u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 82u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 84u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 88u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 92u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 96u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 100u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 104u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 108u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 110u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 112u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 116u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 120u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 124u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 128u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 136u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 140u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 144u);

  glitch::collada::ISkinnedMesh::onSkinningBufferUpdated(a1);
  result = 40 * a2 + *((uint32_t *)a1 + 48);
  v87 = result;
  if ( (*(uint8_t *)(result + 36) & 1) == 0 )
  {
    v6 = *(uint32_t **)(result + 24);
    for ( i = *(uint32_t **)(result + 28); i != v6; v6 += 2 )
    {
      result = *((uint32_t *)a1 + 45) + 36 * *v6;
      v7 = *(uint32_t *)(result + 4);
      if ( v7 != 0 )
      {
        v8 = *(int (**)(int, uint32_t, glitch::video::CMaterial::Self **))(*(uint32_t *)v7 + 100);
        v125 = *(glitch::video::CMaterial::Self **)(v87 + 8);
        if ( v125 != nullptr )
          sub_8B1B00((volatile int32_t *)v125);
        result = v8(v7, v6[1], &v125);
        v9 = v125;
        if ( v125 != nullptr )
        {
          v10 = *(uint32_t *)v125 == 2;
          _mm_mfence();
          if ( v10 )
            glitch::video::CMaterial::removeFromRootSceneNode(v9);
          result = __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF);
          if ( result == 1 )
          {
            glitch::video::CMaterial::Destroy(v9);
            result = gll_operator_delete_arr((int)(uintptr_t)(v9));
          }
        }
      }
    }
    return result;
  }
  v115 = 0;
  v101 = *(uint32_t *)(*(uint32_t *)(result + 12) + 8);
  Stream = (int *)(v101 + 20);
  v12 = *(uint32_t *)(v101 + 4);
  if ( (v12 & 0x10000) != 0 )
  {
    v115 = v101 + 20 + 16 * (uint8_t)(*(uint8_t *)(v101 + 12) + 1);
    Stream = (int *)(v101 + 20);
  }
  v116 = nullptr;
  if ( (v12 & 0x80000) != 0 )
  {
    Stream = (int *)glitch::video::CVertexStreams::getStream(v101, 19, Stream, *(uint32_t *)(v101 + 16));
    v116 = Stream;
    v12 = *(uint32_t *)(v101 + 4);
  }
  v117 = nullptr;
  if ( (v12 & 0x800000) == 0 )
  {
    v13 = *(unsigned int **)(v101 + 20);
    if ( v13 == nullptr )
      goto LABEL_20;
    goto LABEL_19;
  }
  v117 = (int *)glitch::video::CVertexStreams::getStream(v101, 23, Stream, *(uint32_t *)(v101 + 16));
  v13 = *(unsigned int **)(v101 + 20);
  if ( v13 != nullptr )
LABEL_19:
    glitch::video::IBuffer::mapInternal((glitch::video::IBuffer::Self *)v13, 1u, 0, v13[5], 1u);
LABEL_20:
  v14 = *(uint32_t **)(v87 + 24);
  v90 = *(uint32_t **)(v87 + 28);
  if ( v14 != v90 )
  {
    v118 = 0;
    v119 = 0;
    v113 = 255;
    v122 = 0;
    v102 = nullptr;
    v120 = 0;
    v112 = 255;
    v121 = 0;
    v103 = nullptr;
    v123 = 0;
    v114 = 255;
    v124 = 0;
    v104 = nullptr;
    v106 = 0;
    while ( 1 )
    {
      v15 = *((uint32_t *)a1 + 45) + 36 * *v14;
      v16 = *(uint32_t *)(v15 + 4);
      v86 = v16;
      if ( v16 != 0 )
      {
        if ( (*(uint8_t (**)(int))(*(uint32_t *)v16 + 104))(v16) != 0 )
        {
          v17 = *(uint32_t *)(v15 + 8);
          if ( v17 != 0 && *(uint32_t *)(v17 + 36) != 0 )
          {
            if ( (*((uint8_t *)a1 + 40) & 4) != 0 && a3 != 1 )
            {
              v18 = *(glitch::video::CMaterial::Self **)(v87 + 8);
              v19 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v18 + 1) + 24)
                                                      + 12
                                                      * (uint8_t)glitch::video::CMaterial::getTechnique(v18)
                                                      + 4)
                                          + 32)
                              + 40);
              v20 = *(uint32_t **)(v15 + 8);
              v127[0] = v20[9];
              v21 = (*(int (**)(int, int, uint32_t, uint32_t, int, uint32_t *, uint32_t *))(*(uint32_t *)a4 + 184))(
                      a4,
                      1,
                      v20[6],
                      v20[7],
                      v19 & 0x7F90001,
                      v20 + 2,
                      v127);
              v22 = *(uint32_t *)(v15 + 8);
              v88 = v127[0];
              v23 = *(uint32_t *)(v22 + 36);
              if ( v127[0] != v23 )
              {
                if ( v23 != 0 && *(uint8_t *)(v22 + 40) != 0 )
                {
                  v63 = v21;
                  (*(void (**)(int))(*(uint32_t *)v23 + 4))(v23);
                  v21 = v63;
                }
                *(uint8_t *)(v22 + 40) = 1;
                *(uint32_t *)(v22 + 36) = v88;
              }
              if ( (v21 & 4) != 0 )
              {
                v95 = 0;
                v24 = *(uint32_t *)(*(uint32_t *)(v15 + 8) + 8);
                v25 = *(uint32_t *)(v24 + 4);
                v94 = (int *)(v24 + 20);
                if ( (v25 & 0x10000) != 0 )
                  v95 = v24 + 20 + 16 * (uint8_t)(*(uint8_t *)(v24 + 12) + 1);
                v26 = (int *)(v24 + 20);
                v91 = nullptr;
                if ( (v25 & 0x80000) != 0 )
                {
                  v26 = (int *)glitch::video::CVertexStreams::getStream(v24, 19, v94, *(uint32_t *)(v24 + 16));
                  v91 = v26;
                  v25 = *(uint32_t *)(v24 + 4);
                }
                v105 = nullptr;
                if ( (v25 & 0x800000) != 0 )
                  v105 = (int *)glitch::video::CVertexStreams::getStream(v24, 23, v26, *(uint32_t *)(v24 + 16));
              }
              else
              {
LABEL_109:
                v91 = v116;
                v105 = v117;
                v95 = v115;
                v94 = (int *)(v101 + 20);
              }
              (*(void (**)(volatile int32_t **))(*(uint32_t *)v86 + 20))(&v126);
              v27 = v126;
              if ( v126 != nullptr )
                sub_5459C0(v126);
              v28 = *((uint32_t *)v27 + 2);
              v29 = *(volatile int32_t **)(v28 + 20);
              v89 = v29;
              if ( v29 != nullptr )
                sub_8B1B00(v29 + 1);
              v107 = *(uint32_t *)(v28 + 24);
              v109 = *(uint16_t *)(v28 + 32);
              v108 = *(uint16_t *)(v28 + 30);
              v110 = *(uint16_t *)(v28 + 34);
              v30 = *v94;
              if ( *v94 != 0 )
              {
                v64 = *v94;
                sub_8B1B00((volatile int32_t *)(v30 + 4));
                v30 = v64;
              }
              v31 = *(volatile int32_t **)(v28 + 20);
              *(uint32_t *)(v28 + 20) = v30;
              if ( v31 != nullptr )
                sub_5459C0(v31);
              v32 = v94[1];
              *(uint32_t *)(v28 + 24) = v32;
              *(uint16_t *)(v28 + 30) = *((uint16_t *)v94 + 5);
              *(uint16_t *)(v28 + 32) = *((uint16_t *)v94 + 6);
              v33 = *((uint16_t *)v94 + 7);
              *(uint32_t *)(v28 + 24) = v106 + v32;
              *(uint16_t *)(v28 + 34) = v33;
              glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v28, true);
              v34 = *(uint32_t *)(v28 + 4);
              v111 = 0;
              v100 = v28 + 20;
              if ( (v34 & 0x10000) != 0 && v95 != 0 )
              {
                v35 = 16 * (uint8_t)(*(uint8_t *)(v28 + 12) + 1) + v28 + 20;
                v36 = *(volatile int32_t **)v35;
                v97 = *(volatile int32_t **)v35;
                if ( *(uint32_t *)v35 != 0 )
                {
                  v65 = 16 * (uint8_t)(*(uint8_t *)(v28 + 12) + 1) + v28 + 20;
                  v79 = v36 + 1;
                  sub_8B1B00(v36 + 1);
                  v124 = *(uint32_t *)(v65 + 4);
                  v114 = *(uint16_t *)(v65 + 10);
                  HIWORD(v123) = *(uint16_t *)(v65 + 12);
                  LOWORD(v123) = *(uint16_t *)(v65 + 14);
                  sub_8B1B00(v79);
                }
                else
                {
                  v124 = *(uint32_t *)(v35 + 4);
                  v114 = *(uint16_t *)(v35 + 10);
                  HIWORD(v123) = *(uint16_t *)(v35 + 12);
                  LOWORD(v123) = *(uint16_t *)(v35 + 14);
                }
                if ( v104 != nullptr )
                  sub_5459C0(v104);
                if ( v97 != nullptr )
                  sub_5459C0(v97);
                v37 = v100 + 16 * (*(uint8_t *)(v28 + 12) + 1);
                v38 = *(uint32_t *)v95;
                if ( *(uint32_t *)v95 != 0 )
                {
                  v66 = v100 + 16 * (*(uint8_t *)(v28 + 12) + 1);
                  v80 = *(uint32_t *)v95;
                  sub_8B1B00((volatile int32_t *)(v38 + 4));
                  v38 = v80;
                  v37 = v66;
                }
                v39 = *(volatile int32_t **)v37;
                *(uint32_t *)v37 = v38;
                if ( v39 != nullptr )
                {
                  v67 = v37;
                  sub_5459C0(v39);
                  v37 = v67;
                }
                v40 = *(uint32_t *)(v95 + 4);
                *(uint32_t *)(v37 + 4) = v40;
                *(uint16_t *)(v37 + 10) = *(uint16_t *)(v95 + 10);
                *(uint16_t *)(v37 + 12) = *(uint16_t *)(v95 + 12);
                v41 = *(uint16_t *)(v95 + 14);
                *(uint32_t *)(v37 + 4) = v106 + v40;
                *(uint16_t *)(v37 + 14) = v41;
                glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v28, true);
                v34 = *(uint32_t *)(v28 + 4);
                v104 = v97;
                v111 = 1;
              }
              v96 = v28 + 20;
              v42 = v28 + 20;
              v98 = 0;
              if ( (v34 & 0x80000) != 0 && v91 != nullptr )
              {
                v43 = glitch::video::CVertexStreams::getStream(v28, 19, v100, *(uint32_t *)(v28 + 16));
                v44 = *(volatile int32_t **)v43;
                v99 = *(volatile int32_t **)v43;
                if ( *(uint32_t *)v43 != 0 )
                {
                  v68 = v43;
                  v81 = v44 + 1;
                  sub_8B1B00(v44 + 1);
                  v121 = *(uint32_t *)(v68 + 4);
                  v112 = *(uint16_t *)(v68 + 10);
                  HIWORD(v120) = *(uint16_t *)(v68 + 12);
                  LOWORD(v120) = *(uint16_t *)(v68 + 14);
                  sub_8B1B00(v81);
                  v43 = v68;
                }
                else
                {
                  v121 = *(uint32_t *)(v43 + 4);
                  v112 = *(uint16_t *)(v43 + 10);
                  HIWORD(v120) = *(uint16_t *)(v43 + 12);
                  LOWORD(v120) = *(uint16_t *)(v43 + 14);
                }
                if ( v103 != nullptr )
                {
                  v69 = v43;
                  sub_5459C0(v103);
                  v43 = v69;
                }
                if ( v99 != nullptr )
                {
                  v70 = v43;
                  sub_5459C0(v99);
                  v43 = v70;
                }
                v45 = *v91;
                if ( *v91 != 0 )
                {
                  v71 = v43;
                  v82 = *v91;
                  sub_8B1B00((volatile int32_t *)(v45 + 4));
                  v45 = v82;
                  v43 = v71;
                }
                v46 = *(volatile int32_t **)v43;
                *(uint32_t *)v43 = v45;
                if ( v46 != nullptr )
                {
                  v72 = v43;
                  sub_5459C0(v46);
                  v43 = v72;
                }
                v47 = v91[1];
                *(uint32_t *)(v43 + 4) = v47;
                *(uint16_t *)(v43 + 10) = *((uint16_t *)v91 + 5);
                *(uint16_t *)(v43 + 12) = *((uint16_t *)v91 + 6);
                v48 = *((uint16_t *)v91 + 7);
                *(uint32_t *)(v43 + 4) = v106 + v47;
                *(uint16_t *)(v43 + 14) = v48;
                v73 = v43;
                glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v28, true);
                v34 = *(uint32_t *)(v28 + 4);
                v103 = v99;
                v98 = 1;
                v42 = v73;
              }
              v92 = 0;
              if ( (v34 & 0x800000) != 0 && v105 != nullptr )
              {
                v49 = glitch::video::CVertexStreams::getStream(v28, 23, v42, *(uint32_t *)(v28 + 16));
                v50 = *(volatile int32_t **)v49;
                v93 = *(volatile int32_t **)v49;
                if ( *(uint32_t *)v49 != 0 )
                {
                  v74 = v49;
                  v83 = v50 + 1;
                  sub_8B1B00(v50 + 1);
                  v122 = *(uint32_t *)(v74 + 4);
                  v113 = *(uint16_t *)(v74 + 10);
                  v119 = *(uint16_t *)(v74 + 12);
                  v118 = *(uint16_t *)(v74 + 14);
                  sub_8B1B00(v83);
                  v49 = v74;
                }
                else
                {
                  v122 = *(uint32_t *)(v49 + 4);
                  v113 = *(uint16_t *)(v49 + 10);
                  v119 = *(uint16_t *)(v49 + 12);
                  v118 = *(uint16_t *)(v49 + 14);
                }
                if ( v102 != nullptr )
                {
                  v75 = v49;
                  sub_5459C0(v102);
                  v49 = v75;
                }
                if ( v93 != nullptr )
                {
                  v76 = v49;
                  sub_5459C0(v93);
                  v49 = v76;
                }
                v51 = *v105;
                if ( *v105 != 0 )
                {
                  v77 = v49;
                  v84 = *v105;
                  sub_8B1B00((volatile int32_t *)(v51 + 4));
                  v51 = v84;
                  v49 = v77;
                }
                v52 = *(volatile int32_t **)v49;
                *(uint32_t *)v49 = v51;
                if ( v52 != nullptr )
                {
                  v78 = v49;
                  sub_5459C0(v52);
                  v49 = v78;
                }
                v53 = v105[1];
                *(uint32_t *)(v49 + 4) = v53;
                *(uint16_t *)(v49 + 10) = *((uint16_t *)v105 + 5);
                *(uint16_t *)(v49 + 12) = *((uint16_t *)v105 + 6);
                v54 = *((uint16_t *)v105 + 7);
                *(uint32_t *)(v49 + 4) = v106 + v53;
                *(uint16_t *)(v49 + 14) = v54;
                glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v28, true);
                v55 = v93;
                v92 = 1;
                v102 = v55;
              }
              (*(void (**)(int, uint32_t))(*(uint32_t *)v86 + 96))(v86, v14[1]);
              v56 = *(uint32_t *)(v15 + 8);
              if ( v56 == 0 || *(uint32_t *)(v56 + 36) == 0 )
                v106 += *(uint32_t *)(v28 + 8) * *((uint16_t *)v94 + 7);
              if ( v89 != nullptr )
                sub_8B1B00(v89 + 1);
              v57 = *(volatile int32_t **)(v28 + 20);
              *(uint32_t *)(v28 + 20) = (uint32_t)(uintptr_t)(v89);
              if ( v57 != nullptr )
                sub_5459C0(v57);
              *(uint32_t *)(v28 + 24) = v107;
              *(uint16_t *)(v28 + 30) = v108;
              *(uint16_t *)(v28 + 32) = v109;
              *(uint16_t *)(v28 + 34) = v110;
              glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v28, true);
              if ( v111 != 0 )
              {
                v61 = v100 + 16 * (*(uint8_t *)(v28 + 12) + 1);
                if ( v104 != nullptr )
                  sub_8B1B00(v104 + 1);
                v62 = *(volatile int32_t **)v61;
                v10 = *(uint32_t *)v61 == 0;
                *(uint32_t *)v61 = (uint32_t)(uintptr_t)(v104);
                if ( !v10 )
                  sub_5459C0(v62);
                *(uint32_t *)(v61 + 4) = v124;
                *(uint16_t *)(v61 + 10) = v114;
                *(uint16_t *)(v61 + 12) = HIWORD(v123);
                *(uint16_t *)(v61 + 14) = v123;
                glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v28, true);
              }
              if ( v98 != 0 )
              {
                v96 = glitch::video::CVertexStreams::getStream(v28, 19, v100, *(uint32_t *)(v28 + 16));
                if ( v103 != nullptr )
                  sub_8B1B00(v103 + 1);
                v60 = *(volatile int32_t **)v96;
                *(uint32_t *)v96 = (uint32_t)(uintptr_t)(v103);
                if ( v60 != nullptr )
                  sub_5459C0(v60);
                *(uint32_t *)(v96 + 4) = v121;
                *(uint16_t *)(v96 + 10) = v112;
                *(uint16_t *)(v96 + 12) = HIWORD(v120);
                *(uint16_t *)(v96 + 14) = v120;
                glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v28, true);
              }
              if ( v92 != 0 )
              {
                v58 = glitch::video::CVertexStreams::getStream(v28, 23, v96, *(uint32_t *)(v28 + 16));
                if ( v102 != nullptr )
                  sub_8B1B00(v102 + 1);
                v59 = *(volatile int32_t **)v58;
                v10 = *(uint32_t *)v58 == 0;
                *(uint32_t *)v58 = (uint32_t)(uintptr_t)(v102);
                if ( !v10 )
                  sub_5459C0(v59);
                *(uint32_t *)(v58 + 4) = v122;
                *(uint16_t *)(v58 + 10) = v113;
                *(uint16_t *)(v58 + 12) = v119;
                *(uint16_t *)(v58 + 14) = v118;
                glitch::video::CVertexStreams::updateHomogeneityInternal((glitch::video::CVertexStreams::Self *)v28, true);
              }
              if ( v89 != nullptr )
                sub_5459C0(v89);
            }
          }
          else if ( a5 == 0 )
          {
            goto LABEL_109;
          }
        }
        else
        {
          (*(void (**)(int, uint32_t))(*(uint32_t *)v86 + 96))(v86, v14[1]);
        }
      }
      v14 += 2;
      if ( v90 == v14 )
        goto LABEL_99;
    }
  }
  v102 = nullptr;
  v103 = nullptr;
  v104 = nullptr;
LABEL_99:
  result = *(uint32_t *)(v101 + 20);
  if ( result != 0 )
    result = glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v101 + 20));
  if ( v102 != nullptr )
    result = sub_5459C0(v102);
  if ( v103 != nullptr )
    result = sub_5459C0(v103);
  if ( v104 != nullptr )
    return sub_5459C0(v104);
  return result;
}


// ============================================================================
// Address:   0xd0f7a0 (size: 368 bytes)
// Symbol:    _ZN6glitch7collada12CSkinnedMesh27onPrepareBufferForRenderingENS0_21E_PREPARE_BUFFER_STEPEPNS_5video12IVideoDriverEj
// Demangled: glitch::collada::CSkinnedMesh::onPrepareBufferForRendering(glitch::collada::E_PREPARE_BUFFER_STEP,glitch::video::IVideoDriver *,unsigned int)
// ============================================================================
int glitch::collada::CSkinnedMesh::onPrepareBufferForRendering(
        glitch::collada::ISkinnedMesh::Self *a1,
        int a2,
        int a3,
        int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int (*_g4_t_v9)(uint32_t);
  typedef int _g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  (*(void (**)(glitch::collada::ISkinnedMesh::Self *))(*(uint32_t *)a1 + 16))(a1);
  result = (*(int (**)(uint32_t, int, int, int))(**((uint32_t **)a1 + 47) + 64))(*((uint32_t *)a1 + 47), a2, a3, a4);
  v5 = 0;
  if ( a2 == 1 )
    v5 = ((uint16_t)result << 9) & 0x800;
  v6 = v5 | *((uint32_t *)a1 + 10);
  *((uint32_t *)a1 + 10) = v6;
  if ( (v6 & 0x10) != 0 )
  {
    v9 = (int (*)(uint32_t))(*((uint32_t *)a1 + 44) + 48 * a4);
    (*(void (**)(volatile int32_t **, uint32_t, int))(**((uint32_t **)a1 + 47) + 20))(
      &v11,
      *((uint32_t *)a1 + 47),
      a4);
    result = v9(*(uint32_t *)(v8 + 12));
    if ( v11 != nullptr )
    {
      v10 = result;
      sub_5459C0(v11);
      result = v10;
    }
    if ( result == 4 )
    {
      glitch::collada::ISkinnedMesh::onSkinningBufferUpdated(a1);
      result = 4;
      if ( (*((uint8_t *)a1 + 40) & 1) == 0 && (*((uint8_t *)a1 + 32) & 1) != 0 )
      {
        *((uint32_t *)a1 + 61) |= 2u;
        glitch::collada::CSkinnedMesh::computeBoundingBox((glitch::collada::detail::ISkinTechnique **)a1);
        *((uint32_t *)a1 + 10) |= 0xC0u;
        return 4;
      }
    }
  }
  else
  {
    v7 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 44) + 48 * a4) + 36);
    if ( v7 != 0 && *(uint32_t *)(v7 + 20) != 0 )
      return 8;
  }
  return result;
}


// ============================================================================
// Address:   0xd0f910 (size: 123 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemManagerC2Ev
// Demangled: glitch::collada::ps::CParticleSystemManager::CParticleSystemManager(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps22CParticleSystemManagerC1Ev'
pthread_mutex_t **glitch::collada::ps::CParticleSystemManager::Construct(
        glitch::collada::ps::CParticleSystemManager::Self *self)
{
  *(uint32_t *)self = 1500;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 176;
  *((uint32_t *)self + 8) = 32;
  *((uint32_t *)self + 9) = 32;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  return glf::Mutex::Construct((pthread_mutex_t **)self + 12, 1);
}


// ============================================================================
// Address:   0xd0f990 (size: 187 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemManager15activateEmitterEPNS1_15CParticleSystemE
// Demangled: glitch::collada::ps::CParticleSystemManager::activateEmitter(glitch::collada::ps::CParticleSystem::Self *)
// ============================================================================
int glitch::collada::ps::CParticleSystemManager::activateEmitter(
        pthread_mutex_t **self,
        glitch::collada::ps::CParticleSystem::Self *a2)
{
  int v3;
  int v4;
  int v5;
  int v6;

  glf::Mutex::Lock(self + 12);
  if ( *((uint8_t *)a2 + 640) == 0 )
  {
    v5 = *((uint32_t *)a2 + 159);
    sub_1901940(v5);
    gll_operator_delete_arr(v5);
    v6 = (int)(uintptr_t)(*(self + 2));
    v3 = sub_4EBDC0(0xCu);
    if ( v3 != -8 )
      *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(a2);
    sub_1901920(v3, v6);
    v4 = (int)(uintptr_t)(*(self + 2));
    *((uint8_t *)a2 + 640) = 1;
    *((uint32_t *)a2 + 159) = v4;
  }
  return glf::Mutex::Unlock(self + 12);
}


// ============================================================================
// Address:   0xd0fa50 (size: 200 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemManager17unactivateEmitterEPNS1_15CParticleSystemE
// Demangled: glitch::collada::ps::CParticleSystemManager::unactivateEmitter(glitch::collada::ps::CParticleSystem::Self *)
// ============================================================================
int glitch::collada::ps::CParticleSystemManager::unactivateEmitter(
        pthread_mutex_t **self,
        glitch::collada::ps::CParticleSystem::Self *a2)
{
  int v3;
  int v4;
  char *v5;

  glf::Mutex::Lock(self + 12);
  if ( *((uint8_t *)a2 + 640) != 0 )
  {
    v4 = *((uint32_t *)a2 + 159);
    sub_1901940(v4);
    gll_operator_delete_arr(v4);
    v5 = (char *)(self + 2);
    v3 = sub_4EBDC0(0xCu);
    if ( v3 != -8 )
      *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(a2);
    sub_1901920(v3, v5);
    *((uint32_t *)a2 + 159) = (uint32_t)(uintptr_t)(v5);
    *((uint32_t *)a2 + 159) = (uint32_t)(uintptr_t)(*(self + 3));
    *((uint8_t *)a2 + 640) = 0;
  }
  return glf::Mutex::Unlock(self + 12);
}


// ============================================================================
// Address:   0xd0fb20 (size: 116 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemManager20deleteParticleSystemEPNS1_15CParticleSystemE
// Demangled: glitch::collada::ps::CParticleSystemManager::deleteParticleSystem(glitch::collada::ps::CParticleSystem::Self *)
// ============================================================================
int glitch::collada::ps::CParticleSystemManager::deleteParticleSystem(
        pthread_mutex_t **self,
        glitch::collada::ps::CParticleSystem::Self *a2)
{
  glitch::collada::ps::CParticleSystem::Self **v2;
  pthread_mutex_t **v3;

  glf::Mutex::Lock(self + 12);
  v2 = (glitch::collada::ps::CParticleSystem::Self **)*(self + 2);
  v3 = self + 12;
  if ( v2 != (glitch::collada::ps::CParticleSystem::Self **)(self + 2) )
  {
    while ( v2[2] != a2 )
    {
      v2 = (glitch::collada::ps::CParticleSystem::Self **)*v2;
      if ( v2 == (glitch::collada::ps::CParticleSystem::Self **)(self + 2) )
        return glf::Mutex::Unlock(v3);
    }
    sub_1901940(v2);
    gll_operator_delete_arr((int)(uintptr_t)(v2));
    v3 = self + 12;
  }
  return glf::Mutex::Unlock(v3);
}


// ============================================================================
// Address:   0xd0fba0 (size: 437 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemManager20initParameterOffsetsEPNS1_15CParticleSystemE
// Demangled: glitch::collada::ps::CParticleSystemManager::initParameterOffsets(glitch::collada::ps::CParticleSystem::Self *)
// ============================================================================
char *glitch::collada::ps::CParticleSystemManager::initParameterOffsets(
        glitch::collada::ps::CParticleSystemManager::Self *self,
        glitch::collada::ps::CParticleSystem::Self *a2)
{
  char *result;
  int i;
  int v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  const void *src;
  int v11;
  unsigned int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  void *v20;
  glitch::collada::ps::CParticleSystem::Self *v21;
  glitch::collada::ps::CParticleSystem::Self *v22;
  glitch::collada::ps::CParticleSystem::Self *v23;
  int v24;
  int v25;
  unsigned int v26;
  char *v27;
  int v28;
  char *dest;

  result = (char *)glitch::collada::ps::CParticleSystem::ParameterOffsets;
  if ( (uintptr_t)((*(uint8_t **)unk_20DFA64)) == glitch::collada::ps::CParticleSystem::ParameterOffsets )
  {
    for ( i = 0; i != 104; ++i )
    {
      v21 = a2;
      v6 = (*(int (**)(glitch::collada::ps::CParticleSystem::Self *, int))(*(uint32_t *)a2 + 12))(a2, i);
      a2 = v21;
      v7 = v6 - (uint32_t)(uintptr_t)(v21);
      v8 = v6 == 0;
      v9 = -1;
      src = (const void *)(*(uint8_t **)unk_20DFA64);
      if ( !v8 )
        v9 = v7;
      v20 = (void *)v9;
      if ( (*(uint8_t **)unk_20DFA64) != (*(uint8_t **)unk_20DFA68) )
      {
        v5 = 0;
        if ( (*(uint8_t **)unk_20DFA64) != 0 )
        {
          **(uint32_t **)unk_20DFA64 = (uint32_t)(uintptr_t)(v20);
          v5 = (int)(uintptr_t)((*(uint8_t **)unk_20DFA64));
        }
        result = (char *)(v5 + 4);
        *(uintptr_t *)(unk_20DFA64) = (uintptr_t)(result);
        continue;
      }
      v11 = ((int)(uintptr_t)((*(uint8_t **)unk_20DFA64)) - (int)(uintptr_t)(glitch::collada::ps::CParticleSystem::ParameterOffsets)) >> 2;
      v28 = 4;
      v26 = v11;
      if ( v11 != 0 )
      {
        v12 = 2 * v11;
        if ( v26 <= v12 && v12 <= 0x3FFFFFFF )
        {
          v28 = 8 * v26;
          v13 = (int)(uintptr_t)(operator new(8 * v26));
          goto LABEL_15;
        }
        v28 = -4;
      }
      v13 = (int)(uintptr_t)(operator new(v28));
LABEL_15:
      dest = (char *)v13;
      a2 = v21;
      v14 = (uint32_t *)(v13 + 4 * v26);
      if ( v14 != nullptr )
        *v14 = (uint32_t)(uintptr_t)(v20);
      v15 = 0;
      v16 = ((int)(uintptr_t)(src) - glitch::collada::ps::CParticleSystem::ParameterOffsets) >> 2;
      if ( v16 != 0 )
      {
        v25 = 4 * v16;
        memmove(dest, (void *)glitch::collada::ps::CParticleSystem::ParameterOffsets, 4 * v16);
        v15 = v25;
        a2 = v21;
      }
      v27 = &dest[v15 + 4];
      v17 = 0;
      v18 = ((int)(uintptr_t)((*(uint8_t **)unk_20DFA64)) - (int)(uintptr_t)(src)) >> 2;
      if ( v18 != 0 )
      {
        v23 = a2;
        v24 = 4 * v18;
        memmove(v27, src, 4 * v18);
        v17 = v24;
        a2 = v23;
      }
      v19 = &v27[v17];
      if ( glitch::collada::ps::CParticleSystem::ParameterOffsets != 0 )
      {
        v22 = a2;
        operator delete((void *)glitch::collada::ps::CParticleSystem::ParameterOffsets);
        a2 = v22;
      }
      *(uintptr_t *)(unk_20DFA64) = (uintptr_t)(v19);
      glitch::collada::ps::CParticleSystem::ParameterOffsets = (uintptr_t)(uintptr_t)(dest);
      result = &dest[v28];
      *(uintptr_t *)(unk_20DFA68) = (uintptr_t)(&dest[v28]);
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd0fd60 (size: 54 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemManager18deallocateParticleEPNS1_9SParticleE
// Demangled: glitch::collada::ps::CParticleSystemManager::deallocateParticle(glitch::collada::ps::SParticle *)
// ============================================================================
uint32_t *glitch::collada::ps::CParticleSystemManager::deallocateParticle(uint32_t *a1, uint32_t *a2)
{
  uint32_t *result;
  uint32_t *v3;

  result = a1;
  v3 = (uint32_t *)a1[4];
  if ( v3 != nullptr && a2 >= v3 )
  {
    while ( 1 )
    {
      result = (uint32_t *)*v3;
      if ( *v3 == 0 || a2 < result )
        break;
      v3 = (uint32_t *)*v3;
    }
    *a2 = (uint32_t)(uintptr_t)(result);
    *v3 = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    *a2 = (uint32_t)(uintptr_t)(v3);
    a1[4] = (uint32_t)(uintptr_t)(a2);
  }
  return result;
}


// ============================================================================
// Address:   0xd0fda0 (size: 1255 bytes)
// Symbol:    _ZN6glitch7collada2ps22CSmoothRandomGeneratorC2Ev
// Demangled: glitch::collada::ps::CSmoothRandomGenerator::CSmoothRandomGenerator(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps22CSmoothRandomGeneratorC1Ev'
unsigned int glitch::collada::ps::CSmoothRandomGenerator::Construct(
        glitch::collada::ps::CSmoothRandomGenerator::Self *self)
{
  unsigned int result;
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  int v5;
  float *v6;
  int v7;
  float v8; // xmm2_4
  float *v9;
  uint32_t *v10;
  float *v11;
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  int v15;
  int v16;
  float v17; // xmm6_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  unsigned int v22;
  float *v23;
  float *v24;
  uint32_t *v25;
  float *v26;
  uint32_t *v27;
  int v28;
  unsigned int v29;
  float *v30;
  uint32_t *v31;
  int v32;
  uint32_t *v33;
  int v34;
  int v35;
  float v36;
  int v37;
  float v38;
  float i;
  unsigned int v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  float *v45;
  int v46;
  unsigned int v47;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  result = (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0];
  if ( (&glitch::collada::ps::CSmoothRandomGenerator::Series)[1] == (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0] )
  {
    v2 = (uint32_t *)sub_4EBDC0(0x320u);
    v41 = (int)(uintptr_t)(v2);
    v3 = v2 + 200;
    do
    {
      if ( v2 != nullptr )
        *v2 = 0;
      ++v2;
    }
    while ( v2 != v3 );
    v4 = 4;
    v5 = 115541394;
    v6 = (float *)v41;
    while ( 1 )
    {
      v8 = (double)v5 * 4.656612875245797e-10;
      *v6 = v8;
      if ( v4 == 800 )
        break;
      v6 = (float *)(v4 + v41);
      v7 = 48271 * (v5 % 44488) + 3399 * (v5 / -44488);
      v5 = v7 + (v7 < 0 ? 0x7FFFFFFF : 0);
      v4 += 4;
    }
    v9 = (float *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[2];
    v10 = (uint32_t *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[0];
    if ( (unsigned int)((&glitch::collada::ps::CSmoothRandomGenerator::Series)[2]
                      - (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0]) <= 0x1F3F )
    {
      v31 = (uint32_t *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[1];
      v37 = ((&glitch::collada::ps::CSmoothRandomGenerator::Series)[1]
           - (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0]) >> 2;
      v32 = sub_4EBDC0(0x1F40u);
      if ( v10 != v31 )
      {
        v33 = (uint32_t *)v32;
        do
        {
          if ( v33 != nullptr )
            *v33 = *v10;
          ++v10;
          ++v33;
        }
        while ( v31 != v10 );
      }
      if ( (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0] != 0 )
      {
        v35 = v32;
        gll_operator_delete_arr((&glitch::collada::ps::CSmoothRandomGenerator::Series)[0]);
        v32 = v35;
      }
      (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0] = v32;
      v11 = (float *)(v32 + 4 * v37);
      v9 = (float *)(v32 + 8000);
      (&glitch::collada::ps::CSmoothRandomGenerator::Series)[1] = (int)(uintptr_t)(v11);
      (&glitch::collada::ps::CSmoothRandomGenerator::Series)[2] = v32 + 8000;
    }
    else
    {
      v11 = (float *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[1];
    }
    v42 = 0;
    v40 = 1;
    v12 = COERCE_FLOAT((uint32_t)(uintptr_t)&sub_800000);
    v13 = 3.4028235e38f;
    while ( 1 )
    {
      v14 = *(float *)(v41 + 4 * v42);
      v42 = v40;
      v38 = v14;
      v15 = v40 - 2;
      for ( i = *(float *)(v41 + 4 * (v40 % 0xC8)); v15 < 0; v15 += 200 )
        ;
      ++v40;
      v16 = 0;
      v36 = 0.5 * (float)(i - *(float *)(v41 + 4 * (v15 % 0xC8u)));
      v17 = (float)(*(float *)(v41 + 4 * (v40 % 0xC8)) - v14) * 0.5;
      while ( 1 )
      {
        v19 = (float)v16 * 0.1f;
        v20 = (float)(v19 * v19) * v19;
        v21 = (float)((float)((float)((float)((float)(v19 + v20) - (float)((float)(v19 * v19) + (float)(v19 * v19)))
                                    * v36)
                            + (float)((float)(v20 - (float)(v19 * v19)) * v17))
                    + (float)((float)((float)((float)(v20 + v20) - (float)(3.0 * (float)(v19 * v19))) + 1.0) * v38))
            - (float)((float)((float)(v20 + v20) - (float)(3.0 * (float)(v19 * v19))) * i);
        if ( v11 == v9 )
        {
          v22 = ((int)(uintptr_t)(v11) - (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0]) >> 2;
          v43 = 4;
          if ( v22 != 0 )
          {
            if ( v22 > 2 * v22 || 2 * v22 > 0x3FFFFFFF )
              v43 = -4;
            else
              v43 = 8 * v22;
          }
          v34 = ((int)(uintptr_t)(v11) - (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0]) >> 2;
          v46 = sub_4EBDC0(v43);
          v47 = v46 + 4;
          v23 = (float *)(v46 + 4 * v34);
          if ( v23 != nullptr )
            *v23 = v21;
          v44 = (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0];
          if ( (float *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[0] != v11 )
          {
            v24 = (float *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[0];
            v25 = (uint32_t *)v46;
            do
            {
              if ( v25 != nullptr )
                *v25 = *(uint32_t *)v24;
              ++v24;
              ++v25;
            }
            while ( v24 != v11 );
            v47 = v46 + 4 * (((unsigned int)(uintptr_t)(v11) - v44 - 4) >> 2) + 8;
          }
          v45 = (float *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[1];
          if ( (float *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[1] == v11 )
          {
            v11 = (float *)v47;
          }
          else
          {
            v26 = v11;
            v27 = (uint32_t *)v47;
            do
            {
              if ( v27 != nullptr )
                *v27 = *(uint32_t *)v26;
              ++v26;
              ++v27;
            }
            while ( v45 != v26 );
            v11 = (float *)(v47 + 4 * ((unsigned int)((char *)v45 - (char *)(v11 + 1)) >> 2) + 4);
          }
          if ( (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0] != 0 )
            gll_operator_delete_arr((&glitch::collada::ps::CSmoothRandomGenerator::Series)[0]);
          (&glitch::collada::ps::CSmoothRandomGenerator::Series)[1] = (int)(uintptr_t)(v11);
          (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0] = v46;
          result = v43 + v46;
          (&glitch::collada::ps::CSmoothRandomGenerator::Series)[2] = v43 + v46;
        }
        else
        {
          result = 0;
          if ( v11 != nullptr )
          {
            *v11 = v21;
            result = (&glitch::collada::ps::CSmoothRandomGenerator::Series)[1];
          }
          v11 = (float *)(result + 4);
          (&glitch::collada::ps::CSmoothRandomGenerator::Series)[1] = result + 4;
        }
        ++v16;
        v18 = *(v11 - 1);
        v13 = fminf(v13, v18);
        v12 = fmaxf(v12, v18);
        if ( v16 == 10 )
          break;
        v9 = (float *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[2];
      }
      if ( v42 == 200 )
        break;
      v9 = (float *)(&glitch::collada::ps::CSmoothRandomGenerator::Series)[2];
    }
    v28 = (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0];
    if ( ((unsigned int)(uintptr_t)(v11) - (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0]) >> 2 != 0 )
    {
      v29 = 0;
      do
      {
        v30 = (float *)(v28 + 4 * v29++);
        *v30 = (float)(*v30 * (float)(1.0 / (float)(v12 - v13))) - v13;
        v28 = (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0];
        result = ((&glitch::collada::ps::CSmoothRandomGenerator::Series)[1]
                - (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0]) >> 2;
      }
      while ( v29 < result );
    }
    if ( v41 != 0 )
      return gll_operator_delete_arr(v41);
  }
  return result;
}


// ============================================================================
// Address:   0xd10290 (size: 208 bytes)
// Symbol:    _ZN6glitch7collada2ps22CSmoothRandomGenerator4randEtff
// Demangled: glitch::collada::ps::CSmoothRandomGenerator::rand(unsigned short,float,float)
// ============================================================================
long double glitch::collada::ps::CSmoothRandomGenerator::rand(
        glitch::collada::ps::CSmoothRandomGenerator::Self *self,
        uint16_t a2,
        float a3,
        unsigned int a4)
{
  __m128 v4; // xmm0
  float v5; // xmm2_4
  __m128 v6; // xmm1
  int v7;
  float v8; // xmm0_4
  int64_t v9; // rtt
  int v10;
  float v11; // xmm2_4

g4_m128_raw(v4) = a4;
g4_m128_lane<float>(v4, 0) = (float)(*(float *)&a4 + *(float *)(*(uint32_t *)self + 4 * a2)) * a3;
  v5 =g4_m128_lane<float>(v4, 0);
  v6 = _mm_and_ps(v4, g4_to_m128(0x7FFFFFFFu));
  if (g4_m128_lane<float>(v6, 0) < 8388608.0 )
  {
g4_m128_lane<float>(v6, 0) = (float)(int)g4_m128_lane<float>(v4, 0);
    v5 =g4_m128_lane<float>(v6, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v6, v4), 0) & 0x3F800000);
  }
  v7 = ((&glitch::collada::ps::CSmoothRandomGenerator::Series)[1] - (&glitch::collada::ps::CSmoothRandomGenerator::Series)[0]) >> 2;
  v8 =g4_m128_lane<float>(v4, 0) - (float)(int)v5;
  LODWORD(v9) = (int)v5;
  HIDWORD(v9) = (int)v5 >> 31;
  v10 = (int)v5 + 1;
  v11 = *(float *)((&glitch::collada::ps::CSmoothRandomGenerator::Series)[0] + 4 * (v9 % v7));
  return (float)((float)((float)(*(float *)((&glitch::collada::ps::CSmoothRandomGenerator::Series)[0] + 4 * (v10 % v7))
                               - v11)
                       * v8)
               + v11);
}


// ============================================================================
// Address:   0xd10360 (size: 112 bytes)
// Symbol:    _ZN6glitch7collada2ps22CSmoothRandomGenerator4randEtfff
// Demangled: glitch::collada::ps::CSmoothRandomGenerator::rand(unsigned short,float,float,float)
// ============================================================================
long double glitch::collada::ps::CSmoothRandomGenerator::rand(
        glitch::collada::ps::CSmoothRandomGenerator::Self *self,
        uint16_t a2,
        float a3,
        unsigned int a4,
        float a5)
{
  float v6;

  v6 = glitch::collada::ps::CSmoothRandomGenerator::rand(self, a2, a3, a4);
  return (float)((float)((float)(a5 + a5) * v6) - a5);
}


// ============================================================================
// Address:   0xd103d0 (size: 101 bytes)
// Symbol:    _ZN6glitch7collada2ps22CSmoothRandomGenerator4randEtffff
// Demangled: glitch::collada::ps::CSmoothRandomGenerator::rand(unsigned short,float,float,float,float)
// ============================================================================
long double glitch::collada::ps::CSmoothRandomGenerator::rand(
        glitch::collada::ps::CSmoothRandomGenerator::Self *self,
        uint16_t a2,
        float a3,
        unsigned int a4,
        float a5,
        float a6)
{
  float v7;

  v7 = glitch::collada::ps::CSmoothRandomGenerator::rand(self, a2, a3, a4);
  return (float)((float)(v7 * (float)(a6 - a5)) + a5);
}


// ============================================================================
// Address:   0xd10440 (size: 213 bytes)
// Symbol:    _ZN6glitch7collada2ps22CSmoothRandomGenerator7randVecEtRKNS_4core8vector3dIfEEf
// Demangled: glitch::collada::ps::CSmoothRandomGenerator::randVec(unsigned short,glitch::core::vector3d<float> const&,float)
// ============================================================================
float *glitch::collada::ps::CSmoothRandomGenerator::randVec(
        float *a1,
        glitch::collada::ps::CSmoothRandomGenerator::Self *a2,
        uint16_t a3,
        float *a4,
        unsigned int a5)
{
  float v6;
  float v7;

  v6 = glitch::collada::ps::CSmoothRandomGenerator::rand(a2, a3 + 2, a4[2], a5);
  v7 = glitch::collada::ps::CSmoothRandomGenerator::rand(a2, a3 + 1, a4[1], a5);
  *a1 = glitch::collada::ps::CSmoothRandomGenerator::rand(a2, a3, *a4, a5);
  a1[1] = v7;
  a1[2] = v6;
  return a1;
}


// ============================================================================
// Address:   0xd10520 (size: 246 bytes)
// Symbol:    _ZN6glitch7collada2ps22CSmoothRandomGenerator7randVecEtRKNS_4core8vector3dIfEEfS7_
// Demangled: glitch::collada::ps::CSmoothRandomGenerator::randVec(unsigned short,glitch::core::vector3d<float> const&,float,glitch::core::vector3d<float> const&)
// ============================================================================
float *glitch::collada::ps::CSmoothRandomGenerator::randVec(
        float *a1,
        glitch::collada::ps::CSmoothRandomGenerator::Self *a2,
        uint16_t a3,
        float *a4,
        unsigned int a5,
        float *a6)
{
  float v7;
  float v8;

  v7 = glitch::collada::ps::CSmoothRandomGenerator::rand(a2, a3 + 2, a4[2], a5, a6[2]);
  v8 = glitch::collada::ps::CSmoothRandomGenerator::rand(a2, a3 + 1, a4[1], a5, a6[1]);
  *a1 = glitch::collada::ps::CSmoothRandomGenerator::rand(a2, a3, *a4, a5, *a6);
  a1[1] = v8;
  a1[2] = v7;
  return a1;
}


// ============================================================================
// Address:   0xd10620 (size: 280 bytes)
// Symbol:    _ZN6glitch7collada2ps22CSmoothRandomGenerator7randVecEtRKNS_4core8vector3dIfEEfS7_S7_
// Demangled: glitch::collada::ps::CSmoothRandomGenerator::randVec(unsigned short,glitch::core::vector3d<float> const&,float,glitch::core::vector3d<float> const&,glitch::core::vector3d<float> const&)
// ============================================================================
float *glitch::collada::ps::CSmoothRandomGenerator::randVec(
        float *a1,
        glitch::collada::ps::CSmoothRandomGenerator::Self *a2,
        uint16_t a3,
        float *a4,
        unsigned int a5,
        float *a6,
        float *a7)
{
  float v8;
  float v9;

  v8 = glitch::collada::ps::CSmoothRandomGenerator::rand(a2, a3 + 2, a4[2], a5, a6[2], *a7);
  v9 = glitch::collada::ps::CSmoothRandomGenerator::rand(a2, a3 + 1, a4[1], a5, a6[1], *a7);
  *a1 = glitch::collada::ps::CSmoothRandomGenerator::rand(a2, a3, *a4, a5, *a6, *a7);
  a1[1] = v9;
  a1[2] = v8;
  return a1;
}


// ============================================================================
// Address:   0xd10740 (size: 209 bytes)
// Symbol:    _ZN6glitch7collada2ps15CParticleSystem16getParameterImplE27E_PARTICLE_SYSTEM_PARAMETER
// Demangled: glitch::collada::ps::CParticleSystem::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// ============================================================================
int glitch::collada::ps::CParticleSystem::getParameterImpl(uint32_t *a1, int a2)
{
  int result;

  switch ( a2 )
  {
    case 0:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 84;
      break;
    case 3:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 192;
      break;
    case 5:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 68;
      break;
    case 6:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 69;
      break;
    case 7:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 70;
      break;
    case 94:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 88;
      break;
    case 95:
      result = (int)(uintptr_t)(a1 + 163);
      break;
    case 98:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 4;
      break;
    case 99:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 32;
      break;
    case 100:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 8;
      break;
    case 101:
      result = (int)(uintptr_t)(a1) + *(uint32_t *)(*a1 - 12) + 20;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ============================================================================
// Address:   0xd10820 (size: 408 bytes)
// Symbol:    _ZN6glitch7collada2ps16IParticleContextC2Ev
// Demangled: glitch::collada::ps::IParticleContext::IParticleContext(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps16IParticleContextC1Ev'
glitch::collada::ps::IParticleContext::Self *glitch::collada::ps::IParticleContext::Construct(
        glitch::collada::ps::IParticleContext::Self *self)
{
  char *v1;
  unsigned int v2;
  struct glitch::collada::ps::IParticleContext::Self *result;
  char *v4;

  v1 = (char *)self + 124;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070310);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 1056964608;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 1056964608;
  *((uint32_t *)self + 7) = 0;
  *((uint8_t *)self + 32) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint8_t *)self + 68) = 0;
  *((uint8_t *)self + 69) = 0;
  *((uint8_t *)self + 70) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 1065353216;
  *((uint32_t *)self + 20) = 1065353216;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 1112014848;
  *((uint32_t *)self + 23) = 1140457472;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 123456789;
  *((uint32_t *)self + 26) = 123456789;
  glitch::collada::ps::CSmoothRandomGenerator::Construct((glitch::collada::ps::IParticleContext::Self *)((char *)self + 108));
  *((uint32_t *)self + 30) = 0;
  v2 = 64;
  if ( (((unsigned int)(uintptr_t)(self) + 124) & 1) != 0 )
  {
    v1 = (char *)self + 125;
    *((uint8_t *)self + 124) = 0;
    LOBYTE(v2) = 63;
    if ( (((unsigned int)(uintptr_t)(self) + 125) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v1) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v1 = 0;
  v2 -= 2;
  v1 += 2;
LABEL_3:
  result = nullptr;
  memset(v1, 0, 4 * (v2 >> 2));
  v4 = &v1[4 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
  {
    *(uint16_t *)v4 = 0;
    v4 += 2;
  }
  if ( (v2 & 1) != 0 )
    *v4 = 0;
  *((uint32_t *)self + 31) = 1065353216;
  *((uint32_t *)self + 36) = 1065353216;
  *((uint32_t *)self + 41) = 1065353216;
  *((uint32_t *)self + 46) = 1065353216;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  return result;
}


// ============================================================================
// Address:   0xd109c0 (size: 261 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcherC2EPNS_5video12IVideoDriverE
// Demangled: glitch::collada::ps::CParticleSystemBatcher::CParticleSystemBatcher(glitch::video::IVideoDriver *)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps22CParticleSystemBatcherC1EPNS_5video12IVideoDriverE'
glitch::collada::ps::CParticleSystemBatcher *glitch::collada::ps::CParticleSystemBatcher::Construct(
        glitch::collada::ps::CParticleSystemBatcher *self,
        glitch::video::IVideoDriver::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070328);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint16_t *)self + 16) = 255;
  *((uint16_t *)self + 17) = 6;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint16_t *)self + 28) = 255;
  *((uint16_t *)self + 29) = 6;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = -1;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 33) = 0;
  *((uint8_t *)self + 68) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint8_t *)self + 69) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 27) = 0;
  return self;
}


// ============================================================================
// Address:   0xd10ad0 (size: 9 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcher14releaseBuffersEv
// Demangled: glitch::collada::ps::CParticleSystemBatcher::releaseBuffers(void)
// ============================================================================
void glitch::collada::ps::CParticleSystemBatcher::releaseBuffers()
{
  ;
}


// ============================================================================
// Address:   0xd10ae0 (size: 15 bytes)
// Symbol:    _ZNK6glitch7collada2ps22CParticleSystemBatcher12isCompatibleEj
// Demangled: glitch::collada::ps::CParticleSystemBatcher::isCompatible(unsigned int)const
// ============================================================================
bool glitch::collada::ps::CParticleSystemBatcher::isCompatible(
        glitch::collada::ps::CParticleSystemBatcher *self,
        unsigned int a2)
{
  return *((uint32_t *)self + 28) == a2;
}


// ============================================================================
// Address:   0xd10af0 (size: 786 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcher18updateVertexBufferEi
// Demangled: glitch::collada::ps::CParticleSystemBatcher::updateVertexBuffer(int)
// ============================================================================


// ============================================================================
// Address:   0xd10e10 (size: 365 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcher18createVertexBufferEjj
// Demangled: glitch::collada::ps::CParticleSystemBatcher::createVertexBuffer(unsigned int,unsigned int)
// ============================================================================
int glitch::collada::ps::CParticleSystemBatcher::createVertexBuffer(
        glitch::collada::ps::CParticleSystemBatcher *self,
        unsigned int a2,
        unsigned int a3)
{
  glitch::collada::ps::CParticleSystemBatcher *v3;
  unsigned int v4;
  glitch::video::CVertexStreams::Self *v5;
  glitch::video::CVertexStreams::Self *v6;
  glitch::video::CVertexStreams::Self *v7;
  glitch::video::CVertexStreams::Self *v8;
  glitch::video::CVertexStreams::Self *v9;
  glitch::video::CVertexStreams::Self *v10;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v12;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);

  v15[6] = (glitch::video::CVertexStreams::Self *)&self;
  v3 = self;
  v4 = a2;
  v14 = a3;
  *((uint32_t *)self + 28) = a2;
  *((uint32_t *)v3 + 30) = v14;
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self *)v15, v4);
  v5 = v15[0];
  if ( v15[0] != nullptr )
  {
    v12 = v15[0];
    sub_8B1B00((volatile int32_t *)v15[0]);
    v5 = v12;
  }
  v6 = *((glitch::video::CVertexStreams::Self **)v3 + 1);
  *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(v5);
  if ( v6 != nullptr && __sync_fetch_and_add((volatile int32_t *)v6, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v6);
    gll_operator_delete_arr((int)(uintptr_t)(v6));
  }
  v7 = v15[0];
  if ( v15[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v15[0], 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v7);
    gll_operator_delete_arr((int)(uintptr_t)(v7));
  }
  glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self *)v15, *((uint32_t *)v3 + 28));
  v8 = v15[0];
  if ( v15[0] != nullptr )
  {
    v13 = v15[0];
    sub_8B1B00((volatile int32_t *)v15[0]);
    v8 = v13;
  }
  v9 = *((glitch::video::CVertexStreams::Self **)v3 + 2);
  *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v8);
  if ( v9 != nullptr && __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v9);
    gll_operator_delete_arr((int)(uintptr_t)(v9));
  }
  v10 = v15[0];
  if ( v15[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v15[0], 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v10);
    gll_operator_delete_arr((int)(uintptr_t)(v10));
  }
  return glitch::collada::ps::CParticleSystemBatcher::updateVertexBuffer(v3, v14);
}


// ============================================================================
// Address:   0xd10f80 (size: 608 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcher17updateIndexBufferEi
// Demangled: glitch::collada::ps::CParticleSystemBatcher::updateIndexBuffer(int)
// ============================================================================
int glitch::collada::ps::CParticleSystemBatcher::updateIndexBuffer(
        glitch::collada::ps::CParticleSystemBatcher *self,
        int a2)
{
  int v2;
  size_t v3;
  void *v4;
  int v5;
  bool v6;
  size_t v7;
  void *v8;
  int v9;
  volatile int32_t *v10;
  int v11;
  volatile int32_t *v12;
  int result;
  void *v14;
  int v15;
  volatile int32_t *v16;
  void *v17;
  int v18;
  volatile int32_t *v19;
  bool v20;

  v2 = *((uint32_t *)self + 31);
  *((uint16_t *)self + 16) = 1;
  *((uint32_t *)self + 5) = 0;
  v3 = 2 * (a2 + v2);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  v4 = (void *)sub_4EBDC0(v3);
  glitch::video::IBuffer::reset(*((glitch::video::IBuffer::Self **)self + 15), v3, v4, true);
  glitch::video::IBuffer::bind(*((glitch::video::IBuffer::Self **)self + 15), 3u, 0);
  v5 = *((uint32_t *)self + 31);
  v6 = (*(uint8_t *)(*((uint32_t *)self + 15) + 34) & 8) == 0;
  *((uint16_t *)self + 28) = 1;
  v20 = v6;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  v7 = 2 * (a2 + v5);
  v8 = (void *)sub_4EBDC0(v7);
  glitch::video::IBuffer::reset(*((glitch::video::IBuffer::Self **)self + 16), v7, v8, true);
  glitch::video::IBuffer::bind(*((glitch::video::IBuffer::Self **)self + 16), 3u, 0);
  if ( !v20 || (*(uint8_t *)(*((uint32_t *)self + 16) + 34) & 8) != 0 )
  {
    v14 = (void *)sub_4EBDC0(2 * *((uint32_t *)self + 31));
    glitch::video::IBuffer::reset(*((glitch::video::IBuffer::Self **)self + 15), 2 * *((uint32_t *)self + 31), v14, true);
    glitch::video::IBuffer::bind(*((glitch::video::IBuffer::Self **)self + 15), 3u, 0);
    v15 = *((uint32_t *)self + 15);
    if ( v15 != 0 )
      sub_8B1B00((volatile int32_t *)(v15 + 4));
    v16 = *((volatile int32_t **)self + 3);
    *((uint32_t *)self + 3) = v15;
    if ( v16 != nullptr )
      sub_5459C0(v16);
    v17 = (void *)sub_4EBDC0(2 * *((uint32_t *)self + 31));
    glitch::video::IBuffer::reset(*((glitch::video::IBuffer::Self **)self + 16), 2 * *((uint32_t *)self + 31), v17, true);
    glitch::video::IBuffer::bind(*((glitch::video::IBuffer::Self **)self + 16), 3u, 0);
    v18 = *((uint32_t *)self + 16);
    if ( v18 != 0 )
      sub_8B1B00((volatile int32_t *)(v18 + 4));
    v19 = *((volatile int32_t **)self + 9);
    result = 0;
    *((uint32_t *)self + 9) = v18;
    if ( v19 != nullptr )
    {
      sub_5459C0(v19);
      return 0;
    }
  }
  else
  {
    v9 = *((uint32_t *)self + 15);
    if ( v9 != 0 )
      sub_8B1B00((volatile int32_t *)(v9 + 4));
    v10 = *((volatile int32_t **)self + 3);
    *((uint32_t *)self + 3) = v9;
    if ( v10 != nullptr )
      sub_5459C0(v10);
    v11 = *((uint32_t *)self + 16);
    if ( v11 != 0 )
      sub_8B1B00((volatile int32_t *)(v11 + 4));
    v12 = *((volatile int32_t **)self + 9);
    *((uint32_t *)self + 9) = v11;
    if ( v12 != nullptr )
      sub_5459C0(v12);
    *((uint32_t *)self + 31) += a2;
    return 1;
  }
  return result;
}


// ============================================================================
// Address:   0xd111e0 (size: 270 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcher17createIndexBufferEj
// Demangled: glitch::collada::ps::CParticleSystemBatcher::createIndexBuffer(unsigned int)
// ============================================================================
// bad sp value at call has been detected, the output may be wrong!
int glitch::collada::ps::CParticleSystemBatcher::createIndexBuffer(
        glitch::collada::ps::CParticleSystemBatcher *self,
        unsigned int a2)
{
  glitch::collada::ps::CParticleSystemBatcher *v2;
  int v3;
  volatile int32_t *v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef volatile int32_t *_g4_t_v14[3];
  typedef uint32_t _g4_t_v15[4];
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef glitch::collada::ps::CParticleSystemBatcher **_g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v14)) > _g4_s5 ? (20u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v16)) > _g4_s7 ? (48u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (49u + sizeof(_g4_t_v17)) > _g4_s8 ? (49u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v18)) > _g4_s9 ? (60u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 49u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  v18 = &self;
  v2 = self;
  v15[0] = 1;
  v15[1] = 1;
  v15[2] = 0;
  v15[3] = 0;
  v16 = 1;
  v3 = *((uint32_t *)self + 32);
  v17 = 1;
  (*(void (**)(volatile int32_t **, int, uint32_t *, int, int, int, int, unsigned int))(*(uint32_t *)v3 + 88))(
    v14,
    v3,
    v15,
    v9,
    v10,
    v11,
    v12,
    a2);
  v4 = v14[0];
  if ( v14[0] != nullptr )
    sub_8B1B00(v14[0] + 1);
  v5 = *((volatile int32_t **)v2 + 15);
  *((uint32_t *)v2 + 15) = (uint32_t)(uintptr_t)(v4);
  if ( v5 != nullptr )
    sub_5459C0(v5);
  if ( v14[0] != nullptr )
    sub_5459C0(v14[0]);
  (*(void (**)(volatile int32_t **, uint32_t, uint32_t *))(**((uint32_t **)v2 + 32) + 88))(
    v14,
    *((uint32_t *)v2 + 32),
    v15);
  v6 = v14[0];
  if ( v14[0] != nullptr )
    sub_8B1B00(v14[0] + 1);
  v7 = *((volatile int32_t **)v2 + 16);
  *((uint32_t *)v2 + 16) = (uint32_t)(uintptr_t)(v6);
  if ( v7 != nullptr )
    sub_5459C0(v7);
  if ( v14[0] != nullptr )
    sub_5459C0(v14[0]);
  *((uint32_t *)v2 + 31) = v13;
  return glitch::collada::ps::CParticleSystemBatcher::updateIndexBuffer(v2, v13);
}


// ============================================================================
// Address:   0xd112f0 (size: 48 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcher13setIndexRangeEjjjj
// Demangled: glitch::collada::ps::CParticleSystemBatcher::setIndexRange(unsigned int,unsigned int,unsigned int,unsigned int)
// ============================================================================
uint32_t *glitch::collada::ps::CParticleSystemBatcher::setIndexRange(
        glitch::collada::ps::CParticleSystemBatcher *self,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  uint32_t *result;

  result = (uint32_t *)((char *)self + 24 * *((uint32_t *)self + 33) + 12);
  result[1] = 2 * a5;
  result[2] = a4;
  result[3] = a2;
  result[4] = a3;
  return result;
}


// ============================================================================
// Address:   0xd11320 (size: 12 bytes)
// Symbol:    _ZNK6glitch7collada2ps22CParticleSystemBatcher14getMaxVerticesEv
// Demangled: glitch::collada::ps::CParticleSystemBatcher::getMaxVertices(void)const
// ============================================================================
int glitch::collada::ps::CParticleSystemBatcher::getMaxVertices(
        glitch::collada::ps::CParticleSystemBatcher *self)
{
  return *((uint32_t *)self + 30);
}


// ============================================================================
// Address:   0xd11330 (size: 12 bytes)
// Symbol:    _ZNK6glitch7collada2ps22CParticleSystemBatcher13getMaxIndicesEv
// Demangled: glitch::collada::ps::CParticleSystemBatcher::getMaxIndices(void)const
// ============================================================================
int glitch::collada::ps::CParticleSystemBatcher::getMaxIndices(
        glitch::collada::ps::CParticleSystemBatcher *self)
{
  return *((uint32_t *)self + 31);
}


// ============================================================================
// Address:   0xd11340 (size: 72 bytes)
// Symbol:    _ZNK6glitch7collada2ps22CParticleSystemBatcher22getOutputVertexStreamsEv
// Demangled: glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams(void)const
// ============================================================================
glitch::collada::ps::CParticleSystemBatcher *glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams(
        glitch::collada::ps::CParticleSystemBatcher *self,
        int a2)
{
  volatile int32_t *v2;

  v2 = *(volatile int32_t **)(a2 + 4 * *(uint32_t *)(a2 + 132) + 4);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
  if ( v2 != nullptr )
    sub_8B1B00(v2);
  return self;
}


// ============================================================================
// Address:   0xd11390 (size: 18 bytes)
// Symbol:    _ZNK6glitch7collada2ps22CParticleSystemBatcher24getOutputPrimitiveStreamEv
// Demangled: glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream(void)const
// ============================================================================
char *glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream(
        glitch::collada::ps::CParticleSystemBatcher *self)
{
  return (char *)self + 24 * *((uint32_t *)self + 33) + 12;
}


// ============================================================================
// Address:   0xd113b0 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcher12resetStreamsEv
// Demangled: glitch::collada::ps::CParticleSystemBatcher::resetStreams(void)
// ============================================================================
glitch::collada::ps::CParticleSystemBatcher *glitch::collada::ps::CParticleSystemBatcher::resetStreams(
        glitch::collada::ps::CParticleSystemBatcher *self)
{
  *(uint32_t *)(*((uint32_t *)self + *((uint32_t *)self + 33) + 1) + 8) = 0;
  *((uint32_t *)self + 6 * *((uint32_t *)self + 33) + 5) = 0;
  *((uint32_t *)self + 33) = 1 - *((uint32_t *)self + 33);
  return self;
}


// ============================================================================
// Address:   0xd113f0 (size: 686 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcher10mapStreamsEh
// Demangled: glitch::collada::ps::CParticleSystemBatcher::mapStreams(unsigned char)
// ============================================================================
void glitch::collada::ps::CParticleSystemBatcher::mapStreams(
        glitch::collada::ps::CParticleSystemBatcher *self,
        uint8_t a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int Stream;
  char *v21;

  v2 = *((uint32_t *)self + 33);
  if ( *((uint8_t *)self + v2 + 68) == 0 )
  {
    v21 = (char *)self + 4 * v2;
    v18 = *((uint32_t *)v21 + 1);
    v3 = (uint32_t *)operator new(8u);
    v4 = glitch::video::IBuffer::mapInternal(
           *(glitch::video::IBuffer::Self **)(v18 + 20),
           1u,
           0,
           *(uint32_t *)(*(uint32_t *)(v18 + 20) + 20),
           a2);
    v5 = 0;
    if ( v4 != 0 )
      v5 = *(uint32_t *)(v18 + 24) + v4;
    v3[1] = v5;
    *v3 = v18 + 20;
    *((uint32_t *)self + v2 + 18) = (uint32_t)(uintptr_t)(v3);
    v6 = *((uint32_t *)self + 28);
    if ( (v6 & 2) != 0 )
    {
      v19 = *((uint32_t *)v21 + 1);
      v8 = (uint32_t *)operator new(8u);
      v9 = glitch::video::IBuffer::mapInternal(
             *(glitch::video::IBuffer::Self **)(v19 + 36),
             1u,
             0,
             *(uint32_t *)(*(uint32_t *)(v19 + 36) + 20),
             a2);
      v10 = 0;
      if ( v9 != 0 )
        v10 = *(uint32_t *)(v19 + 40) + v9;
      v8[1] = v10;
      *v8 = v19 + 36;
      *((uint32_t *)self + v2 + 20) = (uint32_t)(uintptr_t)(v8);
      v6 = *((uint32_t *)self + 28);
      if ( (v6 & 0x20000) == 0 )
      {
LABEL_6:
        v7 = v2 + 24;
        if ( (v6 & 0x10000) == 0 )
        {
LABEL_7:
          *((uint32_t *)self + v7 + 2) = glitch::video::IBuffer::mapInternal(
                                         *((glitch::video::IBuffer::Self **)self + 6 * v2 + 3),
                                         1u,
                                         0,
                                         *(uint32_t *)(*((uint32_t *)self + 6 * v2 + 3) + 20),
                                         a2);
          *((uint8_t *)self + v2 + 68) = 1;
          return;
        }
LABEL_14:
        v14 = *((uint32_t *)v21 + 1) + 16 * (uint8_t)(*(uint8_t *)(*((uint32_t *)v21 + 1) + 12) + 1) + 20;
        v17 = (int *)operator new(8u);
        v15 = glitch::video::IBuffer::mapInternal(
                *(glitch::video::IBuffer::Self **)v14,
                1u,
                0,
                *(uint32_t *)(*(uint32_t *)v14 + 20),
                a2);
        v16 = 0;
        if ( v15 != 0 )
          v16 = v15 + *(uint32_t *)(v14 + 4);
        *v17 = v14;
        v7 = v2 + 24;
        v17[1] = v16;
        *((uint32_t *)self + v2 + 24) = (uint32_t)(uintptr_t)(v17);
        goto LABEL_7;
      }
    }
    else if ( (v6 & 0x20000) == 0 )
    {
      goto LABEL_6;
    }
    Stream = glitch::video::CVertexStreams::getStream(
               *((uint32_t *)v21 + 1),
               17,
               *((uint32_t *)v21 + 1) + 20,
               *(uint32_t *)(*((uint32_t *)v21 + 1) + 16));
    v11 = (uint32_t *)operator new(8u);
    v12 = glitch::video::IBuffer::mapInternal(
            *(glitch::video::IBuffer::Self **)Stream,
            1u,
            0,
            *(uint32_t *)(*(uint32_t *)Stream + 20),
            a2);
    v13 = 0;
    if ( v12 != 0 )
      v13 = *(uint32_t *)(Stream + 4) + v12;
    v11[1] = v13;
    *v11 = Stream;
    *((uint32_t *)self + v2 + 22) = (uint32_t)(uintptr_t)(v11);
    v7 = v2 + 24;
    if ( (*((uint32_t *)self + 28) & 0x10000) == 0 )
      goto LABEL_7;
    goto LABEL_14;
  }
}


// ============================================================================
// Address:   0xd116a0 (size: 378 bytes)
// Symbol:    _ZN6glitch7collada2ps22CParticleSystemBatcher12unmapStreamsEv
// Demangled: glitch::collada::ps::CParticleSystemBatcher::unmapStreams(void)
// ============================================================================
void glitch::collada::ps::CParticleSystemBatcher::unmapStreams(
        glitch::collada::ps::CParticleSystemBatcher *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = *((uint32_t *)self + 33);
  if ( *((uint8_t *)self + v1 + 68) != 0 )
  {
    v2 = v1 + 16;
    v3 = *((uint32_t *)self + v1 + 18);
    if ( v3 != 0 )
    {
      if ( *(uint32_t *)(v3 + 4) != 0 )
      {
        glitch::video::IBuffer::unmap(**(glitch::video::IBuffer::Self ***)v3);
        *(uint32_t *)v3 = 0;
        *(uint32_t *)(v3 + 4) = 0;
        v2 = v1 + 16;
      }
      v8 = v2;
      operator delete((void *)v3);
      v2 = v8;
    }
    *((uint32_t *)self + v2 + 2) = 0;
    v4 = v1 + 20;
    v5 = *((uint32_t *)self + v1 + 20);
    v9 = v1 + 20;
    if ( v5 != 0 )
    {
      if ( *(uint32_t *)(v5 + 4) != 0 )
      {
        glitch::video::IBuffer::unmap(**(glitch::video::IBuffer::Self ***)v5);
        *(uint32_t *)v5 = 0;
        *(uint32_t *)(v5 + 4) = 0;
      }
      operator delete((void *)v5);
      v4 = v1 + 20;
      *((uint32_t *)self + v9) = 0;
    }
    v6 = *((uint32_t *)self + v4 + 2);
    if ( v6 != 0 )
    {
      if ( *(uint32_t *)(v6 + 4) != 0 )
      {
        glitch::video::IBuffer::unmap(**(glitch::video::IBuffer::Self ***)v6);
        *(uint32_t *)v6 = 0;
        *(uint32_t *)(v6 + 4) = 0;
      }
      operator delete((void *)v6);
      *((uint32_t *)self + v9 + 2) = 0;
    }
    v10 = v1 + 24;
    v7 = *((uint32_t *)self + v1 + 24);
    if ( v7 != 0 )
    {
      if ( *(uint32_t *)(v7 + 4) != 0 )
      {
        glitch::video::IBuffer::unmap(**(glitch::video::IBuffer::Self ***)v7);
        *(uint32_t *)v7 = 0;
        *(uint32_t *)(v7 + 4) = 0;
      }
      operator delete((void *)v7);
      *((uint32_t *)self + v10) = 0;
    }
    glitch::video::IBuffer::unmap(*((glitch::video::IBuffer::Self **)self + 6 * v1 + 3));
    *((uint32_t *)self + v10 + 2) = 0;
    *((uint8_t *)self + v1 + 68) = 0;
  }
}


// ============================================================================
// Address:   0xd11820 (size: 1894 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManagerC2Ev
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::CParticleSystemBatchingManager(void)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps30CParticleSystemBatchingManagerC1Ev'
glitch::collada::ps::CParticleSystemBatchingManager::Self *glitch::collada::ps::CParticleSystemBatchingManager::Construct(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self)
{
  char *v1;
  int v2;
  char *v3;
  glitch::collada::ps::CParticleSystemBatchingManager::Self *result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  int v21;
  unsigned int v22;
  void **v23;
  void **v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  volatile int32_t *v29;
  int v30;
  volatile int32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  void (***v42)(void *);
  void (***v43)(void *);
  void (**v44)(void *);
  void (***dest)(void *);
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  void *src;
  void *v65;
  void *v66;
  char *v67;
  char *v68;
  char *v69;
  char *v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  char *v78;
  char *v79;
  char *v80;
  int v81;
  int v82;
  char *v83;
  char *v84;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070338);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  glf::Mutex::Construct((pthread_mutex_t **)self + 7, 0);
  v1 = *((char **)self + 4);
  v2 = *((uint32_t *)self + 6) - (uint32_t)(uintptr_t)(v1);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = -1;
  v67 = v1;
  if ( (unsigned int)(-252645135 * (v2 >> 3)) <= 1 )
  {
    v79 = *((char **)self + 5);
    v81 = -252645135 * ((v79 - v1) >> 3);
    v25 = (int)(uintptr_t)(operator new(0x110u));
    v77 = v25;
    if ( v67 != v79 )
    {
      v26 = v67;
      v27 = v25;
      do
      {
        if ( v27 != 0 )
        {
          v28 = v27 - v77;
          *(uint32_t *)v27 = ((uint32_t)(uintptr_t)&off_2070328);
          v29 = *((volatile int32_t **)v26 + 1);
          v30 = v26 - v67;
          *(uint32_t *)(v27 + 4) = (uint32_t)(uintptr_t)(v29);
          if ( v29 != nullptr )
          {
            sub_8B1B00(v29);
            v30 = v26 - v67;
          }
          v31 = *(volatile int32_t **)&v67[v30 + 8];
          *(uint32_t *)(v27 + 8) = (uint32_t)(uintptr_t)(v31);
          if ( v31 != nullptr )
          {
            v60 = v30;
            sub_8B1B00(v31);
            v30 = v60;
          }
          v83 = v67 + 12;
          v46 = v77 + 12;
          v32 = *(uint32_t *)&v67[v30 + 12];
          *(uint32_t *)(v27 + 12) = v32;
          if ( v32 != 0 )
          {
            v61 = v30;
            sub_8B1B00((volatile int32_t *)(v32 + 4));
            v30 = v61;
          }
          *(uint32_t *)(v28 + v46 + 4) = *(uint32_t *)&v83[v30 + 4];
          *(uint32_t *)(v28 + v46 + 8) = *(uint32_t *)&v83[v30 + 8];
          *(uint32_t *)(v28 + v46 + 12) = *(uint32_t *)&v83[v30 + 12];
          *(uint32_t *)(v28 + v46 + 16) = *(uint32_t *)&v83[v30 + 16];
          *(uint16_t *)(v28 + v46 + 20) = *(uint16_t *)&v83[v30 + 20];
          *(uint16_t *)(v28 + v46 + 22) = *(uint16_t *)&v83[v30 + 22];
          v84 = v67 + 36;
          v47 = v77 + 36;
          v33 = *(uint32_t *)&v67[v30 + 36];
          *(uint32_t *)(v27 + 36) = v33;
          if ( v33 != 0 )
          {
            v62 = v30;
            sub_8B1B00((volatile int32_t *)(v33 + 4));
            v30 = v62;
          }
          *(uint32_t *)(v28 + v47 + 4) = *(uint32_t *)&v84[v30 + 4];
          *(uint32_t *)(v28 + v47 + 8) = *(uint32_t *)&v84[v30 + 8];
          *(uint32_t *)(v28 + v47 + 12) = *(uint32_t *)&v84[v30 + 12];
          *(uint32_t *)(v28 + v47 + 16) = *(uint32_t *)&v84[v30 + 16];
          *(uint16_t *)(v28 + v47 + 20) = *(uint16_t *)&v84[v30 + 20];
          *(uint16_t *)(v28 + v47 + 22) = *(uint16_t *)&v84[v30 + 22];
          v34 = *(uint32_t *)&v67[v30 + 60];
          v35 = v77;
          *(uint32_t *)(v27 + 60) = v34;
          if ( v34 != 0 )
          {
            v63 = v30;
            sub_8B1B00((volatile int32_t *)(v34 + 4));
            v30 = v63;
            v35 = v77;
          }
          v36 = *(uint32_t *)&v67[v30 + 64];
          *(uint32_t *)(v35 + v28 + 64) = v36;
          if ( v36 != 0 )
            sub_8B1B00((volatile int32_t *)(v36 + 4));
          *(uint16_t *)(v27 + 68) = *((uint16_t *)v26 + 34);
          v37 = *((uint32_t *)v26 + 19);
          *(uint32_t *)(v27 + 72) = *((uint32_t *)v26 + 18);
          *(uint32_t *)(v27 + 76) = v37;
          v38 = *((uint32_t *)v26 + 21);
          *(uint32_t *)(v27 + 80) = *((uint32_t *)v26 + 20);
          *(uint32_t *)(v27 + 84) = v38;
          v39 = *((uint32_t *)v26 + 23);
          *(uint32_t *)(v27 + 88) = *((uint32_t *)v26 + 22);
          *(uint32_t *)(v27 + 92) = v39;
          v40 = *((uint32_t *)v26 + 25);
          *(uint32_t *)(v27 + 96) = *((uint32_t *)v26 + 24);
          *(uint32_t *)(v27 + 100) = v40;
          v41 = *((uint32_t *)v26 + 27);
          *(uint32_t *)(v27 + 104) = *((uint32_t *)v26 + 26);
          *(uint32_t *)(v27 + 108) = v41;
          *(uint32_t *)(v27 + 112) = *((uint32_t *)v26 + 28);
          *(uint32_t *)(v27 + 116) = *((uint32_t *)v26 + 29);
          *(uint32_t *)(v27 + 120) = *((uint32_t *)v26 + 30);
          *(uint32_t *)(v27 + 124) = *((uint32_t *)v26 + 31);
          *(uint32_t *)(v27 + 128) = *((uint32_t *)v26 + 32);
          *(uint32_t *)(v27 + 132) = *((uint32_t *)v26 + 33);
        }
        v26 += 136;
        v27 += 136;
      }
      while ( v79 != v26 );
    }
    v42 = *((void (****)(void *))self + 5);
    v43 = *((void (****)(void *))self + 4);
    if ( v42 != v43 )
    {
      do
      {
        v44 = *v43;
        dest = v43;
        v43 += 34;
        (*v44)(dest);
      }
      while ( v42 != v43 );
      v43 = *((void (****)(void *))self + 4);
    }
    if ( v43 != nullptr )
      operator delete(v43);
    *((uint32_t *)self + 4) = v77;
    *((uint32_t *)self + 5) = v77 + 136 * v81;
    *((uint32_t *)self + 6) = v77 + 272;
  }
  v3 = *((char **)self + 1);
  result = (glitch::collada::ps::CParticleSystemBatchingManager::Self *)(*((uint32_t *)self + 3) - (uint32_t)(uintptr_t)(v3));
  v80 = v3;
  if ( (unsigned int)(uintptr_t)(result) <= 0x7F )
  {
    v78 = *((char **)self + 2);
    v5 = (int)(uintptr_t)(operator new(0x80u));
    v82 = v5;
    if ( v3 != v78 )
    {
      v6 = (uint32_t *)v5;
      v7 = v5;
      do
      {
        if ( v6 != nullptr )
        {
          *v6 = *(uint32_t *)v3;
          v6[1] = *((uint32_t *)v3 + 1);
          v6[2] = *((uint32_t *)v3 + 2);
          v6[3] = *((uint32_t *)v3 + 3);
          v6[4] = *((uint32_t *)v3 + 4);
          v20 = (char *)v6 - v7;
          v9 = v7 + 28;
          v6[5] = *((uint32_t *)v3 + 5);
          v6[6] = *((uint32_t *)v3 + 6);
          v21 = *((uint32_t *)v3 + 8) - *((uint32_t *)v3 + 7);
          v6[7] = 0;
          v22 = v21 >> 2;
          *(uint32_t *)&v20[v9 + 4] = 0;
          *(uint32_t *)&v20[v9 + 8] = 0;
          if ( v22 != 0 )
          {
            if ( v22 > 0x3FFFFFFF )
              goto LABEL_61;
            v48 = v7;
            v54 = v7 + 28;
            v71 = 4 * v22;
            v8 = (int)(uintptr_t)(operator new(4 * v22));
            v68 = (char *)v8;
            v7 = v48;
            v9 = v54;
          }
          else
          {
            v68 = nullptr;
            v71 = 0;
            v8 = 0;
          }
          *(uint32_t *)&v20[v7 + 28] = v8;
          *(uint32_t *)&v20[v9 + 4] = v8;
          v10 = v71 + v8;
          v72 = 0;
          *(uint32_t *)&v20[v9 + 8] = v10;
          src = *((void **)v3 + 7);
          v11 = (*((uint32_t *)v3 + 8) - (int)(uintptr_t)(src)) >> 2;
          if ( v11 != 0 )
          {
            v49 = v7;
            v72 = 4 * v11;
            v55 = v9;
            memmove(v68, src, 4 * v11);
            v9 = v55;
            v7 = v49;
          }
          *(uint32_t *)&v20[v9 + 4] = (uint32_t)(uintptr_t)(&v68[v72]);
          v9 = v7 + 40;
          v12 = (*((uint32_t *)v3 + 11) - *((uint32_t *)v3 + 10)) >> 2;
          *(uint32_t *)&v20[v7 + 40] = 0;
          *(uint32_t *)&v20[v9 + 4] = 0;
          *(uint32_t *)&v20[v9 + 8] = 0;
          if ( v12 != 0 )
          {
            if ( v12 > 0x3FFFFFFF )
              goto LABEL_61;
            v50 = v7;
            v56 = v7 + 40;
            v73 = 4 * v12;
            v13 = (int)(uintptr_t)(operator new(4 * v12));
            v69 = (char *)v13;
            v7 = v50;
            v9 = v56;
          }
          else
          {
            v69 = nullptr;
            v73 = 0;
            v13 = 0;
          }
          *(uint32_t *)&v20[v7 + 40] = v13;
          *(uint32_t *)&v20[v9 + 4] = v13;
          v14 = v73 + v13;
          v74 = 0;
          *(uint32_t *)&v20[v9 + 8] = v14;
          v65 = *((void **)v3 + 10);
          v15 = (*((uint32_t *)v3 + 11) - (int)(uintptr_t)(v65)) >> 2;
          if ( v15 != 0 )
          {
            v51 = v7;
            v74 = 4 * v15;
            v57 = v9;
            memmove(v69, v65, 4 * v15);
            v9 = v57;
            v7 = v51;
          }
          *(uint32_t *)&v20[v9 + 4] = (uint32_t)(uintptr_t)(&v69[v74]);
          v9 = v7 + 52;
          v16 = (*((uint32_t *)v3 + 14) - *((uint32_t *)v3 + 13)) >> 2;
          *(uint32_t *)&v20[v7 + 52] = 0;
          *(uint32_t *)&v20[v9 + 4] = 0;
          *(uint32_t *)&v20[v9 + 8] = 0;
          if ( v16 != 0 )
          {
            if ( v16 > 0x3FFFFFFF )
LABEL_61:
              sub_18FFEE0(v9, v7);
            v52 = v7;
            v58 = v7 + 52;
            v75 = 4 * v16;
            v17 = (int)(uintptr_t)(operator new(4 * v16));
            v70 = (char *)v17;
            v7 = v52;
            v9 = v58;
          }
          else
          {
            v70 = nullptr;
            v75 = 0;
            v17 = 0;
          }
          *(uint32_t *)&v20[v7 + 52] = v17;
          *(uint32_t *)&v20[v9 + 4] = v17;
          v18 = v75 + v17;
          v76 = 0;
          *(uint32_t *)&v20[v9 + 8] = v18;
          v66 = *((void **)v3 + 13);
          v19 = (*((uint32_t *)v3 + 14) - (int)(uintptr_t)(v66)) >> 2;
          if ( v19 != 0 )
          {
            v53 = v7;
            v76 = 4 * v19;
            v59 = v9;
            memmove(v70, v66, 4 * v19);
            v9 = v59;
            v7 = v53;
          }
          *(uint32_t *)&v20[v9 + 4] = (uint32_t)(uintptr_t)(&v70[v76]);
        }
        v3 += 64;
        v6 += 16;
      }
      while ( v78 != v3 );
    }
    v23 = *((void ***)self + 2);
    v24 = *((void ***)self + 1);
    if ( v23 != v24 )
    {
      do
      {
        if ( v24[13] != nullptr )
          operator delete(v24[13]);
        if ( v24[10] != nullptr )
          operator delete(v24[10]);
        if ( v24[7] != nullptr )
          operator delete(v24[7]);
        v24 += 16;
      }
      while ( v23 != v24 );
      v24 = *((void ***)self + 1);
    }
    if ( v24 != nullptr )
      operator delete(v24);
    *((uint32_t *)self + 1) = v82;
    *((uint32_t *)self + 2) = v82 + ((v78 - v80) & 0xFFFFFFC0);
    *((uint32_t *)self + 3) = v82 + 128;
    return (glitch::collada::ps::CParticleSystemBatchingManager::Self *)(v82 + 128);
  }
  return result;
}


// ============================================================================
// Address:   0xd11f90 (size: 120 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager14getInstancePtrEv
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getInstancePtr(void)
// ============================================================================
int glitch::collada::ps::CParticleSystemBatchingManager::getInstancePtr()
{
  glitch::collada::ps::CParticleSystemBatchingManager::Self *v1;

  if ( byte_20DFBE0 == 0 && _cxa_guard_acquire((__guard *)&byte_20DFBE0) != 0 )
  {
    v1 = (glitch::collada::ps::CParticleSystemBatchingManager::Self *)operator new(0x2Cu);
    glitch::collada::ps::CParticleSystemBatchingManager::Construct(v1);
    dword_20DFBF0 = (int)(uintptr_t)(v1);
    _cxa_guard_release((__guard *)&byte_20DFBE0);
  }
  return dword_20DFBF0;
}


// ============================================================================
// Address:   0xd12010 (size: 27 bytes)
// Symbol:    _ZN6glitch7collada2ps41getParticleSystemBillboardBatchingManagerEv
// Demangled: glitch::collada::ps::getParticleSystemBillboardBatchingManager(void)
// ============================================================================
int glitch::collada::ps::getParticleSystemBillboardBatchingManager()
{
  return glitch::collada::ps::CParticleSystemBatchingManager::getInstancePtr();
}


// ============================================================================
// Address:   0xd12030 (size: 9 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager12releaseBatchEv
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::releaseBatch(void)
// ============================================================================
void glitch::collada::ps::CParticleSystemBatchingManager::releaseBatch()
{
  ;
}


// ============================================================================
// Address:   0xd12040 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps30CParticleSystemRenderDataModelD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemRenderDataModel::Destroy()
// ============================================================================
static void g4_thunk_92(
        glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  glitch::collada::ps::CParticleSystemRenderDataModel::Destroy((glitch::collada::ps::CParticleSystemRenderDataModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd12050 (size: 354 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemRenderDataModelD1Ev
// Demangled: glitch::collada::ps::CParticleSystemRenderDataModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemRenderDataModel::Destroy(
        glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  bool v1;
  int v2;
  int v3;
  glitch::video::CVertexStreams::Self *v4;
  glitch::video::CMaterial::Self *v5;

  v1 = *((uint8_t *)self + 44) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20705CC);
  *((uint32_t *)self + 37) = ((uint32_t)(uintptr_t)&off_20705E8);
  if ( v1 && *((uint32_t *)self + 4) != 0 && *((uint8_t *)self + 45) == 0 )
    (*(void (**)(uint32_t, int, char *, uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 36) + 192))(
      *((uint32_t *)self + 36),
      1,
      (char *)self + 16,
      0,
      *((uint32_t *)self + 21),
      *((uint32_t *)self + 20));
  v2 = *((uint32_t *)self + 20);
  if ( v2 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 4))(*((uint32_t *)self + 20));
  if ( *((uint32_t *)self + 14) != 0 )
  {
    glitch::collada::ps::CParticleSystemBatchingManager::releaseBatch();
    (*(void (**)(uint32_t))(**((uint32_t **)self + 36) + 168))(*((uint32_t *)self + 36));
  }
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v3 + 4))(*((uint32_t *)self + 3));
    *((uint32_t *)self + 3) = 0;
  }
  if ( *((uint32_t *)self + 5) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 5));
  v4 = *((glitch::video::CVertexStreams::Self **)self + 4);
  if ( v4 != nullptr && __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v4);
    gll_operator_delete_arr((int)(uintptr_t)(v4));
  }
  v5 = *((glitch::video::CMaterial::Self **)self + 2);
  if ( v5 != nullptr )
  {
    v1 = *(uint32_t *)v5 == 2;
    _mm_mfence();
    if ( v1 )
      glitch::video::CMaterial::removeFromRootSceneNode(v5);
    if ( __sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v5);
      gll_operator_delete_arr((int)(uintptr_t)(v5));
    }
  }
  if ( *((uint32_t *)self + 1) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 1));
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::CParticleSystemRenderDataModel::Self *)((char *)self + 148));
}


// ============================================================================
// Address:   0xd121c0 (size: 15 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps30CParticleSystemRenderDataModelD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystemRenderDataModel::Destroy()
// ============================================================================
static void g4_thunk_93(
        glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  glitch::collada::ps::CParticleSystemRenderDataModel::Destroy((glitch::collada::ps::CParticleSystemRenderDataModel::Self *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd121d0 (size: 56 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemRenderDataModelD0Ev
// Demangled: glitch::collada::ps::CParticleSystemRenderDataModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemRenderDataModel::DestroyDeleting(
        glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  glitch::collada::ps::CParticleSystemRenderDataModel::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0xd12210 (size: 156 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager14clearRenderingEjj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::clearRendering(unsigned int,unsigned int)
// ============================================================================
glitch::collada::ps::CParticleSystemBatcher *glitch::collada::ps::CParticleSystemBatchingManager::clearRendering(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        unsigned int a3)
{
  glitch::collada::ps::CParticleSystemBatcher *result;
  int v4;

  result = (glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)self + 1) + (a2 << 6));
  if ( *((uint32_t *)result + a3 + 3) == *((uint32_t *)result + a3 + 2) )
  {
    v4 = *((uint32_t *)result + 7);
    *((uint32_t *)result + 6) = 0;
    *((uint32_t *)result + 8) = v4;
    *((uint32_t *)result + 11) = *((uint32_t *)result + 10);
    *((uint32_t *)result + 14) = *((uint32_t *)result + 13);
    *((uint32_t *)result + 4) = 0;
    *((uint32_t *)result + 5) = 0;
    *((uint32_t *)result + a3 + 3) = 0;
    *((uint32_t *)result + a3 + 2) = 0;
    return glitch::collada::ps::CParticleSystemBatcher::resetStreams((glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)self + 4) + 136 * a2));
  }
  return result;
}


// ============================================================================
// Address:   0xd122b0 (size: 1047 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager11renderBatchEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::renderBatch(unsigned int)
// ============================================================================
// bad sp value at call has been detected, the output may be wrong!
int *glitch::collada::ps::CParticleSystemBatchingManager::renderBatch(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2)
{
  glitch::collada::ps::CParticleSystemBatchingManager::Self *v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint16_t ParameterID;
  char *OutputPrimitiveStream;
  glitch::video::CMaterialVertexAttributeMap::Self *v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  glitch::video::CVertexStreams::Self *v15;
  glitch::video::CVertexStreams::Self *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int16_t _g4_t_v46;
  typedef int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54[4];
  typedef volatile int32_t *_g4_t_v55[4];
  typedef glitch::video::CVertexStreams::Self *_g4_t_v56[4];
  typedef int _g4_t_v57;
  typedef glitch::video::CMaterialVertexAttributeMap::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef volatile int32_t *_g4_t_v60[3];
  typedef glitch::video::IVideoDriver::Self *_g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef glitch::video::CMaterialVertexAttributeMap::Self **_g4_t_v63;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v25)) > _g4_s7 ? (28u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v26)) > _g4_s8 ? (32u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v27)) > _g4_s9 ? (32u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v28)) > _g4_s10 ? (32u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v29)) > _g4_s11 ? (32u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v30)) > _g4_s12 ? (32u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v31)) > _g4_s13 ? (36u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v32)) > _g4_s14 ? (36u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v33)) > _g4_s15 ? (40u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v34)) > _g4_s16 ? (44u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v35)) > _g4_s17 ? (44u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v36)) > _g4_s18 ? (48u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v37)) > _g4_s19 ? (48u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v38)) > _g4_s20 ? (52u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v39)) > _g4_s21 ? (52u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v40)) > _g4_s22 ? (56u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v41)) > _g4_s23 ? (56u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v42)) > _g4_s24 ? (60u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v43)) > _g4_s25 ? (60u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v44)) > _g4_s26 ? (64u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v45)) > _g4_s27 ? (68u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (70u + sizeof(_g4_t_v46)) > _g4_s28 ? (70u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v47)) > _g4_s29 ? (72u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v48)) > _g4_s30 ? (76u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v49)) > _g4_s31 ? (76u + sizeof(_g4_t_v49)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v50)) > _g4_s32 ? (76u + sizeof(_g4_t_v50)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v51)) > _g4_s33 ? (80u + sizeof(_g4_t_v51)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v52)) > _g4_s34 ? (80u + sizeof(_g4_t_v52)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v53)) > _g4_s35 ? (80u + sizeof(_g4_t_v53)) : _g4_s35,
    _g4_s37 = (84u + sizeof(_g4_t_v54)) > _g4_s36 ? (84u + sizeof(_g4_t_v54)) : _g4_s36,
    _g4_s38 = (100u + sizeof(_g4_t_v55)) > _g4_s37 ? (100u + sizeof(_g4_t_v55)) : _g4_s37,
    _g4_s39 = (116u + sizeof(_g4_t_v56)) > _g4_s38 ? (116u + sizeof(_g4_t_v56)) : _g4_s38,
    _g4_s40 = (132u + sizeof(_g4_t_v57)) > _g4_s39 ? (132u + sizeof(_g4_t_v57)) : _g4_s39,
    _g4_s41 = (136u + sizeof(_g4_t_v58)) > _g4_s40 ? (136u + sizeof(_g4_t_v58)) : _g4_s40,
    _g4_s42 = (140u + sizeof(_g4_t_v59)) > _g4_s41 ? (140u + sizeof(_g4_t_v59)) : _g4_s41,
    _g4_s43 = (144u + sizeof(_g4_t_v60)) > _g4_s42 ? (144u + sizeof(_g4_t_v60)) : _g4_s42,
    _g4_s44 = (156u + sizeof(_g4_t_v61)) > _g4_s43 ? (156u + sizeof(_g4_t_v61)) : _g4_s43,
    _g4_s45 = (160u + sizeof(_g4_t_v62)) > _g4_s44 ? (160u + sizeof(_g4_t_v62)) : _g4_s44,
    _g4_s46 = (164u + sizeof(_g4_t_v63)) > _g4_s45 ? (164u + sizeof(_g4_t_v63)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 70u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 80u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 84u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 100u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 116u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 132u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 136u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 140u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 144u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 156u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 160u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 164u);

  v61 = (glitch::video::IVideoDriver::Self *)&self;
  v2 = self;
  v51 = a2;
  v3 = (uint32_t *)(*((uint32_t *)self + 1) + (a2 << 6));
  v4 = v3[6];
  if ( v4 != 0 )
  {
    v48 = v4 - 1;
    v5 = 4 * v4;
    v47 = *(uint32_t *)(v3[7] + 4 * (v4 - 1)) + 1;
    v44 = *(uint32_t *)(v3[7] + 4 * v4);
    v6 = v3[10];
    v42 = *(uint32_t *)(v6 + 4 * v48);
    v49 = v42 + 1;
    v33 = -v42;
  }
  else
  {
    v33 = 1;
    v5 = 0;
    v47 = 0;
    v49 = 0;
    v44 = *(uint32_t *)v3[7];
    v6 = v3[10];
  }
  v43 = *(uint32_t *)(v6 + v5);
  v7 = *(uint32_t **)(v3[13] + v5);
  ParameterID = glitch::video::CMaterialRenderer::getParameterID(*(uint32_t *)(*v7 + 4), 2, 0, 0);
  HIWORD(v45) = ParameterID;
  v54[0] = 0;
  if ( ParameterID != 0xFFFF )
  {
    v31 = ParameterID;
    glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>>::getParameter<boost::intrusive_ptr<glitch::video::ITexture::Self>>(
      *v7,
      ParameterID,
      0,
      v54);
    if ( v54[0] != 0 && *(uint32_t *)(v54[0] + 8) != 0 )
    {
      v57 = *(uint32_t *)(v54[0] + 8);
      glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>>::setParameter<glitch::video::ITexture::Self *>(
        *v7,
        v31,
        0,
        &v57);
    }
    else
    {
      v59 = v54[0];
      v54[0] = 0;
      sub_CFE550(&v59);
    }
  }
  v52 = 136 * v51;
  OutputPrimitiveStream = glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream((glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)v2 + 4) + v52));
  v40 = *((uint32_t *)OutputPrimitiveStream + 2);
  v38 = *((uint32_t *)OutputPrimitiveStream + 3);
  v36 = *((uint32_t *)OutputPrimitiveStream + 4);
  v34 = *((uint32_t *)OutputPrimitiveStream + 1);
  v26 = OutputPrimitiveStream;
  glitch::collada::ps::CParticleSystemBatcher::setIndexRange(
    (glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)v2 + 4) + v52),
    v47,
    v44,
    v33 + v43,
    v49);
  (*(void (**)(uint32_t, int, uint32_t, int, int, int, int, int, int, int, int, char *, int, int, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int, int, int, int, int, int, int, int, int, volatile int32_t *, volatile int32_t *, volatile int32_t *, volatile int32_t *, glitch::video::CVertexStreams::Self *, glitch::video::CVertexStreams::Self *, glitch::video::CVertexStreams::Self *, glitch::video::CVertexStreams::Self *, int, glitch::video::CMaterialVertexAttributeMap::Self *, int, volatile int32_t *, volatile int32_t *, volatile int32_t *))(**((uint32_t **)v2 + 8) + 156))(
    *((uint32_t *)v2 + 8),
    2,
    0,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v31,
    v33,
    v34,
    v36,
    v38,
    v40,
    v43,
    v44,
    v45,
    v47,
    *(uint32_t *)(*((uint32_t *)v2 + 8) + 240) & 2,
    v52,
    v54[0],
    v54[1],
    v54[2],
    v54[3],
    v55[0],
    v55[1],
    v55[2],
    v55[3],
    v56[0],
    v56[1],
    v56[2],
    v56[3],
    v57,
    v58,
    v59,
    v60[0],
    v60[1],
    v60[2]);
  glitch::video::IVideoDriver::setTransform(*((uint32_t *)v2 + 8), 2, glitch::core::IdentityMatrix, 0);
  v62 = v7;
  v63 = &v58;
  v61 = *((glitch::video::IVideoDriver::Self **)v2 + 8);
  v58 = nullptr;
  glitch::video::IVideoDriver::setMaterial(v61, (int)(uintptr_t)(v7), (int)(uintptr_t)(&v58));
  v10 = v58;
  v11 = v27;
  if ( v58 != nullptr && __sync_fetch_and_add((volatile int32_t *)v58, 0xFFFFFFFF) == 1 )
  {
    v32 = (int)(uintptr_t)(v10);
    glitch::video::CMaterialVertexAttributeMap::Destroy(v10);
    gll_operator_delete_arr(v32);
    v11 = v27;
  }
  v28 = v11;
  glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams(
    (glitch::collada::ps::CParticleSystemBatcher *)v55,
    *((uint32_t *)v2 + 4) + v53);
  v56[0] = (glitch::video::CVertexStreams::Self *)v55[0];
  v12 = v28;
  if ( v55[0] != nullptr )
  {
    sub_8B1B00(v55[0]);
    v12 = v28;
  }
  v13 = *((int **)v2 + 8);
  v14 = *v13;
  v60[0] = nullptr;
  (*(void (**)(int *, glitch::video::CVertexStreams::Self **, int, uint32_t, volatile int32_t **))(v14 + 60))(
    v13,
    v56,
    v12,
    0,
    v60);
  if ( v60[0] != nullptr )
    sub_5459C0(v60[0]);
  v15 = v56[0];
  if ( v56[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v56[0], 0xFFFFFFFF) == 1 )
  {
    v30 = (int)(uintptr_t)(v15);
    glitch::video::CVertexStreams::Destroy(v15);
    gll_operator_delete_arr(v30);
  }
  v16 = (glitch::video::CVertexStreams::Self *)v55[0];
  if ( v55[0] != nullptr && __sync_fetch_and_add(v55[0], 0xFFFFFFFF) == 1 )
  {
    v29 = (int)(uintptr_t)(v16);
    glitch::video::CVertexStreams::Destroy(v16);
    gll_operator_delete_arr(v29);
  }
  if ( v54[0] != 0 )
    glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>>::setParameter<boost::intrusive_ptr<glitch::video::ITexture::Self>>(
      *v7,
      v46,
      0,
      v54);
  (*(void (**)(uint32_t, int, bool))(**((uint32_t **)v2 + 8) + 156))(*((uint32_t *)v2 + 8), 2, v50 != 0);
  glitch::collada::ps::CParticleSystemBatcher::setIndexRange(
    (glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)v2 + 4) + v53),
    v39,
    v37,
    v41,
    v35);
  return sub_CFE550(v54);
}


// ============================================================================
// Address:   0xd126d0 (size: 76 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager14flushRenderingEjj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::flushRendering(unsigned int,unsigned int)
// ============================================================================
unsigned int glitch::collada::ps::CParticleSystemBatchingManager::flushRendering(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2)
{
  unsigned int result;

  glitch::collada::ps::CParticleSystemBatchingManager::renderBatch(self, a2);
  result = *((uint32_t *)self + 1) + (a2 << 6);
  ++*(uint32_t *)(result + 24);
  return result;
}


// ============================================================================
// Address:   0xd12720 (size: 36 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager17updateVertexCountEjjj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::updateVertexCount(unsigned int,unsigned int,unsigned int)
// ============================================================================
unsigned int glitch::collada::ps::CParticleSystemBatchingManager::updateVertexCount(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int result;

  result = a2 << 6;
  *(uint32_t *)(*((uint32_t *)self + 1) + result + 16) = a3;
  *(uint32_t *)(*((uint32_t *)self + 1) + result + 20) = a4;
  return result;
}


// ============================================================================
// Address:   0xd12750 (size: 24 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager21incrPSRegisteredCountEjj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::incrPSRegisteredCount(unsigned int,unsigned int)
// ============================================================================
unsigned int glitch::collada::ps::CParticleSystemBatchingManager::incrPSRegisteredCount(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int result;

  result = *((uint32_t *)self + 1) + (a2 << 6);
  ++*(uint32_t *)(result + 4 * a3 + 12);
  return result;
}


// ============================================================================
// Address:   0xd12770 (size: 24 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager19incrPSRenderedCountEjj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::incrPSRenderedCount(unsigned int,unsigned int)
// ============================================================================
unsigned int glitch::collada::ps::CParticleSystemBatchingManager::incrPSRenderedCount(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int result;

  result = *((uint32_t *)self + 1) + (a2 << 6);
  ++*(uint32_t *)(result + 4 * a3 + 8);
  return result;
}


// ============================================================================
// Address:   0xd12790 (size: 123 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager20resetPSRenderedCountEjj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::resetPSRenderedCount(unsigned int,unsigned int)
// ============================================================================
unsigned int glitch::collada::ps::CParticleSystemBatchingManager::resetPSRenderedCount(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int result;

  result = *((uint32_t *)self + 1) + (a2 << 6);
  if ( *(uint32_t *)(result + 4 * a3 + 12) == *(uint32_t *)(result + 4 * a3 + 8) )
  {
    glitch::collada::ps::CParticleSystemBatcher::unmapStreams((glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)self + 4) + 136 * a2));
    result = *((uint32_t *)self + 1);
    *(uint32_t *)((a2 << 6) + result + 4 * a3 + 8) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0xd12810 (size: 1520 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager20registerForRenderingEjjRKN5boost13intrusive_ptrINS_5video9CMaterialEEEPjPbb
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::registerForRendering(unsigned int,unsigned int,boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned int *,bool *,bool)
// ============================================================================
unsigned int glitch::collada::ps::CParticleSystemBatchingManager::registerForRendering(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *a1,
        unsigned int a2,
        unsigned int a3,
        glitch::video::CMaterialRenderer::Self ***a4,
        uint32_t *a5,
        uint8_t *a6)
{
  glitch::collada::ps::CParticleSystemBatchingManager::Self *v6;
  unsigned int v7;
  int v8;
  glitch::video::CVertexStreams::Self *v9;
  char *OutputPrimitiveStream;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  glitch::video::CVertexStreams::Self *v21;
  char *v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  unsigned int v27;
  int *v28;
  int v29;
  unsigned int v30;
  glitch::video::CMaterialRenderer::Self ****v31;
  int v32;
  unsigned int v34;
  int64_t v35; // rax
  uint32_t *v36;
  int v37;
  bool v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint32_t *v44;
  int v45;
  int v46;
  int *v47;
  int v48;
  int v49;
  uint32_t *v50;
  int v51;
  glitch::video::CVertexStreams::Self *v52;
  glitch::video::CVertexStreams::Self *v53;
  typedef unsigned int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint8_t *_g4_t_v61;
  typedef glitch::video::CMaterialRenderer::Self ***_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v71;
  typedef uint32_t _g4_t_v72[4];
  typedef glitch::video::CVertexStreams::Self *_g4_t_v73;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v74;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t _g4_t_v77[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v54)) > _g4_s0 ? (0u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v55)) > _g4_s1 ? (8u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v56)) > _g4_s2 ? (8u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v57)) > _g4_s3 ? (8u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v58)) > _g4_s4 ? (8u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v59)) > _g4_s5 ? (12u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v60)) > _g4_s6 ? (12u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v61)) > _g4_s7 ? (16u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v62)) > _g4_s8 ? (20u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v63)) > _g4_s9 ? (24u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v64)) > _g4_s10 ? (28u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v65)) > _g4_s11 ? (32u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v66)) > _g4_s12 ? (32u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v67)) > _g4_s13 ? (32u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v68)) > _g4_s14 ? (32u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v69)) > _g4_s15 ? (32u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v70)) > _g4_s16 ? (32u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v71)) > _g4_s17 ? (36u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v72)) > _g4_s18 ? (52u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v73)) > _g4_s19 ? (68u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v74)) > _g4_s20 ? (84u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v75)) > _g4_s21 ? (88u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v76)) > _g4_s22 ? (92u + sizeof(_g4_t_v76)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v77)) > _g4_s23 ? (96u + sizeof(_g4_t_v77)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 68u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 84u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 88u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 92u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 96u);

  v77[3] = (uint32_t)(uintptr_t)(&a1);
  v6 = a1;
  v7 = a2;
  v64 = a3;
  v61 = a6;
  v63 = a5;
  v62 = a4;
  glitch::collada::ps::CParticleSystemBatchingManager::incrPSRenderedCount(a1, a2, a3);
  v8 = *((uint32_t *)v6 + 9);
  if ( v8 == -1 )
  {
    *((uint32_t *)v6 + 9) = v7;
    *((uint32_t *)v6 + 10) = (uint32_t)(uintptr_t)(v62);
  }
  else if ( v7 != v8 )
  {
    glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams(
      (glitch::collada::ps::CParticleSystemBatcher *)&v71,
      *((uint32_t *)v6 + 4) + 136 * v8);
    v9 = v71;
    if ( *((uint32_t *)v71 + 2) != 0 )
    {
      glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams(
        (glitch::collada::ps::CParticleSystemBatcher *)&v74,
        *((uint32_t *)v6 + 4) + 136 * *((uint32_t *)v6 + 9));
      v52 = v74;
      v72[0] = *((uint32_t *)v74 + 2) - 1;
      if ( __sync_fetch_and_add((volatile int32_t *)v74, 0xFFFFFFFF) == 1 )
      {
        v57 = (int)(uintptr_t)(v52);
        glitch::video::CVertexStreams::Destroy(v52);
        gll_operator_delete_arr(v57);
      }
      v9 = v71;
    }
    else
    {
      v72[0] = 0;
    }
    if ( v9 != nullptr && __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) == 1 )
    {
      v55 = (int)(uintptr_t)(v9);
      glitch::video::CVertexStreams::Destroy(v9);
      gll_operator_delete_arr(v55);
    }
    OutputPrimitiveStream = glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream((glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)v6 + 4) + 136 * *((uint32_t *)v6 + 9)));
    v11 = 0;
    if ( *((uint32_t *)OutputPrimitiveStream + 2) != 0 )
      v11 = *((uint32_t *)glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream((glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)v6 + 4) + 136 * *((uint32_t *)v6 + 9)))
            + 2)
          - 1;
    v12 = *((uint32_t *)v6 + 9);
    v76 = v11;
    v13 = (uint32_t *)(*((uint32_t *)v6 + 1) + (v12 << 6));
    v65 = 0;
    v14 = (uint32_t *)v13[8];
    if ( ((unsigned int)(uintptr_t)(v14) - v13[7]) >> 2 != 0 )
      v65 = *(v14 - 1);
    if ( v65 != v72[0] )
    {
      if ( v14 == (uint32_t *)v13[9] )
      {
        sub_CFF030((int)(uintptr_t)(v13 + 7), v72);
      }
      else
      {
        v66 = 0;
        if ( v14 != nullptr )
        {
          *v14 = v72[0];
          v66 = v13[8];
        }
        v13[8] = v66 + 4;
      }
      v15 = *((uint32_t *)v6 + 1) + (*((uint32_t *)v6 + 9) << 6);
      v16 = *(int **)(v15 + 44);
      if ( v16 == *(int **)(v15 + 48) )
      {
        sub_CFF030(v15 + 40, &v76);
      }
      else
      {
        v17 = 0;
        if ( v16 != nullptr )
        {
          *v16 = v76;
          v17 = *(uint32_t *)(v15 + 44);
        }
        *(uint32_t *)(v15 + 44) = v17 + 4;
      }
      v18 = *((uint32_t *)v6 + 1) + (*((uint32_t *)v6 + 9) << 6);
      v19 = *(uint32_t **)(v18 + 56);
      if ( v19 == *(uint32_t **)(v18 + 60) )
      {
        sub_CFE0C0(v18 + 52, (uint32_t *)v6 + 10);
      }
      else
      {
        v20 = 0;
        if ( v19 != nullptr )
        {
          *v19 = *((uint32_t *)v6 + 10);
          v20 = *(uint32_t *)(v18 + 56);
        }
        *(uint32_t *)(v18 + 56) = v20 + 4;
      }
      *v63 = *((uint32_t *)v6 + 9);
    }
    *((uint32_t *)v6 + 9) = v7;
    *((uint32_t *)v6 + 10) = (uint32_t)(uintptr_t)(v62);
    goto LABEL_27;
  }
  v69 = sub_8B3940(**((glitch::video::CMaterialRenderer::Self ****)v6 + 10));
  v59 = v34;
  LODWORD(v35) = sub_8B3940(*v62);
  if ( v35 == __PAIR64__(v59, v69) )
  {
    *v63 = -1;
  }
  else
  {
    v60 = 0;
    v36 = (uint32_t *)(*((uint32_t *)v6 + 1) + (*((uint32_t *)v6 + 9) << 6));
    v37 = v36[4];
    v38 = v37 == 0;
    v39 = v37 - 1;
    v40 = 0;
    if ( !v38 )
      v40 = v39;
    v72[0] = v40;
    v70 = v40;
    v41 = v36[5];
    v38 = v41 == 0;
    v42 = v41 - 1;
    v43 = 0;
    if ( !v38 )
      v43 = v42;
    v76 = v43;
    v44 = (uint32_t *)v36[8];
    if ( ((unsigned int)(uintptr_t)(v44) - v36[7]) >> 2 != 0 )
      v60 = *(v44 - 1);
    if ( v70 != v60 )
    {
      if ( v44 == (uint32_t *)v36[9] )
      {
        sub_CFF030((int)(uintptr_t)(v36 + 7), v72);
      }
      else
      {
        v45 = 0;
        if ( v44 != nullptr )
        {
          *v44 = v70;
          v45 = v36[8];
        }
        v36[8] = v45 + 4;
      }
      v46 = *((uint32_t *)v6 + 1) + (*((uint32_t *)v6 + 9) << 6);
      v47 = *(int **)(v46 + 44);
      if ( v47 == *(int **)(v46 + 48) )
      {
        sub_CFF030(v46 + 40, &v76);
      }
      else
      {
        v48 = 0;
        if ( v47 != nullptr )
        {
          *v47 = v76;
          v48 = *(uint32_t *)(v46 + 44);
        }
        *(uint32_t *)(v46 + 44) = v48 + 4;
      }
      v49 = *((uint32_t *)v6 + 1) + (*((uint32_t *)v6 + 9) << 6);
      v50 = *(uint32_t **)(v49 + 56);
      if ( v50 == *(uint32_t **)(v49 + 60) )
      {
        sub_CFE0C0(v49 + 52, (uint32_t *)v6 + 10);
      }
      else
      {
        v51 = 0;
        if ( v50 != nullptr )
        {
          *v50 = *((uint32_t *)v6 + 10);
          v51 = *(uint32_t *)(v49 + 56);
        }
        *(uint32_t *)(v49 + 56) = v51 + 4;
      }
      *v63 = *((uint32_t *)v6 + 9);
    }
    *((uint32_t *)v6 + 10) = (uint32_t)(uintptr_t)(v62);
  }
LABEL_27:
  if ( *v61 != 0 )
  {
    v54 = v7 << 6;
  }
  else
  {
    v54 = v7 << 6;
    if ( *(uint32_t *)(*((uint32_t *)v6 + 1) + (v7 << 6) + 4 * v64 + 12) != *(uint32_t *)(*((uint32_t *)v6 + 1)
                                                                                  + (v7 << 6)
                                                                                  + 4 * v64
                                                                                  + 8) )
      return glitch::collada::ps::CParticleSystemBatchingManager::resetPSRenderedCount(v6, v7, v64);
  }
  v67 = 136 * v7;
  glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams(
    (glitch::collada::ps::CParticleSystemBatcher *)&v73,
    *((uint32_t *)v6 + 4) + 136 * v7);
  v21 = v73;
  if ( *((uint32_t *)v73 + 2) != 0 )
  {
    glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams(
      (glitch::collada::ps::CParticleSystemBatcher *)&v75,
      *((uint32_t *)v6 + 4) + v67);
    v53 = v75;
    v72[0] = *((uint32_t *)v75 + 2) - 1;
    if ( __sync_fetch_and_add((volatile int32_t *)v75, 0xFFFFFFFF) == 1 )
    {
      v58 = (int)(uintptr_t)(v53);
      glitch::video::CVertexStreams::Destroy(v53);
      gll_operator_delete_arr(v58);
    }
    v21 = v73;
  }
  else
  {
    v72[0] = 0;
  }
  if ( v21 != nullptr && __sync_fetch_and_add((volatile int32_t *)v21, 0xFFFFFFFF) == 1 )
  {
    v56 = (int)(uintptr_t)(v21);
    glitch::video::CVertexStreams::Destroy(v21);
    gll_operator_delete_arr(v56);
  }
  v22 = glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream((glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)v6 + 4) + v67));
  v23 = 0;
  if ( *((uint32_t *)v22 + 2) != 0 )
    v23 = *((uint32_t *)glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream((glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)v6 + 4) + v67))
          + 2)
        - 1;
  v24 = (uint32_t *)(*((uint32_t *)v6 + 1) + v54);
  v76 = v23;
  v68 = (uint32_t *)v24[8];
  v25 = 0;
  if ( ((unsigned int)(uintptr_t)(v68) - v24[7]) >> 2 != 0 )
    v25 = *(v68 - 1);
  if ( v25 == v72[0] )
  {
    *v61 = 0;
  }
  else
  {
    if ( v68 == (uint32_t *)v24[9] )
    {
      sub_CFF030((int)(uintptr_t)(v24 + 7), v72);
    }
    else
    {
      v26 = 0;
      if ( v68 != nullptr )
      {
        *v68 = v72[0];
        v26 = v24[8];
      }
      v24[8] = v26 + 4;
    }
    v27 = *((uint32_t *)v6 + 1) + v54;
    v28 = *(int **)(v27 + 44);
    if ( v28 == *(int **)(v27 + 48) )
    {
      sub_CFF030(v27 + 40, &v76);
    }
    else
    {
      v29 = 0;
      if ( v28 != nullptr )
      {
        *v28 = v76;
        v29 = *(uint32_t *)(v27 + 44);
      }
      *(uint32_t *)(v27 + 44) = v29 + 4;
    }
    v77[0] = (uint32_t)(uintptr_t)(v62);
    v30 = *((uint32_t *)v6 + 1) + v54;
    v31 = *(glitch::video::CMaterialRenderer::Self *****)(v30 + 56);
    if ( v31 == *(glitch::video::CMaterialRenderer::Self *****)(v30 + 60) )
    {
      sub_CFE0C0(v30 + 52, v77);
    }
    else
    {
      v32 = 0;
      if ( v31 != nullptr )
      {
        *v31 = v62;
        v32 = *(uint32_t *)(v30 + 56);
      }
      *(uint32_t *)(v30 + 56) = v32 + 4;
    }
    *v61 = 1;
  }
  *((uint32_t *)v6 + 9) = -1;
  return glitch::collada::ps::CParticleSystemBatchingManager::resetPSRenderedCount(v6, v7, v64);
}


// ============================================================================
// Address:   0xd12e00 (size: 23 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager20getPSRegisteredCountEjj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getPSRegisteredCount(unsigned int,unsigned int)const
// ============================================================================
int glitch::collada::ps::CParticleSystemBatchingManager::getPSRegisteredCount(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        unsigned int a3)
{
  return *(uint32_t *)(*((uint32_t *)self + 1) + (a2 << 6) + 4 * a3 + 12);
}


// ============================================================================
// Address:   0xd12e20 (size: 23 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager18getPSRenderedCountEjj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getPSRenderedCount(unsigned int,unsigned int)const
// ============================================================================
int glitch::collada::ps::CParticleSystemBatchingManager::getPSRenderedCount(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        unsigned int a3)
{
  return *(uint32_t *)(*((uint32_t *)self + 1) + (a2 << 6) + 4 * a3 + 8);
}


// ============================================================================
// Address:   0xd12e40 (size: 79 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager16getVertexStreamsEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getVertexStreams(unsigned int)const
// ============================================================================
glitch::collada::ps::CParticleSystemBatchingManager::Self *glitch::collada::ps::CParticleSystemBatchingManager::getVertexStreams(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        int a3)
{
  glitch::collada::ps::CParticleSystemBatcher::getOutputVertexStreams((glitch::collada::ps::CParticleSystemBatcher *)(self), *(uint32_t *)(a2 + 16) + 136 * a3);
  return self;
}


// ============================================================================
// Address:   0xd12e90 (size: 49 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager15getIndexStreamsEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreams(unsigned int)const
// ============================================================================
char *glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreams(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2)
{
  return glitch::collada::ps::CParticleSystemBatcher::getOutputPrimitiveStream((glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)self + 4) + 136 * a2));
}


// ============================================================================
// Address:   0xd12ed0 (size: 12 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager22getRegisteredBatchLockEv
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getRegisteredBatchLock(void)
// ============================================================================
char *glitch::collada::ps::CParticleSystemBatchingManager::getRegisteredBatchLock(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self)
{
  return (char *)self + 28;
}


// ============================================================================
// Address:   0xd12ee0 (size: 107 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager12isCompatibleEjj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::isCompatible(unsigned int,unsigned int)const
// ============================================================================
bool glitch::collada::ps::CParticleSystemBatchingManager::isCompatible(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        unsigned int a3)
{
  int v3;
  bool result;

  v3 = *((uint32_t *)self + 4);
  result = false;
  if ( a3 < -252645135 * ((*((uint32_t *)self + 5) - v3) >> 3) )
    return glitch::collada::ps::CParticleSystemBatcher::isCompatible(
             (glitch::collada::ps::CParticleSystemBatcher *)(136 * a3 + v3),
             a3);
  return result;
}


// ============================================================================
// Address:   0xd12f50 (size: 58 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager13mapAllStreamsEjh
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::mapAllStreams(unsigned int,unsigned char)
// ============================================================================
void glitch::collada::ps::CParticleSystemBatchingManager::mapAllStreams(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2,
        char a3)
{
  glitch::collada::ps::CParticleSystemBatcher::mapStreams(
    (glitch::collada::ps::CParticleSystemBatcher *)(*((uint32_t *)self + 4) + 136 * a2),
    a3);
}


// ============================================================================
// Address:   0xd12f90 (size: 134 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager15unmapAllStreamsEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::unmapAllStreams(unsigned int)
// ============================================================================
void glitch::collada::ps::CParticleSystemBatchingManager::unmapAllStreams(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2)
{
  unsigned int v2;

  v2 = 136 * a2;
  glitch::collada::ps::CParticleSystemBatcher::unmapStreams((glitch::collada::ps::CParticleSystemBatcher *)(136 * a2 + *((uint32_t *)self + 4)));
  *(uint32_t *)(*((uint32_t *)self + 4) + v2 + 132) = 1 - *(uint32_t *)(*((uint32_t *)self + 4) + v2 + 132);
  glitch::collada::ps::CParticleSystemBatcher::unmapStreams((glitch::collada::ps::CParticleSystemBatcher *)(136 * a2 + *((uint32_t *)self + 4)));
  *(uint32_t *)(*((uint32_t *)self + 4) + v2 + 132) = 1 - *(uint32_t *)(*((uint32_t *)self + 4) + v2 + 132);
}


// ============================================================================
// Address:   0xd13020 (size: 3172 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemBatchingManager24unregisterParticleSystemEPNS1_15CParticleSystemEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::unregisterParticleSystem(glitch::collada::ps::CParticleSystem::Self *,unsigned int)
// ============================================================================
int glitch::collada::ps::CParticleSystemBatchingManager::unregisterParticleSystem(
        pthread_mutex_t **self,
        glitch::collada::ps::CParticleSystem::Self *a2,
        unsigned int a3)
{
  int v4;
  int *v5;
  char *v6;
  int *v7;
  int *v8;
  int *v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  char *v14;
  char *v15;
  unsigned int v16;
  unsigned int v17;
  char *v18;
  char *v19;
  bool v20;
  uint8_t *v21;
  char *v22;
  char *dest;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  volatile int32_t *v31;
  volatile int32_t *v32;
  int v33;
  unsigned int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  char *v47;
  void *v48;
  char *v49;
  char *v50;
  void *v51;
  char *v52;
  void *v53;
  size_t n;
  int v55;
  size_t v56;
  int v57;
  size_t v58;
  glitch::video::CVertexStreams::Self *v59;
  glitch::video::CVertexStreams::Self *v60;
  glitch::video::CVertexStreams::Self *v61;
  glitch::video::CVertexStreams::Self *v62;
  glitch::video::CVertexStreams::Self *v63;
  glitch::video::CVertexStreams::Self *v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  int *v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int *v80;
  int *v81;
  int *v82;
  int *v83;
  int *v84;
  int *v85;
  int *v86;
  int *v87;
  int *v88;
  int *v89;
  int *v90;
  int *v91;
  int *v92;
  int *v93;
  volatile int32_t *v94;
  volatile int32_t *v95;
  char *v96;
  char *v97;
  char *v98;
  char *v99;
  int v100;
  uint8_t *v101;
  char *v102;
  uint8_t *v103;
  char *v104;
  int v105;
  int v106;
  unsigned int v107;
  uint8_t *v108;
  size_t v109;
  uint8_t *v110;
  signed int v111;
  size_t v112;
  size_t v113;
  uint8_t *v114;
  uint8_t *v115;
  char *v116;
  size_t v117;
  size_t v118;
  char *v119;
  char *v120;
  char *v121;
  int *v122;
  unsigned int v123;
  uint32_t *v124;
  unsigned int v125;
  char *src;
  char *v127;
  char *v128;
  char *v129;
  char *v130;
  char *v131;
  int *v132;
  int *v133;
  uint8_t *v134;
  uint8_t *v135;
  char *v136;

  glf::Mutex::Lock(self + 7);
  v100 = (*(int (**)(uint32_t))(**((uint32_t **)a2 + 120) + 24))(*((uint32_t *)a2 + 120));
  v105 = (*(int (**)(uint32_t))(**((uint32_t **)a2 + 120) + 28))(*((uint32_t *)a2 + 120));
  v4 = *(uint32_t *)(*(int (**)(glitch::collada::ps::CParticleSystem::Self *, int))(*(uint32_t *)a2 + 12))(a2, 14);
  --*(&G4_MUTEX_LOCK((*(self + 1))) + 16 * a3);
  v5 = &G4_MUTEX_LOCK((*(self + 1))) + 16 * a3;
  if ( *v5 != 0 )
  {
    glitch::collada::ps::CParticleSystemBatchingManager::unmapAllStreams(
      (glitch::collada::ps::CParticleSystemBatchingManager::Self *)self,
      a3);
    glitch::collada::ps::CParticleSystemBatcher::updateVertexBuffer(
      (glitch::collada::ps::CParticleSystemBatcher *)((char *)*(self + 4) + 136 * a3),
      -v4 * v100);
    glitch::collada::ps::CParticleSystemBatcher::updateIndexBuffer(
      (glitch::collada::ps::CParticleSystemBatcher *)((char *)*(self + 4) + 136 * a3),
      v105 * -v4);
    *(&G4_MUTEX_COUNT((*(self + 1))) + 16 * a3) -= v4;
    v45 = 0;
  }
  else
  {
    v6 = (char *)*(self + 2);
    v124 = (uint32_t *)(v5 + 16);
    if ( v6 != (char *)(v5 + 16) )
    {
      v106 = (v6 - (char *)(v5 + 16)) >> 6;
      if ( v106 > 0 )
      {
        v7 = &G4_MUTEX_LOCK((*(self + 1))) + 16 * a3;
        v8 = v7;
        while ( 1 )
        {
          while ( 1 )
          {
            *v7 = v7[16];
            v7[1] = v7[17];
            v7[2] = v7[18];
            v7[3] = v7[19];
            v7[4] = v7[20];
            v122 = v7 + 16;
            v21 = (uint8_t *)v7[24];
            v22 = (char *)v7[23];
            v7[5] = v7[21];
            v7[6] = v7[22];
            src = v22;
            dest = (char *)v7[7];
            v103 = v21;
            v24 = (v21 - (uint8_t *)(v22)) >> 2;
            v12 = (v7[9] - (int)(uintptr_t)(dest)) >> 2;
            if ( v24 > v12 )
            {
              if ( v24 != 0 )
              {
                if ( v24 > 0x3FFFFFFF )
                  goto LABEL_99;
                v81 = v8;
                v112 = 4 * v24;
                v96 = (char *)operator new(4 * v24);
                memmove(v96, src, 4 * v24);
                v47 = v96;
                v8 = v81;
              }
              else
              {
                v112 = 0;
                v47 = nullptr;
              }
              v133 = v8 + 7;
              v48 = (void *)v7[7];
              v49 = (char *)((char *)v7 - (char *)v8);
              if ( v48 != nullptr )
              {
                v82 = v8;
                v97 = v47;
                operator delete(v48);
                v47 = v97;
                v8 = v82;
              }
              *(uint32_t *)&v49[(uint32_t)(uintptr_t)(v8) + 28] = (uint32_t)(uintptr_t)(v47);
              dest = &v47[v112];
              *(int *)((char *)v133 + (uint32_t)(uintptr_t)(v49) + 8) = (int)(uintptr_t)(&v47[v112]);
              v9 = v133;
            }
            else
            {
              v110 = (uint8_t *)v7[8];
              v25 = (v110 - (uint8_t *)(dest)) >> 2;
              if ( v24 <= v25 )
              {
                if ( v24 != 0 )
                {
                  v87 = v8;
                  n = 4 * v24;
                  memmove(dest, src, n);
                  v8 = v87;
                  dest = (char *)(n + v7[7]);
                  v9 = v87 + 7;
                }
                else
                {
                  v9 = v8 + 7;
                }
              }
              else
              {
                v116 = &src[4 * v25];
                v132 = v8 + 7;
                if ( v25 != 0 )
                {
                  v75 = v8;
                  memmove(dest, src, 4 * v25);
                  v8 = v75;
                  dest = (char *)v7[7];
                  v110 = *(uint8_t **)((char *)v132 + ((char *)v7 - (char *)v75) + 4);
                  v116 = (char *)(*(uint32_t *)((char *)v124 + ((char *)v7 - (char *)v75) + 28)
                                + ((v110 - (uint8_t *)(dest)) & 0xFFFFFFFC));
                  v103 = *(uint8_t **)((char *)v124 + ((char *)v7 - (char *)v75) + 32);
                }
                if ( (v103 - (uint8_t *)(v116)) >> 2 != 0 )
                {
                  v90 = v8;
                  memmove(v110, v116, 4 * ((v103 - (uint8_t *)(v116)) >> 2));
                  v8 = v90;
                  dest = (char *)(v7[7] + 4 * v24);
                }
                else
                {
                  dest += 4 * v24;
                }
                v9 = v132;
              }
            }
            v10 = (char *)v7 - (char *)v8;
            *(int *)((char *)v9 + ((char *)v7 - (char *)v8) + 4) = (int)(uintptr_t)(dest);
            v108 = (uint8_t *)v7[26];
            v101 = (uint8_t *)v7[27];
            v134 = (uint8_t *)v7[10];
            v11 = (v101 - v108) >> 2;
            v12 = (v7[12] - (int)(uintptr_t)(v134)) >> 2;
            if ( v11 > v12 )
            {
              if ( v11 != 0 )
              {
                if ( v11 > 0x3FFFFFFF )
LABEL_99:
                  sub_18FFEE0(v12, v8);
                v85 = v8;
                v118 = 4 * v11;
                v98 = (char *)operator new(4 * v11);
                memmove(v98, v108, 4 * v11);
                v52 = v98;
                v8 = v85;
              }
              else
              {
                v118 = 0;
                v52 = nullptr;
              }
              v53 = *(void **)((char *)v8 + v10 + 40);
              v131 = (char *)(v8 + 10);
              if ( v53 != nullptr )
              {
                v86 = v8;
                v99 = v52;
                operator delete(v53);
                v52 = v99;
                v8 = v86;
              }
              *(int *)((char *)v8 + v10 + 40) = (int)(uintptr_t)(v52);
              v14 = &v52[v118];
              v15 = v131;
              *(uint32_t *)&v131[v10 + 8] = (uint32_t)(uintptr_t)(&v52[v118]);
            }
            else
            {
              v114 = (uint8_t *)v7[11];
              v13 = (v114 - v134) >> 2;
              if ( v11 > v13 )
              {
                v121 = (char *)(&v108[4 * v13]);
                v129 = (char *)(v8 + 10);
                if ( v13 != 0 )
                {
                  v80 = v8;
                  memmove(v134, v108, 4 * v13);
                  v134 = (uint8_t *)v7[10];
                  v8 = v80;
                  v114 = *(uint8_t **)&v129[v10 + 4];
                  v121 = (char *)(*(uint32_t *)((char *)v124 + v10 + 40) + ((v114 - v134) & 0xFFFFFFFC));
                  v101 = *(uint8_t **)((char *)v124 + v10 + 44);
                }
                if ( (v101 - (uint8_t *)(v121)) >> 2 != 0 )
                {
                  v88 = v8;
                  memmove(v114, v121, 4 * ((v101 - (uint8_t *)(v121)) >> 2));
                  v8 = v88;
                  v55 = 4 * v11;
                  v15 = v129;
                  v14 = (char *)(*(int *)((char *)v88 + v10 + 40) + v55);
                }
                else
                {
                  v14 = (char *)(&v134[4 * v11]);
                  v15 = v129;
                }
              }
              else if ( v11 != 0 )
              {
                v56 = 4 * v11;
                v89 = v8;
                memmove(v134, v108, v56);
                v8 = v89;
                v14 = (char *)(v56 + *(int *)((char *)v89 + v10 + 40));
                v15 = (char *)(v89 + 10);
              }
              else
              {
                v14 = (char *)v7[10];
                v15 = (char *)(v8 + 10);
              }
            }
            *(uint32_t *)&v15[v10 + 4] = (uint32_t)(uintptr_t)(v14);
            v102 = (char *)v7[29];
            v109 = v7[30];
            v135 = (uint8_t *)v7[13];
            v16 = (int)(v109 - (uint32_t)(uintptr_t)(v102)) >> 2;
            v12 = (v7[15] - (int)(uintptr_t)(v135)) >> 2;
            if ( v16 <= v12 )
              break;
            if ( v16 != 0 )
            {
              if ( v16 > 0x3FFFFFFF )
                goto LABEL_99;
              v83 = v8;
              v113 = 4 * v16;
              v50 = (char *)operator new(4 * v16);
              memmove(v50, v102, 4 * v16);
              v8 = v83;
            }
            else
            {
              v113 = 0;
              v50 = nullptr;
            }
            v51 = *(void **)((char *)v8 + v10 + 52);
            v130 = (char *)(v8 + 13);
            if ( v51 != nullptr )
            {
              v84 = v8;
              operator delete(v51);
              v8 = v84;
            }
            v18 = &v50[v113];
            *(int *)((char *)v8 + v10 + 52) = (int)(uintptr_t)(v50);
            v19 = v130;
            *(uint32_t *)&v130[v10 + 8] = (uint32_t)(uintptr_t)(&v50[v113]);
LABEL_15:
            v20 = v106-- == 1;
            *(uint32_t *)&v19[v10 + 4] = (uint32_t)(uintptr_t)(v18);
            v7 = v122;
            if ( v20 )
              goto LABEL_27;
          }
          v115 = (uint8_t *)v7[14];
          v17 = (v115 - v135) >> 2;
          if ( v16 <= v17 )
          {
            if ( v16 != 0 )
            {
              v58 = 4 * v16;
              v93 = v8;
              memmove(v135, v102, v58);
              v8 = v93;
              v18 = (char *)(v58 + *(int *)((char *)v93 + v10 + 52));
              v19 = (char *)(v93 + 13);
            }
            else
            {
              v18 = (char *)v7[13];
              v19 = (char *)(v8 + 13);
            }
            goto LABEL_15;
          }
          v127 = (char *)(v8 + 13);
          v119 = &v102[4 * v17];
          if ( v17 != 0 )
          {
            v92 = v8;
            memmove(v135, v102, 4 * v17);
            v8 = v92;
            v135 = (uint8_t *)v7[13];
            v115 = *(uint8_t **)&v127[v10 + 4];
            v119 = (char *)(*(uint32_t *)((char *)v124 + v10 + 52) + ((v115 - v135) & 0xFFFFFFFC));
            v109 = *(uint32_t *)((char *)v124 + v10 + 56);
          }
          if ( (int)(v109 - (uint32_t)(uintptr_t)(v119)) >> 2 != 0 )
          {
            v91 = v8;
            memmove(v115, v119, 4 * ((int)(v109 - (uint32_t)(uintptr_t)(v119)) >> 2));
            v8 = v91;
            v57 = 4 * v16;
            v19 = v127;
            v18 = (char *)(*(int *)((char *)v91 + v10 + 52) + v57);
            goto LABEL_15;
          }
          v20 = v106-- == 1;
          v7 += 16;
          *(uint32_t *)&v127[v10 + 4] = (uint32_t)(uintptr_t)(&v135[4 * v16]);
          if ( v20 )
          {
LABEL_27:
            v6 = (char *)*(self + 2);
            break;
          }
        }
      }
    }
    *(self + 2) = (pthread_mutex_t *)(v6 - 64);
    if ( *((uint32_t *)v6 - 3) != 0 )
      operator delete(*((void **)v6 - 3));
    if ( *((uint32_t *)v6 - 6) != 0 )
      operator delete(*((void **)v6 - 6));
    if ( *((uint32_t *)v6 - 9) != 0 )
      operator delete(*((void **)v6 - 9));
    glitch::collada::ps::CParticleSystemBatchingManager::unmapAllStreams(
      (glitch::collada::ps::CParticleSystemBatchingManager::Self *)self,
      a3);
    v123 = (unsigned int)(uintptr_t)(*(self + 4)) + 136 * a3;
    v26 = (int)(uintptr_t)(*(self + 5));
    if ( v26 != v123 + 136 )
    {
      v111 = -252645135 * ((int)(v26 - (v123 + 136)) >> 3);
      if ( v111 > 0 )
      {
        v27 = (unsigned int)(uintptr_t)(*(self + 4)) + 136 * a3;
        v117 = v123 + 4;
        v136 = (char *)(v123 + 144);
        v120 = (char *)(v123 + 8);
        v104 = (char *)(v123 + 12);
        v107 = v123 + 36;
        v28 = v123 + 148;
        v29 = v123 + 172;
        v125 = v123 + 60;
        v128 = (char *)(v123 + 64);
        do
        {
          v30 = v27 - v123;
          v31 = *(volatile int32_t **)(v27 + 140);
          if ( v31 != nullptr )
          {
            v94 = *(volatile int32_t **)(v27 + 140);
            sub_8B1B00(v94);
            v31 = v94;
            v30 = v27 - v123;
          }
          v59 = *(glitch::video::CVertexStreams::Self **)(v30 + v117);
          *(uint32_t *)(v30 + v117) = (uint32_t)(uintptr_t)(v31);
          if ( v59 != nullptr && __sync_fetch_and_add((volatile int32_t *)v59, 0xFFFFFFFF) == 1 )
          {
            v65 = v30;
            glitch::video::CVertexStreams::Destroy(v59);
            gll_operator_delete_arr((int)(uintptr_t)(v59));
            v30 = v65;
          }
          v32 = *(volatile int32_t **)&v136[v30];
          if ( v32 != nullptr )
          {
            v66 = v30;
            v95 = *(volatile int32_t **)&v136[v30];
            sub_8B1B00(v95);
            v32 = v95;
            v30 = v66;
          }
          v60 = *(glitch::video::CVertexStreams::Self **)&v120[v30];
          *(uint32_t *)&v120[v30] = (uint32_t)(uintptr_t)(v32);
          if ( v60 != nullptr && __sync_fetch_and_add((volatile int32_t *)v60, 0xFFFFFFFF) == 1 )
          {
            v67 = v30;
            glitch::video::CVertexStreams::Destroy(v60);
            gll_operator_delete_arr((int)(uintptr_t)(v60));
            v30 = v67;
          }
          v33 = *(uint32_t *)(v30 + v28);
          if ( v33 != 0 )
          {
            v68 = v30;
            v76 = *(uint32_t *)(v30 + v28);
            sub_8B1B00((volatile int32_t *)(v33 + 4));
            v33 = v76;
            v30 = v68;
          }
          v61 = *(glitch::video::CVertexStreams::Self **)&v104[v30];
          v34 = v123 + 12;
          *(uint32_t *)&v104[v30] = v33;
          if ( v61 != nullptr )
          {
            v69 = v30;
            sub_5459C0((volatile int32_t *)v61);
            v30 = v69;
            v34 = v123 + 12;
          }
          *(uint32_t *)(v30 + v34 + 4) = *(uint32_t *)(v30 + v28 + 4);
          *(uint32_t *)(v30 + v34 + 8) = *(uint32_t *)(v30 + v28 + 8);
          *(uint32_t *)(v30 + v34 + 12) = *(uint32_t *)(v30 + v28 + 12);
          *(uint32_t *)(v30 + v34 + 16) = *(uint32_t *)(v30 + v28 + 16);
          *(uint16_t *)(v30 + v34 + 20) = *(uint16_t *)(v30 + v28 + 20);
          *(uint16_t *)(v30 + v34 + 22) = *(uint16_t *)(v30 + v28 + 22);
          v35 = *(uint32_t *)(v30 + v29);
          if ( v35 != 0 )
          {
            v70 = v30;
            v77 = *(uint32_t *)(v30 + v29);
            sub_8B1B00((volatile int32_t *)(v35 + 4));
            v35 = v77;
            v30 = v70;
          }
          v62 = *(glitch::video::CVertexStreams::Self **)(v30 + v107);
          v36 = v123 + 36;
          *(uint32_t *)(v30 + v107) = v35;
          if ( v62 != nullptr )
          {
            v71 = v30;
            sub_5459C0((volatile int32_t *)v62);
            v30 = v71;
            v36 = v123 + 36;
          }
          *(uint32_t *)(v30 + v36 + 4) = *(uint32_t *)(v30 + v29 + 4);
          *(uint32_t *)(v30 + v36 + 8) = *(uint32_t *)(v30 + v29 + 8);
          *(uint32_t *)(v30 + v36 + 12) = *(uint32_t *)(v30 + v29 + 12);
          *(uint32_t *)(v30 + v36 + 16) = *(uint32_t *)(v30 + v29 + 16);
          *(uint16_t *)(v30 + v36 + 20) = *(uint16_t *)(v30 + v29 + 20);
          *(uint16_t *)(v30 + v36 + 22) = *(uint16_t *)(v30 + v29 + 22);
          v37 = *(uint32_t *)(v30 + v123 + 196);
          if ( v37 != 0 )
          {
            v72 = v30;
            v78 = *(uint32_t *)(v30 + v123 + 196);
            sub_8B1B00((volatile int32_t *)(v37 + 4));
            v37 = v78;
            v30 = v72;
          }
          v63 = *(glitch::video::CVertexStreams::Self **)(v30 + v125);
          *(uint32_t *)(v30 + v125) = v37;
          if ( v63 != nullptr )
          {
            v73 = v30;
            sub_5459C0((volatile int32_t *)v63);
            v30 = v73;
          }
          v38 = *(uint32_t *)(v30 + v123 + 200);
          if ( v38 != 0 )
          {
            v74 = v30;
            v79 = *(uint32_t *)(v30 + v123 + 200);
            sub_8B1B00((volatile int32_t *)(v38 + 4));
            v38 = v79;
            v30 = v74;
          }
          v64 = *(glitch::video::CVertexStreams::Self **)&v128[v30];
          *(uint32_t *)&v128[v30] = v38;
          if ( v64 != nullptr )
            sub_5459C0((volatile int32_t *)v64);
          v39 = *(uint32_t *)(v27 + 212);
          *(uint16_t *)(v27 + 68) = *(uint16_t *)(v27 + 204);
          *(uint32_t *)(v27 + 72) = *(uint32_t *)(v27 + 208);
          *(uint32_t *)(v27 + 80) = *(uint32_t *)(v27 + 216);
          *(uint32_t *)(v27 + 88) = *(uint32_t *)(v27 + 224);
          *(uint32_t *)(v27 + 96) = *(uint32_t *)(v27 + 232);
          *(uint32_t *)(v27 + 104) = *(uint32_t *)(v27 + 240);
          *(uint32_t *)(v27 + 112) = *(uint32_t *)(v27 + 248);
          v40 = *(uint32_t *)(v27 + 252);
          *(uint32_t *)(v27 + 76) = v39;
          *(uint32_t *)(v27 + 116) = v40;
          v41 = *(uint32_t *)(v27 + 256);
          *(uint32_t *)(v27 + 84) = *(uint32_t *)(v27 + 220);
          *(uint32_t *)(v27 + 120) = v41;
          v42 = *(uint32_t *)(v27 + 260);
          *(uint32_t *)(v27 + 92) = *(uint32_t *)(v27 + 228);
          *(uint32_t *)(v27 + 124) = v42;
          v43 = *(uint32_t *)(v27 + 264);
          *(uint32_t *)(v27 + 100) = *(uint32_t *)(v27 + 236);
          *(uint32_t *)(v27 + 128) = v43;
          v44 = *(uint32_t *)(v27 + 268);
          *(uint32_t *)(v27 + 108) = *(uint32_t *)(v27 + 244);
          *(uint32_t *)(v27 + 132) = v44;
          v27 += 136;
          --v111;
        }
        while ( v111 != 0 );
        v26 = (int)(uintptr_t)(*(self + 5));
      }
    }
    v45 = 1;
    *(self + 5) = (pthread_mutex_t *)(v26 - 136);
    (**(void (***)(int))(v26 - 136))(v26 - 136);
  }
  glf::Mutex::Unlock(self + 7);
  return v45;
}


// ============================================================================
// Address:   0xd13c90 (size: 30 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager20getPositionStreamMapEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getPositionStreamMap(unsigned int)const
// ============================================================================
int glitch::collada::ps::CParticleSystemBatchingManager::getPositionStreamMap(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 4 * *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 132) + 72);
}


// ============================================================================
// Address:   0xd13cb0 (size: 30 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager20getTexCoordStreamMapEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getTexCoordStreamMap(unsigned int)const
// ============================================================================
int glitch::collada::ps::CParticleSystemBatchingManager::getTexCoordStreamMap(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 4 * *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 132) + 80);
}


// ============================================================================
// Address:   0xd13cd0 (size: 30 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager17getColorStreamMapEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getColorStreamMap(unsigned int)const
// ============================================================================
int glitch::collada::ps::CParticleSystemBatchingManager::getColorStreamMap(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 4 * *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 132) + 88);
}


// ============================================================================
// Address:   0xd13cf0 (size: 30 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager18getNormalStreamMapEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getNormalStreamMap(unsigned int)const
// ============================================================================
int glitch::collada::ps::CParticleSystemBatchingManager::getNormalStreamMap(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 4 * *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 132) + 96);
}


// ============================================================================
// Address:   0xd13d10 (size: 30 bytes)
// Symbol:    _ZNK6glitch7collada2ps30CParticleSystemBatchingManager17getIndexStreamMapEj
// Demangled: glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreamMap(unsigned int)const
// ============================================================================
int glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreamMap(
        glitch::collada::ps::CParticleSystemBatchingManager::Self *self,
        unsigned int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 4 * *(uint32_t *)(*((uint32_t *)self + 4) + 136 * a2 + 132) + 104);
}


// ============================================================================
// Address:   0xd13d30 (size: 486 bytes)
// Symbol:    _ZN6glitch7collada2ps28CParticleSystemGeometryBaker11getSpinningEPNS1_15CParticleSystemEPKNS1_9SParticleERNS_4core8CMatrix4IfEE
// Demangled: glitch::collada::ps::CParticleSystemGeometryBaker::getSpinning(glitch::collada::ps::CParticleSystem::Self *,glitch::collada::ps::SParticle const*,glitch::core::CMatrix4<float> &)
// ============================================================================
int *glitch::collada::ps::CParticleSystemGeometryBaker::getSpinning(int a1, int a2, float *a3, int a4)
{
  float v4; // xmm1_4
  int *result;
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm1_4
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v4 = a3[30];
  if ( v4 != 0.0 )
  {
    v15 = sinf(v4 * 0.5);
    v17 = v15;
    v16 = cosf(v4 * 0.5);
    v6 = (float)-a3[31] * v17;
    v7 = (float)-a3[33] * v17;
    v8 = (float)-a3[32] * v17;
    v9 = (float)(v8 * v6) + (float)(v8 * v6);
    v20 = (float)(v6 * v6) + (float)(v6 * v6);
    v10 = (float)(v7 * v7) + (float)(v7 * v7);
    v19 = v6 * (float)(v16 + v16);
    v14 = (float)(v7 * v6) + (float)(v7 * v6);
    v11 = (float)(v7 * v8) + (float)(v7 * v8);
    v18 = (float)(v16 + v16) * v8;
    v12 = (float)(v16 + v16) * v7;
    v13 = -(float)((float)(v8 * v8) + (float)(v8 * v8));
    *(float *)a4 = (float)(v13 - v10) + 1.0;
    *(float *)(a4 + 4) = v12 + v9;
    *(float *)(a4 + 8) = v14 - v18;
    *(uint32_t *)(a4 + 12) = 0;
    *(float *)(a4 + 16) = v9 - v12;
    *(float *)(a4 + 20) = 1.0 - (float)(v10 + v20);
    *(float *)(a4 + 24) = v19 + v11;
    *(uint32_t *)(a4 + 28) = 0;
    *(uint32_t *)(a4 + 44) = 0;
    *(uint32_t *)(a4 + 48) = 0;
    *(float *)(a4 + 32) = v14 + v18;
    *(float *)(a4 + 36) = v11 - v19;
    *(uint32_t *)(a4 + 52) = 0;
    *(float *)(a4 + 40) = (float)(v13 - v20) + 1.0;
    *(uint32_t *)(a4 + 56) = 0;
    *(uint32_t *)(a4 + 60) = 1065353216;
    return (int *)(&dword_1C7C1B0);
  }
  return result;
}


// ============================================================================
// Address:   0xd13f20 (size: 520 bytes)
// Symbol:    _ZN6glitch7collada2ps28CParticleSystemGeometryBaker9mapSourceEjPKNS_5video14CVertexStreamsERNS3_13SVertexStream10SMapBufferIKNS_4core8vector3dIfEEEESE_RNS8_IKNS9_8vector2dIfEEEERNS8_IKNS3_6SColorEEE
// Demangled: glitch::collada::ps::CParticleSystemGeometryBaker::mapSource(unsigned int,glitch::video::CVertexStreams const*,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor const> &)
// ============================================================================
uint32_t *glitch::collada::ps::CParticleSystemGeometryBaker::mapSource(
        int a1,
        int a2,
        int a3,
        int a4,
        uint32_t *a5,
        int a6,
        uint32_t *a7)
{
  int v7;
  uint32_t *result;
  int v9;
  int v10;
  int Stream;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v7 = a3 + 20;
  v20 = a3 + 20;
  if ( *(uint32_t *)(a4 + 4) != 0 )
  {
    glitch::video::IBuffer::unmap(**(glitch::video::IBuffer::Self ***)a4);
    *(uint32_t *)(a4 + 4) = 0;
    v7 = a3 + 20;
  }
  *(uint32_t *)a4 = v7;
  result = (uint32_t *)glitch::video::IBuffer::mapInternal(
                       *(glitch::video::IBuffer::Self **)(a3 + 20),
                       0,
                       0,
                       *(uint32_t *)(*(uint32_t *)(a3 + 20) + 20),
                       0);
  v9 = 0;
  if ( result != nullptr )
    v9 = (int)(uintptr_t)(result) + *(uint32_t *)(a3 + 24);
  *(uint32_t *)(a4 + 4) = v9;
  if ( (a2 & 0x10000) != 0 )
  {
    v16 = a5;
    v17 = v20 + 16 * (uint8_t)(*(uint8_t *)(a3 + 12) + 1);
    if ( a5[1] != 0 )
    {
      glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)*a5);
      v16 = a5;
      a5[1] = 0;
    }
    *v16 = v17;
    v18 = glitch::video::IBuffer::mapInternal(
            *(glitch::video::IBuffer::Self **)v17,
            0,
            0,
            *(uint32_t *)(*(uint32_t *)v17 + 20),
            0);
    v19 = 0;
    if ( v18 != 0 )
      v19 = v18 + *(uint32_t *)(v17 + 4);
    result = a5;
    a5[1] = v19;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( *(uint32_t *)(a6 + 4) != 0 )
    {
      glitch::video::IBuffer::unmap(**(glitch::video::IBuffer::Self ***)a6);
      *(uint32_t *)(a6 + 4) = 0;
    }
    *(uint32_t *)a6 = a3 + 36;
    result = (uint32_t *)glitch::video::IBuffer::mapInternal(
                         *(glitch::video::IBuffer::Self **)(a3 + 36),
                         0,
                         0,
                         *(uint32_t *)(*(uint32_t *)(a3 + 36) + 20),
                         0);
    v10 = 0;
    if ( result != nullptr )
      v10 = (int)(uintptr_t)(result) + *(uint32_t *)(a3 + 40);
    *(uint32_t *)(a6 + 4) = v10;
  }
  if ( (a2 & 0x20000) != 0 )
  {
    Stream = glitch::video::CVertexStreams::getStream(a3, 17, v20, *(uint32_t *)(a3 + 16));
    v12 = a7;
    v13 = Stream;
    if ( a7[1] != 0 )
    {
      glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)*a7);
      v12 = a7;
      a7[1] = 0;
    }
    *v12 = v13;
    v14 = glitch::video::IBuffer::mapInternal(
            *(glitch::video::IBuffer::Self **)v13,
            0,
            0,
            *(uint32_t *)(*(uint32_t *)v13 + 20),
            0);
    v15 = 0;
    if ( v14 != 0 )
      v15 = v14 + *(uint32_t *)(v13 + 4);
    a7[1] = v15;
    return a7;
  }
  return result;
}


// ============================================================================
// Address:   0xd14130 (size: 191 bytes)
// Symbol:    _ZN6glitch7collada2ps28CParticleSystemGeometryBaker20resetSourceIteratorsEjRNS_5video13SVertexStream10SMapBufferIKNS_4core8vector3dIfEEEESB_RNS5_IKNS6_8vector2dIfEEEERNS5_IKNS3_6SColorEEERNS4_13SAccessorBaseIS9_E9SIteratorESO_RNSL_ISE_E9SIteratorERNSL_ISI_E9SIteratorE
// Demangled: glitch::collada::ps::CParticleSystemGeometryBaker::resetSourceIterators(unsigned int,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float> const> &,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor const> &,glitch::video::SVertexStream::SAccessorBase<glitch::core::vector3d<float> const>::SIterator &,glitch::video::SVertexStream::SAccessorBase<glitch::core::vector3d<float> const>::SIterator &,glitch::video::SVertexStream::SAccessorBase<glitch::core::vector2d<float> const>::SIterator &,glitch::video::SVertexStream::SAccessorBase<glitch::video::SColor const>::SIterator &)
// ============================================================================
int glitch::collada::ps::CParticleSystemGeometryBaker::resetSourceIterators(
        int a1,
        int a2,
        uint32_t *a3,
        uint32_t *a4,
        uint32_t *a5,
        uint32_t *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int result;
  int16_t v11;
  int16_t v12;
  int16_t v13;

  result = a2;
  v11 = *(uint16_t *)(*a3 + 14);
  *(uint32_t *)a7 = a3[1];
  *(uint16_t *)(a7 + 4) = v11;
  if ( (a2 & 0x10000) != 0 )
  {
    v12 = *(uint16_t *)(*a4 + 14);
    *(uint32_t *)a8 = a4[1];
    *(uint16_t *)(a8 + 4) = v12;
  }
  if ( (a2 & 2) != 0 )
  {
    v13 = *(uint16_t *)(*a5 + 14);
    *(uint32_t *)a9 = a5[1];
    *(uint16_t *)(a9 + 4) = v13;
  }
  if ( (a2 & 0x20000) != 0 )
  {
    result = *(uint16_t *)(*a6 + 14);
    *(uint32_t *)a10 = a6[1];
    *(uint16_t *)(a10 + 4) = result;
  }
  return result;
}


// ============================================================================
// Address:   0xd141f0 (size: 92 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemStripBaker4bakeEPNS1_15CParticleSystemERNS_5video13SVertexStream10SMapBufferINS_4core8vector3dIfEEEERNS7_INS8_8vector2dIfEEEERNS7_INS5_6SColorEEE
// Demangled: glitch::collada::ps::CParticleSystemStripBaker::bake(glitch::collada::ps::CParticleSystem::Self *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float>> &,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor> &)
// ============================================================================
int glitch::collada::ps::CParticleSystemStripBaker::bake()
{
  if ( byte_20DFBF4 == 0 )
  {
    glf::Console::Println(
      (glf::Console::Self *)"%s(%d): %s - %s",
      "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\lib\\glitch\\projects\\\\..\\source\\glitch"
      "\\collada\\particlesystem\\bakers\\CColladaParticleSystemStripBaker.cpp",
      120,
      "bake",
      "CParticleSystemStripBaker::bake");
    byte_20DFBF4 = 1;
  }
  return 0;
}


// ============================================================================
// Address:   0xd14250 (size: 70 bytes)
// Symbol:    _ZN6glitch7collada2ps20IParticleSystemBakerC2EPNS1_15CParticleSystemE
// Demangled: glitch::collada::ps::IParticleSystemBaker::IParticleSystemBaker(glitch::collada::ps::CParticleSystem::Self *)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps20IParticleSystemBakerC1EPNS1_15CParticleSystemE'
glitch::collada::ps::IParticleSystemBaker::Self *glitch::collada::ps::IParticleSystemBaker::Construct(
        glitch::collada::ps::IParticleSystemBaker::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070408);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint8_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 1065353216;
  *((uint32_t *)self + 6) = 1065353216;
  *((uint32_t *)self + 7) = 1065353216;
  *((uint32_t *)self + 8) = 1;
  *((uint32_t *)self + 9) = 0;
  return self;
}


// ============================================================================
// Address:   0xd142a0 (size: 81 bytes)
// Symbol:    _ZN6glitch7collada2ps28CParticleSystemGeometryBakerC2EPNS1_15CParticleSystemE
// Demangled: glitch::collada::ps::CParticleSystemGeometryBaker::CParticleSystemGeometryBaker(glitch::collada::ps::CParticleSystem::Self *)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps28CParticleSystemGeometryBakerC1EPNS1_15CParticleSystemE'
void (**glitch::collada::ps::CParticleSystemGeometryBaker::CParticleSystemGeometryBaker(
        glitch::collada::ps::CParticleSystemGeometryBaker::Self *self))(glitch::collada::ps::CParticleSystemGeometryBaker::Self *__hidden self)
{
  glitch::collada::ps::IParticleSystemBaker::Construct(self);
  *((uint32_t *)self + 10) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070388);
  *((uint32_t *)self + 11) = 0;
  return (void (**)(glitch::collada::ps::CParticleSystemGeometryBaker::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2070388));
}


// ============================================================================
// Address:   0xd14300 (size: 105 bytes)
// Symbol:    _ZN6glitch7collada2ps29CParticleSystemBillboardBakerC2EPNS1_15CParticleSystemEb
// Demangled: glitch::collada::ps::CParticleSystemBillboardBaker::CParticleSystemBillboardBaker(glitch::collada::ps::CParticleSystem::Self *,bool)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps29CParticleSystemBillboardBakerC1EPNS1_15CParticleSystemEb'
glitch::collada::ps::CParticleSystemBillboardBaker::Self *glitch::collada::ps::CParticleSystemBillboardBaker::Construct(
        glitch::collada::ps::CParticleSystemBillboardBaker::Self *self,
        glitch::collada::ps::CParticleSystem::Self *a2,
        bool a3)
{
  glitch::collada::ps::IParticleSystemBaker::Construct(self);
  *((uint32_t *)self + 11) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070348);
  *((uint8_t *)self + 40) = a3;
  *((uint32_t *)self + 12) = a3;
  return (struct glitch::collada::ps::CParticleSystemBillboardBaker::Self *)a3;
}


// ============================================================================
// Address:   0xd14370 (size: 224 bytes)
// Symbol:    _ZN6glitch7collada2ps20IParticleSystemBaker29initVirtualTextureOffsetScaleEPNS1_15CParticleSystemE
// Demangled: glitch::collada::ps::IParticleSystemBaker::initVirtualTextureOffsetScale(glitch::collada::ps::CParticleSystem::Self *)
// ============================================================================
int *glitch::collada::ps::IParticleSystemBaker::initVirtualTextureOffsetScale(
        glitch::collada::ps::IParticleSystemBaker::Self *self,
        glitch::collada::ps::CParticleSystem::Self *a2)
{
  int *result;
  int *v3;
  int v4[4];

  *((uint8_t *)self + 4) = 0;
  result = (int *)(*(int (**)(glitch::collada::ps::CParticleSystem::Self *, int))(*(uint32_t *)a2 + 12))(a2, 83);
  v3 = result;
  if ( result != nullptr )
  {
    result = (int *)glitch::video::CMaterialRenderer::getParameterID(*(uint32_t *)(*result + 4), 2, 0, 0);
    if ( (uint16_t)(uintptr_t)(result) != 0xFFFF )
    {
      v4[0] = 0;
      glitch::video::detail::IMaterialParameters<glitch::video::CMaterial::Self,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial::Self>>::getParameter<boost::intrusive_ptr<glitch::video::ITexture::Self>>(
        *v3,
        (int16_t)(uintptr_t)(result),
        0,
        v4);
      if ( v4[0] != 0 )
      {
        (*(void (**)(int, char *, char *))(*(uint32_t *)v4[0] + 56))(v4[0], (char *)self + 20, (char *)self + 8);
        *((uint8_t *)self + 4) = *(uint32_t *)(v4[0] + 8) != 0;
      }
      return sub_CFE550(v4);
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd14450 (size: 53 bytes)
// Symbol:    _ZN6glitch7collada2ps20IParticleSystemBaker30applyVirtualTextureOffsetScaleERNS_4core8vector2dIfEE
// Demangled: glitch::collada::ps::IParticleSystemBaker::applyVirtualTextureOffsetScale(glitch::core::vector2d<float> &)
// ============================================================================
int64_t glitch::collada::ps::IParticleSystemBaker::applyVirtualTextureOffsetScale(int64_t a1)
{
  int64_t result; // rax
  float v2; // xmm1_4

  result = a1;
  if ( *(uint8_t *)(a1 + 4) != 0 )
  {
    v2 = (float)(*(float *)HIDWORD(a1) * *(float *)(a1 + 20)) + *(float *)(a1 + 8);
    *(float *)(HIDWORD(a1) + 4) = (float)(*(float *)(HIDWORD(a1) + 4) * *(float *)(a1 + 24)) + *(float *)(a1 + 12);
    *(float *)HIDWORD(a1) = v2;
  }
  return result;
}


// ============================================================================
// Address:   0xd14490 (size: 2726 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemStripBaker14bakeContinuousEPNS1_15CParticleSystemERNS_5video13SVertexStream10SMapBufferINS_4core8vector3dIfEEEERNS7_INS8_8vector2dIfEEEERNS7_INS5_6SColorEEE
// Demangled: glitch::collada::ps::CParticleSystemStripBaker::bakeContinuous(glitch::collada::ps::CParticleSystem::Self *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> &,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float>> &,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor> &)
// ============================================================================
int glitch::collada::ps::CParticleSystemStripBaker::bakeContinuous(
        unsigned int a1,
        int *a2,
        int *a3,
        int *a4,
        uint32_t *a5)
{
  uint32_t *v5;
  float *v6;
  int v7;
  float *v8;
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11;
  int v12;
  float v13; // xmm4_4
  int v14;
  float v15; // xmm4_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float **v19;
  float *v20;
  int v21;
  uint32_t *v22;
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float *v31;
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  int v37;
  float v38; // xmm7_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm6_4
  float *v44;
  float v46; // xmm4_4
  float v47; // xmm7_4
  float v48; // xmm7_4
  float v49; // xmm4_4
  float v50; // xmm4_4
  float v51; // xmm5_4
  float v52; // xmm6_4
  float v53; // xmm7_4
  float v54; // xmm6_4
  float v55; // xmm0_4
  float v56; // xmm6_4
  float v57; // xmm4_4
  typedef uint32_t *_g4_t_v58;
  typedef float _g4_t_v59;
  typedef float *_g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef char _g4_t_v64;
  typedef float *_g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef int _g4_t_v82;
  typedef char _g4_t_v83;
  typedef int _g4_t_v84;
  typedef float _g4_t_v85;
  typedef int _g4_t_v86;
  typedef float *_g4_t_v87;
  typedef float **_g4_t_v88;
  typedef float **_g4_t_v89;
  typedef uint32_t *_g4_t_v90;
  typedef float _g4_t_v91;
  typedef float **_g4_t_v92;
  typedef float *_g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100[16];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v58)) > _g4_s0 ? (8u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v59)) > _g4_s1 ? (12u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v60)) > _g4_s2 ? (32u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v61)) > _g4_s3 ? (36u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v62)) > _g4_s4 ? (40u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v63)) > _g4_s5 ? (44u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (51u + sizeof(_g4_t_v64)) > _g4_s6 ? (51u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v65)) > _g4_s7 ? (52u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v66)) > _g4_s8 ? (56u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v67)) > _g4_s9 ? (60u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v68)) > _g4_s10 ? (64u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v69)) > _g4_s11 ? (68u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v70)) > _g4_s12 ? (72u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v71)) > _g4_s13 ? (76u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v72)) > _g4_s14 ? (80u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v73)) > _g4_s15 ? (84u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v74)) > _g4_s16 ? (84u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v75)) > _g4_s17 ? (88u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v76)) > _g4_s18 ? (88u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v77)) > _g4_s19 ? (92u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v78)) > _g4_s20 ? (96u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v79)) > _g4_s21 ? (100u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v80)) > _g4_s22 ? (100u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v81)) > _g4_s23 ? (104u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v82)) > _g4_s24 ? (108u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v83)) > _g4_s25 ? (108u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v84)) > _g4_s26 ? (112u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v85)) > _g4_s27 ? (116u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v86)) > _g4_s28 ? (120u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v87)) > _g4_s29 ? (124u + sizeof(_g4_t_v87)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v88)) > _g4_s30 ? (128u + sizeof(_g4_t_v88)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v89)) > _g4_s31 ? (132u + sizeof(_g4_t_v89)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v90)) > _g4_s32 ? (136u + sizeof(_g4_t_v90)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v91)) > _g4_s33 ? (136u + sizeof(_g4_t_v91)) : _g4_s33,
    _g4_s35 = (140u + sizeof(_g4_t_v92)) > _g4_s34 ? (140u + sizeof(_g4_t_v92)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v93)) > _g4_s35 ? (140u + sizeof(_g4_t_v93)) : _g4_s35,
    _g4_s37 = (140u + sizeof(_g4_t_v94)) > _g4_s36 ? (140u + sizeof(_g4_t_v94)) : _g4_s36,
    _g4_s38 = (140u + sizeof(_g4_t_v95)) > _g4_s37 ? (140u + sizeof(_g4_t_v95)) : _g4_s37,
    _g4_s39 = (144u + sizeof(_g4_t_v96)) > _g4_s38 ? (144u + sizeof(_g4_t_v96)) : _g4_s38,
    _g4_s40 = (148u + sizeof(_g4_t_v97)) > _g4_s39 ? (148u + sizeof(_g4_t_v97)) : _g4_s39,
    _g4_s41 = (152u + sizeof(_g4_t_v98)) > _g4_s40 ? (152u + sizeof(_g4_t_v98)) : _g4_s40,
    _g4_s42 = (156u + sizeof(_g4_t_v99)) > _g4_s41 ? (156u + sizeof(_g4_t_v99)) : _g4_s41,
    _g4_s43 = (160u + sizeof(_g4_t_v100)) > _g4_s42 ? (160u + sizeof(_g4_t_v100)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 51u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 80u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 84u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 88u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 88u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 92u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 96u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 100u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 100u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 104u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 108u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 108u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 112u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 116u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 120u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 124u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 128u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 132u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 136u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 136u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 140u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 140u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 140u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 140u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 144u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 148u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 152u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 156u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 160u);

  v86 = 0;
  v82 = *a2;
  v5 = (uint32_t *)((int *)((char *)a2 + *(uint32_t *)(*a2 - 12)));
  v92 = (float **)v5[9];
  v88 = (float **)v5[10];
  if ( (unsigned int)((char *)v88 - (char *)v92) > 7 )
  {
    v6 = (float *)v5[47];
    v65 = (float *)v5[30];
    v7 = *a3;
    v8 = (float *)a3[1];
    v96 = 0.0;
    v9 = v6[10];
    v10 = v6[6];
    v11 = *(uint16_t *)(v7 + 14);
    v97 = 0.0;
    v78 = v11;
    v12 = *a4;
    v13 = v6[2];
    v98 = 0.0;
    v99 = 0.0;
    v87 = (float *)a4[1];
    v77 = *(uint16_t *)(v12 + 14);
    v90 = (uint32_t *)a5[1];
    v68 = v9;
    v84 = *(uint16_t *)(*a5 + 14);
    memset(v100, 0, sizeof(v100));
    v67 = v10;
    v100[0] = 1.0;
    v66 = v13;
    v100[5] = 1.0;
    v100[10] = 1.0;
    v100[15] = 1.0;
    v14 = (int)(uintptr_t)(a2) + *(uint32_t *)(v82 - 12);
    v71 = *(uint32_t *)(v14 + 4);
    v69 = *(float *)(v14 + 8);
    v72 = *(float *)(v14 + 12);
    v15 = *(float *)(v14 + 16);
    v64 = *(uint8_t *)(v14 + 32);
    v70 = v15;
    v16 = (float)((float)(v72 * v72) + (float)(v69 * v69)) + (float)(v15 * v15);
    if ( v16 != 0.0 )
    {
      v17 = 1.0 / fsqrt(v16);
      v18 = (float)((float)((float)(v16 * v17) * v17) + -3.0) * (float)(v17 * -0.5);
      v69 = v69 * v18;
      v72 = v72 * v18;
      v70 = v18 * v15;
    }
    v86 = 0;
    v83 = *((uint8_t *)a2 + 609);
    if ( v92 != v88 )
    {
      v19 = v92 + 1;
      v73 = 0.0;
      v75 = 0.0;
      v79 = 0.0;
      v58 = v90;
      v20 = v8;
      do
      {
        v89 = v19;
        v21 = (int)(uintptr_t)(*(v19 - 1));
        if ( v83 != 0 && *(uint8_t *)(v21 + 43) == 0 )
          goto LABEL_23;
        ++v86;
        *v58 = *(uint32_t *)(v21 + 40);
        v22 = (uint32_t *)((char *)v58 + v84);
        v58 = (uint32_t *)((char *)v58 + v84 + v84);
        *v22 = *(uint32_t *)(v21 + 40);
        if ( v88 == v19 )
          v93 = nullptr;
        else
          v93 = *v19;
        v23 = *(float *)(v21 + 68);
        v24 = *(float *)(v21 + 72);
        v25 = (float)((float)(*(float *)(v21 + 44) * v23) + (float)(*(float *)(v21 + 48) * v24)) + *(float *)(v21 + 52);
        v26 = (float)((float)(v23 * *(float *)(v21 + 56)) + (float)(v24 * *(float *)(v21 + 60))) + *(float *)(v21 + 64);
        v60 = (float *)v21;
        v96 = v25;
        v97 = v26;
        glitch::collada::ps::IParticleSystemBaker::applyVirtualTextureOffsetScale(__SPAIR64__(&v96, a1));
        v27 = v60[19];
        v28 = v60[20];
        v29 = (float)((float)(v60[11] * v27) + (float)(v60[12] * v28)) + v60[13];
        v30 = (float)((float)(v27 * v60[14]) + (float)(v28 * v60[15])) + v60[16];
        v98 = v29;
        v99 = v30;
        glitch::collada::ps::IParticleSystemBaker::applyVirtualTextureOffsetScale(__SPAIR64__(&v98, a1));
        v31 = (float *)((char *)v87 + v77);
        *v87 = v96;
        v32 = v98;
        v87[1] = v97;
        *v31 = v32;
        v31[1] = v99;
        v87 = (float *)((char *)v87 + v77 + v77);
        v33 = *v60;
        v34 = v60[1];
        v35 = v60[2];
        v36 = 0.5 * v60[23];
        if ( v71 > 5 )
          goto LABEL_25;
        v37 = 1 << v71;
        if ( ((1 << v71) & 0x15) != 0 )
          goto LABEL_25;
        if ( (v37 & 0xA) != 0 )
        {
          if ( v64 != 0 )
          {
            v41 = (float)((float)((float)(v72 * v65[4]) + (float)(v69 * *v65)) + (float)(v70 * v65[8])) * v36;
            v42 = (float)((float)((float)(v72 * v65[5]) + (float)(v69 * v65[1])) + (float)(v70 * v65[9])) * v36;
            v43 = (float)((float)((float)(v72 * v65[6]) + (float)(v69 * v65[2])) + (float)(v70 * v65[10])) * v36;
          }
          else
          {
            v41 = v69 * v36;
            v42 = v72 * v36;
            v43 = v70 * v36;
          }
          goto LABEL_22;
        }
        if ( (v37 & 0x20) == 0 )
        {
LABEL_25:
          if ( v93 != nullptr )
          {
            v46 = *v93 - v33;
            v91 = v46;
            v85 = v93[1] - v34;
            v47 = v85;
            v81 = v93[2] - v35;
          }
          else
          {
            v85 = 0.0;
            v91 = 0.0;
            v81 = 0.0;
            v46 = 0.0;
            v47 = 0.0;
          }
          v48 = v47 + v75;
          v49 = v46 + v73;
          v95 = (float)(v66 * v48) - (float)(v67 * v49);
          v50 = (float)(v49 * v68) - (float)(v66 * (float)(v81 + v79));
          v51 = (float)((float)(v81 + v79) * v67) - (float)(v48 * v68);
          v52 = (float)((float)(v50 * v50) + (float)(v51 * v51)) + (float)(v95 * v95);
          if ( v52 != 0.0 )
          {
            v53 = 1.0 / fsqrt(v52);
            v54 = (float)((float)((float)(v52 * v53) * v53) + -3.0) * (float)(v53 * -0.5);
            v51 = v51 * v54;
            v50 = v50 * v54;
            v95 = v54 * v95;
          }
          v41 = v51 * v36;
          v42 = v50 * v36;
          v43 = v95 * v36;
          v55 = v81;
        }
        else
        {
          if ( v93 != nullptr )
          {
            v91 = *v93 - v33;
            v85 = v93[1] - v34;
            v94 = v93[2] - v35;
          }
          else
          {
            v94 = 0.0;
            v85 = 0.0;
            v91 = 0.0;
          }
          if ( v64 != 0 )
          {
            v59 = v91 + v73;
            v38 = v94 + v79;
            v76 = v85 + v75;
            if ( fabs(v94 + v79) >= 0.0001 || fabs(v59) >= 0.0001 )
            {
              v39 = -v59;
              v63 = v38 * v38;
              if ( (float)((float)(v39 * v39) + (float)(v38 * v38)) == 0.0 )
              {
                v74 = -(float)(v76 * v39);
                v80 = v59 * v39;
                v40 = v38;
              }
              else
              {
                v56 = 1.0 / fsqrt((float)(v39 * v39) + (float)(v38 * v38));
                v57 = (float)(-0.5 * v56)
                    * (float)((float)((float)((float)((float)(v39 * v39) + (float)(v38 * v38)) * v56) * v56) + -3.0);
                v39 = v39 * v57;
                v40 = v57 * v38;
                v80 = v59 * v39;
                v63 = (float)(v57 * v38) * v38;
                v74 = -(float)(v76 * v39);
              }
              v62 = v74 * v70;
              v61 = v69 * v39;
            }
            else
            {
              v61 = 0.0;
              v62 = -0.0;
              v80 = 0.0;
              v74 = -0.0;
              v63 = v38;
              v39 = 0.0;
              v40 = 1.0;
            }
            v100[2] = v39;
            v100[1] = 0.0;
            v100[5] = v76;
            v100[4] = v59;
            v100[8] = v74;
            v100[9] = v80 - v63;
            v100[10] = v76 * v40;
            v100[0] = v40;
            v100[6] = v38;
            v41 = (float)((float)((float)(v72 * v59) + v62) + (float)(v69 * v40)) * v36;
            v42 = (float)((float)((float)(v80 - v63) * v70) + (float)(v76 * v72)) * v36;
            v79 = v94;
            v43 = (float)((float)((float)(v72 * v38) + v61) + (float)((float)(v76 * v40) * v70)) * v36;
            v75 = v85;
            v73 = v91;
            goto LABEL_22;
          }
          v41 = v69 * v36;
          v42 = v72 * v36;
          v43 = v70 * v36;
          v55 = v94;
        }
        v79 = v55;
        v75 = v85;
        v73 = v91;
LABEL_22:
        v44 = (float *)((char *)v20 + v78);
        *v20 = v41 + v33;
        v20[1] = v42 + v34;
        v20[2] = v43 + v35;
        v20 = (float *)((char *)v20 + v78 + v78);
        *v44 = v33 - v41;
        v44[1] = v34 - v42;
        v44[2] = v35 - v43;
LABEL_23:
        ++v19;
      }
      while ( v88 != v89 );
    }
  }
  return v86;
}


// ============================================================================
// Address:   0xd14f40 (size: 465 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemStripBaker4bakeEPNS1_15CParticleSystemEPKNS_5scene11CMeshBufferEPNS_5video14CVertexStreamsERKN5boost13intrusive_ptrINS9_9CMaterialEEEjPNS9_13SVertexStream10SMapBufferINS_4core8vector3dIfEEEEPNSJ_INSK_8vector2dIfEEEEPNSJ_INS9_6SColorEEESO_
// Demangled: glitch::collada::ps::CParticleSystemStripBaker::bake(glitch::collada::ps::CParticleSystem::Self *,glitch::scene::CMeshBuffer const*,glitch::video::CVertexStreams *,boost::intrusive_ptr<glitch::video::CMaterial> const&,unsigned int,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector2d<float>> *,glitch::video::SVertexStream::SMapBuffer<glitch::video::SColor> *,glitch::video::SVertexStream::SMapBuffer<glitch::core::vector3d<float>> *)
// ============================================================================


// ============================================================================
// Address:   0xd15120 (size: 14 bytes)
// Symbol:    _ZN6glitch7collada2ps20IParticleSystemBaker20setBufferMappingFlagEj
// Demangled: glitch::collada::ps::IParticleSystemBaker::setBufferMappingFlag(unsigned int)
// ============================================================================
glitch::collada::ps::IParticleSystemBaker::Self *glitch::collada::ps::IParticleSystemBaker::setBufferMappingFlag(
        glitch::collada::ps::IParticleSystemBaker::Self *self,
        unsigned int a2)
{
  *((uint32_t *)self + 8) = a2;
  return self;
}


// ============================================================================
// Address:   0xd15130 (size: 236 bytes)
// Symbol:    _ZNK6glitch7collada2ps20IParticleSystemBaker15fillIndexBufferERKN5boost13intrusive_ptrINS_5video7IBufferEEEjjjjjPt
// Demangled: glitch::collada::ps::IParticleSystemBaker::fillIndexBuffer(boost::intrusive_ptr<glitch::video::IBuffer> const&,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned short *)const
// ============================================================================
uint16_t *glitch::collada::ps::IParticleSystemBaker::fillIndexBuffer(
        int a1,
        glitch::video::IBuffer::Self **a2,
        uint16_t *a3,
        int16_t a4,
        unsigned int a5,
        int16_t a6,
        int a7,
        int a8)
{
  uint16_t *result;
  int v9;
  int v11;
  int j;
  uint16_t *i;
  bool v14;

  result = a3;
  if ( a3 != nullptr )
  {
    v9 = *((uint32_t *)*a2 + 4);
    v14 = v9 == 0;
    result = (uint16_t *)(2 * a7 + a8);
    if ( v9 == 0 )
      result = (uint16_t *)glitch::video::IBuffer::mapInternal(*a2, 1u, 2 * a7, a5 * 2 * (uint32_t)(uintptr_t)(a3), *(uint32_t *)(a1 + 32));
    for ( i = nullptr; i != a3; i = (uint16_t *)((char *)i + 1) )
    {
      v11 = 0;
      for ( j = 0; a5 > (uint16_t)j; v11 = (uint16_t)j )
      {
        ++j;
        *result++ = a6 + *(uint16_t *)(*(uint32_t *)(a1 + 36) + 2 * v11);
      }
      a6 += a4;
    }
    if ( v14 )
      return (uint16_t *)glitch::video::IBuffer::unmap(*a2);
  }
  return result;
}


// ============================================================================
// Address:   0xd15220 (size: 22 bytes)
// Symbol:    _ZN6glitch7collada2ps20IParticleSystemBaker24getStaticIndexBufferLockEv
// Demangled: glitch::collada::ps::IParticleSystemBaker::getStaticIndexBufferLock(void)
// ============================================================================
void *glitch::collada::ps::IParticleSystemBaker::getStaticIndexBufferLock()
{
  return &glitch::collada::ps::IParticleSystemBaker::StaticIndexBufferLock;
}


// ============================================================================
// Address:   0xd15240 (size: 256 bytes)
// Symbol:    _ZN6glitch7collada2ps10CDeflectorC2ERNS2_11SParametersE
// Demangled: glitch::collada::ps::CDeflector::CDeflector(glitch::collada::ps::CDeflector::SParameters &)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps10CDeflectorC1ERNS2_11SParametersE'
int glitch::collada::ps::CDeflector::Construct(int a1, int a2)
{
  unsigned int v2;
  uint16_t *v3;
  uint16_t *v4;
  uint32_t **v5;
  uint32_t *v6;
  int result;

  v2 = 64;
  v3 = (uint16_t *)(a1 + 4);
  *(uint32_t *)a1 = a2;
  if ( ((a1 + 4) & 1) != 0 )
  {
    v3 = (uint16_t *)(a1 + 5);
    *(uint8_t *)(a1 + 4) = 0;
    LOWORD(v2) = 63;
    if ( ((a1 + 5) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v3) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v3 = 0;
  v2 -= 2;
  ++v3;
LABEL_3:
  memset(v3, 0, 4 * (v2 >> 2));
  v4 = &v3[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v4++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  v5 = *(uint32_t ***)a1;
  *(uint32_t *)(a1 + 4) = 1065353216;
  *(uint32_t *)(a1 + 24) = 1065353216;
  *(uint32_t *)(a1 + 44) = 1065353216;
  *(uint32_t *)(a1 + 64) = 1065353216;
  v6 = *v5;
  *(uint32_t *)(a1 + 4) = *v6;
  *(uint32_t *)(a1 + 8) = v6[1];
  *(uint32_t *)(a1 + 12) = v6[2];
  *(uint32_t *)(a1 + 16) = v6[3];
  *(uint32_t *)(a1 + 20) = v6[4];
  *(uint32_t *)(a1 + 24) = v6[5];
  *(uint32_t *)(a1 + 28) = v6[6];
  *(uint32_t *)(a1 + 32) = v6[7];
  *(uint32_t *)(a1 + 36) = v6[8];
  *(uint32_t *)(a1 + 40) = v6[9];
  *(uint32_t *)(a1 + 44) = v6[10];
  *(uint32_t *)(a1 + 48) = v6[11];
  *(uint32_t *)(a1 + 52) = v6[12];
  *(uint32_t *)(a1 + 56) = v6[13];
  *(uint32_t *)(a1 + 60) = v6[14];
  result = v6[15];
  *(uint32_t *)(a1 + 64) = result;
  return result;
}


// ============================================================================
// Address:   0xd15340 (size: 367 bytes)
// Symbol:    _ZN6glitch7collada2ps10CDeflector22GetFrictionCoefficientEffff
// Demangled: glitch::collada::ps::CDeflector::GetFrictionCoefficient(float,float,float,float)
// ============================================================================
long double glitch::collada::ps::CDeflector::GetFrictionCoefficient(
        glitch::collada::ps::CDeflector::Self *self,
        float a2,
        float a3,
        float a4,
        float a5)
{
  float v5; // xmm0_4
  long double v6; // fst7
  double v8;

  v5 = 1.0;
  if ( a2 == 0.0 )
    return v5;
  v5 = 0.0;
  if ( a2 == 1.0 )
    return v5;
  if ( a3 < (float)(0.07f * a4) )
  {
    if ( (float)(0.035f * a4) > a3 )
    {
      v8 = log((float)(1.0 - a2));
      return (float)exp(v8 * a5);
    }
    else
    {
      v6 = log((float)(1.0 - a2));
      return (float)(exp((double)v6 * a5) * (float)(1.0 - (float)((float)((float)(a3 / a4) * 28.571428f) - 1.0))
                   + (float)((float)((float)((float)(a3 / a4) * 28.571428f) - 1.0) * (float)(1.0 - a2)));
    }
  }
  return (float)(1.0 - a2);
}


// ============================================================================
// Address:   0xd154b0 (size: 4284 bytes)
// Symbol:    _ZN6glitch7collada2ps10CDeflector5applyEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_PNS1_16IParticleContextE
// Demangled: glitch::collada::ps::CDeflector::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// ============================================================================
int glitch::collada::ps::CDeflector::apply(glitch::collada::ps::CDeflector::Self *a1, float **a2, float **a3, int a4)
{
  glitch::collada::ps::CDeflector::Self *v4;
  float *v5;
  int v6;
  float v7; // xmm7_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  int v14;
  float **v15;
  float *v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  int v27;
  float v28; // xmm4_4
  float v29; // xmm7_4
  int v30;
  int v31;
  float v32; // xmm1_4
  float v33; // xmm4_4
  float v34; // xmm4_4
  float v35; // xmm7_4
  int v36;
  float v37; // xmm1_4
  float v38; // xmm4_4
  float v39; // xmm4_4
  int v40;
  float v41; // xmm1_4
  float v42; // xmm7_4
  long double v43; // fst7
  float v44; // xmm4_4
  float v45; // xmm1_4
  float v46; // xmm4_4
  float v47; // xmm4_4
  float v48; // xmm7_4
  float v49; // xmm6_4
  float v50; // xmm5_4
  float *v51;
  float *v52;
  float v53; // xmm2_4
  int result;
  float v55; // xmm4_4
  float v56;
  float FrictionCoefficient;
  int v58;
  double v59;
  double v60;
  double v61;
  int v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  int v98;
  int v99;
  int v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;

  v4 = a1;
  v5 = *(float **)a1;
  v79 = *(float *)(*(uint32_t *)a1 + 4);
  v6 = **(uint32_t **)a1;
  v92 = *(float *)(v6 + 52);
  v89 = -*(float *)(v6 + 20);
  v75 = *(float *)(*(uint32_t *)a1 + 16);
  v78 = *(float *)(*(uint32_t *)a1 + 12);
  v88 = -*(float *)(v6 + 16);
  v77 = *(float *)(*(uint32_t *)a1 + 20);
  v93 = *(float *)(v6 + 56);
  v91 = *(float *)(v6 + 48);
  v90 = -*(float *)(v6 + 24);
  v85 = *(float *)(v6 + 8);
  v7 = *(float *)(v6 + 36);
  v103 = *(float *)(v6 + 32);
  v84 = *(float *)(v6 + 4);
  v8 = *(float *)(v6 + 40);
  v9 = *(float *)v6;
  v83 = *(float *)v6;
  v105 = v8;
  v104 = v7;
  v10 = (float)((float)(v7 * v7) + (float)(v103 * v103)) + (float)(v8 * v8);
  if ( v10 != 0.0 )
  {
    v11 = 1.0 / fsqrt(v10);
    v12 = (float)((float)((float)(v10 * v11) * v11) + -3.0) * (float)(v11 * -0.5);
    v103 = v103 * v12;
    v104 = v7 * v12;
    v105 = v12 * v8;
    v9 = *(float *)v6;
  }
  v71 = *((float *)a1 + 15);
  v87 = fsqrt((float)((float)(v89 * v89) + (float)(v88 * v88)) + (float)(v90 * v90)) * (float)(v5[7] * 0.5);
  v82 = -*((float *)a1 + 7);
  v72 = *((float *)a1 + 1);
  v69 = *((float *)a1 + 13);
  v86 = fsqrt((float)((float)(v84 * v84) + (float)(v9 * v9)) + (float)(v85 * v85)) * (float)(0.5 * v5[6]);
  v70 = *((float *)a1 + 14);
  v81 = -*((float *)a1 + 6);
  v80 = -*((float *)a1 + 5);
  v74 = *((float *)a1 + 3);
  v73 = *((float *)a1 + 2);
  v13 = *(float *)(a4 + 60);
  v76 = *(float *)(*(uint32_t *)a1 + 8) * v79;
  if ( a3 != a2 )
  {
    v14 = **(uint32_t **)a1;
    v15 = a2;
    v68 = v78 * 180.0;
    do
    {
      v16 = *v15;
      v17 = (*v15)[9];
      v18 = (*v15)[4] * v17;
      v19 = (float)((*v15)[3] * v17) * v13;
      v20 = v18 * v13;
      v106 = (*v15)[3] * v17;
      v111 = v18;
      v109 = (*v15)[5] * v17;
      v21 = (float)((float)(v104 * (float)(v18 * v13)) + (float)(v103 * v19)) + (float)(v105 * (float)(v109 * v13));
      if ( v21 != 0.0 )
      {
        v94 = v16[2];
        v97 = v16[1];
        v22 = (float)((float)((float)((float)(v92 - v97) * v104) + (float)((float)(v91 - *v16) * v103))
                    + (float)((float)(v93 - v94) * v105))
            / v21;
        if ( v22 > 0.0 && v22 <= 1.0 )
        {
          v56 = (float)(*v16 - v91) + (float)(v19 * v22);
          v23 = (float)(v97 - v92) + (float)(v20 * v22);
          v24 = (float)(v94 - v93) + (float)((float)(v109 * v13) * v22);
          v25 = (float)((float)((float)(v89 * v23) + (float)(v88 * v56)) + (float)(v90 * v24)) * (float)(1.0 / v87);
          if ( v25 <= 1.0 && v25 >= -1.0 )
          {
            v26 = (float)((float)((float)(v83 * v56) + (float)(v84 * v23)) + (float)(v85 * v24)) * (float)(1.0 / v86);
            v101 = v26;
            if ( v26 <= 1.0 && v26 >= -1.0 )
            {
              if ( v76 == 0.0 )
              {
                v95 = 0.0;
              }
              else
              {
                v27 = 48271 * (*(uint32_t *)(a4 + 100) % 44488) + 3399 * (*(uint32_t *)(a4 + 100) / -44488);
                *(uint32_t *)(a4 + 100) = v27;
                if ( v27 < 0 )
                {
                  v27 += 0x7FFFFFFF;
                  *(uint32_t *)(a4 + 100) = v27;
                }
                v28 = (double)v27 * 4.656612875245797e-10;
                v95 = (float)(v28 + -0.5) * v76;
              }
              v29 = -(float)((float)((float)(v104 * v111) + (float)(v103 * v106)) + (float)(v105 * v109));
              v65 = (float)(v103 * v29) + v106;
              v64 = (float)(v104 * v29) + v111;
              v63 = (float)(v105 * v29) + v109;
              v96 = v29 * (float)(v95 + v79);
              v58 = v14;
              FrictionCoefficient = glitch::collada::ps::CDeflector::GetFrictionCoefficient(
                                      a1,
                                      v75,
                                      v96,
                                      fsqrt((float)((float)(v64 * v64) + (float)(v65 * v65)) + (float)(v63 * v63)),
                                      (float)(1.0 - v22) * v13);
              v14 = v58;
              v107 = (float)(v65 * FrictionCoefficient) + (float)(v96 * v103);
              v112 = (float)(v64 * FrictionCoefficient) + (float)(v96 * v104);
              v110 = (float)(v63 * FrictionCoefficient) + (float)(v96 * v105);
              if ( v78 > 0.0 )
              {
                v62 = *(uint32_t *)(a4 + 100);
                v30 = 48271 * (v62 % 44488) + 3399 * (v62 / -44488);
                *(uint32_t *)(a4 + 100) = v30;
                v31 = v30 + 0x7FFFFFFF;
                if ( 48271 * (v62 % 44488) + 3399 * (v62 / -44488) >= 0 )
                  v31 = 48271 * (v62 % 44488) + 3399 * (v62 / -44488);
                v98 = v31;
                v32 = (double)v31 * 4.656612875245797e-10;
                v59 = (float)((float)(v32 + -0.5) * v68) * 0.017453292519943295;
                v33 = cos(v59);
                v66 = v33;
                v34 = sin(v59);
                v35 = (float)(v66 * v112) + (float)(v107 * v34);
                v108 = (float)(v66 * v107) - (float)(v112 * v34);
                v99 = 48271 * (v98 % 44488) + 3399 * (v98 / -44488);
                *(uint32_t *)(a4 + 100) = v99;
                v36 = v99 + 0x7FFFFFFF;
                if ( v99 >= 0 )
                  v36 = v99;
                v100 = v36;
                v37 = (double)v36 * 4.656612875245797e-10;
                v60 = (float)((float)(v37 + -0.5) * v68) * 0.017453292519943295;
                v38 = cos(v60);
                v113 = v38;
                v39 = sin(v60);
                v67 = (float)(v35 * v39) + (float)(v113 * v110);
                v112 = (float)(v35 * v113) - (float)(v110 * v39);
                v40 = 48271 * (v100 % 44488) + 3399 * (v100 / -44488);
                *(uint32_t *)(a4 + 100) = v40;
                if ( v40 < 0 )
                {
                  v40 += 0x7FFFFFFF;
                  *(uint32_t *)(a4 + 100) = v40;
                }
                v41 = (double)v40 * 4.656612875245797e-10;
                v61 = (float)((float)(v41 + -0.5) * v68) * 0.017453292519943295;
                v42 = cos(v61);
                v43 = sin(v61);
                v14 = v58;
                v44 = v43;
                v110 = (float)(v108 * v44) + (float)(v67 * v42);
                v45 = v67 * v44;
                v46 = v103 * (float)((float)(v42 * v108) - (float)(v67 * v44));
                v107 = (float)(v42 * v108) - v45;
                v47 = (float)(v46 + (float)(v110 * v105)) + (float)(v112 * v104);
                if ( v47 < 0.0 )
                {
                  v55 = v47 * -2.0;
                  v107 = (float)(v103 * v55) + v107;
                  v112 = (float)(v104 * v55) + v112;
                  v110 = (float)(v105 * v55) + v110;
                }
              }
              v48 = v56 + v91;
              v49 = v23 + v92;
              v50 = v24 + v93;
              if ( v77 > 0.0 )
              {
                v102 = v101 * v86;
                v107 = (float)((float)((float)((float)(v48 - v69) - (float)(v80 * (float)(v87 * v25)))
                                     - (float)(v102 * v72))
                             * v77)
                     + v107;
                v112 = (float)((float)((float)((float)(v49 - v70) - (float)(v81 * (float)(v87 * v25)))
                                     - (float)(v102 * v73))
                             * v77)
                     + v112;
                v110 = (float)((float)((float)((float)(v50 - v71) - (float)(v82 * (float)(v87 * v25)))
                                     - (float)(v102 * v74))
                             * v77)
                     + v110;
              }
              v51 = *v15;
              *v51 = v48 + (float)(v103 * 0.3f);
              v51[1] = v49 + (float)(v104 * 0.3f);
              v51[2] = v50 + (float)(0.3f * v105);
              v52 = *v15;
              v53 = 1.0 / v17;
              v52[3] = v107 * v53;
              v52[4] = v112 * v53;
              v52[5] = v53 * v110;
            }
          }
        }
      }
      ++v15;
    }
    while ( a3 != v15 );
    v6 = v14;
    v4 = a1;
  }
  *((uint32_t *)v4 + 1) = *(uint32_t *)v6;
  *((uint32_t *)v4 + 2) = *(uint32_t *)(v6 + 4);
  *((uint32_t *)v4 + 3) = *(uint32_t *)(v6 + 8);
  *((uint32_t *)v4 + 4) = *(uint32_t *)(v6 + 12);
  *((uint32_t *)v4 + 5) = *(uint32_t *)(v6 + 16);
  *((uint32_t *)v4 + 6) = *(uint32_t *)(v6 + 20);
  *((uint32_t *)v4 + 7) = *(uint32_t *)(v6 + 24);
  *((uint32_t *)v4 + 8) = *(uint32_t *)(v6 + 28);
  *((uint32_t *)v4 + 9) = *(uint32_t *)(v6 + 32);
  *((uint32_t *)v4 + 10) = *(uint32_t *)(v6 + 36);
  *((uint32_t *)v4 + 11) = *(uint32_t *)(v6 + 40);
  *((uint32_t *)v4 + 12) = *(uint32_t *)(v6 + 44);
  *((uint32_t *)v4 + 13) = *(uint32_t *)(v6 + 48);
  *((uint32_t *)v4 + 14) = *(uint32_t *)(v6 + 52);
  *((uint32_t *)v4 + 15) = *(uint32_t *)(v6 + 56);
  result = *(uint32_t *)(v6 + 60);
  *((uint32_t *)v4 + 16) = result;
  return result;
}


// ============================================================================
// Address:   0xd16570 (size: 13 bytes)
// Symbol:    _ZN6glitch7collada2ps8CGravityC2ERNS2_11SParametersE
// Demangled: glitch::collada::ps::CGravity::CGravity(glitch::collada::ps::CGravity::SParameters &)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps8CGravityC1ERNS2_11SParametersE'
uint32_t *glitch::collada::ps::CGravity::Construct(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}


// ============================================================================
// Address:   0xd16580 (size: 696 bytes)
// Symbol:    _ZN6glitch7collada2ps8CGravity5applyEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_PNS1_16IParticleContextE
// Demangled: glitch::collada::ps::CGravity::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// ============================================================================
float *glitch::collada::ps::CGravity::apply(float ***a1, float **a2, float **a3, int a4)
{
  float **v4;
  float v5; // xmm5_4
  float *result;
  float *v7;
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  long double v12; // fst7
  float v13; // xmm3_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float *v18;
  float v19; // xmm3_4
  float v20; // xmm3_4
  float v21; // xmm7_4
  float v22; // xmm3_4
  float *v23;
  float *v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;

  v4 = a2;
  v5 = 1000.0 * *((float *)*a1 + 1);
  v26 = *((float *)*a1 + 2);
  result = **a1;
  v7 = (*a1)[3];
  v28 = result[14];
  v27 = result[13];
  v8 = result[12];
  v29 = *(float *)(a4 + 60);
  if ( a2 != a3 )
  {
    v25 = -*((float *)*a1 + 2);
    do
    {
      if ( v7 != nullptr )
      {
        v18 = *v4;
        v9 = v8 - **v4;
        v10 = v27 - (*v4)[1];
        v11 = v28 - (*v4)[2];
        v19 = fsqrt((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11));
        if ( v19 == 0.0 )
          goto LABEL_8;
        v9 = v9 * (float)(1.0 / v19);
        v10 = v10 * (float)(1.0 / v19);
        v11 = v11 * (float)(1.0 / v19);
        if ( v26 <= 0.0 )
          goto LABEL_8;
      }
      else
      {
        v10 = result[9];
        v9 = result[8];
        v11 = result[10];
        v20 = (float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11);
        if ( v20 != 0.0 )
        {
          v21 = 1.0 / fsqrt(v20);
          v22 = (float)((float)((float)(v20 * v21) * v21) + -3.0) * (float)(v21 * -0.5);
          v9 = v9 * v22;
          v10 = v10 * v22;
          v11 = v11 * v22;
        }
        v18 = *v4;
        if ( v26 <= 0.0 )
        {
LABEL_8:
          v13 = v5;
          goto LABEL_5;
        }
        v19 = fabs(
                (float)((float)((float)(v18[1] - v27) * v10) + (float)((float)(*v18 - v8) * v9))
              + (float)((float)(v18[2] - v28) * v11));
      }
      v24 = result;
      v23 = v7;
      v12 = exp((float)(v19 * v25));
      result = v24;
      v7 = v23;
      v13 = (double)v12 * v5;
LABEL_5:
      v14 = v13 * v29;
      ++v4;
      v15 = (float)(v9 * v14) + v18[3];
      v16 = (float)(v10 * v14) + v18[4];
      v17 = (float)(v14 * v11) + v18[5];
      v18[3] = v15;
      v18[4] = v16;
      v18[5] = v17;
    }
    while ( a3 != v4 );
  }
  return result;
}


// ============================================================================
// Address:   0xd16840 (size: 13 bytes)
// Symbol:    _ZN6glitch7collada2ps7CVortexC2ERNS2_11SParametersE
// Demangled: glitch::collada::ps::CVortex::CVortex(glitch::collada::ps::CVortex::SParameters &)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps7CVortexC1ERNS2_11SParametersE'
uint32_t *glitch::collada::ps::CVortex::Construct(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}


// ============================================================================
// Address:   0xd16850 (size: 1577 bytes)
// Symbol:    _ZN6glitch7collada2ps7CVortex5applyEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_PNS1_16IParticleContextE
// Demangled: glitch::collada::ps::CVortex::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// ============================================================================
float *glitch::collada::ps::CVortex::apply(float ***a1, float **a2, float **a3, float *a4)
{
  float **v4;
  float *v5;
  float v6; // xmm0_4
  char v7; // si
  float *result;
  float v9; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31;
  float v32;
  float *v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;

  v4 = a2;
  v5 = **a1;
  v33 = (*a1)[9];
  v38 = *((float *)*a1 + 6);
  v37 = *((float *)*a1 + 11);
  v6 = *((float *)*a1 + 10);
  v7 = *((uint8_t *)*a1 + 56);
  result = a4;
  v9 = v5[9];
  v41 = v5[8];
  v40 = a4[15];
  v43 = v5[10];
  v42 = v9;
  v10 = (float)((float)(v9 * v9) + (float)(v41 * v41)) + (float)(v43 * v43);
  if ( v10 != 0.0 )
  {
    v11 = 1.0 / fsqrt(v10);
    v12 = (float)((float)((float)(v10 * v11) * v11) + -3.0) * (float)(v11 * -0.5);
    v41 = v41 * v12;
    v42 = v9 * v12;
    v43 = v12 * v43;
  }
  if ( a3 != a2 )
  {
    v39 = *((float *)*a1 + 5) * v40;
    v32 = v6 * v6;
    v13 = (float)((float)(1.0 - *((float *)*a1 + 4)) * *((float *)*a1 + 1)) * v40;
    v35 = v41 * v13;
    v36 = v42 * v13;
    v34 = v13 * v43;
    v31 = 1.0 / v6;
    do
    {
      result = *v4;
      v49 = v5[12] - **v4;
      v46 = v5[13] - (*v4)[1];
      v44 = v5[14] - (*v4)[2];
      if ( v7 != 0 )
      {
        v14 = (float)(v41 * (float)(v5[13] - (*v4)[1])) - (float)(v42 * v49);
        v15 = (float)(v43 * v49) - (float)(v41 * v44);
        v16 = (float)(v42 * v44) - (float)(v43 * v46);
      }
      else
      {
        v14 = (float)(v42 * v49) - (float)(v41 * v46);
        v15 = (float)(v41 * v44) - (float)(v43 * v49);
        v16 = (float)(v43 * v46) - (float)(v42 * v44);
      }
      v17 = (float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v14 * v14);
      if ( v17 != 0.0 )
      {
        v18 = 1.0 / fsqrt(v17);
        v19 = (float)((float)((float)(v17 * v18) * v18) + -3.0) * (float)(v18 * -0.5);
        v16 = v16 * v19;
        v15 = v15 * v19;
        v14 = v14 * v19;
      }
      if ( v7 != 0 )
      {
        v20 = (float)(v42 * v16) - (float)(v41 * v15);
        v21 = (float)(v41 * v14) - (float)(v43 * v16);
        v22 = (float)(v43 * v15) - (float)(v42 * v14);
      }
      else
      {
        v20 = (float)(v41 * v15) - (float)(v42 * v16);
        v21 = (float)(v43 * v16) - (float)(v41 * v14);
        v22 = (float)(v42 * v14) - (float)(v43 * v15);
      }
      v23 = (float)((float)(v21 * v21) + (float)(v22 * v22)) + (float)(v20 * v20);
      if ( v23 != 0.0 )
      {
        v24 = 1.0 / fsqrt(v23);
        v25 = (float)((float)((float)(v23 * v24) * v24) + -3.0) * (float)(v24 * -0.5);
        v22 = v22 * v25;
        v21 = v21 * v25;
        v20 = v20 * v25;
      }
      result[3] = v35 + result[3];
      result[4] = v36 + result[4];
      result[5] = v34 + result[5];
      v26 = (float)((float)(v46 * v21) + (float)(v49 * v22)) + (float)(v44 * v20);
      if ( v38 >= v26 )
      {
        result = *v4;
        v47 = (float)((float)((*v4)[3] * v16) + (float)((*v4)[4] * v15)) + (float)((*v4)[5] * v14);
        result[3] = (float)((float)(v39 * v16) * v47) + result[3];
        result[4] = (float)((float)(v39 * v15) * v47) + result[4];
        result[5] = (float)((float)(v39 * v14) * v47) + result[5];
      }
      if ( v37 >= v26 )
      {
        result = *v4;
        v27 = (*v4)[3];
        if ( v33 != nullptr )
        {
          v45 = result[5];
          v48 = result[4];
          v28 = (float)((float)(v42 * v48) + (float)(v41 * v27)) + (float)(v43 * v45);
          v29 = fsqrt(
                  (float)((float)((float)(v48 - (float)(v42 * v28)) * (float)(v48 - (float)(v42 * v28)))
                        + (float)((float)(v27 - (float)(v41 * v28)) * (float)(v27 - (float)(v41 * v28))))
                + (float)((float)(v45 - (float)(v28 * v43)) * (float)(v45 - (float)(v28 * v43))));
          v30 = (float)(v29 * v29) / v26;
        }
        else
        {
          v48 = result[4];
          v45 = result[5];
          v30 = (float)((float)(v32
                              / (float)(fabs((float)((float)(v15 * v48) + (float)(v16 * v27)) + (float)(v14 * v45)) * v31))
                      - (float)((float)(v22 * v27) + (float)(v48 * v21)))
              - (float)(v45 * v20);
        }
        result[3] = (float)((float)(v22 * v30) * v40) + v27;
        result[4] = (float)((float)(v21 * v30) * v40) + v48;
        result[5] = (float)((float)(v30 * v20) * v40) + v45;
      }
      ++v4;
    }
    while ( a3 != v4 );
  }
  return result;
}


// ============================================================================
// Address:   0xd16e80 (size: 13 bytes)
// Symbol:    _ZN6glitch7collada2ps5CWindC2ERNS2_11SParametersE
// Demangled: glitch::collada::ps::CWind::CWind(glitch::collada::ps::CWind::SParameters &)
// ============================================================================
// Alternative name is '_ZN6glitch7collada2ps5CWindC1ERNS2_11SParametersE'
uint32_t *glitch::collada::ps::CWind::Construct(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}


// ============================================================================
// Address:   0xd16e90 (size: 864 bytes)
// Symbol:    _ZN6glitch7collada2ps5CWind5applyEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_PNS1_16IParticleContextE
// Demangled: glitch::collada::ps::CWind::apply(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::collada::ps::IParticleContext *)
// ============================================================================
float *glitch::collada::ps::CWind::apply(float ***a1, float **a2, float **a3, int a4)
{
  float **v4;
  float v5; // xmm4_4
  float *v6;
  float *result;
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm6_4
  float v13; // xmm3_4
  float v14; // xmm3_4
  float v15; // xmm3_4
  int v16;
  int v17;
  float v18;
  float v19;
  float v20;
  float *v21;
  float v22;

  v4 = a2;
  v5 = *(float *)(a4 + 60);
  v6 = **a1;
  v20 = 1000.0 * *((float *)*a1 + 1);
  result = (*a1)[6];
  v18 = *((float *)*a1 + 2);
  v21 = result;
  v19 = *((float *)*a1 + 3);
  if ( a3 != a2 )
  {
    v8 = 0.0;
    v9 = 0.0;
    v22 = (float)((float)(*((float *)*a1 + 4) * *((float *)*a1 + 3)) * 4.656613e-10f) * v5;
    v10 = 0.0;
    do
    {
      if ( v21 != nullptr )
      {
        if ( v21 != (float *)((char *)&dword_0 + 1) )
          goto LABEL_13;
        v10 = v6[12] - **v4;
        v9 = v6[13] - (*v4)[1];
        v8 = v6[14] - (*v4)[2];
        v14 = fsqrt((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v8 * v8));
        if ( v14 != 0.0 )
        {
          v10 = v10 * (float)(1.0 / v14);
          v9 = v9 * (float)(1.0 / v14);
          v8 = v8 * (float)(1.0 / v14);
        }
        if ( v18 <= 0.0 )
          goto LABEL_13;
      }
      else
      {
        v9 = v6[9];
        v10 = v6[8];
        v8 = v6[10];
        v11 = (float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v8 * v8);
        if ( v11 != 0.0 )
        {
          v12 = 1.0 / fsqrt(v11);
          v13 = (float)((float)((float)(v11 * v12) * v12) + -3.0) * (float)(v12 * -0.5);
          v10 = v10 * v13;
          v9 = v9 * v13;
          v8 = v8 * v13;
        }
        if ( v18 <= 0.0 )
        {
LABEL_13:
          v15 = v20;
          goto LABEL_8;
        }
        v14 = fabs(
                (float)((float)((float)((*v4)[1] - v6[13]) * v9) + (float)((float)(**v4 - v6[12]) * v10))
              + (float)((float)((*v4)[2] - v6[14]) * v8));
      }
      v15 = exp((float)(v14 * (float)-v18)) * v20;
LABEL_8:
      v10 = v10 * v15;
      v9 = v9 * v15;
      v8 = v8 * v15;
      if ( v19 > 0.0 )
      {
        v16 = lrand48();
        v17 = lrand48();
        v10 = v10 + (float)((float)lrand48() * v22);
        v9 = v9 + (float)((float)v17 * v22);
        v8 = v8 + (float)((float)v16 * v22);
      }
      result = *v4++;
      *result = (float)(v10 * v5) + *result;
      result[1] = (float)(v9 * v5) + result[1];
      result[2] = (float)(v8 * v5) + result[2];
    }
    while ( a3 != v4 );
  }
  return result;
}


// ============================================================================
// Address:   0xd171f0 (size: 149 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModelC2Ev
// Demangled: glitch::collada::ps::CParticleSystemColorModel::CParticleSystemColorModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemColorModel::Self *glitch::collada::ps::CParticleSystemColorModel::Construct(
        glitch::collada::ps::CParticleSystemColorModel::Self *self,
        int *a2)
{
  int v3;

  v3 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = a2[1];
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint8_t *)self + 20) = -1;
  *((uint8_t *)self + 21) = -1;
  *((uint8_t *)self + 22) = -1;
  *((uint8_t *)self + 23) = -1;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 1;
  *((uint32_t *)self + 15) = 1;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  return self;
}


// ============================================================================
// Address:   0xd17290 (size: 181 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModelC1Ev
// Demangled: glitch::collada::ps::CParticleSystemColorModel::CParticleSystemColorModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemColorModel::Self *glitch::collada::ps::CParticleSystemColorModel::Construct(
        glitch::collada::ps::CParticleSystemColorModel::Self *self)
{
  glitch::collada::ps::IParticleContext::Construct((glitch::collada::ps::CParticleSystemColorModel::Self *)((char *)self + 92));
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 20) = -1;
  *((uint8_t *)self + 21) = -1;
  *((uint8_t *)self + 22) = -1;
  *((uint8_t *)self + 23) = -1;
  *((uint32_t *)self + 14) = 1;
  *((uint32_t *)self + 23) = ((uint32_t)(uintptr_t)&off_2070468);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207044C);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 1;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  return nullptr;
}


// ============================================================================
// Address:   0xd17350 (size: 22 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModelD2Ev
// Demangled: glitch::collada::ps::CParticleSystemColorModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemColorModel::Destroy(
        glitch::collada::ps::CParticleSystemColorModel::Self *self,
        int *a2)
{
  int v2;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[1];
}


// ============================================================================
// Address:   0xd17370 (size: 16 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModel15initPColorModelEv
// Demangled: glitch::collada::ps::CParticleSystemColorModel::initPColorModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemColorModel::Self *glitch::collada::ps::CParticleSystemColorModel::initPColorModel(
        glitch::collada::ps::CParticleSystemColorModel::Self *self)
{
  *((uint32_t *)self + 16) = 0;
  return self;
}


// ============================================================================
// Address:   0xd17380 (size: 16 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModel16resetPColorModelEv
// Demangled: glitch::collada::ps::CParticleSystemColorModel::resetPColorModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemColorModel::Self *glitch::collada::ps::CParticleSystemColorModel::resetPColorModel(
        glitch::collada::ps::CParticleSystemColorModel::Self *self)
{
  *((uint32_t *)self + 16) = 0;
  return self;
}


// ============================================================================
// Address:   0xd17390 (size: 3173 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModel10initPColorEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_
// Demangled: glitch::collada::ps::CParticleSystemColorModel::initPColor(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
int glitch::collada::ps::CParticleSystemColorModel::initPColor(int a1, int *a2, int *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  float v7; // xmm2_4
  int result;
  float v9; // xmm1_4
  int i;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  float v16; // xmm5_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  int v20;
  int v21;
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm1_4
  int v29;
  int v30;
  float v31; // xmm2_4
  int v32;
  int v33;
  float v34; // xmm2_4
  int v35;
  int v36;
  float v37; // xmm2_4
  int v38;
  int v39;
  float v40; // xmm2_4
  float v41; // xmm6_4
  __m128 v42; // xmm7
  __m128 v43; // xmm2
  float v44; // xmm1_4
  float v45; // xmm5_4
  int v46;
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm7_4
  int v50;
  int v51;
  float v52; // xmm2_4
  int v53; // ett
  int v54;
  int v55;
  int v56;
  int v57;
  float v58; // xmm1_4
  int v59;
  int v60;
  int v61;
  float v62; // xmm1_4
  int v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  int v69;
  float v70;
  float v71;
  int v72;
  float v73;
  int v74;
  float v75;
  float v76;
  float v77;

  v3 = 1;
  v4 = 1;
  v5 = a2;
  if ( *(int *)(a1 + 56) > 0 )
    v4 = *(uint32_t *)(a1 + 56);
  v6 = *(uint32_t *)(a1 + 60);
  *(uint32_t *)(a1 + 56) = v4;
  if ( v6 > 0 )
    v3 = *(uint32_t *)(a1 + 60);
  v7 = 1.0 / (float)v3;
  *(uint32_t *)(a1 + 60) = v3;
  v74 = v4;
  result = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
  v72 = result;
  v66 = 1.0 / (float)v4;
  v65 = v7;
  if ( a2 != a3 )
  {
    v9 = *(float *)(result + 52) - *(float *)(result + 60);
    for ( i = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1; ; i = v72 )
    {
      v71 = v9 + *(float *)(i + 64);
      if ( v74 > 1 || *(int *)(a1 + 60) > 1 )
      {
        v11 = *(uint32_t *)(a1 + 72);
        v12 = *(uint32_t *)(a1 + 68);
        if ( *(uint64_t *)(a1 + 68) != 0 )
        {
          if ( (v11 | v12 ^ 1) != 0 )
          {
            if ( (v12 & v11) == 0xFFFFFFFF )
            {
              v50 = 3399 * (*(uint32_t *)(v72 + 100) / -44488) + 48271 * (*(uint32_t *)(v72 + 100) % 44488);
              *(uint32_t *)(v72 + 100) = v50;
              if ( v50 < 0 )
              {
                v50 += 0x7FFFFFFF;
                *(uint32_t *)(v72 + 100) = v50;
              }
              v51 = *(uint32_t *)(a1 + 56);
              v52 = (double)v50 * 4.656612875245797e-10;
              v53 = (int)(float)((float)((float)*(int *)(a1 + 60) * (float)v51) * v52);
              v19 = (float)(v53 / v51) * v65;
              v17 = (float)(v53 % v51) * v66;
              v18 = (float)(v53 / v51 + 1);
              v16 = (float)(v53 % v51 + 1);
            }
            else
            {
              v16 = 1.0;
              v18 = 1.0;
              v17 = 0.0;
              v19 = 0.0;
            }
          }
          else
          {
            v54 = *(uint32_t *)(a1 + 64);
            v55 = v54 + 1;
            *(uint32_t *)(a1 + 64) = v54 + 1;
            if ( v74 == 1 )
            {
              v18 = (float)v55;
              v19 = (float)v54 * v65;
              v16 = 1.0;
              v17 = 0.0;
            }
            else
            {
              v16 = (float)v55;
              v17 = (float)v54 * v66;
              v18 = 1.0;
              v19 = 0.0;
            }
          }
        }
        else
        {
          v13 = *(uint32_t *)(a1 + 64);
          v69 = *(uint32_t *)(a1 + 60) * v74;
          *(uint32_t *)(a1 + 64) = v13 + 1;
          v14 = v13 % v69 % *(uint32_t *)(a1 + 56);
          v15 = v13 % v69 / v74;
          v16 = (float)(v14 + 1);
          v17 = (float)v14 * v66;
          v18 = (float)(v15 + 1);
          v19 = (float)v15 * v65;
        }
        v20 = *v5;
        *(float *)(v20 + 68) = v17;
        *(float *)(v20 + 72) = v19;
        v21 = *v5;
        *(float *)(v21 + 76) = v16 * v66;
        *(float *)(v21 + 80) = v18 * v65;
      }
      if ( *(uint64_t *)(a1 + 76) == 1 )
        goto LABEL_68;
      if ( (*(uint32_t *)(a1 + 76) & *(uint32_t *)(a1 + 80)) == -1 )
      {
        v56 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
        v57 = 3399 * (*(uint32_t *)(v56 + 100) / -44488) + 48271 * (*(uint32_t *)(v56 + 100) % 44488);
        *(uint32_t *)(v56 + 100) = v57;
        if ( v57 < 0 )
        {
          v57 += 0x7FFFFFFF;
          *(uint32_t *)(v56 + 100) = v57;
        }
        v58 = (double)v57 * 4.656612875245797e-10;
        if ( (int)(float)(v58 + v58) != 0 )
        {
LABEL_68:
          v59 = *(uint32_t *)(*v5 + 76);
          *(uint32_t *)(*v5 + 76) = *(uint32_t *)(*v5 + 68);
          *(uint32_t *)(*v5 + 68) = v59;
        }
      }
      if ( *(uint64_t *)(a1 + 84) == 1 )
        goto LABEL_72;
      if ( (*(uint32_t *)(a1 + 84) & *(uint32_t *)(a1 + 88)) == -1 )
      {
        v60 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
        v61 = 3399 * (*(uint32_t *)(v60 + 100) / -44488) + 48271 * (*(uint32_t *)(v60 + 100) % 44488);
        *(uint32_t *)(v60 + 100) = v61;
        if ( v61 < 0 )
        {
          v61 += 0x7FFFFFFF;
          *(uint32_t *)(v60 + 100) = v61;
        }
        v62 = (double)v61 * 4.656612875245797e-10;
        if ( (int)(float)(v62 + v62) != 0 )
        {
LABEL_72:
          v63 = *(uint32_t *)(*v5 + 80);
          *(uint32_t *)(*v5 + 80) = *(uint32_t *)(*v5 + 72);
          *(uint32_t *)(*v5 + 72) = v63;
        }
      }
      if ( *(float *)(a1 + 24) != 0.0
        || *(float *)(a1 + 28) != 0.0
        || *(float *)(a1 + 32) != 0.0
        || *(float *)(a1 + 36) != 0.0 )
      {
        break;
      }
      result = *v5;
      *(uint32_t *)(*v5 + 40) = *(uint32_t *)(a1 + 20);
LABEL_11:
      if ( a3 == ++v5 )
        return result;
LABEL_12:
      v74 = *(uint32_t *)(a1 + 56);
      v9 = v71;
      v72 = a1 + *(uint32_t *)(*(uint32_t *)a1 - 12);
    }
    v22 = (float)((float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + 23)) * 0.003921569f;
    v23 = (float)((float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + 20)) * 0.003921569f;
    v24 = (float)((float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + 21)) * 0.003921569f;
    v25 = (float)((float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + 22)) * 0.003921569f;
    v26 = fmaxf(fmaxf(v24, v23), v25);
    v75 = fminf(fminf(v24, v23), v25);
    if ( v75 == v26 )
    {
      v27 = 0.0;
      if ( v26 != 0.0 )
        goto LABEL_27;
      goto LABEL_61;
    }
    if ( v23 == v26 )
    {
      v27 = (float)((float)(v24 - v25) * 60.0) / (float)(v23 - v75);
    }
    else
    {
      if ( v24 == v26 )
      {
        v27 = (float)((float)((float)(v25 - v23) / (float)(v24 - v75)) + 2.0) * 60.0;
        if ( v27 >= 0.0 )
          goto LABEL_26;
        goto LABEL_75;
      }
      v27 = (float)((float)((float)(v23 - v24) / (float)(v26 - v75)) + 4.0) * 60.0;
    }
    if ( v27 < 0.0 )
LABEL_75:
      v27 = v27 + 360.0;
LABEL_26:
    if ( v26 != 0.0 )
    {
LABEL_27:
      v73 = (float)(v26 - v75) / v26;
LABEL_28:
      if ( *(float *)(a1 + 40) == 0.0 && *(float *)(a1 + 44) == 0.0 )
      {
        v28 = *(float *)(a1 + 52);
        if ( *(float *)(a1 + 48) == 0.0 && v28 == 0.0 )
        {
          v29 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
          v30 = 3399 * (*(uint32_t *)(v29 + 100) / -44488) + 48271 * (*(uint32_t *)(v29 + 100) % 44488);
          *(uint32_t *)(v29 + 100) = v30;
          if ( v30 < 0 )
          {
            v30 += 0x7FFFFFFF;
            *(uint32_t *)(v29 + 100) = v30;
          }
          v31 = (double)v30 * 4.656612875245797e-10;
          v32 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
          v33 = 3399 * (*(uint32_t *)(v32 + 100) / -44488) + 48271 * (*(uint32_t *)(v32 + 100) % 44488);
          *(uint32_t *)(v32 + 100) = v33;
          v64 = v31;
          if ( v33 < 0 )
          {
            v33 += 0x7FFFFFFF;
            *(uint32_t *)(v32 + 100) = v33;
          }
          v34 = (double)v33 * 4.656612875245797e-10;
          v35 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
          v36 = 3399 * (*(uint32_t *)(v35 + 100) / -44488) + 48271 * (*(uint32_t *)(v35 + 100) % 44488);
          *(uint32_t *)(v35 + 100) = v36;
          v70 = v34;
          if ( v36 < 0 )
          {
            v36 += 0x7FFFFFFF;
            *(uint32_t *)(v35 + 100) = v36;
          }
          v37 = (double)v36 * 4.656612875245797e-10;
          v38 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
          v39 = 3399 * (*(uint32_t *)(v38 + 100) / -44488) + 48271 * (*(uint32_t *)(v38 + 100) % 44488);
          *(uint32_t *)(v38 + 100) = v39;
          v68 = v37;
          if ( v39 < 0 )
          {
            v39 += 0x7FFFFFFF;
            *(uint32_t *)(v38 + 100) = v39;
          }
          v40 = (double)v39 * 4.656612875245797e-10;
          v67 = v40;
          goto LABEL_43;
        }
      }
      else
      {
        v28 = *(float *)(a1 + 52);
      }
      v64 = glitch::collada::ps::CSmoothRandomGenerator::rand(
              (glitch::collada::ps::CSmoothRandomGenerator::Self *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 108),
              0xFu,
              v28,
              LODWORD(v71));
      v70 = glitch::collada::ps::CSmoothRandomGenerator::rand(
              (glitch::collada::ps::CSmoothRandomGenerator::Self *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 108),
              0xEu,
              *(float *)(a1 + 48),
              LODWORD(v71));
      v68 = glitch::collada::ps::CSmoothRandomGenerator::rand(
              (glitch::collada::ps::CSmoothRandomGenerator::Self *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 108),
              0xDu,
              *(float *)(a1 + 44),
              LODWORD(v71));
      v67 = glitch::collada::ps::CSmoothRandomGenerator::rand(
              (glitch::collada::ps::CSmoothRandomGenerator::Self *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 108),
              0xCu,
              *(float *)(a1 + 40),
              LODWORD(v71));
LABEL_43:
      result = *v5;
      v41 = fminf(
              fmaxf(
                (float)(v26 - *(float *)(a1 + 32)) + (float)((float)(*(float *)(a1 + 32) + *(float *)(a1 + 32)) * v70),
                0.0),
              1.0);
g4_m128_lane<float>(v42, 0) = fminf(
                          fmaxf(
                            (float)(v27 - *(float *)(a1 + 24))
                          + (float)((float)(*(float *)(a1 + 24) + *(float *)(a1 + 24)) * v67),
                            0.0),
                          360.0)
                      * 0.016666668f;
      v76 =g4_m128_lane<float>(v42, 0);
g4_m128_raw(v43) = 0x7FFFFFFFu;
      v44 = fminf(
              fmaxf(
                (float)(v73 - *(float *)(a1 + 28)) + (float)((float)(*(float *)(a1 + 28) + *(float *)(a1 + 28)) * v68),
                0.0),
              1.0);
      v45 = fmaxf(
              (float)(v22 - *(float *)(a1 + 36)) + (float)((float)(*(float *)(a1 + 36) + *(float *)(a1 + 36)) * v64),
              0.0);
      if ( fabs(g4_m128_lane<float>(v42, 0)) < 8388608.0 )
      {
g4_m128_lane<float>(v43, 0) = (float)(int)g4_m128_lane<float>(v42, 0);
        v76 =g4_m128_lane<float>(v43, 0) - COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_cmpgt_ss(v43, v42), 0) & 0x3F800000);
      }
      v46 = (int)v76;
      v47 =g4_m128_lane<float>(v42, 0) - (float)(int)v76;
      v48 = (float)(1.0 - v44) * v41;
      *(uint8_t *)(result + 43) = (int)(float)(fminf(v45, 1.0) * 255.0);
      v49 = (float)((float)((float)(v47 + -1.0) * v44) + 1.0) * v41;
      v77 = (float)(1.0 - (float)(v47 * v44)) * v41;
      switch ( v46 )
      {
        case 0:
          *(uint8_t *)(result + 40) = (int)(float)(v41 * 255.0);
          *(uint8_t *)(result + 41) = (int)(float)(v49 * 255.0);
          *(uint8_t *)(result + 42) = (int)(float)(255.0 * v48);
          goto LABEL_11;
        case 1:
          *(uint8_t *)(result + 40) = (int)(float)(v77 * 255.0);
          *(uint8_t *)(result + 41) = (int)(float)(v41 * 255.0);
          *(uint8_t *)(result + 42) = (int)(float)(255.0 * v48);
          goto LABEL_11;
        case 2:
          *(uint8_t *)(result + 40) = (int)(float)(v48 * 255.0);
          *(uint8_t *)(result + 41) = (int)(float)(v41 * 255.0);
          *(uint8_t *)(result + 42) = (int)(float)(255.0 * v49);
          goto LABEL_11;
        case 3:
          *(uint8_t *)(result + 40) = (int)(float)(v48 * 255.0);
          *(uint8_t *)(result + 41) = (int)(float)(v77 * 255.0);
          *(uint8_t *)(result + 42) = (int)(float)(v41 * 255.0);
          goto LABEL_11;
        case 4:
          ++v5;
          *(uint8_t *)(result + 40) = (int)(float)(v49 * 255.0);
          *(uint8_t *)(result + 41) = (int)(float)(v48 * 255.0);
          *(uint8_t *)(result + 42) = (int)(float)(v41 * 255.0);
          if ( a3 != v5 )
            goto LABEL_12;
          break;
        case 5:
          *(uint8_t *)(result + 40) = (int)(float)(v41 * 255.0);
          *(uint8_t *)(result + 41) = (int)(float)(v48 * 255.0);
          *(uint8_t *)(result + 42) = (int)(float)(255.0 * v77);
          goto LABEL_11;
        default:
          goto LABEL_11;
      }
      return result;
    }
LABEL_61:
    v73 = 0.0;
    goto LABEL_28;
  }
  return result;
}


// ============================================================================
// Address:   0xd18000 (size: 538 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModel16applyUVAnimationEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_
// Demangled: glitch::collada::ps::CParticleSystemColorModel::applyUVAnimation(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
int glitch::collada::ps::CParticleSystemColorModel::applyUVAnimation(int a1, int *a2, int *a3)
{
  void *v3;
  int v4;
  int result;
  int v6;
  int *v7;
  float v8; // xmm3_4
  float *v9;
  float v10;
  float v11; // xmm2_4
  float v12; // xmm0_4
  float *v13;
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[3];
  typedef uint32_t _g4_t_v26[4];
  typedef float _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v19)) > _g4_s1 ? (44u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v20)) > _g4_s2 ? (44u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v21)) > _g4_s3 ? (48u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v22)) > _g4_s4 ? (48u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v23)) > _g4_s5 ? (76u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v24)) > _g4_s6 ? (80u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v25)) > _g4_s7 ? (96u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v26)) > _g4_s8 ? (108u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v27)) > _g4_s9 ? (124u + sizeof(_g4_t_v27)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 124u);

  v26[0] = 0;
  v26[1] = -8388609;
  v26[2] = 0;
  BYTE1(v26[3]) = 0;
  v3 = *(void **)(a1 + 4);
  if ( v3 == nullptr )
    v3 = &g4_fnstatic_7e9f31557d;
  v4 = *(uint32_t *)(*(uint32_t *)a1 - 12);
  v25[0] = (int)(uintptr_t)(v3);
  v25[1] = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + v4 + 84) + 32) + 16);
  v25[2] = (int)(uintptr_t)(v26);
  result = sub_CFF380(v25);
  v24 = 0;
  if ( a2 != a3 )
  {
    v6 = (int)(uintptr_t)(v3);
    v23 = (float)result;
    v7 = a2;
    while ( 1 )
    {
      v13 = (float *)*v7;
      v14 = *(float *)(a1 + 8);
      if ( v14 <= 0.0 )
      {
        v16 = v13[21];
      }
      else
      {
        v15 = (float)(v13[22] * v13[21]) / v14;
        v16 = v15 - (float)(int)v15;
      }
      (*(void (**)(uint32_t, int *, uint32_t, float *, int *, int))(**(uint32_t **)(v6 + 20) + 68))(
        *(uint32_t *)(v6 + 20),
        v25,
        v16 * v23,
        v27,
        &v24,
        1);
      if ( v27[2] == 0.0 )
      {
        v17 = *v7;
        *(float *)(v17 + 44) = v27[3];
        *(float *)(v17 + 52) = v27[0];
        *(uint32_t *)(v17 + 48) = 0;
        result = *v7++;
        *(float *)(result + 60) = v27[4];
        *(float *)(result + 64) = v27[1];
        *(uint32_t *)(result + 56) = 0;
        if ( a3 == v7 )
          return result;
      }
      else
      {
        v21 = v27[2];
        v19 = cosf(v27[2]);
        v18 = v21;
        v22 = v19;
        v20 = sinf(v18);
        v8 = v27[3];
        v9 = (float *)*v7;
        v9[11] = v22 * v27[3];
        v9[13] = v27[0];
        v10 = v27[1];
        v9[12] = (float)-v20 * v8;
        result = *v7++;
        v11 = v20 * v27[4];
        v12 = v27[4] * v22;
        *(float *)(result + 64) = v10;
        *(float *)(result + 56) = v11;
        *(float *)(result + 60) = v12;
        if ( a3 == v7 )
          return result;
      }
      v6 = v25[0];
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd18220 (size: 280 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModel21applyDiffuseAnimationEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_
// Demangled: glitch::collada::ps::CParticleSystemColorModel::applyDiffuseAnimation(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
int glitch::collada::ps::CParticleSystemColorModel::applyDiffuseAnimation(int a1, int *a2, int *a3)
{
  void *v3;
  int v4;
  int result;
  int v6;
  int *v7;
  float v8; // xmm0_4
  int v9;
  float v10; // xmm1_4
  typedef float _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  typedef uint32_t _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v14)) > _g4_s3 ? (48u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  v14[0] = 0;
  v14[1] = -8388609;
  v14[2] = 0;
  BYTE1(v14[3]) = 0;
  v3 = *(void **)(a1 + 12);
  if ( v3 == nullptr )
    v3 = &g4_fnstatic_7e9f31557d;
  v4 = *(uint32_t *)(*(uint32_t *)a1 - 12);
  v13[0] = (int)(uintptr_t)(v3);
  v13[1] = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + v4 + 84) + 32) + 16);
  v13[2] = (int)(uintptr_t)(v14);
  result = sub_CFF380(v13);
  v12 = 0;
  if ( a2 != a3 )
  {
    v6 = (int)(uintptr_t)(v3);
    v11 = (float)result;
    v7 = a2;
    while ( 1 )
    {
      v9 = *v7;
      v10 = *(float *)(a1 + 16);
      v8 = v10 > 0.0
         ? (float)((float)(*(float *)(v9 + 88) * *(float *)(v9 + 84)) / v10)
         - (float)(int)(float)((float)(*(float *)(v9 + 88) * *(float *)(v9 + 84)) / v10)
         : *(float *)(v9 + 84);
      ++v7;
      result = (*(int (**)(uint32_t, int *, uint32_t, int, int *, int))(**(uint32_t **)(v6 + 20) + 68))(
                 *(uint32_t *)(v6 + 20),
                 v13,
                 v8 * v11,
                 v9 + 40,
                 &v12,
                 1);
      if ( a3 == v7 )
        break;
      v6 = v13[0];
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd18340 (size: 752 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModel26applyUVAndDiffuseAnimationEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_
// Demangled: glitch::collada::ps::CParticleSystemColorModel::applyUVAndDiffuseAnimation(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
int glitch::collada::ps::CParticleSystemColorModel::applyUVAndDiffuseAnimation(
        float *a1,
        float **a2,
        float **a3)
{
  float v3;
  void *v4;
  int v5;
  int v6;
  void *v7;
  int result;
  int v9;
  float **v10;
  float v11; // xmm3_4
  float *v12;
  float v13;
  float *v14;
  float v15; // xmm2_4
  float v16; // xmm0_4
  float *v17;
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float *v21;
  float v22; // xmm0_4
  float v23; // xmm0_4
  float *v24;
  float *v25;
  float v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef uint32_t _g4_t_v35[4];
  typedef int _g4_t_v36[4];
  typedef int _g4_t_v37[3];
  typedef uint32_t _g4_t_v38[4];
  typedef float _g4_t_v39[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v28)) > _g4_s1 ? (44u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v29)) > _g4_s2 ? (44u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v30)) > _g4_s3 ? (48u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v31)) > _g4_s4 ? (48u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v32)) > _g4_s5 ? (72u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v33)) > _g4_s6 ? (76u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v34)) > _g4_s7 ? (76u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v35)) > _g4_s8 ? (80u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v36)) > _g4_s9 ? (96u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v37)) > _g4_s10 ? (112u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v38)) > _g4_s11 ? (124u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (140u + sizeof(_g4_t_v39)) > _g4_s12 ? (140u + sizeof(_g4_t_v39)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 140u);

  v38[0] = 0;
  v38[1] = -8388609;
  v38[2] = 0;
  BYTE1(v38[3]) = 0;
  v3 = *a1;
  v4 = *((void **)a1 + 1);
  if ( v4 == nullptr )
    v4 = &g4_fnstatic_7e9f31557d;
  v5 = *(uint32_t *)(LODWORD(v3) - 12);
  v36[2] = (int)(uintptr_t)(v38);
  v36[0] = (int)(uintptr_t)(v4);
  v36[1] = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)((char *)a1 + v5 + 84) + 32) + 16);
  v6 = *(uint32_t *)(LODWORD(v3) - 12);
  v7 = *((void **)a1 + 3);
  v37[2] = (int)(uintptr_t)(v38);
  if ( v7 == nullptr )
    v7 = &g4_fnstatic_7e9f31557d;
  v37[0] = (int)(uintptr_t)(v7);
  v37[1] = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)((char *)a1 + v6 + 84) + 32) + 16);
  v33 = sub_CFF380(v36);
  result = sub_CFF380(v37);
  v35[0] = 0;
  if ( a2 != a3 )
  {
    v9 = (int)(uintptr_t)(v4);
    v32 = (float)v33;
    v34 = (float)result;
    v10 = a2;
    while ( 1 )
    {
      v20 = a1[2];
      v21 = *v10;
      if ( v20 <= 0.0 )
      {
        v23 = v21[21];
      }
      else
      {
        v22 = (float)(v21[22] * v21[21]) / v20;
        v23 = v22 - (float)(int)v22;
      }
      (*(void (**)(uint32_t, int *, uint32_t, float *, uint32_t *, int))(**(uint32_t **)(v9 + 20) + 68))(
        *(uint32_t *)(v9 + 20),
        v36,
        v23 * v32,
        v39,
        v35,
        1);
      if ( v39[2] == 0.0 )
      {
        v24 = *v10;
        v24[11] = v39[3];
        v24[13] = v39[0];
        v24[12] = 0.0;
        v25 = *v10;
        v25[15] = v39[4];
        v26 = v39[1];
        v25[14] = 0.0;
        v25[16] = v26;
        v18 = a1[4];
        v17 = *v10;
        if ( v18 > 0.0 )
        {
LABEL_8:
          v19 = (float)((float)(v17[22] * v17[21]) / v18) - (float)(int)(float)((float)(v17[22] * v17[21]) / v18);
          goto LABEL_9;
        }
      }
      else
      {
        v30 = v39[2];
        v28 = cosf(v39[2]);
        v27 = v30;
        v31 = v28;
        v29 = sinf(v27);
        v11 = v39[3];
        v12 = *v10;
        v12[11] = v31 * v39[3];
        v12[13] = v39[0];
        v13 = v39[1];
        v12[12] = (float)-v29 * v11;
        v14 = *v10;
        v15 = v29 * v39[4];
        v16 = v39[4] * v31;
        v14[16] = v13;
        v14[14] = v15;
        v14[15] = v16;
        v17 = *v10;
        v18 = a1[4];
        if ( v18 > 0.0 )
          goto LABEL_8;
      }
      v19 = v17[21];
LABEL_9:
      ++v10;
      result = (*(int (**)(uint32_t, int *, uint32_t, float *, uint32_t *, int))(**(uint32_t **)(v37[0] + 20) + 68))(
                 *(uint32_t *)(v37[0] + 20),
                 v37,
                 v19 * v34,
                 v17 + 10,
                 v35,
                 1);
      if ( a3 == v10 )
        return result;
      v9 = v36[0];
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd18630 (size: 175 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModel11applyPColorEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_
// Demangled: glitch::collada::ps::CParticleSystemColorModel::applyPColor(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
int glitch::collada::ps::CParticleSystemColorModel::applyPColor(int a1, int *a2, int *a3)
{
  int result;
  int v4;

  result = a1;
  v4 = *(uint32_t *)(a1 + 4);
  if ( *(uint32_t *)(a1 + 12) == 0 )
  {
LABEL_6:
    if ( v4 != 0 && *(uint32_t *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 84) != 0 )
      return glitch::collada::ps::CParticleSystemColorModel::applyUVAnimation(a1, a2, a3);
    return result;
  }
  if ( v4 != 0 )
  {
    if ( *(uint32_t *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 84) != 0 )
      return glitch::collada::ps::CParticleSystemColorModel::applyUVAndDiffuseAnimation(
               (float *)a1,
               (float **)a2,
               (float **)a3);
    goto LABEL_6;
  }
  if ( *(uint32_t *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 84) != 0 )
    return glitch::collada::ps::CParticleSystemColorModel::applyDiffuseAnimation(a1, a2, a3);
  return result;
}


// ============================================================================
// Address:   0xd186e0 (size: 149 bytes)
// Symbol:    _ZN6glitch7collada2ps25CParticleSystemColorModel16getParameterImplE27E_PARTICLE_SYSTEM_PARAMETER
// Demangled: glitch::collada::ps::CParticleSystemColorModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// ============================================================================
int glitch::collada::ps::CParticleSystemColorModel::getParameterImpl(int a1, int a2)
{
  int result;

  switch ( a2 )
  {
    case 23:
      result = a1 + 4;
      break;
    case 24:
      result = a1 + 8;
      break;
    case 25:
      result = a1 + 12;
      break;
    case 26:
      result = a1 + 16;
      break;
    case 27:
      result = a1 + 20;
      break;
    case 28:
      result = a1 + 24;
      break;
    case 29:
      result = a1 + 40;
      break;
    case 30:
      result = a1 + 56;
      break;
    case 31:
      result = a1 + 60;
      break;
    case 32:
      result = a1 + 68;
      break;
    case 33:
      result = a1 + 76;
      break;
    case 34:
      result = a1 + 84;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ============================================================================
// Address:   0xd18780 (size: 94 bytes)
// Symbol:    _ZN6glitch7collada2ps27CParticleSystemEmitterModelD2Ev
// Demangled: glitch::collada::ps::CParticleSystemEmitterModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemEmitterModel::Destroy(
        glitch::collada::ps::CParticleSystemEmitterModel::Self *self,
        int *a2)
{
  int v2;
  int v3;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[1];
  v3 = *((uint32_t *)self + 2);
  if ( v3 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v3 + 4))(*((uint32_t *)self + 2));
    *((uint32_t *)self + 2) = 0;
  }
  if ( *((uint32_t *)self + 6) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 6));
}


// ============================================================================
// Address:   0xd187e0 (size: 62 bytes)
// Symbol:    _ZN6glitch7collada2ps27CParticleSystemEmitterModel27resetPEmitterModelTransformEv
// Demangled: glitch::collada::ps::CParticleSystemEmitterModel::resetPEmitterModelTransform(void)
// ============================================================================
int glitch::collada::ps::CParticleSystemEmitterModel::resetPEmitterModelTransform(
        glitch::collada::ps::CParticleSystemEmitterModel::Self *self)
{
  char *v1;
  int v2;

  v1 = (char *)self + *(uint32_t *)(*(uint32_t *)self - 12);
  if ( v1[68] == 0 )
  {
    v2 = *((uint32_t *)v1 + 30);
    if ( v2 != 0 )
      (*(void (**)(uint32_t, int))(**((uint32_t **)self + 2) + 24))(*((uint32_t *)self + 2), v2);
  }
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 28))(*((uint32_t *)self + 2));
}


// ============================================================================
// Address:   0xd18820 (size: 34 bytes)
// Symbol:    _ZN6glitch7collada2ps27CParticleSystemEmitterModel18resetPEmitterModelEv
// Demangled: glitch::collada::ps::CParticleSystemEmitterModel::resetPEmitterModel(void)
// ============================================================================
int glitch::collada::ps::CParticleSystemEmitterModel::resetPEmitterModel(
        glitch::collada::ps::CParticleSystemEmitterModel::Self *self)
{
  return glitch::collada::ps::CParticleSystemEmitterModel::resetPEmitterModelTransform(self);
}


// ============================================================================
// Address:   0xd18850 (size: 367 bytes)
// Symbol:    _ZN6glitch7collada2ps27CParticleSystemEmitterModel13initPPositionEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_
// Demangled: glitch::collada::ps::CParticleSystemEmitterModel::initPPosition(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
int glitch::collada::ps::CParticleSystemEmitterModel::initPPosition(int a1, uint32_t **a2, uint32_t **a3)
{
  int v3;
  uint32_t *v4;
  uint32_t **v5;
  float v6; // xmm0_4
  uint32_t *v7;
  uint32_t **v9;
  uint32_t *v10;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[3];
  typedef uint32_t _g4_t_v13[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v13)) > _g4_s2 ? (24u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);

  v3 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
  v4 = *(uint32_t **)(v3 + 120);
  if ( v4 != nullptr )
  {
    if ( *(uint8_t *)(v3 + 68) != 0 )
      v4 = (uint32_t *)(glitch::core::IdentityMatrix);
    (*(void (**)(uint32_t, uint32_t *))(**(uint32_t **)(a1 + 8) + 24))(*(uint32_t *)(a1 + 8), v4);
  }
  if ( *(uint8_t *)(a1 + 28) != 0 )
  {
    v11 = 1.0;
    if ( a3 - a2 != 0 )
      v11 = 1.0 / (float)(a3 - a2);
    (*(void (**)(uint32_t))(**(uint32_t **)(a1 + 8) + 8))(*(uint32_t *)(a1 + 8));
    if ( a2 != a3 )
    {
      v5 = a2;
      v6 = v11;
      do
      {
        (*(void (**)(uint32_t *))(**(uint32_t **)(a1 + 8) + 16))(v12);
        v7 = *v5++;
        *v7 = v12[0];
        v7[1] = v12[1];
        v7[2] = v12[2];
        v6 = v6 + v11;
      }
      while ( a3 != v5 );
    }
  }
  else
  {
    (*(void (**)(uint32_t))(**(uint32_t **)(a1 + 8) + 8))(*(uint32_t *)(a1 + 8));
    if ( a2 != a3 )
    {
      v9 = a2;
      do
      {
        (*(void (**)(uint32_t *))(**(uint32_t **)(a1 + 8) + 20))(v13);
        v10 = *v9++;
        *v10 = v13[0];
        v10[1] = v13[1];
        v10[2] = v13[2];
      }
      while ( a3 != v9 );
    }
  }
  return (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 8) + 12))(*(uint32_t *)(a1 + 8));
}


// ============================================================================
// Address:   0xd189c0 (size: 93 bytes)
// Symbol:    _ZN6glitch7collada2ps27CParticleSystemEmitterModel16getParameterImplE27E_PARTICLE_SYSTEM_PARAMETER
// Demangled: glitch::collada::ps::CParticleSystemEmitterModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// ============================================================================
int glitch::collada::ps::CParticleSystemEmitterModel::getParameterImpl(int a1, int a2)
{
  int result;

  switch ( a2 )
  {
    case '#':
      result = a1 + 4;
      break;
    case '$':
      result = a1 + 12;
      break;
    case '%':
      result = a1 + 16;
      break;
    case '&':
      result = a1 + 20;
      break;
    case '\'':
      result = a1 + 24;
      break;
    case '(':
      result = a1 + 28;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ============================================================================
// Address:   0xd18a20 (size: 47 bytes)
// Symbol:    _ZN6glitch7collada2ps26CParticleSystemForcesModelC2Ev
// Demangled: glitch::collada::ps::CParticleSystemForcesModel::CParticleSystemForcesModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemForcesModel::Self *glitch::collada::ps::CParticleSystemForcesModel::Construct(
        glitch::collada::ps::CParticleSystemForcesModel::Self *self,
        int *a2)
{
  int v3;

  v3 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = a2[1];
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 16) = 0;
  return self;
}


// ============================================================================
// Address:   0xd18a50 (size: 93 bytes)
// Symbol:    _ZN6glitch7collada2ps26CParticleSystemForcesModelC1Ev
// Demangled: glitch::collada::ps::CParticleSystemForcesModel::CParticleSystemForcesModel(void)
// ============================================================================
void (**glitch::collada::ps::CParticleSystemForcesModel::CParticleSystemForcesModel(
        glitch::collada::ps::CParticleSystemForcesModel::Self *self))(glitch::collada::ps::CParticleSystemForcesModel::Self * self)
{
  glitch::collada::ps::IParticleContext::Construct((glitch::collada::ps::CParticleSystemForcesModel::Self *)((char *)self + 20));
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 16) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20704CC);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20704E8);
  return (void (**)(glitch::collada::ps::CParticleSystemForcesModel::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20704E8));
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemForcesModel::Destroy  (binary VA: 0xd18ab0)
// Original: glitch::collada::ps::CParticleSystemForcesModel::~CParticleSystemForcesModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemForcesModel::Destroy(glitch::collada::ps::CParticleSystemForcesModel::Self *self, int *a2)
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[1];
  v3 = *((uint32_t **)self + 2);
  v4 = *((uint32_t **)self + 1);
  if ( v3 != v4 )
  {
    do
    {
      if ( *v4 != 0 )
        G4_VCALL<void>(*v4, 4);
      ++v4;
    }
    while ( v3 != v4 );
    v4 = *((uint32_t **)self + 1);
  }
  if ( v4 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v4));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemForcesModel::addPForce  (binary VA: 0xd18b20)
// Original: glitch::collada::ps::CParticleSystemForcesModel::addPForce
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemForcesModel::addPForce(glitch::collada::ps::CParticleSystemForcesModel::Self *self, glitch::collada::ps::IForce::Self *a2)
{
  char *v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v7;
  uint32_t *v8;
  char *v9;
  uint32_t *v10;
  char *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  size_t v17;
  unsigned int v18;
  char *v19;
  char *v20;
  int v21;

  v2 = *((char **)self + 2);
  if ( v2 == *((char **)self + 3) )
  {
    v7 = (int)(uintptr_t)(&v2[-*((uint32_t *)self + 1)]) >> 2;
    v17 = 4;
    v18 = v7;
    if ( v7 != 0 )
    {
      v17 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v14 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v14 = -4;
        v17 = v14;
      }
    }
    v5 = sub_4EBDC0(v17);
    v21 = v5;
    v4 = v5 + 4;
    v8 = (uint32_t *)(v5 + 4 * v18);
    if ( v8 != nullptr )
      *v8 = (uint32_t)(uintptr_t)(a2);
    v9 = *((char **)self + 1);
    v19 = v9;
    if ( v2 != v9 )
    {
      v10 = (uint32_t *)v5;
      do
      {
        if ( v10 != nullptr )
          *v10 = *(uint32_t *)v9;
        v9 += 4;
        ++v10;
      }
      while ( v2 != v9 );
      v4 = v5 + 4 * ((unsigned int)(v2 - (v19 + 4)) >> 2) + 8;
    }
    v20 = *((char **)self + 2);
    if ( v2 != v20 )
    {
      v11 = v2;
      v12 = (uint32_t *)v4;
      do
      {
        if ( v12 != nullptr )
          *v12 = *(uint32_t *)v11;
        v11 += 4;
        ++v12;
      }
      while ( v20 != v11 );
      v4 += 4 * ((unsigned int)(v20 - (v2 + 4)) >> 2) + 4;
    }
    v13 = *((uint32_t *)self + 1);
    if ( v13 != 0 )
    {
      v16 = v4;
      v15 = v5;
      gll_operator_delete_arr(v13);
      v5 = v15;
      v4 = v16;
    }
    *((uint32_t *)self + 1) = v21;
    *((uint32_t *)self + 2) = v4;
    *((uint32_t *)self + 3) = v21 + v17;
  }
  else
  {
    v3 = 0;
    if ( v2 != nullptr )
    {
      *(uint32_t *)v2 = (uint32_t)(uintptr_t)(a2);
      v3 = *((uint32_t *)self + 2);
    }
    v4 = v3 + 4;
    v5 = *((uint32_t *)self + 1);
    *((uint32_t *)self + 2) = v4;
  }
  *((uint8_t *)self + 16) = 1;
  return (int)(v4 - v5) >> 2;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemForcesModel::removePForce  (binary VA: 0xd18cd0)
// Original: glitch::collada::ps::CParticleSystemForcesModel::removePForce
// ----------------------------------------------------------------------------
char * glitch::collada::ps::CParticleSystemForcesModel::removePForce(glitch::collada::ps::CParticleSystemForcesModel::Self *self, glitch::collada::ps::IForce::Self *a2)
{
  char *result;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  char *v7;
  char *v8;
  int v9;
  char *dest;
  char *v11;

  v11 = *((char **)self + 2);
  result = *((char **)self + 1);
  v3 = (v11 - result) >> 4;
  v4 = (v11 - result) >> 2;
  if ( v3 <= 0 )
  {
LABEL_18:
    switch ( v4 )
    {
      case 2:
        v9 = *((uint32_t *)a2 + 1);
        break;
      case 3:
        v5 = *(uint32_t **)result;
        v9 = *((uint32_t *)a2 + 1);
        if ( v9 == *(uint32_t *)(*(uint32_t *)result + 4) )
          goto LABEL_23;
        result += 4;
        break;
      case 1:
        v9 = *((uint32_t *)a2 + 1);
        goto LABEL_22;
      default:
        return result;
    }
    v5 = *(uint32_t **)result;
    if ( *(uint32_t *)(*(uint32_t *)result + 4) == v9 )
      goto LABEL_23;
    result += 4;
LABEL_22:
    v5 = *(uint32_t **)result;
    if ( *(uint32_t *)(*(uint32_t *)result + 4) != v9 )
      return result;
    goto LABEL_23;
  }
  v5 = *(uint32_t **)result;
  v6 = *((uint32_t *)a2 + 1);
  if ( v6 != *(uint32_t *)(*(uint32_t *)result + 4) )
  {
    v5 = *((uint32_t **)result + 1);
    if ( v6 == v5[1] )
    {
      dest = result + 4;
    }
    else
    {
      v5 = *((uint32_t **)result + 2);
      if ( v6 == v5[1] )
      {
        dest = result + 8;
      }
      else
      {
        while ( 1 )
        {
          v5 = *((uint32_t **)result + 3);
          dest = result + 12;
          if ( v5[1] == v6 )
            break;
          result += 16;
          if ( --v3 == 0 )
          {
            v4 = (v11 - result) >> 2;
            goto LABEL_18;
          }
          v5 = *(uint32_t **)result;
          if ( *(uint32_t *)(*(uint32_t *)result + 4) == v6 )
            goto LABEL_23;
          v5 = *((uint32_t **)result + 1);
          dest = result + 4;
          if ( v5[1] != v6 )
          {
            v5 = *((uint32_t **)result + 2);
            dest = result + 8;
            if ( v5[1] != v6 )
              continue;
          }
          goto LABEL_11;
        }
      }
    }
    goto LABEL_11;
  }
LABEL_23:
  dest = result;
LABEL_11:
  if ( v11 != dest )
  {
    G4_VCALL<void>(v5, 4);
    v7 = *((char **)self + 2);
    v8 = dest + 4;
    if ( dest + 4 != v7 && (v7 - v8) >> 2 != 0 )
    {
      memmove(dest, dest + 4, 4 * ((v7 - v8) >> 2));
      v7 = *((char **)self + 2);
    }
    result = v7 - 4;
    *((uint8_t *)self + 16) = 1;
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemForcesModel::removePForce  (binary VA: 0xd18e20)
// Original: glitch::collada::ps::CParticleSystemForcesModel::removePForce
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemForcesModel::removePForce(glitch::collada::ps::CParticleSystemForcesModel::Self *self, int a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *dest;
  uint32_t *v5;

  if ( a2 >= 0 )
  {
    v2 = *((uint32_t **)self + 2);
    v3 = *((uint32_t *)self + 1);
    if ( a2 < ((int)(uintptr_t)(v2) - v3) >> 2 )
    {
      dest = (uint32_t *)(v3 + 4 * a2);
      if ( *dest != 0 )
      {
        G4_VCALL<void>(*dest, 4);
        v2 = *((uint32_t **)self + 2);
      }
      v5 = dest + 1;
      if ( v2 != dest + 1 && v2 - v5 != 0 )
      {
        memmove(dest, dest + 1, 4 * (v2 - v5));
        v2 = *((uint32_t **)self + 2);
      }
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v2 - 1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemForcesModel::resetPForcesModel  (binary VA: 0xd18eb0)
// Original: glitch::collada::ps::CParticleSystemForcesModel::resetPForcesModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemForcesModel::resetPForcesModel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemForcesModel::initPForces  (binary VA: 0xd18ec0)
// Original: glitch::collada::ps::CParticleSystemForcesModel::initPForces
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemForcesModel::initPForces()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemForcesModel::getParameterImpl  (binary VA: 0xd18ed0)
// Original: glitch::collada::ps::CParticleSystemForcesModel::getParameterImpl
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemForcesModel::getParameterImpl(int a1, int a2)
{
  int result;

  result = 0;
  if ( a2 == 1 )
    return a1 + 4;
  return result;
}



// ============================================================================
// Address:   0xd18ef0 (size: 81 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemGenerationModelC2Ev
// Demangled: glitch::collada::ps::CParticleSystemGenerationModel::CParticleSystemGenerationModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemGenerationModel::Self *glitch::collada::ps::CParticleSystemGenerationModel::Construct(
        glitch::collada::ps::CParticleSystemGenerationModel::Self *self,
        int *a2)
{
  int v3;

  v3 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = a2[1];
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 1065353216;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 1065353216;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 1;
  *((uint32_t *)self + 9) = 1;
  *((uint32_t *)self + 10) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemGenerationModel::Construct  (binary VA: 0xd18f50)
// Original: glitch::collada::ps::CParticleSystemGenerationModel::CParticleSystemGenerationModel
// ----------------------------------------------------------------------------
glitch::collada::ps::CParticleSystemGenerationModel::Self * glitch::collada::ps::CParticleSystemGenerationModel::Construct(glitch::collada::ps::CParticleSystemGenerationModel::Self *self)
{
  glitch::collada::ps::IParticleContext::Construct((glitch::collada::ps::CParticleSystemGenerationModel::Self *)((char *)self + 44));
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 8) = 1;
  *((uint32_t *)self + 9) = 1;
  *((uint32_t *)self + 10) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207050C);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_2070528);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 1065353216;
  *((uint32_t *)self + 5) = 1065353216;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemGenerationModel::Destroy  (binary VA: 0xd18fd0)
// Original: glitch::collada::ps::CParticleSystemGenerationModel::~CParticleSystemGenerationModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemGenerationModel::Destroy(glitch::collada::ps::CParticleSystemGenerationModel::Self *self, int *a2)
{
  int v2;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[1];
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemGenerationModel::initGenerationModel  (binary VA: 0xd18ff0)
// Original: glitch::collada::ps::CParticleSystemGenerationModel::initGenerationModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemGenerationModel::initGenerationModel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemGenerationModel::resetGenerationModel  (binary VA: 0xd19000)
// Original: glitch::collada::ps::CParticleSystemGenerationModel::resetGenerationModel
// ----------------------------------------------------------------------------
glitch::collada::ps::CParticleSystemGenerationModel::Self * glitch::collada::ps::CParticleSystemGenerationModel::resetGenerationModel(glitch::collada::ps::CParticleSystemGenerationModel::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemGenerationModel::getParameterImpl  (binary VA: 0xd19010)
// Original: glitch::collada::ps::CParticleSystemGenerationModel::getParameterImpl
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemGenerationModel::getParameterImpl(int a1, int a2)
{
  int result;

  switch ( a2 )
  {
    case 8:
      result = a1 + 8;
      break;
    case 9:
      result = a1 + 16;
      break;
    case 10:
      result = a1 + 12;
      break;
    case 11:
      result = a1 + 20;
      break;
    case 12:
      result = a1 + 24;
      break;
    case 13:
      result = a1 + 28;
      break;
    case 14:
      result = a1 + 32;
      break;
    case 15:
      result = a1 + 36;
      break;
    case 96:
      result = a1 + 40;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}



// ============================================================================
// Address:   0xd19090 (size: 32 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemLifeModelC2Ev
// Demangled: glitch::collada::ps::CParticleSystemLifeModel::CParticleSystemLifeModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemLifeModel::Self *glitch::collada::ps::CParticleSystemLifeModel::Construct(
        glitch::collada::ps::CParticleSystemLifeModel::Self *self,
        int *a2)
{
  int v3;

  v3 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = a2[1];
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemLifeModel::Construct  (binary VA: 0xd190b0)
// Original: glitch::collada::ps::CParticleSystemLifeModel::CParticleSystemLifeModel
// ----------------------------------------------------------------------------
glitch::collada::ps::CParticleSystemLifeModel::Self * glitch::collada::ps::CParticleSystemLifeModel::Construct(glitch::collada::ps::CParticleSystemLifeModel::Self *self)
{
  glitch::collada::ps::IParticleContext::Construct((glitch::collada::ps::CParticleSystemLifeModel::Self *)((char *)self + 16));
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_2070568);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207054C);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemLifeModel::Destroy  (binary VA: 0xd19100)
// Original: glitch::collada::ps::CParticleSystemLifeModel::~CParticleSystemLifeModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemLifeModel::Destroy(glitch::collada::ps::CParticleSystemLifeModel::Self *self, int *a2)
{
  int v2;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[1];
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemLifeModel::initPLifeModel  (binary VA: 0xd19120)
// Original: glitch::collada::ps::CParticleSystemLifeModel::initPLifeModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemLifeModel::initPLifeModel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemLifeModel::resetPLifeModel  (binary VA: 0xd19130)
// Original: glitch::collada::ps::CParticleSystemLifeModel::resetPLifeModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemLifeModel::resetPLifeModel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemLifeModel::initPLife  (binary VA: 0xd19140)
// Original: glitch::collada::ps::CParticleSystemLifeModel::initPLife
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemLifeModel::initPLife(float *a1, int *a2, int *a3)
{
  int *v3;
  int result;
  int v5;
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  int v9;
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14;
  unsigned int v15;

  v3 = a2;
  result = *(uint32_t *)a1;
  v5 = (int)(uintptr_t)(a1) + *(uint32_t *)(*(uint32_t *)a1 - 12);
  v6 = *(float *)(v5 + 60);
  if ( a3 != a2 )
  {
    v7 = *(float *)(v5 + 64) - v6;
    v8 = *(float *)(v5 + 52) - v6;
    while ( 1 )
    {
      v13 = a1[3];
      if ( v13 == 0.0 )
      {
        v9 = 3399 * (*(uint32_t *)(v5 + 100) / -44488) + 48271 * (*(uint32_t *)(v5 + 100) % 44488);
        *(uint32_t *)(v5 + 100) = v9;
        if ( v9 < 0 )
        {
          v9 += 0x7FFFFFFF;
          *(uint32_t *)(v5 + 100) = v9;
        }
        v10 = (double)v9 * 4.656612875245797e-10;
      }
      else
      {
        *(float *)&v15 = v8 + *(float *)(v5 + 64);
        v14 = glitch::collada::ps::CSmoothRandomGenerator::rand(
                (glitch::collada::ps::CSmoothRandomGenerator::Self *)(v5 + 108),
                0x11u,
                v13,
                v15);
        v10 = v14;
        v8 = *(float *)&v15;
      }
      v11 = (float)(v10 + -0.5) * a1[2];
      *(uint32_t *)(*v3 + 84) = 0;
      *(float *)(*v3 + 88) = v11 + a1[1];
      result = *v3;
      v12 = *(float *)(*v3 + 88);
      if ( v12 == 0.0
        || (*(float *)(result + 84) = *(float *)(result + 84) + (float)(v7 / v12),
            v7 = v7 + *(float *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 64),
            result = *v3,
            *(float *)(*v3 + 88) <= 0.0) )
      {
        *(uint32_t *)(result + 84) = 0x40000000;
        result = *v3++;
        *(uint32_t *)(result + 88) = -1082130432;
        if ( a3 == v3 )
          return result;
      }
      else if ( a3 == ++v3 )
      {
        return result;
      }
      v5 = (int)(uintptr_t)(a1) + *(uint32_t *)(*(uint32_t *)a1 - 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemLifeModel::applyPLife  (binary VA: 0xd19320)
// Original: glitch::collada::ps::CParticleSystemLifeModel::applyPLife
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemLifeModel::applyPLife(uint32_t *a1, int a2, int a3)
{
  int result;
  float v4; // xmm1_4

  for ( result = a2; a3 != result; result += 4 )
  {
    v4 = *(float *)(*(uint32_t *)result + 88);
    if ( v4 != 0.0 )
      *(float *)(*(uint32_t *)result + 84) = (float)(*(float *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 60) / v4)
                                         + *(float *)(*(uint32_t *)result + 84);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemLifeModel::getParameterImpl  (binary VA: 0xd19370)
// Original: glitch::collada::ps::CParticleSystemLifeModel::getParameterImpl
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemLifeModel::getParameterImpl(int a1, int a2)
{
  int result;

  result = a1 + 8;
  if ( a2 != 69 )
  {
    result = a1 + 12;
    if ( a2 != 70 )
    {
      result = 0;
      if ( a2 == 68 )
        return a1 + 4;
    }
  }
  return result;
}



// ============================================================================
// Address:   0xd193a0 (size: 144 bytes)
// Symbol:    _ZN6glitch7collada2ps26CParticleSystemMotionModelC2Ev
// Demangled: glitch::collada::ps::CParticleSystemMotionModel::CParticleSystemMotionModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemMotionModel::Self *glitch::collada::ps::CParticleSystemMotionModel::Construct(
        glitch::collada::ps::CParticleSystemMotionModel::Self *self,
        int *a2)
{
  int v3;

  v3 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = a2[1];
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 1;
  *((uint32_t *)self + 16) = 0;
  *((uint8_t *)self + 68) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 1;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 1;
  *((uint32_t *)self + 26) = 1065353216;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 1;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemMotionModel::Construct  (binary VA: 0xd19430)
// Original: glitch::collada::ps::CParticleSystemMotionModel::CParticleSystemMotionModel
// ----------------------------------------------------------------------------
glitch::collada::ps::CParticleSystemMotionModel::Self * glitch::collada::ps::CParticleSystemMotionModel::Construct(glitch::collada::ps::CParticleSystemMotionModel::Self *self)
{
  glitch::collada::ps::IParticleContext::Construct((glitch::collada::ps::CParticleSystemMotionModel::Self *)((char *)self + 116));
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 1;
  *((uint8_t *)self + 68) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 1;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 1;
  *((uint32_t *)self + 29) = ((uint32_t)(uintptr_t)&off_20705A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207058C);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 26) = 1065353216;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 1;
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemMotionModel::Destroy  (binary VA: 0xd194e0)
// Original: glitch::collada::ps::CParticleSystemMotionModel::~CParticleSystemMotionModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemMotionModel::Destroy(glitch::collada::ps::CParticleSystemMotionModel::Self *self, int *a2)
{
  int v2;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[1];
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemMotionModel::initPMotionModel  (binary VA: 0xd19500)
// Original: glitch::collada::ps::CParticleSystemMotionModel::initPMotionModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemMotionModel::initPMotionModel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemMotionModel::resetPMotionModel  (binary VA: 0xd19510)
// Original: glitch::collada::ps::CParticleSystemMotionModel::resetPMotionModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemMotionModel::resetPMotionModel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemMotionModel::initPMotion  (binary VA: 0xd19520)
// Original: glitch::collada::ps::CParticleSystemMotionModel::initPMotion
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CParticleSystemMotionModel::initPMotion(int a1, float **a2, float **a3)
{
  float v3; // xmm0_4
  int v4;
  int v5;
  float *result;
  float v7; // xmm1_4
  float v8; // xmm2_4
  char *v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  float **v16;
  float v17; // xmm5_4
  char *v18;
  float v19; // xmm1_4
  int v20;
  int v21; // kr00_4
  int v22;
  float v23; // xmm4_4
  double v24; // xmm6_8
  int v25;
  float v26; // xmm6_4
  float v27; // xmm1_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float *v34;
  float v35; // xmm4_4
  float v36; // xmm5_4
  float *v37;
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm5_4
  int v41;
  float *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  double v47; // xmm2_8
  int v48;
  double v49; // xmm4_8
  int v50;
  float v51; // xmm2_4
  float v52; // xmm4_4
  float *v53;
  float v54; // xmm1_4
  float v55; // xmm1_4
  float v56; // xmm2_4
  float *v57;
  float v58; // xmm2_4
  float v59; // xmm1_4
  float v60; // xmm4_4
  int v61;
  float v62; // xmm4_4
  double v63; // xmm2_8
  int v64;
  int v65;
  float v66; // xmm1_4
  float v67; // xmm4_4
  float v68; // xmm6_4
  int v69;
  float v70; // xmm2_4
  int v71;
  float v72; // xmm6_4
  float v73; // xmm2_4
  float v74; // xmm7_4
  float v75; // xmm4_4
  float v76; // xmm4_4
  float v77; // xmm2_4
  float v78; // xmm1_4
  float v79; // xmm6_4
  float v80; // xmm7_4
  float v81; // xmm6_4
  float *v82;
  int v83;
  float v84; // xmm2_4
  float *v85;
  float v86; // xmm7_4
  float v87; // xmm1_4
  float v88; // xmm1_4
  float v89; // xmm5_4
  float v90; // xmm4_4
  float *v91;
  float v92; // xmm2_4
  float v93; // xmm1_4
  float v94; // xmm5_4
  float v95; // xmm4_4
  float v96; // xmm6_4
  float v97; // xmm4_4
  float *v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef char _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109[10];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v99)) > _g4_s0 ? (12u + sizeof(_g4_t_v99)) : _g4_s0,
    _g4_s2 = (76u + sizeof(_g4_t_v100)) > _g4_s1 ? (76u + sizeof(_g4_t_v100)) : _g4_s1,
    _g4_s3 = (80u + sizeof(_g4_t_v101)) > _g4_s2 ? (80u + sizeof(_g4_t_v101)) : _g4_s2,
    _g4_s4 = (103u + sizeof(_g4_t_v102)) > _g4_s3 ? (103u + sizeof(_g4_t_v102)) : _g4_s3,
    _g4_s5 = (104u + sizeof(_g4_t_v103)) > _g4_s4 ? (104u + sizeof(_g4_t_v103)) : _g4_s4,
    _g4_s6 = (108u + sizeof(_g4_t_v104)) > _g4_s5 ? (108u + sizeof(_g4_t_v104)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v105)) > _g4_s6 ? (112u + sizeof(_g4_t_v105)) : _g4_s6,
    _g4_s8 = (116u + sizeof(_g4_t_v106)) > _g4_s7 ? (116u + sizeof(_g4_t_v106)) : _g4_s7,
    _g4_s9 = (120u + sizeof(_g4_t_v107)) > _g4_s8 ? (120u + sizeof(_g4_t_v107)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v108)) > _g4_s9 ? (124u + sizeof(_g4_t_v108)) : _g4_s9,
    _g4_s11 = (132u + sizeof(_g4_t_v109)) > _g4_s10 ? (132u + sizeof(_g4_t_v109)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 12u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 76u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 80u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 103u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 104u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 108u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 112u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 116u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 120u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 124u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 132u);

  v3 = *(float *)(a1 + 76) + *(float *)(a1 + 76);
  v4 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
  v5 = 3399 * (*(uint32_t *)(v4 + 100) / -44488) + 48271 * (*(uint32_t *)(v4 + 100) % 44488);
  *(uint32_t *)(v4 + 100) = v5;
  if ( v5 < 0 )
  {
    v5 += 0x7FFFFFFF;
    *(uint32_t *)(v4 + 100) = v5;
  }
  result = *(float **)a1;
  v102 = 0;
  v7 = (double)v5 * 4.656612875245797e-10;
  v8 = v7 + -0.5;
  v9 = (char *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1);
  v10 = *((float *)v9 + 16);
  v11 = v3 * v8;
  v12 = *((float *)v9 + 15);
  if ( v9[68] == 0 )
    v102 = *(uint8_t *)(a1 + 68) ^ 1;
  if ( *(float *)(a1 + 64) == 0.0 || v12 <= 0.0 )
  {
    v108 = 0.0;
    v107 = 0.0;
    v106 = 0.0;
    v103 = 0.0;
  }
  else
  {
    result = *((float **)v9 + 30);
    v107 = result[13] - *((float *)v9 + 44);
    v106 = result[12] - *((float *)v9 + 43);
    v108 = result[14] - *((float *)v9 + 45);
    v13 = (float)((float)(v107 * v107) + (float)(v106 * v106)) + (float)(v108 * v108);
    v14 = fsqrt(v13);
    v103 = 29.999998f * v14;
    if ( v13 != 0.0 )
    {
      v106 = v106 * (float)(1.0 / v14);
      v107 = v107 * (float)(1.0 / v14);
      v108 = (float)(1.0 / v14) * v108;
    }
  }
  if ( a2 != a3 )
  {
    v15 = v10 - v12;
    v16 = a2;
    v101 = *((float *)v9 + 13) - v12;
    while ( 1 )
    {
      v17 = *(float *)(a1 + 44);
      v18 = v9;
      v101 = v10 + v101;
      if ( v17 != 0.0 )
      {
        v19 = *(float *)(a1 + 48);
        if ( v19 == 0.0 )
        {
          v83 = 48271 * (*((uint32_t *)v9 + 25) % 44488) + 3399 * (*((uint32_t *)v9 + 25) / -44488);
          *((uint32_t *)v9 + 25) = v83;
          if ( v83 < 0 )
          {
            v83 += 0x7FFFFFFF;
            *((uint32_t *)v9 + 25) = v83;
          }
          v84 = (double)v83 * 4.656612875245797e-10;
          v18 = (char *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12));
          v17 = (float)((float)(v17 + v17) * v84) - v17;
        }
        else
        {
          v99 = glitch::collada::ps::CSmoothRandomGenerator::rand(
                  (glitch::collada::ps::CSmoothRandomGenerator::Self *)(v9 + 108),
                  6u,
                  v19,
                  LODWORD(v101),
                  v17);
          v17 = v99;
          v18 = (char *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12));
        }
      }
      if ( *(float *)(a1 + 4) == 0.0
        && *(float *)(a1 + 8) == 0.0
        && *(float *)(a1 + 12) == 0.0
        && *(float *)(a1 + 16) == 0.0
        && *(float *)(a1 + 20) == 0.0
        && *(float *)(a1 + 24) == 0.0 )
      {
        v20 = 48271 * (*((uint32_t *)v18 + 25) % 44488) + 3399 * (*((uint32_t *)v18 + 25) / -44488);
        *((uint32_t *)v18 + 25) = v20;
        if ( v20 < 0 )
          *((uint32_t *)v18 + 25) = v20 + 0x7FFFFFFF;
        v21 = *((uint32_t *)v18 + 25);
        v22 = 3399 * (v21 / -44488) + 48271 * (v21 % 44488);
        *((uint32_t *)v18 + 25) = v22;
        if ( v22 < 0 )
        {
          v22 += 0x7FFFFFFF;
          *((uint32_t *)v18 + 25) = v22;
        }
        v24 = (double)v22 * 4.656612875245797e-10;
        v25 = 3399 * (v22 / -44488) + 48271 * (v22 % 44488);
        *((uint32_t *)v18 + 25) = v25;
        v26 = v24;
        if ( v25 < 0 )
          *((uint32_t *)v18 + 25) = v25 + 0x7FFFFFFF;
        v27 = (double)*((int *)v18 + 25) * 4.656612875245797e-10;
        v28 = v26 - *(float *)(&reinterpret_cast<G4Elf32Sym *>(stru_25C04)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
        v29 = v27 - *(float *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_25C04)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
        v23 = (double)v21 * 4.656612875245797e-10;
        v30 = v23 - *(float *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_25C14)->st_name + (uint32_t)(uintptr_t)(dword_20B9FF4));
        v31 = (float)((float)(v28 * v28) + (float)(v29 * v29)) + (float)(v30 * v30);
        if ( v31 != 0.0 )
        {
          v32 = 1.0 / fsqrt(v31);
          v33 = (float)((float)((float)(v31 * v32) * v32) + -3.0) * (float)(v32 * -0.5);
          v29 = v29 * v33;
          v28 = v28 * v33;
          v30 = v30 * v33;
        }
        v34 = *v16;
        v34[6] = v29;
        v34[7] = v28;
        v34[8] = v30;
      }
      else
      {
        if ( *(float *)(a1 + 28) == 0.0 && *(float *)(a1 + 32) == 0.0 && *(float *)(a1 + 36) == 0.0 )
        {
          v61 = 48271 * (*((uint32_t *)v18 + 25) % 44488) + 3399 * (*((uint32_t *)v18 + 25) / -44488);
          v62 = *(float *)(a1 + 24);
          *((uint32_t *)v18 + 25) = v61;
          if ( v61 < 0 )
            *((uint32_t *)v18 + 25) = v61 + 0x7FFFFFFF;
          v63 = (double)*((int *)v18 + 25) * 4.656612875245797e-10;
          v64 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
          *(float *)&v63 = v63;
          v65 = 48271 * (*(uint32_t *)(v64 + 100) % 44488) + 3399 * (*(uint32_t *)(v64 + 100) / -44488);
          v66 = (float)((float)(v62 + v62) * *(float *)&v63) - v62;
          v67 = *(float *)(a1 + 20);
          *(uint32_t *)(v64 + 100) = v65;
          if ( v65 < 0 )
          {
            v65 += 0x7FFFFFFF;
            *(uint32_t *)(v64 + 100) = v65;
          }
          v68 = (double)v65 * 4.656612875245797e-10;
          v69 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
          v70 = (float)(v67 + v67) * v68;
          v71 = 48271 * (*(uint32_t *)(v69 + 100) % 44488) + 3399 * (*(uint32_t *)(v69 + 100) / -44488);
          v72 = *(float *)(a1 + 16);
          *(uint32_t *)(v69 + 100) = v71;
          v73 = v70 - v67;
          if ( v71 < 0 )
          {
            v71 += 0x7FFFFFFF;
            *(uint32_t *)(v69 + 100) = v71;
          }
          v74 = (double)v71 * 4.656612875245797e-10;
          v75 = (float)((float)(v72 + v72) * v74) - v72;
        }
        else
        {
          glitch::collada::ps::CSmoothRandomGenerator::randVec(
            v109,
            (glitch::collada::ps::CSmoothRandomGenerator::Self *)(v18 + 108),
            0,
            (float *)(a1 + 28),
            LODWORD(v101),
            (float *)(a1 + 16));
          v75 = v109[0];
          v73 = v109[1];
          v66 = v109[2];
        }
        v76 = v75 + *(float *)(a1 + 4);
        v77 = v73 + *(float *)(a1 + 8);
        v78 = v66 + *(float *)(a1 + 12);
        if ( v102 != 0 )
        {
          v85 = *(float **)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 120);
          v104 = v85[8] * v78;
          v100 = (float)(*v85 * v76) + (float)(v85[4] * v77);
          v105 = v85[9] * v78;
          v86 = v85[10] * v78;
          v87 = v85[6] * v77;
          v77 = (float)((float)(v85[5] * v77) + (float)(v85[1] * v76)) + v105;
          v88 = v87 + (float)(v76 * v85[2]);
          v76 = v100 + v104;
          v78 = v88 + v86;
        }
        v79 = (float)((float)(v77 * v77) + (float)(v76 * v76)) + (float)(v78 * v78);
        if ( v79 != 0.0 )
        {
          v80 = 1.0 / fsqrt(v79);
          v81 = (float)((float)((float)(v79 * v80) * v80) + -3.0) * (float)(v80 * -0.5);
          v76 = v76 * v81;
          v77 = v77 * v81;
          v78 = v78 * v81;
        }
        v82 = *v16;
        v82[6] = v76;
        v82[7] = v77;
        v82[8] = v78;
      }
      v35 = *(float *)(a1 + 64);
      if ( v35 == 0.0 || v103 == 0.0 )
      {
        v36 = v17 + *(float *)(a1 + 40);
        v37 = *v16;
        v38 = (*v16)[7] * v36;
        v39 = (*v16)[8] * v36;
        v40 = v36 * (*v16)[6];
        v37[4] = v38;
        v37[5] = v39;
        v37[3] = v40;
      }
      else
      {
        v89 = v17 + *(float *)(a1 + 40);
        v90 = v35 * v103;
        v91 = *v16;
        v92 = (float)((*v16)[6] * v89) + (float)(v106 * v90);
        v93 = (float)((*v16)[7] * v89) + (float)(v107 * v90);
        v94 = (float)(v89 * (*v16)[8]) + (float)(v90 * v108);
        v91[3] = v92;
        v91[4] = v93;
        v91[5] = v94;
        v95 = (float)((float)(v93 * v93) + (float)(v92 * v92)) + (float)(v94 * v94);
        if ( v95 != 0.0 )
        {
          v96 = 1.0 / fsqrt(v95);
          v97 = (float)((float)((float)(v95 * v96) * v96) + -3.0) * (float)(v96 * -0.5);
          v92 = v92 * v97;
          v93 = v93 * v97;
          v94 = v94 * v97;
        }
        v98 = *v16;
        v98[6] = v92;
        v98[7] = v93;
        v98[8] = v94;
      }
      v41 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
      if ( *(uint8_t *)(v41 + 70) != 0 )
      {
        v42 = *v16;
        v42[3] = (*v16)[3] * *(float *)(v41 + 72);
        v42[4] = v42[4] * *(float *)(v41 + 76);
        v42[5] = v42[5] * *(float *)(v41 + 80);
      }
      (*v16)[39] = v11 + *(float *)(a1 + 72);
      v43 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
      v44 = 3399 * (*(uint32_t *)(v43 + 100) / -44488) + 48271 * (*(uint32_t *)(v43 + 100) % 44488);
      v45 = v44 + (v44 < 0 ? 0x7FFFFFFF : 0);
      v47 = (double)v45 * 4.656612875245797e-10;
      v46 = 48271 * (v45 % 44488) + 3399 * (v45 / -44488);
      v48 = v46 + (v46 < 0 ? 0x7FFFFFFF : 0);
      v49 = (double)v48 * 4.656612875245797e-10;
      v50 = 3399 * (v48 / -44488) + 48271 * (v48 % 44488);
      *(uint32_t *)(v43 + 100) = v50;
      v51 = v47;
      v52 = v49;
      if ( v50 < 0 )
      {
        v50 += 0x7FFFFFFF;
        *(uint32_t *)(v43 + 100) = v50;
      }
      v53 = *v16;
      v54 = (double)v50 * 4.656612875245797e-10;
      v55 = v54 - *(float *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_25C04)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
      v53[41] = v52 - *(float *)(&reinterpret_cast<G4Elf32Sym *>(stru_25C04)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
      v56 = v51 - *(float *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_25C14)->st_name + (uint32_t)(uintptr_t)(dword_20B9FF4));
      v53[40] = v55;
      v53[42] = v56;
      v57 = *v16;
      v58 = (*v16++)[4];
      v59 = (float)(v57[5] * v15) + v57[2];
      v60 = (float)(v57[3] * v15) + *v57;
      v57[1] = (float)(v58 * v15) + v57[1];
      v57[2] = v59;
      *v57 = v60;
      result = *(float **)(*(uint32_t *)a1 - 12);
      v10 = *(float *)((char *)result + a1 + 64);
      v15 = v15 + v10;
      if ( a3 == v16 )
        break;
      v9 = (char *)result + a1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemMotionModel::applySpeedScale  (binary VA: 0xd1a070)
// Original: glitch::collada::ps::CParticleSystemMotionModel::applySpeedScale
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemMotionModel::applySpeedScale(int *a1, int *a2, int *a3)
{
  int result;
  int *v4;
  int v5;
  int v6;
  int v7;
  float v8; // xmm0_4
  int v9;
  int v10;
  typedef float _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  typedef uint32_t _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v14)) > _g4_s3 ? (48u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  result = (int)(uintptr_t)(a1);
  v4 = a2;
  if ( a1[15] > 0 && (v5 = a1[14]) != 0 && (v6 = *a1, *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 84) != 0) )
  {
    v14[0] = 0;
    v14[1] = -8388609;
    v14[2] = 0;
    BYTE1(v14[3]) = 0;
    v7 = *(uint32_t *)(v6 - 12);
    v13[0] = v5;
    v12 = 0;
    v13[1] = *(uint32_t *)(*(uint32_t *)(*(int *)((char *)a1 + v7 + 84) + 32) + 16);
    v13[2] = (int)(uintptr_t)(v14);
    result = sub_CFF380(v13);
    v8 = (float)result;
    v11 = (float)result;
    if ( a3 != a2 )
    {
      while ( 1 )
      {
        v9 = *v4++;
        result = (*(int (**)(uint32_t, int *, uint32_t, int, int *, int))(**(uint32_t **)(v5 + 20) + 68))(
                   *(uint32_t *)(v5 + 20),
                   v13,
                   v8 * *(float *)(v9 + 84),
                   v9 + 36,
                   &v12,
                   1);
        if ( a3 == v4 )
          break;
        v5 = v13[0];
        v8 = v11;
      }
    }
  }
  else if ( a3 != a2 )
  {
    do
    {
      v10 = *v4++;
      *(uint32_t *)(v10 + 36) = a1[13];
    }
    while ( a3 != v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemMotionModel::applyPMotion  (binary VA: 0xd1a190)
// Original: glitch::collada::ps::CParticleSystemMotionModel::applyPMotion
// ----------------------------------------------------------------------------
float * glitch::collada::ps::CParticleSystemMotionModel::applyPMotion(float *a1, float **a2, float **a3)
{
  float *result;
  int v4;
  int v5;
  int v6;
  int v7;
  float **v8;
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float *v13;
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  int v18;
  float v19; // xmm0_4
  float *v20;
  float v21; // xmm2_4
  float v22;
  int v23;
  float v24; // xmm3_4
  int v25;
  double v26; // xmm1_8
  int v27;
  int v28;
  double v29; // xmm1_8
  double v30; // xmm2_8
  int v31;
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm3_4
  float *v41;
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float **v46;
  float v47; // xmm2_4
  float v48; // xmm0_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t _g4_t_v60[3];
  typedef float _g4_t_v61;
  typedef float _g4_t_v62[4];
  typedef uint32_t **_g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint32_t **_g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef uint32_t **_g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef uint32_t _g4_t_v72[3];
  typedef char _g4_t_v73;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v52)) > _g4_s0 ? (0u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v53)) > _g4_s1 ? (0u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v54)) > _g4_s2 ? (0u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v55)) > _g4_s3 ? (4u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v56)) > _g4_s4 ? (8u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v57)) > _g4_s5 ? (12u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v58)) > _g4_s6 ? (16u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v59)) > _g4_s7 ? (20u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v60)) > _g4_s8 ? (32u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v61)) > _g4_s9 ? (44u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v62)) > _g4_s10 ? (48u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v63)) > _g4_s11 ? (64u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v64)) > _g4_s12 ? (68u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v65)) > _g4_s13 ? (72u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v66)) > _g4_s14 ? (80u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v67)) > _g4_s15 ? (84u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v68)) > _g4_s16 ? (88u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v69)) > _g4_s17 ? (96u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v70)) > _g4_s18 ? (100u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v71)) > _g4_s19 ? (104u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v72)) > _g4_s20 ? (112u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (125u + sizeof(_g4_t_v73)) > _g4_s21 ? (125u + sizeof(_g4_t_v73)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 84u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 100u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 104u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 112u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 125u);

  if ( a1[26] == 0.0 && ((result = *((float **)a1 + 27)) == nullptr || (int)(uintptr_t)(result = *((float **)a1 + 28)) <= 0) )
  {
    if ( a2 != a3 )
    {
      v46 = a2;
      do
      {
        result = *v46;
        v47 = (*v46++)[4];
        v48 = *(float *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 60) * result[9];
        v49 = (float)(v47 * v48) + result[1];
        v50 = (float)(result[5] * v48) + result[2];
        v51 = (float)(v48 * result[3]) + *result;
        result[1] = v49;
        result[2] = v50;
        *result = v51;
      }
      while ( a3 != v46 );
    }
  }
  else
  {
    v4 = *(uint32_t *)a1;
    result = *(float **)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 84);
    if ( result != nullptr )
    {
      v72[0] = 0;
      v72[1] = -8388609;
      v72[2] = 0;
      v73 = 0;
      v5 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12) + 84) + 32) + 16);
      if ( *((uint32_t *)a1 + 21) != 0 )
      {
        v63 = *((uint32_t ***)a1 + 21);
        v52 = v4;
        v64 = v5;
        v65 = v72;
        v58 = sub_CFF380((int *)&v63);
        v4 = v52;
      }
      else
      {
        v63 = (uint32_t **)&g4_fnstatic_7e9f31557d;
        v64 = v5;
        v65 = v72;
        v58 = 0;
      }
      v6 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12) + 84) + 32) + 16);
      if ( *((uint32_t *)a1 + 24) != 0 )
      {
        v66 = *((uint32_t ***)a1 + 24);
        v53 = v4;
        v67 = v6;
        v68 = v72;
        v56 = sub_CFF380((int *)&v66);
        v4 = v53;
      }
      else
      {
        v67 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12) + 84) + 32) + 16);
        v66 = (uint32_t **)&g4_fnstatic_7e9f31557d;
        v68 = v72;
        v56 = 0;
      }
      v7 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12) + 84) + 32) + 16);
      if ( *((uint32_t *)a1 + 27) != 0 )
      {
        v69 = *((uint32_t ***)a1 + 27);
        v54 = v4;
        v70 = v7;
        v71 = v72;
        result = (float *)sub_CFF380((int *)&v69);
        v57 = (int)(uintptr_t)(result);
        v4 = v54;
      }
      else
      {
        result = (float *)&g4_fnstatic_7e9f31557d;
        v70 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)((char *)a1 + *(uint32_t *)(v4 - 12) + 84) + 32) + 16);
        v69 = (uint32_t **)&g4_fnstatic_7e9f31557d;
        v71 = v72;
        v57 = 0;
      }
      v60[0] = 0;
      if ( a2 != a3 )
      {
        v8 = a2;
        while ( 1 )
        {
          v13 = *v8;
          v14 = *(float *)((char *)a1 + *(uint32_t *)(v4 - 12) + 60) * (*v8)[9];
          v15 = (float)((*v8)[4] * v14) + (*v8)[1];
          v16 = (float)((*v8)[5] * v14) + (*v8)[2];
          v17 = (float)(v14 * (*v8)[3]) + **v8;
          v13[1] = v15;
          v13[2] = v16;
          *v13 = v17;
          v18 = *((uint32_t *)a1 + 22);
          v19 = a1[20];
          v61 = v19;
          if ( v18 > 0 && *((uint32_t *)a1 + 21) != 0 )
          {
            (*(void (**)(uint32_t *, uint32_t ***, uint32_t, float *, uint32_t *, int))(*v63[5] + 68))(
              v63[5],
              &v63,
              (float)v58 * (*v8)[21],
              &v61,
              v60,
              1);
            v19 = v61;
          }
          v20 = *v8;
          v21 = (*v8)[21];
          if ( v19 != 0.0 )
          {
            v22 = *a1;
            if ( COERCE_INT((float)((*v8)[22] * v21) / v19) != COERCE_INT(
                                                                 (float)((float)((*v8)[22] * v21)
                                                                       - *(float *)((char *)a1
                                                                                  + *(uint32_t *)(*(uint32_t *)a1 - 12)
                                                                                  + 60))
                                                               / v19) )
            {
              v23 = *((uint32_t *)a1 + 25);
              v24 = a1[23];
              v62[0] = v24;
              if ( v23 > 0 && *((uint32_t *)a1 + 24) != 0 )
              {
                (*(void (**)(uint32_t *, uint32_t ***, uint32_t, float *, uint32_t *, int))(*v66[5] + 68))(
                  v66[5],
                  &v66,
                  (float)v56 * v21,
                  v62,
                  v60,
                  1);
                v20 = *v8;
                v22 = *a1;
                v24 = v62[0];
              }
              v59 = (int)(uintptr_t)(a1) + *(uint32_t *)(LODWORD(v22) - 12);
              v55 = *(uint32_t *)(v59 + 100);
              v25 = 48271 * (v55 % 44488) + 3399 * (v55 / -44488) + 0x7FFFFFFF;
              if ( 48271 * (v55 % 44488) + 3399 * (v55 / -44488) >= 0 )
                v25 = 48271 * (v55 % 44488) + 3399 * (v55 / -44488);
              v26 = (double)v25;
              v27 = 48271 * (v25 % 44488) + 3399 * (v25 / -44488);
              v28 = v27 + 0x7FFFFFFF;
              v29 = v26 * 4.656612875245797e-10;
              if ( v27 >= 0 )
                v28 = v27;
              v30 = (double)v28 * 4.656612875245797e-10;
              v31 = 3399 * (v28 / -44488) + 48271 * (v28 % 44488);
              v32 = v29;
              v33 = v30;
              *(uint32_t *)(v59 + 100) = v31;
              if ( v31 < 0 )
              {
                v31 += 0x7FFFFFFF;
                *(uint32_t *)(v59 + 100) = v31;
              }
              v34 = (double)v31 * 4.656612875245797e-10;
              v35 = (float)((float)(v33 - *(float *)&dword_20DFC04) * v24) + v20[41];
              v36 = (float)((float)(v32 - *(float *)&dword_20DFC08) * v24) + v20[42];
              v37 = (float)((float)(v34 - *(float *)&dword_20DFC00) * v24) + v20[40];
              v38 = (float)((float)(v35 * v35) + (float)(v36 * v36)) + (float)(v37 * v37);
              if ( v38 != 0.0 )
              {
                v39 = 1.0 / fsqrt(v38);
                v40 = (float)((float)((float)(v38 * v39) * v39) + -3.0) * (float)(v39 * -0.5);
                v37 = v37 * v40;
                v35 = v35 * v40;
                v36 = v36 * v40;
              }
              v41 = *v8;
              v41[40] = v37;
              v41[41] = v35;
              v41[42] = v36;
              v20 = *v8;
            }
          }
          if ( *((int *)a1 + 28) > 0 && *((uint32_t *)a1 + 27) != 0 )
          {
            (*(void (**)(uint32_t *, uint32_t ***, uint32_t, float *, uint32_t *, int))(*v69[5] + 68))(
              v69[5],
              &v69,
              (float)v57 * v20[21],
              v62,
              v60,
              1);
            result = *v8++;
            v9 = (float)(v62[0] * *(float *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 60)) * result[39];
            v10 = (float)(result[41] * v9) + result[1];
            v11 = (float)(result[42] * v9) + result[2];
            v12 = (float)(v9 * result[40]) + *result;
            result[1] = v10;
            result[2] = v11;
            *result = v12;
            if ( a3 == v8 )
              return result;
          }
          else
          {
            ++v8;
            result = *(float **)(*(uint32_t *)a1 - 12);
            v42 = (float)(a1[26] * *(float *)((char *)result + (uint32_t)(uintptr_t)(a1) + 60)) * v20[39];
            v43 = (float)(v20[41] * v42) + v20[1];
            v44 = (float)(v20[42] * v42) + v20[2];
            v45 = (float)(v42 * v20[40]) + *v20;
            v20[1] = v43;
            v20[2] = v44;
            *v20 = v45;
            if ( a3 == v8 )
              return result;
          }
          v4 = *(uint32_t *)a1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemMotionModel::getParameterImpl  (binary VA: 0xd1a850)
// Original: glitch::collada::ps::CParticleSystemMotionModel::getParameterImpl
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemMotionModel::getParameterImpl(int a1, int a2)
{
  int result;

  switch ( a2 )
  {
    case ')':
      result = a1 + 4;
      break;
    case '*':
      result = a1 + 16;
      break;
    case '+':
      result = a1 + 28;
      break;
    case ',':
      result = a1 + 40;
      break;
    case '-':
      result = a1 + 44;
      break;
    case '.':
      result = a1 + 48;
      break;
    case '/':
      result = a1 + 52;
      break;
    case '0':
      result = a1 + 56;
      break;
    case '1':
      result = a1 + 60;
      break;
    case '2':
      result = a1 + 64;
      break;
    case '3':
      result = a1 + 68;
      break;
    case 'G':
      result = a1 + 72;
      break;
    case 'H':
      result = a1 + 76;
      break;
    case 'I':
      result = a1 + 104;
      break;
    case 'J':
      result = a1 + 108;
      break;
    case 'K':
      result = a1 + 112;
      break;
    case 'L':
      result = a1 + 80;
      break;
    case 'M':
      result = a1 + 84;
      break;
    case 'N':
      result = a1 + 88;
      break;
    case 'O':
      result = a1 + 92;
      break;
    case 'P':
      result = a1 + 96;
      break;
    case 'Q':
      result = a1 + 100;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}



// ============================================================================
// Address:   0xd1a930 (size: 268 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemRenderDataModelC2Ev
// Demangled: glitch::collada::ps::CParticleSystemRenderDataModel::CParticleSystemRenderDataModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemRenderDataModel::Self *glitch::collada::ps::CParticleSystemRenderDataModel::Construct(
        glitch::collada::ps::CParticleSystemRenderDataModel::Self *self,
        int *a2)
{
  int v3;

  v3 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = a2[1];
  *((uint32_t *)self + 22) = 2139095039;
  *((uint32_t *)self + 23) = 2139095039;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint16_t *)self + 20) = 255;
  *((uint16_t *)self + 21) = 6;
  *((uint8_t *)self + 44) = 0;
  *((uint8_t *)self + 45) = 0;
  *((uint32_t *)self + 12) = -1;
  *((uint32_t *)self + 13) = -1;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = -1;
  *((uint8_t *)self + 64) = 0;
  *((uint32_t *)self + 17) = 2;
  *((uint32_t *)self + 18) = 2;
  *((uint8_t *)self + 76) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 24) = 2139095039;
  *((uint32_t *)self + 25) = -8388609;
  *((uint32_t *)self + 26) = -8388609;
  *((uint32_t *)self + 27) = -8388609;
  *((uint32_t *)self + 28) = 1602224127;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 1602224127;
  *((uint32_t *)self + 32) = 1602224127;
  *((uint32_t *)self + 33) = 1;
  *((uint32_t *)self + 34) = 10;
  *((uint8_t *)self + 140) = 0;
  *((uint8_t *)self + 141) = 1;
  *((uint32_t *)self + 36) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemRenderDataModel::Construct  (binary VA: 0xd1aa40)
// Original: glitch::collada::ps::CParticleSystemRenderDataModel::CParticleSystemRenderDataModel
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemRenderDataModel::Construct(glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  glitch::collada::ps::IParticleContext::Construct((glitch::collada::ps::CParticleSystemRenderDataModel::Self *)((char *)self + 148));
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 37) = ((uint32_t)(uintptr_t)&off_20705E8);
  *((uint32_t *)self + 22) = 2139095039;
  *((uint32_t *)self + 23) = 2139095039;
  *((uint32_t *)self + 24) = 2139095039;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20705CC);
  *((uint32_t *)self + 25) = -8388609;
  *((uint32_t *)self + 26) = -8388609;
  *((uint32_t *)self + 27) = -8388609;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint16_t *)self + 20) = 255;
  *((uint16_t *)self + 21) = 6;
  *((uint8_t *)self + 44) = 0;
  *((uint8_t *)self + 45) = 0;
  *((uint32_t *)self + 12) = -1;
  *((uint32_t *)self + 13) = -1;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = -1;
  *((uint8_t *)self + 64) = 0;
  *((uint32_t *)self + 17) = 2;
  *((uint32_t *)self + 18) = 2;
  *((uint8_t *)self + 76) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 28) = 1602224127;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 1602224127;
  *((uint32_t *)self + 32) = 1602224127;
  *((uint32_t *)self + 33) = 1;
  *((uint32_t *)self + 34) = 10;
  *((uint8_t *)self + 140) = 0;
  *((uint8_t *)self + 141) = 1;
  *((uint32_t *)self + 36) = 0;
  return 1602224127;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemRenderDataModel::Destroy  (binary VA: 0xd1ab80)
// Original: glitch::collada::ps::CParticleSystemRenderDataModel::~CParticleSystemRenderDataModel
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemRenderDataModel::Destroy(glitch::collada::ps::CParticleSystemRenderDataModel::Self *self, int *a2)
{
  int v2;
  int v3;
  int v4;
  glitch::video::CVertexStreams::Self *v5;
  glitch::video::CMaterial::Self *v6;
  bool v7;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[1];
  if ( *((uint8_t *)self + 44) == 0 && *((uint32_t *)self + 4) != 0 && *((uint8_t *)self + 45) == 0 )
    (*(void (**)(uint32_t, int, char *, uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 36) + 192))(
      *((uint32_t *)self + 36),
      1,
      (char *)self + 16,
      0,
      *((uint32_t *)self + 21),
      *((uint32_t *)self + 20));
  v3 = *((uint32_t *)self + 20);
  if ( v3 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v3 + 4))(*((uint32_t *)self + 20));
  if ( *((uint32_t *)self + 14) != 0 )
  {
    glitch::collada::ps::CParticleSystemBatchingManager::releaseBatch();
    (*(void (**)(uint32_t))(**((uint32_t **)self + 36) + 168))(*((uint32_t *)self + 36));
  }
  v4 = *((uint32_t *)self + 3);
  if ( v4 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v4 + 4))(*((uint32_t *)self + 3));
    *((uint32_t *)self + 3) = 0;
  }
  if ( *((uint32_t *)self + 5) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 5));
  v5 = *((glitch::video::CVertexStreams::Self **)self + 4);
  if ( v5 != nullptr && __sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v5);
    gll_operator_delete_arr((int)(uintptr_t)(v5));
  }
  v6 = *((glitch::video::CMaterial::Self **)self + 2);
  if ( v6 != nullptr )
  {
    v7 = *(uint32_t *)v6 == 2;
    _mm_mfence();
    if ( v7 )
      glitch::video::CMaterial::removeFromRootSceneNode(v6);
    if ( __sync_fetch_and_add((volatile int32_t *)v6, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v6);
      gll_operator_delete_arr((int)(uintptr_t)(v6));
    }
  }
  if ( *((uint32_t *)self + 1) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 1));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemRenderDataModel::resetRenderDataModel  (binary VA: 0xd1acd0)
// Original: glitch::collada::ps::CParticleSystemRenderDataModel::resetRenderDataModel
// ----------------------------------------------------------------------------
glitch::collada::ps::CParticleSystemRenderDataModel::Self * glitch::collada::ps::CParticleSystemRenderDataModel::resetRenderDataModel(glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  *((uint32_t *)self + 15) = -1;
  *((uint8_t *)self + 64) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemRenderDataModel::getBuffer  (binary VA: 0xd1acf0)
// Original: glitch::collada::ps::CParticleSystemRenderDataModel::getBuffer
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemRenderDataModel::getBuffer(glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  int result;
  int (*v2)(uint32_t, uint32_t, uint32_t, int, int, volatile int32_t **, uint32_t);
  int v3;
  glitch::video::CVertexStreams::Self *v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef volatile int32_t *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  result = 4;
  if ( *((uint32_t *)self + 20) == 0 && *((uint8_t *)self + 45) == 0 )
  {
    v2 = *(int (**)(uint32_t, uint32_t, uint32_t, int, int, volatile int32_t **, uint32_t))(**((uint32_t **)self + 36)
                                                                                                 + 184);
    v7 = *((volatile int32_t **)self + 4);
    if ( v7 != nullptr )
      sub_8B1B00(v7);
    v5 = *((uint32_t *)self + 21);
    v3 = (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 24))(*((uint32_t *)self + 3));
    result = v2(
               *((uint32_t *)self + 36),
               0,
               0,
               ((*(uint32_t *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12) + 40)
               - *(uint32_t *)((char *)self + *(uint32_t *)(*(uint32_t *)self - 12) + 36)) >> 2)
             * v3,
               v5,
               &v7,
               0);
    v4 = (glitch::video::CVertexStreams::Self *)v7;
    if ( v7 != nullptr && __sync_fetch_and_add(v7, 0xFFFFFFFF) == 1 )
    {
      v6 = result;
      glitch::video::CVertexStreams::Destroy(v4);
      gll_operator_delete_arr((int)(uintptr_t)(v4));
      return v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemRenderDataModel::releaseBuffer  (binary VA: 0xd1ae00)
// Original: glitch::collada::ps::CParticleSystemRenderDataModel::releaseBuffer
// ----------------------------------------------------------------------------
void glitch::collada::ps::CParticleSystemRenderDataModel::releaseBuffer(glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  int v1;
  int v2;
  void (*v3)(int, uint32_t, volatile int32_t **, int, uint32_t);
  glitch::video::CVertexStreams::Self *v4;
  typedef int _g4_t_v5;
  typedef volatile int32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  if ( *((uint32_t *)self + 20) == 0 && *((uint8_t *)self + 45) == 0 )
  {
    v1 = *((uint32_t *)self + 36);
    v2 = *((uint32_t *)self + 21);
    v3 = *(void (**)(int, uint32_t, volatile int32_t **, int, uint32_t))(*(uint32_t *)v1 + 188);
    v6 = *((volatile int32_t **)self + 4);
    if ( v6 != nullptr )
    {
      v5 = v2;
      sub_8B1B00(v6);
      v1 = *((uint32_t *)self + 36);
      v2 = v5;
    }
    v3(v1, 0, &v6, v2, 0);
    v4 = (glitch::video::CVertexStreams::Self *)v6;
    if ( v6 != nullptr && __sync_fetch_and_add(v6, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CVertexStreams::Destroy(v4);
      gll_operator_delete_arr((int)(uintptr_t)(v4));
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemRenderDataModel::updateRenderData  (binary VA: 0xd1aed0)
// Original: glitch::collada::ps::CParticleSystemRenderDataModel::updateRenderData
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemRenderDataModel::updateRenderData(glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  glitch::video::CVertexStreams::Self *v1;
  int NormalStreamMap;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int16_t v12;
  int v13;
  typedef int _g4_t_ColorStreamMap;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int (*_g4_t_v18)(uint32_t, int, int, glitch::video::CVertexStreams::Self *, char *, unsigned int, int, unsigned int, int, int);
  typedef char *_g4_t_IndexStreams;
  typedef unsigned int _g4_t_v20;
  typedef int (*_g4_t_v21)(uint32_t, int, int, int, char *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
  typedef unsigned int _g4_t_TexCoordStreamMap;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_PositionStreamMap;
  typedef int _g4_t_IndexStreamMap;
  typedef int _g4_t_v26;
  typedef glitch::video::CVertexStreams::Self *_g4_t_v27;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_ColorStreamMap)) > _g4_s0 ? (8u + sizeof(_g4_t_ColorStreamMap)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v17)) > _g4_s3 ? (8u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v18)) > _g4_s4 ? (12u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_IndexStreams)) > _g4_s5 ? (12u + sizeof(_g4_t_IndexStreams)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v20)) > _g4_s6 ? (16u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v21)) > _g4_s7 ? (16u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_TexCoordStreamMap)) > _g4_s8 ? (20u + sizeof(_g4_t_TexCoordStreamMap)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v23)) > _g4_s9 ? (20u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_PositionStreamMap)) > _g4_s10 ? (24u + sizeof(_g4_t_PositionStreamMap)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_IndexStreamMap)) > _g4_s11 ? (24u + sizeof(_g4_t_IndexStreamMap)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v26)) > _g4_s12 ? (28u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v27)) > _g4_s13 ? (44u + sizeof(_g4_t_v27)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_ColorStreamMap &ColorStreamMap = *reinterpret_cast<_g4_t_ColorStreamMap *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_IndexStreams &IndexStreams = *reinterpret_cast<_g4_t_IndexStreams *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_TexCoordStreamMap &TexCoordStreamMap = *reinterpret_cast<_g4_t_TexCoordStreamMap *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_PositionStreamMap &PositionStreamMap = *reinterpret_cast<_g4_t_PositionStreamMap *>(_g4_sf + 24u);
  _g4_t_IndexStreamMap &IndexStreamMap = *reinterpret_cast<_g4_t_IndexStreamMap *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);

  if ( *((uint32_t *)self + 3) == 0 )
    return 0;
  if ( *((uint8_t *)self + 45) == 0 )
  {
    glitch::video::CVertexStreams::updateStates(*((glitch::video::CVertexStreams::Self **)self + 4), false);
    v6 = *((uint32_t *)self + 1);
    v21 = *(int (**)(uint32_t, int, int, int, char *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 3) + 16);
    v15 = *((uint32_t *)self + 4);
    v7 = G4_VCALL<int>((char *)self + *(uint32_t *)(*(uint32_t *)self - 12), 12);
    v8 = v21(*((uint32_t *)self + 3), v7, v6, v15, (char *)self + 8, 0, 0, 0, 0, 0);
    if ( v8 != 0 )
    {
      v9 = v8 * (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 24))(*((uint32_t *)self + 3));
      *(uint32_t *)(*((uint32_t *)self + 4) + 8) = v9;
      v10 = (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 28))(*((uint32_t *)self + 3));
      *((uint32_t *)self + 9) = v9;
      *((uint32_t *)self + 7) = v8 * v10;
      *((uint32_t *)self + 6) = 0;
      *((uint32_t *)self + 8) = 0;
      return 1;
    }
    return 0;
  }
  if ( glitch::collada::ps::CParticleSystemBatchingManager::getPSRenderedCount(
         *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
         *((uint32_t *)self + 12),
         *((uint32_t *)self + 13)) == 0 )
    glitch::collada::ps::CParticleSystemBatchingManager::mapAllStreams(
      *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
      *((uint32_t *)self + 12),
      1);
  glitch::collada::ps::CParticleSystemBatchingManager::getVertexStreams(
    (glitch::collada::ps::CParticleSystemBatchingManager::Self *)&v27,
    *((uint32_t *)self + 14),
    *((uint32_t *)self + 12));
  v1 = v27;
  if ( v27 != nullptr && __sync_fetch_and_add((volatile int32_t *)v27, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v1);
    gll_operator_delete_arr((int)(uintptr_t)(v1));
  }
  v20 = *((uint32_t *)v1 + 2);
  v18 = *(int (**)(uint32_t, int, int, glitch::video::CVertexStreams::Self *, char *, unsigned int, int, unsigned int, int, int))(**((uint32_t **)self + 3) + 16);
  NormalStreamMap = glitch::collada::ps::CParticleSystemBatchingManager::getNormalStreamMap(
                      *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
                      *((uint32_t *)self + 12));
  ColorStreamMap = glitch::collada::ps::CParticleSystemBatchingManager::getColorStreamMap(
                     *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
                     *((uint32_t *)self + 12));
  TexCoordStreamMap = glitch::collada::ps::CParticleSystemBatchingManager::getTexCoordStreamMap(
                        *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
                        *((uint32_t *)self + 12));
  PositionStreamMap = glitch::collada::ps::CParticleSystemBatchingManager::getPositionStreamMap(
                        *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
                        *((uint32_t *)self + 12));
  v26 = *((uint32_t *)self + 1);
  v3 = G4_VCALL<int>((char *)self + *(uint32_t *)(*(uint32_t *)self - 12), 12);
  v4 = v18(
         *((uint32_t *)self + 3),
         v3,
         v26,
         v1,
         (char *)self + 8,
         v20,
         PositionStreamMap,
         TexCoordStreamMap,
         ColorStreamMap,
         NormalStreamMap);
  if ( v4 == 0 )
    return 0;
  v16 = v4;
  IndexStreams = glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreams(
                   *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
                   *((uint32_t *)self + 12));
  v23 = *((uint32_t *)IndexStreams + 2);
  IndexStreamMap = glitch::collada::ps::CParticleSystemBatchingManager::getIndexStreamMap(
                     *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
                     *((uint32_t *)self + 12));
  v11 = (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 28))(*((uint32_t *)self + 3));
  v12 = (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 24))(*((uint32_t *)self + 3));
  glitch::collada::ps::IParticleSystemBaker::fillIndexBuffer(
    *((uint32_t *)self + 3),
    (glitch::video::IBuffer::Self **)IndexStreams,
    (uint16_t *)v16,
    v12,
    v11,
    v20,
    v23,
    IndexStreamMap);
  v13 = v16 * (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 24))(*((uint32_t *)self + 3));
  v17 = v16 * (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 28))(*((uint32_t *)self + 3));
  glitch::collada::ps::CParticleSystemBatchingManager::updateVertexCount(
    *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
    *((uint32_t *)self + 12),
    v20,
    v23);
  *((uint32_t *)v1 + 2) = v20 + v13;
  *((uint32_t *)IndexStreams + 2) = v23 + v17;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemRenderDataModel::registerForRendering  (binary VA: 0xd1b240)
// Original: glitch::collada::ps::CParticleSystemRenderDataModel::registerForRendering
// ----------------------------------------------------------------------------
unsigned int glitch::collada::ps::CParticleSystemRenderDataModel::registerForRendering(glitch::collada::ps::CParticleSystemRenderDataModel::Self *self, bool a2)
{
  *((uint8_t *)self + 64) = a2;
  return glitch::collada::ps::CParticleSystemBatchingManager::registerForRendering(
           *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
           *((uint32_t *)self + 12),
           *((uint32_t *)self + 13),
           (glitch::video::CMaterialRenderer::Self ***)self + 2,
           (uint32_t *)self + 15,
           (uint8_t *)self + 64);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemRenderDataModel::flushRendering  (binary VA: 0xd1b2a0)
// Original: glitch::collada::ps::CParticleSystemRenderDataModel::flushRendering
// ----------------------------------------------------------------------------
glitch::collada::ps::CParticleSystemBatcher * glitch::collada::ps::CParticleSystemRenderDataModel::flushRendering(glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  if ( *((uint32_t *)self + 15) != -1 )
  {
    glitch::collada::ps::CParticleSystemBatchingManager::flushRendering(
      *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
      *((uint32_t *)self + 15));
    *((uint32_t *)self + 15) = -1;
  }
  if ( *((uint8_t *)self + 64) != 0 )
  {
    glitch::collada::ps::CParticleSystemBatchingManager::flushRendering(
      *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
      *((uint32_t *)self + 12));
    *((uint8_t *)self + 64) = 0;
  }
  glitch::collada::ps::CParticleSystemBatchingManager::incrPSRenderedCount(
    *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
    *((uint32_t *)self + 12),
    *((uint32_t *)self + 13));
  return glitch::collada::ps::CParticleSystemBatchingManager::clearRendering(
           *((glitch::collada::ps::CParticleSystemBatchingManager::Self **)self + 14),
           *((uint32_t *)self + 12),
           *((uint32_t *)self + 13));
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemRenderDataModel::updateBatchIndex  (binary VA: 0xd1b340)
// Original: glitch::collada::ps::CParticleSystemRenderDataModel::updateBatchIndex
// ----------------------------------------------------------------------------
glitch::collada::ps::CParticleSystemRenderDataModel::Self * glitch::collada::ps::CParticleSystemRenderDataModel::updateBatchIndex(glitch::collada::ps::CParticleSystemRenderDataModel::Self *self, unsigned int a2)
{
  glitch::collada::ps::CParticleSystemRenderDataModel::Self *result;
  unsigned int v3;

  result = self;
  if ( *((uint8_t *)self + 45) != 0 )
  {
    v3 = *((uint32_t *)self + 12);
    if ( v3 != -1 && a2 < v3 )
      *((uint32_t *)self + 12) = v3 - 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::ps::CParticleSystemManager::updateBatchIndex  (binary VA: 0xd1b370)
// Original: glitch::collada::ps::CParticleSystemManager::updateBatchIndex
// ----------------------------------------------------------------------------
int glitch::collada::ps::CParticleSystemManager::updateBatchIndex(pthread_mutex_t **self, unsigned int a2)
{
  pthread_mutex_t **i;

  glf::Mutex::Lock(self + 12);
  for ( i = (pthread_mutex_t **)*(self + 2); i != self + 2; i = (pthread_mutex_t **)*i )
    glitch::collada::ps::CParticleSystemRenderDataModel::updateBatchIndex(
      (glitch::collada::ps::CParticleSystemRenderDataModel::Self *)((long *)&i[2][19] + 3),
      a2);
  return glf::Mutex::Unlock(self + 12);
}



// ============================================================================
// Address:   0xd1b3e0 (size: 326 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemRenderDataModel10deallocateEv
// Demangled: glitch::collada::ps::CParticleSystemRenderDataModel::deallocate(void)
// ============================================================================
int glitch::collada::ps::CParticleSystemRenderDataModel::deallocate(
        glitch::collada::ps::CParticleSystemRenderDataModel::Self *self)
{
  int result;
  unsigned int v2;
  glitch::collada::ps::CParticleSystem::Self *v3;
  unsigned int v4;
  int v5;
  unsigned int v6;

  if ( *((uint8_t *)self + 44) == 0 && *((uint32_t *)self + 4) != 0 && *((uint8_t *)self + 45) == 0 )
    (*(void (**)(uint32_t, int, char *, uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 36) + 192))(
      *((uint32_t *)self + 36),
      1,
      (char *)self + 16,
      0,
      *((uint32_t *)self + 21),
      *((uint32_t *)self + 20));
  result = *((uint32_t *)self + 20);
  if ( result != 0 )
  {
    result = (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*((uint32_t *)self + 20));
    *((uint32_t *)self + 20) = 0;
  }
  if ( *((uint8_t *)self + 45) != 0 )
  {
    v2 = *((uint32_t *)self + 12);
    if ( v2 != -1 )
    {
      v3 = (glitch::collada::ps::CParticleSystem::Self *)(*(int (**)(char *))(*(uint32_t *)((char *)self
                                                                                          + *(uint32_t *)(*(uint32_t *)self - 12))
                                                                              + 12))((char *)self + *(uint32_t *)(*(uint32_t *)self - 12));
      result = glitch::collada::ps::CParticleSystemBatchingManager::unregisterParticleSystem(
                 *((pthread_mutex_t ***)self + 14),
                 v3,
                 v2);
      if ( (uint8_t)result != 0 )
      {
        v4 = *((uint32_t *)self + 12);
        if ( LOBYTE(g4_guard_2f7f3188ff[0]) == 0 )
        {
          v6 = *((uint32_t *)self + 12);
          v5 = _cxa_guard_acquire(g4_guard_2f7f3188ff);
          v4 = v6;
          if ( v5 != 0 )
          {
            glitch::collada::ps::CParticleSystemManager::Construct((glitch::collada::ps::CParticleSystemManager::Self *)&g4_fnstatic_aa14cdda2c);
            _cxa_guard_release(g4_guard_2f7f3188ff);
            __cxa_atexit(
              (void (*)(void *))g4_noop_dtor,
              &g4_fnstatic_aa14cdda2c,
              &unk_20D1280);
            v4 = v6;
          }
        }
        result = glitch::collada::ps::CParticleSystemManager::updateBatchIndex(
                   (pthread_mutex_t **)&g4_fnstatic_aa14cdda2c,
                   v4);
      }
      *((uint32_t *)self + 12) = -1;
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd1b530 (size: 174 bytes)
// Symbol:    _ZN6glitch7collada2ps30CParticleSystemRenderDataModel16getParameterImplE27E_PARTICLE_SYSTEM_PARAMETER
// Demangled: glitch::collada::ps::CParticleSystemRenderDataModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// ============================================================================
int glitch::collada::ps::CParticleSystemRenderDataModel::getParameterImpl(int a1, int a2)
{
  int result;

  switch ( a2 )
  {
    case 2:
      result = a1 + 132;
      break;
    case 4:
      result = a1 + 141;
      break;
    case 82:
      result = a1 + 4;
      break;
    case 83:
      result = a1 + 8;
      break;
    case 84:
      result = a1 + 88;
      break;
    case 85:
      result = a1 + 44;
      break;
    case 86:
      result = a1 + 45;
      break;
    case 87:
      result = a1 + 68;
      break;
    case 88:
      result = a1 + 84;
      break;
    case 89:
      result = a1 + 12;
      break;
    case 90:
      result = a1 + 116;
      break;
    case 91:
      result = a1 + 120;
      break;
    case 92:
      result = a1 + 124;
      break;
    case 93:
      result = a1 + 128;
      break;
    case 102:
      result = a1 + 140;
      break;
    case 103:
      result = a1 + 136;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// ============================================================================
// Address:   0xd1b5e0 (size: 95 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModelC2Ev
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::CParticleSystemSizeModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemSizeModel::Self *glitch::collada::ps::CParticleSystemSizeModel::Construct(
        glitch::collada::ps::CParticleSystemSizeModel::Self *self,
        int *a2)
{
  int v3;

  v3 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = a2[1];
  *((uint32_t *)self + 1) = 1065353216;
  *((uint32_t *)self + 2) = 1065353216;
  *((uint32_t *)self + 3) = 1065353216;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 1065353216;
  *((uint32_t *)self + 12) = 1065353216;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 1;
  *((uint32_t *)self + 16) = 0;
  return self;
}


// ============================================================================
// Address:   0xd1b640 (size: 127 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModelC1Ev
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::CParticleSystemSizeModel(void)
// ============================================================================
int glitch::collada::ps::CParticleSystemSizeModel::Construct(
        glitch::collada::ps::CParticleSystemSizeModel::Self *self)
{
  glitch::collada::ps::IParticleContext::Construct((glitch::collada::ps::CParticleSystemSizeModel::Self *)((char *)self + 68));
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 1;
  *((uint32_t *)self + 16) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207060C);
  *((uint32_t *)self + 17) = ((uint32_t)(uintptr_t)&off_2070628);
  *((uint32_t *)self + 1) = 1065353216;
  *((uint32_t *)self + 2) = 1065353216;
  *((uint32_t *)self + 3) = 1065353216;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 11) = 1065353216;
  *((uint32_t *)self + 12) = 1065353216;
  *((uint32_t *)self + 13) = 1065353216;
  return 1065353216;
}


// ============================================================================
// Address:   0xd1b6c0 (size: 22 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModelD2Ev
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemSizeModel::Destroy(
        glitch::collada::ps::CParticleSystemSizeModel::Self *self,
        int *a2)
{
  int v2;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[1];
}


// ============================================================================
// Address:   0xd1b6e0 (size: 9 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModel14initPSizeModelEv
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::initPSizeModel(void)
// ============================================================================
void glitch::collada::ps::CParticleSystemSizeModel::initPSizeModel()
{
  ;
}


// ============================================================================
// Address:   0xd1b6f0 (size: 9 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModel15resetPSizeModelEv
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::resetPSizeModel(void)
// ============================================================================
void glitch::collada::ps::CParticleSystemSizeModel::resetPSizeModel()
{
  ;
}


// ============================================================================
// Address:   0xd1b700 (size: 1766 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModel9initPSizeEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::initPSize(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
float *glitch::collada::ps::CParticleSystemSizeModel::initPSize(int a1, float **a2, float **a3)
{
  float **v3;
  float *result;
  int v5;
  float v6; // xmm4_4
  float v7; // xmm0_4
  int v8;
  float v9; // xmm2_4
  float *v10;
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  int v16;
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm3_4
  float *v20;
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float *v26;
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  int v30;
  double v31; // xmm7_8
  int v32;
  float v33; // xmm7_4
  double v34; // xmm6_8
  int v35;
  float v36; // xmm6_4
  float v37; // xmm5_4
  float *v38;
  float v39; // xmm2_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  int v42;
  float v43; // xmm0_4
  float v44; // xmm3_4
  float v45; // xmm3_4
  float *v46;
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm3_4
  float v50; // xmm3_4
  float v51; // xmm0_4
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  unsigned int v57;
  float v58;
  float v59;

  v3 = a2;
  result = *(float **)(a1 + 40);
  v5 = *(uint32_t *)(*(uint32_t *)a1 - 12) + a1;
  v59 = *(float *)(v5 + 52) - *(float *)(v5 + 60);
  if ( result == nullptr )
  {
    if ( a3 == a2 )
      return result;
    if ( *(float *)(a1 + 28) == 0.0 )
      goto LABEL_22;
LABEL_42:
    v29 = *(float *)(a1 + 36);
LABEL_43:
    v59 = v59 + *(float *)(v5 + 64);
    v53 = glitch::collada::ps::CSmoothRandomGenerator::rand(
            (glitch::collada::ps::CSmoothRandomGenerator::Self *)(v5 + 108),
            5u,
            v29,
            LODWORD(v59));
    v56 = v53;
    v54 = glitch::collada::ps::CSmoothRandomGenerator::rand(
            (glitch::collada::ps::CSmoothRandomGenerator::Self *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 108),
            4u,
            *(float *)(a1 + 32),
            LODWORD(v59));
    v58 = v54;
    v55 = glitch::collada::ps::CSmoothRandomGenerator::rand(
            (glitch::collada::ps::CSmoothRandomGenerator::Self *)(a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 108),
            3u,
            *(float *)(a1 + 28),
            LODWORD(v59));
    v37 = v55;
    v36 = v58;
    v33 = v56;
    while ( 1 )
    {
      v38 = *v3;
      v39 = *(float *)(a1 + 16);
      v40 = (float)(*(float *)(a1 + 12) - *(float *)(a1 + 24))
          + (float)((float)(*(float *)(a1 + 24) + *(float *)(a1 + 24)) * v33);
      v41 = *(float *)(a1 + 4) - v39;
      v38[27] = (float)(*(float *)(a1 + 8) - *(float *)(a1 + 20))
              + (float)((float)(*(float *)(a1 + 20) + *(float *)(a1 + 20)) * v36);
      v38[28] = v40;
      v38[26] = v41 + (float)((float)(v39 + v39) * v37);
      v42 = a1 + *(uint32_t *)(*(uint32_t *)a1 - 12);
      if ( *(uint8_t *)(v42 + 69) == 0 )
        goto LABEL_38;
      v43 = *(float *)(v42 + 72);
      if ( v43 < -0.001f )
        break;
      if ( v43 > 0.001f )
        break;
      v44 = *(float *)(v42 + 76);
      if ( v44 < -0.001f )
        break;
      if ( v44 > 0.001f )
        break;
      v45 = *(float *)(v42 + 80);
      if ( v45 < -0.001f || v45 > 0.001f )
        break;
      result = *v3;
      v47 = (*v3)[26];
      if ( v47 < -0.001f )
      {
LABEL_39:
        v48 = result[27];
        v49 = result[28];
        goto LABEL_40;
      }
LABEL_55:
      v48 = result[27];
      if ( v47 > 0.001f || v48 < -0.001f )
        goto LABEL_61;
      v49 = result[28];
      if ( v48 <= 0.001f && v49 >= -0.001f && v49 <= 0.001f )
      {
        result[26] = 1.0;
        result[27] = 1.0;
        result[28] = 1.0;
        result = *v3;
        v47 = (*v3)[26];
        v48 = (*v3)[27];
LABEL_61:
        v49 = result[28];
      }
LABEL_40:
      ++v3;
      v50 = v49 * *(float *)(a1 + 52);
      v51 = v47 * *(float *)(a1 + 44);
      result[24] = v48 * *(float *)(a1 + 48);
      result[25] = v50;
      result[23] = v51;
      if ( a3 == v3 )
        return result;
      v5 = a1 + *(uint32_t *)(*(uint32_t *)a1 - 12);
      if ( *(float *)(a1 + 28) != 0.0 )
        goto LABEL_42;
LABEL_22:
      v29 = *(float *)(a1 + 36);
      if ( *(float *)(a1 + 32) != 0.0 || v29 != 0.0 )
        goto LABEL_43;
      v30 = 3399 * (*(uint32_t *)(v5 + 100) / -44488) + 48271 * (*(uint32_t *)(v5 + 100) % 44488);
      *(uint32_t *)(v5 + 100) = v30;
      if ( v30 < 0 )
      {
        v30 += 0x7FFFFFFF;
        *(uint32_t *)(v5 + 100) = v30;
      }
      v31 = (double)v30 * 4.656612875245797e-10;
      v32 = 3399 * (v30 / -44488) + 48271 * (v30 % 44488);
      *(uint32_t *)(v5 + 100) = v32;
      v33 = v31;
      if ( v32 < 0 )
      {
        v32 += 0x7FFFFFFF;
        *(uint32_t *)(v5 + 100) = v32;
      }
      v34 = (double)v32 * 4.656612875245797e-10;
      v35 = 3399 * (v32 / -44488) + 48271 * (v32 % 44488);
      *(uint32_t *)(v5 + 100) = v35;
      v36 = v34;
      if ( v35 < 0 )
        *(uint32_t *)(v5 + 100) = v35 + 0x7FFFFFFF;
      v37 = (double)*(int *)(v5 + 100) * 4.656612875245797e-10;
    }
    v46 = *v3;
    v46[26] = v43 * (*v3)[26];
    v46[27] = v46[27] * *(float *)(v42 + 76);
    v46[28] = v46[28] * *(float *)(v42 + 80);
LABEL_38:
    result = *v3;
    v47 = (*v3)[26];
    if ( v47 < -0.001f )
      goto LABEL_39;
    goto LABEL_55;
  }
  if ( a3 != a2 )
  {
    v6 = *(float *)(v5 + 52) - *(float *)(v5 + 60);
    v7 = *(float *)(a1 + 28);
    if ( v7 != 0.0 )
      goto LABEL_18;
LABEL_4:
    v8 = 3399 * (*(uint32_t *)(v5 + 100) / -44488) + 48271 * (*(uint32_t *)(v5 + 100) % 44488);
    v9 = *(float *)(a1 + 16);
    *(uint32_t *)(v5 + 100) = v8;
    if ( v8 < 0 )
      *(uint32_t *)(v5 + 100) = v8 + 0x7FFFFFFF;
    v10 = *v3;
    v11 = (double)*(int *)(v5 + 100) * 4.656612875245797e-10;
    v12 = (float)((float)(v9 + v9) * v11) - v9;
    v13 = v12 + *(float *)(a1 + 8);
    v14 = *(float *)(a1 + 12) + v12;
    v15 = v12 + *(float *)(a1 + 4);
    v10[27] = v13;
    v10[28] = v14;
    v10[26] = v15;
    while ( 1 )
    {
      v16 = a1 + *(uint32_t *)(*(uint32_t *)a1 - 12);
      if ( *(uint8_t *)(v16 + 69) == 0 )
        goto LABEL_14;
      v17 = *(float *)(v16 + 72);
      if ( v17 < -0.001f )
        break;
      if ( v17 > 0.001f )
        break;
      v18 = *(float *)(v16 + 76);
      if ( v18 < -0.001f )
        break;
      if ( v18 > 0.001f )
        break;
      v19 = *(float *)(v16 + 80);
      if ( v19 < -0.001f || v19 > 0.001f )
        break;
      result = *v3;
      v21 = (*v3)[26];
      if ( v21 < -0.001f )
      {
LABEL_15:
        v22 = result[27];
        v23 = result[28];
        goto LABEL_16;
      }
LABEL_46:
      v22 = result[27];
      if ( v21 > 0.001f || v22 < -0.001f )
        goto LABEL_52;
      v23 = result[28];
      if ( v22 <= 0.001f && v23 >= -0.001f && v23 <= 0.001f )
      {
        result[26] = 1.0;
        result[27] = 1.0;
        result[28] = 1.0;
        result = *v3;
        v21 = (*v3)[26];
        v22 = (*v3)[27];
LABEL_52:
        v23 = result[28];
      }
LABEL_16:
      ++v3;
      v24 = v23 * *(float *)(a1 + 52);
      v25 = v21 * *(float *)(a1 + 44);
      result[24] = v22 * *(float *)(a1 + 48);
      result[25] = v24;
      result[23] = v25;
      if ( a3 == v3 )
        return result;
      v7 = *(float *)(a1 + 28);
      v5 = a1 + *(uint32_t *)(*(uint32_t *)a1 - 12);
      if ( v7 == 0.0 )
        goto LABEL_4;
LABEL_18:
      *(float *)&v57 = v6 + *(float *)(v5 + 64);
      v52 = glitch::collada::ps::CSmoothRandomGenerator::rand(
              (glitch::collada::ps::CSmoothRandomGenerator::Self *)(v5 + 108),
              3u,
              v7,
              v57,
              *(float *)(a1 + 16));
      v26 = *v3;
      v27 = *(float *)(a1 + 12) + v52;
      v28 = v52 + *(float *)(a1 + 4);
      v26[27] = *(float *)(a1 + 8) + v52;
      v26[28] = v27;
      v26[26] = v28;
      v6 = *(float *)&v57;
    }
    v20 = *v3;
    v20[26] = v17 * (*v3)[26];
    v20[27] = v20[27] * *(float *)(v16 + 76);
    v20[28] = v20[28] * *(float *)(v16 + 80);
LABEL_14:
    result = *v3;
    v21 = (*v3)[26];
    if ( v21 < -0.001f )
      goto LABEL_15;
    goto LABEL_46;
  }
  return result;
}


// ============================================================================
// Address:   0xd1bdf0 (size: 715 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModel10applyPSizeEN9__gnu_cxx17__normal_iteratorIPPNS1_9SParticleESt6vectorIS6_NS_4core10SAllocatorIS6_LNS_6memory13E_MEMORY_HINTE0EEEEEESF_
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::applyPSize(__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::collada::ps::SParticle **,std::vector<glitch::collada::ps::SParticle *,glitch::core::SAllocator<glitch::collada::ps::SParticle *,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
int glitch::collada::ps::CParticleSystemSizeModel::applyPSize(float *a1, int a2, int *a3)
{
  float v3;
  float v4;
  float v5;
  int v6;
  int v7;
  float v8;
  int v9;
  int result;
  int *v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float *v18;
  float v19; // xmm0_4
  float v20; // xmm2_4
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef int _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27[5];
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef uint32_t _g4_t_v31[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v23)) > _g4_s2 ? (28u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v24)) > _g4_s3 ? (32u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v25)) > _g4_s4 ? (36u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v26)) > _g4_s5 ? (40u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v27)) > _g4_s6 ? (48u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v28)) > _g4_s7 ? (68u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v29)) > _g4_s8 ? (72u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v30)) > _g4_s9 ? (76u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v31)) > _g4_s10 ? (80u + sizeof(_g4_t_v31)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);

  v24 = 1.0;
  v25 = 1.0;
  v26 = 1.0;
  v3 = a1[16];
  if ( v3 != 0.0 )
  {
    v4 = *a1;
    if ( *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 84) != 0 )
    {
      v31[0] = 0;
      v31[1] = -8388609;
      v31[2] = 0;
      BYTE1(v31[3]) = 0;
      v5 = *(float *)(*(uint32_t *)(*(uint32_t *)((char *)a1 + *(uint32_t *)(LODWORD(v4) - 12) + 84) + 32) + 16);
      v28 = v3;
      v29 = v5;
      v30 = COERCE_FLOAT(v31);
      v21 = v3;
      v23 = 0;
      v6 = sub_CFF380((int *)&v28);
      (*(void (**)(uint32_t, float *, uint32_t, float *, int *, int))(**(uint32_t **)(LODWORD(v21) + 20) + 68))(
        *(uint32_t *)(LODWORD(v21) + 20),
        &v28,
        (float)v6 * *(float *)((char *)a1 + *(uint32_t *)(LODWORD(v4) - 12) + 96),
        &v24,
        &v23,
        1);
    }
  }
  if ( *((int *)a1 + 15) > 0
    && (v7 = *((uint32_t *)a1 + 14)) != 0
    && (v8 = *a1, *(uint32_t *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12) + 84) != 0) )
  {
    v31[0] = 0;
    v31[1] = -8388609;
    v31[2] = 0;
    BYTE1(v31[3]) = 0;
    v23 = 0;
    v9 = *(uint32_t *)(LODWORD(v8) - 12);
    v27[0] = v7;
    v27[1] = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)((char *)a1 + v9 + 84) + 32) + 16);
    v27[2] = (int)(uintptr_t)(v31);
    result = sub_CFF380(v27);
    v28 = 0.0;
    v29 = 0.0;
    v30 = 0.0;
    if ( a3 != (int *)a2 )
    {
      v11 = (int *)a2;
      v22 = (float)result;
      (*(void (**)(uint32_t, int *, uint32_t, float *, int *, int))(**(uint32_t **)(v7 + 20) + 68))(
        *(uint32_t *)(v7 + 20),
        v27,
        (float)result * *(float *)(*(uint32_t *)a2 + 84),
        &v28,
        &v23,
        1);
      while ( 1 )
      {
        result = *v11;
        v12 = v28 * *(float *)(*v11 + 104);
        if ( *((uint32_t *)a1 + 16) != 0 )
        {
          v12 = v12 * v24;
          v13 = (float)(v29 * *(float *)(result + 108)) * v25;
          v14 = (float)(v30 * *(float *)(result + 112)) * v26;
        }
        else
        {
          v13 = v29 * *(float *)(result + 108);
          v14 = v30 * *(float *)(result + 112);
        }
        ++v11;
        *(float *)(result + 92) = v12;
        *(float *)(result + 96) = v13;
        *(float *)(result + 100) = v14;
        if ( a3 == v11 )
          break;
        (*(void (**)(uint32_t, int *, uint32_t, float *, int *, int))(**(uint32_t **)(v27[0] + 20) + 68))(
          *(uint32_t *)(v27[0] + 20),
          v27,
          v22 * *(float *)(*v11 + 84),
          &v28,
          &v23,
          1);
      }
    }
  }
  else
  {
    result = *((uint32_t *)a1 + 16);
    if ( result != 0 && a3 != (int *)a2 )
    {
      v15 = v24;
      result = a2;
      v16 = v25;
      v17 = v26;
      do
      {
        v18 = *(float **)result;
        result += 4;
        v19 = v18[28] * v17;
        v20 = v18[26] * v15;
        v18[24] = v18[27] * v16;
        v18[25] = v19;
        v18[23] = v20;
      }
      while ( a3 != (int *)result );
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd1c0c0 (size: 89 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSizeModel16getParameterImplE27E_PARTICLE_SYSTEM_PARAMETER
// Demangled: glitch::collada::ps::CParticleSystemSizeModel::getParameterImpl(E_PARTICLE_SYSTEM_PARAMETER)
// ============================================================================
int glitch::collada::ps::CParticleSystemSizeModel::getParameterImpl(int a1, int a2)
{
  int result;

  result = a1 + 28;
  if ( a2 != 19 )
  {
    if ( a2 <= 19 )
    {
      result = a1 + 40;
      if ( a2 != 17 )
      {
        result = a1 + 16;
        if ( a2 <= 17 )
        {
          result = a1 + 4;
          if ( a2 != 16 )
            return 0;
        }
      }
    }
    else
    {
      result = a1 + 56;
      if ( a2 != 21 )
      {
        result = a1 + 44;
        if ( a2 >= 21 )
        {
          result = a1 + 60;
          if ( a2 != 22 )
          {
            result = a1 + 64;
            if ( a2 != 97 )
              return 0;
          }
        }
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xd1c120 (size: 93 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSpinModelC2Ev
// Demangled: glitch::collada::ps::CParticleSystemSpinModel::CParticleSystemSpinModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemSpinModel::Self *glitch::collada::ps::CParticleSystemSpinModel::Construct(
        glitch::collada::ps::CParticleSystemSpinModel::Self *self,
        int *a2)
{
  int v3;

  v3 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v3 - 12)) = a2[1];
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 1;
  *((uint32_t *)self + 24) = 0;
  return self;
}


// ============================================================================
// Address:   0xd1c180 (size: 125 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSpinModelC1Ev
// Demangled: glitch::collada::ps::CParticleSystemSpinModel::CParticleSystemSpinModel(void)
// ============================================================================
glitch::collada::ps::CParticleSystemSpinModel::Self *glitch::collada::ps::CParticleSystemSpinModel::Construct(
        glitch::collada::ps::CParticleSystemSpinModel::Self *self)
{
  glitch::collada::ps::IParticleContext::Construct((glitch::collada::ps::CParticleSystemSpinModel::Self *)((char *)self + 100));
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 1;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = ((uint32_t)(uintptr_t)&off_207066C);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207064C);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  return nullptr;
}


// ============================================================================
// Address:   0xd1c200 (size: 22 bytes)
// Symbol:    _ZN6glitch7collada2ps24CParticleSystemSpinModelD2Ev
// Demangled: glitch::collada::ps::CParticleSystemSpinModel::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystemSpinModel::Destroy(
        glitch::collada::ps::CParticleSystemSpinModel::Self *self,
        int *a2)
{
  int v2;

  v2 = *a2;
  *(uint32_t *)self = *a2;
  *(uint32_t *)((char *)self + *(uint32_t *)(v2 - 12)) = a2[1];
}


// ============================================================================
// Address:   0xd1c220 (size: 18 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_94(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self
                                                                                                + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd1c240 (size: 10 bytes)
// Symbol:    _ZThn616_N6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_95(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 616));
}


// ============================================================================
// Address:   0xd1c250 (size: 10 bytes)
// Symbol:    _ZThn468_N6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_96(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 468));
}


// ============================================================================
// Address:   0xd1c260 (size: 10 bytes)
// Symbol:    _ZThn376_N6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_97(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 376));
}


// ============================================================================
// Address:   0xd1c270 (size: 10 bytes)
// Symbol:    _ZThn276_N6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_98(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 276));
}


// ============================================================================
// Address:   0xd1c280 (size: 10 bytes)
// Symbol:    _ZThn160_N6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_99(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 160));
}


// ============================================================================
// Address:   0xd1c290 (size: 7 bytes)
// Symbol:    _ZThn92_N6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_100(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 92));
}


// ============================================================================
// Address:   0xd1c2a0 (size: 7 bytes)
// Symbol:    _ZThn76_N6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_101(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 76));
}


// ============================================================================
// Address:   0xd1c2b0 (size: 7 bytes)
// Symbol:    _ZThn44_N6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_102(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 44));
}


// ============================================================================
// Address:   0xd1c2c0 (size: 479 bytes)
// Symbol:    _ZN6glitch7collada2ps15CParticleSystemD1Ev
// Demangled: glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
void glitch::collada::ps::CParticleSystem::Destroy(glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Self *v1;
  uint32_t **v2;
  uint32_t **v3;
  uint32_t **v4;
  uint32_t *v5;

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207022C);
  *((uint32_t *)self + 164) = ((uint32_t)(uintptr_t)&off_20702F4);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_2070248);
  *((uint32_t *)self + 19) = ((uint32_t)(uintptr_t)&off_207025C);
  *((uint32_t *)self + 23) = ((uint32_t)(uintptr_t)&off_2070270);
  *((uint32_t *)self + 40) = ((uint32_t)(uintptr_t)&off_2070284);
  *((uint32_t *)self + 69) = ((uint32_t)(uintptr_t)&off_2070298);
  *((uint32_t *)self + 94) = ((uint32_t)(uintptr_t)&off_20702B0);
  v2 = *((uint32_t ***)self + 173);
  *((uint32_t *)self + 154) = ((uint32_t)(uintptr_t)&off_20702D8);
  v3 = *((uint32_t ***)self + 174);
  *((uint32_t *)self + 117) = ((uint32_t)(uintptr_t)&off_20702C4);
  if ( v2 != v3 )
  {
    v4 = v3;
    do
    {
      v5 = *v2;
      if ( LOBYTE(g4_guard_2f7f3188ff[0]) == 0
        && _cxa_guard_acquire(g4_guard_2f7f3188ff) != 0 )
      {
        glitch::collada::ps::CParticleSystemManager::Construct((glitch::collada::ps::CParticleSystemManager::Self *)g4_fnstatic_aa14cdda2c);
        _cxa_guard_release(g4_guard_2f7f3188ff);
        __cxa_atexit(
          (void (*)(void *))g4_noop_dtor,
          g4_fnstatic_aa14cdda2c,
          &unk_20D1280);
      }
      ++v2;
      glitch::collada::ps::CParticleSystemManager::deallocateParticle(
        g4_fnstatic_aa14cdda2c,
        v5);
    }
    while ( v4 != v2 );
    v1 = self;
  }
  glitch::collada::ps::CParticleSystemForcesModel::Destroy(
    (glitch::collada::ps::CParticleSystem::Self *)((char *)v1 + 616),
    (int *)((uint32_t)(uintptr_t)&off_20701E4));
  glitch::collada::ps::CParticleSystemRenderDataModel::Destroy(
    (glitch::collada::ps::CParticleSystem::Self *)((char *)v1 + 468),
    (int *)((uint32_t)(uintptr_t)&off_20701DC));
  glitch::collada::ps::CParticleSystemColorModel::Destroy(
    (glitch::collada::ps::CParticleSystem::Self *)((char *)v1 + 376),
    (int *)((uint32_t)(uintptr_t)&off_20701D4));
  glitch::collada::ps::CParticleSystemSpinModel::Destroy(
    (glitch::collada::ps::CParticleSystem::Self *)((char *)v1 + 276),
    (int *)((uint32_t)(uintptr_t)&off_20701CC));
  glitch::collada::ps::CParticleSystemMotionModel::Destroy(
    (glitch::collada::ps::CParticleSystem::Self *)((char *)v1 + 160),
    (int *)((uint32_t)(uintptr_t)&off_20701C4));
  glitch::collada::ps::CParticleSystemSizeModel::Destroy(
    (glitch::collada::ps::CParticleSystem::Self *)((char *)v1 + 92),
    (int *)((uint32_t)(uintptr_t)&off_20701BC));
  glitch::collada::ps::CParticleSystemLifeModel::Destroy(
    (glitch::collada::ps::CParticleSystem::Self *)((char *)v1 + 76),
    (int *)((uint32_t)(uintptr_t)&off_20701B4));
  glitch::collada::ps::CParticleSystemEmitterModel::Destroy(
    (glitch::collada::ps::CParticleSystem::Self *)((char *)v1 + 44),
    (int *)((uint32_t)(uintptr_t)&off_20701AC));
  glitch::collada::ps::CParticleSystemGenerationModel::Destroy(v1, (int *)((uint32_t)(uintptr_t)&off_20701A4));
  glitch::collada::ps::IParticleContext::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)v1 + 656));
}


// ============================================================================
// Address:   0xd1c4a0 (size: 18 bytes)
// Symbol:    _ZTv0_n12_N6glitch7collada2ps15CParticleSystemD0Ev
// Demangled: `virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_103(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self
                                                                                                + *(uint32_t *)(*(uint32_t *)self - 12)));
}


// ============================================================================
// Address:   0xd1c4c0 (size: 10 bytes)
// Symbol:    _ZThn616_N6glitch7collada2ps15CParticleSystemD0Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_104(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 616));
}


// ============================================================================
// Address:   0xd1c4d0 (size: 10 bytes)
// Symbol:    _ZThn468_N6glitch7collada2ps15CParticleSystemD0Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_105(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 468));
}


// ============================================================================
// Address:   0xd1c4e0 (size: 10 bytes)
// Symbol:    _ZThn376_N6glitch7collada2ps15CParticleSystemD0Ev
// Demangled: `non-virtual thunk to'glitch::collada::ps::CParticleSystem::Destroy()
// ============================================================================
static void g4_thunk_106(
        glitch::collada::ps::CParticleSystem::Self *self)
{
  glitch::collada::ps::CParticleSystem::Destroy((glitch::collada::ps::CParticleSystem::Self *)((char *)self - 376));
}

