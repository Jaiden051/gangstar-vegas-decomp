#include "Core/Utils/DecompTypes.h"
#include "grapher_FileMonitor.h"

// ----------------------------------------------------------------------------
// Function: grapher::FileMonitor::FileChanged  (binary VA: 0x13d3490)
// Original: grapher::FileMonitor::FileChanged
// ----------------------------------------------------------------------------
int grapher::FileMonitor::FileChanged()
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  return grapher::ActorManager::Reload((grapher::ActorFile::Self ***)&unk_20D5B60);
}


