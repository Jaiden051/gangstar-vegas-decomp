#include "Core/Utils/DecompTypes.h"
#include "havok_internal_0.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_1545700  (binary VA: 0x1545700)
// Original: sub_1545700
// ----------------------------------------------------------------------------
int sub_1545700()
{
  sub_1900D70(&unk_211A424);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A424, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1545760  (binary VA: 0x1545760)
// Original: sub_1545760
// ----------------------------------------------------------------------------
uint32_t * sub_1545760(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1545780  (binary VA: 0x1545780)
// Original: sub_1545780
// ----------------------------------------------------------------------------
uint32_t * sub_1545780(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20968B0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_15457A0  (binary VA: 0x15457a0)
// Original: sub_15457A0
// ----------------------------------------------------------------------------
int sub_15457A0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15457C0  (binary VA: 0x15457c0)
// Original: sub_15457C0
// ----------------------------------------------------------------------------
void sub_15457C0(hkStringPtr::Self *a1)
{
  hkStringPtr::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_15457F0  (binary VA: 0x15457f0)
// Original: sub_15457F0
// ----------------------------------------------------------------------------
void sub_15457F0(hkStringPtr::Self *a1)
{
  hkStringPtr::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1545820  (binary VA: 0x1545820)
// Original: sub_1545820
// ----------------------------------------------------------------------------
void sub_1545820(int a1)
{
  hkStringPtr::Destroy((hkStringPtr::Self *)(a1 + 8));
}

// ----------------------------------------------------------------------------
// Function: sub_1545850  (binary VA: 0x1545850)
// Original: sub_1545850
// ----------------------------------------------------------------------------
int sub_1545850(int a1, int a2)
{
  { hkMonitorStreamStringMap::Construct(); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_1545880  (binary VA: 0x1545880)
// Original: sub_1545880
// ----------------------------------------------------------------------------
int sub_1545880(int a1, int a2)
{
  return hkMonitorStreamStringMap::StringMap::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_15458B0  (binary VA: 0x15458b0)
// Original: sub_15458B0
// ----------------------------------------------------------------------------
int sub_15458B0(int a1, int a2)
{
  { hkStringPtr::Construct(a1, a2); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_15458E0  (binary VA: 0x15458e0)
// Original: sub_15458E0
// ----------------------------------------------------------------------------
int sub_15458E0(int a1, int a2)
{
  { hkStringPtr::Construct(a1, a2); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_1545910  (binary VA: 0x1545910)
// Original: sub_1545910
// ----------------------------------------------------------------------------
int sub_1545910(uint32_t *a1)
{
  int v1;
  hkStringPtr::Self *v2;
  int result;

  v1 = a1[1] - 1;
  v2 = (hkStringPtr::Self *)(*a1 + 16 * v1 + 8);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v2 = (hkStringPtr::Self *)((char *)v2 - 16);
    }
    while ( v1 != -1 );
  }
  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               16 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1545BC0  (binary VA: 0x1545bc0)
// Original: sub_1545BC0
// ----------------------------------------------------------------------------
uint32_t * sub_1545BC0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkMonitorStreamColorTableColorPairClass,
    "hkMonitorStreamColorTableColorPair",
    nullptr,
    8,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2037E60,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkMonitorStreamColorTableColorPairTypeInfo = (uint32_t)(uintptr_t)("hkMonitorStreamColorTableColorPair");
  *(uintptr_t *)(unk_211A5B4) = (uintptr_t)("!hkMonitorStreamColorTable::ColorPair");
  *(uintptr_t *)(unk_211A5C0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_211A5C4) = (uintptr_t)(8);
  *(uintptr_t *)(unk_211A5B8) = (uintptr_t)(sub_15458B0);
  *(uintptr_t *)(unk_211A5BC) = (uintptr_t)(sub_15457C0);
  hkClass::Construct(
    (hkClass::Self *)&hkMonitorStreamColorTableClass,
    "hkMonitorStreamColorTable",
    (const hkClass::Self *)&hkReferencedObjectClass,
    24,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2096860,
    2,
    nullptr,
    nullptr,
    0,
    0);
  *(uintptr_t *)(unk_211A554) = (uintptr_t)("!hkMonitorStreamColorTable");
  *(uintptr_t *)(unk_211A558) = (uintptr_t)(sub_1545780);
  *(uintptr_t *)(unk_211A55C) = (uintptr_t)(sub_15457A0);
  hkMonitorStreamColorTableTypeInfo = (uint32_t)(uintptr_t)("hkMonitorStreamColorTable");
  *(uintptr_t *)(unk_211A560) = (uintptr_t)(((uint32_t)(uintptr_t)&off_20968B0));
  *(uintptr_t *)(unk_211A564) = (uintptr_t)(24);
  dword_20C6A90 = (int)hkMonitorStreamFrameInfoAbsoluteTimeCounterEnum[0];
  hkClass::Construct(
    (hkClass::Self *)&hkMonitorStreamFrameInfoClass,
    "hkMonitorStreamFrameInfo",
    nullptr,
    36,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2037E30,
    1,
    (const hkClassMember::Self *)&off_20C6A40,
    9,
    nullptr,
    nullptr,
    0,
    0);
  hkMonitorStreamFrameInfoTypeInfo = (uint32_t)(uintptr_t)("hkMonitorStreamFrameInfo");
  *(uintptr_t *)(unk_211A4F4) = (uintptr_t)("!hkMonitorStreamFrameInfo");
  *(uintptr_t *)(unk_211A500) = (uintptr_t)(0);
  *(uintptr_t *)(unk_211A504) = (uintptr_t)(36);
  *(uintptr_t *)(unk_211A4F8) = (uintptr_t)(sub_15458E0);
  *(uintptr_t *)(unk_211A4FC) = (uintptr_t)(sub_15457F0);
  hkClass::Construct(
    (hkClass::Self *)&hkMonitorStreamStringMapStringMapClass,
    "hkMonitorStreamStringMapStringMap",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2037E00,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkMonitorStreamStringMapStringMapTypeInfo = (uint32_t)(uintptr_t)("hkMonitorStreamStringMapStringMap");
  *(uintptr_t *)(unk_211A494) = (uintptr_t)("!hkMonitorStreamStringMap::StringMap");
  *(uintptr_t *)(unk_211A4A0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_211A4A4) = (uintptr_t)(16);
  *(uintptr_t *)(unk_211A498) = (uintptr_t)(sub_1545880);
  *(uintptr_t *)(unk_211A49C) = (uintptr_t)(sub_1545820);
  hkClass::Construct(
    (hkClass::Self *)&hkMonitorStreamStringMapClass,
    "hkMonitorStreamStringMap",
    nullptr,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2096840,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkMonitorStreamStringMapTypeInfo[0] = (uint32_t)(uintptr_t)("hkMonitorStreamStringMap");
  hkMonitorStreamStringMapTypeInfo[1] = (uint32_t)(uintptr_t)("!hkMonitorStreamStringMap");
  hkMonitorStreamStringMapTypeInfo[4] = 0;
  hkMonitorStreamStringMapTypeInfo[5] = 12;
  hkMonitorStreamStringMapTypeInfo[2] = (uint32_t)(uintptr_t)(sub_1545850);
  hkMonitorStreamStringMapTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1545910);
  return hkMonitorStreamStringMapTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_554  (binary VA: 0x15461c8)
// Original: nullsub_554
// ----------------------------------------------------------------------------
void nullsub_554()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15461F0  (binary VA: 0x15461f0)
// Original: sub_15461F0
// ----------------------------------------------------------------------------
uint32_t * sub_15461F0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkFloat16TransformClass,
    "hkFloat16Transform",
    nullptr,
    24,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkFloat16Transform::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkFloat16TransformTypeInfo[0] = (uint32_t)(uintptr_t)("hkFloat16Transform");
  hkFloat16TransformTypeInfo[1] = (uint32_t)(uintptr_t)("!hkFloat16Transform");
  hkFloat16TransformTypeInfo[2] = 0;
  hkFloat16TransformTypeInfo[4] = 0;
  hkFloat16TransformTypeInfo[5] = 24;
  hkFloat16TransformTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkFloat16TransformTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_15462C0  (binary VA: 0x15462c0)
// Original: sub_15462C0
// ----------------------------------------------------------------------------
bool * sub_15462C0(bool *a1, int a2)
{
  bool *result;

  result = a1;
  *a1 = *(uint32_t *)(a2 + 8) != 0 && *(uint8_t *)(a2 + 12) == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1546340  (binary VA: 0x1546340)
// Original: sub_1546340
// ----------------------------------------------------------------------------
int sub_1546340(int a1)
{
  return AAsset_seek(*(uint32_t *)(a1 + 8), 0, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_1546380  (binary VA: 0x1546380)
// Original: sub_1546380
// ----------------------------------------------------------------------------
unsigned int * sub_1546380(unsigned int *a1, int a2, int a3, int a4)
{
  *a1 = (unsigned int)AAsset_seek(*(uint32_t *)(a2 + 8), a3, a4) >> 31;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_15463D0  (binary VA: 0x15463d0)
// Original: sub_15463D0
// ----------------------------------------------------------------------------
int sub_15463D0(int a1, int a2, int a3)
{
  int v3;

  v3 = 0;
  if ( *(uint32_t *)(a1 + 8) != 0 )
  {
    v3 = AAsset_read(*(uint32_t *)(a1 + 8), a2, a3);
    if ( AAsset_seek(*(uint32_t *)(a1 + 8), -v3, 1) < 0 || v3 == 0 )
      *(uint8_t *)(a1 + 12) = 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1546440  (binary VA: 0x1546440)
// Original: sub_1546440
// ----------------------------------------------------------------------------
int sub_1546440(int a1, int a2, int a3)
{
  if ( *(uint32_t *)(a1 + 8) == 0 || AAsset_read(*(uint32_t *)(a1 + 8), a2, a3) > 0 )
    return 0;
  *(uint8_t *)(a1 + 12) = 1;
  return 0;
}



// ============================================================================
// Address:   0x15464a0 (size: 69 bytes)
// Symbol:    sub_15464A0
// Demangled: sub_15464A0
// ============================================================================
int (**sub_15464A0(uint32_t *a1))(int)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2096928);
  if ( a1[2] != 0 )
  {
    AAsset_close(a1[2]);
    a1[2] = 0;
  }
  *a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2054CB8));
}
// ----------------------------------------------------------------------------
// Function: sub_15464F0  (binary VA: 0x15464f0)
// Original: sub_15464F0
// ----------------------------------------------------------------------------
int sub_15464F0(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  hkFileSystem::Iterator::Self *NextFileName;
  const char *v9;
  int v10;
  hkString::Self **v12;
  hkString::Self *v13;
  int v14;
  int Length;
  typedef const char *_g4_t_v16;
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
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
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
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v21)) > _g4_s5 ? (28u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v22)) > _g4_s6 ? (32u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v23)) > _g4_s7 ? (36u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v24)) > _g4_s8 ? (40u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v25)) > _g4_s9 ? (44u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v26)) > _g4_s10 ? (48u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v27)) > _g4_s11 ? (52u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v28)) > _g4_s12 ? (56u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v29)) > _g4_s13 ? (60u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v30)) > _g4_s14 ? (64u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v31)) > _g4_s15 ? (68u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v32)) > _g4_s16 ? (72u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v33)) > _g4_s17 ? (76u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v34)) > _g4_s18 ? (80u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v35)) > _g4_s19 ? (84u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v36)) > _g4_s20 ? (88u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v37)) > _g4_s21 ? (92u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v38)) > _g4_s22 ? (96u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v39)) > _g4_s23 ? (100u + sizeof(_g4_t_v39)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v40)) > _g4_s24 ? (104u + sizeof(_g4_t_v40)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v41)) > _g4_s25 ? (108u + sizeof(_g4_t_v41)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v42)) > _g4_s26 ? (112u + sizeof(_g4_t_v42)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v43)) > _g4_s27 ? (116u + sizeof(_g4_t_v43)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v44)) > _g4_s28 ? (120u + sizeof(_g4_t_v44)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v45)) > _g4_s29 ? (124u + sizeof(_g4_t_v45)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v46)) > _g4_s30 ? (128u + sizeof(_g4_t_v46)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v47)) > _g4_s31 ? (132u + sizeof(_g4_t_v47)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v48)) > _g4_s32 ? (136u + sizeof(_g4_t_v48)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v49)) > _g4_s33 ? (140u + sizeof(_g4_t_v49)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v50)) > _g4_s34 ? (144u + sizeof(_g4_t_v50)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v51)) > _g4_s35 ? (148u + sizeof(_g4_t_v51)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v52)) > _g4_s36 ? (152u + sizeof(_g4_t_v52)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v53)) > _g4_s37 ? (156u + sizeof(_g4_t_v53)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v54)) > _g4_s38 ? (160u + sizeof(_g4_t_v54)) : _g4_s38,
    _g4_s40 = (164u + sizeof(_g4_t_v55)) > _g4_s39 ? (164u + sizeof(_g4_t_v55)) : _g4_s39,
    _g4_s41 = (168u + sizeof(_g4_t_v56)) > _g4_s40 ? (168u + sizeof(_g4_t_v56)) : _g4_s40,
    _g4_s42 = (172u + sizeof(_g4_t_v57)) > _g4_s41 ? (172u + sizeof(_g4_t_v57)) : _g4_s41,
    _g4_s43 = (176u + sizeof(_g4_t_v58)) > _g4_s42 ? (176u + sizeof(_g4_t_v58)) : _g4_s42,
    _g4_s44 = (180u + sizeof(_g4_t_v59)) > _g4_s43 ? (180u + sizeof(_g4_t_v59)) : _g4_s43,
    _g4_s45 = (184u + sizeof(_g4_t_v60)) > _g4_s44 ? (184u + sizeof(_g4_t_v60)) : _g4_s44,
    _g4_s46 = (188u + sizeof(_g4_t_v61)) > _g4_s45 ? (188u + sizeof(_g4_t_v61)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 116u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 120u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 124u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 132u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 136u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 140u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 152u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 156u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 164u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 168u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 172u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 176u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 180u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 184u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 188u);

  v7 = a1[5];
  if ( v7 == 0 )
    return 0;
  while ( 1 )
  {
    NextFileName = (hkFileSystem::Iterator::Self *)AAssetDir_getNextFileName((AAssetDir *)(uintptr_t)v7);
    v9 = (const char *)NextFileName;
    if ( NextFileName == nullptr )
    {
      if ( a1[5] != 0 )
      {
        AAssetDir_close(a1[5]);
        a1[5] = 0;
      }
      return 0;
    }
    if ( (uint8_t)hkFileSystem::Iterator::nameAcceptable(NextFileName, (const char *)(a1[4] & 0xFFFFFFFE), v16) != 0 )
      break;
    v7 = a1[5];
    if ( v7 == 0 )
      return 0;
  }
  v25 = a1[2];
  hkStringBuf::Construct((hkStringBuf::Self *)&v26, (const hkStringPtr::Self *)(a1 + 3));
  v12 = (hkString::Self **)hkStringBuf::pathAppend((hkStringBuf::Self *)&v26, v9, nullptr, nullptr);
  v13 = *v12;
  v14 = (int)(uintptr_t)(AAssetManager_open(hkAndroidAssetManagerFileSystem::s_manager, *v12, 0));
  v10 = 0;
  if ( v14 != 0 )
  {
    v24 = v14;
    Length = AAsset_getLength(v14);
    hkFileSystem::Entry::setAll(a2, v25, v13, 1, 0, 0, Length, Length >> 31);
    AAsset_close(v24);
    v10 = 1;
  }
  v27 = 0;
  if ( v28 >= 0 )
  {
    (*(void (**)(uint32_t *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v26,
      v28 & 0x3FFFFFFF,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v10,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    return a7;
  }
  return v10;
}



// ============================================================================
// Address:   0x1546670 (size: 91 bytes)
// Symbol:    sub_1546670
// Demangled: sub_1546670
// ============================================================================
int (**sub_1546670(uint32_t *a1))(int)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2096968);
  if ( a1[5] != 0 )
  {
    AAssetDir_close(a1[5]);
    a1[5] = 0;
  }
  hkStringPtr::Destroy((hkStringPtr::Self *)(a1 + 4));
  hkStringPtr::Destroy((hkStringPtr::Self *)(a1 + 3));
  *a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2054CB8));
}
// ----------------------------------------------------------------------------
// Function: sub_1546730  (binary VA: 0x1546730)
// Original: sub_1546730
// ----------------------------------------------------------------------------
int sub_1546730(int a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v2 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v1, 12, a1, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_15468B0  (binary VA: 0x15468b0)
// Original: sub_15468B0
// ----------------------------------------------------------------------------
int sub_15468B0(int a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v2 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v1, 12, a1, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_15469C0  (binary VA: 0x15469c0)
// Original: sub_15469C0
// ----------------------------------------------------------------------------
int sub_15469C0(int a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2096928);
  if ( *(uint32_t *)(a1 + 8) != 0 )
  {
    AAsset_close(*(uint32_t *)(a1 + 8));
    *(uint32_t *)(a1 + 8) = 0;
  }
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v2 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v1, 12, a1, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1546A40  (binary VA: 0x1546a40)
// Original: sub_1546A40
// ----------------------------------------------------------------------------
int sub_1546A40(int a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2096968);
  if ( *(uint32_t *)(a1 + 20) != 0 )
  {
    AAssetDir_close(*(uint32_t *)(a1 + 20));
    *(uint32_t *)(a1 + 20) = 0;
  }
  hkStringPtr::Destroy((hkStringPtr::Self *)(a1 + 16));
  hkStringPtr::Destroy((hkStringPtr::Self *)(a1 + 12));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v2 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v1, 12, a1, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_1546FF0  (binary VA: 0x1546ff0)
// Original: sub_1546FF0
// ----------------------------------------------------------------------------
uint32_t * sub_1546FF0()
{
  dword_211A690 = (int)(uintptr_t)("hkError");
  dword_211A694 = 0;
  dword_211A69C = (int)(uintptr_t)&hkSingleton<hkError::Self>::s_instance;
  dword_211A698 = hkSingletonInitList[0];
  hkSingletonInitList[0] = (uint32_t)(uintptr_t)(&dword_211A690);
  return hkSingletonInitList;
}

// ----------------------------------------------------------------------------
// Function: nullsub_555  (binary VA: 0x1547048)
// Original: nullsub_555
// ----------------------------------------------------------------------------
void nullsub_555()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1547070  (binary VA: 0x1547070)
// Original: sub_1547070
// ----------------------------------------------------------------------------
uint32_t * sub_1547070()
{
  hkClass::Construct(
    (hkClass::Self *)&hkSphereClass,
    "hkSphere",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkSphere::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkSphereTypeInfo[0] = (uint32_t)(uintptr_t)("hkSphere");
  hkSphereTypeInfo[1] = (uint32_t)(uintptr_t)("!hkSphere");
  hkSphereTypeInfo[2] = 0;
  hkSphereTypeInfo[4] = 0;
  hkSphereTypeInfo[5] = 16;
  hkSphereTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkSphereTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1547160  (binary VA: 0x1547160)
// Original: sub_1547160
// ----------------------------------------------------------------------------
int sub_1547160()
{
  int result;

  if ( dword_211A700 != 0 )
  {
    (**(void (***)(int))dword_211A700)(dword_211A700);
    dword_211A700 = 0;
  }
  result = dword_211A710;
  if ( dword_211A710 != 0 )
  {
    result = (**(int (***)(int))dword_211A710)(dword_211A710);
    dword_211A710 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_556  (binary VA: 0x15473b8)
// Original: nullsub_556
// ----------------------------------------------------------------------------
void nullsub_556()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_557  (binary VA: 0x15473c8)
// Original: nullsub_557
// ----------------------------------------------------------------------------
void nullsub_557()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_558  (binary VA: 0x15473d8)
// Original: nullsub_558
// ----------------------------------------------------------------------------
void nullsub_558()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1547420  (binary VA: 0x1547420)
// Original: sub_1547420
// ----------------------------------------------------------------------------
uint32_t * sub_1547420()
{
  hkClass::Construct(
    (hkClass::Self *)&hkSimplePropertyClass,
    "hkSimpleProperty",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2096A60,
    3,
    nullptr,
    nullptr,
    0,
    2u);
  hkSimplePropertyTypeInfo = (uint32_t)(uintptr_t)("hkSimpleProperty");
  *(uintptr_t *)(unk_21201D4) = (uintptr_t)("!hkSimpleProperty");
  *(uintptr_t *)(unk_21201E0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21201E4) = (uintptr_t)(16);
  *(uintptr_t *)(unk_21201D8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21201DC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkSimplePropertyValueClass,
    "hkSimplePropertyValue",
    nullptr,
    8,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2037EA8,
    1,
    nullptr,
    nullptr,
    0,
    1u);
  hkSimplePropertyValueTypeInfo[0] = (uint32_t)(uintptr_t)("hkSimplePropertyValue");
  hkSimplePropertyValueTypeInfo[1] = (uint32_t)(uintptr_t)("!hkSimplePropertyValue");
  hkSimplePropertyValueTypeInfo[2] = 0;
  hkSimplePropertyValueTypeInfo[4] = 0;
  hkSimplePropertyValueTypeInfo[5] = 8;
  hkSimplePropertyValueTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkSimplePropertyValueTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_559  (binary VA: 0x1547598)
// Original: nullsub_559
// ----------------------------------------------------------------------------
void nullsub_559()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15475C0  (binary VA: 0x15475c0)
// Original: sub_15475C0
// ----------------------------------------------------------------------------
uint32_t * sub_15475C0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkMultiThreadCheckClass,
    "hkMultiThreadCheck",
    nullptr,
    12,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2037EC0,
    2,
    (const hkClassMember::Self *)&hkMultiThreadCheck::Members,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkMultiThreadCheckTypeInfo[0] = (uint32_t)(uintptr_t)("hkMultiThreadCheck");
  hkMultiThreadCheckTypeInfo[1] = (uint32_t)(uintptr_t)("!hkMultiThreadCheck");
  hkMultiThreadCheckTypeInfo[2] = 0;
  hkMultiThreadCheckTypeInfo[4] = 0;
  hkMultiThreadCheckTypeInfo[5] = 12;
  hkMultiThreadCheckTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkMultiThreadCheckTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_560  (binary VA: 0x1547698)
// Original: nullsub_560
// ----------------------------------------------------------------------------
void nullsub_560()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15476C0  (binary VA: 0x15476c0)
// Original: sub_15476C0
// ----------------------------------------------------------------------------
uint32_t * sub_15476C0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkUFloat8Class,
    "hkUFloat8",
    nullptr,
    1,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2037F80,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkUFloat8TypeInfo[0] = (uint32_t)(uintptr_t)("hkUFloat8");
  hkUFloat8TypeInfo[1] = (uint32_t)(uintptr_t)("!hkUFloat8");
  hkUFloat8TypeInfo[2] = 0;
  hkUFloat8TypeInfo[4] = 0;
  hkUFloat8TypeInfo[5] = 1;
  hkUFloat8TypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkUFloat8TypeInfo;
}

// ----------------------------------------------------------------------------
// Function: hkLargeBlockAllocator::thunk_walkMemory  (binary VA: 0x15477f0)
// Original: `non-virtual thunk to'hkLargeBlockAllocator::walkMemory
// ----------------------------------------------------------------------------
hkLargeBlockAllocator::Self * hkLargeBlockAllocator::thunk_walkMemory(hkLargeBlockAllocator::Self *self, void (*a2)(void *, unsigned int, bool, int, void *), void (*a3)(unsigned int, unsigned int, bool, uint32_t, int), int a4)
{
  return hkLargeBlockAllocator::walkMemory(
           self,
           (void (*)(void *, unsigned int, bool, int, void *))((char *)a2 - 4),
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: nullsub_599  (binary VA: 0x1575ad8)
// Original: nullsub_599
// ----------------------------------------------------------------------------
void nullsub_599()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1575B00  (binary VA: 0x1575b00)
// Original: sub_1575B00
// ----------------------------------------------------------------------------
uint32_t * sub_1575B00()
{
  hkClass::Construct(
    (hkClass::Self *)&hkAabb16Class,
    "hkAabb16",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2038760,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkAabb16TypeInfo[0] = (uint32_t)(uintptr_t)("hkAabb16");
  hkAabb16TypeInfo[1] = (uint32_t)(uintptr_t)("!hkAabb16");
  hkAabb16TypeInfo[2] = 0;
  hkAabb16TypeInfo[4] = 0;
  hkAabb16TypeInfo[5] = 16;
  hkAabb16TypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkAabb16TypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1578CB8  (binary VA: 0x1578cb8)
// Original: sub_1578CB8
// ----------------------------------------------------------------------------
char sub_1578CB8(int a1)
{
  char result;

  result = 11;
  if ( a1 > 512 )
  {
    result = 12;
    if ( a1 > 640 )
    {
      result = 13;
      if ( a1 > 1024 )
      {
        result = 14;
        if ( a1 > 2048 )
        {
          result = 15;
          if ( a1 > 4096 )
          {
            result = 16;
            if ( a1 > 0x2000 )
            {
              __builtin_debugtrap();
              return -1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1579AC0  (binary VA: 0x1579ac0)
// Original: sub_1579AC0
// ----------------------------------------------------------------------------
int sub_1579AC0(hkOstream::Self *a1, int a2, int a3, hkStackTracer::Self *a4, int *a5, uint32_t *a6)
{
  int *v6;
  uint32_t *v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;
  int v16;

  v6 = a5;
  v7 = a6;
  v8 = *((void **)a1 + 2);
  if ( a3 != 0 )
  {
    v9 = a3;
    while ( v9 > 31 )
    {
      G4_VCALL<void>(v8, 24, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t", 32);
      v9 -= 32;
      if ( v9 == 0 )
      {
        v6 = a5;
        v7 = a6;
        goto LABEL_7;
      }
    }
    v10 = v9;
    v6 = a5;
    v7 = a6;
    G4_VCALL<void>(v8, 24, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t", v10);
  }
LABEL_7:
  hkOstream::printf(a1, "%lli ", *(uint32_t *)(*v7 + 8 * a2), *(uint32_t *)(*v7 + 8 * a2 + 4));
  if ( a2 != 0 )
  {
    v16 = 20 * a2;
    hkStackTracer::dumpStackTrace(
      a4,
      (const unsigned int *)(*v6 + v16),
      1,
      (void (*)(const char *, void *))sub_1579C30,
      v8);
    v11 = v16;
  }
  else
  {
    hkOstream::printf(a1, (char *)&a0[1]);
    v11 = 0;
  }
  v12 = *(uint32_t *)(*v6 + v11 + 8);
  for ( result = a3 + 1; v12 != -1; v12 = *(uint32_t *)(*v6 + 20 * v12 + 12) )
  {
    sub_1579AC0(a3 + 1, a4, (int)(uintptr_t)(v6), (int)(uintptr_t)(v7));
    result = *v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1579C30  (binary VA: 0x1579c30)
// Original: sub_1579C30
// ----------------------------------------------------------------------------
int sub_1579C30(hkString::Self *a1, int a2)
{
  int (*v2)(int, hkString::Self *, int);
  int v3;
  const char *v5;

  v2 = *(int (**)(int, hkString::Self *, int))(*(uint32_t *)a2 + 24);
  v3 = hkString::strLen(a1, v5);
  return v2(a2, a1, v3);
}

// ----------------------------------------------------------------------------
// Function: nullsub_600  (binary VA: 0x157bcb8)
// Original: nullsub_600
// ----------------------------------------------------------------------------
void nullsub_600()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_157BCE0  (binary VA: 0x157bce0)
// Original: sub_157BCE0
// ----------------------------------------------------------------------------
uint32_t * sub_157BCE0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkSweptTransformfClass,
    "hkSweptTransformf",
    nullptr,
    80,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20387C0,
    5,
    nullptr,
    nullptr,
    0,
    0);
  hkSweptTransformfTypeInfo[0] = (uint32_t)(uintptr_t)("hkSweptTransformf");
  hkSweptTransformfTypeInfo[1] = (uint32_t)(uintptr_t)("!hkSweptTransformf");
  hkSweptTransformfTypeInfo[2] = 0;
  hkSweptTransformfTypeInfo[4] = 0;
  hkSweptTransformfTypeInfo[5] = 80;
  hkSweptTransformfTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkSweptTransformfTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_601  (binary VA: 0x157c4b8)
// Original: nullsub_601
// ----------------------------------------------------------------------------
void nullsub_601()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_602  (binary VA: 0x157c4c8)
// Original: nullsub_602
// ----------------------------------------------------------------------------
void nullsub_602()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_603  (binary VA: 0x157c4d8)
// Original: nullsub_603
// ----------------------------------------------------------------------------
void nullsub_603()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_604  (binary VA: 0x157c4e8)
// Original: nullsub_604
// ----------------------------------------------------------------------------
void nullsub_604()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_605  (binary VA: 0x157c4f8)
// Original: nullsub_605
// ----------------------------------------------------------------------------
void nullsub_605()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_606  (binary VA: 0x157c508)
// Original: nullsub_606
// ----------------------------------------------------------------------------
void nullsub_606()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_607  (binary VA: 0x157c518)
// Original: nullsub_607
// ----------------------------------------------------------------------------
void nullsub_607()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_608  (binary VA: 0x157c528)
// Original: nullsub_608
// ----------------------------------------------------------------------------
void nullsub_608()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_157C530  (binary VA: 0x157c530)
// Original: sub_157C530
// ----------------------------------------------------------------------------
int sub_157C530(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               4 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_157C590  (binary VA: 0x157c590)
// Original: sub_157C590
// ----------------------------------------------------------------------------
int sub_157C590(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               8 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_157C5F0  (binary VA: 0x157c5f0)
// Original: sub_157C5F0
// ----------------------------------------------------------------------------
int sub_157C5F0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               8 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_157C650  (binary VA: 0x157c650)
// Original: sub_157C650
// ----------------------------------------------------------------------------
int sub_157C650(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               8 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_157C6B0  (binary VA: 0x157c6b0)
// Original: sub_157C6B0
// ----------------------------------------------------------------------------
int sub_157C6B0(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               4 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_157C710  (binary VA: 0x157c710)
// Original: sub_157C710
// ----------------------------------------------------------------------------
int sub_157C710(uint32_t *a1)
{
  int result;

  result = a1[2];
  a1[1] = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *a1,
               8 * result);
  *a1 = 0;
  a1[2] = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_157C7F0  (binary VA: 0x157c7f0)
// Original: sub_157C7F0
// ----------------------------------------------------------------------------
uint32_t * sub_157C7F0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkIntRealPairClass,
    "hkIntRealPair",
    nullptr,
    8,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2038840,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkIntRealPairTypeInfo = (uint32_t)(uintptr_t)("hkIntRealPair");
  *(uintptr_t *)(unk_21218D4) = (uintptr_t)("!hkIntRealPair");
  *(uintptr_t *)(unk_21218E0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21218E4) = (uintptr_t)(8);
  *(uintptr_t *)(unk_21218D8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21218DC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkSetIntFloatPairClass,
    "hkSetIntFloatPair",
    (const hkClass::Self *)&hkSethkIntRealPairhkContainerHeapAllocatorhkMapOperationshkIntRealPairClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkSetIntFloatPairTypeInfo = (uint32_t)(uintptr_t)("hkSetIntFloatPair");
  *(uintptr_t *)(unk_2121874) = (uintptr_t)("!hkSetIntFloatPair");
  *(uintptr_t *)(unk_2121880) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121884) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2121878) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212187C) = (uintptr_t)(sub_157C650);
  hkClass::Construct(
    (hkClass::Self *)&hkSetUint32Class,
    "hkSetUint32",
    (const hkClass::Self *)&hkSetunsignedinthkContainerHeapAllocatorhkMapOperationsunsignedintClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkSetUint32TypeInfo = (uint32_t)(uintptr_t)("hkSetUint32");
  *(uintptr_t *)(unk_2121814) = (uintptr_t)("!hkSetUint32");
  *(uintptr_t *)(unk_2121820) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121824) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2121818) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212181C) = (uintptr_t)(sub_157C530);
  hkClass::Construct(
    (hkClass::Self *)&hkSetUint64Class,
    "hkSetUint64",
    (const hkClass::Self *)&hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglongClass,
    16,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkSetUint64TypeInfo = (uint32_t)(uintptr_t)("hkSetUint64");
  *(uintptr_t *)(unk_21217B4) = (uintptr_t)("!hkSetUint64");
  *(uintptr_t *)(unk_21217C0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21217C4) = (uintptr_t)(16);
  *(uintptr_t *)(unk_21217B8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21217BC) = (uintptr_t)(sub_157C590);
  hkClass::Construct(
    (hkClass::Self *)&hkSethkIntRealPairhkContainerHeapAllocatorhkMapOperationshkIntRealPairClass,
    "hkSethkIntRealPairhkContainerHeapAllocatorhkMapOperationshkIntRealPair",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkSet<hkIntRealPair::Self,hkContainerHeapAllocator::Self,hkMapOperations<hkIntRealPair::Self>>::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkSethkIntRealPairhkContainerHeapAllocatorhkMapOperationshkIntRealPairTypeInfo = (uint32_t)(uintptr_t)("hkSethkIntRealPairhkContainerHeapAllo"
                                                                                   "catorhkMapOperationshkIntRealPair");
  *(uintptr_t *)(unk_2121754) = (uintptr_t)("!hkSethkIntRealPairhkContainerHeapAllocatorhkMapOperationshkIntRealPair_typename");
  *(uintptr_t *)(unk_2121760) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121764) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2121758) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212175C) = (uintptr_t)(sub_157C5F0);
  hkClass::Construct(
    (hkClass::Self *)&hkSetunsignedinthkContainerHeapAllocatorhkMapOperationsunsignedintClass,
    "hkSetunsignedinthkContainerHeapAllocatorhkMapOperationsunsignedint",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkSet<unsigned int,hkContainerHeapAllocator::Self,hkMapOperations<unsigned int>>::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkSetunsignedinthkContainerHeapAllocatorhkMapOperationsunsignedintTypeInfo = (uint32_t)(uintptr_t)("hkSetunsignedinthkContainerHeapAllocatorh"
                                                                               "kMapOperationsunsignedint");
  *(uintptr_t *)(unk_21216F4) = (uintptr_t)("!hkSetunsignedinthkContainerHeapAllocatorhkMapOperationsunsignedint_typename");
  *(uintptr_t *)(unk_2121700) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121704) = (uintptr_t)(16);
  *(uintptr_t *)(unk_21216F8) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_21216FC) = (uintptr_t)(sub_157C6B0);
  hkClass::Construct(
    (hkClass::Self *)&hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglongClass,
    "hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglong",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkSet<unsigned long long,hkContainerHeapAllocator::Self,hkMapOperations<unsigned long long>>::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglongTypeInfo[0] = (uint32_t)(uintptr_t)("hkSetunsignedlonglonghkConta"
                                                                                            "inerHeapAllocatorhkMapOperat"
                                                                                            "ionsunsignedlonglong");
  hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglongTypeInfo[1] = (uint32_t)(uintptr_t)("!hkSetunsignedlonglonghkCont"
                                                                                            "ainerHeapAllocatorhkMapOpera"
                                                                                            "tionsunsignedlonglong_typename");
  hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglongTypeInfo[4] = 0;
  hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglongTypeInfo[5] = 16;
  hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglongTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglongTypeInfo[3] = (uint32_t)(uintptr_t)(sub_157C710);
  return hkSetunsignedlonglonghkContainerHeapAllocatorhkMapOperationsunsignedlonglongTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_609  (binary VA: 0x157d408)
// Original: nullsub_609
// ----------------------------------------------------------------------------
void nullsub_609()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_610  (binary VA: 0x157d418)
// Original: nullsub_610
// ----------------------------------------------------------------------------
void nullsub_610()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_157D460  (binary VA: 0x157d460)
// Original: sub_157D460
// ----------------------------------------------------------------------------
uint32_t * sub_157D460()
{
  hkClass::Construct(
    (hkClass::Self *)&hkPackedVector3Class,
    "hkPackedVector3",
    nullptr,
    8,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2038908,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkPackedVector3TypeInfo = (uint32_t)(uintptr_t)("hkPackedVector3");
  *(uintptr_t *)(unk_2121994) = (uintptr_t)("!hkPackedVector3");
  *(uintptr_t *)(unk_2121998) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21219A0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21219A4) = (uintptr_t)(8);
  *(uintptr_t *)(unk_212199C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkPackedVector8_3Class,
    "hkPackedVector8_3",
    nullptr,
    4,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20388F0,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkPackedVector8_3TypeInfo[0] = (uint32_t)(uintptr_t)("hkPackedVector8_3");
  hkPackedVector8_3TypeInfo[1] = (uint32_t)(uintptr_t)("!hkPackedVector8_3");
  hkPackedVector8_3TypeInfo[2] = 0;
  hkPackedVector8_3TypeInfo[4] = 0;
  hkPackedVector8_3TypeInfo[5] = 4;
  hkPackedVector8_3TypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkPackedVector8_3TypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_157D6E0  (binary VA: 0x157d6e0)
// Original: sub_157D6E0
// ----------------------------------------------------------------------------
int sub_157D6E0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20586B8);
  v1 = *(uint32_t *)(a1 + 28);
  *(uint32_t *)(a1 + 24) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)(a1 + 20),
      16 * v1);
  v2 = *(uint32_t *)(a1 + 16);
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 28) = 0x80000000;
  *(uint32_t *)(a1 + 12) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)(a1 + 8),
      16 * v2);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 16) = 0x80000000;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v4 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v3, 12, a1, v4);
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4UtilAlgo::invert  (binary VA: 0x157de70)
// Original: __hkMatrix4UtilAlgo::invert
// ----------------------------------------------------------------------------
int * hkMatrix4UtilAlgo::invert(int *a1, float *a2, float *a3)
{
  int *result;
  float v4; // xmm3_4
  float v5; // xmm5_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  int v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;

  result = a1;
  v30 = a2[1];
  v32 = a2[5];
  v20 = a2[4];
  v14 = *a2;
  v24 = a2[8];
  v19 = (float)(*a2 * v32) - (float)(v20 * v30);
  v4 = a2[9];
  v12 = a2[12];
  v5 = a2[13];
  v10 = (float)(*a2 * v4) - (float)(v24 * v30);
  v18 = (float)(*a2 * v5) - (float)(v30 * v12);
  v17 = (float)(v20 * v4) - (float)(v24 * v32);
  v16 = (float)(v20 * v5) - (float)(v12 * v32);
  v13 = a2[2];
  v15 = (float)(v24 * v5) - (float)(v12 * v4);
  v27 = a2[7];
  v26 = a2[6];
  v25 = a2[3];
  v23 = (float)(v13 * v27) - (float)(v26 * v25);
  v33 = a2[11];
  v31 = a2[10];
  v29 = a2[14];
  v22 = (float)(v13 * v33) - (float)(v25 * v31);
  v28 = a2[15];
  v21 = (float)(v13 * v28) - (float)(v25 * v29);
  v11 = (float)(v33 * v26) - (float)(v27 * v31);
  v6 = (float)(v26 * v28) - (float)(v27 * v29);
  v7 = (float)(v31 * v28) - (float)(v33 * v29);
  v8 = (float)((float)((float)((float)((float)(v19 * v7) - (float)(v10 * v6)) + (float)(v18 * v11)) + (float)(v17 * v21))
             - (float)(v16 * v22))
     + (float)(v15 * v23);
  v9 = 1;
  if ( *a3 < fabs(v8) )
  {
    LOBYTE(v9) = 0;
    *a2 = (float)((float)((float)(v32 * v7) - (float)(v4 * v6)) + (float)(v11 * v5)) * (float)(1.0 / v8);
    a2[1] = (float)((float)((float)((float)-v30 * v7) + (float)(v21 * v4)) - (float)(v22 * v5)) * (float)(1.0 / v8);
    a2[2] = (float)((float)((float)(v30 * v6) - (float)(v21 * v32)) + (float)(v5 * v23)) * (float)(1.0 / v8);
    a2[3] = (float)((float)((float)((float)-v30 * v11) + (float)(v32 * v22)) - (float)(v4 * v23)) * (float)(1.0 / v8);
    a2[4] = (float)((float)((float)(v24 * v6) - (float)(v20 * v7)) - (float)(v12 * v11)) * (float)(1.0 / v8);
    a2[5] = (float)((float)((float)(v7 * v14) - (float)(v24 * v21)) + (float)(v12 * v22)) * (float)(1.0 / v8);
    a2[6] = (float)((float)((float)(v21 * v20) - (float)(v6 * v14)) - (float)(v12 * v23)) * (float)(1.0 / v8);
    a2[7] = (float)((float)((float)(v14 * v11) - (float)(v20 * v22)) + (float)(v24 * v23)) * (float)(1.0 / v8);
    a2[8] = (float)((float)((float)(v27 * v15) - (float)(v16 * v33)) + (float)(v17 * v28)) * (float)(1.0 / v8);
    a2[9] = (float)((float)((float)((float)-v25 * v15) + (float)(v18 * v33)) - (float)(v10 * v28)) * (float)(1.0 / v8);
    a2[10] = (float)((float)((float)(v25 * v16) - (float)(v27 * v18)) + (float)(v28 * v19)) * (float)(1.0 / v8);
    a2[11] = (float)((float)((float)((float)-v25 * v17) + (float)(v27 * v10)) - (float)(v33 * v19)) * (float)(1.0 / v8);
    a2[12] = (float)((float)((float)(v31 * v16) - (float)(v26 * v15)) - (float)(v29 * v17)) * (float)(1.0 / v8);
    a2[13] = (float)((float)((float)(v13 * v15) - (float)(v31 * v18)) + (float)(v10 * v29)) * (float)(1.0 / v8);
    a2[14] = (float)((float)((float)(v18 * v26) - (float)(v13 * v16)) - (float)(v29 * v19)) * (float)(1.0 / v8);
    a2[15] = (float)((float)((float)(v13 * v17) - (float)(v10 * v26)) + (float)(v31 * v19)) * (float)(1.0 / v8);
  }
  *a1 = v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4UtilAlgo::invert  (binary VA: 0x157e4c0)
// Original: __hkMatrix4UtilAlgo::invert
// ----------------------------------------------------------------------------
int * hkMatrix4UtilAlgo::invert(int *a1, double *a2, double *a3)
{
  int *result;
  double v4; // xmm3_8
  double v5; // xmm5_8
  double v6; // xmm4_8
  double v7; // xmm1_8
  double v8; // xmm2_8
  int v9;
  double v10; // xmm0_8
  double v11;
  double v12;
  double v13;
  double v14;
  double v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  double v23;
  double v24;
  double v25;
  double v26;
  double v27;
  double v28;
  double v29;
  double v30;
  double v31;
  double v32;
  double v33;

  result = a1;
  v4 = a2[5];
  v13 = *a2;
  v5 = a2[1];
  v20 = a2[4];
  v32 = a2[9];
  v19 = a2[8];
  v24 = *a2 * v4 - v20 * v5;
  v6 = a2[13];
  v25 = a2[12];
  v11 = *a2 * v32 - v19 * v5;
  v18 = *a2 * v6 - v25 * v5;
  v17 = v32 * v20 - v19 * v4;
  v16 = v20 * v6 - v25 * v4;
  v15 = v19 * v6 - v32 * v25;
  v14 = a2[2];
  v12 = a2[6];
  v28 = a2[3];
  v31 = a2[7];
  v30 = a2[10];
  v23 = v14 * v31 - v28 * v12;
  v33 = a2[11];
  v27 = a2[14];
  v22 = v14 * v33 - v28 * v30;
  v29 = a2[15];
  v21 = v14 * v29 - v28 * v27;
  v26 = v33 * v12 - v30 * v31;
  v7 = v12 * v29 - v31 * v27;
  v8 = v30 * v29 - v33 * v27;
  v9 = 1;
  v10 = v24 * v8 - v11 * v7 + v18 * v26 + v17 * v21 - v16 * v22 + v15 * v23;
  if ( *a3 < fabs(v10) )
  {
    LOBYTE(v9) = 0;
    *a2 = (v4 * v8 - v32 * v7 + v26 * v6) * (1.0 / v10);
    a2[1] = (-v5 * v8 + v32 * v21 - v22 * v6) * (1.0 / v10);
    a2[2] = (v5 * v7 - v21 * v4 + v6 * v23) * (1.0 / v10);
    a2[3] = (-v5 * v26 + v4 * v22 - v32 * v23) * (1.0 / v10);
    a2[4] = (v19 * v7 - v20 * v8 - v26 * v25) * (1.0 / v10);
    a2[5] = (v8 * v13 - v19 * v21 + v25 * v22) * (1.0 / v10);
    a2[6] = (v21 * v20 - v7 * v13 - v25 * v23) * (1.0 / v10);
    a2[7] = (v26 * v13 - v20 * v22 + v19 * v23) * (1.0 / v10);
    a2[8] = (v31 * v15 - v16 * v33 + v29 * v17) * (1.0 / v10);
    a2[9] = (-v28 * v15 + v18 * v33 - v29 * v11) * (1.0 / v10);
    a2[10] = (v28 * v16 - v31 * v18 + v29 * v24) * (1.0 / v10);
    a2[11] = (-v28 * v17 + v31 * v11 - v33 * v24) * (1.0 / v10);
    a2[12] = (v30 * v16 - v12 * v15 - v27 * v17) * (1.0 / v10);
    a2[13] = (v14 * v15 - v30 * v18 + v11 * v27) * (1.0 / v10);
    a2[14] = (v18 * v12 - v14 * v16 - v27 * v24) * (1.0 / v10);
    a2[15] = (v14 * v17 - v11 * v12 + v30 * v24) * (1.0 / v10);
  }
  *a1 = v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4UtilAlgo::setInverse  (binary VA: 0x157eb90)
// Original: __hkMatrix4UtilAlgo::setInverse
// ----------------------------------------------------------------------------
int * hkMatrix4UtilAlgo::setInverse(int *a1, uint32_t *a2, int a3, float *a4)
{
  *(uint32_t *)a3 = *a2;
  *(uint32_t *)(a3 + 4) = a2[1];
  *(uint32_t *)(a3 + 8) = a2[2];
  *(uint32_t *)(a3 + 12) = a2[3];
  *(uint32_t *)(a3 + 16) = a2[4];
  *(uint32_t *)(a3 + 20) = a2[5];
  *(uint32_t *)(a3 + 24) = a2[6];
  *(uint32_t *)(a3 + 28) = a2[7];
  *(uint32_t *)(a3 + 32) = a2[8];
  *(uint32_t *)(a3 + 36) = a2[9];
  *(uint32_t *)(a3 + 40) = a2[10];
  *(uint32_t *)(a3 + 44) = a2[11];
  *(uint32_t *)(a3 + 48) = a2[12];
  *(uint32_t *)(a3 + 52) = a2[13];
  *(uint32_t *)(a3 + 56) = a2[14];
  *(uint32_t *)(a3 + 60) = a2[15];
  hkMatrix4UtilAlgo::invert(a1, (float *)a3, a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix4UtilAlgo::setInverse  (binary VA: 0x157ec30)
// Original: __hkMatrix4UtilAlgo::setInverse
// ----------------------------------------------------------------------------
int * hkMatrix4UtilAlgo::setInverse(int *a1, uint32_t *a2, int a3, double *a4)
{
  *(uint32_t *)a3 = *a2;
  *(uint32_t *)(a3 + 4) = a2[1];
  *(uint32_t *)(a3 + 8) = a2[2];
  *(uint32_t *)(a3 + 12) = a2[3];
  *(uint32_t *)(a3 + 16) = a2[4];
  *(uint32_t *)(a3 + 20) = a2[5];
  *(uint32_t *)(a3 + 24) = a2[6];
  *(uint32_t *)(a3 + 28) = a2[7];
  *(uint32_t *)(a3 + 32) = a2[8];
  *(uint32_t *)(a3 + 36) = a2[9];
  *(uint32_t *)(a3 + 40) = a2[10];
  *(uint32_t *)(a3 + 44) = a2[11];
  *(uint32_t *)(a3 + 48) = a2[12];
  *(uint32_t *)(a3 + 52) = a2[13];
  *(uint32_t *)(a3 + 56) = a2[14];
  *(uint32_t *)(a3 + 60) = a2[15];
  *(uint32_t *)(a3 + 64) = a2[16];
  *(uint32_t *)(a3 + 68) = a2[17];
  *(uint32_t *)(a3 + 72) = a2[18];
  *(uint32_t *)(a3 + 76) = a2[19];
  *(uint32_t *)(a3 + 80) = a2[20];
  *(uint32_t *)(a3 + 84) = a2[21];
  *(uint32_t *)(a3 + 88) = a2[22];
  *(uint32_t *)(a3 + 92) = a2[23];
  *(uint32_t *)(a3 + 96) = a2[24];
  *(uint32_t *)(a3 + 100) = a2[25];
  *(uint32_t *)(a3 + 104) = a2[26];
  *(uint32_t *)(a3 + 108) = a2[27];
  *(uint32_t *)(a3 + 112) = a2[28];
  *(uint32_t *)(a3 + 116) = a2[29];
  *(uint32_t *)(a3 + 120) = a2[30];
  *(uint32_t *)(a3 + 124) = a2[31];
  hkMatrix4UtilAlgo::invert(a1, (double *)a3, a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: nullsub_611  (binary VA: 0x157ed38)
// Original: nullsub_611
// ----------------------------------------------------------------------------
void nullsub_611()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_612  (binary VA: 0x157ed48)
// Original: nullsub_612
// ----------------------------------------------------------------------------
void nullsub_612()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_157ED70  (binary VA: 0x157ed70)
// Original: sub_157ED70
// ----------------------------------------------------------------------------
uint32_t * sub_157ED70()
{
  hkClass::Construct(
    (hkClass::Self *)&hkQTransformClass,
    "hkQTransform",
    (const hkClass::Self *)&hkQTransformfClass,
    32,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    2u);
  hkQTransformTypeInfo[0] = (uint32_t)(uintptr_t)("hkQTransform");
  hkQTransformTypeInfo[1] = (uint32_t)(uintptr_t)("!hkQTransform");
  hkQTransformTypeInfo[4] = 0;
  hkQTransformTypeInfo[5] = 32;
  hkQTransformTypeInfo[2] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  hkQTransformTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkQTransformTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sortByAllocationAddress  (binary VA: 0x157fb50)
// Original: _sortByAllocationAddress
// ----------------------------------------------------------------------------
int sortByAllocationAddress(uint32_t *a1)
{
  int result;
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  bool v5;
  uint32_t *v6;
  uint32_t *v7;
  bool v8; // di
  int v9;
  uint32_t *v10;
  typedef int _g4_t_i;
  typedef int _g4_t_v12;
  typedef bool _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_i)) > _g4_s0 ? (4u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (19u + sizeof(_g4_t_v13)) > _g4_s2 ? (19u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v16)) > _g4_s5 ? (24u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 19u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  result = 0;
  v2 = a1;
  if ( a1 != nullptr )
  {
    v3 = v17;
    v17[0] = 0;
    v12 = 1;
    for ( i = 0; ; i = 0 )
    {
      do
      {
        v15 = v2;
        ++i;
        v4 = 0;
        do
        {
          ++v4;
          v5 = *v15 == 0;
          v15 = (uint32_t *)*v15;
        }
        while ( v4 < v12 && !v5 );
        v6 = v15;
        v13 = false;
        if ( v15 != nullptr )
        {
          v14 = v4;
          v16 = v12;
          while ( 1 )
          {
            if ( v2[1] <= v6[1] )
            {
              v7 = v2;
              v2 = (uint32_t *)*v2;
              *v3 = (uint32_t)(uintptr_t)(v7);
              --v14;
              v8 = v16 > 0;
              if ( v16 <= 0 )
                goto LABEL_13;
            }
            else
            {
              v7 = v6;
              --v16;
              v6 = (uint32_t *)*v6;
              *v3 = (uint32_t)(uintptr_t)(v7);
              v8 = v16 > 0;
              if ( v16 <= 0 )
              {
LABEL_13:
                v4 = v14;
                v13 = v8 && v6 != nullptr;
                if ( v14 != 0 )
                  goto LABEL_16;
                v2 = v7;
                goto LABEL_17;
              }
            }
            if ( v14 <= 0 )
              goto LABEL_13;
            if ( v6 == nullptr )
            {
              v4 = v14;
              v6 = nullptr;
              goto LABEL_16;
            }
            v3 = v7;
          }
        }
        v16 = v12;
        v7 = v3;
        v6 = nullptr;
LABEL_16:
        while ( 1 )
        {
          --v4;
          *v7 = (uint32_t)(uintptr_t)(v2);
          if ( v4 == 0 )
            break;
          v7 = v2;
          v2 = (uint32_t *)*v2;
        }
LABEL_17:
        if ( v13 )
        {
          v3 = v6;
          v9 = v16;
          while ( 1 )
          {
            *v2 = (uint32_t)(uintptr_t)(v3);
            v2 = (uint32_t *)*v3;
            --v9;
            if ( *v3 == 0 || v9 <= 0 )
              break;
            v10 = v3;
            v3 = (uint32_t *)*v3;
            v2 = v10;
          }
        }
        else
        {
          v3 = v2;
          v2 = v6;
        }
      }
      while ( v2 != nullptr );
      *v3 = 0;
      if ( i == 1 )
        return v17[0];
      v12 *= 2;
      v2 = (uint32_t *)v17[0];
      v5 = v17[0] == 0;
      v17[0] = 0;
      if ( v5 )
        break;
      v3 = v17;
    }
    return 0;
  }
  return result;
}



// ============================================================================
// Address:   0x1580b00 (size: 327 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIPN10hkFreeList7ElementEPF6hkBoolPKS2_S6_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkFreeList::Element *,hkBool (*)(hkFreeList::Element const*,hkFreeList::Element const*)>(hkFreeList::Element * *,int,int,hkBool (*)(hkFreeList::Element const*,hkFreeList::Element const*))
// ============================================================================
int hkAlgorithm::quickSortRecursive_ecfc78(
        int a1,
        int a2,
        int a3,
        void (*a4)(uint8_t *))
{
  int i;
  int v5;
  int v6;
  uint32_t *v7;
  int result;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_j;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef void (*_g4_t_v17)(uint8_t *);
  typedef uint8_t _g4_t_v18[9];
  typedef int *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_j)) > _g4_s4 ? (16u + sizeof(_g4_t_j)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v16)) > _g4_s6 ? (20u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v17)) > _g4_s7 ? (28u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v18)) > _g4_s8 ? (39u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v19)) > _g4_s9 ? (48u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 39u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  v19 = &a1;
  v12 = a1;
  v11 = a2;
  v10 = a3;
  v17 = a4;
  for ( i = a2; ; i = result )
  {
    v5 = v10;
    v6 = i + 1;
    for ( j = i + 1; ; v6 = j )
    {
      v13 = v6 - 1;
      v17(v18);
      if ( v18[0] == 0 )
      {
        v7 = (uint32_t *)(v12 + 4 * v5);
        while ( 1 )
        {
          v15 = v7--;
          v17(v18);
          if ( v18[0] == 0 )
            break;
          --v5;
        }
        if ( v13 > v5 )
          break;
        if ( v13 != v5 )
        {
          v9 = v15;
          v16 = *v15;
          *v9 = *(uint32_t *)(v12 + 4 * j - 4);
          *(uint32_t *)(v12 + 4 * j - 4) = v16;
        }
        --v5;
        v13 = j;
        if ( v5 < j )
          break;
      }
      ++j;
    }
    if ( v11 < v5 )
      break;
    result = v13;
    if ( v10 <= v13 )
      return result;
LABEL_10:
    v11 = result;
  }
  hkAlgorithm::quickSortRecursive_ecfc78(
    v12,
    v11,
    v5,
    v17);
  result = v13;
  if ( v10 > v13 )
    goto LABEL_10;
  return result;
}
// ----------------------------------------------------------------------------
// Function: nullsub_613  (binary VA: 0x1583078)
// Original: nullsub_613
// ----------------------------------------------------------------------------
void nullsub_613()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1583080  (binary VA: 0x1583080)
// Original: sub_1583080
// ----------------------------------------------------------------------------
int sub_1583080(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15830A0  (binary VA: 0x15830a0)
// Original: sub_15830A0
// ----------------------------------------------------------------------------
uint32_t * sub_15830A0(uint32_t *a1)
{
  return hkGeometry::Construct(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1583110  (binary VA: 0x1583110)
// Original: sub_1583110
// ----------------------------------------------------------------------------
uint32_t * sub_1583110()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkGeometryTriangleClass,
    "hkGeometryTriangle",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2038920,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkGeometryTriangleTypeInfo = (uint32_t)(uintptr_t)("hkGeometryTriangle");
  *(uintptr_t *)(unk_2121AD4) = (uintptr_t)("!hkGeometry::Triangle");
  *(uintptr_t *)(unk_2121AD8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121AE0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121AE4) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2121ADC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkGeometryClass,
    "hkGeometry",
    (const hkClass::Self *)&hkReferencedObjectClass,
    32,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2038980,
    1,
    (const hkClassMember::Self *)&off_2097780,
    2,
    nullptr,
    nullptr,
    0,
    1u);
  hkGeometry::Construct(&v1);
  hkGeometryTypeInfo[1] = (uint32_t)(uintptr_t)("!hkGeometry");
  hkGeometryTypeInfo[2] = (uint32_t)(uintptr_t)(sub_15830A0);
  hkGeometryTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1583080);
  hkGeometryTypeInfo[0] = (uint32_t)(uintptr_t)("hkGeometry");
  hkGeometryTypeInfo[4] = v1;
  hkGeometryTypeInfo[5] = 32;
  return hkGeometryTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1583C70  (binary VA: 0x1583c70)
// Original: sub_1583C70
// ----------------------------------------------------------------------------
uint32_t * sub_1583C70()
{
  dword_2121B50 = (int)(uintptr_t)("hkFileSystem");
  dword_2121B54 = 0;
  dword_2121B5C = (int)(uintptr_t)&hkSingleton<hkFileSystem::Self>::s_instance;
  dword_2121B58 = hkSingletonInitList[0];
  hkSingletonInitList[0] = (uint32_t)(uintptr_t)(&dword_2121B50);
  return hkSingletonInitList;
}

// ----------------------------------------------------------------------------
// Function: sub_1587260  (binary VA: 0x1587260)
// Original: sub_1587260
// ----------------------------------------------------------------------------
int sub_1587260(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1587280  (binary VA: 0x1587280)
// Original: sub_1587280
// ----------------------------------------------------------------------------
int sub_1587280(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15872E0  (binary VA: 0x15872e0)
// Original: sub_15872E0
// ----------------------------------------------------------------------------
void sub_15872E0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2097850);
  hkStringPtr::Construct();
}

// ----------------------------------------------------------------------------
// Function: sub_1587320  (binary VA: 0x1587320)
// Original: sub_1587320
// ----------------------------------------------------------------------------
void sub_1587320(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2097BC8);
  hkStringPtr::Construct();
}

// ----------------------------------------------------------------------------
// Function: sub_1587440  (binary VA: 0x1587440)
// Original: sub_1587440
// ----------------------------------------------------------------------------
uint32_t * sub_1587440()
{
  hkClass::Construct(
    (hkClass::Self *)&hkLocalFrameClass,
    "hkLocalFrame",
    (const hkClass::Self *)&hkReferencedObjectClass,
    8,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkClass::Construct(
    (hkClass::Self *)&hkLocalFrameGroupClass,
    "hkLocalFrameGroup",
    (const hkClass::Self *)&hkReferencedObjectClass,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkLocalFrameGroup::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkStringPtr::Construct();
  *(uintptr_t *)(unk_2121BB4) = (uintptr_t)("!hkLocalFrameGroup");
  *(uintptr_t *)(unk_2121BB8) = (uintptr_t)(sub_15872E0);
  *(uintptr_t *)(unk_2121BBC) = (uintptr_t)(sub_1587260);
  *(uintptr_t *)(unk_2121BC0) = (uintptr_t)(((uint32_t)(uintptr_t)&off_2097850));
  hkLocalFrameGroupTypeInfo = (uint32_t)(uintptr_t)("hkLocalFrameGroup");
  *(uintptr_t *)(unk_2121BC4) = (uintptr_t)(12);
  hkClass::Construct(
    (hkClass::Self *)&hkSimpleLocalFrameClass,
    "hkSimpleLocalFrame",
    (const hkClass::Self *)&hkLocalFrameClass,
    112,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20977C0,
    5,
    nullptr,
    nullptr,
    0,
    1u);
  hkStringPtr::Construct();
  hkSimpleLocalFrameTypeInfo[1] = (uint32_t)(uintptr_t)("!hkSimpleLocalFrame");
  hkSimpleLocalFrameTypeInfo[2] = (uint32_t)(uintptr_t)(sub_1587320);
  hkSimpleLocalFrameTypeInfo[3] = (uint32_t)(uintptr_t)(sub_1587280);
  hkSimpleLocalFrameTypeInfo[0] = (uint32_t)(uintptr_t)("hkSimpleLocalFrame");
  hkSimpleLocalFrameTypeInfo[4] = ((uint32_t)(uintptr_t)&off_2097BC8);
  hkSimpleLocalFrameTypeInfo[5] = 112;
  return hkSimpleLocalFrameTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_614  (binary VA: 0x1587678)
// Original: nullsub_614
// ----------------------------------------------------------------------------
void nullsub_614()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15876A0  (binary VA: 0x15876a0)
// Original: sub_15876A0
// ----------------------------------------------------------------------------
uint32_t * sub_15876A0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkFloat16Class,
    "hkFloat16",
    nullptr,
    2,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkFloat16::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkFloat16TypeInfo[0] = (uint32_t)(uintptr_t)("hkFloat16");
  hkFloat16TypeInfo[1] = (uint32_t)(uintptr_t)("!hkFloat16");
  hkFloat16TypeInfo[2] = 0;
  hkFloat16TypeInfo[4] = 0;
  hkFloat16TypeInfo[5] = 2;
  hkFloat16TypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkFloat16TypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_615  (binary VA: 0x1587f78)
// Original: nullsub_615
// ----------------------------------------------------------------------------
void nullsub_615()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_616  (binary VA: 0x1587f88)
// Original: nullsub_616
// ----------------------------------------------------------------------------
void nullsub_616()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_1587FD0  (binary VA: 0x1587fd0)
// Original: sub_1587FD0
// ----------------------------------------------------------------------------
uint32_t * sub_1587FD0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkAabbClass,
    "hkAabb",
    nullptr,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2038AE0,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkAabbTypeInfo = (uint32_t)(uintptr_t)("hkAabb");
  *(uintptr_t *)(unk_2121D14) = (uintptr_t)("!hkAabb");
  *(uintptr_t *)(unk_2121D18) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121D20) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121D24) = (uintptr_t)(32);
  *(uintptr_t *)(unk_2121D1C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkAabbUint32Class,
    "hkAabbUint32",
    nullptr,
    32,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2038A40,
    6,
    nullptr,
    nullptr,
    0,
    0);
  hkAabbUint32TypeInfo[0] = (uint32_t)(uintptr_t)("hkAabbUint32");
  hkAabbUint32TypeInfo[1] = (uint32_t)(uintptr_t)("!hkAabbUint32");
  hkAabbUint32TypeInfo[2] = 0;
  hkAabbUint32TypeInfo[4] = 0;
  hkAabbUint32TypeInfo[5] = 32;
  hkAabbUint32TypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkAabbUint32TypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1588450  (binary VA: 0x1588450)
// Original: sub_1588450
// ----------------------------------------------------------------------------
hkBsdSocket::Self * sub_1588450()
{
  int address;
  hkBsdSocket::Self *v1;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v1 = (hkBsdSocket::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)address + 44),
                        36);
  hkBsdSocket::Construct(v1, -1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1588520  (binary VA: 0x1588520)
// Original: sub_1588520
// ----------------------------------------------------------------------------
uint8_t * sub_1588520()
{
  hkSocket::s_platformNetInitialized[0] = 0;
  return (uint8_t *)(hkSocket::s_platformNetInitialized);
}

// ----------------------------------------------------------------------------
// Function: sub_158A4C0  (binary VA: 0x158a4c0)
// Original: sub_158A4C0
// ----------------------------------------------------------------------------
void sub_158A4C0()
{
  hkClass::Construct(
    (hkClass::Self *)&hkArrayStreamWriterClass,
    "hkArrayStreamWriter",
    nullptr,
    24,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_1590040  (binary VA: 0x1590040)
// Original: sub_1590040
// ----------------------------------------------------------------------------
void sub_1590040(hkClass::Self *a1, char *a2)
{
  hkString::Self *Name;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[3];
  typedef int _g4_t_v10[135];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v10)) > _g4_s2 ? (32u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);

  hkErrStream::Construct((hkErrStream::Self *)v9, (hkString::Self *)v10, 512);
  Name = (hkString::Self *)hkClass::getName(a1);
  v4 = hkOstream::opShl((int)(uintptr_t)(v9), (hkString::Self *)"Could not find the most derived class for virtual object ");
  v5 = hkOstream::opShl(v4, Name);
  v6 = hkOstream::opShl(v5, (hkString::Self *)" at ");
  v7 = hkOstream::opShl(v6, a2);
  hkOstream::opShl(v7, (hkString::Self *)". The object is replaced with HK_NULL.");
  hkError::messageWarning(
    (hkError::Self *)0x3476D70F,
    (int)(uintptr_t)(v10),
    "Reflection/Util/hkVariantDataUtil.cpp",
    (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_284)->st_value + 3,
    v8);
  hkErrStream::Destroy((hkErrStream::Self *)v9);
}

// ----------------------------------------------------------------------------
// Function: sub_15912B0  (binary VA: 0x15912b0)
// Original: sub_15912B0
// ----------------------------------------------------------------------------
void sub_15912B0()
{
  byte_2121DB0 = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_15912D0  (binary VA: 0x15912d0)
// Original: sub_15912D0
// ----------------------------------------------------------------------------
uint32_t * sub_15912D0(uint32_t *a1, int *a2, char *a3, uint32_t *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, ...)
{
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  va_list va;
  typedef int _g4_t_optval[4];
  typedef int _g4_t_v62;
  typedef int _g4_t_v63[3];
  typedef struct sockaddr _g4_t_addr;
  typedef uint32_t _g4_t_v65[3];
  typedef char _g4_t_v66;
  enum : size_t {
    _g4_s0 = 784u,
    _g4_s1 = (0u + sizeof(_g4_t_optval)) > _g4_s0 ? (0u + sizeof(_g4_t_optval)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v62)) > _g4_s1 ? (16u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v63)) > _g4_s2 ? (20u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_addr)) > _g4_s3 ? (32u + sizeof(_g4_t_addr)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v65)) > _g4_s4 ? (48u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v66)) > _g4_s5 ? (60u + sizeof(_g4_t_v66)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 0u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_addr &addr = *reinterpret_cast<_g4_t_addr *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 60u);

  va_start(va, a53);
  *(uint16_t *)addr.sa_data = __builtin_rotateright16((uint16_t)(uintptr_t)(a3), 8);
  v55 = a2[8];
  addr.sa_family = 2;
  *(uint32_t *)&addr.sa_data[2] = 0;
  optval[0] = 1;
  setsockopt(v55, 1, 2, optval, 4u);
  if ( bind(a2[8], &addr, 0x10u) == -1 || listen(a2[8], 2) == -1 )
  {
    G4_VCALL<void>(a2, 24);
    *a1 = 1;
    return a1;
  }
  else
  {
    v65[0] = (uint32_t)(uintptr_t)(&v66);
    v56 = *a2;
    v65[2] = -2147483520;
    v65[1] = 1;
    v66 = 0;
    (*(void (**)(int *, uint32_t *, int *))(v56 + 56))(a2, v65, &v62);
    hkErrStream::Construct((hkErrStream::Self *)v63, g4_va_cast<hkString::Self *>(va), 512);
    v57 = hkOstream::opShl((int)(uintptr_t)(v63), (hkString::Self *)"Listening on host [");
    v58 = hkOstream::opShl(v57, a4);
    v59 = hkOstream::opShl(v58, (hkString::Self *)"] port ");
    hkOstream::opShl(v59, a3);
    hkError::messageReport(
      (hkError::Self *)0xFFFFFFFF,
      ((int)(uintptr_t)g4_va_cast<void *>(va)),
      "System/Io/Platform/Bsd/hkBsdSocket.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_184)->st_shndx + 1);
    hkErrStream::Destroy((hkErrStream::Self *)v63);
    *a1 = 0;
    if ( a20 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
        (uint32_t *)(hkContainerTempAllocator::s_alloc),
        a18,
        a20 & 0x3FFFFFFF);
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_15918B0  (binary VA: 0x15918b0)
// Original: sub_15918B0
// ----------------------------------------------------------------------------
int sub_15918B0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15918D0  (binary VA: 0x15918d0)
// Original: sub_15918D0
// ----------------------------------------------------------------------------
int sub_15918D0(int a1)
{
  return ((hkcdPlanarCsgOperand::Construct((uint32_t *)(uintptr_t)(a1))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1591900  (binary VA: 0x1591900)
// Original: sub_1591900
// ----------------------------------------------------------------------------
void sub_1591900(hkcdPlanarCsgOperand::GeomSource::Self *a1)
{
  hkcdPlanarCsgOperand::GeomSource::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1591930  (binary VA: 0x1591930)
// Original: sub_1591930
// ----------------------------------------------------------------------------
int sub_1591930(int a1, int a2)
{
  { hkcdPlanarCsgOperand::GeomSource::Construct(); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_15919A0  (binary VA: 0x15919a0)
// Original: sub_15919A0
// ----------------------------------------------------------------------------
uint32_t * sub_15919A0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarCsgOperandGeomSourceClass,
    "hkcdPlanarCsgOperandGeomSource",
    nullptr,
    16,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2097C80,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkcdPlanarCsgOperandGeomSourceTypeInfo = (uint32_t)(uintptr_t)("hkcdPlanarCsgOperandGeomSource");
  *(uintptr_t *)(unk_2121E14) = (uintptr_t)("!hkcdPlanarCsgOperand::GeomSource");
  *(uintptr_t *)(unk_2121E20) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121E24) = (uintptr_t)(16);
  *(uintptr_t *)(unk_2121E18) = (uintptr_t)(sub_1591930);
  *(uintptr_t *)(unk_2121E1C) = (uintptr_t)(sub_1591900);
  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarCsgOperandClass,
    "hkcdPlanarCsgOperand",
    (const hkClass::Self *)&hkReferencedObjectClass,
    36,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdPlanarCsgOperand::Members,
    5,
    nullptr,
    nullptr,
    0,
    0);
  hkcdPlanarCsgOperand::Construct((uint32_t *)&v1);
  hkcdPlanarCsgOperandTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdPlanarCsgOperand");
  hkcdPlanarCsgOperandTypeInfo[2] = (uint32_t)(uintptr_t)(sub_15918D0);
  hkcdPlanarCsgOperandTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15918B0);
  hkcdPlanarCsgOperandTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdPlanarCsgOperand");
  hkcdPlanarCsgOperandTypeInfo[4] = v1;
  hkcdPlanarCsgOperandTypeInfo[5] = 36;
  return hkcdPlanarCsgOperandTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_1591B30  (binary VA: 0x1591b30)
// Original: sub_1591B30
// ----------------------------------------------------------------------------
int sub_1591B30(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_1591B50  (binary VA: 0x1591b50)
// Original: sub_1591B50
// ----------------------------------------------------------------------------
int sub_1591B50(int a1)
{
  return ((hkcdPlanarGeometryPolygonCollection::Construct((uint32_t *)(uintptr_t)(a1))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_1591B80  (binary VA: 0x1591b80)
// Original: sub_1591B80
// ----------------------------------------------------------------------------
int sub_1591B80()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 3536u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkcdPlanarGeometryPolygonCollection::Construct((uint32_t *)&v1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1591BE0  (binary VA: 0x1591be0)
// Original: sub_1591BE0
// ----------------------------------------------------------------------------
int sub_1591BE0()
{
  int result;

  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarGeometryPolygonCollectionClass,
    "hkcdPlanarGeometryPolygonCollection",
    (const hkClass::Self *)&hkcdPlanarGeometryPrimitivesCollection28Class,
    3456,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  result = sub_1591B80();
  hkcdPlanarGeometryPolygonCollectionTypeInfo = (uint32_t)(uintptr_t)("hkcdPlanarGeometryPolygonCollection");
  *(uintptr_t *)(unk_2121E84) = (uintptr_t)("!hkcdPlanarGeometryPolygonCollection");
  *(uintptr_t *)(unk_2121E90) = (uintptr_t)(result);
  *(uintptr_t *)(unk_2121E94) = (uintptr_t)(3456);
  *(uintptr_t *)(unk_2121E88) = (uintptr_t)(sub_1591B50);
  *(uintptr_t *)(unk_2121E8C) = (uintptr_t)(sub_1591B30);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1593BC0  (binary VA: 0x1593bc0)
// Original: sub_1593BC0
// ----------------------------------------------------------------------------
int sub_1593BC0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7;
  int v8;
  void *v9;
  hkLifoAllocator::Self **address;
  int v11;
  int v12;
  hkLifoAllocator::Self *v13;
  signed int v14;
  int result;
  hkLifoAllocator::Self **v16;
  hkLifoAllocator::Self *v17;
  char *v18;
  int v19;
  int v20;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef hkLifoAllocator::Self **_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef signed int _g4_t_v28;
  typedef char _g4_t_v29[4];
  typedef void *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef signed int _g4_t_v32;
  typedef void *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[2];
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int *_g4_t_v44;
  enum : size_t {
    _g4_s0 = 3632u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v28)) > _g4_s6 ? (20u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v29)) > _g4_s7 ? (24u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v31)) > _g4_s9 ? (32u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v32)) > _g4_s10 ? (36u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v33)) > _g4_s11 ? (40u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v34)) > _g4_s12 ? (44u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v35)) > _g4_s13 ? (48u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v36)) > _g4_s14 ? (60u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v37)) > _g4_s15 ? (68u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v38)) > _g4_s16 ? (72u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v39)) > _g4_s17 ? (76u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (3516u + sizeof(_g4_t_v40)) > _g4_s18 ? (3516u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (3520u + sizeof(_g4_t_v41)) > _g4_s19 ? (3520u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (3524u + sizeof(_g4_t_v42)) > _g4_s20 ? (3524u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (3528u + sizeof(_g4_t_v43)) > _g4_s21 ? (3528u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (3540u + sizeof(_g4_t_v44)) > _g4_s22 ? (3540u + sizeof(_g4_t_v44)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 3516u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 3520u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 3524u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 3528u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 3540u);

  v44 = &a3;
  v26 = a3;
  v25 = a4;
  v23 = a5;
  v22 = a6;
  v36[0] = ((uint32_t)(uintptr_t)&off_2097DB0);
  v36[1] = -65535;
  v37 = 0;
  v38 = 0;
  v39 = 0x80000000;
  v40 = 0;
  v41 = 0;
  v42 = 0x80000000;
  v43 = -1;
  hkcdPlanarGeometryPrimitives::Collection_28_8c884a::clear((hkcdPlanarGeometryPrimitives::Collection<28> *)v36);
  hkcdPlanarSolid::classifyPolygons(a1, a2, *(uint32_t *)(a1 + 20), v26, v25, v23, v22, v36);
  v36[0] = ((uint32_t)(uintptr_t)&off_2097DB0);
  v7 = v41;
  v30 = nullptr;
  v31 = 0;
  v8 = (v41 + 31) >> 5;
  v32 = 0x80000000;
  v34 = v8;
  if ( v8 == 0 )
  {
    v35 = v41;
    v33 = nullptr;
    v9 = nullptr;
LABEL_3:
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    goto LABEL_4;
  }
  v16 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v17 = *v16;
  v24 = v16;
  v28 = (4 * v8 + 127) & 0xFFFFFF80;
  v18 = *((char **)*v16 + 3);
  if ( v28 <= *((uint32_t *)v17 + 2) && (unsigned int)(uintptr_t)(&v18[v28]) <= *((uint32_t *)v17 + 4) )
    *((uint32_t *)v17 + 3) = (uint32_t)(uintptr_t)(&v18[v28]);
  else
    v18 = (char *)hkLifoAllocator::allocateFromNewSlab(v17, v28);
  v30 = v18;
  v33 = v18;
  v32 = v8 | 0x80000000;
  v19 = v8 & 0x3FFFFFFF;
  v35 = v7;
  if ( v8 <= (v8 & 0x3FFFFFFF) )
  {
    v9 = v18;
    goto LABEL_3;
  }
  v20 = 2 * v19;
  if ( 2 * v19 < v8 )
    v20 = v8;
  hkArrayUtil::reserve(
    (hkArrayUtil::Self *)v29,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (int *)&v30,
    v20,
    4);
  v9 = v30;
  address = v24;
LABEL_4:
  v31 = v8;
  if ( v8 > 0 )
  {
    v27 = (int)(uintptr_t)(address);
    memset(v9, 0, 4 * v8);
    v9 = v30;
    address = (hkLifoAllocator::Self **)v27;
  }
  v11 = v43;
  if ( v43 != -1 )
  {
    while ( 1 )
    {
      *((uint32_t *)v9 + (v11 >> 5)) |= 1 << v11;
      v43 = *(uint32_t *)(v40 + 8 * v43);
      v11 = v43;
      if ( v43 == -1 )
        break;
      v9 = v30;
    }
    v9 = v30;
  }
  v12 = 0;
  v13 = *address;
  v41 = 0;
  if ( v33 != v9 )
    v12 = v31;
  v31 = v12;
  v14 = (4 * v34 + 127) & 0xFFFFFF80;
  if ( v14 > *((uint32_t *)v13 + 2) || *((void **)v13 + 3) != (char *)v33 + v14 || v33 == *((void **)v13 + 5) )
    hkLifoAllocator::slowBlockFree(v13, (char *)v33, (4 * v34 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v13 + 3) = (uint32_t)(uintptr_t)(v33);
  v31 = 0;
  if ( v32 >= 0 )
    (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v30,
      4 * v32);
  v41 = 0;
  if ( v42 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v40,
      8 * v42);
  v40 = 0;
  v42 = 0x80000000;
  v36[0] = ((uint32_t)(uintptr_t)&off_2097D90);
  result = v39;
  v38 = 0;
  if ( v39 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v37,
             4 * v39);
  return result;
}



// ============================================================================
// Address:   0x1596060 (size: 318 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN15hkcdOperandImpl7SrcPolyEPFbRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkcdOperandImpl::SrcPoly,bool (*)(hkcdOperandImpl::SrcPoly const&,hkcdOperandImpl::SrcPoly const&)>(hkcdOperandImpl::SrcPoly *,int,int,bool (*)(hkcdOperandImpl::SrcPoly const&,hkcdOperandImpl::SrcPoly const&))
// ============================================================================
void hkAlgorithm::quickSortRecursive_767db1(
        hkAlgorithm::Self *self,
        hkcdOperandImpl::SrcPoly::Self *a2,
        int a3,
        int (*a4)(int *, char *))
{
  hkcdOperandImpl::SrcPoly::Self *i;
  int v5;
  int *v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  char v11;
  int v12;
  int v13;
  typedef bool (*_g4_t_v14)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);
  typedef int _g4_t_v15;
  typedef char *_g4_t_j;
  typedef int *_g4_t_v17;
  typedef int *_g4_t_v18;
  typedef uint32_t _g4_t_v19[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_j)) > _g4_s2 ? (16u + sizeof(_g4_t_j)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  for ( i = a2; ; a2 = i )
  {
    v5 = a3;
    v6 = (int *)((char *)self + 8 * (((int)(uintptr_t)(i) + a3) >> 1));
    v7 = *v6;
    v8 = v6[1];
    v19[0] = v7;
    v19[1] = v8;
    v17 = (int *)((char *)self + 8 * (uint32_t)(uintptr_t)(a2));
    v9 = (char *)a2 + 1;
    for ( j = (char *)a2 + 1; ; v9 = j )
    {
      v15 = (int)(uintptr_t)(v9 - 1);
      if ( (uint8_t)a4(v17, (char *)v19) == 0 )
      {
        v10 = (char *)self + 8 * v5;
        while ( 1 )
        {
          v18 = (int *)v10;
          v11 = a4((int *)(v19), v10);
          v10 -= 8;
          if ( v11 == 0 )
            break;
          --v5;
        }
        if ( v15 > v5 )
          break;
        if ( v15 != v5 )
        {
          v12 = *v18;
          *v18 = *v17;
          v13 = v18[1];
          v18[1] = v17[1];
          *v17 = v12;
          v17[1] = v13;
        }
        --v5;
        v15 = (int)(uintptr_t)(j);
        if ( v5 < (int)(uintptr_t)(j) )
          break;
      }
      ++j;
      v17 += 2;
    }
    if ( (int)(uintptr_t)(a2) < v5 )
      break;
    i = (hkcdOperandImpl::SrcPoly::Self *)v15;
    if ( a3 <= v15 )
      return;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_767db1(
    self,
    a2,
    v5,
    (int (*)(int *, char *))(uintptr_t)(a4));
  i = (hkcdOperandImpl::SrcPoly::Self *)v15;
  if ( a3 > v15 )
    goto LABEL_10;
}


// ============================================================================
// Address:   0x15961a0 (size: 514 bytes)
// Symbol:    sub_15961A0
// Demangled: sub_15961A0
// ============================================================================
bool (*sub_15961A0(
        hkAlgorithm::Self *a1,
        int a2))(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *)
{
  int v2;
  bool (*v3)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);
  unsigned int v4;
  bool (*v5)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);
  int *v6;
  int v7;
  int *v8;
  unsigned int v9;
  int v10;
  bool (*result)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);
  bool (*j)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);
  int *v13;
  unsigned int v14;
  int v15;
  int *v16;
  unsigned int v17;
  int v18;
  bool (*i)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);
  bool (*v20)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);
  int v21;
  bool (*v22)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);
  int v23;
  bool (*v25)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);
  hkcdOperandImpl::SrcPoly::Self *v26;
  int v27;
  bool (*v29)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *);

  v2 = a2;
  v26 = nullptr;
  v3 = nullptr;
  while ( 1 )
  {
    v4 = *((uint32_t *)a1 + 2 * (((int)(uintptr_t)(v3) + v2) >> 1) + 1);
    v5 = (bool (*)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *))((char *)v3 + 1);
    v6 = (int *)((char *)a1 + 8 * (uint32_t)(uintptr_t)(v3));
    v29 = v5;
    v7 = v2;
    for ( i = v5; ; v5 = i )
    {
      v25 = (bool (*)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *))((char *)v5 - 1);
      if ( v4 <= v6[1] )
      {
        v8 = (int *)((char *)a1 + 8 * v7);
        v9 = v8[1];
        if ( v4 < v9 )
        {
          v10 = (int)(uintptr_t)(a1) + 8 * v7 - 8;
          do
          {
            v8 = (int *)v10;
            v10 -= 8;
            v9 = *(uint32_t *)(v10 + 12);
            --v7;
          }
          while ( v4 < v9 );
        }
        if ( v7 < (int)(uintptr_t)(v25) )
          break;
        if ( (bool (*)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *))v7 != v25 )
        {
          v21 = *v8;
          *v8 = *v6;
          v8[1] = v6[1];
          *v6 = v21;
          v6[1] = v9;
        }
        --v7;
        v25 = i;
        if ( v7 < (int)(uintptr_t)(i) )
          break;
      }
      i = (bool (*)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *))((char *)i + 1);
      v6 += 2;
    }
    v27 = v7;
    if ( (int)(uintptr_t)(v26) < v7 )
    {
      for ( j = v29; ; j = (bool (*)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *))((char *)v22 + 1) )
      {
        v20 = j;
        v13 = (int *)((char *)a1 + 8 * (uint32_t)(uintptr_t)(v26));
        v14 = *((uint32_t *)a1 + 2 * (((int)(uintptr_t)(v26) + v27) >> 1) + 1);
        v15 = v27;
        while ( 1 )
        {
          v22 = (bool (*)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *))((char *)j - 1);
          if ( v14 <= v13[1] )
          {
            v16 = (int *)((char *)a1 + 8 * v15);
            v17 = v16[1];
            if ( v17 > v14 )
            {
              v18 = (int)(uintptr_t)(a1) + 8 * v15 - 8;
              do
              {
                v16 = (int *)v18;
                v18 -= 8;
                v17 = *(uint32_t *)(v18 + 12);
                --v15;
              }
              while ( v14 < v17 );
            }
            if ( v15 < (int)(uintptr_t)(v22) )
              break;
            if ( (bool (*)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *))v15 != v22 )
            {
              v23 = *v16;
              *v16 = *v13;
              v16[1] = v13[1];
              *v13 = v23;
              v13[1] = v17;
            }
            --v15;
            v22 = v20;
            if ( v15 < (int)(uintptr_t)(v20) )
              break;
          }
          v20 = (bool (*)(const hkcdOperandImpl::SrcPoly::Self *, const hkcdOperandImpl::SrcPoly::Self *))((char *)v20 + 1);
          v13 += 2;
          j = v20;
        }
        if ( (int)(uintptr_t)(v26) < v15 )
          hkAlgorithm::quickSortRecursive_767db1(
            a1,
            v26,
            v15,
            (int (*)(int *, char *))hkcdOperandImpl::SrcPoly::less);
        if ( v27 <= (int)(uintptr_t)(v22) )
          break;
        v26 = (hkcdOperandImpl::SrcPoly::Self *)v22;
      }
    }
    result = v25;
    if ( a2 <= (int)(uintptr_t)(v25) )
      break;
    v26 = (hkcdOperandImpl::SrcPoly::Self *)v25;
    v3 = v25;
    v2 = a2;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_unsigned_int_hkAlgorithm_24f5d6  (binary VA: 0x15963b0)
// Original: hkAlgorithm::quickSortRecursive<unsigned int,hkAlgorithm::less<unsigned int>>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_unsigned_int_hkAlgorithm_24f5d6(int a1, int a2, int a3)
{
  unsigned int v3;
  int v4;
  unsigned int *v5;
  unsigned int v6;
  int v7;
  int result;
  unsigned int v9;
  int i;
  unsigned int *v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  int j;
  unsigned int *v16;
  unsigned int v17;
  int v18;
  bool v19;
  unsigned int v20;
  int k;
  unsigned int *v22;
  unsigned int v23;
  int v24;
  bool v25;
  int v26;
  unsigned int v27;
  int m;
  unsigned int *v29;
  unsigned int v30;
  int v31;
  bool v32;
  int v33;
  unsigned int v34;
  int n;
  unsigned int *v36;
  unsigned int v37;
  int v38;
  bool v39;
  int v40;
  unsigned int v41;
  int ii;
  unsigned int *v43;
  unsigned int v44;
  int v45;
  bool v46;
  int v47;
  unsigned int v48;
  int jj;
  unsigned int *v50;
  unsigned int v51;
  int v52;
  int kk;
  unsigned int v54;
  int v55;
  unsigned int *v56;
  unsigned int v57;
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
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;

  while ( 1 )
  {
    v3 = *(uint32_t *)(a1 + 4 * ((a3 + a2) >> 1));
    v75 = a2 + 1;
    v4 = a2 + 1;
    v69 = a3;
    while ( 1 )
    {
      v66 = v4 - 1;
      if ( v3 <= *(uint32_t *)(a1 + 4 * v4 - 4) )
      {
        v5 = (unsigned int *)(a1 + 4 * v69);
        v6 = *v5;
        if ( v3 < *v5 )
        {
          v7 = a1 + 4 * v69 - 4;
          do
          {
            v5 = (unsigned int *)v7;
            v7 -= 4;
            v6 = *(uint32_t *)(v7 + 4);
            --v69;
          }
          while ( v3 < v6 );
        }
        if ( v69 < v66 )
          break;
        if ( v69 != v66 )
        {
          *v5 = *(uint32_t *)(a1 + 4 * v4 - 4);
          *(uint32_t *)(a1 + 4 * v4 - 4) = v6;
        }
        --v69;
        v66 = v4;
        if ( v69 < v4 )
          break;
      }
      ++v4;
    }
    if ( a2 < v69 )
    {
      while ( 1 )
      {
        v68 = v69;
        v9 = *(uint32_t *)(a1 + 4 * ((v69 + a2) >> 1));
        for ( i = v75; ; ++i )
        {
          v65 = i - 1;
          if ( v9 <= *(uint32_t *)(a1 + 4 * i - 4) )
          {
            v11 = (unsigned int *)(a1 + 4 * v68);
            v12 = *v11;
            if ( v9 < *v11 )
            {
              v13 = a1 + 4 * v68 - 4;
              do
              {
                v11 = (unsigned int *)v13;
                v13 -= 4;
                v12 = *(uint32_t *)(v13 + 4);
                --v68;
              }
              while ( v9 < v12 );
            }
            if ( v68 < v65 )
              break;
            if ( v68 != v65 )
            {
              *v11 = *(uint32_t *)(a1 + 4 * i - 4);
              *(uint32_t *)(a1 + 4 * i - 4) = v12;
            }
            --v68;
            v65 = i;
            if ( v68 < i )
              break;
          }
        }
        if ( a2 < v68 )
        {
          while ( 1 )
          {
            v67 = v68;
            v14 = *(uint32_t *)(a1 + 4 * ((v68 + a2) >> 1));
            for ( j = v75; ; ++j )
            {
              v64 = j - 1;
              if ( v14 <= *(uint32_t *)(a1 + 4 * j - 4) )
              {
                v16 = (unsigned int *)(a1 + 4 * v67);
                v17 = *v16;
                if ( v14 < *v16 )
                {
                  v18 = a1 + 4 * v67 - 4;
                  do
                  {
                    v16 = (unsigned int *)v18;
                    v18 -= 4;
                    v17 = *(uint32_t *)(v18 + 4);
                    --v67;
                  }
                  while ( v14 < v17 );
                }
                if ( v67 < v64 )
                  break;
                if ( v67 != v64 )
                {
                  *v16 = *(uint32_t *)(a1 + 4 * j - 4);
                  *(uint32_t *)(a1 + 4 * j - 4) = v17;
                }
                --v67;
                v64 = j;
                if ( v67 < j )
                  break;
              }
            }
            if ( a2 < v67 )
            {
              while ( 1 )
              {
                v71 = v67;
                v20 = *(uint32_t *)(a1 + 4 * ((v67 + a2) >> 1));
                for ( k = v75; ; ++k )
                {
                  v62 = k - 1;
                  if ( v20 <= *(uint32_t *)(a1 + 4 * k - 4) )
                  {
                    v22 = (unsigned int *)(a1 + 4 * v71);
                    v23 = *v22;
                    if ( v20 >= *v22 )
                    {
                      v19 = v71 == v62;
                      if ( v71 < v62 )
                        break;
                    }
                    else
                    {
                      v24 = a1 + 4 * v71 - 4;
                      do
                      {
                        v22 = (unsigned int *)v24;
                        v24 -= 4;
                        v23 = *(uint32_t *)(v24 + 4);
                        --v71;
                      }
                      while ( v20 < v23 );
                      v19 = v71 == v62;
                      if ( v71 < v62 )
                        break;
                    }
                    if ( !v19 )
                    {
                      *v22 = *(uint32_t *)(a1 + 4 * k - 4);
                      *(uint32_t *)(a1 + 4 * k - 4) = v23;
                    }
                    --v71;
                    v62 = k;
                    if ( v71 < k )
                      break;
                  }
                }
                if ( a2 < v71 )
                {
                  while ( 1 )
                  {
                    v26 = v71;
                    v82 = v75;
                    v27 = *(uint32_t *)(a1 + 4 * ((v71 + a2) >> 1));
                    for ( m = v75; ; m = v82 )
                    {
                      v61 = m - 1;
                      v77 = *(uint32_t *)(a1 + 4 * m - 4);
                      if ( v27 <= v77 )
                      {
                        v29 = (unsigned int *)(4 * v26 + a1);
                        v30 = *v29;
                        if ( v27 >= *v29 )
                        {
                          v25 = v26 == v61;
                          if ( v26 < v61 )
                            break;
                        }
                        else
                        {
                          v31 = a1 + 4 * v26 - 4;
                          do
                          {
                            v29 = (unsigned int *)v31;
                            v31 -= 4;
                            v30 = *(uint32_t *)(v31 + 4);
                            --v26;
                          }
                          while ( v27 < v30 );
                          v25 = v26 == v61;
                          if ( v26 < v61 )
                            break;
                        }
                        if ( !v25 )
                        {
                          *v29 = v77;
                          *(uint32_t *)(a1 + 4 * v82 - 4) = v30;
                        }
                        --v26;
                        v61 = v82;
                        if ( v26 < v82 )
                          break;
                      }
                      ++v82;
                    }
                    v60 = v26;
                    if ( a2 < v26 )
                    {
                      while ( 1 )
                      {
                        v33 = v60;
                        v83 = v75;
                        v34 = *(uint32_t *)(a1 + 4 * ((v60 + a2) >> 1));
                        for ( n = v75; ; n = v83 )
                        {
                          v70 = n - 1;
                          v78 = *(uint32_t *)(a1 + 4 * n - 4);
                          if ( v34 <= v78 )
                          {
                            v36 = (unsigned int *)(a1 + 4 * v33);
                            v37 = *v36;
                            if ( v34 >= *v36 )
                            {
                              v32 = v33 == v70;
                              if ( v33 < v70 )
                                break;
                            }
                            else
                            {
                              v38 = a1 + 4 * v33 - 4;
                              do
                              {
                                v36 = (unsigned int *)v38;
                                v38 -= 4;
                                v37 = *(uint32_t *)(v38 + 4);
                                --v33;
                              }
                              while ( v34 < v37 );
                              v32 = v33 == v70;
                              if ( v33 < v70 )
                                break;
                            }
                            if ( !v32 )
                            {
                              *v36 = v78;
                              *(uint32_t *)(a1 + 4 * v83 - 4) = v37;
                            }
                            --v33;
                            v70 = v83;
                            if ( v33 < v83 )
                              break;
                          }
                          ++v83;
                        }
                        v59 = v33;
                        if ( a2 < v33 )
                        {
                          while ( 1 )
                          {
                            v40 = v59;
                            v84 = v75;
                            v41 = *(uint32_t *)(a1 + 4 * ((v59 + a2) >> 1));
                            for ( ii = v75; ; ii = v84 )
                            {
                              v73 = ii - 1;
                              v79 = *(uint32_t *)(a1 + 4 * ii - 4);
                              if ( v41 <= v79 )
                              {
                                v43 = (unsigned int *)(4 * v40 + a1);
                                v44 = *v43;
                                if ( *v43 <= v41 )
                                {
                                  v39 = v40 == v73;
                                  if ( v40 < v73 )
                                    break;
                                }
                                else
                                {
                                  v45 = a1 + 4 * v40 - 4;
                                  do
                                  {
                                    v43 = (unsigned int *)v45;
                                    v45 -= 4;
                                    v44 = *(uint32_t *)(v45 + 4);
                                    --v40;
                                  }
                                  while ( v41 < v44 );
                                  v39 = v40 == v73;
                                  if ( v40 < v73 )
                                    break;
                                }
                                if ( !v39 )
                                {
                                  *v43 = v79;
                                  *(uint32_t *)(a1 + 4 * v84 - 4) = v44;
                                }
                                --v40;
                                v73 = v84;
                                if ( v40 < v84 )
                                  break;
                              }
                              ++v84;
                            }
                            v63 = v40;
                            if ( a2 < v40 )
                            {
                              while ( 1 )
                              {
                                v47 = v63;
                                v48 = *(uint32_t *)(a1 + 4 * ((v63 + a2) >> 1));
                                v85 = v75;
                                for ( jj = v75; ; jj = v85 )
                                {
                                  v74 = jj - 1;
                                  v80 = *(uint32_t *)(a1 + 4 * jj - 4);
                                  if ( v48 <= v80 )
                                  {
                                    v50 = (unsigned int *)(a1 + 4 * v47);
                                    v51 = *v50;
                                    if ( *v50 <= v48 )
                                    {
                                      v46 = v47 == v74;
                                      if ( v47 < v74 )
                                        break;
                                    }
                                    else
                                    {
                                      v52 = a1 + 4 * v47 - 4;
                                      do
                                      {
                                        v50 = (unsigned int *)v52;
                                        v52 -= 4;
                                        v51 = *(uint32_t *)(v52 + 4);
                                        --v47;
                                      }
                                      while ( v48 < v51 );
                                      v46 = v47 == v74;
                                      if ( v47 < v74 )
                                        break;
                                    }
                                    if ( !v46 )
                                    {
                                      *v50 = v80;
                                      *(uint32_t *)(a1 + 4 * v85 - 4) = v51;
                                    }
                                    --v47;
                                    v74 = v85;
                                    if ( v47 < v85 )
                                      break;
                                  }
                                  ++v85;
                                }
                                v72 = v47;
                                if ( a2 < v47 )
                                {
                                  for ( kk = v75; ; kk = v81 + 1 )
                                  {
                                    v86 = kk;
                                    v54 = *(uint32_t *)(a1 + 4 * ((v72 + a2) >> 1));
                                    v55 = v72;
                                    while ( 1 )
                                    {
                                      v81 = kk - 1;
                                      v76 = *(uint32_t *)(a1 + 4 * kk - 4);
                                      if ( v54 <= v76 )
                                      {
                                        v56 = (unsigned int *)(a1 + 4 * v55);
                                        v57 = *v56;
                                        if ( v54 < *v56 )
                                        {
                                          v58 = a1 + 4 * v55 - 4;
                                          do
                                          {
                                            v56 = (unsigned int *)v58;
                                            v58 -= 4;
                                            v57 = *(uint32_t *)(v58 + 4);
                                            --v55;
                                          }
                                          while ( v54 < v57 );
                                        }
                                        if ( v55 < v81 )
                                          break;
                                        if ( v55 != v81 )
                                        {
                                          *v56 = v76;
                                          *(uint32_t *)(a1 + 4 * v86 - 4) = v57;
                                        }
                                        --v55;
                                        v81 = v86;
                                        if ( v55 < v86 )
                                          break;
                                      }
                                      kk = ++v86;
                                    }
                                    if ( a2 < v55 )
                                      hkAlgorithm::quickSortRecursive_unsigned_int_hkAlgorithm_24f5d6(
                                        a1,
                                        a2,
                                        v55);
                                    if ( v72 <= v81 )
                                      break;
                                    a2 = v81;
                                  }
                                }
                                if ( v63 <= v74 )
                                  break;
                                a2 = v74;
                                v75 = v74 + 1;
                              }
                            }
                            if ( v59 <= v73 )
                              break;
                            a2 = v73;
                            v75 = v73 + 1;
                          }
                        }
                        if ( v60 <= v70 )
                          break;
                        a2 = v70;
                        v75 = v70 + 1;
                      }
                    }
                    if ( v71 <= v61 )
                      break;
                    a2 = v61;
                    v75 = v61 + 1;
                  }
                }
                if ( v67 <= v62 )
                  break;
                a2 = v62;
                v75 = v62 + 1;
              }
            }
            if ( v68 <= v64 )
              break;
            a2 = v64;
            v75 = v64 + 1;
          }
        }
        if ( v69 <= v65 )
          break;
        a2 = v65;
        v75 = v65 + 1;
      }
    }
    result = v66;
    if ( a3 <= v66 )
      return result;
    a2 = v66;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_159A1F0  (binary VA: 0x159a1f0)
// Original: sub_159A1F0
// ----------------------------------------------------------------------------
uint32_t * sub_159A1F0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2097D90);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_159A210  (binary VA: 0x159a210)
// Original: sub_159A210
// ----------------------------------------------------------------------------
int sub_159A210(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_159A230  (binary VA: 0x159a230)
// Original: sub_159A230
// ----------------------------------------------------------------------------
uint32_t * sub_159A230()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarGeometryPrimitivesCollection28Class,
    "hkcdPlanarGeometryPrimitivesCollection28",
    (const hkClass::Self *)&hkReferencedObjectClass,
    3456,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdPlanarGeometryPrimitives::Collection<28>::Members,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkcdPlanarGeometryPrimitivesCollection28TypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdPlanarGeometryPrimitivesCollection28_typename");
  hkcdPlanarGeometryPrimitivesCollection28TypeInfo[2] = (uint32_t)(uintptr_t)(sub_159A1F0);
  hkcdPlanarGeometryPrimitivesCollection28TypeInfo[3] = (uint32_t)(uintptr_t)(sub_159A210);
  hkcdPlanarGeometryPrimitivesCollection28TypeInfo[0] = (uint32_t)(uintptr_t)("hkcdPlanarGeometryPrimitivesCollection28");
  hkcdPlanarGeometryPrimitivesCollection28TypeInfo[4] = ((uint32_t)(uintptr_t)&off_2097D90);
  hkcdPlanarGeometryPrimitivesCollection28TypeInfo[5] = 3456;
  return hkcdPlanarGeometryPrimitivesCollection28TypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_159A300  (binary VA: 0x159a300)
// Original: sub_159A300
// ----------------------------------------------------------------------------
int sub_159A300(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: nullsub_617  (binary VA: 0x159a328)
// Original: nullsub_617
// ----------------------------------------------------------------------------
void nullsub_617()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_618  (binary VA: 0x159a338)
// Original: nullsub_618
// ----------------------------------------------------------------------------
void nullsub_618()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_619  (binary VA: 0x159a348)
// Original: nullsub_619
// ----------------------------------------------------------------------------
void nullsub_619()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_159A350  (binary VA: 0x159a350)
// Original: sub_159A350
// ----------------------------------------------------------------------------
int sub_159A350(int a1)
{
  return (int)(uintptr_t)(hkcdShape::Construct(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_159A400  (binary VA: 0x159a400)
// Original: sub_159A400
// ----------------------------------------------------------------------------
uint32_t * sub_159A400()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  dword_20C7240 = (int)hkcdShapeDispatchTypeShapeDispatchTypeEnumEnum;
  dword_20C7270 = (int)hkcdShapeInfoCodecTypeShapeInfoCodecTypeEnumEnum;
  hkClass::Construct(
    (hkClass::Self *)&hkcdShapeClass,
    "hkcdShape",
    (const hkClass::Self *)&hkReferencedObjectClass,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_20C7220,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkcdShape::Construct(&v1);
  *(uintptr_t *)(unk_2122054) = (uintptr_t)("!hkcdShape");
  *(uintptr_t *)(unk_2122058) = (uintptr_t)(sub_159A350);
  *(uintptr_t *)(unk_212205C) = (uintptr_t)(sub_159A300);
  hkcdShapeTypeInfo = (uint32_t)(uintptr_t)("hkcdShape");
  *(uintptr_t *)(unk_2122060) = (uintptr_t)(v1);
  *(uintptr_t *)(unk_2122064) = (uintptr_t)(12);
  hkClass::Construct(
    (hkClass::Self *)&hkcdShapeDispatchTypeClass,
    "hkcdShapeDispatchType",
    nullptr,
    1,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2038D04,
    1,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkcdShapeDispatchTypeTypeInfo = (uint32_t)(uintptr_t)("hkcdShapeDispatchType");
  *(uintptr_t *)(unk_2121FF4) = (uintptr_t)("!hkcdShapeDispatchType");
  *(uintptr_t *)(unk_2121FF8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122000) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122004) = (uintptr_t)(1);
  *(uintptr_t *)(unk_2121FFC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdShapeInfoCodecTypeClass,
    "hkcdShapeInfoCodecType",
    nullptr,
    1,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2038CD8,
    1,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkcdShapeInfoCodecTypeTypeInfo = (uint32_t)(uintptr_t)("hkcdShapeInfoCodecType");
  *(uintptr_t *)(unk_2121F94) = (uintptr_t)("!hkcdShapeInfoCodecType");
  *(uintptr_t *)(unk_2121F98) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121FA0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2121FA4) = (uintptr_t)(1);
  *(uintptr_t *)(unk_2121F9C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdShapeTypeClass,
    "hkcdShapeType",
    nullptr,
    1,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2038B80,
    1,
    nullptr,
    0,
    nullptr,
    nullptr,
    0,
    0);
  hkcdShapeTypeTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdShapeType");
  hkcdShapeTypeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdShapeType");
  hkcdShapeTypeTypeInfo[2] = 0;
  hkcdShapeTypeTypeInfo[4] = 0;
  hkcdShapeTypeTypeInfo[5] = 1;
  hkcdShapeTypeTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkcdShapeTypeTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_159A700  (binary VA: 0x159a700)
// Original: sub_159A700
// ----------------------------------------------------------------------------
int sub_159A700(int a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v2 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v1, 12, a1, v2);
}

// ----------------------------------------------------------------------------
// Function: sub_159A7D0  (binary VA: 0x159a7d0)
// Original: sub_159A7D0
// ----------------------------------------------------------------------------
unsigned int sub_159A7D0(uint32_t *a1, uint32_t *a2)
{
  int v2;
  char v3; // di
  char v4;

  v2 = a2[2];
  v3 = 4 * (a1[2] < v2) + 8;
  v4 = 4 * (a1[2] < v2);
  if ( a1[3] < a2[3] )
    v4 = v3;
  return (0xFAF8FAF0 >> ((4 * (v4 | (*a1 < *a2) | (2 * (a1[1] < a2[1])))) & 0x1C | (*a1 == *a2) | (2 * (a1[1] == a2[1]))))
       & 1;
}

// ----------------------------------------------------------------------------
// Function: sub_159A9D0  (binary VA: 0x159a9d0)
// Original: sub_159A9D0
// ----------------------------------------------------------------------------
unsigned int sub_159A9D0(uint32_t *a1, uint32_t *a2)
{
  int v2;
  char v3; // di
  char v4;

  v2 = a2[2];
  v3 = 4 * (a1[2] < v2) + 8;
  v4 = 4 * (a1[2] < v2);
  if ( a1[3] < a2[3] )
    v4 = v3;
  return (0xFAF8FAF0 >> ((4 * (v4 | (*a1 < *a2) | (2 * (a1[1] < a2[1])))) & 0x1C | (*a1 == *a2) | (2 * (a1[1] == a2[1]))))
       & 1;
}

// ----------------------------------------------------------------------------
// Function: sub_159AA70  (binary VA: 0x159aa70)
// Original: sub_159AA70
// ----------------------------------------------------------------------------
unsigned int sub_159AA70(uint32_t *a1, uint32_t *a2)
{
  int v2;
  char v3; // di
  char v4;

  v2 = a2[2];
  v3 = 4 * (a1[2] < v2) + 8;
  v4 = 4 * (a1[2] < v2);
  if ( a1[3] < a2[3] )
    v4 = v3;
  return (0xFAF8FAF0 >> ((4 * (v4 | (*a1 < *a2) | (2 * (a1[1] < a2[1])))) & 0x1C | (*a1 == *a2) | (2 * (a1[1] == a2[1]))))
       & 1;
}

// ----------------------------------------------------------------------------
// Function: sub_159AB10  (binary VA: 0x159ab10)
// Original: sub_159AB10
// ----------------------------------------------------------------------------
unsigned int sub_159AB10(uint32_t *a1, uint32_t *a2)
{
  int v2;
  char v3; // di
  char v4;

  v2 = a2[2];
  v3 = 4 * (a1[2] < v2) + 8;
  v4 = 4 * (a1[2] < v2);
  if ( a1[3] < a2[3] )
    v4 = v3;
  return (0xFAF8FAF0 >> ((4 * (v4 | (*a1 < *a2) | (2 * (a1[1] < a2[1])))) & 0x1C | (*a1 == *a2) | (2 * (a1[1] == a2[1]))))
       & 1;
}

// ----------------------------------------------------------------------------
// Function: hkInt128Vector4::setMul_3_7b7700  (binary VA: 0x159bf70)
// Original: hkInt128Vector4::setMul<3>
// ----------------------------------------------------------------------------
int hkInt128Vector4::setMul_3_7b7700(int a1, unsigned int *a2, unsigned int *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int64_t v7; // rax
  int v8;
  int v9;
  int64_t v10; // rax
  int64_t v11; // rax
  uint64_t v12; // kr18_8
  unsigned int v13;
  uint64_t v14; // kr38_8
  int64_t v15; // rax
  int64_t v16; // rax
  int v17;
  int v18; // kr20_4
  int v19;
  int v20;
  int v21;
  uint64_t v22; // rax
  int v23;
  int v24; // kr24_4
  int v25;
  int v26;
  int v27;
  uint64_t v28; // rax
  int v29;
  int v30; // kr28_4
  int v31;
  int v32;
  int v33;
  uint64_t v34; // rax
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  int64_t v40;
  unsigned int v41;
  unsigned int v42;
  uint64_t v43;
  unsigned int v44;
  int v45;
  uint64_t v46;
  unsigned int v47;
  uint64_t v48;
  unsigned int v49;
  int v50;
  int64_t v51;
  uint64_t v52;
  unsigned int v53;
  uint64_t v54;
  int64_t v55;
  int v56;
  int v57;
  uint64_t v58;
  unsigned int v59;
  int64_t v60;
  uint64_t v61;
  int v62;
  int64_t v63;
  int64_t v64;
  int64_t v65;
  int64_t v66;
  int64_t v67;
  int v68;
  int64_t v69;
  uint64_t v70;
  int64_t v71;
  int v72;
  int64_t v73;
  int64_t v74;
  int v75;
  int64_t v76;
  int64_t v77;
  int64_t v78;

  v59 = *a2;
  v53 = a2[1];
  HIDWORD(v51) = a2[2];
  LODWORD(v51) = a2[3];
  v49 = a2[4];
  v50 = a2[5];
  v3 = (v50 >> 31) & 4;
  if ( (a2[7] & 0x80000000) != 0 )
    v3 = ((v50 >> 31) & 4) + 8;
  v72 = v3 | (v53 >> 31) | ((int)v51 >> 31) & 2;
  v47 = *a3;
  v45 = a3[1];
  v42 = a3[2];
  v57 = a3[3];
  v39 = a3[4];
  v56 = a3[5];
  v62 = a3[7];
  v4 = (v56 >> 31) & 4;
  if ( v62 < 0 )
    v4 = ((v56 >> 31) & 4) + 8;
  v68 = v4 | ((unsigned int)v45 >> 31) | (v57 >> 31) & 2;
  v5 = v51 == 0 ? 2 : 0;
  if ( (v49 | v50) == 0 )
    v5 = v51 == 0 ? 6 : 4;
  v6 = (v42 | v57) == 0 ? 2 : 0;
  if ( (v39 | v56) == 0 )
    v6 = (v42 | v57) == 0 ? 6 : 4;
  v75 = v68 & ~(v5 | (*((uint64_t *)a2 + 3) == 0 ? 8 : 0) | ((v53 | v59) == 0) | v72)
      | v72 & ~(v6 | (*((uint64_t *)a3 + 3) == 0 ? 8 : 0) | v68 | ((v45 | v47) == 0));
  v69 = __PAIR64__(v53, v59);
  if ( (v72 & 1) != 0 )
    v69 = -__SPAIR64__(v53, v59);
  v7 = __PAIR64__(v51, HIDWORD(v51));
  if ( (v72 & 2) != 0 )
    v7 = -__SPAIR64__(v51, HIDWORD(v51));
  v77 = v7;
  v60 = __PAIR64__(v50, v49);
  if ( (v72 & 4) != 0 )
    v60 = -__SPAIR64__(v50, v49);
  v8 = (v56 >> 31) & 4;
  if ( v62 < 0 )
    v8 = ((v56 >> 31) & 4) + 8;
  v9 = v8 | ((unsigned int)v45 >> 31) | (v57 >> 31) & 2;
  v63 = __PAIR64__(v45, v47);
  if ( (v8 & 1 | (v45 < 0)) != 0 )
    v63 = -__SPAIR64__(v45, v47);
  v10 = __PAIR64__(v57, v42);
  if ( (v9 & 2) != 0 )
    v10 = -__SPAIR64__(v57, v42);
  v78 = v10;
  v11 = __PAIR64__(v56, v39);
  if ( (v9 & 4) != 0 )
    v11 = -__SPAIR64__(v56, v39);
  v12 = (unsigned int)v77 * (uint64_t)(unsigned int)v78 + __PAIR64__(HIDWORD(v77) * (int)v78, 0);
  LODWORD(v58) = v77 * v78;
  HIDWORD(v58) = HIDWORD(v12) + HIDWORD(v78) * v77;
  v38 = HIDWORD(v69);
  v13 = v69;
  v37 = HIDWORD(v63);
  v54 = (unsigned int)v69 * (uint64_t)(unsigned int)v63;
  v70 = HIDWORD(v69) * (uint64_t)(unsigned int)v63;
  v41 = HIDWORD(v70);
  v14 = v54 + __PAIR64__(v70, 0);
  v44 = (HIDWORD(v63) * (uint64_t)v13) >> 32;
  HIDWORD(v64) = HIDWORD(v63) * v13;
  v36 = HIDWORD(v60);
  LODWORD(v64) = 0;
  v65 = v54 + __PAIR64__(v70, 0) + v64;
  v52 = (unsigned int)v60 * (uint64_t)(unsigned int)v11;
  v48 = (unsigned int)v11 * (uint64_t)HIDWORD(v60);
  v46 = (unsigned int)v60 * (uint64_t)HIDWORD(v11);
  v71 = v60 * (unsigned int)v11;
  v61 = v71 + __PAIR64__((int)v60 * HIDWORD(v11), 0);
  v43 = v41 + (uint64_t)v44;
  v40 = 1;
  if ( HIDWORD(v54) <= HIDWORD(v14) )
    v40 = HIDWORD(v54) >= HIDWORD(v14) && (unsigned int)v54 > (unsigned int)v14;
  v55 = 1;
  if ( HIDWORD(v14) <= HIDWORD(v65) )
    v55 = HIDWORD(v14) >= HIDWORD(v65) && (unsigned int)v14 > (unsigned int)v65;
  *(uint64_t *)(a1 + 8) = v55 + v43 + v40 + v38 * (uint64_t)v37;
  *(uint64_t *)a1 = v65;
  v66 = 1;
  if ( HIDWORD(v52) <= HIDWORD(v71) )
    v66 = HIDWORD(v52) >= HIDWORD(v71) && (unsigned int)v52 > (unsigned int)v71;
  v15 = v66 + v36 * (uint64_t)HIDWORD(v11);
  v67 = 1;
  v16 = HIDWORD(v48) + (uint64_t)HIDWORD(v46) + v15;
  if ( HIDWORD(v71) <= HIDWORD(v61) )
    v67 = HIDWORD(v71) >= HIDWORD(v61) && (unsigned int)v71 > (unsigned int)v61;
  *(uint64_t *)(a1 + 40) = v67 + v16;
  *(uint64_t *)(a1 + 32) = v61;
  *(uint64_t *)(a1 + 24) = (v12 > v58)
                       + ((HIDWORD(v77) * (uint64_t)(unsigned int)v78) >> 32)
                       + ((HIDWORD(v78) * (uint64_t)(unsigned int)v77) >> 32)
                       + ((unsigned int)v77 * (uint64_t)(unsigned int)v78 > v12)
                       + HIDWORD(v77) * (uint64_t)HIDWORD(v78);
  LODWORD(v16) = v77 * v78;
  *(uint64_t *)(a1 + 16) = v58;
  if ( (v75 & 1) != 0 )
  {
    v73 = ~*(uint64_t *)(a1 + 8);
    v18 = ~*(uint32_t *)a1;
    v17 = -*(uint32_t *)a1;
    v19 = ~*(uint32_t *)(a1 + 4);
    *(uint32_t *)a1 = v17;
    v20 = v19;
    v21 = v17;
    v22 = __PAIR64__(v20, v18) + 1;
    *(uint32_t *)(a1 + 4) = HIDWORD(v22);
    v16 = v73 + ((HIDWORD(v22) | v21) == 0);
    *(uint64_t *)(a1 + 8) = v16;
  }
  if ( (v75 & 2) != 0 )
  {
    v74 = ~*(uint64_t *)(a1 + 24);
    v24 = ~*(uint32_t *)(a1 + 16);
    v23 = -*(uint32_t *)(a1 + 16);
    v25 = ~*(uint32_t *)(a1 + 20);
    *(uint32_t *)(a1 + 16) = v23;
    v26 = v25;
    v27 = v23;
    v28 = __PAIR64__(v26, v24) + 1;
    *(uint32_t *)(a1 + 20) = HIDWORD(v28);
    v16 = v74 + ((HIDWORD(v28) | v27) == 0);
    *(uint64_t *)(a1 + 24) = v16;
  }
  if ( (v75 & 4) != 0 )
  {
    v76 = ~*(uint64_t *)(a1 + 40);
    v30 = ~*(uint32_t *)(a1 + 32);
    v29 = -*(uint32_t *)(a1 + 32);
    v31 = ~*(uint32_t *)(a1 + 36);
    *(uint32_t *)(a1 + 32) = v29;
    v32 = v31;
    v33 = v29;
    v34 = __PAIR64__(v32, v30) + 1;
    *(uint32_t *)(a1 + 36) = HIDWORD(v34);
    v16 = v76 + ((HIDWORD(v34) | v33) == 0);
    *(uint64_t *)(a1 + 40) = v16;
  }
  return v16;
}



// ============================================================================
// Address:   0x15a2430 (size: 364 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN22hkcdVertexGeometryImpl14VertexLinePairEPFbRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkcdVertexGeometryImpl::VertexLinePair,bool (*)(hkcdVertexGeometryImpl::VertexLinePair const&,hkcdVertexGeometryImpl::VertexLinePair const&)>(hkcdVertexGeometryImpl::VertexLinePair *,int,int,bool (*)(hkcdVertexGeometryImpl::VertexLinePair const&,hkcdVertexGeometryImpl::VertexLinePair const&))
// ============================================================================
void hkAlgorithm::quickSortRecursive_b1f75a(
        hkAlgorithm::Self *self,
        hkcdVertexGeometryImpl::VertexLinePair::Self *a2,
        int a3,
        int (*a4)(int *, char *))
{
  hkcdVertexGeometryImpl::VertexLinePair::Self *i;
  int v5;
  int *v6;
  int v7;
  int v8;
  char *v9;
  char v10;
  int v11;
  int v12;
  typedef bool (*_g4_t_v13)(const hkcdVertexGeometryImpl::VertexLinePair::Self *, const hkcdVertexGeometryImpl::VertexLinePair::Self *);
  typedef int _g4_t_v14;
  typedef char *_g4_t_j;
  typedef int *_g4_t_v16;
  typedef int *_g4_t_v17;
  typedef uint32_t _g4_t_v18[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_j)) > _g4_s2 ? (16u + sizeof(_g4_t_j)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  for ( i = a2; ; a2 = i )
  {
    v5 = a3;
    v6 = (int *)((char *)self + 8 * (((int)(uintptr_t)(i) + a3) >> 1));
    v7 = *v6;
    v8 = v6[1];
    v18[0] = v7;
    v18[1] = v8;
    v16 = (int *)((char *)self + 8 * (uint32_t)(uintptr_t)(a2));
    for ( j = (char *)a2 + 1; ; ++j )
    {
      v14 = (int)(uintptr_t)(j - 1);
      if ( (uint8_t)a4(v16, (char *)v18) == 0 )
      {
        v9 = (char *)self + 8 * v5;
        while ( 1 )
        {
          v17 = (int *)v9;
          v10 = a4((int *)(v18), v9);
          v9 -= 8;
          if ( v10 == 0 )
            break;
          --v5;
        }
        if ( v14 > v5 )
          break;
        if ( v14 != v5 )
        {
          v11 = *v17;
          *v17 = *v16;
          v12 = v17[1];
          v17[1] = v16[1];
          *v16 = v11;
          v16[2 * (uint32_t)(uintptr_t)(a2) + 1 + -2 * (uint32_t)(uintptr_t)(a2)] = v12;
        }
        --v5;
        v14 = (int)(uintptr_t)(j);
        if ( v5 < (int)(uintptr_t)(j) )
          break;
      }
      v16 += 2;
    }
    if ( (int)(uintptr_t)(a2) < v5 )
      break;
    i = (hkcdVertexGeometryImpl::VertexLinePair::Self *)v14;
    if ( a3 <= v14 )
      return;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_b1f75a(
    self,
    a2,
    v5,
    (int)(uintptr_t)(a4),
    v13);
  i = (hkcdVertexGeometryImpl::VertexLinePair::Self *)v14;
  if ( a3 > v14 )
    goto LABEL_10;
}
// ----------------------------------------------------------------------------
// Function: sub_15A25A0  (binary VA: 0x15a25a0)
// Original: sub_15A25A0
// ----------------------------------------------------------------------------
hkcdVertexGeometryImpl::VertexLinePair::Self * sub_15A25A0(hkAlgorithm::Self *a1, int a2)
{
  hkAlgorithm::Self *v2;
  hkcdVertexGeometryImpl::VertexLinePair::Self *v3;
  unsigned int v4;
  int *v5;
  int v6;
  hkcdVertexGeometryImpl::VertexLinePair::Self *i;
  int *v8;
  unsigned int v9;
  int v10;
  hkcdVertexGeometryImpl::VertexLinePair::Self *result;
  hkcdVertexGeometryImpl::VertexLinePair::Self *v12;
  hkcdVertexGeometryImpl::VertexLinePair::Self *j;
  unsigned int v14;
  int *v15;
  int v16;
  uint32_t *v17;
  int *v18;
  unsigned int v19;
  int v20;
  hkcdVertexGeometryImpl::VertexLinePair::Self *v21;
  int v22;
  uint32_t *v23;
  hkcdVertexGeometryImpl::VertexLinePair::Self *v24;
  int v25;
  uint32_t *k;
  int v28;
  int v29;
  int v30;
  hkcdVertexGeometryImpl::VertexLinePair::Self *v31;
  hkcdVertexGeometryImpl::VertexLinePair::Self *v32;
  int v33;
  hkcdVertexGeometryImpl::VertexLinePair::Self *v35;

  v2 = a1;
  v32 = nullptr;
  v3 = nullptr;
  while ( 1 )
  {
    v4 = *((uint32_t *)v2 + 2 * (((int)(uintptr_t)(v3) + a2) >> 1) + 1);
    v35 = (hkcdVertexGeometryImpl::VertexLinePair::Self *)((char *)v3 + 1);
    v21 = (hkcdVertexGeometryImpl::VertexLinePair::Self *)((char *)v3 + 1);
    v5 = (int *)((char *)v2 + 8 * (uint32_t)(uintptr_t)(v3));
    v28 = -8 * (uint32_t)(uintptr_t)(v3) - (uint32_t)(uintptr_t)(v2);
    v23 = (uint32_t *)(v5 + 1);
    v6 = a2;
    for ( i = v35; ; i = v21 )
    {
      v31 = (hkcdVertexGeometryImpl::VertexLinePair::Self *)((char *)i - 1);
      if ( v4 <= *(uint32_t *)((char *)v23 + (uint32_t)(uintptr_t)(v5) + v28) )
      {
        v8 = (int *)((char *)a1 + 8 * v6);
        v9 = v8[1];
        if ( v4 < v9 )
        {
          v10 = (int)(uintptr_t)(a1) + 8 * v6 - 8;
          do
          {
            v8 = (int *)v10;
            v10 -= 8;
            v9 = *(uint32_t *)(v10 + 12);
            --v6;
          }
          while ( v4 < v9 );
        }
        if ( v6 < (int)(uintptr_t)(v31) )
          break;
        if ( (hkcdVertexGeometryImpl::VertexLinePair::Self *)v6 != v31 )
        {
          v29 = *v8;
          *v8 = *v5;
          v8[1] = v5[1];
          *v5 = v29;
          *(uint32_t *)((char *)v23 + (uint32_t)(uintptr_t)(v5) + v28) = v9;
        }
        --v6;
        v31 = v21;
        if ( v6 < (int)(uintptr_t)(v21) )
          break;
      }
      v21 = (hkcdVertexGeometryImpl::VertexLinePair::Self *)((char *)v21 + 1);
      v5 += 2;
    }
    v33 = v6;
    if ( (int)(uintptr_t)(v32) < v6 )
    {
      v12 = v35;
      for ( j = v32; ; j = v24 )
      {
        v22 = (int)(uintptr_t)(v12);
        v14 = *((uint32_t *)a1 + 2 * (((int)(uintptr_t)(j) + v33) >> 1) + 1);
        v15 = (int *)((char *)a1 + 8 * (uint32_t)(uintptr_t)(j));
        v16 = v33;
        v30 = -8 * (uint32_t)(uintptr_t)(j) - (uint32_t)(uintptr_t)(a1);
        v17 = (uint32_t *)(v15 + 1);
        for ( k = (uint32_t *)(v15 + 1); ; v17 = k )
        {
          v24 = (hkcdVertexGeometryImpl::VertexLinePair::Self *)(v22 - 1);
          if ( v14 <= *(uint32_t *)((char *)v17 + (uint32_t)(uintptr_t)(v15) + v30) )
          {
            v18 = (int *)((char *)a1 + 8 * v16);
            v19 = v18[1];
            if ( v19 > v14 )
            {
              v20 = (int)(uintptr_t)(a1) + 8 * v16 - 8;
              do
              {
                v18 = (int *)v20;
                v20 -= 8;
                v19 = *(uint32_t *)(v20 + 12);
                --v16;
              }
              while ( v14 < v19 );
            }
            if ( v16 < (int)(uintptr_t)(v24) )
              break;
            if ( (hkcdVertexGeometryImpl::VertexLinePair::Self *)v16 != v24 )
            {
              v25 = *v18;
              *v18 = *v15;
              v18[1] = v15[1];
              *v15 = v25;
              *(uint32_t *)((char *)k + (uint32_t)(uintptr_t)(v15) + v30) = v19;
            }
            --v16;
            v24 = (hkcdVertexGeometryImpl::VertexLinePair::Self *)v22;
            if ( v16 < v22 )
              break;
          }
          ++v22;
          v15 += 2;
        }
        if ( (int)(uintptr_t)(v32) < v16 )
          hkAlgorithm::quickSortRecursive_b1f75a(
            a1,
            v32,
            v16,
            (int (*)(int *, char *))hkcdVertexGeometryImpl::VertexLinePair::less);
        if ( v33 <= (int)(uintptr_t)(v24) )
          break;
        v32 = v24;
        v12 = (hkcdVertexGeometryImpl::VertexLinePair::Self *)((char *)v24 + 1);
      }
    }
    result = v31;
    if ( a2 <= (int)(uintptr_t)(v31) )
      break;
    v32 = v31;
    v3 = v31;
    v2 = a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkcdVertexGeometryImpl_V_c9cd38  (binary VA: 0x15a2810)
// Original: hkAlgorithm::quickSortRecursive<hkcdVertexGeometryImpl::VertexPlanePair,hkcdVertexGeometryImpl::VertexPlanePairLess>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkcdVertexGeometryImpl_V_c9cd38(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  uint64_t v13; // rax
  uint64_t v14; // rt0
  int v15;
  int64_t v16; // kr0C_8
  unsigned int v17;
  double v18; // xmm1_8
  double v19; // xmm0_8^8
  double v20; // xmm1_8^8
  uint64_t v21; // rax
  uint64_t v22; // rt0
  int v23;
  int64_t v24; // kr20_8
  unsigned int v25;
  double v26; // xmm1_8
  double v27; // xmm0_8^8
  double v28; // xmm1_8^8
  int v29;
  int v30;
  int64_t v31; // rax
  double v32; // xmm1_8
  double v33; // xmm0_8^8
  double v34; // xmm1_8^8
  int64_t v35; // rax
  int64_t v36; // kr3C_8
  uint64_t v37; // rt0
  double v38; // xmm1_8
  double v39; // xmm0_8^8
  double v40; // xmm1_8^8
  typedef const hkcdPlanarGeometryPrimitives::Plane::Self *_g4_t_v41;
  typedef uint64_t _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint64_t _g4_t_v44;
  typedef uint64_t _g4_t_v45;
  typedef int *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint64_t _g4_t_v50;
  typedef uint64_t _g4_t_v51;
  typedef uint64_t _g4_t_v52;
  typedef int *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int16_t _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int16_t _g4_t_v63;
  typedef int64_t _g4_t_v64;
  typedef uint64_t _g4_t_v65;
  typedef uint32_t *_g4_t_i;
  typedef __m128i _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef double _g4_t_v72;
  typedef double _g4_t_v73;
  typedef double _g4_t_v74;
  typedef double _g4_t_v75;
  typedef __m128i _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef double _g4_t_v81;
  typedef double _g4_t_v82;
  typedef double _g4_t_v83;
  typedef double _g4_t_v84;
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (0u + sizeof(_g4_t_v41)) > _g4_s0 ? (0u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v42)) > _g4_s1 ? (56u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v43)) > _g4_s2 ? (76u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v44)) > _g4_s3 ? (80u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (88u + sizeof(_g4_t_v45)) > _g4_s4 ? (88u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v46)) > _g4_s5 ? (96u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (100u + sizeof(_g4_t_v47)) > _g4_s6 ? (100u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (104u + sizeof(_g4_t_v48)) > _g4_s7 ? (104u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v49)) > _g4_s8 ? (108u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v50)) > _g4_s9 ? (112u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v51)) > _g4_s10 ? (144u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v52)) > _g4_s11 ? (144u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (176u + sizeof(_g4_t_v53)) > _g4_s12 ? (176u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (188u + sizeof(_g4_t_v54)) > _g4_s13 ? (188u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (192u + sizeof(_g4_t_v55)) > _g4_s14 ? (192u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (196u + sizeof(_g4_t_v56)) > _g4_s15 ? (196u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (204u + sizeof(_g4_t_v57)) > _g4_s16 ? (204u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (208u + sizeof(_g4_t_v58)) > _g4_s17 ? (208u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (220u + sizeof(_g4_t_v59)) > _g4_s18 ? (220u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (224u + sizeof(_g4_t_v60)) > _g4_s19 ? (224u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (232u + sizeof(_g4_t_v61)) > _g4_s20 ? (232u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (240u + sizeof(_g4_t_v62)) > _g4_s21 ? (240u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v63)) > _g4_s22 ? (240u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (240u + sizeof(_g4_t_v64)) > _g4_s23 ? (240u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (240u + sizeof(_g4_t_v65)) > _g4_s24 ? (240u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (248u + sizeof(_g4_t_i)) > _g4_s25 ? (248u + sizeof(_g4_t_i)) : _g4_s25,
    _g4_s27 = (256u + sizeof(_g4_t_v67)) > _g4_s26 ? (256u + sizeof(_g4_t_v67)) : _g4_s26,
    _g4_s28 = (272u + sizeof(_g4_t_v68)) > _g4_s27 ? (272u + sizeof(_g4_t_v68)) : _g4_s27,
    _g4_s29 = (276u + sizeof(_g4_t_v69)) > _g4_s28 ? (276u + sizeof(_g4_t_v69)) : _g4_s28,
    _g4_s30 = (280u + sizeof(_g4_t_v70)) > _g4_s29 ? (280u + sizeof(_g4_t_v70)) : _g4_s29,
    _g4_s31 = (284u + sizeof(_g4_t_v71)) > _g4_s30 ? (284u + sizeof(_g4_t_v71)) : _g4_s30,
    _g4_s32 = (288u + sizeof(_g4_t_v72)) > _g4_s31 ? (288u + sizeof(_g4_t_v72)) : _g4_s31,
    _g4_s33 = (296u + sizeof(_g4_t_v73)) > _g4_s32 ? (296u + sizeof(_g4_t_v73)) : _g4_s32,
    _g4_s34 = (304u + sizeof(_g4_t_v74)) > _g4_s33 ? (304u + sizeof(_g4_t_v74)) : _g4_s33,
    _g4_s35 = (312u + sizeof(_g4_t_v75)) > _g4_s34 ? (312u + sizeof(_g4_t_v75)) : _g4_s34,
    _g4_s36 = (320u + sizeof(_g4_t_v76)) > _g4_s35 ? (320u + sizeof(_g4_t_v76)) : _g4_s35,
    _g4_s37 = (336u + sizeof(_g4_t_v77)) > _g4_s36 ? (336u + sizeof(_g4_t_v77)) : _g4_s36,
    _g4_s38 = (340u + sizeof(_g4_t_v78)) > _g4_s37 ? (340u + sizeof(_g4_t_v78)) : _g4_s37,
    _g4_s39 = (344u + sizeof(_g4_t_v79)) > _g4_s38 ? (344u + sizeof(_g4_t_v79)) : _g4_s38,
    _g4_s40 = (348u + sizeof(_g4_t_v80)) > _g4_s39 ? (348u + sizeof(_g4_t_v80)) : _g4_s39,
    _g4_s41 = (352u + sizeof(_g4_t_v81)) > _g4_s40 ? (352u + sizeof(_g4_t_v81)) : _g4_s40,
    _g4_s42 = (360u + sizeof(_g4_t_v82)) > _g4_s41 ? (360u + sizeof(_g4_t_v82)) : _g4_s41,
    _g4_s43 = (368u + sizeof(_g4_t_v83)) > _g4_s42 ? (368u + sizeof(_g4_t_v83)) : _g4_s42,
    _g4_s44 = (376u + sizeof(_g4_t_v84)) > _g4_s43 ? (376u + sizeof(_g4_t_v84)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 144u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 144u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 176u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 188u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 192u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 196u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 204u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 208u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 220u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 224u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 232u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 240u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 240u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 240u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 240u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 248u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 256u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 272u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 276u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 280u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 284u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 288u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 296u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 304u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 312u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 320u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 336u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 340u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 344u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 348u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 352u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 360u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 368u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 376u);

  for ( result = a2; ; a2 = result )
  {
    v5 = *(uint32_t *)(a1 + 8 * ((a3 + result) >> 1));
    v55 = v5 & 0x10000000;
    v54 = v5 << 6;
    v46 = (int *)(a1 + 8 * a2);
    v47 = a2 + 1;
    v56 = a3;
    while ( 1 )
    {
      v43 = v47 - 1;
      v6 = *(uint32_t *)(a4 + 8);
      v7 = *(uint32_t *)(v6 + 32) + (*v46 << 6);
      if ( (*v46 & 0x10000000) != 0 )
      {
        v65 = *(uint64_t *)(v7 + 16);
        LODWORD(v45) = *(uint64_t *)(v7 + 24) >> 11;
        HIDWORD(v45) = ((uint32_t)v65 << 21) | (*(uint32_t *)(v7 + 28) >> 11);
        LODWORD(v35) = ~(((uint32_t)v45 << 11) | *(uint32_t *)(v7 + 24) & 0x7FF);
        HIDWORD(v35) = ~(unsigned int)(v45 >> 21);
        v67 = _mm_slli_epi64(
                _mm_sub_epi64(
                  g4_m128_from<__m128i>(0LL),
                  _mm_or_si128(
                    _mm_sub_epi64(
                      g4_m128_from<__m128i>(0LL),
                      _mm_srli_epi64(_mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7CC60), *(__m128i *)v7), 0xDu)),
                    _mm_srli_epi64(*(__m128i *)v7, 0xEu))),
                0xEu);
        v36 = (v65 >> 14) | -(int64_t)((v65 & 0x8000000000000000LL) >> 13);
        v69 = (uint64_t)(-16384 * v36) >> 32;
        HIDWORD(v37) = ((unsigned int)((uint64_t)(v35 + 1) >> 32) >> 11)
                     | (((v35 == -1) + ~(unsigned int)((uint64_t)SHIDWORD(v45) >> 21)) << 21);
        LODWORD(v37) = (uint64_t)(v35 + 1) >> 11;
        v68 = (-16384 * v36) | (HIDWORD(v37) >> 21);
        v71 = v37 >> 21;
        v70 = ((uint32_t)v37 << 11) | ((uint16_t)v35 + 1) & 0x7FF;
        v38 = *(double *)(v7 + 32);
        v39 = *(double *)(v7 + 56);
        v40 = *(double *)(v7 + 40);
        v74 = -*(double *)(v7 + 48);
        v75 = -v39;
        v72 = -v38;
        v73 = -v40;
      }
      else
      {
        v67 = *(__m128i *)v7;
        v68 = *(uint32_t *)(v7 + 16);
        v69 = *(uint32_t *)(v7 + 20);
        v70 = *(uint32_t *)(v7 + 24);
        v71 = *(uint32_t *)(v7 + 28);
        v72 = *(double *)(v7 + 32);
        v73 = *(double *)(v7 + 40);
        v74 = *(double *)(v7 + 48);
        v75 = *(double *)(v7 + 56);
      }
      v8 = *(uint32_t *)(v6 + 32) + v54;
      if ( v55 != 0 )
      {
        v52 = *(uint64_t *)(v8 + 16);
        LODWORD(v44) = *(uint64_t *)(v8 + 24) >> 11;
        HIDWORD(v44) = ((uint32_t)v52 << 21) | (*(uint32_t *)(v8 + 28) >> 11);
        LODWORD(v31) = ~(((uint32_t)v44 << 11) | *(uint32_t *)(v8 + 24) & 0x7FF);
        HIDWORD(v31) = ~(unsigned int)(v44 >> 21);
        v64 = v31 + 1;
        LODWORD(v42) = (uint64_t)(v31 + 1) >> 11;
        HIDWORD(v42) = (HIDWORD(v64) >> 11)
                     | (((v64 == 0) + ~(unsigned int)((uint64_t)SHIDWORD(v44) >> 21)) << 21);
        LODWORD(v31) = (v52 & 0x8000000000000000LL) >> 13;
        HIDWORD(v31) = (HIDWORD(v52) & 0x80000000) >> 13;
        v76 = _mm_slli_epi64(
                _mm_sub_epi64(
                  g4_m128_from<__m128i>(0LL),
                  _mm_or_si128(
                    _mm_sub_epi64(
                      g4_m128_from<__m128i>(0LL),
                      _mm_srli_epi64(_mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7CC60), *(__m128i *)v8), 0xDu)),
                    _mm_srli_epi64(*(__m128i *)v8, 0xEu))),
                0xEu);
        v78 = (-16384LL * ((v52 >> 14) | -v31)) >> 32;
        v77 = (-16384 * ((v52 >> 14) | -(int)v31)) | (HIDWORD(v42) >> 21);
        v80 = v42 >> 21;
        v79 = ((uint32_t)v42 << 11) | v64 & 0x7FF;
        v32 = *(double *)(v8 + 32);
        v33 = *(double *)(v8 + 56);
        v34 = *(double *)(v8 + 40);
        v83 = -*(double *)(v8 + 48);
        v84 = -v33;
        v81 = -v32;
        v82 = -v34;
      }
      else
      {
        v76 = *(__m128i *)v8;
        v77 = *(uint32_t *)(v8 + 16);
        v78 = *(uint32_t *)(v8 + 20);
        v79 = *(uint32_t *)(v8 + 24);
        v80 = *(uint32_t *)(v8 + 28);
        v81 = *(double *)(v8 + 32);
        v82 = *(double *)(v8 + 40);
        v83 = *(double *)(v8 + 48);
        v84 = *(double *)(v8 + 56);
      }
      if ( (hkcdPlanarGeometryPredicates::orientation(
              *(hkcdPlanarGeometryPredicates::Self **)a4,
              *(const hkcdPlanarGeometryPrimitives::Plane::Self **)(a4 + 4),
              (const hkcdPlanarGeometryPrimitives::Plane::Self *)&v67,
              (const hkcdPlanarGeometryPrimitives::Plane::Self *)&v76,
              v41)
          & 0xF) != 2 )
      {
        v9 = (uint32_t *)(a1 + 8 * v56);
        v10 = a4;
        for ( i = v9; ; v9 = i )
        {
          v53 = (int *)(v9);
          v62 = *(uint32_t *)(v10 + 8);
          v12 = *(uint32_t *)(v62 + 32) + v54;
          if ( v55 != 0 )
          {
            v48 = v10;
            v13 = *(uint64_t *)(v12 + 24);
            v50 = *(uint64_t *)(v12 + 16);
            v60 = v13 >> 11;
            HIDWORD(v14) = ((uint32_t)v50 << 21) | (HIDWORD(v13) >> 11);
            LODWORD(v14) = v60;
            v15 = *(uint32_t *)(v12 + 24);
            v61 = -(((uint16_t)v60 << 11) | v15 & 0x7FF);
            v67 = _mm_slli_epi64(
                    _mm_sub_epi64(
                      g4_m128_from<__m128i>(0LL),
                      _mm_or_si128(
                        _mm_sub_epi64(
                          g4_m128_from<__m128i>(0LL),
                          _mm_srli_epi64(_mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7CC60), *(__m128i *)v12), 0xDu)),
                        _mm_srli_epi64(*(__m128i *)v12, 0xEu))),
                    0xEu);
            v16 = -(int64_t)((v50 & 0x8000000000000000LL) >> 13) | (v50 >> 14);
            v59 = ((unsigned int)((__PAIR64__(~(unsigned int)(v14 >> 21), ~((v60 << 11) | v15 & 0x7FFu)) + 1) >> 32) >> 11)
                | (((__PAIR64__(~(unsigned int)(v14 >> 21), ~((v60 << 11) | v15 & 0x7FFu)) == -1)
                  + ~(unsigned int)((uint64_t)SHIDWORD(v14) >> 21)) << 21);
            v69 = (uint64_t)(-16384 * v16) >> 32;
            v68 = (-16384 * v16) | (v59 >> 21);
            v17 = (__PAIR64__(~(unsigned int)(v14 >> 21), ~((v60 << 11) | v15 & 0x7FFu)) + 1) >> 11;
            v71 = __PAIR64__(v59, v17) >> 21;
            v10 = v48;
            v70 = (v17 << 11) | v61 & 0x7FF;
            v18 = *(double *)(v12 + 32);
            v19 = *(double *)(v12 + 56);
            v20 = *(double *)(v12 + 40);
            v74 = -*(double *)(v12 + 48);
            v75 = -v19;
            v72 = -v18;
            v73 = -v20;
          }
          else
          {
            v67 = *(__m128i *)v12;
            v68 = *(uint32_t *)(v12 + 16);
            v69 = *(uint32_t *)(v12 + 20);
            v70 = *(uint32_t *)(v12 + 24);
            v71 = *(uint32_t *)(v12 + 28);
            v72 = *(double *)(v12 + 32);
            v73 = *(double *)(v12 + 40);
            v74 = *(double *)(v12 + 48);
            v75 = *(double *)(v12 + 56);
          }
          v11 = *(uint32_t *)(v62 + 32) + (*i << 6);
          if ( (*i & 0x10000000) != 0 )
          {
            v49 = v10;
            v21 = *(uint64_t *)(v11 + 24);
            v51 = *(uint64_t *)(v11 + 16);
            v58 = v21 >> 11;
            HIDWORD(v22) = ((uint32_t)v51 << 21) | (HIDWORD(v21) >> 11);
            LODWORD(v22) = v58;
            v23 = *(uint32_t *)(v11 + 24);
            v63 = -(((uint16_t)v58 << 11) | v23 & 0x7FF);
            v76 = _mm_slli_epi64(
                    _mm_sub_epi64(
                      g4_m128_from<__m128i>(0LL),
                      _mm_or_si128(
                        _mm_sub_epi64(
                          g4_m128_from<__m128i>(0LL),
                          _mm_srli_epi64(_mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7CC60), *(__m128i *)v11), 0xDu)),
                        _mm_srli_epi64(*(__m128i *)v11, 0xEu))),
                    0xEu);
            v24 = -(int64_t)((v51 & 0x8000000000000000LL) >> 13) | (v51 >> 14);
            v57 = ((unsigned int)((__PAIR64__(~(unsigned int)(v22 >> 21), ~((v58 << 11) | v23 & 0x7FFu)) + 1) >> 32) >> 11)
                | (((__PAIR64__(~(unsigned int)(v22 >> 21), ~((v58 << 11) | v23 & 0x7FFu)) == -1)
                  + ~(unsigned int)((uint64_t)SHIDWORD(v22) >> 21)) << 21);
            v78 = (uint64_t)(-16384 * v24) >> 32;
            v77 = (-16384 * v24) | (v57 >> 21);
            v25 = (__PAIR64__(~(unsigned int)(v22 >> 21), ~((v58 << 11) | v23 & 0x7FFu)) + 1) >> 11;
            v80 = __PAIR64__(v57, v25) >> 21;
            v10 = v49;
            v79 = (v25 << 11) | v63 & 0x7FF;
            v26 = *(double *)(v11 + 32);
            v27 = *(double *)(v11 + 56);
            v28 = *(double *)(v11 + 40);
            v83 = -*(double *)(v11 + 48);
            v84 = -v27;
            v81 = -v26;
            v82 = -v28;
          }
          else
          {
            v76 = *(__m128i *)v11;
            v77 = *(uint32_t *)(v11 + 16);
            v78 = *(uint32_t *)(v11 + 20);
            v79 = *(uint32_t *)(v11 + 24);
            v80 = *(uint32_t *)(v11 + 28);
            v81 = *(double *)(v11 + 32);
            v82 = *(double *)(v11 + 40);
            v83 = *(double *)(v11 + 48);
            v84 = *(double *)(v11 + 56);
          }
          i -= 2;
          if ( (hkcdPlanarGeometryPredicates::orientation(
                  *(hkcdPlanarGeometryPredicates::Self **)v10,
                  *(const hkcdPlanarGeometryPrimitives::Plane::Self **)(v10 + 4),
                  (const hkcdPlanarGeometryPrimitives::Plane::Self *)&v67,
                  (const hkcdPlanarGeometryPrimitives::Plane::Self *)&v76,
                  v41)
              & 0xF) != 2 )
            break;
          --v56;
        }
        if ( v43 > v56 )
          break;
        if ( v43 != v56 )
        {
          v29 = *v53;
          v30 = v53[1];
          *v53 = *v46;
          v53[1] = v46[1];
          *v46 = v29;
          v46[1] = v30;
        }
        --v56;
        v43 = v47;
        if ( v56 < v47 )
          break;
      }
      v46 += 2;
      ++v47;
    }
    if ( a2 < v56 )
      break;
    result = v43;
    if ( a3 <= v43 )
      return result;
LABEL_24:
    ;
  }
g4_m128_lane<int64_t>(v76, 0) = *(uint64_t *)a4;
g4_m128_lane<int32_t>(v76, 2) = *(uint32_t *)(a4 + 8);
  hkAlgorithm::quickSortRecursive_hkcdVertexGeometryImpl_V_c9cd38(
    a1,
    a2,
    v56,
    (int)(uintptr_t)(&v76));
  result = v43;
  if ( a3 > v43 )
    goto LABEL_24;
  return result;
}



// ============================================================================
// Address:   0x15a76e0 (size: 552 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN18hkcdVertexGeometry6VertexEPFjRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkcdVertexGeometry::Vertex,unsigned int (*)(hkcdVertexGeometry::Vertex const&,hkcdVertexGeometry::Vertex const&)>(hkcdVertexGeometry::Vertex *,int,int,unsigned int (*)(hkcdVertexGeometry::Vertex const&,hkcdVertexGeometry::Vertex const&))
// ============================================================================
void hkAlgorithm::quickSortRecursive_f0b3c0(
        hkAlgorithm::Self *self,
        Vertex *a2,
        int a3,
        int (*a4)(uint32_t *, char *))
{
  Vertex *i;
  uint32_t *v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  char *v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  typedef unsigned int (*_g4_t_v21)(const Vertex *, const Vertex *);
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef char *_g4_t_j;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t _g4_t_v32[10];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v26)) > _g4_s5 ? (28u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v27)) > _g4_s6 ? (28u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v28)) > _g4_s7 ? (32u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_j)) > _g4_s8 ? (36u + sizeof(_g4_t_j)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v30)) > _g4_s9 ? (40u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v31)) > _g4_s10 ? (40u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v32)) > _g4_s11 ? (48u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v33)) > _g4_s12 ? (88u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v34)) > _g4_s13 ? (92u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v35)) > _g4_s14 ? (96u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v36)) > _g4_s15 ? (100u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v37)) > _g4_s16 ? (104u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v38)) > _g4_s17 ? (108u + sizeof(_g4_t_v38)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 92u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 100u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 104u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 108u);

  for ( i = a2; ; a2 = i )
  {
    v25 = a3;
    v5 = (uint32_t *)((char *)self + 32 * (((int)(uintptr_t)(i) + a3) >> 1));
    std::memcpy(v32, v5, 24);
    v6 = v5[6];
    v7 = v5[7];
    v32[6] = v6;
    v32[7] = v7;
    v28 = (uint32_t *)((char *)self + 32 * (uint32_t)(uintptr_t)(a2));
    v8 = (char *)&a2->x + 1;
    for ( j = (char *)&a2->x + 1; ; v8 = j )
    {
      v26 = (int)(uintptr_t)(v8 - 1);
      if ( a4(v28, (char *)v32) == 0 )
      {
        v9 = v25;
        v10 = (char *)self + 32 * v25;
        while ( 1 )
        {
          v30 = (uint32_t *)(v10);
          v11 = a4(v32, v10);
          v10 -= 32;
          if ( v11 == 0 )
            break;
          --v9;
        }
        v25 = v9;
        if ( v26 > v9 )
          break;
        if ( v26 != v9 )
        {
          v12 = v30;
          v13 = v30[3];
          v14 = *v30;
          v33 = v30[2];
          v27 = v33;
          v24 = v13;
          v15 = v30[4];
          v34 = v13;
          v16 = v30[5];
          v31 = v14;
          v32[8] = v14;
          v23 = v15;
          v17 = v12[1];
          v35 = v15;
          v22 = v16;
          v18 = v12[6];
          v36 = v16;
          v19 = v12;
          v20 = v12[7];
          v32[9] = v17;
          v38 = v20;
          v37 = v18;
          *v19 = *v28;
          v19[1] = v28[1];
          v19[2] = v28[2];
          v19[3] = v28[3];
          v19[4] = v28[4];
          v19[5] = v28[5];
          v19[6] = v28[6];
          v19[7] = v28[7];
          v28[1] = v17;
          *v28 = v31;
          v28[2] = v27;
          v28[3] = v24;
          v28[4] = v23;
          v28[5] = v22;
          v28[6] = v18;
          v28[7] = v20;
        }
        v25 = v9 - 1;
        v26 = (int)(uintptr_t)(j);
        if ( v9 - 1 < (int)(uintptr_t)(j) )
          break;
      }
      ++j;
      v28 += 8;
    }
    if ( (int)(uintptr_t)(a2) < v25 )
      break;
    i = (Vertex *)v26;
    if ( a3 <= v26 )
      return;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_f0b3c0(
    self,
    a2,
    v25,
    (int)(uintptr_t)(a4),
    v21);
  i = (Vertex *)v26;
  if ( a3 > v26 )
    goto LABEL_10;
}


// ============================================================================
// Address:   0x15a80b0 (size: 406 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN18hkcdVertexGeometry4LineEPFjRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkcdVertexGeometry::Line,unsigned int (*)(hkcdVertexGeometry::Line const&,hkcdVertexGeometry::Line const&)>(hkcdVertexGeometry::Line *,int,int,unsigned int (*)(hkcdVertexGeometry::Line const&,hkcdVertexGeometry::Line const&))
// ============================================================================
int hkAlgorithm::quickSortRecursive_32947a(
        int a1,
        int a2,
        int a3,
        int (*a4)(int *, uint32_t *))
{
  int result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[5];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_i)) > _g4_s4 ? (20u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v24)) > _g4_s8 ? (52u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v25)) > _g4_s9 ? (56u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v26)) > _g4_s10 ? (60u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  for ( result = a2; ; a2 = result )
  {
    v5 = a3;
    v6 = (uint32_t *)(a1 + 16 * ((a3 + result) >> 1));
    v23[0] = *v6;
    v23[1] = v6[1];
    v7 = v6[2];
    v8 = v6[3];
    v23[2] = v7;
    v23[3] = v8;
    v19 = (int *)(a1 + 16 * a2);
    v9 = a2 + 1;
    for ( i = a2 + 1; ; v9 = i )
    {
      v17 = v9 - 1;
      if ( a4(v19, v23) == 0 )
      {
        v10 = (uint32_t *)(a1 + 16 * v5);
        while ( 1 )
        {
          v21 = v10;
          v11 = a4((int *)(v23), v10);
          v10 -= 4;
          if ( v11 == 0 )
            break;
          --v5;
        }
        if ( v17 > v5 )
          break;
        if ( v17 != v5 )
        {
          v12 = v21;
          v13 = v21[2];
          v26 = v21[3];
          v16 = v26;
          v18 = v13;
          v25 = v13;
          v22 = *v21;
          v23[4] = v22;
          v15 = *v19;
          v24 = v12[1];
          v14 = v24;
          *v12 = v15;
          v12[1] = v19[1];
          v12[2] = v19[2];
          v12[3] = v19[3];
          v19[1] = v14;
          *v19 = v22;
          v19[2] = v18;
          v19[3] = v16;
        }
        --v5;
        v17 = i;
        if ( v5 < i )
          break;
      }
      ++i;
      v19 += 4;
    }
    if ( a2 < v5 )
      break;
    result = v17;
    if ( a3 <= v17 )
      return result;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_32947a(
    a1,
    a2,
    v5,
    a4);
  result = v17;
  if ( a3 > v17 )
    goto LABEL_10;
  return result;
}


// ============================================================================
// Address:   0x15a8940 (size: 406 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveI11hkIntVectorPFjRKS1_S3_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkIntVector,unsigned int (*)(hkIntVector const&,hkIntVector const&)>(hkIntVector *,int,int,unsigned int (*)(hkIntVector const&,hkIntVector const&))
// ============================================================================
int hkAlgorithm::quickSortRecursive_98ddf1(
        int a1,
        int a2,
        int a3,
        int (*a4)(int *, uint32_t *))
{
  int result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[5];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_i)) > _g4_s4 ? (20u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v24)) > _g4_s8 ? (52u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v25)) > _g4_s9 ? (56u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v26)) > _g4_s10 ? (60u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  for ( result = a2; ; a2 = result )
  {
    v5 = a3;
    v6 = (uint32_t *)(a1 + 16 * ((a3 + result) >> 1));
    v23[0] = *v6;
    v23[1] = v6[1];
    v7 = v6[2];
    v8 = v6[3];
    v23[2] = v7;
    v23[3] = v8;
    v19 = (int *)(a1 + 16 * a2);
    v9 = a2 + 1;
    for ( i = a2 + 1; ; v9 = i )
    {
      v17 = v9 - 1;
      if ( a4(v19, v23) == 0 )
      {
        v10 = (uint32_t *)(a1 + 16 * v5);
        while ( 1 )
        {
          v21 = v10;
          v11 = a4((int *)(v23), v10);
          v10 -= 4;
          if ( v11 == 0 )
            break;
          --v5;
        }
        if ( v17 > v5 )
          break;
        if ( v17 != v5 )
        {
          v12 = v21;
          v13 = v21[2];
          v26 = v21[3];
          v16 = v26;
          v18 = v13;
          v25 = v13;
          v22 = *v21;
          v23[4] = v22;
          v15 = *v19;
          v24 = v12[1];
          v14 = v24;
          *v12 = v15;
          v12[1] = v19[1];
          v12[2] = v19[2];
          v12[3] = v19[3];
          v19[1] = v14;
          *v19 = v22;
          v19[2] = v18;
          v19[3] = v16;
        }
        --v5;
        v17 = i;
        if ( v5 < i )
          break;
      }
      ++i;
      v19 += 4;
    }
    if ( a2 < v5 )
      break;
    result = v17;
    if ( a3 <= v17 )
      return result;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_98ddf1(a1, a2, v5, a4);
  result = v17;
  if ( a3 > v17 )
    goto LABEL_10;
  return result;
}


// ============================================================================
// Address:   0x15aa570 (size: 406 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN18hkcdVertexGeometry4EdgeEPFjRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkcdVertexGeometry::Edge,unsigned int (*)(hkcdVertexGeometry::Edge const&,hkcdVertexGeometry::Edge const&)>(hkcdVertexGeometry::Edge *,int,int,unsigned int (*)(hkcdVertexGeometry::Edge const&,hkcdVertexGeometry::Edge const&))
// ============================================================================
int hkAlgorithm::quickSortRecursive_d98839(
        int a1,
        int a2,
        int a3,
        int (*a4)(int *, uint32_t *))
{
  int result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[5];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_i)) > _g4_s4 ? (20u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v24)) > _g4_s8 ? (52u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v25)) > _g4_s9 ? (56u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v26)) > _g4_s10 ? (60u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  for ( result = a2; ; a2 = result )
  {
    v5 = a3;
    v6 = (uint32_t *)(a1 + 16 * ((a3 + result) >> 1));
    v23[0] = *v6;
    v23[1] = v6[1];
    v7 = v6[2];
    v8 = v6[3];
    v23[2] = v7;
    v23[3] = v8;
    v19 = (int *)(a1 + 16 * a2);
    v9 = a2 + 1;
    for ( i = a2 + 1; ; v9 = i )
    {
      v17 = v9 - 1;
      if ( a4(v19, v23) == 0 )
      {
        v10 = (uint32_t *)(a1 + 16 * v5);
        while ( 1 )
        {
          v21 = v10;
          v11 = a4((int *)(v23), v10);
          v10 -= 4;
          if ( v11 == 0 )
            break;
          --v5;
        }
        if ( v17 > v5 )
          break;
        if ( v17 != v5 )
        {
          v12 = v21;
          v13 = v21[2];
          v26 = v21[3];
          v16 = v26;
          v18 = v13;
          v25 = v13;
          v22 = *v21;
          v23[4] = v22;
          v15 = *v19;
          v24 = v12[1];
          v14 = v24;
          *v12 = v15;
          v12[1] = v19[1];
          v12[2] = v19[2];
          v12[3] = v19[3];
          v19[1] = v14;
          *v19 = v22;
          v19[2] = v18;
          v19[3] = v16;
        }
        --v5;
        v17 = i;
        if ( v5 < i )
          break;
      }
      ++i;
      v19 += 4;
    }
    if ( a2 < v5 )
      break;
    result = v17;
    if ( a3 <= v17 )
      return result;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_d98839(
    a1,
    a2,
    v5,
    a4);
  result = v17;
  if ( a3 > v17 )
    goto LABEL_10;
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_15AB3B0  (binary VA: 0x15ab3b0)
// Original: sub_15AB3B0
// ----------------------------------------------------------------------------
int sub_15AB3B0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15AB3D0  (binary VA: 0x15ab3d0)
// Original: sub_15AB3D0
// ----------------------------------------------------------------------------
int sub_15AB3D0(hkcdPlanarGeometry::Self *a1, int a2)
{
  return (int)(uintptr_t)(hkcdPlanarGeometry::Construct(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_15AB420  (binary VA: 0x15ab420)
// Original: sub_15AB420
// ----------------------------------------------------------------------------
uint32_t * sub_15AB420()
{
  uint32_t v1[10];

  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarGeometryClass,
    "hkcdPlanarGeometry",
    (const hkClass::Self *)&hkcdPlanarEntityClass,
    24,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdPlanarGeometry::Members,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkcdPlanarGeometry::Construct((hkcdPlanarGeometry::Self *)v1, 0);
  hkcdPlanarGeometryTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdPlanarGeometry");
  hkcdPlanarGeometryTypeInfo[2] = (uint32_t)(uintptr_t)(sub_15AB3D0);
  hkcdPlanarGeometryTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15AB3B0);
  hkcdPlanarGeometryTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdPlanarGeometry");
  hkcdPlanarGeometryTypeInfo[4] = v1[0];
  hkcdPlanarGeometryTypeInfo[5] = 24;
  return hkcdPlanarGeometryTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_15AB500  (binary VA: 0x15ab500)
// Original: sub_15AB500
// ----------------------------------------------------------------------------
uint32_t * sub_15AB500(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2097E48);
  a1[2] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_15AB530  (binary VA: 0x15ab530)
// Original: sub_15AB530
// ----------------------------------------------------------------------------
int sub_15AB530(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15AB570  (binary VA: 0x15ab570)
// Original: sub_15AB570
// ----------------------------------------------------------------------------
uint32_t * sub_15AB570()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarEntityClass,
    "hkcdPlanarEntity",
    (const hkClass::Self *)&hkReferencedObjectClass,
    12,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdPlanarEntity::Members,
    1,
    nullptr,
    nullptr,
    0,
    0);
  hkcdPlanarEntityTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdPlanarEntity");
  hkcdPlanarEntityTypeInfo[2] = (uint32_t)(uintptr_t)(sub_15AB500);
  hkcdPlanarEntityTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15AB530);
  hkcdPlanarEntityTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdPlanarEntity");
  hkcdPlanarEntityTypeInfo[4] = ((uint32_t)(uintptr_t)&off_2097E48);
  hkcdPlanarEntityTypeInfo[5] = 12;
  return hkcdPlanarEntityTypeInfo;
}



// ============================================================================
// Address:   0x15abd60 (size: 364 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN28hkndPlanarSimplificationImpl11PolyMtlPairEPFbRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkndPlanarSimplificationImpl::PolyMtlPair,bool (*)(hkndPlanarSimplificationImpl::PolyMtlPair const&,hkndPlanarSimplificationImpl::PolyMtlPair const&)>(hkndPlanarSimplificationImpl::PolyMtlPair *,int,int,bool (*)(hkndPlanarSimplificationImpl::PolyMtlPair const&,hkndPlanarSimplificationImpl::PolyMtlPair const&))
// ============================================================================
void hkAlgorithm::quickSortRecursive_f0965a(
        hkAlgorithm::Self *self,
        hkndPlanarSimplificationImpl::PolyMtlPair::Self *a2,
        int a3,
        int (*a4)(int *, char *))
{
  hkndPlanarSimplificationImpl::PolyMtlPair::Self *i;
  int v5;
  int *v6;
  int v7;
  int v8;
  char *v9;
  char v10;
  int v11;
  int v12;
  typedef bool (*_g4_t_v13)(const hkndPlanarSimplificationImpl::PolyMtlPair::Self *, const hkndPlanarSimplificationImpl::PolyMtlPair::Self *);
  typedef int _g4_t_v14;
  typedef char *_g4_t_j;
  typedef int *_g4_t_v16;
  typedef int *_g4_t_v17;
  typedef uint32_t _g4_t_v18[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_j)) > _g4_s2 ? (16u + sizeof(_g4_t_j)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  for ( i = a2; ; a2 = i )
  {
    v5 = a3;
    v6 = (int *)((char *)self + 8 * (((int)(uintptr_t)(i) + a3) >> 1));
    v7 = *v6;
    v8 = v6[1];
    v18[0] = v7;
    v18[1] = v8;
    v16 = (int *)((char *)self + 8 * (uint32_t)(uintptr_t)(a2));
    for ( j = (char *)a2 + 1; ; ++j )
    {
      v14 = (int)(uintptr_t)(j - 1);
      if ( (uint8_t)a4(v16, (char *)v18) == 0 )
      {
        v9 = (char *)self + 8 * v5;
        while ( 1 )
        {
          v17 = (int *)v9;
          v10 = a4((int *)(v18), v9);
          v9 -= 8;
          if ( v10 == 0 )
            break;
          --v5;
        }
        if ( v14 > v5 )
          break;
        if ( v14 != v5 )
        {
          v11 = *v17;
          *v17 = *v16;
          v12 = v17[1];
          v17[1] = v16[1];
          *v16 = v11;
          v16[2 * (uint32_t)(uintptr_t)(a2) + 1 + -2 * (uint32_t)(uintptr_t)(a2)] = v12;
        }
        --v5;
        v14 = (int)(uintptr_t)(j);
        if ( v5 < (int)(uintptr_t)(j) )
          break;
      }
      v16 += 2;
    }
    if ( (int)(uintptr_t)(a2) < v5 )
      break;
    i = (hkndPlanarSimplificationImpl::PolyMtlPair::Self *)v14;
    if ( a3 <= v14 )
      return;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_f0965a(
    self,
    a2,
    v5,
    (int (*)(int *, char *))(uintptr_t)(a4));
  i = (hkndPlanarSimplificationImpl::PolyMtlPair::Self *)v14;
  if ( a3 > v14 )
    goto LABEL_10;
}


// ============================================================================
// Address:   0x15abed0 (size: 318 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN28hkndPlanarSimplificationImpl12EdgePolyPairEPFbRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkndPlanarSimplificationImpl::EdgePolyPair,bool (*)(hkndPlanarSimplificationImpl::EdgePolyPair const&,hkndPlanarSimplificationImpl::EdgePolyPair const&)>(hkndPlanarSimplificationImpl::EdgePolyPair *,int,int,bool (*)(hkndPlanarSimplificationImpl::EdgePolyPair const&,hkndPlanarSimplificationImpl::EdgePolyPair const&))
// ============================================================================
void hkAlgorithm::quickSortRecursive_4ea6f0(
        hkAlgorithm::Self *self,
        hkndPlanarSimplificationImpl::EdgePolyPair::Self *a2,
        int a3,
        int (*a4)(int *, char *))
{
  hkndPlanarSimplificationImpl::EdgePolyPair::Self *i;
  int v5;
  int *v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  char v11;
  int v12;
  int v13;
  typedef bool (*_g4_t_v14)(const hkndPlanarSimplificationImpl::EdgePolyPair::Self *, const hkndPlanarSimplificationImpl::EdgePolyPair::Self *);
  typedef int _g4_t_v15;
  typedef char *_g4_t_j;
  typedef int *_g4_t_v17;
  typedef int *_g4_t_v18;
  typedef uint32_t _g4_t_v19[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_j)) > _g4_s2 ? (16u + sizeof(_g4_t_j)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  for ( i = a2; ; a2 = i )
  {
    v5 = a3;
    v6 = (int *)((char *)self + 8 * (((int)(uintptr_t)(i) + a3) >> 1));
    v7 = *v6;
    v8 = v6[1];
    v19[0] = v7;
    v19[1] = v8;
    v17 = (int *)((char *)self + 8 * (uint32_t)(uintptr_t)(a2));
    v9 = (char *)a2 + 1;
    for ( j = (char *)a2 + 1; ; v9 = j )
    {
      v15 = (int)(uintptr_t)(v9 - 1);
      if ( (uint8_t)a4(v17, (char *)v19) == 0 )
      {
        v10 = (char *)self + 8 * v5;
        while ( 1 )
        {
          v18 = (int *)v10;
          v11 = a4((int *)(v19), v10);
          v10 -= 8;
          if ( v11 == 0 )
            break;
          --v5;
        }
        if ( v15 > v5 )
          break;
        if ( v15 != v5 )
        {
          v12 = *v18;
          *v18 = *v17;
          v13 = v18[1];
          v18[1] = v17[1];
          *v17 = v12;
          v17[1] = v13;
        }
        --v5;
        v15 = (int)(uintptr_t)(j);
        if ( v5 < (int)(uintptr_t)(j) )
          break;
      }
      ++j;
      v17 += 2;
    }
    if ( (int)(uintptr_t)(a2) < v5 )
      break;
    i = (hkndPlanarSimplificationImpl::EdgePolyPair::Self *)v15;
    if ( a3 <= v15 )
      return;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_4ea6f0(
    self,
    a2,
    v5,
    (int (*)(int *, char *))(uintptr_t)(a4));
  i = (hkndPlanarSimplificationImpl::EdgePolyPair::Self *)v15;
  if ( a3 > v15 )
    goto LABEL_10;
}
// ----------------------------------------------------------------------------
// Function: sub_15AC010  (binary VA: 0x15ac010)
// Original: sub_15AC010
// ----------------------------------------------------------------------------
hkndPlanarSimplificationImpl::EdgePolyPair::Self * sub_15AC010(hkAlgorithm::Self *a1, int a2)
{
  hkAlgorithm::Self *v2;
  hkndPlanarSimplificationImpl::EdgePolyPair::Self *v3;
  unsigned int v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int *v9;
  unsigned int v10;
  hkndPlanarSimplificationImpl::EdgePolyPair::Self *result;
  int v12;
  char *j;
  unsigned int v14;
  int v15;
  int *v16;
  int v17;
  int *v18;
  unsigned int v19;
  int v20;
  int *i;
  int *v22;
  hkndPlanarSimplificationImpl::EdgePolyPair::Self *v23;
  int v24;
  hkndPlanarSimplificationImpl::EdgePolyPair::Self *v25;
  char *v27;
  hkndPlanarSimplificationImpl::EdgePolyPair::Self *v28;
  hkndPlanarSimplificationImpl::EdgePolyPair::Self *v29;
  int v30;

  v2 = a1;
  v29 = nullptr;
  v3 = nullptr;
  while ( 1 )
  {
    v4 = *((uint32_t *)v2 + 2 * (((int)(uintptr_t)(v3) + a2) >> 1)) & 0xEFFFFFFF;
    v5 = (int *)((char *)v2 + 8 * (uint32_t)(uintptr_t)(v3));
    v27 = (char *)v3 + 1;
    v23 = (hkndPlanarSimplificationImpl::EdgePolyPair::Self *)((char *)v3 + 1);
    v6 = a2;
    for ( i = v5; ; i += 2 )
    {
      v28 = (hkndPlanarSimplificationImpl::EdgePolyPair::Self *)((char *)v23 - 1);
      if ( (*i & 0xEFFFFFFF) >= v4 )
      {
        v7 = (int *)((char *)a1 + 8 * v6);
        v8 = *v7;
        if ( (*v7 & 0xEFFFFFFF) > v4 )
        {
          v9 = (int *)((char *)a1 + 8 * v6 - 8);
          do
          {
            v8 = *v9;
            --v6;
            v7 = v9;
            v10 = *v9 & 0xEFFFFFFF;
            v9 -= 2;
          }
          while ( v10 > v4 );
        }
        if ( v6 < (int)(uintptr_t)(v28) )
          break;
        if ( (hkndPlanarSimplificationImpl::EdgePolyPair::Self *)v6 != v28 )
        {
          v12 = v7[1];
          *v7 = *i;
          v7[1] = i[1];
          *i = v8;
          i[1] = v12;
        }
        --v6;
        v28 = v23;
        if ( v6 < (int)(uintptr_t)(v23) )
          break;
      }
      v23 = (hkndPlanarSimplificationImpl::EdgePolyPair::Self *)((char *)v23 + 1);
    }
    v30 = v6;
    if ( (int)(uintptr_t)(v29) < v6 )
    {
      for ( j = v27; ; j = (char *)v25 + 1 )
      {
        v24 = (int)(uintptr_t)(j);
        v14 = *((uint32_t *)a1 + 2 * (((int)(uintptr_t)(v29) + v30) >> 1)) & 0xEFFFFFFF;
        v22 = (int *)((char *)a1 + 8 * (uint32_t)(uintptr_t)(v29));
        v15 = v30;
        while ( 1 )
        {
          v25 = (hkndPlanarSimplificationImpl::EdgePolyPair::Self *)(j - 1);
          if ( (*v22 & 0xEFFFFFFF) >= v14 )
          {
            v16 = (int *)((char *)a1 + 8 * v15);
            v17 = *v16;
            if ( (*v16 & 0xEFFFFFFF) > v14 )
            {
              v18 = (int *)((char *)a1 + 8 * v15 - 8);
              do
              {
                v17 = *v18;
                --v15;
                v16 = v18;
                v19 = *v18 & 0xEFFFFFFF;
                v18 -= 2;
              }
              while ( v19 > v14 );
            }
            if ( v15 < (int)(uintptr_t)(v25) )
              break;
            if ( (hkndPlanarSimplificationImpl::EdgePolyPair::Self *)v15 != v25 )
            {
              v20 = v16[1];
              *v16 = *v22;
              v16[1] = v22[1];
              *v22 = v17;
              v22[1] = v20;
            }
            --v15;
            v25 = (hkndPlanarSimplificationImpl::EdgePolyPair::Self *)v24;
            if ( v15 < v24 )
              break;
          }
          ++v24;
          v22 += 2;
          j = (char *)v24;
        }
        if ( v15 > (int)(uintptr_t)(v29) )
          hkAlgorithm::quickSortRecursive_4ea6f0(
            a1,
            v29,
            v15,
            (int (*)(int *, char *))hkndPlanarSimplificationImpl::EdgePolyPair::edgeLess);
        if ( (int)(uintptr_t)(v25) >= v30 )
          break;
        v29 = v25;
      }
    }
    result = v28;
    if ( a2 <= (int)(uintptr_t)(v28) )
      break;
    v29 = v28;
    v3 = v28;
    v2 = a1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_15B6920  (binary VA: 0x15b6920)
// Original: sub_15B6920
// ----------------------------------------------------------------------------
int sub_15B6920(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15B6940  (binary VA: 0x15b6940)
// Original: sub_15B6940
// ----------------------------------------------------------------------------
int sub_15B6940(int a1, int a2)
{
  return (int)(uintptr_t)(hkcdPlanarGeometryPlanesCollection::Construct(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_15B6990  (binary VA: 0x15b6990)
// Original: sub_15B6990
// ----------------------------------------------------------------------------
uint32_t * sub_15B6990()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarGeometryPlanesCollectionClass,
    "hkcdPlanarGeometryPlanesCollection",
    (const hkClass::Self *)&hkReferencedObjectClass,
    64,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2038D80,
    1,
    (const hkClassMember::Self *)&hkcdPlanarGeometryPlanesCollection::Members,
    4,
    nullptr,
    nullptr,
    0,
    0);
  hkcdPlanarGeometryPlanesCollection::Construct(&v1, 0);
  hkcdPlanarGeometryPlanesCollectionTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdPlanarGeometryPlanesCollection");
  hkcdPlanarGeometryPlanesCollectionTypeInfo[2] = (uint32_t)(uintptr_t)(sub_15B6940);
  hkcdPlanarGeometryPlanesCollectionTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15B6920);
  hkcdPlanarGeometryPlanesCollectionTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdPlanarGeometryPlanesCollection");
  hkcdPlanarGeometryPlanesCollectionTypeInfo[4] = v1;
  hkcdPlanarGeometryPlanesCollectionTypeInfo[5] = 64;
  return hkcdPlanarGeometryPlanesCollectionTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_15B6A80  (binary VA: 0x15b6a80)
// Original: sub_15B6A80
// ----------------------------------------------------------------------------
uint32_t * sub_15B6A80(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2098038);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_15B6AA0  (binary VA: 0x15b6aa0)
// Original: sub_15B6AA0
// ----------------------------------------------------------------------------
int sub_15B6AA0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: nullsub_620  (binary VA: 0x15b6ac8)
// Original: nullsub_620
// ----------------------------------------------------------------------------
void nullsub_620()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_621  (binary VA: 0x15b6ad8)
// Original: nullsub_621
// ----------------------------------------------------------------------------
void nullsub_621()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15B6AE0  (binary VA: 0x15b6ae0)
// Original: sub_15B6AE0
// ----------------------------------------------------------------------------
int sub_15B6AE0(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15B6B00  (binary VA: 0x15b6b00)
// Original: sub_15B6B00
// ----------------------------------------------------------------------------
int sub_15B6B00(int a1)
{
  return (int)(uintptr_t)(hkcdPlanarSolid::Construct(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_15B6CB0  (binary VA: 0x15b6cb0)
// Original: sub_15B6CB0
// ----------------------------------------------------------------------------
uint32_t * sub_15B6CB0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarSolidNodeStorageClass,
    "hkcdPlanarSolidNodeStorage",
    (const hkClass::Self *)&hkReferencedObjectClass,
    24,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdPlanarSolid::NodeStorage::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  *(uintptr_t *)(unk_2122294) = (uintptr_t)("!hkcdPlanarSolid::NodeStorage");
  *(uintptr_t *)(unk_2122298) = (uintptr_t)(sub_15B6A80);
  *(uintptr_t *)(unk_212229C) = (uintptr_t)(sub_15B6AA0);
  hkcdPlanarSolidNodeStorageTypeInfo = (uint32_t)(uintptr_t)("hkcdPlanarSolidNodeStorage");
  *(uintptr_t *)(unk_21222A0) = (uintptr_t)(((uint32_t)(uintptr_t)&off_2098038));
  *(uintptr_t *)(unk_21222A4) = (uintptr_t)(24);
  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarSolidNodeClass,
    "hkcdPlanarSolidNode",
    nullptr,
    28,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&off_2038DE0,
    7,
    nullptr,
    nullptr,
    0,
    0);
  hkcdPlanarSolidNodeTypeInfo = (uint32_t)(uintptr_t)("hkcdPlanarSolidNode");
  *(uintptr_t *)(unk_2122234) = (uintptr_t)("!hkcdPlanarSolid::Node");
  *(uintptr_t *)(unk_2122240) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2122244) = (uintptr_t)(28);
  *(uintptr_t *)(unk_2122238) = (uintptr_t)((&g4_noop_ret0));
  *(uintptr_t *)(unk_212223C) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarSolidClass,
    "hkcdPlanarSolid",
    (const hkClass::Self *)&hkcdPlanarEntityClass,
    24,
    nullptr,
    0,
    (const hkClassEnum::Self *)&off_2038E88,
    1,
    (const hkClassMember::Self *)&hkcdPlanarSolid::Members,
    3,
    nullptr,
    nullptr,
    0,
    0);
  hkcdPlanarSolid::Construct(&v1);
  hkcdPlanarSolidTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdPlanarSolid");
  hkcdPlanarSolidTypeInfo[2] = (uint32_t)(uintptr_t)(sub_15B6B00);
  hkcdPlanarSolidTypeInfo[3] = (uint32_t)(uintptr_t)(sub_15B6AE0);
  hkcdPlanarSolidTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdPlanarSolid");
  hkcdPlanarSolidTypeInfo[4] = v1;
  hkcdPlanarSolidTypeInfo[5] = 24;
  return hkcdPlanarSolidTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: nullsub_622  (binary VA: 0x15b6ef8)
// Original: nullsub_622
// ----------------------------------------------------------------------------
void nullsub_622()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_15B6F00  (binary VA: 0x15b6f00)
// Original: sub_15B6F00
// ----------------------------------------------------------------------------
int sub_15B6F00(hkcdPlanarGeometryPrimitives::Plane::Self *a1, int a2)
{
  return hkcdPlanarGeometryPrimitives::Plane::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_15B6F50  (binary VA: 0x15b6f50)
// Original: sub_15B6F50
// ----------------------------------------------------------------------------
uint32_t * sub_15B6F50()
{
  hkClass::Construct(
    (hkClass::Self *)&hkcdPlanarGeometryPrimitivesPlaneClass,
    "hkcdPlanarGeometryPrimitivesPlane",
    nullptr,
    64,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkcdPlanarGeometryPrimitives::Plane::Members,
    2,
    nullptr,
    nullptr,
    0,
    0);
  hkcdPlanarGeometryPrimitivesPlaneTypeInfo[0] = (uint32_t)(uintptr_t)("hkcdPlanarGeometryPrimitivesPlane");
  hkcdPlanarGeometryPrimitivesPlaneTypeInfo[1] = (uint32_t)(uintptr_t)("!hkcdPlanarGeometryPrimitives::Plane");
  hkcdPlanarGeometryPrimitivesPlaneTypeInfo[4] = 0;
  hkcdPlanarGeometryPrimitivesPlaneTypeInfo[5] = 64;
  hkcdPlanarGeometryPrimitivesPlaneTypeInfo[2] = (uint32_t)(uintptr_t)(sub_15B6F00);
  hkcdPlanarGeometryPrimitivesPlaneTypeInfo[3] = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
  return hkcdPlanarGeometryPrimitivesPlaneTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: hkcdBspBooleanImpl::mergeInPlace_hkcdConvexCellsTree3D_aa178e  (binary VA: 0x15ba1c0)
// Original: hkcdBspBooleanImpl::mergeInPlace<hkcdConvexCellsTree3D>
// ----------------------------------------------------------------------------
int hkcdBspBooleanImpl::mergeInPlace_hkcdConvexCellsTree3D_aa178e(int a1, int a2, int a3, int a4, char a5)
{
  hkcdPlanarSolid::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int result;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  int v31;
  int v32;
  uint32_t *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  unsigned int v39;
  char v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  uint32_t *v45;
  int v46;
  int v47;
  int v48;
  uint32_t *v49;
  int v50;
  int v51;
  typedef int _g4_t_v52;
  typedef char _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef hkcdPlanarSolid::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef char _g4_t_v66[4];
  typedef int _g4_t_v67[4];
  typedef int _g4_t_v68[4];
  typedef uint32_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int *_g4_t_v72;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v52)) > _g4_s0 ? (8u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v53)) > _g4_s1 ? (32u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v54)) > _g4_s2 ? (36u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v55)) > _g4_s3 ? (44u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v56)) > _g4_s4 ? (48u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v57)) > _g4_s5 ? (52u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v58)) > _g4_s6 ? (52u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v59)) > _g4_s7 ? (56u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v60)) > _g4_s8 ? (64u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v61)) > _g4_s9 ? (64u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v62)) > _g4_s10 ? (64u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v63)) > _g4_s11 ? (68u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v64)) > _g4_s12 ? (68u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v65)) > _g4_s13 ? (68u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v66)) > _g4_s14 ? (72u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v67)) > _g4_s15 ? (76u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v68)) > _g4_s16 ? (92u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v69)) > _g4_s17 ? (108u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v70)) > _g4_s18 ? (112u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v71)) > _g4_s19 ? (116u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v72)) > _g4_s20 ? (132u + sizeof(_g4_t_v72)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 108u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 112u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 116u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 132u);

  v72 = &a1;
  v55 = a2;
  v54 = a4;
  v53 = a5;
  v63 = a1;
  v5 = *(hkcdPlanarSolid::Self **)(*(uint32_t *)(a1 + 16) + 16);
  v59 = *(hkcdPlanarSolid::Self **)(a3 + 16);
  v6 = hkcdPlanarSolid::computeMaxDepth(v5);
  v69 = nullptr;
  v7 = 2 * (hkcdPlanarSolid::computeMaxDepth(v59) + v6);
  v70 = 0;
  v71 = 0x80000000;
  v8 = v63;
  if ( v7 > 0 )
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v66,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v69,
      v7,
      24);
    v8 = v63;
  }
  hkcdBspBooleanImpl::initializeStackWithLeaves(v8, v5, (hkMemoryAllocator::Self *)&v69);
  while ( 1 )
  {
    v9 = v70;
    if ( v70 == 0 )
      break;
    while ( 1 )
    {
      v10 = v69;
      v11 = v9 - 1;
      v64 = *v69;
      v12 = v69[1];
      v70 = v11;
      if ( v11 != 0 )
      {
        v13 = &v69[6 * v11];
        *v69 = *v13;
        v10[1] = v13[1];
        v10[2] = v13[2];
        v10[3] = v13[3];
        v10[4] = v13[4];
        v10[5] = v13[5];
      }
      if ( v12 == -1 )
        v12 = *((uint32_t *)v59 + 5);
      v14 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + 28 * v64);
      if ( v14[5] != 0 )
        break;
      v9 = v70;
      v14[6] = 3;
      if ( v9 == 0 )
        goto LABEL_11;
    }
    v16 = v14[6];
    v56 = 28 * v12;
    v57 = *(uint32_t *)(*((uint32_t *)v59 + 3) + 8) + 28 * v12;
    v17 = *(uint32_t *)(v57 + 24);
    if ( (unsigned int)(v17 - 1) <= 1 )
    {
      if ( v16 == 3 )
        v14[6] = v17;
      else
        v14[6] = ((unsigned int)(v54 == 0 ? -1780281 : -1383197) >> (2 * (v17 | (4 * v16)))) & 3;
    }
    else
    {
      if ( (unsigned int)(v16 - 1) > 1 )
        goto LABEL_18;
      v38 = 2 * (v16 | 4);
      if ( v54 != 0 )
      {
        v43 = 0xFFEAE4E3 >> v38;
        v40 = 2 * (v16 | 8);
        v41 = v43 & 3;
        v42 = 0xFFEAE4E3;
      }
      else
      {
        v39 = 0xFFE4D5C7 >> v38;
        v40 = 2 * (v16 | 8);
        v41 = v39 & 3;
        v42 = 0xFFE4D5C7;
      }
      if ( v41 != ((v42 >> v40) & 3) )
      {
LABEL_18:
        v58 = *(uint32_t *)(v57 + 16);
        hkcdConvexCellsTree3D::splitCell(v55, 0, v14[5], v58, v67, v68);
        v14[6] = 0;
        v14[4] = v58;
        v18 = *((uint32_t **)v5 + 3);
        v19 = v18[5];
        v60 = v19;
        if ( v19 == -1 )
        {
          v44 = v18[3];
          if ( v44 == (v18[4] & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(v18 + 2),
              28,
              v52);
            v44 = v18[3];
          }
          v45 = (uint32_t *)(v18[2] + 28 * v44);
          *v45 = -1;
          v45[6] = 15;
          v46 = v18[2];
          v47 = v18[3];
          v18[3] = v47 + 1;
          *(uint32_t *)(v46 + 28 * v47 + 12) = -1;
          v60 = v18[3] - 1;
          v20 = 28 * v60;
        }
        else
        {
          v20 = 28 * v19;
          v21 = v18[2] + v20;
          v18[5] = *(uint32_t *)(v21 + 12);
          *(uint32_t *)(v21 + 12) = -1;
        }
        v22 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + v20);
        v22[4] = 0xFFFFFFF;
        v22[1] = -1;
        v22[2] = -1;
        v22[6] = 0;
        v22[5] = 0;
        v23 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + v20);
        *v23 = v64;
        v23[5] = v67[0];
        v23[6] = 3;
        v24 = *((uint32_t **)v5 + 3);
        v25 = v24[5];
        if ( v25 == -1 )
        {
          v48 = v24[3];
          if ( v48 == (v24[4] & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(v24 + 2),
              28,
              v52);
            v48 = v24[3];
          }
          v49 = (uint32_t *)(v24[2] + 28 * v48);
          *v49 = -1;
          v49[6] = 15;
          v50 = v24[2];
          v51 = v24[3];
          v24[3] = v51 + 1;
          *(uint32_t *)(v50 + 28 * v51 + 12) = -1;
          v25 = v24[3] - 1;
          v27 = 28 * v25;
        }
        else
        {
          v26 = v24[2] + 28 * v25;
          v24[5] = *(uint32_t *)(v26 + 12);
          *(uint32_t *)(v26 + 12) = -1;
          v27 = 28 * v25;
        }
        v28 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + v27);
        v28[1] = -1;
        v28[2] = -1;
        v28[4] = 0xFFFFFFF;
        v28[6] = 0;
        v28[5] = 0;
        v29 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + v27);
        *v29 = v64;
        v29[5] = v68[0];
        v29[6] = 3;
        v30 = *(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + 28 * v64;
        v31 = *(uint32_t *)(*((uint32_t *)v59 + 3) + 8) + v56;
        *(uint32_t *)(v30 + 4) = v60;
        *(uint32_t *)(v30 + 8) = v25;
        v61 = v70;
        v32 = v70 + 2;
        v65 = v31;
        if ( v70 + 2 > (v71 & 0x3FFFFFFF) )
        {
          if ( 2 * (v71 & 0x3FFFFFFF) >= v32 )
            v32 = 2 * (v71 & 0x3FFFFFFF);
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v66,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (int *)&v69,
            v32,
            24);
          v32 = v70 + 2;
          v31 = v65;
        }
        v70 = v32;
        v33 = &v69[6 * v61];
        v62 = v67[0];
        v34 = *(uint32_t *)(v31 + 4);
        v35 = *(uint32_t *)(v30 + 4);
        v33[1] = v34;
        *v33 = v35;
        v33[2] = 0;
        v33[3] = 0;
        v33[4] = v62;
        v33[5] = 0;
        v36 = *(uint32_t *)(v65 + 8);
        v33[6] = *(uint32_t *)(v30 + 8);
        v37 = v68[0];
        v33[7] = v36;
        v33[8] = 0;
        v33[9] = 0;
        v33[10] = v37;
        v33[11] = 0;
      }
    }
  }
LABEL_11:
  if ( v53 != 0 )
  {
    hkcdPlanarSolid::collapseUnknownLabels(v5);
    hkcdPlanarSolid::collapseIdenticalLabels(v5);
    hkcdPlanarSolid::optimizeStorage(v5);
  }
  result = v71;
  v70 = 0;
  if ( v71 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v69,
             24 * v71);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdBspBooleanImpl::mergeInPlace_hkcdConvexCellsTree2D_b4dfb9  (binary VA: 0x15ba760)
// Original: hkcdBspBooleanImpl::mergeInPlace<hkcdConvexCellsTree2D>
// ----------------------------------------------------------------------------
int hkcdBspBooleanImpl::mergeInPlace_hkcdConvexCellsTree2D_b4dfb9(int a1, int a2, int a3, int a4, char a5)
{
  hkcdPlanarSolid::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int result;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  uint32_t *v37;
  int v38;
  int v39;
  int v40;
  char v41;
  char v42;
  unsigned int v43;
  int v44;
  uint32_t *v45;
  int v46;
  int v47;
  int v48;
  uint32_t *v49;
  int v50;
  int v51;
  typedef int _g4_t_v52;
  typedef char _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef hkcdPlanarSolid::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef char _g4_t_v68[4];
  typedef int _g4_t_v69[4];
  typedef int _g4_t_v70[4];
  typedef uint32_t *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int *_g4_t_v74;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v52)) > _g4_s0 ? (12u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v53)) > _g4_s1 ? (32u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v54)) > _g4_s2 ? (36u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v55)) > _g4_s3 ? (44u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v56)) > _g4_s4 ? (48u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v57)) > _g4_s5 ? (52u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v58)) > _g4_s6 ? (56u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v59)) > _g4_s7 ? (56u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v60)) > _g4_s8 ? (60u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v61)) > _g4_s9 ? (68u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v62)) > _g4_s10 ? (68u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v63)) > _g4_s11 ? (68u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v64)) > _g4_s12 ? (68u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v65)) > _g4_s13 ? (72u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v66)) > _g4_s14 ? (72u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v67)) > _g4_s15 ? (72u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v68)) > _g4_s16 ? (76u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v69)) > _g4_s17 ? (80u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v70)) > _g4_s18 ? (96u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v71)) > _g4_s19 ? (112u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v72)) > _g4_s20 ? (116u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v73)) > _g4_s21 ? (120u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v74)) > _g4_s22 ? (136u + sizeof(_g4_t_v74)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 96u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 112u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 116u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 120u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 136u);

  v74 = &a1;
  v55 = a2;
  v54 = a4;
  v53 = a5;
  v65 = a1;
  v5 = *(hkcdPlanarSolid::Self **)(*(uint32_t *)(a1 + 16) + 16);
  v60 = *(hkcdPlanarSolid::Self **)(a3 + 16);
  v6 = hkcdPlanarSolid::computeMaxDepth(v5);
  v71 = nullptr;
  v7 = 2 * (hkcdPlanarSolid::computeMaxDepth(v60) + v6);
  v72 = 0;
  v73 = 0x80000000;
  v8 = v65;
  if ( v7 > 0 )
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v68,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v71,
      v7,
      24);
    v8 = v65;
  }
  hkcdBspBooleanImpl::initializeStackWithLeaves(v8, v5, (hkMemoryAllocator::Self *)&v71);
  while ( 1 )
  {
    v9 = v72;
    if ( v72 == 0 )
      break;
    while ( 1 )
    {
      v10 = v71;
      v11 = v9 - 1;
      v12 = v71[1];
      v66 = *v71;
      v72 = v11;
      if ( v11 != 0 )
      {
        v13 = &v71[6 * v11];
        *v71 = *v13;
        v10[1] = v13[1];
        v10[2] = v13[2];
        v10[3] = v13[3];
        v10[4] = v13[4];
        v10[5] = v13[5];
      }
      if ( v12 == -1 )
        v12 = *((uint32_t *)v60 + 5);
      v14 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + 28 * v66);
      v61 = v14[5];
      if ( v61 != 0 )
        break;
      v9 = v72;
      v14[6] = 3;
      if ( v9 == 0 )
        goto LABEL_11;
    }
    v16 = v14[6];
    v57 = 28 * v12;
    v58 = *(uint32_t *)(*((uint32_t *)v60 + 3) + 8) + 28 * v12;
    v17 = *(uint32_t *)(v58 + 24);
    if ( v17 - 1 <= 1 )
    {
      if ( v16 != 3 )
        v17 = ((unsigned int)(v54 == 0 ? -1780281 : -1383197) >> (2 * (v17 | (4 * v16)))) & 3;
      v14[6] = v17;
    }
    else if ( (unsigned int)(v16 - 1) > 1
           || ((v41 = 2 * (v16 | 4), v54 != 0)
             ? (v56 = (0xFFEAE4E3 >> v41) & 3, v42 = 2 * (v16 | 8), v43 = 0xFFEAE4E3)
             : (v56 = (0xFFE4D5C7 >> v41) & 3, v42 = 2 * (v16 | 8), v43 = 0xFFE4D5C7),
               v56 != ((v43 >> v42) & 3)) )
    {
      v59 = *(uint32_t *)(v58 + 16);
      v18 = hkcdPlanarGeometry::classify(*(uint32_t *)(v55 + 12), v61, v59);
      v19 = v59;
      if ( v18 == 1 )
      {
        v69[0] = 0;
        v70[0] = v61;
      }
      else if ( v18 == 2 )
      {
        v70[0] = 0;
        v69[0] = v61;
      }
      else if ( v18 != 0 )
      {
        hkcdPlanarGeometry::split(*(uint32_t *)(v55 + 12), v61, v59, v69, v70);
        v19 = v59;
      }
      else
      {
        v69[0] = 0;
        v70[0] = 0;
      }
      v14[4] = v19;
      v14[6] = 0;
      v20 = *((uint32_t **)v5 + 3);
      v21 = v20[5];
      v62 = v21;
      if ( v21 == -1 )
      {
        v48 = v20[3];
        if ( v48 == (v20[4] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(v20 + 2),
            28,
            v52);
          v48 = v20[3];
        }
        v49 = (uint32_t *)(v20[2] + 28 * v48);
        *v49 = -1;
        v49[6] = 15;
        v50 = v20[2];
        v51 = v20[3];
        v20[3] = v51 + 1;
        *(uint32_t *)(v50 + 28 * v51 + 12) = -1;
        v62 = v20[3] - 1;
        v22 = 28 * v62;
      }
      else
      {
        v22 = 28 * v21;
        v23 = v20[2] + v22;
        v20[5] = *(uint32_t *)(v23 + 12);
        *(uint32_t *)(v23 + 12) = -1;
      }
      v24 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + v22);
      v24[5] = 0;
      v24[4] = 0xFFFFFFF;
      v24[1] = -1;
      v24[2] = -1;
      v24[6] = 0;
      v25 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + v22);
      *v25 = v66;
      v25[5] = v69[0];
      v25[6] = 3;
      v26 = *((uint32_t **)v5 + 3);
      v27 = v26[5];
      if ( v27 == -1 )
      {
        v44 = v26[3];
        if ( v44 == (v26[4] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(v26 + 2),
            28,
            v52);
          v44 = v26[3];
        }
        v45 = (uint32_t *)(v26[2] + 28 * v44);
        *v45 = -1;
        v45[6] = 15;
        v46 = v26[2];
        v47 = v26[3];
        v26[3] = v47 + 1;
        *(uint32_t *)(v46 + 28 * v47 + 12) = -1;
        v27 = v26[3] - 1;
        v29 = 28 * v27;
      }
      else
      {
        v28 = v26[2] + 28 * v27;
        v26[5] = *(uint32_t *)(v28 + 12);
        *(uint32_t *)(v28 + 12) = -1;
        v29 = 28 * v27;
      }
      v30 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + v29);
      v30[1] = -1;
      v30[2] = -1;
      v30[4] = 0xFFFFFFF;
      v30[6] = 0;
      v30[5] = 0;
      v31 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + v29);
      *v31 = v66;
      v31[5] = v70[0];
      v31[6] = 3;
      v32 = *(uint32_t *)(*((uint32_t *)v5 + 3) + 8) + 28 * v66;
      v33 = *(uint32_t *)(*((uint32_t *)v60 + 3) + 8) + v57;
      *(uint32_t *)(v32 + 4) = v62;
      *(uint32_t *)(v32 + 8) = v27;
      v63 = v72;
      v34 = v72 + 2;
      v67 = v33;
      if ( v72 + 2 > (v73 & 0x3FFFFFFF) )
      {
        if ( 2 * (v73 & 0x3FFFFFFF) >= v34 )
          v34 = 2 * (v73 & 0x3FFFFFFF);
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v68,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)&v71,
          v34,
          24);
        v34 = v72 + 2;
      }
      v72 = v34;
      v35 = v63;
      v36 = 2 * v63;
      v64 = v69[0];
      v37 = &v71[2 * v35 + 2 * v36];
      v38 = *(uint32_t *)(v67 + 4);
      *v37 = *(uint32_t *)(v32 + 4);
      v37[1] = v38;
      v37[2] = 0;
      v37[3] = 0;
      v37[4] = v64;
      v37[5] = 0;
      v39 = *(uint32_t *)(v67 + 8);
      v37[6] = *(uint32_t *)(v32 + 8);
      v40 = v70[0];
      v37[7] = v39;
      v37[8] = 0;
      v37[9] = 0;
      v37[10] = v40;
      v37[11] = 0;
    }
  }
LABEL_11:
  if ( v53 != 0 )
  {
    hkcdPlanarSolid::collapseUnknownLabels(v5);
    hkcdPlanarSolid::collapseIdenticalLabels(v5);
    hkcdPlanarSolid::optimizeStorage(v5);
  }
  result = v73;
  v72 = 0;
  if ( v73 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v71,
             24 * v73);
  return result;
}



// ============================================================================
// Address:   0x15c2940 (size: 364 bytes)
// Symbol:    _ZN11hkAlgorithm18quickSortRecursiveIN11hkcdBspImpl7MatPolyEPFjRKS2_S4_EEEvPT_iiT0_
// Demangled: void hkAlgorithm::quickSortRecursive<hkcdBspImpl::MatPoly,unsigned int (*)(hkcdBspImpl::MatPoly const&,hkcdBspImpl::MatPoly const&)>(hkcdBspImpl::MatPoly *,int,int,unsigned int (*)(hkcdBspImpl::MatPoly const&,hkcdBspImpl::MatPoly const&))
// ============================================================================
void hkAlgorithm::quickSortRecursive_97b4cb(
        hkAlgorithm::Self *self,
        hkcdBspImpl::MatPoly::Self *a2,
        int a3,
        int (*a4)(int *, char *))
{
  hkcdBspImpl::MatPoly::Self *i;
  int v5;
  int *v6;
  int v7;
  int v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  typedef unsigned int (*_g4_t_v13)(const hkcdBspImpl::MatPoly::Self *, const hkcdBspImpl::MatPoly::Self *);
  typedef int _g4_t_v14;
  typedef char *_g4_t_j;
  typedef int *_g4_t_v16;
  typedef int *_g4_t_v17;
  typedef uint32_t _g4_t_v18[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_j)) > _g4_s2 ? (16u + sizeof(_g4_t_j)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  for ( i = a2; ; a2 = i )
  {
    v5 = a3;
    v6 = (int *)((char *)self + 8 * (((int)(uintptr_t)(i) + a3) >> 1));
    v7 = *v6;
    v8 = v6[1];
    v18[0] = v7;
    v18[1] = v8;
    v16 = (int *)((char *)self + 8 * (uint32_t)(uintptr_t)(a2));
    for ( j = (char *)a2 + 1; ; ++j )
    {
      v14 = (int)(uintptr_t)(j - 1);
      if ( a4(v16, (char *)v18) == 0 )
      {
        v9 = (char *)self + 8 * v5;
        while ( 1 )
        {
          v17 = (int *)v9;
          v10 = a4((int *)(v18), v9);
          v9 -= 8;
          if ( v10 == 0 )
            break;
          --v5;
        }
        if ( v14 > v5 )
          break;
        if ( v14 != v5 )
        {
          v11 = *v17;
          *v17 = *v16;
          v12 = v17[1];
          v17[1] = v16[1];
          *v16 = v11;
          v16[2 * (uint32_t)(uintptr_t)(a2) + 1 + -2 * (uint32_t)(uintptr_t)(a2)] = v12;
        }
        --v5;
        v14 = (int)(uintptr_t)(j);
        if ( v5 < (int)(uintptr_t)(j) )
          break;
      }
      v16 += 2;
    }
    if ( (int)(uintptr_t)(a2) < v5 )
      break;
    i = (hkcdBspImpl::MatPoly::Self *)v14;
    if ( a3 <= v14 )
      return;
LABEL_10:
    ;
  }
  hkAlgorithm::quickSortRecursive_97b4cb(
    self,
    a2,
    v5,
    (int)(uintptr_t)(a4),
    v13);
  i = (hkcdBspImpl::MatPoly::Self *)v14;
  if ( a3 > v14 )
    goto LABEL_10;
}
// ----------------------------------------------------------------------------
// Function: sub_15C2AB0  (binary VA: 0x15c2ab0)
// Original: sub_15C2AB0
// ----------------------------------------------------------------------------
hkcdBspImpl::MatPoly::Self * sub_15C2AB0(hkAlgorithm::Self *a1, int a2)
{
  hkAlgorithm::Self *v2;
  hkcdBspImpl::MatPoly::Self *v3;
  unsigned int v4;
  unsigned int *v5;
  int v6;
  hkcdBspImpl::MatPoly::Self *i;
  unsigned int *v8;
  unsigned int v9;
  int v10;
  hkcdBspImpl::MatPoly::Self *result;
  hkcdBspImpl::MatPoly::Self *j;
  unsigned int v13;
  unsigned int *v14;
  int v15;
  unsigned int *v16;
  unsigned int v17;
  int v18;
  hkcdBspImpl::MatPoly::Self *v19;
  int v20;
  hkcdBspImpl::MatPoly::Self *v21;
  unsigned int v22;
  unsigned int v24;
  hkcdBspImpl::MatPoly::Self *v25;
  int v26;
  uint32_t *v27;
  uint32_t *v28;
  hkcdBspImpl::MatPoly::Self *v29;
  int v30;
  hkcdBspImpl::MatPoly::Self *v32;

  v2 = a1;
  v29 = nullptr;
  v3 = nullptr;
  while ( 1 )
  {
    v4 = *((uint32_t *)v2 + 2 * (((int)(uintptr_t)(v3) + a2) >> 1));
    v5 = (unsigned int *)((char *)v2 + 8 * (uint32_t)(uintptr_t)(v3));
    v32 = (hkcdBspImpl::MatPoly::Self *)((char *)v3 + 1);
    v19 = (hkcdBspImpl::MatPoly::Self *)((char *)v3 + 1);
    v26 = -8 * (uint32_t)(uintptr_t)(v3) - (uint32_t)(uintptr_t)(v2);
    v27 = v5 + 1;
    v6 = a2;
    for ( i = v32; ; i = v19 )
    {
      v25 = (hkcdBspImpl::MatPoly::Self *)((char *)i - 1);
      if ( v4 <= *v5 )
      {
        v8 = (unsigned int *)((char *)a1 + 8 * v6);
        v9 = *v8;
        if ( v4 < *v8 )
        {
          v10 = (int)(uintptr_t)(a1) + 8 * v6 - 8;
          do
          {
            v8 = (unsigned int *)v10;
            v10 -= 8;
            v9 = *(uint32_t *)(v10 + 8);
            --v6;
          }
          while ( v4 < v9 );
        }
        if ( v6 < (int)(uintptr_t)(v25) )
          break;
        if ( (hkcdBspImpl::MatPoly::Self *)v6 != v25 )
        {
          v24 = v8[1];
          *v8 = *v5;
          v8[1] = v5[1];
          *v5 = v9;
          *(uint32_t *)((char *)v27 + (uint32_t)(uintptr_t)(v5) + v26) = v24;
        }
        --v6;
        v25 = v19;
        if ( v6 < (int)(uintptr_t)(v19) )
          break;
      }
      v19 = (hkcdBspImpl::MatPoly::Self *)((char *)v19 + 1);
      v5 += 2;
    }
    v30 = v6;
    if ( (int)(uintptr_t)(v29) < v6 )
    {
      for ( j = v32; ; j = (hkcdBspImpl::MatPoly::Self *)((char *)v21 + 1) )
      {
        v20 = (int)(uintptr_t)(j);
        v13 = *((uint32_t *)a1 + 2 * (((int)(uintptr_t)(v29) + v30) >> 1));
        v14 = (unsigned int *)((char *)a1 + 8 * (uint32_t)(uintptr_t)(v29));
        v15 = v30;
        v28 = v14 + 1;
        while ( 1 )
        {
          v21 = (hkcdBspImpl::MatPoly::Self *)(v20 - 1);
          if ( v13 <= *v14 )
          {
            v16 = (unsigned int *)((char *)a1 + 8 * v15);
            v17 = *v16;
            if ( *v16 > v13 )
            {
              v18 = (int)(uintptr_t)(a1) + 8 * v15 - 8;
              do
              {
                v16 = (unsigned int *)v18;
                v18 -= 8;
                v17 = *(uint32_t *)(v18 + 8);
                --v15;
              }
              while ( v13 < v17 );
            }
            if ( v15 < (int)(uintptr_t)(v21) )
              break;
            if ( (hkcdBspImpl::MatPoly::Self *)v15 != v21 )
            {
              v22 = v16[1];
              *v16 = *v14;
              v16[1] = v14[1];
              *v14 = v17;
              *(uint32_t *)((char *)v28 + (uint32_t)(uintptr_t)(uintptr_t)((char *)v14 - 8 * (uint32_t)(uintptr_t)(v29) - (uint32_t)(uintptr_t)(a1))) = v22;
            }
            --v15;
            v21 = (hkcdBspImpl::MatPoly::Self *)v20;
            if ( v15 < v20 )
              break;
          }
          v14 += 2;
          ++v20;
        }
        if ( (int)(uintptr_t)(v29) < v15 )
          hkAlgorithm::quickSortRecursive_97b4cb(
            a1,
            v29,
            v15,
            (int (*)(int *, char *))hkcdBspImpl::MatPoly::less);
        if ( (int)(uintptr_t)(v21) >= v30 )
          break;
        v29 = v21;
      }
    }
    result = v25;
    if ( a2 <= (int)(uintptr_t)(v25) )
      break;
    v29 = v25;
    v3 = v25;
    v2 = a1;
  }
  return result;
}

#include "havok_missing_init_array.inl"


