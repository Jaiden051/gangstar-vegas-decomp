#include "Core/Utils/DecompTypes.h"
#include "glwebtools_Curl.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::Curl::Construct  (binary VA: 0x1405500)
// Original: glwebtools::Curl::Curl
// ----------------------------------------------------------------------------
glwebtools::Curl::Self * glwebtools::Curl::Construct()
{
  glwebtools::Curl::Self *result;
  int v1;

  if ( __sync_fetch_and_add(&dword_2119800, 1u) != 0 )
  {
    if ( dword_2119804 == 0 )
      goto LABEL_5;
LABEL_3:
    while ( 1 )
    {
      result = *(glwebtools::Curl::Self **)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5F804)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
      _mm_mfence();
      if ( result != nullptr )
        break;
      while ( 1 )
      {
        glwebtools::Thread::Sleep((glwebtools::Thread::Self *)((char *)&dword_0 + 1));
        if ( dword_2119804 != 0 )
          break;
LABEL_5:
        result = *(glwebtools::Curl::Self **)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5F804)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
        _mm_mfence();
        if ( result == nullptr )
          return result;
        if ( dword_2119804 != 0 )
          goto LABEL_3;
      }
    }
  }
  else
  {
    while ( dword_2119804 != 0 )
      glwebtools::Thread::Sleep((glwebtools::Thread::Self *)((char *)&dword_0 + 1));
    v1 = sub_4EBE70(1u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    result = (glwebtools::Curl::Self *)curl_global_init(3);
    if ( result != nullptr )
      result = (glwebtools::Curl::Self *)curl_global_cleanup();
    if ( v1 != 0 )
    {
      dword_2119804 = v1;
    }
    else
    {
      dword_2119800 = 0;
      _mm_mfence();
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Curl::Destroy  (binary VA: 0x14055f0)
// Original: glwebtools::Curl::~Curl
// ----------------------------------------------------------------------------
void glwebtools::Curl::Destroy()
{
  int v0;
  int v1;
  int v2;

  if ( __sync_fetch_and_add(&dword_2119800, 0xFFFFFFFF) == 1 )
  {
    while ( 1 )
    {
      v0 = dword_2119804;
      if ( dword_2119804 != 0 )
        break;
      glwebtools::Thread::Sleep((glwebtools::Thread::Self *)((char *)&dword_0 + 1));
    }
    dword_2119804 = 0;
    curl_global_cleanup();
    sub_4EBEE0(v0);
  }
  else
  {
    if ( dword_2119804 == 0 )
      goto LABEL_10;
LABEL_8:
    while ( 1 )
    {
      v1 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5F804)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
      _mm_mfence();
      if ( v1 != 0 )
        break;
      while ( 1 )
      {
        glwebtools::Thread::Sleep((glwebtools::Thread::Self *)((char *)&dword_0 + 1));
        if ( dword_2119804 != 0 )
          break;
LABEL_10:
        v2 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5F804)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
        _mm_mfence();
        if ( v2 == 0 )
          return;
        if ( dword_2119804 != 0 )
          goto LABEL_8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::Curl::IsInitialized  (binary VA: 0x14056a0)
// Original: glwebtools::Curl::IsInitialized
// ----------------------------------------------------------------------------
bool glwebtools::Curl::IsInitialized()
{
  return dword_2119804 != 0;
}


