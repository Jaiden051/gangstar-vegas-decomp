#include "Core/Utils/DecompTypes.h"
#include "glf_WaitForNotification.h"

// ----------------------------------------------------------------------------
// Function: glf::WaitForNotification::update  (binary VA: 0xc72cf0)
// Original: glf::WaitForNotification::update
// ----------------------------------------------------------------------------
void glf::WaitForNotification::update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForNotification::initialized  (binary VA: 0xc72d00)
// Original: glf::WaitForNotification::initialized
// ----------------------------------------------------------------------------
bool glf::WaitForNotification::initialized(glf::WaitForNotification::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 1) - 12) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForNotification::check  (binary VA: 0xc72d10)
// Original: glf::WaitForNotification::check
// ----------------------------------------------------------------------------
int glf::WaitForNotification::check(glf::WaitForNotification::Self *self)
{
  char v1;
  int v2;

  v1 = G4_VCALL<int>(self, 8);
  v2 = 1;
  if ( v1 != 0 )
    return *((uint8_t *)self + 8);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForNotification::reset  (binary VA: 0xc72d40)
// Original: glf::WaitForNotification::reset
// ----------------------------------------------------------------------------
int glf::WaitForNotification::reset(glf::WaitForNotification::Self *self)
{
  int result;

  result = (int)(uintptr_t)(g4_std::string::clear((char *)self + 4, 0, *(uint32_t *)(*((uint32_t *)self + 1) - 12), 0));
  *((uint8_t *)self + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForNotification::start  (binary VA: 0xc75a70)
// Original: glf::WaitForNotification::start
// ----------------------------------------------------------------------------
int glf::WaitForNotification::start(int a1, int a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std::string::assign_str(a1 + 4, a2));
  *(uint8_t *)(a1 + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForNotification::getTag  (binary VA: 0xc75ab0)
// Original: glf::WaitForNotification::getTag
// ----------------------------------------------------------------------------
char * glf::WaitForNotification::getTag(glf::WaitForNotification::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForNotification::set  (binary VA: 0xc75ac0)
// Original: glf::WaitForNotification::set
// ----------------------------------------------------------------------------
int glf::WaitForNotification::set(glf::WaitForNotification::Self *self)
{
  int result;

  result = G4_VCALL<int>(self, 8);
  if ( (uint8_t)result != 0 )
    *((uint8_t *)self + 8) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForNotification::Destroy  (binary VA: 0xc7b870)
// Original: glf::WaitForNotification::~WaitForNotification
// ----------------------------------------------------------------------------
void glf::WaitForNotification::Destroy(glf::WaitForNotification::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D628);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D668);
}

// ----------------------------------------------------------------------------
// Function: glf::WaitForNotification::Destroy_eac7b8e0  (binary VA: 0xc7b8e0)
// Original: glf::WaitForNotification::~WaitForNotification
// ----------------------------------------------------------------------------
void glf::WaitForNotification::Destroy_eac7b8e0(glf::WaitForNotification::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D628);
  v1 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D668);
  opDelete(self);
}


