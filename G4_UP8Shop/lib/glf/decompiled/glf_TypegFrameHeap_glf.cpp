#include "Core/Utils/DecompTypes.h"
#include "glf_TypegFrameHeap_glf.h"

// ----------------------------------------------------------------------------
// Function: glf::TypegFrameHeap_glf_FrameHeap_04d213::Construct  (binary VA: 0xc72a90)
// Original: glf::TypegFrameHeap<glf::FrameHeap>::Construct
// ----------------------------------------------------------------------------
glf::TypegFrameHeap<glf::FrameHeap> * glf::TypegFrameHeap_glf_FrameHeap_04d213::Construct(glf::TypegFrameHeap<glf::FrameHeap> *self)
{
  glf::TypegFrameHeap<glf::FrameHeap> *result;

  result = self;
  if ( self != nullptr )
  {
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 3) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TypegFrameHeap_glf_FrameHeap_04d213::Destruct  (binary VA: 0xc72b20)
// Original: glf::TypegFrameHeap<glf::FrameHeap>::Destruct
// ----------------------------------------------------------------------------
int glf::TypegFrameHeap_glf_FrameHeap_04d213::Destruct(glf::TypegFrameHeap<glf::FrameHeap> *self)
{
  return sub_4EBD90(*(uint32_t *)self);
}


