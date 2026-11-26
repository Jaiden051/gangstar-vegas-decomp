#include "Core/Utils/DecompTypes.h"
#include "iap_Request.h"

// ----------------------------------------------------------------------------
// Function: iap::Request::Destroy  (binary VA: 0x1514ea0)
// Original: iap::Request::~Request
// ----------------------------------------------------------------------------
void iap::Request::Destroy(iap::Request::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096288);
}

// ----------------------------------------------------------------------------
// Function: iap::Request::GetId  (binary VA: 0x1514ec0)
// Original: iap::Request::GetId
// ----------------------------------------------------------------------------
int iap::Request::GetId(iap::Request::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: iap::Request::GetRequesterId  (binary VA: 0x1514ed0)
// Original: iap::Request::GetRequesterId
// ----------------------------------------------------------------------------
int iap::Request::GetRequesterId(iap::Request::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: iap::Request::Destroy_ea1514ee0  (binary VA: 0x1514ee0)
// Original: iap::Request::~Request
// ----------------------------------------------------------------------------
void iap::Request::Destroy_ea1514ee0(iap::Request::Self *self)
{
  iap::Request::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::Request::Construct  (binary VA: 0x15156b0)
// Original: iap::Request::Request
// ----------------------------------------------------------------------------
iap::Request::Self * iap::Request::Construct(iap::Request::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096288);
  *((uint32_t *)self + 1) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::Request::Construct  (binary VA: 0x15156e0)
// Original: iap::Request::Request
// ----------------------------------------------------------------------------
iap::Request::Self * iap::Request::Construct(iap::Request::Self *self, unsigned int a2, unsigned int a3)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096288);
  *((uint32_t *)self + 1) = a2;
  *((uint32_t *)self + 2) = a3;
  return self;
}


