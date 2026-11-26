#include "Core/Utils/DecompTypes.h"
#include "glf_InputDevice.h"

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::Destroy  (binary VA: 0xcb2c10)
// Original: glf::InputDevice::~InputDevice
// ----------------------------------------------------------------------------
void glf::InputDevice::Destroy(glf::InputDevice::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DFA8);
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::Destroy_eacb2c30  (binary VA: 0xcb2c30)
// Original: glf::InputDevice::~InputDevice
// ----------------------------------------------------------------------------
void glf::InputDevice::Destroy_eacb2c30(glf::InputDevice::Self *self)
{
  glf::InputDevice::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::ResetFrame  (binary VA: 0xcb2d40)
// Original: glf::InputDevice::ResetFrame
// ----------------------------------------------------------------------------
unsigned int glf::InputDevice::ResetFrame(glf::InputDevice::Self *self)
{
  unsigned int v1;
  unsigned int i;
  unsigned int result;
  unsigned int v4;
  int v5;

  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 )
  {
    for ( i = 0; i < v1; ++i )
    {
      if ( v1 > i )
        v1 = i;
      glf::SimpleButton::ResetFrame((glf::SimpleButton::Self *)(*((uint32_t *)self + 2) + 4 * v1));
      v1 = *((uint32_t *)self + 1);
    }
  }
  result = *((uint32_t *)self + 5);
  if ( result != 0 )
  {
    v4 = 0;
    do
    {
      if ( result > v4 )
        result = v4;
      v5 = *((uint32_t *)self + 6) + 10 * result;
      ++v4;
      *(uint8_t *)v5 = 3 * ((*(uint8_t *)v5 & 1) != 0);
      *(uint32_t *)(v5 + 2) = *(uint32_t *)(v5 + 6);
      result = *((uint32_t *)self + 5);
    }
    while ( result > v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::Construct  (binary VA: 0xcb3540)
// Original: glf::InputDevice::InputDevice
// ----------------------------------------------------------------------------
glf::InputDevice::Self * glf::InputDevice::Construct(glf::InputDevice::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DFA8);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint8_t *)self + 72) = 0;
  *((uint32_t *)self + 19) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::GetInputManager  (binary VA: 0xcb35a0)
// Original: glf::InputDevice::GetInputManager
// ----------------------------------------------------------------------------
int glf::InputDevice::GetInputManager(glf::InputDevice::Self *self)
{
  int result;

  result = *((uint32_t *)self + 19);
  if ( result == 0 )
    return glf::GetInputMgr();
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::SetInputManager  (binary VA: 0xcb35e0)
// Original: glf::InputDevice::SetInputManager
// ----------------------------------------------------------------------------
glf::InputDevice::Self * glf::InputDevice::SetInputManager(glf::InputDevice::Self *self, glf::InputManager::Self *a2)
{
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::SetUpdated  (binary VA: 0xcb35f0)
// Original: glf::InputDevice::SetUpdated
// ----------------------------------------------------------------------------
int glf::InputDevice::SetUpdated(glf::InputDevice::Self *self)
{
  glf::InputManager::Self *InputManager;

  InputManager = (glf::InputManager::Self *)glf::InputDevice::GetInputManager(self);
  return glf::InputManager::AddUpdatedDevice(InputManager, self);
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::UpdateButton  (binary VA: 0xcb3630)
// Original: glf::InputDevice::UpdateButton
// ----------------------------------------------------------------------------
unsigned int glf::InputDevice::UpdateButton(glf::InputDevice::Self *self, unsigned int a2, bool a3)
{
  unsigned int result;

  result = *((uint32_t *)self + 1);
  if ( result > a2 )
  {
    if ( a2 <= result )
      result = a2;
    glf::SimpleButton::UpdateFrame((glf::SimpleButton::Self *)(*((uint32_t *)self + 2) + 4 * result), a3);
    return glf::InputDevice::SetUpdated(self);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::UpdateCursor  (binary VA: 0xcb3790)
// Original: glf::InputDevice::UpdateCursor
// ----------------------------------------------------------------------------
int glf::InputDevice::UpdateCursor(glf::InputDevice::Self *self, unsigned int a2, bool a3, int16_t a4, int16_t a5)
{
  unsigned int v5;
  int16_t v6;
  int v7;

  v5 = *((uint32_t *)self + 5);
  v6 = a4;
  if ( a2 >= v5 && byte_20DCBF8 == 0 )
  {
    glf::Console::Println(
      (glf::Console::Self *)"%s(%d): %s - %s",
      "../../../../../lib/glf/include/glf/input/inputDevice.h",
      242,
      "operator[]",
      "idx >= mNum");
    byte_20DCBF8 = 1;
    v5 = *((uint32_t *)self + 5);
    v6 = a4;
  }
  if ( v5 > a2 )
    v5 = a2;
  v7 = *((uint32_t *)self + 6) + 10 * v5;
  if ( a3 )
    *(uint8_t *)v7 |= 1u;
  else
    *(uint8_t *)v7 &= ~1u;
  *(uint16_t *)(v7 + 8) = a5;
  *(uint16_t *)(v7 + 6) = v6;
  return glf::InputDevice::SetUpdated(self);
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::GetRtti  (binary VA: 0xcb4510)
// Original: glf::InputDevice::GetRtti
// ----------------------------------------------------------------------------
void * glf::InputDevice::GetRtti()
{
  return &glf::InputDevice::sRtti;
}

// ----------------------------------------------------------------------------
// Function: glf::InputDevice::PreSendEvent  (binary VA: 0xcb4530)
// Original: glf::InputDevice::PreSendEvent
// ----------------------------------------------------------------------------
int glf::InputDevice::PreSendEvent()
{
  return 1;
}


