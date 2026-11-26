#include "Core/Utils/DecompTypes.h"
#include "vox_VoxSoundPackXML.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::Construct  (binary VA: 0x1019b20)
// Original: vox::VoxSoundPackXML::VoxSoundPackXML
// ----------------------------------------------------------------------------
vox::VoxSoundPackXML::Self * vox::VoxSoundPackXML::Construct(vox::VoxSoundPackXML::Self *self)
{
  vox::VoxSoundPackXMLInternalData::Self *v1;

  v1 = (vox::VoxSoundPackXMLInternalData::Self *)VoxAllocInternal(
                                             0x68u,
                                             0,
                                             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                             (int)(uintptr_t)("VoxSoundPackXML"),
                                             440);
  vox::VoxSoundPackXMLInternalData::Construct(v1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v1);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::Destroy  (binary VA: 0x1019b90)
// Original: vox::VoxSoundPackXML::~VoxSoundPackXML
// ----------------------------------------------------------------------------
void vox::VoxSoundPackXML::Destroy(void ***self)
{
  if ( *self != nullptr )
  {
    vox::VoxSoundPackXMLInternalData::Destroy(*self);
    VoxFreeInternal(*self);
  }
  *self = nullptr;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetConfigInfo  (binary VA: 0x1019be0)
// Original: vox::VoxSoundPackXML::GetConfigInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetConfigInfo(uint32_t **a1, uint32_t *a2)
{
  int result;

  result = 0;
  if ( *a1 != nullptr )
  {
    *a2 = **a1;
    a2[1] = (*a1)[1];
    a2[2] = (*a1)[2];
    a2[3] = (*a1)[3];
    a2[4] = (*a1)[4];
    a2[5] = (*a1)[5];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetBankUid  (binary VA: 0x1019c30)
// Original: vox::VoxSoundPackXML::GetBankUid
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetBankUid(vox::VoxSoundPackXML::Self *self, char *a2)
{
  unsigned int v2;
  int v3;
  int v4;
  int v5;

  v2 = 0xFFFFFFFF;
  v3 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 )
  {
    v4 = *(uint32_t *)(v3 + 48);
    if ( -1227133513 * ((*(uint32_t *)(v3 + 52) - v4) >> 2) != 0 )
    {
      v5 = 0;
      v2 = 0;
      while ( g4_std::string::compare(v5 + v4, a2) != 0 )
      {
        ++v2;
        v5 += 28;
        v4 = *(uint32_t *)(*(uint32_t *)self + 48);
        if ( v2 >= -1227133513 * ((*(uint32_t *)(*(uint32_t *)self + 52) - v4) >> 2) )
          return -1;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetBankInfo  (binary VA: 0x1019cc0)
// Original: vox::VoxSoundPackXML::GetBankInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetBankInfo(int *a1, unsigned int a2, int a3)
{
  int result;
  int v4;
  int v5;

  result = 0;
  v4 = *a1;
  if ( *a1 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 48);
    if ( a2 < -1227133513 * ((*(uint32_t *)(v4 + 52) - v5) >> 2) )
    {
      *(uint32_t *)a3 = *(uint32_t *)(v5 + 28 * a2);
      *(uint32_t *)(a3 + 4) = *(uint32_t *)(*(uint32_t *)(*a1 + 48) + 28 * a2 + 12);
      *(uint32_t *)(a3 + 28) = *(uint32_t *)(*(uint32_t *)(*a1 + 48) + 28 * a2 + 8);
      *(uint32_t *)(a3 + 32) = *(uint32_t *)(*(uint32_t *)(*a1 + 48) + 28 * a2 + 4);
      *(uint32_t *)(a3 + 36) = *(uint32_t *)(*(uint32_t *)(*a1 + 48) + 28 * a2 + 16);
      *(uint8_t *)(a3 + 40) = *(uint8_t *)(*(uint32_t *)(*a1 + 48) + 28 * a2 + 20);
      *(uint32_t *)(a3 + 44) = *(uint32_t *)(*(uint32_t *)(*a1 + 48) + 28 * a2 + 24);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetBankInfo  (binary VA: 0x1019d60)
// Original: vox::VoxSoundPackXML::GetBankInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetBankInfo(vox::VoxSoundPackXML::Self *a1, char *a2, int a3)
{
  int result;
  unsigned int BankUid;

  result = 0;
  if ( *(uint32_t *)a1 != 0 )
  {
    BankUid = vox::VoxSoundPackXML::GetBankUid(a1, a2);
    return vox::VoxSoundPackXML::GetBankInfo((int *)a1, BankUid, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetGroupUid  (binary VA: 0x1019dc0)
// Original: vox::VoxSoundPackXML::GetGroupUid
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetGroupUid(vox::VoxSoundPackXML::Self *self, char *a2)
{
  unsigned int v2;
  int v3;
  int v4;
  int v5;

  v2 = 0xFFFFFFFF;
  v3 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 )
  {
    v4 = *(uint32_t *)(v3 + 36);
    if ( -858993459 * ((*(uint32_t *)(v3 + 40) - v4) >> 4) != 0 )
    {
      v5 = 0;
      v2 = 0;
      while ( g4_std::string::compare(v4 + v5 + 4, a2) != 0 )
      {
        ++v2;
        v5 += 80;
        v4 = *(uint32_t *)(*(uint32_t *)self + 36);
        if ( v2 >= -858993459 * ((*(uint32_t *)(*(uint32_t *)self + 40) - v4) >> 4) )
          return -1;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetGroupInfo  (binary VA: 0x1019e60)
// Original: vox::VoxSoundPackXML::GetGroupInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetGroupInfo(int *a1, unsigned int a2, int a3)
{
  int result;
  int v4;
  int v5;

  result = 0;
  v4 = *a1;
  if ( *a1 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 36);
    if ( a2 < -858993459 * ((*(uint32_t *)(v4 + 40) - v5) >> 4) )
    {
      *(uint32_t *)a3 = *(uint32_t *)(v5 + 80 * a2 + 4);
      *(uint32_t *)(a3 + 4) = *(uint32_t *)(*(uint32_t *)(*a1 + 36) + 80 * a2 + 12);
      *(uint32_t *)(a3 + 8) = *(uint32_t *)(*(uint32_t *)(*a1 + 36) + 80 * a2 + 16);
      *(uint8_t *)(a3 + 16) = *(uint8_t *)(*(uint32_t *)(*a1 + 36) + 80 * a2 + 20);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetGroupInfo  (binary VA: 0x1019ee0)
// Original: vox::VoxSoundPackXML::GetGroupInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetGroupInfo(vox::VoxSoundPackXML::Self *a1, char *a2, int a3)
{
  int result;
  unsigned int GroupUid;

  result = 0;
  if ( *(uint32_t *)a1 != 0 )
  {
    GroupUid = vox::VoxSoundPackXML::GetGroupUid(a1, a2);
    return vox::VoxSoundPackXML::GetGroupInfo((int *)a1, GroupUid, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetSoundUid  (binary VA: 0x1019f40)
// Original: vox::VoxSoundPackXML::GetSoundUid
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetSoundUid(vox::VoxSoundPackXMLInternalData::Self **self, char *a2)
{
  if ( *self != nullptr )
    return vox::VoxSoundPackXMLInternalData::GetUid(*self, a2, 1);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetSoundLabel  (binary VA: 0x1019f80)
// Original: vox::VoxSoundPackXML::GetSoundLabel
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetSoundLabel(vox::VoxSoundPackXML::Self *self, int a2, const char **a3)
{
  int v3;
  int result;
  int v5;

  v3 = *(uint32_t *)self;
  result = 0;
  if ( *(uint32_t *)self != 0 && a2 >= 0 )
  {
    v5 = *(uint32_t *)(v3 + 24);
    if ( a2 < -1431655765 * ((*(uint32_t *)(v3 + 28) - v5) >> 5) )
    {
      *a3 = *(const char **)(v5 + 96 * a2 + 4);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetDataSourceInfo  (binary VA: 0x1019fd0)
// Original: vox::VoxSoundPackXML::GetDataSourceInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetDataSourceInfo(vox::VoxSoundPackXML::Self *self, int a2, vox::data_source::CreationSettings::Self *a3)
{
  int result;
  int v4;
  int v5;

  result = 0;
  if ( *(uint32_t *)self != 0
    && a2 >= 0
    && a2 < -1431655765 * ((*(uint32_t *)(*(uint32_t *)self + 28) - *(uint32_t *)(*(uint32_t *)self + 24)) >> 5) )
  {
    *(uint32_t *)a3 = 1;
    *((uint32_t *)a3 + 1) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 8);
    v4 = *(char *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 16);
    *((uint32_t *)a3 + 3) = 0;
    *((uint32_t *)a3 + 2) = v4;
    v5 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 12);
    *((uint32_t *)a3 + 5) = a2;
    *((uint32_t *)a3 + 4) = v5;
    *((uint32_t *)a3 + 6) = *(char *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 18);
    *((uint32_t *)a3 + 7) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 88);
    *((uint32_t *)a3 + 8) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 92);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetDataSourceInfo  (binary VA: 0x101a0a0)
// Original: vox::VoxSoundPackXML::GetDataSourceInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetDataSourceInfo(vox::VoxSoundPackXMLInternalData::Self **self, char *a2, vox::data_source::CreationSettings::Self *a3)
{
  int result;
  int SoundUid;

  result = 0;
  if ( *self != nullptr )
  {
    SoundUid = vox::VoxSoundPackXML::GetSoundUid(self, a2);
    return vox::VoxSoundPackXML::GetDataSourceInfo((vox::VoxSoundPackXML::Self *)self, SoundUid, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEmitterInfo  (binary VA: 0x101a100)
// Original: vox::VoxSoundPackXML::GetEmitterInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEmitterInfo(vox::VoxSoundPackXML::Self *self, int a2, vox::emitter::CreationSettings::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  bool v9;
  vox::VoxEngine::Self *VoxEngine;
  int v11;

  v3 = 0;
  v4 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 && a2 >= 0 )
  {
    v5 = *(uint32_t *)(v4 + 24);
    if ( a2 < -1431655765 * ((*(uint32_t *)(v4 + 28) - v5) >> 5) )
    {
      v7 = v5 + 96 * a2;
      v8 = *(uint32_t *)(v7 + 20);
      *(uint32_t *)a3 = *(uint32_t *)(v7 + 40);
      v11 = v8;
      *((uint32_t *)a3 + 2) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 48);
      *((uint32_t *)a3 + 1) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 44);
      *((uint8_t *)a3 + 12) = *(uint8_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 52);
      *((uint32_t *)a3 + 4) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 56);
      *((uint32_t *)a3 + 6) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 64);
      *((uint32_t *)a3 + 5) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 60);
      *((uint8_t *)a3 + 28) = *(uint8_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 68);
      *((uint8_t *)a3 + 29) = *(uint8_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 19);
      VoxEngine = vox::VoxEngine::GetVoxEngine();
      *((uint32_t *)a3 + 9) = vox::VoxEngine::GetGroupId(
                              VoxEngine,
                              *(char **)(*(uint32_t *)(*(uint32_t *)self + 36)
                                       + 80 * *(char *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 18)
                                       + 4));
      *((uint32_t *)a3 + 10) = vox::VoxEngine::GetPriorityBankIdFromName(
                               VoxEngine,
                               *(char **)(*(uint32_t *)(*(uint32_t *)self + 48)
                                        + 28 * *(char *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 17)));
      *((uint32_t *)a3 + 11) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2);
      *((uint8_t *)a3 + 48) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 24) != 0;
      *((uint32_t *)a3 + 15) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 28);
      *((uint32_t *)a3 + 14) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 32);
      *((uint32_t *)a3 + 16) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 36);
      v9 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 24) == 1;
      *((uint32_t *)a3 + 29) = v11;
      *((uint32_t *)a3 + 13) = !v9;
      *((uint8_t *)a3 + 120) = *(uint8_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 69);
      *((uint32_t *)a3 + 31) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 72);
      *((uint32_t *)a3 + 32) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 76);
      *((uint8_t *)a3 + 30) = *(uint8_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 80);
      *((uint32_t *)a3 + 8) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 84);
      *((uint32_t *)a3 + 34) = a2;
      *((uint32_t *)a3 + 35) = 0;
      *((uint32_t *)a3 + 36) = 0;
      *((uint32_t *)a3 + 37) = 0;
      *((uint32_t *)a3 + 38) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 88);
      v3 = 1;
      *((uint32_t *)a3 + 39) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 24) + 96 * a2 + 92);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEmitterInfo  (binary VA: 0x101a330)
// Original: vox::VoxSoundPackXML::GetEmitterInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEmitterInfo(vox::VoxSoundPackXMLInternalData::Self **self, char *a2, vox::emitter::CreationSettings::Self *a3)
{
  int result;
  int SoundUid;

  result = 0;
  if ( *self != nullptr )
  {
    SoundUid = vox::VoxSoundPackXML::GetSoundUid(self, a2);
    return vox::VoxSoundPackXML::GetEmitterInfo((vox::VoxSoundPackXML::Self *)self, SoundUid, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetSoundCustomParam  (binary VA: 0x101a390)
// Original: vox::VoxSoundPackXML::GetSoundCustomParam
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetSoundCustomParam(vox::VoxSoundPackXML::Self *self, int a2, int a3, const char **a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v4 = *(uint32_t *)self;
  result = 0;
  if ( *(uint32_t *)self != 0 && a2 >= 0 )
  {
    v6 = *(uint32_t *)(v4 + 24);
    if ( a2 < -1431655765 * ((*(uint32_t *)(v4 + 28) - v6) >> 5) )
    {
      v7 = v6 + 96 * a2;
      if ( *(uint32_t *)(v7 + 88) > a3 )
      {
        *a4 = *(const char **)(*(uint32_t *)(v7 + 92) + 4 * a3);
        return 1;
      }
      else
      {
        *a4 = nullptr;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetSoundCustomParam  (binary VA: 0x101a420)
// Original: vox::VoxSoundPackXML::GetSoundCustomParam
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetSoundCustomParam(vox::VoxSoundPackXMLInternalData::Self **self, char *a2, int a3, char **a4)
{
  int result;
  int SoundUid;

  result = 0;
  if ( *self != nullptr )
  {
    SoundUid = vox::VoxSoundPackXML::GetSoundUid(self, a2);
    return vox::VoxSoundPackXML::GetSoundCustomParam((vox::VoxSoundPackXML::Self *)self, SoundUid, a3, (const char **)a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventUid  (binary VA: 0x101a480)
// Original: vox::VoxSoundPackXML::GetEventUid
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventUid(vox::VoxSoundPackXMLInternalData::Self **self, char *a2)
{
  if ( *self != nullptr )
    return vox::VoxSoundPackXMLInternalData::GetUid(*self, a2, 0);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventInfo  (binary VA: 0x101a4c0)
// Original: vox::VoxSoundPackXML::GetEventInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventInfo(int a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;

  result = 0;
  if ( *(uint32_t *)a1 != 0
    && a2 >= 0
    && a2 < -1227133513 * ((*(uint32_t *)(*(uint32_t *)a1 + 64) - *(uint32_t *)(*(uint32_t *)a1 + 60)) >> 3) )
  {
    v4 = 56 * a2;
    *(uint32_t *)a3 = a2;
    *(uint32_t *)(a3 + 4) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 60) + 56 * a2);
    v5 = *(uint32_t *)(*(uint32_t *)a1 + 60) + 56 * a2;
    v6 = (*(uint32_t *)(v5 + 16) - *(uint32_t *)(v5 + 12)) >> 2;
    *(uint32_t *)(a3 + 8) = 0;
    *(uint32_t *)(a3 + 12) = v6;
    if ( v6 != 0 )
      *(uint32_t *)(a3 + 8) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 60) + v4 + 12);
    *(uint32_t *)(a3 + 16) = *(int16_t *)(*(uint32_t *)(*(uint32_t *)a1 + 60) + v4 + 24);
    *(uint16_t *)(a3 + 20) = *(uint16_t *)(*(uint32_t *)(*(uint32_t *)a1 + 60) + v4 + 26);
    *(uint16_t *)(a3 + 22) = *(uint16_t *)(*(uint32_t *)(*(uint32_t *)a1 + 60) + v4 + 28);
    *(uint32_t *)(a3 + 24) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 60) + v4 + 32);
    *(uint32_t *)(a3 + 28) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 60) + v4 + 36);
    *(uint32_t *)(a3 + 32) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 60) + v4 + 48);
    *(uint32_t *)(a3 + 36) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 + 60) + v4 + 52);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventInfo  (binary VA: 0x101a5c0)
// Original: vox::VoxSoundPackXML::GetEventInfo
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventInfo(vox::VoxSoundPackXMLInternalData::Self **a1, char *a2, int a3)
{
  int result;
  int EventUid;

  result = 0;
  if ( *a1 != nullptr )
  {
    EventUid = vox::VoxSoundPackXML::GetEventUid(a1, a2);
    return vox::VoxSoundPackXML::GetEventInfo((int)(uintptr_t)(a1), EventUid, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventSoundUid  (binary VA: 0x101a620)
// Original: vox::VoxSoundPackXML::GetEventSoundUid
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventSoundUid(vox::VoxSoundPackXML::Self *self, int a2, int *a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  long double Time; // fst7
  int v10;
  float v11; // xmm0_4
  double v12; // xmm0_8
  int v13;
  double v14; // xmm2_8
  double v15; // xmm0_8
  int v16;
  uint16_t v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint32_t *v25;
  bool v26; // cc
  uint32_t *v27;
  int v28;
  void *v29;
  int v30;
  int16_t v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  char *v35;
  uint32_t *v36;
  char *v37;
  uint32_t *v38;
  int v39;
  char *v40;
  int v41;
  int v42;
  char *v43;
  uint32_t *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  uint32_t *v49;
  char *v50;
  size_t v51;

  result = 0;
  v4 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
    return result;
  if ( a2 < 0 )
    return result;
  v5 = *(uint32_t *)(v4 + 60);
  if ( a2 >= -1227133513 * ((*(uint32_t *)(v4 + 64) - v5) >> 3) )
    return result;
  v6 = 56 * a2;
  v7 = v5 + 56 * a2;
  v8 = (*(uint32_t *)(v7 + 16) - *(uint32_t *)(v7 + 12)) >> 2;
  if ( v8 <= 0 )
    return result;
  if ( *(uint32_t *)(v7 + 36) == 1 )
  {
    v12 = *(double *)(v7 + 40);
    if ( v12 < 0.0 )
    {
      *(uint64_t *)(v7 + 40) = 0;
      v7 = *(uint32_t *)(*(uint32_t *)self + 60) + v6;
      v12 = *(double *)(v7 + 40);
    }
    *(double *)(v7 + 40) = v12 - 1.0;
    v13 = *(uint32_t *)(*(uint32_t *)self + 60) + v6;
    v14 = *(float *)(v13 + 32);
    v15 = *(double *)(v13 + 40);
    if ( v15 > v14 )
    {
      *(double *)(v13 + 40) = v14;
      v13 = *(uint32_t *)(*(uint32_t *)self + 60) + v6;
      v15 = *(double *)(v13 + 40);
    }
    if ( v15 >= 0.0 )
    {
      *a3 = -1;
      return 1;
    }
    *(double *)(v13 + 40) = *(float *)(v13 + 32) + v15;
  }
  else
  {
    Time = GetTime();
    v10 = *(uint32_t *)(*(uint32_t *)self + 60) + v6;
    v11 = (double)Time - *(double *)(v10 + 40);
    if ( v11 < 0.0 )
    {
      *(double *)(v10 + 40) = Time;
      v11 = 0.0;
      v10 = v6 + *(uint32_t *)(*(uint32_t *)self + 60);
    }
    if ( v11 < *(float *)(v10 + 32) )
      goto LABEL_31;
    *(double *)(v10 + 40) = Time;
  }
  v16 = lrand48();
  v45 = v6 + *(uint32_t *)(*(uint32_t *)self + 60);
  if ( v16 % 100 >= *(int16_t *)(v45 + 28) )
  {
LABEL_31:
    *a3 = -1;
    return 1;
  }
  v17 = *(uint16_t *)(v45 + 24);
  if ( v17 != 0 )
  {
    if ( v17 <= 2u )
    {
      v30 = v6 + *(uint32_t *)(*(uint32_t *)self + 60);
      v31 = *(uint16_t *)(v45 + 30);
      v32 = v31;
      if ( v31 >= v8 )
      {
        *(uint16_t *)(v45 + 30) = 0;
        v31 = *(uint16_t *)(*(uint32_t *)(*(uint32_t *)self + 60) + v6 + 30);
        v30 = *(uint32_t *)(*(uint32_t *)self + 60) + v6;
        v32 = v31;
      }
      *(uint16_t *)(v30 + 30) = v31 + 1;
      *a3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 60) + v6 + 12) + 4 * v32);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v18 = *(uint32_t *)(v45 + 16) - *(uint32_t *)(v45 + 12);
    v19 = lrand48();
    v20 = v18 >> 2;
    *a3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 60) + v6 + 12) + 4 * (v19 % v20));
    v39 = v19 % v20;
    v47 = v6 + *(uint32_t *)(*(uint32_t *)self + 60) + 4;
    v21 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v21 != -8 )
      *(uint32_t *)(v21 + 8) = *a3;
    sub_1901920(v21, v47);
    v22 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 60) + v6 + 12);
    *(uint32_t *)(v22 + 4 * v39) = *(uint32_t *)(v22 + 4 * v20 - 4);
    *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 60) + v6 + 16) -= 4;
    v23 = *(uint32_t *)(*(uint32_t *)self + 60) + v6;
    v42 = *(uint32_t *)(v23 + 4);
    v24 = 0;
    if ( v23 + 4 != v42 )
    {
      v25 = *(uint32_t **)(v23 + 4);
      do
      {
        v25 = (uint32_t *)*v25;
        ++v24;
      }
      while ( (uint32_t *)(v23 + 4) != v25 );
    }
    v26 = *(int16_t *)(v23 + 26) < v24;
    v27 = *(uint32_t **)(v23 + 16);
    if ( v26 || (result = 1, ((unsigned int)(uintptr_t)(v27) - *(uint32_t *)(v23 + 12)) >> 2 == 0) )
    {
      if ( *(uint32_t **)(v23 + 20) == v27 )
      {
        v33 = ((int)(uintptr_t)(v27) - *(uint32_t *)(v23 + 12)) >> 2;
        v34 = 1;
        if ( v33 == 0 || (v34 = 2 * v33, v48 = 0x3FFFFFFF, v33 <= 2 * v33) && v34 <= 0x3FFFFFFF )
          v48 = v34;
        v40 = *(char **)(v23 + 16);
        v41 = ((int)(uintptr_t)(v27) - *(uint32_t *)(v23 + 12)) >> 2;
        v51 = 4 * v48;
        v46 = VoxAllocInternal(4 * v48, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v49 = (uint32_t *)(v46 + 4 * v41);
        if ( v49 != nullptr )
          *v49 = *(uint32_t *)(v42 + 8);
        v35 = *(char **)(v23 + 12);
        v36 = (uint32_t *)v46;
        v43 = v35;
        if ( v40 != v35 )
        {
          do
          {
            if ( v36 != nullptr )
              *v36 = *(uint32_t *)v35;
            v35 += 4;
            ++v36;
          }
          while ( v40 != v35 );
          v36 = (uint32_t *)(v46 + 4 * ((unsigned int)(v40 - (v43 + 4)) >> 2) + 4);
        }
        v44 = v36 + 1;
        v50 = *(char **)(v23 + 16);
        if ( v40 != v50 )
        {
          v37 = v40;
          v38 = v36 + 1;
          do
          {
            if ( v38 != nullptr )
              *v38 = *(uint32_t *)v37;
            v37 += 4;
            ++v38;
          }
          while ( v50 != v37 );
          v44 += ((unsigned int)(v50 - (v40 + 4)) >> 2) + 1;
        }
        if ( *(uint32_t *)(v23 + 12) != 0 )
          VoxFreeInternal(*(void **)(v23 + 12));
        *(uint32_t *)(v23 + 12) = v46;
        *(uint32_t *)(v23 + 16) = (uint32_t)(uintptr_t)(v44);
        *(uint32_t *)(v23 + 20) = v51 + v46;
      }
      else
      {
        v28 = 0;
        if ( v27 != nullptr )
        {
          *v27 = *(uint32_t *)(v42 + 8);
          v28 = *(uint32_t *)(v23 + 16);
        }
        *(uint32_t *)(v23 + 16) = v28 + 4;
      }
      v29 = *(void **)(*(uint32_t *)(*(uint32_t *)self + 60) + v6 + 4);
      sub_1901940(v29);
      VoxFreeInternal(v29);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventSoundUid  (binary VA: 0x101aaf0)
// Original: vox::VoxSoundPackXML::GetEventSoundUid
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventSoundUid(vox::VoxSoundPackXMLInternalData::Self **self, char *a2, int *a3)
{
  int result;
  int EventUid;

  result = 0;
  if ( *self != nullptr )
  {
    EventUid = vox::VoxSoundPackXML::GetEventUid(self, a2);
    return vox::VoxSoundPackXML::GetEventSoundUid((vox::VoxSoundPackXML::Self *)self, EventUid, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEmitterInfoFromSoundOrEvent  (binary VA: 0x101ab50)
// Original: vox::VoxSoundPackXML::GetEmitterInfoFromSoundOrEvent
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEmitterInfoFromSoundOrEvent(vox::VoxSoundPackXMLInternalData::Self **self, char *a2, vox::emitter::CreationSettings::Self *a3)
{
  int v3;
  char EmitterInfo;
  char EventSoundUid;
  int v7[4];

  v3 = 0;
  if ( *self != nullptr )
  {
    EmitterInfo = vox::VoxSoundPackXML::GetEmitterInfo(self, a2, a3);
    v3 = 1;
    if ( EmitterInfo == 0 )
    {
      EventSoundUid = vox::VoxSoundPackXML::GetEventSoundUid(self, a2, v7);
      v3 = 0;
      if ( EventSoundUid != 0 )
        return vox::VoxSoundPackXML::GetEmitterInfo((vox::VoxSoundPackXML::Self *)self, v7[0], a3);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::ResetEvent  (binary VA: 0x101abf0)
// Original: vox::VoxSoundPackXML::ResetEvent
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::ResetEvent(vox::VoxSoundPackXML::Self *self, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  void *v11;
  int v12;
  unsigned int v13;
  uint32_t *v14;
  char *v15;
  uint32_t *v16;
  char *v17;
  char *v18;
  uint32_t *v19;
  void *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  char *v26;
  char *v27;
  int v28;
  unsigned int v29;
  int v30;
  char *v31;

  result = 0;
  v3 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 && a2 >= 0 )
  {
    v4 = *(uint32_t *)(v3 + 60);
    if ( a2 < -1227133513 * ((*(uint32_t *)(v3 + 64) - v4) >> 3) )
    {
      v5 = 56 * a2;
      v6 = v4 + 56 * a2;
      if ( *(uint16_t *)(v6 + 24) == 2 )
      {
        v21 = lrand48();
        v5 = 56 * a2;
        *(uint16_t *)(v6 + 30) = v21
                            % ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 60) + 56 * a2 + 16)
                              - *(uint32_t *)(*(uint32_t *)(*(uint32_t *)self + 60) + 56 * a2 + 12)) >> 2);
      }
      else
      {
        *(uint16_t *)(v6 + 30) = (*(uint32_t *)(v6 + 16) - *(uint32_t *)(v6 + 12)) >> 2;
      }
      while ( 1 )
      {
        v7 = *(uint32_t *)(*(uint32_t *)self + 60) + v5;
        v8 = *(uint32_t *)(v7 + 4);
        if ( v7 + 4 == v8 )
          break;
        v9 = *(uint32_t **)(v7 + 4);
        do
          v9 = (uint32_t *)*v9;
        while ( (uint32_t *)(v7 + 4) != v9 );
        v31 = *(char **)(v7 + 16);
        if ( v31 == *(char **)(v7 + 20) )
        {
          v12 = (int)(uintptr_t)(&v31[-*(uint32_t *)(v7 + 12)]) >> 2;
          v28 = 4;
          v25 = v12;
          if ( v12 != 0 )
          {
            v13 = 2 * v12;
            if ( v25 > v13 || v13 > 0x3FFFFFFF )
              v28 = -4;
            else
              v28 = 8 * v25;
          }
          v24 = *(uint32_t *)(v7 + 4);
          v23 = v5;
          v30 = VoxAllocInternal(v28, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
          v29 = v30 + 4;
          v5 = v23;
          v14 = (uint32_t *)(v30 + 4 * v25);
          if ( v14 != nullptr )
            *v14 = *(uint32_t *)(v24 + 8);
          v26 = *(char **)(v7 + 12);
          if ( v31 != v26 )
          {
            v15 = *(char **)(v7 + 12);
            v16 = (uint32_t *)v30;
            do
            {
              if ( v16 != nullptr )
                *v16 = *(uint32_t *)v15;
              v15 += 4;
              ++v16;
            }
            while ( v31 != v15 );
            v29 = v30 + 4 * ((unsigned int)(v31 - (v26 + 4)) >> 2) + 8;
          }
          v27 = *(char **)(v7 + 16);
          if ( v31 != v27 )
          {
            v17 = *(char **)(v7 + 16);
            v18 = v31;
            v19 = (uint32_t *)v29;
            do
            {
              if ( v19 != nullptr )
                *v19 = *(uint32_t *)v18;
              v18 += 4;
              ++v19;
            }
            while ( v17 != v18 );
            v29 += 4 * ((unsigned int)(v27 - (v31 + 4)) >> 2) + 4;
          }
          v20 = *(void **)(v7 + 12);
          if ( v20 != nullptr )
          {
            VoxFreeInternal(v20);
            v5 = v23;
          }
          *(uint32_t *)(v7 + 12) = v30;
          *(uint32_t *)(v7 + 16) = v29;
          *(uint32_t *)(v7 + 20) = v28 + v30;
        }
        else
        {
          v10 = 0;
          if ( v31 != nullptr )
          {
            *(uint32_t *)v31 = *(uint32_t *)(v8 + 8);
            v10 = *(uint32_t *)(v7 + 16);
          }
          *(uint32_t *)(v7 + 16) = v10 + 4;
        }
        v11 = *(void **)(*(uint32_t *)(*(uint32_t *)self + 60) + v5 + 4);
        v22 = v5;
        sub_1901940(v11);
        VoxFreeInternal(v11);
        v5 = v22;
      }
      result = 1;
      *(uint64_t *)(v7 + 40) = 0xC12E847E00000000LL;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::ResetEvent  (binary VA: 0x101aeb0)
// Original: vox::VoxSoundPackXML::ResetEvent
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::ResetEvent(vox::VoxSoundPackXMLInternalData::Self **self, char *a2)
{
  int result;
  int EventUid;

  result = 0;
  if ( *self != nullptr )
  {
    EventUid = vox::VoxSoundPackXML::GetEventUid(self, a2);
    return vox::VoxSoundPackXML::ResetEvent((vox::VoxSoundPackXML::Self *)self, EventUid);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventSize  (binary VA: 0x101af00)
// Original: vox::VoxSoundPackXML::GetEventSize
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventSize(vox::VoxSoundPackXML::Self *self, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = *(uint32_t *)self;
  result = -1;
  if ( *(uint32_t *)self != 0 && a2 >= 0 )
  {
    v4 = *(uint32_t *)(v2 + 60);
    if ( a2 < -1227133513 * ((*(uint32_t *)(v2 + 64) - v4) >> 3) )
      return (*(uint32_t *)(v4 + 56 * a2 + 16) - *(uint32_t *)(v4 + 56 * a2 + 12)) >> 2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventSize  (binary VA: 0x101af40)
// Original: vox::VoxSoundPackXML::GetEventSize
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventSize(vox::VoxSoundPackXMLInternalData::Self **self, char *a2)
{
  int EventUid;

  if ( *self == nullptr )
    return -1;
  EventUid = vox::VoxSoundPackXML::GetEventUid(self, a2);
  return vox::VoxSoundPackXML::GetEventSize((vox::VoxSoundPackXML::Self *)self, EventUid);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventCustomParam  (binary VA: 0x101afa0)
// Original: vox::VoxSoundPackXML::GetEventCustomParam
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventCustomParam(vox::VoxSoundPackXML::Self *self, int a2, int a3, const char **a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v4 = *(uint32_t *)self;
  result = 0;
  if ( *(uint32_t *)self != 0 && a2 >= 0 )
  {
    v6 = *(uint32_t *)(v4 + 60);
    if ( a2 < -1227133513 * ((*(uint32_t *)(v4 + 64) - v6) >> 3) )
    {
      v7 = v6 + 56 * a2;
      if ( *(uint32_t *)(v7 + 48) > a3 )
      {
        *a4 = *(const char **)(*(uint32_t *)(v7 + 52) + 4 * a3);
        return 1;
      }
      else
      {
        *a4 = nullptr;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventCustomParam  (binary VA: 0x101b030)
// Original: vox::VoxSoundPackXML::GetEventCustomParam
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventCustomParam(vox::VoxSoundPackXMLInternalData::Self **self, char *a2, int a3, char **a4)
{
  int result;
  int EventUid;

  result = 0;
  if ( *self != nullptr )
  {
    EventUid = vox::VoxSoundPackXML::GetEventUid(self, a2);
    return vox::VoxSoundPackXML::GetEventCustomParam((vox::VoxSoundPackXML::Self *)self, EventUid, a3, (const char **)a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::AutoSetupGroups  (binary VA: 0x101b090)
// Original: vox::VoxSoundPackXML::AutoSetupGroups
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::AutoSetupGroups(vox::VoxSoundPackXML::Self *self)
{
  int result;
  unsigned int v2;
  typedef vox::VoxEngine::Self *_g4_t_VoxEngine;
  typedef uint32_t _g4_t_v4[4];
  typedef char _g4_t_v5;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_VoxEngine)) > _g4_s0 ? (12u + sizeof(_g4_t_VoxEngine)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v4)) > _g4_s1 ? (28u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v5)) > _g4_s2 ? (44u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_VoxEngine &VoxEngine = *reinterpret_cast<_g4_t_VoxEngine *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 28u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  result = 0;
  if ( *(uint32_t *)self != 0 )
  {
    VoxEngine = vox::VoxEngine::GetVoxEngine();
    result = 1;
    if ( -858993459 * ((*(uint32_t *)(*(uint32_t *)self + 40) - *(uint32_t *)(*(uint32_t *)self + 36)) >> 4) != 0 )
    {
      v2 = 0;
      do
      {
        v4[0] = 0;
        v4[1] = 0;
        v4[2] = 1065353216;
        v4[3] = 1065353216;
        v5 = 1;
        vox::VoxSoundPackXML::GetGroupInfo((int *)self, v2, (int)(uintptr_t)(v4));
        if ( v2 != 0 )
        {
          if ( vox::VoxEngine::AddGroup((int)(uintptr_t)(VoxEngine), (int)(uintptr_t)(v4)) == -1 )
            return 0;
        }
        else
        {
          vox::VoxEngine::ReconfigureGroup((int)(uintptr_t)(VoxEngine), 0, (int)(uintptr_t)(v4));
        }
        ++v2;
      }
      while ( v2 < -858993459 * ((*(uint32_t *)(*(uint32_t *)self + 40) - *(uint32_t *)(*(uint32_t *)self + 36)) >> 4) );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::AutoSetupBanks  (binary VA: 0x101b190)
// Original: vox::VoxSoundPackXML::AutoSetupBanks
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::AutoSetupBanks(vox::VoxSoundPackXML::Self *self)
{
  int result;
  unsigned int v2;
  typedef vox::VoxEngine::Self *_g4_t_VoxEngine;
  typedef uint32_t _g4_t_v4[10];
  typedef char _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_VoxEngine)) > _g4_s0 ? (12u + sizeof(_g4_t_VoxEngine)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v5)) > _g4_s2 ? (56u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v6)) > _g4_s3 ? (60u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_VoxEngine &VoxEngine = *reinterpret_cast<_g4_t_VoxEngine *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 56u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 60u);

  result = 0;
  if ( *(uint32_t *)self != 0 )
  {
    VoxEngine = vox::VoxEngine::GetVoxEngine();
    result = 1;
    if ( -1227133513 * ((*(uint32_t *)(*(uint32_t *)self + 52) - *(uint32_t *)(*(uint32_t *)self + 48)) >> 2) != 0 )
    {
      v2 = 0;
      do
      {
        v4[0] = 0;
        v4[1] = -2147483647;
        v4[2] = 4;
        v4[8] = 4;
        v4[9] = 0;
        v5 = 0;
        v6 = 0;
        memset(&v4[3], 255, 20);
        vox::VoxSoundPackXML::GetBankInfo((int *)self, v2, (int)(uintptr_t)(v4));
        if ( v2 != 0 )
        {
          if ( vox::VoxEngine::AddPriorityBank((int)(uintptr_t)(VoxEngine), (int)(uintptr_t)(v4)) == -1 )
            return 0;
        }
        else
        {
          vox::VoxEngine::ReconfigurePriorityBank((int)(uintptr_t)(VoxEngine), 0, (int)(uintptr_t)(v4));
        }
        ++v2;
      }
      while ( v2 < -1227133513 * ((*(uint32_t *)(*(uint32_t *)self + 52) - *(uint32_t *)(*(uint32_t *)self + 48)) >> 2) );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetSoundCount  (binary VA: 0x101b2d0)
// Original: vox::VoxSoundPackXML::GetSoundCount
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetSoundCount(vox::VoxSoundPackXML::Self *self)
{
  int result;

  result = 0;
  if ( *(uint32_t *)self != 0 )
    return -1431655765 * ((*(uint32_t *)(*(uint32_t *)self + 28) - *(uint32_t *)(*(uint32_t *)self + 24)) >> 5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetBankCount  (binary VA: 0x101b2f0)
// Original: vox::VoxSoundPackXML::GetBankCount
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetBankCount(vox::VoxSoundPackXML::Self *self)
{
  int result;

  result = 0;
  if ( *(uint32_t *)self != 0 )
    return -1227133513 * ((*(uint32_t *)(*(uint32_t *)self + 52) - *(uint32_t *)(*(uint32_t *)self + 48)) >> 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetGroupCount  (binary VA: 0x101b310)
// Original: vox::VoxSoundPackXML::GetGroupCount
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetGroupCount(vox::VoxSoundPackXML::Self *self)
{
  int result;

  result = 0;
  if ( *(uint32_t *)self != 0 )
    return -858993459 * ((*(uint32_t *)(*(uint32_t *)self + 40) - *(uint32_t *)(*(uint32_t *)self + 36)) >> 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::GetEventCount  (binary VA: 0x101b330)
// Original: vox::VoxSoundPackXML::GetEventCount
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::GetEventCount(vox::VoxSoundPackXML::Self *self)
{
  int result;

  result = 0;
  if ( *(uint32_t *)self != 0 )
    return -1227133513 * ((*(uint32_t *)(*(uint32_t *)self + 64) - *(uint32_t *)(*(uint32_t *)self + 60)) >> 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::LoadXML  (binary VA: 0x1020650)
// Original: vox::VoxSoundPackXML::LoadXML
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXML::LoadXML(vox::VoxSoundPackXMLInternalData::Self **self, const char *a2)
{
  int XML_Tiny;
  vox::VoxSoundPackXMLInternalData::Self *v3;
  void *v4;
  void *v5;
  vox::VoxSoundPackXMLInternalData::Self *v6;
  vox::VoxSoundPackXMLInternalData::Self *v7;
  int v8;
  void **v9;
  vox::VoxSoundPackXMLInternalData::Self *v10;
  vox::VoxSoundPackXMLInternalData::Self *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  vox::VoxSoundPackXMLInternalData::Self *v17;
  int v18;
  void **v19;
  uint32_t *v20;
  uint32_t *v21;
  vox::FileSystemStdio::Self *Instance;
  vox::FileSystemStdio::Self *v23;
  int v24;
  int v25;
  int v26;
  vox::Self *v27;
  vox::Self *v29;
  vox::VoxSoundPackXMLInternalData::Self *v30;
  vox::VoxSoundPackXMLInternalData::Self *v31;
  vox::VoxSoundPackXMLInternalData::Self *v32;
  vox::VoxSoundPackXMLInternalData::Self *v33;
  vox::VoxSoundPackXMLInternalData::Self *v34;
  vox::VoxSoundPackXMLInternalData::Self *v35;
  uint32_t *v36;
  vox::VoxSoundPackXMLInternalData::Self *v37;
  vox::VoxSoundPackXMLInternalData::Self *v38;
  char *v39;
  vox::VoxSoundPackXMLInternalData::Self *v40;

  XML_Tiny = 0;
  v3 = *self;
  if ( *self != nullptr )
  {
    VoxFreeInternal(*((void **)v3 + 3));
    v4 = *((void **)v3 + 4);
    *((uint32_t *)v3 + 3) = 0;
    VoxFreeInternal(v4);
    v5 = *((void **)v3 + 5);
    *((uint32_t *)v3 + 4) = 0;
    VoxFreeInternal(v5);
    *((uint32_t *)v3 + 5) = 0;
    v6 = *self;
    v7 = *((vox::VoxSoundPackXMLInternalData::Self **)*self + 7);
    v30 = *((vox::VoxSoundPackXMLInternalData::Self **)*self + 6);
    if ( v30 != v7 )
    {
      v8 = *((uint32_t *)*self + 6);
      do
      {
        if ( *(uint32_t *)(v8 + 4) != 0 )
          VoxFreeInternal(*(void **)(v8 + 4));
        if ( *(uint32_t *)(v8 + 8) != 0 )
          VoxFreeInternal(*(void **)(v8 + 8));
        if ( *(uint32_t *)(v8 + 20) != 0 )
          VoxFreeInternal(*(void **)(v8 + 20));
        v9 = *(void ***)(v8 + 92);
        if ( v9 != nullptr )
        {
          if ( *v9 != nullptr )
          {
            VoxFreeInternal(*v9);
            v9 = *(void ***)(v8 + 92);
          }
          VoxFreeInternal(v9);
        }
        v8 += 96;
      }
      while ( v7 != (vox::VoxSoundPackXMLInternalData::Self *)v8 );
    }
    *((uint32_t *)v6 + 7) = (uint32_t)(uintptr_t)(v30);
    v38 = *self;
    v10 = *((vox::VoxSoundPackXMLInternalData::Self **)*self + 9);
    v31 = *((vox::VoxSoundPackXMLInternalData::Self **)*self + 10);
    if ( v10 != v31 )
    {
      v11 = *((vox::VoxSoundPackXMLInternalData::Self **)*self + 9);
      do
      {
        v12 = *((uint32_t *)v11 + 1);
        if ( (uint32_t *)(v12 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v12 - 12));
        }
        v13 = (uint32_t *)(*(uint32_t *)v11 - 12);
        if ( v13 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v11 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v13);
        }
        v11 = (vox::VoxSoundPackXMLInternalData::Self *)((char *)v11 + 80);
      }
      while ( v31 != v11 );
    }
    *((uint32_t *)v38 + 10) = (uint32_t)(uintptr_t)(v10);
    v32 = *self;
    v14 = *((uint32_t **)*self + 13);
    v36 = *((uint32_t **)*self + 12);
    if ( v36 != v14 )
    {
      v15 = *((uint32_t **)*self + 12);
      do
      {
        v16 = (uint32_t *)(*v15 - 12);
        if ( v16 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v15 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v16);
        v15 += 7;
      }
      while ( v14 != v15 );
    }
    *((uint32_t *)v32 + 13) = (uint32_t)(uintptr_t)(v36);
    v40 = *self;
    v17 = *((vox::VoxSoundPackXMLInternalData::Self **)*self + 15);
    v33 = v17;
    v37 = *((vox::VoxSoundPackXMLInternalData::Self **)*self + 16);
    if ( v17 != v37 )
    {
      v18 = *((uint32_t *)*self + 15);
      v39 = (char *)v17 + 4;
      do
      {
        if ( *(uint32_t *)v18 != 0 )
          VoxFreeInternal(*(void **)v18);
        v19 = *(void ***)(v18 + 52);
        if ( v19 != nullptr )
        {
          if ( *v19 != nullptr )
          {
            VoxFreeInternal(*v19);
            v19 = *(void ***)(v18 + 52);
          }
          VoxFreeInternal(v19);
        }
        if ( *(uint32_t *)(v18 + 12) != 0 )
          VoxFreeInternal(*(void **)(v18 + 12));
        v20 = *(uint32_t **)&v39[v18 - (uint32_t)(uintptr_t)(v33)];
        if ( v20 != (uint32_t *)(v18 + 4) )
        {
          while ( 1 )
          {
            v21 = (uint32_t *)*v20;
            VoxFreeInternal(v20);
            if ( v21 == (uint32_t *)(v18 + 4) )
              break;
            v20 = v21;
          }
        }
        v18 += 56;
      }
      while ( v37 != (vox::VoxSoundPackXMLInternalData::Self *)v18 );
    }
    XML_Tiny = 0;
    *((uint32_t *)v40 + 16) = (uint32_t)(uintptr_t)(v33);
    *((uint32_t *)*self + 19) = *((uint32_t *)*self + 18);
    *((uint32_t *)*self + 22) = *((uint32_t *)*self + 21);
    Instance = vox::FileSystemInterface::GetInstance();
    v23 = Instance;
    if ( Instance != nullptr )
    {
      v24 = G4_VCALL<int>(Instance, 8, a2, 6);
      v25 = v24;
      if ( v24 != 0 )
      {
        G4_VCALL<void>(v24, 12, 0, 2);
        v34 = (vox::VoxSoundPackXMLInternalData::Self *)G4_VCALL<int>(v25, 16);
        G4_VCALL<void>(v25, 12, 0, 0);
        v26 = VoxAllocInternal(
                (size_t)v34 + 1,
                0,
                (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                (int)(uintptr_t)("LoadXML"),
                483);
        if ( v26 != 0 )
        {
          *((uint8_t *)v34 + v26) = 0;
          v29 = (vox::Self *)v26;
          v35 = (vox::VoxSoundPackXMLInternalData::Self *)G4_VCALL<int>(v25, 8, v26, v34, 1);
          G4_VCALL<void>(v23, 12, v25);
          v27 = v29;
          if ( v35 == (vox::VoxSoundPackXMLInternalData::Self *)((char *)&dword_0 + 1) )
          {
            XML_Tiny = vox::LoadXML_Tiny(v29, *self);
            v27 = v29;
          }
          VoxFreeInternal(v27);
        }
        else
        {
          G4_VCALL<void>(v23, 12, v25);
        }
      }
    }
  }
  return XML_Tiny;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXML::Construct  (binary VA: 0x1020a20)
// Original: vox::VoxSoundPackXML::VoxSoundPackXML
// ----------------------------------------------------------------------------
vox::VoxSoundPackXML::Self * vox::VoxSoundPackXML::Construct(vox::VoxSoundPackXMLInternalData::Self **self, char *a2)
{
  vox::VoxSoundPackXMLInternalData::Self *v2;

  v2 = (vox::VoxSoundPackXMLInternalData::Self *)VoxAllocInternal(
                                             0x68u,
                                             0,
                                             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                             (int)(uintptr_t)("VoxSoundPackXML"),
                                             445);
  vox::VoxSoundPackXMLInternalData::Construct(v2);
  *self = v2;
  return (vox::VoxSoundPackXML::Self *)vox::VoxSoundPackXML::LoadXML(self, a2);
}


