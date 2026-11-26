#include "Core/Utils/DecompTypes.h"
#include "popuplib_core.h"

// ----------------------------------------------------------------------------
// Function: g4_std::deque_PopUpsLib_PopUpsServer_J_ffe949::push_back  (binary VA: 0x1970080)
// Original: std::deque<PopUpsLib::PopUpsServer::Job *>::push_back
// ----------------------------------------------------------------------------
char * g4_std::deque_PopUpsLib_PopUpsServer_J_ffe949::push_back(void **a1, uint32_t *a2)
{
  char *result;
  char *v3;
  char *v4;
  char *v5;
  unsigned int v6;
  char *v7;
  char *v8;
  unsigned int v9;
  int v10;
  void *dest;
  int v12;
  char *v13;
  char *v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  char *v21;
  char *v22;
  void *v23;
  int v24;
  int v25;
  char *v26;
  char *src;
  int v28;

  result = (char *)a1[6];
  if ( result == (char *)a1[8] - 4 )
  {
    v4 = (char *)a1[9];
    v6 = (unsigned int)(uintptr_t)(a1[1]);
    if ( v6 - ((v4 - (char *)((uint8_t *)*a1)) >> 2) <= 1 )
    {
      v26 = (char *)a1[5];
      v28 = ((v4 - v26) >> 2) + 1;
      v19 = ((v4 - v26) >> 2) + 2;
      if ( v6 > 2 * v19 )
      {
        v16 = v4 + 4 - v26;
        v5 = (char *)*a1;
        v13 = (char *)*a1 + 4 * ((v6 - v19) >> 1);
        if ( v26 <= v13 )
        {
          v18 = v16 >> 2;
          if ( v18 != 0 )
          {
            v22 = &v5[4 * ((v6 - v19) >> 1)];
            memmove(&v13[4 * v28 + -4 * v18], v26, 4 * v18);
            v13 = v22;
          }
        }
        else
        {
          v17 = v16 >> 2;
          if ( v17 != 0 )
          {
            v21 = &v5[4 * ((v6 - v19) >> 1)];
            memmove(v13, v26, 4 * v17);
            v13 = v21;
          }
        }
      }
      else
      {
        v9 = 3;
        if ( v6 != 0 )
        {
          v9 = 2 * v6 + 2;
          if ( v9 > 0x3FFFFFFF )
            sub_18FFEE0();
        }
        v10 = opNew(4 * v9);
        dest = (void *)(v10 + 4 * ((v9 - v19) >> 1));
        src = (char *)a1[5];
        v12 = ((uint8_t *)a1[9] + 4 - (uint8_t *)(src)) >> 2;
        if ( v12 != 0 )
        {
          v23 = (void *)(v10 + 4 * ((v9 - v19) >> 1));
          v25 = v10;
          memmove(dest, src, 4 * v12);
          v10 = v25;
          dest = v23;
        }
        v20 = (char *)dest;
        v24 = v10;
        opDelete(*a1);
        a1[1] = (void *)v9;
        *a1 = (void *)v24;
        v13 = v20;
      }
      a1[5] = v13;
      v14 = *(char **)v13;
      a1[3] = *(void **)v13;
      a1[4] = v14 + 512;
      v4 = &v13[4 * v28 - 4];
      a1[9] = v4;
      v15 = *(char **)v4;
      a1[7] = *(void **)v4;
      a1[8] = v15 + 512;
    }
    *((uint32_t *)v4 + 1) = opNew(0x200u);
    v7 = (char *)a1[6];
    if ( v7 != nullptr )
      *(uint32_t *)v7 = *a2;
    v8 = (char *)a1[9] + 4;
    a1[9] = v8;
    result = *(char **)v8;
    a1[7] = *(void **)v8;
    a1[6] = result;
    a1[8] = result + 512;
  }
  else
  {
    v3 = nullptr;
    if ( result != nullptr )
    {
      *(uint32_t *)result = *a2;
      v3 = (char *)a1[6];
    }
    a1[6] = v3 + 4;
  }
  return result;
}


