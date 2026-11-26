#include "Core/Utils/DecompTypes.h"
#include "glitch_CIrrFactory.h"

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::Destroy  (binary VA: 0xcd0270)
// Original: glitch::CIrrFactory::~CIrrFactory
// ----------------------------------------------------------------------------
void glitch::CIrrFactory::Destroy(glitch::CIrrFactory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EAA8);
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::createResourceManager  (binary VA: 0xcd0290)
// Original: glitch::CIrrFactory::createResourceManager
// ----------------------------------------------------------------------------
int glitch::CIrrFactory::createResourceManager()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::Destroy_eacd0a10  (binary VA: 0xcd0a10)
// Original: glitch::CIrrFactory::~CIrrFactory
// ----------------------------------------------------------------------------
void glitch::CIrrFactory::Destroy_eacd0a10(glitch::CIrrFactory::Self *self)
{
  glitch::CIrrFactory::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::Construct  (binary VA: 0xcd6510)
// Original: glitch::CIrrFactory::CIrrFactory
// ----------------------------------------------------------------------------
glitch::CIrrFactory::Self * glitch::CIrrFactory::Construct(glitch::CIrrFactory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EAA8);
  glitch::CIrrFactory::Instance = (uintptr_t)(uintptr_t)(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::getInstance  (binary VA: 0xcd6540)
// Original: glitch::CIrrFactory::getInstance
// ----------------------------------------------------------------------------
void * glitch::CIrrFactory::getInstance()
{
  void *v0;

  v0 = (void *)glitch::CIrrFactory::Instance;
  if ( glitch::CIrrFactory::Instance == 0 )
  {
    v0 = &unk_20DF908;
    if ( byte_20DF900 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DF900) != 0 )
    {
      glitch::CIrrFactory::Construct((glitch::CIrrFactory::Self *)&unk_20DF908);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20DF900);
      __cxa_atexit((void (*)(void *))glitch::CIrrFactory::Destroy, &unk_20DF908, &unk_20D1280);
    }
  }
  return v0;
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::setInstance  (binary VA: 0xcd65d0)
// Original: glitch::CIrrFactory::setInstance
// ----------------------------------------------------------------------------
int glitch::CIrrFactory::setInstance(glitch::CIrrFactory::Self *self)
{
  int result;

  result = 0;
  if ( glitch::CIrrFactory::Instance == 0 )
  {
    glitch::CIrrFactory::Instance = (uintptr_t)(uintptr_t)(self);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::createHardwareMatrixSkinTechnique  (binary VA: 0xcd6790)
// Original: glitch::CIrrFactory::createHardwareMatrixSkinTechnique
// ----------------------------------------------------------------------------
int glitch::CIrrFactory::createHardwareMatrixSkinTechnique(int a1, int a2, int a3)
{
  int v3;

  v3 = opNew(0x28u);
  glitch::collada::detail::CHardwareMatrixSkinTechnique::Construct(v3, a2, a3);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::createSoftwareSkinTechnique  (binary VA: 0xcd67f0)
// Original: glitch::CIrrFactory::createSoftwareSkinTechnique
// ----------------------------------------------------------------------------
int glitch::CIrrFactory::createSoftwareSkinTechnique(int a1, int a2, int a3)
{
  int v3;

  v3 = opNew(0x2Cu);
  glitch::collada::detail::CSoftwareSkinTechnique::Construct(v3, a2, a3);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::createFileSystem  (binary VA: 0xcd68b0)
// Original: glitch::CIrrFactory::createFileSystem
// ----------------------------------------------------------------------------
glitch::CIrrFactory::Self * glitch::CIrrFactory::createFileSystem(glitch::CIrrFactory::Self *self, glf::Fs::Self *a2, glf::Fs::Self *a3)
{
  volatile int32_t *v3;

  v3 = (volatile int32_t *)opNew(0x30u);
  glitch::io::CGlfFileSystem::Construct((glitch::io::CGlfFileSystem::Self *)v3, a3);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    __sync_add_and_fetch(v3 + 1, 1u);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::createSceneManager  (binary VA: 0xcd6920)
// Original: glitch::CIrrFactory::createSceneManager
// ----------------------------------------------------------------------------
glitch::IObject::Self ** glitch::CIrrFactory::createSceneManager(glitch::IObject::Self **a1, int a2, int a3, int a4)
{
  volatile int32_t *v4;
  glitch::IObject::Self *v5;
  int v7[4];

  v4 = (volatile int32_t *)opNew(0x14u);
  glitch::scene::ICullerBase::Construct((glitch::scene::ICullerBase::Self *)v4);
  *v4 = (volatile int32_t)(uintptr_t)(&off_2061BA8);
  v7[0] = (int)(uintptr_t)(v4);
  __sync_add_and_fetch(v4 + 1, 1u);
  v5 = (glitch::IObject::Self *)opNew(0x158u);
  glitch::scene::CSceneManager::Construct(v5, a3, a4, (int)(uintptr_t)(v7));
  *a1 = v5;
  if ( v5 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)((char *)v5 + *(uint32_t *)(*(uint32_t *)v5 - 16) + 4), 1u);
  if ( v7[0] != 0 )
    sub_5459C0((volatile int32_t *)v7[0]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::CIrrFactory::createColladaTimelineController  (binary VA: 0xcd69e0)
// Original: glitch::CIrrFactory::createColladaTimelineController
// ----------------------------------------------------------------------------
glitch::CIrrFactory::Self * glitch::CIrrFactory::createColladaTimelineController(glitch::CIrrFactory::Self *self)
{
  glitch::collada::CTimelineController::Self *v1;

  v1 = (glitch::collada::CTimelineController::Self *)opNew(0x48u);
  glitch::collada::CTimelineController::Construct(v1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v1);
  if ( v1 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)((char *)v1 + *(uint32_t *)(*(uint32_t *)v1 - 12) + 4), 1u);
  return self;
}


