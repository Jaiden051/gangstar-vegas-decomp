#include "Core/Utils/DecompTypes.h"
#include "gaia_BaseJSONServiceResponse.h"

// ----------------------------------------------------------------------------
// Function: gaia::BaseJSONServiceResponse::Construct  (binary VA: 0x14ac330)
// Original: gaia::BaseJSONServiceResponse::BaseJSONServiceResponse
// ----------------------------------------------------------------------------
gaia::BaseJSONServiceResponse::Self * gaia::BaseJSONServiceResponse::Construct(gaia::BaseJSONServiceResponse::Self *self)
{
  return (gaia::BaseJSONServiceResponse::Self *)Json::Value::Construct((int)(uintptr_t)(self), nullptr);
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseJSONServiceResponse::Construct  (binary VA: 0x14ac360)
// Original: gaia::BaseJSONServiceResponse::BaseJSONServiceResponse
// ----------------------------------------------------------------------------
Json::Value::Self * gaia::BaseJSONServiceResponse::Construct(Json::Value::Self *a1, Json::Value::Self *a2)
{
  Json::Value::Self *result;

  result = Json::Value::Construct(a1, a2);
  *((uint32_t *)a1 + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseJSONServiceResponse::Construct  (binary VA: 0x14ac3a0)
// Original: gaia::BaseJSONServiceResponse::BaseJSONServiceResponse
// ----------------------------------------------------------------------------
int gaia::BaseJSONServiceResponse::Construct(Json::Value::Self *a1, Json::Value::Self *a2, int a3)
{
  Json::Value::Construct(a1, a2);
  *((uint32_t *)a1 + 4) = a3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseJSONServiceResponse::GetJSONMessage  (binary VA: 0x14ac3e0)
// Original: gaia::BaseJSONServiceResponse::GetJSONMessage
// ----------------------------------------------------------------------------
gaia::BaseJSONServiceResponse::Self * gaia::BaseJSONServiceResponse::GetJSONMessage(gaia::BaseJSONServiceResponse::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseJSONServiceResponse::Destroy  (binary VA: 0x14ac3f0)
// Original: gaia::BaseJSONServiceResponse::~BaseJSONServiceResponse
// ----------------------------------------------------------------------------
void gaia::BaseJSONServiceResponse::Destroy(gaia::BaseJSONServiceResponse::Self *self)
{
  Json::Value::Destroy(self);
}


