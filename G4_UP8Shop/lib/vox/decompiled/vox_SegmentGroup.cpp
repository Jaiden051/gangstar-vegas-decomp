#include "Core/Utils/DecompTypes.h"
#include "vox_SegmentGroup.h"

// ----------------------------------------------------------------------------
// Function: vox::SegmentGroup::Destroy  (binary VA: 0xff1180)
// Original: vox::SegmentGroup::~SegmentGroup
// ----------------------------------------------------------------------------
void vox::SegmentGroup::Destroy(vox::SegmentGroup::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D0E8);
}

// ----------------------------------------------------------------------------
// Function: vox::SegmentGroup::SetState  (binary VA: 0xff11a0)
// Original: vox::SegmentGroup::SetState
// ----------------------------------------------------------------------------
vox::SegmentGroup::Self * vox::SegmentGroup::SetState(vox::SegmentGroup::Self *self, vox::SegmentGroup::Self *a2)
{
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::SegmentGroup::Destroy_eaff1400  (binary VA: 0xff1400)
// Original: vox::SegmentGroup::~SegmentGroup
// ----------------------------------------------------------------------------
void vox::SegmentGroup::Destroy_eaff1400(vox::SegmentGroup::Self *self)
{
  vox::SegmentGroup::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::SegmentGroup::Construct  (binary VA: 0xff1fc0)
// Original: vox::SegmentGroup::SegmentGroup
// ----------------------------------------------------------------------------
uint32_t * vox::SegmentGroup::Construct(uint32_t *a1, uint32_t *a2)
{
  int v3;
  int v4;

  *a1 = ((uint32_t)(uintptr_t)&off_208D0E8);
  a1[1] = a2[2];
  v3 = a2[5];
  a1[3] = v3;
  v4 = a2[4];
  a1[2] = v4;
  a1[4] = v4;
  a1[5] = v3;
  a1[6] = v4;
  a1[7] = v3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: vox::SegmentGroup::Construct  (binary VA: 0xff2000)
// Original: vox::SegmentGroup::SegmentGroup
// ----------------------------------------------------------------------------
vox::SegmentGroup::Self * vox::SegmentGroup::Construct(vox::SegmentGroup::Self *self, vox::SegmentGroup::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D0E8);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::SegmentGroup::GetSelectMode  (binary VA: 0xff2050)
// Original: vox::SegmentGroup::GetSelectMode
// ----------------------------------------------------------------------------
int vox::SegmentGroup::GetSelectMode(vox::SegmentGroup::Self *self)
{
  return *((uint32_t *)self + 1);
}


