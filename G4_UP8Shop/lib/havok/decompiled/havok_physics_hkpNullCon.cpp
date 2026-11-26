#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpNullCon.h"

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgr::addContactPointImpl  (binary VA: 0x17331c0)
// Original: hkpNullContactMgr::addContactPointImpl
// ----------------------------------------------------------------------------
int hkpNullContactMgr::addContactPointImpl()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgr::removeContactPointImpl  (binary VA: 0x17331d0)
// Original: hkpNullContactMgr::removeContactPointImpl
// ----------------------------------------------------------------------------
void hkpNullContactMgr::removeContactPointImpl()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgr::processContactImpl  (binary VA: 0x17331e0)
// Original: hkpNullContactMgr::processContactImpl
// ----------------------------------------------------------------------------
void hkpNullContactMgr::processContactImpl()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgr::addToiImpl  (binary VA: 0x17331f0)
// Original: hkpNullContactMgr::addToiImpl
// ----------------------------------------------------------------------------
int hkpNullContactMgr::addToiImpl()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgr::removeToiImpl  (binary VA: 0x1733200)
// Original: hkpNullContactMgr::removeToiImpl
// ----------------------------------------------------------------------------
void hkpNullContactMgr::removeToiImpl()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgr::reserveContactPointsImpl  (binary VA: 0x1733210)
// Original: hkpNullContactMgr::reserveContactPointsImpl
// ----------------------------------------------------------------------------
hkpNullContactMgr::Self * hkpNullContactMgr::reserveContactPointsImpl(hkpNullContactMgr::Self *self, int a2)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgr::cleanup  (binary VA: 0x1733220)
// Original: hkpNullContactMgr::cleanup
// ----------------------------------------------------------------------------
void hkpNullContactMgr::cleanup()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgrFactory::createContactMgr  (binary VA: 0x1733250)
// Original: hkpNullContactMgrFactory::createContactMgr
// ----------------------------------------------------------------------------
int hkpNullContactMgrFactory::createContactMgr(int a1)
{
  return a1 + 8;
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgrFactory::Destroy  (binary VA: 0x1733280)
// Original: hkpNullContactMgrFactory::~hkpNullContactMgrFactory
// ----------------------------------------------------------------------------
void hkpNullContactMgrFactory::Destroy(hkpNullContactMgrFactory::Self *self)
{
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_2054CB8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgr::Destroy  (binary VA: 0x17332a0)
// Original: hkpNullContactMgr::~hkpNullContactMgr
// ----------------------------------------------------------------------------
void hkpNullContactMgr::Destroy(hkpNullContactMgr::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgr::Destroy_ea17333f0  (binary VA: 0x17333f0)
// Original: hkpNullContactMgr::~hkpNullContactMgr
// ----------------------------------------------------------------------------
void hkpNullContactMgr::Destroy_ea17333f0(hkpNullContactMgr::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpNullContactMgrFactory::Destroy_ea1733450  (binary VA: 0x1733450)
// Original: hkpNullContactMgrFactory::~hkpNullContactMgrFactory
// ----------------------------------------------------------------------------
void hkpNullContactMgrFactory::Destroy_ea1733450(hkpNullContactMgrFactory::Self *self)
{
  int v1;
  int v2;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_2054CB8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}


