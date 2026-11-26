#include "Core/Utils/DecompTypes.h"
#include "glitch_list_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::list_collada_CRootSceneNode_S_aed553::Destroy  (binary VA: 0xd82930)
// Original: std::list<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo,glitch::core::SAllocator<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo,(glitch::memory::E_MEMORY_HINT)0>>::~list
// ----------------------------------------------------------------------------
void g4_std::list_collada_CRootSceneNode_S_aed553::Destroy(std::list<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, glitch::core::SAllocator<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, (glitch::memory::E_MEMORY_HINT)0>> *self)
{
  std::list<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, glitch::core::SAllocator<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, (glitch::memory::E_MEMORY_HINT)0>> *v1;
  uint32_t *v2;
  std::list<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, glitch::core::SAllocator<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, (glitch::memory::E_MEMORY_HINT)0>> *v3;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v4;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v5;

  v1 = *(std::list<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, glitch::core::SAllocator<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, (glitch::memory::E_MEMORY_HINT)0>> **)self;
  if ( *(std::list<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, glitch::core::SAllocator<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, (glitch::memory::E_MEMORY_HINT)0>> **)self != self )
  {
    while ( 1 )
    {
      v2 = *((uint32_t **)v1 + 3);
      v3 = *(std::list<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, glitch::core::SAllocator<glitch::collada::CRootSceneNode::SSceneNodeAliasInfo, (glitch::memory::E_MEMORY_HINT)0>> **)v1;
      if ( v2 != nullptr )
        sub_5459C0((uint32_t *)((char *)v2 + *(uint32_t *)(*v2 - 16)));
      v4 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v1 + 2);
      if ( v4 != nullptr && __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v4, v5);
      gll_operator_delete_arr((int)(uintptr_t)(v1));
      if ( v3 == self )
        break;
      v1 = v3;
    }
  }
}


