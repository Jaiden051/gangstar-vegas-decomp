#include "Core/Utils/DecompTypes.h"
#include "glitch_scoped_array_glitch.h"

// ----------------------------------------------------------------------------
// Function: boost::scoped_array_scene_SPVSEvaluationStat_396b15::Destroy  (binary VA: 0xf07430)
// Original: boost::scoped_array<glitch::scene::detail::SPVSEvaluationState::SArchive>::~scoped_array
// ----------------------------------------------------------------------------
void boost::scoped_array_scene_SPVSEvaluationStat_396b15::Destroy(boost::scoped_array<glitch::scene::detail::SPVSEvaluationState::SArchive> *self)
{
  int v1;
  int i;

  v1 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 )
  {
    for ( i = v1 + 28 * *(uint32_t *)(v1 - 4); v1 != i; i -= 28 )
    {
      if ( *(uint32_t *)(i - 12) != 0 )
        gll_operator_delete_arr(*(uint32_t *)(i - 12));
    }
    opDeleteArray((void *)(v1 - 4));
  }
}


