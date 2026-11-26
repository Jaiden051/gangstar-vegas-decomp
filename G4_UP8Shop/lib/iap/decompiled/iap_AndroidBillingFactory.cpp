#include "Core/Utils/DecompTypes.h"
#include "iap_AndroidBillingFactory.h"

// ----------------------------------------------------------------------------
// Function: iap::AndroidBillingFactory::Destroy  (binary VA: 0x1515ad0)
// Original: iap::AndroidBillingFactory::Destroy
// ----------------------------------------------------------------------------
int iap::AndroidBillingFactory::Destroy(iap::AndroidBillingFactory::Self *self, iap::Service::Self **a2)
{
  if ( *a2 != nullptr )
  {
    (**(void (***)(uint32_t))*a2)((uint32_t)(uintptr_t)(*a2));
    sub_4EBEE0((int)(uintptr_t)(*a2));
    *a2 = nullptr;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBillingFactory::Construct  (binary VA: 0x1517f50)
// Original: iap::AndroidBillingFactory::Construct
// ----------------------------------------------------------------------------
unsigned int iap::AndroidBillingFactory::Construct(iap::AndroidBillingFactory::Self *self, iap::Service::Self **a2)
{
  iap::AndroidBilling::Self *v2;

  v2 = (iap::AndroidBilling::Self *)sub_4EBE70(0x50u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  iap::AndroidBilling::Construct(v2);
  *a2 = (iap::Service::Self *)(v2);
  return v2 == nullptr ? 0x80000005 : 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBillingFactory::Destroy  (binary VA: 0x151df00)
// Original: iap::AndroidBillingFactory::~AndroidBillingFactory
// ----------------------------------------------------------------------------
void iap::AndroidBillingFactory::Destroy(iap::AndroidBillingFactory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096018);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBillingFactory::Destroy_ea151df20  (binary VA: 0x151df20)
// Original: iap::AndroidBillingFactory::~AndroidBillingFactory
// ----------------------------------------------------------------------------
void iap::AndroidBillingFactory::Destroy_ea151df20(iap::AndroidBillingFactory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096018);
  opDelete(self);
}


