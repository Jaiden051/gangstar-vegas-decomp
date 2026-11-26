#include "Core/Utils/DecompTypes.h"
#include "glitch__List_base_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::List_base_video_SShaderPreprocesso_7df292::M_clear  (binary VA: 0xde3900)
// Original: std::_List_base<glitch::video::SShaderPreprocessorExpansion,glitch::core::SProcessBufferAllocator<glitch::video::SShaderPreprocessorExpansion,false>>::_M_clear
// ----------------------------------------------------------------------------
void g4_std::List_base_video_SShaderPreprocesso_7df292::M_clear(std::_List_base<glitch::video::SShaderPreprocessorExpansion, glitch::core::SProcessBufferAllocator<glitch::video::SShaderPreprocessorExpansion, false>> *self)
{
  std::_List_base<glitch::video::SShaderPreprocessorExpansion, glitch::core::SProcessBufferAllocator<glitch::video::SShaderPreprocessorExpansion, false>> *v1;
  glitch::core::Self *v2;
  std::_List_base<glitch::video::SShaderPreprocessorExpansion, glitch::core::SProcessBufferAllocator<glitch::video::SShaderPreprocessorExpansion, false>> *v3;
  void *v4;

  v1 = *(std::_List_base<glitch::video::SShaderPreprocessorExpansion, glitch::core::SProcessBufferAllocator<glitch::video::SShaderPreprocessorExpansion, false>> **)self;
  if ( *(std::_List_base<glitch::video::SShaderPreprocessorExpansion, glitch::core::SProcessBufferAllocator<glitch::video::SShaderPreprocessorExpansion, false>> **)self != self )
  {
    v2 = *((glitch::core::Self **)v1 + 4);
    v3 = *(std::_List_base<glitch::video::SShaderPreprocessorExpansion, glitch::core::SProcessBufferAllocator<glitch::video::SShaderPreprocessorExpansion, false>> **)v1;
    if ( v2 != nullptr && *((uint8_t *)v1 + 20) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      *((uint32_t *)v1 + 4) = 0;
      *((uint8_t *)v1 + 20) = 0;
      glitch::core::releaseProcessBuffer(v1, v4);
      if ( v3 == self )
        break;
      v1 = v3;
      v2 = *((glitch::core::Self **)v3 + 4);
      v3 = *(std::_List_base<glitch::video::SShaderPreprocessorExpansion, glitch::core::SProcessBufferAllocator<glitch::video::SShaderPreprocessorExpansion, false>> **)v3;
      if ( v2 != nullptr && *((uint8_t *)v1 + 20) != 0 )
LABEL_7:
        glitch::core::releaseProcessBuffer(v2, v4);
    }
  }
}


