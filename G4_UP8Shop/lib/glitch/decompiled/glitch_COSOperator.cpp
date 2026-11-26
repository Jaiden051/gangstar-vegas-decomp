#include "Core/Utils/DecompTypes.h"
#include "glitch_COSOperator.h"

// ----------------------------------------------------------------------------
// Function: glitch::COSOperator::getOperationSystemVersion  (binary VA: 0xcd02c0)
// Original: glitch::COSOperator::getOperationSystemVersion
// ----------------------------------------------------------------------------
int glitch::COSOperator::getOperationSystemVersion(glitch::COSOperator::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glitch::COSOperator::copyToClipboard  (binary VA: 0xcd02d0)
// Original: glitch::COSOperator::copyToClipboard
// ----------------------------------------------------------------------------
void glitch::COSOperator::copyToClipboard()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::COSOperator::getTextFromClipboard  (binary VA: 0xcd02e0)
// Original: glitch::COSOperator::getTextFromClipboard
// ----------------------------------------------------------------------------
int glitch::COSOperator::getTextFromClipboard()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::COSOperator::getProcessorSpeedMHz  (binary VA: 0xcd02f0)
// Original: glitch::COSOperator::getProcessorSpeedMHz
// ----------------------------------------------------------------------------
int glitch::COSOperator::getProcessorSpeedMHz()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::COSOperator::getSystemMemory  (binary VA: 0xcd0300)
// Original: glitch::COSOperator::getSystemMemory
// ----------------------------------------------------------------------------
int glitch::COSOperator::getSystemMemory()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::COSOperator::Construct  (binary VA: 0xcd6710)
// Original: glitch::COSOperator::COSOperator
// ----------------------------------------------------------------------------
glitch::COSOperator::Self * glitch::COSOperator::Construct(glitch::COSOperator::Self *self, const char *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EB28);
  *((uint32_t *)self + 1) = 0;
  return (glitch::COSOperator::Self *)glitch::core::stringc2stringw((glitch::COSOperator::Self *)((char *)self + 8), a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::COSOperator::Destroy  (binary VA: 0xcef7c0)
// Original: glitch::COSOperator::~COSOperator
// ----------------------------------------------------------------------------
void glitch::COSOperator::Destroy(glitch::COSOperator::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EB28);
  v1 = *((uint32_t *)self + 2);
  if ( (void *)(v1 - 12) != (void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v1 - 12);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::COSOperator::Destroy_eacef830  (binary VA: 0xcef830)
// Original: glitch::COSOperator::~COSOperator
// ----------------------------------------------------------------------------
void glitch::COSOperator::Destroy_eacef830(glitch::COSOperator::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EB28);
  v1 = *((uint32_t *)self + 2);
  if ( (void *)(v1 - 12) != (void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v1 - 12);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}


