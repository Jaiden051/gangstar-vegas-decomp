#include "Core/Utils/DecompTypes.h"
#include "glitch_streaming.h"

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBaseStreamingManager::update  (binary VA: 0xcd0310)
// Original: glitch::streaming::CBaseStreamingManager::update
// ----------------------------------------------------------------------------
glitch::streaming::CBaseStreamingManager::Self * glitch::streaming::CBaseStreamingManager::update(glitch::streaming::CBaseStreamingManager::Self *self)
{
  glitch::streaming::CBaseStreamingManager::Self *result;
  int v2;
  int *i;
  int v4;

  result = self;
  v2 = *((uint32_t *)self + 5);
  for ( i = *(int **)(v2 + 32);
        i != *(int **)(v2 + 36);
        result = (glitch::streaming::CBaseStreamingManager::Self *)G4_VCALL<int>(v4, 28) )
  {
    v4 = *i++;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::update  (binary VA: 0xcd0350)
// Original: glitch::streaming::CBatchStreamingModule::update
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::removeObjects  (binary VA: 0xcd0360)
// Original: glitch::streaming::CBatchStreamingModule::removeObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::removeObjects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::removeObjects_eacd0370  (binary VA: 0xcd0370)
// Original: glitch::streaming::CBatchStreamingModule::removeObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::removeObjects_eacd0370()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::decodeObjects  (binary VA: 0xcd0380)
// Original: glitch::streaming::CBatchStreamingModule::decodeObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::decodeObjects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::clear  (binary VA: 0xcd0390)
// Original: glitch::streaming::CBatchStreamingModule::clear
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::clear()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::extractGeometricInformation  (binary VA: 0xcd03a0)
// Original: glitch::streaming::CBatchStreamingModule::extractGeometricInformation
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::extractGeometricInformation()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::extractGeometricInformation_eacd03b0  (binary VA: 0xcd03b0)
// Original: glitch::streaming::CBatchStreamingModule::extractGeometricInformation
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::extractGeometricInformation_eacd03b0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::setEnable  (binary VA: 0xcd03c0)
// Original: glitch::streaming::CBatchStreamingModule::setEnable
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::setEnable()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CCommandEmitter::getAdditionalFiles  (binary VA: 0xcd03d0)
// Original: glitch::streaming::CCommandEmitter::getAdditionalFiles
// ----------------------------------------------------------------------------
void glitch::streaming::CCommandEmitter::getAdditionalFiles()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CCommandEmitter::emitAll  (binary VA: 0xcd03e0)
// Original: glitch::streaming::CCommandEmitter::emitAll
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::CCommandEmitter::emitAll(uint32_t *a1, int a2, int a3, int a4)
{
  unsigned int result;
  unsigned int i;

  result = 678152731 * ((a1[2] - a1[1]) >> 2);
  if ( result != 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      G4_VCALL<void>(a1, 12, a2, i, a3, a4);
      result = 678152731 * ((a1[2] - a1[1]) >> 2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CCommandEmitter::getGlobalBoundingBox  (binary VA: 0xcd0450)
// Original: glitch::streaming::CCommandEmitter::getGlobalBoundingBox
// ----------------------------------------------------------------------------
glitch::streaming::CCommandEmitter::Self * glitch::streaming::CCommandEmitter::getGlobalBoundingBox(glitch::streaming::CCommandEmitter::Self *self, uint32_t *a2)
{
  *(uint32_t *)self = a2[4];
  *((uint32_t *)self + 1) = a2[5];
  *((uint32_t *)self + 2) = a2[6];
  *((uint32_t *)self + 3) = a2[7];
  *((uint32_t *)self + 4) = a2[8];
  *((uint32_t *)self + 5) = a2[9];
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CCommandEmitter::addCompressor  (binary VA: 0xcd0480)
// Original: glitch::streaming::CCommandEmitter::addCompressor
// ----------------------------------------------------------------------------
void glitch::streaming::CCommandEmitter::addCompressor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLoadBDAEModule::activateObjects  (binary VA: 0xcd0490)
// Original: glitch::streaming::CLoadBDAEModule::activateObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CLoadBDAEModule::activateObjects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLoadBDAEModule::deactivateObjects  (binary VA: 0xcd04a0)
// Original: glitch::streaming::CLoadBDAEModule::deactivateObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CLoadBDAEModule::deactivateObjects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodEmitter::emitAll  (binary VA: 0xcd04b0)
// Original: glitch::streaming::CLodEmitter::emitAll
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::CLodEmitter::emitAll(uint32_t *a1, int a2, int a3, int a4)
{
  unsigned int result;
  unsigned int i;

  result = -286331153 * ((a1[8] - a1[7]) >> 2);
  if ( result != 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      G4_VCALL<void>(a1, 12, a2, i, a3, a4);
      result = -286331153 * ((a1[8] - a1[7]) >> 2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodEmitter::getGlobalBoundingBox  (binary VA: 0xcd0520)
// Original: glitch::streaming::CLodEmitter::getGlobalBoundingBox
// ----------------------------------------------------------------------------
glitch::streaming::CLodEmitter::Self * glitch::streaming::CLodEmitter::getGlobalBoundingBox(glitch::streaming::CLodEmitter::Self *self, uint32_t *a2)
{
  *(uint32_t *)self = a2[13];
  *((uint32_t *)self + 1) = a2[14];
  *((uint32_t *)self + 2) = a2[15];
  *((uint32_t *)self + 3) = a2[16];
  *((uint32_t *)self + 4) = a2[17];
  *((uint32_t *)self + 5) = a2[18];
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodEmitter::addCompressor  (binary VA: 0xcd0550)
// Original: glitch::streaming::CLodEmitter::addCompressor
// ----------------------------------------------------------------------------
void glitch::streaming::CLodEmitter::addCompressor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodPreloadStreamingModule::update  (binary VA: 0xcd0560)
// Original: glitch::streaming::CLodPreloadStreamingModule::update
// ----------------------------------------------------------------------------
void glitch::streaming::CLodPreloadStreamingModule::update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodPreloadStreamingModule::setEnable  (binary VA: 0xcd0570)
// Original: glitch::streaming::CLodPreloadStreamingModule::setEnable
// ----------------------------------------------------------------------------
void glitch::streaming::CLodPreloadStreamingModule::setEnable()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation  (binary VA: 0xcd0580)
// Original: glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation
// ----------------------------------------------------------------------------
void glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation_eacd0590  (binary VA: 0xcd0590)
// Original: glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation
// ----------------------------------------------------------------------------
void glitch::streaming::CLodPreloadStreamingModule::extractGeometricInformation_eacd0590()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodStreamingModule::clear  (binary VA: 0xcd05a0)
// Original: glitch::streaming::CLodStreamingModule::clear
// ----------------------------------------------------------------------------
void glitch::streaming::CLodStreamingModule::clear()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierEmitterBase::emitAll  (binary VA: 0xcd05b0)
// Original: glitch::streaming::CModifierEmitterBase::emitAll
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::CModifierEmitterBase::emitAll(uint32_t *a1, int a2, int a3, int a4)
{
  unsigned int result;
  unsigned int i;

  result = (unsigned int)(a1[2] - a1[1]) >> 6;
  if ( result != 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      G4_VCALL<void>(a1, 12, a2, i, a3, a4);
      result = (a1[2] - a1[1]) >> 6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierEmitterBase::getGlobalBoundingBox  (binary VA: 0xcd0610)
// Original: glitch::streaming::CModifierEmitterBase::getGlobalBoundingBox
// ----------------------------------------------------------------------------
glitch::streaming::CModifierEmitterBase::Self * glitch::streaming::CModifierEmitterBase::getGlobalBoundingBox(glitch::streaming::CModifierEmitterBase::Self *self, uint32_t *a2)
{
  *(uint32_t *)self = a2[6];
  *((uint32_t *)self + 1) = a2[7];
  *((uint32_t *)self + 2) = a2[8];
  *((uint32_t *)self + 3) = a2[9];
  *((uint32_t *)self + 4) = a2[10];
  *((uint32_t *)self + 5) = a2[11];
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierEmitterBase::addCompressor  (binary VA: 0xcd0640)
// Original: glitch::streaming::CModifierEmitterBase::addCompressor
// ----------------------------------------------------------------------------
int glitch::streaming::CModifierEmitterBase::addCompressor(int a1, int a2)
{
  return G4_VCALL<int>(a2, 12, a1 + 84, a1 + 96);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierStreamingModule::setEnable  (binary VA: 0xcd0670)
// Original: glitch::streaming::CModifierStreamingModule::setEnable
// ----------------------------------------------------------------------------
void glitch::streaming::CModifierStreamingModule::setEnable()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierStreamingModule::loadExtraData  (binary VA: 0xcd0680)
// Original: glitch::streaming::CModifierStreamingModule::loadExtraData
// ----------------------------------------------------------------------------
void glitch::streaming::CModifierStreamingModule::loadExtraData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierStreamingModule::unloadExtraData  (binary VA: 0xcd0690)
// Original: glitch::streaming::CModifierStreamingModule::unloadExtraData
// ----------------------------------------------------------------------------
void glitch::streaming::CModifierStreamingModule::unloadExtraData()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CNullStreamingModule::addObjects  (binary VA: 0xcd06a0)
// Original: glitch::streaming::CNullStreamingModule::addObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CNullStreamingModule::addObjects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CNullStreamingModule::addObjects_eacd06b0  (binary VA: 0xcd06b0)
// Original: glitch::streaming::CNullStreamingModule::addObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CNullStreamingModule::addObjects_eacd06b0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CNullStreamingModule::removeObjects  (binary VA: 0xcd06c0)
// Original: glitch::streaming::CNullStreamingModule::removeObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CNullStreamingModule::removeObjects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CNullStreamingModule::removeObjects_eacd06d0  (binary VA: 0xcd06d0)
// Original: glitch::streaming::CNullStreamingModule::removeObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CNullStreamingModule::removeObjects_eacd06d0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CNullStreamingModule::activateObjects  (binary VA: 0xcd06e0)
// Original: glitch::streaming::CNullStreamingModule::activateObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CNullStreamingModule::activateObjects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CNullStreamingModule::deactivateObjects  (binary VA: 0xcd06f0)
// Original: glitch::streaming::CNullStreamingModule::deactivateObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CNullStreamingModule::deactivateObjects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::setEnable  (binary VA: 0xcd0700)
// Original: glitch::streaming::CSegmentStreamingModule::setEnable
// ----------------------------------------------------------------------------
int glitch::streaming::CSegmentStreamingModule::setEnable(int a1, int a2, int a3)
{
  int i;
  int v4;
  int result;
  int v6;

  for ( i = a2;
        a3 != i;
        result = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 76))(*(uint32_t *)(a1 + 8), v4, v6) )
  {
    v6 = *(uint8_t *)(i + 16);
    v4 = *(uint32_t *)(i + 8);
    i += 20;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::update  (binary VA: 0xcd0750)
// Original: glitch::streaming::CSegmentStreamingModule::update
// ----------------------------------------------------------------------------
int glitch::streaming::CSegmentStreamingModule::update(glitch::streaming::CSegmentStreamingModule::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 116))(*((uint32_t *)self + 2));
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::swapFrame  (binary VA: 0xcd0770)
// Original: glitch::streaming::CSegmentStreamingModule::swapFrame
// ----------------------------------------------------------------------------
int glitch::streaming::CSegmentStreamingModule::swapFrame(glitch::streaming::CSegmentStreamingModule::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  v2 = *((uint32_t *)self + 22);
  if ( v2 != 0 )
  {
    do
    {
      **(uint32_t **)(v2 + 4) = *(uint32_t *)v2;
      v2 = *(uint32_t *)(v2 + 8);
    }
    while ( v2 != 0 );
    v1 = *((uint32_t *)self + 22);
  }
  v3 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 23) = v1;
  *((uint32_t *)self + 22) = 0;
  return G4_VCALL<int>(v3, 112);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::extractGeometricInformation  (binary VA: 0xcd07c0)
// Original: glitch::streaming::CSegmentStreamingModule::extractGeometricInformation
// ----------------------------------------------------------------------------
void glitch::streaming::CSegmentStreamingModule::extractGeometricInformation()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::extractGeometricInformation_eacd07d0  (binary VA: 0xcd07d0)
// Original: glitch::streaming::CSegmentStreamingModule::extractGeometricInformation
// ----------------------------------------------------------------------------
void glitch::streaming::CSegmentStreamingModule::extractGeometricInformation_eacd07d0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation  (binary VA: 0xcd07e0)
// Original: glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation_eacd07f0  (binary VA: 0xcd07f0)
// Original: glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticBatchStreamingModule::extractGeometricInformation_eacd07f0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticBatchStreamingModule::setEnable  (binary VA: 0xcd0800)
// Original: glitch::streaming::CStaticBatchStreamingModule::setEnable
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticBatchStreamingModule::setEnable()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticBatchStreamingModule::clear  (binary VA: 0xcd0810)
// Original: glitch::streaming::CStaticBatchStreamingModule::clear
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticBatchStreamingModule::clear()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticBatchStreamingModule::update  (binary VA: 0xcd0820)
// Original: glitch::streaming::CStaticBatchStreamingModule::update
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticBatchStreamingModule::update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::update  (binary VA: 0xcd0830)
// Original: glitch::streaming::CStaticSegmentStreamingModule::update
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticSegmentStreamingModule::update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::activateObjects  (binary VA: 0xcd0840)
// Original: glitch::streaming::CStaticSegmentStreamingModule::activateObjects
// ----------------------------------------------------------------------------
int glitch::streaming::CStaticSegmentStreamingModule::activateObjects(glitch::streaming::CStaticSegmentStreamingModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  const glitch::streaming::SCommandAndRegisterer::Self *i;
  int v4;
  int result;

  for ( i = a2;
        a3 != i;
        result = (*(int (**)(uint32_t, int, int))(**((uint32_t **)self + 2) + 92))(*((uint32_t *)self + 2), v4, 1) )
  {
    v4 = *((uint32_t *)i + 2);
    i = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)i + 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::deactivateObjects  (binary VA: 0xcd0890)
// Original: glitch::streaming::CStaticSegmentStreamingModule::deactivateObjects
// ----------------------------------------------------------------------------
int glitch::streaming::CStaticSegmentStreamingModule::deactivateObjects(glitch::streaming::CStaticSegmentStreamingModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  const glitch::streaming::SCommandAndRegisterer::Self *i;
  int v4;
  int result;

  for ( i = a2;
        a3 != i;
        result = (*(int (**)(uint32_t, int, uint32_t))(**((uint32_t **)self + 2) + 92))(*((uint32_t *)self + 2), v4, 0) )
  {
    v4 = *((uint32_t *)i + 2);
    i = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)i + 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::setEnable  (binary VA: 0xcd08e0)
// Original: glitch::streaming::CStaticSegmentStreamingModule::setEnable
// ----------------------------------------------------------------------------
int glitch::streaming::CStaticSegmentStreamingModule::setEnable(int a1, int a2, int a3)
{
  int i;
  int v4;
  int result;
  int v6;

  for ( i = a2;
        a3 != i;
        result = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 92))(*(uint32_t *)(a1 + 8), v4, v6) )
  {
    v6 = *(uint8_t *)(i + 16);
    v4 = *(uint32_t *)(i + 8);
    i += 20;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::clear  (binary VA: 0xcd0930)
// Original: glitch::streaming::CStaticSegmentStreamingModule::clear
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticSegmentStreamingModule::clear()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::swapFrame  (binary VA: 0xcd0940)
// Original: glitch::streaming::CStreamingPackage::swapFrame
// ----------------------------------------------------------------------------
int glitch::streaming::CStreamingPackage::swapFrame(glitch::streaming::CStreamingPackage::Self *self)
{
  int i;
  int v2;
  int result;

  for ( i = *((uint32_t *)self + 9); i != *((uint32_t *)self + 8); result = G4_VCALL<int>(v2, 8) )
  {
    v2 = *(uint32_t *)(i - 4);
    i -= 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::IStreamingModule::Destroy  (binary VA: 0xcd0980)
// Original: glitch::streaming::IStreamingModule::~IStreamingModule
// ----------------------------------------------------------------------------
void glitch::streaming::IStreamingModule::Destroy(glitch::streaming::IStreamingModule::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2062530);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::IStreamingModule::preProcess  (binary VA: 0xcd09a0)
// Original: glitch::streaming::IStreamingModule::preProcess
// ----------------------------------------------------------------------------
void glitch::streaming::IStreamingModule::preProcess()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::IStreamingModule::postProcess  (binary VA: 0xcd09b0)
// Original: glitch::streaming::IStreamingModule::postProcess
// ----------------------------------------------------------------------------
void glitch::streaming::IStreamingModule::postProcess()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::IStreamingModule::swapFrame  (binary VA: 0xcd09c0)
// Original: glitch::streaming::IStreamingModule::swapFrame
// ----------------------------------------------------------------------------
void glitch::streaming::IStreamingModule::swapFrame()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::IStreamingModule::Destroy_eacd09d0  (binary VA: 0xcd09d0)
// Original: glitch::streaming::IStreamingModule::~IStreamingModule
// ----------------------------------------------------------------------------
void glitch::streaming::IStreamingModule::Destroy_eacd09d0(glitch::streaming::IStreamingModule::Self *self)
{
  glitch::streaming::IStreamingModule::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::streaming_package::SStreamTask::Run  (binary VA: 0xcd0aa0)
// Original: glitch::streaming::streaming_package::SStreamTask::Run
// ----------------------------------------------------------------------------
int glitch::streaming::streaming_package::SStreamTask::Run(glitch::streaming::streaming_package::SStreamTask::Self *self)
{
  uint32_t *v1;
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  glf::Mutex::Lock((pthread_mutex_t **)(*(uint32_t *)(*((uint32_t *)self + 9) + 92) + 8));
  (*(void (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 9) + 4) + 8))(*(uint32_t *)(*((uint32_t *)self + 9) + 4));
  v1 = *((uint32_t **)self + 9);
  v2 = (int *)v1[8];
  if ( v2 != (int *)v1[9] )
  {
    do
    {
      v3 = *v2++;
      G4_VCALL<void>(v3, 48);
    }
    while ( v2 != (int *)v1[9] );
    v1 = *((uint32_t **)self + 9);
  }
  glf::Mutex::Unlock((pthread_mutex_t **)(v1[23] + 8));
  (*(void (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 9) + 4) + 12))(*(uint32_t *)(*((uint32_t *)self + 9) + 4));
  glf::Mutex::Lock((pthread_mutex_t **)(*(uint32_t *)(*((uint32_t *)self + 9) + 92) + 8));
  v4 = *((uint32_t *)self + 9);
  v5 = *(uint32_t *)(v4 + 36);
  if ( v5 != *(uint32_t *)(v4 + 32) )
  {
    do
    {
      v6 = *(uint32_t *)(v5 - 4);
      v5 -= 4;
      G4_VCALL<void>(v6, 52);
    }
    while ( v5 != *(uint32_t *)(v4 + 32) );
    v4 = *((uint32_t *)self + 9);
  }
  (*(void (**)(uint32_t))(**(uint32_t **)(v4 + 4) + 16))(*(uint32_t *)(v4 + 4));
  result = glf::Mutex::Unlock((pthread_mutex_t **)(*(uint32_t *)(*((uint32_t *)self + 9) + 92) + 8));
  *((uint32_t *)self + 10) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierStreamingModule::postProcess  (binary VA: 0xcd1b90)
// Original: glitch::streaming::CModifierStreamingModule::postProcess
// ----------------------------------------------------------------------------
int glitch::streaming::CModifierStreamingModule::postProcess(glitch::streaming::CModifierStreamingModule::Self *self)
{
  int v1;
  int v2;
  int result;
  int v4;
  uint32_t *v5;
  int v6;

  v2 = *((uint32_t *)self + 19);
  result = *((uint32_t *)self + 20);
  if ( result != v2 )
  {
    v4 = *((uint32_t *)self + 20);
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v4 + 16), 1u);
    v5 = *((uint32_t **)self + 20);
    v6 = v5[4];
    _mm_mfence();
    if ( (v6 & 0x3FFFFFFF) == 0 )
      sub_CD1A90(v1, v5);
    *((uint32_t *)self + 20) = v2;
    result = *((uint32_t *)self + 20);
    __sync_add_and_fetch((volatile int32_t *)(result + 16), 1u);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierStreamingModule::getRegisterer  (binary VA: 0xcd3c00)
// Original: glitch::streaming::CModifierStreamingModule::getRegisterer
// ----------------------------------------------------------------------------
int * glitch::streaming::CModifierStreamingModule::getRegisterer(int *a1, int a2, int a3, int *a4)
{
  int *result;
  int v5;
  bool v6;

  result = a1;
  v5 = *a4;
  v6 = *a4 == 0;
  *a1 = *a4;
  if ( !v6 )
    __sync_add_and_fetch((volatile int32_t *)(v5 + 4), 1u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::Destroy  (binary VA: 0xcd4620)
// Original: glitch::streaming::CStreamingPackage::~CStreamingPackage
// ----------------------------------------------------------------------------
void glitch::streaming::CStreamingPackage::Destroy(glitch::streaming::CStreamingPackage::Self *self)
{
  bool v1;
  uint32_t *v2;
  uint32_t *i;
  char *v4;
  char *v5;
  int v6;
  uint32_t *j;
  int v8;

  v1 = *((uint8_t *)self + 96) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206F078);
  if ( !v1 )
    glf::Task::Wait((glitch::streaming::CStreamingPackage::Self *)((char *)self + 48), 0);
  v2 = *((uint32_t **)self + 8);
  for ( i = *((uint32_t **)self + 9); v2 != i; ++v2 )
  {
    if ( *v2 != 0 )
    {
      G4_VCALL<void>(*v2, 4);
      i = *((uint32_t **)self + 9);
    }
  }
  if ( *((uint32_t *)self + 23) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 23));
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_206F090);
  glf::Task::Destroy((glitch::streaming::CStreamingPackage::Self *)((char *)self + 48));
  if ( *((uint32_t *)self + 11) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 11));
  if ( *((uint32_t *)self + 8) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 8));
  v4 = *((char **)self + 7);
  if ( v4 != nullptr )
  {
    if ( *((uint32_t *)self + 4) != 0 )
    {
      v5 = &v4[4 * *((uint32_t *)self + 3)];
      v6 = *(uint32_t *)v5;
      if ( *(uint32_t *)v5 != 0 )
        goto LABEL_17;
      for ( j = nullptr; ; j = (uint32_t *)(v6 - 8) )
      {
        *(uint32_t *)v5 = j[2];
        opDelete(j);
        --*((uint32_t *)self + 4);
        v6 = *(uint32_t *)v5;
        if ( *(uint32_t *)v5 == 0 )
          break;
LABEL_17:
        ;
      }
      v4 = *((char **)self + 7);
    }
    opDelete(v4);
    *((uint32_t *)self + 7) = 0;
    *((uint32_t *)self + 6) = 0;
  }
  v8 = *((uint32_t *)self + 1);
  if ( v8 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v8 + 4))(*((uint32_t *)self + 1));
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::Destroy_eacd4740  (binary VA: 0xcd4740)
// Original: glitch::streaming::CStreamingPackage::~CStreamingPackage
// ----------------------------------------------------------------------------
void glitch::streaming::CStreamingPackage::Destroy_eacd4740(glitch::streaming::CStreamingPackage::Self *self)
{
  glitch::streaming::CStreamingPackage::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::Destroy  (binary VA: 0xcd4780)
// Original: glitch::streaming::CBatchStreamingModule::~CBatchStreamingModule
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::Destroy(glitch::streaming::CBatchStreamingModule::Self *self)
{
  void *v1;
  uint32_t *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EC28);
  if ( *((uint32_t *)self + 7) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 7));
  v1 = *((void **)self + 5);
  if ( v1 != nullptr )
  {
    glitch::collada::CColladaDatabase::Destroy(*((glitch::collada::CColladaDatabase::Self **)self + 5));
    opDelete(v1);
  }
  v2 = *((uint32_t **)self + 4);
  if ( v2 != nullptr )
    sub_5459C0((uint32_t *)((char *)v2 + *(uint32_t *)(*v2 - 12)));
  if ( *((uint32_t *)self + 3) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 3));
  if ( *((uint32_t *)self + 2) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 2));
  glitch::streaming::IStreamingModule::Destroy((glitch::streaming::IStreamingModule::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::Destroy_eacd4820  (binary VA: 0xcd4820)
// Original: glitch::streaming::CBatchStreamingModule::~CBatchStreamingModule
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::Destroy_eacd4820(glitch::streaming::CBatchStreamingModule::Self *self)
{
  glitch::streaming::CBatchStreamingModule::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierStreamingModule::decodeObjects  (binary VA: 0xcd4860)
// Original: glitch::streaming::CModifierStreamingModule::decodeObjects
// ----------------------------------------------------------------------------
uint8_t ** glitch::streaming::CModifierStreamingModule::decodeObjects(glitch::streaming::CModifierStreamingModule::Self *self, unsigned int a2, unsigned int a3, uint8_t *a4)
{
  uint8_t **result;
  typedef uint8_t *_g4_t_v5[4];
  typedef char *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  result = (uint8_t **)a4;
  v8 = 0;
  v5[3] = nullptr;
  v6 = nullptr;
  v7 = 0;
  v5[2] = (uint8_t *)(a2 & 0xFFFFFF);
  v5[0] = a4;
  for ( v5[1] = nullptr; &a4[a3] != v5[0]; result = sub_CD1350(v5) )
    v6 = sub_CD12F0(v5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::removeObjects  (binary VA: 0xcd7d50)
// Original: glitch::streaming::CStaticSegmentStreamingModule::removeObjects
// ----------------------------------------------------------------------------
uint8_t ** glitch::streaming::CStaticSegmentStreamingModule::removeObjects(int a1, int a2, uint8_t *a3, uint32_t *a4)
{
  uint8_t **result;
  int v5;
  char **v6;
  char *v7;
  typedef uint32_t _g4_t_v8[4];
  typedef uint8_t *_g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  result = (uint8_t **)a3;
  v9[0] = a3;
  v9[1] = nullptr;
  if ( a3 != &a3[a2] )
  {
    while ( 1 )
    {
      v7 = sub_CD12F0(v9);
      if ( *a4 != 0 )
        break;
LABEL_9:
      result = sub_CD1350(v9);
      if ( &a3[a2] == v9[0] )
        return result;
    }
    if ( byte_20D6D20 != 0 )
    {
      v5 = dword_20D6D30;
    }
    else
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
        goto LABEL_5;
      }
      v5 = 1179403647;
    }
    if ( v5 != 0 )
    {
      dword_20D6D30 = *(uint32_t *)v5;
      goto LABEL_6;
    }
LABEL_5:
    v5 = (int)(uintptr_t)(sub_CD0F60(&dword_20D6D30));
LABEL_6:
    v6 = nullptr;
    v8[0] = v5;
    if ( v5 != 0 )
    {
      *(uint32_t *)v5 = 0;
      *(uint32_t *)(v5 + 8) = 1;
      *(uint32_t *)(v5 + 4) = 0;
      v6 = (char **)v8[0];
    }
    *v6 = v7;
    G4_VCALL<void>(*a4, 16, *(uint32_t *)(a1 + 12), v7, v8, -1);
    glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v8);
    goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::removeObjects  (binary VA: 0xcd7ea0)
// Original: glitch::streaming::CStaticSegmentStreamingModule::removeObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticSegmentStreamingModule::removeObjects(glitch::streaming::CStaticSegmentStreamingModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  const glitch::streaming::SCommandAndRegisterer::Self *v3;
  int v4;
  uint32_t *v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  if ( a2 != a3 )
  {
    v3 = a2;
    while ( 1 )
    {
      v6 = *((uint32_t *)v3 + 2);
      if ( *((uint32_t *)v3 + 4) != 0 )
        break;
LABEL_9:
      v3 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v3 + 20);
      if ( a3 == v3 )
        return;
    }
    if ( byte_20D6D20 != 0 )
    {
      v4 = dword_20D6D30;
    }
    else
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
        goto LABEL_5;
      }
      v4 = 1179403647;
    }
    if ( v4 != 0 )
    {
      dword_20D6D30 = *(uint32_t *)v4;
      goto LABEL_6;
    }
LABEL_5:
    v4 = (int)(uintptr_t)(sub_CD0F60(&dword_20D6D30));
LABEL_6:
    v5 = nullptr;
    v7[0] = v4;
    if ( v4 != 0 )
    {
      *(uint32_t *)v4 = 0;
      *(uint32_t *)(v4 + 8) = 1;
      *(uint32_t *)(v4 + 4) = 0;
      v5 = (uint32_t *)v7[0];
    }
    *v5 = v6;
    (*(void (**)(uint32_t, uint32_t, int, uint32_t *, int))(**((uint32_t **)v3 + 4) + 16))(
      *((uint32_t *)v3 + 4),
      *((uint32_t *)self + 3),
      v6,
      v7,
      -1);
    glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v7);
    goto LABEL_9;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::addObjects  (binary VA: 0xcd7fe0)
// Original: glitch::streaming::CStaticSegmentStreamingModule::addObjects
// ----------------------------------------------------------------------------
uint8_t ** glitch::streaming::CStaticSegmentStreamingModule::addObjects(int a1, int a2, uint8_t *a3, uint32_t *a4)
{
  uint8_t **result;
  int v5;
  char **v6;
  char *v7;
  typedef uint32_t _g4_t_v8[4];
  typedef uint8_t *_g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  result = (uint8_t **)a3;
  v9[0] = a3;
  v9[1] = nullptr;
  if ( a3 != &a3[a2] )
  {
    while ( 1 )
    {
      v7 = sub_CD12F0(v9);
      if ( *a4 != 0 )
        break;
LABEL_9:
      result = sub_CD1350(v9);
      if ( &a3[a2] == v9[0] )
        return result;
    }
    if ( byte_20D6D20 != 0 )
    {
      v5 = dword_20D6D30;
    }
    else
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
        goto LABEL_5;
      }
      v5 = 1179403647;
    }
    if ( v5 != 0 )
    {
      dword_20D6D30 = *(uint32_t *)v5;
      goto LABEL_6;
    }
LABEL_5:
    v5 = (int)(uintptr_t)(sub_CD0F60(&dword_20D6D30));
LABEL_6:
    v6 = nullptr;
    v8[0] = v5;
    if ( v5 != 0 )
    {
      *(uint32_t *)v5 = 0;
      *(uint32_t *)(v5 + 8) = 1;
      *(uint32_t *)(v5 + 4) = 0;
      v6 = (char **)v8[0];
    }
    *v6 = v7;
    G4_VCALL<void>(*a4, 12, *(uint32_t *)(a1 + 12), v7, v8, 0, -1);
    glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v8);
    goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::addObjects  (binary VA: 0xcd8130)
// Original: glitch::streaming::CStaticSegmentStreamingModule::addObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticSegmentStreamingModule::addObjects(glitch::streaming::CStaticSegmentStreamingModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  const glitch::streaming::SCommandAndRegisterer::Self *v3;
  int v4;
  uint32_t *v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  if ( a2 != a3 )
  {
    v3 = a2;
    while ( 1 )
    {
      v6 = *((uint32_t *)v3 + 2);
      if ( *((uint32_t *)v3 + 4) != 0 )
        break;
LABEL_9:
      v3 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v3 + 20);
      if ( a3 == v3 )
        return;
    }
    if ( byte_20D6D20 != 0 )
    {
      v4 = dword_20D6D30;
    }
    else
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
        goto LABEL_5;
      }
      v4 = 1179403647;
    }
    if ( v4 != 0 )
    {
      dword_20D6D30 = *(uint32_t *)v4;
      goto LABEL_6;
    }
LABEL_5:
    v4 = (int)(uintptr_t)(sub_CD0F60(&dword_20D6D30));
LABEL_6:
    v5 = nullptr;
    v7[0] = v4;
    if ( v4 != 0 )
    {
      *(uint32_t *)v4 = 0;
      *(uint32_t *)(v4 + 8) = 1;
      *(uint32_t *)(v4 + 4) = 0;
      v5 = (uint32_t *)v7[0];
    }
    *v5 = v6;
    (*(void (**)(uint32_t, uint32_t, int, uint32_t *, uint32_t, int))(**((uint32_t **)v3 + 4) + 12))(
      *((uint32_t *)v3 + 4),
      *((uint32_t *)self + 3),
      v6,
      v7,
      0,
      -1);
    glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v7);
    goto LABEL_9;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticBatchStreamingModule::removeObjects  (binary VA: 0xcd8270)
// Original: glitch::streaming::CStaticBatchStreamingModule::removeObjects
// ----------------------------------------------------------------------------
uint8_t ** glitch::streaming::CStaticBatchStreamingModule::removeObjects(int a1, int a2, uint8_t *a3, uint32_t *a4)
{
  uint8_t **result;
  int v5;
  char **v6;
  char *v7;
  typedef uint32_t _g4_t_v8[4];
  typedef uint8_t *_g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  result = (uint8_t **)a3;
  v9[0] = a3;
  v9[1] = nullptr;
  if ( a3 != &a3[a2] )
  {
    while ( 1 )
    {
      v7 = sub_CD12F0(v9);
      if ( *a4 != 0 )
        break;
LABEL_9:
      result = sub_CD1350(v9);
      if ( &a3[a2] == v9[0] )
        return result;
    }
    if ( byte_20D6D20 != 0 )
    {
      v5 = dword_20D6D30;
    }
    else
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
        goto LABEL_5;
      }
      v5 = 1179403647;
    }
    if ( v5 != 0 )
    {
      dword_20D6D30 = *(uint32_t *)v5;
      goto LABEL_6;
    }
LABEL_5:
    v5 = (int)(uintptr_t)(sub_CD0F60(&dword_20D6D30));
LABEL_6:
    v6 = nullptr;
    v8[0] = v5;
    if ( v5 != 0 )
    {
      *(uint32_t *)v5 = 0;
      *(uint32_t *)(v5 + 8) = 1;
      *(uint32_t *)(v5 + 4) = 0;
      v6 = (char **)v8[0];
    }
    *v6 = v7;
    G4_VCALL<void>(*a4, 16, 0, v7, v8, 0);
    glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v8);
    goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticBatchStreamingModule::removeObjects  (binary VA: 0xcd83c0)
// Original: glitch::streaming::CStaticBatchStreamingModule::removeObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticBatchStreamingModule::removeObjects(glitch::streaming::CStaticBatchStreamingModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  const glitch::streaming::SCommandAndRegisterer::Self *v3;
  int v4;
  uint32_t *v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  if ( a2 != a3 )
  {
    v3 = a2;
    while ( 1 )
    {
      v6 = *((uint32_t *)v3 + 2);
      if ( *((uint32_t *)v3 + 4) != 0 )
        break;
LABEL_9:
      v3 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v3 + 20);
      if ( a3 == v3 )
        return;
    }
    if ( byte_20D6D20 != 0 )
    {
      v4 = dword_20D6D30;
    }
    else
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
        goto LABEL_5;
      }
      v4 = 1179403647;
    }
    if ( v4 != 0 )
    {
      dword_20D6D30 = *(uint32_t *)v4;
      goto LABEL_6;
    }
LABEL_5:
    v4 = (int)(uintptr_t)(sub_CD0F60(&dword_20D6D30));
LABEL_6:
    v5 = nullptr;
    v7[0] = v4;
    if ( v4 != 0 )
    {
      *(uint32_t *)v4 = 0;
      *(uint32_t *)(v4 + 8) = 1;
      *(uint32_t *)(v4 + 4) = 0;
      v5 = (uint32_t *)v7[0];
    }
    *v5 = v6;
    (*(void (**)(uint32_t, uint32_t, int, uint32_t *, uint32_t))(**((uint32_t **)v3 + 4) + 16))(
      *((uint32_t *)v3 + 4),
      0,
      v6,
      v7,
      0);
    glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v7);
    goto LABEL_9;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticBatchStreamingModule::addObjects  (binary VA: 0xcd8500)
// Original: glitch::streaming::CStaticBatchStreamingModule::addObjects
// ----------------------------------------------------------------------------
uint8_t ** glitch::streaming::CStaticBatchStreamingModule::addObjects(int a1, int a2, uint8_t *a3, uint32_t *a4)
{
  uint8_t **result;
  int v5;
  char **v6;
  char *v7;
  typedef uint32_t _g4_t_v8[4];
  typedef uint8_t *_g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  result = (uint8_t **)a3;
  v9[0] = a3;
  v9[1] = nullptr;
  if ( a3 != &a3[a2] )
  {
    while ( 1 )
    {
      v7 = sub_CD12F0(v9);
      if ( *a4 != 0 )
        break;
LABEL_9:
      result = sub_CD1350(v9);
      if ( &a3[a2] == v9[0] )
        return result;
    }
    if ( byte_20D6D20 != 0 )
    {
      v5 = dword_20D6D30;
    }
    else
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
        goto LABEL_5;
      }
      v5 = 1179403647;
    }
    if ( v5 != 0 )
    {
      dword_20D6D30 = *(uint32_t *)v5;
      goto LABEL_6;
    }
LABEL_5:
    v5 = (int)(uintptr_t)(sub_CD0F60(&dword_20D6D30));
LABEL_6:
    v6 = nullptr;
    v8[0] = v5;
    if ( v5 != 0 )
    {
      *(uint32_t *)v5 = 0;
      *(uint32_t *)(v5 + 8) = 1;
      *(uint32_t *)(v5 + 4) = 0;
      v6 = (char **)v8[0];
    }
    *v6 = v7;
    G4_VCALL<void>(*a4, 12, 0, v7, v8, 0, 0);
    glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v8);
    goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticBatchStreamingModule::addObjects  (binary VA: 0xcd8650)
// Original: glitch::streaming::CStaticBatchStreamingModule::addObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CStaticBatchStreamingModule::addObjects(glitch::streaming::CStaticBatchStreamingModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  const glitch::streaming::SCommandAndRegisterer::Self *v3;
  int v4;
  uint32_t *v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  if ( a2 != a3 )
  {
    v3 = a2;
    while ( 1 )
    {
      v6 = *((uint32_t *)v3 + 2);
      if ( *((uint32_t *)v3 + 4) != 0 )
        break;
LABEL_9:
      v3 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v3 + 20);
      if ( a3 == v3 )
        return;
    }
    if ( byte_20D6D20 != 0 )
    {
      v4 = dword_20D6D30;
    }
    else
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
        goto LABEL_5;
      }
      v4 = 1179403647;
    }
    if ( v4 != 0 )
    {
      dword_20D6D30 = *(uint32_t *)v4;
      goto LABEL_6;
    }
LABEL_5:
    v4 = (int)(uintptr_t)(sub_CD0F60(&dword_20D6D30));
LABEL_6:
    v5 = nullptr;
    v7[0] = v4;
    if ( v4 != 0 )
    {
      *(uint32_t *)v4 = 0;
      *(uint32_t *)(v4 + 8) = 1;
      *(uint32_t *)(v4 + 4) = 0;
      v5 = (uint32_t *)v7[0];
    }
    *v5 = v6;
    (*(void (**)(uint32_t, uint32_t, int, uint32_t *, uint32_t, uint32_t))(**((uint32_t **)v3 + 4) + 12))(
      *((uint32_t *)v3 + 4),
      0,
      v6,
      v7,
      0,
      0);
    glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v7);
    goto LABEL_9;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::postProcess  (binary VA: 0xcd8790)
// Original: glitch::streaming::CSegmentStreamingModule::postProcess
// ----------------------------------------------------------------------------
int glitch::streaming::CSegmentStreamingModule::postProcess(glitch::streaming::CSegmentStreamingModule::Self *self)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v5;

  v1 = *((uint32_t *)self + 22);
  if ( v1 != 0 )
  {
    while ( *(uint32_t *)(v1 + 8) != 0 )
      v1 = *(uint32_t *)(v1 + 8);
    *(uint32_t *)(v1 + 8) = *((uint32_t *)self + 21);
  }
  else
  {
    *((uint32_t *)self + 22) = *((uint32_t *)self + 21);
  }
  *((uint32_t *)self + 21) = 0;
  while ( 1 )
  {
    v2 = *((uint32_t **)self + 23);
    if ( v2 == nullptr )
      break;
    while ( 1 )
    {
      *((uint32_t *)self + 23) = v2[2];
      glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)(v2 + 1));
      v3 = *((uint32_t **)self + 13);
      if ( v3 != nullptr && v2 >= v3 )
        break;
      *v2 = (uint32_t)(uintptr_t)(v3);
      *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v2);
      v2 = *((uint32_t **)self + 23);
      if ( v2 == nullptr )
        return (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 108))(*((uint32_t *)self + 2));
    }
    while ( 1 )
    {
      v5 = (uint32_t *)*v3;
      if ( *v3 == 0 || v2 < v5 )
        break;
      v3 = (uint32_t *)*v3;
    }
    *v2 = (uint32_t)(uintptr_t)(v5);
    *v3 = (uint32_t)(uintptr_t)(v2);
  }
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 108))(*((uint32_t *)self + 2));
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBaseGridStreamingManager::getData  (binary VA: 0xcd8830)
// Original: glitch::streaming::CBaseGridStreamingManager::getData
// ----------------------------------------------------------------------------
glitch::streaming::CBaseGridStreamingManager::Self * glitch::streaming::CBaseGridStreamingManager::getData(glitch::streaming::CBaseGridStreamingManager::Self *self, unsigned int a2, int a3)
{
  int v4;
  size_t v5;
  int v6;
  int v8;
  int v9;

  v4 = *(uint32_t *)(a2 + 136);
  v5 = *(uint32_t *)(v4 + 4 * a3 + 4) - *(uint32_t *)(v4 + 4 * a3);
  v9 = *(uint32_t *)(v4 + 4 * a3);
  v6 = glitch::core::allocProcessBuffer(v5, v8);
  (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(a2 + 140) + 24))(*(uint32_t *)(a2 + 140), v9, 0);
  (*(void (**)(uint32_t, int, size_t))(**(uint32_t **)(a2 + 140) + 12))(*(uint32_t *)(a2 + 140), v6, v5);
  *(uint32_t *)self = v6;
  *((uint32_t *)self + 1) = v6 + v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBaseStreamingManager::Construct  (binary VA: 0xcd88d0)
// Original: glitch::streaming::CBaseStreamingManager::CBaseStreamingManager
// ----------------------------------------------------------------------------
glitch::streaming::CBaseStreamingManager::Self * glitch::streaming::CBaseStreamingManager::Construct(glitch::streaming::CBaseStreamingManager::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206EBC8);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  return self;
}



// ============================================================================
// Address:   0xcd8990 (size: 509 bytes)
// Symbol:    _ZN6glitch9streaming25CBaseGridStreamingManagerC2ERKN5boost13intrusive_ptrINS_2io9IReadFileEEE
// Demangled: glitch::streaming::CBaseGridStreamingManager::CBaseGridStreamingManager(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// ============================================================================
// Alternative name is '_ZN6glitch9streaming25CBaseGridStreamingManagerC1ERKN5boost13intrusive_ptrINS_2io9IReadFileEEE'
glitch::streaming::CBaseGridStreamingManager::Self *glitch::streaming::CBaseGridStreamingManager::Construct(
        glitch::streaming::CBaseGridStreamingManager::Self *self,
        const boost::intrusive_ptr<glitch::io::IReadFile> *a2)
{
  int v2;
  bool v3;
  int v4;
  void **v5;
  int v6;
  void **v7;
  void **v8;
  void *v9;
  int v10;
  int v11;
  void *v12;
  char v14[32];

  glitch::streaming::CBaseStreamingManager::Construct((glitch::streaming::CBaseStreamingManager::Self *)(self));
  *((uint32_t *)self + 25) = 2139095039;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EB68);
  *((uint32_t *)self + 26) = 2139095039;
  *((uint32_t *)self + 27) = 2139095039;
  *((uint32_t *)self + 28) = -8388609;
  *((uint32_t *)self + 29) = -8388609;
  *((uint32_t *)self + 30) = -8388609;
  *((uint32_t *)self + 34) = 0;
  v2 = *(uint32_t *)a2;
  v3 = *(uint32_t *)a2 == 0;
  *((uint32_t *)self + 35) = *(uint32_t *)a2;
  if ( !v3 )
    __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1u);
  *((uint32_t *)self + 36) = 0;
  *((uint8_t *)self + 148) = 0;
  v4 = 38;
  v5 = (void **)&unk_1C81A60;
LABEL_4:
  while ( 1 )
  {
    v6 = v4 >> 1;
    v7 = &v5[v4 >> 1];
    if ( (unsigned int)(uintptr_t)(*v7) > 0xA )
      break;
    v5 = v7 + 1;
    v4 = v4 - v6 - 1;
    if ( v4 <= 0 )
      goto LABEL_10;
  }
  while ( v6 > 0 )
  {
    v8 = &v5[v6 >> 1];
    if ( (unsigned int)(uintptr_t)(*v8) <= 0xA )
    {
      v5 = v8 + 1;
      v4 = v6 - (v6 >> 1) - 1;
      if ( v4 > 0 )
        goto LABEL_4;
      break;
    }
    v6 >>= 1;
  }
LABEL_10:
  if ( v5 == (void **)jpt_628CA1 )
    v5 = (void **)&unk_1C81AF4;
  v9 = *v5;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 38) = (uint32_t)(uintptr_t)(v9);
  *((uint32_t *)self + 40) = 1065353216;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  sub_CD1410((int *)a2, (int)(uintptr_t)(v14), 1);
  sub_CD3B10((int *)a2, (int)(uintptr_t)(self) + 100);
  (*(void (**)(uint32_t, char *, int))(**(uint32_t **)a2 + 12))(*(uint32_t *)a2, (char *)self + 124, 4);
  (*(void (**)(uint32_t, char *, int))(**(uint32_t **)a2 + 12))(*(uint32_t *)a2, (char *)self + 128, 4);
  (*(void (**)(uint32_t, char *, int))(**(uint32_t **)a2 + 12))(*(uint32_t *)a2, (char *)self + 132, 4);
  v10 = *((uint32_t *)self + 33) * *((uint32_t *)self + 32) * *((uint32_t *)self + 31) + 1;
  v11 = opNewArray(4 * v10);
  v12 = *((void **)self + 34);
  *((uint32_t *)self + 34) = v11;
  if ( v12 != nullptr )
  {
    opDeleteArray(v12);
    v11 = *((uint32_t *)self + 34);
  }
  return (struct glitch::streaming::CBaseGridStreamingManager::Self *)sub_CD1410((int *)a2, v11, v10);
}
// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBaseStreamingManager::requestTemporaryBuffer  (binary VA: 0xcd8b90)
// Original: glitch::streaming::CBaseStreamingManager::requestTemporaryBuffer
// ----------------------------------------------------------------------------
int glitch::streaming::CBaseStreamingManager::requestTemporaryBuffer(glitch::streaming::CBaseStreamingManager::Self *self, size_t a2)
{
  int result;
  void *v3;

  if ( *((uint32_t *)self + 4) >= a2 )
    return *((uint32_t *)self + 3);
  *((uint32_t *)self + 4) = a2;
  result = opNewArray(a2);
  v3 = *((void **)self + 3);
  *((uint32_t *)self + 3) = result;
  if ( v3 != nullptr )
  {
    opDeleteArray(v3);
    return *((uint32_t *)self + 3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBaseStreamingManager::resolveString  (binary VA: 0xcd8bf0)
// Original: glitch::streaming::CBaseStreamingManager::resolveString
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::CBaseStreamingManager::resolveString(glitch::streaming::CBaseStreamingManager::Self *self, unsigned int a2)
{
  return *((uint32_t *)self + 1) + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::Construct  (binary VA: 0xcd8c00)
// Original: glitch::streaming::CBatchStreamingModule::CBatchStreamingModule
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::Construct(int a1, int *a2, int *a3, boost::intrusive_ptr<glitch::io::IReadFile> *a4, uint32_t **a5, int *a6, glitch::collada::CColladaFactory::Self *a7, int16_t a8)
{
  int v8;
  bool v9;
  int v10;
  uint32_t *v11;
  int v12;
  glitch::collada::CColladaDatabase::Self *v13;
  glitch::collada::CColladaDatabase::Self *v14;

  *(uint16_t *)(a1 + 4) = a8;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206EC28);
  v8 = *a2;
  v9 = *a2 == 0;
  *(uint32_t *)(a1 + 8) = *a2;
  if ( !v9 )
    __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
  v10 = *a3;
  v9 = *a3 == 0;
  *(uint32_t *)(a1 + 12) = *a3;
  if ( !v9 )
    __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
  v11 = *a5;
  v9 = *a5 == nullptr;
  *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(*a5);
  if ( !v9 )
    __sync_add_and_fetch((uint32_t *)((char *)v11 + *(uint32_t *)(*v11 - 12) + 4), 1u);
  *(uint32_t *)(a1 + 20) = 0;
  v12 = *a6;
  *(uint32_t *)(a1 + 28) = *a6;
  if ( v12 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v12 + 4), 1u);
  G4_VCALL<void>(*a3, 24, 0, 0);
  sub_CD1410(a3, a1 + 24, 1);
  v13 = (glitch::collada::CColladaDatabase::Self *)opNew(0x14u);
  glitch::collada::CColladaDatabase::Construct(v13, a4, a7);
  v14 = *(glitch::collada::CColladaDatabase::Self **)(a1 + 20);
  if ( v13 != v14 )
  {
    if ( v14 != nullptr )
    {
      glitch::collada::CColladaDatabase::Destroy(*(glitch::collada::CColladaDatabase::Self **)(a1 + 20));
      opDelete(v14);
    }
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v13);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CCommandEmitter::Construct  (binary VA: 0xcd8d00)
// Original: glitch::streaming::CCommandEmitter::CCommandEmitter
// ----------------------------------------------------------------------------
glitch::streaming::CCommandEmitter::Self * glitch::streaming::CCommandEmitter::Construct(glitch::streaming::CCommandEmitter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EC88);
  *((uint32_t *)self + 4) = 2139095039;
  *((uint32_t *)self + 5) = 2139095039;
  *((uint32_t *)self + 6) = 2139095039;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 7) = -8388609;
  *((uint32_t *)self + 8) = -8388609;
  *((uint32_t *)self + 9) = -8388609;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::lod_cache::CStreamingStateCallback::opNew  (binary VA: 0xcd8d50)
// Original: glitch::streaming::lod_cache::CStreamingStateCallback::operator new
// ----------------------------------------------------------------------------
uint32_t * glitch::streaming::lod_cache::CStreamingStateCallback::opNew()
{
  uint32_t *v0;

  if ( g4_fnstatic_2c882fa5ac == 0 )
  {
    g4_fnstatic_2c882fa5ac = 1;
    if ( &boost::singleton_pool<boost::fast_pool_allocator_tag,32u,glitch::memory::SDefaultPoolAllocator,glitch::memory::SPoolMutex<glf::SpinLock::Self>,32u,0u>::storage != nullptr )
    {
      glf::SpinLock::Construct((glf::SpinLock::Self *)&boost::singleton_pool<boost::fast_pool_allocator_tag,32u,glitch::memory::SDefaultPoolAllocator,glitch::memory::SPoolMutex<glf::SpinLock::Self>,32u,0u>::storage);
      *(uintptr_t *)(unk_20DF984) = (uintptr_t)(0);
      *(uintptr_t *)(unk_20DF988) = (uintptr_t)(0);
      *(uintptr_t *)(unk_20DF98C) = (uintptr_t)(0);
      *(uintptr_t *)(unk_20DF990) = (uintptr_t)(32);
      *(uintptr_t *)(unk_20DF994) = (uintptr_t)(32);
      *(uintptr_t *)(unk_20DF998) = (uintptr_t)(32);
      *(uintptr_t *)(unk_20DF99C) = (uintptr_t)(0);
    }
  }
  glf::SpinLock::Lock((volatile int32_t **)&boost::singleton_pool<boost::fast_pool_allocator_tag,32u,glitch::memory::SDefaultPoolAllocator,glitch::memory::SPoolMutex<glf::SpinLock::Self>,32u,0u>::storage);
  v0 = (uint32_t *)(*(uint8_t **)unk_20DF984);
  if ( (*(uint8_t **)unk_20DF984) != 0 )
    *(uintptr_t *)(unk_20DF984) = (uintptr_t)(**(uint32_t **)unk_20DF984);
  else
    v0 = sub_CD6B70(&unk_20DF984);
  glf::SpinLock::Unlock((glf::SpinLock::Self *)&boost::singleton_pool<boost::fast_pool_allocator_tag,32u,glitch::memory::SDefaultPoolAllocator,glitch::memory::SPoolMutex<glf::SpinLock::Self>,32u,0u>::storage);
  if ( v0 == nullptr )
    std::terminate();
  return v0;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::lod_cache::CStreamingStateCallback::opDelete  (binary VA: 0xcd8e10)
// Original: glitch::streaming::lod_cache::CStreamingStateCallback::operator delete
// ----------------------------------------------------------------------------
void glitch::streaming::lod_cache::CStreamingStateCallback::opDelete(uint32_t *a1)
{
  if ( g4_fnstatic_2c882fa5ac == 0 )
  {
    g4_fnstatic_2c882fa5ac = 1;
    if ( &boost::singleton_pool<boost::fast_pool_allocator_tag,32u,glitch::memory::SDefaultPoolAllocator,glitch::memory::SPoolMutex<glf::SpinLock::Self>,32u,0u>::storage != nullptr )
    {
      glf::SpinLock::Construct((glf::SpinLock::Self *)&boost::singleton_pool<boost::fast_pool_allocator_tag,32u,glitch::memory::SDefaultPoolAllocator,glitch::memory::SPoolMutex<glf::SpinLock::Self>,32u,0u>::storage);
      *(uintptr_t *)(unk_20DF984) = (uintptr_t)(0);
      *(uintptr_t *)(unk_20DF988) = (uintptr_t)(0);
      *(uintptr_t *)(unk_20DF98C) = (uintptr_t)(0);
      *(uintptr_t *)(unk_20DF990) = (uintptr_t)(32);
      *(uintptr_t *)(unk_20DF994) = (uintptr_t)(32);
      *(uintptr_t *)(unk_20DF998) = (uintptr_t)(32);
      *(uintptr_t *)(unk_20DF99C) = (uintptr_t)(0);
    }
  }
  glf::SpinLock::Lock(&boost::singleton_pool<boost::fast_pool_allocator_tag,32u,glitch::memory::SDefaultPoolAllocator,glitch::memory::SPoolMutex<glf::SpinLock::Self>,32u,0u>::storage);
  *a1 = (uint32_t)(uintptr_t)((*(uint8_t **)unk_20DF984));
  *(uintptr_t *)(unk_20DF984) = (uintptr_t)(a1);
  glf::SpinLock::Unlock((glf::SpinLock::Self *)&boost::singleton_pool<boost::fast_pool_allocator_tag,32u,glitch::memory::SDefaultPoolAllocator,glitch::memory::SPoolMutex<glf::SpinLock::Self>,32u,0u>::storage);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodCache::cleanupRecursive  (binary VA: 0xcd8eb0)
// Original: glitch::streaming::CLodCache::cleanupRecursive
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::CLodCache::cleanupRecursive(int a1, int **a2)
{
  int v2;
  int **v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int *v16;
  int *v17;
  int *v18;
  int *v19;
  int *v20;
  unsigned int result;
  unsigned int *v22;
  unsigned int *v23;
  unsigned int *v24;
  unsigned int **v25;
  unsigned int **i;
  unsigned int *v27;
  unsigned int *v28;

  v3 = a2;
  v4 = (*a2)[1];
  _mm_mfence();
  __sync_sub_and_fetch((volatile int32_t *)(v4 + 16), 1u);
  v5 = (uint32_t *)(*a2)[1];
  v6 = v5[4];
  _mm_mfence();
  if ( (v6 & 0x3FFFFFFF) == 0 )
    sub_CD18F0(v2, v5);
  v7 = **a2;
  _mm_mfence();
  __sync_sub_and_fetch((volatile int32_t *)(v7 + 16), 1u);
  v8 = (uint32_t *)**a2;
  v9 = v8[4];
  _mm_mfence();
  if ( (v9 & 0x3FFFFFFF) == 0 )
    sub_CD18F0(v2, v8);
  v10 = a2[1][1];
  _mm_mfence();
  __sync_sub_and_fetch((volatile int32_t *)(v10 + 16), 1u);
  v11 = (uint32_t *)a2[1][1];
  v12 = v11[4];
  _mm_mfence();
  if ( (v12 & 0x3FFFFFFF) == 0 )
    sub_CD18F0(v2, v11);
  v13 = *a2[1];
  _mm_mfence();
  __sync_sub_and_fetch((volatile int32_t *)(v13 + 16), 1u);
  v14 = (uint32_t *)*a2[1];
  v15 = v14[4];
  _mm_mfence();
  if ( (v15 & 0x3FFFFFFF) == 0 )
    sub_CD18F0(v2, v14);
  v16 = *(int **)(a1 + 76);
  v17 = *a2;
  if ( v16 != nullptr && v17 >= v16 )
  {
    while ( 1 )
    {
      v18 = (int *)*v16;
      if ( *v16 == 0 || v17 < v18 )
        break;
      v16 = (int *)*v16;
    }
    *v17 = (int)(uintptr_t)(v18);
    *v16 = (int)(uintptr_t)(v17);
    v17 = *(int **)(a1 + 76);
  }
  else
  {
    *v17 = (int)(uintptr_t)(v16);
    *(uint32_t *)(a1 + 76) = (uint32_t)(uintptr_t)(v17);
  }
  v19 = a2[1];
  if ( v17 != nullptr && v19 >= v17 )
  {
    while ( 1 )
    {
      v20 = (int *)*v17;
      if ( *v17 == 0 || v19 < v20 )
        break;
      v17 = (int *)*v17;
    }
    *v19 = (int)(uintptr_t)(v20);
    *v17 = (int)(uintptr_t)(v19);
  }
  else
  {
    *v19 = (int)(uintptr_t)(v17);
    *(uint32_t *)(a1 + 76) = (uint32_t)(uintptr_t)(v19);
  }
  result = (unsigned int)(uintptr_t)(a2 + 6);
  if ( a2[2] != nullptr )
  {
    v22 = (unsigned int *)(a2 + 2);
    do
    {
      result = glitch::streaming::CLodCache::cleanupRecursive(a1, (int **)(uintptr_t)(*v22));
      v23 = *(unsigned int **)(a1 + 108);
      v24 = (unsigned int *)*v22;
      if ( v23 != nullptr && v24 >= v23 )
      {
        while ( 1 )
        {
          result = *v23;
          if ( *v23 == 0 || (unsigned int)(uintptr_t)(v24) < result )
            break;
          v23 = (unsigned int *)*v23;
        }
        *v24 = result;
        *v23 = (unsigned int)(uintptr_t)(v24);
      }
      else
      {
        *v24 = (unsigned int)(uintptr_t)(v23);
        *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(v24);
      }
      if ( a2 + 6 == (int **)++v22 )
        break;
      result = *v22;
    }
    while ( *v22 != 0 );
    v3 = a2;
  }
  v25 = (unsigned int **)v3[6];
  if ( v25 != nullptr )
  {
    result = (unsigned int)(uintptr_t)(v3[7]);
    for ( i = &v25[result]; i != v25; ++v25 )
    {
      if ( *v25 == nullptr )
        break;
      result = glitch::streaming::CLodCache::cleanupRecursive(a1, (int **)(*v25));
      v27 = *(unsigned int **)(a1 + 108);
      v28 = *v25;
      if ( v27 != nullptr && v28 >= v27 )
      {
        while ( 1 )
        {
          result = *v27;
          if ( *v27 == 0 || (unsigned int)(uintptr_t)(v28) < result )
            break;
          v27 = (unsigned int *)*v27;
        }
        *v28 = result;
        *v27 = (unsigned int)(uintptr_t)(v28);
      }
      else
      {
        *v28 = (unsigned int)(uintptr_t)(v27);
        *(uint32_t *)(a1 + 108) = (uint32_t)(uintptr_t)(v28);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodCache::preProcess  (binary VA: 0xcd90d0)
// Original: glitch::streaming::CLodCache::preProcess
// ----------------------------------------------------------------------------
void glitch::streaming::CLodCache::preProcess(glitch::streaming::CLodCache::Self *self)
{
  char *v1;
  char *v2;
  int v3;
  char v4;
  int v5;
  char *v6;

  v1 = *((char **)self + 65);
  v2 = (char *)self + 260;
  if ( v1 != (char *)self + 260 )
  {
    do
    {
      v3 = *((uint32_t *)v1 + 2);
      v4 = *(uint8_t *)(v3 + 76);
      if ( (v4 & 8) == 0 )
      {
        *(uint32_t *)(v3 + 72) = 0;
        *(uint32_t *)(v3 + 68) = *((uint32_t *)self + 54);
        v5 = *((uint32_t *)self + 54);
        if ( v5 != 0 )
          *(uint32_t *)(v5 + 72) = v3;
        *((uint32_t *)self + 54) = v3;
        v4 = *(uint8_t *)(v3 + 76) | 8;
      }
      *(uint8_t *)(v3 + 76) = v4 | 0x30;
      v1 = *(char **)v1;
    }
    while ( v2 != v1 );
    v1 = *((char **)self + 65);
  }
  if ( v1 != v2 )
  {
    while ( 1 )
    {
      v6 = *(char **)v1;
      opDelete(v1);
      if ( v6 == v2 )
        break;
      v1 = v6;
    }
  }
  *((uint32_t *)self + 65) = (uint32_t)(uintptr_t)(v2);
  *((uint32_t *)self + 66) = (uint32_t)(uintptr_t)(v2);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodStreamingModule::preProcess  (binary VA: 0xcd9170)
// Original: glitch::streaming::CLodStreamingModule::preProcess
// ----------------------------------------------------------------------------
void glitch::streaming::CLodStreamingModule::preProcess(glitch::streaming::CLodCache::Self **self)
{
  glitch::streaming::CLodCache::preProcess(*(self + 2));
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodCache::fillLodNodeLine  (binary VA: 0xcd91a0)
// Original: glitch::streaming::CLodCache::fillLodNodeLine
// ----------------------------------------------------------------------------
uint32_t * glitch::streaming::CLodCache::fillLodNodeLine(int a1, uint32_t *a2, int a3, int *a4, int a5)
{
  int *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int *v9;
  uint32_t *result;
  int *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  unsigned int v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  size_t v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  int *v29;
  int v30;
  unsigned int v31;

  v5 = a4;
  v6 = a2 + 1;
  if ( a5 == a3 )
    v6 = a2;
  v7 = (uint32_t *)a4[1];
  if ( v7 == (uint32_t *)a4[2] )
  {
    v12 = ((int)(uintptr_t)(v7) - *a4) >> 2;
    v25 = 4;
    v26 = v12;
    if ( v12 != 0 )
    {
      v19 = 2 * v12;
      if ( v26 > v19 || v19 > 0x3FFFFFFF )
        v25 = -4;
      else
        v25 = 8 * v26;
    }
    v23 = v6;
    v22 = (uint32_t *)a4[1];
    v30 = sub_4EBDC0(v25);
    v31 = v30 + 4;
    v13 = (uint32_t *)(v30 + 4 * v26);
    if ( v13 != nullptr )
      *v13 = *v23;
    v14 = (uint32_t *)*a4;
    v27 = *a4;
    if ( v22 != (uint32_t *)*a4 )
    {
      v15 = (uint32_t *)v30;
      do
      {
        if ( v15 != nullptr )
          *v15 = *v14;
        ++v14;
        ++v15;
      }
      while ( v22 != v14 );
      v31 = v30 + 4 * (((unsigned int)(uintptr_t)(v22) - v27 - 4) >> 2) + 8;
    }
    v28 = a4[1];
    if ( v22 != (uint32_t *)v28 )
    {
      v16 = (uint32_t *)a4[1];
      v17 = v22;
      v18 = (uint32_t *)v31;
      do
      {
        if ( v18 != nullptr )
          *v18 = *v17;
        ++v17;
        ++v18;
      }
      while ( v16 != v17 );
      v31 += 4 * ((unsigned int)(v28 - (uint32_t)(uintptr_t)(v22 + 1)) >> 2) + 4;
    }
    if ( *a4 != 0 )
      gll_operator_delete_arr(*a4);
    *a4 = v30;
    a4[1] = v31;
    a4[2] = v25 + v30;
  }
  else
  {
    v8 = 0;
    if ( v7 != nullptr )
    {
      *v7 = *v6;
      v8 = a4[1];
    }
    a4[1] = v8 + 4;
  }
  if ( a2[2] != 0 )
  {
    v9 = (int *)(a2 + 2);
    do
    {
      v20 = *v9++;
      glitch::streaming::CLodCache::fillLodNodeLine(a1, (uint32_t *)(uintptr_t)(v20), a3, a4, a5 + 1);
    }
    while ( a2 + 6 != (uint32_t *)(uintptr_t)(v9) && *v9 != 0 );
    v5 = a4;
  }
  result = (uint32_t *)a2[6];
  if ( result != nullptr )
  {
    v24 = (size_t)&result[a2[7]];
    if ( result != (uint32_t *)v24 && *result != 0 )
    {
      v29 = v5;
      v11 = (int *)a2[6];
      do
      {
        v21 = *v11++;
        result = (uint32_t *)glitch::streaming::CLodCache::fillLodNodeLine(a1, (uint32_t *)(uintptr_t)(v21), a3, v29, a5 + 1);
      }
      while ( (int *)v24 != v11 && *v11 != 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodCache::swapRecursive  (binary VA: 0xcd9440)
// Original: glitch::streaming::CLodCache::swapRecursive
// ----------------------------------------------------------------------------
int * glitch::streaming::CLodCache::swapRecursive(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int *v15;
  int v16;
  int *result;
  int *v18;
  int *v19;
  int v20;
  int v21;
  int v22;

  v4 = *(int **)a2;
  v5 = **(uint32_t **)a2;
  if ( *(uint32_t *)(*(uint32_t *)a2 + 4) != v5 )
  {
    v6 = v4[1];
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v6 + 16), 1u);
    v7 = (uint32_t *)v4[1];
    v8 = v7[4];
    _mm_mfence();
    if ( (v8 & 0x3FFFFFFF) == 0 )
    {
      v22 = v5;
      sub_CD18F0(v5, v7);
      v5 = v22;
    }
    v4[1] = v5;
    __sync_add_and_fetch((volatile int32_t *)(v4[1] + 16), 1u);
  }
  v9 = a2;
  v10 = *(int **)(a2 + 4);
  v11 = *v10;
  if ( v10[1] != *v10 )
  {
    v12 = v10[1];
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v12 + 16), 1u);
    v13 = (uint32_t *)v10[1];
    v14 = v13[4];
    _mm_mfence();
    if ( (v14 & 0x3FFFFFFF) == 0 )
    {
      v21 = v11;
      sub_CD18F0(v11, v13);
      v11 = v21;
    }
    v10[1] = v11;
    __sync_add_and_fetch((volatile int32_t *)(v10[1] + 16), 1u);
    v9 = a2;
  }
  if ( *(uint32_t *)(v9 + 8) != 0 )
  {
    v15 = (int *)(v9 + 8);
    do
    {
      v16 = *v15++;
      glitch::streaming::CLodCache::swapRecursive(a1, v16, a3, a4 + 1);
    }
    while ( (int *)(a2 + 24) != v15 && *v15 != 0 );
  }
  result = (int *)a2;
  v18 = *(int **)(a2 + 24);
  if ( v18 != nullptr )
  {
    result = &v18[*(uint32_t *)(a2 + 28)];
    if ( v18 != result && *v18 != 0 )
    {
      v19 = &v18[*(uint32_t *)(a2 + 28)];
      do
      {
        v20 = *v18++;
        result = (int *)glitch::streaming::CLodCache::swapRecursive(a1, v20, a3, a4 + 1);
        if ( v19 == v18 )
          break;
        result = (int *)*v18;
      }
      while ( *v18 != 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodCache::postProcess  (binary VA: 0xcd95e0)
// Original: glitch::streaming::CLodCache::postProcess
// ----------------------------------------------------------------------------
int glitch::streaming::CLodCache::postProcess(glitch::streaming::CLodCache::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  uint32_t *v7;
  int v8;

  v2 = *((uint32_t *)self + 54);
  if ( v2 != 0 )
  {
    while ( 1 )
    {
      glitch::streaming::CLodCache::swapRecursive((int)(uintptr_t)(self), *(uint32_t *)(v2 + 28), v2, 0);
      memcpy(*(void **)(v2 + 60), *(const void **)(v2 + 64), *(uint32_t *)(v2 + 40));
      v3 = *(uint32_t *)(v2 + 68);
      *(uint8_t *)(v2 + 76) &= ~8u;
      *(uint32_t *)(v2 + 56) = -1;
      *(uint32_t *)(v2 + 68) = 0;
      if ( v3 == 0 )
        break;
      v2 = v3;
    }
  }
  v4 = *((uint32_t *)self + 50);
  result = *((uint32_t *)self + 51);
  *((uint32_t *)self + 54) = 0;
  if ( result != v4 )
  {
    v6 = *((uint32_t *)self + 51);
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v6 + 16), 1u);
    v7 = *((uint32_t **)self + 51);
    v8 = v7[4];
    _mm_mfence();
    if ( (v8 & 0x3FFFFFFF) == 0 )
      sub_CD1BF0(v1, v7);
    *((uint32_t *)self + 51) = v4;
    result = *((uint32_t *)self + 51);
    __sync_add_and_fetch((volatile int32_t *)(result + 16), 1u);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodStreamingModule::postProcess  (binary VA: 0xcd96c0)
// Original: glitch::streaming::CLodStreamingModule::postProcess
// ----------------------------------------------------------------------------
int glitch::streaming::CLodStreamingModule::postProcess(glitch::streaming::CLodCache::Self **self)
{
  return glitch::streaming::CLodCache::postProcess(*(self + 2));
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodCache::setEnable  (binary VA: 0xcd9740)
// Original: glitch::streaming::CLodCache::setEnable
// ----------------------------------------------------------------------------
void glitch::streaming::CLodCache::setEnable()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodStreamingModule::setEnable  (binary VA: 0xcd9750)
// Original: glitch::streaming::CLodStreamingModule::setEnable
// ----------------------------------------------------------------------------
void glitch::streaming::CLodStreamingModule::setEnable()
{
  glitch::streaming::CLodCache::setEnable();
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodEmitter::Construct  (binary VA: 0xcd9790)
// Original: glitch::streaming::CLodEmitter::CLodEmitter
// ----------------------------------------------------------------------------
volatile int32_t * glitch::streaming::CLodEmitter::Construct(uint32_t *a1, int *a2, int a3)
{
  int v3;
  void **v4;
  int v5;
  int v6;
  void **v7;
  void **v8;
  void *v9;
  int v10;
  bool v11;
  void **v12;
  int v13;
  int v14;
  void **v15;
  void **v16;
  uint32_t *v17;
  void *v18;
  int v19;
  volatile int32_t *v20;
  volatile int32_t *v21;
  volatile int32_t *result;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef volatile int32_t *_g4_t_v29[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);

  v29[6] = (volatile int32_t *)&a1;
  v3 = a3;
  v28 = a2;
  v26 = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_206ED68);
  *((uint8_t *)v26 + 4) = 0;
  v27 = v3;
  v4 = (void **)&unk_1C81A60;
  v5 = 38;
LABEL_2:
  while ( 1 )
  {
    v6 = v5 >> 1;
    v7 = &v4[v5 >> 1];
    if ( (unsigned int)(uintptr_t)(*v7) > 0xA )
      break;
    v4 = v7 + 1;
    v5 = v5 - v6 - 1;
    if ( v5 <= 0 )
      goto LABEL_8;
  }
  while ( v6 > 0 )
  {
    v8 = &v4[v6 >> 1];
    if ( (unsigned int)(uintptr_t)(*v8) <= 0xA )
    {
      v4 = v8 + 1;
      v5 = v6 - (v6 >> 1) - 1;
      if ( v5 > 0 )
        goto LABEL_2;
      break;
    }
    v6 >>= 1;
  }
LABEL_8:
  if ( v4 == (void **)jpt_628CA1 )
    v4 = (void **)&unk_1C81AF4;
  v9 = *v4;
  v26[3] = 0;
  v26[2] = (uint32_t)(uintptr_t)(v9);
  v26[4] = 1065353216;
  v26[5] = 0;
  v26[6] = 0;
  v26[7] = 0;
  v26[8] = 0;
  v26[9] = 0;
  v26[10] = 0;
  v26[11] = 0;
  v10 = *v28;
  v11 = *v28 == 0;
  v26[12] = *v28;
  if ( !v11 )
    __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
  v26[13] = 2139095039;
  v26[14] = 2139095039;
  v26[15] = 2139095039;
  v26[16] = -8388609;
  v26[17] = -8388609;
  v26[18] = -8388609;
  v26[19] = 0;
  v26[20] = 0;
  v26[21] = 0;
  *((uint8_t *)v26 + 88) = 0;
  v12 = (void **)&unk_1C81A60;
  v13 = 38;
LABEL_13:
  while ( 1 )
  {
    v14 = v13 >> 1;
    v15 = &v12[v13 >> 1];
    if ( (unsigned int)(uintptr_t)(*v15) > 0xA )
      break;
    v12 = v15 + 1;
    v13 = v13 - v14 - 1;
    if ( v13 <= 0 )
      goto LABEL_19;
  }
  while ( v14 > 0 )
  {
    v16 = &v12[v14 >> 1];
    if ( (unsigned int)(uintptr_t)(*v16) <= 0xA )
    {
      v12 = v16 + 1;
      v13 = v14 - (v14 >> 1) - 1;
      if ( v13 > 0 )
        goto LABEL_13;
      break;
    }
    v14 >>= 1;
  }
LABEL_19:
  v17 = v26;
  if ( v12 == (void **)jpt_628CA1 )
    v12 = (void **)&unk_1C81AF4;
  v18 = *v12;
  v26[24] = 0;
  v26[23] = (uint32_t)(uintptr_t)(v18);
  v26[25] = 1065353216;
  v26[26] = 0;
  v26[27] = 0;
  sub_CD39B0(v26 + 28, "B_lod");
  sub_CD39B0(v26 + 29, "A_prelod");
  v19 = v26[12];
  v26[30] = v27;
  *((uint8_t *)v26 + 124) = 0;
  (*(void (**)(volatile int32_t **, int, int, int, int, uint32_t *, int, uint32_t *))(*(uint32_t *)v19 + 24))(
    v29,
    v19,
    v23,
    v24,
    v25,
    v26,
    v27,
    v26);
  v20 = v29[0];
  if ( v29[0] != nullptr )
    __sync_add_and_fetch(v29[0] + 1, 1u);
  v21 = (volatile int32_t *)v17[10];
  v17[10] = (uint32_t)(uintptr_t)(v20);
  if ( v21 != nullptr )
    sub_5459C0(v21);
  result = v29[0];
  if ( v29[0] != nullptr )
    result = (volatile int32_t *)sub_5459C0(v29[0]);
  v17[16] = -8388609;
  v17[17] = -8388609;
  v17[18] = -8388609;
  v17[13] = 2139095039;
  v17[14] = 2139095039;
  v17[15] = 2139095039;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodPreloadStreamingModule::Construct  (binary VA: 0xcd9a20)
// Original: glitch::streaming::CLodPreloadStreamingModule::CLodPreloadStreamingModule
// ----------------------------------------------------------------------------
int glitch::streaming::CLodPreloadStreamingModule::Construct(int a1, int *a2, int16_t a3)
{
  int result;
  bool v4;

  *(uint16_t *)(a1 + 4) = a3;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206EDA8);
  result = *a2;
  v4 = *a2 == 0;
  *(uint32_t *)(a1 + 8) = *a2;
  if ( !v4 )
    __sync_add_and_fetch((volatile int32_t *)(result + 4), 1u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodStreamingModule::Construct  (binary VA: 0xcd9a60)
// Original: glitch::streaming::CLodStreamingModule::CLodStreamingModule
// ----------------------------------------------------------------------------
int glitch::streaming::CLodStreamingModule::Construct(int a1, int *a2, int16_t a3)
{
  int result;
  bool v4;

  *(uint16_t *)(a1 + 4) = a3;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206EE08);
  result = *a2;
  v4 = *a2 == 0;
  *(uint32_t *)(a1 + 8) = *a2;
  if ( !v4 )
    __sync_add_and_fetch((volatile int32_t *)(result + 4), 1u);
  return result;
}



// ============================================================================
// Address:   0xcd9aa0 (size: 479 bytes)
// Symbol:    _ZN6glitch9streaming20CModifierEmitterBaseC2ERKSbIcSt11char_traitsIcENS_4core10SAllocatorIcLNS_6memory13E_MEMORY_HINTE0EEEESB_RKN5boost13intrusive_ptrINS_2io11IFileSystemEEERNS_4util11SStringPoolE
// Demangled: glitch::streaming::CModifierEmitterBase::CModifierEmitterBase(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,boost::intrusive_ptr<glitch::io::IFileSystem> const&,glitch::util::SStringPool &)
// ============================================================================
// Alternative name is '_ZN6glitch9streaming20CModifierEmitterBaseC1ERKSbIcSt11char_traitsIcENS_4core10SAllocatorIcLNS_6memory13E_MEMORY_HINTE0EEEESB_RKN5boost13intrusive_ptrINS_2io11IFileSystemEEERNS_4util11SStringPoolE'
void (**glitch::streaming::CModifierEmitterBase::Construct(
        int a1,
        int *a2,
        int *a3,
        int *a4,
        int a5))(glitch::streaming::detail::CU32IdCodec::Self * self)
{
  int v5;
  int v6;
  void **v7;
  int v8;
  void **v9;
  void **v10;
  void *v11;
  int v12;
  void *v13;
  int v14;
  void *v15;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206EE68);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  v5 = *a4;
  *(uint32_t *)(a1 + 20) = *a4;
  if ( v5 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v5 + 4), 1u);
  *(uint32_t *)(a1 + 24) = 2139095039;
  *(uint32_t *)(a1 + 28) = 2139095039;
  *(uint32_t *)(a1 + 32) = 2139095039;
  *(uint32_t *)(a1 + 36) = -8388609;
  *(uint32_t *)(a1 + 40) = -8388609;
  *(uint32_t *)(a1 + 44) = -8388609;
  *(uint8_t *)(a1 + 48) = 0;
  v6 = 38;
  v7 = (void **)&unk_1C81A60;
LABEL_4:
  while ( 1 )
  {
    v8 = v6 >> 1;
    v9 = &v7[v6 >> 1];
    if ( (unsigned int)(uintptr_t)(*v9) > 0xA )
      break;
    v7 = v9 + 1;
    v6 = v6 - v8 - 1;
    if ( v6 <= 0 )
      goto LABEL_10;
  }
  while ( v8 > 0 )
  {
    v10 = &v7[v8 >> 1];
    if ( (unsigned int)(uintptr_t)(*v10) <= 0xA )
    {
      v7 = v10 + 1;
      v6 = v8 - (v8 >> 1) - 1;
      if ( v6 > 0 )
        goto LABEL_4;
      break;
    }
    v8 >>= 1;
  }
LABEL_10:
  if ( v7 == (void **)jpt_628CA1 )
    v7 = (void **)&unk_1C81AF4;
  v11 = *v7;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(v11);
  *(uint32_t *)(a1 + 60) = 1065353216;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  v12 = *a2;
  v13 = (void *)(*a2 - 12);
  if ( *(int *)(*a2 - 4) < 0 )
  {
    v12 = sub_CD38A0((int)(uintptr_t)(v13));
  }
  else if ( v13 != &unk_20D3E6C )
  {
    __sync_add_and_fetch((volatile int32_t *)(v12 - 4), 1u);
  }
  *(uint32_t *)(a1 + 84) = v12;
  v14 = *a3;
  v15 = (void *)(*a3 - 12);
  if ( *(int *)(*a3 - 4) < 0 )
  {
    v14 = sub_CD38A0((int)(uintptr_t)(v15));
  }
  else if ( v15 != &unk_20D3E6C )
  {
    __sync_add_and_fetch((volatile int32_t *)(v14 - 4), 1u);
  }
  *(uint32_t *)(a1 + 88) = v14;
  *(uint32_t *)(a1 + 92) = a5;
  *(uint8_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 96) = ((uint32_t)(uintptr_t)&off_206F0E8);
  *(uint32_t *)(a1 + 36) = -8388609;
  *(uint32_t *)(a1 + 40) = -8388609;
  *(uint32_t *)(a1 + 44) = -8388609;
  *(uint32_t *)(a1 + 24) = 2139095039;
  *(uint32_t *)(a1 + 28) = 2139095039;
  *(uint32_t *)(a1 + 32) = 2139095039;
  return (void (**)(glitch::streaming::detail::CU32IdCodec::Self *))(uintptr_t)((void (**)(int *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206F0E8)));
}
// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierStreamingModule::swapFrameInternal  (binary VA: 0xcd9c80)
// Original: glitch::streaming::CModifierStreamingModule::swapFrameInternal
// ----------------------------------------------------------------------------
int glitch::streaming::CModifierStreamingModule::swapFrameInternal(glitch::streaming::CModifierStreamingModule::Self *self)
{
  int v1;
  int v2;
  int result;
  int v4;
  uint32_t *v5;
  int v6;

  v2 = *((uint32_t *)self + 20);
  result = *((uint32_t *)self + 21);
  if ( result != v2 )
  {
    v4 = *((uint32_t *)self + 21);
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v4 + 16), 1u);
    v5 = *((uint32_t **)self + 21);
    v6 = v5[4];
    _mm_mfence();
    if ( (v6 & 0x3FFFFFFF) == 0 )
      sub_CD1A90(v1, v5);
    *((uint32_t *)self + 21) = v2;
    result = *((uint32_t *)self + 21);
    __sync_add_and_fetch((volatile int32_t *)(result + 16), 1u);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierStreamingModule::extractGeometricInformationImpl  (binary VA: 0xcd9ce0)
// Original: glitch::streaming::CModifierStreamingModule::extractGeometricInformationImpl
// ----------------------------------------------------------------------------
uint8_t * glitch::streaming::CModifierStreamingModule::extractGeometricInformationImpl(glitch::streaming::CModifierStreamingModule::Self *self, unsigned int a2, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a3)
{
  uint32_t *v3;
  int v4;
  int *v5;
  int v6;
  uint8_t *result;
  int v8;
  char *v9;
  uint8_t *v10[5];

  v3 = *((uint32_t **)self + 21);
LABEL_2:
  while ( 2 )
  {
    v4 = v3[4] >> 30;
    _mm_mfence();
    if ( v4 == 1 )
    {
LABEL_11:
      v5 = nullptr;
      if ( *v3 == a2 )
        v5 = (int *)(v3 + 1);
    }
    else
    {
      while ( v4 == 2 )
      {
        if ( (a2 & v3[1]) != 0 )
        {
          v3 = (uint32_t *)v3[3];
          goto LABEL_2;
        }
        v3 = (uint32_t *)v3[2];
        v4 = v3[4] >> 30;
        _mm_mfence();
        if ( v4 == 1 )
          goto LABEL_11;
      }
      if ( v4 != 0 )
        continue;
      v5 = nullptr;
    }
    break;
  }
  v6 = *v5;
  v10[1] = nullptr;
  v10[0] = *(uint8_t **)(v6 + 24);
  result = *(uint8_t **)(v6 + 28);
  if ( result != nullptr )
  {
    do
    {
      v8 = *((uint32_t *)self + 8);
      v9 = sub_CD12F0(v10);
      G4_VCALL<void>(v8, 44, *((uint32_t *)self + 9) + 16 * (uint32_t)(uintptr_t)(v9), *((uint32_t *)self + 9) + 16 * (uint32_t)(uintptr_t)(v9) + 16, a3);
      sub_CD1350(v10);
      result = (uint8_t *)(*(uint32_t *)(v6 + 28) + *(uint32_t *)(v6 + 24));
    }
    while ( v10[0] != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierStreamingModule::extractGeometricInformation  (binary VA: 0xcd9db0)
// Original: glitch::streaming::CModifierStreamingModule::extractGeometricInformation
// ----------------------------------------------------------------------------
uint8_t * glitch::streaming::CModifierStreamingModule::extractGeometricInformation(glitch::streaming::CModifierStreamingModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a4)
{
  const glitch::streaming::SCommandAndRegisterer::Self *i;
  unsigned int v5;
  uint8_t *result;

  for ( i = a2; a3 != i; result = glitch::streaming::CModifierStreamingModule::extractGeometricInformationImpl(
                                    self,
                                    v5,
                                    a4) )
  {
    v5 = *((uint32_t *)i + 2);
    i = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)i + 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CNullStreamingModule::Construct  (binary VA: 0xcd9e00)
// Original: glitch::streaming::CNullStreamingModule::CNullStreamingModule
// ----------------------------------------------------------------------------
glitch::streaming::CNullStreamingModule::Self * glitch::streaming::CNullStreamingModule::Construct(glitch::streaming::CNullStreamingModule::Self *self, int16_t a2)
{
  *((uint16_t *)self + 2) = a2;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EF08);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::Construct  (binary VA: 0xcd9e30)
// Original: glitch::streaming::CSegmentStreamingModule::CSegmentStreamingModule
// ----------------------------------------------------------------------------
int glitch::streaming::CSegmentStreamingModule::Construct(int a1, int *a2, int a3, int *a4, int *a5, int16_t a6)
{
  int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  void **v11;
  int v12;
  void **v13;
  void **v14;
  void *v15;
  int v16;
  void *v17;
  int v19[8];

  *(uint16_t *)(a1 + 4) = a6;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206EF68);
  v6 = *a2;
  v7 = *a2 == 0;
  *(uint32_t *)(a1 + 8) = *a2;
  if ( !v7 )
    __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
  *(uint32_t *)(a1 + 12) = a3;
  v8 = *a4;
  v7 = *a4 == 0;
  *(uint32_t *)(a1 + 16) = *a4;
  if ( !v7 )
    __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
  *(uint32_t *)(a1 + 20) = 0;
  v9 = *a5;
  *(uint32_t *)(a1 + 24) = *a5;
  if ( v9 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1u);
  *(uint8_t *)(a1 + 28) = 0;
  v10 = 38;
  v11 = (void **)&unk_1C81A60;
LABEL_8:
  while ( 1 )
  {
    v12 = v10 >> 1;
    v13 = &v11[v10 >> 1];
    if ( (unsigned int)(uintptr_t)(*v13) > 0xA )
      break;
    v11 = v13 + 1;
    v10 = v10 - v12 - 1;
    if ( v10 <= 0 )
      goto LABEL_14;
  }
  while ( v12 > 0 )
  {
    v14 = &v11[v12 >> 1];
    if ( (unsigned int)(uintptr_t)(*v14) <= 0xA )
    {
      v11 = v14 + 1;
      v10 = v12 - (v12 >> 1) - 1;
      if ( v10 > 0 )
        goto LABEL_8;
      break;
    }
    v12 >>= 1;
  }
LABEL_14:
  if ( v11 == (void **)jpt_628CA1 )
    v11 = (void **)&unk_1C81AF4;
  v15 = *v11;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v15);
  *(uint32_t *)(a1 + 40) = 1065353216;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  *(uint32_t *)(a1 + 64) = 12;
  *(uint32_t *)(a1 + 68) = 32;
  *(uint32_t *)(a1 + 72) = 32;
  *(uint32_t *)(a1 + 76) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 88) = 0;
  *(uint32_t *)(a1 + 92) = 0;
  sub_CD1410(a4, (int)(uintptr_t)(v19), 1);
  v16 = opNewArray(4 * v19[0]);
  v17 = *(void **)(a1 + 20);
  *(uint32_t *)(a1 + 20) = v16;
  if ( v17 != nullptr )
  {
    opDeleteArray(v17);
    v16 = *(uint32_t *)(a1 + 20);
  }
  return sub_CD1410(a4, v16, v19[0]);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::removeSingleObject  (binary VA: 0xcd9fe0)
// Original: glitch::streaming::CSegmentStreamingModule::removeSingleObject
// ----------------------------------------------------------------------------
int glitch::streaming::CSegmentStreamingModule::removeSingleObject(int a1, unsigned int a2, uint32_t *a3)
{
  unsigned int v3;
  unsigned int v4;
  uint32_t *v5;
  int *v6;
  int v7;
  unsigned int v8;
  int v9;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  bool v21;
  uint32_t *v22;
  uint32_t *v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v30[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v25)) > _g4_s1 ? (16u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v26)) > _g4_s2 ? (24u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v27)) > _g4_s3 ? (24u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v28)) > _g4_s4 ? (28u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v30)) > _g4_s6 ? (32u + sizeof(_g4_t_v30)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);

  v3 = a2;
  v4 = *(uint32_t *)(a1 + 32);
  v5 = nullptr;
  v28 = a2 % v4;
  if ( *(uint32_t *)(a1 + 36) != 0 )
  {
    v6 = *(int **)(*(uint32_t *)(a1 + 48) + 4 * v28);
    if ( v6 != nullptr )
    {
      v7 = *v6;
      if ( v7 != 0 )
        v5 = (uint32_t *)(v7 - 12);
    }
  }
  while ( 1 )
  {
    if ( v5 == nullptr )
    {
LABEL_9:
      v30[0] = 0;
      goto LABEL_10;
    }
    v8 = v5[4];
    if ( v8 == a2 )
      break;
    if ( v28 != v8 % v4 )
      goto LABEL_9;
LABEL_8:
    v9 = v5[3];
    if ( v9 == 0 )
      goto LABEL_9;
    v5 = (uint32_t *)(v9 - 12);
  }
  if ( *v5 != a2 )
    goto LABEL_8;
  --v5[2];
  v30[0] = 0;
  glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v30);
  v30[0] = v5[1];
  __sync_add_and_fetch((volatile int32_t *)(v30[0] + 8), 1u);
  v3 = a2;
  if ( v5[2] != 0x80000000 )
    goto LABEL_10;
  (*(void (**)(uint32_t, unsigned int))(**(uint32_t **)(a1 + 8) + 124))(*(uint32_t *)(a1 + 8), a2);
  v26 = v5 + 3;
  v11 = v5[3];
  v12 = v11 - 12;
  if ( v11 == 0 )
    v12 = 0;
  v13 = *(uint32_t **)(*(uint32_t *)(a1 + 48) + 4 * (v5[4] % *(uint32_t *)(a1 + 32)));
  v29 = v5[4] % *(uint32_t *)(a1 + 32);
  while ( 1 )
  {
    v14 = (uint32_t *)*v13;
    if ( v26 == (uint32_t *)*v13 )
      break;
    v13 = (uint32_t *)*v13;
  }
  v25 = v13;
  v15 = (uint32_t *)(v12 + 12);
  if ( v12 == 0 )
    v15 = nullptr;
  v27 = v15;
  v16 = v25;
  while ( 2 )
  {
    v21 = v14 == nullptr;
    v22 = v14 - 3;
    v23 = nullptr;
    if ( !v21 )
      v23 = v22;
    *v16 = v23[3];
    v24 = v16;
    glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)(v23 + 1));
    opDelete(v23);
    --*(uint32_t *)(a1 + 36);
    v16 = v24;
    v14 = (uint32_t *)*v24;
    if ( *v24 != 0 )
    {
      v17 = v14[1] % *(uint32_t *)(a1 + 32);
      v18 = v17;
      if ( v17 != v29 )
      {
        *(uint32_t *)(*(uint32_t *)(a1 + 48) + 4 * v17) = (uint32_t)(uintptr_t)(v24);
        v19 = v29;
        goto LABEL_25;
      }
    }
    else
    {
      v18 = v29;
      v19 = v29;
LABEL_25:
      v20 = (uint32_t *)(*(uint32_t *)(a1 + 48) + 4 * v19);
      if ( (uint32_t *)*v20 == v24 )
        *v20 = 0;
      v14 = (uint32_t *)*v24;
      v29 = v18;
    }
    if ( v27 != v14 )
      continue;
    break;
  }
  v3 = a2;
LABEL_10:
  if ( *a3 != 0 )
    G4_VCALL<void>(*a3, 16, *(uint32_t *)(a1 + 12), v3, v30, 0);
  return glitch::streaming::SResourceWeakPtr::decrement((glitch::streaming::SResourceWeakPtr::Self *)v30);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::removeObjects  (binary VA: 0xcda200)
// Original: glitch::streaming::CSegmentStreamingModule::removeObjects
// ----------------------------------------------------------------------------
int glitch::streaming::CSegmentStreamingModule::removeObjects(glitch::streaming::CSegmentStreamingModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  const glitch::streaming::SCommandAndRegisterer::Self *i;
  unsigned int v4;
  int result;
  uint32_t *v6;

  for ( i = a2; a3 != i; result = glitch::streaming::CSegmentStreamingModule::removeSingleObject((int)(uintptr_t)(self), v4, v6) )
  {
    v6 = (uint32_t *)((char *)i + 16);
    v4 = *((uint32_t *)i + 2);
    i = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)i + 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CSegmentStreamingModule::removeObjects  (binary VA: 0xcda250)
// Original: glitch::streaming::CSegmentStreamingModule::removeObjects
// ----------------------------------------------------------------------------
uint8_t ** glitch::streaming::CSegmentStreamingModule::removeObjects(int a1, int a2, uint8_t *a3, uint32_t *a4)
{
  uint8_t **result;
  char *v5;
  uint8_t *v6[7];

  result = (uint8_t **)a3;
  v6[0] = a3;
  for ( v6[1] = nullptr; &a3[a2] != v6[0]; result = sub_CD1350(v6) )
  {
    v5 = sub_CD12F0(v6);
    glitch::streaming::CSegmentStreamingModule::removeSingleObject(a1, (unsigned int)(uintptr_t)(v5), a4);
  }
  return result;
}



// ============================================================================
// Address:   0xcda2c0 (size: 68 bytes)
// Symbol:    _ZN6glitch9streaming27CStaticBatchStreamingModuleC1Es
// Demangled: glitch::streaming::CStaticBatchStreamingModule::CStaticBatchStreamingModule(short)
// ============================================================================
// Alternative name is '_ZN6glitch9streaming27CStaticBatchStreamingModuleC2Es'
void (**glitch::streaming::CStaticBatchStreamingModule::CStaticBatchStreamingModule(
        glitch::streaming::CStaticBatchStreamingModule::Self *self,
        int16_t a2))(glitch::streaming::CStaticBatchStreamingModule::Self * self)
{
  glitch::streaming::CNullStreamingModule::Construct((glitch::streaming::CNullStreamingModule::Self *)(self), a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EFC8);
  return (void (**)(glitch::streaming::CStaticBatchStreamingModule::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206EFC8));
}
// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStaticSegmentStreamingModule::Construct  (binary VA: 0xcda310)
// Original: glitch::streaming::CStaticSegmentStreamingModule::CStaticSegmentStreamingModule
// ----------------------------------------------------------------------------
uint32_t * glitch::streaming::CStaticSegmentStreamingModule::Construct(int a1, int *a2, int a3, int16_t a4, const char *a5)
{
  int v5;
  bool v6;
  int v7;
  void **v8;
  int v9;
  void **v10;
  void **v11;
  void *v12;

  *(uint16_t *)(a1 + 4) = a4;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206F028);
  v5 = *a2;
  v6 = *a2 == 0;
  *(uint32_t *)(a1 + 8) = *a2;
  if ( !v6 )
    __sync_add_and_fetch((volatile int32_t *)(v5 + 4), 1u);
  *(uint32_t *)(a1 + 12) = a3;
  *(uint8_t *)(a1 + 16) = 0;
  v7 = 38;
  v8 = (void **)&unk_1C81A60;
LABEL_4:
  while ( 1 )
  {
    v9 = v7 >> 1;
    v10 = &v8[v7 >> 1];
    if ( (unsigned int)(uintptr_t)(*v10) > 0xA )
      break;
    v8 = v10 + 1;
    v7 = v7 - v9 - 1;
    if ( v7 <= 0 )
      goto LABEL_10;
  }
  while ( v9 > 0 )
  {
    v11 = &v8[v9 >> 1];
    if ( (unsigned int)(uintptr_t)(*v11) <= 0xA )
    {
      v8 = v11 + 1;
      v7 = v9 - (v9 >> 1) - 1;
      if ( v7 > 0 )
        goto LABEL_4;
      break;
    }
    v9 >>= 1;
  }
LABEL_10:
  if ( v8 == (void **)jpt_628CA1 )
    v8 = (void **)&unk_1C81AF4;
  v12 = *v8;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v12);
  *(uint32_t *)(a1 + 28) = 1065353216;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  return sub_CD39B0((uint32_t *)(a1 + 40), a5);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::addImpl  (binary VA: 0xcda400)
// Original: glitch::streaming::CStreamingPackage::addImpl
// ----------------------------------------------------------------------------
int glitch::streaming::CStreamingPackage::addImpl(glitch::streaming::CStreamingPackage::Self *self, const char *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3, const glitch::streaming::SCommandAndRegisterer::Self *a4)
{
  int result;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  sub_CD10D0(&v5, (uint32_t *)self + 2, (unsigned int)(uintptr_t)(a2));
  result = 0;
  if ( v5 != 0 )
  {
    (*(void (**)(uint32_t, const glitch::streaming::SCommandAndRegisterer::Self *, const glitch::streaming::SCommandAndRegisterer::Self *))(**(uint32_t **)(v5 + 4) + 12))(
      *(uint32_t *)(v5 + 4),
      a3,
      a4);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::addImpl  (binary VA: 0xcda450)
// Original: glitch::streaming::CStreamingPackage::addImpl
// ----------------------------------------------------------------------------
int glitch::streaming::CStreamingPackage::addImpl(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int result;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  sub_CD10D0(&v6, (uint32_t *)(a1 + 8), a2);
  result = 0;
  if ( v6 != 0 )
  {
    (*(void (**)(uint32_t, int, int, int))(**(uint32_t **)(v6 + 4) + 16))(*(uint32_t *)(v6 + 4), a3, a4, a5);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::removeImpl  (binary VA: 0xcda4a0)
// Original: glitch::streaming::CStreamingPackage::removeImpl
// ----------------------------------------------------------------------------
int glitch::streaming::CStreamingPackage::removeImpl(glitch::streaming::CStreamingPackage::Self *self, const char *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3, const glitch::streaming::SCommandAndRegisterer::Self *a4)
{
  int result;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  sub_CD10D0(&v5, (uint32_t *)self + 2, (unsigned int)(uintptr_t)(a2));
  result = 0;
  if ( v5 != 0 )
  {
    (*(void (**)(uint32_t, const glitch::streaming::SCommandAndRegisterer::Self *, const glitch::streaming::SCommandAndRegisterer::Self *))(**(uint32_t **)(v5 + 4) + 20))(
      *(uint32_t *)(v5 + 4),
      a3,
      a4);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::removeImpl  (binary VA: 0xcda4f0)
// Original: glitch::streaming::CStreamingPackage::removeImpl
// ----------------------------------------------------------------------------
int glitch::streaming::CStreamingPackage::removeImpl(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int result;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  sub_CD10D0(&v6, (uint32_t *)(a1 + 8), a2);
  result = 0;
  if ( v6 != 0 )
  {
    (*(void (**)(uint32_t, int, int, int))(**(uint32_t **)(v6 + 4) + 24))(*(uint32_t *)(v6 + 4), a3, a4, a5);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::decodeImpl  (binary VA: 0xcda540)
// Original: glitch::streaming::CStreamingPackage::decodeImpl
// ----------------------------------------------------------------------------
int glitch::streaming::CStreamingPackage::decodeImpl(glitch::streaming::CStreamingPackage::Self *self, const char *a2, unsigned int a3, unsigned int a4, const void *a5, std::vector<glitch::streaming::SCommandAndRegisterer::Self, glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer::Self, (glitch::memory::E_MEMORY_HINT)0>> *a6)
{
  int result;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  sub_CD10D0(&v7, (uint32_t *)self + 2, (unsigned int)(uintptr_t)(a2));
  result = v7;
  if ( v7 != 0 )
    return (*(int (**)(uint32_t, unsigned int, unsigned int, const void *, std::vector<glitch::streaming::SCommandAndRegisterer::Self, glitch::core::SAllocator<glitch::streaming::SCommandAndRegisterer::Self, (glitch::memory::E_MEMORY_HINT)0>> *))(**(uint32_t **)(v7 + 4) + 32))(
             *(uint32_t *)(v7 + 4),
             a3,
             a4,
             a5,
             a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::setEnableImpl  (binary VA: 0xcda590)
// Original: glitch::streaming::CStreamingPackage::setEnableImpl
// ----------------------------------------------------------------------------
int glitch::streaming::CStreamingPackage::setEnableImpl(int a1, unsigned int a2, int a3, int a4)
{
  int result;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  sub_CD10D0(&v5, (uint32_t *)(a1 + 8), a2);
  result = 0;
  if ( v5 != 0 )
  {
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(v5 + 4) + 40))(*(uint32_t *)(v5 + 4), a3, a4);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CStreamingPackage::getGeometricInfoImpl  (binary VA: 0xcda5e0)
// Original: glitch::streaming::CStreamingPackage::getGeometricInfoImpl
// ----------------------------------------------------------------------------
int glitch::streaming::CStreamingPackage::getGeometricInfoImpl(glitch::streaming::CStreamingPackage::Self *self, const char *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3, const glitch::streaming::SCommandAndRegisterer::Self *a4, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a5)
{
  int result;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  sub_CD10D0(&v6, (uint32_t *)self + 2, (unsigned int)(uintptr_t)(a2));
  result = v6;
  if ( v6 != 0 )
    return (*(int (**)(uint32_t, const glitch::streaming::SCommandAndRegisterer::Self *, const glitch::streaming::SCommandAndRegisterer::Self *, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *))(**(uint32_t **)(v6 + 4) + 36))(
             *(uint32_t *)(v6 + 4),
             a3,
             a4,
             a5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::detail::SInPlaceMetaDataPolicy::init  (binary VA: 0xcda630)
// Original: glitch::streaming::detail::SInPlaceMetaDataPolicy::init
// ----------------------------------------------------------------------------
char * glitch::streaming::detail::SInPlaceMetaDataPolicy::init(glitch::streaming::detail::SInPlaceMetaDataPolicy::Self *self, uint32_t *s, unsigned int a3, unsigned int a4)
{
  uint32_t *v4;
  char *result;

  v4 = s;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(s);
  *((uint32_t *)self + 1) = a3;
  *((uint32_t *)self + 2) = a4;
  result = (char *)memset(s, 0, a3 * a4);
  if ( a4 != 0 )
  {
    result = nullptr;
    do
    {
      ++result;
      *v4 = -268435448;
      v4[1] = -1;
      v4[4] = a3 - 8;
      v4 = (uint32_t *)((char *)v4 + a3);
    }
    while ( result != (char *)a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle  (binary VA: 0xcda6b0)
// Original: glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(glitch::streaming::detail::SInPlaceMetaDataPolicy::Self *self, unsigned int a2, unsigned int a3)
{
  return *(uint32_t *)self + a3 + *((uint32_t *)self + 1) * a2;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle_eacda6d0  (binary VA: 0xcda6d0)
// Original: glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle_eacda6d0(glitch::streaming::detail::SInPlaceMetaDataPolicy::Self *self, unsigned int a2, unsigned int a3)
{
  return *(uint32_t *)self + a3 + *((uint32_t *)self + 1) * a2;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::detail::SInPlaceMetaDataPolicy::getNextFreeBlockHandle  (binary VA: 0xcda6f0)
// Original: glitch::streaming::detail::SInPlaceMetaDataPolicy::getNextFreeBlockHandle
// ----------------------------------------------------------------------------
int glitch::streaming::detail::SInPlaceMetaDataPolicy::getNextFreeBlockHandle(glitch::streaming::detail::SInPlaceMetaDataPolicy::Self *self, unsigned int a2, unsigned int a3)
{
  return *(uint32_t *)glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, a3) & 0xFFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::detail::SInPlaceMetaDataPolicy::getFreeBlockInfo  (binary VA: 0xcda730)
// Original: glitch::streaming::detail::SInPlaceMetaDataPolicy::getFreeBlockInfo
// ----------------------------------------------------------------------------
glitch::streaming::detail::SInPlaceMetaDataPolicy::Self * glitch::streaming::detail::SInPlaceMetaDataPolicy::getFreeBlockInfo(glitch::streaming::detail::SInPlaceMetaDataPolicy::Self *self, glitch::streaming::detail::SInPlaceMetaDataPolicy::Self *a2, unsigned int a3, unsigned int a4)
{
  int v4;

  v4 = *(uint32_t *)(glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(a2, a3, a4) + 8);
  *(uint32_t *)self = a4;
  *((uint32_t *)self + 1) = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::detail::SInPlaceMetaDataPolicy::allocBlock  (binary VA: 0xcda790)
// Original: glitch::streaming::detail::SInPlaceMetaDataPolicy::allocBlock
// ----------------------------------------------------------------------------
uint32_t * glitch::streaming::detail::SInPlaceMetaDataPolicy::allocBlock(glitch::streaming::detail::SInPlaceMetaDataPolicy::Self *self, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *DataForHandle;
  unsigned int v5;
  uint32_t *v6;
  uint32_t *result;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  uint32_t *v11;

  DataForHandle = (unsigned int *)glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, a3);
  v5 = *DataForHandle;
  v10 = DataForHandle[1];
  v9 = DataForHandle[2];
  v11 = (uint32_t *)glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, v10);
  v8 = glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, v5);
  if ( v9 == a4 )
  {
    *v11 = v5;
    if ( v5 != 0 )
      *(uint32_t *)(v8 + 4) = v10;
  }
  else
  {
    v6 = (uint32_t *)glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, a3 + a4);
    *v6 = v5;
    v6[1] = v10;
    v6[2] = v9 - a4;
    *v11 = a3 + a4;
    if ( v5 != 0 )
      *(uint32_t *)(v8 + 4) = a3 + a4;
  }
  result = (uint32_t *)glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, 0);
  *result &= 0xFFFFFFFu;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::detail::SInPlaceMetaDataPolicy::deallocBlock  (binary VA: 0xcda8a0)
// Original: glitch::streaming::detail::SInPlaceMetaDataPolicy::deallocBlock
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::detail::SInPlaceMetaDataPolicy::deallocBlock(glitch::streaming::detail::SInPlaceMetaDataPolicy::Self *self, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int NextFreeBlockHandle;
  unsigned int v7;
  unsigned int DataForHandle;
  unsigned int *v9;
  uint32_t *v10;
  unsigned int v11;
  int v12;
  uint32_t *v13;
  unsigned int v15;
  typedef unsigned int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef unsigned int _g4_t_v24[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v20)) > _g4_s4 ? (12u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v21)) > _g4_s5 ? (12u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v22)) > _g4_s6 ? (16u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v23)) > _g4_s7 ? (20u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v24)) > _g4_s8 ? (24u + sizeof(_g4_t_v24)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);

  while ( 1 )
  {
    NextFreeBlockHandle = glitch::streaming::detail::SInPlaceMetaDataPolicy::getNextFreeBlockHandle(self, a2, a5);
    if ( NextFreeBlockHandle == 0 )
      break;
    v17 = NextFreeBlockHandle;
    glitch::streaming::detail::SInPlaceMetaDataPolicy::getFreeBlockInfo(
      (glitch::streaming::detail::SInPlaceMetaDataPolicy::Self *)v24,
      self,
      a2,
      NextFreeBlockHandle);
    NextFreeBlockHandle = v17;
    if ( a3 <= v24[0] )
      break;
    a5 = v17;
  }
  v7 = NextFreeBlockHandle;
  DataForHandle = glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, a5);
  v20 = 0;
  if ( a5 != 0 )
    v20 = *(uint32_t *)(DataForHandle + 8);
  v18 = (uint32_t *)DataForHandle;
  v16 = glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, a3);
  v9 = (unsigned int *)glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, v7);
  v22 = 0;
  v10 = v18;
  if ( v7 != 0 )
    v22 = v9[2];
  if ( a5 + v20 == a3 )
  {
    v21 = v18[2] + a4;
    v18[2] = v21;
    v23 = a5;
    v11 = a4;
  }
  else
  {
    *v18 = a3;
    v11 = a4;
    v21 = a4;
    *(uint32_t *)(v16 + 4) = a5;
    *(uint32_t *)(v16 + 8) = a4;
    v23 = a3;
    v10 = (uint32_t *)v16;
  }
  if ( a3 + v11 == v7 )
  {
    v21 += v22;
    v10[2] = v21;
    *v10 = *v9;
    v15 = *v9;
    if ( v15 != 0 )
    {
      v19 = v10;
      *(uint32_t *)(glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, v15) + 4) = v23;
      v21 = v19[2];
    }
  }
  else
  {
    *v10 = v7;
    if ( v7 != 0 )
    {
      v9[1] = v23;
      v21 = v10[2];
    }
  }
  v12 = *((uint32_t *)self + 1) - 8;
  v13 = (uint32_t *)glitch::streaming::detail::SInPlaceMetaDataPolicy::getDataForHandle(self, a2, 0);
  if ( v12 == v21 )
    *v13 |= 0xF0000000;
  else
    *v13 &= 0xFFFFFFFu;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::detail::fillBatchInfo  (binary VA: 0xcdaa90)
// Original: glitch::streaming::detail::fillBatchInfo
// ----------------------------------------------------------------------------
void glitch::streaming::detail::fillBatchInfo(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, glitch::video::CMaterial::Self **a7)
{
  uint32_t *v7;
  glitch::video::CMaterial::Self **v8;
  int v9;
  volatile int32_t *v10;
  glitch::video::CMaterial::Self *v11;
  bool v12;
  glitch::video::CMaterial::Self *v13;
  volatile int32_t *v14;
  glitch::video::CMaterialVertexAttributeMap::Self *v15;
  glitch::video::CMaterialVertexAttributeMap::Self *v16;
  int v17;
  uint8_t v18;
  int v19;
  glitch::video::CVertexAttributeMap::Self *v20;
  void *v21;
  glitch::video::CVertexStreams::Self *v22;
  int j;
  int v24;
  volatile int32_t *v25;
  glitch::video::CVertexStreams::Self *v26;
  glitch::video::CVertexStreams::Self *v27;
  uint32_t *savedregs;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint16_t *_g4_t_v39;
  typedef char _g4_t_v40[4];
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_i;
  typedef uint8_t _g4_t_v43;
  typedef int _g4_t_v44;
  typedef glitch::video::CMaterial::Self **_g4_t_v45;
  typedef int _g4_t_v46;
  typedef void *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef volatile int32_t **_g4_t_v49;
  typedef uint32_t _g4_t_v50[4];
  typedef volatile int32_t *_g4_t_v51[4];
  typedef volatile int32_t *_g4_t_v52[4];
  typedef glitch::video::CVertexStreams::Self *_g4_t_v53[4];
  typedef volatile int32_t *_g4_t_v54[4];
  typedef volatile int32_t *_g4_t_v55[2];
  typedef void *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int32_t _g4_t_v58[11];
  typedef volatile int32_t **_g4_t_v59;
  typedef glitch::video::CMaterial::Self **_g4_t_v60;
  typedef int _g4_t_v61;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v29)) > _g4_s1 ? (4u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v32)) > _g4_s4 ? (16u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v33)) > _g4_s5 ? (20u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v34)) > _g4_s6 ? (24u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v35)) > _g4_s7 ? (28u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v36)) > _g4_s8 ? (32u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v37)) > _g4_s9 ? (32u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v38)) > _g4_s10 ? (36u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v39)) > _g4_s11 ? (40u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v40)) > _g4_s12 ? (44u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v41)) > _g4_s13 ? (48u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (50u + sizeof(_g4_t_i)) > _g4_s14 ? (50u + sizeof(_g4_t_i)) : _g4_s14,
    _g4_s16 = (51u + sizeof(_g4_t_v43)) > _g4_s15 ? (51u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v44)) > _g4_s16 ? (52u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v45)) > _g4_s17 ? (56u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v46)) > _g4_s18 ? (56u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v47)) > _g4_s19 ? (60u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v48)) > _g4_s20 ? (60u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v49)) > _g4_s21 ? (64u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v50)) > _g4_s22 ? (68u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v51)) > _g4_s23 ? (84u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v52)) > _g4_s24 ? (100u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v53)) > _g4_s25 ? (116u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v54)) > _g4_s26 ? (132u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v55)) > _g4_s27 ? (148u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v56)) > _g4_s28 ? (156u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v57)) > _g4_s29 ? (160u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v58)) > _g4_s30 ? (164u + sizeof(_g4_t_v58)) : _g4_s30,
    _g4_s32 = (208u + sizeof(_g4_t_v59)) > _g4_s31 ? (208u + sizeof(_g4_t_v59)) : _g4_s31,
    _g4_s33 = (212u + sizeof(_g4_t_v60)) > _g4_s32 ? (212u + sizeof(_g4_t_v60)) : _g4_s32,
    _g4_s34 = (216u + sizeof(_g4_t_v61)) > _g4_s33 ? (216u + sizeof(_g4_t_v61)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 50u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 51u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 100u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 116u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 148u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 156u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 160u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 164u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 208u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 212u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 216u);

  v58[10] = (int32_t)(uintptr_t)(&a1);
  v7 = a1;
  v8 = a7;
  G4_VCALL<void>(*a1, 24, a5 * a4 + 4, 0, v28, v29, v30, v31, v32, v33, v34, v35, v36, a5, a6, *(char **)v40, v41, v44, a3, v47, a2, v50[0], v50[1], v50[2], v50[3], v51[0], v51[1], v51[2], v51[3], v52[0], v52[1], v52[2], v52[3], v53[0], v53[1], v53[2], v53[3], v54[0], v54[1], v54[2], v54[3], v55[0], v55[1], v56, v57, v58[0], v58[1], v58[2], v58[3], v58[4], v58[5], v58[6], v58[7], v58[8], v58[9]);
  G4_VCALL<void>(*v7, 12, v39, v38);
  v9 = *v39;
  v48 = (char *)(v39 + 1);
  savedregs = v50;
  v61 = v9;
  v50[0] = 0;
  v60 = v45;
  v59 = v49;
  glitch::collada::CColladaDatabase::constructMaterial(v51);
  v10 = v51[0];
  if ( v51[0] != nullptr )
    __sync_add_and_fetch(v51[0], 1u);
  v11 = v8[1];
  v8[1] = (glitch::video::CMaterial::Self *)v10;
  if ( v11 != nullptr )
  {
    v12 = *(uint32_t *)v11 == 2;
    _mm_mfence();
    if ( v12 )
      glitch::video::CMaterial::removeFromRootSceneNode(v11);
    if ( __sync_fetch_and_add((volatile int32_t *)v11, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v11);
      gll_operator_delete_arr((int)(uintptr_t)(v11));
    }
  }
  v13 = (glitch::video::CMaterial::Self *)v51[0];
  if ( v51[0] != nullptr )
  {
    v12 = *v51[0] == 2;
    _mm_mfence();
    if ( v12 )
      glitch::video::CMaterial::removeFromRootSceneNode(v13);
    if ( __sync_fetch_and_add((volatile int32_t *)v13, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v13);
      gll_operator_delete_arr((int)(uintptr_t)(v13));
    }
  }
  if ( v50[0] != 0 )
    sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v50[0] - 16) + v50[0]));
  v59 = (volatile int32_t **)((char *)v8[1] + 4);
  glitch::video::CMaterialVertexAttributeMap::allocate(v52);
  v14 = v52[0];
  if ( v52[0] != nullptr )
    __sync_add_and_fetch(v52[0], 1u);
  v15 = (glitch::video::CMaterialVertexAttributeMap::Self *)(v8[2]);
  v8[2] = (glitch::video::CMaterial::Self *)v14;
  if ( v15 != nullptr && __sync_fetch_and_add((volatile int32_t *)v15, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v15);
    gll_operator_delete_arr((int)(uintptr_t)(v15));
  }
  v16 = (glitch::video::CMaterialVertexAttributeMap::Self *)v52[0];
  if ( v52[0] != nullptr && __sync_fetch_and_add(v52[0], 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v16);
    gll_operator_delete_arr((int)(uintptr_t)(v16));
  }
  v17 = *((uint32_t *)v8[2] + 1);
  v18 = *(uint8_t *)(v17 + 16);
  if ( v18 != 0 )
  {
    v19 = *(uint32_t *)(v17 + 24);
    for ( i = 0; i < v18; ++i )
    {
      v43 = 0;
      v46 = 12 * i;
      if ( *(uint8_t *)(v19 + v46 + 8) != 0 )
      {
        do
        {
          v53[0] = nullptr;
          v59 = nullptr;
          v20 = (glitch::video::CVertexAttributeMap::Self *)opNew(0x24u);
          glitch::video::CVertexAttributeMap::Construct(
            v20,
            (const boost::intrusive_ptr<glitch::video::CVertexStreams::Self const> *)v53);
          v56 = v20;
          if ( v20 != nullptr )
            __sync_add_and_fetch((volatile int32_t *)v20, 1u);
          glitch::video::CMaterialVertexAttributeMap::set(
            v8[2],
            i,
            v43,
            (const boost::intrusive_ptr<glitch::video::CVertexAttributeMap::Self> *)&v56);
          v21 = v56;
          if ( v56 != nullptr && __sync_fetch_and_add((volatile int32_t *)v56, 0xFFFFFFFF) == 1 )
            opDelete(v21);
          v22 = v53[0];
          if ( v53[0] != nullptr && __sync_fetch_and_add((volatile int32_t *)v53[0], 0xFFFFFFFF) == 1 )
          {
            glitch::video::CVertexStreams::Destroy(v22);
            gll_operator_delete_arr((int)(uintptr_t)(v22));
          }
          for ( j = 0; j != 30; ++j )
            *(uint8_t *)(((uint32_t *)v8[2]
                      - 153391689
                      * ((56 * v43
                        + *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v8[2] + 1) + 24) + v46 + 4)
                        - *(uint32_t *)(*((uint32_t *)v8[2] + 1) + 28)) >> 3))[2]
                     + j
                     + 4) = v48[j];
          ++v43;
          v48 += 30;
          v24 = *((uint32_t *)v8[2] + 1);
          v19 = *(uint32_t *)(v24 + 24);
        }
        while ( v43 < *(uint8_t *)(v19 + v46 + 8) );
        v18 = *(uint8_t *)(v24 + 16);
      }
    }
  }
  glitch::io::CMemoryReadFile::Construct((glitch::io::CMemoryReadFile::Self *)&v57, true);
  glitch::io::CMemoryReadFile::set((glitch::io::CMemoryReadFile::Self *)&v57, v48, v38 - (v48 - (char *)v39), "temp");
  v54[0] = &v57;
  __sync_add_and_fetch(v58, 1u);
  v61 = 0;
  v60 = v8 + 3;
  v59 = v54;
  glitch::io::loadHeadersAndSkipData(v55);
  v25 = v55[0];
  if ( v55[0] != nullptr )
    __sync_add_and_fetch(v55[0], 1u);
  v26 = (glitch::video::CVertexStreams::Self *)(v8[9]);
  v8[9] = (glitch::video::CMaterial::Self *)v25;
  if ( v26 != nullptr && __sync_fetch_and_add((volatile int32_t *)v26, 0xFFFFFFFF) == 1 )
  {
    v37 = (int)(uintptr_t)(v26);
    glitch::video::CVertexStreams::Destroy(v26);
    gll_operator_delete_arr(v37);
  }
  v27 = (glitch::video::CVertexStreams::Self *)v55[0];
  if ( v55[0] != nullptr && __sync_fetch_and_add(v55[0], 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v27);
    gll_operator_delete_arr((int)(uintptr_t)(v27));
  }
  if ( v54[0] != nullptr )
    sub_5459C0(v54[0]);
  glitch::io::CMemoryReadFile::Destroy((glitch::io::CMemoryReadFile::Self *)&v57);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::addObjects  (binary VA: 0xcdaf20)
// Original: glitch::streaming::CBatchStreamingModule::addObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::addObjects(int a1, int a2, uint8_t *a3, int a4)
{
  uint8_t *v4;
  int v5;
  uint8_t *v6;
  char *v7;
  size_t v8;
  void *v9;
  uint8_t *v10;
  size_t v11;
  int v12;
  uint8_t *v13[7];

  v4 = a3;
  v5 = *(uint32_t *)(a1 + 28);
  if ( *(uint32_t *)(a1 + 24) > *(uint32_t *)(v5 + 12) )
  {
    v11 = *(uint32_t *)(a1 + 24);
    v10 = a3;
    v12 = opNewArray(v11);
    v9 = *(void **)(v5 + 8);
    *(uint32_t *)(v5 + 8) = v12;
    v8 = v11;
    v4 = a3;
    if ( v9 != nullptr )
    {
      opDeleteArray(v9);
      v4 = a3;
      v12 = *(uint32_t *)(v5 + 8);
      v8 = v11;
    }
    *(uint32_t *)(v5 + 12) = v8;
  }
  else
  {
    v12 = *(uint32_t *)(v5 + 8);
  }
  v13[0] = v4;
  v6 = &v4[a2];
  v13[1] = nullptr;
  while ( v6 != v13[0] )
  {
    v7 = sub_CD12F0(v13);
    glitch::streaming::CBatchStreamingModule::addSingleObject(a1, v7, v12, a4, v9, v10, v11, v12);
    sub_CD1350(v13);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBatchStreamingModule::addObjects  (binary VA: 0xcdb260)
// Original: glitch::streaming::CBatchStreamingModule::addObjects
// ----------------------------------------------------------------------------
void glitch::streaming::CBatchStreamingModule::addObjects(glitch::streaming::CBatchStreamingModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  const glitch::streaming::SCommandAndRegisterer::Self *v3;
  int v4;
  int *v5;
  int v6;
  size_t v7;
  int v8;
  int *v9;
  const glitch::streaming::SCommandAndRegisterer::Self *v10;
  size_t v11;
  const glitch::streaming::SCommandAndRegisterer::Self *v12;
  void *v13;
  int v14;

  v3 = a2;
  v4 = *((uint32_t *)self + 7);
  if ( *((uint32_t *)self + 6) > *(uint32_t *)(v4 + 12) )
  {
    v11 = *((uint32_t *)self + 6);
    v10 = a2;
    v14 = opNewArray(v11);
    v13 = *(void **)(v4 + 8);
    *(uint32_t *)(v4 + 8) = v14;
    v7 = v11;
    v3 = a2;
    if ( v13 != nullptr )
    {
      opDeleteArray(v13);
      v3 = a2;
      v14 = *(uint32_t *)(v4 + 8);
      v7 = v11;
    }
    *(uint32_t *)(v4 + 12) = v7;
  }
  else
  {
    v14 = *(uint32_t *)(v4 + 8);
  }
  if ( v3 != a3 )
  {
    v12 = a3;
    v5 = (int *)v3;
    v6 = v14;
    do
    {
      v9 = v5 + 4;
      v8 = v5[2];
      v5 += 5;
      glitch::streaming::CBatchStreamingModule::addSingleObject(self, v8, v6, v9, v10, v11, v12, v14);
    }
    while ( v12 != (const glitch::streaming::SCommandAndRegisterer::Self *)v5 );
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CBaseStreamingManager::setStringTable  (binary VA: 0xcdb390)
// Original: glitch::streaming::CBaseStreamingManager::setStringTable
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::CBaseStreamingManager::setStringTable(glitch::streaming::CBaseStreamingManager::Self *self, glitch::core::SSharedString::Self *a2, unsigned int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  if ( v3 != 0 )
  {
    v4 = v3 + 4 * *(uint32_t *)(v3 - 4);
    if ( v3 != v4 )
    {
      do
      {
        v5 = v4 - 4;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)(v4 - 4));
        v4 = v5;
      }
      while ( v3 != v5 );
    }
    opDeleteArray((void *)(v3 - 4));
  }
  *((uint32_t *)self + 2) = a3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierEmitterBase::Destroy  (binary VA: 0xcdb780)
// Original: glitch::streaming::CModifierEmitterBase::~CModifierEmitterBase
// ----------------------------------------------------------------------------
void glitch::streaming::CModifierEmitterBase::Destroy(glitch::streaming::CModifierEmitterBase::Self *self)
{
  int v1;
  int v2;
  char *v3;
  char *v4;
  boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *v5;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  char *v10;
  char *v11;
  glitch::video::CVertexStreams::Self *v12;
  int v13;
  char *v14;
  int v15;
  uint32_t *i;
  char *v17;
  char *v18;
  int v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EE68);
  *((uint32_t *)self + 24) = ((uint32_t)(uintptr_t)&off_206F2E8);
  v1 = *((uint32_t *)self + 22);
  if ( (void *)(v1 - 12) != &unk_20D3E6C
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v1 - 12);
  }
  v2 = *((uint32_t *)self + 21);
  if ( (void *)(v2 - 12) != &unk_20D3E6C
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v2 - 12);
  }
  v3 = *((char **)self + 19);
  v4 = *((char **)self + 18);
  if ( v3 != v4 )
  {
    do
    {
      v5 = (boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)(v4 + 4);
      v4 += 20;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v5);
    }
    while ( v3 != v4 );
    v4 = *((char **)self + 18);
  }
  if ( v4 != nullptr )
    opDelete(v4);
  v6 = *((char **)self + 17);
  if ( v6 != nullptr )
  {
    if ( *((uint32_t *)self + 14) != 0 )
    {
      v14 = &v6[4 * *((uint32_t *)self + 13)];
      v15 = *(uint32_t *)v14;
      if ( *(uint32_t *)v14 != 0 )
        goto LABEL_40;
      for ( i = nullptr; ; i = (uint32_t *)(v15 - 24) )
      {
        *(uint32_t *)v14 = i[6];
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)(i + 1));
        opDelete(i);
        --*((uint32_t *)self + 14);
        v15 = *(uint32_t *)v14;
        if ( *(uint32_t *)v14 == 0 )
          break;
LABEL_40:
        ;
      }
      v6 = *((char **)self + 17);
    }
    opDelete(v6);
    *((uint32_t *)self + 17) = 0;
    *((uint32_t *)self + 16) = 0;
  }
  if ( *((uint32_t *)self + 5) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 5));
  if ( *((uint32_t *)self + 4) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 4));
  v7 = *((char **)self + 1);
  v22 = *((char **)self + 2);
  v21 = v7;
  if ( v22 != v7 )
  {
    v19 = *((uint32_t *)self + 1);
    v20 = v7 + 48;
    v23 = v7 + 36;
    do
    {
      v8 = *(char **)&v20[v19 - (uint32_t)(uintptr_t)(v21)];
      v9 = *(char **)&v20[v19 - (uint32_t)(uintptr_t)(v21) + 4];
      if ( v9 != v8 )
      {
        v10 = *(char **)&v20[v19 - (uint32_t)(uintptr_t)(v21)];
        v11 = v8 + 8;
        do
        {
          v12 = *(glitch::video::CVertexStreams::Self **)&v11[v10 - v8];
          if ( v12 != nullptr && __sync_fetch_and_add((volatile int32_t *)v12, 0xFFFFFFFF) == 1 )
          {
            v18 = v9;
            v17 = v11;
            glitch::video::CVertexStreams::Destroy(v12);
            gll_operator_delete_arr((int)(uintptr_t)(v12));
            v11 = v17;
            v9 = v18;
          }
          v10 += 24;
        }
        while ( v9 != v10 );
        v8 = *(char **)(v19 + 48);
      }
      if ( v8 != nullptr )
        opDelete(v8);
      v13 = *(uint32_t *)&v23[v19 - (uint32_t)(uintptr_t)(v21)];
      if ( v13 != 0 )
      {
        if ( *(uint8_t *)(v13 + 8) != 0 && *(uint32_t *)v13 != 0 )
          opDeleteArray(*(void **)v13);
        opDelete((void *)v13);
      }
      if ( *(uint32_t *)(v19 + 24) != 0 )
        opDelete(*(void **)(v19 + 24));
      v19 += 64;
    }
    while ( v22 != (char *)v19 );
    v21 = *((char **)self + 1);
  }
  if ( v21 != nullptr )
    opDelete(v21);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206F308);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CModifierEmitterBase::Destroy_eacdba30  (binary VA: 0xcdba30)
// Original: glitch::streaming::CModifierEmitterBase::~CModifierEmitterBase
// ----------------------------------------------------------------------------
void glitch::streaming::CModifierEmitterBase::Destroy_eacdba30(glitch::streaming::CModifierEmitterBase::Self *self)
{
  glitch::streaming::CModifierEmitterBase::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLoadBDAEModule::removeObjects  (binary VA: 0xcdcba0)
// Original: glitch::streaming::CLoadBDAEModule::removeObjects
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::CLoadBDAEModule::removeObjects(uint32_t *a1, int a2, size_t *a3)
{
  int v3;
  size_t v4;
  size_t *v5;
  unsigned int result;
  int v7; // et2
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  bool v12;
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef glitch::core::Self *_g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef glitch::core::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22[4];
  typedef uint32_t _g4_t_v23[10];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v14)) > _g4_s1 ? (0u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v15)) > _g4_s2 ? (4u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v17)) > _g4_s4 ? (20u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v19)) > _g4_s6 ? (28u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v20)) > _g4_s7 ? (32u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v21)) > _g4_s8 ? (36u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v22)) > _g4_s9 ? (40u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v23)) > _g4_s10 ? (44u + sizeof(_g4_t_v23)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  v23[6] = (uint32_t)(uintptr_t)(&a1);
  v3 = a2;
  v18 = a1;
  v16 = nullptr;
  v4 = *a3;
  v5 = a3 + 1;
  v23[0] = v4;
  if ( v4 != 0 )
  {
    v16 = (glitch::core::Self *)glitch::core::allocProcessBuffer(v4, v13);
    v4 = v23[0];
  }
  v17 = v4 / 0x14;
  result = uncompress(v16, v23, v5, v3 - 4);
  if ( v17 == 0 )
    goto LABEL_17;
  v19 = 0;
  v20 = v16;
  do
  {
LABEL_8:
    v9 = 0;
    v10 = *((uint32_t *)v20 + 1);
    v11 = v18[3];
    v20 = (glitch::core::Self *)((char *)v20 + 20);
    result = (unsigned int)(uintptr_t)(v18);
    v21 = v10 % v11;
    if ( v18[4] != 0 )
    {
      result = *(uint32_t *)(v18[7] + 4 * v21);
      if ( result != 0 )
      {
        result = *(uint32_t *)result;
        if ( result != 0 )
          v9 = result - 12;
      }
    }
    while ( 1 )
    {
      if ( v9 == 0 )
      {
LABEL_7:
        if ( ++v19 == v17 )
          goto LABEL_17;
        goto LABEL_8;
      }
      result = *(uint32_t *)(v9 + 16);
      if ( v10 == result )
        break;
      v7 = result % v11;
      result /= v11;
      if ( v21 != v7 )
        goto LABEL_7;
LABEL_6:
      v8 = *(uint32_t *)(v9 + 12);
      if ( v8 == 0 )
        goto LABEL_7;
      v9 = v8 - 12;
    }
    if ( v10 != *(uint32_t *)v9 )
      goto LABEL_6;
    result = *(uint32_t *)(v9 + 8) - 1;
    v12 = *(uint32_t *)(v9 + 8) == 1;
    *(uint32_t *)(v9 + 8) = result;
    if ( !v12 )
      goto LABEL_7;
    (*(void (**)(uint32_t, void *, unsigned int))(**(uint32_t **)(v9 + 4) + 140))(*(uint32_t *)(v9 + 4), v14, v15);
    v15 = v9;
    v14 = v18 + 2;
    result = (unsigned int)(uintptr_t)(boost::unordered::unordered_map_unsigned_int_pair_intrus_cc631b::erase(v22));
    ++v19;
  }
  while ( v19 != v17 );
LABEL_17:
  if ( v16 != nullptr )
    return ((glitch::core::releaseProcessBuffer(v16, v14)), (unsigned int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLoadBDAEModule::removeObjects  (binary VA: 0xcdcd20)
// Original: glitch::streaming::CLoadBDAEModule::removeObjects
// ----------------------------------------------------------------------------
unsigned int glitch::streaming::CLoadBDAEModule::removeObjects(glitch::streaming::CLoadBDAEModule::Self *self, const glitch::streaming::SCommandAndRegisterer::Self *a2, const glitch::streaming::SCommandAndRegisterer::Self *a3)
{
  unsigned int result;
  int v4; // et2
  int v5;
  char *v6;
  glitch::streaming::CLoadBDAEModule::Self *v7;
  unsigned int v8;
  int v9;
  bool v10;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef const glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v13;
  typedef char _g4_t_v14[32];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v13)) > _g4_s2 ? (24u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  result = (unsigned int)(uintptr_t)(a2);
  if ( a2 == a3 )
    return result;
  v13 = a2;
  do
  {
LABEL_6:
    v6 = nullptr;
    v7 = *((glitch::streaming::CLoadBDAEModule::Self **)v13 + 1);
    v8 = *((uint32_t *)self + 3);
    result = (unsigned int)(uintptr_t)(self);
    v9 = (unsigned int)(uintptr_t)(v7) % v8;
    if ( *((uint32_t *)self + 4) != 0 )
    {
      result = *(uint32_t *)(*((uint32_t *)self + 7) + 4 * v9);
      if ( result != 0 )
      {
        result = *(uint32_t *)result;
        if ( result != 0 )
          v6 = (char *)(result - 12);
      }
    }
    while ( 1 )
    {
      if ( v6 == nullptr )
      {
LABEL_5:
        v13 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v13 + 20);
        if ( a3 == v13 )
          return result;
        goto LABEL_6;
      }
      result = *((uint32_t *)v6 + 4);
      if ( v7 == (glitch::streaming::CLoadBDAEModule::Self *)result )
        break;
      v4 = result % v8;
      result /= v8;
      if ( v9 != v4 )
        goto LABEL_5;
LABEL_4:
      v5 = *((uint32_t *)v6 + 3);
      if ( v5 == 0 )
        goto LABEL_5;
      v6 = (char *)(v5 - 12);
    }
    if ( v7 != *(glitch::streaming::CLoadBDAEModule::Self **)v6 )
      goto LABEL_4;
    result = *((uint32_t *)v6 + 2) - 1;
    v10 = *((uint32_t *)v6 + 2) == 1;
    *((uint32_t *)v6 + 2) = result;
    if ( !v10 )
      goto LABEL_5;
    (*(void (**)(uint32_t, char *, char *))(**((uint32_t **)v6 + 1) + 140))(*((uint32_t *)v6 + 1), v11, v12);
    v12 = v6;
    v11 = (char *)self + 8;
    result = (unsigned int)(uintptr_t)(boost::unordered::unordered_map_unsigned_int_pair_intrus_cc631b::erase(v14));
    v13 = (const glitch::streaming::SCommandAndRegisterer::Self *)((char *)v13 + 20);
  }
  while ( a3 != v13 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodEmitter::SLodObject::Construct  (binary VA: 0xcdce20)
// Original: glitch::streaming::CLodEmitter::SLodObject::SLodObject
// ----------------------------------------------------------------------------
int glitch::streaming::CLodEmitter::SLodObject::Construct(glitch::streaming::CLodEmitter::SLodObject::Self *self, const glitch::streaming::SStreamingItemDesc::Self ***a2)
{
  int v2;
  int *v3;
  const glitch::streaming::CLodEmitter::SLodObject::Self *v4;
  int v5;
  int v6;
  glitch::streaming::CLodEmitter::SLodObject::Self *v7;
  const glitch::streaming::SStreamingItemDesc::Self **v8;
  int v9;
  int v10;
  int v11;
  const glitch::streaming::SStreamingItemDesc::Self *v12;
  const glitch::streaming::SStreamingItemDesc::Self *v13;
  glitch::streaming::SStreamingItemDesc::Self *v14;
  size_t v15;
  char *dest;
  bool v17;
  const void *src;
  int v19;
  size_t n;
  int result;
  const glitch::streaming::SStreamingItemDesc::Self **v22;
  int *v23;
  const glitch::streaming::SStreamingItemDesc::Self **v24;

  v2 = 0;
  v3 = nullptr;
  v4 = (const glitch::streaming::CLodEmitter::SLodObject::Self *)a2;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(*a2);
  v5 = *((uint32_t *)v4 + 2) - *((uint32_t *)v4 + 1);
  *((uint32_t *)self + 1) = 0;
  v6 = v5 >> 2;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  if ( -1431655765 * v6 != 0 )
  {
    v2 = v6;
    v3 = (int *)sub_4EBDC0(4 * v6);
  }
  v7 = self;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&v3[v2]);
  v8 = a2[1];
  v24 = a2[2];
  if ( v24 != v8 )
  {
    do
    {
      if ( v3 != nullptr )
      {
        v9 = (v8[1] - *v8) >> 2;
        v10 = 0;
        v11 = 0;
        *v3 = 0;
        v3[1] = 0;
        v3[2] = 0;
        if ( -991146299 * v9 != 0 )
        {
          v10 = 4 * v9;
          v11 = sub_4EBDC0(4 * v9);
        }
        *v3 = v11;
        v3[1] = v11;
        v3[2] = v11 + v10;
        v12 = *v8;
        if ( v8[1] != *v8 )
        {
          v22 = v8;
          v23 = v3;
          v13 = v8[1];
          v14 = (glitch::streaming::SStreamingItemDesc::Self *)v11;
          do
          {
            if ( v14 != nullptr )
              glitch::streaming::SStreamingItemDesc::Construct(v14, v12);
            v12 = (const glitch::streaming::SStreamingItemDesc::Self *)((char *)v12 + 52);
            v14 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v14 + 52);
          }
          while ( v13 != v12 );
          v11 = (int)(uintptr_t)(v14);
          v8 = v22;
          v3 = v23;
        }
        v3[1] = v11;
      }
      v8 += 3;
      v3 += 3;
    }
    while ( v24 != v8 );
    v4 = (const glitch::streaming::CLodEmitter::SLodObject::Self *)a2;
    v7 = self;
  }
  *((uint32_t *)v7 + 2) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)v7 + 4) = *((uint32_t *)v4 + 4);
  *((uint32_t *)v7 + 5) = *((uint32_t *)v4 + 5);
  *((uint32_t *)v7 + 6) = *((uint32_t *)v4 + 6);
  *((uint32_t *)v7 + 7) = *((uint32_t *)v4 + 7);
  *((uint32_t *)v7 + 8) = *((uint32_t *)v4 + 8);
  *((uint32_t *)v7 + 9) = *((uint32_t *)v4 + 9);
  v15 = *((uint32_t *)v4 + 11) - *((uint32_t *)v4 + 10);
  dest = nullptr;
  v17 = *((uint32_t *)v4 + 11) == *((uint32_t *)v4 + 10);
  *((uint32_t *)v7 + 10) = 0;
  *((uint32_t *)v7 + 11) = 0;
  *((uint32_t *)v7 + 12) = 0;
  if ( !v17 )
    dest = (char *)opNew(v15);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&dest[v15]);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(dest);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(dest);
  src = *((const void **)v4 + 10);
  v19 = 0;
  n = *((uint32_t *)v4 + 11) - (uint32_t)(uintptr_t)(src);
  if ( n != 0 )
  {
    v19 = *((uint32_t *)v4 + 11) - (uint32_t)(uintptr_t)(src);
    memmove(dest, src, n);
  }
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&dest[v19]);
  *((uint32_t *)self + 13) = *((uint32_t *)v4 + 13);
  result = *((uint32_t *)v4 + 14);
  *((uint32_t *)self + 14) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::SGeometricObject::opAssign  (binary VA: 0xcf5510)
// Original: glitch::streaming::SGeometricObject::operator=
// ----------------------------------------------------------------------------
glitch::streaming::SGeometricObject::Self * glitch::streaming::SGeometricObject::opAssign(glitch::streaming::SGeometricObject::Self *self, const glitch::streaming::SGeometricObject::Self *a2)
{
  int v2;
  volatile int32_t *v3;
  volatile int32_t *v4;
  glitch::video::CMaterial::Self *v5;
  bool v6;
  volatile int32_t *v7;
  glitch::video::CMaterialVertexAttributeMap::Self *v8;

  v2 = *(uint32_t *)a2;
  if ( *(uint32_t *)a2 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1u);
  v3 = *(volatile int32_t **)self;
  *(uint32_t *)self = v2;
  if ( v3 != nullptr )
    sub_5459C0(v3);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  v4 = *((volatile int32_t **)a2 + 2);
  if ( v4 != nullptr )
    __sync_add_and_fetch(v4, 1u);
  v5 = *((glitch::video::CMaterial::Self **)self + 2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v4);
  if ( v5 != nullptr )
  {
    v6 = *(uint32_t *)v5 == 2;
    _mm_mfence();
    if ( v6 )
      glitch::video::CMaterial::removeFromRootSceneNode(v5);
    if ( __sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v5);
      gll_operator_delete_arr((int)(uintptr_t)(v5));
    }
  }
  v7 = *((volatile int32_t **)a2 + 3);
  if ( v7 != nullptr )
    __sync_add_and_fetch(v7, 1u);
  v8 = *((glitch::video::CMaterialVertexAttributeMap::Self **)self + 3);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v7);
  if ( v8 != nullptr && __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v8);
    gll_operator_delete_arr((int)(uintptr_t)(v8));
  }
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 9);
  *((uint8_t *)self + 40) = *((uint8_t *)a2 + 40);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::copy_backward_streaming_SGeometricObje_cf1e52  (binary VA: 0xcf6990)
// Original: std::copy_backward<glitch::streaming::SGeometricObject *,glitch::streaming::SGeometricObject *>
// ----------------------------------------------------------------------------
glitch::streaming::SGeometricObject::Self * g4_std::copy_backward_streaming_SGeometricObje_cf1e52(glitch::streaming::SGeometricObject::Self *a1, glitch::streaming::SGeometricObject::Self *a2, glitch::streaming::SGeometricObject::Self *a3)
{
  const glitch::streaming::SGeometricObject::Self *v3;
  int v4;
  glitch::streaming::SGeometricObject::Self *v5;

  v3 = a2;
  if ( -1431655765 * ((a2 - a1) >> 4) > 0 )
  {
    v4 = -1431655765 * ((a2 - a1) >> 4);
    v5 = a3;
    do
    {
      v3 = (const glitch::streaming::SGeometricObject::Self *)((char *)v3 - 48);
      v5 = (glitch::streaming::SGeometricObject::Self *)((char *)v5 - 48);
      glitch::streaming::SGeometricObject::opAssign(v5, v3);
      --v4;
    }
    while ( v4 != 0 );
    return (glitch::streaming::SGeometricObject::Self *)((char *)a3 - 16 * ((a2 - a1) >> 4));
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodCache::extractGeometricInformationInternal  (binary VA: 0xcf6df0)
// Original: glitch::streaming::CLodCache::extractGeometricInformationInternal
// ----------------------------------------------------------------------------
void glitch::streaming::CLodCache::extractGeometricInformationInternal(glitch::streaming::CLodCache::Self *self, unsigned int a2, std::vector<glitch::streaming::SGeometricInfo, glitch::core::SAllocator<glitch::streaming::SGeometricInfo, (glitch::memory::E_MEMORY_HINT)0>> *a3)
{
  uint32_t *v3;
  unsigned int v4;
  int *v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  char *v10;
  int *v11;
  glitch::streaming::SGeometricObject::Self *v12;
  glitch::streaming::SGeometricObject::Self *v13;
  glitch::streaming::SGeometricObject::Self *v14;
  glitch::streaming::SGeometricObject::Self *v15;
  glitch::streaming::SGeometricObject::Self *v16;
  glitch::streaming::SGeometricObject::Self *v17;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v18;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v19;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v20;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v21;
  typedef int *_g4_t_v22;
  typedef int *_g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v25;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v29;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v32;
  typedef glitch::streaming::SGeometricObject::Self *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35[4];
  typedef int _g4_t_v36;
  typedef char *_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef int *_g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int _g4_t_v41;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v21)) > _g4_s3 ? (8u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v22)) > _g4_s4 ? (60u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v23)) > _g4_s5 ? (64u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v24)) > _g4_s6 ? (68u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v25)) > _g4_s7 ? (68u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v26)) > _g4_s8 ? (68u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v27)) > _g4_s9 ? (80u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v28)) > _g4_s10 ? (84u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v29)) > _g4_s11 ? (88u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v30)) > _g4_s12 ? (92u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v31)) > _g4_s13 ? (96u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v32)) > _g4_s14 ? (104u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v33)) > _g4_s15 ? (108u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v34)) > _g4_s16 ? (112u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v35)) > _g4_s17 ? (120u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v36)) > _g4_s18 ? (136u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v37)) > _g4_s19 ? (140u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v38)) > _g4_s20 ? (144u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (152u + sizeof(_g4_t_v39)) > _g4_s21 ? (152u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v40)) > _g4_s22 ? (156u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v41)) > _g4_s23 ? (160u + sizeof(_g4_t_v41)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 120u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 136u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 144u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 152u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 156u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 160u);

  v3 = nullptr;
  v4 = *((uint32_t *)self + 6);
  v24 = a2 % v4;
  if ( *((uint32_t *)self + 7) != 0 )
  {
    v5 = *(int **)(*((uint32_t *)self + 10) + 4 * v24);
    if ( v5 != nullptr )
    {
      v6 = *v5;
      if ( v6 != 0 )
        v3 = (uint32_t *)(v6 - 8);
    }
  }
  while ( v3 != nullptr )
  {
    v7 = v3[3];
    if ( a2 == v7 )
    {
      if ( a2 == *v3 )
        break;
    }
    else if ( v24 != v7 % v4 )
    {
      goto LABEL_9;
    }
    v8 = v3[2];
    if ( v8 == 0 )
    {
LABEL_9:
      v3 = nullptr;
      break;
    }
    v3 = (uint32_t *)(v8 - 8);
  }
  v9 = v3[1];
  v29 = nullptr;
  v30 = nullptr;
  v31 = 0;
  v32 = nullptr;
  v33 = nullptr;
  v34 = 0;
  memset(v35, 0, 12);
  v36 = 0;
  v37 = nullptr;
  v38 = nullptr;
  v39 = nullptr;
  v40 = nullptr;
  v41 = 0;
  v27 = 0;
  g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(v35), nullptr, &v27);
  v28 = 0;
  if ( v37 == v38 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v36), v37, &v28);
  }
  else
  {
    v10 = nullptr;
    if ( v37 != nullptr )
    {
      *(uint32_t *)v37 = 0;
      v10 = v37;
    }
    v37 = v10 + 4;
  }
  glitch::streaming::CLodCache::extractGeometricInformationRecursive(
    (int)(uintptr_t)(self),
    *(uint32_t **)(v9 + 28),
    0,
    (int)(uintptr_t)(a3),
    &v39,
    &v29,
    &v32,
    (int)(uintptr_t)(&v36),
    (int)(uintptr_t)(v35));
  v11 = v39;
  v22 = v40;
  if ( v40 != v39 )
  {
    v23 = v39 + 4;
    do
    {
      v12 = (glitch::streaming::SGeometricObject::Self *)*(v23 - 1);
      v25 = (glitch::streaming::SGeometricObject::Self *)*v23;
      if ( (glitch::streaming::SGeometricObject::Self *)*v23 != v12 )
      {
        do
        {
          v18 = v12;
          v12 = (glitch::streaming::SGeometricObject::Self *)((char *)v12 + 48);
          glitch::streaming::SGeometricObject::Destroy(v18);
        }
        while ( v25 != v12 );
        v12 = (glitch::streaming::SGeometricObject::Self *)v11[3];
      }
      if ( v12 != nullptr )
        opDelete(v12);
      v13 = (glitch::streaming::SGeometricObject::Self *)*v11;
      v26 = (glitch::streaming::SGeometricObject::Self *)v11[1];
      if ( v26 != (glitch::streaming::SGeometricObject::Self *)*v11 )
      {
        do
        {
          v19 = v13;
          v13 = (glitch::streaming::SGeometricObject::Self *)((char *)v13 + 48);
          glitch::streaming::SGeometricObject::Destroy(v19);
        }
        while ( v26 != v13 );
        v13 = (glitch::streaming::SGeometricObject::Self *)*v11;
      }
      if ( v13 != nullptr )
        opDelete(v13);
      v11 += 6;
      v23 += 6;
    }
    while ( v22 != v11 );
    v11 = v39;
  }
  if ( v11 != nullptr )
    gll_operator_delete_arr((int)(uintptr_t)(v11));
  if ( v36 != 0 )
    opDelete((void *)v36);
  if ( v35[0] != 0 )
    opDelete((void *)v35[0]);
  v14 = v33;
  v15 = v32;
  if ( v33 != v32 )
  {
    do
    {
      v20 = v15;
      v15 = (glitch::streaming::SGeometricObject::Self *)((char *)v15 + 48);
      glitch::streaming::SGeometricObject::Destroy(v20);
    }
    while ( v14 != v15 );
    v15 = v32;
  }
  if ( v15 != nullptr )
    opDelete(v15);
  v16 = v30;
  v17 = v29;
  if ( v30 != v29 )
  {
    do
    {
      v21 = v17;
      v17 = (glitch::streaming::SGeometricObject::Self *)((char *)v17 + 48);
      glitch::streaming::SGeometricObject::Destroy(v21);
    }
    while ( v16 != v17 );
    v17 = v29;
  }
  if ( v17 != nullptr )
    opDelete(v17);
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodEmitter::SLodLevel::opAssign  (binary VA: 0xcf8620)
// Original: glitch::streaming::CLodEmitter::SLodLevel::operator=
// ----------------------------------------------------------------------------
glitch::streaming::CLodEmitter::SLodLevel::Self * glitch::streaming::CLodEmitter::SLodLevel::opAssign(glitch::streaming::CLodEmitter::SLodLevel::Self *self, const glitch::streaming::CLodEmitter::SLodLevel::Self *a2)
{
  glitch::streaming::CLodEmitter::SLodLevel::Self *result;
  glitch::streaming::SStreamingItemDesc::Self *v3;
  const glitch::streaming::SStreamingItemDesc::Self *v4;
  const glitch::streaming::SStreamingItemDesc::Self *v5;
  int v6;
  glitch::streaming::SStreamingItemDesc::Self *v7;
  const glitch::streaming::SStreamingItemDesc::Self *v8;
  char *v9;
  char *v10;
  char *v11;
  char *v12;
  char *v13;
  glitch::video::CVertexStreams::Self *v14;
  int v15;
  int v16;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v17;
  int v18;
  glitch::streaming::SStreamingItemDesc::Self *v19;
  int v20;
  int v21;
  glitch::streaming::SStreamingItemDesc::Self *v22;
  unsigned int v23;
  int v24;
  int i;
  const glitch::streaming::SStreamingItemDesc::Self *v26;
  const glitch::streaming::SStreamingItemDesc::Self *v27;
  glitch::streaming::SStreamingItemDesc::Self *v28;
  glitch::streaming::SStreamingItemDesc::Self *v29;
  glitch::streaming::SStreamingItemDesc::Self *v30;
  glitch::streaming::SStreamingItemDesc::Self *v31;
  glitch::streaming::SStreamingItemDesc::Self *v32;
  char *v33;
  const glitch::streaming::SStreamingItemDesc::Self *v34;
  char *v35;
  int v36;
  int *v37;
  void **v38;
  int v39;
  int v40;
  int *v41;
  glitch::streaming::SStreamingItemDesc::Self *v42;
  int v43;
  int v44;

  result = self;
  if ( a2 != self )
  {
    v3 = *(glitch::streaming::SStreamingItemDesc::Self **)self;
    v4 = *((const glitch::streaming::SStreamingItemDesc::Self **)a2 + 1);
    v5 = *(const glitch::streaming::SStreamingItemDesc::Self **)a2;
    v6 = ((int)(uintptr_t)(v4) - *(uint32_t *)a2) >> 2;
    v36 = -991146299 * v6;
    v40 = -991146299 * v6;
    if ( -991146299 * v6 <= (unsigned int)(-991146299 * ((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 2)) )
    {
      v19 = *((glitch::streaming::SStreamingItemDesc::Self **)self + 1);
      v20 = (v19 - v3) >> 2;
      if ( v36 > (unsigned int)(-991146299 * v20) )
      {
        v23 = (unsigned int)(uintptr_t)(v5) + 4 * v20;
        v24 = -991146299 * v20;
        if ( v24 > 0 )
        {
          for ( i = v24; i != 0; --i )
          {
            v32 = (glitch::streaming::SStreamingItemDesc::Self *)(v5);
            v30 = v3;
            v5 = (const glitch::streaming::SStreamingItemDesc::Self *)((char *)v5 + 52);
            v3 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v3 + 52);
            glitch::streaming::SStreamingItemDesc::opAssign(v30, v32);
          }
          v19 = *((glitch::streaming::SStreamingItemDesc::Self **)self + 1);
          v3 = *(glitch::streaming::SStreamingItemDesc::Self **)self;
          v4 = *((const glitch::streaming::SStreamingItemDesc::Self **)a2 + 1);
          v23 = *(uint32_t *)a2 + (((unsigned int)(uintptr_t)(v19) - *(uint32_t *)self) & 0xFFFFFFFC);
        }
        if ( v4 == (const glitch::streaming::SStreamingItemDesc::Self *)v23 )
        {
          v18 = (int)(uintptr_t)(v3) + 52 * v36;
          result = self;
        }
        else
        {
          v26 = v4;
          v27 = (const glitch::streaming::SStreamingItemDesc::Self *)v23;
          do
          {
            if ( v19 != nullptr )
              glitch::streaming::SStreamingItemDesc::Construct(v19, v27);
            v27 = (const glitch::streaming::SStreamingItemDesc::Self *)((char *)v27 + 52);
            v19 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v19 + 52);
          }
          while ( v27 != v26 );
          result = self;
          v18 = *(uint32_t *)self + 52 * v36;
        }
      }
      else
      {
        if ( v36 > 0 )
        {
          v39 = *(uint32_t *)self;
          v21 = v40;
          v42 = *((glitch::streaming::SStreamingItemDesc::Self **)self + 1);
          v22 = *(glitch::streaming::SStreamingItemDesc::Self **)self;
          do
          {
            v31 = (glitch::streaming::SStreamingItemDesc::Self *)(v5);
            v28 = v22;
            v5 = (const glitch::streaming::SStreamingItemDesc::Self *)((char *)v5 + 52);
            v22 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v22 + 52);
            glitch::streaming::SStreamingItemDesc::opAssign(v28, v31);
            --v21;
          }
          while ( v21 != 0 );
          v19 = v42;
          v3 = (glitch::streaming::SStreamingItemDesc::Self *)(52 * v36 + v39);
        }
        while ( v19 != v3 )
        {
          v29 = v3;
          v3 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v3 + 52);
          glitch::streaming::SStreamingItemDesc::Destroy(v29);
        }
        result = self;
        v18 = *(uint32_t *)self + 52 * v36;
      }
    }
    else
    {
      v44 = 0;
      v43 = 0;
      if ( v36 != 0 )
      {
        v34 = *((const glitch::streaming::SStreamingItemDesc::Self **)a2 + 1);
        v44 = 4 * v6;
        v43 = sub_4EBDC0(4 * v6);
        v4 = v34;
      }
      if ( v5 != v4 )
      {
        v7 = (glitch::streaming::SStreamingItemDesc::Self *)v43;
        v8 = v4;
        do
        {
          if ( v7 != nullptr )
            glitch::streaming::SStreamingItemDesc::Construct(v7, v5);
          v5 = (const glitch::streaming::SStreamingItemDesc::Self *)((char *)v5 + 52);
          v7 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v7 + 52);
        }
        while ( v8 != v5 );
      }
      v41 = *((int **)self + 1);
      v37 = *(int **)self;
      if ( v41 != *(int **)self )
      {
        v38 = (void **)(*(uint32_t *)self + 44);
        do
        {
          v9 = (char *)*(v38 - 1);
          if ( *v38 != v9 )
          {
            v10 = (char *)*(v38 - 1);
            v11 = v9 + 8;
            v12 = (char *)*v38;
            v13 = v10;
            do
            {
              v14 = *(glitch::video::CVertexStreams::Self **)&v11[v10 - v13];
              if ( v14 != nullptr && __sync_fetch_and_add((volatile int32_t *)v14, 0xFFFFFFFF) == 1 )
              {
                v35 = v13;
                v33 = v11;
                glitch::video::CVertexStreams::Destroy(v14);
                gll_operator_delete_arr((int)(uintptr_t)(v14));
                v11 = v33;
                v13 = v35;
              }
              v10 += 24;
            }
            while ( v12 != v10 );
            v9 = (char *)v37[10];
          }
          if ( v9 != nullptr )
            opDelete(v9);
          v15 = v37[1];
          v16 = *v37;
          if ( v15 != *v37 )
          {
            do
            {
              v17 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v16 + 4);
              v16 += 20;
              boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v17);
            }
            while ( v15 != v16 );
            v16 = *v37;
          }
          if ( v16 != 0 )
            gll_operator_delete_arr(v16);
          v37 += 13;
          v38 += 13;
        }
        while ( v41 != v37 );
        v37 = *(int **)self;
      }
      if ( v37 != nullptr )
        gll_operator_delete_arr((int)(uintptr_t)(v37));
      result = self;
      v18 = v43 + v44;
      *(uint32_t *)self = v43;
      *((uint32_t *)self + 2) = v43 + v44;
    }
    *((uint32_t *)result + 1) = v18;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::streaming::CLodEmitter::SLodObject::opAssign  (binary VA: 0xcf8910)
// Original: glitch::streaming::CLodEmitter::SLodObject::operator=
// ----------------------------------------------------------------------------
glitch::streaming::CLodEmitter::SLodObject::Self * glitch::streaming::CLodEmitter::SLodObject::opAssign(const glitch::streaming::SStreamingItemDesc::Self ***self, const glitch::streaming::SStreamingItemDesc::Self ***a2)
{
  const glitch::streaming::CLodEmitter::SLodObject::Self *v2;
  glitch::streaming::CLodEmitter::SLodObject::Self *v3;
  const glitch::streaming::SStreamingItemDesc::Self **v4;
  int v5;
  int v6;
  glitch::streaming::CLodEmitter::SLodLevel::Self *v7;
  int v8;
  char *v9;
  char *v10;
  char *v11;
  char *v12;
  char *v13;
  glitch::video::CVertexStreams::Self *v14;
  int v15;
  int v16;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v17;
  glitch::streaming::CLodEmitter::SLodObject::Self *v18;
  int v19;
  uint8_t *v20;
  char *v21;
  size_t n;
  char *v23;
  char *v24;
  glitch::streaming::CLodEmitter::SLodObject::Self *v25;
  const glitch::streaming::SStreamingItemDesc::Self **v26;
  int *v28;
  int v29;
  int v30;
  int v31;
  const glitch::streaming::SStreamingItemDesc::Self *v32;
  const glitch::streaming::SStreamingItemDesc::Self *v33;
  const glitch::streaming::SStreamingItemDesc::Self *v34;
  glitch::streaming::SStreamingItemDesc::Self *v35;
  char *v36;
  char *v37;
  char *v38;
  char *v39;
  char *v40;
  glitch::video::CVertexStreams::Self *v41;
  int v42;
  int v43;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v44;
  uint8_t *v45;
  const glitch::streaming::SStreamingItemDesc::Self **v46;
  int v47;
  glitch::streaming::CLodEmitter::SLodLevel::Self *v48;
  int *v49;
  int v50;
  int v51;
  int v52;
  const glitch::streaming::SStreamingItemDesc::Self *v53;
  const glitch::streaming::SStreamingItemDesc::Self *v54;
  const glitch::streaming::SStreamingItemDesc::Self *v55;
  glitch::streaming::SStreamingItemDesc::Self *v56;
  char *v57;
  glitch::streaming::CLodEmitter::SLodLevel::Self *dest;
  glitch::streaming::CLodEmitter::SLodLevel::Self *desta;
  const glitch::streaming::CLodEmitter::SLodLevel::Self *src;
  const glitch::streaming::CLodEmitter::SLodLevel::Self *srca;
  char *v62;
  char *v63;
  char *v64;
  char *v65;
  const glitch::streaming::SStreamingItemDesc::Self **v66;
  int *v67;
  int *v68;
  void **v69;
  const glitch::streaming::SStreamingItemDesc::Self **v70;
  const glitch::streaming::SStreamingItemDesc::Self **v71;
  void **v72;
  const glitch::streaming::SStreamingItemDesc::Self **v73;
  int *v74;
  int *v75;
  int *v76;
  int *v77;
  glitch::streaming::CLodEmitter::SLodLevel::Self *v78;
  glitch::streaming::CLodEmitter::SLodLevel::Self *v79;
  int v80;
  glitch::streaming::CLodEmitter::SLodLevel::Self *v81;
  char *v82;
  int v83;
  int v84;

  v2 = (const glitch::streaming::CLodEmitter::SLodObject::Self *)a2;
  v3 = (glitch::streaming::CLodEmitter::SLodObject::Self *)self;
  *self = *a2;
  if ( a2 == self )
    goto LABEL_38;
  v4 = a2[1];
  v66 = a2[2];
  v78 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)*(self + 1);
  v5 = v66 - v4;
  v80 = -1431655765 * v5;
  if ( -1431655765 * v5 > (unsigned int)(-1431655765 * (((char *)*(self + 3) - (char *)v78) >> 2)) )
  {
    v84 = 0;
    v83 = 0;
    if ( -1431655765 * v5 != 0 )
    {
      v84 = 4 * v5;
      v83 = sub_4EBDC0(4 * v5);
    }
    if ( v4 != v66 )
    {
      v28 = (int *)v83;
      do
      {
        if ( v28 != nullptr )
        {
          v29 = (v4[1] - *v4) >> 2;
          v30 = 0;
          v31 = 0;
          *v28 = 0;
          v28[1] = 0;
          v28[2] = 0;
          if ( -991146299 * v29 != 0 )
          {
            v30 = 4 * v29;
            v31 = sub_4EBDC0(4 * v29);
          }
          *v28 = v31;
          v28[1] = v31;
          v28[2] = v31 + v30;
          v32 = v4[1];
          if ( v32 != *v4 )
          {
            v71 = v4;
            v75 = v28;
            v33 = *v4;
            v34 = v32;
            v35 = (glitch::streaming::SStreamingItemDesc::Self *)v31;
            do
            {
              if ( v35 != nullptr )
                glitch::streaming::SStreamingItemDesc::Construct(v35, v33);
              v33 = (const glitch::streaming::SStreamingItemDesc::Self *)((char *)v33 + 52);
              v35 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v35 + 52);
            }
            while ( v34 != v33 );
            v4 = v71;
            v28 = v75;
            v31 = (int)(uintptr_t)(v35);
          }
          v28[1] = v31;
        }
        v4 += 3;
        v28 += 3;
      }
      while ( v66 != v4 );
    }
    v81 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)*(self + 2);
    v79 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)*(self + 1);
    if ( v81 != v79 )
    {
      do
      {
        v76 = *((int **)v79 + 1);
        v68 = *(int **)v79;
        if ( v76 != *(int **)v79 )
        {
          v72 = (void **)(*(uint32_t *)v79 + 44);
          do
          {
            v36 = (char *)*(v72 - 1);
            if ( *v72 != v36 )
            {
              v37 = (char *)*(v72 - 1);
              v38 = v36 + 8;
              v39 = (char *)*v72;
              v40 = v37;
              do
              {
                v41 = *(glitch::video::CVertexStreams::Self **)&v38[v37 - v40];
                if ( v41 != nullptr && __sync_fetch_and_add((volatile int32_t *)v41, 0xFFFFFFFF) == 1 )
                {
                  v65 = v40;
                  v63 = v38;
                  glitch::video::CVertexStreams::Destroy(v41);
                  gll_operator_delete_arr((int)(uintptr_t)(v41));
                  v38 = v63;
                  v40 = v65;
                }
                v37 += 24;
              }
              while ( v39 != v37 );
              v36 = (char *)v68[10];
            }
            if ( v36 != nullptr )
              opDelete(v36);
            v42 = v68[1];
            v43 = *v68;
            if ( v42 != *v68 )
            {
              do
              {
                v44 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v43 + 4);
                v43 += 20;
                boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v44);
              }
              while ( v42 != v43 );
              v43 = *v68;
            }
            if ( v43 != 0 )
              gll_operator_delete_arr(v43);
            v68 += 13;
            v72 += 13;
          }
          while ( v76 != v68 );
          v68 = *(int **)v79;
        }
        if ( v68 != nullptr )
          gll_operator_delete_arr((int)(uintptr_t)(v68));
        v79 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)((char *)v79 + 12);
      }
      while ( v81 != v79 );
      v79 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)*(self + 1);
    }
    if ( v79 != nullptr )
      gll_operator_delete_arr((int)(uintptr_t)(v79));
    v18 = (glitch::streaming::CLodEmitter::SLodObject::Self *)self;
    *(self + 1) = (const glitch::streaming::SStreamingItemDesc::Self **)v83;
    v19 = v83 + v84;
    *(self + 3) = (const glitch::streaming::SStreamingItemDesc::Self **)(v83 + v84);
    goto LABEL_31;
  }
  v6 = ((char *)*(self + 2) - (char *)v78) >> 2;
  v82 = (char *)*(self + 2);
  if ( v80 > (unsigned int)(-1431655765 * v6) )
  {
    v46 = &v4[v6];
    v47 = -1431655765 * v6;
    if ( v47 > 0 )
    {
      v48 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)*(self + 1);
      do
      {
        srca = (const glitch::streaming::CLodEmitter::SLodLevel::Self *)v4;
        desta = v48;
        v4 += 3;
        v48 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)((char *)v48 + 12);
        glitch::streaming::CLodEmitter::SLodLevel::opAssign(desta, srca);
        --v47;
      }
      while ( v47 != 0 );
      v82 = (char *)*(self + 2);
      v66 = a2[2];
      v78 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)*(self + 1);
      v46 = (const glitch::streaming::SStreamingItemDesc::Self **)((char *)a2[1] + ((v82 - (char *)v78) & 0xFFFFFFFC));
    }
    v49 = (int *)v82;
    if ( v66 == v46 )
    {
      v18 = (glitch::streaming::CLodEmitter::SLodObject::Self *)self;
      v19 = (int)(uintptr_t)(v78) + 12 * v80;
      goto LABEL_31;
    }
    do
    {
      if ( v49 != nullptr )
      {
        v50 = (v46[1] - *v46) >> 2;
        v51 = 0;
        v52 = 0;
        *v49 = 0;
        v49[1] = 0;
        v49[2] = 0;
        if ( -991146299 * v50 != 0 )
        {
          v51 = 4 * v50;
          v52 = sub_4EBDC0(4 * v50);
        }
        *v49 = v52;
        v49[1] = v52;
        v49[2] = v52 + v51;
        v53 = *v46;
        if ( v46[1] != *v46 )
        {
          v73 = v46;
          v77 = v49;
          v54 = v46[1];
          v55 = v53;
          v56 = (glitch::streaming::SStreamingItemDesc::Self *)v52;
          do
          {
            if ( v56 != nullptr )
              glitch::streaming::SStreamingItemDesc::Construct(v56, v55);
            v55 = (const glitch::streaming::SStreamingItemDesc::Self *)((char *)v55 + 52);
            v56 = (glitch::streaming::SStreamingItemDesc::Self *)((char *)v56 + 52);
          }
          while ( v54 != v55 );
          v52 = (int)(uintptr_t)(v56);
          v46 = v73;
          v49 = v77;
        }
        v49[1] = v52;
      }
      v46 += 3;
      v49 += 3;
    }
    while ( v46 != v66 );
  }
  else
  {
    if ( v80 > 0 )
    {
      v7 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)*(self + 1);
      v8 = -1431655765 * v5;
      do
      {
        src = (const glitch::streaming::CLodEmitter::SLodLevel::Self *)v4;
        dest = v7;
        v4 += 3;
        v7 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)((char *)v7 + 12);
        glitch::streaming::CLodEmitter::SLodLevel::opAssign(dest, src);
        --v8;
      }
      while ( v8 != 0 );
      v78 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)((char *)v78 + 12 * v80);
    }
    for ( ; v82 != (char *)v78; v78 = (glitch::streaming::CLodEmitter::SLodLevel::Self *)((char *)v78 + 12) )
    {
      v74 = *((int **)v78 + 1);
      v67 = *(int **)v78;
      if ( v74 != *(int **)v78 )
      {
        v69 = (void **)(*(uint32_t *)v78 + 44);
        do
        {
          v9 = (char *)*(v69 - 1);
          if ( *v69 != v9 )
          {
            v10 = (char *)*(v69 - 1);
            v11 = v9 + 8;
            v12 = (char *)*v69;
            v13 = v10;
            do
            {
              v14 = *(glitch::video::CVertexStreams::Self **)&v11[v10 - v13];
              if ( v14 != nullptr && __sync_fetch_and_add((volatile int32_t *)v14, 0xFFFFFFFF) == 1 )
              {
                v64 = v13;
                v62 = v11;
                glitch::video::CVertexStreams::Destroy(v14);
                gll_operator_delete_arr((int)(uintptr_t)(v14));
                v11 = v62;
                v13 = v64;
              }
              v10 += 24;
            }
            while ( v12 != v10 );
            v9 = (char *)v67[10];
          }
          if ( v9 != nullptr )
            opDelete(v9);
          v15 = v67[1];
          v16 = *v67;
          if ( v15 != *v67 )
          {
            do
            {
              v17 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v16 + 4);
              v16 += 20;
              boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v17);
            }
            while ( v15 != v16 );
            v16 = *v67;
          }
          if ( v16 != 0 )
            gll_operator_delete_arr(v16);
          v67 += 13;
          v69 += 13;
        }
        while ( v74 != v67 );
        v67 = *(int **)v78;
      }
      if ( v67 != nullptr )
        gll_operator_delete_arr((int)(uintptr_t)(v67));
    }
  }
  v18 = (glitch::streaming::CLodEmitter::SLodObject::Self *)self;
  v19 = (int)(uintptr_t)(&(*(self + 1))[3 * v80]);
LABEL_31:
  *((uint32_t *)v18 + 2) = v19;
  v20 = *((uint8_t **)v18 + 10);
  *((uint32_t *)v18 + 4) = (uint32_t)(uintptr_t)(a2[4]);
  *((uint32_t *)v18 + 5) = (uint32_t)(uintptr_t)(a2[5]);
  *((uint32_t *)v18 + 6) = (uint32_t)(uintptr_t)(a2[6]);
  *((uint32_t *)v18 + 7) = (uint32_t)(uintptr_t)(a2[7]);
  *((uint32_t *)v18 + 8) = (uint32_t)(uintptr_t)(a2[8]);
  *((uint32_t *)v18 + 9) = (uint32_t)(uintptr_t)(a2[9]);
  v21 = (char *)a2[10];
  v70 = a2[11];
  n = (char *)v70 - v21;
  if ( (char *)v70 - v21 <= (unsigned int)(*((uint32_t *)v18 + 12) - (uint32_t)(uintptr_t)(v20)) )
  {
    v45 = *((uint8_t **)v18 + 11);
    if ( n > v45 - v20 )
    {
      v57 = &v21[v45 - v20];
      if ( v57 != v21 )
      {
        memmove(v20, v21, v45 - v20);
        v45 = (uint8_t *)(*(self + 11));
        v20 = (uint8_t *)(*(self + 10));
        v70 = a2[11];
        v57 = (char *)a2[10] + ((char *)v45 - (char *)v20);
      }
      if ( v70 == (const glitch::streaming::SStreamingItemDesc::Self **)v57 )
      {
        v26 = (const glitch::streaming::SStreamingItemDesc::Self **)&v20[n];
        v25 = (glitch::streaming::CLodEmitter::SLodObject::Self *)self;
      }
      else
      {
        memmove(v45, v57, (char *)v70 - v57);
        v25 = (glitch::streaming::CLodEmitter::SLodObject::Self *)self;
        v26 = (const glitch::streaming::SStreamingItemDesc::Self **)((char *)*(self + 10) + n);
      }
    }
    else if ( n != 0 )
    {
      memmove(v20, v21, n);
      v25 = (glitch::streaming::CLodEmitter::SLodObject::Self *)self;
      v26 = (const glitch::streaming::SStreamingItemDesc::Self **)((char *)*(self + 10) + n);
    }
    else
    {
      v26 = (const glitch::streaming::SStreamingItemDesc::Self **)v20;
      v25 = (glitch::streaming::CLodEmitter::SLodObject::Self *)self;
    }
  }
  else
  {
    v23 = (char *)opNew(n);
    v24 = v23;
    if ( n != 0 )
      memmove(v23, v21, n);
    if ( *(self + 10) != nullptr )
      opDelete(*(self + 10));
    v25 = (glitch::streaming::CLodEmitter::SLodObject::Self *)self;
    v26 = (const glitch::streaming::SStreamingItemDesc::Self **)&v24[n];
    *(self + 10) = (const glitch::streaming::SStreamingItemDesc::Self **)v24;
    *(self + 12) = v26;
  }
  *((uint32_t *)v25 + 11) = (uint32_t)(uintptr_t)(v26);
  v2 = (const glitch::streaming::CLodEmitter::SLodObject::Self *)a2;
  v3 = v25;
LABEL_38:
  *((uint32_t *)v3 + 13) = *((uint32_t *)v2 + 13);
  *((uint32_t *)v3 + 14) = *((uint32_t *)v2 + 14);
  return v3;
}


