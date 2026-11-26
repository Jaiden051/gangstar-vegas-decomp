#include "Core/Utils/DecompTypes.h"
#include "vox_VoxCallbackManager.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxCallbackManager::Destroy  (binary VA: 0x10355a0)
// Original: vox::VoxCallbackManager::~VoxCallbackManager
// ----------------------------------------------------------------------------
void vox::VoxCallbackManager::Destroy(vox::VoxCallbackManager::Self *self)
{
  vox::VoxCallbackManager::Self *v1;
  vox::VoxCallbackManager::Self *v2;
  void (***v3)(uint32_t);

  while ( 1 )
  {
    v1 = *(vox::VoxCallbackManager::Self **)self;
    if ( self == *(vox::VoxCallbackManager::Self **)self )
      break;
    while ( 1 )
    {
      v2 = v1;
      do
        v2 = *(vox::VoxCallbackManager::Self **)v2;
      while ( self != v2 );
      v3 = *((void (****)(uint32_t))v1 + 2);
      sub_1901940(v1);
      VoxFreeInternal(v1);
      if ( v3 == nullptr )
        break;
      (**v3)((uint32_t)(uintptr_t)(v3));
      VoxFreeInternal(v3);
      v1 = *(vox::VoxCallbackManager::Self **)self;
      if ( self == *(vox::VoxCallbackManager::Self **)self )
        return;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxCallbackManager::Add  (binary VA: 0x1035600)
// Original: vox::VoxCallbackManager::Add
// ----------------------------------------------------------------------------
void vox::VoxCallbackManager::Add(vox::VoxCallbackManager::Self *self, vox::VoxCallback::Self *a2)
{
  int v2;

  if ( a2 != nullptr )
  {
    v2 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v2 != -8 )
      *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
    sub_1901920(v2, self);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxCallbackManager::SendAll  (binary VA: 0x1035680)
// Original: vox::VoxCallbackManager::SendAll
// ----------------------------------------------------------------------------
void vox::VoxCallbackManager::SendAll(vox::VoxCallbackManager::Self *self)
{
  vox::VoxCallbackManager::Self *i;
  vox::VoxCallbackManager::Self *v2;
  void *v3;

  for ( i = *(vox::VoxCallbackManager::Self **)self;
        self != *(vox::VoxCallbackManager::Self **)self;
        i = *(vox::VoxCallbackManager::Self **)self )
  {
    v2 = i;
    do
      v2 = *(vox::VoxCallbackManager::Self **)v2;
    while ( self != v2 );
    v3 = *((void **)i + 2);
    sub_1901940(i);
    VoxFreeInternal(i);
    G4_VCALL<void>(v3, 8);
    (**(void (***)(void *))v3)(v3);
    VoxFreeInternal(v3);
  }
}


