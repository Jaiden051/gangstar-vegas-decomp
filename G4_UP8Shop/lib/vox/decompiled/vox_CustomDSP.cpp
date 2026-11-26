#include "Core/Utils/DecompTypes.h"
#include "vox_CustomDSP.h"

// ----------------------------------------------------------------------------
// Function: vox::CustomDSP::DisconnectFromBus  (binary VA: 0xfcce70)
// Original: vox::CustomDSP::DisconnectFromBus
// ----------------------------------------------------------------------------
void vox::CustomDSP::DisconnectFromBus()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::CustomDSP::Serialize  (binary VA: 0xfcce80)
// Original: vox::CustomDSP::Serialize
// ----------------------------------------------------------------------------
int vox::CustomDSP::Serialize()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::CustomDSP::Construct  (binary VA: 0xfdaec0)
// Original: vox::CustomDSP::CustomDSP
// ----------------------------------------------------------------------------
vox::CustomDSP::Self * vox::CustomDSP::Construct(vox::CustomDSP::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CBE8);
  *((uint32_t *)self + 1) = -1082130432;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::CustomDSP::Destroy  (binary VA: 0xfdaef0)
// Original: vox::CustomDSP::~CustomDSP
// ----------------------------------------------------------------------------
void vox::CustomDSP::Destroy(vox::CustomDSP::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CBE8);
}

// ----------------------------------------------------------------------------
// Function: vox::CustomDSP::Destroy_eafdaf10  (binary VA: 0xfdaf10)
// Original: vox::CustomDSP::~CustomDSP
// ----------------------------------------------------------------------------
void vox::CustomDSP::Destroy_eafdaf10(vox::CustomDSP::Self *self)
{
  vox::CustomDSP::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::CustomDSP::ConnectToBus  (binary VA: 0xfdaf50)
// Original: vox::CustomDSP::ConnectToBus
// ----------------------------------------------------------------------------
bool vox::CustomDSP::ConnectToBus(vox::CustomDSP::Self *self, float a2, int a3, int a4)
{
  bool result;

  *((float *)self + 1) = a2;
  result = false;
  if ( a3 == 2 )
    return a4 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::CustomDSP::WillOutput  (binary VA: 0xfdaf80)
// Original: vox::CustomDSP::WillOutput
// ----------------------------------------------------------------------------
int vox::CustomDSP::WillOutput()
{
  return 1;
}


