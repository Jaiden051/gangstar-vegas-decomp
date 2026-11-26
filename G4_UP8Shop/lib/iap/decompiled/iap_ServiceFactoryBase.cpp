#include "Core/Utils/DecompTypes.h"
#include "iap_ServiceFactoryBase.h"

// ----------------------------------------------------------------------------
// Function: iap::ServiceFactoryBase::Destroy  (binary VA: 0x14fac90)
// Original: iap::ServiceFactoryBase::~ServiceFactoryBase
// ----------------------------------------------------------------------------
void iap::ServiceFactoryBase::Destroy(iap::ServiceFactoryBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096018);
}

// ----------------------------------------------------------------------------
// Function: iap::ServiceFactoryBase::Destroy_ea14facb0  (binary VA: 0x14facb0)
// Original: iap::ServiceFactoryBase::~ServiceFactoryBase
// ----------------------------------------------------------------------------
void iap::ServiceFactoryBase::Destroy_ea14facb0(iap::ServiceFactoryBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096018);
  opDelete(self);
}


