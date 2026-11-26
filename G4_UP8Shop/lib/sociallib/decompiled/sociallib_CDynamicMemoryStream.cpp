#include "Core/Utils/DecompTypes.h"
#include "sociallib_CDynamicMemoryStream.h"

// ----------------------------------------------------------------------------
// Function: sociallib::CDynamicMemoryStream::Destroy  (binary VA: 0x1427170)
// Original: sociallib::CDynamicMemoryStream::~CDynamicMemoryStream
// ----------------------------------------------------------------------------
void sociallib::CDynamicMemoryStream::Destroy(sociallib::CDynamicMemoryStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095558);
  sociallib::CMemoryStream::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::CDynamicMemoryStream::Destroy_ea14271a0  (binary VA: 0x14271a0)
// Original: sociallib::CDynamicMemoryStream::~CDynamicMemoryStream
// ----------------------------------------------------------------------------
void sociallib::CDynamicMemoryStream::Destroy_ea14271a0(sociallib::CDynamicMemoryStream::Self *self)
{
  sociallib::CDynamicMemoryStream::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x14271e0 (size: 75 bytes)
// Symbol:    _ZN9sociallib20CDynamicMemoryStreamC1EPKhj
// Demangled: sociallib::CDynamicMemoryStream::CDynamicMemoryStream(unsigned char const*,unsigned int)
// ============================================================================
// Alternative name is '_ZN9sociallib20CDynamicMemoryStreamC2EPKhj'
void (**sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
        sociallib::CDynamicMemoryStream::Self *self,
        uint8_t *a2,
        size_t a3))(sociallib::CDynamicMemoryStream::Self * self)
{
  sociallib::CMemoryStream::Construct(self, a2, a3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095558);
  return (void (**)(sociallib::CDynamicMemoryStream::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2095558));
}


// ============================================================================
// Address:   0x1427230 (size: 67 bytes)
// Symbol:    _ZN9sociallib20CDynamicMemoryStreamC1ERKS0_
// Demangled: sociallib::CDynamicMemoryStream::CDynamicMemoryStream(sociallib::CDynamicMemoryStream const&)
// ============================================================================
// Alternative name is '_ZN9sociallib20CDynamicMemoryStreamC2ERKS0_'
void (**sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
        sociallib::CDynamicMemoryStream::Self *self,
        const sociallib::CDynamicMemoryStream::Self *a2))(sociallib::CDynamicMemoryStream::Self * self)
{
  sociallib::CMemoryStream::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095558);
  return (void (**)(sociallib::CDynamicMemoryStream::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2095558));
}
// ----------------------------------------------------------------------------
// Function: sociallib::CDynamicMemoryStream::roundToNextPowerof2  (binary VA: 0x1427280)
// Original: sociallib::CDynamicMemoryStream::roundToNextPowerof2
// ----------------------------------------------------------------------------
unsigned int sociallib::CDynamicMemoryStream::roundToNextPowerof2(sociallib::CDynamicMemoryStream::Self *self, unsigned int a2)
{
  return ((a2 - 1)
        | ((a2 - 1) >> 1)
        | (((a2 - 1) | ((a2 - 1) >> 1)) >> 2)
        | (((a2 - 1) | ((a2 - 1) >> 1) | (((a2 - 1) | ((a2 - 1) >> 1)) >> 2)) >> 4)
        | (((a2 - 1)
          | ((a2 - 1) >> 1)
          | (((a2 - 1) | ((a2 - 1) >> 1)) >> 2)
          | (((a2 - 1) | ((a2 - 1) >> 1) | (((a2 - 1) | ((a2 - 1) >> 1)) >> 2)) >> 4)) >> 8)
        | (((a2 - 1)
          | ((a2 - 1) >> 1)
          | (((a2 - 1) | ((a2 - 1) >> 1)) >> 2)
          | (((a2 - 1) | ((a2 - 1) >> 1) | (((a2 - 1) | ((a2 - 1) >> 1)) >> 2)) >> 4)
          | (((a2 - 1)
            | ((a2 - 1) >> 1)
            | (((a2 - 1) | ((a2 - 1) >> 1)) >> 2)
            | (((a2 - 1) | ((a2 - 1) >> 1) | (((a2 - 1) | ((a2 - 1) >> 1)) >> 2)) >> 4)) >> 8)) >> 16))
       + 1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::CDynamicMemoryStream::onWriteOOR  (binary VA: 0x14272b0)
// Original: sociallib::CDynamicMemoryStream::onWriteOOR
// ----------------------------------------------------------------------------
int sociallib::CDynamicMemoryStream::onWriteOOR(sociallib::CDynamicMemoryStream::Self *self, unsigned int a2)
{
  size_t Powerof2;

  Powerof2 = sociallib::CDynamicMemoryStream::roundToNextPowerof2(self, 2 * (*((uint32_t *)self + 3) + a2));
  return ((sociallib::CMemoryStream::resize(self, Powerof2)), (int)0);
}


