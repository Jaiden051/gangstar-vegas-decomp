#include "Core/Utils/DecompTypes.h"
#include "glf_intrusive_ptr_glf.h"

// ----------------------------------------------------------------------------
// Function: glf::intrusive_ptr_glf_fs2_FileSystem_89e543::Destroy  (binary VA: 0xca14d0)
// Original: glf::intrusive_ptr<glf::fs2::FileSystem>::~intrusive_ptr
// ----------------------------------------------------------------------------
void glf::intrusive_ptr_glf_fs2_FileSystem_89e543::Destroy(glf::Self **self)
{
  if ( *self != nullptr )
    glf::intrusive_ptr_release(*self);
}


