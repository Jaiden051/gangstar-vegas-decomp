#include "Core/Utils/DecompTypes.h"
#include "glf_ImplAppBase.h"

// ----------------------------------------------------------------------------
// Function: glf::ImplAppBase::EndOfAutoStartMacro  (binary VA: 0xc71af0)
// Original: glf::ImplAppBase::EndOfAutoStartMacro
// ----------------------------------------------------------------------------
void glf::ImplAppBase::EndOfAutoStartMacro()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::ImplAppBase::GetDeviceName  (binary VA: 0xc71b00)
// Original: glf::ImplAppBase::GetDeviceName
// ----------------------------------------------------------------------------
const char * glf::ImplAppBase::GetDeviceName()
{
  return "null";
}

// ----------------------------------------------------------------------------
// Function: glf::ImplAppBase::Present  (binary VA: 0xc71b20)
// Original: glf::ImplAppBase::Present
// ----------------------------------------------------------------------------
void glf::ImplAppBase::Present()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::ImplAppBase::StartRemoteController  (binary VA: 0xc71b30)
// Original: glf::ImplAppBase::StartRemoteController
// ----------------------------------------------------------------------------
void glf::ImplAppBase::StartRemoteController()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::ImplAppBase::IsScreenAutoRotating  (binary VA: 0xc71b40)
// Original: glf::ImplAppBase::IsScreenAutoRotating
// ----------------------------------------------------------------------------
int glf::ImplAppBase::IsScreenAutoRotating()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::ImplAppBase::Destroy  (binary VA: 0xc72070)
// Original: glf::ImplAppBase::~ImplAppBase
// ----------------------------------------------------------------------------
void glf::ImplAppBase::Destroy(glf::ImplAppBase::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D4A8);
  v1 = *((uint32_t *)self + 13);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(*((uint32_t *)self + 13));
  glf::AppEventReceiver::Destroy((glf::App::Self **)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::ImplAppBase::Destroy_eac72110  (binary VA: 0xc72110)
// Original: glf::ImplAppBase::~ImplAppBase
// ----------------------------------------------------------------------------
void glf::ImplAppBase::Destroy_eac72110(glf::ImplAppBase::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D4A8);
  v1 = *((uint32_t *)self + 13);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(*((uint32_t *)self + 13));
  glf::AppEventReceiver::Destroy((glf::App::Self **)self + 2);
  opDelete(self);
}


