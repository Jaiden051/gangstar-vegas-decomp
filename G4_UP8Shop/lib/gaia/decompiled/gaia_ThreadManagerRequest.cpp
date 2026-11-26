#include "Core/Utils/DecompTypes.h"
#include "gaia_ThreadManagerRequest.h"

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::GetAsyncRequest  (binary VA: 0x14d3830)
// Original: gaia::ThreadManagerRequest::GetAsyncRequest
// ----------------------------------------------------------------------------
int gaia::ThreadManagerRequest::GetAsyncRequest(gaia::ThreadManagerRequest::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::GetGaiaRequest  (binary VA: 0x14d3840)
// Original: gaia::ThreadManagerRequest::GetGaiaRequest
// ----------------------------------------------------------------------------
int gaia::ThreadManagerRequest::GetGaiaRequest(gaia::ThreadManagerRequest::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::GetRequestType  (binary VA: 0x14d3850)
// Original: gaia::ThreadManagerRequest::GetRequestType
// ----------------------------------------------------------------------------
int gaia::ThreadManagerRequest::GetRequestType(gaia::ThreadManagerRequest::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::Construct  (binary VA: 0x14d3860)
// Original: gaia::ThreadManagerRequest::ThreadManagerRequest
// ----------------------------------------------------------------------------
uint32_t * gaia::ThreadManagerRequest::Construct(uint32_t *a1, int a2)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2095E70);
  a1[3] = 0;
  a1[1] = 0;
  a1[2] = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::Construct  (binary VA: 0x14d3890)
// Original: gaia::ThreadManagerRequest::ThreadManagerRequest
// ----------------------------------------------------------------------------
gaia::ThreadManagerRequest::Self * gaia::ThreadManagerRequest::Construct(gaia::ThreadManagerRequest::Self *self, gaia::GaiaRequest::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E70);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 1) = 1;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::GetOperationCode  (binary VA: 0x14d38c0)
// Original: gaia::ThreadManagerRequest::GetOperationCode
// ----------------------------------------------------------------------------
int gaia::ThreadManagerRequest::GetOperationCode(gaia::ThreadManagerRequest::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 1);
  if ( v1 == 0 )
    return *(uint32_t *)(*((uint32_t *)self + 2) + 8);
  result = -1;
  if ( v1 == 1 )
    return gaia::GaiaRequest::GetOperationCode(*((gaia::GaiaRequest::Self **)self + 3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::DetectService  (binary VA: 0x14d3910)
// Original: gaia::ThreadManagerRequest::DetectService
// ----------------------------------------------------------------------------
int gaia::ThreadManagerRequest::DetectService(gaia::ThreadManagerRequest::Self *self)
{
  int v1;
  int OperationCode;

  v1 = *((uint32_t *)self + 1);
  if ( v1 == 0 )
  {
    OperationCode = *(uint32_t *)(*((uint32_t *)self + 2) + 8);
    return gaia::utils::detectService(OperationCode);
  }
  if ( v1 == 1 )
  {
    OperationCode = gaia::GaiaRequest::GetOperationCode(*((gaia::GaiaRequest::Self **)self + 3));
    return gaia::utils::detectService(OperationCode);
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::GetGaiaServiceIdentifier  (binary VA: 0x14d3960)
// Original: gaia::ThreadManagerRequest::GetGaiaServiceIdentifier
// ----------------------------------------------------------------------------
int gaia::ThreadManagerRequest::GetGaiaServiceIdentifier(gaia::ThreadManagerRequest::Self *self)
{
  int v1;

  v1 = gaia::ThreadManagerRequest::DetectService(self);
  return gaia::utils::DetectGaiaServiceIdentifier(v1);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::TriggerCallback  (binary VA: 0x14d3990)
// Original: gaia::ThreadManagerRequest::TriggerCallback
// ----------------------------------------------------------------------------
int gaia::ThreadManagerRequest::TriggerCallback(gaia::ThreadManagerRequest::Self *self)
{
  int result;
  typedef uint8_t _g4_t_v2[5];
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (7u + sizeof(_g4_t_v2)) > _g4_s0 ? (7u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 7u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  result = *((uint32_t *)self + 1);
  if ( result != 0 )
  {
    if ( result == 1 )
    {
      gaia::GaiaRequest::SetResponseCode(*((gaia::GaiaRequest::Self **)self + 3), 606);
      return gaia::Gaia::CompleteAsyncAction(*((gaia::Gaia::Self **)self + 3));
    }
  }
  else
  {
    *(uint32_t *)&v2[1] = 606;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), (char *)&unk_1B15112, (int)(uintptr_t)(v2));
    gaia::Gaia::CompleteAsyncAction(*((uint32_t **)self + 2), (int)(uintptr_t)(&v3), &v2[1]);
    { g4_std::string::Destroy(&v3); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::IsCanceled  (binary VA: 0x14d3a40)
// Original: gaia::ThreadManagerRequest::IsCanceled
// ----------------------------------------------------------------------------
int gaia::ThreadManagerRequest::IsCanceled(gaia::ThreadManagerRequest::Self *self)
{
  gaia::GaiaRequest::Self *GaiaRequest;

  if ( gaia::ThreadManagerRequest::GetRequestType(self) != 1 )
    return 0;
  GaiaRequest = (gaia::GaiaRequest::Self *)gaia::ThreadManagerRequest::GetGaiaRequest(self);
  return gaia::GaiaRequest::IsCanceled(GaiaRequest);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::GetPriority  (binary VA: 0x14d3ab0)
// Original: gaia::ThreadManagerRequest::GetPriority
// ----------------------------------------------------------------------------
int gaia::ThreadManagerRequest::GetPriority(gaia::ThreadManagerRequest::Self *self)
{
  gaia::GaiaRequest::Self *GaiaRequest;

  if ( gaia::ThreadManagerRequest::GetRequestType(self) == 0 )
    return 50;
  GaiaRequest = (gaia::GaiaRequest::Self *)gaia::ThreadManagerRequest::GetGaiaRequest(self);
  return gaia::GaiaRequest::GetPriority(GaiaRequest);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::Destroy  (binary VA: 0x14db290)
// Original: gaia::ThreadManagerRequest::~ThreadManagerRequest
// ----------------------------------------------------------------------------
void gaia::ThreadManagerRequest::Destroy(gaia::ThreadManagerRequest::Self *self)
{
  gaia::GaiaRequest::Self *v1;
  int v2;

  v1 = *((gaia::GaiaRequest::Self **)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E70);
  if ( v1 != nullptr )
  {
    gaia::GaiaRequest::Destroy(v1);
    opDelete(v1);
    *((uint32_t *)self + 3) = 0;
  }
  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 )
  {
    Json::Value::Destroy((Json::Value::Self *)(v2 + 36));
    Json::Value::Destroy((Json::Value::Self *)(v2 + 12));
    opDelete((void *)v2);
    *((uint32_t *)self + 2) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::Destroy_ea14db320  (binary VA: 0x14db320)
// Original: gaia::ThreadManagerRequest::~ThreadManagerRequest
// ----------------------------------------------------------------------------
void gaia::ThreadManagerRequest::Destroy_ea14db320(gaia::ThreadManagerRequest::Self *self)
{
  gaia::ThreadManagerRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerRequest::GetLogRequestID  (binary VA: 0x14df690)
// Original: gaia::ThreadManagerRequest::GetLogRequestID
// ----------------------------------------------------------------------------
gaia::ThreadManagerRequest::Self * gaia::ThreadManagerRequest::GetLogRequestID(gaia::ThreadManagerRequest::Self *self, int a2)
{
  int v2;
  int *v3;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = *(uint32_t *)(a2 + 4);
  if ( v2 != 0 )
  {
    if ( v2 == 1 )
    {
      gaia::GaiaRequest::GetLogRequestID(self, *(uint32_t *)(a2 + 12));
      return self;
    }
    v3 = (int *)((char *)&v5 + 1);
  }
  else
  {
    v3 = &v5;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v3));
  return self;
}


