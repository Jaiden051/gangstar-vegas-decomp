#include "gameswf_StandardArraySorter.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_StandardArraySorter.cpp
// Library: gameswf | Module: gameswf_StandardArraySorter
// Binary Address Span: 0x1121320 .. 0x1121320 (1 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1121320 (size: 1653 bytes)
// Symbol:    _ZN7gameswf19StandardArraySorterclERKNS_7ASValueES3_
// Demangled: gameswf::StandardArraySorter::operator()(gameswf::ASValue const&,gameswf::ASValue const&)
// ============================================================================
char gameswf::StandardArraySorter::opCall(uint32_t *a1, gameswf::ASValue::Self *a2, gameswf::ASValue::Self *a3)
{
  char v3;
  char *v4;
  char *v5;
  char *s2;
  gameswf::String::Self *v7;
  char *v8;
  char *v9;
  char *v10;
  gameswf::String::Self *v11;
  unsigned int v12;
  char *v13;
  char *v14;
  const char *v15;
  const char *s1;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  char *v26;
  char *v27;
  const char *v28;
  const char *v29;
  int v30;
  char *v32;
  char *v33;
  char *v34;
  double v35;

  if ( (*a1 & 0x10) != 0 )
  {
    v35 = gameswf::ASValue::toNumber(a2);
    LOBYTE(v12) = (double)gameswf::ASValue::toNumber(a3) > v35;
    goto LABEL_39;
  }
  v3 = *(uint8_t *)a3;
  if ( (*a1 & 1) != 0 )
  {
    if ( v3 == 3 || v3 == 4 )
    {
      v4 = *((char **)a3 + 1);
    }
    else
    {
      v4 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 )
      {
        v20 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
        v4 = (char *)(&byte_20D6378);
        if ( v20 != 0 )
        {
          v21 = dword_20D6388;
          byte_20D6378 = 1;
          byte_20D6379 = 0;
          dword_20D6388 |= 0x7FFFFFu;
          BYTE2(dword_20D6388) &= ~0x80u;
          HIBYTE(dword_20D6388) = ((v21 | 0x7FFFFFu) >> 24) | 1;
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
          __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          v4 = (char *)(&byte_20D6378);
        }
      }
    }
    if ( *(uint8_t *)a2 == 3 || *(uint8_t *)a2 == 4 )
    {
      v5 = *((char **)a2 + 1);
    }
    else
    {
      v5 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 )
      {
        v33 = v4;
        v18 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
        v4 = v33;
        v5 = (char *)(&byte_20D6378);
        if ( v18 != 0 )
        {
          v19 = dword_20D6388;
          byte_20D6378 = 1;
          byte_20D6379 = 0;
          dword_20D6388 |= 0x7FFFFFu;
          BYTE2(dword_20D6388) &= ~0x80u;
          HIBYTE(dword_20D6388) = ((v19 | 0x7FFFFFu) >> 24) | 1;
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
          __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          v5 = (char *)(&byte_20D6378);
          v4 = v33;
        }
      }
    }
    if ( v4 != v5 )
    {
      s2 = *v4 == -1 ? *((char **)v4 + 3) : v4 + 1;
      v7 = *v5 == -1 ? *((gameswf::String::Self **)v5 + 3) : (gameswf::String::Self *)(v5 + 1);
      if ( gameswf::String::stricmp(v7, s2) != 0 )
      {
        if ( *(uint8_t *)a3 == 3 || *(uint8_t *)a3 == 4 )
        {
          v8 = *((char **)a3 + 1);
        }
        else
        {
          v8 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
            v8 = sub_111BAA0();
        }
        if ( *(uint8_t *)a2 == 3 || *(uint8_t *)a2 == 4 )
        {
          v9 = *((char **)a2 + 1);
        }
        else
        {
          v9 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
            v9 = sub_111BAA0();
        }
        if ( *v8 == -1 )
          v10 = *((char **)v8 + 3);
        else
          v10 = v8 + 1;
        if ( *v9 == -1 )
          v11 = *((gameswf::String::Self **)v9 + 3);
        else
          v11 = (gameswf::String::Self *)(v9 + 1);
        v12 = (unsigned int)gameswf::String::stricmp(v11, v10) >> 31;
        goto LABEL_39;
      }
    }
    if ( *(uint8_t *)a3 == 3 || *(uint8_t *)a3 == 4 )
    {
      v13 = *((char **)a3 + 1);
    }
    else
    {
      v13 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 )
      {
        v30 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
        v13 = (char *)(&byte_20D6378);
        if ( v30 != 0 )
          v13 = sub_111BAA0();
      }
    }
    if ( *(uint8_t *)a2 != 3 && *(uint8_t *)a2 != 4 )
    {
      v14 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 )
      {
        v32 = v13;
        v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
        v13 = v32;
        v14 = (char *)(&byte_20D6378);
        if ( v17 != 0 )
        {
          v14 = sub_111BAA0();
          v13 = v32;
        }
      }
      goto LABEL_32;
    }
  }
  else
  {
    if ( v3 == 3 || v3 == 4 )
    {
      v13 = *((char **)a3 + 1);
    }
    else
    {
      v13 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 )
      {
        v22 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
        v13 = (char *)(&byte_20D6378);
        if ( v22 != 0 )
        {
          v23 = dword_20D6388;
          byte_20D6378 = 1;
          byte_20D6379 = 0;
          dword_20D6388 |= 0x7FFFFFu;
          BYTE2(dword_20D6388) &= ~0x80u;
          HIBYTE(dword_20D6388) = ((v23 | 0x7FFFFFu) >> 24) | 1;
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
          __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          v13 = (char *)(&byte_20D6378);
        }
      }
    }
    if ( *(uint8_t *)a2 != 3 && *(uint8_t *)a2 != 4 )
    {
      v14 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 )
      {
        v34 = v13;
        v24 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
        v13 = v34;
        v14 = (char *)(&byte_20D6378);
        if ( v24 != 0 )
        {
          v25 = dword_20D6388;
          byte_20D6378 = 1;
          byte_20D6379 = 0;
          dword_20D6388 |= 0x7FFFFFu;
          BYTE2(dword_20D6388) &= ~0x80u;
          HIBYTE(dword_20D6388) = ((v25 | 0x7FFFFFu) >> 24) | 1;
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
          __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          v14 = (char *)(&byte_20D6378);
          v13 = v34;
        }
      }
      goto LABEL_32;
    }
  }
  v14 = *((char **)a2 + 1);
LABEL_32:
  if ( v13 == v14
    || (*v13 == -1 ? (v15 = *((const char **)v13 + 3)) : (v15 = v13 + 1),
        *v14 == -1 ? (s1 = *((const char **)v14 + 3)) : (s1 = v14 + 1),
        strcmp(s1, v15) == 0) )
  {
    LOBYTE(v12) = a2 < a3;
  }
  else
  {
    if ( *(uint8_t *)a3 == 3 || *(uint8_t *)a3 == 4 )
    {
      v26 = *((char **)a3 + 1);
    }
    else
    {
      v26 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
        v26 = sub_111BAA0();
    }
    if ( *(uint8_t *)a2 == 3 || *(uint8_t *)a2 == 4 )
    {
      v27 = *((char **)a2 + 1);
    }
    else
    {
      v27 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
        v27 = sub_111BAA0();
    }
    if ( *v26 == -1 )
      v28 = *((const char **)v26 + 3);
    else
      v28 = v26 + 1;
    if ( *v27 == -1 )
      v29 = *((const char **)v27 + 3);
    else
      v29 = v27 + 1;
    v12 = (unsigned int)strcmp(v29, v28) >> 31;
  }
LABEL_39:
  if ( (*(uint8_t *)a1 & 2) != 0 )
    LOBYTE(v12) = v12 ^ 1;
  return v12;
}

