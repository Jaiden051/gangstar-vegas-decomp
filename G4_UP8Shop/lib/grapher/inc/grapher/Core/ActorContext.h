// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1b9a690):
//   ../../../../../lib/grapher/inc/grapher/Core/ActorContext.h
// Referenced by 29 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x845d20 .. 0x845e9d (381 bytes)
// Symbol:               sub_845D20
// Demangled:            sub_845D20
// ============================================================================
/*
uint32_t *sub_845D20(grapher::ActorBase *a1, grapher::ActorContext *a2)
{
  char *v2;
  void *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *result;
  uint32_t *v7;
  int v8;
  void *obj;
  int v10;
  void *v11;

  grapher::ActorBase::Cancel(a1, a2);
  v2 = (char *)a1 + 52;
  sub_84BD50(a2, (char *)a1 + 52);
  v10 = *((uint32_t *)a1 + 13);
  if ( byte_20D4B60 == 0 && _cxa_guard_acquire((__guard *)&byte_20D4B60) != 0 )
  {
    sub_7B3590(v8, &unk_20D4B80, obj);
    _cxa_guard_release((__guard *)&byte_20D4B60);
    __cxa_atexit((void (*)(void *))sub_7B7D00, &unk_20D4B80, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4B84 == 0 )
    v3 = &unk_20D4B80;
  sub_78CBD0(v3, sub_78C5B0, &v10, sub_7B19E0, 0);
  v4 = *((uint32_t **)a2 + 3);
  v11 = (char *)a1 + 52;
  if ( v4 == nullptr )
    goto LABEL_12;
  v5 = (uint32_t *)((char *)a2 + 8);
  do
  {
    while ( (unsigned int)v2 <= v4[4] )
    {
      v5 = v4;
      v4 = (uint32_t *)v4[2];
      if ( v4 == nullptr )
        goto LABEL_9;
    }
    v4 = (uint32_t *)v4[3];
  }
  while ( v4 != nullptr );
LABEL_9:
  if ( v5 == (uint32_t *)((char *)a2 + 8) || (unsigned int)v2 < v5[4] )
  {
LABEL_12:
    v7 = (uint32_t *)gll_operator_new(8u, (int)"../../../../../lib/grapher/inc/grapher/Core/ActorContext.h", 193);
    *v7 = &off_205CD10;
    v7[1] = *((uint32_t *)a1 + 13);
    result = (uint32_t *)std::map<void *,grapher::ActorContext::ICVar *>::operator[](
                         (grapher::ActorContext *)((char *)a2 + 4),
                         &v11);
    *result = v7;
  }
  else
  {
    result = (uint32_t *)v5[5];
    result[1] = *((uint32_t *)a1 + 13);
  }
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x848450 .. 0x8489fa (1450 bytes)
// Symbol:               sub_848450
// Demangled:            sub_848450
// ============================================================================
/*
int sub_848450(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3)
{
  grapher::ActorVariable *Variable;
  grapher::ActorVariable *v4;
  int v5;
  void **v6;
  void *v7;
  void *v8;
  volatile int32_t *v9;
  int v10;
  glf *v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  uint32_t **v16;
  uint32_t *v17;
  uint32_t *v18;
  grapher::ActorBase *v19;
  void **v20;
  void **v21;
  char *v23;
  int v24;
  int *v25;
  uint32_t *v26;
  void *v27;
  void *v28;
  char *v29;
  grapher::ActorContext *v30;
  int v31;
  int v32;
  grapher::ActorBase *v33;
  char *v34;
  void **v35;
  __guard *v36;
  uint32_t v37[4];
  void *v38;
  glf *v39;
  uint32_t *v40;
  void *v41[2];
  uint8_t v42[12];
  uint32_t v43[14];

  v43[10] = &a1;
  v33 = a1;
  v30 = a3;
  grapher::ActorBase::GetVariable(a1, 3);
  sub_837C70(&v39);
  Variable = (grapher::ActorVariable *)grapher::ActorBase::GetVariable(v33, 0);
  v31 = sub_837200(v33, Variable, v30);
  v4 = (grapher::ActorVariable *)grapher::ActorBase::GetVariable(v33, 2);
  v32 = sub_837200(v33, v4, v30);
  v29 = (char *)v33 + 52;
  sub_84BD50(v30, (char *)v33 + 52);
  v41[0] = v41;
  v41[1] = v41;
  sub_8560A0(v33, 1, (int)v41, (int)v30, 0x7FFFFFFF);
  v5 = dword_20D67C8;
  v6 = (void **)v41[0];
  v35 = (void **)v41[0];
  *((uint32_t *)v33 + 13) = dword_20D67C8;
  dword_20D67C8 = v5 + 1;
  if ( v6 != v41 )
  {
    while ( 1 )
    {
      v7 = v6[2];
      if ( v7 != nullptr )
        break;
LABEL_30:
      v6 = (void **)*v6;
      v35 = v6;
      if ( v6 == v41 )
        goto LABEL_31;
    }
    v40 = nullptr;
    (*(void (**)(uint8_t *))(*(uint32_t *)v7 + 52))(v42);
    if ( byte_20D4B60 == 0 && _cxa_guard_acquire((__guard *)&byte_20D4B60) != 0 )
    {
      sub_7B3590(v24, &unk_20D4B80, v7);
      _cxa_guard_release((__guard *)&byte_20D4B60);
      __cxa_atexit((void (*)(void *))sub_7B7D00, &unk_20D4B80, &unk_20D1280);
    }
    v8 = nullptr;
    v28 = v7;
    if ( byte_20D4B84 == 0 )
      v8 = &unk_20D4B80;
    v27 = v8;
    sub_7B30D0(v37);
    if ( v40 != nullptr )
    {
      v9 = (uint32_t *)((char *)v40 + *(uint32_t *)(*v40 - 16));
      if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *, void *, int, uint8_t *, void *, uint32_t **, uint32_t))(*v9 + 8))(
          v9,
          v27,
          v31,
          v42,
          v28,
          &v40,
          0);
        (*(void (**)(volatile int32_t *))(*v9 + 4))(v9);
      }
    }
    v10 = v37[0];
    v36 = (__guard *)v37[0];
    if ( v37[0] != 0 )
    {
      *(uint32_t *)(v37[0] + 40) = *((uint32_t *)v33 + 13);
      if ( v32 != 666 )
        *(uint32_t *)(v10 + 92) = v32;
    }
    v11 = v39;
    if ( *((uint32_t *)v39 - 3) != 0 )
    {
      if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((__guard *)&byte_20D4AB0) != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((__guard *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
      }
      v25 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v25 = &dword_20D4AC0;
      sub_AC4FE0((vox::EmitterHandle *)v43, (int)v25, v11, 1028443341);
      vox::EmitterHandle::~EmitterHandle((vox::EmitterHandle *)v43);
      v36 = (__guard *)v37[0];
    }
    if ( v36 == nullptr )
    {
LABEL_29:
      v37[0] = 0;
      v6 = v35;
      goto LABEL_30;
    }
    v34 = (char *)v36[2];
    v12 = (char *)v36[1];
    v13 = (v34 - v12) >> 4;
    v14 = (v34 - v12) >> 2;
    if ( v13 > 0 )
    {
      if ( *(uint32_t **)v12 != v37 )
      {
        if ( *((uint32_t **)v12 + 1) == v37 )
        {
          v12 += 4;
        }
        else if ( *((uint32_t **)v12 + 2) == v37 )
        {
          v12 += 8;
        }
        else if ( *((uint32_t **)v12 + 3) == v37 )
        {
          v12 += 12;
        }
        else
        {
          do
          {
            --v13;
            v16 = (uint32_t **)(v12 + 16);
            v12 += 16;
            if ( v13 == 0 )
            {
              v14 = (v34 - v12) >> 2;
              goto LABEL_26;
            }
            if ( *v16 == v37 )
              goto LABEL_49;
            v15 = v12 + 4;
            if ( v16[1] == v37 )
              break;
            v15 = v12 + 8;
            if ( v16[2] == v37 )
              break;
            v15 = v12 + 12;
          }
          while ( v16[3] != v37 );
          v12 = v15;
        }
      }
      goto LABEL_49;
    }
LABEL_26:
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
          goto LABEL_29;
        goto LABEL_48;
      }
      if ( *(uint32_t **)v12 == v37 )
        goto LABEL_49;
      v12 += 4;
    }
    if ( *(uint32_t **)v12 != v37 )
    {
      v12 += 4;
LABEL_48:
      if ( *(uint32_t **)v12 != v37 )
        goto LABEL_29;
    }
LABEL_49:
    if ( v34 != v12 )
    {
      v23 = v12 + 4;
      if ( v34 != v12 + 4 && (v34 - v23) >> 2 != 0 )
      {
        memmove(v12, v12 + 4, 4 * ((v34 - v23) >> 2));
        v34 = (char *)v36[2];
      }
      v36[2] = (__guard)(v34 - 4);
    }
    goto LABEL_29;
  }
LABEL_31:
  v38 = (char *)v33 + 52;
  v17 = *((uint32_t **)v30 + 3);
  if ( v17 == nullptr )
    goto LABEL_63;
  v18 = (uint32_t *)((char *)v30 + 8);
  do
  {
    while ( (unsigned int)v29 <= v17[4] )
    {
      v18 = v17;
      v17 = (uint32_t *)v17[2];
      if ( v17 == nullptr )
        goto LABEL_36;
    }
    v17 = (uint32_t *)v17[3];
  }
  while ( v17 != nullptr );
LABEL_36:
  if ( (uint32_t *)((char *)v30 + 8) == v18 || (unsigned int)v29 < v18[4] )
  {
LABEL_63:
    v26 = (uint32_t *)gll_operator_new(8u, (int)"../../../../../lib/grapher/inc/grapher/Core/ActorContext.h", 193);
    *v26 = &off_205CD10;
    v26[1] = *((uint32_t *)v33 + 13);
    *(uint32_t *)std::map<void *,grapher::ActorContext::ICVar *>::operator[](
                 (grapher::ActorContext *)((char *)v30 + 4),
                 &v38) = v26;
    v19 = v33;
  }
  else
  {
    v19 = v33;
    *(uint32_t *)(v18[5] + 4) = *((uint32_t *)v33 + 13);
  }
  grapher::ActorBase::FireEvent(v19, 1, v30);
  v20 = (void **)v41[0];
  if ( v41[0] != v41 )
  {
    while ( 1 )
    {
      v21 = (void **)*v20;
      operator delete(v20);
      if ( v21 == v41 )
        break;
      v20 = v21;
    }
  }
  return std::string::~string(&v39);
}

*/

// ============================================================================
// Referencing Function: 0x849570 .. 0x849b28 (1464 bytes)
// Symbol:               sub_849570
// Demangled:            sub_849570
// ============================================================================

// ============================================================================
// Referencing Function: 0x849fa0 .. 0x84a4a0 (1280 bytes)
// Symbol:               sub_849FA0
// Demangled:            sub_849FA0
// ============================================================================

// ============================================================================
// Referencing Function: 0x84bb20 .. 0x84bcd7 (439 bytes)
// Symbol:               sub_84BB20
// Demangled:            sub_84BB20
// ============================================================================

// ============================================================================
// Referencing Function: 0x84bd50 .. 0x84beb7 (359 bytes)
// Symbol:               sub_84BD50
// Demangled:            sub_84BD50
// ============================================================================

// ============================================================================
// Referencing Function: 0x84bec0 .. 0x84bf72 (178 bytes)
// Symbol:               sub_84BEC0
// Demangled:            sub_84BEC0
// ============================================================================

// ============================================================================
// Referencing Function: 0x855910 .. 0x855b0f (511 bytes)
// Symbol:               sub_855910
// Demangled:            sub_855910
// ============================================================================

// ============================================================================
// Referencing Function: 0x858760 .. 0x858b7f (1055 bytes)
// Symbol:               sub_858760
// Demangled:            sub_858760
// ============================================================================

// ============================================================================
// Referencing Function: 0x858b80 .. 0x8590b3 (1331 bytes)
// Symbol:               sub_858B80
// Demangled:            sub_858B80
// ============================================================================

// ============================================================================
// Referencing Function: 0xc382e0 .. 0xc384c7 (487 bytes)
// Symbol:               sub_C382E0
// Demangled:            sub_C382E0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc38870 .. 0xc38a5f (495 bytes)
// Symbol:               sub_C38870
// Demangled:            sub_C38870
// ============================================================================

// ============================================================================
// Referencing Function: 0xc3d810 .. 0xc3dbd7 (967 bytes)
// Symbol:               sub_C3D810
// Demangled:            sub_C3D810
// ============================================================================

// ============================================================================
// Referencing Function: 0xc3dbe0 .. 0xc3ebd3 (4083 bytes)
// Symbol:               sub_C3DBE0
// Demangled:            sub_C3DBE0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc50c10 .. 0xc50ecc (700 bytes)
// Symbol:               sub_C50C10
// Demangled:            sub_C50C10
// ============================================================================

// ============================================================================
// Referencing Function: 0xc50f30 .. 0xc514a5 (1397 bytes)
// Symbol:               sub_C50F30
// Demangled:            sub_C50F30
// ============================================================================

// ============================================================================
// Referencing Function: 0xc519a0 .. 0xc5218b (2027 bytes)
// Symbol:               sub_C519A0
// Demangled:            sub_C519A0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc522e0 .. 0xc524e8 (520 bytes)
// Symbol:               sub_C522E0
// Demangled:            sub_C522E0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc52560 .. 0xc527d6 (630 bytes)
// Symbol:               sub_C52560
// Demangled:            sub_C52560
// ============================================================================

// ============================================================================
// Referencing Function: 0xc544e0 .. 0xc54847 (871 bytes)
// Symbol:               sub_C544E0
// Demangled:            sub_C544E0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc548a0 .. 0xc54a21 (385 bytes)
// Symbol:               sub_C548A0
// Demangled:            sub_C548A0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc54cd0 .. 0xc55349 (1657 bytes)
// Symbol:               sub_C54CD0
// Demangled:            sub_C54CD0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc55460 .. 0xc5591f (1215 bytes)
// Symbol:               sub_C55460
// Demangled:            sub_C55460
// ============================================================================

// ============================================================================
// Referencing Function: 0xc59d60 .. 0xc5a1a5 (1093 bytes)
// Symbol:               sub_C59D60
// Demangled:            sub_C59D60
// ============================================================================

// ============================================================================
// Referencing Function: 0xc5a390 .. 0xc5a54f (447 bytes)
// Symbol:               sub_C5A390
// Demangled:            sub_C5A390
// ============================================================================

// ============================================================================
// Referencing Function: 0xc5a720 .. 0xc5a7d3 (179 bytes)
// Symbol:               sub_C5A720
// Demangled:            sub_C5A720
// ============================================================================

// ============================================================================
// Referencing Function: 0x13a5160 .. 0x13a5a8a (2346 bytes)
// Symbol:               _ZN7grapher10ActorDelay6UpdateEiPNS_12ActorContextE
// Demangled:            grapher::ActorDelay::Update(int,grapher::ActorContext *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13a5a90 .. 0x13a5ff4 (1380 bytes)
// Symbol:               _ZN7grapher10ActorDelayC1Ej
// Demangled:            grapher::ActorDelay::ActorDelay(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13a6000 .. 0x13a6c2c (3116 bytes)
// Symbol:               _ZN7grapher10ActorDelay5EventEiPNS_12ActorContextE
// Demangled:            grapher::ActorDelay::Event(int,grapher::ActorContext *)
// ============================================================================
