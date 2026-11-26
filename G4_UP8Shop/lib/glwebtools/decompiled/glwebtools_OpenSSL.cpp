#include "Core/Utils/DecompTypes.h"
#include "glwebtools_OpenSSL.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::OpenSSL::Construct  (binary VA: 0x13e5dc0)
// Original: glwebtools::OpenSSL::OpenSSL
// ----------------------------------------------------------------------------
glwebtools::OpenSSL::Self * glwebtools::OpenSSL::Construct()
{
  glwebtools::OpenSSL::Self *result;
  int *v1;
  int *v2;
  int v3;
  glwebtools::Mutex::Self *v4;
  glwebtools::Mutex::Self **v5;
  unsigned int v6;
  glwebtools::Mutex::Self **v7;
  int v8;
  glwebtools::Mutex::Self **v9;
  glwebtools::Mutex::Self **v10;
  char *v11;
  glwebtools::Mutex::Self **v12;
  uint32_t *v13;
  int v14;
  int v15;
  unsigned int v16;
  void (***v17)(uint32_t);
  int v18;
  unsigned int v19;
  int v20;
  int i;
  size_t v22;
  int v23;
  unsigned int v24;

  if ( __sync_fetch_and_add(&dword_2119770, 1u) != 0 )
  {
    if ( dword_2119774 == 0 )
      goto LABEL_5;
LABEL_3:
    while ( 1 )
    {
      result = *(glwebtools::OpenSSL::Self **)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5F774)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
      _mm_mfence();
      if ( result != nullptr )
        break;
      while ( 1 )
      {
        glwebtools::Thread::Sleep((glwebtools::Thread::Self *)((char *)&dword_0 + 1), v19);
        if ( dword_2119774 != 0 )
          break;
LABEL_5:
        result = *(glwebtools::OpenSSL::Self **)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5F774)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
        _mm_mfence();
        if ( result == nullptr )
          return result;
        if ( dword_2119774 != 0 )
          goto LABEL_3;
        if ( CRYPTO_get_locking_callback() != 0 )
        {
          result = *(glwebtools::OpenSSL::Self **)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5F774)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
          _mm_mfence();
          if ( result != nullptr )
            return result;
        }
      }
    }
  }
  else
  {
    while ( dword_2119774 != 0 )
      glwebtools::Thread::Sleep((glwebtools::Thread::Self *)((char *)&dword_0 + 1), v19);
    result = (glwebtools::OpenSSL::Self *)CRYPTO_get_locking_callback();
    if ( result == nullptr )
    {
      v1 = (int *)sub_4EBE70(0xCu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      *v1 = 0;
      v1[1] = 0;
      v1[2] = 0;
      v2 = v1;
      if ( CRYPTO_get_locking_callback() == 0 || (unsigned int)(v2[1] - *v2) >> 2 == 0 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= CRYPTO_num_locks() )
          {
            CRYPTO_set_id_callback(sub_13E5CB0);
            CRYPTO_set_locking_callback(sub_13E5CD0);
            goto LABEL_42;
          }
          v4 = (glwebtools::Mutex::Self *)sub_4EBE70(8u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
          glwebtools::Mutex::Construct(v4);
          if ( v4 == nullptr )
            break;
          v5 = (glwebtools::Mutex::Self **)v2[1];
          if ( v5 == (glwebtools::Mutex::Self **)v2[2] )
          {
            v6 = ((int)(uintptr_t)(v5) - *v2) >> 2;
            v22 = 4;
            if ( v6 != 0 )
            {
              v22 = 0xFFFFFFFC;
              if ( v6 <= 2 * v6 )
              {
                v18 = 8 * v6;
                if ( 2 * v6 > 0x3FFFFFFF )
                  v18 = -4;
                v22 = v18;
              }
            }
            v20 = ((int)(uintptr_t)(v5) - *v2) >> 2;
            v23 = sub_4EBE70(v22, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            v24 = v23 + 4;
            v7 = (glwebtools::Mutex::Self **)(v23 + 4 * v20);
            if ( v7 != nullptr )
              *v7 = v4;
            v8 = *v2;
            if ( v5 != (glwebtools::Mutex::Self **)*v2 )
            {
              v9 = (glwebtools::Mutex::Self **)*v2;
              v10 = (glwebtools::Mutex::Self **)v23;
              do
              {
                if ( v10 != nullptr )
                  *v10 = *v9;
                ++v9;
                ++v10;
              }
              while ( v5 != v9 );
              v24 = v23 + 4 * (((unsigned int)(uintptr_t)(v5) - v8 - 4) >> 2) + 8;
            }
            v11 = (char *)v2[1];
            if ( v5 != (glwebtools::Mutex::Self **)v11 )
            {
              v12 = v5;
              v13 = (uint32_t *)v24;
              do
              {
                if ( v13 != nullptr )
                  *v13 = (uint32_t)(uintptr_t)(*v12);
                ++v12;
                ++v13;
              }
              while ( v11 != (char *)v12 );
              v24 += 4 * ((unsigned int)(v11 - (char *)(v5 + 1)) >> 2) + 4;
            }
            if ( *v2 != 0 )
              sub_4EBEE0(*v2);
            *v2 = v23;
            v2[1] = v24;
            v2[2] = v22 + v23;
          }
          else
          {
            v3 = 0;
            if ( v5 != nullptr )
            {
              *v5 = v4;
              v3 = v2[1];
            }
            v2[1] = v3 + 4;
          }
        }
        if ( CRYPTO_get_locking_callback() != 0 && (unsigned int)(v2[1] - *v2) >> 2 != 0 )
        {
          CRYPTO_set_id_callback(0);
          CRYPTO_set_locking_callback(0);
          v14 = v2[1];
          v15 = *v2;
          if ( (unsigned int)(v14 - *v2) >> 2 != 0 )
          {
            v16 = 0;
            do
            {
              v17 = *(void (****)(uint32_t))(v15 + 4 * v16);
              if ( v17 != nullptr )
              {
                (**v17)((uint32_t)(uintptr_t)(v17));
                sub_4EBEE0(*(uint32_t *)(*v2 + 4 * v16));
                v15 = *v2;
                v14 = v2[1];
              }
              ++v16;
            }
            while ( v16 < (v14 - v15) >> 2 );
          }
          v2[1] = v15;
        }
      }
LABEL_42:
      if ( CRYPTO_get_locking_callback() != 0
        && (result = (glwebtools::OpenSSL::Self *)((unsigned int)(v2[1] - *v2) >> 2)) != nullptr )
      {
        dword_2119774 = (int)(uintptr_t)(v2);
      }
      else
      {
        sub_13E5D20(v2);
        result = (glwebtools::OpenSSL::Self *)sub_4EBEE0((int)(uintptr_t)(v2));
        dword_2119770 = 0;
        _mm_mfence();
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::OpenSSL::Destroy  (binary VA: 0x13e6130)
// Original: glwebtools::OpenSSL::~OpenSSL
// ----------------------------------------------------------------------------
void glwebtools::OpenSSL::Destroy()
{
  int *v0;
  int v1;
  int v2;
  unsigned int v3;

  if ( __sync_fetch_and_add(&dword_2119770, 0xFFFFFFFF) == 1 )
  {
    v0 = (int *)dword_2119774;
    if ( dword_2119774 != 0 )
      goto LABEL_3;
    while ( CRYPTO_get_locking_callback() == 0 )
    {
      glwebtools::Thread::Sleep((glwebtools::Thread::Self *)((char *)&dword_0 + 1), v3);
      v0 = (int *)dword_2119774;
      if ( dword_2119774 != 0 )
        goto LABEL_3;
    }
    v0 = (int *)dword_2119774;
    if ( dword_2119774 != 0 )
    {
LABEL_3:
      dword_2119774 = 0;
      sub_13E5D20(v0);
      sub_4EBEE0((int)(uintptr_t)(v0));
    }
  }
  else
  {
    if ( dword_2119774 == 0 )
      goto LABEL_8;
LABEL_6:
    while ( 1 )
    {
      v1 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5F774)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
      _mm_mfence();
      if ( v1 != 0 )
        break;
      while ( 1 )
      {
        glwebtools::Thread::Sleep((glwebtools::Thread::Self *)((char *)&dword_0 + 1), v3);
        if ( dword_2119774 != 0 )
          break;
LABEL_8:
        v2 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_5F774)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
        _mm_mfence();
        if ( v2 == 0 )
          return;
        if ( dword_2119774 != 0 || CRYPTO_get_locking_callback() != 0 )
          goto LABEL_6;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::OpenSSL::IsInitialized  (binary VA: 0x13e6220)
// Original: glwebtools::OpenSSL::IsInitialized
// ----------------------------------------------------------------------------
bool glwebtools::OpenSSL::IsInitialized()
{
  bool result;

  result = true;
  if ( dword_2119774 == 0 )
    return CRYPTO_get_locking_callback() != 0;
  return result;
}


