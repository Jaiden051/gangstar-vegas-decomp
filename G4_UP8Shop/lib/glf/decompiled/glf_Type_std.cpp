#include "Core/Utils/DecompTypes.h"
#include "glf_Type_std.h"

// ----------------------------------------------------------------------------
// Function: glf::Type_string_1c9653::Construct  (binary VA: 0xc92e40)
// Original: glf::Type<std::string>::Construct
// ----------------------------------------------------------------------------
glf::Type<std::string> * glf::Type_string_1c9653::Construct(glf::Type<std::string> *self)
{
  glf::Type<std::string> *result;

  result = self;
  if ( self != nullptr )
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Type_string_1c9653::Destruct  (binary VA: 0xc93020)
// Original: glf::Type<std::string>::Destruct
// ----------------------------------------------------------------------------
int glf::Type_string_1c9653::Destruct(glf::Type<std::string> *self)
{
  int result;
  uint32_t *v2;

  result = *(uint32_t *)self;
  v2 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v2 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(result - 4), 0xFFFFFFFF) <= 0 )
    { g4_std::string::Rep::M_destroy(v2); return 0; }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Type_list_glf_fs2_MountPoint_6be4e3::Construct  (binary VA: 0xca12d0)
// Original: glf::Type<std::list<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>>>::Construct
// ----------------------------------------------------------------------------
glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> * glf::Type_list_glf_fs2_MountPoint_6be4e3::Construct(glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> *self)
{
  glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> *result;

  result = self;
  if ( self != nullptr )
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::Type_list_glf_fs2_MountPoint_6be4e3::Destruct  (binary VA: 0xca13d0)
// Original: glf::Type<std::list<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>>>::Destruct
// ----------------------------------------------------------------------------
void glf::Type_list_glf_fs2_MountPoint_6be4e3::Destruct(glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> *self)
{
  glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> *v1;
  int v2;
  glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> *v3;
  volatile int32_t *v4;

  v1 = *(glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> **)self;
  if ( *(glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> **)self != self )
  {
    while ( 1 )
    {
      v3 = *(glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> **)v1;
      glf::fs2::Path::Destroy((glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> *)((char *)v1 + 20));
      v4 = *((volatile int32_t **)v1 + 4);
      if ( v4 != nullptr )
      {
        if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v4, 8);
          G4_VCALL<void>(v4, 16);
        }
        else
        {
          v2 = *((uint32_t *)v4 + 1);
          _mm_mfence();
          if ( v2 == 1 )
            G4_VCALL<void>(v4, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::Type<std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>>> *)((char *)v1 + 8));
      glf::Free(v1);
      if ( v3 == self )
        break;
      v1 = v3;
    }
  }
}


