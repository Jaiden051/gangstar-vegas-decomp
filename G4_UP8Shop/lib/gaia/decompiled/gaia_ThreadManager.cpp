#include "Core/Utils/DecompTypes.h"
#include "gaia_ThreadManager.h"

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::Destroy  (binary VA: 0x14ca290)
// Original: gaia::ThreadManager::~ThreadManager
// ----------------------------------------------------------------------------
void gaia::ThreadManager::Destroy(gaia::ThreadManager::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E60);
  if ( *((int *)self + 2) > 0 )
  {
    v1 = 0;
    do
    {
      v2 = *((uint32_t *)self + v1 + 5);
      if ( v2 != 0 )
        (*(void (**)(uint32_t))(*(uint32_t *)v2 + 4))(*((uint32_t *)self + v1 + 5));
      *((uint32_t *)self + v1++ + 5) = 0;
    }
    while ( *((uint32_t *)self + 2) > v1 );
  }
  glwebtools::Mutex::Destroy((gaia::ThreadManager::Self *)((char *)self + 12));
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::Destroy_ea14ca300  (binary VA: 0x14ca300)
// Original: gaia::ThreadManager::~ThreadManager
// ----------------------------------------------------------------------------
void gaia::ThreadManager::Destroy_ea14ca300(gaia::ThreadManager::Self *self)
{
  gaia::ThreadManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::Drop  (binary VA: 0x14d3740)
// Original: gaia::ThreadManager::Drop
// ----------------------------------------------------------------------------
int gaia::ThreadManager::Drop(gaia::ThreadManager::Self *self)
{
  int v1;
  int v2;
  bool v3;
  int result;

  v1 = 0;
  glwebtools::Mutex::Lock((gaia::ThreadManager::Self *)((char *)self + 12));
  v2 = *((uint32_t *)self + 1) - 1;
  v3 = *((uint32_t *)self + 1) == 1;
  *((uint32_t *)self + 1) = v2;
  if ( v2 < 0 || v3 )
  {
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::ThreadManager::s_mutex);
    gaia::ThreadManager::s_instance = 0;
    glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::ThreadManager::s_mutex);
    v1 = 1;
  }
  glwebtools::Mutex::Unlock((gaia::ThreadManager::Self *)((char *)self + 12));
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::Grab  (binary VA: 0x14d37e0)
// Original: gaia::ThreadManager::Grab
// ----------------------------------------------------------------------------
int gaia::ThreadManager::Grab(gaia::ThreadManager::Self *self)
{
  glwebtools::Mutex::Lock((gaia::ThreadManager::Self *)((char *)self + 12));
  ++*((uint32_t *)self + 1);
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::ThreadManager::Self *)((char *)self + 12)));
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::pushTask  (binary VA: 0x14d3d00)
// Original: gaia::ThreadManager::pushTask
// ----------------------------------------------------------------------------
int gaia::ThreadManager::pushTask(gaia::ThreadManagerService::Self **self, gaia::GaiaRequest::Self *a2)
{
  gaia::ThreadManagerRequest::Self *v2;
  int GaiaServiceIdentifier;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(self + 3));
  v2 = (gaia::ThreadManagerRequest::Self *)opNew(0x10u);
  gaia::ThreadManagerRequest::Construct(v2, a2);
  GaiaServiceIdentifier = gaia::ThreadManagerRequest::GetGaiaServiceIdentifier(v2);
  gaia::ThreadManagerService::AddRequest(*(self + GaiaServiceIdentifier + 5), v2);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(self + 3));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::pushTask  (binary VA: 0x14d3d90)
// Original: gaia::ThreadManager::pushTask
// ----------------------------------------------------------------------------
int gaia::ThreadManager::pushTask(int a1, int a2)
{
  gaia::ThreadManagerRequest::Self *v2;
  int GaiaServiceIdentifier;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 12));
  v2 = (gaia::ThreadManagerRequest::Self *)opNew(0x10u);
  gaia::ThreadManagerRequest::Construct(v2, a2);
  GaiaServiceIdentifier = gaia::ThreadManagerRequest::GetGaiaServiceIdentifier(v2);
  gaia::ThreadManagerService::AddRequest(*(gaia::ThreadManagerService::Self **)(a1 + 4 * GaiaServiceIdentifier + 20), v2);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 12));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::ForceCloseAllThreads  (binary VA: 0x14d4150)
// Original: gaia::ThreadManager::ForceCloseAllThreads
// ----------------------------------------------------------------------------
int gaia::ThreadManager::ForceCloseAllThreads(gaia::ThreadManager::Self *self)
{
  glwebtools::Mutex::Self *v1;
  int v2;
  int v3;
  gaia::Gaia::Self *Instance;
  char v6;

  v1 = (glwebtools::Mutex::Self *)((gaia::ThreadManager::Self *)((char *)self + 12));
  glwebtools::Mutex::Lock((gaia::ThreadManager::Self *)((char *)self + 12));
  v2 = *((uint32_t *)self + 2);
  do
  {
    if ( v2 <= 0 )
      break;
    v3 = 0;
    v6 = 0;
    do
    {
      gaia::ThreadManagerService::CheckThreadsStatus(*((gaia::ThreadManagerService::Self **)self + v3 + 5));
      if ( gaia::ThreadManagerService::GetNumberOfRunningThread(*((gaia::ThreadManagerService::Self **)self + v3 + 5)) > 0 )
      {
        glwebtools::Mutex::Unlock(v1);
        Instance = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
        gaia::Gaia::CancelAllRequests(Instance);
        glwebtools::Mutex::Lock(v1);
        v6 = 1;
      }
      ++v3;
      v2 = *((uint32_t *)self + 2);
    }
    while ( v2 > v3 );
  }
  while ( v6 != 0 );
  return glwebtools::Mutex::Unlock(v1);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::GetNumerOfRequest  (binary VA: 0x14d4250)
// Original: gaia::ThreadManager::GetNumerOfRequest
// ----------------------------------------------------------------------------
int gaia::ThreadManager::GetNumerOfRequest(gaia::ThreadManager::Self *self)
{
  int v1;
  int v2;
  gaia::ThreadManagerService::Self *v3;

  v1 = 0;
  v2 = 0;
  glwebtools::Mutex::Lock((gaia::ThreadManager::Self *)((char *)self + 12));
  do
  {
    v3 = *((gaia::ThreadManagerService::Self **)self + v2++ + 5);
    v1 += gaia::ThreadManagerService::GetNumberOfRequest(v3);
  }
  while ( v2 != 18 );
  glwebtools::Mutex::Unlock((gaia::ThreadManager::Self *)((char *)self + 12));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::CancelRequest  (binary VA: 0x14d4350)
// Original: gaia::ThreadManager::CancelRequest
// ----------------------------------------------------------------------------
int gaia::ThreadManager::CancelRequest(int a1, int a2)
{
  int v2;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 12));
  v2 = gaia::utils::DetectGaiaServiceIdentifier(a2);
  gaia::ThreadManagerService::CancelAllIdleRequests(*(gaia::ThreadManagerService::Self **)(a1 + 4 * v2 + 20));
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::CancelIdleRequestForUserProfile  (binary VA: 0x14d4860)
// Original: gaia::ThreadManager::CancelIdleRequestForUserProfile
// ----------------------------------------------------------------------------
int gaia::ThreadManager::CancelIdleRequestForUserProfile(gaia::ThreadManagerService::Self **self)
{
  int v1;
  int v3;

  v1 = 1020;
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::ThreadManager::s_mutex);
  do
  {
    v3 = v1++;
    gaia::ThreadManagerService::CancelIdleRequestForOpCode(*(self + 6), v3);
  }
  while ( v1 != 1027 );
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::ThreadManager::s_mutex);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::HasRequestForUserProfile  (binary VA: 0x14d4990)
// Original: gaia::ThreadManager::HasRequestForUserProfile
// ----------------------------------------------------------------------------
int gaia::ThreadManager::HasRequestForUserProfile(gaia::ThreadManagerService::Self **self)
{
  int v1;
  int v2;

  v1 = 1020;
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::ThreadManager::s_mutex);
  while ( (uint8_t)gaia::ThreadManagerService::IsRequestForOpCode(*(self + 6), v1) == 0 )
  {
    if ( ++v1 == 1027 )
    {
      v2 = 0;
      goto LABEL_5;
    }
  }
  v2 = 1;
LABEL_5:
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::ThreadManager::s_mutex);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::Construct  (binary VA: 0x14e3ca0)
// Original: gaia::ThreadManager::ThreadManager
// ----------------------------------------------------------------------------
gaia::ThreadManager::Self * gaia::ThreadManager::Construct(gaia::ThreadManager::Self *self)
{
  int v1;
  int MaxParalelRequests;
  gaia::ThreadManager::Self *result;
  gaia::ThreadManagerService::Self *v4;

  v1 = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E60);
  glwebtools::Mutex::Construct((gaia::ThreadManager::Self *)((char *)self + 12));
  *((uint32_t *)self + 1) = 1;
  *((uint32_t *)self + 2) = 18;
  do
  {
    MaxParalelRequests = gaia::utils::GetMaxParalelRequests();
    v4 = (gaia::ThreadManagerService::Self *)opNew(0x38u);
    gaia::ThreadManagerService::Construct(v4, MaxParalelRequests);
    result = (gaia::ThreadManager::Self *)(v4);
    *((uint32_t *)self + v1++ + 5) = (uint32_t)(uintptr_t)(v4);
  }
  while ( *((uint32_t *)self + 2) > v1 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::GetInstance  (binary VA: 0x14e3d20)
// Original: gaia::ThreadManager::GetInstance
// ----------------------------------------------------------------------------
gaia::ThreadManager::Self * gaia::ThreadManager::GetInstance()
{
  gaia::ThreadManager::Self *v0;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::ThreadManager::s_mutex);
  v0 = (gaia::ThreadManager::Self *)gaia::ThreadManager::s_instance;
  if ( gaia::ThreadManager::s_instance == 0 )
  {
    v0 = (gaia::ThreadManager::Self *)opNew(0x5Cu);
    gaia::ThreadManager::Construct(v0);
    gaia::ThreadManager::s_instance = (uintptr_t)(uintptr_t)(v0);
  }
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::ThreadManager::s_mutex);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::Update  (binary VA: 0x14e9360)
// Original: gaia::ThreadManager::Update
// ----------------------------------------------------------------------------
int gaia::ThreadManager::Update(int a1, int a2)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 12));
  gaia::ThreadManagerService::Update(*(gaia::ThreadManagerService::Self **)(a1 + 4 * a2 + 20));
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 12));
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManager::Update  (binary VA: 0x14e93c0)
// Original: gaia::ThreadManager::Update
// ----------------------------------------------------------------------------
int gaia::ThreadManager::Update(gaia::ThreadManager::Self *self)
{
  int v1;
  gaia::ThreadManagerService::Self *v2;

  glwebtools::Mutex::Lock((gaia::ThreadManager::Self *)((char *)self + 12));
  if ( *((int *)self + 2) > 0 )
  {
    v1 = 0;
    do
    {
      v2 = *((gaia::ThreadManagerService::Self **)self + v1++ + 5);
      gaia::ThreadManagerService::Update(v2);
    }
    while ( *((uint32_t *)self + 2) > v1 );
  }
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::ThreadManager::Self *)((char *)self + 12)));
}


