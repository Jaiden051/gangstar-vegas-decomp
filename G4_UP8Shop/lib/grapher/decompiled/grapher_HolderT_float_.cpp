#include "Core/Utils/DecompTypes.h"
#include "grapher_HolderT_float_.h"

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_float_id_458ea9::From  (binary VA: 0x13cfcf0)
// Original: grapher::HolderT<float>::From
// ----------------------------------------------------------------------------
grapher::HolderT<float> * grapher::HolderT_float_id_458ea9::From(grapher::HolderT<float> *self, const int *a2)
{
  *((float *)self + 1) = (float)*a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_float_id_458ea9::From  (binary VA: 0x13cfd10)
// Original: grapher::HolderT<float>::From
// ----------------------------------------------------------------------------
grapher::HolderT<float> * grapher::HolderT_float_id_458ea9::From(grapher::HolderT<float> *self, const float *a2)
{
  *((float *)self + 1) = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_float_id_458ea9::From  (binary VA: 0x13cfd20)
// Original: grapher::HolderT<float>::From
// ----------------------------------------------------------------------------
grapher::HolderT<float> * grapher::HolderT_float_id_458ea9::From(grapher::HolderT<float> *self, const double *a2)
{
  float v3; // xmm0_4

  v3 = *a2;
  *((float *)self + 1) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_float_id_458ea9::From  (binary VA: 0x13cfd40)
// Original: grapher::HolderT<float>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_float_id_458ea9::From(grapher::HolderT<float> *self, const bool *a2)
{
  int result;

  result = 0;
  if ( *a2 )
    result = 1065353216;
  *((uint32_t *)self + 1) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_float_id_458ea9::From  (binary VA: 0x13cfd60)
// Original: grapher::HolderT<float>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_float_id_458ea9::From(int a1, const char **a2)
{
  long double v2; // fst7
  float v4; // xmm0_4

  v2 = strtod(*a2, nullptr);
  v4 = v2;
  *(float *)(a1 + 4) = v4;
  return a1;
}


