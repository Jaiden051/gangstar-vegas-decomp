#include "Core/Utils/DecompTypes.h"
#include "gameswf_EventId.h"

// ----------------------------------------------------------------------------
// Function: gameswf::EventId::get_function_name  (binary VA: 0x106d4b0)
// Original: gameswf::EventId::get_function_name
// ----------------------------------------------------------------------------
char * gameswf::EventId::get_function_name(gameswf::EventId::Self *self)
{
  gameswf::Self *v1;
  int v3;
  int v4;
  char **v5;
  char *v6;
  const char *s;
  gameswf::Self *v8;
  int v9;
  int v10;
  uint32_t v11;
  int v12;
  gameswf::Self *v13;
  size_t v14;

  v1 = (gameswf::Self *)dword_20E2D60;
  if ( dword_20E2D64 == 0 )
  {
    if ( dword_20E2D6C != 0 )
    {
      v1 = (gameswf::Self *)dword_20E2D60;
      v4 = 0;
    }
    else
    {
      v3 = dword_20E2D68;
      dword_20E2D68 = 27;
      if ( dword_20E2D60 != 0 )
        v1 = (gameswf::Self *)gameswf::realloc_internal((gameswf::Self *)dword_20E2D60, 0x21Cu, 20 * v3);
      else
        v1 = (gameswf::Self *)gameswf::malloc_internal(0x21Cu);
      dword_20E2D60 = (int)(uintptr_t)(v1);
      v4 = dword_20E2D64;
    }
    v5 = (char **)(uintptr_t)(((uint32_t)(uintptr_t)&off_2033E60));
    while ( 1 )
    {
      v10 = v4 + 1;
      v12 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_28D74)->st_name + (uint32_t)(uintptr_t)(dword_20B9FF4));
      if ( v4 + 1 > v12 && dword_20E2D6C == 0 )
      {
        v11 = v10 + (v10 >> 1);
        *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_28D74)->st_name + (uint32_t)(uintptr_t)(dword_20B9FF4)) = v11;
        if ( v11 != 0 )
        {
          if ( v1 != nullptr )
            v1 = (gameswf::Self *)gameswf::realloc_internal(v1, 20 * v11, 20 * v12);
          else
            v1 = (gameswf::Self *)gameswf::malloc_internal(20 * v11);
          dword_20E2D60 = (int)(uintptr_t)(v1);
          v4 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_28D64)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
        }
        else
        {
          if ( v1 != nullptr )
          {
            gameswf::free_internal(v1);
            v4 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_28D64)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
          }
          dword_20E2D60 = 0;
          v1 = nullptr;
        }
      }
      v6 = (char *)v1 + 20 * v4;
      if ( v6 != nullptr )
      {
        s = *v5;
        *v6 = 1;
        v6[1] = 0;
        if ( s != nullptr )
        {
          v13 = (gameswf::Self *)s;
          v14 = strlen(s);
          gameswf::String::resize((gameswf::String::Self *)v6, v14);
          v8 = (gameswf::Self *)(v6 + 1);
          if ( *v6 == -1 )
            v8 = *((gameswf::Self **)v6 + 3);
          gameswf::Strcpy_s(v8, (char *)(v14 + 1), v13);
        }
        v9 = *((uint32_t *)v6 + 4) | 0x7FFFFF;
        *((uint32_t *)v6 + 4) = v9;
        v6[18] = BYTE2(v9) & 0x7F;
        v6[19] = HIBYTE(v9) | 1;
        v1 = (gameswf::Self *)dword_20E2D60;
      }
      ++v5;
      *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_28D64)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4)) = v10;
      if ( v5 == (char **)algn_2033ECC )
        break;
      v4 = v10;
    }
  }
  return (char *)v1 + 20 * *(uint8_t *)self;
}


