#include "Core/Utils/DecompTypes.h"
#include "glitch_map_int_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::map_int_quickhull2d_detail_S_14526e::find  (binary VA: 0xf7a240)
// Original: std::map<int,glitch::core::quickhull2d_detail::SEdge *>::find
// ----------------------------------------------------------------------------
std::map<int,glitch::core::quickhull2d_detail::SEdge *> * g4_std::map_int_quickhull2d_detail_S_14526e::find(std::map<int,glitch::core::quickhull2d_detail::SEdge *> *self, const int *a2, int *a3)
{
  std::map<int,glitch::core::quickhull2d_detail::SEdge *> *result;
  const int *v4;
  const int *v5;
  int v6;

  result = self;
  v4 = (const int *)a2[2];
  v5 = a2 + 1;
  if ( v4 != nullptr )
  {
    v6 = *a3;
    do
    {
      while ( v4[4] >= v6 )
      {
        v5 = v4;
        v4 = (const int *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = (const int *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_6:
    if ( a2 + 1 != v5 && v5[4] > v6 )
      v5 = a2 + 1;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
  return result;
}


