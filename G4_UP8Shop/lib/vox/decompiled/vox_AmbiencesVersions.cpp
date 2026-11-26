#include "Core/Utils/DecompTypes.h"
#include "vox_AmbiencesVersions.h"

// ----------------------------------------------------------------------------
// Function: vox::AmbiencesVersions::CompareVersions  (binary VA: 0xfd0370)
// Original: vox::AmbiencesVersions::CompareVersions
// ----------------------------------------------------------------------------
int vox::AmbiencesVersions::CompareVersions(vox::AmbiencesVersions::Self *self, char *s2)
{
  return strcmp((const char *)self, s2);
}

// ----------------------------------------------------------------------------
// Function: vox::AmbiencesVersions::GetLatestVersionLabel  (binary VA: 0xfd03a0)
// Original: vox::AmbiencesVersions::GetLatestVersionLabel
// ----------------------------------------------------------------------------
char * vox::AmbiencesVersions::GetLatestVersionLabel()
{
  return (char *)(uintptr_t)(off_20C2854);
}

// ----------------------------------------------------------------------------
// Function: vox::AmbiencesVersions::GetVersion200Label  (binary VA: 0xfd03c0)
// Original: vox::AmbiencesVersions::GetVersion200Label
// ----------------------------------------------------------------------------
char * vox::AmbiencesVersions::GetVersion200Label()
{
  return (char *)(uintptr_t)(vox::AmbiencesVersions::k_validVersions[0]);
}

// ----------------------------------------------------------------------------
// Function: vox::AmbiencesVersions::GetVersion300Label  (binary VA: 0xfd03e0)
// Original: vox::AmbiencesVersions::GetVersion300Label
// ----------------------------------------------------------------------------
char * vox::AmbiencesVersions::GetVersion300Label()
{
  return (char *)(uintptr_t)(off_20C2854);
}

// ----------------------------------------------------------------------------
// Function: vox::AmbiencesVersions::GetVersionStringSize  (binary VA: 0xfd0400)
// Original: vox::AmbiencesVersions::GetVersionStringSize
// ----------------------------------------------------------------------------
int vox::AmbiencesVersions::GetVersionStringSize()
{
  return 6;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbiencesVersions::IsVersionValid  (binary VA: 0xfd0410)
// Original: vox::AmbiencesVersions::IsVersionValid
// ----------------------------------------------------------------------------
int vox::AmbiencesVersions::IsVersionValid(vox::AmbiencesVersions::Self *self)
{
  int v1;
  int v2;

  v1 = strcmp((const char *)self, vox::AmbiencesVersions::k_validVersions[0]);
  v2 = 1;
  if ( v1 != 0 )
    LOBYTE(v2) = strcmp((const char *)self, off_20C2854) == 0;
  return v2;
}


