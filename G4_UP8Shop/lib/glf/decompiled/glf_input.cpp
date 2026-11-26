#include "Core/Utils/DecompTypes.h"
#include "glf_input.h"

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::Destroy  (binary VA: 0xcb5c70)
// Original: glf::input::ImplBase::~ImplBase
// ----------------------------------------------------------------------------
void glf::input::ImplBase::Destroy(glf::input::ImplBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E068);
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::EnableAccelerometer  (binary VA: 0xcb5c90)
// Original: glf::input::ImplBase::EnableAccelerometer
// ----------------------------------------------------------------------------
void glf::input::ImplBase::EnableAccelerometer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::EnableGyro  (binary VA: 0xcb5ca0)
// Original: glf::input::ImplBase::EnableGyro
// ----------------------------------------------------------------------------
int glf::input::ImplBase::EnableGyro()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::EnableSensor  (binary VA: 0xcb5cb0)
// Original: glf::input::ImplBase::EnableSensor
// ----------------------------------------------------------------------------
void glf::input::ImplBase::EnableSensor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::UpdateFrame  (binary VA: 0xcb5cc0)
// Original: glf::input::ImplBase::UpdateFrame
// ----------------------------------------------------------------------------
void glf::input::ImplBase::UpdateFrame()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::PreUpdateFrame  (binary VA: 0xcb5cd0)
// Original: glf::input::ImplBase::PreUpdateFrame
// ----------------------------------------------------------------------------
void glf::input::ImplBase::PreUpdateFrame()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::OnEvent  (binary VA: 0xcb5ce0)
// Original: glf::input::ImplBase::OnEvent
// ----------------------------------------------------------------------------
int glf::input::ImplBase::OnEvent()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::StartDuoProtocol  (binary VA: 0xcb5cf0)
// Original: glf::input::ImplBase::StartDuoProtocol
// ----------------------------------------------------------------------------
void glf::input::ImplBase::StartDuoProtocol()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::StartWirelessDiscovery  (binary VA: 0xcb5d00)
// Original: glf::input::ImplBase::StartWirelessDiscovery
// ----------------------------------------------------------------------------
void glf::input::ImplBase::StartWirelessDiscovery()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::StopWirelessDiscovery  (binary VA: 0xcb5d10)
// Original: glf::input::ImplBase::StopWirelessDiscovery
// ----------------------------------------------------------------------------
void glf::input::ImplBase::StopWirelessDiscovery()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::input::ImplBase::Destroy_eacb5d30  (binary VA: 0xcb5d30)
// Original: glf::input::ImplBase::~ImplBase
// ----------------------------------------------------------------------------
void glf::input::ImplBase::Destroy_eacb5d30(glf::input::ImplBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E068);
  opDelete(self);
}


