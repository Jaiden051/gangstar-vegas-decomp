#include "Core/Utils/DecompTypes.h"
#include "iap_TransactionInfoExtended.h"

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoExtended::ToString  (binary VA: 0x1502340)
// Original: iap::TransactionInfoExtended::ToString
// ----------------------------------------------------------------------------
iap::TransactionInfoExtended::Self * iap::TransactionInfoExtended::ToString(iap::TransactionInfoExtended::Self *self, int a2)
{
  uint8_t v3[32];

  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v3);
  G4_VCALL<void>(a2, 12, v3);
  glwebtools::JsonWriter::ToString(self, (glwebtools::JsonWriter::Self *)v3);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoExtended::Destroy  (binary VA: 0x15025c0)
// Original: iap::TransactionInfoExtended::~TransactionInfoExtended
// ----------------------------------------------------------------------------
void iap::TransactionInfoExtended::Destroy(iap::TransactionInfoExtended::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20960C8);
  v1 = *((uint32_t **)self + 16);
  v5 = *((uint32_t **)self + 17);
  if ( v5 != v1 )
  {
    v2 = *((uint32_t **)self + 16);
    do
    {
      v3 = v2[1];
      if ( (uint32_t *)(v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
      v4 = (uint32_t *)(*v2 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v2 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      v2 += 2;
    }
    while ( v5 != v2 );
    v1 = *((uint32_t **)self + 16);
  }
  if ( v1 != nullptr )
    opDelete(v1);
  iap::TransactionInfo::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoExtended::Destroy_ea1502690  (binary VA: 0x1502690)
// Original: iap::TransactionInfoExtended::~TransactionInfoExtended
// ----------------------------------------------------------------------------
void iap::TransactionInfoExtended::Destroy_ea1502690(iap::TransactionInfoExtended::Self *self)
{
  iap::TransactionInfoExtended::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoExtended::read  (binary VA: 0x1503ca0)
// Original: iap::TransactionInfoExtended::read
// ----------------------------------------------------------------------------
int iap::TransactionInfoExtended::read(iap::TransactionInfoExtended::Self *self, const glwebtools::JsonReader::Self *a2)
{
  int v2;

  v2 = iap::TransactionInfo::read(self, a2);
  if ( v2 == 0 )
    glwebtools::JsonReader::exclude(
      a2,
      (const char **)iap::TransactionInfo::s_fields,
      (const char **)algn_20C69F8,
      (iap::TransactionInfoExtended::Self *)((char *)self + 64));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::TransactionInfoExtended::write  (binary VA: 0x15053d0)
// Original: iap::TransactionInfoExtended::write
// ----------------------------------------------------------------------------
int iap::TransactionInfoExtended::write(iap::TransactionInfoExtended::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;

  v2 = iap::TransactionInfo::write(self, a2);
  if ( v2 == 0 )
    glwebtools::JsonWriter::write(a2, (iap::TransactionInfoExtended::Self *)((char *)self + 64));
  return v2;
}


