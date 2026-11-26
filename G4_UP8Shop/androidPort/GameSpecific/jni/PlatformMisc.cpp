#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: PlatformMisc.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (443 funcs)
// ============================================================================
#include "PlatformMisc.h"
#include "../../../sources/Core/Memory/GameAllocator.h"
extern "C" AAssetManager *AAssetManager_fromJava(void *env, void *assetManager);
static uintptr_t g4_dummy_STACK[1024] = {0};
#define STACK g4_dummy_STACK

static uint8_t _g4_dummy_file_buf[16] = {0};
static inline int __swbuf(int c, FILE *fp) { return ::fputc(c, fp); }
static const int zip_err_type[24] = {0};
static char * const zip_err_str[24] = {
  const_cast<char *>("No error"), const_cast<char *>("Multi-disk zip archives not supported"),
  const_cast<char *>("Renaming temporary file failed"), const_cast<char *>("Closing zip archive failed"),
  const_cast<char *>("Seek error"), const_cast<char *>("Read error"), const_cast<char *>("Write error"),
  const_cast<char *>("CRC error"), const_cast<char *>("Containing zip archive was closed"),
  const_cast<char *>("No such file"), const_cast<char *>("File already exists"),
  const_cast<char *>("Can't open file"), const_cast<char *>("Failure to create temporary file"),
  const_cast<char *>("Zlib error"), const_cast<char *>("Malloc failure"),
  const_cast<char *>("Entry has been changed"), const_cast<char *>("Compression method not supported"),
  const_cast<char *>("Premature EOF"), const_cast<char *>("Invalid argument"),
  const_cast<char *>("Not a zip archive"), const_cast<char *>("Internal error"),
  const_cast<char *>("Zip archive inconsistent"), const_cast<char *>("Can't remove file"),
  const_cast<char *>("Deleted entry has been overwritten")
};
extern uint64_t g4_gdrm_dataValues[9];
extern uint32_t *g4_lockPointer2;
extern uint32_t *g4_lockPointer3;
#define dataValues g4_gdrm_dataValues
#define lockPointer2 g4_lockPointer2
#define lockPointer3 g4_lockPointer3
static uintptr_t g4_local_20D0F54[8] = {0};
static uintptr_t g4_local_20D0F34[8] = {0};
#define dword_20D0F54 g4_local_20D0F54
#define dword_20D0F34 g4_local_20D0F34
static inline int drmDebugLog(const char *msg) { (void)msg; ::drmDebugLog(); return 0; }
int zip_replace(uint32_t *a1, int a2, char *a3, int a4);
uint32_t *zip_error_set(uint32_t *a1, int a2, int a3);
template <typename P, typename C, typename S,
          typename std::enable_if<!(std::is_same<P, uint32_t *>::value && std::is_convertible<C, int>::value && std::is_convertible<S, int>::value), int>::type = 0>
static inline uint32_t *zip_error_set(P p, C code, S sys) { return ::zip_error_set((uint32_t *)(uintptr_t)p, (int)(uintptr_t)code, (int)(uintptr_t)sys); }
static inline int _g4_pair_vec_insert_aux(int *vec, int pos, void *item) { (void)vec; (void)pos; (void)item; return 0; }

// ----------------------------------------------------------------------------
// Function: JNIEnv::NewObject  (binary VA: 0x4bde90)
// Original: _JNIEnv::NewObject
// ----------------------------------------------------------------------------
int JNIEnv::NewObject(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 116, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: JNIEnv::CallObjectMethod  (binary VA: 0x4bdec0)
// Original: _JNIEnv::CallObjectMethod
// ----------------------------------------------------------------------------
int JNIEnv::CallObjectMethod(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 140, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: JNIEnv::CallBooleanMethod  (binary VA: 0x4bdef0)
// Original: _JNIEnv::CallBooleanMethod
// ----------------------------------------------------------------------------
int JNIEnv::CallBooleanMethod(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 152, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: JNIEnv::CallIntMethod  (binary VA: 0x4bdf20)
// Original: _JNIEnv::CallIntMethod
// ----------------------------------------------------------------------------
int JNIEnv::CallIntMethod(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 200, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: JNIEnv::CallLongMethod  (binary VA: 0x4bdf50)
// Original: _JNIEnv::CallLongMethod
// ----------------------------------------------------------------------------
int JNIEnv::CallLongMethod(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 212, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: JNIEnv::CallVoidMethod  (binary VA: 0x4bdf80)
// Original: _JNIEnv::CallVoidMethod
// ----------------------------------------------------------------------------
int JNIEnv::CallVoidMethod(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 248, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: sub_4BF512  (binary VA: 0x4bf512)
// Original: sub_4BF512
// ----------------------------------------------------------------------------
void sub_4BF512()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: AndroidReleaseThreadEnv  (binary VA: 0x4bf520)
// Original: AndroidReleaseThreadEnv
// ----------------------------------------------------------------------------
uint32_t * AndroidReleaseThreadEnv()
{
  uint32_t *result;

  result = (uint32_t *)(uintptr_t)AndroidOS_JavaVM;
  if ( AndroidOS_JavaVM != 0 )
    return (uint32_t *)G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: JNIEnv::CallStaticObjectMethod  (binary VA: 0x4bf550)
// Original: _JNIEnv::CallStaticObjectMethod
// ----------------------------------------------------------------------------
int JNIEnv::CallStaticObjectMethod(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 460, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: sub_4BFED0  (binary VA: 0x4bfed0)
// Original: sub_4BFED0
// ----------------------------------------------------------------------------
int sub_4BFED0(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 472, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: sub_4BFF00  (binary VA: 0x4bff00)
// Original: sub_4BFF00
// ----------------------------------------------------------------------------
int sub_4BFF00(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 568, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: sub_4C0730  (binary VA: 0x4c0730)
// Original: sub_4C0730
// ----------------------------------------------------------------------------
uint32_t * sub_4C0730(int *a1)
{
  uint32_t *v1;
  int v2;
  uint32_t *v3;
  uint32_t *result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  void *v9;
  volatile int32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  char v24;
  uint32_t *v25;
  int v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  char v31;
  int v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  typedef char _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef char _g4_t_v73;
  typedef bool _g4_t_v74;
  typedef bool _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef bool _g4_t_v79;
  typedef char _g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef char _g4_t_v82;
  typedef bool _g4_t_v83;
  typedef bool _g4_t_v84;
  typedef volatile int32_t *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef uint32_t _g4_t_v87[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v43)) > _g4_s1 ? (4u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v44)) > _g4_s2 ? (4u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v45)) > _g4_s3 ? (4u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v46)) > _g4_s4 ? (8u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v47)) > _g4_s5 ? (8u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v48)) > _g4_s6 ? (8u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v49)) > _g4_s7 ? (24u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v50)) > _g4_s8 ? (24u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v51)) > _g4_s9 ? (24u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v52)) > _g4_s10 ? (24u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v53)) > _g4_s11 ? (24u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v54)) > _g4_s12 ? (24u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v55)) > _g4_s13 ? (24u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v56)) > _g4_s14 ? (24u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v57)) > _g4_s15 ? (24u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v58)) > _g4_s16 ? (28u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v59)) > _g4_s17 ? (28u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v60)) > _g4_s18 ? (28u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v61)) > _g4_s19 ? (28u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v62)) > _g4_s20 ? (28u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v63)) > _g4_s21 ? (28u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v64)) > _g4_s22 ? (32u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v65)) > _g4_s23 ? (32u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v66)) > _g4_s24 ? (32u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v67)) > _g4_s25 ? (32u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v68)) > _g4_s26 ? (32u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v69)) > _g4_s27 ? (36u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (36u + sizeof(_g4_t_v70)) > _g4_s28 ? (36u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v71)) > _g4_s29 ? (40u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v72)) > _g4_s30 ? (40u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v73)) > _g4_s31 ? (40u + sizeof(_g4_t_v73)) : _g4_s31,
    _g4_s33 = (40u + sizeof(_g4_t_v74)) > _g4_s32 ? (40u + sizeof(_g4_t_v74)) : _g4_s32,
    _g4_s34 = (40u + sizeof(_g4_t_v75)) > _g4_s33 ? (40u + sizeof(_g4_t_v75)) : _g4_s33,
    _g4_s35 = (40u + sizeof(_g4_t_v76)) > _g4_s34 ? (40u + sizeof(_g4_t_v76)) : _g4_s34,
    _g4_s36 = (44u + sizeof(_g4_t_v77)) > _g4_s35 ? (44u + sizeof(_g4_t_v77)) : _g4_s35,
    _g4_s37 = (44u + sizeof(_g4_t_v78)) > _g4_s36 ? (44u + sizeof(_g4_t_v78)) : _g4_s36,
    _g4_s38 = (44u + sizeof(_g4_t_v79)) > _g4_s37 ? (44u + sizeof(_g4_t_v79)) : _g4_s37,
    _g4_s39 = (44u + sizeof(_g4_t_v80)) > _g4_s38 ? (44u + sizeof(_g4_t_v80)) : _g4_s38,
    _g4_s40 = (44u + sizeof(_g4_t_v81)) > _g4_s39 ? (44u + sizeof(_g4_t_v81)) : _g4_s39,
    _g4_s41 = (44u + sizeof(_g4_t_v82)) > _g4_s40 ? (44u + sizeof(_g4_t_v82)) : _g4_s40,
    _g4_s42 = (44u + sizeof(_g4_t_v83)) > _g4_s41 ? (44u + sizeof(_g4_t_v83)) : _g4_s41,
    _g4_s43 = (44u + sizeof(_g4_t_v84)) > _g4_s42 ? (44u + sizeof(_g4_t_v84)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v85)) > _g4_s43 ? (64u + sizeof(_g4_t_v85)) : _g4_s43,
    _g4_s45 = (80u + sizeof(_g4_t_v86)) > _g4_s44 ? (80u + sizeof(_g4_t_v86)) : _g4_s44,
    _g4_s46 = (84u + sizeof(_g4_t_v87)) > _g4_s45 ? (84u + sizeof(_g4_t_v87)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 40u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 44u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 44u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 44u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 64u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 80u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 84u);

  v1 = (uint32_t *)dword_20D0F54[1];
  if ( dword_20D0F54[1] == 0 )
  {
    v3 = (uint32_t *)(dword_20D0F54);
    v2 = *a1;
    goto LABEL_8;
  }
  v2 = *a1;
  v3 = (uint32_t *)(dword_20D0F54);
  do
  {
    while ( v1[4] >= v2 )
    {
      v3 = v1;
      v1 = (uint32_t *)v1[2];
      if ( v1 == nullptr )
        goto LABEL_6;
    }
    v1 = (uint32_t *)v1[3];
  }
  while ( v1 != nullptr );
LABEL_6:
  if ( v3 == (uint32_t *)(dword_20D0F54) || (result = v3 + 5, v3[4] > v2) )
  {
LABEL_8:
    v86 = v2;
    v85 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(v87, &v85);
    if ( v3 != (uint32_t *)(dword_20D0F54) )
    {
      v5 = v3[4];
      v77 = v5;
      if ( v86 < v5 )
      {
        v71 = (uint32_t *)dword_20D0F54[2];
        if ( (uint32_t *)dword_20D0F54[2] != v3 )
        {
          v58 = v86;
          v6 = (uint32_t *)sub_1904940(v3);
          v7 = v58;
          if ( v58 > v6[4] )
          {
            if ( v6[3] != 0 )
            {
              v8 = opNew(0x18u);
              if ( v8 != -16 )
              {
                *(uint32_t *)(v8 + 16) = v86;
                v49 = v8;
                g4_std::string::construct_copy(v8 + 20, v87);
                v8 = v49;
              }
              v46 = v3;
              v43 = v8;
              v42 = 1;
LABEL_16:
              v50 = v8;
              sub_1904970(v42, v43, v46, dword_20D0F54);
              ++dword_20D0F54[4];
              result = (uint32_t *)(v50 + 20);
              goto LABEL_17;
            }
            v65 = v6;
            v32 = opNew(0x18u);
            v33 = v65;
            v30 = v32 + 20;
            if ( v32 != -16 )
            {
              *(uint32_t *)(v32 + 16) = v86;
              g4_std::string::construct_copy(v30, v87);
              v33 = v65;
              v30 = v32 + 20;
            }
            v48 = v33;
            v45 = v32;
            v31 = v33 == (uint32_t *)(dword_20D0F54);
            goto LABEL_66;
          }
          v19 = (uint32_t *)dword_20D0F54[1];
          if ( dword_20D0F54[1] != 0 )
          {
            while ( 1 )
            {
              v21 = v19[4];
              if ( v58 < v21 )
              {
                v25 = (uint32_t *)v19[2];
                v80 = 1;
              }
              else
              {
                v25 = (uint32_t *)v19[3];
                v80 = 0;
              }
              if ( v25 == nullptr )
                break;
              v19 = v25;
            }
            v69 = v19;
            if ( v80 == 0 )
            {
LABEL_40:
              result = v19 + 5;
              if ( v7 <= v21 )
                goto LABEL_17;
              v79 = true;
              if ( v69 != (uint32_t *)(dword_20D0F54) )
                v79 = v7 < v69[4];
              v22 = opNew(0x18u);
              v23 = v22 + 20;
              if ( v22 != -16 )
              {
                *(uint32_t *)(v22 + 16) = v86;
                g4_std::string::construct_copy(v23, v87);
                v23 = v22 + 20;
              }
              v47 = v69;
              goto LABEL_46;
            }
          }
          else
          {
            v19 = (uint32_t *)(dword_20D0F54);
          }
          if ( v71 == v19 )
          {
            v83 = true;
            if ( v19 != (uint32_t *)(dword_20D0F54) )
              v83 = v58 < v19[4];
            v8 = opNew(0x18u);
            if ( v8 != -16 )
            {
              *(uint32_t *)(v8 + 16) = v86;
              v55 = v8;
              g4_std::string::construct_copy(v8 + 20, v87);
              v8 = v55;
            }
            v46 = v19;
            v43 = v8;
            v42 = v83;
            goto LABEL_16;
          }
          v20 = (uint32_t *)sub_19048F0(v19);
          v21 = v20[4];
          v69 = v19;
          v7 = v58;
          v19 = v20;
          goto LABEL_40;
        }
        v13 = opNew(0x18u);
        v15 = v13 + 20;
        if ( v13 != -16 )
        {
          *(uint32_t *)(v13 + 16) = v86;
          g4_std::string::construct_copy(v15, v87);
          v15 = v13 + 20;
        }
        v14 = v71;
LABEL_26:
        v51 = (uint32_t *)v15;
        sub_1904970(1, v13, v14, dword_20D0F54);
        ++dword_20D0F54[4];
        result = v51;
        goto LABEL_17;
      }
      result = v3 + 5;
      if ( v86 <= v5 )
        goto LABEL_17;
      v72 = (uint32_t *)dword_20D0F54[3];
      if ( (uint32_t *)dword_20D0F54[3] != v3 )
      {
        v59 = v86;
        v11 = (uint32_t *)sub_19048E0(v3);
        v12 = v59;
        if ( v59 < v11[4] )
        {
          if ( v3[3] == 0 )
          {
            v8 = opNew(0x18u);
            if ( v8 != -16 )
            {
              *(uint32_t *)(v8 + 16) = v86;
              v54 = v8;
              g4_std::string::construct_copy(v8 + 20, v87);
              v8 = v54;
            }
            v46 = v3;
            v43 = v8;
            v42 = 0;
            goto LABEL_16;
          }
          v64 = v11;
          v13 = opNew(0x18u);
          v14 = v64;
          v15 = v13 + 20;
          if ( v13 != -16 )
          {
            *(uint32_t *)(v13 + 16) = v86;
            g4_std::string::construct_copy(v15, v87);
            v14 = v64;
            v15 = v13 + 20;
          }
          goto LABEL_26;
        }
        v34 = (uint32_t *)dword_20D0F54[1];
        if ( dword_20D0F54[1] != 0 )
        {
          while ( 1 )
          {
            if ( v59 < v34[4] )
            {
              v35 = (uint32_t *)v34[2];
              v82 = 1;
            }
            else
            {
              v35 = (uint32_t *)v34[3];
              v82 = 0;
            }
            if ( v35 == nullptr )
              break;
            v34 = v35;
          }
          v76 = v34[4];
          v36 = v34;
          if ( v82 == 0 )
            goto LABEL_78;
        }
        else
        {
          v34 = (uint32_t *)(dword_20D0F54);
        }
        if ( (uint32_t *)dword_20D0F54[2] == v34 )
        {
LABEL_79:
          v79 = true;
          if ( v34 != (uint32_t *)(dword_20D0F54) )
            v79 = v12 < v34[4];
          v66 = v34;
          v22 = opNew(0x18u);
          v37 = v66;
          v23 = v22 + 20;
          if ( v22 != -16 )
          {
            *(uint32_t *)(v22 + 16) = v86;
            g4_std::string::construct_copy(v23, v87);
            v37 = v66;
            v23 = v22 + 20;
          }
          v47 = v37;
LABEL_46:
          v44 = v22;
          v24 = v79;
LABEL_56:
          v52 = (uint32_t *)v23;
          sub_1904970(v24, v44, v47, dword_20D0F54);
          ++dword_20D0F54[4];
          result = v52;
          goto LABEL_17;
        }
        v68 = v34;
        v36 = (uint32_t *)sub_19048F0(v34);
        v76 = v36[4];
        v34 = v68;
        v12 = v59;
LABEL_78:
        result = v36 + 5;
        if ( v12 <= v76 )
        {
LABEL_17:
          v9 = (void *)(v87[0] - 12);
          if ( (void *)(v87[0] - 12) != &unk_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v87[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            v57 = result;
            g4_std::string::Rep::M_destroy(v9);
            result = v57;
          }
          v10 = v85 - 3;
          if ( v85 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v85 - 1, 0xFFFFFFFF) <= 0 )
          {
            v56 = result;
            g4_std::string::Rep::M_destroy((void *)v10);
            return v56;
          }
          return result;
        }
        goto LABEL_79;
      }
      v62 = v86;
      v38 = opNew(0x18u);
      v39 = v62;
      v30 = v38 + 20;
      if ( v38 != -16 )
      {
        *(uint32_t *)(v38 + 16) = v86;
        g4_std::string::construct_copy(v30, v87);
        v39 = v62;
        v30 = v38 + 20;
      }
      v45 = v38;
      v48 = v72;
      v31 = v39 < v77;
LABEL_66:
      v53 = (uint32_t *)v30;
      sub_1904970(v31, v45, v48, dword_20D0F54);
      ++dword_20D0F54[4];
      result = v53;
      goto LABEL_17;
    }
    v16 = dword_20D0F54[4];
    if ( dword_20D0F54[4] != 0 )
    {
      v81 = (uint32_t *)dword_20D0F54[3];
      if ( *(uint32_t *)(dword_20D0F54[3] + 16) < v86 )
      {
        v74 = dword_20D0F54[3] == (uint32_t)(uintptr_t)v3;
        v26 = opNew(0x18u);
        v23 = v26 + 20;
        if ( v26 != -16 )
        {
          *(uint32_t *)(v26 + 16) = v86;
          g4_std::string::construct_copy(v23, v87);
          v23 = v26 + 20;
        }
        v44 = v26;
        v47 = v81;
        v24 = v74;
        goto LABEL_56;
      }
    }
    v17 = (uint32_t *)dword_20D0F54[1];
    if ( dword_20D0F54[1] != 0 )
    {
      v78 = v86;
      while ( 1 )
      {
        v16 = v17[4];
        if ( v86 < v16 )
        {
          v18 = (uint32_t *)v17[2];
          v73 = 1;
        }
        else
        {
          v18 = (uint32_t *)v17[3];
          v73 = 0;
        }
        if ( v18 == nullptr )
          break;
        v17 = v18;
      }
      v70 = v17[4];
      v27 = v17;
      if ( v73 == 0 )
        goto LABEL_60;
    }
    else
    {
      v17 = v3;
    }
    if ( (uint32_t *)dword_20D0F54[2] == v17 )
    {
      v84 = true;
      if ( v17 != (uint32_t *)(dword_20D0F54) )
        v84 = v86 < v17[4];
      v63 = v17;
      v40 = opNew(0x18u);
      v41 = v63;
      v30 = v40 + 20;
      if ( v40 != -16 )
      {
        *(uint32_t *)(v40 + 16) = v86;
        g4_std::string::construct_copy(v30, v87);
        v41 = v63;
        v30 = v40 + 20;
      }
      v48 = v41;
      v45 = v40;
      v31 = v84;
      goto LABEL_66;
    }
    v61 = v17;
    v67 = v16;
    v27 = (uint32_t *)sub_19048F0(v17);
    v78 = v86;
    v16 = v67;
    v17 = v61;
    v70 = v27[4];
LABEL_60:
    result = v27 + 5;
    if ( v70 >= v78 )
      goto LABEL_17;
    v75 = true;
    if ( v17 != (uint32_t *)(dword_20D0F54) )
      v75 = v16 > v78;
    v60 = v17;
    v28 = opNew(0x18u);
    v29 = v60;
    v30 = v28 + 20;
    if ( v28 != -16 )
    {
      *(uint32_t *)(v28 + 16) = v86;
      g4_std::string::construct_copy(v30, v87);
      v29 = v60;
      v30 = v28 + 20;
    }
    v48 = v29;
    v45 = v28;
    v31 = v75;
    goto LABEL_66;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_4C0F70  (binary VA: 0x4c0f70)
// Original: sub_4C0F70
// ----------------------------------------------------------------------------
uint32_t * sub_4C0F70(int *a1)
{
  uint32_t *v1;
  int v2;
  uint32_t *v3;
  uint32_t *result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  void *v9;
  volatile int32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  char v24;
  uint32_t *v25;
  int v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  char v31;
  int v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  typedef char _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef char _g4_t_v73;
  typedef bool _g4_t_v74;
  typedef bool _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef bool _g4_t_v79;
  typedef char _g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef char _g4_t_v82;
  typedef bool _g4_t_v83;
  typedef bool _g4_t_v84;
  typedef volatile int32_t *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef uint32_t _g4_t_v87[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v43)) > _g4_s1 ? (4u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v44)) > _g4_s2 ? (4u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v45)) > _g4_s3 ? (4u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v46)) > _g4_s4 ? (8u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v47)) > _g4_s5 ? (8u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v48)) > _g4_s6 ? (8u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v49)) > _g4_s7 ? (24u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v50)) > _g4_s8 ? (24u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v51)) > _g4_s9 ? (24u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v52)) > _g4_s10 ? (24u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v53)) > _g4_s11 ? (24u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v54)) > _g4_s12 ? (24u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v55)) > _g4_s13 ? (24u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v56)) > _g4_s14 ? (24u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v57)) > _g4_s15 ? (24u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v58)) > _g4_s16 ? (28u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v59)) > _g4_s17 ? (28u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v60)) > _g4_s18 ? (28u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v61)) > _g4_s19 ? (28u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v62)) > _g4_s20 ? (28u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v63)) > _g4_s21 ? (28u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v64)) > _g4_s22 ? (32u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v65)) > _g4_s23 ? (32u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v66)) > _g4_s24 ? (32u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v67)) > _g4_s25 ? (32u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v68)) > _g4_s26 ? (32u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v69)) > _g4_s27 ? (36u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (36u + sizeof(_g4_t_v70)) > _g4_s28 ? (36u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v71)) > _g4_s29 ? (40u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v72)) > _g4_s30 ? (40u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v73)) > _g4_s31 ? (40u + sizeof(_g4_t_v73)) : _g4_s31,
    _g4_s33 = (40u + sizeof(_g4_t_v74)) > _g4_s32 ? (40u + sizeof(_g4_t_v74)) : _g4_s32,
    _g4_s34 = (40u + sizeof(_g4_t_v75)) > _g4_s33 ? (40u + sizeof(_g4_t_v75)) : _g4_s33,
    _g4_s35 = (40u + sizeof(_g4_t_v76)) > _g4_s34 ? (40u + sizeof(_g4_t_v76)) : _g4_s34,
    _g4_s36 = (44u + sizeof(_g4_t_v77)) > _g4_s35 ? (44u + sizeof(_g4_t_v77)) : _g4_s35,
    _g4_s37 = (44u + sizeof(_g4_t_v78)) > _g4_s36 ? (44u + sizeof(_g4_t_v78)) : _g4_s36,
    _g4_s38 = (44u + sizeof(_g4_t_v79)) > _g4_s37 ? (44u + sizeof(_g4_t_v79)) : _g4_s37,
    _g4_s39 = (44u + sizeof(_g4_t_v80)) > _g4_s38 ? (44u + sizeof(_g4_t_v80)) : _g4_s38,
    _g4_s40 = (44u + sizeof(_g4_t_v81)) > _g4_s39 ? (44u + sizeof(_g4_t_v81)) : _g4_s39,
    _g4_s41 = (44u + sizeof(_g4_t_v82)) > _g4_s40 ? (44u + sizeof(_g4_t_v82)) : _g4_s40,
    _g4_s42 = (44u + sizeof(_g4_t_v83)) > _g4_s41 ? (44u + sizeof(_g4_t_v83)) : _g4_s41,
    _g4_s43 = (44u + sizeof(_g4_t_v84)) > _g4_s42 ? (44u + sizeof(_g4_t_v84)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v85)) > _g4_s43 ? (64u + sizeof(_g4_t_v85)) : _g4_s43,
    _g4_s45 = (80u + sizeof(_g4_t_v86)) > _g4_s44 ? (80u + sizeof(_g4_t_v86)) : _g4_s44,
    _g4_s46 = (84u + sizeof(_g4_t_v87)) > _g4_s45 ? (84u + sizeof(_g4_t_v87)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 40u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 44u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 44u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 44u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 64u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 80u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 84u);

  v1 = (uint32_t *)dword_20D0F34[1];
  if ( dword_20D0F34[1] == 0 )
  {
    v3 = (uint32_t *)(dword_20D0F34);
    v2 = *a1;
    goto LABEL_8;
  }
  v2 = *a1;
  v3 = (uint32_t *)(dword_20D0F34);
  do
  {
    while ( v1[4] >= v2 )
    {
      v3 = v1;
      v1 = (uint32_t *)v1[2];
      if ( v1 == nullptr )
        goto LABEL_6;
    }
    v1 = (uint32_t *)v1[3];
  }
  while ( v1 != nullptr );
LABEL_6:
  if ( v3 == (uint32_t *)(dword_20D0F34) || (result = v3 + 5, v3[4] > v2) )
  {
LABEL_8:
    v86 = v2;
    v85 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(v87, &v85);
    if ( v3 != (uint32_t *)(dword_20D0F34) )
    {
      v5 = v3[4];
      v77 = v5;
      if ( v86 < v5 )
      {
        v71 = (uint32_t *)dword_20D0F34[2];
        if ( (uint32_t *)dword_20D0F34[2] != v3 )
        {
          v58 = v86;
          v6 = (uint32_t *)sub_1904940(v3);
          v7 = v58;
          if ( v58 > v6[4] )
          {
            if ( v6[3] != 0 )
            {
              v8 = opNew(0x18u);
              if ( v8 != -16 )
              {
                *(uint32_t *)(v8 + 16) = v86;
                v49 = v8;
                g4_std::string::construct_copy(v8 + 20, v87);
                v8 = v49;
              }
              v46 = v3;
              v43 = v8;
              v42 = 1;
LABEL_16:
              v50 = v8;
              sub_1904970(v42, v43, v46, dword_20D0F34);
              ++dword_20D0F34[4];
              result = (uint32_t *)(v50 + 20);
              goto LABEL_17;
            }
            v65 = v6;
            v32 = opNew(0x18u);
            v33 = v65;
            v30 = v32 + 20;
            if ( v32 != -16 )
            {
              *(uint32_t *)(v32 + 16) = v86;
              g4_std::string::construct_copy(v30, v87);
              v33 = v65;
              v30 = v32 + 20;
            }
            v48 = v33;
            v45 = v32;
            v31 = v33 == (uint32_t *)(dword_20D0F34);
            goto LABEL_66;
          }
          v19 = (uint32_t *)dword_20D0F34[1];
          if ( dword_20D0F34[1] != 0 )
          {
            while ( 1 )
            {
              v21 = v19[4];
              if ( v58 < v21 )
              {
                v25 = (uint32_t *)v19[2];
                v80 = 1;
              }
              else
              {
                v25 = (uint32_t *)v19[3];
                v80 = 0;
              }
              if ( v25 == nullptr )
                break;
              v19 = v25;
            }
            v69 = v19;
            if ( v80 == 0 )
            {
LABEL_40:
              result = v19 + 5;
              if ( v7 <= v21 )
                goto LABEL_17;
              v79 = true;
              if ( v69 != (uint32_t *)(dword_20D0F34) )
                v79 = v7 < v69[4];
              v22 = opNew(0x18u);
              v23 = v22 + 20;
              if ( v22 != -16 )
              {
                *(uint32_t *)(v22 + 16) = v86;
                g4_std::string::construct_copy(v23, v87);
                v23 = v22 + 20;
              }
              v47 = v69;
              goto LABEL_46;
            }
          }
          else
          {
            v19 = (uint32_t *)(dword_20D0F34);
          }
          if ( v71 == v19 )
          {
            v83 = true;
            if ( v19 != (uint32_t *)(dword_20D0F34) )
              v83 = v58 < v19[4];
            v8 = opNew(0x18u);
            if ( v8 != -16 )
            {
              *(uint32_t *)(v8 + 16) = v86;
              v55 = v8;
              g4_std::string::construct_copy(v8 + 20, v87);
              v8 = v55;
            }
            v46 = v19;
            v43 = v8;
            v42 = v83;
            goto LABEL_16;
          }
          v20 = (uint32_t *)sub_19048F0(v19);
          v21 = v20[4];
          v69 = v19;
          v7 = v58;
          v19 = v20;
          goto LABEL_40;
        }
        v13 = opNew(0x18u);
        v15 = v13 + 20;
        if ( v13 != -16 )
        {
          *(uint32_t *)(v13 + 16) = v86;
          g4_std::string::construct_copy(v15, v87);
          v15 = v13 + 20;
        }
        v14 = v71;
LABEL_26:
        v51 = (uint32_t *)v15;
        sub_1904970(1, v13, v14, dword_20D0F34);
        ++dword_20D0F34[4];
        result = v51;
        goto LABEL_17;
      }
      result = v3 + 5;
      if ( v86 <= v5 )
        goto LABEL_17;
      v72 = (uint32_t *)dword_20D0F34[3];
      if ( (uint32_t *)dword_20D0F34[3] != v3 )
      {
        v59 = v86;
        v11 = (uint32_t *)sub_19048E0(v3);
        v12 = v59;
        if ( v59 < v11[4] )
        {
          if ( v3[3] == 0 )
          {
            v8 = opNew(0x18u);
            if ( v8 != -16 )
            {
              *(uint32_t *)(v8 + 16) = v86;
              v54 = v8;
              g4_std::string::construct_copy(v8 + 20, v87);
              v8 = v54;
            }
            v46 = v3;
            v43 = v8;
            v42 = 0;
            goto LABEL_16;
          }
          v64 = v11;
          v13 = opNew(0x18u);
          v14 = v64;
          v15 = v13 + 20;
          if ( v13 != -16 )
          {
            *(uint32_t *)(v13 + 16) = v86;
            g4_std::string::construct_copy(v15, v87);
            v14 = v64;
            v15 = v13 + 20;
          }
          goto LABEL_26;
        }
        v34 = (uint32_t *)dword_20D0F34[1];
        if ( dword_20D0F34[1] != 0 )
        {
          while ( 1 )
          {
            if ( v59 < v34[4] )
            {
              v35 = (uint32_t *)v34[2];
              v82 = 1;
            }
            else
            {
              v35 = (uint32_t *)v34[3];
              v82 = 0;
            }
            if ( v35 == nullptr )
              break;
            v34 = v35;
          }
          v76 = v34[4];
          v36 = v34;
          if ( v82 == 0 )
            goto LABEL_78;
        }
        else
        {
          v34 = (uint32_t *)(dword_20D0F34);
        }
        if ( (uint32_t *)dword_20D0F34[2] == v34 )
        {
LABEL_79:
          v79 = true;
          if ( v34 != (uint32_t *)(dword_20D0F34) )
            v79 = v12 < v34[4];
          v66 = v34;
          v22 = opNew(0x18u);
          v37 = v66;
          v23 = v22 + 20;
          if ( v22 != -16 )
          {
            *(uint32_t *)(v22 + 16) = v86;
            g4_std::string::construct_copy(v23, v87);
            v37 = v66;
            v23 = v22 + 20;
          }
          v47 = v37;
LABEL_46:
          v44 = v22;
          v24 = v79;
LABEL_56:
          v52 = (uint32_t *)v23;
          sub_1904970(v24, v44, v47, dword_20D0F34);
          ++dword_20D0F34[4];
          result = v52;
          goto LABEL_17;
        }
        v68 = v34;
        v36 = (uint32_t *)sub_19048F0(v34);
        v76 = v36[4];
        v34 = v68;
        v12 = v59;
LABEL_78:
        result = v36 + 5;
        if ( v12 <= v76 )
        {
LABEL_17:
          v9 = (void *)(v87[0] - 12);
          if ( (void *)(v87[0] - 12) != &unk_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v87[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            v57 = result;
            g4_std::string::Rep::M_destroy(v9);
            result = v57;
          }
          v10 = v85 - 3;
          if ( v85 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v85 - 1, 0xFFFFFFFF) <= 0 )
          {
            v56 = result;
            g4_std::string::Rep::M_destroy((void *)v10);
            return v56;
          }
          return result;
        }
        goto LABEL_79;
      }
      v62 = v86;
      v38 = opNew(0x18u);
      v39 = v62;
      v30 = v38 + 20;
      if ( v38 != -16 )
      {
        *(uint32_t *)(v38 + 16) = v86;
        g4_std::string::construct_copy(v30, v87);
        v39 = v62;
        v30 = v38 + 20;
      }
      v45 = v38;
      v48 = v72;
      v31 = v39 < v77;
LABEL_66:
      v53 = (uint32_t *)v30;
      sub_1904970(v31, v45, v48, dword_20D0F34);
      ++dword_20D0F34[4];
      result = v53;
      goto LABEL_17;
    }
    v16 = dword_20D0F34[4];
    if ( dword_20D0F34[4] != 0 )
    {
      v81 = (uint32_t *)dword_20D0F34[3];
      if ( *(uint32_t *)(dword_20D0F34[3] + 16) < v86 )
      {
        v74 = dword_20D0F34[3] == (uint32_t)(uintptr_t)v3;
        v26 = opNew(0x18u);
        v23 = v26 + 20;
        if ( v26 != -16 )
        {
          *(uint32_t *)(v26 + 16) = v86;
          g4_std::string::construct_copy(v23, v87);
          v23 = v26 + 20;
        }
        v44 = v26;
        v47 = v81;
        v24 = v74;
        goto LABEL_56;
      }
    }
    v17 = (uint32_t *)dword_20D0F34[1];
    if ( dword_20D0F34[1] != 0 )
    {
      v78 = v86;
      while ( 1 )
      {
        v16 = v17[4];
        if ( v86 < v16 )
        {
          v18 = (uint32_t *)v17[2];
          v73 = 1;
        }
        else
        {
          v18 = (uint32_t *)v17[3];
          v73 = 0;
        }
        if ( v18 == nullptr )
          break;
        v17 = v18;
      }
      v70 = v17[4];
      v27 = v17;
      if ( v73 == 0 )
        goto LABEL_60;
    }
    else
    {
      v17 = v3;
    }
    if ( (uint32_t *)dword_20D0F34[2] == v17 )
    {
      v84 = true;
      if ( v17 != (uint32_t *)(dword_20D0F34) )
        v84 = v86 < v17[4];
      v63 = v17;
      v40 = opNew(0x18u);
      v41 = v63;
      v30 = v40 + 20;
      if ( v40 != -16 )
      {
        *(uint32_t *)(v40 + 16) = v86;
        g4_std::string::construct_copy(v30, v87);
        v41 = v63;
        v30 = v40 + 20;
      }
      v48 = v41;
      v45 = v40;
      v31 = v84;
      goto LABEL_66;
    }
    v61 = v17;
    v67 = v16;
    v27 = (uint32_t *)sub_19048F0(v17);
    v78 = v86;
    v16 = v67;
    v17 = v61;
    v70 = v27[4];
LABEL_60:
    result = v27 + 5;
    if ( v70 >= v78 )
      goto LABEL_17;
    v75 = true;
    if ( v17 != (uint32_t *)(dword_20D0F34) )
      v75 = v16 > v78;
    v60 = v17;
    v28 = opNew(0x18u);
    v29 = v60;
    v30 = v28 + 20;
    if ( v28 != -16 )
    {
      *(uint32_t *)(v28 + 16) = v86;
      g4_std::string::construct_copy(v30, v87);
      v29 = v60;
      v30 = v28 + 20;
    }
    v48 = v29;
    v45 = v28;
    v31 = v75;
    goto LABEL_66;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_4C17B0  (binary VA: 0x4c17b0)
// Original: sub_4C17B0
// ----------------------------------------------------------------------------
int sub_4C17B0(int a1, int a2, int a3, ...)
{
  va_list va;

  va_start(va, a3);
  int r = G4_VCALL<int>(a1, 520, a2, a3, va);
  va_end(va);
  return r;
}

// ----------------------------------------------------------------------------
// Function: InGameBrowser_showForum  (binary VA: 0x4c1ec0)
// Original: InGameBrowser_showForum
// ----------------------------------------------------------------------------
int InGameBrowser_showForum(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  void *v11;
  int v12;
  int v13;
  int result;
  void *v15;
  char v28;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v22)) > _g4_s6 ? (36u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v24)) > _g4_s8 ? (44u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v25)) > _g4_s9 ? (48u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v26)) > _g4_s10 ? (52u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v27)) > _g4_s11 ? (56u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);

  v27[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v27, 65542, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v27, 0);
    v28 = 1;
  }
  else
  {
    v28 = 0;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)&a8, "com/gameloft/android/GAND/GloftGGSS", (int)(uintptr_t)&a7 + 1);
  g4_std::string::construct_copy(&a11, &a8);
  g4_std::string::append((int)(uintptr_t)&a11, "/InGameBrowser", 0xEu);
  g4_std::string::assign_str(&a8, &a11);
  v11 = (void *)(a11 - 12);
  if ( (void *)(a11 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(a11 - 4), 0xFFFFFFFF) <= 0 )
  {
    v27[3] = (uint32_t)(uintptr_t)((char *)&a7 + 2);
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = G4_VCALL<int>(a10, 24, a8);
  v13 = G4_VCALL<int>(a10, 452, v12, "showForum", "()V");
  if ( v13 != 0 )
    sub_4BFF00(a10, v12, v13);
  result = a8;
  v15 = (void *)(a8 - 12);
  if ( (void *)(a8 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(a8 - 4), 0xFFFFFFFF) <= 0 )
  {
    v27[3] = (uint32_t)(uintptr_t)((char *)&a7 + 3);
    g4_std::string::Rep::M_destroy(v15);
  }
  if ( v28 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_SUtils_onVideoFinished  (binary VA: 0x4c2070)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_SUtils_onVideoFinished
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_SUtils_onVideoFinished()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_NetworkStateReceiver_setConnectionType  (binary VA: 0x4c3560)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_NetworkStateReceiver_setConnectionType
// ----------------------------------------------------------------------------
uint32_t * Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_NetworkStateReceiver_setConnectionType(int a1, int a2, GameUtils::Self *a3)
{
  return GameUtils::setConnectionType(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_SUtils_nativeInit  (binary VA: 0x4c3ea0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_SUtils_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_SUtils_nativeInit(int a1, int a2)
{
  GameUtils_Init(a2);
  return ABundle_Init();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_SUtils_nativeSendKeyboardData  (binary VA: 0x4c5400)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_SUtils_nativeSendKeyboardData
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_SUtils_nativeSendKeyboardData(int a1, int a2, int a3)
{
  return GameUtils::sendKeyboardTextCB(a3);
}

// ----------------------------------------------------------------------------
// Function: sub_4C8AD0  (binary VA: 0x4c8ad0)
// Original: sub_4C8AD0
// ----------------------------------------------------------------------------
int sub_4C8AD0()
{
  GameUtils::GLUid[0] = 0;
  GameUtils::GLUid[1] = 0;
  GameUtils::GLUid[2] = 0;
  __cxa_atexit(+[](void *){}, GameUtils::GLUid, &unk_20D1280);
  dword_20D0F54[0] = 0;
  dword_20D0F54[1] = 0;
  dword_20D0F54[4] = 0;
  dword_20D0F54[2] = (uintptr_t)dword_20D0F54;
  dword_20D0F54[3] = (uintptr_t)dword_20D0F54;
  __cxa_atexit(
    +[](void *){},
    &GameUtils::s_mCachedValues,
    &unk_20D1280);
  dword_20D0F34[0] = 0;
  dword_20D0F34[1] = 0;
  dword_20D0F34[4] = 0;
  dword_20D0F34[2] = (uintptr_t)dword_20D0F34;
  dword_20D0F34[3] = (uintptr_t)dword_20D0F34;
  return __cxa_atexit(
           +[](void *){},
           &DeviceUtils::s_mCachedValues,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_4C8B92  (binary VA: 0x4c8b92)
// Original: sub_4C8B92
// ----------------------------------------------------------------------------
void sub_4C8B92()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: zip_mkstemp  (binary VA: 0x4c8ba0)
// Original: zip_mkstemp
// ----------------------------------------------------------------------------
int zip_mkstemp(char *file)
{
  char *v1;
  char v2;
  int v3;
  bool v4;
  char *v5;
  char *v6;
  int v7;
  uint8_t v8;
  char *i;
  int v10;
  char *v12;
  __pid_t v13;
  int v14;
  char v15;
  char v16;
  __pid_t v17;
  char v18;
  struct stat buf;

  v17 = getpid();
  v1 = file;
  v2 = *file;
  v3 = 0;
  while ( v2 != 0 )
  {
    ++v3;
    ++v1;
    v4 = v2 == 88;
    v2 = *v1;
    if ( !v4 )
      v3 = 0;
  }
  v16 = *(v1 - 1);
  v18 = byte_20BA610;
  if ( v16 == 88 )
  {
    *(v1 - 1) = byte_20BA610;
    v15 = *(v1 - 2);
    --v1;
    v16 = v15;
  }
  if ( v3 > 6 )
  {
    v5 = v1 - 1;
    v6 = v1;
    if ( v16 != 88 )
      goto LABEL_9;
    *(v1 - 1) = byte_20BA611;
    v16 = *(v1 - 2);
    --v1;
  }
  v6 = v1 - 1;
  if ( v16 == 88 )
  {
    v12 = v1;
    v13 = v17;
    while ( 1 )
    {
      *(v12 - 1) = v13 % 10 + 48;
      v13 /= 10;
      if ( *(v6 - 1) != 88 )
        break;
      v12 = v6--;
    }
    v5 = v6 - 1;
    if ( v18 != 122 )
      goto LABEL_10;
    goto LABEL_31;
  }
  v5 = v1 - 1;
  v6 = v1;
LABEL_9:
  if ( v18 != 122 )
  {
LABEL_10:
    byte_20BA610 = v18 + 1;
    goto LABEL_11;
  }
LABEL_31:
  byte_20BA610 = 97;
  if ( byte_20BA611 == 122 )
    byte_20BA611 = 97;
  else
    ++byte_20BA611;
LABEL_11:
  if ( file >= v5 )
    goto LABEL_16;
  while ( *v5 != 47 )
  {
    if ( --v5 == file )
      goto LABEL_16;
  }
  *v5 = 0;
  v14 = stat(file, &buf);
  v10 = 0;
  if ( v14 != 0 )
    return v10;
  if ( (buf.st_mode & 0xF000) == 0x4000 )
  {
    *v5 = 47;
LABEL_16:
    while ( 1 )
    {
      v7 = open(file, 194, 384);
      if ( v7 >= 0 )
        return v7;
      if ( *(uint32_t *)__errno() != 17 )
        return 0;
      v8 = *v6;
      if ( *v6 == 0 )
        return 0;
      for ( i = v6; v8 == 122; ++i )
      {
        v8 = i[1];
        *i = 97;
        if ( v8 == 0 )
          return 0;
      }
      if ( (unsigned int)v8 - 48 > 9 )
        *i = v8 + 1;
      else
        *i = 97;
    }
  }
  *(uint32_t *)__errno() = 20;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: zip_add  (binary VA: 0x4c8e10)
// Original: zip_add
// ----------------------------------------------------------------------------
int zip_add(int a1, char *a2, int a3)
{
  if ( a3 != 0 && a2 != nullptr )
    return zip_replace((uint32_t *)(uintptr_t)a1, -1, a2, a3);
  zip_error_set(a1 + 8, 18, 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_add_dir  (binary VA: 0x4c8e80)
// Original: zip_add_dir
// ----------------------------------------------------------------------------
int zip_add_dir(int a1, char *s)
{
  char *v2;
  size_t v3;
  size_t v4;
  char *v5;
  char *v6;
  int v7;
  void *v8;
  int v9;
  char *src;

  v2 = s;
  if ( s == nullptr )
  {
    src = (char *)(uintptr_t)0x12;
    goto LABEL_13;
  }
  v3 = strlen(s);
  v4 = v3;
  if ( s[v3 - 1] != 47 )
  {
    v5 = (char *)malloc(v3 + 2);
    v6 = v5;
    if ( v5 != nullptr )
    {
      strcpy(v5, s);
      v6[v4] = 47;
      v6[v4 + 1] = 0;
      goto LABEL_5;
    }
    src = (char *)(uintptr_t)14;
LABEL_13:
    v9 = -1;
    zip_error_set(a1 + 8, src, 0);
    return v9;
  }
  v6 = nullptr;
LABEL_5:
  v7 = zip_source_buffer(a1, 0, 0, 0);
  v8 = (void *)v7;
  if ( v7 != 0 )
  {
    if ( v6 != nullptr )
      v2 = v6;
    v9 = zip_replace((uint32_t *)(uintptr_t)a1, -1, v2, v7);
    free(v6);
    if ( v9 < 0 )
      zip_source_free((uint32_t *)v8);
  }
  else
  {
    v9 = -1;
    free(v6);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: sub_4C8FC0  (binary VA: 0x4c8fc0)
// Original: sub_4C8FC0
// ----------------------------------------------------------------------------
int sub_4C8FC0(int a1, int (*a2)(int, int *, int, int), int a3, int a4, FILE *s, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, ...)
{
  int archive_flag;
  int v14;
  int i;
  int v16;
  unsigned int v17;
  unsigned int v18;
  size_t v19;
  va_list va;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v25;
  typedef uint8_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33[8192];
  typedef uint8_t _g4_t_ptr[8204];
  enum : size_t {
    _g4_s0 = 16592u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v22)) > _g4_s1 ? (36u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v25)) > _g4_s2 ? (48u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v26)) > _g4_s3 ? (64u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v27)) > _g4_s4 ? (68u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v28)) > _g4_s5 ? (76u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v29)) > _g4_s6 ? (80u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v30)) > _g4_s7 ? (96u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v31)) > _g4_s8 ? (100u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v32)) > _g4_s9 ? (104u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v33)) > _g4_s10 ? (128u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (8320u + sizeof(_g4_t_ptr)) > _g4_s11 ? (8320u + sizeof(_g4_t_ptr)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 8320u);

  va_start(va, a13);
  *(uint16_t *)(a4 + 24) = 8;
  *(uint32_t *)(a4 + 16) = 0;
  *(uint32_t *)(a4 + 20) = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v27 = 0;
  v29 = 0;
  *(uint32_t *)(a4 + 8) = crc32(0, 0, 0);
  archive_flag = zip_get_archive_flag(a1, 1, 0);
  v14 = 0;
  deflateInit2_(&v26, 9, 8, -15, 9 - (archive_flag != 0), 0, "1.2.3", 56);
  v29 = 0x2000;
  v28 = ptr;
  v26 = nullptr;
  v27 = 0;
  for ( i = 0; v14 != 0 || i != 0; i = v27 )
  {
LABEL_8:
    v17 = deflate(&v26, v14);
    v18 = v17;
    if ( v17 > 1 )
    {
      zip_error_set(a1 + 8, 13, v17);
      return -1;
    }
    if ( v29 != 0x2000 )
    {
      v22 = 0x2000 - v29;
      v19 = fwrite(ptr, 1u, 0x2000 - v29, s);
      if ( v19 != v22 )
      {
        v21 = *(uint32_t *)__errno();
        zip_error_set(a1 + 8, 6, v21);
        return -1;
      }
      v28 = ptr;
      v29 = 0x2000;
      *(uint32_t *)(a4 + 20) += v19;
    }
    if ( v18 == 1 )
    {
      deflateEnd(&v26);
      return 0;
    }
  }
  v16 = a2(a3, (int *)v33, 0x2000, 1);
  if ( v16 >= 0 )
  {
    v14 = 4;
    if ( v16 != 0 )
    {
      v26 = v33;
      v27 = v16;
      LOWORD(v14) = 0;
      *(uint32_t *)(a4 + 16) += v16;
      *(uint32_t *)(a4 + 8) = crc32(*(uint32_t *)(a4 + 8), v33, v16);
    }
    goto LABEL_8;
  }
  if ( a2(a3, &v25, 8, 4) > 7 )
  {
    *(uint32_t *)(a8 + 8) = a10;
    *(uint32_t *)(a8 + 12) = a11;
  }
  else
  {
    *(uint32_t *)(a8 + 8) = 20;
    *(uint32_t *)(a8 + 12) = 0;
  }
  (void)va;
  deflateEnd(&v26);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: sub_4C92A0  (binary VA: 0x4c92a0)
// Original: sub_4C92A0
// ----------------------------------------------------------------------------
int sub_4C92A0(FILE *a1, int a2, FILE *s, int a4)
{
  int v4;
  int result;
  size_t v7;
  int n;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint8_t ptr[8220];

  v4 = a2;
  result = 0;
  if ( a2 > 0 )
  {
    do
    {
      v7 = 0x2000;
      if ( (unsigned int)v4 <= 0x2000 )
        v7 = v4;
      n = fread(ptr, 1u, v7, a1);
      v9 = n;
      if ( n < 0 )
      {
        v10 = (uint32_t *)__errno();
        zip_error_set(a4, 5, *v10);
        return -1;
      }
      if ( n == 0 )
      {
        zip_error_set(a4, 17, 0);
        return -1;
      }
      if ( n != fwrite(ptr, 1u, n, s) )
      {
        v11 = (uint32_t *)__errno();
        zip_error_set(a4, 6, *v11);
        return -1;
      }
      v4 -= v9;
    }
    while ( v4 > 0 );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_4C93F0  (binary VA: 0x4c93f0)
// Original: sub_4C93F0
// ----------------------------------------------------------------------------
int sub_4C93F0(int a1, int a2)
{
  return strcasecmp(*(const char **)(a1 + 4), *(const char **)(a2 + 4));
}

// ----------------------------------------------------------------------------
// Function: sub_4C9420  (binary VA: 0x4c9420)
// Original: sub_4C9420
// ----------------------------------------------------------------------------
int sub_4C9420(int (*a1)(int, uint32_t *, int, int), int a2, uint32_t *a3, FILE *s, uint32_t *a5)
{
  signed int i;
  bool v6;
  signed int v7;
  int result;
  uint32_t *v9;
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_ptr[2051];
  enum : size_t {
    _g4_s0 = 8288u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_ptr)) > _g4_s1 ? (16u + sizeof(_g4_t_ptr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 16u);

  *a3 = 0;
  for ( i = a1(a2, ptr, 0x2000, 1); ; i = a1(a2, ptr, 0x2000, 1) )
  {
    v6 = i == 0;
    v7 = i;
    if ( i <= 0 )
      break;
    if ( i != fwrite(ptr, 1u, i, s) )
    {
      v9 = (uint32_t *)__errno();
      zip_error_set(a5, 6, *v9);
      return -1;
    }
    *a3 += v7;
  }
  result = 0;
  if ( !v6 )
  {
    if ( a1(a2, v12, 8, 4) > 7 )
    {
      *a5 = v12[0];
      a5[1] = v12[1];
      return -1;
    }
    else
    {
      *a5 = 20;
      a5[1] = 0;
      return -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_close  (binary VA: 0x4c9540)
// Original: zip_close
// ----------------------------------------------------------------------------
int zip_close(const char **a1)
{
  const char **v1;
  bool v2;
  const char *v3;
  int v4;
  signed int v5;
  int v6;
  signed int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  const char *v13;
  size_t v14;
  int v15;
  int v16;
  int v17;
  int v18;
  signed int v19;
  int *v20;
  uint32_t *v21;
  char *v22;
  int v23;
  uint32_t *v24;
  unsigned int v25;
  int v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  int *v30;
  int v31;
  uint32_t *v32;
  char *v33;
  int v34;
  uint32_t *v35;
  const char *v36;
  void *v37;
  int v38;
  uint32_t *v39;
  uint16_t v40;
  int16_t v41; // di
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef char *_g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef bool _g4_t_v59;
  typedef FILE *_g4_t_v60;
  typedef signed int _g4_t_v61;
  typedef __off_t _g4_t_v62;
  typedef int _g4_t_v63;
  typedef signed int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int (*_g4_t_v66)(int, int *, int, int);
  typedef int _g4_t_v67;
  typedef char *_g4_t_v68;
  typedef __off_t _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef const char **_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef __off_t _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t _g4_t_v78[4];
  typedef uint32_t _g4_t_s[5];
  typedef uint32_t _g4_t_v80[4];
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef char *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v47)) > _g4_s0 ? (0u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v48)) > _g4_s1 ? (4u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v49)) > _g4_s2 ? (8u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v50)) > _g4_s3 ? (12u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v51)) > _g4_s4 ? (16u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v52)) > _g4_s5 ? (20u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v53)) > _g4_s6 ? (24u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v54)) > _g4_s7 ? (28u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v55)) > _g4_s8 ? (28u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v56)) > _g4_s9 ? (36u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v57)) > _g4_s10 ? (40u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v58)) > _g4_s11 ? (44u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (51u + sizeof(_g4_t_v59)) > _g4_s12 ? (51u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v60)) > _g4_s13 ? (52u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v61)) > _g4_s14 ? (56u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v62)) > _g4_s15 ? (60u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v63)) > _g4_s16 ? (60u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v64)) > _g4_s17 ? (64u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v65)) > _g4_s18 ? (68u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v66)) > _g4_s19 ? (68u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v67)) > _g4_s20 ? (72u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v68)) > _g4_s21 ? (76u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v69)) > _g4_s22 ? (76u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v70)) > _g4_s23 ? (76u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v71)) > _g4_s24 ? (76u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v72)) > _g4_s25 ? (80u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v73)) > _g4_s26 ? (80u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v74)) > _g4_s27 ? (80u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v75)) > _g4_s28 ? (80u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v76)) > _g4_s29 ? (80u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v77)) > _g4_s30 ? (96u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v78)) > _g4_s31 ? (100u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_s)) > _g4_s32 ? (116u + sizeof(_g4_t_s)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v80)) > _g4_s33 ? (136u + sizeof(_g4_t_v80)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v81)) > _g4_s34 ? (152u + sizeof(_g4_t_v81)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v82)) > _g4_s35 ? (156u + sizeof(_g4_t_v82)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v83)) > _g4_s36 ? (160u + sizeof(_g4_t_v83)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v84)) > _g4_s37 ? (164u + sizeof(_g4_t_v84)) : _g4_s37,
    _g4_s39 = (168u + sizeof(_g4_t_v85)) > _g4_s38 ? (168u + sizeof(_g4_t_v85)) : _g4_s38,
    _g4_s40 = (172u + sizeof(_g4_t_v86)) > _g4_s39 ? (172u + sizeof(_g4_t_v86)) : _g4_s39,
    _g4_s41 = (176u + sizeof(_g4_t_v87)) > _g4_s40 ? (176u + sizeof(_g4_t_v87)) : _g4_s40,
    _g4_s42 = (180u + sizeof(_g4_t_v88)) > _g4_s41 ? (180u + sizeof(_g4_t_v88)) : _g4_s41,
    _g4_s43 = (184u + sizeof(_g4_t_v89)) > _g4_s42 ? (184u + sizeof(_g4_t_v89)) : _g4_s42,
    _g4_s44 = (188u + sizeof(_g4_t_v90)) > _g4_s43 ? (188u + sizeof(_g4_t_v90)) : _g4_s43,
    _g4_s45 = (192u + sizeof(_g4_t_v91)) > _g4_s44 ? (192u + sizeof(_g4_t_v91)) : _g4_s44,
    _g4_s46 = (196u + sizeof(_g4_t_v92)) > _g4_s45 ? (196u + sizeof(_g4_t_v92)) : _g4_s45,
    _g4_s47 = (200u + sizeof(_g4_t_v93)) > _g4_s46 ? (200u + sizeof(_g4_t_v93)) : _g4_s46,
    _g4_s48 = (204u + sizeof(_g4_t_v94)) > _g4_s47 ? (204u + sizeof(_g4_t_v94)) : _g4_s47,
    _g4_s49 = (208u + sizeof(_g4_t_v95)) > _g4_s48 ? (208u + sizeof(_g4_t_v95)) : _g4_s48
  };
  alignas(16) uint8_t _g4_sf[_g4_s49];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 51u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 76u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 80u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 80u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 80u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 96u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 100u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 116u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 136u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 152u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 156u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 160u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 164u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 168u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 172u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 176u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 180u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 184u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 188u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 192u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 196u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 200u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 204u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 208u);

  v1 = a1;
  if ( a1 != nullptr )
  {
    v2 = true;
    if ( a1[9] == (const char *)-1 )
      v2 = a1[6] != a1[5];
    v61 = 0;
    v72 = (int)(uintptr_t)a1[10];
    if ( v72 > 0 )
    {
      v3 = a1[12];
      v4 = 0;
      v5 = 0;
      while ( *(uint32_t *)v3 != 0 )
      {
        v2 = true;
        if ( *(uint32_t *)v3 == 1 )
        {
          ++v4;
          v3 += 20;
          if ( v4 == v72 )
          {
LABEL_12:
            v61 = v5;
            v1 = a1;
            goto LABEL_13;
          }
        }
        else
        {
LABEL_8:
          ++v5;
          ++v4;
          v3 += 20;
          if ( v4 == v72 )
            goto LABEL_12;
        }
      }
      if ( *((uint32_t *)v3 + 4) != -1 )
        v2 = true;
      goto LABEL_8;
    }
LABEL_13:
    if ( !v2 )
    {
LABEL_18:
      zip_free(v1);
      return 0;
    }
    if ( v61 == 0 )
    {
      if ( *v1 != nullptr && v1[1] != nullptr && remove(*v1) != 0 )
      {
        v39 = (uint32_t *)__errno();
        zip_error_set(v1 + 2, 22, *v39);
        return -1;
      }
      goto LABEL_18;
    }
    v57 = (char *)malloc(8 * v61);
    if ( v57 != nullptr )
    {
      v58 = (uint32_t *)(v1 + 2);
      v67 = (int)(uintptr_t)zip_cdir_new(v61, (int)(uintptr_t)(v1 + 2));
      if ( v67 == 0 )
        goto LABEL_118;
      v73 = v1;
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = v9;
        ++v8;
        v9 += 60;
        zip_dirent_init(*(uint32_t *)v67 + v10);
      }
      while ( v8 < v61 );
      v11 = (int)(uintptr_t)v73;
      if ( zip_get_archive_flag((int)(uintptr_t)(v73), 1, 0) != 0 )
      {
        v12 = (int)(uintptr_t)zip_memdup((void *)("TORRENTZIPPED-XXXXXXXX"), 0x16u, v58);
        *(uint32_t *)(v67 + 16) = v12;
        if ( v12 != 0 )
        {
          *(uint16_t *)(v67 + 20) = 22;
          goto LABEL_27;
        }
        zip_cdir_free((void *)v67);
LABEL_118:
        free(v57);
        return -1;
      }
      if ( zip_get_archive_flag((int)(uintptr_t)(v73), 1, 8) == 0 )
      {
        if ( v73[9] == (const char *)-1 )
        {
          v36 = v73[7];
          if ( v36 != nullptr )
          {
            v37 = *((void **)v36 + 4);
            if ( v37 != nullptr )
            {
              v38 = (int)(uintptr_t)zip_memdup(v37, *((uint16_t *)v36 + 10), v58);
              *(uint32_t *)(v67 + 16) = v38;
              if ( v38 == 0 )
                goto LABEL_92;
              *(uint16_t *)(v67 + 20) = *((uint16_t *)v73[7] + 10);
            }
          }
        }
        else
        {
          v27 = (int)(uintptr_t)zip_memdup((void *)v73[8], (size_t)v73[9], v58);
          *(uint32_t *)(v67 + 16) = v27;
          if ( v27 == 0 )
          {
LABEL_92:
            zip_cdir_free((void *)v67);
            free(v57);
            return -1;
          }
          *(uint16_t *)(v67 + 20) = (uint16_t)(uintptr_t)v73[9];
        }
      }
LABEL_27:
      v13 = *v73;
      v14 = strlen(*v73);
      v56 = (char *)malloc(v14 + 8);
      if ( v56 == nullptr )
      {
        zip_error_set(v58, 14, 0);
        goto LABEL_92;
      }
      sprintf(v56, "%s.XXXXXX", v13);
      v15 = mkstemp(v56);
      if ( v15 == -1 )
      {
        v32 = (uint32_t *)__errno();
        zip_error_set(v58, 12, *v32);
        free(v56);
        goto LABEL_92;
      }
      v60 = fdopen(v15, (const char *)&off_1B152A5);
      if ( v60 == nullptr )
      {
        v44 = (uint32_t *)__errno();
        zip_error_set(v58, 12, *v44);
        close(v15);
        remove(v56);
        free(v56);
        goto LABEL_92;
      }
      if ( (int)(uintptr_t)v73[10] > 0 )
      {
        v16 = 0;
        v17 = 0;
        v74 = 0;
        v18 = *(uint32_t *)(v11 + 40);
        do
        {
          if ( *(uint32_t *)(*(uint32_t *)(v11 + 48) + v16) != 1 )
          {
            v68 = &v57[8 * v74];
            *(uint32_t *)v68 = v17;
            v54 = v16;
            ++v74;
            *((uint32_t *)v68 + 1) = zip_get_name((uint32_t *)(uintptr_t)v11, v17, 0);
            v18 = *(uint32_t *)(v11 + 40);
            v16 = v54;
          }
          ++v17;
          v16 += 20;
        }
        while ( v17 < v18 );
      }
      if ( zip_get_archive_flag(v11, 1, 0) != 0 )
        qsort(v57, v61, 8u, (__compar_fn_t)sub_4C93F0);
      v59 = false;
      if ( zip_get_archive_flag(v11, 1, 0) == 1 )
        v59 = zip_get_archive_flag(v11, 1, 8) == 0;
      v64 = 0;
      v75 = 0;
      v19 = 0;
      do
      {
        v65 = *(uint32_t *)&v57[8 * v19];
        v70 = 20 * v65;
        if ( !v59 && (unsigned int)(*(uint32_t *)(*(uint32_t *)(v11 + 48) + 20 * v65) - 2) > 1 )
        {
          v63 = 60 * v65;
          if ( fseeko(*(FILE **)(v11 + 4), *(uint32_t *)(**(uint32_t **)(v11 + 28) + 60 * v65 + 56), 0) != 0 )
            goto LABEL_108;
          if ( zip_dirent_read((int)(uintptr_t)&v81, *(FILE **)(v11 + 4), 0, 0, 1, (int)(uintptr_t)v58) != 0 )
            goto LABEL_68;
          v28 = (uint32_t *)(*(uint32_t *)v67 + v75);
          v29 = (uint32_t *)(v63 + **(uint32_t **)(v11 + 28));
          *v28 = *v29;
          v28[1] = v29[1];
          v28[2] = v29[2];
          v28[3] = v29[3];
          v28[4] = v29[4];
          v28[5] = v29[5];
          v28[6] = v29[6];
          v28[7] = v29[7];
          v28[8] = v29[8];
          v28[9] = v29[9];
          v28[10] = v29[10];
          v28[11] = v29[11];
          v28[12] = v29[12];
          v28[13] = v29[13];
          v28[14] = v29[14];
          HIWORD(v52) = v82;
          if ( (v82 & 8) != 0 )
          {
            v30 = *(int **)(v11 + 28);
            v84 = *(uint32_t *)(*v30 + v63 + 12);
            v85 = *(uint32_t *)(*v30 + v63 + 16);
            v31 = *v30;
            LOWORD(v82) = v82 & 0xFFF7;
            v86 = *(uint32_t *)(v31 + v63 + 20);
            *(uint16_t *)(*(uint32_t *)v67 + v75 + 4) &= ~8u;
          }
LABEL_79:
          if ( *(uint32_t *)(*(uint32_t *)(v11 + 48) + v70 + 8) == 0 )
            goto LABEL_59;
          goto LABEL_57;
        }
        zip_dirent_init((int)(uintptr_t)(&v81));
        if ( zip_get_archive_flag(v11, 1, 0) != 0 )
          zip_dirent_torrent_normalize((int)(uintptr_t)(&v81));
        v20 = (int *)(*(uint32_t *)v67 + v75);
        *v20 = v81;
        v20[1] = v82;
        v20[2] = v83;
        v20[3] = v84;
        v20[4] = v85;
        v20[5] = v86;
        v20[6] = (int)(uintptr_t)v87;
        v20[7] = v88;
        v20[8] = v89;
        v20[9] = v90;
        v20[10] = v91;
        v20[11] = v92;
        v20[12] = v93;
        v20[13] = v94;
        v20[14] = v95;
        v21 = (uint32_t *)(*(uint32_t *)(v11 + 48) + v70);
        if ( v21[2] == 0 )
        {
          if ( *v21 == 3 )
          {
            v33 = strdup("-");
            LOWORD(v88) = 1;
            v87 = v33;
            *(uint32_t *)(*(uint32_t *)v67 + v75 + 24) = (uint32_t)(uintptr_t)"-";
            *(uint16_t *)(*(uint32_t *)v67 + v75 + 28) = 1;
          }
          else
          {
            v87 = strdup(*(const char **)(**(uint32_t **)(v11 + 28) + 60 * v65 + 24));
            LOWORD(v88) = strlen(v87);
            *(uint32_t *)(*(uint32_t *)v67 + v75 + 24) = *(uint32_t *)(**(uint32_t **)(v11 + 28) + 60 * v65 + 24);
            *(uint16_t *)(*(uint32_t *)v67 + v75 + 28) = v88;
          }
          goto LABEL_79;
        }
LABEL_57:
        free(v87);
        v22 = strdup(*(const char **)(*(uint32_t *)(v11 + 48) + v70 + 8));
        v87 = v22;
        if ( v22 == nullptr )
          goto LABEL_68;
        LOWORD(v88) = strlen(v22);
        *(uint32_t *)(*(uint32_t *)v67 + v75 + 24) = *(uint32_t *)(*(uint32_t *)(v11 + 48) + v70 + 8);
        *(uint16_t *)(*(uint32_t *)v67 + v75 + 28) = v88;
LABEL_59:
        if ( zip_get_archive_flag(v11, 1, 0) == 0 )
        {
          v23 = *(uint32_t *)(v11 + 48) + v70;
          if ( *(uint32_t *)(v23 + 16) != -1 )
          {
            *(uint32_t *)(*(uint32_t *)v67 + v75 + 40) = *(uint32_t *)(v23 + 12);
            *(uint16_t *)(*(uint32_t *)v67 + v75 + 44) = *(uint32_t *)(*(uint32_t *)(v11 + 48) + v70 + 16);
          }
        }
        v55 = *(uint32_t *)v67 + v75;
        *(uint32_t *)(v55 + 56) = ftello(v60);
        v24 = (uint32_t *)(*(uint32_t *)(v11 + 48) + v70);
        v25 = *v24 - 2;
        if ( v59 || v25 <= 1 )
        {
          if ( v25 <= 1 )
          {
            v26 = v24[1];
          }
          else
          {
            v26 = (int)(uintptr_t)(zip_source_zip(v11, (uint32_t *)(uintptr_t)v11, v65, 16, 0, -1));
            if ( v26 == 0 )
              goto LABEL_68;
          }
          v71 = *(uint32_t *)(v26 + 4);
          v66 = *(int (**)(int, int *, int, int))v26;
          if ( (*(int (**)(int, uint32_t *, int, int))v26)(v71, s, 28, 3) <= 27 || v66(v71, nullptr, 0, 0) < 0 )
          {
LABEL_66:
            if ( v66(v71, (int *)(v78), 8, 4) > 7 )
            {
              *(uint32_t *)(v11 + 8) = v78[0];
              *(uint32_t *)(v11 + 12) = v78[1];
            }
            else
            {
              *(uint32_t *)(v11 + 8) = 20;
              *(uint32_t *)(v11 + 12) = 0;
            }
LABEL_68:
            free(v57);
LABEL_69:
            *(uint32_t *)(v67 + 4) = 0;
            zip_cdir_free((void *)v67);
            zip_dirent_finalize((int)(uintptr_t)(&v81));
            fclose(v60);
LABEL_70:
            remove(v56);
            free(v56);
            return -1;
          }
          v62 = ftello(v60);
          if ( zip_dirent_write((int16_t *)&v81, v60, 1, (int)(uintptr_t)v58) < 0 )
            goto LABEL_68;
          if ( LOWORD(v80[1]) != 0 )
          {
            if ( sub_4C9420((int (*)(int, uint32_t *, int, int))v66, v71, v80, v60, v58) < 0 )
              goto LABEL_68;
          }
          else if ( sub_4C8FC0(v11, v66, v71, (int)(uintptr_t)s, v60, v47, v48, v49, v50, v51, v52, v53, v55) < 0 )
          {
            goto LABEL_68;
          }
          if ( v66(v71, nullptr, 0, 2) < 0 )
            goto LABEL_66;
          v69 = ftello(v60);
          if ( fseeko(v60, v62, 0) < 0 )
          {
LABEL_108:
            v42 = (uint32_t *)__errno();
            zip_error_set(v58, 4, *v42);
            goto LABEL_68;
          }
          v83 = s[3];
          HIWORD(v82) = v80[1];
          v84 = s[2];
          v86 = s[4];
          v85 = v80[0];
          if ( zip_get_archive_flag(v11, 1, 0) != 0 )
            zip_dirent_torrent_normalize((int)(uintptr_t)(&v81));
          if ( zip_dirent_write((int16_t *)&v81, v60, 1, (int)(uintptr_t)v58) < 0 )
            goto LABEL_68;
          if ( fseeko(v60, v69, 0) < 0 )
            goto LABEL_108;
          *(uint32_t *)(*(uint32_t *)v67 + v75 + 8) = v83;
          *(uint16_t *)(*(uint32_t *)v67 + v75 + 6) = HIWORD(v82);
          *(uint32_t *)(*(uint32_t *)v67 + v75 + 16) = v85;
          *(uint32_t *)(*(uint32_t *)v67 + v75 + 20) = v86;
          *(uint32_t *)(*(uint32_t *)v67 + v75 + 12) = v84;
        }
        else if ( zip_dirent_write((int16_t *)&v81, v60, 1, (int)(uintptr_t)v58) < 0
               || sub_4C92A0(*(FILE **)(v11 + 4), *(uint32_t *)(*(uint32_t *)v67 + v75 + 16), v60, (int)(uintptr_t)v58) < 0 )
        {
          goto LABEL_68;
        }
        zip_dirent_finalize((int)(uintptr_t)(&v81));
        ++v64;
        v75 += 60;
        v19 = v64;
      }
      while ( v61 > v64 );
      free(v57);
      if ( zip_cdir_write(v67, v60, (int)(uintptr_t)v58) < 0 )
        goto LABEL_69;
      if ( zip_get_archive_flag(v11, 1, 0) != 0 )
      {
        v76 = ftello(v60);
        if ( zip_filerange_crc(v60, *(uint32_t *)(v67 + 12), *(uint32_t *)(v67 + 8), (uint32_t *)&v77, v58) < 0 )
          goto LABEL_69;
        snprintf((char *)s, 9u, "%08lX", v77);
        if ( fseeko(v60, v76 - 8, 0) < 0 )
        {
          v46 = (uint32_t *)__errno();
          zip_error_set(v58, 4, *v46);
          goto LABEL_69;
        }
        if ( fwrite(s, 8u, 1u, v60) != 1 )
        {
          v43 = (uint32_t *)__errno();
          zip_error_set(v58, 6, *v43);
          goto LABEL_69;
        }
      }
      *(uint32_t *)(v67 + 4) = 0;
      zip_cdir_free((void *)v67);
      if ( fclose(v60) != 0 )
      {
        v45 = (uint32_t *)__errno();
        zip_error_set(v58, 3, *v45);
        goto LABEL_70;
      }
      v34 = 0;
      if ( *(uint32_t *)(v11 + 4) != 0 )
      {
        LOWORD(v34) = 1;
        fclose(*(FILE **)(v11 + 4));
        *(uint32_t *)(v11 + 4) = 0;
      }
      if ( rename(v56, *(const char **)v11) != 0 )
      {
        v35 = (uint32_t *)__errno();
        zip_error_set(v58, 2, *v35);
        remove(v56);
        free(v56);
        v6 = -1;
        if ( v34 != 0 )
        {
          *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(fopen(*(const char **)v11, "rb"));
          return -1;
        }
        return v6;
      }
      else
      {
        v40 = umask(0);
        v41 = ~v40;
        umask(v40);
        chmod(*(const char **)v11, v41 & 0x1B6);
        zip_free((void *)v11);
        free(v56);
        return 0;
      }
    }
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_delete  (binary VA: 0x4ca4f0)
// Original: zip_delete
// ----------------------------------------------------------------------------
int zip_delete(int a1, int a2)
{
  int v2;
  int v3;

  if ( a2 < 0 || a2 >= *(uint32_t *)(a1 + 40) )
  {
    zip_error_set(a1 + 8, 18, 0);
    return -1;
  }
  else
  {
    v2 = zip_unchange((uint32_t *)(uintptr_t)a1, a2, 1);
    v3 = -1;
    if ( v2 == 0 )
    {
      v3 = 0;
      *(uint32_t *)(*(uint32_t *)(a1 + 48) + 20 * a2) = 1;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: zip_cdir_grow  (binary VA: 0x4ca590)
// Original: zip_cdir_grow
// ----------------------------------------------------------------------------
int zip_cdir_grow(int a1, int a2, int a3)
{
  void *v3;

  if ( *(uint32_t *)(a1 + 4) > a2 )
  {
    zip_error_set(a3, 20, 0);
    return -1;
  }
  else
  {
    v3 = realloc(*(void **)a1, 60 * a2);
    if ( v3 != nullptr )
    {
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
      *(uint32_t *)(a1 + 4) = a2;
      return 0;
    }
    else
    {
      zip_error_set(a3, 14, 0);
      return -1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: zip_cdir_new  (binary VA: 0x4ca640)
// Original: zip_cdir_new
// ----------------------------------------------------------------------------
uint32_t * zip_cdir_new(int a1, int a2)
{
  uint32_t *v2;
  void *v3;
  void *size;

  v2 = (uint32_t *)(malloc(0x18u));
  if ( v2 != nullptr )
  {
    v3 = malloc(60 * a1);
    *v2 = (uint32_t)(uintptr_t)(v3);
    if ( v3 != nullptr )
    {
      v2[1] = a1;
      v2[3] = 0;
      v2[2] = 0;
      v2[4] = 0;
      *((uint16_t *)v2 + 10) = 0;
    }
    else
    {
      zip_error_set(a2, 14, 0);
      size = v2;
      v2 = nullptr;
      free(size);
    }
  }
  else
  {
    zip_error_set(a2, 14, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: zip_dirent_finalize  (binary VA: 0x4ca700)
// Original: zip_dirent_finalize
// ----------------------------------------------------------------------------
void zip_dirent_finalize(int a1)
{
  void *ptr;

  free(*(void **)(a1 + 24));
  ptr = *(void **)(a1 + 32);
  *(uint32_t *)(a1 + 24) = 0;
  free(ptr);
  *(uint32_t *)(a1 + 32) = 0;
  free(*(void **)(a1 + 40));
  *(uint32_t *)(a1 + 40) = 0;
}

// ----------------------------------------------------------------------------
// Function: zip_cdir_free  (binary VA: 0x4ca760)
// Original: zip_cdir_free
// ----------------------------------------------------------------------------
void zip_cdir_free(void *ptr)
{
  int v1;
  int v2;
  int v3;

  if ( ptr != nullptr )
  {
    if ( *((int *)ptr + 1) > 0 )
    {
      v1 = 0;
      v2 = 0;
      do
      {
        ++v2;
        v3 = v1 + *(uint32_t *)ptr;
        v1 += 60;
        zip_dirent_finalize(v3);
      }
      while ( *((uint32_t *)ptr + 1) > v2 );
    }
    free(*((void **)ptr + 4));
    free(*(void **)ptr);
    free(ptr);
  }
}

// ----------------------------------------------------------------------------
// Function: zip_dirent_init  (binary VA: 0x4ca7d0)
// Original: zip_dirent_init
// ----------------------------------------------------------------------------
int zip_dirent_init(int a1)
{
  *(uint16_t *)a1 = 0;
  *(uint16_t *)(a1 + 2) = 20;
  *(uint16_t *)(a1 + 4) = 0;
  *(uint16_t *)(a1 + 6) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint16_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint16_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint16_t *)(a1 + 44) = 0;
  *(uint16_t *)(a1 + 46) = 0;
  *(uint16_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: zip_dirent_torrent_normalize  (binary VA: 0x4ca850)
// Original: zip_dirent_torrent_normalize
// ----------------------------------------------------------------------------
void zip_dirent_torrent_normalize(int a1)
{
  time_t v1;
  struct tm *v2;
  int tm_gmtoff;
  void *v4;
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  v1 = dword_20D10A0;
  if ( dword_20D10A0 == 0 )
  {
    dword_20D10C0 = 0;
    dword_20D10C4 = 32;
    dword_20D10C8 = 23;
    dword_20D10CC = 24;
    dword_20D10D0 = 11;
    dword_20D10D4 = 96;
    dword_20D10D8 = 0;
    dword_20D10DC = 0;
    dword_20D10E0 = 0;
    time(&timer);
    v2 = localtime(&timer);
    tm_gmtoff = v2->tm_gmtoff;
    dword_20D10E8 = (int)(uintptr_t)v2->tm_zone;
    dword_20D10E4 = tm_gmtoff;
    v1 = mktime((struct tm *)&dword_20D10C0);
    dword_20D10A0 = v1;
  }
  *(uint32_t *)(a1 + 8) = v1;
  *(uint16_t *)a1 = 0;
  v4 = *(void **)(a1 + 32);
  *(uint16_t *)(a1 + 2) = 20;
  *(uint16_t *)(a1 + 4) = 2;
  *(uint16_t *)(a1 + 6) = 8;
  *(uint16_t *)(a1 + 46) = 0;
  *(uint16_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  free(v4);
  *(uint32_t *)(a1 + 32) = 0;
  *(uint16_t *)(a1 + 36) = 0;
  free(*(void **)(a1 + 40));
  *(uint32_t *)(a1 + 40) = 0;
  *(uint16_t *)(a1 + 44) = 0;
}

// ----------------------------------------------------------------------------
// Function: zip_dirent_write  (binary VA: 0x4ca990)
// Original: zip_dirent_write
// ----------------------------------------------------------------------------
int zip_dirent_write(int16_t *a1, FILE *s, int a3, int a4)
{
  int16_t v4;
  char *v5;
  uint8_t *v6;
  int v7;
  char *v8;
  uint8_t *v9;
  int16_t v10;
  char *v11;
  char v12;
  uint8_t *v13;
  int v14;
  char *v15;
  uint8_t *v16;
  int16_t v17;
  char *v18;
  uint8_t *v19;
  int v20;
  char *v21;
  uint8_t *v22;
  struct tm *v23;
  int16_t v24; // bp
  int v25;
  int tm_sec;
  char *v27;
  int v28;
  char v29;
  uint8_t *v30;
  int v31;
  char *v32;
  uint8_t *v33;
  char *v34;
  uint8_t *v35;
  char *v36;
  uint8_t *v37;
  unsigned int v38;
  char *v39;
  uint8_t *v40;
  char *v41;
  uint8_t *v42;
  char *v43;
  uint8_t *v44;
  char *v45;
  uint8_t *v46;
  unsigned int v47;
  char *v48;
  uint8_t *v49;
  char *v50;
  uint8_t *v51;
  char *v52;
  uint8_t *v53;
  char *v54;
  uint8_t *v55;
  unsigned int v56;
  char *v57;
  uint8_t *v58;
  char *v59;
  uint8_t *v60;
  char *v61;
  uint8_t *v62;
  char *v63;
  uint8_t *v64;
  int16_t v65;
  char *v66;
  uint8_t *v67;
  int v68;
  char *v69;
  uint8_t *v70;
  int16_t v71;
  char *v72;
  uint8_t *v73;
  int v74;
  char *v75;
  uint8_t *v76;
  uint16_t v77;
  uint16_t v78;
  uint16_t v79;
  int16_t v81;
  char *v82;
  uint8_t *flags;
  int v84;
  char *v85;
  uint8_t *v86;
  int16_t v87;
  char *v88;
  uint8_t *v89;
  int v90;
  char *v91;
  uint8_t *v92;
  int16_t v93;
  char *v94;
  uint8_t *v95;
  int v96;
  char *v97;
  uint8_t *v98;
  int16_t v99;
  char *v100;
  uint8_t *v101;
  int v102;
  char *v103;
  uint8_t *v104;
  unsigned int v105;
  char *v106;
  uint8_t *v107;
  char *v108;
  uint8_t *v109;
  char *v110;
  uint8_t *v111;
  char *v112;
  uint8_t *v113;
  unsigned int v114;
  char *v115;
  uint8_t *v116;
  char *v117;
  uint8_t *v118;
  char *v119;
  uint8_t *v120;
  char *v121;
  uint8_t *v122;
  uint32_t *v123;
  typedef uint8_t _g4_t_v124;
  typedef uint8_t _g4_t_v125;
  typedef char _g4_t_v126;
  typedef char _g4_t_v127;
  typedef char _g4_t_v128;
  typedef char _g4_t_v129;
  typedef char _g4_t_v130;
  typedef char _g4_t_v131;
  typedef char _g4_t_v132;
  typedef char _g4_t_v133;
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v124)) > _g4_s0 ? (12u + sizeof(_g4_t_v124)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v125)) > _g4_s1 ? (12u + sizeof(_g4_t_v125)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v126)) > _g4_s2 ? (12u + sizeof(_g4_t_v126)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v127)) > _g4_s3 ? (12u + sizeof(_g4_t_v127)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v128)) > _g4_s4 ? (12u + sizeof(_g4_t_v128)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v129)) > _g4_s5 ? (12u + sizeof(_g4_t_v129)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v130)) > _g4_s6 ? (12u + sizeof(_g4_t_v130)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v131)) > _g4_s7 ? (12u + sizeof(_g4_t_v131)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v132)) > _g4_s8 ? (12u + sizeof(_g4_t_v132)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v133)) > _g4_s9 ? (12u + sizeof(_g4_t_v133)) : _g4_s9,
    _g4_s11 = (27u + sizeof(_g4_t_timer)) > _g4_s10 ? (27u + sizeof(_g4_t_timer)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 12u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 12u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 12u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 12u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 12u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 12u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 12u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 12u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 12u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 12u);
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 27u);

  if ( a3 != 0 )
  {
    fwrite(&unk_1B152B1, 1u, 4u, s);
  }
  else
  {
    fwrite(&off_1B152B6, 1u, 4u, s);
    v81 = *a1;
    v82 = ((char *)0) - 1;
    (void)0;
    if ( (int)(uintptr_t)v82 < 0 && ((int)(uintptr_t)v82 < (int)(uintptr_t)((char *)1) || (uint8_t)v81 == 10) )
    {
      v130 = HIBYTE(v81);
      __swbuf((uint8_t)v81, s);
      HIBYTE(v81) = v130;
    }
    else
    {
      flags = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
      *flags = v81;
      (void)0;
    }
    v84 = HIBYTE(v81);
    v85 = ((char *)0) - 1;
    (void)0;
    if ( (int)(uintptr_t)v85 < 0 && ((int)(uintptr_t)v85 < (int)(uintptr_t)((char *)1) || (uint8_t)v84 == 10) )
    {
      __swbuf(v84, s);
    }
    else
    {
      v86 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
      *v86 = v84;
      (void)0;
    }
  }
  v4 = a1[1];
  v5 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v5 < 0 && ((int)(uintptr_t)v5 < (int)(uintptr_t)((char *)1) || (uint8_t)v4 == 10) )
  {
    v127 = HIBYTE(v4);
    __swbuf((uint8_t)v4, s);
    HIBYTE(v4) = v127;
  }
  else
  {
    v6 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v6 = v4;
    (void)0;
  }
  v7 = HIBYTE(v4);
  v8 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v8 < 0 && ((int)(uintptr_t)v8 < (int)(uintptr_t)((char *)1) || (uint8_t)v7 == 10) )
  {
    __swbuf(v7, s);
  }
  else
  {
    v9 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v9 = v7;
    (void)0;
  }
  v10 = a1[2];
  v11 = ((char *)0) - 1;
  (void)0;
  v12 = v10;
  if ( (int)(uintptr_t)v11 < 0 && ((int)(uintptr_t)v11 < (int)(uintptr_t)((char *)1) || (uint8_t)v10 == 10) )
  {
    v124 = HIBYTE(v10);
    __swbuf((uint8_t)v10, s);
    v15 = ((char *)0) - 1;
    v14 = v124;
    (void)0;
    if ( (int)(uintptr_t)v15 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v13 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    v14 = HIBYTE(v10);
    *v13 = v12;
    (void)0;
    v15 = ((char *)0) - 1;
    (void)0;
    if ( (int)(uintptr_t)v15 >= 0 )
      goto LABEL_9;
  }
  if ( (int)(uintptr_t)v15 < (int)(uintptr_t)((char *)1) || (uint8_t)v14 == 10 )
  {
    __swbuf(v14, s);
    goto LABEL_10;
  }
LABEL_9:
  v16 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
  *v16 = v14;
  (void)0;
LABEL_10:
  v17 = a1[3];
  v18 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v18 < 0 && ((int)(uintptr_t)v18 < (int)(uintptr_t)((char *)1) || (uint8_t)v17 == 10) )
  {
    v126 = HIBYTE(v17);
    __swbuf((uint8_t)v17, s);
    HIBYTE(v17) = v126;
  }
  else
  {
    v19 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v19 = v17;
    (void)0;
  }
  v20 = HIBYTE(v17);
  v21 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v21 < 0 && ((int)(uintptr_t)v21 < (int)(uintptr_t)((char *)1) || (uint8_t)v20 == 10) )
  {
    __swbuf(v20, s);
  }
  else
  {
    v22 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v22 = v20;
    (void)0;
  }
  timer = *((uint32_t *)a1 + 2);
  v23 = localtime(&timer);
  v24 = LOWORD(v23->tm_mday) + 32 * (LOWORD(v23->tm_mon) + 1) + ((LOWORD(v23->tm_year) - 80) << 9);
  v25 = (v23->tm_hour << 11) + 32 * v23->tm_min;
  tm_sec = v23->tm_sec;
  v27 = ((char *)0) - 1;
  v28 = v25 + (tm_sec >> 1);
  v29 = v28;
  (void)0;
  if ( (int)(uintptr_t)v27 < 0 && ((int)(uintptr_t)v27 < (int)(uintptr_t)((char *)1) || (uint8_t)v28 == 10) )
  {
    v125 = BYTE1(v28);
    __swbuf((uint8_t)v28, s);
    v32 = ((char *)0) - 1;
    v31 = v125;
    (void)0;
    if ( (int)(uintptr_t)v32 >= 0 )
      goto LABEL_16;
  }
  else
  {
    v30 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    v31 = BYTE1(v28);
    *v30 = v29;
    (void)0;
    v32 = ((char *)0) - 1;
    (void)0;
    if ( (int)(uintptr_t)v32 >= 0 )
      goto LABEL_16;
  }
  if ( (int)(uintptr_t)v32 < (int)(uintptr_t)((char *)1) || (uint8_t)v31 == 10 )
  {
    __swbuf(v31, s);
    goto LABEL_17;
  }
LABEL_16:
  v33 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
  *v33 = v31;
  (void)0;
LABEL_17:
  v34 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v34 < 0 && ((int)(uintptr_t)v34 < (int)(uintptr_t)((char *)1) || (uint8_t)v24 == 10) )
  {
    __swbuf((uint8_t)v24, s);
  }
  else
  {
    v35 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v35 = v24;
    (void)0;
  }
  v36 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v36 < 0 && ((int)(uintptr_t)v36 < (int)(uintptr_t)((char *)1) || HIBYTE(v24) == 10) )
  {
    __swbuf(HIBYTE(v24), s);
  }
  else
  {
    v37 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v37 = HIBYTE(v24);
    (void)0;
  }
  v38 = *((uint32_t *)a1 + 3);
  v39 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v39 < 0 && ((int)(uintptr_t)v39 < (int)(uintptr_t)((char *)1) || (uint8_t)v38 == 10) )
  {
    __swbuf((uint8_t)v38, s);
  }
  else
  {
    v40 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v40 = v38;
    (void)0;
  }
  v41 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v41 < 0 && ((int)(uintptr_t)v41 < (int)(uintptr_t)((char *)1) || BYTE1(v38) == 10) )
  {
    __swbuf(BYTE1(v38), s);
  }
  else
  {
    v42 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v42 = BYTE1(v38);
    (void)0;
  }
  v43 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v43 < 0 && ((int)(uintptr_t)v43 < (int)(uintptr_t)((char *)1) || BYTE2(v38) == 10) )
  {
    __swbuf(BYTE2(v38), s);
  }
  else
  {
    v44 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v44 = BYTE2(v38);
    (void)0;
  }
  v45 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v45 < 0 && ((int)(uintptr_t)v45 < (int)(uintptr_t)((char *)1) || HIBYTE(v38) == 10) )
  {
    __swbuf(HIBYTE(v38), s);
  }
  else
  {
    v46 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v46 = HIBYTE(v38);
    (void)0;
  }
  v47 = *((uint32_t *)a1 + 4);
  v48 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v48 < 0 && ((int)(uintptr_t)v48 < (int)(uintptr_t)((char *)1) || (uint8_t)v47 == 10) )
  {
    __swbuf((uint8_t)v47, s);
  }
  else
  {
    v49 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v49 = v47;
    (void)0;
  }
  v50 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v50 < 0 && ((int)(uintptr_t)v50 < (int)(uintptr_t)((char *)1) || BYTE1(v47) == 10) )
  {
    __swbuf(BYTE1(v47), s);
  }
  else
  {
    v51 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v51 = BYTE1(v47);
    (void)0;
  }
  v52 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v52 < 0 && ((int)(uintptr_t)v52 < (int)(uintptr_t)((char *)1) || BYTE2(v47) == 10) )
  {
    __swbuf(BYTE2(v47), s);
  }
  else
  {
    v53 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v53 = BYTE2(v47);
    (void)0;
  }
  v54 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v54 < 0 && ((int)(uintptr_t)v54 < (int)(uintptr_t)((char *)1) || HIBYTE(v47) == 10) )
  {
    __swbuf(HIBYTE(v47), s);
  }
  else
  {
    v55 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v55 = HIBYTE(v47);
    (void)0;
  }
  v56 = *((uint32_t *)a1 + 5);
  v57 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v57 < 0 && ((int)(uintptr_t)v57 < (int)(uintptr_t)((char *)1) || (uint8_t)v56 == 10) )
  {
    __swbuf((uint8_t)v56, s);
  }
  else
  {
    v58 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v58 = v56;
    (void)0;
  }
  v59 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v59 < 0 && ((int)(uintptr_t)v59 < (int)(uintptr_t)((char *)1) || BYTE1(v56) == 10) )
  {
    __swbuf(BYTE1(v56), s);
  }
  else
  {
    v60 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v60 = BYTE1(v56);
    (void)0;
  }
  v61 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v61 < 0 && ((int)(uintptr_t)v61 < (int)(uintptr_t)((char *)1) || BYTE2(v56) == 10) )
  {
    __swbuf(BYTE2(v56), s);
  }
  else
  {
    v62 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v62 = BYTE2(v56);
    (void)0;
  }
  v63 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v63 < 0 && ((int)(uintptr_t)v63 < (int)(uintptr_t)((char *)1) || HIBYTE(v56) == 10) )
  {
    __swbuf(HIBYTE(v56), s);
  }
  else
  {
    v64 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v64 = HIBYTE(v56);
    (void)0;
  }
  v65 = a1[14];
  v66 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v66 < 0 && ((int)(uintptr_t)v66 < (int)(uintptr_t)((char *)1) || (uint8_t)v65 == 10) )
  {
    v129 = HIBYTE(v65);
    __swbuf((uint8_t)v65, s);
    HIBYTE(v65) = v129;
  }
  else
  {
    v67 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v67 = v65;
    (void)0;
  }
  v68 = HIBYTE(v65);
  v69 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v69 < 0 && ((int)(uintptr_t)v69 < (int)(uintptr_t)((char *)1) || (uint8_t)v68 == 10) )
  {
    __swbuf(v68, s);
  }
  else
  {
    v70 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v70 = v68;
    (void)0;
  }
  v71 = a1[18];
  v72 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v72 < 0 && ((int)(uintptr_t)v72 < (int)(uintptr_t)((char *)1) || (uint8_t)v71 == 10) )
  {
    v128 = HIBYTE(v71);
    __swbuf((uint8_t)v71, s);
    HIBYTE(v71) = v128;
  }
  else
  {
    v73 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v73 = v71;
    (void)0;
  }
  v74 = HIBYTE(v71);
  v75 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v75 < 0 && ((int)(uintptr_t)v75 < (int)(uintptr_t)((char *)1) || (uint8_t)v74 == 10) )
  {
    __swbuf(v74, s);
    if ( a3 != 0 )
      goto LABEL_53;
  }
  else
  {
    v76 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v76 = v74;
    (void)0;
    if ( a3 != 0 )
      goto LABEL_53;
  }
  v87 = a1[22];
  v88 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v88 < 0 && ((int)(uintptr_t)v88 < (int)(uintptr_t)((char *)1) || (uint8_t)v87 == 10) )
  {
    v133 = HIBYTE(v87);
    __swbuf((uint8_t)v87, s);
    HIBYTE(v87) = v133;
  }
  else
  {
    v89 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v89 = v87;
    (void)0;
  }
  v90 = HIBYTE(v87);
  v91 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v91 < 0 && ((int)(uintptr_t)v91 < (int)(uintptr_t)((char *)1) || (uint8_t)v90 == 10) )
  {
    __swbuf(v90, s);
  }
  else
  {
    v92 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v92 = v90;
    (void)0;
  }
  v93 = a1[23];
  v94 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v94 < 0 && ((int)(uintptr_t)v94 < (int)(uintptr_t)((char *)1) || (uint8_t)v93 == 10) )
  {
    v131 = HIBYTE(v93);
    __swbuf((uint8_t)v93, s);
    HIBYTE(v93) = v131;
  }
  else
  {
    v95 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v95 = v93;
    (void)0;
  }
  v96 = HIBYTE(v93);
  v97 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v97 < 0 && ((int)(uintptr_t)v97 < (int)(uintptr_t)((char *)1) || (uint8_t)v96 == 10) )
  {
    __swbuf(v96, s);
  }
  else
  {
    v98 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v98 = v96;
    (void)0;
  }
  v99 = a1[24];
  v100 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v100 < 0 && ((int)(uintptr_t)v100 < (int)(uintptr_t)((char *)1) || (uint8_t)v99 == 10) )
  {
    v132 = HIBYTE(v99);
    __swbuf((uint8_t)v99, s);
    HIBYTE(v99) = v132;
  }
  else
  {
    v101 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v101 = v99;
    (void)0;
  }
  v102 = HIBYTE(v99);
  v103 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v103 < 0 && ((int)(uintptr_t)v103 < (int)(uintptr_t)((char *)1) || (uint8_t)v102 == 10) )
  {
    __swbuf(v102, s);
  }
  else
  {
    v104 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v104 = v102;
    (void)0;
  }
  v105 = *((uint32_t *)a1 + 13);
  v106 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v106 < 0 && ((int)(uintptr_t)v106 < (int)(uintptr_t)((char *)1) || (uint8_t)v105 == 10) )
  {
    __swbuf((uint8_t)v105, s);
  }
  else
  {
    v107 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v107 = v105;
    (void)0;
  }
  v108 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v108 < 0 && ((int)(uintptr_t)v108 < (int)(uintptr_t)((char *)1) || BYTE1(v105) == 10) )
  {
    __swbuf(BYTE1(v105), s);
  }
  else
  {
    v109 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v109 = BYTE1(v105);
    (void)0;
  }
  v110 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v110 < 0 && ((int)(uintptr_t)v110 < (int)(uintptr_t)((char *)1) || BYTE2(v105) == 10) )
  {
    __swbuf(BYTE2(v105), s);
  }
  else
  {
    v111 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v111 = BYTE2(v105);
    (void)0;
  }
  v112 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v112 < 0 && ((int)(uintptr_t)v112 < (int)(uintptr_t)((char *)1) || HIBYTE(v105) == 10) )
  {
    __swbuf(HIBYTE(v105), s);
  }
  else
  {
    v113 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v113 = HIBYTE(v105);
    (void)0;
  }
  v114 = *((uint32_t *)a1 + 14);
  v115 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v115 < 0 && ((int)(uintptr_t)v115 < (int)(uintptr_t)((char *)1) || (uint8_t)v114 == 10) )
  {
    __swbuf((uint8_t)v114, s);
  }
  else
  {
    v116 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v116 = v114;
    (void)0;
  }
  v117 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v117 < 0 && ((int)(uintptr_t)v117 < (int)(uintptr_t)((char *)1) || BYTE1(v114) == 10) )
  {
    __swbuf(BYTE1(v114), s);
  }
  else
  {
    v118 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v118 = BYTE1(v114);
    (void)0;
  }
  v119 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v119 < 0 && ((int)(uintptr_t)v119 < (int)(uintptr_t)((char *)1) || BYTE2(v114) == 10) )
  {
    __swbuf(BYTE2(v114), s);
  }
  else
  {
    v120 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v120 = BYTE2(v114);
    (void)0;
  }
  v121 = ((char *)0) - 1;
  (void)0;
  if ( (int)(uintptr_t)v121 < 0 && ((int)(uintptr_t)v121 < (int)(uintptr_t)((char *)1) || HIBYTE(v114) == 10) )
  {
    __swbuf(HIBYTE(v114), s);
LABEL_53:
    v77 = a1[14];
    if ( v77 == 0 )
      goto LABEL_54;
LABEL_140:
    fwrite(*((const void **)a1 + 6), 1u, v77, s);
    v78 = a1[18];
    if ( v78 == 0 )
      goto LABEL_55;
LABEL_141:
    fwrite(*((const void **)a1 + 8), 1u, v78, s);
    goto LABEL_55;
  }
  v122 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
  *v122 = HIBYTE(v114);
  (void)0;
  v77 = a1[14];
  if ( v77 != 0 )
    goto LABEL_140;
LABEL_54:
  v78 = a1[18];
  if ( v78 != 0 )
    goto LABEL_141;
LABEL_55:
  if ( a3 == 0 )
  {
    v79 = a1[22];
    if ( v79 != 0 )
      fwrite(*((const void **)a1 + 10), 1u, v79, s);
  }
  if ( (ferror(s) ? 0x40 : 0) == 0 )
    return 0;
  v123 = (uint32_t *)__errno();
  zip_error_set(a4, 6, *v123);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_cdir_write  (binary VA: 0x4cb640)
// Original: zip_cdir_write
// ----------------------------------------------------------------------------
int zip_cdir_write(int a1, FILE *stream, int a3)
{
  int v3;
  int v4;
  char *v6;
  uint8_t *flags;
  char *v8;
  uint8_t *v9;
  char *v10;
  uint8_t *v11;
  char *v12;
  uint8_t *v13;
  int16_t v14;
  char *v15;
  uint8_t *v16;
  int v17;
  char *v18;
  uint8_t *v19;
  int16_t v20;
  char *v21;
  uint8_t *v22;
  int v23;
  char *v24;
  uint8_t *v25;
  char *v26;
  unsigned int v27;
  uint8_t *v28;
  char *v29;
  uint8_t *v30;
  char *v31;
  uint8_t *v32;
  char *v33;
  uint8_t *v34;
  char *v35;
  unsigned int v36;
  uint8_t *v37;
  char *v38;
  uint8_t *v39;
  char *v40;
  uint8_t *v41;
  char *v42;
  uint8_t *v43;
  int16_t v44;
  char *v45;
  uint8_t *v46;
  int v47;
  char *v48;
  uint8_t *v49;
  uint32_t *v50;
  char v51;
  char v52;
  char v53;

  *(uint32_t *)(a1 + 12) = ftello(stream);
  if ( *(int *)(a1 + 4) <= 0 )
  {
LABEL_6:
    *(uint32_t *)(a1 + 8) = ftello(stream) - *(uint32_t *)(a1 + 12);
    fwrite(&unk_1B152BB, 1u, 4u, stream);
    v6 = ((char *)0) - 1;
    (void)0;
    if ( (int)(uintptr_t)v6 >= 0 || (int)(uintptr_t)v6 >= (int)(uintptr_t)((char *)1) )
    {
      flags = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
      *flags = 0;
      (void)0;
      v8 = ((char *)0) - 1;
      (void)0;
      if ( (int)(uintptr_t)v8 >= 0 )
        goto LABEL_8;
    }
    else
    {
      __swbuf(0, stream);
      v8 = ((char *)0) - 1;
      (void)0;
      if ( (int)(uintptr_t)v8 >= 0 )
        goto LABEL_8;
    }
    if ( (int)(uintptr_t)v8 < (int)(uintptr_t)((char *)1) )
    {
      __swbuf(0, stream);
      v10 = ((char *)0) - 1;
      (void)0;
      if ( (int)(uintptr_t)v10 >= 0 )
        goto LABEL_9;
      goto LABEL_45;
    }
LABEL_8:
    v9 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v9 = 0;
    (void)0;
    v10 = ((char *)0) - 1;
    (void)0;
    if ( (int)(uintptr_t)v10 >= 0 )
      goto LABEL_9;
LABEL_45:
    if ( (int)(uintptr_t)v10 < (int)(uintptr_t)((char *)1) )
    {
      __swbuf(0, stream);
      v12 = ((char *)0) - 1;
      (void)0;
      if ( (int)(uintptr_t)v12 >= 0 )
        goto LABEL_10;
LABEL_47:
      if ( (int)(uintptr_t)v12 < (int)(uintptr_t)((char *)1) )
      {
        __swbuf(0, stream);
LABEL_11:
        v14 = *(uint16_t *)(a1 + 4);
        v15 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v15 < 0 && ((int)(uintptr_t)v15 < (int)(uintptr_t)((char *)1) || (uint8_t)v14 == 10) )
        {
          v53 = HIBYTE(v14);
          __swbuf((uint8_t)v14, stream);
          HIBYTE(v14) = v53;
        }
        else
        {
          v16 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v16 = v14;
          (void)0;
        }
        v17 = HIBYTE(v14);
        v18 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v18 < 0 && ((int)(uintptr_t)v18 < (int)(uintptr_t)((char *)1) || (uint8_t)v17 == 10) )
        {
          __swbuf(v17, stream);
        }
        else
        {
          v19 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v19 = v17;
          (void)0;
        }
        v20 = *(uint16_t *)(a1 + 4);
        v21 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v21 < 0 && ((int)(uintptr_t)v21 < (int)(uintptr_t)((char *)1) || (uint8_t)v20 == 10) )
        {
          v52 = HIBYTE(v20);
          __swbuf((uint8_t)v20, stream);
          HIBYTE(v20) = v52;
        }
        else
        {
          v22 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v22 = v20;
          (void)0;
        }
        v23 = HIBYTE(v20);
        v24 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v24 < 0 && ((int)(uintptr_t)v24 < (int)(uintptr_t)((char *)1) || (uint8_t)v23 == 10) )
        {
          __swbuf(v23, stream);
        }
        else
        {
          v25 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v25 = v23;
          (void)0;
        }
        v26 = ((char *)0) - 1;
        v27 = *(uint32_t *)(a1 + 8);
        (void)0;
        if ( (int)(uintptr_t)v26 < 0 && ((int)(uintptr_t)v26 < (int)(uintptr_t)((char *)1) || (uint8_t)v27 == 10) )
        {
          __swbuf((uint8_t)v27, stream);
        }
        else
        {
          v28 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v28 = v27;
          (void)0;
        }
        v29 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v29 < 0 && ((int)(uintptr_t)v29 < (int)(uintptr_t)((char *)1) || BYTE1(v27) == 10) )
        {
          __swbuf(BYTE1(v27), stream);
        }
        else
        {
          v30 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v30 = BYTE1(v27);
          (void)0;
        }
        v31 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v31 < 0 && ((int)(uintptr_t)v31 < (int)(uintptr_t)((char *)1) || BYTE2(v27) == 10) )
        {
          __swbuf(BYTE2(v27), stream);
        }
        else
        {
          v32 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v32 = BYTE2(v27);
          (void)0;
        }
        v33 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v33 < 0 && ((int)(uintptr_t)v33 < (int)(uintptr_t)((char *)1) || HIBYTE(v27) == 10) )
        {
          __swbuf(HIBYTE(v27), stream);
        }
        else
        {
          v34 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v34 = HIBYTE(v27);
          (void)0;
        }
        v35 = ((char *)0) - 1;
        v36 = *(uint32_t *)(a1 + 12);
        (void)0;
        if ( (int)(uintptr_t)v35 < 0 && ((int)(uintptr_t)v35 < (int)(uintptr_t)((char *)1) || (uint8_t)v36 == 10) )
        {
          __swbuf((uint8_t)v36, stream);
        }
        else
        {
          v37 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v37 = v36;
          (void)0;
        }
        v38 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v38 < 0 && ((int)(uintptr_t)v38 < (int)(uintptr_t)((char *)1) || BYTE1(v36) == 10) )
        {
          __swbuf(BYTE1(v36), stream);
        }
        else
        {
          v39 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v39 = BYTE1(v36);
          (void)0;
        }
        v40 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v40 < 0 && ((int)(uintptr_t)v40 < (int)(uintptr_t)((char *)1) || BYTE2(v36) == 10) )
        {
          __swbuf(BYTE2(v36), stream);
        }
        else
        {
          v41 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v41 = BYTE2(v36);
          (void)0;
        }
        v42 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v42 < 0 && ((int)(uintptr_t)v42 < (int)(uintptr_t)((char *)1) || HIBYTE(v36) == 10) )
        {
          __swbuf(HIBYTE(v36), stream);
        }
        else
        {
          v43 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v43 = HIBYTE(v36);
          (void)0;
        }
        v44 = *(uint16_t *)(a1 + 20);
        v45 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v45 < 0 && ((int)(uintptr_t)v45 < (int)(uintptr_t)((char *)1) || (uint8_t)v44 == 10) )
        {
          v51 = HIBYTE(v44);
          __swbuf((uint8_t)v44, stream);
          HIBYTE(v44) = v51;
        }
        else
        {
          v46 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v46 = v44;
          (void)0;
        }
        v47 = HIBYTE(v44);
        v48 = ((char *)0) - 1;
        (void)0;
        if ( (int)(uintptr_t)v48 < 0 && ((int)(uintptr_t)v48 < (int)(uintptr_t)((char *)1) || (uint8_t)v47 == 10) )
        {
          __swbuf(v47, stream);
        }
        else
        {
          v49 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
          *v49 = v47;
          (void)0;
        }
        fwrite(*(const void **)(a1 + 16), 1u, *(uint16_t *)(a1 + 20), stream);
        if ( (ferror(stream) ? 0x40 : 0) == 0 )
          return 0;
        v50 = (uint32_t *)__errno();
        zip_error_set(a3, 6, *v50);
        return -1;
      }
LABEL_10:
      v13 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
      *v13 = 0;
      (void)0;
      goto LABEL_11;
    }
LABEL_9:
    v11 = (uint8_t *)((uintptr_t)_g4_dummy_file_buf);
    *v11 = 0;
    (void)0;
    v12 = ((char *)0) - 1;
    (void)0;
    if ( (int)(uintptr_t)v12 >= 0 )
      goto LABEL_10;
    goto LABEL_47;
  }
  v3 = 0;
  v4 = 0;
  while ( zip_dirent_write((int16_t *)(*(uint32_t *)a1 + v3), stream, 0, a3) == 0 )
  {
    ++v4;
    v3 += 60;
    if ( *(uint32_t *)(a1 + 4) <= v4 )
      goto LABEL_6;
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_read2  (binary VA: 0x4cbc20)
// Original: zip_read2
// ----------------------------------------------------------------------------
int zip_read2(uint8_t **a1)
{
  int result;

  result = **a1 + ((*a1)[1] << 8);
  *a1 += 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_read4  (binary VA: 0x4cbc40)
// Original: zip_read4
// ----------------------------------------------------------------------------
int zip_read4(uint8_t **a1)
{
  int result;

  result = **a1 + (((*a1)[1] + (((*a1)[2] + ((*a1)[3] << 8)) << 8)) << 8);
  *a1 += 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_dirent_read  (binary VA: 0x4cbc70)
// Original: zip_dirent_read
// ----------------------------------------------------------------------------
int zip_dirent_read(int a1, FILE *stream, uint8_t **a3, unsigned int *a4, int a5, int a6)
{
  uint8_t *v6;
  void **v7;
  uint16_t v8;
  uint16_t v9;
  int v10;
  uint16_t v11;
  unsigned int v12;
  uint16_t v13; // di
  uint8_t *v14;
  int result;
  void *v16;
  uint8_t *v17;
  size_t v18;
  void *v19;
  void *v20;
  uint16_t v21;
  void *v22;
  void *v23;
  size_t v24;
  void *v25;
  uint8_t *v26;
  uint8_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  typedef size_t _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef void *_g4_t_v34;
  typedef void *_g4_t_v35;
  typedef void *_g4_t_v36;
  typedef uint8_t *_g4_t_v37;
  typedef uint8_t *_g4_t_v38;
  typedef uint8_t *_g4_t_v39;
  typedef uint8_t *_g4_t_v40;
  typedef uint16_t _g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef uint8_t *_g4_t_v45;
  typedef struct tm _g4_t_tp;
  typedef uint8_t _g4_t_ptr[58];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v32)) > _g4_s0 ? (4u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v33)) > _g4_s1 ? (8u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v34)) > _g4_s2 ? (8u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v35)) > _g4_s3 ? (8u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v36)) > _g4_s4 ? (8u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v37)) > _g4_s5 ? (8u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v38)) > _g4_s6 ? (12u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v39)) > _g4_s7 ? (12u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v40)) > _g4_s8 ? (12u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (18u + sizeof(_g4_t_v41)) > _g4_s9 ? (18u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v42)) > _g4_s10 ? (20u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v43)) > _g4_s11 ? (24u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v44)) > _g4_s12 ? (24u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v45)) > _g4_s13 ? (28u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_tp)) > _g4_s14 ? (32u + sizeof(_g4_t_tp)) : _g4_s14,
    _g4_s16 = (78u + sizeof(_g4_t_ptr)) > _g4_s15 ? (78u + sizeof(_g4_t_ptr)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 18u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 32u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 78u);

  v43 = a5 == 0 ? 46 : 30;
  if ( a4 != nullptr && (a5 == 0 ? 46 : 30) > *a4 )
  {
    zip_error_set(a6, 19, 0);
    return -1;
  }
  if ( a3 != nullptr )
  {
    v6 = *a3;
    v45 = *a3;
  }
  else
  {
    v6 = ptr;
    if ( v43 > fread(ptr, 1u, v43, stream) )
    {
      v31 = (uint32_t *)__errno();
      zip_error_set(a6, 5, *v31);
      return -1;
    }
    v45 = ptr;
  }
  v7 = (void **)&unk_1B152B1;
  if ( a5 == 0 )
    v7 = (void **)(&off_1B152B6);
  if ( memcmp(v6, v7, 4u) != 0 )
  {
    zip_error_set(a6, 19, 0);
    return -1;
  }
  v45 = v6 + 4;
  if ( a5 != 0 )
    *(uint16_t *)a1 = 0;
  else
    *(uint16_t *)a1 = zip_read2(&v45);
  *(uint16_t *)(a1 + 2) = zip_read2(&v45);
  *(uint16_t *)(a1 + 4) = zip_read2(&v45);
  *(uint16_t *)(a1 + 6) = zip_read2(&v45);
  v41 = zip_read2(&v45);
  v8 = zip_read2(&v45);
  tp.tm_isdst = -1;
  tp.tm_year = ((int)v8 >> 9) + 80;
  tp.tm_mday = v8 & 0x1F;
  tp.tm_hour = (int)v41 >> 11;
  tp.tm_sec = (2 * (uint8_t)v41) & 0x3E;
  tp.tm_mon = (((int)v8 >> 5) & 0xF) - 1;
  tp.tm_min = ((int)v41 >> 5) & 0x3F;
  *(uint32_t *)(a1 + 8) = mktime(&tp);
  *(uint32_t *)(a1 + 12) = zip_read4(&v45);
  *(uint32_t *)(a1 + 16) = zip_read4(&v45);
  *(uint32_t *)(a1 + 20) = zip_read4(&v45);
  *(uint16_t *)(a1 + 28) = zip_read2(&v45);
  v9 = zip_read2(&v45);
  *(uint16_t *)(a1 + 36) = v9;
  if ( a5 != 0 )
  {
    *(uint16_t *)(a1 + 44) = 0;
    *(uint16_t *)(a1 + 46) = 0;
    *(uint16_t *)(a1 + 48) = 0;
    *(uint32_t *)(a1 + 52) = 0;
    *(uint32_t *)(a1 + 56) = 0;
    v10 = 0;
  }
  else
  {
    *(uint16_t *)(a1 + 44) = zip_read2(&v45);
    *(uint16_t *)(a1 + 46) = zip_read2(&v45);
    *(uint16_t *)(a1 + 48) = zip_read2(&v45);
    *(uint32_t *)(a1 + 52) = zip_read4(&v45);
    *(uint32_t *)(a1 + 56) = zip_read4(&v45);
    v9 = *(uint16_t *)(a1 + 36);
    v10 = *(uint16_t *)(a1 + 44);
  }
  v11 = *(uint16_t *)(a1 + 28);
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  v32 = v11;
  *(uint32_t *)(a1 + 40) = 0;
  v12 = v43 + v10 + v11 + v9;
  v44 = v12;
  if ( a4 != nullptr && v12 > *a4 )
  {
    zip_error_set(a6, 19, 0);
    return -1;
  }
  if ( a3 != nullptr )
  {
    if ( v11 != 0 )
    {
      v16 = malloc(v11 + 1);
      if ( v16 == nullptr )
      {
        zip_error_set(a6, 14, 0);
        *(uint32_t *)(a1 + 24) = 0;
        return -1;
      }
      v38 = v45;
      v33 = (unsigned int)(uintptr_t)v16;
      memcpy(v16, v45, v32);
      v45 = &v38[v32];
      *(uint8_t *)(v33 + v32) = 0;
      if ( v33 < v33 + v32 )
      {
        v17 = (uint8_t *)v33;
        do
        {
          if ( *v17 == 0 )
            *v17 = 32;
          ++v17;
        }
        while ( v17 != (uint8_t *)(v33 + v32) );
      }
      v9 = *(uint16_t *)(a1 + 36);
      *(uint32_t *)(a1 + 24) = v33;
      if ( v9 == 0 )
      {
LABEL_17:
        v13 = *(uint16_t *)(a1 + 44);
        v14 = v45;
        if ( v13 == 0 )
        {
LABEL_18:
          *a3 = v14;
          goto LABEL_19;
        }
LABEL_33:
        v20 = malloc(v13);
        if ( v20 == nullptr )
        {
          zip_error_set(a6, 14, 0);
          *(uint32_t *)(a1 + 40) = 0;
          return -1;
        }
        v40 = v45;
        v35 = v20;
        memcpy(v20, v45, v13);
        v14 = &v40[v13];
        *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(v35);
        goto LABEL_18;
      }
    }
    else if ( v9 == 0 )
    {
      goto LABEL_17;
    }
    v18 = v9;
    v19 = malloc(v9);
    if ( v19 == nullptr )
    {
      zip_error_set(a6, 14, 0);
      *(uint32_t *)(a1 + 32) = 0;
      return -1;
    }
    v39 = v45;
    v34 = v19;
    memcpy(v19, v45, v18);
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v34);
    v45 = &v39[v18];
    v13 = *(uint16_t *)(a1 + 44);
    v14 = v45;
    if ( v13 == 0 )
      goto LABEL_18;
    goto LABEL_33;
  }
  if ( v11 != 0 )
  {
    v26 = (uint8_t *)(malloc(v11 + 1));
    if ( v26 != nullptr )
    {
      v37 = v26;
      if ( v32 <= fread(v26, 1u, v32, stream) )
      {
        v37[v32] = 0;
        if ( v37 < &v37[v32] )
        {
          v27 = v37;
          do
          {
            if ( *v27 == 0 )
              *v27 = 32;
            ++v27;
          }
          while ( v27 != &v37[v32] );
        }
        *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(v37);
        v9 = *(uint16_t *)(a1 + 36);
        goto LABEL_36;
      }
      free(v37);
      v29 = (uint32_t *)__errno();
      zip_error_set(a6, 5, *v29);
    }
    else
    {
      zip_error_set(a6, 14, 0);
    }
    *(uint32_t *)(a1 + 24) = 0;
    return -1;
  }
LABEL_36:
  if ( v9 != 0 )
  {
    v24 = v9;
    v25 = malloc(v9);
    if ( v25 == nullptr )
    {
      zip_error_set(a6, 14, 0);
      goto LABEL_61;
    }
    v36 = v25;
    if ( v24 > fread(v25, 1u, v24, stream) )
    {
      free(v36);
      v28 = (uint32_t *)__errno();
      zip_error_set(a6, 5, *v28);
LABEL_61:
      *(uint32_t *)(a1 + 32) = 0;
      return -1;
    }
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v36);
  }
  v21 = *(uint16_t *)(a1 + 44);
  if ( v21 == 0 )
    goto LABEL_19;
  v42 = v21;
  v22 = malloc(v21);
  v23 = v22;
  if ( v22 == nullptr )
  {
    zip_error_set(a6, 14, 0);
    goto LABEL_65;
  }
  if ( v42 > fread(v22, 1u, v42, stream) )
  {
    free(v23);
    v30 = (uint32_t *)__errno();
    zip_error_set(a6, 5, *v30);
LABEL_65:
    *(uint32_t *)(a1 + 40) = 0;
    return -1;
  }
  *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(v23);
LABEL_19:
  result = 0;
  if ( a4 != nullptr )
    *a4 -= v44;
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_entry_free  (binary VA: 0x4cc390)
// Original: zip_entry_free
// ----------------------------------------------------------------------------
int zip_entry_free(int a1)
{
  void *ptr;

  free(*(void **)(a1 + 8));
  ptr = *(void **)(a1 + 12);
  *(uint32_t *)(a1 + 8) = 0;
  free(ptr);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = -1;
  return zip_unchange_data(a1);
}

// ----------------------------------------------------------------------------
// Function: zip_entry_new  (binary VA: 0x4cc3f0)
// Original: zip_entry_new
// ----------------------------------------------------------------------------
char * zip_entry_new(int a1)
{
  int v1;
  int v2;
  char *v3;
  char *result;
  int v5;

  if ( a1 != 0 )
  {
    v1 = *(uint32_t *)(a1 + 44);
    v2 = *(uint32_t *)(a1 + 40);
    if ( v2 < v1 - 1 )
    {
      v3 = *(char **)(a1 + 48);
LABEL_4:
      result = &v3[20 * v2];
      *(uint32_t *)result = 0;
      *((uint32_t *)result + 2) = 0;
      *((uint32_t *)result + 3) = 0;
      *((uint32_t *)result + 4) = -1;
      *((uint32_t *)result + 1) = 0;
      ++*(uint32_t *)(a1 + 40);
      return result;
    }
    v5 = v1 + 16;
    *(uint32_t *)(a1 + 44) = v5;
    v3 = (char *)realloc(*(void **)(a1 + 48), 20 * v5);
    *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(v3);
    if ( v3 != nullptr )
    {
      v2 = *(uint32_t *)(a1 + 40);
      goto LABEL_4;
    }
    zip_error_set(a1 + 8, 14, 0);
    return nullptr;
  }
  else
  {
    result = (char *)malloc(0x14u);
    if ( result != nullptr )
    {
      *(uint32_t *)result = 0;
      *((uint32_t *)result + 2) = 0;
      *((uint32_t *)result + 3) = 0;
      *((uint32_t *)result + 4) = -1;
      *((uint32_t *)result + 1) = 0;
    }
    else
    {
      zip_error_set(8, 14, 0);
      return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_error_clear  (binary VA: 0x4cc500)
// Original: zip_error_clear
// ----------------------------------------------------------------------------
uint32_t * zip_error_clear(uint32_t *a1)
{
  *a1 = 0;
  a1[1] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: zip_error_copy  (binary VA: 0x4cc520)
// Original: zip_error_copy
// ----------------------------------------------------------------------------
uint32_t * zip_error_copy(uint32_t *a1, uint32_t *a2)
{
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: zip_error_fini  (binary VA: 0x4cc540)
// Original: zip_error_fini
// ----------------------------------------------------------------------------
void zip_error_fini(int a1)
{
  free(*(void **)(a1 + 8));
  *(uint32_t *)(a1 + 8) = 0;
}

// ----------------------------------------------------------------------------
// Function: zip_error_get  (binary VA: 0x4cc580)
// Original: zip_error_get
// ----------------------------------------------------------------------------
uint32_t * zip_error_get(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *result;

  result = a2;
  if ( a2 != nullptr )
    *a2 = *a1;
  if ( a3 != nullptr )
  {
    result = (uint32_t *)zip_error_get_sys_type(*a1);
    if ( result != nullptr )
    {
      result = (uint32_t *)a1[1];
      *a3 = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      *a3 = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_error_init  (binary VA: 0x4cc5e0)
// Original: zip_error_init
// ----------------------------------------------------------------------------
uint32_t * zip_error_init(uint32_t *a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: zip_error_set  (binary VA: 0x4cc600)
// Original: zip_error_set
// ----------------------------------------------------------------------------
uint32_t * zip_error_set(uint32_t *a1, int a2, int a3)
{
  uint32_t *result;

  result = a1;
  if ( a1 != nullptr )
  {
    *a1 = a2;
    a1[1] = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_error_clear  (binary VA: 0x4cc620)
// Original: zip_error_clear
// ----------------------------------------------------------------------------
uint32_t * zip_error_clear(int a1)
{
  return zip_error_clear((uint32_t *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: zip_error_get  (binary VA: 0x4cc650)
// Original: zip_error_get
// ----------------------------------------------------------------------------
uint32_t * zip_error_get(int a1, uint32_t *a2, uint32_t *a3)
{
  return zip_error_get((uint32_t *)(a1 + 8), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: zip_error_get_sys_type  (binary VA: 0x4cc690)
// Original: zip_error_get_sys_type
// ----------------------------------------------------------------------------
int zip_error_get_sys_type(unsigned int a1)
{
  int result;

  result = 0;
  if ( a1 < 0x18 )
    return zip_err_type[a1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_error_strerror  (binary VA: 0x4cc6c0)
// Original: zip_error_strerror
// ----------------------------------------------------------------------------
char * zip_error_strerror(int *a1)
{
  int v1;
  const char *v2;
  int v3;
  char *v5;
  int v6;
  unsigned int v7;
  size_t v8;
  size_t v9;
  char *v10;
  void *v11;
  typedef const char *_g4_t_v12;
  typedef const char *_g4_t_v13;
  typedef char _g4_t_s[140];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v13)) > _g4_s1 ? (44u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_s)) > _g4_s2 ? (48u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 48u);

  zip_error_fini((int)(uintptr_t)a1);
  v1 = *a1;
  if ( *a1 < 0 || v1 >= 24 )
  {
    sprintf(s, "Unknown error %d", *a1);
    v5 = s;
    do
    {
      v6 = *(uint32_t *)v5;
      v5 += 4;
      v7 = ~v6 & (v6 - 16843009) & 0x80808080;
    }
    while ( v7 == 0 );
    v13 = s;
    if ( (~v6 & (v6 - 16843009) & 0x8080) == 0 )
    {
      v7 >>= 16;
      v5 += 2;
    }
    v2 = nullptr;
    v8 = &v5[-__CFADD__((uint8_t)v7, (uint8_t)v7) - 3] - s;
    v9 = 0;
  }
  else
  {
    v2 = zip_err_str[v1];
    v3 = zip_err_type[v1];
    if ( v3 == 1 )
    {
      v13 = strerror(a1[1]);
    }
    else
    {
      if ( v3 != 2 )
        return (char *)v2;
      v13 = (const char *)zError(a1[1]);
    }
    if ( v13 == nullptr )
      return (char *)v2;
    v8 = strlen(v13);
    if ( v2 != nullptr )
      v9 = strlen(v2) + 2;
    else
      v9 = 0;
  }
  v10 = (char *)malloc(v9 + v8 + 1);
  if ( v10 == nullptr )
    return (char *)(uintptr_t)off_2030818;
  v11 = &unk_1B152C0;
  if ( v2 == nullptr )
  {
    v2 = (const char *)&unk_1B15112;
    v11 = &unk_1B15112;
  }
  v12 = v2;
  v2 = v10;
  sprintf(v10, "%s%s%s", v12, v11, v13);
  a1[2] = (int)(uintptr_t)v10;
  return (char *)v2;
}

// ----------------------------------------------------------------------------
// Function: zip_error_to_str  (binary VA: 0x4cc890)
// Original: zip_error_to_str
// ----------------------------------------------------------------------------
int zip_error_to_str(char *s, size_t maxlen, unsigned int a3, int errnum)
{
  char *v4;
  int v5;
  char *v6;
  void *v7;

  if ( a3 < 0x18 )
  {
    v4 = zip_err_str[a3];
    v5 = zip_err_type[a3];
    if ( v5 == 1 )
    {
      v6 = strerror(errnum);
    }
    else
    {
      if ( v5 != 2 )
      {
LABEL_4:
        v6 = (char *)&unk_1B15112;
        v7 = &unk_1B15112;
        return snprintf(s, maxlen, "%s%s%s", v4, v7, v6);
      }
      v6 = (char *)zError(errnum);
    }
    v7 = &unk_1B152C0;
    if ( v6 != nullptr )
      return snprintf(s, maxlen, "%s%s%s", v4, v7, v6);
    goto LABEL_4;
  }
  return snprintf(s, maxlen, "Unknown error %d", a3);
}

// ----------------------------------------------------------------------------
// Function: zip_fclose  (binary VA: 0x4cc980)
// Original: zip_fclose
// ----------------------------------------------------------------------------
int zip_fclose(void *ptr)
{
  int v1;
  void **v2;
  int v3;
  void **v4;
  int v5;
  void **v7;

  if ( *((uint32_t *)ptr + 12) != 0 )
    inflateEnd(*((uint32_t *)ptr + 12));
  free(*((void **)ptr + 11));
  free(*((void **)ptr + 12));
  v1 = *(uint32_t *)(*(uint32_t *)ptr + 52);
  if ( v1 > 0 )
  {
    v2 = *(void ***)(*(uint32_t *)ptr + 60);
    v3 = 0;
    v4 = v2 + 1;
    if ( *v2 == ptr )
    {
      v7 = *(void ***)(*(uint32_t *)ptr + 60);
LABEL_14:
      *v7 = v2[v1 - 1];
      --*(uint32_t *)(*(uint32_t *)ptr + 52);
    }
    else
    {
      while ( ++v3 != v1 )
      {
        v7 = v4++;
        if ( *(v4 - 1) == ptr )
          goto LABEL_14;
      }
    }
  }
  v5 = *((uint32_t *)ptr + 1);
  if ( v5 == 0 && (*((uint32_t *)ptr + 4) & 5) == 5 && *((uint32_t *)ptr + 10) != *((uint32_t *)ptr + 9) )
    v5 = 7;
  free(ptr);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: zip_filerange_crc  (binary VA: 0x4cca40)
// Original: zip_filerange_crc
// ----------------------------------------------------------------------------
int zip_filerange_crc(FILE *stream, __off_t off, signed int n, uint32_t *a4, uint32_t *a5)
{
  int v5;
  int result;
  size_t v7;
  size_t v8;
  int *v9;
  int *v10;
  uint8_t ptr[8220];

  v5 = n;
  *a4 = crc32(0, 0, 0);
  result = fseeko(stream, off, 0);
  if ( result != 0 )
  {
    v10 = (int *)__errno();
    zip_error_set(a5, 4, *v10);
    return -1;
  }
  else if ( n > 0 )
  {
    do
    {
      v7 = 0x2000;
      if ( v5 <= 0x2000 )
        v7 = v5;
      v8 = fread(ptr, 1u, v7, stream);
      if ( v8 == 0 )
      {
        v9 = (int *)__errno();
        zip_error_set(a5, 5, *v9);
        return -1;
      }
      v5 -= v8;
      *a4 = crc32(*a4, ptr, v8);
    }
    while ( v5 > 0 );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_file_error_clear  (binary VA: 0x4ccb80)
// Original: zip_file_error_clear
// ----------------------------------------------------------------------------
uint32_t * zip_file_error_clear(int a1)
{
  return zip_error_clear((uint32_t *)(a1 + 4));
}

// ----------------------------------------------------------------------------
// Function: zip_file_error_get  (binary VA: 0x4ccbb0)
// Original: zip_file_error_get
// ----------------------------------------------------------------------------
uint32_t * zip_file_error_get(int a1, uint32_t *a2, uint32_t *a3)
{
  return zip_error_get((uint32_t *)(a1 + 4), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: zip_file_get_offset  (binary VA: 0x4ccbf0)
// Original: zip_file_get_offset
// ----------------------------------------------------------------------------
int zip_file_get_offset(int a1, int a2)
{
  __off_t off;
  int v3;
  int *v5;
  typedef int _g4_t_v6[7];
  typedef uint16_t _g4_t_v7;
  typedef uint16_t _g4_t_v8;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v7)) > _g4_s1 ? (32u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v8)) > _g4_s2 ? (40u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);

  off = *(uint32_t *)(**(uint32_t **)(a1 + 28) + 60 * a2 + 56);
  if ( fseeko(*(FILE **)(a1 + 4), off, 0) != 0 )
  {
    v5 = (int *)__errno();
    v3 = 0;
    zip_error_set((uint32_t *)(a1 + 8), 4, *v5);
  }
  else
  {
    v3 = 0;
    if ( zip_dirent_read((int)(uintptr_t)v6, *(FILE **)(a1 + 4), nullptr, nullptr, 1, a1 + 8) == 0 )
    {
      v3 = off + v7 + v8 + 30;
      zip_dirent_finalize((int)(uintptr_t)v6);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: zip_file_strerror  (binary VA: 0x4ccce0)
// Original: zip_file_strerror
// ----------------------------------------------------------------------------
char * zip_file_strerror(int a1)
{
  return zip_error_strerror((int *)(a1 + 4));
}

// ----------------------------------------------------------------------------
// Function: zip_fopen  (binary VA: 0x4ccd10)
// Original: zip_fopen
// ----------------------------------------------------------------------------
int zip_fopen(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = zip_name_locate((uint32_t *)(uintptr_t)a1, a2, a3);
  result = 0;
  if ( v3 >= 0 )
    return (int)(uintptr_t)(zip_fopen_index(a1, v3, a3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_file_fillbuf  (binary VA: 0x4ccd70)
// Original: zip_file_fillbuf
// ----------------------------------------------------------------------------
int zip_file_fillbuf(void *ptr, unsigned int a2, int a3)
{
  int v3;
  size_t v4;
  signed int v6;
  int *v7;
  int *v8;

  v3 = -1;
  v4 = a2;
  if ( *(uint32_t *)(a3 + 4) == 0 )
  {
    v3 = 0;
    if ( (*(uint8_t *)(a3 + 16) & 1) == 0 )
    {
      if ( a2 != 0 && *(uint32_t *)(a3 + 32) != 0 )
      {
        if ( fseeko(*(FILE **)(*(uint32_t *)a3 + 4), *(uint32_t *)(a3 + 24), 0) < 0 )
        {
          v8 = (int *)__errno();
          v3 = -1;
          zip_error_set((uint32_t *)(a3 + 4), 4, *v8);
        }
        else
        {
          if ( a2 >= *(uint32_t *)(a3 + 32) )
            v4 = *(uint32_t *)(a3 + 32);
          v6 = fread(ptr, 1u, v4, *(FILE **)(*(uint32_t *)a3 + 4));
          v3 = v6;
          if ( v6 != 0 )
          {
            if ( v6 < 0 )
            {
              v7 = (int *)__errno();
              zip_error_set((uint32_t *)(a3 + 4), 5, *v7);
            }
            else
            {
              *(uint32_t *)(a3 + 24) += v6;
              *(uint32_t *)(a3 + 32) -= v6;
            }
          }
          else
          {
            v3 = -1;
            zip_error_set((uint32_t *)(a3 + 4), 17, 0);
          }
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: zip_fopen_index  (binary VA: 0x4cceb0)
// Original: zip_fopen_index
// ----------------------------------------------------------------------------
uint32_t * zip_fopen_index(int a1, int a2, char a3)
{
  uint32_t *v3;
  int16_t v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int offset;
  void *v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  void *size;
  void *sizea;
  void *sizeb;
  void *sizec;
  int v21;
  int v22;
  int v23;

  if ( a2 >= 0 && a2 < *(uint32_t *)(a1 + 40) )
  {
    if ( (a3 & 8) == 0 && (unsigned int)(*(uint32_t *)(*(uint32_t *)(a1 + 48) + 20 * a2) - 2) <= 1 )
    {
      v5 = nullptr;
      zip_error_set((uint32_t *)(a1 + 8), 15, 0);
      return v5;
    }
    v3 = *(uint32_t **)(a1 + 28);
    if ( a2 < v3[1] )
    {
      v23 = 4;
      v4 = *(uint16_t *)(*v3 + 60 * a2 + 6);
      if ( v4 != 0 )
      {
        if ( v4 == 8 )
        {
          v23 = (a3 & 4) == 0 ? 6 : 0;
        }
        else
        {
          v23 = 0;
          if ( (a3 & 4) == 0 )
          {
            v5 = nullptr;
            zip_error_set((uint32_t *)(a1 + 8), 16, 0);
            return v5;
          }
        }
      }
      v5 = (uint32_t *)(malloc(0x34u));
      v6 = 60 * a2;
      if ( v5 != nullptr )
      {
        v7 = *(uint32_t *)(a1 + 52);
        v21 = *(uint32_t *)(a1 + 56);
        if ( v7 < v21 - 1 )
        {
          v8 = *(uint32_t **)(a1 + 60);
LABEL_9:
          v8[v7] = (uint32_t)(uintptr_t)(v5);
          *(uint32_t *)(a1 + 52) = v7 + 1;
          *v5 = a1;
          v22 = v6;
          zip_error_init(v5 + 1);
          v5[4] = 0;
          v5[9] = crc32(0, 0, 0);
          v5[10] = 0;
          v5[5] = -1;
          v5[8] = 0;
          v5[7] = 0;
          v5[6] = 0;
          v5[11] = 0;
          v5[12] = 0;
          v9 = v22;
          goto LABEL_10;
        }
        v8 = (uint32_t *)(realloc(*(void **)(a1 + 60), 4 * (v21 + 10)));
        v6 = 60 * a2;
        if ( v8 != nullptr )
        {
          *(uint32_t *)(a1 + 56) = v21 + 10;
          *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(v8);
          v7 = *(uint32_t *)(a1 + 52);
          goto LABEL_9;
        }
        zip_error_set((uint32_t *)(a1 + 8), 14, 0);
        sizea = v5;
        v5 = nullptr;
        free(sizea);
        v9 = 60 * a2;
      }
      else
      {
        zip_error_set((uint32_t *)(a1 + 8), 14, 0);
        v9 = 60 * a2;
      }
LABEL_10:
      v5[4] = v23;
      v5[5] = *(uint16_t *)(**(uint32_t **)(a1 + 28) + v9 + 6);
      v5[7] = *(uint32_t *)(**(uint32_t **)(a1 + 28) + v9 + 20);
      v5[8] = *(uint32_t *)(**(uint32_t **)(a1 + 28) + v9 + 16);
      v5[10] = *(uint32_t *)(**(uint32_t **)(a1 + 28) + v9 + 12);
      offset = zip_file_get_offset(a1, a2);
      v5[6] = offset;
      if ( offset != 0 )
      {
        if ( (v5[4] & 2) == 0 )
        {
          v5[7] = v5[8];
          return v5;
        }
        v12 = malloc(0x2000u);
        v5[11] = (uint32_t)(uintptr_t)(v12);
        if ( v12 == nullptr )
          goto LABEL_32;
        v13 = zip_file_fillbuf(v12, 0x2000u, (int)(uintptr_t)v5);
        if ( v13 <= 0 )
        {
          zip_error_copy((uint32_t *)(a1 + 8), v5 + 1);
          sizeb = v5;
          v5 = nullptr;
          zip_fclose(sizeb);
          return v5;
        }
        v14 = (uint32_t *)(malloc(0x38u));
        v5[12] = (uint32_t)(uintptr_t)(v14);
        if ( v14 == nullptr )
        {
LABEL_32:
          zip_error_set((uint32_t *)(a1 + 8), 14, 0);
          sizec = v5;
          v5 = nullptr;
          zip_fclose(sizec);
          return v5;
        }
        v15 = v5[11];
        v14[8] = 0;
        *v14 = v15;
        v14[9] = 0;
        v14[10] = 0;
        v14[1] = v13;
        v16 = inflateInit2_(v14, -15, "1.2.3", 56);
        if ( v16 == 0 )
          return v5;
        zip_error_set((uint32_t *)(a1 + 8), 13, v16);
      }
      size = v5;
      v5 = nullptr;
      zip_fclose(size);
      return v5;
    }
  }
  zip_error_set((uint32_t *)(a1 + 8), 18, 0);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: zip_fread  (binary VA: 0x4cd2a0)
// Original: zip_fread
// ----------------------------------------------------------------------------
int zip_fread(int a1, void *ptr, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v3 = 0xFFFFFFFF;
  if ( a1 == 0 || *(uint32_t *)(a1 + 4) != 0 )
    return v3;
  v4 = *(uint32_t *)(a1 + 16);
  if ( a3 == 0 || (v4 & 1) != 0 )
    return 0;
  if ( *(uint32_t *)(a1 + 28) == 0 )
  {
    v10 = v4 | 1;
    v3 = 0;
    *(uint32_t *)(a1 + 16) = v10;
    if ( (v10 & 4) == 0 )
      return v3;
    goto LABEL_18;
  }
  if ( (v4 & 2) != 0 )
  {
    *(uint32_t *)(*(uint32_t *)(a1 + 48) + 12) = (uint32_t)(uintptr_t)(ptr);
    *(uint32_t *)(*(uint32_t *)(a1 + 48) + 16) = a3;
    v5 = *(uint32_t *)(a1 + 48);
    v13 = *(uint32_t *)(v5 + 20);
    while ( 1 )
    {
      v6 = inflate(v5, 2);
      switch ( v6 )
      {
        case -5:
          if ( *(uint32_t *)(*(uint32_t *)(a1 + 48) + 4) != 0 )
            goto LABEL_22;
          v11 = zip_file_fillbuf(*(void **)(a1 + 44), 0x2000u, a1);
          if ( v11 == 0 )
          {
            v3 = 0xFFFFFFFF;
            zip_error_set((uint32_t *)(a1 + 4), 21, 0);
            return v3;
          }
          if ( v11 < 0 )
            return -1;
          **(uint32_t **)(a1 + 48) = *(uint32_t *)(a1 + 44);
          *(uint32_t *)(*(uint32_t *)(a1 + 48) + 4) = v11;
          v5 = *(uint32_t *)(a1 + 48);
          continue;
        case -4:
        case -3:
        case -2:
        case 2:
LABEL_22:
          v3 = 0xFFFFFFFF;
          zip_error_set((uint32_t *)(a1 + 4), 13, v6);
          return v3;
        case 0:
          v5 = *(uint32_t *)(a1 + 48);
          v7 = *(uint32_t *)(v5 + 20);
          goto LABEL_11;
        case 1:
          v5 = *(uint32_t *)(a1 + 48);
          v7 = *(uint32_t *)(v5 + 20);
          if ( v7 == v13 )
          {
            v3 = 0;
LABEL_18:
            if ( *(uint32_t *)(a1 + 36) != *(uint32_t *)(a1 + 40) )
            {
              v3 = 0xFFFFFFFF;
              zip_error_set((uint32_t *)(a1 + 4), 7, 0);
            }
            return v3;
          }
LABEL_11:
          v3 = v7 - v13;
          v8 = *(uint32_t *)(a1 + 28);
          if ( v3 >= a3 || v8 <= v3 )
          {
            if ( (*(uint8_t *)(a1 + 16) & 4) != 0 )
            {
              *(uint32_t *)(a1 + 36) = crc32(*(uint32_t *)(a1 + 36), ptr, v3);
              v8 = *(uint32_t *)(a1 + 28);
            }
            *(uint32_t *)(a1 + 28) = v8 - v3;
            return v3;
          }
          break;
        default:
          v5 = *(uint32_t *)(a1 + 48);
          continue;
      }
    }
  }
  v12 = zip_file_fillbuf(ptr, a3, a1);
  v3 = v12;
  if ( v12 > 0 )
  {
    if ( (*(uint8_t *)(a1 + 16) & 4) != 0 )
      *(uint32_t *)(a1 + 36) = crc32(*(uint32_t *)(a1 + 36), ptr, v12);
    *(uint32_t *)(a1 + 28) -= v3;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: zip_free  (binary VA: 0x4cd500)
// Original: zip_free
// ----------------------------------------------------------------------------
void zip_free(void *a1)
{
  char *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *i;
  int v7;
  uint32_t *v8;
  char *ptr;

  if ( a1 != nullptr )
  {
    if ( *(uint32_t *)a1 != 0 )
      free(*(void **)a1);
    if ( *((uint32_t *)a1 + 1) != 0 )
      fclose(*((FILE **)a1 + 1));
    zip_cdir_free(*((void **)a1 + 7));
    v1 = *((char **)a1 + 12);
    if ( v1 != nullptr )
    {
      if ( *((int *)a1 + 10) > 0 )
      {
        v2 = 0;
        v3 = 0;
        do
        {
          ++v3;
          ptr = &v1[v2];
          v2 += 20;
          zip_entry_free((int)(uintptr_t)ptr);
          v1 = *((char **)a1 + 12);
        }
        while ( *((uint32_t *)a1 + 10) > v3 );
      }
      free(v1);
    }
    v4 = *((uint32_t *)a1 + 13);
    v5 = 0;
    for ( i = *((uint32_t **)a1 + 15); v5 < v4; i = *((uint32_t **)a1 + 15) )
    {
      while ( 1 )
      {
        v7 = i[v5];
        if ( *(uint32_t *)(v7 + 4) == 0 )
          break;
        if ( ++v5 >= v4 )
          goto LABEL_16;
      }
      zip_error_set((uint32_t *)(v7 + 4), 8, 0);
      v8 = *(uint32_t **)(*((uint32_t *)a1 + 15) + 4 * v5++);
      *v8 = 0;
      v4 = *((uint32_t *)a1 + 13);
    }
LABEL_16:
    free(i);
    free(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: zip_get_archive_comment  (binary VA: 0x4cd5f0)
// Original: zip_get_archive_comment
// ----------------------------------------------------------------------------
int zip_get_archive_comment(uint32_t *a1, uint32_t *a2, char a3)
{
  int v3;
  int result;
  int v5;

  if ( (a3 & 8) != 0 || (v3 = a1[9]) == -1 )
  {
    v5 = a1[7];
    if ( v5 != 0 )
    {
      if ( a2 != nullptr )
      {
        *a2 = *(uint16_t *)(v5 + 20);
        v5 = a1[7];
      }
      return *(uint32_t *)(v5 + 16);
    }
    else
    {
      result = 0;
      if ( a2 != nullptr )
        *a2 = -1;
    }
  }
  else
  {
    if ( a2 != nullptr )
      *a2 = v3;
    return a1[8];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_get_archive_flag  (binary VA: 0x4cd640)
// Original: zip_get_archive_flag
// ----------------------------------------------------------------------------
bool zip_get_archive_flag(int a1, int a2, char a3)
{
  int v3;

  if ( (a3 & 8) != 0 )
    v3 = *(uint32_t *)(a1 + 20);
  else
    v3 = *(uint32_t *)(a1 + 24);
  return (v3 & a2) != 0;
}

// ----------------------------------------------------------------------------
// Function: zip_get_file_comment  (binary VA: 0x4cd670)
// Original: zip_get_file_comment
// ----------------------------------------------------------------------------
int zip_get_file_comment(int a1, int a2, uint32_t *a3, char a4)
{
  int v4;
  int v6;
  int v7;

  if ( a2 < 0 || a2 >= *(uint32_t *)(a1 + 40) )
  {
    zip_error_set((uint32_t *)(a1 + 8), 18, 0);
    return 0;
  }
  else if ( (a4 & 8) != 0 || (v6 = *(uint32_t *)(a1 + 48) + 20 * a2, (v7 = *(uint32_t *)(v6 + 16)) == -1) )
  {
    v4 = 60 * a2;
    if ( a3 != nullptr )
      *a3 = *(uint16_t *)(**(uint32_t **)(a1 + 28) + v4 + 44);
    return *(uint32_t *)(**(uint32_t **)(a1 + 28) + v4 + 40);
  }
  else
  {
    if ( a3 != nullptr )
    {
      *a3 = v7;
      v6 = 20 * a2 + *(uint32_t *)(a1 + 48);
    }
    return *(uint32_t *)(v6 + 12);
  }
}

// ----------------------------------------------------------------------------
// Function: zip_get_name  (binary VA: 0x4cd730)
// Original: zip_get_name
// ----------------------------------------------------------------------------
int zip_get_name(uint32_t *a1, int a2, char a3, uint32_t *a4)
{
  uint32_t *v4;
  int result;
  uint32_t *v6;

  if ( a2 >= 0 && a2 < a1[10] )
  {
    if ( (a3 & 8) == 0 )
    {
      v4 = (uint32_t *)(a1[12] + 20 * a2);
      if ( *v4 == 1 )
      {
        zip_error_set(a4, 23, 0);
        return 0;
      }
      result = v4[2];
      if ( result != 0 )
        return result;
    }
    v6 = (uint32_t *)a1[7];
    if ( v6 != nullptr && a2 < v6[1] )
      return *(uint32_t *)(*v6 + 60 * a2 + 24);
  }
  zip_error_set(a4, 18, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: zip_get_name  (binary VA: 0x4cd7f0)
// Original: zip_get_name
// ----------------------------------------------------------------------------
int zip_get_name(uint32_t *a1, int a2, char a3)
{
  return zip_get_name(a1, a2, a3, a1 + 2);
}

// ----------------------------------------------------------------------------
// Function: zip_get_num_files  (binary VA: 0x4cd830)
// Original: zip_get_num_files
// ----------------------------------------------------------------------------
int zip_get_num_files(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 40);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_memdup  (binary VA: 0x4cd850)
// Original: zip_memdup
// ----------------------------------------------------------------------------
void * zip_memdup(void *src, size_t size, uint32_t *a3)
{
  void *v3;

  v3 = malloc(size);
  if ( v3 != nullptr )
    memcpy(v3, src, size);
  else
    zip_error_set(a3, 14, 0);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: zip_name_locate  (binary VA: 0x4cd8d0)
// Original: zip_name_locate
// ----------------------------------------------------------------------------
int zip_name_locate(uint32_t *a1, int a2, char a3, uint32_t *a4)
{
  int (*v4)(const char *, const char *);
  int v5;
  int v6;
  int v8;
  uint32_t *v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  int name;
  const char *s;
  const char *v16;
  char *v17;
  uint32_t *v18;
  int v19;
  int (*v20)(const char *, const char *);

  if ( a2 != 0 )
  {
    v4 = &strcmp;
    if ( (a3 & 1) != 0 )
      v4 = &strcasecmp;
    v20 = v4;
    if ( (a3 & 8) != 0 )
      v19 = *(uint32_t *)(a1[7] + 4);
    else
      v19 = a1[10];
    if ( v19 <= 0 )
    {
LABEL_13:
      v5 = -1;
      zip_error_set(a4, 9, 0);
    }
    else if ( (a3 & 8) != 0 )
    {
      v5 = 0;
      if ( (a3 & 2) != 0 )
      {
        v8 = 0;
        v9 = a1;
        while ( 1 )
        {
          v10 = *(uint32_t *)v9[7];
          v11 = *(char **)(v10 + v8 + 24);
          if ( v11 != nullptr )
          {
            v18 = v9;
            v12 = (char *)(strrchr(*(const char **)(v10 + v8 + 24), 47));
            if ( v12 != nullptr )
              v11 = v12 + 1;
            v13 = ((int (*)(int, char *))v20)(a2, v11);
            v9 = v18;
            if ( v13 == 0 )
              break;
          }
          ++v5;
          v8 += 60;
          if ( v5 == v19 )
            goto LABEL_13;
        }
      }
      else
      {
        v6 = 0;
        while ( *(uint32_t *)(*(uint32_t *)a1[7] + v6 + 24) == 0
             || ((int (*)(int, uint32_t))v20)(a2, *(uint32_t *)(*(uint32_t *)a1[7] + v6 + 24)) != 0 )
        {
          ++v5;
          v6 += 60;
          if ( v5 == v19 )
            goto LABEL_13;
        }
      }
    }
    else
    {
      v5 = 0;
      if ( (a3 & 2) != 0 )
      {
        while ( 1 )
        {
          s = (const char *)zip_get_name(a1, v5, a3, a4);
          v16 = s;
          if ( s != nullptr )
          {
            v17 = (char *)(strrchr(s, 47));
            if ( v17 != nullptr )
              v16 = v17 + 1;
            if ( ((int (*)(int, const char *))v20)(a2, v16) == 0 )
              break;
          }
          if ( ++v5 == v19 )
            goto LABEL_13;
        }
      }
      else
      {
        v5 = 0;
        while ( 1 )
        {
          name = zip_get_name(a1, v5, a3, a4);
          if ( name != 0 && ((int (*)(int, int))v20)(a2, name) == 0 )
            break;
          if ( ++v5 == v19 )
            goto LABEL_13;
        }
      }
    }
  }
  else
  {
    v5 = -1;
    zip_error_set(a4, 18, 0);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: zip_name_locate  (binary VA: 0x4cdaf0)
// Original: zip_name_locate
// ----------------------------------------------------------------------------
int zip_name_locate(uint32_t *a1, int a2, char a3)
{
  return zip_name_locate(a1, a2, a3, a1 + 2);
}

// ----------------------------------------------------------------------------
// Function: zip_new  (binary VA: 0x4cdb30)
// Original: zip_new
// ----------------------------------------------------------------------------
uint32_t * zip_new(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;

  v1 = (uint32_t *)(malloc(0x40u));
  v2 = v1;
  if ( v1 != nullptr )
  {
    *v1 = 0;
    v1[1] = 0;
    zip_error_init(v1 + 2);
    v2[7] = 0;
    v2[8] = 0;
    v2[9] = -1;
    v2[11] = 0;
    v2[10] = 0;
    v2[12] = 0;
    v2[14] = 0;
    v2[13] = 0;
    v2[15] = 0;
    v2[6] = 0;
    v2[5] = 0;
  }
  else
  {
    zip_error_set(a1, 14, 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_4CDBF0  (binary VA: 0x4cdbf0)
// Original: sub_4CDBF0
// ----------------------------------------------------------------------------
unsigned int * sub_4CDBF0(unsigned int *result, uint32_t *a2, unsigned int a3)
{
  unsigned int *v3;
  typedef unsigned int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v3 = result;
  if ( a2 != nullptr )
  {
    zip_error_get(a2, &a3, &v4);
    result = (unsigned int *)zip_error_get_sys_type(a3);
    if ( result == (unsigned int *)((char *)&dword_0 + 1) )
    {
      result = (unsigned int *)__errno();
      *result = v4;
    }
  }
  if ( v3 != nullptr )
  {
    result = (unsigned int *)a3;
    *v3 = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_4CDC60  (binary VA: 0x4cdc60)
// Original: sub_4CDC60
// ----------------------------------------------------------------------------
int sub_4CDC60(int a1, int a2)
{
  int v4;
  const char *s1;
  const char *s2;

  v4 = -1;
  if ( *(uint16_t *)(a1 + 2) == *(uint16_t *)(a2 + 2)
    && *(uint16_t *)(a1 + 6) == *(uint16_t *)(a2 + 6)
    && *(uint32_t *)(a1 + 8) == *(uint32_t *)(a2 + 8)
    && *(uint16_t *)(a1 + 28) == *(uint16_t *)(a2 + 28) )
  {
    s1 = *(const char **)(a1 + 24);
    if ( s1 != nullptr )
    {
      s2 = *(const char **)(a2 + 24);
      if ( s2 != nullptr && strcmp(s1, s2) == 0 )
      {
        if ( (*(uint8_t *)(a2 + 4) & 8) != 0 )
        {
          if ( *(uint32_t *)(a2 + 12) == 0 && *(uint32_t *)(a2 + 16) == 0 )
            return -(*(uint32_t *)(a2 + 20) != 0);
        }
        else if ( *(uint32_t *)(a1 + 12) == *(uint32_t *)(a2 + 12) && *(uint32_t *)(a1 + 16) == *(uint32_t *)(a2 + 16) )
        {
          return (*(uint32_t *)(a1 + 20) == *(uint32_t *)(a2 + 20)) - 1;
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: zip_open  (binary VA: 0x4cdd30)
// Original: zip_open
// ----------------------------------------------------------------------------
uint32_t * zip_open(char *file, char a2, unsigned int *a3)
{
  char *v3;
  FILE *v5;
  __off_t v6;
  int v7;
  char *v8;
  char *v9;
  void *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  const void *v15;
  char *v16;
  char *v17;
  uint16_t v18;
  uint32_t *v19;
  uint16_t v20;
  char *v21;
  int v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  void *v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  int *v50;
  unsigned int v51;
  struct stat buf;
  typedef int _g4_t_v52;
  typedef size_t _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef char *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef char *_g4_t_v59;
  typedef FILE *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint16_t _g4_t_v66;
  typedef int *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef char *_g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef int _g4_t_v80[4];
  typedef char *_g4_t_endptr;
  typedef int _g4_t_v82[3];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v52)) > _g4_s0 ? (12u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v53)) > _g4_s1 ? (20u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v54)) > _g4_s2 ? (24u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v55)) > _g4_s3 ? (28u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v56)) > _g4_s4 ? (36u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v57)) > _g4_s5 ? (36u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v58)) > _g4_s6 ? (36u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v59)) > _g4_s7 ? (40u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v60)) > _g4_s8 ? (44u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v61)) > _g4_s9 ? (48u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v62)) > _g4_s10 ? (48u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v63)) > _g4_s11 ? (48u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v64)) > _g4_s12 ? (52u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v65)) > _g4_s13 ? (56u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v66)) > _g4_s14 ? (56u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v67)) > _g4_s15 ? (56u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v68)) > _g4_s16 ? (56u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v69)) > _g4_s17 ? (56u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v70)) > _g4_s18 ? (56u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v71)) > _g4_s19 ? (60u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v72)) > _g4_s20 ? (60u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v73)) > _g4_s21 ? (60u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v74)) > _g4_s22 ? (60u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v75)) > _g4_s23 ? (60u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v76)) > _g4_s24 ? (60u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v77)) > _g4_s25 ? (60u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v78)) > _g4_s26 ? (60u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v79)) > _g4_s27 ? (60u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v80)) > _g4_s28 ? (64u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_endptr)) > _g4_s29 ? (80u + sizeof(_g4_t_endptr)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v82)) > _g4_s30 ? (84u + sizeof(_g4_t_v82)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 60u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 60u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 60u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 64u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 80u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 84u);

  if ( file == nullptr )
  {
    v71 = nullptr;
    if ( a3 != nullptr )
    {
      *a3 = 18;
      return nullptr;
    }
    return v71;
  }
  if ( stat(file, &buf) != 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      v71 = zip_new((uint32_t *)&buf);
      if ( v71 != nullptr )
      {
        v3 = strdup(file);
        *v71 = (uint32_t)(uintptr_t)(v3);
        if ( v3 == nullptr )
        {
          zip_free(v71);
          v71 = nullptr;
          if ( a3 != nullptr )
            *a3 = 14;
        }
      }
      else
      {
        v80[0] = 0;
        zip_error_get((uint32_t *)&buf, (uint32_t *)v80, (uint32_t *)&endptr);
        if ( zip_error_get_sys_type(v80[0]) == 1 )
          *(uint32_t *)__errno() = (uint32_t)(uintptr_t)(endptr);
        if ( a3 != nullptr )
          *a3 = v80[0];
      }
      return v71;
    }
LABEL_24:
    v71 = nullptr;
    if ( a3 != nullptr )
    {
      *a3 = 11;
      return nullptr;
    }
    return v71;
  }
  if ( (a2 & 2) == 0 )
  {
    v5 = fopen(file, "rb");
    v60 = v5;
    if ( v5 == nullptr )
      goto LABEL_24;
    fseeko(v5, 0, 2);
    v6 = ftello(v60);
    if ( v6 == 0 )
    {
      v72 = zip_new((uint32_t *)&buf);
      if ( v72 != nullptr )
      {
        v8 = strdup(file);
        *v72 = (uint32_t)(uintptr_t)(v8);
        if ( v8 != nullptr )
        {
          v72[1] = (uint32_t)(uintptr_t)(v60);
          return v72;
        }
        zip_free(v72);
        sub_4CDBF0(a3, nullptr, 0xEu);
      }
      else
      {
        v80[0] = 0;
        zip_error_get((uint32_t *)&buf, (uint32_t *)v80, (uint32_t *)&endptr);
        if ( zip_error_get_sys_type(v80[0]) == 1 )
          *(uint32_t *)__errno() = (uint32_t)(uintptr_t)(endptr);
        if ( a3 != nullptr )
          *a3 = v80[0];
      }
      goto LABEL_18;
    }
    v7 = 65558;
    if ( v6 <= 65558 )
      v7 = v6;
    if ( fseeko(v60, -v7, 2) == -1 && *(uint32_t *)__errno() != 27 )
    {
      if ( a3 != nullptr )
        *a3 = 4;
      goto LABEL_18;
    }
    v55 = (char *)malloc(0x10016u);
    if ( v55 == nullptr )
    {
      if ( a3 != nullptr )
        *a3 = 14;
      goto LABEL_18;
    }
    clearerr(v60);
    v53 = fread(v55, 1u, 0x10016u, v60);
    if ( (ferror(v60) ? 0x40 : 0) != 0 )
    {
      if ( a3 != nullptr )
        *a3 = 5;
      free(v55);
      goto LABEL_18;
    }
    zip_error_set(v82, 19, 0);
    v59 = v55;
    v56 = -1;
    v54 = nullptr;
LABEL_29:
    while ( 1 )
    {
      v73 = v59;
      v65 = v53 + v55 - v59 - 18;
      if ( v65 <= 3 )
        break;
      v15 = v59;
      do
      {
        v16 = (char *)memchr(v15, 80, ((const uint8_t *)v73 + v65) - (const uint8_t *)v15 - 3);
        v17 = v16;
        if ( v16 == nullptr )
          goto LABEL_30;
        v15 = v16 + 1;
        v59 = v16 + 1;
      }
      while ( memcmp(v16 + 1, &unk_1B152BC, 3u) != 0 );
      v75 = v55 - v17 + v53 - 22;
      if ( v75 >= 0 && memcmp(v17, (char *)&unk_1B152BC - 1, 4u) == 0 )
      {
        if ( memcmp(v17 + 4, &unk_1BEFDE4, 4u) == 0 )
        {
          v80[0] = (int)(uintptr_t)(v17 + 8);
          v66 = zip_read2((uint8_t **)v80);
          v18 = zip_read2((uint8_t **)v80);
          v19 = zip_cdir_new(v18, (int)(uintptr_t)v82);
          if ( v19 == nullptr )
            continue;
          v19[2] = zip_read4((uint8_t **)v80);
          v19[3] = zip_read4((uint8_t **)v80);
          v19[4] = 0;
          v20 = zip_read2((uint8_t **)v80);
          *((uint16_t *)v19 + 10) = v20;
          if ( v75 < v20 || v66 != v19[1] )
          {
            zip_error_set(v82, 19, 0);
            free(v19);
            continue;
          }
          if ( (a2 & 4) != 0 && v75 != v20 )
          {
            zip_error_set(v82, 21, 0);
            free(v19);
          }
          else
          {
            if ( v20 != 0 )
            {
              v34 = zip_memdup(v17 + 22, v20, (uint32_t *)v82);
              v19[4] = (uint32_t)(uintptr_t)(v34);
              if ( v34 == nullptr )
                goto LABEL_90;
            }
            v21 = (char *)v19[2];
            if ( (unsigned int)(uintptr_t)v21 >= v17 - v55 )
            {
              clearerr(v60);
              fseeko(v60, v19[3], 0);
              if ( (ferror(v60) ? 0x40 : 0) != 0 )
                goto LABEL_149;
              if ( ftello(v60) != v19[3] )
              {
                if ( (ferror(v60) ? 0x40 : 0) != 0 )
                {
LABEL_149:
                  v50 = (int *)__errno();
                  zip_error_set(v82, 4, *v50);
                }
                else
                {
                  zip_error_set(v82, 19, 0);
                }
LABEL_90:
                free(v19);
                continue;
              }
              v21 = (char *)v19[2];
              v67 = nullptr;
            }
            else
            {
              v80[0] = v17 - v21;
              v67 = v80;
            }
            endptr = v21;
            v76 = v19;
            v22 = v19[1];
            v23 = 0;
            v24 = 0;
            while ( 1 )
            {
              if ( v21 != nullptr && v23 == v22 )
                zip_cdir_grow((int)(uintptr_t)v76, v22 + 0x10000, (int)(uintptr_t)v82);
              if ( zip_dirent_read(*v76 + v24, v60, (uint8_t **)v67, (unsigned int *)&endptr, 0, (int)(uintptr_t)v82) < 0 )
              {
                v76[1] = v23;
                zip_cdir_free(v76);
                goto LABEL_29;
              }
              ++v23;
              v24 += 60;
              v22 = v76[1];
              if ( v23 >= v22 )
                break;
              v21 = endptr;
            }
            v25 = v76;
            if ( v54 != nullptr )
            {
              if ( v56 <= 0 )
              {
                v56 = 0;
                if ( v54[1] != 0 )
                {
                  v79 = *(uint32_t *)(*v54 + 56);
                  if ( (int)v54[1] > 0 )
                  {
                    v42 = v54[3];
                    if ( v79 > v42 )
                      goto LABEL_150;
                    v43 = *(uint32_t *)(*v54 + 16) + v79 + *(uint16_t *)(*v54 + 28) + 30;
                    if ( v43 < v79 )
                      v43 = *(uint32_t *)(*v54 + 56);
                    v58 = v43;
                    if ( v43 > v42 )
                    {
LABEL_150:
                      zip_error_set(v82, 19, 0);
                      v22 = v25[1];
                      v56 = -1;
                    }
                    else
                    {
                      v44 = *(uint32_t *)(*v54 + 56);
                      v45 = 60;
                      v63 = 0;
                      v70 = 0;
                      while ( 1 )
                      {
                        if ( fseeko(v60, v44, 0) != 0 )
                        {
                          zip_error_set(v82, 4, 0);
                          v22 = v25[1];
                          v56 = -1;
                          goto LABEL_65;
                        }
                        if ( zip_dirent_read((int)(uintptr_t)&buf, v60, nullptr, nullptr, 1, (int)(uintptr_t)v82) == -1 )
                        {
                          v56 = -1;
                          v22 = v25[1];
                          goto LABEL_65;
                        }
                        if ( sub_4CDC60(*v54 + v63, (int)(uintptr_t)&buf) != 0 )
                        {
                          zip_error_set(v82, 21, 0);
                          zip_dirent_finalize((int)(uintptr_t)&buf);
                          v22 = v25[1];
                          v56 = -1;
                          goto LABEL_65;
                        }
                        zip_dirent_finalize((int)(uintptr_t)&buf);
                        if ( ++v70 >= v54[1] )
                          break;
                        v46 = v79;
                        v47 = *v54 + v45;
                        v44 = *(uint32_t *)(v47 + 56);
                        if ( v79 > v44 )
                          v46 = *(uint32_t *)(v47 + 56);
                        v79 = v46;
                        if ( v46 > v54[3] )
                          goto LABEL_150;
                        v48 = v44 + *(uint32_t *)(v47 + 16) + *(uint16_t *)(v47 + 28) + 30;
                        if ( v58 >= v48 )
                          v48 = v58;
                        v58 = v48;
                        if ( v48 > v54[3] )
                          goto LABEL_150;
                        v63 = v45;
                        v45 += 60;
                      }
                      v56 = v58 - v79;
                      v22 = v25[1];
                    }
                  }
                }
              }
LABEL_65:
              v26 = 0;
              if ( v22 != 0 )
              {
                v27 = *(uint32_t *)(*v25 + 56);
                if ( v22 > 0 )
                {
                  v28 = v25[3];
                  if ( v27 > v28 )
                    goto LABEL_87;
                  v29 = v27 + *(uint32_t *)(*v25 + 16) + *(uint16_t *)(*v25 + 28) + 30;
                  if ( v29 < v27 )
                    v29 = *(uint32_t *)(*v25 + 56);
                  v77 = v29;
                  if ( v28 < v29 )
                  {
LABEL_87:
                    zip_error_set(v82, 19, 0);
                    v26 = -1;
                  }
                  else
                  {
                    v30 = *(uint32_t *)(*v25 + 56);
                    v68 = 60;
                    v64 = 0;
                    v61 = 0;
                    while ( 1 )
                    {
                      if ( fseeko(v60, v30, 0) != 0 )
                      {
                        zip_error_set(v82, 4, 0);
                        v26 = -1;
                        goto LABEL_84;
                      }
                      if ( zip_dirent_read((int)(uintptr_t)&buf, v60, nullptr, nullptr, 1, (int)(uintptr_t)v82) == -1 )
                      {
                        v26 = -1;
                        goto LABEL_84;
                      }
                      if ( sub_4CDC60(*v25 + v64, (int)(uintptr_t)&buf) != 0 )
                      {
                        zip_error_set(v82, 21, 0);
                        zip_dirent_finalize((int)(uintptr_t)&buf);
                        v26 = -1;
                        goto LABEL_84;
                      }
                      zip_dirent_finalize((int)(uintptr_t)&buf);
                      if ( ++v61 >= v25[1] )
                        break;
                      v31 = *v25 + v68;
                      v30 = *(uint32_t *)(v31 + 56);
                      if ( v27 > v30 )
                        v27 = *(uint32_t *)(v31 + 56);
                      if ( v27 > v25[3] )
                        goto LABEL_87;
                      v32 = v30 + *(uint32_t *)(v31 + 16) + *(uint16_t *)(v31 + 28) + 30;
                      if ( v77 >= v32 )
                        v32 = v77;
                      v77 = v32;
                      if ( v32 > v25[3] )
                        goto LABEL_87;
                      v33 = v68;
                      v68 += 60;
                      v64 = v33;
                    }
                    v26 = v77 - v27;
                  }
                }
              }
LABEL_84:
              if ( v56 >= v26 )
              {
                zip_cdir_free(v25);
              }
              else
              {
                v52 = v26;
                zip_cdir_free(v54);
                v54 = v25;
                v56 = v52;
              }
            }
            else
            {
              v54 = v76;
              v56 = 0;
              if ( (a2 & 4) != 0 )
              {
                if ( v22 != 0 )
                {
                  v35 = *(uint32_t *)(*v76 + 56);
                  if ( v22 > 0 )
                  {
                    v36 = v76[3];
                    if ( v36 < v35 )
                      goto LABEL_168;
                    v37 = v35 + *(uint32_t *)(*v76 + 16) + *(uint16_t *)(*v76 + 28) + 30;
                    if ( v37 < v35 )
                      v37 = *(uint32_t *)(*v76 + 56);
                    v57 = v37;
                    if ( v36 < v37 )
                    {
LABEL_168:
                      zip_error_set(v82, 19, 0);
                      v56 = -1;
                    }
                    else
                    {
                      v78 = *(uint32_t *)(*v76 + 56);
                      v38 = 60;
                      v62 = 0;
                      v69 = 0;
                      while ( 1 )
                      {
                        if ( fseeko(v60, v35, 0) != 0 )
                        {
                          zip_error_set(v82, 4, 0);
                          v56 = -1;
                          goto LABEL_114;
                        }
                        if ( zip_dirent_read((int)(uintptr_t)&buf, v60, nullptr, nullptr, 1, (int)(uintptr_t)v82) == -1 )
                          break;
                        if ( sub_4CDC60(*v25 + v62, (int)(uintptr_t)&buf) != 0 )
                        {
                          zip_error_set(v82, 21, 0);
                          zip_dirent_finalize((int)(uintptr_t)&buf);
                          v56 = -1;
                          goto LABEL_114;
                        }
                        zip_dirent_finalize((int)(uintptr_t)&buf);
                        if ( ++v69 >= v25[1] )
                        {
                          v56 = v57 - v78;
                          goto LABEL_114;
                        }
                        v39 = v78;
                        v40 = *v25 + v38;
                        v35 = *(uint32_t *)(v40 + 56);
                        if ( v78 > v35 )
                          v39 = *(uint32_t *)(v40 + 56);
                        v78 = v39;
                        if ( v39 > v25[3] )
                          goto LABEL_168;
                        v41 = v35 + *(uint32_t *)(v40 + 16) + *(uint16_t *)(v40 + 28) + 30;
                        if ( v57 >= v41 )
                          v41 = v57;
                        v57 = v41;
                        if ( v41 > v25[3] )
                          goto LABEL_168;
                        v62 = v38;
                        v38 += 60;
                      }
                      v56 = -1;
                    }
                  }
                }
LABEL_114:
                v54 = v25;
              }
            }
          }
        }
        else
        {
          zip_error_set(v82, 1, 0);
        }
      }
      else
      {
        zip_error_set(v82, 19, 0);
      }
    }
LABEL_30:
    free(v55);
    if ( v56 < 0 )
    {
      v80[0] = 0;
      zip_error_get((uint32_t *)v82, (uint32_t *)v80, (uint32_t *)&endptr);
      if ( zip_error_get_sys_type(v80[0]) == 1 )
        *(uint32_t *)__errno() = (uint32_t)(uintptr_t)(endptr);
      if ( a3 != nullptr )
        *a3 = v80[0];
    }
    else
    {
      if ( v54 == nullptr )
      {
LABEL_18:
        fclose(v60);
        return nullptr;
      }
      v74 = zip_new((uint32_t *)&buf);
      if ( v74 != nullptr )
      {
        v9 = strdup(file);
        *v74 = (uint32_t)(uintptr_t)(v9);
        if ( v9 != nullptr )
        {
          v74[7] = (uint32_t)(uintptr_t)(v54);
          v74[1] = (uint32_t)(uintptr_t)(v60);
          v10 = malloc(20 * v54[1]);
          v74[12] = (uint32_t)(uintptr_t)(v10);
          if ( v10 == nullptr )
          {
            sub_4CDBF0(a3, nullptr, 0xEu);
            zip_free(v74);
            return nullptr;
          }
          v11 = 0;
          if ( (int)v54[1] > 0 )
          {
            do
            {
              ++v11;
              zip_entry_new((int)(uintptr_t)v74);
            }
            while ( v54[1] > v11 );
            if ( v74[1] == 0 )
            {
              v14 = v74[5];
              v13 = v74;
              goto LABEL_41;
            }
          }
          v12 = v74[7];
          if ( v12 == 0 )
          {
            v14 = v74[5];
            v13 = v74;
            goto LABEL_41;
          }
          if ( *(uint16_t *)(v12 + 20) != 22 )
            goto LABEL_40;
          v49 = *(uint32_t *)(v12 + 16);
          if ( memcmp((const void *)v49, "TORRENTZIPPED-", 0xEu) != 0 )
          {
LABEL_144:
            v13 = v74;
            v14 = v74[5];
            goto LABEL_41;
          }
          {
            char torrent_crc[9];
            memcpy(torrent_crc, (const void *)(v49 + 14), 8);
            torrent_crc[8] = 0;
            *(uint32_t *)__errno() = 0;
            v51 = strtoul(torrent_crc, &endptr, 16);
          }
          if ( v51 != -1 || *(uint32_t *)__errno() == 0 )
          {
            if ( endptr != nullptr && *endptr != 0 )
              goto LABEL_144;
            if ( zip_filerange_crc((FILE *)v74[1], *(uint32_t *)(v74[7] + 12), *(uint32_t *)(v74[7] + 8), (uint32_t *)v80, nullptr) >= 0 )
            {
              if ( v51 == v80[0] )
              {
                v13 = v74;
                v14 = v74[5] | 1;
                v74[5] = v14;
                goto LABEL_41;
              }
              goto LABEL_144;
            }
          }
LABEL_40:
          v13 = v74;
          v14 = v74[5];
LABEL_41:
          v13[6] = v14;
          return v74;
        }
        zip_free(v74);
        sub_4CDBF0(a3, nullptr, 0xEu);
      }
      else
      {
        v80[0] = 0;
        zip_error_get((uint32_t *)&buf, (uint32_t *)v80, (uint32_t *)&endptr);
        if ( zip_error_get_sys_type(v80[0]) == 1 )
          *(uint32_t *)__errno() = (uint32_t)(uintptr_t)(endptr);
        if ( a3 != nullptr )
          *a3 = v80[0];
      }
    }
    zip_cdir_free(v54);
    goto LABEL_18;
  }
  v71 = nullptr;
  if ( a3 == nullptr )
    return v71;
  *a3 = 10;
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: zip_rename  (binary VA: 0x4ceee0)
// Original: zip_rename
// ----------------------------------------------------------------------------
int zip_rename(uint32_t *a1, int a2, char *s)
{
  const char *name;
  size_t v5;

  if ( a2 >= 0 && a1[10] > a2 && *s != 0 )
  {
    name = (const char *)zip_get_name(a1, a2, 0);
    if ( name == nullptr )
      return -1;
    v5 = strlen(s);
    if ( (s[v5 - 1] == 47) == (name[strlen(name) - 1] == 47) )
      return zip_set_name(a1, a2, s);
  }
  zip_error_set(a1 + 2, 18, 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_replace  (binary VA: 0x4cefe0)
// Original: zip_replace
// ----------------------------------------------------------------------------
int zip_replace(uint32_t *a1, int a2, char *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;

  v4 = a2;
  if ( a2 == -1 )
  {
    if ( zip_entry_new((int)(uintptr_t)a1) == nullptr )
      return v4;
    v4 = a1[10] - 1;
  }
  v5 = 20 * v4;
  zip_unchange_data(20 * v4 + a1[12]);
  if ( a3 != nullptr && zip_set_name(a1, v4, a3) != 0 )
    return -1;
  v6 = a1[7];
  v7 = 3;
  if ( v6 != 0 )
    v7 = (v4 >= *(uint32_t *)(v6 + 4)) + 2;
  *(uint32_t *)(v5 + a1[12]) = v7;
  *(uint32_t *)(a1[12] + v5 + 4) = a4;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: zip_replace  (binary VA: 0x4cf0a0)
// Original: zip_replace
// ----------------------------------------------------------------------------
int zip_replace(uint32_t *a1, int a2, int a3)
{
  if ( a2 >= 0 && a3 != 0 && a1[10] > a2 )
    return (zip_replace(a1, a2, nullptr, a3) != -1) - 1;
  zip_error_set(a1 + 2, 18, 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_set_archive_comment  (binary VA: 0x4cf120)
// Original: zip_set_archive_comment
// ----------------------------------------------------------------------------
int zip_set_archive_comment(int a1, void *a2, int a3)
{
  void *v3;

  if ( (unsigned int)a3 > 0x10000 || a3 > 0 && a2 == nullptr )
  {
    zip_error_set((uint32_t *)(a1 + 8), 18, 0);
    return -1;
  }
  if ( a3 == 0 )
  {
    v3 = nullptr;
    goto LABEL_5;
  }
  v3 = zip_memdup(a2, a3, (uint32_t *)(a1 + 8));
  if ( v3 != nullptr )
  {
LABEL_5:
    free(*(void **)(a1 + 32));
    *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v3);
    *(uint32_t *)(a1 + 36) = a3;
    return 0;
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_set_archive_flag  (binary VA: 0x4cf1e0)
// Original: zip_set_archive_flag
// ----------------------------------------------------------------------------
int zip_set_archive_flag(int a1, int a2, int a3)
{
  if ( a3 != 0 )
    *(uint32_t *)(a1 + 24) |= a2;
  else
    *(uint32_t *)(a1 + 24) &= ~a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: zip_set_file_comment  (binary VA: 0x4cf200)
// Original: zip_set_file_comment
// ----------------------------------------------------------------------------
int zip_set_file_comment(uint32_t *a1, int a2, void *a3, int a4)
{
  void *v4;
  int v5;
  void *v7;

  if ( a2 < 0 || a4 < 0 || a1[10] <= a2 || a4 > 0x10000 || a4 > 0 && a3 == nullptr )
  {
    zip_error_set(a1 + 2, 18, 0);
    return -1;
  }
  if ( a4 == 0 )
  {
    v4 = nullptr;
    goto LABEL_8;
  }
  v4 = zip_memdup(a3, a4, a1 + 2);
  if ( v4 != nullptr )
  {
LABEL_8:
    v5 = 20 * a2;
    v7 = v4;
    free(*(void **)(a1[12] + 20 * a2 + 12));
    *(uint32_t *)(a1[12] + v5 + 12) = (uint32_t)(uintptr_t)(v7);
    *(uint32_t *)(a1[12] + v5 + 16) = a4;
    return 0;
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_set_name  (binary VA: 0x4cf300)
// Original: zip_set_name
// ----------------------------------------------------------------------------
int zip_set_name(uint32_t *a1, int a2, char *s)
{
  int v3;
  int result;
  char *v5;
  int v6;
  int v7;

  if ( a2 >= 0 && s != nullptr && a1[10] > a2 )
  {
    v3 = zip_name_locate(a1, (int)(uintptr_t)s, 0, nullptr);
    if ( v3 == -1 )
    {
      v5 = strdup(s);
      if ( v5 != nullptr )
      {
        v6 = 20 * a2;
        v7 = a1[12] + 20 * a2;
        if ( *(uint32_t *)v7 == 0 )
        {
          *(uint32_t *)v7 = 4;
          v7 = v6 + a1[12];
        }
        free(*(void **)(v7 + 8));
        *(uint32_t *)(a1[12] + v6 + 8) = (uint32_t)(uintptr_t)(v5);
        return 0;
      }
      else
      {
        zip_error_set(a1 + 2, 14, 0);
        return -1;
      }
    }
    else
    {
      result = 0;
      if ( v3 != a2 )
      {
        zip_error_set(a1 + 2, 10, 0);
        return -1;
      }
    }
  }
  else
  {
    zip_error_set(a1 + 2, 18, 0);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_4CF450  (binary VA: 0x4cf450)
// Original: sub_4CF450
// ----------------------------------------------------------------------------
size_t sub_4CF450(void *ptr, uint32_t *dest, size_t a3, int a4)
{
  size_t n;
  size_t result;

  switch ( a4 )
  {
    case 0:
      *(uint32_t *)ptr = *((uint32_t *)ptr + 1);
      result = 0;
      break;
    case 1:
      n = *((uint32_t *)ptr + 2) - *(uint32_t *)ptr;
      if ( a3 <= n )
        n = a3;
      if ( n != 0 )
      {
        memcpy(dest, *(const void **)ptr, n);
        *(uint32_t *)ptr += n;
        result = n;
      }
      else
      {
        result = 0;
      }
      break;
    case 2:
      goto LABEL_9;
    case 3:
      result = 0xFFFFFFFF;
      if ( a3 > 0x1B )
      {
        zip_stat_init((int)(uintptr_t)dest);
        dest[3] = *((uint32_t *)ptr + 3);
        dest[4] = *((uint32_t *)ptr + 2) - *((uint32_t *)ptr + 1);
        result = 28;
      }
      break;
    case 4:
      result = 0xFFFFFFFF;
      if ( a3 > 7 )
      {
        dest[1] = 0;
        *dest = 0;
        result = 8;
      }
      break;
    case 5:
      if ( *((uint32_t *)ptr + 4) != 0 )
      {
        free(*((void **)ptr + 1));
        *((uint32_t *)ptr + 1) = 0;
      }
      free(ptr);
LABEL_9:
      result = 0;
      break;
    default:
      result = 0xFFFFFFFF;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_source_buffer  (binary VA: 0x4cf570)
// Original: zip_source_buffer
// ----------------------------------------------------------------------------
int zip_source_buffer(int a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  void *v5;
  int result;

  if ( a1 == 0 )
    return 0;
  if ( a3 >= 0 && (a3 <= 0 || a2 != 0) )
  {
    v4 = (uint32_t *)(malloc(0x14u));
    v5 = v4;
    if ( v4 != nullptr )
    {
      v4[1] = a2;
      v4[2] = a2 + a3;
      v4[4] = a4;
      v4[3] = time(nullptr);
      result = (int)(uintptr_t)(zip_source_function(a1, (int)(uintptr_t)sub_4CF450, (int)(uintptr_t)(v5)));
      if ( result == 0 )
      {
        free(v5);
        return 0;
      }
    }
    else
    {
      zip_error_set((uint32_t *)(a1 + 8), 14, 0);
      return 0;
    }
  }
  else
  {
    zip_error_set((uint32_t *)(a1 + 8), 18, 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_source_file  (binary VA: 0x4cf680)
// Original: zip_source_file
// ----------------------------------------------------------------------------
int zip_source_file(int a1, char *s, int a3, int a4)
{
  if ( a1 == 0 )
    return 0;
  if ( a3 >= 0 && s != nullptr && a4 >= -1 )
    return zip_source_file_or_p(a1, s, 0, (char *)(uintptr_t)(a3), a4);
  zip_error_set((uint32_t *)(a1 + 8), 18, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4CF720  (binary VA: 0x4cf720)
// Original: sub_4CF720
// ----------------------------------------------------------------------------
int sub_4CF720(void *ptr, uint32_t *a2, size_t n, int a4)
{
  size_t v4;
  signed int v5;
  int v6;
  int v7;
  int v8;
  int result;
  FILE *v10;
  size_t v11;
  int v12;
  struct stat buf;

  v4 = n;
  v5 = -1;
  switch ( a4 )
  {
    case 0:
      if ( *(uint32_t *)ptr != 0 )
      {
        v10 = fopen(*(const char **)ptr, "rb");
        *((uint32_t *)ptr + 1) = (uint32_t)(uintptr_t)(v10);
        if ( v10 == nullptr )
        {
          *((uint32_t *)ptr + 5) = 11;
          v5 = -1;
          *((uint32_t *)ptr + 6) = *(uint32_t *)__errno();
          goto LABEL_8;
        }
      }
      else
      {
        v10 = *((FILE **)ptr + 1);
      }
      if ( fseeko(v10, *((uint32_t *)ptr + 2), 0) < 0 )
      {
        *((uint32_t *)ptr + 5) = 4;
        v5 = -1;
        *((uint32_t *)ptr + 6) = *(uint32_t *)__errno();
        goto LABEL_8;
      }
      *((uint32_t *)ptr + 4) = *((uint32_t *)ptr + 3);
      return 0;
    case 1:
      v11 = *((uint32_t *)ptr + 4);
      if ( v11 != -1 && n > v11 )
        v4 = *((uint32_t *)ptr + 4);
      v5 = fread(a2, 1u, v4, *((FILE **)ptr + 1));
      if ( v5 < 0 )
        goto LABEL_30;
      v12 = *((uint32_t *)ptr + 4);
      if ( v12 == -1 )
        goto LABEL_8;
      *((uint32_t *)ptr + 4) = v12 - v5;
      return v5;
    case 2:
      v5 = 0;
      if ( *(uint32_t *)ptr != 0 )
      {
        fclose(*((FILE **)ptr + 1));
        *((uint32_t *)ptr + 1) = 0;
      }
      goto LABEL_8;
    case 3:
      v5 = -1;
      if ( n > 0x1B )
      {
        v6 = *((uint32_t *)ptr + 1);
        if ( v6 != 0 )
          v7 = fstat(*(int16_t *)(v6 + 14), &buf);
        else
          v7 = stat(*(const char **)ptr, &buf);
        if ( v7 != 0 )
        {
LABEL_30:
          *((uint32_t *)ptr + 5) = 5;
          v5 = -1;
          *((uint32_t *)ptr + 6) = *(uint32_t *)__errno();
        }
        else
        {
          zip_stat_init((int)(uintptr_t)a2);
          a2[3] = buf.st_ctim.tv_sec;
          v8 = *((uint32_t *)ptr + 3);
          if ( v8 == -1 )
          {
            v5 = 28;
            if ( (buf.st_mode & 0xF000) == 0x8000 )
              a2[4] = buf.st_size;
          }
          else
          {
            a2[4] = v8;
            v5 = 28;
          }
        }
      }
      goto LABEL_8;
    case 4:
      v5 = -1;
      if ( n <= 7 )
        goto LABEL_8;
      *a2 = *((uint32_t *)ptr + 5);
      a2[1] = *((uint32_t *)ptr + 6);
      result = 8;
      break;
    case 5:
      free(*(void **)ptr);
      if ( *((uint32_t *)ptr + 1) != 0 )
        fclose(*((FILE **)ptr + 1));
      free(ptr);
      return 0;
    default:
LABEL_8:
      result = v5;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_source_file_or_p  (binary VA: 0x4cf9d0)
// Original: zip_source_file_or_p
// ----------------------------------------------------------------------------
int zip_source_file_or_p(int a1, char *s, char *a3, char *a4, int a5)
{
  int v5;
  char **v6;
  char **v7;
  char *v8;
  int result;

  v5 = a5;
  if ( a3 == nullptr && s == nullptr )
  {
    zip_error_set((uint32_t *)(a1 + 8), 18, 0);
    return 0;
  }
  v6 = (char **)malloc(0x1Cu);
  v7 = v6;
  if ( v6 == nullptr )
  {
    zip_error_set((uint32_t *)(a1 + 8), 14, 0);
    return 0;
  }
  *v6 = nullptr;
  if ( s != nullptr && (v8 = strdup(s), *v7 = v8, v8 == nullptr) )
  {
    zip_error_set((uint32_t *)(a1 + 8), 14, 0);
    free(v7);
    return 0;
  }
  else
  {
    v7[2] = a4;
    if ( a5 == 0 )
      v5 = -1;
    v7[1] = a3;
    v7[3] = (char *)v5;
    result = (int)(uintptr_t)(zip_source_function(a1, (int)(uintptr_t)sub_4CF720, (int)(uintptr_t)(v7)));
    if ( result == 0 )
    {
      free(v7);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_source_filep  (binary VA: 0x4cfb10)
// Original: zip_source_filep
// ----------------------------------------------------------------------------
int zip_source_filep(int a1, char *a2, char *a3, int a4)
{
  if ( a1 == 0 )
    return 0;
  if ( (int)(uintptr_t)a3 >= 0 && a2 != nullptr && a4 >= -1 )
    return zip_source_file_or_p(a1, nullptr, a2, a3, a4);
  zip_error_set((uint32_t *)(a1 + 8), 18, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: zip_source_free  (binary VA: 0x4cfbb0)
// Original: zip_source_free
// ----------------------------------------------------------------------------
void zip_source_free(uint32_t *ptr)
{
  if ( ptr != nullptr )
  {
    ((void (*)(uint32_t, uint32_t, uint32_t, int))*ptr)(ptr[1], 0, 0, 5);
    free(ptr);
  }
}

// ----------------------------------------------------------------------------
// Function: zip_source_function  (binary VA: 0x4cfc10)
// Original: zip_source_function
// ----------------------------------------------------------------------------
uint32_t * zip_source_function(int a1, int a2, int a3)
{
  uint32_t *result;

  result = nullptr;
  if ( a1 != 0 )
  {
    result = (uint32_t *)(malloc(8u));
    if ( result != nullptr )
    {
      *result = a2;
      result[1] = a3;
    }
    else
    {
      zip_error_set((uint32_t *)(a1 + 8), 14, 0);
      return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_4CFC80  (binary VA: 0x4cfc80)
// Original: sub_4CFC80
// ----------------------------------------------------------------------------
int sub_4CFC80(int *ptr, uint32_t *a2, unsigned int a3, int a4)
{
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int result;
  char v12[8204];

  v4 = a3;
  switch ( a4 )
  {
    case 0:
      v7 = ptr[8];
      result = 0;
      if ( v7 > 0 )
      {
        v8 = 0;
        while ( 1 )
        {
          v9 = v7 - v8;
          if ( (unsigned int)(v7 - v8) > 0x2000 )
            v9 = 0x2000;
          v10 = zip_fread(*ptr, v12, v9);
          if ( v10 < 0 )
            break;
          v8 += v10;
          v7 = ptr[8];
          if ( v7 <= v8 )
            goto LABEL_11;
        }
        zip_fclose((void *)*ptr);
        *ptr = 0;
        result = -1;
      }
      break;
    case 1:
      v5 = ptr[9];
      if ( v5 != -1 && a3 > v5 )
        v4 = ptr[9];
      result = zip_fread(*ptr, a2, v4);
      if ( result < 0 )
      {
        result = -1;
      }
      else
      {
        v6 = ptr[9];
        if ( v6 != -1 )
          ptr[9] = v6 - result;
      }
      break;
    case 2:
      goto LABEL_11;
    case 3:
      result = -1;
      if ( a3 > 0x1B )
      {
        *a2 = ptr[1];
        a2[1] = ptr[2];
        a2[2] = ptr[3];
        a2[3] = ptr[4];
        a2[4] = ptr[5];
        a2[5] = ptr[6];
        a2[6] = ptr[7];
        result = 28;
      }
      break;
    case 4:
      result = -1;
      if ( a3 > 7 )
      {
        zip_file_error_get(*ptr, a2, a2 + 1);
        result = 8;
      }
      break;
    case 5:
      zip_fclose((void *)*ptr);
      free(ptr);
LABEL_11:
      result = 0;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_source_zip  (binary VA: 0x4cfe40)
// Original: zip_source_zip
// ----------------------------------------------------------------------------
uint32_t * zip_source_zip(int a1, uint32_t *a2, int a3, int a4, int a5, int a6)
{
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *result;
  typedef unsigned int _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t _g4_t_v11[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);

  if ( a1 == 0 )
    return nullptr;
  if ( a5 < 0 || a2 == nullptr || a6 < -1 || a3 < 0 || a3 >= a2[10] )
  {
    zip_error_set((uint32_t *)(a1 + 8), 18, 0);
    return nullptr;
  }
  if ( (a4 & 8) == 0 && (unsigned int)(*(uint32_t *)(a2[12] + 20 * a3) - 2) <= 1 )
  {
    zip_error_set((uint32_t *)(a1 + 8), 15, 0);
    return nullptr;
  }
  if ( a6 != 0 )
  {
    if ( a6 != -1 || a5 != 0 )
      goto LABEL_11;
  }
  else
  {
    a6 = -1;
    if ( a5 != 0 )
    {
LABEL_11:
      v9 = a4 & 0xFFFFFFFB;
      goto LABEL_12;
    }
  }
  if ( (a4 & 0x10) != 0 )
    goto LABEL_11;
  v9 = a4 | 4;
LABEL_12:
  v6 = (uint32_t *)(malloc(0x28u));
  if ( v6 == nullptr )
  {
    zip_error_set((uint32_t *)(a1 + 8), 14, 0);
    return nullptr;
  }
  v10 = a2 + 2;
  zip_error_copy(v11, a2 + 2);
  if ( (int)zip_stat_index(a2, a3, v9, (int)(uintptr_t)(v6 + 1)) >= 0 && (v7 = zip_fopen_index((int)(uintptr_t)a2, a3, v9), *v6 = (uint32_t)(uintptr_t)(v7), v7 != nullptr) )
  {
    v6[8] = a5;
    v6[9] = a6;
    if ( (v9 & 4) == 0 )
    {
      v6[6] = a6;
      v6[5] = a6;
      *((uint16_t *)v6 + 14) = 0;
      v6[3] = 0;
    }
    result = zip_source_function(a1, (int)(uintptr_t)sub_4CFC80, (int)(uintptr_t)v6);
    if ( result == nullptr )
    {
      free(v6);
      return nullptr;
    }
  }
  else
  {
    free(v6);
    zip_error_copy((uint32_t *)(a1 + 8), v10);
    zip_error_copy(v10, v11);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_stat  (binary VA: 0x4d0090)
// Original: zip_stat
// ----------------------------------------------------------------------------
int zip_stat(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = zip_name_locate(a1, a2, a3);
  result = -1;
  if ( v4 >= 0 )
    return zip_stat_index(a1, v4, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: zip_stat_index  (binary VA: 0x4d0100)
// Original: zip_stat_index
// ----------------------------------------------------------------------------
int zip_stat_index(uint32_t *a1, int a2, char a3, int a4)
{
  int name;
  uint32_t *v5;
  int16_t v6;
  int v8;
  int v9;
  int v10;

  if ( a2 >= 0 && a2 < a1[10] )
  {
    name = zip_get_name(a1, a2, a3);
    if ( name == 0 )
      return -1;
    if ( (a3 & 8) == 0 )
    {
      v8 = a1[12] + 20 * a2;
      if ( (unsigned int)(*(uint32_t *)v8 - 2) <= 1 )
      {
        v10 = name;
        v9 = (**(int (***)(uint32_t, int, int, int))(v8 + 4))(*(uint32_t *)(*(uint32_t *)(v8 + 4) + 4), a4, 28, 3);
        name = v10;
        if ( v9 < 0 )
        {
          zip_error_set(a1 + 2, 15, 0);
          return -1;
        }
        goto LABEL_9;
      }
    }
    v5 = (uint32_t *)a1[7];
    if ( v5 != nullptr && a2 < v5[1] )
    {
      *(uint32_t *)(a4 + 8) = *(uint32_t *)(*v5 + 60 * a2 + 12);
      *(uint32_t *)(a4 + 16) = *(uint32_t *)(*(uint32_t *)a1[7] + 60 * a2 + 20);
      *(uint32_t *)(a4 + 12) = *(uint32_t *)(*(uint32_t *)a1[7] + 60 * a2 + 8);
      *(uint32_t *)(a4 + 20) = *(uint32_t *)(*(uint32_t *)a1[7] + 60 * a2 + 16);
      *(uint16_t *)(a4 + 24) = *(uint16_t *)(*(uint32_t *)a1[7] + 60 * a2 + 6);
      v6 = *(uint16_t *)(*(uint32_t *)a1[7] + 60 * a2 + 4);
      if ( (v6 & 1) != 0 )
        *(uint16_t *)(a4 + 26) = (v6 & 0x40) == 0 ? 1 : -1;
      else
        *(uint16_t *)(a4 + 26) = 0;
LABEL_9:
      *(uint32_t *)(a4 + 4) = a2;
      *(uint32_t *)a4 = name;
      return 0;
    }
  }
  zip_error_set(a1 + 2, 18, 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: zip_stat_init  (binary VA: 0x4d02a0)
// Original: zip_stat_init
// ----------------------------------------------------------------------------
int zip_stat_init(int a1)
{
  *(uint32_t *)a1 = 0;
  *(uint32_t *)(a1 + 4) = -1;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = -1;
  *(uint32_t *)(a1 + 16) = -1;
  *(uint32_t *)(a1 + 20) = -1;
  *(uint16_t *)(a1 + 24) = 0;
  *(uint16_t *)(a1 + 26) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: zip_strerror  (binary VA: 0x4d02e0)
// Original: zip_strerror
// ----------------------------------------------------------------------------
char * zip_strerror(int a1)
{
  return zip_error_strerror((int *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: zip_unchange  (binary VA: 0x4d0310)
// Original: zip_unchange
// ----------------------------------------------------------------------------
int zip_unchange(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  void *ptr;
  int name;
  int v8;

  if ( a2 < 0 || a2 >= a1[10] )
  {
    zip_error_set(a1 + 2, 18, 0);
    return -1;
  }
  v3 = 20 * a2;
  v4 = a1[12] + 20 * a2;
  ptr = *(void **)(v4 + 8);
  if ( ptr != nullptr )
  {
    if ( a3 == 0 )
    {
      name = zip_get_name(a1, a2, 8, nullptr);
      v8 = zip_name_locate(a1, name, 0, nullptr);
      if ( v8 != a2 && v8 != -1 )
      {
        zip_error_set(a1 + 2, 10, 0);
        return -1;
      }
      ptr = *(void **)(a1[12] + v3 + 8);
    }
    free(ptr);
    *(uint32_t *)(a1[12] + v3 + 8) = 0;
    v4 = v3 + a1[12];
  }
  free(*(void **)(v4 + 12));
  *(uint32_t *)(a1[12] + v3 + 12) = 0;
  *(uint32_t *)(a1[12] + v3 + 16) = -1;
  zip_unchange_data(a1[12] + v3);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: zip_unchange  (binary VA: 0x4d0460)
// Original: zip_unchange
// ----------------------------------------------------------------------------
int zip_unchange(uint32_t *a1, int a2)
{
  return zip_unchange(a1, a2, 0);
}

// ----------------------------------------------------------------------------
// Function: zip_unchange_all  (binary VA: 0x4d04a0)
// Original: zip_unchange_all
// ----------------------------------------------------------------------------
int zip_unchange_all(uint32_t *a1)
{
  int v1;
  int v2;
  int v4;

  v1 = 0;
  if ( (int)a1[10] > 0 )
  {
    v2 = 0;
    do
    {
      v4 = v2++;
      v1 |= zip_unchange(a1, v4, 1);
    }
    while ( a1[10] > v2 );
  }
  return v1 | zip_unchange_archive((int)(uintptr_t)a1);
}

// ----------------------------------------------------------------------------
// Function: zip_unchange_archive  (binary VA: 0x4d0500)
// Original: zip_unchange_archive
// ----------------------------------------------------------------------------
int zip_unchange_archive(int a1)
{
  int v1;

  free(*(void **)(a1 + 32));
  v1 = *(uint32_t *)(a1 + 20);
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 24) = v1;
  *(uint32_t *)(a1 + 36) = -1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: zip_unchange_data  (binary VA: 0x4d0550)
// Original: zip_unchange_data
// ----------------------------------------------------------------------------
int zip_unchange_data(int a1)
{
  int v1;
  int result;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 )
  {
    (*(void (**)(uint32_t, uint32_t, uint32_t, int))v1)(*(uint32_t *)(v1 + 4), 0, 0, 5);
    free(*(void **)(a1 + 4));
    *(uint32_t *)(a1 + 4) = 0;
  }
  result = *(uint32_t *)(a1 + 8) != 0 ? 4 : 0;
  *(uint32_t *)a1 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_controller_NativeBridgeHIDControllers_NativeControllerDisconnected  (binary VA: 0x4d0a30)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_controller_NativeBridgeHIDControllers_NativeControllerDisconnected
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_controller_NativeBridgeHIDControllers_NativeControllerDisconnected()
{
  void *v0;
  typedef bool _g4_t_v2[4];
  typedef uint32_t _g4_t_v3[2];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (10u + sizeof(_g4_t_v2)) > _g4_s0 ? (10u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 10u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)v3, (char *)&unk_1B15112, (int)(uintptr_t)v2);
  g4_std::string::assign_str(&acp_utils::HidController::s_ControllerName, v3);
  v0 = (void *)(v3[0] - 12);
  if ( (void *)(v3[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v0);
  }
  return acp_utils::HidController::OnControllerStateChanged(nullptr);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_controller_NativeBridgeHIDControllers_NativeControllerConnected  (binary VA: 0x4d0ac0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_controller_NativeBridgeHIDControllers_NativeControllerConnected
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_controller_NativeBridgeHIDControllers_NativeControllerConnected(int a1, int a2, int a3)
{
  char *v3;
  void *v4;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v6)) > _g4_s0 ? (10u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 10u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v3 = (char *)G4_VCALL<int>(a1, 676, a3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v7, v3, (int)(uintptr_t)&v6);
  g4_std::string::assign_str(&acp_utils::HidController::s_ControllerName, v7);
  v4 = (void *)(v7[0] - 12);
  if ( (void *)(v7[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  acp_utils::HidController::OnControllerStateChanged((acp_utils::HidController::Self *)((char *)&dword_0 + 1));
  G4_VCALL<void>(a1, 680, a3, v3);
  return G4_VCALL<int>(a1, 92, a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_controller_NativeBridgeHIDControllers_NativeHandleInputEvents  (binary VA: 0x4d0be0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_controller_NativeBridgeHIDControllers_NativeHandleInputEvents
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_controller_NativeBridgeHIDControllers_NativeHandleInputEvents(int a1, int a2, acp_utils::HidController::Self *a3, int64_t a4)
{
  return acp_utils::HidController::DispatchEventToCallback(a3, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_4D0D00  (binary VA: 0x4d0d00)
// Original: sub_4D0D00
// ----------------------------------------------------------------------------
int sub_4D0D00()
{
  int v1[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)&acp_utils::HidController::s_ControllerName, (char *)&unk_1B15112, (int)(uintptr_t)v1);
  return __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &acp_utils::HidController::s_ControllerName, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_4D0D60  (binary VA: 0x4d0d60)
// Original: sub_4D0D60
// ----------------------------------------------------------------------------
int sub_4D0D60(int a1, uint32_t *a2, const void **a3)
{
  size_t v3;
  uint32_t *v4;
  size_t v5;
  size_t i;
  size_t v7;
  uint32_t *v8;
  size_t v9;
  size_t n;
  int v11;
  uint32_t *v12;
  size_t v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  size_t v19;
  unsigned int v20;
  size_t v21;
  size_t v22;
  size_t v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  size_t v28;
  size_t v29;
  unsigned int v30;
  int v31;
  size_t v32;
  char v33;
  void *s1;
  size_t v37;
  size_t v38;
  uint32_t *v39;

  v3 = a2[2];
  v4 = a2 + 1;
  v39 = v4;
  if ( v3 == 0 )
  {
    v13 = (size_t)v4;
    goto LABEL_17;
  }
  s1 = (void *)*a3;
  v5 = *((uint32_t *)*a3 - 3);
  for ( i = v3; ; i = v7 )
  {
    v8 = *(uint32_t **)(i + 16);
    v9 = *(v8 - 3);
    n = v9;
    v32 = i;
    if ( v5 <= v9 )
      n = v5;
    v37 = n;
    v11 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v11 == 0 )
      v11 = v5 - v9;
    if ( v11 >= 0 )
      break;
    v7 = *(uint32_t *)(v32 + 8);
    v33 = 1;
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v7 = *(uint32_t *)(v32 + 12);
  v33 = 0;
  if ( v7 != 0 )
    goto LABEL_4;
LABEL_11:
  v12 = v8;
  v13 = v32;
  v14 = v37;
  v15 = v12;
  v38 = v32;
  if ( v33 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( a2[3] == v13 )
  {
    LOBYTE(v20) = 1;
    if ( v39 != (uint32_t *)v13 )
    {
      v21 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v22 = *((uint32_t *)*a3 - 3);
      v23 = v22;
      if ( v21 <= v22 )
        v23 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v24 = v22 - v21;
      v25 = memcmp(*a3, *(const void **)(v13 + 16), v23);
      if ( v25 == 0 )
        v25 = v24;
      v20 = v25 >> 31;
    }
    v26 = opNew(0x18u);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      g4_std::string::construct_copy(v26 + 20, a3 + 1);
    }
    sub_1904970(v20, v26, v13, v39);
  }
  else
  {
    v19 = sub_19048F0(v13);
    v15 = *(uint32_t **)(v19 + 16);
    v38 = v13;
    v13 = v19;
    v9 = *(v15 - 3);
    s1 = (void *)*a3;
    v5 = *((uint32_t *)*a3 - 3);
    v14 = v5;
    if ( v9 <= v5 )
      v14 = *(v15 - 3);
LABEL_12:
    v16 = memcmp(v15, s1, v14);
    v17 = v9 - v5;
    if ( v16 != 0 )
      v17 = v16;
    if ( v17 >= 0 )
    {
      *(uint32_t *)a1 = v13;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    LOBYTE(v27) = 1;
    if ( v39 != (uint32_t *)v38 )
    {
      v28 = *(uint32_t *)(*(uint32_t *)(v38 + 16) - 12);
      v29 = v28;
      if ( v5 <= v28 )
        v29 = v5;
      v30 = v5 - v28;
      v31 = memcmp(s1, *(const void **)(v38 + 16), v29);
      if ( v31 != 0 )
        v30 = v31;
      v27 = v30 >> 31;
    }
    v26 = opNew(0x18u);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      g4_std::string::construct_copy(v26 + 20, a3 + 1);
    }
    sub_1904970(v27, v26, v38, v39);
  }
  ++a2[5];
  *(uint32_t *)a1 = v26;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4D0FC0  (binary VA: 0x4d0fc0)
// Original: sub_4D0FC0
// ----------------------------------------------------------------------------
int * sub_4D0FC0(int *a1, uint32_t *a2, int a3, const void **a4)
{
  const void *s2;
  uint32_t *s1;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  int v11;
  size_t v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  uint32_t *v21;
  size_t v22;
  size_t v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  char v31;
  int v32;
  int v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef const void *_g4_t_v38;
  typedef const void *_g4_t_v39;
  typedef size_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v35)) > _g4_s1 ? (4u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v36)) > _g4_s2 ? (4u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v37)) > _g4_s3 ? (8u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v38)) > _g4_s4 ? (8u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v39)) > _g4_s5 ? (8u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v42)) > _g4_s6 ? (24u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v43)) > _g4_s7 ? (24u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v44)) > _g4_s8 ? (24u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v45)) > _g4_s9 ? (28u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v46)) > _g4_s10 ? (28u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v47)) > _g4_s11 ? (32u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v48)) > _g4_s12 ? (36u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v49)) > _g4_s13 ? (36u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v50)) > _g4_s14 ? (40u + sizeof(_g4_t_v50)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);

  v45 = (size_t)(a2 + 1);
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v44 = a2[4];
      v21 = *(uint32_t **)(v44 + 16);
      v22 = *((uint32_t *)*a4 - 3);
      v23 = *(v21 - 3);
      if ( v22 <= v23 )
        v23 = *((uint32_t *)*a4 - 3);
      v39 = *a4;
      v35 = *(v21 - 3);
      v46 = v23;
      v24 = memcmp(*(const void **)(v44 + 16), *a4, v23);
      if ( v24 == 0 )
        v24 = v35 - v22;
      if ( v24 < 0 )
      {
        LOBYTE(v25) = 1;
        if ( a3 != v44 )
        {
          v26 = memcmp(v39, v21, v46);
          v27 = v22 - v35;
          if ( v26 == 0 )
            v26 = v27;
          v25 = v26 >> 31;
        }
        v15 = opNew(0x18u);
        if ( v15 != -16 )
        {
          g4_std::string::construct_copy(v15 + 16, a4);
          g4_std::string::construct_copy(v15 + 20, a4 + 1);
        }
        sub_1904970(v25, v15, v44, a3);
        goto LABEL_31;
      }
    }
  }
  else
  {
    s2 = *a4;
    s1 = *(uint32_t **)(a3 + 16);
    v6 = *((uint32_t *)*a4 - 3);
    n = v6;
    if ( *(s1 - 3) <= v6 )
      n = *(s1 - 3);
    v34 = *(s1 - 3);
    v37 = n;
    v8 = memcmp(*a4, *(const void **)(a3 + 16), n);
    v42 = v8;
    v47 = v6 - v34;
    if ( v8 == 0 )
      v8 = v6 - v34;
    if ( v8 < 0 )
    {
      if ( a3 != a2[3] )
      {
        v11 = sub_1904940(a3);
        v12 = v6;
        v48 = v11;
        v13 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v38 = *(const void **)(v11 + 16);
        if ( v13 <= v6 )
          v12 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v43 = v12;
        v14 = memcmp(*(const void **)(v11 + 16), s2, v12);
        if ( v14 == 0 )
          v14 = v13 - v6;
        if ( v14 >= 0 )
          goto LABEL_39;
        if ( *(uint32_t *)(v48 + 12) == 0 )
        {
          LOBYTE(v28) = 1;
          if ( v45 != v48 )
          {
            v29 = v6 - v13;
            v30 = memcmp(s2, v38, v43);
            if ( v30 == 0 )
              v30 = v29;
            v28 = v30 >> 31;
          }
          v36 = v28;
          v15 = opNew(0x18u);
          v31 = v36;
          if ( v15 != -16 )
          {
            g4_std::string::construct_copy(v15 + 16, a4);
            g4_std::string::construct_copy(v15 + 20, a4 + 1);
            v31 = v36;
          }
          sub_1904970(v31, v15, v48, v45);
          goto LABEL_31;
        }
      }
      v15 = opNew(0x18u);
      if ( v15 != -16 )
      {
        g4_std::string::construct_copy(v15 + 16, a4);
        g4_std::string::construct_copy(v15 + 20, a4 + 1);
      }
      sub_1904970(1, v15, a3, v45);
      goto LABEL_31;
    }
    v9 = memcmp(s1, s2, v37);
    if ( v9 == 0 )
      v9 = v34 - v6;
    if ( v9 >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    v16 = a2[4];
    if ( a3 == v16 )
    {
      v33 = v42;
      if ( v42 == 0 )
        v33 = v6 - v34;
      v15 = opNew(0x18u);
      if ( v15 != -16 )
      {
        g4_std::string::construct_copy(v15 + 16, a4);
        g4_std::string::construct_copy(v15 + 20, a4 + 1);
      }
      sub_1904970(v33 < 0, v15, v16, v45);
      goto LABEL_31;
    }
    v49 = sub_19048E0(a3);
    v17 = v6;
    v18 = *(uint32_t *)(*(uint32_t *)(v49 + 16) - 12);
    if ( v18 <= v6 )
      v17 = *(uint32_t *)(*(uint32_t *)(v49 + 16) - 12);
    v19 = v6 - v18;
    v20 = memcmp(s2, *(const void **)(v49 + 16), v17);
    if ( v20 != 0 )
      v19 = v20;
    if ( v19 < 0 )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v15 = opNew(0x18u);
        if ( v15 != -16 )
        {
          g4_std::string::construct_copy(v15 + 16, a4);
          g4_std::string::construct_copy(v15 + 20, a4 + 1);
        }
        sub_1904970(1, v15, v49, v45);
      }
      else
      {
        v32 = v42;
        if ( v42 == 0 )
          v32 = v47;
        v15 = opNew(0x18u);
        if ( v15 != -16 )
        {
          g4_std::string::construct_copy(v15 + 16, a4);
          g4_std::string::construct_copy(v15 + 20, a4 + 1);
        }
        sub_1904970(v32 < 0, v15, a3, v45);
      }
LABEL_31:
      ++a2[5];
      *a1 = v15;
      return a1;
    }
  }
LABEL_39:
  sub_4D0D60((int)(uintptr_t)v50, a2, a4);
  *a1 = v50[0];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: JNU_ThrowByName  (binary VA: 0x4d15a0)
// Original: JNU_ThrowByName
// ----------------------------------------------------------------------------
int JNU_ThrowByName(int a1, int a2, int a3)
{
  int v3;

  v3 = G4_VCALL<int>(a1, 24, a2);
  if ( v3 != 0 )
    G4_VCALL<void>(a1, 56, v3, a3);
  return G4_VCALL<int>(a1, 92, v3);
}

// ----------------------------------------------------------------------------
// Function: uI64ToChar  (binary VA: 0x4d1600)
// Original: uI64ToChar
// ----------------------------------------------------------------------------
char * uI64ToChar(char *s, size_t n, uint64_t a3)
{
  uint64_t v3; // rdi
  void *v4;
  char *result;
  typedef int _g4_t_v6;
  typedef char *_g4_t_v7;
  typedef char *_g4_t_dest;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_dest)) > _g4_s2 ? (20u + sizeof(_g4_t_dest)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 20u);

  v3 = a3;
  memset(s, 0, n);
  v4 = alloca(n + 15);
  v7 = s + 1;
  dest = (char *)&v6;
  if ( a3 != 0 )
  {
    do
    {
      strcpy(dest, s);
      *s = v3 % 0xA + 48;
      strcpy(v7, dest);
      v3 /= 0xAu;
      result = (char *)(v3 | HIDWORD(v3));
    }
    while ( v3 != 0 );
  }
  else
  {
    *s = 48;
    return s;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: charToUI64  (binary VA: 0x4d16e0)
// Original: charToUI64
// ----------------------------------------------------------------------------
int charToUI64(uint32_t *a1, int a2, int a3)
{
  uint64_t v3; // rax
  int i;
  int64_t v5;
  double v6; // xmm1_8
  long double v7; // fst7

  LODWORD(v3) = a2;
  *a1 = 0;
  a1[1] = 0;
  if ( a2 > 0 )
  {
    v3 = 0;
    for ( i = 0; i != a2; ++i )
    {
      v5 = v3;
      v6 = (double)(*(char *)(a3 + i) - 48) * pow(10.0, (double)(a2 - 1 - i));
      v7 = (long double)(int64_t)v5;
      if ( v5 < 0 )
        v7 = v7 + 1.8446744e19f;
      v3 = (uint64_t)((double)v7 + v6);
      *(uint64_t *)a1 = v3;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_4DB110  (binary VA: 0x4db110)
// Original: sub_4DB110
// ----------------------------------------------------------------------------
int sub_4DB110()
{
  int v1[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_20D119C, "tcache.bin", (int)(uintptr_t)v1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D119C, &unk_20D1280);
  sub_1900D70(&unk_20D11A0);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20D11A0, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_4DB190  (binary VA: 0x4db190)
// Original: sub_4DB190
// ----------------------------------------------------------------------------
int sub_4DB190(int a1, uint32_t *a2, const void **a3)
{
  size_t v3;
  uint32_t *v4;
  size_t v5;
  size_t i;
  size_t v7;
  uint32_t *v8;
  size_t v9;
  size_t n;
  int v11;
  uint32_t *v12;
  size_t v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  size_t v19;
  unsigned int v20;
  size_t v21;
  size_t v22;
  size_t v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  size_t v28;
  size_t v29;
  unsigned int v30;
  int v31;
  size_t v32;
  char v33;
  void *s1;
  size_t v37;
  size_t v38;
  uint32_t *v39;

  v3 = a2[2];
  v4 = a2 + 1;
  v39 = v4;
  if ( v3 == 0 )
  {
    v13 = (size_t)v4;
    goto LABEL_17;
  }
  s1 = (void *)*a3;
  v5 = *((uint32_t *)*a3 - 3);
  for ( i = v3; ; i = v7 )
  {
    v8 = *(uint32_t **)(i + 16);
    v9 = *(v8 - 3);
    n = v9;
    v32 = i;
    if ( v5 <= v9 )
      n = v5;
    v37 = n;
    v11 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v11 == 0 )
      v11 = v5 - v9;
    if ( v11 >= 0 )
      break;
    v7 = *(uint32_t *)(v32 + 8);
    v33 = 1;
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v7 = *(uint32_t *)(v32 + 12);
  v33 = 0;
  if ( v7 != 0 )
    goto LABEL_4;
LABEL_11:
  v12 = v8;
  v13 = v32;
  v14 = v37;
  v15 = v12;
  v38 = v32;
  if ( v33 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( a2[3] == v13 )
  {
    LOBYTE(v20) = 1;
    if ( v39 != (uint32_t *)v13 )
    {
      v21 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v22 = *((uint32_t *)*a3 - 3);
      v23 = v22;
      if ( v21 <= v22 )
        v23 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v24 = v22 - v21;
      v25 = memcmp(*a3, *(const void **)(v13 + 16), v23);
      if ( v25 == 0 )
        v25 = v24;
      v20 = v25 >> 31;
    }
    v26 = opNew(0x18u);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      g4_std::string::construct_copy(v26 + 20, a3 + 1);
    }
    sub_1904970(v20, v26, v13, v39);
  }
  else
  {
    v19 = sub_19048F0(v13);
    v15 = *(uint32_t **)(v19 + 16);
    v38 = v13;
    v13 = v19;
    v9 = *(v15 - 3);
    s1 = (void *)*a3;
    v5 = *((uint32_t *)*a3 - 3);
    v14 = v5;
    if ( v9 <= v5 )
      v14 = *(v15 - 3);
LABEL_12:
    v16 = memcmp(v15, s1, v14);
    v17 = v9 - v5;
    if ( v16 != 0 )
      v17 = v16;
    if ( v17 >= 0 )
    {
      *(uint32_t *)a1 = v13;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    LOBYTE(v27) = 1;
    if ( v39 != (uint32_t *)v38 )
    {
      v28 = *(uint32_t *)(*(uint32_t *)(v38 + 16) - 12);
      v29 = v28;
      if ( v5 <= v28 )
        v29 = v5;
      v30 = v5 - v28;
      v31 = memcmp(s1, *(const void **)(v38 + 16), v29);
      if ( v31 != 0 )
        v30 = v31;
      v27 = v30 >> 31;
    }
    v26 = opNew(0x18u);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      g4_std::string::construct_copy(v26 + 20, a3 + 1);
    }
    sub_1904970(v27, v26, v38, v39);
  }
  ++a2[5];
  *(uint32_t *)a1 = v26;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DB3F0  (binary VA: 0x4db3f0)
// Original: sub_4DB3F0
// ----------------------------------------------------------------------------
int * sub_4DB3F0(int *a1, uint32_t *a2, int a3, const void **a4)
{
  const void *s2;
  uint32_t *s1;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  int v11;
  size_t v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  uint32_t *v21;
  size_t v22;
  size_t v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  char v31;
  int v32;
  int v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef const void *_g4_t_v38;
  typedef const void *_g4_t_v39;
  typedef size_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v35)) > _g4_s1 ? (4u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v36)) > _g4_s2 ? (4u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v37)) > _g4_s3 ? (8u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v38)) > _g4_s4 ? (8u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v39)) > _g4_s5 ? (8u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v42)) > _g4_s6 ? (24u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v43)) > _g4_s7 ? (24u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v44)) > _g4_s8 ? (24u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v45)) > _g4_s9 ? (28u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v46)) > _g4_s10 ? (28u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v47)) > _g4_s11 ? (32u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v48)) > _g4_s12 ? (36u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v49)) > _g4_s13 ? (36u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v50)) > _g4_s14 ? (40u + sizeof(_g4_t_v50)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);

  v45 = (size_t)(a2 + 1);
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v44 = a2[4];
      v21 = *(uint32_t **)(v44 + 16);
      v22 = *((uint32_t *)*a4 - 3);
      v23 = *(v21 - 3);
      if ( v22 <= v23 )
        v23 = *((uint32_t *)*a4 - 3);
      v39 = *a4;
      v35 = *(v21 - 3);
      v46 = v23;
      v24 = memcmp(*(const void **)(v44 + 16), *a4, v23);
      if ( v24 == 0 )
        v24 = v35 - v22;
      if ( v24 < 0 )
      {
        LOBYTE(v25) = 1;
        if ( a3 != v44 )
        {
          v26 = memcmp(v39, v21, v46);
          v27 = v22 - v35;
          if ( v26 == 0 )
            v26 = v27;
          v25 = v26 >> 31;
        }
        v15 = opNew(0x18u);
        if ( v15 != -16 )
        {
          g4_std::string::construct_copy(v15 + 16, a4);
          g4_std::string::construct_copy(v15 + 20, a4 + 1);
        }
        sub_1904970(v25, v15, v44, a3);
        goto LABEL_31;
      }
    }
  }
  else
  {
    s2 = *a4;
    s1 = *(uint32_t **)(a3 + 16);
    v6 = *((uint32_t *)*a4 - 3);
    n = v6;
    if ( *(s1 - 3) <= v6 )
      n = *(s1 - 3);
    v34 = *(s1 - 3);
    v37 = n;
    v8 = memcmp(*a4, *(const void **)(a3 + 16), n);
    v42 = v8;
    v47 = v6 - v34;
    if ( v8 == 0 )
      v8 = v6 - v34;
    if ( v8 < 0 )
    {
      if ( a3 != a2[3] )
      {
        v11 = sub_1904940(a3);
        v12 = v6;
        v48 = v11;
        v13 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v38 = *(const void **)(v11 + 16);
        if ( v13 <= v6 )
          v12 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v43 = v12;
        v14 = memcmp(*(const void **)(v11 + 16), s2, v12);
        if ( v14 == 0 )
          v14 = v13 - v6;
        if ( v14 >= 0 )
          goto LABEL_39;
        if ( *(uint32_t *)(v48 + 12) == 0 )
        {
          LOBYTE(v28) = 1;
          if ( v45 != v48 )
          {
            v29 = v6 - v13;
            v30 = memcmp(s2, v38, v43);
            if ( v30 == 0 )
              v30 = v29;
            v28 = v30 >> 31;
          }
          v36 = v28;
          v15 = opNew(0x18u);
          v31 = v36;
          if ( v15 != -16 )
          {
            g4_std::string::construct_copy(v15 + 16, a4);
            g4_std::string::construct_copy(v15 + 20, a4 + 1);
            v31 = v36;
          }
          sub_1904970(v31, v15, v48, v45);
          goto LABEL_31;
        }
      }
      v15 = opNew(0x18u);
      if ( v15 != -16 )
      {
        g4_std::string::construct_copy(v15 + 16, a4);
        g4_std::string::construct_copy(v15 + 20, a4 + 1);
      }
      sub_1904970(1, v15, a3, v45);
      goto LABEL_31;
    }
    v9 = memcmp(s1, s2, v37);
    if ( v9 == 0 )
      v9 = v34 - v6;
    if ( v9 >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    v16 = a2[4];
    if ( a3 == v16 )
    {
      v33 = v42;
      if ( v42 == 0 )
        v33 = v6 - v34;
      v15 = opNew(0x18u);
      if ( v15 != -16 )
      {
        g4_std::string::construct_copy(v15 + 16, a4);
        g4_std::string::construct_copy(v15 + 20, a4 + 1);
      }
      sub_1904970(v33 < 0, v15, v16, v45);
      goto LABEL_31;
    }
    v49 = sub_19048E0(a3);
    v17 = v6;
    v18 = *(uint32_t *)(*(uint32_t *)(v49 + 16) - 12);
    if ( v18 <= v6 )
      v17 = *(uint32_t *)(*(uint32_t *)(v49 + 16) - 12);
    v19 = v6 - v18;
    v20 = memcmp(s2, *(const void **)(v49 + 16), v17);
    if ( v20 != 0 )
      v19 = v20;
    if ( v19 < 0 )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v15 = opNew(0x18u);
        if ( v15 != -16 )
        {
          g4_std::string::construct_copy(v15 + 16, a4);
          g4_std::string::construct_copy(v15 + 20, a4 + 1);
        }
        sub_1904970(1, v15, v49, v45);
      }
      else
      {
        v32 = v42;
        if ( v42 == 0 )
          v32 = v47;
        v15 = opNew(0x18u);
        if ( v15 != -16 )
        {
          g4_std::string::construct_copy(v15 + 16, a4);
          g4_std::string::construct_copy(v15 + 20, a4 + 1);
        }
        sub_1904970(v32 < 0, v15, a3, v45);
      }
LABEL_31:
      ++a2[5];
      *a1 = v15;
      return a1;
    }
  }
LABEL_39:
  sub_4DB190((int)(uintptr_t)v50, a2, a4);
  *a1 = v50[0];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN::init  (binary VA: 0x4dbb90)
// Original: SimplifiedPN::init
// ----------------------------------------------------------------------------
int SimplifiedPN::init(int a1)
{
  int result;
  typedef char _g4_t_v2;
  typedef uint32_t _g4_t_v3[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v2)) > _g4_s0 ? (15u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 15u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);

  result = SimplifiedPN::mClassGLGame;
  if ( SimplifiedPN::mClassGLGame == 0 )
  {
    v3[0] = 0;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    SimplifiedPN::mClassGLGame = G4_VCALL<int>(v3[0], 84, a1);
    SimplifiedPN::mGetDeviceToken = G4_VCALL<int>(v3[0], 452, SimplifiedPN::mClassGLGame, "GetDeviceToken", "(I)I");
    SimplifiedPN::mShowAppDetailsSettings = G4_VCALL<int>(v3[0], 452, SimplifiedPN::mClassGLGame, "ShowAppDetailsSettings", "()V");
    SimplifiedPN::mSetEnable = G4_VCALL<int>(v3[0], 452, SimplifiedPN::mClassGLGame, "SetEnable", "(Z)V");
    SimplifiedPN::mIsEnable = G4_VCALL<int>(v3[0], 452, SimplifiedPN::mClassGLGame, "IsEnable", "()Z");
    SimplifiedPN::mIsAppLaunchedFromPN = G4_VCALL<int>(v3[0], 452, SimplifiedPN::mClassGLGame, "IsAppLaunchedFromPN", "()Ljava/lang/String;");
    SimplifiedPN::mSendMessage = G4_VCALL<int>(v3[0], 452, SimplifiedPN::mClassGLGame, "SendMessage", "(Landroid/os/Bundle;Ljava/lang/String;I)I");
    result = G4_VCALL<int>(v3[0], 452, SimplifiedPN::mClassGLGame, "DeleteMessageGroup", "(I)I");
    SimplifiedPN::mDeleteMessageGroup = result;
    if ( v2 != 0 )
      return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN_Init  (binary VA: 0x4dbdb0)
// Original: SimplifiedPN_Init
// ----------------------------------------------------------------------------
int SimplifiedPN_Init(int a1)
{
  return SimplifiedPN::init(a1);
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN::ShowAppDetailsSettings  (binary VA: 0x4dbff0)
// Original: SimplifiedPN::ShowAppDetailsSettings
// ----------------------------------------------------------------------------
int SimplifiedPN::ShowAppDetailsSettings()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  v1 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v1, 65542) != -2 )
    return sub_4BFF00(v1, SimplifiedPN::mClassGLGame, SimplifiedPN::mShowAppDetailsSettings);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, &v1, 0);
  sub_4BFF00(v1, SimplifiedPN::mClassGLGame, SimplifiedPN::mShowAppDetailsSettings);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN_ShowAppDetailsSettings  (binary VA: 0x4dc0c0)
// Original: SimplifiedPN_ShowAppDetailsSettings
// ----------------------------------------------------------------------------
int SimplifiedPN_ShowAppDetailsSettings()
{
  return SimplifiedPN::ShowAppDetailsSettings();
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN::SetEnable  (binary VA: 0x4dc0e0)
// Original: SimplifiedPN::SetEnable
// ----------------------------------------------------------------------------
int SimplifiedPN::SetEnable(SimplifiedPN::Self *self)
{
  int v2[4];

  v2[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v2, 65542) != -2 )
    return sub_4BFF00(v2[0], SimplifiedPN::mClassGLGame, SimplifiedPN::mSetEnable, (uint8_t)(uintptr_t)self);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v2, 0);
  sub_4BFF00(v2[0], SimplifiedPN::mClassGLGame, SimplifiedPN::mSetEnable, (uint8_t)(uintptr_t)self);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN_AllowIncomingOnlimePN  (binary VA: 0x4dc1d0)
// Original: SimplifiedPN_AllowIncomingOnlimePN
// ----------------------------------------------------------------------------
int SimplifiedPN_AllowIncomingOnlimePN(uint8_t *a1)
{
  return SimplifiedPN::SetEnable((SimplifiedPN::Self *)*a1);
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN::IsEnable  (binary VA: 0x4dc200)
// Original: SimplifiedPN::IsEnable
// ----------------------------------------------------------------------------
int SimplifiedPN::IsEnable()
{
  int v0;
  int v1;
  int v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v4 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v4, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v4, 0);
    v3 = sub_4BFED0(v4, SimplifiedPN::mClassGLGame, SimplifiedPN::mIsEnable);
    LOBYTE(v3) = (uint8_t)v3 != 0;
    v1 = v3;
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v0 = sub_4BFED0(v4, SimplifiedPN::mClassGLGame, SimplifiedPN::mIsEnable);
    LOBYTE(v0) = (uint8_t)v0 != 0;
    return v0;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN_IsEnabledIncomingOnlimePN  (binary VA: 0x4dc2e0)
// Original: SimplifiedPN_IsEnabledIncomingOnlimePN
// ----------------------------------------------------------------------------
int SimplifiedPN_IsEnabledIncomingOnlimePN()
{
  return SimplifiedPN::IsEnable();
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN::IsAppLaunchedFromPN  (binary VA: 0x4dc300)
// Original: SimplifiedPN::IsAppLaunchedFromPN
// ----------------------------------------------------------------------------
SimplifiedPN::Self * SimplifiedPN::IsAppLaunchedFromPN(SimplifiedPN::Self *self)
{
  int v1;
  const char *s;
  size_t v4;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef char _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], SimplifiedPN::mClassGLGame, SimplifiedPN::mIsAppLaunchedFromPN);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&unk_213B814);
  s = (const char *)G4_VCALL<int>(v8[0], 676, v1, &v7);
  if ( v7 == 1 )
  {
    v5 = (char *)s;
    v4 = strlen(s);
    g4_std::string::assign((int)(uintptr_t)self, v5, v4);
    G4_VCALL<void>(v8[0], 680, v1, v5);
  }
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN_IsAppLaunchedFromPN  (binary VA: 0x4dc440)
// Original: SimplifiedPN_IsAppLaunchedFromPN
// ----------------------------------------------------------------------------
SimplifiedPN::Self * SimplifiedPN_IsAppLaunchedFromPN(SimplifiedPN::Self *a1)
{
  SimplifiedPN::IsAppLaunchedFromPN(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN::DeleteMessageGroup  (binary VA: 0x4dc480)
// Original: SimplifiedPN::DeleteMessageGroup
// ----------------------------------------------------------------------------
int SimplifiedPN::DeleteMessageGroup(SimplifiedPN::Self *self)
{
  int v1;
  int v3[4];

  v3[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) != -2 )
    return sub_4C17B0(v3[0], SimplifiedPN::mClassGLGame, SimplifiedPN::mDeleteMessageGroup, self);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
  v1 = sub_4C17B0(v3[0], SimplifiedPN::mClassGLGame, SimplifiedPN::mDeleteMessageGroup, self);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN_DeleteMessageGroup  (binary VA: 0x4dc570)
// Original: SimplifiedPN_DeleteMessageGroup
// ----------------------------------------------------------------------------
int SimplifiedPN_DeleteMessageGroup(SimplifiedPN::Self *a1)
{
  return SimplifiedPN::DeleteMessageGroup(a1);
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN::charToString  (binary VA: 0x4dc5a0)
// Original: SimplifiedPN::charToString
// ----------------------------------------------------------------------------
int SimplifiedPN::charToString(SimplifiedPN::Self *self)
{
  int v1;
  uint32_t v3[4];

  v3[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) != -2 )
    return G4_VCALL<int>(v3[0], 668, self);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
  v1 = G4_VCALL<int>(v3[0], 668, self);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN::SendMessage  (binary VA: 0x4dc660)
// Original: SimplifiedPN::SendMessage
// ----------------------------------------------------------------------------
int SimplifiedPN::SendMessage(SimplifiedPN::Self *self, std::map<std::string,std::string> *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, SimplifiedPN::Self *a17, volatile int32_t *a18, volatile int32_t *a19, int (**a20)(int), int a21, int (**a22)(int), int (**a23)(int), int a24, int a25, uint8_t *a26, uint8_t *a27, uint8_t *a28, int a29, int a30, int a31, volatile int32_t *a32, int (**a33)(int), int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int16_t a62, int a63, int a64)
{
  int v64;
  ABundle::Self **i;
  volatile int32_t *v66;
  volatile int32_t *v67;
  int v68;
  volatile int32_t *v69;
  int v70;
  char *v71;
  volatile int32_t *v72;
  uint32_t v74[55];
  volatile int32_t *v75;
  int v76;
  ABundle::Self **v77;
  uint8_t *v78;
  int v79;
  int v80;
  size_t v81;
  char v82;
  size_t v83;
  uint8_t *v84;

  v74[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v74, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v74, 0);
    v82 = 1;
  }
  else
  {
    v82 = 0;
  }
  v64 = ABundle_New();
  for ( i = *((ABundle::Self ***)self + 3); i != (ABundle::Self **)((char *)self + 4); i = (ABundle::Self **)sub_1904890(v77) )
  {
    v77 = i;
    ABundle_PutString(i[4], i[5], v64);
  }
  sub_1900810(&a33);
  a61 = 0;
  a62 = 0;
  a63 = 0;
  a64 = 0;
  STACK[0x114] = 0;
  a33 = (int (**)(int))(&off_20AA2C0);
  STACK[0x118] = 0;
  a20 = (int (**)(int))(&off_20AAF2C);
  *(int (***)(int))((char *)&a20 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(&off_20AAF40);
  a21 = 0;
  sub_19119D0((char *)&a20 + (uint32_t)(uintptr_t)*(a20 - 3), 0);
  a22 = (int (**)(int))(&off_20AAEEC);
  *(int (***)(int))((char *)&a22 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(&off_20AAF00);
  sub_19119D0((char *)&a22 + (uint32_t)(uintptr_t)*(a22 - 3), 0);
  a20 = (int (**)(int))(&off_20AAF6C);
  *(int (***)(int))((char *)&a20 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(&off_20AAF94);
  a24 = 0;
  a25 = 0;
  a26 = nullptr;
  a27 = nullptr;
  a28 = nullptr;
  a29 = 0;
  a20 = (int (**)(int))(&off_20AAFEC);
  a33 = (int (**)(int))(&off_20AB014);
  a22 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  a23 = (int (**)(int))(&off_20AB2C8);
  sub_1903A70(&a30);
  a31 = 24;
  a23 = (int (**)(int))(&off_20AADA8);
  a32 = (volatile int32_t *)&unk_213B814;
  sub_19119D0(&a33, &a23);
  g4_std::ostream::op_shl_int(&a22, a2);
  v66 = (volatile int32_t *)&unk_213B814;
  a17 = (SimplifiedPN::Self *)&unk_213B814;
  if ( a28 == nullptr )
  {
    g4_std::string::assign_str(&a17, &a32);
    goto LABEL_23;
  }
  if ( a28 > a26 )
  {
    if ( a28 == a27 )
    {
LABEL_13:
      a19 = v66;
      g4_std::string::assign_str(&a17, &a19);
      v67 = a19 - 3;
      if ( a19 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(a19 - 1, 0xFFFFFFFF) <= 0 )
      {
        v74[53] = (uint32_t)(uintptr_t)(&a15);
        g4_std::string::Rep::M_destroy((void *)v67);
      }
      goto LABEL_23;
    }
    if ( a27 != nullptr )
    {
      v78 = a27;
      v83 = a28 - a27;
      v74[54] = (uint32_t)(uintptr_t)((char *)&a14 + 3);
      v80 = sub_1938930(a28 - a27, 0);
      v66 = (volatile int32_t *)(v80 + 12);
      if ( v83 == 1 )
      {
        *(uint8_t *)(v80 + 12) = *v78;
      }
      else
      {
        memcpy((void *)v66, v78, v83);
        v66 = (volatile int32_t *)(v80 + 12);
      }
      if ( (void *)v80 != &unk_213B808 )
      {
        *(uint32_t *)(v80 + 8) = 0;
        *(uint32_t *)v80 = v83;
        *(uint8_t *)(v80 + v83 + 12) = 0;
      }
      goto LABEL_13;
    }
LABEL_31:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  v84 = a27;
  if ( a26 != a27 )
  {
    if ( a27 != nullptr )
    {
      v81 = a26 - a27;
      v74[54] = (uint32_t)(uintptr_t)((char *)&a14 + 2);
      v68 = sub_1938930(a26 - a27, 0);
      v66 = (volatile int32_t *)(v68 + 12);
      if ( v81 == 1 )
      {
        *(uint8_t *)(v68 + 12) = *v84;
LABEL_20:
        if ( (void *)v68 != &unk_213B808 )
        {
          *(uint32_t *)(v68 + 8) = 0;
          *(uint32_t *)v68 = v81;
          *((uint8_t *)v66 + v81) = 0;
        }
        goto LABEL_22;
      }
    }
    else
    {
      if ( a26 != nullptr )
        goto LABEL_31;
      v74[54] = (uint32_t)(uintptr_t)((char *)&a14 + 2);
      v68 = sub_1938930(0, 0);
      v66 = (volatile int32_t *)(v68 + 12);
      v81 = 0;
    }
    v75 = v66;
    v79 = v68;
    memcpy((void *)v66, v84, v81);
    v68 = v79;
    v66 = v75;
    goto LABEL_20;
  }
LABEL_22:
  a18 = v66;
  g4_std::string::assign_str(&a17, &a18);
  v69 = a18 - 3;
  if ( a18 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(a18 - 1, 0xFFFFFFFF) <= 0 )
  {
    v74[53] = (uint32_t)(uintptr_t)((char *)&a15 + 1);
    g4_std::string::Rep::M_destroy((void *)v69);
  }
LABEL_23:
  v76 = SimplifiedPN::charToString(a17);
  v70 = sub_4C17B0(a16, SimplifiedPN::mClassGLGame, SimplifiedPN::mSendMessage, v64);
  G4_VCALL<void>(a16, 92, v76);
  v71 = (char *)a17 - 12;
  if ( (void *)((char *)a17 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)a17 - 1, 0xFFFFFFFF) <= 0 )
  {
    v74[53] = (uint32_t)(uintptr_t)((char *)&a15 + 2);
    g4_std::string::Rep::M_destroy(v71);
  }
  a20 = (int (**)(int))(&off_20AAFEC);
  a33 = (int (**)(int))(&off_20AB014);
  a22 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  a23 = (int (**)(int))(&off_20AADA8);
  v72 = a32 - 3;
  if ( a32 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(a32 - 1, 0xFFFFFFFF) <= 0 )
  {
    v74[53] = (uint32_t)(uintptr_t)((char *)&a15 + 3);
    g4_std::string::Rep::M_destroy((void *)v72);
  }
  a23 = (int (**)(int))(&off_20AB2C8);
  sub_1902180(&a30);
  a20 = (int (**)(int))(&off_20AAF6C);
  *(int (***)(int))((char *)&a20 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(&off_20AAF94);
  a22 = (int (**)(int))(&off_20AAEEC);
  *(int (***)(int))((char *)&a22 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(&off_20AAF00);
  a20 = (int (**)(int))(&off_20AAF2C);
  *(int (***)(int))((char *)&a20 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(&off_20AAF40);
  a21 = 0;
  a33 = (int (**)(int))(&off_20AA2C0);
  sub_1900B90(&a33);
  if ( v82 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v70;
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN_SendMessage  (binary VA: 0x4dccd0)
// Original: SimplifiedPN_SendMessage
// ----------------------------------------------------------------------------
int SimplifiedPN_SendMessage(SimplifiedPN::Self *a1, time_t a2, int a3)
{
  char *v3;
  unsigned int v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  size_t v12;
  void *v13;
  char *v14;
  size_t v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  size_t v20;
  unsigned int v21;
  int v22;
  size_t v23;
  void *v24;
  void *v26;
  volatile int32_t *v27;
  void *v28;
  void *v29;
  volatile int32_t *v30;
  void *v31;
  int savedregs;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef const void *_g4_t_v40;
  typedef int _g4_t_v41[2];
  typedef int _g4_t_v42[3];
  typedef uint32_t _g4_t_v43[4];
  typedef uint32_t _g4_t_v44[4];
  typedef int _g4_t_v45[4];
  typedef int _g4_t_v46[3];
  typedef time_t _g4_t_timer;
  typedef volatile int32_t *_g4_t_v48;
  typedef int _g4_t_v49[3];
  typedef volatile int32_t *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef struct tm _g4_t_tp;
  typedef struct tm _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int16_t _g4_t_v55;
  typedef int _g4_t_v56;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (4u + sizeof(_g4_t_v32)) > _g4_s0 ? (4u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v33)) > _g4_s1 ? (8u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v34)) > _g4_s2 ? (12u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v35)) > _g4_s3 ? (16u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v36)) > _g4_s4 ? (24u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v37)) > _g4_s5 ? (24u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v38)) > _g4_s6 ? (28u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v39)) > _g4_s7 ? (28u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v40)) > _g4_s8 ? (32u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v41)) > _g4_s9 ? (36u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v42)) > _g4_s10 ? (44u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v43)) > _g4_s11 ? (56u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v44)) > _g4_s12 ? (72u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v45)) > _g4_s13 ? (88u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v46)) > _g4_s14 ? (104u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_timer)) > _g4_s15 ? (116u + sizeof(_g4_t_timer)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v48)) > _g4_s16 ? (120u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v49)) > _g4_s17 ? (124u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v50)) > _g4_s18 ? (136u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v51)) > _g4_s19 ? (140u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_tp)) > _g4_s20 ? (144u + sizeof(_g4_t_tp)) : _g4_s20,
    _g4_s22 = (188u + sizeof(_g4_t_v53)) > _g4_s21 ? (188u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (232u + sizeof(_g4_t_v54)) > _g4_s22 ? (232u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (236u + sizeof(_g4_t_v55)) > _g4_s23 ? (236u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (240u + sizeof(_g4_t_v56)) > _g4_s24 ? (240u + sizeof(_g4_t_v56)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 104u);
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 136u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 140u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 144u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 188u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 232u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 236u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 240u);

  if ( a2 <= 0 )
    a2 = 1;
  time(&timer);
  localtime_r(&timer, &tp);
  v36 = asctime(&tp);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v43, "creation_time", (int)(uintptr_t)v42 + 2);
  v35 = (char *)a1 + 4;
  v3 = *((char **)a1 + 2);
  if ( v3 == nullptr )
  {
    v38 = (char *)a1 + 4;
LABEL_43:
    v45[0] = (int)(uintptr_t)&unk_213B814;
    g4_std::string::construct_copy(&v48, v43);
    g4_std::string::construct_copy(v49, v45);
    sub_4DB3F0(v41, (uint32_t *)(uintptr_t)a1, (int)(uintptr_t)v38, (const void **)&v48);
    v38 = (char *)v41[0];
    v29 = (void *)(v49[0] - 12);
    if ( (void *)(v49[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v49[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v29);
    }
    v30 = v48 - 3;
    if ( v48 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v48 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v30);
    v31 = (void *)(v45[0] - 12);
    if ( (void *)(v45[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v31);
    }
    goto LABEL_18;
  }
  v40 = (const void *)v43[0];
  v38 = (char *)a1 + 4;
  v4 = *(uint32_t *)(v43[0] - 12);
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*((uint32_t *)v3 + 4) - 12);
      v6 = v5;
      v34 = v4;
      if ( v4 <= v5 )
        v6 = v4;
      v7 = memcmp(*((const void **)v3 + 4), v40, v6);
      v4 = v34;
      v8 = v5 - v34;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v38 = v3;
      v3 = *((char **)v3 + 2);
      if ( v3 == nullptr )
        goto LABEL_12;
    }
    v3 = *((char **)v3 + 3);
  }
  while ( v3 != nullptr );
LABEL_12:
  if ( v35 == v38 )
    goto LABEL_43;
  v9 = *(uint32_t *)(*((uint32_t *)v38 + 4) - 12);
  v10 = v9;
  if ( v34 <= v9 )
    v10 = v34;
  v11 = memcmp(v40, *((const void **)v38 + 4), v10);
  if ( v11 == 0 )
    v11 = v34 - v9;
  if ( v11 < 0 )
    goto LABEL_43;
LABEL_18:
  v12 = strlen(v36);
  g4_std::string::assign((int)(uintptr_t)(v38 + 20), v36, v12);
  v13 = (void *)(v43[0] - 12);
  if ( (void *)(v43[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  localtime_r(&a2, &v53);
  v37 = asctime(&v53);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v44, "schedule_time", (int)(uintptr_t)v42 + 3);
  v14 = *((char **)a1 + 2);
  if ( v14 == nullptr )
  {
    v39 = (char *)a1 + 4;
LABEL_37:
    v46[0] = (int)(uintptr_t)&unk_213B814;
    g4_std::string::construct_copy(&v50, v44);
    g4_std::string::construct_copy(&v51, v46);
    sub_4DB3F0(v41, (uint32_t *)(uintptr_t)a1, (int)(uintptr_t)v39, (const void **)&v50);
    v39 = (char *)v41[0];
    v26 = (void *)(v51 - 12);
    if ( (void *)(v51 - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v26);
    }
    v27 = v50 - 3;
    if ( v50 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v50 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v27);
    v28 = (void *)(v46[0] - 12);
    if ( (void *)(v46[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v28);
    }
    goto LABEL_34;
  }
  v40 = (const void *)v44[0];
  v39 = (char *)a1 + 4;
  v15 = *(uint32_t *)(v44[0] - 12);
  do
  {
    while ( 1 )
    {
      v16 = v15;
      v17 = *(uint32_t *)(*((uint32_t *)v14 + 4) - 12);
      v34 = v15;
      if ( v17 <= v15 )
        v16 = *(uint32_t *)(*((uint32_t *)v14 + 4) - 12);
      v18 = memcmp(*((const void **)v14 + 4), v40, v16);
      v15 = v34;
      v19 = v17 - v34;
      if ( v18 == 0 )
        v18 = v19;
      if ( v18 < 0 )
        break;
      v39 = v14;
      v14 = *((char **)v14 + 2);
      if ( v14 == nullptr )
        goto LABEL_28;
    }
    v14 = *((char **)v14 + 3);
  }
  while ( v14 != nullptr );
LABEL_28:
  if ( v35 == v39 )
    goto LABEL_37;
  v20 = v34;
  v21 = *(uint32_t *)(*((uint32_t *)v39 + 4) - 12);
  if ( v21 <= v34 )
    v20 = *(uint32_t *)(*((uint32_t *)v39 + 4) - 12);
  v22 = memcmp(v40, *((const void **)v39 + 4), v20);
  if ( v22 == 0 )
    v22 = v34 - v21;
  if ( v22 < 0 )
    goto LABEL_37;
LABEL_34:
  v23 = strlen(v37);
  g4_std::string::assign((int)(uintptr_t)(v39 + 20), v37, v23);
  v24 = (void *)(v44[0] - 12);
  if ( (void *)(v44[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  return SimplifiedPN::SendMessage(
           a1,
           (std::map<std::string,std::string> *)(a2 - timer),
           a3,
           v32,
           v33,
           v34,
           (int)(uintptr_t)v35,
           (int)(uintptr_t)&unk_213B808,
           (int)(uintptr_t)v37,
           (int)(uintptr_t)v39,
           (int)(uintptr_t)v40,
           v41[0],
           v41[1],
           v42[0],
           v42[1],
           v42[2],
           (SimplifiedPN::Self *)v43[0],
           (volatile int32_t *)v43[1],
           (volatile int32_t *)v43[2],
           (int (**)(int))v43[3],
           v44[0],
           (int (**)(int))v44[1],
           (int (**)(int))v44[2],
           v44[3],
           v45[0],
           (uint8_t *)v45[1],
           (uint8_t *)v45[2],
           (uint8_t *)v45[3],
           v46[0],
           v46[1],
           v46[2],
           (volatile int32_t *)timer,
           (int (**)(int))v48,
           v49[0],
           v49[1],
           v49[2],
           (int)(uintptr_t)v50,
           v51,
           tp.tm_sec,
           tp.tm_min,
           tp.tm_hour,
           tp.tm_mday,
           tp.tm_mon,
           tp.tm_year,
           tp.tm_wday,
           tp.tm_yday,
           tp.tm_isdst,
           tp.tm_gmtoff,
           (int)(uintptr_t)tp.tm_zone,
           v53.tm_sec,
           v53.tm_min,
           v53.tm_hour,
           v53.tm_mday,
           v53.tm_mon,
           v53.tm_year,
           v53.tm_wday,
           v53.tm_yday,
           v53.tm_isdst,
           v53.tm_gmtoff,
           (int)(uintptr_t)v53.tm_zone,
           v54,
           v55,
           v56,
           savedregs);
}

// ----------------------------------------------------------------------------
// Function: SplashScreen_setJavaVM  (binary VA: 0x4dd210)
// Original: SplashScreen_setJavaVM
// ----------------------------------------------------------------------------
int SplashScreen_setJavaVM(int a1)
{
  void *v1;
  int v2;
  int result;
  void *v4;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef uint8_t _g4_t_v7[7];
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v6)) > _g4_s1 ? (31u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (33u + sizeof(_g4_t_v7)) > _g4_s2 ? (33u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v8)) > _g4_s3 ? (40u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v9)) > _g4_s4 ? (44u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 31u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 33u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  *(uint32_t *)&v7[3] = 0;
  dword_20D11F0 = a1;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v7[3], 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v7[3], 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)&v8, "com/gameloft/android/GAND/GloftGGSS", (int)(uintptr_t)v7);
  g4_std::string::construct_copy(v9, &v8);
  g4_std::string::append((int)(uintptr_t)v9, "/SplashScreenActivity", 0x15u);
  g4_std::string::assign_str(&v8, v9);
  v1 = (void *)(v9[0] - 12);
  if ( (void *)(v9[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)&v7[3] + 24))(*(uint32_t *)&v7[3], v8);
  dword_20D11F4 = (*(int (**)(uint32_t, int))(**(uint32_t **)&v7[3] + 84))(*(uint32_t *)&v7[3], v2);
  result = v8;
  v4 = (void *)(v8 - 12);
  if ( (void *)(v8 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    v5 = (char *)(&v7[2]);
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( v6 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20, v5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: androidDownloadOfflineWS  (binary VA: 0x4dd3c0)
// Original: androidDownloadOfflineWS
// ----------------------------------------------------------------------------
int androidDownloadOfflineWS(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  dword_20D11F8 = G4_VCALL<int>(v4[0], 452, dword_20D11F4, "downloadWS", "(Ljava/lang/String;)V");
  if ( dword_20D11F8 != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_20D11F4, dword_20D11F8, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: androidIsOfflineWSDownloaded  (binary VA: 0x4dd4c0)
// Original: androidIsOfflineWSDownloaded
// ----------------------------------------------------------------------------
int androidIsOfflineWSDownloaded(uint32_t *a1)
{
  char v1; // bp
  int v2;
  int v3;
  int v5[4];

  v5[0] = 0;
  v1 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v5, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v5, 0);
  }
  v2 = 0;
  dword_20D11FC = G4_VCALL<int>(v5[0], 452, dword_20D11F4, "isWSReady", "(Ljava/lang/String;)I");
  if ( dword_20D11FC != 0 )
  {
    v3 = G4_VCALL<int>(v5[0], 668, *a1);
    v2 = sub_4C17B0(v5[0], dword_20D11F4, dword_20D11FC, v3);
  }
  if ( v1 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: androidIsWSActive  (binary VA: 0x4dd5d0)
// Original: androidIsWSActive
// ----------------------------------------------------------------------------
int androidIsWSActive()
{
  char v0; // bp
  int v1;
  int v2;
  int v4[4];

  v4[0] = 0;
  v0 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  v1 = 0;
  v2 = G4_VCALL<int>(v4[0], 452, dword_20D11F4, "isActive", "()I");
  dword_20D1200 = v2;
  if ( v2 != 0 )
    v1 = sub_4C17B0(v4[0], dword_20D11F4, v2);
  if ( v0 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: androidShowOfflineWS  (binary VA: 0x4dd6c0)
// Original: androidShowOfflineWS
// ----------------------------------------------------------------------------
int androidShowOfflineWS(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  dword_20D1204 = G4_VCALL<int>(v4[0], 452, dword_20D11F4, "showLocalWS", "(Ljava/lang/String;)V");
  if ( dword_20D1204 != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_20D11F4, dword_20D1204, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: androidDeleteOfflineWS  (binary VA: 0x4dd7c0)
// Original: androidDeleteOfflineWS
// ----------------------------------------------------------------------------
int androidDeleteOfflineWS(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  dword_20D1208 = G4_VCALL<int>(v4[0], 452, dword_20D11F4, "deleteWS", "(Ljava/lang/String;)V");
  if ( dword_20D1208 != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_20D11F4, dword_20D1208, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: androidSetWSLanguage  (binary VA: 0x4dd8c0)
// Original: androidSetWSLanguage
// ----------------------------------------------------------------------------
int androidSetWSLanguage(int a1)
{
  int v1;
  int v2;
  int result;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v4 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v4, 0);
  }
  else
  {
    v1 = 0;
  }
  v2 = G4_VCALL<int>(v4, 452, dword_20D11F4, "SetWSLanguage", "(I)V");
  dword_20D120C = v2;
  if ( v2 != 0 )
    sub_4BFF00(v4, dword_20D11F4, v2, a1);
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDA20  (binary VA: 0x4dda20)
// Original: sub_4DDA20
// ----------------------------------------------------------------------------
uint32_t * sub_4DDA20(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDA40  (binary VA: 0x4dda40)
// Original: sub_4DDA40
// ----------------------------------------------------------------------------
void sub_4DDA40()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDA50  (binary VA: 0x4dda50)
// Original: sub_4DDA50
// ----------------------------------------------------------------------------
void sub_4DDA50()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDA60  (binary VA: 0x4dda60)
// Original: sub_4DDA60
// ----------------------------------------------------------------------------
void sub_4DDA60()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDA70  (binary VA: 0x4dda70)
// Original: sub_4DDA70
// ----------------------------------------------------------------------------
int sub_4DDA70()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDA80  (binary VA: 0x4dda80)
// Original: sub_4DDA80
// ----------------------------------------------------------------------------
int sub_4DDA80(uint32_t *a1)
{
  return (int)(uintptr_t)sub_4DDA90((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12)));
}

// ----------------------------------------------------------------------------
// Function: sub_4DDA90  (binary VA: 0x4dda90)
// Original: sub_4DDA90
// ----------------------------------------------------------------------------
uint32_t * sub_4DDA90(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_204838C);
  a1[1] = (uint32_t)(uintptr_t)(&off_20483C0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDAC0  (binary VA: 0x4ddac0)
// Original: sub_4DDAC0
// ----------------------------------------------------------------------------
int sub_4DDAC0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDAD0  (binary VA: 0x4ddad0)
// Original: sub_4DDAD0
// ----------------------------------------------------------------------------
int sub_4DDAD0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDAE0  (binary VA: 0x4ddae0)
// Original: sub_4DDAE0
// ----------------------------------------------------------------------------
uint32_t * sub_4DDAE0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDB00  (binary VA: 0x4ddb00)
// Original: sub_4DDB00
// ----------------------------------------------------------------------------
uint32_t * sub_4DDB00(uint32_t *a1, uint32_t *a2)
{
  *a1 = a2[2];
  a1[1] = a2[3];
  a1[2] = a2[4];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDB20  (binary VA: 0x4ddb20)
// Original: sub_4DDB20
// ----------------------------------------------------------------------------
int sub_4DDB20()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDB30  (binary VA: 0x4ddb30)
// Original: sub_4DDB30
// ----------------------------------------------------------------------------
float * sub_4DDB30(float *a1, int a2)
{
  int *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  float *v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4

  v2 = *(int **)(a2 + 8);
  v3 = *v2;
  if ( (*((uint8_t *)v2 + 245) & 8) != 0 )
  {
    v9 = (float *)(*(int (**)(int *))(v3 + 64))(v2);
    v10 = v9[4] + v9[1];
    v11 = v9[5] + v9[2];
    v12 = v9[3] + *v9;
    a1[1] = v10 * 0.5;
    a1[2] = v11 * 0.5;
    *a1 = v12 * 0.5;
    return a1;
  }
  else
  {
    v4 = (uint32_t *)(*(int (**)(int *))(v3 + 72))(v2);
    v5 = v4[14];
    v6 = v4[13];
    v7 = v4[12];
    *((uint32_t *)a1 + 1) = v6;
    *(uint32_t *)a1 = v7;
    *((uint32_t *)a1 + 2) = v5;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_4DDBD0  (binary VA: 0x4ddbd0)
// Original: sub_4DDBD0
// ----------------------------------------------------------------------------
int sub_4DDBD0()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDBE0  (binary VA: 0x4ddbe0)
// Original: sub_4DDBE0
// ----------------------------------------------------------------------------
int sub_4DDBE0()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDBF0  (binary VA: 0x4ddbf0)
// Original: sub_4DDBF0
// ----------------------------------------------------------------------------
int sub_4DDBF0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDC00  (binary VA: 0x4ddc00)
// Original: sub_4DDC00
// ----------------------------------------------------------------------------
int sub_4DDC00(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 876) + 88))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDC40  (binary VA: 0x4ddc40)
// Original: sub_4DDC40
// ----------------------------------------------------------------------------
uint32_t * sub_4DDC40(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDC60  (binary VA: 0x4ddc60)
// Original: sub_4DDC60
// ----------------------------------------------------------------------------
void sub_4DDC60(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4DDC90  (binary VA: 0x4ddc90)
// Original: sub_4DDC90
// ----------------------------------------------------------------------------
void sub_4DDC90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4DDCC0  (binary VA: 0x4ddcc0)
// Original: sub_4DDCC0
// ----------------------------------------------------------------------------
int sub_4DDCC0(char *a1)
{
  sub_4DDCD0((uint32_t *)&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDCD0  (binary VA: 0x4ddcd0)
// Original: sub_4DDCD0
// ----------------------------------------------------------------------------
void sub_4DDCD0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_204838C);
  a1[1] = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4DDD10  (binary VA: 0x4ddd10)
// Original: sub_4DDD10
// ----------------------------------------------------------------------------
void sub_4DDD10(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4DDD40  (binary VA: 0x4ddd40)
// Original: sub_4DDD40
// ----------------------------------------------------------------------------
void sub_4DDD40(glitch::irradiance::IIrradianceManager::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048350);
  glitch::indexedIrradiance::CIndexedIrradianceManager::clear((glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)a1);
  glitch::irradiance::IIrradianceManager::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4DDD90  (binary VA: 0x4ddd90)
// Original: sub_4DDD90
// ----------------------------------------------------------------------------
uint32_t * sub_4DDD90(uint32_t *a1)
{
  if ( LOBYTE(dword_20D1390) == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&dword_20D1390) != 0 )
  {
    *(uint32_t *)unk_20D1398 = 0;
    *(uint32_t *)unk_20D139C = 0;
    *(uint32_t *)unk_20D13A0 = 0;
    *(uint32_t *)unk_20D13A4 = 1065353216;
    _cxa_guard_release((g4_cxa_guard_t *)&dword_20D1390);
  }
  *a1 = *(uint32_t *)unk_20D1398;
  a1[1] = *(uint32_t *)unk_20D139C;
  a1[2] = *(uint32_t *)unk_20D13A0;
  a1[3] = *(uint32_t *)unk_20D13A4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDE30  (binary VA: 0x4dde30)
// Original: sub_4DDE30
// ----------------------------------------------------------------------------
uint32_t * sub_4DDE30(uint32_t *a1)
{
  if ( LOBYTE(dword_20D1370) == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&dword_20D1370) != 0 )
  {
    *(uint32_t *)unk_20D1378 = 0;
    *(uint32_t *)unk_20D137C = 0;
    *(uint32_t *)unk_20D1380 = 0;
    _cxa_guard_release((g4_cxa_guard_t *)&dword_20D1370);
  }
  *a1 = *(uint32_t *)unk_20D1378;
  a1[1] = *(uint32_t *)unk_20D137C;
  a1[2] = *(uint32_t *)unk_20D1380;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDEC0  (binary VA: 0x4ddec0)
// Original: sub_4DDEC0
// ----------------------------------------------------------------------------
uint32_t * sub_4DDEC0(uint32_t *a1)
{
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DDED0  (binary VA: 0x4dded0)
// Original: sub_4DDED0
// ----------------------------------------------------------------------------
void sub_4DDED0(int a1)
{
  int *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  void *v10;
  void **v11;
  unsigned int v12;
  void *v13;
  void *v14;
  void **v15;
  unsigned int v16;
  void *v17;
  int v18;
  int v19;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  g4_std::string::Destroy(a1 + 104);
  g4_std::string::Destroy(a1 + 80);
  v23 = *(uint32_t *)(a1 + 64);
  v26 = *(uint32_t *)(a1 + 68);
  v21 = *(uint32_t *)(a1 + 76);
  v24 = *(uint32_t *)(a1 + 48);
  v25 = *(uint32_t *)(a1 + 56);
  v22 = *(uint32_t *)(a1 + 60);
  v1 = (int *)(v22 + 4);
  if ( v21 > v22 + 4 )
  {
    do
    {
      v2 = *v1;
      v3 = *v1 + 500;
      do
      {
        v4 = v2 + 12;
        v2 += 20;
        g4_std::string::Destroy(v4);
      }
      while ( v2 != v3 );
      ++v1;
    }
    while ( v21 > (unsigned int)(uintptr_t)v1 );
  }
  if ( v21 == v22 )
  {
    if ( v23 != v24 )
    {
      v18 = v24;
      do
      {
        v19 = v18 + 12;
        v18 += 20;
        g4_std::string::Destroy(v19);
      }
      while ( v23 != v18 );
    }
  }
  else
  {
    if ( v24 != v25 )
    {
      v5 = v24;
      do
      {
        v6 = v5 + 12;
        v5 += 20;
        g4_std::string::Destroy(v6);
      }
      while ( v25 != v5 );
    }
    if ( v23 != v26 )
    {
      v7 = v26;
      do
      {
        v8 = v7 + 12;
        v7 += 20;
        g4_std::string::Destroy(v8);
      }
      while ( v23 != v7 );
    }
  }
  v9 = a1;
  v10 = *(void **)(a1 + 40);
  if ( v10 != nullptr )
  {
    v11 = *(void ***)(a1 + 60);
    v12 = *(uint32_t *)(a1 + 76) + 4;
    if ( v12 > (unsigned int)(uintptr_t)v11 )
    {
      do
      {
        v13 = *v11++;
        opDelete(v13);
      }
      while ( v12 > (unsigned int)(uintptr_t)v11 );
      v10 = *(void **)(a1 + 40);
    }
    opDelete(v10);
    v9 = a1;
  }
  v14 = *(void **)v9;
  if ( *(uint32_t *)v9 != 0 )
  {
    v15 = *(void ***)(v9 + 20);
    v16 = *(uint32_t *)(v9 + 36) + 4;
    if ( v16 > (unsigned int)(uintptr_t)v15 )
    {
      do
      {
        v17 = *v15++;
        opDelete(v17);
      }
      while ( v16 > (unsigned int)(uintptr_t)v15 );
      v14 = *(void **)a1;
    }
    opDelete(v14);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_4DE090  (binary VA: 0x4de090)
// Original: sub_4DE090
// ----------------------------------------------------------------------------
float * sub_4DE090(float *a1, int a2)
{
  float *v2;
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm4_4
  float v29; // xmm1_4
  float v30; // xmm4_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  int v33;
  int v34;
  int v35;

  v2 = (float *)(*(int (**)(uint32_t, int, int, int))(**(uint32_t **)(a2 + 8) + 72))(
                  *(uint32_t *)(a2 + 8),
                  v33,
                  v34,
                  v35);
  v3 = v2[5];
  v4 = *v2;
  v5 = v2[10];
  v6 = (float)(v3 + *v2) + v5;
  if ( v6 <= 0.0 )
  {
    if ( v4 <= v3 || v4 <= v5 )
    {
      if ( v3 <= v5 )
      {
        v31 = fsqrt((float)((float)(v5 - v4) - v3) + 1.0);
        v32 = 0.5 / v31;
        v13 = v31 * 0.5;
        v9 = (float)(v2[4] - v2[1]) * v32;
        v14 = (float)(v2[9] + v2[6]) * v32;
        v15 = (float)(v2[8] + v2[2]) * v32;
      }
      else
      {
        v29 = fsqrt((float)((float)(v3 - v4) - v5) + 1.0);
        v30 = 0.5 / v29;
        v14 = v29 * 0.5;
        v9 = (float)(v2[2] - v2[8]) * v30;
        v13 = (float)(v2[9] + v2[6]) * v30;
        v15 = (float)(v2[4] + v2[1]) * v30;
      }
      a1[3] = v9;
    }
    else
    {
      v27 = fsqrt((float)((float)(v4 - v3) - v5) + 1.0);
      v28 = 0.5 / v27;
      v15 = v27 * 0.5;
      v9 = (float)(v2[9] - v2[6]) * v28;
      v13 = (float)(v2[2] + v2[8]) * v28;
      v14 = (float)(v2[4] + v2[1]) * v28;
      a1[3] = v9;
    }
  }
  else
  {
    v7 = fsqrt(v6 + 1.0);
    v8 = 0.5 / v7;
    v9 = v7 * 0.5;
    v10 = v2[4] - v2[1];
    v11 = v2[2] - v2[8];
    v12 = v2[9] - v2[6];
    a1[3] = v9;
    v13 = v10 * v8;
    v14 = v11 * v8;
    v15 = v12 * v8;
  }
  v16 = -v15;
  v17 = -v14;
  v18 = -v13;
  *a1 = v16;
  a1[1] = v17;
  a1[2] = -v13;
  v19 = (float)((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)(v9 * v9)) + (float)(v18 * v18);
  if ( v19 != 0.0 )
  {
    v20 = 1.0 / fsqrt(v19);
    v21 = (float)((float)((float)(v19 * v20) * v20) + -3.0) * (float)(v20 * -0.5);
    v22 = v16 * v21;
    v23 = v17 * v21;
    v24 = v18 * v21;
    v25 = v21 * a1[3];
    *a1 = v22;
    a1[1] = v23;
    a1[2] = v24;
    a1[3] = v25;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4DE2F0  (binary VA: 0x4de2f0)
// Original: sub_4DE2F0
// ----------------------------------------------------------------------------
void sub_4DE2F0(glitch::irradiance::IIrradianceManager::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2048350);
  glitch::indexedIrradiance::CIndexedIrradianceManager::clear((glitch::indexedIrradiance::CIndexedIrradianceManager::Self *)a1);
  glitch::irradiance::IIrradianceManager::Destroy(a1);
  opDelete(a1);
}



// ============================================================================
// Address:   0x4de340 (size: 122 bytes)
// Symbol:    sub_4DE340
// Demangled: sub_4DE340
// ============================================================================
int (**sub_4DE340(uint32_t *a1))(int)
{
  uint32_t *v1;
  volatile int32_t *v2;

  v1 = (uint32_t *)a1[2];
  *a1 = (uint32_t)(uintptr_t)(&off_2047F48);
  if ( v1 != nullptr )
  {
    v2 = (volatile int32_t *)((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 16)));
    if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  return (int (**)(int))(&off_20483C0);
}
// ----------------------------------------------------------------------------
// Function: sub_4DE3C0  (binary VA: 0x4de3c0)
// Original: sub_4DE3C0
// ----------------------------------------------------------------------------
int sub_4DE3C0(uint32_t *a1)
{
  return sub_4DE3D0((glitch::video::CNullDriver::Self *)((char *)a1 + *(uint32_t *)(*a1 - 12)));
}



// ============================================================================
// Address:   0x4de3d0 (size: 154 bytes)
// Symbol:    sub_4DE3D0
// Demangled: sub_4DE3D0
// ============================================================================
int (**sub_4DE3D0(glitch::video::CNullDriver::Self *a1))(int)
{
  uint32_t *v1;
  volatile int32_t *v2;

  v1 = *((uint32_t **)a1 + 219);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_204822C);
  *((uint32_t *)a1 + 220) = (uint32_t)(uintptr_t)(&off_2048338);
  if ( v1 != nullptr )
  {
    v2 = (volatile int32_t *)((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
    if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  glitch::video::CNullDriver::Destroy(a1);
  *((uint32_t *)a1 + 220) = (uint32_t)(uintptr_t)(&off_20483C0);
  return (int (**)(int))(&off_20483C0);
}
// ----------------------------------------------------------------------------
// Function: sub_4DE470  (binary VA: 0x4de470)
// Original: sub_4DE470
// ----------------------------------------------------------------------------
void sub_4DE470(uint32_t *a1)
{
  uint32_t *v1;
  volatile int32_t *v2;

  v1 = (uint32_t *)a1[2];
  *a1 = (uint32_t)(uintptr_t)(&off_2047F48);
  if ( v1 != nullptr )
  {
    v2 = (volatile int32_t *)((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 16)));
    if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4DE500  (binary VA: 0x4de500)
// Original: sub_4DE500
// ----------------------------------------------------------------------------
int sub_4DE500(char *a1)
{
  sub_4DE510((glitch::video::CNullDriver::Self *)&a1[*(uint32_t *)(*(uint32_t *)a1 - 12)]);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4DE510  (binary VA: 0x4de510)
// Original: sub_4DE510
// ----------------------------------------------------------------------------
void sub_4DE510(glitch::video::CNullDriver::Self *a1)
{
  uint32_t *v1;
  volatile int32_t *v2;

  v1 = *((uint32_t **)a1 + 219);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_204822C);
  *((uint32_t *)a1 + 220) = (uint32_t)(uintptr_t)(&off_2048338);
  if ( v1 != nullptr )
  {
    v2 = (volatile int32_t *)((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
    if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  glitch::video::CNullDriver::Destroy(a1);
  *((uint32_t *)a1 + 220) = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4DE5C0  (binary VA: 0x4de5c0)
// Original: sub_4DE5C0
// ----------------------------------------------------------------------------
int sub_4DE5C0(uint32_t *a1)
{
  int result;
  volatile int32_t *v2;

  result = (int)(uintptr_t)a1;
  v2 = (volatile int32_t *)a1[1];
  *a1 = (uint32_t)(uintptr_t)(&off_2047EB8);
  if ( v2 != nullptr )
  {
    result = __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      G4_VCALL<void>(v2, 8);
      return G4_VCALL<int>(v2, 4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_4DE630  (binary VA: 0x4de630)
// Original: sub_4DE630
// ----------------------------------------------------------------------------
void sub_4DE630(uint32_t *a1)
{
  volatile int32_t *v1;

  v1 = (volatile int32_t *)a1[1];
  *a1 = (uint32_t)(uintptr_t)(&off_2047EB8);
  if ( v1 != nullptr && __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8);
    G4_VCALL<void>(v1, 4);
  }
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4DE6B0  (binary VA: 0x4de6b0)
// Original: sub_4DE6B0
// ----------------------------------------------------------------------------
void sub_4DE6B0(glitch::scene::CMeshBuffer *a1)
{
  volatile int32_t *v1;
  volatile int32_t *v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2047E88);
  if ( *((uint32_t *)a1 + 17) != 0 )
  {
    *((uint32_t *)a1 + 17) = 0;
    *((uint32_t *)a1 + 18) = 0;
  }
  if ( *((uint32_t *)a1 + 22) != 0 )
    gll_operator_delete_arr(*((uint32_t *)a1 + 22));
  v1 = *((volatile int32_t **)a1 + 20);
  if ( v1 != nullptr && __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8);
    G4_VCALL<void>(v1, 4);
  }
  v2 = *((volatile int32_t **)a1 + 19);
  if ( v2 != nullptr && __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    G4_VCALL<void>(v2, 4);
  }
  ((glitch::scene::CMeshBuffer *)a1)->~CMeshBuffer();
}



// ============================================================================
// Address:   0x4de780 (size: 277 bytes)
// Symbol:    sub_4DE780
// Demangled: sub_4DE780
// ============================================================================
int (**sub_4DE780(uint32_t *a1))(int)
{
  volatile int32_t *v1;
  volatile int32_t *v2;
  volatile int32_t *v3;
  volatile int32_t *v4;

  v1 = (volatile int32_t *)a1[8];
  *a1 = (uint32_t)(uintptr_t)(&off_2047EA0);
  if ( v1 != nullptr && __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8);
    G4_VCALL<void>(v1, 4);
  }
  v2 = (volatile int32_t *)a1[7];
  if ( v2 != nullptr && __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    G4_VCALL<void>(v2, 4);
  }
  v3 = (volatile int32_t *)a1[6];
  if ( v3 != nullptr && __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
  }
  v4 = (volatile int32_t *)a1[5];
  if ( v4 != nullptr && __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8);
    G4_VCALL<void>(v4, 4);
  }
  if ( a1[2] != 0 )
    gll_operator_delete_arr(a1[2]);
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  return (int (**)(int))(&off_20483C0);
}
// ----------------------------------------------------------------------------
// Function: sub_4DE8A0  (binary VA: 0x4de8a0)
// Original: sub_4DE8A0
// ----------------------------------------------------------------------------
void sub_4DE8A0(glitch::scene::CMeshBuffer *a1)
{
  int v1;
  volatile int32_t *v2;
  volatile int32_t *v3;

  v1 = *((uint32_t *)a1 + 17);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2047E88);
  if ( v1 != 0 )
  {
    *((uint32_t *)a1 + 17) = 0;
    *((uint32_t *)a1 + 18) = 0;
  }
  if ( *((uint32_t *)a1 + 22) != 0 )
    gll_operator_delete_arr(*((uint32_t *)a1 + 22));
  v2 = *((volatile int32_t **)a1 + 20);
  if ( v2 != nullptr && __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    G4_VCALL<void>(v2, 4);
  }
  v3 = *((volatile int32_t **)a1 + 19);
  if ( v3 != nullptr && __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
  }
  ((glitch::scene::CMeshBuffer *)a1)->~CMeshBuffer();
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_4DE970  (binary VA: 0x4de970)
// Original: sub_4DE970
// ----------------------------------------------------------------------------
void sub_4DE970(uint32_t *a1)
{
  volatile int32_t *v1;
  volatile int32_t *v2;
  volatile int32_t *v3;
  volatile int32_t *v4;

  v1 = (volatile int32_t *)a1[8];
  *a1 = (uint32_t)(uintptr_t)(&off_2047EA0);
  if ( v1 != nullptr && __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8);
    G4_VCALL<void>(v1, 4);
  }
  v2 = (volatile int32_t *)a1[7];
  if ( v2 != nullptr && __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    G4_VCALL<void>(v2, 4);
  }
  v3 = (volatile int32_t *)a1[6];
  if ( v3 != nullptr && __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8);
    G4_VCALL<void>(v3, 4);
  }
  v4 = (volatile int32_t *)a1[5];
  if ( v4 != nullptr && __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8);
    G4_VCALL<void>(v4, 4);
  }
  if ( a1[2] != 0 )
    gll_operator_delete_arr(a1[2]);
  *a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: startProfiling  (binary VA: 0x4dea80)
// Original: startProfiling
// ----------------------------------------------------------------------------
int startProfiling()
{
  int result;

  result = opNew(8u);
  *(uint8_t *)result = 0;
  dword_20D1290 = result;
  *(uint32_t *)(result + 4) = (uint32_t)(uintptr_t)"javaprofiling";
  return result;
}

// ----------------------------------------------------------------------------
// Function: endProfiling  (binary VA: 0x4deac0)
// Original: endProfiling
// ----------------------------------------------------------------------------
void endProfiling()
{
  if ( dword_20D1290 != 0 )
    opDelete((void *)dword_20D1290);
}

// ----------------------------------------------------------------------------
// Function: startCProfiling  (binary VA: 0x4deaf0)
// Original: startCProfiling
// ----------------------------------------------------------------------------
int startCProfiling()
{
  return startProfiling();
}

// ----------------------------------------------------------------------------
// Function: endCProfiling  (binary VA: 0x4deb10)
// Original: endCProfiling
// ----------------------------------------------------------------------------
void endCProfiling()
{
  endProfiling();
}

// ----------------------------------------------------------------------------
// Function: getTime  (binary VA: 0x4deb30)
// Original: getTime
// ----------------------------------------------------------------------------
int getTime()
{
  typedef struct timeval _g4_t_tv;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_tv)) > _g4_s0 ? (8u + sizeof(_g4_t_tv)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 8u);

  gettimeofday(&tv, nullptr);
  return 1000 * tv.tv_sec + tv.tv_usec / 1000;
}

// ----------------------------------------------------------------------------
// Function: appValideSecondElapsed  (binary VA: 0x4dec30)
// Original: appValideSecondElapsed
// ----------------------------------------------------------------------------
int appValideSecondElapsed(int a1)
{
  int *v1;

  if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
  {
    sub_A3F880(&dword_20D1300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
    __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D1304 == 0 )
    v1 = (int *)(&dword_20D1300);
  return sub_A414B0((int)(uintptr_t)v1, a1);
}

// ----------------------------------------------------------------------------
// Function: appSetInternetState  (binary VA: 0x4decd0)
// Original: appSetInternetState
// ----------------------------------------------------------------------------
int appSetInternetState(int a1)
{
  int result;

  result = dword_20DDDC0;
  *(uint8_t *)(dword_20DDDC0 + 1049) = a1 != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: appAndroidMenuAnswerCallback  (binary VA: 0x4ded00)
// Original: appAndroidMenuAnswerCallback
// ----------------------------------------------------------------------------
int appAndroidMenuAnswerCallback(int a1)
{
  return sub_B9F070(dword_20DDDC0, a1);
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN_ResponsePNCallBack  (binary VA: 0x4ded30)
// Original: SimplifiedPN_ResponsePNCallBack
// ----------------------------------------------------------------------------
void SimplifiedPN_ResponsePNCallBack(int a1)
{
  typedef uint8_t _g4_t_v1[16];
  typedef uint8_t _g4_t_v2[112];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v2)) > _g4_s1 ? (16u + sizeof(_g4_t_v2)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 16u);

  Json::Reader::Construct((Json::Reader::Self *)v2);
  Json::Value::Construct(v1, 0);
  Json::Reader::parse((Json::Reader::Self *)v2, a1, (Json::Value::Self *)v1, 1);
  Json::Value::Destroy((Json::Value::Self *)v1);
  sub_4DDED0((int)(uintptr_t)v2);
}

// ----------------------------------------------------------------------------
// Function: getAbsolutePath  (binary VA: 0x4dedd0)
// Original: getAbsolutePath
// ----------------------------------------------------------------------------
char * getAbsolutePath(char *s)
{
  size_t v1;
  size_t v2;
  char *v3;

  v1 = strlen(s);
  v2 = strlen(m_gAppPath);
  v3 = (char *)opNewArray(v1 + v2 + 2);
  sprintf(v3, "%s%s", m_gAppPath, s);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: appAutLanguage  (binary VA: 0x4dee50)
// Original: appAutLanguage
// ----------------------------------------------------------------------------
int appAutLanguage()
{
  if ( dword_20DDDC0 != 0 )
    return sub_AB59D0(*(uint32_t *)(dword_20DDDC0 + 864));
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: appInit  (binary VA: 0x4dee90)
// Original: appInit
// ----------------------------------------------------------------------------
int appInit()
{
  glf::Self *v1;

  getAbsolutePath((char *)&unk_1B15112);
  (void)v1;
  return glf::AndroidGetViewSettings();
}

// ----------------------------------------------------------------------------
// Function: appUpdate  (binary VA: 0x4deec0)
// Original: appUpdate
// ----------------------------------------------------------------------------
void appUpdate()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: appDestroy  (binary VA: 0x4deed0)
// Original: appDestroy
// ----------------------------------------------------------------------------
void appDestroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: appNativeOnHDMI  (binary VA: 0x4deee0)
// Original: appNativeOnHDMI
// ----------------------------------------------------------------------------
void appNativeOnHDMI()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: appOnTouch  (binary VA: 0x4deef0)
// Original: appOnTouch
// ----------------------------------------------------------------------------
int appOnTouch(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;

  result = a1;
  switch ( a1 )
  {
    case 0:
      return glf::AndroidAddTouchEvent(nullptr, a2, a3, a4);
    case 1:
      return glf::AndroidAddTouchEvent((glf::Self *)((char *)&dword_0 + 1), a2, a3, a4);
    case 2:
      return glf::AndroidAddTouchEvent((glf::Self *)((char *)&dword_0 + 2), a2, a3, a4);
    default:
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: appMogaIsConnected  (binary VA: 0x4defa0)
// Original: appMogaIsConnected
// ----------------------------------------------------------------------------
int appMogaIsConnected(int a1)
{
  return sub_B9D990(dword_20DDDC0, a1);
}

// ----------------------------------------------------------------------------
// Function: appControllerConnected  (binary VA: 0x4defd0)
// Original: appControllerConnected
// ----------------------------------------------------------------------------
int appControllerConnected(int a1)
{
  int result;

  if ( dword_20DDDC0 != 0 )
    sub_B9D3B0(dword_20DDDC0, 1, a1);
  result = sub_5BC940();
  if ( result != 0 )
    return sub_C1FB80(result, a1, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: appControllerDisconnected  (binary VA: 0x4df040)
// Original: appControllerDisconnected
// ----------------------------------------------------------------------------
int appControllerDisconnected(int a1)
{
  int result;

  if ( dword_20DDDC0 != 0 )
    sub_B9D3B0(dword_20DDDC0, 2, a1);
  result = sub_5BC940();
  if ( result != 0 )
  {
    sub_C1FA10(result, a1);
    return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: appControllerConflict  (binary VA: 0x4df0a0)
// Original: appControllerConflict
// ----------------------------------------------------------------------------
int appControllerConflict(int a1)
{
  int v1;
  int v2;

  v1 = sub_5BC940();
  v2 = 0;
  if ( v1 != 0 )
    return (uint8_t)sub_C1E710();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: appCheckisGamePadConnected  (binary VA: 0x4df0e0)
// Original: appCheckisGamePadConnected
// ----------------------------------------------------------------------------
int appCheckisGamePadConnected(int a1)
{
  int result;

  result = sub_5BC940();
  if ( result != 0 )
  {
    sub_C1DED0();
    return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: appWichMogaIsConnected  (binary VA: 0x4df110)
// Original: appWichMogaIsConnected
// ----------------------------------------------------------------------------
int appWichMogaIsConnected(int a1)
{
  return sub_B9DA30(dword_20DDDC0, a1);
}

// ----------------------------------------------------------------------------
// Function: XperiaToggleJoysticks  (binary VA: 0x4df140)
// Original: XperiaToggleJoysticks
// ----------------------------------------------------------------------------
int XperiaToggleJoysticks(int a1)
{
  return sub_B9D8F0(dword_20DDDC0, a1);
}

// ----------------------------------------------------------------------------
// Function: readyToReadInput  (binary VA: 0x4df170)
// Original: readyToReadInput
// ----------------------------------------------------------------------------
int readyToReadInput()
{
  int result;

  result = 0;
  if ( dword_20DDDC0 != 0 )
    return (uint8_t)byte_20C17F6 ^ 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: appNativeJoyPadMove  (binary VA: 0x4df1a0)
// Original: appNativeJoyPadMove
// ----------------------------------------------------------------------------
int appNativeJoyPadMove(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;

  result = readyToReadInput();
  if ( (uint8_t)result != 0 )
  {
    v5 = sub_5BC940();
    if ( v5 != 0 )
      sub_C1DC10(v5, (float)a1 * 0.003921569f, (float)a2 * 0.003921569f, a3, a4);
    result = sub_B9EDF0(dword_20DDDC0);
    if ( (uint8_t)result == 0 )
    {
      v6 = sub_BF6360();
      result = sub_BE4CB0(v6);
      if ( (uint8_t)result != 0 )
      {
        v7 = sub_BF6360();
      {
        sub_BE1500();
        return v7;
      }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: appNativeCameraJoyPad  (binary VA: 0x4df2a0)
// Original: appNativeCameraJoyPad
// ----------------------------------------------------------------------------
int appNativeCameraJoyPad()
{
  return readyToReadInput();
}

// ----------------------------------------------------------------------------
// Function: appAddFriend  (binary VA: 0x4df2c0)
// Original: appAddFriend
// ----------------------------------------------------------------------------
int appAddFriend(char *a1)
{
  typedef char _g4_t_v2;
  typedef int _g4_t_v3[2];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (11u + sizeof(_g4_t_v2)) > _g4_s0 ? (11u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 11u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)v3, a1, (int)(uintptr_t)&v2);
  sub_B9F5F0((int)(uintptr_t)v3);
  { g4_std::string::Destroy(v3); return 0; }
}

// ----------------------------------------------------------------------------
// Function: appSetPlayerName  (binary VA: 0x4df310)
// Original: appSetPlayerName
// ----------------------------------------------------------------------------
int appSetPlayerName(char *a1)
{
  void *v1;
  typedef char _g4_t_v3;
  typedef int _g4_t_v4[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (11u + sizeof(_g4_t_v3)) > _g4_s0 ? (11u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 11u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)v4, a1, (int)(uintptr_t)&v3);
  if ( byte_20D13A8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D13A8) != 0 )
  {
    sub_52A480(&unk_20D13C0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D13A8);
    __cxa_atexit((void (*)(void *))sub_529EE0, &unk_20D13C0, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D13C4 == 0 )
    v1 = &unk_20D13C0;
  sub_4FCBE0((int)(uintptr_t)v1, (int)(uintptr_t)v4);
  { g4_std::string::Destroy(v4); return 0; }
}

// ----------------------------------------------------------------------------
// Function: appOnKeyDown  (binary VA: 0x4df3d0)
// Original: appOnKeyDown
// ----------------------------------------------------------------------------
int appOnKeyDown(int a1, int a2)
{
  int result;

  sub_B9DC10(dword_20DDDC0, 1, a1);
  result = readyToReadInput();
  if ( (uint8_t)result != 0 && a2 == 1 )
  {
    result = sub_5BC940();
    if ( result != 0 )
    {
      sub_C1F070(result, a1);
      return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: appOnKeyUp  (binary VA: 0x4df440)
// Original: appOnKeyUp
// ----------------------------------------------------------------------------
int appOnKeyUp(int a1, int a2)
{
  int result;

  sub_B9DC10(dword_20DDDC0, 0, a1);
  result = readyToReadInput();
  if ( (uint8_t)result != 0 && a2 == 1 )
  {
    result = sub_5BC940();
    if ( result != 0 )
      return (int)(uintptr_t)sub_C1DAD0(result, a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: appOnPopUpCancel  (binary VA: 0x4df4b0)
// Original: appOnPopUpCancel
// ----------------------------------------------------------------------------
void appOnPopUpCancel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: appOnPopUpLater  (binary VA: 0x4df4c0)
// Original: appOnPopUpLater
// ----------------------------------------------------------------------------
void appOnPopUpLater()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: appPause  (binary VA: 0x4df4d0)
// Original: appPause
// ----------------------------------------------------------------------------
uint32_t * appPause()
{
  uint32_t *result;

  result = &g_appPaused;
  if ( g_appPaused == 0 )
  {
    g_appPaused = 1;
    result = (uint32_t *)dword_20DDDC0;
    if ( dword_20DDDC0 != 0 )
      return (uint32_t *)sub_BA6D40(0.0L, dword_20DDDC0, 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: appResume  (binary VA: 0x4df520)
// Original: appResume
// ----------------------------------------------------------------------------
uint32_t * appResume()
{
  uint32_t *result;

  result = &g_appPaused;
  if ( g_appPaused != 0 )
  {
    g_appPaused = 0;
    result = (uint32_t *)dword_20DDDC0;
    m_timerForResume = 1;
    if ( dword_20DDDC0 != 0 )
    {
      sub_BA8D90(0.0L, dword_20DDDC0, 1);
      return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: appOnAccelerator  (binary VA: 0x4df570)
// Original: appOnAccelerator
// ----------------------------------------------------------------------------
int appOnAccelerator(int a1, int a2, int a3)
{
  int result;

  result = dword_20DDDC0;
  if ( dword_20DDDC0 != 0 )
    return sub_B9DCD0(dword_20DDDC0, a1, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: appOnOrientation  (binary VA: 0x4df5c0)
// Original: appOnOrientation
// ----------------------------------------------------------------------------
uint32_t * appOnOrientation(int a1, int a2, int a3)
{
  m_OriX = a1;
  m_OriY = a2;
  m_OriZ = (uint32_t)a3;
  return &m_OriZ;
}

// ----------------------------------------------------------------------------
// Function: appAddReward  (binary VA: 0x4df5f0)
// Original: appAddReward
// ----------------------------------------------------------------------------
int appAddReward(int a1)
{
  sub_B9F230(dword_20DDDC0, a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: appGetListFriendsSize  (binary VA: 0x4df620)
// Original: appGetListFriendsSize
// ----------------------------------------------------------------------------
int appGetListFriendsSize()
{
  return sub_B9F550();
}

// ----------------------------------------------------------------------------
// Function: appGetFacebookFriendValue  (binary VA: 0x4df650)
// Original: appGetFacebookFriendValue
// ----------------------------------------------------------------------------
int appGetFacebookFriendValue(int a1, int a2)
{
  return (int)(uintptr_t)(sub_B9F640(dword_20DDDC0, a1, a2));
}

// ----------------------------------------------------------------------------
// Function: appShortcutToScreens  (binary VA: 0x4df690)
// Original: appShortcutToScreens
// ----------------------------------------------------------------------------
int appShortcutToScreens(char *a1)
{
  return sub_B9E9F0(dword_20DDDC0, a1);
}

// ----------------------------------------------------------------------------
// Function: JNI_OnLoad  (binary VA: 0x4df6c0)
// Original: JNI_OnLoad
// ----------------------------------------------------------------------------
extern "C" void G4_InitRelocatedDataAndConstructors();

Elf32_Sym * JNI_OnLoad(uint32_t *a1)
{
  int v1;
  int v2;
  uint8_t v4[8];

  G4_InitRelocatedDataAndConstructors();
  mJavaVM[0] = (uint32_t)(uintptr_t)a1;
  v1 = G4_VCALL<int>(a1, 24, v4, 0x10004);
  v2 = -1;
  if ( v1 == 0 )
  {
    AndroidOS_JNIOnload(a1);
    return (Elf32_Sym *)(uintptr_t)0x10004;
  }
  return (Elf32_Sym *)(uintptr_t)v2;
}

// ----------------------------------------------------------------------------
// Function: sub_4DF730  (binary VA: 0x4df730)
// Original: sub_4DF730
// ----------------------------------------------------------------------------
int sub_4DF730()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20D1294);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20D1294, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_20D1298, "UNKNOWN", (int)(uintptr_t)&v1 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D1298, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_20D129C, "IMEI", (int)(uintptr_t)&v1 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D129C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_20D12A0, "HDIDFV", (int)(uintptr_t)&v1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D12A0, &unk_20D1280);
  dword_20D12A4 = 1056964608;
  dword_20D12A8 = 1056964608;
  dword_20D12AC = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: GetWindowWidth  (binary VA: 0x4e0000)
// Original: GetWindowWidth
// ----------------------------------------------------------------------------
int GetWindowWidth()
{
  return s_windowWidth;
}

// ----------------------------------------------------------------------------
// Function: GetWindowHeight  (binary VA: 0x4e0020)
// Original: GetWindowHeight
// ----------------------------------------------------------------------------
int GetWindowHeight()
{
  return s_windowHeight;
}

// ----------------------------------------------------------------------------
// Function: GetNumberOfCores  (binary VA: 0x4e0040)
// Original: GetNumberOfCores
// ----------------------------------------------------------------------------
int GetNumberOfCores()
{
  return sysconf(97);
}

// ----------------------------------------------------------------------------
// Function: get_mem_total  (binary VA: 0x4e0070)
// Original: get_mem_total
// ----------------------------------------------------------------------------
int get_mem_total()
{
  uint32_t *v0;
  int v1;
  void *v2;
  uint32_t *v4;
  typedef int _g4_t_v5[4];
  typedef int _g4_t_v6;
  typedef int (**_g4_t_v7)(int);
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[7];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[29];
  typedef int16_t _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v9)) > _g4_s4 ? (32u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v10)) > _g4_s5 ? (60u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v11)) > _g4_s6 ? (68u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (136u + sizeof(_g4_t_v12)) > _g4_s7 ? (136u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (252u + sizeof(_g4_t_v13)) > _g4_s8 ? (252u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (256u + sizeof(_g4_t_v14)) > _g4_s9 ? (256u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (260u + sizeof(_g4_t_v15)) > _g4_s10 ? (260u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (264u + sizeof(_g4_t_v16)) > _g4_s11 ? (264u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (268u + sizeof(_g4_t_v17)) > _g4_s12 ? (268u + sizeof(_g4_t_v17)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 60u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 68u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 136u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 252u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 256u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 260u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 264u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 268u);

  v5[0] = (int)(uintptr_t)&unk_213B814;
  sub_1900810(v12);
  v12[28] = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v12[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v7 = (int (**)(int))(&off_20A9DEC);
  *(int (***)(int))((char *)&v7 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(&off_20A9E00);
  v8 = 0;
  sub_19119D0((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3), 0);
  v7 = (int (**)(int))(&off_20A9E2C);
  v12[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  sub_190A6D0(v9);
  sub_19119D0(v12, v9);
  if ( sub_190AE40((int)(uintptr_t)v9, "/proc/meminfo", 8) != 0 )
    sub_1911530((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3), 0);
  else
    sub_1911530((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3), *(int *)((char *)&v9[3] + (uint32_t)(uintptr_t)*(v7 - 3)) | 4);
  while ( 1 )
  {
    v0 = (uint32_t *)sub_19056D0(&v7, v5);
    if ( (*((uint8_t *)v0 + *(uint32_t *)(*v0 - 12) + 20) & 5) != 0 )
    {
      v1 = 0x40000;
      goto LABEL_5;
    }
    if ( g4_std::string::compare((int)(uintptr_t)v5, "MemTotal:") == 0 )
      break;
    sub_1905090(&v7, 0x7FFFFFFF, 10);
  }
  v1 = 0x40000;
  v4 = (uint32_t *)sub_19153C0(&v7, &v6);
  if ( (*((uint8_t *)v4 + *(uint32_t *)(*v4 - 12) + 20) & 5) == 0 )
    v1 = v6;
LABEL_5:
  v7 = (int (**)(int))(&off_20A9E2C);
  v12[0] = (uint32_t)(uintptr_t)(&off_20A9E40);
  v9[0] = (int)(uintptr_t)&off_20A9DA8;
  sub_190AC60(v9);
  sub_1908070(&v11);
  v9[0] = (int)(uintptr_t)&off_20AB2C8;
  sub_1902180(&v10);
  v7 = (int (**)(int))(&off_20A9DEC);
  *(int (***)(int))((char *)&v7 + (uint32_t)*(&off_20A9DEC - 3)) = (int (**)(int))(&off_20A9E00);
  v8 = 0;
  v12[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v12);
  v2 = (void *)(v5[0] - 12);
  if ( (void *)(v5[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: GetAvaliableRAM  (binary VA: 0x4e0350)
// Original: GetAvaliableRAM
// ----------------------------------------------------------------------------
int GetAvaliableRAM()
{
  return get_mem_total() >> 10;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::Construct  (binary VA: 0x4e0370)
// Original: CGameConfig::CGameConfig
// ----------------------------------------------------------------------------
void CGameConfig::Construct(CGameConfig::Self *self)
{
  char nptr[1036];

  *(uint32_t *)self = -1;
  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 2) = -1;
  *((uint32_t *)self + 7) = -1;
  *((uint8_t *)self + 60) = 0;
  *((uint8_t *)self + 40) = 1;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  getPhoneFirmware(nptr);
  if ( strtod(nptr, nullptr) >= 4.3 )
    glf::SR_ThreadSizeFix = 1;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::Destroy  (binary VA: 0x4e0410)
// Original: CGameConfig::~CGameConfig
// ----------------------------------------------------------------------------
void CGameConfig::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::SaveUserConfig  (binary VA: 0x4e0420)
// Original: CGameConfig::SaveUserConfig
// ----------------------------------------------------------------------------
int CGameConfig::SaveUserConfig(CGameConfig::Self *self, int a2, int a3, int a4)
{
  char v4;
  char v5;
  int v7;
  typedef uint8_t _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int (**_g4_t_v10)(int);
  typedef int _g4_t_v11;
  typedef int (**_g4_t_v12)(int);
  typedef int _g4_t_v13[7];
  typedef uint8_t _g4_t_v14[8];
  typedef uint8_t _g4_t_v15[68];
  typedef uint32_t _g4_t_v16[29];
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23[1052];
  enum : size_t {
    _g4_s0 = 1408u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v10)) > _g4_s2 ? (36u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v11)) > _g4_s3 ? (40u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v12)) > _g4_s4 ? (44u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v13)) > _g4_s5 ? (48u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v14)) > _g4_s6 ? (76u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v15)) > _g4_s7 ? (84u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (152u + sizeof(_g4_t_v16)) > _g4_s8 ? (152u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (268u + sizeof(_g4_t_v17)) > _g4_s9 ? (268u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (269u + sizeof(_g4_t_v18)) > _g4_s10 ? (269u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (272u + sizeof(_g4_t_v19)) > _g4_s11 ? (272u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (276u + sizeof(_g4_t_v20)) > _g4_s12 ? (276u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (280u + sizeof(_g4_t_v21)) > _g4_s13 ? (280u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (284u + sizeof(_g4_t_v22)) > _g4_s14 ? (284u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (288u + sizeof(_g4_t_v23)) > _g4_s15 ? (288u + sizeof(_g4_t_v23)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 84u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 152u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 268u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 269u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 272u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 276u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 280u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 284u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 288u);

  getFolder(v23);
  strcat(v23, "/profile.bin");
  sub_1900810(v16);
  v16[28] = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v16[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v22 = 0;
  v10 = (int (**)(int))(&off_20A9F2C);
  *(int (***)(int))((char *)&v10 + (uint32_t)*(&off_20A9F2C - 3)) = (int (**)(int))(&off_20A9F40);
  v11 = 0;
  sub_19119D0((char *)&v10 + (uint32_t)(uintptr_t)*(v10 - 3), 0);
  v12 = (int (**)(int))(&off_20A9EEC);
  *(int *)((char *)&v13[-1] + (uint32_t)*(&off_20A9EEC - 3)) = (int)(uintptr_t)&off_20A9F00;
  sub_19119D0((char *)&v13[-1] + (uint32_t)(uintptr_t)*(v12 - 3), 0);
  v10 = (int (**)(int))(&off_20A9F6C);
  *(int (***)(int))((char *)&v10 + (uint32_t)*(&off_20A9F6C - 3)) = (int (**)(int))(&off_20A9F94);
  v10 = (int (**)(int))(&off_20A9FEC);
  v16[0] = (uint32_t)(uintptr_t)(&off_20AA014);
  v12 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AA000));
  sub_190A6D0(v13);
  sub_19119D0(v16, v13);
  if ( sub_190AE40((int)(uintptr_t)v13, v23, 48) != 0 )
    sub_1911530((char *)&v10 + (uint32_t)(uintptr_t)*(v10 - 3), 0);
  else
    sub_1911530((char *)&v10 + (uint32_t)(uintptr_t)*(v10 - 3), *(int *)((char *)&v10 + (uint32_t)(uintptr_t)*(v10 - 3) + 20) | 4);
  v4 = sub_1907FD0(v15);
  v5 = 0;
  if ( v4 != 0 )
  {
    v9 = a4 + (a3 + 1) * (a2 + 2) + 3 * *((uint32_t *)self + 3);
    g4_std::ostream::op_shl_int(&v12, a2);
    g4_std::ostream::write(&v12, " ", 1);
    g4_std::ostream::op_shl_int(&v12, a3);
    g4_std::ostream::write(&v12, " ", 1);
    g4_std::ostream::op_shl_int(&v12, a4);
    g4_std::ostream::write(&v12, " ", 1);
    g4_std::ostream::op_shl_int(&v12, *((uint32_t *)self + 3));
    g4_std::ostream::write(&v12, " ", 1);
    g4_std::ostream::op_shl_int(&v12, v9);
    v7 = sub_190AC60(v13);
    v5 = 1;
    if ( v7 == 0 )
    {
      sub_1911530((char *)&v10 + (uint32_t)(uintptr_t)*(v10 - 3), *(int *)((char *)&v10 + (uint32_t)(uintptr_t)*(v10 - 3) + 20) | 4);
      v5 = 1;
    }
  }
  v10 = (int (**)(int))(&off_20A9FEC);
  v16[0] = (uint32_t)(uintptr_t)(&off_20AA014);
  v12 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AA000));
  v8 = v5;
  v13[0] = (int)(uintptr_t)&off_20A9DA8;
  sub_190AC60(v13);
  sub_1908070(v15);
  v13[0] = (int)(uintptr_t)&off_20AB2C8;
  sub_1902180(v14);
  v10 = (int (**)(int))(&off_20A9F6C);
  *(int (***)(int))((char *)&v10 + (uint32_t)*(&off_20A9F6C - 3)) = (int (**)(int))(&off_20A9F94);
  v12 = (int (**)(int))(&off_20A9EEC);
  *(int *)((char *)&v13[-1] + (uint32_t)*(&off_20A9EEC - 3)) = (int)(uintptr_t)&off_20A9F00;
  v10 = (int (**)(int))(&off_20A9F2C);
  *(int (***)(int))((char *)&v10 + (uint32_t)*(&off_20A9F2C - 3)) = (int (**)(int))(&off_20A9F40);
  v11 = 0;
  v16[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v16);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::GetUserConfig  (binary VA: 0x4e0860)
// Original: CGameConfig::GetUserConfig
// ----------------------------------------------------------------------------
unsigned int CGameConfig::GetUserConfig(CGameConfig::Self *self)
{
  unsigned int v1;
  char *v3;
  typedef unsigned int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int (**_g4_t_v7)(int);
  typedef int _g4_t_v8;
  typedef int (**_g4_t_v9)(int);
  typedef int _g4_t_v10[7];
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[68];
  typedef uint32_t _g4_t_v13[29];
  typedef int16_t _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19[1036];
  enum : size_t {
    _g4_s0 = 1392u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v7)) > _g4_s3 ? (36u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v8)) > _g4_s4 ? (40u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v9)) > _g4_s5 ? (44u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v10)) > _g4_s6 ? (48u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v11)) > _g4_s7 ? (76u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v12)) > _g4_s8 ? (84u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (152u + sizeof(_g4_t_v13)) > _g4_s9 ? (152u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (268u + sizeof(_g4_t_v14)) > _g4_s10 ? (268u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (272u + sizeof(_g4_t_v15)) > _g4_s11 ? (272u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (276u + sizeof(_g4_t_v16)) > _g4_s12 ? (276u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (280u + sizeof(_g4_t_v17)) > _g4_s13 ? (280u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (284u + sizeof(_g4_t_v18)) > _g4_s14 ? (284u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (288u + sizeof(_g4_t_v19)) > _g4_s15 ? (288u + sizeof(_g4_t_v19)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 76u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 84u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 152u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 268u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 272u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 276u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 280u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 284u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 288u);

  getFolder(v19);
  strcat(v19, "/profile.bin");
  sub_1900810(v13);
  v13[28] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v13[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v18 = 0;
  v7 = (int (**)(int))(&off_20A9F2C);
  *(int (***)(int))((char *)&v7 + (uint32_t)*(&off_20A9F2C - 3)) = (int (**)(int))(&off_20A9F40);
  v8 = 0;
  sub_19119D0((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3), 0);
  v9 = (int (**)(int))(&off_20A9EEC);
  *(int *)((char *)&v10[-1] + (uint32_t)*(&off_20A9EEC - 3)) = (int)(uintptr_t)&off_20A9F00;
  sub_19119D0((char *)&v10[-1] + (uint32_t)(uintptr_t)*(v9 - 3), 0);
  v7 = (int (**)(int))(&off_20A9F6C);
  *(int (***)(int))((char *)&v7 + (uint32_t)*(&off_20A9F6C - 3)) = (int (**)(int))(&off_20A9F94);
  v7 = (int (**)(int))(&off_20A9FEC);
  v13[0] = (uint32_t)(uintptr_t)(&off_20AA014);
  v9 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AA000));
  sub_190A6D0(v10);
  sub_19119D0(v13, v10);
  if ( sub_190AE40((int)(uintptr_t)v10, v19, 24) != 0 )
    sub_1911530((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3), 0);
  else
    sub_1911530((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3), *(int *)((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3) + 20) | 4);
  if ( (uint8_t)sub_1907FD0(v12) == 0 )
  {
    if ( sub_190AC60(v10) != 0 )
      goto LABEL_9;
    v3 = (char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3);
    goto LABEL_13;
  }
  sub_1914710(&v7, self);
  sub_1914710(&v7, (char *)self + 4);
  sub_1914710(&v7, (char *)self + 8);
  sub_1914710(&v7, (char *)self + 12);
  sub_1914710(&v7, &v6);
  v1 = *(uint32_t *)self;
  if ( *(int *)self <= 2 )
  {
    forceChangeProfile = 1;
    v1 = *(uint32_t *)self;
  }
  if ( v1 > 5
    || (v5 = *((uint32_t *)self + 1), *((uint32_t *)self + 2) + (v5 + 1) * (v1 + 2) + 3 * *((uint32_t *)self + 3) != v6) )
  {
    if ( sub_190AC60(v10) != 0 )
    {
LABEL_9:
      v1 = *((uint32_t *)self + 7);
      goto LABEL_10;
    }
    v3 = (char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3);
LABEL_13:
    sub_1911530(v3, *((uint32_t *)v3 + 5) | 4);
    goto LABEL_9;
  }
  if ( v5 == 2 )
  {
    if ( sub_190AC60(v10) == 0 )
      sub_1911530((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3), *(int *)((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3) + 20) | 4);
    CGameConfig::SaveUserConfig(self, *((uint32_t *)self + 3), 1, *((uint32_t *)self + 2));
    v1 = *((uint32_t *)self + 7);
  }
  else
  {
    if ( v5 == 1 )
    {
      if ( sub_190AC60(v10) == 0 )
        sub_1911530((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3), *(int *)((char *)&v7 + (uint32_t)(uintptr_t)*(v7 - 3) + 20) | 4);
      CGameConfig::SaveUserConfig(self, *(uint32_t *)self, 2, *((uint32_t *)self + 2));
      v1 = *(uint32_t *)self;
    }
    *((uint32_t *)self + 7) = v1;
  }
LABEL_10:
  v7 = (int (**)(int))(&off_20A9FEC);
  v13[0] = (uint32_t)(uintptr_t)(&off_20AA014);
  v9 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AA000));
  v4 = v1;
  v10[0] = (int)(uintptr_t)&off_20A9DA8;
  sub_190AC60(v10);
  sub_1908070(v12);
  v10[0] = (int)(uintptr_t)&off_20AB2C8;
  sub_1902180(&v11);
  v7 = (int (**)(int))(&off_20A9F6C);
  *(int (***)(int))((char *)&v7 + (uint32_t)*(&off_20A9F6C - 3)) = (int (**)(int))(&off_20A9F94);
  v9 = (int (**)(int))(&off_20A9EEC);
  *(int *)((char *)&v10[-1] + (uint32_t)*(&off_20A9EEC - 3)) = (int)(uintptr_t)&off_20A9F00;
  v7 = (int (**)(int))(&off_20A9F2C);
  *(int (***)(int))((char *)&v7 + (uint32_t)*(&off_20A9F2C - 3)) = (int (**)(int))(&off_20A9F40);
  v8 = 0;
  v13[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v13);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::LoadCorrect  (binary VA: 0x4e0d30)
// Original: CGameConfig::LoadCorrect
// ----------------------------------------------------------------------------
CGameConfig::Self * CGameConfig::LoadCorrect(CGameConfig::Self *self)
{
  CGameConfig::Self *result;
  int v2;

  result = self;
  if ( *((uint32_t *)self + 1) != 0 )
  {
    v2 = *((uint32_t *)self + 2);
    *((uint32_t *)self + 1) = 0;
    return (CGameConfig::Self *)CGameConfig::SaveUserConfig(self, *(uint32_t *)self, 0, v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::Transform  (binary VA: 0x4e0d80)
// Original: CGameConfig::Transform
// ----------------------------------------------------------------------------
CGameConfig::Self * CGameConfig::Transform(CGameConfig::Self *self, int a2)
{
  CGameConfig::Self *result;

  result = self;
  switch ( *((uint32_t *)self + 3) )
  {
    case 0:
      result = (CGameConfig::Self *)(a2 == 0 ? 1 : 3);
      break;
    case 1:
      result = nullptr;
      if ( a2 != 0 )
        result = (CGameConfig::Self *)(2 * (a2 != 1) + 2);
      break;
    case 2:
      result = nullptr;
      if ( a2 != 1 )
        result = (CGameConfig::Self *)(2 * (a2 != 2) + 2);
      break;
    case 3:
      result = nullptr;
      if ( a2 != 2 )
        result = (CGameConfig::Self *)(2 * (a2 != 3) + 2);
      break;
    case 4:
      result = (CGameConfig::Self *)(2 * (a2 != 3) + 1);
      break;
    default:
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::SetUserProfile  (binary VA: 0x4e0e20)
// Original: CGameConfig::SetUserProfile
// ----------------------------------------------------------------------------
int CGameConfig::SetUserProfile(CGameConfig::Self *self)
{
  int result;

  result = 4;
  if ( *((int *)self + 7) <= 4 )
    return *((uint32_t *)self + 7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::GetUserProfile  (binary VA: 0x4e0e40)
// Original: CGameConfig::GetUserProfile
// ----------------------------------------------------------------------------
int CGameConfig::GetUserProfile(CGameConfig::Self *self, int a2)
{
  *((uint32_t *)self + 7) = a2;
  return CGameConfig::SaveUserConfig(self, a2, 1, *((uint32_t *)self + 8));
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::LastUserProfile  (binary VA: 0x4e0e80)
// Original: CGameConfig::LastUserProfile
// ----------------------------------------------------------------------------
int CGameConfig::LastUserProfile(CGameConfig::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 7) = v1;
  result = 4;
  if ( v1 <= 4 )
    return v1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::DefaultUserProfile  (binary VA: 0x4e0ea0)
// Original: CGameConfig::DefaultUserProfile
// ----------------------------------------------------------------------------
int CGameConfig::DefaultUserProfile(CGameConfig::Self *self)
{
  int result;

  result = 4;
  if ( *((int *)self + 3) <= 4 )
    return *((uint32_t *)self + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::GetRAMProfile  (binary VA: 0x4e0ec0)
// Original: CGameConfig::GetRAMProfile
// ----------------------------------------------------------------------------
const char * CGameConfig::GetRAMProfile(CGameConfig::Self *self)
{
  const char *result;
  int AvaliableRAM;
  int v3;

  GetAvaliableRAM();
  result = "lgsu660";
  if ( *((uint8_t *)self + 60) != 0 )
  {
    AvaliableRAM = GetAvaliableRAM();
    result = "ramlow";
    if ( AvaliableRAM > 511 )
    {
      v3 = GetAvaliableRAM();
      result = "rammedium";
      if ( v3 > 767 )
        return "ramhigh";
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::GetCPUProfile  (binary VA: 0x4e0f30)
// Original: CGameConfig::GetCPUProfile
// ----------------------------------------------------------------------------
const char * CGameConfig::GetCPUProfile(CGameConfig::Self *self)
{
  const char *result;
  int v2;
  int v3;
  int AvaliableRAM;

  result = "lgsu660";
  if ( *((uint8_t *)self + 60) != 0 )
  {
    if ( GetNumberOfCores() <= 1 )
    {
      AvaliableRAM = GetAvaliableRAM();
      result = "cpulow";
      if ( AvaliableRAM > 549 )
        return "cpumedium";
    }
    else if ( GetNumberOfCores() > 2 )
    {
      v3 = GetAvaliableRAM();
      result = "cpumedium";
      if ( v3 > 549 )
        return "cpuhigh";
    }
    else
    {
      v2 = GetAvaliableRAM();
      result = "cpumedium";
      if ( v2 > 899 )
        return "cpuhigh";
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::ManualConfig  (binary VA: 0x4e0ff0)
// Original: CGameConfig::ManualConfig
// ----------------------------------------------------------------------------
void CGameConfig::ManualConfig()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::SaveConfig  (binary VA: 0x4e1000)
// Original: CGameConfig::SaveConfig
// ----------------------------------------------------------------------------
void CGameConfig::SaveConfig()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::LoadConfig  (binary VA: 0x4e1010)
// Original: CGameConfig::LoadConfig
// ----------------------------------------------------------------------------
void CGameConfig::LoadConfig()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::GetConfigValue  (binary VA: 0x4e1020)
// Original: CGameConfig::GetConfigValue
// ----------------------------------------------------------------------------
int CGameConfig::GetConfigValue()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::GetConfigValue_ea4e1030  (binary VA: 0x4e1030)
// Original: CGameConfig::GetConfigValue
// ----------------------------------------------------------------------------
int CGameConfig::GetConfigValue_ea4e1030()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::WriteConfigValue  (binary VA: 0x4e1040)
// Original: CGameConfig::WriteConfigValue
// ----------------------------------------------------------------------------
void CGameConfig::WriteConfigValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::WriteConfigValue_ea4e1050  (binary VA: 0x4e1050)
// Original: CGameConfig::WriteConfigValue
// ----------------------------------------------------------------------------
void CGameConfig::WriteConfigValue_ea4e1050()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::WriteConfigValue_ea4e1060  (binary VA: 0x4e1060)
// Original: CGameConfig::WriteConfigValue
// ----------------------------------------------------------------------------
void CGameConfig::WriteConfigValue_ea4e1060()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::PrintConfigValue  (binary VA: 0x4e1070)
// Original: CGameConfig::PrintConfigValue
// ----------------------------------------------------------------------------
int CGameConfig::PrintConfigValue(CGameConfig::Self *self, char *s, char *a3, bool a4)
{
  if ( a4 )
    return sprintf(s, "%s: true\n", a3);
  else
    return sprintf(s, "%s: false\n", a3);
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::PrintConfigValue  (binary VA: 0x4e10d0)
// Original: CGameConfig::PrintConfigValue
// ----------------------------------------------------------------------------
int CGameConfig::PrintConfigValue(CGameConfig::Self *self, char *s, char *a3, int a4)
{
  return sprintf(s, "%s: %d\n", a3, a4);
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::PrintConfigValue  (binary VA: 0x4e1110)
// Original: CGameConfig::PrintConfigValue
// ----------------------------------------------------------------------------
int CGameConfig::PrintConfigValue(CGameConfig::Self *self, char *s, char *a3, float a4)
{
  return sprintf(s, "%s: %f\n", a3, a4);
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::GetCurrentConfig  (binary VA: 0x4e1150)
// Original: CGameConfig::GetCurrentConfig
// ----------------------------------------------------------------------------
int CGameConfig::GetCurrentConfig(CGameConfig::Self *self, char *s)
{
  size_t v3;
  size_t v4;
  size_t v5;
  size_t v6;
  size_t v7;
  size_t v8;
  size_t v9;

  v3 = strlen(s);
  CGameConfig::PrintConfigValue(self, &s[v3], "m_iCPUProfile", (int)*((uint32_t *)self + 5));
  v4 = strlen(s);
  CGameConfig::PrintConfigValue(self, &s[v4], "m_iGPUProfile", (int)*((uint32_t *)self + 6));
  v5 = strlen(s);
  CGameConfig::PrintConfigValue(self, &s[v5], "m_iFPSOptimize", (int)*((uint32_t *)self + 9));
  v6 = strlen(s);
  CGameConfig::PrintConfigValue(self, &s[v6], "m_isEnableAdjustSaturation", *((uint8_t *)self + 40));
  v7 = strlen(s);
  CGameConfig::PrintConfigValue(self, &s[v7], "m_fRedAmount", *((float *)self + 12));
  v8 = strlen(s);
  CGameConfig::PrintConfigValue(self, &s[v8], "m_fGreenAmount", *((float *)self + 13));
  v9 = strlen(s);
  return CGameConfig::PrintConfigValue(self, &s[v9], "m_fBlueAmount", *((float *)self + 14));
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::ApplyConfig  (binary VA: 0x4e1290)
// Original: CGameConfig::ApplyConfig
// ----------------------------------------------------------------------------
void CGameConfig::ApplyConfig()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: GetPhoneManufacturerPointer  (binary VA: 0x4e12a0)
// Original: GetPhoneManufacturerPointer
// ----------------------------------------------------------------------------
char * GetPhoneManufacturerPointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  return (char *)v0 + 68;
}

// ----------------------------------------------------------------------------
// Function: GetPhoneModelPointer  (binary VA: 0x4e1300)
// Original: GetPhoneModelPointer
// ----------------------------------------------------------------------------
char * GetPhoneModelPointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  return (char *)v0 + 108;
}

// ----------------------------------------------------------------------------
// Function: GetPhoneCPUNamePointer  (binary VA: 0x4e13c0)
// Original: GetPhoneCPUNamePointer
// ----------------------------------------------------------------------------
char * GetPhoneCPUNamePointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  return (char *)v0 + 188;
}

// ----------------------------------------------------------------------------
// Function: GetPhoneCPUArchPointer  (binary VA: 0x4e1420)
// Original: GetPhoneCPUArchPointer
// ----------------------------------------------------------------------------
char * GetPhoneCPUArchPointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  return (char *)v0 + 228;
}

// ----------------------------------------------------------------------------
// Function: GetPhoneCPUPartPointer  (binary VA: 0x4e1480)
// Original: GetPhoneCPUPartPointer
// ----------------------------------------------------------------------------
char * GetPhoneCPUPartPointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  return (char *)v0 + 268;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::AutoConfig  (binary VA: 0x4e1b90)
// Original: CGameConfig::AutoConfig
// ----------------------------------------------------------------------------
int CGameConfig::AutoConfig(CGameConfig::Self *self)
{
  int result;

  result = CGameConfig::CalculateDevicePower(self);
  *((uint8_t *)self + 40) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::Config  (binary VA: 0x4e1bd0)
// Original: CGameConfig::Config
// ----------------------------------------------------------------------------
void CGameConfig::Config(CGameConfig::Self *self)
{
  CGameConfig::AutoConfig(self);
  CGameConfig::ManualConfig();
  CGameConfig::ApplyConfig();
}

// ----------------------------------------------------------------------------
// Function: GetPhoneGPUNamePointer  (binary VA: 0x4e1c10)
// Original: GetPhoneGPUNamePointer
// ----------------------------------------------------------------------------
char * GetPhoneGPUNamePointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  return (char *)v0 + 352;
}

// ----------------------------------------------------------------------------
// Function: GetPhoneIDPointer  (binary VA: 0x4e2d30)
// Original: GetPhoneIDPointer
// ----------------------------------------------------------------------------
char * GetPhoneIDPointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  return (char *)v0 + 308;
}

// ----------------------------------------------------------------------------
// Function: GetPhoneCPUFreqPointer  (binary VA: 0x4e2d90)
// Original: GetPhoneCPUFreqPointer
// ----------------------------------------------------------------------------
char * GetPhoneCPUFreqPointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  return (char *)v0 + 348;
}

// ----------------------------------------------------------------------------
// Function: GetSDFolderPathPointer  (binary VA: 0x4e2df0)
// Original: GetSDFolderPathPointer
// ----------------------------------------------------------------------------
char * GetSDFolderPathPointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  return (char *)v0 + 392;
}

// ----------------------------------------------------------------------------
// Function: Config  (binary VA: 0x4e2e50)
// Original: Config
// ----------------------------------------------------------------------------
void Config()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(v0);
  }
  CGameConfig::Config(v0);
}

// ----------------------------------------------------------------------------
// Function: sub_4E2EB0  (binary VA: 0x4e2eb0)
// Original: sub_4E2EB0
// ----------------------------------------------------------------------------
int sub_4E2EB0()
{
  sub_1900D70(&unk_20D1617);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20D1617, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: nativeStart  (binary VA: 0x4e3050)
// Original: nativeStart
// ----------------------------------------------------------------------------
int nativeStart()
{
  uint32_t *v0;

  drmDebugLog(" start lock test");
  if ( lockPointer3 == nullptr )
    exit(0);
  v0 = (uint32_t *)malloc(4 * *lockPointer3);
  *v0 = 1;
  lockPointer4 = (uint32_t)(uintptr_t)(v0);
  drmDebugLog(" calling method");
  G4_VCALL<void>(mEnv, 564, LicenseCheck, startGame);
  return drmDebugLog("done ");
}

// ----------------------------------------------------------------------------
// Function: nativeGetSdFolderPathL  (binary VA: 0x4e3110)
// Original: nativeGetSdFolderPathL
// ----------------------------------------------------------------------------
const char * nativeGetSdFolderPathL()
{
  const char *result;
  int v1;
  const char *v2;

  result = (const char *)getSDFolder;
  if ( getSDFolder != 0 )
  {
    v1 = G4_VCALL<int>(mEnv, 456, LicenseCheck, getSDFolder);
    result = (const char *)G4_VCALL<int>(mEnv, 676, v1, 0);
    v2 = result;
    if ( result != nullptr )
    {
      strcpy(sd_folder, result);
      return (const char *)G4_VCALL<int>(mEnv, 680, v1, v2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: drmDebugLog  (binary VA: 0x4e39b0)
// Original: drmDebugLog
// ----------------------------------------------------------------------------
void drmDebugLog()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: getString  (binary VA: 0x4e39c0)
// Original: getString
// ----------------------------------------------------------------------------
int getString(int a1)
{
  int result;

  drmDebugLog();
  switch ( a1 )
  {
    case 0:
      result = G4_VCALL<int>(mEnv, 668, "GDRMPolicy");
      break;
    case 1:
      result = G4_VCALL<int>(mEnv, 668, "lastResponse");
      break;
    case 2:
      result = G4_VCALL<int>(mEnv, 668, "validityTimestamp");
      break;
    case 3:
      result = G4_VCALL<int>(mEnv, 668, "retryUntil");
      break;
    case 4:
      result = G4_VCALL<int>(mEnv, 668, "maxRetries");
      break;
    case 5:
      result = G4_VCALL<int>(mEnv, 668, "retryCount");
      break;
    case 6:
      result = G4_VCALL<int>(mEnv, 668, "RunFirst");
      break;
    case 7:
      result = G4_VCALL<int>(mEnv, 668, "gdrm_r_time");
      break;
    case 8:
      result = G4_VCALL<int>(mEnv, 668, "gdrm_l_time");
      break;
    default:
      result = G4_VCALL<int>(mEnv, 668, "error");
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: updatePrefs  (binary VA: 0x4e3e60)
// Original: updatePrefs
// ----------------------------------------------------------------------------
void updatePrefs(int a1, int a2)
{
  int v2;
  int v3;
  void (*v4)(uint32_t, uint32_t, uint32_t, int, int, int, int);
  int v5;
  void (*v6)(uint32_t, uint32_t, uint32_t, int, int, int);
  int v7;
  int String;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef void (*_g4_t_v19)(uint32_t, uint32_t, uint32_t, int, char *, int, int);
  typedef void (*_g4_t_v20)(uint32_t, uint32_t, uint32_t, int, char *, int, int);
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef void (*_g4_t_v28)(uint32_t, uint32_t, uint32_t, int, int, int, int);
  typedef void (*_g4_t_v29)(uint32_t, uint32_t, uint32_t, int, int, int, int);
  typedef void (*_g4_t_v30)(uint32_t, uint32_t, uint32_t, int, int, int, int);
  typedef void (*_g4_t_v31)(uint32_t, uint32_t, uint32_t, int, int, int, int);
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef char _g4_t_s[128];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v21)) > _g4_s5 ? (20u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v23)) > _g4_s7 ? (24u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v24)) > _g4_s8 ? (24u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v25)) > _g4_s9 ? (24u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v26)) > _g4_s10 ? (28u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v27)) > _g4_s11 ? (28u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v28)) > _g4_s12 ? (36u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v29)) > _g4_s13 ? (36u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v30)) > _g4_s14 ? (36u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v31)) > _g4_s15 ? (36u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v32)) > _g4_s16 ? (40u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v33)) > _g4_s17 ? (40u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v34)) > _g4_s18 ? (40u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v35)) > _g4_s19 ? (40u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v36)) > _g4_s20 ? (44u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v37)) > _g4_s21 ? (44u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v38)) > _g4_s22 ? (44u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v39)) > _g4_s23 ? (44u + sizeof(_g4_t_v39)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_s)) > _g4_s24 ? (60u + sizeof(_g4_t_s)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 60u);

  drmDebugLog();
  v17 = mEnv;
  if ( a2 == 1 )
  {
    sprintf(s, "%d", LODWORD(dataValues[1]), HIDWORD(dataValues[1]));
    v6 = *(void (**)(uint32_t, uint32_t, uint32_t, int, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564);
    v7 = G4_VCALL<int>(v17, 668, s);
    String = getString(1);
    v6(mEnv, Policy, updatePrefsID, String, v7, 1);
    v28 = *(void (**)(uint32_t, uint32_t, uint32_t, int, int, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564);
    v32 = dataValues[2];
    v36 = HIDWORD(dataValues[2]);
    v9 = getString(2);
    v28(mEnv, Policy, updatePrefs2ID, v9, v32, v36, 2);
    v29 = *(void (**)(uint32_t, uint32_t, uint32_t, int, int, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564);
    v33 = dataValues[3];
    v37 = HIDWORD(dataValues[3]);
    v10 = getString(3);
    v29(mEnv, Policy, updatePrefs2ID, v10, v33, v37, 3);
    v30 = *(void (**)(uint32_t, uint32_t, uint32_t, int, int, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564);
    v34 = dataValues[4];
    v38 = HIDWORD(dataValues[4]);
    v11 = getString(4);
    v30(mEnv, Policy, updatePrefs2ID, v11, v34, v38, 4);
    v31 = *(void (**)(uint32_t, uint32_t, uint32_t, int, int, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564);
    v35 = dataValues[5];
    v39 = HIDWORD(dataValues[5]);
    v12 = getString(5);
    v31(mEnv, Policy, updatePrefs2ID, v12, v35, v39, 5);
    sprintf(s, "%d", LODWORD(dataValues[6]), HIDWORD(dataValues[6]));
    v23 = *(char **)(*(uint32_t *)(uintptr_t)mEnv + 564);
    v16 = G4_VCALL<int>(v17, 668, s);
    v13 = getString(6);
    ((void (*)(uint32_t, uint32_t, uint32_t, int, int, int))v23)(mEnv, Policy, updatePrefsID, v13, v16, 6);
    v24 = (char *)dataValues[7];
    v26 = HIDWORD(dataValues[7]);
    v19 = *(void (**)(uint32_t, uint32_t, uint32_t, int, char *, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564);
    v14 = getString(7);
    v19(mEnv, Policy, updatePrefs2ID, v14, v24, v26, 7);
    v25 = (char *)dataValues[8];
    v27 = HIDWORD(dataValues[8]);
    v20 = *(void (**)(uint32_t, uint32_t, uint32_t, int, char *, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564);
    v15 = getString(8);
    v20(mEnv, Policy, updatePrefs2ID, v15, v25, v27, 8);
  }
  else
  {
    drmDebugLog();
    if ( a1 == 6 || a1 == 1 )
    {
      sprintf(s, "%d", LODWORD(dataValues[a1]), HIDWORD(dataValues[a1]));
      v22 = *(char **)(*(uint32_t *)(uintptr_t)mEnv + 564);
      v2 = G4_VCALL<int>(v17, 668, s);
      v3 = getString(a1);
      ((void (*)(uint32_t, uint32_t, uint32_t, int, int, int))v22)(mEnv, Policy, updatePrefsID, v3, v2, a1);
    }
    else
    {
      v4 = *(void (**)(uint32_t, uint32_t, uint32_t, int, int, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564);
      v18 = dataValues[a1];
      v21 = HIDWORD(dataValues[a1]);
      v5 = getString(a1);
      v4(mEnv, Policy, updatePrefs2ID, v5, v18, v21, a1);
    }
    drmDebugLog();
  }
}

// ----------------------------------------------------------------------------
// Function: updateTime  (binary VA: 0x4e4350)
// Original: updateTime
// ----------------------------------------------------------------------------
void updateTime(int64_t a1)
{
  bool v1;
  int v2;
  int v3;

  drmDebugLog();
  if ( dataValues[7] == 0 )
  {
    drmDebugLog();
    dataValues[7] = a1;
    dataValues[8] = a1;
LABEL_5:
    drmDebugLog();
    dataValues[8] = a1;
    goto LABEL_4;
  }
  if ( a1 <= dataValues[8] )
    goto LABEL_5;
  drmDebugLog();
  v1 = (unsigned int)a1 < LODWORD(dataValues[8]);
  v2 = a1 - LODWORD(dataValues[8]);
  LODWORD(dataValues[8]) = a1;
  v3 = HIDWORD(a1) - (v1 + HIDWORD(dataValues[8]));
  v1 = __CFADD__(v2, dataValues[7]);
  LODWORD(dataValues[7]) += v2;
  HIDWORD(dataValues[8]) = HIDWORD(a1);
  HIDWORD(dataValues[7]) += v3 + v1;
LABEL_4:
  updatePrefs(7, 0);
  updatePrefs(8, 0);
}

// ----------------------------------------------------------------------------
// Function: nativeGetPhoneCPUPart  (binary VA: 0x4e4920)
// Original: nativeGetPhoneCPUPart
// ----------------------------------------------------------------------------
int nativeGetPhoneCPUPart()
{
  int result;
  int v1;
  const char *src;
  char *dest;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D1734 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1734);
    result = G4_VCALL<int>(mEnv, 676, v1, 0);
    src = (const char *)result;
    if ( result != 0 )
    {
      dest = GetPhoneCPUPartPointer();
      strcpy(dest, src);
      return G4_VCALL<int>(mEnv, 680, v1, src);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetPhoneCPUArch  (binary VA: 0x4e49d0)
// Original: nativeGetPhoneCPUArch
// ----------------------------------------------------------------------------
int nativeGetPhoneCPUArch()
{
  int result;
  int v1;
  const char *src;
  char *dest;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D1730 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1730);
    result = G4_VCALL<int>(mEnv, 676, v1, 0);
    src = (const char *)result;
    if ( result != 0 )
    {
      dest = GetPhoneCPUArchPointer();
      strcpy(dest, src);
      return G4_VCALL<int>(mEnv, 680, v1, src);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: IsXperia  (binary VA: 0x4e4ac0)
// Original: IsXperia
// ----------------------------------------------------------------------------
int IsXperia()
{
  int result;

  result = 0;
  if ( dword_20D1640 != 0 )
  {
    mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
    return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D1640);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: getFirmwareApi  (binary VA: 0x4e4b60)
// Original: getFirmwareApi
// ----------------------------------------------------------------------------
int getFirmwareApi()
{
  if ( dword_20D1660 == 0 )
    return -1;
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D1660);
}

// ----------------------------------------------------------------------------
// Function: getPhoneFirmware  (binary VA: 0x4e4bc0)
// Original: getPhoneFirmware
// ----------------------------------------------------------------------------
char * getPhoneFirmware(char *dest)
{
  char *result;
  int v2;
  const char *src;

  result = (char *)dword_20D1670;
  if ( dword_20D1670 != 0 )
  {
    mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
    v2 = G4_VCALL<int>(mEnv, 456, dword_20D1644, dword_20D1670);
    src = (const char *)G4_VCALL<int>(mEnv, 676, v2, 0);
    return strcpy(dest, src);
  }
  else
  {
    strcpy(dest, "undef function");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: getPhoneModel  (binary VA: 0x4e4c70)
// Original: getPhoneModel
// ----------------------------------------------------------------------------
char * getPhoneModel(char *dest)
{
  char *result;
  int v2;
  const char *src;

  result = (char *)dword_20D1680;
  if ( dword_20D1680 != 0 )
  {
    mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
    v2 = G4_VCALL<int>(mEnv, 456, dword_20D1644, dword_20D1680);
    src = (const char *)G4_VCALL<int>(mEnv, 676, v2, 0);
    return strcpy(dest, src);
  }
  else
  {
    strcpy(dest, "undef function");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: getFolder  (binary VA: 0x4e4d20)
// Original: getFolder
// ----------------------------------------------------------------------------
char * getFolder(char *dest)
{
  char *result;
  int v2;
  const char *src;

  result = (char *)dword_20D1690;
  if ( dword_20D1690 != 0 )
  {
    mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
    v2 = G4_VCALL<int>(mEnv, 456, dword_20D1644, dword_20D1690);
    src = (const char *)G4_VCALL<int>(mEnv, 676, v2, 0);
    return strcpy(dest, src);
  }
  else
  {
    strcpy(dest, "undef function");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_startProfiling  (binary VA: 0x4e4dd0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_startProfiling
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_startProfiling()
{
  return startCProfiling();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_endProfiling  (binary VA: 0x4e4df0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_endProfiling
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_Game_endProfiling()
{
  endCProfiling();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_InitNativeAssetManager  (binary VA: 0x4e4e10)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_InitNativeAssetManager
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_InitNativeAssetManager(int a1, int a2, int a3)
{
  int v3;

  v3 = (int)(uintptr_t)AAssetManager_fromJava((void *)(uintptr_t)a1, (void *)(uintptr_t)a3);
  return sub_871650(v3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnHDMI  (binary VA: 0x4e4e50)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnHDMI
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnHDMI()
{
  appNativeOnHDMI();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnTouch  (binary VA: 0x4e4e80)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnTouch
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnTouch(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return appOnTouch(a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOrientation  (binary VA: 0x4e4ec0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOrientation
// ----------------------------------------------------------------------------
uint32_t * Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOrientation(int a1, int a2, int a3, int a4, int a5)
{
  return appOnOrientation(a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeAccelerator  (binary VA: 0x4e4f00)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeAccelerator
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeAccelerator(int a1, int a2, int a3, int a4, int a5)
{
  return appOnAccelerator(a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeCanInterrupt  (binary VA: 0x4e4f40)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeCanInterrupt
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeCanInterrupt()
{
  return m_TimeCallbackFinished;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeCheckInit  (binary VA: 0x4e4f60)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeCheckInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeCheckInit()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeGetAUTLanguage  (binary VA: 0x4e4f70)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeGetAUTLanguage
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeGetAUTLanguage()
{
  return appAutLanguage();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeShortcutToScreens  (binary VA: 0x4e4f90)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeShortcutToScreens
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeShortcutToScreens(int a1, int a2, int a3)
{
  const char *s;
  char *v4;

  s = (const char *)G4_VCALL<int>(a1, 676, a3, 0);
  v4 = strdup(s);
  return appShortcutToScreens(v4);
}

// ----------------------------------------------------------------------------
// Function: nativeClearInviteFaceFriends  (binary VA: 0x4e4fe0)
// Original: nativeClearInviteFaceFriends
// ----------------------------------------------------------------------------
int nativeClearInviteFaceFriends()
{
  int CurrentJNIEnv;

  CurrentJNIEnv = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(CurrentJNIEnv, 564, dword_20D1644, dword_20D16F8);
}

// ----------------------------------------------------------------------------
// Function: nativeAddInviteFaceFriends  (binary VA: 0x4e5020)
// Original: nativeAddInviteFaceFriends
// ----------------------------------------------------------------------------
int nativeAddInviteFaceFriends(int a1, int a2, int a3)
{
  int CurrentJNIEnv;
  int v4;
  int v5;
  int v7;

  CurrentJNIEnv = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  v7 = G4_VCALL<int>(CurrentJNIEnv, 668, a1);
  v4 = G4_VCALL<int>(CurrentJNIEnv, 668, a2);
  v5 = G4_VCALL<int>(CurrentJNIEnv, 668, a3);
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  (*(void (**)(int, int, int, int, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564))(
    CurrentJNIEnv,
    dword_20D1644,
    dword_20D16FC,
    v7,
    v4,
    v5);
  G4_VCALL<void>(CurrentJNIEnv, 92, v7);
  G4_VCALL<void>(CurrentJNIEnv, 92, v4);
  return G4_VCALL<int>(CurrentJNIEnv, 92, v5);
}

// ----------------------------------------------------------------------------
// Function: nativeCreateFacebookFriendList  (binary VA: 0x4e5100)
// Original: nativeCreateFacebookFriendList
// ----------------------------------------------------------------------------
int nativeCreateFacebookFriendList()
{
  int result;
  int v1;
  int FacebookFriendValue;
  int v3;
  int v4;
  int v5;
  int v6;

  appGetListFriendsSize();
  nativeClearInviteFaceFriends();
  result = appGetListFriendsSize();
  v6 = result;
  if ( result > 0 )
  {
    v1 = 0;
    do
    {
      FacebookFriendValue = appGetFacebookFriendValue(v1, 0);
      v3 = appGetFacebookFriendValue(v1, 1);
      v5 = v1++;
      v4 = appGetFacebookFriendValue(v5, 2);
      result = nativeAddInviteFaceFriends(FacebookFriendValue, v3, v4);
    }
    while ( v1 != v6 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeRateMenuDialog  (binary VA: 0x4e5190)
// Original: nativeRateMenuDialog
// ----------------------------------------------------------------------------
int nativeRateMenuDialog(int a1, int a2, int a3, int a4)
{
  int CurrentJNIEnv;
  int v5;
  int v6;
  int v8;
  int v9;

  CurrentJNIEnv = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  v9 = G4_VCALL<int>(CurrentJNIEnv, 668, a1);
  v5 = G4_VCALL<int>(CurrentJNIEnv, 668, a2);
  v6 = G4_VCALL<int>(CurrentJNIEnv, 668, a3);
  v8 = G4_VCALL<int>(CurrentJNIEnv, 668, a4);
  (*(void (**)(int, int, int, int, int, int, int))(*(uint32_t *)(uintptr_t)mEnv + 564))(
    CurrentJNIEnv,
    dword_20D1644,
    dword_20D1790,
    v9,
    v5,
    v6,
    v8);
  G4_VCALL<void>(CurrentJNIEnv, 92, v9);
  G4_VCALL<void>(CurrentJNIEnv, 92, v5);
  G4_VCALL<void>(CurrentJNIEnv, 92, v6);
  return G4_VCALL<int>(CurrentJNIEnv, 92, v8);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_validateSecondElapsed  (binary VA: 0x4e52a0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_validateSecondElapsed
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_validateSecondElapsed(int a1, int a2, int a3)
{
  return appValideSecondElapsed(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_setInternetState  (binary VA: 0x4e52d0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_setInternetState
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_setInternetState(int a1, int a2, int a3)
{
  return appSetInternetState(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeRateMenuAnswerCallback  (binary VA: 0x4e5300)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeRateMenuAnswerCallback
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeRateMenuAnswerCallback(int a1, int a2, int a3)
{
  return appAndroidMenuAnswerCallback(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeGetFBFriendsNotInFed  (binary VA: 0x4e5330)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeGetFBFriendsNotInFed
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeGetFBFriendsNotInFed()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return 0;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeGetInfo  (binary VA: 0x4e5360)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeGetInfo
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeGetInfo()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeMogaIsConnected  (binary VA: 0x4e5370)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeMogaIsConnected
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeMogaIsConnected(int a1, int a2, int a3)
{
  return appMogaIsConnected(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeControllerConnected  (binary VA: 0x4e53a0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeControllerConnected
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeControllerConnected(int a1, int a2, int a3)
{
  return appControllerConnected(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeControllerDisconnected  (binary VA: 0x4e53d0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeControllerDisconnected
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeControllerDisconnected(int a1, int a2, int a3)
{
  return appControllerDisconnected(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeControllerConflict  (binary VA: 0x4e5400)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeControllerConflict
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeControllerConflict(int a1, int a2, int a3)
{
  return appControllerConflict(a3);
}

// ----------------------------------------------------------------------------
// Function: nativeSetCurrentControl  (binary VA: 0x4e5430)
// Original: nativeSetCurrentControl
// ----------------------------------------------------------------------------
int nativeSetCurrentControl()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D16CC, -1, -1);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeWichMogaIsConnected  (binary VA: 0x4e5490)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeWichMogaIsConnected
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeWichMogaIsConnected(int a1, int a2, int a3)
{
  return appWichMogaIsConnected(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnAddFriend  (binary VA: 0x4e54c0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnAddFriend
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnAddFriend(int a1, int a2, int a3)
{
  const char *s;
  char *v4;

  s = (const char *)G4_VCALL<int>(a1, 676, a3, 0);
  v4 = strdup(s);
  return appAddFriend(v4);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnKeyDown  (binary VA: 0x4e5510)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnKeyDown
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnKeyDown(int a1, int a2, int a3, int a4)
{
  return appOnKeyDown(a3, a4);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnKeyUp  (binary VA: 0x4e5540)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnKeyUp
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeOnKeyUp(int a1, int a2, int a3, int a4)
{
  return appOnKeyUp(a3, a4);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeJoyPadMove  (binary VA: 0x4e5570)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeJoyPadMove
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeJoyPadMove(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return appNativeJoyPadMove(a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeCameraJoyPad  (binary VA: 0x4e55b0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeCameraJoyPad
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeCameraJoyPad()
{
  return appNativeCameraJoyPad();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativePopUpCancel  (binary VA: 0x4e55e0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativePopUpCancel
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_Game_nativePopUpCancel()
{
  appOnPopUpCancel();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativePopUpLater  (binary VA: 0x4e5600)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativePopUpLater
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_Game_nativePopUpLater()
{
  appOnPopUpLater();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeAddReward  (binary VA: 0x4e5620)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeAddReward
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeAddReward(int a1, int a2, int a3)
{
  return appAddReward(a3);
}

// ----------------------------------------------------------------------------
// Function: nativeSendAppBackground  (binary VA: 0x4e5650)
// Original: nativeSendAppBackground
// ----------------------------------------------------------------------------
int nativeSendAppBackground()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D169C);
}

// ----------------------------------------------------------------------------
// Function: nativeExit  (binary VA: 0x4e56a0)
// Original: nativeExit
// ----------------------------------------------------------------------------
int nativeExit()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D16A0);
}

// ----------------------------------------------------------------------------
// Function: nativeRestart  (binary VA: 0x4e56f0)
// Original: nativeRestart
// ----------------------------------------------------------------------------
int nativeRestart()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D16A4);
}

// ----------------------------------------------------------------------------
// Function: nativeEnableAccelerometer  (binary VA: 0x4e5740)
// Original: nativeEnableAccelerometer
// ----------------------------------------------------------------------------
int nativeEnableAccelerometer(int a1)
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D16A8, a1);
}

// ----------------------------------------------------------------------------
// Function: nativeHasAccelerometer  (binary VA: 0x4e5790)
// Original: nativeHasAccelerometer
// ----------------------------------------------------------------------------
int nativeHasAccelerometer()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D16AC);
}

// ----------------------------------------------------------------------------
// Function: Toast  (binary VA: 0x4e57e0)
// Original: Toast
// ----------------------------------------------------------------------------
int Toast(int a1)
{
  int v1;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  v1 = G4_VCALL<int>(mEnv, 668, a1);
  G4_VCALL<void>(mEnv, 564, dword_20D1644, dword_20D16B0, v1);
  return G4_VCALL<int>(mEnv, 92, v1);
}

// ----------------------------------------------------------------------------
// Function: ShowPlusOne  (binary VA: 0x4e5870)
// Original: ShowPlusOne
// ----------------------------------------------------------------------------
void ShowPlusOne()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: SetEnableOrientation  (binary VA: 0x4e5880)
// Original: SetEnableOrientation
// ----------------------------------------------------------------------------
int SetEnableOrientation(int a1)
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D16B4, a1);
}

// ----------------------------------------------------------------------------
// Function: ResetMessage  (binary VA: 0x4e58d0)
// Original: ResetMessage
// ----------------------------------------------------------------------------
int ResetMessage(int a1, int a2)
{
  int v2;
  int v3;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  v2 = G4_VCALL<int>(mEnv, 668, a1);
  v3 = G4_VCALL<int>(mEnv, 668, a2);
  G4_VCALL<void>(mEnv, 564, dword_20D1644, dword_20D16B8, v2, v3);
  G4_VCALL<void>(mEnv, 92, v2);
  return G4_VCALL<int>(mEnv, 92, v3);
}

// ----------------------------------------------------------------------------
// Function: nativeOpenBrowser  (binary VA: 0x4e5990)
// Original: nativeOpenBrowser
// ----------------------------------------------------------------------------
int nativeOpenBrowser(int a1)
{
  int v1;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  v1 = G4_VCALL<int>(mEnv, 668, a1);
  G4_VCALL<void>(mEnv, 564, dword_20D1644, dword_20D16BC, v1);
  return G4_VCALL<int>(mEnv, 92, v1);
}

// ----------------------------------------------------------------------------
// Function: nativePause  (binary VA: 0x4e5a20)
// Original: nativePause
// ----------------------------------------------------------------------------
int nativePause()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D16C4);
}

// ----------------------------------------------------------------------------
// Function: nativeGetPhoneLanguage  (binary VA: 0x4e5a70)
// Original: nativeGetPhoneLanguage
// ----------------------------------------------------------------------------
int nativeGetPhoneLanguage()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D16C8);
}

// ----------------------------------------------------------------------------
// Function: nativeGetXperiaSlideout  (binary VA: 0x4e5ac0)
// Original: nativeGetXperiaSlideout
// ----------------------------------------------------------------------------
int nativeGetXperiaSlideout()
{
  return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D1694);
}

// ----------------------------------------------------------------------------
// Function: nativeSetXperiaJoypad  (binary VA: 0x4e5b00)
// Original: nativeSetXperiaJoypad
// ----------------------------------------------------------------------------
int nativeSetXperiaJoypad(int a1)
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D1698, a1);
}

// ----------------------------------------------------------------------------
// Function: nativeIsWifiEnabled  (binary VA: 0x4e5b50)
// Original: nativeIsWifiEnabled
// ----------------------------------------------------------------------------
int nativeIsWifiEnabled()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D16C0);
}

// ----------------------------------------------------------------------------
// Function: nativeShowScreen  (binary VA: 0x4e5ba0)
// Original: nativeShowScreen
// ----------------------------------------------------------------------------
int nativeShowScreen(int a1)
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D16D0, a1);
}

// ----------------------------------------------------------------------------
// Function: nativeAddAndroidHit  (binary VA: 0x4e5bf0)
// Original: nativeAddAndroidHit
// ----------------------------------------------------------------------------
int nativeAddAndroidHit(int a1)
{
  int v1;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  v1 = G4_VCALL<int>(mEnv, 668, a1);
  G4_VCALL<void>(mEnv, 564, dword_20D1644, dword_20D16D4, v1);
  return G4_VCALL<int>(mEnv, 92, v1);
}

// ----------------------------------------------------------------------------
// Function: nativeGetHttpResponse  (binary VA: 0x4e5c80)
// Original: nativeGetHttpResponse
// ----------------------------------------------------------------------------
char * nativeGetHttpResponse(int a1)
{
  int v1;
  int v2;
  const char *src;
  char *result;
  char dest[1036];

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  v1 = G4_VCALL<int>(mEnv, 668, a1);
  v2 = G4_VCALL<int>(mEnv, 456, dword_20D1644, dword_20D16D8, v1);
  G4_VCALL<void>(mEnv, 92, v1);
  src = (const char *)G4_VCALL<int>(mEnv, 676, v2, 0);
  result = (char *)&unk_1B15112;
  if ( src != nullptr )
  {
    strcpy(dest, src);
    G4_VCALL<void>(mEnv, 680, v2, src);
    return dest;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeHasAnyInternetConnection  (binary VA: 0x4e5d80)
// Original: nativeHasAnyInternetConnection
// ----------------------------------------------------------------------------
int nativeHasAnyInternetConnection()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D16DC);
}

// ----------------------------------------------------------------------------
// Function: nativeHasInternetViaWifi  (binary VA: 0x4e5dd0)
// Original: nativeHasInternetViaWifi
// ----------------------------------------------------------------------------
int nativeHasInternetViaWifi()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D16E0);
}

// ----------------------------------------------------------------------------
// Function: nativeHasInternetViaMobile  (binary VA: 0x4e5e20)
// Original: nativeHasInternetViaMobile
// ----------------------------------------------------------------------------
int nativeHasInternetViaMobile()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D16E4);
}

// ----------------------------------------------------------------------------
// Function: nativeGetControllerName  (binary VA: 0x4e5e70)
// Original: nativeGetControllerName
// ----------------------------------------------------------------------------
char * nativeGetControllerName()
{
  char *result;
  int v1;
  const char *src;
  char dest[212];

  result = (char *)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)(result);
  if ( dword_20D1744 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1744);
    src = (const char *)G4_VCALL<int>(mEnv, 676, v1, 0);
    result = (char *)&unk_1B15112;
    if ( src != nullptr )
    {
      strcpy(dest, src);
      G4_VCALL<void>(mEnv, 680, v1, src);
      return dest;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetControllerNumber  (binary VA: 0x4e5f60)
// Original: nativeGetControllerNumber
// ----------------------------------------------------------------------------
int nativeGetControllerNumber()
{
  int CurrentJNIEnv;
  int result;

  CurrentJNIEnv = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = CurrentJNIEnv;
  result = 0;
  if ( dword_20D171C != 0 )
    return G4_VCALL<int>(CurrentJNIEnv, 516, dword_20D1644, dword_20D1748);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetPhoneRegionFormat  (binary VA: 0x4e5fb0)
// Original: nativeGetPhoneRegionFormat
// ----------------------------------------------------------------------------
char * nativeGetPhoneRegionFormat()
{
  char *result;
  int v1;
  const char *src;
  char dest[212];

  result = (char *)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)(result);
  if ( dword_20D16EC != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D16EC);
    src = (const char *)G4_VCALL<int>(mEnv, 676, v1, 0);
    result = (char *)&unk_1B15112;
    if ( src != nullptr )
    {
      strcpy(dest, src);
      G4_VCALL<void>(mEnv, 680, v1, src);
      return dest;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeShowInviteFaceFriends  (binary VA: 0x4e6240)
// Original: nativeShowInviteFaceFriends
// ----------------------------------------------------------------------------
int nativeShowInviteFaceFriends(int a1, int a2, int a3)
{
  int v3;
  int v4;

  nativeCreateFacebookFriendList();
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  v3 = G4_VCALL<int>(mEnv, 668, a2);
  v4 = G4_VCALL<int>(mEnv, 668, a3);
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D16F4, a1, v3, v4);
}

// ----------------------------------------------------------------------------
// Function: nativelaunchIGP  (binary VA: 0x4e62e0)
// Original: nativelaunchIGP
// ----------------------------------------------------------------------------
int nativelaunchIGP(int a1)
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D1704, a1);
}

// ----------------------------------------------------------------------------
// Function: nativeSetIsUserPau  (binary VA: 0x4e63e0)
// Original: nativeSetIsUserPau
// ----------------------------------------------------------------------------
int nativeSetIsUserPau(int a1, int a2)
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D1708, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: nativeLaunchWelcomeScr  (binary VA: 0x4e6440)
// Original: nativeLaunchWelcomeScr
// ----------------------------------------------------------------------------
int nativeLaunchWelcomeScr(int a1)
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D170C, a1);
}

// ----------------------------------------------------------------------------
// Function: nativeCloseWelcomeScr  (binary VA: 0x4e6490)
// Original: nativeCloseWelcomeScr
// ----------------------------------------------------------------------------
int nativeCloseWelcomeScr()
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D1710);
}

// ----------------------------------------------------------------------------
// Function: nativeLanguageWelcomeScr  (binary VA: 0x4e64e0)
// Original: nativeLanguageWelcomeScr
// ----------------------------------------------------------------------------
int nativeLanguageWelcomeScr(int a1)
{
  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D1714, a1);
}

// ----------------------------------------------------------------------------
// Function: nativeGetCurrentTime  (binary VA: 0x4e6530)
// Original: nativeGetCurrentTime
// ----------------------------------------------------------------------------
int nativeGetCurrentTime()
{
  int CurrentJNIEnv;
  int result;

  CurrentJNIEnv = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = CurrentJNIEnv;
  result = 0;
  if ( dword_20D1718 != 0 )
    return G4_VCALL<int>(CurrentJNIEnv, 528, dword_20D1644, dword_20D1718);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetTextureFormat  (binary VA: 0x4e6580)
// Original: nativeGetTextureFormat
// ----------------------------------------------------------------------------
int nativeGetTextureFormat()
{
  int CurrentJNIEnv;
  int result;

  CurrentJNIEnv = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = CurrentJNIEnv;
  result = 0;
  if ( dword_20D171C != 0 )
    return G4_VCALL<int>(CurrentJNIEnv, 516, dword_20D1644, dword_20D171C);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeKeepScreenOn  (binary VA: 0x4e65d0)
// Original: nativeKeepScreenOn
// ----------------------------------------------------------------------------
bool nativeKeepScreenOn(int a1)
{
  bool result;

  result = false;
  if ( dword_20D17A0 != a1 )
  {
    dword_20D17A0 = a1;
    mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
    return G4_VCALL<uint8_t>(mEnv, 468, dword_20D1644, dword_20D1740, a1) == 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetPhoneManufacturer  (binary VA: 0x4e6640)
// Original: nativeGetPhoneManufacturer
// ----------------------------------------------------------------------------
int nativeGetPhoneManufacturer()
{
  int result;
  int v1;
  const char *src;
  char *dest;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D1728 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1728);
    result = G4_VCALL<int>(mEnv, 676, v1, 0);
    src = (const char *)result;
    if ( result != 0 )
    {
      GetPhoneManufacturerPointer();
      dest = GetPhoneManufacturerPointer();
      strcpy(dest, src);
      return G4_VCALL<int>(mEnv, 680, v1, src);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetPhoneModel  (binary VA: 0x4e66f0)
// Original: nativeGetPhoneModel
// ----------------------------------------------------------------------------
int nativeGetPhoneModel()
{
  int result;
  int v1;
  const char *src;
  char *dest;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D1680 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1680);
    result = G4_VCALL<int>(mEnv, 676, v1, 0);
    src = (const char *)result;
    if ( result != 0 )
    {
      dest = GetPhoneModelPointer();
      strcpy(dest, src);
      return G4_VCALL<int>(mEnv, 680, v1, src);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetPhoneCPUName  (binary VA: 0x4e67a0)
// Original: nativeGetPhoneCPUName
// ----------------------------------------------------------------------------
int nativeGetPhoneCPUName()
{
  int result;
  int v1;
  const char *src;
  char *dest;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D172C != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D172C);
    result = G4_VCALL<int>(mEnv, 676, v1, 0);
    src = (const char *)result;
    if ( result != 0 )
    {
      dest = GetPhoneCPUNamePointer();
      strcpy(dest, src);
      return G4_VCALL<int>(mEnv, 680, v1, src);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetSdFolderPath  (binary VA: 0x4e6850)
// Original: nativeGetSdFolderPath
// ----------------------------------------------------------------------------
int nativeGetSdFolderPath()
{
  int result;
  int v1;
  const char *src;
  char *dest;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D1690 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1690);
    result = G4_VCALL<int>(mEnv, 676, v1, 0);
    src = (const char *)result;
    if ( result != 0 )
    {
      dest = GetSDFolderPathPointer();
      strcpy(dest, src);
      return G4_VCALL<int>(mEnv, 680, v1, src);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetPhoneGPUName  (binary VA: 0x4e6900)
// Original: nativeGetPhoneGPUName
// ----------------------------------------------------------------------------
int nativeGetPhoneGPUName()
{
  int result;
  int v1;
  const char *src;
  char *dest;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D173C != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D173C);
    result = G4_VCALL<int>(mEnv, 676, v1, 0);
    src = (const char *)result;
    if ( result != 0 )
    {
      dest = GetPhoneGPUNamePointer();
      strcpy(dest, src);
      return G4_VCALL<int>(mEnv, 680, v1, src);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetPhoneCPUFreq  (binary VA: 0x4e69b0)
// Original: nativeGetPhoneCPUFreq
// ----------------------------------------------------------------------------
long double nativeGetPhoneCPUFreq()
{
  char *PhoneCPUFreqPointer;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  if ( dword_20D1738 != 0 )
  {
    PhoneCPUFreqPointer = GetPhoneCPUFreqPointer();
    *(float *)PhoneCPUFreqPointer = G4_VCALL<float>(
                                      mEnv,
                                      540,
                                      dword_20D1644,
                                      dword_20D1738);
  }
  return 0.0;
}

// ----------------------------------------------------------------------------
// Function: nativeReloadInfo  (binary VA: 0x4e6a30)
// Original: nativeReloadInfo
// ----------------------------------------------------------------------------
char * nativeReloadInfo()
{
  double v0; // xmm0_8
  char s[32];

  nativeGetPhoneManufacturer();
  nativeGetPhoneModel();
  nativeGetPhoneCPUName();
  nativeGetPhoneCPUFreq();
  nativeGetPhoneCPUArch();
  nativeGetPhoneCPUPart();
  nativeGetPhoneGPUName();
  nativeGetSdFolderPath();
  GetPhoneManufacturerPointer();
  GetPhoneModelPointer();
  GetPhoneDevicePointer();
  GetPhoneCPUNamePointer();
  GetPhoneCPUArchPointer();
  GetPhoneCPUPartPointer();
  v0 = *(float *)GetPhoneCPUFreqPointer();
  sprintf(s, "%f", v0);
  GetPhoneGPUNamePointer();
  return GetSDFolderPathPointer();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeInitt  (binary VA: 0x4e6ad0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeInitt
// ----------------------------------------------------------------------------
char * Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeInitt(int a1, int a2)
{
  int v2;
  const char *s;
  size_t v4;
  double v5; // xmm0_8
  char v7[48];

  mEnv = a1;
  dword_20D1644 = G4_VCALL<int>(a1, 84, a2);
  dword_20D1694 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetXperiaSlideout", "()I");
  dword_20D1698 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "SetXperiaJoypad", "(I)V");
  dword_20D169C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Restart", "()V");
  dword_20D16A0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Exit", "()V");
  dword_20D16A4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Restart", "()V");
  dword_20D16A8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "enableAccelerometer", "(I)V");
  dword_20D16AC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "hasAccelerometer", "()I");
  dword_20D16B0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Restart", "()V");
  dword_20D16B4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "setEnableOrientation", "(I)V");
  dword_20D16B8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "ResetMessage", "(Ljava/lang/String;Ljava/lang/String;)V");
  dword_20D16BC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "openBrowser", "(Ljava/lang/String;)V");
  dword_20D16C0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Restart", "()V");
  dword_20D16C4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Restart", "()V");
  dword_20D16C8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneLanguage", "()I");
  dword_20D16CC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "setCurrentControl", "(II)V");
  dword_20D16D0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "ShowScreen", "(I)V");
  dword_20D16D4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "addAndroidHit", "(Ljava/lang/String;)V");
  dword_20D16D8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getHttpResponse", "(Ljava/lang/String;)Ljava/lang/String;");
  dword_20D16DC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Restart", "()V");
  dword_20D16E0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Restart", "()V");
  dword_20D16E4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "hasInternetViaMobile", "()I");
  dword_20D16E8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getIdentifier", "()Ljava/lang/String;");
  dword_20D16EC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneRegionFormat", "()Ljava/lang/String;");
  dword_20D16F0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getMac", "()Ljava/lang/String;");
  dword_20D16F4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showInviteFaceFriends", "(ILjava/lang/String;Ljava/lang/String;)V");
  dword_20D16F8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "clearInviteFaceFriends_s", "()V");
  dword_20D16FC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "addInviteFaceFriends", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  dword_20D1700 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getManufacture", "()I");
  dword_20D1704 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "launchIGP", "(I)V");
  dword_20D1708 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "setIsUserPau", "(II)V");
  dword_20D170C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "launchWelcomeScr", "(I)V");
  dword_20D1710 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "closeWelcomeScr", "()V");
  dword_20D1714 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "languageWelcomeScr", "(I)V");
  dword_20D1718 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetCurrentTime", "()J");
  dword_20D171C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetTextureFormat", "()I");
  dword_20D1720 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getIdentifier", "()Ljava/lang/String;");
  dword_20D1724 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "PrintDebug", "(Ljava/lang/String;)V");
  dword_20D1728 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneManufacturer", "()Ljava/lang/String;");
  dword_20D1680 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneModel", "()Ljava/lang/String;");
  dword_20D172C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneCPUName", "()Ljava/lang/String;");
  dword_20D1730 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneCPUArch", "()Ljava/lang/String;");
  dword_20D1734 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneCPUPart", "()Ljava/lang/String;");
  dword_20D1738 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneCPUFreq", "()F");
  dword_20D173C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneGPUName", "()Ljava/lang/String;");
  dword_20D1670 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneFirmware", "()Ljava/lang/String;");
  dword_20D1660 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetFirmwareApi", "()I");
  dword_20D1650 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "isRooted", "()I");
  dword_20D1640 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "isXperia", "()I");
  dword_20D1740 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "keepScreenOn", "(Z)Z");
  dword_20D1690 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getSDFolder", "()Ljava/lang/String;");
  dword_20D1744 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetControllerName", "()Ljava/lang/String;");
  dword_20D1748 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetControllerNumber", "()I");
  dword_20D174C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showForum", "()V");
  dword_20D1750 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showCustomerCare", "()V");
  dword_20D1754 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showCustomerCareWithBANType", "(I)V");
  dword_20D1758 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showNews", "()V");
  dword_20D175C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "InitInGameBrowser", "(I)V");
  dword_20D1760 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "InitInGameBrowserSN", "(ILjava/lang/String;)V");
  dword_20D1768 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "SetGAId", "(Ljava/lang/String;)V");
  dword_20D176C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "SetFBId", "(Ljava/lang/String;)V");
  dword_20D1764 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "RefreshUnreadNewsNumber", "()V");
  dword_20D1770 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "OpenCustomLink", "(Ljava/lang/String;)V");
  dword_20D1774 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "OpenLinkRateGame", "(Ljava/lang/String;I)V");
  dword_20D1778 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getRategameLink", "()Ljava/lang/String;");
  dword_20D177C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getUserAgent", "()Ljava/lang/String;");
  dword_20D1780 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetObbPath", "()Ljava/lang/String;");
  dword_20D1784 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetMainObbName", "()Ljava/lang/String;");
  dword_20D1788 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPatchObbName", "()Ljava/lang/String;");
  dword_20D178C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetExtraObbName", "()Ljava/lang/String;");
  dword_20D1790 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showRateGameDialog", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  dword_20D1794 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getUserAgent", "()Ljava/lang/String;");
  v2 = G4_VCALL<int>(mEnv, 456, dword_20D1644, dword_20D1794);
  s = (const char *)G4_VCALL<int>(mEnv, 676, v2, 0);
  v4 = strlen(s);
  device_user_agent = (uint32_t)(uintptr_t)(malloc(v4 + 1));
  strcpy(device_user_agent, s);
  G4_VCALL<void>(mEnv, 680, v2, s);
  nativeGetPhoneManufacturer();
  nativeGetPhoneModel();
  nativeGetPhoneCPUName();
  nativeGetPhoneCPUArch();
  nativeGetPhoneCPUPart();
  nativeGetPhoneCPUFreq();
  nativeGetPhoneGPUName();
  nativeGetSdFolderPath();
  GetPhoneManufacturerPointer();
  GetPhoneModelPointer();
  GetPhoneCPUNamePointer();
  GetPhoneCPUArchPointer();
  GetPhoneCPUPartPointer();
  v5 = *(float *)GetPhoneCPUFreqPointer();
  sprintf(v7, "%f", v5);
  GetPhoneGPUNamePointer();
  return GetSDFolderPathPointer();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeInit  (binary VA: 0x4e7890)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeInit
// ----------------------------------------------------------------------------
char * Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeInit(int a1, int a2)
{
  int v2;
  const char *s;
  size_t v4;
  double v5; // xmm0_8
  char v7[48];

  mEnv = a1;
  dword_20D1644 = G4_VCALL<int>(a1, 84, a2);
  dword_20D1694 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetXperiaSlideout", "()I");
  dword_20D1698 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "SetXperiaJoypad", "(I)V");
  dword_20D169C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "sendAppToBackground", "()V");
  dword_20D16A0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Exit", "()V");
  dword_20D16A4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Restart", "()V");
  dword_20D16A8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "enableAccelerometer", "(I)V");
  dword_20D16AC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "hasAccelerometer", "()I");
  dword_20D16B0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Toast", "(Ljava/lang/String;)V");
  dword_20D16B4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "setEnableOrientation", "(I)V");
  dword_20D16B8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "ResetMessage", "(Ljava/lang/String;Ljava/lang/String;)V");
  dword_20D16BC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "openBrowser", "(Ljava/lang/String;)V");
  dword_20D16C0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "isWifiEnabled", "()I");
  dword_20D16C4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "Pause", "()V");
  dword_20D16C8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneLanguage", "()I");
  dword_20D16CC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "setCurrentControl", "(II)V");
  dword_20D16D0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "ShowScreen", "(I)V");
  dword_20D16D4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "addAndroidHit", "(Ljava/lang/String;)V");
  dword_20D16D8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getHttpResponse", "(Ljava/lang/String;)Ljava/lang/String;");
  dword_20D16DC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "hasAnyInternetConnection", "()I");
  dword_20D16E0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "hasInternetViaWifi", "()I");
  dword_20D16E4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "hasInternetViaMobile", "()I");
  dword_20D16E8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getIdentifier", "()Ljava/lang/String;");
  dword_20D16EC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneRegionFormat", "()Ljava/lang/String;");
  dword_20D16F0 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getMac", "()Ljava/lang/String;");
  dword_20D16F4 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showInviteFaceFriends", "(ILjava/lang/String;Ljava/lang/String;)V");
  dword_20D16F8 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "clearInviteFaceFriends_s", "()V");
  dword_20D16FC = G4_VCALL<int>(mEnv, 452, dword_20D1644, "addInviteFaceFriends", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  dword_20D1700 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getManufacture", "()I");
  dword_20D1704 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "launchIGP", "(I)V");
  dword_20D1708 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "setIsUserPau", "(II)V");
  dword_20D170C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "launchWelcomeScr", "(I)V");
  dword_20D1710 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "closeWelcomeScr", "()V");
  dword_20D1714 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "languageWelcomeScr", "(I)V");
  dword_20D1718 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetCurrentTime", "()J");
  dword_20D171C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetTextureFormat", "()I");
  dword_20D1720 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getIdentifier", "()Ljava/lang/String;");
  dword_20D1724 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "PrintDebug", "(Ljava/lang/String;)V");
  dword_20D1728 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneManufacturer", "()Ljava/lang/String;");
  dword_20D1680 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneModel", "()Ljava/lang/String;");
  dword_20D172C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneCPUName", "()Ljava/lang/String;");
  dword_20D1730 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneCPUArch", "()Ljava/lang/String;");
  dword_20D1734 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneCPUPart", "()Ljava/lang/String;");
  dword_20D1738 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneCPUFreq", "()F");
  dword_20D173C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneGPUName", "()Ljava/lang/String;");
  dword_20D1670 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPhoneFirmware", "()Ljava/lang/String;");
  dword_20D1660 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetFirmwareApi", "()I");
  dword_20D1650 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "isRooted", "()I");
  dword_20D1640 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "isXperia", "()I");
  dword_20D1740 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "keepScreenOn", "(Z)Z");
  dword_20D1690 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getSDFolder", "()Ljava/lang/String;");
  dword_20D1744 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetControllerName", "()Ljava/lang/String;");
  dword_20D1748 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetControllerNumber", "()I");
  dword_20D174C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showForum", "()V");
  dword_20D1750 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showCustomerCare", "()V");
  dword_20D1754 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showCustomerCareWithBANType", "(I)V");
  dword_20D1758 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showNews", "()V");
  dword_20D175C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "InitInGameBrowser", "(I)V");
  dword_20D1760 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "InitInGameBrowserSN", "(ILjava/lang/String;)V");
  dword_20D1764 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "RefreshUnreadNewsNumber", "()V");
  dword_20D1768 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "SetGAId", "(Ljava/lang/String;)V");
  dword_20D176C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "SetFBId", "(Ljava/lang/String;)V");
  dword_20D1770 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "OpenCustomLink", "(Ljava/lang/String;)V");
  dword_20D1774 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "OpenLinkRateGame", "(Ljava/lang/String;I)V");
  dword_20D1778 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getRategameLink", "()Ljava/lang/String;");
  dword_20D177C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getUserAgent", "()Ljava/lang/String;");
  dword_20D1780 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetObbPath", "()Ljava/lang/String;");
  dword_20D1784 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetMainObbName", "()Ljava/lang/String;");
  dword_20D1788 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetPatchObbName", "()Ljava/lang/String;");
  dword_20D178C = G4_VCALL<int>(mEnv, 452, dword_20D1644, "GetExtraObbName", "()Ljava/lang/String;");
  dword_20D1790 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "showRateGameDialog", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  dword_20D1794 = G4_VCALL<int>(mEnv, 452, dword_20D1644, "getUserAgent", "()Ljava/lang/String;");
  v2 = G4_VCALL<int>(mEnv, 456, dword_20D1644, dword_20D1794);
  s = (const char *)G4_VCALL<int>(mEnv, 676, v2, 0);
  v4 = strlen(s);
  device_user_agent = (uint32_t)(uintptr_t)(malloc(v4 + 1));
  strcpy(device_user_agent, s);
  G4_VCALL<void>(mEnv, 680, v2, s);
  nativeGetPhoneManufacturer();
  nativeGetPhoneModel();
  nativeGetPhoneCPUName();
  nativeGetPhoneCPUArch();
  nativeGetPhoneCPUPart();
  nativeGetPhoneCPUFreq();
  nativeGetPhoneGPUName();
  nativeGetSdFolderPath();
  GetPhoneManufacturerPointer();
  GetPhoneModelPointer();
  GetPhoneCPUNamePointer();
  GetPhoneCPUArchPointer();
  GetPhoneCPUPartPointer();
  v5 = *(float *)GetPhoneCPUFreqPointer();
  sprintf(v7, "%f", v5);
  GetPhoneGPUNamePointer();
  return GetSDFolderPathPointer();
}

// ----------------------------------------------------------------------------
// Function: nativeShowForum  (binary VA: 0x4e8670)
// Original: nativeShowForum
// ----------------------------------------------------------------------------
int nativeShowForum()
{
  int result;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D174C != 0 )
    return G4_VCALL<int>(result, 564, dword_20D1644, dword_20D174C);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeShowCustomerCare  (binary VA: 0x4e86c0)
// Original: nativeShowCustomerCare
// ----------------------------------------------------------------------------
int nativeShowCustomerCare()
{
  int result;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D1750 != 0 )
    return G4_VCALL<int>(result, 564, dword_20D1644, dword_20D1750);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeShowCustomerCareWithBANType  (binary VA: 0x4e8710)
// Original: nativeShowCustomerCareWithBANType
// ----------------------------------------------------------------------------
int nativeShowCustomerCareWithBANType(int a1)
{
  int result;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D1754 != 0 )
    return G4_VCALL<int>(result, 564, dword_20D1644, dword_20D1754, a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeShowNews  (binary VA: 0x4e8770)
// Original: nativeShowNews
// ----------------------------------------------------------------------------
int nativeShowNews()
{
  int result;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D1758 != 0 )
    return G4_VCALL<int>(result, 564, dword_20D1644, dword_20D1758);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeInitInGameBrowser  (binary VA: 0x4e87c0)
// Original: nativeInitInGameBrowser
// ----------------------------------------------------------------------------
int nativeInitInGameBrowser(int a1)
{
  int result;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D175C != 0 )
    return G4_VCALL<int>(result, 564, dword_20D1644, dword_20D175C, a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeSetFBId  (binary VA: 0x4e8820)
// Original: nativeSetFBId
// ----------------------------------------------------------------------------
int nativeSetFBId(int a1)
{
  int result;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  result = G4_VCALL<int>(mEnv, 668, a1);
  if ( dword_20D176C != 0 )
    return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D176C, result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeSetGAId  (binary VA: 0x4e8890)
// Original: nativeSetGAId
// ----------------------------------------------------------------------------
int nativeSetGAId(int a1)
{
  int result;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  result = G4_VCALL<int>(mEnv, 668, a1);
  if ( dword_20D1768 != 0 )
    return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D1768, result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeInitInGameBrowserSN  (binary VA: 0x4e8900)
// Original: nativeInitInGameBrowserSN
// ----------------------------------------------------------------------------
int nativeInitInGameBrowserSN(int a1, int a2)
{
  int result;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  result = G4_VCALL<int>(mEnv, 668, a2);
  if ( dword_20D1760 != 0 )
    return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D1760, a1, result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeOpenCustomLink  (binary VA: 0x4e8970)
// Original: nativeOpenCustomLink
// ----------------------------------------------------------------------------
int nativeOpenCustomLink(int a1)
{
  int result;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  result = G4_VCALL<int>(mEnv, 668, a1);
  if ( dword_20D1770 != 0 )
    return G4_VCALL<int>(mEnv, 564, dword_20D1644, dword_20D1770, result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetReviewLink  (binary VA: 0x4e89e0)
// Original: nativeGetReviewLink
// ----------------------------------------------------------------------------
char * nativeGetReviewLink()
{
  char *result;
  int v1;
  const char *src;
  char dest[52];

  result = (char *)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)(result);
  if ( dword_20D1778 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1778);
    src = (const char *)G4_VCALL<int>(mEnv, 676, v1, 0);
    result = (char *)&unk_1B15112;
    if ( src != nullptr )
    {
      strcpy(dest, src);
      G4_VCALL<void>(mEnv, 680, v1, src);
      return dest;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeOpenReviewLink  (binary VA: 0x4e8ab0)
// Original: nativeOpenReviewLink
// ----------------------------------------------------------------------------
int nativeOpenReviewLink(int a1, int a2)
{
  int v2;

  mEnv = (uint32_t)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  v2 = G4_VCALL<int>(mEnv, 668, a1);
  if ( dword_20D1774 != 0 )
    G4_VCALL<void>(mEnv, 564, dword_20D1644, dword_20D1774, v2, a2);
  return G4_VCALL<int>(mEnv, 92, v2);
}

// ----------------------------------------------------------------------------
// Function: refreshUnreadNewsNumber  (binary VA: 0x4e8b50)
// Original: refreshUnreadNewsNumber
// ----------------------------------------------------------------------------
int refreshUnreadNewsNumber()
{
  int result;

  result = (int)(uintptr_t)(NVThreadGetCurrentJNIEnv());
  mEnv = result;
  if ( dword_20D1764 != 0 )
    return G4_VCALL<int>(result, 564, dword_20D1644, dword_20D1764);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_InGameBrowser_nativeUnreadNewsChangedCallback  (binary VA: 0x4e8ba0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_InGameBrowser_nativeUnreadNewsChangedCallback
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_InGameBrowser_nativeUnreadNewsChangedCallback(int a1, int a2, int a3)
{
  return sub_554700(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_processTouchpadAsPointer  (binary VA: 0x4e8bd0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_processTouchpadAsPointer
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_processTouchpadAsPointer(int a1, int a2, int a3, uint8_t a4)
{
  int v4;
  int v5;
  int v6;

  v4 = G4_VCALL<int>(a1, 24, "android/view/ViewRoot");
  if ( G4_VCALL<uint8_t>(a1, 912) != 0 )
    goto LABEL_6;
  v5 = 0;
  if ( v4 != 0 )
  {
    v6 = G4_VCALL<int>(a1, 132, v4, "setProcessPositionEvents", "(Z)V");
    if ( v6 != 0 )
    {
      v5 = 1;
      G4_VCALL<void>(a1, 244, a3, v6, a4);
      if ( G4_VCALL<uint8_t>(a1, 912) == 0 )
        return v5;
LABEL_6:
      v5 = 0;
      G4_VCALL<void>(a1, 68);
      return v5;
    }
    if ( G4_VCALL<uint8_t>(a1, 912) != 0 )
      G4_VCALL<void>(a1, 68);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: nativeGetObbPath  (binary VA: 0x4e8cd0)
// Original: nativeGetObbPath
// ----------------------------------------------------------------------------
char * nativeGetObbPath(char *dest)
{
  char *result;
  int v2;

  result = (char *)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)(result);
  if ( dword_20D1780 != 0 )
  {
    v2 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1780);
    result = (char *)G4_VCALL<int>(mEnv, 676, v2, 0);
    if ( result != nullptr )
      return strcpy(dest, result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetMainObbName  (binary VA: 0x4e8d50)
// Original: nativeGetMainObbName
// ----------------------------------------------------------------------------
char * nativeGetMainObbName(char *dest)
{
  char *result;
  int v2;

  result = (char *)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)(result);
  if ( dword_20D1784 != 0 )
  {
    v2 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1784);
    result = (char *)G4_VCALL<int>(mEnv, 676, v2, 0);
    if ( result != nullptr )
      return strcpy(dest, result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetPatchObbName  (binary VA: 0x4e8dd0)
// Original: nativeGetPatchObbName
// ----------------------------------------------------------------------------
char * nativeGetPatchObbName(char *dest)
{
  char *result;
  int v2;

  result = (char *)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)(result);
  if ( dword_20D1788 != 0 )
  {
    v2 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1788);
    result = (char *)G4_VCALL<int>(mEnv, 676, v2, 0);
    if ( result != nullptr )
      return strcpy(dest, result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetExtraObbName  (binary VA: 0x4e8e50)
// Original: nativeGetExtraObbName
// ----------------------------------------------------------------------------
char * nativeGetExtraObbName(char *dest)
{
  char *result;
  int v2;

  result = (char *)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)(result);
  if ( dword_20D178C != 0 )
  {
    v2 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D178C);
    result = (char *)G4_VCALL<int>(mEnv, 676, v2, 0);
    if ( result != nullptr )
      return strcpy(dest, result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GameRenderer_nativeInit  (binary VA: 0x4e8ed0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GameRenderer_nativeInit
// ----------------------------------------------------------------------------
uint32_t * GameRenderer_SetWindowDimensions(uint32_t width, uint32_t height)
{
  s_windowWidth = width;
  s_windowHeight = height;
  return &s_windowHeight;
}

uint32_t * Java_com_gameloft_android_GAND_GloftGGSS_GameRenderer_nativeInit(int a1, int a2, int a3, int a4, int a5)
{
  s_windowWidth = a4;
  s_windowHeight = a5;
  return &s_windowHeight;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeXperiaToggleJoysticks  (binary VA: 0x4e8f00)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeXperiaToggleJoysticks
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_Game_nativeXperiaToggleJoysticks(int a1, int a2, int a3)
{
  return XperiaToggleJoysticks(a3);
}

// ----------------------------------------------------------------------------
// Function: NVThreadGetCurrentJNIEnv  (binary VA: 0x4e8f30)
// Original: NVThreadGetCurrentJNIEnv
// ----------------------------------------------------------------------------
void * NVThreadGetCurrentJNIEnv()
{
  return AndroidOS_GetEnv();
}

// ----------------------------------------------------------------------------
// Function: ThreadGetCurrentJNIEnv  (binary VA: 0x4e8f50)
// Original: ThreadGetCurrentJNIEnv
// ----------------------------------------------------------------------------
int ThreadGetCurrentJNIEnv(int *a1, int a2, int a3, int **a4, int a5)
{
  (void)a1; (void)a2; (void)a3; (void)a4; (void)a5;
  void *env = nullptr;
  if ( G4_VCALL<int>(mJavaVM[0], 16, &env, 0) >= 0 && G4_VCALL<int>(mJavaVM[0], 24, &env, 0x10004) == 0 )
    return (int)(uintptr_t)env;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: getSD_path  (binary VA: 0x4e8fd0)
// Original: getSD_path
// ----------------------------------------------------------------------------
int getSD_path(int a1)
{
  char *SaveFolder;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  SaveFolder = AndroidOS_GetSaveFolder();
  g4_std::string::construct_from_cstr(a1, SaveFolder, (int)(uintptr_t)&v3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: getSave_path  (binary VA: 0x4e9020)
// Original: getSave_path
// ----------------------------------------------------------------------------
int getSave_path(int a1)
{
  g4_std::string::construct_copy(a1, &dword_20D17F4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: getGLUID  (binary VA: 0x4e9060)
// Original: getGLUID
// ----------------------------------------------------------------------------
int getGLUID()
{
  return dword_20D1800;
}

// ----------------------------------------------------------------------------
// Function: getPhoneCarrier  (binary VA: 0x4e9080)
// Original: getPhoneCarrier
// ----------------------------------------------------------------------------
int getPhoneCarrier(int a1)
{
  g4_std::string::construct_copy(a1, &dword_20D1804);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: getLocaleCountry  (binary VA: 0x4e90c0)
// Original: getLocaleCountry
// ----------------------------------------------------------------------------
int getLocaleCountry(int a1)
{
  g4_std::string::construct_copy(a1, &dword_20D1808);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: getLocaleLanguage  (binary VA: 0x4e9100)
// Original: getLocaleLanguage
// ----------------------------------------------------------------------------
int getLocaleLanguage(int a1)
{
  g4_std::string::construct_copy(a1, &dword_20D180C);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: getManufacturerModel  (binary VA: 0x4e9140)
// Original: getManufacturerModel
// ----------------------------------------------------------------------------
int getManufacturerModel(int a1)
{
  g4_std::string::construct_copy(a1, &dword_20D1810);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: getGLDID  (binary VA: 0x4e9180)
// Original: getGLDID
// ----------------------------------------------------------------------------
int getGLDID(int a1)
{
  g4_std::string::construct_copy(a1, &dword_20D1814);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: getMacAddress  (binary VA: 0x4e91c0)
// Original: getMacAddress
// ----------------------------------------------------------------------------
int getMacAddress(int a1)
{
  g4_std::string::construct_copy(a1, &dword_20D1818);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: AndroidIsAppInstalled  (binary VA: 0x4e9200)
// Original: AndroidIsAppInstalled
// ----------------------------------------------------------------------------
bool AndroidIsAppInstalled(uint32_t *a1)
{
  int v1;
  int v2;
  int v4;
  typedef bool _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v1 = 0;
  if ( dword_20D17E0 != 0 )
  {
    v6[0] = 0;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
      v4 = G4_VCALL<int>(v6[0], 668, *a1);
      v5 = (uint8_t)sub_4BFED0(v6[0], dword_20D17B4, dword_20D17E0, v4) != 0;
      G4_VCALL<void>(AndroidOS_JavaVM, 20);
      return v5;
    }
    else
    {
      v2 = G4_VCALL<int>(v6[0], 668, *a1);
      LOBYTE(v1) = (uint8_t)sub_4BFED0(v6[0], dword_20D17B4, dword_20D17E0, v2) != 0;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: javacallSDFolder  (binary VA: 0x4e9330)
// Original: javacallSDFolder
// ----------------------------------------------------------------------------
int javacallSDFolder()
{
  void *CurrentJNIEnv;
  int v1;
  char *v2;
  char *v3;
  void *v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  if ( dword_20D17B8 != 0 )
  {
    v1 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17B8);
    v2 = (char *)G4_VCALL<int>(CurrentJNIEnv, 676, v1, 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v11, v2, (int)(uintptr_t)&v8 + 1);
      g4_std::string::assign_str(&dword_20D1820, &v11);
      v4 = (void *)(v11 - 12);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      return G4_VCALL<int>(CurrentJNIEnv, 680, v1, v3);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v10, (char *)&unk_1B15112, (int)(uintptr_t)&v8);
      g4_std::string::assign_str(&dword_20D1820, &v10);
      result = v10;
      v7 = (void *)(v10 - 12);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        { g4_std::string::Rep::M_destroy(v7); return result; }
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)v12, (char *)&unk_1B15112, (int)(uintptr_t)&v9);
    g4_std::string::assign_str(&dword_20D1820, v12);
    result = v12[0];
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v6); return result; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: javacallGetSaveFolderPath  (binary VA: 0x4e9500)
// Original: javacallGetSaveFolderPath
// ----------------------------------------------------------------------------
int javacallGetSaveFolderPath()
{
  void *CurrentJNIEnv;
  int v1;
  char *v2;
  char *v3;
  void *v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  if ( dword_20D17BC != 0 )
  {
    v1 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17BC);
    v2 = (char *)G4_VCALL<int>(CurrentJNIEnv, 676, v1, 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v11, v2, (int)(uintptr_t)&v8 + 1);
      g4_std::string::assign_str(&dword_20D17F4, &v11);
      v4 = (void *)(v11 - 12);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      return G4_VCALL<int>(CurrentJNIEnv, 680, v1, v3);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v10, (char *)&unk_1B15112, (int)(uintptr_t)&v8);
      g4_std::string::assign_str(&dword_20D17F4, &v10);
      result = v10;
      v7 = (void *)(v10 - 12);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        { g4_std::string::Rep::M_destroy(v7); return result; }
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)v12, (char *)&unk_1B15112, (int)(uintptr_t)&v9);
    g4_std::string::assign_str(&dword_20D17F4, v12);
    result = v12[0];
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v6); return result; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: javacallGetGLUID  (binary VA: 0x4e96d0)
// Original: javacallGetGLUID
// ----------------------------------------------------------------------------
int javacallGetGLUID()
{
  void *CurrentJNIEnv;
  int result;
  uint32_t *v2;
  uint32_t *v3;

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  result = dword_20D17C0;
  if ( dword_20D17C0 != 0 )
  {
    result = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17C0);
    if ( result != 0 )
    {
      v2 = (uint32_t *)G4_VCALL<int>(CurrentJNIEnv, 748, result, 0);
      v3 = (uint32_t *)dword_20D1800;
      *(uint32_t *)dword_20D1800 = *v2;
      v3[1] = v2[1];
      v3[2] = v2[2];
      result = v2[3];
      v3[3] = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: javacallGetPhoneCarrier  (binary VA: 0x4e9750)
// Original: javacallGetPhoneCarrier
// ----------------------------------------------------------------------------
int javacallGetPhoneCarrier()
{
  void *CurrentJNIEnv;
  int v1;
  char *v2;
  char *v3;
  void *v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  if ( dword_20D17C8 != 0 )
  {
    v1 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17C8);
    v2 = (char *)G4_VCALL<int>(CurrentJNIEnv, 676, v1, 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v11, v2, (int)(uintptr_t)&v8 + 1);
      g4_std::string::assign_str(&dword_20D1804, &v11);
      v4 = (void *)(v11 - 12);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      return G4_VCALL<int>(CurrentJNIEnv, 680, v1, v3);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v10, (char *)&unk_1B15112, (int)(uintptr_t)&v8);
      g4_std::string::assign_str(&dword_20D1804, &v10);
      result = v10;
      v7 = (void *)(v10 - 12);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        { g4_std::string::Rep::M_destroy(v7); return result; }
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)v12, (char *)&unk_1B15112, (int)(uintptr_t)&v9);
    g4_std::string::assign_str(&dword_20D1804, v12);
    result = v12[0];
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v6); return result; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: javacallGetLocaleCountry  (binary VA: 0x4e9920)
// Original: javacallGetLocaleCountry
// ----------------------------------------------------------------------------
int javacallGetLocaleCountry()
{
  void *CurrentJNIEnv;
  int v1;
  char *v2;
  char *v3;
  void *v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  if ( dword_20D17CC != 0 )
  {
    v1 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17CC);
    v2 = (char *)G4_VCALL<int>(CurrentJNIEnv, 676, v1, 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v11, v2, (int)(uintptr_t)&v8 + 1);
      g4_std::string::assign_str(&dword_20D1808, &v11);
      v4 = (void *)(v11 - 12);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      return G4_VCALL<int>(CurrentJNIEnv, 680, v1, v3);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v10, (char *)&unk_1B15112, (int)(uintptr_t)&v8);
      g4_std::string::assign_str(&dword_20D1808, &v10);
      result = v10;
      v7 = (void *)(v10 - 12);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        { g4_std::string::Rep::M_destroy(v7); return result; }
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)v12, (char *)&unk_1B15112, (int)(uintptr_t)&v9);
    g4_std::string::assign_str(&dword_20D1808, v12);
    result = v12[0];
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v6); return result; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: javacallGetLocaleLanguage  (binary VA: 0x4e9af0)
// Original: javacallGetLocaleLanguage
// ----------------------------------------------------------------------------
int javacallGetLocaleLanguage()
{
  void *CurrentJNIEnv;
  int v1;
  char *v2;
  char *v3;
  void *v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  if ( dword_20D17D0 != 0 )
  {
    v1 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17D0);
    v2 = (char *)G4_VCALL<int>(CurrentJNIEnv, 676, v1, 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v11, v2, (int)(uintptr_t)&v8 + 1);
      g4_std::string::assign_str(&dword_20D180C, &v11);
      v4 = (void *)(v11 - 12);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      return G4_VCALL<int>(CurrentJNIEnv, 680, v1, v3);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v10, (char *)&unk_1B15112, (int)(uintptr_t)&v8);
      g4_std::string::assign_str(&dword_20D180C, &v10);
      result = v10;
      v7 = (void *)(v10 - 12);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        { g4_std::string::Rep::M_destroy(v7); return result; }
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)v12, (char *)&unk_1B15112, (int)(uintptr_t)&v9);
    g4_std::string::assign_str(&dword_20D180C, v12);
    result = v12[0];
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v6); return result; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: javacallGetManufacturerModel  (binary VA: 0x4e9cc0)
// Original: javacallGetManufacturerModel
// ----------------------------------------------------------------------------
int javacallGetManufacturerModel()
{
  void *CurrentJNIEnv;
  int v1;
  char *v2;
  char *v3;
  void *v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  if ( dword_20D17D4 != 0 )
  {
    v1 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17D4);
    v2 = (char *)G4_VCALL<int>(CurrentJNIEnv, 676, v1, 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v11, v2, (int)(uintptr_t)&v8 + 1);
      g4_std::string::assign_str(&dword_20D1810, &v11);
      v4 = (void *)(v11 - 12);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      return G4_VCALL<int>(CurrentJNIEnv, 680, v1, v3);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v10, (char *)&unk_1B15112, (int)(uintptr_t)&v8);
      g4_std::string::assign_str(&dword_20D1810, &v10);
      result = v10;
      v7 = (void *)(v10 - 12);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        { g4_std::string::Rep::M_destroy(v7); return result; }
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)v12, (char *)&unk_1B15112, (int)(uintptr_t)&v9);
    g4_std::string::assign_str(&dword_20D1810, v12);
    result = v12[0];
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v6); return result; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: javacallGetGLDID  (binary VA: 0x4e9e90)
// Original: javacallGetGLDID
// ----------------------------------------------------------------------------
int javacallGetGLDID()
{
  void *CurrentJNIEnv;
  int v1;
  char *v2;
  char *v3;
  void *v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  if ( dword_20D17C4 != 0 )
  {
    v1 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17C4);
    v2 = (char *)G4_VCALL<int>(CurrentJNIEnv, 676, v1, 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v11, v2, (int)(uintptr_t)&v8 + 1);
      g4_std::string::assign_str(&dword_20D1814, &v11);
      v4 = (void *)(v11 - 12);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      return G4_VCALL<int>(CurrentJNIEnv, 680, v1, v3);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v10, (char *)&unk_1B15112, (int)(uintptr_t)&v8);
      g4_std::string::assign_str(&dword_20D1814, &v10);
      result = v10;
      v7 = (void *)(v10 - 12);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        { g4_std::string::Rep::M_destroy(v7); return result; }
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)v12, (char *)&unk_1B15112, (int)(uintptr_t)&v9);
    g4_std::string::assign_str(&dword_20D1814, v12);
    result = v12[0];
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v6); return result; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: javacallGetMacAddress  (binary VA: 0x4ea060)
// Original: javacallGetMacAddress
// ----------------------------------------------------------------------------
int javacallGetMacAddress()
{
  void *CurrentJNIEnv;
  int v1;
  char *v2;
  char *v3;
  void *v4;
  int result;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  if ( dword_20D17D8 != 0 )
  {
    v1 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17D8);
    v2 = (char *)G4_VCALL<int>(CurrentJNIEnv, 676, v1, 0);
    v3 = v2;
    if ( v2 != nullptr )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v11, v2, (int)(uintptr_t)&v8 + 1);
      g4_std::string::assign_str(&dword_20D1818, &v11);
      v4 = (void *)(v11 - 12);
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      return G4_VCALL<int>(CurrentJNIEnv, 680, v1, v3);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v10, (char *)&unk_1B15112, (int)(uintptr_t)&v8);
      g4_std::string::assign_str(&dword_20D1818, &v10);
      result = v10;
      v7 = (void *)(v10 - 12);
      if ( (uint32_t *)(v10 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      {
        { g4_std::string::Rep::M_destroy(v7); return result; }
      }
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)v12, (char *)&unk_1B15112, (int)(uintptr_t)&v9);
    g4_std::string::assign_str(&dword_20D1818, v12);
    result = v12[0];
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v6); return result; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: GetCurrentRuntimeValue  (binary VA: 0x4ea470)
// Original: GetCurrentRuntimeValue
// ----------------------------------------------------------------------------
const char * GetCurrentRuntimeValue()
{
  const char *result;
  void *CurrentJNIEnv;
  int v2;

  result = "No_value";
  if ( dword_20D17F0 != 0 )
  {
    CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
    v2 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)CurrentJNIEnv, dword_20D17B4, dword_20D17F0);
    return (const char *)G4_VCALL<int>(CurrentJNIEnv, 676, v2, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Gaia_GetMacAddress  (binary VA: 0x4ea4e0)
// Original: Gaia_GetMacAddress
// ----------------------------------------------------------------------------
int Gaia_GetMacAddress(int a1)
{
  DeviceUtils_GetMacAddress(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Gaia_GetImei  (binary VA: 0x4ea520)
// Original: Gaia_GetImei
// ----------------------------------------------------------------------------
int Gaia_GetImei(int a1)
{
  DeviceUtils_GetIMEI(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Gaia_GetAndroidID  (binary VA: 0x4ea560)
// Original: Gaia_GetAndroidID
// ----------------------------------------------------------------------------
int Gaia_GetAndroidID(int a1)
{
  DeviceUtils_GetAndroidId(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Gaia_GetSerial  (binary VA: 0x4ea5a0)
// Original: Gaia_GetSerial
// ----------------------------------------------------------------------------
int Gaia_GetSerial(int a1)
{
  DeviceUtils_GetSerial(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Gaia_GetHDIDFVStr  (binary VA: 0x4ea5e0)
// Original: Gaia_GetHDIDFVStr
// ----------------------------------------------------------------------------
int Gaia_GetHDIDFVStr(int a1)
{
  DeviceUtils_GetHDIDFVStr(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Gaia_GetFirmware  (binary VA: 0x4ea620)
// Original: Gaia_GetFirmware
// ----------------------------------------------------------------------------
int Gaia_GetFirmware(int a1)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)&v2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4EA670  (binary VA: 0x4ea670)
// Original: sub_4EA670
// ----------------------------------------------------------------------------
int sub_4EA670()
{
  dword_20D1820 = (int)(uintptr_t)&unk_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D1820, &unk_20D1280);
  dword_20D17F4 = (int)(uintptr_t)&unk_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D17F4, &unk_20D1280);
  dword_20D1804 = (int)(uintptr_t)&unk_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D1804, &unk_20D1280);
  dword_20D1808 = (int)(uintptr_t)&unk_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D1808, &unk_20D1280);
  dword_20D180C = (int)(uintptr_t)&unk_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D180C, &unk_20D1280);
  dword_20D1810 = (int)(uintptr_t)&unk_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D1810, &unk_20D1280);
  dword_20D1814 = (int)(uintptr_t)&unk_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D1814, &unk_20D1280);
  dword_20D1818 = (int)(uintptr_t)&unk_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D1818, &unk_20D1280);
  dword_20D1800 = opNewArray(0x10u);
  sub_1900D70(&unk_20D1824);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20D1824, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: MD5_Init  (binary VA: 0x4ea7c0)
// Original: MD5_Init
// ----------------------------------------------------------------------------
int MD5_Init(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 92;
  v2 = (uint16_t *)a1;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOWORD(v1) = 91;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v1 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v1 >> 2));
  v3 = &v2[2 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
    *v3++ = 0;
  if ( (v1 & 1) != 0 )
    *(uint8_t *)v3 = 0;
  *(uint32_t *)a1 = 1732584193;
  *(uint32_t *)(a1 + 4) = -271733879;
  *(uint32_t *)(a1 + 8) = -1732584194;
  *(uint32_t *)(a1 + 12) = 271733878;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: md5_block_data_order  (binary VA: 0x4ea850)
// Original: md5_block_data_order
// ----------------------------------------------------------------------------
int * md5_block_data_order(int *a1, int *a2, int *a3)
{
  int *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  bool v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;

  v88 = *a1;
  result = a3;
  v69 = a1[1];
  v70 = a1[2];
  v71 = a1[3];
  if ( a3 != nullptr )
  {
    result = a2;
    do
    {
      v72 = *result;
      v73 = result[1];
      v74 = result[2];
      v4 = v69 + __builtin_rotateleft32(*result + v88 - 680876936 + (v71 ^ v69 & (v70 ^ v71)), 7);
      v75 = result[3];
      v5 = v4 + __builtin_rotateleft32(v73 + v71 - 389564586 + (v70 ^ v4 & (v69 ^ v70)), 12);
      v76 = result[4];
      v6 = v5 + __builtin_rotateleft32(v74 + v70 + 606105819 + (v69 ^ v5 & (v4 ^ v69)), 17);
      v77 = result[5];
      v7 = v6 + __builtin_rotateleft32(v75 + v69 - 1044525330 + (v4 ^ v6 & (v4 ^ v5)), 22);
      v78 = result[6];
      v8 = v7 + __builtin_rotateleft32(v4 + v76 - 176418897 + (v5 ^ v7 & (v5 ^ v6)), 7);
      v79 = result[7];
      v9 = v8 + __builtin_rotateleft32(v5 + v77 + 1200080426 + (v6 ^ v8 & (v6 ^ v7)), 12);
      v80 = result[8];
      v10 = v9 + __builtin_rotateleft32(v6 + v78 - 1473231341 + (v7 ^ v9 & (v7 ^ v8)), 17);
      v81 = result[9];
      v11 = v10 + __builtin_rotateleft32(v7 + v79 - 45705983 + (v8 ^ v10 & (v8 ^ v9)), 22);
      v82 = result[10];
      v12 = v11 + __builtin_rotateleft32(v8 + v80 + 1770035416 + (v9 ^ v11 & (v9 ^ v10)), 7);
      v83 = result[11];
      v13 = v12 + __builtin_rotateleft32(v9 + v81 - 1958414417 + (v10 ^ v12 & (v10 ^ v11)), 12);
      v84 = result[12];
      v14 = v13 + __builtin_rotateleft32(v10 + v82 - 42063 + (v11 ^ v13 & (v11 ^ v12)), 17);
      v85 = result[13];
      v15 = v14 + __builtin_rotateleft32(v11 + v83 - 1990404162 + (v12 ^ v14 & (v12 ^ v13)), 22);
      v86 = result[14];
      v16 = v15 + __builtin_rotateleft32(v12 + v84 + 1804603682 + (v13 ^ v15 & (v13 ^ v14)), 7);
      v17 = result[15];
      result += 16;
      v87 = v17;
      v18 = v16 + __builtin_rotateleft32(v13 + v85 - 40341101 + (v14 ^ v16 & (v14 ^ v15)), 12);
      v19 = v18 + __builtin_rotateleft32(v14 + v86 - 1502002290 + (v15 ^ v18 & (v15 ^ v16)), 17);
      v20 = v19 + __builtin_rotateleft32(v15 + v17 + 1236535329 + (v16 ^ v19 & (v16 ^ v18)), 22);
      v21 = v20 + __builtin_rotateleft32(v73 + v16 - 165796510 + (v19 ^ v18 & (v19 ^ v20)), 5);
      v22 = v21 + __builtin_rotateleft32(v78 + v18 - 1069501632 + (v20 ^ v19 & (v20 ^ v21)), 9);
      v23 = v22 + __builtin_rotateleft32(v83 + v19 + 643717713 + (v21 ^ v20 & (v21 ^ v22)), 14);
      v24 = v23 + __builtin_rotateleft32(v72 + v20 - 373897302 + (v22 ^ v21 & (v22 ^ v23)), 20);
      v25 = v24 + __builtin_rotateleft32(v77 + v21 - 701558691 + (v23 ^ v22 & (v23 ^ v24)), 5);
      v26 = v25 + __builtin_rotateleft32(v82 + v22 + 38016083 + (v24 ^ v23 & (v24 ^ v25)), 9);
      v27 = v26 + __builtin_rotateleft32(v17 + v23 - 660478335 + (v25 ^ v24 & (v25 ^ v26)), 14);
      v28 = v27 + __builtin_rotateleft32(v76 + v24 - 405537848 + (v26 ^ v25 & (v26 ^ v27)), 20);
      v29 = v28 + __builtin_rotateleft32(v81 + v25 + 568446438 + (v27 ^ v26 & (v27 ^ v28)), 5);
      v30 = v29 + __builtin_rotateleft32(v86 + v26 - 1019803690 + (v28 ^ v27 & (v28 ^ v29)), 9);
      v31 = v30 + __builtin_rotateleft32(v75 + v27 - 187363961 + (v29 ^ v28 & (v29 ^ v30)), 14);
      v32 = v31 + __builtin_rotateleft32(v80 + v28 + 1163531501 + (v30 ^ v29 & (v30 ^ v31)), 20);
      v33 = v32 + __builtin_rotateleft32(v85 + v29 - 1444681467 + (v31 ^ v30 & (v31 ^ v32)), 5);
      v34 = v33 + __builtin_rotateleft32(v74 + v30 - 51403784 + (v32 ^ v31 & (v32 ^ v33)), 9);
      v35 = v34 + __builtin_rotateleft32(v79 + v31 + 1735328473 + (v33 ^ v32 & (v33 ^ v34)), 14);
      v36 = v35 + __builtin_rotateleft32(v84 + v32 - 1926607734 + (v34 ^ v33 & (v34 ^ v35)), 20);
      v37 = v36 + __builtin_rotateleft32((v36 ^ v34 ^ v35) + v77 + v33 - 378558, 4);
      v38 = v37 + __builtin_rotateleft32(v80 + v34 - 2022574463 + (v37 ^ v35 ^ v36), 11);
      v39 = v38 + __builtin_rotateleft32(v83 + v35 + 1839030562 + (v38 ^ v36 ^ v37), 16);
      v40 = v39 + __builtin_rotateleft32(v86 + v36 - 35309556 + (v39 ^ v37 ^ v38), 23);
      v41 = v40 + __builtin_rotateleft32(v73 + v37 - 1530992060 + (v40 ^ v38 ^ v39), 4);
      v42 = v41 + __builtin_rotateleft32((v41 ^ v39 ^ v40) + v76 + v38 + 1272893353, 11);
      v43 = v42 + __builtin_rotateleft32((v42 ^ v40 ^ v41) + v79 + v39 - 155497632, 16);
      v44 = v43 + __builtin_rotateleft32(v82 + v40 - 1094730640 + (v43 ^ v41 ^ v42), 23);
      v45 = v44 + __builtin_rotateleft32((v44 ^ v42 ^ v43) + v85 + v41 + 681279174, 4);
      v46 = v45 + __builtin_rotateleft32((v45 ^ v43 ^ v44) + v72 + v42 - 358537222, 11);
      v47 = v46 + __builtin_rotateleft32(v75 + v43 - 722521979 + (v46 ^ v44 ^ v45), 16);
      v48 = v47 + __builtin_rotateleft32((v47 ^ v45 ^ v46) + v78 + v44 + 76029189, 23);
      v49 = v48 + __builtin_rotateleft32((v48 ^ v46 ^ v47) + v81 + v45 - 640364487, 4);
      v50 = v49 + __builtin_rotateleft32(v84 + v46 - 421815835 + (v49 ^ v47 ^ v48), 11);
      v51 = v50 + __builtin_rotateleft32((v50 ^ v48 ^ v49) + v87 + v47 + 530742520, 16);
      v52 = v51 + __builtin_rotateleft32((v51 ^ v49 ^ v50) + v74 + v48 - 995338651, 23);
      v53 = v52 + __builtin_rotateleft32(v72 + v49 - 198630844 + (v51 ^ (v52 | ~v50)), 6);
      v54 = v53 + __builtin_rotateleft32(v79 + v50 + 1126891415 + (v52 ^ (v53 | ~v51)), 10);
      v55 = v54 + __builtin_rotateleft32(v86 + v51 - 1416354905 + (v53 ^ (v54 | ~v52)), 15);
      v56 = v55 + __builtin_rotateleft32(v77 + v52 - 57434055 + (v54 ^ (v55 | ~v53)), 21);
      v57 = v56 + __builtin_rotateleft32((v55 ^ (v56 | ~v54)) + v84 + v53 + 1700485571, 6);
      v58 = v57 + __builtin_rotateleft32((v56 ^ (v57 | ~v55)) + v75 + v54 - 1894986606, 10);
      v59 = v58 + __builtin_rotateleft32(v82 + v55 - 1051523 + (v57 ^ (v58 | ~v56)), 15);
      v60 = v59 + __builtin_rotateleft32(v73 + v56 - 2054922799 + (v58 ^ (v59 | ~v57)), 21);
      v61 = v60 + __builtin_rotateleft32(v80 + v57 + 1873313359 + (v59 ^ (v60 | ~v58)), 6);
      v62 = v61 + __builtin_rotateleft32(v87 + v58 - 30611744 + (v60 ^ (v61 | ~v59)), 10);
      v63 = v62 + __builtin_rotateleft32((v61 ^ (v62 | ~v60)) + v78 + v59 - 1560198380, 15);
      v64 = v63 + __builtin_rotateleft32((v62 ^ (v63 | ~v61)) + v85 + v60 + 1309151649, 21);
      v65 = v64 + __builtin_rotateleft32(v76 + v61 - 145523070 + (v63 ^ (v64 | ~v62)), 6);
      v88 += v65;
      v66 = v65 + __builtin_rotateleft32((v64 ^ (v65 | ~v63)) + v83 + v62 - 1120210379, 10);
      v67 = v66 + __builtin_rotateleft32((v65 ^ (v66 | ~v64)) + v74 + v63 + 718787259, 15);
      v70 += v67;
      v69 += v67 + __builtin_rotateleft32(v81 + v64 - 343485551 + (v66 ^ (v67 | ~v65)), 21);
      *a1 = v88;
      a1[1] = v69;
      a1[2] = v70;
      v71 += v66;
      v68 = a3 == (int *)((char *)&dword_0 + 1);
      a3 = (int *)((char *)a3 - 1);
      a1[3] = v71;
    }
    while ( !v68 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: MD5_Final  (binary VA: 0x4eb0e0)
// Original: MD5_Final
// ----------------------------------------------------------------------------
int MD5_Final(uint32_t *a1, int a2)
{
  int v2;
  uint16_t *v3;
  size_t n;
  int v5;
  unsigned int v6;
  uint16_t *v7;

  v2 = *(uint32_t *)(a2 + 88);
  v3 = (uint16_t *)(a2 + 24);
  n = 55 - v2;
  v5 = v2 + 1;
  *(uint8_t *)(a2 + v2 + 24) = 0x80;
  if ( (unsigned int)(v2 + 1) > 0x38 )
  {
    memset((char *)v3 + v5, 0, 63 - v2);
    md5_block_data_order((int *)(uintptr_t)a2, (int *)(uintptr_t)(a2 + 24), (int *)(uintptr_t)1);
    n = 56;
    v5 = 0;
  }
  memset((char *)v3 + v5, 0, n);
  *(uint32_t *)(a2 + 80) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a2 + 84) = *(uint32_t *)(a2 + 20);
  md5_block_data_order((int *)(uintptr_t)a2, (int *)(uintptr_t)(a2 + 24), (int *)(uintptr_t)1);
  *(uint32_t *)(a2 + 88) = 0;
  v6 = 64;
  if ( ((uint8_t)(uintptr_t)v3 & 1) != 0 )
  {
    v3 = (uint16_t *)(a2 + 25);
    *(uint8_t *)(a2 + 24) = 0;
    LOBYTE(v6) = 63;
    if ( ((a2 + 25) & 2) == 0 )
      goto LABEL_5;
  }
  else if ( ((uint8_t)(uintptr_t)v3 & 2) == 0 )
  {
    goto LABEL_5;
  }
  *v3 = 0;
  v6 -= 2;
  ++v3;
LABEL_5:
  memset(v3, 0, 4 * (v6 >> 2));
  v7 = &v3[2 * (v6 >> 2)];
  if ( (v6 & 2) != 0 )
    *v7++ = 0;
  if ( (v6 & 1) != 0 )
    *(uint8_t *)v7 = 0;
  *a1 = *(uint32_t *)a2;
  a1[1] = *(uint32_t *)(a2 + 4);
  a1[2] = *(uint32_t *)(a2 + 8);
  a1[3] = *(uint32_t *)(a2 + 12);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: MD5_Transform  (binary VA: 0x4eb230)
// Original: MD5_Transform
// ----------------------------------------------------------------------------
int MD5_Transform(int a1, int a2)
{
  return (int)(uintptr_t)md5_block_data_order((int *)(uintptr_t)(a1), (int *)a2, (int *)(uintptr_t)1);
}

// ----------------------------------------------------------------------------
// Function: MD5_Update  (binary VA: 0x4eb270)
// Original: MD5_Update
// ----------------------------------------------------------------------------
int MD5_Update(int a1, char *src, size_t a3)
{
  size_t v3;
  size_t v4;
  size_t v5;
  bool v6; // cc
  int v7;
  int v8;
  int v9;
  char *v10;
  uint16_t *v11;
  unsigned int v12;
  uint8_t *v13;
  size_t v14;
  size_t v16;
  size_t n;
  char *v18;
  int v19;

  v3 = a3;
  if ( a3 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 16);
    v5 = v4 + 8 * a3;
    v6 = v4 <= v5;
    v7 = *(uint32_t *)(a1 + 20);
    if ( !v6 )
      ++v7;
    *(uint32_t *)(a1 + 16) = v5;
    v8 = *(uint32_t *)(a1 + 88);
    *(uint32_t *)(a1 + 20) = (a3 >> 29) + v7;
    v18 = src;
    if ( v8 != 0 )
    {
      v19 = a1 + 24;
      if ( a3 <= 0x3F && a3 + v8 <= 0x3F )
      {
        memcpy((void *)(v19 + v8), src, a3);
        *(uint32_t *)(a1 + 88) += a3;
        return 1;
      }
      v9 = 64 - v8;
      v3 = a3 - (64 - v8);
      memcpy((void *)(v19 + v8), src, 64 - v8);
      md5_block_data_order((int *)(uintptr_t)(a1), (int *)v19, (int *)(uintptr_t)1);
      *(uint32_t *)(a1 + 88) = 0;
      v10 = &src[v9];
      v11 = (uint16_t *)(a1 + 24);
      v18 = v10;
      v12 = 64;
      if ( (v19 & 1) != 0 )
      {
        *(uint8_t *)(a1 + 24) = 0;
        v11 = (uint16_t *)(a1 + 25);
        LOBYTE(v12) = 63;
      }
      if ( ((uint8_t)(uintptr_t)v11 & 2) != 0 )
      {
        *v11 = 0;
        v12 -= 2;
        ++v11;
      }
      memset(v11, 0, 4 * (v12 >> 2));
      v13 = (uint8_t *)(&v11[2 * (v12 >> 2)]);
      if ( (v12 & 2) == 0 )
      {
        if ( (v12 & 1) == 0 )
          goto LABEL_13;
LABEL_20:
        *v13 = 0;
        v14 = v3 >> 6;
        if ( v3 >> 6 == 0 )
        {
LABEL_14:
          if ( v3 == 0 )
            return 1;
LABEL_16:
          *(uint32_t *)(a1 + 88) = v3;
          memcpy((void *)(a1 + 24), v18, v3);
          return 1;
        }
LABEL_17:
        n = v14;
        v16 = v14 << 6;
        v3 -= v16;
        md5_block_data_order((int *)(uintptr_t)(a1), (int *)v18, (int *)(uintptr_t)n);
        v18 += v16;
        if ( v3 == 0 )
          return 1;
        goto LABEL_16;
      }
      *(uint16_t *)v13 = 0;
      v13 += 2;
      if ( (v12 & 1) != 0 )
        goto LABEL_20;
    }
LABEL_13:
    v14 = v3 >> 6;
    if ( v3 >> 6 == 0 )
      goto LABEL_14;
    goto LABEL_17;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_4EB440  (binary VA: 0x4eb440)
// Original: sub_4EB440
// ----------------------------------------------------------------------------
int sub_4EB440(int a1, int a2, int a3, int a4)
{
  int v4;
  size_t v5;
  size_t v6;
  size_t v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  const void *v12;
  const void *s2;
  size_t v14;
  int v15;
  const void **v16;
  const void **v17;
  int v18;
  void *v19;
  const void **v20;
  size_t v21;
  const void *v22;
  size_t v23;
  int v24;
  int v25;
  int v26;
  size_t v27;
  size_t v28;
  size_t v29;
  int v30;
  int v31;
  int v33;
  typedef char *_g4_t_s1;
  typedef void *_g4_t_s1a;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef const void **_g4_t_v40;
  typedef int _g4_t_v41;
  typedef const void **_g4_t_v42;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef void *_g4_t_v48;
  typedef void *_g4_t_v49[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_s1a)) > _g4_s1 ? (0u + sizeof(_g4_t_s1a)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_n)) > _g4_s2 ? (16u + sizeof(_g4_t_n)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v37)) > _g4_s3 ? (24u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v38)) > _g4_s4 ? (24u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v39)) > _g4_s5 ? (28u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v40)) > _g4_s6 ? (28u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v41)) > _g4_s7 ? (32u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v42)) > _g4_s8 ? (36u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v44)) > _g4_s9 ? (44u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v45)) > _g4_s10 ? (44u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v46)) > _g4_s11 ? (48u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v48)) > _g4_s12 ? (72u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v49)) > _g4_s13 ? (76u + sizeof(_g4_t_v49)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);

  v44 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v41 = 2 * (v44 + 1);
      v16 = (const void **)(a1 + 16 * (v44 + 1));
      v42 = (const void **)(a1 + 8 * (v41 - 1));
      v12 = *v42;
      s2 = *v16;
      v14 = *((uint32_t *)*v16 - 3);
      v39 = v14;
      if ( *((uint32_t *)*v42 - 3) <= v14 )
        v14 = *((uint32_t *)*v42 - 3);
      v37 = *((uint32_t *)*v42 - 3);
      n = v14;
      v15 = memcmp(*v16, *v42, v14);
      if ( v15 == 0 )
        v15 = v39 - v37;
      if ( v15 >= 0 )
      {
        v4 = memcmp(v12, s2, n);
        if ( v4 == 0 )
          v4 = v37 - v39;
        if ( v4 >= 0 )
        {
          v5 = *((uint32_t *)v16[1] - 3);
          v6 = v5;
          v7 = *((uint32_t *)v42[1] - 3);
          if ( v7 <= v5 )
            v6 = *((uint32_t *)v42[1] - 3);
          v8 = v5 - v7;
          v9 = memcmp(v16[1], v42[1], v6);
          v10 = v41 - 1;
          if ( v9 == 0 )
            v9 = v8;
          if ( v9 < 0 )
            v16 = (const void **)(a1 + 8 * (v41 - 1));
          else
            v10 = 2 * (v44 + 1);
          v41 = v10;
        }
      }
      else
      {
        v16 = (const void **)(a1 + 8 * --v41);
      }
      s1 = (char *)(a1 + 8 * v44);
      v11 = s1 + 4;
      g4_std::string::assign_str(s1, v16);
      g4_std::string::assign_str(v11, v16 + 1);
      if ( v41 >= (a3 - 1) / 2 )
        break;
      v44 = v41;
    }
  }
  else
  {
    v41 = a2;
    v16 = (const void **)(a1 + 8 * a2);
  }
  if ( (a3 & 1) == 0 && v41 == (a3 - 2) / 2 )
  {
    v41 = 2 * v41 + 1;
    g4_std::string::assign_str(v16, a1 + 8 * v41);
    s1a = v16 + 1;
    v16 = (const void **)(a1 + 8 * v41);
    g4_std::string::assign_str(s1a, v16 + 1);
  }
  g4_std::string::construct_copy(&v48, a4);
  v17 = v16 + 1;
  g4_std::string::construct_copy(v49, a4 + 4);
  if ( v41 > a2 )
  {
    v18 = (v41 - 1) / 2;
    v45 = v18;
    while ( 1 )
    {
      v19 = v48;
      v20 = (const void **)(a1 + 8 * v18);
      v21 = *((uint32_t *)v48 - 3);
      v22 = *v20;
      v40 = v20;
      v23 = *((uint32_t *)*v20 - 3);
      v38 = v23;
      if ( v21 <= v23 )
        v23 = *((uint32_t *)v48 - 3);
      v46 = v23;
      v24 = memcmp(v22, v48, v23);
      if ( v24 == 0 )
        v24 = v38 - v21;
      if ( v24 >= 0 )
      {
        v25 = memcmp(v19, v22, v46);
        v26 = v21 - v38;
        if ( v25 == 0 )
          v25 = v26;
        if ( v25 < 0 )
          goto LABEL_40;
        v27 = *((uint32_t *)v40[1] - 3);
        v28 = *((uint32_t *)v49[0] - 3);
        v29 = v27;
        if ( v28 <= v27 )
          v29 = *((uint32_t *)v49[0] - 3);
        v30 = v27 - v28;
        v31 = memcmp(v40[1], v49[0], v29);
        if ( v31 == 0 )
          v31 = v30;
        if ( v31 >= 0 )
        {
LABEL_40:
          v16 = (const void **)(a1 + 8 * v41);
          v17 = v16 + 1;
          goto LABEL_41;
        }
      }
      g4_std::string::assign_str(a1 + 8 * v41, v40);
      v17 = v40 + 1;
      g4_std::string::assign_str(a1 + 8 * v41 + 4, v40 + 1);
      v33 = (v45 - 1) / 2;
      if ( a2 >= v45 )
        break;
      v41 = v45;
      v45 = (v45 - 1) / 2;
      v18 = v33;
    }
    v16 = v40;
  }
LABEL_41:
  g4_std::string::assign_str(v16, &v48);
  g4_std::string::assign_str(v17, v49);
  g4_std::string::Destroy(v49);
  { g4_std::string::Destroy(&v48); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_4EBC30  (binary VA: 0x4ebc30)
// Original: sub_4EBC30
// ----------------------------------------------------------------------------
int sub_4EBC30(size_t a1, char a2)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_4EBC70  (binary VA: 0x4ebc70)
// Original: sub_4EBC70
// ----------------------------------------------------------------------------
int sub_4EBC70(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4EBCA0  (binary VA: 0x4ebca0)
// Original: sub_4EBCA0
// ----------------------------------------------------------------------------
int sub_4EBCA0(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4EBCD0  (binary VA: 0x4ebcd0)
// Original: sub_4EBCD0
// ----------------------------------------------------------------------------
int sub_4EBCD0(size_t a1)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EBD10  (binary VA: 0x4ebd10)
// Original: sub_4EBD10
// ----------------------------------------------------------------------------
void * sub_4EBD10(size_t n, int a2)
{
  void *s;
  void *v3;

  s = (void *)Core::Memory::AllocateTracked(n, 0, 0, 1);
  v3 = s;
  if ( a2 == 1 )
    memset(s, 0, n);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_4EBD90  (binary VA: 0x4ebd90)
// Original: sub_4EBD90
// ----------------------------------------------------------------------------
int sub_4EBD90(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4EBDC0  (binary VA: 0x4ebdc0)
// Original: sub_4EBDC0
// ----------------------------------------------------------------------------
int sub_4EBDC0(size_t a1)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EBE00  (binary VA: 0x4ebe00)
// Original: sub_4EBE00
// ----------------------------------------------------------------------------
int sub_4EBE00(size_t a1, int a2, int a3, int a4, int a5)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, a4, a5, 1);
}

// ----------------------------------------------------------------------------
// Function: gll_operator_delete_arr  (binary VA: 0x4ebe40)
// Original: gll_operator_delete_arr
// ----------------------------------------------------------------------------
int gll_operator_delete_arr(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4EBE70  (binary VA: 0x4ebe70)
// Original: sub_4EBE70
// ----------------------------------------------------------------------------
int sub_4EBE70(size_t a1, int a2, int a3, int a4, int a5)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, a3, a5, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EBEB0  (binary VA: 0x4ebeb0)
// Original: sub_4EBEB0
// ----------------------------------------------------------------------------
void * sub_4EBEB0(void *ptr, size_t size)
{
  return realloc(ptr, size);
}

// ----------------------------------------------------------------------------
// Function: sub_4EBEE0  (binary VA: 0x4ebee0)
// Original: sub_4EBEE0
// ----------------------------------------------------------------------------
int sub_4EBEE0(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4EBF10  (binary VA: 0x4ebf10)
// Original: sub_4EBF10
// ----------------------------------------------------------------------------
int sub_4EBF10(size_t a1)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EBF50  (binary VA: 0x4ebf50)
// Original: sub_4EBF50
// ----------------------------------------------------------------------------
int sub_4EBF50(size_t a1, int a2, int a3, int a4)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, a3, a4, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EBF90  (binary VA: 0x4ebf90)
// Original: sub_4EBF90
// ----------------------------------------------------------------------------
int sub_4EBF90(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4EBFC0  (binary VA: 0x4ebfc0)
// Original: sub_4EBFC0
// ----------------------------------------------------------------------------
void * sub_4EBFC0(size_t size)
{
  return malloc(size);
}

// ----------------------------------------------------------------------------
// Function: sub_4EBFF0  (binary VA: 0x4ebff0)
// Original: sub_4EBFF0
// ----------------------------------------------------------------------------
void sub_4EBFF0(void *ptr)
{
  free(ptr);
}

// ----------------------------------------------------------------------------
// Function: sub_4EC020  (binary VA: 0x4ec020)
// Original: sub_4EC020
// ----------------------------------------------------------------------------
int sub_4EC020(size_t a1, int a2, int a3, int a4)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, a2, a4, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EC060  (binary VA: 0x4ec060)
// Original: sub_4EC060
// ----------------------------------------------------------------------------
int sub_4EC060(size_t a1)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EC0A0  (binary VA: 0x4ec0a0)
// Original: sub_4EC0A0
// ----------------------------------------------------------------------------
int sub_4EC0A0(size_t a1, int a2, int a3, int a4, int a5)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, a3, a5, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EC0E0  (binary VA: 0x4ec0e0)
// Original: sub_4EC0E0
// ----------------------------------------------------------------------------
int sub_4EC0E0(size_t a1)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EC120  (binary VA: 0x4ec120)
// Original: sub_4EC120
// ----------------------------------------------------------------------------
int sub_4EC120(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4EC150  (binary VA: 0x4ec150)
// Original: sub_4EC150
// ----------------------------------------------------------------------------
int sub_4EC150(size_t a1)
{
  return (int)(uintptr_t)Core::Memory::AllocateTracked(a1, 0, 0, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_4EC190  (binary VA: 0x4ec190)
// Original: sub_4EC190
// ----------------------------------------------------------------------------
int sub_4EC190(int a1)
{
  sub_5240B0((int *)(uintptr_t)a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_4EC1C0  (binary VA: 0x4ec1c0)
// Original: sub_4EC1C0
// ----------------------------------------------------------------------------
int sub_4EC1C0(uint32_t *a1)
{
  char *v1;
  int v2;
  size_t v3;
  size_t v4;
  size_t n;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  size_t v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_v20;
  typedef uint8_t _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef int _g4_t_v28[3];
  typedef int _g4_t_v29[2];
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t _g4_t_v40[3];
  typedef void *_g4_t_s1;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint8_t _g4_t_v48[228];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_s2)) > _g4_s1 ? (4u + sizeof(_g4_t_s2)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v20)) > _g4_s2 ? (4u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (11u + sizeof(_g4_t_v21)) > _g4_s3 ? (11u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v25)) > _g4_s7 ? (28u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v26)) > _g4_s8 ? (32u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v27)) > _g4_s9 ? (36u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v28)) > _g4_s10 ? (48u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v29)) > _g4_s11 ? (60u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (71u + sizeof(_g4_t_v30)) > _g4_s12 ? (71u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v31)) > _g4_s13 ? (76u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v32)) > _g4_s14 ? (80u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v33)) > _g4_s15 ? (84u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v34)) > _g4_s16 ? (88u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v35)) > _g4_s17 ? (92u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v36)) > _g4_s18 ? (96u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v37)) > _g4_s19 ? (100u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v38)) > _g4_s20 ? (104u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v39)) > _g4_s21 ? (108u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v40)) > _g4_s22 ? (112u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_s1)) > _g4_s23 ? (124u + sizeof(_g4_t_s1)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v42)) > _g4_s24 ? (128u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v43)) > _g4_s25 ? (132u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v44)) > _g4_s26 ? (136u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v45)) > _g4_s27 ? (140u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v46)) > _g4_s28 ? (144u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v47)) > _g4_s29 ? (148u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v48)) > _g4_s30 ? (152u + sizeof(_g4_t_v48)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 11u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 71u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 100u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 104u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 108u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 124u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 128u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 132u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 136u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 140u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 144u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 148u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 152u);

  sub_B7F7C0(v48);
  sub_B80300(v40);
  if ( v40[0] != 1 || (sub_B80100(v40), v40[0] != 1) )
  {
    sub_B7CE80((char *)&v30 + 1);
    sub_B7C550(&v31);
    sub_B7C550(&v32);
    sub_B7C550(&v33);
    sub_B7C550(&v34);
    sub_B7C550(&v35);
    sub_B7C550(&v36);
    sub_B7C550(&v37);
    pugi::xml_node::first_child(&v38);
    v21 = 0;
    while ( 1 )
    {
      if ( pugi::xml_node::child(&v38) == -1 )
        goto LABEL_35;
      if ( strcmp((const char *)sub_B7CE00(&v38), "section") == 0 )
      {
        pugi::xml_node::attribute(v29);
        v31 = v29[0];
        if ( pugi::xml_attribute::as_int(&v31) != -1 )
        {
          pugi::xml_node::attribute(v29);
          v32 = v29[0];
          if ( pugi::xml_attribute::as_int(&v32) != -1 )
          {
            pugi::xml_node::attribute(v29);
            v33 = v29[0];
            if ( pugi::xml_attribute::as_int(&v33) != -1 )
            {
              pugi::xml_node::attribute(v29);
              v34 = v29[0];
              if ( pugi::xml_attribute::as_int(&v34) != -1 )
              {
                pugi::xml_node::attribute(v29);
                v35 = v29[0];
                if ( pugi::xml_attribute::as_int(&v35) != -1 )
                {
                  pugi::xml_node::attribute(v29);
                  v36 = v29[0];
                  if ( pugi::xml_attribute::as_int(&v36) != -1 )
                  {
                    pugi::xml_node::attribute(v29);
                    v37 = v29[0];
                    if ( pugi::xml_attribute::as_int(&v37) != -1 )
                    {
                      v22 = sub_B7C750(&v37);
                      v23 = sub_B7C750(&v36);
                      v24 = sub_B7C750(&v35);
                      v25 = sub_B7C750(&v34);
                      v26 = sub_B7C750(&v33);
                      v27 = sub_B7C750(&v32);
                      v1 = (char *)pugi::xml_attribute::value(&v31);
                      g4_std::string::construct_from_cstr((int)(uintptr_t)&v39, v1, (int)(uintptr_t)&v30);
                      v2 = a1[2];
                      if ( v2 == 0 )
                        goto LABEL_43;
                      s2 = (void *)v39;
                      v18 = (int)(uintptr_t)(a1 + 1);
                      v3 = *(uint32_t *)(v39 - 12);
                      do
                      {
                        while ( 1 )
                        {
                          v4 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
                          n = v4;
                          if ( v3 <= v4 )
                            n = v3;
                          v6 = v4 - v3;
                          v7 = memcmp(*(const void **)(v2 + 16), s2, n);
                          if ( v7 == 0 )
                            v7 = v6;
                          if ( v7 < 0 )
                            break;
                          v18 = v2;
                          v2 = *(uint32_t *)(v2 + 8);
                          if ( v2 == 0 )
                            goto LABEL_21;
                        }
                        v2 = *(uint32_t *)(v2 + 12);
                      }
                      while ( v2 != 0 );
LABEL_21:
                      if ( (uint32_t *)v18 == a1 + 1 )
                      {
LABEL_43:
                        g4_std::string::construct_copy(&s1, &v39);
                        v42 = 2139095039;
                        v43 = 2139095039;
                        v44 = 2139095039;
                        v45 = -8388609;
                        v46 = -8388609;
                        v47 = -8388609;
                        if ( a1[5] == 0 )
                          goto LABEL_45;
                        v16 = a1[4];
                        if ( (int)g4_std::string::compare_str(v16 + 16, &s1) >= 0 )
                          goto LABEL_45;
                      }
                      else
                      {
                        v8 = *(uint32_t *)(*(uint32_t *)(v18 + 16) - 12);
                        v9 = v8;
                        if ( v3 <= v8 )
                          v9 = v3;
                        v10 = memcmp(s2, *(const void **)(v18 + 16), v9);
                        if ( v10 == 0 )
                          v10 = v3 - v8;
                        if ( v10 >= 0 )
                          goto LABEL_27;
                        g4_std::string::construct_copy(&s1, &v39);
                        v43 = 2139095039;
                        v44 = 2139095039;
                        v45 = -8388609;
                        v46 = -8388609;
                        v47 = -8388609;
                        v42 = 2139095039;
                        v12 = *((uint32_t *)s1 - 3);
                        v13 = *(uint32_t *)(*(uint32_t *)(v18 + 16) - 12);
                        v20 = (void *)v13;
                        if ( v13 > v12 )
                          v13 = *((uint32_t *)s1 - 3);
                        v14 = memcmp(s1, *(const void **)(v18 + 16), v13);
                        v15 = v12 - (uint32_t)(uintptr_t)v20;
                        if ( v14 == 0 )
                          v14 = v15;
                        if ( v14 >= 0 )
                        {
                          if ( (int)g4_std::string::compare_str(v18 + 16, &s1) >= 0 )
                          {
LABEL_42:
                            g4_std::string::Destroy(&s1);
LABEL_27:
                            *(float *)(v18 + 20) = v27;
                            *(float *)(v18 + 24) = v26;
                            *(float *)(v18 + 28) = v25;
                            *(float *)(v18 + 32) = v24;
                            *(float *)(v18 + 36) = v23;
                            *(float *)(v18 + 40) = v22;
                            g4_std::string::Destroy(&v39);
                            goto LABEL_28;
                          }
                          if ( v18 == a1[4] )
                            goto LABEL_56;
                          v17 = sub_19048E0(v18);
                          if ( (int)g4_std::string::compare_str(&s1, v17 + 16) < 0 )
                          {
                            if ( *(uint32_t *)(v18 + 12) != 0 )
                            {
                              sub_4EB8E0(v29, (int)(uintptr_t)a1, v17, v17, (uint32_t *)&s1);
                              goto LABEL_50;
                            }
LABEL_56:
                            sub_4EB8E0(v29, (int)(uintptr_t)a1, 0, v18, (uint32_t *)&s1);
                            v18 = v29[0];
                            goto LABEL_42;
                          }
LABEL_45:
                          sub_4EB9F0((int)(uintptr_t)v28, (int)(uintptr_t)a1, (void **)&s1);
                          v18 = v28[0];
                          goto LABEL_42;
                        }
                        if ( v18 == a1[3] )
                        {
                          sub_4EB8E0(v29, (int)(uintptr_t)a1, v18, v18, (uint32_t *)&s1);
                          v18 = v29[0];
                          goto LABEL_42;
                        }
                        v16 = sub_1904940(v18);
                        if ( (int)g4_std::string::compare_str(v16 + 16, &s1) >= 0 )
                          goto LABEL_45;
                        if ( *(uint32_t *)(v16 + 12) != 0 )
                        {
                          sub_4EB8E0(v29, (int)(uintptr_t)a1, v18, v18, (uint32_t *)&s1);
LABEL_50:
                          v18 = v29[0];
                          goto LABEL_42;
                        }
                      }
                      sub_4EB8E0(v29, (int)(uintptr_t)a1, 0, v16, (uint32_t *)&s1);
                      goto LABEL_50;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if ( strcmp((const char *)sub_B7CE00(&v38), "version") == 0 )
      {
        pugi::xml_node::attribute(v29);
        v31 = v29[0];
        if ( pugi::xml_attribute::as_int(&v31) != -1 )
        {
          if ( sub_B7C650(&v31) != 1 )
            goto LABEL_35;
          v21 = 1;
        }
      }
LABEL_28:
      pugi::xml_node::next_sibling(v29);
      v38 = v29[0];
    }
  }
  v21 = 0;
LABEL_35:
  sub_B7F610(v48);
  return v21;
}

// ----------------------------------------------------------------------------
// Function: sub_4ECA90  (binary VA: 0x4eca90)
// Original: sub_4ECA90
// ----------------------------------------------------------------------------
uint32_t * sub_4ECA90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&unk_213B814);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4ECAB0  (binary VA: 0x4ecab0)
// Original: sub_4ECAB0
// ----------------------------------------------------------------------------
int sub_4ECAB0(int a1)
{
  { g4_std::string::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_4ECAE0  (binary VA: 0x4ecae0)
// Original: sub_4ECAE0
// ----------------------------------------------------------------------------
int sub_4ECAE0(int a1, int a2)
{
  g4_std::string::construct_copy(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_4ECB20  (binary VA: 0x4ecb20)
// Original: sub_4ECB20
// ----------------------------------------------------------------------------
int sub_4ECB20(int *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11[4];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (46u + sizeof(_g4_t_v8)) > _g4_s2 ? (46u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v10)) > _g4_s4 ? (52u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v11)) > _g4_s5 ? (56u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v12)) > _g4_s6 ? (60u + sizeof(_g4_t_v12)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 46u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);

  v1 = a1[1];
  v7 = *a1;
  if ( *a1 != v1 )
  {
    v2 = *a1;
    do
    {
      g4_std::string::Destroy(v2 + 4);
      v6 = v2;
      v2 += 8;
      g4_std::string::Destroy(v6);
    }
    while ( v1 != v2 );
  }
  a1[1] = v7;
  g4_std::string::construct_from_cstr((int)(uintptr_t)&v10, "00:00", (int)(uintptr_t)&v8 + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&v9, "en0", (int)(uintptr_t)&v8);
  g4_std::string::construct_copy(v11, &v9);
  g4_std::string::construct_copy(v12, &v10);
  v3 = a1[1];
  if ( v3 == a1[2] )
  {
    _g4_pair_vec_insert_aux(a1, a1[1], v11);
  }
  else
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      g4_std::string::construct_copy(a1[1], v11);
      g4_std::string::construct_copy(v3 + 4, v12);
      v4 = a1[1];
    }
    a1[1] = v4 + 8;
  }
  g4_std::string::Destroy(v12);
  g4_std::string::Destroy(v11);
  g4_std::string::Destroy(&v9);
  { g4_std::string::Destroy(&v10); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_4ECC50  (binary VA: 0x4ecc50)
// Original: sub_4ECC50
// ----------------------------------------------------------------------------
int * sub_4ECC50()
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef char _g4_t_v8[4];
  typedef char _g4_t_v9[4];
  typedef uint32_t _g4_t_v10[2];
  typedef int (**_g4_t_v11)(int);
  typedef int (**_g4_t_v12)(int);
  typedef char _g4_t_v13[8];
  typedef char _g4_t_v14[4];
  typedef int (**_g4_t_v15)(int);
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v4)) > _g4_s1 ? (29u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v5)) > _g4_s2 ? (32u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v6)) > _g4_s3 ? (36u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v7)) > _g4_s4 ? (40u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v8)) > _g4_s5 ? (44u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v9)) > _g4_s6 ? (48u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v10)) > _g4_s7 ? (52u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v11)) > _g4_s8 ? (60u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v12)) > _g4_s9 ? (64u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v13)) > _g4_s10 ? (92u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v14)) > _g4_s11 ? (100u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v15)) > _g4_s12 ? (104u + sizeof(_g4_t_v15)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 29u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 32u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 92u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 100u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 104u);

  if ( byte_20D1830 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D1830) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_20D1840, (char *)&unk_1B15112, (int)(uintptr_t)&v4);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D1830);
    __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D1840, &unk_20D1280);
  }
  if ( *(uint32_t *)(dword_20D1840 - 12) != 0 )
    return (int *)(&dword_20D1840);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&v6, "00:00", (int)(uintptr_t)&v4 + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&v7, "en0", (int)(uintptr_t)&v4 + 2);
  g4_std::string::construct_copy(v8, &v7);
  g4_std::string::construct_copy(v9, &v6);
  v1 = (uint32_t *)opNew(8u);
  v2 = v1 + 1;
  if ( v1 != nullptr )
  {
    g4_std::string::construct_copy(v1, v8);
    g4_std::string::construct_copy(v1 + 1, v9);
    v2 = v1 + 1;
  }
  v3 = v2;
  g4_std::string::Destroy(v9);
  g4_std::string::Destroy(v8);
  g4_std::string::Destroy(&v7);
  g4_std::string::Destroy(&v6);
  g4_std::introsort_loop_gnu_cxx_normal_iterator_cc0b8d(
    v1,
    v1 + 2,
    0);
  g4_std::insertion_sort_gnu_cxx_normal_iterator_2df410(
    (const void **)v1,
    (const void **)(v1 + 2));
  sub_19337B0(v10, 24);
  g4_std::ostream::write(&v11, v1[1], *(uint32_t *)(v1[1] - 12));
  sub_1931AF0(&v5);
  g4_std::string::assign_str(&dword_20D1840, &v5);
  g4_std::string::Destroy(&v5);
  v10[0] = (uint32_t)(uintptr_t)(&off_20AAFEC);
  v11 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v15 = (int (**)(int))(&off_20AB014);
  v12 = (int (**)(int))(&off_20AADA8);
  g4_std::string::Destroy(v14);
  v12 = (int (**)(int))(&off_20AB2C8);
  sub_1902180(v13);
  v10[0] = (uint32_t)(uintptr_t)(&off_20AAF6C);
  *(uint32_t *)((char *)v10 + (uint32_t)*(&off_20AAF6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAF94);
  v11 = (int (**)(int))(&off_20AAEEC);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(&off_20AAF00);
  v10[0] = (uint32_t)(uintptr_t)(&off_20AAF2C);
  *(uint32_t *)((char *)v10 + (uint32_t)*(&off_20AAF2C - 3)) = (uint32_t)(uintptr_t)(&off_20AAF40);
  v10[1] = 0;
  v15 = (int (**)(int))(&off_20AA2C0);
  sub_1900B90(&v15);
  g4_std::string::Destroy(v3);
  g4_std::string::Destroy(v1);
  if ( v1 == nullptr )
    return (int *)(&dword_20D1840);
  opDelete(v1);
  return (int *)(&dword_20D1840);
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_2df410  (binary VA: 0x4ed1f0)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<std::pair<std::string,std::string> *,std::vector<std::pair<std::string,std::string>>>>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_gnu_cxx_normal_iterator_2df410(const void **a1, const void **a2)
{
  int v2;
  int v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  bool v9;
  const void *v10;
  const void *v11;
  size_t v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  size_t v17;
  size_t v18;
  size_t v19;
  int v20;
  int v21;
  const void **i;
  const void *s1;
  void *s2;
  size_t v25;
  size_t v26;
  int v27;
  int v28;
  const void **v29;
  const void **v30;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef const void **_g4_t_v34;
  typedef const void **_g4_t_v35;
  typedef const void **_g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef const void **_g4_t_v38;
  typedef void *_g4_t_v39;
  typedef void *_g4_t_v40[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_n)) > _g4_s0 ? (8u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v32)) > _g4_s1 ? (16u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v33)) > _g4_s2 ? (16u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v34)) > _g4_s3 ? (20u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v35)) > _g4_s4 ? (24u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v36)) > _g4_s5 ? (28u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v37)) > _g4_s6 ? (32u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v38)) > _g4_s7 ? (36u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v39)) > _g4_s8 ? (56u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v40)) > _g4_s9 ? (60u + sizeof(_g4_t_v40)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);

  if ( a2 != a1 && a1 + 2 != a2 )
  {
    v36 = a1 + 2;
    do
    {
      while ( 1 )
      {
        v35 = v36;
        v10 = *a1;
        v11 = *v36;
        v12 = *((uint32_t *)*a1 - 3);
        v13 = *((uint32_t *)*v36 - 3);
        if ( v12 <= v13 )
          v13 = *((uint32_t *)*a1 - 3);
        v32 = *((uint32_t *)*v36 - 3);
        v37 = v13;
        v14 = memcmp(*v36, *a1, v13);
        if ( v14 == 0 )
          v14 = v32 - v12;
        if ( v14 < 0 )
          break;
        v15 = memcmp(v10, v11, v37);
        v16 = v12 - v32;
        if ( v15 == 0 )
          v15 = v16;
        if ( v15 >= 0 )
        {
          v17 = *((uint32_t *)v36[1] - 3);
          v18 = v17;
          v19 = *((uint32_t *)a1[1] - 3);
          if ( v19 <= v17 )
            v18 = *((uint32_t *)a1[1] - 3);
          v20 = v17 - v19;
          v21 = memcmp(v36[1], a1[1], v18);
          if ( v21 == 0 )
            v21 = v20;
          if ( v21 < 0 )
            break;
        }
        g4_std::string::construct_copy(&v39, v36);
        g4_std::string::construct_copy(v40, v36 + 1);
        v34 = v36 - 2;
        for ( i = v36 - 2; ; i = v34 )
        {
          s1 = *i;
          s2 = v39;
          v38 = i;
          v25 = *((uint32_t *)*i - 3);
          v26 = *((uint32_t *)v39 - 3);
          if ( v25 <= v26 )
            v26 = v25;
          v33 = *((uint32_t *)v39 - 3);
          n = v26;
          v27 = memcmp(v39, s1, v26);
          if ( v27 == 0 )
            v27 = v33 - v25;
          if ( v27 >= 0 )
          {
            v2 = memcmp(s1, s2, n);
            v3 = v25 - v33;
            if ( v2 == 0 )
              v2 = v3;
            if ( v2 < 0 )
              break;
            v4 = *((uint32_t *)v40[0] - 3);
            v5 = v4;
            v6 = *((uint32_t *)v34[1] - 3);
            if ( v6 <= v4 )
              v5 = *((uint32_t *)v34[1] - 3);
            v7 = v4 - v6;
            v8 = memcmp(v40[0], v34[1], v5);
            if ( v8 == 0 )
              v8 = v7;
            if ( v8 >= 0 )
              break;
          }
          g4_std::string::assign_str(v35, v34);
          g4_std::string::assign_str(v35 + 1, v34 + 1);
          v34 -= 2;
          v35 = v38;
        }
        g4_std::string::assign_str(v35, &v39);
        g4_std::string::assign_str(v35 + 1, v40);
        g4_std::string::Destroy(v40);
        g4_std::string::Destroy(&v39);
        v9 = a2 == v36 + 2;
        v36 += 2;
        if ( v9 )
          return;
      }
      g4_std::string::construct_copy(&v39, v36);
      g4_std::string::construct_copy(v40, v36 + 1);
      v28 = ((char *)v36 - (char *)a1) >> 3;
      v29 = v36 + 2;
      if ( v28 > 0 )
      {
        v30 = v36;
        do
        {
          g4_std::string::assign_str(v30, v30 - 2);
          g4_std::string::assign_str(v30 + 1, v30 - 1);
          --v28;
          v30 -= 2;
        }
        while ( v28 != 0 );
        v29 = v36 + 2;
      }
      g4_std::string::assign_str(a1, &v39);
      g4_std::string::assign_str(a1 + 1, v40);
      g4_std::string::Destroy(v40);
      g4_std::string::Destroy(&v39);
      v36 = v29;
    }
    while ( a2 != v29 );
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::unguarded_linear_insert_gnu_cxx_normal_iterator_293bc1  (binary VA: 0x4ed540)
// Original: std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<std::pair<std::string,std::string> *,std::vector<std::pair<std::string,std::string>>>>
// ----------------------------------------------------------------------------
int g4_std::unguarded_linear_insert_gnu_cxx_normal_iterator_293bc1(const void **a1)
{
  const void **v1;
  const void *s2;
  void *v3;
  size_t v4;
  size_t n;
  int v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  typedef size_t _g4_t_v15;
  typedef int _g4_t_v16;
  typedef const void **_g4_t_i;
  typedef const void **_g4_t_v18;
  typedef const void **_g4_t_v19;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_v21[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_i)) > _g4_s2 ? (12u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_s1)) > _g4_s5 ? (40u + sizeof(_g4_t_s1)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v21)) > _g4_s6 ? (44u + sizeof(_g4_t_v21)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);

  g4_std::string::construct_copy(&s1, a1);
  g4_std::string::construct_copy(v21, a1 + 1);
  v1 = a1 - 2;
  v18 = a1;
  for ( i = a1 - 2; ; v1 = i )
  {
    s2 = *v1;
    v3 = s1;
    v19 = v1;
    v4 = *((uint32_t *)*v1 - 3);
    n = *((uint32_t *)s1 - 3);
    if ( v4 <= n )
      n = v4;
    v16 = *((uint32_t *)s1 - 3);
    v15 = n;
    v6 = memcmp(s1, s2, n);
    if ( v6 == 0 )
      v6 = v16 - v4;
    if ( v6 >= 0 )
    {
      v7 = memcmp(s2, v3, v15);
      v8 = v4 - v16;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v9 = *((uint32_t *)v21[0] - 3);
      v10 = v9;
      v11 = *((uint32_t *)i[1] - 3);
      if ( v11 <= v9 )
        v10 = *((uint32_t *)i[1] - 3);
      v12 = v9 - v11;
      v13 = memcmp(v21[0], i[1], v10);
      if ( v13 == 0 )
        v13 = v12;
      if ( v13 >= 0 )
        break;
    }
    g4_std::string::assign_str(v18, i);
    g4_std::string::assign_str(v18 + 1, i + 1);
    i -= 2;
    v18 = v19;
  }
  g4_std::string::assign_str(v18, (uint32_t *)&s1);
  g4_std::string::assign_str(v18 + 1, v21);
  g4_std::string::Destroy(v21);
  { g4_std::string::Destroy(&s1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: g4_std::iter_swap_gnu_cxx_normal_iterator_46806d  (binary VA: 0x4ed6d0)
// Original: std::iter_swap<__gnu_cxx::__normal_iterator<std::pair<std::string,std::string> *,std::vector<std::pair<std::string,std::string>>>,__gnu_cxx::__normal_iterator<std::pair<std::string,std::string> *,std::vector<std::pair<std::string,std::string>>>>
// ----------------------------------------------------------------------------
int g4_std::iter_swap_gnu_cxx_normal_iterator_46806d(int a1, int a2)
{
  typedef uint8_t _g4_t_v3[4];
  typedef uint8_t _g4_t_v4[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  g4_std::string::construct_copy(v3, a1);
  g4_std::string::construct_copy(v4, a1 + 4);
  g4_std::string::assign_str(a1, a2);
  g4_std::string::assign_str(a1 + 4, a2 + 4);
  g4_std::string::assign_str(a2, v3);
  g4_std::string::assign_str(a2 + 4, v4);
  g4_std::string::Destroy(v4);
  { g4_std::string::Destroy(v3); return 0; }
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_cc0b8d  (binary VA: 0x4edce0)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<std::pair<std::string,std::string> *,std::vector<std::pair<std::string,std::string>>>,int>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_cc0b8d(int a1, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int j;
  int v16;
  int v17;
  int v18;
  int m;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_k;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_i;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char _g4_t_v42[4];
  typedef char _g4_t_v43[4];
  typedef char _g4_t_v44[4];
  typedef char _g4_t_v45[4];
  typedef char _g4_t_v46[4];
  typedef char _g4_t_v47[4];
  typedef char _g4_t_v48[4];
  typedef char _g4_t_v49[4];
  typedef char _g4_t_v50[4];
  typedef char _g4_t_v51[4];
  typedef char _g4_t_v52[4];
  typedef char _g4_t_v53[4];
  typedef char _g4_t_v54[4];
  typedef uint32_t _g4_t_v55[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v22)) > _g4_s1 ? (0u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v23)) > _g4_s2 ? (0u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v24)) > _g4_s3 ? (0u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v25)) > _g4_s4 ? (4u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v26)) > _g4_s5 ? (8u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v27)) > _g4_s6 ? (12u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v28)) > _g4_s7 ? (16u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v29)) > _g4_s8 ? (20u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v30)) > _g4_s9 ? (24u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v31)) > _g4_s10 ? (24u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v32)) > _g4_s11 ? (24u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v33)) > _g4_s12 ? (24u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v34)) > _g4_s13 ? (28u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_k)) > _g4_s14 ? (28u + sizeof(_g4_t_k)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v36)) > _g4_s15 ? (32u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v37)) > _g4_s16 ? (32u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_i)) > _g4_s17 ? (32u + sizeof(_g4_t_i)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v39)) > _g4_s18 ? (32u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v40)) > _g4_s19 ? (36u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v41)) > _g4_s20 ? (40u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v42)) > _g4_s21 ? (48u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v43)) > _g4_s22 ? (52u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v44)) > _g4_s23 ? (56u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v45)) > _g4_s24 ? (60u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v46)) > _g4_s25 ? (64u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v47)) > _g4_s26 ? (68u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v48)) > _g4_s27 ? (72u + sizeof(_g4_t_v48)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v49)) > _g4_s28 ? (76u + sizeof(_g4_t_v49)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v50)) > _g4_s29 ? (80u + sizeof(_g4_t_v50)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v51)) > _g4_s30 ? (84u + sizeof(_g4_t_v51)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v52)) > _g4_s31 ? (88u + sizeof(_g4_t_v52)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v53)) > _g4_s32 ? (92u + sizeof(_g4_t_v53)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v54)) > _g4_s33 ? (96u + sizeof(_g4_t_v54)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v55)) > _g4_s34 ? (100u + sizeof(_g4_t_v55)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 88u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 92u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 96u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 100u);

  v55[3] = (uint32_t)(uintptr_t)(&a1);
  v3 = a2;
  v25 = a1;
  result = a2 - a1;
  v26 = a3;
  if ( a2 - a1 > 135 )
  {
    if ( a3 != 0 )
    {
      while ( 1 )
      {
        --v26;
        v41 = v25 + (((v3 - v25) >> 4) << 3);
        v5 = v3 - v41;
        v28 = v41;
        if ( v3 - v41 <= 135 )
        {
          v3 = v41;
          v17 = v41;
        }
        else
        {
          if ( v26 != 0 )
          {
            v29 = v26;
            while ( 1 )
            {
              --v29;
              v40 = v28 + (((v3 - v28) >> 4) << 3);
              v6 = v40;
              v7 = v3 - v40;
              if ( v3 - v40 > 135 )
              {
                if ( v29 != 0 )
                {
                  v36 = v40;
                  v8 = v29;
                  while ( 1 )
                  {
                    --v8;
                    v40 = v36 + (((v3 - v36) >> 4) << 3);
                    v21 = v40;
                    g4_std::introsort_loop_gnu_cxx_normal_iterator_cc0b8d(
                      v40,
                      v3,
                      v8);
                    v3 = v21;
                    v7 = v21 - v36;
                    if ( v21 - v36 <= 135 )
                      break;
                    if ( v8 == 0 )
                    {
                      v6 = v36;
                      goto LABEL_16;
                    }
                  }
                }
                else
                {
LABEL_16:
                  v37 = v7 >> 3;
                  v27 = v3;
                  v30 = v6;
                  v9 = ((v7 >> 3) - 2) >> 1;
                  v10 = v6 + 8 * v9;
                  while ( 1 )
                  {
                    g4_std::string::construct_copy(v52, v10);
                    g4_std::string::construct_copy(v53, v10 + 4);
                    g4_std::string::construct_copy(v50, v52);
                    g4_std::string::construct_copy(v51, v53);
                    v10 -= 8;
                    sub_4EB440(v30, v9, v37, (int)(uintptr_t)v50);
                    g4_std::string::Destroy(v51);
                    g4_std::string::Destroy(v50);
                    if ( v9 == 0 )
                      break;
                    --v9;
                    g4_std::string::Destroy(v53);
                    g4_std::string::Destroy(v52);
                  }
                  g4_std::string::Destroy(v53);
                  g4_std::string::Destroy(v52);
                  v11 = v27;
                  v36 = v30;
                  v31 = v30 + 4;
                  while ( 1 )
                  {
                    v12 = v11 - 8;
                    v22 = v11;
                    g4_std::string::construct_copy(v52, v11 - 8);
                    v22 -= 4;
                    g4_std::string::construct_copy(v53, v22);
                    g4_std::string::assign_str(v12, v36);
                    g4_std::string::assign_str(v22, v31);
                    g4_std::string::construct_copy(v54, v52);
                    g4_std::string::construct_copy(v55, v53);
                    sub_4EB440(v36, 0, (v12 - v36) >> 3, (int)(uintptr_t)v54);
                    g4_std::string::Destroy(v55);
                    g4_std::string::Destroy(v54);
                    g4_std::string::Destroy(v53);
                    g4_std::string::Destroy(v52);
                    if ( v12 - v36 <= 15 )
                      break;
                    v11 = v12;
                  }
                }
                v6 = v36;
              }
              v5 = v6 - v28;
              if ( v6 - v28 <= 135 )
                break;
              if ( v29 == 0 )
              {
                v32 = v6;
                goto LABEL_24;
              }
              v3 = v6;
            }
          }
          else
          {
            v32 = v3;
LABEL_24:
            v34 = v5 >> 3;
            v13 = ((v5 >> 3) - 2) >> 1;
            v14 = v28 + 8 * v13;
            for ( i = v14; ; v14 = i )
            {
              g4_std::string::construct_copy(v52, v14);
              g4_std::string::construct_copy(v53, i + 4);
              g4_std::string::construct_copy(v46, v52);
              g4_std::string::construct_copy(v47, v53);
              sub_4EB440(v28, v13, v34, (int)(uintptr_t)v46);
              g4_std::string::Destroy(v47);
              g4_std::string::Destroy(v46);
              i -= 8;
              if ( v13 == 0 )
                break;
              --v13;
              g4_std::string::Destroy(v53);
              g4_std::string::Destroy(v52);
            }
            g4_std::string::Destroy(v53);
            g4_std::string::Destroy(v52);
            for ( j = v32; ; j = v16 )
            {
              v16 = j - 8;
              v23 = j;
              g4_std::string::construct_copy(v52, j - 8);
              v23 -= 4;
              g4_std::string::construct_copy(v53, v23);
              g4_std::string::assign_str(v16, v28);
              g4_std::string::assign_str(v23, v28 + 4);
              g4_std::string::construct_copy(v48, v52);
              g4_std::string::construct_copy(v49, v53);
              sub_4EB440(v28, 0, (v16 - v28) >> 3, (int)(uintptr_t)v48);
              g4_std::string::Destroy(v49);
              g4_std::string::Destroy(v48);
              g4_std::string::Destroy(v53);
              g4_std::string::Destroy(v52);
              if ( v16 - v28 <= 15 )
                break;
            }
          }
          v3 = v41;
          v17 = v41;
        }
        result = v17 - v25;
        if ( result <= 135 )
          break;
        if ( v26 == 0 )
          goto LABEL_33;
      }
    }
    else
    {
LABEL_33:
      v33 = result >> 3;
      v39 = ((result >> 3) - 2) >> 1;
      v18 = v25 + 8 * v39;
      for ( k = v18; ; v18 = k )
      {
        g4_std::string::construct_copy(v52, v18);
        g4_std::string::construct_copy(v53, k + 4);
        g4_std::string::construct_copy(v42, v52);
        g4_std::string::construct_copy(v43, v53);
        sub_4EB440(v25, v39, v33, (int)(uintptr_t)v42);
        g4_std::string::Destroy(v43);
        g4_std::string::Destroy(v42);
        k -= 8;
        if ( v39 == 0 )
          break;
        --v39;
        g4_std::string::Destroy(v53);
        g4_std::string::Destroy(v52);
      }
      g4_std::string::Destroy(v53);
      g4_std::string::Destroy(v52);
      for ( m = v3; ; m = v20 )
      {
        v20 = m - 8;
        v24 = m;
        g4_std::string::construct_copy(v52, m - 8);
        v24 -= 4;
        g4_std::string::construct_copy(v53, v24);
        g4_std::string::assign_str(v20, v25);
        g4_std::string::assign_str(v24, v25 + 4);
        g4_std::string::construct_copy(v44, v52);
        g4_std::string::construct_copy(v45, v53);
        sub_4EB440(v25, 0, (v20 - v25) >> 3, (int)(uintptr_t)v44);
        g4_std::string::Destroy(v45);
        g4_std::string::Destroy(v44);
        g4_std::string::Destroy(v53);
        g4_std::string::Destroy(v52);
        if ( v20 - v25 <= 15 )
          break;
      }
    }
  }
  return result;
}

