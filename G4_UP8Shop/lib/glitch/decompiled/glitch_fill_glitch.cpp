#include "Core/Utils/DecompTypes.h"
#include "glitch_fill_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::fill_collada_CParametricContr_19761f  (binary VA: 0xd89550)
// Original: std::fill<glitch::collada::CParametricControllerBlender::SControllerSlot *,glitch::collada::CParametricControllerBlender::SControllerSlot>
// ----------------------------------------------------------------------------
void g4_std::fill_collada_CParametricContr_19761f(glitch::collada::CParametricControllerBlender::SControllerSlot *a1, glitch::collada::CParametricControllerBlender::SControllerSlot *a2, const glitch::collada::CParametricControllerBlender::SControllerSlot *a3)
{
  glitch::collada::CParametricControllerBlender::SControllerSlot *v3;
  int v4;
  volatile int32_t *v5;

  if ( a2 != a1 )
  {
    v3 = a1;
    do
    {
      *(uint32_t *)v3 = *(uint32_t *)a3;
      *((uint32_t *)v3 + 1) = *((uint32_t *)a3 + 1);
      *((uint32_t *)v3 + 2) = *((uint32_t *)a3 + 2);
      *((uint32_t *)v3 + 3) = *((uint32_t *)a3 + 3);
      v4 = *((uint32_t *)a3 + 4);
      if ( v4 != 0 )
        sub_8B1B00((volatile int32_t *)(v4 + 4));
      v5 = *((volatile int32_t **)v3 + 4);
      *((uint32_t *)v3 + 4) = v4;
      if ( v5 != nullptr )
        sub_5459C0(v5);
      *((uint32_t *)v3 + 5) = *((uint32_t *)a3 + 5);
      v3 = (glitch::collada::CParametricControllerBlender::SControllerSlot *)((char *)v3 + 24);
    }
    while ( a2 != v3 );
  }
}


