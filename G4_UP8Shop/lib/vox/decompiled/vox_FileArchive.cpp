#include "Core/Utils/DecompTypes.h"
#include "vox_FileArchive.h"

// ----------------------------------------------------------------------------
// Function: vox::FileArchive::getFileInfo  (binary VA: 0x1008730)
// Original: vox::FileArchive::getFileInfo
// ----------------------------------------------------------------------------
int vox::FileArchive::getFileInfo(vox::FileArchive::Self *self, const char *a2, const char **a3, vox::FileArchive::FileRange::Self *a4)
{
  *a3 = (const char *)G4_VCALL<int>(self, 16);
  *(uint8_t *)a4 = 1;
  return G4_VCALL<int>(self, 8, a2, (char *)a4 + 4, (char *)a4 + 8);
}

// ----------------------------------------------------------------------------
// Function: vox::FileArchive::getArchiveLabelName  (binary VA: 0x1008780)
// Original: vox::FileArchive::getArchiveLabelName
// ----------------------------------------------------------------------------
int vox::FileArchive::getArchiveLabelName(vox::FileArchive::Self *self)
{
  return G4_VCALL<int>(self, 16);
}



// ============================================================================
// Address:   0x100c560 (size: 22 bytes)
// Symbol:    _ZN3vox11FileArchive9FileRangeC2Ev
// Demangled: vox::FileArchive::FileRange::FileRange(void)
// ============================================================================
// Alternative name is '_ZN3vox11FileArchive9FileRangeC1Ev'
struct vox::FileArchive::FileRange::Self *vox::FileArchive::FileRange::FileRange(vox::FileArchive::FileRange::Self *self)
{
  *(uint8_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::FileArchive::FileRange::Subset  (binary VA: 0x100d420)
// Original: vox::FileArchive::FileRange::Subset
// ----------------------------------------------------------------------------
int64_t vox::FileArchive::FileRange::Subset(int64_t self, int a2)
{
  int64_t result; // rax
  int v3;

  result = self;
  if ( *(uint8_t *)self != 0 )
  {
    v3 = *(uint32_t *)(self + 8);
    if ( SHIDWORD(self) > v3 )
    {
      *(uint32_t *)(self + 4) += v3;
      *(uint32_t *)(self + 8) = 0;
    }
    else
    {
      if ( v3 < HIDWORD(self) + a2 )
        *(uint32_t *)(self + 8) = v3 - HIDWORD(self);
      else
        *(uint32_t *)(self + 8) = a2;
      *(uint32_t *)(self + 4) += HIDWORD(self);
    }
  }
  else
  {
    *(uint32_t *)(self + 4) = HIDWORD(self);
    *(uint32_t *)(self + 8) = a2;
    *(uint8_t *)self = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::FileArchive::FileRange::Subset  (binary VA: 0x100d4a0)
// Original: vox::FileArchive::FileRange::Subset
// ----------------------------------------------------------------------------
vox::FileArchive::FileRange::Self * vox::FileArchive::FileRange::Subset(vox::FileArchive::FileRange::Self *self, vox::FileArchive::FileRange::Self *a2)
{
  vox::FileArchive::FileRange::Self *result;
  int64_t v3;

  result = a2;
  if ( *(uint8_t *)a2 != 0 )
  {
    HIDWORD(v3) = *((uint32_t *)a2 + 1);
    LODWORD(v3) = (uint32_t)(uintptr_t)(self);
    return (vox::FileArchive::FileRange::Self *)vox::FileArchive::FileRange::Subset(v3, *((uint32_t *)a2 + 2));
  }
  return result;
}



// ============================================================================
// Address:   0x100d4e0 (size: 46 bytes)
// Symbol:    _ZN3vox11FileArchive11VoxpackInfoC2Ev
// Demangled: vox::FileArchive::VoxpackInfo::VoxpackInfo(void)
// ============================================================================
// Alternative name is '_ZN3vox11FileArchive11VoxpackInfoC1Ev'
struct vox::FileArchive::VoxpackInfo *vox::FileArchive::VoxpackInfo::Construct(
        vox::FileArchive::VoxpackInfo *self)
{
  *((uint32_t *)self + 1) = -1;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&unk_1B15112);
  *((uint8_t *)self + 8) = 0;
  *((uint8_t *)self + 9) = 0;
  *((uint32_t *)self + 3) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::FileArchive::Destroy  (binary VA: 0x100d520)
// Original: vox::FileArchive::~FileArchive
// ----------------------------------------------------------------------------
void vox::FileArchive::Destroy(vox::FileArchive::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D728);
}

// ----------------------------------------------------------------------------
// Function: vox::FileArchive::getArchiveVoxpackInfo  (binary VA: 0x100d540)
// Original: vox::FileArchive::getArchiveVoxpackInfo
// ----------------------------------------------------------------------------
int vox::FileArchive::getArchiveVoxpackInfo()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::FileArchive::Destroy_ea100d550  (binary VA: 0x100d550)
// Original: vox::FileArchive::~FileArchive
// ----------------------------------------------------------------------------
void vox::FileArchive::Destroy_ea100d550(vox::FileArchive::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D728);
  opDelete(self);
}


