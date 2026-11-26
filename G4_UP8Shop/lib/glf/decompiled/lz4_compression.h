#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/lz4_compression.h
// Library: glf | Module: lz4_compression
// Binary Address Span: 0xcc73d0 .. 0xcc8750 (34 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcc73d0] (12 bytes) LZ4_versionNumber
// int LZ4_versionNumber();
// [0xcc73e0] (40 bytes) LZ4_compressBound
// int LZ4_compressBound(unsigned int a1);
// [0xcc7410] (210 bytes) LZ4_compress
// int LZ4_compress(char *a1, uint8_t *a2, int a3);
// [0xcc74f0] (210 bytes) LZ4_compress_limitedOutput
// int LZ4_compress_limitedOutput(char *a1, uint8_t *a2, int a3, unsigned int a4);
// [0xcc75d0] (50 bytes) LZ4_resetStream
// void *LZ4_resetStream(void *s);
// [0xcc7610] (68 bytes) LZ4_createStream
// void *LZ4_createStream();
// [0xcc7660] (36 bytes) LZ4_freeStream
// int LZ4_freeStream(void *ptr);
// [0xcc7690] (197 bytes) LZ4_loadDict
// unsigned int LZ4_loadDict(void *a1, unsigned int a2, int a3);
// [0xcc7760] (553 bytes) LZ4_compress_continue
// int LZ4_compress_continue(uint32_t *a1, char *a2, uint8_t *a3, int a4);
// [0xcc7990] (669 bytes) LZ4_compress_limitedOutput_continue
// int LZ4_compress_limitedOutput_continue(uint32_t *a1, char *a2, uint8_t *a3, int a4, unsigned int a5);
// [0xcc7c30] (252 bytes) LZ4_compress_forceExtDict
// int LZ4_compress_forceExtDict(uint32_t *a1, char *a2, uint8_t *a3, int a4);
// [0xcc7d30] (148 bytes) LZ4_saveDict
// size_t LZ4_saveDict(int a1, void *dest, size_t a3);
// [0xcc7dd0] (89 bytes) LZ4_decompress_safe
// int LZ4_decompress_safe(uint8_t *a1, char *src, int a3, int a4);
// [0xcc7e30] (89 bytes) LZ4_decompress_safe_partial
// int LZ4_decompress_safe_partial(uint8_t *a1, char *src, int a3, int a4, int a5);
// [0xcc7e90] (95 bytes) LZ4_decompress_fast
// int LZ4_decompress_fast(uint8_t *a1, unsigned int a2, int a3);
// [0xcc7ef0] (42 bytes) LZ4_createStreamDecode
// void *LZ4_createStreamDecode();
// [0xcc7f20] (36 bytes) LZ4_freeStreamDecode
// int LZ4_freeStreamDecode(void *ptr);
// [0xcc7f50] (37 bytes) LZ4_setStreamDecode
// int LZ4_setStreamDecode(uint32_t *a1, int a2, int a3);
// [0xcc7f80] (226 bytes) LZ4_decompress_safe_continue
// int LZ4_decompress_safe_continue(int *a1, uint8_t *a2, char *src, int a4, int a5);
// [0xcc8070] (226 bytes) LZ4_decompress_fast_continue
// int LZ4_decompress_fast_continue(int *a1, uint8_t *a2, char *src, int a4);
// [0xcc8160] (266 bytes) LZ4_decompress_safe_usingDict
// int LZ4_decompress_safe_usingDict(uint8_t *a1, char *a2, int a3, int a4, int a5, int a6);
// [0xcc8270] (237 bytes) LZ4_decompress_fast_usingDict
// int LZ4_decompress_fast_usingDict(uint8_t *a1, char *src, int a3, int a4, int a5);
// [0xcc8360] (89 bytes) LZ4_decompress_safe_forceExtDict
// int LZ4_decompress_safe_forceExtDict(uint8_t *a1, char *src, int a3, int a4, int a5, unsigned int a6);
// [0xcc83c0] (50 bytes) LZ4_uncompress
// int LZ4_uncompress(uint8_t *a1, unsigned int a2, int a3);
// [0xcc8400] (58 bytes) LZ4_uncompress_unknownOutputSize
// int LZ4_uncompress_unknownOutputSize(uint8_t *a1, char *a2, int a3, int a4);
// [0xcc8440] (12 bytes) LZ4_sizeofStreamState
// int LZ4_sizeofStreamState();
// [0xcc8450] (89 bytes) LZ4_resetStreamState
// int LZ4_resetStreamState(void *s, int a2);
// [0xcc84b0] (94 bytes) LZ4_create
// uint32_t *LZ4_create(int a1);
// [0xcc8510] (72 bytes) LZ4_slideInputBuffer
// size_t LZ4_slideInputBuffer(int a1);
// [0xcc8560] (12 bytes) LZ4_sizeofState
// int LZ4_sizeofState();
// [0xcc8570] (186 bytes) LZ4_compress_withState
// int LZ4_compress_withState(uint32_t *s, char *a2, uint8_t *a3, int a4);
// [0xcc8630] (186 bytes) LZ4_compress_limitedOutput_withState
// int LZ4_compress_limitedOutput_withState(uint32_t *s, char *a2, uint8_t *a3, int a4, unsigned int a5);
// [0xcc86f0] (95 bytes) LZ4_decompress_safe_withPrefix64k
// int LZ4_decompress_safe_withPrefix64k(uint8_t *a1, unsigned int a2, int a3, int a4);
// [0xcc8750] (95 bytes) LZ4_decompress_fast_withPrefix64k
// int LZ4_decompress_fast_withPrefix64k(uint8_t *a1, unsigned int a2, int a3);
