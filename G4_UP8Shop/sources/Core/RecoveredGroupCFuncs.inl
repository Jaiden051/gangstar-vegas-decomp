// Auto-extracted Group C C++14 implementations via scratch/extract_group_c.py
// Keep DecompForwardDecls.h / DecompTypes.h untouched; compiled cleanly inside Gangstar4 target.

#include <alloca.h>

static inline uint32_t g4_m128_u32_lane(__m128 v, int i) { uint32_t a[4]; std::memcpy(a, &v, 16); return a[i]; }
static inline hkgpConvexHull::AbsoluteScaleConfig *g4_init_AbsoluteScaleConfig(hkgpConvexHull::AbsoluteScaleConfig *self) {
  *(uint32_t *)self = 1;
  *((uint32_t *)self + 1) = 925353388;
  *((uint32_t *)self + 2) = 0;
  return self;
}

namespace g4_std { namespace string {
  size_t compare(const void **a1, char *s);
  inline size_t compare(const void **a1, const char *s) { return compare(a1, const_cast<char *>(s)); }
} }

// Local .bss / .data.rel.ro backing storage for Group C recovered functions:
alignas(8) static uint8_t byte_20D6CF0[8] = {};
static uint32_t dword_20D6CF8 = 0;
static uint32_t dword_20D5204 = 0;
static uint32_t dword_20D5208 = 0;
static uint8_t byte_20D65F0[24] = {};
static uint8_t unk_20D5504[16] = {};
static void *off_204A250 = nullptr;
static void *off_2062168 = reinterpret_cast<void *>(&sub_8AFBE0);
static uint8_t g4_bss_20D51CC = 0;
static uint8_t g4_bss_20D51F0 = 0;

// Local arity-padding forwarding adapters to existing libGangstar4Core.a implementations (DecompForwardDecls.h untouched):
template <typename A1, typename A2, typename A3, typename A4, typename A5>
inline int sub_9D4450(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) {
  return ::sub_9D4450(a1, a2, a3, a4, a5, 0);
}
template <typename A1>
inline int *sub_7B29B0(A1 a1) {
  return ::sub_7B29B0(g4_arg_cast<int *>(a1), 0, 0, nullptr, 0, nullptr);
}
template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12>
inline int sub_7080F0(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12) {
  return ::sub_7080F0(
    g4_arg_cast<int>(a1), g4_arg_cast<uint32_t *>(a2), g4_arg_cast<float *>(a3), g4_arg_cast<uint32_t *>(a4),
    g4_arg_cast<int *>(a5), g4_arg_cast<int>(a6), g4_arg_cast<uint32_t *>(a7), g4_arg_cast<int>(a8),
    g4_arg_cast<uint8_t>(a9), g4_arg_cast<int *>(a10), g4_arg_cast<int>(a11), g4_arg_cast<int>(a12));
}
template <typename A1, typename A2, typename A3, typename A4>
inline glitch::scene::ISceneNode::Self *sub_993170(A1 a1, A2 a2, A3 a3, A4 a4) {
  return ::sub_993170(
    g4_arg_cast<uint32_t *>(a1), g4_arg_cast<glitch::scene::ISceneNode::Self *>(a2),
    g4_arg_cast<char>(a3), g4_arg_cast<char>(a4),
    0, 0, 0, 0, 0, 0, 0, 0, nullptr, 0.0f, 0.0f, 0.0f,
    0, 0, 0, 0, 0, 0, 0,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}
template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
inline int sub_6F88B0(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) {
  return ::sub_6F88B0(
    g4_arg_cast<uint32_t *>(a1), g4_arg_cast<int>(a2), g4_arg_cast<int>(a3), g4_arg_cast<int>(a4),
    g4_arg_cast<int>(a5), g4_arg_cast<int>(a6), g4_arg_cast<int>(a7), g4_arg_cast<char *>(a8),
    nullptr, nullptr);
}
template <typename A1, typename A2, typename A3, typename A4>
inline wchar_t *sub_1940CF0(A1 a1, A2 a2, A3 a3, A4 a4) {
  return ::sub_1940CF0(
    g4_arg_cast<int>(a1), g4_arg_cast<char *>(a2), g4_arg_cast<int>(a3), g4_arg_cast<int>(a4),
    nullptr, nullptr, nullptr, nullptr);
}
template <typename A1, typename A2, typename A3>
inline uint32_t *sub_87DA30(A1 a1, A2 a2, A3 a3) {
  return ::sub_87DA30(
    g4_arg_cast<glitch::IObject::Self *>(a1), g4_arg_cast<int *>(a2), g4_arg_cast<int>(a3),
    0, 0, 0, 0, 0, 0, 0, nullptr);
}
template <typename A1, typename A2, typename A3, typename A4>
inline void sub_8550D0(A1 a1, A2 a2, A3 a3, A4 a4) {
  ::sub_8550D0(
    g4_arg_cast<uint32_t *>(a1), g4_arg_cast<int>(a2), g4_arg_cast<int>(a3), g4_arg_cast<int>(a4),
    0, nullptr, 0, 0);
}
template <typename A1, typename A2, typename A3, typename A4, typename A5>
inline int sub_705F20(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) {
  return ::sub_705F20(
    a1, a2, a3, a4, a5, nullptr, 0, 0, 0, nullptr, nullptr, 0, 0);
}
template <typename A1, typename A2, typename A3, typename A4>
inline int sub_707A10(A1 a1, A2 a2, A3 a3, A4 a4) {
  return ::sub_707A10(a1, a2, a3, a4, 0);
}
template <typename A1, typename A2, typename A3, typename A4>
inline int sub_9CB030(A1 a1, A2 a2, A3 a3, A4 a4) {
  return ::sub_9CB030(a1, a2, a3, a4, 0, 0, 0, 0);
}
template <typename A1, typename A2, typename A3>
inline int sub_80BA60(A1 a1, A2 a2, A3 a3) {
  return ::sub_80BA60(
    g4_arg_cast<int>(a1), g4_arg_cast<int *>(a2), g4_arg_cast<int>(a3),
    0, 0, 0, 0, nullptr, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

// Forward declarations for Group C recovered functions:
int sub_9E54B0(__m128d a1, int a2);
int * sub_902580(int *a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 uint32_t *a10,
 int a11,
 int a12,
 int a13,
 int a14,
 float a15,
 float a16,
 float a17);
int sub_B84B70(int a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 signed int a15,
 signed int a16,
 int a17,
 int a18,
 int a19);
int sub_5CF850(uint32_t **a1, int a2);
void sub_9D5250(int a1);
void sub_9B2010(int a1, uint32_t *a2, char a3, int a4);
void sub_9B8A30(int *a1, int *a2, char a3, int a4);
int sub_9335E0(uint32_t *a1, int a2);
void sub_9368F0(int *a1);
uint32_t * sub_936790(int *a1);
uint32_t * sub_936630(int *a1);
void sub_12C3090(int a1, int a2, int a3);
void sub_B73820(int64_t a1);
char sub_9D5C90(int *a1, uint8_t a2, char a3);
int sub_A00190(int a1, int a2);
void sub_BA8B80(glf::App::Self *a1, int a2);
void sub_B99A40(uint32_t *a1, int a2);
uint32_t * sub_1942300(uint32_t *a1,
 int a2,
 uint32_t *a3,
 int a4,
 int a5,
 wchar_t a6,
 char a7,
 int64_t a8);
uint32_t * sub_1942740(uint32_t *a1,
 int a2,
 uint32_t *a3,
 int a4,
 int a5,
 wchar_t a6,
 char a7,
 int64_t a8);
int sub_6C13B0(uint32_t *a1, int a2);
void sub_939820(g4_cxa_guard_t *a1, char a2);
volatile int32_t * sub_63B030(__m128d a1, int a2);
volatile int32_t * sub_8A2990(uint32_t *a1, uint32_t *a2);
int sub_80BDB0(int a1, int *a2);
void sub_7B76E0(int a1);
const char * sub_18883F0(uint32_t *a1, uint32_t *a2, hkMemoryAllocator::Self *a3, int a4);
int sub_940D80(int a1);
int sub_188B280(int a1, hkDataObject_Value::Self **a2, int a3);
float sub_16F4B90(hkpConvexVerticesShape::Self *a1, int a2, float *a3);

// Group C [sub_9E54B0] (VA 0x9e54b0) | bad sp value at call has been detected, the output may be wrong!
int sub_9E54B0(__m128d a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  bool v11; // zf
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int result;
  uint32_t *v25;
  int *v26;
  int v27;
  uint16_t ParameterID; // ax
  uint8_t TechniqueID;
  const char **v30;
  glitch::video::CMaterial::Self *v31;
  char v32;
  const char **v33;
  void *v34;
  char v35;
  int v36; // [esp-1Ch] [ebp-F4h]
  int v37;
  int v38;
  int v39;
  int v40; // [esp-Ch] [ebp-E4h]
  int v41;
  int v42;
  int v43;
  int v44;
  glitch::video::CMaterialRenderer::Self *v45;
  glitch::video::CMaterial::Self *v46;
  glitch::video::CMaterialRenderer::Self *v47;
  void *obj;
  uint8_t obja;
  char objb;
  g4_cxa_guard_t *v51;
  int v52; // [esp+Ch] [ebp-CCh]
  int v53; // [esp+Ch] [ebp-CCh]
  uint32_t *v54[3];
  int v55; // [esp+1Ch] [ebp-BCh] BYREF
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v56;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v57;
  int v58;
  int v59; // [esp+2Ch] [ebp-ACh]
  int v60;
  int v61;
  int v62;
  int v63; // [esp+3Ch] [ebp-9Ch]
  int v64;
  int v65;
  int v66;
  int v67; // [esp+4Ch] [ebp-8Ch]
  int v68;
  int v69;
  int v70;
  int v71; // [esp+5Ch] [ebp-7Ch]
  int v72;
  int v73;
  int v74;
  int v75; // [esp+6Ch] [ebp-6Ch] BYREF
  int v76;
  int v77;
  int v78;
  int v79; // [esp+7Ch] [ebp-5Ch]
  int v80;
  int v81;
  int v82;
  int v83; // [esp+8Ch] [ebp-4Ch]
  int v84;
  int v85;
  int v86;
  int v87; // [esp+9Ch] [ebp-3Ch]
  int v88; // [esp+A0h] [ebp-38h]
  int v89; // [esp+A4h] [ebp-34h]
  int v90; // [esp+A8h] [ebp-30h]
  int v91; // [esp+ACh] [ebp-2Ch]
  int v92; // [esp+B0h] [ebp-28h]
  int v93; // [esp+B4h] [ebp-24h]
  int v94; // [esp+B8h] [ebp-20h]
  int v95; // [esp+BCh] [ebp-1Ch]
  int v96; // [esp+C0h] [ebp-18h]
  int v97; // [esp+C4h] [ebp-14h]
  int *v98; // [esp+C8h] [ebp-10h]
  uint32_t *v99; // [esp+CCh] [ebp-Ch]
  int *v100; // [esp+D0h] [ebp-8h]
  int v101; // [esp+D4h] [ebp-4h]
  int retaddr; // [esp+DCh] [ebp+4h]

  v98 = &a2;
  v2 = a2;
  if ( G4_VCALL<int>(a2, 428, v36, v37, v38, v39, v40, v41, v42, v43, obj, v51, v52, v54[0], v54[1], v54[2], v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97) != 0
    && byte_20D4A50 == 0
    && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 1028443341;
  v62 = 1065353216;
  v63 = 1065353216;
  LOWORD(v64) = 0;
  v65 = 0;
  LOBYTE(v66) = 0;
  v67 = 0;
  v3 = sub_5F28E0();
  sub_AB1FF0((int)(uintptr_t)v3, 2, (vox::EmitterHandle::Self *)(v2 + 3996), (int)(uintptr_t)&v58);
  v4 = *(int **)(v2 + 1840);
  if ( v4 != nullptr )
  {
    sub_892760(v4, v2);
    *(uint32_t *)(v2 + 1872) &= ~0x100u;
    *(uint32_t *)(v2 + 1876) = *(uint32_t *)(v2 + 1876);
  }
  v5 = *(uint32_t *)(v2 + 600);
  if ( v5 != 0 )
  {
    v99 = (uint32_t *)&loc_6;
    v6 = sub_97C4D0(v5);
    sub_A04A90(v6 + 10, 0, 1065353216);
    v99 = (uint32_t *)&loc_6;
    v7 = sub_97C4D0(*(uint32_t *)(v2 + 600));
    sub_A04A90(v7 + 10, 1, 0);
  }
  v8 = (uint32_t *)G4_VCALL<int>(v2, 560);
  sub_A6DB30(v8);
  if ( (unsigned int)(*(uint32_t *)(v2 + 468) - *(uint32_t *)(v2 + 464)) >> 2 != 0 )
  {
    retaddr = 1;
    sub_9D4450(v2, 156, 1065353216, 125, 0);
    if ( v2 != sub_8F0680() )
      goto LABEL_9;
  }
  else if ( v2 != sub_8F0680() )
  {
LABEL_9:
    *(uint32_t *)(v2 + 3220) = 944879383;
    *(uint8_t *)(v2 + 3216) = 1;
    goto LABEL_10;
  }
  *(uint32_t *)(v2 + 3220) = 953267991;
  *(uint8_t *)(v2 + 3216) = 1;
LABEL_10:
  v9 = *(uint32_t *)(v2 + 176);
  v10 = *(uint32_t *)v2;
  *(uint8_t *)(v2 + 3751) = 0;
  *(uint8_t *)(v2 + 3750) = 0;
  *(uint8_t *)(v2 + 3752) = 0;
  *(uint32_t *)(v2 + 3744) = -1;
  *(uint8_t *)(v2 + 3748) = 0;
  *(uint8_t *)(v2 + 3749) = 1;
  *(uint32_t *)(v2 + 176) = 0;
  (*(void ( **)(int, int, bool))(v10 + 40))(v2, 4, (v9 & 4) != 0);
  G4_VCALL<void>(v2, 40, 64, (v9 & 0x40) != 0);
  G4_VCALL<void>(v2, 40, 1, v9 & 1);
  v11 = *(uint8_t *)(v2 + 2864) == 0;
  *(uint32_t *)(v2 + 2884) = 0;
  if ( !v11 )
    sub_9DA470(v2, 1);
  G4_VCALL<void>(v2, 516);
  G4_VCALL<void>(v2, 604, 0);
  sub_5F76C0((uint32_t *)(v2 + 2296), 0);
  v12 = *(uint32_t *)(v2 + 2296);
  if ( v12 != 0 )
  {
    *(float *)(v2 + 2308) = ((long double ( *)(uint32_t))*(uint32_t *)(*(uint32_t *)v12 + 228))(*(uint32_t *)(v2 + 2296));
    *(uint32_t *)(v2 + 2300) = 0;
    *(uint32_t *)(v2 + 2304) = 0;
  }
  *(uint32_t *)(v2 + 1056) = 0;
  sub_9B73A0((uint32_t *)v2, nullptr);
  sub_5F76C0((uint32_t *)(v2 + 2296), 0);
  v13 = *(uint32_t *)(v2 + 2296);
  if ( v13 != 0 )
  {
    *(float *)(v2 + 2308) = ((long double ( *)(uint32_t))*(uint32_t *)(*(uint32_t *)v13 + 228))(*(uint32_t *)(v2 + 2296));
    *(uint32_t *)(v2 + 2300) = 0;
    *(uint32_t *)(v2 + 2304) = 0;
  }
  v14 = *(uint32_t *)(v2 + 1804);
  *(uint32_t *)(v2 + 4280) = 0;
  *(uint32_t *)(v2 + 1808) = v14;
  *(uint32_t *)(v2 + 1820) = *(uint32_t *)(v2 + 1816);
  v15 = *(uint32_t *)(v2 + 1140);
  *(uint32_t *)(v2 + 4284) = 0;
  *(uint32_t *)(v2 + 4288) = 0;
  *(uint8_t *)(v2 + 4292) = 0;
  *(uint8_t *)(v2 + 4293) = 0;
  *(uint32_t *)(v2 + 4296) = 0;
  *(uint32_t *)(v2 + 4300) = -1;
  *(uint32_t *)(v2 + 4304) = 0;
  *(uint8_t *)(v2 + 4294) = 0;
  *(uint8_t *)(v2 + 4295) = 0;
  *(uint32_t *)(v2 + 4308) = 0;
  *(uint32_t *)(v2 + 4324) = 0;
  *(uint32_t *)(v2 + 4320) = 0;
  *(uint32_t *)(v2 + 4316) = 0;
  *(uint32_t *)(v2 + 4328) = 0;
  *(uint32_t *)(v2 + 4332) = 0;
  *(uint32_t *)(v2 + 4336) = 0;
  *(uint32_t *)(v2 + 4340) = 0;
  *(uint32_t *)(v2 + 4344) = 0;
  *(uint32_t *)(v2 + 4348) = 0;
  *(uint8_t *)(v2 + 1946) = 0;
  *(uint8_t *)(v2 + 3205) = 0;
  if ( v15 != 0 )
    sub_891590(v15, 0);
  sub_6567A0((uint32_t *)(v2 + 1140), 0);
  v16 = *(uint32_t *)(v2 + 1140);
  if ( v16 != 0 )
    sub_891590(v16, v2);
  sub_6567A0((uint32_t *)(v2 + 1136), 0);
  v11 = *(uint32_t *)(v2 + 604) == 2;
  *(uint8_t *)(v2 + 1103) = 0;
  *(uint8_t *)(v2 + 3404) = 0;
  *(uint32_t *)(v2 + 4252) = 0;
  *(uint32_t *)(v2 + 660) = -1;
  *(uint32_t *)(v2 + 664) = -1;
  *(uint8_t *)(v2 + 652) = 0;
  *(uint32_t *)(v2 + 672) = 1065353216;
  *(uint8_t *)(v2 + 653) = 0;
  *(uint8_t *)(v2 + 654) = 0;
  *(uint32_t *)(v2 + 656) = 0;
  *(uint32_t *)(v2 + 668) = 125;
  *(uint32_t *)(v2 + 676) = -1;
  *(uint32_t *)(v2 + 680) = -1;
  *(uint32_t *)(v2 + 684) = 0;
  *(uint32_t *)(v2 + 688) = 0;
  *(uint8_t *)(v2 + 692) = 0;
  *(uint32_t *)(v2 + 704) = -1;
  *(uint32_t *)(v2 + 708) = -1;
  *(uint8_t *)(v2 + 696) = 0;
  *(uint32_t *)(v2 + 716) = 1065353216;
  *(uint8_t *)(v2 + 697) = 0;
  *(uint8_t *)(v2 + 698) = 0;
  *(uint32_t *)(v2 + 700) = 0;
  *(uint32_t *)(v2 + 712) = 125;
  *(uint32_t *)(v2 + 720) = -1;
  *(uint32_t *)(v2 + 724) = -1;
  *(uint32_t *)(v2 + 728) = 0;
  *(uint32_t *)(v2 + 732) = 0;
  *(uint8_t *)(v2 + 736) = 0;
  if ( !v11 )
  {
    v17 = sub_A04BF0();
    sub_C01660(v17, (uint32_t *)v2);
  }
  sub_9D6900(v2, 0);
  *(uint32_t *)(v2 + 616) = -1;
  *(uint32_t *)(v2 + 620) = -1;
  *(uint32_t *)(v2 + 628) = 1065353216;
  *(uint8_t *)(v2 + 608) = 0;
  *(uint32_t *)(v2 + 612) = 0;
  *(uint8_t *)(v2 + 609) = 0;
  *(uint8_t *)(v2 + 610) = 0;
  *(uint32_t *)(v2 + 624) = 0;
  *(uint32_t *)(v2 + 640) = 0;
  *(uint32_t *)(v2 + 676) = -1;
  *(uint32_t *)(v2 + 660) = -1;
  v18 = *(uint32_t *)(v2 + 604);
  if ( sub_C019B0(-1) )
    *(uint32_t *)(v2 + 792) = -1;
  else
    *(uint32_t *)(v2 + 748) = -1;
  if ( *(uint32_t *)(v2 + 596) != 0 && *(uint32_t *)(v2 + 616) != -1 )
  {
    v19 = sub_C019B0(*(uint32_t *)(v2 + 620));
    v101 = 0;
    v100 = (int *)((&dword_20D7620 + (3 * v18)));
    v99 = (uint32_t *)(v2 + 608);
    v98 = (int *)(v2 + 460);
    if ( v19 )
    {
      sub_9D3DA0((int)(uintptr_t)v98, (int)(uintptr_t)v99, v100, v101);
    }
    else if ( (uint8_t)sub_9D40B0((int)(uintptr_t)v98, v99, v100, v101) != 0 )
    {
      sub_9D6530(*(uint32_t *)(v2 + 480));
    }
  }
  retaddr = 0;
  sub_9D4450(v2, 156, 1065353216, 125, 0);
  *(uint8_t *)(v2 + 2176) = 0;
  *(uint32_t *)(v2 + 3684) = -1;
  *(uint32_t *)(v2 + 2892) = 0;
  *(uint8_t *)(v2 + 3197) = 0;
  sub_982E60(v2, 0, 0);
  sub_67E990((uint32_t *)(v2 + 2024), 0);
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = -1;
  v72 = 3;
  v73 = 0;
  v75 = 0;
  sub_67E990(&v75, 0);
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  sub_67E990(&v75, 0);
  v20 = v68;
  *(uint32_t *)(v2 + 2052) = -1;
  *(uint32_t *)(v2 + 2028) = v20;
  *(uint32_t *)(v2 + 2032) = v69;
  *(uint32_t *)(v2 + 2036) = v70;
  *(uint32_t *)(v2 + 2040) = v71;
  *(uint32_t *)(v2 + 2044) = v72;
  *(uint32_t *)(v2 + 2048) = v73;
  v85 = -1;
  v86 = -1;
  v74 = -1;
  v93 = 0;
  v94 = 0;
  LOBYTE(v95) = 0;
  sub_67E990((uint32_t *)(v2 + 2056), v75);
  *(uint32_t *)(v2 + 2060) = v76;
  *(uint32_t *)(v2 + 2064) = v77;
  *(uint32_t *)(v2 + 2068) = v78;
  *(uint32_t *)(v2 + 2072) = v79;
  *(uint32_t *)(v2 + 2076) = v80;
  *(uint32_t *)(v2 + 2080) = v81;
  *(uint32_t *)(v2 + 2084) = v82;
  *(uint32_t *)(v2 + 2088) = v83;
  *(uint32_t *)(v2 + 2092) = v84;
  *(uint32_t *)(v2 + 2096) = v85;
  *(uint32_t *)(v2 + 2100) = v86;
  *(uint32_t *)(v2 + 2104) = v87;
  *(uint32_t *)(v2 + 2108) = v88;
  *(uint32_t *)(v2 + 2112) = v89;
  *(uint32_t *)(v2 + 2116) = v90;
  *(uint32_t *)(v2 + 2120) = v91;
  *(uint32_t *)(v2 + 2124) = v92;
  *(uint32_t *)(v2 + 2128) = v93;
  *(uint32_t *)(v2 + 2132) = v94;
  *(uint8_t *)(v2 + 2136) = v95;
  sub_67E990(&v75, 0);
  *(uint8_t *)(v2 + 1968) = 0;
  *(uint8_t *)(v2 + 1969) = 0;
  *(uint8_t *)(v2 + 1970) = 0;
  *(uint8_t *)(v2 + 1971) = 1;
  *(uint32_t *)(v2 + 1972) = 4;
  sub_8E8C70(v2, 0);
  sub_923A70((uint32_t *)v2);
  *(uint32_t *)(v2 + 3668) = 0;
  g4_std::string::assign((const void **)(v2 + 3168), (int *)&unk_1B15112, 0);
  v21 = *(uint32_t *)(v2 + 1112);
  *(uint8_t *)(v2 + 3199) = 1;
  *(uint8_t *)(v2 + 3200) = 1;
  if ( v21 >= 0 )
    *(uint32_t *)(v2 + 2508) = v21;
  *(uint32_t *)(v2 + 1112) = -1;
  *(uint32_t *)(v2 + 1872) = 0;
  *(uint32_t *)(v2 + 1876) = 0;
  *(uint8_t *)(v2 + 968) = 0;
  sub_6567A0((uint32_t *)(v2 + 1844), 0);
  v22 = *(uint32_t *)(v2 + 3940);
  *(uint8_t *)(v2 + 2248) = 0;
  if ( v22 != 0 )
    sub_7AFE20(v22);
  sub_5F7770((uint32_t *)(v2 + 1128), 0);
  v23 = *(uint32_t *)v2;
  *(uint32_t *)(v2 + 2260) = 10;
  *(uint32_t *)(v2 + 3424) = -1;
  *(uint32_t *)(v2 + 3428) = -1;
  *(uint32_t *)(v2 + 3432) = -1;
  (*(void ( **)(int))(v23 + 360))(v2);
  result = G4_VCALL<int>(v2, 168);
  v25 = (uint32_t *)result;
  if ( result != 0 )
  {
    result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(result + 288) + 16) + 32) + 124);
    if ( result > 0 )
    {
      v53 = v2;
      v26 = nullptr;
      do
      {
        v27 = *v25;
        v100 = v26;
        v99 = v25;
        (*(void ( **)(uint32_t **))(v27 + 156))(v54);
        if ( v54[0] != nullptr )
        {
          ParameterID = glitch::video::CMaterialRenderer::getParameterID(
                          *((glitch::video::CMaterialRenderer::Self **)v54[0] + 1),
                          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"Object_Alpha",
                          0);
          if ( ParameterID != 0xFFFF )
          {
            v55 = 1065353216;
            glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_float_id_ca1afb(
              v54[0],
              ParameterID,
              0,
              (float *)&v55);
          }
          v45 = (glitch::video::CMaterialRenderer::Self *)v54[0][1];
          v56 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                         a1,
                                                                         (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"L1_----_Al_----_----_----_Dm",
                                                                         nullptr);
          TechniqueID = glitch::video::CMaterialRenderer::getTechniqueID(v45, (const glitch::core::SSharedString::Self *)&v56);
          v30 = (const char **)v56;
          if ( v56 != nullptr && __sync_fetch_and_add((volatile int32_t *)v56, 0xFFFFFFFF) == 1 )
          {
            obja = TechniqueID;
            glitch::core::detail::SSharedStringHeapEntry::SData::release(v30);
            TechniqueID = obja;
          }
          v31 = (glitch::video::CMaterial::Self *)v54[0];
          if ( TechniqueID != 255 && *((uint8_t *)v54[0] + 8) == (uint16_t)TechniqueID )
          {
            v47 = (glitch::video::CMaterialRenderer::Self *)v54[0][1];
            v57 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                                           a1,
                                                                           (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"L1_----_----_----_----_----_----",
                                                                           nullptr);
            v32 = glitch::video::CMaterialRenderer::getTechniqueID(v47, (const glitch::core::SSharedString::Self *)&v57);
            v33 = (const char **)v57;
            if ( v57 != nullptr && __sync_fetch_and_add((volatile int32_t *)v57, 0xFFFFFFFF) == 1 )
            {
              objb = v32;
              glitch::core::detail::SSharedStringHeapEntry::SData::release(v33);
              v32 = objb;
            }
            v11 = byte_20D5030 == 0;
            *((uint8_t *)v54[0] + 8) = v32;
            if ( v11 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5030) != 0 )
            {
              sub_804900((int)(uintptr_t)&unk_20D5038);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5030);
              __cxa_atexit((void (*)(void *))sub_8136E0, &unk_20D5038, &unk_20D1280);
            }
            v34 = nullptr;
            if ( byte_20D503C == 0 )
              v34 = &unk_20D5038;
            v35 = sub_804A50((int)(uintptr_t)v34);
            sub_C18150(v53, v35);
            v31 = (glitch::video::CMaterial::Self *)v54[0];
          }
          if ( v31 != nullptr )
          {
            v11 = *(uint32_t *)v31 == 2;
            _mm_mfence();
            if ( v11 )
            {
              v46 = v31;
              glitch::video::CMaterial::removeFromRootSceneNode(v31);
              v31 = v46;
            }
            if ( __sync_fetch_and_add((volatile int32_t *)v31, 0xFFFFFFFF) == 1 )
            {
              v44 = (int)(uintptr_t)v31;
              glitch::video::CMaterial::Destroy(v31);
              sub_4EBE40(v44);
            }
          }
        }
        v26 = (int *)((char *)v26 + 1);
        result = *(uint32_t *)(*(uint32_t *)(v25[72] + 16) + 32);
      }
      while ( (int)(uintptr_t)v26 < *(uint32_t *)(result + 124) );
    }
  }
  return result;
}

// Group C [sub_902580] (VA 0x902580) | bad sp value at call has been detected, the output may be wrong!
int * sub_902580(int *a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 uint32_t *a10,
 int a11,
 int a12,
 int a13,
 int a14,
 float a15,
 float a16,
 float a17)
{
  float *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  void ( *v23)(int, uint32_t **);
  uint32_t *v24;
  int v25;
  int v27; // [esp-4Ch] [ebp-58h]
  int v28;
  int v29;
  int v30;
  int v31; // [esp-3Ch] [ebp-48h]
  int v32;
  int v33;
  int v34;
  int v35; // [esp-2Ch] [ebp-38h]
  int v36;
  int v37;
  int v38; // [esp-1Ch] [ebp-28h]
  int v39;
  int v40;
  int v41;
  float v42[6]; // [esp-Ch] [ebp-18h] BYREF
  int *retaddr;
  int v44;
  uint32_t *v45;

  v18 = (float *)G4_VCALL<int>(a3, 180, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, a2, v37, v38, v39, v40, v41, LODWORD(v42[0]), LODWORD(v42[1]), LODWORD(v42[2]));
  a15 = *v18;
  a16 = v18[1];
  a17 = v18[2];
  sub_5ED3D0(v42);
  a15 = a15 * 1000.0;
  a16 = a16 * 1000.0;
  a17 = 1000.0 * a17;
  v44 = sub_B97E20();
  a13 = 1157627904;
  a14 = 1157627904;
  v19 = sub_4EBBF0(0x1F4u, 1);
  v20 = v44;
  v45 = (uint32_t *)v19;
  retaddr = &a13;
  sub_8550D0(v19, v20, 0, v42);
  *a1 = (int)(uintptr_t)v45;
  if ( v45 == nullptr )
  {
    v22 = *(uint32_t *)(a9 + 228);
    v23 = *(void ( **)(int, uint32_t **))(*(uint32_t *)v22 + 104);
    goto LABEL_6;
  }
  __sync_add_and_fetch((uint32_t *)((char *)v45 + *(uint32_t *)(*v45 - 16) + 4), 1u);
  v21 = *a1;
  v22 = *(uint32_t *)(a9 + 228);
  v23 = *(void ( **)(int, uint32_t **))(*(uint32_t *)v22 + 104);
  if ( *a1 == 0 )
  {
LABEL_6:
    a10 = nullptr;
    goto LABEL_4;
  }
  v24 = (uint32_t *)(v21 + 4);
  v25 = *(uint32_t *)(v21 + 4);
  a10 = v24;
  __sync_add_and_fetch((uint32_t *)((char *)v24 + *(uint32_t *)(v25 - 16) + 4), 1u);
LABEL_4:
  v23(v22, &a10);
  sub_5EDFE0(&a10);
  return a1;
}

// Group C [sub_B84B70] (VA 0xb84b70)
int sub_B84B70(int a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 signed int a15,
 signed int a16,
 int a17,
 int a18,
 int a19)
{
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  bool v33; // zf
  int v34;
  int result;
  vox::DecoderMSWav::Self *v36;
  int v37;
  unsigned int v38;
  vox::DecoderMSWav::Self *v39;
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  void ( ***v44)(uint32_t);
  int v45;
  int v46;
  int v47; // [esp-4Ch] [ebp-58h]
  int v48;
  int v49;
  int v50;
  int v51; // [esp-3Ch] [ebp-48h]
  int v52;
  int v53;
  int v54;
  int retaddr;
  int v56;
  int v57;
  int v58; // [esp+2Ch] [ebp+20h]
  int v59; // [esp+2Ch] [ebp+20h]

  vox::VoxThread::GetCurThreadId();
  G4_VCALL<void>(a1, 16, a1 + 240, &v54, v45, v46, v47, v48, v49, v50, v51, v52, v53);
  v19 = *(uint32_t *)(a2 + 76);
  if ( v19 > 0 )
  {
    v20 = *(uint32_t *)(a2 + 80);
    if ( v20 > 0 )
    {
      v56 = *(uint32_t *)(a1 + 240);
      v21 = a8;
      v22 = v20 * v19;
      v58 = v20 * v19;
      if ( a8 * v56 <= v20 * v19 )
      {
        if ( v20 > a8 )
        {
          v21 = *(uint32_t *)(a2 + 80);
          a8 = v21;
          *(uint32_t *)(a1 + 240) = v19;
          if ( (v20 & 1) == 0 )
            goto LABEL_13;
          goto LABEL_48;
        }
        v23 = *(uint32_t *)(a1 + 240);
        if ( a8 * v56 < v22 )
        {
          v23 = v56 + 1;
          v24 = a8 * (v56 + 1);
          while ( v58 > v24 )
          {
            v24 += a8;
            ++v23;
          }
        }
        v25 = v23 - 1;
        v21 = v58 / v25;
        if ( v58 % v25 != 0 )
          ++v21;
        a8 = v21;
        *(uint32_t *)(a1 + 240) = v25;
      }
      if ( (v21 & 1) == 0 )
        goto LABEL_13;
LABEL_48:
      a8 = v21 + ((unsigned int)v21 >> 31) - (((uint8_t)v21 + (v21 < 0)) & 1) + 2;
    }
  }
LABEL_13:
  if ( *(uint32_t *)(a1 + 36) <= 1u || (v26 = *(uint32_t *)(a1 + 80)) == 0 )
  {
    v27 = *(uint32_t *)(a1 + 84);
    goto LABEL_16;
  }
  v38 = 2 * v26;
  v28 = a8 * *(uint32_t *)(a1 + 240);
  v27 = *(uint32_t *)(a1 + 84);
  if ( v38 <= v28 && v27 == 0 )
  {
LABEL_38:
    *(uint32_t *)(a1 + 84) = 2;
    goto LABEL_39;
  }
  if ( v27 == 1 )
  {
    if ( v38 > v28 + *(uint32_t *)(a1 + 76) )
    {
LABEL_18:
      retaddr = 1242;
      v57 = VoxAllocInternal(
              v28,
              0,
              "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\..\\lib\\vox\\Plugins\\V"
              "ehicleSounds\\vehicle_sounds.cpp",
              (int)(uintptr_t)("Init"));
      v59 = *(uint32_t *)(a1 + 240);
      if ( v59 > 0 )
      {
        v29 = a8;
        v30 = 0;
        while ( 1 )
        {
          a16 = v29;
          v31 = *(int **)(a1 + 232);
          v32 = v57 + v30 * v29;
          v33 = v31 == *(int **)(a1 + 236);
          a15 = 0;
          a17 = 0;
          a18 = 0;
          LOBYTE(a19) = 1;
          a14 = v32;
          if ( v33 )
          {
            sub_B685E0(a1 + 228, (int)(uintptr_t)v31, &a14);
            v59 = *(uint32_t *)(a1 + 240);
          }
          else
          {
            v34 = 0;
            if ( v31 != nullptr )
            {
              *v31 = v32;
              v31[1] = a15;
              v31[2] = a16;
              v31[3] = a17;
              v31[4] = a18;
              v31[5] = a19;
              v34 = *(uint32_t *)(a1 + 232);
              v59 = *(uint32_t *)(a1 + 240);
            }
            *(uint32_t *)(a1 + 232) = v34 + 24;
          }
          if ( ++v30 >= v59 )
            break;
          v29 = a8;
        }
      }
      result = (int)(uintptr_t)vox::vs::VSStream::CreateNewCursor(
                      *(vox::vs::VSStream::Self **)(a1 + 40),
                      *(uint32_t *)(a1 + 72),
                      *(uint32_t *)(a1 + 76),
                      (*(uint8_t *)(a1 + 84) & 1) != 0);
      *(uint32_t *)(a1 + 44) = result;
      if ( result != 0 )
      {
        vox::VoxThread::GetCurThreadId();
        v36 = nullptr;
        switch ( *(uint32_t *)(a1 + 64) )
        {
          case 0:
            a17 = *(uint32_t *)(a1 + 80);
            a15 = *(uint32_t *)(a1 + 68);
            a16 = 16;
            a14 = 1;
            retaddr = 920;
            v36 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                         20,
                                         0,
                                         "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\"
                                         "\\..\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                         (int)(uintptr_t)("GetDecoder"));
            vox::DecoderRaw::Construct(v36, &a14);
            break;
          case 1:
          case 2:
          case 3:
            retaddr = 926;
            v36 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                         72,
                                         0,
                                         "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\"
                                         "\\..\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                         (int)(uintptr_t)("GetDecoder"));
            vox::DecoderMSWav::DecoderMSWav(v36);
            break;
          case 4:
            a14 = -1;
            retaddr = 932;
            v36 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                         8,
                                         0,
                                         "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\"
                                         "\\..\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                         (int)(uintptr_t)("GetDecoder"));
            vox::DecoderMPC8::Construct(v36, &a14);
            break;
          case 5:
            retaddr = 936;
            v36 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                         12,
                                         0,
                                         "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\"
                                         "\\..\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                         (int)(uintptr_t)("GetDecoder"));
            *(uint32_t *)v36 = off_208CF88;
            *((uint32_t *)v36 + 1) = 0;
            break;
          case 6:
            retaddr = 940;
            v36 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                         144,
                                         0,
                                         "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\"
                                         "\\..\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                         (int)(uintptr_t)("GetDecoder"));
            vox::DecoderNative::Construct(v36);
            break;
          default:
            break;
        }
        *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(v36);
        if ( v36 != nullptr )
        {
          result = G4_VCALL<int>(v36, 16, *(uint32_t *)(a1 + 44));
          *(uint32_t *)(a1 + 52) = result;
          if ( result == 0 )
            return result;
          G4_VCALL<void>(result, 48, 1);
          goto LABEL_31;
        }
        goto LABEL_67;
      }
      return result;
    }
    goto LABEL_38;
  }
LABEL_16:
  if ( (v27 & 2) == 0 )
  {
    v28 = *(uint32_t *)(a1 + 240) * a8;
    goto LABEL_18;
  }
LABEL_39:
  result = (int)(uintptr_t)vox::vs::VSStream::CreateNewCursor(
                  *(vox::vs::VSStream::Self **)(a1 + 40),
                  *(uint32_t *)(a1 + 72),
                  *(uint32_t *)(a1 + 76),
                  false);
  *(uint32_t *)(a1 + 44) = result;
  if ( result != 0 )
  {
    vox::VoxThread::GetCurThreadId();
    v39 = nullptr;
    switch ( *(uint32_t *)(a1 + 64) )
    {
      case 0:
        v43 = *(uint32_t *)(a1 + 80);
        a12 = 16;
        a13 = v43;
        a11 = *(uint32_t *)(a1 + 68);
        a10 = 1;
        retaddr = 920;
        v39 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                     20,
                                     0,
                                     "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\."
                                     ".\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                     (int)(uintptr_t)("GetDecoder"));
        vox::DecoderRaw::Construct(v39, &a10);
        break;
      case 1:
      case 2:
      case 3:
        retaddr = 926;
        v39 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                     72,
                                     0,
                                     "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\."
                                     ".\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                     (int)(uintptr_t)("GetDecoder"));
        vox::DecoderMSWav::DecoderMSWav(v39);
        break;
      case 4:
        a10 = -1;
        retaddr = 932;
        v39 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                     8,
                                     0,
                                     "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\."
                                     ".\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                     (int)(uintptr_t)("GetDecoder"));
        vox::DecoderMPC8::Construct(v39, &a10);
        break;
      case 5:
        retaddr = 936;
        v39 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                     12,
                                     0,
                                     "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\."
                                     ".\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                     (int)(uintptr_t)("GetDecoder"));
        *(uint32_t *)v39 = off_208CF88;
        *((uint32_t *)v39 + 1) = 0;
        break;
      case 6:
        retaddr = 940;
        v39 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                                     144,
                                     0,
                                     "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\."
                                     ".\\lib\\vox\\Plugins\\VehicleSounds\\vehicle_sounds.cpp",
                                     (int)(uintptr_t)("GetDecoder"));
        vox::DecoderNative::Construct(v39);
        break;
      default:
        break;
    }
    *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(v39);
    if ( v39 != nullptr )
    {
      v40 = G4_VCALL<int>(v39, 16, *(uint32_t *)(a1 + 44));
      *(uint32_t *)(a1 + 52) = v40;
      if ( v40 != 0 )
      {
        *(uint32_t *)(a1 + 240) = 1;
        a14 = 0;
        a15 = 0;
        a16 = 0;
        a17 = 0;
        a18 = 0;
        LOBYTE(a19) = 1;
        a16 = sub_B83680(a1, (uint32_t *)(&a14));
        a15 = a16;
        LOBYTE(a19) = 0;
        if ( a16 > 0 )
        {
          v41 = *(uint32_t **)(a1 + 232);
          if ( v41 == *(uint32_t **)(a1 + 236) )
          {
            sub_B685E0(a1 + 228, (int)(uintptr_t)v41, &a14);
            v37 = *(uint32_t *)(a1 + 232);
          }
          else
          {
            v42 = 0;
            if ( v41 != nullptr )
            {
              *v41 = a14;
              v41[1] = a15;
              v41[2] = a16;
              v41[3] = a17;
              v41[4] = a18;
              v41[5] = a19;
              v42 = *(uint32_t *)(a1 + 232);
            }
            v37 = v42 + 24;
            *(uint32_t *)(a1 + 232) = v37;
          }
          goto LABEL_32;
        }
LABEL_31:
        v37 = *(uint32_t *)(a1 + 232);
LABEL_32:
        result = -1431655765 * ((v37 - *(uint32_t *)(a1 + 228)) >> 3);
        *(uint32_t *)(a1 + 240) = result;
        return result;
      }
      v44 = *(void ( ****)(uint32_t))(a1 + 48);
      if ( v44 != nullptr )
      {
        (**v44)(*(uint32_t *)(a1 + 48));
        VoxFreeInternal(*(void **)(a1 + 48));
      }
      *(uint32_t *)(a1 + 48) = 0;
    }
LABEL_67:
    result = (*(int ( **)(uint32_t, uint32_t))(**(uint32_t **)(a1 + 40) + 24))(
               *(uint32_t *)(a1 + 40),
               *(uint32_t *)(a1 + 44));
    *(uint32_t *)(a1 + 44) = 0;
  }
  return result;
}

// Group C [sub_5CF850] (VA 0x5cf850) | bad sp value at call has been detected, the output may be wrong!
int sub_5CF850(uint32_t **a1, int a2)
{
  int v2;
  uint32_t *v3;
  bool v4; // cc
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm1_4
  float v10; // xmm5_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm7_4
  float v23; // xmm4_4
  int v24;
  bool v25; // zf
  uint32_t *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char *v32;
  int v33;
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  int v43;
  int v44;
  float v45;
  int v46;
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49;
  char *v50;
  int v51;
  int v52;
  int v53;
  int v54;
  uint32_t *v55;
  uint32_t *v56;
  void *v57;
  int v58;
  int *v59;
  glitch::scene::ISceneNode::Self *v60;
  int v61;
  int v63;
  float v64; // xmm2_4
  float v65; // xmm4_4
  float v66; // xmm2_4
  uint32_t *v67;
  int v68;
  bool v69; // di
  char v70; // si
  float v71; // xmm3_4
  float v72; // xmm1_4
  int v73;
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm5_4
  float v78; // xmm4_4
  float v79; // xmm5_4
  float v80; // xmm6_4
  float v81; // xmm5_4
  int v82;
  float *v83;
  float v84; // xmm5_4
  uint32_t *v85;
  int v86;
  int v87;
  float *v88;
  float v89; // xmm4_4
  float *v90;
  float v91; // xmm2_4
  float v92; // xmm1_4
  float v93; // xmm4_4
  float v94; // xmm3_4
  float v95; // xmm6_4
  float v96; // xmm5_4
  int v97;
  float v98; // xmm4_4
  uint8_t *v99;
  float v100; // xmm3_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  void *v103;
  float v104;
  float v105;
  float v106;
  float v107;
  char *x;
  int xa;
  float xb;
  int v111;
  int v112; // [esp+7Ch] [ebp-224h]
  char v113;
  float v114;
  float v115;
  int v116;
  float v117; // [esp+8Ch] [ebp-214h]
  float v118; // [esp+8Ch] [ebp-214h]
  float v119; // [esp+8Ch] [ebp-214h]
  float v120; // [esp+8Ch] [ebp-214h]
  float v121;
  float v122;
  float v123;
  float v124;
  double v125;
  uint32_t v126[4];
  int v127; // [esp+A8h] [ebp-1F8h] BYREF
  uint32_t *v128; // [esp+B0h] [ebp-1F0h] BYREF
  int v129; // [esp+B4h] [ebp-1ECh] BYREF
  float v130; // [esp+B8h] [ebp-1E8h] BYREF
  float v131; // [esp+BCh] [ebp-1E4h]
  float v132; // [esp+C0h] [ebp-1E0h]
  float v133[4]; // [esp+C8h] [ebp-1D8h] BYREF
  float v134; // [esp+D8h] [ebp-1C8h] BYREF
  float v135; // [esp+DCh] [ebp-1C4h]
  float v136; // [esp+E0h] [ebp-1C0h]
  float v137; // [esp+E8h] [ebp-1B8h] BYREF
  float v138; // [esp+ECh] [ebp-1B4h]
  float v139; // [esp+F0h] [ebp-1B0h]
  float v140; // [esp+F4h] [ebp-1ACh] BYREF
  float v141; // [esp+F8h] [ebp-1A8h]
  float v142; // [esp+FCh] [ebp-1A4h]
  float v143;
  float v144;
  float v145;
  uint32_t v146[3]; // [esp+10Ch] [ebp-194h] BYREF
  float v147;
  float v148; // [esp+11Ch] [ebp-184h]
  float v149;
  uint32_t v150[3];
  float v151;
  float v152;
  float v153;
  float v154; // [esp+13Ch] [ebp-164h] BYREF
  float v155;
  float v156;
  uint32_t v157[3];
  float v158[3];
  float v159[3];
  float v160[3]; // [esp+16Ch] [ebp-134h] BYREF
  float v161;
  float v162; // [esp+17Ch] [ebp-124h]
  int v163;
  float v164[3]; // [esp+18Ch] [ebp-114h] BYREF
  float v165[3];
  float v166[3]; // [esp+1A4h] [ebp-FCh] BYREF
  uint8_t v167[12]; // [esp+1B0h] [ebp-F0h] BYREF
  uint8_t v168[12]; // [esp+1BCh] [ebp-E4h] BYREF
  float v169; // [esp+1C8h] [ebp-D8h] BYREF
  float v170; // [esp+1CCh] [ebp-D4h]
  float v171; // [esp+1D0h] [ebp-D0h]
  char v172; // [esp+1D4h] [ebp-CCh]
  float v173; // [esp+1D8h] [ebp-C8h]
  float v174; // [esp+1DCh] [ebp-C4h]
  float v175; // [esp+1E0h] [ebp-C0h]
  float *v176; // [esp+1E4h] [ebp-BCh]
  uint8_t v177[32]; // [esp+1E8h] [ebp-B8h] BYREF
  uint32_t v178[16];
  uint32_t v179[22];
  uint8_t *savedregs; // [esp+2A0h] [ebp+0h]
  int retaddr; // [esp+2A4h] [ebp+4h]

  v179[18] = (uint32_t)(uintptr_t)(&a1);
  v116 = (int)(uintptr_t)a1;
  if ( a1[158] == nullptr || a1[117] == nullptr )
  {
LABEL_52:
    G4_VCALL<void>(v116, 104);
    return 0;
  }
  v2 = ((int ( *)(uint32_t **))(*a1)[42])(a1);
  v3 = (uint32_t *)G4_VCALL<int>(v2, 72);
  sub_5C8490(v178, v3);
  (*(void ( **)(float *, int))(*(uint32_t *)v116 + 52))(&v130, v116);
  v4 = *(float *)(v116 + 600) >= 0.000001f;
  v5 = 0.0;
  v137 = 0.0;
  v138 = 0.0;
  v139 = 0.0;
  v140 = 0.0;
  v141 = 0.0;
  v142 = 0.0;
  v143 = 0.0;
  v144 = 0.0;
  v145 = 0.0;
  if ( !v4 )
  {
    v69 = *(uint32_t *)(*(uint32_t *)(v116 + 632) + 2296) != 0;
    v70 = sub_9878E0(*(uint32_t *)(v116 + 632));
    v71 = v131;
    v119 = (float)(int)*(float *)(dword_20D93F0 + 132 * *(uint32_t *)(v116 + 564) + 8);
    v72 = v130;
    if ( v69 )
    {
      v105 = v132;
      sub_986D80((int)(uintptr_t)&v169, (int *)(*(uint32_t *)(v116 + 632) + 2296));
      v74 = v169 - v72;
      v75 = v170 - v71;
      v76 = v171 - v105;
      *(float *)(v116 + 576) = v74;
      *(float *)(v116 + 580) = v75;
      *(float *)(v116 + 584) = v76;
      v79 = (float)((float)(v75 * v75) + (float)(v74 * v74)) + (float)(v76 * v76);
      v98 = fsqrt(v79);
      v124 = v98;
      if ( v119 < v98 )
      {
        v124 = v119;
      }
      else if ( v98 < 0.0 )
      {
        v124 = 0.0;
      }
      goto LABEL_68;
    }
    v73 = *(uint32_t *)(v116 + 636);
    if ( v73 != 0 )
    {
      (*(void ( **)(uint32_t *))(*(uint32_t *)v73 + 296))(v150);
      v74 = *(float *)v150;
      v75 = *(float *)&v150[1];
      v76 = *(float *)&v150[2];
      *(uint32_t *)(v116 + 576) = v150[0];
      *(float *)(v116 + 580) = v75;
      v77 = (float)(v74 * v74) + (float)(v75 * v75);
      v78 = v76 * v76;
      *(float *)(v116 + 584) = v76;
    }
    else
    {
      if ( v70 != 0 )
      {
        sub_8E9360((int)(uintptr_t)v133, *(uint32_t *)(v116 + 632), 0);
        v99 = *(uint8_t **)(v116 + 632);
        if ( v99[1970] != 0 )
        {
          (*(void ( **)(float *))(*(uint32_t *)v99 + 292))(&v151);
          v100 = -v153;
          v101 = -v152;
          v102 = -v151;
          v154 = -v151;
          v155 = -v152;
          v156 = -v153;
        }
        else
        {
          (*(void ( **)(float *))(*(uint32_t *)v99 + 292))(&v154);
          v102 = v154;
          v101 = v155;
          v100 = v156;
        }
        v75 = v101 - v133[1];
        v76 = v100 - v133[2];
        v74 = v102 - v133[0];
        v124 = v119 * 0.5;
        *(float *)(v116 + 576) = v74;
        *(float *)(v116 + 580) = v75;
        *(float *)(v116 + 584) = v76;
        v79 = (float)((float)(v76 * v76) + (float)(v75 * v75)) + (float)(v74 * v74);
        goto LABEL_68;
      }
      (*(void ( **)(uint32_t *))(**(uint32_t **)(v116 + 632) + 296))(v157);
      v75 = *(float *)&v157[1];
      v76 = *(float *)&v157[2];
      v74 = *(float *)v157;
      *(uint32_t *)(v116 + 576) = v157[0];
      *(float *)(v116 + 580) = v75;
      v77 = (float)(v76 * v76) + (float)(v75 * v75);
      *(float *)(v116 + 584) = v76;
      v78 = v74 * v74;
    }
    v79 = v77 + v78;
    v124 = v119;
LABEL_68:
    if ( v79 != 0.0 )
    {
      v80 = 1.0 / fsqrt(v79);
      v81 = (float)((float)((float)(v79 * v80) * v80) + -3.0) * (float)(v80 * -0.5);
      v74 = v74 * v81;
      v75 = v75 * v81;
      v76 = v76 * v81;
      *(float *)(v116 + 576) = v74;
      *(float *)(v116 + 580) = v75;
      *(float *)(v116 + 584) = v76;
    }
    v82 = *(uint32_t *)(v116 + 564);
    v83 = (float *)(dword_20D93F0 + 132 * v82);
    if ( v70 != 0 )
    {
      v84 = v83[5];
      v120 = v83[9];
    }
    else
    {
      v84 = v83[4];
      v120 = v83[8];
    }
    if ( !v69 )
      v120 = v83[10];
    v159[0] = v75;
    v159[1] = -v74;
    v158[0] = v74;
    v158[1] = v75;
    v159[2] = 0.0;
    v158[2] = v76;
    sub_5217D0(v160, v158, v159, v84 * 0.017453292f);
    v85 = *(uint32_t **)(v116 + 632);
    *(float *)(v116 + 576) = v160[0];
    *(float *)(v116 + 580) = v160[1];
    *(float *)(v116 + 584) = v160[2];
    if ( G4_VCALL<int>(v85, 456) == 0
      || (v86 = v85[468], v87 = v85[469], (v86 & 0x100) == 0)
      || v86 < 0
      || (v87 & 1) != 0
      || (v87 & 4) != 0 )
    {
      if ( *(uint32_t *)(*(uint32_t *)(v116 + 632) + 1144) != 0 )
      {
        v161 = *(float *)(v116 + 576);
        v162 = *(float *)(v116 + 580);
        v163 = 0;
        sub_5ED3D0(&v161);
        (*(void ( **)(float *, uint32_t))(**(uint32_t **)(v116 + 632) + 52))(v165, *(uint32_t *)(v116 + 632));
        (*(void ( **)(float *))(*(uint32_t *)v116 + 52))(v164);
        v171 = 0.0;
        v169 = v164[0] - v165[0];
        v170 = v164[1] - v165[1];
        sub_5ED3D0(&v169);
        sub_6645E0();
        v134 = v162;
        v135 = -v161;
        v136 = 0.0;
        sub_5ED3D0(&v134);
        if ( (float)((float)((float)(v170 * v135) + (float)(v169 * v134)) + (float)(v171 * v136)) < 0.0 )
        {
          v134 = -v134;
          v135 = -v135;
          v136 = -v136;
        }
        v104 = *(float *)(*(uint32_t *)(v116 + 632) + 2164);
        sub_6645E0();
        v88 = *(float **)(v116 + 632);
        v89 = v88[543];
        v106 = (float)(v134 * 1.3f) * v89;
        v107 = (float)(v135 * 1.3f) * v89;
        xb = (float)(1.3f * v136) * v89;
        (*(void ( **)(float *, float *))(*(uint32_t *)v88 + 52))(v166, v88);
        v131 = v107 + v166[1];
        v130 = v106 + v166[0];
        v132 = (float)((float)(v104 * 1.05f) + xb) + v166[2];
      }
    }
    v114 = *(float *)(dword_20D93F0 + 132 * *(uint32_t *)(v116 + 564) + 28);
    v90 = (float *)sub_5EC4A0(v116);
    v43 = v116;
    v91 = *(float *)(v116 + 580);
    v92 = *(float *)(v116 + 584);
    v93 = v90[8];
    v94 = *(float *)(v116 + 576);
    v95 = v90[10] * v94;
    v96 = v90[9] * v94;
    v143 = (float)((float)(v90[10] * v91) - (float)(v90[9] * v92)) * v114;
    v140 = (float)(v94 * v124) * v120;
    v141 = (float)(v91 * v124) * v120;
    v142 = (float)(v92 * v124) * v120;
    v144 = (float)((float)(v93 * v92) - v95) * v114;
    v145 = (float)(v96 - (float)(v93 * v91)) * v114;
    goto LABEL_24;
  }
  v6 = *(float *)(v116 + 576);
  v7 = *(float *)(v116 + 580);
  v8 = *(float *)(v116 + 584);
  if ( fabs((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8)) < 0.000001f )
  {
    (*(void ( **)(uint32_t *))(**(uint32_t **)(v116 + 636) + 384))(v146);
    v6 = *(float *)v146;
    v7 = *(float *)&v146[1];
    v8 = *(float *)&v146[2];
    *(uint32_t *)(v116 + 576) = v146[0];
    *(float *)(v116 + 580) = v7;
    *(float *)(v116 + 584) = v8;
    v64 = (float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8);
    if ( v64 != 0.0 )
    {
      v65 = 1.0 / fsqrt(v64);
      v66 = (float)((float)((float)(v64 * v65) * v65) + -3.0) * (float)(v65 * -0.5);
      v6 = v6 * v66;
      v7 = v7 * v66;
      v8 = v8 * v66;
      *(float *)(v116 + 576) = v6;
      *(float *)(v116 + 580) = v7;
      *(float *)(v116 + 584) = v8;
    }
  }
  v9 = -v7;
  v121 = -v8;
  v10 = v9 * v9;
  v117 = -v6;
  v11 = (float)((float)(v117 * v117) + (float)(v9 * v9)) + (float)(v121 * v121);
  if ( v11 != 0.0 )
  {
    v12 = fsqrt(v11);
    v13 = (float)((float)((float)(v11 * (float)(1.0 / v12)) * (float)(1.0 / v12)) + -3.0)
        * (float)((float)(1.0 / v12) * -0.5);
    v9 = v9 * v13;
    v10 = v9 * v9;
    v117 = v117 * v13;
    v121 = v13 * v121;
  }
  sub_6645E0();
  v14 = -v117;
  v15 = (float)(v14 * v14) + v10;
  v115 = v9;
  if ( v15 != 0.0 )
  {
    v16 = fsqrt(v15);
    v17 = (float)((float)((float)(v15 * (float)(1.0 / v16)) * (float)(1.0 / v16)) + -3.0)
        * (float)((float)(1.0 / v16) * -0.5);
    v14 = v14 * v17;
    v115 = v17 * v9;
    v10 = (float)(v17 * v9) * v9;
  }
  v18 = v121 * v14;
  v19 = v10 - (float)(v117 * v14);
  v20 = -(float)(v115 * v121);
  v21 = (float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20);
  if ( v21 != 0.0 )
  {
    v22 = 1.0 / fsqrt(v21);
    v23 = (float)((float)((float)(v21 * v22) * v22) + -3.0) * (float)(v22 * -0.5);
    v18 = v18 * v23;
    v20 = v20 * v23;
    v19 = v19 * v23;
  }
  v178[2] = 0;
  *(float *)v178 = v115;
  v24 = *(uint32_t *)(v116 + 564);
  *(float *)&v178[1] = v14;
  *(float *)&v178[4] = v117;
  *(float *)&v178[5] = v9;
  v25 = *(uint8_t *)(dword_20D93F0 + 132 * v24 + 52) == 0;
  *(float *)&v178[6] = v121;
  v26 = *(uint32_t **)(v116 + 632);
  *(float *)&v178[8] = v18;
  *(float *)&v178[9] = v20;
  *(float *)&v178[10] = v19;
  if ( !v25 )
  {
    v63 = v26[574];
    if ( v63 != 0 )
    {
      sub_5F76C0((uint32_t *)(v116 + 640), v63 + 12);
      v26 = *(uint32_t **)(v116 + 632);
    }
  }
  if ( G4_VCALL<int>(v26, 456) != 0 )
  {
    v27 = v26[468];
    v28 = v26[469];
    v29 = v27 & 0x100 ^ 0x100;
    if ( v29 == 0 && v27 >= 0 && (v28 & 1) == 0 && (v28 & 4) == 0 )
    {
      v97 = (*(int ( **)(uint32_t))(**(uint32_t **)(v116 + 632) + 456))(*(uint32_t *)(v116 + 632));
      v126[0] = 0;
      if ( v97 != 0 )
        v29 = v97 + 12;
      sub_5F7770(v126, v29);
      v30 = v126[0];
LABEL_19:
      if ( v30 != 0 )
        sub_5459F0((int)(uintptr_t)v126, v30 + 16);
      goto LABEL_21;
    }
  }
  v30 = 0;
  v126[0] = 0;
  v31 = *(uint32_t *)(v116 + 632);
  if ( v31 != 0 )
  {
    v32 = *(char **)(v31 + 20);
    v25 = v32 == *(char **)(v31 + 24);
    v126[0] = *(uint32_t *)(v116 + 632);
    v127 = (int)(uintptr_t)v126;
    if ( v25 )
    {
      g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v31 + 16, v32, &v127);
      v30 = v126[0];
    }
    else
    {
      v33 = 0;
      v30 = v31;
      if ( v32 != nullptr )
      {
        *(uint32_t *)v32 = (uint32_t)(uintptr_t)(v126);
        v33 = *(uint32_t *)(v31 + 20);
        v30 = v126[0];
      }
      *(uint32_t *)(v31 + 20) = v33 + 4;
    }
    goto LABEL_19;
  }
LABEL_21:
  v126[0] = 0;
  v122 = *(float *)(v116 + 600);
  (*(void ( **)(float *, int))(*(uint32_t *)v30 + 220))(&v147, v30);
  *(float *)(v116 + 600) = fsqrt((float)((float)(v148 * v148) + (float)(v147 * v147)) + (float)(v149 * v149)) + v122;
  v34 = (float)lrand48() * 0.0000000029258362f;
  v35 = 0.0;
  v36 = fabs(*(float *)(dword_20D93F0 + 132 * *(uint32_t *)(v116 + 564) + 68));
  if ( fabs(v36) >= 0.1f )
  {
    v125 = (float)((float)(v36 * 4.656613e-10f) * (float)lrand48());
    v35 = sin(v34) * v125;
    v5 = cos(v34) * v125;
  }
  *(float *)(v116 + 608) = v5;
  v37 = *(float *)(v116 + 600);
  v38 = *(float *)(v116 + 580);
  v39 = *(float *)(v116 + 584);
  *(uint32_t *)(v116 + 616) = 0;
  v40 = v38 * v37;
  v41 = v39 * v37;
  v42 = v37 * *(float *)(v116 + 576);
  *(float *)(v116 + 612) = v35;
  v138 = v40;
  v139 = v41;
  v43 = v116;
  v137 = v42;
LABEL_24:
  *(float *)&v111 = 0.0;
  if ( sub_97FD30(*(uint32_t *)(v43 + 632)) )
  {
    v67 = *(uint32_t **)(v116 + 632);
    v111 = 8;
    if ( G4_VCALL<int>(v67, 456) != 0 )
    {
      v68 = v67[468];
      if ( (v68 & 0x100) != 0 && v68 >= 0 && (v67[469] & 1) == 0 )
        v111 = (v67[469] & 4) == 4 ? 8 : 15;
    }
  }
  v112 = 5;
  while ( 1 )
  {
    v173 = v130;
    v134 = COERCE_FLOAT(&off_204A220);
    v171 = *(float *)&v111;
    v174 = v131;
    v176 = &v134;
    v169 = COERCE_FLOAT(&off_204A250);
    v135 = 10.0;
    v170 = 0.0;
    v172 = 1;
    v175 = v132;
    v161 = 0.0;
    v162 = 0.0;
    v163 = 0;
    v44 = sub_6645E0();
    v113 = G4_VCALL<int>(v44, 60, &v169, &v161) ^ 1;
    if ( v113 == 0 )
    {
      v45 = v161;
      v46 = *(uint32_t *)(LODWORD(v161) + 4);
      if ( v46 == 0 )
        goto LABEL_30;
      if ( (*(uint8_t ( **)(uint32_t))(*(uint32_t *)v46 + 232))(*(uint32_t *)(LODWORD(v161) + 4)) != 0
        || G4_VCALL<int>(v46, 256) == 0 )
      {
        v45 = v161;
LABEL_30:
        v47 = (float)(25.0 * *(float *)(v116 + 584)) + v132;
        v48 = (float)(25.0 * *(float *)(v116 + 576)) + v130;
        v131 = (float)(25.0 * *(float *)(v116 + 580)) + v131;
        v132 = v47;
        v130 = v48;
        goto LABEL_31;
      }
    }
    v45 = v161;
    v113 = 1;
LABEL_31:
    v123 = v162;
    if ( LODWORD(v162) != LODWORD(v45) )
    {
      v49 = v45;
      v50 = (char *)(LODWORD(v45) + 4);
      v118 = v45;
      do
      {
        v51 = LODWORD(v49) - LODWORD(v118);
        v52 = *(uint32_t *)&v50[LODWORD(v49) - LODWORD(v118)];
        if ( v52 != 0 )
        {
          x = v50;
          sub_5459F0(LODWORD(v49) + 4, v52 + 4);
          v50 = x;
        }
        LODWORD(v49) += 84;
        *(uint32_t *)&v50[v51] = 0;
      }
      while ( LODWORD(v123) != LODWORD(v49) );
      v45 = v161;
    }
    if ( v45 != 0.0 )
      operator delete((void *)LODWORD(v45));
    if ( v113 != 0 )
      break;
    if ( --v112 == 0 )
      goto LABEL_52;
  }
  xa = *(uint32_t *)(dword_20D93F0 + 132 * *(uint32_t *)(v116 + 564) + 108);
  (*(void ( **)(uint8_t *, int))(*(uint32_t *)v116 + 52))(v167, v116);
  v179[20] = (uint32_t)(uintptr_t)(sub_5F28E0());
  v179[21] = xa;
  savedregs = v167;
  retaddr = 1028443341;
  sub_AC50D0((vox::EmitterHandle::Self *)(v177), (int)v179[20], (glf::Self *)(uintptr_t)v179[21], (int *)savedregs, retaddr);
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v177);
  v53 = *(uint32_t *)(dword_20D93F0 + 132 * *(uint32_t *)(v116 + 564) + 48);
  if ( v53 != -1 )
  {
    v54 = *(uint32_t *)v116;
    v128 = nullptr;
    v179[20] = v116;
    (*(void ( **)(uint8_t *))(v54 + 52))(v168);
    if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
    {
      sub_7B3590(v103, &dword_20D4B80);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
      __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
    }
    v55 = nullptr;
    if ( byte_20D4B84 == 0 )
      v55 = &dword_20D4B80;
    retaddr = v116;
    savedregs = v168;
    v179[20] = (uint32_t)(uintptr_t)(v55);
    a2 = 0;
    a1 = &v128;
    v179[21] = v53;
    sub_7B30D0(&v129);
    sub_5F7820((uint32_t *)(v116 + 644), v129);
    sub_5F7820(&v129, 0);
    sub_5EDFE0(&v128);
  }
  v56 = (uint32_t *)sub_4EBBF0(0x14u, 1);
  *v56 = 1176256512;
  v25 = byte_20D4A00 == 0;
  v56[2] = 1176256512;
  v56[1] = 1176256512;
  v56[3] = 0;
  v56[4] = 0;
  *(uint32_t *)(v116 + 596) = (uint32_t)(uintptr_t)(v56);
  if ( v25 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A00) != 0 )
  {
    sub_5BFE60((int)(uintptr_t)&unk_20D4A20);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A00);
    __cxa_atexit((void (*)(void *))sub_5C01A0, &unk_20D4A20, &unk_20D1280);
  }
  v57 = nullptr;
  if ( byte_20D4A24 == 0 )
    v57 = &unk_20D4A20;
  sub_5C86F0((int)(uintptr_t)v57, v116);
  v58 = *(uint32_t *)v116;
  v59 = *(int **)(v116 + 468);
  *(uint32_t *)(v116 + 588) = 1;
  v60 = (glitch::scene::ISceneNode::Self *)(*(int ( **)(int))(v58 + 168))(v116);
  *(float *)&v178[12] = v130;
  *(float *)&v178[13] = v131;
  *(float *)&v178[14] = v132;
  G4_VCALL<void>(v59, 160, v178);
  (*(void ( **)(uint32_t *, int *))(*v59 + 156))(v179, v59);
  glitch::scene::ISceneNode::setAbsoluteTransformation(v60, (const glitch::core::CMatrix4<float> *)v179);
  glitch::scene::ISceneNode::updateAbsolutePosition(v60, true);
  v61 = *v59;
  if ( *(float *)(v116 + 600) < 0.000001f )
  {
    (*(void ( **)(int *, float *))(v61 + 92))(v59, &v143);
    G4_VCALL<void>(v59, 88, &v140);
  }
  else
  {
    (*(void ( **)(int *, float *))(v61 + 96))(v59, &v137);
  }
  *(float *)(v116 + 620) = v130;
  *(float *)(v116 + 624) = v131;
  *(float *)(v116 + 628) = v132;
  G4_VCALL<void>(v59, 52, 1);
  G4_VCALL<void>(v116, 112, 1);
  return 1;
}

// Group C [sub_9D5250] (VA 0x9d5250)
void sub_9D5250(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  glitch::scene::ISceneNode::Self *v12;
  int v13;
  uint32_t *v14; // [esp+2Ch] [ebp-30h] BYREF
  int v15;
  int v16;
  int v17;
  int v18; // [esp+3Ch] [ebp-20h]

  v1 = *(uint32_t *)(a1 + 3688);
  sub_892600(*(uint32_t *)(a1 + 1840), a1, v1);
  v2 = sub_8706D0(*(uint32_t *)(a1 + 1840), v1);
  if ( v2 != 0 )
  {
    sub_993170(a1, v2, 0, 0);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1065353216;
    sub_6645E0();
    v3 = *(uint32_t *)a1;
    v15 = 0;
    v16 = 0;
    v17 = 1065353216;
    v18 = -1287930578;
    v4 = (*(int ( **)(int))(v3 + 168))(a1);
    G4_VCALL<void>(v4, 176, &v15);
  }
  if ( (*(uint8_t *)(a1 + 1873) & 8) == 0 )
  {
    if ( (uint8_t)sub_8706A0(*(uint32_t *)(a1 + 1840), v1) != 0 )
    {
      sub_9D4450(a1, 156, 1065353216, 0, 0);
    }
    else if ( v1 != 0 )
    {
      sub_9D4450(a1, 27, 1065353216, 0, 0);
    }
    else
    {
      sub_9D4450(a1, 26, 1065353216, 0, 0);
    }
    v5 = *(uint32_t *)(a1 + 600);
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 16) = 0;
    v6 = sub_97C4D0(v5);
    sub_A04A90(v6 + 10, 1, 1065353216);
    v7 = sub_97C4D0(v5);
    sub_A04A90(v7 + 10, 1, 0);
    glitch::os::Timer::tick();
    v8 = G4_VCALL<int>(a1, 168);
    v9 = v8;
    if ( v8 != 0 )
    {
      v10 = (uint32_t *)G4_VCALL<int>(v8, 180);
      *(uint32_t *)(a1 + 928) = *v10;
      *(uint32_t *)(a1 + 932) = v10[1];
      *(uint32_t *)(a1 + 936) = v10[2];
      glitch::collada::CAnimationGraph::getAnimatorNode(
        (glitch::collada::CAnimationGraph::Self *)&v14,
        *(uint32_t *)(*(uint32_t *)(a1 + 600) + 100),
        *(uint32_t *)(*(uint32_t *)(a1 + 600) + 52));
      v11 = v14;
      if ( v14 != nullptr )
        sub_5459C0((uint32_t *)((char *)v14 + *(uint32_t *)(*v14 - 12)));
      G4_VCALL<void>(v11, 16, v9, 1128792064);
    }
    v12 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
    glitch::scene::ISceneNode::updateAbsolutePosition(v12, true);
  }
  v13 = *(uint32_t *)(a1 + 1840);
  if ( v13 != *(uint32_t *)(a1 + 1136) )
  {
    if ( v13 != 0 )
    {
      sub_6567A0((uint32_t *)(a1 + 1136), v13 + 12);
      sub_891520(v13, a1);
    }
    else
    {
      sub_6567A0((uint32_t *)(a1 + 1136), 0);
    }
  }
  *(uint32_t *)(a1 + 3684) = -1;
}

// Group C [sub_9B2010] (VA 0x9b2010)
void sub_9B2010(int a1, uint32_t *a2, char a3, int a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  char v9;
  uint32_t **v10;
  unsigned int v11;
  unsigned int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void *v18;
  char *v19;
  char *v20;
  char *v21;
  char *v22;
  void *v23;
  char *v24;
  char *v25;
  int v26;
  int v27;
  char *v28;
  char *v29;
  uint8_t **v30;
  float *v31;
  float v32; // xmm0_4
  int v33;
  int v34;
  char *v35;
  float v36; // xmm0_4
  uint8_t **v37;
  float *v38;
  float v39; // xmm0_4
  float v40; // xmm1_4
  char v41;
  void **v42;
  char *v43;
  int v44;
  float *v45;
  char v46;
  int v47;
  char v48;
  float v49; // xmm0_4
  float v50; // xmm1_4
  float *v51;
  void **v52;
  void *v53;
  int v54;
  float v55; // xmm0_4
  char v56;
  float v57; // xmm0_4
  float v58; // xmm3_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  char v62;
  float v63; // xmm5_4
  float v64; // xmm4_4
  float v65; // xmm0_4
  float *v66;
  float v67; // xmm3_4
  float v68; // xmm1_4
  float **v69;
  float v70; // xmm1_4
  float v71; // xmm0_4
  int v72;
  float *v73;
  float v74; // xmm1_4
  float v75; // xmm2_4
  int v76;
  uint32_t **v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  int v84;
  int v85;
  int v86;
  char *v87;
  char *v88;
  int v89;
  int *v90;
  int v91;
  int v92;
  int v93; // [esp-3Ch] [ebp-268h]
  char *v94;
  uint32_t *v95;
  int v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  int v103;
  int v104;
  int v105;
  float v106;
  char *obja;
  float objb;
  float *objc;
  char objd;
  float obje;
  float obj;
  float v113; // [esp+4Ch] [ebp-1E0h]
  int v114;
  float v115;
  int v116;
  float v117;
  int v118;
  float v119;
  float v120;
  uint32_t *v121; // [esp+5Ch] [ebp-1D0h]
  int v122;
  float v123;
  float v124;
  int v125;
  int v126;
  int v127; // [esp+6Ch] [ebp-1C0h]
  int v128; // [esp+6Ch] [ebp-1C0h]
  char v129;
  int v130;
  char *v131;
  int v132;
  int v133;
  int v134;
  int v135;
  float *v136; // [esp+7Ch] [ebp-1B0h]
  int v137; // [esp+7Ch] [ebp-1B0h]
  char *v138; // [esp+7Ch] [ebp-1B0h]
  void **v139; // [esp+7Ch] [ebp-1B0h]
  float **v140;
  char v141;
  int v142;
  int v143;
  float v144[2]; // [esp+9Ch] [ebp-190h] BYREF
  void *v145; // [esp+A4h] [ebp-188h] BYREF
  char *v146; // [esp+A8h] [ebp-184h]
  char *v147; // [esp+ACh] [ebp-180h]
  void *v148; // [esp+B4h] [ebp-178h] BYREF
  char *v149; // [esp+B8h] [ebp-174h]
  char *v150; // [esp+BCh] [ebp-170h]
  void *v151; // [esp+C4h] [ebp-168h] BYREF
  int v152; // [esp+C8h] [ebp-164h]
  int v153; // [esp+CCh] [ebp-160h]
  void *v154; // [esp+D4h] [ebp-158h] BYREF
  void *v155; // [esp+D8h] [ebp-154h]
  void *v156; // [esp+DCh] [ebp-150h]
  int v157; // [esp+E4h] [ebp-148h]
  int v158; // [esp+E8h] [ebp-144h]
  int v159; // [esp+ECh] [ebp-140h]
  float v160; // [esp+F8h] [ebp-134h] BYREF
  float v161; // [esp+FCh] [ebp-130h]
  uint8_t v162[12];
  float v163[3];
  float v164[3]; // [esp+11Ch] [ebp-110h] BYREF
  float v165[3];
  float v166[3];
  float v167[3];
  float v168[3]; // [esp+14Ch] [ebp-E0h] BYREF
  float v169[3];
  float v170;
  float v171;
  float v172[3];
  float v173[6]; // [esp+17Ch] [ebp-B0h] BYREF
  uint32_t v174[7];
  int v175; // [esp+1B0h] [ebp-7Ch] BYREF
  int v176; // [esp+1B4h] [ebp-78h]
  int v177; // [esp+1B8h] [ebp-74h]
  int v178; // [esp+1BCh] [ebp-70h]
  int v179; // [esp+1C0h] [ebp-6Ch]
  void *v180; // [esp+1C4h] [ebp-68h] BYREF
  float **v181; // [esp+1C8h] [ebp-64h]
  int v182; // [esp+1CCh] [ebp-60h]
  int v183; // [esp+1D0h] [ebp-5Ch]
  int v184; // [esp+1D4h] [ebp-58h]
  void *v185; // [esp+1E4h] [ebp-48h] BYREF
  float v186; // [esp+1E8h] [ebp-44h]
  float v187; // [esp+1ECh] [ebp-40h]
  float v188; // [esp+1F0h] [ebp-3Ch]
  char v189; // [esp+1F4h] [ebp-38h]
  float v190[12]; // [esp+1FCh] [ebp-30h] BYREF

  LODWORD(v190[8]) = (uint32_t)(uintptr_t)(&a1);
  v4 = a2;
  v5 = a4;
  v133 = a1;
  v129 = a3;
  if ( G4_VCALL<int>(a1, 456) == 0 )
  {
    *(uint8_t *)(v133 + 996) = 0;
    *(uint8_t *)(v133 + 997) = 1;
    return;
  }
  v6 = *(uint32_t *)(v133 + 1804);
  *(uint32_t *)(v133 + 1820) = *(uint32_t *)(v133 + 1816);
  *(uint32_t *)(v133 + 1808) = v6;
  *(uint8_t *)(v133 + 1828) = 1;
  v121 = (uint32_t *)(v133 + 1276);
  *(uint32_t *)(v133 + 4280) = v133 + 1276;
  *(uint32_t *)(v133 + 4284) = 0;
  *(uint32_t *)(v133 + 4288) = 0;
  *(uint8_t *)(v133 + 4292) = 0;
  *(uint8_t *)(v133 + 4293) = 0;
  *(uint32_t *)(v133 + 4296) = v5;
  *(uint32_t *)(v133 + 4300) = -1;
  *(uint32_t *)(v133 + 4304) = 0;
  *(uint8_t *)(v133 + 4294) = 0;
  *(uint8_t *)(v133 + 4295) = 0;
  *(uint32_t *)(v133 + 4308) = 0;
  *(uint32_t *)(v133 + 4324) = 0;
  *(uint32_t *)(v133 + 4320) = 0;
  *(uint32_t *)(v133 + 4316) = 0;
  *(uint32_t *)(v133 + 4328) = 0;
  *(uint32_t *)(v133 + 4332) = 0;
  *(uint32_t *)(v133 + 4336) = 0;
  *(uint32_t *)(v133 + 4340) = 0;
  *(uint32_t *)(v133 + 4344) = 0;
  *(uint32_t *)(v133 + 4348) = 0;
  *(uint8_t *)(v133 + 1946) = 0;
  *(uint8_t *)(v133 + 3205) = 0;
  *(uint32_t *)(v133 + 1004) = *v4;
  *(uint32_t *)(v133 + 1008) = v4[1];
  *(uint32_t *)(v133 + 1012) = v4[2];
  (*(void ( **)(float *))(*(uint32_t *)v133 + 52))(&v160);
  v144[0] = v160;
  v144[1] = v161;
  if ( G4_VCALL<int>(v133, 456) != 0 )
  {
    v7 = G4_VCALL<int>(v133, 456);
    (*(void ( **)(uint8_t *, int))(*(uint32_t *)v7 + 296))(v162, v7);
  }
  else
  {
    (*(void ( **)(uint8_t *, int))(*(uint32_t *)v133 + 296))(v162, v133);
  }
  v145 = nullptr;
  v146 = nullptr;
  v147 = nullptr;
  v148 = nullptr;
  v149 = nullptr;
  v150 = nullptr;
  v151 = nullptr;
  v152 = 0;
  v153 = 0;
  v154 = nullptr;
  v155 = nullptr;
  v156 = nullptr;
  v174[0] = 1137180672;
  v174[2] = 1133903872;
  v174[1] = 1170735104;
  v174[3] = 3000;
  v136 = nullptr;
  if ( v129 != 0 )
  {
    v180 = nullptr;
    v181 = nullptr;
    v182 = 0;
    if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
    {
      sub_5BEF40((int)(uintptr_t)&unk_20D4D80);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
      __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
    }
    sub_705340(&v140);
    v69 = v140;
    v136 = nullptr;
    if ( v181 == v140 )
      goto LABEL_97;
    v136 = *v140;
    if ( *v140 == nullptr )
      goto LABEL_97;
    v126 = sub_6E4130(*v140, v144, 1);
    v70 = *((float *)v69 + 3);
    v71 = *((float *)v69 + 2);
    *(float *)&v185 = 0.0;
    v186 = 0.0;
    v187 = 0.0;
    v124 = v70;
    v115 = v160;
    v120 = v161;
    v132 = G4_VCALL<int>(v136, 52, &v185, 1, &v160, &v180, v162, 8, -9);
    v72 = (int)(uintptr_t)v136;
    v73 = *((float **)v136 + 8);
    v74 = v73[1];
    v75 = *v73;
    v76 = v132;
    if ( v132 == 1 )
    {
      v83 = (float)((float)((float)(v120 + v124) - v74) * (float)((float)(v120 + v124) - v74))
          + (float)((float)((float)(v115 + v71) - v75) * (float)((float)(v115 + v71) - v75));
      if ( v83 > 25000000.0 )
      {
LABEL_108:
        v84 = 0;
        while ( 1 )
        {
          v97 = sub_6E3E40(v72, v84);
          if ( v97 >= 2.443461f )
          {
            if ( v97 <= 3.8397243f )
              goto LABEL_110;
            if ( sub_6E4090((uint8_t **)v72) == v126 )
              goto LABEL_110;
            v89 = G4_VCALL<int>(v72, 16, v84, 1);
            if ( G4_VCALL<uint8_t>(v89, 36, 8) != 0 )
              goto LABEL_110;
            v86 = G4_VCALL<int>(v72, 16, v84, 1);
            v87 = (char *)v155;
            v143 = v86;
            if ( v155 != v156 )
            {
LABEL_115:
              v88 = nullptr;
              if ( v87 != nullptr )
              {
                *(uint32_t *)v87 = v86;
                v88 = (char *)v155;
              }
              v155 = v88 + 4;
              goto LABEL_110;
            }
            v90 = &v143;
          }
          else
          {
            if ( sub_6E3FF0((uint8_t **)v72) == v126 )
              goto LABEL_110;
            v85 = G4_VCALL<int>(v72, 16, v84, 1);
            if ( G4_VCALL<uint8_t>(v85, 36, 8) != 0 )
              goto LABEL_110;
            v86 = G4_VCALL<int>(v72, 16, v84, 1);
            v87 = (char *)v155;
            v142 = v86;
            if ( v155 != v156 )
              goto LABEL_115;
            v90 = &v142;
          }
          g4_std::vector_WaypointPathFindingEdge_623657::M_insert_aux((int)(uintptr_t)&v154, v87, v90);
LABEL_110:
          if ( ++v84 >= v132 )
            goto LABEL_92;
        }
      }
      while ( 1 )
      {
        v72 = G4_VCALL<int>(v72, 16, 0, 1);
        v76 = G4_VCALL<int>(v72, 12, 1);
        if ( v76 != 1 )
          break;
        v83 = v83 + (float)(*(float *)(v72 + 44) * *(float *)(v72 + 44));
        if ( v83 > 25000000.0 )
          goto LABEL_108;
      }
    }
    if ( v76 <= 0 )
    {
LABEL_92:
      v77 = (uint32_t **)v154;
      if ( (unsigned int)((uint8_t *)v155 - (uint8_t *)v154) >> 2 != 0 )
      {
        v78 = 0;
        v79 = 0;
        do
        {
          ++v79;
          (*(void ( **)(uint32_t *, int, int))(*v77[v78] + 40))(v77[v78], 8, 1);
          v77 = (uint32_t **)v154;
          v78 = v79;
        }
        while ( v79 < ((uint8_t *)v155 - (uint8_t *)v154) >> 2 );
      }
      if ( *(float *)&v185 != 0.0 )
        operator delete(v185);
LABEL_97:
      if ( v180 != nullptr )
        operator delete(v180);
      goto LABEL_5;
    }
    v132 = v76;
    goto LABEL_108;
  }
LABEL_5:
  v157 = 0;
  v158 = 0;
  v159 = 0;
  if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
  {
    sub_5BEF40((int)(uintptr_t)&unk_20D4D80);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
    __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
  }
  v8 = nullptr;
  if ( byte_20D4D84 == 0 )
    v8 = (uint32_t *)(&unk_20D4D80);
  v95 = v174;
  v94 = &v141;
  v96 = 1;
  v9 = sub_705F20(v8[19], v136, &v160, v133 + 1004, &v151);
  v10 = (uint32_t **)v154;
  *(uint8_t *)(v133 + 996) = v9;
  if ( (unsigned int)((uint8_t *)v155 - (uint8_t *)v10) >> 2 != 0 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      ++v12;
      (*(void ( **)(uint32_t *, int, uint32_t))(*v10[v11] + 40))(v10[v11], 8, 0);
      v10 = (uint32_t **)v154;
      v11 = v12;
    }
    while ( v12 < ((uint8_t *)v155 - (uint8_t *)v154) >> 2 );
    v9 = *(uint8_t *)(v133 + 996);
  }
  *(uint8_t *)(v133 + 997) = v9 ^ 1;
  if ( v9 != 0 )
  {
    v13 = (uint32_t *)(v151);
    v14 = (v152 - (int)(uintptr_t)v151) >> 2;
    if ( v14 > 1 )
    {
      v137 = (v152 - (int)(uintptr_t)v151) >> 2;
      v116 = v14 - 1;
      v114 = v14 - 2;
      v15 = 0;
      v16 = v14 - 2;
      while ( 1 )
      {
        v17 = v13[v15];
        LOBYTE(v176) = 0;
        v175 = v17;
        v177 = 2;
        v178 = 0;
        v179 = 0;
        v18 = *((void **)v151 + v15);
        v19 = v146;
        v180 = v18;
        v181 = nullptr;
        v182 = 0;
        v183 = 0;
        v184 = 0;
        if ( v146 == v147 )
        {
          g4_std::vector_PathNodeInfo_e94706::M_insert_aux((int)(uintptr_t)&v145, v146, (int *)&v180);
        }
        else
        {
          v20 = nullptr;
          if ( v146 != nullptr )
          {
            *(uint32_t *)v146 = (uint32_t)(uintptr_t)(v18);
            *((uint32_t *)v19 + 1) = (uint32_t)(uintptr_t)(v181);
            *((uint32_t *)v19 + 2) = v182;
            *((uint32_t *)v19 + 3) = v183;
            *((uint32_t *)v19 + 4) = v184;
            v20 = v146;
          }
          v146 = v20 + 20;
        }
        v21 = v149;
        if ( v149 == v150 )
        {
          g4_std::vector_PathEdgeInfo_7670e7::M_insert_aux((int)(uintptr_t)&v148, v149, (uint32_t *)&v175);
        }
        else
        {
          v22 = nullptr;
          if ( v149 != nullptr )
          {
            *(uint32_t *)v149 = v175;
            *((uint32_t *)v21 + 1) = v176;
            *((uint32_t *)v21 + 2) = v177;
            *((uint32_t *)v21 + 3) = v178;
            *((uint32_t *)v21 + 4) = v179;
            v22 = v149;
          }
          v149 = v22 + 20;
        }
        if ( v15 == v16 )
          break;
        v13 = (uint32_t *)(v151);
        ++v15;
      }
      v23 = *((void **)v151 + v116);
      v24 = v146;
      v180 = v23;
      v181 = nullptr;
      v182 = 0;
      v183 = 0;
      v184 = 0;
      if ( v146 == v147 )
      {
        g4_std::vector_PathNodeInfo_e94706::M_insert_aux((int)(uintptr_t)&v145, v146, (int *)&v180);
      }
      else
      {
        v25 = nullptr;
        if ( v146 != nullptr )
        {
          *(uint32_t *)v146 = (uint32_t)(uintptr_t)(v23);
          *((uint32_t *)v24 + 1) = (uint32_t)(uintptr_t)(v181);
          *((uint32_t *)v24 + 2) = v182;
          *((uint32_t *)v24 + 3) = v183;
          *((uint32_t *)v24 + 4) = v184;
          v25 = v146;
        }
        v146 = v25 + 20;
      }
      v26 = v137 - 3;
      v122 = sub_6E4130(*(float **)v148, v144, 1);
      v118 = v137 - 3;
      v27 = -40;
      v127 = -1;
      v130 = 0;
      *((uint32_t *)v145 + 4) = 1078530011;
      v28 = (char *)v148;
      while ( v127 != v26 )
      {
        v29 = &v28[v27 + 40];
        v30 = *(uint8_t ***)v29;
        v138 = v29;
        v31 = (float *)((char *)v145 + v27 + 60);
        v103 = v27;
        v31[4] = sub_6E3E10((uint32_t *)*(uint32_t *)v29, *(uint32_t *)&v28[v27 + 60]);
        v138[4] = 0;
        v32 = v31[4];
        if ( v32 < 2.443461f )
        {
          v138[4] = 1;
          *((uint32_t *)v138 + 2) = 2;
LABEL_34:
          v122 = sub_6E3FF0(v30);
          v130 = 2;
          *((uint32_t *)v138 + 3) = v122;
          v33 = v103;
          goto LABEL_35;
        }
        if ( v32 > 3.8397243f )
        {
          v138[4] = 1;
          *((uint32_t *)v138 + 2) = 1;
LABEL_62:
          v122 = sub_6E4090(v30);
          v130 = 1;
          *((uint32_t *)v138 + 3) = v122;
          v33 = v103;
          goto LABEL_35;
        }
        *((uint32_t *)v138 + 2) = v130;
        if ( v130 == 2 )
          goto LABEL_34;
        if ( v130 == 1 )
          goto LABEL_62;
        v122 = sub_6F88B0(v30, v122, v91, v92, v93, (int)(uintptr_t)v94, (int)(uintptr_t)v95, v96);
        v130 = 0;
        *((uint32_t *)v138 + 3) = v122;
        v33 = v103;
LABEL_35:
        v34 = v127;
        v28 = (char *)v148;
        if ( v127 == -1 )
        {
          v125 = v33 + 20;
        }
        else
        {
          v125 = v33 + 20;
          v134 = v33 + 20;
          v35 = (char *)v148 + v33 + 20;
          if ( v35[4] == 0 && *((uint32_t *)v35 + 2) != *((uint32_t *)v138 + 2) )
          {
            v36 = 0.0;
            if ( v130 == 2 )
            {
              while ( 1 )
              {
                *((uint32_t *)v35 + 2) = 2;
                v105 = v33;
                *((uint32_t *)v35 + 3) = sub_6E3FF0(*(uint8_t ***)v35);
                v28 = (char *)v148;
                v36 = v36 + *(float *)(*(uint32_t *)((char *)v148 + v134) + 44);
                if ( v36 > 5000.0 )
                  break;
                if ( --v34 == -1 )
                  break;
                v35 = (char *)v148 + v105;
                if ( *((uint8_t *)v148 + v105 + 4) != 0 || *((uint32_t *)v35 + 2) == *((uint32_t *)v138 + 2) )
                  break;
                v134 = v105;
                v33 = v105 - 20;
              }
            }
            else
            {
              while ( 1 )
              {
                v37 = *(uint8_t ***)v35;
                *((uint32_t *)v35 + 2) = v130;
                v104 = v33;
                *((uint32_t *)v35 + 3) = sub_6E4090(v37);
                v28 = (char *)v148;
                v36 = v36 + *(float *)(*(uint32_t *)((char *)v148 + v134) + 44);
                if ( v36 > 5000.0 )
                  break;
                if ( --v34 == -1 )
                  break;
                v35 = (char *)v148 + v104;
                if ( *((uint8_t *)v148 + v104 + 4) != 0 || *((uint32_t *)v35 + 2) == *((uint32_t *)v138 + 2) )
                  break;
                v134 = v104;
                v33 = v104 - 20;
              }
            }
          }
        }
        ++v127;
        v27 = v125;
        v26 = v118;
      }
      v42 = (void **)&v28[20 * v114];
      *((uint8_t *)v42 + 4) = 0;
      v42[2] = (void *)v130;
      if ( v130 == 2 )
      {
        v42[3] = (void *)sub_6E3FF0((uint8_t **)*v42);
      }
      else if ( v130 == 1 )
      {
        v42[3] = (void *)sub_6E4090((uint8_t **)*v42);
      }
      else
      {
        v42[3] = (void *)sub_6F88B0(*v42, v122, v91, v92, v93, (int)(uintptr_t)v94, (int)(uintptr_t)v95, v96);
      }
      v43 = nullptr;
      v44 = 0;
      do
      {
        ++v44;
        v45 = (float *)&v43[(uint32_t)(uintptr_t)v148];
        obja = v43;
        v45[4] = sub_6E3CD0(*(uint32_t *)&v43[(uint32_t)(uintptr_t)v148], *(uint32_t *)&v43[(uint32_t)(uintptr_t)v148 + 12]);
        v43 = obja + 20;
      }
      while ( v116 > v44 );
      v189 &= 0xF8u;
      *(float *)&v185 = 0.0;
      v186 = 0.0;
      v187 = 0.0;
      v188 = 0.0;
      v46 = (*(int ( **)(uint32_t, int))(**(uint32_t **)v148 + 36))(*(uint32_t *)v148, 1);
      v189 = (4 * (v46 & 1)) | v189 & 0xFB;
      sub_6E39D0((int)(uintptr_t)v164, *(uint32_t *)v148);
      sub_6E3C90(v190, *(uint32_t *)v148);
      sub_A0A740(v163, v190, &v160);
      v99 = *((float *)v148 + 4);
      v102 = v164[0] + v163[0];
      objb = v164[2] + v163[2];
      v106 = v164[1] + v163[1];
      sub_6E39D0((int)(uintptr_t)v165, *(uint32_t *)v148);
      v189 &= 0xFCu;
      v187 = objb;
      v186 = v106 - (float)(v165[0] * v99);
      *(float *)&v185 = (float)(v99 * v165[1]) + v102;
      v188 = sub_6E3800(*(uint32_t *)v148, *((uint32_t *)v148 + 3));
      sub_930080(v121, (int)(uintptr_t)&v185);
      if ( v114 != 0 )
      {
        v47 = 0;
        v128 = 0;
        while ( 1 )
        {
          v135 = v47 + 20;
          v51 = (float *)((char *)v145 + v47 + 20);
          ++v128;
          v52 = (void **)((char *)v148 + v47);
          v53 = *v52;
          v139 = v52;
          v180 = *v52;
          v131 = (char *)v148 + v135;
          v54 = *(uint32_t *)((char *)v148 + v135);
          v181 = (float **)v54;
          v55 = v51[4];
          v56 = -2;
          if ( v55 >= 2.443461f )
            v56 = v55 > 3.8397243f;
          if ( fabs(3.1415927f - v55) <= 0.017453292f )
          {
            v189 = v56 & 3 | v189 & 0xFC;
            v48 = G4_VCALL<int>(v53, 36, 1);
            v189 = (4 * (v48 & 1)) | v189 & 0xFB;
          }
          else
          {
            objd = v56;
            v123 = sinf(3.1415927f - v55);
            sub_6E39D0((int)(uintptr_t)v167, (int)(uintptr_t)v53);
            v57 = *((float *)v131 + 4);
            v119 = v167[0] * v57;
            v117 = v167[1] * v57;
            v113 = v57 * v167[2];
            sub_6E39D0((int)(uintptr_t)v166, v54);
            v58 = *((float *)v139 + 4);
            v189 = objd & 3 | v189 & 0xFC;
            v59 = (float)((float)(v166[0] * v58) - v119) * (float)(1.0 / v123);
            v60 = (float)((float)(v166[1] * v58) - v117) * (float)(1.0 / v123);
            v61 = (float)((float)(v58 * v166[2]) - v113) * (float)(1.0 / v123);
            v62 = G4_VCALL<int>(v53, 36, 1);
            v189 = (4 * (v62 & 1)) | v189 & 0xFB;
            if ( (float)((float)((float)(v60 * v60) + (float)(v59 * v59)) + (float)(v61 * v61)) <= 16000000.0 )
            {
              obje = *((float *)v139 + 4);
              sub_6E39D0((int)(uintptr_t)&v170, (int)(uintptr_t)v53);
              obj = (float)((float)((float)(v59 - (float)(v171 * obje)) * (float)(v59 - (float)(v171 * obje)))
                          + (float)((float)((float)(obje * v170) + v60) * (float)((float)(obje * v170) + v60)))
                  + (float)(v61 * v61);
              sub_6E38B0(v172, (int)(uintptr_t)v53);
              v63 = *((float *)*(&v180
                               + ((float)((float)((float)(v172[1] * v60) + (float)(v172[0] * v59))
                                        + (float)(v172[2] * v61)) >= 0.0))
                    + 11);
              if ( obj > (float)((float)(v63 * v63) * 0.7f) )
              {
                v64 = 1.0 / fsqrt(obj);
                v65 = (float)((float)((float)((float)(obj * v64) * v64) + -3.0) * (float)(v64 * -0.5)) * v63;
                v59 = v59 * v65;
                v60 = v60 * v65;
                v61 = v61 * v65;
              }
              v66 = (float *)G4_VCALL<int>(v54, 8);
              v67 = v61 + v66[2];
              v68 = v59 + *v66;
              v186 = v60 + v66[1];
              v187 = v67;
              *(float *)&v185 = v68;
              v188 = sub_6E3800(v54, *((uint32_t *)v131 + 3));
              sub_930080(v121, (int)(uintptr_t)&v185);
              goto LABEL_76;
            }
          }
          objc = (float *)G4_VCALL<int>(v54, 8);
          v100 = *((float *)v139 + 4);
          sub_6E39D0((int)(uintptr_t)v168, (int)(uintptr_t)v53);
          v49 = (float)((float)-v168[0] * v100) + objc[1];
          v50 = (float)(v100 * v168[1]) + *objc;
          v187 = objc[2];
          v186 = v49;
          *(float *)&v185 = v50;
          v188 = sub_6E3800((int)(uintptr_t)v53, (int)(uintptr_t)v139[3]);
          sub_930080(v121, (int)(uintptr_t)&v185);
          if ( *((float *)v131 + 4) != *((float *)v139 + 4) )
          {
            v80 = G4_VCALL<int>(v54, 8);
            v101 = *((float *)v131 + 4);
            sub_6E39D0((int)(uintptr_t)v169, v54);
            v81 = (float)((float)-v169[0] * v101) + *(float *)(v80 + 4);
            v82 = (float)(v101 * v169[1]) + *(float *)v80;
            v187 = *(float *)(v80 + 8);
            v186 = v81;
            *(float *)&v185 = v82;
            v188 = sub_6E3800(v54, *((uint32_t *)v131 + 3));
            sub_930080(v121, (int)(uintptr_t)&v185);
          }
LABEL_76:
          if ( v128 >= v114 )
            break;
          v47 = v135;
        }
      }
      v38 = *(float **)(*((uint32_t *)v148 + 5 * v114) + 32);
      v98 = *((float *)v148 + 5 * v114 + 4);
      sub_6E39D0((int)(uintptr_t)v173, *((uint32_t *)v148 + 5 * v114));
      v39 = (float)((float)-v173[0] * v98) + v38[1];
      v40 = (float)(v98 * v173[1]) + *v38;
      v187 = v38[2];
      v189 &= 0xFCu;
      v186 = v39;
      *(float *)&v185 = v40;
      v41 = (*(int ( **)(uint32_t, int))(**((uint32_t **)v148 + 5 * v114) + 36))(*((uint32_t *)v148 + 5 * v114), 1);
      v189 = (4 * (v41 & 1)) | v189 & 0xFB;
      v188 = sub_6E3800(*((uint32_t *)v148 + 5 * v114), *((uint32_t *)v148 + 5 * v114 + 3));
      sub_930080(v121, (int)(uintptr_t)&v185);
      v185 = *(void **)(v133 + 1004);
      v186 = *(float *)(v133 + 1008);
      v187 = *(float *)(v133 + 1012);
      v189 |= 4u;
      sub_930080(v121, (int)(uintptr_t)&v185);
      v10 = (uint32_t **)v154;
    }
  }
  if ( v10 != nullptr )
    operator delete(v10);
  if ( v151 != nullptr )
    operator delete(v151);
  if ( v148 != nullptr )
    operator delete(v148);
  if ( v145 != nullptr )
    operator delete(v145);
}

// Group C [sub_9B8A30] (VA 0x9b8a30)
void sub_9B8A30(int *a1, int *a2, char a3, int a4)
{
  int *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  uint16_t v16; // cx
  int v17;
  int *v18;
  int v19;
  float *v20;
  int *v21;
  float *v22;
  int *v23;
  int v24;
  float *v25;
  float v26; // xmm7_4
  char v27;
  int v28;
  char *v29;
  char *v30;
  char *v31;
  char *v32;
  char *v33;
  char *v34;
  char *v35;
  char *v36;
  char *v37;
  void *v38;
  unsigned int v39;
  unsigned int v40;
  int *v41;
  float v42; // xmm0_4
  int v43;
  __m128 v44;
  __m128 v45;
  float v46; // xmm4_4
  float v47; // xmm3_4
  int32_t v48; // xmm1_4
  float v49; // xmm5_4
  int v50;
  char *v51;
  char *v52;
  __m128 v53;
  int v54;
  int v55;
  int v56;
  float v57;
  int v58;
  float *v59; // [esp+Ch] [ebp-194h]
  float *v60; // [esp+Ch] [ebp-194h]
  uint16_t v61; // [esp+Ch] [ebp-194h]
  float v62;
  float v63;
  float v64;
  float v65; // [esp+1Ch] [ebp-184h]
  float v66;
  float v67;
  float v68;
  float v69; // [esp+2Ch] [ebp-174h]
  float v70;
  void *v71;
  float v72;
  float v73;
  int v74; // [esp+4Ch] [ebp-154h]
  int v75;
  uint16_t v76;
  float v77;
  float v78;
  int v79;
  int v80; // [esp+5Ch] [ebp-144h]
  float v81; // [esp+5Ch] [ebp-144h]
  float v82;
  float v83;
  char v84;
  float v85;
  int v86;
  uint16_t v87;
  float v88;
  char *v89;
  char v90;
  char v91;
  g4_cxa_guard_t *v92;
  float v93;
  int v94[3];
  char v95[4];
  void *v96;
  char *v97; // [esp+8Ch] [ebp-114h]
  char *v98;
  uint8_t v99[12]; // [esp+9Ch] [ebp-104h] BYREF
  uint8_t v100[12]; // [esp+A8h] [ebp-F8h] BYREF
  float v101[3]; // [esp+B4h] [ebp-ECh] BYREF
  float v102; // [esp+C0h] [ebp-E0h] BYREF
  float v103; // [esp+C4h] [ebp-DCh]
  float v104; // [esp+C8h] [ebp-D8h]
  float v105; // [esp+CCh] [ebp-D4h] BYREF
  float v106; // [esp+D0h] [ebp-D0h]
  float v107; // [esp+D4h] [ebp-CCh]
  int v108[3]; // [esp+D8h] [ebp-C8h] BYREF
  int v109[3]; // [esp+E4h] [ebp-BCh] BYREF
  int v110[3]; // [esp+F0h] [ebp-B0h] BYREF
  float v111; // [esp+FCh] [ebp-A4h] BYREF
  float v112;
  float v113;
  float v114;
  float v115; // [esp+10Ch] [ebp-94h]
  float v116;
  float v117;
  float v118;
  float v119; // [esp+11Ch] [ebp-84h]
  int v120; // [esp+12Ch] [ebp-74h] BYREF
  int v121;
  int v122;
  int v123;
  char v124; // [esp+13Ch] [ebp-64h]
  float v125[6];
  float v126[6];
  float v127[12];

  LODWORD(v127[8]) = (uint32_t)(uintptr_t)(&a1);
  v4 = a1;
  v5 = a2;
  v79 = a4;
  v90 = a3;
  a1[299] = a1[298];
  v6 = v4[451];
  v7 = v4[454];
  v4[1070] = (int)(uintptr_t)(v4 + 319);
  v4[455] = v7;
  v4[452] = v6;
  *((uint8_t *)v4 + 1828) = 1;
  v4[1071] = 0;
  v4[1072] = 0;
  *((uint8_t *)v4 + 4292) = 0;
  *((uint8_t *)v4 + 4293) = 0;
  v4[1074] = v79;
  v4[1075] = -1;
  v4[1076] = 0;
  *((uint8_t *)v4 + 4294) = 0;
  *((uint8_t *)v4 + 4295) = 0;
  v4[1077] = 0;
  v4[1081] = 0;
  v4[1080] = 0;
  v4[1079] = 0;
  v4[1082] = 0;
  v4[1083] = 0;
  v4[1084] = 0;
  v4[1085] = 0;
  v4[1086] = 0;
  v4[1087] = 0;
  *((uint8_t *)v4 + 1946) = 0;
  *((uint8_t *)v4 + 3205) = 0;
  v4[251] = *v5;
  v4[252] = v5[1];
  v4[253] = v5[2];
  v96 = nullptr;
  v97 = nullptr;
  v98 = nullptr;
  if ( v90 != 0 )
  {
    v71 = v4 + 251;
    (*(void ( **)(uint8_t *))(*v4 + 52))(v99);
    if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
    {
      sub_5BEF40((int)(uintptr_t)&unk_20D4D80);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
      __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
    }
    v8 = 0;
    v9 = &unk_20D4D80;
    if ( byte_20D4D84 != 0 )
      v9 = nullptr;
    v10 = sub_5B9750((int)(uintptr_t)v9, (int)(uintptr_t)v99, (int)(uintptr_t)v71);
    v11 = *v4;
    v74 = v10;
    v120 = 1137180672;
    v122 = 1128792064;
    v121 = 1170735104;
    v123 = 3000;
    (*(void ( **)(uint8_t *))(v11 + 52))(v100);
    v75 = sub_707A10(v74, &v120, v100, 0);
    if ( v74 != 0 )
      v8 = v74 + 76;
    v12 = v4[301];
    if ( v12 != 0 )
      sub_5459F0((int)(uintptr_t)(v4 + 301), v12 + 80);
    if ( v8 != 0 )
    {
      v13 = 0;
      v4[301] = v8 - 76;
      if ( v8 != 76 )
        v13 = v8;
      v94[0] = (int)(uintptr_t)(v4 + 301);
      v14 = *(char **)(v13 + 8);
      if ( v14 == *(char **)(v13 + 12) )
      {
        g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v13 + 4, v14, v94);
      }
      else
      {
        v15 = 0;
        if ( v14 != nullptr )
        {
          *(uint32_t *)v14 = (uint32_t)(uintptr_t)(v4 + 301);
          v15 = *(uint32_t *)(v13 + 8);
        }
        *(uint32_t *)(v13 + 8) = v15 + 4;
      }
    }
    else
    {
      v4[301] = 0;
    }
    (*(void ( **)(float *, int *))(*v4 + 52))(v101, v4);
    if ( v75 == 0 )
      goto LABEL_29;
    v16 = *(uint16_t *)(v75 + 26);
    v17 = *(uint8_t *)(v75 + 35) >> 7;
    v91 = byte_20D5160;
    v86 = v17;
    if ( byte_20D5160 == 0 )
    {
      v58 = v17;
      v61 = *(uint16_t *)(v75 + 26);
      v56 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5160);
      v17 = v58;
      v16 = v61;
      if ( v56 != 0 )
      {
        sub_6DFAA0((int)(uintptr_t)&dword_20D5180);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5160);
        __cxa_atexit((void (*)(void *))sub_6FCB10, &dword_20D5180, &unk_20D1280);
        v16 = v61;
        v17 = v58;
      }
      v86 = *(uint8_t *)(v75 + 35) >> 7;
      v91 = byte_20D5160;
    }
    v84 = byte_20D5184;
    v18 = nullptr;
    v19 = v17 + 4;
    if ( byte_20D5184 == 0 )
      v18 = (int *)(&dword_20D5180);
    v20 = (float *)(*(uint32_t *)(v18[2 * v19 + 1] + 4) + 12 * v16);
    v76 = *(uint16_t *)(v75 + 24);
    v80 = v86;
    if ( v91 == 0 )
    {
      v60 = v20;
      v55 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5160);
      v20 = v60;
      if ( v55 != 0 )
      {
        sub_6DFAA0((int)(uintptr_t)&dword_20D5180);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5160);
        __cxa_atexit((void (*)(void *))sub_6FCB10, &dword_20D5180, &unk_20D1280);
        v20 = v60;
      }
      v84 = byte_20D5184;
      v80 = *(uint8_t *)(v75 + 35) >> 7;
      v91 = byte_20D5160;
    }
    v21 = nullptr;
    if ( v84 == 0 )
      v21 = (int *)(&dword_20D5180);
    v22 = (float *)(*(uint32_t *)(v21[2 * v86 + 9] + 4) + 12 * v76);
    v87 = *(uint16_t *)(v75 + 22);
    if ( v91 == 0 )
    {
      v59 = v20;
      v54 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5160);
      v20 = v59;
      if ( v54 != 0 )
      {
        sub_6DFAA0((int)(uintptr_t)&dword_20D5180);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5160);
        __cxa_atexit((void (*)(void *))sub_6FCB10, &dword_20D5180, &unk_20D1280);
        v20 = v59;
      }
      v84 = byte_20D5184;
    }
    v23 = nullptr;
    if ( v84 == 0 )
      v23 = (int *)(&dword_20D5180);
    v85 = *v22;
    v92 = (g4_cxa_guard_t *)v23[2 * v80 + 9];
    v24 = v87;
    v88 = v22[1];
    v68 = v20[2];
    v25 = (float *)(v92[1] + 12 * v24);
    v82 = *v25;
    v77 = v25[1];
    v73 = v25[2];
    v81 = v22[2];
    v70 = *v20;
    v69 = v20[1];
    (*(void ( **)(float *))(*v4 + 52))(&v102);
    if ( (float)((float)((float)((float)((float)((float)(v82 - v85) * (float)(v68 - v81))
                                       - (float)((float)(v73 - v81) * (float)(v70 - v85)))
                               * (float)((float)((float)(v102 - v85) * (float)(v68 - v81))
                                       - (float)((float)(v104 - v81) * (float)(v70 - v85))))
                       + (float)((float)((float)((float)(v73 - v81) * (float)(v69 - v88))
                                       - (float)((float)(v77 - v88) * (float)(v68 - v81)))
                               * (float)((float)((float)(v104 - v81) * (float)(v69 - v88))
                                       - (float)((float)(v68 - v81) * (float)(v103 - v88)))))
               + (float)((float)((float)((float)(v77 - v88) * (float)(v70 - v85))
                               - (float)((float)(v82 - v85) * (float)(v69 - v88)))
                       * (float)((float)((float)(v70 - v85) * (float)(v103 - v88))
                               - (float)((float)(v69 - v88) * (float)(v102 - v85))))) < 0.0 )
      goto LABEL_59;
    v72 = v103 - v77;
    v93 = v102 - v82;
    v67 = (float)(v88 - v77) * (float)(v70 - v82);
    v66 = (float)(v85 - v82) * (float)(v69 - v77);
    v26 = v104 - v73;
    v65 = (float)(v85 - v82) * (float)(v68 - v73);
    v64 = (float)(v81 - v73) * (float)(v70 - v82);
    v63 = (float)(v81 - v73) * (float)(v69 - v77);
    v62 = (float)(v88 - v77) * (float)(v68 - v73);
    if ( (float)((float)((float)((float)(v65 - v64)
                               * (float)((float)(v93 * (float)(v68 - v73)) - (float)(v26 * (float)(v70 - v82))))
                       + (float)((float)(v63 - v62)
                               * (float)((float)(v26 * (float)(v69 - v77)) - (float)((float)(v68 - v73) * v72))))
               + (float)((float)(v67 - v66)
                       * (float)((float)((float)(v70 - v82) * v72) - (float)((float)(v69 - v77) * v93)))) < 0.0
      || (float)((float)((float)((float)(v64 - v65)
                               * (float)((float)((float)(v81 - v73) * v93) - (float)((float)(v85 - v82) * v26)))
                       + (float)((float)(v62 - v63)
                               * (float)((float)(v26 * (float)(v88 - v77)) - (float)((float)(v81 - v73) * v72))))
               + (float)((float)(v66 - v67)
                       * (float)((float)((float)(v85 - v82) * v72) - (float)((float)(v88 - v77) * v93)))) < 0.0 )
    {
LABEL_59:
      (*(void ( **)(float *, int *))(*v4 + 52))(&v105, v4);
      v127[0] = v82;
      v127[1] = v77;
      v127[2] = v73;
      v127[3] = v85;
      v127[4] = v88;
      v127[5] = v81;
      sub_A0A740(&v111, v127, &v105);
      v126[0] = v85;
      v126[1] = v88;
      v126[2] = v81;
      v126[3] = v70;
      v126[4] = v69;
      v126[5] = v68;
      sub_A0A740(&v114, v126, &v105);
      v125[0] = v70;
      v125[1] = v69;
      v125[2] = v68;
      v125[3] = v82;
      v125[4] = v77;
      v125[5] = v73;
      sub_A0A740(&v117, v125, &v105);
      v83 = fsqrt(
              (float)((float)((float)(v112 - v106) * (float)(v112 - v106))
                    + (float)((float)(v111 - v105) * (float)(v111 - v105)))
            + (float)((float)(v113 - v107) * (float)(v113 - v107)));
      v78 = fsqrt(
              (float)((float)((float)(v115 - v106) * (float)(v115 - v106))
                    + (float)((float)(v114 - v105) * (float)(v114 - v105)))
            + (float)((float)(v116 - v107) * (float)(v116 - v107)));
      v44.f32[0] = fsqrt(
                          (float)((float)((float)(v118 - v106) * (float)(v118 - v106))
                                + (float)((float)(v117 - v105) * (float)(v117 - v105)))
                        + (float)((float)(v119 - v107) * (float)(v119 - v107)));
      if ( v78 > v83 )
      {
        v53 = _mm_cmpge_ss(G4_BITCAST<__m128>(LODWORD(v83)), v44);
        LODWORD(v46) = g4_m128_u32_lane(_mm_andnot_ps(v53, G4_BITCAST<__m128>(LODWORD(v113))), 0) | LODWORD(v119) & reinterpret_cast<int32_t *>(v53.f32)[0];
        LODWORD(v47) = g4_m128_u32_lane(_mm_andnot_ps(v53, G4_BITCAST<__m128>(LODWORD(v112))), 0) | LODWORD(v118) & reinterpret_cast<int32_t *>(v53.f32)[0];
        v48 = LODWORD(v117) & reinterpret_cast<int32_t *>(v53.f32)[0];
        v49 = _mm_andnot_ps(v53, G4_BITCAST<__m128>(LODWORD(v111))).f32[0];
      }
      else
      {
        v45 = _mm_cmpge_ss(G4_BITCAST<__m128>(LODWORD(v78)), v44);
        LODWORD(v46) = g4_m128_u32_lane(_mm_andnot_ps(v45, G4_BITCAST<__m128>(LODWORD(v116))), 0) | LODWORD(v119) & reinterpret_cast<int32_t *>(v45.f32)[0];
        LODWORD(v47) = g4_m128_u32_lane(_mm_andnot_ps(v45, G4_BITCAST<__m128>(LODWORD(v115))), 0) | LODWORD(v118) & reinterpret_cast<int32_t *>(v45.f32)[0];
        v48 = LODWORD(v117) & reinterpret_cast<int32_t *>(v45.f32)[0];
        v49 = _mm_andnot_ps(v45, G4_BITCAST<__m128>(LODWORD(v114))).f32[0];
      }
      v50 = *v4;
      LODWORD(v101[0]) = LODWORD(v49) | v48;
      v101[1] = v47;
      v101[2] = v46;
      (*(void ( **)(int *, int *))(v50 + 52))(v108, v4);
      v51 = v97;
      if ( v97 == v98 )
      {
        sub_966B60((int)(uintptr_t)&v96, v97, v108);
        v27 = sub_7080F0(v74, v75, v101, v71, v4 + 298, (int)(uintptr_t)&v96, v95, (int)(uintptr_t)&v120, 1u, v4, 0, 0);
      }
      else
      {
        v52 = nullptr;
        if ( v97 != nullptr )
        {
          *(uint32_t *)v97 = v108[0];
          *((uint32_t *)v51 + 1) = v108[1];
          *((uint32_t *)v51 + 2) = v108[2];
          v52 = v97;
        }
        v97 = v52 + 12;
        v27 = sub_7080F0(v74, v75, v101, v71, v4 + 298, (int)(uintptr_t)&v96, v95, (int)(uintptr_t)&v120, 1u, v4, 0, 0);
      }
    }
    else
    {
LABEL_29:
      v27 = sub_7080F0(v74, v75, v101, v71, v4 + 298, (int)(uintptr_t)&v96, v95, (int)(uintptr_t)&v120, 1u, v4, 0, 0);
    }
    *((uint8_t *)v4 + 996) = v27;
  }
  else
  {
    v28 = *v4;
    *((uint8_t *)v4 + 996) = 1;
    (*(void ( **)(int *))(v28 + 52))(v109);
    v29 = v97;
    v30 = v98;
    if ( v97 == v98 )
    {
      sub_966B60((int)(uintptr_t)&v96, v98, v109);
      v32 = v97;
      v30 = v98;
    }
    else
    {
      v31 = nullptr;
      if ( v97 != nullptr )
      {
        *(uint32_t *)v97 = v109[0];
        *((uint32_t *)v29 + 1) = v109[1];
        *((uint32_t *)v29 + 2) = v109[2];
        v31 = v97;
        v30 = v98;
      }
      v32 = v31 + 12;
      v97 = v32;
    }
    if ( v30 == v32 )
    {
      sub_966B60((int)(uintptr_t)&v96, v30, v4 + 251);
      v27 = *((uint8_t *)v4 + 996);
    }
    else
    {
      if ( v32 != nullptr )
      {
        *(uint32_t *)v32 = v4[251];
        *((uint32_t *)v32 + 1) = v4[252];
        *((uint32_t *)v32 + 2) = v4[253];
        v32 = v97;
      }
      v97 = v32 + 12;
      v27 = *((uint8_t *)v4 + 996);
    }
  }
  *((uint8_t *)v4 + 997) = v27 ^ 1;
  if ( v27 != 1 && v79 != 2 )
  {
    v33 = (char *)v96;
    *((uint8_t *)v4 + 996) = 1;
    v97 = v33;
    (*(void ( **)(int *))(*v4 + 52))(v110);
    v34 = v97;
    v35 = v98;
    if ( v97 == v98 )
    {
      sub_966B60((int)(uintptr_t)&v96, v98, v110);
      v37 = v97;
      v35 = v98;
    }
    else
    {
      v36 = nullptr;
      if ( v97 != nullptr )
      {
        *(uint32_t *)v97 = v110[0];
        *((uint32_t *)v34 + 1) = v110[1];
        *((uint32_t *)v34 + 2) = v110[2];
        v36 = v97;
        v35 = v98;
      }
      v37 = v36 + 12;
      v97 = v37;
    }
    if ( v35 == v37 )
    {
      sub_966B60((int)(uintptr_t)&v96, v35, v4 + 251);
      v27 = *((uint8_t *)v4 + 996);
    }
    else
    {
      if ( v37 != nullptr )
      {
        *(uint32_t *)v37 = v4[251];
        *((uint32_t *)v37 + 1) = v4[252];
        *((uint32_t *)v37 + 2) = v4[253];
        v37 = v97;
      }
      v97 = v37 + 12;
      v27 = *((uint8_t *)v4 + 996);
    }
  }
  if ( v27 != 0 )
  {
    v38 = v96;
    if ( -1431655765 * ((v97 - (char *)((uint8_t *)v96)) >> 2) != 0 )
    {
      v39 = 0;
      v40 = 0;
      v89 = (char *)v96;
      do
      {
        v124 &= 0xF8u;
        v120 = 0;
        v121 = 0;
        v122 = 0;
        v123 = 0;
        v41 = (int *)&v89[12 * v39];
        v120 = *v41;
        v121 = v41[1];
        v122 = v41[2];
        v42 = 1.0;
        if ( G4_VCALL<int>(v4, 456) != 0 )
        {
          v43 = G4_VCALL<int>(v4, 456);
          v57 = ((long double ( *)(int))*(uint32_t *)(*(uint32_t *)v43 + 668))(v43);
          v42 = v57 * 0.2777778f;
        }
        ++v40;
        v123 = LODWORD(v42);
        sub_930080(v4 + 319, (int)(uintptr_t)&v120);
        v39 = v40;
        v89 = (char *)v96;
      }
      while ( v40 < -1431655765 * ((v97 - (char *)((uint8_t *)v96)) >> 2) );
      v38 = v96;
    }
    if ( v38 != nullptr )
      operator delete(v38);
  }
  else
  {
    v97 = (char *)v96;
    if ( v96 != nullptr )
      operator delete(v96);
  }
}

// Group C [sub_9335E0] (VA 0x9335e0) | bad sp value at call has been detected, the output may be wrong!
int sub_9335E0(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  float v5;
  float v6;
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm4_4
  float v10; // xmm4_4
  float v11; // xmm4_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  uint32_t *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int result;
  int v22;
  void *v23;
  uint32_t *v24;
  void *v25;
  int v26;
  double v27;
  float v28;
  double v29;
  float v30;
  double v31;
  double v32;
  double x;
  double xa;
  double v35;
  void *obj; // [esp+5Ch] [ebp-D4h]
  float v37;
  double v39;
  int v40;
  uint32_t *v41;
  int v42;
  uint32_t v43[3]; // [esp+8Ch] [ebp-A4h] BYREF
  float v44[3];
  float v45; // [esp+A4h] [ebp-8Ch] BYREF
  float v46; // [esp+A8h] [ebp-88h]
  float v47; // [esp+ACh] [ebp-84h]
  float v48; // [esp+B0h] [ebp-80h] BYREF
  float v49; // [esp+B4h] [ebp-7Ch]
  float v50; // [esp+B8h] [ebp-78h]
  float v51; // [esp+BCh] [ebp-74h] BYREF
  float v52; // [esp+C0h] [ebp-70h]
  float v53; // [esp+C4h] [ebp-6Ch]
  g4_int128_t v54; // [esp+C8h] [ebp-68h] BYREF
  float v55[19]; // [esp+D8h] [ebp-58h] BYREF
  uint32_t *v56;
  void *v57;
  uint32_t *v58; // [esp+12Ch] [ebp-4h]
  uint32_t *savedregs;
  uint32_t **retaddr;

  LODWORD(v55[18]) = (uint32_t)(uintptr_t)(&a2);
  memset(v55, 0, 0x40u);
  v55[0] = 1.0;
  v55[5] = 1.0;
  v55[10] = 1.0;
  v55[15] = 1.0;
  v40 = -1;
  if ( G4_VCALL<uint8_t>(a1, 848) != 0 )
  {
    v2 = a1[627];
    if ( a1[626] != v2 )
    {
      v3 = a1[626];
      while ( 1 )
      {
        v4 = *(uint32_t *)(v3 + 4);
        if ( v4 != 0 )
        {
          if ( (*(uint8_t ( **)(uint32_t))(*(uint32_t *)v4 + 228))(*(uint32_t *)(v3 + 4)) != 0 )
          {
            v40 = 3;
            goto LABEL_7;
          }
          if ( (*(uint8_t ( **)(uint32_t))(**(uint32_t **)(v3 + 4) + 224))(*(uint32_t *)(v3 + 4)) != 0 )
            break;
        }
        v3 += 84;
        if ( v2 == v3 )
        {
          v40 = -1;
          goto LABEL_11;
        }
      }
      v22 = *(uint32_t *)(v3 + 44);
      v40 = 2;
      if ( v22 != 2 )
        v40 = v22 == 4;
LABEL_7:
      v5 = *(float *)(v3 + 52);
      v44[0] = 0.0;
      v51 = v5;
      v52 = *(float *)(v3 + 56);
      v6 = *(float *)(v3 + 60);
      v44[1] = 0.0;
      v44[2] = 1.0;
      v53 = v6;
      v50 = 1.0;
      *(uint64_t *)&v54 = 0;
      *((uint64_t *)&v54 + 1) = 0x3F80000000000000LL;
      v48 = 0.0;
      v49 = 0.0;
      sub_5ED3D0(&v48);
      sub_5ED3D0(&v51);
      v7 = (float)((float)(v52 * v49) + (float)(v51 * v48)) + (float)(v53 * v50);
      if ( v7 >= 0.999999f )
      {
        v54 = xmmword_1C7C230;
      }
      else if ( v7 > -0.999999f )
      {
        v37 = fsqrt((float)(v7 + 1.0) + (float)(v7 + 1.0));
        *(float *)&v54 = (float)((float)(v53 * v49) - (float)(v50 * v52)) * (float)(1.0 / v37);
        *((float *)&v54 + 1) = (float)((float)(v50 * v51) - (float)(v53 * v48)) * (float)(1.0 / v37);
        *((float *)&v54 + 2) = (float)((float)(v48 * v52) - (float)(v49 * v51)) * (float)(1.0 / v37);
        *((float *)&v54 + 3) = v37 * 0.5;
      }
      else
      {
        sub_8FAA50((int)(uintptr_t)&v54, v44);
      }
      v45 = 0.0;
      v46 = 0.0;
      v47 = 0.0;
      sub_5EB270((float *)&v54, &v45);
      v45 = v45 * 0.017453292f;
      v47 = 0.017453292f * v47;
      v30 = v47;
      v46 = v46 * 0.017453292f;
      v28 = v46;
      x = v45;
      v39 = cos(v45);
      v32 = sin(x);
      xa = cos(v28);
      v35 = sin(v28);
      v29 = v30;
      v31 = cos(v30);
      v27 = sin(v29);
      v8 = v31 * xa;
      v55[0] = v8;
      v9 = v27 * xa;
      v55[1] = v9;
      v10 = v35;
      v55[2] = -v10;
      v55[12] = *(float *)(v3 + 64);
      v55[13] = *(float *)(v3 + 68);
      v55[14] = *(float *)(v3 + 72);
      v11 = v35 * v32 * v31 - v39 * v27;
      v55[4] = v11;
      v12 = v35 * v32 * v27 + v39 * v31;
      v13 = xa * v32;
      v55[5] = v12;
      v55[6] = v13;
      v14 = xa * v39;
      v55[10] = v14;
      v15 = v35 * v39 * v31 + v27 * v32;
      v16 = v27 * (v35 * v39) - v31 * v32;
      v55[8] = v15;
      v55[9] = v16;
    }
  }
LABEL_11:
  if ( a1[1368] != v40 )
  {
    v17 = (uint32_t *)a1[1367];
    if ( v17 != nullptr )
    {
      sub_7B02E0(v17);
      sub_5F7820(a1 + 1367, 0);
    }
    a1[1368] = v40;
    if ( v40 != -1 )
    {
      v18 = v40 + 1360;
      v19 = a1[v40 + 1361];
      if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
      {
        sub_7B3590(v25, &dword_20D4B80);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
        __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
      }
      v20 = nullptr;
      v56 = (uint32_t *)v19;
      if ( byte_20D4B84 == 0 )
        v20 = &dword_20D4B80;
      if ( sub_78CBA0((int)(uintptr_t)v20, (int)(uintptr_t)v56) )
      {
        sub_8E1420(&v41, nullptr);
        *(float *)v43 = v55[12];
        *(float *)&v43[1] = v55[13];
        *(float *)&v43[2] = v55[14];
        v23 = (void *)a1[v18 + 1];
        if ( byte_20D4B60 == 0 )
        {
          obj = (void *)a1[v18 + 1];
          v26 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60);
          v23 = obj;
          if ( v26 != 0 )
          {
            sub_7B3590(obj, &dword_20D4B80);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
            __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
            v23 = obj;
          }
        }
        v24 = nullptr;
        v57 = v23;
        if ( byte_20D4B84 == 0 )
          v24 = &dword_20D4B80;
        retaddr = &v41;
        savedregs = a1;
        v56 = v24;
        v58 = v43;
        a2 = 0;
        sub_7B30D0(&v42);
        sub_5F7820(a1 + 1367, v42);
        sub_5F7820(&v42, 0);
        sub_5EDFE0(&v41);
      }
    }
  }
  result = a1[1367];
  if ( result != 0 )
    return sub_7AF9B0(a1[1367], v55);
  return result;
}

// Group C [sub_9368F0] (VA 0x9368f0) | bad sp value at call has been detected, the output may be wrong!
void sub_9368F0(int *a1)
{
  int *v1;
  void *v2;
  uint32_t *v3;
  char *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11; // [esp-1Ch] [ebp-78h]
  int v12;
  int v13;
  int v14;
  int v15; // [esp-Ch] [ebp-68h]
  int v16;
  int v17;
  int v18;
  float v19;
  void *obj;
  char *obja;
  void *v22;
  g4_cxa_guard_t *v23; // [esp+Ch] [ebp-50h]
  char *v24;
  char *v25;
  char *v26;
  int v27;
  int v28;
  int v29; // [esp+1Ch] [ebp-40h]
  uint32_t *v30;
  void *v31;
  char *v32;
  int v33; // [esp+2Ch] [ebp-30h]
  int v34;
  int v35;
  uint32_t v36[9];
  int *savedregs; // [esp+5Ch] [ebp+0h]
  uint32_t **retaddr;

  v36[5] = (uint32_t)(uintptr_t)(&a1);
  v1 = a1;
  sub_8E1420(&v30, nullptr);
  (*(void ( **)(uint32_t *, int *, int, int, int, int, int, int, int, int, int, int, void *, uint32_t *, g4_cxa_guard_t *, char *, int, int, int, uint32_t *, void *, char *, int, int, int))(*v1 + 52))(
    v36,
    v1,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    obj,
    v36,
    v23,
    v24,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v25 = (char *)v1[1678];
  v2 = v22;
  if ( byte_20D4B60 == 0 )
  {
    v8 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60);
    v2 = v22;
    if ( v8 != 0 )
    {
      sub_7B3590(v22, &dword_20D4B80);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
      __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
      v2 = v22;
    }
  }
  v3 = nullptr;
  v36[8] = (uint32_t)(uintptr_t)(v2);
  if ( byte_20D4B84 == 0 )
    v3 = &dword_20D4B80;
  v36[7] = (uint32_t)(uintptr_t)(v25);
  v36[6] = (uint32_t)(uintptr_t)(v3);
  retaddr = &v30;
  savedregs = v1;
  sub_7B29B0(&v31);
  sub_932BC0(v1 + 1680, (int **)&v31);
  v26 = v32;
  v4 = (char *)v31;
  if ( v32 != v31 )
  {
    do
    {
      obja = v4;
      sub_5F7820(v4, 0);
      v4 = obja + 4;
    }
    while ( v26 != obja + 4 );
    v4 = (char *)v31;
  }
  if ( v4 != nullptr )
    operator delete(v4);
  sub_5EDFE0(&v30);
  v19 = ((long double ( *)(int *))*(uint32_t *)(*v1 + 216))(v1);
  if ( v19 >= 5.0 )
  {
    v5 = v1[1680];
    if ( (unsigned int)(v1[1681] - v5) >> 2 != 0 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        ++v7;
        sub_7AFD70(*(uint32_t *)(v5 + 4 * v6), "idle");
        v5 = v1[1680];
        v6 = v7;
      }
      while ( v7 < (v1[1681] - v5) >> 2 );
    }
  }
}

// Group C [sub_936790] (VA 0x936790) | bad sp value at call has been detected, the output may be wrong!
uint32_t * sub_936790(int *a1)
{
  int *v1;
  void *v2;
  uint32_t *v3;
  int **v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10; // [esp-Ch] [ebp-64h]
  int v11;
  int v12;
  void *v13;
  void *obj;
  g4_cxa_guard_t *v15;
  int v16; // [esp+Ch] [ebp-4Ch]
  int v17; // [esp+Ch] [ebp-4Ch]
  int **v18; // [esp+Ch] [ebp-4Ch]
  int v19;
  int v20;
  int v21;
  uint32_t *v22; // [esp+1Ch] [ebp-3Ch] BYREF
  void *v23;
  int **v24;
  int v25;
  int v26; // [esp+2Ch] [ebp-2Ch]
  int v27;
  uint8_t v28[20];
  int **v29;
  uint32_t *v30; // [esp+4Ch] [ebp-Ch]
  int v31;
  void *v32;
  int *savedregs;
  uint32_t **retaddr; // [esp+5Ch] [ebp+4h]

  v29 = &a1;
  v1 = a1;
  sub_8E1420(&v22, nullptr);
  (*(void ( **)(uint8_t *, int *, int, int, int, int, int, int, uint8_t *, void *, g4_cxa_guard_t *, int, int, int, int, uint32_t *, void *, int **, int, int, int))(*v1 + 52))(
    v28,
    v1,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v28,
    obj,
    v15,
    v16,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v17 = v1[1683];
  v2 = v13;
  if ( byte_20D4B60 == 0 )
  {
    v6 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60);
    v2 = v13;
    if ( v6 != 0 )
    {
      sub_7B3590(v13, &dword_20D4B80);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
      __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
      v2 = v13;
    }
  }
  v3 = nullptr;
  v32 = v2;
  if ( byte_20D4B84 == 0 )
    v3 = &dword_20D4B80;
  savedregs = v1;
  v31 = v17;
  v30 = v3;
  retaddr = &v22;
  sub_7B29B0(&v23);
  sub_932BC0(v1 + 1686, (int **)&v23);
  v4 = (int **)v23;
  v18 = v24;
  if ( v24 != v23 )
  {
    do
    {
      v29 = v4++;
      sub_5F7820(v29, 0);
    }
    while ( v18 != v4 );
    v4 = (int **)v23;
  }
  if ( v4 != nullptr )
    operator delete(v4);
  return sub_5EDFE0(&v22);
}

// Group C [sub_936630] (VA 0x936630) | bad sp value at call has been detected, the output may be wrong!
uint32_t * sub_936630(int *a1)
{
  int *v1;
  void *v2;
  uint32_t *v3;
  int **v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10; // [esp-Ch] [ebp-64h]
  int v11;
  int v12;
  void *v13;
  void *obj;
  g4_cxa_guard_t *v15;
  int v16; // [esp+Ch] [ebp-4Ch]
  int v17; // [esp+Ch] [ebp-4Ch]
  int **v18; // [esp+Ch] [ebp-4Ch]
  int v19;
  int v20;
  int v21;
  uint32_t *v22; // [esp+1Ch] [ebp-3Ch] BYREF
  void *v23;
  int **v24;
  int v25;
  int v26; // [esp+2Ch] [ebp-2Ch]
  int v27;
  uint8_t v28[20];
  int **v29;
  uint32_t *v30; // [esp+4Ch] [ebp-Ch]
  int v31;
  void *v32;
  int *savedregs;
  uint32_t **retaddr; // [esp+5Ch] [ebp+4h]

  v29 = &a1;
  v1 = a1;
  sub_8E1420(&v22, nullptr);
  (*(void ( **)(uint8_t *, int *, int, int, int, int, int, int, uint8_t *, void *, g4_cxa_guard_t *, int, int, int, int, uint32_t *, void *, int **, int, int, int))(*v1 + 52))(
    v28,
    v1,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v28,
    obj,
    v15,
    v16,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v17 = v1[1692];
  v2 = v13;
  if ( byte_20D4B60 == 0 )
  {
    v6 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60);
    v2 = v13;
    if ( v6 != 0 )
    {
      sub_7B3590(v13, &dword_20D4B80);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
      __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
      v2 = v13;
    }
  }
  v3 = nullptr;
  v32 = v2;
  if ( byte_20D4B84 == 0 )
    v3 = &dword_20D4B80;
  savedregs = v1;
  v31 = v17;
  v30 = v3;
  retaddr = &v22;
  sub_7B29B0(&v23);
  sub_932BC0(v1 + 1694, (int **)&v23);
  v4 = (int **)v23;
  v18 = v24;
  if ( v24 != v23 )
  {
    do
    {
      v29 = v4++;
      sub_5F7820(v29, 0);
    }
    while ( v18 != v4 );
    v4 = (int **)v23;
  }
  if ( v4 != nullptr )
    operator delete(v4);
  return sub_5EDFE0(&v22);
}

// Group C [sub_12C3090] (VA 0x12c3090)
void sub_12C3090(int a1, int a2, int a3)
{
  int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  char *v7;
  char v8;
  unsigned int v9;
  char *v10;
  char v11;
  int v12;
  int v13;
  unsigned int v14; // [esp+2Ch] [ebp-20h]

  sub_12AA290(a3, 0, 2, "glyph_props");
  sub_12AA290(a3, 2u, 1, "lig_props");
  sub_12AA290(a3, 3u, 1, "syllable");
  v12 = *(uint32_t *)(a3 + 100);
  v14 = *(uint32_t *)(a3 + 88);
  v3 = *(uint32_t *)(v12 + 8);
  if ( v14 > 1 )
  {
    v13 = 20;
    v4 = 1;
    v5 = 0;
    do
    {
      if ( *(uint32_t *)(v12 + v13 + 8) != v3 )
      {
        v3 = *(uint32_t *)(v12 + v13 + 8);
        if ( v4 - v5 > 1 && v5 < v4 )
        {
          do
          {
            if ( ((7168 >> *(uint8_t *)(v12 + 20 * v5 + 16)) & 1) == 0 )
            {
              v6 = v5 + 1;
              if ( v5 + 1 < v4 && ((7168 >> *(uint8_t *)(v12 + 20 * v6 + 16)) & 1) != 0 )
              {
                v7 = (char *)(v12 + 20 * v5 + 56);
                do
                {
                  if ( ++v6 >= v4 )
                    break;
                  v8 = *v7;
                  v7 += 20;
                }
                while ( ((7168 >> v8) & 1) != 0 );
              }
              sub_12C27C0(a2, a3, v5, v6);
              v5 = v6 - 1;
            }
            ++v5;
          }
          while ( v5 < v4 );
          v12 = *(uint32_t *)(a3 + 100);
          v3 = *(uint32_t *)(v12 + v13 + 8);
        }
        v5 = v4;
      }
      ++v4;
      v13 += 20;
    }
    while ( v4 != v14 );
    if ( v14 - v5 > 1 && v14 > v5 )
    {
      do
      {
        if ( ((7168 >> *(uint8_t *)(v12 + 20 * v5 + 16)) & 1) == 0 )
        {
          v9 = v5 + 1;
          if ( v14 > v5 + 1 && ((7168 >> *(uint8_t *)(v12 + 20 * v9 + 16)) & 1) != 0 )
          {
            v10 = (char *)(v12 + 20 * v5 + 56);
            do
            {
              if ( v14 <= ++v9 )
                break;
              v11 = *v10;
              v10 += 20;
            }
            while ( ((7168 >> v11) & 1) != 0 );
          }
          sub_12C27C0(a2, a3, v5, v9);
          v5 = v9 - 1;
        }
        ++v5;
      }
      while ( v14 > v5 );
    }
  }
}

// Group C [sub_B73820] (VA 0xb73820) | write access to const memory has been detected, the output may be wrong!
void sub_B73820(int64_t a1)
{
  int *v1;
  int *v2;
  int *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  void *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  int *v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  int v24;
  int *v25;
  uint32_t *v26;
  int v27;
  uint32_t *v28;
  int *v29;
  void *obj;
  void *obja;
  void *objb;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41; // [esp+1Ch] [ebp-98h] BYREF
  float v42;
  float v43;
  uint32_t v44[3];
  float v45[3];
  float v46[3]; // [esp+4Ch] [ebp-68h] BYREF
  float v47[3];
  int v48[2];
  glf::Self *v49[2]; // [esp+6Ch] [ebp-48h] BYREF
  int v50;
  uint32_t *v51;
  g4_int128_t v52; // [esp+7Ch] [ebp-38h]
  uint32_t v53[7]; // [esp+8Ch] [ebp-28h] BYREF

  v53[6] = (uint32_t)(uintptr_t)(&a1);
  if ( byte_20D5C00 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5C00) != 0 )
  {
    sub_76C650((int)(uintptr_t)&dword_20D5C20);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5C00);
    __cxa_atexit((void (*)(void *))sub_76F420, &dword_20D5C20, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D5C24 == 0 )
    v1 = (int *)(&dword_20D5C20);
  sub_7368C0((int)(uintptr_t)v1, 1);
  if ( byte_20D5D00 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D00) != 0 )
  {
    sub_735470(&dword_20D5D20);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D00);
    __cxa_atexit((void (*)(void *))sub_71FE50, &dword_20D5D20, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D5D24 == 0 )
    v2 = (int *)(&dword_20D5D20);
  sub_735EC0(v2);
  if ( byte_20D2430 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2430) != 0 )
  {
    sub_7D1280(&dword_20D2438);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2430);
    __cxa_atexit((void (*)(void *))sub_789DF0, &dword_20D2438, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D243C == 0 )
    v3 = (int *)(&dword_20D2438);
  *((uint8_t *)v3 + 21) = 1;
  sub_62EC40(17);
  sub_62EC40(4);
  sub_62EC40(5);
  sub_62EC40(6);
  sub_62EC40(8);
  v44[0] = 1196621250;
  v44[1] = 1203241137;
  v44[2] = 1173595742;
  v53[0] = 0;
  v53[1] = 0;
  v53[2] = 1058384380;
  v53[3] = 1062187422;
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D4A64 == 0 )
    v4 = (int *)(&dword_20D4A60);
  v5 = sub_5C8D90(v4, "Marker_TeleportDoubleClick", 0);
  G4_VCALL<void>(v5, 308, v44);
  v6 = sub_8F0680();
  G4_VCALL<void>(v6, 324, v5);
  v7 = sub_8F0680();
  *(uint8_t *)(v7 + 308) = 0;
  *(uint32_t *)(v7 + 304) = 3;
  v8 = sub_8F0680();
  G4_VCALL<void>(v8, 316, v53);
  v9 = sub_8F0680();
  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0((int)(uintptr_t)&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v10 = nullptr;
  if ( byte_20D4E64 == 0 )
    v10 = &unk_20D4E60;
  sub_9CB030(v10, 0, v9, 0);
  v11 = sub_8F0680();
  (*(void ( **)(float *, int))(*(uint32_t *)v11 + 296))(v46, v11);
  v39 = v46[0] * 500.0;
  v37 = v46[1] * 500.0;
  v35 = 500.0 * v46[2];
  v12 = sub_8F0680();
  (*(void ( **)(float *))(*(uint32_t *)v12 + 52))(v45);
  v40 = v39 + v45[0];
  v38 = v37 + v45[1];
  v36 = v35 + v45[2];
  v13 = sub_8F0680();
  (*(void ( **)(float *))(*(uint32_t *)v13 + 296))(v47);
  v34 = v47[0] * 150.0;
  v33 = 150.0 * v47[1];
  sub_AB7AC0((int)(uintptr_t)v48, (glf::Self *)"BusinessMan1");
  v50 = 0;
  v51 = &dword_213B814;
  v14 = glf::Stricmp(v49[0], (const char *)&dword_213B814);
  sub_1938B70(&v51);
  if ( v14 == 0 )
    goto LABEL_62;
  v52 = 0;
  v43 = v36;
  v41 = v40;
  v42 = v38;
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v15 = nullptr;
  if ( byte_20D4A64 == 0 )
    v15 = (int *)(&dword_20D4A60);
  v16 = sub_5C9D10(
          (int)(uintptr_t)v15,
          (int)(uintptr_t)v48,
          (uint8_t)(uintptr_t)&dword_0 + 1,
          &v41,
          *(float *)&v52,
          *((float *)&v52 + 1),
          *((float *)&v52 + 2),
          *((float *)&v52 + 3));
  v17 = v16;
  if ( v16 == nullptr )
    goto LABEL_62;
  obj = (void *)dword_20D76C0;
  v18 = G4_VCALL<int>(v16, 560);
  sub_A6DB00(v18, (int)(uintptr_t)obj);
  sub_BDEE30(v17 + 72, 1);
  sub_1938B70(v49);
  sub_AB7AC0((int)(uintptr_t)v48, (glf::Self *)"Biker_Fat");
  v50 = 0;
  v51 = &dword_213B814;
  obja = (void *)glf::Stricmp(v49[0], (const char *)&dword_213B814);
  sub_1938B70(&v51);
  if ( obja == nullptr )
    goto LABEL_62;
  v52 = 0;
  v43 = v36;
  v41 = v40 + v33;
  v42 = v38 - v34;
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v19 = nullptr;
  if ( byte_20D4A64 == 0 )
    v19 = (int *)(&dword_20D4A60);
  v20 = sub_5C9D10(
          (int)(uintptr_t)v19,
          (int)(uintptr_t)v48,
          1u,
          &v41,
          *(float *)&v52,
          *((float *)&v52 + 1),
          *((float *)&v52 + 2),
          *((float *)&v52 + 3));
  v21 = v20;
  if ( v20 != nullptr )
  {
    objb = (void *)dword_20D76C0;
    v22 = G4_VCALL<int>(v20, 560);
    sub_A6DB00(v22, (int)(uintptr_t)objb);
    sub_BDEE30(v21 + 72, 1);
    sub_1938B70(v49);
    if ( byte_20D186A != 0 )
    {
      if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
      {
        sub_51DC30((int)(uintptr_t)&unk_20D5500);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
        __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
      }
      v23 = nullptr;
      if ( byte_20D5514 == 0 )
        v23 = (uint32_t *)(&unk_20D5500);
      if ( (unsigned int)(v23[7] - v23[6]) >> 2 != 0 )
      {
        v24 = *(uint32_t *)(v23[7] - 4);
        if ( v24 != 0 )
        {
          v25 = (int *)G4_VCALL<int>(v24, 8);
          if ( v25 != nullptr )
          {
            if ( v25 == (int *)(&dword_20DE798) )
            {
LABEL_37:
              if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
              {
                sub_51DC30((int)(uintptr_t)&unk_20D5500);
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
                __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
              }
              v26 = nullptr;
              if ( byte_20D5514 == 0 )
                v26 = (uint32_t *)(&unk_20D5500);
              v27 = v26[7];
              if ( (unsigned int)(v27 - v26[6]) >> 2 != 0
                && (v28 = *(uint32_t **)(v27 - 4)) != nullptr
                && (v29 = (int *)(*(int ( **)(uint32_t))(*v28 + 8))(*(uint32_t *)(v27 - 4))) != nullptr )
              {
                while ( v29 != (int *)(&dword_20DE798) )
                {
                  v29 = (int *)v29[1];
                  if ( v29 == nullptr )
                    goto LABEL_61;
                }
                v28[2] = 2;
              }
              else
              {
LABEL_61:
                *(uint32_t *)byte_8 = 2;
              }
            }
            else
            {
              while ( 1 )
              {
                v25 = (int *)v25[1];
                if ( v25 == nullptr )
                  break;
                if ( v25 == (int *)(&dword_20DE798) )
                  goto LABEL_37;
              }
            }
          }
        }
      }
    }
  }
  else
  {
LABEL_62:
    sub_1938B70(v49);
  }
}

// Group C [sub_9D5C90] (VA 0x9d5c90)
char sub_9D5C90(int *a1, uint8_t a2, char a3)
{
  uint32_t **v3;
  int v4;
  int v5;
  glitch::scene::ISceneNode::Self *v6;
  int v7;
  int ( *v8)(int, float *);
  int v9;
  float *v10;
  int v11;
  float *v12;
  int v13;
  int v14;
  glitch::scene::ISceneNode::Self *v15;
  float v16; // xmm0_4
  float *v17;
  int v18;
  float *v19;
  int v20;
  void ( *v21)(int, float *);
  glitch::scene::ISceneNode::Self *v22;
  int v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  uint8_t v30[4];
  float v31;
  float v32;
  float v33;
  float v34[3]; // [esp+8Ch] [ebp-34h] BYREF
  float v35[6];

  v3 = (uint32_t **)a1[1062];
  if ( v3 != nullptr || (v4 = G4_VCALL<int>(a1, 456), v3 = (uint32_t **)v4, v4 != 0) )
  {
    v4 = sub_86F260((int)(uintptr_t)v3, a1[921]);
    v5 = v4;
    if ( v4 != 0 )
    {
      v6 = (glitch::scene::ISceneNode::Self *)((int ( *)(uint32_t **))(*v3)[42])(v3);
      glitch::scene::ISceneNode::updateAbsolutePosition(v6, true);
      sub_993170(a1, v5, a2 ^ 1, 1);
      if ( (a1[469] & 1) != 0 )
      {
        if ( sub_8706D0((int)(uintptr_t)v3, a1[922]) != 0 )
        {
          v11 = G4_VCALL<int>(a1, 168);
          v12 = (float *)G4_VCALL<int>(v11, 180);
          v31 = *v12;
          v32 = v12[1];
          v13 = *a1;
          v33 = 0.0;
          v14 = (*(int ( **)(int *))(v13 + 168))(a1);
          G4_VCALL<void>(v14, 184, &v31);
          v15 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
          glitch::scene::ISceneNode::updateAbsolutePosition(v15, true);
        }
        if ( v3[195] != nullptr && ((uint8_t ( *)(uint32_t **))(*v3)[108])(v3) != 0 )
        {
          (*(void ( **)(uint8_t *, int *))(*a1 + 52))(v30, a1);
          v24 = (int)(uintptr_t)v3[195] + *(uint32_t *)(*v3[195] - 12);
          v25 = ((long double ( *)(int))*(uint32_t *)(*(uint32_t *)v24 + 72))(v24);
          v16 = v26 - (float)(v25 * 100.0);
          if ( v16 < -300.0 )
          {
            v31 = 0.0;
            v32 = 0.0;
            v33 = -300.0 - v16;
            v17 = (float *)G4_VCALL<int>(v5, 72);
            sub_A0A2A0(v17, &v31);
            v18 = G4_VCALL<int>(a1, 168);
            v19 = (float *)G4_VCALL<int>(v18, 180);
            v28 = v19[2];
            v27 = v19[1];
            v29 = *v19;
            v20 = G4_VCALL<int>(a1, 168);
            v21 = *(void ( **)(int, float *))(*(uint32_t *)v20 + 184);
            v34[0] = v29 + v31;
            v34[1] = v27 + v32;
            v34[2] = v28 + v33;
            v21(v20, v34);
            v22 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
            glitch::scene::ISceneNode::updateAbsolutePosition(v22, true);
          }
        }
        if ( a3 != 0 )
        {
          if ( ((uint8_t ( *)(uint32_t **))(*v3)[108])(v3) != 0 )
            sub_9D4450(a1, 107, 1065353216, 0, 0);
          else
            sub_9D4450(a1, 156, 1065353216, 0, 0);
        }
      }
      LOBYTE(v4) = sub_86DBD0((int)(uintptr_t)v3);
      if ( (uint8_t)v4 != 0 )
      {
        LOBYTE(v4) = ((int ( *)(uint32_t **))(*v3)[108])(v3);
        if ( (uint8_t)v4 == 0 )
        {
          v7 = G4_VCALL<int>(a1, 168);
          v8 = *(int ( **)(int, float *))(*(uint32_t *)v7 + 184);
          v9 = G4_VCALL<int>(a1, 168);
          v10 = (float *)G4_VCALL<int>(v9, 180);
          v35[0] = *v10;
          v35[1] = v10[1];
          v35[2] = v10[2] + 120.0;
          LOBYTE(v4) = v8(v7, v35);
        }
      }
    }
  }
  return v4;
}

// Group C [sub_A00190] (VA 0xa00190) | bad sp value at call has been detected, the output may be wrong!
int sub_A00190(int a1, int a2)
{
  uint32_t *v3;
  int v4;
  int v5;
  glitch::scene::ISceneNode::Self *v6;
  int v7;
  uint32_t *v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  float *v14;
  int v15;
  int v16;
  float v17; // xmm1_4
  bool v18; // zf
  uint32_t *v19;
  int v20;
  int v21;
  glitch::scene::ISceneNode::Self *v22;
  int *v23;
  int v24;
  int v25;
  float *v26;
  float v27; // xmm1_4
  float v28; // xmm0_4
  int v29;
  uint32_t *v31;
  uint32_t *v32;
  int v33;
  glitch::scene::ISceneNode::Self *v34;
  int *v35;
  int v36;
  float v37; // xmm1_4
  bool v38;
  uint32_t *v39;
  int v40;
  int v41;
  glitch::scene::ISceneNode::Self *v42;
  float v43; // xmm6_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  int v48;
  int v49;
  int v50;
  uint32_t *v51;
  uint32_t *v52;
  int v53;
  uint32_t *v54;
  uint32_t *v55;
  int v56;
  uint32_t *v57;
  uint32_t *v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63; // [esp+4Ch] [ebp-C0h]
  float v64;
  float v65;
  int v66;
  void ( *v67)(int, float *);
  int v68; // [esp+5Ch] [ebp-B0h]
  int v69;
  int64_t v70;
  void ( *v71)(uint32_t *, int, uint32_t);
  int v72;
  float v73;
  void ( *v74)(uint32_t *, int, uint32_t);
  float v75;
  int *v76; // [esp+6Ch] [ebp-A0h]
  float v77; // [esp+6Ch] [ebp-A0h]
  int v78;
  float v79;
  void ( *v80)(uint32_t *, int, uint32_t);
  float v81;
  uint32_t *v82;
  uint32_t *v83;
  uint32_t *v84;
  uint32_t *v85; // [esp+8Ch] [ebp-80h] BYREF
  uint32_t v86[3];
  float v87; // [esp+9Ch] [ebp-70h] BYREF
  float v88; // [esp+A0h] [ebp-6Ch]
  float v89; // [esp+A4h] [ebp-68h]
  float v90; // [esp+A8h] [ebp-64h] BYREF
  float v91; // [esp+ACh] [ebp-60h]
  float v92; // [esp+B0h] [ebp-5Ch]
  float v93[3]; // [esp+B4h] [ebp-58h] BYREF
  float v94; // [esp+C0h] [ebp-4Ch] BYREF
  float v95; // [esp+C4h] [ebp-48h]
  float v96; // [esp+C8h] [ebp-44h]
  float v97[3]; // [esp+CCh] [ebp-40h] BYREF
  float v98; // [esp+D8h] [ebp-34h] BYREF
  float v99; // [esp+DCh] [ebp-30h]
  float v100; // [esp+E0h] [ebp-2Ch]
  int64_t v101; // [esp+E4h] [ebp-28h] BYREF
  float v102; // [esp+ECh] [ebp-20h]
  float v103; // [esp+F0h] [ebp-1Ch]
  int *v104; // [esp+FCh] [ebp-10h]
  uint32_t *v105;
  int *v106;
  int v107;
  void *retaddr;

  v104 = &a2;
  glitch::collada::CAnimationGraph::getAnimatorNode(
    (glitch::collada::CAnimationGraph::Self *)&v82,
    *(uint32_t *)(*(uint32_t *)(a1 + 600) + 100),
    *(uint32_t *)(*(uint32_t *)(a1 + 600) + 56));
  v3 = v82;
  if ( v82 != nullptr )
    sub_5459C0((uint32_t *)((char *)v82 + *(uint32_t *)(*v82 - 12)));
  v4 = *(uint32_t *)G4_VCALL<int>(v3, 68);
  if ( v4 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v4 + *(uint32_t *)(*(uint32_t *)v4 - 12) + 4), 1u);
  v73 = ((long double ( *)(int))*(uint32_t *)(*(uint32_t *)v4 + 56))(v4);
  v72 = *(uint32_t *)(a1 + 676);
  v68 = *(uint32_t *)(G4_VCALL<int>(a1, 168) + 244);
  v5 = G4_VCALL<int>(a1, 168);
  G4_VCALL<void>(v5, 76, 1);
  v6 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
  glitch::scene::ISceneNode::updateAbsolutePosition(v6, true);
  v7 = G4_VCALL<int>(a1, 168);
  v8 = (uint32_t *)G4_VCALL<int>(v7, 180);
  v86[0] = *v8;
  v86[1] = v8[1];
  v9 = v8[2];
  v105 = &dword_0 + 1;
  v78 = a1 + 508;
  v86[2] = v9;
  v10 = (int *)sub_520290(a1 + 508);
  sub_5EBF20(&v87, v10);
  v48 = *(uint32_t *)(a1 + 3684);
  v11 = G4_VCALL<int>(a1, 456);
  v49 = G4_VCALL<int>(v11, 748, v48);
  v12 = G4_VCALL<int>(a1, 456);
  v76 = (int *)sub_8706D0(v12, v49);
  if ( v76 == nullptr )
    return sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v4 - 12) + v4));
  v13 = G4_VCALL<int>(a1, 168);
  v14 = (float *)G4_VCALL<int>(v13, 72);
  sub_A041C0((float *)&v101, v14);
  v15 = *(uint32_t *)(a1 + 1872);
  LODWORD(v101) = v101 ^ 0x80000000;
  *(uint8_t *)(a1 + 3360) = 1;
  HIDWORD(v101) ^= 0x80000000;
  v102 = -v102;
  if ( v15 < 0 )
  {
    glitch::os::Timer::tick();
    v31 = *(uint32_t **)(a1 + 600);
    v31[3] = 0;
    v31[4] = 0;
    v31[2] = 0;
    sub_97D8B0(*(uint32_t **)(a1 + 600), (int)v73);
    glitch::collada::CAnimationGraph::getAnimatorNode(
      (glitch::collada::CAnimationGraph::Self *)&v83,
      *(uint32_t *)(*(uint32_t *)(a1 + 600) + 100),
      *(uint32_t *)(*(uint32_t *)(a1 + 600) + 52));
    v32 = v83;
    if ( v83 != nullptr )
    {
      v54 = v83;
      sub_5459C0((uint32_t *)((char *)v83 + *(uint32_t *)(*v83 - 12)));
      v32 = v54;
    }
    v71 = *(void ( **)(uint32_t *, int, uint32_t))(*v32 + 16);
    v55 = v32;
    v33 = G4_VCALL<int>(a1, 168);
    v71(v55, v33, LODWORD(v73));
    v34 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
    glitch::scene::ISceneNode::updateAbsolutePosition(v34, true);
    v105 = &dword_0 + 1;
    v35 = (int *)sub_520290(v78);
    sub_5EBF20(&v90, v35);
    glitch::os::Timer::tick();
    v36 = *(uint32_t *)(a1 + 604);
    *(uint32_t *)(a1 + 616) = -1;
    *(uint32_t *)(a1 + 620) = -1;
    *(uint32_t *)(a1 + 628) = 1065353216;
    *(uint8_t *)(a1 + 608) = 0;
    *(uint32_t *)(a1 + 612) = 0;
    *(uint8_t *)(a1 + 609) = 0;
    *(uint8_t *)(a1 + 610) = 0;
    *(uint32_t *)(a1 + 624) = 125;
    *(uint32_t *)(a1 + 640) = 0;
    *(uint32_t *)(a1 + 676) = -1;
    *(uint32_t *)(a1 + 660) = -1;
    v56 = v36;
    if ( sub_C019B0(-1) )
      *(uint32_t *)(a1 + 792) = -1;
    else
      *(uint32_t *)(a1 + 748) = -1;
    if ( *(uint32_t *)(a1 + 596) != 0 && *(uint32_t *)(a1 + 616) != -1 )
    {
      v37 = *(float *)(a1 + 840);
      if ( v37 <= 0.0 )
        v66 = 125;
      else
        v66 = (int)(float)(125.0 / v37);
      v38 = sub_C019B0(*(uint32_t *)(a1 + 620));
      v107 = v66;
      v106 = (int *)((&dword_20D7620 + (3 * v56)));
      v105 = (uint32_t *)(a1 + 608);
      v104 = (int *)(a1 + 460);
      if ( v38 )
      {
        sub_9D3DA0((int)(uintptr_t)v104, (int)(uintptr_t)v105, v106, v107);
      }
      else if ( (uint8_t)sub_9D40B0((int)(uintptr_t)v104, v105, v106, v107) != 0 )
      {
        sub_9D6530(*(uint32_t *)(a1 + 480));
      }
    }
    retaddr = nullptr;
    sub_9D4450(a1, v72, 1065353216, 0, 0);
    glitch::collada::CAnimationGraph::getAnimatorNode(
      (glitch::collada::CAnimationGraph::Self *)&v84,
      *(uint32_t *)(*(uint32_t *)(a1 + 600) + 100),
      *(uint32_t *)(*(uint32_t *)(a1 + 600) + 52));
    v39 = v84;
    if ( v84 != nullptr )
    {
      v57 = v84;
      sub_5459C0((uint32_t *)((char *)v84 + *(uint32_t *)(*v84 - 12)));
      v39 = v57;
    }
    v80 = *(void ( **)(uint32_t *, int, uint32_t))(*v39 + 16);
    v58 = v39;
    v40 = G4_VCALL<int>(a1, 168);
    v80(v58, v40, 0);
    v41 = G4_VCALL<int>(a1, 168);
    G4_VCALL<void>(v41, 184, v86);
    v42 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
    glitch::scene::ISceneNode::updateAbsolutePosition(v42, true);
    *(uint8_t *)(a1 + 3360) = 0;
    sub_5EBF20(&v98, v76);
    v43 = (float)(*(float *)&v101 * (float)(v99 - v91)) - (float)(*((float *)&v101 + 1) * (float)(v98 - v90));
    v44 = (float)(v102 * (float)(v98 - v90)) - (float)(*(float *)&v101 * (float)(v100 - v92));
    v81 = (float)(*((float *)&v101 + 1) * (float)(v100 - v92)) - (float)(v102 * (float)(v99 - v91));
    v45 = (float)((float)((float)(*((float *)&v101 + 1) * v43) - (float)(v102 * v44))
                + (float)((float)(*((float *)&v101 + 1) * v43) - (float)(v102 * v44)))
        + (float)((float)(v98 - v90) + (float)(v81 * (float)(v103 + v103)));
    v46 = (float)((float)((float)(v81 * v102) - (float)(*(float *)&v101 * v43))
                + (float)((float)(v81 * v102) - (float)(*(float *)&v101 * v43)))
        + (float)((float)(v99 - v91) + (float)(v44 * (float)(v103 + v103)));
    v47 = (float)((float)((float)(v44 * *(float *)&v101) - (float)(v81 * *((float *)&v101 + 1)))
                + (float)((float)(v44 * *(float *)&v101) - (float)(v81 * *((float *)&v101 + 1))))
        + (float)((float)(v100 - v92) + (float)((float)(v103 + v103) * v43));
    if ( v73 == 0.0 )
    {
      *(float *)(a1 + 3304) = v45;
      *(float *)(a1 + 3308) = v46;
      *(float *)(a1 + 3312) = v47;
      *(float *)(a1 + 3316) = v45;
      *(float *)(a1 + 3320) = v46;
      *(float *)(a1 + 3324) = v47;
    }
    else
    {
      *(uint32_t *)(a1 + 3304) = 0;
      *(uint32_t *)(a1 + 3308) = 0;
      *(uint32_t *)(a1 + 3312) = 0;
      *(uint32_t *)(a1 + 3316) = 0;
      *(uint32_t *)(a1 + 3320) = 0;
      *(uint32_t *)(a1 + 3324) = 0;
    }
    *(float *)(a1 + 3332) = v46;
    *(uint32_t *)(a1 + 3340) = 0;
    *(uint32_t *)(a1 + 3344) = 0;
    *(float *)(a1 + 3328) = v45;
    *(uint32_t *)(a1 + 3348) = 0;
    *(float *)(a1 + 3336) = v47;
    *(float *)(a1 + 3352) = v73;
    *(float *)(a1 + 3356) = v73;
  }
  else
  {
    glitch::os::Timer::tick();
    v16 = *(uint32_t *)(a1 + 604);
    *(uint32_t *)(a1 + 616) = -1;
    *(uint32_t *)(a1 + 620) = -1;
    *(uint32_t *)(a1 + 628) = 1065353216;
    *(uint8_t *)(a1 + 608) = 0;
    *(uint32_t *)(a1 + 612) = 0;
    *(uint8_t *)(a1 + 609) = 0;
    *(uint8_t *)(a1 + 610) = 0;
    *(uint32_t *)(a1 + 624) = 125;
    *(uint32_t *)(a1 + 640) = 0;
    *(uint32_t *)(a1 + 676) = -1;
    *(uint32_t *)(a1 + 660) = -1;
    v50 = v16;
    if ( sub_C019B0(-1) )
      *(uint32_t *)(a1 + 792) = -1;
    else
      *(uint32_t *)(a1 + 748) = -1;
    if ( *(uint32_t *)(a1 + 596) != 0 && *(uint32_t *)(a1 + 616) != -1 )
    {
      v17 = *(float *)(a1 + 840);
      if ( v17 <= 0.0 )
        v69 = 125;
      else
        v69 = (int)(float)(125.0 / v17);
      v18 = !sub_C019B0(*(uint32_t *)(a1 + 620));
      v106 = (int *)((&dword_20D7620 + (3 * v50)));
      v107 = v69;
      v105 = (uint32_t *)(a1 + 608);
      v104 = (int *)(a1 + 460);
      if ( v18 )
      {
        if ( (uint8_t)sub_9D40B0((int)(uintptr_t)v104, v105, v106, v107) != 0 )
          sub_9D6530(*(uint32_t *)(a1 + 480));
      }
      else
      {
        sub_9D3DA0((int)(uintptr_t)v104, (int)(uintptr_t)v105, v106, v107);
      }
    }
    retaddr = nullptr;
    sub_9D4450(a1, v72, 1065353216, 0, 0);
    glitch::collada::CAnimationGraph::getAnimatorNode(
      (glitch::collada::CAnimationGraph::Self *)&v85,
      *(uint32_t *)(*(uint32_t *)(a1 + 600) + 100),
      *(uint32_t *)(*(uint32_t *)(a1 + 600) + 52));
    v19 = v85;
    if ( v85 != nullptr )
    {
      v51 = v85;
      sub_5459C0((uint32_t *)((char *)v85 + *(uint32_t *)(*v85 - 12)));
      v19 = v51;
    }
    v74 = *(void ( **)(uint32_t *, int, uint32_t))(*v19 + 16);
    v52 = v19;
    v20 = G4_VCALL<int>(a1, 168);
    v74(v52, v20, 0);
    v21 = G4_VCALL<int>(a1, 168);
    G4_VCALL<void>(v21, 184, v86);
    v22 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(a1, 168);
    glitch::scene::ISceneNode::updateAbsolutePosition(v22, true);
    v105 = &dword_0 + 1;
    v23 = (int *)sub_520290(v78);
    sub_5EBF20(v97, v23);
    v87 = v97[0];
    v88 = v97[1];
    *(uint8_t *)(a1 + 3360) = 0;
    v89 = v97[2];
    sub_5EBF20(&v94, v76);
    v24 = *(uint32_t *)a1;
    v104 = (int *)a1;
    v75 = v102;
    v70 = v101;
    v60 = v96 - v89;
    v61 = v95 - v88;
    v59 = (float)(*(float *)&v101 * (float)(v95 - v88)) - (float)(*((float *)&v101 + 1) * (float)(v94 - v87));
    v62 = v94 - v87;
    v79 = (float)(v102 * (float)(v94 - v87)) - (float)(*(float *)&v101 * (float)(v96 - v89));
    v77 = (float)(*((float *)&v101 + 1) * (float)(v96 - v89)) - (float)(v102 * (float)(v95 - v88));
    v64 = v79 * (float)(v103 + v103);
    v65 = v77 * (float)(v103 + v103);
    v63 = (float)(v103 + v103) * v59;
    v53 = (*(int ( **)(int))(v24 + 168))(a1);
    v67 = *(void ( **)(int, float *))(*(uint32_t *)v53 + 184);
    v25 = G4_VCALL<int>(a1, 168);
    v26 = (float *)G4_VCALL<int>(v25, 180);
    v27 = v26[1] + v61;
    v28 = v26[2];
    v93[0] = (float)((float)((float)(*((float *)&v70 + 1) * v59) - (float)(v79 * v75))
                   + (float)((float)(*((float *)&v70 + 1) * v59) - (float)(v79 * v75)))
           + (float)((float)(v62 + *v26) + v65);
    v93[1] = (float)((float)((float)(v77 * v75) - (float)(v59 * *(float *)&v70))
                   + (float)((float)(v77 * v75) - (float)(v59 * *(float *)&v70)))
           + (float)(v27 + v64);
    v93[2] = (float)((float)((float)(v79 * *(float *)&v70) - (float)(v77 * *((float *)&v70 + 1)))
                   + (float)((float)(v79 * *(float *)&v70) - (float)(v77 * *((float *)&v70 + 1))))
           + (float)((float)(v28 + v60) + v63);
    v67(v53, v93);
  }
  v29 = G4_VCALL<int>(a1, 168);
  G4_VCALL<void>(v29, 76, (v68 & 0x18) == 24);
  return sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v4 - 12) + v4));
}

// Group C [sub_BA8B80] (VA 0xba8b80)
void sub_BA8B80(glf::App::Self *a1, int a2)
{
  int v2;

  v2 = a2;
  if ( G4_VCALL<uint8_t>(a1, 60) != 0 )
  {
    if ( glf::App::IsOrientationSupported((int)(uintptr_t)a1, a2) )
    {
      if ( a2 == 4 )
      {
        if ( *((uint8_t *)a1 + 992) == 0 )
          sub_62ED20(3);
        glf::App::SetOrientation(dword_20DDDC0, 4);
      }
      else if ( a2 == 8 )
      {
        if ( *((uint8_t *)a1 + 992) == 0 )
          sub_62ED20(1);
        glf::App::SetOrientation(dword_20DDDC0, 8);
      }
    }
    else
    {
      v2 = 1;
      glf::Console::Println((glf::Console::Self *)"forced glfOrientation to %d", (const char *)&dword_0 + 1);
    }
    if ( byte_20DDDB4 != 0 && byte_20C17E8 == 0 && v2 != dword_20DE150 )
    {
      sub_BA8160((long double)0, (glitch::IDevice::Self **)(a1), 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr);
      sub_B9ACB0((int)(uintptr_t)a1);
    }
    dword_20DE150 = v2;
  }
}

// Group C [sub_B99A40] (VA 0xb99a40) | bad sp value at call has been detected, the output may be wrong!
void sub_B99A40(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  int PhoneLanguage;
  CGameConfig::Self *v5;
  char *PhoneGPUNamePointer;
  char *v7;
  uint8_t *v8;
  char *v9;
  uint8_t *v10;
  char *v11;
  unsigned int v12;
  int *v13;
  uint32_t *i;
  uint32_t *v15;
  uint32_t *j;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  int *v20;
  int v21;
  char *v22;
  g4_cxa_guard_t *v23;
  int v24;
  uint8_t *v25;
  unsigned int v26;
  int v27;
  g4_cxa_guard_t *v28;
  uint8_t *v29;
  unsigned int v30;
  int v31;
  g4_cxa_guard_t *v32;
  int v33;
  char *v34;
  glf::ArchiveManager::Self *v35;
  int v36;
  int v37;
  int v38;
  glitch::IObject::Self *v39;
  uint32_t *v40;
  volatile int32_t *v41;
  int v42;
  volatile int32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  volatile int32_t *v46;
  int *v47;
  int v48;
  void ( *v49)(int *, uint32_t **);
  volatile int32_t *v50;
  volatile int32_t *v51;
  int v52;
  g4_cxa_guard_t *v53;
  int v54;
  char *v55;
  glf::ArchiveManager::Self *v56;
  char *v57;
  char *PhoneModelPointer;
  char *obja;
  glf::ArchiveManager::Self *objb;
  CGameConfig::Self *obj;
  glf::ArchiveManager::Self *objc;
  char *v63;
  char *v64;
  int v65;
  char v66; // [esp+Fh] [ebp-4DDh]
  g4_cxa_guard_t *v67;
  g4_cxa_guard_t *v68;
  g4_cxa_guard_t *v69;
  g4_cxa_guard_t *v70;
  int v71;
  const void *v72[4];
  uint32_t *v73;
  int v74[4];
  uint32_t *v75;
  uint32_t *v76;
  int v77[4];
  int v78[4];
  int v79[4];
  int v80; // [esp+A4h] [ebp-448h] BYREF
  int v81; // [esp+ACh] [ebp-440h] BYREF
  size_t *v82; // [esp+B0h] [ebp-43Ch] BYREF
  char *v83; // [esp+B4h] [ebp-438h] BYREF
  char *v84; // [esp+B8h] [ebp-434h] BYREF
  int v85[3]; // [esp+BCh] [ebp-430h] BYREF
  int v86[3]; // [esp+C8h] [ebp-424h] BYREF
  uint32_t v87[262]; // [esp+D4h] [ebp-418h] BYREF
  int retaddr; // [esp+4F0h] [ebp+4h]

  v87[258] = (uint32_t)(uintptr_t)(&a1);
  v2 = a1;
  v65 = a2;
  v3 = (*(int ( **)(uint32_t))(**(uint32_t **)(a1[208] + 20) + 12))(*(uint32_t *)(a1[208] + 20));
  v2[221] = v3;
  v2[251] = v3;
  dword_20DDD80 = v3;
  srand48(v3);
  sub_558800((int)(uintptr_t)&v81);
  if ( *(uint32_t *)(v81 - 12) != 0 )
  {
    if ( g4_std::string::compare((const void **)&v81, "zh-Hant") != 0 && g4_std::string::compare((const void **)&v81, "zh-HK") != 0 )
    {
      sub_193A6F0(&v82, &v81, 0, 2u);
      g4_std::string::assign_str((size_t **)&v81, &v82);
      sub_1938B70(&v82);
    }
    else
    {
      g4_std::string::assign((const void **)&v81, (int *)"zt", 2u);
    }
    v87[260] = 0;
    sub_AB7210((const char **)&v81);
    g4_std::string::compare((const void **)&v81, "ar");
  }
  PhoneLanguage = nativeGetPhoneLanguage();
  sub_AC6730(v2[216], PhoneLanguage);
  sub_AB6A40(v2[216], PhoneLanguage);
  *reinterpret_cast<int32_t *>(unk_20D6860) = *(uint32_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 212);
  v5 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    obj = (CGameConfig::Self *)operator new(0x200u);
    CGameConfig::Construct(obj);
    v5 = obj;
    CGameConfig::m_instance = (uintptr_t)(uintptr_t)(obj);
  }
  if ( CGameConfig::DefaultUserProfile(v5) == 6 )
    *reinterpret_cast<int32_t *>(unk_20D6860) = 3;
  PhoneGPUNamePointer = GetPhoneGPUNamePointer();
  v87[261] = (uint32_t)(uintptr_t)(&v71);
  g4_std::string::construct_from_cstr(v72, PhoneGPUNamePointer);
  v7 = (char *)v72[0];
  if ( *((int *)v72[0] - 1) < 0 )
  {
    v8 = (uint8_t *)(v72[0]);
LABEL_114:
    v9 = &v7[*((uint32_t *)v7 - 3)];
    goto LABEL_10;
  }
  sub_19397C0(v72);
  v8 = (uint8_t *)(v72[0]);
  if ( *((int *)v72[0] - 1) < 0 )
  {
    v7 = (char *)v72[0];
    goto LABEL_114;
  }
  sub_19397C0(v72);
  v7 = (char *)v72[0];
  v9 = (char *)v72[0] + *((uint32_t *)v72[0] - 3);
  if ( *((int *)v72[0] - 1) >= 0 )
  {
    obja = (char *)v72[0] + *((uint32_t *)v72[0] - 3);
    sub_19397C0(v72);
    v7 = (char *)v72[0];
    v9 = obja;
  }
LABEL_10:
  if ( v7 != v9 )
  {
    v10 = v8;
    v11 = v9;
    do
    {
      v12 = *v7;
      if ( v12 <= 0xFF )
        LOWORD(v12) = *(uint16_t *)(tolower_tab_ + 2 * v12 + 2);
      ++v7;
      *v10++ = v12;
    }
    while ( v7 != v11 );
  }
  switch ( *reinterpret_cast<int32_t *>(unk_20D6860) )
  {
    case -1:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_micro.pak",
        1,
        0);
      break;
    case 0:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_low.pak",
        1,
        0);
      break;
    case 1:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_mid.pak",
        1,
        0);
      break;
    case 2:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders.pak",
        1,
        0);
      break;
    case 3:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_alter.pak",
        1,
        0);
      break;
    case 4:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_mali.pak",
        1,
        0);
      break;
    case 5:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_adreno.pak",
        1,
        0);
      break;
    case 6:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_tegra.pak",
        1,
        0);
      break;
    case 7:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_mali_static.pak",
        1,
        0);
      break;
    case 8:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_adreno_305.pak",
        1,
        0);
      break;
    case 9:
      retaddr = 1;
      (*(void ( **)(uint32_t, const char *, int, uint32_t))(**(uint32_t **)(v2[208] + 32) + 28))(
        *(uint32_t *)(v2[208] + 32),
        "shaders_sgx.pak",
        1,
        0);
      break;
    default:
      break;
  }
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v13 = nullptr;
  if ( byte_20D49A8 == 0 )
    v13 = (int *)(&dword_20D49A0);
  sub_82A6B0((int)(uintptr_t)v13);
  if ( byte_20D5480 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5480) != 0 )
  {
    sub_A6BF60((int)(uintptr_t)&dword_20D54A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5480);
    __cxa_atexit((void (*)(void *))sub_A732E0, &dword_20D54A0, &unk_20D1280);
  }
  if ( byte_20D54A8 == 0 )
  {
    for ( i = (uint32_t *)v2[202]; v2 + 202 != i; i = (uint32_t *)*i )
      ;
    v15 = (uint32_t *)sub_4EB830(0xCu);
    if ( v15 != (uint32_t *)-8 )
      v15[2] = (uint32_t)(uintptr_t)(&dword_20D54A0);
    sub_1901920(v15, (int)(uintptr_t)(v2 + 202));
  }
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)&dword_20D49A0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  if ( byte_20D49A8 == 0 )
  {
    for ( j = (uint32_t *)v2[202]; v2 + 202 != j; j = (uint32_t *)*j )
      ;
    v17 = (uint32_t *)sub_4EB830(0xCu);
    if ( v17 != (uint32_t *)-8 )
      v17[2] = (uint32_t)(uintptr_t)(&dword_20D49A0);
    sub_1901920(v17, (int)(uintptr_t)(v2 + 202));
  }
  if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
  {
    sub_51DC30((int)(uintptr_t)&unk_20D5500);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
    __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
  }
  if ( byte_20D5514 == 0 )
  {
    v18 = (uint32_t *)sub_4EB830(0xCu);
    if ( v18 != (uint32_t *)-8 )
      v18[2] = (uint32_t)(uintptr_t)(&unk_20D5504);
    sub_1901920(v18, (int)(uintptr_t)(v2 + 204));
  }
  v2[220] = 20;
  dword_20DDDF0 = *(uint32_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 416);
  if ( dword_20DDDF0 > 24 )
  {
    PhoneModelPointer = GetPhoneModelPointer();
    if ( strstr(PhoneModelPointer, "E970") != nullptr )
      dword_20DDDF0 = 24;
  }
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)&dword_20D3C40);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v19 = *(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 8);
  if ( byte_20D5F40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5F40) != 0 )
  {
    sub_67A1F0((int)(uintptr_t)&dword_20D5F60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5F40);
    __cxa_atexit((void (*)(void *))sub_67FF30, &dword_20D5F60, &unk_20D1280);
  }
  v20 = nullptr;
  if ( byte_20D5F64 == 0 )
    v20 = (int *)(&dword_20D5F60);
  v2[224] = (uint32_t)(uintptr_t)(v20);
  if ( *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 290) != 0 && (*(uint8_t *)(v19 + 252) & 2) != 0 )
  {
    sub_677820((int)(uintptr_t)(v20));
    if ( dword_20DDDB0 != 0 )
      goto LABEL_47;
  }
  else if ( dword_20DDDB0 != 0 )
  {
    goto LABEL_47;
  }
  v73 = *(uint32_t **)(*(uint32_t *)(dword_20DDDC0 + 832) + 8);
  if ( v73 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v73 + *(uint32_t *)(*v73 - 12) + 4), 1u);
  v74[0] = *(uint32_t *)(v2[208] + 32);
  if ( v74[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v74[0] + 4), 1u);
  v39 = (glitch::IObject::Self *)sub_4EBBF0(0x164u, 1);
  sub_8721F0(v39, (int)(uintptr_t)&v73, (int)(uintptr_t)v74);
  if ( v39 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)((char *)v39 + *(uint32_t *)(*(uint32_t *)v39 - 16) + 4), 1u);
  v40 = (uint32_t *)dword_20DDDB0;
  dword_20DDDB0 = (int)(uintptr_t)v39;
  if ( v40 != nullptr )
  {
    v41 = (volatile int32_t *)((uint32_t *)((char *)v40 + *(uint32_t *)(*v40 - 16)));
    if ( __sync_fetch_and_add(v41 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v41, 8);
      G4_VCALL<void>(v41, 4);
    }
  }
  v42 = v74[0];
  if ( v74[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v74[0] + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v42, 8);
    G4_VCALL<void>(v42, 4);
  }
  if ( v73 != nullptr )
  {
    v43 = (volatile int32_t *)((uint32_t *)((char *)v73 + *(uint32_t *)(*v73 - 12)));
    if ( __sync_fetch_and_add(v43 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v43, 8);
      G4_VCALL<void>(v43, 4);
    }
  }
  memset(v85, 0, sizeof(v85));
  v86[0] = 0;
  v86[1] = 0;
  v86[2] = 1120403456;
  v44 = (uint32_t *)sub_4EBBF0(0x350u, 1);
  retaddr = 0;
  glitch::scene::CCameraSceneNode::Construct((glitch::IObject::Self *)(v44), 0, (float *)(v85), (uint32_t *)(v86), 0);
  if ( v44 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v44 + *(uint32_t *)(*v44 - 16) + 4), 1u);
  v45 = (uint32_t *)dword_20DDDA0;
  dword_20DDDA0 = (int)(uintptr_t)v44;
  if ( v45 != nullptr )
  {
    v46 = (volatile int32_t *)((uint32_t *)((char *)v45 + *(uint32_t *)(*v45 - 16)));
    if ( __sync_fetch_and_add(v46 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v46, 8);
      G4_VCALL<void>(v46, 4);
    }
    v44 = (uint32_t *)dword_20DDDA0;
  }
  v47 = *(int **)(dword_20DDDB0 + 4);
  v48 = *v47;
  v75 = v44;
  v49 = *(void ( **)(int *, uint32_t **))(v48 + 104);
  if ( v44 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v44 + *(uint32_t *)(*v44 - 16) + 4), 1u);
  v49(v47, &v75);
  if ( v75 != nullptr )
  {
    v50 = (volatile int32_t *)((uint32_t *)((char *)v75 + *(uint32_t *)(*v75 - 16)));
    if ( __sync_fetch_and_add(v50 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v50, 8);
      G4_VCALL<void>(v50, 4);
    }
  }
  v76 = (uint32_t *)dword_20DDDA0;
  if ( dword_20DDDA0 != 0 )
    __sync_add_and_fetch((uint32_t *)((char *)v76 + *(uint32_t *)(*v76 - 16) + 4), 1u);
  glitch::scene::CSceneManager::setActiveCamera((uint32_t *)dword_20DDDB0, &v76);
  if ( v76 != nullptr )
  {
    v51 = (volatile int32_t *)((uint32_t *)((char *)v76 + *(uint32_t *)(*v76 - 16)));
    if ( __sync_fetch_and_add(v51 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v51, 8);
      G4_VCALL<void>(v51, 4);
    }
  }
LABEL_47:
  v21 = sub_4EBBF0(0x38u, 1);
  sub_732D00(v21);
  v2[228] = v21;
  sub_733020(v21);
  v66 = *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 288);
  v22 = GetPhoneGPUNamePointer();
  v87[261] = (uint32_t)(uintptr_t)((char *)&v71 + 1);
  g4_std::string::construct_from_cstr(v77, v22);
  v23 = (g4_cxa_guard_t *)v77[0];
  if ( *(int *)(v77[0] - 4) < 0 )
  {
    v24 = v77[0];
LABEL_116:
    v67 = (g4_cxa_guard_t *)((char *)v23 + *(v23 - 3));
    goto LABEL_51;
  }
  sub_19397C0((const void **)v77);
  v24 = v77[0];
  if ( *(int *)(v77[0] - 4) < 0 )
  {
    v23 = (g4_cxa_guard_t *)v77[0];
    goto LABEL_116;
  }
  sub_19397C0((const void **)v77);
  v23 = (g4_cxa_guard_t *)v77[0];
  v67 = (g4_cxa_guard_t *)(v77[0] + *(uint32_t *)(v77[0] - 12));
  if ( *(int *)(v77[0] - 4) >= 0 )
  {
    sub_19397C0((const void **)v77);
    v23 = (g4_cxa_guard_t *)v77[0];
  }
LABEL_51:
  if ( v23 != v67 )
  {
    v25 = (uint8_t *)v24;
    do
    {
      v26 = *(char *)v23;
      if ( v26 <= 0xFF )
        LOWORD(v26) = *(uint16_t *)(tolower_tab_ + 2 * v26 + 2);
      *v25 = v26;
      v23 = (g4_cxa_guard_t *)((char *)v23 + 1);
      ++v25;
    }
    while ( v23 != v67 );
  }
  if ( g4_std::string::find(v77, "mali", 0, 4u) != -1 )
  {
    getPhoneModel((char *)v87);
    v87[261] = (uint32_t)(uintptr_t)((char *)&v71 + 2);
    g4_std::string::construct_from_cstr(v78, (char *)v87);
    v27 = v78[0];
    if ( *(int *)(v78[0] - 4) < 0 || (sub_19397C0((const void **)v78), v27 = v78[0], *(int *)(v78[0] - 4) < 0) )
    {
      v28 = (g4_cxa_guard_t *)v27;
      v68 = (g4_cxa_guard_t *)(v27 + *(uint32_t *)(v27 - 12));
    }
    else
    {
      sub_19397C0((const void **)v78);
      v28 = (g4_cxa_guard_t *)v78[0];
      v68 = (g4_cxa_guard_t *)(v78[0] + *(uint32_t *)(v78[0] - 12));
      if ( *(int *)(v78[0] - 4) >= 0 )
      {
        sub_19397C0((const void **)v78);
        v28 = (g4_cxa_guard_t *)v78[0];
      }
    }
    if ( v68 != v28 )
    {
      v29 = (uint8_t *)v27;
      do
      {
        v30 = *(char *)v28;
        if ( v30 <= 0xFF )
          LOWORD(v30) = *(uint16_t *)(tolower_tab_ + 2 * v30 + 2);
        *v29 = v30;
        v28 = (g4_cxa_guard_t *)((char *)v28 + 1);
        ++v29;
      }
      while ( v28 != v68 );
    }
    byte_20DDE2A = g4_std::string::find(v78, "me172v", 0, 6u) == -1;
    sub_1938B70(v78);
  }
  if ( v66 != 0 )
  {
    v31 = *(uint32_t *)(*(uint32_t *)v65 + 32);
    v32 = *(g4_cxa_guard_t **)(*(uint32_t *)v31 + 56);
    v87[260] = 0;
    v69 = v32;
    v33 = sub_4EBDC0(0x34u);
    *(uint32_t *)(v33 + 4) = 39;
    *(uint32_t *)(v33 + 8) = 0;
    memcpy((void *)(v33 + 12), "splitted_district_lowres_device_hkt.zip", 39);
    if ( (int *)v33 != (int *)(&dword_20D3E6C) )
    {
      *(uint32_t *)(v33 + 8) = 0;
      *(uint32_t *)v33 = 39;
      *(uint8_t *)(v33 + 51) = 0;
    }
    v80 = v33 + 12;
    ((void ( *)(char **, int, int *))v69)(&v84, v31, &v80);
    v34 = v84;
    v35 = (glf::ArchiveManager::Self *)glf::ArchiveManager::s_instance[0];
    if ( glf::ArchiveManager::s_instance[0] == 0 )
    {
      v63 = v84;
      v35 = (glf::ArchiveManager::Self *)malloc(0x1Cu);
      v34 = v63;
      if ( v35 != nullptr )
      {
        objb = v35;
        glf::ArchiveManager::ArchiveManager(v35);
        v34 = v63;
        v35 = objb;
      }
      glf::ArchiveManager::s_instance[0] = (uintptr_t)(uintptr_t)(v35);
    }
    glf::ArchiveManager::LoadArchive((int)(uintptr_t)v35, v34, 0, 0);
    v36 = (int)(uintptr_t)(v84 - 12);
    if ( v84 - 12 != (char *)&dword_20D3E6C && __sync_fetch_and_add((volatile int32_t *)v84 - 1, 0xFFFFFFFF) <= 0 )
      sub_4EBE40(v36);
    v37 = v80;
    v38 = v80 - 12;
    if ( (int *)(v80 - 12) == (int *)(&dword_20D3E6C) )
      goto LABEL_73;
LABEL_111:
    if ( __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
      sub_4EBE40(v38);
    goto LABEL_73;
  }
  v52 = *(uint32_t *)(*(uint32_t *)v65 + 32);
  v53 = *(g4_cxa_guard_t **)(*(uint32_t *)v52 + 56);
  v87[260] = 0;
  v70 = v53;
  v54 = sub_4EBDC0(0x2Du);
  *(uint32_t *)(v54 + 4) = 32;
  *(uint32_t *)(v54 + 8) = 0;
  memcpy((void *)(v54 + 12), "splitted_district_device_hkt.zip", 32);
  if ( (int *)v54 != (int *)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v54 + 8) = 0;
    *(uint32_t *)v54 = 32;
    *(uint8_t *)(v54 + 44) = 0;
  }
  v79[0] = v54 + 12;
  ((void ( *)(char **, int, int *))v70)(&v83, v52, v79);
  v55 = v83;
  v56 = (glf::ArchiveManager::Self *)glf::ArchiveManager::s_instance[0];
  if ( glf::ArchiveManager::s_instance[0] == 0 )
  {
    v64 = v83;
    v56 = (glf::ArchiveManager::Self *)malloc(0x1Cu);
    v55 = v64;
    if ( v56 != nullptr )
    {
      objc = v56;
      glf::ArchiveManager::ArchiveManager(v56);
      v55 = v64;
      v56 = objc;
    }
    glf::ArchiveManager::s_instance[0] = (uintptr_t)(uintptr_t)(v56);
  }
  glf::ArchiveManager::LoadArchive((int)(uintptr_t)v56, v55, 0, 0);
  v57 = v83 - 12;
  if ( v83 - 12 != (char *)&dword_20D3E6C && __sync_fetch_and_add((volatile int32_t *)v83 - 1, 0xFFFFFFFF) <= 0 )
    sub_4EBE40((int)(uintptr_t)v57);
  v37 = v79[0];
  v38 = v79[0] - 12;
  if ( (int *)(v79[0] - 12) != (int *)(&dword_20D3E6C) )
    goto LABEL_111;
LABEL_73:
  sub_1938B70(v77);
  sub_1938B70(v72);
  sub_1938B70(&v81);
}

// Group C [sub_1942300] (VA 0x1942300)
uint32_t * sub_1942300(uint32_t *a1,
 int a2,
 uint32_t *a3,
 int a4,
 int a5,
 wchar_t a6,
 char a7,
 int64_t a8)
{
  volatile int32_t **v8;
  int v9;
  size_t v10;
  void *v11;
  int *v12;
  int v13;
  void *v14;
  uint8_t *v15;
  int v16;
  int v17;
  void *v18;
  bool v19; // si
  int v20;
  int v21;
  uint32_t *v23;
  void *v24;
  int v25;
  wchar_t *v26;
  int v27; // [esp-1Ch] [ebp-84h]
  int v28;
  int v29;
  char v30[8];
  size_t v31;
  char *format; // [esp+Ch] [ebp-5Ch]
  int64_t v33;
  char v34; // [esp+1Bh] [ebp-4Dh]
  int v35; // [esp+1Ch] [ebp-4Ch]
  uint32_t *v36;
  wchar_t *v37;
  volatile int32_t *v38;
  wchar_t *v39; // [esp+2Ch] [ebp-3Ch]
  size_t n;
  int v41; // [esp+3Ch] [ebp-2Ch] BYREF
  uint8_t v42[40];

  v36 = a3;
  v35 = a4;
  v34 = a7;
  v39 = (wchar_t *)(a5 + 108);
  v33 = a8;
  v37 = (wchar_t *)sub_1902550(&dword_213B834);
  v8 = (volatile int32_t **)(*(uint32_t *)(*(uint32_t *)(a5 + 108) + 12) + 4 * (uint32_t)(uintptr_t)v37);
  v38 = *v8;
  if ( v38 == nullptr )
  {
    v25 = (int)(uintptr_t)(operator new(0x128u));
    v38 = (volatile int32_t *)v25;
    *(uint32_t *)(v25 + 4) = 0;
    v26 = v39;
    *(uint32_t *)(v25 + 8) = 0;
    *(uint32_t *)v25 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v25 + 12) = 0;
    *(uint8_t *)(v25 + 16) = 0;
    *(uint32_t *)(v25 + 20) = 0;
    *(uint32_t *)(v25 + 24) = 0;
    *(uint32_t *)(v25 + 28) = 0;
    *(uint32_t *)(v25 + 32) = 0;
    *(uint32_t *)(v25 + 36) = 0;
    *(uint32_t *)(v25 + 40) = 0;
    *(uint8_t *)(v25 + 292) = 0;
    sub_193EEC0(v25, (int)(uintptr_t)v26);
    sub_19023D0(*(uint32_t *)(a5 + 108), v38, (int)(uintptr_t)v37);
    v38 = *v8;
  }
  v9 = *(uint32_t *)(a5 + 4);
  if ( v9 < 0 )
    v9 = 6;
  format = (char *)(uintptr_t)(v42);
  v31 = v9;
  sub_1953DD0(a5, v42, v34);
  v10 = v31 + 312;
  if ( (*(uint8_t *)(a5 + 12) & 4) == 0 )
    v10 = v31 + 30;
  v11 = alloca(v10 + 15);
  v41 = sub_1901FF0();
  n = sub_191A680((int)(uintptr_t)&v41, v30, 0, format, v31, v33);
  v12 = (int *)sub_193EB50((int)(uintptr_t)v39);
  v13 = *v12;
  v14 = alloca(4 * n + 15);
  *(uint32_t *)v30 = (uint32_t)(uintptr_t)(v30);
  v37 = (wchar_t *)v30;
  (*(void ( **)(int *, char *, char *, char *))(v13 + 44))(v12, v30, &v30[n], v30);
  v31 = n;
  v15 = (uint8_t *)(memchr(v30, 46, n));
  v39 = nullptr;
  v16 = v31;
  if ( v15 != nullptr )
  {
    v39 = (wchar_t *)(*(uint32_t *)v30 + 4 * (v15 - (uint8_t *)(v30)));
    *v39 = *((uint32_t *)v38 + 9);
  }
  if ( *((uint8_t *)v38 + 16) != 0 )
  {
    if ( v39 != nullptr || v16 <= 2 || v30[1] <= 57 && (v34 = v30[2], v30[2] <= 57) && v30[1] > 47 && v30[2] > 47 )
    {
      v24 = alloca(8 * v16 + 15);
      if ( v30[0] == 43 || (LODWORD(v33) = 0, v37 = nullptr, v30[0] == 45) )
      {
        --n;
        LODWORD(v33) = 4;
        v37 = (wchar_t *)(&dword_0 + 1);
        *(uint32_t *)v30 = **(uint32_t **)v30;
      }
      v29 = *((uint32_t *)v38 + 10);
      v28 = *((uint32_t *)v38 + 3);
      v27 = *((uint32_t *)v38 + 2);
      format = v30;
      sub_1940CF0(a2, v27, v28, v29);
      v16 = (int)(uintptr_t)v37 + n;
      v37 = (wchar_t *)format;
      n = v16;
    }
  }
  v17 = *(uint32_t *)(a5 + 8);
  if ( v16 < v17 )
  {
    v18 = alloca(4 * v17 + 15);
    sub_19422A0(a2, a6, *(uint32_t *)(a5 + 8), a5, (wchar_t *)(uintptr_t)(v30), v37, (int *)&n);
    v16 = n;
    v37 = (wchar_t *)v30;
  }
  *(uint32_t *)(a5 + 8) = 0;
  v19 = v35;
  if ( !v35 )
  {
    v20 = *v36;
    v31 = v16;
    v21 = (*(int ( **)(uint32_t *, wchar_t *, int))(v20 + 48))(v36, v37, v16);
    v19 = v31 != v21;
  }
  v23 = v36;
  a1[1] = v35;
  *a1 = (uint32_t)(uintptr_t)(v23);
  *((uint8_t *)a1 + 4) = v19;
  return a1;
}

// Group C [sub_1942740] (VA 0x1942740)
uint32_t * sub_1942740(uint32_t *a1,
 int a2,
 uint32_t *a3,
 int a4,
 int a5,
 wchar_t a6,
 char a7,
 int64_t a8)
{
  volatile int32_t **v8;
  int v9;
  size_t v10;
  void *v11;
  int *v12;
  int v13;
  void *v14;
  uint8_t *v15;
  int v16;
  int v17;
  void *v18;
  bool v19; // si
  int v20;
  int v21;
  uint32_t *v23;
  void *v24;
  int v25;
  wchar_t *v26;
  int v27; // [esp-1Ch] [ebp-84h]
  int v28;
  int v29;
  char v30[8];
  size_t v31;
  char *format; // [esp+Ch] [ebp-5Ch]
  int64_t v33;
  char v34; // [esp+1Bh] [ebp-4Dh]
  int v35; // [esp+1Ch] [ebp-4Ch]
  uint32_t *v36;
  wchar_t *v37;
  volatile int32_t *v38;
  wchar_t *v39; // [esp+2Ch] [ebp-3Ch]
  size_t n;
  int v41; // [esp+3Ch] [ebp-2Ch] BYREF
  uint8_t v42[40];

  v36 = a3;
  v35 = a4;
  v34 = a7;
  v39 = (wchar_t *)(a5 + 108);
  v33 = a8;
  v37 = (wchar_t *)sub_1902550(&dword_213B834);
  v8 = (volatile int32_t **)(*(uint32_t *)(*(uint32_t *)(a5 + 108) + 12) + 4 * (uint32_t)(uintptr_t)v37);
  v38 = *v8;
  if ( v38 == nullptr )
  {
    v25 = (int)(uintptr_t)(operator new(0x128u));
    v38 = (volatile int32_t *)v25;
    *(uint32_t *)(v25 + 4) = 0;
    v26 = v39;
    *(uint32_t *)(v25 + 8) = 0;
    *(uint32_t *)v25 = (uint32_t)(uintptr_t)(&off_20AB970);
    *(uint32_t *)(v25 + 12) = 0;
    *(uint8_t *)(v25 + 16) = 0;
    *(uint32_t *)(v25 + 20) = 0;
    *(uint32_t *)(v25 + 24) = 0;
    *(uint32_t *)(v25 + 28) = 0;
    *(uint32_t *)(v25 + 32) = 0;
    *(uint32_t *)(v25 + 36) = 0;
    *(uint32_t *)(v25 + 40) = 0;
    *(uint8_t *)(v25 + 292) = 0;
    sub_193EEC0(v25, (int)(uintptr_t)v26);
    sub_19023D0(*(uint32_t *)(a5 + 108), v38, (int)(uintptr_t)v37);
    v38 = *v8;
  }
  v9 = *(uint32_t *)(a5 + 4);
  if ( v9 < 0 )
    v9 = 6;
  format = (char *)(uintptr_t)(v42);
  v31 = v9;
  sub_1953DD0(a5, v42, v34);
  v10 = v31 + 312;
  if ( (*(uint8_t *)(a5 + 12) & 4) == 0 )
    v10 = v31 + 30;
  v11 = alloca(v10 + 15);
  v41 = sub_1901FF0();
  n = sub_191A680((int)(uintptr_t)&v41, v30, 0, format, v31, v33);
  v12 = (int *)sub_193EB50((int)(uintptr_t)v39);
  v13 = *v12;
  v14 = alloca(4 * n + 15);
  *(uint32_t *)v30 = (uint32_t)(uintptr_t)(v30);
  v37 = (wchar_t *)v30;
  (*(void ( **)(int *, char *, char *, char *))(v13 + 44))(v12, v30, &v30[n], v30);
  v31 = n;
  v15 = (uint8_t *)(memchr(v30, 46, n));
  v39 = nullptr;
  v16 = v31;
  if ( v15 != nullptr )
  {
    v39 = (wchar_t *)(*(uint32_t *)v30 + 4 * (v15 - (uint8_t *)(v30)));
    *v39 = *((uint32_t *)v38 + 9);
  }
  if ( *((uint8_t *)v38 + 16) != 0 )
  {
    if ( v39 != nullptr || v16 <= 2 || v30[1] <= 57 && (v34 = v30[2], v30[2] <= 57) && v30[1] > 47 && v30[2] > 47 )
    {
      v24 = alloca(8 * v16 + 15);
      if ( v30[0] == 43 || (LODWORD(v33) = 0, v37 = nullptr, v30[0] == 45) )
      {
        --n;
        LODWORD(v33) = 4;
        v37 = (wchar_t *)(&dword_0 + 1);
        *(uint32_t *)v30 = **(uint32_t **)v30;
      }
      v29 = *((uint32_t *)v38 + 10);
      v28 = *((uint32_t *)v38 + 3);
      v27 = *((uint32_t *)v38 + 2);
      format = v30;
      sub_1940CF0(a2, v27, v28, v29);
      v16 = (int)(uintptr_t)v37 + n;
      v37 = (wchar_t *)format;
      n = v16;
    }
  }
  v17 = *(uint32_t *)(a5 + 8);
  if ( v16 < v17 )
  {
    v18 = alloca(4 * v17 + 15);
    sub_19422A0(a2, a6, *(uint32_t *)(a5 + 8), a5, (wchar_t *)(uintptr_t)(v30), v37, (int *)&n);
    v16 = n;
    v37 = (wchar_t *)v30;
  }
  *(uint32_t *)(a5 + 8) = 0;
  v19 = v35;
  if ( !v35 )
  {
    v20 = *v36;
    v31 = v16;
    v21 = (*(int ( **)(uint32_t *, wchar_t *, int))(v20 + 48))(v36, v37, v16);
    v19 = v31 != v21;
  }
  v23 = v36;
  a1[1] = v35;
  *a1 = (uint32_t)(uintptr_t)(v23);
  *((uint8_t *)a1 + 4) = v19;
  return a1;
}

// Group C [sub_6C13B0] (VA 0x6c13b0)
int sub_6C13B0(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *address;
  int v5;
  int v6;
  hkpUnaryAction::Self *v7; // [esp-Ch] [ebp-28h]
  int v8;
  char *v9;
  uint32_t *v10;
  uint32_t v11[4];

  v2 = 0;
  if ( a1[32] == 0 )
  {
    v8 = *(uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 28);
    if ( (uint8_t)sub_6A22C0(a1, a2) != 0 )
    {
      v10 = (uint32_t *)G4_VCALL<int>(v8, 160, *(uint32_t *)(a2 + 12), 0, 0, 1);
      if ( v10 != nullptr )
      {
        address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v7 = (hkpUnaryAction::Self *)(*(int ( **)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                                 *(uint32_t *)(*address + 44),
                                 36);
        v9 = (char *)a1 + *(uint32_t *)(*a1 - 12);
        hkpUnaryAction::Construct(v7, (hkpEntity::Self *)v10, 0);
        *(uint32_t *)v7 = off_2057828;
        *((uint32_t *)v7 + 7) = off_205786C;
        *((uint32_t *)v7 + 8) = (uint32_t)(uintptr_t)(v9);
        hkpEntity::addEntityListener((int)(uintptr_t)v10, (int)(uintptr_t)v7 + 28);
        a1[32] = (uint32_t)(uintptr_t)(v7);
        hkStringPtr::opAssign((hkStringPtr::Self *)(v10 + 30), *(hkString::Self **)(a2 + 8));
        if ( (uint8_t)sub_6833D0((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 12)), a2) != 0 && v10[2] != 0 )
        {
          v2 = 1;
          G4_VCALL<void>(a1[32], 52);
          v11[3] = 0;
          v5 = *(uint32_t *)(a2 + 112);
          v6 = *(uint32_t *)(a2 + 108);
          v11[2] = *(uint32_t *)(a2 + 116);
          v11[0] = v6;
          v11[1] = v5;
          hkpRigidBody::setCenterOfMassLocal((hkpRigidBody::Self *)v10, (const hkVector4f::Self *)v11);
          v10[3] = (uint32_t)(uintptr_t)((char *)a1 + *(uint32_t *)(*a1 - 12));
          sub_6B4810((int)(uintptr_t)v10);
        }
      }
    }
  }
  return v2;
}

// Group C [sub_939820] (VA 0x939820) | bad sp value at call has been detected, the output may be wrong!
void sub_939820(g4_cxa_guard_t *a1, char a2)
{
  g4_cxa_guard_t *v2;
  g4_cxa_guard_t v3;
  uint32_t *v4;
  unsigned int v5;
  unsigned int v6;
  uint32_t *v7;
  g4_cxa_guard_t *v8;
  unsigned int v9;
  unsigned int v10;
  int *v11;
  g4_cxa_guard_t v12;
  g4_cxa_guard_t *v13;
  uint32_t *v14;
  void *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19; // [esp-1Ch] [ebp-94h]
  g4_cxa_guard_t v20;
  uint32_t *v21;
  g4_cxa_guard_t *v22;
  uint32_t **v23; // [esp-Ch] [ebp-84h]
  int v24;
  int v25;
  uint32_t *v26;
  void **obj;
  int v28;
  int v29; // [esp+Ch] [ebp-6Ch]
  g4_cxa_guard_t v30; // [esp+Ch] [ebp-6Ch]
  g4_cxa_guard_t *v31;
  char v32;
  uint32_t *v33;
  int v34;
  g4_cxa_guard_t *v35;
  char v36;
  g4_cxa_guard_t *v37;
  uint32_t *v38; // [esp+1Ch] [ebp-5Ch]
  uint32_t *v39; // [esp+1Ch] [ebp-5Ch]
  int *v40; // [esp+1Ch] [ebp-5Ch]
  g4_cxa_guard_t v41; // [esp+1Ch] [ebp-5Ch]
  int v42;
  int v43;
  uint32_t *v44;
  uint32_t *v45; // [esp+2Ch] [ebp-4Ch] BYREF
  void *v46;
  uint32_t *v47;
  int v48;
  uint32_t v49[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  int *v50[3];
  uint32_t v51[5];
  int *v52;
  g4_cxa_guard_t *v53; // [esp+6Ch] [ebp-Ch]
  g4_cxa_guard_t v54;
  uint32_t *v55;
  g4_cxa_guard_t *savedregs;
  uint32_t **retaddr; // [esp+7Ch] [ebp+4h]

  v52 = (int *)&a1;
  v2 = a1;
  LOBYTE(v35) = a2;
  sub_89CFA0((int)(uintptr_t)a1, a2);
  if ( (uint8_t)(uintptr_t)v35 != 0 || G4_VCALL<uint8_t>(v2, 844) == 0 || v2[693] == -1 )
  {
    v3 = v2[695];
    v4 = (uint32_t *)v2[694];
    v39 = (uint32_t *)v3;
    if ( (uint32_t *)v3 != v4 )
    {
      v5 = 0;
      v6 = 0;
      if ( (unsigned int)(v3 - (uint32_t)(uintptr_t)v4) >> 2 == 0 )
        goto LABEL_6;
      do
      {
        ++v6;
        sub_7B02E0((uint32_t *)v4[v5]);
        v4 = (uint32_t *)v2[694];
        v39 = (uint32_t *)v2[695];
        v5 = v6;
      }
      while ( v6 < v39 - v4 );
      if ( v39 != v4 )
      {
LABEL_6:
        v31 = v2;
        v7 = v4;
        v33 = v4;
        do
        {
          v17 = v7++;
          sub_5F7820(v17, 0);
        }
        while ( v7 != v39 );
        v4 = v33;
      }
      v2[695] = (g4_cxa_guard_t)v4;
    }
    v34 = G4_VCALL<int>(v2, 848, v19, v20, v21, v22, v23, v24, v25, v26, obj, v28, v29, v31, v33, v35, v39, v42, v43, v44, v45, v46, v47, v48, v49[0], v49[1], v49[2], v50[0], v50[1], v50[2], v51[0], v51[1], v51[2], v51[3], v51[4]);
    v30 = v2[v34 + 698];
    v32 = 0;
    if ( v36 != 0 )
      goto LABEL_11;
  }
  else
  {
    if ( v2[695] == v2[694] )
    {
      sub_8E1420(&v44, nullptr);
      v26 = v49;
      (*(void ( **)(uint32_t *))(*v2 + 52))(v49);
      v41 = v2[693];
      if ( byte_20D4B60 == 0 )
      {
        v35 = (g4_cxa_guard_t *)&byte_20D4B60;
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
        {
          sub_7B3590(v49, &dword_20D4B80);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
          __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
        }
      }
      v14 = nullptr;
      v21 = v49;
      if ( byte_20D4B84 == 0 )
        v14 = &dword_20D4B80;
      v20 = v41;
      v19 = v14;
      obj = &v46;
      v23 = &v44;
      v22 = v2;
      sub_7B29B0(&v46);
      sub_932BC0((int *)(v2 + 694), (int **)&v46);
      v38 = v47;
      v15 = v46;
      if ( v47 != v46 )
      {
        v35 = v2;
        v16 = (uint32_t *)(v46);
        do
        {
          v18 = v16++;
          sub_5F7820(v18, 0);
        }
        while ( v38 != v16 );
        v2 = v35;
        v15 = v46;
      }
      if ( v15 != nullptr )
        operator delete(v15);
      sub_5EDFE0(&v44);
    }
    v34 = G4_VCALL<int>(v2, 848, v19, v20, v21, v22, v23, v24, v25, v26, obj, v28, v29, v31, v33, v35, v38, v42, v43, v44, v45, v46, v47, v48, v49[0], v49[1], v49[2], v50[0], v50[1], v50[2], v51[0], v51[1], v51[2], v51[3], v51[4]);
    v30 = v2[v34 + 698];
  }
  if ( v2[274] <= 0 || *(uint32_t *)v2[276] == 0 || v30 == -1 )
  {
    v32 = 0;
  }
  else
  {
    if ( v34 == v2[703] )
    {
LABEL_20:
      if ( v2[701] == v2[700] )
      {
        sub_8E1420(&v45, nullptr);
        v12 = *v2;
        v53 = v2;
        (*(void ( **)(uint32_t *))(v12 + 52))(v51);
        if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
        {
          sub_7B3590(v51, &dword_20D4B80);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
          __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
        }
        v13 = nullptr;
        v55 = v51;
        if ( byte_20D4B84 == 0 )
          v13 = (g4_cxa_guard_t *)(&dword_20D4B80);
        v54 = v30;
        v53 = v13;
        retaddr = &v45;
        savedregs = v2;
        sub_7B29B0(v50);
        sub_932BC0((int *)(v2 + 700), v50);
        g4_std::vector_Gangstar_Handle_VFX_fals_20ea5b::Destroy((std::vector<Gangstar::Handle<VFX, false>> *)v50);
        sub_5EDFE0(&v45);
        v2[703] = v34;
      }
      return;
    }
    v32 = 1;
  }
LABEL_11:
  v40 = (int *)v2[701];
  v8 = (g4_cxa_guard_t *)v2[700];
  if ( v40 != (int *)(v8) )
  {
    v9 = 0;
    v10 = 0;
    if ( (unsigned int)((char *)v40 - (char *)v8) >> 2 == 0 )
      goto LABEL_15;
    do
    {
      ++v10;
      sub_7B02E0((uint32_t *)v8[v9]);
      v8 = (g4_cxa_guard_t *)v2[700];
      v40 = (int *)v2[701];
      v9 = v10;
    }
    while ( v10 < v40 - (int *)(v8) );
    if ( v40 != (int *)(v8) )
    {
LABEL_15:
      v11 = (int *)(v8);
      v37 = v8;
      do
      {
        v52 = v11++;
        sub_5F7820(v52, 0);
      }
      while ( v40 != v11 );
      v8 = v37;
    }
    v2[701] = (g4_cxa_guard_t)v8;
  }
  if ( v32 != 0 )
    goto LABEL_20;
}

// Group C [sub_63B030] (VA 0x63b030)
volatile int32_t * sub_63B030(__m128d a1, int a2)
{
  int v2;
  int v3;
  int v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  glitch::video::CVertexStreams::Self *v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  glitch::video::CVertexStreams::Self *v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  glitch::video::CVertexStreams::Self *v14;
  volatile int32_t *v15;
  volatile int32_t *v16;
  int v17;
  uint16_t *v18;
  int16_t v19; // dx
  unsigned int v20;
  int16_t v21; // si
  int *v22;
  int v23;
  void ( *v24)(glitch::video::IBuffer::Self **, int *, uint32_t *);
  glitch::video::IBuffer::Self *v25;
  int v26;
  glitch::video::CMaterial::Self *v27;
  glitch::video::CMaterial::Self *v28;
  bool v29; // zf
  glitch::video::CMaterial::Self *v30;
  glitch::video::CMaterialRenderer::Self *v31;
  char TechniqueID;
  const char **v33;
  int v34;
  glitch::video::CVertexStreams::Self *v35;
  volatile int32_t *v36;
  int v37;
  uint16_t ParameterID; // ax
  volatile int32_t *v39;
  glitch::video::CMaterialVertexAttributeMap::Self **v40;
  uint32_t *v41;
  void *v42;
  int *v43;
  int v44;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self ***v45;
  volatile int32_t *result;
  glitch::video::CVertexStreams::Self *v47;
  volatile int32_t *v48;
  volatile int32_t *v49;
  volatile int32_t *v50;
  volatile int32_t *v51;
  volatile int32_t *v52;
  volatile int32_t *v53;
  void *v54;
  uint32_t *v55;
  int v56;
  char v57;
  uint16_t *v58;
  size_t v59;
  int v60;
  void ( *v61)(int *, uint32_t **);
  void ( *v62)(volatile int32_t **); // [esp+Ch] [ebp-DCh]
  int v63; // [esp+Ch] [ebp-DCh]
  volatile int32_t *v64; // [esp+Ch] [ebp-DCh]
  volatile int32_t *v65;
  glitch::video::CVertexStreams::Self *v66;
  glitch::video::CMaterial::Self *v67;
  int v68[4];
  glitch::video::IBuffer::Self *v69;
  glitch::video::CMaterialRenderer::Self *v70;
  uint32_t *v71;
  int v72; // [esp+5Ch] [ebp-8Ch] BYREF
  glitch::video::CMaterialVertexAttributeMap::Self *v73;
  uint32_t *v74;
  volatile int32_t *v75;
  int v76[3]; // [esp+6Ch] [ebp-7Ch] BYREF
  int v77[3];
  int v78[8];
  char v79; // [esp+A4h] [ebp-44h]
  char v80; // [esp+A5h] [ebp-43h]
  uint32_t v81[4]; // [esp+A8h] [ebp-40h] BYREF
  char v82; // [esp+B8h] [ebp-30h]
  char v83; // [esp+B9h] [ebp-2Fh]
  volatile int32_t **v84[11]; // [esp+BCh] [ebp-2Ch] BYREF

  v84[7] = (volatile int32_t **)&a2;
  v2 = a2;
  v62 = *(void ( **)(volatile int32_t **))(*(uint32_t *)sub_B97E20() + 88);
  v3 = sub_4EBC30(36 * *(uint32_t *)(v2 + 28), 1);
  v4 = *(uint32_t *)(v2 + 28);
  v78[7] = v3;
  v78[4] = 0;
  v79 = 1;
  v80 = 1;
  v78[6] = 36 * v4;
  v78[5] = byte_20DDE2A == 0 ? 1 : 4;
  v62(&v65);
  v5 = v65;
  if ( v65 != nullptr )
    __sync_add_and_fetch(v65 + 1, 1u);
  v6 = *(volatile int32_t **)(v2 + 92);
  *(uint32_t *)(v2 + 92) = (uint32_t)(uintptr_t)(v5);
  if ( v6 != nullptr )
    sub_5459C0(v6);
  if ( v65 != nullptr )
    sub_5459C0(v65);
  glitch::video::CVertexStreams::allocate(&v66, 0x20003u);
  v7 = *(volatile int32_t **)(v2 + 92);
  v8 = v66;
  if ( v7 != nullptr )
  {
    __sync_add_and_fetch(v7 + 1, 1u);
    v8 = v66;
    __sync_add_and_fetch(v7 + 1, 1u);
  }
  v9 = *((volatile int32_t **)v8 + 5);
  *((uint32_t *)v8 + 5) = (uint32_t)(uintptr_t)(v7);
  if ( v9 != nullptr )
  {
    v48 = v7;
    sub_5459C0(v9);
    v7 = v48;
  }
  *((uint32_t *)v8 + 6) = 0;
  *((uint16_t *)v8 + 15) = 6;
  *((uint16_t *)v8 + 16) = 3;
  *((uint16_t *)v8 + 17) = 36;
  v49 = v7;
  glitch::video::CVertexStreams::updateHomogeneityInternal(v8, false);
  if ( v49 != nullptr )
    sub_5459C0(v49);
  v10 = *(volatile int32_t **)(v2 + 92);
  v11 = v66;
  if ( v10 != nullptr )
  {
    __sync_add_and_fetch(v10 + 1, 1u);
    v11 = v66;
    __sync_add_and_fetch(v10 + 1, 1u);
  }
  v12 = *((volatile int32_t **)v11 + 9);
  *((uint32_t *)v11 + 9) = (uint32_t)(uintptr_t)(v10);
  if ( v12 != nullptr )
  {
    v50 = v10;
    sub_5459C0(v12);
    v10 = v50;
  }
  *((uint32_t *)v11 + 10) = 28;
  *((uint16_t *)v11 + 23) = 6;
  *((uint16_t *)v11 + 24) = 2;
  *((uint16_t *)v11 + 25) = 36;
  v51 = v10;
  glitch::video::CVertexStreams::updateHomogeneityInternal(v11, false);
  if ( v51 != nullptr )
    sub_5459C0(v51);
  v13 = *(volatile int32_t **)(v2 + 92);
  v14 = v66;
  if ( v13 != nullptr )
  {
    __sync_add_and_fetch(v13 + 1, 1u);
    v14 = v66;
    __sync_add_and_fetch(v13 + 1, 1u);
  }
  v15 = *((volatile int32_t **)v14 + 13);
  *((uint32_t *)v14 + 13) = (uint32_t)(uintptr_t)(v13);
  if ( v15 != nullptr )
  {
    v52 = v13;
    sub_5459C0(v15);
    v13 = v52;
  }
  *((uint32_t *)v14 + 14) = 24;
  *((uint16_t *)v14 + 31) = 1;
  *((uint16_t *)v14 + 32) = 4;
  *((uint16_t *)v14 + 33) = 36;
  v53 = v13;
  glitch::video::CVertexStreams::updateHomogeneityInternal(v14, false);
  if ( v53 != nullptr )
    sub_5459C0(v53);
  *((uint32_t *)v66 + 2) = *(uint32_t *)(v2 + 28);
  v16 = *(volatile int32_t **)(v2 + 92);
  v17 = 0;
  if ( v16 != nullptr )
  {
    __sync_add_and_fetch(v16 + 1, 1u);
    v17 = *(uint32_t *)(v2 + 92);
  }
  v54 = (void *)glitch::video::IBuffer::mapInternal((glitch::video::IBuffer::Self *)(uintptr_t)(v17), 1, 0, *(uint32_t *)(v17 + 20), 0);
  memset(v54, 0, 36 * *(uint32_t *)(v2 + 28));
  if ( v54 != nullptr )
    glitch::video::IBuffer::unmap((glitch::video::IBuffer::Self *)v16);
  if ( v16 != nullptr )
    sub_5459C0(v16);
  glitch::video::IBuffer::bind(*(glitch::video::IBuffer::Self **)(v2 + 92), 6u, 0);
  v59 = 2 * *(uint32_t *)(v2 + 32);
  v18 = (uint16_t *)sub_4EBC30(v59, 1);
  v58 = v18;
  if ( *(uint32_t *)(v2 + 16) > 1u )
  {
    v19 = 1;
    v20 = 1;
    v63 = v2;
    while ( 1 )
    {
      v18[1] = v19;
      v18[5] = v19;
      *v18 = v19 - 1;
      v18[3] = v19 + 2;
      v21 = 2 * v20++;
      v18[2] = v21;
      v18[4] = v21;
      v18 += 6;
      if ( *(uint32_t *)(v63 + 16) <= v20 )
        break;
      v19 += 2;
    }
    v2 = v63;
  }
  v22 = (int *)sub_B97E20();
  v23 = *v22;
  v81[2] = v59;
  v81[3] = (uint32_t)(uintptr_t)(v58);
  v81[0] = 1;
  v81[1] = 0;
  v24 = *(void ( **)(glitch::video::IBuffer::Self **, int *, uint32_t *))(v23 + 88);
  v82 = 1;
  v83 = 1;
  v24(&v69, v22, v81);
  glitch::video::IBuffer::bind(v69, 6u, 0);
  v25 = nullptr;
  v64 = (volatile int32_t *)v69;
  if ( v69 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v69 + 1, 1u);
    v25 = v69;
  }
  v60 = *(uint32_t *)(v2 + 28);
  if ( v25 != nullptr )
    sub_5459C0((volatile int32_t *)v25);
  glitch::collada::CColladaDatabase::Construct(
    (glitch::collada::CColladaDatabase::Self *)v84,
    (glitch::collada::CColladaDatabase::Self *)"./ShadowEffects.bdae",
    nullptr);
  v71 = nullptr;
  v26 = sub_B97E20();
  glitch::collada::CColladaDatabase::constructEffect(
    (int)(uintptr_t)&v70,
    (glitch::collada::CColladaDatabase::Self *)v84,
    v26,
    "ShadowEffects-fx");
  if ( v71 != nullptr )
    sub_5459C0((uint32_t *)((char *)v71 + *(uint32_t *)(*v71 - 16)));
  glitch::video::CMaterial::allocate(&v67, (volatile int32_t **)&v70, nullptr, 0);
  v27 = v67;
  if ( v67 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v67, 1u);
  v28 = *(glitch::video::CMaterial::Self **)(v2 + 88);
  *(uint32_t *)(v2 + 88) = (uint32_t)(uintptr_t)(v27);
  if ( v28 != nullptr )
  {
    v29 = *(uint32_t *)v28 == 2;
    _mm_mfence();
    if ( v29 )
      glitch::video::CMaterial::removeFromRootSceneNode(v28);
    if ( __sync_fetch_and_add((volatile int32_t *)v28, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v28);
      sub_4EBE40((int)(uintptr_t)v28);
    }
  }
  v30 = v67;
  if ( v67 != nullptr )
  {
    v29 = *(uint32_t *)v67 == 2;
    _mm_mfence();
    if ( v29 )
      glitch::video::CMaterial::removeFromRootSceneNode(v30);
    if ( __sync_fetch_and_add((volatile int32_t *)v30, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v30);
      sub_4EBE40((int)(uintptr_t)v30);
    }
  }
  v31 = v70;
  v75 = glitch::core::detail::SSharedStringHeapEntry::SData::get(
          a1,
          (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"VertexColorAlphaDecal",
          nullptr);
  TechniqueID = glitch::video::CMaterialRenderer::getTechniqueID(v31, (const glitch::core::SSharedString::Self *)&v75);
  v33 = (const char **)v75;
  if ( v75 != nullptr && __sync_fetch_and_add(v75, 0xFFFFFFFF) == 1 )
  {
    v57 = TechniqueID;
    glitch::core::detail::SSharedStringHeapEntry::SData::release(v33);
    TechniqueID = v57;
  }
  *(uint8_t *)(*(uint32_t *)(v2 + 88) + 8) = TechniqueID;
  v34 = sub_4EBBF0(0x2Cu, 1);
  *(uint32_t *)(v34 + 4) = 0;
  *(uint32_t *)v34 = off_2081E88;
  v35 = v66;
  v29 = v66 == nullptr;
  *(uint32_t *)(v34 + 8) = (uint32_t)(uintptr_t)(v66);
  if ( !v29 )
    __sync_add_and_fetch((volatile int32_t *)v35, 1u);
  *(uint32_t *)(v34 + 12) = (uint32_t)(uintptr_t)(v64);
  if ( v64 != nullptr )
    __sync_add_and_fetch(v64 + 1, 1u);
  *(uint32_t *)(v34 + 16) = 0;
  *(uint32_t *)(v34 + 20) = 0;
  *(uint32_t *)(v34 + 24) = 0;
  *(uint32_t *)(v34 + 28) = v60;
  *(uint16_t *)(v34 + 32) = 1;
  *(uint16_t *)(v34 + 34) = 6;
  *(uint32_t *)(v34 + 36) = 0;
  *(uint8_t *)(v34 + 40) = 1;
  *(uint8_t *)(v34 + 41) = 1;
  __sync_add_and_fetch((volatile int32_t *)(v34 + 4), 1u);
  v36 = *(volatile int32_t **)(v2 + 96);
  *(uint32_t *)(v2 + 96) = v34;
  if ( v36 != nullptr )
    sub_5459C0(v36);
  v37 = sub_B97E20();
  glitch::video::CTextureManager::getTexture(
    (glitch::video::CTextureManager::Self *)&v72,
    *(char **)(v37 + 456),
    "./trail.tga",
    nullptr);
  ParameterID = glitch::video::CMaterialRenderer::getParameterID(
                  *(glitch::video::CMaterialRenderer::Self **)(*(uint32_t *)(v2 + 88) + 4),
                  (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"Diffuse",
                  0);
  if ( ParameterID != 0xFFFF )
    glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
      *(uint32_t **)(v2 + 88),
      ParameterID,
      0,
      &v72);
  v39 = (volatile int32_t *)sub_4EBBF0(0x2Cu, 1);
  glitch::scene::CMesh::Construct((glitch::scene::CMesh::Self *)v39);
  if ( v39 != nullptr )
    __sync_add_and_fetch(v39 + 1, 1u);
  v73 = nullptr;
  glitch::scene::CMesh::addMeshBuffer(
    v39,
    (int *)(v2 + 96),
    (glitch::video::CMaterial::Self **)(v2 + 88),
    (glitch::video::CMaterialVertexAttributeMap::Self ***)&v73);
  v40 = (glitch::video::CMaterialVertexAttributeMap::Self **)v73;
  if ( v73 != nullptr && __sync_fetch_and_add((volatile int32_t *)v73, 0xFFFFFFFF) == 1 )
  {
    v56 = (int)(uintptr_t)v40;
    glitch::video::CMaterialVertexAttributeMap::Destroy(v40);
    sub_4EBE40(v56);
  }
  v68[0] = (int)(uintptr_t)v39;
  if ( v39 != nullptr )
    __sync_add_and_fetch(v39 + 1, 1u);
  memset(v76, 0, sizeof(v76));
  memset(v78, 0, 12);
  v78[3] = 1065353216;
  v77[0] = 1065353216;
  v77[1] = 1065353216;
  v77[2] = 1065353216;
  v55 = (uint32_t *)sub_4EBBF0(0x118u, 1);
  glitch::scene::CMeshSceneNode::Construct(v55, v68, 0, v76, v78, v77);
  if ( v55 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v55 + *(uint32_t *)(*v55 - 16) + 4), 1u);
  v41 = *(uint32_t **)(v2 + 100);
  *(uint32_t *)(v2 + 100) = (uint32_t)(uintptr_t)(v55);
  if ( v41 != nullptr )
    sub_5459C0((uint32_t *)((char *)v41 + *(uint32_t *)(*v41 - 16)));
  if ( v68[0] != 0 )
    sub_5459C0((volatile int32_t *)v68[0]);
  if ( *(uint32_t *)(v2 + 100) != 0 )
  {
    v42 = static_cast<void *(*)()>(sub_655B90)();
    v43 = (int *)sub_5B9810((int)(uintptr_t)v42);
    v44 = *v43;
    v74 = *(uint32_t **)(v2 + 100);
    v61 = *(void ( **)(int *, uint32_t **))(v44 + 104);
    if ( v74 != nullptr )
      __sync_add_and_fetch((uint32_t *)((char *)v74 + *(uint32_t *)(*v74 - 16) + 4), 1u);
    v61(v43, &v74);
    sub_5EDFE0(&v74);
    (*(void ( **)(uint32_t, const char *))(**(uint32_t **)(v2 + 100) + 52))(*(uint32_t *)(v2 + 100), "TrailMesh");
    (*(void ( **)(uint32_t, int))(**(uint32_t **)(v2 + 100) + 236))(*(uint32_t *)(v2 + 100), 9003);
    glitch::scene::ISceneNode::setAutomaticCulling(*(uint32_t *)(v2 + 100), 0);
    (*(void ( **)(uint32_t, uint32_t))(**(uint32_t **)(v2 + 100) + 76))(*(uint32_t *)(v2 + 100), 0);
  }
  if ( v39 != nullptr )
    sub_5459C0(v39);
  sub_5ED480(&v72);
  v45 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)v70;
  if ( v70 != nullptr && __sync_fetch_and_add((volatile int32_t *)v70, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialRenderer::Destroy(v45);
    sub_4EBE40((int)(uintptr_t)v45);
  }
  glitch::collada::CColladaDatabase::Destroy(v84);
  result = v64;
  if ( v64 != nullptr )
    result = (volatile int32_t *)sub_5459C0(v64);
  v47 = v66;
  if ( v66 != nullptr )
  {
    result = (volatile int32_t *)__sync_fetch_and_add((volatile int32_t *)v66, 0xFFFFFFFF);
    if ( result == (int *)((char *)&dword_0 + 1) )
    {
      glitch::video::CVertexStreams::Destroy(v47);
      return (volatile int32_t *)sub_4EBE40((int)(uintptr_t)v47);
    }
  }
  return result;
}

// Group C [sub_8A2990] (VA 0x8a2990) | bad sp value at call has been detected, the output may be wrong!
volatile int32_t * sub_8A2990(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  volatile int32_t **v11;
  uint8_t v12;
  int v13;
  bool v14; // sf
  uint8_t v15;
  int *v16;
  int v17;
  bool v18; // zf
  char v19;
  uint8_t v20;
  int v21;
  int v22;
  uint16_t ParameterID; // ax
  int v24;
  int v25;
  int *v26;
  char *v27;
  char *v28;
  int *v29;
  int *v30;
  uint8_t Technique;
  uint32_t *v32;
  uint32_t *v33;
  volatile int32_t *result;
  char *i;
  char *v36;
  char *v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  char *v48;
  char *v49;
  int v50;
  uint32_t *v51;
  uint32_t *v52;
  size_t n;
  int *na;
  size_t nb;
  int v56; // [esp+Ch] [ebp-C8h]
  int v57;
  int v58;
  uint32_t *v59;
  char *v60;
  int v61; // [esp+1Ch] [ebp-B8h]
  uint32_t *v62; // [esp+1Ch] [ebp-B8h]
  int v63;
  int v64;
  g4_cxa_guard_t *v65;
  int *v66;
  char *v67;
  g4_cxa_guard_t *v68;
  void *src;
  char *srca;
  char *srcb;
  volatile int32_t *v72[4]; // [esp+2Ch] [ebp-A8h] BYREF
  uint32_t *v73; // [esp+3Ch] [ebp-98h] BYREF
  uint32_t *v74; // [esp+4Ch] [ebp-88h] BYREF
  char *v75; // [esp+5Ch] [ebp-78h] BYREF
  char *v76; // [esp+6Ch] [ebp-68h] BYREF
  uint32_t *v77; // [esp+7Ch] [ebp-58h] BYREF
  uint32_t *v78;
  uint32_t *v79; // [esp+8Ch] [ebp-48h] BYREF
  glitch::video::CMaterial::Self *v80;
  int v81;
  int v82;
  int ( **v83)(int); // [esp+9Ch] [ebp-38h] BYREF
  uint32_t *v84; // [esp+A0h] [ebp-34h]
  uint32_t *v85; // [esp+A4h] [ebp-30h]
  int v86; // [esp+ACh] [ebp-28h]
  int *v87; // [esp+B0h] [ebp-24h]
  uint32_t *v88; // [esp+B4h] [ebp-20h]
  glitch::video::CMaterial::Self *v89; // [esp+C4h] [ebp-10h]
  int ( ***v90)(int); // [esp+C8h] [ebp-Ch]
  volatile int32_t **v91; // [esp+CCh] [ebp-8h]
  int v92; // [esp+D0h] [ebp-4h]

  v89 = (glitch::video::CMaterial::Self *)&a1;
  v2 = a1;
  v3 = a2;
  v4 = sub_B97E00();
  (*(void ( **)(volatile int32_t **, uint32_t, uint32_t, int, int, int, int, size_t, int, int, int, char *, int, int, g4_cxa_guard_t *, void *))(**(uint32_t **)(v4 + 32) + 12))(
    v72,
    *(uint32_t *)(v4 + 32),
    *v3,
    v44,
    v45,
    v46,
    v50,
    n,
    v56,
    v57,
    v58,
    v60,
    v61,
    v63,
    v65,
    src);
  v73 = (uint32_t *)v2[4];
  if ( v73 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v73 + *(uint32_t *)(*v73 - 12) + 4));
  v5 = (uint32_t *)sub_4EBBF0(0x22Cu, 1);
  v59 = v2 + 6;
  sub_87DA30(v5, &v73, v2 + 6);
  if ( v5 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v5 + *(uint32_t *)(*v5 - 16) + 4));
  v6 = (uint32_t *)v2[87];
  v2[87] = (uint32_t)(uintptr_t)(v5);
  if ( v6 != nullptr )
    sub_5459C0((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16)));
  if ( v73 != nullptr )
    sub_5459C0((uint32_t *)((char *)v73 + *(uint32_t *)(*v73 - 12)));
  if ( byte_20D6CF0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6CF0) != 0 )
  {
    dword_20D6CF8 = (uint32_t)(uintptr_t)off_2062168;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6CF0);
    __cxa_atexit((void (*)(void *))sub_8AFBE0, &dword_20D6CF8, &unk_20D1280);
  }
  v7 = (uint32_t *)v2[87];
  if ( v7 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 16) + 4));
  v8 = (uint32_t *)sub_B97E20();
  if ( v8 != nullptr )
  {
    v51 = v8;
    sub_8B1B00((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 12) + 4));
    v84 = v51;
    v83 = (int (**)(int))(&off_2062268);
    sub_8B1B00((uint32_t *)((char *)v51 + *(uint32_t *)(*v51 - 12) + 4));
    v8 = v51;
  }
  else
  {
    v84 = nullptr;
    v83 = (int (**)(int))(&off_2062268);
  }
  v85 = v7;
  if ( v7 != nullptr )
  {
    v52 = v8;
    sub_8B1B00((uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 16) + 4));
    v8 = v52;
  }
  v86 = 0;
  v87 = (int *)(&dword_20D6CF8);
  v83 = (int (**)(int))(&off_2062328);
  v88 = nullptr;
  if ( v8 != nullptr )
    sub_5459C0((uint32_t *)((char *)v8 + *(uint32_t *)(*v8 - 12)));
  if ( v7 != nullptr )
    sub_5459C0((uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 16)));
  v91 = v72;
  v92 = 0;
  v90 = &v83;
  g4_std::vector_CCustomSceneManagerTweak_a90dd2::M_insert_aux((int)(uintptr_t)(&v78), (char *)v90, (int *)&v91);
  v9 = nullptr;
  sub_5EDFE0(&v78);
  v79 = v88;
  if ( v88 != nullptr )
  {
    sub_8B1B00((uint32_t *)((char *)v88 + *(uint32_t *)(*v88 - 16) + 4));
    v77 = v79;
    if ( v79 != nullptr )
    {
      sub_8B1B00((uint32_t *)((char *)v79 + *(uint32_t *)(*v79 - 16) + 4));
      v9 = v77;
    }
  }
  v10 = (uint32_t *)v2[88];
  v2[88] = (uint32_t)(uintptr_t)(v9);
  v77 = v10;
  sub_5EDFE0(&v77);
  sub_521C80((uint32_t *)v2[88], 9500);
  (*(void ( **)(uint32_t, uint32_t **))(**(uint32_t **)(v2[87] + 4) + 104))(*(uint32_t *)(v2[87] + 4), &v79);
  v64 = G4_VCALL<int>(v2[88], 160);
  if ( v64 > 0 )
  {
    v11 = nullptr;
    v62 = v2;
    while ( 1 )
    {
      v22 = *(uint32_t *)v62[88];
      v90 = (int ( ***)(int))v62[88];
      v91 = v11;
      (*(void ( **)(glitch::video::CMaterial::Self **))(v22 + 156))(&v80);
      ParameterID = glitch::video::CMaterialRenderer::getParameterID(
                      *((glitch::video::CMaterialRenderer::Self **)v80 + 1),
                      (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)"Diffuse",
                      0);
      if ( ParameterID == 0xFFFF )
      {
        v24 = 0xFFFF;
        if ( g4_bss_20D51CC != 0 )
          goto LABEL_50;
        goto LABEL_56;
      }
      v24 = ParameterID;
      v81 = 0;
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_ITex_c4ab82(
        (int)(uintptr_t)v80,
        ParameterID,
        0,
        &v81);
      if ( v81 != 0 )
        break;
LABEL_49:
      sub_5ED480(&v81);
      if ( g4_bss_20D51CC == 0 )
      {
LABEL_56:
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D51C0) != 0 )
        {
          dword_20D51FC = (int)(uintptr_t)&dword_20D51FC;
          dword_20D51E0 = (int)(uintptr_t)&off_205F350;
          dword_20D5200 = (int)(uintptr_t)&dword_20D51FC;
          byte_20D51F8 = 0;
          g4_bss_20D51F0 = 0;
          byte_20D51F9 = 0;
          glf::Mutex::Construct(&dword_20D5204, 1);
          glf::Mutex::Construct(&dword_20D5208, 0);
          dword_20D520C = 0;
          dword_20D5210 = 0;
          dword_20D5214 = 0;
          byte_20D5218 = 0;
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D51C0);
          __cxa_atexit((void (*)(void *))sub_85BF60, &dword_20D51FC - 7, &unk_20D1280);
        }
      }
LABEL_50:
      v30 = nullptr;
      if ( g4_bss_20D51F0 == 0 )
        v30 = (int *)(&dword_20D51E0);
      sub_88B270((uint32_t *)(v30), &v80, v24);
      v18 = *(uint8_t *)(dword_20D90F0 + 540 * dword_20BAD70 + 52) == 0;
      v89 = v80;
      if ( v18 )
      {
        Technique = glitch::video::CMaterial::getTechnique(v89);
        v21 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v80 + 1) + 24) + 12 * Technique + 4);
        v14 = *(int *)v21 < 0;
        *(uint32_t *)v21 &= ~0x80000000;
        if ( !v14 )
          goto LABEL_31;
      }
      else
      {
        v12 = glitch::video::CMaterial::getTechnique(v89);
        v13 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v80 + 1) + 24) + 12 * v12 + 4);
        v14 = *(int *)v13 < 0;
        *(uint32_t *)v13 |= 0x80000000;
        if ( !v14 )
          *(uint8_t *)(v13 + 54) = 1;
        v15 = glitch::video::CMaterial::getTechnique(v80);
        v16 = *(int **)(*(uint32_t *)(*((uint32_t *)v80 + 1) + 24) + 12 * v15 + 4);
        v17 = *v16;
        LOBYTE(v17) = 0;
        v18 = (uint8_t)*v16 == 84;
        *v16 = v17 | 0x54;
        v19 = 1;
        if ( v18 )
          v19 = *((uint8_t *)v16 + 54);
        *((uint8_t *)v16 + 54) = v19;
        v20 = glitch::video::CMaterial::getTechnique(v80);
        v21 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v80 + 1) + 24) + 12 * v20 + 4);
        v18 = (*(uint32_t *)v21 & 0x70000000) == 0;
        *(uint32_t *)v21 &= 0x8FFFFFFF;
        if ( v18 )
          goto LABEL_31;
      }
      *(uint8_t *)(v21 + 54) = 1;
LABEL_31:
      v11 = (volatile int32_t **)((char *)v11 + 1);
      sub_5ED4F0(&v80);
      if ( (volatile int32_t **)v64 == v11 )
      {
        v2 = v62;
        goto LABEL_59;
      }
    }
    v25 = *(uint32_t *)(v81 + 12);
    v26 = (int *)(v25 - 12);
    if ( *(int *)(v25 - 4) < 0 )
    {
      v25 = sub_862230((int)(uintptr_t)v26);
    }
    else if ( v26 != (int *)(&dword_20D3E6C) )
    {
      __sync_add_and_fetch((volatile int32_t *)(v25 - 4), 1u);
    }
    v75 = (char *)v25;
    v27 = *(char **)(v25 - 12);
    srca = v27;
    if ( v27 != nullptr )
    {
      for ( i = v27 - 1; i[v25] != 47; --i )
      {
        if ( i == nullptr )
        {
          v36 = nullptr;
          goto LABEL_81;
        }
      }
      v36 = i + 1;
      if ( i + 1 > srca )
        sub_1900210("basic_string::substr");
LABEL_81:
      v37 = &srca[v25];
      srcb = &v36[v25];
      if ( v37 != &v36[v25] )
      {
        if ( srcb != nullptr )
        {
          v38 = v37 - srcb;
          nb = v38;
          if ( v38 > 0x3FFFFFFC )
            sub_1900180("basic_string::_S_create");
          v39 = v38 + 29;
          if ( v39 > 0x1000 && nb != 0 )
          {
            v40 = v39 & 0xFFF;
            v41 = 1073741820;
            v90 = nullptr;
            if ( nb + 4096 - v40 <= 0x3FFFFFFC )
              v41 = nb + 4096 - v40;
            v47 = v41;
            v68 = (g4_cxa_guard_t *)sub_4EBDC0(v41 + 13);
            v68[1] = v47;
            v68[2] = 0;
            v28 = (char *)(v68 + 3);
          }
          else
          {
            v90 = nullptr;
            v42 = sub_4EBDC0(nb + 13);
            v68 = (g4_cxa_guard_t *)v42;
            *(uint32_t *)(v42 + 4) = nb;
            v28 = (char *)(v42 + 12);
            *(uint32_t *)(v42 + 8) = 0;
            if ( nb == 1 )
            {
              *(uint8_t *)(v42 + 12) = *srcb;
              goto LABEL_90;
            }
          }
        }
        else
        {
          if ( v37 != nullptr )
            sub_18FFFD0("basic_string::_S_construct null not valid");
          v90 = nullptr;
          v68 = (g4_cxa_guard_t *)sub_4EBDC0(0xDu);
          v68[1] = 0;
          v68[2] = 0;
          v28 = (char *)(v68 + 3);
          nb = 0;
        }
        v48 = v28;
        memcpy(v28, srcb, nb);
        v28 = v48;
LABEL_90:
        if ( v68 != (g4_cxa_guard_t *)(&dword_20D3E6C) )
        {
          v68[2] = 0;
          *v68 = nb;
          v28[nb] = 0;
        }
        v25 = (int)(uintptr_t)v75;
        goto LABEL_39;
      }
    }
    v28 = (char *)(uintptr_t)(byte_20D3E78);
LABEL_39:
    na = (int *)(v28 - 12);
    v76 = v28;
    v66 = (int *)(v25 - 12);
    if ( v28 - 12 != (char *)(v25 - 12) )
    {
      if ( *((int *)v28 - 1) < 0 )
      {
        v43 = sub_862230((int)(uintptr_t)na);
        v25 = (int)(uintptr_t)v75;
        v28 = (char *)v43;
        v66 = (int *)(v75 - 12);
      }
      else if ( na != (int *)(&dword_20D3E6C) )
      {
        __sync_add_and_fetch((volatile int32_t *)v28 - 1, 1u);
        v25 = (int)(uintptr_t)v75;
        v66 = (int *)(v75 - 12);
      }
      if ( v66 != (int *)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        v49 = v28;
        sub_4EBE40((int)(uintptr_t)v66);
        v28 = v49;
      }
      v75 = v28;
    }
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v76);
    v67 = v75;
    if ( byte_20D51C0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D51C0) != 0 )
    {
      dword_20D51FC = (int)(uintptr_t)&dword_20D51FC;
      dword_20D51E0 = (int)(uintptr_t)&off_205F350;
      dword_20D5200 = (int)(uintptr_t)&dword_20D51FC;
      byte_20D51E4 = 0;
      byte_20D51F8 = 0;
      byte_20D51F9 = 0;
      glf::Mutex::Construct(&dword_20D5204, 1);
      glf::Mutex::Construct(&dword_20D5208, 0);
      dword_20D520C = 0;
      dword_20D5210 = 0;
      dword_20D5214 = 0;
      byte_20D5218 = 0;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D51C0);
      __cxa_atexit((void (*)(void *))sub_85BF60, &dword_20D51FC - 7, &unk_20D1280);
    }
    v29 = nullptr;
    if ( byte_20D51E4 == 0 )
      v29 = (int *)(&dword_20D51E0);
    sub_876E40(&v82, (int)(uintptr_t)v29, v67);
    sub_5ED480(&v82);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v75);
    goto LABEL_49;
  }
LABEL_59:
  v2[133] = (uint16_t)glitch::core::detail::SIDedCollection_video_SShaderParameterDe_d5840b::getId(
                                *(glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef::Self, unsigned short, false, glitch::video::detail::globalmaterialparametermanager::SPropeties::Self, glitch::video::detail::globalmaterialparametermanager::SValueTraits, 1> **)(v2[4] + 464),
                                "LowCityBlend");
  sub_5EDFE0(&v79);
  v74 = (uint32_t *)v2[4];
  if ( v74 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v74 + *(uint32_t *)(*v74 - 12) + 4));
  v32 = (uint32_t *)sub_4EBBF0(0x22Cu, 1);
  sub_87DA30(v32, &v74, v59);
  if ( v32 != nullptr )
    sub_8B1B00((uint32_t *)((char *)v32 + *(uint32_t *)(*v32 - 16) + 4));
  v33 = (uint32_t *)v2[89];
  v2[89] = (uint32_t)(uintptr_t)(v32);
  if ( v33 != nullptr )
    sub_5459C0((uint32_t *)((char *)v33 + *(uint32_t *)(*v33 - 16)));
  if ( v74 != nullptr )
    sub_5459C0((uint32_t *)((char *)v74 + *(uint32_t *)(*v74 - 12)));
  v83 = (int (**)(int))(&off_2062328);
  if ( v88 != nullptr )
    sub_5459C0((uint32_t *)((char *)v88 + *(uint32_t *)(*v88 - 16)));
  v83 = (int (**)(int))(&off_2062268);
  if ( v85 != nullptr )
    sub_5459C0((uint32_t *)((char *)v85 + *(uint32_t *)(*v85 - 16)));
  if ( v84 != nullptr )
    sub_5459C0((uint32_t *)((char *)v84 + *(uint32_t *)(*v84 - 12)));
  result = v72[0];
  if ( v72[0] != nullptr )
    return (volatile int32_t *)sub_5459C0(v72[0]);
  return result;
}

// Group C [sub_80BDB0] (VA 0x80bdb0) | bad sp value at call has been detected, the output may be wrong!
int sub_80BDB0(int a1, int *a2)
{
  int *v2;
  char v3;
  int v4;
  float v5; // xmm1_4
  char v6;
  float *v7;
  float v8; // xmm1_4
  float v9; // xmm0_4
  float *v10;
  int v11;
  float v12; // xmm0_4
  int v13;
  void ( *v14)(uint32_t *, int, uint32_t *, uint32_t **, uint32_t, int, int, int, uint32_t, int, int, int, void *, int, g4_cxa_guard_t *, void *, int, int, int, int, int);
  uint32_t *v15;
  uint32_t *v16;
  volatile int32_t *v17;
  int v18;
  int v19;
  int v21;
  float v22;
  int v23;
  int v24;
  int v25; // [esp+Ch] [ebp-8Ch]
  float v26;
  int v27;
  int v28;
  int v29; // [esp+1Ch] [ebp-7Ch]
  void *obj;
  int v31;
  int v32;
  g4_cxa_guard_t *v33;
  int v34;
  int v35;
  int v36;
  int v37; // [esp+3Ch] [ebp-5Ch] BYREF
  int v38;
  uint32_t *v39;
  uint32_t v40[2];
  uint32_t v41[6];
  uint32_t v42[12];

  v42[8] = (uint32_t)(uintptr_t)(&a1);
  v2 = a2;
  v31 = a1;
  sub_B9D330(dword_20DDDC0, &v37, &v38);
  v3 = byte_20D4E40;
  v4 = v38 >> 1;
  v5 = (float)(v37 >> 1);
  if ( byte_20D4E40 == 0 )
  {
    v22 = (float)(v37 >> 1);
    v21 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40);
    v3 = byte_20D4E40;
    v5 = v22;
    if ( v21 != 0 )
    {
      obj = &unk_20D4E60;
      sub_9C9CC0((int)(uintptr_t)&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      v3 = byte_20D4E40;
      v5 = v22;
    }
  }
  v6 = byte_20D4E64;
  v7 = nullptr;
  if ( byte_20D4E64 == 0 )
    v7 = (float *)&unk_20D4E60;
  v8 = v5 * v7[83];
  v9 = (float)v4;
  if ( v3 == 0 )
  {
    v26 = (float)v4;
    v22 = v8;
    v9 = (float)v4;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0((int)(uintptr_t)&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      v6 = byte_20D4E64;
      v3 = byte_20D4E40;
      v9 = (float)v4;
    }
    else
    {
      v6 = byte_20D4E64;
      v3 = byte_20D4E40;
    }
  }
  v10 = nullptr;
  if ( v6 == 0 )
    v10 = (float *)&unk_20D4E60;
  v11 = (int)(float)((float)(v9 * v10[84]) + (float)v2[1]);
  v12 = (float)*v2 - v8;
  v40[1] = v11;
  v40[0] = (int)v12;
  v13 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(dword_20DDDC0 + 832) + 16) + 28);
  v14 = *(void ( **)(uint32_t *, int, uint32_t *, uint32_t **, uint32_t, int, int, int, uint32_t, int, int, int, void *, int, g4_cxa_guard_t *, void *, int, int, int, int, int))(*(uint32_t *)v13 + 20);
  if ( v3 == 0 )
  {
    v33 = (g4_cxa_guard_t *)&byte_20D4E40;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
    {
      sub_9C9CC0((int)(uintptr_t)&unk_20D4E60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
      __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
    }
    v6 = byte_20D4E64;
  }
  v15 = nullptr;
  if ( v6 == 0 )
    v15 = (uint32_t *)(&unk_20D4E60);
  v16 = (uint32_t *)sub_974E20(v15);
  v39 = v16;
  if ( v16 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 16) + 4), 1u);
  v14(
    v41,
    v13,
    v40,
    &v39,
    LODWORD(v22),
    v23,
    v24,
    v25,
    LODWORD(v26),
    v27,
    v28,
    v29,
    obj,
    v31,
    v33,
    &unk_20D4E60,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( v39 != nullptr )
  {
    v17 = (volatile int32_t *)((uint32_t *)((char *)v39 + *(uint32_t *)(*v39 - 16)));
    if ( __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v17, 8);
      G4_VCALL<void>(v17, 4);
    }
  }
  if ( byte_20D6620 != 0 )
  {
    memcpy(byte_20D65F0, v41, sizeof(byte_20D65F0));
    dword_20D6618 = dword_20D6614;
    dword_20D660C = dword_20D6608;
  }
  memcpy(v42, v41, 24);
  v18 = sub_80BA60(v32, v42, 1);
  v19 = v18;
  if ( v18 != 0 && G4_VCALL<uint8_t>(v18, 208) != 0 )
    return 0;
  return v19;
}

// Group C [sub_7B76E0] (VA 0x7b76e0)
void sub_7B76E0(int a1)
{
  uint32_t *v1;
  volatile int32_t *v2;
  void *v3;
  void **v4;
  unsigned int v5;
  void *v6;
  uint32_t **v7;
  uint32_t **v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205A260);
  if ( *(uint32_t *)(a1 + 284) != 0 )
  {
    sub_7A98F0((uint32_t *)a1);
    if ( *(uint32_t *)(a1 + 284) != 0 )
      sub_7B6610(a1, 0, 0, 0, nullptr, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr);
  }
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)(a1 + 300));
  v1 = *(uint32_t **)(a1 + 288);
  if ( v1 != nullptr )
  {
    v2 = (volatile int32_t *)((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
    if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  sub_5EDFE0((uint32_t **)(a1 + 284));
  sub_5EDFE0((uint32_t **)(a1 + 264));
  sub_5F76C0((uint32_t *)(a1 + 260), 0);
  sub_5F76C0((uint32_t *)(a1 + 256), 0);
  sub_1938B70((uint32_t *)(a1 + 244));
  sub_1938B70((uint32_t *)(a1 + 84));
  v3 = *(void **)(a1 + 44);
  if ( v3 != nullptr )
  {
    v4 = *(void ***)(a1 + 64);
    v5 = *(uint32_t *)(a1 + 80) + 4;
    if ( v5 > (unsigned int)(uintptr_t)v4 )
    {
      do
      {
        v6 = *v4++;
        operator delete(v6);
      }
      while ( v5 > (unsigned int)(uintptr_t)v4 );
      v3 = *(void **)(a1 + 44);
    }
    operator delete(v3);
  }
  v7 = *(uint32_t ***)(a1 + 8);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2054CA8);
  v8 = *(uint32_t ***)(a1 + 4);
  if ( v8 != v7 )
  {
    do
    {
      v9 = *v8++;
      *v9 = 0;
    }
    while ( v7 != v8 );
    v8 = *(uint32_t ***)(a1 + 4);
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v8);
  v10 = *(uint32_t **)(a1 + 20);
  v11 = *(uint32_t **)(a1 + 16);
  if ( v11 != v10 )
  {
    do
    {
      v12 = (uint32_t *)*v11++;
      *v12 = 0;
    }
    while ( v10 != v11 );
    v11 = *(uint32_t **)(a1 + 16);
  }
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v11);
  if ( v11 != nullptr )
    operator delete(v11);
  if ( *(uint32_t *)(a1 + 4) != 0 )
    operator delete(*(void **)(a1 + 4));
}

// Group C [vox_CheckForEndOfSample] (VA 0xfe07d0)
int vox::DecoderMPC8Cursor::CheckForEndOfSample(void *self)
{
  char v1;
  int v3;
  int v4;
  uint8_t v5; // [esp+1Ch] [ebp-20h]

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  v1 = 0;
  if ( *((uint32_t *)self + 8) == *((uint32_t *)self + 4) )
  {
    v1 = 1;
    if ( *((uint8_t *)self + 28) != 0 )
    {
      v3 = *((uint32_t *)self + 11);
      v1 = 0;
      if ( v3 != 0 )
      {
        v4 = mpc_demux_seek_sample((uint32_t *)(uintptr_t)(v3), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        *((uint32_t *)self + 19) = v4;
        v1 = 1;
        if ( v4 == 0 )
        {
          *((uint32_t *)self + 8) = 0;
          v1 = 0;
        }
      }
    }
  }
  v5 = v1;
  sub_BA06B0();
  return v5;
}

// Group C [gameswf_getCanvas] (VA 0x10e7510)
int gameswf::SpriteInstance::getCanvas(void *self)
{
  int v1;
  int v2;
  int v3;
  gameswf::Player::Self *v5;
  gameswf::Self **v6;
  gameswf::RefCounted::Self *v7;
  gameswf::RefCounted::Self *v8;
  int HighestDepth;

  v1 = *((uint32_t *)self + 69);
  if ( v1 == 0 )
  {
    v5 = *((gameswf::Player::Self **)self + 4);
    v6 = (gameswf::Self **)operator new(0xC8u);
    gameswf::Canvas::Construct(v6, v5);
    v7 = (gameswf::RefCounted::Self *)(*((int ( **)(gameswf::Self **, gameswf::SpriteInstance::Self *, int))*v6 + 6))(v6, (gameswf::SpriteInstance::Self *)(self), -1);
    v8 = *((gameswf::RefCounted::Self **)self + 69);
    if ( v7 != v8 )
    {
      if ( v8 != nullptr )
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 69));
      *((uint32_t *)self + 69) = (uint32_t)(uintptr_t)(v7);
      if ( v7 != nullptr )
        gameswf::RefCounted::addRef(v7);
    }
    HighestDepth = gameswf::SpriteInstance::getHighestDepth((gameswf::SpriteInstance::Self *)(self));
    gameswf::DisplayList::addDisplayObject((gameswf::DisplayList::Self *)((char *)self + 212), *((gameswf::Character::Self **)self + 69), HighestDepth, true, (const gameswf::CxForm::Self *)gameswf::CxForm::identity, (const gameswf::Matrix::Self *)gameswf::Matrix::identity, (const gameswf::Effect::Self *)gameswf::Effect::identity, 0.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr, 0);
    v1 = *((uint32_t *)self + 69);
  }
  v2 = G4_VCALL<int>(v1, 304);
  v3 = v2;
  if ( v2 != 0 && G4_VCALL<uint8_t>(v2, 8, 24) == 0 )
    return 0;
  return v3;
}

// Group C [sub_18883F0] (VA 0x18883f0) | bad sp value at call has been detected, the output may be wrong!
const char * sub_18883F0(uint32_t *a1, uint32_t *a2, hkMemoryAllocator::Self *a3, int a4)
{
  const char *result;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v5;
  int v6;
  int v7;
  int16_t v8; // dx
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  hkString::Self *v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int16_t v19; // ax
  char ***v20;
  int v21;
  int v22;
  bool v23; // zf
  int v24;
  hkDataObject_Value::Self *v25;
  int v26;
  int16_t v27; // ax
  int v28;
  char **v29;
  int v30;
  int v31;
  int v32;
  int v33;
  hkOArchive::Self *v34;
  int v35;
  int16_t v36; // ax
  int v37;
  hkDataObject_Value::Self *v38;
  int v39;
  int16_t v40; // ax
  int v41;
  int v42;
  int v43;
  hkDataObject_Value::Self *v44;
  int v45;
  int16_t v46; // dx
  hkDataObject_Value::Self *v47;
  int v48;
  int v49;
  int v50;
  hkDataObject_Value::Self *v51;
  int v52;
  int16_t v53; // dx
  int v54;
  int v55;
  int v56;
  int v57;
  int16_t v58; // dx
  int v59;
  char **v60;
  int v61;
  int v62;
  int16_t v63; // dx
  uint32_t *v64;
  int v65;
  int v66;
  hkMemoryAllocator::Self *v67;
  hkOArchive::Self **v68;
  int v69;
  int v70;
  int v71;
  hkDataObject_Value::Self *v72;
  int v73;
  int16_t v74; // ax
  int v75;
  hkOArchive::Self *v76;
  int v77;
  int v78;
  hkString::Self *v79;
  hkString::Self *v80;
  unsigned int v81;
  hkString::Self *v82;
  int v83;
  int v84;
  int v85;
  int v86;
  hkString::Self *v87;
  int v88;
  int64_t v89; // rax
  int64_t v90; // krB0_8
  uint8_t v91;
  uint64_t v92; // krB8_8
  int64_t v93; // rdi
  int v94;
  int v95;
  hkString::Self *v96;
  hkString::Self *v97;
  hkString::Self *v98;
  hkString::Self *v99;
  int v100;
  hkOArchive::Self *v101;
  hkString::Self *v102;
  int v103;
  int v104;
  uint64_t v105; // rax
  char v106;
  uint64_t v107; // rax
  uint8_t v108;
  uint64_t v109; // rdi
  hkOArchive::Self *v110;
  char v111;
  unsigned int v112;
  char v113; // di
  uint64_t v114; // rax
  char v115;
  uint64_t v116; // rax
  uint8_t v117;
  uint64_t v118; // rdi
  hkOArchive::Self *v119;
  char v120;
  hkTypeManager::Type::Self *v121;
  int v122;
  int v123;
  int v124;
  hkString::Self *v125;
  int v126;
  hkString::Self *v127;
  unsigned int v128;
  hkString::Self *v129;
  hkString::Self *v130;
  int v131;
  hkOArchive::Self *v132;
  hkString::Self *v133;
  int v134;
  int v135;
  uint64_t v136; // rax
  char v137;
  uint64_t v138; // rax
  uint8_t v139;
  uint64_t v140; // rdi
  hkOArchive::Self *v141;
  char v142;
  unsigned int v143;
  char v144; // di
  uint64_t v145; // rax
  char v146;
  uint64_t v147; // rax
  uint8_t v148;
  uint64_t v149; // rdi
  hkOArchive::Self *v150;
  char v151;
  int k;
  hkTypeManager::Type::Self *v153;
  int v154;
  int v155;
  int64_t v156; // rax
  int64_t v157; // krC0_8
  uint8_t v158;
  uint64_t v159; // krC8_8
  int64_t v160; // rdi
  int64_t v161; // rax
  unsigned int v162;
  int64_t v163; // krD0_8
  unsigned int v164;
  uint8_t v165;
  uint64_t v166; // krD8_8
  int64_t v167; // rdi
  int v168;
  unsigned int v169;
  uint64_t v170; // rax
  char v171;
  uint64_t v172; // rax
  uint8_t v173;
  uint64_t v174; // krE0_8
  int64_t v175; // rdi
  hkString::Self *v176;
  int v177;
  int v178;
  uint64_t v179; // krE8_8
  int64_t v180; // rdi
  uint8_t v181;
  unsigned int v182;
  int64_t v183; // rdi
  uint8_t v184;
  uint8_t v185;
  char v186;
  hkTypeManager::Type::Self *v187;
  int v188;
  int v189;
  int v190;
  hkString::Self *v191;
  int v192;
  hkString::Self *v193;
  unsigned int v194;
  hkString::Self *v195;
  hkString::Self *v196;
  int v197;
  hkOArchive::Self *v198;
  hkString::Self *v199;
  int v200;
  int v201;
  uint64_t v202; // rax
  char v203;
  uint64_t v204; // rax
  uint8_t v205;
  uint64_t v206; // rdi
  hkOArchive::Self *v207;
  char v208;
  int v209;
  int v210;
  hkString::Self *v211;
  hkString::Self *v212;
  int v213;
  int v214;
  uint64_t v215; // krF0_8
  int64_t v216; // rdi
  uint8_t v217;
  uint64_t v218; // krF8_8
  int64_t v219; // rdi
  uint8_t v220;
  uint8_t v221;
  char v222;
  signed int v223;
  uint64_t v224; // rax
  char v225;
  uint64_t v226; // rax
  uint8_t v227;
  uint64_t v228; // rdi
  char v229;
  unsigned int v230;
  char v231; // di
  uint64_t v232; // rax
  char v233;
  uint64_t v234; // rax
  uint8_t v235;
  uint64_t v236; // rdi
  hkOArchive::Self *v237;
  char v238;
  hkOArchive::Self *n;
  hkTypeManager::Type::Self *v240;
  int v241;
  int v242;
  signed int v243;
  uint64_t v244; // rax
  char v245;
  uint64_t v246; // rax
  uint8_t v247;
  uint64_t v248; // rdi
  char v249;
  uint64_t v250; // rax
  int v251;
  int v252;
  hkString::Self *v253;
  uint64_t v254; // rax
  char v255;
  uint64_t v256; // rax
  uint8_t v257;
  uint64_t v258; // rdi
  hkOArchive::Self *v259;
  char v260;
  int64_t v261; // rax
  int64_t v262; // kr100_8
  uint8_t v263;
  uint64_t v264; // kr108_8
  int64_t v265; // rdi
  uint64_t v266; // rax
  uint64_t v267; // rax
  signed int v268;
  uint64_t v269; // rax
  char v270;
  uint64_t v271; // rax
  uint8_t v272;
  uint64_t v273; // rdi
  hkOArchive::Self *v274;
  char v275;
  int64_t v276; // rax
  uint64_t v277; // rax
  uint64_t v278; // rax
  signed int v279;
  uint64_t v280; // rax
  char v281;
  uint64_t v282; // rax
  uint8_t v283;
  uint64_t v284; // rdi
  hkOArchive::Self *v285;
  char v286;
  int v287;
  hkString::Self *v288;
  hkString::Self *v289;
  hkString::Self *v290;
  int v291;
  hkOArchive::Self *v292;
  hkString::Self *v293;
  int v294;
  int v295;
  uint64_t v296; // rax
  char v297;
  uint64_t v298; // rax
  uint8_t v299;
  uint64_t v300; // rdi
  hkOArchive::Self *v301;
  char v302;
  uint64_t v303; // rax
  unsigned int v304;
  char v305; // di
  uint64_t v306; // rax
  char v307;
  uint64_t v308; // rax
  uint8_t v309;
  uint64_t v310; // rdi
  hkOArchive::Self *v311;
  char v312;
  hkOArchive::Self *i;
  hkTypeManager::Type::Self *Terminal;
  int v315;
  int TypeName;
  int v317;
  int v318;
  hkString::Self *v319;
  uint64_t v320; // rax
  char v321;
  uint64_t v322; // rax
  uint8_t v323;
  uint64_t v324; // rdi
  hkOArchive::Self *v325;
  char v326;
  uint64_t v327; // rax
  signed int v328;
  uint64_t v329; // rax
  char v330;
  uint64_t v331; // rax
  uint8_t v332;
  uint64_t v333; // rdi
  hkOArchive::Self *v334;
  char v335;
  int v336;
  int v337;
  hkString::Self *v338;
  uint64_t v339; // rax
  char v340;
  uint64_t v341; // rax
  uint8_t v342;
  uint64_t v343; // rdi
  hkOArchive::Self *v344;
  char v345;
  uint64_t v346; // rax
  uint64_t v347; // rax
  signed int v348;
  uint64_t v349; // rax
  char v350;
  uint64_t v351; // rax
  uint8_t v352;
  uint64_t v353; // rdi
  hkOArchive::Self *v354;
  char v355;
  int v356;
  int v357;
  hkString::Self *v358;
  uint64_t v359; // rax
  char v360;
  uint64_t v361; // rax
  uint8_t v362;
  uint64_t v363; // rdi
  hkOArchive::Self *v364;
  char v365;
  uint64_t v366; // rax
  hkString::Self *v367;
  int v368;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v369;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v370;
  hkTypeManager::Type::Self *v371; // [esp+Ch] [ebp-154h]
  hkTypeManager::Type::Self *v372; // [esp+Ch] [ebp-154h]
  hkString::Self *v373;
  int v374;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v375;
  int v376;
  int v377;
  int v378;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v379;
  const char *v380;
  char v381;
  hkTypeManager::Type::Self *v382;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v383;
  char v384;
  hkOArchive::Self *v385;
  hkOArchive::Self *v386;
  char v387;
  int v388;
  const char *v389;
  int v390;
  char v391;
  char v392;
  uint8_t v393;
  hkOArchive::Self *v394;
  hkOArchive::Self *v395;
  char v396;
  int v397;
  hkOArchive::Self *v399; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v400; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v401; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v402; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v403; // [esp+A0h] [ebp-C0h]
  uint8_t v404; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v405; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v406; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v407; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v408; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v409; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v410; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v411; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v412; // [esp+A0h] [ebp-C0h]
  char v413; // [esp+A0h] [ebp-C0h]
  char v414; // [esp+A0h] [ebp-C0h]
  uint8_t v415; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v416; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v417; // [esp+A0h] [ebp-C0h]
  uint8_t v418; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v419; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v420; // [esp+A0h] [ebp-C0h]
  uint8_t v421; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v422; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *v423; // [esp+A0h] [ebp-C0h]
  hkOArchive::Self *ii; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v425; // [esp+A4h] [ebp-BCh]
  uint8_t v426; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v427; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v428; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *j; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v430; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v431; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v432; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v433; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v434; // [esp+A4h] [ebp-BCh]
  uint8_t v435; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v436; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v437; // [esp+A4h] [ebp-BCh]
  hkOArchive::Self *v438; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *v439; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *v440; // [esp+A8h] [ebp-B8h]
  char v441; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *m; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *v443; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *v444; // [esp+A8h] [ebp-B8h]
  uint8_t v445; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *v446; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *v447; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *v448; // [esp+A8h] [ebp-B8h]
  uint8_t v449; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *v450; // [esp+A8h] [ebp-B8h]
  hkOArchive::Self *v451; // [esp+A8h] [ebp-B8h]
  char **v452; // [esp+ACh] [ebp-B4h]
  char **v453; // [esp+ACh] [ebp-B4h]
  char **v454; // [esp+ACh] [ebp-B4h]
  int v455; // [esp+ACh] [ebp-B4h]
  char *v456; // [esp+B0h] [ebp-B0h]
  uint64_t v457; // [esp+B0h] [ebp-B0h]
  int ( *v458)(int, int); // [esp+B0h] [ebp-B0h]
  hkOArchive::Self *v459; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v460; // [esp+B8h] [ebp-A8h]
  signed int v461; // [esp+B8h] [ebp-A8h]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v462; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v463; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v464; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v465; // [esp+B8h] [ebp-A8h]
  uint8_t v466; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v467; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v468; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v469; // [esp+B8h] [ebp-A8h]
  uint8_t v470; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v471; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v472; // [esp+B8h] [ebp-A8h]
  uint8_t v473; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v474; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v475; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v476; // [esp+B8h] [ebp-A8h]
  hkOArchive::Self *v478; // [esp+BCh] [ebp-A4h]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v479; // [esp+C0h] [ebp-A0h]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v480; // [esp+C0h] [ebp-A0h]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v481; // [esp+C0h] [ebp-A0h]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v482; // [esp+C0h] [ebp-A0h]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v483; // [esp+C0h] [ebp-A0h]
  hkMemoryAllocator::Self *v484; // [esp+C4h] [ebp-9Ch]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v485; // [esp+C4h] [ebp-9Ch]
  hkOArchive::Self *v486; // [esp+C8h] [ebp-98h]
  hkTypeManager::Type::Self *Type; // [esp+C8h] [ebp-98h]
  int v488; // [esp+C8h] [ebp-98h]
  hkDataObject_Value::Self *v489; // [esp+C8h] [ebp-98h]
  int v490; // [esp+C8h] [ebp-98h]
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v491; // [esp+C8h] [ebp-98h]
  hkString::Self *v492; // [esp+C8h] [ebp-98h]
  uint64_t v493; // [esp+C8h] [ebp-98h]
  uint64_t v494; // [esp+C8h] [ebp-98h]
  char **v495; // [esp+D0h] [ebp-90h] BYREF
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v496; // [esp+D4h] [ebp-8Ch]
  int v497[4]; // [esp+D8h] [ebp-88h] BYREF
  int v498[4]; // [esp+E8h] [ebp-78h] BYREF
  uint32_t v499[4]; // [esp+F8h] [ebp-68h] BYREF
  uint32_t v500[4];
  hkDataObject_Value::Self *v501[4];
  uint64_t v502;
  int v503;
  const char *v504[2];
  int *v505;
  int v506;
  hkMemoryAllocator::Self **v507;
  hkDataObject_Value::Self *v508;
  int v509;
  int v510; // [esp+15Ch] [ebp-4h]

  v507 = &a3;
  v484 = a3;
  v397 = a4;
  result = *(const char **)G4_VCALL<int>(*a2, 8);
  if ( result != (const char *)((uint8_t *)&loc_6 + 1) )
  {
    if ( (int)(uintptr_t)result > 7 )
    {
      if ( (int)(uintptr_t)result <= 9 )
      {
        result = (const char *)G4_VCALL<int>(*a2, 24);
        if ( (int)(uintptr_t)result > 0 )
        {
          v5 = nullptr;
          v479 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)result;
          do
          {
            v6 = G4_VCALL<int>(*a2, 96, v5);
            v504[0] = (const char *)v6;
            if ( v6 != 0 )
            {
              v7 = *(uint32_t *)(v6 + 4);
              ++*(uint32_t *)(v6 + 8);
              v8 = v7;
              LOWORD(v7) = 0;
              *(uint32_t *)(v6 + 4) = v7 | (uint16_t)(v8 + 1);
            }
            sub_18883F0(v484, v397);
            result = v504[0];
            if ( v504[0] != nullptr )
            {
              v9 = *((uint32_t *)v504[0] + 1);
              LOWORD(v9) = 0;
              v10 = v9 | (uint16_t)(*((uint32_t *)v504[0] + 1) - 1);
              v11 = *((uint32_t *)v504[0] + 2);
              *((uint32_t *)v504[0] + 1) = v10;
              *((uint32_t *)result + 2) = v11 - 1;
              if ( v11 == 1 )
                result = (const char *)G4_VCALL<int>(result, 4);
            }
            v5 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((char *)v5 + 1);
          }
          while ( v5 != v479 );
        }
      }
      return result;
    }
    if ( result != (const char *)&loc_6 )
      return result;
    v12 = G4_VCALL<int>(*a2, 28);
    v13 = 0;
    v497[0] = v12;
    if ( v12 != 0 )
    {
      v14 = (hkString::Self *)G4_VCALL<int>(v12, 12);
      v480 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 8);
      if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
             (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 8),
             v14,
             -1) < 0 )
      {
        v78 = G4_VCALL<int>(v497[0], 20);
        v498[0] = v78;
        v461 = 0;
        if ( v78 != 0 )
        {
          v79 = (hkString::Self *)G4_VCALL<int>(v78, 12);
          v461 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v480, v79, -1);
          if ( v461 < 0 )
          {
            v94 = 0;
            v95 = G4_VCALL<int>(v498[0], 20);
            v500[0] = v95;
            if ( v95 != 0 )
            {
              v96 = (hkString::Self *)G4_VCALL<int>(v95, 12);
              v94 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v480, v96, -1);
              if ( v94 < 0 )
              {
                v504[0] = (const char *)G4_VCALL<int>(v500[0], 20);
                v287 = sub_18876F0((int)(uintptr_t)a1, (uint32_t *)v504);
                v288 = (hkString::Self *)G4_VCALL<int>(v500[0], 12);
                v94 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v480, v288, -1);
                if ( v94 == -1 )
                {
                  v372 = (hkTypeManager::Type::Self *)a1[9];
                  v289 = (hkString::Self *)G4_VCALL<int>(v500[0], 12);
                  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                    v480,
                    v289,
                    (unsigned int)(uintptr_t)v372);
                  v476 = (hkOArchive::Self *)G4_VCALL<int>(v500[0], 28);
                  hkArray_hkDataClass_MemberInfo_h_3e2cfa::Construct((hkArray_Raw *)v504, (int)(uintptr_t)v476);
                  hkDataClass::getAllDeclaredMemberInfo(v500, v504);
                  hkOArchive::write8u((hkOArchive::Self *)a1, 4u);
                  v290 = (hkString::Self *)G4_VCALL<int>(v500[0], 12);
                  sub_18854F0(a1, v290);
                  v291 = G4_VCALL<int>(v500[0], 16);
                  sub_1885330((hkOArchive::Self *)a1, v291);
                  G4_VCALL<void>(v500[0], 16);
                  sub_1885330((hkOArchive::Self *)a1, v287);
                  sub_1885330((hkOArchive::Self *)a1, (int)(uintptr_t)v476);
                  v434 = nullptr;
                  v292 = (hkOArchive::Self *)a1;
                  v369 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 4);
                  if ( (int)(uintptr_t)v476 > 0 )
                  {
                    do
                    {
                      v444 = (hkOArchive::Self *)&v504[0][16 * (uint32_t)(uintptr_t)v434];
                      v293 = *(hkString::Self **)v444;
                      if ( *(uint32_t *)v444 != 0 )
                      {
                        v294 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                                 v369,
                                 v293,
                                 -1);
                        if ( v294 == -1 )
                        {
                          v328 = hkString::strLen(v293);
                          v368 = v328;
                          if ( v328 >> 31 < 0 )
                          {
                            v346 = -(int64_t)v328;
                            HIDWORD(v329) = v346 >> 31;
                            LODWORD(v329) = (2 * v346) | 1;
                          }
                          else
                          {
                            v329 = 2LL * v328;
                          }
                          v330 = v329;
                          v331 = v329 >> 7;
                          v415 = v330 & 0x7F;
                          if ( v331 != 0 )
                          {
                            v332 = v330 & 0x7F;
                            v367 = v293;
                            v416 = v292;
                            v333 = __PAIR64__(v331, HIDWORD(v331));
                            v334 = v416;
                            do
                            {
                              v417 = v334;
                              hkOArchive::write8u(v334, v332 | 0x80);
                              v335 = BYTE4(v333);
                              HIDWORD(v333) = __PAIR64__(v333, HIDWORD(v333)) >> 7;
                              LODWORD(v333) = (unsigned int)v333 >> 7;
                              v332 = v335 & 0x7F;
                              v334 = v417;
                            }
                            while ( v333 != 0 );
                            v293 = v367;
                            v415 = v332;
                            v292 = v334;
                          }
                          hkOArchive::write8u(v292, v415);
                          hkOArchive::writeRaw(v292, v293, v368);
                          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                            v369,
                            v293,
                            *((uint32_t *)v292 + 5) + 1);
                        }
                        else
                        {
                          v295 = -v294;
                          if ( v295 >> 31 < 0 )
                          {
                            v327 = -(int64_t)v295;
                            HIDWORD(v296) = v327 >> 31;
                            LODWORD(v296) = (2 * v327) | 1;
                          }
                          else
                          {
                            v296 = 2LL * v295;
                          }
                          v297 = v296;
                          v298 = v296 >> 7;
                          v299 = v297 & 0x7F;
                          if ( v298 != 0 )
                          {
                            v411 = v292;
                            v300 = __PAIR64__(v298, HIDWORD(v298));
                            v301 = v411;
                            do
                            {
                              v412 = v301;
                              hkOArchive::write8u(v301, v299 | 0x80);
                              v302 = BYTE4(v300);
                              v301 = v412;
                              HIDWORD(v300) = __PAIR64__(v300, HIDWORD(v300)) >> 7;
                              LODWORD(v300) = (unsigned int)v300 >> 7;
                              v299 = v302 & 0x7F;
                            }
                            while ( v300 != 0 );
                            v292 = v412;
                          }
                          hkOArchive::write8u(v292, v299);
                        }
                      }
                      else
                      {
                        hkOArchive::write8u(v292, 3u);
                      }
                      LOBYTE(v304) = hkTypeManager::getLegacyType(
                                       *((hkTypeManager::Type::Self ****)v444 + 2),
                                       (hkTypeManager::Type::Self *)v501,
                                       (const char **)&v502);
                      v305 = v304;
                      v306 = 2LL * v304;
                      v307 = v306;
                      v308 = v306 >> 7;
                      v445 = v307 & 0x7F;
                      if ( v308 != 0 )
                      {
                        v309 = v307 & 0x7F;
                        v413 = v305;
                        v446 = v292;
                        v310 = __PAIR64__(v308, HIDWORD(v308));
                        v311 = v446;
                        do
                        {
                          v447 = v311;
                          hkOArchive::write8u(v311, v309 | 0x80);
                          v312 = BYTE4(v310);
                          HIDWORD(v310) = __PAIR64__(v310, HIDWORD(v310)) >> 7;
                          LODWORD(v310) = (unsigned int)v310 >> 7;
                          v309 = v312 & 0x7F;
                          v311 = v447;
                        }
                        while ( v310 != 0 );
                        v305 = v413;
                        v445 = v309;
                        v292 = v311;
                      }
                      hkOArchive::write8u(v292, v445);
                      if ( (v305 & 0x20) != 0 )
                      {
                        if ( (int)v502 >> 31 < 0 )
                        {
                          HIDWORD(v320) = (uint64_t)(-2LL * (int)v502) >> 32;
                          LODWORD(v320) = (-2 * v502) | 1;
                        }
                        else
                        {
                          v320 = 2LL * (int)v502;
                        }
                        v321 = v320;
                        v322 = v320 >> 7;
                        v449 = v321 & 0x7F;
                        if ( v322 != 0 )
                        {
                          v323 = v321 & 0x7F;
                          v414 = v305;
                          v450 = v292;
                          v324 = __PAIR64__(v322, HIDWORD(v322));
                          v325 = v450;
                          do
                          {
                            v451 = v325;
                            hkOArchive::write8u(v325, v323 | 0x80);
                            v326 = BYTE4(v324);
                            HIDWORD(v324) = __PAIR64__(v324, HIDWORD(v324)) >> 7;
                            LODWORD(v324) = (unsigned int)v324 >> 7;
                            v323 = v326 & 0x7F;
                            v325 = v451;
                          }
                          while ( v324 != 0 );
                          v305 = v414;
                          v449 = v323;
                          v292 = v325;
                        }
                        hkOArchive::write8u(v292, v449);
                      }
                      if ( (v305 & 0xFu) - 8 <= 1 )
                      {
                        if ( v501[0] != nullptr )
                        {
                          v317 = G4_VCALL<int>(v500[0], 8);
                          v318 = G4_VCALL<int>(v317, 44, v501[0]);
                          v319 = (hkString::Self *)G4_VCALL<int>(v318, 12);
                          sub_18854F0((uint32_t *)(v292), v319);
                        }
                        else
                        {
                          sub_18854C0(v292);
                        }
                      }
                      v434 = (hkOArchive::Self *)((char *)v434 + 1);
                    }
                    while ( v434 != v476 );
                    for ( i = nullptr; i != v476; i = (hkOArchive::Self *)((char *)i + 1) )
                    {
                      Terminal = hkTypeManager::Type::findTerminal(*(hkTypeManager::Type::Self **)&v504[0][16 * (uint32_t)(uintptr_t)i + 8]);
                      if ( *(uint32_t *)Terminal == 6 )
                      {
                        v448 = (hkOArchive::Self *)(Terminal);
                        v315 = G4_VCALL<int>(v500[0], 8);
                        v458 = *(int ( **)(int, int))(*(uint32_t *)v315 + 44);
                        TypeName = hkTypeManager::Type::getTypeName((hkTypeManager::Type::Self *)(v448));
                        LODWORD(v502) = v458(v315, TypeName);
                        sub_18876F0((int)(uintptr_t)a1, (uint32_t *)v501);
                      }
                    }
                  }
                  hkArray_hkDataClass_MemberInfo_h_3e2cfa::clearAndDeallocate((hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator::Self> *)v504);
                  v94 = (int)(uintptr_t)v372;
                }
              }
            }
            v97 = (hkString::Self *)G4_VCALL<int>(v498[0], 12);
            v461 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v480, v97, -1);
            if ( v461 == -1 )
            {
              v461 = a1[9];
              v98 = (hkString::Self *)G4_VCALL<int>(v498[0], 12);
              hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v480, v98, v461);
              v439 = (hkOArchive::Self *)G4_VCALL<int>(v498[0], 28);
              hkArray_hkDataClass_MemberInfo_h_3e2cfa::Construct((hkArray_Raw *)&v502, (int)(uintptr_t)v439);
              hkDataClass::getAllDeclaredMemberInfo(v498, &v502);
              hkOArchive::write8u((hkOArchive::Self *)a1, 4u);
              v99 = (hkString::Self *)G4_VCALL<int>(v498[0], 12);
              sub_18854F0(a1, v99);
              v100 = G4_VCALL<int>(v498[0], 16);
              sub_1885330((hkOArchive::Self *)a1, v100);
              G4_VCALL<void>(v498[0], 16);
              sub_1885330((hkOArchive::Self *)a1, v94);
              sub_1885330((hkOArchive::Self *)a1, (int)(uintptr_t)v439);
              v400 = nullptr;
              v101 = (hkOArchive::Self *)a1;
              v379 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 4);
              if ( (int)(uintptr_t)v439 > 0 )
              {
                do
                {
                  v425 = (hkOArchive::Self *)(v502 + 16 * (uint32_t)(uintptr_t)v400);
                  v102 = *(hkString::Self **)v425;
                  if ( *(uint32_t *)v425 != 0 )
                  {
                    v103 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                             v379,
                             v102,
                             -1);
                    if ( v103 == -1 )
                    {
                      v279 = hkString::strLen(v102);
                      v378 = v279;
                      if ( v279 >> 31 < 0 )
                      {
                        v303 = -(int64_t)v279;
                        HIDWORD(v280) = v303 >> 31;
                        LODWORD(v280) = (2 * v303) | 1;
                      }
                      else
                      {
                        v280 = 2LL * v279;
                      }
                      v281 = v280;
                      v282 = v280 >> 7;
                      v393 = v281 & 0x7F;
                      if ( v282 != 0 )
                      {
                        v283 = v281 & 0x7F;
                        v371 = (hkTypeManager::Type::Self *)(v102);
                        v394 = v101;
                        v284 = __PAIR64__(v282, HIDWORD(v282));
                        v285 = v394;
                        do
                        {
                          v395 = v285;
                          hkOArchive::write8u(v285, v283 | 0x80);
                          v286 = BYTE4(v284);
                          HIDWORD(v284) = __PAIR64__(v284, HIDWORD(v284)) >> 7;
                          LODWORD(v284) = (unsigned int)v284 >> 7;
                          v283 = v286 & 0x7F;
                          v285 = v395;
                        }
                        while ( v284 != 0 );
                        v102 = (hkString::Self *)(v371);
                        v393 = v283;
                        v101 = v285;
                      }
                      hkOArchive::write8u(v101, v393);
                      hkOArchive::writeRaw(v101, v102, v378);
                      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                        v379,
                        v102,
                        *((uint32_t *)v101 + 5) + 1);
                    }
                    else
                    {
                      v104 = -v103;
                      if ( v104 >> 31 < 0 )
                      {
                        v278 = -(int64_t)v104;
                        HIDWORD(v105) = v278 >> 31;
                        LODWORD(v105) = (2 * v278) | 1;
                      }
                      else
                      {
                        v105 = 2LL * v104;
                      }
                      v106 = v105;
                      v107 = v105 >> 7;
                      v108 = v106 & 0x7F;
                      if ( v107 != 0 )
                      {
                        v385 = v101;
                        v109 = __PAIR64__(v107, HIDWORD(v107));
                        v110 = v385;
                        do
                        {
                          v386 = v110;
                          hkOArchive::write8u(v110, v108 | 0x80);
                          v111 = BYTE4(v109);
                          v110 = v386;
                          HIDWORD(v109) = __PAIR64__(v109, HIDWORD(v109)) >> 7;
                          LODWORD(v109) = (unsigned int)v109 >> 7;
                          v108 = v111 & 0x7F;
                        }
                        while ( v109 != 0 );
                        v101 = v386;
                      }
                      hkOArchive::write8u(v101, v108);
                    }
                  }
                  else
                  {
                    hkOArchive::write8u(v101, 3u);
                  }
                  LOBYTE(v112) = hkTypeManager::getLegacyType(
                                   *((hkTypeManager::Type::Self ****)v425 + 2),
                                   (hkTypeManager::Type::Self *)v501,
                                   v504);
                  v113 = v112;
                  v114 = 2LL * v112;
                  v115 = v114;
                  v116 = v114 >> 7;
                  v426 = v115 & 0x7F;
                  if ( v116 != 0 )
                  {
                    v117 = v115 & 0x7F;
                    v387 = v113;
                    v427 = v101;
                    v118 = __PAIR64__(v116, HIDWORD(v116));
                    v119 = v427;
                    do
                    {
                      v428 = v119;
                      hkOArchive::write8u(v119, v117 | 0x80);
                      v120 = BYTE4(v118);
                      HIDWORD(v118) = __PAIR64__(v118, HIDWORD(v118)) >> 7;
                      LODWORD(v118) = (unsigned int)v118 >> 7;
                      v117 = v120 & 0x7F;
                      v119 = v428;
                    }
                    while ( v118 != 0 );
                    v113 = v387;
                    v426 = v117;
                    v101 = v119;
                  }
                  hkOArchive::write8u(v101, v426);
                  if ( (v113 & 0x20) != 0 )
                  {
                    if ( (int)(uintptr_t)v504[0] >> 31 < 0 )
                    {
                      HIDWORD(v339) = (uint64_t)(-2LL * (int)(uintptr_t)v504[0]) >> 32;
                      LODWORD(v339) = (-2 * (int)(uintptr_t)v504[0]) | 1;
                    }
                    else
                    {
                      v339 = 2LL * (int)(uintptr_t)v504[0];
                    }
                    v340 = v339;
                    v341 = v339 >> 7;
                    v435 = v340 & 0x7F;
                    if ( v341 != 0 )
                    {
                      v342 = v340 & 0x7F;
                      v396 = v113;
                      v436 = v101;
                      v343 = __PAIR64__(v341, HIDWORD(v341));
                      v344 = v436;
                      do
                      {
                        v437 = v344;
                        hkOArchive::write8u(v344, v342 | 0x80);
                        v345 = BYTE4(v343);
                        HIDWORD(v343) = __PAIR64__(v343, HIDWORD(v343)) >> 7;
                        LODWORD(v343) = (unsigned int)v343 >> 7;
                        v342 = v345 & 0x7F;
                        v344 = v437;
                      }
                      while ( v343 != 0 );
                      v113 = v396;
                      v435 = v342;
                      v101 = v344;
                    }
                    hkOArchive::write8u(v101, v435);
                  }
                  if ( (v113 & 0xFu) - 8 <= 1 )
                  {
                    if ( v501[0] != nullptr )
                    {
                      v336 = G4_VCALL<int>(v498[0], 8);
                      v337 = G4_VCALL<int>(v336, 44, v501[0]);
                      v338 = (hkString::Self *)G4_VCALL<int>(v337, 12);
                      sub_18854F0((uint32_t *)(v101), v338);
                    }
                    else
                    {
                      sub_18854C0(v101);
                    }
                  }
                  v400 = (hkOArchive::Self *)((char *)v400 + 1);
                }
                while ( v400 != v439 );
                for ( j = nullptr; j != v439; j = (hkOArchive::Self *)((char *)j + 1) )
                {
                  v121 = hkTypeManager::Type::findTerminal(*(hkTypeManager::Type::Self **)(v502 + 16 * (uint32_t)(uintptr_t)j + 8));
                  if ( *(uint32_t *)v121 == 6 )
                  {
                    v122 = G4_VCALL<int>(v498[0], 8);
                    v401 = *(hkOArchive::Self **)(*(uint32_t *)v122 + 44);
                    v123 = hkTypeManager::Type::getTypeName(v121);
                    v124 = ((int ( *)(int, int))v401)(v122, v123);
                    v499[0] = v124;
                    if ( v124 != 0 )
                    {
                      v125 = (hkString::Self *)G4_VCALL<int>(v124, 12);
                      if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                             v480,
                             v125,
                             -1) < 0 )
                      {
                        v504[0] = (const char *)G4_VCALL<int>(v499[0], 20);
                        v126 = sub_18876F0((int)(uintptr_t)a1, (uint32_t *)v504);
                        v127 = (hkString::Self *)G4_VCALL<int>(v499[0], 12);
                        if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                               v480,
                               v127,
                               -1) == -1 )
                        {
                          v128 = a1[9];
                          v129 = (hkString::Self *)G4_VCALL<int>(v499[0], 12);
                          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v480, v129, v128);
                          v388 = G4_VCALL<int>(v499[0], 28);
                          hkArray_hkDataClass_MemberInfo_h_3e2cfa::Construct((hkArray_Raw *)v504, v388);
                          hkDataClass::getAllDeclaredMemberInfo(v499, v504);
                          hkOArchive::write8u((hkOArchive::Self *)a1, 4u);
                          v130 = (hkString::Self *)G4_VCALL<int>(v499[0], 12);
                          sub_18854F0(a1, v130);
                          v131 = G4_VCALL<int>(v499[0], 16);
                          sub_1885330((hkOArchive::Self *)a1, v131);
                          G4_VCALL<void>(v499[0], 16);
                          sub_1885330((hkOArchive::Self *)a1, v126);
                          sub_1885330((hkOArchive::Self *)a1, v388);
                          v376 = 0;
                          v132 = (hkOArchive::Self *)a1;
                          v375 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 4);
                          if ( v388 > 0 )
                          {
                            do
                            {
                              v380 = &v504[0][16 * v376];
                              v133 = *(hkString::Self **)v380;
                              if ( *(uint32_t *)v380 != 0 )
                              {
                                v134 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                                         v375,
                                         v133,
                                         -1);
                                if ( v134 == -1 )
                                {
                                  v348 = hkString::strLen(v133);
                                  v374 = v348;
                                  if ( v348 >> 31 < 0 )
                                  {
                                    v366 = -(int64_t)v348;
                                    HIDWORD(v349) = v366 >> 31;
                                    LODWORD(v349) = (2 * v366) | 1;
                                  }
                                  else
                                  {
                                    v349 = 2LL * v348;
                                  }
                                  v350 = v349;
                                  v351 = v349 >> 7;
                                  v418 = v350 & 0x7F;
                                  if ( v351 != 0 )
                                  {
                                    v352 = v350 & 0x7F;
                                    v370 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v133);
                                    v419 = v132;
                                    v353 = __PAIR64__(v351, HIDWORD(v351));
                                    v354 = v419;
                                    do
                                    {
                                      v420 = v354;
                                      hkOArchive::write8u(v354, v352 | 0x80);
                                      v355 = BYTE4(v353);
                                      HIDWORD(v353) = __PAIR64__(v353, HIDWORD(v353)) >> 7;
                                      LODWORD(v353) = (unsigned int)v353 >> 7;
                                      v352 = v355 & 0x7F;
                                      v354 = v420;
                                    }
                                    while ( v353 != 0 );
                                    v418 = v352;
                                    v133 = (hkString::Self *)(v370);
                                    v132 = v354;
                                  }
                                  hkOArchive::write8u(v132, v418);
                                  hkOArchive::writeRaw(v132, v133, v374);
                                  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                                    v375,
                                    v133,
                                    *((uint32_t *)v132 + 5) + 1);
                                }
                                else
                                {
                                  v135 = -v134;
                                  if ( v135 >> 31 < 0 )
                                  {
                                    v347 = -(int64_t)v135;
                                    HIDWORD(v136) = v347 >> 31;
                                    LODWORD(v136) = (2 * v347) | 1;
                                  }
                                  else
                                  {
                                    v136 = 2LL * v135;
                                  }
                                  v137 = v136;
                                  v138 = v136 >> 7;
                                  v139 = v137 & 0x7F;
                                  if ( v138 != 0 )
                                  {
                                    v402 = v132;
                                    v140 = __PAIR64__(v138, HIDWORD(v138));
                                    v141 = v402;
                                    do
                                    {
                                      v403 = v141;
                                      hkOArchive::write8u(v141, v139 | 0x80);
                                      v142 = BYTE4(v140);
                                      v141 = v403;
                                      HIDWORD(v140) = __PAIR64__(v140, HIDWORD(v140)) >> 7;
                                      LODWORD(v140) = (unsigned int)v140 >> 7;
                                      v139 = v142 & 0x7F;
                                    }
                                    while ( v140 != 0 );
                                    v132 = v403;
                                  }
                                  hkOArchive::write8u(v132, v139);
                                }
                              }
                              else
                              {
                                hkOArchive::write8u(v132, 3u);
                              }
                              LOBYTE(v143) = hkTypeManager::getLegacyType(
                                               *((hkTypeManager::Type::Self ****)v380 + 2),
                                               (hkTypeManager::Type::Self *)v500,
                                               (const char **)v501);
                              v144 = v143;
                              v145 = 2LL * v143;
                              v146 = v145;
                              v147 = v145 >> 7;
                              v404 = v146 & 0x7F;
                              if ( v147 != 0 )
                              {
                                v148 = v146 & 0x7F;
                                v381 = v144;
                                v405 = v132;
                                v149 = __PAIR64__(v147, HIDWORD(v147));
                                v150 = v405;
                                do
                                {
                                  v406 = v150;
                                  hkOArchive::write8u(v150, v148 | 0x80);
                                  v151 = BYTE4(v149);
                                  HIDWORD(v149) = __PAIR64__(v149, HIDWORD(v149)) >> 7;
                                  LODWORD(v149) = (unsigned int)v149 >> 7;
                                  v148 = v151 & 0x7F;
                                  v150 = v406;
                                }
                                while ( v149 != 0 );
                                v404 = v148;
                                v144 = v381;
                                v132 = v150;
                              }
                              hkOArchive::write8u(v132, v404);
                              if ( (v144 & 0x20) != 0 )
                              {
                                if ( (int)(uintptr_t)v501[0] >> 31 < 0 )
                                {
                                  HIDWORD(v359) = (uint64_t)(-2LL * (int)(uintptr_t)v501[0]) >> 32;
                                  LODWORD(v359) = (-2 * (int)(uintptr_t)v501[0]) | 1;
                                }
                                else
                                {
                                  v359 = 2LL * (int)(uintptr_t)v501[0];
                                }
                                v360 = v359;
                                v361 = v359 >> 7;
                                v421 = v360 & 0x7F;
                                if ( v361 != 0 )
                                {
                                  v362 = v360 & 0x7F;
                                  v384 = v144;
                                  v422 = v132;
                                  v363 = __PAIR64__(v361, HIDWORD(v361));
                                  v364 = v422;
                                  do
                                  {
                                    v423 = v364;
                                    hkOArchive::write8u(v364, v362 | 0x80);
                                    v365 = BYTE4(v363);
                                    HIDWORD(v363) = __PAIR64__(v363, HIDWORD(v363)) >> 7;
                                    LODWORD(v363) = (unsigned int)v363 >> 7;
                                    v362 = v365 & 0x7F;
                                    v364 = v423;
                                  }
                                  while ( v363 != 0 );
                                  v144 = v384;
                                  v421 = v362;
                                  v132 = v364;
                                }
                                hkOArchive::write8u(v132, v421);
                              }
                              if ( (v144 & 0xFu) - 8 <= 1 )
                              {
                                if ( v500[0] != 0 )
                                {
                                  v356 = G4_VCALL<int>(v499[0], 8);
                                  v357 = G4_VCALL<int>(v356, 44, v500[0]);
                                  v358 = (hkString::Self *)G4_VCALL<int>(v357, 12);
                                  sub_18854F0((uint32_t *)(v132), v358);
                                }
                                else
                                {
                                  sub_18854C0(v132);
                                }
                              }
                              ++v376;
                            }
                            while ( v376 != v388 );
                            for ( k = 0; k != v388; ++k )
                            {
                              v153 = hkTypeManager::Type::findTerminal(*(hkTypeManager::Type::Self **)&v504[0][16 * k + 8]);
                              if ( *(uint32_t *)v153 == 6 )
                              {
                                v382 = v153;
                                v154 = G4_VCALL<int>(v499[0], 8);
                                v407 = *(hkOArchive::Self **)(*(uint32_t *)v154 + 44);
                                v155 = hkTypeManager::Type::getTypeName(v382);
                                v501[0] = (hkDataObject_Value::Self *)((int ( *)(int, int))v407)(v154, v155);
                                sub_18876F0((int)(uintptr_t)a1, (uint32_t *)v501);
                              }
                            }
                          }
                          hkArray_hkDataClass_MemberInfo_h_3e2cfa::clearAndDeallocate((hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator::Self> *)v504);
                        }
                      }
                    }
                  }
                }
              }
              hkArray_hkDataClass_MemberInfo_h_3e2cfa::clearAndDeallocate((hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator::Self> *)&v502);
            }
          }
        }
        v80 = (hkString::Self *)G4_VCALL<int>(v497[0], 12);
        if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v480, v80, -1) == -1 )
        {
          v81 = a1[9];
          v82 = (hkString::Self *)G4_VCALL<int>(v497[0], 12);
          hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v480, v82, v81);
          v83 = G4_VCALL<int>(v497[0], 28);
          v455 = v83;
          v84 = 0;
          v502 = 0;
          v503 = 0x80000000;
          if ( v83 == 0
            || (v504[0] = (const char *)(16 * v83),
                v84 = (*(int ( **)(uint32_t *, const char **))(hkContainerTempAllocator::s_alloc[0] + 16))(
                        (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
                        v504),
                v85 = (int)(uintptr_t)v504[0] / 16,
                (int)(uintptr_t)v504[0] / 16 == 0) )
          {
            v85 = 0x80000000;
          }
          v503 = v85;
          v86 = 0;
          v502 = __PAIR64__(v83, v84);
          if ( v83 > 0 )
          {
            do
            {
              *(__m128i *)(v84 + v86) = __m128i{};
              v86 += 16;
            }
            while ( v86 != 16 * v83 );
          }
          hkDataClass::getAllDeclaredMemberInfo(v497, &v502);
          hkOArchive::write8u((hkOArchive::Self *)a1, 4u);
          v87 = (hkString::Self *)G4_VCALL<int>(v497[0], 12);
          v492 = v87;
          if ( v87 != nullptr )
          {
            v88 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                    (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 4),
                    v87,
                    -1);
            if ( v88 == -1 )
            {
              LODWORD(v261) = hkString::strLen(v492);
              v262 = 2LL * (int)v261;
              HIDWORD(v261) = HIDWORD(v262);
              v433 = (hkOArchive::Self *)v261;
              v457 = 2 * v261;
              if ( v262 < 0 )
                v457 = (-2 * v261) | 1;
              v263 = v457 & 0x7F;
              if ( v457 >> 7 != 0 )
              {
                v264 = v457 >> 7;
                do
                {
                  hkOArchive::write8u((hkOArchive::Self *)a1, v263 | 0x80);
                  LODWORD(v265) = HIDWORD(v264) >> 7;
                  v263 = v264 & 0x7F;
                  v264 >>= 7;
                  HIDWORD(v265) = v264;
                }
                while ( v265 != 0 );
              }
              hkOArchive::write8u((hkOArchive::Self *)a1, v263);
              hkOArchive::writeRaw((hkOArchive::Self *)a1, v492, (int)(uintptr_t)v433);
              hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 4),
                v492,
                a1[5] + 1);
            }
            else
            {
              LODWORD(v89) = -v88;
              v90 = 2LL * (int)v89;
              HIDWORD(v89) = HIDWORD(v90);
              v493 = 2 * v89;
              if ( v90 < 0 )
                v493 = (-2 * v89) | 1;
              v91 = v493 & 0x7F;
              if ( v493 >> 7 != 0 )
              {
                v92 = v493 >> 7;
                do
                {
                  hkOArchive::write8u((hkOArchive::Self *)a1, v91 | 0x80);
                  LODWORD(v93) = HIDWORD(v92) >> 7;
                  v91 = v92 & 0x7F;
                  v92 >>= 7;
                  HIDWORD(v93) = v92;
                }
                while ( v93 != 0 );
              }
              hkOArchive::write8u((hkOArchive::Self *)a1, v91);
            }
          }
          else
          {
            hkOArchive::write8u((hkOArchive::Self *)a1, 3u);
          }
          LODWORD(v156) = G4_VCALL<int>(v497[0], 16);
          v157 = 2LL * (int)v156;
          HIDWORD(v156) = HIDWORD(v157);
          v494 = 2 * v156;
          if ( v157 < 0 )
            v494 = (-2 * v156) | 1;
          v158 = v494 & 0x7F;
          if ( v494 >> 7 != 0 )
          {
            v159 = v494 >> 7;
            do
            {
              hkOArchive::write8u((hkOArchive::Self *)a1, v158 | 0x80);
              LODWORD(v160) = HIDWORD(v159) >> 7;
              v158 = v159 & 0x7F;
              v159 >>= 7;
              HIDWORD(v160) = v159;
            }
            while ( v160 != 0 );
          }
          hkOArchive::write8u((hkOArchive::Self *)a1, v158);
          G4_VCALL<void>(v497[0], 16);
          LODWORD(v161) = v461;
          v163 = 2LL * v461;
          HIDWORD(v161) = HIDWORD(v163);
          v162 = v163;
          v164 = __PAIR64__(HIDWORD(v163), v461) >> 31;
          if ( v163 < 0 )
          {
            v276 = -2 * v161;
            v164 = HIDWORD(v276);
            v162 = v276 | 1;
          }
          v165 = v162 & 0x7F;
          if ( __PAIR64__(v164, v162) >> 7 != 0 )
          {
            v166 = __PAIR64__(v164, v162) >> 7;
            do
            {
              hkOArchive::write8u((hkOArchive::Self *)a1, v165 | 0x80);
              LODWORD(v167) = HIDWORD(v166) >> 7;
              v165 = v166 & 0x7F;
              v166 >>= 7;
              HIDWORD(v167) = v166;
            }
            while ( v167 != 0 );
          }
          hkOArchive::write8u((hkOArchive::Self *)a1, v165);
          if ( v455 >> 31 < 0 )
          {
            v169 = (uint64_t)(-2LL * v455) >> 32;
            v168 = (-2 * v455) | 1;
          }
          else
          {
            v168 = 2 * v455;
            v169 = (uint64_t)v455 >> 31;
          }
          v170 = __PAIR64__(v169, v168);
          v171 = v170;
          v172 = v170 >> 7;
          v173 = v171 & 0x7F;
          if ( v172 != 0 )
          {
            v174 = v172;
            do
            {
              hkOArchive::write8u((hkOArchive::Self *)a1, v173 | 0x80);
              LODWORD(v175) = HIDWORD(v174) >> 7;
              v173 = v174 & 0x7F;
              v174 >>= 7;
              HIDWORD(v175) = v174;
            }
            while ( v175 != 0 );
          }
          hkOArchive::write8u((hkOArchive::Self *)a1, v173);
          v430 = nullptr;
          v462 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 4);
          if ( v455 > 0 )
          {
            do
            {
              v440 = (hkOArchive::Self *)(v502 + 16 * (uint32_t)(uintptr_t)v430);
              v176 = *(hkString::Self **)v440;
              if ( *(uint32_t *)v440 != 0 )
              {
                v177 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v462, v176, -1);
                if ( v177 == -1 )
                {
                  v223 = hkString::strLen(v176);
                  v390 = v223;
                  if ( v223 >> 31 < 0 )
                  {
                    v250 = -(int64_t)v223;
                    HIDWORD(v224) = v250 >> 31;
                    LODWORD(v224) = (2 * v250) | 1;
                  }
                  else
                  {
                    v224 = 2LL * v223;
                  }
                  v225 = v224;
                  v226 = v224 >> 7;
                  v227 = v225 & 0x7F;
                  if ( v226 != 0 )
                  {
                    v409 = (hkOArchive::Self *)(v176);
                    v228 = __PAIR64__(v226, HIDWORD(v226));
                    do
                    {
                      hkOArchive::write8u((hkOArchive::Self *)a1, v227 | 0x80);
                      v229 = BYTE4(v228);
                      HIDWORD(v228) = __PAIR64__(v228, HIDWORD(v228)) >> 7;
                      LODWORD(v228) = (unsigned int)v228 >> 7;
                      v227 = v229 & 0x7F;
                    }
                    while ( v228 != 0 );
                    v176 = (hkString::Self *)(v409);
                  }
                  hkOArchive::write8u((hkOArchive::Self *)a1, v227);
                  hkOArchive::writeRaw((hkOArchive::Self *)a1, v176, v390);
                  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v462, v176, a1[5] + 1);
                }
                else
                {
                  v178 = -v177;
                  if ( v178 >> 31 < 0 )
                    v179 = (-2LL * v178) | 1;
                  else
                    v179 = 2LL * v178;
                  while ( 1 )
                  {
                    LODWORD(v180) = HIDWORD(v179) >> 7;
                    v181 = v179 & 0x7F;
                    v179 >>= 7;
                    HIDWORD(v180) = v179;
                    if ( v180 == 0 )
                      break;
                    hkOArchive::write8u((hkOArchive::Self *)a1, v181 | 0x80);
                  }
                  hkOArchive::write8u((hkOArchive::Self *)a1, v181);
                }
              }
              else
              {
                hkOArchive::write8u((hkOArchive::Self *)a1, 3u);
              }
              LOBYTE(v182) = hkTypeManager::getLegacyType(
                               *((hkTypeManager::Type::Self ****)v440 + 2),
                               (hkTypeManager::Type::Self *)v501,
                               v504);
              v441 = v182;
              HIDWORD(v183) = (2 * (uint64_t)v182) >> 7;
              LODWORD(v183) = 0;
              v184 = (2 * v182) & 0x7F;
              if ( v183 != 0 )
              {
                v185 = v184;
                do
                {
                  hkOArchive::write8u((hkOArchive::Self *)a1, v185 | 0x80);
                  v186 = BYTE4(v183);
                  HIDWORD(v183) = __PAIR64__(v183, HIDWORD(v183)) >> 7;
                  LODWORD(v183) = (unsigned int)v183 >> 7;
                  v185 = v186 & 0x7F;
                }
                while ( v183 != 0 );
                v184 = v185;
              }
              hkOArchive::write8u((hkOArchive::Self *)a1, v184);
              if ( (v441 & 0x20) != 0 )
              {
                if ( (int)(uintptr_t)v504[0] >> 31 < 0 )
                  v218 = (-2LL * (int)(uintptr_t)v504[0]) | 1;
                else
                  v218 = 2LL * (int)(uintptr_t)v504[0];
                HIDWORD(v219) = v218 >> 7;
                LODWORD(v219) = HIDWORD(v218) >> 7;
                v220 = v218 & 0x7F;
                if ( v219 != 0 )
                {
                  v221 = v218 & 0x7F;
                  do
                  {
                    hkOArchive::write8u((hkOArchive::Self *)a1, v221 | 0x80);
                    v222 = BYTE4(v219);
                    HIDWORD(v219) = __PAIR64__(v219, HIDWORD(v219)) >> 7;
                    LODWORD(v219) = (unsigned int)v219 >> 7;
                    v221 = v222 & 0x7F;
                  }
                  while ( v219 != 0 );
                  v220 = v221;
                }
                hkOArchive::write8u((hkOArchive::Self *)a1, v220);
              }
              if ( (v441 & 0xFu) - 8 <= 1 )
              {
                if ( v501[0] != nullptr )
                {
                  v209 = G4_VCALL<int>(v497[0], 8);
                  v210 = G4_VCALL<int>(v209, 44, v501[0]);
                  v211 = (hkString::Self *)G4_VCALL<int>(v210, 12);
                  v212 = v211;
                  if ( v211 != nullptr )
                  {
                    v213 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                             v462,
                             v211,
                             -1);
                    if ( v213 == -1 )
                    {
                      v243 = hkString::strLen(v212);
                      v443 = (hkOArchive::Self *)v243;
                      if ( v243 >> 31 < 0 )
                      {
                        v266 = -(int64_t)v243;
                        HIDWORD(v244) = v266 >> 31;
                        LODWORD(v244) = (2 * v266) | 1;
                      }
                      else
                      {
                        v244 = 2LL * v243;
                      }
                      v245 = v244;
                      v246 = v244 >> 7;
                      v247 = v245 & 0x7F;
                      if ( v246 != 0 )
                      {
                        v410 = (hkOArchive::Self *)(v212);
                        v248 = __PAIR64__(v246, HIDWORD(v246));
                        do
                        {
                          hkOArchive::write8u((hkOArchive::Self *)a1, v247 | 0x80);
                          v249 = BYTE4(v248);
                          HIDWORD(v248) = __PAIR64__(v248, HIDWORD(v248)) >> 7;
                          LODWORD(v248) = (unsigned int)v248 >> 7;
                          v247 = v249 & 0x7F;
                        }
                        while ( v248 != 0 );
                        v212 = (hkString::Self *)(v410);
                      }
                      hkOArchive::write8u((hkOArchive::Self *)a1, v247);
                      hkOArchive::writeRaw((hkOArchive::Self *)a1, v212, (int)(uintptr_t)v443);
                      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v462, v212, a1[5] + 1);
                    }
                    else
                    {
                      v214 = -v213;
                      if ( v214 >> 31 < 0 )
                        v215 = (-2LL * v214) | 1;
                      else
                        v215 = 2LL * v214;
                      while ( 1 )
                      {
                        LODWORD(v216) = HIDWORD(v215) >> 7;
                        v217 = v215 & 0x7F;
                        v215 >>= 7;
                        HIDWORD(v216) = v215;
                        if ( v216 == 0 )
                          break;
                        hkOArchive::write8u((hkOArchive::Self *)a1, v217 | 0x80);
                      }
                      hkOArchive::write8u((hkOArchive::Self *)a1, v217);
                    }
                  }
                  else
                  {
                    hkOArchive::write8u((hkOArchive::Self *)a1, 3u);
                  }
                }
                else
                {
                  sub_18854C0((hkOArchive::Self *)a1);
                }
              }
              v430 = (hkOArchive::Self *)((char *)v430 + 1);
            }
            while ( v430 != (hkOArchive::Self *)v455 );
            for ( m = nullptr; m != (hkOArchive::Self *)v455; m = (hkOArchive::Self *)((char *)m + 1) )
            {
              v187 = hkTypeManager::Type::findTerminal(*(hkTypeManager::Type::Self **)(v502 + 16 * (uint32_t)(uintptr_t)m + 8));
              if ( *(uint32_t *)v187 == 6 )
              {
                v188 = G4_VCALL<int>(v497[0], 8);
                v463 = *(hkOArchive::Self **)(*(uint32_t *)v188 + 44);
                v189 = hkTypeManager::Type::getTypeName(v187);
                v190 = ((int ( *)(int, int))v463)(v188, v189);
                v499[0] = v190;
                if ( v190 != 0 )
                {
                  v191 = (hkString::Self *)G4_VCALL<int>(v190, 12);
                  if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v480, v191, -1) < 0 )
                  {
                    v504[0] = (const char *)G4_VCALL<int>(v499[0], 20);
                    v192 = sub_18876F0((int)(uintptr_t)a1, (uint32_t *)v504);
                    v193 = (hkString::Self *)G4_VCALL<int>(v499[0], 12);
                    if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v480, v193, -1) == -1 )
                    {
                      v194 = a1[9];
                      v195 = (hkString::Self *)G4_VCALL<int>(v499[0], 12);
                      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v480, v195, v194);
                      v408 = (hkOArchive::Self *)G4_VCALL<int>(v499[0], 28);
                      hkArray_hkDataClass_MemberInfo_h_3e2cfa::Construct((hkArray_Raw *)v504, (int)(uintptr_t)v408);
                      hkDataClass::getAllDeclaredMemberInfo(v499, v504);
                      hkOArchive::write8u((hkOArchive::Self *)a1, 4u);
                      v196 = (hkString::Self *)G4_VCALL<int>(v499[0], 12);
                      sub_18854F0(a1, v196);
                      v197 = G4_VCALL<int>(v499[0], 16);
                      sub_1885330((hkOArchive::Self *)a1, v197);
                      G4_VCALL<void>(v499[0], 16);
                      sub_1885330((hkOArchive::Self *)a1, v192);
                      sub_1885330((hkOArchive::Self *)a1, (int)(uintptr_t)v408);
                      v431 = nullptr;
                      v198 = (hkOArchive::Self *)a1;
                      v383 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 4);
                      if ( (int)(uintptr_t)v408 > 0 )
                      {
                        do
                        {
                          v389 = &v504[0][16 * (uint32_t)(uintptr_t)v431];
                          v199 = *(hkString::Self **)v389;
                          if ( *(uint32_t *)v389 != 0 )
                          {
                            v200 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                                     v383,
                                     v199,
                                     -1);
                            if ( v200 == -1 )
                            {
                              v268 = hkString::strLen(v199);
                              v377 = v268;
                              if ( v268 >> 31 < 0 )
                              {
                                v277 = -(int64_t)v268;
                                HIDWORD(v269) = v277 >> 31;
                                LODWORD(v269) = (2 * v277) | 1;
                              }
                              else
                              {
                                v269 = 2LL * v268;
                              }
                              v270 = v269;
                              v271 = v269 >> 7;
                              v473 = v270 & 0x7F;
                              if ( v271 != 0 )
                              {
                                v272 = v270 & 0x7F;
                                v373 = v199;
                                v474 = v198;
                                v273 = __PAIR64__(v271, HIDWORD(v271));
                                v274 = v474;
                                do
                                {
                                  v475 = v274;
                                  hkOArchive::write8u(v274, v272 | 0x80);
                                  v275 = BYTE4(v273);
                                  HIDWORD(v273) = __PAIR64__(v273, HIDWORD(v273)) >> 7;
                                  LODWORD(v273) = (unsigned int)v273 >> 7;
                                  v272 = v275 & 0x7F;
                                  v274 = v475;
                                }
                                while ( v273 != 0 );
                                v473 = v272;
                                v199 = v373;
                                v198 = v274;
                              }
                              hkOArchive::write8u(v198, v473);
                              hkOArchive::writeRaw(v198, v199, v377);
                              hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
                                v383,
                                v199,
                                *((uint32_t *)v198 + 5) + 1);
                            }
                            else
                            {
                              v201 = -v200;
                              if ( v201 >> 31 < 0 )
                              {
                                v267 = -(int64_t)v201;
                                HIDWORD(v202) = v267 >> 31;
                                LODWORD(v202) = (2 * v267) | 1;
                              }
                              else
                              {
                                v202 = 2LL * v201;
                              }
                              v203 = v202;
                              v204 = v202 >> 7;
                              v205 = v203 & 0x7F;
                              if ( v204 != 0 )
                              {
                                v464 = v198;
                                v206 = __PAIR64__(v204, HIDWORD(v204));
                                v207 = v464;
                                do
                                {
                                  v465 = v207;
                                  hkOArchive::write8u(v207, v205 | 0x80);
                                  v208 = BYTE4(v206);
                                  v207 = v465;
                                  HIDWORD(v206) = __PAIR64__(v206, HIDWORD(v206)) >> 7;
                                  LODWORD(v206) = (unsigned int)v206 >> 7;
                                  v205 = v208 & 0x7F;
                                }
                                while ( v206 != 0 );
                                v198 = v465;
                              }
                              hkOArchive::write8u(v198, v205);
                            }
                          }
                          else
                          {
                            hkOArchive::write8u(v198, 3u);
                          }
                          LOBYTE(v230) = hkTypeManager::getLegacyType(
                                           *((hkTypeManager::Type::Self ****)v389 + 2),
                                           (hkTypeManager::Type::Self *)v500,
                                           (const char **)v501);
                          v231 = v230;
                          v232 = 2LL * v230;
                          v233 = v232;
                          v234 = v232 >> 7;
                          v466 = v233 & 0x7F;
                          if ( v234 != 0 )
                          {
                            v235 = v233 & 0x7F;
                            v391 = v231;
                            v467 = v198;
                            v236 = __PAIR64__(v234, HIDWORD(v234));
                            v237 = v467;
                            do
                            {
                              v468 = v237;
                              hkOArchive::write8u(v237, v235 | 0x80);
                              v238 = BYTE4(v236);
                              HIDWORD(v236) = __PAIR64__(v236, HIDWORD(v236)) >> 7;
                              LODWORD(v236) = (unsigned int)v236 >> 7;
                              v235 = v238 & 0x7F;
                              v237 = v468;
                            }
                            while ( v236 != 0 );
                            v466 = v235;
                            v231 = v391;
                            v198 = v237;
                          }
                          hkOArchive::write8u(v198, v466);
                          if ( (v231 & 0x20) != 0 )
                          {
                            if ( (int)(uintptr_t)v501[0] >> 31 < 0 )
                            {
                              HIDWORD(v254) = (uint64_t)(-2LL * (int)(uintptr_t)v501[0]) >> 32;
                              LODWORD(v254) = (-2 * (int)(uintptr_t)v501[0]) | 1;
                            }
                            else
                            {
                              v254 = 2LL * (int)(uintptr_t)v501[0];
                            }
                            v255 = v254;
                            v256 = v254 >> 7;
                            v470 = v255 & 0x7F;
                            if ( v256 != 0 )
                            {
                              v257 = v255 & 0x7F;
                              v392 = v231;
                              v471 = v198;
                              v258 = __PAIR64__(v256, HIDWORD(v256));
                              v259 = v471;
                              do
                              {
                                v472 = v259;
                                hkOArchive::write8u(v259, v257 | 0x80);
                                v260 = BYTE4(v258);
                                HIDWORD(v258) = __PAIR64__(v258, HIDWORD(v258)) >> 7;
                                LODWORD(v258) = (unsigned int)v258 >> 7;
                                v257 = v260 & 0x7F;
                                v259 = v472;
                              }
                              while ( v258 != 0 );
                              v470 = v257;
                              v231 = v392;
                              v198 = v259;
                            }
                            hkOArchive::write8u(v198, v470);
                          }
                          if ( (v231 & 0xFu) - 8 <= 1 )
                          {
                            if ( v500[0] != 0 )
                            {
                              v251 = G4_VCALL<int>(v499[0], 8);
                              v252 = G4_VCALL<int>(v251, 44, v500[0]);
                              v253 = (hkString::Self *)G4_VCALL<int>(v252, 12);
                              sub_18854F0((uint32_t *)(v198), v253);
                            }
                            else
                            {
                              sub_18854C0(v198);
                            }
                          }
                          v431 = (hkOArchive::Self *)((char *)v431 + 1);
                        }
                        while ( v431 != v408 );
                        for ( n = nullptr; n != v408; n = (hkOArchive::Self *)((char *)n + 1) )
                        {
                          v240 = hkTypeManager::Type::findTerminal(*(hkTypeManager::Type::Self **)&v504[0][16 * (uint32_t)(uintptr_t)n + 8]);
                          if ( *(uint32_t *)v240 == 6 )
                          {
                            v432 = (hkOArchive::Self *)(v240);
                            v241 = G4_VCALL<int>(v499[0], 8);
                            v469 = *(hkOArchive::Self **)(*(uint32_t *)v241 + 44);
                            v242 = hkTypeManager::Type::getTypeName((hkTypeManager::Type::Self *)(v432));
                            v501[0] = (hkDataObject_Value::Self *)((int ( *)(int, int))v469)(v241, v242);
                            sub_18876F0((int)(uintptr_t)a1, (uint32_t *)v501);
                          }
                        }
                      }
                      hkArray_hkDataClass_MemberInfo_h_3e2cfa::clearAndDeallocate((hkArray<hkDataClass_MemberInfo, hkContainerTempAllocator::Self> *)v504);
                    }
                  }
                }
              }
            }
          }
          HIDWORD(v502) = 0;
          if ( v503 >= 0 )
            (*(void ( **)(uint32_t *, uint32_t, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
              (uint32_t *)(uintptr_t)(hkContainerTempAllocator::s_alloc),
              v502,
              16 * v503);
        }
      }
      v13 = v497[0];
    }
    for ( ii = nullptr; ; ii = (hkOArchive::Self *)((char *)ii + 1) )
    {
      result = (const char *)G4_VCALL<int>(v13, 40);
      if ( (int)(uintptr_t)ii >= (int)(uintptr_t)result )
        return result;
      v504[0] = nullptr;
      v504[1] = nullptr;
      v505 = nullptr;
      v506 = 0;
      G4_VCALL<void>(v497[0], 44, ii, v504);
      v15 = *v505;
      if ( *v505 == 7 )
      {
        v16 = G4_VCALL<int>(*a2, 44, v504[0]);
        v17 = (uint32_t *)v16;
        if ( v16 != 0 )
        {
          v18 = *(uint32_t *)(v16 + 4);
          ++*(uint32_t *)(v16 + 8);
          v19 = v18;
          LOWORD(v18) = 0;
          v17[1] = v18 | (uint16_t)(v19 + 1);
        }
        v459 = (hkOArchive::Self *)G4_VCALL<int>(v17, 24);
        v486 = nullptr;
        if ( (int)(uintptr_t)v459 > 0 )
        {
          do
          {
            v24 = G4_VCALL<int>(v17, 88, v486);
            v25 = (hkDataObject_Value::Self *)v24;
            if ( v24 != 0 )
            {
              v26 = *(uint32_t *)(v24 + 4);
              ++*(uint32_t *)(v24 + 8);
              v27 = v26;
              LOWORD(v26) = 0;
              *((uint32_t *)v25 + 1) = v26 | (uint16_t)(v27 + 1);
              v28 = *(uint32_t *)v25;
              v508 = v25;
              (*(void ( **)(char ***))(v28 + 8))(&v495);
              v29 = v495;
              v481 = v496;
            }
            else
            {
              v481 = nullptr;
              v29 = nullptr;
            }
            v30 = *((uint32_t *)v484 + 1);
            if ( v30 == (*((uint32_t *)v484 + 2) & 0x3FFFFFFF) )
            {
              v452 = v29;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, v484, 12, v510);
              v30 = *((uint32_t *)v484 + 1);
              v29 = v452;
            }
            *((uint32_t *)v484 + 1) = v30 + 1;
            v20 = (char ***)(*(uint32_t *)v484 + 12 * v30);
            *v20 = v29;
            v20[1] = (char **)v481;
            v20[2] = nullptr;
            if ( v25 != nullptr )
            {
              v21 = *((uint32_t *)v25 + 1);
              LOWORD(v21) = 0;
              v22 = v21 | (uint16_t)(*((uint32_t *)v25 + 1) - 1);
              v23 = (*((uint32_t *)v25 + 2))-- == 1;
              *((uint32_t *)v25 + 1) = v22;
              if ( v23 )
                G4_VCALL<void>(v25, 4);
            }
            v486 = (hkOArchive::Self *)((char *)v486 + 1);
          }
          while ( v486 != v459 );
        }
        v31 = v17[1];
        LOWORD(v31) = 0;
        v32 = v31 | (uint16_t)(v17[1] - 1);
        v23 = v17[2]-- == 1;
        v17[1] = v32;
        if ( v23 )
          G4_VCALL<void>(v17, 4);
      }
      else if ( v15 == 8 )
      {
        v61 = G4_VCALL<int>(*a2, 44, v504[0]);
        LODWORD(v502) = v61;
        if ( v61 != 0 )
        {
          v62 = *(uint32_t *)(v61 + 4);
          ++*(uint32_t *)(v61 + 8);
          v63 = v62;
          LOWORD(v62) = 0;
          *(uint32_t *)(v61 + 4) = v62 | (uint16_t)(v63 + 1);
        }
        sub_18883F0(v484, v397);
        v64 = (uint32_t *)v502;
        if ( (uint32_t)v502 != 0 )
        {
          v65 = *(uint32_t *)(v502 + 4);
          v66 = *(uint32_t *)(v502 + 8);
          LOWORD(v65) = 0;
          *(uint32_t *)(v502 + 4) = v65 | (uint16_t)(*(uint32_t *)(v502 + 4) - 1);
          v64[2] = v66 - 1;
          if ( v66 == 1 )
            G4_VCALL<void>(v64, 4);
        }
      }
      else
      {
        if ( v15 != 6 )
          goto LABEL_20;
        v33 = G4_VCALL<int>(*a2, 44, v504[0]);
        v34 = (hkOArchive::Self *)v33;
        v438 = (hkOArchive::Self *)v33;
        if ( v33 != 0 )
        {
          v35 = *(uint32_t *)(v33 + 4);
          ++*(uint32_t *)(v33 + 8);
          v36 = v35;
          LOWORD(v35) = 0;
          *((uint32_t *)v34 + 1) = v35 | (uint16_t)(v36 + 1);
          v34 = v438;
        }
        v399 = (hkOArchive::Self *)G4_VCALL<int>(v34, 24);
        v482 = nullptr;
        if ( (int)(uintptr_t)v399 > 0 )
        {
          while ( 2 )
          {
            v37 = G4_VCALL<int>(v438, 88, v482);
            v38 = (hkDataObject_Value::Self *)v37;
            if ( v37 != 0 )
            {
              v39 = *(uint32_t *)(v37 + 4);
              ++*(uint32_t *)(v37 + 8);
              v40 = v39;
              LOWORD(v39) = 0;
              *((uint32_t *)v38 + 1) = v39 | (uint16_t)(v40 + 1);
            }
            G4_VCALL<void>(v38, 12);
            v41 = G4_VCALL<int>(v38, 24);
LABEL_45:
            if ( G4_VCALL<int>(v38, 28, v41) == 0 )
            {
              v54 = *((uint32_t *)v38 + 1);
              LOWORD(v54) = 0;
              v55 = v54 | (uint16_t)(*((uint32_t *)v38 + 1) - 1);
              v23 = (*((uint32_t *)v38 + 2))-- == 1;
              *((uint32_t *)v38 + 1) = v55;
              if ( v23 )
                G4_VCALL<void>(v38, 4);
              v482 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((char *)v482 + 1);
              if ( v482 == (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v399) )
                goto LABEL_63;
              continue;
            }
            break;
          }
          v42 = *(uint32_t *)v38;
          v509 = v41;
          v508 = v38;
          (*(void ( **)(uint64_t *))(v42 + 40))(&v502);
          Type = (hkTypeManager::Type::Self *)hkDataObject_Value::getType((hkDataObject_Value::Self *)&v502);
          if ( *(uint32_t *)hkTypeManager::Type::findTerminal(Type) != 6 )
            goto LABEL_44;
          v43 = *(uint32_t *)Type;
          if ( *(uint32_t *)Type == 7 )
          {
            v47 = (hkDataObject_Value::Self *)G4_VCALL<int>(v502, 56, HIDWORD(v502));
            if ( v47 != nullptr )
            {
              v57 = *((uint32_t *)v47 + 1);
              ++*((uint32_t *)v47 + 2);
              v58 = v57;
              LOWORD(v57) = 0;
              v489 = v47;
              *((uint32_t *)v47 + 1) = v57 | (uint16_t)(v58 + 1);
              v59 = *(uint32_t *)v47;
              v508 = v47;
              (*(void ( **)(char ***))(v59 + 8))(&v495);
              v456 = (char *)v495;
              v460 = (hkOArchive::Self *)(v496);
              v47 = v489;
            }
            else
            {
              v460 = nullptr;
              v456 = nullptr;
            }
            v490 = *((uint32_t *)v484 + 1);
            if ( v490 == (*((uint32_t *)v484 + 2) & 0x3FFFFFFF) )
            {
              v454 = (char **)v47;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, v484, 12, v510);
              v490 = *((uint32_t *)v484 + 1);
              v47 = (hkDataObject_Value::Self *)v454;
            }
            v453 = *(char ***)v484;
            *((uint32_t *)v484 + 1) = v490 + 1;
            v60 = &v453[3 * v490];
            *v60 = v456;
            v60[1] = (char *)v460;
            v60[2] = nullptr;
            if ( v47 == nullptr )
              goto LABEL_44;
          }
          else
          {
            if ( *(int *)Type <= 7 )
            {
              if ( v43 == 6 )
              {
                v44 = (hkDataObject_Value::Self *)G4_VCALL<int>(v502, 56, HIDWORD(v502));
                v501[0] = v44;
                if ( v44 != nullptr )
                {
                  v45 = *((uint32_t *)v44 + 1);
                  ++*((uint32_t *)v44 + 2);
                  v46 = v45;
                  LOWORD(v45) = 0;
                  *((uint32_t *)v44 + 1) = v45 | (uint16_t)(v46 + 1);
                }
                sub_188B280((int)(uintptr_t)a1, v501, (int)(uintptr_t)v484);
                v47 = v501[0];
                if ( v501[0] != nullptr )
                  goto LABEL_53;
              }
LABEL_44:
              v41 = G4_VCALL<int>(v38, 32, v41);
              goto LABEL_45;
            }
            if ( v43 > 9 )
              goto LABEL_44;
            v51 = (hkDataObject_Value::Self *)G4_VCALL<int>(v502, 44, HIDWORD(v502));
            v501[0] = v51;
            if ( v51 != nullptr )
            {
              v52 = *((uint32_t *)v51 + 1);
              ++*((uint32_t *)v51 + 2);
              v53 = v52;
              LOWORD(v52) = 0;
              *((uint32_t *)v51 + 1) = v52 | (uint16_t)(v53 + 1);
            }
            sub_18883F0(v484, 1);
            v47 = v501[0];
            if ( v501[0] == nullptr )
              goto LABEL_44;
          }
LABEL_53:
          v48 = *((uint32_t *)v47 + 1);
          LOWORD(v48) = 0;
          v49 = v48 | (uint16_t)(*((uint32_t *)v47 + 1) - 1);
          v50 = *((uint32_t *)v47 + 2);
          *((uint32_t *)v47 + 1) = v49;
          *((uint32_t *)v47 + 2) = v50 - 1;
          if ( v50 == 1 )
            G4_VCALL<void>(v47, 4);
          goto LABEL_44;
        }
LABEL_63:
        v56 = *((uint32_t *)v438 + 1);
        LOWORD(v56) = 0;
        *((uint32_t *)v438 + 1) = v56 | (uint16_t)(*((uint32_t *)v438 + 1) - 1);
        v488 = *((uint32_t *)v438 + 2);
        *((uint32_t *)v438 + 2) = v488 - 1;
        if ( v488 == 1 )
          G4_VCALL<void>(v438, 4);
      }
LABEL_20:
      v13 = v497[0];
    }
  }
  result = (const char *)G4_VCALL<int>(*a2, 24);
  v483 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)result;
  v491 = nullptr;
  if ( (int)(uintptr_t)result > 0 )
  {
    v67 = v484;
    do
    {
      v71 = G4_VCALL<int>(*a2, 88, v491);
      v72 = (hkDataObject_Value::Self *)v71;
      if ( v71 != 0 )
      {
        v73 = *(uint32_t *)(v71 + 4);
        ++*(uint32_t *)(v71 + 8);
        v74 = v73;
        LOWORD(v73) = 0;
        *((uint32_t *)v72 + 1) = v73 | (uint16_t)(v74 + 1);
        v75 = *(uint32_t *)v72;
        v508 = v72;
        (*(void ( **)(char ***))(v75 + 8))(&v495);
        v76 = (hkOArchive::Self *)v495;
        v485 = v496;
      }
      else
      {
        v485 = nullptr;
        v76 = nullptr;
      }
      v77 = *((uint32_t *)v67 + 1);
      if ( v77 == (*((uint32_t *)v67 + 2) & 0x3FFFFFFF) )
      {
        v478 = v76;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, v67, 12, v510);
        v77 = *((uint32_t *)v67 + 1);
        v76 = v478;
      }
      *((uint32_t *)v67 + 1) = v77 + 1;
      v68 = (hkOArchive::Self **)(*(uint32_t *)v67 + 12 * v77);
      *v68 = v76;
      v68[1] = (hkOArchive::Self *)(v485);
      v68[2] = nullptr;
      if ( v72 != nullptr )
      {
        v69 = *((uint32_t *)v72 + 1);
        LOWORD(v69) = 0;
        v70 = v69 | (uint16_t)(*((uint32_t *)v72 + 1) - 1);
        v23 = (*((uint32_t *)v72 + 2))-- == 1;
        *((uint32_t *)v72 + 1) = v70;
        if ( v23 )
          G4_VCALL<void>(v72, 4);
      }
      v491 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)((char *)v491 + 1);
      result = (const char *)v483;
    }
    while ( v491 != v483 );
  }
  return result;
}

// Group C [sub_940D80] (VA 0x940d80)
int sub_940D80(int a1)
{
  std::vector<int> *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  int v10;
  std::vector<int> *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  int v20;
  std::vector<int> *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  int v29;
  int v30;
  std::vector<int> *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char *v38;
  int v39;
  int v40;
  std::vector<int> *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  char *v48;
  int v49;
  int v50;
  std::vector<int> *v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  char *v58;
  int v59;
  int v60;
  std::vector<int> *v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  char *v68;
  int v69;
  int v70;
  std::vector<int> *v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  char *v78;
  int v79;
  int v80;
  std::vector<int> *v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  char *v88;
  int v89;
  int v90;
  std::vector<int> *v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  char *v98;
  int v99;
  int v100;
  std::vector<int> *v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  char *v108;
  int v109;
  int v110;
  std::vector<int> *v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  char *v118;
  int v119;
  int v120;
  std::vector<int> *v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  char *v128;
  int v129;
  int v130;
  std::vector<int> *v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  char *v138;
  int v139;
  int v140;
  std::vector<int> *v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  char *v148;
  int v149;
  int v150;
  std::vector<int> *v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  char *v158;
  int v159;
  int v160;
  std::vector<int> *v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  char *v168;
  int v169;
  int v170;
  std::vector<int> *v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  char *v178;
  int v179;
  int v180;
  std::vector<int> *v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  char *v188;
  int v189;
  int v190;
  std::vector<int> *v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  char *v198;
  int v199;
  int v200;
  std::vector<int> *v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  char *v208;
  int v209;
  int v210;
  std::vector<int> *v211;
  int v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  char *v218;
  int v219;
  int v220;
  std::vector<int> *v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  char *v228;
  int v229;
  int v230;
  std::vector<int> *v231;
  int v232;
  int v233;
  int v234;
  int v235;
  int v236;
  int v237;
  char *v238;
  int v239;
  int v240;
  std::vector<int> *v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  char *v248;
  int v249;
  int v250;
  std::vector<int> *v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  char *v258;
  int v259;
  int v260;
  std::vector<int> *v261;
  int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  char *v268;
  int v269;
  int v270;
  std::vector<int> *v271;
  int v272;
  int v273;
  int v274;
  int v275;
  int v276;
  int v277;
  char *v278;
  int v279;
  int v280;
  std::vector<int> *v281;
  int v282;
  int v283;
  int v284;
  int v285;
  int v286;
  int v287;
  char *v288;
  int v289;
  int v290;
  std::vector<int> *v291;
  int v292;
  int v293;
  int v294;
  int v295;
  int v296;
  int v297;
  char *v298;
  int v299;
  int v300;
  std::vector<int> *v301;
  int v302;
  int v303;
  int v304;
  int v305;
  int v306;
  int v307;
  char *v308;
  int v309;
  int v310;
  std::vector<int> *v311;
  int v312;
  int v313;
  int v314;
  int v315;
  int v316;
  int v317;
  char *v318;
  int v319;
  int v320;
  std::vector<int> *v321;
  int v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  char *v328;
  int v329;
  int v330;
  std::vector<int> *v331;
  int v332;
  int v333;
  int v334;
  int v335;
  int v336;
  int v337;
  char *v338;
  int v339;
  int v340;
  std::vector<int> *v341;
  int v342;
  int v343;
  int v344;
  int v345;
  int v346;
  int v347;
  char *v348;
  int v349;
  int v350;
  std::vector<int> *v351;
  int v352;
  int v353;
  int v354;
  int v355;
  int v356;
  int v357;
  char *v358;
  int v359;
  int v360;
  std::vector<int> *v361;
  int v362;
  int v363;
  int v364;
  int v365;
  int v366;
  int v367;
  char *v368;
  int v369;
  int v370;
  std::vector<int> *v371;
  int v372;
  int v373;
  int v374;
  int v375;
  int v376;
  int v377;
  char *v378;
  int v379;
  int v380;
  std::vector<int> *v381;
  int v382;
  int v383;
  int v384;
  int v385;
  int v386;
  int v387;
  char *v388;
  int v389;
  int v390;
  std::vector<int> *v391;
  int v392;
  int v393;
  int v394;
  int v395;
  int v396;
  int v397;
  char *v398;
  int v399;
  int v400;
  std::vector<int> *v401;
  int v402;
  int v403;
  int v404;
  int v405;
  int v406;
  int v407;
  char *v408;
  int v409;
  int v410;
  std::vector<int> *v411;
  int v412;
  int v413;
  int v414;
  int v415;
  int v416;
  int v417;
  char *v418;
  int v419;
  int v420;
  std::vector<int> *v421;
  int v422;
  int v423;
  int v424;
  int v425;
  int v426;
  int v427;
  char *v428;
  int v429;
  int v430;
  std::vector<int> *v431;
  int v432;
  int v433;
  int v434;
  int v435;
  int v436;
  int v437;
  char *v438;
  int v439;
  int v440;
  std::vector<int> *v441;
  int v442;
  int v443;
  int v444;
  int v445;
  int v446;
  int v447;
  char *v448;
  int v449;
  int v450;
  std::vector<int> *v451;
  int v452;
  int v453;
  int v454;
  int v455;
  int v456;
  int v457;
  char *v458;
  int v459;
  int v460;
  std::vector<int> *v461;
  int v462;
  int v463;
  int v464;
  int v465;
  int v466;
  int v467;
  char *v468;
  int v469;
  int v470;
  std::vector<int> *v471;
  int v472;
  int v473;
  int v474;
  int v475;
  int v476;
  int v477;
  char *v478;
  int v479;
  int v480;
  std::vector<int> *v481;
  int v482;
  int v483;
  int v484;
  int v485;
  int v486;
  int v487;
  char *v488;
  int v489;
  int v490;
  std::vector<int> *v491;
  int v492;
  int v493;
  int v494;
  int v495;
  char *v496;
  int v497;
  int v498;
  int v499;
  int v500;
  int v501;
  int v502;
  int v503;
  int v504;
  char *v505;
  int v506;
  int v507;
  std::vector<int> *v508;
  int v509;
  int v510;
  int v511;
  int v512;
  char *v513;
  int v514;
  int v515;
  int v516;
  std::vector<int> *v517;
  int v518;
  int v519;
  int v520;
  int v521;
  char *v522;
  int v523;
  int v524;
  int v525;
  std::vector<int> *v526;
  int v527;
  int v528;
  int v529;
  int v530;
  char *v531;
  int v532;
  int v533;
  int v534;
  std::vector<int> *v535;
  int v536;
  int v537;
  int v538;
  int v539;
  char *v540;
  int v541;
  int v542;
  int v543;
  std::vector<int> *v544;
  int v545;
  int v546;
  int v547;
  int v548;
  char *v549;
  int v550;
  int v551;
  int v552;
  std::vector<int> *v553;
  int v554;
  int v555;
  int v556;
  int v557;
  char *v558;
  int v559;
  int v560;
  int v561;
  std::vector<int> *v562;
  int v563;
  int v564;
  int v565;
  int v566;
  char *v567;
  int v568;
  int v569;
  int v570;
  std::vector<int> *v571;
  int v572;
  int v573;
  int v574;
  int v575;
  char *v576;
  int v577;
  int v578;
  int v579;
  std::vector<int> *v580;
  int v581;
  int v582;
  int v583;
  int v584;
  char *v585;
  int v586;
  int v587;
  int v588;
  std::vector<int> *v589;
  int v590;
  int v591;
  int v592;
  int v593;
  char *v594;
  int v595;
  int v596;
  int v597;
  std::vector<int> *v598;
  int v599;
  int v600;
  int v601;
  int v602;
  char *v603;
  int v604;
  int v605;
  int v606;
  std::vector<int> *v607;
  int v608;
  int v609;
  int v610;
  int v611;
  char *v612;
  int v613;
  int v614;
  int v615;
  std::vector<int> *v616;
  int v617;
  int v618;
  int v619;
  int v620;
  char *v621;
  int v622;
  int v623;
  int v624;
  std::vector<int> *v625;
  int v626;
  int v627;
  int v628;
  int v629;
  char *v630;
  int v631;
  int v632;
  int v633;
  std::vector<int> *v634;
  int v635;
  int v636;
  int v637;
  int v638;
  char *v639;
  int v640;
  int v641;
  int v642;
  std::vector<int> *v643;
  int v644;
  int v645;
  int v646;
  int v647;
  char *v648;
  int v649;
  int v650;
  int v651;
  std::vector<int> *v652;
  int v653;
  int v654;
  int v655;
  int v656;
  char *v657;
  int v658;
  int v659;
  int v660;
  std::vector<int> *v661;
  int v662;
  int v663;
  int v664;
  int v665;
  char *v666;
  int v667;
  int v668;
  int v669;
  std::vector<int> *v670;
  int v671;
  int v672;
  int v673;
  int v674;
  char *v675;
  int v676;
  int v677;
  int v678;
  std::vector<int> *v679;
  int v680;
  int v681;
  int v682;
  int v683;
  char *v684;
  int v685;
  int v686;
  int v687;
  std::vector<int> *v688;
  int v689;
  int v690;
  int v691;
  int v692;
  char *v693;
  int v694;
  int v695;
  int v696;
  std::vector<int> *v697;
  int v698;
  int v699;
  int v700;
  int v701;
  char *v702;
  int v703;
  int v704;
  int v705;
  std::vector<int> *v706;
  int v707;
  int v708;
  int v709;
  int v710;
  char *v711;
  int v712;
  int v713;
  int v714;
  std::vector<int> *v715;
  int v716;
  int v717;
  int v718;
  int v719;
  char *v720;
  int v721;
  int v722;
  int v723;
  std::vector<int> *v724;
  int v725;
  int v726;
  int v727;
  int v728;
  char *v729;
  int v730;
  int v731;
  int v732;
  std::vector<int> *v733;
  int v734;
  int v735;
  int v736;
  int v737;
  char *v738;
  int v739;
  int v740;
  int v741;
  std::vector<int> *v742;
  int v743;
  int v744;
  int v745;
  int v746;
  char *v747;
  int v748;
  int v749;
  int v750;
  std::vector<int> *v751;
  int v752;
  int v753;
  int v754;
  int v755;
  char *v756;
  int v757;
  int v758;
  int v759;
  std::vector<int> *v760;
  int v761;
  int v762;
  int v763;
  int v764;
  char *v765;
  int v766;
  int v767;
  int v768;
  std::vector<int> *v769;
  int v770;
  int v771;
  int v772;
  int v773;
  char *v774;
  int v775;
  int v776;
  int v777;
  std::vector<int> *v778;
  int v779;
  int v780;
  int v781;
  int v782;
  char *v783;
  int v784;
  int v785;
  int v786;
  std::vector<int> *v787;
  int v788;
  int v789;
  int v790;
  int v791;
  char *v792;
  int v793;
  int v794;
  int v795;
  std::vector<int> *v796;
  int v797;
  int v798;
  int v799;
  int v800;
  char *v801;
  int v802;
  int v803;
  int v804;
  std::vector<int> *v805;
  int v806;
  int v807;
  int v808;
  int v809;
  char *v810;
  int v811;
  int v812;
  int v813;
  std::vector<int> *v814;
  int v815;
  int v816;
  int v817;
  int v818;
  char *v819;
  int v820;
  int v821;
  int v822;
  std::vector<int> *v823;
  int v824;
  int v825;
  int v826;
  int v827;
  char *v828;
  int v829;
  int v830;
  int v831;
  std::vector<int> *v832;
  int v833;
  int v834;
  int v835;
  int v836;
  char *v837;
  int v838;
  int v839;
  int v840;
  std::vector<int> *v841;
  int v842;
  int v843;
  int v844;
  int v845;
  char *v846;
  int v847;
  int v848;
  int v849;
  std::vector<int> *v850;
  int v851;
  int v852;
  int v853;
  int v854;
  char *v855;
  int v856;
  int v857;
  int v858;
  std::vector<int> *v859;
  int v860;
  int v861;
  int v862;
  int v863;
  char *v864;
  int v865;
  int v866;
  int v867;
  std::vector<int> *v868;
  int v869;
  int v870;
  int v871;
  int v872;
  char *v873;
  int v874;
  int v875;
  int v876;
  std::vector<int> *v877;
  int v878;
  int v879;
  int v880;
  int v881;
  char *v882;
  int v883;
  int v884;
  int v885;
  std::vector<int> *v886;
  int v887;
  int v888;
  int v889;
  int v890;
  char *v891;
  int v892;
  int v893;
  int v894;
  std::vector<int> *v895;
  int v896;
  int v897;
  int v898;
  int v899;
  char *v900;
  int v901;
  int v902;
  int v903;
  std::vector<int> *v904;
  int v905;
  int v906;
  int v907;
  int v908;
  char *v909;
  int v910;
  int v911;
  int v912;
  std::vector<int> *v913;
  int v914;
  int v915;
  int v916;
  int v917;
  char *v918;
  int v919;
  int v920;
  int v921;
  std::vector<int> *v922;
  int v923;
  int v924;
  int v925;
  int v926;
  char *v927;
  int v928;
  int v929;
  int v930;
  std::vector<int> *v931;
  int v932;
  int v933;
  int v934;
  int v935;
  char *v936;
  int v937;
  int v938;
  int v939;
  std::vector<int> *v940;
  int v941;
  int v942;
  int v943;
  int v944;
  char *v945;
  int v946;
  int v947;
  int v948;
  std::vector<int> *v949;
  int v950;
  int v951;
  int v952;
  int v953;
  char *v954;
  int v955;
  int v956;
  int v957;
  std::vector<int> *v958;
  int v959;
  int v960;
  int v961;
  int v962;
  char *v963;
  int v964;
  int v965;
  int v966;
  std::vector<int> *v967;
  int v968;
  int v969;
  int v970;
  int v971;
  char *v972;
  int v973;
  int v974;
  int v975;
  std::vector<int> *v976;
  int v977;
  int v978;
  int v979;
  int v980;
  char *v981;
  int v982;
  int v983;
  int v984;
  std::vector<int> *v985;
  int v986;
  int v987;
  int v988;
  int v989;
  char *v990;
  int v991;
  int v992;
  int v993;
  std::vector<int> *v994;
  int v995;
  int v996;
  int v997;
  int v998;
  char *v999;
  int v1000;
  int v1001;
  int v1002;
  std::vector<int> *v1003;
  int v1004;
  int v1005;
  int v1006;
  int v1007;
  char *v1008;
  int v1009;
  int v1010;
  int v1011;
  std::vector<int> *v1012;
  int v1013;
  int v1014;
  int v1015;
  int v1016;
  char *v1017;
  int v1018;
  int v1019;
  int v1020;
  std::vector<int> *v1021;
  int v1022;
  int v1023;
  int v1024;
  int v1025;
  char *v1026;
  int v1027;
  int v1028;
  int v1029;
  std::vector<int> *v1030;
  int v1031;
  int v1032;
  int v1033;
  int v1034;
  char *v1035;
  int v1036;
  int v1037;
  int v1038;
  std::vector<int> *v1039;
  int v1040;
  int v1041;
  int v1042;
  int v1043;
  char *v1044;
  int v1045;
  int v1046;
  int v1047;
  std::vector<int> *v1048;
  int v1049;
  int v1050;
  int v1051;
  int v1052;
  char *v1053;
  int v1054;
  int v1055;
  int v1056;
  std::vector<int> *v1057;
  int v1058;
  int v1059;
  int v1060;
  int v1061;
  char *v1062;
  int v1063;
  int v1064;
  int v1065;
  std::vector<int> *v1066;
  int v1067;
  int v1068;
  int v1069;
  int v1070;
  char *v1071;
  int v1072;
  int v1073;
  int v1074;
  std::vector<int> *v1075;
  int v1076;
  int v1077;
  int v1078;
  int v1079;
  char *v1080;
  int v1081;
  int v1082;
  int v1083;
  std::vector<int> *v1084;
  int v1085;
  int v1086;
  int v1087;
  int v1088;
  char *v1089;
  int v1090;
  int v1091;
  int v1092;
  std::vector<int> *v1093;
  int v1094;
  int v1095;
  int v1096;
  int v1097;
  char *v1098;
  int v1099;
  int v1100;
  int v1101;
  std::vector<int> *v1102;
  int v1103;
  int v1104;
  int v1105;
  int v1106;
  char *v1107;
  int v1108;
  int v1109;
  int v1110;
  std::vector<int> *v1111;
  int v1112;
  int v1113;
  int v1114;
  int v1115;
  char *v1116;
  int v1117;
  int v1118;
  int v1119;
  std::vector<int> *v1120;
  int v1121;
  int v1122;
  int v1123;
  int v1124;
  char *v1125;
  int v1126;
  int v1127;
  int v1128;
  std::vector<int> *v1129;
  int v1130;
  int v1131;
  int v1132;
  int v1133;
  char *v1134;
  int v1135;
  int v1136;
  int v1137;
  std::vector<int> *v1138;
  int v1139;
  int v1140;
  int v1141;
  int v1142;
  char *v1143;
  int v1144;
  int v1145;
  int v1146;
  std::vector<int> *v1147;
  int v1148;
  int v1149;
  int v1150;
  int v1151;
  char *v1152;
  int v1153;
  int v1154;
  int v1155;
  std::vector<int> *v1156;
  int v1157;
  int v1158;
  int v1159;
  int v1160;
  char *v1161;
  int v1162;
  int v1163;
  int v1164;
  std::vector<int> *v1165;
  int v1166;
  int v1167;
  int v1168;
  int v1169;
  char *v1170;
  int v1171;
  int v1172;
  int v1173;
  std::vector<int> *v1174;
  int v1175;
  int v1176;
  int v1177;
  int v1178;
  char *v1179;
  int v1180;
  int v1181;
  int v1182;
  std::vector<int> *v1183;
  int v1184;
  int v1185;
  int v1186;
  int v1187;
  char *v1188;
  int v1189;
  int v1190;
  int v1191;
  std::vector<int> *v1192;
  int v1193;
  int v1194;
  int v1195;
  int v1196;
  char *v1197;
  int v1198;
  int v1199;
  int v1200;
  std::vector<int> *v1201;
  int v1202;
  int v1203;
  int v1204;
  int v1205;
  char *v1206;
  int v1207;
  int v1208;
  int v1209;
  std::vector<int> *v1211;
  std::vector<int> *v1212;
  std::vector<int> *v1213;
  std::vector<int> *v1214;
  std::vector<int> *v1215;
  std::vector<int> *v1216;
  std::vector<int> *v1217;
  std::vector<int> *v1218;
  std::vector<int> *v1219;
  std::vector<int> *v1220;
  std::vector<int> *v1221;
  std::vector<int> *v1222;
  std::vector<int> *v1223;
  std::vector<int> *v1224;
  std::vector<int> *v1225;
  std::vector<int> *v1226;
  std::vector<int> *v1227;
  std::vector<int> *v1228;
  std::vector<int> *v1229;
  std::vector<int> *v1230;
  std::vector<int> *v1231;
  std::vector<int> *v1232;
  std::vector<int> *v1233;
  std::vector<int> *v1234;
  std::vector<int> *v1235;
  std::vector<int> *v1236;
  std::vector<int> *v1237;
  std::vector<int> *v1238;
  std::vector<int> *v1239;
  std::vector<int> *v1240;
  std::vector<int> *v1241;
  std::vector<int> *v1242;
  std::vector<int> *v1243;
  std::vector<int> *v1244;
  std::vector<int> *v1245;
  std::vector<int> *v1246;
  std::vector<int> *v1247;
  std::vector<int> *v1248;
  std::vector<int> *v1249;
  std::vector<int> *v1250;
  std::vector<int> *v1251;
  std::vector<int> *v1252;
  std::vector<int> *v1253;
  std::vector<int> *v1254;
  std::vector<int> *v1255;
  std::vector<int> *v1256;
  std::vector<int> *v1257;
  std::vector<int> *v1258;
  std::vector<int> *v1259;
  std::vector<int> *v1260;
  int v1261;
  int v1262;
  int v1263;
  int v1264;
  int v1265;
  int v1266;
  int v1267;
  int v1268;
  int v1269;
  int v1270;
  int v1271;
  int v1272;
  int v1273;
  int v1274;
  int v1275;
  int v1276;
  int v1277;
  int v1278;
  int v1279;
  int v1280;
  int v1281;
  int v1282;
  int v1283;
  int v1284;
  int v1285;
  int v1286;
  int v1287;
  int v1288;
  int v1289;
  int v1290;
  int v1291;
  int v1292;
  int v1293;
  int v1294;
  int v1295;
  int v1296;
  int v1297;
  int v1298;
  int v1299;
  int v1300;
  int v1301;
  int v1302;
  int v1303;
  int v1304;
  int v1305;
  int v1306;
  int v1307;
  int v1308;
  int v1309;
  int v1310;
  int v1311;
  int v1312;
  int v1313;
  int v1314;
  int v1315;
  int v1316;
  int v1317;
  int v1318;
  int v1319;
  int v1320;
  int v1321;
  int v1322;
  int v1323;
  int v1324;
  int v1325;
  int v1326;
  int v1327;
  int v1328;
  int v1329;
  int v1330;
  int v1331;
  int v1332;
  int v1333;
  int v1334;
  int v1335;
  int v1336;
  int v1337;
  int v1338;
  int v1339;
  int v1340;
  int v1341;
  int v1342;
  int v1343;
  int v1344;
  int v1345;
  int v1346;
  int v1347;
  int v1348;
  int v1349;
  int v1350;
  int v1351;
  int v1352;
  int v1353;
  int v1354;
  int v1355;
  int v1356;
  int v1357;
  int v1358;
  int v1359;
  int v1360;
  int v1361;
  int v1362;
  int v1363;
  int v1364;
  int v1365;
  int v1366;
  int v1367;
  int v1368;
  int v1369;
  int v1370;
  int v1371;
  int v1372;
  int v1373;
  int v1374;
  int v1375;
  int v1376;
  int v1377;
  int v1378;
  int v1379;
  int v1380;
  int v1381;
  int v1382;
  int v1383;
  int v1384;
  int v1385;
  int v1386;
  int v1387;
  int v1388;
  int v1389;
  std::vector<int> *v1390; // [esp+1Ch] [ebp-1440h]
  int v1391; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1392; // [esp+1Ch] [ebp-1440h]
  int v1393; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1394; // [esp+1Ch] [ebp-1440h]
  int v1395; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1396; // [esp+1Ch] [ebp-1440h]
  int v1397; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1398; // [esp+1Ch] [ebp-1440h]
  int v1399; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1400; // [esp+1Ch] [ebp-1440h]
  int v1401; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1402; // [esp+1Ch] [ebp-1440h]
  int v1403; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1404; // [esp+1Ch] [ebp-1440h]
  int v1405; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1406; // [esp+1Ch] [ebp-1440h]
  int v1407; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1408; // [esp+1Ch] [ebp-1440h]
  int v1409; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1410; // [esp+1Ch] [ebp-1440h]
  int v1411; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1412; // [esp+1Ch] [ebp-1440h]
  int v1413; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1414; // [esp+1Ch] [ebp-1440h]
  int v1415; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1416; // [esp+1Ch] [ebp-1440h]
  int v1417; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1418; // [esp+1Ch] [ebp-1440h]
  int v1419; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1420; // [esp+1Ch] [ebp-1440h]
  int v1421; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1422; // [esp+1Ch] [ebp-1440h]
  int v1423; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1424; // [esp+1Ch] [ebp-1440h]
  int v1425; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1426; // [esp+1Ch] [ebp-1440h]
  int v1427; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1428; // [esp+1Ch] [ebp-1440h]
  int v1429; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1430; // [esp+1Ch] [ebp-1440h]
  int v1431; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1432; // [esp+1Ch] [ebp-1440h]
  int v1433; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1434; // [esp+1Ch] [ebp-1440h]
  int v1435; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1436; // [esp+1Ch] [ebp-1440h]
  int v1437; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1438; // [esp+1Ch] [ebp-1440h]
  int v1439; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1440; // [esp+1Ch] [ebp-1440h]
  int v1441; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1442; // [esp+1Ch] [ebp-1440h]
  int v1443; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1444; // [esp+1Ch] [ebp-1440h]
  int v1445; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1446; // [esp+1Ch] [ebp-1440h]
  int v1447; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1448; // [esp+1Ch] [ebp-1440h]
  int v1449; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1450; // [esp+1Ch] [ebp-1440h]
  int v1451; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1452; // [esp+1Ch] [ebp-1440h]
  int v1453; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1454; // [esp+1Ch] [ebp-1440h]
  int v1455; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1456; // [esp+1Ch] [ebp-1440h]
  int v1457; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1458; // [esp+1Ch] [ebp-1440h]
  int v1459; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1460; // [esp+1Ch] [ebp-1440h]
  int v1461; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1462; // [esp+1Ch] [ebp-1440h]
  int v1463; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1464; // [esp+1Ch] [ebp-1440h]
  int v1465; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1466; // [esp+1Ch] [ebp-1440h]
  int v1467; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1468; // [esp+1Ch] [ebp-1440h]
  int v1469; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1470; // [esp+1Ch] [ebp-1440h]
  int v1471; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1472; // [esp+1Ch] [ebp-1440h]
  int v1473; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1474; // [esp+1Ch] [ebp-1440h]
  int v1475; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1476; // [esp+1Ch] [ebp-1440h]
  int v1477; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1478; // [esp+1Ch] [ebp-1440h]
  int v1479; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1480; // [esp+1Ch] [ebp-1440h]
  int v1481; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1482; // [esp+1Ch] [ebp-1440h]
  int v1483; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1484; // [esp+1Ch] [ebp-1440h]
  int v1485; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1486; // [esp+1Ch] [ebp-1440h]
  int v1487; // [esp+1Ch] [ebp-1440h]
  int v1488; // [esp+1Ch] [ebp-1440h]
  int v1489; // [esp+1Ch] [ebp-1440h]
  int v1490; // [esp+1Ch] [ebp-1440h]
  int v1491; // [esp+1Ch] [ebp-1440h]
  int v1492; // [esp+1Ch] [ebp-1440h]
  int v1493; // [esp+1Ch] [ebp-1440h]
  int v1494; // [esp+1Ch] [ebp-1440h]
  int v1495; // [esp+1Ch] [ebp-1440h]
  int v1496; // [esp+1Ch] [ebp-1440h]
  int v1497; // [esp+1Ch] [ebp-1440h]
  int v1498; // [esp+1Ch] [ebp-1440h]
  int v1499; // [esp+1Ch] [ebp-1440h]
  int v1500; // [esp+1Ch] [ebp-1440h]
  int v1501; // [esp+1Ch] [ebp-1440h]
  int v1502; // [esp+1Ch] [ebp-1440h]
  int v1503; // [esp+1Ch] [ebp-1440h]
  int v1504; // [esp+1Ch] [ebp-1440h]
  int v1505; // [esp+1Ch] [ebp-1440h]
  int v1506; // [esp+1Ch] [ebp-1440h]
  int v1507; // [esp+1Ch] [ebp-1440h]
  int v1508; // [esp+1Ch] [ebp-1440h]
  int v1509; // [esp+1Ch] [ebp-1440h]
  int v1510; // [esp+1Ch] [ebp-1440h]
  int v1511; // [esp+1Ch] [ebp-1440h]
  int v1512; // [esp+1Ch] [ebp-1440h]
  int v1513; // [esp+1Ch] [ebp-1440h]
  int v1514; // [esp+1Ch] [ebp-1440h]
  int v1515; // [esp+1Ch] [ebp-1440h]
  int v1516; // [esp+1Ch] [ebp-1440h]
  int v1517; // [esp+1Ch] [ebp-1440h]
  int v1518; // [esp+1Ch] [ebp-1440h]
  int v1519; // [esp+1Ch] [ebp-1440h]
  int v1520; // [esp+1Ch] [ebp-1440h]
  int v1521; // [esp+1Ch] [ebp-1440h]
  int v1522; // [esp+1Ch] [ebp-1440h]
  int v1523; // [esp+1Ch] [ebp-1440h]
  int v1524; // [esp+1Ch] [ebp-1440h]
  int v1525; // [esp+1Ch] [ebp-1440h]
  int v1526; // [esp+1Ch] [ebp-1440h]
  int v1527; // [esp+1Ch] [ebp-1440h]
  int v1528; // [esp+1Ch] [ebp-1440h]
  int v1529; // [esp+1Ch] [ebp-1440h]
  int v1530; // [esp+1Ch] [ebp-1440h]
  int v1531; // [esp+1Ch] [ebp-1440h]
  int v1532; // [esp+1Ch] [ebp-1440h]
  int v1533; // [esp+1Ch] [ebp-1440h]
  int v1534; // [esp+1Ch] [ebp-1440h]
  int v1535; // [esp+1Ch] [ebp-1440h]
  int v1536; // [esp+1Ch] [ebp-1440h]
  int v1537; // [esp+1Ch] [ebp-1440h]
  int v1538; // [esp+1Ch] [ebp-1440h]
  int v1539; // [esp+1Ch] [ebp-1440h]
  int v1540; // [esp+1Ch] [ebp-1440h]
  int v1541; // [esp+1Ch] [ebp-1440h]
  int v1542; // [esp+1Ch] [ebp-1440h]
  int v1543; // [esp+1Ch] [ebp-1440h]
  int v1544; // [esp+1Ch] [ebp-1440h]
  int v1545; // [esp+1Ch] [ebp-1440h]
  int v1546; // [esp+1Ch] [ebp-1440h]
  int v1547; // [esp+1Ch] [ebp-1440h]
  int v1548; // [esp+1Ch] [ebp-1440h]
  int v1549; // [esp+1Ch] [ebp-1440h]
  int v1550; // [esp+1Ch] [ebp-1440h]
  int v1551; // [esp+1Ch] [ebp-1440h]
  int v1552; // [esp+1Ch] [ebp-1440h]
  int v1553; // [esp+1Ch] [ebp-1440h]
  int v1554; // [esp+1Ch] [ebp-1440h]
  int v1555; // [esp+1Ch] [ebp-1440h]
  int v1556; // [esp+1Ch] [ebp-1440h]
  int v1557; // [esp+1Ch] [ebp-1440h]
  int v1558; // [esp+1Ch] [ebp-1440h]
  int v1559; // [esp+1Ch] [ebp-1440h]
  int v1560; // [esp+1Ch] [ebp-1440h]
  int v1561; // [esp+1Ch] [ebp-1440h]
  int v1562; // [esp+1Ch] [ebp-1440h]
  int v1563; // [esp+1Ch] [ebp-1440h]
  int v1564; // [esp+1Ch] [ebp-1440h]
  int v1565; // [esp+1Ch] [ebp-1440h]
  int v1566; // [esp+1Ch] [ebp-1440h]
  int v1567; // [esp+1Ch] [ebp-1440h]
  int v1568; // [esp+1Ch] [ebp-1440h]
  int v1569; // [esp+1Ch] [ebp-1440h]
  int v1570; // [esp+1Ch] [ebp-1440h]
  int v1571; // [esp+1Ch] [ebp-1440h]
  int v1572; // [esp+1Ch] [ebp-1440h]
  int v1573; // [esp+1Ch] [ebp-1440h]
  int v1574; // [esp+1Ch] [ebp-1440h]
  int v1575; // [esp+1Ch] [ebp-1440h]
  int v1576; // [esp+1Ch] [ebp-1440h]
  int v1577; // [esp+1Ch] [ebp-1440h]
  int v1578; // [esp+1Ch] [ebp-1440h]
  int v1579; // [esp+1Ch] [ebp-1440h]
  int v1580; // [esp+1Ch] [ebp-1440h]
  int v1581; // [esp+1Ch] [ebp-1440h]
  int v1582; // [esp+1Ch] [ebp-1440h]
  int v1583; // [esp+1Ch] [ebp-1440h]
  int v1584; // [esp+1Ch] [ebp-1440h]
  int v1585; // [esp+1Ch] [ebp-1440h]
  int v1586; // [esp+1Ch] [ebp-1440h]
  int v1587; // [esp+1Ch] [ebp-1440h]
  int v1588; // [esp+1Ch] [ebp-1440h]
  int v1589; // [esp+1Ch] [ebp-1440h]
  int v1590; // [esp+1Ch] [ebp-1440h]
  int v1591; // [esp+1Ch] [ebp-1440h]
  int v1592; // [esp+1Ch] [ebp-1440h]
  int v1593; // [esp+1Ch] [ebp-1440h]
  int v1594; // [esp+1Ch] [ebp-1440h]
  int v1595; // [esp+1Ch] [ebp-1440h]
  int v1596; // [esp+1Ch] [ebp-1440h]
  int v1597; // [esp+1Ch] [ebp-1440h]
  int v1598; // [esp+1Ch] [ebp-1440h]
  int v1599; // [esp+1Ch] [ebp-1440h]
  int v1600; // [esp+1Ch] [ebp-1440h]
  int v1601; // [esp+1Ch] [ebp-1440h]
  int v1602; // [esp+1Ch] [ebp-1440h]
  int v1603; // [esp+1Ch] [ebp-1440h]
  int v1604; // [esp+1Ch] [ebp-1440h]
  int v1605; // [esp+1Ch] [ebp-1440h]
  int v1606; // [esp+1Ch] [ebp-1440h]
  int v1607; // [esp+1Ch] [ebp-1440h]
  int v1608; // [esp+1Ch] [ebp-1440h]
  int v1609; // [esp+1Ch] [ebp-1440h]
  int v1610; // [esp+1Ch] [ebp-1440h]
  int v1611; // [esp+1Ch] [ebp-1440h]
  int v1612; // [esp+1Ch] [ebp-1440h]
  int v1613; // [esp+1Ch] [ebp-1440h]
  int v1614; // [esp+1Ch] [ebp-1440h]
  int v1615; // [esp+1Ch] [ebp-1440h]
  int v1616; // [esp+1Ch] [ebp-1440h]
  int v1617; // [esp+1Ch] [ebp-1440h]
  int v1618; // [esp+1Ch] [ebp-1440h]
  int v1619; // [esp+1Ch] [ebp-1440h]
  int v1620; // [esp+1Ch] [ebp-1440h]
  int v1621; // [esp+1Ch] [ebp-1440h]
  int v1622; // [esp+1Ch] [ebp-1440h]
  int v1623; // [esp+1Ch] [ebp-1440h]
  int v1624; // [esp+1Ch] [ebp-1440h]
  int v1625; // [esp+1Ch] [ebp-1440h]
  int v1626; // [esp+1Ch] [ebp-1440h]
  int v1627; // [esp+1Ch] [ebp-1440h]
  int v1628; // [esp+1Ch] [ebp-1440h]
  int v1629; // [esp+1Ch] [ebp-1440h]
  int v1630; // [esp+1Ch] [ebp-1440h]
  int v1631; // [esp+1Ch] [ebp-1440h]
  int v1632; // [esp+1Ch] [ebp-1440h]
  int v1633; // [esp+1Ch] [ebp-1440h]
  int v1634; // [esp+1Ch] [ebp-1440h]
  int v1635; // [esp+1Ch] [ebp-1440h]
  int v1636; // [esp+1Ch] [ebp-1440h]
  int v1637; // [esp+1Ch] [ebp-1440h]
  int v1638; // [esp+1Ch] [ebp-1440h]
  int v1639; // [esp+1Ch] [ebp-1440h]
  int v1640; // [esp+1Ch] [ebp-1440h]
  int v1641; // [esp+1Ch] [ebp-1440h]
  int v1642; // [esp+1Ch] [ebp-1440h]
  int v1643; // [esp+1Ch] [ebp-1440h]
  int v1644; // [esp+1Ch] [ebp-1440h]
  int v1645; // [esp+1Ch] [ebp-1440h]
  int v1646; // [esp+1Ch] [ebp-1440h]
  int v1647; // [esp+1Ch] [ebp-1440h]
  std::vector<int> *v1648;
  std::vector<int> *v1649;
  std::vector<int> *v1650;
  std::vector<int> *v1651;
  std::vector<int> *v1652;
  std::vector<int> *v1653;
  std::vector<int> *v1654;
  std::vector<int> *v1655;
  std::vector<int> *v1656;
  std::vector<int> *v1657;
  std::vector<int> *v1658;
  std::vector<int> *v1659;
  std::vector<int> *v1660;
  std::vector<int> *v1661;
  std::vector<int> *v1662;
  std::vector<int> *v1663;
  std::vector<int> *v1664;
  std::vector<int> *v1665;
  std::vector<int> *v1666;
  std::vector<int> *v1667;
  std::vector<int> *v1668;
  std::vector<int> *v1669;
  std::vector<int> *v1670;
  std::vector<int> *v1671;
  std::vector<int> *v1672;
  std::vector<int> *v1673;
  std::vector<int> *v1674;
  std::vector<int> *v1675;
  std::vector<int> *v1676;
  std::vector<int> *v1677;
  std::vector<int> *v1678;
  std::vector<int> *v1679;
  std::vector<int> *v1680;
  std::vector<int> *v1681;
  std::vector<int> *v1682;
  std::vector<int> *v1683;
  std::vector<int> *v1684;
  std::vector<int> *v1685;
  std::vector<int> *v1686;
  std::vector<int> *v1687;
  std::vector<int> *v1688;
  std::vector<int> *v1689;
  std::vector<int> *v1690;
  std::vector<int> *v1691;
  std::vector<int> *v1692;
  std::vector<int> *v1693;
  std::vector<int> *v1694;
  std::vector<int> *v1695;
  std::vector<int> *v1696;
  std::vector<int> *v1697;
  std::vector<int> *v1698;
  std::vector<int> *v1699;
  std::vector<int> *v1700;
  std::vector<int> *v1701;
  std::vector<int> *v1702;
  std::vector<int> *v1703;
  std::vector<int> *v1704;
  std::vector<int> *v1705;
  std::vector<int> *v1706;
  std::vector<int> *v1707;
  std::vector<int> *v1708;
  std::vector<int> *v1709;
  std::vector<int> *v1710;
  std::vector<int> *v1711;
  std::vector<int> *v1712;
  std::vector<int> *v1713;
  std::vector<int> *v1714;
  std::vector<int> *v1715;
  std::vector<int> *v1716;
  std::vector<int> *v1717;
  std::vector<int> *v1718;
  std::vector<int> *v1719;
  std::vector<int> *v1720;
  std::vector<int> *v1721;
  std::vector<int> *v1722;
  std::vector<int> *v1723;
  std::vector<int> *v1724;
  std::vector<int> *v1725;
  std::vector<int> *v1726;
  int v1727;
  int v1728;
  int v1729;
  int v1730;
  int v1731;
  int v1732;
  int v1733;
  int v1734;
  int v1735;
  int v1736;
  int v1737;
  int v1738;
  int v1739;
  int v1740;
  int v1741;
  int v1742;
  int v1743;
  int v1744;
  int v1745;
  int v1746;
  int v1747;
  int v1748;
  int v1749;
  int v1750;
  int v1751;
  int v1752;
  int v1753;
  int v1754;
  int v1755;
  int v1756;
  int v1757;
  int v1758;
  int v1759;
  int v1760;
  int v1761;
  int v1762;
  int v1763;
  int v1764;
  int v1765;
  int v1766;
  int v1767;
  int v1768;
  int v1769;
  int v1770;
  int v1771;
  int v1772;
  int v1773;
  int v1774;
  int v1775;
  int v1776;
  int v1777;
  int v1778;
  int v1779;
  int v1780;
  int v1781;
  int v1782;
  int v1783;
  int v1784;
  int v1785;
  int v1786;
  int v1787;
  int v1788;
  int v1789;
  int v1790;
  int v1791;
  int v1792;
  int v1793;
  int v1794;
  int v1795;
  int v1796;
  int v1797;
  int v1798;
  int v1799;
  int v1800;
  int v1801;
  int v1802;
  int v1803;
  int v1804;
  int v1805;
  int v1806;
  int v1807;
  int v1808;
  int v1809;
  int v1810;
  int v1811;
  int v1812;
  int v1813;
  int v1814;
  int v1815;
  int v1816;
  int v1817;
  int v1818;
  int v1819;
  int v1820;
  int v1821;
  int v1822;
  int v1823;
  int v1824;
  int v1825;
  int v1826;
  int v1827;
  int v1828;
  int v1829;
  int v1830;
  int v1831;
  int v1832;
  int v1833;
  int v1834;
  int v1835;
  int v1836;
  int v1837;
  int v1838;
  int v1839;
  int v1840;
  int v1841;
  int v1842;
  int v1843;
  int v1844;
  int v1845;
  int v1846;
  int v1847;
  int v1848;
  int v1849;
  int v1850;
  int v1851;
  int v1852;
  int v1853;
  int v1854;
  int v1855;
  int v1856;
  int v1857;
  int v1858;
  int v1859;
  int v1860;
  int v1861;
  int v1862;
  int v1863;
  int v1864;
  int v1865;
  int v1866;
  int v1867;
  int v1868;
  int v1869;
  int v1870;
  int v1871;
  int v1872;
  int v1873;
  int v1874;
  int v1875;
  int v1876;
  int v1877;
  int v1878;
  int v1879;
  int v1880;
  int v1881;
  int v1882;
  int v1883;
  int v1884;
  int v1885;
  int v1886;
  int v1887;
  int v1888;
  int v1889;
  int v1890;
  int v1891;
  int v1892;
  int v1893;
  int v1894;
  int v1895;
  int v1896;
  int v1897;
  int v1898;
  int v1899;
  int v1900;
  int v1901;
  int v1902;
  int v1903;
  int v1904;
  int v1905;
  int v1906;
  int v1907;
  int v1908;
  int v1909;
  int v1910;
  int v1911;
  int v1912;
  int v1913;
  int v1914;
  int v1915;
  int v1916;
  int v1917;
  int v1918;
  int v1919;
  int v1920;
  int v1921;
  int v1922;
  int v1923;
  int v1924;
  int v1925;
  int v1926;
  int v1927;
  int v1928;
  int v1929;
  int v1930;
  int v1931;
  int v1932;
  int v1933;
  int v1934;
  int v1935;
  int v1936;
  int v1937;
  int v1938;
  int v1939;
  int v1940;
  int v1941;
  int v1942;
  int v1943;
  int v1944;
  int v1945;
  int v1946;
  int v1947;
  int v1948;
  int v1949;
  int v1950;
  int v1951;
  int v1952;
  int v1953;
  int v1954;
  int v1955;
  int v1956;
  int v1957;
  int v1958;
  int v1959;
  int v1960;
  int v1961;
  int v1962;
  int v1963;
  int v1964;
  int v1965;
  int v1966;
  int v1967;
  int v1968;
  int v1969;
  int v1970;
  int v1971;
  int v1972;
  int v1973;
  int v1974;
  int v1975;
  int v1976;
  int v1977;
  int v1978;
  int v1979;
  int v1980;
  int v1981;
  int v1982;
  int v1983;
  int v1984;
  int v1985;
  int v1986;
  int v1987;
  int v1988;
  int v1989;
  int v1990;
  int v1991;
  int v1992;
  int v1993;
  int v1994;
  int v1995;
  int v1996;
  int v1997;
  int v1998;
  int v1999;
  int v2000;
  int v2001;
  int v2002;
  int v2003;
  int v2004;
  int v2005;
  int v2006;
  int v2007;
  int v2008;
  int v2009;
  int v2010;
  int v2011;
  int v2012;
  int v2013;
  int v2014;
  int v2015;
  int v2016;
  int v2017;
  int v2018;
  int v2019;
  int v2020;
  int v2021;
  int v2022;
  int v2023;
  int v2024;
  int v2025;
  int v2026;
  int v2027;
  int v2028;
  int v2029;
  int v2030;
  int v2031;
  int v2032;
  int v2033;
  int v2034; // [esp+3Ch] [ebp-1420h]
  int *v2035; // [esp+3Ch] [ebp-1420h]
  int v2036; // [esp+1C1h] [ebp-129Bh] BYREF
  int v2037; // [esp+1C8h] [ebp-1294h] BYREF
  size_t *v2038; // [esp+1CCh] [ebp-1290h] BYREF
  int v2039; // [esp+1D0h] [ebp-128Ch] BYREF
  int v2040; // [esp+1D4h] [ebp-1288h] BYREF
  size_t *v2041; // [esp+1D8h] [ebp-1284h] BYREF
  int v2042; // [esp+1DCh] [ebp-1280h] BYREF
  int v2043; // [esp+1E0h] [ebp-127Ch] BYREF
  size_t *v2044; // [esp+1E4h] [ebp-1278h] BYREF
  int v2045; // [esp+1E8h] [ebp-1274h] BYREF
  int v2046; // [esp+1ECh] [ebp-1270h] BYREF
  size_t *v2047; // [esp+1F0h] [ebp-126Ch] BYREF
  int v2048; // [esp+1F4h] [ebp-1268h] BYREF
  int v2049; // [esp+1F8h] [ebp-1264h] BYREF
  size_t *v2050; // [esp+1FCh] [ebp-1260h] BYREF
  int v2051;
  int v2052;
  size_t *v2053;
  int v2054; // [esp+20Ch] [ebp-1250h] BYREF
  int v2055;
  size_t *v2056;
  int v2057;
  int v2058; // [esp+21Ch] [ebp-1240h] BYREF
  size_t *v2059;
  int v2060;
  int v2061;
  size_t *v2062; // [esp+22Ch] [ebp-1230h] BYREF
  int v2063;
  int v2064;
  size_t *v2065;
  int v2066; // [esp+23Ch] [ebp-1220h] BYREF
  int v2067;
  size_t *v2068;
  int v2069;
  int v2070; // [esp+24Ch] [ebp-1210h] BYREF
  size_t *v2071;
  int v2072;
  int v2073;
  size_t *v2074; // [esp+25Ch] [ebp-1200h] BYREF
  int v2075;
  int v2076;
  size_t *v2077;
  int v2078; // [esp+26Ch] [ebp-11F0h] BYREF
  int v2079;
  size_t *v2080;
  int v2081;
  int v2082; // [esp+27Ch] [ebp-11E0h] BYREF
  size_t *v2083;
  int v2084;
  int v2085;
  size_t *v2086; // [esp+28Ch] [ebp-11D0h] BYREF
  int v2087;
  int v2088;
  size_t *v2089;
  int v2090; // [esp+29Ch] [ebp-11C0h] BYREF
  int v2091; // [esp+2A0h] [ebp-11BCh] BYREF
  size_t *v2092; // [esp+2A4h] [ebp-11B8h] BYREF
  int v2093; // [esp+2A8h] [ebp-11B4h] BYREF
  int v2094; // [esp+2ACh] [ebp-11B0h] BYREF
  size_t *v2095; // [esp+2B0h] [ebp-11ACh] BYREF
  int v2096; // [esp+2B4h] [ebp-11A8h] BYREF
  int v2097; // [esp+2B8h] [ebp-11A4h] BYREF
  size_t *v2098; // [esp+2BCh] [ebp-11A0h] BYREF
  int v2099; // [esp+2C0h] [ebp-119Ch] BYREF
  int v2100; // [esp+2C4h] [ebp-1198h] BYREF
  size_t *v2101; // [esp+2C8h] [ebp-1194h] BYREF
  int v2102; // [esp+2CCh] [ebp-1190h] BYREF
  int v2103; // [esp+2D0h] [ebp-118Ch] BYREF
  size_t *v2104; // [esp+2D4h] [ebp-1188h] BYREF
  int v2105; // [esp+2D8h] [ebp-1184h] BYREF
  int v2106; // [esp+2DCh] [ebp-1180h] BYREF
  size_t *v2107; // [esp+2E0h] [ebp-117Ch] BYREF
  int v2108; // [esp+2E4h] [ebp-1178h] BYREF
  int v2109; // [esp+2E8h] [ebp-1174h] BYREF
  size_t *v2110; // [esp+2ECh] [ebp-1170h] BYREF
  int v2111; // [esp+2F0h] [ebp-116Ch] BYREF
  int v2112; // [esp+2F4h] [ebp-1168h] BYREF
  size_t *v2113; // [esp+2F8h] [ebp-1164h] BYREF
  int v2114; // [esp+2FCh] [ebp-1160h] BYREF
  int v2115;
  size_t *v2116;
  int v2117;
  int v2118; // [esp+30Ch] [ebp-1150h] BYREF
  size_t *v2119;
  int v2120;
  int v2121;
  size_t *v2122; // [esp+31Ch] [ebp-1140h] BYREF
  int v2123;
  int v2124;
  size_t *v2125;
  int v2126; // [esp+32Ch] [ebp-1130h] BYREF
  int v2127;
  size_t *v2128;
  int v2129;
  int v2130; // [esp+33Ch] [ebp-1120h] BYREF
  size_t *v2131;
  int v2132;
  int v2133;
  size_t *v2134; // [esp+34Ch] [ebp-1110h] BYREF
  int v2135;
  int v2136;
  size_t *v2137;
  int v2138; // [esp+35Ch] [ebp-1100h] BYREF
  int v2139;
  size_t *v2140;
  int v2141;
  int v2142; // [esp+36Ch] [ebp-10F0h] BYREF
  size_t *v2143;
  int v2144;
  int v2145;
  size_t *v2146; // [esp+37Ch] [ebp-10E0h] BYREF
  int v2147;
  int v2148;
  size_t *v2149;
  int v2150; // [esp+38Ch] [ebp-10D0h] BYREF
  int v2151;
  size_t *v2152;
  int v2153;
  int v2154; // [esp+39Ch] [ebp-10C0h] BYREF
  size_t *v2155; // [esp+3A0h] [ebp-10BCh] BYREF
  int v2156; // [esp+3A4h] [ebp-10B8h] BYREF
  int v2157; // [esp+3A8h] [ebp-10B4h] BYREF
  size_t *v2158; // [esp+3ACh] [ebp-10B0h] BYREF
  int v2159; // [esp+3B0h] [ebp-10ACh] BYREF
  int v2160; // [esp+3B4h] [ebp-10A8h] BYREF
  size_t *v2161; // [esp+3B8h] [ebp-10A4h] BYREF
  int v2162; // [esp+3BCh] [ebp-10A0h] BYREF
  int v2163; // [esp+3C0h] [ebp-109Ch] BYREF
  size_t *v2164; // [esp+3C4h] [ebp-1098h] BYREF
  int v2165; // [esp+3C8h] [ebp-1094h] BYREF
  int v2166; // [esp+3CCh] [ebp-1090h] BYREF
  size_t *v2167; // [esp+3D0h] [ebp-108Ch] BYREF
  int v2168; // [esp+3D4h] [ebp-1088h] BYREF
  int v2169; // [esp+3D8h] [ebp-1084h] BYREF
  size_t *v2170; // [esp+3DCh] [ebp-1080h] BYREF
  int v2171; // [esp+3E0h] [ebp-107Ch] BYREF
  int v2172; // [esp+3E4h] [ebp-1078h] BYREF
  size_t *v2173; // [esp+3E8h] [ebp-1074h] BYREF
  int v2174; // [esp+3ECh] [ebp-1070h] BYREF
  int v2175; // [esp+3F0h] [ebp-106Ch] BYREF
  size_t *v2176; // [esp+3F4h] [ebp-1068h] BYREF
  int v2177; // [esp+3F8h] [ebp-1064h] BYREF
  int v2178; // [esp+3FCh] [ebp-1060h] BYREF
  size_t *v2179;
  int v2180;
  int v2181;
  size_t *v2182; // [esp+40Ch] [ebp-1050h] BYREF
  int v2183;
  int v2184;
  size_t *v2185;
  int v2186; // [esp+41Ch] [ebp-1040h] BYREF
  int v2187;
  size_t *v2188;
  int v2189;
  int v2190; // [esp+42Ch] [ebp-1030h] BYREF
  size_t *v2191;
  int v2192;
  int v2193;
  size_t *v2194; // [esp+43Ch] [ebp-1020h] BYREF
  int v2195;
  int v2196;
  size_t *v2197;
  int v2198; // [esp+44Ch] [ebp-1010h] BYREF
  int v2199;
  size_t *v2200;
  int v2201;
  int v2202; // [esp+45Ch] [ebp-1000h] BYREF
  size_t *v2203;
  int v2204;
  int v2205;
  size_t *v2206; // [esp+46Ch] [ebp-FF0h] BYREF
  int v2207;
  int v2208;
  size_t *v2209;
  int v2210; // [esp+47Ch] [ebp-FE0h] BYREF
  int v2211;
  size_t *v2212;
  int v2213;
  int v2214; // [esp+48Ch] [ebp-FD0h] BYREF
  size_t *v2215;
  int v2216;
  int v2217;
  size_t *v2218; // [esp+49Ch] [ebp-FC0h] BYREF
  int v2219; // [esp+4A0h] [ebp-FBCh] BYREF
  int v2220; // [esp+4A4h] [ebp-FB8h] BYREF
  size_t *v2221; // [esp+4A8h] [ebp-FB4h] BYREF
  int v2222; // [esp+4ACh] [ebp-FB0h] BYREF
  int v2223; // [esp+4B0h] [ebp-FACh] BYREF
  size_t *v2224; // [esp+4B4h] [ebp-FA8h] BYREF
  int v2225; // [esp+4B8h] [ebp-FA4h] BYREF
  int v2226; // [esp+4BCh] [ebp-FA0h] BYREF
  size_t *v2227; // [esp+4C0h] [ebp-F9Ch] BYREF
  int v2228; // [esp+4C4h] [ebp-F98h] BYREF
  int v2229; // [esp+4C8h] [ebp-F94h] BYREF
  size_t *v2230; // [esp+4CCh] [ebp-F90h] BYREF
  int v2231; // [esp+4D0h] [ebp-F8Ch] BYREF
  int v2232; // [esp+4D4h] [ebp-F88h] BYREF
  size_t *v2233; // [esp+4D8h] [ebp-F84h] BYREF
  int v2234; // [esp+4DCh] [ebp-F80h] BYREF
  int v2235; // [esp+4E0h] [ebp-F7Ch] BYREF
  size_t *v2236; // [esp+4E4h] [ebp-F78h] BYREF
  int v2237; // [esp+4E8h] [ebp-F74h] BYREF
  int v2238; // [esp+4ECh] [ebp-F70h] BYREF
  size_t *v2239; // [esp+4F0h] [ebp-F6Ch] BYREF
  int v2240; // [esp+4F4h] [ebp-F68h] BYREF
  int v2241; // [esp+4F8h] [ebp-F64h] BYREF
  size_t *v2242; // [esp+4FCh] [ebp-F60h] BYREF
  int v2243;
  int v2244;
  size_t *v2245;
  int v2246; // [esp+50Ch] [ebp-F50h] BYREF
  int v2247;
  size_t *v2248;
  int v2249;
  int v2250; // [esp+51Ch] [ebp-F40h] BYREF
  size_t *v2251;
  int v2252;
  int v2253;
  size_t *v2254; // [esp+52Ch] [ebp-F30h] BYREF
  int v2255;
  int v2256;
  size_t *v2257;
  int v2258; // [esp+53Ch] [ebp-F20h] BYREF
  int v2259;
  size_t *v2260;
  int v2261;
  int v2262; // [esp+54Ch] [ebp-F10h] BYREF
  size_t *v2263;
  int v2264;
  int v2265;
  size_t *v2266; // [esp+55Ch] [ebp-F00h] BYREF
  int v2267;
  int v2268;
  size_t *v2269;
  int v2270; // [esp+56Ch] [ebp-EF0h] BYREF
  int v2271;
  size_t *v2272;
  int v2273;
  int v2274; // [esp+57Ch] [ebp-EE0h] BYREF
  size_t *v2275;
  int v2276;
  int v2277;
  size_t *v2278; // [esp+58Ch] [ebp-ED0h] BYREF
  int v2279;
  int v2280;
  size_t *v2281;
  int v2282; // [esp+59Ch] [ebp-EC0h] BYREF
  int v2283; // [esp+5A0h] [ebp-EBCh] BYREF
  size_t *v2284; // [esp+5A4h] [ebp-EB8h] BYREF
  int v2285; // [esp+5A8h] [ebp-EB4h] BYREF
  int v2286; // [esp+5ACh] [ebp-EB0h] BYREF
  size_t *v2287; // [esp+5B0h] [ebp-EACh] BYREF
  int v2288; // [esp+5B4h] [ebp-EA8h] BYREF
  int v2289; // [esp+5B8h] [ebp-EA4h] BYREF
  size_t *v2290; // [esp+5BCh] [ebp-EA0h] BYREF
  int v2291; // [esp+5C0h] [ebp-E9Ch] BYREF
  int v2292; // [esp+5C4h] [ebp-E98h] BYREF
  size_t *v2293; // [esp+5C8h] [ebp-E94h] BYREF
  int v2294; // [esp+5CCh] [ebp-E90h] BYREF
  int v2295; // [esp+5D0h] [ebp-E8Ch] BYREF
  size_t *v2296; // [esp+5D4h] [ebp-E88h] BYREF
  int v2297; // [esp+5D8h] [ebp-E84h] BYREF
  int v2298; // [esp+5DCh] [ebp-E80h] BYREF
  size_t *v2299; // [esp+5E0h] [ebp-E7Ch] BYREF
  int v2300; // [esp+5E4h] [ebp-E78h] BYREF
  int v2301; // [esp+5E8h] [ebp-E74h] BYREF
  size_t *v2302; // [esp+5ECh] [ebp-E70h] BYREF
  int v2303; // [esp+5F0h] [ebp-E6Ch] BYREF
  int v2304; // [esp+5F4h] [ebp-E68h] BYREF
  size_t *v2305; // [esp+5F8h] [ebp-E64h] BYREF
  int v2306; // [esp+5FCh] [ebp-E60h] BYREF
  int v2307;
  size_t *v2308;
  int v2309;
  int v2310; // [esp+60Ch] [ebp-E50h] BYREF
  size_t *v2311;
  int v2312;
  int v2313;
  size_t *v2314; // [esp+61Ch] [ebp-E40h] BYREF
  int v2315;
  int v2316;
  size_t *v2317;
  int v2318; // [esp+62Ch] [ebp-E30h] BYREF
  int v2319;
  size_t *v2320;
  int v2321;
  int v2322; // [esp+63Ch] [ebp-E20h] BYREF
  size_t *v2323;
  int v2324;
  int v2325;
  size_t *v2326; // [esp+64Ch] [ebp-E10h] BYREF
  int v2327;
  int v2328;
  size_t *v2329;
  int v2330; // [esp+65Ch] [ebp-E00h] BYREF
  int v2331;
  size_t *v2332;
  int v2333;
  int v2334; // [esp+66Ch] [ebp-DF0h] BYREF
  size_t *v2335;
  int v2336;
  int v2337;
  size_t *v2338; // [esp+67Ch] [ebp-DE0h] BYREF
  int v2339;
  int v2340;
  size_t *v2341;
  int v2342; // [esp+68Ch] [ebp-DD0h] BYREF
  int v2343;
  size_t *v2344;
  int v2345;
  int v2346; // [esp+69Ch] [ebp-DC0h] BYREF
  size_t *v2347; // [esp+6A0h] [ebp-DBCh] BYREF
  int v2348; // [esp+6A4h] [ebp-DB8h] BYREF
  int v2349; // [esp+6A8h] [ebp-DB4h] BYREF
  size_t *v2350; // [esp+6ACh] [ebp-DB0h] BYREF
  int v2351; // [esp+6B0h] [ebp-DACh] BYREF
  int v2352; // [esp+6B4h] [ebp-DA8h] BYREF
  size_t *v2353; // [esp+6B8h] [ebp-DA4h] BYREF
  int v2354; // [esp+6BCh] [ebp-DA0h] BYREF
  int v2355; // [esp+6C0h] [ebp-D9Ch] BYREF
  size_t *v2356; // [esp+6C4h] [ebp-D98h] BYREF
  int v2357; // [esp+6C8h] [ebp-D94h] BYREF
  int v2358; // [esp+6CCh] [ebp-D90h] BYREF
  size_t *v2359; // [esp+6D0h] [ebp-D8Ch] BYREF
  int v2360; // [esp+6D4h] [ebp-D88h] BYREF
  int v2361; // [esp+6D8h] [ebp-D84h] BYREF
  size_t *v2362; // [esp+6DCh] [ebp-D80h] BYREF
  int v2363; // [esp+6E0h] [ebp-D7Ch] BYREF
  int v2364; // [esp+6E4h] [ebp-D78h] BYREF
  size_t *v2365; // [esp+6E8h] [ebp-D74h] BYREF
  int v2366; // [esp+6ECh] [ebp-D70h] BYREF
  int v2367; // [esp+6F0h] [ebp-D6Ch] BYREF
  size_t *v2368; // [esp+6F4h] [ebp-D68h] BYREF
  int v2369; // [esp+6F8h] [ebp-D64h] BYREF
  int v2370; // [esp+6FCh] [ebp-D60h] BYREF
  size_t *v2371;
  int v2372;
  int v2373;
  size_t *v2374; // [esp+70Ch] [ebp-D50h] BYREF
  int v2375;
  int v2376;
  size_t *v2377;
  int v2378; // [esp+71Ch] [ebp-D40h] BYREF
  int v2379;
  size_t *v2380;
  int v2381;
  int v2382; // [esp+72Ch] [ebp-D30h] BYREF
  size_t *v2383;
  int v2384;
  int v2385;
  size_t *v2386; // [esp+73Ch] [ebp-D20h] BYREF
  int v2387;
  int v2388;
  size_t *v2389;
  int v2390; // [esp+74Ch] [ebp-D10h] BYREF
  int v2391;
  size_t *v2392;
  int v2393;
  int v2394; // [esp+75Ch] [ebp-D00h] BYREF
  size_t *v2395;
  int v2396;
  int v2397;
  size_t *v2398; // [esp+76Ch] [ebp-CF0h] BYREF
  int v2399;
  int v2400;
  size_t *v2401;
  int v2402; // [esp+77Ch] [ebp-CE0h] BYREF
  int v2403;
  size_t *v2404;
  int v2405;
  int v2406; // [esp+78Ch] [ebp-CD0h] BYREF
  size_t *v2407;
  int v2408;
  int v2409;
  size_t *v2410; // [esp+79Ch] [ebp-CC0h] BYREF
  int v2411; // [esp+7A0h] [ebp-CBCh] BYREF
  int v2412; // [esp+7A4h] [ebp-CB8h] BYREF
  size_t *v2413; // [esp+7A8h] [ebp-CB4h] BYREF
  int v2414; // [esp+7ACh] [ebp-CB0h] BYREF
  int v2415; // [esp+7B0h] [ebp-CACh] BYREF
  size_t *v2416; // [esp+7B4h] [ebp-CA8h] BYREF
  int v2417; // [esp+7B8h] [ebp-CA4h] BYREF
  int v2418; // [esp+7BCh] [ebp-CA0h] BYREF
  size_t *v2419; // [esp+7C0h] [ebp-C9Ch] BYREF
  int v2420; // [esp+7C4h] [ebp-C98h] BYREF
  size_t *v2421; // [esp+7C8h] [ebp-C94h] BYREF
  int v2422; // [esp+7CCh] [ebp-C90h] BYREF
  size_t *v2423; // [esp+7D0h] [ebp-C8Ch] BYREF
  int v2424[3]; // [esp+7D4h] [ebp-C88h] BYREF
  void *v2425[3]; // [esp+7E0h] [ebp-C7Ch] BYREF
  int v2426[3]; // [esp+7ECh] [ebp-C70h] BYREF
  void *v2427[3]; // [esp+7F8h] [ebp-C64h] BYREF
  int v2428[3];
  void *v2429[3];
  int v2430[3]; // [esp+81Ch] [ebp-C40h] BYREF
  void *v2431[3];
  int v2432[3];
  void *v2433[3];
  int v2434[3]; // [esp+84Ch] [ebp-C10h] BYREF
  void *v2435[3];
  int v2436[3];
  void *v2437[3];
  int v2438[3]; // [esp+87Ch] [ebp-BE0h] BYREF
  void *v2439[3];
  int v2440[3];
  void *v2441[3]; // [esp+8A0h] [ebp-BBCh] BYREF
  int v2442[3]; // [esp+8ACh] [ebp-BB0h] BYREF
  void *v2443[3]; // [esp+8B8h] [ebp-BA4h] BYREF
  int v2444[3]; // [esp+8C4h] [ebp-B98h] BYREF
  void *v2445[3]; // [esp+8D0h] [ebp-B8Ch] BYREF
  int v2446[3]; // [esp+8DCh] [ebp-B80h] BYREF
  void *v2447[3]; // [esp+8E8h] [ebp-B74h] BYREF
  int v2448[3]; // [esp+8F4h] [ebp-B68h] BYREF
  void *v2449[3];
  int v2450[3]; // [esp+90Ch] [ebp-B50h] BYREF
  void *v2451[3];
  int v2452[3];
  void *v2453[3];
  int v2454[3]; // [esp+93Ch] [ebp-B20h] BYREF
  void *v2455[3];
  int v2456[3];
  void *v2457[3];
  int v2458[3]; // [esp+96Ch] [ebp-AF0h] BYREF
  void *v2459[3];
  int v2460[3];
  void *v2461[3];
  int v2462[3]; // [esp+99Ch] [ebp-AC0h] BYREF
  void *v2463[3]; // [esp+9A8h] [ebp-AB4h] BYREF
  int v2464[3]; // [esp+9B4h] [ebp-AA8h] BYREF
  void *v2465[3]; // [esp+9C0h] [ebp-A9Ch] BYREF
  int v2466[3]; // [esp+9CCh] [ebp-A90h] BYREF
  void *v2467[3]; // [esp+9D8h] [ebp-A84h] BYREF
  int v2468[3]; // [esp+9E4h] [ebp-A78h] BYREF
  void *v2469[3]; // [esp+9F0h] [ebp-A6Ch] BYREF
  int v2470[3]; // [esp+9FCh] [ebp-A60h] BYREF
  void *v2471[3]; // [esp+A08h] [ebp-A54h] BYREF
  int v2472[3]; // [esp+A14h] [ebp-A48h] BYREF
  void *v2473[3]; // [esp+A20h] [ebp-A3Ch] BYREF
  int v2474[3]; // [esp+A2Ch] [ebp-A30h] BYREF
  void *v2475[3]; // [esp+A38h] [ebp-A24h] BYREF
  int v2476[3]; // [esp+A44h] [ebp-A18h] BYREF
  void *v2477[3]; // [esp+A50h] [ebp-A0Ch] BYREF
  int v2478[3]; // [esp+A5Ch] [ebp-A00h] BYREF
  void *v2479[3]; // [esp+A68h] [ebp-9F4h] BYREF
  int v2480[3]; // [esp+A74h] [ebp-9E8h] BYREF
  void *v2481[3]; // [esp+A80h] [ebp-9DCh] BYREF
  int v2482[3]; // [esp+A8Ch] [ebp-9D0h] BYREF
  void *v2483[3]; // [esp+A98h] [ebp-9C4h] BYREF
  int v2484[3]; // [esp+AA4h] [ebp-9B8h] BYREF
  void *v2485[3]; // [esp+AB0h] [ebp-9ACh] BYREF
  int v2486[3]; // [esp+ABCh] [ebp-9A0h] BYREF
  void *v2487[3]; // [esp+AC8h] [ebp-994h] BYREF
  int v2488[3]; // [esp+AD4h] [ebp-988h] BYREF
  void *v2489[3]; // [esp+AE0h] [ebp-97Ch] BYREF
  int v2490[3]; // [esp+AECh] [ebp-970h] BYREF
  void *v2491[3]; // [esp+AF8h] [ebp-964h] BYREF
  int v2492[3]; // [esp+B04h] [ebp-958h] BYREF
  void *v2493[3]; // [esp+B10h] [ebp-94Ch] BYREF
  int v2494[3]; // [esp+B1Ch] [ebp-940h] BYREF
  void *v2495[3]; // [esp+B28h] [ebp-934h] BYREF
  int v2496[3]; // [esp+B34h] [ebp-928h] BYREF
  void *v2497[3]; // [esp+B40h] [ebp-91Ch] BYREF
  int v2498[3]; // [esp+B4Ch] [ebp-910h] BYREF
  void *v2499[3]; // [esp+B58h] [ebp-904h] BYREF
  int v2500[3]; // [esp+B64h] [ebp-8F8h] BYREF
  void *v2501[3]; // [esp+B70h] [ebp-8ECh] BYREF
  int v2502[3]; // [esp+B7Ch] [ebp-8E0h] BYREF
  void *v2503[3]; // [esp+B88h] [ebp-8D4h] BYREF
  int v2504[3]; // [esp+B94h] [ebp-8C8h] BYREF
  void *v2505[3]; // [esp+BA0h] [ebp-8BCh] BYREF
  int v2506[3]; // [esp+BACh] [ebp-8B0h] BYREF
  void *v2507[3]; // [esp+BB8h] [ebp-8A4h] BYREF
  int v2508[3]; // [esp+BC4h] [ebp-898h] BYREF
  void *v2509[3]; // [esp+BD0h] [ebp-88Ch] BYREF
  int v2510[3]; // [esp+BDCh] [ebp-880h] BYREF
  void *v2511[3]; // [esp+BE8h] [ebp-874h] BYREF
  int v2512[3]; // [esp+BF4h] [ebp-868h] BYREF
  void *v2513[3]; // [esp+C00h] [ebp-85Ch] BYREF
  int v2514[3]; // [esp+C0Ch] [ebp-850h] BYREF
  void *v2515[3]; // [esp+C18h] [ebp-844h] BYREF
  int v2516[3]; // [esp+C24h] [ebp-838h] BYREF
  void *v2517[3]; // [esp+C30h] [ebp-82Ch] BYREF
  int v2518[3]; // [esp+C3Ch] [ebp-820h] BYREF
  void *v2519[3]; // [esp+C48h] [ebp-814h] BYREF
  int v2520[3]; // [esp+C54h] [ebp-808h] BYREF
  void *v2521[3]; // [esp+C60h] [ebp-7FCh] BYREF
  int v2522[3]; // [esp+C6Ch] [ebp-7F0h] BYREF
  void *v2523[3]; // [esp+C78h] [ebp-7E4h] BYREF
  int v2524[3]; // [esp+C84h] [ebp-7D8h] BYREF
  void *v2525[3]; // [esp+C90h] [ebp-7CCh] BYREF
  int v2526[3]; // [esp+C9Ch] [ebp-7C0h] BYREF
  void *v2527[3]; // [esp+CA8h] [ebp-7B4h] BYREF
  int v2528[3]; // [esp+CB4h] [ebp-7A8h] BYREF
  void *v2529[3]; // [esp+CC0h] [ebp-79Ch] BYREF
  int v2530[3]; // [esp+CCCh] [ebp-790h] BYREF
  void *v2531[3]; // [esp+CD8h] [ebp-784h] BYREF
  int v2532[3]; // [esp+CE4h] [ebp-778h] BYREF
  void *v2533[3]; // [esp+CF0h] [ebp-76Ch] BYREF
  int v2534[3]; // [esp+CFCh] [ebp-760h] BYREF
  void *v2535[3]; // [esp+D08h] [ebp-754h] BYREF
  int v2536[3]; // [esp+D14h] [ebp-748h] BYREF
  void *v2537[3]; // [esp+D20h] [ebp-73Ch] BYREF
  int v2538[3]; // [esp+D2Ch] [ebp-730h] BYREF
  void *v2539[3]; // [esp+D38h] [ebp-724h] BYREF
  int v2540[3]; // [esp+D44h] [ebp-718h] BYREF
  void *v2541[3]; // [esp+D50h] [ebp-70Ch] BYREF
  int v2542[3]; // [esp+D5Ch] [ebp-700h] BYREF
  void *v2543[3]; // [esp+D68h] [ebp-6F4h] BYREF
  int v2544[3]; // [esp+D74h] [ebp-6E8h] BYREF
  void *v2545[3]; // [esp+D80h] [ebp-6DCh] BYREF
  int v2546[3]; // [esp+D8Ch] [ebp-6D0h] BYREF
  void *v2547[3]; // [esp+D98h] [ebp-6C4h] BYREF
  int v2548[3]; // [esp+DA4h] [ebp-6B8h] BYREF
  void *v2549[3]; // [esp+DB0h] [ebp-6ACh] BYREF
  int v2550[3]; // [esp+DBCh] [ebp-6A0h] BYREF
  void *v2551[3]; // [esp+DC8h] [ebp-694h] BYREF
  int v2552[3]; // [esp+DD4h] [ebp-688h] BYREF
  void *v2553[3]; // [esp+DE0h] [ebp-67Ch] BYREF
  int v2554[3]; // [esp+DECh] [ebp-670h] BYREF
  void *v2555[3]; // [esp+DF8h] [ebp-664h] BYREF
  int v2556[3]; // [esp+E04h] [ebp-658h] BYREF
  void *v2557[3]; // [esp+E10h] [ebp-64Ch] BYREF
  int v2558[3]; // [esp+E1Ch] [ebp-640h] BYREF
  void *v2559[3]; // [esp+E28h] [ebp-634h] BYREF
  int v2560[3]; // [esp+E34h] [ebp-628h] BYREF
  void *v2561[3]; // [esp+E40h] [ebp-61Ch] BYREF
  int v2562[3]; // [esp+E4Ch] [ebp-610h] BYREF
  void *v2563[3]; // [esp+E58h] [ebp-604h] BYREF
  int v2564[3]; // [esp+E64h] [ebp-5F8h] BYREF
  void *v2565[3]; // [esp+E70h] [ebp-5ECh] BYREF
  int v2566[3]; // [esp+E7Ch] [ebp-5E0h] BYREF
  void *v2567[3]; // [esp+E88h] [ebp-5D4h] BYREF
  int v2568[3]; // [esp+E94h] [ebp-5C8h] BYREF
  void *v2569[3]; // [esp+EA0h] [ebp-5BCh] BYREF
  int v2570[3]; // [esp+EACh] [ebp-5B0h] BYREF
  void *v2571[3]; // [esp+EB8h] [ebp-5A4h] BYREF
  int v2572[3]; // [esp+EC4h] [ebp-598h] BYREF
  void *v2573[3]; // [esp+ED0h] [ebp-58Ch] BYREF
  int v2574[3]; // [esp+EDCh] [ebp-580h] BYREF
  void *v2575[3]; // [esp+EE8h] [ebp-574h] BYREF
  int v2576[3]; // [esp+EF4h] [ebp-568h] BYREF
  void *v2577[3]; // [esp+F00h] [ebp-55Ch] BYREF
  int v2578[3]; // [esp+F0Ch] [ebp-550h] BYREF
  void *v2579[3]; // [esp+F18h] [ebp-544h] BYREF
  int v2580[3]; // [esp+F24h] [ebp-538h] BYREF
  void *v2581[3]; // [esp+F30h] [ebp-52Ch] BYREF
  int v2582[3]; // [esp+F3Ch] [ebp-520h] BYREF
  void *v2583[3]; // [esp+F48h] [ebp-514h] BYREF
  int v2584[3]; // [esp+F54h] [ebp-508h] BYREF
  void *v2585[3]; // [esp+F60h] [ebp-4FCh] BYREF
  int v2586[3]; // [esp+F6Ch] [ebp-4F0h] BYREF
  void *v2587[3]; // [esp+F78h] [ebp-4E4h] BYREF
  int v2588[3]; // [esp+F84h] [ebp-4D8h] BYREF
  void *v2589[3]; // [esp+F90h] [ebp-4CCh] BYREF
  int v2590[3]; // [esp+F9Ch] [ebp-4C0h] BYREF
  void *v2591[3]; // [esp+FA8h] [ebp-4B4h] BYREF
  int v2592[3]; // [esp+FB4h] [ebp-4A8h] BYREF
  void *v2593[3]; // [esp+FC0h] [ebp-49Ch] BYREF
  int v2594[3]; // [esp+FCCh] [ebp-490h] BYREF
  void *v2595[3]; // [esp+FD8h] [ebp-484h] BYREF
  int v2596[3]; // [esp+FE4h] [ebp-478h] BYREF
  void *v2597[3]; // [esp+FF0h] [ebp-46Ch] BYREF
  int v2598[3]; // [esp+FFCh] [ebp-460h] BYREF
  void *v2599[3];
  int v2600[3];
  void *v2601[3];
  int v2602[3]; // [esp+102Ch] [ebp-430h] BYREF
  void *v2603[3];
  int v2604[3];
  void *v2605[3];
  int v2606[3]; // [esp+105Ch] [ebp-400h] BYREF
  void *v2607[3];
  int v2608[3];
  void *v2609[3];
  int v2610[3]; // [esp+108Ch] [ebp-3D0h] BYREF
  void *v2611[3];
  int v2612[3]; // [esp+10A4h] [ebp-3B8h] BYREF
  void *v2613[3]; // [esp+10B0h] [ebp-3ACh] BYREF
  int v2614[3]; // [esp+10BCh] [ebp-3A0h] BYREF
  void *v2615[3]; // [esp+10C8h] [ebp-394h] BYREF
  int v2616[3]; // [esp+10D4h] [ebp-388h] BYREF
  void *v2617[3]; // [esp+10E0h] [ebp-37Ch] BYREF
  int v2618[3]; // [esp+10ECh] [ebp-370h] BYREF
  void *v2619[3]; // [esp+10F8h] [ebp-364h] BYREF
  int v2620[3];
  void *v2621[3];
  int v2622[3]; // [esp+111Ch] [ebp-340h] BYREF
  void *v2623[3];
  int v2624[3];
  void *v2625[3];
  int v2626[3]; // [esp+114Ch] [ebp-310h] BYREF
  void *v2627[3];
  int v2628[3];
  void *v2629[3];
  int v2630[3]; // [esp+117Ch] [ebp-2E0h] BYREF
  void *v2631[3];
  int v2632[3];
  void *v2633[3]; // [esp+11A0h] [ebp-2BCh] BYREF
  int v2634[3]; // [esp+11ACh] [ebp-2B0h] BYREF
  void *v2635[3]; // [esp+11B8h] [ebp-2A4h] BYREF
  int v2636[3]; // [esp+11C4h] [ebp-298h] BYREF
  void *v2637[3]; // [esp+11D0h] [ebp-28Ch] BYREF
  int v2638[3]; // [esp+11DCh] [ebp-280h] BYREF
  void *v2639[3]; // [esp+11E8h] [ebp-274h] BYREF
  int v2640[3]; // [esp+11F4h] [ebp-268h] BYREF
  void *v2641[3];
  int v2642[3]; // [esp+120Ch] [ebp-250h] BYREF
  void *v2643[3];
  int v2644[3];
  void *v2645[3];
  int v2646[3]; // [esp+123Ch] [ebp-220h] BYREF
  void *v2647[3];
  int v2648[3];
  void *v2649[3];
  int v2650[3]; // [esp+126Ch] [ebp-1F0h] BYREF
  void *v2651[3];
  int v2652[3];
  void *v2653[3];
  int v2654[3]; // [esp+129Ch] [ebp-1C0h] BYREF
  void *v2655[3]; // [esp+12A8h] [ebp-1B4h] BYREF
  int v2656[3]; // [esp+12B4h] [ebp-1A8h] BYREF
  void *v2657[3]; // [esp+12C0h] [ebp-19Ch] BYREF
  int v2658[3]; // [esp+12CCh] [ebp-190h] BYREF
  void *v2659[3]; // [esp+12D8h] [ebp-184h] BYREF
  int v2660[3]; // [esp+12E4h] [ebp-178h] BYREF
  void *v2661[3]; // [esp+12F0h] [ebp-16Ch] BYREF
  int v2662[3]; // [esp+12FCh] [ebp-160h] BYREF
  void *v2663[3];
  int v2664[3];
  void *v2665[3];
  int v2666[3]; // [esp+132Ch] [ebp-130h] BYREF
  void *v2667[3];
  int v2668[3];
  void *v2669[3];
  int v2670[3]; // [esp+135Ch] [ebp-100h] BYREF
  void *v2671[3];
  int v2672[3];
  void *v2673[3];
  int v2674[3]; // [esp+138Ch] [ebp-D0h] BYREF
  void *v2675[3];
  int v2676[3]; // [esp+13A4h] [ebp-B8h] BYREF
  void *v2677[3]; // [esp+13B0h] [ebp-ACh] BYREF
  int v2678[3]; // [esp+13BCh] [ebp-A0h] BYREF
  void *v2679[3]; // [esp+13C8h] [ebp-94h] BYREF
  int v2680; // [esp+13D4h] [ebp-88h] BYREF
  int v2681; // [esp+13D8h] [ebp-84h]
  int v2682; // [esp+13DCh] [ebp-80h]
  void *v2683; // [esp+13E0h] [ebp-7Ch] BYREF
  int v2684; // [esp+13E4h] [ebp-78h]
  int v2685; // [esp+13E8h] [ebp-74h]
  int v2686[3]; // [esp+13ECh] [ebp-70h] BYREF
  void *v2687[3]; // [esp+13F8h] [ebp-64h] BYREF
  int v2688;
  size_t *v2689;
  int v2690; // [esp+140Ch] [ebp-50h]
  int v2691;
  int v2692;
  uint32_t v2693[17];

  g4_std::string::construct_from_cstr((int *)((char *)&v2036 + 3), "SpawnGroup_FPP");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)((char *)&v2036 + 3));
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70((int *)((char *)&v2036 + 3));
  v1856 = dword_20D8D40;
  if ( dword_20D8D40 > 0 )
  {
    v2034 = 0;
    v1 = (std::vector<int> *)&v2683;
    v2 = 0;
    do
    {
      v1261 = 32 * v2;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8D30 + 32 * v2 + 12));
      v3 = dword_20D8D30;
      v4 = dword_20D8D30 + v1261;
      v5 = *(uint32_t *)(dword_20D8D30 + v1261 + 8);
      v2680 = 0;
      v1727 = v5;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8D30 + v1261 + 20) > 0 )
      {
        v1390 = v1;
        v6 = 0;
        v7 = *(uint32_t *)(v4 + 20);
        while ( 1 )
        {
          v8 = *(char **)(*(uint32_t *)(v3 + v1261 + 16) + 4 * v6++);
          g4_std::string::construct_from_cstr(&v2037, v8);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2037);
          sub_1938B70(&v2037);
          if ( v7 == v6 )
            break;
          v3 = dword_20D8D30;
        }
        v3 = dword_20D8D30;
        v1 = v1390;
        v4 = dword_20D8D30 + v1261;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1391 = *(uint32_t *)(v4 + 28);
      if ( v1391 > 0 )
      {
        v9 = 0;
        while ( 1 )
        {
          v1211 = (std::vector<int> *)(*(uint32_t *)(v3 + v1261 + 24) + 4 * v9++);
          g4_std::vector_int_id_9b8903::push_back(v1, (const int *)v1211);
          if ( v1391 == v9 )
            break;
          v3 = dword_20D8D30;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2425, v1);
      sub_8DE270(v2424, &v2680, v10);
      sub_193A2E0(&v2038, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2038, v1727, v2424, (glf::Self **)v2425);
      sub_1938B70(&v2038);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2424);
      if ( v2425[0] != nullptr )
        operator delete(v2425[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v1 != 0 )
        operator delete(*(void **)v1);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v2 = ++v2034;
    }
    while ( v1856 != v2034 );
  }
  v2035 = (int *)(a1 + 8);
  sub_93A000((int *)(a1 + 8), (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2039, "SpawnGroup_Bank_Public");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2039);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2039);
  v1985 = dword_20D8D20;
  if ( dword_20D8D20 > 0 )
  {
    v1728 = 0;
    v11 = (std::vector<int> *)&v2683;
    v12 = 0;
    do
    {
      v1262 = 32 * v12;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8D10 + 32 * v12 + 12));
      v13 = dword_20D8D10;
      v14 = dword_20D8D10 + v1262;
      v15 = *(uint32_t *)(dword_20D8D10 + v1262 + 8);
      v2680 = 0;
      v1857 = v15;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8D10 + v1262 + 20) > 0 )
      {
        v1392 = v11;
        v16 = 0;
        v17 = *(uint32_t *)(v14 + 20);
        while ( 1 )
        {
          v18 = *(char **)(*(uint32_t *)(v13 + v1262 + 16) + 4 * v16++);
          g4_std::string::construct_from_cstr(&v2040, v18);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2040);
          sub_1938B70(&v2040);
          if ( v17 == v16 )
            break;
          v13 = dword_20D8D10;
        }
        v13 = dword_20D8D10;
        v11 = v1392;
        v14 = dword_20D8D10 + v1262;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1393 = *(uint32_t *)(v14 + 28);
      if ( v1393 > 0 )
      {
        v19 = 0;
        while ( 1 )
        {
          v1212 = (std::vector<int> *)(*(uint32_t *)(v13 + v1262 + 24) + 4 * v19++);
          g4_std::vector_int_id_9b8903::push_back(v11, (const int *)v1212);
          if ( v1393 == v19 )
            break;
          v13 = dword_20D8D10;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2427, v11);
      sub_8DE270(v2426, &v2680, v20);
      sub_193A2E0(&v2041, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2041, v1857, v2426, (glf::Self **)v2427);
      sub_1938B70(&v2041);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2426);
      if ( v2427[0] != nullptr )
        operator delete(v2427[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v11 != 0 )
        operator delete(*(void **)v11);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v12 = ++v1728;
    }
    while ( v1985 != v1728 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2042, "SpawnGroup_Bank_Office");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2042);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2042);
  v1986 = dword_20D8D00;
  if ( dword_20D8D00 > 0 )
  {
    v1729 = 0;
    v21 = (std::vector<int> *)&v2683;
    v22 = 0;
    do
    {
      v1263 = 32 * v22;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8CF0 + 32 * v22 + 12));
      v23 = dword_20D8CF0;
      v24 = dword_20D8CF0 + v1263;
      v25 = *(uint32_t *)(dword_20D8CF0 + v1263 + 8);
      v2680 = 0;
      v1858 = v25;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8CF0 + v1263 + 20) > 0 )
      {
        v1394 = v21;
        v26 = 0;
        v27 = *(uint32_t *)(v24 + 20);
        while ( 1 )
        {
          v28 = *(char **)(*(uint32_t *)(v23 + v1263 + 16) + 4 * v26++);
          g4_std::string::construct_from_cstr(&v2043, v28);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2043);
          sub_1938B70(&v2043);
          if ( v27 == v26 )
            break;
          v23 = dword_20D8CF0;
        }
        v23 = dword_20D8CF0;
        v21 = v1394;
        v24 = dword_20D8CF0 + v1263;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1395 = *(uint32_t *)(v24 + 28);
      if ( v1395 > 0 )
      {
        v29 = 0;
        while ( 1 )
        {
          v1213 = (std::vector<int> *)(*(uint32_t *)(v23 + v1263 + 24) + 4 * v29++);
          g4_std::vector_int_id_9b8903::push_back(v21, (const int *)v1213);
          if ( v1395 == v29 )
            break;
          v23 = dword_20D8CF0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2429, v21);
      sub_8DE270(v2428, &v2680, v30);
      sub_193A2E0(&v2044, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2044, v1858, v2428, (glf::Self **)v2429);
      sub_1938B70(&v2044);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2428);
      if ( v2429[0] != nullptr )
        operator delete(v2429[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v21 != 0 )
        operator delete(*(void **)v21);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v22 = ++v1729;
    }
    while ( v1986 != v1729 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2045, "SpawnGroup_Cop_Drivers_Beige");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2045);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2045);
  v1987 = dword_20D8F60;
  if ( dword_20D8F60 > 0 )
  {
    v1730 = 0;
    v31 = (std::vector<int> *)&v2683;
    v32 = 0;
    do
    {
      v1264 = 32 * v32;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8F50 + 32 * v32 + 12));
      v33 = dword_20D8F50;
      v34 = dword_20D8F50 + v1264;
      v35 = *(uint32_t *)(dword_20D8F50 + v1264 + 8);
      v2680 = 0;
      v1859 = v35;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8F50 + v1264 + 20) > 0 )
      {
        v1396 = v31;
        v36 = 0;
        v37 = *(uint32_t *)(v34 + 20);
        while ( 1 )
        {
          v38 = *(char **)(*(uint32_t *)(v33 + v1264 + 16) + 4 * v36++);
          g4_std::string::construct_from_cstr(&v2046, v38);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2046);
          sub_1938B70(&v2046);
          if ( v37 == v36 )
            break;
          v33 = dword_20D8F50;
        }
        v33 = dword_20D8F50;
        v31 = v1396;
        v34 = dword_20D8F50 + v1264;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1397 = *(uint32_t *)(v34 + 28);
      if ( v1397 > 0 )
      {
        v39 = 0;
        while ( 1 )
        {
          v1214 = (std::vector<int> *)(*(uint32_t *)(v33 + v1264 + 24) + 4 * v39++);
          g4_std::vector_int_id_9b8903::push_back(v31, (const int *)v1214);
          if ( v1397 == v39 )
            break;
          v33 = dword_20D8F50;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2431, v31);
      sub_8DE270(v2430, &v2680, v40);
      sub_193A2E0(&v2047, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2047, v1859, v2430, (glf::Self **)v2431);
      sub_1938B70(&v2047);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2430);
      if ( v2431[0] != nullptr )
        operator delete(v2431[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v31 != 0 )
        operator delete(*(void **)v31);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v32 = ++v1730;
    }
    while ( v1987 != v1730 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2048, "SpawnGroup_Cop_Drivers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2048);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2048);
  v1988 = dword_20D8F40;
  if ( dword_20D8F40 > 0 )
  {
    v1731 = 0;
    v41 = (std::vector<int> *)&v2683;
    v42 = 0;
    do
    {
      v1265 = 32 * v42;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8F30 + 32 * v42 + 12));
      v43 = dword_20D8F30;
      v44 = dword_20D8F30 + v1265;
      v45 = *(uint32_t *)(dword_20D8F30 + v1265 + 8);
      v2680 = 0;
      v1860 = v45;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8F30 + v1265 + 20) > 0 )
      {
        v1398 = v41;
        v46 = 0;
        v47 = *(uint32_t *)(v44 + 20);
        while ( 1 )
        {
          v48 = *(char **)(*(uint32_t *)(v43 + v1265 + 16) + 4 * v46++);
          g4_std::string::construct_from_cstr(&v2049, v48);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2049);
          sub_1938B70(&v2049);
          if ( v47 == v46 )
            break;
          v43 = dword_20D8F30;
        }
        v43 = dword_20D8F30;
        v41 = v1398;
        v44 = dword_20D8F30 + v1265;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1399 = *(uint32_t *)(v44 + 28);
      if ( v1399 > 0 )
      {
        v49 = 0;
        while ( 1 )
        {
          v1215 = (std::vector<int> *)(*(uint32_t *)(v43 + v1265 + 24) + 4 * v49++);
          g4_std::vector_int_id_9b8903::push_back(v41, (const int *)v1215);
          if ( v1399 == v49 )
            break;
          v43 = dword_20D8F30;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2433, v41);
      sub_8DE270(v2432, &v2680, v50);
      sub_193A2E0(&v2050, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2050, v1860, v2432, (glf::Self **)v2433);
      sub_1938B70(&v2050);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2432);
      if ( v2433[0] != nullptr )
        operator delete(v2433[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v41 != 0 )
        operator delete(*(void **)v41);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v42 = ++v1731;
    }
    while ( v1988 != v1731 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2051, "SpawnGroup_Military_Drivers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2051);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2051);
  v1989 = dword_20D8F20;
  if ( dword_20D8F20 > 0 )
  {
    v1732 = 0;
    v51 = (std::vector<int> *)&v2683;
    v52 = 0;
    do
    {
      v1266 = 32 * v52;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8F10 + 32 * v52 + 12));
      v53 = dword_20D8F10;
      v54 = dword_20D8F10 + v1266;
      v55 = *(uint32_t *)(dword_20D8F10 + v1266 + 8);
      v2680 = 0;
      v1861 = v55;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8F10 + v1266 + 20) > 0 )
      {
        v1400 = v51;
        v56 = 0;
        v57 = *(uint32_t *)(v54 + 20);
        while ( 1 )
        {
          v58 = *(char **)(*(uint32_t *)(v53 + v1266 + 16) + 4 * v56++);
          g4_std::string::construct_from_cstr(&v2052, v58);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2052);
          sub_1938B70(&v2052);
          if ( v57 == v56 )
            break;
          v53 = dword_20D8F10;
        }
        v53 = dword_20D8F10;
        v51 = v1400;
        v54 = dword_20D8F10 + v1266;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1401 = *(uint32_t *)(v54 + 28);
      if ( v1401 > 0 )
      {
        v59 = 0;
        while ( 1 )
        {
          v1216 = (std::vector<int> *)(*(uint32_t *)(v53 + v1266 + 24) + 4 * v59++);
          g4_std::vector_int_id_9b8903::push_back(v51, (const int *)v1216);
          if ( v1401 == v59 )
            break;
          v53 = dword_20D8F10;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2435, v51);
      sub_8DE270(v2434, &v2680, v60);
      sub_193A2E0(&v2053, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2053, v1861, v2434, (glf::Self **)v2435);
      sub_1938B70(&v2053);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2434);
      if ( v2435[0] != nullptr )
        operator delete(v2435[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v51 != 0 )
        operator delete(*(void **)v51);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v52 = ++v1732;
    }
    while ( v1989 != v1732 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2054, "SpawnGroup_CopPilot");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2054);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2054);
  v1990 = dword_20D8F00;
  if ( dword_20D8F00 > 0 )
  {
    v1733 = 0;
    v61 = (std::vector<int> *)&v2683;
    v62 = 0;
    do
    {
      v1267 = 32 * v62;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8EF0 + 32 * v62 + 12));
      v63 = dword_20D8EF0;
      v64 = dword_20D8EF0 + v1267;
      v65 = *(uint32_t *)(dword_20D8EF0 + v1267 + 8);
      v2680 = 0;
      v1862 = v65;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8EF0 + v1267 + 20) > 0 )
      {
        v1402 = v61;
        v66 = 0;
        v67 = *(uint32_t *)(v64 + 20);
        while ( 1 )
        {
          v68 = *(char **)(*(uint32_t *)(v63 + v1267 + 16) + 4 * v66++);
          g4_std::string::construct_from_cstr(&v2055, v68);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2055);
          sub_1938B70(&v2055);
          if ( v67 == v66 )
            break;
          v63 = dword_20D8EF0;
        }
        v63 = dword_20D8EF0;
        v61 = v1402;
        v64 = dword_20D8EF0 + v1267;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1403 = *(uint32_t *)(v64 + 28);
      if ( v1403 > 0 )
      {
        v69 = 0;
        while ( 1 )
        {
          v1217 = (std::vector<int> *)(*(uint32_t *)(v63 + v1267 + 24) + 4 * v69++);
          g4_std::vector_int_id_9b8903::push_back(v61, (const int *)v1217);
          if ( v1403 == v69 )
            break;
          v63 = dword_20D8EF0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2437, v61);
      sub_8DE270(v2436, &v2680, v70);
      sub_193A2E0(&v2056, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2056, v1862, v2436, (glf::Self **)v2437);
      sub_1938B70(&v2056);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2436);
      if ( v2437[0] != nullptr )
        operator delete(v2437[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v61 != 0 )
        operator delete(*(void **)v61);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v62 = ++v1733;
    }
    while ( v1990 != v1733 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2057, "SpawnGroup_MilitaryPilots");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2057);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2057);
  v1991 = dword_20D8EE0;
  if ( dword_20D8EE0 > 0 )
  {
    v1734 = 0;
    v71 = (std::vector<int> *)&v2683;
    v72 = 0;
    do
    {
      v1268 = 32 * v72;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8ED0 + 32 * v72 + 12));
      v73 = dword_20D8ED0;
      v74 = dword_20D8ED0 + v1268;
      v75 = *(uint32_t *)(dword_20D8ED0 + v1268 + 8);
      v2680 = 0;
      v1863 = v75;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8ED0 + v1268 + 20) > 0 )
      {
        v1404 = v71;
        v76 = 0;
        v77 = *(uint32_t *)(v74 + 20);
        while ( 1 )
        {
          v78 = *(char **)(*(uint32_t *)(v73 + v1268 + 16) + 4 * v76++);
          g4_std::string::construct_from_cstr(&v2058, v78);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2058);
          sub_1938B70(&v2058);
          if ( v77 == v76 )
            break;
          v73 = dword_20D8ED0;
        }
        v73 = dword_20D8ED0;
        v71 = v1404;
        v74 = dword_20D8ED0 + v1268;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1405 = *(uint32_t *)(v74 + 28);
      if ( v1405 > 0 )
      {
        v79 = 0;
        while ( 1 )
        {
          v1218 = (std::vector<int> *)(*(uint32_t *)(v73 + v1268 + 24) + 4 * v79++);
          g4_std::vector_int_id_9b8903::push_back(v71, (const int *)v1218);
          if ( v1405 == v79 )
            break;
          v73 = dword_20D8ED0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2439, v71);
      sub_8DE270(v2438, &v2680, v80);
      sub_193A2E0(&v2059, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2059, v1863, v2438, (glf::Self **)v2439);
      sub_1938B70(&v2059);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2438);
      if ( v2439[0] != nullptr )
        operator delete(v2439[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v71 != 0 )
        operator delete(*(void **)v71);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v72 = ++v1734;
    }
    while ( v1991 != v1734 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2060, "SpawnGroup_Bike_NPC_Drivers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2060);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2060);
  v1992 = dword_20D8EC0;
  if ( dword_20D8EC0 > 0 )
  {
    v1735 = 0;
    v81 = (std::vector<int> *)&v2683;
    v82 = 0;
    do
    {
      v1269 = 32 * v82;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8EB0 + 32 * v82 + 12));
      v83 = dword_20D8EB0;
      v84 = dword_20D8EB0 + v1269;
      v85 = *(uint32_t *)(dword_20D8EB0 + v1269 + 8);
      v2680 = 0;
      v1864 = v85;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8EB0 + v1269 + 20) > 0 )
      {
        v1406 = v81;
        v86 = 0;
        v87 = *(uint32_t *)(v84 + 20);
        while ( 1 )
        {
          v88 = *(char **)(*(uint32_t *)(v83 + v1269 + 16) + 4 * v86++);
          g4_std::string::construct_from_cstr(&v2061, v88);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2061);
          sub_1938B70(&v2061);
          if ( v87 == v86 )
            break;
          v83 = dword_20D8EB0;
        }
        v83 = dword_20D8EB0;
        v81 = v1406;
        v84 = dword_20D8EB0 + v1269;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1407 = *(uint32_t *)(v84 + 28);
      if ( v1407 > 0 )
      {
        v89 = 0;
        while ( 1 )
        {
          v1219 = (std::vector<int> *)(*(uint32_t *)(v83 + v1269 + 24) + 4 * v89++);
          g4_std::vector_int_id_9b8903::push_back(v81, (const int *)v1219);
          if ( v1407 == v89 )
            break;
          v83 = dword_20D8EB0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2441, v81);
      sub_8DE270(v2440, &v2680, v90);
      sub_193A2E0(&v2062, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2062, v1864, v2440, (glf::Self **)v2441);
      sub_1938B70(&v2062);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2440);
      if ( v2441[0] != nullptr )
        operator delete(v2441[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v81 != 0 )
        operator delete(*(void **)v81);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v82 = ++v1735;
    }
    while ( v1992 != v1735 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2063, "SpawnGroup_Bike_Drivers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2063);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2063);
  v1993 = dword_20D8EA0;
  if ( dword_20D8EA0 > 0 )
  {
    v1736 = 0;
    v91 = (std::vector<int> *)&v2683;
    v92 = 0;
    do
    {
      v1270 = 32 * v92;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8E90 + 32 * v92 + 12));
      v93 = dword_20D8E90;
      v94 = dword_20D8E90 + v1270;
      v95 = *(uint32_t *)(dword_20D8E90 + v1270 + 8);
      v2680 = 0;
      v1865 = v95;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8E90 + v1270 + 20) > 0 )
      {
        v1408 = v91;
        v96 = 0;
        v97 = *(uint32_t *)(v94 + 20);
        while ( 1 )
        {
          v98 = *(char **)(*(uint32_t *)(v93 + v1270 + 16) + 4 * v96++);
          g4_std::string::construct_from_cstr(&v2064, v98);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2064);
          sub_1938B70(&v2064);
          if ( v97 == v96 )
            break;
          v93 = dword_20D8E90;
        }
        v93 = dword_20D8E90;
        v91 = v1408;
        v94 = dword_20D8E90 + v1270;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1409 = *(uint32_t *)(v94 + 28);
      if ( v1409 > 0 )
      {
        v99 = 0;
        while ( 1 )
        {
          v1220 = (std::vector<int> *)(*(uint32_t *)(v93 + v1270 + 24) + 4 * v99++);
          g4_std::vector_int_id_9b8903::push_back(v91, (const int *)v1220);
          if ( v1409 == v99 )
            break;
          v93 = dword_20D8E90;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2443, v91);
      sub_8DE270(v2442, &v2680, v100);
      sub_193A2E0(&v2065, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2065, v1865, v2442, (glf::Self **)v2443);
      sub_1938B70(&v2065);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2442);
      if ( v2443[0] != nullptr )
        operator delete(v2443[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v91 != 0 )
        operator delete(*(void **)v91);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v92 = ++v1736;
    }
    while ( v1993 != v1736 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2066, "SpawnGroup_Goon_Drivers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2066);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2066);
  v1994 = dword_20D8E40;
  if ( dword_20D8E40 > 0 )
  {
    v1737 = 0;
    v101 = (std::vector<int> *)&v2683;
    v102 = 0;
    do
    {
      v1271 = 32 * v102;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8E30 + 32 * v102 + 12));
      v103 = dword_20D8E30;
      v104 = dword_20D8E30 + v1271;
      v105 = *(uint32_t *)(dword_20D8E30 + v1271 + 8);
      v2680 = 0;
      v1866 = v105;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8E30 + v1271 + 20) > 0 )
      {
        v1410 = v101;
        v106 = 0;
        v107 = *(uint32_t *)(v104 + 20);
        while ( 1 )
        {
          v108 = *(char **)(*(uint32_t *)(v103 + v1271 + 16) + 4 * v106++);
          g4_std::string::construct_from_cstr(&v2067, v108);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2067);
          sub_1938B70(&v2067);
          if ( v107 == v106 )
            break;
          v103 = dword_20D8E30;
        }
        v103 = dword_20D8E30;
        v101 = v1410;
        v104 = dword_20D8E30 + v1271;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1411 = *(uint32_t *)(v104 + 28);
      if ( v1411 > 0 )
      {
        v109 = 0;
        while ( 1 )
        {
          v1221 = (std::vector<int> *)(*(uint32_t *)(v103 + v1271 + 24) + 4 * v109++);
          g4_std::vector_int_id_9b8903::push_back(v101, (const int *)v1221);
          if ( v1411 == v109 )
            break;
          v103 = dword_20D8E30;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2445, v101);
      sub_8DE270(v2444, &v2680, v110);
      sub_193A2E0(&v2068, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2068, v1866, v2444, (glf::Self **)v2445);
      sub_1938B70(&v2068);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2444);
      if ( v2445[0] != nullptr )
        operator delete(v2445[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v101 != 0 )
        operator delete(*(void **)v101);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v102 = ++v1737;
    }
    while ( v1994 != v1737 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2069, "SpawnGroup_Thugs_Drivers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2069);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2069);
  v1995 = dword_20D8E80;
  if ( dword_20D8E80 > 0 )
  {
    v1738 = 0;
    v111 = (std::vector<int> *)&v2683;
    v112 = 0;
    do
    {
      v1272 = 32 * v112;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8E70 + 32 * v112 + 12));
      v113 = dword_20D8E70;
      v114 = dword_20D8E70 + v1272;
      v115 = *(uint32_t *)(dword_20D8E70 + v1272 + 8);
      v2680 = 0;
      v1867 = v115;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8E70 + v1272 + 20) > 0 )
      {
        v1412 = v111;
        v116 = 0;
        v117 = *(uint32_t *)(v114 + 20);
        while ( 1 )
        {
          v118 = *(char **)(*(uint32_t *)(v113 + v1272 + 16) + 4 * v116++);
          g4_std::string::construct_from_cstr(&v2070, v118);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2070);
          sub_1938B70(&v2070);
          if ( v117 == v116 )
            break;
          v113 = dword_20D8E70;
        }
        v113 = dword_20D8E70;
        v111 = v1412;
        v114 = dword_20D8E70 + v1272;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1413 = *(uint32_t *)(v114 + 28);
      if ( v1413 > 0 )
      {
        v119 = 0;
        while ( 1 )
        {
          v1222 = (std::vector<int> *)(*(uint32_t *)(v113 + v1272 + 24) + 4 * v119++);
          g4_std::vector_int_id_9b8903::push_back(v111, (const int *)v1222);
          if ( v1413 == v119 )
            break;
          v113 = dword_20D8E70;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2447, v111);
      sub_8DE270(v2446, &v2680, v120);
      sub_193A2E0(&v2071, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2071, v1867, v2446, (glf::Self **)v2447);
      sub_1938B70(&v2071);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2446);
      if ( v2447[0] != nullptr )
        operator delete(v2447[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v111 != 0 )
        operator delete(*(void **)v111);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v112 = ++v1738;
    }
    while ( v1995 != v1738 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2072, "SpawnGroup_Latino_Drivers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2072);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2072);
  v1996 = dword_20D8E20;
  if ( dword_20D8E20 > 0 )
  {
    v1739 = 0;
    v121 = (std::vector<int> *)&v2683;
    v122 = 0;
    do
    {
      v1273 = 32 * v122;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8E10 + 32 * v122 + 12));
      v123 = dword_20D8E10;
      v124 = dword_20D8E10 + v1273;
      v125 = *(uint32_t *)(dword_20D8E10 + v1273 + 8);
      v2680 = 0;
      v1868 = v125;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8E10 + v1273 + 20) > 0 )
      {
        v1414 = v121;
        v126 = 0;
        v127 = *(uint32_t *)(v124 + 20);
        while ( 1 )
        {
          v128 = *(char **)(*(uint32_t *)(v123 + v1273 + 16) + 4 * v126++);
          g4_std::string::construct_from_cstr(&v2073, v128);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2073);
          sub_1938B70(&v2073);
          if ( v127 == v126 )
            break;
          v123 = dword_20D8E10;
        }
        v123 = dword_20D8E10;
        v121 = v1414;
        v124 = dword_20D8E10 + v1273;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1415 = *(uint32_t *)(v124 + 28);
      if ( v1415 > 0 )
      {
        v129 = 0;
        while ( 1 )
        {
          v1223 = (std::vector<int> *)(*(uint32_t *)(v123 + v1273 + 24) + 4 * v129++);
          g4_std::vector_int_id_9b8903::push_back(v121, (const int *)v1223);
          if ( v1415 == v129 )
            break;
          v123 = dword_20D8E10;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2449, v121);
      sub_8DE270(v2448, &v2680, v130);
      sub_193A2E0(&v2074, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2074, v1868, v2448, (glf::Self **)v2449);
      sub_1938B70(&v2074);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2448);
      if ( v2449[0] != nullptr )
        operator delete(v2449[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v121 != 0 )
        operator delete(*(void **)v121);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v122 = ++v1739;
    }
    while ( v1996 != v1739 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2075, "SpawnGroup_Generic_Drivers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2075);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2075);
  v1997 = dword_20D8E00;
  if ( dword_20D8E00 > 0 )
  {
    v1740 = 0;
    v131 = (std::vector<int> *)&v2683;
    v132 = 0;
    do
    {
      v1274 = 32 * v132;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8DF0 + 32 * v132 + 12));
      v133 = dword_20D8DF0;
      v134 = dword_20D8DF0 + v1274;
      v135 = *(uint32_t *)(dword_20D8DF0 + v1274 + 8);
      v2680 = 0;
      v1869 = v135;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8DF0 + v1274 + 20) > 0 )
      {
        v1416 = v131;
        v136 = 0;
        v137 = *(uint32_t *)(v134 + 20);
        while ( 1 )
        {
          v138 = *(char **)(*(uint32_t *)(v133 + v1274 + 16) + 4 * v136++);
          g4_std::string::construct_from_cstr(&v2076, v138);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2076);
          sub_1938B70(&v2076);
          if ( v137 == v136 )
            break;
          v133 = dword_20D8DF0;
        }
        v133 = dword_20D8DF0;
        v131 = v1416;
        v134 = dword_20D8DF0 + v1274;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1417 = *(uint32_t *)(v134 + 28);
      if ( v1417 > 0 )
      {
        v139 = 0;
        while ( 1 )
        {
          v1224 = (std::vector<int> *)(*(uint32_t *)(v133 + v1274 + 24) + 4 * v139++);
          g4_std::vector_int_id_9b8903::push_back(v131, (const int *)v1224);
          if ( v1417 == v139 )
            break;
          v133 = dword_20D8DF0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2451, v131);
      sub_8DE270(v2450, &v2680, v140);
      sub_193A2E0(&v2077, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2077, v1869, v2450, (glf::Self **)v2451);
      sub_1938B70(&v2077);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2450);
      if ( v2451[0] != nullptr )
        operator delete(v2451[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v131 != 0 )
        operator delete(*(void **)v131);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v132 = ++v1740;
    }
    while ( v1997 != v1740 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2078, "SpawnGroup_HighValue_Drivers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2078);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2078);
  v1998 = dword_20D8DE0;
  if ( dword_20D8DE0 > 0 )
  {
    v1741 = 0;
    v141 = (std::vector<int> *)&v2683;
    v142 = 0;
    do
    {
      v1275 = 32 * v142;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8DD0 + 32 * v142 + 12));
      v143 = dword_20D8DD0;
      v144 = dword_20D8DD0 + v1275;
      v145 = *(uint32_t *)(dword_20D8DD0 + v1275 + 8);
      v2680 = 0;
      v1870 = v145;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8DD0 + v1275 + 20) > 0 )
      {
        v1418 = v141;
        v146 = 0;
        v147 = *(uint32_t *)(v144 + 20);
        while ( 1 )
        {
          v148 = *(char **)(*(uint32_t *)(v143 + v1275 + 16) + 4 * v146++);
          g4_std::string::construct_from_cstr(&v2079, v148);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2079);
          sub_1938B70(&v2079);
          if ( v147 == v146 )
            break;
          v143 = dword_20D8DD0;
        }
        v143 = dword_20D8DD0;
        v141 = v1418;
        v144 = dword_20D8DD0 + v1275;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1419 = *(uint32_t *)(v144 + 28);
      if ( v1419 > 0 )
      {
        v149 = 0;
        while ( 1 )
        {
          v1225 = (std::vector<int> *)(*(uint32_t *)(v143 + v1275 + 24) + 4 * v149++);
          g4_std::vector_int_id_9b8903::push_back(v141, (const int *)v1225);
          if ( v1419 == v149 )
            break;
          v143 = dword_20D8DD0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2453, v141);
      sub_8DE270(v2452, &v2680, v150);
      sub_193A2E0(&v2080, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2080, v1870, v2452, (glf::Self **)v2453);
      sub_1938B70(&v2080);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2452);
      if ( v2453[0] != nullptr )
        operator delete(v2453[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v141 != 0 )
        operator delete(*(void **)v141);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v142 = ++v1741;
    }
    while ( v1998 != v1741 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2081, "SpawnGroup_HighValue_Drivers_Suitcase");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2081);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2081);
  v1999 = dword_20D8DC0;
  if ( dword_20D8DC0 > 0 )
  {
    v1742 = 0;
    v151 = (std::vector<int> *)&v2683;
    v152 = 0;
    do
    {
      v1276 = 32 * v152;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8DB0 + 32 * v152 + 12));
      v153 = dword_20D8DB0;
      v154 = dword_20D8DB0 + v1276;
      v155 = *(uint32_t *)(dword_20D8DB0 + v1276 + 8);
      v2680 = 0;
      v1871 = v155;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8DB0 + v1276 + 20) > 0 )
      {
        v1420 = v151;
        v156 = 0;
        v157 = *(uint32_t *)(v154 + 20);
        while ( 1 )
        {
          v158 = *(char **)(*(uint32_t *)(v153 + v1276 + 16) + 4 * v156++);
          g4_std::string::construct_from_cstr(&v2082, v158);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2082);
          sub_1938B70(&v2082);
          if ( v157 == v156 )
            break;
          v153 = dword_20D8DB0;
        }
        v153 = dword_20D8DB0;
        v151 = v1420;
        v154 = dword_20D8DB0 + v1276;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1421 = *(uint32_t *)(v154 + 28);
      if ( v1421 > 0 )
      {
        v159 = 0;
        while ( 1 )
        {
          v1226 = (std::vector<int> *)(*(uint32_t *)(v153 + v1276 + 24) + 4 * v159++);
          g4_std::vector_int_id_9b8903::push_back(v151, (const int *)v1226);
          if ( v1421 == v159 )
            break;
          v153 = dword_20D8DB0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2455, v151);
      sub_8DE270(v2454, &v2680, v160);
      sub_193A2E0(&v2083, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2083, v1871, v2454, (glf::Self **)v2455);
      sub_1938B70(&v2083);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2454);
      if ( v2455[0] != nullptr )
        operator delete(v2455[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v151 != 0 )
        operator delete(*(void **)v151);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v152 = ++v1742;
    }
    while ( v1999 != v1742 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2084, "SpawnGroup_HighValue_Drivers_Clothing");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2084);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2084);
  v2000 = dword_20D8DA0;
  if ( dword_20D8DA0 > 0 )
  {
    v1743 = 0;
    v161 = (std::vector<int> *)&v2683;
    v162 = 0;
    do
    {
      v1277 = 32 * v162;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8D90 + 32 * v162 + 12));
      v163 = dword_20D8D90;
      v164 = dword_20D8D90 + v1277;
      v165 = *(uint32_t *)(dword_20D8D90 + v1277 + 8);
      v2680 = 0;
      v1872 = v165;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8D90 + v1277 + 20) > 0 )
      {
        v1422 = v161;
        v166 = 0;
        v167 = *(uint32_t *)(v164 + 20);
        while ( 1 )
        {
          v168 = *(char **)(*(uint32_t *)(v163 + v1277 + 16) + 4 * v166++);
          g4_std::string::construct_from_cstr(&v2085, v168);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2085);
          sub_1938B70(&v2085);
          if ( v167 == v166 )
            break;
          v163 = dword_20D8D90;
        }
        v163 = dword_20D8D90;
        v161 = v1422;
        v164 = dword_20D8D90 + v1277;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1423 = *(uint32_t *)(v164 + 28);
      if ( v1423 > 0 )
      {
        v169 = 0;
        while ( 1 )
        {
          v1227 = (std::vector<int> *)(*(uint32_t *)(v163 + v1277 + 24) + 4 * v169++);
          g4_std::vector_int_id_9b8903::push_back(v161, (const int *)v1227);
          if ( v1423 == v169 )
            break;
          v163 = dword_20D8D90;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2457, v161);
      sub_8DE270(v2456, &v2680, v170);
      sub_193A2E0(&v2086, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2086, v1872, v2456, (glf::Self **)v2457);
      sub_1938B70(&v2086);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2456);
      if ( v2457[0] != nullptr )
        operator delete(v2457[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v161 != 0 )
        operator delete(*(void **)v161);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v162 = ++v1743;
    }
    while ( v2000 != v1743 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2087, "SpawnGroup_HighValue_Drivers_Weapon");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2087);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2087);
  v2001 = dword_20D8D80;
  if ( dword_20D8D80 > 0 )
  {
    v1744 = 0;
    v171 = (std::vector<int> *)&v2683;
    v172 = 0;
    do
    {
      v1278 = 32 * v172;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8D70 + 32 * v172 + 12));
      v173 = dword_20D8D70;
      v174 = dword_20D8D70 + v1278;
      v175 = *(uint32_t *)(dword_20D8D70 + v1278 + 8);
      v2680 = 0;
      v1873 = v175;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8D70 + v1278 + 20) > 0 )
      {
        v1424 = v171;
        v176 = 0;
        v177 = *(uint32_t *)(v174 + 20);
        while ( 1 )
        {
          v178 = *(char **)(*(uint32_t *)(v173 + v1278 + 16) + 4 * v176++);
          g4_std::string::construct_from_cstr(&v2088, v178);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2088);
          sub_1938B70(&v2088);
          if ( v177 == v176 )
            break;
          v173 = dword_20D8D70;
        }
        v173 = dword_20D8D70;
        v171 = v1424;
        v174 = dword_20D8D70 + v1278;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1425 = *(uint32_t *)(v174 + 28);
      if ( v1425 > 0 )
      {
        v179 = 0;
        while ( 1 )
        {
          v1228 = (std::vector<int> *)(*(uint32_t *)(v173 + v1278 + 24) + 4 * v179++);
          g4_std::vector_int_id_9b8903::push_back(v171, (const int *)v1228);
          if ( v1425 == v179 )
            break;
          v173 = dword_20D8D70;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2459, v171);
      sub_8DE270(v2458, &v2680, v180);
      sub_193A2E0(&v2089, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2089, v1873, v2458, (glf::Self **)v2459);
      sub_1938B70(&v2089);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2458);
      if ( v2459[0] != nullptr )
        operator delete(v2459[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v171 != 0 )
        operator delete(*(void **)v171);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v172 = ++v1744;
    }
    while ( v2001 != v1744 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2090, "SpawnGroup_HighValue_Drivers_Vehicle");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2090);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2090);
  v2002 = dword_20D8D60;
  if ( dword_20D8D60 > 0 )
  {
    v1745 = 0;
    v181 = (std::vector<int> *)&v2683;
    v182 = 0;
    do
    {
      v1279 = 32 * v182;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8D50 + 32 * v182 + 12));
      v183 = dword_20D8D50;
      v184 = dword_20D8D50 + v1279;
      v185 = *(uint32_t *)(dword_20D8D50 + v1279 + 8);
      v2680 = 0;
      v1874 = v185;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8D50 + v1279 + 20) > 0 )
      {
        v1426 = v181;
        v186 = 0;
        v187 = *(uint32_t *)(v184 + 20);
        while ( 1 )
        {
          v188 = *(char **)(*(uint32_t *)(v183 + v1279 + 16) + 4 * v186++);
          g4_std::string::construct_from_cstr(&v2091, v188);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2091);
          sub_1938B70(&v2091);
          if ( v187 == v186 )
            break;
          v183 = dword_20D8D50;
        }
        v183 = dword_20D8D50;
        v181 = v1426;
        v184 = dword_20D8D50 + v1279;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1427 = *(uint32_t *)(v184 + 28);
      if ( v1427 > 0 )
      {
        v189 = 0;
        while ( 1 )
        {
          v1229 = (std::vector<int> *)(*(uint32_t *)(v183 + v1279 + 24) + 4 * v189++);
          g4_std::vector_int_id_9b8903::push_back(v181, (const int *)v1229);
          if ( v1427 == v189 )
            break;
          v183 = dword_20D8D50;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2461, v181);
      sub_8DE270(v2460, &v2680, v190);
      sub_193A2E0(&v2092, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2092, v1874, v2460, (glf::Self **)v2461);
      sub_1938B70(&v2092);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2460);
      if ( v2461[0] != nullptr )
        operator delete(v2461[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v181 != 0 )
        operator delete(*(void **)v181);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v182 = ++v1745;
    }
    while ( v2002 != v1745 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2093, "SpawnGroup_Casino");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2093);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2093);
  v2003 = dword_20D8CE0;
  if ( dword_20D8CE0 > 0 )
  {
    v1746 = 0;
    v191 = (std::vector<int> *)&v2683;
    v192 = 0;
    do
    {
      v1280 = 32 * v192;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8CD0 + 32 * v192 + 12));
      v193 = dword_20D8CD0;
      v194 = dword_20D8CD0 + v1280;
      v195 = *(uint32_t *)(dword_20D8CD0 + v1280 + 8);
      v2680 = 0;
      v1875 = v195;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8CD0 + v1280 + 20) > 0 )
      {
        v1428 = v191;
        v196 = 0;
        v197 = *(uint32_t *)(v194 + 20);
        while ( 1 )
        {
          v198 = *(char **)(*(uint32_t *)(v193 + v1280 + 16) + 4 * v196++);
          g4_std::string::construct_from_cstr(&v2094, v198);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2094);
          sub_1938B70(&v2094);
          if ( v197 == v196 )
            break;
          v193 = dword_20D8CD0;
        }
        v193 = dword_20D8CD0;
        v191 = v1428;
        v194 = dword_20D8CD0 + v1280;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1429 = *(uint32_t *)(v194 + 28);
      if ( v1429 > 0 )
      {
        v199 = 0;
        while ( 1 )
        {
          v1230 = (std::vector<int> *)(*(uint32_t *)(v193 + v1280 + 24) + 4 * v199++);
          g4_std::vector_int_id_9b8903::push_back(v191, (const int *)v1230);
          if ( v1429 == v199 )
            break;
          v193 = dword_20D8CD0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2463, v191);
      sub_8DE270(v2462, &v2680, v200);
      sub_193A2E0(&v2095, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2095, v1875, v2462, (glf::Self **)v2463);
      sub_1938B70(&v2095);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2462);
      if ( v2463[0] != nullptr )
        operator delete(v2463[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v191 != 0 )
        operator delete(*(void **)v191);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v192 = ++v1746;
    }
    while ( v2003 != v1746 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2096, "SpawnGroup_NightClub");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2096);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2096);
  v2004 = dword_20D8C80;
  if ( dword_20D8C80 > 0 )
  {
    v1747 = 0;
    v201 = (std::vector<int> *)&v2683;
    v202 = 0;
    do
    {
      v1281 = 32 * v202;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8C70 + 32 * v202 + 12));
      v203 = dword_20D8C70;
      v204 = dword_20D8C70 + v1281;
      v205 = *(uint32_t *)(dword_20D8C70 + v1281 + 8);
      v2680 = 0;
      v1876 = v205;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8C70 + v1281 + 20) > 0 )
      {
        v1430 = v201;
        v206 = 0;
        v207 = *(uint32_t *)(v204 + 20);
        while ( 1 )
        {
          v208 = *(char **)(*(uint32_t *)(v203 + v1281 + 16) + 4 * v206++);
          g4_std::string::construct_from_cstr(&v2097, v208);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2097);
          sub_1938B70(&v2097);
          if ( v207 == v206 )
            break;
          v203 = dword_20D8C70;
        }
        v203 = dword_20D8C70;
        v201 = v1430;
        v204 = dword_20D8C70 + v1281;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1431 = *(uint32_t *)(v204 + 28);
      if ( v1431 > 0 )
      {
        v209 = 0;
        while ( 1 )
        {
          v1231 = (std::vector<int> *)(*(uint32_t *)(v203 + v1281 + 24) + 4 * v209++);
          g4_std::vector_int_id_9b8903::push_back(v201, (const int *)v1231);
          if ( v1431 == v209 )
            break;
          v203 = dword_20D8C70;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2465, v201);
      sub_8DE270(v2464, &v2680, v210);
      sub_193A2E0(&v2098, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2098, v1876, v2464, (glf::Self **)v2465);
      sub_1938B70(&v2098);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2464);
      if ( v2465[0] != nullptr )
        operator delete(v2465[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v201 != 0 )
        operator delete(*(void **)v201);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v202 = ++v1747;
    }
    while ( v2004 != v1747 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2099, "SpawnGroup_NightClubDancer");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2099);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2099);
  v2005 = dword_20D8C60;
  if ( dword_20D8C60 > 0 )
  {
    v1748 = 0;
    v211 = (std::vector<int> *)&v2683;
    v212 = 0;
    do
    {
      v1282 = 32 * v212;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8C50 + 32 * v212 + 12));
      v213 = dword_20D8C50;
      v214 = dword_20D8C50 + v1282;
      v215 = *(uint32_t *)(dword_20D8C50 + v1282 + 8);
      v2680 = 0;
      v1877 = v215;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8C50 + v1282 + 20) > 0 )
      {
        v1432 = v211;
        v216 = 0;
        v217 = *(uint32_t *)(v214 + 20);
        while ( 1 )
        {
          v218 = *(char **)(*(uint32_t *)(v213 + v1282 + 16) + 4 * v216++);
          g4_std::string::construct_from_cstr(&v2100, v218);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2100);
          sub_1938B70(&v2100);
          if ( v217 == v216 )
            break;
          v213 = dword_20D8C50;
        }
        v213 = dword_20D8C50;
        v211 = v1432;
        v214 = dword_20D8C50 + v1282;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1433 = *(uint32_t *)(v214 + 28);
      if ( v1433 > 0 )
      {
        v219 = 0;
        while ( 1 )
        {
          v1232 = (std::vector<int> *)(*(uint32_t *)(v213 + v1282 + 24) + 4 * v219++);
          g4_std::vector_int_id_9b8903::push_back(v211, (const int *)v1232);
          if ( v1433 == v219 )
            break;
          v213 = dword_20D8C50;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2467, v211);
      sub_8DE270(v2466, &v2680, v220);
      sub_193A2E0(&v2101, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2101, v1877, v2466, (glf::Self **)v2467);
      sub_1938B70(&v2101);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2466);
      if ( v2467[0] != nullptr )
        operator delete(v2467[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v211 != 0 )
        operator delete(*(void **)v211);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v212 = ++v1748;
    }
    while ( v2005 != v1748 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2102, "SpawnGroup_StripClub");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2102);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2102);
  v2006 = dword_20D8C40;
  if ( dword_20D8C40 > 0 )
  {
    v1749 = 0;
    v221 = (std::vector<int> *)&v2683;
    v222 = 0;
    do
    {
      v1283 = 32 * v222;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8C30 + 32 * v222 + 12));
      v223 = dword_20D8C30;
      v224 = dword_20D8C30 + v1283;
      v225 = *(uint32_t *)(dword_20D8C30 + v1283 + 8);
      v2680 = 0;
      v1878 = v225;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8C30 + v1283 + 20) > 0 )
      {
        v1434 = v221;
        v226 = 0;
        v227 = *(uint32_t *)(v224 + 20);
        while ( 1 )
        {
          v228 = *(char **)(*(uint32_t *)(v223 + v1283 + 16) + 4 * v226++);
          g4_std::string::construct_from_cstr(&v2103, v228);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2103);
          sub_1938B70(&v2103);
          if ( v227 == v226 )
            break;
          v223 = dword_20D8C30;
        }
        v223 = dword_20D8C30;
        v221 = v1434;
        v224 = dword_20D8C30 + v1283;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1435 = *(uint32_t *)(v224 + 28);
      if ( v1435 > 0 )
      {
        v229 = 0;
        while ( 1 )
        {
          v1233 = (std::vector<int> *)(*(uint32_t *)(v223 + v1283 + 24) + 4 * v229++);
          g4_std::vector_int_id_9b8903::push_back(v221, (const int *)v1233);
          if ( v1435 == v229 )
            break;
          v223 = dword_20D8C30;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2469, v221);
      sub_8DE270(v2468, &v2680, v230);
      sub_193A2E0(&v2104, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2104, v1878, v2468, (glf::Self **)v2469);
      sub_1938B70(&v2104);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2468);
      if ( v2469[0] != nullptr )
        operator delete(v2469[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v221 != 0 )
        operator delete(*(void **)v221);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v222 = ++v1749;
    }
    while ( v2006 != v1749 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2105, "SpawnGroup_StripClubBar");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2105);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2105);
  v2007 = dword_20D8C20;
  if ( dword_20D8C20 > 0 )
  {
    v1750 = 0;
    v231 = (std::vector<int> *)&v2683;
    v232 = 0;
    do
    {
      v1284 = 32 * v232;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8C10 + 32 * v232 + 12));
      v233 = dword_20D8C10;
      v234 = dword_20D8C10 + v1284;
      v235 = *(uint32_t *)(dword_20D8C10 + v1284 + 8);
      v2680 = 0;
      v1879 = v235;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8C10 + v1284 + 20) > 0 )
      {
        v1436 = v231;
        v236 = 0;
        v237 = *(uint32_t *)(v234 + 20);
        while ( 1 )
        {
          v238 = *(char **)(*(uint32_t *)(v233 + v1284 + 16) + 4 * v236++);
          g4_std::string::construct_from_cstr(&v2106, v238);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2106);
          sub_1938B70(&v2106);
          if ( v237 == v236 )
            break;
          v233 = dword_20D8C10;
        }
        v233 = dword_20D8C10;
        v231 = v1436;
        v234 = dword_20D8C10 + v1284;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1437 = *(uint32_t *)(v234 + 28);
      if ( v1437 > 0 )
      {
        v239 = 0;
        while ( 1 )
        {
          v1234 = (std::vector<int> *)(*(uint32_t *)(v233 + v1284 + 24) + 4 * v239++);
          g4_std::vector_int_id_9b8903::push_back(v231, (const int *)v1234);
          if ( v1437 == v239 )
            break;
          v233 = dword_20D8C10;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2471, v231);
      sub_8DE270(v2470, &v2680, v240);
      sub_193A2E0(&v2107, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2107, v1879, v2470, (glf::Self **)v2471);
      sub_1938B70(&v2107);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2470);
      if ( v2471[0] != nullptr )
        operator delete(v2471[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v231 != 0 )
        operator delete(*(void **)v231);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v232 = ++v1750;
    }
    while ( v2007 != v1750 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2108, "SpawnGroup_StripClub_VIP");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2108);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2108);
  v2008 = dword_20D8C00;
  if ( dword_20D8C00 > 0 )
  {
    v1751 = 0;
    v241 = (std::vector<int> *)&v2683;
    v242 = 0;
    do
    {
      v1285 = 32 * v242;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8BF0 + 32 * v242 + 12));
      v243 = dword_20D8BF0;
      v244 = dword_20D8BF0 + v1285;
      v245 = *(uint32_t *)(dword_20D8BF0 + v1285 + 8);
      v2680 = 0;
      v1880 = v245;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8BF0 + v1285 + 20) > 0 )
      {
        v1438 = v241;
        v246 = 0;
        v247 = *(uint32_t *)(v244 + 20);
        while ( 1 )
        {
          v248 = *(char **)(*(uint32_t *)(v243 + v1285 + 16) + 4 * v246++);
          g4_std::string::construct_from_cstr(&v2109, v248);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2109);
          sub_1938B70(&v2109);
          if ( v247 == v246 )
            break;
          v243 = dword_20D8BF0;
        }
        v243 = dword_20D8BF0;
        v241 = v1438;
        v244 = dword_20D8BF0 + v1285;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1439 = *(uint32_t *)(v244 + 28);
      if ( v1439 > 0 )
      {
        v249 = 0;
        while ( 1 )
        {
          v1235 = (std::vector<int> *)(*(uint32_t *)(v243 + v1285 + 24) + 4 * v249++);
          g4_std::vector_int_id_9b8903::push_back(v241, (const int *)v1235);
          if ( v1439 == v249 )
            break;
          v243 = dword_20D8BF0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2473, v241);
      sub_8DE270(v2472, &v2680, v250);
      sub_193A2E0(&v2110, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2110, v1880, v2472, (glf::Self **)v2473);
      sub_1938B70(&v2110);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2472);
      if ( v2473[0] != nullptr )
        operator delete(v2473[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v241 != 0 )
        operator delete(*(void **)v241);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v242 = ++v1751;
    }
    while ( v2008 != v1751 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2111, "SpawnGroup_Diner");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2111);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2111);
  v2009 = dword_20D8CA0;
  if ( dword_20D8CA0 > 0 )
  {
    v1752 = 0;
    v251 = (std::vector<int> *)&v2683;
    v252 = 0;
    do
    {
      v1286 = 32 * v252;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8C90 + 32 * v252 + 12));
      v253 = dword_20D8C90;
      v254 = dword_20D8C90 + v1286;
      v255 = *(uint32_t *)(dword_20D8C90 + v1286 + 8);
      v2680 = 0;
      v1881 = v255;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8C90 + v1286 + 20) > 0 )
      {
        v1440 = v251;
        v256 = 0;
        v257 = *(uint32_t *)(v254 + 20);
        while ( 1 )
        {
          v258 = *(char **)(*(uint32_t *)(v253 + v1286 + 16) + 4 * v256++);
          g4_std::string::construct_from_cstr(&v2112, v258);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2112);
          sub_1938B70(&v2112);
          if ( v257 == v256 )
            break;
          v253 = dword_20D8C90;
        }
        v253 = dword_20D8C90;
        v251 = v1440;
        v254 = dword_20D8C90 + v1286;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1441 = *(uint32_t *)(v254 + 28);
      if ( v1441 > 0 )
      {
        v259 = 0;
        while ( 1 )
        {
          v1236 = (std::vector<int> *)(*(uint32_t *)(v253 + v1286 + 24) + 4 * v259++);
          g4_std::vector_int_id_9b8903::push_back(v251, (const int *)v1236);
          if ( v1441 == v259 )
            break;
          v253 = dword_20D8C90;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2475, v251);
      sub_8DE270(v2474, &v2680, v260);
      sub_193A2E0(&v2113, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2113, v1881, v2474, (glf::Self **)v2475);
      sub_1938B70(&v2113);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2474);
      if ( v2475[0] != nullptr )
        operator delete(v2475[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v251 != 0 )
        operator delete(*(void **)v251);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v252 = ++v1752;
    }
    while ( v2009 != v1752 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2114, "SpawnGroup_Swimmers");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2114);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2114);
  v2010 = dword_20D8A20;
  if ( dword_20D8A20 > 0 )
  {
    v1753 = 0;
    v261 = (std::vector<int> *)&v2683;
    v262 = 0;
    do
    {
      v1287 = 32 * v262;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8A10 + 32 * v262 + 12));
      v263 = dword_20D8A10;
      v264 = dword_20D8A10 + v1287;
      v265 = *(uint32_t *)(dword_20D8A10 + v1287 + 8);
      v2680 = 0;
      v1882 = v265;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8A10 + v1287 + 20) > 0 )
      {
        v1442 = v261;
        v266 = 0;
        v267 = *(uint32_t *)(v264 + 20);
        while ( 1 )
        {
          v268 = *(char **)(*(uint32_t *)(v263 + v1287 + 16) + 4 * v266++);
          g4_std::string::construct_from_cstr(&v2115, v268);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2115);
          sub_1938B70(&v2115);
          if ( v267 == v266 )
            break;
          v263 = dword_20D8A10;
        }
        v263 = dword_20D8A10;
        v261 = v1442;
        v264 = dword_20D8A10 + v1287;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1443 = *(uint32_t *)(v264 + 28);
      if ( v1443 > 0 )
      {
        v269 = 0;
        while ( 1 )
        {
          v1237 = (std::vector<int> *)(*(uint32_t *)(v263 + v1287 + 24) + 4 * v269++);
          g4_std::vector_int_id_9b8903::push_back(v261, (const int *)v1237);
          if ( v1443 == v269 )
            break;
          v263 = dword_20D8A10;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2477, v261);
      sub_8DE270(v2476, &v2680, v270);
      sub_193A2E0(&v2116, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2116, v1882, v2476, (glf::Self **)v2477);
      sub_1938B70(&v2116);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2476);
      if ( v2477[0] != nullptr )
        operator delete(v2477[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v261 != 0 )
        operator delete(*(void **)v261);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v262 = ++v1753;
    }
    while ( v2010 != v1753 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2117, "SpawnGroup_Airport");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2117);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2117);
  v2011 = dword_20D8B60;
  if ( dword_20D8B60 > 0 )
  {
    v1754 = 0;
    v271 = (std::vector<int> *)&v2683;
    v272 = 0;
    do
    {
      v1288 = 32 * v272;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8B50 + 32 * v272 + 12));
      v273 = dword_20D8B50;
      v274 = dword_20D8B50 + v1288;
      v275 = *(uint32_t *)(dword_20D8B50 + v1288 + 8);
      v2680 = 0;
      v1883 = v275;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8B50 + v1288 + 20) > 0 )
      {
        v1444 = v271;
        v276 = 0;
        v277 = *(uint32_t *)(v274 + 20);
        while ( 1 )
        {
          v278 = *(char **)(*(uint32_t *)(v273 + v1288 + 16) + 4 * v276++);
          g4_std::string::construct_from_cstr(&v2118, v278);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2118);
          sub_1938B70(&v2118);
          if ( v277 == v276 )
            break;
          v273 = dword_20D8B50;
        }
        v273 = dword_20D8B50;
        v271 = v1444;
        v274 = dword_20D8B50 + v1288;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1445 = *(uint32_t *)(v274 + 28);
      if ( v1445 > 0 )
      {
        v279 = 0;
        while ( 1 )
        {
          v1238 = (std::vector<int> *)(*(uint32_t *)(v273 + v1288 + 24) + 4 * v279++);
          g4_std::vector_int_id_9b8903::push_back(v271, (const int *)v1238);
          if ( v1445 == v279 )
            break;
          v273 = dword_20D8B50;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2479, v271);
      sub_8DE270(v2478, &v2680, v280);
      sub_193A2E0(&v2119, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2119, v1883, v2478, (glf::Self **)v2479);
      sub_1938B70(&v2119);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2478);
      if ( v2479[0] != nullptr )
        operator delete(v2479[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v271 != 0 )
        operator delete(*(void **)v271);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v272 = ++v1754;
    }
    while ( v2011 != v1754 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2120, "SpawnGroup_ArmyBase");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2120);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2120);
  v2012 = dword_20D8AA0;
  if ( dword_20D8AA0 > 0 )
  {
    v1755 = 0;
    v281 = (std::vector<int> *)&v2683;
    v282 = 0;
    do
    {
      v1289 = 32 * v282;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8A90 + 32 * v282 + 12));
      v283 = dword_20D8A90;
      v284 = dword_20D8A90 + v1289;
      v285 = *(uint32_t *)(dword_20D8A90 + v1289 + 8);
      v2680 = 0;
      v1884 = v285;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8A90 + v1289 + 20) > 0 )
      {
        v1446 = v281;
        v286 = 0;
        v287 = *(uint32_t *)(v284 + 20);
        while ( 1 )
        {
          v288 = *(char **)(*(uint32_t *)(v283 + v1289 + 16) + 4 * v286++);
          g4_std::string::construct_from_cstr(&v2121, v288);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2121);
          sub_1938B70(&v2121);
          if ( v287 == v286 )
            break;
          v283 = dword_20D8A90;
        }
        v283 = dword_20D8A90;
        v281 = v1446;
        v284 = dword_20D8A90 + v1289;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1447 = *(uint32_t *)(v284 + 28);
      if ( v1447 > 0 )
      {
        v289 = 0;
        while ( 1 )
        {
          v1239 = (std::vector<int> *)(*(uint32_t *)(v283 + v1289 + 24) + 4 * v289++);
          g4_std::vector_int_id_9b8903::push_back(v281, (const int *)v1239);
          if ( v1447 == v289 )
            break;
          v283 = dword_20D8A90;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2481, v281);
      sub_8DE270(v2480, &v2680, v290);
      sub_193A2E0(&v2122, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2122, v1884, v2480, (glf::Self **)v2481);
      sub_1938B70(&v2122);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2480);
      if ( v2481[0] != nullptr )
        operator delete(v2481[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v281 != 0 )
        operator delete(*(void **)v281);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v282 = ++v1755;
    }
    while ( v2012 != v1755 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2123, "SpawnGroup_Downtown");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2123);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2123);
  v2013 = dword_20D8B40;
  if ( dword_20D8B40 > 0 )
  {
    v1756 = 0;
    v291 = (std::vector<int> *)&v2683;
    v292 = 0;
    do
    {
      v1290 = 32 * v292;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8B30 + 32 * v292 + 12));
      v293 = dword_20D8B30;
      v294 = dword_20D8B30 + v1290;
      v295 = *(uint32_t *)(dword_20D8B30 + v1290 + 8);
      v2680 = 0;
      v1885 = v295;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8B30 + v1290 + 20) > 0 )
      {
        v1448 = v291;
        v296 = 0;
        v297 = *(uint32_t *)(v294 + 20);
        while ( 1 )
        {
          v298 = *(char **)(*(uint32_t *)(v293 + v1290 + 16) + 4 * v296++);
          g4_std::string::construct_from_cstr(&v2124, v298);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2124);
          sub_1938B70(&v2124);
          if ( v297 == v296 )
            break;
          v293 = dword_20D8B30;
        }
        v293 = dword_20D8B30;
        v291 = v1448;
        v294 = dword_20D8B30 + v1290;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1449 = *(uint32_t *)(v294 + 28);
      if ( v1449 > 0 )
      {
        v299 = 0;
        while ( 1 )
        {
          v1240 = (std::vector<int> *)(*(uint32_t *)(v293 + v1290 + 24) + 4 * v299++);
          g4_std::vector_int_id_9b8903::push_back(v291, (const int *)v1240);
          if ( v1449 == v299 )
            break;
          v293 = dword_20D8B30;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2483, v291);
      sub_8DE270(v2482, &v2680, v300);
      sub_193A2E0(&v2125, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2125, v1885, v2482, (glf::Self **)v2483);
      sub_1938B70(&v2125);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2482);
      if ( v2483[0] != nullptr )
        operator delete(v2483[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v291 != 0 )
        operator delete(*(void **)v291);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v292 = ++v1756;
    }
    while ( v2013 != v1756 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2126, "SpawnGroup_Downtown_Fremont");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2126);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2126);
  v2014 = dword_20D8B20;
  if ( dword_20D8B20 > 0 )
  {
    v1757 = 0;
    v301 = (std::vector<int> *)&v2683;
    v302 = 0;
    do
    {
      v1291 = 32 * v302;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8B10 + 32 * v302 + 12));
      v303 = dword_20D8B10;
      v304 = dword_20D8B10 + v1291;
      v305 = *(uint32_t *)(dword_20D8B10 + v1291 + 8);
      v2680 = 0;
      v1886 = v305;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8B10 + v1291 + 20) > 0 )
      {
        v1450 = v301;
        v306 = 0;
        v307 = *(uint32_t *)(v304 + 20);
        while ( 1 )
        {
          v308 = *(char **)(*(uint32_t *)(v303 + v1291 + 16) + 4 * v306++);
          g4_std::string::construct_from_cstr(&v2127, v308);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2127);
          sub_1938B70(&v2127);
          if ( v307 == v306 )
            break;
          v303 = dword_20D8B10;
        }
        v303 = dword_20D8B10;
        v301 = v1450;
        v304 = dword_20D8B10 + v1291;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1451 = *(uint32_t *)(v304 + 28);
      if ( v1451 > 0 )
      {
        v309 = 0;
        while ( 1 )
        {
          v1241 = (std::vector<int> *)(*(uint32_t *)(v303 + v1291 + 24) + 4 * v309++);
          g4_std::vector_int_id_9b8903::push_back(v301, (const int *)v1241);
          if ( v1451 == v309 )
            break;
          v303 = dword_20D8B10;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2485, v301);
      sub_8DE270(v2484, &v2680, v310);
      sub_193A2E0(&v2128, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2128, v1886, v2484, (glf::Self **)v2485);
      sub_1938B70(&v2128);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2484);
      if ( v2485[0] != nullptr )
        operator delete(v2485[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v301 != 0 )
        operator delete(*(void **)v301);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v302 = ++v1757;
    }
    while ( v2014 != v1757 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2129, "SpawnGroup_Construction");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2129);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2129);
  v2015 = dword_20D8B00;
  if ( dword_20D8B00 > 0 )
  {
    v1758 = 0;
    v311 = (std::vector<int> *)&v2683;
    v312 = 0;
    do
    {
      v1292 = 32 * v312;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8AF0 + 32 * v312 + 12));
      v313 = dword_20D8AF0;
      v314 = dword_20D8AF0 + v1292;
      v315 = *(uint32_t *)(dword_20D8AF0 + v1292 + 8);
      v2680 = 0;
      v1887 = v315;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8AF0 + v1292 + 20) > 0 )
      {
        v1452 = v311;
        v316 = 0;
        v317 = *(uint32_t *)(v314 + 20);
        while ( 1 )
        {
          v318 = *(char **)(*(uint32_t *)(v313 + v1292 + 16) + 4 * v316++);
          g4_std::string::construct_from_cstr(&v2130, v318);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2130);
          sub_1938B70(&v2130);
          if ( v317 == v316 )
            break;
          v313 = dword_20D8AF0;
        }
        v313 = dword_20D8AF0;
        v311 = v1452;
        v314 = dword_20D8AF0 + v1292;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1453 = *(uint32_t *)(v314 + 28);
      if ( v1453 > 0 )
      {
        v319 = 0;
        while ( 1 )
        {
          v1242 = (std::vector<int> *)(*(uint32_t *)(v313 + v1292 + 24) + 4 * v319++);
          g4_std::vector_int_id_9b8903::push_back(v311, (const int *)v1242);
          if ( v1453 == v319 )
            break;
          v313 = dword_20D8AF0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2487, v311);
      sub_8DE270(v2486, &v2680, v320);
      sub_193A2E0(&v2131, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2131, v1887, v2486, (glf::Self **)v2487);
      sub_1938B70(&v2131);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2486);
      if ( v2487[0] != nullptr )
        operator delete(v2487[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v311 != 0 )
        operator delete(*(void **)v311);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v312 = ++v1758;
    }
    while ( v2015 != v1758 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2132, "SpawnGroup_Government");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2132);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2132);
  v2016 = dword_20D8BA0;
  if ( dword_20D8BA0 > 0 )
  {
    v1759 = 0;
    v321 = (std::vector<int> *)&v2683;
    v322 = 0;
    do
    {
      v1293 = 32 * v322;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8B90 + 32 * v322 + 12));
      v323 = dword_20D8B90;
      v324 = dword_20D8B90 + v1293;
      v325 = *(uint32_t *)(dword_20D8B90 + v1293 + 8);
      v2680 = 0;
      v1888 = v325;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8B90 + v1293 + 20) > 0 )
      {
        v1454 = v321;
        v326 = 0;
        v327 = *(uint32_t *)(v324 + 20);
        while ( 1 )
        {
          v328 = *(char **)(*(uint32_t *)(v323 + v1293 + 16) + 4 * v326++);
          g4_std::string::construct_from_cstr(&v2133, v328);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2133);
          sub_1938B70(&v2133);
          if ( v327 == v326 )
            break;
          v323 = dword_20D8B90;
        }
        v323 = dword_20D8B90;
        v321 = v1454;
        v324 = dword_20D8B90 + v1293;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1455 = *(uint32_t *)(v324 + 28);
      if ( v1455 > 0 )
      {
        v329 = 0;
        while ( 1 )
        {
          v1243 = (std::vector<int> *)(*(uint32_t *)(v323 + v1293 + 24) + 4 * v329++);
          g4_std::vector_int_id_9b8903::push_back(v321, (const int *)v1243);
          if ( v1455 == v329 )
            break;
          v323 = dword_20D8B90;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2489, v321);
      sub_8DE270(v2488, &v2680, v330);
      sub_193A2E0(&v2134, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2134, v1888, v2488, (glf::Self **)v2489);
      sub_1938B70(&v2134);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2488);
      if ( v2489[0] != nullptr )
        operator delete(v2489[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v321 != 0 )
        operator delete(*(void **)v321);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v322 = ++v1759;
    }
    while ( v2016 != v1759 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2135, "SpawnGroup_Industrial");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2135);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2135);
  v2017 = dword_20D8AC0;
  if ( dword_20D8AC0 > 0 )
  {
    v1760 = 0;
    v331 = (std::vector<int> *)&v2683;
    v332 = 0;
    do
    {
      v1294 = 32 * v332;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8AB0 + 32 * v332 + 12));
      v333 = dword_20D8AB0;
      v334 = dword_20D8AB0 + v1294;
      v335 = *(uint32_t *)(dword_20D8AB0 + v1294 + 8);
      v2680 = 0;
      v1889 = v335;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8AB0 + v1294 + 20) > 0 )
      {
        v1456 = v331;
        v336 = 0;
        v337 = *(uint32_t *)(v334 + 20);
        while ( 1 )
        {
          v338 = *(char **)(*(uint32_t *)(v333 + v1294 + 16) + 4 * v336++);
          g4_std::string::construct_from_cstr(&v2136, v338);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2136);
          sub_1938B70(&v2136);
          if ( v337 == v336 )
            break;
          v333 = dword_20D8AB0;
        }
        v333 = dword_20D8AB0;
        v331 = v1456;
        v334 = dword_20D8AB0 + v1294;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1457 = *(uint32_t *)(v334 + 28);
      if ( v1457 > 0 )
      {
        v339 = 0;
        while ( 1 )
        {
          v1244 = (std::vector<int> *)(*(uint32_t *)(v333 + v1294 + 24) + 4 * v339++);
          g4_std::vector_int_id_9b8903::push_back(v331, (const int *)v1244);
          if ( v1457 == v339 )
            break;
          v333 = dword_20D8AB0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2491, v331);
      sub_8DE270(v2490, &v2680, v340);
      sub_193A2E0(&v2137, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2137, v1889, v2490, (glf::Self **)v2491);
      sub_1938B70(&v2137);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2490);
      if ( v2491[0] != nullptr )
        operator delete(v2491[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v331 != 0 )
        operator delete(*(void **)v331);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v332 = ++v1760;
    }
    while ( v2017 != v1760 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2138, "SpawnGroup_Mine");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2138);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2138);
  v2018 = dword_20D8A40;
  if ( dword_20D8A40 > 0 )
  {
    v1761 = 0;
    v341 = (std::vector<int> *)&v2683;
    v342 = 0;
    do
    {
      v1295 = 32 * v342;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8A30 + 32 * v342 + 12));
      v343 = dword_20D8A30;
      v344 = dword_20D8A30 + v1295;
      v345 = *(uint32_t *)(dword_20D8A30 + v1295 + 8);
      v2680 = 0;
      v1890 = v345;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8A30 + v1295 + 20) > 0 )
      {
        v1458 = v341;
        v346 = 0;
        v347 = *(uint32_t *)(v344 + 20);
        while ( 1 )
        {
          v348 = *(char **)(*(uint32_t *)(v343 + v1295 + 16) + 4 * v346++);
          g4_std::string::construct_from_cstr(&v2139, v348);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2139);
          sub_1938B70(&v2139);
          if ( v347 == v346 )
            break;
          v343 = dword_20D8A30;
        }
        v343 = dword_20D8A30;
        v341 = v1458;
        v344 = dword_20D8A30 + v1295;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1459 = *(uint32_t *)(v344 + 28);
      if ( v1459 > 0 )
      {
        v349 = 0;
        while ( 1 )
        {
          v1245 = (std::vector<int> *)(*(uint32_t *)(v343 + v1295 + 24) + 4 * v349++);
          g4_std::vector_int_id_9b8903::push_back(v341, (const int *)v1245);
          if ( v1459 == v349 )
            break;
          v343 = dword_20D8A30;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2493, v341);
      sub_8DE270(v2492, &v2680, v350);
      sub_193A2E0(&v2140, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2140, v1890, v2492, (glf::Self **)v2493);
      sub_1938B70(&v2140);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2492);
      if ( v2493[0] != nullptr )
        operator delete(v2493[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v341 != 0 )
        operator delete(*(void **)v341);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v342 = ++v1761;
    }
    while ( v2018 != v1761 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2141, "SpawnGroup_PoorResidential");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2141);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2141);
  v2019 = dword_20D8AE0;
  if ( dword_20D8AE0 > 0 )
  {
    v1762 = 0;
    v351 = (std::vector<int> *)&v2683;
    v352 = 0;
    do
    {
      v1296 = 32 * v352;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8AD0 + 32 * v352 + 12));
      v353 = dword_20D8AD0;
      v354 = dword_20D8AD0 + v1296;
      v355 = *(uint32_t *)(dword_20D8AD0 + v1296 + 8);
      v2680 = 0;
      v1891 = v355;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8AD0 + v1296 + 20) > 0 )
      {
        v1460 = v351;
        v356 = 0;
        v357 = *(uint32_t *)(v354 + 20);
        while ( 1 )
        {
          v358 = *(char **)(*(uint32_t *)(v353 + v1296 + 16) + 4 * v356++);
          g4_std::string::construct_from_cstr(&v2142, v358);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2142);
          sub_1938B70(&v2142);
          if ( v357 == v356 )
            break;
          v353 = dword_20D8AD0;
        }
        v353 = dword_20D8AD0;
        v351 = v1460;
        v354 = dword_20D8AD0 + v1296;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1461 = *(uint32_t *)(v354 + 28);
      if ( v1461 > 0 )
      {
        v359 = 0;
        while ( 1 )
        {
          v1246 = (std::vector<int> *)(*(uint32_t *)(v353 + v1296 + 24) + 4 * v359++);
          g4_std::vector_int_id_9b8903::push_back(v351, (const int *)v1246);
          if ( v1461 == v359 )
            break;
          v353 = dword_20D8AD0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2495, v351);
      sub_8DE270(v2494, &v2680, v360);
      sub_193A2E0(&v2143, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2143, v1891, v2494, (glf::Self **)v2495);
      sub_1938B70(&v2143);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2494);
      if ( v2495[0] != nullptr )
        operator delete(v2495[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v351 != 0 )
        operator delete(*(void **)v351);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v352 = ++v1762;
    }
    while ( v2019 != v1762 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2144, "SpawnGroup_RichResidential");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2144);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2144);
  v2020 = dword_20D8B80;
  if ( dword_20D8B80 > 0 )
  {
    v1763 = 0;
    v361 = (std::vector<int> *)&v2683;
    v362 = 0;
    do
    {
      v1297 = 32 * v362;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8B70 + 32 * v362 + 12));
      v363 = dword_20D8B70;
      v364 = dword_20D8B70 + v1297;
      v365 = *(uint32_t *)(dword_20D8B70 + v1297 + 8);
      v2680 = 0;
      v1892 = v365;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8B70 + v1297 + 20) > 0 )
      {
        v1462 = v361;
        v366 = 0;
        v367 = *(uint32_t *)(v364 + 20);
        while ( 1 )
        {
          v368 = *(char **)(*(uint32_t *)(v363 + v1297 + 16) + 4 * v366++);
          g4_std::string::construct_from_cstr(&v2145, v368);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2145);
          sub_1938B70(&v2145);
          if ( v367 == v366 )
            break;
          v363 = dword_20D8B70;
        }
        v363 = dword_20D8B70;
        v361 = v1462;
        v364 = dword_20D8B70 + v1297;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1463 = *(uint32_t *)(v364 + 28);
      if ( v1463 > 0 )
      {
        v369 = 0;
        while ( 1 )
        {
          v1247 = (std::vector<int> *)(*(uint32_t *)(v363 + v1297 + 24) + 4 * v369++);
          g4_std::vector_int_id_9b8903::push_back(v361, (const int *)v1247);
          if ( v1463 == v369 )
            break;
          v363 = dword_20D8B70;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2497, v361);
      sub_8DE270(v2496, &v2680, v370);
      sub_193A2E0(&v2146, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2146, v1892, v2496, (glf::Self **)v2497);
      sub_1938B70(&v2146);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2496);
      if ( v2497[0] != nullptr )
        operator delete(v2497[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v361 != 0 )
        operator delete(*(void **)v361);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v362 = ++v1763;
    }
    while ( v2020 != v1763 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2147, "SpawnGroup_Strip");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2147);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2147);
  v2021 = dword_20D8BE0;
  if ( dword_20D8BE0 > 0 )
  {
    v1764 = 0;
    v371 = (std::vector<int> *)&v2683;
    v372 = 0;
    do
    {
      v1298 = 32 * v372;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8BD0 + 32 * v372 + 12));
      v373 = dword_20D8BD0;
      v374 = dword_20D8BD0 + v1298;
      v375 = *(uint32_t *)(dword_20D8BD0 + v1298 + 8);
      v2680 = 0;
      v1893 = v375;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8BD0 + v1298 + 20) > 0 )
      {
        v1464 = v371;
        v376 = 0;
        v377 = *(uint32_t *)(v374 + 20);
        while ( 1 )
        {
          v378 = *(char **)(*(uint32_t *)(v373 + v1298 + 16) + 4 * v376++);
          g4_std::string::construct_from_cstr(&v2148, v378);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2148);
          sub_1938B70(&v2148);
          if ( v377 == v376 )
            break;
          v373 = dword_20D8BD0;
        }
        v373 = dword_20D8BD0;
        v371 = v1464;
        v374 = dword_20D8BD0 + v1298;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1465 = *(uint32_t *)(v374 + 28);
      if ( v1465 > 0 )
      {
        v379 = 0;
        while ( 1 )
        {
          v1248 = (std::vector<int> *)(*(uint32_t *)(v373 + v1298 + 24) + 4 * v379++);
          g4_std::vector_int_id_9b8903::push_back(v371, (const int *)v1248);
          if ( v1465 == v379 )
            break;
          v373 = dword_20D8BD0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2499, v371);
      sub_8DE270(v2498, &v2680, v380);
      sub_193A2E0(&v2149, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2149, v1893, v2498, (glf::Self **)v2499);
      sub_1938B70(&v2149);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2498);
      if ( v2499[0] != nullptr )
        operator delete(v2499[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v371 != 0 )
        operator delete(*(void **)v371);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v372 = ++v1764;
    }
    while ( v2021 != v1764 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2150, "SpawnGroup_Trailer");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2150);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2150);
  v2022 = dword_20D8A80;
  if ( dword_20D8A80 > 0 )
  {
    v1765 = 0;
    v381 = (std::vector<int> *)&v2683;
    v382 = 0;
    do
    {
      v1299 = 32 * v382;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8A70 + 32 * v382 + 12));
      v383 = dword_20D8A70;
      v384 = dword_20D8A70 + v1299;
      v385 = *(uint32_t *)(dword_20D8A70 + v1299 + 8);
      v2680 = 0;
      v1894 = v385;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8A70 + v1299 + 20) > 0 )
      {
        v1466 = v381;
        v386 = 0;
        v387 = *(uint32_t *)(v384 + 20);
        while ( 1 )
        {
          v388 = *(char **)(*(uint32_t *)(v383 + v1299 + 16) + 4 * v386++);
          g4_std::string::construct_from_cstr(&v2151, v388);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2151);
          sub_1938B70(&v2151);
          if ( v387 == v386 )
            break;
          v383 = dword_20D8A70;
        }
        v383 = dword_20D8A70;
        v381 = v1466;
        v384 = dword_20D8A70 + v1299;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1467 = *(uint32_t *)(v384 + 28);
      if ( v1467 > 0 )
      {
        v389 = 0;
        while ( 1 )
        {
          v1249 = (std::vector<int> *)(*(uint32_t *)(v383 + v1299 + 24) + 4 * v389++);
          g4_std::vector_int_id_9b8903::push_back(v381, (const int *)v1249);
          if ( v1467 == v389 )
            break;
          v383 = dword_20D8A70;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2501, v381);
      sub_8DE270(v2500, &v2680, v390);
      sub_193A2E0(&v2152, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2152, v1894, v2500, (glf::Self **)v2501);
      sub_1938B70(&v2152);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2500);
      if ( v2501[0] != nullptr )
        operator delete(v2501[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v381 != 0 )
        operator delete(*(void **)v381);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v382 = ++v1765;
    }
    while ( v2022 != v1765 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2153, "SpawnGroup_UberDam");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2153);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2153);
  v2023 = dword_20D8A60;
  if ( dword_20D8A60 > 0 )
  {
    v1766 = 0;
    v391 = (std::vector<int> *)&v2683;
    v392 = 0;
    do
    {
      v1300 = 32 * v392;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8A50 + 32 * v392 + 12));
      v393 = dword_20D8A50;
      v394 = dword_20D8A50 + v1300;
      v395 = *(uint32_t *)(dword_20D8A50 + v1300 + 8);
      v2680 = 0;
      v1895 = v395;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8A50 + v1300 + 20) > 0 )
      {
        v1468 = v391;
        v396 = 0;
        v397 = *(uint32_t *)(v394 + 20);
        while ( 1 )
        {
          v398 = *(char **)(*(uint32_t *)(v393 + v1300 + 16) + 4 * v396++);
          g4_std::string::construct_from_cstr(&v2154, v398);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2154);
          sub_1938B70(&v2154);
          if ( v397 == v396 )
            break;
          v393 = dword_20D8A50;
        }
        v393 = dword_20D8A50;
        v391 = v1468;
        v394 = dword_20D8A50 + v1300;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1469 = *(uint32_t *)(v394 + 28);
      if ( v1469 > 0 )
      {
        v399 = 0;
        while ( 1 )
        {
          v1250 = (std::vector<int> *)(*(uint32_t *)(v393 + v1300 + 24) + 4 * v399++);
          g4_std::vector_int_id_9b8903::push_back(v391, (const int *)v1250);
          if ( v1469 == v399 )
            break;
          v393 = dword_20D8A50;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2503, v391);
      sub_8DE270(v2502, &v2680, v400);
      sub_193A2E0(&v2155, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2155, v1895, v2502, (glf::Self **)v2503);
      sub_1938B70(&v2155);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2502);
      if ( v2503[0] != nullptr )
        operator delete(v2503[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v391 != 0 )
        operator delete(*(void **)v391);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v392 = ++v1766;
    }
    while ( v2023 != v1766 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2156, "SpawnGroup_VehicleFPP");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2156);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2156);
  v2024 = dword_20D86E0;
  if ( dword_20D86E0 > 0 )
  {
    v1767 = 0;
    v401 = (std::vector<int> *)&v2683;
    v402 = 0;
    do
    {
      v1301 = 32 * v402;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D86D0 + 32 * v402 + 12));
      v403 = dword_20D86D0;
      v404 = dword_20D86D0 + v1301;
      v405 = *(uint32_t *)(dword_20D86D0 + v1301 + 8);
      v2680 = 0;
      v1896 = v405;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D86D0 + v1301 + 20) > 0 )
      {
        v1470 = v401;
        v406 = 0;
        v407 = *(uint32_t *)(v404 + 20);
        while ( 1 )
        {
          v408 = *(char **)(*(uint32_t *)(v403 + v1301 + 16) + 4 * v406++);
          g4_std::string::construct_from_cstr(&v2157, v408);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2157);
          sub_1938B70(&v2157);
          if ( v407 == v406 )
            break;
          v403 = dword_20D86D0;
        }
        v403 = dword_20D86D0;
        v401 = v1470;
        v404 = dword_20D86D0 + v1301;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1471 = *(uint32_t *)(v404 + 28);
      if ( v1471 > 0 )
      {
        v409 = 0;
        while ( 1 )
        {
          v1251 = (std::vector<int> *)(*(uint32_t *)(v403 + v1301 + 24) + 4 * v409++);
          g4_std::vector_int_id_9b8903::push_back(v401, (const int *)v1251);
          if ( v1471 == v409 )
            break;
          v403 = dword_20D86D0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2505, v401);
      sub_8DE270(v2504, &v2680, v410);
      sub_193A2E0(&v2158, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2158, v1896, v2504, (glf::Self **)v2505);
      sub_1938B70(&v2158);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2504);
      if ( v2505[0] != nullptr )
        operator delete(v2505[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v401 != 0 )
        operator delete(*(void **)v401);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v402 = ++v1767;
    }
    while ( v2024 != v1767 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2159, "SpawnGroup_VehicleAirport");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2159);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2159);
  v2025 = dword_20D86C0;
  if ( dword_20D86C0 > 0 )
  {
    v1768 = 0;
    v411 = (std::vector<int> *)&v2683;
    v412 = 0;
    do
    {
      v1302 = 32 * v412;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D86B0 + 32 * v412 + 12));
      v413 = dword_20D86B0;
      v414 = dword_20D86B0 + v1302;
      v415 = *(uint32_t *)(dword_20D86B0 + v1302 + 8);
      v2680 = 0;
      v1897 = v415;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D86B0 + v1302 + 20) > 0 )
      {
        v1472 = v411;
        v416 = 0;
        v417 = *(uint32_t *)(v414 + 20);
        while ( 1 )
        {
          v418 = *(char **)(*(uint32_t *)(v413 + v1302 + 16) + 4 * v416++);
          g4_std::string::construct_from_cstr(&v2160, v418);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2160);
          sub_1938B70(&v2160);
          if ( v417 == v416 )
            break;
          v413 = dword_20D86B0;
        }
        v413 = dword_20D86B0;
        v411 = v1472;
        v414 = dword_20D86B0 + v1302;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1473 = *(uint32_t *)(v414 + 28);
      if ( v1473 > 0 )
      {
        v419 = 0;
        while ( 1 )
        {
          v1252 = (std::vector<int> *)(*(uint32_t *)(v413 + v1302 + 24) + 4 * v419++);
          g4_std::vector_int_id_9b8903::push_back(v411, (const int *)v1252);
          if ( v1473 == v419 )
            break;
          v413 = dword_20D86B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2507, v411);
      sub_8DE270(v2506, &v2680, v420);
      sub_193A2E0(&v2161, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2161, v1897, v2506, (glf::Self **)v2507);
      sub_1938B70(&v2161);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2506);
      if ( v2507[0] != nullptr )
        operator delete(v2507[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v411 != 0 )
        operator delete(*(void **)v411);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v412 = ++v1768;
    }
    while ( v2025 != v1768 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2162, "SpawnGroup_VehicleArmybase");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2162);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2162);
  v2026 = dword_20D86A0;
  if ( dword_20D86A0 > 0 )
  {
    v1769 = 0;
    v421 = (std::vector<int> *)&v2683;
    v422 = 0;
    do
    {
      v1303 = 32 * v422;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8690 + 32 * v422 + 12));
      v423 = dword_20D8690;
      v424 = dword_20D8690 + v1303;
      v425 = *(uint32_t *)(dword_20D8690 + v1303 + 8);
      v2680 = 0;
      v1898 = v425;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8690 + v1303 + 20) > 0 )
      {
        v1474 = v421;
        v426 = 0;
        v427 = *(uint32_t *)(v424 + 20);
        while ( 1 )
        {
          v428 = *(char **)(*(uint32_t *)(v423 + v1303 + 16) + 4 * v426++);
          g4_std::string::construct_from_cstr(&v2163, v428);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2163);
          sub_1938B70(&v2163);
          if ( v427 == v426 )
            break;
          v423 = dword_20D8690;
        }
        v423 = dword_20D8690;
        v421 = v1474;
        v424 = dword_20D8690 + v1303;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1475 = *(uint32_t *)(v424 + 28);
      if ( v1475 > 0 )
      {
        v429 = 0;
        while ( 1 )
        {
          v1253 = (std::vector<int> *)(*(uint32_t *)(v423 + v1303 + 24) + 4 * v429++);
          g4_std::vector_int_id_9b8903::push_back(v421, (const int *)v1253);
          if ( v1475 == v429 )
            break;
          v423 = dword_20D8690;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2509, v421);
      sub_8DE270(v2508, &v2680, v430);
      sub_193A2E0(&v2164, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2164, v1898, v2508, (glf::Self **)v2509);
      sub_1938B70(&v2164);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2508);
      if ( v2509[0] != nullptr )
        operator delete(v2509[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v421 != 0 )
        operator delete(*(void **)v421);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v422 = ++v1769;
    }
    while ( v2026 != v1769 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2165, "SpawnGroup_VehicleConstruction");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2165);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2165);
  v2027 = dword_20D8680;
  if ( dword_20D8680 > 0 )
  {
    v1770 = 0;
    v431 = (std::vector<int> *)&v2683;
    v432 = 0;
    do
    {
      v1304 = 32 * v432;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8670 + 32 * v432 + 12));
      v433 = dword_20D8670;
      v434 = dword_20D8670 + v1304;
      v435 = *(uint32_t *)(dword_20D8670 + v1304 + 8);
      v2680 = 0;
      v1899 = v435;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8670 + v1304 + 20) > 0 )
      {
        v1476 = v431;
        v436 = 0;
        v437 = *(uint32_t *)(v434 + 20);
        while ( 1 )
        {
          v438 = *(char **)(*(uint32_t *)(v433 + v1304 + 16) + 4 * v436++);
          g4_std::string::construct_from_cstr(&v2166, v438);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2166);
          sub_1938B70(&v2166);
          if ( v437 == v436 )
            break;
          v433 = dword_20D8670;
        }
        v433 = dword_20D8670;
        v431 = v1476;
        v434 = dword_20D8670 + v1304;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1477 = *(uint32_t *)(v434 + 28);
      if ( v1477 > 0 )
      {
        v439 = 0;
        while ( 1 )
        {
          v1254 = (std::vector<int> *)(*(uint32_t *)(v433 + v1304 + 24) + 4 * v439++);
          g4_std::vector_int_id_9b8903::push_back(v431, (const int *)v1254);
          if ( v1477 == v439 )
            break;
          v433 = dword_20D8670;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2511, v431);
      sub_8DE270(v2510, &v2680, v440);
      sub_193A2E0(&v2167, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2167, v1899, v2510, (glf::Self **)v2511);
      sub_1938B70(&v2167);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2510);
      if ( v2511[0] != nullptr )
        operator delete(v2511[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v431 != 0 )
        operator delete(*(void **)v431);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v432 = ++v1770;
    }
    while ( v2027 != v1770 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2168, "SpawnGroup_VehicleDesert");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2168);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2168);
  v2028 = dword_20D8660;
  if ( dword_20D8660 > 0 )
  {
    v1771 = 0;
    v441 = (std::vector<int> *)&v2683;
    v442 = 0;
    do
    {
      v1305 = 32 * v442;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8650 + 32 * v442 + 12));
      v443 = dword_20D8650;
      v444 = dword_20D8650 + v1305;
      v445 = *(uint32_t *)(dword_20D8650 + v1305 + 8);
      v2680 = 0;
      v1900 = v445;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8650 + v1305 + 20) > 0 )
      {
        v1478 = v441;
        v446 = 0;
        v447 = *(uint32_t *)(v444 + 20);
        while ( 1 )
        {
          v448 = *(char **)(*(uint32_t *)(v443 + v1305 + 16) + 4 * v446++);
          g4_std::string::construct_from_cstr(&v2169, v448);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2169);
          sub_1938B70(&v2169);
          if ( v447 == v446 )
            break;
          v443 = dword_20D8650;
        }
        v443 = dword_20D8650;
        v441 = v1478;
        v444 = dword_20D8650 + v1305;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1479 = *(uint32_t *)(v444 + 28);
      if ( v1479 > 0 )
      {
        v449 = 0;
        while ( 1 )
        {
          v1255 = (std::vector<int> *)(*(uint32_t *)(v443 + v1305 + 24) + 4 * v449++);
          g4_std::vector_int_id_9b8903::push_back(v441, (const int *)v1255);
          if ( v1479 == v449 )
            break;
          v443 = dword_20D8650;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2513, v441);
      sub_8DE270(v2512, &v2680, v450);
      sub_193A2E0(&v2170, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2170, v1900, v2512, (glf::Self **)v2513);
      sub_1938B70(&v2170);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2512);
      if ( v2513[0] != nullptr )
        operator delete(v2513[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v441 != 0 )
        operator delete(*(void **)v441);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v442 = ++v1771;
    }
    while ( v2028 != v1771 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2171, "SpawnGroup_VehicleDowntown");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2171);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2171);
  v2029 = dword_20D8640;
  if ( dword_20D8640 > 0 )
  {
    v1772 = 0;
    v451 = (std::vector<int> *)&v2683;
    v452 = 0;
    do
    {
      v1306 = 32 * v452;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8630 + 32 * v452 + 12));
      v453 = dword_20D8630;
      v454 = dword_20D8630 + v1306;
      v455 = *(uint32_t *)(dword_20D8630 + v1306 + 8);
      v2680 = 0;
      v1901 = v455;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8630 + v1306 + 20) > 0 )
      {
        v1480 = v451;
        v456 = 0;
        v457 = *(uint32_t *)(v454 + 20);
        while ( 1 )
        {
          v458 = *(char **)(*(uint32_t *)(v453 + v1306 + 16) + 4 * v456++);
          g4_std::string::construct_from_cstr(&v2172, v458);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2172);
          sub_1938B70(&v2172);
          if ( v457 == v456 )
            break;
          v453 = dword_20D8630;
        }
        v453 = dword_20D8630;
        v451 = v1480;
        v454 = dword_20D8630 + v1306;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1481 = *(uint32_t *)(v454 + 28);
      if ( v1481 > 0 )
      {
        v459 = 0;
        while ( 1 )
        {
          v1256 = (std::vector<int> *)(*(uint32_t *)(v453 + v1306 + 24) + 4 * v459++);
          g4_std::vector_int_id_9b8903::push_back(v451, (const int *)v1256);
          if ( v1481 == v459 )
            break;
          v453 = dword_20D8630;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2515, v451);
      sub_8DE270(v2514, &v2680, v460);
      sub_193A2E0(&v2173, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2173, v1901, v2514, (glf::Self **)v2515);
      sub_1938B70(&v2173);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2514);
      if ( v2515[0] != nullptr )
        operator delete(v2515[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v451 != 0 )
        operator delete(*(void **)v451);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v452 = ++v1772;
    }
    while ( v2029 != v1772 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2174, "SpawnGroup_VehicleGovernment");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2174);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2174);
  v2030 = dword_20D8620;
  if ( dword_20D8620 > 0 )
  {
    v1773 = 0;
    v461 = (std::vector<int> *)&v2683;
    v462 = 0;
    do
    {
      v1307 = 32 * v462;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8610 + 32 * v462 + 12));
      v463 = dword_20D8610;
      v464 = dword_20D8610 + v1307;
      v465 = *(uint32_t *)(dword_20D8610 + v1307 + 8);
      v2680 = 0;
      v1902 = v465;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D8610 + v1307 + 20) > 0 )
      {
        v1482 = v461;
        v466 = 0;
        v467 = *(uint32_t *)(v464 + 20);
        while ( 1 )
        {
          v468 = *(char **)(*(uint32_t *)(v463 + v1307 + 16) + 4 * v466++);
          g4_std::string::construct_from_cstr(&v2175, v468);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2175);
          sub_1938B70(&v2175);
          if ( v467 == v466 )
            break;
          v463 = dword_20D8610;
        }
        v463 = dword_20D8610;
        v461 = v1482;
        v464 = dword_20D8610 + v1307;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1483 = *(uint32_t *)(v464 + 28);
      if ( v1483 > 0 )
      {
        v469 = 0;
        while ( 1 )
        {
          v1257 = (std::vector<int> *)(*(uint32_t *)(v463 + v1307 + 24) + 4 * v469++);
          g4_std::vector_int_id_9b8903::push_back(v461, (const int *)v1257);
          if ( v1483 == v469 )
            break;
          v463 = dword_20D8610;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2517, v461);
      sub_8DE270(v2516, &v2680, v470);
      sub_193A2E0(&v2176, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2176, v1902, v2516, (glf::Self **)v2517);
      sub_1938B70(&v2176);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2516);
      if ( v2517[0] != nullptr )
        operator delete(v2517[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v461 != 0 )
        operator delete(*(void **)v461);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v462 = ++v1773;
    }
    while ( v2030 != v1773 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2177, "SpawnGroup_VehicleIndustrial");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2177);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2177);
  v2031 = dword_20D8600;
  if ( dword_20D8600 > 0 )
  {
    v1774 = 0;
    v471 = (std::vector<int> *)&v2683;
    v472 = 0;
    do
    {
      v1308 = 32 * v472;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D85F0 + 32 * v472 + 12));
      v473 = dword_20D85F0;
      v474 = dword_20D85F0 + v1308;
      v475 = *(uint32_t *)(dword_20D85F0 + v1308 + 8);
      v2680 = 0;
      v1903 = v475;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D85F0 + v1308 + 20) > 0 )
      {
        v1484 = v471;
        v476 = 0;
        v477 = *(uint32_t *)(v474 + 20);
        while ( 1 )
        {
          v478 = *(char **)(*(uint32_t *)(v473 + v1308 + 16) + 4 * v476++);
          g4_std::string::construct_from_cstr(&v2178, v478);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2178);
          sub_1938B70(&v2178);
          if ( v477 == v476 )
            break;
          v473 = dword_20D85F0;
        }
        v473 = dword_20D85F0;
        v471 = v1484;
        v474 = dword_20D85F0 + v1308;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1485 = *(uint32_t *)(v474 + 28);
      if ( v1485 > 0 )
      {
        v479 = 0;
        while ( 1 )
        {
          v1258 = (std::vector<int> *)(*(uint32_t *)(v473 + v1308 + 24) + 4 * v479++);
          g4_std::vector_int_id_9b8903::push_back(v471, (const int *)v1258);
          if ( v1485 == v479 )
            break;
          v473 = dword_20D85F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2519, v471);
      sub_8DE270(v2518, &v2680, v480);
      sub_193A2E0(&v2179, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2179, v1903, v2518, (glf::Self **)v2519);
      sub_1938B70(&v2179);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2518);
      if ( v2519[0] != nullptr )
        operator delete(v2519[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v471 != 0 )
        operator delete(*(void **)v471);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v472 = ++v1774;
    }
    while ( v2031 != v1774 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2180, "SpawnGroup_VehicleMine");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2180);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2180);
  v2032 = dword_20D85E0;
  if ( dword_20D85E0 > 0 )
  {
    v1775 = 0;
    v481 = (std::vector<int> *)&v2683;
    v482 = 0;
    do
    {
      v1309 = 32 * v482;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D85D0 + 32 * v482 + 12));
      v483 = dword_20D85D0;
      v484 = dword_20D85D0 + v1309;
      v485 = *(uint32_t *)(dword_20D85D0 + v1309 + 8);
      v2680 = 0;
      v1904 = v485;
      v2681 = 0;
      v2682 = 0;
      if ( *(int *)(dword_20D85D0 + v1309 + 20) > 0 )
      {
        v1486 = v481;
        v486 = 0;
        v487 = *(uint32_t *)(v484 + 20);
        while ( 1 )
        {
          v488 = *(char **)(*(uint32_t *)(v483 + v1309 + 16) + 4 * v486++);
          g4_std::string::construct_from_cstr(&v2181, v488);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2181);
          sub_1938B70(&v2181);
          if ( v487 == v486 )
            break;
          v483 = dword_20D85D0;
        }
        v483 = dword_20D85D0;
        v481 = v1486;
        v484 = dword_20D85D0 + v1309;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1487 = *(uint32_t *)(v484 + 28);
      if ( v1487 > 0 )
      {
        v489 = 0;
        while ( 1 )
        {
          v1259 = (std::vector<int> *)(*(uint32_t *)(v483 + v1309 + 24) + 4 * v489++);
          g4_std::vector_int_id_9b8903::push_back(v481, (const int *)v1259);
          if ( v1487 == v489 )
            break;
          v483 = dword_20D85D0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2521, v481);
      sub_8DE270(v2520, &v2680, v490);
      sub_193A2E0(&v2182, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2182, v1904, v2520, (glf::Self **)v2521);
      sub_1938B70(&v2182);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2520);
      if ( v2521[0] != nullptr )
        operator delete(v2521[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( *(uint32_t *)v481 != 0 )
        operator delete(*(void **)v481);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v482 = ++v1775;
    }
    while ( v2032 != v1775 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2183, "SpawnGroup_VehiclePoorResidential");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2183);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2183);
  v1905 = dword_20D85C0;
  if ( dword_20D85C0 > 0 )
  {
    v1648 = nullptr;
    v491 = nullptr;
    do
    {
      v1310 = 32 * (uint32_t)(uintptr_t)v491;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D85B0 + 32 * (uint32_t)(uintptr_t)v491 + 12));
      v492 = dword_20D85B0;
      v493 = dword_20D85B0 + v1310;
      v494 = *(uint32_t *)(dword_20D85B0 + v1310 + 8);
      v2680 = 0;
      v1776 = v494;
      v2681 = 0;
      v2682 = 0;
      v1488 = *(uint32_t *)(dword_20D85B0 + v1310 + 20);
      if ( v1488 > 0 )
      {
        v495 = 0;
        do
        {
          v496 = *(char **)(*(uint32_t *)(v492 + v1310 + 16) + 4 * v495++);
          g4_std::string::construct_from_cstr(&v2184, v496);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2184);
          sub_1938B70(&v2184);
          v492 = dword_20D85B0;
        }
        while ( v1488 != v495 );
        v493 = dword_20D85B0 + v1310;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1489 = *(uint32_t *)(v493 + 28);
      if ( v1489 > 0 )
      {
        v497 = 0;
        while ( 1 )
        {
          v498 = 4 * v497++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v492 + v1310 + 24) + v498));
          if ( v1489 == v497 )
            break;
          v492 = dword_20D85B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2523, (const std::vector<int> *)&v2683);
      sub_8DE270(v2522, &v2680, v499);
      sub_193A2E0(&v2185, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2185, v1776, v2522, (glf::Self **)v2523);
      sub_1938B70(&v2185);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2522);
      if ( v2523[0] != nullptr )
        operator delete(v2523[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1648 = (std::vector<int> *)((char *)v1648 + 1);
      v491 = v1648;
    }
    while ( (std::vector<int> *)v1905 != v1648 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2186, "SpawnGroup_VehicleTrailer");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2186);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2186);
  v2033 = dword_20D8540;
  if ( dword_20D8540 > 0 )
  {
    v1777 = 0;
    v500 = 0;
    do
    {
      v1311 = 32 * v500;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8530 + 32 * v500 + 12));
      v501 = dword_20D8530;
      v502 = dword_20D8530 + v1311;
      v503 = *(uint32_t *)(dword_20D8530 + v1311 + 8);
      v2680 = 0;
      v1906 = v503;
      v2681 = 0;
      v2682 = 0;
      v1490 = *(uint32_t *)(dword_20D8530 + v1311 + 20);
      if ( v1490 > 0 )
      {
        v504 = 0;
        do
        {
          v505 = *(char **)(*(uint32_t *)(v501 + v1311 + 16) + 4 * v504++);
          g4_std::string::construct_from_cstr(&v2187, v505);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2187);
          sub_1938B70(&v2187);
          v501 = dword_20D8530;
        }
        while ( v1490 != v504 );
        v502 = dword_20D8530 + v1311;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1491 = *(uint32_t *)(v502 + 28);
      if ( v1491 > 0 )
      {
        v506 = 0;
        while ( 1 )
        {
          v1260 = (std::vector<int> *)(*(uint32_t *)(v501 + v1311 + 24) + 4 * v506++);
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)v1260);
          if ( v1491 == v506 )
            break;
          v501 = dword_20D8530;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2525, (const std::vector<int> *)&v2683);
      sub_8DE270(v2524, &v2680, v507);
      sub_193A2E0(&v2188, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2188, v1906, v2524, (glf::Self **)v2525);
      sub_1938B70(&v2188);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2524);
      if ( v2525[0] != nullptr )
        operator delete(v2525[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v500 = ++v1777;
    }
    while ( v2033 != v1777 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2189, "SpawnGroup_VehicleRichResidential");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2189);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2189);
  v1907 = dword_20D85A0;
  if ( dword_20D85A0 > 0 )
  {
    v1649 = nullptr;
    v508 = nullptr;
    do
    {
      v1312 = 32 * (uint32_t)(uintptr_t)v508;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8590 + 32 * (uint32_t)(uintptr_t)v508 + 12));
      v509 = dword_20D8590;
      v510 = dword_20D8590 + v1312;
      v511 = *(uint32_t *)(dword_20D8590 + v1312 + 8);
      v2680 = 0;
      v1778 = v511;
      v2681 = 0;
      v2682 = 0;
      v1492 = *(uint32_t *)(dword_20D8590 + v1312 + 20);
      if ( v1492 > 0 )
      {
        v512 = 0;
        do
        {
          v513 = *(char **)(*(uint32_t *)(v509 + v1312 + 16) + 4 * v512++);
          g4_std::string::construct_from_cstr(&v2190, v513);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2190);
          sub_1938B70(&v2190);
          v509 = dword_20D8590;
        }
        while ( v1492 != v512 );
        v510 = dword_20D8590 + v1312;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1493 = *(uint32_t *)(v510 + 28);
      if ( v1493 > 0 )
      {
        v514 = 0;
        while ( 1 )
        {
          v515 = 4 * v514++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v509 + v1312 + 24) + v515));
          if ( v1493 == v514 )
            break;
          v509 = dword_20D8590;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2527, (const std::vector<int> *)&v2683);
      sub_8DE270(v2526, &v2680, v516);
      sub_193A2E0(&v2191, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2191, v1778, v2526, (glf::Self **)v2527);
      sub_1938B70(&v2191);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2526);
      if ( v2527[0] != nullptr )
        operator delete(v2527[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1649 = (std::vector<int> *)((char *)v1649 + 1);
      v508 = v1649;
    }
    while ( (std::vector<int> *)v1907 != v1649 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2192, "SpawnGroup_VehicleStrip");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2192);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2192);
  v1908 = dword_20D8580;
  if ( dword_20D8580 > 0 )
  {
    v1650 = nullptr;
    v517 = nullptr;
    do
    {
      v1313 = 32 * (uint32_t)(uintptr_t)v517;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8570 + 32 * (uint32_t)(uintptr_t)v517 + 12));
      v518 = dword_20D8570;
      v519 = dword_20D8570 + v1313;
      v520 = *(uint32_t *)(dword_20D8570 + v1313 + 8);
      v2680 = 0;
      v1779 = v520;
      v2681 = 0;
      v2682 = 0;
      v1494 = *(uint32_t *)(dword_20D8570 + v1313 + 20);
      if ( v1494 > 0 )
      {
        v521 = 0;
        do
        {
          v522 = *(char **)(*(uint32_t *)(v518 + v1313 + 16) + 4 * v521++);
          g4_std::string::construct_from_cstr(&v2193, v522);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2193);
          sub_1938B70(&v2193);
          v518 = dword_20D8570;
        }
        while ( v1494 != v521 );
        v519 = dword_20D8570 + v1313;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1495 = *(uint32_t *)(v519 + 28);
      if ( v1495 > 0 )
      {
        v523 = 0;
        while ( 1 )
        {
          v524 = 4 * v523++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v518 + v1313 + 24) + v524));
          if ( v1495 == v523 )
            break;
          v518 = dword_20D8570;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2529, (const std::vector<int> *)&v2683);
      sub_8DE270(v2528, &v2680, v525);
      sub_193A2E0(&v2194, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2194, v1779, v2528, (glf::Self **)v2529);
      sub_1938B70(&v2194);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2528);
      if ( v2529[0] != nullptr )
        operator delete(v2529[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1650 = (std::vector<int> *)((char *)v1650 + 1);
      v517 = v1650;
    }
    while ( (std::vector<int> *)v1908 != v1650 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2195, "SpawnGroup_VehicleBacklot");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2195);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2195);
  v1909 = dword_20D8560;
  if ( dword_20D8560 > 0 )
  {
    v1651 = nullptr;
    v526 = nullptr;
    do
    {
      v1314 = 32 * (uint32_t)(uintptr_t)v526;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8550 + 32 * (uint32_t)(uintptr_t)v526 + 12));
      v527 = dword_20D8550;
      v528 = dword_20D8550 + v1314;
      v529 = *(uint32_t *)(dword_20D8550 + v1314 + 8);
      v2680 = 0;
      v1780 = v529;
      v2681 = 0;
      v2682 = 0;
      v1496 = *(uint32_t *)(dword_20D8550 + v1314 + 20);
      if ( v1496 > 0 )
      {
        v530 = 0;
        do
        {
          v531 = *(char **)(*(uint32_t *)(v527 + v1314 + 16) + 4 * v530++);
          g4_std::string::construct_from_cstr(&v2196, v531);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2196);
          sub_1938B70(&v2196);
          v527 = dword_20D8550;
        }
        while ( v1496 != v530 );
        v528 = dword_20D8550 + v1314;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1497 = *(uint32_t *)(v528 + 28);
      if ( v1497 > 0 )
      {
        v532 = 0;
        while ( 1 )
        {
          v533 = 4 * v532++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v527 + v1314 + 24) + v533));
          if ( v1497 == v532 )
            break;
          v527 = dword_20D8550;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2531, (const std::vector<int> *)&v2683);
      sub_8DE270(v2530, &v2680, v534);
      sub_193A2E0(&v2197, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2197, v1780, v2530, (glf::Self **)v2531);
      sub_1938B70(&v2197);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2530);
      if ( v2531[0] != nullptr )
        operator delete(v2531[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1651 = (std::vector<int> *)((char *)v1651 + 1);
      v526 = v1651;
    }
    while ( (std::vector<int> *)v1909 != v1651 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2198, "SpawnGroup_VehicleUberDam");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2198);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2198);
  v1910 = dword_20D8520;
  if ( dword_20D8520 > 0 )
  {
    v1652 = nullptr;
    v535 = nullptr;
    do
    {
      v1315 = 32 * (uint32_t)(uintptr_t)v535;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8510 + 32 * (uint32_t)(uintptr_t)v535 + 12));
      v536 = dword_20D8510;
      v537 = dword_20D8510 + v1315;
      v538 = *(uint32_t *)(dword_20D8510 + v1315 + 8);
      v2680 = 0;
      v1781 = v538;
      v2681 = 0;
      v2682 = 0;
      v1498 = *(uint32_t *)(dword_20D8510 + v1315 + 20);
      if ( v1498 > 0 )
      {
        v539 = 0;
        do
        {
          v540 = *(char **)(*(uint32_t *)(v536 + v1315 + 16) + 4 * v539++);
          g4_std::string::construct_from_cstr(&v2199, v540);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2199);
          sub_1938B70(&v2199);
          v536 = dword_20D8510;
        }
        while ( v1498 != v539 );
        v537 = dword_20D8510 + v1315;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1499 = *(uint32_t *)(v537 + 28);
      if ( v1499 > 0 )
      {
        v541 = 0;
        while ( 1 )
        {
          v542 = 4 * v541++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v536 + v1315 + 24) + v542));
          if ( v1499 == v541 )
            break;
          v536 = dword_20D8510;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2533, (const std::vector<int> *)&v2683);
      sub_8DE270(v2532, &v2680, v543);
      sub_193A2E0(&v2200, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2200, v1781, v2532, (glf::Self **)v2533);
      sub_1938B70(&v2200);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2532);
      if ( v2533[0] != nullptr )
        operator delete(v2533[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1652 = (std::vector<int> *)((char *)v1652 + 1);
      v535 = v1652;
    }
    while ( (std::vector<int> *)v1910 != v1652 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2201, "SpawnGroup_VehicleWater");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2201);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2201);
  v1911 = dword_20D8500;
  if ( dword_20D8500 > 0 )
  {
    v1653 = nullptr;
    v544 = nullptr;
    do
    {
      v1316 = 32 * (uint32_t)(uintptr_t)v544;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D84F0 + 32 * (uint32_t)(uintptr_t)v544 + 12));
      v545 = dword_20D84F0;
      v546 = dword_20D84F0 + v1316;
      v547 = *(uint32_t *)(dword_20D84F0 + v1316 + 8);
      v2680 = 0;
      v1782 = v547;
      v2681 = 0;
      v2682 = 0;
      v1500 = *(uint32_t *)(dword_20D84F0 + v1316 + 20);
      if ( v1500 > 0 )
      {
        v548 = 0;
        do
        {
          v549 = *(char **)(*(uint32_t *)(v545 + v1316 + 16) + 4 * v548++);
          g4_std::string::construct_from_cstr(&v2202, v549);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2202);
          sub_1938B70(&v2202);
          v545 = dword_20D84F0;
        }
        while ( v1500 != v548 );
        v546 = dword_20D84F0 + v1316;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1501 = *(uint32_t *)(v546 + 28);
      if ( v1501 > 0 )
      {
        v550 = 0;
        while ( 1 )
        {
          v551 = 4 * v550++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v545 + v1316 + 24) + v551));
          if ( v1501 == v550 )
            break;
          v545 = dword_20D84F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2535, (const std::vector<int> *)&v2683);
      sub_8DE270(v2534, &v2680, v552);
      sub_193A2E0(&v2203, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2203, v1782, v2534, (glf::Self **)v2535);
      sub_1938B70(&v2203);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2534);
      if ( v2535[0] != nullptr )
        operator delete(v2535[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1653 = (std::vector<int> *)((char *)v1653 + 1);
      v544 = v1653;
    }
    while ( (std::vector<int> *)v1911 != v1653 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2204, "SpawnGroup_VehicleWaterPolice");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2204);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2204);
  v1912 = dword_20D84E0;
  if ( dword_20D84E0 > 0 )
  {
    v1654 = nullptr;
    v553 = nullptr;
    do
    {
      v1317 = 32 * (uint32_t)(uintptr_t)v553;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D84D0 + 32 * (uint32_t)(uintptr_t)v553 + 12));
      v554 = dword_20D84D0;
      v555 = dword_20D84D0 + v1317;
      v556 = *(uint32_t *)(dword_20D84D0 + v1317 + 8);
      v2680 = 0;
      v1783 = v556;
      v2681 = 0;
      v2682 = 0;
      v1502 = *(uint32_t *)(dword_20D84D0 + v1317 + 20);
      if ( v1502 > 0 )
      {
        v557 = 0;
        do
        {
          v558 = *(char **)(*(uint32_t *)(v554 + v1317 + 16) + 4 * v557++);
          g4_std::string::construct_from_cstr(&v2205, v558);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2205);
          sub_1938B70(&v2205);
          v554 = dword_20D84D0;
        }
        while ( v1502 != v557 );
        v555 = dword_20D84D0 + v1317;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1503 = *(uint32_t *)(v555 + 28);
      if ( v1503 > 0 )
      {
        v559 = 0;
        while ( 1 )
        {
          v560 = 4 * v559++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v554 + v1317 + 24) + v560));
          if ( v1503 == v559 )
            break;
          v554 = dword_20D84D0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2537, (const std::vector<int> *)&v2683);
      sub_8DE270(v2536, &v2680, v561);
      sub_193A2E0(&v2206, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2206, v1783, v2536, (glf::Self **)v2537);
      sub_1938B70(&v2206);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2536);
      if ( v2537[0] != nullptr )
        operator delete(v2537[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1654 = (std::vector<int> *)((char *)v1654 + 1);
      v553 = v1654;
    }
    while ( (std::vector<int> *)v1912 != v1654 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2207, "SpawnGroup_ParkedPlanesAirport");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2207);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2207);
  v1913 = dword_20D8300;
  if ( dword_20D8300 > 0 )
  {
    v1655 = nullptr;
    v562 = nullptr;
    do
    {
      v1318 = 32 * (uint32_t)(uintptr_t)v562;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D82F0 + 32 * (uint32_t)(uintptr_t)v562 + 12));
      v563 = dword_20D82F0;
      v564 = dword_20D82F0 + v1318;
      v565 = *(uint32_t *)(dword_20D82F0 + v1318 + 8);
      v2680 = 0;
      v1784 = v565;
      v2681 = 0;
      v2682 = 0;
      v1504 = *(uint32_t *)(dword_20D82F0 + v1318 + 20);
      if ( v1504 > 0 )
      {
        v566 = 0;
        do
        {
          v567 = *(char **)(*(uint32_t *)(v563 + v1318 + 16) + 4 * v566++);
          g4_std::string::construct_from_cstr(&v2208, v567);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2208);
          sub_1938B70(&v2208);
          v563 = dword_20D82F0;
        }
        while ( v1504 != v566 );
        v564 = dword_20D82F0 + v1318;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1505 = *(uint32_t *)(v564 + 28);
      if ( v1505 > 0 )
      {
        v568 = 0;
        while ( 1 )
        {
          v569 = 4 * v568++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v563 + v1318 + 24) + v569));
          if ( v1505 == v568 )
            break;
          v563 = dword_20D82F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2539, (const std::vector<int> *)&v2683);
      sub_8DE270(v2538, &v2680, v570);
      sub_193A2E0(&v2209, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2209, v1784, v2538, (glf::Self **)v2539);
      sub_1938B70(&v2209);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2538);
      if ( v2539[0] != nullptr )
        operator delete(v2539[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1655 = (std::vector<int> *)((char *)v1655 + 1);
      v562 = v1655;
    }
    while ( (std::vector<int> *)v1913 != v1655 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2210, "SpawnGroup_ParkedPlanesMilitary");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2210);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2210);
  v1914 = dword_20D82E0;
  if ( dword_20D82E0 > 0 )
  {
    v1656 = nullptr;
    v571 = nullptr;
    do
    {
      v1319 = 32 * (uint32_t)(uintptr_t)v571;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D82D0 + 32 * (uint32_t)(uintptr_t)v571 + 12));
      v572 = dword_20D82D0;
      v573 = dword_20D82D0 + v1319;
      v574 = *(uint32_t *)(dword_20D82D0 + v1319 + 8);
      v2680 = 0;
      v1785 = v574;
      v2681 = 0;
      v2682 = 0;
      v1506 = *(uint32_t *)(dword_20D82D0 + v1319 + 20);
      if ( v1506 > 0 )
      {
        v575 = 0;
        do
        {
          v576 = *(char **)(*(uint32_t *)(v572 + v1319 + 16) + 4 * v575++);
          g4_std::string::construct_from_cstr(&v2211, v576);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2211);
          sub_1938B70(&v2211);
          v572 = dword_20D82D0;
        }
        while ( v1506 != v575 );
        v573 = dword_20D82D0 + v1319;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1507 = *(uint32_t *)(v573 + 28);
      if ( v1507 > 0 )
      {
        v577 = 0;
        while ( 1 )
        {
          v578 = 4 * v577++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v572 + v1319 + 24) + v578));
          if ( v1507 == v577 )
            break;
          v572 = dword_20D82D0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2541, (const std::vector<int> *)&v2683);
      sub_8DE270(v2540, &v2680, v579);
      sub_193A2E0(&v2212, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2212, v1785, v2540, (glf::Self **)v2541);
      sub_1938B70(&v2212);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2540);
      if ( v2541[0] != nullptr )
        operator delete(v2541[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1656 = (std::vector<int> *)((char *)v1656 + 1);
      v571 = v1656;
    }
    while ( (std::vector<int> *)v1914 != v1656 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2213, "SpawnGroup_ParkedVehicleAirport");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2213);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2213);
  v1915 = dword_20D84C0;
  if ( dword_20D84C0 > 0 )
  {
    v1657 = nullptr;
    v580 = nullptr;
    do
    {
      v1320 = 32 * (uint32_t)(uintptr_t)v580;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D84B0 + 32 * (uint32_t)(uintptr_t)v580 + 12));
      v581 = dword_20D84B0;
      v582 = dword_20D84B0 + v1320;
      v583 = *(uint32_t *)(dword_20D84B0 + v1320 + 8);
      v2680 = 0;
      v1786 = v583;
      v2681 = 0;
      v2682 = 0;
      v1508 = *(uint32_t *)(dword_20D84B0 + v1320 + 20);
      if ( v1508 > 0 )
      {
        v584 = 0;
        do
        {
          v585 = *(char **)(*(uint32_t *)(v581 + v1320 + 16) + 4 * v584++);
          g4_std::string::construct_from_cstr(&v2214, v585);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2214);
          sub_1938B70(&v2214);
          v581 = dword_20D84B0;
        }
        while ( v1508 != v584 );
        v582 = dword_20D84B0 + v1320;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1509 = *(uint32_t *)(v582 + 28);
      if ( v1509 > 0 )
      {
        v586 = 0;
        while ( 1 )
        {
          v587 = 4 * v586++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v581 + v1320 + 24) + v587));
          if ( v1509 == v586 )
            break;
          v581 = dword_20D84B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2543, (const std::vector<int> *)&v2683);
      sub_8DE270(v2542, &v2680, v588);
      sub_193A2E0(&v2215, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2215, v1786, v2542, (glf::Self **)v2543);
      sub_1938B70(&v2215);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2542);
      if ( v2543[0] != nullptr )
        operator delete(v2543[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1657 = (std::vector<int> *)((char *)v1657 + 1);
      v580 = v1657;
    }
    while ( (std::vector<int> *)v1915 != v1657 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2216, "SpawnGroup_ParkedVehicleArmybase");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2216);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2216);
  v1916 = dword_20D84A0;
  if ( dword_20D84A0 > 0 )
  {
    v1658 = nullptr;
    v589 = nullptr;
    do
    {
      v1321 = 32 * (uint32_t)(uintptr_t)v589;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8490 + 32 * (uint32_t)(uintptr_t)v589 + 12));
      v590 = dword_20D8490;
      v591 = dword_20D8490 + v1321;
      v592 = *(uint32_t *)(dword_20D8490 + v1321 + 8);
      v2680 = 0;
      v1787 = v592;
      v2681 = 0;
      v2682 = 0;
      v1510 = *(uint32_t *)(dword_20D8490 + v1321 + 20);
      if ( v1510 > 0 )
      {
        v593 = 0;
        do
        {
          v594 = *(char **)(*(uint32_t *)(v590 + v1321 + 16) + 4 * v593++);
          g4_std::string::construct_from_cstr(&v2217, v594);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2217);
          sub_1938B70(&v2217);
          v590 = dword_20D8490;
        }
        while ( v1510 != v593 );
        v591 = dword_20D8490 + v1321;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1511 = *(uint32_t *)(v591 + 28);
      if ( v1511 > 0 )
      {
        v595 = 0;
        while ( 1 )
        {
          v596 = 4 * v595++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v590 + v1321 + 24) + v596));
          if ( v1511 == v595 )
            break;
          v590 = dword_20D8490;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2545, (const std::vector<int> *)&v2683);
      sub_8DE270(v2544, &v2680, v597);
      sub_193A2E0(&v2218, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2218, v1787, v2544, (glf::Self **)v2545);
      sub_1938B70(&v2218);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2544);
      if ( v2545[0] != nullptr )
        operator delete(v2545[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1658 = (std::vector<int> *)((char *)v1658 + 1);
      v589 = v1658;
    }
    while ( (std::vector<int> *)v1916 != v1658 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2219, "SpawnGroup_ParkedVehicleConstruction");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2219);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2219);
  v1917 = dword_20D8480;
  if ( dword_20D8480 > 0 )
  {
    v1659 = nullptr;
    v598 = nullptr;
    do
    {
      v1322 = 32 * (uint32_t)(uintptr_t)v598;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8470 + 32 * (uint32_t)(uintptr_t)v598 + 12));
      v599 = dword_20D8470;
      v600 = dword_20D8470 + v1322;
      v601 = *(uint32_t *)(dword_20D8470 + v1322 + 8);
      v2680 = 0;
      v1788 = v601;
      v2681 = 0;
      v2682 = 0;
      v1512 = *(uint32_t *)(dword_20D8470 + v1322 + 20);
      if ( v1512 > 0 )
      {
        v602 = 0;
        do
        {
          v603 = *(char **)(*(uint32_t *)(v599 + v1322 + 16) + 4 * v602++);
          g4_std::string::construct_from_cstr(&v2220, v603);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2220);
          sub_1938B70(&v2220);
          v599 = dword_20D8470;
        }
        while ( v1512 != v602 );
        v600 = dword_20D8470 + v1322;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1513 = *(uint32_t *)(v600 + 28);
      if ( v1513 > 0 )
      {
        v604 = 0;
        while ( 1 )
        {
          v605 = 4 * v604++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v599 + v1322 + 24) + v605));
          if ( v1513 == v604 )
            break;
          v599 = dword_20D8470;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2547, (const std::vector<int> *)&v2683);
      sub_8DE270(v2546, &v2680, v606);
      sub_193A2E0(&v2221, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2221, v1788, v2546, (glf::Self **)v2547);
      sub_1938B70(&v2221);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2546);
      if ( v2547[0] != nullptr )
        operator delete(v2547[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1659 = (std::vector<int> *)((char *)v1659 + 1);
      v598 = v1659;
    }
    while ( (std::vector<int> *)v1917 != v1659 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2222, "SpawnGroup_ParkedVehicleDesert");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2222);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2222);
  v1918 = dword_20D8460;
  if ( dword_20D8460 > 0 )
  {
    v1660 = nullptr;
    v607 = nullptr;
    do
    {
      v1323 = 32 * (uint32_t)(uintptr_t)v607;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8450 + 32 * (uint32_t)(uintptr_t)v607 + 12));
      v608 = dword_20D8450;
      v609 = dword_20D8450 + v1323;
      v610 = *(uint32_t *)(dword_20D8450 + v1323 + 8);
      v2680 = 0;
      v1789 = v610;
      v2681 = 0;
      v2682 = 0;
      v1514 = *(uint32_t *)(dword_20D8450 + v1323 + 20);
      if ( v1514 > 0 )
      {
        v611 = 0;
        do
        {
          v612 = *(char **)(*(uint32_t *)(v608 + v1323 + 16) + 4 * v611++);
          g4_std::string::construct_from_cstr(&v2223, v612);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2223);
          sub_1938B70(&v2223);
          v608 = dword_20D8450;
        }
        while ( v1514 != v611 );
        v609 = dword_20D8450 + v1323;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1515 = *(uint32_t *)(v609 + 28);
      if ( v1515 > 0 )
      {
        v613 = 0;
        while ( 1 )
        {
          v614 = 4 * v613++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v608 + v1323 + 24) + v614));
          if ( v1515 == v613 )
            break;
          v608 = dword_20D8450;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2549, (const std::vector<int> *)&v2683);
      sub_8DE270(v2548, &v2680, v615);
      sub_193A2E0(&v2224, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2224, v1789, v2548, (glf::Self **)v2549);
      sub_1938B70(&v2224);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2548);
      if ( v2549[0] != nullptr )
        operator delete(v2549[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1660 = (std::vector<int> *)((char *)v1660 + 1);
      v607 = v1660;
    }
    while ( (std::vector<int> *)v1918 != v1660 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2225, "SpawnGroup_ParkedVehicleDowntown");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2225);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2225);
  v1919 = dword_20D8440;
  if ( dword_20D8440 > 0 )
  {
    v1661 = nullptr;
    v616 = nullptr;
    do
    {
      v1324 = 32 * (uint32_t)(uintptr_t)v616;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8430 + 32 * (uint32_t)(uintptr_t)v616 + 12));
      v617 = dword_20D8430;
      v618 = dword_20D8430 + v1324;
      v619 = *(uint32_t *)(dword_20D8430 + v1324 + 8);
      v2680 = 0;
      v1790 = v619;
      v2681 = 0;
      v2682 = 0;
      v1516 = *(uint32_t *)(dword_20D8430 + v1324 + 20);
      if ( v1516 > 0 )
      {
        v620 = 0;
        do
        {
          v621 = *(char **)(*(uint32_t *)(v617 + v1324 + 16) + 4 * v620++);
          g4_std::string::construct_from_cstr(&v2226, v621);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2226);
          sub_1938B70(&v2226);
          v617 = dword_20D8430;
        }
        while ( v1516 != v620 );
        v618 = dword_20D8430 + v1324;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1517 = *(uint32_t *)(v618 + 28);
      if ( v1517 > 0 )
      {
        v622 = 0;
        while ( 1 )
        {
          v623 = 4 * v622++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v617 + v1324 + 24) + v623));
          if ( v1517 == v622 )
            break;
          v617 = dword_20D8430;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2551, (const std::vector<int> *)&v2683);
      sub_8DE270(v2550, &v2680, v624);
      sub_193A2E0(&v2227, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2227, v1790, v2550, (glf::Self **)v2551);
      sub_1938B70(&v2227);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2550);
      if ( v2551[0] != nullptr )
        operator delete(v2551[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1661 = (std::vector<int> *)((char *)v1661 + 1);
      v616 = v1661;
    }
    while ( (std::vector<int> *)v1919 != v1661 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2228, "SpawnGroup_ParkedVehicleGovernment");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2228);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2228);
  v1920 = dword_20D8420;
  if ( dword_20D8420 > 0 )
  {
    v1662 = nullptr;
    v625 = nullptr;
    do
    {
      v1325 = 32 * (uint32_t)(uintptr_t)v625;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8410 + 32 * (uint32_t)(uintptr_t)v625 + 12));
      v626 = dword_20D8410;
      v627 = dword_20D8410 + v1325;
      v628 = *(uint32_t *)(dword_20D8410 + v1325 + 8);
      v2680 = 0;
      v1791 = v628;
      v2681 = 0;
      v2682 = 0;
      v1518 = *(uint32_t *)(dword_20D8410 + v1325 + 20);
      if ( v1518 > 0 )
      {
        v629 = 0;
        do
        {
          v630 = *(char **)(*(uint32_t *)(v626 + v1325 + 16) + 4 * v629++);
          g4_std::string::construct_from_cstr(&v2229, v630);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2229);
          sub_1938B70(&v2229);
          v626 = dword_20D8410;
        }
        while ( v1518 != v629 );
        v627 = dword_20D8410 + v1325;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1519 = *(uint32_t *)(v627 + 28);
      if ( v1519 > 0 )
      {
        v631 = 0;
        while ( 1 )
        {
          v632 = 4 * v631++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v626 + v1325 + 24) + v632));
          if ( v1519 == v631 )
            break;
          v626 = dword_20D8410;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2553, (const std::vector<int> *)&v2683);
      sub_8DE270(v2552, &v2680, v633);
      sub_193A2E0(&v2230, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2230, v1791, v2552, (glf::Self **)v2553);
      sub_1938B70(&v2230);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2552);
      if ( v2553[0] != nullptr )
        operator delete(v2553[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1662 = (std::vector<int> *)((char *)v1662 + 1);
      v625 = v1662;
    }
    while ( (std::vector<int> *)v1920 != v1662 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2231, "SpawnGroup_ParkedVehicleIndustrial");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2231);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2231);
  v1921 = dword_20D8400;
  if ( dword_20D8400 > 0 )
  {
    v1663 = nullptr;
    v634 = nullptr;
    do
    {
      v1326 = 32 * (uint32_t)(uintptr_t)v634;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D83F0 + 32 * (uint32_t)(uintptr_t)v634 + 12));
      v635 = dword_20D83F0;
      v636 = dword_20D83F0 + v1326;
      v637 = *(uint32_t *)(dword_20D83F0 + v1326 + 8);
      v2680 = 0;
      v1792 = v637;
      v2681 = 0;
      v2682 = 0;
      v1520 = *(uint32_t *)(dword_20D83F0 + v1326 + 20);
      if ( v1520 > 0 )
      {
        v638 = 0;
        do
        {
          v639 = *(char **)(*(uint32_t *)(v635 + v1326 + 16) + 4 * v638++);
          g4_std::string::construct_from_cstr(&v2232, v639);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2232);
          sub_1938B70(&v2232);
          v635 = dword_20D83F0;
        }
        while ( v1520 != v638 );
        v636 = dword_20D83F0 + v1326;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1521 = *(uint32_t *)(v636 + 28);
      if ( v1521 > 0 )
      {
        v640 = 0;
        while ( 1 )
        {
          v641 = 4 * v640++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v635 + v1326 + 24) + v641));
          if ( v1521 == v640 )
            break;
          v635 = dword_20D83F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2555, (const std::vector<int> *)&v2683);
      sub_8DE270(v2554, &v2680, v642);
      sub_193A2E0(&v2233, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2233, v1792, v2554, (glf::Self **)v2555);
      sub_1938B70(&v2233);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2554);
      if ( v2555[0] != nullptr )
        operator delete(v2555[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1663 = (std::vector<int> *)((char *)v1663 + 1);
      v634 = v1663;
    }
    while ( (std::vector<int> *)v1921 != v1663 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2234, "SpawnGroup_ParkedVehicleMine");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2234);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2234);
  v1922 = dword_20D83E0;
  if ( dword_20D83E0 > 0 )
  {
    v1664 = nullptr;
    v643 = nullptr;
    do
    {
      v1327 = 32 * (uint32_t)(uintptr_t)v643;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D83D0 + 32 * (uint32_t)(uintptr_t)v643 + 12));
      v644 = dword_20D83D0;
      v645 = dword_20D83D0 + v1327;
      v646 = *(uint32_t *)(dword_20D83D0 + v1327 + 8);
      v2680 = 0;
      v1793 = v646;
      v2681 = 0;
      v2682 = 0;
      v1522 = *(uint32_t *)(dword_20D83D0 + v1327 + 20);
      if ( v1522 > 0 )
      {
        v647 = 0;
        do
        {
          v648 = *(char **)(*(uint32_t *)(v644 + v1327 + 16) + 4 * v647++);
          g4_std::string::construct_from_cstr(&v2235, v648);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2235);
          sub_1938B70(&v2235);
          v644 = dword_20D83D0;
        }
        while ( v1522 != v647 );
        v645 = dword_20D83D0 + v1327;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1523 = *(uint32_t *)(v645 + 28);
      if ( v1523 > 0 )
      {
        v649 = 0;
        while ( 1 )
        {
          v650 = 4 * v649++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v644 + v1327 + 24) + v650));
          if ( v1523 == v649 )
            break;
          v644 = dword_20D83D0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2557, (const std::vector<int> *)&v2683);
      sub_8DE270(v2556, &v2680, v651);
      sub_193A2E0(&v2236, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2236, v1793, v2556, (glf::Self **)v2557);
      sub_1938B70(&v2236);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2556);
      if ( v2557[0] != nullptr )
        operator delete(v2557[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1664 = (std::vector<int> *)((char *)v1664 + 1);
      v643 = v1664;
    }
    while ( (std::vector<int> *)v1922 != v1664 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2237, "SpawnGroup_ParkedVehiclePoorResidential");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2237);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2237);
  v1923 = dword_20D83C0;
  if ( dword_20D83C0 > 0 )
  {
    v1665 = nullptr;
    v652 = nullptr;
    do
    {
      v1328 = 32 * (uint32_t)(uintptr_t)v652;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D83B0 + 32 * (uint32_t)(uintptr_t)v652 + 12));
      v653 = dword_20D83B0;
      v654 = dword_20D83B0 + v1328;
      v655 = *(uint32_t *)(dword_20D83B0 + v1328 + 8);
      v2680 = 0;
      v1794 = v655;
      v2681 = 0;
      v2682 = 0;
      v1524 = *(uint32_t *)(dword_20D83B0 + v1328 + 20);
      if ( v1524 > 0 )
      {
        v656 = 0;
        do
        {
          v657 = *(char **)(*(uint32_t *)(v653 + v1328 + 16) + 4 * v656++);
          g4_std::string::construct_from_cstr(&v2238, v657);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2238);
          sub_1938B70(&v2238);
          v653 = dword_20D83B0;
        }
        while ( v1524 != v656 );
        v654 = dword_20D83B0 + v1328;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1525 = *(uint32_t *)(v654 + 28);
      if ( v1525 > 0 )
      {
        v658 = 0;
        while ( 1 )
        {
          v659 = 4 * v658++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v653 + v1328 + 24) + v659));
          if ( v1525 == v658 )
            break;
          v653 = dword_20D83B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2559, (const std::vector<int> *)&v2683);
      sub_8DE270(v2558, &v2680, v660);
      sub_193A2E0(&v2239, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2239, v1794, v2558, (glf::Self **)v2559);
      sub_1938B70(&v2239);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2558);
      if ( v2559[0] != nullptr )
        operator delete(v2559[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1665 = (std::vector<int> *)((char *)v1665 + 1);
      v652 = v1665;
    }
    while ( (std::vector<int> *)v1923 != v1665 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2240, "SpawnGroup_ParkedVehicleTrailer");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2240);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2240);
  v1924 = dword_20D8360;
  if ( dword_20D8360 > 0 )
  {
    v1666 = nullptr;
    v661 = nullptr;
    do
    {
      v1329 = 32 * (uint32_t)(uintptr_t)v661;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8350 + 32 * (uint32_t)(uintptr_t)v661 + 12));
      v662 = dword_20D8350;
      v663 = dword_20D8350 + v1329;
      v664 = *(uint32_t *)(dword_20D8350 + v1329 + 8);
      v2680 = 0;
      v1795 = v664;
      v2681 = 0;
      v2682 = 0;
      v1526 = *(uint32_t *)(dword_20D8350 + v1329 + 20);
      if ( v1526 > 0 )
      {
        v665 = 0;
        do
        {
          v666 = *(char **)(*(uint32_t *)(v662 + v1329 + 16) + 4 * v665++);
          g4_std::string::construct_from_cstr(&v2241, v666);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2241);
          sub_1938B70(&v2241);
          v662 = dword_20D8350;
        }
        while ( v1526 != v665 );
        v663 = dword_20D8350 + v1329;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1527 = *(uint32_t *)(v663 + 28);
      if ( v1527 > 0 )
      {
        v667 = 0;
        while ( 1 )
        {
          v668 = 4 * v667++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v662 + v1329 + 24) + v668));
          if ( v1527 == v667 )
            break;
          v662 = dword_20D8350;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2561, (const std::vector<int> *)&v2683);
      sub_8DE270(v2560, &v2680, v669);
      sub_193A2E0(&v2242, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2242, v1795, v2560, (glf::Self **)v2561);
      sub_1938B70(&v2242);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2560);
      if ( v2561[0] != nullptr )
        operator delete(v2561[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1666 = (std::vector<int> *)((char *)v1666 + 1);
      v661 = v1666;
    }
    while ( (std::vector<int> *)v1924 != v1666 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2243, "SpawnGroup_ParkedVehicleRichResidential");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2243);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2243);
  v1925 = dword_20D83A0;
  if ( dword_20D83A0 > 0 )
  {
    v1667 = nullptr;
    v670 = nullptr;
    do
    {
      v1330 = 32 * (uint32_t)(uintptr_t)v670;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8390 + 32 * (uint32_t)(uintptr_t)v670 + 12));
      v671 = dword_20D8390;
      v672 = dword_20D8390 + v1330;
      v673 = *(uint32_t *)(dword_20D8390 + v1330 + 8);
      v2680 = 0;
      v1796 = v673;
      v2681 = 0;
      v2682 = 0;
      v1528 = *(uint32_t *)(dword_20D8390 + v1330 + 20);
      if ( v1528 > 0 )
      {
        v674 = 0;
        do
        {
          v675 = *(char **)(*(uint32_t *)(v671 + v1330 + 16) + 4 * v674++);
          g4_std::string::construct_from_cstr(&v2244, v675);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2244);
          sub_1938B70(&v2244);
          v671 = dword_20D8390;
        }
        while ( v1528 != v674 );
        v672 = dword_20D8390 + v1330;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1529 = *(uint32_t *)(v672 + 28);
      if ( v1529 > 0 )
      {
        v676 = 0;
        while ( 1 )
        {
          v677 = 4 * v676++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v671 + v1330 + 24) + v677));
          if ( v1529 == v676 )
            break;
          v671 = dword_20D8390;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2563, (const std::vector<int> *)&v2683);
      sub_8DE270(v2562, &v2680, v678);
      sub_193A2E0(&v2245, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2245, v1796, v2562, (glf::Self **)v2563);
      sub_1938B70(&v2245);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2562);
      if ( v2563[0] != nullptr )
        operator delete(v2563[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1667 = (std::vector<int> *)((char *)v1667 + 1);
      v670 = v1667;
    }
    while ( (std::vector<int> *)v1925 != v1667 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2246, "SpawnGroup_ParkedVehicleStrip");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2246);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2246);
  v1926 = dword_20D8380;
  if ( dword_20D8380 > 0 )
  {
    v1668 = nullptr;
    v679 = nullptr;
    do
    {
      v1331 = 32 * (uint32_t)(uintptr_t)v679;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8370 + 32 * (uint32_t)(uintptr_t)v679 + 12));
      v680 = dword_20D8370;
      v681 = dword_20D8370 + v1331;
      v682 = *(uint32_t *)(dword_20D8370 + v1331 + 8);
      v2680 = 0;
      v1797 = v682;
      v2681 = 0;
      v2682 = 0;
      v1530 = *(uint32_t *)(dword_20D8370 + v1331 + 20);
      if ( v1530 > 0 )
      {
        v683 = 0;
        do
        {
          v684 = *(char **)(*(uint32_t *)(v680 + v1331 + 16) + 4 * v683++);
          g4_std::string::construct_from_cstr(&v2247, v684);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2247);
          sub_1938B70(&v2247);
          v680 = dword_20D8370;
        }
        while ( v1530 != v683 );
        v681 = dword_20D8370 + v1331;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1531 = *(uint32_t *)(v681 + 28);
      if ( v1531 > 0 )
      {
        v685 = 0;
        while ( 1 )
        {
          v686 = 4 * v685++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v680 + v1331 + 24) + v686));
          if ( v1531 == v685 )
            break;
          v680 = dword_20D8370;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2565, (const std::vector<int> *)&v2683);
      sub_8DE270(v2564, &v2680, v687);
      sub_193A2E0(&v2248, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2248, v1797, v2564, (glf::Self **)v2565);
      sub_1938B70(&v2248);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2564);
      if ( v2565[0] != nullptr )
        operator delete(v2565[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1668 = (std::vector<int> *)((char *)v1668 + 1);
      v679 = v1668;
    }
    while ( (std::vector<int> *)v1926 != v1668 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2249, "SpawnGroup_ParkedVehicleUberDam");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2249);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2249);
  v1927 = dword_20D8340;
  if ( dword_20D8340 > 0 )
  {
    v1669 = nullptr;
    v688 = nullptr;
    do
    {
      v1332 = 32 * (uint32_t)(uintptr_t)v688;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8330 + 32 * (uint32_t)(uintptr_t)v688 + 12));
      v689 = dword_20D8330;
      v690 = dword_20D8330 + v1332;
      v691 = *(uint32_t *)(dword_20D8330 + v1332 + 8);
      v2680 = 0;
      v1798 = v691;
      v2681 = 0;
      v2682 = 0;
      v1532 = *(uint32_t *)(dword_20D8330 + v1332 + 20);
      if ( v1532 > 0 )
      {
        v692 = 0;
        do
        {
          v693 = *(char **)(*(uint32_t *)(v689 + v1332 + 16) + 4 * v692++);
          g4_std::string::construct_from_cstr(&v2250, v693);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2250);
          sub_1938B70(&v2250);
          v689 = dword_20D8330;
        }
        while ( v1532 != v692 );
        v690 = dword_20D8330 + v1332;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1533 = *(uint32_t *)(v690 + 28);
      if ( v1533 > 0 )
      {
        v694 = 0;
        while ( 1 )
        {
          v695 = 4 * v694++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v689 + v1332 + 24) + v695));
          if ( v1533 == v694 )
            break;
          v689 = dword_20D8330;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2567, (const std::vector<int> *)&v2683);
      sub_8DE270(v2566, &v2680, v696);
      sub_193A2E0(&v2251, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2251, v1798, v2566, (glf::Self **)v2567);
      sub_1938B70(&v2251);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2566);
      if ( v2567[0] != nullptr )
        operator delete(v2567[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1669 = (std::vector<int> *)((char *)v1669 + 1);
      v688 = v1669;
    }
    while ( (std::vector<int> *)v1927 != v1669 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2252, "SpawnGroup_ParkedVehicleWater");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2252);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2252);
  v1928 = dword_20D8320;
  if ( dword_20D8320 > 0 )
  {
    v1670 = nullptr;
    v697 = nullptr;
    do
    {
      v1333 = 32 * (uint32_t)(uintptr_t)v697;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8310 + 32 * (uint32_t)(uintptr_t)v697 + 12));
      v698 = dword_20D8310;
      v699 = dword_20D8310 + v1333;
      v700 = *(uint32_t *)(dword_20D8310 + v1333 + 8);
      v2680 = 0;
      v1799 = v700;
      v2681 = 0;
      v2682 = 0;
      v1534 = *(uint32_t *)(dword_20D8310 + v1333 + 20);
      if ( v1534 > 0 )
      {
        v701 = 0;
        do
        {
          v702 = *(char **)(*(uint32_t *)(v698 + v1333 + 16) + 4 * v701++);
          g4_std::string::construct_from_cstr(&v2253, v702);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2253);
          sub_1938B70(&v2253);
          v698 = dword_20D8310;
        }
        while ( v1534 != v701 );
        v699 = dword_20D8310 + v1333;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1535 = *(uint32_t *)(v699 + 28);
      if ( v1535 > 0 )
      {
        v703 = 0;
        while ( 1 )
        {
          v704 = 4 * v703++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v698 + v1333 + 24) + v704));
          if ( v1535 == v703 )
            break;
          v698 = dword_20D8310;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2569, (const std::vector<int> *)&v2683);
      sub_8DE270(v2568, &v2680, v705);
      sub_193A2E0(&v2254, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2254, v1799, v2568, (glf::Self **)v2569);
      sub_1938B70(&v2254);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2568);
      if ( v2569[0] != nullptr )
        operator delete(v2569[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1670 = (std::vector<int> *)((char *)v1670 + 1);
      v697 = v1670;
    }
    while ( (std::vector<int> *)v1928 != v1670 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2255, "SpawnGroup_ParkedVehicleParis1");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2255);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2255);
  v1929 = dword_20D82C0;
  if ( dword_20D82C0 > 0 )
  {
    v1671 = nullptr;
    v706 = nullptr;
    do
    {
      v1334 = 32 * (uint32_t)(uintptr_t)v706;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D82B0 + 32 * (uint32_t)(uintptr_t)v706 + 12));
      v707 = dword_20D82B0;
      v708 = dword_20D82B0 + v1334;
      v709 = *(uint32_t *)(dword_20D82B0 + v1334 + 8);
      v2680 = 0;
      v1800 = v709;
      v2681 = 0;
      v2682 = 0;
      v1536 = *(uint32_t *)(dword_20D82B0 + v1334 + 20);
      if ( v1536 > 0 )
      {
        v710 = 0;
        do
        {
          v711 = *(char **)(*(uint32_t *)(v707 + v1334 + 16) + 4 * v710++);
          g4_std::string::construct_from_cstr(&v2256, v711);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2256);
          sub_1938B70(&v2256);
          v707 = dword_20D82B0;
        }
        while ( v1536 != v710 );
        v708 = dword_20D82B0 + v1334;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1537 = *(uint32_t *)(v708 + 28);
      if ( v1537 > 0 )
      {
        v712 = 0;
        while ( 1 )
        {
          v713 = 4 * v712++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v707 + v1334 + 24) + v713));
          if ( v1537 == v712 )
            break;
          v707 = dword_20D82B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2571, (const std::vector<int> *)&v2683);
      sub_8DE270(v2570, &v2680, v714);
      sub_193A2E0(&v2257, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2257, v1800, v2570, (glf::Self **)v2571);
      sub_1938B70(&v2257);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2570);
      if ( v2571[0] != nullptr )
        operator delete(v2571[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1671 = (std::vector<int> *)((char *)v1671 + 1);
      v706 = v1671;
    }
    while ( (std::vector<int> *)v1929 != v1671 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2258, "SpawnGroup_ParkedVehicleParis2");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2258);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2258);
  v1930 = dword_20D82A0;
  if ( dword_20D82A0 > 0 )
  {
    v1672 = nullptr;
    v715 = nullptr;
    do
    {
      v1335 = 32 * (uint32_t)(uintptr_t)v715;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8290 + 32 * (uint32_t)(uintptr_t)v715 + 12));
      v716 = dword_20D8290;
      v717 = dword_20D8290 + v1335;
      v718 = *(uint32_t *)(dword_20D8290 + v1335 + 8);
      v2680 = 0;
      v1801 = v718;
      v2681 = 0;
      v2682 = 0;
      v1538 = *(uint32_t *)(dword_20D8290 + v1335 + 20);
      if ( v1538 > 0 )
      {
        v719 = 0;
        do
        {
          v720 = *(char **)(*(uint32_t *)(v716 + v1335 + 16) + 4 * v719++);
          g4_std::string::construct_from_cstr(&v2259, v720);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2259);
          sub_1938B70(&v2259);
          v716 = dword_20D8290;
        }
        while ( v1538 != v719 );
        v717 = dword_20D8290 + v1335;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1539 = *(uint32_t *)(v717 + 28);
      if ( v1539 > 0 )
      {
        v721 = 0;
        while ( 1 )
        {
          v722 = 4 * v721++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v716 + v1335 + 24) + v722));
          if ( v1539 == v721 )
            break;
          v716 = dword_20D8290;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2573, (const std::vector<int> *)&v2683);
      sub_8DE270(v2572, &v2680, v723);
      sub_193A2E0(&v2260, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2260, v1801, v2572, (glf::Self **)v2573);
      sub_1938B70(&v2260);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2572);
      if ( v2573[0] != nullptr )
        operator delete(v2573[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1672 = (std::vector<int> *)((char *)v1672 + 1);
      v715 = v1672;
    }
    while ( (std::vector<int> *)v1930 != v1672 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2261, "SpawnGroup_ParkedVehicleParis3");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2261);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2261);
  v1931 = dword_20D8280;
  if ( dword_20D8280 > 0 )
  {
    v1673 = nullptr;
    v724 = nullptr;
    do
    {
      v1336 = 32 * (uint32_t)(uintptr_t)v724;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8270 + 32 * (uint32_t)(uintptr_t)v724 + 12));
      v725 = dword_20D8270;
      v726 = dword_20D8270 + v1336;
      v727 = *(uint32_t *)(dword_20D8270 + v1336 + 8);
      v2680 = 0;
      v1802 = v727;
      v2681 = 0;
      v2682 = 0;
      v1540 = *(uint32_t *)(dword_20D8270 + v1336 + 20);
      if ( v1540 > 0 )
      {
        v728 = 0;
        do
        {
          v729 = *(char **)(*(uint32_t *)(v725 + v1336 + 16) + 4 * v728++);
          g4_std::string::construct_from_cstr(&v2262, v729);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2262);
          sub_1938B70(&v2262);
          v725 = dword_20D8270;
        }
        while ( v1540 != v728 );
        v726 = dword_20D8270 + v1336;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1541 = *(uint32_t *)(v726 + 28);
      if ( v1541 > 0 )
      {
        v730 = 0;
        while ( 1 )
        {
          v731 = 4 * v730++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v725 + v1336 + 24) + v731));
          if ( v1541 == v730 )
            break;
          v725 = dword_20D8270;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2575, (const std::vector<int> *)&v2683);
      sub_8DE270(v2574, &v2680, v732);
      sub_193A2E0(&v2263, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2263, v1802, v2574, (glf::Self **)v2575);
      sub_1938B70(&v2263);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2574);
      if ( v2575[0] != nullptr )
        operator delete(v2575[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1673 = (std::vector<int> *)((char *)v1673 + 1);
      v724 = v1673;
    }
    while ( (std::vector<int> *)v1931 != v1673 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2264, "SpawnGroup_carng");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2264);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2264);
  v1932 = dword_20D8800;
  if ( dword_20D8800 > 0 )
  {
    v1674 = nullptr;
    v733 = nullptr;
    do
    {
      v1337 = 32 * (uint32_t)(uintptr_t)v733;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D87F0 + 32 * (uint32_t)(uintptr_t)v733 + 12));
      v734 = dword_20D87F0;
      v735 = dword_20D87F0 + v1337;
      v736 = *(uint32_t *)(dword_20D87F0 + v1337 + 8);
      v2680 = 0;
      v1803 = v736;
      v2681 = 0;
      v2682 = 0;
      v1542 = *(uint32_t *)(dword_20D87F0 + v1337 + 20);
      if ( v1542 > 0 )
      {
        v737 = 0;
        do
        {
          v738 = *(char **)(*(uint32_t *)(v734 + v1337 + 16) + 4 * v737++);
          g4_std::string::construct_from_cstr(&v2265, v738);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2265);
          sub_1938B70(&v2265);
          v734 = dword_20D87F0;
        }
        while ( v1542 != v737 );
        v735 = dword_20D87F0 + v1337;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1543 = *(uint32_t *)(v735 + 28);
      if ( v1543 > 0 )
      {
        v739 = 0;
        while ( 1 )
        {
          v740 = 4 * v739++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v734 + v1337 + 24) + v740));
          if ( v1543 == v739 )
            break;
          v734 = dword_20D87F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2577, (const std::vector<int> *)&v2683);
      sub_8DE270(v2576, &v2680, v741);
      sub_193A2E0(&v2266, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2266, v1803, v2576, (glf::Self **)v2577);
      sub_1938B70(&v2266);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2576);
      if ( v2577[0] != nullptr )
        operator delete(v2577[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1674 = (std::vector<int> *)((char *)v1674 + 1);
      v733 = v1674;
    }
    while ( (std::vector<int> *)v1932 != v1674 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2267, "SpawnGroup_Wanted_1");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2267);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2267);
  v1933 = dword_20D8260;
  if ( dword_20D8260 > 0 )
  {
    v1675 = nullptr;
    v742 = nullptr;
    do
    {
      v1338 = 32 * (uint32_t)(uintptr_t)v742;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8250 + 32 * (uint32_t)(uintptr_t)v742 + 12));
      v743 = dword_20D8250;
      v744 = dword_20D8250 + v1338;
      v745 = *(uint32_t *)(dword_20D8250 + v1338 + 8);
      v2680 = 0;
      v1804 = v745;
      v2681 = 0;
      v2682 = 0;
      v1544 = *(uint32_t *)(dword_20D8250 + v1338 + 20);
      if ( v1544 > 0 )
      {
        v746 = 0;
        do
        {
          v747 = *(char **)(*(uint32_t *)(v743 + v1338 + 16) + 4 * v746++);
          g4_std::string::construct_from_cstr(&v2268, v747);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2268);
          sub_1938B70(&v2268);
          v743 = dword_20D8250;
        }
        while ( v1544 != v746 );
        v744 = dword_20D8250 + v1338;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1545 = *(uint32_t *)(v744 + 28);
      if ( v1545 > 0 )
      {
        v748 = 0;
        while ( 1 )
        {
          v749 = 4 * v748++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v743 + v1338 + 24) + v749));
          if ( v1545 == v748 )
            break;
          v743 = dword_20D8250;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2579, (const std::vector<int> *)&v2683);
      sub_8DE270(v2578, &v2680, v750);
      sub_193A2E0(&v2269, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2269, v1804, v2578, (glf::Self **)v2579);
      sub_1938B70(&v2269);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2578);
      if ( v2579[0] != nullptr )
        operator delete(v2579[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1675 = (std::vector<int> *)((char *)v1675 + 1);
      v742 = v1675;
    }
    while ( (std::vector<int> *)v1933 != v1675 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2270, "SpawnGroup_Wanted_2");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2270);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2270);
  v1934 = dword_20D8240;
  if ( dword_20D8240 > 0 )
  {
    v1676 = nullptr;
    v751 = nullptr;
    do
    {
      v1339 = 32 * (uint32_t)(uintptr_t)v751;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8230 + 32 * (uint32_t)(uintptr_t)v751 + 12));
      v752 = dword_20D8230;
      v753 = dword_20D8230 + v1339;
      v754 = *(uint32_t *)(dword_20D8230 + v1339 + 8);
      v2680 = 0;
      v1805 = v754;
      v2681 = 0;
      v2682 = 0;
      v1546 = *(uint32_t *)(dword_20D8230 + v1339 + 20);
      if ( v1546 > 0 )
      {
        v755 = 0;
        do
        {
          v756 = *(char **)(*(uint32_t *)(v752 + v1339 + 16) + 4 * v755++);
          g4_std::string::construct_from_cstr(&v2271, v756);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2271);
          sub_1938B70(&v2271);
          v752 = dword_20D8230;
        }
        while ( v1546 != v755 );
        v753 = dword_20D8230 + v1339;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1547 = *(uint32_t *)(v753 + 28);
      if ( v1547 > 0 )
      {
        v757 = 0;
        while ( 1 )
        {
          v758 = 4 * v757++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v752 + v1339 + 24) + v758));
          if ( v1547 == v757 )
            break;
          v752 = dword_20D8230;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2581, (const std::vector<int> *)&v2683);
      sub_8DE270(v2580, &v2680, v759);
      sub_193A2E0(&v2272, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2272, v1805, v2580, (glf::Self **)v2581);
      sub_1938B70(&v2272);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2580);
      if ( v2581[0] != nullptr )
        operator delete(v2581[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1676 = (std::vector<int> *)((char *)v1676 + 1);
      v751 = v1676;
    }
    while ( (std::vector<int> *)v1934 != v1676 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2273, "SpawnGroup_Wanted_3");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2273);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2273);
  v1935 = dword_20D8220;
  if ( dword_20D8220 > 0 )
  {
    v1677 = nullptr;
    v760 = nullptr;
    do
    {
      v1340 = 32 * (uint32_t)(uintptr_t)v760;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8210 + 32 * (uint32_t)(uintptr_t)v760 + 12));
      v761 = dword_20D8210;
      v762 = dword_20D8210 + v1340;
      v763 = *(uint32_t *)(dword_20D8210 + v1340 + 8);
      v2680 = 0;
      v1806 = v763;
      v2681 = 0;
      v2682 = 0;
      v1548 = *(uint32_t *)(dword_20D8210 + v1340 + 20);
      if ( v1548 > 0 )
      {
        v764 = 0;
        do
        {
          v765 = *(char **)(*(uint32_t *)(v761 + v1340 + 16) + 4 * v764++);
          g4_std::string::construct_from_cstr(&v2274, v765);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2274);
          sub_1938B70(&v2274);
          v761 = dword_20D8210;
        }
        while ( v1548 != v764 );
        v762 = dword_20D8210 + v1340;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1549 = *(uint32_t *)(v762 + 28);
      if ( v1549 > 0 )
      {
        v766 = 0;
        while ( 1 )
        {
          v767 = 4 * v766++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v761 + v1340 + 24) + v767));
          if ( v1549 == v766 )
            break;
          v761 = dword_20D8210;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2583, (const std::vector<int> *)&v2683);
      sub_8DE270(v2582, &v2680, v768);
      sub_193A2E0(&v2275, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2275, v1806, v2582, (glf::Self **)v2583);
      sub_1938B70(&v2275);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2582);
      if ( v2583[0] != nullptr )
        operator delete(v2583[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1677 = (std::vector<int> *)((char *)v1677 + 1);
      v760 = v1677;
    }
    while ( (std::vector<int> *)v1935 != v1677 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2276, "SpawnGroup_Wanted_4");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2276);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2276);
  v1936 = dword_20D8200;
  if ( dword_20D8200 > 0 )
  {
    v1678 = nullptr;
    v769 = nullptr;
    do
    {
      v1341 = 32 * (uint32_t)(uintptr_t)v769;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D81F0 + 32 * (uint32_t)(uintptr_t)v769 + 12));
      v770 = dword_20D81F0;
      v771 = dword_20D81F0 + v1341;
      v772 = *(uint32_t *)(dword_20D81F0 + v1341 + 8);
      v2680 = 0;
      v1807 = v772;
      v2681 = 0;
      v2682 = 0;
      v1550 = *(uint32_t *)(dword_20D81F0 + v1341 + 20);
      if ( v1550 > 0 )
      {
        v773 = 0;
        do
        {
          v774 = *(char **)(*(uint32_t *)(v770 + v1341 + 16) + 4 * v773++);
          g4_std::string::construct_from_cstr(&v2277, v774);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2277);
          sub_1938B70(&v2277);
          v770 = dword_20D81F0;
        }
        while ( v1550 != v773 );
        v771 = dword_20D81F0 + v1341;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1551 = *(uint32_t *)(v771 + 28);
      if ( v1551 > 0 )
      {
        v775 = 0;
        while ( 1 )
        {
          v776 = 4 * v775++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v770 + v1341 + 24) + v776));
          if ( v1551 == v775 )
            break;
          v770 = dword_20D81F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2585, (const std::vector<int> *)&v2683);
      sub_8DE270(v2584, &v2680, v777);
      sub_193A2E0(&v2278, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2278, v1807, v2584, (glf::Self **)v2585);
      sub_1938B70(&v2278);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2584);
      if ( v2585[0] != nullptr )
        operator delete(v2585[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1678 = (std::vector<int> *)((char *)v1678 + 1);
      v769 = v1678;
    }
    while ( (std::vector<int> *)v1936 != v1678 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2279, "SpawnGroup_Wanted_5");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2279);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2279);
  v1937 = dword_20D81E0;
  if ( dword_20D81E0 > 0 )
  {
    v1679 = nullptr;
    v778 = nullptr;
    do
    {
      v1342 = 32 * (uint32_t)(uintptr_t)v778;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D81D0 + 32 * (uint32_t)(uintptr_t)v778 + 12));
      v779 = dword_20D81D0;
      v780 = dword_20D81D0 + v1342;
      v781 = *(uint32_t *)(dword_20D81D0 + v1342 + 8);
      v2680 = 0;
      v1808 = v781;
      v2681 = 0;
      v2682 = 0;
      v1552 = *(uint32_t *)(dword_20D81D0 + v1342 + 20);
      if ( v1552 > 0 )
      {
        v782 = 0;
        do
        {
          v783 = *(char **)(*(uint32_t *)(v779 + v1342 + 16) + 4 * v782++);
          g4_std::string::construct_from_cstr(&v2280, v783);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2280);
          sub_1938B70(&v2280);
          v779 = dword_20D81D0;
        }
        while ( v1552 != v782 );
        v780 = dword_20D81D0 + v1342;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1553 = *(uint32_t *)(v780 + 28);
      if ( v1553 > 0 )
      {
        v784 = 0;
        while ( 1 )
        {
          v785 = 4 * v784++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v779 + v1342 + 24) + v785));
          if ( v1553 == v784 )
            break;
          v779 = dword_20D81D0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2587, (const std::vector<int> *)&v2683);
      sub_8DE270(v2586, &v2680, v786);
      sub_193A2E0(&v2281, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2281, v1808, v2586, (glf::Self **)v2587);
      sub_1938B70(&v2281);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2586);
      if ( v2587[0] != nullptr )
        operator delete(v2587[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1679 = (std::vector<int> *)((char *)v1679 + 1);
      v778 = v1679;
    }
    while ( (std::vector<int> *)v1937 != v1679 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2282, "SpawnGroup_Vehicle_Wanted_1");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2282);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2282);
  v1938 = dword_20D81C0;
  if ( dword_20D81C0 > 0 )
  {
    v1680 = nullptr;
    v787 = nullptr;
    do
    {
      v1343 = 32 * (uint32_t)(uintptr_t)v787;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D81B0 + 32 * (uint32_t)(uintptr_t)v787 + 12));
      v788 = dword_20D81B0;
      v789 = dword_20D81B0 + v1343;
      v790 = *(uint32_t *)(dword_20D81B0 + v1343 + 8);
      v2680 = 0;
      v1809 = v790;
      v2681 = 0;
      v2682 = 0;
      v1554 = *(uint32_t *)(dword_20D81B0 + v1343 + 20);
      if ( v1554 > 0 )
      {
        v791 = 0;
        do
        {
          v792 = *(char **)(*(uint32_t *)(v788 + v1343 + 16) + 4 * v791++);
          g4_std::string::construct_from_cstr(&v2283, v792);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2283);
          sub_1938B70(&v2283);
          v788 = dword_20D81B0;
        }
        while ( v1554 != v791 );
        v789 = dword_20D81B0 + v1343;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1555 = *(uint32_t *)(v789 + 28);
      if ( v1555 > 0 )
      {
        v793 = 0;
        while ( 1 )
        {
          v794 = 4 * v793++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v788 + v1343 + 24) + v794));
          if ( v1555 == v793 )
            break;
          v788 = dword_20D81B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2589, (const std::vector<int> *)&v2683);
      sub_8DE270(v2588, &v2680, v795);
      sub_193A2E0(&v2284, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2284, v1809, v2588, (glf::Self **)v2589);
      sub_1938B70(&v2284);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2588);
      if ( v2589[0] != nullptr )
        operator delete(v2589[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1680 = (std::vector<int> *)((char *)v1680 + 1);
      v787 = v1680;
    }
    while ( (std::vector<int> *)v1938 != v1680 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2285, "SpawnGroup_Vehicle_Wanted_2");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2285);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2285);
  v1939 = dword_20D81A0;
  if ( dword_20D81A0 > 0 )
  {
    v1681 = nullptr;
    v796 = nullptr;
    do
    {
      v1344 = 32 * (uint32_t)(uintptr_t)v796;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8190 + 32 * (uint32_t)(uintptr_t)v796 + 12));
      v797 = dword_20D8190;
      v798 = dword_20D8190 + v1344;
      v799 = *(uint32_t *)(dword_20D8190 + v1344 + 8);
      v2680 = 0;
      v1810 = v799;
      v2681 = 0;
      v2682 = 0;
      v1556 = *(uint32_t *)(dword_20D8190 + v1344 + 20);
      if ( v1556 > 0 )
      {
        v800 = 0;
        do
        {
          v801 = *(char **)(*(uint32_t *)(v797 + v1344 + 16) + 4 * v800++);
          g4_std::string::construct_from_cstr(&v2286, v801);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2286);
          sub_1938B70(&v2286);
          v797 = dword_20D8190;
        }
        while ( v1556 != v800 );
        v798 = dword_20D8190 + v1344;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1557 = *(uint32_t *)(v798 + 28);
      if ( v1557 > 0 )
      {
        v802 = 0;
        while ( 1 )
        {
          v803 = 4 * v802++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v797 + v1344 + 24) + v803));
          if ( v1557 == v802 )
            break;
          v797 = dword_20D8190;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2591, (const std::vector<int> *)&v2683);
      sub_8DE270(v2590, &v2680, v804);
      sub_193A2E0(&v2287, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2287, v1810, v2590, (glf::Self **)v2591);
      sub_1938B70(&v2287);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2590);
      if ( v2591[0] != nullptr )
        operator delete(v2591[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1681 = (std::vector<int> *)((char *)v1681 + 1);
      v796 = v1681;
    }
    while ( (std::vector<int> *)v1939 != v1681 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2288, "SpawnGroup_Vehicle_Wanted_3");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2288);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2288);
  v1940 = dword_20D8180;
  if ( dword_20D8180 > 0 )
  {
    v1682 = nullptr;
    v805 = nullptr;
    do
    {
      v1345 = 32 * (uint32_t)(uintptr_t)v805;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8170 + 32 * (uint32_t)(uintptr_t)v805 + 12));
      v806 = dword_20D8170;
      v807 = dword_20D8170 + v1345;
      v808 = *(uint32_t *)(dword_20D8170 + v1345 + 8);
      v2680 = 0;
      v1811 = v808;
      v2681 = 0;
      v2682 = 0;
      v1558 = *(uint32_t *)(dword_20D8170 + v1345 + 20);
      if ( v1558 > 0 )
      {
        v809 = 0;
        do
        {
          v810 = *(char **)(*(uint32_t *)(v806 + v1345 + 16) + 4 * v809++);
          g4_std::string::construct_from_cstr(&v2289, v810);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2289);
          sub_1938B70(&v2289);
          v806 = dword_20D8170;
        }
        while ( v1558 != v809 );
        v807 = dword_20D8170 + v1345;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1559 = *(uint32_t *)(v807 + 28);
      if ( v1559 > 0 )
      {
        v811 = 0;
        while ( 1 )
        {
          v812 = 4 * v811++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v806 + v1345 + 24) + v812));
          if ( v1559 == v811 )
            break;
          v806 = dword_20D8170;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2593, (const std::vector<int> *)&v2683);
      sub_8DE270(v2592, &v2680, v813);
      sub_193A2E0(&v2290, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2290, v1811, v2592, (glf::Self **)v2593);
      sub_1938B70(&v2290);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2592);
      if ( v2593[0] != nullptr )
        operator delete(v2593[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1682 = (std::vector<int> *)((char *)v1682 + 1);
      v805 = v1682;
    }
    while ( (std::vector<int> *)v1940 != v1682 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2291, "SpawnGroup_Vehicle_Wanted_4");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2291);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2291);
  v1941 = dword_20D8160;
  if ( dword_20D8160 > 0 )
  {
    v1683 = nullptr;
    v814 = nullptr;
    do
    {
      v1346 = 32 * (uint32_t)(uintptr_t)v814;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8150 + 32 * (uint32_t)(uintptr_t)v814 + 12));
      v815 = dword_20D8150;
      v816 = dword_20D8150 + v1346;
      v817 = *(uint32_t *)(dword_20D8150 + v1346 + 8);
      v2680 = 0;
      v1812 = v817;
      v2681 = 0;
      v2682 = 0;
      v1560 = *(uint32_t *)(dword_20D8150 + v1346 + 20);
      if ( v1560 > 0 )
      {
        v818 = 0;
        do
        {
          v819 = *(char **)(*(uint32_t *)(v815 + v1346 + 16) + 4 * v818++);
          g4_std::string::construct_from_cstr(&v2292, v819);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2292);
          sub_1938B70(&v2292);
          v815 = dword_20D8150;
        }
        while ( v1560 != v818 );
        v816 = dword_20D8150 + v1346;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1561 = *(uint32_t *)(v816 + 28);
      if ( v1561 > 0 )
      {
        v820 = 0;
        while ( 1 )
        {
          v821 = 4 * v820++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v815 + v1346 + 24) + v821));
          if ( v1561 == v820 )
            break;
          v815 = dword_20D8150;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2595, (const std::vector<int> *)&v2683);
      sub_8DE270(v2594, &v2680, v822);
      sub_193A2E0(&v2293, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2293, v1812, v2594, (glf::Self **)v2595);
      sub_1938B70(&v2293);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2594);
      if ( v2595[0] != nullptr )
        operator delete(v2595[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1683 = (std::vector<int> *)((char *)v1683 + 1);
      v814 = v1683;
    }
    while ( (std::vector<int> *)v1941 != v1683 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2294, "SpawnGroup_Vehicle_Wanted_5");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2294);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2294);
  v1942 = dword_20D8140;
  if ( dword_20D8140 > 0 )
  {
    v1684 = nullptr;
    v823 = nullptr;
    do
    {
      v1347 = 32 * (uint32_t)(uintptr_t)v823;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8130 + 32 * (uint32_t)(uintptr_t)v823 + 12));
      v824 = dword_20D8130;
      v825 = dword_20D8130 + v1347;
      v826 = *(uint32_t *)(dword_20D8130 + v1347 + 8);
      v2680 = 0;
      v1813 = v826;
      v2681 = 0;
      v2682 = 0;
      v1562 = *(uint32_t *)(dword_20D8130 + v1347 + 20);
      if ( v1562 > 0 )
      {
        v827 = 0;
        do
        {
          v828 = *(char **)(*(uint32_t *)(v824 + v1347 + 16) + 4 * v827++);
          g4_std::string::construct_from_cstr(&v2295, v828);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2295);
          sub_1938B70(&v2295);
          v824 = dword_20D8130;
        }
        while ( v1562 != v827 );
        v825 = dword_20D8130 + v1347;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1563 = *(uint32_t *)(v825 + 28);
      if ( v1563 > 0 )
      {
        v829 = 0;
        while ( 1 )
        {
          v830 = 4 * v829++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v824 + v1347 + 24) + v830));
          if ( v1563 == v829 )
            break;
          v824 = dword_20D8130;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2597, (const std::vector<int> *)&v2683);
      sub_8DE270(v2596, &v2680, v831);
      sub_193A2E0(&v2296, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2296, v1813, v2596, (glf::Self **)v2597);
      sub_1938B70(&v2296);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2596);
      if ( v2597[0] != nullptr )
        operator delete(v2597[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1684 = (std::vector<int> *)((char *)v1684 + 1);
      v823 = v1684;
    }
    while ( (std::vector<int> *)v1942 != v1684 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2297, "SpawnGroup_Survi_Vehicle");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2297);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2297);
  v1943 = dword_20D88C0;
  if ( dword_20D88C0 > 0 )
  {
    v1685 = nullptr;
    v832 = nullptr;
    do
    {
      v1348 = 32 * (uint32_t)(uintptr_t)v832;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D88B0 + 32 * (uint32_t)(uintptr_t)v832 + 12));
      v833 = dword_20D88B0;
      v834 = dword_20D88B0 + v1348;
      v835 = *(uint32_t *)(dword_20D88B0 + v1348 + 8);
      v2680 = 0;
      v1814 = v835;
      v2681 = 0;
      v2682 = 0;
      v1564 = *(uint32_t *)(dword_20D88B0 + v1348 + 20);
      if ( v1564 > 0 )
      {
        v836 = 0;
        do
        {
          v837 = *(char **)(*(uint32_t *)(v833 + v1348 + 16) + 4 * v836++);
          g4_std::string::construct_from_cstr(&v2298, v837);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2298);
          sub_1938B70(&v2298);
          v833 = dword_20D88B0;
        }
        while ( v1564 != v836 );
        v834 = dword_20D88B0 + v1348;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1565 = *(uint32_t *)(v834 + 28);
      if ( v1565 > 0 )
      {
        v838 = 0;
        while ( 1 )
        {
          v839 = 4 * v838++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v833 + v1348 + 24) + v839));
          if ( v1565 == v838 )
            break;
          v833 = dword_20D88B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2599, (const std::vector<int> *)&v2683);
      sub_8DE270(v2598, &v2680, v840);
      sub_193A2E0(&v2299, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2299, v1814, v2598, (glf::Self **)v2599);
      sub_1938B70(&v2299);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2598);
      if ( v2599[0] != nullptr )
        operator delete(v2599[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1685 = (std::vector<int> *)((char *)v1685 + 1);
      v832 = v1685;
    }
    while ( (std::vector<int> *)v1943 != v1685 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2300, "SpawnGroup_MafiaChapter1");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2300);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2300);
  v1944 = dword_20D8A00;
  if ( dword_20D8A00 > 0 )
  {
    v1686 = nullptr;
    v841 = nullptr;
    do
    {
      v1349 = 32 * (uint32_t)(uintptr_t)v841;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D89F0 + 32 * (uint32_t)(uintptr_t)v841 + 12));
      v842 = dword_20D89F0;
      v843 = dword_20D89F0 + v1349;
      v844 = *(uint32_t *)(dword_20D89F0 + v1349 + 8);
      v2680 = 0;
      v1815 = v844;
      v2681 = 0;
      v2682 = 0;
      v1566 = *(uint32_t *)(dword_20D89F0 + v1349 + 20);
      if ( v1566 > 0 )
      {
        v845 = 0;
        do
        {
          v846 = *(char **)(*(uint32_t *)(v842 + v1349 + 16) + 4 * v845++);
          g4_std::string::construct_from_cstr(&v2301, v846);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2301);
          sub_1938B70(&v2301);
          v842 = dword_20D89F0;
        }
        while ( v1566 != v845 );
        v843 = dword_20D89F0 + v1349;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1567 = *(uint32_t *)(v843 + 28);
      if ( v1567 > 0 )
      {
        v847 = 0;
        while ( 1 )
        {
          v848 = 4 * v847++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v842 + v1349 + 24) + v848));
          if ( v1567 == v847 )
            break;
          v842 = dword_20D89F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2601, (const std::vector<int> *)&v2683);
      sub_8DE270(v2600, &v2680, v849);
      sub_193A2E0(&v2302, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2302, v1815, v2600, (glf::Self **)v2601);
      sub_1938B70(&v2302);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2600);
      if ( v2601[0] != nullptr )
        operator delete(v2601[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1686 = (std::vector<int> *)((char *)v1686 + 1);
      v841 = v1686;
    }
    while ( (std::vector<int> *)v1944 != v1686 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2303, "SpawnGroup_MafiaChapter1_NoLoot");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2303);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2303);
  v1945 = dword_20D89E0;
  if ( dword_20D89E0 > 0 )
  {
    v1687 = nullptr;
    v850 = nullptr;
    do
    {
      v1350 = 32 * (uint32_t)(uintptr_t)v850;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D89D0 + 32 * (uint32_t)(uintptr_t)v850 + 12));
      v851 = dword_20D89D0;
      v852 = dword_20D89D0 + v1350;
      v853 = *(uint32_t *)(dword_20D89D0 + v1350 + 8);
      v2680 = 0;
      v1816 = v853;
      v2681 = 0;
      v2682 = 0;
      v1568 = *(uint32_t *)(dword_20D89D0 + v1350 + 20);
      if ( v1568 > 0 )
      {
        v854 = 0;
        do
        {
          v855 = *(char **)(*(uint32_t *)(v851 + v1350 + 16) + 4 * v854++);
          g4_std::string::construct_from_cstr(&v2304, v855);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2304);
          sub_1938B70(&v2304);
          v851 = dword_20D89D0;
        }
        while ( v1568 != v854 );
        v852 = dword_20D89D0 + v1350;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1569 = *(uint32_t *)(v852 + 28);
      if ( v1569 > 0 )
      {
        v856 = 0;
        while ( 1 )
        {
          v857 = 4 * v856++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v851 + v1350 + 24) + v857));
          if ( v1569 == v856 )
            break;
          v851 = dword_20D89D0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2603, (const std::vector<int> *)&v2683);
      sub_8DE270(v2602, &v2680, v858);
      sub_193A2E0(&v2305, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2305, v1816, v2602, (glf::Self **)v2603);
      sub_1938B70(&v2305);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2602);
      if ( v2603[0] != nullptr )
        operator delete(v2603[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1687 = (std::vector<int> *)((char *)v1687 + 1);
      v850 = v1687;
    }
    while ( (std::vector<int> *)v1945 != v1687 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2306, "SpawnGroup_WorkerChapter1");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2306);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2306);
  v1946 = dword_20D89C0;
  if ( dword_20D89C0 > 0 )
  {
    v1688 = nullptr;
    v859 = nullptr;
    do
    {
      v1351 = 32 * (uint32_t)(uintptr_t)v859;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D89B0 + 32 * (uint32_t)(uintptr_t)v859 + 12));
      v860 = dword_20D89B0;
      v861 = dword_20D89B0 + v1351;
      v862 = *(uint32_t *)(dword_20D89B0 + v1351 + 8);
      v2680 = 0;
      v1817 = v862;
      v2681 = 0;
      v2682 = 0;
      v1570 = *(uint32_t *)(dword_20D89B0 + v1351 + 20);
      if ( v1570 > 0 )
      {
        v863 = 0;
        do
        {
          v864 = *(char **)(*(uint32_t *)(v860 + v1351 + 16) + 4 * v863++);
          g4_std::string::construct_from_cstr(&v2307, v864);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2307);
          sub_1938B70(&v2307);
          v860 = dword_20D89B0;
        }
        while ( v1570 != v863 );
        v861 = dword_20D89B0 + v1351;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1571 = *(uint32_t *)(v861 + 28);
      if ( v1571 > 0 )
      {
        v865 = 0;
        while ( 1 )
        {
          v866 = 4 * v865++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v860 + v1351 + 24) + v866));
          if ( v1571 == v865 )
            break;
          v860 = dword_20D89B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2605, (const std::vector<int> *)&v2683);
      sub_8DE270(v2604, &v2680, v867);
      sub_193A2E0(&v2308, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2308, v1817, v2604, (glf::Self **)v2605);
      sub_1938B70(&v2308);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2604);
      if ( v2605[0] != nullptr )
        operator delete(v2605[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1688 = (std::vector<int> *)((char *)v1688 + 1);
      v859 = v1688;
    }
    while ( (std::vector<int> *)v1946 != v1688 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2309, "SpawnGroup_GenericBadGuys");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2309);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2309);
  v1947 = dword_20D89A0;
  if ( dword_20D89A0 > 0 )
  {
    v1689 = nullptr;
    v868 = nullptr;
    do
    {
      v1352 = 32 * (uint32_t)(uintptr_t)v868;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8990 + 32 * (uint32_t)(uintptr_t)v868 + 12));
      v869 = dword_20D8990;
      v870 = dword_20D8990 + v1352;
      v871 = *(uint32_t *)(dword_20D8990 + v1352 + 8);
      v2680 = 0;
      v1818 = v871;
      v2681 = 0;
      v2682 = 0;
      v1572 = *(uint32_t *)(dword_20D8990 + v1352 + 20);
      if ( v1572 > 0 )
      {
        v872 = 0;
        do
        {
          v873 = *(char **)(*(uint32_t *)(v869 + v1352 + 16) + 4 * v872++);
          g4_std::string::construct_from_cstr(&v2310, v873);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2310);
          sub_1938B70(&v2310);
          v869 = dword_20D8990;
        }
        while ( v1572 != v872 );
        v870 = dword_20D8990 + v1352;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1573 = *(uint32_t *)(v870 + 28);
      if ( v1573 > 0 )
      {
        v874 = 0;
        while ( 1 )
        {
          v875 = 4 * v874++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v869 + v1352 + 24) + v875));
          if ( v1573 == v874 )
            break;
          v869 = dword_20D8990;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2607, (const std::vector<int> *)&v2683);
      sub_8DE270(v2606, &v2680, v876);
      sub_193A2E0(&v2311, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2311, v1818, v2606, (glf::Self **)v2607);
      sub_1938B70(&v2311);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2606);
      if ( v2607[0] != nullptr )
        operator delete(v2607[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1689 = (std::vector<int> *)((char *)v1689 + 1);
      v868 = v1689;
    }
    while ( (std::vector<int> *)v1947 != v1689 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2312, "SpawnGroup_ThugsWithGuns");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2312);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2312);
  v1948 = dword_20D8980;
  if ( dword_20D8980 > 0 )
  {
    v1690 = nullptr;
    v877 = nullptr;
    do
    {
      v1353 = 32 * (uint32_t)(uintptr_t)v877;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8970 + 32 * (uint32_t)(uintptr_t)v877 + 12));
      v878 = dword_20D8970;
      v879 = dword_20D8970 + v1353;
      v880 = *(uint32_t *)(dword_20D8970 + v1353 + 8);
      v2680 = 0;
      v1819 = v880;
      v2681 = 0;
      v2682 = 0;
      v1574 = *(uint32_t *)(dword_20D8970 + v1353 + 20);
      if ( v1574 > 0 )
      {
        v881 = 0;
        do
        {
          v882 = *(char **)(*(uint32_t *)(v878 + v1353 + 16) + 4 * v881++);
          g4_std::string::construct_from_cstr(&v2313, v882);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2313);
          sub_1938B70(&v2313);
          v878 = dword_20D8970;
        }
        while ( v1574 != v881 );
        v879 = dword_20D8970 + v1353;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1575 = *(uint32_t *)(v879 + 28);
      if ( v1575 > 0 )
      {
        v883 = 0;
        while ( 1 )
        {
          v884 = 4 * v883++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v878 + v1353 + 24) + v884));
          if ( v1575 == v883 )
            break;
          v878 = dword_20D8970;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2609, (const std::vector<int> *)&v2683);
      sub_8DE270(v2608, &v2680, v885);
      sub_193A2E0(&v2314, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2314, v1819, v2608, (glf::Self **)v2609);
      sub_1938B70(&v2314);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2608);
      if ( v2609[0] != nullptr )
        operator delete(v2609[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1690 = (std::vector<int> *)((char *)v1690 + 1);
      v877 = v1690;
    }
    while ( (std::vector<int> *)v1948 != v1690 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2315, "SpawnGroup_Latinos");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2315);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2315);
  v1949 = dword_20D8960;
  if ( dword_20D8960 > 0 )
  {
    v1691 = nullptr;
    v886 = nullptr;
    do
    {
      v1354 = 32 * (uint32_t)(uintptr_t)v886;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8950 + 32 * (uint32_t)(uintptr_t)v886 + 12));
      v887 = dword_20D8950;
      v888 = dword_20D8950 + v1354;
      v889 = *(uint32_t *)(dword_20D8950 + v1354 + 8);
      v2680 = 0;
      v1820 = v889;
      v2681 = 0;
      v2682 = 0;
      v1576 = *(uint32_t *)(dword_20D8950 + v1354 + 20);
      if ( v1576 > 0 )
      {
        v890 = 0;
        do
        {
          v891 = *(char **)(*(uint32_t *)(v887 + v1354 + 16) + 4 * v890++);
          g4_std::string::construct_from_cstr(&v2316, v891);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2316);
          sub_1938B70(&v2316);
          v887 = dword_20D8950;
        }
        while ( v1576 != v890 );
        v888 = dword_20D8950 + v1354;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1577 = *(uint32_t *)(v888 + 28);
      if ( v1577 > 0 )
      {
        v892 = 0;
        while ( 1 )
        {
          v893 = 4 * v892++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v887 + v1354 + 24) + v893));
          if ( v1577 == v892 )
            break;
          v887 = dword_20D8950;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2611, (const std::vector<int> *)&v2683);
      sub_8DE270(v2610, &v2680, v894);
      sub_193A2E0(&v2317, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2317, v1820, v2610, (glf::Self **)v2611);
      sub_1938B70(&v2317);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2610);
      if ( v2611[0] != nullptr )
        operator delete(v2611[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1691 = (std::vector<int> *)((char *)v1691 + 1);
      v886 = v1691;
    }
    while ( (std::vector<int> *)v1949 != v1691 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2318, "SpawnGroup_SecurityGuards");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2318);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2318);
  v1950 = dword_20D8E60;
  if ( dword_20D8E60 > 0 )
  {
    v1692 = nullptr;
    v895 = nullptr;
    do
    {
      v1355 = 32 * (uint32_t)(uintptr_t)v895;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8E50 + 32 * (uint32_t)(uintptr_t)v895 + 12));
      v896 = dword_20D8E50;
      v897 = dword_20D8E50 + v1355;
      v898 = *(uint32_t *)(dword_20D8E50 + v1355 + 8);
      v2680 = 0;
      v1821 = v898;
      v2681 = 0;
      v2682 = 0;
      v1578 = *(uint32_t *)(dword_20D8E50 + v1355 + 20);
      if ( v1578 > 0 )
      {
        v899 = 0;
        do
        {
          v900 = *(char **)(*(uint32_t *)(v896 + v1355 + 16) + 4 * v899++);
          g4_std::string::construct_from_cstr(&v2319, v900);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2319);
          sub_1938B70(&v2319);
          v896 = dword_20D8E50;
        }
        while ( v1578 != v899 );
        v897 = dword_20D8E50 + v1355;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1579 = *(uint32_t *)(v897 + 28);
      if ( v1579 > 0 )
      {
        v901 = 0;
        while ( 1 )
        {
          v902 = 4 * v901++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v896 + v1355 + 24) + v902));
          if ( v1579 == v901 )
            break;
          v896 = dword_20D8E50;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2613, (const std::vector<int> *)&v2683);
      sub_8DE270(v2612, &v2680, v903);
      sub_193A2E0(&v2320, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2320, v1821, v2612, (glf::Self **)v2613);
      sub_1938B70(&v2320);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2612);
      if ( v2613[0] != nullptr )
        operator delete(v2613[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1692 = (std::vector<int> *)((char *)v1692 + 1);
      v895 = v1692;
    }
    while ( (std::vector<int> *)v1950 != v1692 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2321, "SpawnGroup_Cop");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2321);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2321);
  v1951 = dword_20D8920;
  if ( dword_20D8920 > 0 )
  {
    v1693 = nullptr;
    v904 = nullptr;
    do
    {
      v1356 = 32 * (uint32_t)(uintptr_t)v904;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8910 + 32 * (uint32_t)(uintptr_t)v904 + 12));
      v905 = dword_20D8910;
      v906 = dword_20D8910 + v1356;
      v907 = *(uint32_t *)(dword_20D8910 + v1356 + 8);
      v2680 = 0;
      v1822 = v907;
      v2681 = 0;
      v2682 = 0;
      v1580 = *(uint32_t *)(dword_20D8910 + v1356 + 20);
      if ( v1580 > 0 )
      {
        v908 = 0;
        do
        {
          v909 = *(char **)(*(uint32_t *)(v905 + v1356 + 16) + 4 * v908++);
          g4_std::string::construct_from_cstr(&v2322, v909);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2322);
          sub_1938B70(&v2322);
          v905 = dword_20D8910;
        }
        while ( v1580 != v908 );
        v906 = dword_20D8910 + v1356;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1581 = *(uint32_t *)(v906 + 28);
      if ( v1581 > 0 )
      {
        v910 = 0;
        while ( 1 )
        {
          v911 = 4 * v910++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v905 + v1356 + 24) + v911));
          if ( v1581 == v910 )
            break;
          v905 = dword_20D8910;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2615, (const std::vector<int> *)&v2683);
      sub_8DE270(v2614, &v2680, v912);
      sub_193A2E0(&v2323, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2323, v1822, v2614, (glf::Self **)v2615);
      sub_1938B70(&v2323);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2614);
      if ( v2615[0] != nullptr )
        operator delete(v2615[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1693 = (std::vector<int> *)((char *)v1693 + 1);
      v904 = v1693;
    }
    while ( (std::vector<int> *)v1951 != v1693 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2324, "SpawnGroup_Military");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2324);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2324);
  v1952 = dword_20D8900;
  if ( dword_20D8900 > 0 )
  {
    v1694 = nullptr;
    v913 = nullptr;
    do
    {
      v1357 = 32 * (uint32_t)(uintptr_t)v913;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D88F0 + 32 * (uint32_t)(uintptr_t)v913 + 12));
      v914 = dword_20D88F0;
      v915 = dword_20D88F0 + v1357;
      v916 = *(uint32_t *)(dword_20D88F0 + v1357 + 8);
      v2680 = 0;
      v1823 = v916;
      v2681 = 0;
      v2682 = 0;
      v1582 = *(uint32_t *)(dword_20D88F0 + v1357 + 20);
      if ( v1582 > 0 )
      {
        v917 = 0;
        do
        {
          v918 = *(char **)(*(uint32_t *)(v914 + v1357 + 16) + 4 * v917++);
          g4_std::string::construct_from_cstr(&v2325, v918);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2325);
          sub_1938B70(&v2325);
          v914 = dword_20D88F0;
        }
        while ( v1582 != v917 );
        v915 = dword_20D88F0 + v1357;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1583 = *(uint32_t *)(v915 + 28);
      if ( v1583 > 0 )
      {
        v919 = 0;
        while ( 1 )
        {
          v920 = 4 * v919++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v914 + v1357 + 24) + v920));
          if ( v1583 == v919 )
            break;
          v914 = dword_20D88F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2617, (const std::vector<int> *)&v2683);
      sub_8DE270(v2616, &v2680, v921);
      sub_193A2E0(&v2326, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2326, v1823, v2616, (glf::Self **)v2617);
      sub_1938B70(&v2326);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2616);
      if ( v2617[0] != nullptr )
        operator delete(v2617[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1694 = (std::vector<int> *)((char *)v1694 + 1);
      v913 = v1694;
    }
    while ( (std::vector<int> *)v1952 != v1694 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2327, "SpawnGroup_Carnage01");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2327);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2327);
  v1953 = dword_20D87E0;
  if ( dword_20D87E0 > 0 )
  {
    v1695 = nullptr;
    v922 = nullptr;
    do
    {
      v1358 = 32 * (uint32_t)(uintptr_t)v922;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D87D0 + 32 * (uint32_t)(uintptr_t)v922 + 12));
      v923 = dword_20D87D0;
      v924 = dword_20D87D0 + v1358;
      v925 = *(uint32_t *)(dword_20D87D0 + v1358 + 8);
      v2680 = 0;
      v1824 = v925;
      v2681 = 0;
      v2682 = 0;
      v1584 = *(uint32_t *)(dword_20D87D0 + v1358 + 20);
      if ( v1584 > 0 )
      {
        v926 = 0;
        do
        {
          v927 = *(char **)(*(uint32_t *)(v923 + v1358 + 16) + 4 * v926++);
          g4_std::string::construct_from_cstr(&v2328, v927);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2328);
          sub_1938B70(&v2328);
          v923 = dword_20D87D0;
        }
        while ( v1584 != v926 );
        v924 = dword_20D87D0 + v1358;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1585 = *(uint32_t *)(v924 + 28);
      if ( v1585 > 0 )
      {
        v928 = 0;
        while ( 1 )
        {
          v929 = 4 * v928++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v923 + v1358 + 24) + v929));
          if ( v1585 == v928 )
            break;
          v923 = dword_20D87D0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2619, (const std::vector<int> *)&v2683);
      sub_8DE270(v2618, &v2680, v930);
      sub_193A2E0(&v2329, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2329, v1824, v2618, (glf::Self **)v2619);
      sub_1938B70(&v2329);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2618);
      if ( v2619[0] != nullptr )
        operator delete(v2619[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1695 = (std::vector<int> *)((char *)v1695 + 1);
      v922 = v1695;
    }
    while ( (std::vector<int> *)v1953 != v1695 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2330, "SpawnGroup_CarnageVehicles01");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2330);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2330);
  v1954 = dword_20D87C0;
  if ( dword_20D87C0 > 0 )
  {
    v1696 = nullptr;
    v931 = nullptr;
    do
    {
      v1359 = 32 * (uint32_t)(uintptr_t)v931;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D87B0 + 32 * (uint32_t)(uintptr_t)v931 + 12));
      v932 = dword_20D87B0;
      v933 = dword_20D87B0 + v1359;
      v934 = *(uint32_t *)(dword_20D87B0 + v1359 + 8);
      v2680 = 0;
      v1825 = v934;
      v2681 = 0;
      v2682 = 0;
      v1586 = *(uint32_t *)(dword_20D87B0 + v1359 + 20);
      if ( v1586 > 0 )
      {
        v935 = 0;
        do
        {
          v936 = *(char **)(*(uint32_t *)(v932 + v1359 + 16) + 4 * v935++);
          g4_std::string::construct_from_cstr(&v2331, v936);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2331);
          sub_1938B70(&v2331);
          v932 = dword_20D87B0;
        }
        while ( v1586 != v935 );
        v933 = dword_20D87B0 + v1359;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1587 = *(uint32_t *)(v933 + 28);
      if ( v1587 > 0 )
      {
        v937 = 0;
        while ( 1 )
        {
          v938 = 4 * v937++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v932 + v1359 + 24) + v938));
          if ( v1587 == v937 )
            break;
          v932 = dword_20D87B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2621, (const std::vector<int> *)&v2683);
      sub_8DE270(v2620, &v2680, v939);
      sub_193A2E0(&v2332, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2332, v1825, v2620, (glf::Self **)v2621);
      sub_1938B70(&v2332);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2620);
      if ( v2621[0] != nullptr )
        operator delete(v2621[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1696 = (std::vector<int> *)((char *)v1696 + 1);
      v931 = v1696;
    }
    while ( (std::vector<int> *)v1954 != v1696 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2333, "SpawnGroup_Carnage02");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2333);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2333);
  v1955 = dword_20D87A0;
  if ( dword_20D87A0 > 0 )
  {
    v1697 = nullptr;
    v940 = nullptr;
    do
    {
      v1360 = 32 * (uint32_t)(uintptr_t)v940;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8790 + 32 * (uint32_t)(uintptr_t)v940 + 12));
      v941 = dword_20D8790;
      v942 = dword_20D8790 + v1360;
      v943 = *(uint32_t *)(dword_20D8790 + v1360 + 8);
      v2680 = 0;
      v1826 = v943;
      v2681 = 0;
      v2682 = 0;
      v1588 = *(uint32_t *)(dword_20D8790 + v1360 + 20);
      if ( v1588 > 0 )
      {
        v944 = 0;
        do
        {
          v945 = *(char **)(*(uint32_t *)(v941 + v1360 + 16) + 4 * v944++);
          g4_std::string::construct_from_cstr(&v2334, v945);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2334);
          sub_1938B70(&v2334);
          v941 = dword_20D8790;
        }
        while ( v1588 != v944 );
        v942 = dword_20D8790 + v1360;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1589 = *(uint32_t *)(v942 + 28);
      if ( v1589 > 0 )
      {
        v946 = 0;
        while ( 1 )
        {
          v947 = 4 * v946++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v941 + v1360 + 24) + v947));
          if ( v1589 == v946 )
            break;
          v941 = dword_20D8790;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2623, (const std::vector<int> *)&v2683);
      sub_8DE270(v2622, &v2680, v948);
      sub_193A2E0(&v2335, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2335, v1826, v2622, (glf::Self **)v2623);
      sub_1938B70(&v2335);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2622);
      if ( v2623[0] != nullptr )
        operator delete(v2623[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1697 = (std::vector<int> *)((char *)v1697 + 1);
      v940 = v1697;
    }
    while ( (std::vector<int> *)v1955 != v1697 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2336, "SpawnGroup_CarnageVehicles02");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2336);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2336);
  v1956 = dword_20D8780;
  if ( dword_20D8780 > 0 )
  {
    v1698 = nullptr;
    v949 = nullptr;
    do
    {
      v1361 = 32 * (uint32_t)(uintptr_t)v949;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8770 + 32 * (uint32_t)(uintptr_t)v949 + 12));
      v950 = dword_20D8770;
      v951 = dword_20D8770 + v1361;
      v952 = *(uint32_t *)(dword_20D8770 + v1361 + 8);
      v2680 = 0;
      v1827 = v952;
      v2681 = 0;
      v2682 = 0;
      v1590 = *(uint32_t *)(dword_20D8770 + v1361 + 20);
      if ( v1590 > 0 )
      {
        v953 = 0;
        do
        {
          v954 = *(char **)(*(uint32_t *)(v950 + v1361 + 16) + 4 * v953++);
          g4_std::string::construct_from_cstr(&v2337, v954);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2337);
          sub_1938B70(&v2337);
          v950 = dword_20D8770;
        }
        while ( v1590 != v953 );
        v951 = dword_20D8770 + v1361;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1591 = *(uint32_t *)(v951 + 28);
      if ( v1591 > 0 )
      {
        v955 = 0;
        while ( 1 )
        {
          v956 = 4 * v955++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v950 + v1361 + 24) + v956));
          if ( v1591 == v955 )
            break;
          v950 = dword_20D8770;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2625, (const std::vector<int> *)&v2683);
      sub_8DE270(v2624, &v2680, v957);
      sub_193A2E0(&v2338, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2338, v1827, v2624, (glf::Self **)v2625);
      sub_1938B70(&v2338);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2624);
      if ( v2625[0] != nullptr )
        operator delete(v2625[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1698 = (std::vector<int> *)((char *)v1698 + 1);
      v949 = v1698;
    }
    while ( (std::vector<int> *)v1956 != v1698 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2339, "SpawnGroup_Carnage03");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2339);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2339);
  v1957 = dword_20D8760;
  if ( dword_20D8760 > 0 )
  {
    v1699 = nullptr;
    v958 = nullptr;
    do
    {
      v1362 = 32 * (uint32_t)(uintptr_t)v958;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8750 + 32 * (uint32_t)(uintptr_t)v958 + 12));
      v959 = dword_20D8750;
      v960 = dword_20D8750 + v1362;
      v961 = *(uint32_t *)(dword_20D8750 + v1362 + 8);
      v2680 = 0;
      v1828 = v961;
      v2681 = 0;
      v2682 = 0;
      v1592 = *(uint32_t *)(dword_20D8750 + v1362 + 20);
      if ( v1592 > 0 )
      {
        v962 = 0;
        do
        {
          v963 = *(char **)(*(uint32_t *)(v959 + v1362 + 16) + 4 * v962++);
          g4_std::string::construct_from_cstr(&v2340, v963);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2340);
          sub_1938B70(&v2340);
          v959 = dword_20D8750;
        }
        while ( v1592 != v962 );
        v960 = dword_20D8750 + v1362;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1593 = *(uint32_t *)(v960 + 28);
      if ( v1593 > 0 )
      {
        v964 = 0;
        while ( 1 )
        {
          v965 = 4 * v964++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v959 + v1362 + 24) + v965));
          if ( v1593 == v964 )
            break;
          v959 = dword_20D8750;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2627, (const std::vector<int> *)&v2683);
      sub_8DE270(v2626, &v2680, v966);
      sub_193A2E0(&v2341, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2341, v1828, v2626, (glf::Self **)v2627);
      sub_1938B70(&v2341);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2626);
      if ( v2627[0] != nullptr )
        operator delete(v2627[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1699 = (std::vector<int> *)((char *)v1699 + 1);
      v958 = v1699;
    }
    while ( (std::vector<int> *)v1957 != v1699 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2342, "SpawnGroup_CarnageVehicles03");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2342);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2342);
  v1958 = dword_20D8740;
  if ( dword_20D8740 > 0 )
  {
    v1700 = nullptr;
    v967 = nullptr;
    do
    {
      v1363 = 32 * (uint32_t)(uintptr_t)v967;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8730 + 32 * (uint32_t)(uintptr_t)v967 + 12));
      v968 = dword_20D8730;
      v969 = dword_20D8730 + v1363;
      v970 = *(uint32_t *)(dword_20D8730 + v1363 + 8);
      v2680 = 0;
      v1829 = v970;
      v2681 = 0;
      v2682 = 0;
      v1594 = *(uint32_t *)(dword_20D8730 + v1363 + 20);
      if ( v1594 > 0 )
      {
        v971 = 0;
        do
        {
          v972 = *(char **)(*(uint32_t *)(v968 + v1363 + 16) + 4 * v971++);
          g4_std::string::construct_from_cstr(&v2343, v972);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2343);
          sub_1938B70(&v2343);
          v968 = dword_20D8730;
        }
        while ( v1594 != v971 );
        v969 = dword_20D8730 + v1363;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1595 = *(uint32_t *)(v969 + 28);
      if ( v1595 > 0 )
      {
        v973 = 0;
        while ( 1 )
        {
          v974 = 4 * v973++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v968 + v1363 + 24) + v974));
          if ( v1595 == v973 )
            break;
          v968 = dword_20D8730;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2629, (const std::vector<int> *)&v2683);
      sub_8DE270(v2628, &v2680, v975);
      sub_193A2E0(&v2344, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2344, v1829, v2628, (glf::Self **)v2629);
      sub_1938B70(&v2344);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2628);
      if ( v2629[0] != nullptr )
        operator delete(v2629[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1700 = (std::vector<int> *)((char *)v1700 + 1);
      v967 = v1700;
    }
    while ( (std::vector<int> *)v1958 != v1700 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2345, "SpawnGroup_Carnage04");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2345);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2345);
  v1959 = dword_20D8720;
  if ( dword_20D8720 > 0 )
  {
    v1701 = nullptr;
    v976 = nullptr;
    do
    {
      v1364 = 32 * (uint32_t)(uintptr_t)v976;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8710 + 32 * (uint32_t)(uintptr_t)v976 + 12));
      v977 = dword_20D8710;
      v978 = dword_20D8710 + v1364;
      v979 = *(uint32_t *)(dword_20D8710 + v1364 + 8);
      v2680 = 0;
      v1830 = v979;
      v2681 = 0;
      v2682 = 0;
      v1596 = *(uint32_t *)(dword_20D8710 + v1364 + 20);
      if ( v1596 > 0 )
      {
        v980 = 0;
        do
        {
          v981 = *(char **)(*(uint32_t *)(v977 + v1364 + 16) + 4 * v980++);
          g4_std::string::construct_from_cstr(&v2346, v981);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2346);
          sub_1938B70(&v2346);
          v977 = dword_20D8710;
        }
        while ( v1596 != v980 );
        v978 = dword_20D8710 + v1364;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1597 = *(uint32_t *)(v978 + 28);
      if ( v1597 > 0 )
      {
        v982 = 0;
        while ( 1 )
        {
          v983 = 4 * v982++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v977 + v1364 + 24) + v983));
          if ( v1597 == v982 )
            break;
          v977 = dword_20D8710;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2631, (const std::vector<int> *)&v2683);
      sub_8DE270(v2630, &v2680, v984);
      sub_193A2E0(&v2347, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2347, v1830, v2630, (glf::Self **)v2631);
      sub_1938B70(&v2347);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2630);
      if ( v2631[0] != nullptr )
        operator delete(v2631[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1701 = (std::vector<int> *)((char *)v1701 + 1);
      v976 = v1701;
    }
    while ( (std::vector<int> *)v1959 != v1701 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2348, "SpawnGroup_CarnageVehicles04");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2348);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2348);
  v1960 = dword_20D8700;
  if ( dword_20D8700 > 0 )
  {
    v1702 = nullptr;
    v985 = nullptr;
    do
    {
      v1365 = 32 * (uint32_t)(uintptr_t)v985;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D86F0 + 32 * (uint32_t)(uintptr_t)v985 + 12));
      v986 = dword_20D86F0;
      v987 = dword_20D86F0 + v1365;
      v988 = *(uint32_t *)(dword_20D86F0 + v1365 + 8);
      v2680 = 0;
      v1831 = v988;
      v2681 = 0;
      v2682 = 0;
      v1598 = *(uint32_t *)(dword_20D86F0 + v1365 + 20);
      if ( v1598 > 0 )
      {
        v989 = 0;
        do
        {
          v990 = *(char **)(*(uint32_t *)(v986 + v1365 + 16) + 4 * v989++);
          g4_std::string::construct_from_cstr(&v2349, v990);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2349);
          sub_1938B70(&v2349);
          v986 = dword_20D86F0;
        }
        while ( v1598 != v989 );
        v987 = dword_20D86F0 + v1365;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1599 = *(uint32_t *)(v987 + 28);
      if ( v1599 > 0 )
      {
        v991 = 0;
        while ( 1 )
        {
          v992 = 4 * v991++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v986 + v1365 + 24) + v992));
          if ( v1599 == v991 )
            break;
          v986 = dword_20D86F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2633, (const std::vector<int> *)&v2683);
      sub_8DE270(v2632, &v2680, v993);
      sub_193A2E0(&v2350, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2350, v1831, v2632, (glf::Self **)v2633);
      sub_1938B70(&v2350);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2632);
      if ( v2633[0] != nullptr )
        operator delete(v2633[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1702 = (std::vector<int> *)((char *)v1702 + 1);
      v985 = v1702;
    }
    while ( (std::vector<int> *)v1960 != v1702 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2351, "SpawnGroup_Biker_mission");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2351);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2351);
  v1961 = dword_20D8120;
  if ( dword_20D8120 > 0 )
  {
    v1703 = nullptr;
    v994 = nullptr;
    do
    {
      v1366 = 32 * (uint32_t)(uintptr_t)v994;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8110 + 32 * (uint32_t)(uintptr_t)v994 + 12));
      v995 = dword_20D8110;
      v996 = dword_20D8110 + v1366;
      v997 = *(uint32_t *)(dword_20D8110 + v1366 + 8);
      v2680 = 0;
      v1832 = v997;
      v2681 = 0;
      v2682 = 0;
      v1600 = *(uint32_t *)(dword_20D8110 + v1366 + 20);
      if ( v1600 > 0 )
      {
        v998 = 0;
        do
        {
          v999 = *(char **)(*(uint32_t *)(v995 + v1366 + 16) + 4 * v998++);
          g4_std::string::construct_from_cstr(&v2352, v999);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2352);
          sub_1938B70(&v2352);
          v995 = dword_20D8110;
        }
        while ( v1600 != v998 );
        v996 = dword_20D8110 + v1366;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1601 = *(uint32_t *)(v996 + 28);
      if ( v1601 > 0 )
      {
        v1000 = 0;
        while ( 1 )
        {
          v1001 = 4 * v1000++;
          g4_std::vector_int_id_9b8903::push_back((std::vector<int> *)&v2683, (const int *)(*(uint32_t *)(v995 + v1366 + 24) + v1001));
          if ( v1601 == v1000 )
            break;
          v995 = dword_20D8110;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2635, (const std::vector<int> *)&v2683);
      sub_8DE270(v2634, &v2680, v1002);
      sub_193A2E0(&v2353, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2353, v1832, v2634, (glf::Self **)v2635);
      sub_1938B70(&v2353);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2634);
      if ( v2635[0] != nullptr )
        operator delete(v2635[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1703 = (std::vector<int> *)((char *)v1703 + 1);
      v994 = v1703;
    }
    while ( (std::vector<int> *)v1961 != v1703 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2354, "SpawnGroup_Goon_mission");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2354);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2354);
  v1962 = dword_20D8100;
  if ( dword_20D8100 > 0 )
  {
    v1704 = nullptr;
    v1003 = nullptr;
    do
    {
      v1367 = 32 * (uint32_t)(uintptr_t)v1003;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D80F0 + 32 * (uint32_t)(uintptr_t)v1003 + 12));
      v1004 = dword_20D80F0;
      v1005 = dword_20D80F0 + v1367;
      v1006 = *(uint32_t *)(dword_20D80F0 + v1367 + 8);
      v2680 = 0;
      v1833 = v1006;
      v2681 = 0;
      v2682 = 0;
      v1602 = *(uint32_t *)(dword_20D80F0 + v1367 + 20);
      if ( v1602 > 0 )
      {
        v1007 = 0;
        do
        {
          v1008 = *(char **)(*(uint32_t *)(v1004 + v1367 + 16) + 4 * v1007++);
          g4_std::string::construct_from_cstr(&v2355, v1008);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2355);
          sub_1938B70(&v2355);
          v1004 = dword_20D80F0;
        }
        while ( v1602 != v1007 );
        v1005 = dword_20D80F0 + v1367;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1603 = *(uint32_t *)(v1005 + 28);
      if ( v1603 > 0 )
      {
        v1009 = 0;
        while ( 1 )
        {
          v1010 = 4 * v1009++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1004 + v1367 + 24) + v1010));
          if ( v1603 == v1009 )
            break;
          v1004 = dword_20D80F0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2637, (const std::vector<int> *)&v2683);
      sub_8DE270(v2636, &v2680, v1011);
      sub_193A2E0(&v2356, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2356, v1833, v2636, (glf::Self **)v2637);
      sub_1938B70(&v2356);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2636);
      if ( v2637[0] != nullptr )
        operator delete(v2637[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1704 = (std::vector<int> *)((char *)v1704 + 1);
      v1003 = v1704;
    }
    while ( (std::vector<int> *)v1962 != v1704 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2357, "SpawnGroup_Survi_Mafia_WaveOne");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2357);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2357);
  v1963 = dword_20D88A0;
  if ( dword_20D88A0 > 0 )
  {
    v1705 = nullptr;
    v1012 = nullptr;
    do
    {
      v1368 = 32 * (uint32_t)(uintptr_t)v1012;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8890 + 32 * (uint32_t)(uintptr_t)v1012 + 12));
      v1013 = dword_20D8890;
      v1014 = dword_20D8890 + v1368;
      v1015 = *(uint32_t *)(dword_20D8890 + v1368 + 8);
      v2680 = 0;
      v1834 = v1015;
      v2681 = 0;
      v2682 = 0;
      v1604 = *(uint32_t *)(dword_20D8890 + v1368 + 20);
      if ( v1604 > 0 )
      {
        v1016 = 0;
        do
        {
          v1017 = *(char **)(*(uint32_t *)(v1013 + v1368 + 16) + 4 * v1016++);
          g4_std::string::construct_from_cstr(&v2358, v1017);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2358);
          sub_1938B70(&v2358);
          v1013 = dword_20D8890;
        }
        while ( v1604 != v1016 );
        v1014 = dword_20D8890 + v1368;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1605 = *(uint32_t *)(v1014 + 28);
      if ( v1605 > 0 )
      {
        v1018 = 0;
        while ( 1 )
        {
          v1019 = 4 * v1018++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1013 + v1368 + 24) + v1019));
          if ( v1605 == v1018 )
            break;
          v1013 = dword_20D8890;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2639, (const std::vector<int> *)&v2683);
      sub_8DE270(v2638, &v2680, v1020);
      sub_193A2E0(&v2359, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2359, v1834, v2638, (glf::Self **)v2639);
      sub_1938B70(&v2359);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2638);
      if ( v2639[0] != nullptr )
        operator delete(v2639[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1705 = (std::vector<int> *)((char *)v1705 + 1);
      v1012 = v1705;
    }
    while ( (std::vector<int> *)v1963 != v1705 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2360, "SpawnGroup_Survi_Mafia_WaveTwo");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2360);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2360);
  v1964 = dword_20D8880;
  if ( dword_20D8880 > 0 )
  {
    v1706 = nullptr;
    v1021 = nullptr;
    do
    {
      v1369 = 32 * (uint32_t)(uintptr_t)v1021;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8870 + 32 * (uint32_t)(uintptr_t)v1021 + 12));
      v1022 = dword_20D8870;
      v1023 = dword_20D8870 + v1369;
      v1024 = *(uint32_t *)(dword_20D8870 + v1369 + 8);
      v2680 = 0;
      v1835 = v1024;
      v2681 = 0;
      v2682 = 0;
      v1606 = *(uint32_t *)(dword_20D8870 + v1369 + 20);
      if ( v1606 > 0 )
      {
        v1025 = 0;
        do
        {
          v1026 = *(char **)(*(uint32_t *)(v1022 + v1369 + 16) + 4 * v1025++);
          g4_std::string::construct_from_cstr(&v2361, v1026);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2361);
          sub_1938B70(&v2361);
          v1022 = dword_20D8870;
        }
        while ( v1606 != v1025 );
        v1023 = dword_20D8870 + v1369;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1607 = *(uint32_t *)(v1023 + 28);
      if ( v1607 > 0 )
      {
        v1027 = 0;
        while ( 1 )
        {
          v1028 = 4 * v1027++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1022 + v1369 + 24) + v1028));
          if ( v1607 == v1027 )
            break;
          v1022 = dword_20D8870;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2641, (const std::vector<int> *)&v2683);
      sub_8DE270(v2640, &v2680, v1029);
      sub_193A2E0(&v2362, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2362, v1835, v2640, (glf::Self **)v2641);
      sub_1938B70(&v2362);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2640);
      if ( v2641[0] != nullptr )
        operator delete(v2641[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1706 = (std::vector<int> *)((char *)v1706 + 1);
      v1021 = v1706;
    }
    while ( (std::vector<int> *)v1964 != v1706 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2363, "SpawnGroup_Survi_Mafia_WaveThree");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2363);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2363);
  v1965 = dword_20D8860;
  if ( dword_20D8860 > 0 )
  {
    v1707 = nullptr;
    v1030 = nullptr;
    do
    {
      v1370 = 32 * (uint32_t)(uintptr_t)v1030;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8850 + 32 * (uint32_t)(uintptr_t)v1030 + 12));
      v1031 = dword_20D8850;
      v1032 = dword_20D8850 + v1370;
      v1033 = *(uint32_t *)(dword_20D8850 + v1370 + 8);
      v2680 = 0;
      v1836 = v1033;
      v2681 = 0;
      v2682 = 0;
      v1608 = *(uint32_t *)(dword_20D8850 + v1370 + 20);
      if ( v1608 > 0 )
      {
        v1034 = 0;
        do
        {
          v1035 = *(char **)(*(uint32_t *)(v1031 + v1370 + 16) + 4 * v1034++);
          g4_std::string::construct_from_cstr(&v2364, v1035);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2364);
          sub_1938B70(&v2364);
          v1031 = dword_20D8850;
        }
        while ( v1608 != v1034 );
        v1032 = dword_20D8850 + v1370;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1609 = *(uint32_t *)(v1032 + 28);
      if ( v1609 > 0 )
      {
        v1036 = 0;
        while ( 1 )
        {
          v1037 = 4 * v1036++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1031 + v1370 + 24) + v1037));
          if ( v1609 == v1036 )
            break;
          v1031 = dword_20D8850;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2643, (const std::vector<int> *)&v2683);
      sub_8DE270(v2642, &v2680, v1038);
      sub_193A2E0(&v2365, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2365, v1836, v2642, (glf::Self **)v2643);
      sub_1938B70(&v2365);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2642);
      if ( v2643[0] != nullptr )
        operator delete(v2643[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1707 = (std::vector<int> *)((char *)v1707 + 1);
      v1030 = v1707;
    }
    while ( (std::vector<int> *)v1965 != v1707 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2366, "SpawnGroup_Survi_Mafia_WaveFour");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2366);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2366);
  v1966 = dword_20D8840;
  if ( dword_20D8840 > 0 )
  {
    v1708 = nullptr;
    v1039 = nullptr;
    do
    {
      v1371 = 32 * (uint32_t)(uintptr_t)v1039;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8830 + 32 * (uint32_t)(uintptr_t)v1039 + 12));
      v1040 = dword_20D8830;
      v1041 = dword_20D8830 + v1371;
      v1042 = *(uint32_t *)(dword_20D8830 + v1371 + 8);
      v2680 = 0;
      v1837 = v1042;
      v2681 = 0;
      v2682 = 0;
      v1610 = *(uint32_t *)(dword_20D8830 + v1371 + 20);
      if ( v1610 > 0 )
      {
        v1043 = 0;
        do
        {
          v1044 = *(char **)(*(uint32_t *)(v1040 + v1371 + 16) + 4 * v1043++);
          g4_std::string::construct_from_cstr(&v2367, v1044);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2367);
          sub_1938B70(&v2367);
          v1040 = dword_20D8830;
        }
        while ( v1610 != v1043 );
        v1041 = dword_20D8830 + v1371;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1611 = *(uint32_t *)(v1041 + 28);
      if ( v1611 > 0 )
      {
        v1045 = 0;
        while ( 1 )
        {
          v1046 = 4 * v1045++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1040 + v1371 + 24) + v1046));
          if ( v1611 == v1045 )
            break;
          v1040 = dword_20D8830;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2645, (const std::vector<int> *)&v2683);
      sub_8DE270(v2644, &v2680, v1047);
      sub_193A2E0(&v2368, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2368, v1837, v2644, (glf::Self **)v2645);
      sub_1938B70(&v2368);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2644);
      if ( v2645[0] != nullptr )
        operator delete(v2645[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1708 = (std::vector<int> *)((char *)v1708 + 1);
      v1039 = v1708;
    }
    while ( (std::vector<int> *)v1966 != v1708 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2369, "SpawnGroup_Survi_Mafia_WaveFive");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2369);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2369);
  v1967 = dword_20D8820;
  if ( dword_20D8820 > 0 )
  {
    v1709 = nullptr;
    v1048 = nullptr;
    do
    {
      v1372 = 32 * (uint32_t)(uintptr_t)v1048;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8810 + 32 * (uint32_t)(uintptr_t)v1048 + 12));
      v1049 = dword_20D8810;
      v1050 = dword_20D8810 + v1372;
      v1051 = *(uint32_t *)(dword_20D8810 + v1372 + 8);
      v2680 = 0;
      v1838 = v1051;
      v2681 = 0;
      v2682 = 0;
      v1612 = *(uint32_t *)(dword_20D8810 + v1372 + 20);
      if ( v1612 > 0 )
      {
        v1052 = 0;
        do
        {
          v1053 = *(char **)(*(uint32_t *)(v1049 + v1372 + 16) + 4 * v1052++);
          g4_std::string::construct_from_cstr(&v2370, v1053);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2370);
          sub_1938B70(&v2370);
          v1049 = dword_20D8810;
        }
        while ( v1612 != v1052 );
        v1050 = dword_20D8810 + v1372;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1613 = *(uint32_t *)(v1050 + 28);
      if ( v1613 > 0 )
      {
        v1054 = 0;
        while ( 1 )
        {
          v1055 = 4 * v1054++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1049 + v1372 + 24) + v1055));
          if ( v1613 == v1054 )
            break;
          v1049 = dword_20D8810;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2647, (const std::vector<int> *)&v2683);
      sub_8DE270(v2646, &v2680, v1056);
      sub_193A2E0(&v2371, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2371, v1838, v2646, (glf::Self **)v2647);
      sub_1938B70(&v2371);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2646);
      if ( v2647[0] != nullptr )
        operator delete(v2647[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1709 = (std::vector<int> *)((char *)v1709 + 1);
      v1048 = v1709;
    }
    while ( (std::vector<int> *)v1967 != v1709 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2372, "SpawnGroup_C3M05_Goon");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2372);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2372);
  v1968 = dword_20D80E0;
  if ( dword_20D80E0 > 0 )
  {
    v1710 = nullptr;
    v1057 = nullptr;
    do
    {
      v1373 = 32 * (uint32_t)(uintptr_t)v1057;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D80D0 + 32 * (uint32_t)(uintptr_t)v1057 + 12));
      v1058 = dword_20D80D0;
      v1059 = dword_20D80D0 + v1373;
      v1060 = *(uint32_t *)(dword_20D80D0 + v1373 + 8);
      v2680 = 0;
      v1839 = v1060;
      v2681 = 0;
      v2682 = 0;
      v1614 = *(uint32_t *)(dword_20D80D0 + v1373 + 20);
      if ( v1614 > 0 )
      {
        v1061 = 0;
        do
        {
          v1062 = *(char **)(*(uint32_t *)(v1058 + v1373 + 16) + 4 * v1061++);
          g4_std::string::construct_from_cstr(&v2373, v1062);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2373);
          sub_1938B70(&v2373);
          v1058 = dword_20D80D0;
        }
        while ( v1614 != v1061 );
        v1059 = dword_20D80D0 + v1373;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1615 = *(uint32_t *)(v1059 + 28);
      if ( v1615 > 0 )
      {
        v1063 = 0;
        while ( 1 )
        {
          v1064 = 4 * v1063++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1058 + v1373 + 24) + v1064));
          if ( v1615 == v1063 )
            break;
          v1058 = dword_20D80D0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2649, (const std::vector<int> *)&v2683);
      sub_8DE270(v2648, &v2680, v1065);
      sub_193A2E0(&v2374, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2374, v1839, v2648, (glf::Self **)v2649);
      sub_1938B70(&v2374);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2648);
      if ( v2649[0] != nullptr )
        operator delete(v2649[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1710 = (std::vector<int> *)((char *)v1710 + 1);
      v1057 = v1710;
    }
    while ( (std::vector<int> *)v1968 != v1710 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2375, "SpawnGroup_C3M05_Cop");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2375);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2375);
  v1969 = dword_20D80A0;
  if ( dword_20D80A0 > 0 )
  {
    v1711 = nullptr;
    v1066 = nullptr;
    do
    {
      v1374 = 32 * (uint32_t)(uintptr_t)v1066;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8090 + 32 * (uint32_t)(uintptr_t)v1066 + 12));
      v1067 = dword_20D8090;
      v1068 = dword_20D8090 + v1374;
      v1069 = *(uint32_t *)(dword_20D8090 + v1374 + 8);
      v2680 = 0;
      v1840 = v1069;
      v2681 = 0;
      v2682 = 0;
      v1616 = *(uint32_t *)(dword_20D8090 + v1374 + 20);
      if ( v1616 > 0 )
      {
        v1070 = 0;
        do
        {
          v1071 = *(char **)(*(uint32_t *)(v1067 + v1374 + 16) + 4 * v1070++);
          g4_std::string::construct_from_cstr(&v2376, v1071);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2376);
          sub_1938B70(&v2376);
          v1067 = dword_20D8090;
        }
        while ( v1616 != v1070 );
        v1068 = dword_20D8090 + v1374;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1617 = *(uint32_t *)(v1068 + 28);
      if ( v1617 > 0 )
      {
        v1072 = 0;
        while ( 1 )
        {
          v1073 = 4 * v1072++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1067 + v1374 + 24) + v1073));
          if ( v1617 == v1072 )
            break;
          v1067 = dword_20D8090;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2651, (const std::vector<int> *)&v2683);
      sub_8DE270(v2650, &v2680, v1074);
      sub_193A2E0(&v2377, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2377, v1840, v2650, (glf::Self **)v2651);
      sub_1938B70(&v2377);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2650);
      if ( v2651[0] != nullptr )
        operator delete(v2651[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1711 = (std::vector<int> *)((char *)v1711 + 1);
      v1066 = v1711;
    }
    while ( (std::vector<int> *)v1969 != v1711 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2378, "SpawnGroup_C4M03_Goon");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2378);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2378);
  v1970 = dword_20D80C0;
  if ( dword_20D80C0 > 0 )
  {
    v1712 = nullptr;
    v1075 = nullptr;
    do
    {
      v1375 = 32 * (uint32_t)(uintptr_t)v1075;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D80B0 + 32 * (uint32_t)(uintptr_t)v1075 + 12));
      v1076 = dword_20D80B0;
      v1077 = dword_20D80B0 + v1375;
      v1078 = *(uint32_t *)(dword_20D80B0 + v1375 + 8);
      v2680 = 0;
      v1841 = v1078;
      v2681 = 0;
      v2682 = 0;
      v1618 = *(uint32_t *)(dword_20D80B0 + v1375 + 20);
      if ( v1618 > 0 )
      {
        v1079 = 0;
        do
        {
          v1080 = *(char **)(*(uint32_t *)(v1076 + v1375 + 16) + 4 * v1079++);
          g4_std::string::construct_from_cstr(&v2379, v1080);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2379);
          sub_1938B70(&v2379);
          v1076 = dword_20D80B0;
        }
        while ( v1618 != v1079 );
        v1077 = dword_20D80B0 + v1375;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1619 = *(uint32_t *)(v1077 + 28);
      if ( v1619 > 0 )
      {
        v1081 = 0;
        while ( 1 )
        {
          v1082 = 4 * v1081++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1076 + v1375 + 24) + v1082));
          if ( v1619 == v1081 )
            break;
          v1076 = dword_20D80B0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2653, (const std::vector<int> *)&v2683);
      sub_8DE270(v2652, &v2680, v1083);
      sub_193A2E0(&v2380, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2380, v1841, v2652, (glf::Self **)v2653);
      sub_1938B70(&v2380);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2652);
      if ( v2653[0] != nullptr )
        operator delete(v2653[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1712 = (std::vector<int> *)((char *)v1712 + 1);
      v1075 = v1712;
    }
    while ( (std::vector<int> *)v1970 != v1712 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2381, "SpawnGroup_U3M07_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2381);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2381);
  v1971 = dword_20D8080;
  if ( dword_20D8080 > 0 )
  {
    v1713 = nullptr;
    v1084 = nullptr;
    do
    {
      v1376 = 32 * (uint32_t)(uintptr_t)v1084;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8070 + 32 * (uint32_t)(uintptr_t)v1084 + 12));
      v1085 = dword_20D8070;
      v1086 = dword_20D8070 + v1376;
      v1087 = *(uint32_t *)(dword_20D8070 + v1376 + 8);
      v2680 = 0;
      v1842 = v1087;
      v2681 = 0;
      v2682 = 0;
      v1620 = *(uint32_t *)(dword_20D8070 + v1376 + 20);
      if ( v1620 > 0 )
      {
        v1088 = 0;
        do
        {
          v1089 = *(char **)(*(uint32_t *)(v1085 + v1376 + 16) + 4 * v1088++);
          g4_std::string::construct_from_cstr(&v2382, v1089);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2382);
          sub_1938B70(&v2382);
          v1085 = dword_20D8070;
        }
        while ( v1620 != v1088 );
        v1086 = dword_20D8070 + v1376;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1621 = *(uint32_t *)(v1086 + 28);
      if ( v1621 > 0 )
      {
        v1090 = 0;
        while ( 1 )
        {
          v1091 = 4 * v1090++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1085 + v1376 + 24) + v1091));
          if ( v1621 == v1090 )
            break;
          v1085 = dword_20D8070;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2655, (const std::vector<int> *)&v2683);
      sub_8DE270(v2654, &v2680, v1092);
      sub_193A2E0(&v2383, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2383, v1842, v2654, (glf::Self **)v2655);
      sub_1938B70(&v2383);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2654);
      if ( v2655[0] != nullptr )
        operator delete(v2655[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1713 = (std::vector<int> *)((char *)v1713 + 1);
      v1084 = v1713;
    }
    while ( (std::vector<int> *)v1971 != v1713 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2384, "SpawnGroup_Strip_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2384);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2384);
  v1972 = dword_20D8060;
  if ( dword_20D8060 > 0 )
  {
    v1714 = nullptr;
    v1093 = nullptr;
    do
    {
      v1377 = 32 * (uint32_t)(uintptr_t)v1093;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8050 + 32 * (uint32_t)(uintptr_t)v1093 + 12));
      v1094 = dword_20D8050;
      v1095 = dword_20D8050 + v1377;
      v1096 = *(uint32_t *)(dword_20D8050 + v1377 + 8);
      v2680 = 0;
      v1843 = v1096;
      v2681 = 0;
      v2682 = 0;
      v1622 = *(uint32_t *)(dword_20D8050 + v1377 + 20);
      if ( v1622 > 0 )
      {
        v1097 = 0;
        do
        {
          v1098 = *(char **)(*(uint32_t *)(v1094 + v1377 + 16) + 4 * v1097++);
          g4_std::string::construct_from_cstr(&v2385, v1098);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2385);
          sub_1938B70(&v2385);
          v1094 = dword_20D8050;
        }
        while ( v1622 != v1097 );
        v1095 = dword_20D8050 + v1377;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1623 = *(uint32_t *)(v1095 + 28);
      if ( v1623 > 0 )
      {
        v1099 = 0;
        while ( 1 )
        {
          v1100 = 4 * v1099++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1094 + v1377 + 24) + v1100));
          if ( v1623 == v1099 )
            break;
          v1094 = dword_20D8050;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2657, (const std::vector<int> *)&v2683);
      sub_8DE270(v2656, &v2680, v1101);
      sub_193A2E0(&v2386, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2386, v1843, v2656, (glf::Self **)v2657);
      sub_1938B70(&v2386);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2656);
      if ( v2657[0] != nullptr )
        operator delete(v2657[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1714 = (std::vector<int> *)((char *)v1714 + 1);
      v1093 = v1714;
    }
    while ( (std::vector<int> *)v1972 != v1714 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2387, "SpawnGroup_PoorResidential_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2387);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2387);
  v1973 = dword_20D8040;
  if ( dword_20D8040 > 0 )
  {
    v1715 = nullptr;
    v1102 = nullptr;
    do
    {
      v1378 = 32 * (uint32_t)(uintptr_t)v1102;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8030 + 32 * (uint32_t)(uintptr_t)v1102 + 12));
      v1103 = dword_20D8030;
      v1104 = dword_20D8030 + v1378;
      v1105 = *(uint32_t *)(dword_20D8030 + v1378 + 8);
      v2680 = 0;
      v1844 = v1105;
      v2681 = 0;
      v2682 = 0;
      v1624 = *(uint32_t *)(dword_20D8030 + v1378 + 20);
      if ( v1624 > 0 )
      {
        v1106 = 0;
        do
        {
          v1107 = *(char **)(*(uint32_t *)(v1103 + v1378 + 16) + 4 * v1106++);
          g4_std::string::construct_from_cstr(&v2388, v1107);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2388);
          sub_1938B70(&v2388);
          v1103 = dword_20D8030;
        }
        while ( v1624 != v1106 );
        v1104 = dword_20D8030 + v1378;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1625 = *(uint32_t *)(v1104 + 28);
      if ( v1625 > 0 )
      {
        v1108 = 0;
        while ( 1 )
        {
          v1109 = 4 * v1108++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1103 + v1378 + 24) + v1109));
          if ( v1625 == v1108 )
            break;
          v1103 = dword_20D8030;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2659, (const std::vector<int> *)&v2683);
      sub_8DE270(v2658, &v2680, v1110);
      sub_193A2E0(&v2389, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2389, v1844, v2658, (glf::Self **)v2659);
      sub_1938B70(&v2389);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2658);
      if ( v2659[0] != nullptr )
        operator delete(v2659[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1715 = (std::vector<int> *)((char *)v1715 + 1);
      v1102 = v1715;
    }
    while ( (std::vector<int> *)v1973 != v1715 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2390, "SpawnGroup_Airport_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2390);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2390);
  v1974 = dword_20D8020;
  if ( dword_20D8020 > 0 )
  {
    v1716 = nullptr;
    v1111 = nullptr;
    do
    {
      v1379 = 32 * (uint32_t)(uintptr_t)v1111;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D8010 + 32 * (uint32_t)(uintptr_t)v1111 + 12));
      v1112 = dword_20D8010;
      v1113 = dword_20D8010 + v1379;
      v1114 = *(uint32_t *)(dword_20D8010 + v1379 + 8);
      v2680 = 0;
      v1845 = v1114;
      v2681 = 0;
      v2682 = 0;
      v1626 = *(uint32_t *)(dword_20D8010 + v1379 + 20);
      if ( v1626 > 0 )
      {
        v1115 = 0;
        do
        {
          v1116 = *(char **)(*(uint32_t *)(v1112 + v1379 + 16) + 4 * v1115++);
          g4_std::string::construct_from_cstr(&v2391, v1116);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2391);
          sub_1938B70(&v2391);
          v1112 = dword_20D8010;
        }
        while ( v1626 != v1115 );
        v1113 = dword_20D8010 + v1379;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1627 = *(uint32_t *)(v1113 + 28);
      if ( v1627 > 0 )
      {
        v1117 = 0;
        while ( 1 )
        {
          v1118 = 4 * v1117++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1112 + v1379 + 24) + v1118));
          if ( v1627 == v1117 )
            break;
          v1112 = dword_20D8010;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2661, (const std::vector<int> *)&v2683);
      sub_8DE270(v2660, &v2680, v1119);
      sub_193A2E0(&v2392, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2392, v1845, v2660, (glf::Self **)v2661);
      sub_1938B70(&v2392);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2660);
      if ( v2661[0] != nullptr )
        operator delete(v2661[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1716 = (std::vector<int> *)((char *)v1716 + 1);
      v1111 = v1716;
    }
    while ( (std::vector<int> *)v1974 != v1716 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2393, "SpawnGroup_Government_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2393);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2393);
  v1975 = dword_20D8000;
  if ( dword_20D8000 > 0 )
  {
    v1717 = nullptr;
    v1120 = nullptr;
    do
    {
      v1380 = 32 * (uint32_t)(uintptr_t)v1120;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7FF0 + 32 * (uint32_t)(uintptr_t)v1120 + 12));
      v1121 = dword_20D7FF0;
      v1122 = dword_20D7FF0 + v1380;
      v1123 = *(uint32_t *)(dword_20D7FF0 + v1380 + 8);
      v2680 = 0;
      v1846 = v1123;
      v2681 = 0;
      v2682 = 0;
      v1628 = *(uint32_t *)(dword_20D7FF0 + v1380 + 20);
      if ( v1628 > 0 )
      {
        v1124 = 0;
        do
        {
          v1125 = *(char **)(*(uint32_t *)(v1121 + v1380 + 16) + 4 * v1124++);
          g4_std::string::construct_from_cstr(&v2394, v1125);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2394);
          sub_1938B70(&v2394);
          v1121 = dword_20D7FF0;
        }
        while ( v1628 != v1124 );
        v1122 = dword_20D7FF0 + v1380;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1629 = *(uint32_t *)(v1122 + 28);
      if ( v1629 > 0 )
      {
        v1126 = 0;
        while ( 1 )
        {
          v1127 = 4 * v1126++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1121 + v1380 + 24) + v1127));
          if ( v1629 == v1126 )
            break;
          v1121 = dword_20D7FF0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2663, (const std::vector<int> *)&v2683);
      sub_8DE270(v2662, &v2680, v1128);
      sub_193A2E0(&v2395, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2395, v1846, v2662, (glf::Self **)v2663);
      sub_1938B70(&v2395);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2662);
      if ( v2663[0] != nullptr )
        operator delete(v2663[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1717 = (std::vector<int> *)((char *)v1717 + 1);
      v1120 = v1717;
    }
    while ( (std::vector<int> *)v1975 != v1717 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2396, "SpawnGroup_Industrial_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2396);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2396);
  v1976 = dword_20D7FE0;
  if ( dword_20D7FE0 > 0 )
  {
    v1718 = nullptr;
    v1129 = nullptr;
    do
    {
      v1381 = 32 * (uint32_t)(uintptr_t)v1129;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7FD0 + 32 * (uint32_t)(uintptr_t)v1129 + 12));
      v1130 = dword_20D7FD0;
      v1131 = dword_20D7FD0 + v1381;
      v1132 = *(uint32_t *)(dword_20D7FD0 + v1381 + 8);
      v2680 = 0;
      v1847 = v1132;
      v2681 = 0;
      v2682 = 0;
      v1630 = *(uint32_t *)(dword_20D7FD0 + v1381 + 20);
      if ( v1630 > 0 )
      {
        v1133 = 0;
        do
        {
          v1134 = *(char **)(*(uint32_t *)(v1130 + v1381 + 16) + 4 * v1133++);
          g4_std::string::construct_from_cstr(&v2397, v1134);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2397);
          sub_1938B70(&v2397);
          v1130 = dword_20D7FD0;
        }
        while ( v1630 != v1133 );
        v1131 = dword_20D7FD0 + v1381;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1631 = *(uint32_t *)(v1131 + 28);
      if ( v1631 > 0 )
      {
        v1135 = 0;
        while ( 1 )
        {
          v1136 = 4 * v1135++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1130 + v1381 + 24) + v1136));
          if ( v1631 == v1135 )
            break;
          v1130 = dword_20D7FD0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2665, (const std::vector<int> *)&v2683);
      sub_8DE270(v2664, &v2680, v1137);
      sub_193A2E0(&v2398, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2398, v1847, v2664, (glf::Self **)v2665);
      sub_1938B70(&v2398);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2664);
      if ( v2665[0] != nullptr )
        operator delete(v2665[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1718 = (std::vector<int> *)((char *)v1718 + 1);
      v1129 = v1718;
    }
    while ( (std::vector<int> *)v1976 != v1718 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2399, "SpawnGroup_RichResidential_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2399);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2399);
  v1977 = dword_20D7FC0;
  if ( dword_20D7FC0 > 0 )
  {
    v1719 = nullptr;
    v1138 = nullptr;
    do
    {
      v1382 = 32 * (uint32_t)(uintptr_t)v1138;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7FB0 + 32 * (uint32_t)(uintptr_t)v1138 + 12));
      v1139 = dword_20D7FB0;
      v1140 = dword_20D7FB0 + v1382;
      v1141 = *(uint32_t *)(dword_20D7FB0 + v1382 + 8);
      v2680 = 0;
      v1848 = v1141;
      v2681 = 0;
      v2682 = 0;
      v1632 = *(uint32_t *)(dword_20D7FB0 + v1382 + 20);
      if ( v1632 > 0 )
      {
        v1142 = 0;
        do
        {
          v1143 = *(char **)(*(uint32_t *)(v1139 + v1382 + 16) + 4 * v1142++);
          g4_std::string::construct_from_cstr(&v2400, v1143);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2400);
          sub_1938B70(&v2400);
          v1139 = dword_20D7FB0;
        }
        while ( v1632 != v1142 );
        v1140 = dword_20D7FB0 + v1382;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1633 = *(uint32_t *)(v1140 + 28);
      if ( v1633 > 0 )
      {
        v1144 = 0;
        while ( 1 )
        {
          v1145 = 4 * v1144++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1139 + v1382 + 24) + v1145));
          if ( v1633 == v1144 )
            break;
          v1139 = dword_20D7FB0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2667, (const std::vector<int> *)&v2683);
      sub_8DE270(v2666, &v2680, v1146);
      sub_193A2E0(&v2401, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2401, v1848, v2666, (glf::Self **)v2667);
      sub_1938B70(&v2401);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2666);
      if ( v2667[0] != nullptr )
        operator delete(v2667[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1719 = (std::vector<int> *)((char *)v1719 + 1);
      v1138 = v1719;
    }
    while ( (std::vector<int> *)v1977 != v1719 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2402, "SpawnGroup_Construction_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2402);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2402);
  v1978 = dword_20D7FA0;
  if ( dword_20D7FA0 > 0 )
  {
    v1720 = nullptr;
    v1147 = nullptr;
    do
    {
      v1383 = 32 * (uint32_t)(uintptr_t)v1147;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7F90 + 32 * (uint32_t)(uintptr_t)v1147 + 12));
      v1148 = dword_20D7F90;
      v1149 = dword_20D7F90 + v1383;
      v1150 = *(uint32_t *)(dword_20D7F90 + v1383 + 8);
      v2680 = 0;
      v1849 = v1150;
      v2681 = 0;
      v2682 = 0;
      v1634 = *(uint32_t *)(dword_20D7F90 + v1383 + 20);
      if ( v1634 > 0 )
      {
        v1151 = 0;
        do
        {
          v1152 = *(char **)(*(uint32_t *)(v1148 + v1383 + 16) + 4 * v1151++);
          g4_std::string::construct_from_cstr(&v2403, v1152);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2403);
          sub_1938B70(&v2403);
          v1148 = dword_20D7F90;
        }
        while ( v1634 != v1151 );
        v1149 = dword_20D7F90 + v1383;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1635 = *(uint32_t *)(v1149 + 28);
      if ( v1635 > 0 )
      {
        v1153 = 0;
        while ( 1 )
        {
          v1154 = 4 * v1153++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1148 + v1383 + 24) + v1154));
          if ( v1635 == v1153 )
            break;
          v1148 = dword_20D7F90;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2669, (const std::vector<int> *)&v2683);
      sub_8DE270(v2668, &v2680, v1155);
      sub_193A2E0(&v2404, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2404, v1849, v2668, (glf::Self **)v2669);
      sub_1938B70(&v2404);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2668);
      if ( v2669[0] != nullptr )
        operator delete(v2669[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1720 = (std::vector<int> *)((char *)v1720 + 1);
      v1147 = v1720;
    }
    while ( (std::vector<int> *)v1978 != v1720 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2405, "SpawnGroup_Downtown_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2405);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2405);
  v1979 = dword_20D7F80;
  if ( dword_20D7F80 > 0 )
  {
    v1721 = nullptr;
    v1156 = nullptr;
    do
    {
      v1384 = 32 * (uint32_t)(uintptr_t)v1156;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7F70 + 32 * (uint32_t)(uintptr_t)v1156 + 12));
      v1157 = dword_20D7F70;
      v1158 = dword_20D7F70 + v1384;
      v1159 = *(uint32_t *)(dword_20D7F70 + v1384 + 8);
      v2680 = 0;
      v1850 = v1159;
      v2681 = 0;
      v2682 = 0;
      v1636 = *(uint32_t *)(dword_20D7F70 + v1384 + 20);
      if ( v1636 > 0 )
      {
        v1160 = 0;
        do
        {
          v1161 = *(char **)(*(uint32_t *)(v1157 + v1384 + 16) + 4 * v1160++);
          g4_std::string::construct_from_cstr(&v2406, v1161);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2406);
          sub_1938B70(&v2406);
          v1157 = dword_20D7F70;
        }
        while ( v1636 != v1160 );
        v1158 = dword_20D7F70 + v1384;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1637 = *(uint32_t *)(v1158 + 28);
      if ( v1637 > 0 )
      {
        v1162 = 0;
        while ( 1 )
        {
          v1163 = 4 * v1162++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1157 + v1384 + 24) + v1163));
          if ( v1637 == v1162 )
            break;
          v1157 = dword_20D7F70;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2671, (const std::vector<int> *)&v2683);
      sub_8DE270(v2670, &v2680, v1164);
      sub_193A2E0(&v2407, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2407, v1850, v2670, (glf::Self **)v2671);
      sub_1938B70(&v2407);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2670);
      if ( v2671[0] != nullptr )
        operator delete(v2671[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1721 = (std::vector<int> *)((char *)v1721 + 1);
      v1156 = v1721;
    }
    while ( (std::vector<int> *)v1979 != v1721 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2408, "SpawnGroup_Trailer_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2408);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2408);
  v1980 = dword_20D7F60;
  if ( dword_20D7F60 > 0 )
  {
    v1722 = nullptr;
    v1165 = nullptr;
    do
    {
      v1385 = 32 * (uint32_t)(uintptr_t)v1165;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7F50 + 32 * (uint32_t)(uintptr_t)v1165 + 12));
      v1166 = dword_20D7F50;
      v1167 = dword_20D7F50 + v1385;
      v1168 = *(uint32_t *)(dword_20D7F50 + v1385 + 8);
      v2680 = 0;
      v1851 = v1168;
      v2681 = 0;
      v2682 = 0;
      v1638 = *(uint32_t *)(dword_20D7F50 + v1385 + 20);
      if ( v1638 > 0 )
      {
        v1169 = 0;
        do
        {
          v1170 = *(char **)(*(uint32_t *)(v1166 + v1385 + 16) + 4 * v1169++);
          g4_std::string::construct_from_cstr(&v2409, v1170);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2409);
          sub_1938B70(&v2409);
          v1166 = dword_20D7F50;
        }
        while ( v1638 != v1169 );
        v1167 = dword_20D7F50 + v1385;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1639 = *(uint32_t *)(v1167 + 28);
      if ( v1639 > 0 )
      {
        v1171 = 0;
        while ( 1 )
        {
          v1172 = 4 * v1171++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1166 + v1385 + 24) + v1172));
          if ( v1639 == v1171 )
            break;
          v1166 = dword_20D7F50;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2673, (const std::vector<int> *)&v2683);
      sub_8DE270(v2672, &v2680, v1173);
      sub_193A2E0(&v2410, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2410, v1851, v2672, (glf::Self **)v2673);
      sub_1938B70(&v2410);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2672);
      if ( v2673[0] != nullptr )
        operator delete(v2673[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1722 = (std::vector<int> *)((char *)v1722 + 1);
      v1165 = v1722;
    }
    while ( (std::vector<int> *)v1980 != v1722 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2411, "SpawnGroup_Downtown_Fremont_Alien");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2411);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2411);
  v1981 = dword_20D7F40;
  if ( dword_20D7F40 > 0 )
  {
    v1723 = nullptr;
    v1174 = nullptr;
    do
    {
      v1386 = 32 * (uint32_t)(uintptr_t)v1174;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7F30 + 32 * (uint32_t)(uintptr_t)v1174 + 12));
      v1175 = dword_20D7F30;
      v1176 = dword_20D7F30 + v1386;
      v1177 = *(uint32_t *)(dword_20D7F30 + v1386 + 8);
      v2680 = 0;
      v1852 = v1177;
      v2681 = 0;
      v2682 = 0;
      v1640 = *(uint32_t *)(dword_20D7F30 + v1386 + 20);
      if ( v1640 > 0 )
      {
        v1178 = 0;
        do
        {
          v1179 = *(char **)(*(uint32_t *)(v1175 + v1386 + 16) + 4 * v1178++);
          g4_std::string::construct_from_cstr(&v2412, v1179);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2412);
          sub_1938B70(&v2412);
          v1175 = dword_20D7F30;
        }
        while ( v1640 != v1178 );
        v1176 = dword_20D7F30 + v1386;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1641 = *(uint32_t *)(v1176 + 28);
      if ( v1641 > 0 )
      {
        v1180 = 0;
        while ( 1 )
        {
          v1181 = 4 * v1180++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1175 + v1386 + 24) + v1181));
          if ( v1641 == v1180 )
            break;
          v1175 = dword_20D7F30;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2675, (const std::vector<int> *)&v2683);
      sub_8DE270(v2674, &v2680, v1182);
      sub_193A2E0(&v2413, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2413, v1852, v2674, (glf::Self **)v2675);
      sub_1938B70(&v2413);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2674);
      if ( v2675[0] != nullptr )
        operator delete(v2675[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1723 = (std::vector<int> *)((char *)v1723 + 1);
      v1174 = v1723;
    }
    while ( (std::vector<int> *)v1981 != v1723 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2414, "SpawnGroup_Devil_Turret");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2414);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2414);
  v1982 = dword_20D7F20;
  if ( dword_20D7F20 > 0 )
  {
    v1724 = nullptr;
    v1183 = nullptr;
    do
    {
      v1387 = 32 * (uint32_t)(uintptr_t)v1183;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7F10 + 32 * (uint32_t)(uintptr_t)v1183 + 12));
      v1184 = dword_20D7F10;
      v1185 = dword_20D7F10 + v1387;
      v1186 = *(uint32_t *)(dword_20D7F10 + v1387 + 8);
      v2680 = 0;
      v1853 = v1186;
      v2681 = 0;
      v2682 = 0;
      v1642 = *(uint32_t *)(dword_20D7F10 + v1387 + 20);
      if ( v1642 > 0 )
      {
        v1187 = 0;
        do
        {
          v1188 = *(char **)(*(uint32_t *)(v1184 + v1387 + 16) + 4 * v1187++);
          g4_std::string::construct_from_cstr(&v2415, v1188);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2415);
          sub_1938B70(&v2415);
          v1184 = dword_20D7F10;
        }
        while ( v1642 != v1187 );
        v1185 = dword_20D7F10 + v1387;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1643 = *(uint32_t *)(v1185 + 28);
      if ( v1643 > 0 )
      {
        v1189 = 0;
        while ( 1 )
        {
          v1190 = 4 * v1189++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1184 + v1387 + 24) + v1190));
          if ( v1643 == v1189 )
            break;
          v1184 = dword_20D7F10;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2677, (const std::vector<int> *)&v2683);
      sub_8DE270(v2676, &v2680, v1191);
      sub_193A2E0(&v2416, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2416, v1853, v2676, (glf::Self **)v2677);
      sub_1938B70(&v2416);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2676);
      if ( v2677[0] != nullptr )
        operator delete(v2677[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1724 = (std::vector<int> *)((char *)v1724 + 1);
      v1183 = v1724;
    }
    while ( (std::vector<int> *)v1982 != v1724 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2417, "SpawnGroup_Devil_Heap");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2417);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2417);
  v1983 = dword_20D7F00;
  if ( dword_20D7F00 > 0 )
  {
    v1725 = nullptr;
    v1192 = nullptr;
    do
    {
      v1388 = 32 * (uint32_t)(uintptr_t)v1192;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7EF0 + 32 * (uint32_t)(uintptr_t)v1192 + 12));
      v1193 = dword_20D7EF0;
      v1194 = dword_20D7EF0 + v1388;
      v1195 = *(uint32_t *)(dword_20D7EF0 + v1388 + 8);
      v2680 = 0;
      v1854 = v1195;
      v2681 = 0;
      v2682 = 0;
      v1644 = *(uint32_t *)(dword_20D7EF0 + v1388 + 20);
      if ( v1644 > 0 )
      {
        v1196 = 0;
        do
        {
          v1197 = *(char **)(*(uint32_t *)(v1193 + v1388 + 16) + 4 * v1196++);
          g4_std::string::construct_from_cstr(&v2418, v1197);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2418);
          sub_1938B70(&v2418);
          v1193 = dword_20D7EF0;
        }
        while ( v1644 != v1196 );
        v1194 = dword_20D7EF0 + v1388;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1645 = *(uint32_t *)(v1194 + 28);
      if ( v1645 > 0 )
      {
        v1198 = 0;
        while ( 1 )
        {
          v1199 = 4 * v1198++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1193 + v1388 + 24) + v1199));
          if ( v1645 == v1198 )
            break;
          v1193 = dword_20D7EF0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2679, (const std::vector<int> *)&v2683);
      sub_8DE270(v2678, &v2680, v1200);
      sub_193A2E0(&v2419, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2419, v1854, v2678, (glf::Self **)v2679);
      sub_1938B70(&v2419);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2678);
      if ( v2679[0] != nullptr )
        operator delete(v2679[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1725 = (std::vector<int> *)((char *)v1725 + 1);
      v1192 = v1725;
    }
    while ( (std::vector<int> *)v1983 != v1725 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  sub_960200((int)(uintptr_t)&v2688);
  g4_std::string::construct_from_cstr(&v2420, "SpawnGroup_GangWar");
  v2688 = 0;
  sub_193A2E0(&v2689, (size_t **)&v2420);
  v2690 = 0;
  v2691 = 0;
  v2692 = 0;
  sub_1938B70(&v2420);
  v1984 = dword_20D7EE0;
  if ( dword_20D7EE0 > 0 )
  {
    v1726 = nullptr;
    v1201 = nullptr;
    do
    {
      v1389 = 32 * (uint32_t)(uintptr_t)v1201;
      g4_std::string::construct_from_cstr(&v2421, *(char **)(dword_20D7ED0 + 32 * (uint32_t)(uintptr_t)v1201 + 12));
      v1202 = dword_20D7ED0;
      v1203 = dword_20D7ED0 + v1389;
      v1204 = *(uint32_t *)(dword_20D7ED0 + v1389 + 8);
      v2680 = 0;
      v1855 = v1204;
      v2681 = 0;
      v2682 = 0;
      v1646 = *(uint32_t *)(dword_20D7ED0 + v1389 + 20);
      if ( v1646 > 0 )
      {
        v1205 = 0;
        do
        {
          v1206 = *(char **)(*(uint32_t *)(v1202 + v1389 + 16) + 4 * v1205++);
          g4_std::string::construct_from_cstr(&v2422, v1206);
          g4_std::vector_string_86c307::push_back(&v2680, (int)(uintptr_t)&v2422);
          sub_1938B70(&v2422);
          v1202 = dword_20D7ED0;
        }
        while ( v1646 != v1205 );
        v1203 = dword_20D7ED0 + v1389;
      }
      v2683 = nullptr;
      v2684 = 0;
      v2685 = 0;
      v1647 = *(uint32_t *)(v1203 + 28);
      if ( v1647 > 0 )
      {
        v1207 = 0;
        while ( 1 )
        {
          v1208 = 4 * v1207++;
          g4_std::vector_int_id_9b8903::push_back(
            (std::vector<int> *)&v2683,
            (const int *)(*(uint32_t *)(v1202 + v1389 + 24) + v1208));
          if ( v1647 == v1207 )
            break;
          v1202 = dword_20D7ED0;
        }
      }
      g4_std::vector_int_id_9b8903::Construct((std::vector<int> *)v2687, (const std::vector<int> *)&v2683);
      sub_8DE270(v2686, &v2680, v1209);
      sub_193A2E0(&v2423, &v2421);
      sub_940C30(v2693, (glf::Self **)&v2423, v1855, v2686, (glf::Self **)v2687);
      sub_1938B70(&v2423);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v2686);
      if ( v2687[0] != nullptr )
        operator delete(v2687[0]);
      sub_91CE80((uint32_t *)(&v2688), v2693);
      sub_9601A0((int)(uintptr_t)v2693);
      if ( v2683 != nullptr )
        operator delete(v2683);
      g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v2680);
      sub_1938B70(&v2421);
      v1726 = (std::vector<int> *)((char *)v1726 + 1);
      v1201 = v1726;
    }
    while ( (std::vector<int> *)v1984 != v1726 );
  }
  sub_93A000(v2035, (int)(uintptr_t)&v2688);
  return sub_960200((int)(uintptr_t)&v2688);
}

// Group C [sub_188B280] (VA 0x188b280) | bad sp value at call has been detected, the output may be wrong!
int sub_188B280(int a1, hkDataObject_Value::Self **a2, int a3)
{
  hkDataObject_Value::Self **v3;
  int i;
  int result;
  hkDataObject_Value::Self *v6;
  int v7;
  hkTypeManager::Type::Self *Type;
  int v9;
  int v10;
  hkDataObject_Value::Self *v11;
  int v12;
  int16_t v13; // ax
  int v14;
  int v15;
  int v16;
  hkDataObject_Value::Self *v17;
  int v18;
  int16_t v19; // dx
  hkDataObject_Value::Self *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int16_t v26; // dx
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  hkDataObject_Value::Self *v31;
  int v32;
  int16_t v33; // dx
  int v34;
  int v35;
  bool v36; // zf
  int v37;
  int v38;
  int16_t v39; // ax
  int v40;
  int v41;
  uint32_t *v42;
  int v43;
  int16_t v44; // dx
  int v45;
  uint32_t *v46;
  int v47;
  int v48;
  int v49; // [esp-Ch] [ebp-7Ch]
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
  hkDataObject_Value::Self *v60;
  int v61; // [esp+Ch] [ebp-64h]
  hkDataObject_Value::Self **v62; // [esp+Ch] [ebp-64h]
  int v63; // [esp+Ch] [ebp-64h]
  uint32_t *v64;
  hkMemoryAllocator::Self *v65;
  hkDataObject_Value::Self *v66;
  hkDataObject_Value::Self *v67;
  hkDataObject_Value::Self *v68;
  hkDataObject_Value::Self *v69;
  hkDataObject_Value::Self *v70;
  int v71; // [esp+1Ch] [ebp-54h]
  int v72; // [esp+1Ch] [ebp-54h]
  int v73;
  int v74;
  int v75;
  int v76; // [esp+2Ch] [ebp-44h]
  int v77;
  hkDataObject_Value::Self *v78;
  int v79;
  int v80; // [esp+3Ch] [ebp-34h]
  int v81;
  int v82;
  uint32_t *v83;
  int v84; // [esp+4Ch] [ebp-24h]
  int v85;
  int v86;
  int v87;
  int v88; // [esp+5Ch] [ebp-14h]
  int *v89;
  hkDataObject_Value::Self *v90;
  int v91;
  int v92; // [esp+6Ch] [ebp-4h]

  v3 = a2;
  v89 = &a3;
  G4_VCALL<void>(*a2, 12, v47, v48, v49, v50, v51, v52, v54, v56, v61, a1, a3, v66, v71, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88);
  v72 = G4_VCALL<int>(*v3, 24);
  for ( i = v72; ; i = v72 )
  {
    result = G4_VCALL<int>(*v3, 28, i);
    if ( result == 0 )
      break;
    v6 = *v3;
    v7 = *(uint32_t *)*v3;
    v91 = v72;
    v90 = v6;
    (*(void ( **)(int *))(v7 + 40))(&v79);
    Type = (hkTypeManager::Type::Self *)hkDataObject_Value::getType((hkDataObject_Value::Self *)&v79);
    if ( *(uint32_t *)hkTypeManager::Type::findTerminal(Type) == 6 )
    {
      v9 = *(uint32_t *)Type;
      if ( *(uint32_t *)Type == 7 )
      {
        v37 = G4_VCALL<int>(v79, 56, v80);
        v11 = (hkDataObject_Value::Self *)v37;
        if ( v37 != 0 )
        {
          v38 = *(uint32_t *)(v37 + 4);
          ++*(uint32_t *)(v37 + 8);
          v39 = v38;
          LOWORD(v38) = 0;
          *((uint32_t *)v11 + 1) = v38 | (uint16_t)(v39 + 1);
          v40 = *(uint32_t *)v11;
          v90 = v11;
          (*(void ( **)(int *))(v40 + 8))(&v73);
          v63 = v73;
          v41 = v74;
        }
        else
        {
          v41 = 0;
          v63 = 0;
        }
        v68 = *((hkDataObject_Value::Self **)v65 + 1);
        if ( v68 == (hkDataObject_Value::Self *)(*((uint32_t *)v65 + 2) & 0x3FFFFFFF) )
        {
          v59 = v41;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, v65, 12, v92);
          v41 = v59;
          v68 = *((hkDataObject_Value::Self **)v65 + 1);
        }
        v57 = *(uint32_t *)v65;
        *((uint32_t *)v65 + 1) = (uint32_t)(uintptr_t)((char *)v68 + 1);
        v42 = (uint32_t *)(v57 + 12 * (uint32_t)(uintptr_t)v68);
        *v42 = v63;
        v42[1] = v41;
        v42[2] = 0;
        if ( v11 != nullptr )
        {
LABEL_35:
          v34 = *((uint32_t *)v11 + 1);
          LOWORD(v34) = 0;
          v35 = v34 | (uint16_t)(*((uint32_t *)v11 + 1) - 1);
          v36 = (*((uint32_t *)v11 + 2))-- == 1;
          *((uint32_t *)v11 + 1) = v35;
          if ( v36 )
            G4_VCALL<void>(v11, 4);
        }
      }
      else if ( *(int *)Type > 7 )
      {
        if ( v9 <= 9 )
        {
          v24 = G4_VCALL<int>(v79, 44, v80);
          v83 = (uint32_t *)v24;
          if ( v24 != 0 )
          {
            v25 = *(uint32_t *)(v24 + 4);
            ++*(uint32_t *)(v24 + 8);
            v26 = v25;
            LOWORD(v25) = 0;
            *(uint32_t *)(v24 + 4) = v25 | (uint16_t)(v26 + 1);
          }
          sub_18883F0(v64, (uint32_t *)(&v83), v65, 1);
          v27 = v83;
          if ( v83 != nullptr )
          {
            v28 = v83[1];
            LOWORD(v28) = 0;
            v29 = v28 | (uint16_t)(v83[1] - 1);
            v30 = v83[2];
            v83[1] = v29;
            v27[2] = v30 - 1;
            if ( v30 == 1 )
              G4_VCALL<void>(v27, 4);
          }
        }
      }
      else if ( v9 == 6 )
      {
        v10 = G4_VCALL<int>(v79, 56, v80);
        v11 = (hkDataObject_Value::Self *)v10;
        if ( v10 != 0 )
        {
          v12 = *(uint32_t *)(v10 + 4);
          ++*(uint32_t *)(v10 + 8);
          v13 = v12;
          LOWORD(v12) = 0;
          *((uint32_t *)v11 + 1) = v12 | (uint16_t)(v13 + 1);
        }
        G4_VCALL<void>(v11, 12);
        v62 = v3;
        v14 = G4_VCALL<int>(v11, 24);
        while ( 2 )
        {
          if ( G4_VCALL<int>(v11, 28, v14) == 0 )
          {
            v3 = v62;
            goto LABEL_35;
          }
          v15 = *(uint32_t *)v11;
          v91 = v14;
          v90 = v11;
          (*(void ( **)(uint32_t **))(v15 + 40))(&v83);
          v67 = (hkDataObject_Value::Self *)hkDataObject_Value::getType((hkDataObject_Value::Self *)&v83);
          if ( *(uint32_t *)hkTypeManager::Type::findTerminal((hkTypeManager::Type::Self *)(v67)) != 6 )
            goto LABEL_11;
          v16 = *(uint32_t *)v67;
          if ( *(uint32_t *)v67 == 7 )
          {
            v20 = (hkDataObject_Value::Self *)G4_VCALL<int>(v83, 56, v84);
            if ( v20 != nullptr )
            {
              v43 = *((uint32_t *)v20 + 1);
              ++*((uint32_t *)v20 + 2);
              v44 = v43;
              LOWORD(v43) = 0;
              v69 = v20;
              *((uint32_t *)v20 + 1) = v43 | (uint16_t)(v44 + 1);
              v45 = *(uint32_t *)v20;
              v90 = v20;
              (*(void ( **)(int *))(v45 + 8))(&v73);
              v55 = v73;
              v53 = v74;
              v20 = v69;
            }
            else
            {
              v53 = 0;
              v55 = 0;
            }
            v70 = *((hkDataObject_Value::Self **)v65 + 1);
            if ( v70 == (hkDataObject_Value::Self *)(*((uint32_t *)v65 + 2) & 0x3FFFFFFF) )
            {
              v60 = v20;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, v65, 12, v92);
              v70 = *((hkDataObject_Value::Self **)v65 + 1);
              v20 = v60;
            }
            v58 = *(uint32_t *)v65;
            *((uint32_t *)v65 + 1) = (uint32_t)(uintptr_t)((char *)v70 + 1);
            v46 = (uint32_t *)(v58 + 12 * (uint32_t)(uintptr_t)v70);
            *v46 = v55;
            v46[1] = v53;
            v46[2] = 0;
            if ( v20 == nullptr )
              goto LABEL_11;
          }
          else
          {
            if ( *(int *)v67 <= 7 )
            {
              if ( v16 == 6 )
              {
                v17 = (hkDataObject_Value::Self *)G4_VCALL<int>(v83, 56, v84);
                v78 = v17;
                if ( v17 != nullptr )
                {
                  v18 = *((uint32_t *)v17 + 1);
                  ++*((uint32_t *)v17 + 2);
                  v19 = v18;
                  LOWORD(v18) = 0;
                  *((uint32_t *)v17 + 1) = v18 | (uint16_t)(v19 + 1);
                }
                sub_188B280((int)(uintptr_t)v64, &v78, (int)(uintptr_t)v65);
                v20 = v78;
                if ( v78 != nullptr )
                  break;
              }
LABEL_11:
              v14 = G4_VCALL<int>(v11, 32, v14);
              continue;
            }
            if ( v16 > 9 )
              goto LABEL_11;
            v31 = (hkDataObject_Value::Self *)G4_VCALL<int>(v83, 44, v84);
            v78 = v31;
            if ( v31 != nullptr )
            {
              v32 = *((uint32_t *)v31 + 1);
              ++*((uint32_t *)v31 + 2);
              v33 = v32;
              LOWORD(v32) = 0;
              *((uint32_t *)v31 + 1) = v32 | (uint16_t)(v33 + 1);
            }
            sub_18883F0(v64, (uint32_t *)(&v78), v65, 1);
            v20 = v78;
            if ( v78 == nullptr )
              goto LABEL_11;
          }
          break;
        }
        v21 = *((uint32_t *)v20 + 1);
        LOWORD(v21) = 0;
        v22 = v21 | (uint16_t)(*((uint32_t *)v20 + 1) - 1);
        v23 = *((uint32_t *)v20 + 2);
        *((uint32_t *)v20 + 1) = v22;
        *((uint32_t *)v20 + 2) = v23 - 1;
        if ( v23 == 1 )
          G4_VCALL<void>(v20, 4);
        goto LABEL_11;
      }
    }
    v72 = G4_VCALL<int>(*v3, 32, v72);
  }
  return result;
}

// Group C [sub_16F4B90] (VA 0x16f4b90)
float sub_16F4B90(hkpConvexVerticesShape::Self *a1, int a2, float *a3)
{
  int v4;
  __m128 v5;
  float *v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  __m128i v_m128_i128;
  float v11; // xmm5_4
  int v12;
  float v13; // xmm4_4
  float v14; // xmm3_4
  __m128 v15;
  int v16;
  __m128i v17;
  int v18; // xmm2_4
  float v19; // xmm1_4
  float result; // xmm0_4
  hkpConvexVerticesShape::Self *v21;
  float v23; // [esp-Ch] [ebp-58h]
  float v24;
  int v25;
  int v26;
  int v27;
  __m128 v28;
  float v29[4];
  float v30[7];

  v25 = 0;
  v26 = 0;
  v27 = 0x80000000;
  hkpConvexVerticesShape::getOriginalVertices(a1, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v25);
  if ( v26 <= 3 )
    goto LABEL_11;
  v21 = a1;
  v4 = 0;
  v24 = 0.0;
  do
  {
    v5 = G4Simd::cast128<__m128>(0u);
    v6 = (float *)(v25 + 16 * v4);
    v7 = G4Simd::cast128<__m128>(*(unsigned int *)v6);
    v8 = G4Simd::cast128<__m128>(*((unsigned int *)v6 + 1));
    v7.f32[0] = v7.f32[0] - *a3;
    v8.f32[0] = v8.f32[0] - a3[1];
    v9 = G4Simd::cast128<__m128>(*((unsigned int *)v6 + 2));
    v9.f32[0] = v9.f32[0] - a3[2];
    v_m128_i128 = G4Simd::cast128<__m128i>(v7);
    v23 = v6[3] - a3[3];
    *(float *)v_m128_i128.i32 = (float)((float)(v7.f32[0] * v7.f32[0])
                                          + (float)(v8.f32[0] * v8.f32[0]))
                                  + (float)(v9.f32[0] * v9.f32[0]);
    if ( *(float *)v_m128_i128.i32 > 0.0 )
    {
      v11 = 0.5 * *(float *)v_m128_i128.i32;
      v12 = ((_mm_cvtsi128_si32(v_m128_i128) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v_m128_i128) >> 1));
      v5 = G4Simd::cast128<__m128>(0x3FC00000u);
      v13 = (float)(*(float *)&v12 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)v_m128_i128.i32) * *(float *)&v12)
                  * (float)(*(float *)&v12 * *(float *)&v12));
      v14 = (float)(v13 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)v_m128_i128.i32) * v13) * (float)(v13 * v13));
      v5.f32[0] = (float)(1.5 * v14) - (float)((float)(v11 * v14) * (float)(v14 * v14));
    }
    reinterpret_cast<uint64_t *>(v15.f32)[0] = g4_m128_u64_lane(_mm_unpacklo_ps(v7, v8), 0);
    ++v4;
    reinterpret_cast<uint64_t *>(v15.f32)[1] = g4_m128_u64_lane(_mm_unpacklo_ps(v9, G4_BITCAST<__m128>(LODWORD(v23))), 0);
    v16 = *(uint32_t *)v21;
    v28 = _mm_mul_ps(v15, _mm_shuffle_ps(v5, v5, 0));
    (*(void ( **)(hkpConvexVerticesShape::Self *, __m128 *, float *))(v16 + 40))(v21, &v28, v29);
    G4_VCALL<void>(a2, 40, &v28, v30);
    do { std::memset(&v17, 0, 16); v17.u64[0] = (uint64_t)(uintptr_t)(LODWORD(v30[0])); } while (0);
    *(float *)v17.i32 = fmaxf(
                                (float)((float)((float)(v30[0] - v29[0]) * (float)(v30[0] - v29[0]))
                                      + (float)((float)(v30[1] - v29[1]) * (float)(v30[1] - v29[1])))
                              + (float)((float)(v30[2] - v29[2]) * (float)(v30[2] - v29[2])),
                                v24);
    v24 = *(float *)v17.i32;
  }
  while ( v26 > v4 );
  if ( *(float *)v17.i32 <= 0.0 )
  {
LABEL_11:
    result = 0.0;
  }
  else
  {
    v18 = ((_mm_cvtsi128_si32(v17) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v17) >> 1));
    v19 = (float)(*(float *)&v18 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)v17.i32) * *(float *)&v18)
                * (float)(*(float *)&v18 * *(float *)&v18));
    result = (float)((float)(1.5
                           * (float)((float)(v19 * 1.5)
                                   - (float)((float)((float)(0.5 * *(float *)v17.i32) * v19) * (float)(v19 * v19))))
                   - (float)((float)((float)(0.5 * *(float *)v17.i32)
                                   * (float)((float)(v19 * 1.5)
                                           - (float)((float)((float)(0.5 * *(float *)v17.i32) * v19)
                                                   * (float)(v19 * v19))))
                           * (float)((float)((float)(v19 * 1.5)
                                           - (float)((float)((float)(0.5 * *(float *)v17.i32) * v19)
                                                   * (float)(v19 * v19)))
                                   * (float)((float)(v19 * 1.5)
                                           - (float)((float)((float)(0.5 * *(float *)v17.i32) * v19)
                                                   * (float)(v19 * v19))))))
           * *(float *)v17.i32;
  }
  v26 = 0;
  if ( v27 >= 0 )
    (*(void ( **)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v25,
      16 * v27);
  return result;
}

// Group C [sub_16F52C0] (VA 0x16f52c0)
hkpConvexVerticesShape::Self * sub_16F52C0(hkpConvexVerticesShape::Self *a1,
 char a2,
 const hkVector4f::Self *a3,
 int a4)
{
  hkpConvexVerticesShape::Self *v4;
  int v5;
  int32_t v6; // kr00_4
  int v7;
  int *v8;
  hkpConvexVerticesShape::Self *v9;
  int v10;
  int32_t v11; // kr04_4
  int32_t v12;
  int32_t v13; // ett
  int v15;
  uint32_t *address;
  hkgpConvexHull::AbsoluteScaleConfig *v17;
  hkgpConvexHull::AbsoluteScaleConfig *v18;
  hkgpConvexHull::AbsoluteScaleConfig *v19;
  int v20; // [esp+Ch] [ebp-264h]
  char *PlaneEquations;
  char v22;
  int v23;
  char *v24; // [esp+1Ch] [ebp-254h]
  int v25;
  uint32_t v26[3]; // [esp+2Ch] [ebp-244h] BYREF
  int v27;
  char *v28; // [esp+3Ch] [ebp-234h]
  int v29;
  hkgpConvexHullImpl::Self *v30[5];
  int v31;
  int v32; // [esp+5Ch] [ebp-214h]
  int v33;
  int v34;
  int *v35;

  v4 = a1;
  v35 = &a4;
  if ( a2 != 0 )
  {
    v23 = 0;
    v24 = nullptr;
    v25 = 0x80000000;
    hkpConvexVerticesShape::getOriginalVertices(a1, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v23);
    hkgpConvexHull::Construct((hkgpConvexHull::Self *)v30);
    hkgpConvexHull::BuildConfig::Construct((hkgpConvexHull::BuildConfig::Self *)&v31);
    v27 = v23;
    v28 = v24;
    v29 = 16;
    hkgpConvexHull::build((hkgpConvexHull::Self *)v30, (int)(uintptr_t)&v27, (const hkgpConvexHull::BuildConfig::Self *)&v31);
    if ( hkgpConvexHull::getDimensions((hkgpConvexHull::Self *)v30) == 3 )
    {
      g4_init_AbsoluteScaleConfig((hkgpConvexHull::AbsoluteScaleConfig *)v26);
      v26[0] = 1;
      hkgpConvexHull::absoluteScale(
        (hkgpConvexHull::Self *)v30,
        (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)(uintptr_t)G4_BITCAST<uint32_t>(-*(float *)&a3),
        (const hkgpConvexHull::AbsoluteScaleConfig *)v26);
      if ( hkgpConvexHull::getDimensions((hkgpConvexHull::Self *)v30) == 3 )
      {
        v18 = (hkgpConvexHull::AbsoluteScaleConfig *)(hkgpConvexHull::clone(v30));
        hkgpConvexHull::decimateVertices((uint8_t *)&v22, (int)(uintptr_t)v18, v24, 1, 0);
        v15 = (int)(uintptr_t)v18;
        if ( v22 == 0 )
        {
          if ( v18 != nullptr )
            G4_VCALL<void>(v18, 4);
          v19 = (hkgpConvexHull::AbsoluteScaleConfig *)(hkgpConvexHull::clone(v30));
          hkErrStream::Construct((hkErrStream::Self *)&v27, (hkString::Self *)&v31, 512);
          hkOstream::opShl((int)(uintptr_t)&v27, (hkString::Self *)"Failed to decimate");
          hkError::messageReport(
            (hkError::Self *)0xFFFFFFFF,
            (int)(uintptr_t)&v31,
            "Util/ShapeShrinker/hkpShapeShrinker.cpp",
            (const char *)(uintptr_t)0x9Du);
          hkErrStream::Destroy((hkErrStream::Self *)&v27);
          v15 = (int)(uintptr_t)v19;
        }
        v20 = v15;
        v24 = nullptr;
        hkgpConvexHull::fetchPositions(v15, 1, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v23);
        if ( v20 != 0 )
          G4_VCALL<void>(v20, 4);
        hkpConvexVerticesShape::BuildConfig::Construct((hkpConvexVerticesShape::BuildConfig::Self *)&v31);
        v27 = v23;
        v28 = v24;
        v32 = *((uint32_t *)v4 + 4);
        LOWORD(v31) = 1;
        v29 = 16;
        address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v4 = (hkpConvexVerticesShape::Self *)(*(int ( **)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                                         *(uint32_t *)(*address + 44),
                                         112);
        hkpConvexVerticesShape::Construct((hkpConvexVerticesConnectivity::Self *)v4, (hkpConvexVerticesConnectivity::Self *)&v27, (int)(uintptr_t)&v31);
        hkgpConvexHull::Destroy((hkgpConvexHull::Self *)v30);
        v24 = nullptr;
        if ( v25 >= 0 )
          (*(void ( **)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v23,
            16 * v25);
        return v4;
      }
    }
    else
    {
      hkErrStream::Construct((hkErrStream::Self *)&v27, (hkString::Self *)&v31, 512);
      hkOstream::opShl(
        (int)(uintptr_t)&v27,
        (hkString::Self *)"Cannot use optimized shrinking on non-volumetric(3D) shapes, falling back to legacy method.");
      hkError::messageWarning(
        (hkError::Self *)0x679D17FA,
        (int)(uintptr_t)&v31,
        "Util/ShapeShrinker/hkpShapeShrinker.cpp",
        (const char *)(uintptr_t)0xADu);
      hkErrStream::Destroy((hkErrStream::Self *)&v27);
    }
    hkgpConvexHull::Destroy((hkgpConvexHull::Self *)v30);
    v24 = nullptr;
    if ( v25 >= 0 )
      (*(void ( **)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v23,
        16 * v25);
  }
  PlaneEquations = hkpConvexVerticesShape::getPlaneEquations(v4);
  if ( *((uint16_t *)v4 + 3) != 0 )
  {
    do
    {
      v6 = *((uint32_t *)v4 + 1);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)v4 + 1, v6, v5 | (uint16_t)(v6 + 1)) );
  }
  v7 = 0;
  if ( *((int *)PlaneEquations + 1) <= 0 )
    return v4;
  while ( 1 )
  {
    v8 = (int *)(*(uint32_t *)PlaneEquations + 16 * v7);
    v31 = *v8;
    v32 = v8[1];
    v33 = v8[2];
    v34 = v8[3];
    v9 = hkpConvexVerticesConnectivityUtil::cut((hkpConvexVerticesConnectivityUtil::Self *)(v4), (const hkpConvexVerticesShape::Self *)&v31, a3, 0.00000011920929f);
    if ( *((uint16_t *)v4 + 3) != 0 )
    {
      v17 = (hkgpConvexHull::AbsoluteScaleConfig *)(v9);
      do
      {
        v11 = *((uint32_t *)v4 + 1);
        HIWORD(v10) = HIWORD(v11);
        LOWORD(v10) = 0;
        v12 = v10 | (uint16_t)(v11 - 1);
        v13 = v11;
      }
      while ( v13 != __sync_val_compare_and_swap((volatile int32_t *)v4 + 1, v13, v12) );
      v9 = (hkpConvexVerticesShape::Self *)(v17);
      if ( (uint16_t)v12 == 0 )
      {
        G4_VCALL<void>(v4, 16);
        v9 = (hkpConvexVerticesShape::Self *)(v17);
      }
    }
    if ( v9 == nullptr )
      return nullptr;
    if ( *((uint32_t *)PlaneEquations + 1) <= ++v7 )
      break;
    v4 = v9;
  }
  return v9;
}

// Group C [sub_1891BB0] (VA 0x1891bb0)
hkString::Self * sub_1891BB0(int a1, int a2, int a3)
{
  char *v3;
  char *v4;
  hkString::Self *v5;
  int v6;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v7;
  int Key;
  hkString::Self *result;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v10;
  hkString::Self *v13;
  hkString::Self *v14;
  bool v15; // [esp+Bh] [ebp-ADh] BYREF
  uint8_t v16[4]; // [esp+Ch] [ebp-ACh] BYREF
  hkString::Self *v17;
  char *v18;
  int v19;
  uint32_t v20[39]; // [esp+1Ch] [ebp-9Ch] BYREF

  v20[35] = (uint32_t)(uintptr_t)(&a3);
  v3 = *(char **)a2;
  v4 = (char *)(*(uint32_t *)(a2 + 4) - *(uint32_t *)a2);
  v5 = (hkString::Self *)v20;
  v17 = (hkString::Self *)v20;
  v18 = nullptr;
  v19 = -2147483520;
  if ( (int)(uintptr_t)(v4 + 1) > 128 )
  {
    v6 = 256;
    if ( (int)(uintptr_t)(v4 + 1) > 255 )
      v6 = (int)(uintptr_t)(v4 + 1);
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v16,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v17,
      v6,
      1);
    v5 = v17;
    v3 = *(char **)a2;
  }
  v18 = v4 + 1;
  hkString::strNcpy(v5, v3, v4);
  v4[(uint32_t)(uintptr_t)v17] = 0;
  v7 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 152);
  v10 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a1 + 152);
  v13 = v17;
  Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(v10, v17);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v15, (int)(uintptr_t)v7, Key);
  if ( v15 )
  {
    v14 = (hkString::Self *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(v7, Key);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::setValue(v7, Key, 1);
  }
  else
  {
    v14 = hkString::strDup(v13, (hkMemoryRouter::Self *)&hkContainerHeapAllocator::s_alloc);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v7, v14, 1u);
  }
  result = v14;
  v18 = nullptr;
  if ( v19 >= 0 )
  {
    (*(void ( **)(uint32_t *, hkString::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v17,
      v19 & 0x3FFFFFFF);
    return v14;
  }
  return result;
}

// Forwarding 2-arg overload matching Group B (RecoveredDecompFuncs.inl) call site
int sub_18883F0(void *a1, int a2) {
  uint32_t dummy_slot = 0;
  return (a1 && a2)
    ? static_cast<int>(reinterpret_cast<uintptr_t>(sub_18883F0(static_cast<uint32_t *>(a1), &dummy_slot, static_cast<hkMemoryAllocator::Self *>(a1), a2)))
    : 0;
}

