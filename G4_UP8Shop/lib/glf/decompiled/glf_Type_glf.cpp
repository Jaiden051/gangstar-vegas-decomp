#include "Core/Utils/DecompTypes.h"
#include "glf_Type_glf.h"

// ----------------------------------------------------------------------------
// Function: glf::Type_glf_Error_7e835b::Destruct  (binary VA: 0xca12c0)
// Original: glf::Type<glf::Error>::Destruct
// ----------------------------------------------------------------------------
void glf::Type_glf_Error_7e835b::Destruct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::Type_glf_Error_7e835b::Construct  (binary VA: 0xca1380)
// Original: glf::Type<glf::Error>::Construct
// ----------------------------------------------------------------------------
void glf::Type_glf_Error_7e835b::Construct(glf::Type<glf::Error> *self)
{
  glf::Self *v1;

  if ( self != nullptr )
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(glf::GetSystemCategory(v1));
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
  }
}


