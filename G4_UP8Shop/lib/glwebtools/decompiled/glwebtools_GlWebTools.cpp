#include "Core/Utils/DecompTypes.h"
#include "glwebtools_GlWebTools.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_GlWebTools.cpp
// Library: glwebtools | Module: glwebtools_GlWebTools
// Binary Address Span: 0x13d9cb0 .. 0x13dc9a0 (20 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13d9cb0 (size: 144 bytes)
// Symbol:    _ZN10glwebtools10GlWebTools16CreationSettingsC1Ev
// Demangled: glwebtools::GlWebTools::CreationSettings::CreationSettings(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools10GlWebTools16CreationSettingsC2Ev'
glwebtools::GlWebTools::CreationSettings::Self *glwebtools::GlWebTools::CreationSettings::Construct(
        glwebtools::GlWebTools::CreationSettings::Self *self)
{
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint8_t *)self = 1;
  *((uint32_t *)self + 1) = 100;
  *((uint32_t *)self + 2) = 1;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 100;
  *((uint32_t *)self + 5) = 1;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 1000;
  return (struct glwebtools::GlWebTools::CreationSettings::Self *)glwebtools::GetAppInfo(
                                                              (char *)self + 32,
                                                              (char *)self + 36,
                                                              (char *)self + 40,
                                                              (char *)self + 44,
                                                              (char *)self + 48);
}


// ============================================================================
// Address:   0x13da970 (size: 15 bytes)
// Symbol:    _ZN10glwebtools10GlWebToolsC1Ev
// Demangled: glwebtools::GlWebTools::GlWebTools(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools10GlWebToolsC2Ev'
struct glwebtools::GlWebTools::Self *glwebtools::GlWebTools::Construct(glwebtools::GlWebTools::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::Construct  (binary VA: 0x13da980)
// Original: glwebtools::GlWebTools::GlWebTools
// ----------------------------------------------------------------------------
glwebtools::GlWebTools::Self * glwebtools::GlWebTools::Construct(glwebtools::GlWebTools::Self *self, const glwebtools::GlWebTools::Self *a2)
{
  glwebtools::GlWebTools::Self *result;
  bool v3;

  result = *(glwebtools::GlWebTools::Self **)a2;
  v3 = *(uint32_t *)a2 == 0;
  *(uint32_t *)self = *(uint32_t *)a2;
  if ( !v3 )
    return G4_VCALL<glwebtools::GlWebTools::Self *>(result, 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::IsInitialized  (binary VA: 0x13da9b0)
// Original: glwebtools::GlWebTools::IsInitialized
// ----------------------------------------------------------------------------
int glwebtools::GlWebTools::IsInitialized(glwebtools::GlWebToolsCore::Self **self)
{
  int result;

  result = 0;
  if ( *self != nullptr )
    return glwebtools::GlWebToolsCore::IsInitialized(*self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::Shutdown  (binary VA: 0x13da9e0)
// Original: glwebtools::GlWebTools::Shutdown
// ----------------------------------------------------------------------------
int glwebtools::GlWebTools::Shutdown(glwebtools::GlWebToolsCore::Self **self)
{
  char IsInitialized;
  int result;

  IsInitialized = glwebtools::GlWebTools::IsInitialized(self);
  result = -2147483647;
  if ( IsInitialized != 0 )
    return glwebtools::GlWebToolsCore::Shutdown(*self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::Update  (binary VA: 0x13daa30)
// Original: glwebtools::GlWebTools::Update
// ----------------------------------------------------------------------------
int glwebtools::GlWebTools::Update(glwebtools::GlWebToolsCore::Self **self)
{
  char IsInitialized;
  int result;

  IsInitialized = glwebtools::GlWebTools::IsInitialized(self);
  result = -2147483647;
  if ( IsInitialized != 0 )
    return glwebtools::GlWebToolsCore::Update(*self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::ShutdownInProgress  (binary VA: 0x13daa80)
// Original: glwebtools::GlWebTools::ShutdownInProgress
// ----------------------------------------------------------------------------
int glwebtools::GlWebTools::ShutdownInProgress(glwebtools::GlWebToolsCore::Self **self)
{
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized(self) != 0 )
    return glwebtools::GlWebToolsCore::ShutdownInProgress(*self);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::Release  (binary VA: 0x13dade0)
// Original: glwebtools::GlWebTools::Release
// ----------------------------------------------------------------------------
int glwebtools::GlWebTools::Release(glwebtools::GlWebToolsCore::Self **self)
{
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized(self) == 0 )
    return 0;
  if ( G4_VCALL<int>(*self, 16) == 0 )
  {
    glwebtools::GlWebToolsCore::Terminate(*self, (unsigned int)(uintptr_t)(&stru_1F4));
    glwebtools::GlWebToolsCore::DestroyInstance(*self);
  }
  *self = nullptr;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::opAssign  (binary VA: 0x13dae60)
// Original: glwebtools::GlWebTools::operator=
// ----------------------------------------------------------------------------
glwebtools::GlWebTools::Self * glwebtools::GlWebTools::opAssign(glwebtools::GlWebTools::Self *self, const glwebtools::GlWebTools::Self *a2)
{
  int v2;

  if ( self != a2 )
  {
    glwebtools::GlWebTools::Release((glwebtools::GlWebToolsCore::Self **)self);
    v2 = *(uint32_t *)a2;
    if ( *(uint32_t *)a2 != 0 )
    {
      *(uint32_t *)self = v2;
      G4_VCALL<void>(v2, 12);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::Destroy  (binary VA: 0x13daec0)
// Original: glwebtools::GlWebTools::~GlWebTools
// ----------------------------------------------------------------------------
void glwebtools::GlWebTools::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  glwebtools::GlWebTools::Release(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::Release  (binary VA: 0x13daef0)
// Original: glwebtools::GlWebTools::Release
// ----------------------------------------------------------------------------
int glwebtools::GlWebTools::Release(glwebtools::GlWebToolsCore::Self **self, glwebtools::GlWebToolsCore::Self *a2)
{
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized(self) == 0 )
    return 0;
  if ( G4_VCALL<int>(*self, 16) == 0 )
  {
    glwebtools::GlWebToolsCore::Terminate(*self, (unsigned int)(uintptr_t)(a2));
    glwebtools::GlWebToolsCore::DestroyInstance(*self);
  }
  *self = nullptr;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::Terminate  (binary VA: 0x13daf70)
// Original: glwebtools::GlWebTools::Terminate
// ----------------------------------------------------------------------------
char glwebtools::GlWebTools::Terminate(glwebtools::GlWebToolsCore::Self **self, glwebtools::GlWebToolsCore::Self *a2)
{
  char IsInitialized;
  char result;

  IsInitialized = glwebtools::GlWebTools::IsInitialized(self);
  result = 1;
  if ( IsInitialized != 0 )
  {
    result = 3;
    if ( *((int *)*self + 1) <= 1 )
      return glwebtools::GlWebTools::Release(self, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::Terminate  (binary VA: 0x13dafd0)
// Original: glwebtools::GlWebTools::Terminate
// ----------------------------------------------------------------------------
char glwebtools::GlWebTools::Terminate(glwebtools::GlWebToolsCore::Self **self)
{
  return glwebtools::GlWebTools::Terminate(self, (glwebtools::GlWebToolsCore::Self *)&stru_1F4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::CreateUrlConnection  (binary VA: 0x13db770)
// Original: glwebtools::GlWebTools::CreateUrlConnection
// ----------------------------------------------------------------------------
glwebtools::UrlConnection::Self * glwebtools::GlWebTools::CreateUrlConnection(glwebtools::UrlConnection::Self *a1, glwebtools::GlWebToolsCore::Self **a2, int *a3)
{
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized(a2) != 0 )
    glwebtools::GlWebToolsCore::CreateUrlConnection(a1, *a2, a3);
  else
    glwebtools::UrlConnection::Construct(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::CreateUrlConnection  (binary VA: 0x13db8f0)
// Original: glwebtools::GlWebTools::CreateUrlConnection
// ----------------------------------------------------------------------------
glwebtools::GlWebTools::Self * glwebtools::GlWebTools::CreateUrlConnection(glwebtools::GlWebTools::Self *self, glwebtools::GlWebToolsCore::Self **a2)
{
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized(a2) != 0 )
    glwebtools::GlWebToolsCore::CreateUrlConnection(self, *a2);
  else
    glwebtools::UrlConnection::Construct(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::CreateUrlRequest  (binary VA: 0x13dbb70)
// Original: glwebtools::GlWebTools::CreateUrlRequest
// ----------------------------------------------------------------------------
glwebtools::GlWebTools::Self * glwebtools::GlWebTools::CreateUrlRequest(glwebtools::GlWebTools::Self *self, glwebtools::UrlRequest::CreationSettings **a2, glwebtools::UrlRequest::CreationSettings *a3)
{
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized((glwebtools::GlWebToolsCore::Self **)(a2)) != 0 )
    glwebtools::GlWebToolsCore::CreateUrlRequest(self, *a2, a3);
  else
    glwebtools::UrlRequest::Construct(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::CreateUrlRequest  (binary VA: 0x13dbc70)
// Original: glwebtools::GlWebTools::CreateUrlRequest
// ----------------------------------------------------------------------------
glwebtools::GlWebTools::Self * glwebtools::GlWebTools::CreateUrlRequest(glwebtools::GlWebTools::Self *self, glwebtools::UrlRequest::CreationSettings **a2)
{
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized((glwebtools::GlWebToolsCore::Self **)(a2)) != 0 )
    glwebtools::GlWebToolsCore::CreateUrlRequest(self, *a2);
  else
    glwebtools::UrlRequest::Construct(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::AddTaskGroup  (binary VA: 0x13dbf90)
// Original: glwebtools::GlWebTools::AddTaskGroup
// ----------------------------------------------------------------------------
int glwebtools::GlWebTools::AddTaskGroup(glwebtools::GlWebToolsCore::Self **a1, void **a2, glwebtools::ThreadPool::CreationSettings::Self *a3)
{
  char IsInitialized;
  int result;

  IsInitialized = glwebtools::GlWebTools::IsInitialized(a1);
  result = -2147483647;
  if ( IsInitialized != 0 )
    return glwebtools::GlWebToolsCore::AddTaskGroup((int)(uintptr_t)(*a1), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::AddTaskGroup  (binary VA: 0x13dc060)
// Original: glwebtools::GlWebTools::AddTaskGroup
// ----------------------------------------------------------------------------
int glwebtools::GlWebTools::AddTaskGroup(glwebtools::GlWebToolsCore::Self **a1, void **a2)
{
  char IsInitialized;
  int result;

  IsInitialized = glwebtools::GlWebTools::IsInitialized(a1);
  result = -2147483647;
  if ( IsInitialized != 0 )
    return glwebtools::GlWebToolsCore::AddTaskGroup((int)(uintptr_t)(*a1), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebTools::Initialize  (binary VA: 0x13dc9a0)
// Original: glwebtools::GlWebTools::Initialize
// ----------------------------------------------------------------------------
int glwebtools::GlWebTools::Initialize(glwebtools::GlWebTools::Self *self, const glwebtools::GlWebTools::CreationSettings::Self *a2)
{
  int Instance;

  Instance = -2147483645;
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized((glwebtools::GlWebToolsCore::Self **)self) == 0 )
  {
    Instance = glwebtools::GlWebToolsCore::CreateInstance(self);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)Instance) )
    {
      (*(void (**)(uint32_t))(**(uint32_t **)self + 12))(*(uint32_t *)self);
      Instance = glwebtools::GlWebToolsCore::Initialize(*(glwebtools::GlWebToolsCore::Self **)self, a2);
      if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)Instance) )
        glwebtools::GlWebTools::Release((glwebtools::GlWebToolsCore::Self **)self);
    }
  }
  return Instance;
}


