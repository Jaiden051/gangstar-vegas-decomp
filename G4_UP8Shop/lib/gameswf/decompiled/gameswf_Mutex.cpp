#include "Core/Utils/DecompTypes.h"
#include "gameswf_Mutex.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Mutex::Destroy  (binary VA: 0x10d5140)
// Original: gameswf::Mutex::~Mutex
// ----------------------------------------------------------------------------
void gameswf::Mutex::Destroy(pthread_mutex_t **self)
{
  glf::Mutex::Destroy(self);
}


