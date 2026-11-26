#include "Core/Utils/DecompTypes.h"
#include "grapher_HolderT_int_.h"

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_int_id_fe4c74::From  (binary VA: 0x13cfc80)
// Original: grapher::HolderT<int>::From
// ----------------------------------------------------------------------------
grapher::HolderT<int> * grapher::HolderT_int_id_fe4c74::From(grapher::HolderT<int> *self, const int *a2)
{
  *((uint32_t *)self + 1) = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_int_id_fe4c74::From  (binary VA: 0x13cfc90)
// Original: grapher::HolderT<int>::From
// ----------------------------------------------------------------------------
grapher::HolderT<int> * grapher::HolderT_int_id_fe4c74::From(grapher::HolderT<int> *self, const float *a2)
{
  *((uint32_t *)self + 1) = (int)*a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_int_id_fe4c74::From  (binary VA: 0x13cfca0)
// Original: grapher::HolderT<int>::From
// ----------------------------------------------------------------------------
grapher::HolderT<int> * grapher::HolderT_int_id_fe4c74::From(grapher::HolderT<int> *self, const double *a2)
{
  *((uint32_t *)self + 1) = (int)*a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_int_id_fe4c74::From  (binary VA: 0x13cfcb0)
// Original: grapher::HolderT<int>::From
// ----------------------------------------------------------------------------
grapher::HolderT<int> * grapher::HolderT_int_id_fe4c74::From(grapher::HolderT<int> *self, const bool *a2)
{
  *((uint32_t *)self + 1) = *(uint8_t *)a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_int_id_fe4c74::From  (binary VA: 0x13cfcc0)
// Original: grapher::HolderT<int>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_int_id_fe4c74::From(int a1, const char **a2)
{
  int result;

  result = atoi(*a2);
  *(uint32_t *)(a1 + 4) = result;
  return result;
}


