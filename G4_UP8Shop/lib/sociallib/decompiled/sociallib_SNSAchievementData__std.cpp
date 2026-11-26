#include "Core/Utils/DecompTypes.h"
#include "sociallib_SNSAchievementData__std.h"

// ----------------------------------------------------------------------------
// Function: g4_std::uninitialized_copy_false_id_253916::uninit_copy_gnu_cxx_normal_iterator_c1e796  (binary VA: 0x1415150)
// Original: std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<sociallib::SNSAchievementData const*,std::vector<sociallib::SNSAchievementData>>,sociallib::SNSAchievementData*>
// ----------------------------------------------------------------------------
int g4_std::uninitialized_copy_false_id_253916::uninit_copy_gnu_cxx_normal_iterator_c1e796(int a1, int a2, int a3)
{
  int i;

  for ( i = a1; a2 != i; a3 += 68 )
  {
    if ( a3 != 0 )
    {
      g4_std::string::construct_copy(a3, i);
      g4_std::string::construct_copy(a3 + 4, i + 4);
      g4_std::string::construct_copy(a3 + 8, i + 8);
      *(uint32_t *)(a3 + 12) = *(uint32_t *)(i + 12);
      *(uint8_t *)(a3 + 16) = *(uint8_t *)(i + 16);
      *(uint8_t *)(a3 + 17) = *(uint8_t *)(i + 17);
      g4_std::string::construct_copy(a3 + 20, i + 20);
      g4_std::string::construct_copy(a3 + 24, i + 24);
      g4_std::string::construct_copy(a3 + 28, i + 28);
      g4_std::string::construct_copy(a3 + 32, i + 32);
      g4_std::string::construct_copy(a3 + 36, i + 36);
      g4_std::string::construct_copy(a3 + 40, i + 40);
      g4_std::string::construct_copy(a3 + 44, i + 44);
      g4_std::string::construct_copy(a3 + 48, i + 48);
      g4_std::string::construct_copy(a3 + 52, i + 52);
      g4_std::string::construct_copy(a3 + 56, i + 56);
      *(uint32_t *)(a3 + 60) = *(uint32_t *)(i + 60);
      *(uint32_t *)(a3 + 64) = *(uint32_t *)(i + 64);
    }
    i += 68;
  }
  return a3;
}


