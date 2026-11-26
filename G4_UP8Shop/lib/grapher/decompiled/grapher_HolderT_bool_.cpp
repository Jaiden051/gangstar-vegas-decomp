#include "Core/Utils/DecompTypes.h"
#include "grapher_HolderT_bool_.h"

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_bool_id_87484c::From  (binary VA: 0x13cfe70)
// Original: grapher::HolderT<bool>::From
// ----------------------------------------------------------------------------
grapher::HolderT<bool> * grapher::HolderT_bool_id_87484c::From(grapher::HolderT<bool> *self, const int *a2)
{
  *((uint8_t *)self + 4) = *a2 != 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_bool_id_87484c::From  (binary VA: 0x13cfe90)
// Original: grapher::HolderT<bool>::From
// ----------------------------------------------------------------------------
grapher::HolderT<bool> * grapher::HolderT_bool_id_87484c::From(grapher::HolderT<bool> *self, const float *a2)
{
  *((uint8_t *)self + 4) = *a2 != 0.0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_bool_id_87484c::From  (binary VA: 0x13cfeb0)
// Original: grapher::HolderT<bool>::From
// ----------------------------------------------------------------------------
grapher::HolderT<bool> * grapher::HolderT_bool_id_87484c::From(grapher::HolderT<bool> *self, const double *a2)
{
  *((uint8_t *)self + 4) = *a2 != 0.0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_bool_id_87484c::From  (binary VA: 0x13cfed0)
// Original: grapher::HolderT<bool>::From
// ----------------------------------------------------------------------------
grapher::HolderT<bool> * grapher::HolderT_bool_id_87484c::From(grapher::HolderT<bool> *self, const bool *a2)
{
  *((uint8_t *)self + 4) = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_bool_id_87484c::From  (binary VA: 0x13cfee0)
// Original: grapher::HolderT<bool>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_bool_id_87484c::From(int a1, uint32_t *a2)
{
  bool v2; // di

  v2 = false;
  if ( *(uint32_t *)(*a2 - 12) != 0 && g4_std::string::compare((int)(uintptr_t)(a2), (char *)&a0[2]) != 0 )
    v2 = g4_std::string::compare((int)(uintptr_t)(a2), "false") != 0;
  *(uint8_t *)(a1 + 4) = v2;
  return a1;
}


