// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd2924):
//   ../../../../../lib/vox/include/MSHeaders.h
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0xfe6860 .. 0xfe6d9b (1339 bytes)
// Symbol:               _ZN3vox18DecoderMSWavCursor9ParseFileEv
// Demangled:            vox::DecoderMSWavCursor::ParseFile(void)
// ============================================================================
/*
int vox::DecoderMSWavCursor::ParseFile(vox::DecoderMSWavCursor *this)
{
  int v1;
  int v2;
  int v3;
  vox::DecoderMSWavCursor *v4;
  char v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int **i;
  int *v19;
  vox::DecoderMSWavCursor *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  vox::VoxThread *v25;
  vox::DecoderMSWavCursor *v26;
  vox::DecoderMSWavCursor *v27;
  vox::DecoderMSWavCursor *v28;
  int v29;
  int v30;
  int CurThreadId;
  char v32;
  int v33;
  uint32_t src[7];

  v1 = 0;
  CurThreadId = vox::VoxThread::GetCurThreadId(v25);
  sub_BA06A0("DecoderMSWavCursor::ParseFile", CurThreadId);
  v2 = *((uint32_t *)this + 6);
  if ( v2 != 0 )
  {
    v30 = (*(int (**)(uint32_t))(*(uint32_t *)v2 + 24))(*((uint32_t *)this + 6));
    v3 = (*(int (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)this + 6) + 16))(*((uint32_t *)this + 6), 0, 0);
    v4 = this;
    if ( v3 >= 0 )
    {
      v32 = 0;
      v33 = 12;
      while ( 1 )
      {
        v26 = v4;
        v5 = (*(int (**)(uint32_t))(**((uint32_t **)v4 + 6) + 36))(*((uint32_t *)v4 + 6));
        v4 = v26;
        if ( v5 != 0 )
          break;
        v6 = (*(int (**)(uint32_t))(**((uint32_t **)v26 + 6) + 24))(*((uint32_t *)v26 + 6));
        v7 = v6;
        v4 = v26;
        if ( v6 < 0 )
          goto LABEL_26;
        if ( (v6 & 1) != 0 )
        {
          v11 = (*(int (**)(uint32_t, int, int))(**((uint32_t **)v26 + 6) + 16))(*((uint32_t *)v26 + 6), 1, 1);
          v4 = v26;
          if ( v11 < 0 )
            goto LABEL_26;
          ++v7;
        }
        if ( v33 <= v7 )
          break;
        v27 = v4;
        v8 = (*(int (**)(uint32_t, uint32_t *, int))(**((uint32_t **)v4 + 6) + 28))(*((uint32_t *)v4 + 6), src, 8);
        v4 = v27;
        if ( v8 != 8 )
          break;
        if ( memcmp(src, "RIFF", 4u) == 0 )
        {
          strncpy(*((char **)v27 + 8), (const char *)src, 4u);
          *(uint32_t *)(*((uint32_t *)v27 + 8) + 4) = src[1];
          (*(void (**)(uint32_t, int, int))(**((uint32_t **)v27 + 6) + 28))(
            *((uint32_t *)v27 + 6),
            *((uint32_t *)v27 + 8) + 8,
            4);
          v33 = src[1] + 8;
          if ( v33 > (*(int (**)(uint32_t))(**((uint32_t **)v27 + 6) + 44))(*((uint32_t *)v27 + 6)) )
            goto LABEL_26;
          (*(void (**)(uint32_t))(**((uint32_t **)v27 + 6) + 44))(*((uint32_t *)v27 + 6));
          v32 = 1;
          v4 = v27;
        }
        else
        {
          if ( memcmp(src, "fmt ", 4u) == 0 )
          {
            strncpy((char *)(*((uint32_t *)v27 + 8) + 12), (const char *)src, 4u);
            *(uint32_t *)(*((uint32_t *)v27 + 8) + 16) = src[1];
            (*(void (**)(uint32_t, int, int))(**((uint32_t **)v27 + 6) + 28))(
              *((uint32_t *)v27 + 6),
              *((uint32_t *)v27 + 8) + 20,
              16);
            v4 = v27;
            if ( src[1] < 0
              || (unsigned int)((v12 = *(uint32_t *)(*((uint32_t *)v27 + 8) + 16)) + 8) > 0x18
              && (v13 = (*(int (**)(uint32_t, int, int))(**((uint32_t **)v27 + 6) + 16))(
                          *((uint32_t *)v27 + 6),
                          v12 - 16,
                          1),
                  v4 = v27,
                  v13 < 0) )
            {
LABEL_26:
              v1 = 0;
              goto LABEL_18;
            }
          }
          else if ( memcmp(src, "fact", 4u) == 0 )
          {
            strncpy((char *)(*((uint32_t *)v27 + 8) + 44), (const char *)src, 4u);
            *(uint32_t *)(*((uint32_t *)v27 + 8) + 48) = src[1];
            (*(void (**)(uint32_t, int, int))(**((uint32_t **)v27 + 6) + 28))(
              *((uint32_t *)v27 + 6),
              *((uint32_t *)v27 + 8) + 52,
              4);
            v4 = v27;
          }
          else if ( memcmp(src, "data", 4u) == 0 )
          {
            strncpy((char *)(*((uint32_t *)v27 + 8) + 36), (const char *)src, 4u);
            *(uint32_t *)(*((uint32_t *)v27 + 8) + 40) = src[1];
            v14 = *((uint32_t *)v27 + 8);
            if ( *(uint32_t *)(v14 + 60) != 0 )
            {
              v15 = *(uint32_t *)(v14 + 40);
              v29 = (*(int (**)(uint32_t))(**((uint32_t **)v27 + 6) + 24))(*((uint32_t *)v27 + 6)) - 8;
              v16 = *(uint32_t *)(*((uint32_t *)v27 + 8) + 60);
              v17 = *(uint32_t *)(v16 + 8);
              for ( i = (int **)(v16 + 8); v17 != 0; v17 = *(uint32_t *)(v17 + 8) )
                i = (int **)(v17 + 8);
              v19 = (int *)VoxAllocInternal(
                             0xCu,
                             0,
                             (int)"../../../../../lib/vox/include/MSHeaders.h",
                             (int)"AddNode",
                             153);
              v19[1] = v15;
              *v19 = v29;
              v19[2] = 0;
              *i = v19;
              v20 = v27;
            }
            else
            {
              v22 = (*(int (**)(uint32_t))(**((uint32_t **)v27 + 6) + 24))(*((uint32_t *)v27 + 6));
              v23 = (uint32_t *)VoxAllocInternal(
                                0xCu,
                                0,
                                (int)"F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mswav.cpp",
                                (int)"ParseFile",
                                387);
              v20 = v27;
              v24 = *(uint32_t *)(*((uint32_t *)v27 + 8) + 40);
              *v23 = v22 - 8;
              v23[1] = v24;
              v23[2] = 0;
              *(uint32_t *)(*((uint32_t *)v27 + 8) + 60) = v23;
              if ( *(uint32_t *)(*((uint32_t *)v27 + 8) + 60) == 0 )
              {
                v1 = 0;
                goto LABEL_18;
              }
            }
            if ( src[1] < 0 )
              goto LABEL_26;
            v28 = v20;
            v21 = (*(int (**)(uint32_t, uint32_t, int))(**((uint32_t **)v20 + 6) + 16))(
                    *((uint32_t *)v20 + 6),
                    *(uint32_t *)(*((uint32_t *)v20 + 8) + 40),
                    1);
            v4 = v28;
            if ( v21 < 0 )
            {
              v1 = 0;
              goto LABEL_18;
            }
          }
          else
          {
            if ( src[1] < 0 )
              goto LABEL_26;
            v9 = (*(int (**)(uint32_t, uint32_t, int))(**((uint32_t **)v27 + 6) + 16))(
                   *((uint32_t *)v27 + 6),
                   src[1],
                   1);
            v4 = v27;
            if ( v9 < 0 )
              goto LABEL_26;
          }
          if ( v32 == 0 )
            break;
        }
      }
      v1 = 0;
      if ( *(uint32_t *)(*((uint32_t *)v4 + 8) + 60) != 0 )
      {
        v1 = 1;
        (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)v4 + 6) + 16))(*((uint32_t *)v4 + 6), v30, 0);
      }
    }
  }
LABEL_18:
  sub_BA06B0("DecoderMSWavCursor::ParseFile", CurThreadId);
  return v1;
}

*/
