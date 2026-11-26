#include "Core/Utils/DecompTypes.h"
#include "iap_EventData.h"

// ----------------------------------------------------------------------------
// Function: iap::EventData::Destruct  (binary VA: 0x15148c0)
// Original: iap::EventData::Destruct
// ----------------------------------------------------------------------------
int iap::EventData::Destruct(iap::EventData::Self *self)
{
  int result;

  if ( self != nullptr )
  {
    (**(void (***)(iap::EventData::Self *))self)(self);
    return sub_4EBEE0((int)(uintptr_t)(self));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::EventData::Construct  (binary VA: 0x15149b0)
// Original: iap::EventData::Construct
// ----------------------------------------------------------------------------
iap::EventRequestResultData::Self * iap::EventData::Construct(iap::EventData::Self *self)
{
  iap::EventRequestResultData::Self *v1;

  if ( self == nullptr )
    return nullptr;
  if ( strcmp("result", (const char *)self) == 0 )
  {
    v1 = (iap::EventRequestResultData::Self *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::EventRequestResultData::Construct(v1);
  }
  else if ( strcmp("command", (const char *)self) == 0 )
  {
    v1 = (iap::EventRequestResultData::Self *)sub_4EBE70(0x14u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::EventCommandData::Construct(v1);
  }
  else
  {
    v1 = nullptr;
    if ( strcmp("command_result", (const char *)self) == 0 )
    {
      v1 = (iap::EventRequestResultData::Self *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      iap::EventCommandResultData::Construct(v1);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: iap::EventData::Destroy  (binary VA: 0x1514e00)
// Original: iap::EventData::~EventData
// ----------------------------------------------------------------------------
void iap::EventData::Destroy(iap::EventData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096260);
}

// ----------------------------------------------------------------------------
// Function: iap::EventData::Destroy_ea1514e20  (binary VA: 0x1514e20)
// Original: iap::EventData::~EventData
// ----------------------------------------------------------------------------
void iap::EventData::Destroy_ea1514e20(iap::EventData::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096260);
  opDelete(self);
}


