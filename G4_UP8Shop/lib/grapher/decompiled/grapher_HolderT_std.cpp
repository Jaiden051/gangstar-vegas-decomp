#include "Core/Utils/DecompTypes.h"
#include "grapher_HolderT_std.h"

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_string_e830be::From  (binary VA: 0x13cff60)
// Original: grapher::HolderT<std::string>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_string_e830be::From(grapher::HolderT<std::string> *self, const int *a2)
{
  char s[44];

  sprintf(s, "%d", *a2);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(self) + 4, s, strlen(s)));
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_string_e830be::From  (binary VA: 0x13cfff0)
// Original: grapher::HolderT<std::string>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_string_e830be::From(grapher::HolderT<std::string> *self, const float *a2)
{
  char s[76];

  sprintf(s, "%f", *a2);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(self) + 4, s, strlen(s)));
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_string_e830be::From  (binary VA: 0x13d0080)
// Original: grapher::HolderT<std::string>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_string_e830be::From(grapher::HolderT<std::string> *self, const double *a2)
{
  char s[76];

  sprintf(s, "%f", *a2);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(self) + 4, s, strlen(s)));
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_string_e830be::From  (binary VA: 0x13d0110)
// Original: grapher::HolderT<std::string>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_string_e830be::From(grapher::HolderT<std::string> *self, const bool *a2)
{
  int16_t *v2;

  v2 = (int16_t *)"1";
  if ( !*a2 )
    v2 = (int16_t *)(&a0[2]);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(self) + 4, v2, 1u));
}

// ----------------------------------------------------------------------------
// Function: grapher::HolderT_string_e830be::From  (binary VA: 0x13d0160)
// Original: grapher::HolderT<std::string>::From
// ----------------------------------------------------------------------------
int grapher::HolderT_string_e830be::From(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 4, a2));
}


