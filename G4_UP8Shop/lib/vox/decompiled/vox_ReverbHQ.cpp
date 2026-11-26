#include "Core/Utils/DecompTypes.h"
#include "vox_ReverbHQ.h"

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQ::ConnectToBus  (binary VA: 0xfc86f0)
// Original: vox::ReverbHQ::ConnectToBus
// ----------------------------------------------------------------------------
int vox::ReverbHQ::ConnectToBus(vox::ReverbHQ::Self *self, float a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = *((uint32_t *)self + 2);
  result = 0;
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 12, LODWORD(a2), a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQ::Update  (binary VA: 0xfc8730)
// Original: vox::ReverbHQ::Update
// ----------------------------------------------------------------------------
int vox::ReverbHQ::Update(vox::ReverbHQ::Self *self, const int *a2, int *a3, int a4)
{
  int result;

  result = *((uint32_t *)self + 2);
  if ( result != 0 )
    return G4_VCALL<int>(result, 8, a2, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQ::WillOutput  (binary VA: 0xfc8770)
// Original: vox::ReverbHQ::WillOutput
// ----------------------------------------------------------------------------
int vox::ReverbHQ::WillOutput(vox::ReverbHQ::Self *self, bool a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 2);
  result = 0;
  if ( v2 != 0 )
    return (*(int (**)(uint32_t, bool))(*(uint32_t *)v2 + 20))(*((uint32_t *)self + 2), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQ::Destroy  (binary VA: 0xfc87a0)
// Original: vox::ReverbHQ::~ReverbHQ
// ----------------------------------------------------------------------------
void vox::ReverbHQ::Destroy(vox::ReverbHQ::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208C9C8);
  v1 = *((uint32_t *)self + 2);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(*((uint32_t *)self + 2));
  vox::CustomDSP::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQ::Destroy_eafc87f0  (binary VA: 0xfc87f0)
// Original: vox::ReverbHQ::~ReverbHQ
// ----------------------------------------------------------------------------
void vox::ReverbHQ::Destroy_eafc87f0(vox::ReverbHQ::Self *self)
{
  vox::ReverbHQ::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQ::Construct  (binary VA: 0xfcccd0)
// Original: vox::ReverbHQ::ReverbHQ
// ----------------------------------------------------------------------------
void vox::ReverbHQ::Construct(vox::ReverbHQ::Self *self)
{
  vox::ReverbHQC::Self *v1;

  vox::CustomDSP::Construct(self);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208C9C8);
  v1 = (vox::ReverbHQC::Self *)opNew(0x260u);
  vox::ReverbHQC::Construct(v1);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v1);
  *((uint32_t *)self + 3) = 0;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQ::SetParameters  (binary VA: 0xfccd40)
// Original: vox::ReverbHQ::SetParameters
// ----------------------------------------------------------------------------
int vox::ReverbHQ::SetParameters(vox::ReverbHQ::Self *self, vox::ReverbHQParameters::Self *a2, float a3)
{
  int result;

  result = *((uint32_t *)self + 2);
  if ( result != 0 )
    return vox::ReverbHQC::SetParameters(*((vox::ReverbHQC::Self **)self + 2), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQ::LoadParameterBank  (binary VA: 0xfccd80)
// Original: vox::ReverbHQ::LoadParameterBank
// ----------------------------------------------------------------------------
bool vox::ReverbHQ::LoadParameterBank(void ***self, char *a2)
{
  bool result;

  result = true;
  if ( *(self + 2) != nullptr )
    result = vox::ReverbHQC::LoadParameterBank(*(self + 2), a2);
  if ( *(self + 3) == nullptr && *(self + 2) == nullptr )
    return false;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQ::SetBankPresetByName  (binary VA: 0xfccdf0)
// Original: vox::ReverbHQ::SetBankPresetByName
// ----------------------------------------------------------------------------
bool vox::ReverbHQ::SetBankPresetByName(vox::ReverbHQC::Self **self, char *a2, float a3)
{
  bool result;

  result = true;
  if ( *(self + 2) != nullptr )
    result = (uint8_t)vox::ReverbHQC::SetBankPresetByName(*(self + 2), a2, a3) != 0;
  if ( *(self + 3) == nullptr && *(self + 2) == nullptr )
    return false;
  return result;
}


