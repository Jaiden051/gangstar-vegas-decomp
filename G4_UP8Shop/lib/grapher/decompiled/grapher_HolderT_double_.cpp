#include "Core/Utils/DecompTypes.h"
#include "grapher_HolderT_double_.h"

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_double_id_90764b::From  (binary VA: 0x13cfda0)
// Original: grapher::HolderT<double>::From
// ----------------------------------------------------------------------------
grapher::HolderT<double> * grapher::HolderT_double_id_90764b::From(grapher::HolderT<double> *self, const int *a2)
{
  *(double *)((char *)self + 4) = (double)*a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_double_id_90764b::From  (binary VA: 0x13cfdc0)
// Original: grapher::HolderT<double>::From
// ----------------------------------------------------------------------------
grapher::HolderT<double> * grapher::HolderT_double_id_90764b::From(grapher::HolderT<double> *self, const float *a2)
{
  *(double *)((char *)self + 4) = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_double_id_90764b::From  (binary VA: 0x13cfde0)
// Original: grapher::HolderT<double>::From
// ----------------------------------------------------------------------------
grapher::HolderT<double> * grapher::HolderT_double_id_90764b::From(grapher::HolderT<double> *self, const double *a2)
{
  *(double *)((char *)self + 4) = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_double_id_90764b::From  (binary VA: 0x13cfe00)
// Original: grapher::HolderT<double>::From
// ----------------------------------------------------------------------------
grapher::HolderT<double> * grapher::HolderT_double_id_90764b::From(grapher::HolderT<double> *self, const bool *a2)
{
  int64_t v2; // xmm0_8

  v2 = 0;
  if ( *a2 )
    v2 = 0x3FF0000000000000LL;
  *(uint64_t *)((char *)self + 4) = v2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_double_id_90764b::From  (binary VA: 0x13cfe30)
// Original: grapher::HolderT<double>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_double_id_90764b::From(int a1, const char **a2)
{
  long double v2; // fst7

  v2 = strtod(*a2, nullptr);
  *(double *)(a1 + 4) = v2;
  return a1;
}


