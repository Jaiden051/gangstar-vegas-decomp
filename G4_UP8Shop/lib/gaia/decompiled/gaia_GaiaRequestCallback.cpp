#include "Core/Utils/DecompTypes.h"
#include "gaia_GaiaRequestCallback.h"

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequestCallback::Construct  (binary VA: 0x14cfea0)
// Original: gaia::GaiaRequestCallback::GaiaRequestCallback
// ----------------------------------------------------------------------------
int gaia::GaiaRequestCallback::Construct(uint32_t *a1, int a2, int a3, int a4, int a5, int a6)
{
  a1[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[1] = a2;
  *a1 = 0;
  g4_std::string::assign_str(a1 + 2, a3);
  a1[6] = 0;
  a1[3] = a4;
  a1[4] = a5;
  a1[5] = a6;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequestCallback::Construct  (binary VA: 0x14cff10)
// Original: gaia::GaiaRequestCallback::GaiaRequestCallback
// ----------------------------------------------------------------------------
gaia::GaiaRequestCallback::Self * gaia::GaiaRequestCallback::Construct(gaia::GaiaRequestCallback::Self *self, gaia::GaiaRequest::Self *a2)
{
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = 1;
  *((uint32_t *)self + 1) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 8, &unk_1B15112, 0);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  return (gaia::GaiaRequestCallback::Self *)(a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequestCallback::Destroy  (binary VA: 0x14dbaa0)
// Original: gaia::GaiaRequestCallback::~GaiaRequestCallback
// ----------------------------------------------------------------------------
void gaia::GaiaRequestCallback::Destroy(gaia::GaiaRequestCallback::Self *self)
{
  void *v1;

  v1 = *((void **)self + 6);
  if ( v1 != nullptr )
  {
    gaia::GaiaRequest::Destroy(*((gaia::GaiaRequest::Self **)self + 6));
    opDelete(v1);
  }
  g4_std::string::Destroy((char *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequestCallback::TriggerCallback  (binary VA: 0x14dbc10)
// Original: gaia::GaiaRequestCallback::TriggerCallback
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self ** gaia::GaiaRequestCallback::TriggerCallback(gaia::GaiaRequest::Self **self)
{
  gaia::GaiaRequest::Self **result;
  int (*v2)(uint32_t, gaia::GaiaRequest::Self **, uint32_t, uint32_t);

  result = self;
  if ( *self != nullptr )
  {
    if ( *self == (gaia::GaiaRequest::Self *)((char *)&dword_0 + 1) )
      return (gaia::GaiaRequest::Self **)gaia::GaiaRequest::TriggerCallback(*(self + 6));
  }
  else
  {
    v2 = (int (*)(uint32_t, gaia::GaiaRequest::Self **, uint32_t, uint32_t))*(self + 1);
    if ( v2 != nullptr )
      return (gaia::GaiaRequest::Self **)v2((uint32_t)(uintptr_t)(*(self + 4)), self + 2, (uint32_t)(uintptr_t)(*(self + 3)), (uint32_t)(uintptr_t)(*(self + 5)));
  }
  return result;
}


