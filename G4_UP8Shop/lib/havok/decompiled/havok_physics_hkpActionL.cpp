#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpActionL.h"

// ----------------------------------------------------------------------------
// Function: hkpActionListener::Destroy  (binary VA: 0x182c850)
// Original: hkpActionListener::~hkpActionListener
// ----------------------------------------------------------------------------
void hkpActionListener::Destroy(hkpActionListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1C10);
}

// ----------------------------------------------------------------------------
// Function: hkpActionListener::actionAddedCallback  (binary VA: 0x182c870)
// Original: hkpActionListener::actionAddedCallback
// ----------------------------------------------------------------------------
void hkpActionListener::actionAddedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpActionListener::actionRemovedCallback  (binary VA: 0x182c880)
// Original: hkpActionListener::actionRemovedCallback
// ----------------------------------------------------------------------------
void hkpActionListener::actionRemovedCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpActionListener::Destroy_ea182c950  (binary VA: 0x182c950)
// Original: hkpActionListener::~hkpActionListener
// ----------------------------------------------------------------------------
void hkpActionListener::Destroy_ea182c950(hkpActionListener::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1C10);
  opDelete(self);
}


