#include "Core/Utils/DecompTypes.h"
#include "glwebtools_ThreadPosixImpl_Data.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPosixImpl_Data::Update  (binary VA: 0x13e9c30)
// Original: glwebtools::ThreadPosixImpl_Data::Update
// ----------------------------------------------------------------------------
int glwebtools::ThreadPosixImpl_Data::Update(glwebtools::ThreadPosixImpl_Data::Self *self)
{
  if ( self != nullptr )
    glwebtools::Thread::RunStatic(self);
  if ( AndroidOS_JavaVM != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return 0;
}


